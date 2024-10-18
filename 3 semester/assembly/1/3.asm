format ELF64 executable 3

segment readable executable 

entry main 

main: 
 mov ebp, esp; for correct debugging
  lea rdi, [msg]
  mov rax, 14 
  mov rdx,rax
  mov rsi,rdi
  mov rdi, 1 
  mov rax,1 
mov esp, ebp
  syscall 
  xor rdi, rdi 
  mov rax, 60 
  syscall

segment readable writable 

msg db 'Hello world!',10,0
