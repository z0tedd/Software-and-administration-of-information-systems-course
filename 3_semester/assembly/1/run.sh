nasm -f elf64 -g -F dwarf -o main.o program.asm
ld -o program main.o
gdb program
