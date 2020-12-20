BITS 64

	global asm_strlen		; EXPORT our 'asm_strlen' function

	section .text

	; size_t asm_strlen(const char *str);
	; a copycat of the function strlen(3)
	;
	; rdi <- str

asm_strlen:
	push rbp		; Setup stack frame
	mov rbp, rsp		; Those two lines are equivalent to 'enter'

	sub ecx, ecx
	sub al, al
	not ecx

	cld
repne	scasb
	not ecx
	lea eax, [ecx-1]	
end:	
	mov rsp, rbp		; Restore previous stack frame
	pop rbp			; Those two lines are equivalent to 'leave'

	ret			; Return from procedure ('pop rip')
