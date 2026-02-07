#include "DDKIncludes/Communications/CommTool.h"

/**
 * Symbol: TCommToolOptionMgmtRequest::__ct(void)
 * Address: 0006e078
 */
TCommToolOptionMgmtRequest::TCommToolOptionMgmtRequest() {
    /*
         6e078:	e1a0c00d 	mov	ip, sp
         6e07c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6e080:	e24cb004 	sub	fp, ip, #4	; 0x4
         6e084:	e1b04000 	movs	r4, r0
         6e088:	1a000003 	bne	6e09c <TCommToolOptionMgmtRequest::__ct(void)+0x24>
         6e08c:	e3a0001c 	mov	r0, #28	; 0x1c
         6e090:	eb6d81a8 	bl	1bce738 <$__nw(unsigned int)>
         6e094:	e1b04000 	movs	r4, r0
         6e098:	0a000009 	beq	6e0c4 <TCommToolOptionMgmtRequest::__ct(void)+0x4c>
         6e09c:	e1a00004 	mov	r0, r4
         6e0a0:	eb6e05ca 	bl	1bef7d0 <TCommToolControlRequest::$__ct(void)>
         6e0a4:	e3a0000a 	mov	r0, #10	; 0xa
         6e0a8:	e5840008 	str	r0, [r4, #8]	; fOptions
         6e0ac:	e3a00000 	mov	r0, #0	; 0x0
         6e0b0:	e584000c 	str	r0, [r4, #12]	; fOptionCount
         6e0b4:	e5840010 	str	r0, [r4, #16]	; fRequestOpCode
         6e0b8:	e5840014 	str	r0, [r4, #20]	; fOutside
         6e0bc:	e5c40018 	strb	r0, [r4, #24]
         6e0c0:	e5c40019 	strb	r0, [r4, #25]
         6e0c4:	e1a00004 	mov	r0, r4
         6e0c8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

