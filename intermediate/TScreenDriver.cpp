#include "include/TScreenDriver.h"

/**
 * Symbol: TScreenDriver::Delete(void)
 * Address: 003885a0
 */
TScreenDriver::Delete(void) {
    /*
        3885a0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3885a4:	e92d4001 	stmdb	sp!, {r0, lr}
        3885a8:	e28fe004 	add	lr, pc, #4	; 0x4
        3885ac:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3885b0:	e28cf008 	add	pc, ip, #8	; 0x8
        3885b4:	e8bd4001 	ldmia	sp!, {r0, lr}
        3885b8:	ea6128e7 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: TScreenDriver::ScreenSetup(void)
 * Address: 003885bc
 */
TScreenDriver::ScreenSetup(void) {
    /*
        3885bc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3885c0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3885c4:	e28cf00c 	add	pc, ip, #12	; 0xc
    */
}

/**
 * Symbol: TScreenDriver::GetScreenInfo(ScreenInfo *)
 * Address: 003885c8
 */
TScreenDriver::GetScreenInfo(ScreenInfo *) {
    /*
        3885c8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3885cc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3885d0:	e28cf010 	add	pc, ip, #16	; 0x10
    */
}

/**
 * Symbol: TScreenDriver::PowerInit(void)
 * Address: 003885d4
 */
TScreenDriver::PowerInit(void) {
    /*
        3885d4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3885d8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3885dc:	e28cf014 	add	pc, ip, #20	; 0x14
    */
}

/**
 * Symbol: TScreenDriver::PowerOn(void)
 * Address: 003885e0
 */
TScreenDriver::PowerOn(void) {
    /*
        3885e0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3885e4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3885e8:	e28cf018 	add	pc, ip, #24	; 0x18
    */
}

/**
 * Symbol: TScreenDriver::PowerOff(void)
 * Address: 003885ec
 */
TScreenDriver::PowerOff(void) {
    /*
        3885ec:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3885f0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3885f4:	e28cf01c 	add	pc, ip, #28	; 0x1c
    */
}

/**
 * Symbol: TScreenDriver::Blit(PixelMap *, Rect *, Rect *, long)
 * Address: 003885f8
 */
TScreenDriver::Blit(PixelMap *, Rect *, Rect *, long) {
    /*
        3885f8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3885fc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        388600:	e28cf020 	add	pc, ip, #32	; 0x20
    */
}

/**
 * Symbol: TScreenDriver::GetFeature(long)
 * Address: 00388604
 */
TScreenDriver::GetFeature(long) {
    /*
        388604:	e5900004 	ldr	r0, [r0, #4]	; fField4
        388608:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38860c:	e28cf024 	add	pc, ip, #36	; 0x24
    */
}

/**
 * Symbol: TScreenDriver::SetFeature(long, long)
 * Address: 00388610
 */
TScreenDriver::SetFeature(long, long) {
    /*
        388610:	e5900004 	ldr	r0, [r0, #4]	; fField4
        388614:	e590c008 	ldr	ip, [r0, #8]	; fField8
        388618:	e28cf028 	add	pc, ip, #40	; 0x28
    */
}

/**
 * Symbol: TScreenDriver::AutoAdjustFeatures(void)
 * Address: 0038861c
 */
TScreenDriver::AutoAdjustFeatures(void) {
    /*
        38861c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        388620:	e590c008 	ldr	ip, [r0, #8]	; fField8
        388624:	e28cf02c 	add	pc, ip, #44	; 0x2c
    */
}

/**
 * Symbol: TScreenDriver::DoubleBlit(PixelMap *, PixelMap *, Rect *, Rect *, long)
 * Address: 00388628
 */
TScreenDriver::DoubleBlit(PixelMap *, PixelMap *, Rect *, Rect *, long) {
    /*
        388628:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38862c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        388630:	e28cf030 	add	pc, ip, #48	; 0x30
    */
}

/**
 * Symbol: TScreenDriver::EnterIdleMode(void)
 * Address: 00388634
 */
TScreenDriver::EnterIdleMode(void) {
    /*
        388634:	e5900004 	ldr	r0, [r0, #4]	; fField4
        388638:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38863c:	e28cf034 	add	pc, ip, #52	; 0x34
    */
}

/**
 * Symbol: TScreenDriver::ExitIdleMode(void)
 * Address: 00388640
 */
TScreenDriver::ExitIdleMode(void) {
    /*
        388640:	e5900004 	ldr	r0, [r0, #4]	; fField4
        388644:	e590c008 	ldr	ip, [r0, #8]	; fField8
        388648:	e28cf038 	add	pc, ip, #56	; 0x38
        38864c:	00000000 	andeq	r0, r0, r0
        388650:	00000048 	andeq	r0, r0, r8, asr #32
        388654:	00000057 	andeq	r0, r0, r7, asr r0
        388658:	00000063 	andeq	r0, r0, r3, rrx
        38865c:	00000080 	andeq	r0, r0, r0, lsl #1
        388660:	000000a4 	andeq	r0, r0, r4, lsr #1
        388664:	ea5f30f0 	b	1b54a2c <$Sizeof__18TPixelMapCompanderSFv>
        388670:	ea5f2496 	b	1b518d0 <TPixelMapCompander::$New(void)>
        388674:	ea5f1412 	b	1b4d6c4 <TPixelMapCompander::$Delete(void)>
        388678:	00010000 	andeq	r0, r1, r0
        388684:	ea000001 	b	388690 <ClassInfo__18TPixelMapCompanderSFv+0x8>
    */
}

