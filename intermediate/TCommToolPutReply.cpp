#include "DDKIncludes/Communications/CommTool.h"

/**
 * Symbol: TCommToolPutReply::__ct(void)
 * Address: 0006ecc8
 */
TCommToolPutReply::TCommToolPutReply() {
    /*
         6ecc8:	e1a0c00d 	mov	ip, sp
         6eccc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6ecd0:	e24cb004 	sub	fp, ip, #4	; 0x4
         6ecd4:	e1b04000 	movs	r4, r0
         6ecd8:	1a000003 	bne	6ecec <TCommToolPutReply::__ct(void)+0x24>
         6ecdc:	e3a00014 	mov	r0, #20	; 0x14
         6ece0:	eb6d7e94 	bl	1bce738 <$__nw(unsigned int)>
         6ece4:	e1b04000 	movs	r4, r0
         6ece8:	0a000005 	beq	6ed04 <TCommToolPutReply::__ct(void)+0x3c>
         6ecec:	e1a00004 	mov	r0, r4
         6ecf0:	eb6e02af 	bl	1bef7b4 <TCommToolReply::$__ct(void)>
         6ecf4:	e3a00000 	mov	r0, #0	; 0x0
         6ecf8:	e5840010 	str	r0, [r4, #16]
         6ecfc:	e3a00014 	mov	r0, #20	; 0x14
         6ed00:	e584000c 	str	r0, [r4, #12]	; fPutBytesCount
         6ed04:	e1a00004 	mov	r0, r4
         6ed08:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

