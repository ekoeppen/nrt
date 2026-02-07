#include "include/TRefStructStack.h"

/**
 * Symbol: TRefStructStack::__ct(void)
 * Address: 001a4a78
 */
TRefStructStack::TRefStructStack(void) {
    /*
        1a4a78:	e1a0c00d 	mov	ip, sp
        1a4a7c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1a4a80:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a4a84:	e1b04000 	movs	r4, r0
        1a4a88:	1a000005 	bne	1a4aa4 <TRefStructStack::__ct(void)+0x2c>
        1a4a8c:	e3a00018 	mov	r0, #24	; 0x18
        1a4a90:	eb68a728 	bl	1bce738 <$__nw(unsigned int)>
        1a4a94:	e1b04000 	movs	r4, r0
        1a4a98:	1a000001 	bne	1a4aa4 <TRefStructStack::__ct(void)+0x2c>
        1a4a9c:	e1a00004 	mov	r0, r4
        1a4aa0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1a4aa4:	e1a00004 	mov	r0, r4
        1a4aa8:	eb625cd1 	bl	1a3bdf4 <TRefStack::$__ct(void)>
        1a4aac:	e24dd008 	sub	sp, sp, #8	; 0x8
        1a4ab0:	e59f0058 	ldr	r0, [pc, #58]	; 1a4b10 <TRefStructStack::__ct(void)+0x98>
        1a4ab4:	e5900000 	ldr	r0, [r0]
        1a4ab8:	e2400054 	sub	r0, r0, #84	; 0x54
        1a4abc:	e1a01000 	mov	r1, r0
        1a4ac0:	e5900034 	ldr	r0, [r0, #52]	; fField52
        1a4ac4:	e1a0300d 	mov	r3, sp
        1a4ac8:	e5b12040 	ldr	r2, [r1, #64]!
        1a4acc:	e92d0008 	stmdb	sp!, {r3}
        1a4ad0:	e28d3008 	add	r3, sp, #8	; 0x8
        1a4ad4:	e3a01801 	mov	r1, #65536	; 0x10000
        1a4ad8:	eb68cc31 	bl	1bd7ba4 <$NewStack>
        1a4adc:	e28dd004 	add	sp, sp, #4	; 0x4
        1a4ae0:	e3300000 	teq	r0, #0	; 0x0
        1a4ae4:	0a000004 	beq	1a4afc <TRefStructStack::__ct(void)+0x84>
        1a4ae8:	e1a01000 	mov	r1, r0
        1a4aec:	e59f0020 	ldr	r0, [pc, #20]	; 1a4b14 <TRefStructStack::__ct(void)+0x9c>	; fField20
        1a4af0:	e5900000 	ldr	r0, [r0]
        1a4af4:	e3a02000 	mov	r2, #0	; 0x0
        1a4af8:	eb68f9a7 	bl	1be319c <$Throw>
        1a4afc:	e59d0000 	ldr	r0, [sp]
        1a4b00:	e5840010 	str	r0, [r4, #16]	; fField16
        1a4b04:	e5840014 	str	r0, [r4, #20]	; fField20
        1a4b08:	e28dd008 	add	sp, sp, #8	; 0x8
        1a4b0c:	eaffffe2 	b	1a4a9c <TRefStructStack::__ct(void)+0x24>
        1a4b10:	0c10105c 	ldceq	0, cr1, [r0], -#368
        1a4b14:	003712a4 	eoreqs	r1, r7, r4, lsr #5
    */
}

/**
 * Symbol: TRefStructStack::__dt(void)
 * Address: 001a4b18
 */
TRefStructStack::~TRefStructStack(void) {
    /*
        1a4b18:	e1a0c00d 	mov	ip, sp
        1a4b1c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1a4b20:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a4b24:	e1a04000 	mov	r4, r0
        1a4b28:	e1a05001 	mov	r5, r1
        1a4b2c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1a4b30:	eb68b78b 	bl	1bd2964 <$FreePagedMem>
        1a4b34:	e1a00004 	mov	r0, r4
        1a4b38:	e3a01000 	mov	r1, #0	; 0x0
        1a4b3c:	eb62d464 	bl	1a59cd4 <TRefStack::$__dt(void)>
        1a4b40:	e3150001 	tst	r5, #1	; 0x1
        1a4b44:	11a00004 	movne	r0, r4
        1a4b48:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1a4b4c:	1a68a2e3 	bne	1bcd6e0 <$__dl(void *)>
        1a4b50:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TRefStructStack::Fill(void)
 * Address: 001a4b54
 */
TRefStructStack::Fill(void) {
    /*
        1a4b54:	e92d4000 	stmdb	sp!, {lr}
        1a4b58:	e5901014 	ldr	r1, [r0, #20]	; fField20
        1a4b5c:	e1a0c001 	mov	ip, r1
        1a4b60:	e5902004 	ldr	r2, [r0, #4]	; fField4
        1a4b64:	e590e000 	ldr	lr, [r0]
        1a4b68:	e05ee002 	subs	lr, lr, r2
        1a4b6c:	e5903010 	ldr	r3, [r0, #16]	; fField16
        1a4b70:	428ee003 	addmi	lr, lr, #3	; 0x3
        1a4b74:	e1a0e14e 	mov	lr, lr, asr #2
        1a4b78:	e083e10e 	add	lr, r3, lr, lsl #2
        1a4b7c:	e05c3003 	subs	r3, ip, r3
        1a4b80:	42833003 	addmi	r3, r3, #3	; 0x3
        1a4b84:	e1a03143 	mov	r3, r3, asr #2
        1a4b88:	e0822103 	add	r2, r2, r3, lsl #2
        1a4b8c:	e151000e 	cmp	r1, lr
        1a4b90:	2a000004 	bcs	1a4ba8 <TRefStructStack::Fill(void)+0x54>
        1a4b94:	e1a03002 	mov	r3, r2
        1a4b98:	e2822004 	add	r2, r2, #4	; 0x4
        1a4b9c:	e4813004 	str	r3, [r1], #4	; fField4
        1a4ba0:	e151000e 	cmp	r1, lr
        1a4ba4:	3afffffa 	bcc	1a4b94 <TRefStructStack::Fill(void)+0x40>
        1a4ba8:	e5a01014 	str	r1, [r0, #20]!	; fField20
        1a4bac:	e8bd8000 	ldmia	sp!, {pc}
    */
}

