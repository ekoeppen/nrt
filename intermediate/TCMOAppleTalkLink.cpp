#include "include/TCMOAppleTalkLink.h"

/**
 * Symbol: TCMOAppleTalkLink::__ct(void)
 * Address: 0003244c
 */
TCMOAppleTalkLink::TCMOAppleTalkLink(void) {
    /*
         3244c:	e1a0c00d 	mov	ip, sp
         32450:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         32454:	e24cb004 	sub	fp, ip, #4	; 0x4
         32458:	e1b04000 	movs	r4, r0
         3245c:	1a000003 	bne	32470 <TCMOAppleTalkLink::__ct(void)+0x24>
         32460:	e3a00010 	mov	r0, #16	; 0x10
         32464:	eb6e70b3 	bl	1bce738 <$__nw(unsigned int)>
         32468:	e1b04000 	movs	r4, r0
         3246c:	0a000008 	beq	32494 <TCMOAppleTalkLink::__ct(void)+0x48>
         32470:	e1a00004 	mov	r0, r4
         32474:	e3a01303 	mov	r1, #201326592	; 0xc000000
         32478:	eb6e11aa 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
         3247c:	e59f0018 	ldr	r0, [pc, #18]	; 3249c <TCMOAppleTalkLink::__ct(void)+0x50>
         32480:	e5840000 	str	r0, [r4]
         32484:	e3a00004 	mov	r0, #4	; 0x4
         32488:	e5840004 	str	r0, [r4, #4]
         3248c:	e59f000c 	ldr	r0, [pc, #c]	; 324a0 <TCMOAppleTalkLink::__ct(void)+0x54>
         32490:	e584000c 	str	r0, [r4, #12]
         32494:	e1a00004 	mov	r0, r4
         32498:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         3249c:	6c696e6b 	stcvsl	14, cr6, [r9], -#428
         324a0:	736c746b 	cmnvc	ip, #1795162112	; 0x6b000000
    */
}

