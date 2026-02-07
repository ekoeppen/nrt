#include "DDKIncludes/Communications/MNPOptions.h"

/**
 * Symbol: TCMOMNPDataRate::__ct(void)
 * Address: 0011875c
 */
TCMOMNPDataRate::TCMOMNPDataRate() {
    /*
        11875c:	e1a0c00d 	mov	ip, sp
        118760:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        118764:	e24cb004 	sub	fp, ip, #4	; 0x4
        118768:	e1b04000 	movs	r4, r0
        11876c:	1a000003 	bne	118780 <TCMOMNPDataRate::__ct(void)+0x24>
        118770:	e3a00010 	mov	r0, #16	; 0x10
        118774:	eb6ad7ef 	bl	1bce738 <$__nw(unsigned int)>
        118778:	e1b04000 	movs	r4, r0
        11877c:	0a000008 	beq	1187a4 <TCMOMNPDataRate::__ct(void)+0x48>
        118780:	e1a00004 	mov	r0, r4
        118784:	e3a01303 	mov	r1, #201326592	; 0xc000000
        118788:	eb6a78e6 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        11878c:	e59f0018 	ldr	r0, [pc, #18]	; 1187ac <TCMOMNPDataRate::__ct(void)+0x50>
        118790:	e5840000 	str	r0, [r4]
        118794:	e3a00004 	mov	r0, #4	; 0x4
        118798:	e5840004 	str	r0, [r4, #4]
        11879c:	e3a00e96 	mov	r0, #2400	; 0x960
        1187a0:	e584000c 	str	r0, [r4, #12]
        1187a4:	e1a00004 	mov	r0, r4
        1187a8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1187ac:	65746572 	ldrvsb	r6, [r4, -#1394]!
    */
}

