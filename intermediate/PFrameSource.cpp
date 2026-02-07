#include "include/PFrameSource.h"

/**
 * Symbol: New__12PFrameSourceSFPc
 * Address: 00389f18
 */
void PFrameSource::New() {
    /*
        389f18:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        389f1c:	e1a01000 	mov	r1, r0
        389f20:	ebfffff6 	bl	389f00 <POutTranslator::ExceptionNotify(Exception *)+0xc>
        389f24:	eb61161e 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        389f28:	e1100000 	tst	r0, r0
        389f2c:	e28dd004 	add	sp, sp, #4	; 0x4
        389f30:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        389f34:	01a0f00e 	moveq	pc, lr
        389f38:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389f3c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389f40:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: PFrameSource::Delete(void)
 * Address: 00389f44
 */
PFrameSource::Delete(void) {
    /*
        389f44:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389f48:	e92d4001 	stmdb	sp!, {r0, lr}
        389f4c:	e28fe004 	add	lr, pc, #4	; 0x4
        389f50:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389f54:	e28cf00c 	add	pc, ip, #12	; 0xc
        389f58:	e8bd4001 	ldmia	sp!, {r0, lr}
        389f5c:	ea61227e 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: PFrameSource::Translate(void *, PipeCallBack *)
 * Address: 00389f60
 */
PFrameSource::Translate(void *, PipeCallBack *) {
    /*
        389f60:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389f64:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389f68:	e28cf010 	add	pc, ip, #16	; 0x10
        389f6c:	e1a0000f 	mov	r0, pc
        389f70:	e1a0f00e 	mov	pc, lr
        389f74:	50467261 	subpl	r7, r6, r1, ror #4
        389f78:	6d655369 	stcvsl	3, cr5, [r5, -#420]!
        389f7c:	6e6b0000 	cdpvs	0, 6, cr0, cr11, cr0, {0}
    */
}

