section .data	; Written with ChatGPT, by john-livingprooff
    hello db "Hello, Holberton",0
    format db "%s",10,0  ; Format string for printf

section .text
    global main
    extern printf

main:
    push rbp            ; Prepare stack frame
    mov rdi, format     ; Load format string address
    mov rsi, hello      ; Load string address
    call printf        ; Call printf function
    pop rbp             ; Restore stack frame

    xor rax, rax        ; Return 0
    ret

