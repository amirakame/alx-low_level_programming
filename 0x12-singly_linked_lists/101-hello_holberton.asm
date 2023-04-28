global main
extern printf

section .data
msg db "Hello, Holberton", 10

section .text
main:
mov     rax, 1          ; system call for write
mov     rdi, 1          ; file handle 1 is stdout
mov     rsi, msg        ; address of string to output
mov     rdx, 14         ; number of bytes
syscall                  ; invoke operating system to do the write
mov     rax, 60         ; system call for exit
xor     rdi, rdi       ; exit code 0
syscall                  ; invoke operating system to exit
