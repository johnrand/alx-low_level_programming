section .data
    message db "Hello, Holberton", 10, 0

section .text
    global main

    extern printf

main:
    push    message
    call    printf
    add     rsp, 8

    mov     eax, 0
    ret
