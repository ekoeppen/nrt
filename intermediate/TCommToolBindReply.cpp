#include "DDKIncludes/Communications/CommTool.h"

/**
 * Symbol: TCommToolBindReply::__ct(void)
 * Address: 0006e034
 */
TCommToolBindReply::TCommToolBindReply() {
    /*
         6e034:	e1a0c00d 	mov	ip, sp
         6e038:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6e03c:	e24cb004 	sub	fp, ip, #4	; 0x4
         6e040:	e1b04000 	movs	r4, r0
         6e044:	1a000003 	bne	6e058 <TCommToolBindReply::__ct(void)+0x24>
         6e048:	e3a00014 	mov	r0, #20	; 0x14
         6e04c:	eb6d81b9 	bl	1bce738 <$__nw(unsigned int)>
         6e050:	e1b04000 	movs	r4, r0
         6e054:	0a000005 	beq	6e070 <TCommToolBindReply::__ct(void)+0x3c>
         6e058:	e1a00004 	mov	r0, r4
         6e05c:	eb6e05d4 	bl	1bef7b4 <TCommToolReply::$__ct(void)>
         6e060:	e3a00000 	mov	r0, #0	; 0x0
         6e064:	e5840010 	str	r0, [r4, #16]
         6e068:	e3a00014 	mov	r0, #20	; 0x14
         6e06c:	e584000c 	str	r0, [r4, #12]	; fWastedULong
         6e070:	e1a00004 	mov	r0, r4
         6e074:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

