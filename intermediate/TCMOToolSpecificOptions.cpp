#include "DDKIncludes/Communications/CommToolOptions.h"

/**
 * Symbol: TCMOToolSpecificOptions::__ct(void)
 * Address: 0006ce10
 */
TCMOToolSpecificOptions::TCMOToolSpecificOptions() {
    /*
         6ce10:	e1a0c00d 	mov	ip, sp
         6ce14:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6ce18:	e24cb004 	sub	fp, ip, #4	; 0x4
         6ce1c:	e1b04000 	movs	r4, r0
         6ce20:	1a000003 	bne	6ce34 <TCMOToolSpecificOptions::__ct(void)+0x24>
         6ce24:	e3a00010 	mov	r0, #16	; 0x10
         6ce28:	eb6d8642 	bl	1bce738 <$__nw(unsigned int)>
         6ce2c:	e1b04000 	movs	r4, r0
         6ce30:	0a000008 	beq	6ce58 <TCMOToolSpecificOptions::__ct(void)+0x48>
         6ce34:	e1a00004 	mov	r0, r4
         6ce38:	e3a01303 	mov	r1, #201326592	; 0xc000000
         6ce3c:	eb6d2739 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
         6ce40:	e59f0018 	ldr	r0, [pc, #18]	; 6ce60 <TCMOToolSpecificOptions::__ct(void)+0x50>
         6ce44:	e5840000 	str	r0, [r4]
         6ce48:	e3a00004 	mov	r0, #4	; 0x4
         6ce4c:	e5840004 	str	r0, [r4, #4]
         6ce50:	e3a00000 	mov	r0, #0	; 0x0
         6ce54:	e584000c 	str	r0, [r4, #12]
         6ce58:	e1a00004 	mov	r0, r4
         6ce5c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         6ce60:	6374736f 	cmnvs	r4, #-1140850687	; 0xbc000001
    */
}

