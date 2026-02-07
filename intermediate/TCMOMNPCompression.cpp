#include "DDKIncludes/Communications/MNPOptions.h"

/**
 * Symbol: TCMOMNPCompression::__ct(void)
 * Address: 001186b4
 */
TCMOMNPCompression::TCMOMNPCompression() {
    /*
        1186b4:	e1a0c00d 	mov	ip, sp
        1186b8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1186bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1186c0:	e1b04000 	movs	r4, r0
        1186c4:	1a000003 	bne	1186d8 <TCMOMNPCompression::__ct(void)+0x24>
        1186c8:	e3a00010 	mov	r0, #16	; 0x10
        1186cc:	eb6ad819 	bl	1bce738 <$__nw(unsigned int)>
        1186d0:	e1b04000 	movs	r4, r0
        1186d4:	0a000008 	beq	1186fc <TCMOMNPCompression::__ct(void)+0x48>
        1186d8:	e1a00004 	mov	r0, r4
        1186dc:	e3a01303 	mov	r1, #201326592	; 0xc000000
        1186e0:	eb6a7910 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        1186e4:	e59f0018 	ldr	r0, [pc, #18]	; 118704 <TCMOMNPCompression::__ct(void)+0x50>
        1186e8:	e5840000 	str	r0, [r4]
        1186ec:	e3a00004 	mov	r0, #4	; 0x4
        1186f0:	e5840004 	str	r0, [r4, #4]
        1186f4:	e3a0000b 	mov	r0, #11	; 0xb
        1186f8:	e584000c 	str	r0, [r4, #12]
        1186fc:	e1a00004 	mov	r0, r4
        118700:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        118704:	6d6e7063 	stcvsl	0, cr7, [lr, -#396]!
    */
}

