	.file	"bubble_sort.cpp"
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.globl	obj
	.bss
	.type	obj, @object
	.size	obj, 1
obj:
	.zero	1
	.text
	.globl	_Z4swapPiS_
	.type	_Z4swapPiS_, @function
_Z4swapPiS_:
.LFB971:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, -4(%rbp)
	movq	-32(%rbp), %rax
	movl	(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, (%rax)
	movq	-32(%rbp), %rax
	movl	-4(%rbp), %edx
	movl	%edx, (%rax)
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE971:
	.size	_Z4swapPiS_, .-_Z4swapPiS_
	.section	.rodata
.LC0:
	.string	"\n"
	.text
	.globl	_Z10printArrayPii
	.type	_Z10printArrayPii, @function
_Z10printArrayPii:
.LFB972:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L3
.L4:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, %esi
	movl	$_ZSt4cout, %edi
	call	_ZNSolsEi
	addl	$1, -4(%rbp)
.L3:
	movl	-4(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jl	.L4
	movl	$.LC0, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE972:
	.size	_Z10printArrayPii, .-_Z10printArrayPii
	.globl	_Z10bubbleSortPii
	.type	_Z10bubbleSortPii, @function
_Z10bubbleSortPii:
.LFB973:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	$1, -4(%rbp)
	jmp	.L6
.L10:
	movl	-4(%rbp), %eax
	movl	%eax, -8(%rbp)
	jmp	.L7
.L9:
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	-8(%rbp), %eax
	cltq
	addq	$1, %rax
	leaq	0(,%rax,4), %rcx
	movq	-24(%rbp), %rax
	addq	%rcx, %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	jle	.L8
	movl	-8(%rbp), %eax
	cltq
	addq	$1, %rax
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rax, %rdx
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	movq	-24(%rbp), %rax
	addq	%rcx, %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_Z4swapPiS_
.L8:
	addl	$1, -8(%rbp)
.L7:
	movl	-4(%rbp), %eax
	movl	-28(%rbp), %edx
	subl	%eax, %edx
	movl	%edx, %eax
	subl	$1, %eax
	cmpl	-8(%rbp), %eax
	jg	.L9
	addl	$1, -4(%rbp)
.L6:
	movl	-28(%rbp), %eax
	subl	$1, %eax
	cmpl	-4(%rbp), %eax
	jg	.L10
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE973:
	.size	_Z10bubbleSortPii, .-_Z10bubbleSortPii
	.globl	_Z13insertionSortPii
	.type	_Z13insertionSortPii, @function
_Z13insertionSortPii:
.LFB974:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	$1, -4(%rbp)
	jmp	.L12
.L16:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, -12(%rbp)
	movl	-4(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -8(%rbp)
	jmp	.L13
.L15:
	movl	-8(%rbp), %eax
	cltq
	addq	$1, %rax
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rax, %rdx
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	movq	-24(%rbp), %rax
	addq	%rcx, %rax
	movl	(%rax), %eax
	movl	%eax, (%rdx)
	subl	$1, -8(%rbp)
.L13:
	cmpl	$0, -8(%rbp)
	js	.L14
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	cmpl	-12(%rbp), %eax
	jg	.L15
.L14:
	movl	-8(%rbp), %eax
	cltq
	addq	$1, %rax
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rax, %rdx
	movl	-12(%rbp), %eax
	movl	%eax, (%rdx)
	addl	$1, -4(%rbp)
.L12:
	movl	-4(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jl	.L16
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE974:
	.size	_Z13insertionSortPii, .-_Z13insertionSortPii
	.section	.rodata
.LC1:
	.string	"array size is \n"
	.align 8
.LC2:
	.string	"Menu : 1.Bubble_sort \n 2.InsertionSort \n"
.LC3:
	.string	"Array Before Bubble sort \n"
.LC4:
	.string	"Array After Bubble sort \n"
.LC5:
	.string	"Array Before Insertion sort \n"
.LC6:
	.string	"Array After Insertion sort \n"
.LC7:
	.string	"Choice out of bounds \n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB975:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	$20, -32(%rbp)
	movl	$2, -28(%rbp)
	movl	$14, -24(%rbp)
	movl	$9, -20(%rbp)
	movl	$24, -16(%rbp)
	movl	$6, -12(%rbp)
	movl	$6, %eax
	movl	%eax, -4(%rbp)
	movl	$.LC1, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	-4(%rbp), %edx
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_ZNSolsEi
	movl	$.LC2, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	cmpl	$2, -8(%rbp)
	jg	.L18
	movl	-8(%rbp), %eax
	cmpl	$1, %eax
	je	.L20
	cmpl	$2, %eax
	je	.L21
	jmp	.L19
.L20:
	movl	$.LC3, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	-4(%rbp), %edx
	leaq	-32(%rbp), %rax
	movq	%rax, %rsi
	movl	$obj, %edi
	call	_ZN7Sorting10printArrayEPii
	movl	-4(%rbp), %edx
	leaq	-32(%rbp), %rax
	movq	%rax, %rsi
	movl	$obj, %edi
	call	_ZN7Sorting10bubbleSortEPii
	movl	$.LC4, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	-4(%rbp), %edx
	leaq	-32(%rbp), %rax
	movq	%rax, %rsi
	movl	$obj, %edi
	call	_ZN7Sorting10printArrayEPii
	nop
	jmp	.L18
.L21:
	movl	$.LC5, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	-4(%rbp), %edx
	leaq	-32(%rbp), %rax
	movq	%rax, %rsi
	movl	$obj, %edi
	call	_ZN7Sorting10printArrayEPii
	movl	-4(%rbp), %edx
	leaq	-32(%rbp), %rax
	movq	%rax, %rsi
	movl	$obj, %edi
	call	_ZN7Sorting13insertionSortEPii
	movl	$.LC6, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	-4(%rbp), %edx
	leaq	-32(%rbp), %rax
	movq	%rax, %rsi
	movl	$obj, %edi
	call	_ZN7Sorting10printArrayEPii
.L19:
	movl	$.LC7, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
.L18:
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE975:
	.size	main, .-main
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB979:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L24
	cmpl	$65535, -8(%rbp)
	jne	.L24
	movl	$_ZStL8__ioinit, %edi
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, %edx
	movl	$_ZStL8__ioinit, %esi
	movl	$_ZNSt8ios_base4InitD1Ev, %edi
	call	__cxa_atexit
.L24:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE979:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_obj, @function
_GLOBAL__sub_I_obj:
.LFB980:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE980:
	.size	_GLOBAL__sub_I_obj, .-_GLOBAL__sub_I_obj
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I_obj
	.hidden	__dso_handle
	.ident	"GCC: (GNU) 4.8.3 20140911 (Red Hat 4.8.3-7)"
	.section	.note.GNU-stack,"",@progbits
