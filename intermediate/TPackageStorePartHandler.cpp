#include "include/TPackageStorePartHandler.h"

/**
 * Symbol: TPackageStorePartHandler::__ct(void)
 * Address: 0016019c
 */
TPackageStorePartHandler::TPackageStorePartHandler(void) {
    /*
        16019c:	e1a0c00d 	mov	ip, sp
        1601a0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1601a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1601a8:	e1b04000 	movs	r4, r0
        1601ac:	1a000003 	bne	1601c0 <TPackageStorePartHandler::__ct(void)+0x24>
        1601b0:	e3a00040 	mov	r0, #64	; 0x40
        1601b4:	eb69b95f 	bl	1bce738 <$__nw(unsigned int)>
        1601b8:	e1b04000 	movs	r4, r0
        1601bc:	0a000003 	beq	1601d0 <TPackageStorePartHandler::__ct(void)+0x34>
        1601c0:	e1a00004 	mov	r0, r4
        1601c4:	eb69b52d 	bl	1bcd680 <TPartHandler::$__ct(void)>
        1601c8:	e59f0008 	ldr	r0, [pc, #8]	; 1601d8 <TPackageStorePartHandler::__ct(void)+0x3c>
        1601cc:	e5840000 	str	r0, [r4]
        1601d0:	e1a00004 	mov	r0, r4
        1601d4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1601d8:	0001f2a0 	andeq	pc, r1, r0, lsr #5
    */
}

/**
 * Symbol: TPackageStorePartHandler::Install(PartId const &, SourceType, PartInfo *)
 * Address: 001601dc
 */
