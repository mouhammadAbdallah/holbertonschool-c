	section .text
	global _start

_start:
	mov rax, 1 		;write
	mov rdi, 1 		; stdout
	mov rsi, message
	mov rdx, message_length
	syscall

	mov rax, 60
	xor rdi, rdi     	; ret 0 sucess
	syscall

	message	db "Hello, Holberton", 0x0A
	message_length	 equ $ - message