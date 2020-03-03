	.file	"assignment.cpp"
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.text._ZN3FooC2Ei,"axG",@progbits,_ZN3FooC5Ei,comdat
	.align 2
	.weak	_ZN3FooC2Ei
	.type	_ZN3FooC2Ei, @function
_ZN3FooC2Ei:
.LFB972:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %edx
	movl	%edx, (%rax)
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE972:
	.size	_ZN3FooC2Ei, .-_ZN3FooC2Ei
	.weak	_ZN3FooC1Ei
	.set	_ZN3FooC1Ei,_ZN3FooC2Ei
	.section	.text._ZN3FooD2Ev,"axG",@progbits,_ZN3FooD5Ev,comdat
	.align 2
	.weak	_ZN3FooD2Ev
	.type	_ZN3FooD2Ev, @function
_ZN3FooD2Ev:
.LFB975:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE975:
	.size	_ZN3FooD2Ev, .-_ZN3FooD2Ev
	.weak	_ZN3FooD1Ev
	.set	_ZN3FooD1Ev,_ZN3FooD2Ev
	.section	.text._ZN3FooaSERKS_,"axG",@progbits,_ZN3FooaSERKS_,comdat
	.align 2
	.weak	_ZN3FooaSERKS_
	.type	_ZN3FooaSERKS_, @function
_ZN3FooaSERKS_:
.LFB977:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rax
	movl	(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, (%rax)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE977:
	.size	_ZN3FooaSERKS_, .-_ZN3FooaSERKS_
	.text
	.globl	main
	.type	main, @function
main:
.LFB978:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA978
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	leaq	-32(%rbp), %rax
	movl	$2, %esi
	movq	%rax, %rdi
	call	_ZN3FooC1Ei
	leaq	-48(%rbp), %rax
	movl	$42, %esi
	movq	%rax, %rdi
	call	_ZN3FooC1Ei
	leaq	-48(%rbp), %rdx
	leaq	-32(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN3FooaSERKS_
	movl	-32(%rbp), %eax
	movl	%eax, %esi
	movl	$_ZSt4cout, %edi
.LEHB0:
	call	_ZNSolsEi
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
.LEHE0:
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN3FooD1Ev
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN3FooD1Ev
	movl	$0, %eax
	jmp	.L10
.L9:
	movq	%rax, %rbx
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN3FooD1Ev
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN3FooD1Ev
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB1:
	call	_Unwind_Resume
.LEHE1:
.L10:
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE978:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA978:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE978-.LLSDACSB978
.LLSDACSB978:
	.uleb128 .LEHB0-.LFB978
	.uleb128 .LEHE0-.LEHB0
	.uleb128 .L9-.LFB978
	.uleb128 0
	.uleb128 .LEHB1-.LFB978
	.uleb128 .LEHE1-.LEHB1
	.uleb128 0
	.uleb128 0
.LLSDACSE978:
	.text
	.size	main, .-main
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB984:
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
	jne	.L11
	cmpl	$65535, -8(%rbp)
	jne	.L11
	movl	$_ZStL8__ioinit, %edi
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, %edx
	movl	$_ZStL8__ioinit, %esi
	movl	$_ZNSt8ios_base4InitD1Ev, %edi
	call	__cxa_atexit
.L11:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE984:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB985:
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
.LFE985:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I_main
	.hidden	__dso_handle
	.ident	"GCC: (GNU) 4.8.3 20140911 (Red Hat 4.8.3-7)"
	.section	.note.GNU-stack,"",@progbits
