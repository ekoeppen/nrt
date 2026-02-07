#include "include/TUSoundCallbackProc.h"

/**
 * Symbol: TUSoundCallbackProc::__ct(void)
 * Address: 0025ac38
 */
TUSoundCallbackProc::TUSoundCallbackProc(void) {
    /*
        25ac38:	e1a0c00d 	mov	ip, sp
        25ac3c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        25ac40:	e24cb004 	sub	fp, ip, #4	; 0x4
        25ac44:	e1b04000 	movs	r4, r0
        25ac48:	1a000003 	bne	25ac5c <TUSoundCallbackProc::__ct(void)+0x24>
        25ac4c:	e3a00008 	mov	r0, #8	; 0x8
        25ac50:	eb65ceb8 	bl	1bce738 <$__nw(unsigned int)>
        25ac54:	e1b04000 	movs	r4, r0
        25ac58:	0a000005 	beq	25ac74 <TUSoundCallbackProc::__ct(void)+0x3c>
        25ac5c:	e1a00004 	mov	r0, r4
        25ac60:	eb64844d 	bl	1b7bd9c <TUSoundCallback::$__ct(void)>
        25ac64:	e59f0010 	ldr	r0, [pc, #10]	; 25ac7c <TUSoundCallbackProc::__ct(void)+0x44>
        25ac68:	e5840000 	str	r0, [r4]
        25ac6c:	e3a00000 	mov	r0, #0	; 0x0
        25ac70:	e5840004 	str	r0, [r4, #4]	; fField4
        25ac74:	e1a00004 	mov	r0, r4
        25ac78:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        25ac7c:	0001ef4c 	andeq	lr, r1, ip, asr #30
    */
}

/**
 * Symbol: TUSoundCallbackProc::__dt(void)
 * Address: 0025acfc
 */
TUSoundCallbackProc::~TUSoundCallbackProc(void) {
    /*
        25acfc:	e1a0c00d 	mov	ip, sp
        25ad00:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        25ad04:	e24cb004 	sub	fp, ip, #4	; 0x4
        25ad08:	e1a04000 	mov	r4, r0
        25ad0c:	e1a05001 	mov	r5, r1
        25ad10:	e59f0020 	ldr	r0, [pc, #20]	; 25ad38 <TUSoundCallbackProc::__dt(void)+0x3c>
        25ad14:	e5840000 	str	r0, [r4]
        25ad18:	e1a00004 	mov	r0, r4
        25ad1c:	e3a01000 	mov	r1, #0	; 0x0
        25ad20:	eb648423 	bl	1b7bdb4 <TUSoundCallback::$__dt(void)>
        25ad24:	e3150001 	tst	r5, #1	; 0x1
        25ad28:	11a00004 	movne	r0, r4
        25ad2c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        25ad30:	1a65ca6a 	bne	1bcd6e0 <$__dl(void *)>
        25ad34:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        25ad38:	0001ef4c 	andeq	lr, r1, ip, asr #30
    */
}

/**
 * Symbol: TUSoundCallbackProc::SetCallback(void (*)(SoundBlock *, int, long))
 * Address: 0025ad3c
 */
TUSoundCallbackProc::SetCallback(void (*)(SoundBlock *, int, long)) {
    /*
        25ad3c:	e5a01004 	str	r1, [r0, #4]!	; fField4
        25ad40:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TUSoundCallbackProc::Complete(SoundBlock *, int, long)
 * Address: 0025ad44
 */
TUSoundCallbackProc::Complete(SoundBlock *, int, long) {
    /*
        25ad44:	e92d4000 	stmdb	sp!, {lr}
        25ad48:	e1a0e002 	mov	lr, r2
        25ad4c:	e1a02003 	mov	r2, r3
        25ad50:	e5b0c004 	ldr	ip, [r0, #4]!	; fField4
        25ad54:	e33c0000 	teq	ip, #0	; 0x0
        25ad58:	11a00001 	movne	r0, r1
        25ad5c:	11a0100e 	movne	r1, lr
        25ad60:	18bd4000 	ldmneia	sp!, {lr}
        25ad64:	128cf000 	addne	pc, ip, #0	; 0x0
        25ad68:	e8bd8000 	ldmia	sp!, {pc}
    */
}

