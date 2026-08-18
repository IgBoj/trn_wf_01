import socket
import struct
import cv2
import numpy as np

UDP_IP = "0.0.0.0"  # Слушать все сетевые интерфейсы
UDP_PORT = 5533

# Формат структуры fg_header_t для struct.unpack:
# < - alignment (pack 1 / Маленький эндиан)
# B - uint8_t (magic)
# B - uint8_t (type)
# H - uint16_t (seq_num)
# H - uint16_t (total_parts)
# H - uint16_t (part_idx)
# H - uint16_t (payload_len)
HEADER_FORMAT = "<BBHHHH"
HEADER_SIZE = struct.calcsize(HEADER_FORMAT)

PKT_TYPE_MJPEG_CHUNK = 0x03
MAGIC_BYTE = 0x55

def main():
    # Создаем UDP сокет
    sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    sock.bind((UDP_IP, UDP_PORT))
    
    # Буфер для сборки текущего кадра: ключ - part_idx, значение - данные чанка
    current_frame_chunks = {}
    current_seq_num = -1
    total_parts_expected = 0

    print(f"Слушаю UDP порт {UDP_PORT}... Для выхода нажмите 'q' в окне видео.")

    try:
        while True:
            # Читаем пакет (максимальный размер чанка: 1400 полезной нагрузки + 10 заголовок)
            data, addr = sock.recvfrom(1500)
            
            if len(data) < HEADER_SIZE:
                continue
                
            # Разбираем заголовок пакета
            magic, pkt_type, seq_num, total_parts, part_idx, payload_len = struct.unpack(
                HEADER_FORMAT, data[:HEADER_SIZE]
            )
            
            # Валидация пакета
            if magic != MAGIC_BYTE or pkt_type != PKT_TYPE_MJPEG_CHUNK:
                continue # Игнорируем команды, телеметрию или битые пакеты
                
            payload = data[HEADER_SIZE : HEADER_SIZE + payload_len]
            
            # Если пришел чанк из нового кадра
            if seq_num != current_seq_num:
                # Если в предыдущем кадре мы успели собрать все части, пробуем его отобразить
                if current_seq_num != -1 and len(current_frame_chunks) == total_parts_expected:
                    process_full_frame(current_frame_chunks, current_seq_num)
                
                # Сбрасываем буфер под новый кадр
                current_frame_chunks = {}
                current_seq_num = seq_num
                total_parts_expected = total_parts
            
            # Сохраняем чанк в буфер текущего кадра
            current_frame_chunks[part_idx] = payload
            
            # Проверка: если собрали все чанки текущего кадра
            if len(current_frame_chunks) == total_parts_expected:
                process_full_frame(current_frame_chunks, current_seq_num)
                # Сбрасываем, чтобы не обрабатывать повторно
                current_frame_chunks = {}
                current_seq_num = -1

            # Обработка нажатия клавиш в окне OpenCV (без этого окно зависнет)
            if cv2.waitKey(1) & 0xFF == ord('q'):
                break

    except KeyboardInterrupt:
        print("\nОстановка скрипта пользователем.")
    finally:
        sock.close()
        cv2.destroyAllWindows()

def process_full_frame(chunks, seq_num):
    """Сборка полного JPEG-кадра из чанков и его вывод на экран."""
    full_jpeg_bytes = bytearray()
    
    # Собираем байты строго по порядку индексов чанков
    for idx in range(len(chunks)):
        if idx in chunks:
            full_jpeg_bytes.extend(chunks[idx])
        else:
            # Если потерялся хотя бы один UDP-чанк посреди кадра — кадр поврежден
            # print(f"Пропущен чанк {idx} в кадре {seq_num}")
            return 

    # Переводим байты в массив numpy
    frame_array = np.frombuffer(full_jpeg_bytes, dtype=np.uint8)
    
    # Декодируем JPEG в картинку OpenCV (BGR)
    img = cv2.imdecode(frame_array, cv2.IMREAD_COLOR)
    
    if img is not None:
        # 1. Показываем на экране как живое видео
        cv2.imshow("ESP32-P4 MJPEG Stream", img)
        
        # 2. ОПЦИОНАЛЬНО: Раскомментируйте строку ниже, если нужно сохранять кадры на диск
        # cv2.imwrite(f"frame_{seq_num:05d}.jpg", img)
    else:
        print(f"Ошибка декодирования JPEG для кадра {seq_num}")

if __name__ == "__main__":
    main()
