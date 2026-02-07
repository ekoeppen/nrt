#include "include/TCMOModemFaxCapabilities.h"

/**
 * Symbol: TCMOModemFaxCapabilities::__ct(void)
 * Address: 0011f780
 */
TCMOModemFaxCapabilities::TCMOModemFaxCapabilities(void) {
    /*
        11f780:	e1a0c00d 	mov	ip, sp
        11f784:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11f788:	e24cb004 	sub	fp, ip, #4	; 0x4
        11f78c:	e1b04000 	movs	r4, r0
        11f790:	1a000003 	bne	11f7a4 <TCMOModemFaxCapabilities::__ct(void)+0x24>
        11f794:	e3a00028 	mov	r0, #40	; 0x28
        11f798:	eb6abbe6 	bl	1bce738 <$__nw(unsigned int)>
        11f79c:	e1b04000 	movs	r4, r0
        11f7a0:	0a000011 	beq	11f7ec <TCMOModemFaxCapabilities::__ct(void)+0x6c>
        11f7a4:	e1a00004 	mov	r0, r4
        11f7a8:	e3a01303 	mov	r1, #201326592	; 0xc000000
        11f7ac:	eb6ba325 	bl	1c08448 <TOptionExtended::$__ct(unsigned long)>
        11f7b0:	e59f003c 	ldr	r0, [pc, #3c]	; 11f7f4 <TCMOModemFaxCapabilities::__ct(void)+0x74>
        11f7b4:	e5840000 	str	r0, [r4]
        11f7b8:	e3a0001c 	mov	r0, #28	; 0x1c
        11f7bc:	e5840004 	str	r0, [r4, #4]
        11f7c0:	e3a00007 	mov	r0, #7	; 0x7
        11f7c4:	e3a01a02 	mov	r1, #8192	; 0x2000
        11f7c8:	e2411002 	sub	r1, r1, #2	; 0x2
        11f7cc:	e2844014 	add	r4, r4, #20	; 0x14
        11f7d0:	e8840003 	stmia	r4, {r0, r1}
        11f7d4:	e2444014 	sub	r4, r4, #20	; 0x14
        11f7d8:	e3a00001 	mov	r0, #1	; 0x1
        11f7dc:	e284401c 	add	r4, r4, #28	; 0x1c
        11f7e0:	e8840003 	stmia	r4, {r0, r1}
        11f7e4:	e5840008 	str	r0, [r4, #8]
        11f7e8:	e244401c 	sub	r4, r4, #28	; 0x1c
        11f7ec:	e1a00004 	mov	r0, r4
        11f7f0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        11f7f4:	6d666178 	stfvse	f6, [r6, -#480]!
    */
}

