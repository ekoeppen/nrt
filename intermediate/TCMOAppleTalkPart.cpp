#include "include/TCMOAppleTalkPart.h"

/**
 * Symbol: TCMOAppleTalkPart::__ct(unsigned long)
 * Address: 000324fc
 */
TCMOAppleTalkPart::TCMOAppleTalkPart(unsigned long) {
    /*
         324fc:	e1a0c00d 	mov	ip, sp
         32500:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         32504:	e24cb004 	sub	fp, ip, #4	; 0x4
         32508:	e1b04000 	movs	r4, r0
         3250c:	e1a05001 	mov	r5, r1
         32510:	1a000003 	bne	32524 <TCMOAppleTalkPart::__ct(unsigned long)+0x28>
         32514:	e3a00010 	mov	r0, #16	; 0x10
         32518:	eb6e7086 	bl	1bce738 <$__nw(unsigned int)>
         3251c:	e1b04000 	movs	r4, r0
         32520:	0a000007 	beq	32544 <TCMOAppleTalkPart::__ct(unsigned long)+0x48>
         32524:	e1a00004 	mov	r0, r4
         32528:	e3a01303 	mov	r1, #201326592	; 0xc000000
         3252c:	eb6e117d 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
         32530:	e59f0014 	ldr	r0, [pc, #14]	; 3254c <TCMOAppleTalkPart::__ct(unsigned long)+0x50>
         32534:	e5840000 	str	r0, [r4]
         32538:	e3a00004 	mov	r0, #4	; 0x4
         3253c:	e5840004 	str	r0, [r4, #4]
         32540:	e584500c 	str	r5, [r4, #12]
         32544:	e1a00004 	mov	r0, r4
         32548:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         3254c:	61746c6b 	cmnvs	r4, fp, ror #24
    */
}

