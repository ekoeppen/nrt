#include "DDKIncludes/Communications/CommTool.h"

/**
 * Symbol: TCommToolOpenRequest::__ct(void)
 * Address: 0006f8ec
 */
TCommToolOpenRequest::TCommToolOpenRequest() {
    /*
         6f8ec:	e1a0c00d 	mov	ip, sp
         6f8f0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6f8f4:	e24cb004 	sub	fp, ip, #4	; 0x4
         6f8f8:	e1b04000 	movs	r4, r0
         6f8fc:	1a000003 	bne	6f910 <TCommToolOpenRequest::__ct(void)+0x24>
         6f900:	e3a00018 	mov	r0, #24	; 0x18
         6f904:	eb6d7b8b 	bl	1bce738 <$__nw(unsigned int)>
         6f908:	e1b04000 	movs	r4, r0
         6f90c:	0a000007 	beq	6f930 <TCommToolOpenRequest::__ct(void)+0x44>
         6f910:	e1a00004 	mov	r0, r4
         6f914:	eb6dffad 	bl	1bef7d0 <TCommToolControlRequest::$__ct(void)>
         6f918:	e3a00001 	mov	r0, #1	; 0x1
         6f91c:	e5840008 	str	r0, [r4, #8]	; fOptions
         6f920:	e3a00000 	mov	r0, #0	; 0x0
         6f924:	e584000c 	str	r0, [r4, #12]	; fOptionCount
         6f928:	e5840010 	str	r0, [r4, #16]	; fOutside
         6f92c:	e5c40014 	strb	r0, [r4, #20]
         6f930:	e1a00004 	mov	r0, r4
         6f934:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

