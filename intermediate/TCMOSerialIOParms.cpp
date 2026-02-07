#include "DDKIncludes/Communications/SerialOptions.h"

/**
 * Symbol: TCMOSerialIOParms::__ct(void)
 * Address: 001de5b4
 */
TCMOSerialIOParms::TCMOSerialIOParms() {
    /*
        1de5b4:	e1a0c00d 	mov	ip, sp
        1de5b8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1de5bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1de5c0:	e1b04000 	movs	r4, r0
        1de5c4:	1a000003 	bne	1de5d8 <TCMOSerialIOParms::__ct(void)+0x24>
        1de5c8:	e3a0001c 	mov	r0, #28	; 0x1c
        1de5cc:	eb67c059 	bl	1bce738 <$__nw(unsigned int)>
        1de5d0:	e1b04000 	movs	r4, r0
        1de5d4:	0a00000d 	beq	1de610 <TCMOSerialIOParms::__ct(void)+0x5c>
        1de5d8:	e1a00004 	mov	r0, r4
        1de5dc:	e3a01303 	mov	r1, #201326592	; 0xc000000
        1de5e0:	eb676150 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        1de5e4:	e59f002c 	ldr	r0, [pc, #2c]	; 1de618 <TCMOSerialIOParms::__ct(void)+0x64>
        1de5e8:	e5840000 	str	r0, [r4]
        1de5ec:	e3a00010 	mov	r0, #16	; 0x10
        1de5f0:	e5840004 	str	r0, [r4, #4]
        1de5f4:	e3a00000 	mov	r0, #0	; 0x0
        1de5f8:	e584000c 	str	r0, [r4, #12]
        1de5fc:	e5840010 	str	r0, [r4, #16]
        1de600:	e3a00008 	mov	r0, #8	; 0x8
        1de604:	e5840014 	str	r0, [r4, #20]
        1de608:	e3a00d96 	mov	r0, #9600	; 0x2580
        1de60c:	e5840018 	str	r0, [r4, #24]
        1de610:	e1a00004 	mov	r0, r4
        1de614:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1de618:	73696f70 	cmnvc	r9, #448	; 0x1c0
    */
}

