#include "include/TADSPSendRequest.h"

/**
 * Symbol: TADSPSendRequest::__ct(long)
 * Address: 000222f8
 */
TADSPSendRequest::TADSPSendRequest(long) {
    /*
         222f8:	e1a0c00d 	mov	ip, sp
         222fc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         22300:	e24cb004 	sub	fp, ip, #4	; 0x4
         22304:	e1b04000 	movs	r4, r0
         22308:	e1a05001 	mov	r5, r1
         2230c:	1a000003 	bne	22320 <TADSPSendRequest::__ct(long)+0x28>
         22310:	e3a00048 	mov	r0, #72	; 0x48
         22314:	eb6eb107 	bl	1bce738 <$__nw(unsigned int)>
         22318:	e1b04000 	movs	r4, r0
         2231c:	0a000002 	beq	2232c <TADSPSendRequest::__ct(long)+0x34>
         22320:	e2840004 	add	r0, r4, #4	; 0x4
         22324:	eb678be7 	bl	1a052c8 <TSndCompleteEvent::$__ct(void)>
         22328:	e5845000 	str	r5, [r4]
         2232c:	e1a00004 	mov	r0, r4
         22330:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

