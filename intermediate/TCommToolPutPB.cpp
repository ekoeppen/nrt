#include "include/TCommToolPutPB.h"

/**
 * Symbol: TCommToolPutPB::__ct(unsigned long, unsigned char)
 * Address: 001da690
 */
TCommToolPutPB::TCommToolPutPB(unsigned long, unsigned char) {
    /*
        1da690:	e1a0c00d 	mov	ip, sp
        1da694:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1da698:	e24cb004 	sub	fp, ip, #4	; 0x4
        1da69c:	e1b04000 	movs	r4, r0
        1da6a0:	e1a05001 	mov	r5, r1
        1da6a4:	e20260ff 	and	r6, r2, #255	; 0xff
        1da6a8:	1a000003 	bne	1da6bc <TCommToolPutPB::__ct(unsigned long, unsigned char)+0x2c>
        1da6ac:	e3a00084 	mov	r0, #132	; 0x84
        1da6b0:	eb67d020 	bl	1bce738 <$__nw(unsigned int)>
        1da6b4:	e1b04000 	movs	r4, r0
        1da6b8:	0a000011 	beq	1da704 <TCommToolPutPB::__ct(unsigned long, unsigned char)+0x74>
        1da6bc:	e1a03006 	mov	r3, r6
        1da6c0:	e1a02005 	mov	r2, r5
        1da6c4:	e1a00004 	mov	r0, r4
        1da6c8:	e3a01002 	mov	r1, #2	; 0x2
        1da6cc:	eb614beb 	bl	1a2d680 <TCommToolPB::$__ct(unsigned long, unsigned long, unsigned char)>
        1da6d0:	e284001c 	add	r0, r4, #28	; 0x1c
        1da6d4:	eb68543e 	bl	1bef7d4 <TCommToolPutRequest::$__ct(void)>
        1da6d8:	e2840038 	add	r0, r4, #56	; 0x38
        1da6dc:	eb685435 	bl	1bef7b8 <TCommToolPutReply::$__ct(void)>
        1da6e0:	e284004c 	add	r0, r4, #76	; 0x4c
        1da6e4:	eb60aaf7 	bl	1a052c8 <TSndCompleteEvent::$__ct(void)>
        1da6e8:	e3a00000 	mov	r0, #0	; 0x0
        1da6ec:	e5840070 	str	r0, [r4, #112]
        1da6f0:	e584006c 	str	r0, [r4, #108]
        1da6f4:	e5840078 	str	r0, [r4, #120]
        1da6f8:	e5840074 	str	r0, [r4, #116]
        1da6fc:	e584007c 	str	r0, [r4, #124]
        1da700:	e5840080 	str	r0, [r4, #128]	; fField128
        1da704:	e1a00004 	mov	r0, r4
        1da708:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TCommToolPutPB::__dt(void)
 * Address: 001db730
 */
TCommToolPutPB::~TCommToolPutPB(void) {
    /*
        1db730:	e1a0c00d 	mov	ip, sp
        1db734:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1db738:	e24cb004 	sub	fp, ip, #4	; 0x4
        1db73c:	e1a04000 	mov	r4, r0
        1db740:	e1a05001 	mov	r5, r1
        1db744:	e590007c 	ldr	r0, [r0, #124]
        1db748:	e3300000 	teq	r0, #0	; 0x0
        1db74c:	0a000002 	beq	1db75c <TCommToolPutPB::__dt(void)+0x2c>
        1db750:	e3a01001 	mov	r1, #1	; 0x1
        1db754:	e1a0e00f 	mov	lr, pc
        1db758:	e590f000 	ldr	pc, [r0]
        1db75c:	e5940080 	ldr	r0, [r4, #128]	; fField128
        1db760:	e3300000 	teq	r0, #0	; 0x0
        1db764:	0a000002 	beq	1db774 <TCommToolPutPB::__dt(void)+0x44>
        1db768:	e3a01001 	mov	r1, #1	; 0x1
        1db76c:	e1a0e00f 	mov	lr, pc
        1db770:	e590f000 	ldr	pc, [r0]
        1db774:	e1a00004 	mov	r0, r4
        1db778:	e3a01000 	mov	r1, #0	; 0x0
        1db77c:	eb67cbe3 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        1db780:	e3150001 	tst	r5, #1	; 0x1
        1db784:	11a00004 	movne	r0, r4
        1db788:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1db78c:	1a67c7d3 	bne	1bcd6e0 <$__dl(void *)>
        1db790:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

