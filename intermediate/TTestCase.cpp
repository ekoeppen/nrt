#include "include/TTestCase.h"

/**
 * Symbol: New__9TTestCaseSFPc
 * Address: 00389354
 */
void TTestCase::New() {
    /*
        389354:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        389358:	e1a01000 	mov	r1, r0
        38935c:	ebfffff7 	bl	389340 <ClassInfo__18PCirrusSoundDriverSFv+0xcc>
        389360:	eb61190f 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        389364:	e1100000 	tst	r0, r0
        389368:	e28dd004 	add	sp, sp, #4	; 0x4
        38936c:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        389370:	01a0f00e 	moveq	pc, lr
        389374:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389378:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38937c:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: TTestCase::Init(short, char **, TTestReporter *)
 * Address: 00389380
 */
TTestCase::Init(short, char **, TTestReporter *) {
    /*
        389380:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389384:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389388:	e28cf00c 	add	pc, ip, #12	; 0xc
    */
}

/**
 * Symbol: TTestCase::Setup(void)
 * Address: 0038938c
 */
TTestCase::Setup(void) {
    /*
        38938c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389390:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389394:	e28cf010 	add	pc, ip, #16	; 0x10
    */
}

/**
 * Symbol: TTestCase::Execute(void)
 * Address: 00389398
 */
TTestCase::Execute(void) {
    /*
        389398:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38939c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3893a0:	e28cf014 	add	pc, ip, #20	; 0x14
    */
}

/**
 * Symbol: TTestCase::Cleanup(void)
 * Address: 003893a4
 */
TTestCase::Cleanup(void) {
    /*
        3893a4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3893a8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3893ac:	e28cf018 	add	pc, ip, #24	; 0x18
    */
}

/**
 * Symbol: TTestCase::Delete(void)
 * Address: 003893b0
 */
TTestCase::Delete(void) {
    /*
        3893b0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3893b4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3893b8:	e28cf01c 	add	pc, ip, #28	; 0x1c
    */
}

