#include "DDKIncludes/Communications/CommTool.h"

/**
 * Symbol: TCommToolResArbRequest::__ct(void)
 * Address: 0006e1f4
 */
TCommToolResArbRequest::TCommToolResArbRequest() {
    /*
         6e1f4:	e1a0c00d 	mov	ip, sp
         6e1f8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6e1fc:	e24cb004 	sub	fp, ip, #4	; 0x4
         6e200:	e1b04000 	movs	r4, r0
         6e204:	1a000003 	bne	6e218 <TCommToolResArbRequest::__ct(void)+0x24>
         6e208:	e3a00014 	mov	r0, #20	; 0x14
         6e20c:	eb6d8149 	bl	1bce738 <$__nw(unsigned int)>
         6e210:	e1b04000 	movs	r4, r0
         6e214:	0a000004 	beq	6e22c <TCommToolResArbRequest::__ct(void)+0x38>
         6e218:	e1a00004 	mov	r0, r4
         6e21c:	eb6e056b 	bl	1bef7d0 <TCommToolControlRequest::$__ct(void)>
         6e220:	e3a00000 	mov	r0, #0	; 0x0
         6e224:	e584000c 	str	r0, [r4, #12]	; fResTypePtr
         6e228:	e5840010 	str	r0, [r4, #16]
         6e22c:	e1a00004 	mov	r0, r4
         6e230:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

