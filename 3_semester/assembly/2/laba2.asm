
data1 segment               ; ������ �������� ������ data1
    binary_val1 db 01011101b; ����������� ���������� binary_val1 � �������� ��������� 01011101
data1 ends                  ; ����� �������� ������ data1

data2 segment               ; ������ �������� ������ data2
    jmp_data dd 0           ; ���������� jmp_data, ����������� 4 ����� (32 ����) � �������������� ��������� 0.
                            ; ������������ ��� �������� ������� ���������-���������� ������ (���������)
data2 ends                  ; ����� �������� ������ data2

data3 segment               ; ������ �������� ������ data3
    binary_val3 db 00011101b; ����������� ���������� binary_val3 � �������� ��������� 00011101
data3 ends        ; ����� �������� ������ data3
data4 segment
    jmp_data1 dd 0
data4 ends
code1 segment               ; ������ �������� ���� code1                   
    nop
    nop
    nop
metka1:                     ; ����� metka1, ����������� �� ����� � �������� code1

    mov ax, data1           ; ��������� ����� �������� data1 � ������� AX
    mov ds, ax              ; ��������� �������� AX � ������� DS ��� �������� �� ������� ������
    mov ax, 0               ; ������� ������� AX (������������� � 0)

    mov bl, binary_val1     ; ��������� �������� binary_val1 � ������� BL
    ror bl, 2               ; ��������� ����������� ����� BL ������ �� 2 ���� (10101110)
    and bl, 00000001b       ; ��������� �����, �������� ������ ������� ��� (��� 0) � �������� BL

    mov ax, code2           ; ��������� ����� �������� code2 � AX ��� �������� �� ��������� ������� ����
    push ax                 ; ��������� ����� �������� code2 � ����
    mov ax, 0               ; ������� AX
                   
    mov ax, data4
    mov ds, ax 
    mov ax, 0 
 
    mov [jmp_data1+2], word ptr[code2]; ��������� ���������� ����� code1 � ������� ��� ����� jmp_data
    ;mov [jmp_data1], word ptr[metka2]; ��������� �������� ����� metka1 � ������� ��� ����� jmp_data

    jmp dword ptr [jmp_data1]; ������� �� 32-������� ������, ���������� � jmp_data
   
    
   
code1 ends                  ; ����� �������� ���� code1

code2 segment               ; ������ �������� ���� code2
;metka2:                     ; ����� metka2, ����������� �� ����� � �������� code2

    mov ax, data3           ; ��������� ����� �������� data3 � AX
    mov ds, ax              ; ��������� �������� AX � ������� DS ��� �������� �� ������� ������
    mov ax, 0               ; ������� ������� AX

    mov bh, binary_val3     ; ��������� �������� binary_val3 � ������� BH
    ror bh, 4               ; ��������� ����������� ����� BH ������ �� 4 ����
    and bh, 00000001b       ; ��������� �����, �������� ������ ������� ��� � �������� BH
             
    mov ax, data4
    mov ds, ax             
    mov ax, 0    
    ;mov [jmp_data1], 0
    mov [jmp_data1+2], word ptr[code3]; ��������� ���������� ����� code1 � ������� ��� ����� jmp_data
    mov [jmp_data1], word ptr[correct_work]; ��������� �������� ����� metka1 � ������� ��� ����� jmp_data

    jmp dword ptr [jmp_data1]; ������� �� 32-������� ������, ���������� � jmp_data
   
code2 ends                  ; ����� �������� ���� code2

code3 segment               ; ������ �������� ���� code3
start:                      ; ����� ����� � ���������

    mov ax, data1           ; ��������� ����� �������� data1 � AX
    mov ds, ax              ; ��������� �������� AX � ������� DS ��� �������� �� ������� ������
    mov ax, 0               ; ������� ������� AX

    mov al, binary_val1     ; ��������� �������� binary_val1 � ������� AL (01011101)
    shl al, 1               ; �������� ����� AL ����� �� 1 ��� (�������� 10111010)

    mov ax, data3           ; ��������� ����� �������� data3 � AX
    mov ds, ax              ; ��������� �������� AX � ������� DS ��� �������� �� ������� ������
    mov ax, 0               ; ������� ������� AX

    mov al, binary_val3     ; ��������� �������� binary_val3 � ������� AL (00011101)
    shr al, 2               ; �������� ����� AL ������ �� 2 ���� (�������� 00001110)

    mov ax, data2           ; ��������� ����� �������� data2 � AX
    mov ds, ax              ; ��������� �������� AX � ������� DS ��� �������� �� ������� ������
    mov ax, 0               ; ������� ������� AX

    mov [jmp_data+2], word ptr[code1]; ��������� ���������� ����� code1 � ������� ��� ����� jmp_data
    mov [jmp_data], word ptr[metka1]; ��������� �������� ����� metka1 � ������� ��� ����� jmp_data

    jmp dword ptr [jmp_data]; ������� �� 32-������� ������, ���������� � jmp_data

correct_work:               ; ����� ��� ������ �� ���������
    mov ax, 4c00h           ; ������� ������ �� ��������� (� DOS)
    int 21h                 ; ���������� ��� ���������� ���������
code3 ends                  ; ����� �������� ���� code3

end start                   ; ���������� ���������, ��������� �� ����� ����� (start)