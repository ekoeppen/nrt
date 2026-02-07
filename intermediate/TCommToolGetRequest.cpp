#include "DDKIncludes/Communications/CommTool.h"

/**
 * Symbol: TCommToolGetRequest::__ct(void)
 * Address: 0006f250
 */
TCommToolGetRequest::TCommToolGetRequest() {
    /*
         6f250:	e1a0c00d 	mov	ip, sp
         6f254:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6f258:	e24cb004 	sub	fp, ip, #4	; 0x4
         6f25c:	e1b04000 	movs	r4, r0
         6f260:	1a000003 	bne	6f274 <TCommToolGetRequest::__ct(void)+0x24>
         6f264:	e3a0001c 	mov	r0, #28	; 0x1c
         6f268:	eb6d7d32 	bl	1bce738 <$__nw(unsigned int)>
         6f26c:	e1b04000 	movs	r4, r0
         6f270:	0a000007 	beq	6f294 <TCommToolGetRequest::__ct(void)+0x44>
         6f274:	e1a00004 	mov	r0, r4
         6f278:	eb6e0153 	bl	1bef7cc <TCommToolAEvent::$__ct(void)>
         6f27c:	e3a00000 	mov	r0, #0	; 0x0
         6f280:	e5840008 	str	r0, [r4, #8]	; fThreshold
         6f284:	e584000c 	str	r0, [r4, #12]	; fNonBlocking
         6f288:	e5c40010 	strb	r0, [r4, #16]	; fOptions
         6f28c:	e5c40011 	strb	r0, [r4, #17]
         6f290:	e5c40012 	strb	r0, [r4, #18]
         6f294:	e1a00004 	mov	r0, r4
         6f298:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

