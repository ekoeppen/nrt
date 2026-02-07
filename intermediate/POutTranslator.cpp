#include "include/POutTranslator.h"

/**
 * Symbol: New__14POutTranslatorSFPc
 * Address: 00389e34
 */
void POutTranslator::New() {
    /*
        389e34:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        389e38:	e1a01000 	mov	r1, r0
        389e3c:	ebfffff6 	bl	389e1c <PInTranslator::ProduceFrame(int)+0xc>
        389e40:	eb611657 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        389e44:	e1100000 	tst	r0, r0
        389e48:	e28dd004 	add	sp, sp, #4	; 0x4
        389e4c:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        389e50:	01a0f00e 	moveq	pc, lr
        389e54:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389e58:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389e5c:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: POutTranslator::Delete(void)
 * Address: 00389e60
 */
POutTranslator::Delete(void) {
    /*
        389e60:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389e64:	e92d4001 	stmdb	sp!, {r0, lr}
        389e68:	e28fe004 	add	lr, pc, #4	; 0x4
        389e6c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389e70:	e28cf00c 	add	pc, ip, #12	; 0xc
        389e74:	e8bd4001 	ldmia	sp!, {r0, lr}
        389e78:	ea6122b7 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: POutTranslator::Init(void *)
 * Address: 00389e7c
 */
POutTranslator::Init(void *) {
    /*
        389e7c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389e80:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389e84:	e28cf010 	add	pc, ip, #16	; 0x10
    */
}

/**
 * Symbol: POutTranslator::Idle(void)
 * Address: 00389e88
 */
POutTranslator::Idle(void) {
    /*
        389e88:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389e8c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389e90:	e28cf014 	add	pc, ip, #20	; 0x14
    */
}

/**
 * Symbol: POutTranslator::ConsumeFrame(RefVar const &, int, int)
 * Address: 00389e94
 */
POutTranslator::ConsumeFrame(RefVar const &, int, int) {
    /*
        389e94:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389e98:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389e9c:	e28cf018 	add	pc, ip, #24	; 0x18
    */
}

/**
 * Symbol: POutTranslator::Flush(void)
 * Address: 00389ea0
 */
POutTranslator::Flush(void) {
    /*
        389ea0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389ea4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389ea8:	e28cf01c 	add	pc, ip, #28	; 0x1c
    */
}

/**
 * Symbol: POutTranslator::Prompt(int)
 * Address: 00389eac
 */
POutTranslator::Prompt(int) {
    /*
        389eac:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389eb0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389eb4:	e28cf020 	add	pc, ip, #32	; 0x20
    */
}

/**
 * Symbol: POutTranslator::Print(char const *,...)
 * Address: 00389eb8
 */
POutTranslator::Print(char const *,...) {
    /*
        389eb8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389ebc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389ec0:	e28cf024 	add	pc, ip, #36	; 0x24
    */
}

/**
 * Symbol: POutTranslator::Putc(int)
 * Address: 00389ec4
 */
POutTranslator::Putc(int) {
    /*
        389ec4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389ec8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389ecc:	e28cf028 	add	pc, ip, #40	; 0x28
    */
}

/**
 * Symbol: POutTranslator::EnterBreakLoop(int)
 * Address: 00389ed0
 */
POutTranslator::EnterBreakLoop(int) {
    /*
        389ed0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389ed4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389ed8:	e28cf02c 	add	pc, ip, #44	; 0x2c
    */
}

/**
 * Symbol: POutTranslator::ExitBreakLoop(void)
 * Address: 00389edc
 */
POutTranslator::ExitBreakLoop(void) {
    /*
        389edc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389ee0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389ee4:	e28cf030 	add	pc, ip, #48	; 0x30
    */
}

/**
 * Symbol: POutTranslator::StackTrace(void *)
 * Address: 00389ee8
 */
POutTranslator::StackTrace(void *) {
    /*
        389ee8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389eec:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389ef0:	e28cf034 	add	pc, ip, #52	; 0x34
    */
}

/**
 * Symbol: POutTranslator::ExceptionNotify(Exception *)
 * Address: 00389ef4
 */
POutTranslator::ExceptionNotify(Exception *) {
    /*
        389ef4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389ef8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389efc:	e28cf038 	add	pc, ip, #56	; 0x38
        389f00:	e1a0000f 	mov	r0, pc
        389f04:	e1a0f00e 	mov	pc, lr
        389f08:	50467261 	subpl	r7, r6, r1, ror #4
        389f0c:	6d65536f 	stcvsl	3, cr5, [r5, -#444]!
        389f10:	75726365 	ldrvcb	r6, [r2, -#869]!
        389f14:	00000000 	andeq	r0, r0, r0
    */
}

