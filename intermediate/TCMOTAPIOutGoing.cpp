#include "include/TCMOTAPIOutGoing.h"

/**
 * Symbol: TCMOTAPIOutGoing::__ct(void)
 * Address: 002065d4
 */
TCMOTAPIOutGoing::TCMOTAPIOutGoing(void) {
    /*
        2065d4:	e1a0c00d 	mov	ip, sp
        2065d8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2065dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2065e0:	e1b04000 	movs	r4, r0
        2065e4:	1a000003 	bne	2065f8 <TCMOTAPIOutGoing::__ct(void)+0x24>
        2065e8:	e3a0000c 	mov	r0, #12	; 0xc
        2065ec:	eb672051 	bl	1bce738 <$__nw(unsigned int)>
        2065f0:	e1b04000 	movs	r4, r0
        2065f4:	0a000006 	beq	206614 <TCMOTAPIOutGoing::__ct(void)+0x40>
        2065f8:	e1a00004 	mov	r0, r4
        2065fc:	e3a01303 	mov	r1, #201326592	; 0xc000000
        206600:	eb66c148 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        206604:	e59f0010 	ldr	r0, [pc, #10]	; 20661c <TCMOTAPIOutGoing::__ct(void)+0x48>
        206608:	e5840000 	str	r0, [r4]
        20660c:	e3a00000 	mov	r0, #0	; 0x0
        206610:	e5840004 	str	r0, [r4, #4]
        206614:	e1a00004 	mov	r0, r4
        206618:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        20661c:	6f757467 	swivs	0x00757467
    */
}

