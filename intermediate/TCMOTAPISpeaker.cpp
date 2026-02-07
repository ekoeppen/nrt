#include "include/TCMOTAPISpeaker.h"

/**
 * Symbol: TCMOTAPISpeaker::__ct(void)
 * Address: 0020652c
 */
TCMOTAPISpeaker::TCMOTAPISpeaker(void) {
    /*
        20652c:	e1a0c00d 	mov	ip, sp
        206530:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        206534:	e24cb004 	sub	fp, ip, #4	; 0x4
        206538:	e1b04000 	movs	r4, r0
        20653c:	1a000003 	bne	206550 <TCMOTAPISpeaker::__ct(void)+0x24>
        206540:	e3a00010 	mov	r0, #16	; 0x10
        206544:	eb67207b 	bl	1bce738 <$__nw(unsigned int)>
        206548:	e1b04000 	movs	r4, r0
        20654c:	0a000008 	beq	206574 <TCMOTAPISpeaker::__ct(void)+0x48>
        206550:	e1a00004 	mov	r0, r4
        206554:	e3a01303 	mov	r1, #201326592	; 0xc000000
        206558:	eb66c172 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        20655c:	e59f0018 	ldr	r0, [pc, #18]	; 20657c <TCMOTAPISpeaker::__ct(void)+0x50>
        206560:	e5840000 	str	r0, [r4]
        206564:	e3a00004 	mov	r0, #4	; 0x4
        206568:	e5840004 	str	r0, [r4, #4]
        20656c:	e3a00001 	mov	r0, #1	; 0x1
        206570:	e5c4000c 	strb	r0, [r4, #12]
        206574:	e1a00004 	mov	r0, r4
        206578:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        20657c:	74617370 	strvcbt	r7, [r1], -#880
    */
}

