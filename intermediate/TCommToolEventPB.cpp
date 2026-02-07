#include "include/TCommToolEventPB.h"

/**
 * Symbol: TCommToolEventPB::__ct(unsigned long)
 * Address: 001d9e64
 */
TCommToolEventPB::TCommToolEventPB(unsigned long) {
    /*
        1d9e64:	e1a0c00d 	mov	ip, sp
        1d9e68:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1d9e6c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d9e70:	e1b04000 	movs	r4, r0
        1d9e74:	e1a05001 	mov	r5, r1
        1d9e78:	1a000003 	bne	1d9e8c <TCommToolEventPB::__ct(unsigned long)+0x28>
        1d9e7c:	e3a0004c 	mov	r0, #76	; 0x4c
        1d9e80:	eb67d22c 	bl	1bce738 <$__nw(unsigned int)>
        1d9e84:	e1b04000 	movs	r4, r0
        1d9e88:	0a000008 	beq	1d9eb0 <TCommToolEventPB::__ct(unsigned long)+0x4c>
        1d9e8c:	e1a02005 	mov	r2, r5
        1d9e90:	e1a00004 	mov	r0, r4
        1d9e94:	e3a03001 	mov	r3, #1	; 0x1
        1d9e98:	e3a01008 	mov	r1, #8	; 0x8
        1d9e9c:	eb614df7 	bl	1a2d680 <TCommToolPB::$__ct(unsigned long, unsigned long, unsigned char)>
        1d9ea0:	e284001c 	add	r0, r4, #28	; 0x1c
        1d9ea4:	eb685649 	bl	1bef7d0 <TCommToolControlRequest::$__ct(void)>
        1d9ea8:	e2840028 	add	r0, r4, #40	; 0x28
        1d9eac:	eb685645 	bl	1bef7c8 <TCommToolGetEventReply::$__ct(void)>
        1d9eb0:	e1a00004 	mov	r0, r4
        1d9eb4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