TPackageStorePartHandler::Install(PartId const &, SourceType, PartInfo *) {
    /*
        1601dc:	e1a0c00d 	mov	ip, sp
        1601e0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1601e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1601e8:	e1a06002 	mov	r6, r2
        1601ec:	e1a05003 	mov	r5, r3
        1601f0:	e1a04000 	mov	r4, r0
        1601f4:	e59b8004 	ldr	r8, [fp, #4]
        1601f8:	e28f1f0f 	add	r1, pc, #60	; 0x3c
        1601fc:	e28f0f12 	add	r0, pc, #72	; 0x48
        160200:	eb69de61 	bl	1bd7b8c <$NewByName__FPCcT1>
        160204:	e1b07000 	movs	r7, r0
        160208:	03a000e9 	moveq	r0, #233	; 0xe9
        16020c:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        160210:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        160214:	e24dd008 	sub	sp, sp, #8	; 0x8
        160218:	e58d5004 	str	r5, [sp, #4]
        16021c:	e58d6000 	str	r6, [sp]
        160220:	e5dd0000 	ldrb	r0, [sp]
        160224:	e3100001 	tst	r0, #1	; 0x1
        160228:	e3e05e8a 	mvn	r5, #2208	; 0x8a0
        16022c:	e2455a02 	sub	r5, r5, #8192	; 0x2000
        160230:	1a000007 	bne	160254 <TPackageStorePartHandler::Install(PartId const &, SourceType, PartInfo *)+0x78>
        160234:	e1a00005 	mov	r0, r5
        160238:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        16023c:	54506163 	ldrplb	r6, [r0], -#355
        160240:	6b616765 	blvs	19b9fdc <ROM$$Size+0x129a390>
        160244:	53746f72 	cmnpl	r4, #456	; 0x1c8
        160248:	65000000 	strvs	r0, [r0]
        16024c:	5453746f 	ldrplb	r7, [r3], -#1135
        160250:	72650000 	rsbvc	r0, r5, #0	; 0x0
        160254:	e3a06000 	mov	r6, #0	; 0x0
        160258:	e28dd008 	add	sp, sp, #8	; 0x8
        16025c:	e3a03000 	mov	r3, #0	; 0x0
        160260:	e3a02000 	mov	r2, #0	; 0x0
        160264:	e3a01000 	mov	r1, #0	; 0x0
        160268:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        16026c:	e1a00004 	mov	r0, r4
        160270:	eb69d1f2 	bl	1bd4a40 <TPartHandler::$GetSourcePtr(void)>
        160274:	e1a01000 	mov	r1, r0
        160278:	e1a00007 	mov	r0, r7
        16027c:	e3a03000 	mov	r3, #0	; 0x0
        160280:	e5b8200c 	ldr	r2, [r8, #12]!
        160284:	eb6672ed 	bl	1afce40 <TStore::$Init(void *, unsigned long, unsigned long, int, unsigned long, void *)>
        160288:	e28dd00c 	add	sp, sp, #12	; 0xc
        16028c:	e1b08000 	movs	r8, r0
        160290:	1a00002c 	bne	160348 <TPackageStorePartHandler::Install(PartId const &, SourceType, PartInfo *)+0x16c>
        160294:	e52d606c 	str	r6, [sp, -#108]!
        160298:	e28d0008 	add	r0, sp, #8	; 0x8
        16029c:	eb6949b4 	bl	1bb2974 <$setjmp>
        1602a0:	e3300000 	teq	r0, #0	; 0x0
        1602a4:	1a000015 	bne	160300 <TPackageStorePartHandler::Install(PartId const &, SourceType, PartInfo *)+0x124>
        1602a8:	e1a0000d 	mov	r0, sp
        1602ac:	eb69ff72 	bl	1be007c <$AddExceptionHandler>
        1602b0:	e24dd008 	sub	sp, sp, #8	; 0x8
        1602b4:	e1a00007 	mov	r0, r7
        1602b8:	eb638385 	bl	1a410d4 <$MakeStoreObject(TStore *)>
        1602bc:	eb6987a2 	bl	1bc214c <$AllocateRefHandle(long)>
        1602c0:	e58d0000 	str	r0, [sp]
        1602c4:	e1a0500d 	mov	r5, sp
        1602c8:	e59f002c 	ldr	r0, [pc, #2c]	; 1602fc <TPackageStorePartHandler::Install(PartId const &, SourceType, PartInfo *)+0x120>
        1602cc:	e5900000 	ldr	r0, [r0]
        1602d0:	eb69879d 	bl	1bc214c <$AllocateRefHandle(long)>
        1602d4:	e58d0004 	str	r0, [sp, #4]
        1602d8:	e28d0004 	add	r0, sp, #4	; 0x4
        1602dc:	e1a01005 	mov	r1, r5
        1602e0:	eb698790 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        1602e4:	e59d0000 	ldr	r0, [sp]
        1602e8:	eb698bb3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1602ec:	e59d0004 	ldr	r0, [sp, #4]
        1602f0:	eb698bb1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1602f4:	e28dd008 	add	sp, sp, #8	; 0x8
        1602f8:	ea00000d 	b	160334 <TPackageStorePartHandler::Install(PartId const &, SourceType, PartInfo *)+0x158>
        1602fc:	0c1016e0 	ldceq	6, cr1, [r0], -#896
        160300:	e59d0060 	ldr	r0, [sp, #96]
        160304:	e59f101c 	ldr	r1, [pc, #1c]	; 160328 <TPackageStorePartHandler::Install(PartId const &, SourceType, PartInfo *)+0x14c>
        160308:	e5911000 	ldr	r1, [r1]
        16030c:	eb6a0ba0 	bl	1be3194 <$Subexception>
        160310:	e3300000 	teq	r0, #0	; 0x0
        160314:	0a000004 	beq	16032c <TPackageStorePartHandler::Install(PartId const &, SourceType, PartInfo *)+0x150>
        160318:	e1a00007 	mov	r0, r7
        16031c:	eb6659fd 	bl	1af6b18 <TStore::$Delete(void)>
        160320:	e1a08005 	mov	r8, r5
        160324:	ea000002 	b	160334 <TPackageStorePartHandler::Install(PartId const &, SourceType, PartInfo *)+0x158>
        160328:	003712a4 	eoreqs	r1, r7, r4, lsr #5
        16032c:	e1a0000d 	mov	r0, sp
        160330:	eb6a0787 	bl	1be2154 <$NextHandler>
        160334:	e1a0000d 	mov	r0, sp
        160338:	eb6a035e 	bl	1be10b8 <$ExitHandler>
        16033c:	e28dd06c 	add	sp, sp, #108	; 0x6c
        160340:	e3380000 	teq	r8, #0	; 0x0
        160344:	0a000001 	beq	160350 <TPackageStorePartHandler::Install(PartId const &, SourceType, PartInfo *)+0x174>
        160348:	e1a00008 	mov	r0, r8
        16034c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        160350:	e1a01007 	mov	r1, r7
        160354:	e1a00004 	mov	r0, r4
        160358:	eb69eea4 	bl	1bdbdf0 <TPartHandler::$SetRemoveObjPtr(long)>
        16035c:	e1a00006 	mov	r0, r6
        160360:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TPackageStorePartHandler::Remove(PartId const &, unsigned long, long)
 * Address: 001603e0
 */
TPackageStorePartHandler::Remove(PartId const &, unsigned long, long) {
    /*
        1603e0:	e1a0c00d 	mov	ip, sp
        1603e4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1603e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1603ec:	e24dd004 	sub	sp, sp, #4	; 0x4
        1603f0:	e1a08003 	mov	r8, r3
        1603f4:	e3a00002 	mov	r0, #2	; 0x2
        1603f8:	eb698753 	bl	1bc214c <$AllocateRefHandle(long)>
        1603fc:	e58d0000 	str	r0, [sp]
        160400:	e59f6098 	ldr	r6, [pc, #98]	; 1604a0 <TPackageStorePartHandler::Remove(PartId const &, unsigned long, long)+0xc0>
        160404:	e5960000 	ldr	r0, [r6]
        160408:	eb6993a7 	bl	1bc52ac <$Length(long)>
        16040c:	e1a05000 	mov	r5, r0
        160410:	e3a04000 	mov	r4, #0	; 0x0
        160414:	e3a0a000 	mov	sl, #0	; 0x0
        160418:	e3500000 	cmp	r0, #0	; 0x0
        16041c:	da000016 	ble	16047c <TPackageStorePartHandler::Remove(PartId const &, unsigned long, long)+0x9c>
        160420:	e59f907c 	ldr	r9, [pc, #7c]	; 1604a4 <TPackageStorePartHandler::Remove(PartId const &, unsigned long, long)+0xc4>
        160424:	e5960000 	ldr	r0, [r6]
        160428:	eb698747 	bl	1bc214c <$AllocateRefHandle(long)>
        16042c:	e1a07000 	mov	r7, r0
        160430:	e5900000 	ldr	r0, [r0]
        160434:	e1a01004 	mov	r1, r4
        160438:	eb698f85 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        16043c:	e59d1000 	ldr	r1, [sp]
        160440:	e5810000 	str	r0, [r1]
        160444:	e1a00007 	mov	r0, r7
        160448:	eb698b5b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        16044c:	e5990000 	ldr	r0, [r9]
        160450:	e5901000 	ldr	r1, [r0]
        160454:	e59d0000 	ldr	r0, [sp]
        160458:	e5900000 	ldr	r0, [r0]
        16045c:	eb698f7f 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        160460:	e1a07000 	mov	r7, r0
        160464:	e590007c 	ldr	r0, [r0, #124]
        160468:	e1300008 	teq	r0, r8
        16046c:	0a000002 	beq	16047c <TPackageStorePartHandler::Remove(PartId const &, unsigned long, long)+0x9c>
        160470:	e2844001 	add	r4, r4, #1	; 0x1
        160474:	e1540005 	cmp	r4, r5
        160478:	baffffe9 	blt	160424 <TPackageStorePartHandler::Remove(PartId const &, unsigned long, long)+0x44>
        16047c:	e24dd008 	sub	sp, sp, #8	; 0x8
        160480:	e1340005 	teq	r4, r5
        160484:	1a000007 	bne	1604a8 <TPackageStorePartHandler::Remove(PartId const &, unsigned long, long)+0xc8>
        160488:	e3a04e76 	mov	r4, #1888	; 0x760
        16048c:	e2444a03 	sub	r4, r4, #12288	; 0x3000
        160490:	e59d0008 	ldr	r0, [sp, #8]
        160494:	eb698b48 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        160498:	e1a00004 	mov	r0, r4
        16049c:	ea00001c 	b	160514 <TPackageStorePartHandler::Remove(PartId const &, unsigned long, long)+0x134>
        1604a0:	0c1016e0 	ldceq	6, cr1, [r0], -#896
        1604a4:	00684868 	rsbeq	r4, r8, r8, ror #16
        1604a8:	e3a03000 	mov	r3, #0	; 0x0
        1604ac:	e3a02000 	mov	r2, #0	; 0x0
        1604b0:	e92d000c 	stmdb	sp!, {r2, r3}
        1604b4:	e3a00002 	mov	r0, #2	; 0x2
        1604b8:	eb698723 	bl	1bc214c <$AllocateRefHandle(long)>
        1604bc:	e58d0008 	str	r0, [sp, #8]
        1604c0:	e28d5008 	add	r5, sp, #8	; 0x8
        1604c4:	e5960000 	ldr	r0, [r6]
        1604c8:	eb69871f 	bl	1bc214c <$AllocateRefHandle(long)>
        1604cc:	e58d000c 	str	r0, [sp, #12]
        1604d0:	e28d000c 	add	r0, sp, #12	; 0xc
        1604d4:	e1a01004 	mov	r1, r4
        1604d8:	e3a02001 	mov	r2, #1	; 0x1
        1604dc:	e1a03005 	mov	r3, r5
        1604e0:	eb69871a 	bl	1bc2150 <$ArrayMunger__FRC6RefVarlT2T1N22>
        1604e4:	e5bd0008 	ldr	r0, [sp, #8]!
        1604e8:	eb698b33 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1604ec:	e59d0004 	ldr	r0, [sp, #4]
        1604f0:	eb698b31 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1604f4:	e28d0008 	add	r0, sp, #8	; 0x8
        1604f8:	eb6382e8 	bl	1a410a0 <$KillStoreObject(RefVar const &)>
        1604fc:	e1b00007 	movs	r0, r7
        160500:	13a01001 	movne	r1, #1	; 0x1
        160504:	1b63723d 	blne	1a3ce00 <TStoreWrapper::$__dt(void)>
        160508:	e59d0008 	ldr	r0, [sp, #8]
        16050c:	eb698b2a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        160510:	e1a0000a 	mov	r0, sl
        160514:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

