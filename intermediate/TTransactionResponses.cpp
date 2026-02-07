#include "include/TTransactionResponses.h"

/**
 * Symbol: TTransactionResponses::__ct(void)
 * Address: 00027e3c
 */
TTransactionResponses::TTransactionResponses(void) {
    /*
         27e3c:	e1a0c00d 	mov	ip, sp
         27e40:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         27e44:	e24cb004 	sub	fp, ip, #4	; 0x4
         27e48:	e1b04000 	movs	r4, r0
         27e4c:	1a000003 	bne	27e60 <TTransactionResponses::__ct(void)+0x24>
         27e50:	e3a0006c 	mov	r0, #108	; 0x6c
         27e54:	eb6e9a37 	bl	1bce738 <$__nw(unsigned int)>
         27e58:	e1b04000 	movs	r4, r0
         27e5c:	0a000003 	beq	27e70 <TTransactionResponses::__ct(void)+0x34>
         27e60:	e1a00004 	mov	r0, r4
         27e64:	eb6f2ed2 	bl	1bf39b4 <TMemoryObject::$__ct(void)>
         27e68:	e3a00044 	mov	r0, #68	; 0x44
         27e6c:	e5840068 	str	r0, [r4, #104]	; fField104
         27e70:	e1a00004 	mov	r0, r4
         27e74:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TTransactionResponses::Init(void)
 * Address: 00028154
 */
TTransactionResponses::Init(void) {
    /*
         28154:	e3a01000 	mov	r1, #0	; 0x0
         28158:	e3a02000 	mov	r2, #0	; 0x0
         2815c:	e0803181 	add	r3, r0, r1, lsl #3
         28160:	e5832024 	str	r2, [r3, #36]
         28164:	e2811001 	add	r1, r1, #1	; 0x1
         28168:	e20110ff 	and	r1, r1, #255	; 0xff
         2816c:	e3510008 	cmp	r1, #8	; 0x8
         28170:	e5a32028 	str	r2, [r3, #40]!	; fField40
         28174:	bafffff8 	blt	2815c <TTransactionResponses::Init(void)+0x8>
         28178:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TTransactionResponses::CopyOutResponseHeader(void)
 * Address: 000287bc
 */
TTransactionResponses::CopyOutResponseHeader(void) {
    /*
         287bc:	e2801024 	add	r1, r0, #36	; 0x24
         287c0:	e3a03000 	mov	r3, #0	; 0x0
         287c4:	e3a02044 	mov	r2, #68	; 0x44
         287c8:	ea69410e 	b	1a78c08 <TMemoryObject::$CopyTo(void *, unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TTransactionResponses::Copy(unsigned char, unsigned long, unsigned char *, unsigned char)
 * Address: 00028b90
 */
TTransactionResponses::Copy(unsigned char, unsigned long, unsigned char *, unsigned char) {
    /*
         28b90:	e1a0c00d 	mov	ip, sp
         28b94:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         28b98:	e24cb004 	sub	fp, ip, #4	; 0x4
         28b9c:	e1a04000 	mov	r4, r0
         28ba0:	e1a05002 	mov	r5, r2
         28ba4:	e1a06003 	mov	r6, r3
         28ba8:	e21170ff 	ands	r7, r1, #255	; 0xff
         28bac:	e59b0004 	ldr	r0, [fp, #4]
         28bb0:	e20080ff 	and	r8, r0, #255	; 0xff
         28bb4:	1a000003 	bne	28bc8 <TTransactionResponses::Copy(unsigned char, unsigned long, unsigned char *, unsigned char)+0x38>
         28bb8:	e2841064 	add	r1, r4, #100	; 0x64
         28bbc:	e1a00006 	mov	r0, r6
         28bc0:	e3a02004 	mov	r2, #4	; 0x4
         28bc4:	eb6ed8e2 	bl	1bdef54 <$BlockMove>
         28bc8:	e3380000 	teq	r8, #0	; 0x0
         28bcc:	02455004 	subeq	r5, r5, #4	; 0x4
         28bd0:	02866004 	addeq	r6, r6, #4	; 0x4
         28bd4:	e1a02005 	mov	r2, r5
         28bd8:	e1a01006 	mov	r1, r6
         28bdc:	e5943068 	ldr	r3, [r4, #104]	; fField104
         28be0:	e1a00004 	mov	r0, r4
         28be4:	eb694007 	bl	1a78c08 <TMemoryObject::$CopyTo(void *, unsigned long, unsigned long)>
         28be8:	e1b06000 	movs	r6, r0
         28bec:	1a00000a 	bne	28c1c <TTransactionResponses::Copy(unsigned char, unsigned long, unsigned char *, unsigned char)+0x8c>
         28bf0:	e1a03008 	mov	r3, r8
         28bf4:	e92d0008 	stmdb	sp!, {r3}
         28bf8:	e1a03005 	mov	r3, r5
         28bfc:	e1a01007 	mov	r1, r7
         28c00:	e5942068 	ldr	r2, [r4, #104]	; fField104
         28c04:	e1a00004 	mov	r0, r4
         28c08:	eb695ce7 	bl	1a7ffac <TTransactionResponses::$SetOffsetAndLength(unsigned char, unsigned long, unsigned long, unsigned char)>
         28c0c:	e28dd004 	add	sp, sp, #4	; 0x4
         28c10:	e5940068 	ldr	r0, [r4, #104]	; fField104
         28c14:	e0800005 	add	r0, r0, r5
         28c18:	e5a40068 	str	r0, [r4, #104]!	; fField104
         28c1c:	e1a00006 	mov	r0, r6
         28c20:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TTransactionResponses::SetOffsetAndLength(unsigned char, unsigned long, unsigned long, unsigned char)
 * Address: 00028c24
 */
TTransactionResponses::SetOffsetAndLength(unsigned char, unsigned long, unsigned long, unsigned char) {
    /*
         28c24:	e20110ff 	and	r1, r1, #255	; 0xff
         28c28:	e59dc000 	ldr	ip, [sp]
         28c2c:	e31c00ff 	tst	ip, #255	; 0xff
         28c30:	05901028 	ldreq	r1, [r0, #40]	; fField40
         28c34:	00811003 	addeq	r1, r1, r3
         28c38:	05a01028 	streq	r1, [r0, #40]!	; fField40
         28c3c:	10800181 	addne	r0, r0, r1, lsl #3
         28c40:	12800020 	addne	r0, r0, #32	; 0x20
         28c44:	19a0000c 	stmneib	r0!, {r2, r3}
         28c48:	e1a0f00e 	mov	pc, lr
    */
}

