#include "include/TXParagCtrlChars.h"

/**
 * Symbol: TXParagCtrlChars::Define(TXChars *, long, long)
 * Address: 00242a2c
 */
TXParagCtrlChars::Define(TXChars *, long, long) {
    /*
        242a2c:	e1a0c00d 	mov	ip, sp
        242a30:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        242a34:	e24cb004 	sub	fp, ip, #4	; 0x4
        242a38:	e1a04000 	mov	r4, r0
        242a3c:	e1a06001 	mov	r6, r1
        242a40:	e1a05002 	mov	r5, r2
        242a44:	e5802000 	str	r2, [r0]
        242a48:	e3a00000 	mov	r0, #0	; 0x0
        242a4c:	e5840008 	str	r0, [r4, #8]	; fField8
        242a50:	e0437002 	sub	r7, r3, r2
        242a54:	e584008c 	str	r0, [r4, #140]	; fField140
        242a58:	e3a00902 	mov	r0, #32768	; 0x8000
        242a5c:	e2400001 	sub	r0, r0, #1	; 0x1
        242a60:	e1570000 	cmp	r7, r0
        242a64:	c1a07000 	movgt	r7, r0
        242a68:	e3a08000 	mov	r8, #0	; 0x0
        242a6c:	e284900c 	add	r9, r4, #12	; 0xc
        242a70:	e3370000 	teq	r7, #0	; 0x0
        242a74:	0a000025 	beq	242b10 <TXParagCtrlChars::Define(TXChars *, long, long)+0xe4>
        242a78:	e24dd004 	sub	sp, sp, #4	; 0x4
        242a7c:	e0881005 	add	r1, r8, r5
        242a80:	e1a0300d 	mov	r3, sp
        242a84:	e1a02007 	mov	r2, r7
        242a88:	e1a00006 	mov	r0, r6
        242a8c:	e596c000 	ldr	ip, [r6]
        242a90:	e1a0e00f 	mov	lr, pc
        242a94:	e28cf028 	add	pc, ip, #40	; 0x28
        242a98:	e3500000 	cmp	r0, #0	; 0x0
        242a9c:	b0888007 	addlt	r8, r8, r7
        242aa0:	ba000014 	blt	242af8 <TXParagCtrlChars::Define(TXChars *, long, long)+0xcc>
        242aa4:	e0881000 	add	r1, r8, r0
        242aa8:	e2818001 	add	r8, r1, #1	; 0x1
        242aac:	e5c91001 	strb	r1, [r9, #1]
        242ab0:	e1a01441 	mov	r1, r1, asr #8
        242ab4:	e4c91002 	strb	r1, [r9], #2
        242ab8:	e59d2002 	ldr	r2, [sp, #2]
        242abc:	e5941008 	ldr	r1, [r4, #8]	; fField8
        242ac0:	e0841081 	add	r1, r4, r1, lsl #1
        242ac4:	e5c1204d 	strb	r2, [r1, #77]
        242ac8:	e1a02442 	mov	r2, r2, asr #8
        242acc:	e5c1204c 	strb	r2, [r1, #76]	; fField76
        242ad0:	e5941008 	ldr	r1, [r4, #8]	; fField8
        242ad4:	e2811001 	add	r1, r1, #1	; 0x1
        242ad8:	e5841008 	str	r1, [r4, #8]	; fField8
        242adc:	e3310020 	teq	r1, #32	; 0x20
        242ae0:	159d1002 	ldrne	r1, [sp, #2]
        242ae4:	11a01801 	movne	r1, r1, lsl #16
        242ae8:	11a01821 	movne	r1, r1, lsr #16
        242aec:	1331000a 	teqne	r1, #10	; 0xa
        242af0:	1331000d 	teqne	r1, #13	; 0xd
        242af4:	1a000001 	bne	242b00 <TXParagCtrlChars::Define(TXChars *, long, long)+0xd4>
        242af8:	e28dd004 	add	sp, sp, #4	; 0x4
        242afc:	ea000003 	b	242b10 <TXParagCtrlChars::Define(TXChars *, long, long)+0xe4>
        242b00:	e2800001 	add	r0, r0, #1	; 0x1
        242b04:	e0577000 	subs	r7, r7, r0
        242b08:	e28dd004 	add	sp, sp, #4	; 0x4
        242b0c:	1affffd9 	bne	242a78 <TXParagCtrlChars::Define(TXChars *, long, long)+0x4c>
        242b10:	e0850008 	add	r0, r5, r8
        242b14:	e5a40004 	str	r0, [r4, #4]!	; fField4
        242b18:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TXParagCtrlChars::GetCurrCtrlOffset(void)
 * Address: 00242b1c
 */
TXParagCtrlChars::GetCurrCtrlOffset(void) {
    /*
        242b1c:	e590108c 	ldr	r1, [r0, #140]	; fField140
        242b20:	e5902008 	ldr	r2, [r0, #8]	; fField8
        242b24:	e1510002 	cmp	r1, r2
        242b28:	a3e00000 	mvnge	r0, #0	; 0x0
        242b2c:	a1a0f00e 	movge	pc, lr
        242b30:	e0801081 	add	r1, r0, r1, lsl #1
        242b34:	e591100c 	ldr	r1, [r1, #12]
        242b38:	e5900000 	ldr	r0, [r0]
        242b3c:	e0800841 	add	r0, r0, r1, asr #16
        242b40:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXParagCtrlChars::GetCurrCtrlChar(void)
 * Address: 00242b44
 */
TXParagCtrlChars::GetCurrCtrlChar(void) {
    /*
        242b44:	e590108c 	ldr	r1, [r0, #140]	; fField140
        242b48:	e5902008 	ldr	r2, [r0, #8]	; fField8
        242b4c:	e1510002 	cmp	r1, r2
        242b50:	a3a00000 	movge	r0, #0	; 0x0
        242b54:	b0800081 	addlt	r0, r0, r1, lsl #1
        242b58:	b590004c 	ldrlt	r0, [r0, #76]	; fField76
        242b5c:	b1a00820 	movlt	r0, r0, lsr #16
        242b60:	e1a00800 	mov	r0, r0, lsl #16
        242b64:	e1a00820 	mov	r0, r0, lsr #16
        242b68:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXParagCtrlChars::Invalid(void)
 * Address: 00242b6c
 */
TXParagCtrlChars::Invalid(void) {
    /*
        242b6c:	e3a01000 	mov	r1, #0	; 0x0
        242b70:	e5801004 	str	r1, [r0, #4]	; fField4
        242b74:	e5a0108c 	str	r1, [r0, #140]!	; fField140
        242b78:	e1a0f00e 	mov	pc, lr
    */
}

