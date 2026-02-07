#include "include/NIterator.h"

/**
 * Symbol: NIterator::RemoveElements(long, long)
 * Address: 00128ab8
 */
NIterator::RemoveElements(long, long) {
    /*
        128ab8:	e5903008 	ldr	r3, [r0, #8]	; fField8
        128abc:	e1530001 	cmp	r3, r1
        128ac0:	c0433002 	subgt	r3, r3, r2
        128ac4:	c5803008 	strgt	r3, [r0, #8]	; fField8
        128ac8:	e590300c 	ldr	r3, [r0, #12]	; fField12
        128acc:	e1530001 	cmp	r3, r1
        128ad0:	a0433002 	subge	r3, r3, r2
        128ad4:	a580300c 	strge	r3, [r0, #12]	; fField12
        128ad8:	e5d03018 	ldrb	r3, [r0, #24]	; fField24
        128adc:	e3330000 	teq	r3, #0	; 0x0
        128ae0:	e5903004 	ldr	r3, [r0, #4]	; fField4
        128ae4:	0a000002 	beq	128af4 <NIterator::RemoveElements(long, long)+0x3c>
        128ae8:	e1530001 	cmp	r3, r1
        128aec:	ba000004 	blt	128b04 <NIterator::RemoveElements(long, long)+0x4c>
        128af0:	ea000001 	b	128afc <NIterator::RemoveElements(long, long)+0x44>
        128af4:	e1530001 	cmp	r3, r1
        128af8:	da000001 	ble	128b04 <NIterator::RemoveElements(long, long)+0x4c>
        128afc:	e0433002 	sub	r3, r3, r2
        128b00:	e5803004 	str	r3, [r0, #4]	; fField4
        128b04:	e5903000 	ldr	r3, [r0]
        128b08:	e3330000 	teq	r3, #0	; 0x0
        128b0c:	01a0f00e 	moveq	pc, lr
        128b10:	e5900014 	ldr	r0, [r0, #20]	; fField20
        128b14:	e5933018 	ldr	r3, [r3, #24]	; fField24
        128b18:	e1300003 	teq	r0, r3
        128b1c:	1a6a2779 	bne	1bb2908 <NIterator::$RemoveElements(long, long)>
        128b20:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: NIterator::InsertElements(long, long)
 * Address: 00128b24
 */
NIterator::InsertElements(long, long) {
    /*
        128b24:	e5903008 	ldr	r3, [r0, #8]	; fField8
        128b28:	e1530001 	cmp	r3, r1
        128b2c:	a0833002 	addge	r3, r3, r2
        128b30:	a5803008 	strge	r3, [r0, #8]	; fField8
        128b34:	e590300c 	ldr	r3, [r0, #12]	; fField12
        128b38:	e1530001 	cmp	r3, r1
        128b3c:	a0833002 	addge	r3, r3, r2
        128b40:	a580300c 	strge	r3, [r0, #12]	; fField12
        128b44:	e5d03018 	ldrb	r3, [r0, #24]	; fField24
        128b48:	e3330000 	teq	r3, #0	; 0x0
        128b4c:	e5903004 	ldr	r3, [r0, #4]	; fField4
        128b50:	0a000002 	beq	128b60 <NIterator::InsertElements(long, long)+0x3c>
        128b54:	e1530001 	cmp	r3, r1
        128b58:	ba000004 	blt	128b70 <NIterator::InsertElements(long, long)+0x4c>
        128b5c:	ea000001 	b	128b68 <NIterator::InsertElements(long, long)+0x44>
        128b60:	e1530001 	cmp	r3, r1
        128b64:	da000001 	ble	128b70 <NIterator::InsertElements(long, long)+0x4c>
        128b68:	e0833002 	add	r3, r3, r2
        128b6c:	e5803004 	str	r3, [r0, #4]	; fField4
        128b70:	e5903000 	ldr	r3, [r0]
        128b74:	e3330000 	teq	r3, #0	; 0x0
        128b78:	01a0f00e 	moveq	pc, lr
        128b7c:	e5900014 	ldr	r0, [r0, #20]	; fField20
        128b80:	e5933018 	ldr	r3, [r3, #24]	; fField24
        128b84:	e1300003 	teq	r0, r3
        128b88:	1a6a275f 	bne	1bb290c <NIterator::$InsertElements(long, long)>
        128b8c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: NIterator::DeleteArray(void)
 * Address: 00128b90
 */
NIterator::DeleteArray(void) {
    /*
        128b90:	e1a0c00d 	mov	ip, sp
        128b94:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        128b98:	e24cb004 	sub	fp, ip, #4	; 0x4
        128b9c:	e1a04000 	mov	r4, r0
        128ba0:	e5900014 	ldr	r0, [r0, #20]	; fField20
        128ba4:	e5941000 	ldr	r1, [r4]
        128ba8:	e5911018 	ldr	r1, [r1, #24]	; fField24
        128bac:	e1300001 	teq	r0, r1
        128bb0:	1b6a2756 	blne	1bb2910 <NIterator::$DeleteArray(void)>
        128bb4:	e3a00000 	mov	r0, #0	; 0x0
        128bb8:	e5840000 	str	r0, [r4]
        128bbc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

