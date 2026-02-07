#include "DDKIncludes/Communications/SerialOptions.h"

/**
 * Symbol: TCMOSerialBreak::__ct(void)
 * Address: 001de670
 */
TCMOSerialBreak::TCMOSerialBreak() {
    /*
        1de670:	e1a0c00d 	mov	ip, sp
        1de674:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1de678:	e24cb004 	sub	fp, ip, #4	; 0x4
        1de67c:	e1b04000 	movs	r4, r0
        1de680:	1a000003 	bne	1de694 <TCMOSerialBreak::__ct(void)+0x24>
        1de684:	e3a00010 	mov	r0, #16	; 0x10
        1de688:	eb67c02a 	bl	1bce738 <$__nw(unsigned int)>
        1de68c:	e1b04000 	movs	r4, r0
        1de690:	0a000008 	beq	1de6b8 <TCMOSerialBreak::__ct(void)+0x48>
        1de694:	e1a00004 	mov	r0, r4
        1de698:	e3a01303 	mov	r1, #201326592	; 0xc000000
        1de69c:	eb676121 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        1de6a0:	e59f0018 	ldr	r0, [pc, #18]	; 1de6c0 <TCMOSerialBreak::__ct(void)+0x50>
        1de6a4:	e5840000 	str	r0, [r4]
        1de6a8:	e3a00004 	mov	r0, #4	; 0x4
        1de6ac:	e5840004 	str	r0, [r4, #4]
        1de6b0:	e59f000c 	ldr	r0, [pc, #c]	; 1de6c4 <TCMOSerialBreak::__ct(void)+0x54>
        1de6b4:	e584000c 	str	r0, [r4, #12]
        1de6b8:	e1a00004 	mov	r0, r4
        1de6bc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1de6c0:	7362726b 	cmnvc	r2, #-1342177274	; 0xb0000006
        1de6c4:	000437e2 	andeq	r3, r4, r2, ror #15
    */
}

