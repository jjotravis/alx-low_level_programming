global main

section .text

main:
mov rax, 1 ;system calls for write
mov rdi, 1 ; file handle 1 stdout
mov rsi, message ;address of stringto print
mov rdx, 20 ; number of bytes
syscall ; invoke sys to wtite

mov rax, 60 ; system call for exit
xor rdi, rdi ; ecit code
syscall ; invoke sys to exit

section .data
message: db "Hello, Holberton", 10 ; string output