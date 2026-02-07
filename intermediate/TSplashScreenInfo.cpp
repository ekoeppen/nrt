#include "include/TSplashScreenInfo.h"

/**
 * Symbol: New__17TSplashScreenInfoSFPc
 * Address: 00385824
 */
void TSplashScreenInfo::New() {
    /*
        385824:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        385828:	e1a01000 	mov	r1, r0
        38582c:	ebfffff5 	bl	385808 <TVersionString::VersionString(unsigned short *)+0xc>
        385830:	eb6127db 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        385834:	e1100000 	tst	r0, r0
        385838:	e28dd004 	add	sp, sp, #4	; 0x4
        38583c:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        385840:	01a0f00e 	moveq	pc, lr
        385844:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385848:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38584c:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: TSplashScreenInfo::Delete(void)
 * Address: 00385850
 */
TSplashScreenInfo::Delete(void) {
    /*
        385850:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385854:	e92d4001 	stmdb	sp!, {r0, lr}
        385858:	e28fe004 	add	lr, pc, #4	; 0x4
        38585c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385860:	e28cf00c 	add	pc, ip, #12	; 0xc
        385864:	e8bd4001 	ldmia	sp!, {r0, lr}
        385868:	ea61343b 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: TSplashScreenInfo::GetBits(Picture const **)
 * Address: 0038586c
 */
TSplashScreenInfo::GetBits(Picture const **) {
    /*
        38586c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385870:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385874:	e28cf010 	add	pc, ip, #16	; 0x10
    */
}

/**
 * Symbol: TSplashScreenInfo::GetText(unsigned short *)
 * Address: 00385878
 */
TSplashScreenInfo::GetText(unsigned short *) {
    /*
        385878:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38587c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385880:	e28cf014 	add	pc, ip, #20	; 0x14
        385884:	00000000 	andeq	r0, r0, r0
        385888:	00000048 	andeq	r0, r0, r8, asr #32
        38588c:	00000055 	andeq	r0, r0, r5, asr r0
        385890:	0000005f 	andeq	r0, r0, pc, asr r0
        385894:	0000005c 	andeq	r0, r0, ip, asr r0
        385898:	00000078 	andeq	r0, r0, r8, ror r0
        38589c:	ea5d0f12 	b	1ac94ec <$Sizeof__16PNTKInTranslatorSFv>
        3858a8:	ea5d0ae0 	b	1ac8430 <PNTKInTranslator::$New(void)>
        3858ac:	ea5cfa6e 	b	1ac426c <PNTKInTranslator::$Delete(void)>
        3858bc:	ea000001 	b	3858c8 <ClassInfo__16PNTKInTranslatorSFv+0x8>
    */
}

