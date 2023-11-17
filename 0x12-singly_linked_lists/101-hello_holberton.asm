ection .data
hello db 'Hello, Holberton', 0; our string
format db '%s', 10, 0; format for printf newline is 10 in decimal

section .text
global main
extern printf

main:
; push parameter for printf in reverse order
push format
push hello

; call printf
call printf
add exp, 8 ; clean up stack

, return 0
xor eax, eax
ret
