	.file	"t.c"
	.globl	ch
	.section	.rodata
.LC0:
	.string	"dkfjg"
	.data
	.align 8
	.type	ch, @object
	.size	ch, 8
ch:
	.quad	.LC0
	.globl	a
	.section	.rodata
	.align 4
	.type	a, @object
	.size	a, 4
a:
	.long	8
.LC1:
	.string	"%d   %d"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	ch(%rip), %rax
	movq	%rax, %rdx
	movl	$a, %esi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	printf
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.10) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
