#include "include/TDotPrinterDriver.h"

/**
 * Symbol: TDotPrinterDriver::Delete(void)
 * Address: 00388074
 */
TDotPrinterDriver::Delete(void) {
    /*
        388074:	e5900004 	ldr	r0, [r0, #4]	; fField4
        388078:	e92d4001 	stmdb	sp!, {r0, lr}
        38807c:	e28fe004 	add	lr, pc, #4	; 0x4
        388080:	e590c008 	ldr	ip, [r0, #8]	; fField8
        388084:	e28cf008 	add	pc, ip, #8	; 0x8
        388088:	e8bd4001 	ldmia	sp!, {r0, lr}
        38808c:	ea612a32 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: TDotPrinterDriver::Open(void)
 * Address: 00388090
 */
TDotPrinterDriver::Open(void) {
    /*
        388090:	e5900004 	ldr	r0, [r0, #4]	; fField4
        388094:	e590c008 	ldr	ip, [r0, #8]	; fField8
        388098:	e28cf00c 	add	pc, ip, #12	; 0xc
    */
}

/**
 * Symbol: TDotPrinterDriver::Close(void)
 * Address: 0038809c
 */
TDotPrinterDriver::Close(void) {
    /*
        38809c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3880a0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3880a4:	e28cf010 	add	pc, ip, #16	; 0x10
    */
}

/**
 * Symbol: TDotPrinterDriver::OpenPage(void)
 * Address: 003880a8
 */
TDotPrinterDriver::OpenPage(void) {
    /*
        3880a8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3880ac:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3880b0:	e28cf014 	add	pc, ip, #20	; 0x14
    */
}

/**
 * Symbol: TDotPrinterDriver::ClosePage(void)
 * Address: 003880b4
 */
TDotPrinterDriver::ClosePage(void) {
    /*
        3880b4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3880b8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3880bc:	e28cf018 	add	pc, ip, #24	; 0x18
    */
}

/**
 * Symbol: TDotPrinterDriver::ImageBand(PixelMap *, Rect const *)
 * Address: 003880c0
 */
TDotPrinterDriver::ImageBand(PixelMap *, Rect const *) {
    /*
        3880c0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3880c4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3880c8:	e28cf01c 	add	pc, ip, #28	; 0x1c
    */
}

/**
 * Symbol: TDotPrinterDriver::CancelJob(unsigned char)
 * Address: 003880cc
 */
TDotPrinterDriver::CancelJob(unsigned char) {
    /*
        3880cc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3880d0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3880d4:	e28cf020 	add	pc, ip, #32	; 0x20
    */
}

/**
 * Symbol: TDotPrinterDriver::IsProblemResolved(void)
 * Address: 003880d8
 */
TDotPrinterDriver::IsProblemResolved(void) {
    /*
        3880d8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3880dc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3880e0:	e28cf024 	add	pc, ip, #36	; 0x24
    */
}

/**
 * Symbol: TDotPrinterDriver::GetPageInfo(PrPageInfo *)
 * Address: 003880e4
 */
TDotPrinterDriver::GetPageInfo(PrPageInfo *) {
    /*
        3880e4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3880e8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3880ec:	e28cf028 	add	pc, ip, #40	; 0x28
    */
}

/**
 * Symbol: TDotPrinterDriver::GetBandPrefs(DotPrinterPrefs *)
 * Address: 003880f0
 */
TDotPrinterDriver::GetBandPrefs(DotPrinterPrefs *) {
    /*
        3880f0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3880f4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3880f8:	e28cf02c 	add	pc, ip, #44	; 0x2c
    */
}

/**
 * Symbol: TDotPrinterDriver::FaxEndPage(long)
 * Address: 003880fc
 */
TDotPrinterDriver::FaxEndPage(long) {
    /*
        3880fc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        388100:	e590c008 	ldr	ip, [r0, #8]	; fField8
        388104:	e28cf030 	add	pc, ip, #48	; 0x30
        388108:	00000000 	andeq	r0, r0, r0
        38810c:	00000048 	andeq	r0, r0, r8, asr #32
        388110:	0000004f 	andeq	r0, r0, pc, asr #32
        388114:	00000054 	andeq	r0, r0, r4, asr r0
        388118:	00000054 	andeq	r0, r0, r4, asr r0
        38811c:	00000084 	andeq	r0, r0, r4, lsl #1
        388120:	ea5ef466 	b	1b452c0 <$Sizeof__10TPSPrinterSFv>
        38812c:	e1a0f00e 	mov	pc, lr
        388130:	ea5edfa3 	b	1b3ffc4 <TPSPrinter::$Delete(void)>
        388134:	00020000 	andeq	r0, r2, r0
        388140:	ea000001 	b	38814c <ClassInfo__10TPSPrinterSFv+0x8>
    */
}

