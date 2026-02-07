#include "DDKIncludes/Communications/SerialOptions.h"

/**
 * Symbol: TCMOInputFlowControlParms::__ct(void)
 * Address: 001ddd70
 */
TCMOInputFlowControlParms::TCMOInputFlowControlParms() {
    /*
        1ddd70:	e1a0c00d 	mov	ip, sp
        1ddd74:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1ddd78:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ddd7c:	e1b04000 	movs	r4, r0
        1ddd80:	1a000003 	bne	1ddd94 <TCMOInputFlowControlParms::__ct(void)+0x24>
        1ddd84:	e3a00014 	mov	r0, #20	; 0x14
        1ddd88:	eb67c26a 	bl	1bce738 <$__nw(unsigned int)>
        1ddd8c:	e1b04000 	movs	r4, r0
        1ddd90:	0a000003 	beq	1ddda4 <TCMOInputFlowControlParms::__ct(void)+0x34>
        1ddd94:	e1a00004 	mov	r0, r4
        1ddd98:	eb677c1d 	bl	1bbce14 <TCMOFlowControlParms::$__ct(void)>
        1ddd9c:	e59f0008 	ldr	r0, [pc, #8]	; 1dddac <TCMOInputFlowControlParms::__ct(void)+0x3c>
        1ddda0:	e5840000 	str	r0, [r4]
        1ddda4:	e1a00004 	mov	r0, r4
        1ddda8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1dddac:	69666c63 	stmvsdb	r6!, {r0, r1, r5, r6, sl, fp, sp, lr}^
    */
}

