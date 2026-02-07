#include "DDKIncludes/Communications/SerialOptions.h"

/**
 * Symbol: TCMOFlowControlParms::__ct(void)
 * Address: 001ddd0c
 */
TCMOFlowControlParms::TCMOFlowControlParms() {
    /*
        1ddd0c:	e1a0c00d 	mov	ip, sp
        1ddd10:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1ddd14:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ddd18:	e1b04000 	movs	r4, r0
        1ddd1c:	1a000003 	bne	1ddd30 <TCMOFlowControlParms::__ct(void)+0x24>
        1ddd20:	e3a00014 	mov	r0, #20	; 0x14
        1ddd24:	eb67c283 	bl	1bce738 <$__nw(unsigned int)>
        1ddd28:	e1b04000 	movs	r4, r0
        1ddd2c:	0a00000d 	beq	1ddd68 <TCMOFlowControlParms::__ct(void)+0x5c>
        1ddd30:	e1a00004 	mov	r0, r4
        1ddd34:	e3a01303 	mov	r1, #201326592	; 0xc000000
        1ddd38:	eb67637a 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        1ddd3c:	e3a00008 	mov	r0, #8	; 0x8
        1ddd40:	e5840004 	str	r0, [r4, #4]
        1ddd44:	e3a00011 	mov	r0, #17	; 0x11
        1ddd48:	e5c4000c 	strb	r0, [r4, #12]
        1ddd4c:	e3a00013 	mov	r0, #19	; 0x13
        1ddd50:	e5c4000d 	strb	r0, [r4, #13]
        1ddd54:	e3a00000 	mov	r0, #0	; 0x0
        1ddd58:	e5c4000e 	strb	r0, [r4, #14]
        1ddd5c:	e5c4000f 	strb	r0, [r4, #15]
        1ddd60:	e5c40010 	strb	r0, [r4, #16]
        1ddd64:	e5c40011 	strb	r0, [r4, #17]
        1ddd68:	e1a00004 	mov	r0, r4
        1ddd6c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

