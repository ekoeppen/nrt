#include "DDKIncludes/Communications/CommTool.h"

/**
 * Symbol: TCommToolPutRequest::__ct(void)
 * Address: 0006e738
 */
TCommToolPutRequest::TCommToolPutRequest() {
    /*
         6e738:	e1a0c00d 	mov	ip, sp
         6e73c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6e740:	e24cb004 	sub	fp, ip, #4	; 0x4
         6e744:	e1b04000 	movs	r4, r0
         6e748:	1a000003 	bne	6e75c <TCommToolPutRequest::__ct(void)+0x24>
         6e74c:	e3a0001c 	mov	r0, #28	; 0x1c
         6e750:	eb6d7ff8 	bl	1bce738 <$__nw(unsigned int)>
         6e754:	e1b04000 	movs	r4, r0
         6e758:	0a000007 	beq	6e77c <TCommToolPutRequest::__ct(void)+0x44>
         6e75c:	e1a00004 	mov	r0, r4
         6e760:	eb6e0419 	bl	1bef7cc <TCommToolAEvent::$__ct(void)>
         6e764:	e3a00000 	mov	r0, #0	; 0x0
         6e768:	e5840008 	str	r0, [r4, #8]	; fValidCount
         6e76c:	e584000c 	str	r0, [r4, #12]	; fOutside
         6e770:	e5c40010 	strb	r0, [r4, #16]	; fOptions
         6e774:	e5c40011 	strb	r0, [r4, #17]
         6e778:	e5c40012 	strb	r0, [r4, #18]
         6e77c:	e1a00004 	mov	r0, r4
         6e780:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

