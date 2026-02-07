#include "DDKIncludes/Communications/SerialOptions.h"

/**
 * Symbol: TCMOSerialEventEnables::__ct(void)
 * Address: 001ddc48
 */
TCMOSerialEventEnables::TCMOSerialEventEnables() {
    /*
        1ddc48:	e1a0c00d 	mov	ip, sp
        1ddc4c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1ddc50:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ddc54:	e1b04000 	movs	r4, r0
        1ddc58:	1a000003 	bne	1ddc6c <TCMOSerialEventEnables::__ct(void)+0x24>
        1ddc5c:	e3a00014 	mov	r0, #20	; 0x14
        1ddc60:	eb67c2b4 	bl	1bce738 <$__nw(unsigned int)>
        1ddc64:	e1b04000 	movs	r4, r0
        1ddc68:	0a000009 	beq	1ddc94 <TCMOSerialEventEnables::__ct(void)+0x4c>
        1ddc6c:	e1a00004 	mov	r0, r4
        1ddc70:	e3a01303 	mov	r1, #201326592	; 0xc000000
        1ddc74:	eb6763ab 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        1ddc78:	e59f001c 	ldr	r0, [pc, #1c]	; 1ddc9c <TCMOSerialEventEnables::__ct(void)+0x54>
        1ddc7c:	e5840000 	str	r0, [r4]
        1ddc80:	e3a00008 	mov	r0, #8	; 0x8
        1ddc84:	e5840004 	str	r0, [r4, #4]
        1ddc88:	e3a00000 	mov	r0, #0	; 0x0
        1ddc8c:	e584000c 	str	r0, [r4, #12]
        1ddc90:	e5840010 	str	r0, [r4, #16]
        1ddc94:	e1a00004 	mov	r0, r4
        1ddc98:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1ddc9c:	73657674 	cmnvc	r5, #121634816	; 0x7400000
    */
}

