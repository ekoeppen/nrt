#include "include/TXRegisteredObjects.h"

/**
 * Symbol: TXRegisteredObjects::__ct(void)
 * Address: 002359e4
 */
TXRegisteredObjects::TXRegisteredObjects(void) {
    /*
        2359e4:	e1a0c00d 	mov	ip, sp
        2359e8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2359ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        2359f0:	e3300000 	teq	r0, #0	; 0x0
        2359f4:	1a000003 	bne	235a08 <TXRegisteredObjects::__ct(void)+0x24>
        2359f8:	e3a00020 	mov	r0, #32	; 0x20
        2359fc:	eb66634d 	bl	1bce738 <$__nw(unsigned int)>
        235a00:	e3300000 	teq	r0, #0	; 0x0
        235a04:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        235a08:	e59f100c 	ldr	r1, [pc, #c]	; 235a1c <TXRegisteredObjects::__ct(void)+0x38>
        235a0c:	e5801000 	str	r1, [r0]
        235a10:	e3a01000 	mov	r1, #0	; 0x0
        235a14:	e5801004 	str	r1, [r0, #4]	; fField4
        235a18:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        235a1c:	0001ef58 	andeq	lr, r1, r8, asr pc
    */
}

/**
 * Symbol: TXRegisteredObjects::__dt(void)
 * Address: 00235a20
 */
TXRegisteredObjects::~TXRegisteredObjects(void) {
    /*
        235a20:	e1a0c00d 	mov	ip, sp
        235a24:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        235a28:	e24cb004 	sub	fp, ip, #4	; 0x4
        235a2c:	e1a04000 	mov	r4, r0
        235a30:	e1a05001 	mov	r5, r1
        235a34:	e59f0044 	ldr	r0, [pc, #44]	; 235a80 <TXRegisteredObjects::__dt(void)+0x60>
        235a38:	e5840000 	str	r0, [r4]
        235a3c:	e2846008 	add	r6, r4, #8	; 0x8
        235a40:	e5940004 	ldr	r0, [r4, #4]	; fField4
        235a44:	e0840100 	add	r0, r4, r0, lsl #2
        235a48:	e2807008 	add	r7, r0, #8	; 0x8
        235a4c:	e1560007 	cmp	r6, r7
        235a50:	2a000005 	bcs	235a6c <TXRegisteredObjects::__dt(void)+0x4c>
        235a54:	e4960004 	ldr	r0, [r6], #4	; fField4
        235a58:	e5901000 	ldr	r1, [r0]
        235a5c:	e1a0e00f 	mov	lr, pc
        235a60:	e281f004 	add	pc, r1, #4	; 0x4
        235a64:	e1560007 	cmp	r6, r7
        235a68:	3afffff9 	bcc	235a54 <TXRegisteredObjects::__dt(void)+0x34>
        235a6c:	e3150001 	tst	r5, #1	; 0x1
        235a70:	11a00004 	movne	r0, r4
        235a74:	191b68f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, lr}
        235a78:	1a665f18 	bne	1bcd6e0 <$__dl(void *)>
        235a7c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        235a80:	0001ef58 	andeq	lr, r1, r8, asr pc
    */
}

/**
 * Symbol: TXRegisteredObjects::Add(TXAttrObject *)
 * Address: 00235a84
 */
TXRegisteredObjects::Add(TXAttrObject *) {
    /*
        235a84:	e5903004 	ldr	r3, [r0, #4]	; fField4
        235a88:	e2832001 	add	r2, r3, #1	; 0x1
        235a8c:	e5802004 	str	r2, [r0, #4]	; fField4
        235a90:	e0800103 	add	r0, r0, r3, lsl #2
        235a94:	e5a01008 	str	r1, [r0, #8]!	; fField8
        235a98:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXRegisteredObjects::GetIndObject( const(int))
 * Address: 00235aa4
 */
TXRegisteredObjects::GetIndObject( const(int)) {
    /*
        235aa4:	e0800101 	add	r0, r0, r1, lsl #2
        235aa8:	e5900008 	ldr	r0, [r0, #8]	; fField8
        235aac:	e1a0f00e 	mov	pc, lr
    */
}

