#include "include/PInTranslator.h"

/**
 * Symbol: New__13PInTranslatorSFPc
 * Address: 00389da4
 */
void PInTranslator::New() {
    /*
        389da4:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        389da8:	e1a01000 	mov	r1, r0
        389dac:	ebfffff6 	bl	389d8c <ClassInfo__17THistoryCollectorSFv+0x60>
        389db0:	eb61167b 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        389db4:	e1100000 	tst	r0, r0
        389db8:	e28dd004 	add	sp, sp, #4	; 0x4
        389dbc:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        389dc0:	01a0f00e 	moveq	pc, lr
        389dc4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389dc8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389dcc:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: PInTranslator::Delete(void)
 * Address: 00389dd0
 */
PInTranslator::Delete(void) {
    /*
        389dd0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389dd4:	e92d4001 	stmdb	sp!, {r0, lr}
        389dd8:	e28fe004 	add	lr, pc, #4	; 0x4
        389ddc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389de0:	e28cf00c 	add	pc, ip, #12	; 0xc
        389de4:	e8bd4001 	ldmia	sp!, {r0, lr}
        389de8:	ea6122db 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: PInTranslator::Init(void *)
 * Address: 00389dec
 */
PInTranslator::Init(void *) {
    /*
        389dec:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389df0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389df4:	e28cf010 	add	pc, ip, #16	; 0x10
    */
}

/**
 * Symbol: PInTranslator::Idle(void)
 * Address: 00389df8
 */
PInTranslator::Idle(void) {
    /*
        389df8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389dfc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389e00:	e28cf014 	add	pc, ip, #20	; 0x14
    */
}

/**
 * Symbol: PInTranslator::FrameAvailable(void)
 * Address: 00389e04
 */
PInTranslator::FrameAvailable(void) {
    /*
        389e04:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389e08:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389e0c:	e28cf018 	add	pc, ip, #24	; 0x18
    */
}

/**
 * Symbol: PInTranslator::ProduceFrame(int)
 * Address: 00389e10
 */
PInTranslator::ProduceFrame(int) {
    /*
        389e10:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389e14:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389e18:	e28cf01c 	add	pc, ip, #28	; 0x1c
        389e1c:	e1a0000f 	mov	r0, pc
        389e20:	e1a0f00e 	mov	pc, lr
        389e24:	504f7574 	subpl	r7, pc, r4, ror r5
        389e28:	5472616e 	ldrplbt	r6, [r2], -#366
        389e2c:	736c6174 	cmnvc	ip, #29	; 0x1d
        389e30:	6f720000 	swivs	0x00720000
    */
}

