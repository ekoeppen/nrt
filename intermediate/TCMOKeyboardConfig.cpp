#include "DDKIncludes/Communications/SerialOptions.h"

/**
 * Symbol: TCMOKeyboardConfig::__ct(void)
 * Address: 001ddf10
 */
TCMOKeyboardConfig::TCMOKeyboardConfig() {
    /*
        1ddf10:	e1a0c00d 	mov	ip, sp
        1ddf14:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1ddf18:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ddf1c:	e1b04000 	movs	r4, r0
        1ddf20:	1a000003 	bne	1ddf34 <TCMOKeyboardConfig::__ct(void)+0x24>
        1ddf24:	e3a00014 	mov	r0, #20	; 0x14
        1ddf28:	eb67c202 	bl	1bce738 <$__nw(unsigned int)>
        1ddf2c:	e1b04000 	movs	r4, r0
        1ddf30:	0a00000d 	beq	1ddf6c <TCMOKeyboardConfig::__ct(void)+0x5c>
        1ddf34:	e1a00004 	mov	r0, r4
        1ddf38:	e3a01303 	mov	r1, #201326592	; 0xc000000
        1ddf3c:	eb6762f9 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        1ddf40:	e59f002c 	ldr	r0, [pc, #2c]	; 1ddf74 <TCMOKeyboardConfig::__ct(void)+0x64>
        1ddf44:	e5840000 	str	r0, [r4]
        1ddf48:	e3a00008 	mov	r0, #8	; 0x8
        1ddf4c:	e5840004 	str	r0, [r4, #4]
        1ddf50:	e3a00001 	mov	r0, #1	; 0x1
        1ddf54:	e5c4000c 	strb	r0, [r4, #12]
        1ddf58:	e5c4000d 	strb	r0, [r4, #13]
        1ddf5c:	e5c4000e 	strb	r0, [r4, #14]
        1ddf60:	e5c4000f 	strb	r0, [r4, #15]
        1ddf64:	e3a00000 	mov	r0, #0	; 0x0
        1ddf68:	e5c40010 	strb	r0, [r4, #16]
        1ddf6c:	e1a00004 	mov	r0, r4
        1ddf70:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1ddf74:	6b626366 	blvs	1a76d14 <TATP::$Cancel(TAppleTalkMessage *)+0x198>
    */
}

