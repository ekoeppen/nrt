#include "DDKIncludes/Communications/CommTool.h"

/**
 * Symbol: TCommToolMsgContainer::__ct(void)
 * Address: 0006e278
 */
TCommToolMsgContainer::TCommToolMsgContainer() {
    /*
         6e278:	e1a0c00d 	mov	ip, sp
         6e27c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         6e280:	e24cb004 	sub	fp, ip, #4	; 0x4
         6e284:	e3300000 	teq	r0, #0	; 0x0
         6e288:	1a000003 	bne	6e29c <TCommToolMsgContainer::__ct(void)+0x24>
         6e28c:	e3a00018 	mov	r0, #24	; 0x18
         6e290:	eb6d8128 	bl	1bce738 <$__nw(unsigned int)>
         6e294:	e3300000 	teq	r0, #0	; 0x0
         6e298:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         6e29c:	e3a01000 	mov	r1, #0	; 0x0
         6e2a0:	e5801008 	str	r1, [r0, #8]	; fRequestMsgSize
         6e2a4:	e5801014 	str	r1, [r0, #20]	; fField20
         6e2a8:	e580100c 	str	r1, [r0, #12]	; fMsgToken
         6e2ac:	e5801010 	str	r1, [r0, #16]	; fField16
         6e2b0:	e5c01000 	strb	r1, [r0]
         6e2b4:	e5801004 	str	r1, [r0, #4]	; fRequestPending
         6e2b8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

