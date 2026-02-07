#include "include/TATAsyncMsg.h"

/**
 * Symbol: TATAsyncMsg::__ct(void)
 * Address: 00031bdc
 */
TATAsyncMsg::TATAsyncMsg(void) {
    /*
         31bdc:	e1a0c00d 	mov	ip, sp
         31be0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         31be4:	e24cb004 	sub	fp, ip, #4	; 0x4
         31be8:	e1b04000 	movs	r4, r0
         31bec:	1a000003 	bne	31c00 <TATAsyncMsg::__ct(void)+0x24>
         31bf0:	e3a00f46 	mov	r0, #280	; 0x118
         31bf4:	eb6e72cf 	bl	1bce738 <$__nw(unsigned int)>
         31bf8:	e1b04000 	movs	r4, r0
         31bfc:	0a000004 	beq	31c14 <TATAsyncMsg::__ct(void)+0x38>
         31c00:	e2840f41 	add	r0, r4, #260	; 0x104
         31c04:	eb6e6ea8 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
         31c08:	e3a00000 	mov	r0, #0	; 0x0
         31c0c:	e5c40100 	strb	r0, [r4, #256]	; fField256
         31c10:	e5840114 	str	r0, [r4, #276]
         31c14:	e1a00004 	mov	r0, r4
         31c18:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TATAsyncMsg::__dt(void)
 * Address: 00031c1c
 */
TATAsyncMsg::~TATAsyncMsg(void) {
    /*
         31c1c:	e1a0c00d 	mov	ip, sp
         31c20:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         31c24:	e24cb004 	sub	fp, ip, #4	; 0x4
         31c28:	e1a04000 	mov	r4, r0
         31c2c:	e1a05001 	mov	r5, r1
         31c30:	e2800f41 	add	r0, r0, #260	; 0x104
         31c34:	e3a01000 	mov	r1, #0	; 0x0
         31c38:	eb6e72b4 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
         31c3c:	e3150001 	tst	r5, #1	; 0x1
         31c40:	11a00004 	movne	r0, r4
         31c44:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         31c48:	1a6e6ea4 	bne	1bcd6e0 <$__dl(void *)>
         31c4c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TATAsyncMsg::Init(TUPort *)
 * Address: 000320d8
 */
TATAsyncMsg::Init(TUPort *) {
    /*
         320d8:	e1a0c00d 	mov	ip, sp
         320dc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         320e0:	e24cb004 	sub	fp, ip, #4	; 0x4
         320e4:	e1a04001 	mov	r4, r1
         320e8:	e2800f41 	add	r0, r0, #260	; 0x104
         320ec:	e1a05000 	mov	r5, r0
         320f0:	e3a01001 	mov	r1, #1	; 0x1
         320f4:	eb6e8e66 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
         320f8:	e3300000 	teq	r0, #0	; 0x0
         320fc:	01a00005 	moveq	r0, r5
         32100:	05941000 	ldreq	r1, [r4]
         32104:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
         32108:	0a6ea720 	beq	1bdbd90 <TUAsyncMessage::$SetCollectorPort(unsigned long)>
         3210c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TATAsyncMsg::Send(TUPort *, unsigned long, unsigned long, unsigned long)
 * Address: 00032348
 */
TATAsyncMsg::Send(TUPort *, unsigned long, unsigned long, unsigned long) {
    /*
         32348:	e1a0c00d 	mov	ip, sp
         3234c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         32350:	e24cb004 	sub	fp, ip, #4	; 0x4
         32354:	e1a0e001 	mov	lr, r1
         32358:	e1a0c002 	mov	ip, r2
         3235c:	e1a06003 	mov	r6, r3
         32360:	e3a01001 	mov	r1, #1	; 0x1
         32364:	e59b2004 	ldr	r2, [fp, #4]
         32368:	e5c01100 	strb	r1, [r0, #256]	; fField256
         3236c:	e2804f41 	add	r4, r0, #260	; 0x104
         32370:	e2805080 	add	r5, r0, #128	; 0x80
         32374:	e3a01080 	mov	r1, #128	; 0x80
         32378:	e3a03000 	mov	r3, #0	; 0x0
         3237c:	e3a07000 	mov	r7, #0	; 0x0
         32380:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         32384:	e1a03007 	mov	r3, r7
         32388:	e3a02001 	mov	r2, #1	; 0x1
         3238c:	e1a01006 	mov	r1, r6
         32390:	e1a0000c 	mov	r0, ip
         32394:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         32398:	e1a03005 	mov	r3, r5
         3239c:	e92d0008 	stmdb	sp!, {r3}
         323a0:	e1a0000e 	mov	r0, lr
         323a4:	e3a03000 	mov	r3, #0	; 0x0
         323a8:	e4941008 	ldr	r1, [r4], #8
         323ac:	e5942000 	ldr	r2, [r4]
         323b0:	eb6ea265 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         323b4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

