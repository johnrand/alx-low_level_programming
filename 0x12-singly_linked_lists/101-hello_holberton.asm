section .data
    msg db 'Hello, Holberton', 0
section .text
    global _start
_start:
    ; set up stack
    mov rsp, rbp
    sub rsp, 16
    ; call printf
    mov edi, msg
    mov eax, 0
    call printf
    ; exit program
    mov eax, 0
    add rsp, 16
    ret

