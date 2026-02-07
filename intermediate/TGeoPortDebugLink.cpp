#include "include/TGeoPortDebugLink.h"

/**
 * Symbol: Sizeof__17TGeoPortDebugLinkSFv
 * Address: 000daeec
 */
void TGeoPortDebugLink::Sizeof() {
    /*
         daeec:	e3a00048 	mov	r0, #72	; 0x48
         daef0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TGeoPortDebugLink::PollByte(void)
 * Address: 000daef4
 */
TGeoPortDebugLink::PollByte(void) {
    /*
         daef4:	e5900020 	ldr	r0, [r0, #32]	; fField32
         daef8:	e2800901 	add	r0, r0, #16384	; 0x4000
         daefc:	e5d00400 	ldrb	r0, [r0, #1024]	; fField1024
         daf00:	e2000040 	and	r0, r0, #64	; 0x40
         daf04:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TGeoPortDebugLink::EnbIntOnNextRxC(void)
 * Address: 000daf08
 */
TGeoPortDebugLink::EnbIntOnNextRxC(void) {
    /*
         daf08:	e3a01001 	mov	r1, #1	; 0x1
         daf0c:	e5c0102b 	strb	r1, [r0, #43]	; fField43
         daf10:	e5b01020 	ldr	r1, [r0, #32]!	; fField32
         daf14:	e3a00040 	mov	r0, #64	; 0x40
         daf18:	e2811a03 	add	r1, r1, #12288	; 0x3000
         daf1c:	e5c10c00 	strb	r0, [r1, #3072]	; fField3072
         daf20:	e5c10000 	strb	r0, [r1]
         daf24:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TGeoPortDebugLink::GetSerialChipPtr(void)
 * Address: 000daf28
 */
TGeoPortDebugLink::GetSerialChipPtr(void) {
    /*
         daf28:	e3a00000 	mov	r0, #0	; 0x0
         daf2c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TGeoPortDebugLink::PowerCycle(unsigned char)
 * Address: 000daf30
 */
TGeoPortDebugLink::PowerCycle(unsigned char) {
    /*
         daf30:	e1a0c00d 	mov	ip, sp
         daf34:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         daf38:	e24cb004 	sub	fp, ip, #4	; 0x4
         daf3c:	e1a04000 	mov	r4, r0
         daf40:	e20100ff 	and	r0, r1, #255	; 0xff
         daf44:	e5d4102c 	ldrb	r1, [r4, #44]	; fField44
         daf48:	e3a05000 	mov	r5, #0	; 0x0
         daf4c:	e3310000 	teq	r1, #0	; 0x0
         daf50:	0a00000f 	beq	daf94 <TGeoPortDebugLink::PowerCycle(unsigned char)+0x64>
         daf54:	e3300000 	teq	r0, #0	; 0x0
         daf58:	0a000005 	beq	daf74 <TGeoPortDebugLink::PowerCycle(unsigned char)+0x44>
         daf5c:	e5b40020 	ldr	r0, [r4, #32]!	; fField32
         daf60:	e2800a03 	add	r0, r0, #12288	; 0x3000
         daf64:	e5c05000 	strb	r5, [r0]
         daf68:	e3a00001 	mov	r0, #1	; 0x1
         daf6c:	eb6cc19e 	bl	1c0b5ec <$IOPowerOff(unsigned long)>
         daf70:	ea000007 	b	daf94 <TGeoPortDebugLink::PowerCycle(unsigned char)+0x64>
         daf74:	e3a00001 	mov	r0, #1	; 0x1
         daf78:	eb6cc19c 	bl	1c0b5f0 <$IOPowerOn(unsigned long)>
         daf7c:	e1a00004 	mov	r0, r4
         daf80:	eb663957 	bl	1a694e4 <TGeoPortDebugLink::$InitForHDLC(void)>
         daf84:	e5d4002b 	ldrb	r0, [r4, #43]	; fField43
         daf88:	e3300000 	teq	r0, #0	; 0x0
         daf8c:	11a00004 	movne	r0, r4
         daf90:	1b66394e 	blne	1a694d0 <TGeoPortDebugLink::$EnbIntOnNextRxC(void)>
         daf94:	e1a00005 	mov	r0, r5
         daf98:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TGeoPortDebugLink::SerialInterrupt(void)
 * Address: 000daf9c
 */
TGeoPortDebugLink::SerialInterrupt(void) {
    /*
         daf9c:	e1a01000 	mov	r1, r0
         dafa0:	e3a02000 	mov	r2, #0	; 0x0
         dafa4:	e5c0202b 	strb	r2, [r0, #43]	; fField43
         dafa8:	e5900020 	ldr	r0, [r0, #32]	; fField32
         dafac:	e2800a03 	add	r0, r0, #12288	; 0x3000
         dafb0:	e5c02000 	strb	r2, [r0]
         dafb4:	e3a02060 	mov	r2, #96	; 0x60
         dafb8:	e5c02c00 	strb	r2, [r0, #3072]	; fField3072
         dafbc:	e591001c 	ldr	r0, [r1, #28]	; fField28
         dafc0:	e591f018 	ldr	pc, [r1, #24]	; fField24
    */
}

/**
 * Symbol: TGeoPortDebugLink::GrabSerialPort(unsigned char)
 * Address: 000dafc4
 */
TGeoPortDebugLink::GrabSerialPort(unsigned char) {
    /*
         dafc4:	e1a0c00d 	mov	ip, sp
         dafc8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         dafcc:	e24cb004 	sub	fp, ip, #4	; 0x4
         dafd0:	e1a04000 	mov	r4, r0
         dafd4:	e20160ff 	and	r6, r1, #255	; 0xff
         dafd8:	e3a07000 	mov	r7, #0	; 0x0
         dafdc:	e5807010 	str	r7, [r0, #16]	; fField16
         dafe0:	eb6c9c4a 	bl	1c02110 <$GetSerialChipRegistry(void)>
         dafe4:	e1b05000 	movs	r5, r0
         dafe8:	01a00007 	moveq	r0, r7
         dafec:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         daff0:	e1a00005 	mov	r0, r5
         daff4:	e59f1058 	ldr	r1, [pc, #58]	; db054 <TGeoPortDebugLink::GrabSerialPort(unsigned char)+0x90>
         daff8:	eb0aa7b7 	bl	384edc <PSerialChipRegistry::FindByLocation(unsigned long)>
         daffc:	e3300000 	teq	r0, #0	; 0x0
         db000:	03a0006a 	moveq	r0, #106	; 0x6a
         db004:	02400c3f 	subeq	r0, r0, #16128	; 0x3f00
         db008:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         db00c:	e1a01000 	mov	r1, r0
         db010:	e1a00005 	mov	r0, r5
         db014:	eb0aa7a4 	bl	384eac <PSerialChipRegistry::GetChipPtr(unsigned long)>
         db018:	e1a05000 	mov	r5, r0
         db01c:	e5840010 	str	r0, [r4, #16]	; fField16
         db020:	e24dd014 	sub	sp, sp, #20	; 0x14
         db024:	e1a0000d 	mov	r0, sp
         db028:	eb002c2b 	bl	e60dc <THMOGeoPortDebugConfig::__ct(void)>
         db02c:	e59d0008 	ldr	r0, [sp, #8]
         db030:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
         db034:	e3800c02 	orr	r0, r0, #512	; 0x200
         db038:	e58d0008 	str	r0, [sp, #8]
         db03c:	e58d400c 	str	r4, [sp, #12]
         db040:	e5cd6010 	strb	r6, [sp, #16]	; fField16
         db044:	e1a0100d 	mov	r1, sp
         db048:	e1a00005 	mov	r0, r5
         db04c:	eb0aa70e 	bl	384c8c <TSerialChip::ProcessOption(TOption *)>
         db050:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         db054:	65787472 	ldrvsb	r7, [r8, -#1138]!
    */
}

/**
 * Symbol: TGeoPortDebugLink::InitForAsync(void)
 * Address: 000db058
 */
TGeoPortDebugLink::InitForAsync(void) {
    /*
         db058:	e5900020 	ldr	r0, [r0, #32]	; fField32
         db05c:	e3a01040 	mov	r1, #64	; 0x40
         db060:	e5c01000 	strb	r1, [r0]
         db064:	e59f1024 	ldr	r1, [pc, #24]	; db090 <TGeoPortDebugLink::InitForAsync(void)+0x38>	; fField24
         db068:	e4d12001 	ldrb	r2, [r1], #1	; fField1
         db06c:	e33200ff 	teq	r2, #255	; 0xff
         db070:	01a0f00e 	moveq	pc, lr
         db074:	e4d13001 	ldrb	r3, [r1], #1	; fField1
         db078:	e1a02402 	mov	r2, r2, lsl #8
         db07c:	e7c03002 	strb	r3, [r0, r2]
         db080:	e4d12001 	ldrb	r2, [r1], #1	; fField1
         db084:	e33200ff 	teq	r2, #255	; 0xff
         db088:	1afffff9 	bne	db074 <TGeoPortDebugLink::InitForAsync(void)+0x1c>
         db08c:	e1a0f00e 	mov	pc, lr
         db090:	00371658 	eoreqs	r1, r7, r8, asr r6
    */
}

/**
 * Symbol: TGeoPortDebugLink::InitForHDLC(void)
 * Address: 000db094
 */
TGeoPortDebugLink::InitForHDLC(void) {
    /*
         db094:	e3a02040 	mov	r2, #64	; 0x40
         db098:	e5901020 	ldr	r1, [r0, #32]	; fField32
         db09c:	e5c12000 	strb	r2, [r1]
         db0a0:	e59f202c 	ldr	r2, [pc, #2c]	; db0d4 <TGeoPortDebugLink::InitForHDLC(void)+0x40>
         db0a4:	e4d23001 	ldrb	r3, [r2], #1	; fField1
         db0a8:	e33300ff 	teq	r3, #255	; 0xff
         db0ac:	01a0f00e 	moveq	pc, lr
         db0b0:	e4d2c001 	ldrb	ip, [r2], #1	; fField1
         db0b4:	e1a03403 	mov	r3, r3, lsl #8
         db0b8:	e3330b15 	teq	r3, #21504	; 0x5400
         db0bc:	05d0c029 	ldreqb	ip, [r0, #41]	; fField41
         db0c0:	e7c1c003 	strb	ip, [r1, r3]
         db0c4:	e4d23001 	ldrb	r3, [r2], #1	; fField1
         db0c8:	e33300ff 	teq	r3, #255	; 0xff
         db0cc:	1afffff7 	bne	db0b0 <TGeoPortDebugLink::InitForHDLC(void)+0x1c>
         db0d0:	e1a0f00e 	mov	pc, lr
         db0d4:	0037166c 	eoreqs	r1, r7, ip, ror #12
    */
}

/**
 * Symbol: TGeoPortDebugLink::BeaconDetect(long)
 * Address: 000db0d8
 */
TGeoPortDebugLink::BeaconDetect(long) {
    /*
         db0d8:	e1a0c00d 	mov	ip, sp
         db0dc:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         db0e0:	e24cb004 	sub	fp, ip, #4	; 0x4
         db0e4:	e1a04000 	mov	r4, r0
         db0e8:	e3a05000 	mov	r5, #0	; 0x0
         db0ec:	e3310001 	teq	r1, #1	; 0x1
         db0f0:	03a05001 	moveq	r5, #1	; 0x1
         db0f4:	e3a08ffb 	mov	r8, #1004	; 0x3ec
         db0f8:	e2888bb3 	add	r8, r8, #183296	; 0x2cc00
         db0fc:	ea00002b 	b	db1b0 <TGeoPortDebugLink::BeaconDetect(long)+0xd8>
         db100:	e5940020 	ldr	r0, [r4, #32]	; fField32
         db104:	e2800901 	add	r0, r0, #16384	; 0x4000
         db108:	e5d00400 	ldrb	r0, [r0, #1024]	; fField1024
         db10c:	e2000008 	and	r0, r0, #8	; 0x8
         db110:	e3350000 	teq	r5, #0	; 0x0
         db114:	0a00000e 	beq	db154 <TGeoPortDebugLink::BeaconDetect(long)+0x7c>
         db118:	e3350001 	teq	r5, #1	; 0x1
         db11c:	0a00000f 	beq	db160 <TGeoPortDebugLink::BeaconDetect(long)+0x88>
         db120:	e3350002 	teq	r5, #2	; 0x2
         db124:	0a000014 	beq	db17c <TGeoPortDebugLink::BeaconDetect(long)+0xa4>
         db128:	e3350003 	teq	r5, #3	; 0x3
         db12c:	1a00001d 	bne	db1a8 <TGeoPortDebugLink::BeaconDetect(long)+0xd0>
         db130:	e5941024 	ldr	r1, [r4, #36]	; fField36
         db134:	e5911000 	ldr	r1, [r1]
         db138:	e0411007 	sub	r1, r1, r7
         db13c:	e1510006 	cmp	r1, r6
         db140:	23a05000 	movcs	r5, #0	; 0x0
         db144:	2a000017 	bcs	db1a8 <TGeoPortDebugLink::BeaconDetect(long)+0xd0>
         db148:	e3300000 	teq	r0, #0	; 0x0
         db14c:	03a05004 	moveq	r5, #4	; 0x4
         db150:	ea000014 	b	db1a8 <TGeoPortDebugLink::BeaconDetect(long)+0xd0>
         db154:	e3300000 	teq	r0, #0	; 0x0
         db158:	1a000012 	bne	db1a8 <TGeoPortDebugLink::BeaconDetect(long)+0xd0>
         db15c:	ea000010 	b	db1a4 <TGeoPortDebugLink::BeaconDetect(long)+0xcc>
         db160:	e3300000 	teq	r0, #0	; 0x0
         db164:	0a00000f 	beq	db1a8 <TGeoPortDebugLink::BeaconDetect(long)+0xd0>
         db168:	e3a05002 	mov	r5, #2	; 0x2
         db16c:	e5940024 	ldr	r0, [r4, #36]	; fField36
         db170:	e5907000 	ldr	r7, [r0]
         db174:	e3a060b9 	mov	r6, #185	; 0xb9
         db178:	ea00000a 	b	db1a8 <TGeoPortDebugLink::BeaconDetect(long)+0xd0>
         db17c:	e5941024 	ldr	r1, [r4, #36]	; fField36
         db180:	e5912000 	ldr	r2, [r1]
         db184:	e0422007 	sub	r2, r2, r7
         db188:	e1520006 	cmp	r2, r6
         db18c:	23a05003 	movcs	r5, #3	; 0x3
         db190:	25917000 	ldrcs	r7, [r1]
         db194:	21a06008 	movcs	r6, r8
         db198:	2a000002 	bcs	db1a8 <TGeoPortDebugLink::BeaconDetect(long)+0xd0>
         db19c:	e3300000 	teq	r0, #0	; 0x0
         db1a0:	1a000000 	bne	db1a8 <TGeoPortDebugLink::BeaconDetect(long)+0xd0>
         db1a4:	e3a05001 	mov	r5, #1	; 0x1
         db1a8:	e3350004 	teq	r5, #4	; 0x4
         db1ac:	0a000005 	beq	db1c8 <TGeoPortDebugLink::BeaconDetect(long)+0xf0>
         db1b0:	e1a00004 	mov	r0, r4
         db1b4:	eb00010c 	bl	db5ec <TGeoPortDebugLink::TimedOut(void)>
         db1b8:	e3300000 	teq	r0, #0	; 0x0
         db1bc:	0affffcf 	beq	db100 <TGeoPortDebugLink::BeaconDetect(long)+0x28>
         db1c0:	e3350004 	teq	r5, #4	; 0x4
         db1c4:	1a000001 	bne	db1d0 <TGeoPortDebugLink::BeaconDetect(long)+0xf8>
         db1c8:	e3a00001 	mov	r0, #1	; 0x1
         db1cc:	ea000000 	b	db1d4 <TGeoPortDebugLink::BeaconDetect(long)+0xfc>
         db1d0:	e3a00000 	mov	r0, #0	; 0x0
         db1d4:	e20000ff 	and	r0, r0, #255	; 0xff
         db1d8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TGeoPortDebugLink::PutByteStart(unsigned char)
 * Address: 000db1dc
 */
TGeoPortDebugLink::PutByteStart(unsigned char) {
    /*
         db1dc:	e20110ff 	and	r1, r1, #255	; 0xff
         db1e0:	e3a02000 	mov	r2, #0	; 0x0
         db1e4:	e5c02028 	strb	r2, [r0, #40]	; fField40
         db1e8:	ea6638c0 	b	1a694f0 <TGeoPortDebugLink::$PutByte(unsigned char)>
    */
}

/**
 * Symbol: TGeoPortDebugLink::New(void)
 * Address: 000db1ec
 */
TGeoPortDebugLink::New(void) {
    /*
         db1ec:	e1a0c00d 	mov	ip, sp
         db1f0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         db1f4:	e24cb004 	sub	fp, ip, #4	; 0x4
         db1f8:	e1a04000 	mov	r4, r0
         db1fc:	eb6638ac 	bl	1a694b4 <TGeoPortDebugLink::$Init(void)>
         db200:	e2841048 	add	r1, r4, #72	; 0x48
         db204:	e1a00004 	mov	r0, r4
         db208:	e3a02001 	mov	r2, #1	; 0x1
         db20c:	eb6bee50 	bl	1bd6b54 <$LockHeapRange>
         db210:	e1a00004 	mov	r0, r4
         db214:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TGeoPortDebugLink::PutByte(unsigned char)
 * Address: 000db218
 */
TGeoPortDebugLink::PutByte(unsigned char) {
    /*
         db218:	e20110ff 	and	r1, r1, #255	; 0xff
         db21c:	e5903020 	ldr	r3, [r0, #32]	; fField32
         db220:	e2832901 	add	r2, r3, #16384	; 0x4000
         db224:	e5d2c400 	ldrb	ip, [r2, #1024]	; fField1024
         db228:	e31c0080 	tst	ip, #128	; 0x80
         db22c:	1a000002 	bne	db23c <TGeoPortDebugLink::PutByte(unsigned char)+0x24>
         db230:	e5d2c400 	ldrb	ip, [r2, #1024]	; fField1024
         db234:	e31c0080 	tst	ip, #128	; 0x80
         db238:	0afffffc 	beq	db230 <TGeoPortDebugLink::PutByte(unsigned char)+0x18>
         db23c:	e2832a06 	add	r2, r3, #24576	; 0x6000
         db240:	e5c21000 	strb	r1, [r2]
         db244:	e5d02028 	ldrb	r2, [r0, #40]	; fField40
         db248:	e0821001 	add	r1, r2, r1
         db24c:	e5c01028 	strb	r1, [r0, #40]	; fField40
         db250:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TGeoPortDebugLink::PutByteEnd(void)
 * Address: 000db254
 */
TGeoPortDebugLink::PutByteEnd(void) {
    /*
         db254:	e1a0c00d 	mov	ip, sp
         db258:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         db25c:	e24cb004 	sub	fp, ip, #4	; 0x4
         db260:	e1a04000 	mov	r4, r0
         db264:	e5d01028 	ldrb	r1, [r0, #40]	; fField40
         db268:	eb6638a0 	bl	1a694f0 <TGeoPortDebugLink::$PutByte(unsigned char)>
         db26c:	e5b40020 	ldr	r0, [r4, #32]!	; fField32
         db270:	e2800901 	add	r0, r0, #16384	; 0x4000
         db274:	e5d01800 	ldrb	r1, [r0, #2048]
         db278:	e3110001 	tst	r1, #1	; 0x1
         db27c:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         db280:	e5d01800 	ldrb	r1, [r0, #2048]
         db284:	e3110001 	tst	r1, #1	; 0x1
         db288:	0afffffc 	beq	db280 <TGeoPortDebugLink::PutByteEnd(void)+0x2c>
         db28c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TGeoPortDebugLink::GetNextByte(void)
 * Address: 000db290
 */
TGeoPortDebugLink::GetNextByte(void) {
    /*
         db290:	e1a0c00d 	mov	ip, sp
         db294:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         db298:	e24cb004 	sub	fp, ip, #4	; 0x4
         db29c:	e1a04000 	mov	r4, r0
         db2a0:	e5906020 	ldr	r6, [r0, #32]	; fField32
         db2a4:	eb0000d0 	bl	db5ec <TGeoPortDebugLink::TimedOut(void)>
         db2a8:	e3300000 	teq	r0, #0	; 0x0
         db2ac:	1a00000c 	bne	db2e4 <TGeoPortDebugLink::GetNextByte(void)+0x54>
         db2b0:	e2865901 	add	r5, r6, #16384	; 0x4000
         db2b4:	e5d50400 	ldrb	r0, [r5, #1024]	; fField1024
         db2b8:	e3100040 	tst	r0, #64	; 0x40
         db2bc:	12860a07 	addne	r0, r6, #28672	; 0x7000
         db2c0:	15d00000 	ldrneb	r0, [r0]
         db2c4:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         db2c8:	e5d50400 	ldrb	r0, [r5, #1024]	; fField1024
         db2cc:	e3100008 	tst	r0, #8	; 0x8
         db2d0:	1a000003 	bne	db2e4 <TGeoPortDebugLink::GetNextByte(void)+0x54>
         db2d4:	e1a00004 	mov	r0, r4
         db2d8:	eb0000c3 	bl	db5ec <TGeoPortDebugLink::TimedOut(void)>
         db2dc:	e3300000 	teq	r0, #0	; 0x0
         db2e0:	0afffff3 	beq	db2b4 <TGeoPortDebugLink::GetNextByte(void)+0x24>
         db2e4:	e3a000ff 	mov	r0, #255	; 0xff
         db2e8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TGeoPortDebugLink::GetBeaconMsg(unsigned char *, unsigned long)
 * Address: 000db2ec
 */
TGeoPortDebugLink::GetBeaconMsg(unsigned char *, unsigned long) {
    /*
         db2ec:	e1a0c00d 	mov	ip, sp
         db2f0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         db2f4:	e24cb004 	sub	fp, ip, #4	; 0x4
         db2f8:	e1a06000 	mov	r6, r0
         db2fc:	e1a05001 	mov	r5, r1
         db300:	e1a04002 	mov	r4, r2
         db304:	e3a08000 	mov	r8, #0	; 0x0
         db308:	e3a07000 	mov	r7, #0	; 0x0
         db30c:	e3520000 	cmp	r2, #0	; 0x0
         db310:	9a000005 	bls	db32c <TGeoPortDebugLink::GetBeaconMsg(unsigned char *, unsigned long)+0x40>
         db314:	e1a00006 	mov	r0, r6
         db318:	eb663876 	bl	1a694f8 <TGeoPortDebugLink::$GetNextByte(void)>
         db31c:	e7c50007 	strb	r0, [r5, r7]
         db320:	e2877001 	add	r7, r7, #1	; 0x1
         db324:	e1570004 	cmp	r7, r4
         db328:	3afffff9 	bcc	db314 <TGeoPortDebugLink::GetBeaconMsg(unsigned char *, unsigned long)+0x28>
         db32c:	e1a00006 	mov	r0, r6
         db330:	eb0000ad 	bl	db5ec <TGeoPortDebugLink::TimedOut(void)>
         db334:	e3300000 	teq	r0, #0	; 0x0
         db338:	13e0005b 	mvnne	r0, #91	; 0x5b
         db33c:	12400c46 	subne	r0, r0, #17920	; 0x4600
         db340:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         db344:	e5b60020 	ldr	r0, [r6, #32]!	; fField32
         db348:	e2800901 	add	r0, r0, #16384	; 0x4000
         db34c:	e5d00400 	ldrb	r0, [r0, #1024]	; fField1024
         db350:	e3100008 	tst	r0, #8	; 0x8
         db354:	13a00001 	movne	r0, #1	; 0x1
         db358:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         db35c:	e3a00000 	mov	r0, #0	; 0x0
         db360:	e2441001 	sub	r1, r4, #1	; 0x1
         db364:	e3510000 	cmp	r1, #0	; 0x0
         db368:	9a000005 	bls	db384 <TGeoPortDebugLink::GetBeaconMsg(unsigned char *, unsigned long)+0x98>
         db36c:	e7d52000 	ldrb	r2, [r5, r0]
         db370:	e0822008 	add	r2, r2, r8
         db374:	e20280ff 	and	r8, r2, #255	; 0xff
         db378:	e2800001 	add	r0, r0, #1	; 0x1
         db37c:	e1510000 	cmp	r1, r0
         db380:	8afffff9 	bhi	db36c <TGeoPortDebugLink::GetBeaconMsg(unsigned char *, unsigned long)+0x80>
         db384:	e0850004 	add	r0, r5, r4
         db388:	e5500001 	ldrb	r0, [r0, -#1]	; fField1
         db38c:	e0500008 	subs	r0, r0, r8
         db390:	13e00053 	mvnne	r0, #83	; 0x53
         db394:	12400c46 	subne	r0, r0, #17920	; 0x4600
         db398:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TGeoPortDebugLink::ReadNextByteWithTimeOut(unsigned char *)
 * Address: 000db39c
 */
TGeoPortDebugLink::ReadNextByteWithTimeOut(unsigned char *) {
    /*
         db39c:	e1a0c00d 	mov	ip, sp
         db3a0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         db3a4:	e24cb004 	sub	fp, ip, #4	; 0x4
         db3a8:	e1a04000 	mov	r4, r0
         db3ac:	e1a05001 	mov	r5, r1
         db3b0:	e5907020 	ldr	r7, [r0, #32]	; fField32
         db3b4:	e2876901 	add	r6, r7, #16384	; 0x4000
         db3b8:	e5d60400 	ldrb	r0, [r6, #1024]	; fField1024
         db3bc:	e3100040 	tst	r0, #64	; 0x40
         db3c0:	0a000005 	beq	db3dc <TGeoPortDebugLink::ReadNextByteWithTimeOut(unsigned char *)+0x40>
         db3c4:	e5d60800 	ldrb	r0, [r6, #2048]
         db3c8:	e20000f0 	and	r0, r0, #240	; 0xf0
         db3cc:	e2871a07 	add	r1, r7, #28672	; 0x7000
         db3d0:	e5d11000 	ldrb	r1, [r1]
         db3d4:	e5c51000 	strb	r1, [r5]
         db3d8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         db3dc:	e1a00004 	mov	r0, r4
         db3e0:	eb000081 	bl	db5ec <TGeoPortDebugLink::TimedOut(void)>
         db3e4:	e3300000 	teq	r0, #0	; 0x0
         db3e8:	0afffff2 	beq	db3b8 <TGeoPortDebugLink::ReadNextByteWithTimeOut(unsigned char *)+0x1c>
         db3ec:	e3a00c02 	mov	r0, #512	; 0x200
         db3f0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TGeoPortDebugLink::ReEnableReceiver(void)
 * Address: 000db3f4
 */
TGeoPortDebugLink::ReEnableReceiver(void) {
    /*
         db3f4:	e5900020 	ldr	r0, [r0, #32]	; fField32
         db3f8:	e3a01060 	mov	r1, #96	; 0x60
         db3fc:	e2802a03 	add	r2, r0, #12288	; 0x3000
         db400:	e5c21c00 	strb	r1, [r2, #3072]	; fField3072
         db404:	e2800a02 	add	r0, r0, #8192	; 0x2000
         db408:	e5d01000 	ldrb	r1, [r0]
         db40c:	e3811001 	orr	r1, r1, #1	; 0x1
         db410:	e5c01000 	strb	r1, [r0]
         db414:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TGeoPortDebugLink::WaitFor2BytePacket(unsigned long *)
 * Address: 000db418
 */
TGeoPortDebugLink::WaitFor2BytePacket(unsigned long *) {
    /*
         db418:	e1a0c00d 	mov	ip, sp
         db41c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         db420:	e24cb004 	sub	fp, ip, #4	; 0x4
         db424:	e1a04000 	mov	r4, r0
         db428:	e1a05001 	mov	r5, r1
         db42c:	e24dd004 	sub	sp, sp, #4	; 0x4
         db430:	e1a0100d 	mov	r1, sp
         db434:	eb663c31 	bl	1a6a500 <TGeoPortDebugLink::$ReadNextByteWithTimeOut(unsigned char *)>
         db438:	e1b06000 	movs	r6, r0
         db43c:	1a000011 	bne	db488 <TGeoPortDebugLink::WaitFor2BytePacket(unsigned long *)+0x70>
         db440:	e5dd0000 	ldrb	r0, [sp]
         db444:	e1a07400 	mov	r7, r0, lsl #8
         db448:	e1a0100d 	mov	r1, sp
         db44c:	e1a00004 	mov	r0, r4
         db450:	eb663c2a 	bl	1a6a500 <TGeoPortDebugLink::$ReadNextByteWithTimeOut(unsigned char *)>
         db454:	e1b06000 	movs	r6, r0
         db458:	1a00000a 	bne	db488 <TGeoPortDebugLink::WaitFor2BytePacket(unsigned long *)+0x70>
         db45c:	e5dd0000 	ldrb	r0, [sp]
         db460:	e1877000 	orr	r7, r7, r0
         db464:	e1a0100d 	mov	r1, sp
         db468:	e1a00004 	mov	r0, r4
         db46c:	eb663c23 	bl	1a6a500 <TGeoPortDebugLink::$ReadNextByteWithTimeOut(unsigned char *)>
         db470:	e1b06000 	movs	r6, r0
         db474:	1a000003 	bne	db488 <TGeoPortDebugLink::WaitFor2BytePacket(unsigned long *)+0x70>
         db478:	e1a0100d 	mov	r1, sp
         db47c:	e1a00004 	mov	r0, r4
         db480:	eb663c1e 	bl	1a6a500 <TGeoPortDebugLink::$ReadNextByteWithTimeOut(unsigned char *)>
         db484:	e1a06000 	mov	r6, r0
         db488:	e1a00004 	mov	r0, r4
         db48c:	eb000056 	bl	db5ec <TGeoPortDebugLink::TimedOut(void)>
         db490:	e3300000 	teq	r0, #0	; 0x0
         db494:	13e0005b 	mvnne	r0, #91	; 0x5b
         db498:	12400c46 	subne	r0, r0, #17920	; 0x4600
         db49c:	1a00000f 	bne	db4e0 <TGeoPortDebugLink::WaitFor2BytePacket(unsigned long *)+0xc8>
         db4a0:	e3160080 	tst	r6, #128	; 0x80
         db4a4:	03e00055 	mvneq	r0, #85	; 0x55
         db4a8:	02400c46 	subeq	r0, r0, #17920	; 0x4600
         db4ac:	0a00000b 	beq	db4e0 <TGeoPortDebugLink::WaitFor2BytePacket(unsigned long *)+0xc8>
         db4b0:	e3160040 	tst	r6, #64	; 0x40
         db4b4:	13e00053 	mvnne	r0, #83	; 0x53
         db4b8:	12400c46 	subne	r0, r0, #17920	; 0x4600
         db4bc:	1a000007 	bne	db4e0 <TGeoPortDebugLink::WaitFor2BytePacket(unsigned long *)+0xc8>
         db4c0:	e3160020 	tst	r6, #32	; 0x20
         db4c4:	13e00f96 	mvnne	r0, #600	; 0x258
         db4c8:	12400b11 	subne	r0, r0, #17408	; 0x4400
         db4cc:	1a000003 	bne	db4e0 <TGeoPortDebugLink::WaitFor2BytePacket(unsigned long *)+0xc8>
         db4d0:	e1a00004 	mov	r0, r4
         db4d4:	e5857000 	str	r7, [r5]
         db4d8:	eb663c09 	bl	1a6a504 <TGeoPortDebugLink::$ReEnableReceiver(void)>
         db4dc:	e3a00000 	mov	r0, #0	; 0x0
         db4e0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TGeoPortDebugLink::Send2BytePacket(unsigned long)
 * Address: 000db4e4
 */
TGeoPortDebugLink::Send2BytePacket(unsigned long) {
    /*
         db4e4:	e5902020 	ldr	r2, [r0, #32]	; fField32
         db4e8:	e5d0002d 	ldrb	r0, [r0, #45]	; fField45
         db4ec:	e3300000 	teq	r0, #0	; 0x0
         db4f0:	0a000003 	beq	db504 <TGeoPortDebugLink::Send2BytePacket(unsigned long)+0x20>
         db4f4:	e2820a01 	add	r0, r2, #4096	; 0x1000
         db4f8:	e5d03000 	ldrb	r3, [r0]
         db4fc:	e3833010 	orr	r3, r3, #16	; 0x10
         db500:	e5c03000 	strb	r3, [r0]
         db504:	e1a03421 	mov	r3, r1, lsr #8
         db508:	e2820a06 	add	r0, r2, #24576	; 0x6000
         db50c:	e5c03000 	strb	r3, [r0]
         db510:	e5c01000 	strb	r1, [r0]
         db514:	e2820901 	add	r0, r2, #16384	; 0x4000
         db518:	e5d01400 	ldrb	r1, [r0, #1024]	; fField1024
         db51c:	e3110004 	tst	r1, #4	; 0x4
         db520:	11a0f00e 	movne	pc, lr
         db524:	e5d01400 	ldrb	r1, [r0, #1024]	; fField1024
         db528:	e3110004 	tst	r1, #4	; 0x4
         db52c:	0afffffc 	beq	db524 <TGeoPortDebugLink::Send2BytePacket(unsigned long)+0x40>
         db530:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TGeoPortDebugLink::SendDataFrame(unsigned char *, long, unsigned long)
 * Address: 000db534
 */
TGeoPortDebugLink::SendDataFrame(unsigned char *, long, unsigned long) {
    /*
         db534:	e92d4030 	stmdb	sp!, {r4, r5, lr}
         db538:	e5904020 	ldr	r4, [r0, #32]	; fField32
         db53c:	e284ea06 	add	lr, r4, #24576	; 0x6000
         db540:	e284cb11 	add	ip, r4, #17408	; 0x4400
         db544:	e5d0002d 	ldrb	r0, [r0, #45]	; fField45
         db548:	e3300000 	teq	r0, #0	; 0x0
         db54c:	0a000003 	beq	db560 <TGeoPortDebugLink::SendDataFrame(unsigned char *, long, unsigned long)+0x2c>
         db550:	e2840a01 	add	r0, r4, #4096	; 0x1000
         db554:	e5d05000 	ldrb	r5, [r0]
         db558:	e3855010 	orr	r5, r5, #16	; 0x10
         db55c:	e5c05000 	strb	r5, [r0]
         db560:	e3320000 	teq	r2, #0	; 0x0
         db564:	0a000009 	beq	db590 <TGeoPortDebugLink::SendDataFrame(unsigned char *, long, unsigned long)+0x5c>
         db568:	e4d10001 	ldrb	r0, [r1], #1	; fField1
         db56c:	e5dc5000 	ldrb	r5, [ip]
         db570:	e3150080 	tst	r5, #128	; 0x80
         db574:	1a000002 	bne	db584 <TGeoPortDebugLink::SendDataFrame(unsigned char *, long, unsigned long)+0x50>
         db578:	e5dc5000 	ldrb	r5, [ip]
         db57c:	e3150080 	tst	r5, #128	; 0x80
         db580:	0afffffc 	beq	db578 <TGeoPortDebugLink::SendDataFrame(unsigned char *, long, unsigned long)+0x44>
         db584:	e5ce0000 	strb	r0, [lr]
         db588:	e2522001 	subs	r2, r2, #1	; 0x1
         db58c:	1afffff5 	bne	db568 <TGeoPortDebugLink::SendDataFrame(unsigned char *, long, unsigned long)+0x34>
         db590:	e5dc0000 	ldrb	r0, [ip]
         db594:	e3100080 	tst	r0, #128	; 0x80
         db598:	1a000002 	bne	db5a8 <TGeoPortDebugLink::SendDataFrame(unsigned char *, long, unsigned long)+0x74>
         db59c:	e5dc0000 	ldrb	r0, [ip]
         db5a0:	e3100080 	tst	r0, #128	; 0x80
         db5a4:	0afffffc 	beq	db59c <TGeoPortDebugLink::SendDataFrame(unsigned char *, long, unsigned long)+0x68>
         db5a8:	e1a00423 	mov	r0, r3, lsr #8
         db5ac:	e5ce0000 	strb	r0, [lr]
         db5b0:	e5dc0000 	ldrb	r0, [ip]
         db5b4:	e3100080 	tst	r0, #128	; 0x80
         db5b8:	1a000002 	bne	db5c8 <TGeoPortDebugLink::SendDataFrame(unsigned char *, long, unsigned long)+0x94>
         db5bc:	e5dc0000 	ldrb	r0, [ip]
         db5c0:	e3100080 	tst	r0, #128	; 0x80
         db5c4:	0afffffc 	beq	db5bc <TGeoPortDebugLink::SendDataFrame(unsigned char *, long, unsigned long)+0x88>
         db5c8:	e5ce3000 	strb	r3, [lr]
         db5cc:	e2840901 	add	r0, r4, #16384	; 0x4000
         db5d0:	e5d01400 	ldrb	r1, [r0, #1024]	; fField1024
         db5d4:	e3110004 	tst	r1, #4	; 0x4
         db5d8:	18bd8030 	ldmneia	sp!, {r4, r5, pc}
         db5dc:	e5d01400 	ldrb	r1, [r0, #1024]	; fField1024
         db5e0:	e3110004 	tst	r1, #4	; 0x4
         db5e4:	0afffffc 	beq	db5dc <TGeoPortDebugLink::SendDataFrame(unsigned char *, long, unsigned long)+0xa8>
         db5e8:	e8bd8030 	ldmia	sp!, {r4, r5, pc}
    */
}

/**
 * Symbol: TGeoPortDebugLink::TimedOut(void)
 * Address: 000db5ec
 */
TGeoPortDebugLink::TimedOut(void) {
    /*
         db5ec:	e5901024 	ldr	r1, [r0, #36]	; fField36
         db5f0:	e5911000 	ldr	r1, [r1]
         db5f4:	e5902040 	ldr	r2, [r0, #64]	; fField64
         db5f8:	e0411002 	sub	r1, r1, r2
         db5fc:	e5900044 	ldr	r0, [r0, #68]	; fField68
         db600:	e1510000 	cmp	r1, r0
         db604:	33a00000 	movcc	r0, #0	; 0x0
         db608:	23a00001 	movcs	r0, #1	; 0x1
         db60c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TGeoPortDebugLink::Init(void)
 * Address: 000db610
 */
TGeoPortDebugLink::Init(void) {
    /*
         db610:	e3a01000 	mov	r1, #0	; 0x0
         db614:	e5801010 	str	r1, [r0, #16]	; fField16
         db618:	e5801014 	str	r1, [r0, #20]	; fField20
         db61c:	e5801018 	str	r1, [r0, #24]	; fField24
         db620:	e3a027c7 	mov	r2, #52166656	; 0x31c0000
         db624:	e2822303 	add	r2, r2, #201326592	; 0xc000000
         db628:	e280001c 	add	r0, r0, #28	; 0x1c
         db62c:	e8800006 	stmia	r0, {r1, r2}
         db630:	e240001c 	sub	r0, r0, #28	; 0x1c
         db634:	e2422bfa 	sub	r2, r2, #256000	; 0x3e800
         db638:	e580103c 	str	r1, [r0, #60]	; fField60
         db63c:	e5802024 	str	r2, [r0, #36]	; fField36
         db640:	e5c0102c 	strb	r1, [r0, #44]	; fField44
         db644:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TGeoPortDebugLink::ResetTimeOut(unsigned long)
 * Address: 000db648
 */
TGeoPortDebugLink::ResetTimeOut(unsigned long) {
    /*
         db648:	e5902024 	ldr	r2, [r0, #36]	; fField36
         db64c:	e5922000 	ldr	r2, [r2]
         db650:	e5a02040 	str	r2, [r0, #64]!	; fField64
         db654:	e5801004 	str	r1, [r0, #4]	; fField4
         db658:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TGeoPortDebugLink::ShortTimerDelay(unsigned long)
 * Address: 000db65c
 */
TGeoPortDebugLink::ShortTimerDelay(unsigned long) {
    /*
         db65c:	e5900024 	ldr	r0, [r0, #36]	; fField36
         db660:	e5902000 	ldr	r2, [r0]
         db664:	e5903000 	ldr	r3, [r0]
         db668:	e0433002 	sub	r3, r3, r2
         db66c:	e1530001 	cmp	r3, r1
         db670:	21a0f00e 	movcs	pc, lr
         db674:	e5903000 	ldr	r3, [r0]
         db678:	e0433002 	sub	r3, r3, r2
         db67c:	e1530001 	cmp	r3, r1
         db680:	3afffffb 	bcc	db674 <TGeoPortDebugLink::ShortTimerDelay(unsigned long)+0x18>
         db684:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TGeoPortDebugLink::Delete(void)
 * Address: 000db688
 */
TGeoPortDebugLink::Delete(void) {
    /*
         db688:	e1a0c00d 	mov	ip, sp
         db68c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         db690:	e24cb004 	sub	fp, ip, #4	; 0x4
         db694:	e1a04000 	mov	r4, r0
         db698:	eb663788 	bl	1a694c0 <TGeoPortDebugLink::$Remove(void)>
         db69c:	e2841048 	add	r1, r4, #72	; 0x48
         db6a0:	e1a00004 	mov	r0, r4
         db6a4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         db6a8:	ea6c09fc 	b	1bddea0 <$UnlockHeapRange>
    */
}

/**
 * Symbol: TGeoPortDebugLink::Install(unsigned long, unsigned long, void *, long (*)(void *))
 * Address: 000db6ac
 */
TGeoPortDebugLink::Install(unsigned long, unsigned long, void *, long (*)(void *)) {
    /*
         db6ac:	e1a0c00d 	mov	ip, sp
         db6b0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         db6b4:	e24cb004 	sub	fp, ip, #4	; 0x4
         db6b8:	e1a04000 	mov	r4, r0
         db6bc:	e1a06002 	mov	r6, r2
         db6c0:	e1a05003 	mov	r5, r3
         db6c4:	e59b7004 	ldr	r7, [fp, #4]	; fField4
         db6c8:	ebffffde 	bl	db648 <TGeoPortDebugLink::ResetTimeOut(unsigned long)>
         db6cc:	e24dd010 	sub	sp, sp, #16	; 0x10
         db6d0:	e5940014 	ldr	r0, [r4, #20]	; fField20
         db6d4:	e3300000 	teq	r0, #0	; 0x0
         db6d8:	13a05f5e 	movne	r5, #376	; 0x178
         db6dc:	12455901 	subne	r5, r5, #16384	; 0x4000
         db6e0:	1a0000ad 	bne	db99c <TGeoPortDebugLink::Install(unsigned long, unsigned long, void *, long (*)(void *))+0x2f0>
         db6e4:	e584501c 	str	r5, [r4, #28]	; fField28
         db6e8:	e5847018 	str	r7, [r4, #24]	; fField24
         db6ec:	e1a00004 	mov	r0, r4
         db6f0:	e3a01001 	mov	r1, #1	; 0x1
         db6f4:	eb663778 	bl	1a694dc <TGeoPortDebugLink::$GrabSerialPort(unsigned char)>
         db6f8:	e3a09000 	mov	r9, #0	; 0x0
         db6fc:	e5940020 	ldr	r0, [r4, #32]	; fField32
         db700:	e2800a03 	add	r0, r0, #12288	; 0x3000
         db704:	e5c09000 	strb	r9, [r0]
         db708:	e3a03001 	mov	r3, #1	; 0x1
         db70c:	e92d0008 	stmdb	sp!, {r3}
         db710:	e2840014 	add	r0, r4, #20	; 0x14
         db714:	e59f31ac 	ldr	r3, [pc, #1ac]	; db8c8 <TGeoPortDebugLink::Install(unsigned long, unsigned long, void *, long (*)(void *))+0x21c>	; fField1
         db718:	e1a02004 	mov	r2, r4
         db71c:	e3a01802 	mov	r1, #131072	; 0x20000
         db720:	eb6cbb7d 	bl	1c0a51c <$RegisterInterrupt(InterruptObject **, unsigned long, void *, long (*)(void *), void *)>
         db724:	e28dd004 	add	sp, sp, #4	; 0x4
         db728:	e1b05000 	movs	r5, r0
         db72c:	1a00009a 	bne	db99c <TGeoPortDebugLink::Install(unsigned long, unsigned long, void *, long (*)(void *))+0x2f0>
         db730:	e3a02001 	mov	r2, #1	; 0x1
         db734:	e1a01002 	mov	r1, r2
         db738:	e5940014 	ldr	r0, [r4, #20]	; fField20
         db73c:	eb6cb76d 	bl	1c094f8 <$ChangeInterruptPriority(InterruptObject *, InterruptPriority)>
         db740:	e1b05000 	movs	r5, r0
         db744:	1a000094 	bne	db99c <TGeoPortDebugLink::Install(unsigned long, unsigned long, void *, long (*)(void *))+0x2f0>
         db748:	e3a00001 	mov	r0, #1	; 0x1
         db74c:	eb6cbfa7 	bl	1c0b5f0 <$IOPowerOn(unsigned long)>
         db750:	e1a00004 	mov	r0, r4
         db754:	eb663761 	bl	1a694e0 <TGeoPortDebugLink::$InitForAsync(void)>
         db758:	e1a08c26 	mov	r8, r6, lsr #24
         db75c:	e1a00826 	mov	r0, r6, lsr #16
         db760:	e20070ff 	and	r7, r0, #255	; 0xff
         db764:	e1a00426 	mov	r0, r6, lsr #8
         db768:	e200a0ff 	and	sl, r0, #255	; 0xff
         db76c:	e20660ff 	and	r6, r6, #255	; 0xff
         db770:	e1a01005 	mov	r1, r5
         db774:	e1a00004 	mov	r0, r4
         db778:	eb66375a 	bl	1a694e8 <TGeoPortDebugLink::$BeaconDetect(long)>
         db77c:	e3300000 	teq	r0, #0	; 0x0
         db780:	03e0505b 	mvneq	r5, #91	; 0x5b
         db784:	02455c46 	subeq	r5, r5, #17920	; 0x4600
         db788:	0a000083 	beq	db99c <TGeoPortDebugLink::Install(unsigned long, unsigned long, void *, long (*)(void *))+0x2f0>
         db78c:	e5940020 	ldr	r0, [r4, #32]	; fField32
         db790:	e2800b0a 	add	r0, r0, #10240	; 0x2800
         db794:	e5d01000 	ldrb	r1, [r0]
         db798:	e3811001 	orr	r1, r1, #1	; 0x1
         db79c:	e5c01000 	strb	r1, [r0]
         db7a0:	e1a00004 	mov	r0, r4
         db7a4:	e3a010a5 	mov	r1, #165	; 0xa5
         db7a8:	eb66374f 	bl	1a694ec <TGeoPortDebugLink::$PutByteStart(unsigned char)>
         db7ac:	e1a00004 	mov	r0, r4
         db7b0:	e3a0105a 	mov	r1, #90	; 0x5a
         db7b4:	eb66374d 	bl	1a694f0 <TGeoPortDebugLink::$PutByte(unsigned char)>
         db7b8:	e1a01008 	mov	r1, r8
         db7bc:	e1a00004 	mov	r0, r4
         db7c0:	eb66374a 	bl	1a694f0 <TGeoPortDebugLink::$PutByte(unsigned char)>
         db7c4:	e1a01007 	mov	r1, r7
         db7c8:	e1a00004 	mov	r0, r4
         db7cc:	eb663747 	bl	1a694f0 <TGeoPortDebugLink::$PutByte(unsigned char)>
         db7d0:	e1a0100a 	mov	r1, sl
         db7d4:	e1a00004 	mov	r0, r4
         db7d8:	eb663744 	bl	1a694f0 <TGeoPortDebugLink::$PutByte(unsigned char)>
         db7dc:	e1a01006 	mov	r1, r6
         db7e0:	e1a00004 	mov	r0, r4
         db7e4:	eb663741 	bl	1a694f0 <TGeoPortDebugLink::$PutByte(unsigned char)>
         db7e8:	e1a00004 	mov	r0, r4
         db7ec:	eb663740 	bl	1a694f4 <TGeoPortDebugLink::$PutByteEnd(void)>
         db7f0:	e1a0100d 	mov	r1, sp
         db7f4:	e1a00004 	mov	r0, r4
         db7f8:	e3a0200d 	mov	r2, #13	; 0xd
         db7fc:	eb66373e 	bl	1a694fc <TGeoPortDebugLink::$GetBeaconMsg(unsigned char *, unsigned long)>
         db800:	e1a05000 	mov	r5, r0
         db804:	e3300001 	teq	r0, #1	; 0x1
         db808:	0affffd8 	beq	db770 <TGeoPortDebugLink::Install(unsigned long, unsigned long, void *, long (*)(void *))+0xc4>
         db80c:	e3350000 	teq	r5, #0	; 0x0
         db810:	1a000061 	bne	db99c <TGeoPortDebugLink::Install(unsigned long, unsigned long, void *, long (*)(void *))+0x2f0>
         db814:	e5dd0002 	ldrb	r0, [sp, #2]
         db818:	e3a03076 	mov	r3, #118	; 0x76
         db81c:	e2433c3f 	sub	r3, r3, #16128	; 0x3f00
         db820:	e33000aa 	teq	r0, #170	; 0xaa
         db824:	1a000025 	bne	db8c0 <TGeoPortDebugLink::Install(unsigned long, unsigned long, void *, long (*)(void *))+0x214>
         db828:	e5dd0003 	ldrb	r0, [sp, #3]
         db82c:	e5c4002a 	strb	r0, [r4, #42]
         db830:	e5dd0004 	ldrb	r0, [sp, #4]	; fField4
         db834:	e1a01c00 	mov	r1, r0, lsl #24
         db838:	e5dd0005 	ldrb	r0, [sp, #5]
         db83c:	e1810800 	orr	r0, r1, r0, lsl #16
         db840:	e5dd1006 	ldrb	r1, [sp, #6]
         db844:	e1800401 	orr	r0, r0, r1, lsl #8
         db848:	e5dd1007 	ldrb	r1, [sp, #7]
         db84c:	e1802001 	orr	r2, r0, r1
         db850:	e5842030 	str	r2, [r4, #48]
         db854:	e5dd1009 	ldrb	r1, [sp, #9]
         db858:	e5dd0008 	ldrb	r0, [sp, #8]
         db85c:	e1811400 	orr	r1, r1, r0, lsl #8
         db860:	e5841034 	str	r1, [r4, #52]	; fField52
         db864:	e5dd000b 	ldrb	r0, [sp, #11]
         db868:	e5ddc00a 	ldrb	ip, [sp, #10]
         db86c:	e180040c 	orr	r0, r0, ip, lsl #8
         db870:	e252c707 	subs	ip, r2, #1835008	; 0x1c0000
         db874:	235c0a02 	cmpcs	ip, #8192	; 0x2000
         db878:	e5840038 	str	r0, [r4, #56]	; fField56
         db87c:	33a0c000 	movcc	ip, #0	; 0x0
         db880:	23a0c001 	movcs	ip, #1	; 0x1
         db884:	e5c4c02d 	strb	ip, [r4, #45]	; fField45
         db888:	e59fe03c 	ldr	lr, [pc, #3c]	; db8cc <TGeoPortDebugLink::Install(unsigned long, unsigned long, void *, long (*)(void *))+0x220>
         db88c:	e49ec004 	ldr	ip, [lr], #4	; fField4
         db890:	e33c0000 	teq	ip, #0	; 0x0
         db894:	0a000005 	beq	db8b0 <TGeoPortDebugLink::Install(unsigned long, unsigned long, void *, long (*)(void *))+0x204>
         db898:	e152000c 	cmp	r2, ip
         db89c:	e49e6004 	ldr	r6, [lr], #4	; fField4
         db8a0:	2a000002 	bcs	db8b0 <TGeoPortDebugLink::Install(unsigned long, unsigned long, void *, long (*)(void *))+0x204>
         db8a4:	e49ec004 	ldr	ip, [lr], #4	; fField4
         db8a8:	e33c0000 	teq	ip, #0	; 0x0
         db8ac:	1afffff9 	bne	db898 <TGeoPortDebugLink::Install(unsigned long, unsigned long, void *, long (*)(void *))+0x1ec>
         db8b0:	e5c46029 	strb	r6, [r4, #41]	; fField41
         db8b4:	e584c030 	str	ip, [r4, #48]
         db8b8:	e33c0000 	teq	ip, #0	; 0x0
         db8bc:	1a000003 	bne	db8d0 <TGeoPortDebugLink::Install(unsigned long, unsigned long, void *, long (*)(void *))+0x224>
         db8c0:	e1a05003 	mov	r5, r3
         db8c4:	ea000034 	b	db99c <TGeoPortDebugLink::Install(unsigned long, unsigned long, void *, long (*)(void *))+0x2f0>
         db8c8:	01a694d8 	ldreqd	r9, [r6, r8]!
         db8cc:	00371614 	eoreqs	r1, r7, r4, lsl r6
         db8d0:	e3a02b01 	mov	r2, #1024	; 0x400
         db8d4:	e2422001 	sub	r2, r2, #1	; 0x1
         db8d8:	e1510002 	cmp	r1, r2
         db8dc:	85842034 	strhi	r2, [r4, #52]	; fField52
         db8e0:	e3a01b01 	mov	r1, #1024	; 0x400
         db8e4:	e2411001 	sub	r1, r1, #1	; 0x1
         db8e8:	e1500001 	cmp	r0, r1
         db8ec:	85841038 	strhi	r1, [r4, #56]	; fField56
         db8f0:	e5cd9002 	strb	r9, [sp, #2]
         db8f4:	e5cd9003 	strb	r9, [sp, #3]
         db8f8:	e5940030 	ldr	r0, [r4, #48]
         db8fc:	e1a00c20 	mov	r0, r0, lsr #24
         db900:	e5cd0004 	strb	r0, [sp, #4]	; fField4
         db904:	e5940030 	ldr	r0, [r4, #48]
         db908:	e1a00820 	mov	r0, r0, lsr #16
         db90c:	e5cd0005 	strb	r0, [sp, #5]
         db910:	e5940030 	ldr	r0, [r4, #48]
         db914:	e1a00420 	mov	r0, r0, lsr #8
         db918:	e5cd0006 	strb	r0, [sp, #6]
         db91c:	e5940030 	ldr	r0, [r4, #48]
         db920:	e5cd0007 	strb	r0, [sp, #7]
         db924:	e5940034 	ldr	r0, [r4, #52]	; fField52
         db928:	e1a00420 	mov	r0, r0, lsr #8
         db92c:	e5cd0008 	strb	r0, [sp, #8]
         db930:	e5940034 	ldr	r0, [r4, #52]	; fField52
         db934:	e5cd0009 	strb	r0, [sp, #9]
         db938:	e5940038 	ldr	r0, [r4, #56]	; fField56
         db93c:	e1a00420 	mov	r0, r0, lsr #8
         db940:	e5cd000a 	strb	r0, [sp, #10]
         db944:	e5940038 	ldr	r0, [r4, #56]	; fField56
         db948:	e5cd000b 	strb	r0, [sp, #11]
         db94c:	e3a06002 	mov	r6, #2	; 0x2
         db950:	e7dd1006 	ldrb	r1, [sp, r6]
         db954:	e1a00004 	mov	r0, r4
         db958:	eb6636e4 	bl	1a694f0 <TGeoPortDebugLink::$PutByte(unsigned char)>
         db95c:	e2866001 	add	r6, r6, #1	; 0x1
         db960:	e356000c 	cmp	r6, #12	; 0xc
         db964:	bafffff9 	blt	db950 <TGeoPortDebugLink::Install(unsigned long, unsigned long, void *, long (*)(void *))+0x2a4>
         db968:	e5c49028 	strb	r9, [r4, #40]	; fField40
         db96c:	e1a00004 	mov	r0, r4
         db970:	eb6636df 	bl	1a694f4 <TGeoPortDebugLink::$PutByteEnd(void)>
         db974:	e1a00004 	mov	r0, r4
         db978:	eb6636d9 	bl	1a694e4 <TGeoPortDebugLink::$InitForHDLC(void)>
         db97c:	e3a02001 	mov	r2, #1	; 0x1
         db980:	e5c4202c 	strb	r2, [r4, #44]	; fField44
         db984:	e1a00004 	mov	r0, r4
         db988:	e3a01a09 	mov	r1, #36864	; 0x9000
         db98c:	e2411004 	sub	r1, r1, #4	; 0x4
         db990:	ebffff31 	bl	db65c <TGeoPortDebugLink::ShortTimerDelay(unsigned long)>
         db994:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
         db998:	eb6cbadd 	bl	1c0a514 <$QuickEnableInterrupt>
         db99c:	e1a00005 	mov	r0, r5
         db9a0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TGeoPortDebugLink::Remove(void)
 * Address: 000db9a4
 */
TGeoPortDebugLink::Remove(void) {
    /*
         db9a4:	e1a0c00d 	mov	ip, sp
         db9a8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         db9ac:	e24cb004 	sub	fp, ip, #4	; 0x4
         db9b0:	e1a04000 	mov	r4, r0
         db9b4:	e3a01040 	mov	r1, #64	; 0x40
         db9b8:	e5900020 	ldr	r0, [r0, #32]	; fField32
         db9bc:	e5c01000 	strb	r1, [r0]
         db9c0:	e3a05000 	mov	r5, #0	; 0x0
         db9c4:	e5c4502c 	strb	r5, [r4, #44]	; fField44
         db9c8:	e5940014 	ldr	r0, [r4, #20]	; fField20
         db9cc:	e3300000 	teq	r0, #0	; 0x0
         db9d0:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         db9d4:	eb6cb6c8 	bl	1c094fc <$DeregisterInterrupt(InterruptObject *)>
         db9d8:	e3a00001 	mov	r0, #1	; 0x1
         db9dc:	e5845014 	str	r5, [r4, #20]	; fField20
         db9e0:	eb6cbf01 	bl	1c0b5ec <$IOPowerOff(unsigned long)>
         db9e4:	e1a00004 	mov	r0, r4
         db9e8:	e3a01000 	mov	r1, #0	; 0x0
         db9ec:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         db9f0:	ea6636b9 	b	1a694dc <TGeoPortDebugLink::$GrabSerialPort(unsigned char)>
    */
}

/**
 * Symbol: TGeoPortDebugLink::WriteDebugFrame(unsigned char *, long)
 * Address: 000db9f4
 */
TGeoPortDebugLink::WriteDebugFrame(unsigned char *, long) {
    /*
         db9f4:	e3a03000 	mov	r3, #0	; 0x0
         db9f8:	ea6636b1 	b	1a694c4 <TGeoPortDebugLink::$WriteDebugFrame(unsigned char *, long, unsigned long)>
    */
}

/**
 * Symbol: TGeoPortDebugLink::WriteDebugFrame(unsigned char *, long, unsigned long)
 * Address: 000db9fc
 */
TGeoPortDebugLink::WriteDebugFrame(unsigned char *, long, unsigned long) {
    /*
         db9fc:	e1a0c00d 	mov	ip, sp
         dba00:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         dba04:	e24cb004 	sub	fp, ip, #4	; 0x4
         dba08:	e1a04000 	mov	r4, r0
         dba0c:	e1a06001 	mov	r6, r1
         dba10:	e1a05002 	mov	r5, r2
         dba14:	e24dd004 	sub	sp, sp, #4	; 0x4
         dba18:	e3a08000 	mov	r8, #0	; 0x0
         dba1c:	e3a00000 	mov	r0, #0	; 0x0
         dba20:	e5941020 	ldr	r1, [r4, #32]	; fField32
         dba24:	e2811a03 	add	r1, r1, #12288	; 0x3000
         dba28:	e5c10000 	strb	r0, [r1]
         dba2c:	e5940038 	ldr	r0, [r4, #56]	; fField56
         dba30:	e1500005 	cmp	r0, r5
         dba34:	33a0707a 	movcc	r7, #122	; 0x7a
         dba38:	32477c3f 	subcc	r7, r7, #16128	; 0x3f00
         dba3c:	3a00003d 	bcc	dbb38 <TGeoPortDebugLink::WriteDebugFrame(unsigned char *, long, unsigned long)+0x13c>
         dba40:	e3130004 	tst	r3, #4	; 0x4
         dba44:	03a00b0b 	moveq	r0, #11264	; 0x2c00
         dba48:	13a00b0f 	movne	r0, #15360	; 0x3c00
         dba4c:	e1801005 	orr	r1, r0, r5
         dba50:	e1a00004 	mov	r0, r4
         dba54:	e58d1000 	str	r1, [sp]
         dba58:	eb663aab 	bl	1a6a50c <TGeoPortDebugLink::$Send2BytePacket(unsigned long)>
         dba5c:	e1a00004 	mov	r0, r4
         dba60:	e59f1074 	ldr	r1, [pc, #74]	; dbadc <TGeoPortDebugLink::WriteDebugFrame(unsigned char *, long, unsigned long)+0xe0>
         dba64:	ebfffef7 	bl	db648 <TGeoPortDebugLink::ResetTimeOut(unsigned long)>
         dba68:	e1a0100d 	mov	r1, sp
         dba6c:	e1a00004 	mov	r0, r4
         dba70:	eb663aa4 	bl	1a6a508 <TGeoPortDebugLink::$WaitFor2BytePacket(unsigned long *)>
         dba74:	e1b07000 	movs	r7, r0
         dba78:	1a00002e 	bne	dbb38 <TGeoPortDebugLink::WriteDebugFrame(unsigned char *, long, unsigned long)+0x13c>
         dba7c:	e59d0000 	ldr	r0, [sp]
         dba80:	e59fa058 	ldr	sl, [pc, #58]	; dbae0 <TGeoPortDebugLink::WriteDebugFrame(unsigned char *, long, unsigned long)+0xe4>
         dba84:	e3300002 	teq	r0, #2	; 0x2
         dba88:	0a000011 	beq	dbad4 <TGeoPortDebugLink::WriteDebugFrame(unsigned char *, long, unsigned long)+0xd8>
         dba8c:	e3300001 	teq	r0, #1	; 0x1
         dba90:	0a000017 	beq	dbaf4 <TGeoPortDebugLink::WriteDebugFrame(unsigned char *, long, unsigned long)+0xf8>
         dba94:	e3100cff 	tst	r0, #65280	; 0xff00
         dba98:	e3e09f95 	mvn	r9, #596	; 0x254
         dba9c:	e2499b11 	sub	r9, r9, #17408	; 0x4400
         dbaa0:	0a000011 	beq	dbaec <TGeoPortDebugLink::WriteDebugFrame(unsigned char *, long, unsigned long)+0xf0>
         dbaa4:	e3a08001 	mov	r8, #1	; 0x1
         dbaa8:	e594003c 	ldr	r0, [r4, #60]	; fField60
         dbaac:	e0800008 	add	r0, r0, r8
         dbab0:	e1a0100d 	mov	r1, sp
         dbab4:	e584003c 	str	r0, [r4, #60]	; fField60
         dbab8:	e1a00004 	mov	r0, r4
         dbabc:	eb663a91 	bl	1a6a508 <TGeoPortDebugLink::$WaitFor2BytePacket(unsigned long *)>
         dbac0:	e1b07000 	movs	r7, r0
         dbac4:	1a000018 	bne	dbb2c <TGeoPortDebugLink::WriteDebugFrame(unsigned char *, long, unsigned long)+0x130>
         dbac8:	e59d0000 	ldr	r0, [sp]
         dbacc:	e3300002 	teq	r0, #2	; 0x2
         dbad0:	1a000003 	bne	dbae4 <TGeoPortDebugLink::WriteDebugFrame(unsigned char *, long, unsigned long)+0xe8>
         dbad4:	e1a0700a 	mov	r7, sl
         dbad8:	ea000016 	b	dbb38 <TGeoPortDebugLink::WriteDebugFrame(unsigned char *, long, unsigned long)+0x13c>
         dbadc:	00707ce0 	rsbeqs	r7, r0, r0, ror #25
         dbae0:	ffffc17b 	swinv	0x00ffc17b
         dbae4:	e3300001 	teq	r0, #1	; 0x1
         dbae8:	0a000001 	beq	dbaf4 <TGeoPortDebugLink::WriteDebugFrame(unsigned char *, long, unsigned long)+0xf8>
         dbaec:	e1a07009 	mov	r7, r9
         dbaf0:	ea000010 	b	dbb38 <TGeoPortDebugLink::WriteDebugFrame(unsigned char *, long, unsigned long)+0x13c>
         dbaf4:	e1a00004 	mov	r0, r4
         dbaf8:	e3a010b9 	mov	r1, #185	; 0xb9
         dbafc:	ebfffed6 	bl	db65c <TGeoPortDebugLink::ShortTimerDelay(unsigned long)>
         dbb00:	e5d4002b 	ldrb	r0, [r4, #43]	; fField43
         dbb04:	e3300000 	teq	r0, #0	; 0x0
         dbb08:	11a00004 	movne	r0, r4
         dbb0c:	1b66366f 	blne	1a694d0 <TGeoPortDebugLink::$EnbIntOnNextRxC(void)>
         dbb10:	e1a02005 	mov	r2, r5
         dbb14:	e1a01006 	mov	r1, r6
         dbb18:	e1a00004 	mov	r0, r4
         dbb1c:	e3a03000 	mov	r3, #0	; 0x0
         dbb20:	eb663a7a 	bl	1a6a510 <TGeoPortDebugLink::$SendDataFrame(unsigned char *, long, unsigned long)>
         dbb24:	e3380000 	teq	r8, #0	; 0x0
         dbb28:	0a000002 	beq	dbb38 <TGeoPortDebugLink::WriteDebugFrame(unsigned char *, long, unsigned long)+0x13c>
         dbb2c:	e1a00004 	mov	r0, r4
         dbb30:	e3a01002 	mov	r1, #2	; 0x2
         dbb34:	eb663a74 	bl	1a6a50c <TGeoPortDebugLink::$Send2BytePacket(unsigned long)>
         dbb38:	e5d4002b 	ldrb	r0, [r4, #43]	; fField43
         dbb3c:	e3300000 	teq	r0, #0	; 0x0
         dbb40:	15940020 	ldrne	r0, [r4, #32]	; fField32
         dbb44:	12800a03 	addne	r0, r0, #12288	; 0x3000
         dbb48:	15d00000 	ldrneb	r0, [r0]
         dbb4c:	13300040 	teqne	r0, #64	; 0x40
         dbb50:	11a00004 	movne	r0, r4
         dbb54:	1b66365d 	blne	1a694d0 <TGeoPortDebugLink::$EnbIntOnNextRxC(void)>
         dbb58:	e1a00007 	mov	r0, r7
         dbb5c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TGeoPortDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)
 * Address: 000dbb60
 */
TGeoPortDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long) {
    /*
         dbb60:	e1a0c00d 	mov	ip, sp
         dbb64:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         dbb68:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         dbb6c:	e24cb014 	sub	fp, ip, #20	; 0x14
         dbb70:	e1a04000 	mov	r4, r0
         dbb74:	e1a05001 	mov	r5, r1
         dbb78:	e59b1014 	ldr	r1, [fp, #20]	; fField20
         dbb7c:	e24dd008 	sub	sp, sp, #8	; 0x8
         dbb80:	e5900020 	ldr	r0, [r0, #32]	; fField32
         dbb84:	e280aa07 	add	sl, r0, #28672	; 0x7000
         dbb88:	e2809b12 	add	r9, r0, #18432	; 0x4800
         dbb8c:	e58d5004 	str	r5, [sp, #4]	; fField4
         dbb90:	e0858002 	add	r8, r5, r2
         dbb94:	e3a07000 	mov	r7, #0	; 0x0
         dbb98:	e5940034 	ldr	r0, [r4, #52]	; fField52
         dbb9c:	e2800004 	add	r0, r0, #4	; 0x4
         dbba0:	e1500002 	cmp	r0, r2
         dbba4:	83a0607a 	movhi	r6, #122	; 0x7a
         dbba8:	82466c3f 	subhi	r6, r6, #16128	; 0x3f00
         dbbac:	8a000044 	bhi	dbcc4 <TGeoPortDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0x164>
         dbbb0:	e1a00004 	mov	r0, r4
         dbbb4:	ebfffea3 	bl	db648 <TGeoPortDebugLink::ResetTimeOut(unsigned long)>
         dbbb8:	e1a0100d 	mov	r1, sp
         dbbbc:	e1a00004 	mov	r0, r4
         dbbc0:	eb663a50 	bl	1a6a508 <TGeoPortDebugLink::$WaitFor2BytePacket(unsigned long *)>
         dbbc4:	e1b06000 	movs	r6, r0
         dbbc8:	1a00003d 	bne	dbcc4 <TGeoPortDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0x164>
         dbbcc:	e1a00004 	mov	r0, r4
         dbbd0:	e3a010b9 	mov	r1, #185	; 0xb9
         dbbd4:	ebfffea0 	bl	db65c <TGeoPortDebugLink::ShortTimerDelay(unsigned long)>
         dbbd8:	e1a00004 	mov	r0, r4
         dbbdc:	e3a01001 	mov	r1, #1	; 0x1
         dbbe0:	eb663a49 	bl	1a6a50c <TGeoPortDebugLink::$Send2BytePacket(unsigned long)>
         dbbe4:	e1a00004 	mov	r0, r4
         dbbe8:	e3a06efb 	mov	r6, #4016	; 0xfb0
         dbbec:	e2866ab3 	add	r6, r6, #733184	; 0xb3000
         dbbf0:	e1a01006 	mov	r1, r6
         dbbf4:	ea000016 	b	dbc54 <TGeoPortDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0xf4>
         dbbf8:	e5d96000 	ldrb	r6, [r9]
         dbbfc:	e31600e0 	tst	r6, #224	; 0xe0
         dbc00:	1a000015 	bne	dbc5c <TGeoPortDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0xfc>
         dbc04:	e3160002 	tst	r6, #2	; 0x2
         dbc08:	1a000004 	bne	dbc20 <TGeoPortDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0xc0>
         dbc0c:	e5da0000 	ldrb	r0, [sl]
         dbc10:	e4c50001 	strb	r0, [r5], #1	; fField1
         dbc14:	e1350008 	teq	r5, r8
         dbc18:	1afffff6 	bne	dbbf8 <TGeoPortDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0x98>
         dbc1c:	ea00000e 	b	dbc5c <TGeoPortDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0xfc>
         dbc20:	e1a00004 	mov	r0, r4
         dbc24:	ebfffe70 	bl	db5ec <TGeoPortDebugLink::TimedOut(void)>
         dbc28:	e3300000 	teq	r0, #0	; 0x0
         dbc2c:	0afffff1 	beq	dbbf8 <TGeoPortDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0x98>
         dbc30:	e3370001 	teq	r7, #1	; 0x1
         dbc34:	0a000008 	beq	dbc5c <TGeoPortDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0xfc>
         dbc38:	e2877001 	add	r7, r7, #1	; 0x1
         dbc3c:	e1a00004 	mov	r0, r4
         dbc40:	e3a01001 	mov	r1, #1	; 0x1
         dbc44:	eb663a30 	bl	1a6a50c <TGeoPortDebugLink::$Send2BytePacket(unsigned long)>
         dbc48:	e1a00004 	mov	r0, r4
         dbc4c:	e3a01efb 	mov	r1, #4016	; 0xfb0
         dbc50:	e2811ab3 	add	r1, r1, #733184	; 0xb3000
         dbc54:	ebfffe7b 	bl	db648 <TGeoPortDebugLink::ResetTimeOut(unsigned long)>
         dbc58:	eaffffe6 	b	dbbf8 <TGeoPortDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0x98>
         dbc5c:	e1a00004 	mov	r0, r4
         dbc60:	ebfffe61 	bl	db5ec <TGeoPortDebugLink::TimedOut(void)>
         dbc64:	e3300000 	teq	r0, #0	; 0x0
         dbc68:	13e0605b 	mvnne	r6, #91	; 0x5b
         dbc6c:	12466c46 	subne	r6, r6, #17920	; 0x4600
         dbc70:	1a000011 	bne	dbcbc <TGeoPortDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0x15c>
         dbc74:	e3160080 	tst	r6, #128	; 0x80
         dbc78:	03e06055 	mvneq	r6, #85	; 0x55
         dbc7c:	02466c46 	subeq	r6, r6, #17920	; 0x4600
         dbc80:	0a00000d 	beq	dbcbc <TGeoPortDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0x15c>
         dbc84:	e3160040 	tst	r6, #64	; 0x40
         dbc88:	13e06053 	mvnne	r6, #83	; 0x53
         dbc8c:	12466c46 	subne	r6, r6, #17920	; 0x4600
         dbc90:	1a000009 	bne	dbcbc <TGeoPortDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0x15c>
         dbc94:	e3160020 	tst	r6, #32	; 0x20
         dbc98:	13e06f96 	mvnne	r6, #600	; 0x258
         dbc9c:	12466b11 	subne	r6, r6, #17408	; 0x4400
         dbca0:	1a000005 	bne	dbcbc <TGeoPortDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0x15c>
         dbca4:	e3a06000 	mov	r6, #0	; 0x0
         dbca8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         dbcac:	e0450000 	sub	r0, r5, r0
         dbcb0:	e2400003 	sub	r0, r0, #3	; 0x3
         dbcb4:	e59b3010 	ldr	r3, [fp, #16]	; fField16
         dbcb8:	e5830000 	str	r0, [r3]
         dbcbc:	e1a00004 	mov	r0, r4
         dbcc0:	eb663a0f 	bl	1a6a504 <TGeoPortDebugLink::$ReEnableReceiver(void)>
         dbcc4:	e1a00006 	mov	r0, r6
         dbcc8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: ClassInfo__17TGeoPortDebugLinkSFv
 * Address: 00384fe0
 */
void TGeoPortDebugLink::ClassInfo() {
    /*
        384fe0:	e24f0044 	sub	r0, pc, #68	; 0x44
        384fe4:	e1a0f00e 	mov	pc, lr
        384fe8:	e3a00000 	mov	r0, #0	; 0x0
        384fec:	e1a0f00e 	mov	pc, lr
        384ff0:	5447656f 	strplb	r6, [r7], -#1391
        384ff4:	506f7274 	rsbpl	r7, pc, r4, ror r2
        384ff8:	44656275 	strmibt	r6, [r5], -#629
        384ffc:	674c696e 	strvsb	r6, [ip, -lr, ror #18]
        385000:	6b005453 	blvs	39a154 <bpWeight+0x5864>
        385004:	65726961 	ldrvsb	r6, [r2, -#2401]!
        385008:	6c446562 	mcrrvs	5, 6, r6, r4, cr2
        38500c:	75674c69 	strvcb	r4, [r7, -#3177]!
        385010:	6e6b0000 	cdpvs	0, 6, cr0, cr11, cr0, {0}
        385014:	00000000 	andeq	r0, r0, r0
        385018:	eafffff0 	b	384fe0 <ClassInfo__17TGeoPortDebugLinkSFv>
        38501c:	ea5b9123 	b	1a694b0 <TGeoPortDebugLink::$New(void)>
        385020:	ea5b9124 	b	1a694b8 <TGeoPortDebugLink::$Delete(void)>
        385024:	ea5b9124 	b	1a694bc <TGeoPortDebugLink::$Install(unsigned long, unsigned long, void *, long (*)(void *))>
        385028:	ea5b9124 	b	1a694c0 <TGeoPortDebugLink::$Remove(void)>
        38502c:	ea5b9124 	b	1a694c4 <TGeoPortDebugLink::$WriteDebugFrame(unsigned char *, long, unsigned long)>
        385030:	eaf55a6f 	b	db9f4 <TGeoPortDebugLink::WriteDebugFrame(unsigned char *, long)>
        385034:	ea5b9123 	b	1a694c8 <TGeoPortDebugLink::$ReadDebugFrame(unsigned char *, long, long *, unsigned long)>
        385038:	ea5b9123 	b	1a694cc <TGeoPortDebugLink::$PollByte(void)>
        38503c:	ea5b9123 	b	1a694d0 <TGeoPortDebugLink::$EnbIntOnNextRxC(void)>
        385040:	eaf557b8 	b	daf28 <TGeoPortDebugLink::GetSerialChipPtr(void)>
        385044:	ea5b9122 	b	1a694d4 <TGeoPortDebugLink::$PowerCycle(unsigned char)>
        385048:	e1a0000f 	mov	r0, pc
        38504c:	e1a0f00e 	mov	pc, lr
        385050:	54536572 	ldrplb	r6, [r3], -#1394
        385054:	69616c44 	stmvsdb	r1!, {r2, r6, sl, fp, sp, lr}^
        385058:	65627567 	strvsb	r7, [r2, -#1383]!
        38505c:	4c696e6b 	stcmil	14, cr6, [r9], -#428
        385060:	00000000 	andeq	r0, r0, r0
    */
}

