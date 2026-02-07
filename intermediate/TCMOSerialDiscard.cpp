#include "DDKIncludes/Communications/SerialOptions.h"

/**
 * Symbol: TCMOSerialDiscard::__ct(void)
 * Address: 001dda74
 */
TCMOSerialDiscard::TCMOSerialDiscard() {
    /*
        1dda74:	e1a0c00d 	mov	ip, sp
        1dda78:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1dda7c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dda80:	e1b04000 	movs	r4, r0
        1dda84:	1a000003 	bne	1dda98 <TCMOSerialDiscard::__ct(void)+0x24>
        1dda88:	e3a00010 	mov	r0, #16	; 0x10
        1dda8c:	eb67c329 	bl	1bce738 <$__nw(unsigned int)>
        1dda90:	e1b04000 	movs	r4, r0
        1dda94:	0a00000a 	beq	1ddac4 <TCMOSerialDiscard::__ct(void)+0x50>
        1dda98:	e1a00004 	mov	r0, r4
        1dda9c:	e3a01303 	mov	r1, #201326592	; 0xc000000
        1ddaa0:	eb676420 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        1ddaa4:	e59f0020 	ldr	r0, [pc, #20]	; 1ddacc <TCMOSerialDiscard::__ct(void)+0x58>
        1ddaa8:	e5840000 	str	r0, [r4]
        1ddaac:	e3a00004 	mov	r0, #4	; 0x4
        1ddab0:	e5840004 	str	r0, [r4, #4]
        1ddab4:	e3a00001 	mov	r0, #1	; 0x1
        1ddab8:	e5c4000c 	strb	r0, [r4, #12]
        1ddabc:	e3a00000 	mov	r0, #0	; 0x0
        1ddac0:	e5c4000d 	strb	r0, [r4, #13]
        1ddac4:	e1a00004 	mov	r0, r4
        1ddac8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1ddacc:	73647363 	cmnvc	r4, #-1946157055	; 0x8c000001
    */
}

