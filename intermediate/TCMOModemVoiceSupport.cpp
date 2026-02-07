#include "include/TCMOModemVoiceSupport.h"

/**
 * Symbol: TCMOModemVoiceSupport::__ct(void)
 * Address: 0011f984
 */
TCMOModemVoiceSupport::TCMOModemVoiceSupport(void) {
    /*
        11f984:	e1a0c00d 	mov	ip, sp
        11f988:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11f98c:	e24cb004 	sub	fp, ip, #4	; 0x4
        11f990:	e1b04000 	movs	r4, r0
        11f994:	1a000003 	bne	11f9a8 <TCMOModemVoiceSupport::__ct(void)+0x24>
        11f998:	e3a00010 	mov	r0, #16	; 0x10
        11f99c:	eb6abb65 	bl	1bce738 <$__nw(unsigned int)>
        11f9a0:	e1b04000 	movs	r4, r0
        11f9a4:	0a000008 	beq	11f9cc <TCMOModemVoiceSupport::__ct(void)+0x48>
        11f9a8:	e1a00004 	mov	r0, r4
        11f9ac:	e3a01303 	mov	r1, #201326592	; 0xc000000
        11f9b0:	eb6a5c5c 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        11f9b4:	e59f0018 	ldr	r0, [pc, #18]	; 11f9d4 <TCMOModemVoiceSupport::__ct(void)+0x50>
        11f9b8:	e5840000 	str	r0, [r4]
        11f9bc:	e3a00004 	mov	r0, #4	; 0x4
        11f9c0:	e5840004 	str	r0, [r4, #4]
        11f9c4:	e3a00000 	mov	r0, #0	; 0x0
        11f9c8:	e5c4000c 	strb	r0, [r4, #12]
        11f9cc:	e1a00004 	mov	r0, r4
        11f9d0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        11f9d4:	6d76736f 	ldcvsl	3, cr7, [r6, -#444]!
    */
}

