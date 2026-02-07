#include "DDKIncludes/Communications/SerialOptions.h"

/**
 * Symbol: TCMOBreakFraming::__ct(void)
 * Address: 001ddb40
 */
TCMOBreakFraming::TCMOBreakFraming() {
    /*
        1ddb40:	e1a0c00d 	mov	ip, sp
        1ddb44:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1ddb48:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ddb4c:	e1b04000 	movs	r4, r0
        1ddb50:	1a000003 	bne	1ddb64 <TCMOBreakFraming::__ct(void)+0x24>
        1ddb54:	e3a0001c 	mov	r0, #28	; 0x1c
        1ddb58:	eb67c2f6 	bl	1bce738 <$__nw(unsigned int)>
        1ddb5c:	e1b04000 	movs	r4, r0
        1ddb60:	0a00000b 	beq	1ddb94 <TCMOBreakFraming::__ct(void)+0x54>
        1ddb64:	e1a00004 	mov	r0, r4
        1ddb68:	e3a01303 	mov	r1, #201326592	; 0xc000000
        1ddb6c:	eb6763ed 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        1ddb70:	e59f0024 	ldr	r0, [pc, #24]	; 1ddb9c <TCMOBreakFraming::__ct(void)+0x5c>
        1ddb74:	e5840000 	str	r0, [r4]
        1ddb78:	e3a00010 	mov	r0, #16	; 0x10
        1ddb7c:	e5840004 	str	r0, [r4, #4]
        1ddb80:	e3a00000 	mov	r0, #0	; 0x0
        1ddb84:	e584000c 	str	r0, [r4, #12]
        1ddb88:	e5840010 	str	r0, [r4, #16]
        1ddb8c:	e5c40014 	strb	r0, [r4, #20]
        1ddb90:	e5840018 	str	r0, [r4, #24]
        1ddb94:	e1a00004 	mov	r0, r4
        1ddb98:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1ddb9c:	73626b66 	cmnvc	r2, #104448	; 0x19800
    */
}

