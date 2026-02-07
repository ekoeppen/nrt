#include "include/TContainerHilite.h"

/**
 * Symbol: TContainerHilite::Clone(void)
 * Address: 0007401c
 */
TContainerHilite::Clone(void) {
    /*
         7401c:	e1a0c00d 	mov	ip, sp
         74020:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         74024:	e24cb004 	sub	fp, ip, #4	; 0x4
         74028:	e1a04000 	mov	r4, r0
         7402c:	e3a00014 	mov	r0, #20	; 0x14
         74030:	eb6d69c0 	bl	1bce738 <$__nw(unsigned int)>
         74034:	e1b05000 	movs	r5, r0
         74038:	0a000003 	beq	7404c <TContainerHilite::Clone(void)+0x30>
         7403c:	e1a00005 	mov	r0, r5
         74040:	eb6850f6 	bl	1a88420 <THilite::$__ct(void)>
         74044:	e59f0014 	ldr	r0, [pc, #14]	; 74060 <TContainerHilite::Clone(void)+0x44>
         74048:	e5850000 	str	r0, [r5]
         7404c:	e1a01004 	mov	r1, r4
         74050:	e1a00005 	mov	r0, r5
         74054:	eb6869bb 	bl	1a8e748 <TContainerHilite::$CopyFrom(THilite *)>
         74058:	e1a00005 	mov	r0, r5
         7405c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         74060:	0001e48c 	andeq	lr, r1, ip, lsl #9
    */
}

/**
 * Symbol: TContainerHilite::CopyFrom(THilite *)
 * Address: 000740a4
 */
TContainerHilite::CopyFrom(THilite *) {
    /*
         740a4:	e92d4000 	stmdb	sp!, {lr}
         740a8:	e2802004 	add	r2, r0, #4	; 0x4
         740ac:	e281e004 	add	lr, r1, #4	; 0x4
         740b0:	e89e1008 	ldmia	lr, {r3, ip}
         740b4:	e8821008 	stmia	r2, {r3, ip}
         740b8:	e281100c 	add	r1, r1, #12	; 0xc
         740bc:	e280000c 	add	r0, r0, #12	; 0xc
         740c0:	e3a02008 	mov	r2, #8	; 0x8
         740c4:	e8bd4000 	ldmia	sp!, {lr}
         740c8:	ea6d0260 	b	1bb4a50 <$memcpy>
    */
}

