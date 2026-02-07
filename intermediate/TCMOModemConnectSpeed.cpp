#include "include/TCMOModemConnectSpeed.h"

/**
 * Symbol: TCMOModemConnectSpeed::__ct(void)
 * Address: 0011f3d8
 */
TCMOModemConnectSpeed::TCMOModemConnectSpeed(void) {
    /*
        11f3d8:	e1a0c00d 	mov	ip, sp
        11f3dc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11f3e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        11f3e4:	e1b04000 	movs	r4, r0
        11f3e8:	1a000003 	bne	11f3fc <TCMOModemConnectSpeed::__ct(void)+0x24>
        11f3ec:	e3a00010 	mov	r0, #16	; 0x10
        11f3f0:	eb6abcd0 	bl	1bce738 <$__nw(unsigned int)>
        11f3f4:	e1b04000 	movs	r4, r0
        11f3f8:	0a000008 	beq	11f420 <TCMOModemConnectSpeed::__ct(void)+0x48>
        11f3fc:	e1a00004 	mov	r0, r4
        11f400:	e3a01303 	mov	r1, #201326592	; 0xc000000
        11f404:	eb6a5dc7 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        11f408:	e59f0018 	ldr	r0, [pc, #18]	; 11f428 <TCMOModemConnectSpeed::__ct(void)+0x50>
        11f40c:	e5840000 	str	r0, [r4]
        11f410:	e3a00004 	mov	r0, #4	; 0x4
        11f414:	e5840004 	str	r0, [r4, #4]
        11f418:	e3a00000 	mov	r0, #0	; 0x0
        11f41c:	e584000c 	str	r0, [r4, #12]
        11f420:	e1a00004 	mov	r0, r4
        11f424:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        11f428:	6d737064 	ldcvsl	0, cr7, [r3, -#400]!
    */
}

