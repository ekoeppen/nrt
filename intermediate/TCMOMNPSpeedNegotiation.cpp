#include "DDKIncludes/Communications/MNPOptions.h"

/**
 * Symbol: TCMOMNPSpeedNegotiation::__ct(void)
 * Address: 001187b0
 */
TCMOMNPSpeedNegotiation::TCMOMNPSpeedNegotiation() {
    /*
        1187b0:	e1a0c00d 	mov	ip, sp
        1187b4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1187b8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1187bc:	e1b04000 	movs	r4, r0
        1187c0:	1a000003 	bne	1187d4 <TCMOMNPSpeedNegotiation::__ct(void)+0x24>
        1187c4:	e3a00010 	mov	r0, #16	; 0x10
        1187c8:	eb6ad7da 	bl	1bce738 <$__nw(unsigned int)>
        1187cc:	e1b04000 	movs	r4, r0
        1187d0:	0a000008 	beq	1187f8 <TCMOMNPSpeedNegotiation::__ct(void)+0x48>
        1187d4:	e1a00004 	mov	r0, r4
        1187d8:	e3a01303 	mov	r1, #201326592	; 0xc000000
        1187dc:	eb6a78d1 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        1187e0:	e59f0018 	ldr	r0, [pc, #18]	; 118800 <TCMOMNPSpeedNegotiation::__ct(void)+0x50>
        1187e4:	e5840000 	str	r0, [r4]
        1187e8:	e3a00004 	mov	r0, #4	; 0x4
        1187ec:	e5840004 	str	r0, [r4, #4]
        1187f0:	e3a00ce1 	mov	r0, #57600	; 0xe100
        1187f4:	e584000c 	str	r0, [r4, #12]
        1187f8:	e1a00004 	mov	r0, r4
        1187fc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        118800:	6d6e706e 	stcvsl	0, cr7, [lr, -#440]!
    */
}

