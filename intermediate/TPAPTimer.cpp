#include "include/TPAPTimer.h"

/**
 * Symbol: TPAPTimer::__ct(void)
 * Address: 00151ed8
 */
TPAPTimer::TPAPTimer(void) {
    /*
        151ed8:	e1a0c00d 	mov	ip, sp
        151edc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        151ee0:	e24cb004 	sub	fp, ip, #4	; 0x4
        151ee4:	e1b04000 	movs	r4, r0
        151ee8:	1a000003 	bne	151efc <TPAPTimer::__ct(void)+0x24>
        151eec:	e3a0001c 	mov	r0, #28	; 0x1c
        151ef0:	eb69f210 	bl	1bce738 <$__nw(unsigned int)>
        151ef4:	e1b04000 	movs	r4, r0
        151ef8:	0a000008 	beq	151f20 <TPAPTimer::__ct(void)+0x48>
        151efc:	eb6a06b4 	bl	1bd39d4 <$GetGlobals>
        151f00:	e5b01064 	ldr	r1, [r0, #100]!	; fField100
        151f04:	e1a00004 	mov	r0, r4
        151f08:	e3a02000 	mov	r2, #0	; 0x0
        151f0c:	eb697a44 	bl	1bb0824 <TTimerElement::$__ct(TTimerQueue *, unsigned long)>
        151f10:	e59f0010 	ldr	r0, [pc, #10]	; 151f28 <TPAPTimer::__ct(void)+0x50>
        151f14:	e5840000 	str	r0, [r4]
        151f18:	e3a00000 	mov	r0, #0	; 0x0
        151f1c:	e5840018 	str	r0, [r4, #24]	; fField24
        151f20:	e1a00004 	mov	r0, r4
        151f24:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        151f28:	00020ed8 	ldreqd	r0, [r2], -r8
    */
}

/**
 * Symbol: TPAPTimer::Init(TPAPInterface *, unsigned long)
 * Address: 00151f2c
 */
TPAPTimer::Init(TPAPInterface *, unsigned long) {
    /*
        151f2c:	e5a02010 	str	r2, [r0, #16]!	; fField16
        151f30:	e5801008 	str	r1, [r0, #8]	; fField8
        151f34:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPAPTimer::Timeout(void)
 * Address: 00151f38
 */
TPAPTimer::Timeout(void) {
    /*
        151f38:	e5901010 	ldr	r1, [r0, #16]	; fField16
        151f3c:	e5900018 	ldr	r0, [r0, #24]	; fField24
        151f40:	ea64c49a 	b	1a831b0 <TPAPInterface::$HandleTimer(unsigned long)>
    */
}

