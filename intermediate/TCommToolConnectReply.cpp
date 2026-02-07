#include "DDKIncludes/Communications/CommTool.h"

/**
 * Symbol: TCommToolConnectReply::__ct(void)
 * Address: 0006d488
 */
TCommToolConnectReply::TCommToolConnectReply() {
    /*
         6d488:	e1a0c00d 	mov	ip, sp
         6d48c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6d490:	e24cb004 	sub	fp, ip, #4	; 0x4
         6d494:	e1b04000 	movs	r4, r0
         6d498:	1a000003 	bne	6d4ac <TCommToolConnectReply::__ct(void)+0x24>
         6d49c:	e3a00014 	mov	r0, #20	; 0x14
         6d4a0:	eb6d84a4 	bl	1bce738 <$__nw(unsigned int)>
         6d4a4:	e1b04000 	movs	r4, r0
         6d4a8:	0a000005 	beq	6d4c4 <TCommToolConnectReply::__ct(void)+0x3c>
         6d4ac:	e1a00004 	mov	r0, r4
         6d4b0:	eb6e08bf 	bl	1bef7b4 <TCommToolReply::$__ct(void)>
         6d4b4:	e3a00000 	mov	r0, #0	; 0x0
         6d4b8:	e5840010 	str	r0, [r4, #16]
         6d4bc:	e3a00014 	mov	r0, #20	; 0x14
         6d4c0:	e584000c 	str	r0, [r4, #12]	; fSequence
         6d4c4:	e1a00004 	mov	r0, r4
         6d4c8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

