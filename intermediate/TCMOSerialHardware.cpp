#include "DDKIncludes/Communications/SerialOptions.h"

/**
 * Symbol: TCMOSerialHardware::__ct(void)
 * Address: 001de228
 */
TCMOSerialHardware::TCMOSerialHardware() {
    /*
        1de228:	e1a0c00d 	mov	ip, sp
        1de22c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1de230:	e24cb004 	sub	fp, ip, #4	; 0x4
        1de234:	e1b04000 	movs	r4, r0
        1de238:	1a000003 	bne	1de24c <TCMOSerialHardware::__ct(void)+0x24>
        1de23c:	e3a00018 	mov	r0, #24	; 0x18
        1de240:	eb67c13c 	bl	1bce738 <$__nw(unsigned int)>
        1de244:	e1b04000 	movs	r4, r0
        1de248:	0a00000d 	beq	1de284 <TCMOSerialHardware::__ct(void)+0x5c>
        1de24c:	e1a00004 	mov	r0, r4
        1de250:	e3a01303 	mov	r1, #201326592	; 0xc000000
        1de254:	eb676233 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        1de258:	e59f002c 	ldr	r0, [pc, #2c]	; 1de28c <TCMOSerialHardware::__ct(void)+0x64>
        1de25c:	e5840000 	str	r0, [r4]
        1de260:	e3a0000c 	mov	r0, #12	; 0xc
        1de264:	e5840004 	str	r0, [r4, #4]
        1de268:	e3a00001 	mov	r0, #1	; 0x1
        1de26c:	e584000c 	str	r0, [r4, #12]
        1de270:	e59f0018 	ldr	r0, [pc, #18]	; 1de290 <TCMOSerialHardware::__ct(void)+0x68>
        1de274:	e5900000 	ldr	r0, [r0]
        1de278:	e5840010 	str	r0, [r4, #16]
        1de27c:	e3a00000 	mov	r0, #0	; 0x0
        1de280:	e5840014 	str	r0, [r4, #20]
        1de284:	e1a00004 	mov	r0, r4
        1de288:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1de28c:	73636320 	cmnvc	r3, #-2147483648	; 0x80000000
        1de290:	0037772c 	eoreqs	r7, r7, ip, lsr #14
    */
}

