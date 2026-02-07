#include "DDKIncludes/Communications/CommTool.h"

/**
 * Symbol: TCommToolKillRequest::__ct(void)
 * Address: 0006e17c
 */
TCommToolKillRequest::TCommToolKillRequest() {
    /*
         6e17c:	e1a0c00d 	mov	ip, sp
         6e180:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6e184:	e24cb004 	sub	fp, ip, #4	; 0x4
         6e188:	e1b04000 	movs	r4, r0
         6e18c:	1a000003 	bne	6e1a0 <TCommToolKillRequest::__ct(void)+0x24>
         6e190:	e3a0000c 	mov	r0, #12	; 0xc
         6e194:	eb6d8167 	bl	1bce738 <$__nw(unsigned int)>
         6e198:	e1b04000 	movs	r4, r0
         6e19c:	0a000003 	beq	6e1b0 <TCommToolKillRequest::__ct(void)+0x34>
         6e1a0:	e1a00004 	mov	r0, r4
         6e1a4:	eb6e0588 	bl	1bef7cc <TCommToolAEvent::$__ct(void)>
         6e1a8:	e3a0000f 	mov	r0, #15	; 0xf
         6e1ac:	e5840008 	str	r0, [r4, #8]
         6e1b0:	e1a00004 	mov	r0, r4
         6e1b4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

