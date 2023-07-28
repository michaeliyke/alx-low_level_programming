SECTION .DATA
    hello_holberton:    db "Hello, Holberton",10
    length: equ $-hello_holberton

SECTION .TEXT
    GLOBAL main

main:
    call say_hi
    mov rax,60
    mov rdi,0
    syscall

say_hi:
    mov rax,1
    mov rdi,1
    mov rsi,hello_holberton
    mov rdx,length
    syscall
    ret

;nasm -f elf64 101-hello_holberton.asm && gcc -no-pie 101-hello_holberton.o && ./a.out