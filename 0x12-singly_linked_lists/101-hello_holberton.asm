section .data
    msg db "Hello, Holberton", 0Ah, 0

section .text
    global _start

_start:
    ; prepare arguments for printf
    push qword msg
    call printf
    add rsp, 8 ; clean up the stack

    ; exit the program with status code 0
    mov eax, 0
    ret

section .note.GNU-stack noalloc noexec nowrite progbits
