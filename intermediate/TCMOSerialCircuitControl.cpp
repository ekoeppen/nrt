#include "DDKIncludes/Communications/SerialOptions.h"

/**
 * Symbol: TCMOSerialCircuitControl::__ct(void)
 * Address: 001dddf0
 */
TCMOSerialCircuitControl::TCMOSerialCircuitControl() {
    /*
        1dddf0:	e1a0c00d 	mov	ip, sp
        1dddf4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1dddf8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dddfc:	e1b04000 	movs	r4, r0
        1dde00:	1a000003 	bne	1dde14 <TCMOSerialCircuitControl::__ct(void)+0x24>
        1dde04:	e3a00010 	mov	r0, #16	; 0x10
        1dde08:	eb67c24a 	bl	1bce738 <$__nw(unsigned int)>
        1dde0c:	e1b04000 	movs	r4, r0
        1dde10:	0a00000b 	beq	1dde44 <TCMOSerialCircuitControl::__ct(void)+0x54>
        1dde14:	e1a00004 	mov	r0, r4
        1dde18:	e3a01303 	mov	r1, #201326592	; 0xc000000
        1dde1c:	eb676341 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        1dde20:	e59f0024 	ldr	r0, [pc, #24]	; 1dde4c <TCMOSerialCircuitControl::__ct(void)+0x5c>
        1dde24:	e5840000 	str	r0, [r4]
        1dde28:	e3a00004 	mov	r0, #4	; 0x4
        1dde2c:	e5840004 	str	r0, [r4, #4]
        1dde30:	e3a00000 	mov	r0, #0	; 0x0
        1dde34:	e5c4000c 	strb	r0, [r4, #12]
        1dde38:	e5c4000d 	strb	r0, [r4, #13]
        1dde3c:	e5c4000e 	strb	r0, [r4, #14]
        1dde40:	e5c4000f 	strb	r0, [r4, #15]
        1dde44:	e1a00004 	mov	r0, r4
        1dde48:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1dde4c:	7363746c 	cmnvc	r3, #1811939328	; 0x6c000000
    */
}

