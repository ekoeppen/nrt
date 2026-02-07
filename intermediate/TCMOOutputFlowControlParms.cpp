#include "DDKIncludes/Communications/SerialOptions.h"

/**
 * Symbol: TCMOOutputFlowControlParms::__ct(void)
 * Address: 001dddb0
 */
TCMOOutputFlowControlParms::TCMOOutputFlowControlParms() {
    /*
        1dddb0:	e1a0c00d 	mov	ip, sp
        1dddb4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1dddb8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dddbc:	e1b04000 	movs	r4, r0
        1dddc0:	1a000003 	bne	1dddd4 <TCMOOutputFlowControlParms::__ct(void)+0x24>
        1dddc4:	e3a00014 	mov	r0, #20	; 0x14
        1dddc8:	eb67c25a 	bl	1bce738 <$__nw(unsigned int)>
        1dddcc:	e1b04000 	movs	r4, r0
        1dddd0:	0a000003 	beq	1ddde4 <TCMOOutputFlowControlParms::__ct(void)+0x34>
        1dddd4:	e1a00004 	mov	r0, r4
        1dddd8:	eb677c0d 	bl	1bbce14 <TCMOFlowControlParms::$__ct(void)>
        1ddddc:	e59f0008 	ldr	r0, [pc, #8]	; 1dddec <TCMOOutputFlowControlParms::__ct(void)+0x3c>
        1ddde0:	e5840000 	str	r0, [r4]
        1ddde4:	e1a00004 	mov	r0, r4
        1ddde8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1dddec:	6f666c63 	swivs	0x00666c63
    */
}

