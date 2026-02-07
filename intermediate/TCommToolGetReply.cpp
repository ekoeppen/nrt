#include "DDKIncludes/Communications/CommTool.h"

/**
 * Symbol: TCommToolGetReply::__ct(void)
 * Address: 0006f57c
 */
TCommToolGetReply::TCommToolGetReply() {
    /*
         6f57c:	e1a0c00d 	mov	ip, sp
         6f580:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6f584:	e24cb004 	sub	fp, ip, #4	; 0x4
         6f588:	e1b04000 	movs	r4, r0
         6f58c:	1a000003 	bne	6f5a0 <TCommToolGetReply::__ct(void)+0x24>
         6f590:	e3a00018 	mov	r0, #24	; 0x18
         6f594:	eb6d7c67 	bl	1bce738 <$__nw(unsigned int)>
         6f598:	e1b04000 	movs	r4, r0
         6f59c:	0a000006 	beq	6f5bc <TCommToolGetReply::__ct(void)+0x40>
         6f5a0:	e1a00004 	mov	r0, r4
         6f5a4:	eb6e0082 	bl	1bef7b4 <TCommToolReply::$__ct(void)>
         6f5a8:	e3a00000 	mov	r0, #0	; 0x0
         6f5ac:	e5c40010 	strb	r0, [r4, #16]	; fGetBytesCount
         6f5b0:	e5840014 	str	r0, [r4, #20]
         6f5b4:	e3a00018 	mov	r0, #24	; 0x18
         6f5b8:	e584000c 	str	r0, [r4, #12]	; fEndOfFrame
         6f5bc:	e1a00004 	mov	r0, r4
         6f5c0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

