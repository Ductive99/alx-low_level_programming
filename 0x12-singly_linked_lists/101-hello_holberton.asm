section .data
	hello db 'Hello, Holberton', 0xA
	hello_len equ $ - hello

section .text
	global main

main:
	mov rsi, hello
	mov rdx, hello_len
	mov rdi, 1
	mov rax, 1
	syscall

	mov rax, 60
	xor rdi, rdi
	syscall
