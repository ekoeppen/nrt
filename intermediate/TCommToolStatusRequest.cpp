#include "DDKIncludes/Communications/CommTool.h"

/**
 * Symbol: TCommToolStatusRequest::__ct(void)
 * Address: 0006e1b8
 */
TCommToolStatusRequest::TCommToolStatusRequest() {
    /*
         6e1b8:	e1a0c00d 	mov	ip, sp
         6e1bc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6e1c0:	e24cb004 	sub	fp, ip, #4	; 0x4
         6e1c4:	e1b04000 	movs	r4, r0
         6e1c8:	1a000003 	bne	6e1dc <TCommToolStatusRequest::__ct(void)+0x24>
         6e1cc:	e3a00010 	mov	r0, #16	; 0x10
         6e1d0:	eb6d8158 	bl	1bce738 <$__nw(unsigned int)>
         6e1d4:	e1b04000 	movs	r4, r0
         6e1d8:	0a000003 	beq	6e1ec <TCommToolStatusRequest::__ct(void)+0x34>
         6e1dc:	e1a00004 	mov	r0, r4
         6e1e0:	eb6e057a 	bl	1bef7d0 <TCommToolControlRequest::$__ct(void)>
         6e1e4:	e3a00000 	mov	r0, #0	; 0x0
         6e1e8:	e584000c 	str	r0, [r4, #12]
         6e1ec:	e1a00004 	mov	r0, r4
         6e1f0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

