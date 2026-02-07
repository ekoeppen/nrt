#include "include/TRegisterPending.h"

/**
 * Symbol: TRegisterPending::__ct(void)
 * Address: 0012ed18
 */
TRegisterPending::TRegisterPending(void) {
    /*
        12ed18:	e1a0c00d 	mov	ip, sp
        12ed1c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        12ed20:	e24cb004 	sub	fp, ip, #4	; 0x4
        12ed24:	e1b04000 	movs	r4, r0
        12ed28:	1a000003 	bne	12ed3c <TRegisterPending::__ct(void)+0x24>
        12ed2c:	e3a0002c 	mov	r0, #44	; 0x2c
        12ed30:	eb6a7e80 	bl	1bce738 <$__nw(unsigned int)>
        12ed34:	e1b04000 	movs	r4, r0
        12ed38:	0a000003 	beq	12ed4c <TRegisterPending::__ct(void)+0x34>
        12ed3c:	e284000c 	add	r0, r4, #12	; 0xc
        12ed40:	eb650ad8 	bl	1a718a8 <TCompletion::$__ct(void)>
        12ed44:	e3a00000 	mov	r0, #0	; 0x0
        12ed48:	e5840028 	str	r0, [r4, #40]
        12ed4c:	e1a00004 	mov	r0, r4
        12ed50:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TRegisterPending::Init(TNBPNameEntry *, TCompletion const &)
 * Address: 0012ed54
 */
TRegisterPending::Init(TNBPNameEntry *, TCompletion const &) {
    /*
        12ed54:	e92d4000 	stmdb	sp!, {lr}
        12ed58:	e1a0e002 	mov	lr, r2
        12ed5c:	e5a01008 	str	r1, [r0, #8]!	; fField8
        12ed60:	e2800004 	add	r0, r0, #4	; 0x4
        12ed64:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        12ed68:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        12ed6c:	e89e100c 	ldmia	lr, {r2, r3, ip}
        12ed70:	e880100c 	stmia	r0, {r2, r3, ip}
        12ed74:	e8bd8000 	ldmia	sp!, {pc}
    */
}

