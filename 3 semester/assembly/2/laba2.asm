
data1 segment               ; Начало сегмента данных data1
    binary_val1 db 01011101b; Определение переменной binary_val1 с двоичным значением 01011101
data1 ends                  ; Конец сегмента данных data1

data2 segment               ; Начало сегмента данных data2
    jmp_data dd 0           ; Переменная jmp_data, резервируем 4 байта (32 бита) и инициализируем значением 0.
                            ; Используется для хранения полного сегментно-смещенного адреса (указателя)
data2 ends                  ; Конец сегмента данных data2

data3 segment               ; Начало сегмента данных data3
    binary_val3 db 00011101b; Определение переменной binary_val3 с двоичным значением 00011101
data3 ends        ; Конец сегмента данных data3
data4 segment
    jmp_data1 dd 0
data4 ends
code1 segment               ; Начало сегмента кода code1                   
    nop
    nop
    nop
metka1:                     ; Метка metka1, указывающая на адрес в сегменте code1

    mov ax, data1           ; Загружаем адрес сегмента data1 в регистр AX
    mov ds, ax              ; Загружаем значение AX в регистр DS для указания на сегмент данных
    mov ax, 0               ; Очищаем регистр AX (устанавливаем в 0)

    mov bl, binary_val1     ; Загружаем значение binary_val1 в регистр BL
    ror bl, 2               ; Выполняем циклический сдвиг BL вправо на 2 бита (10101110)
    and bl, 00000001b       ; Применяем маску, оставляя только младший бит (бит 0) в регистре BL

    mov ax, code2           ; Загружаем адрес сегмента code2 в AX для указания на следующий сегмент кода
    push ax                 ; Сохраняем адрес сегмента code2 в стек
    mov ax, 0               ; Очищаем AX
                   
    mov ax, data4
    mov ds, ax 
    mov ax, 0 
 
    mov [jmp_data1+2], word ptr[code2]; Сохраняем сегментный адрес code1 в старшие два байта jmp_data
    ;mov [jmp_data1], word ptr[metka2]; Сохраняем смещение метки metka1 в младшие два байта jmp_data

    jmp dword ptr [jmp_data1]; Переход по 32-битному адресу, указанному в jmp_data
   
    
   
code1 ends                  ; Конец сегмента кода code1

code2 segment               ; Начало сегмента кода code2
;metka2:                     ; Метка metka2, указывающая на адрес в сегменте code2

    mov ax, data3           ; Загружаем адрес сегмента data3 в AX
    mov ds, ax              ; Загружаем значение AX в регистр DS для указания на сегмент данных
    mov ax, 0               ; Очищаем регистр AX

    mov bh, binary_val3     ; Загружаем значение binary_val3 в регистр BH
    ror bh, 4               ; Выполняем циклический сдвиг BH вправо на 4 бита
    and bh, 00000001b       ; Применяем маску, оставляя только младший бит в регистре BH
             
    mov ax, data4
    mov ds, ax             
    mov ax, 0    
    ;mov [jmp_data1], 0
    mov [jmp_data1+2], word ptr[code3]; Сохраняем сегментный адрес code1 в старшие два байта jmp_data
    mov [jmp_data1], word ptr[correct_work]; Сохраняем смещение метки metka1 в младшие два байта jmp_data

    jmp dword ptr [jmp_data1]; Переход по 32-битному адресу, указанному в jmp_data
   
code2 ends                  ; Конец сегмента кода code2

code3 segment               ; Начало сегмента кода code3
start:                      ; Точка входа в программу

    mov ax, data1           ; Загружаем адрес сегмента data1 в AX
    mov ds, ax              ; Загружаем значение AX в регистр DS для указания на сегмент данных
    mov ax, 0               ; Очищаем регистр AX

    mov al, binary_val1     ; Загружаем значение binary_val1 в регистр AL (01011101)
    shl al, 1               ; Линейный сдвиг AL влево на 1 бит (получаем 10111010)

    mov ax, data3           ; Загружаем адрес сегмента data3 в AX
    mov ds, ax              ; Загружаем значение AX в регистр DS для указания на сегмент данных
    mov ax, 0               ; Очищаем регистр AX

    mov al, binary_val3     ; Загружаем значение binary_val3 в регистр AL (00011101)
    shr al, 2               ; Линейный сдвиг AL вправо на 2 бита (получаем 00001110)

    mov ax, data2           ; Загружаем адрес сегмента data2 в AX
    mov ds, ax              ; Загружаем значение AX в регистр DS для указания на сегмент данных
    mov ax, 0               ; Очищаем регистр AX

    mov [jmp_data+2], word ptr[code1]; Сохраняем сегментный адрес code1 в старшие два байта jmp_data
    mov [jmp_data], word ptr[metka1]; Сохраняем смещение метки metka1 в младшие два байта jmp_data

    jmp dword ptr [jmp_data]; Переход по 32-битному адресу, указанному в jmp_data

correct_work:               ; Метка для выхода из программы
    mov ax, 4c00h           ; Команда выхода из программы (в DOS)
    int 21h                 ; Прерывание для завершения программы
code3 ends                  ; Конец сегмента кода code3

end start                   ; Завершение программы, указатель на точку входа (start)