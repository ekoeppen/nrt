#include "DDKIncludes/Communications/CommToolOptions.h"

/**
 * Symbol: TCMOIdleTimer::__ct(void)
 * Address: 0006cd04
 */
TCMOIdleTimer::TCMOIdleTimer() {
    /*
         6cd04:	e1a0c00d 	mov	ip, sp
         6cd08:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6cd0c:	e24cb004 	sub	fp, ip, #4	; 0x4
         6cd10:	e1b04000 	movs	r4, r0
         6cd14:	1a000003 	bne	6cd28 <TCMOIdleTimer::__ct(void)+0x24>
         6cd18:	e3a00010 	mov	r0, #16	; 0x10
         6cd1c:	eb6d8685 	bl	1bce738 <$__nw(unsigned int)>
         6cd20:	e1b04000 	movs	r4, r0
         6cd24:	0a000008 	beq	6cd4c <TCMOIdleTimer::__ct(void)+0x48>
         6cd28:	e1a00004 	mov	r0, r4
         6cd2c:	e3a01303 	mov	r1, #201326592	; 0xc000000
         6cd30:	eb6d277c 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
         6cd34:	e59f0018 	ldr	r0, [pc, #18]	; 6cd54 <TCMOIdleTimer::__ct(void)+0x50>
         6cd38:	e5840000 	str	r0, [r4]
         6cd3c:	e3a00004 	mov	r0, #4	; 0x4
         6cd40:	e5840004 	str	r0, [r4, #4]
         6cd44:	e3a00078 	mov	r0, #120	; 0x78
         6cd48:	e584000c 	str	r0, [r4, #12]
         6cd4c:	e1a00004 	mov	r0, r4
         6cd50:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         6cd54:	63697472 	cmnvs	r9, #1912602624	; 0x72000000
    */
}

