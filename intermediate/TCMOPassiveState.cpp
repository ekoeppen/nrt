#include "DDKIncludes/Communications/CommToolOptions.h"

/**
 * Symbol: TCMOPassiveState::__ct(void)
 * Address: 0006ceb8
 */
TCMOPassiveState::TCMOPassiveState() {
    /*
         6ceb8:	e1a0c00d 	mov	ip, sp
         6cebc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6cec0:	e24cb004 	sub	fp, ip, #4	; 0x4
         6cec4:	e1b04000 	movs	r4, r0
         6cec8:	1a000003 	bne	6cedc <TCMOPassiveState::__ct(void)+0x24>
         6cecc:	e3a00010 	mov	r0, #16	; 0x10
         6ced0:	eb6d8618 	bl	1bce738 <$__nw(unsigned int)>
         6ced4:	e1b04000 	movs	r4, r0
         6ced8:	0a000008 	beq	6cf00 <TCMOPassiveState::__ct(void)+0x48>
         6cedc:	e1a00004 	mov	r0, r4
         6cee0:	e3a01303 	mov	r1, #201326592	; 0xc000000
         6cee4:	eb6d270f 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
         6cee8:	e59f0018 	ldr	r0, [pc, #18]	; 6cf08 <TCMOPassiveState::__ct(void)+0x50>
         6ceec:	e5840000 	str	r0, [r4]
         6cef0:	e3a00004 	mov	r0, #4	; 0x4
         6cef4:	e5840004 	str	r0, [r4, #4]
         6cef8:	e3a00000 	mov	r0, #0	; 0x0
         6cefc:	e5c4000c 	strb	r0, [r4, #12]
         6cf00:	e1a00004 	mov	r0, r4
         6cf04:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         6cf08:	63707374 	cmnvs	r0, #-805306367	; 0xd0000001
    */
}

