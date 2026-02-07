#include "DDKIncludes/Communications/SerialOptions.h"

/**
 * Symbol: TCMOSerialBytesAvailable::__ct(void)
 * Address: 001de71c
 */
TCMOSerialBytesAvailable::TCMOSerialBytesAvailable() {
    /*
        1de71c:	e1a0c00d 	mov	ip, sp
        1de720:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1de724:	e24cb004 	sub	fp, ip, #4	; 0x4
        1de728:	e1b04000 	movs	r4, r0
        1de72c:	1a000003 	bne	1de740 <TCMOSerialBytesAvailable::__ct(void)+0x24>
        1de730:	e3a00010 	mov	r0, #16	; 0x10
        1de734:	eb67bfff 	bl	1bce738 <$__nw(unsigned int)>
        1de738:	e1b04000 	movs	r4, r0
        1de73c:	0a000008 	beq	1de764 <TCMOSerialBytesAvailable::__ct(void)+0x48>
        1de740:	e1a00004 	mov	r0, r4
        1de744:	e3a01303 	mov	r1, #201326592	; 0xc000000
        1de748:	eb6760f6 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        1de74c:	e59f0018 	ldr	r0, [pc, #18]	; 1de76c <TCMOSerialBytesAvailable::__ct(void)+0x50>
        1de750:	e5840000 	str	r0, [r4]
        1de754:	e3a00004 	mov	r0, #4	; 0x4
        1de758:	e5840004 	str	r0, [r4, #4]
        1de75c:	e3a00000 	mov	r0, #0	; 0x0
        1de760:	e584000c 	str	r0, [r4, #12]
        1de764:	e1a00004 	mov	r0, r4
        1de768:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1de76c:	73626176 	cmnvc	r2, #-2147483619	; 0x8000001d
    */
}

