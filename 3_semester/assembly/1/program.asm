;
;section .data
;    ; Первый сегмент данных: однобайтовое число
;    seg1_data:
;        db 0b11001010  ; Число в двоичной системе счисления
;
;    ; Второй сегмент данных: адрес перехода на первый сегмент кода
;    seg2_data:
;        dq first_code_segment  ; Адрес перехода на первый сегмент кода
;
;    ; Третий сегмент данных: ещё одно однобайтовое число
;    seg3_data:
;        db 0b10110100  ; Число в двоичной системе счисления

section .seg1_data
        db 0b11001010  ; Число в двоичной системе счисления
section .seg2_data
        fcs dd first_code_segment  ; Адрес перехода на первый сегмент кода
section .seg3_data
        db 0b10110100  ; Число в двоичной системе счисления

section .bss
    ; Сегмент стека: зарезервировать 20 байт
    stack_res:
        resb 20

section .text
    global _start  ; Начало программы

section .third_code_segment
    ; Третий сегмент кода
    ; Умножение числа из первого сегмента данных на 2
    mov al, [seg1_data]  ; AL = число из первого сегмента
    shl al, 1            ; Линейный сдвиг влево на 1 (умножение на 2)
    
    ; Деление числа из третьего сегмента данных на 4
    mov bl, [seg3_data]  ; BL = число из третьего сегмента
    shr bl, 2            ; Линейный сдвиг вправо на 2 (деление на 4)
    
    ; Переход на метку, определенную во втором сегменте данных
    mov rax, [seg2_data]  ; Адрес перехода в rax
    jmp rax               ; Межсегментный переход на метку в первом сегменте кода

    ; Метка завершения работы
    end_label:
        ; Корректное завершение программы
        mov rax, 60          ; Системный вызов для выхода (sys_exit)
        xor rdi, rdi         ; Код завершения 0
        syscall
        

section .first_code_segment
    ; Первый сегмент кода
    ; Получить значение третьего бита числа из первого сегмента данных
    mov bl, [seg1_data]  ; BL = число из первого сегмента
    rol bl, 5            ; Циклический сдвиг влево на 5 бит (чтобы третий бит оказался на месте старшего)
    and bl, 0b1          ; Извлекаем третий бит
    
    ; Переход во второй сегмент кода
    jmp second_code_segment

section .second_code_segment
    ; Второй сегмент кода
      ; Получить значение пятого бита числа из третьего сегмента данных
      mov bh, [seg3_data]  ; BH = число из третьего сегмента
      rol bh, 3            ; Циклический сдвиг влево на 3 бит (чтобы пятый бит оказался на месте старшего)
      and bh, 0b1          ; Извлекаем пятый бит
      
      ; Переход к метке завершения работы
      jmp end_label

  
_start:
  jmp third_code_segment