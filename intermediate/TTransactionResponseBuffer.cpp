#include "include/TTransactionResponseBuffer.h"

/**
 * Symbol: TTransactionResponseBuffer::Count(void)
 * Address: 000271a4
 */
TTransactionResponseBuffer::Count(void) {
    /*
         271a4:	e3a01000 	mov	r1, #0	; 0x0
         271a8:	ea000003 	b	271bc <TTransactionResponseBuffer::Count(void)+0x18>
         271ac:	e2811001 	add	r1, r1, #1	; 0x1
         271b0:	e20110ff 	and	r1, r1, #255	; 0xff
         271b4:	e3510008 	cmp	r1, #8	; 0x8
         271b8:	aa000003 	bge	271cc <TTransactionResponseBuffer::Count(void)+0x28>
         271bc:	e0802181 	add	r2, r0, r1, lsl #3
         271c0:	e5922004 	ldr	r2, [r2, #4]
         271c4:	e3320000 	teq	r2, #0	; 0x0
         271c8:	1afffff7 	bne	271ac <TTransactionResponseBuffer::Count(void)+0x8>
         271cc:	e1a00001 	mov	r0, r1
         271d0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TTransactionResponseBuffer::Size(void)
 * Address: 000271d4
 */
TTransactionResponseBuffer::Size(void) {
    /*
         271d4:	e3a02000 	mov	r2, #0	; 0x0
         271d8:	e3a01000 	mov	r1, #0	; 0x0
         271dc:	e0803181 	add	r3, r0, r1, lsl #3
         271e0:	e5933004 	ldr	r3, [r3, #4]
         271e4:	e0832002 	add	r2, r3, r2
         271e8:	e2811001 	add	r1, r1, #1	; 0x1
         271ec:	e20110ff 	and	r1, r1, #255	; 0xff
         271f0:	e3510008 	cmp	r1, #8	; 0x8
         271f4:	bafffff8 	blt	271dc <TTransactionResponseBuffer::Size(void)+0x8>
         271f8:	e1a00002 	mov	r0, r2
         271fc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TTransactionResponseBuffer::GetDataPtr(unsigned char)
 * Address: 00027a14
 */
TTransactionResponseBuffer::GetDataPtr(unsigned char) {
    /*
         27a14:	e21120ff 	ands	r2, r1, #255	; 0xff
         27a18:	e3a01000 	mov	r1, #0	; 0x0
         27a1c:	02801044 	addeq	r1, r0, #68	; 0x44
         27a20:	0a000004 	beq	27a38 <TTransactionResponseBuffer::GetDataPtr(unsigned char)+0x24>
         27a24:	e0802182 	add	r2, r0, r2, lsl #3
         27a28:	e5123004 	ldr	r3, [r2, -#4]
         27a2c:	e3330000 	teq	r3, #0	; 0x0
         27a30:	15321008 	ldrne	r1, [r2, -#8]!
         27a34:	10811000 	addne	r1, r1, r0
         27a38:	e1a00001 	mov	r0, r1
         27a3c:	e1a0f00e 	mov	pc, lr
    */
}

