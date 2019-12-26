	.file	"struct_padding.c"
	.comm	A,13,1
	.section	.rodata
	.align 8
.LC0:
	.string	"\n Size of structure A is : %ld"
	.align 8
.LC1:
	.string	"\n Size of int %d \n Size of char %d \n Size of double %ld \n totalsize is %ld"
	.align 8
.LC2:
	.string	"\n *******************************************"
	.align 8
.LC3:
	.string	"\n Finding structure size without sizeof operator"
.LC4:
	.string	"\nSize of structure = %u \n\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$13, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	movl	$8, %ecx
	movl	$1, %edx
	movl	$4, %esi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	printf
	movl	$.LC2, %edi
	movl	$0, %eax
	call	printf
	movl	$.LC3, %edi
	movl	$0, %eax
	call	printf
	addq	$13, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC4, %edi
	movl	$0, %eax
	call	printf
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident	"GCC: (GNU) 4.8.3 20140911 (Red Hat 4.8.3-7)"
	.section	.note.GNU-stack,"",@progbits
