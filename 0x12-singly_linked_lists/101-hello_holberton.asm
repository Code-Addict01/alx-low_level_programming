section .data
	str: db "Hello, Holberton", 0xA, 0
	fmt: db "%s"

section .text
	extern printf
	global main

main:
	mov rax, 0
	mov rsi, str
	mov rdi, fmt
	call printf

	mov rax, 0
	ret
