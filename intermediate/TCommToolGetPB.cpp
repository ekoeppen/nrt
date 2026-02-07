#include "include/TCommToolGetPB.h"

/**
 * Symbol: TCommToolGetPB::__ct(unsigned long, unsigned char)
 * Address: 001dbfe0
 */
TCommToolGetPB::TCommToolGetPB(unsigned long, unsigned char) {
    /*
        1dbfe0:	e1a0c00d 	mov	ip, sp
        1dbfe4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1dbfe8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dbfec:	e1b04000 	movs	r4, r0
        1dbff0:	e1a05001 	mov	r5, r1
        1dbff4:	e20260ff 	and	r6, r2, #255	; 0xff
        1dbff8:	1a000003 	bne	1dc00c <TCommToolGetPB::__ct(unsigned long, unsigned char)+0x2c>
        1dbffc:	e3a00090 	mov	r0, #144	; 0x90
        1dc000:	eb67c9cc 	bl	1bce738 <$__nw(unsigned int)>
        1dc004:	e1b04000 	movs	r4, r0
        1dc008:	0a000013 	beq	1dc05c <TCommToolGetPB::__ct(unsigned long, unsigned char)+0x7c>
        1dc00c:	e1a03006 	mov	r3, r6
        1dc010:	e1a02005 	mov	r2, r5
        1dc014:	e1a00004 	mov	r0, r4
        1dc018:	e3a01001 	mov	r1, #1	; 0x1
        1dc01c:	eb614597 	bl	1a2d680 <TCommToolPB::$__ct(unsigned long, unsigned long, unsigned char)>
        1dc020:	e284001c 	add	r0, r4, #28	; 0x1c
        1dc024:	eb684deb 	bl	1bef7d8 <TCommToolGetRequest::$__ct(void)>
        1dc028:	e2840038 	add	r0, r4, #56	; 0x38
        1dc02c:	eb684de2 	bl	1bef7bc <TCommToolGetReply::$__ct(void)>
        1dc030:	e2840050 	add	r0, r4, #80	; 0x50
        1dc034:	eb60a4a2 	bl	1a052c4 <TRcvCompleteEvent::$__ct(void)>
        1dc038:	e3a00000 	mov	r0, #0	; 0x0
        1dc03c:	e5840074 	str	r0, [r4, #116]
        1dc040:	e5840070 	str	r0, [r4, #112]
        1dc044:	e5840080 	str	r0, [r4, #128]
        1dc048:	e5840078 	str	r0, [r4, #120]
        1dc04c:	e584007c 	str	r0, [r4, #124]
        1dc050:	e5840084 	str	r0, [r4, #132]
        1dc054:	e5840088 	str	r0, [r4, #136]	; fField136
        1dc058:	e5c4008c 	strb	r0, [r4, #140]
        1dc05c:	e1a00004 	mov	r0, r4
        1dc060:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TCommToolGetPB::__dt(void)
 * Address: 001dc68c
 */
TCommToolGetPB::~TCommToolGetPB(void) {
    /*
        1dc68c:	e1a0c00d 	mov	ip, sp
        1dc690:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1dc694:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dc698:	e1a04000 	mov	r4, r0
        1dc69c:	e1a05001 	mov	r5, r1
        1dc6a0:	e5900084 	ldr	r0, [r0, #132]
        1dc6a4:	e3300000 	teq	r0, #0	; 0x0
        1dc6a8:	0a000002 	beq	1dc6b8 <TCommToolGetPB::__dt(void)+0x2c>
        1dc6ac:	e3a01001 	mov	r1, #1	; 0x1
        1dc6b0:	e1a0e00f 	mov	lr, pc
        1dc6b4:	e590f000 	ldr	pc, [r0]
        1dc6b8:	e5940088 	ldr	r0, [r4, #136]	; fField136
        1dc6bc:	e3300000 	teq	r0, #0	; 0x0
        1dc6c0:	0a000002 	beq	1dc6d0 <TCommToolGetPB::__dt(void)+0x44>
        1dc6c4:	e3a01001 	mov	r1, #1	; 0x1
        1dc6c8:	e1a0e00f 	mov	lr, pc
        1dc6cc:	e590f000 	ldr	pc, [r0]
        1dc6d0:	e1a00004 	mov	r0, r4
        1dc6d4:	e3a01000 	mov	r1, #0	; 0x0
        1dc6d8:	eb67c80c 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        1dc6dc:	e3150001 	tst	r5, #1	; 0x1
        1dc6e0:	11a00004 	movne	r0, r4
        1dc6e4:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1dc6e8:	1a67c3fc 	bne	1bcd6e0 <$__dl(void *)>
        1dc6ec:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

