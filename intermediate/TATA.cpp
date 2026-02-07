#include "include/TATA.h"

/**
 * Symbol: New__4TATASFPc
 * Address: 00386218
 */
void TATA::New() {
    /*
        386218:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        38621c:	e1a01000 	mov	r1, r0
        386220:	ebfffff8 	bl	386208 <TStartupDriver::Init(void)+0xc>
        386224:	eb61255e 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        386228:	e1100000 	tst	r0, r0
        38622c:	e28dd004 	add	sp, sp, #4	; 0x4
        386230:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        386234:	01a0f00e 	moveq	pc, lr
        386238:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38623c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386240:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: TATA::Delete(void)
 * Address: 00386244
 */
TATA::Delete(void) {
    /*
        386244:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386248:	e92d4001 	stmdb	sp!, {r0, lr}
        38624c:	e28fe004 	add	lr, pc, #4	; 0x4
        386250:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386254:	e28cf00c 	add	pc, ip, #12	; 0xc
        386258:	e8bd4001 	ldmia	sp!, {r0, lr}
        38625c:	ea6131be 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: TATA::SetAttributes(unsigned long)
 * Address: 00386260
 */
TATA::SetAttributes(unsigned long) {
    /*
        386260:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386264:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386268:	e28cf010 	add	pc, ip, #16	; 0x10
    */
}

/**
 * Symbol: TATA::GetAttributes(void)
 * Address: 0038626c
 */
TATA::GetAttributes(void) {
    /*
        38626c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386270:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386274:	e28cf014 	add	pc, ip, #20	; 0x14
    */
}

/**
 * Symbol: TATA::Read(unsigned char *, unsigned long, unsigned long, unsigned char, unsigned char)
 * Address: 00386278
 */
TATA::Read(unsigned char *, unsigned long, unsigned long, unsigned char, unsigned char) {
    /*
        386278:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38627c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386280:	e28cf018 	add	pc, ip, #24	; 0x18
    */
}

/**
 * Symbol: TATA::Write(unsigned char *, unsigned long, unsigned long, unsigned char, unsigned char)
 * Address: 00386284
 */
TATA::Write(unsigned char *, unsigned long, unsigned long, unsigned char, unsigned char) {
    /*
        386284:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386288:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38628c:	e28cf01c 	add	pc, ip, #28	; 0x1c
    */
}

/**
 * Symbol: TATA::Format(unsigned char *, unsigned long, unsigned long, unsigned long, unsigned char)
 * Address: 00386290
 */
TATA::Format(unsigned char *, unsigned long, unsigned long, unsigned long, unsigned char) {
    /*
        386290:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386294:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386298:	e28cf020 	add	pc, ip, #32	; 0x20
    */
}

/**
 * Symbol: TATA::Reset(unsigned char)
 * Address: 0038629c
 */
TATA::Reset(unsigned char) {
    /*
        38629c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3862a0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3862a4:	e28cf024 	add	pc, ip, #36	; 0x24
    */
}

/**
 * Symbol: TATA::IdentifyDrive(TATADriveInfo *, unsigned char)
 * Address: 003862a8
 */
TATA::IdentifyDrive(TATADriveInfo *, unsigned char) {
    /*
        3862a8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3862ac:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3862b0:	e28cf028 	add	pc, ip, #40	; 0x28
    */
}

/**
 * Symbol: TATA::CheckPowerMode(unsigned char *, unsigned char)
 * Address: 003862b4
 */
TATA::CheckPowerMode(unsigned char *, unsigned char) {
    /*
        3862b4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3862b8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3862bc:	e28cf02c 	add	pc, ip, #44	; 0x2c
    */
}

/**
 * Symbol: TATA::SetMultipleMode(unsigned char, unsigned char)
 * Address: 003862c0
 */
TATA::SetMultipleMode(unsigned char, unsigned char) {
    /*
        3862c0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3862c4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3862c8:	e28cf030 	add	pc, ip, #48	; 0x30
    */
}

/**
 * Symbol: TATA::SetFeatures(unsigned char, unsigned char, unsigned char)
 * Address: 003862cc
 */
TATA::SetFeatures(unsigned char, unsigned char, unsigned char) {
    /*
        3862cc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3862d0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3862d4:	e28cf034 	add	pc, ip, #52	; 0x34
    */
}

/**
 * Symbol: TATA::SetPowerMode(unsigned char, unsigned char, unsigned char)
 * Address: 003862d8
 */
TATA::SetPowerMode(unsigned char, unsigned char, unsigned char) {
    /*
        3862d8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3862dc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3862e0:	e28cf038 	add	pc, ip, #56	; 0x38
    */
}

/**
 * Symbol: TATA::InitDriveParam(unsigned char, unsigned char, unsigned char)
 * Address: 003862e4
 */
TATA::InitDriveParam(unsigned char, unsigned char, unsigned char) {
    /*
        3862e4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3862e8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3862ec:	e28cf03c 	add	pc, ip, #60	; 0x3c
    */
}

/**
 * Symbol: TATA::DoATALBACommand(TATALBACommandBlock *)
 * Address: 003862f0
 */
TATA::DoATALBACommand(TATALBACommandBlock *) {
    /*
        3862f0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3862f4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3862f8:	e28cf040 	add	pc, ip, #64	; 0x40
    */
}

/**
 * Symbol: TATA::DoATARegCommand(TATARegCommandBlock *)
 * Address: 003862fc
 */
TATA::DoATARegCommand(TATARegCommandBlock *) {
    /*
        3862fc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386300:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386304:	e28cf044 	add	pc, ip, #68	; 0x44
    */
}

/**
 * Symbol: TATA::SetDeviceControlReg(unsigned char)
 * Address: 00386308
 */
TATA::SetDeviceControlReg(unsigned char) {
    /*
        386308:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38630c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386310:	e28cf048 	add	pc, ip, #72	; 0x48
    */
}

/**
 * Symbol: TATA::ATASpecific(unsigned long, void *, unsigned long)
 * Address: 00386314
 */
TATA::ATASpecific(unsigned long, void *, unsigned long) {
    /*
        386314:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386318:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38631c:	e28cf04c 	add	pc, ip, #76	; 0x4c
    */
}

/**
 * Symbol: TATA::Initialize(TCardSocket *, TCardPCMCIA *, unsigned long)
 * Address: 00386320
 */
TATA::Initialize(TCardSocket *, TCardPCMCIA *, unsigned long) {
    /*
        386320:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386324:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386328:	e28cf050 	add	pc, ip, #80	; 0x50
    */
}

/**
 * Symbol: TATA::SuspendService(void)
 * Address: 0038632c
 */
TATA::SuspendService(void) {
    /*
        38632c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386330:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386334:	e28cf054 	add	pc, ip, #84	; 0x54
    */
}

/**
 * Symbol: TATA::ResumeService(TCardSocket *, TCardPCMCIA *, unsigned long)
 * Address: 00386338
 */
TATA::ResumeService(TCardSocket *, TCardPCMCIA *, unsigned long) {
    /*
        386338:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38633c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386340:	e28cf058 	add	pc, ip, #88	; 0x58
        386344:	e1a0000f 	mov	r0, pc
        386348:	e1a0f00e 	mov	pc, lr
        38634c:	54436172 	strplb	r6, [r3], -#370
        386350:	6448616e 	strvsb	r6, [r8], -#366
        386354:	646c6572 	strvsbt	r6, [ip], -#1394
        386358:	00000000 	andeq	r0, r0, r0
    */
}

