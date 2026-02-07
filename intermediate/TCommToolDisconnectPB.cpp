#include "include/TCommToolDisconnectPB.h"

/**
 * Symbol: TCommToolDisconnectPB::__ct(unsigned long, unsigned char)
 * Address: 001d99c8
 */
TCommToolDisconnectPB::TCommToolDisconnectPB(unsigned long, unsigned char) {
    /*
        1d99c8:	e1a0c00d 	mov	ip, sp
        1d99cc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1d99d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d99d4:	e1b04000 	movs	r4, r0
        1d99d8:	e1a05001 	mov	r5, r1
        1d99dc:	e20260ff 	and	r6, r2, #255	; 0xff
        1d99e0:	1a000003 	bne	1d99f4 <TCommToolDisconnectPB::__ct(unsigned long, unsigned char)+0x2c>
        1d99e4:	e3a00074 	mov	r0, #116	; 0x74
        1d99e8:	eb67d352 	bl	1bce738 <$__nw(unsigned int)>
        1d99ec:	e1b04000 	movs	r4, r0
        1d99f0:	0a00000e 	beq	1d9a30 <TCommToolDisconnectPB::__ct(unsigned long, unsigned char)+0x68>
        1d99f4:	e1a03006 	mov	r3, r6
        1d99f8:	e1a02005 	mov	r2, r5
        1d99fc:	e1a00004 	mov	r0, r4
        1d9a00:	e3a01004 	mov	r1, #4	; 0x4
        1d9a04:	eb614f1d 	bl	1a2d680 <TCommToolPB::$__ct(unsigned long, unsigned long, unsigned char)>
        1d9a08:	e284001c 	add	r0, r4, #28	; 0x1c
        1d9a0c:	eb685774 	bl	1bef7e4 <TCommToolDisconnectRequest::$__ct(void)>
        1d9a10:	e2840038 	add	r0, r4, #56	; 0x38
        1d9a14:	eb685766 	bl	1bef7b4 <TCommToolReply::$__ct(void)>
        1d9a18:	e2840048 	add	r0, r4, #72	; 0x48
        1d9a1c:	eb60ae25 	bl	1a052b8 <TDisconnectEvent::$__ct(void)>
        1d9a20:	e3a00006 	mov	r0, #6	; 0x6
        1d9a24:	e5840024 	str	r0, [r4, #36]
        1d9a28:	e3e00008 	mvn	r0, #8	; 0x8
        1d9a2c:	e5840058 	str	r0, [r4, #88]
        1d9a30:	e1a00004 	mov	r0, r4
        1d9a34:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

