#include "include/TCMOModemFaxEnabledCaps.h"

/**
 * Symbol: TCMOModemFaxEnabledCaps::__ct(void)
 * Address: 0011f7f8
 */
TCMOModemFaxEnabledCaps::TCMOModemFaxEnabledCaps(void) {
    /*
        11f7f8:	e1a0c00d 	mov	ip, sp
        11f7fc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11f800:	e24cb004 	sub	fp, ip, #4	; 0x4
        11f804:	e1b04000 	movs	r4, r0
        11f808:	1a000003 	bne	11f81c <TCMOModemFaxEnabledCaps::__ct(void)+0x24>
        11f80c:	e3a00028 	mov	r0, #40	; 0x28
        11f810:	eb6abbc8 	bl	1bce738 <$__nw(unsigned int)>
        11f814:	e1b04000 	movs	r4, r0
        11f818:	0a000011 	beq	11f864 <TCMOModemFaxEnabledCaps::__ct(void)+0x6c>
        11f81c:	e1a00004 	mov	r0, r4
        11f820:	e3a01303 	mov	r1, #201326592	; 0xc000000
        11f824:	eb6ba307 	bl	1c08448 <TOptionExtended::$__ct(unsigned long)>
        11f828:	e59f003c 	ldr	r0, [pc, #3c]	; 11f86c <TCMOModemFaxEnabledCaps::__ct(void)+0x74>
        11f82c:	e5840000 	str	r0, [r4]
        11f830:	e3a0001c 	mov	r0, #28	; 0x1c
        11f834:	e5840004 	str	r0, [r4, #4]
        11f838:	e3a00007 	mov	r0, #7	; 0x7
        11f83c:	e3a01a02 	mov	r1, #8192	; 0x2000
        11f840:	e2411002 	sub	r1, r1, #2	; 0x2
        11f844:	e2844014 	add	r4, r4, #20	; 0x14
        11f848:	e8840003 	stmia	r4, {r0, r1}
        11f84c:	e2444014 	sub	r4, r4, #20	; 0x14
        11f850:	e3a00001 	mov	r0, #1	; 0x1
        11f854:	e284401c 	add	r4, r4, #28	; 0x1c
        11f858:	e8840003 	stmia	r4, {r0, r1}
        11f85c:	e5840008 	str	r0, [r4, #8]
        11f860:	e244401c 	sub	r4, r4, #28	; 0x1c
        11f864:	e1a00004 	mov	r0, r4
        11f868:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        11f86c:	6d666563 	stcvsl	5, cr6, [r6, -#396]!
    */
}

