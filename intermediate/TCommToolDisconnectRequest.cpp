#include "DDKIncludes/Communications/CommTool.h"

/**
 * Symbol: TCommToolDisconnectRequest::__ct(void)
 * Address: 0006d794
 */
TCommToolDisconnectRequest::TCommToolDisconnectRequest() {
    /*
         6d794:	e1a0c00d 	mov	ip, sp
         6d798:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6d79c:	e24cb004 	sub	fp, ip, #4	; 0x4
         6d7a0:	e1b04000 	movs	r4, r0
         6d7a4:	1a000003 	bne	6d7b8 <TCommToolDisconnectRequest::__ct(void)+0x24>
         6d7a8:	e3a0001c 	mov	r0, #28	; 0x1c
         6d7ac:	eb6d83e1 	bl	1bce738 <$__nw(unsigned int)>
         6d7b0:	e1b04000 	movs	r4, r0
         6d7b4:	0a000008 	beq	6d7dc <TCommToolDisconnectRequest::__ct(void)+0x48>
         6d7b8:	e1a00004 	mov	r0, r4
         6d7bc:	eb6e0803 	bl	1bef7d0 <TCommToolControlRequest::$__ct(void)>
         6d7c0:	e3a00006 	mov	r0, #6	; 0x6
         6d7c4:	e5840008 	str	r0, [r4, #8]	; fDisconnectData
         6d7c8:	e3a00000 	mov	r0, #0	; 0x0
         6d7cc:	e584000c 	str	r0, [r4, #12]	; fSequence
         6d7d0:	e5840010 	str	r0, [r4, #16]	; fReason
         6d7d4:	e5840014 	str	r0, [r4, #20]	; fOutside
         6d7d8:	e5c40018 	strb	r0, [r4, #24]
         6d7dc:	e1a00004 	mov	r0, r4
         6d7e0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

