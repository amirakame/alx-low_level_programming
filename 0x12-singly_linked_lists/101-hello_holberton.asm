global main
extern printf

section .data
format db 'Hello, Holberton%s', 10, 0 ; format string for printf, with newline character and null byte

section .text
main:
xor eax, eax ; clear rax
push format ; push format string onto the stack
call printf ; call printf with the format string on the stack

add rsp, 8 ; remove arguments from the stack
ret ; db `Hello, Holberton\n`,0
