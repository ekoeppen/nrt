#include "include/PTheSerChipRegistry.h"

/**
 * Symbol: Sizeof__19PTheSerChipRegistrySFv
 * Address: 001d6004
 */
void PTheSerChipRegistry::Sizeof() {
    /*
        1d6004:	e3a0005c 	mov	r0, #92	; 0x5c
        1d6008:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PTheSerChipRegistry::FindByChip(TSerialChip *)
 * Address: 001d600c
 */
PTheSerChipRegistry::FindByChip(TSerialChip *) {
    /*
        1d600c:	e3a02000 	mov	r2, #0	; 0x0
        1d6010:	e0803182 	add	r3, r0, r2, lsl #3
        1d6014:	e5933010 	ldr	r3, [r3, #16]	; fField16
        1d6018:	e1330001 	teq	r3, r1
        1d601c:	01a01002 	moveq	r1, r2
        1d6020:	0a623055 	beq	1a6217c <PTheSerChipRegistry::$IndexToID(unsigned long)>
        1d6024:	e2822001 	add	r2, r2, #1	; 0x1
        1d6028:	e3520007 	cmp	r2, #7	; 0x7
        1d602c:	dafffff7 	ble	1d6010 <PTheSerChipRegistry::FindByChip(TSerialChip *)+0x4>
        1d6030:	e3a00000 	mov	r0, #0	; 0x0
        1d6034:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PTheSerChipRegistry::FindByLocation(unsigned long)
 * Address: 001d6038
 */
PTheSerChipRegistry::FindByLocation(unsigned long) {
    /*
        1d6038:	e3a02000 	mov	r2, #0	; 0x0
        1d603c:	e0803182 	add	r3, r0, r2, lsl #3
        1d6040:	e5933014 	ldr	r3, [r3, #20]	; fField20
        1d6044:	e1330001 	teq	r3, r1
        1d6048:	01a01002 	moveq	r1, r2
        1d604c:	0a62304a 	beq	1a6217c <PTheSerChipRegistry::$IndexToID(unsigned long)>
        1d6050:	e2822001 	add	r2, r2, #1	; 0x1
        1d6054:	e3520007 	cmp	r2, #7	; 0x7
        1d6058:	dafffff7 	ble	1d603c <PTheSerChipRegistry::FindByLocation(unsigned long)+0x4>
        1d605c:	e3a00000 	mov	r0, #0	; 0x0
        1d6060:	e59fc018 	ldr	ip, [pc, #18]	; 1d6080 <PTheSerChipRegistry::FindByLocation(unsigned long)+0x48>
        1d6064:	e131000c 	teq	r1, ip
        1d6068:	11a0f00e 	movne	pc, lr
        1d606c:	e3a01000 	mov	r1, #0	; 0x0
        1d6070:	e2811001 	add	r1, r1, #1	; 0x1
        1d6074:	e3510007 	cmp	r1, #7	; 0x7
        1d6078:	dafffffc 	ble	1d6070 <PTheSerChipRegistry::FindByLocation(unsigned long)+0x38>
        1d607c:	e1a0f00e 	mov	pc, lr
        1d6080:	736c6f74 	cmnvc	ip, #464	; 0x1d0
    */
}

/**
 * Symbol: PTheSerChipRegistry::FindByOption(TCMOSerialChipSpec *)
 * Address: 001d6084
 */
PTheSerChipRegistry::FindByOption(TCMOSerialChipSpec *) {
    /*
        1d6084:	e1a0c00d 	mov	ip, sp
        1d6088:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1d608c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d6090:	e1a05000 	mov	r5, r0
        1d6094:	e1a04001 	mov	r4, r1
        1d6098:	e24dd020 	sub	sp, sp, #32	; 0x20
        1d609c:	e1a0000d 	mov	r0, sp
        1d60a0:	eb68b872 	bl	1c04270 <TCMOSerialChipSpec::$__ct(void)>
        1d60a4:	e59d0008 	ldr	r0, [sp, #8]
        1d60a8:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
        1d60ac:	e3800b01 	orr	r0, r0, #1024	; 0x400
        1d60b0:	e3a06000 	mov	r6, #0	; 0x0
        1d60b4:	e58d0008 	str	r0, [sp, #8]
        1d60b8:	e0850186 	add	r0, r5, r6, lsl #3
        1d60bc:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1d60c0:	e3300000 	teq	r0, #0	; 0x0
        1d60c4:	0a000031 	beq	1d6190 <PTheSerChipRegistry::FindByOption(TCMOSerialChipSpec *)+0x10c>
        1d60c8:	e1a0100d 	mov	r1, sp
        1d60cc:	eb06baee 	bl	384c8c <TSerialChip::ProcessOption(TOption *)>
        1d60d0:	e3300000 	teq	r0, #0	; 0x0
        1d60d4:	1a00002d 	bne	1d6190 <PTheSerChipRegistry::FindByOption(TCMOSerialChipSpec *)+0x10c>
        1d60d8:	e594000c 	ldr	r0, [r4, #12]
        1d60dc:	e3300000 	teq	r0, #0	; 0x0
        1d60e0:	159d100c 	ldrne	r1, [sp, #12]
        1d60e4:	11300001 	teqne	r0, r1
        1d60e8:	1a000028 	bne	1d6190 <PTheSerChipRegistry::FindByOption(TCMOSerialChipSpec *)+0x10c>
        1d60ec:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1d60f0:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        1d60f4:	e0001001 	and	r1, r0, r1
        1d60f8:	e1310000 	teq	r1, r0
        1d60fc:	05d40014 	ldreqb	r0, [r4, #20]	; fField20
        1d6100:	05dd1014 	ldreqb	r1, [sp, #20]	; fField20
        1d6104:	00001001 	andeq	r1, r0, r1
        1d6108:	01310000 	teqeq	r1, r0
        1d610c:	05d40015 	ldreqb	r0, [r4, #21]
        1d6110:	05dd1015 	ldreqb	r1, [sp, #21]
        1d6114:	00001001 	andeq	r1, r0, r1
        1d6118:	01310000 	teqeq	r1, r0
        1d611c:	05d40016 	ldreqb	r0, [r4, #22]
        1d6120:	05dd1016 	ldreqb	r1, [sp, #22]
        1d6124:	00001001 	andeq	r1, r0, r1
        1d6128:	01310000 	teqeq	r1, r0
        1d612c:	05d40017 	ldreqb	r0, [r4, #23]
        1d6130:	05dd1017 	ldreqb	r1, [sp, #23]
        1d6134:	00001001 	andeq	r1, r0, r1
        1d6138:	01310000 	teqeq	r1, r0
        1d613c:	1a000013 	bne	1d6190 <PTheSerChipRegistry::FindByOption(TCMOSerialChipSpec *)+0x10c>
        1d6140:	e5d40019 	ldrb	r0, [r4, #25]
        1d6144:	e3300000 	teq	r0, #0	; 0x0
        1d6148:	0a000002 	beq	1d6158 <PTheSerChipRegistry::FindByOption(TCMOSerialChipSpec *)+0xd4>
        1d614c:	e5dd0019 	ldrb	r0, [sp, #25]
        1d6150:	e3300000 	teq	r0, #0	; 0x0
        1d6154:	0a00000d 	beq	1d6190 <PTheSerChipRegistry::FindByOption(TCMOSerialChipSpec *)+0x10c>
        1d6158:	e594001c 	ldr	r0, [r4, #28]
        1d615c:	e1b00820 	movs	r0, r0, lsr #16
        1d6160:	159d101c 	ldrne	r1, [sp, #28]
        1d6164:	11300821 	teqne	r0, r1, lsr #16
        1d6168:	1a000008 	bne	1d6190 <PTheSerChipRegistry::FindByOption(TCMOSerialChipSpec *)+0x10c>
        1d616c:	e594001e 	ldr	r0, [r4, #30]
        1d6170:	e1b00820 	movs	r0, r0, lsr #16
        1d6174:	159d101e 	ldrne	r1, [sp, #30]
        1d6178:	11300821 	teqne	r0, r1, lsr #16
        1d617c:	1a000003 	bne	1d6190 <PTheSerChipRegistry::FindByOption(TCMOSerialChipSpec *)+0x10c>
        1d6180:	e1a01006 	mov	r1, r6
        1d6184:	e1a00005 	mov	r0, r5
        1d6188:	eb622ffb 	bl	1a6217c <PTheSerChipRegistry::$IndexToID(unsigned long)>
        1d618c:	ea000003 	b	1d61a0 <PTheSerChipRegistry::FindByOption(TCMOSerialChipSpec *)+0x11c>
        1d6190:	e2866001 	add	r6, r6, #1	; 0x1
        1d6194:	e3560007 	cmp	r6, #7	; 0x7
        1d6198:	daffffc6 	ble	1d60b8 <PTheSerChipRegistry::FindByOption(TCMOSerialChipSpec *)+0x34>
        1d619c:	e3a00000 	mov	r0, #0	; 0x0
        1d61a0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: PTheSerChipRegistry::ClaimSerialChip(unsigned long, unsigned char, unsigned long)
 * Address: 001d61a4
 */
PTheSerChipRegistry::ClaimSerialChip(unsigned long, unsigned char, unsigned long) {
    /*
        1d61a4:	e1a0c00d 	mov	ip, sp
        1d61a8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1d61ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d61b0:	e1a04000 	mov	r4, r0
        1d61b4:	e1a05003 	mov	r5, r3
        1d61b8:	e20260ff 	and	r6, r2, #255	; 0xff
        1d61bc:	eb622fe7 	bl	1a62160 <PTheSerChipRegistry::$GetChipLocation(unsigned long)>
        1d61c0:	e1b07000 	movs	r7, r0
        1d61c4:	03a000e1 	moveq	r0, #225	; 0xe1
        1d61c8:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        1d61cc:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1d61d0:	e24dd008 	sub	sp, sp, #8	; 0x8
        1d61d4:	e1a00004 	mov	r0, r4
        1d61d8:	eb622fe5 	bl	1a62174 <PTheSerChipRegistry::$GetMutex(void)>
        1d61dc:	e1a0200d 	mov	r2, sp
        1d61e0:	e1a01007 	mov	r1, r7
        1d61e4:	e5940054 	ldr	r0, [r4, #84]	; fField84
        1d61e8:	eb6233f7 	bl	1a631cc <TUConfigServer::$ULongStrToCStr(unsigned long, char *)>
        1d61ec:	e59f102c 	ldr	r1, [pc, #2c]	; 1d6220 <PTheSerChipRegistry::ClaimSerialChip(unsigned long, unsigned char, unsigned long)+0x7c>
        1d61f0:	e3350000 	teq	r5, #0	; 0x0
        1d61f4:	0a00000d 	beq	1d6230 <PTheSerChipRegistry::ClaimSerialChip(unsigned long, unsigned char, unsigned long)+0x8c>
        1d61f8:	e3360000 	teq	r6, #0	; 0x0
        1d61fc:	e3a03000 	mov	r3, #0	; 0x0
        1d6200:	e92d0008 	stmdb	sp!, {r3}
        1d6204:	e1a03005 	mov	r3, r5
        1d6208:	e5940054 	ldr	r0, [r4, #84]	; fField84
        1d620c:	e5912000 	ldr	r2, [r1]
        1d6210:	e28d1004 	add	r1, sp, #4	; 0x4
        1d6214:	0a000002 	beq	1d6224 <PTheSerChipRegistry::ClaimSerialChip(unsigned long, unsigned char, unsigned long)+0x80>
        1d6218:	eb64fa0d 	bl	1b14a54 <TUNameServer::$ResourcePassiveClaim(char *, char *, unsigned long, unsigned long)>
        1d621c:	ea000001 	b	1d6228 <PTheSerChipRegistry::ClaimSerialChip(unsigned long, unsigned char, unsigned long)+0x84>
        1d6220:	0c101b04 	ldceq	11, cr1, [r0], -#16	; fField16
        1d6224:	eb64fa09 	bl	1b14a50 <TUNameServer::$ResourceClaim(char *, char *, unsigned long, unsigned long)>
        1d6228:	e28dd004 	add	sp, sp, #4	; 0x4
        1d622c:	ea000007 	b	1d6250 <PTheSerChipRegistry::ClaimSerialChip(unsigned long, unsigned char, unsigned long)+0xac>
        1d6230:	e3360000 	teq	r6, #0	; 0x0
        1d6234:	e5940054 	ldr	r0, [r4, #84]	; fField84
        1d6238:	e5912000 	ldr	r2, [r1]
        1d623c:	e1a0100d 	mov	r1, sp
        1d6240:	0a000001 	beq	1d624c <PTheSerChipRegistry::ClaimSerialChip(unsigned long, unsigned char, unsigned long)+0xa8>
        1d6244:	eb64fa03 	bl	1b14a58 <TUNameServer::$ResourcePassiveUnclaim(char *, char *)>
        1d6248:	ea000000 	b	1d6250 <PTheSerChipRegistry::ClaimSerialChip(unsigned long, unsigned char, unsigned long)+0xac>
        1d624c:	eb64fa02 	bl	1b14a5c <TUNameServer::$ResourceUnclaim(char *, char *)>
        1d6250:	e1a05000 	mov	r5, r0
        1d6254:	e1a00004 	mov	r0, r4
        1d6258:	eb6233d1 	bl	1a631a4 <PTheSerChipRegistry::$RelMutex(void)>
        1d625c:	e1a00005 	mov	r0, r5
        1d6260:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: PTheSerChipRegistry::GetDefaultChip(unsigned long, unsigned long *)
 * Address: 001d6264
 */
PTheSerChipRegistry::GetDefaultChip(unsigned long, unsigned long *) {
    /*
        1d6264:	e1a0c00d 	mov	ip, sp
        1d6268:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1d626c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d6270:	e1a04000 	mov	r4, r0
        1d6274:	e1a06001 	mov	r6, r1
        1d6278:	e1a05002 	mov	r5, r2
        1d627c:	eb622fbc 	bl	1a62174 <PTheSerChipRegistry::$GetMutex(void)>
        1d6280:	e1a02005 	mov	r2, r5
        1d6284:	e1a01006 	mov	r1, r6
        1d6288:	e3a03000 	mov	r3, #0	; 0x0
        1d628c:	e5940054 	ldr	r0, [r4, #84]	; fField84
        1d6290:	ebfc3f55 	bl	e5fec <TUConfigServer::GetDefaultHWLoc(unsigned long, unsigned long *, unsigned long *)>
        1d6294:	e1a05000 	mov	r5, r0
        1d6298:	e1a00004 	mov	r0, r4
        1d629c:	eb6233c0 	bl	1a631a4 <PTheSerChipRegistry::$RelMutex(void)>
        1d62a0:	e1a00005 	mov	r0, r5
        1d62a4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: PTheSerChipRegistry::GetMutex(void)
 * Address: 001d62a8
 */
PTheSerChipRegistry::GetMutex(void) {
    /*
        1d62a8:	e5900058 	ldr	r0, [r0, #88]	; fField88
        1d62ac:	e3a01000 	mov	r1, #0	; 0x0
        1d62b0:	ea67e127 	b	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
    */
}

/**
 * Symbol: PTheSerChipRegistry::RelMutex(void)
 * Address: 001d62b4
 */
PTheSerChipRegistry::RelMutex(void) {
    /*
        1d62b4:	e5900058 	ldr	r0, [r0, #88]	; fField88
        1d62b8:	ea680e76 	b	1bd9c98 <TULockingSemaphore::$Release(void)>
    */
}

/**
 * Symbol: PTheSerChipRegistry::IDToIndex(unsigned long, unsigned long *)
 * Address: 001d62bc
 */
PTheSerChipRegistry::IDToIndex(unsigned long, unsigned long *) {
    /*
        1d62bc:	e2410080 	sub	r0, r1, #128	; 0x80
        1d62c0:	e3510080 	cmp	r1, #128	; 0x80
        1d62c4:	e5820000 	str	r0, [r2]
        1d62c8:	3a000002 	bcc	1d62d8 <PTheSerChipRegistry::IDToIndex(unsigned long, unsigned long *)+0x1c>
        1d62cc:	e3510087 	cmp	r1, #135	; 0x87
        1d62d0:	93a00001 	movls	r0, #1	; 0x1
        1d62d4:	9a000000 	bls	1d62dc <PTheSerChipRegistry::IDToIndex(unsigned long, unsigned long *)+0x20>
        1d62d8:	e3a00000 	mov	r0, #0	; 0x0
        1d62dc:	e20000ff 	and	r0, r0, #255	; 0xff
        1d62e0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PTheSerChipRegistry::IndexToID(unsigned long)
 * Address: 001d62e4
 */
PTheSerChipRegistry::IndexToID(unsigned long) {
    /*
        1d62e4:	e2810080 	add	r0, r1, #128	; 0x80
        1d62e8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PTheSerChipRegistry::SetChipData(unsigned long, TSerialChip *, unsigned long)
 * Address: 001d62ec
 */
PTheSerChipRegistry::SetChipData(unsigned long, TSerialChip *, unsigned long) {
    /*
        1d62ec:	e0800181 	add	r0, r0, r1, lsl #3
        1d62f0:	e280000c 	add	r0, r0, #12	; 0xc
        1d62f4:	e9a0000c 	stmib	r0!, {r2, r3}
        1d62f8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PTheSerChipRegistry::New(void)
 * Address: 001d62fc
 */
PTheSerChipRegistry::New(void) {
    /*
        1d62fc:	e1a0c00d 	mov	ip, sp
        1d6300:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1d6304:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d6308:	e1a04000 	mov	r4, r0
        1d630c:	e3a05000 	mov	r5, #0	; 0x0
        1d6310:	e1a01005 	mov	r1, r5
        1d6314:	e1a00004 	mov	r0, r4
        1d6318:	eb622f86 	bl	1a62138 <PTheSerChipRegistry::$ClearEntry(unsigned long)>
        1d631c:	e2855001 	add	r5, r5, #1	; 0x1
        1d6320:	e3550007 	cmp	r5, #7	; 0x7
        1d6324:	dafffff9 	ble	1d6310 <PTheSerChipRegistry::New(void)+0x14>
        1d6328:	e3a00000 	mov	r0, #0	; 0x0
        1d632c:	e5840050 	str	r0, [r4, #80]	; fField80
        1d6330:	e5840054 	str	r0, [r4, #84]	; fField84
        1d6334:	e5840058 	str	r0, [r4, #88]	; fField88
        1d6338:	e59f0008 	ldr	r0, [pc, #8]	; 1d6348 <PTheSerChipRegistry::New(void)+0x4c>
        1d633c:	e5804000 	str	r4, [r0]
        1d6340:	e1a00004 	mov	r0, r4
        1d6344:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1d6348:	0c101b00 	ldceq	11, cr1, [r0]
    */
}

/**
 * Symbol: PTheSerChipRegistry::ClearEntry(unsigned long)
 * Address: 001d634c
 */
PTheSerChipRegistry::ClearEntry(unsigned long) {
    /*
        1d634c:	e3a02000 	mov	r2, #0	; 0x0
        1d6350:	e0800181 	add	r0, r0, r1, lsl #3
        1d6354:	e5802014 	str	r2, [r0, #20]	; fField20
        1d6358:	e5a02010 	str	r2, [r0, #16]!	; fField16
        1d635c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PTheSerChipRegistry::FindNextFreeIndex(unsigned long *)
 * Address: 001d6360
 */
PTheSerChipRegistry::FindNextFreeIndex(unsigned long *) {
    /*
        1d6360:	e3a03000 	mov	r3, #0	; 0x0
        1d6364:	e5902050 	ldr	r2, [r0, #80]	; fField80
        1d6368:	e2822001 	add	r2, r2, #1	; 0x1
        1d636c:	e3520007 	cmp	r2, #7	; 0x7
        1d6370:	c3a02000 	movgt	r2, #0	; 0x0
        1d6374:	e5802050 	str	r2, [r0, #80]	; fField80
        1d6378:	e080c182 	add	ip, r0, r2, lsl #3
        1d637c:	e59cc010 	ldr	ip, [ip, #16]	; fField16
        1d6380:	e33c0000 	teq	ip, #0	; 0x0
        1d6384:	03a00000 	moveq	r0, #0	; 0x0
        1d6388:	05812000 	streq	r2, [r1]
        1d638c:	01a0f00e 	moveq	pc, lr
        1d6390:	e2833001 	add	r3, r3, #1	; 0x1
        1d6394:	e3530007 	cmp	r3, #7	; 0x7
        1d6398:	dafffff1 	ble	1d6364 <PTheSerChipRegistry::FindNextFreeIndex(unsigned long *)+0x4>
        1d639c:	e59f0000 	ldr	r0, [pc, #0]	; 1d63a4 <PTheSerChipRegistry::FindNextFreeIndex(unsigned long *)+0x44>
        1d63a0:	e1a0f00e 	mov	pc, lr
        1d63a4:	ffffd8a7 	swinv	0x00ffd8a7
    */
}

/**
 * Symbol: PTheSerChipRegistry::Init(void)
 * Address: 001d63a8
 */
PTheSerChipRegistry::Init(void) {
    /*
        1d63a8:	e1a0c00d 	mov	ip, sp
        1d63ac:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1d63b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d63b4:	e1a04000 	mov	r4, r0
        1d63b8:	e280105c 	add	r1, r0, #92	; 0x5c
        1d63bc:	e3a02001 	mov	r2, #1	; 0x1
        1d63c0:	eb6801e3 	bl	1bd6b54 <$LockHeapRange>
        1d63c4:	e3300000 	teq	r0, #0	; 0x0
        1d63c8:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        1d63cc:	e3a00010 	mov	r0, #16	; 0x10
        1d63d0:	eb67e0d8 	bl	1bce738 <$__nw(unsigned int)>
        1d63d4:	e1b05000 	movs	r5, r0
        1d63d8:	11a00005 	movne	r0, r5
        1d63dc:	1b67dca9 	blne	1bcd688 <TUNameServer::$__ct(void)>
        1d63e0:	e3a060e9 	mov	r6, #233	; 0xe9
        1d63e4:	e2466b0a 	sub	r6, r6, #10240	; 0x2800
        1d63e8:	e5845054 	str	r5, [r4, #84]	; fField84
        1d63ec:	e3350000 	teq	r5, #0	; 0x0
        1d63f0:	0a00000c 	beq	1d6428 <PTheSerChipRegistry::Init(void)+0x80>
        1d63f4:	e3a0000c 	mov	r0, #12	; 0xc
        1d63f8:	eb67e0ce 	bl	1bce738 <$__nw(unsigned int)>
        1d63fc:	e1b05000 	movs	r5, r0
        1d6400:	0a000005 	beq	1d641c <PTheSerChipRegistry::Init(void)+0x74>
        1d6404:	e3a00000 	mov	r0, #0	; 0x0
        1d6408:	e5c50004 	strb	r0, [r5, #4]
        1d640c:	e5850000 	str	r0, [r5]
        1d6410:	e2851008 	add	r1, r5, #8	; 0x8
        1d6414:	e1a00005 	mov	r0, r5
        1d6418:	eb67f981 	bl	1bd4a24 <TUSemaphoreGroup::$GetRefCon(void **)>
        1d641c:	e5845058 	str	r5, [r4, #88]	; fField88
        1d6420:	e3350000 	teq	r5, #0	; 0x0
        1d6424:	1a000001 	bne	1d6430 <PTheSerChipRegistry::Init(void)+0x88>
        1d6428:	e1a00006 	mov	r0, r6
        1d642c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1d6430:	e1a00005 	mov	r0, r5
        1d6434:	eb67fd9f 	bl	1bd5ab8 <TULockingSemaphore::$Init(void)>
        1d6438:	e3300000 	teq	r0, #0	; 0x0
        1d643c:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        1d6440:	e3a03000 	mov	r3, #0	; 0x0
        1d6444:	e92d0008 	stmdb	sp!, {r3}
        1d6448:	e5940054 	ldr	r0, [r4, #84]	; fField84
        1d644c:	e1a03004 	mov	r3, r4
        1d6450:	e28f2f02 	add	r2, pc, #8	; 0x8
        1d6454:	e28f1f06 	add	r1, pc, #24	; 0x18
        1d6458:	eb680a04 	bl	1bd8c70 <TUNameServer::$RegisterName(char *, char *, unsigned long, unsigned long)>
        1d645c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1d6460:	50546865 	subpls	r6, r4, r5, ror #16
        1d6464:	53657243 	cmnpl	r5, #805306372	; 0x30000004
        1d6468:	68697052 	stmvsda	r9!, {r1, r4, r6, ip, sp, lr}^
        1d646c:	65676973 	strvsb	r6, [r7, -#2419]!
        1d6470:	74727900 	ldrvcbt	r7, [r2], -#2304
        1d6474:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: PTheSerChipRegistry::Delete(void)
 * Address: 001d6478
 */
PTheSerChipRegistry::Delete(void) {
    /*
        1d6478:	e1a0c00d 	mov	ip, sp
        1d647c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1d6480:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d6484:	e1a04000 	mov	r4, r0
        1d6488:	e5900054 	ldr	r0, [r0, #84]	; fField84
        1d648c:	e28f2f0f 	add	r2, pc, #60	; 0x3c
        1d6490:	e28f1f13 	add	r1, pc, #76	; 0x4c
        1d6494:	eb681e85 	bl	1bddeb0 <TUNameServer::$UnRegisterName(char *, char *)>
        1d6498:	e5945054 	ldr	r5, [r4, #84]	; fField84
        1d649c:	e3350000 	teq	r5, #0	; 0x0
        1d64a0:	0a000004 	beq	1d64b8 <PTheSerChipRegistry::Delete(void)+0x40>
        1d64a4:	e1a00005 	mov	r0, r5
        1d64a8:	e3a01000 	mov	r1, #0	; 0x0
        1d64ac:	eb67e094 	bl	1bce704 <TUNameServer::$__dt(void)>
        1d64b0:	e1a00005 	mov	r0, r5
        1d64b4:	eb67dc89 	bl	1bcd6e0 <$__dl(void *)>
        1d64b8:	e5b40058 	ldr	r0, [r4, #88]!	; fField88
        1d64bc:	e3300000 	teq	r0, #0	; 0x0
        1d64c0:	13a01001 	movne	r1, #1	; 0x1
        1d64c4:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1d64c8:	1a67e094 	bne	1bce720 <TULockingSemaphore::$__dt(void)>
        1d64cc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1d64d0:	50546865 	subpls	r6, r4, r5, ror #16
        1d64d4:	53657243 	cmnpl	r5, #805306372	; 0x30000004
        1d64d8:	68697052 	stmvsda	r9!, {r1, r4, r6, ip, sp, lr}^
        1d64dc:	65676973 	strvsb	r6, [r7, -#2419]!
        1d64e0:	74727900 	ldrvcbt	r7, [r2], -#2304
        1d64e4:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: PTheSerChipRegistry::Register(TSerialChip *, unsigned long)
 * Address: 001d64e8
 */
PTheSerChipRegistry::Register(TSerialChip *, unsigned long) {
    /*
        1d64e8:	e1a0c00d 	mov	ip, sp
        1d64ec:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1d64f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d64f4:	e1a04000 	mov	r4, r0
        1d64f8:	e1a06001 	mov	r6, r1
        1d64fc:	e1a05002 	mov	r5, r2
        1d6500:	eb622f1b 	bl	1a62174 <PTheSerChipRegistry::$GetMutex(void)>
        1d6504:	e24dd004 	sub	sp, sp, #4	; 0x4
        1d6508:	e1a0100d 	mov	r1, sp
        1d650c:	e1a00004 	mov	r0, r4
        1d6510:	eb622f10 	bl	1a62158 <PTheSerChipRegistry::$FindNextFreeIndex(unsigned long *)>
        1d6514:	e1b07000 	movs	r7, r0
        1d6518:	1a000014 	bne	1d6570 <PTheSerChipRegistry::Register(TSerialChip *, unsigned long)+0x88>
        1d651c:	e1a03005 	mov	r3, r5
        1d6520:	e1a02006 	mov	r2, r6
        1d6524:	e1a00004 	mov	r0, r4
        1d6528:	e59d1000 	ldr	r1, [sp]
        1d652c:	eb62331f 	bl	1a631b0 <PTheSerChipRegistry::$SetChipData(unsigned long, TSerialChip *, unsigned long)>
        1d6530:	e3a03000 	mov	r3, #0	; 0x0
        1d6534:	e92d0008 	stmdb	sp!, {r3}
        1d6538:	e1a00004 	mov	r0, r4
        1d653c:	e59d1004 	ldr	r1, [sp, #4]
        1d6540:	eb622f0d 	bl	1a6217c <PTheSerChipRegistry::$IndexToID(unsigned long)>
        1d6544:	e1a03000 	mov	r3, r0
        1d6548:	e5940054 	ldr	r0, [r4, #84]	; fField84
        1d654c:	e59f102c 	ldr	r1, [pc, #2c]	; 1d6580 <PTheSerChipRegistry::Register(TSerialChip *, unsigned long)+0x98>
        1d6550:	e5912000 	ldr	r2, [r1]
        1d6554:	e1a01005 	mov	r1, r5
        1d6558:	ebfc3f5b 	bl	e62cc <TUConfigServer::RegisterULongName(unsigned long, char *, unsigned long, unsigned long)>
        1d655c:	e28dd004 	add	sp, sp, #4	; 0x4
        1d6560:	e1b07000 	movs	r7, r0
        1d6564:	11a00004 	movne	r0, r4
        1d6568:	159d1000 	ldrne	r1, [sp]
        1d656c:	1b622ef1 	blne	1a62138 <PTheSerChipRegistry::$ClearEntry(unsigned long)>
        1d6570:	e1a00004 	mov	r0, r4
        1d6574:	eb62330a 	bl	1a631a4 <PTheSerChipRegistry::$RelMutex(void)>
        1d6578:	e1a00007 	mov	r0, r7
        1d657c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1d6580:	0c101b04 	ldceq	11, cr1, [r0], -#16	; fField16
    */
}

/**
 * Symbol: PTheSerChipRegistry::UnRegister(TSerialChip *)
 * Address: 001d6584
 */
PTheSerChipRegistry::UnRegister(TSerialChip *) {
    /*
        1d6584:	e1a0c00d 	mov	ip, sp
        1d6588:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1d658c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d6590:	e1a04000 	mov	r4, r0
        1d6594:	e24dd004 	sub	sp, sp, #4	; 0x4
        1d6598:	eb622eeb 	bl	1a6214c <PTheSerChipRegistry::$FindByChip(TSerialChip *)>
        1d659c:	e1b05000 	movs	r5, r0
        1d65a0:	0a000018 	beq	1d6608 <PTheSerChipRegistry::UnRegister(TSerialChip *)+0x84>
        1d65a4:	e1a01005 	mov	r1, r5
        1d65a8:	e1a00004 	mov	r0, r4
        1d65ac:	eb622eeb 	bl	1a62160 <PTheSerChipRegistry::$GetChipLocation(unsigned long)>
        1d65b0:	e1b06000 	movs	r6, r0
        1d65b4:	0a000013 	beq	1d6608 <PTheSerChipRegistry::UnRegister(TSerialChip *)+0x84>
        1d65b8:	e1a00004 	mov	r0, r4
        1d65bc:	eb622eec 	bl	1a62174 <PTheSerChipRegistry::$GetMutex(void)>
        1d65c0:	e5940054 	ldr	r0, [r4, #84]	; fField84
        1d65c4:	e59f1038 	ldr	r1, [pc, #38]	; 1d6604 <PTheSerChipRegistry::UnRegister(TSerialChip *)+0x80>
        1d65c8:	e5912000 	ldr	r2, [r1]
        1d65cc:	e1a01006 	mov	r1, r6
        1d65d0:	ebfc3f4f 	bl	e6314 <TUConfigServer::UnRegisterULongName(unsigned long, char *)>
        1d65d4:	e1a06000 	mov	r6, r0
        1d65d8:	e1a00004 	mov	r0, r4
        1d65dc:	eb6232f0 	bl	1a631a4 <PTheSerChipRegistry::$RelMutex(void)>
        1d65e0:	e1a0200d 	mov	r2, sp
        1d65e4:	e1a01005 	mov	r1, r5
        1d65e8:	e1a00004 	mov	r0, r4
        1d65ec:	eb622ee1 	bl	1a62178 <PTheSerChipRegistry::$IDToIndex(unsigned long, unsigned long *)>
        1d65f0:	e1a00004 	mov	r0, r4
        1d65f4:	e59d1000 	ldr	r1, [sp]
        1d65f8:	eb622ece 	bl	1a62138 <PTheSerChipRegistry::$ClearEntry(unsigned long)>
        1d65fc:	e1a00006 	mov	r0, r6
        1d6600:	ea000002 	b	1d6610 <PTheSerChipRegistry::UnRegister(TSerialChip *)+0x8c>
        1d6604:	0c101b04 	ldceq	11, cr1, [r0], -#16	; fField16
        1d6608:	e3a000e1 	mov	r0, #225	; 0xe1
        1d660c:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        1d6610:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: PTheSerChipRegistry::SetDefaultChip(unsigned long, unsigned long *, unsigned char)
 * Address: 001d6614
 */
PTheSerChipRegistry::SetDefaultChip(unsigned long, unsigned long *, unsigned char) {
    /*
        1d6614:	e1a0c00d 	mov	ip, sp
        1d6618:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1d661c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d6620:	e1a04000 	mov	r4, r0
        1d6624:	e1a06001 	mov	r6, r1
        1d6628:	e1a05002 	mov	r5, r2
        1d662c:	e20380ff 	and	r8, r3, #255	; 0xff
        1d6630:	e5927000 	ldr	r7, [r2]
        1d6634:	eb622ece 	bl	1a62174 <PTheSerChipRegistry::$GetMutex(void)>
        1d6638:	e3370000 	teq	r7, #0	; 0x0
        1d663c:	0a00000d 	beq	1d6678 <PTheSerChipRegistry::SetDefaultChip(unsigned long, unsigned long *, unsigned char)+0x64>
        1d6640:	e1a02005 	mov	r2, r5
        1d6644:	e1a01006 	mov	r1, r6
        1d6648:	e3a03000 	mov	r3, #0	; 0x0
        1d664c:	e5940054 	ldr	r0, [r4, #84]	; fField84
        1d6650:	ebfc3e65 	bl	e5fec <TUConfigServer::GetDefaultHWLoc(unsigned long, unsigned long *, unsigned long *)>
        1d6654:	e3380000 	teq	r8, #0	; 0x0
        1d6658:	0a000006 	beq	1d6678 <PTheSerChipRegistry::SetDefaultChip(unsigned long, unsigned long *, unsigned char)+0x64>
        1d665c:	e3300000 	teq	r0, #0	; 0x0
        1d6660:	1a000004 	bne	1d6678 <PTheSerChipRegistry::SetDefaultChip(unsigned long, unsigned long *, unsigned char)+0x64>
        1d6664:	e1a00004 	mov	r0, r4
        1d6668:	eb6232cd 	bl	1a631a4 <PTheSerChipRegistry::$RelMutex(void)>
        1d666c:	e3a000ac 	mov	r0, #172	; 0xac
        1d6670:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        1d6674:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1d6678:	e1a02007 	mov	r2, r7
        1d667c:	e1a01006 	mov	r1, r6
        1d6680:	e3a03000 	mov	r3, #0	; 0x0
        1d6684:	e5940054 	ldr	r0, [r4, #84]	; fField84
        1d6688:	ebfc3eeb 	bl	e623c <TUConfigServer::SetDefaultHWLoc(unsigned long, unsigned long, unsigned long)>
        1d668c:	e1a05000 	mov	r5, r0
        1d6690:	e1a00004 	mov	r0, r4
        1d6694:	eb6232c2 	bl	1a631a4 <PTheSerChipRegistry::$RelMutex(void)>
        1d6698:	e1a00005 	mov	r0, r5
        1d669c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: PTheSerChipRegistry::GetChipLocation(unsigned long)
 * Address: 001d66a0
 */
PTheSerChipRegistry::GetChipLocation(unsigned long) {
    /*
        1d66a0:	e1a0c00d 	mov	ip, sp
        1d66a4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1d66a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d66ac:	e1a04000 	mov	r4, r0
        1d66b0:	e24dd004 	sub	sp, sp, #4	; 0x4
        1d66b4:	e1a0200d 	mov	r2, sp
        1d66b8:	eb622eae 	bl	1a62178 <PTheSerChipRegistry::$IDToIndex(unsigned long, unsigned long *)>
        1d66bc:	e3300000 	teq	r0, #0	; 0x0
        1d66c0:	159d0000 	ldrne	r0, [sp]
        1d66c4:	10840180 	addne	r0, r4, r0, lsl #3
        1d66c8:	15900014 	ldrne	r0, [r0, #20]	; fField20
        1d66cc:	03a00000 	moveq	r0, #0	; 0x0
        1d66d0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: PTheSerChipRegistry::GetChipPtr(unsigned long)
 * Address: 001d66d4
 */
PTheSerChipRegistry::GetChipPtr(unsigned long) {
    /*
        1d66d4:	e1a0c00d 	mov	ip, sp
        1d66d8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1d66dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d66e0:	e1a04000 	mov	r4, r0
        1d66e4:	e24dd004 	sub	sp, sp, #4	; 0x4
        1d66e8:	e1a0200d 	mov	r2, sp
        1d66ec:	eb622ea1 	bl	1a62178 <PTheSerChipRegistry::$IDToIndex(unsigned long, unsigned long *)>
        1d66f0:	e3300000 	teq	r0, #0	; 0x0
        1d66f4:	159d0000 	ldrne	r0, [sp]
        1d66f8:	10840180 	addne	r0, r4, r0, lsl #3
        1d66fc:	15900010 	ldrne	r0, [r0, #16]	; fField16
        1d6700:	03a00000 	moveq	r0, #0	; 0x0
        1d6704:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: ClassInfo__19PTheSerChipRegistrySFv
 * Address: 00384da0
 */
void PTheSerChipRegistry::ClassInfo() {
    /*
        384da0:	e24f0044 	sub	r0, pc, #68	; 0x44
        384da4:	e1a0f00e 	mov	pc, lr
        384da8:	e3a00000 	mov	r0, #0	; 0x0
        384dac:	e1a0f00e 	mov	pc, lr
        384db0:	50546865 	subpls	r6, r4, r5, ror #16
        384db4:	53657243 	cmnpl	r5, #805306372	; 0x30000004
        384db8:	68697052 	stmvsda	r9!, {r1, r4, r6, ip, sp, lr}^
        384dbc:	65676973 	strvsb	r6, [r7, -#2419]!
        384dc0:	74727900 	ldrvcbt	r7, [r2], -#2304
        384dc4:	50536572 	subpls	r6, r3, r2, ror r5
        384dc8:	69616c43 	stmvsdb	r1!, {r0, r1, r6, sl, fp, sp, lr}^
        384dcc:	68697052 	stmvsda	r9!, {r1, r4, r6, ip, sp, lr}^
        384dd0:	65676973 	strvsb	r6, [r7, -#2419]!
        384dd4:	74727900 	ldrvcbt	r7, [r2], -#2304
        384de0:	eaffffee 	b	384da0 <ClassInfo__19PTheSerChipRegistrySFv>
        384de4:	ea5b78e8 	b	1a6318c <PTheSerChipRegistry::$New(void)>
        384de8:	ea5b78e5 	b	1a63184 <PTheSerChipRegistry::$Init(void)>
        384dec:	ea5b74d3 	b	1a62140 <PTheSerChipRegistry::$Delete(void)>
        384df0:	ea5b78ea 	b	1a631a0 <PTheSerChipRegistry::$Register(TSerialChip *, unsigned long)>
        384df4:	ea5b78f5 	b	1a631d0 <PTheSerChipRegistry::$UnRegister(TSerialChip *)>
        384df8:	ea5b78ed 	b	1a631b4 <PTheSerChipRegistry::$SetDefaultChip(unsigned long, unsigned long *, unsigned char)>
        384dfc:	ea5b74d8 	b	1a62164 <PTheSerChipRegistry::$GetChipPtr(unsigned long)>
        384e00:	ea5b74d6 	b	1a62160 <PTheSerChipRegistry::$GetChipLocation(unsigned long)>
        384e04:	ea5b74d0 	b	1a6214c <PTheSerChipRegistry::$FindByChip(TSerialChip *)>
        384e08:	ea5b74d1 	b	1a62154 <PTheSerChipRegistry::$FindByOption(TCMOSerialChipSpec *)>
        384e0c:	ea5b74cf 	b	1a62150 <PTheSerChipRegistry::$FindByLocation(unsigned long)>
        384e10:	ea5b74c5 	b	1a6212c <PTheSerChipRegistry::$ClaimSerialChip(unsigned long, unsigned char, unsigned long)>
        384e14:	ea5b74d3 	b	1a62168 <PTheSerChipRegistry::$GetDefaultChip(unsigned long, unsigned long *)>
        384e18:	e1a0000f 	mov	r0, pc
        384e1c:	e1a0f00e 	mov	pc, lr
        384e20:	50536572 	subpls	r6, r3, r2, ror r5
        384e24:	69616c43 	stmvsdb	r1!, {r0, r1, r6, sl, fp, sp, lr}^
        384e28:	68697052 	stmvsda	r9!, {r1, r4, r6, ip, sp, lr}^
        384e2c:	65676973 	strvsb	r6, [r7, -#2419]!
        384e30:	74727900 	ldrvcbt	r7, [r2], -#2304
    */
}

