section .text
  global _checkStack 
  
_checkStack:
	push ebp 
	mov ebp, esp 
	lea edx, [ebp + 8]
	cmp esp, edx 
	jne error 

return:
	pop ebp 
	mov eax, 1
	ret 
	
error:
	pop ebp 
	mov eax, -1 
	ret 
