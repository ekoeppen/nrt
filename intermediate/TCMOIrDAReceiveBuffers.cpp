#include "DDKIncludes/Communications/SerialOptions.h"

/**
 * Symbol: TCMOIrDAReceiveBuffers::__ct(void)
 * Address: 001de35c
 */
TCMOIrDAReceiveBuffers::TCMOIrDAReceiveBuffers() {
    /*
        1de35c:	e1a0c00d 	mov	ip, sp
        1de360:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1de364:	e24cb004 	sub	fp, ip, #4	; 0x4
        1de368:	e1b04000 	movs	r4, r0
        1de36c:	1a000003 	bne	1de380 <TCMOIrDAReceiveBuffers::__ct(void)+0x24>
        1de370:	e3a00014 	mov	r0, #20	; 0x14
        1de374:	eb67c0ef 	bl	1bce738 <$__nw(unsigned int)>
        1de378:	e1b04000 	movs	r4, r0
        1de37c:	0a00000a 	beq	1de3ac <TCMOIrDAReceiveBuffers::__ct(void)+0x50>
        1de380:	e1a00004 	mov	r0, r4
        1de384:	e3a01303 	mov	r1, #201326592	; 0xc000000
        1de388:	eb6761e6 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        1de38c:	e59f0020 	ldr	r0, [pc, #20]	; 1de3b4 <TCMOIrDAReceiveBuffers::__ct(void)+0x58>
        1de390:	e5840000 	str	r0, [r4]
        1de394:	e3a00008 	mov	r0, #8	; 0x8
        1de398:	e5840004 	str	r0, [r4, #4]
        1de39c:	e3a00c02 	mov	r0, #512	; 0x200
        1de3a0:	e584000c 	str	r0, [r4, #12]
        1de3a4:	e3a00001 	mov	r0, #1	; 0x1
        1de3a8:	e5840010 	str	r0, [r4, #16]
        1de3ac:	e1a00004 	mov	r0, r4
        1de3b0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1de3b4:	69727262 	ldmvsdb	r2!, {r1, r5, r6, r9, ip, sp, lr}^
    */
}

