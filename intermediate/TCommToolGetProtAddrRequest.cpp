#include "DDKIncludes/Communications/CommTool.h"

/**
 * Symbol: TCommToolGetProtAddrRequest::__ct(void)
 * Address: 0006e0cc
 */
TCommToolGetProtAddrRequest::TCommToolGetProtAddrRequest() {
    /*
         6e0cc:	e1a0c00d 	mov	ip, sp
         6e0d0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6e0d4:	e24cb004 	sub	fp, ip, #4	; 0x4
         6e0d8:	e1b04000 	movs	r4, r0
         6e0dc:	1a000003 	bne	6e0f0 <TCommToolGetProtAddrRequest::__ct(void)+0x24>
         6e0e0:	e3a00018 	mov	r0, #24	; 0x18
         6e0e4:	eb6d8193 	bl	1bce738 <$__nw(unsigned int)>
         6e0e8:	e1b04000 	movs	r4, r0
         6e0ec:	0a000007 	beq	6e110 <TCommToolGetProtAddrRequest::__ct(void)+0x44>
         6e0f0:	e1a00004 	mov	r0, r4
         6e0f4:	eb6e05b5 	bl	1bef7d0 <TCommToolControlRequest::$__ct(void)>
         6e0f8:	e3a0000b 	mov	r0, #11	; 0xb
         6e0fc:	e5840008 	str	r0, [r4, #8]	; fBoundAddr
         6e100:	e3a00000 	mov	r0, #0	; 0x0
         6e104:	e584000c 	str	r0, [r4, #12]	; fPeerAddr
         6e108:	e5840010 	str	r0, [r4, #16]	; fOutside
         6e10c:	e5c40014 	strb	r0, [r4, #20]
         6e110:	e1a00004 	mov	r0, r4
         6e114:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

