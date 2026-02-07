#include "include/TPSPrinterDriver.h"

/**
 * Symbol: TPSPrinterDriver::Delete(void)
 * Address: 003881bc
 */
TPSPrinterDriver::Delete(void) {
    /*
        3881bc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3881c0:	e92d4001 	stmdb	sp!, {r0, lr}
        3881c4:	e28fe004 	add	lr, pc, #4	; 0x4
        3881c8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3881cc:	e28cf008 	add	pc, ip, #8	; 0x8
        3881d0:	e8bd4001 	ldmia	sp!, {r0, lr}
        3881d4:	ea6129e0 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: TPSPrinterDriver::Open(void)
 * Address: 003881d8
 */
TPSPrinterDriver::Open(void) {
    /*
        3881d8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3881dc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3881e0:	e28cf00c 	add	pc, ip, #12	; 0xc
    */
}

/**
 * Symbol: TPSPrinterDriver::Close(unsigned char)
 * Address: 003881e4
 */
TPSPrinterDriver::Close(unsigned char) {
    /*
        3881e4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3881e8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3881ec:	e28cf010 	add	pc, ip, #16	; 0x10
    */
}

/**
 * Symbol: TPSPrinterDriver::OpenPage(void)
 * Address: 003881f0
 */
TPSPrinterDriver::OpenPage(void) {
    /*
        3881f0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3881f4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3881f8:	e28cf014 	add	pc, ip, #20	; 0x14
    */
}

/**
 * Symbol: TPSPrinterDriver::ClosePage(void)
 * Address: 003881fc
 */
TPSPrinterDriver::ClosePage(void) {
    /*
        3881fc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        388200:	e590c008 	ldr	ip, [r0, #8]	; fField8
        388204:	e28cf018 	add	pc, ip, #24	; 0x18
    */
}

/**
 * Symbol: TPSPrinterDriver::CancelJob(unsigned char)
 * Address: 00388208
 */
TPSPrinterDriver::CancelJob(unsigned char) {
    /*
        388208:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38820c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        388210:	e28cf01c 	add	pc, ip, #28	; 0x1c
    */
}

/**
 * Symbol: TPSPrinterDriver::IsProblemResolved(void)
 * Address: 00388214
 */
TPSPrinterDriver::IsProblemResolved(void) {
    /*
        388214:	e5900004 	ldr	r0, [r0, #4]	; fField4
        388218:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38821c:	e28cf020 	add	pc, ip, #32	; 0x20
    */
}

/**
 * Symbol: TPSPrinterDriver::GetStatus(void)
 * Address: 00388220
 */
TPSPrinterDriver::GetStatus(void) {
    /*
        388220:	e5900004 	ldr	r0, [r0, #4]	; fField4
        388224:	e590c008 	ldr	ip, [r0, #8]	; fField8
        388228:	e28cf024 	add	pc, ip, #36	; 0x24
    */
}

/**
 * Symbol: TPSPrinterDriver::SendPSText(char *, unsigned long &, unsigned char)
 * Address: 0038822c
 */
TPSPrinterDriver::SendPSText(char *, unsigned long &, unsigned char) {
    /*
        38822c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        388230:	e590c008 	ldr	ip, [r0, #8]	; fField8
        388234:	e28cf028 	add	pc, ip, #40	; 0x28
    */
}

/**
 * Symbol: TPSPrinterDriver::RepeatPSPage(void)
 * Address: 00388238
 */
TPSPrinterDriver::RepeatPSPage(void) {
    /*
        388238:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38823c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        388240:	e28cf02c 	add	pc, ip, #44	; 0x2c
    */
}

/**
 * Symbol: TPSPrinterDriver::SendPSBinary(char *, unsigned long, unsigned long &)
 * Address: 00388244
 */
TPSPrinterDriver::SendPSBinary(char *, unsigned long, unsigned long &) {
    /*
        388244:	e5900004 	ldr	r0, [r0, #4]	; fField4
        388248:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38824c:	e28cf030 	add	pc, ip, #48	; 0x30
    */
}

/**
 * Symbol: TPSPrinterDriver::RecvPSText(char *, unsigned long &)
 * Address: 00388250
 */
TPSPrinterDriver::RecvPSText(char *, unsigned long &) {
    /*
        388250:	e5900004 	ldr	r0, [r0, #4]	; fField4
        388254:	e590c008 	ldr	ip, [r0, #8]	; fField8
        388258:	e28cf034 	add	pc, ip, #52	; 0x34
        38825c:	00000000 	andeq	r0, r0, r0
        388260:	00000048 	andeq	r0, r0, r8, asr #32
        388264:	0000004f 	andeq	r0, r0, pc, asr #32
        388268:	0000005d 	andeq	r0, r0, sp, asr r0
        38826c:	0000005c 	andeq	r0, r0, ip, asr r0
        388270:	0000008c 	andeq	r0, r0, ip, lsl #1
        388274:	ea5ef410 	b	1b452bc <$Sizeof__10TFaxDriverSFv>
        388280:	e1a0f00e 	mov	pc, lr
        388284:	ea5edf4d 	b	1b3ffc0 <TFaxDriver::$Delete(void)>
        388288:	00020000 	andeq	r0, r2, r0
        388294:	ea000001 	b	3882a0 <ClassInfo__10TFaxDriverSFv+0x8>
    */
}

