#include "DDKIncludes/Communications/SerialOptions.h"

/**
 * Symbol: TCMOSerialDTRControl::__ct(void)
 * Address: 001ddba0
 */
TCMOSerialDTRControl::TCMOSerialDTRControl() {
    /*
        1ddba0:	e1a0c00d 	mov	ip, sp
        1ddba4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1ddba8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ddbac:	e1b04000 	movs	r4, r0
        1ddbb0:	1a000003 	bne	1ddbc4 <TCMOSerialDTRControl::__ct(void)+0x24>
        1ddbb4:	e3a00010 	mov	r0, #16	; 0x10
        1ddbb8:	eb67c2de 	bl	1bce738 <$__nw(unsigned int)>
        1ddbbc:	e1b04000 	movs	r4, r0
        1ddbc0:	0a000008 	beq	1ddbe8 <TCMOSerialDTRControl::__ct(void)+0x48>
        1ddbc4:	e1a00004 	mov	r0, r4
        1ddbc8:	e3a01303 	mov	r1, #201326592	; 0xc000000
        1ddbcc:	eb6763d5 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        1ddbd0:	e59f0018 	ldr	r0, [pc, #18]	; 1ddbf0 <TCMOSerialDTRControl::__ct(void)+0x50>
        1ddbd4:	e5840000 	str	r0, [r4]
        1ddbd8:	e3a00004 	mov	r0, #4	; 0x4
        1ddbdc:	e5840004 	str	r0, [r4, #4]
        1ddbe0:	e3a00001 	mov	r0, #1	; 0x1
        1ddbe4:	e5c4000c 	strb	r0, [r4, #12]
        1ddbe8:	e1a00004 	mov	r0, r4
        1ddbec:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1ddbf0:	73647472 	cmnvc	r4, #1912602624	; 0x72000000
    */
}

