#include "include/TADSPRecvRequest.h"

/**
 * Symbol: TADSPRecvRequest::__ct(long)
 * Address: 00022530
 */
TADSPRecvRequest::TADSPRecvRequest(long) {
    /*
         22530:	e1a0c00d 	mov	ip, sp
         22534:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         22538:	e24cb004 	sub	fp, ip, #4	; 0x4
         2253c:	e1b04000 	movs	r4, r0
         22540:	e1a05001 	mov	r5, r1
         22544:	1a000003 	bne	22558 <TADSPRecvRequest::__ct(long)+0x28>
         22548:	e3a00050 	mov	r0, #80	; 0x50
         2254c:	eb6eb079 	bl	1bce738 <$__nw(unsigned int)>
         22550:	e1b04000 	movs	r4, r0
         22554:	0a000002 	beq	22564 <TADSPRecvRequest::__ct(long)+0x34>
         22558:	e2840004 	add	r0, r4, #4	; 0x4
         2255c:	eb678b58 	bl	1a052c4 <TRcvCompleteEvent::$__ct(void)>
         22560:	e5845000 	str	r5, [r4]
         22564:	e1a00004 	mov	r0, r4
         22568:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

