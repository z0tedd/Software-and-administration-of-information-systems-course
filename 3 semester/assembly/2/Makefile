
# Имя выходного файла
TARGET = program

# Название исходного файла
SRC = program.asm

# Компилятор и линкер
NASM = nasm
LD = ld

# Флаги для компиляции и линковки
NASMFLAGS = -f elf64 -g -F dwarf
LDFLAGS = 

# Правила
all: $(TARGET)

$(TARGET): main.o
	$(LD) $(LDFLAGS) -o $(TARGET) main.o

main.o: $(SRC)
	$(NASM) $(NASMFLAGS) -o main.o $(SRC)

# Очистка
clean:
	rm -f *.o $(TARGET)

# Запуск отладки
debug: $(TARGET)
	gdb $(TARGET)
