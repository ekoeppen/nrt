#include "include/TPackageEventHandler.h"

/**
 * Symbol: TPackageEventHandler::__ct(void)
 * Address: 0015e07c
 */
TPackageEventHandler::TPackageEventHandler(void) {
    /*
        15e07c:	e1a0c00d 	mov	ip, sp
        15e080:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        15e084:	e24cb004 	sub	fp, ip, #4	; 0x4
        15e088:	e1b04000 	movs	r4, r0
        15e08c:	1a000003 	bne	15e0a0 <TPackageEventHandler::__ct(void)+0x24>
        15e090:	e3a0006c 	mov	r0, #108	; 0x6c
        15e094:	eb69c1a7 	bl	1bce738 <$__nw(unsigned int)>
        15e098:	e1b04000 	movs	r4, r0
        15e09c:	0a00001d 	beq	15e118 <TPackageEventHandler::__ct(void)+0x9c>
        15e0a0:	e1a00004 	mov	r0, r4
        15e0a4:	eb6a1857 	bl	1be4208 <TAEventHandler::$__ct(void)>
        15e0a8:	e2840044 	add	r0, r4, #68	; 0x44
        15e0ac:	eb6a1853 	bl	1be4200 <CArrayIterator::$__ct(void)>
        15e0b0:	e59f0068 	ldr	r0, [pc, #68]	; 15e120 <TPackageEventHandler::__ct(void)+0xa4>
        15e0b4:	e3a05000 	mov	r5, #0	; 0x0
        15e0b8:	e5840000 	str	r0, [r4]
        15e0bc:	e5c4501c 	strb	r5, [r4, #28]	; fField28
        15e0c0:	e5845028 	str	r5, [r4, #40]	; fField40
        15e0c4:	e584503c 	str	r5, [r4, #60]	; fField60
        15e0c8:	e584502c 	str	r5, [r4, #44]	; fField44
        15e0cc:	e5845040 	str	r5, [r4, #64]	; fField64
        15e0d0:	e5c45064 	strb	r5, [r4, #100]	; fField100
        15e0d4:	e1a00004 	mov	r0, r4
        15e0d8:	eb66a093 	bl	1b0632c <TPackageEventHandler::$SetPersistentHeap(void)>
        15e0dc:	e3a02006 	mov	r2, #6	; 0x6
        15e0e0:	e3a01030 	mov	r1, #48	; 0x30
        15e0e4:	e3a00000 	mov	r0, #0	; 0x0
        15e0e8:	eb6a1439 	bl	1be31d4 <CDynamicArray::$__ct(long, long)>
        15e0ec:	e5840014 	str	r0, [r4, #20]	; fField20
        15e0f0:	e1a00004 	mov	r0, r4
        15e0f4:	eb669c7f 	bl	1b052f8 <TPackageEventHandler::$SetDefaultHeap(void)>
        15e0f8:	e3a02008 	mov	r2, #8	; 0x8
        15e0fc:	e3a01008 	mov	r1, #8	; 0x8
        15e100:	e3a00000 	mov	r0, #0	; 0x0
        15e104:	eb6a1432 	bl	1be31d4 <CDynamicArray::$__ct(long, long)>
        15e108:	e5840018 	str	r0, [r4, #24]	; fField24
        15e10c:	e5845060 	str	r5, [r4, #96]	; fField96
        15e110:	e1a00004 	mov	r0, r4
        15e114:	eb66e6a9 	bl	1b17bc0 <TPackageEventHandler::$InitValidatePackageDriver(void)>
        15e118:	e1a00004 	mov	r0, r4
        15e11c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        15e120:	0001eff4 	streqd	lr, [r1], -r4
    */
}

/**
 * Symbol: TPackageEventHandler::__dt(void)
 * Address: 0015e124
 */
TPackageEventHandler::~TPackageEventHandler(void) {
    /*
        15e124:	e1a0c00d 	mov	ip, sp
        15e128:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        15e12c:	e24cb004 	sub	fp, ip, #4	; 0x4
        15e130:	e1a04000 	mov	r4, r0
        15e134:	e1a05001 	mov	r5, r1
        15e138:	e59f003c 	ldr	r0, [pc, #3c]	; 15e17c <TPackageEventHandler::__dt(void)+0x58>
        15e13c:	e5840000 	str	r0, [r4]
        15e140:	e5940018 	ldr	r0, [r4, #24]	; fField24
        15e144:	e3300000 	teq	r0, #0	; 0x0
        15e148:	13a01001 	movne	r1, #1	; 0x1
        15e14c:	1b6a1844 	blne	1be4264 <CDynamicArray::$__dt(void)>
        15e150:	e2840044 	add	r0, r4, #68	; 0x44
        15e154:	e3a01000 	mov	r1, #0	; 0x0
        15e158:	eb6a1842 	bl	1be4268 <CArrayIterator::$__dt(void)>
        15e15c:	e1a00004 	mov	r0, r4
        15e160:	e3a01000 	mov	r1, #0	; 0x0
        15e164:	eb6a1841 	bl	1be4270 <TAEventHandler::$__dt(void)>
        15e168:	e3150001 	tst	r5, #1	; 0x1
        15e16c:	11a00004 	movne	r0, r4
        15e170:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        15e174:	1a69bd59 	bne	1bcd6e0 <$__dl(void *)>
        15e178:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        15e17c:	0001eff4 	streqd	lr, [r1], -r4
    */
}

/**
 * Symbol: TPackageEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 0015e180
 */
TPackageEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        15e180:	e1a01003 	mov	r1, r3
        15e184:	e5922000 	ldr	r2, [r2]
        15e188:	e3520010 	cmp	r2, #16	; 0x10
        15e18c:	31a0f00e 	movcc	pc, lr
        15e190:	e5912008 	ldr	r2, [r1, #8]
        15e194:	e59fc038 	ldr	ip, [pc, #38]	; 15e1d4 <TPackageEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x54>
        15e198:	e152000c 	cmp	r2, ip
        15e19c:	0a676ed6 	beq	1b39cfc <TPackageEventHandler::$SafeToDeactivatePackage(TPkSafeToDeactivate *)>
        15e1a0:	ca00000f 	bgt	15e1e4 <TPackageEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x64>
        15e1a4:	e59fc02c 	ldr	ip, [pc, #2c]	; 15e1d8 <TPackageEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x58>
        15e1a8:	e132000c 	teq	r2, ip
        15e1ac:	0a665604 	beq	1af39c4 <TPackageEventHandler::$BeginLoadPackage(TPkBeginLoadEvent *)>
        15e1b0:	e59fc024 	ldr	ip, [pc, #24]	; 15e1dc <TPackageEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x5c>	; fField24
        15e1b4:	e132000c 	teq	r2, ip
        15e1b8:	0a666ec0 	beq	1af9cc0 <TPackageEventHandler::$GetBackupInfo(TPkBackupEvent *)>
        15e1bc:	e59fc01c 	ldr	ip, [pc, #1c]	; 15e1e0 <TPackageEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x60>
        15e1c0:	e132000c 	teq	r2, ip
        15e1c4:	03a03001 	moveq	r3, #1	; 0x1
        15e1c8:	03a02001 	moveq	r2, #1	; 0x1
        15e1cc:	0a669810 	beq	1b04214 <TPackageEventHandler::$RemovePackage(TPkRemoveEvent *, unsigned char, unsigned char)>
        15e1d0:	e1a0f00e 	mov	pc, lr
        15e1d4:	706b7363 	rsbvc	r7, fp, r3, ror #6
        15e1d8:	706b626c 	rsbvc	r6, fp, ip, ror #4
        15e1dc:	706b6275 	rsbvc	r6, fp, r5, ror r2
        15e1e0:	706b726d 	rsbvc	r7, fp, sp, ror #4
        15e1e4:	e59fc014 	ldr	ip, [pc, #14]	; 15e200 <TPackageEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x80>
        15e1e8:	e132000c 	teq	r2, ip
        15e1ec:	0a668fe2 	beq	1b0217c <TPackageEventHandler::$Register(TPkRegisterEvent *)>
        15e1f0:	e59fc00c 	ldr	ip, [pc, #c]	; 15e204 <TPackageEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x84>
        15e1f4:	e132000c 	teq	r2, ip
        15e1f8:	0a66aca0 	beq	1b09480 <TPackageEventHandler::$Unregister(TPkUnregisterEvent *)>
        15e1fc:	e1a0f00e 	mov	pc, lr
        15e200:	72677472 	rsbvc	r7, r7, #1912602624	; 0x72000000
        15e204:	75726772 	ldrvcb	r6, [r2, -#1906]!
    */
}

/**
 * Symbol: TPackageEventHandler::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 0015e208
 */
TPackageEventHandler::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        15e208:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageEventHandler::InitValidatePackageDriver(void)
 * Address: 0015e20c
 */
TPackageEventHandler::InitValidatePackageDriver(void) {
    /*
        15e20c:	e1a0c00d 	mov	ip, sp
        15e210:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        15e214:	e24cb004 	sub	fp, ip, #4	; 0x4
        15e218:	e1a04000 	mov	r4, r0
        15e21c:	e28f1f03 	add	r1, pc, #12	; 0xc
        15e220:	e28f0f07 	add	r0, pc, #28	; 0x1c
        15e224:	eb69e658 	bl	1bd7b8c <$NewByName__FPCcT1>
        15e228:	e5a40068 	str	r0, [r4, #104]!	; fField104
        15e22c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        15e230:	5456616c 	ldrplb	r6, [r6], -#364
        15e234:	69646174 	stmvsdb	r4!, {r2, r4, r5, r6, r8, sp, lr}^
        15e238:	65506163 	ldrvsb	r6, [r0, -#355]
        15e23c:	6b616765 	blvs	19b7fd8 <ROM$$Size+0x129838c>
        15e240:	00000000 	andeq	r0, r0, r0
        15e244:	5456616c 	ldrplb	r6, [r6], -#364
        15e248:	69646174 	stmvsdb	r4!, {r2, r4, r5, r6, r8, sp, lr}^
        15e24c:	65506163 	ldrvsb	r6, [r0, -#355]
        15e250:	6b616765 	blvs	19b7fec <ROM$$Size+0x12983a0>
        15e254:	44726976 	ldrmibt	r6, [r2], -#2422
        15e258:	65720000 	ldrvsb	r0, [r2]!
    */
}

/**
 * Symbol: TPackageEventHandler::ValidatePackage(TPkBeginLoadEvent *, TPackageIterator *)
 * Address: 0015e25c
 */
TPackageEventHandler::ValidatePackage(TPkBeginLoadEvent *, TPackageIterator *) {
    /*
        15e25c:	e1a0c00d 	mov	ip, sp
        15e260:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        15e264:	e24cb004 	sub	fp, ip, #4	; 0x4
        15e268:	e1a05000 	mov	r5, r0
        15e26c:	e1a04001 	mov	r4, r1
        15e270:	e1a06002 	mov	r6, r2
        15e274:	e3a08000 	mov	r8, #0	; 0x0
        15e278:	e5d10018 	ldrb	r0, [r1, #24]	; fField24
        15e27c:	e3300001 	teq	r0, #1	; 0x1
        15e280:	0a000039 	beq	15e36c <TPackageEventHandler::ValidatePackage(TPkBeginLoadEvent *, TPackageIterator *)+0x110>
        15e284:	e3a07000 	mov	r7, #0	; 0x0
        15e288:	e3a08000 	mov	r8, #0	; 0x0
        15e28c:	e5950028 	ldr	r0, [r5, #40]	; fField40
        15e290:	eb69e651 	bl	1bd7bdc <TPackageIterator::$PackageSize(void)>
        15e294:	e1a09000 	mov	r9, r0
        15e298:	e5d40018 	ldrb	r0, [r4, #24]	; fField24
        15e29c:	e3300003 	teq	r0, #3	; 0x3
        15e2a0:	1a00000c 	bne	15e2d8 <TPackageEventHandler::ValidatePackage(TPkBeginLoadEvent *, TPackageIterator *)+0x7c>
        15e2a4:	e1a00006 	mov	r0, r6
        15e2a8:	e5947020 	ldr	r7, [r4, #32]	; fField32
        15e2ac:	eb69e644 	bl	1bd7bc4 <TPackageIterator::$PackageFlags(void)>
        15e2b0:	e3100401 	tst	r0, #16777216	; 0x1000000
        15e2b4:	0a000007 	beq	15e2d8 <TPackageEventHandler::ValidatePackage(TPkBeginLoadEvent *, TPackageIterator *)+0x7c>
        15e2b8:	e1a00006 	mov	r0, r6
        15e2bc:	eb69e63b 	bl	1bd7bb0 <TPackageIterator::$NumberOfParts(void)>
        15e2c0:	e3500001 	cmp	r0, #1	; 0x1
        15e2c4:	9a000003 	bls	15e2d8 <TPackageEventHandler::ValidatePackage(TPkBeginLoadEvent *, TPackageIterator *)+0x7c>
        15e2c8:	e2401001 	sub	r1, r0, #1	; 0x1
        15e2cc:	e1a00006 	mov	r0, r6
        15e2d0:	eb69d9cb 	bl	1bd4a04 <TPackageIterator::$GetPartDataOffset(unsigned long)>
        15e2d4:	e0808007 	add	r8, r0, r7
        15e2d8:	e1a03008 	mov	r3, r8
        15e2dc:	e92d0008 	stmdb	sp!, {r3}
        15e2e0:	e2841040 	add	r1, r4, #64	; 0x40
        15e2e4:	e1a03009 	mov	r3, r9
        15e2e8:	e1a02007 	mov	r2, r7
        15e2ec:	e5950068 	ldr	r0, [r5, #104]	; fField104
        15e2f0:	eb66e62b 	bl	1b17ba4 <TValidatePackageDriver::$ValidateBegin(unsigned short *, char *, unsigned long, char *)>
        15e2f4:	e28dd004 	add	sp, sp, #4	; 0x4
        15e2f8:	e1b08000 	movs	r8, r0
        15e2fc:	1288cda2 	addne	ip, r8, #10368	; 0x2880
        15e300:	137c0021 	cmnne	ip, #33	; 0x21
        15e304:	13370000 	teqne	r7, #0	; 0x0
        15e308:	0a000017 	beq	15e36c <TPackageEventHandler::ValidatePackage(TPkBeginLoadEvent *, TPackageIterator *)+0x110>
        15e30c:	e24dd024 	sub	sp, sp, #36	; 0x24
        15e310:	e28d001c 	add	r0, sp, #28	; 0x1c
        15e314:	eb66e626 	bl	1b17bb4 <CValidateBackupPipe::$__ct(void)>
        15e318:	e1a0000d 	mov	r0, sp
        15e31c:	eb66e202 	bl	1b16b2c <RDMParams::$__ct(void)>
        15e320:	e28d001c 	add	r0, sp, #28	; 0x1c
        15e324:	e5951068 	ldr	r1, [r5, #104]	; fField104
        15e328:	eb66e622 	bl	1b17bb8 <CValidateBackupPipe::$Init(TValidatePackageDriver *)>
        15e32c:	e1a0000d 	mov	r0, sp
        15e330:	e5b41020 	ldr	r1, [r4, #32]!	; fField32
        15e334:	eb66b4ae 	bl	1b0b5f4 <$GetLargeObjectInfo(RDMParams *, unsigned long)>
        15e338:	e89d0006 	ldmia	sp, {r1, r2}
        15e33c:	e28d001c 	add	r0, sp, #28	; 0x1c
        15e340:	e3a03000 	mov	r3, #0	; 0x0
        15e344:	eb66e625 	bl	1b17be0 <$BackupPackage(CPipe *, TStore *, unsigned long, TLOCallback *)>
        15e348:	e1a01000 	mov	r1, r0
        15e34c:	e5b50068 	ldr	r0, [r5, #104]!	; fField104
        15e350:	eb66e614 	bl	1b17ba8 <TValidatePackageDriver::$ValidateEnd(long)>
        15e354:	e1a08000 	mov	r8, r0
        15e358:	e28d001c 	add	r0, sp, #28	; 0x1c
        15e35c:	e3a01000 	mov	r1, #0	; 0x0
        15e360:	e1a0e00f 	mov	lr, pc
        15e364:	e59df01c 	ldr	pc, [sp, #28]	; fField28
        15e368:	e28dd024 	add	sp, sp, #36	; 0x24
        15e36c:	e1a00008 	mov	r0, r8
        15e370:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TPackageEventHandler::GetUniquePackageId(void)
 * Address: 0015e374
 */
TPackageEventHandler::GetUniquePackageId(void) {
    /*
        15e374:	e1a0c00d 	mov	ip, sp
        15e378:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        15e37c:	e24cb004 	sub	fp, ip, #4	; 0x4
        15e380:	e1a04000 	mov	r4, r0
        15e384:	e24dd004 	sub	sp, sp, #4	; 0x4
        15e388:	ea000008 	b	15e3b0 <TPackageEventHandler::GetUniquePackageId(void)+0x3c>
        15e38c:	e3350000 	teq	r5, #0	; 0x0
        15e390:	03a05001 	moveq	r5, #1	; 0x1
        15e394:	e1a02005 	mov	r2, r5
        15e398:	e1a0100d 	mov	r1, sp
        15e39c:	e1a00004 	mov	r0, r4
        15e3a0:	eb669bc1 	bl	1b052ac <TPackageEventHandler::$SearchPackageList(long *, unsigned long)>
        15e3a4:	e3300000 	teq	r0, #0	; 0x0
        15e3a8:	11a00005 	movne	r0, r5
        15e3ac:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        15e3b0:	eb6959ac 	bl	1bb4a68 <$rand>
        15e3b4:	e3c054ff 	bic	r5, r0, #-16777216	; 0xff000000
        15e3b8:	eafffff3 	b	15e38c <TPackageEventHandler::GetUniquePackageId(void)+0x18>
    */
}

/**
 * Symbol: TPackageEventHandler::LoadProtocolCode(void **, PartInfo &, SourceType, PartSource const &)
 * Address: 0015e3bc
 */
TPackageEventHandler::LoadProtocolCode(void **, PartInfo &, SourceType, PartSource const &) {
    /*
        15e3bc:	e1a0c00d 	mov	ip, sp
        15e3c0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        15e3c4:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        15e3c8:	e24cb014 	sub	fp, ip, #20	; 0x14
        15e3cc:	e1a06000 	mov	r6, r0
        15e3d0:	e1a04001 	mov	r4, r1
        15e3d4:	e1a05002 	mov	r5, r2
        15e3d8:	e3a07000 	mov	r7, #0	; 0x0
        15e3dc:	e59b8018 	ldr	r8, [fp, #24]	; fField24
        15e3e0:	e24dd008 	sub	sp, sp, #8	; 0x8
        15e3e4:	e28b1010 	add	r1, fp, #16	; 0x10
        15e3e8:	e8911008 	ldmia	r1, {r3, ip}
        15e3ec:	e88d1008 	stmia	sp, {r3, ip}
        15e3f0:	e4dd0008 	ldrb	r0, [sp], #8
        15e3f4:	e3100001 	tst	r0, #1	; 0x1
        15e3f8:	e3a09000 	mov	r9, #0	; 0x0
        15e3fc:	1a00000a 	bne	15e42c <TPackageEventHandler::LoadProtocolCode(void **, PartInfo &, SourceType, PartSource const &)+0x70>
        15e400:	e24dd018 	sub	sp, sp, #24	; 0x18
        15e404:	e28d0004 	add	r0, sp, #4	; 0x4
        15e408:	eb69bcb0 	bl	1bcd6d0 <CPartPipe::$__ct(void)>
        15e40c:	e5cd9000 	strb	r9, [sp]
        15e410:	e3a00000 	mov	r0, #0	; 0x0
        15e414:	eb6a177e 	bl	1be4214 <CShadowRingBuffer::$__ct(void)>
        15e418:	e1b07000 	movs	r7, r0
        15e41c:	1a000014 	bne	15e474 <TPackageEventHandler::LoadProtocolCode(void **, PartInfo &, SourceType, PartSource const &)+0xb8>
        15e420:	eb6a0f3e 	bl	1be2120 <$MemError>
        15e424:	e1a07000 	mov	r7, r0
        15e428:	ea000047 	b	15e54c <TPackageEventHandler::LoadProtocolCode(void **, PartInfo &, SourceType, PartSource const &)+0x190>
        15e42c:	e5d50024 	ldrb	r0, [r5, #36]	; fField36
        15e430:	e3300000 	teq	r0, #0	; 0x0
        15e434:	0a00004b 	beq	15e568 <TPackageEventHandler::LoadProtocolCode(void **, PartInfo &, SourceType, PartSource const &)+0x1ac>
        15e438:	e1a00006 	mov	r0, r6
        15e43c:	eb669fba 	bl	1b0632c <TPackageEventHandler::$SetPersistentHeap(void)>
        15e440:	e5950008 	ldr	r0, [r5, #8]
        15e444:	eb69e1c7 	bl	1bd6b68 <$malloc>
        15e448:	e5840000 	str	r0, [r4]
        15e44c:	eb6a0f33 	bl	1be2120 <$MemError>
        15e450:	e1a07000 	mov	r7, r0
        15e454:	e1a00006 	mov	r0, r6
        15e458:	eb669ba6 	bl	1b052f8 <TPackageEventHandler::$SetDefaultHeap(void)>
        15e45c:	e5941000 	ldr	r1, [r4]
        15e460:	e3310000 	teq	r1, #0	; 0x0
        15e464:	15b52008 	ldrne	r2, [r5, #8]!
        15e468:	15980000 	ldrne	r0, [r8]
        15e46c:	1b6a02b8 	blne	1bdef54 <$BlockMove>
        15e470:	ea00003e 	b	15e570 <TPackageEventHandler::LoadProtocolCode(void **, PartInfo &, SourceType, PartSource const &)+0x1b4>
        15e474:	e1a00007 	mov	r0, r7
        15e478:	e3a03000 	mov	r3, #0	; 0x0
        15e47c:	e3a02000 	mov	r2, #0	; 0x0
        15e480:	e5981000 	ldr	r1, [r8]
        15e484:	eb6a2c0c 	bl	1be94bc <CShadowRingBuffer::$Init(unsigned long, long, long)>
        15e488:	e1a02007 	mov	r2, r7
        15e48c:	e28d0004 	add	r0, sp, #4	; 0x4
        15e490:	e3a03001 	mov	r3, #1	; 0x1
        15e494:	e5b81004 	ldr	r1, [r8, #4]!
        15e498:	eb69dd8c 	bl	1bd5ad0 <CPartPipe::$Init(unsigned long, CShadowRingBuffer *, unsigned char)>
        15e49c:	e1a00006 	mov	r0, r6
        15e4a0:	eb669fa1 	bl	1b0632c <TPackageEventHandler::$SetPersistentHeap(void)>
        15e4a4:	e5950008 	ldr	r0, [r5, #8]
        15e4a8:	eb69e1ae 	bl	1bd6b68 <$malloc>
        15e4ac:	e5840000 	str	r0, [r4]
        15e4b0:	eb6a0f1a 	bl	1be2120 <$MemError>
        15e4b4:	e1a07000 	mov	r7, r0
        15e4b8:	e1a00006 	mov	r0, r6
        15e4bc:	eb669b8d 	bl	1b052f8 <TPackageEventHandler::$SetDefaultHeap(void)>
        15e4c0:	e5940000 	ldr	r0, [r4]
        15e4c4:	e3300000 	teq	r0, #0	; 0x0
        15e4c8:	0a00001f 	beq	15e54c <TPackageEventHandler::LoadProtocolCode(void **, PartInfo &, SourceType, PartSource const &)+0x190>
        15e4cc:	e52d906c 	str	r9, [sp, -#108]!
        15e4d0:	e28d0008 	add	r0, sp, #8	; 0x8
        15e4d4:	eb695126 	bl	1bb2974 <$setjmp>
        15e4d8:	e3300000 	teq	r0, #0	; 0x0
        15e4dc:	1a00000d 	bne	15e518 <TPackageEventHandler::LoadProtocolCode(void **, PartInfo &, SourceType, PartSource const &)+0x15c>
        15e4e0:	e1a0000d 	mov	r0, sp
        15e4e4:	eb6a06e4 	bl	1be007c <$AddExceptionHandler>
        15e4e8:	e24dd004 	sub	sp, sp, #4	; 0x4
        15e4ec:	e5b50008 	ldr	r0, [r5, #8]!
        15e4f0:	e58d0000 	str	r0, [sp]
        15e4f4:	e28d0074 	add	r0, sp, #116	; 0x74
        15e4f8:	e28d3070 	add	r3, sp, #112	; 0x70
        15e4fc:	e1a0200d 	mov	r2, sp
        15e500:	e5941000 	ldr	r1, [r4]
        15e504:	e59dc074 	ldr	ip, [sp, #116]	; fField116
        15e508:	e1a0e00f 	mov	lr, pc
        15e50c:	e28cf014 	add	pc, ip, #20	; 0x14
        15e510:	e28dd004 	add	sp, sp, #4	; 0x4
        15e514:	ea000009 	b	15e540 <TPackageEventHandler::LoadProtocolCode(void **, PartInfo &, SourceType, PartSource const &)+0x184>
        15e518:	e59d0060 	ldr	r0, [sp, #96]	; fField96
        15e51c:	e59f1040 	ldr	r1, [pc, #40]	; 15e564 <TPackageEventHandler::LoadProtocolCode(void **, PartInfo &, SourceType, PartSource const &)+0x1a8>	; fField40
        15e520:	e5911000 	ldr	r1, [r1]
        15e524:	eb6a131a 	bl	1be3194 <$Subexception>
        15e528:	e3300000 	teq	r0, #0	; 0x0
        15e52c:	13e07e8a 	mvnne	r7, #2208	; 0x8a0
        15e530:	12477a02 	subne	r7, r7, #8192	; 0x2000
        15e534:	1a000001 	bne	15e540 <TPackageEventHandler::LoadProtocolCode(void **, PartInfo &, SourceType, PartSource const &)+0x184>
        15e538:	e1a0000d 	mov	r0, sp
        15e53c:	eb6a0f04 	bl	1be2154 <$NextHandler>
        15e540:	e1a0000d 	mov	r0, sp
        15e544:	eb6a0adb 	bl	1be10b8 <$ExitHandler>
        15e548:	e28dd06c 	add	sp, sp, #108	; 0x6c
        15e54c:	e28d0004 	add	r0, sp, #4	; 0x4
        15e550:	e3a01000 	mov	r1, #0	; 0x0
        15e554:	e1a0e00f 	mov	lr, pc
        15e558:	e59df004 	ldr	pc, [sp, #4]
        15e55c:	e28dd018 	add	sp, sp, #24	; 0x18
        15e560:	ea000002 	b	15e570 <TPackageEventHandler::LoadProtocolCode(void **, PartInfo &, SourceType, PartSource const &)+0x1b4>
        15e564:	00371324 	eoreqs	r1, r7, r4, lsr #6
        15e568:	e5980000 	ldr	r0, [r8]
        15e56c:	e5840000 	str	r0, [r4]
        15e570:	e1a00007 	mov	r0, r7
        15e574:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TPackageEventHandler::CheckAndInstallPatch(PartInfo &, SourceType, PartSource const &)
 * Address: 0015e578
 */
TPackageEventHandler::CheckAndInstallPatch(PartInfo &, SourceType, PartSource const &) {
    /*
        15e578:	e1a0c00d 	mov	ip, sp
        15e57c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        15e580:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        15e584:	e24cb014 	sub	fp, ip, #20	; 0x14
        15e588:	e1a05000 	mov	r5, r0
        15e58c:	e1a04001 	mov	r4, r1
        15e590:	e3a07000 	mov	r7, #0	; 0x0
        15e594:	e3a08000 	mov	r8, #0	; 0x0
        15e598:	e59ba014 	ldr	sl, [fp, #20]	; fField20
        15e59c:	e24dd084 	sub	sp, sp, #132	; 0x84
        15e5a0:	e1a0000d 	mov	r0, sp
        15e5a4:	eb66d500 	bl	1b139ac <$FillInSavedPatchInfoBlock(SSavedPatchInfo *)>
        15e5a8:	e3a01001 	mov	r1, #1	; 0x1
        15e5ac:	e3a02000 	mov	r2, #0	; 0x0
        15e5b0:	e5949014 	ldr	r9, [r4, #20]	; fField20
        15e5b4:	e59d0000 	ldr	r0, [sp]
        15e5b8:	e5993000 	ldr	r3, [r9]
        15e5bc:	e1300003 	teq	r0, r3
        15e5c0:	13a01000 	movne	r1, #0	; 0x0
        15e5c4:	e59d3004 	ldr	r3, [sp, #4]
        15e5c8:	e5990004 	ldr	r0, [r9, #4]
        15e5cc:	e1330000 	teq	r3, r0
        15e5d0:	13a01000 	movne	r1, #0	; 0x0
        15e5d4:	e3a00000 	mov	r0, #0	; 0x0
        15e5d8:	e08dc100 	add	ip, sp, r0, lsl #2
        15e5dc:	e0893100 	add	r3, r9, r0, lsl #2
        15e5e0:	e59ce008 	ldr	lr, [ip, #8]
        15e5e4:	e5936008 	ldr	r6, [r3, #8]
        15e5e8:	e13e0006 	teq	lr, r6
        15e5ec:	059cc01c 	ldreq	ip, [ip, #28]	; fField28
        15e5f0:	0593301c 	ldreq	r3, [r3, #28]	; fField28
        15e5f4:	013c0003 	teqeq	ip, r3
        15e5f8:	13a01000 	movne	r1, #0	; 0x0
        15e5fc:	e08d3200 	add	r3, sp, r0, lsl #4
        15e600:	e5933038 	ldr	r3, [r3, #56]	; fField56
        15e604:	e089c200 	add	ip, r9, r0, lsl #4
        15e608:	e59cc038 	ldr	ip, [ip, #56]	; fField56
        15e60c:	e153000c 	cmp	r3, ip
        15e610:	83a01000 	movhi	r1, #0	; 0x0
        15e614:	33a02001 	movcc	r2, #1	; 0x1
        15e618:	e2800001 	add	r0, r0, #1	; 0x1
        15e61c:	e3500005 	cmp	r0, #5	; 0x5
        15e620:	baffffec 	blt	15e5d8 <TPackageEventHandler::CheckAndInstallPatch(PartInfo &, SourceType, PartSource const &)+0x60>
        15e624:	e3320000 	teq	r2, #0	; 0x0
        15e628:	03a01000 	moveq	r1, #0	; 0x0
        15e62c:	e24dd03c 	sub	sp, sp, #60	; 0x3c
        15e630:	e3310000 	teq	r1, #0	; 0x0
        15e634:	0a000067 	beq	15e7d8 <TPackageEventHandler::CheckAndInstallPatch(PartInfo &, SourceType, PartSource const &)+0x260>
        15e638:	e28d1034 	add	r1, sp, #52	; 0x34
        15e63c:	e59f603c 	ldr	r6, [pc, #3c]	; 15e680 <TPackageEventHandler::CheckAndInstallPatch(PartInfo &, SourceType, PartSource const &)+0x108>
        15e640:	e1a00006 	mov	r0, r6
        15e644:	eb69d0ad 	bl	1bd2900 <$FindEnvironmentId__13MemObjManagerSFUlPUl>
        15e648:	e1b07000 	movs	r7, r0
        15e64c:	1a000009 	bne	15e678 <TPackageEventHandler::CheckAndInstallPatch(PartInfo &, SourceType, PartSource const &)+0x100>
        15e650:	e28d1030 	add	r1, sp, #48	; 0x30
        15e654:	e1a00006 	mov	r0, r6
        15e658:	eb69cca6 	bl	1bd18f8 <$FindDomainId__13MemObjManagerSFUlPUl>
        15e65c:	e1b07000 	movs	r7, r0
        15e660:	1a000004 	bne	15e678 <TPackageEventHandler::CheckAndInstallPatch(PartInfo &, SourceType, PartSource const &)+0x100>
        15e664:	e28d1004 	add	r1, sp, #4	; 0x4
        15e668:	e1a00006 	mov	r0, r6
        15e66c:	eb69d4d2 	bl	1bd39bc <$GetDomainInfoByName__13MemObjManagerSFUlP10DomainInfo>
        15e670:	e1b07000 	movs	r7, r0
        15e674:	0a000002 	beq	15e684 <TPackageEventHandler::CheckAndInstallPatch(PartInfo &, SourceType, PartSource const &)+0x10c>
        15e678:	e28dd0c0 	add	sp, sp, #192	; 0xc0
        15e67c:	ea000056 	b	15e7dc <TPackageEventHandler::CheckAndInstallPatch(PartInfo &, SourceType, PartSource const &)+0x264>
        15e680:	70726f74 	rsbvcs	r6, r2, r4, ror pc
        15e684:	e28d1038 	add	r1, sp, #56	; 0x38
        15e688:	e59d0034 	ldr	r0, [sp, #52]
        15e68c:	eb69f5c8 	bl	1bdbdb4 <$SetEnvironment(unsigned long, unsigned long *)>
        15e690:	e28d0004 	add	r0, sp, #4	; 0x4
        15e694:	eb667e16 	bl	1afdef4 <DomainInfo::$IsPersistent(void)>
        15e698:	e1b06000 	movs	r6, r0
        15e69c:	13a06101 	movne	r6, #1073741824	; 0x40000000
        15e6a0:	e28d0004 	add	r0, sp, #4	; 0x4
        15e6a4:	eb667e13 	bl	1afdef8 <DomainInfo::$IsReadOnly(void)>
        15e6a8:	e3300000 	teq	r0, #0	; 0x0
        15e6ac:	13a00002 	movne	r0, #2	; 0x2
        15e6b0:	e0866000 	add	r6, r6, r0
        15e6b4:	e28d0004 	add	r0, sp, #4	; 0x4
        15e6b8:	eb667e06 	bl	1afded8 <DomainInfo::$IsCacheable(void)>
        15e6bc:	e3300000 	teq	r0, #0	; 0x0
        15e6c0:	03a00001 	moveq	r0, #1	; 0x1
        15e6c4:	13a00000 	movne	r0, #0	; 0x0
        15e6c8:	e0866000 	add	r6, r6, r0
        15e6cc:	e28d0004 	add	r0, sp, #4	; 0x4
        15e6d0:	eb6675af 	bl	1afbd94 <DomainInfo::$HeapSize(void)>
        15e6d4:	e1a01000 	mov	r1, r0
        15e6d8:	e1a0200d 	mov	r2, sp
        15e6dc:	e1a03006 	mov	r3, r6
        15e6e0:	e59d0030 	ldr	r0, [sp, #48]	; fField48
        15e6e4:	eb6a0e98 	bl	1be214c <$NewVMHeap>
        15e6e8:	e1b07000 	movs	r7, r0
        15e6ec:	0a000003 	beq	15e700 <TPackageEventHandler::CheckAndInstallPatch(PartInfo &, SourceType, PartSource const &)+0x188>
        15e6f0:	e28d1034 	add	r1, sp, #52	; 0x34
        15e6f4:	e59d0038 	ldr	r0, [sp, #56]	; fField56
        15e6f8:	eb69f5ad 	bl	1bdbdb4 <$SetEnvironment(unsigned long, unsigned long *)>
        15e6fc:	eaffffdd 	b	15e678 <TPackageEventHandler::CheckAndInstallPatch(PartInfo &, SourceType, PartSource const &)+0x100>
        15e700:	eb6a0a79 	bl	1be10ec <$GetHeap>
        15e704:	e1a06000 	mov	r6, r0
        15e708:	e59d0000 	ldr	r0, [sp]
        15e70c:	eb6a129b 	bl	1be3180 <$SetHeap>
        15e710:	e5940008 	ldr	r0, [r4, #8]
        15e714:	eb6a0e89 	bl	1be2140 <$NewPtr>
        15e718:	e1a08000 	mov	r8, r0
        15e71c:	e1a00006 	mov	r0, r6
        15e720:	eb6a1296 	bl	1be3180 <$SetHeap>
        15e724:	e3380000 	teq	r8, #0	; 0x0
        15e728:	1a000004 	bne	15e740 <TPackageEventHandler::CheckAndInstallPatch(PartInfo &, SourceType, PartSource const &)+0x1c8>
        15e72c:	eb6a0e7b 	bl	1be2120 <$MemError>
        15e730:	e1a07000 	mov	r7, r0
        15e734:	e59d0000 	ldr	r0, [sp]
        15e738:	eb6a0a5a 	bl	1be10a8 <$DestroyVMHeap>
        15e73c:	eaffffeb 	b	15e6f0 <TPackageEventHandler::CheckAndInstallPatch(PartInfo &, SourceType, PartSource const &)+0x178>
        15e740:	e1a01008 	mov	r1, r8
        15e744:	e5b42008 	ldr	r2, [r4, #8]!
        15e748:	e59a0000 	ldr	r0, [sl]
        15e74c:	eb6a0200 	bl	1bdef54 <$BlockMove>
        15e750:	e24dd05c 	sub	sp, sp, #92	; 0x5c
        15e754:	e1a0000d 	mov	r0, sp
        15e758:	eb69bbde 	bl	1bcd6d8 <TUGestalt::$__ct(void)>
        15e75c:	e28d2008 	add	r2, sp, #8	; 0x8
        15e760:	e1a0000d 	mov	r0, sp
        15e764:	e3a03054 	mov	r3, #84	; 0x54
        15e768:	e3a01401 	mov	r1, #16777216	; 0x1000000
        15e76c:	e2811006 	add	r1, r1, #6	; 0x6
        15e770:	eb69d07d 	bl	1bd296c <TUGestalt::$Gestalt(unsigned long, void *, unsigned long)>
        15e774:	e3a0a000 	mov	sl, #0	; 0x0
        15e778:	e3a04000 	mov	r4, #0	; 0x0
        15e77c:	e0891204 	add	r1, r9, r4, lsl #4
        15e780:	e591203c 	ldr	r2, [r1, #60]	; fField60
        15e784:	e3320000 	teq	r2, #0	; 0x0
        15e788:	0a000009 	beq	15e7b4 <TPackageEventHandler::CheckAndInstallPatch(PartInfo &, SourceType, PartSource const &)+0x23c>
        15e78c:	e1a0000a 	mov	r0, sl
        15e790:	e1a06602 	mov	r6, r2, lsl #12
        15e794:	e3540000 	cmp	r4, #0	; 0x0
        15e798:	c2866a01 	addgt	r6, r6, #4096	; 0x1000
        15e79c:	e5911038 	ldr	r1, [r1, #56]	; fField56
        15e7a0:	e0880000 	add	r0, r8, r0
        15e7a4:	e1a03004 	mov	r3, r4
        15e7a8:	e1a02006 	mov	r2, r6
        15e7ac:	eb69e931 	bl	1bd8c78 <$RegisterPatch__FPvUlT2l>
        15e7b0:	e08aa006 	add	sl, sl, r6
        15e7b4:	e2844001 	add	r4, r4, #1	; 0x1
        15e7b8:	e3540005 	cmp	r4, #5	; 0x5
        15e7bc:	baffffee 	blt	15e77c <TPackageEventHandler::CheckAndInstallPatch(PartInfo &, SourceType, PartSource const &)+0x204>
        15e7c0:	e3a00001 	mov	r0, #1	; 0x1
        15e7c4:	e5c50064 	strb	r0, [r5, #100]	; fField100
        15e7c8:	e1a0000d 	mov	r0, sp
        15e7cc:	e3a01000 	mov	r1, #0	; 0x0
        15e7d0:	eb69bfd3 	bl	1bce724 <TUObject::$__dt(void)>
        15e7d4:	e28dd05c 	add	sp, sp, #92	; 0x5c
        15e7d8:	e28dd0c0 	add	sp, sp, #192	; 0xc0
        15e7dc:	e5d50064 	ldrb	r0, [r5, #100]	; fField100
        15e7e0:	e3300000 	teq	r0, #0	; 0x0
        15e7e4:	1a000002 	bne	15e7f4 <TPackageEventHandler::CheckAndInstallPatch(PartInfo &, SourceType, PartSource const &)+0x27c>
        15e7e8:	e3380000 	teq	r8, #0	; 0x0
        15e7ec:	11a00008 	movne	r0, r8
        15e7f0:	1b69d058 	blne	1bd2958 <$free>
        15e7f4:	e1a00007 	mov	r0, r7
        15e7f8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TPackageEventHandler::InstallPart(unsigned long *, long *, unsigned char *, PartId const &, ExtendedPartInfo &, SourceType, PartSource const &)
 * Address: 0015e804
 */
TPackageEventHandler::InstallPart(unsigned long *, long *, unsigned char *, PartId const &, ExtendedPartInfo &, SourceType, PartSource const &) {
    /*
        15e804:	e1a0c00d 	mov	ip, sp
        15e808:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        15e80c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        15e810:	e24cb014 	sub	fp, ip, #20	; 0x14
        15e814:	e1a04000 	mov	r4, r0
        15e818:	e1a05001 	mov	r5, r1
        15e81c:	e1a07002 	mov	r7, r2
        15e820:	e1a06003 	mov	r6, r3
        15e824:	e59b8018 	ldr	r8, [fp, #24]	; fField24
        15e828:	e59ba024 	ldr	sl, [fp, #36]	; fField36
        15e82c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        15e830:	e3a09000 	mov	r9, #0	; 0x0
        15e834:	e3a00000 	mov	r0, #0	; 0x0
        15e838:	e5820000 	str	r0, [r2]
        15e83c:	e5810000 	str	r0, [r1]
        15e840:	e5940028 	ldr	r0, [r4, #40]	; fField40
        15e844:	e5941038 	ldr	r1, [r4, #56]	; fField56
        15e848:	ebfff805 	bl	15c864 <TPackageIterator::ProcessorTypeOfPart(unsigned long)>
        15e84c:	e3300000 	teq	r0, #0	; 0x0
        15e850:	13300a01 	teqne	r0, #4096	; 0x1000
        15e854:	13a00000 	movne	r0, #0	; 0x0
        15e858:	15c60000 	strneb	r0, [r6]
        15e85c:	1a000099 	bne	15eac8 <TPackageEventHandler::InstallPart(unsigned long *, long *, unsigned char *, PartId const &, ExtendedPartInfo &, SourceType, PartSource const &)+0x2c4>
        15e860:	e5d80020 	ldrb	r0, [r8, #32]	; fField32
        15e864:	e3300000 	teq	r0, #0	; 0x0
        15e868:	0a00003a 	beq	15e958 <TPackageEventHandler::InstallPart(unsigned long *, long *, unsigned char *, PartId const &, ExtendedPartInfo &, SourceType, PartSource const &)+0x154>
        15e86c:	e5980000 	ldr	r0, [r8]
        15e870:	e3300002 	teq	r0, #2	; 0x2
        15e874:	1a00000c 	bne	15e8ac <TPackageEventHandler::InstallPart(unsigned long *, long *, unsigned char *, PartId const &, ExtendedPartInfo &, SourceType, PartSource const &)+0xa8>
        15e878:	e5980004 	ldr	r0, [r8, #4]
        15e87c:	e59fc248 	ldr	ip, [pc, #248]	; 15eacc <TPackageEventHandler::InstallPart(unsigned long *, long *, unsigned char *, PartId const &, ExtendedPartInfo &, SourceType, PartSource const &)+0x2c8>
        15e880:	e130000c 	teq	r0, ip
        15e884:	1a000033 	bne	15e958 <TPackageEventHandler::InstallPart(unsigned long *, long *, unsigned char *, PartId const &, ExtendedPartInfo &, SourceType, PartSource const &)+0x154>
        15e888:	e1a0300a 	mov	r3, sl
        15e88c:	e92d0008 	stmdb	sp!, {r3}
        15e890:	e1a01008 	mov	r1, r8
        15e894:	e1a00004 	mov	r0, r4
        15e898:	e28b301c 	add	r3, fp, #28	; 0x1c
        15e89c:	e893000c 	ldmia	r3, {r2, r3}
        15e8a0:	eb66bf97 	bl	1b0e704 <TPackageEventHandler::$CheckAndInstallPatch(PartInfo &, SourceType, PartSource const &)>
        15e8a4:	e28dd004 	add	sp, sp, #4	; 0x4
        15e8a8:	e1a09000 	mov	r9, r0
        15e8ac:	e5980000 	ldr	r0, [r8]
        15e8b0:	e3300000 	teq	r0, #0	; 0x0
        15e8b4:	1a000025 	bne	15e950 <TPackageEventHandler::InstallPart(unsigned long *, long *, unsigned char *, PartId const &, ExtendedPartInfo &, SourceType, PartSource const &)+0x14c>
        15e8b8:	e1a0300a 	mov	r3, sl
        15e8bc:	e92d0008 	stmdb	sp!, {r3}
        15e8c0:	e24dd008 	sub	sp, sp, #8	; 0x8
        15e8c4:	e28b101c 	add	r1, fp, #28	; 0x1c
        15e8c8:	e8915000 	ldmia	r1, {ip, lr}
        15e8cc:	e88d5000 	stmia	sp, {ip, lr}
        15e8d0:	e1a02008 	mov	r2, r8
        15e8d4:	e28d100c 	add	r1, sp, #12	; 0xc
        15e8d8:	e1a00004 	mov	r0, r4
        15e8dc:	e49d3004 	ldr	r3, [sp], #4
        15e8e0:	eb66c7e0 	bl	1b10868 <TPackageEventHandler::$LoadProtocolCode(void **, PartInfo &, SourceType, PartSource const &)>
        15e8e4:	e28dd008 	add	sp, sp, #8	; 0x8
        15e8e8:	e3300000 	teq	r0, #0	; 0x0
        15e8ec:	059d0000 	ldreq	r0, [sp]
        15e8f0:	0b69e8d1 	bleq	1bd8c3c <TClassInfo::$Register( const(void))>
        15e8f4:	e1b09000 	movs	r9, r0
        15e8f8:	e59d0000 	ldr	r0, [sp]
        15e8fc:	05850000 	streq	r0, [r5]
        15e900:	0a000014 	beq	15e958 <TPackageEventHandler::InstallPart(unsigned long *, long *, unsigned char *, PartId const &, ExtendedPartInfo &, SourceType, PartSource const &)+0x154>
        15e904:	e3300000 	teq	r0, #0	; 0x0
        15e908:	0a000010 	beq	15e950 <TPackageEventHandler::InstallPart(unsigned long *, long *, unsigned char *, PartId const &, ExtendedPartInfo &, SourceType, PartSource const &)+0x14c>
        15e90c:	e24dd008 	sub	sp, sp, #8	; 0x8
        15e910:	e28b101c 	add	r1, fp, #28	; 0x1c
        15e914:	e8911008 	ldmia	r1, {r3, ip}
        15e918:	e88d1008 	stmia	sp, {r3, ip}
        15e91c:	e4dd1008 	ldrb	r1, [sp], #8
        15e920:	e3110001 	tst	r1, #1	; 0x1
        15e924:	0a000008 	beq	15e94c <TPackageEventHandler::InstallPart(unsigned long *, long *, unsigned char *, PartId const &, ExtendedPartInfo &, SourceType, PartSource const &)+0x148>
        15e928:	e24dd008 	sub	sp, sp, #8	; 0x8
        15e92c:	e28b201c 	add	r2, fp, #28	; 0x1c
        15e930:	e8921008 	ldmia	r2, {r3, ip}
        15e934:	e88d1008 	stmia	sp, {r3, ip}
        15e938:	e4dd1008 	ldrb	r1, [sp], #8
        15e93c:	e3110001 	tst	r1, #1	; 0x1
        15e940:	15d81024 	ldrneb	r1, [r8, #36]	; fField36
        15e944:	13310000 	teqne	r1, #0	; 0x0
        15e948:	0a000000 	beq	15e950 <TPackageEventHandler::InstallPart(unsigned long *, long *, unsigned char *, PartId const &, ExtendedPartInfo &, SourceType, PartSource const &)+0x14c>
        15e94c:	eb69d001 	bl	1bd2958 <$free>
        15e950:	e3390000 	teq	r9, #0	; 0x0
        15e954:	1a000047 	bne	15ea78 <TPackageEventHandler::InstallPart(unsigned long *, long *, unsigned char *, PartId const &, ExtendedPartInfo &, SourceType, PartSource const &)+0x274>
        15e958:	e5d80023 	ldrb	r0, [r8, #35]
        15e95c:	e3300000 	teq	r0, #0	; 0x0
        15e960:	15983004 	ldrne	r3, [r8, #4]
        15e964:	159fc160 	ldrne	ip, [pc, #160]	; 15eacc <TPackageEventHandler::InstallPart(unsigned long *, long *, unsigned char *, PartId const &, ExtendedPartInfo &, SourceType, PartSource const &)+0x2c8>
        15e968:	1133000c 	teqne	r3, ip
        15e96c:	0a000041 	beq	15ea78 <TPackageEventHandler::InstallPart(unsigned long *, long *, unsigned char *, PartId const &, ExtendedPartInfo &, SourceType, PartSource const &)+0x274>
        15e970:	e28d2008 	add	r2, sp, #8	; 0x8
        15e974:	e28d1004 	add	r1, sp, #4	; 0x4
        15e978:	e1a00004 	mov	r0, r4
        15e97c:	eb669a4b 	bl	1b052b0 <TPackageEventHandler::$SearchRegistry(long *, unsigned long *, long)>
        15e980:	e1b09000 	movs	r9, r0
        15e984:	1a00003b 	bne	15ea78 <TPackageEventHandler::InstallPart(unsigned long *, long *, unsigned char *, PartId const &, ExtendedPartInfo &, SourceType, PartSource const &)+0x274>
        15e988:	e59d0008 	ldr	r0, [sp, #8]
        15e98c:	e1a01000 	mov	r1, r0
        15e990:	e5d4201c 	ldrb	r2, [r4, #28]	; fField28
        15e994:	e3320000 	teq	r2, #0	; 0x0
        15e998:	0a000002 	beq	15e9a8 <TPackageEventHandler::InstallPart(unsigned long *, long *, unsigned char *, PartId const &, ExtendedPartInfo &, SourceType, PartSource const &)+0x1a4>
        15e99c:	e5942020 	ldr	r2, [r4, #32]	; fField32
        15e9a0:	e1320000 	teq	r2, r0
        15e9a4:	05b41024 	ldreq	r1, [r4, #36]!	; fField36
        15e9a8:	e58d1008 	str	r1, [sp, #8]
        15e9ac:	e24dd00c 	sub	sp, sp, #12	; 0xc
        15e9b0:	e1a0000d 	mov	r0, sp
        15e9b4:	eb69bb44 	bl	1bcd6cc <TUPort::$__ct(unsigned long)>
        15e9b8:	e5950000 	ldr	r0, [r5]
        15e9bc:	e3300000 	teq	r0, #0	; 0x0
        15e9c0:	1588001c 	strne	r0, [r8, #28]	; fField28
        15e9c4:	e24ddf43 	sub	sp, sp, #268	; 0x10c
        15e9c8:	e1a0300a 	mov	r3, sl
        15e9cc:	e92d0008 	stmdb	sp!, {r3}
        15e9d0:	e24dd008 	sub	sp, sp, #8	; 0x8
        15e9d4:	e28b101c 	add	r1, fp, #28	; 0x1c
        15e9d8:	e8915000 	ldmia	r1, {ip, lr}
        15e9dc:	e88d5000 	stmia	sp, {ip, lr}
        15e9e0:	e1a02008 	mov	r2, r8
        15e9e4:	e28d0024 	add	r0, sp, #36	; 0x24
        15e9e8:	e59b1014 	ldr	r1, [fp, #20]	; fField20
        15e9ec:	e49d3004 	ldr	r3, [sp], #4
        15e9f0:	eb66478c 	bl	1af0828 <TPkPartInstallEvent::$__ct(PartId const &, ExtendedPartInfo const &, SourceType, PartSource const &)>
        15e9f4:	e28dd008 	add	sp, sp, #8	; 0x8
        15e9f8:	e1a0000d 	mov	r0, sp
        15e9fc:	eb66478e 	bl	1af083c <TPkPartInstallEventReply::$__ct(void)>
        15ea00:	e1a0000d 	mov	r0, sp
        15ea04:	e3a01018 	mov	r1, #24	; 0x18
        15ea08:	e3a02000 	mov	r2, #0	; 0x0
        15ea0c:	e3a0c000 	mov	ip, #0	; 0x0
        15ea10:	e3a0e000 	mov	lr, #0	; 0x0
        15ea14:	e3a03000 	mov	r3, #0	; 0x0
        15ea18:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        15ea1c:	e1a0300e 	mov	r3, lr
        15ea20:	e1a0100c 	mov	r1, ip
        15ea24:	e3a000f4 	mov	r0, #244	; 0xf4
        15ea28:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        15ea2c:	e28d3038 	add	r3, sp, #56	; 0x38
        15ea30:	e92d0008 	stmdb	sp!, {r3}
        15ea34:	e28d3f4e 	add	r3, sp, #312	; 0x138
        15ea38:	e28d0e13 	add	r0, sp, #304	; 0x130
        15ea3c:	e3a02002 	mov	r2, #2	; 0x2
        15ea40:	e3a01001 	mov	r1, #1	; 0x1
        15ea44:	eb69f0c0 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        15ea48:	e28dd024 	add	sp, sp, #36	; 0x24
        15ea4c:	e1b09000 	movs	r9, r0
        15ea50:	059d900c 	ldreq	r9, [sp, #12]
        15ea54:	e59d0010 	ldr	r0, [sp, #16]
        15ea58:	e5870000 	str	r0, [r7]
        15ea5c:	e5dd0014 	ldrb	r0, [sp, #20]	; fField20
        15ea60:	e5c60000 	strb	r0, [r6]
        15ea64:	e28ddf43 	add	sp, sp, #268	; 0x10c
        15ea68:	e1a0000d 	mov	r0, sp
        15ea6c:	e3a01000 	mov	r1, #0	; 0x0
        15ea70:	eb69bf2b 	bl	1bce724 <TUObject::$__dt(void)>
        15ea74:	e28dd00c 	add	sp, sp, #12	; 0xc
        15ea78:	e5950000 	ldr	r0, [r5]
        15ea7c:	e3300000 	teq	r0, #0	; 0x0
        15ea80:	13390000 	teqne	r9, #0	; 0x0
        15ea84:	0a00000e 	beq	15eac4 <TPackageEventHandler::InstallPart(unsigned long *, long *, unsigned char *, PartId const &, ExtendedPartInfo &, SourceType, PartSource const &)+0x2c0>
        15ea88:	eb69c77b 	bl	1bd087c <TClassInfo::$DeRegister( const(void))>
        15ea8c:	e24dd008 	sub	sp, sp, #8	; 0x8
        15ea90:	e28b001c 	add	r0, fp, #28	; 0x1c
        15ea94:	e8905000 	ldmia	r0, {ip, lr}
        15ea98:	e88d5000 	stmia	sp, {ip, lr}
        15ea9c:	e4dd0008 	ldrb	r0, [sp], #8
        15eaa0:	e3100001 	tst	r0, #1	; 0x1
        15eaa4:	0a000002 	beq	15eab4 <TPackageEventHandler::InstallPart(unsigned long *, long *, unsigned char *, PartId const &, ExtendedPartInfo &, SourceType, PartSource const &)+0x2b0>
        15eaa8:	e5d80024 	ldrb	r0, [r8, #36]	; fField36
        15eaac:	e3300000 	teq	r0, #0	; 0x0
        15eab0:	0a000001 	beq	15eabc <TPackageEventHandler::InstallPart(unsigned long *, long *, unsigned char *, PartId const &, ExtendedPartInfo &, SourceType, PartSource const &)+0x2b8>
        15eab4:	e5950000 	ldr	r0, [r5]
        15eab8:	eb69cfa6 	bl	1bd2958 <$free>
        15eabc:	e3a00000 	mov	r0, #0	; 0x0
        15eac0:	e5850000 	str	r0, [r5]
        15eac4:	e1a00009 	mov	r0, r9
        15eac8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        15eacc:	70746368 	rsbvcs	r6, r4, r8, ror #6
    */
}

/**
 * Symbol: TPackageEventHandler::BeginLoadPackage(TPkBeginLoadEvent *)
 * Address: 0015ead0
 */
TPackageEventHandler::BeginLoadPackage(TPkBeginLoadEvent *) {
    /*
        15ead0:	e1a0c00d 	mov	ip, sp
        15ead4:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        15ead8:	e24cb004 	sub	fp, ip, #4	; 0x4
        15eadc:	e1a04000 	mov	r4, r0
        15eae0:	e1a05001 	mov	r5, r1
        15eae4:	e24dd00c 	sub	sp, sp, #12	; 0xc
        15eae8:	e3a07000 	mov	r7, #0	; 0x0
        15eaec:	e2811018 	add	r1, r1, #24	; 0x18
        15eaf0:	e8911008 	ldmia	r1, {r3, ip}
        15eaf4:	e88d1008 	stmia	sp, {r3, ip}
        15eaf8:	e2801030 	add	r1, r0, #48	; 0x30
        15eafc:	e2850020 	add	r0, r5, #32	; 0x20
        15eb00:	e8901008 	ldmia	r0, {r3, ip}
        15eb04:	e8811008 	stmia	r1, {r3, ip}
        15eb08:	e3a06000 	mov	r6, #0	; 0x0
        15eb0c:	e5846038 	str	r6, [r4, #56]	; fField56
        15eb10:	e5c46064 	strb	r6, [r4, #100]	; fField100
        15eb14:	e24dd008 	sub	sp, sp, #8	; 0x8
        15eb18:	e28d1008 	add	r1, sp, #8	; 0x8
        15eb1c:	e8911008 	ldmia	r1, {r3, ip}
        15eb20:	e88d1008 	stmia	sp, {r3, ip}
        15eb24:	e4dd0008 	ldrb	r0, [sp], #8
        15eb28:	e3100001 	tst	r0, #1	; 0x1
        15eb2c:	e3a08001 	mov	r8, #1	; 0x1
        15eb30:	1a000011 	bne	15eb7c <TPackageEventHandler::BeginLoadPackage(TPkBeginLoadEvent *)+0xac>
        15eb34:	e3a00000 	mov	r0, #0	; 0x0
        15eb38:	eb6a15b5 	bl	1be4214 <CShadowRingBuffer::$__ct(void)>
        15eb3c:	e5840040 	str	r0, [r4, #64]	; fField64
        15eb40:	e3a03000 	mov	r3, #0	; 0x0
        15eb44:	e3a02000 	mov	r2, #0	; 0x0
        15eb48:	e5951020 	ldr	r1, [r5, #32]	; fField32
        15eb4c:	eb6a2a5a 	bl	1be94bc <CShadowRingBuffer::$Init(unsigned long, long, long)>
        15eb50:	e3a00000 	mov	r0, #0	; 0x0
        15eb54:	eb69badd 	bl	1bcd6d0 <CPartPipe::$__ct(void)>
        15eb58:	e584002c 	str	r0, [r4, #44]	; fField44
        15eb5c:	e5942040 	ldr	r2, [r4, #64]	; fField64
        15eb60:	e3a03001 	mov	r3, #1	; 0x1
        15eb64:	e5951024 	ldr	r1, [r5, #36]	; fField36
        15eb68:	eb69dbd8 	bl	1bd5ad0 <CPartPipe::$Init(unsigned long, CShadowRingBuffer *, unsigned char)>
        15eb6c:	e3a00000 	mov	r0, #0	; 0x0
        15eb70:	e594102c 	ldr	r1, [r4, #44]	; fField44
        15eb74:	eb69bace 	bl	1bcd6b4 <TPackageIterator::$__ct(CPipe *)>
        15eb78:	ea000002 	b	15eb88 <TPackageEventHandler::BeginLoadPackage(TPkBeginLoadEvent *)+0xb8>
        15eb7c:	e3a00000 	mov	r0, #0	; 0x0
        15eb80:	e5951020 	ldr	r1, [r5, #32]	; fField32
        15eb84:	eb69bacb 	bl	1bcd6b8 <TPackageIterator::$__ct(void *)>
        15eb88:	e5840028 	str	r0, [r4, #40]	; fField40
        15eb8c:	e5940028 	ldr	r0, [r4, #40]	; fField40
        15eb90:	e3300000 	teq	r0, #0	; 0x0
        15eb94:	0a000001 	beq	15eba0 <TPackageEventHandler::BeginLoadPackage(TPkBeginLoadEvent *)+0xd0>
        15eb98:	eb69dbc1 	bl	1bd5aa4 <TPackageIterator::$Init(void)>
        15eb9c:	ea000000 	b	15eba4 <TPackageEventHandler::BeginLoadPackage(TPkBeginLoadEvent *)+0xd4>
        15eba0:	eb6a0d5e 	bl	1be2120 <$MemError>
        15eba4:	e58d0008 	str	r0, [sp, #8]
        15eba8:	e3300000 	teq	r0, #0	; 0x0
        15ebac:	1a0000d3 	bne	15ef00 <TPackageEventHandler::BeginLoadPackage(TPkBeginLoadEvent *)+0x430>
        15ebb0:	e52d606c 	str	r6, [sp, -#108]!
        15ebb4:	e28d0008 	add	r0, sp, #8	; 0x8
        15ebb8:	eb694f6d 	bl	1bb2974 <$setjmp>
        15ebbc:	e3300000 	teq	r0, #0	; 0x0
        15ebc0:	1a0000b7 	bne	15eea4 <TPackageEventHandler::BeginLoadPackage(TPkBeginLoadEvent *)+0x3d4>
        15ebc4:	e1a0000d 	mov	r0, sp
        15ebc8:	eb6a052b 	bl	1be007c <$AddExceptionHandler>
        15ebcc:	e1a00004 	mov	r0, r4
        15ebd0:	eb667061 	bl	1afad5c <TPackageEventHandler::$GetUniquePackageId(void)>
        15ebd4:	e585002c 	str	r0, [r5, #44]	; fField44
        15ebd8:	e5940028 	ldr	r0, [r4, #40]	; fField40
        15ebdc:	eb69e3fe 	bl	1bd7bdc <TPackageIterator::$PackageSize(void)>
        15ebe0:	e5850030 	str	r0, [r5, #48]	; fField48
        15ebe4:	e5940028 	ldr	r0, [r4, #40]	; fField40
        15ebe8:	eb69e3f0 	bl	1bd7bb0 <TPackageIterator::$NumberOfParts(void)>
        15ebec:	e5850034 	str	r0, [r5, #52]
        15ebf0:	e5940028 	ldr	r0, [r4, #40]	; fField40
        15ebf4:	eb69d797 	bl	1bd4a58 <TPackageIterator::$GetVersion(void)>
        15ebf8:	e2855038 	add	r5, r5, #56	; 0x38
        15ebfc:	e8850041 	stmia	r5, {r0, r6}
        15ec00:	e2455038 	sub	r5, r5, #56	; 0x38
        15ec04:	e3a06000 	mov	r6, #0	; 0x0
        15ec08:	e5940028 	ldr	r0, [r4, #40]	; fField40
        15ec0c:	eb69e3e7 	bl	1bd7bb0 <TPackageIterator::$NumberOfParts(void)>
        15ec10:	e3500000 	cmp	r0, #0	; 0x0
        15ec14:	9a00000e 	bls	15ec54 <TPackageEventHandler::BeginLoadPackage(TPkBeginLoadEvent *)+0x184>
        15ec18:	e24dd028 	sub	sp, sp, #40	; 0x28
        15ec1c:	e1a0200d 	mov	r2, sp
        15ec20:	e1a01006 	mov	r1, r6
        15ec24:	e5940028 	ldr	r0, [r4, #40]	; fField40
        15ec28:	eb69d776 	bl	1bd4a08 <TPackageIterator::$GetPartInfo(unsigned long, PartInfo *const)>
        15ec2c:	e595003c 	ldr	r0, [r5, #60]	; fField60
        15ec30:	e59d100c 	ldr	r1, [sp, #12]
        15ec34:	e0800001 	add	r0, r0, r1
        15ec38:	e585003c 	str	r0, [r5, #60]	; fField60
        15ec3c:	e28dd028 	add	sp, sp, #40	; 0x28
        15ec40:	e2866001 	add	r6, r6, #1	; 0x1
        15ec44:	e5940028 	ldr	r0, [r4, #40]	; fField40
        15ec48:	eb69e3d8 	bl	1bd7bb0 <TPackageIterator::$NumberOfParts(void)>
        15ec4c:	e1500006 	cmp	r0, r6
        15ec50:	8afffff0 	bhi	15ec18 <TPackageEventHandler::BeginLoadPackage(TPkBeginLoadEvent *)+0x148>
        15ec54:	e5940028 	ldr	r0, [r4, #40]	; fField40
        15ec58:	eb69e3dd 	bl	1bd7bd4 <TPackageIterator::$PackageName(void)>
        15ec5c:	e1a01000 	mov	r1, r0
        15ec60:	e2850040 	add	r0, r5, #64	; 0x40
        15ec64:	e3a02020 	mov	r2, #32	; 0x20
        15ec68:	eb6a3ebe 	bl	1bee768 <$Ustrncpy>
        15ec6c:	e5950040 	ldr	r0, [r5, #64]	; fField64
        15ec70:	e1a00820 	mov	r0, r0, lsr #16
        15ec74:	e1a00800 	mov	r0, r0, lsl #16
        15ec78:	e5951042 	ldr	r1, [r5, #66]
        15ec7c:	e1a01821 	mov	r1, r1, lsr #16
        15ec80:	e1801401 	orr	r1, r0, r1, lsl #8
        15ec84:	e5950044 	ldr	r0, [r5, #68]
        15ec88:	e1817820 	orr	r7, r1, r0, lsr #16
        15ec8c:	e24dd004 	sub	sp, sp, #4	; 0x4
        15ec90:	e5940028 	ldr	r0, [r4, #40]	; fField40
        15ec94:	eb69e3ce 	bl	1bd7bd4 <TPackageIterator::$PackageName(void)>
        15ec98:	e1a02000 	mov	r2, r0
        15ec9c:	e1a0100d 	mov	r1, sp
        15eca0:	e1a00004 	mov	r0, r4
        15eca4:	e3a03000 	mov	r3, #0	; 0x0
        15eca8:	eb66997e 	bl	1b052a8 <TPackageEventHandler::$SearchPackageList(long *, unsigned short *, unsigned long)>
        15ecac:	e3300000 	teq	r0, #0	; 0x0
        15ecb0:	1a00001d 	bne	15ed2c <TPackageEventHandler::BeginLoadPackage(TPkBeginLoadEvent *)+0x25c>
        15ecb4:	e5940014 	ldr	r0, [r4, #20]	; fField20
        15ecb8:	e59d1000 	ldr	r1, [sp]
        15ecbc:	e5902010 	ldr	r2, [r0, #16]
        15ecc0:	e5900004 	ldr	r0, [r0, #4]
        15ecc4:	e0262091 	mla	r6, r1, r0, r2
        15ecc8:	e5960004 	ldr	r0, [r6, #4]
        15eccc:	e3300000 	teq	r0, #0	; 0x0
        15ecd0:	0a000015 	beq	15ed2c <TPackageEventHandler::BeginLoadPackage(TPkBeginLoadEvent *)+0x25c>
        15ecd4:	e5940028 	ldr	r0, [r4, #40]	; fField40
        15ecd8:	eb69d75e 	bl	1bd4a58 <TPackageIterator::$GetVersion(void)>
        15ecdc:	e3300000 	teq	r0, #0	; 0x0
        15ece0:	0a000011 	beq	15ed2c <TPackageEventHandler::BeginLoadPackage(TPkBeginLoadEvent *)+0x25c>
        15ece4:	e5940028 	ldr	r0, [r4, #40]	; fField40
        15ece8:	eb69d75a 	bl	1bd4a58 <TPackageIterator::$GetVersion(void)>
        15ecec:	e5961004 	ldr	r1, [r6, #4]
        15ecf0:	e1500001 	cmp	r0, r1
        15ecf4:	83e000a9 	mvnhi	r0, #169	; 0xa9
        15ecf8:	82400b0a 	subhi	r0, r0, #10240	; 0x2800
        15ecfc:	8a000007 	bhi	15ed20 <TPackageEventHandler::BeginLoadPackage(TPkBeginLoadEvent *)+0x250>
        15ed00:	e5940028 	ldr	r0, [r4, #40]	; fField40
        15ed04:	eb69d753 	bl	1bd4a58 <TPackageIterator::$GetVersion(void)>
        15ed08:	e5961004 	ldr	r1, [r6, #4]
        15ed0c:	e1500001 	cmp	r0, r1
        15ed10:	23e000a1 	mvncs	r0, #161	; 0xa1
        15ed14:	22400b0a 	subcs	r0, r0, #10240	; 0x2800
        15ed18:	33e000a8 	mvncc	r0, #168	; 0xa8
        15ed1c:	32400b0a 	subcc	r0, r0, #10240	; 0x2800
        15ed20:	e58d0078 	str	r0, [sp, #120]	; fField120
        15ed24:	e5960000 	ldr	r0, [r6]
        15ed28:	e585002c 	str	r0, [r5, #44]	; fField44
        15ed2c:	e59d0078 	ldr	r0, [sp, #120]	; fField120
        15ed30:	e3300000 	teq	r0, #0	; 0x0
        15ed34:	1a000007 	bne	15ed58 <TPackageEventHandler::BeginLoadPackage(TPkBeginLoadEvent *)+0x288>
        15ed38:	e5940068 	ldr	r0, [r4, #104]	; fField104
        15ed3c:	e3300000 	teq	r0, #0	; 0x0
        15ed40:	0a000007 	beq	15ed64 <TPackageEventHandler::BeginLoadPackage(TPkBeginLoadEvent *)+0x294>
        15ed44:	e1a01005 	mov	r1, r5
        15ed48:	e5942028 	ldr	r2, [r4, #40]	; fField40
        15ed4c:	e1a00004 	mov	r0, r4
        15ed50:	eb66e39b 	bl	1b17bc4 <TPackageEventHandler::$ValidatePackage(TPkBeginLoadEvent *, TPackageIterator *)>
        15ed54:	e58d0078 	str	r0, [sp, #120]	; fField120
        15ed58:	e59d0078 	ldr	r0, [sp, #120]	; fField120
        15ed5c:	e3300000 	teq	r0, #0	; 0x0
        15ed60:	1a00004c 	bne	15ee98 <TPackageEventHandler::BeginLoadPackage(TPkBeginLoadEvent *)+0x3c8>
        15ed64:	e1a00004 	mov	r0, r4
        15ed68:	eb669d6f 	bl	1b0632c <TPackageEventHandler::$SetPersistentHeap(void)>
        15ed6c:	e24dd030 	sub	sp, sp, #48	; 0x30
        15ed70:	e5940028 	ldr	r0, [r4, #40]	; fField40
        15ed74:	eb69df7d 	bl	1bd6b70 <TPackageIterator::$ModifyDate(void)>
        15ed78:	e1a03000 	mov	r3, r0
        15ed7c:	e92d0008 	stmdb	sp!, {r3}
        15ed80:	e5940028 	ldr	r0, [r4, #40]	; fField40
        15ed84:	eb69e389 	bl	1bd7bb0 <TPackageIterator::$NumberOfParts(void)>
        15ed88:	e1a03000 	mov	r3, r0
        15ed8c:	e92d0008 	stmdb	sp!, {r3}
        15ed90:	e5940028 	ldr	r0, [r4, #40]	; fField40
        15ed94:	eb69c6b0 	bl	1bd085c <TPackageIterator::$Copyright(void)>
        15ed98:	e1a03000 	mov	r3, r0
        15ed9c:	e92d0008 	stmdb	sp!, {r3}
        15eda0:	e5940028 	ldr	r0, [r4, #40]	; fField40
        15eda4:	eb69e38a 	bl	1bd7bd4 <TPackageIterator::$PackageName(void)>
        15eda8:	e1a03000 	mov	r3, r0
        15edac:	e92d0008 	stmdb	sp!, {r3}
        15edb0:	e5940028 	ldr	r0, [r4, #40]	; fField40
        15edb4:	eb69e382 	bl	1bd7bc4 <TPackageIterator::$PackageFlags(void)>
        15edb8:	e1a03000 	mov	r3, r0
        15edbc:	e92d0008 	stmdb	sp!, {r3}
        15edc0:	e24dd008 	sub	sp, sp, #8	; 0x8
        15edc4:	e28d10bc 	add	r1, sp, #188	; 0xbc
        15edc8:	e8915000 	ldmia	r1, {ip, lr}
        15edcc:	e88d5000 	stmia	sp, {ip, lr}
        15edd0:	e5940028 	ldr	r0, [r4, #40]	; fField40
        15edd4:	eb69e380 	bl	1bd7bdc <TPackageIterator::$PackageSize(void)>
        15edd8:	e1a06000 	mov	r6, r0
        15eddc:	e5940028 	ldr	r0, [r4, #40]	; fField40
        15ede0:	eb69d71c 	bl	1bd4a58 <TPackageIterator::$GetVersion(void)>
        15ede4:	e1a02000 	mov	r2, r0
        15ede8:	e28d001c 	add	r0, sp, #28	; 0x1c
        15edec:	e1a03006 	mov	r3, r6
        15edf0:	e595102c 	ldr	r1, [r5, #44]	; fField44
        15edf4:	eb6673fc 	bl	1afbdec <TPackageBlock::$Init(unsigned long, unsigned long, unsigned long, SourceType, unsigned long, unsigned short *, unsigned short *, unsigned long, unsigned long)>
        15edf8:	e28dd01c 	add	sp, sp, #28	; 0x1c
        15edfc:	e58d00a8 	str	r0, [sp, #168]
        15ee00:	e3300000 	teq	r0, #0	; 0x0
        15ee04:	1a000005 	bne	15ee20 <TPackageEventHandler::BeginLoadPackage(TPkBeginLoadEvent *)+0x350>
        15ee08:	e5940014 	ldr	r0, [r4, #20]	; fField20
        15ee0c:	e1a0200d 	mov	r2, sp
        15ee10:	e3a03001 	mov	r3, #1	; 0x1
        15ee14:	e5901000 	ldr	r1, [r0]
        15ee18:	eb6a29b6 	bl	1be94f8 <CDynamicArray::$InsertElementsBefore(long, void *, long)>
        15ee1c:	e58d00a8 	str	r0, [sp, #168]
        15ee20:	e59d00a8 	ldr	r0, [sp, #168]
        15ee24:	e3300000 	teq	r0, #0	; 0x0
        15ee28:	1a000011 	bne	15ee74 <TPackageEventHandler::BeginLoadPackage(TPkBeginLoadEvent *)+0x3a4>
        15ee2c:	e5940014 	ldr	r0, [r4, #20]	; fField20
        15ee30:	e5901000 	ldr	r1, [r0]
        15ee34:	e2411001 	sub	r1, r1, #1	; 0x1
        15ee38:	eb6a3a15 	bl	1bed694 <CDynamicArray::$SafeElementPtrAt(long)>
        15ee3c:	e584003c 	str	r0, [r4, #60]	; fField60
        15ee40:	e59f1058 	ldr	r1, [pc, #58]	; 15eea0 <TPackageEventHandler::BeginLoadPackage(TPkBeginLoadEvent *)+0x3d0>
        15ee44:	e5a01028 	str	r1, [r0, #40]!	; fField40
        15ee48:	e24dd008 	sub	sp, sp, #8	; 0x8
        15ee4c:	e28d10a8 	add	r1, sp, #168	; 0xa8
        15ee50:	e8915000 	ldmia	r1, {ip, lr}
        15ee54:	e88d5000 	stmia	sp, {ip, lr}
        15ee58:	e4dd0008 	ldrb	r0, [sp], #8
        15ee5c:	e3100001 	tst	r0, #1	; 0x1
        15ee60:	0a000003 	beq	15ee74 <TPackageEventHandler::BeginLoadPackage(TPkBeginLoadEvent *)+0x3a4>
        15ee64:	e594003c 	ldr	r0, [r4, #60]	; fField60
        15ee68:	e5901000 	ldr	r1, [r0]
        15ee6c:	e5950020 	ldr	r0, [r5, #32]	; fField32
        15ee70:	eb66d701 	bl	1b14a7c <$RegisterPackageWithDebugger(void *, unsigned long)>
        15ee74:	e1a00004 	mov	r0, r4
        15ee78:	eb66991e 	bl	1b052f8 <TPackageEventHandler::$SetDefaultHeap(void)>
        15ee7c:	e2851010 	add	r1, r5, #16	; 0x10
        15ee80:	e8910003 	ldmia	r1, {r0, r1}
        15ee84:	e5c4801c 	strb	r8, [r4, #28]	; fField28
        15ee88:	e2844020 	add	r4, r4, #32	; 0x20
        15ee8c:	e8840003 	stmia	r4, {r0, r1}
        15ee90:	e2444020 	sub	r4, r4, #32	; 0x20
        15ee94:	e28dd030 	add	sp, sp, #48	; 0x30
        15ee98:	e28dd004 	add	sp, sp, #4	; 0x4
        15ee9c:	ea000013 	b	15eef0 <TPackageEventHandler::BeginLoadPackage(TPkBeginLoadEvent *)+0x420>
        15eea0:	7370626c 	cmnvc	r0, #-1073741818	; 0xc0000006
        15eea4:	e59d0060 	ldr	r0, [sp, #96]	; fField96
        15eea8:	e28f1f0d 	add	r1, pc, #52	; 0x34
        15eeac:	eb6a10b8 	bl	1be3194 <$Subexception>
        15eeb0:	e3300000 	teq	r0, #0	; 0x0
        15eeb4:	0a00000b 	beq	15eee8 <TPackageEventHandler::BeginLoadPackage(TPkBeginLoadEvent *)+0x418>
        15eeb8:	e1a00004 	mov	r0, r4
        15eebc:	eb66990d 	bl	1b052f8 <TPackageEventHandler::$SetDefaultHeap(void)>
        15eec0:	e3e00e8a 	mvn	r0, #2208	; 0x8a0
        15eec4:	e2400a02 	sub	r0, r0, #8192	; 0x2000
        15eec8:	e58d0074 	str	r0, [sp, #116]	; fField116
        15eecc:	e5940028 	ldr	r0, [r4, #40]	; fField40
        15eed0:	e3300000 	teq	r0, #0	; 0x0
        15eed4:	13a01001 	movne	r1, #1	; 0x1
        15eed8:	1b69be0e 	blne	1bce718 <TPackageIterator::$__dt(void)>
        15eedc:	e5846028 	str	r6, [r4, #40]	; fField40
        15eee0:	ea000002 	b	15eef0 <TPackageEventHandler::BeginLoadPackage(TPkBeginLoadEvent *)+0x420>
        15eee4:	00000000 	andeq	r0, r0, r0
        15eee8:	e1a0000d 	mov	r0, sp
        15eeec:	eb6a0c98 	bl	1be2154 <$NextHandler>
        15eef0:	e1a0000d 	mov	r0, sp
        15eef4:	eb6a086f 	bl	1be10b8 <$ExitHandler>
        15eef8:	e28dd06c 	add	sp, sp, #108	; 0x6c
        15eefc:	ea000004 	b	15ef14 <TPackageEventHandler::BeginLoadPackage(TPkBeginLoadEvent *)+0x444>
        15ef00:	e5940028 	ldr	r0, [r4, #40]	; fField40
        15ef04:	e3300000 	teq	r0, #0	; 0x0
        15ef08:	13a01001 	movne	r1, #1	; 0x1
        15ef0c:	1b69be01 	blne	1bce718 <TPackageIterator::$__dt(void)>
        15ef10:	e5846028 	str	r6, [r4, #40]	; fField40
        15ef14:	e59d0008 	ldr	r0, [sp, #8]
        15ef18:	e3300000 	teq	r0, #0	; 0x0
        15ef1c:	1a000008 	bne	15ef44 <TPackageEventHandler::BeginLoadPackage(TPkBeginLoadEvent *)+0x474>
        15ef20:	e2858080 	add	r8, r5, #128	; 0x80
        15ef24:	e2856081 	add	r6, r5, #129	; 0x81
        15ef28:	e1a03008 	mov	r3, r8
        15ef2c:	e1a02006 	mov	r2, r6
        15ef30:	e28d1008 	add	r1, sp, #8	; 0x8
        15ef34:	e1a00004 	mov	r0, r4
        15ef38:	eb66c649 	bl	1b10864 <TPackageEventHandler::$LoadNextPart(long *, unsigned char *, unsigned char *)>
        15ef3c:	e3300000 	teq	r0, #0	; 0x0
        15ef40:	1afffff8 	bne	15ef28 <TPackageEventHandler::BeginLoadPackage(TPkBeginLoadEvent *)+0x458>
        15ef44:	e59d0008 	ldr	r0, [sp, #8]
        15ef48:	e3300000 	teq	r0, #0	; 0x0
        15ef4c:	05940068 	ldreq	r0, [r4, #104]	; fField104
        15ef50:	03300000 	teqeq	r0, #0	; 0x0
        15ef54:	05dd0000 	ldreqb	r0, [sp]
        15ef58:	03300001 	teqeq	r0, #1	; 0x1
        15ef5c:	0247c856 	subeq	ip, r7, #5636096	; 0x560000
        15ef60:	024cca05 	subeq	ip, ip, #20480	; 0x5000
        15ef64:	033c0044 	teqeq	ip, #68	; 0x44
        15ef68:	01a00004 	moveq	r0, r4
        15ef6c:	0b66e313 	bleq	1b17bc0 <TPackageEventHandler::$InitValidatePackageDriver(void)>
        15ef70:	e59d0008 	ldr	r0, [sp, #8]
        15ef74:	e585000c 	str	r0, [r5, #12]
        15ef78:	e1a02005 	mov	r2, r5
        15ef7c:	e1a00004 	mov	r0, r4
        15ef80:	e3a01084 	mov	r1, #132	; 0x84
        15ef84:	eb6a39cd 	bl	1bed6c0 <TAEventHandler::$SetReply(unsigned long, TAEvent *)>
        15ef88:	e1a00004 	mov	r0, r4
        15ef8c:	eb6a35af 	bl	1bec650 <TAEventHandler::$ReplyImmed(void)>
        15ef90:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TPackageEventHandler::LoadNextPart(long *, unsigned char *, unsigned char *)
 * Address: 0015ef94
 */
TPackageEventHandler::LoadNextPart(long *, unsigned char *, unsigned char *) {
    /*
        15ef94:	e1a0c00d 	mov	ip, sp
        15ef98:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        15ef9c:	e24cb004 	sub	fp, ip, #4	; 0x4
        15efa0:	e1a04000 	mov	r4, r0
        15efa4:	e1a07001 	mov	r7, r1
        15efa8:	e1a06002 	mov	r6, r2
        15efac:	e1a05003 	mov	r5, r3
        15efb0:	e24dd074 	sub	sp, sp, #116	; 0x74
        15efb4:	e3a08000 	mov	r8, #0	; 0x0
        15efb8:	e3a0a001 	mov	sl, #1	; 0x1
        15efbc:	e5900028 	ldr	r0, [r0, #40]	; fField40
        15efc0:	eb69e2fa 	bl	1bd7bb0 <TPackageIterator::$NumberOfParts(void)>
        15efc4:	e5941038 	ldr	r1, [r4, #56]	; fField56
        15efc8:	e1500001 	cmp	r0, r1
        15efcc:	9a0000b3 	bls	15f2a0 <TPackageEventHandler::LoadNextPart(long *, unsigned char *, unsigned char *)+0x30c>
        15efd0:	e3a00000 	mov	r0, #0	; 0x0
        15efd4:	e52d006c 	str	r0, [sp, -#108]!
        15efd8:	e28d0008 	add	r0, sp, #8	; 0x8
        15efdc:	eb694e64 	bl	1bb2974 <$setjmp>
        15efe0:	e3300000 	teq	r0, #0	; 0x0
        15efe4:	1a00009f 	bne	15f268 <TPackageEventHandler::LoadNextPart(long *, unsigned char *, unsigned char *)+0x2d4>
        15efe8:	e1a0000d 	mov	r0, sp
        15efec:	eb6a0422 	bl	1be007c <$AddExceptionHandler>
        15eff0:	e594003c 	ldr	r0, [r4, #60]	; fField60
        15eff4:	e5909000 	ldr	r9, [r0]
        15eff8:	e58d906c 	str	r9, [sp, #108]
        15effc:	e24dd00c 	sub	sp, sp, #12	; 0xc
        15f000:	e5940038 	ldr	r0, [r4, #56]	; fField56
        15f004:	e58d007c 	str	r0, [sp, #124]
        15f008:	e28d2080 	add	r2, sp, #128	; 0x80
        15f00c:	e5940028 	ldr	r0, [r4, #40]	; fField40
        15f010:	e5941038 	ldr	r1, [r4, #56]	; fField56
        15f014:	eb69d67b 	bl	1bd4a08 <TPackageIterator::$GetPartInfo(unsigned long, PartInfo *const)>
        15f018:	e5940028 	ldr	r0, [r4, #40]	; fField40
        15f01c:	eb69e2ec 	bl	1bd7bd4 <TPackageIterator::$PackageName(void)>
        15f020:	e1a01000 	mov	r1, r0
        15f024:	e28d00a8 	add	r0, sp, #168	; 0xa8
        15f028:	e3a02020 	mov	r2, #32	; 0x20
        15f02c:	eb6a3dcd 	bl	1bee768 <$Ustrncpy>
        15f030:	e3a08000 	mov	r8, #0	; 0x0
        15f034:	e5cd80e9 	strb	r8, [sp, #233]
        15f038:	e5cd80e8 	strb	r8, [sp, #232]
        15f03c:	e1a00004 	mov	r0, r4
        15f040:	eb666f32 	bl	1afad10 <TPackageEventHandler::$GetPartSize(void)>
        15f044:	e1a01000 	mov	r1, r0
        15f048:	e594002c 	ldr	r0, [r4, #44]	; fField44
        15f04c:	e3300000 	teq	r0, #0	; 0x0
        15f050:	0a000001 	beq	15f05c <TPackageEventHandler::LoadNextPart(long *, unsigned char *, unsigned char *)+0xc8>
        15f054:	eb69f367 	bl	1bdbdf8 <CPartPipe::$SetStreamSize(long)>
        15f058:	ea000001 	b	15f064 <TPackageEventHandler::LoadNextPart(long *, unsigned char *, unsigned char *)+0xd0>
        15f05c:	e59d009c 	ldr	r0, [sp, #156]
        15f060:	e5840030 	str	r0, [r4, #48]	; fField48
        15f064:	e59d0080 	ldr	r0, [sp, #128]
        15f068:	e3300001 	teq	r0, #1	; 0x1
        15f06c:	1a000019 	bne	15f0d8 <TPackageEventHandler::LoadNextPart(long *, unsigned char *, unsigned char *)+0x144>
        15f070:	e59d0090 	ldr	r0, [sp, #144]
        15f074:	e3300000 	teq	r0, #0	; 0x0
        15f078:	0a000016 	beq	15f0d8 <TPackageEventHandler::LoadNextPart(long *, unsigned char *, unsigned char *)+0x144>
        15f07c:	e5dd00a2 	ldrb	r0, [sp, #162]
        15f080:	e3300000 	teq	r0, #0	; 0x0
        15f084:	1a000013 	bne	15f0d8 <TPackageEventHandler::LoadNextPart(long *, unsigned char *, unsigned char *)+0x144>
        15f088:	e24dd008 	sub	sp, sp, #8	; 0x8
        15f08c:	e594103c 	ldr	r1, [r4, #60]	; fField60
        15f090:	e281100c 	add	r1, r1, #12	; 0xc
        15f094:	e8911008 	ldmia	r1, {r3, ip}
        15f098:	e88d1008 	stmia	sp, {r3, ip}
        15f09c:	e4dd0008 	ldrb	r0, [sp], #8
        15f0a0:	e3100001 	tst	r0, #1	; 0x1
        15f0a4:	0a00000b 	beq	15f0d8 <TPackageEventHandler::LoadNextPart(long *, unsigned char *, unsigned char *)+0x144>
        15f0a8:	e24dd040 	sub	sp, sp, #64	; 0x40
        15f0ac:	e59d00d4 	ldr	r0, [sp, #212]
        15f0b0:	e59d20d0 	ldr	r2, [sp, #208]
        15f0b4:	e1a0100d 	mov	r1, sp
        15f0b8:	eb69ffa5 	bl	1bdef54 <$BlockMove>
        15f0bc:	e59d10d0 	ldr	r1, [sp, #208]
        15f0c0:	e7cd8001 	strb	r8, [sp, r1]
        15f0c4:	e1a02009 	mov	r2, r9
        15f0c8:	e59d00dc 	ldr	r0, [sp, #220]
        15f0cc:	e1a0100d 	mov	r1, sp
        15f0d0:	ebfe1d6e 	bl	e6690 <RegisterLoadedCodeWithDebugger(void *, char const *, unsigned long)>
        15f0d4:	e28dd040 	add	sp, sp, #64	; 0x40
        15f0d8:	e2843030 	add	r3, r4, #48	; 0x30
        15f0dc:	e92d0008 	stmdb	sp!, {r3}
        15f0e0:	e24dd008 	sub	sp, sp, #8	; 0x8
        15f0e4:	e594003c 	ldr	r0, [r4, #60]	; fField60
        15f0e8:	e280000c 	add	r0, r0, #12	; 0xc
        15f0ec:	e8905000 	ldmia	r0, {ip, lr}
        15f0f0:	e88d5000 	stmia	sp, {ip, lr}
        15f0f4:	e28d308c 	add	r3, sp, #140	; 0x8c
        15f0f8:	e28d2084 	add	r2, sp, #132	; 0x84
        15f0fc:	e92d000c 	stmdb	sp!, {r2, r3}
        15f100:	e28d3018 	add	r3, sp, #24	; 0x18
        15f104:	e28d201c 	add	r2, sp, #28	; 0x1c
        15f108:	e28d1014 	add	r1, sp, #20	; 0x14
        15f10c:	e1a00004 	mov	r0, r4
        15f110:	eb667b6d 	bl	1afdecc <TPackageEventHandler::$InstallPart(unsigned long *, long *, unsigned char *, PartId const &, ExtendedPartInfo &, SourceType, PartSource const &)>
        15f114:	e28dd014 	add	sp, sp, #20	; 0x14
        15f118:	e1b08000 	movs	r8, r0
        15f11c:	1a00001c 	bne	15f194 <TPackageEventHandler::LoadNextPart(long *, unsigned char *, unsigned char *)+0x200>
        15f120:	e24dd040 	sub	sp, sp, #64	; 0x40
        15f124:	e59d00c0 	ldr	r0, [sp, #192]
        15f128:	e3300000 	teq	r0, #0	; 0x0
        15f12c:	05dd00e2 	ldreqb	r0, [sp, #226]
        15f130:	03300000 	teqeq	r0, #0	; 0x0
        15f134:	1a000015 	bne	15f190 <TPackageEventHandler::LoadNextPart(long *, unsigned char *, unsigned char *)+0x1fc>
        15f138:	e59d0040 	ldr	r0, [sp, #64]	; fField64
        15f13c:	e3300000 	teq	r0, #0	; 0x0
        15f140:	1a000008 	bne	15f168 <TPackageEventHandler::LoadNextPart(long *, unsigned char *, unsigned char *)+0x1d4>
        15f144:	e24dd008 	sub	sp, sp, #8	; 0x8
        15f148:	e594103c 	ldr	r1, [r4, #60]	; fField60
        15f14c:	e281100c 	add	r1, r1, #12	; 0xc
        15f150:	e8915000 	ldmia	r1, {ip, lr}
        15f154:	e88d5000 	stmia	sp, {ip, lr}
        15f158:	e4dd0008 	ldrb	r0, [sp], #8
        15f15c:	e3100001 	tst	r0, #1	; 0x1
        15f160:	0a00000a 	beq	15f190 <TPackageEventHandler::LoadNextPart(long *, unsigned char *, unsigned char *)+0x1fc>
        15f164:	e59d00dc 	ldr	r0, [sp, #220]
        15f168:	e3300000 	teq	r0, #0	; 0x0
        15f16c:	0a000007 	beq	15f190 <TPackageEventHandler::LoadNextPart(long *, unsigned char *, unsigned char *)+0x1fc>
        15f170:	eb69d63f 	bl	1bd4a74 <TClassInfo::$ImplementationName( const(void))>
        15f174:	e1a01000 	mov	r1, r0
        15f178:	e1a0000d 	mov	r0, sp
        15f17c:	eb695a4a 	bl	1bb5aac <$strcpy>
        15f180:	e1a02009 	mov	r2, r9
        15f184:	e1a0100d 	mov	r1, sp
        15f188:	e59d0040 	ldr	r0, [sp, #64]	; fField64
        15f18c:	ebfe1d3f 	bl	e6690 <RegisterLoadedCodeWithDebugger(void *, char const *, unsigned long)>
        15f190:	e28dd040 	add	sp, sp, #64	; 0x40
        15f194:	e594002c 	ldr	r0, [r4, #44]	; fField44
        15f198:	e3300000 	teq	r0, #0	; 0x0
        15f19c:	1b69eedf 	blne	1bdad20 <CPartPipe::$SeekEOF(void)>
        15f1a0:	e3380000 	teq	r8, #0	; 0x0
        15f1a4:	1a00002d 	bne	15f260 <TPackageEventHandler::LoadNextPart(long *, unsigned char *, unsigned char *)+0x2cc>
        15f1a8:	e1a00004 	mov	r0, r4
        15f1ac:	eb669c5e 	bl	1b0632c <TPackageEventHandler::$SetPersistentHeap(void)>
        15f1b0:	e24dd014 	sub	sp, sp, #20	; 0x14
        15f1b4:	e59d3014 	ldr	r3, [sp, #20]	; fField20
        15f1b8:	e5dd2018 	ldrb	r2, [sp, #24]	; fField24
        15f1bc:	e5dd10b7 	ldrb	r1, [sp, #183]
        15f1c0:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        15f1c4:	e5dd00c4 	ldrb	r0, [sp, #196]
        15f1c8:	e3300000 	teq	r0, #0	; 0x0
        15f1cc:	1a00000a 	bne	15f1fc <TPackageEventHandler::LoadNextPart(long *, unsigned char *, unsigned char *)+0x268>
        15f1d0:	e5dd00c0 	ldrb	r0, [sp, #192]
        15f1d4:	e3300000 	teq	r0, #0	; 0x0
        15f1d8:	0a000009 	beq	15f204 <TPackageEventHandler::LoadNextPart(long *, unsigned char *, unsigned char *)+0x270>
        15f1dc:	e24dd008 	sub	sp, sp, #8	; 0x8
        15f1e0:	e594103c 	ldr	r1, [r4, #60]	; fField60
        15f1e4:	e281100c 	add	r1, r1, #12	; 0xc
        15f1e8:	e8915000 	ldmia	r1, {ip, lr}
        15f1ec:	e88d5000 	stmia	sp, {ip, lr}
        15f1f0:	e4dd0008 	ldrb	r0, [sp], #8
        15f1f4:	e3100001 	tst	r0, #1	; 0x1
        15f1f8:	1a000001 	bne	15f204 <TPackageEventHandler::LoadNextPart(long *, unsigned char *, unsigned char *)+0x270>
        15f1fc:	e3a03001 	mov	r3, #1	; 0x1
        15f200:	ea000000 	b	15f208 <TPackageEventHandler::LoadNextPart(long *, unsigned char *, unsigned char *)+0x274>
        15f204:	e3a03000 	mov	r3, #0	; 0x0
        15f208:	e5dd20c0 	ldrb	r2, [sp, #192]
        15f20c:	e92d000c 	stmdb	sp!, {r2, r3}
        15f210:	e59d10ac 	ldr	r1, [sp, #172]
        15f214:	e59d20a8 	ldr	r2, [sp, #168]
        15f218:	e59d3030 	ldr	r3, [sp, #48]	; fField48
        15f21c:	e28d0014 	add	r0, sp, #20	; 0x14
        15f220:	eb69b91a 	bl	1bcd690 <TInstalledPart::$__ct(unsigned long, long, long, unsigned char, unsigned char, unsigned char, unsigned char, unsigned long)>
        15f224:	e28dd014 	add	sp, sp, #20	; 0x14
        15f228:	e594003c 	ldr	r0, [r4, #60]	; fField60
        15f22c:	e5900024 	ldr	r0, [r0, #36]	; fField36
        15f230:	e1a0200d 	mov	r2, sp
        15f234:	e3a03001 	mov	r3, #1	; 0x1
        15f238:	e5901000 	ldr	r1, [r0]
        15f23c:	eb6a28ad 	bl	1be94f8 <CDynamicArray::$InsertElementsBefore(long, void *, long)>
        15f240:	e1a08000 	mov	r8, r0
        15f244:	e1a00004 	mov	r0, r4
        15f248:	eb66982a 	bl	1b052f8 <TPackageEventHandler::$SetDefaultHeap(void)>
        15f24c:	e3380000 	teq	r8, #0	; 0x0
        15f250:	05940038 	ldreq	r0, [r4, #56]	; fField56
        15f254:	02800001 	addeq	r0, r0, #1	; 0x1
        15f258:	05840038 	streq	r0, [r4, #56]	; fField56
        15f25c:	e28dd014 	add	sp, sp, #20	; 0x14
        15f260:	e28dd00c 	add	sp, sp, #12	; 0xc
        15f264:	ea000008 	b	15f28c <TPackageEventHandler::LoadNextPart(long *, unsigned char *, unsigned char *)+0x2f8>
        15f268:	e59d0060 	ldr	r0, [sp, #96]	; fField96
        15f26c:	e28f1f3f 	add	r1, pc, #252	; 0xfc
        15f270:	eb6a0fc7 	bl	1be3194 <$Subexception>
        15f274:	e3300000 	teq	r0, #0	; 0x0
        15f278:	13e08e8a 	mvnne	r8, #2208	; 0x8a0
        15f27c:	12488a02 	subne	r8, r8, #8192	; 0x2000
        15f280:	1a000001 	bne	15f28c <TPackageEventHandler::LoadNextPart(long *, unsigned char *, unsigned char *)+0x2f8>
        15f284:	e1a0000d 	mov	r0, sp
        15f288:	eb6a0bb1 	bl	1be2154 <$NextHandler>
        15f28c:	e1a0000d 	mov	r0, sp
        15f290:	eb6a0788 	bl	1be10b8 <$ExitHandler>
        15f294:	e28dd06c 	add	sp, sp, #108	; 0x6c
        15f298:	e3380000 	teq	r8, #0	; 0x0
        15f29c:	1a000004 	bne	15f2b4 <TPackageEventHandler::LoadNextPart(long *, unsigned char *, unsigned char *)+0x320>
        15f2a0:	e5940028 	ldr	r0, [r4, #40]	; fField40
        15f2a4:	eb69e241 	bl	1bd7bb0 <TPackageIterator::$NumberOfParts(void)>
        15f2a8:	e5941038 	ldr	r1, [r4, #56]	; fField56
        15f2ac:	e1300001 	teq	r0, r1
        15f2b0:	1a00006e 	bne	15f470 <TPackageEventHandler::LoadNextPart(long *, unsigned char *, unsigned char *)+0x4dc>
        15f2b4:	e594002c 	ldr	r0, [r4, #44]	; fField44
        15f2b8:	e3300000 	teq	r0, #0	; 0x0
        15f2bc:	0a000009 	beq	15f2e8 <TPackageEventHandler::LoadNextPart(long *, unsigned char *, unsigned char *)+0x354>
        15f2c0:	eb69c559 	bl	1bd082c <CPartPipe::$Close(void)>
        15f2c4:	e594002c 	ldr	r0, [r4, #44]	; fField44
        15f2c8:	e3300000 	teq	r0, #0	; 0x0
        15f2cc:	0a000002 	beq	15f2dc <TPackageEventHandler::LoadNextPart(long *, unsigned char *, unsigned char *)+0x348>
        15f2d0:	e3a01001 	mov	r1, #1	; 0x1
        15f2d4:	e1a0e00f 	mov	lr, pc
        15f2d8:	e590f000 	ldr	pc, [r0]
        15f2dc:	e3a09000 	mov	r9, #0	; 0x0
        15f2e0:	e584902c 	str	r9, [r4, #44]	; fField44
        15f2e4:	e5849040 	str	r9, [r4, #64]	; fField64
        15f2e8:	e3a09000 	mov	r9, #0	; 0x0
        15f2ec:	e52d906c 	str	r9, [sp, -#108]!
        15f2f0:	e28d0008 	add	r0, sp, #8	; 0x8
        15f2f4:	eb694d9e 	bl	1bb2974 <$setjmp>
        15f2f8:	e3300000 	teq	r0, #0	; 0x0
        15f2fc:	1a00001d 	bne	15f378 <TPackageEventHandler::LoadNextPart(long *, unsigned char *, unsigned char *)+0x3e4>
        15f300:	e1a0000d 	mov	r0, sp
        15f304:	eb6a035c 	bl	1be007c <$AddExceptionHandler>
        15f308:	e5940028 	ldr	r0, [r4, #40]	; fField40
        15f30c:	e3300000 	teq	r0, #0	; 0x0
        15f310:	1594103c 	ldrne	r1, [r4, #60]	; fField60
        15f314:	13310000 	teqne	r1, #0	; 0x0
        15f318:	0a00001c 	beq	15f390 <TPackageEventHandler::LoadNextPart(long *, unsigned char *, unsigned char *)+0x3fc>
        15f31c:	eb69e223 	bl	1bd7bb0 <TPackageIterator::$NumberOfParts(void)>
        15f320:	e5941038 	ldr	r1, [r4, #56]	; fField56
        15f324:	e1500001 	cmp	r0, r1
        15f328:	959f0044 	ldrls	r0, [pc, #44]	; 15f374 <TPackageEventHandler::LoadNextPart(long *, unsigned char *, unsigned char *)+0x3e0>	; fField44
        15f32c:	9594103c 	ldrls	r1, [r4, #60]	; fField60
        15f330:	95a10028 	strls	r0, [r1, #40]!	; fField40
        15f334:	9a000015 	bls	15f390 <TPackageEventHandler::LoadNextPart(long *, unsigned char *, unsigned char *)+0x3fc>
        15f338:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        15f33c:	e594003c 	ldr	r0, [r4, #60]	; fField60
        15f340:	e2843020 	add	r3, r4, #32	; 0x20
        15f344:	e893000c 	ldmia	r3, {r2, r3}
        15f348:	e5901000 	ldr	r1, [r0]
        15f34c:	e1a0000d 	mov	r0, sp
        15f350:	eb66452a 	bl	1af0800 <TPkRemoveEvent::$__ct(unsigned long, unsigned long, unsigned long)>
        15f354:	e1a0100d 	mov	r1, sp
        15f358:	e1a00004 	mov	r0, r4
        15f35c:	e3a03001 	mov	r3, #1	; 0x1
        15f360:	e3a02000 	mov	r2, #0	; 0x0
        15f364:	eb6693aa 	bl	1b04214 <TPackageEventHandler::$RemovePackage(TPkRemoveEvent *, unsigned char, unsigned char)>
        15f368:	e28dd01c 	add	sp, sp, #28	; 0x1c
        15f36c:	ea000007 	b	15f390 <TPackageEventHandler::LoadNextPart(long *, unsigned char *, unsigned char *)+0x3fc>
        15f370:	00000000 	andeq	r0, r0, r0
        15f374:	73707664 	cmnvc	r0, #104857600	; 0x6400000
        15f378:	e59d0060 	ldr	r0, [sp, #96]	; fField96
        15f37c:	e24f1f05 	sub	r1, pc, #20	; 0x14
        15f380:	eb6a0f83 	bl	1be3194 <$Subexception>
        15f384:	e3300000 	teq	r0, #0	; 0x0
        15f388:	01a0000d 	moveq	r0, sp
        15f38c:	0b6a0b70 	bleq	1be2154 <$NextHandler>
        15f390:	e1a0000d 	mov	r0, sp
        15f394:	eb6a0747 	bl	1be10b8 <$ExitHandler>
        15f398:	e28dd06c 	add	sp, sp, #108	; 0x6c
        15f39c:	e5c69000 	strb	r9, [r6]
        15f3a0:	e5c59000 	strb	r9, [r5]
        15f3a4:	e5940028 	ldr	r0, [r4, #40]	; fField40
        15f3a8:	e3300000 	teq	r0, #0	; 0x0
        15f3ac:	0a00002a 	beq	15f45c <TPackageEventHandler::LoadNextPart(long *, unsigned char *, unsigned char *)+0x4c8>
        15f3b0:	e52d906c 	str	r9, [sp, -#108]!
        15f3b4:	e28d0008 	add	r0, sp, #8	; 0x8
        15f3b8:	eb694d6d 	bl	1bb2974 <$setjmp>
        15f3bc:	e3300000 	teq	r0, #0	; 0x0
        15f3c0:	1a000018 	bne	15f428 <TPackageEventHandler::LoadNextPart(long *, unsigned char *, unsigned char *)+0x494>
        15f3c4:	e1a0000d 	mov	r0, sp
        15f3c8:	eb6a032b 	bl	1be007c <$AddExceptionHandler>
        15f3cc:	e3a0a001 	mov	sl, #1	; 0x1
        15f3d0:	e5940028 	ldr	r0, [r4, #40]	; fField40
        15f3d4:	eb69cd55 	bl	1bd2930 <TPackageIterator::$ForDispatchOnly(void)>
        15f3d8:	e3300000 	teq	r0, #0	; 0x0
        15f3dc:	0a00000d 	beq	15f418 <TPackageEventHandler::LoadNextPart(long *, unsigned char *, unsigned char *)+0x484>
        15f3e0:	e5c6a000 	strb	sl, [r6]
        15f3e4:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        15f3e8:	e594003c 	ldr	r0, [r4, #60]	; fField60
        15f3ec:	e2843020 	add	r3, r4, #32	; 0x20
        15f3f0:	e893000c 	ldmia	r3, {r2, r3}
        15f3f4:	e5901000 	ldr	r1, [r0]
        15f3f8:	e1a0000d 	mov	r0, sp
        15f3fc:	eb6644ff 	bl	1af0800 <TPkRemoveEvent::$__ct(unsigned long, unsigned long, unsigned long)>
        15f400:	e1a0100d 	mov	r1, sp
        15f404:	e1a00004 	mov	r0, r4
        15f408:	e3a03000 	mov	r3, #0	; 0x0
        15f40c:	e3a02000 	mov	r2, #0	; 0x0
        15f410:	eb66937f 	bl	1b04214 <TPackageEventHandler::$RemovePackage(TPkRemoveEvent *, unsigned char, unsigned char)>
        15f414:	e28dd01c 	add	sp, sp, #28	; 0x1c
        15f418:	e5d40064 	ldrb	r0, [r4, #100]	; fField100
        15f41c:	e5c50000 	strb	r0, [r5]
        15f420:	e5c49064 	strb	r9, [r4, #100]	; fField100
        15f424:	ea000005 	b	15f440 <TPackageEventHandler::LoadNextPart(long *, unsigned char *, unsigned char *)+0x4ac>
        15f428:	e59d0060 	ldr	r0, [sp, #96]	; fField96
        15f42c:	e24f1f31 	sub	r1, pc, #196	; 0xc4
        15f430:	eb6a0f57 	bl	1be3194 <$Subexception>
        15f434:	e3300000 	teq	r0, #0	; 0x0
        15f438:	01a0000d 	moveq	r0, sp
        15f43c:	0b6a0b44 	bleq	1be2154 <$NextHandler>
        15f440:	e1a0000d 	mov	r0, sp
        15f444:	eb6a071b 	bl	1be10b8 <$ExitHandler>
        15f448:	e28dd06c 	add	sp, sp, #108	; 0x6c
        15f44c:	e5940028 	ldr	r0, [r4, #40]	; fField40
        15f450:	e3300000 	teq	r0, #0	; 0x0
        15f454:	13a01001 	movne	r1, #1	; 0x1
        15f458:	1b69bcae 	blne	1bce718 <TPackageIterator::$__dt(void)>
        15f45c:	e584903c 	str	r9, [r4, #60]	; fField60
        15f460:	e5849028 	str	r9, [r4, #40]	; fField40
        15f464:	e5c4901c 	strb	r9, [r4, #28]	; fField28
        15f468:	e3a0a000 	mov	sl, #0	; 0x0
        15f46c:	e5a49060 	str	r9, [r4, #96]!	; fField96
        15f470:	e1a0000a 	mov	r0, sl
        15f474:	e5878000 	str	r8, [r7]
        15f478:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TPackageEventHandler::GetPartSize(void)
 * Address: 0015f47c
 */
TPackageEventHandler::GetPartSize(void) {
    /*
        15f47c:	e1a0c00d 	mov	ip, sp
        15f480:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        15f484:	e24cb004 	sub	fp, ip, #4	; 0x4
        15f488:	e1a04000 	mov	r4, r0
        15f48c:	e5900028 	ldr	r0, [r0, #40]	; fField40
        15f490:	e3300000 	teq	r0, #0	; 0x0
        15f494:	03a00000 	moveq	r0, #0	; 0x0
        15f498:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        15f49c:	eb69e1c3 	bl	1bd7bb0 <TPackageIterator::$NumberOfParts(void)>
        15f4a0:	e2401001 	sub	r1, r0, #1	; 0x1
        15f4a4:	e5940038 	ldr	r0, [r4, #56]	; fField56
        15f4a8:	e1510000 	cmp	r1, r0
        15f4ac:	9a000003 	bls	15f4c0 <TPackageEventHandler::GetPartSize(void)+0x44>
        15f4b0:	e2801001 	add	r1, r0, #1	; 0x1
        15f4b4:	e5940028 	ldr	r0, [r4, #40]	; fField40
        15f4b8:	eb69d551 	bl	1bd4a04 <TPackageIterator::$GetPartDataOffset(unsigned long)>
        15f4bc:	ea000001 	b	15f4c8 <TPackageEventHandler::GetPartSize(void)+0x4c>
        15f4c0:	e5940028 	ldr	r0, [r4, #40]	; fField40
        15f4c4:	eb69e1c4 	bl	1bd7bdc <TPackageIterator::$PackageSize(void)>
        15f4c8:	e1a05000 	mov	r5, r0
        15f4cc:	e5b40028 	ldr	r0, [r4, #40]!	; fField40
        15f4d0:	e5b41010 	ldr	r1, [r4, #16]!
        15f4d4:	eb69d54a 	bl	1bd4a04 <TPackageIterator::$GetPartDataOffset(unsigned long)>
        15f4d8:	e0450000 	sub	r0, r5, r0
        15f4dc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TPackageEventHandler::RemovePart(PartId const &, TInstalledPart const &, unsigned char)
 * Address: 0015f4e0
 */
TPackageEventHandler::RemovePart(PartId const &, TInstalledPart const &, unsigned char) {
    /*
        15f4e0:	e1a0c00d 	mov	ip, sp
        15f4e4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        15f4e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        15f4ec:	e1a05000 	mov	r5, r0
        15f4f0:	e1a04002 	mov	r4, r2
        15f4f4:	e31300ff 	tst	r3, #255	; 0xff
        15f4f8:	15940010 	ldrne	r0, [r4, #16]
        15f4fc:	12000101 	andne	r0, r0, #1073741824	; 0x40000000
        15f500:	13300000 	teqne	r0, #0	; 0x0
        15f504:	0a000037 	beq	15f5e8 <TPackageEventHandler::RemovePart(PartId const &, TInstalledPart const &, unsigned char)+0x108>
        15f508:	e24dd02c 	sub	sp, sp, #44	; 0x2c
        15f50c:	e5942000 	ldr	r2, [r4]
        15f510:	e5943008 	ldr	r3, [r4, #8]
        15f514:	e92d000c 	stmdb	sp!, {r2, r3}
        15f518:	e1a02001 	mov	r2, r1
        15f51c:	e28d0008 	add	r0, sp, #8	; 0x8
        15f520:	e5943004 	ldr	r3, [r4, #4]
        15f524:	e5911000 	ldr	r1, [r1]
        15f528:	e5922004 	ldr	r2, [r2, #4]
        15f52c:	eb6644bb 	bl	1af0820 <TPkPartRemoveEvent::$__ct(PartId, long, unsigned long, long)>
        15f530:	e28dd008 	add	sp, sp, #8	; 0x8
        15f534:	e28d2024 	add	r2, sp, #36	; 0x24
        15f538:	e28d1028 	add	r1, sp, #40	; 0x28
        15f53c:	e1a00005 	mov	r0, r5
        15f540:	e5943000 	ldr	r3, [r4]
        15f544:	eb669759 	bl	1b052b0 <TPackageEventHandler::$SearchRegistry(long *, unsigned long *, long)>
        15f548:	e3300000 	teq	r0, #0	; 0x0
        15f54c:	1a000024 	bne	15f5e4 <TPackageEventHandler::RemovePart(PartId const &, TInstalledPart const &, unsigned char)+0x104>
        15f550:	e59d0024 	ldr	r0, [sp, #36]	; fField36
        15f554:	e1a01000 	mov	r1, r0
        15f558:	e5d5201c 	ldrb	r2, [r5, #28]	; fField28
        15f55c:	e3320000 	teq	r2, #0	; 0x0
        15f560:	0a000002 	beq	15f570 <TPackageEventHandler::RemovePart(PartId const &, TInstalledPart const &, unsigned char)+0x90>
        15f564:	e5952020 	ldr	r2, [r5, #32]	; fField32
        15f568:	e1320000 	teq	r2, r0
        15f56c:	05b51024 	ldreq	r1, [r5, #36]!	; fField36
        15f570:	e58d1024 	str	r1, [sp, #36]	; fField36
        15f574:	e24dd00c 	sub	sp, sp, #12	; 0xc
        15f578:	e28d0004 	add	r0, sp, #4	; 0x4
        15f57c:	eb69b852 	bl	1bcd6cc <TUPort::$__ct(unsigned long)>
        15f580:	e3a00000 	mov	r0, #0	; 0x0
        15f584:	e3a01000 	mov	r1, #0	; 0x0
        15f588:	e3a02865 	mov	r2, #6619136	; 0x650000
        15f58c:	e2822301 	add	r2, r2, #67108864	; 0x4000000
        15f590:	e3a0c000 	mov	ip, #0	; 0x0
        15f594:	e3a0e000 	mov	lr, #0	; 0x0
        15f598:	e3a03000 	mov	r3, #0	; 0x0
        15f59c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        15f5a0:	e1a0300e 	mov	r3, lr
        15f5a4:	e3a02000 	mov	r2, #0	; 0x0
        15f5a8:	e1a0100c 	mov	r1, ip
        15f5ac:	e3a00024 	mov	r0, #36	; 0x24
        15f5b0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        15f5b4:	e28d302c 	add	r3, sp, #44	; 0x2c
        15f5b8:	e92d0008 	stmdb	sp!, {r3}
        15f5bc:	e08d3000 	add	r3, sp, r0
        15f5c0:	e28d0028 	add	r0, sp, #40	; 0x28
        15f5c4:	e3a02002 	mov	r2, #2	; 0x2
        15f5c8:	e3a01001 	mov	r1, #1	; 0x1
        15f5cc:	eb69edde 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        15f5d0:	e28dd024 	add	sp, sp, #36	; 0x24
        15f5d4:	e28d0004 	add	r0, sp, #4	; 0x4
        15f5d8:	e3a01000 	mov	r1, #0	; 0x0
        15f5dc:	eb69bc50 	bl	1bce724 <TUObject::$__dt(void)>
        15f5e0:	e28dd00c 	add	sp, sp, #12	; 0xc
        15f5e4:	e28dd02c 	add	sp, sp, #44	; 0x2c
        15f5e8:	e5940010 	ldr	r0, [r4, #16]
        15f5ec:	e3100102 	tst	r0, #-2147483648	; 0x80000000
        15f5f0:	1594100c 	ldrne	r1, [r4, #12]
        15f5f4:	13310000 	teqne	r1, #0	; 0x0
        15f5f8:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        15f5fc:	e5940004 	ldr	r0, [r4, #4]
        15f600:	e3300000 	teq	r0, #0	; 0x0
        15f604:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        15f608:	e59f0020 	ldr	r0, [pc, #20]	; 15f630 <TPackageEventHandler::RemovePart(PartId const &, TInstalledPart const &, unsigned char)+0x150>	; fField20
        15f60c:	e5900000 	ldr	r0, [r0]
        15f610:	e3a02001 	mov	r2, #1	; 0x1
        15f614:	eb69c89a 	bl	1bd1884 <TClassInfoRegistry::$DeRegister(TClassInfo const *, unsigned char)>
        15f618:	e5940010 	ldr	r0, [r4, #16]
        15f61c:	e3100201 	tst	r0, #268435456	; 0x10000000
        15f620:	15b4000c 	ldrne	r0, [r4, #12]!
        15f624:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        15f628:	1a69ccca 	bne	1bd2958 <$free>
        15f62c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        15f630:	0c100b58 	ldceq	11, cr0, [r0], -#352
    */
}

/**
 * Symbol: TPackageEventHandler::SearchPackageList(long *, unsigned long)
 * Address: 0015f634
 */
TPackageEventHandler::SearchPackageList(long *, unsigned long) {
    /*
        15f634:	e1a0c00d 	mov	ip, sp
        15f638:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        15f63c:	e24cb004 	sub	fp, ip, #4	; 0x4
        15f640:	e1a04000 	mov	r4, r0
        15f644:	e1a06001 	mov	r6, r1
        15f648:	e1a05002 	mov	r5, r2
        15f64c:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        15f650:	e5901014 	ldr	r1, [r0, #20]	; fField20
        15f654:	e1a0000d 	mov	r0, sp
        15f658:	eb6a0ee5 	bl	1be31f4 <CArrayIterator::$__ct(CDynamicArray *)>
        15f65c:	e3e080a7 	mvn	r8, #167	; 0xa7
        15f660:	e2488b0a 	sub	r8, r8, #10240	; 0x2800
        15f664:	e1a0000d 	mov	r0, sp
        15f668:	eb6a1f61 	bl	1be73f4 <CArrayIterator::$FirstIndex(void)>
        15f66c:	e1a07000 	mov	r7, r0
        15f670:	e1a0000d 	mov	r0, sp
        15f674:	eb6a2bbf 	bl	1bea578 <CArrayIterator::$More(void)>
        15f678:	e3300000 	teq	r0, #0	; 0x0
        15f67c:	0a00000f 	beq	15f6c0 <TPackageEventHandler::SearchPackageList(long *, unsigned long)+0x8c>
        15f680:	e5941014 	ldr	r1, [r4, #20]	; fField20
        15f684:	e5910010 	ldr	r0, [r1, #16]
        15f688:	e5911004 	ldr	r1, [r1, #4]
        15f68c:	e0200197 	mla	r0, r7, r1, r0
        15f690:	e5900000 	ldr	r0, [r0]
        15f694:	e1300005 	teq	r0, r5
        15f698:	03a08000 	moveq	r8, #0	; 0x0
        15f69c:	05867000 	streq	r7, [r6]
        15f6a0:	0a000006 	beq	15f6c0 <TPackageEventHandler::SearchPackageList(long *, unsigned long)+0x8c>
        15f6a4:	e1a0000d 	mov	r0, sp
        15f6a8:	eb6a2fbb 	bl	1beb59c <CArrayIterator::$NextIndex(void)>
        15f6ac:	e1a07000 	mov	r7, r0
        15f6b0:	e1a0000d 	mov	r0, sp
        15f6b4:	eb6a2baf 	bl	1bea578 <CArrayIterator::$More(void)>
        15f6b8:	e3300000 	teq	r0, #0	; 0x0
        15f6bc:	1affffef 	bne	15f680 <TPackageEventHandler::SearchPackageList(long *, unsigned long)+0x4c>
        15f6c0:	e1a0000d 	mov	r0, sp
        15f6c4:	e3a01000 	mov	r1, #0	; 0x0
        15f6c8:	eb6a12e6 	bl	1be4268 <CArrayIterator::$__dt(void)>
        15f6cc:	e1a00008 	mov	r0, r8
        15f6d0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TPackageEventHandler::SearchPackageList(long *, unsigned short *, unsigned long)
 * Address: 0015f6d4
 */
TPackageEventHandler::SearchPackageList(long *, unsigned short *, unsigned long) {
    /*
        15f6d4:	e1a0c00d 	mov	ip, sp
        15f6d8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        15f6dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        15f6e0:	e1a04000 	mov	r4, r0
        15f6e4:	e1a06001 	mov	r6, r1
        15f6e8:	e1a05002 	mov	r5, r2
        15f6ec:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        15f6f0:	e5901014 	ldr	r1, [r0, #20]	; fField20
        15f6f4:	e1a0000d 	mov	r0, sp
        15f6f8:	eb6a0ebd 	bl	1be31f4 <CArrayIterator::$__ct(CDynamicArray *)>
        15f6fc:	e3e080a7 	mvn	r8, #167	; 0xa7
        15f700:	e2488b0a 	sub	r8, r8, #10240	; 0x2800
        15f704:	e1a0000d 	mov	r0, sp
        15f708:	eb6a1f39 	bl	1be73f4 <CArrayIterator::$FirstIndex(void)>
        15f70c:	e1a07000 	mov	r7, r0
        15f710:	e1a0000d 	mov	r0, sp
        15f714:	eb6a2b97 	bl	1bea578 <CArrayIterator::$More(void)>
        15f718:	e3300000 	teq	r0, #0	; 0x0
        15f71c:	0a000011 	beq	15f768 <TPackageEventHandler::SearchPackageList(long *, unsigned short *, unsigned long)+0x94>
        15f720:	e5941014 	ldr	r1, [r4, #20]	; fField20
        15f724:	e5910010 	ldr	r0, [r1, #16]
        15f728:	e5911004 	ldr	r1, [r1, #4]
        15f72c:	e0200197 	mla	r0, r7, r1, r0
        15f730:	e590001c 	ldr	r0, [r0, #28]	; fField28
        15f734:	e1a01005 	mov	r1, r5
        15f738:	eb6a3c06 	bl	1bee758 <$Ustrcmp>
        15f73c:	e3300000 	teq	r0, #0	; 0x0
        15f740:	03a08000 	moveq	r8, #0	; 0x0
        15f744:	05867000 	streq	r7, [r6]
        15f748:	0a000006 	beq	15f768 <TPackageEventHandler::SearchPackageList(long *, unsigned short *, unsigned long)+0x94>
        15f74c:	e1a0000d 	mov	r0, sp
        15f750:	eb6a2f91 	bl	1beb59c <CArrayIterator::$NextIndex(void)>
        15f754:	e1a07000 	mov	r7, r0
        15f758:	e1a0000d 	mov	r0, sp
        15f75c:	eb6a2b85 	bl	1bea578 <CArrayIterator::$More(void)>
        15f760:	e3300000 	teq	r0, #0	; 0x0
        15f764:	1affffed 	bne	15f720 <TPackageEventHandler::SearchPackageList(long *, unsigned short *, unsigned long)+0x4c>
        15f768:	e1a0000d 	mov	r0, sp
        15f76c:	e3a01000 	mov	r1, #0	; 0x0
        15f770:	eb6a12bc 	bl	1be4268 <CArrayIterator::$__dt(void)>
        15f774:	e1a00008 	mov	r0, r8
        15f778:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TPackageEventHandler::RemovePackage(TPkRemoveEvent *, unsigned char, unsigned char)
 * Address: 0015f77c
 */
TPackageEventHandler::RemovePackage(TPkRemoveEvent *, unsigned char, unsigned char) {
    /*
        15f77c:	e1a0c00d 	mov	ip, sp
        15f780:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        15f784:	e24cb004 	sub	fp, ip, #4	; 0x4
        15f788:	e1a04000 	mov	r4, r0
        15f78c:	e1a05001 	mov	r5, r1
        15f790:	e20290ff 	and	r9, r2, #255	; 0xff
        15f794:	e203a0ff 	and	sl, r3, #255	; 0xff
        15f798:	e24dd008 	sub	sp, sp, #8	; 0x8
        15f79c:	e5917010 	ldr	r7, [r1, #16]
        15f7a0:	e2811014 	add	r1, r1, #20	; 0x14
        15f7a4:	e8910003 	ldmia	r1, {r0, r1}
        15f7a8:	e3a02001 	mov	r2, #1	; 0x1
        15f7ac:	e5c4201c 	strb	r2, [r4, #28]	; fField28
        15f7b0:	e1a02007 	mov	r2, r7
        15f7b4:	e2844020 	add	r4, r4, #32	; 0x20
        15f7b8:	e8840003 	stmia	r4, {r0, r1}
        15f7bc:	e2444020 	sub	r4, r4, #32	; 0x20
        15f7c0:	e28d1004 	add	r1, sp, #4	; 0x4
        15f7c4:	e1a00004 	mov	r0, r4
        15f7c8:	eb6696b7 	bl	1b052ac <TPackageEventHandler::$SearchPackageList(long *, unsigned long)>
        15f7cc:	e58d0000 	str	r0, [sp]
        15f7d0:	e3300000 	teq	r0, #0	; 0x0
        15f7d4:	1a00004c 	bne	15f90c <TPackageEventHandler::RemovePackage(TPkRemoveEvent *, unsigned char, unsigned char)+0x190>
        15f7d8:	e24dd008 	sub	sp, sp, #8	; 0x8
        15f7dc:	e5940014 	ldr	r0, [r4, #20]	; fField20
        15f7e0:	e59d100c 	ldr	r1, [sp, #12]
        15f7e4:	e5902010 	ldr	r2, [r0, #16]
        15f7e8:	e5900004 	ldr	r0, [r0, #4]
        15f7ec:	e0262091 	mla	r6, r1, r0, r2
        15f7f0:	e3a08000 	mov	r8, #0	; 0x0
        15f7f4:	e5960028 	ldr	r0, [r6, #40]	; fField40
        15f7f8:	e59fc140 	ldr	ip, [pc, #140]	; 15f940 <TPackageEventHandler::RemovePackage(TPkRemoveEvent *, unsigned char, unsigned char)+0x1c4>
        15f7fc:	e130000c 	teq	r0, ip
        15f800:	0596802c 	ldreq	r8, [r6, #44]	; fField44
        15f804:	e3a01001 	mov	r1, #1	; 0x1
        15f808:	e596001c 	ldr	r0, [r6, #28]	; fField28
        15f80c:	eb67650f 	bl	1b38c50 <$SetCardReinsertReason(unsigned short const *, unsigned char)>
        15f810:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        15f814:	e3a03000 	mov	r3, #0	; 0x0
        15f818:	e92d0008 	stmdb	sp!, {r3}
        15f81c:	e5960024 	ldr	r0, [r6, #36]	; fField36
        15f820:	e1a01000 	mov	r1, r0
        15f824:	e5900000 	ldr	r0, [r0]
        15f828:	e2403001 	sub	r3, r0, #1	; 0x1
        15f82c:	e1a02008 	mov	r2, r8
        15f830:	e28d0004 	add	r0, sp, #4	; 0x4
        15f834:	eb6a0e6f 	bl	1be31f8 <CArrayIterator::$__ct(CDynamicArray *, long, long, unsigned char)>
        15f838:	e28dd004 	add	sp, sp, #4	; 0x4
        15f83c:	e58d701c 	str	r7, [sp, #28]	; fField28
        15f840:	e59f00f8 	ldr	r0, [pc, #f8]	; 15f940 <TPackageEventHandler::RemovePackage(TPkRemoveEvent *, unsigned char, unsigned char)+0x1c4>
        15f844:	e5860028 	str	r0, [r6, #40]	; fField40
        15f848:	e1a0000d 	mov	r0, sp
        15f84c:	eb6a1ee8 	bl	1be73f4 <CArrayIterator::$FirstIndex(void)>
        15f850:	e1a08000 	mov	r8, r0
        15f854:	e1a0000d 	mov	r0, sp
        15f858:	eb6a2b46 	bl	1bea578 <CArrayIterator::$More(void)>
        15f85c:	e3300000 	teq	r0, #0	; 0x0
        15f860:	0a000011 	beq	15f8ac <TPackageEventHandler::RemovePackage(TPkRemoveEvent *, unsigned char, unsigned char)+0x130>
        15f864:	e5961024 	ldr	r1, [r6, #36]	; fField36
        15f868:	e5910010 	ldr	r0, [r1, #16]
        15f86c:	e5911004 	ldr	r1, [r1, #4]
        15f870:	e0220198 	mla	r2, r8, r1, r0
        15f874:	e58d8020 	str	r8, [sp, #32]	; fField32
        15f878:	e2880001 	add	r0, r8, #1	; 0x1
        15f87c:	e1a0300a 	mov	r3, sl
        15f880:	e28d101c 	add	r1, sp, #28	; 0x1c
        15f884:	e586002c 	str	r0, [r6, #44]	; fField44
        15f888:	e1a00004 	mov	r0, r4
        15f88c:	eb669262 	bl	1b0421c <TPackageEventHandler::$RemovePart(PartId const &, TInstalledPart const &, unsigned char)>
        15f890:	e1a0000d 	mov	r0, sp
        15f894:	eb6a2f40 	bl	1beb59c <CArrayIterator::$NextIndex(void)>
        15f898:	e1a08000 	mov	r8, r0
        15f89c:	e1a0000d 	mov	r0, sp
        15f8a0:	eb6a2b34 	bl	1bea578 <CArrayIterator::$More(void)>
        15f8a4:	e3300000 	teq	r0, #0	; 0x0
        15f8a8:	1affffed 	bne	15f864 <TPackageEventHandler::RemovePackage(TPkRemoveEvent *, unsigned char, unsigned char)+0xe8>
        15f8ac:	e3a01000 	mov	r1, #0	; 0x0
        15f8b0:	e3a00000 	mov	r0, #0	; 0x0
        15f8b4:	eb6764e5 	bl	1b38c50 <$SetCardReinsertReason(unsigned short const *, unsigned char)>
        15f8b8:	e1a0000d 	mov	r0, sp
        15f8bc:	e3a01000 	mov	r1, #0	; 0x0
        15f8c0:	eb6a1268 	bl	1be4268 <CArrayIterator::$__dt(void)>
        15f8c4:	e28dd01c 	add	sp, sp, #28	; 0x1c
        15f8c8:	e1a00004 	mov	r0, r4
        15f8cc:	eb669a96 	bl	1b0632c <TPackageEventHandler::$SetPersistentHeap(void)>
        15f8d0:	e5960024 	ldr	r0, [r6, #36]	; fField36
        15f8d4:	e3300000 	teq	r0, #0	; 0x0
        15f8d8:	13a01001 	movne	r1, #1	; 0x1
        15f8dc:	1b6a1260 	blne	1be4264 <CDynamicArray::$__dt(void)>
        15f8e0:	e596001c 	ldr	r0, [r6, #28]	; fField28
        15f8e4:	eb69b77d 	bl	1bcd6e0 <$__dl(void *)>
        15f8e8:	e5b60020 	ldr	r0, [r6, #32]!	; fField32
        15f8ec:	eb69b77b 	bl	1bcd6e0 <$__dl(void *)>
        15f8f0:	e5940014 	ldr	r0, [r4, #20]	; fField20
        15f8f4:	e3a02001 	mov	r2, #1	; 0x1
        15f8f8:	e59d100c 	ldr	r1, [sp, #12]
        15f8fc:	eb6a334c 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
        15f900:	e1a00004 	mov	r0, r4
        15f904:	eb66967b 	bl	1b052f8 <TPackageEventHandler::$SetDefaultHeap(void)>
        15f908:	e28dd008 	add	sp, sp, #8	; 0x8
        15f90c:	e3a00000 	mov	r0, #0	; 0x0
        15f910:	e5c4001c 	strb	r0, [r4, #28]	; fField28
        15f914:	e1a00007 	mov	r0, r7
        15f918:	ebfe1b70 	bl	e66e0 <DeregisterLoadedCodeWithDebugger(unsigned long)>
        15f91c:	e59d0000 	ldr	r0, [sp]
        15f920:	e3390000 	teq	r9, #0	; 0x0
        15f924:	e585000c 	str	r0, [r5, #12]
        15f928:	0a000003 	beq	15f93c <TPackageEventHandler::RemovePackage(TPkRemoveEvent *, unsigned char, unsigned char)+0x1c0>
        15f92c:	e1a02005 	mov	r2, r5
        15f930:	e1a00004 	mov	r0, r4
        15f934:	e3a0101c 	mov	r1, #28	; 0x1c
        15f938:	eb6a3760 	bl	1bed6c0 <TAEventHandler::$SetReply(unsigned long, TAEvent *)>
        15f93c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        15f940:	7370636d 	cmnvc	r0, #-1275068415	; 0xb4000001
    */
}

/**
 * Symbol: TPackageEventHandler::SearchRegistry(long *, unsigned long *, long)
 * Address: 0015f944
 */
TPackageEventHandler::SearchRegistry(long *, unsigned long *, long) {
    /*
        15f944:	e1a0c00d 	mov	ip, sp
        15f948:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        15f94c:	e24cb004 	sub	fp, ip, #4	; 0x4
        15f950:	e1a04000 	mov	r4, r0
        15f954:	e1a07001 	mov	r7, r1
        15f958:	e1a06002 	mov	r6, r2
        15f95c:	e1a05003 	mov	r5, r3
        15f960:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        15f964:	e5901018 	ldr	r1, [r0, #24]	; fField24
        15f968:	e1a0000d 	mov	r0, sp
        15f96c:	eb6a0e20 	bl	1be31f4 <CArrayIterator::$__ct(CDynamicArray *)>
        15f970:	e3e090a6 	mvn	r9, #166	; 0xa6
        15f974:	e2499b0a 	sub	r9, r9, #10240	; 0x2800
        15f978:	e1a0000d 	mov	r0, sp
        15f97c:	eb6a1e9c 	bl	1be73f4 <CArrayIterator::$FirstIndex(void)>
        15f980:	e1a08000 	mov	r8, r0
        15f984:	e1a0000d 	mov	r0, sp
        15f988:	eb6a2afa 	bl	1bea578 <CArrayIterator::$More(void)>
        15f98c:	e3300000 	teq	r0, #0	; 0x0
        15f990:	0a000013 	beq	15f9e4 <TPackageEventHandler::SearchRegistry(long *, unsigned long *, long)+0xa0>
        15f994:	e1a01008 	mov	r1, r8
        15f998:	e5940018 	ldr	r0, [r4, #24]	; fField24
        15f99c:	eb6a373c 	bl	1bed694 <CDynamicArray::$SafeElementPtrAt(long)>
        15f9a0:	e3300000 	teq	r0, #0	; 0x0
        15f9a4:	0a000007 	beq	15f9c8 <TPackageEventHandler::SearchRegistry(long *, unsigned long *, long)+0x84>
        15f9a8:	e5901000 	ldr	r1, [r0]
        15f9ac:	e1310005 	teq	r1, r5
        15f9b0:	1a000004 	bne	15f9c8 <TPackageEventHandler::SearchRegistry(long *, unsigned long *, long)+0x84>
        15f9b4:	e5900004 	ldr	r0, [r0, #4]
        15f9b8:	e5860000 	str	r0, [r6]
        15f9bc:	e3a09000 	mov	r9, #0	; 0x0
        15f9c0:	e5878000 	str	r8, [r7]
        15f9c4:	ea000006 	b	15f9e4 <TPackageEventHandler::SearchRegistry(long *, unsigned long *, long)+0xa0>
        15f9c8:	e1a0000d 	mov	r0, sp
        15f9cc:	eb6a2ef2 	bl	1beb59c <CArrayIterator::$NextIndex(void)>
        15f9d0:	e1a08000 	mov	r8, r0
        15f9d4:	e1a0000d 	mov	r0, sp
        15f9d8:	eb6a2ae6 	bl	1bea578 <CArrayIterator::$More(void)>
        15f9dc:	e3300000 	teq	r0, #0	; 0x0
        15f9e0:	1affffeb 	bne	15f994 <TPackageEventHandler::SearchRegistry(long *, unsigned long *, long)+0x50>
        15f9e4:	e1a0000d 	mov	r0, sp
        15f9e8:	e3a01000 	mov	r1, #0	; 0x0
        15f9ec:	eb6a121d 	bl	1be4268 <CArrayIterator::$__dt(void)>
        15f9f0:	e1a00009 	mov	r0, r9
        15f9f4:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TPackageEventHandler::Register(TPkRegisterEvent *)
 * Address: 0015f9f8
 */
TPackageEventHandler::Register(TPkRegisterEvent *) {
    /*
        15f9f8:	e1a0c00d 	mov	ip, sp
        15f9fc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        15fa00:	e24cb004 	sub	fp, ip, #4	; 0x4
        15fa04:	e1a05000 	mov	r5, r0
        15fa08:	e1a04001 	mov	r4, r1
        15fa0c:	e24dd008 	sub	sp, sp, #8	; 0x8
        15fa10:	e28d2004 	add	r2, sp, #4	; 0x4
        15fa14:	e5913010 	ldr	r3, [r1, #16]
        15fa18:	e1a0100d 	mov	r1, sp
        15fa1c:	eb669623 	bl	1b052b0 <TPackageEventHandler::$SearchRegistry(long *, unsigned long *, long)>
        15fa20:	e280cda2 	add	ip, r0, #10368	; 0x2880
        15fa24:	e37c0027 	cmn	ip, #39	; 0x27
        15fa28:	1a00000c 	bne	15fa60 <TPackageEventHandler::Register(TPkRegisterEvent *)+0x68>
        15fa2c:	e24dd008 	sub	sp, sp, #8	; 0x8
        15fa30:	e1a0000d 	mov	r0, sp
        15fa34:	e2842010 	add	r2, r4, #16	; 0x10
        15fa38:	e8920006 	ldmia	r2, {r1, r2}
        15fa3c:	eb663f6a 	bl	1aef7ec <TRegistryInfo::$__ct(unsigned long, unsigned long)>
        15fa40:	e5950018 	ldr	r0, [r5, #24]	; fField24
        15fa44:	e1a0200d 	mov	r2, sp
        15fa48:	e3a03001 	mov	r3, #1	; 0x1
        15fa4c:	e5901000 	ldr	r1, [r0]
        15fa50:	eb6a26a8 	bl	1be94f8 <CDynamicArray::$InsertElementsBefore(long, void *, long)>
        15fa54:	e3a00000 	mov	r0, #0	; 0x0
        15fa58:	e28dd008 	add	sp, sp, #8	; 0x8
        15fa5c:	ea000001 	b	15fa68 <TPackageEventHandler::Register(TPkRegisterEvent *)+0x70>
        15fa60:	e3e000a5 	mvn	r0, #165	; 0xa5
        15fa64:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        15fa68:	e584000c 	str	r0, [r4, #12]
        15fa6c:	e1a02004 	mov	r2, r4
        15fa70:	e1a00005 	mov	r0, r5
        15fa74:	e3a01018 	mov	r1, #24	; 0x18
        15fa78:	eb6a3710 	bl	1bed6c0 <TAEventHandler::$SetReply(unsigned long, TAEvent *)>
        15fa7c:	e1a00005 	mov	r0, r5
        15fa80:	eb6a32f2 	bl	1bec650 <TAEventHandler::$ReplyImmed(void)>
        15fa84:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TPackageEventHandler::Unregister(TPkUnregisterEvent *)
 * Address: 0015fa90
 */
TPackageEventHandler::Unregister(TPkUnregisterEvent *) {
    /*
        15fa90:	e1a0c00d 	mov	ip, sp
        15fa94:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        15fa98:	e24cb004 	sub	fp, ip, #4	; 0x4
        15fa9c:	e1a04000 	mov	r4, r0
        15faa0:	e1a05001 	mov	r5, r1
        15faa4:	e24dd008 	sub	sp, sp, #8	; 0x8
        15faa8:	e28d2004 	add	r2, sp, #4	; 0x4
        15faac:	e5913010 	ldr	r3, [r1, #16]
        15fab0:	e1a0100d 	mov	r1, sp
        15fab4:	eb6695fd 	bl	1b052b0 <TPackageEventHandler::$SearchRegistry(long *, unsigned long *, long)>
        15fab8:	e3300000 	teq	r0, #0	; 0x0
        15fabc:	1a000003 	bne	15fad0 <TPackageEventHandler::Unregister(TPkUnregisterEvent *)+0x40>
        15fac0:	e5940018 	ldr	r0, [r4, #24]	; fField24
        15fac4:	e3a02001 	mov	r2, #1	; 0x1
        15fac8:	e59d1000 	ldr	r1, [sp]
        15facc:	eb6a32d8 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
        15fad0:	e3a00000 	mov	r0, #0	; 0x0
        15fad4:	e585000c 	str	r0, [r5, #12]
        15fad8:	e1a02005 	mov	r2, r5
        15fadc:	e1a00004 	mov	r0, r4
        15fae0:	e3a01014 	mov	r1, #20	; 0x14
        15fae4:	eb6a36f5 	bl	1bed6c0 <TAEventHandler::$SetReply(unsigned long, TAEvent *)>
        15fae8:	e1a00004 	mov	r0, r4
        15faec:	eb6a32d7 	bl	1bec650 <TAEventHandler::$ReplyImmed(void)>
        15faf0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TPackageEventHandler::SafeToDeactivatePackage(TPkSafeToDeactivate *)
 * Address: 0015faf4
 */
TPackageEventHandler::SafeToDeactivatePackage(TPkSafeToDeactivate *) {
    /*
        15faf4:	e1a0c00d 	mov	ip, sp
        15faf8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        15fafc:	e24cb004 	sub	fp, ip, #4	; 0x4
        15fb00:	e1a05000 	mov	r5, r0
        15fb04:	e1a04001 	mov	r4, r1
        15fb08:	e24dd004 	sub	sp, sp, #4	; 0x4
        15fb0c:	e3a00001 	mov	r0, #1	; 0x1
        15fb10:	e5c10014 	strb	r0, [r1, #20]	; fField20
        15fb14:	e5912010 	ldr	r2, [r1, #16]
        15fb18:	e1a0100d 	mov	r1, sp
        15fb1c:	e1a00005 	mov	r0, r5
        15fb20:	eb6695e1 	bl	1b052ac <TPackageEventHandler::$SearchPackageList(long *, unsigned long)>
        15fb24:	e1b08000 	movs	r8, r0
        15fb28:	1a000031 	bne	15fbf4 <TPackageEventHandler::SafeToDeactivatePackage(TPkSafeToDeactivate *)+0x100>
        15fb2c:	e5950014 	ldr	r0, [r5, #20]	; fField20
        15fb30:	e41d101c 	ldr	r1, [sp], -#28	; fField28
        15fb34:	e5902010 	ldr	r2, [r0, #16]
        15fb38:	e5900004 	ldr	r0, [r0, #4]
        15fb3c:	e0262091 	mla	r6, r1, r0, r2
        15fb40:	e3a02000 	mov	r2, #0	; 0x0
        15fb44:	e3a03000 	mov	r3, #0	; 0x0
        15fb48:	e92d0008 	stmdb	sp!, {r3}
        15fb4c:	e5960024 	ldr	r0, [r6, #36]	; fField36
        15fb50:	e1a01000 	mov	r1, r0
        15fb54:	e5900000 	ldr	r0, [r0]
        15fb58:	e2403001 	sub	r3, r0, #1	; 0x1
        15fb5c:	e28d0004 	add	r0, sp, #4	; 0x4
        15fb60:	eb6a0da4 	bl	1be31f8 <CArrayIterator::$__ct(CDynamicArray *, long, long, unsigned char)>
        15fb64:	e28dd004 	add	sp, sp, #4	; 0x4
        15fb68:	e1a0000d 	mov	r0, sp
        15fb6c:	eb6a1e20 	bl	1be73f4 <CArrayIterator::$FirstIndex(void)>
        15fb70:	e1a07000 	mov	r7, r0
        15fb74:	e1a0000d 	mov	r0, sp
        15fb78:	eb6a2a7e 	bl	1bea578 <CArrayIterator::$More(void)>
        15fb7c:	e3300000 	teq	r0, #0	; 0x0
        15fb80:	0a000017 	beq	15fbe4 <TPackageEventHandler::SafeToDeactivatePackage(TPkSafeToDeactivate *)+0xf0>
        15fb84:	e59f9080 	ldr	r9, [pc, #80]	; 15fc0c <TPackageEventHandler::SafeToDeactivatePackage(TPkSafeToDeactivate *)+0x118>
        15fb88:	e5960024 	ldr	r0, [r6, #36]	; fField36
        15fb8c:	e5901010 	ldr	r1, [r0, #16]
        15fb90:	e5900004 	ldr	r0, [r0, #4]
        15fb94:	e0201097 	mla	r0, r7, r0, r1
        15fb98:	e5901004 	ldr	r1, [r0, #4]
        15fb9c:	e3310000 	teq	r1, #0	; 0x0
        15fba0:	1a000008 	bne	15fbc8 <TPackageEventHandler::SafeToDeactivatePackage(TPkSafeToDeactivate *)+0xd4>
        15fba4:	e5b0100c 	ldr	r1, [r0, #12]!
        15fba8:	e5990000 	ldr	r0, [r9]
        15fbac:	eb6a9e02 	bl	1c073bc <TClassInfoRegistry::$GetInstanceCount(TClassInfo const *)>
        15fbb0:	e3300000 	teq	r0, #0	; 0x0
        15fbb4:	03a00001 	moveq	r0, #1	; 0x1
        15fbb8:	13a00000 	movne	r0, #0	; 0x0
        15fbbc:	e5c40014 	strb	r0, [r4, #20]	; fField20
        15fbc0:	e31000ff 	tst	r0, #255	; 0xff
        15fbc4:	0a000006 	beq	15fbe4 <TPackageEventHandler::SafeToDeactivatePackage(TPkSafeToDeactivate *)+0xf0>
        15fbc8:	e1a0000d 	mov	r0, sp
        15fbcc:	eb6a2e72 	bl	1beb59c <CArrayIterator::$NextIndex(void)>
        15fbd0:	e1a07000 	mov	r7, r0
        15fbd4:	e1a0000d 	mov	r0, sp
        15fbd8:	eb6a2a66 	bl	1bea578 <CArrayIterator::$More(void)>
        15fbdc:	e3300000 	teq	r0, #0	; 0x0
        15fbe0:	1affffe8 	bne	15fb88 <TPackageEventHandler::SafeToDeactivatePackage(TPkSafeToDeactivate *)+0x94>
        15fbe4:	e1a0000d 	mov	r0, sp
        15fbe8:	e3a01000 	mov	r1, #0	; 0x0
        15fbec:	eb6a119d 	bl	1be4268 <CArrayIterator::$__dt(void)>
        15fbf0:	e28dd01c 	add	sp, sp, #28	; 0x1c
        15fbf4:	e584800c 	str	r8, [r4, #12]
        15fbf8:	e1a02004 	mov	r2, r4
        15fbfc:	e1a00005 	mov	r0, r5
        15fc00:	e3a01018 	mov	r1, #24	; 0x18
        15fc04:	eb6a36ad 	bl	1bed6c0 <TAEventHandler::$SetReply(unsigned long, TAEvent *)>
        15fc08:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        15fc0c:	0c100b58 	ldceq	11, cr0, [r0], -#352
    */
}

/**
 * Symbol: TPackageEventHandler::SetPersistentHeap(void)
 * Address: 0015fc10
 */
TPackageEventHandler::SetPersistentHeap(void) {
    /*
        15fc10:	e1a0c00d 	mov	ip, sp
        15fc14:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        15fc18:	e24cb004 	sub	fp, ip, #4	; 0x4
        15fc1c:	eb69cf6c 	bl	1bd39d4 <$GetGlobals>
        15fc20:	e5900074 	ldr	r0, [r0, #116]	; fField116
        15fc24:	e91b6800 	ldmdb	fp, {fp, sp, lr}
        15fc28:	ea6a0d54 	b	1be3180 <$SetHeap>
    */
}

/**
 * Symbol: TPackageEventHandler::SetDefaultHeap(void)
 * Address: 0015fc2c
 */
TPackageEventHandler::SetDefaultHeap(void) {
    /*
        15fc2c:	e1a0c00d 	mov	ip, sp
        15fc30:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        15fc34:	e24cb004 	sub	fp, ip, #4	; 0x4
        15fc38:	eb69cf65 	bl	1bd39d4 <$GetGlobals>
        15fc3c:	e5900078 	ldr	r0, [r0, #120]	; fField120
        15fc40:	e91b6800 	ldmdb	fp, {fp, sp, lr}
        15fc44:	ea6a0d4d 	b	1be3180 <$SetHeap>
    */
}

/**
 * Symbol: TPackageEventHandler::GetBackupInfo(TPkBackupEvent *)
 * Address: 0015fc48
 */
TPackageEventHandler::GetBackupInfo(TPkBackupEvent *) {
    /*
        15fc48:	e1a0c00d 	mov	ip, sp
        15fc4c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        15fc50:	e24cb004 	sub	fp, ip, #4	; 0x4
        15fc54:	e1a05000 	mov	r5, r0
        15fc58:	e1a04001 	mov	r4, r1
        15fc5c:	e3a0a000 	mov	sl, #0	; 0x0
        15fc60:	e2811020 	add	r1, r1, #32	; 0x20
        15fc64:	e8910003 	ldmia	r1, {r0, r1}
        15fc68:	e3a02001 	mov	r2, #1	; 0x1
        15fc6c:	e5c5201c 	strb	r2, [r5, #28]	; fField28
        15fc70:	e2855020 	add	r5, r5, #32	; 0x20
        15fc74:	e8850003 	stmia	r5, {r0, r1}
        15fc78:	e2455020 	sub	r5, r5, #32	; 0x20
        15fc7c:	e2857044 	add	r7, r5, #68	; 0x44
        15fc80:	e5940010 	ldr	r0, [r4, #16]
        15fc84:	e3300000 	teq	r0, #0	; 0x0
        15fc88:	1a00000a 	bne	15fcb8 <TPackageEventHandler::GetBackupInfo(TPkBackupEvent *)+0x70>
        15fc8c:	e3a03001 	mov	r3, #1	; 0x1
        15fc90:	e92d0008 	stmdb	sp!, {r3}
        15fc94:	e5950014 	ldr	r0, [r5, #20]	; fField20
        15fc98:	e1a01000 	mov	r1, r0
        15fc9c:	e5900000 	ldr	r0, [r0]
        15fca0:	e2403001 	sub	r3, r0, #1	; 0x1
        15fca4:	e1a00007 	mov	r0, r7
        15fca8:	e3a02000 	mov	r2, #0	; 0x0
        15fcac:	eb6a25fb 	bl	1be94a0 <CArrayIterator::$Init(CDynamicArray *, long, long, unsigned char)>
        15fcb0:	e28dd004 	add	sp, sp, #4	; 0x4
        15fcb4:	ea000001 	b	15fcc0 <TPackageEventHandler::GetBackupInfo(TPkBackupEvent *)+0x78>
        15fcb8:	e1a00007 	mov	r0, r7
        15fcbc:	eb6a2e36 	bl	1beb59c <CArrayIterator::$NextIndex(void)>
        15fcc0:	e1a00007 	mov	r0, r7
        15fcc4:	eb6a2a2b 	bl	1bea578 <CArrayIterator::$More(void)>
        15fcc8:	e3a09000 	mov	r9, #0	; 0x0
        15fccc:	e3300000 	teq	r0, #0	; 0x0
        15fcd0:	03e08000 	mvneq	r8, #0	; 0x0
        15fcd4:	0a000018 	beq	15fd3c <TPackageEventHandler::GetBackupInfo(TPkBackupEvent *)+0xf4>
        15fcd8:	e1a00007 	mov	r0, r7
        15fcdc:	eb6a1db6 	bl	1be73bc <CArrayIterator::$CurrentIndex(void)>
        15fce0:	e1a08000 	mov	r8, r0
        15fce4:	e1a00007 	mov	r0, r7
        15fce8:	eb6a2a22 	bl	1bea578 <CArrayIterator::$More(void)>
        15fcec:	e3300000 	teq	r0, #0	; 0x0
        15fcf0:	0a00000f 	beq	15fd34 <TPackageEventHandler::GetBackupInfo(TPkBackupEvent *)+0xec>
        15fcf4:	e5951014 	ldr	r1, [r5, #20]	; fField20
        15fcf8:	e5910010 	ldr	r0, [r1, #16]
        15fcfc:	e5911004 	ldr	r1, [r1, #4]
        15fd00:	e0260198 	mla	r6, r8, r1, r0
        15fd04:	e5960014 	ldr	r0, [r6, #20]	; fField20
        15fd08:	e3100202 	tst	r0, #536870912	; 0x20000000
        15fd0c:	05940014 	ldreq	r0, [r4, #20]	; fField20
        15fd10:	03700001 	cmneq	r0, #1	; 0x1
        15fd14:	0a000006 	beq	15fd34 <TPackageEventHandler::GetBackupInfo(TPkBackupEvent *)+0xec>
        15fd18:	e1a00007 	mov	r0, r7
        15fd1c:	eb6a2e1e 	bl	1beb59c <CArrayIterator::$NextIndex(void)>
        15fd20:	e1a08000 	mov	r8, r0
        15fd24:	e1a00007 	mov	r0, r7
        15fd28:	eb6a2a12 	bl	1bea578 <CArrayIterator::$More(void)>
        15fd2c:	e3300000 	teq	r0, #0	; 0x0
        15fd30:	1affffef 	bne	15fcf4 <TPackageEventHandler::GetBackupInfo(TPkBackupEvent *)+0xac>
        15fd34:	e3780001 	cmn	r8, #1	; 0x1
        15fd38:	1a000004 	bne	15fd50 <TPackageEventHandler::GetBackupInfo(TPkBackupEvent *)+0x108>
        15fd3c:	e5849028 	str	r9, [r4, #40]	; fField40
        15fd40:	e584902c 	str	r9, [r4, #44]	; fField44
        15fd44:	e5849030 	str	r9, [r4, #48]	; fField48
        15fd48:	e584903c 	str	r9, [r4, #60]	; fField60
        15fd4c:	ea000011 	b	15fd98 <TPackageEventHandler::GetBackupInfo(TPkBackupEvent *)+0x150>
        15fd50:	e5960008 	ldr	r0, [r6, #8]
        15fd54:	e5840028 	str	r0, [r4, #40]	; fField40
        15fd58:	e5960000 	ldr	r0, [r6]
        15fd5c:	e584002c 	str	r0, [r4, #44]	; fField44
        15fd60:	e5960004 	ldr	r0, [r6, #4]
        15fd64:	e5840030 	str	r0, [r4, #48]	; fField48
        15fd68:	e2841034 	add	r1, r4, #52	; 0x34
        15fd6c:	e286000c 	add	r0, r6, #12	; 0xc
        15fd70:	e8905000 	ldmia	r0, {ip, lr}
        15fd74:	e8815000 	stmia	r1, {ip, lr}
        15fd78:	e5960014 	ldr	r0, [r6, #20]	; fField20
        15fd7c:	e584003c 	str	r0, [r4, #60]	; fField60
        15fd80:	e5960018 	ldr	r0, [r6, #24]	; fField24
        15fd84:	e5840040 	str	r0, [r4, #64]	; fField64
        15fd88:	e2840044 	add	r0, r4, #68	; 0x44
        15fd8c:	e3a02020 	mov	r2, #32	; 0x20
        15fd90:	e5b6101c 	ldr	r1, [r6, #28]!	; fField28
        15fd94:	eb6a3a73 	bl	1bee768 <$Ustrncpy>
        15fd98:	e5848010 	str	r8, [r4, #16]
        15fd9c:	e5c5901c 	strb	r9, [r5, #28]	; fField28
        15fda0:	e584a00c 	str	sl, [r4, #12]
        15fda4:	e1a02004 	mov	r2, r4
        15fda8:	e1a00005 	mov	r0, r5
        15fdac:	e3a01088 	mov	r1, #136	; 0x88
        15fdb0:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        15fdb4:	ea6a3641 	b	1bed6c0 <TAEventHandler::$SetReply(unsigned long, TAEvent *)>
    */
}

