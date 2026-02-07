#include "include/PFrameSink.h"

/**
 * Symbol: New__10PFrameSinkSFPc
 * Address: 00389f80
 */
void PFrameSink::New() {
    /*
        389f80:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        389f84:	e1a01000 	mov	r1, r0
        389f88:	ebfffff7 	bl	389f6c <PFrameSource::Translate(void *, PipeCallBack *)+0xc>
        389f8c:	eb611604 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        389f90:	e1100000 	tst	r0, r0
        389f94:	e28dd004 	add	sp, sp, #4	; 0x4
        389f98:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        389f9c:	01a0f00e 	moveq	pc, lr
        389fa0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389fa4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389fa8:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: PFrameSink::Delete(void)
 * Address: 00389fac
 */
PFrameSink::Delete(void) {
    /*
        389fac:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389fb0:	e92d4001 	stmdb	sp!, {r0, lr}
        389fb4:	e28fe004 	add	lr, pc, #4	; 0x4
        389fb8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389fbc:	e28cf00c 	add	pc, ip, #12	; 0xc
        389fc0:	e8bd4001 	ldmia	sp!, {r0, lr}
        389fc4:	ea612264 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: PFrameSink::Translate(void *, PipeCallBack *)
 * Address: 00389fc8
 */
PFrameSink::Translate(void *, PipeCallBack *) {
    /*
        389fc8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389fcc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389fd0:	e28cf010 	add	pc, ip, #16	; 0x10
        389fd4:	00000000 	andeq	r0, r0, r0
        389fd8:	00000048 	andeq	r0, r0, r8, asr #32
        389fdc:	00000050 	andeq	r0, r0, r0, asr r0
        389fe0:	00000057 	andeq	r0, r0, r7, asr r0
        389fe4:	00000054 	andeq	r0, r0, r4, asr r0
        389fe8:	00000064 	andeq	r0, r0, r4, rrx
        389fec:	ea6095ea 	b	1baf79c <$Sizeof__11PFlattenPtrSFv>
        389ff8:	ea6074ea 	b	1ba73a8 <PFlattenPtr::$New(void)>
        389ffc:	ea6070ce 	b	1ba633c <PFlattenPtr::$Delete(void)>
        38a00c:	ea000001 	b	38a018 <ClassInfo__11PFlattenPtrSFv+0x8>
    */
}

