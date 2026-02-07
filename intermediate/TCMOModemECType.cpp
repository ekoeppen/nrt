#include "include/TCMOModemECType.h"

/**
 * Symbol: TCMOModemECType::__ct(void)
 * Address: 0011f384
 */
TCMOModemECType::TCMOModemECType(void) {
    /*
        11f384:	e1a0c00d 	mov	ip, sp
        11f388:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11f38c:	e24cb004 	sub	fp, ip, #4	; 0x4
        11f390:	e1b04000 	movs	r4, r0
        11f394:	1a000003 	bne	11f3a8 <TCMOModemECType::__ct(void)+0x24>
        11f398:	e3a00010 	mov	r0, #16	; 0x10
        11f39c:	eb6abce5 	bl	1bce738 <$__nw(unsigned int)>
        11f3a0:	e1b04000 	movs	r4, r0
        11f3a4:	0a000008 	beq	11f3cc <TCMOModemECType::__ct(void)+0x48>
        11f3a8:	e1a00004 	mov	r0, r4
        11f3ac:	e3a01303 	mov	r1, #201326592	; 0xc000000
        11f3b0:	eb6a5ddc 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        11f3b4:	e59f0018 	ldr	r0, [pc, #18]	; 11f3d4 <TCMOModemECType::__ct(void)+0x50>
        11f3b8:	e5840000 	str	r0, [r4]
        11f3bc:	e3a00004 	mov	r0, #4	; 0x4
        11f3c0:	e5840004 	str	r0, [r4, #4]
        11f3c4:	e3a00007 	mov	r0, #7	; 0x7
        11f3c8:	e584000c 	str	r0, [r4, #12]
        11f3cc:	e1a00004 	mov	r0, r4
        11f3d0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        11f3d4:	6d656370 	stcvsl	3, cr6, [r5, -#448]!
    */
}

