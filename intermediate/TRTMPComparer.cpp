#include "include/TRTMPComparer.h"

/**
 * Symbol: TRTMPComparer::__ct(void)
 * Address: 0019b428
 */
TRTMPComparer::TRTMPComparer(void) {
    /*
        19b428:	e1a0c00d 	mov	ip, sp
        19b42c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        19b430:	e24cb004 	sub	fp, ip, #4	; 0x4
        19b434:	e1b04000 	movs	r4, r0
        19b438:	1a000003 	bne	19b44c <TRTMPComparer::__ct(void)+0x24>
        19b43c:	e3a00010 	mov	r0, #16	; 0x10
        19b440:	eb68ccbc 	bl	1bce738 <$__nw(unsigned int)>
        19b444:	e1b04000 	movs	r4, r0
        19b448:	0a000003 	beq	19b45c <TRTMPComparer::__ct(void)+0x34>
        19b44c:	e1a00004 	mov	r0, r4
        19b450:	eb691f62 	bl	1be31e0 <CItemComparer::$__ct(void)>
        19b454:	e59f0008 	ldr	r0, [pc, #8]	; 19b464 <TRTMPComparer::__ct(void)+0x3c>
        19b458:	e5840000 	str	r0, [r4]
        19b45c:	e1a00004 	mov	r0, r4
        19b460:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        19b464:	0001d0bc 	streqh	sp, [r1], -ip
    */
}

/**
 * Symbol: TRTMPComparer::TestItem( const(void const *))
 * Address: 0019b468
 */
TRTMPComparer::TestItem( const(void const *)) {
    /*
        19b468:	e5911014 	ldr	r1, [r1, #20]
        19b46c:	e5911020 	ldr	r1, [r1, #32]
        19b470:	e590000c 	ldr	r0, [r0, #12]	; fField12
        19b474:	e1510000 	cmp	r1, r0
        19b478:	83e00000 	mvnhi	r0, #0	; 0x0
        19b47c:	81a0f00e 	movhi	pc, lr
        19b480:	23a00000 	movcs	r0, #0	; 0x0
        19b484:	33a00001 	movcc	r0, #1	; 0x1
        19b488:	e1a0f00e 	mov	pc, lr
    */
}

