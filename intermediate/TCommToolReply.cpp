#include "DDKIncludes/Communications/CommTool.h"

/**
 * Symbol: TCommToolReply::__ct(void)
 * Address: 0006e234
 */
TCommToolReply::TCommToolReply() {
    /*
         6e234:	e1a0c00d 	mov	ip, sp
         6e238:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6e23c:	e24cb004 	sub	fp, ip, #4	; 0x4
         6e240:	e1b04000 	movs	r4, r0
         6e244:	1a000003 	bne	6e258 <TCommToolReply::__ct(void)+0x24>
         6e248:	e3a00010 	mov	r0, #16	; 0x10
         6e24c:	eb6d8139 	bl	1bce738 <$__nw(unsigned int)>
         6e250:	e1b04000 	movs	r4, r0
         6e254:	0a000005 	beq	6e270 <TCommToolReply::__ct(void)+0x3c>
         6e258:	e1a00004 	mov	r0, r4
         6e25c:	eb6e055a 	bl	1bef7cc <TCommToolAEvent::$__ct(void)>
         6e260:	e3a00000 	mov	r0, #0	; 0x0
         6e264:	e5840008 	str	r0, [r4, #8]	; fSize
         6e268:	e3a00010 	mov	r0, #16	; 0x10
         6e26c:	e584000c 	str	r0, [r4, #12]
         6e270:	e1a00004 	mov	r0, r4
         6e274:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

