#include "include/TMuxStoreMonitor.h"

/**
 * Symbol: Sizeof__16TMuxStoreMonitorSFv
 * Address: 00123848
 */
void TMuxStoreMonitor::Sizeof() {
    /*
        123848:	e3a00014 	mov	r0, #20	; 0x14
        12384c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TMuxStoreMonitor::New(void)
 * Address: 0012423c
 */
TMuxStoreMonitor::New(void) {
    /*
        12423c:	e3a01000 	mov	r1, #0	; 0x0
        124240:	e5801010 	str	r1, [r0, #16]	; fField16
        124244:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TMuxStoreMonitor::Delete(void)
 * Address: 00124248
 */
TMuxStoreMonitor::Delete(void) {
    /*
        124248:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TMuxStoreMonitor::Init(TStore *)
 * Address: 0012424c
 */
TMuxStoreMonitor::Init(TStore *) {
    /*
        12424c:	e1a0c00d 	mov	ip, sp
        124250:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        124254:	e24cb004 	sub	fp, ip, #4	; 0x4
        124258:	e1a05000 	mov	r5, r0
        12425c:	e1a04001 	mov	r4, r1
        124260:	e24dd004 	sub	sp, sp, #4	; 0x4
        124264:	e1a0052d 	mov	r0, sp, lsr #10
        124268:	e1a00500 	mov	r0, r0, lsl #10
        12426c:	e2400b01 	sub	r0, r0, #1024	; 0x400
        124270:	e2401001 	sub	r1, r0, #1	; 0x1
        124274:	e2811b02 	add	r1, r1, #2048	; 0x800
        124278:	e3a02000 	mov	r2, #0	; 0x0
        12427c:	eb6aca34 	bl	1bd6b54 <$LockHeapRange>
        124280:	e3a00000 	mov	r0, #0	; 0x0
        124284:	e5a54010 	str	r4, [r5, #16]!	; fField16
        124288:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxStoreMonitor::NeedsFormat(unsigned char *)
 * Address: 0012428c
 */
TMuxStoreMonitor::NeedsFormat(unsigned char *) {
    /*
        12428c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        124290:	ea676f4f 	b	1afffd4 <TStore::$NeedsFormat(unsigned char *)>
    */
}

/**
 * Symbol: TMuxStoreMonitor::Format(void)
 * Address: 00124294
 */
TMuxStoreMonitor::Format(void) {
    /*
        124294:	e5900010 	ldr	r0, [r0, #16]	; fField16
        124298:	ea675679 	b	1af9c84 <TStore::$Format(void)>
    */
}

/**
 * Symbol: TMuxStoreMonitor::GetRootId(unsigned long *)
 * Address: 0012429c
 */
TMuxStoreMonitor::GetRootId(unsigned long *) {
    /*
        12429c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1242a0:	ea675a9f 	b	1afad24 <TStore::$GetRootId(unsigned long *)>
    */
}

/**
 * Symbol: TMuxStoreMonitor::NewObject(long, unsigned long *)
 * Address: 001242a4
 */
TMuxStoreMonitor::NewObject(long, unsigned long *) {
    /*
        1242a4:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1242a8:	ea676f58 	b	1b00010 <TStore::$NewObject(long, unsigned long *)>
    */
}

/**
 * Symbol: TMuxStoreMonitor::EraseObject(unsigned long)
 * Address: 001242ac
 */
TMuxStoreMonitor::EraseObject(unsigned long) {
    /*
        1242ac:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1242b0:	ea674e47 	b	1af7bd4 <TStore::$EraseObject(unsigned long)>
    */
}

/**
 * Symbol: TMuxStoreMonitor::DeleteObject(unsigned long)
 * Address: 001242b4
 */
TMuxStoreMonitor::DeleteObject(unsigned long) {
    /*
        1242b4:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1242b8:	ea674a1e 	b	1af6b38 <TStore::$DeleteObject(unsigned long)>
    */
}

/**
 * Symbol: TMuxStoreMonitor::SetObjectSize(unsigned long, long)
 * Address: 001242bc
 */
TMuxStoreMonitor::SetObjectSize(unsigned long, long) {
    /*
        1242bc:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1242c0:	ea678816 	b	1b06320 <TStore::$SetObjectSize(unsigned long, long)>
    */
}

/**
 * Symbol: TMuxStoreMonitor::GetObjectSize(unsigned long, long *)
 * Address: 00124348
 */
TMuxStoreMonitor::GetObjectSize(unsigned long, long *) {
    /*
        124348:	e5900010 	ldr	r0, [r0, #16]	; fField16
        12434c:	ea675a6b 	b	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
    */
}

/**
 * Symbol: TMuxStoreMonitor::Write(unsigned long, long, char *, long)
 * Address: 00124350
 */
TMuxStoreMonitor::Write(unsigned long, long, char *, long) {
    /*
        124350:	e1a0c00d 	mov	ip, sp
        124354:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        124358:	e24cb004 	sub	fp, ip, #4	; 0x4
        12435c:	e1a0c003 	mov	ip, r3
        124360:	e59b3004 	ldr	r3, [fp, #4]	; fField4
        124364:	e92d0008 	stmdb	sp!, {r3}
        124368:	e5900010 	ldr	r0, [r0, #16]	; fField16
        12436c:	e1a0300c 	mov	r3, ip
        124370:	eb679862 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        124374:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TMuxStoreMonitor::Read(unsigned long, long, char *, long)
 * Address: 00124378
 */
TMuxStoreMonitor::Read(unsigned long, long, char *, long) {
    /*
        124378:	e1a0c00d 	mov	ip, sp
        12437c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        124380:	e24cb004 	sub	fp, ip, #4	; 0x4
        124384:	e1a0c003 	mov	ip, r3
        124388:	e59b3004 	ldr	r3, [fp, #4]	; fField4
        12438c:	e92d0008 	stmdb	sp!, {r3}
        124390:	e5900010 	ldr	r0, [r0, #16]	; fField16
        124394:	e1a0300c 	mov	r3, ip
        124398:	eb677768 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        12439c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TMuxStoreMonitor::GetStoreSizes(long *, long *)
 * Address: 001243a0
 */
TMuxStoreMonitor::GetStoreSizes(long *, long *) {
    /*
        1243a0:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1243a4:	ea675a68 	b	1afad4c <TStore::$GetStoreSizes(long *, long *)>
    */
}

/**
 * Symbol: TMuxStoreMonitor::IsReadOnly(unsigned char *)
 * Address: 001243a8
 */
TMuxStoreMonitor::IsReadOnly(unsigned char *) {
    /*
        1243a8:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1243ac:	ea676ad5 	b	1afef08 <TStore::$IsReadOnly(unsigned char *)>
    */
}

/**
 * Symbol: TMuxStoreMonitor::LockStore(void)
 * Address: 001243b0
 */
TMuxStoreMonitor::LockStore(void) {
    /*
        1243b0:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1243b4:	ea676ae8 	b	1afef5c <TStore::$LockStore(void)>
    */
}

/**
 * Symbol: TMuxStoreMonitor::UnlockStore(void)
 * Address: 001243b8
 */
TMuxStoreMonitor::UnlockStore(void) {
    /*
        1243b8:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1243bc:	ea67902c 	b	1b08474 <TStore::$UnlockStore(void)>
    */
}

/**
 * Symbol: TMuxStoreMonitor::Abort(void)
 * Address: 001243c0
 */
TMuxStoreMonitor::Abort(void) {
    /*
        1243c0:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1243c4:	ea673538 	b	1af18ac <TStore::$Abort(void)>
    */
}

/**
 * Symbol: TMuxStoreMonitor::Idle(unsigned char *, unsigned char *)
 * Address: 001243c8
 */
TMuxStoreMonitor::Idle(unsigned char *, unsigned char *) {
    /*
        1243c8:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1243cc:	ea675e74 	b	1afbda4 <TStore::$Idle(unsigned char *, unsigned char *)>
    */
}

/**
 * Symbol: TMuxStoreMonitor::NextObject(unsigned long, unsigned long *)
 * Address: 001243d0
 */
TMuxStoreMonitor::NextObject(unsigned long, unsigned long *) {
    /*
        1243d0:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1243d4:	ea676f18 	b	1b0003c <TStore::$NextObject(unsigned long, unsigned long *)>
    */
}

/**
 * Symbol: TMuxStoreMonitor::CheckIntegrity(unsigned long *)
 * Address: 00124454
 */
TMuxStoreMonitor::CheckIntegrity(unsigned long *) {
    /*
        124454:	e5900010 	ldr	r0, [r0, #16]	; fField16
        124458:	ea674176 	b	1af4a38 <TStore::$CheckIntegrity(unsigned long *)>
    */
}

/**
 * Symbol: TMuxStoreMonitor::NewWithinTransaction(long, unsigned long *)
 * Address: 0012445c
 */
TMuxStoreMonitor::NewWithinTransaction(long, unsigned long *) {
    /*
        12445c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        124460:	ea0989d1 	b	386bac <TStore::NewWithinTransaction(long, unsigned long *)>
    */
}

/**
 * Symbol: TMuxStoreMonitor::StartTransactionAgainst(unsigned long)
 * Address: 00124464
 */
TMuxStoreMonitor::StartTransactionAgainst(unsigned long) {
    /*
        124464:	e5900010 	ldr	r0, [r0, #16]	; fField16
        124468:	ea0989d2 	b	386bb8 <TStore::StartTransactionAgainst(unsigned long)>
    */
}

/**
 * Symbol: TMuxStoreMonitor::SeparatelyAbort(unsigned long)
 * Address: 0012446c
 */
TMuxStoreMonitor::SeparatelyAbort(unsigned long) {
    /*
        12446c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        124470:	ea0989d3 	b	386bc4 <TStore::SeparatelyAbort(unsigned long)>
    */
}

/**
 * Symbol: TMuxStoreMonitor::AddToCurrentTransaction(unsigned long)
 * Address: 00124474
 */
TMuxStoreMonitor::AddToCurrentTransaction(unsigned long) {
    /*
        124474:	e5900010 	ldr	r0, [r0, #16]	; fField16
        124478:	ea0989d4 	b	386bd0 <TStore::AddToCurrentTransaction(unsigned long)>
    */
}

/**
 * Symbol: TMuxStoreMonitor::LockReadOnly(void)
 * Address: 0012447c
 */
TMuxStoreMonitor::LockReadOnly(void) {
    /*
        12447c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        124480:	ea0989d8 	b	386be8 <TStore::LockReadOnly(void)>
    */
}

/**
 * Symbol: TMuxStoreMonitor::UnlockReadOnly(unsigned char)
 * Address: 00124484
 */
TMuxStoreMonitor::UnlockReadOnly(unsigned char) {
    /*
        124484:	e20110ff 	and	r1, r1, #255	; 0xff
        124488:	e5900010 	ldr	r0, [r0, #16]	; fField16
        12448c:	ea0989d8 	b	386bf4 <TStore::UnlockReadOnly(unsigned char)>
    */
}

/**
 * Symbol: TMuxStoreMonitor::NewObject(char *, long, unsigned long *)
 * Address: 00124490
 */
TMuxStoreMonitor::NewObject(char *, long, unsigned long *) {
    /*
        124490:	e5900010 	ldr	r0, [r0, #16]	; fField16
        124494:	ea0989dc 	b	386c0c <TStore::NewObject(char *, long, unsigned long *)>
    */
}

/**
 * Symbol: TMuxStoreMonitor::ReplaceObject(unsigned long, char *, long)
 * Address: 00124498
 */
TMuxStoreMonitor::ReplaceObject(unsigned long, char *, long) {
    /*
        124498:	e5900010 	ldr	r0, [r0, #16]	; fField16
        12449c:	ea0989dd 	b	386c18 <TStore::ReplaceObject(unsigned long, char *, long)>
    */
}

/**
 * Symbol: TMuxStoreMonitor::NewXIPObject(long, unsigned long *)
 * Address: 00124524
 */
TMuxStoreMonitor::NewXIPObject(long, unsigned long *) {
    /*
        124524:	e5900010 	ldr	r0, [r0, #16]	; fField16
        124528:	ea0989c0 	b	386c30 <TStore::NewXIPObject(long, unsigned long *)>
    */
}

/**
 * Symbol: ClassInfo__16TMuxStoreMonitorSFv
 * Address: 00386f88
 */
void TMuxStoreMonitor::ClassInfo() {
    /*
        386f88:	e24f0044 	sub	r0, pc, #68	; 0x44
        386f8c:	e1a0f00e 	mov	pc, lr
        386f90:	e3a00000 	mov	r0, #0	; 0x0
        386f94:	e1a0f00e 	mov	pc, lr
        386f98:	544d7578 	strplb	r7, [sp], -#1400
        386f9c:	53746f72 	cmnpl	r4, #456	; 0x1c8
        386fa0:	654d6f6e 	strvsb	r6, [sp, -#3950]
        386fa4:	69746f72 	ldmvsdb	r4!, {r1, r4, r5, r6, r8, r9, sl, fp, sp, lr}^
        386fa8:	00545374 	subeqs	r5, r4, r4, ror r3
        386fac:	6f72654d 	swivs	0x0072654d
        386fb0:	6f6e6974 	swivs	0x006e6974
        386fb4:	6f720000 	swivs	0x00720000
        386fb8:	00000000 	andeq	r0, r0, r0
        386fbc:	eafffff1 	b	386f88 <ClassInfo__16TMuxStoreMonitorSFv>
        386fc0:	ea5de408 	b	1afffe8 <TMuxStoreMonitor::$New(void)>
        386fc4:	ea5dbecf 	b	1af6b08 <TMuxStoreMonitor::$Delete(void)>
        386fc8:	ea5dd78f 	b	1afce0c <TMuxStoreMonitor::$Init(TStore *)>
        386fcc:	ea5de3ff 	b	1afffd0 <TMuxStoreMonitor::$NeedsFormat(unsigned char *)>
        386fd0:	ea5dcb2a 	b	1af9c80 <TMuxStoreMonitor::$Format(void)>
        386fd4:	ea5dcf51 	b	1afad20 <TMuxStoreMonitor::$GetRootId(unsigned long *)>
        386fd8:	ea5de40b 	b	1b0000c <TMuxStoreMonitor::$NewObject(long, unsigned long *)>
        386fdc:	ea5dc2fb 	b	1af7bd0 <TMuxStoreMonitor::$EraseObject(unsigned long)>
        386fe0:	ea5dbed3 	b	1af6b34 <TMuxStoreMonitor::$DeleteObject(unsigned long)>
        386fe4:	ea5dfccc 	b	1b0631c <TMuxStoreMonitor::$SetObjectSize(unsigned long, long)>
        386fe8:	ea5dcb43 	b	1af9cfc <TMuxStoreMonitor::$GetObjectSize(unsigned long, long *)>
        386fec:	ea5e0942 	b	1b094fc <TMuxStoreMonitor::$Write(unsigned long, long, char *, long)>
        386ff0:	ea5dec4f 	b	1b02134 <TMuxStoreMonitor::$Read(unsigned long, long, char *, long)>
        386ff4:	ea5dcf53 	b	1afad48 <TMuxStoreMonitor::$GetStoreSizes(long *, long *)>
        386ff8:	ea5ddfc1 	b	1afef04 <TMuxStoreMonitor::$IsReadOnly(unsigned char *)>
        386ffc:	ea5ddfd5 	b	1afef58 <TMuxStoreMonitor::$LockStore(void)>
        387000:	ea5e051a 	b	1b08470 <TMuxStoreMonitor::$UnlockStore(void)>
        387004:	ea5daa27 	b	1af18a8 <TMuxStoreMonitor::$Abort(void)>
        387008:	ea5dd364 	b	1afbda0 <TMuxStoreMonitor::$Idle(unsigned char *, unsigned char *)>
        38700c:	ea5de409 	b	1b00038 <TMuxStoreMonitor::$NextObject(unsigned long, unsigned long *)>
        387010:	ea5db687 	b	1af4a34 <TMuxStoreMonitor::$CheckIntegrity(unsigned long *)>
        387014:	eaf67510 	b	12445c <TMuxStoreMonitor::NewWithinTransaction(long, unsigned long *)>
        387018:	eaf67511 	b	124464 <TMuxStoreMonitor::StartTransactionAgainst(unsigned long)>
        38701c:	eaf67512 	b	12446c <TMuxStoreMonitor::SeparatelyAbort(unsigned long)>
        387020:	eaf67513 	b	124474 <TMuxStoreMonitor::AddToCurrentTransaction(unsigned long)>
        387024:	eaf67514 	b	12447c <TMuxStoreMonitor::LockReadOnly(void)>
        387028:	eaf67515 	b	124484 <TMuxStoreMonitor::UnlockReadOnly(unsigned char)>
        38702c:	eaf67517 	b	124490 <TMuxStoreMonitor::NewObject(char *, long, unsigned long *)>
        387030:	eaf67518 	b	124498 <TMuxStoreMonitor::ReplaceObject(unsigned long, char *, long)>
        387034:	eaf6753a 	b	124524 <TMuxStoreMonitor::NewXIPObject(long, unsigned long *)>
        387038:	e1110001 	tst	r1, r1
        38703c:	4a00000c 	bmi	387074 <ClassInfo__16TMuxStoreMonitorSFv+0xec>
        387040:	e3510021 	cmp	r1, #33	; 0x21
        387044:	aa00000a 	bge	387074 <ClassInfo__16TMuxStoreMonitorSFv+0xec>
        387048:	e92d4004 	stmdb	sp!, {r2, lr}
        38704c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        387050:	e28fc024 	add	ip, pc, #36	; 0x24
        387054:	e08cc181 	add	ip, ip, r1, lsl #3
        387058:	e1a0e00f 	mov	lr, pc
        38705c:	e1a0f00c 	mov	pc, ip
        387060:	e28dd020 	add	sp, sp, #32	; 0x20
        387064:	e8bd4004 	ldmia	sp!, {r2, lr}
        387068:	e5820000 	str	r0, [r2]
        38706c:	e3a00000 	mov	r0, #0	; 0x0
        387070:	e1a0f00e 	mov	pc, lr
        387074:	e3e00000 	mvn	r0, #0	; 0x0
        387078:	e1a0f00e 	mov	pc, lr
        38707c:	ea00003a 	b	38716c <ClassInfo__16TMuxStoreMonitorSFv+0x1e4>
        387080:	ea5de3d8 	b	1afffe8 <TMuxStoreMonitor::$New(void)>
        387084:	ea000038 	b	38716c <ClassInfo__16TMuxStoreMonitorSFv+0x1e4>
        387088:	ea5dbe9e 	b	1af6b08 <TMuxStoreMonitor::$Delete(void)>
        38708c:	ea000036 	b	38716c <ClassInfo__16TMuxStoreMonitorSFv+0x1e4>
        387090:	ea5dd75d 	b	1afce0c <TMuxStoreMonitor::$Init(TStore *)>
        387094:	ea000034 	b	38716c <ClassInfo__16TMuxStoreMonitorSFv+0x1e4>
        387098:	ea5de3cc 	b	1afffd0 <TMuxStoreMonitor::$NeedsFormat(unsigned char *)>
        38709c:	ea000032 	b	38716c <ClassInfo__16TMuxStoreMonitorSFv+0x1e4>
        3870a0:	ea5dcaf6 	b	1af9c80 <TMuxStoreMonitor::$Format(void)>
        3870a4:	ea000030 	b	38716c <ClassInfo__16TMuxStoreMonitorSFv+0x1e4>
        3870a8:	ea5dcf1c 	b	1afad20 <TMuxStoreMonitor::$GetRootId(unsigned long *)>
        3870ac:	ea00002e 	b	38716c <ClassInfo__16TMuxStoreMonitorSFv+0x1e4>
        3870b0:	ea5de3d5 	b	1b0000c <TMuxStoreMonitor::$NewObject(long, unsigned long *)>
        3870b4:	ea00002c 	b	38716c <ClassInfo__16TMuxStoreMonitorSFv+0x1e4>
        3870b8:	ea5dc2c4 	b	1af7bd0 <TMuxStoreMonitor::$EraseObject(unsigned long)>
        3870bc:	ea00002a 	b	38716c <ClassInfo__16TMuxStoreMonitorSFv+0x1e4>
        3870c0:	ea5dbe9b 	b	1af6b34 <TMuxStoreMonitor::$DeleteObject(unsigned long)>
        3870c4:	ea000028 	b	38716c <ClassInfo__16TMuxStoreMonitorSFv+0x1e4>
        3870c8:	ea5dfc93 	b	1b0631c <TMuxStoreMonitor::$SetObjectSize(unsigned long, long)>
        3870cc:	ea000026 	b	38716c <ClassInfo__16TMuxStoreMonitorSFv+0x1e4>
        3870d0:	ea5dcb09 	b	1af9cfc <TMuxStoreMonitor::$GetObjectSize(unsigned long, long *)>
        3870d4:	ea000024 	b	38716c <ClassInfo__16TMuxStoreMonitorSFv+0x1e4>
        3870d8:	ea5e0907 	b	1b094fc <TMuxStoreMonitor::$Write(unsigned long, long, char *, long)>
        3870dc:	ea000022 	b	38716c <ClassInfo__16TMuxStoreMonitorSFv+0x1e4>
        3870e0:	ea5dec13 	b	1b02134 <TMuxStoreMonitor::$Read(unsigned long, long, char *, long)>
        3870e4:	ea000020 	b	38716c <ClassInfo__16TMuxStoreMonitorSFv+0x1e4>
        3870e8:	ea5dcf16 	b	1afad48 <TMuxStoreMonitor::$GetStoreSizes(long *, long *)>
        3870ec:	ea00001e 	b	38716c <ClassInfo__16TMuxStoreMonitorSFv+0x1e4>
        3870f0:	ea5ddf83 	b	1afef04 <TMuxStoreMonitor::$IsReadOnly(unsigned char *)>
        3870f4:	ea00001c 	b	38716c <ClassInfo__16TMuxStoreMonitorSFv+0x1e4>
        3870f8:	ea5ddf96 	b	1afef58 <TMuxStoreMonitor::$LockStore(void)>
        3870fc:	ea00001a 	b	38716c <ClassInfo__16TMuxStoreMonitorSFv+0x1e4>
        387100:	ea5e04da 	b	1b08470 <TMuxStoreMonitor::$UnlockStore(void)>
        387104:	ea000018 	b	38716c <ClassInfo__16TMuxStoreMonitorSFv+0x1e4>
        387108:	ea5da9e6 	b	1af18a8 <TMuxStoreMonitor::$Abort(void)>
        38710c:	ea000016 	b	38716c <ClassInfo__16TMuxStoreMonitorSFv+0x1e4>
        387110:	ea5dd322 	b	1afbda0 <TMuxStoreMonitor::$Idle(unsigned char *, unsigned char *)>
        387114:	ea000014 	b	38716c <ClassInfo__16TMuxStoreMonitorSFv+0x1e4>
        387118:	ea5de3c6 	b	1b00038 <TMuxStoreMonitor::$NextObject(unsigned long, unsigned long *)>
        38711c:	ea000012 	b	38716c <ClassInfo__16TMuxStoreMonitorSFv+0x1e4>
        387120:	ea5db643 	b	1af4a34 <TMuxStoreMonitor::$CheckIntegrity(unsigned long *)>
        387124:	ea000010 	b	38716c <ClassInfo__16TMuxStoreMonitorSFv+0x1e4>
        387128:	eaf674cb 	b	12445c <TMuxStoreMonitor::NewWithinTransaction(long, unsigned long *)>
        38712c:	ea00000e 	b	38716c <ClassInfo__16TMuxStoreMonitorSFv+0x1e4>
        387130:	eaf674cb 	b	124464 <TMuxStoreMonitor::StartTransactionAgainst(unsigned long)>
        387134:	ea00000c 	b	38716c <ClassInfo__16TMuxStoreMonitorSFv+0x1e4>
        387138:	eaf674cb 	b	12446c <TMuxStoreMonitor::SeparatelyAbort(unsigned long)>
        38713c:	ea00000a 	b	38716c <ClassInfo__16TMuxStoreMonitorSFv+0x1e4>
        387140:	eaf674cb 	b	124474 <TMuxStoreMonitor::AddToCurrentTransaction(unsigned long)>
        387144:	ea000008 	b	38716c <ClassInfo__16TMuxStoreMonitorSFv+0x1e4>
        387148:	eaf674cb 	b	12447c <TMuxStoreMonitor::LockReadOnly(void)>
        38714c:	ea000006 	b	38716c <ClassInfo__16TMuxStoreMonitorSFv+0x1e4>
        387150:	eaf674cb 	b	124484 <TMuxStoreMonitor::UnlockReadOnly(unsigned char)>
        387154:	ea000004 	b	38716c <ClassInfo__16TMuxStoreMonitorSFv+0x1e4>
        387158:	eaf674cc 	b	124490 <TMuxStoreMonitor::NewObject(char *, long, unsigned long *)>
        38715c:	ea000002 	b	38716c <ClassInfo__16TMuxStoreMonitorSFv+0x1e4>
        387160:	eaf674cc 	b	124498 <TMuxStoreMonitor::ReplaceObject(unsigned long, char *, long)>
        387164:	ea000000 	b	38716c <ClassInfo__16TMuxStoreMonitorSFv+0x1e4>
        387168:	eaf674ed 	b	124524 <TMuxStoreMonitor::NewXIPObject(long, unsigned long *)>
        38716c:	e3a03008 	mov	r3, #8	; 0x8
        387170:	e04dd103 	sub	sp, sp, r3, lsl #2
        387174:	e2822010 	add	r2, r2, #16	; 0x10
        387178:	ea000001 	b	387184 <ClassInfo__16TMuxStoreMonitorSFv+0x1fc>
        38717c:	e7921103 	ldr	r1, [r2, r3, lsl #2]
        387180:	e78d1103 	str	r1, [sp, r3, lsl #2]
        387184:	e2533001 	subs	r3, r3, #1	; 0x1
        387188:	5afffffb 	bpl	38717c <ClassInfo__16TMuxStoreMonitorSFv+0x1f4>
        38718c:	e242200c 	sub	r2, r2, #12	; 0xc
        387190:	e892000e 	ldmia	r2, {r1, r2, r3}
        387194:	e28cf004 	add	pc, ip, #4	; 0x4
        387198:	00000000 	andeq	r0, r0, r0
        38719c:	00000048 	andeq	r0, r0, r8, asr #32
        3871a0:	00000050 	andeq	r0, r0, r0, asr r0
        3871a4:	00000053 	andeq	r0, r0, r3, asr r0
        3871a8:	00000068 	andeq	r0, r0, r8, rrx
        3871ac:	0000011c 	andeq	r0, r0, ip, lsl r1
        3871b0:	ea5dfc6e 	b	1b06370 <$Sizeof__11TFlashStoreSFv>
        3871bc:	ea5de386 	b	1afffdc <TFlashStore::$New(void)>
        3871c0:	ea5dbe4e 	b	1af6b00 <TFlashStore::$Delete(void)>
        3871c4:	00020000 	andeq	r0, r2, r0
        3871d0:	ea000001 	b	3871dc <ClassInfo__11TFlashStoreSFv+0x8>
    */
}

