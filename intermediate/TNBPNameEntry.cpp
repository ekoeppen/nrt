#include "include/TNBPNameEntry.h"

/**
 * Symbol: TNBPNameEntry::__ct(void)
 * Address: 0012e5e8
 */
TNBPNameEntry::TNBPNameEntry(void) {
    /*
        12e5e8:	e1a0c00d 	mov	ip, sp
        12e5ec:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        12e5f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        12e5f4:	e1b04000 	movs	r4, r0
        12e5f8:	1a000003 	bne	12e60c <TNBPNameEntry::__ct(void)+0x24>
        12e5fc:	e3a00078 	mov	r0, #120	; 0x78
        12e600:	eb6a804c 	bl	1bce738 <$__nw(unsigned int)>
        12e604:	e1b04000 	movs	r4, r0
        12e608:	0a000003 	beq	12e61c <TNBPNameEntry::__ct(void)+0x34>
        12e60c:	e2840008 	add	r0, r4, #8	; 0x8
        12e610:	eb650cb5 	bl	1a718ec <TNBPEntityName::$__ct(void)>
        12e614:	e3a00000 	mov	r0, #0	; 0x0
        12e618:	e5840074 	str	r0, [r4, #116]
        12e61c:	e1a00004 	mov	r0, r4
        12e620:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TNBPNameEntry::operator==(TNBPNameEntry &)
 * Address: 0012e624
 */
TNBPNameEntry::operator==(TNBPNameEntry &) {
    /*
        12e624:	e2811008 	add	r1, r1, #8	; 0x8
        12e628:	e2800008 	add	r0, r0, #8	; 0x8
        12e62c:	ea656358 	b	1a87394 <TNBPEntityName::$__eq(TNBPEntityName &)>
    */
}

