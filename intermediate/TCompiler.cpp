#include "include/TCompiler.h"

/**
 * Symbol: TCompiler::__ct(TInputStream *, int)
 * Address: 002bf18c
 */
TCompiler::TCompiler(TInputStream *, int) {
    /*
        2bf18c:	e1a0c00d 	mov	ip, sp
        2bf190:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2bf194:	e24cb004 	sub	fp, ip, #4	; 0x4
        2bf198:	e1b04000 	movs	r4, r0
        2bf19c:	e1a06001 	mov	r6, r1
        2bf1a0:	e1a05002 	mov	r5, r2
        2bf1a4:	1a000003 	bne	2bf1b8 <TCompiler::__ct(TInputStream *, int)+0x2c>
        2bf1a8:	e3a00034 	mov	r0, #52	; 0x34
        2bf1ac:	eb643d61 	bl	1bce738 <$__nw(unsigned int)>
        2bf1b0:	e1b04000 	movs	r4, r0
        2bf1b4:	0a000071 	beq	2bf380 <TCompiler::__ct(TInputStream *, int)+0x1f4>
        2bf1b8:	e3a07000 	mov	r7, #0	; 0x0
        2bf1bc:	e5847000 	str	r7, [r4]
        2bf1c0:	e3a01040 	mov	r1, #64	; 0x40
        2bf1c4:	e584100c 	str	r1, [r4, #12]	; fField12
        2bf1c8:	e5846008 	str	r6, [r4, #8]	; fField8
        2bf1cc:	e5847004 	str	r7, [r4, #4]	; fField4
        2bf1d0:	e59f01b0 	ldr	r0, [pc, #1b0]	; 2bf388 <TCompiler::__ct(TInputStream *, int)+0x1fc>
        2bf1d4:	eb640bd7 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        2bf1d8:	eb640bdb 	bl	1bc214c <$AllocateRefHandle(long)>
        2bf1dc:	e5840010 	str	r0, [r4, #16]
        2bf1e0:	e5a07004 	str	r7, [r0, #4]!	; fField4
        2bf1e4:	e3a00080 	mov	r0, #128	; 0x80
        2bf1e8:	eb643d52 	bl	1bce738 <$__nw(unsigned int)>
        2bf1ec:	e2844018 	add	r4, r4, #24	; 0x18
        2bf1f0:	e8840021 	stmia	r4, {r0, r5}
        2bf1f4:	e584700c 	str	r7, [r4, #12]	; fField12
        2bf1f8:	e3a00002 	mov	r0, #2	; 0x2
        2bf1fc:	e5847010 	str	r7, [r4, #16]
        2bf200:	e2444018 	sub	r4, r4, #24	; 0x18
        2bf204:	eb640bd0 	bl	1bc214c <$AllocateRefHandle(long)>
        2bf208:	e5840030 	str	r0, [r4, #48]	; fField48
        2bf20c:	e5a07004 	str	r7, [r0, #4]!	; fField4
        2bf210:	e2840010 	add	r0, r4, #16	; 0x10
        2bf214:	e1a05000 	mov	r5, r0
        2bf218:	e5900000 	ldr	r0, [r0]
        2bf21c:	e5900000 	ldr	r0, [r0]
        2bf220:	eb641823 	bl	1bc52b4 <$LockRef(long)>
        2bf224:	e5950000 	ldr	r0, [r5]
        2bf228:	e5900000 	ldr	r0, [r0]
        2bf22c:	eb641c51 	bl	1bc6378 <$Slots(long)>
        2bf230:	e5840014 	str	r0, [r4, #20]	; fField20
        2bf234:	e59f7150 	ldr	r7, [pc, #150]	; 2bf38c <TCompiler::__ct(TInputStream *, int)+0x200>
        2bf238:	e59700dc 	ldr	r0, [r7, #220]
        2bf23c:	e3300000 	teq	r0, #0	; 0x0
        2bf240:	1a00004e 	bne	2bf380 <TCompiler::__ct(TInputStream *, int)+0x1f4>
        2bf244:	e3a00001 	mov	r0, #1	; 0x1
        2bf248:	e58700dc 	str	r0, [r7, #220]
        2bf24c:	e59f013c 	ldr	r0, [pc, #13c]	; 2bf390 <TCompiler::__ct(TInputStream *, int)+0x204>
        2bf250:	eb640bb5 	bl	1bc212c <$AddGCRoot(long &)>
        2bf254:	e59f0138 	ldr	r0, [pc, #138]	; 2bf394 <TCompiler::__ct(TInputStream *, int)+0x208>
        2bf258:	eb640bb3 	bl	1bc212c <$AddGCRoot(long &)>
        2bf25c:	e59f0134 	ldr	r0, [pc, #134]	; 2bf398 <TCompiler::__ct(TInputStream *, int)+0x20c>
        2bf260:	eb640bb1 	bl	1bc212c <$AddGCRoot(long &)>
        2bf264:	e59f8130 	ldr	r8, [pc, #130]	; 2bf39c <TCompiler::__ct(TInputStream *, int)+0x210>
        2bf268:	e5980000 	ldr	r0, [r8]
        2bf26c:	e59f112c 	ldr	r1, [pc, #12c]	; 2bf3a0 <TCompiler::__ct(TInputStream *, int)+0x214>	; fField12
        2bf270:	e5911000 	ldr	r1, [r1]
        2bf274:	e5911000 	ldr	r1, [r1]
        2bf278:	eb6413f8 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2bf27c:	e58700d8 	str	r0, [r7, #216]
        2bf280:	e3300002 	teq	r0, #2	; 0x2
        2bf284:	1a000018 	bne	2bf2ec <TCompiler::__ct(TInputStream *, int)+0x160>
        2bf288:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2bf28c:	eb640bab 	bl	1bc2140 <$AllocateFrame(void)>
        2bf290:	e58700d8 	str	r0, [r7, #216]
        2bf294:	eb640bac 	bl	1bc214c <$AllocateRefHandle(long)>
        2bf298:	e58d0000 	str	r0, [sp]
        2bf29c:	e1a0600d 	mov	r6, sp
        2bf2a0:	e28f0f3f 	add	r0, pc, #252	; 0xfc
        2bf2a4:	eb6417f5 	bl	1bc5280 <$Intern(char *)>
        2bf2a8:	eb640ba7 	bl	1bc214c <$AllocateRefHandle(long)>
        2bf2ac:	e58d0004 	str	r0, [sp, #4]	; fField4
        2bf2b0:	e28d5004 	add	r5, sp, #4	; 0x4
        2bf2b4:	e5980000 	ldr	r0, [r8]
        2bf2b8:	eb640ba3 	bl	1bc214c <$AllocateRefHandle(long)>
        2bf2bc:	e58d0008 	str	r0, [sp, #8]	; fField8
        2bf2c0:	e28d0008 	add	r0, sp, #8	; 0x8
        2bf2c4:	e1a01005 	mov	r1, r5
        2bf2c8:	e1a02006 	mov	r2, r6
        2bf2cc:	eb641c25 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2bf2d0:	e59d0000 	ldr	r0, [sp]
        2bf2d4:	eb640fb8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2bf2d8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2bf2dc:	eb640fb6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2bf2e0:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2bf2e4:	eb640fb4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2bf2e8:	e28dd00c 	add	sp, sp, #12	; 0xc
        2bf2ec:	e59f00c4 	ldr	r0, [pc, #c4]	; 2bf3b8 <TCompiler::__ct(TInputStream *, int)+0x22c>
        2bf2f0:	eb640b8d 	bl	1bc212c <$AddGCRoot(long &)>
        2bf2f4:	eb640b91 	bl	1bc2140 <$AllocateFrame(void)>
        2bf2f8:	e5870004 	str	r0, [r7, #4]	; fField4
        2bf2fc:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2bf300:	e3a08000 	mov	r8, #0	; 0x0
        2bf304:	e59700d0 	ldr	r0, [r7, #208]
        2bf308:	e3500000 	cmp	r0, #0	; 0x0
        2bf30c:	da00001a 	ble	2bf37c <TCompiler::__ct(TInputStream *, int)+0x1f0>
        2bf310:	e59f90a4 	ldr	r9, [pc, #a4]	; 2bf3bc <TCompiler::__ct(TInputStream *, int)+0x230>
        2bf314:	e1a00108 	mov	r0, r8, lsl #2
        2bf318:	eb640b8b 	bl	1bc214c <$AllocateRefHandle(long)>
        2bf31c:	e58d0000 	str	r0, [sp]
        2bf320:	e1a0600d 	mov	r6, sp
        2bf324:	e7990188 	ldr	r0, [r9, r8, lsl #3]
        2bf328:	eb6417d4 	bl	1bc5280 <$Intern(char *)>
        2bf32c:	eb640b86 	bl	1bc214c <$AllocateRefHandle(long)>
        2bf330:	e58d0004 	str	r0, [sp, #4]	; fField4
        2bf334:	e28d5004 	add	r5, sp, #4	; 0x4
        2bf338:	e5970004 	ldr	r0, [r7, #4]	; fField4
        2bf33c:	eb640b82 	bl	1bc214c <$AllocateRefHandle(long)>
        2bf340:	e58d0008 	str	r0, [sp, #8]	; fField8
        2bf344:	e28d0008 	add	r0, sp, #8	; 0x8
        2bf348:	e1a01005 	mov	r1, r5
        2bf34c:	e1a02006 	mov	r2, r6
        2bf350:	eb641c04 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2bf354:	e59d0000 	ldr	r0, [sp]
        2bf358:	eb640f97 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2bf35c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2bf360:	eb640f95 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2bf364:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2bf368:	eb640f93 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2bf36c:	e2888001 	add	r8, r8, #1	; 0x1
        2bf370:	e59700d0 	ldr	r0, [r7, #208]
        2bf374:	e1580000 	cmp	r8, r0
        2bf378:	baffffe5 	blt	2bf314 <TCompiler::__ct(TInputStream *, int)+0x188>
        2bf37c:	e28dd00c 	add	sp, sp, #12	; 0xc
        2bf380:	e1a00004 	mov	r0, r4
        2bf384:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2bf388:	00685260 	rsbeq	r5, r8, r0, ror #4
        2bf38c:	0c1051ec 	ldfeqs	f5, [r0], -#944
        2bf390:	0c105590 	ldceq	5, cr5, [r0], -#576
        2bf394:	0c105594 	ldceq	5, cr5, [r0], -#592
        2bf398:	0c1052c4 	lfmeq	f5, 4, [r0], -#784
        2bf39c:	0c10180c 	ldceq	8, cr1, [r0], -#48	; fField48
        2bf3a0:	006825e0 	rsbeq	r2, r8, r0, ror #11
        2bf3a4:	636f6e73 	cmnvs	pc, #1840	; 0x730
        2bf3a8:	74616e74 	strvcbt	r6, [r1], -#3700
        2bf3ac:	66756e63 	ldrvsbt	r6, [r5], -r3, ror #28	; fField28
        2bf3b0:	74696f6e 	strvcbt	r6, [r9], -#3950
        2bf3b4:	73000000 	tstvc	r0, #0	; 0x0
        2bf3b8:	0c1051f0 	ldfeqs	f5, [r0], -#960
        2bf3bc:	0c1051f4 	ldfeqs	f5, [r0], -#976
    */
}

/**
 * Symbol: TCompiler::Warning(char *)
 * Address: 002bf510
 */
TCompiler::Warning(char *) {
    /*
        2bf510:	e1a0c00d 	mov	ip, sp
        2bf514:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2bf518:	e24cb004 	sub	fp, ip, #4	; 0x4
        2bf51c:	e1a03001 	mov	r3, r1
        2bf520:	e92d0008 	stmdb	sp!, {r3}
        2bf524:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2bf528:	e5904004 	ldr	r4, [r0, #4]	; fField4
        2bf52c:	eb5e02a1 	bl	1a3ffb8 <TInputStream::$GetFilename(void)>
        2bf530:	e1a02000 	mov	r2, r0
        2bf534:	e59f0010 	ldr	r0, [pc, #10]	; 2bf54c <TCompiler::Warning(char *)+0x3c>
        2bf538:	e5900000 	ldr	r0, [r0]
        2bf53c:	e28f1f03 	add	r1, pc, #12	; 0xc
        2bf540:	e1a03004 	mov	r3, r4
        2bf544:	eb032a5b 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        2bf548:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2bf54c:	0c101820 	ldceq	8, cr1, [r0], -#128
        2bf550:	46696c65 	strmibt	r6, [r9], -r5, ror #24	; fField24
        2bf554:	20222573 	eorcs	r2, r2, r3, ror r5
        2bf558:	223b204c 	eorcss	r2, fp, #76	; 0x4c
        2bf55c:	696e6520 	stmvsdb	lr!, {r5, r8, sl, sp, lr}^
        2bf560:	25642023 	strcsb	r2, [r4, -#35]!
        2bf564:	23232057 	teqcs	r3, #87	; 0x57
        2bf568:	61726e69 	cmnvs	r2, r9, ror #28
        2bf56c:	6e673a20 	cdpvs	10, 6, cr3, cr7, cr0, {1}
        2bf570:	25730d00 	ldrcsb	r0, [r3, -#3328]!	; fField3328
    */
}

/**
 * Symbol: TCompiler::Emit(Opcode, long)
 * Address: 002bf574
 */
TCompiler::Emit(Opcode, long) {
    /*
        2bf574:	e5900000 	ldr	r0, [r0]
        2bf578:	ea5e5102 	b	1a53988 <TFunctionState::$Emit(Opcode, long)>
    */
}

/**
 * Symbol: TCompiler::EmitPush(RefVar const &)
 * Address: 002bf57c
 */
TCompiler::EmitPush(RefVar const &) {
    /*
        2bf57c:	e1a0c00d 	mov	ip, sp
        2bf580:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2bf584:	e24cb004 	sub	fp, ip, #4	; 0x4
        2bf588:	e1a04000 	mov	r4, r0
        2bf58c:	e5910000 	ldr	r0, [r1]
        2bf590:	e5900000 	ldr	r0, [r0]
        2bf594:	e2002003 	and	r2, r0, #3	; 0x3
        2bf598:	e3320003 	teq	r2, #3	; 0x3
        2bf59c:	1a000003 	bne	2bf5b0 <TCompiler::EmitPush(RefVar const &)+0x34>
        2bf5a0:	e3a03a01 	mov	r3, #4096	; 0x1000
        2bf5a4:	e2433001 	sub	r3, r3, #1	; 0x1
        2bf5a8:	e1530120 	cmp	r3, r0, lsr #2
        2bf5ac:	2a000003 	bcs	2bf5c0 <TCompiler::EmitPush(RefVar const &)+0x44>
        2bf5b0:	e3100001 	tst	r0, #1	; 0x1
        2bf5b4:	01a03800 	moveq	r3, r0, lsl #16
        2bf5b8:	01300843 	teqeq	r0, r3, asr #16
        2bf5bc:	1a000003 	bne	2bf5d0 <TCompiler::EmitPush(RefVar const &)+0x54>
        2bf5c0:	e1a02000 	mov	r2, r0
        2bf5c4:	e1a00004 	mov	r0, r4
        2bf5c8:	e3a01004 	mov	r1, #4	; 0x4
        2bf5cc:	ea000004 	b	2bf5e4 <TCompiler::EmitPush(RefVar const &)+0x68>
        2bf5d0:	e5940000 	ldr	r0, [r4]
        2bf5d4:	eb5e5943 	bl	1a55ae8 <TFunctionState::$LitOffset(RefVar const &)>
        2bf5d8:	e1a02000 	mov	r2, r0
        2bf5dc:	e1a00004 	mov	r0, r4
        2bf5e0:	e3a01003 	mov	r1, #3	; 0x3
        2bf5e4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        2bf5e8:	ea5e50e7 	b	1a5398c <TCompiler::$Emit(Opcode, long)>
    */
}

/**
 * Symbol: TCompiler::EmitPop(void)
 * Address: 002bf5ec
 */
TCompiler::EmitPop(void) {
    /*
        2bf5ec:	e3a02000 	mov	r2, #0	; 0x0
        2bf5f0:	e3a01000 	mov	r1, #0	; 0x0
        2bf5f4:	ea5e50e4 	b	1a5398c <TCompiler::$Emit(Opcode, long)>
    */
}

/**
 * Symbol: TCompiler::EmitVarSet(RefVar const &)
 * Address: 002bf5f8
 */
TCompiler::EmitVarSet(RefVar const &) {
    /*
        2bf5f8:	e1a0c00d 	mov	ip, sp
        2bf5fc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2bf600:	e24cb004 	sub	fp, ip, #4	; 0x4
        2bf604:	e1a04000 	mov	r4, r0
        2bf608:	e1a05001 	mov	r5, r1
        2bf60c:	e5900000 	ldr	r0, [r0]
        2bf610:	eb5e592e 	bl	1a55ad0 <TFunctionState::$IsLocalVariable(RefVar const &)>
        2bf614:	e3300000 	teq	r0, #0	; 0x0
        2bf618:	0a000007 	beq	2bf63c <TCompiler::EmitVarSet(RefVar const &)+0x44>
        2bf61c:	e1a01005 	mov	r1, r5
        2bf620:	e5940000 	ldr	r0, [r4]
        2bf624:	eb5e658f 	bl	1a58c68 <TFunctionState::$VariableIndex(RefVar const &)>
        2bf628:	e3700001 	cmn	r0, #1	; 0x1
        2bf62c:	11a02000 	movne	r2, r0
        2bf630:	11a00004 	movne	r0, r4
        2bf634:	13a01014 	movne	r1, #20	; 0x14
        2bf638:	1a000005 	bne	2bf654 <TCompiler::EmitVarSet(RefVar const &)+0x5c>
        2bf63c:	e1a01005 	mov	r1, r5
        2bf640:	e5940000 	ldr	r0, [r4]
        2bf644:	eb5e5927 	bl	1a55ae8 <TFunctionState::$LitOffset(RefVar const &)>
        2bf648:	e1a02000 	mov	r2, r0
        2bf64c:	e1a00004 	mov	r0, r4
        2bf650:	e3a01015 	mov	r1, #21	; 0x15
        2bf654:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        2bf658:	ea5e50cb 	b	1a5398c <TCompiler::$Emit(Opcode, long)>
    */
}

/**
 * Symbol: TCompiler::EmitVarGet(RefVar const &)
 * Address: 002bf65c
 */
TCompiler::EmitVarGet(RefVar const &) {
    /*
        2bf65c:	e1a0c00d 	mov	ip, sp
        2bf660:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2bf664:	e24cb004 	sub	fp, ip, #4	; 0x4
        2bf668:	e1a04000 	mov	r4, r0
        2bf66c:	e1a05001 	mov	r5, r1
        2bf670:	e5910000 	ldr	r0, [r1]
        2bf674:	e5900000 	ldr	r0, [r0]
        2bf678:	e59f106c 	ldr	r1, [pc, #6c]	; 2bf6ec <TCompiler::EmitVarGet(RefVar const &)+0x90>
        2bf67c:	e5911000 	ldr	r1, [r1]
        2bf680:	e5911000 	ldr	r1, [r1]
        2bf684:	eb6412e9 	bl	1bc4230 <$EQRef__FlT1>
        2bf688:	e3300000 	teq	r0, #0	; 0x0
        2bf68c:	11a00004 	movne	r0, r4
        2bf690:	128f1f16 	addne	r1, pc, #88	; 0x58
        2bf694:	1b5e697b 	blne	1a59c88 <TCompiler::$Warning(char *)>
        2bf698:	e1a01005 	mov	r1, r5
        2bf69c:	e5940000 	ldr	r0, [r4]
        2bf6a0:	eb5e590a 	bl	1a55ad0 <TFunctionState::$IsLocalVariable(RefVar const &)>
        2bf6a4:	e3300000 	teq	r0, #0	; 0x0
        2bf6a8:	0a000007 	beq	2bf6cc <TCompiler::EmitVarGet(RefVar const &)+0x70>
        2bf6ac:	e1a01005 	mov	r1, r5
        2bf6b0:	e5940000 	ldr	r0, [r4]
        2bf6b4:	eb5e656b 	bl	1a58c68 <TFunctionState::$VariableIndex(RefVar const &)>
        2bf6b8:	e3700001 	cmn	r0, #1	; 0x1
        2bf6bc:	11a02000 	movne	r2, r0
        2bf6c0:	11a00004 	movne	r0, r4
        2bf6c4:	13a0100f 	movne	r1, #15	; 0xf
        2bf6c8:	1a000005 	bne	2bf6e4 <TCompiler::EmitVarGet(RefVar const &)+0x88>
        2bf6cc:	e1a01005 	mov	r1, r5
        2bf6d0:	e5940000 	ldr	r0, [r4]
        2bf6d4:	eb5e5903 	bl	1a55ae8 <TFunctionState::$LitOffset(RefVar const &)>
        2bf6d8:	e1a02000 	mov	r2, r0
        2bf6dc:	e1a00004 	mov	r0, r4
        2bf6e0:	e3a0100e 	mov	r1, #14	; 0xe
        2bf6e4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        2bf6e8:	ea5e50a7 	b	1a5398c <TCompiler::$Emit(Opcode, long)>
        2bf6ec:	00685388 	rsbeq	r5, r8, r8, lsl #7
        2bf6f0:	52656665 	rsbpl	r6, r5, #105906176	; 0x6500000
        2bf6f4:	72656e63 	rsbvc	r6, r5, #1584	; 0x630
        2bf6f8:	65732074 	ldrvsb	r2, [r3, -#116]!	; fField116
        2bf6fc:	6f207468 	swivs	0x00207468
        2bf700:	65207661 	strvs	r7, [r0, -#1633]!
        2bf704:	72696162 	rsbvc	r6, r9, #-2147483624	; 0x80000018
        2bf708:	6c652022 	stcvsl	0, cr2, [r5], -#136
        2bf70c:	5f706172 	swipl	0x00706172
        2bf710:	656e7422 	strvsb	r7, [lr, -#1058]!
        2bf714:	20686176 	rsbcs	r6, r8, r6, ror r1
        2bf718:	6520756e 	strvs	r7, [r0, -#1390]!
        2bf71c:	64656669 	strvsbt	r6, [r5], -#1641
        2bf720:	6e656420 	cdpvs	4, 6, cr6, cr5, cr0, {1}
        2bf724:	62656861 	rsbvs	r6, r5, #6356992	; 0x610000
        2bf728:	76696f72 	undefined
        2bf72c:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: TCompiler::EmitVarIncr(RefVar const &)
 * Address: 002bf730
 */
TCompiler::EmitVarIncr(RefVar const &) {
    /*
        2bf730:	e1a0c00d 	mov	ip, sp
        2bf734:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2bf738:	e24cb004 	sub	fp, ip, #4	; 0x4
        2bf73c:	e1a04000 	mov	r4, r0
        2bf740:	e1a05001 	mov	r5, r1
        2bf744:	e5900000 	ldr	r0, [r0]
        2bf748:	eb5e58e0 	bl	1a55ad0 <TFunctionState::$IsLocalVariable(RefVar const &)>
        2bf74c:	e3300000 	teq	r0, #0	; 0x0
        2bf750:	0a000009 	beq	2bf77c <TCompiler::EmitVarIncr(RefVar const &)+0x4c>
        2bf754:	e1a01005 	mov	r1, r5
        2bf758:	e5940000 	ldr	r0, [r4]
        2bf75c:	eb5e6541 	bl	1a58c68 <TFunctionState::$VariableIndex(RefVar const &)>
        2bf760:	e3700001 	cmn	r0, #1	; 0x1
        2bf764:	0a000004 	beq	2bf77c <TCompiler::EmitVarIncr(RefVar const &)+0x4c>
        2bf768:	e1a02000 	mov	r2, r0
        2bf76c:	e1a00004 	mov	r0, r4
        2bf770:	e3a01016 	mov	r1, #22	; 0x16
        2bf774:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        2bf778:	ea5e5083 	b	1a5398c <TCompiler::$Emit(Opcode, long)>
        2bf77c:	e1a00004 	mov	r0, r4
        2bf780:	e28f1f01 	add	r1, pc, #4	; 0x4
        2bf784:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        2bf788:	ea5e6117 	b	1a57bec <TCompiler::$SyntaxError(char *)>
        2bf78c:	63616e27 	cmnvs	r1, #624	; 0x270
        2bf790:	7420636c 	strvct	r6, [r0], -#876
        2bf794:	6f736520 	swivs	0x00736520
        2bf798:	6f766572 	swivs	0x00766572
        2bf79c:	20612066 	rsbcs	r2, r1, r6, rrx
        2bf7a0:	6f722d6c 	swivs	0x00722d6c
        2bf7a4:	6f6f7020 	swivs	0x006f7020
        2bf7a8:	696e6465 	stmvsdb	lr!, {r0, r2, r5, r6, sl, sp, lr}^
        2bf7ac:	78207661 	stmvcda	r0!, {r0, r5, r6, r9, sl, ip, sp, lr}
        2bf7b0:	72696162 	rsbvc	r6, r9, #-2147483624	; 0x80000018
        2bf7b4:	6c650000 	stcvsl	0, cr0, [r5]
    */
}

/**
 * Symbol: TCompiler::EmitFuncall(RefVar const &, unsigned long)
 * Address: 002bf7b8
 */
TCompiler::EmitFuncall(RefVar const &, unsigned long) {
    /*
        2bf7b8:	e1a0c00d 	mov	ip, sp
        2bf7bc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2bf7c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2bf7c4:	e1a04000 	mov	r4, r0
        2bf7c8:	e1a06001 	mov	r6, r1
        2bf7cc:	e1a05002 	mov	r5, r2
        2bf7d0:	e1a01002 	mov	r1, r2
        2bf7d4:	e1a00006 	mov	r0, r6
        2bf7d8:	eb5e549c 	bl	1a54a50 <$FreqFuncIndex(RefVar const &, long)>
        2bf7dc:	e3700001 	cmn	r0, #1	; 0x1
        2bf7e0:	11a02000 	movne	r2, r0
        2bf7e4:	11a00004 	movne	r0, r4
        2bf7e8:	13a01018 	movne	r1, #24	; 0x18
        2bf7ec:	1a000005 	bne	2bf808 <TCompiler::EmitFuncall(RefVar const &, unsigned long)+0x50>
        2bf7f0:	e1a01006 	mov	r1, r6
        2bf7f4:	e1a00004 	mov	r0, r4
        2bf7f8:	eb5e4c5c 	bl	1a52970 <TCompiler::$EmitPush(RefVar const &)>
        2bf7fc:	e1a02005 	mov	r2, r5
        2bf800:	e1a00004 	mov	r0, r4
        2bf804:	e3a01005 	mov	r1, #5	; 0x5
        2bf808:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        2bf80c:	ea5e505e 	b	1a5398c <TCompiler::$Emit(Opcode, long)>
    */
}

/**
 * Symbol: TCompiler::EmitBranch(unsigned long)
 * Address: 002bf810
 */
TCompiler::EmitBranch(unsigned long) {
    /*
        2bf810:	e1a02001 	mov	r2, r1
        2bf814:	e3a0100b 	mov	r1, #11	; 0xb
        2bf818:	ea5e505b 	b	1a5398c <TCompiler::$Emit(Opcode, long)>
    */
}

/**
 * Symbol: TCompiler::EmitPlaceholder(void)
 * Address: 002bf81c
 */
TCompiler::EmitPlaceholder(void) {
    /*
        2bf81c:	e5900000 	ldr	r0, [r0]
        2bf820:	ea5e4c4f 	b	1a52964 <TFunctionState::$EmitPlaceholder(void)>
    */
}

/**
 * Symbol: TCompiler::EmitReturn(void)
 * Address: 002bf8a8
 */
TCompiler::EmitReturn(void) {
    /*
        2bf8a8:	e3a02002 	mov	r2, #2	; 0x2
        2bf8ac:	e3a01000 	mov	r1, #0	; 0x0
        2bf8b0:	ea5e5035 	b	1a5398c <TCompiler::$Emit(Opcode, long)>
    */
}

/**
 * Symbol: TCompiler::CurPC(void)
 * Address: 002bf8b4
 */
TCompiler::CurPC(void) {
    /*
        2bf8b4:	e5900000 	ldr	r0, [r0]
        2bf8b8:	ea5e4c19 	b	1a52924 <TFunctionState::$CurPC(void)>
    */
}

/**
 * Symbol: TCompiler::Backpatch(unsigned long, Opcode, long)
 * Address: 002bf8bc
 */
TCompiler::Backpatch(unsigned long, Opcode, long) {
    /*
        2bf8bc:	e5900000 	ldr	r0, [r0]
        2bf8c0:	ea5e4800 	b	1a518c8 <TFunctionState::$Backpatch(long, Opcode, long)>
    */
}

/**
 * Symbol: TCompiler::AddLocals(RefVar const &)
 * Address: 002bf8c4
 */
TCompiler::AddLocals(RefVar const &) {
    /*
        2bf8c4:	e5900000 	ldr	r0, [r0]
        2bf8c8:	ea5e47f4 	b	1a518a0 <TFunctionState::$AddLocals(RefVar const &)>
    */
}

/**
 * Symbol: TCompiler::NewFunctionState(RefVar const &, TFunctionState *, int *)
 * Address: 002bf8cc
 */
TCompiler::NewFunctionState(RefVar const &, TFunctionState *, int *) {
    /*
        2bf8cc:	e1a0c00d 	mov	ip, sp
        2bf8d0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2bf8d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2bf8d8:	e1a04000 	mov	r4, r0
        2bf8dc:	e92d0008 	stmdb	sp!, {r3}
        2bf8e0:	e1a03002 	mov	r3, r2
        2bf8e4:	e1a02001 	mov	r2, r1
        2bf8e8:	e1a01000 	mov	r1, r0
        2bf8ec:	e3a00000 	mov	r0, #0	; 0x0
        2bf8f0:	eb5e68ec 	bl	1a59ca8 <TFunctionState::$__ct(TCompiler *, RefVar const &, TFunctionState *, int *)>
        2bf8f4:	e28dd004 	add	sp, sp, #4	; 0x4
        2bf8f8:	e1b05000 	movs	r5, r0
        2bf8fc:	1a000005 	bne	2bf918 <TCompiler::NewFunctionState(RefVar const &, TFunctionState *, int *)+0x4c>
        2bf900:	e59f0024 	ldr	r0, [pc, #24]	; 2bf92c <TCompiler::NewFunctionState(RefVar const &, TFunctionState *, int *)+0x60>	; fField24
        2bf904:	e5900000 	ldr	r0, [r0]
        2bf908:	e3a02000 	mov	r2, #0	; 0x0
        2bf90c:	e3a010e9 	mov	r1, #233	; 0xe9
        2bf910:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        2bf914:	eb648e20 	bl	1be319c <$Throw>
        2bf918:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2bf91c:	e5850058 	str	r0, [r5, #88]
        2bf920:	e5845004 	str	r5, [r4, #4]	; fField4
        2bf924:	e5845000 	str	r5, [r4]
        2bf928:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2bf92c:	00371318 	eoreqs	r1, r7, r8, lsl r3
    */
}

/**
 * Symbol: TCompiler::EndFunction(void)
 * Address: 002bf930
 */
TCompiler::EndFunction(void) {
    /*
        2bf930:	e1a0c00d 	mov	ip, sp
        2bf934:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2bf938:	e24cb004 	sub	fp, ip, #4	; 0x4
        2bf93c:	e1a04000 	mov	r4, r0
        2bf940:	eb5e4c0b 	bl	1a52974 <TCompiler::$EmitReturn(void)>
        2bf944:	e5940000 	ldr	r0, [r4]
        2bf948:	eb5e586a 	bl	1a55af8 <TFunctionState::$MakeCodeBlock(void)>
        2bf94c:	eb6409fe 	bl	1bc214c <$AllocateRefHandle(long)>
        2bf950:	e5941000 	ldr	r1, [r4]
        2bf954:	e5911054 	ldr	r1, [r1, #84]
        2bf958:	e5841000 	str	r1, [r4]
        2bf95c:	e5904000 	ldr	r4, [r0]
        2bf960:	eb640e15 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2bf964:	e1a00004 	mov	r0, r4
        2bf968:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TCompiler::BeginLoop(void)
 * Address: 002bf96c
 */
TCompiler::BeginLoop(void) {
    /*
        2bf96c:	e5900000 	ldr	r0, [r0]
        2bf970:	ea5e47d6 	b	1a518d0 <TFunctionState::$BeginLoop(void)>
    */
}

/**
 * Symbol: TCompiler::AddLoopExit(void)
 * Address: 002bf974
 */
TCompiler::AddLoopExit(void) {
    /*
        2bf974:	e5900000 	ldr	r0, [r0]
        2bf978:	ea5e47ca 	b	1a518a8 <TFunctionState::$AddLoopExit(void)>
    */
}

/**
 * Symbol: TCompiler::EndLoop(void)
 * Address: 002bf97c
 */
TCompiler::EndLoop(void) {
    /*
        2bf97c:	e5900000 	ldr	r0, [r0]
        2bf980:	ea5e5003 	b	1a53994 <TFunctionState::$EndLoop(void)>
    */
}

/**
 * Symbol: TCompiler::IsConstantExpr(RefVar const &)
 * Address: 002bf9fc
 */
TCompiler::IsConstantExpr(RefVar const &) {
    /*
        2bf9fc:	e1a0c00d 	mov	ip, sp
        2bfa00:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2bfa04:	e24cb004 	sub	fp, ip, #4	; 0x4
        2bfa08:	e1a05000 	mov	r5, r0
        2bfa0c:	e1a04001 	mov	r4, r1
        2bfa10:	e24dd004 	sub	sp, sp, #4	; 0x4
        2bfa14:	e5910000 	ldr	r0, [r1]
        2bfa18:	e5900000 	ldr	r0, [r0]
        2bfa1c:	e3a07000 	mov	r7, #0	; 0x0
        2bfa20:	e1a01007 	mov	r1, r7
        2bfa24:	eb64120a 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2bfa28:	e3100003 	tst	r0, #3	; 0x3
        2bfa2c:	01a00140 	moveq	r0, r0, asr #2
        2bfa30:	0a000000 	beq	2bfa38 <TCompiler::IsConstantExpr(RefVar const &)+0x3c>
        2bfa34:	eb6409b8 	bl	1bc211c <$_RINTError(long)>
        2bfa38:	e1a06000 	mov	r6, r0
        2bfa3c:	e5940000 	ldr	r0, [r4]
        2bfa40:	e5900000 	ldr	r0, [r0]
        2bfa44:	eb641618 	bl	1bc52ac <$Length(long)>
        2bfa48:	e2400001 	sub	r0, r0, #1	; 0x1
        2bfa4c:	e3500001 	cmp	r0, #1	; 0x1
        2bfa50:	3a000004 	bcc	2bfa68 <TCompiler::IsConstantExpr(RefVar const &)+0x6c>
        2bfa54:	e5940000 	ldr	r0, [r4]
        2bfa58:	e5900000 	ldr	r0, [r0]
        2bfa5c:	e3a01001 	mov	r1, #1	; 0x1
        2bfa60:	eb6411fb 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2bfa64:	ea000000 	b	2bfa6c <TCompiler::IsConstantExpr(RefVar const &)+0x70>
        2bfa68:	e3a00002 	mov	r0, #2	; 0x2
        2bfa6c:	eb6409b6 	bl	1bc214c <$AllocateRefHandle(long)>
        2bfa70:	e246cc01 	sub	ip, r6, #256	; 0x100
        2bfa74:	e33c0002 	teq	ip, #2	; 0x2
        2bfa78:	e58d0000 	str	r0, [sp]
        2bfa7c:	03a04001 	moveq	r4, #1	; 0x1
        2bfa80:	0a00000f 	beq	2bfac4 <TCompiler::IsConstantExpr(RefVar const &)+0xc8>
        2bfa84:	e246cc01 	sub	ip, r6, #256	; 0x100
        2bfa88:	e33c0003 	teq	ip, #3	; 0x3
        2bfa8c:	1a000005 	bne	2bfaa8 <TCompiler::IsConstantExpr(RefVar const &)+0xac>
        2bfa90:	e1a0100d 	mov	r1, sp
        2bfa94:	e5950000 	ldr	r0, [r5]
        2bfa98:	eb5e5809 	bl	1a55ac4 <TFunctionState::$IsConstant(RefVar const &)>
        2bfa9c:	ea000007 	b	2bfac0 <TCompiler::IsConstantExpr(RefVar const &)+0xc4>
        2bfaa0:	e1a00004 	mov	r0, r4
        2bfaa4:	ea00000c 	b	2bfadc <TCompiler::IsConstantExpr(RefVar const &)+0xe0>
        2bfaa8:	e246cf4d 	sub	ip, r6, #308	; 0x134
        2bfaac:	e33c0003 	teq	ip, #3	; 0x3
        2bfab0:	1a000006 	bne	2bfad0 <TCompiler::IsConstantExpr(RefVar const &)+0xd4>
        2bfab4:	e1a0100d 	mov	r1, sp
        2bfab8:	e1a00005 	mov	r0, r5
        2bfabc:	eb5e57ff 	bl	1a55ac0 <TCompiler::$IsConstantExpr(RefVar const &)>
        2bfac0:	e1a04000 	mov	r4, r0
        2bfac4:	e59d0000 	ldr	r0, [sp]
        2bfac8:	eb640dbb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2bfacc:	eafffff3 	b	2bfaa0 <TCompiler::IsConstantExpr(RefVar const &)+0xa4>
        2bfad0:	e59d0000 	ldr	r0, [sp]
        2bfad4:	eb640db8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2bfad8:	e1a00007 	mov	r0, r7
        2bfadc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TCompiler::EvaluateConstantExpr(RefVar const &)
 * Address: 002bfae0
 */
TCompiler::EvaluateConstantExpr(RefVar const &) {
    /*
        2bfae0:	e1a0c00d 	mov	ip, sp
        2bfae4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2bfae8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2bfaec:	e1a05000 	mov	r5, r0
        2bfaf0:	e1a04001 	mov	r4, r1
        2bfaf4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2bfaf8:	e5910000 	ldr	r0, [r1]
        2bfafc:	e5900000 	ldr	r0, [r0]
        2bfb00:	e3a01000 	mov	r1, #0	; 0x0
        2bfb04:	eb6411d2 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2bfb08:	e3100003 	tst	r0, #3	; 0x3
        2bfb0c:	01a00140 	moveq	r0, r0, asr #2
        2bfb10:	0a000000 	beq	2bfb18 <TCompiler::EvaluateConstantExpr(RefVar const &)+0x38>
        2bfb14:	eb640980 	bl	1bc211c <$_RINTError(long)>
        2bfb18:	e1a06000 	mov	r6, r0
        2bfb1c:	e5940000 	ldr	r0, [r4]
        2bfb20:	e5900000 	ldr	r0, [r0]
        2bfb24:	eb6415e0 	bl	1bc52ac <$Length(long)>
        2bfb28:	e2400001 	sub	r0, r0, #1	; 0x1
        2bfb2c:	e3500001 	cmp	r0, #1	; 0x1
        2bfb30:	3a000004 	bcc	2bfb48 <TCompiler::EvaluateConstantExpr(RefVar const &)+0x68>
        2bfb34:	e5940000 	ldr	r0, [r4]
        2bfb38:	e5900000 	ldr	r0, [r0]
        2bfb3c:	e3a01001 	mov	r1, #1	; 0x1
        2bfb40:	eb6411c3 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2bfb44:	ea000000 	b	2bfb4c <TCompiler::EvaluateConstantExpr(RefVar const &)+0x6c>
        2bfb48:	e3a00002 	mov	r0, #2	; 0x2
        2bfb4c:	eb64097e 	bl	1bc214c <$AllocateRefHandle(long)>
        2bfb50:	e246cc01 	sub	ip, r6, #256	; 0x100
        2bfb54:	e33c0002 	teq	ip, #2	; 0x2
        2bfb58:	e58d0000 	str	r0, [sp]
        2bfb5c:	059d0000 	ldreq	r0, [sp]
        2bfb60:	05904000 	ldreq	r4, [r0]
        2bfb64:	0a000011 	beq	2bfbb0 <TCompiler::EvaluateConstantExpr(RefVar const &)+0xd0>
        2bfb68:	e246cc01 	sub	ip, r6, #256	; 0x100
        2bfb6c:	e33c0003 	teq	ip, #3	; 0x3
        2bfb70:	1a000007 	bne	2bfb94 <TCompiler::EvaluateConstantExpr(RefVar const &)+0xb4>
        2bfb74:	e1a0100d 	mov	r1, sp
        2bfb78:	e3a02000 	mov	r2, #0	; 0x0
        2bfb7c:	e5950000 	ldr	r0, [r5]
        2bfb80:	eb5e53bc 	bl	1a54a78 <TFunctionState::$GetConstantValue(RefVar const &, long *)>
        2bfb84:	e1a04000 	mov	r4, r0
        2bfb88:	ea000008 	b	2bfbb0 <TCompiler::EvaluateConstantExpr(RefVar const &)+0xd0>
        2bfb8c:	e1a00004 	mov	r0, r4
        2bfb90:	ea00000c 	b	2bfbc8 <TCompiler::EvaluateConstantExpr(RefVar const &)+0xe8>
        2bfb94:	e246cf4d 	sub	ip, r6, #308	; 0x134
        2bfb98:	e33c0003 	teq	ip, #3	; 0x3
        2bfb9c:	1a000006 	bne	2bfbbc <TCompiler::EvaluateConstantExpr(RefVar const &)+0xdc>
        2bfba0:	e1a0100d 	mov	r1, sp
        2bfba4:	e1a00005 	mov	r0, r5
        2bfba8:	eb5e4f7d 	bl	1a539a4 <TCompiler::$EvaluateConstantExpr(RefVar const &)>
        2bfbac:	e2604000 	rsb	r4, r0, #0	; 0x0
        2bfbb0:	e59d0000 	ldr	r0, [sp]
        2bfbb4:	eb640d80 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2bfbb8:	eafffff3 	b	2bfb8c <TCompiler::EvaluateConstantExpr(RefVar const &)+0xac>
        2bfbbc:	e59d0000 	ldr	r0, [sp]
        2bfbc0:	eb640d7d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2bfbc4:	e3a00002 	mov	r0, #2	; 0x2
        2bfbc8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TCompiler::Error(long)
 * Address: 002c2110
 */
TCompiler::Error(long) {
    /*
        2c2110:	e1a0c00d 	mov	ip, sp
        2c2114:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2c2118:	e24cb004 	sub	fp, ip, #4	; 0x4
        2c211c:	e1a04000 	mov	r4, r0
        2c2120:	e1a05001 	mov	r5, r1
        2c2124:	e24dd010 	sub	sp, sp, #16	; 0x10
        2c2128:	eb640004 	bl	1bc2140 <$AllocateFrame(void)>
        2c212c:	eb640006 	bl	1bc214c <$AllocateRefHandle(long)>
        2c2130:	e58d000c 	str	r0, [sp, #12]	; fField12
        2c2134:	e1a00105 	mov	r0, r5, lsl #2
        2c2138:	eb640003 	bl	1bc214c <$AllocateRefHandle(long)>
        2c213c:	e58d0000 	str	r0, [sp]
        2c2140:	e1a0200d 	mov	r2, sp
        2c2144:	e59f1080 	ldr	r1, [pc, #80]	; 2c21cc <TCompiler::Error(long)+0xbc>
        2c2148:	e28d000c 	add	r0, sp, #12	; 0xc
        2c214c:	eb641085 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2c2150:	e59d0000 	ldr	r0, [sp]
        2c2154:	eb640418 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c2158:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2c215c:	eb5df795 	bl	1a3ffb8 <TInputStream::$GetFilename(void)>
        2c2160:	eb640c5a 	bl	1bc52d0 <$MakeString(char const *)>
        2c2164:	eb63fff8 	bl	1bc214c <$AllocateRefHandle(long)>
        2c2168:	e58d0004 	str	r0, [sp, #4]	; fField4
        2c216c:	e28d2004 	add	r2, sp, #4	; 0x4
        2c2170:	e59f1058 	ldr	r1, [pc, #58]	; 2c21d0 <TCompiler::Error(long)+0xc0>
        2c2174:	e28d000c 	add	r0, sp, #12	; 0xc
        2c2178:	eb64107a 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2c217c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c2180:	eb64040d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c2184:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
        2c2188:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2c218c:	e1a00100 	mov	r0, r0, lsl #2
        2c2190:	eb63ffed 	bl	1bc214c <$AllocateRefHandle(long)>
        2c2194:	e58d0008 	str	r0, [sp, #8]	; fField8
        2c2198:	e28d2008 	add	r2, sp, #8	; 0x8
        2c219c:	e59f1030 	ldr	r1, [pc, #30]	; 2c21d4 <TCompiler::Error(long)+0xc4>
        2c21a0:	e28d000c 	add	r0, sp, #12	; 0xc
        2c21a4:	eb64106f 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2c21a8:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2c21ac:	eb640402 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c21b0:	e28d100c 	add	r1, sp, #12	; 0xc
        2c21b4:	e59f001c 	ldr	r0, [pc, #1c]	; 2c21d8 <TCompiler::Error(long)+0xc8>
        2c21b8:	e5900000 	ldr	r0, [r0]
        2c21bc:	eb6418a6 	bl	1bc845c <$ThrowRefException(char *, RefVar const &)>
        2c21c0:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        2c21c4:	eb6403fc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c21c8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2c21cc:	00682c90 	streqb	r2, [r8], -#192
        2c21d0:	00682d68 	rsbeq	r2, r8, r8, ror #26
        2c21d4:	006835a8 	rsbeq	r3, r8, r8, lsr #11
        2c21d8:	003712f8 	ldreqsh	r1, [r7], -r8
    */
}

/**
 * Symbol: TCompiler::Error(long, RefVar const &)
 * Address: 002c21dc
 */
TCompiler::Error(long, RefVar const &) {
    /*
        2c21dc:	e1a0c00d 	mov	ip, sp
        2c21e0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2c21e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2c21e8:	e1a04000 	mov	r4, r0
        2c21ec:	e1a06001 	mov	r6, r1
        2c21f0:	e1a05002 	mov	r5, r2
        2c21f4:	e24dd010 	sub	sp, sp, #16	; 0x10
        2c21f8:	eb63ffd0 	bl	1bc2140 <$AllocateFrame(void)>
        2c21fc:	eb63ffd2 	bl	1bc214c <$AllocateRefHandle(long)>
        2c2200:	e58d000c 	str	r0, [sp, #12]	; fField12
        2c2204:	e1a00106 	mov	r0, r6, lsl #2
        2c2208:	eb63ffcf 	bl	1bc214c <$AllocateRefHandle(long)>
        2c220c:	e58d0000 	str	r0, [sp]
        2c2210:	e1a0200d 	mov	r2, sp
        2c2214:	e59f1090 	ldr	r1, [pc, #90]	; 2c22ac <TCompiler::Error(long, RefVar const &)+0xd0>
        2c2218:	e28d000c 	add	r0, sp, #12	; 0xc
        2c221c:	eb641051 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2c2220:	e59d0000 	ldr	r0, [sp]
        2c2224:	eb6403e4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c2228:	e1a02005 	mov	r2, r5
        2c222c:	e59f107c 	ldr	r1, [pc, #7c]	; 2c22b0 <TCompiler::Error(long, RefVar const &)+0xd4>
        2c2230:	e28d000c 	add	r0, sp, #12	; 0xc
        2c2234:	eb64104b 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2c2238:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2c223c:	eb5df75d 	bl	1a3ffb8 <TInputStream::$GetFilename(void)>
        2c2240:	eb640c22 	bl	1bc52d0 <$MakeString(char const *)>
        2c2244:	eb63ffc0 	bl	1bc214c <$AllocateRefHandle(long)>
        2c2248:	e58d0004 	str	r0, [sp, #4]	; fField4
        2c224c:	e28d2004 	add	r2, sp, #4	; 0x4
        2c2250:	e59f105c 	ldr	r1, [pc, #5c]	; 2c22b4 <TCompiler::Error(long, RefVar const &)+0xd8>
        2c2254:	e28d000c 	add	r0, sp, #12	; 0xc
        2c2258:	eb641042 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2c225c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c2260:	eb6403d5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c2264:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
        2c2268:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2c226c:	e1a00100 	mov	r0, r0, lsl #2
        2c2270:	eb63ffb5 	bl	1bc214c <$AllocateRefHandle(long)>
        2c2274:	e58d0008 	str	r0, [sp, #8]	; fField8
        2c2278:	e28d2008 	add	r2, sp, #8	; 0x8
        2c227c:	e59f1034 	ldr	r1, [pc, #34]	; 2c22b8 <TCompiler::Error(long, RefVar const &)+0xdc>
        2c2280:	e28d000c 	add	r0, sp, #12	; 0xc
        2c2284:	eb641037 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2c2288:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2c228c:	eb6403ca 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c2290:	e28d100c 	add	r1, sp, #12	; 0xc
        2c2294:	e59f0020 	ldr	r0, [pc, #20]	; 2c22bc <TCompiler::Error(long, RefVar const &)+0xe0>	; fField20
        2c2298:	e5900000 	ldr	r0, [r0]
        2c229c:	eb64186e 	bl	1bc845c <$ThrowRefException(char *, RefVar const &)>
        2c22a0:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        2c22a4:	eb6403c4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c22a8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2c22ac:	00682c90 	streqb	r2, [r8], -#192
        2c22b0:	00684e98 	streqb	r4, [r8], -#232
        2c22b4:	00682d68 	rsbeq	r2, r8, r8, ror #26
        2c22b8:	006835a8 	rsbeq	r3, r8, r8, lsr #11
        2c22bc:	003712f8 	ldreqsh	r1, [r7], -r8
        2c22c0:	656e642d 	strvsb	r6, [lr, -#1069]!
        2c22c4:	6f662d66 	swivs	0x00662d66
        2c22c8:	696c6500 	stmvsdb	ip!, {r8, sl, sp, lr}^
        2c22cc:	27262700 	strcs	r2, [r6, -r0, lsl #14]!
        2c22d0:	275c2727 	ldrcsb	r2, [ip, -r7, lsr #14]
        2c22d4:	00000000 	andeq	r0, r0, r0
        2c22d8:	27282700 	strcs	r2, [r8, -r0, lsl #14]!
        2c22dc:	27292700 	strcs	r2, [r9, -r0, lsl #14]!
        2c22e0:	272a2700 	strcs	r2, [sl, -r0, lsl #14]!
        2c22e4:	272b2700 	strcs	r2, [fp, -r0, lsl #14]!
        2c22e8:	272c2700 	strcs	r2, [ip, -r0, lsl #14]!
        2c22ec:	272d2700 	strcs	r2, [sp, -r0, lsl #14]!
        2c22f0:	272e2700 	strcs	r2, [lr, -r0, lsl #14]!
        2c22f4:	272f2700 	strcs	r2, [pc, -r0, lsl #14]!
        2c22f8:	273a2700 	ldrcs	r2, [sl, -r0, lsl #14]!
        2c22fc:	273b2700 	ldrcs	r2, [fp, -r0, lsl #14]!
        2c2300:	273c2700 	ldrcs	r2, [ip, -r0, lsl #14]!
        2c2304:	273e2700 	ldrcs	r2, [lr, -r0, lsl #14]!
        2c2308:	275b2700 	ldrcsb	r2, [fp, -r0, lsl #14]
        2c230c:	275d2700 	ldrcsb	r2, [sp, -r0, lsl #14]
        2c2310:	277b2700 	ldrcsb	r2, [fp, -r0, lsl #14]!
        2c2314:	277d2700 	ldrcsb	r2, [sp, -r0, lsl #14]!
        2c2318:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c2320 <TCompiler::Error(long, RefVar const &)+0x144>
        2c231c:	6e4f5054 	mcrvs	0, 2, r5, cr15, cr4, {2}
        2c2320:	494f4e41 	stmmidb	pc, {r0, r6, r9, sl, fp, lr}^
        2c2324:	4c455850 	mcrrmi	8, 5, r5, r5, cr0
        2c2328:	52000000 	andpl	r0, r0, #0	; 0x0
        2c232c:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c2334 <TCompiler::Error(long, RefVar const &)+0x158>
        2c2330:	6e434f4e 	cdpvs	15, 4, cr4, cr3, cr14, {2}
        2c2334:	53540000 	cmppl	r4, #0	; 0x0
        2c2338:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c2340 <TCompiler::Error(long, RefVar const &)+0x164>
        2c233c:	6e53594d 	cdpvs	9, 5, cr5, cr3, cr13, {2}
        2c2340:	424f4c00 	submi	r4, pc, #0	; 0x0
        2c2344:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c234c <TCompiler::Error(long, RefVar const &)+0x170>
        2c2348:	6e494e54 	mcrvs	14, 2, r4, cr9, cr4, {2}
        2c234c:	45474552 	strmib	r4, [r7, -#1362]	; fField1362
        2c2350:	00000000 	andeq	r0, r0, r0
        2c2354:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c235c <TCompiler::Error(long, RefVar const &)+0x180>
        2c2358:	6e524541 	cdpvs	5, 5, cr4, cr2, cr1, {2}
        2c235c:	4c000000 	stcmi	0, cr0, [r0]
        2c2360:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c2368 <TCompiler::Error(long, RefVar const &)+0x18c>
        2c2364:	6e524546 	cdpvs	5, 5, cr4, cr2, cr6, {2}
        2c2368:	434f4e53 	cmpmi	pc, #1328	; 0x530
        2c236c:	54000000 	strpl	r0, [r0]
        2c2370:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c2378 <TCompiler::Error(long, RefVar const &)+0x19c>
        2c2374:	6e424547 	cdpvs	5, 4, cr4, cr2, cr7, {2}
        2c2378:	494e0000 	stmmidb	lr, {}^
        2c237c:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c2384 <TCompiler::Error(long, RefVar const &)+0x1a8>
        2c2380:	6e454e44 	cdpvs	14, 4, cr4, cr5, cr4, {2}
        2c2384:	00000000 	andeq	r0, r0, r0
        2c2388:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c2390 <TCompiler::Error(long, RefVar const &)+0x1b4>
        2c238c:	6e46554e 	cdpvs	5, 4, cr5, cr6, cr14, {2}
        2c2390:	43000000 	tstmi	r0, #0	; 0x0
        2c2394:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c239c <TCompiler::Error(long, RefVar const &)+0x1c0>
        2c2398:	6e4e4154 	mcrvs	1, 2, r4, cr14, cr4, {2}
        2c239c:	49564500 	ldmmidb	r6, {r8, sl, lr}^
        2c23a0:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c23a8 <TCompiler::Error(long, RefVar const &)+0x1cc>
        2c23a4:	6e474c4f 	cdpvs	12, 4, cr4, cr7, cr15, {2}
        2c23a8:	42414c00 	submi	r4, r1, #0	; 0x0
        2c23ac:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c23b4 <TCompiler::Error(long, RefVar const &)+0x1d8>
        2c23b0:	6e474655 	mcrvs	6, 2, r4, cr7, cr5, {2}
        2c23b4:	4e435449 	cdpmi	4, 4, cr5, cr3, cr9, {2}
        2c23b8:	4f4e0000 	swimi	0x004e0000
        2c23bc:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c23c4 <TCompiler::Error(long, RefVar const &)+0x1e8>
        2c23c0:	6e434f4e 	cdpvs	15, 4, cr4, cr3, cr14, {2}
        2c23c4:	5354414e 	cmppl	r4, #-2147483629	; 0x80000013
        2c23c8:	54000000 	strpl	r0, [r0]
        2c23cc:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c23d4 <TCompiler::Error(long, RefVar const &)+0x1f8>
        2c23d0:	6e494600 	cdpvs	6, 4, cr4, cr9, cr0, {0}
        2c23d4:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c23dc <TCompiler::Error(long, RefVar const &)+0x200>
        2c23d8:	6e544845 	cdpvs	8, 5, cr4, cr4, cr5, {2}
        2c23dc:	4e000000 	cdpmi	0, 0, cr0, cr0, cr0, {0}
        2c23e0:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c23e8 <TCompiler::Error(long, RefVar const &)+0x20c>
        2c23e4:	6e454c53 	mcrvs	12, 2, r4, cr5, cr3, {2}
        2c23e8:	45000000 	strmi	r0, [r0]
        2c23ec:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c23f4 <TCompiler::Error(long, RefVar const &)+0x218>
        2c23f0:	6e545259 	mrcvs	2, 2, r5, cr4, cr9, {2}
        2c23f4:	00000000 	andeq	r0, r0, r0
        2c23f8:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c2400 <TCompiler::Error(long, RefVar const &)+0x224>
        2c23fc:	6e4f4e45 	cdpvs	14, 4, cr4, cr15, cr5, {2}
        2c2400:	58434550 	stmplda	r3, {r4, r6, r8, sl, lr}^
        2c2404:	54494f4e 	strplb	r4, [r9], -#3918
        2c2408:	00000000 	andeq	r0, r0, r0
        2c240c:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c2414 <TCompiler::Error(long, RefVar const &)+0x238>
        2c2410:	6e425549 	cdpvs	5, 4, cr5, cr2, cr9, {2}
        2c2414:	4c444152 	mcrrmi	1, 5, r4, r4, cr2
        2c2418:	52415900 	subpl	r5, r1, #0	; 0x0
        2c241c:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c2424 <TCompiler::Error(long, RefVar const &)+0x248>
        2c2420:	6e425549 	cdpvs	5, 4, cr5, cr2, cr9, {2}
        2c2424:	4c444652 	mcrrmi	6, 5, r4, r4, cr2
        2c2428:	414d4500 	cmpmi	sp, r0, lsl #10
        2c242c:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c2434 <TCompiler::Error(long, RefVar const &)+0x258>
        2c2430:	6e4c4f43 	cdpvs	15, 4, cr4, cr12, cr3, {2}
        2c2434:	414c0000 	cmpmi	ip, r0
        2c2438:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c2440 <TCompiler::Error(long, RefVar const &)+0x264>
        2c243c:	6e4c4f4f 	cdpvs	15, 4, cr4, cr12, cr15, {2}
        2c2440:	50000000 	andpl	r0, r0, r0
        2c2444:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c244c <TCompiler::Error(long, RefVar const &)+0x270>
        2c2448:	6e464f52 	mcrvs	15, 2, r4, cr6, cr2, {2}
        2c244c:	00000000 	andeq	r0, r0, r0
        2c2450:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c2458 <TCompiler::Error(long, RefVar const &)+0x27c>
        2c2454:	6e544f00 	cdpvs	15, 5, cr4, cr4, cr0, {0}
        2c2458:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c2460 <TCompiler::Error(long, RefVar const &)+0x284>
        2c245c:	6e425900 	cdpvs	9, 4, cr5, cr2, cr0, {0}
        2c2460:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c2468 <TCompiler::Error(long, RefVar const &)+0x28c>
        2c2464:	6e574849 	cdpvs	8, 5, cr4, cr7, cr9, {2}
        2c2468:	4c450000 	marmi	acc0, r0, r5
        2c246c:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c2474 <TCompiler::Error(long, RefVar const &)+0x298>
        2c2470:	6e524550 	mrcvs	5, 2, r4, cr2, cr0, {2}
        2c2474:	45415400 	strmib	r5, [r1, -#1024]
        2c2478:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c2480 <TCompiler::Error(long, RefVar const &)+0x2a4>
        2c247c:	6e554e54 	mrcvs	14, 2, r4, cr5, cr4, {2}
        2c2480:	494c0000 	stmmidb	ip, {}^
        2c2484:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c248c <TCompiler::Error(long, RefVar const &)+0x2b0>
        2c2488:	6e444f00 	cdpvs	15, 4, cr4, cr4, cr0, {0}
        2c248c:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c2494 <TCompiler::Error(long, RefVar const &)+0x2b8>
        2c2490:	6e43414c 	dvfvssm	f4, f3, #4.0
        2c2494:	4c000000 	stcmi	0, cr0, [r0]
        2c2498:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c24a0 <TCompiler::Error(long, RefVar const &)+0x2c4>
        2c249c:	6e574954 	mrcvs	9, 2, r4, cr7, cr4, {2}
        2c24a0:	48000000 	stmmida	r0, {}
        2c24a4:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c24ac <TCompiler::Error(long, RefVar const &)+0x2d0>
        2c24a8:	6e494e56 	mcrvs	14, 2, r4, cr9, cr6, {2}
        2c24ac:	4f4b4500 	swimi	0x004b4500
        2c24b0:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c24b8 <TCompiler::Error(long, RefVar const &)+0x2dc>
        2c24b4:	6e464f52 	mcrvs	15, 2, r4, cr6, cr2, {2}
        2c24b8:	45414348 	strmib	r4, [r1, -#840]
        2c24bc:	00000000 	andeq	r0, r0, r0
        2c24c0:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c24c8 <TCompiler::Error(long, RefVar const &)+0x2ec>
        2c24c4:	6e494e00 	cdpvs	14, 4, cr4, cr9, cr0, {0}
        2c24c8:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c24d0 <TCompiler::Error(long, RefVar const &)+0x2f4>
        2c24cc:	6e444545 	cdpvs	5, 4, cr4, cr4, cr5, {2}
        2c24d0:	504c5900 	subpl	r5, ip, r0, lsl #18
        2c24d4:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c24dc <TCompiler::Error(long, RefVar const &)+0x300>
        2c24d8:	6e53454c 	cdpvs	5, 5, cr4, cr3, cr12, {2}
        2c24dc:	46000000 	strmi	r0, [r0], -r0
        2c24e0:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c24e8 <TCompiler::Error(long, RefVar const &)+0x30c>
        2c24e4:	6e494e48 	cdpvs	14, 4, cr4, cr9, cr8, {2}
        2c24e8:	45524954 	ldrmib	r4, [r2, -#2388]
        2c24ec:	45440000 	strmib	r0, [r4]
        2c24f0:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c24f8 <TCompiler::Error(long, RefVar const &)+0x31c>
        2c24f4:	6e524554 	mrcvs	5, 2, r4, cr2, cr4, {2}
        2c24f8:	55524e00 	ldrplb	r4, [r2, -#3584]
        2c24fc:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c2504 <TCompiler::Error(long, RefVar const &)+0x328>
        2c2500:	6e425245 	cdpvs	2, 4, cr5, cr2, cr5, {2}
        2c2504:	414b0000 	cmpmi	fp, r0
        2c2508:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c2510 <TCompiler::Error(long, RefVar const &)+0x334>
        2c250c:	6e4b4545 	cdpvs	5, 4, cr4, cr11, cr5, {2}
        2c2510:	50474f49 	subpl	r4, r7, r9, asr #30
        2c2514:	4e470000 	cdpmi	0, 4, cr0, cr7, cr0, {0}
        2c2518:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c2520 <TCompiler::Error(long, RefVar const &)+0x344>
        2c251c:	6e415353 	mcrvs	3, 2, r5, cr1, cr3, {2}
        2c2520:	49474e00 	stmmidb	r7, {r9, sl, fp, lr}^
        2c2524:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c252c <TCompiler::Error(long, RefVar const &)+0x350>
        2c2528:	6e414e44 	cdpvs	14, 4, cr4, cr1, cr4, {2}
        2c252c:	00000000 	andeq	r0, r0, r0
        2c2530:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c2538 <TCompiler::Error(long, RefVar const &)+0x35c>
        2c2534:	6e4f5200 	cdpvs	2, 4, cr5, cr15, cr0, {0}
        2c2538:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c2540 <TCompiler::Error(long, RefVar const &)+0x364>
        2c253c:	6e4e4f54 	mcrvs	15, 2, r4, cr14, cr4, {2}
        2c2540:	00000000 	andeq	r0, r0, r0
        2c2544:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c254c <TCompiler::Error(long, RefVar const &)+0x370>
        2c2548:	6e4c4551 	mcrvs	5, 2, r4, cr12, cr1, {2}
        2c254c:	00000000 	andeq	r0, r0, r0
        2c2550:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c2558 <TCompiler::Error(long, RefVar const &)+0x37c>
        2c2554:	6e474551 	mcrvs	5, 2, r4, cr7, cr1, {2}
        2c2558:	00000000 	andeq	r0, r0, r0
        2c255c:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c2564 <TCompiler::Error(long, RefVar const &)+0x388>
        2c2560:	6e45514c 	dvfvssm	f5, f5, #4.0
        2c2564:	00000000 	andeq	r0, r0, r0
        2c2568:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c2570 <TCompiler::Error(long, RefVar const &)+0x394>
        2c256c:	6e4e4551 	mcrvs	5, 2, r4, cr14, cr1, {2}
        2c2570:	00000000 	andeq	r0, r0, r0
        2c2574:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c257c <TCompiler::Error(long, RefVar const &)+0x3a0>
        2c2578:	6e455849 	cdpvs	8, 4, cr5, cr5, cr9, {2}
        2c257c:	53545300 	cmppl	r4, #0	; 0x0
        2c2580:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c2588 <TCompiler::Error(long, RefVar const &)+0x3ac>
        2c2584:	6e414d50 	mcrvs	13, 2, r4, cr1, cr0, {2}
        2c2588:	4552414d 	ldrmib	r4, [r2, -#333]
        2c258c:	50455200 	subpl	r5, r5, r0, lsl #4
        2c2590:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c2598 <TCompiler::Error(long, RefVar const &)+0x3bc>
        2c2594:	6e444956 	mcrvs	9, 2, r4, cr4, cr6, {2}
        2c2598:	00000000 	andeq	r0, r0, r0
        2c259c:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c25a4 <TCompiler::Error(long, RefVar const &)+0x3c8>
        2c25a0:	6e4d4f44 	cdpvs	15, 4, cr4, cr13, cr4, {2}
        2c25a4:	00000000 	andeq	r0, r0, r0
        2c25a8:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c25b0 <TCompiler::Error(long, RefVar const &)+0x3d4>
        2c25ac:	6e4c5348 	cdpvs	3, 4, cr5, cr12, cr8, {2}
        2c25b0:	49465400 	stmmidb	r6, {sl, ip, lr}^
        2c25b4:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c25bc <TCompiler::Error(long, RefVar const &)+0x3e0>
        2c25b8:	6e525348 	cdpvs	3, 5, cr5, cr2, cr8, {2}
        2c25bc:	49465400 	stmmidb	r6, {sl, ip, lr}^
        2c25c0:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c25c8 <TCompiler::Error(long, RefVar const &)+0x3ec>
        2c25c4:	6e554d49 	cdpvs	13, 5, cr4, cr5, cr9, {2}
        2c25c8:	4e555300 	cdpmi	3, 5, cr5, cr5, cr0, {0}
        2c25cc:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c25d4 <TCompiler::Error(long, RefVar const &)+0x3f8>
        2c25d0:	6e53454e 	cdpvs	5, 5, cr4, cr3, cr14, {2}
        2c25d4:	44494644 	strmib	r4, [r9], -#1604
        2c25d8:	4546494e 	strmib	r4, [r6, -#2382]
        2c25dc:	45440000 	strmib	r0, [r4]
        2c25e0:	24616363 	strcsbt	r6, [r1], -#867
        2c25e4:	65707420 	ldrvsb	r7, [r0, -#1056]!
        2c25e8:	3a20696e 	bcc	adcba8 <ROM$$Size+0x3bcf5c>
        2c25ec:	70757400 	rsbvcs	r7, r5, r0, lsl #8
        2c25f0:	696e7075 	stmvsdb	lr!, {r0, r2, r4, r5, r6, ip, sp, lr}^
        2c25f4:	74203a00 	strvct	r3, [r0], -#2560
        2c25f8:	696e7075 	stmvsdb	lr!, {r0, r2, r4, r5, r6, ip, sp, lr}^
        2c25fc:	74203a20 	strvct	r3, [r0], -#2592
        2c2600:	636f6d6d 	cmnvs	pc, #6976	; 0x1b40
        2c2604:	616e645f 	cmnvs	lr, pc, asr r4
        2c2608:	706c7573 	rsbvc	r7, ip, r3, ror r5
        2c260c:	00000000 	andeq	r0, r0, r0
        2c2610:	636f6d6d 	cmnvs	pc, #6976	; 0x1b40
        2c2614:	616e645f 	cmnvs	lr, pc, asr r4
        2c2618:	706c7573 	rsbvc	r7, ip, r3, ror r5
        2c261c:	203a2063 	eorcss	r2, sl, r3, rrx
        2c2620:	6f6d6d61 	swivs	0x006d6d61
        2c2624:	6e640000 	cdpvs	0, 6, cr0, cr4, cr0, {0}
        2c2628:	24243120 	strcst	r3, [r4], -#288	; fField288
        2c262c:	3a000000 	bcc	2c2634 <TCompiler::Error(long, RefVar const &)+0x458>
        2c2630:	636f6d6d 	cmnvs	pc, #6976	; 0x1b40
        2c2634:	616e645f 	cmnvs	lr, pc, asr r4
        2c2638:	706c7573 	rsbvc	r7, ip, r3, ror r5
        2c263c:	203a2063 	eorcss	r2, sl, r3, rrx
        2c2640:	6f6d6d61 	swivs	0x006d6d61
        2c2644:	6e645f70 	mcrvs	15, 3, r5, cr4, cr0, {3}
        2c2648:	6c757320 	ldcvsl	3, cr7, [r5], -#128
        2c264c:	273b2720 	ldrcs	r2, [fp, -r0, lsr #14]!
        2c2650:	24243120 	strcst	r3, [r4], -#288	; fField288
        2c2654:	636f6d6d 	cmnvs	pc, #6976	; 0x1b40
        2c2658:	616e6400 	cmnvs	lr, r0, lsl #8
        2c265c:	636f6d6d 	cmnvs	pc, #6976	; 0x1b40
        2c2660:	616e6420 	cmnvs	lr, r0, lsr #8
        2c2664:	3a206578 	bcc	adbc4c <ROM$$Size+0x3bc000>
        2c2668:	70720000 	rsbvcs	r0, r2, r0
        2c266c:	636f6d6d 	cmnvs	pc, #6976	; 0x1b40
        2c2670:	616e6420 	cmnvs	lr, r0, lsr #8
        2c2674:	3a20676c 	bcc	adc42c <ROM$$Size+0x3bc7e0>
        2c2678:	6f62616c 	swivs	0x0062616c
        2c267c:	5f646563 	swipl	0x00646563
        2c2680:	6c000000 	stcvs	0, cr0, [r0]
        2c2684:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c2688:	203a2063 	eorcss	r2, sl, r3, rrx
        2c268c:	6f6e7374 	swivs	0x006e7374
        2c2690:	616e7400 	cmnvs	lr, r0, lsl #8
        2c2694:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c2698:	203a206c 	eorcss	r2, sl, ip, rrx
        2c269c:	76616c75 	undefined
        2c26a0:	65000000 	strvs	r0, [r0]
        2c26a4:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c26a8:	203a2061 	eorcss	r2, sl, r1, rrx
        2c26ac:	73736967 	cmnvc	r3, #1687552	; 0x19c000
        2c26b0:	6e6d656e 	cdpvs	5, 6, cr6, cr13, cr14, {3}
        2c26b4:	74000000 	strvc	r0, [r0]
        2c26b8:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c26bc:	203a2074 	eorcss	r2, sl, r4, ror r0
        2c26c0:	6f6b656e 	swivs	0x006b656e
        2c26c4:	53454c46 	cmppl	r5, #17920	; 0x4600
        2c26c8:	00000000 	andeq	r0, r0, r0
        2c26cc:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c26d0:	203a2074 	eorcss	r2, sl, r4, ror r0
        2c26d4:	6f6b656e 	swivs	0x006b656e
        2c26d8:	42454749 	submi	r4, r5, #19136512	; 0x1240000
        2c26dc:	4e206578 	mcrmi	5, 1, r6, cr0, cr8, {3}
        2c26e0:	70725f73 	rsbvcs	r5, r2, r3, ror pc
        2c26e4:	65712074 	ldrvsb	r2, [r1, -#116]!	; fField116
        2c26e8:	6f6b656e 	swivs	0x006b656e
        2c26ec:	454e4400 	strmib	r4, [lr, -#1024]
        2c26f0:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c26f4:	203a2027 	eorcss	r2, sl, r7, lsr #32
        2c26f8:	28272065 	stmcsda	r7!, {r0, r2, r5, r6, sp}
        2c26fc:	78707220 	ldmvcda	r0!, {r5, r9, ip, sp, lr}^
        2c2700:	27292700 	strcs	r2, [r9, -r0, lsl #14]!
        2c2704:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c2708:	203a2065 	eorcss	r2, sl, r5, rrx
        2c270c:	78707220 	ldmvcda	r0!, {r5, r9, ip, sp, lr}^
        2c2710:	272b2720 	strcs	r2, [fp, -r0, lsr #14]!
        2c2714:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c2718:	00000000 	andeq	r0, r0, r0
        2c271c:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c2720:	203a2065 	eorcss	r2, sl, r5, rrx
        2c2724:	78707220 	ldmvcda	r0!, {r5, r9, ip, sp, lr}^
        2c2728:	272d2720 	strcs	r2, [sp, -r0, lsr #14]!
        2c272c:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c2730:	00000000 	andeq	r0, r0, r0
        2c2734:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c2738:	203a2065 	eorcss	r2, sl, r5, rrx
        2c273c:	78707220 	ldmvcda	r0!, {r5, r9, ip, sp, lr}^
        2c2740:	272a2720 	strcs	r2, [sl, -r0, lsr #14]!
        2c2744:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c2748:	00000000 	andeq	r0, r0, r0
        2c274c:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c2750:	203a2065 	eorcss	r2, sl, r5, rrx
        2c2754:	78707220 	ldmvcda	r0!, {r5, r9, ip, sp, lr}^
        2c2758:	272f2720 	strcs	r2, [pc, -r0, lsr #14]!
        2c275c:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c2760:	00000000 	andeq	r0, r0, r0
        2c2764:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c2768:	203a2065 	eorcss	r2, sl, r5, rrx
        2c276c:	78707220 	ldmvcda	r0!, {r5, r9, ip, sp, lr}^
        2c2770:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c2778 <TCompiler::Error(long, RefVar const &)+0x59c>
        2c2774:	6e444956 	mcrvs	9, 2, r4, cr4, cr6, {2}
        2c2778:	20657870 	rsbcs	r7, r5, r0, ror r8
        2c277c:	72000000 	andvc	r0, r0, #0	; 0x0
        2c2780:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c2784:	203a2065 	eorcss	r2, sl, r5, rrx
        2c2788:	78707220 	ldmvcda	r0!, {r5, r9, ip, sp, lr}^
        2c278c:	27262720 	strcs	r2, [r6, -r0, lsr #14]!
        2c2790:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c2794:	00000000 	andeq	r0, r0, r0
        2c2798:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c279c:	203a2065 	eorcss	r2, sl, r5, rrx
        2c27a0:	78707220 	ldmvcda	r0!, {r5, r9, ip, sp, lr}^
        2c27a4:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c27ac <TCompiler::Error(long, RefVar const &)+0x5d0>
        2c27a8:	6e414d50 	mcrvs	13, 2, r4, cr1, cr0, {2}
        2c27ac:	4552414d 	ldrmib	r4, [r2, -#333]
        2c27b0:	50455220 	subpl	r5, r5, r0, lsr #4
        2c27b4:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c27b8:	00000000 	andeq	r0, r0, r0
        2c27bc:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c27c0:	203a2065 	eorcss	r2, sl, r5, rrx
        2c27c4:	78707220 	ldmvcda	r0!, {r5, r9, ip, sp, lr}^
        2c27c8:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c27d0 <TCompiler::Error(long, RefVar const &)+0x5f4>
        2c27cc:	6e4d4f44 	cdpvs	15, 4, cr4, cr13, cr4, {2}
        2c27d0:	20657870 	rsbcs	r7, r5, r0, ror r8
        2c27d4:	72000000 	andvc	r0, r0, #0	; 0x0
        2c27d8:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c27dc:	203a2027 	eorcss	r2, sl, r7, lsr #32
        2c27e0:	2d272065 	stccs	0, cr2, [r7, -#404]!
        2c27e4:	78707200 	ldmvcda	r0!, {r9, ip, sp, lr}^
        2c27e8:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c27ec:	203a2065 	eorcss	r2, sl, r5, rrx
        2c27f0:	78707220 	ldmvcda	r0!, {r5, r9, ip, sp, lr}^
        2c27f4:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c27fc <TCompiler::Error(long, RefVar const &)+0x620>
        2c27f8:	6e4c5348 	cdpvs	3, 4, cr5, cr12, cr8, {2}
        2c27fc:	49465420 	stmmidb	r6, {r5, sl, ip, lr}^
        2c2800:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c2804:	00000000 	andeq	r0, r0, r0
        2c2808:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c280c:	203a2065 	eorcss	r2, sl, r5, rrx
        2c2810:	78707220 	ldmvcda	r0!, {r5, r9, ip, sp, lr}^
        2c2814:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c281c <TCompiler::Error(long, RefVar const &)+0x640>
        2c2818:	6e525348 	cdpvs	3, 5, cr5, cr2, cr8, {2}
        2c281c:	49465420 	stmmidb	r6, {r5, sl, ip, lr}^
        2c2820:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c2824:	00000000 	andeq	r0, r0, r0
        2c2828:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c282c:	203a2065 	eorcss	r2, sl, r5, rrx
        2c2830:	78707220 	ldmvcda	r0!, {r5, r9, ip, sp, lr}^
        2c2834:	273c2720 	ldrcs	r2, [ip, -r0, lsr #14]!
        2c2838:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c283c:	00000000 	andeq	r0, r0, r0
        2c2840:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c2844:	203a2065 	eorcss	r2, sl, r5, rrx
        2c2848:	78707220 	ldmvcda	r0!, {r5, r9, ip, sp, lr}^
        2c284c:	273e2720 	ldrcs	r2, [lr, -r0, lsr #14]!
        2c2850:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c2854:	00000000 	andeq	r0, r0, r0
        2c2858:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c285c:	203a2065 	eorcss	r2, sl, r5, rrx
        2c2860:	78707220 	ldmvcda	r0!, {r5, r9, ip, sp, lr}^
        2c2864:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c286c <TCompiler::Error(long, RefVar const &)+0x690>
        2c2868:	6e4c4551 	mcrvs	5, 2, r4, cr12, cr1, {2}
        2c286c:	20657870 	rsbcs	r7, r5, r0, ror r8
        2c2870:	72000000 	andvc	r0, r0, #0	; 0x0
        2c2874:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c2878:	203a2065 	eorcss	r2, sl, r5, rrx
        2c287c:	78707220 	ldmvcda	r0!, {r5, r9, ip, sp, lr}^
        2c2880:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c2888 <TCompiler::Error(long, RefVar const &)+0x6ac>
        2c2884:	6e474551 	mcrvs	5, 2, r4, cr7, cr1, {2}
        2c2888:	20657870 	rsbcs	r7, r5, r0, ror r8
        2c288c:	72000000 	andvc	r0, r0, #0	; 0x0
        2c2890:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c2894:	203a2065 	eorcss	r2, sl, r5, rrx
        2c2898:	78707220 	ldmvcda	r0!, {r5, r9, ip, sp, lr}^
        2c289c:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c28a4 <TCompiler::Error(long, RefVar const &)+0x6c8>
        2c28a0:	6e45514c 	dvfvssm	f5, f5, #4.0
        2c28a4:	20657870 	rsbcs	r7, r5, r0, ror r8
        2c28a8:	72000000 	andvc	r0, r0, #0	; 0x0
        2c28ac:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c28b0:	203a2065 	eorcss	r2, sl, r5, rrx
        2c28b4:	78707220 	ldmvcda	r0!, {r5, r9, ip, sp, lr}^
        2c28b8:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c28c0 <TCompiler::Error(long, RefVar const &)+0x6e4>
        2c28bc:	6e4e4551 	mcrvs	5, 2, r4, cr14, cr1, {2}
        2c28c0:	20657870 	rsbcs	r7, r5, r0, ror r8
        2c28c4:	72000000 	andvc	r0, r0, #0	; 0x0
        2c28c8:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c28cc:	203a2065 	eorcss	r2, sl, r5, rrx
        2c28d0:	78707220 	ldmvcda	r0!, {r5, r9, ip, sp, lr}^
        2c28d4:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c28dc <TCompiler::Error(long, RefVar const &)+0x700>
        2c28d8:	6e414e44 	cdpvs	14, 4, cr4, cr1, cr4, {2}
        2c28dc:	20657870 	rsbcs	r7, r5, r0, ror r8
        2c28e0:	72000000 	andvc	r0, r0, #0	; 0x0
        2c28e4:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c28e8:	203a2065 	eorcss	r2, sl, r5, rrx
        2c28ec:	78707220 	ldmvcda	r0!, {r5, r9, ip, sp, lr}^
        2c28f0:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c28f8 <TCompiler::Error(long, RefVar const &)+0x71c>
        2c28f4:	6e4f5220 	cdpvs	2, 4, cr5, cr15, cr0, {1}
        2c28f8:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c28fc:	00000000 	andeq	r0, r0, r0
        2c2900:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c2904:	203a2074 	eorcss	r2, sl, r4, ror r0
        2c2908:	6f6b656e 	swivs	0x006b656e
        2c290c:	4e4f5420 	cdpmi	4, 4, cr5, cr15, cr0, {1}
        2c2910:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c2914:	00000000 	andeq	r0, r0, r0
        2c2918:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c291c:	203a206c 	eorcss	r2, sl, ip, rrx
        2c2920:	76616c75 	undefined
        2c2924:	6520746f 	strvs	r7, [r0, -#1135]!
        2c2928:	6b656e45 	blvs	1c1e244 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xd9ec>
        2c292c:	58495354 	stmplda	r9, {r2, r4, r6, r8, r9, ip, lr}^
        2c2930:	53000000 	tstpl	r0, #0	; 0x0
        2c2934:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c2938:	203a2073 	eorcss	r2, sl, r3, ror r0
        2c293c:	656e645f 	strvsb	r6, [lr, -#1119]!
        2c2940:	65786973 	ldrvsb	r6, [r8, -#2419]!
        2c2944:	74735f65 	ldrvcbt	r5, [r3], -#3941
        2c2948:	78707220 	ldmvcda	r0!, {r5, r9, ip, sp, lr}^
        2c294c:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c2954 <TCompiler::Error(long, RefVar const &)+0x778>
        2c2950:	6e455849 	cdpvs	8, 4, cr5, cr5, cr9, {2}
        2c2954:	53545300 	cmppl	r4, #0	; 0x0
        2c2958:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c295c:	203a2066 	eorcss	r2, sl, r6, rrx
        2c2960:	756e6361 	strvcb	r6, [lr, -#865]!
        2c2964:	6c6c5f65 	stcvsl	15, cr5, [ip], -#404
        2c2968:	78707200 	ldmvcda	r0!, {r9, ip, sp, lr}^
        2c296c:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c2970:	203a2073 	eorcss	r2, sl, r3, ror r0
        2c2974:	656e645f 	strvsb	r6, [lr, -#1119]!
        2c2978:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c297c:	00000000 	andeq	r0, r0, r0
        2c2980:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c2984:	203a2069 	eorcss	r2, sl, r9, rrx
        2c2988:	665f6578 	undefined
        2c298c:	70720000 	rsbvcs	r0, r2, r0
        2c2990:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c2994:	203a206c 	eorcss	r2, sl, ip, rrx
        2c2998:	6f6f705f 	swivs	0x006f705f
        2c299c:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c29a0:	00000000 	andeq	r0, r0, r0
        2c29a4:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c29a8:	203a206c 	eorcss	r2, sl, ip, rrx
        2c29ac:	616d6264 	cmnvs	sp, r4, ror #4
        2c29b0:	615f6578 	cmpvs	pc, r8, ror r5
        2c29b4:	70720000 	rsbvcs	r0, r2, r0
        2c29b8:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c29bc:	203a2074 	eorcss	r2, sl, r4, ror r0
        2c29c0:	72795f65 	rsbvcs	r5, r9, #404	; 0x194
        2c29c4:	78707200 	ldmvcda	r0!, {r9, ip, sp, lr}^
        2c29c8:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c29cc:	203a2063 	eorcss	r2, sl, r3, rrx
        2c29d0:	6f6e7374 	swivs	0x006e7374
        2c29d4:	72756374 	rsbvcs	r6, r5, #-805306367	; 0xd0000001
        2c29d8:	6f720000 	swivs	0x00720000
        2c29dc:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c29e0:	203a206c 	eorcss	r2, sl, ip, rrx
        2c29e4:	6f63616c 	swivs	0x0063616c
        2c29e8:	5f646563 	swipl	0x00646563
        2c29ec:	6c000000 	stcvs	0, cr0, [r0]
        2c29f0:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c29f4:	203a2063 	eorcss	r2, sl, r3, rrx
        2c29f8:	6f6e7374 	swivs	0x006e7374
        2c29fc:	616e745f 	cmnvs	lr, pc, asr r4
        2c2a00:	6465636c 	strvsbt	r6, [r5], -#876
        2c2a04:	00000000 	andeq	r0, r0, r0
        2c2a08:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c2a0c:	203a2062 	eorcss	r2, sl, r2, rrx
        2c2a10:	7265616b 	rsbvc	r6, r5, #-1073741798	; 0xc000001a
        2c2a14:	5f657870 	swipl	0x00657870
        2c2a18:	72000000 	andvc	r0, r0, #0	; 0x0
        2c2a1c:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c2a20:	203a2072 	eorcss	r2, sl, r2, ror r0
        2c2a24:	65747572 	ldrvsb	r7, [r4, -#1394]!	; fField1394
        2c2a28:	6e5f6578 	mrcvs	5, 2, r6, cr15, cr8, {3}
        2c2a2c:	70720000 	rsbvcs	r0, r2, r0
        2c2a30:	636f6e73 	cmnvs	pc, #1840	; 0x730
        2c2a34:	74616e74 	strvcbt	r6, [r1], -#3700
        2c2a38:	203a2074 	eorcss	r2, sl, r4, ror r0
        2c2a3c:	6f6b656e 	swivs	0x006b656e
        2c2a40:	434f4e53 	cmpmi	pc, #1328	; 0x530
        2c2a44:	54000000 	strpl	r0, [r0]
        2c2a48:	636f6e73 	cmnvs	pc, #1840	; 0x730
        2c2a4c:	74616e74 	strvcbt	r6, [r1], -#3700
        2c2a50:	203a2074 	eorcss	r2, sl, r4, ror r0
        2c2a54:	6f6b656e 	swivs	0x006b656e
        2c2a58:	494e5445 	stmmidb	lr, {r0, r2, r6, sl, ip, lr}^
        2c2a5c:	47455200 	strmib	r5, [r5, -r0, lsl #4]	; fField4
        2c2a60:	636f6e73 	cmnvs	pc, #1840	; 0x730
        2c2a64:	74616e74 	strvcbt	r6, [r1], -#3700
        2c2a68:	203a2074 	eorcss	r2, sl, r4, ror r0
        2c2a6c:	6f6b656e 	swivs	0x006b656e
        2c2a70:	5245414c 	subpl	r4, r5, #19	; 0x13
        2c2a74:	00000000 	andeq	r0, r0, r0
        2c2a78:	636f6e73 	cmnvs	pc, #1840	; 0x730
        2c2a7c:	74616e74 	strvcbt	r6, [r1], -#3700
        2c2a80:	203a2027 	eorcss	r2, sl, r7, lsr #32
        2c2a84:	5c272720 	stcpl	7, cr2, [r7], -#128
        2c2a88:	73657870 	cmnvc	r5, #7340032	; 0x700000
        2c2a8c:	72000000 	andvc	r0, r0, #0	; 0x0
        2c2a90:	636f6e73 	cmnvs	pc, #1840	; 0x730
        2c2a94:	74616e74 	strvcbt	r6, [r1], -#3700
        2c2a98:	203a2074 	eorcss	r2, sl, r4, ror r0
        2c2a9c:	6f6b656e 	swivs	0x006b656e
        2c2aa0:	52454643 	subpl	r4, r5, #70254592	; 0x4300000
        2c2aa4:	4f4e5354 	swimi	0x004e5354
        2c2aa8:	00000000 	andeq	r0, r0, r0
        2c2aac:	6c76616c 	ldfvse	f6, [r6], -#432
        2c2ab0:	7565203a 	strvcb	r2, [r5, -#58]!
        2c2ab4:	20746f6b 	rsbcss	r6, r4, fp, ror #30
        2c2ab8:	656e5359 	strvsb	r5, [lr, -#857]!
        2c2abc:	4d424f4c 	stcmil	15, cr4, [r2, -#304]
        2c2ac0:	00000000 	andeq	r0, r0, r0
        2c2ac4:	6c76616c 	ldfvse	f6, [r6], -#432
        2c2ac8:	7565203a 	strvcb	r2, [r5, -#58]!
        2c2acc:	20657870 	rsbcs	r7, r5, r0, ror r8
        2c2ad0:	7220272e 	eorvc	r2, r0, #12058624	; 0xb80000
        2c2ad4:	27202728 	strcs	r2, [r0, -r8, lsr #14]!
        2c2ad8:	27206578 	undefined
        2c2adc:	70722027 	rsbvcs	r2, r2, r7, lsr #32
        2c2ae0:	29270000 	stmcsdb	r7!, {}
        2c2ae4:	6c76616c 	ldfvse	f6, [r6], -#432
        2c2ae8:	7565203a 	strvcb	r2, [r5, -#58]!
        2c2aec:	20657870 	rsbcs	r7, r5, r0, ror r8
        2c2af0:	7220272e 	eorvc	r2, r0, #12058624	; 0xb80000
        2c2af4:	2720746f 	strcs	r7, [r0, -pc, ror #8]!	; fField8
        2c2af8:	6b656e53 	blvs	1c1e44c <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xdbf4>
        2c2afc:	594d424f 	stmpldb	sp, {r0, r1, r2, r3, r6, r9, lr}^
        2c2b00:	4c000000 	stcmi	0, cr0, [r0]
        2c2b04:	6c76616c 	ldfvse	f6, [r6], -#432
        2c2b08:	7565203a 	strvcb	r2, [r5, -#58]!
        2c2b0c:	20657870 	rsbcs	r7, r5, r0, ror r8
        2c2b10:	7220275b 	eorvc	r2, r0, #23855104	; 0x16c0000
        2c2b14:	27206578 	undefined
        2c2b18:	70722027 	rsbvcs	r2, r2, r7, lsr #32
        2c2b1c:	5d270000 	stcpl	0, cr0, [r7]
        2c2b20:	61737369 	cmnvs	r3, r9, ror #6
        2c2b24:	676e6d65 	strvsb	r6, [lr, -r5, ror #26]!
        2c2b28:	6e74203a 	mrcvs	0, 3, r2, cr4, cr10, {1}
        2c2b2c:	206c7661 	rsbcs	r7, ip, r1, ror #12
        2c2b30:	6c756520 	ldcvsl	5, cr6, [r5], -#128
        2c2b34:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c2b3c <TCompiler::Error(long, RefVar const &)+0x960>
        2c2b38:	6e415353 	mcrvs	3, 2, r5, cr1, cr3, {2}
        2c2b3c:	49474e20 	stmmidb	r7, {r5, r9, sl, fp, lr}^
        2c2b40:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c2b44:	00000000 	andeq	r0, r0, r0
        2c2b48:	6c6f6361 	stcvsl	3, cr6, [pc], -#388
        2c2b4c:	6c5f6465 	mrrcvs	4, 6, r6, pc, cr5
        2c2b50:	636c203a 	cmnvs	ip, #58	; 0x3a
        2c2b54:	20746f6b 	rsbcss	r6, r4, fp, ror #30
        2c2b58:	656e4c4f 	strvsb	r4, [lr, -#3151]!
        2c2b5c:	43414c20 	cmpmi	r1, #8192	; 0x2000
        2c2b60:	6c6f6361 	stcvsl	3, cr6, [pc], -#388
        2c2b64:	6c5f706c 	mrrcvs	0, 6, r7, pc, cr12
        2c2b68:	75730000 	ldrvcb	r0, [r3]!
        2c2b6c:	636f6e73 	cmnvs	pc, #1840	; 0x730
        2c2b70:	74616e74 	strvcbt	r6, [r1], -#3700
        2c2b74:	5f646563 	swipl	0x00646563
        2c2b78:	6c203a20 	stcvs	10, cr3, [r0], -#128
        2c2b7c:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c2b84 <TCompiler::Error(long, RefVar const &)+0x9a8>
        2c2b80:	6e434f4e 	cdpvs	15, 4, cr4, cr3, cr14, {2}
        2c2b84:	5354414e 	cmppl	r4, #-2147483629	; 0x80000013
        2c2b88:	5420636f 	strplt	r6, [r0], -#879
        2c2b8c:	6e737461 	cdpvs	4, 7, cr7, cr3, cr1, {3}
        2c2b90:	6e745f69 	cdpvs	15, 7, cr5, cr4, cr9, {3}
        2c2b94:	6e69745f 	mcrvs	4, 3, r7, cr9, cr15, {2}
        2c2b98:	706c7573 	rsbvc	r7, ip, r3, ror r5
        2c2b9c:	00000000 	andeq	r0, r0, r0
        2c2ba0:	676c6f62 	strvsb	r6, [ip, -r2, ror #30]!
        2c2ba4:	616c5f64 	cmnvs	ip, r4, ror #30
        2c2ba8:	65636c20 	strvsb	r6, [r3, -#3104]!
        2c2bac:	3a20746f 	bcc	adfd70 <ROM$$Size+0x3c0124>
        2c2bb0:	6b656e47 	blvs	1c1e4d4 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xdc7c>
        2c2bb4:	4c4f4241 	mcrrmi	2, 4, r4, pc, cr1
        2c2bb8:	4c20746f 	stcmi	4, cr7, [r0], -#444
        2c2bbc:	6b656e53 	blvs	1c1e510 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xdcb8>
        2c2bc0:	594d424f 	stmpldb	sp, {r0, r1, r2, r3, r6, r9, lr}^
        2c2bc4:	4c000000 	stcmi	0, cr0, [r0]
        2c2bc8:	676c6f62 	strvsb	r6, [ip, -r2, ror #30]!
        2c2bcc:	616c5f64 	cmnvs	ip, r4, ror #30
        2c2bd0:	65636c20 	strvsb	r6, [r3, -#3104]!
        2c2bd4:	3a20746f 	bcc	adfd98 <ROM$$Size+0x3c014c>
        2c2bd8:	6b656e47 	blvs	1c1e4fc <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xdca4>
        2c2bdc:	4c4f4241 	mcrrmi	2, 4, r4, pc, cr1
        2c2be0:	4c20746f 	stcmi	4, cr7, [r0], -#444
        2c2be4:	6b656e53 	blvs	1c1e538 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xdce0>
        2c2be8:	594d424f 	stmpldb	sp, {r0, r1, r2, r3, r6, r9, lr}^
        2c2bec:	4c20746f 	stcmi	4, cr7, [r0], -#444
        2c2bf0:	6b656e41 	blvs	1c1e4fc <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xdca4>
        2c2bf4:	53534947 	cmppl	r3, #1163264	; 0x11c000
        2c2bf8:	4e206578 	mcrmi	5, 1, r6, cr0, cr8, {3}
        2c2bfc:	70720000 	rsbvcs	r0, r2, r0
        2c2c00:	676c6f62 	strvsb	r6, [ip, -r2, ror #30]!
        2c2c04:	616c5f64 	cmnvs	ip, r4, ror #30
        2c2c08:	65636c20 	strvsb	r6, [r3, -#3104]!
        2c2c0c:	3a20746f 	bcc	adfdd0 <ROM$$Size+0x3c0184>
        2c2c10:	6b656e47 	blvs	1c1e534 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xdcdc>
        2c2c14:	4c4f4241 	mcrrmi	2, 4, r4, pc, cr1
        2c2c18:	4c20746f 	stcmi	4, cr7, [r0], -#444
        2c2c1c:	6b656e53 	blvs	1c1e570 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xdd18>
        2c2c20:	594d424f 	stmpldb	sp, {r0, r1, r2, r3, r6, r9, lr}^
        2c2c24:	4c202728 	stcmi	7, cr2, [r0], -#160
        2c2c28:	2720666f 	strcs	r6, [r0, -pc, ror #12]!	; fField12
        2c2c2c:	726d616c 	rsbvc	r6, sp, #27	; 0x1b
        2c2c30:	5f617267 	swipl	0x00617267
        2c2c34:	73202729 	teqvc	r0, #10747904	; 0xa40000
        2c2c38:	27206578 	undefined
        2c2c3c:	70720000 	rsbvcs	r0, r2, r0
        2c2c40:	676c6f62 	strvsb	r6, [ip, -r2, ror #30]!
        2c2c44:	616c5f64 	cmnvs	ip, r4, ror #30
        2c2c48:	65636c20 	strvsb	r6, [r3, -#3104]!
        2c2c4c:	3a20746f 	bcc	adfe10 <ROM$$Size+0x3c01c4>
        2c2c50:	6b656e46 	blvs	1c1e570 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xdd18>
        2c2c54:	554e4320 	strplb	r4, [lr, -#800]
        2c2c58:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c2c60 <TCompiler::Error(long, RefVar const &)+0xa84>
        2c2c5c:	6e53594d 	cdpvs	9, 5, cr5, cr3, cr13, {2}
        2c2c60:	424f4c20 	submi	r4, pc, #8192	; 0x2000
        2c2c64:	27282720 	strcs	r2, [r8, -r0, lsr #14]!
        2c2c68:	666f726d 	strvsbt	r7, [pc], -sp, ror #4	; fField4
        2c2c6c:	616c5f61 	cmnvs	ip, r1, ror #30
        2c2c70:	72677320 	rsbvc	r7, r7, #-2147483648	; 0x80000000
        2c2c74:	27292720 	strcs	r2, [r9, -r0, lsr #14]!
        2c2c78:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c2c7c:	00000000 	andeq	r0, r0, r0
        2c2c80:	62726561 	rsbvss	r6, r2, #406847488	; 0x18400000
        2c2c84:	6b5f6578 	blvs	1a9c26c <TParagraphView::$NearTabStop(long)+0x470>
        2c2c88:	7072203a 	rsbvcs	r2, r2, sl, lsr r0
        2c2c8c:	20746f6b 	rsbcss	r6, r4, fp, ror #30
        2c2c90:	656e4252 	strvsb	r4, [lr, -#594]!
        2c2c94:	45414b20 	strmib	r4, [r1, -#2848]
        2c2c98:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c2c9c:	00000000 	andeq	r0, r0, r0
        2c2ca0:	62726561 	rsbvss	r6, r2, #406847488	; 0x18400000
        2c2ca4:	6b5f6578 	blvs	1a9c28c <TParagraphView::$NearTabStop(long)+0x490>
        2c2ca8:	7072203a 	rsbvcs	r2, r2, sl, lsr r0
        2c2cac:	20746f6b 	rsbcss	r6, r4, fp, ror #30
        2c2cb0:	656e4252 	strvsb	r4, [lr, -#594]!
        2c2cb4:	45414b00 	strmib	r4, [r1, -#2816]
        2c2cb8:	72657475 	rsbvc	r7, r5, #1962934272	; 0x75000000
        2c2cbc:	726e5f65 	rsbvc	r5, lr, #404	; 0x194
        2c2cc0:	78707220 	ldmvcda	r0!, {r5, r9, ip, sp, lr}^
        2c2cc4:	3a20746f 	bcc	adfe88 <ROM$$Size+0x3c023c>
        2c2cc8:	6b656e52 	blvs	1c1e618 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xddc0>
        2c2ccc:	45545552 	ldrmib	r5, [r4, -#1362]	; fField1362
        2c2cd0:	4e206578 	mcrmi	5, 1, r6, cr0, cr8, {3}
        2c2cd4:	70720000 	rsbvcs	r0, r2, r0
        2c2cd8:	72657475 	rsbvc	r7, r5, #1962934272	; 0x75000000
        2c2cdc:	726e5f65 	rsbvc	r5, lr, #404	; 0x194
        2c2ce0:	78707220 	ldmvcda	r0!, {r5, r9, ip, sp, lr}^
        2c2ce4:	3a20746f 	bcc	adfea8 <ROM$$Size+0x3c025c>
        2c2ce8:	6b656e52 	blvs	1c1e638 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xdde0>
        2c2cec:	45545552 	ldrmib	r5, [r4, -#1362]	; fField1362
        2c2cf0:	4e000000 	cdpmi	0, 0, cr0, cr0, cr0, {0}
        2c2cf4:	66756e63 	ldrvsbt	r6, [r5], -r3, ror #28	; fField28
        2c2cf8:	616c6c5f 	cmnvs	ip, pc, asr ip
        2c2cfc:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c2d00:	203a2074 	eorcss	r2, sl, r4, ror r0
        2c2d04:	6f6b656e 	swivs	0x006b656e
        2c2d08:	53594d42 	cmppl	r9, #4224	; 0x1080
        2c2d0c:	4f4c2027 	swimi	0x004c2027
        2c2d10:	28272065 	stmcsda	r7!, {r0, r2, r5, r6, sp}
        2c2d14:	7870725f 	ldmvcda	r0!, {r0, r1, r2, r3, r4, r6, r9, ip, sp, lr}^
        2c2d18:	73746172 	cmnvc	r4, #-2147483620	; 0x8000001c
        2c2d1c:	20272927 	eorcs	r2, r7, r7, lsr #18
        2c2d20:	00000000 	andeq	r0, r0, r0
        2c2d24:	66756e63 	ldrvsbt	r6, [r5], -r3, ror #28	; fField28
        2c2d28:	616c6c5f 	cmnvs	ip, pc, asr ip
        2c2d2c:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c2d30:	203a2074 	eorcss	r2, sl, r4, ror r0
        2c2d34:	6f6b656e 	swivs	0x006b656e
        2c2d38:	43414c4c 	cmpmi	r1, #19456	; 0x4c00
        2c2d3c:	20657870 	rsbcs	r7, r5, r0, ror r8
        2c2d40:	7220746f 	eorvc	r7, r0, #1862270976	; 0x6f000000
        2c2d44:	6b656e57 	blvs	1c1e6a8 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xde50>
        2c2d48:	49544820 	ldmmidb	r4, {r5, fp, lr}^
        2c2d4c:	27282720 	strcs	r2, [r8, -r0, lsr #14]!
        2c2d50:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c2d54:	5f737461 	swipl	0x00737461
        2c2d58:	72202729 	eorvc	r2, r0, #10747904	; 0xa40000
        2c2d5c:	27000000 	strcs	r0, [r0, -r0]
        2c2d60:	73656e64 	cmnvc	r5, #1600	; 0x640
        2c2d64:	5f657869 	swipl	0x00657869
        2c2d68:	7374735f 	cmnvc	r4, #2080374785	; 0x7c000001
        2c2d6c:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c2d70:	203a2065 	eorcss	r2, sl, r5, rrx
        2c2d74:	78707220 	ldmvcda	r0!, {r5, r9, ip, sp, lr}^
        2c2d78:	273a2720 	ldrcs	r2, [sl, -r0, lsr #14]!
        2c2d7c:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c2d84 <TCompiler::Error(long, RefVar const &)+0xba8>
        2c2d80:	6e53594d 	cdpvs	9, 5, cr5, cr3, cr13, {2}
        2c2d84:	424f4c00 	submi	r4, pc, #0	; 0x0
        2c2d88:	73656e64 	cmnvc	r5, #1600	; 0x640
        2c2d8c:	5f657869 	swipl	0x00657869
        2c2d90:	7374735f 	cmnvc	r4, #2080374785	; 0x7c000001
        2c2d94:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c2d98:	203a2027 	eorcss	r2, sl, r7, lsr #32
        2c2d9c:	3a272074 	bcc	c8af74 <ROM$$Size+0x56b328>
        2c2da0:	6f6b656e 	swivs	0x006b656e
        2c2da4:	53594d42 	cmppl	r9, #4224	; 0x1080
        2c2da8:	4f4c0000 	swimi	0x004c0000
        2c2dac:	73656e64 	cmnvc	r5, #1600	; 0x640
        2c2db0:	5f657870 	swipl	0x00657870
        2c2db4:	72203a20 	eorvc	r3, r0, #131072	; 0x20000
        2c2db8:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c2dbc:	20273a27 	eorcs	r3, r7, r7, lsr #20
        2c2dc0:	20746f6b 	rsbcss	r6, r4, fp, ror #30
        2c2dc4:	656e5359 	strvsb	r5, [lr, -#857]!
        2c2dc8:	4d424f4c 	stcmil	15, cr4, [r2, -#304]
        2c2dcc:	20272827 	eorcs	r2, r7, r7, lsr #16
        2c2dd0:	20657870 	rsbcs	r7, r5, r0, ror r8
        2c2dd4:	725f7374 	subvcs	r7, pc, #-805306367	; 0xd0000001
        2c2dd8:	61722027 	cmnvs	r2, r7, lsr #32
        2c2ddc:	29270000 	stmcsdb	r7!, {}
        2c2de0:	73656e64 	cmnvc	r5, #1600	; 0x640
        2c2de4:	5f657870 	swipl	0x00657870
        2c2de8:	72203a20 	eorvc	r3, r0, #131072	; 0x20000
        2c2dec:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c2df4 <TCompiler::Error(long, RefVar const &)+0xc18>
        2c2df0:	6e494e48 	cdpvs	14, 4, cr4, cr9, cr8, {2}
        2c2df4:	45524954 	ldrmib	r4, [r2, -#2388]
        2c2df8:	45442027 	strmib	r2, [r4, -#39]	; fField39
        2c2dfc:	3a272074 	bcc	c8afd4 <ROM$$Size+0x56b388>
        2c2e00:	6f6b656e 	swivs	0x006b656e
        2c2e04:	53594d42 	cmppl	r9, #4224	; 0x1080
        2c2e08:	4f4c2027 	swimi	0x004c2027
        2c2e0c:	28272065 	stmcsda	r7!, {r0, r2, r5, r6, sp}
        2c2e10:	7870725f 	ldmvcda	r0!, {r0, r1, r2, r3, r4, r6, r9, ip, sp, lr}^
        2c2e14:	73746172 	cmnvc	r4, #-2147483620	; 0x8000001c
        2c2e18:	20272927 	eorcs	r2, r7, r7, lsr #18
        2c2e1c:	00000000 	andeq	r0, r0, r0
        2c2e20:	73656e64 	cmnvc	r5, #1600	; 0x640
        2c2e24:	5f657870 	swipl	0x00657870
        2c2e28:	72203a20 	eorvc	r3, r0, #131072	; 0x20000
        2c2e2c:	273a2720 	ldrcs	r2, [sl, -r0, lsr #14]!
        2c2e30:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c2e38 <TCompiler::Error(long, RefVar const &)+0xc5c>
        2c2e34:	6e53594d 	cdpvs	9, 5, cr5, cr3, cr13, {2}
        2c2e38:	424f4c20 	submi	r4, pc, #8192	; 0x2000
        2c2e3c:	27282720 	strcs	r2, [r8, -r0, lsr #14]!
        2c2e40:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c2e44:	5f737461 	swipl	0x00737461
        2c2e48:	72202729 	eorvc	r2, r0, #10747904	; 0xa40000
        2c2e4c:	27000000 	strcs	r0, [r0, -r0]
        2c2e50:	73656e64 	cmnvc	r5, #1600	; 0x640
        2c2e54:	5f657870 	swipl	0x00657870
        2c2e58:	72203a20 	eorvc	r3, r0, #131072	; 0x20000
        2c2e5c:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c2e60:	20746f6b 	rsbcss	r6, r4, fp, ror #30
        2c2e64:	656e5345 	strvsb	r5, [lr, -#837]!
        2c2e68:	4e444946 	cdpmi	9, 4, cr4, cr4, cr6, {2}
        2c2e6c:	44454649 	strmib	r4, [r5], -#1609
        2c2e70:	4e454420 	cdpmi	4, 4, cr4, cr5, cr0, {1}
        2c2e74:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c2e7c <TCompiler::Error(long, RefVar const &)+0xca0>
        2c2e78:	6e53594d 	cdpvs	9, 5, cr5, cr3, cr13, {2}
        2c2e7c:	424f4c20 	submi	r4, pc, #8192	; 0x2000
        2c2e80:	27282720 	strcs	r2, [r8, -r0, lsr #14]!
        2c2e84:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c2e88:	5f737461 	swipl	0x00737461
        2c2e8c:	72202729 	eorvc	r2, r0, #10747904	; 0xa40000
        2c2e90:	27000000 	strcs	r0, [r0, -r0]
        2c2e94:	73656e64 	cmnvc	r5, #1600	; 0x640
        2c2e98:	5f657870 	swipl	0x00657870
        2c2e9c:	72203a20 	eorvc	r3, r0, #131072	; 0x20000
        2c2ea0:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c2ea8 <TCompiler::Error(long, RefVar const &)+0xccc>
        2c2ea4:	6e494e48 	cdpvs	14, 4, cr4, cr9, cr8, {2}
        2c2ea8:	45524954 	ldrmib	r4, [r2, -#2388]
        2c2eac:	45442074 	strmib	r2, [r4, -#116]	; fField116
        2c2eb0:	6f6b656e 	swivs	0x006b656e
        2c2eb4:	53454e44 	cmppl	r5, #1088	; 0x440
        2c2eb8:	49464445 	stmmidb	r6, {r0, r2, r6, sl, lr}^
        2c2ebc:	46494e45 	strmib	r4, [r9], -r5, asr #28	; fField28
        2c2ec0:	4420746f 	strmit	r7, [r0], -#1135
        2c2ec4:	6b656e53 	blvs	1c1e818 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xdfc0>
        2c2ec8:	594d424f 	stmpldb	sp, {r0, r1, r2, r3, r6, r9, lr}^
        2c2ecc:	4c202728 	stcmi	7, cr2, [r0], -#160
        2c2ed0:	27206578 	undefined
        2c2ed4:	70725f73 	rsbvcs	r5, r2, r3, ror pc
        2c2ed8:	74617220 	strvcbt	r7, [r1], -#544
        2c2edc:	27292700 	strcs	r2, [r9, -r0, lsl #14]!
        2c2ee0:	73656e64 	cmnvc	r5, #1600	; 0x640
        2c2ee4:	5f657870 	swipl	0x00657870
        2c2ee8:	72203a20 	eorvc	r3, r0, #131072	; 0x20000
        2c2eec:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c2ef4 <TCompiler::Error(long, RefVar const &)+0xd18>
        2c2ef0:	6e53454e 	cdpvs	5, 5, cr4, cr3, cr14, {2}
        2c2ef4:	44494644 	strmib	r4, [r9], -#1604
        2c2ef8:	4546494e 	strmib	r4, [r6, -#2382]
        2c2efc:	45442074 	strmib	r2, [r4, -#116]	; fField116
        2c2f00:	6f6b656e 	swivs	0x006b656e
        2c2f04:	53594d42 	cmppl	r9, #4224	; 0x1080
        2c2f08:	4f4c2027 	swimi	0x004c2027
        2c2f0c:	28272065 	stmcsda	r7!, {r0, r2, r5, r6, sp}
        2c2f10:	7870725f 	ldmvcda	r0!, {r0, r1, r2, r3, r4, r6, r9, ip, sp, lr}^
        2c2f14:	73746172 	cmnvc	r4, #-2147483620	; 0x8000001c
        2c2f18:	20272927 	eorcs	r2, r7, r7, lsr #18
        2c2f1c:	00000000 	andeq	r0, r0, r0
        2c2f20:	69665f65 	stmvsdb	r6!, {r0, r2, r5, r6, r8, r9, sl, fp, ip, lr}^
        2c2f24:	78707220 	ldmvcda	r0!, {r5, r9, ip, sp, lr}^
        2c2f28:	3a20746f 	bcc	ae00ec <ROM$$Size+0x3c04a0>
        2c2f2c:	6b656e49 	blvs	1c1e858 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xe000>
        2c2f30:	46206578 	undefined
        2c2f34:	70722074 	rsbvcs	r2, r2, r4, ror r0
        2c2f38:	6f6b656e 	swivs	0x006b656e
        2c2f3c:	5448454e 	strplb	r4, [r8], -#1358
        2c2f40:	20657870 	rsbcs	r7, r5, r0, ror r8
        2c2f44:	7220746f 	eorvc	r7, r0, #1862270976	; 0x6f000000
        2c2f48:	6b656e45 	blvs	1c1e864 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xe00c>
        2c2f4c:	4c534520 	mrrcmi	5, 2, r4, r3, cr0
        2c2f50:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c2f54:	00000000 	andeq	r0, r0, r0
        2c2f58:	69665f65 	stmvsdb	r6!, {r0, r2, r5, r6, r8, r9, sl, fp, ip, lr}^
        2c2f5c:	78707220 	ldmvcda	r0!, {r5, r9, ip, sp, lr}^
        2c2f60:	3a20746f 	bcc	ae0124 <ROM$$Size+0x3c04d8>
        2c2f64:	6b656e49 	blvs	1c1e890 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xe038>
        2c2f68:	46206578 	undefined
        2c2f6c:	70722074 	rsbvcs	r2, r2, r4, ror r0
        2c2f70:	6f6b656e 	swivs	0x006b656e
        2c2f74:	5448454e 	strplb	r4, [r8], -#1358
        2c2f78:	20657870 	rsbcs	r7, r5, r0, ror r8
        2c2f7c:	72000000 	andvc	r0, r0, #0	; 0x0
        2c2f80:	6c6f6f70 	stcvsl	15, cr6, [pc], -#448
        2c2f84:	5f657870 	swipl	0x00657870
        2c2f88:	72203a20 	eorvc	r3, r0, #131072	; 0x20000
        2c2f8c:	696e6669 	stmvsdb	lr!, {r0, r3, r5, r6, r9, sl, sp, lr}^
        2c2f90:	6e697465 	cdpvs	4, 6, cr7, cr9, cr5, {3}
        2c2f94:	5f6c6f6f 	swipl	0x006c6f6f
        2c2f98:	70000000 	andvc	r0, r0, r0
        2c2f9c:	6c6f6f70 	stcvsl	15, cr6, [pc], -#448
        2c2fa0:	5f657870 	swipl	0x00657870
        2c2fa4:	72203a20 	eorvc	r3, r0, #131072	; 0x20000
        2c2fa8:	666f725f 	undefined
        2c2fac:	6c6f6f70 	stcvsl	15, cr6, [pc], -#448
        2c2fb0:	00000000 	andeq	r0, r0, r0
        2c2fb4:	6c6f6f70 	stcvsl	15, cr6, [pc], -#448
        2c2fb8:	5f657870 	swipl	0x00657870
        2c2fbc:	72203a20 	eorvc	r3, r0, #131072	; 0x20000
        2c2fc0:	77697468 	strvcb	r7, [r9, -r8, ror #8]!	; fField8
        2c2fc4:	5f6c6f6f 	swipl	0x006c6f6f
        2c2fc8:	70000000 	andvc	r0, r0, r0
        2c2fcc:	6c6f6f70 	stcvsl	15, cr6, [pc], -#448
        2c2fd0:	5f657870 	swipl	0x00657870
        2c2fd4:	72203a20 	eorvc	r3, r0, #131072	; 0x20000
        2c2fd8:	7768696c 	strvcb	r6, [r8, -ip, ror #18]!
        2c2fdc:	655f6c6f 	ldrvsb	r6, [pc, #fffff391]	; 2c2375 <TCompiler::Error(long, RefVar const &)+0x199>
        2c2fe0:	6f700000 	swivs	0x00700000
        2c2fe4:	6c6f6f70 	stcvsl	15, cr6, [pc], -#448
        2c2fe8:	5f657870 	swipl	0x00657870
        2c2fec:	72203a20 	eorvc	r3, r0, #131072	; 0x20000
        2c2ff0:	72657065 	rsbvc	r7, r5, #101	; 0x65
        2c2ff4:	61745f6c 	cmnvs	r4, ip, ror #30
        2c2ff8:	6f6f7000 	swivs	0x006f7000
        2c2ffc:	696e6669 	stmvsdb	lr!, {r0, r3, r5, r6, r9, sl, sp, lr}^
        2c3000:	6e697465 	cdpvs	4, 6, cr7, cr9, cr5, {3}
        2c3004:	5f6c6f6f 	swipl	0x006c6f6f
        2c3008:	70203a20 	eorvc	r3, r0, r0, lsr #20
        2c300c:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c3014 <TCompiler::Error(long, RefVar const &)+0xe38>
        2c3010:	6e4c4f4f 	cdpvs	15, 4, cr4, cr12, cr15, {2}
        2c3014:	50206578 	eorpl	r6, r0, r8, ror r5
        2c3018:	70720000 	rsbvcs	r0, r2, r0
        2c301c:	666f725f 	undefined
        2c3020:	6c6f6f70 	stcvsl	15, cr6, [pc], -#448
        2c3024:	203a2074 	eorcss	r2, sl, r4, ror r0
        2c3028:	6f6b656e 	swivs	0x006b656e
        2c302c:	464f5220 	strmib	r5, [pc], -r0, lsr #4	; fField4
        2c3030:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c3038 <TCompiler::Error(long, RefVar const &)+0xe5c>
        2c3034:	6e53594d 	cdpvs	9, 5, cr5, cr3, cr13, {2}
        2c3038:	424f4c20 	submi	r4, pc, #8192	; 0x2000
        2c303c:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c3044 <TCompiler::Error(long, RefVar const &)+0xe68>
        2c3040:	6e415353 	mcrvs	3, 2, r5, cr1, cr3, {2}
        2c3044:	49474e20 	stmmidb	r7, {r5, r9, sl, fp, lr}^
        2c3048:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c304c:	20746f6b 	rsbcss	r6, r4, fp, ror #30
        2c3050:	656e544f 	strvsb	r5, [lr, -#1103]!
        2c3054:	20657870 	rsbcs	r7, r5, r0, ror r8
        2c3058:	7220746f 	eorvc	r7, r0, #1862270976	; 0x6f000000
        2c305c:	6b656e44 	blvs	1c1e974 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xe11c>
        2c3060:	4f206578 	swimi	0x00206578
        2c3064:	70720000 	rsbvcs	r0, r2, r0
        2c3068:	666f725f 	undefined
        2c306c:	6c6f6f70 	stcvsl	15, cr6, [pc], -#448
        2c3070:	203a2074 	eorcss	r2, sl, r4, ror r0
        2c3074:	6f6b656e 	swivs	0x006b656e
        2c3078:	464f5220 	strmib	r5, [pc], -r0, lsr #4	; fField4
        2c307c:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c3084 <TCompiler::Error(long, RefVar const &)+0xea8>
        2c3080:	6e53594d 	cdpvs	9, 5, cr5, cr3, cr13, {2}
        2c3084:	424f4c20 	submi	r4, pc, #8192	; 0x2000
        2c3088:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c3090 <TCompiler::Error(long, RefVar const &)+0xeb4>
        2c308c:	6e415353 	mcrvs	3, 2, r5, cr1, cr3, {2}
        2c3090:	49474e20 	stmmidb	r7, {r5, r9, sl, fp, lr}^
        2c3094:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c3098:	20746f6b 	rsbcss	r6, r4, fp, ror #30
        2c309c:	656e544f 	strvsb	r5, [lr, -#1103]!
        2c30a0:	20657870 	rsbcs	r7, r5, r0, ror r8
        2c30a4:	7220746f 	eorvc	r7, r0, #1862270976	; 0x6f000000
        2c30a8:	6b656e42 	blvs	1c1e9b8 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xe160>
        2c30ac:	59206578 	stmpldb	r0!, {r3, r4, r5, r6, r8, sl, sp, lr}
        2c30b0:	70722074 	rsbvcs	r2, r2, r4, ror r0
        2c30b4:	6f6b656e 	swivs	0x006b656e
        2c30b8:	444f2065 	strmib	r2, [pc], #65	; 2c30c0 <TCompiler::Error(long, RefVar const &)+0xee4>
        2c30bc:	78707200 	ldmvcda	r0!, {r9, ip, sp, lr}^
        2c30c0:	77697468 	strvcb	r7, [r9, -r8, ror #8]!	; fField8
        2c30c4:	5f6c6f6f 	swipl	0x006c6f6f
        2c30c8:	70203a20 	eorvc	r3, r0, r0, lsr #20
        2c30cc:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c30d4 <TCompiler::Error(long, RefVar const &)+0xef8>
        2c30d0:	6e464f52 	mcrvs	15, 2, r4, cr6, cr2, {2}
        2c30d4:	45414348 	strmib	r4, [r1, -#840]
        2c30d8:	20746f6b 	rsbcss	r6, r4, fp, ror #30
        2c30dc:	656e5359 	strvsb	r5, [lr, -#857]!
        2c30e0:	4d424f4c 	stcmil	15, cr4, [r2, -#304]
        2c30e4:	20272c27 	eorcs	r2, r7, r7, lsr #24
        2c30e8:	20746f6b 	rsbcss	r6, r4, fp, ror #30
        2c30ec:	656e5359 	strvsb	r5, [lr, -#857]!
        2c30f0:	4d424f4c 	stcmil	15, cr4, [r2, -#304]
        2c30f4:	206f7074 	rsbcs	r7, pc, r4, ror r0
        2c30f8:	696f6e61 	stmvsdb	pc!, {r0, r5, r6, r9, sl, fp, sp, lr}^
        2c30fc:	6c5f6465 	mrrcvs	4, 6, r6, pc, cr5
        2c3100:	65706c79 	ldrvsb	r6, [r0, -#3193]!
        2c3104:	20746f6b 	rsbcss	r6, r4, fp, ror #30
        2c3108:	656e494e 	strvsb	r4, [lr, -#2382]!
        2c310c:	20657870 	rsbcs	r7, r5, r0, ror r8
        2c3110:	72207769 	eorvc	r7, r0, #27525120	; 0x1a40000
        2c3114:	74687665 	strvcbt	r7, [r8], -#1637
        2c3118:	72622065 	rsbvc	r2, r2, #101	; 0x65
        2c311c:	78707200 	ldmvcda	r0!, {r9, ip, sp, lr}^
        2c3120:	77697468 	strvcb	r7, [r9, -r8, ror #8]!	; fField8
        2c3124:	5f6c6f6f 	swipl	0x006c6f6f
        2c3128:	70203a20 	eorvc	r3, r0, r0, lsr #20
        2c312c:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c3134 <TCompiler::Error(long, RefVar const &)+0xf58>
        2c3130:	6e464f52 	mcrvs	15, 2, r4, cr6, cr2, {2}
        2c3134:	45414348 	strmib	r4, [r1, -#840]
        2c3138:	20746f6b 	rsbcss	r6, r4, fp, ror #30
        2c313c:	656e5359 	strvsb	r5, [lr, -#857]!
        2c3140:	4d424f4c 	stcmil	15, cr4, [r2, -#304]
        2c3144:	206f7074 	rsbcs	r7, pc, r4, ror r0
        2c3148:	696f6e61 	stmvsdb	pc!, {r0, r5, r6, r9, sl, fp, sp, lr}^
        2c314c:	6c5f6465 	mrrcvs	4, 6, r6, pc, cr5
        2c3150:	65706c79 	ldrvsb	r6, [r0, -#3193]!
        2c3154:	20746f6b 	rsbcss	r6, r4, fp, ror #30
        2c3158:	656e494e 	strvsb	r4, [lr, -#2382]!
        2c315c:	20657870 	rsbcs	r7, r5, r0, ror r8
        2c3160:	72207769 	eorvc	r7, r0, #27525120	; 0x1a40000
        2c3164:	74687665 	strvcbt	r7, [r8], -#1637
        2c3168:	72622065 	rsbvc	r2, r2, #101	; 0x65
        2c316c:	78707200 	ldmvcda	r0!, {r9, ip, sp, lr}^
        2c3170:	6f707469 	swivs	0x00707469
        2c3174:	6f6e616c 	swivs	0x006e616c
        2c3178:	5f646565 	swipl	0x00646565
        2c317c:	706c7920 	rsbvc	r7, ip, r0, lsr #18
        2c3180:	3a000000 	bcc	2c3188 <TCompiler::Error(long, RefVar const &)+0xfac>
        2c3184:	6f707469 	swivs	0x00707469
        2c3188:	6f6e616c 	swivs	0x006e616c
        2c318c:	5f646565 	swipl	0x00646565
        2c3190:	706c7920 	rsbvc	r7, ip, r0, lsr #18
        2c3194:	3a20746f 	bcc	ae0358 <ROM$$Size+0x3c070c>
        2c3198:	6b656e44 	blvs	1c1eab0 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xe258>
        2c319c:	4545504c 	strmib	r5, [r5, -#76]
        2c31a0:	59000000 	stmpldb	r0, {}
        2c31a4:	77697468 	strvcb	r7, [r9, -r8, ror #8]!	; fField8
        2c31a8:	76657262 	strvcbt	r7, [r5], -r2, ror #4	; fField4
        2c31ac:	203a2074 	eorcss	r2, sl, r4, ror r0
        2c31b0:	6f6b656e 	swivs	0x006b656e
        2c31b4:	444f0000 	strmib	r0, [pc], #0	; 2c31bc <TCompiler::Error(long, RefVar const &)+0xfe0>
        2c31b8:	77697468 	strvcb	r7, [r9, -r8, ror #8]!	; fField8
        2c31bc:	76657262 	strvcbt	r7, [r5], -r2, ror #4	; fField4
        2c31c0:	203a2074 	eorcss	r2, sl, r4, ror r0
        2c31c4:	6f6b656e 	swivs	0x006b656e
        2c31c8:	53594d42 	cmppl	r9, #4224	; 0x1080
        2c31cc:	4f4c0000 	swimi	0x004c0000
        2c31d0:	7768696c 	strvcb	r6, [r8, -ip, ror #18]!
        2c31d4:	655f6c6f 	ldrvsb	r6, [pc, #fffff391]	; 2c256d <TCompiler::Error(long, RefVar const &)+0x391>
        2c31d8:	6f70203a 	swivs	0x0070203a
        2c31dc:	20746f6b 	rsbcss	r6, r4, fp, ror #30
        2c31e0:	656e5748 	strvsb	r5, [lr, -#1864]!
        2c31e4:	494c4520 	stmmidb	ip, {r5, r8, sl, lr}^
        2c31e8:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c31ec:	20746f6b 	rsbcss	r6, r4, fp, ror #30
        2c31f0:	656e444f 	strvsb	r4, [lr, -#1103]!
        2c31f4:	20657870 	rsbcs	r7, r5, r0, ror r8
        2c31f8:	72000000 	andvc	r0, r0, #0	; 0x0
        2c31fc:	72657065 	rsbvc	r7, r5, #101	; 0x65
        2c3200:	61745f6c 	cmnvs	r4, ip, ror #30
        2c3204:	6f6f7020 	swivs	0x006f7020
        2c3208:	3a20746f 	bcc	ae03cc <ROM$$Size+0x3c0780>
        2c320c:	6b656e52 	blvs	1c1eb5c <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xe304>
        2c3210:	45504541 	ldrmib	r4, [r0, -#1345]
        2c3214:	54206578 	strplt	r6, [r0], -#1400
        2c3218:	70725f73 	rsbvcs	r5, r2, r3, ror pc
        2c321c:	65712074 	ldrvsb	r2, [r1, -#116]!	; fField116
        2c3220:	6f6b656e 	swivs	0x006b656e
        2c3224:	554e5449 	strplb	r5, [lr, -#1097]
        2c3228:	4c206578 	stcmi	5, cr6, [r0], -#480
        2c322c:	70720000 	rsbvcs	r0, r2, r0
        2c3230:	6c616d62 	stcvsl	13, cr6, [r1], -#392
        2c3234:	64615f65 	strvsbt	r5, [r1], -#3941
        2c3238:	78707220 	ldmvcda	r0!, {r5, r9, ip, sp, lr}^
        2c323c:	3a20746f 	bcc	ae0400 <ROM$$Size+0x3c07b4>
        2c3240:	6b656e46 	blvs	1c1eb60 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xe308>
        2c3244:	554e4320 	strplb	r4, [lr, -#800]
        2c3248:	27282720 	strcs	r2, [r8, -r0, lsr #14]!
        2c324c:	666f726d 	strvsbt	r7, [pc], -sp, ror #4	; fField4
        2c3250:	616c5f61 	cmnvs	ip, r1, ror #30
        2c3254:	72677320 	rsbvc	r7, r7, #-2147483648	; 0x80000000
        2c3258:	27292720 	strcs	r2, [r9, -r0, lsr #14]!
        2c325c:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c3260:	00000000 	andeq	r0, r0, r0
        2c3264:	6c616d62 	stcvsl	13, cr6, [r1], -#392
        2c3268:	64615f65 	strvsbt	r5, [r1], -#3941
        2c326c:	78707220 	ldmvcda	r0!, {r5, r9, ip, sp, lr}^
        2c3270:	3a20746f 	bcc	ae0434 <ROM$$Size+0x3c07e8>
        2c3274:	6b656e46 	blvs	1c1eb94 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xe33c>
        2c3278:	554e4320 	strplb	r4, [lr, -#800]
        2c327c:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c3284 <TCompiler::Error(long, RefVar const &)+0x10a8>
        2c3280:	6e4e4154 	mcrvs	1, 2, r4, cr14, cr4, {2}
        2c3284:	49564520 	ldmmidb	r6, {r5, r8, sl, lr}^
        2c3288:	27282720 	strcs	r2, [r8, -r0, lsr #14]!
        2c328c:	666f726d 	strvsbt	r7, [pc], -sp, ror #4	; fField4
        2c3290:	616c5f61 	cmnvs	ip, r1, ror #30
        2c3294:	72677320 	rsbvc	r7, r7, #-2147483648	; 0x80000000
        2c3298:	27292720 	strcs	r2, [r9, -r0, lsr #14]!
        2c329c:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c32a0:	00000000 	andeq	r0, r0, r0
        2c32a4:	6c616d62 	stcvsl	13, cr6, [r1], -#392
        2c32a8:	64615f65 	strvsbt	r5, [r1], -#3941
        2c32ac:	78707220 	ldmvcda	r0!, {r5, r9, ip, sp, lr}^
        2c32b0:	3a20746f 	bcc	ae0474 <ROM$$Size+0x3c0828>
        2c32b4:	6b656e46 	blvs	1c1ebd4 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xe37c>
        2c32b8:	554e4320 	strplb	r4, [lr, -#800]
        2c32bc:	272b2720 	strcs	r2, [fp, -r0, lsr #14]!
        2c32c0:	27282720 	strcs	r2, [r8, -r0, lsr #14]!
        2c32c4:	666f726d 	strvsbt	r7, [pc], -sp, ror #4	; fField4
        2c32c8:	616c5f61 	cmnvs	ip, r1, ror #30
        2c32cc:	72677320 	rsbvc	r7, r7, #-2147483648	; 0x80000000
        2c32d0:	27292720 	strcs	r2, [r9, -r0, lsr #14]!
        2c32d4:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c32d8:	00000000 	andeq	r0, r0, r0
        2c32dc:	7472795f 	ldrvcbt	r7, [r2], -#2399
        2c32e0:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c32e4:	203a2074 	eorcss	r2, sl, r4, ror r0
        2c32e8:	6f6b656e 	swivs	0x006b656e
        2c32ec:	54525920 	ldrplb	r5, [r2], -#2336
        2c32f0:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c32f4:	5f736571 	swipl	0x00736571
        2c32f8:	2068616e 	rsbcs	r6, r8, lr, ror #2
        2c32fc:	646c655f 	strvsbt	r6, [ip], -#1375
        2c3300:	706c7573 	rsbvc	r7, ip, r3, ror r5
        2c3304:	00000000 	andeq	r0, r0, r0
        2c3308:	68616e64 	stmvsda	r1!, {r2, r5, r6, r9, sl, fp, sp, lr}^
        2c330c:	6c655f70 	stcvsl	15, cr5, [r5], -#448
        2c3310:	6c757320 	ldcvsl	3, cr7, [r5], -#128
        2c3314:	3a206861 	bcc	add4a0 <ROM$$Size+0x3bd854>
        2c3318:	6e646c65 	cdpvs	12, 6, cr6, cr4, cr5, {3}
        2c331c:	5f657870 	swipl	0x00657870
        2c3320:	72000000 	andvc	r0, r0, #0	; 0x0
        2c3324:	68616e64 	stmvsda	r1!, {r2, r5, r6, r9, sl, fp, sp, lr}^
        2c3328:	6c655f70 	stcvsl	15, cr5, [r5], -#448
        2c332c:	6c757320 	ldcvsl	3, cr7, [r5], -#128
        2c3330:	3a206861 	bcc	add4bc <ROM$$Size+0x3bd870>
        2c3334:	6e646c65 	cdpvs	12, 6, cr6, cr4, cr5, {3}
        2c3338:	5f706c75 	swipl	0x00706c75
        2c333c:	73206861 	teqvc	r0, #6356992	; 0x610000
        2c3340:	6e646c65 	cdpvs	12, 6, cr6, cr4, cr5, {3}
        2c3344:	5f657870 	swipl	0x00657870
        2c3348:	72000000 	andvc	r0, r0, #0	; 0x0
        2c334c:	68616e64 	stmvsda	r1!, {r2, r5, r6, r9, sl, fp, sp, lr}^
        2c3350:	6c655f65 	stcvsl	15, cr5, [r5], -#404
        2c3354:	78707220 	ldmvcda	r0!, {r5, r9, ip, sp, lr}^
        2c3358:	3a20746f 	bcc	ae051c <ROM$$Size+0x3c08d0>
        2c335c:	6b656e4f 	blvs	1c1eca0 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xe448>
        2c3360:	4e455843 	cdpmi	8, 4, cr5, cr5, cr3, {2}
        2c3364:	45505449 	ldrmib	r5, [r0, -#1097]
        2c3368:	4f4e2074 	swimi	0x004e2074
        2c336c:	6f6b656e 	swivs	0x006b656e
        2c3370:	53594d42 	cmppl	r9, #4224	; 0x1080
        2c3374:	4f4c2074 	swimi	0x004c2074
        2c3378:	6f6b656e 	swivs	0x006b656e
        2c337c:	444f2065 	strmib	r2, [pc], #65	; 2c3384 <TCompiler::Error(long, RefVar const &)+0x11a8>
        2c3380:	78707200 	ldmvcda	r0!, {r9, ip, sp, lr}^
        2c3384:	636f6e73 	cmnvs	pc, #1840	; 0x730
        2c3388:	74727563 	ldrvcbt	r7, [r2], -#1379	; fField1379
        2c338c:	746f7220 	strvcbt	r7, [pc], #220	; 2c3394 <TCompiler::Error(long, RefVar const &)+0x11b8>
        2c3390:	3a20275b 	bcc	acd104 <ROM$$Size+0x3ad4b8>
        2c3394:	27206578 	undefined
        2c3398:	70725f73 	rsbvcs	r5, r2, r3, ror pc
        2c339c:	74617220 	strvcbt	r7, [r1], -#544
        2c33a0:	275d2700 	ldrcsb	r2, [sp, -r0, lsl #14]
        2c33a4:	636f6e73 	cmnvs	pc, #1840	; 0x730
        2c33a8:	74727563 	ldrvcbt	r7, [r2], -#1379	; fField1379
        2c33ac:	746f7220 	strvcbt	r7, [pc], #220	; 2c33b4 <TCompiler::Error(long, RefVar const &)+0x11d8>
        2c33b0:	3a20275b 	bcc	acd124 <ROM$$Size+0x3ad4d8>
        2c33b4:	2720746f 	strcs	r7, [r0, -pc, ror #8]!	; fField8
        2c33b8:	6b656e53 	blvs	1c1ed0c <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xe4b4>
        2c33bc:	594d424f 	stmpldb	sp, {r0, r1, r2, r3, r6, r9, lr}^
        2c33c0:	4c20273a 	stcmi	7, cr2, [r0], -#232
        2c33c4:	27206578 	undefined
        2c33c8:	70725f73 	rsbvcs	r5, r2, r3, ror pc
        2c33cc:	74617220 	strvcbt	r7, [r1], -#544
        2c33d0:	275d2700 	ldrcsb	r2, [sp, -r0, lsl #14]
        2c33d4:	636f6e73 	cmnvs	pc, #1840	; 0x730
        2c33d8:	74727563 	ldrvcbt	r7, [r2], -#1379	; fField1379
        2c33dc:	746f7220 	strvcbt	r7, [pc], #220	; 2c33e4 <TCompiler::Error(long, RefVar const &)+0x1208>
        2c33e0:	3a20277b 	bcc	acd1d4 <ROM$$Size+0x3ad588>
        2c33e4:	27206672 	undefined
        2c33e8:	616d655f 	cmnvs	sp, pc, asr r5
        2c33ec:	736c6f74 	cmnvc	ip, #464	; 0x1d0
        2c33f0:	5f737461 	swipl	0x00737461
        2c33f4:	7220277d 	eorvc	r2, r0, #32768000	; 0x1f40000
        2c33f8:	27000000 	strcs	r0, [r0, -r0]
        2c33fc:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c3400:	5f737461 	swipl	0x00737461
        2c3404:	72203a00 	eorvc	r3, r0, #0	; 0x0
        2c3408:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c340c:	5f737461 	swipl	0x00737461
        2c3410:	72203a20 	eorvc	r3, r0, #131072	; 0x20000
        2c3414:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c3418:	5f706c75 	swipl	0x00706c75
        2c341c:	73000000 	tstvc	r0, #0	; 0x0
        2c3420:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c3424:	5f706c75 	swipl	0x00706c75
        2c3428:	73203a20 	teqvc	r0, #131072	; 0x20000
        2c342c:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c3430:	00000000 	andeq	r0, r0, r0
        2c3434:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c3438:	5f706c75 	swipl	0x00706c75
        2c343c:	73203a20 	teqvc	r0, #131072	; 0x20000
        2c3440:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c3444:	5f706c75 	swipl	0x00706c75
        2c3448:	7320272c 	teqvc	r0, #11534336	; 0xb00000
        2c344c:	27206578 	undefined
        2c3450:	70720000 	rsbvcs	r0, r2, r0
        2c3454:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c3458:	5f736571 	swipl	0x00736571
        2c345c:	203a0000 	eorcss	r0, sl, r0
        2c3460:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c3464:	5f736571 	swipl	0x00736571
        2c3468:	203a2065 	eorcss	r2, sl, r5, rrx
        2c346c:	78707200 	ldmvcda	r0!, {r9, ip, sp, lr}^
        2c3470:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c3474:	5f736571 	swipl	0x00736571
        2c3478:	203a2065 	eorcss	r2, sl, r5, rrx
        2c347c:	7870725f 	ldmvcda	r0!, {r0, r1, r2, r3, r4, r6, r9, ip, sp, lr}^
        2c3480:	73657120 	cmnvc	r5, #8	; 0x8
        2c3484:	273b2720 	ldrcs	r2, [fp, -r0, lsr #14]!
        2c3488:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c348c:	00000000 	andeq	r0, r0, r0
        2c3490:	666f726d 	strvsbt	r7, [pc], -sp, ror #4	; fField4
        2c3494:	616c5f61 	cmnvs	ip, r1, ror #30
        2c3498:	72677320 	rsbvc	r7, r7, #-2147483648	; 0x80000000
        2c349c:	3a000000 	bcc	2c34a4 <TCompiler::Error(long, RefVar const &)+0x12c8>
        2c34a0:	666f726d 	strvsbt	r7, [pc], -sp, ror #4	; fField4
        2c34a4:	616c5f61 	cmnvs	ip, r1, ror #30
        2c34a8:	72677320 	rsbvc	r7, r7, #-2147483648	; 0x80000000
        2c34ac:	3a206172 	bcc	adba7c <ROM$$Size+0x3bbe30>
        2c34b0:	675f706c 	ldrvsb	r7, [pc, -ip, rrx]
        2c34b4:	75730000 	ldrvcb	r0, [r3]!
        2c34b8:	6172675f 	cmnvs	r2, pc, asr r7
        2c34bc:	706c7573 	rsbvc	r7, ip, r3, ror r5
        2c34c0:	203a2074 	eorcss	r2, sl, r4, ror r0
        2c34c4:	6f6b656e 	swivs	0x006b656e
        2c34c8:	53594d42 	cmppl	r9, #4224	; 0x1080
        2c34cc:	4f4c0000 	swimi	0x004c0000
        2c34d0:	6172675f 	cmnvs	r2, pc, asr r7
        2c34d4:	706c7573 	rsbvc	r7, ip, r3, ror r5
        2c34d8:	203a2074 	eorcss	r2, sl, r4, ror r0
        2c34dc:	6f6b656e 	swivs	0x006b656e
        2c34e0:	53594d42 	cmppl	r9, #4224	; 0x1080
        2c34e4:	4f4c2074 	swimi	0x004c2074
        2c34e8:	6f6b656e 	swivs	0x006b656e
        2c34ec:	53594d42 	cmppl	r9, #4224	; 0x1080
        2c34f0:	4f4c0000 	swimi	0x004c0000
        2c34f4:	6172675f 	cmnvs	r2, pc, asr r7
        2c34f8:	706c7573 	rsbvc	r7, ip, r3, ror r5
        2c34fc:	203a2061 	eorcss	r2, sl, r1, rrx
        2c3500:	72675f70 	rsbvc	r5, r7, #448	; 0x1c0
        2c3504:	6c757320 	ldcvsl	3, cr7, [r5], -#128
        2c3508:	272c2720 	strcs	r2, [ip, -r0, lsr #14]!
        2c350c:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c3514 <TCompiler::Error(long, RefVar const &)+0x1338>
        2c3510:	6e53594d 	cdpvs	9, 5, cr5, cr3, cr13, {2}
        2c3514:	424f4c00 	submi	r4, pc, #0	; 0x0
        2c3518:	6172675f 	cmnvs	r2, pc, asr r7
        2c351c:	706c7573 	rsbvc	r7, ip, r3, ror r5
        2c3520:	203a2061 	eorcss	r2, sl, r1, rrx
        2c3524:	72675f70 	rsbvc	r5, r7, #448	; 0x1c0
        2c3528:	6c757320 	ldcvsl	3, cr7, [r5], -#128
        2c352c:	272c2720 	strcs	r2, [ip, -r0, lsr #14]!
        2c3530:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c3538 <TCompiler::Error(long, RefVar const &)+0x135c>
        2c3534:	6e53594d 	cdpvs	9, 5, cr5, cr3, cr13, {2}
        2c3538:	424f4c20 	submi	r4, pc, #8192	; 0x2000
        2c353c:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c3544 <TCompiler::Error(long, RefVar const &)+0x1368>
        2c3540:	6e53594d 	cdpvs	9, 5, cr5, cr3, cr13, {2}
        2c3544:	424f4c00 	submi	r4, pc, #0	; 0x0
        2c3548:	6c6f6361 	stcvsl	3, cr6, [pc], -#388
        2c354c:	6c5f706c 	mrrcvs	0, 6, r7, pc, cr12
        2c3550:	7573203a 	ldrvcb	r2, [r3, -#58]!
        2c3554:	20746f6b 	rsbcss	r6, r4, fp, ror #30
        2c3558:	656e5359 	strvsb	r5, [lr, -#857]!
        2c355c:	4d424f4c 	stcmil	15, cr4, [r2, -#304]
        2c3560:	206c6f63 	rsbcs	r6, ip, r3, ror #30
        2c3564:	616c5f63 	cmnvs	ip, r3, ror #30
        2c3568:	6c617573 	stcvsl	5, cr7, [r1], -#460
        2c356c:	65000000 	strvs	r0, [r0]
        2c3570:	6c6f6361 	stcvsl	3, cr6, [pc], -#388
        2c3574:	6c5f706c 	mrrcvs	0, 6, r7, pc, cr12
        2c3578:	7573203a 	ldrvcb	r2, [r3, -#58]!
        2c357c:	20746f6b 	rsbcss	r6, r4, fp, ror #30
        2c3580:	656e5359 	strvsb	r5, [lr, -#857]!
        2c3584:	4d424f4c 	stcmil	15, cr4, [r2, -#304]
        2c3588:	20746f6b 	rsbcss	r6, r4, fp, ror #30
        2c358c:	656e4153 	strvsb	r4, [lr, -#339]!
        2c3590:	5349474e 	cmppl	r9, #20447232	; 0x1380000
        2c3594:	20657870 	rsbcs	r7, r5, r0, ror r8
        2c3598:	72000000 	andvc	r0, r0, #0	; 0x0
        2c359c:	6c6f6361 	stcvsl	3, cr6, [pc], -#388
        2c35a0:	6c5f706c 	mrrcvs	0, 6, r7, pc, cr12
        2c35a4:	7573203a 	ldrvcb	r2, [r3, -#58]!
        2c35a8:	206c6f63 	rsbcs	r6, ip, r3, ror #30
        2c35ac:	616c5f70 	cmnvs	ip, r0, ror pc
        2c35b0:	6c757320 	ldcvsl	3, cr7, [r5], -#128
        2c35b4:	272c2720 	strcs	r2, [ip, -r0, lsr #14]!
        2c35b8:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c35c0 <TCompiler::Error(long, RefVar const &)+0x13e4>
        2c35bc:	6e53594d 	cdpvs	9, 5, cr5, cr3, cr13, {2}
        2c35c0:	424f4c00 	submi	r4, pc, #0	; 0x0
        2c35c4:	6c6f6361 	stcvsl	3, cr6, [pc], -#388
        2c35c8:	6c5f706c 	mrrcvs	0, 6, r7, pc, cr12
        2c35cc:	7573203a 	ldrvcb	r2, [r3, -#58]!
        2c35d0:	206c6f63 	rsbcs	r6, ip, r3, ror #30
        2c35d4:	616c5f70 	cmnvs	ip, r0, ror pc
        2c35d8:	6c757320 	ldcvsl	3, cr7, [r5], -#128
        2c35dc:	272c2720 	strcs	r2, [ip, -r0, lsr #14]!
        2c35e0:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c35e8 <TCompiler::Error(long, RefVar const &)+0x140c>
        2c35e4:	6e53594d 	cdpvs	9, 5, cr5, cr3, cr13, {2}
        2c35e8:	424f4c20 	submi	r4, pc, #8192	; 0x2000
        2c35ec:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c35f4 <TCompiler::Error(long, RefVar const &)+0x1418>
        2c35f0:	6e415353 	mcrvs	3, 2, r5, cr1, cr3, {2}
        2c35f4:	49474e20 	stmmidb	r7, {r5, r9, sl, fp, lr}^
        2c35f8:	65787072 	ldrvsb	r7, [r8, -#114]!
        2c35fc:	00000000 	andeq	r0, r0, r0
        2c3600:	6c6f6361 	stcvsl	3, cr6, [pc], -#388
        2c3604:	6c5f636c 	mrrcvs	3, 6, r6, pc, cr12
        2c3608:	61757365 	cmnvs	r5, r5, ror #6
        2c360c:	203a0000 	eorcss	r0, sl, r0
        2c3610:	6c6f6361 	stcvsl	3, cr6, [pc], -#388
        2c3614:	6c5f636c 	mrrcvs	3, 6, r6, pc, cr12
        2c3618:	61757365 	cmnvs	r5, r5, ror #6
        2c361c:	203a2074 	eorcss	r2, sl, r4, ror r0
        2c3620:	6f6b656e 	swivs	0x006b656e
        2c3624:	53594d42 	cmppl	r9, #4224	; 0x1080
        2c3628:	4f4c0000 	swimi	0x004c0000
        2c362c:	6c6f6361 	stcvsl	3, cr6, [pc], -#388
        2c3630:	6c5f636c 	mrrcvs	3, 6, r6, pc, cr12
        2c3634:	61757365 	cmnvs	r5, r5, ror #6
        2c3638:	203a2074 	eorcss	r2, sl, r4, ror r0
        2c363c:	6f6b656e 	swivs	0x006b656e
        2c3640:	53594d42 	cmppl	r9, #4224	; 0x1080
        2c3644:	4f4c2074 	swimi	0x004c2074
        2c3648:	6f6b656e 	swivs	0x006b656e
        2c364c:	41535349 	cmpmi	r3, r9, asr #6
        2c3650:	474e2065 	strmib	r2, [lr, -r5, rrx]
        2c3654:	78707200 	ldmvcda	r0!, {r9, ip, sp, lr}^
        2c3658:	636f6e73 	cmnvs	pc, #1840	; 0x730
        2c365c:	74616e74 	strvcbt	r6, [r1], -#3700
        2c3660:	5f696e69 	swipl	0x00696e69
        2c3664:	745f706c 	ldrvcb	r7, [pc], #6c	; 2c366c <TCompiler::Error(long, RefVar const &)+0x1490>
        2c3668:	7573203a 	ldrvcb	r2, [r3, -#58]!
        2c366c:	20746f6b 	rsbcss	r6, r4, fp, ror #30
        2c3670:	656e5359 	strvsb	r5, [lr, -#857]!
        2c3674:	4d424f4c 	stcmil	15, cr4, [r2, -#304]
        2c3678:	20746f6b 	rsbcss	r6, r4, fp, ror #30
        2c367c:	656e4153 	strvsb	r4, [lr, -#339]!
        2c3680:	5349474e 	cmppl	r9, #20447232	; 0x1380000
        2c3684:	20657870 	rsbcs	r7, r5, r0, ror r8
        2c3688:	72000000 	andvc	r0, r0, #0	; 0x0
        2c368c:	636f6e73 	cmnvs	pc, #1840	; 0x730
        2c3690:	74616e74 	strvcbt	r6, [r1], -#3700
        2c3694:	5f696e69 	swipl	0x00696e69
        2c3698:	745f706c 	ldrvcb	r7, [pc], #6c	; 2c36a0 <TCompiler::Error(long, RefVar const &)+0x14c4>
        2c369c:	7573203a 	ldrvcb	r2, [r3, -#58]!
        2c36a0:	20636f6e 	rsbcs	r6, r3, lr, ror #30
        2c36a4:	7374616e 	cmnvc	r4, #-2147483621	; 0x8000001b
        2c36a8:	745f696e 	ldrvcb	r6, [pc], #96e	; 2c36b0 <TCompiler::Error(long, RefVar const &)+0x14d4>
        2c36ac:	69745f70 	ldmvsdb	r4!, {r4, r5, r6, r8, r9, sl, fp, ip, lr}^
        2c36b0:	6c757320 	ldcvsl	3, cr7, [r5], -#128
        2c36b4:	272c2720 	strcs	r2, [ip, -r0, lsr #14]!
        2c36b8:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c36c0 <TCompiler::Error(long, RefVar const &)+0x14e4>
        2c36bc:	6e53594d 	cdpvs	9, 5, cr5, cr3, cr13, {2}
        2c36c0:	424f4c20 	submi	r4, pc, #8192	; 0x2000
        2c36c4:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c36cc <TCompiler::Error(long, RefVar const &)+0x14f0>
        2c36c8:	6e415353 	mcrvs	3, 2, r5, cr1, cr3, {2}
        2c36cc:	49474e20 	stmmidb	r7, {r5, r9, sl, fp, lr}^
        2c36d0:	636f6e73 	cmnvs	pc, #1840	; 0x730
        2c36d4:	74616e74 	strvcbt	r6, [r1], -#3700
        2c36d8:	00000000 	andeq	r0, r0, r0
        2c36dc:	6672616d 	ldrvsbt	r6, [r2], -sp, ror #2
        2c36e0:	655f736c 	ldrvsb	r7, [pc, #fffffc94]	; 2c337c <TCompiler::Error(long, RefVar const &)+0x11a0>
        2c36e4:	6f745f73 	swivs	0x00745f73
        2c36e8:	74617220 	strvcbt	r7, [r1], -#544
        2c36ec:	3a000000 	bcc	2c36f4 <TCompiler::Error(long, RefVar const &)+0x1518>
        2c36f0:	6672616d 	ldrvsbt	r6, [r2], -sp, ror #2
        2c36f4:	655f736c 	ldrvsb	r7, [pc, #fffffc94]	; 2c3390 <TCompiler::Error(long, RefVar const &)+0x11b4>
        2c36f8:	6f745f73 	swivs	0x00745f73
        2c36fc:	74617220 	strvcbt	r7, [r1], -#544
        2c3700:	3a206672 	bcc	add0d0 <ROM$$Size+0x3bd484>
        2c3704:	616d655f 	cmnvs	sp, pc, asr r5
        2c3708:	736c6f74 	cmnvc	ip, #464	; 0x1d0
        2c370c:	5f706c75 	swipl	0x00706c75
        2c3710:	73000000 	tstvc	r0, #0	; 0x0
        2c3714:	6672616d 	ldrvsbt	r6, [r2], -sp, ror #2
        2c3718:	655f736c 	ldrvsb	r7, [pc, #fffffc94]	; 2c33b4 <TCompiler::Error(long, RefVar const &)+0x11d8>
        2c371c:	6f745f70 	swivs	0x00745f70
        2c3720:	6c757320 	ldcvsl	3, cr7, [r5], -#128
        2c3724:	3a20746f 	bcc	ae08e8 <ROM$$Size+0x3c0c9c>
        2c3728:	6b656e53 	blvs	1c1f07c <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xe824>
        2c372c:	594d424f 	stmpldb	sp, {r0, r1, r2, r3, r6, r9, lr}^
        2c3730:	4c20273a 	stcmi	7, cr2, [r0], -#232
        2c3734:	27206578 	undefined
        2c3738:	70720000 	rsbvcs	r0, r2, r0
        2c373c:	6672616d 	ldrvsbt	r6, [r2], -sp, ror #2
        2c3740:	655f736c 	ldrvsb	r7, [pc, #fffffc94]	; 2c33dc <TCompiler::Error(long, RefVar const &)+0x1200>
        2c3744:	6f745f70 	swivs	0x00745f70
        2c3748:	6c757320 	ldcvsl	3, cr7, [r5], -#128
        2c374c:	3a206672 	bcc	add11c <ROM$$Size+0x3bd4d0>
        2c3750:	616d655f 	cmnvs	sp, pc, asr r5
        2c3754:	736c6f74 	cmnvc	ip, #464	; 0x1d0
        2c3758:	5f706c75 	swipl	0x00706c75
        2c375c:	7320272c 	teqvc	r0, #11534336	; 0xb00000
        2c3760:	2720746f 	strcs	r7, [r0, -pc, ror #8]!	; fField8
        2c3764:	6b656e53 	blvs	1c1f0b8 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xe860>
        2c3768:	594d424f 	stmpldb	sp, {r0, r1, r2, r3, r6, r9, lr}^
        2c376c:	4c20273a 	stcmi	7, cr2, [r0], -#232
        2c3770:	27206578 	undefined
        2c3774:	70720000 	rsbvcs	r0, r2, r0
        2c3778:	73657870 	cmnvc	r5, #7340032	; 0x700000
        2c377c:	72203a20 	eorvc	r3, r0, #131072	; 0x20000
        2c3780:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c3788 <TCompiler::Error(long, RefVar const &)+0x15ac>
        2c3784:	6e434f4e 	cdpvs	15, 4, cr4, cr3, cr14, {2}
        2c3788:	53540000 	cmppl	r4, #0	; 0x0
        2c378c:	73657870 	cmnvc	r5, #7340032	; 0x700000
        2c3790:	72203a20 	eorvc	r3, r0, #131072	; 0x20000
        2c3794:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c379c <TCompiler::Error(long, RefVar const &)+0x15c0>
        2c3798:	6e494e54 	mcrvs	14, 2, r4, cr9, cr4, {2}
        2c379c:	45474552 	strmib	r4, [r7, -#1362]	; fField1362
        2c37a0:	00000000 	andeq	r0, r0, r0
        2c37a4:	73657870 	cmnvc	r5, #7340032	; 0x700000
        2c37a8:	72203a20 	eorvc	r3, r0, #131072	; 0x20000
        2c37ac:	272d2720 	strcs	r2, [sp, -r0, lsr #14]!
        2c37b0:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c37b8 <TCompiler::Error(long, RefVar const &)+0x15dc>
        2c37b4:	6e494e54 	mcrvs	14, 2, r4, cr9, cr4, {2}
        2c37b8:	45474552 	strmib	r4, [r7, -#1362]	; fField1362
        2c37bc:	00000000 	andeq	r0, r0, r0
        2c37c0:	73657870 	cmnvc	r5, #7340032	; 0x700000
        2c37c4:	72203a20 	eorvc	r3, r0, #131072	; 0x20000
        2c37c8:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c37d0 <TCompiler::Error(long, RefVar const &)+0x15f4>
        2c37cc:	6e524541 	cdpvs	5, 5, cr4, cr2, cr1, {2}
        2c37d0:	4c000000 	stcmi	0, cr0, [r0]
        2c37d4:	73657870 	cmnvc	r5, #7340032	; 0x700000
        2c37d8:	72203a20 	eorvc	r3, r0, #131072	; 0x20000
        2c37dc:	272d2720 	strcs	r2, [sp, -r0, lsr #14]!
        2c37e0:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c37e8 <TCompiler::Error(long, RefVar const &)+0x160c>
        2c37e4:	6e524541 	cdpvs	5, 5, cr4, cr2, cr1, {2}
        2c37e8:	4c000000 	stcmi	0, cr0, [r0]
        2c37ec:	73657870 	cmnvc	r5, #7340032	; 0x700000
        2c37f0:	72203a20 	eorvc	r3, r0, #131072	; 0x20000
        2c37f4:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c37fc <TCompiler::Error(long, RefVar const &)+0x1620>
        2c37f8:	6e524546 	cdpvs	5, 5, cr4, cr2, cr6, {2}
        2c37fc:	434f4e53 	cmpmi	pc, #1328	; 0x530
        2c3800:	54000000 	strpl	r0, [r0]
        2c3804:	73657870 	cmnvc	r5, #7340032	; 0x700000
        2c3808:	72203a20 	eorvc	r3, r0, #131072	; 0x20000
        2c380c:	70617468 	rsbvc	r7, r1, r8, ror #8
        2c3810:	5f657870 	swipl	0x00657870
        2c3814:	72000000 	andvc	r0, r0, #0	; 0x0
        2c3818:	73657870 	cmnvc	r5, #7340032	; 0x700000
        2c381c:	72203a20 	eorvc	r3, r0, #131072	; 0x20000
        2c3820:	275b2720 	ldrcsb	r2, [fp, -r0, lsr #14]
        2c3824:	73657870 	cmnvc	r5, #7340032	; 0x700000
        2c3828:	725f7374 	subvcs	r7, pc, #-805306367	; 0xd0000001
        2c382c:	61722027 	cmnvs	r2, r7, lsr #32
        2c3830:	5d270000 	stcpl	0, cr0, [r7]
        2c3834:	73657870 	cmnvc	r5, #7340032	; 0x700000
        2c3838:	72203a20 	eorvc	r3, r0, #131072	; 0x20000
        2c383c:	275b2720 	ldrcsb	r2, [fp, -r0, lsr #14]
        2c3840:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c3848 <TCompiler::Error(long, RefVar const &)+0x166c>
        2c3844:	6e53594d 	cdpvs	9, 5, cr5, cr3, cr13, {2}
        2c3848:	424f4c20 	submi	r4, pc, #8192	; 0x2000
        2c384c:	273a2720 	ldrcs	r2, [sl, -r0, lsr #14]!
        2c3850:	73657870 	cmnvc	r5, #7340032	; 0x700000
        2c3854:	725f7374 	subvcs	r7, pc, #-805306367	; 0xd0000001
        2c3858:	61722027 	cmnvs	r2, r7, lsr #32
        2c385c:	5d270000 	stcpl	0, cr0, [r7]
        2c3860:	73657870 	cmnvc	r5, #7340032	; 0x700000
        2c3864:	72203a20 	eorvc	r3, r0, #131072	; 0x20000
        2c3868:	277b2720 	ldrcsb	r2, [fp, -r0, lsr #14]!
        2c386c:	73657870 	cmnvc	r5, #7340032	; 0x700000
        2c3870:	725f6672 	subvcs	r6, pc, #119537664	; 0x7200000
        2c3874:	616d655f 	cmnvs	sp, pc, asr r5
        2c3878:	736c6f74 	cmnvc	ip, #464	; 0x1d0
        2c387c:	5f737461 	swipl	0x00737461
        2c3880:	7220277d 	eorvc	r2, r0, #32768000	; 0x1f40000
        2c3884:	27000000 	strcs	r0, [r0, -r0]
        2c3888:	70617468 	rsbvc	r7, r1, r8, ror #8
        2c388c:	5f657870 	swipl	0x00657870
        2c3890:	72203a20 	eorvc	r3, r0, #131072	; 0x20000
        2c3894:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c389c <TCompiler::Error(long, RefVar const &)+0x16c0>
        2c3898:	6e53594d 	cdpvs	9, 5, cr5, cr3, cr13, {2}
        2c389c:	424f4c00 	submi	r4, pc, #0	; 0x0
        2c38a0:	70617468 	rsbvc	r7, r1, r8, ror #8
        2c38a4:	5f657870 	swipl	0x00657870
        2c38a8:	72203a20 	eorvc	r3, r0, #131072	; 0x20000
        2c38ac:	70617468 	rsbvc	r7, r1, r8, ror #8
        2c38b0:	5f657870 	swipl	0x00657870
        2c38b4:	7220272e 	eorvc	r2, r0, #12058624	; 0xb80000
        2c38b8:	2720746f 	strcs	r7, [r0, -pc, ror #8]!	; fField8
        2c38bc:	6b656e53 	blvs	1c1f210 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xe9b8>
        2c38c0:	594d424f 	stmpldb	sp, {r0, r1, r2, r3, r6, r9, lr}^
        2c38c4:	4c000000 	stcmi	0, cr0, [r0]
        2c38c8:	73657870 	cmnvc	r5, #7340032	; 0x700000
        2c38cc:	725f7374 	subvcs	r7, pc, #-805306367	; 0xd0000001
        2c38d0:	6172203a 	cmnvs	r2, sl, lsr r0
        2c38d4:	00000000 	andeq	r0, r0, r0
        2c38d8:	73657870 	cmnvc	r5, #7340032	; 0x700000
        2c38dc:	725f7374 	subvcs	r7, pc, #-805306367	; 0xd0000001
        2c38e0:	6172203a 	cmnvs	r2, sl, lsr r0
        2c38e4:	20736578 	rsbcss	r6, r3, r8, ror r5
        2c38e8:	70725f70 	rsbvcs	r5, r2, r0, ror pc
        2c38ec:	6c757300 	ldcvsl	3, cr7, [r5]
        2c38f0:	73657870 	cmnvc	r5, #7340032	; 0x700000
        2c38f4:	725f706c 	subvcs	r7, pc, #108	; 0x6c
        2c38f8:	7573203a 	ldrvcb	r2, [r3, -#58]!
        2c38fc:	20736578 	rsbcss	r6, r3, r8, ror r5
        2c3900:	70720000 	rsbvcs	r0, r2, r0
        2c3904:	73657870 	cmnvc	r5, #7340032	; 0x700000
        2c3908:	725f706c 	subvcs	r7, pc, #108	; 0x6c
        2c390c:	7573203a 	ldrvcb	r2, [r3, -#58]!
        2c3910:	20736578 	rsbcss	r6, r3, r8, ror r5
        2c3914:	70725f70 	rsbvcs	r5, r2, r0, ror pc
        2c3918:	6c757320 	ldcvsl	3, cr7, [r5], -#128
        2c391c:	272c2720 	strcs	r2, [ip, -r0, lsr #14]!
        2c3920:	73657870 	cmnvc	r5, #7340032	; 0x700000
        2c3924:	72000000 	andvc	r0, r0, #0	; 0x0
        2c3928:	73657870 	cmnvc	r5, #7340032	; 0x700000
        2c392c:	725f6672 	subvcs	r6, pc, #119537664	; 0x7200000
        2c3930:	616d655f 	cmnvs	sp, pc, asr r5
        2c3934:	736c6f74 	cmnvc	ip, #464	; 0x1d0
        2c3938:	5f737461 	swipl	0x00737461
        2c393c:	72203a00 	eorvc	r3, r0, #0	; 0x0
        2c3940:	73657870 	cmnvc	r5, #7340032	; 0x700000
        2c3944:	725f6672 	subvcs	r6, pc, #119537664	; 0x7200000
        2c3948:	616d655f 	cmnvs	sp, pc, asr r5
        2c394c:	736c6f74 	cmnvc	ip, #464	; 0x1d0
        2c3950:	5f737461 	swipl	0x00737461
        2c3954:	72203a20 	eorvc	r3, r0, #131072	; 0x20000
        2c3958:	73657870 	cmnvc	r5, #7340032	; 0x700000
        2c395c:	725f6672 	subvcs	r6, pc, #119537664	; 0x7200000
        2c3960:	616d655f 	cmnvs	sp, pc, asr r5
        2c3964:	736c6f74 	cmnvc	ip, #464	; 0x1d0
        2c3968:	5f706c75 	swipl	0x00706c75
        2c396c:	73000000 	tstvc	r0, #0	; 0x0
        2c3970:	73657870 	cmnvc	r5, #7340032	; 0x700000
        2c3974:	725f6672 	subvcs	r6, pc, #119537664	; 0x7200000
        2c3978:	616d655f 	cmnvs	sp, pc, asr r5
        2c397c:	736c6f74 	cmnvc	ip, #464	; 0x1d0
        2c3980:	5f706c75 	swipl	0x00706c75
        2c3984:	73203a20 	teqvc	r0, #131072	; 0x20000
        2c3988:	746f6b65 	strvcbt	r6, [pc], #b65	; 2c3990 <TCompiler::Error(long, RefVar const &)+0x17b4>
        2c398c:	6e53594d 	cdpvs	9, 5, cr5, cr3, cr13, {2}
        2c3990:	424f4c20 	submi	r4, pc, #8192	; 0x2000
        2c3994:	273a2720 	ldrcs	r2, [sl, -r0, lsr #14]!
        2c3998:	73657870 	cmnvc	r5, #7340032	; 0x700000
        2c399c:	72000000 	andvc	r0, r0, #0	; 0x0
        2c39a0:	73657870 	cmnvc	r5, #7340032	; 0x700000
        2c39a4:	725f6672 	subvcs	r6, pc, #119537664	; 0x7200000
        2c39a8:	616d655f 	cmnvs	sp, pc, asr r5
        2c39ac:	736c6f74 	cmnvc	ip, #464	; 0x1d0
        2c39b0:	5f706c75 	swipl	0x00706c75
        2c39b4:	73203a20 	teqvc	r0, #131072	; 0x20000
        2c39b8:	73657870 	cmnvc	r5, #7340032	; 0x700000
        2c39bc:	725f6672 	subvcs	r6, pc, #119537664	; 0x7200000
        2c39c0:	616d655f 	cmnvs	sp, pc, asr r5
        2c39c4:	736c6f74 	cmnvc	ip, #464	; 0x1d0
        2c39c8:	5f706c75 	swipl	0x00706c75
        2c39cc:	7320272c 	teqvc	r0, #11534336	; 0xb00000
        2c39d0:	2720746f 	strcs	r7, [r0, -pc, ror #8]!	; fField8
        2c39d4:	6b656e53 	blvs	1c1f328 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xead0>
        2c39d8:	594d424f 	stmpldb	sp, {r0, r1, r2, r3, r6, r9, lr}^
        2c39dc:	4c20273a 	stcmi	7, cr2, [r0], -#232
        2c39e0:	27207365 	strcs	r7, [r0, -r5, ror #6]!
        2c39e4:	78707200 	ldmvcda	r0!, {r9, ip, sp, lr}^
    */
}

/**
 * Symbol: TCompiler::__dt(void)
 * Address: 002c39e8
 */
TCompiler::~TCompiler(void) {
    /*
        2c39e8:	e1a0c00d 	mov	ip, sp
        2c39ec:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2c39f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2c39f4:	e1a04000 	mov	r4, r0
        2c39f8:	e1a05001 	mov	r5, r1
        2c39fc:	e2800010 	add	r0, r0, #16	; 0x10
        2c3a00:	e1a06000 	mov	r6, r0
        2c3a04:	e5900000 	ldr	r0, [r0]
        2c3a08:	e5900000 	ldr	r0, [r0]
        2c3a0c:	eb641297 	bl	1bc8470 <$UnlockRef(long)>
        2c3a10:	e5940018 	ldr	r0, [r4, #24]	; fField24
        2c3a14:	eb642731 	bl	1bcd6e0 <$__dl(void *)>
        2c3a18:	e5940030 	ldr	r0, [r4, #48]	; fField48
        2c3a1c:	eb63fde6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c3a20:	e5960000 	ldr	r0, [r6]
        2c3a24:	eb63fde4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c3a28:	e3150001 	tst	r5, #1	; 0x1
        2c3a2c:	11a00004 	movne	r0, r4
        2c3a30:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
        2c3a34:	1a642729 	bne	1bcd6e0 <$__dl(void *)>
        2c3a38:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TCompiler::ClosureWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)
 * Address: 002c3a3c
 */
TCompiler::ClosureWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &) {
    /*
        2c3a3c:	e1a0c00d 	mov	ip, sp
        2c3a40:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2c3a44:	e24cb004 	sub	fp, ip, #4	; 0x4
        2c3a48:	e1a04000 	mov	r4, r0
        2c3a4c:	e1a05003 	mov	r5, r3
        2c3a50:	e3a06003 	mov	r6, #3	; 0x3
        2c3a54:	e2866c01 	add	r6, r6, #256	; 0x100
        2c3a58:	e3a08001 	mov	r8, #1	; 0x1
        2c3a5c:	e3520f49 	cmp	r2, #292	; 0x124
        2c3a60:	e59b0010 	ldr	r0, [fp, #16]
        2c3a64:	e59b1004 	ldr	r1, [fp, #4]	; fField4
        2c3a68:	0a000091 	beq	2c3cb4 <TCompiler::ClosureWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x278>
        2c3a6c:	ca000010 	bgt	2c3ab4 <TCompiler::ClosureWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x78>
        2c3a70:	e332003a 	teq	r2, #58	; 0x3a
        2c3a74:	0a000013 	beq	2c3ac8 <TCompiler::ClosureWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x8c>
        2c3a78:	e1320006 	teq	r2, r6
        2c3a7c:	0a000059 	beq	2c3be8 <TCompiler::ClosureWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x1ac>
        2c3a80:	e242cf42 	sub	ip, r2, #264	; 0x108
        2c3a84:	e33c0001 	teq	ip, #1	; 0x1
        2c3a88:	1a000007 	bne	2c3aac <TCompiler::ClosureWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x70>
        2c3a8c:	e5900000 	ldr	r0, [r0]
        2c3a90:	e5900000 	ldr	r0, [r0]
        2c3a94:	e5840000 	str	r0, [r4]
        2c3a98:	e1a00004 	mov	r0, r4
        2c3a9c:	eb5e5473 	bl	1a58c70 <TCompiler::$WalkForClosures(RefVar const &)>
        2c3aa0:	e5940000 	ldr	r0, [r4]
        2c3aa4:	e5900054 	ldr	r0, [r0, #84]
        2c3aa8:	e5840000 	str	r0, [r4]
        2c3aac:	e1a00008 	mov	r0, r8
        2c3ab0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2c3ab4:	e242cf4a 	sub	ip, r2, #296	; 0x128
        2c3ab8:	e33c0001 	teq	ip, #1	; 0x1
        2c3abc:	0a000008 	beq	2c3ae4 <TCompiler::ClosureWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0xa8>
        2c3ac0:	e3320f4e 	teq	r2, #312	; 0x138
        2c3ac4:	1afffff8 	bne	2c3aac <TCompiler::ClosureWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x70>
        2c3ac8:	e5910000 	ldr	r0, [r1]
        2c3acc:	e5900000 	ldr	r0, [r0]
        2c3ad0:	e3300002 	teq	r0, #2	; 0x2
        2c3ad4:	1afffff4 	bne	2c3aac <TCompiler::ClosureWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x70>
        2c3ad8:	e3a01001 	mov	r1, #1	; 0x1
        2c3adc:	e5940000 	ldr	r0, [r4]
        2c3ae0:	ea000075 	b	2c3cbc <TCompiler::ClosureWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x280>
        2c3ae4:	e24dd014 	sub	sp, sp, #20	; 0x14
        2c3ae8:	e5950000 	ldr	r0, [r5]
        2c3aec:	e5900000 	ldr	r0, [r0]
        2c3af0:	e3a07000 	mov	r7, #0	; 0x0
        2c3af4:	e1a01007 	mov	r1, r7
        2c3af8:	eb6401d5 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c3afc:	e3100003 	tst	r0, #3	; 0x3
        2c3b00:	01a00140 	moveq	r0, r0, asr #2
        2c3b04:	0a000000 	beq	2c3b0c <TCompiler::ClosureWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0xd0>
        2c3b08:	eb63f983 	bl	1bc211c <$_RINTError(long)>
        2c3b0c:	e1300006 	teq	r0, r6
        2c3b10:	1a000032 	bne	2c3be0 <TCompiler::ClosureWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x1a4>
        2c3b14:	e3a06002 	mov	r6, #2	; 0x2
        2c3b18:	e1a00006 	mov	r0, r6
        2c3b1c:	eb63f98a 	bl	1bc214c <$AllocateRefHandle(long)>
        2c3b20:	e58d0000 	str	r0, [sp]
        2c3b24:	e1a0300d 	mov	r3, sp
        2c3b28:	e92d0008 	stmdb	sp!, {r3}
        2c3b2c:	e1a00006 	mov	r0, r6
        2c3b30:	eb63f985 	bl	1bc214c <$AllocateRefHandle(long)>
        2c3b34:	e58d0008 	str	r0, [sp, #8]	; fField8
        2c3b38:	e28d3008 	add	r3, sp, #8	; 0x8
        2c3b3c:	e92d0008 	stmdb	sp!, {r3}
        2c3b40:	e1a00006 	mov	r0, r6
        2c3b44:	eb63f980 	bl	1bc214c <$AllocateRefHandle(long)>
        2c3b48:	e58d0010 	str	r0, [sp, #16]
        2c3b4c:	e28d3010 	add	r3, sp, #16	; 0x10
        2c3b50:	e92d0008 	stmdb	sp!, {r3}
        2c3b54:	e1a00006 	mov	r0, r6
        2c3b58:	eb63f97b 	bl	1bc214c <$AllocateRefHandle(long)>
        2c3b5c:	e58d0018 	str	r0, [sp, #24]	; fField24
        2c3b60:	e28d3018 	add	r3, sp, #24	; 0x18
        2c3b64:	e92d0008 	stmdb	sp!, {r3}
        2c3b68:	e5950000 	ldr	r0, [r5]
        2c3b6c:	e5900000 	ldr	r0, [r0]
        2c3b70:	e1a01008 	mov	r1, r8
        2c3b74:	eb6401b6 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c3b78:	eb63f973 	bl	1bc214c <$AllocateRefHandle(long)>
        2c3b7c:	e58d0020 	str	r0, [sp, #32]
        2c3b80:	e28d6020 	add	r6, sp, #32	; 0x20
        2c3b84:	e5950000 	ldr	r0, [r5]
        2c3b88:	e5900000 	ldr	r0, [r0]
        2c3b8c:	e1a01007 	mov	r1, r7
        2c3b90:	eb6401af 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c3b94:	e3100003 	tst	r0, #3	; 0x3
        2c3b98:	01a00140 	moveq	r0, r0, asr #2
        2c3b9c:	0a000000 	beq	2c3ba4 <TCompiler::ClosureWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x168>
        2c3ba0:	eb63f95d 	bl	1bc211c <$_RINTError(long)>
        2c3ba4:	e1a02000 	mov	r2, r0
        2c3ba8:	e1a01005 	mov	r1, r5
        2c3bac:	e1a00004 	mov	r0, r4
        2c3bb0:	e1a03006 	mov	r3, r6
        2c3bb4:	eb5e3b52 	bl	1a52904 <TCompiler::$ClosureWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)>
        2c3bb8:	e5bd0010 	ldr	r0, [sp, #16]!
        2c3bbc:	eb63fd7e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c3bc0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c3bc4:	eb63fd7c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c3bc8:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2c3bcc:	eb63fd7a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c3bd0:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        2c3bd4:	eb63fd78 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c3bd8:	e59d0010 	ldr	r0, [sp, #16]
        2c3bdc:	eb63fd76 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c3be0:	e28dd014 	add	sp, sp, #20	; 0x14
        2c3be4:	eaffffb0 	b	2c3aac <TCompiler::ClosureWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x70>
        2c3be8:	e1a01005 	mov	r1, r5
        2c3bec:	e5940000 	ldr	r0, [r4]
        2c3bf0:	eb5e47b6 	bl	1a55ad0 <TFunctionState::$IsLocalVariable(RefVar const &)>
        2c3bf4:	e3300000 	teq	r0, #0	; 0x0
        2c3bf8:	0a000028 	beq	2c3ca0 <TCompiler::ClosureWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x264>
        2c3bfc:	e5940000 	ldr	r0, [r4]
        2c3c00:	e5900020 	ldr	r0, [r0, #32]
        2c3c04:	e5900000 	ldr	r0, [r0]
        2c3c08:	e5951000 	ldr	r1, [r5]
        2c3c0c:	e5911000 	ldr	r1, [r1]
        2c3c10:	eb640192 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2c3c14:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c3c18:	e3300002 	teq	r0, #2	; 0x2
        2c3c1c:	1a00000a 	bne	2c3c4c <TCompiler::ClosureWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x210>
        2c3c20:	e3a00004 	mov	r0, #4	; 0x4
        2c3c24:	eb63f948 	bl	1bc214c <$AllocateRefHandle(long)>
        2c3c28:	e58d0000 	str	r0, [sp]
        2c3c2c:	e1a0200d 	mov	r2, sp
        2c3c30:	e5940000 	ldr	r0, [r4]
        2c3c34:	e2800020 	add	r0, r0, #32	; 0x20
        2c3c38:	e1a01005 	mov	r1, r5
        2c3c3c:	eb6409c9 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2c3c40:	e59d0000 	ldr	r0, [sp]
        2c3c44:	eb63fd5c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c3c48:	ea000012 	b	2c3c98 <TCompiler::ClosureWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x25c>
        2c3c4c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c3c50:	e2001003 	and	r1, r0, #3	; 0x3
        2c3c54:	e3510000 	cmp	r1, #0	; 0x0
        2c3c58:	1a00000d 	bne	2c3c94 <TCompiler::ClosureWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x258>
        2c3c5c:	01a00140 	moveq	r0, r0, asr #2
        2c3c60:	0a000000 	beq	2c3c68 <TCompiler::ClosureWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x22c>
        2c3c64:	eb63f92c 	bl	1bc211c <$_RINTError(long)>
        2c3c68:	e2800001 	add	r0, r0, #1	; 0x1
        2c3c6c:	e1a00100 	mov	r0, r0, lsl #2
        2c3c70:	eb63f935 	bl	1bc214c <$AllocateRefHandle(long)>
        2c3c74:	e58d0000 	str	r0, [sp]
        2c3c78:	e1a0200d 	mov	r2, sp
        2c3c7c:	e5940000 	ldr	r0, [r4]
        2c3c80:	e2800020 	add	r0, r0, #32	; 0x20
        2c3c84:	e1a01005 	mov	r1, r5
        2c3c88:	eb6409b6 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2c3c8c:	e59d0000 	ldr	r0, [sp]
        2c3c90:	eb63fd49 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c3c94:	e28dd004 	add	sp, sp, #4	; 0x4
        2c3c98:	e28dd004 	add	sp, sp, #4	; 0x4
        2c3c9c:	eaffff82 	b	2c3aac <TCompiler::ClosureWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x70>
        2c3ca0:	e1a01005 	mov	r1, r5
        2c3ca4:	e5940000 	ldr	r0, [r4]
        2c3ca8:	eb5e4b9e 	bl	1a56b28 <TFunctionState::$NoteVarReference(RefVar const &)>
        2c3cac:	e3300000 	teq	r0, #0	; 0x0
        2c3cb0:	1affff7d 	bne	2c3aac <TCompiler::ClosureWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x70>
        2c3cb4:	e3a01000 	mov	r1, #0	; 0x0
        2c3cb8:	e5940000 	ldr	r0, [r4]
        2c3cbc:	eb5e4b98 	bl	1a56b24 <TFunctionState::$NoteMsgEnvReference(TFunctionState::MsgEnvComponent)>
        2c3cc0:	eaffff79 	b	2c3aac <TCompiler::ClosureWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x70>
    */
}

/**
 * Symbol: TCompiler::WalkForClosures(RefVar const &)
 * Address: 002c3d00
 */
TCompiler::WalkForClosures(RefVar const &) {
    /*
        2c3d00:	e1a0c00d 	mov	ip, sp
        2c3d04:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2c3d08:	e24cb004 	sub	fp, ip, #4	; 0x4
        2c3d0c:	e1a04000 	mov	r4, r0
        2c3d10:	e1a05001 	mov	r5, r1
        2c3d14:	e5900000 	ldr	r0, [r0]
        2c3d18:	eb5e3aff 	bl	1a5291c <TFunctionState::$ComputeInitialVarLocs(void)>
        2c3d1c:	e59f2018 	ldr	r2, [pc, #18]	; 2c3d3c <TCompiler::WalkForClosures(RefVar const &)+0x3c>
        2c3d20:	e1a01004 	mov	r1, r4
        2c3d24:	e1a00005 	mov	r0, r5
        2c3d28:	e3a03000 	mov	r3, #0	; 0x0
        2c3d2c:	eb5e57d4 	bl	1a59c84 <$WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii>
        2c3d30:	e5940000 	ldr	r0, [r4]
        2c3d34:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        2c3d38:	ea5e3af6 	b	1a52918 <TFunctionState::$ComputeArgFrame(void)>
        2c3d3c:	01a52900 	moveq	r2, r0, lsl #18
    */
}

/**
 * Symbol: TCompiler::Simplify(RefVar const &)
 * Address: 002c3d40
 */
TCompiler::Simplify(RefVar const &) {
    /*
        2c3d40:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCompiler::Compile(void)
 * Address: 002c3d44
 */
TCompiler::Compile(void) {
    /*
        2c3d44:	e1a0c00d 	mov	ip, sp
        2c3d48:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2c3d4c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2c3d50:	e1a04000 	mov	r4, r0
        2c3d54:	e3a07000 	mov	r7, #0	; 0x0
        2c3d58:	e5807024 	str	r7, [r0, #36]	; fField36
        2c3d5c:	e5807000 	str	r7, [r0]
        2c3d60:	e5807004 	str	r7, [r0, #4]	; fField4
        2c3d64:	e24dd008 	sub	sp, sp, #8	; 0x8
        2c3d68:	eb5e4b71 	bl	1a56b34 <TCompiler::$Parser(void)>
        2c3d6c:	e1a08000 	mov	r8, r0
        2c3d70:	e59f6050 	ldr	r6, [pc, #50]	; 2c3dc8 <TCompiler::Compile(void)+0x84>
        2c3d74:	e5960000 	ldr	r0, [r6]
        2c3d78:	eb63f8f3 	bl	1bc214c <$AllocateRefHandle(long)>
        2c3d7c:	e58d0000 	str	r0, [sp]
        2c3d80:	e1a0100d 	mov	r1, sp
        2c3d84:	e3a00007 	mov	r0, #7	; 0x7
        2c3d88:	e2800c01 	add	r0, r0, #256	; 0x100
        2c3d8c:	ebffeefc 	bl	2bf984 <AllocatePT1(int, RefVar const &)>
        2c3d90:	eb63f8ed 	bl	1bc214c <$AllocateRefHandle(long)>
        2c3d94:	e58d0004 	str	r0, [sp, #4]	; fField4
        2c3d98:	e59d0000 	ldr	r0, [sp]
        2c3d9c:	eb63fd06 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c3da0:	e3a05002 	mov	r5, #2	; 0x2
        2c3da4:	e5865000 	str	r5, [r6]
        2c3da8:	e59f001c 	ldr	r0, [pc, #1c]	; 2c3dcc <TCompiler::Compile(void)+0x88>
        2c3dac:	e3380000 	teq	r8, #0	; 0x0
        2c3db0:	e5805000 	str	r5, [r0]
        2c3db4:	0a000005 	beq	2c3dd0 <TCompiler::Compile(void)+0x8c>
        2c3db8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c3dbc:	eb63fcfe 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c3dc0:	e1a00005 	mov	r0, r5
        2c3dc4:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2c3dc8:	0c105590 	ldceq	5, cr5, [r0], -#576
        2c3dcc:	0c105594 	ldceq	5, cr5, [r0], -#592
        2c3dd0:	e59f0040 	ldr	r0, [pc, #40]	; 2c3e18 <TCompiler::Compile(void)+0xd4>	; fField40
        2c3dd4:	e5905000 	ldr	r5, [r0]
        2c3dd8:	e28f0f0f 	add	r0, pc, #60	; 0x3c
        2c3ddc:	eb640527 	bl	1bc5280 <$Intern(char *)>
        2c3de0:	e1a01000 	mov	r1, r0
        2c3de4:	e1a00005 	mov	r0, r5
        2c3de8:	eb64011c 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2c3dec:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c3df0:	e2001003 	and	r1, r0, #3	; 0x3
        2c3df4:	e59f5038 	ldr	r5, [pc, #38]	; 2c3e34 <TCompiler::Compile(void)+0xf0>
        2c3df8:	e3a06001 	mov	r6, #1	; 0x1
        2c3dfc:	e3510000 	cmp	r1, #0	; 0x0
        2c3e00:	1a00000c 	bne	2c3e38 <TCompiler::Compile(void)+0xf4>
        2c3e04:	01a00140 	moveq	r0, r0, asr #2
        2c3e08:	0a000000 	beq	2c3e10 <TCompiler::Compile(void)+0xcc>
        2c3e0c:	eb63f8c2 	bl	1bc211c <$_RINTError(long)>
        2c3e10:	e5850000 	str	r0, [r5]
        2c3e14:	ea000008 	b	2c3e3c <TCompiler::Compile(void)+0xf8>
        2c3e18:	0c10180c 	ldceq	8, cr1, [r0], -#48	; fField48
        2c3e1c:	636f6d70 	cmnvs	pc, #7168	; 0x1c00
        2c3e20:	696c6572 	stmvsdb	ip!, {r1, r4, r5, r6, r8, sl, sp, lr}^
        2c3e24:	636f6d70 	cmnvs	pc, #7168	; 0x1c00
        2c3e28:	61746962 	cmnvs	r4, r2, ror #18
        2c3e2c:	696c6974 	stmvsdb	ip!, {r2, r4, r5, r6, r8, fp, sp, lr}^
        2c3e30:	79000000 	stmvcdb	r0, {}
        2c3e34:	0c1051ec 	ldfeqs	f5, [r0], -#944
        2c3e38:	e5856000 	str	r6, [r5]
        2c3e3c:	e59f012c 	ldr	r0, [pc, #12c]	; 2c3f70 <TCompiler::Compile(void)+0x22c>	; fField12
        2c3e40:	e3a01000 	mov	r1, #0	; 0x0
        2c3e44:	eb63f8bb 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        2c3e48:	eb63f8bf 	bl	1bc214c <$AllocateRefHandle(long)>
        2c3e4c:	e58d0000 	str	r0, [sp]
        2c3e50:	e1a0100d 	mov	r1, sp
        2c3e54:	e5943024 	ldr	r3, [r4, #36]	; fField36
        2c3e58:	e1a00004 	mov	r0, r4
        2c3e5c:	e3a02000 	mov	r2, #0	; 0x0
        2c3e60:	eb5e4b2b 	bl	1a56b14 <TCompiler::$NewFunctionState(RefVar const &, TFunctionState *, int *)>
        2c3e64:	e59d0000 	ldr	r0, [sp]
        2c3e68:	eb63fcd3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c3e6c:	e3a00002 	mov	r0, #2	; 0x2
        2c3e70:	eb63f8b5 	bl	1bc214c <$AllocateRefHandle(long)>
        2c3e74:	e1a05000 	mov	r5, r0
        2c3e78:	e3a08000 	mov	r8, #0	; 0x0
        2c3e7c:	e52d706c 	str	r7, [sp, -#108]!
        2c3e80:	e28d0008 	add	r0, sp, #8	; 0x8
        2c3e84:	eb63baba 	bl	1bb2974 <$setjmp>
        2c3e88:	e3300000 	teq	r0, #0	; 0x0
        2c3e8c:	1a000041 	bne	2c3f98 <TCompiler::Compile(void)+0x254>
        2c3e90:	e1a0000d 	mov	r0, sp
        2c3e94:	eb647078 	bl	1be007c <$AddExceptionHandler>
        2c3e98:	e28d1074 	add	r1, sp, #116	; 0x74
        2c3e9c:	e1a00004 	mov	r0, r4
        2c3ea0:	eb5e5374 	bl	1a58c78 <TCompiler::$WalkForDeclarations(RefVar const &)>
        2c3ea4:	e28d1074 	add	r1, sp, #116	; 0x74
        2c3ea8:	e1a00004 	mov	r0, r4
        2c3eac:	eb651dc5 	bl	1c0b5c8 <TCompiler::$Simplify(RefVar const &)>
        2c3eb0:	e28d1074 	add	r1, sp, #116	; 0x74
        2c3eb4:	e1a00004 	mov	r0, r4
        2c3eb8:	eb5e536c 	bl	1a58c70 <TCompiler::$WalkForClosures(RefVar const &)>
        2c3ebc:	e59d0074 	ldr	r0, [sp, #116]	; fField116
        2c3ec0:	e5900000 	ldr	r0, [r0]
        2c3ec4:	e1a01006 	mov	r1, r6
        2c3ec8:	eb6400e1 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c3ecc:	eb6404f6 	bl	1bc52ac <$Length(long)>
        2c3ed0:	e1a09000 	mov	r9, r0
        2c3ed4:	e3500000 	cmp	r0, #0	; 0x0
        2c3ed8:	da000018 	ble	2c3f40 <TCompiler::Compile(void)+0x1fc>
        2c3edc:	e59d0074 	ldr	r0, [sp, #116]	; fField116
        2c3ee0:	e5900000 	ldr	r0, [r0]
        2c3ee4:	e1a01006 	mov	r1, r6
        2c3ee8:	eb6400d9 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c3eec:	e2491001 	sub	r1, r9, #1	; 0x1
        2c3ef0:	eb6400d7 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c3ef4:	eb63f894 	bl	1bc214c <$AllocateRefHandle(long)>
        2c3ef8:	e1a06000 	mov	r6, r0
        2c3efc:	e5900000 	ldr	r0, [r0]
        2c3f00:	e1a01007 	mov	r1, r7
        2c3f04:	eb6400d2 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c3f08:	e3100003 	tst	r0, #3	; 0x3
        2c3f0c:	01a00140 	moveq	r0, r0, asr #2
        2c3f10:	0a000000 	beq	2c3f18 <TCompiler::Compile(void)+0x1d4>
        2c3f14:	eb63f880 	bl	1bc211c <$_RINTError(long)>
        2c3f18:	e240cf4b 	sub	ip, r0, #300	; 0x12c
        2c3f1c:	e33c0003 	teq	ip, #3	; 0x3
        2c3f20:	13a07000 	movne	r7, #0	; 0x0
        2c3f24:	03a07001 	moveq	r7, #1	; 0x1
        2c3f28:	e1a00006 	mov	r0, r6
        2c3f2c:	eb63fca2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c3f30:	e3370000 	teq	r7, #0	; 0x0
        2c3f34:	11a00004 	movne	r0, r4
        2c3f38:	128f1f0d 	addne	r1, pc, #52	; 0x34
        2c3f3c:	1b5e5751 	blne	1a59c88 <TCompiler::$Warning(char *)>
        2c3f40:	e5940000 	ldr	r0, [r4]
        2c3f44:	eb5e3a75 	bl	1a52920 <TFunctionState::$CopyClosedArgs(void)>
        2c3f48:	e28d1074 	add	r1, sp, #116	; 0x74
        2c3f4c:	e1a00004 	mov	r0, r4
        2c3f50:	e3a02000 	mov	r2, #0	; 0x0
        2c3f54:	eb5e5346 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c3f58:	e1a00004 	mov	r0, r4
        2c3f5c:	eb5e3e8b 	bl	1a53990 <TCompiler::$EndFunction(void)>
        2c3f60:	e5850000 	str	r0, [r5]
        2c3f64:	e1a0000d 	mov	r0, sp
        2c3f68:	eb647452 	bl	1be10b8 <$ExitHandler>
        2c3f6c:	ea00000a 	b	2c3f9c <TCompiler::Compile(void)+0x258>
        2c3f70:	00681f10 	rsbeq	r1, r8, r0, lsl pc
        2c3f74:	3d206174 	stfccs	f6, [r0, -#464]!
        2c3f78:	20746f70 	rsbcss	r6, r4, r0, ror pc
        2c3f7c:	206c6576 	rsbcs	r6, ip, r6, ror r5
        2c3f80:	656c2e2e 	strvsb	r2, [ip, -#3630]!
        2c3f84:	2e646964 	cdpcs	9, 6, cr6, cr4, cr4, {3}
        2c3f88:	20796f75 	rsbcss	r6, r9, r5, ror pc
        2c3f8c:	206d6561 	rsbcs	r6, sp, r1, ror #10
        2c3f90:	6e203a3d 	mcrvs	10, 1, r3, cr0, cr13, {1}
        2c3f94:	203f0000 	eorcss	r0, pc, r0
        2c3f98:	e3a08001 	mov	r8, #1	; 0x1
        2c3f9c:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        2c3fa0:	e3300000 	teq	r0, #0	; 0x0
        2c3fa4:	13a01001 	movne	r1, #1	; 0x1
        2c3fa8:	1b5e5746 	blne	1a59cc8 <TFunctionState::$__dt(void)>
        2c3fac:	e3380000 	teq	r8, #0	; 0x0
        2c3fb0:	11a0000d 	movne	r0, sp
        2c3fb4:	1b647866 	blne	1be2154 <$NextHandler>
        2c3fb8:	e28dd06c 	add	sp, sp, #108	; 0x6c
        2c3fbc:	e5954000 	ldr	r4, [r5]
        2c3fc0:	e1a00005 	mov	r0, r5
        2c3fc4:	eb63fc7c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c3fc8:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2c3fcc:	eb63fc7a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c3fd0:	e1a00004 	mov	r0, r4
        2c3fd4:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TCompiler::WalkAssignment(RefVar const &, RefVar const &, unsigned char)
 * Address: 002c3fd8
 */
TCompiler::WalkAssignment(RefVar const &, RefVar const &, unsigned char) {
    /*
        2c3fd8:	e1a0c00d 	mov	ip, sp
        2c3fdc:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2c3fe0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2c3fe4:	e1a04000 	mov	r4, r0
        2c3fe8:	e1a05001 	mov	r5, r1
        2c3fec:	e1a06002 	mov	r6, r2
        2c3ff0:	e20370ff 	and	r7, r3, #255	; 0xff
        2c3ff4:	e5910000 	ldr	r0, [r1]
        2c3ff8:	e5900000 	ldr	r0, [r0]
        2c3ffc:	e3a09000 	mov	r9, #0	; 0x0
        2c4000:	e1a01009 	mov	r1, r9
        2c4004:	eb640092 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c4008:	e3100003 	tst	r0, #3	; 0x3
        2c400c:	01a00140 	moveq	r0, r0, asr #2
        2c4010:	0a000000 	beq	2c4018 <TCompiler::WalkAssignment(RefVar const &, RefVar const &, unsigned char)+0x40>
        2c4014:	eb63f840 	bl	1bc211c <$_RINTError(long)>
        2c4018:	e3a08001 	mov	r8, #1	; 0x1
        2c401c:	e240cc01 	sub	ip, r0, #256	; 0x100
        2c4020:	e33c0003 	teq	ip, #3	; 0x3
        2c4024:	1a000024 	bne	2c40bc <TCompiler::WalkAssignment(RefVar const &, RefVar const &, unsigned char)+0xe4>
        2c4028:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c402c:	e5950000 	ldr	r0, [r5]
        2c4030:	e5900000 	ldr	r0, [r0]
        2c4034:	e1a01008 	mov	r1, r8
        2c4038:	eb640085 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c403c:	eb63f842 	bl	1bc214c <$AllocateRefHandle(long)>
        2c4040:	e58d0000 	str	r0, [sp]
        2c4044:	e1a0100d 	mov	r1, sp
        2c4048:	e5940000 	ldr	r0, [r4]
        2c404c:	eb5e469c 	bl	1a55ac4 <TFunctionState::$IsConstant(RefVar const &)>
        2c4050:	e3300000 	teq	r0, #0	; 0x0
        2c4054:	0a000004 	beq	2c406c <TCompiler::WalkAssignment(RefVar const &, RefVar const &, unsigned char)+0x94>
        2c4058:	e1a0200d 	mov	r2, sp
        2c405c:	e1a00004 	mov	r0, r4
        2c4060:	e3a01025 	mov	r1, #37	; 0x25
        2c4064:	e2411cbe 	sub	r1, r1, #48640	; 0xbe00
        2c4068:	eb5e3e4c 	bl	1a539a0 <TCompiler::$Error(long, RefVar const &)>
        2c406c:	e1a01006 	mov	r1, r6
        2c4070:	e1a00004 	mov	r0, r4
        2c4074:	e3a02000 	mov	r2, #0	; 0x0
        2c4078:	eb5e52fd 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c407c:	e1a0100d 	mov	r1, sp
        2c4080:	e1a00004 	mov	r0, r4
        2c4084:	eb5e3e3e 	bl	1a53984 <TCompiler::$EmitVarSet(RefVar const &)>
        2c4088:	e3370000 	teq	r7, #0	; 0x0
        2c408c:	0a000003 	beq	2c40a0 <TCompiler::WalkAssignment(RefVar const &, RefVar const &, unsigned char)+0xc8>
        2c4090:	e59d0000 	ldr	r0, [sp]
        2c4094:	eb63fc48 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c4098:	e1a00009 	mov	r0, r9
        2c409c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2c40a0:	e1a0100d 	mov	r1, sp
        2c40a4:	e1a00004 	mov	r0, r4
        2c40a8:	eb5e3a33 	bl	1a5297c <TCompiler::$EmitVarGet(RefVar const &)>
        2c40ac:	e59d0000 	ldr	r0, [sp]
        2c40b0:	eb63fc41 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c40b4:	e28dd004 	add	sp, sp, #4	; 0x4
        2c40b8:	ea000047 	b	2c41dc <TCompiler::WalkAssignment(RefVar const &, RefVar const &, unsigned char)+0x204>
        2c40bc:	e330002e 	teq	r0, #46	; 0x2e
        2c40c0:	1a000020 	bne	2c4148 <TCompiler::WalkAssignment(RefVar const &, RefVar const &, unsigned char)+0x170>
        2c40c4:	e24dd008 	sub	sp, sp, #8	; 0x8
        2c40c8:	e3a00001 	mov	r0, #1	; 0x1
        2c40cc:	e58d0004 	str	r0, [sp, #4]	; fField4
        2c40d0:	e28d2004 	add	r2, sp, #4	; 0x4
        2c40d4:	e1a01005 	mov	r1, r5
        2c40d8:	e1a00004 	mov	r0, r4
        2c40dc:	eb5e52e6 	bl	1a58c7c <TCompiler::$WalkForPath(RefVar const &, long &)>
        2c40e0:	eb63f819 	bl	1bc214c <$AllocateRefHandle(long)>
        2c40e4:	e58d0000 	str	r0, [sp]
        2c40e8:	e5900000 	ldr	r0, [r0]
        2c40ec:	e3300002 	teq	r0, #2	; 0x2
        2c40f0:	11a0100d 	movne	r1, sp
        2c40f4:	11a00004 	movne	r0, r4
        2c40f8:	1b5e3a1c 	blne	1a52970 <TCompiler::$EmitPush(RefVar const &)>
        2c40fc:	e1a01006 	mov	r1, r6
        2c4100:	e1a00004 	mov	r0, r4
        2c4104:	e3a02000 	mov	r2, #0	; 0x0
        2c4108:	eb5e52d9 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c410c:	e3370000 	teq	r7, #0	; 0x0
        2c4110:	13a02000 	movne	r2, #0	; 0x0
        2c4114:	03a02001 	moveq	r2, #1	; 0x1
        2c4118:	e1a00004 	mov	r0, r4
        2c411c:	e3a01013 	mov	r1, #19	; 0x13
        2c4120:	eb5e3e19 	bl	1a5398c <TCompiler::$Emit(Opcode, long)>
        2c4124:	e3370000 	teq	r7, #0	; 0x0
        2c4128:	e59d0000 	ldr	r0, [sp]
        2c412c:	0a000002 	beq	2c413c <TCompiler::WalkAssignment(RefVar const &, RefVar const &, unsigned char)+0x164>
        2c4130:	eb63fc21 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c4134:	e1a00009 	mov	r0, r9
        2c4138:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2c413c:	eb63fc1e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c4140:	e28dd008 	add	sp, sp, #8	; 0x8
        2c4144:	ea000024 	b	2c41dc <TCompiler::WalkAssignment(RefVar const &, RefVar const &, unsigned char)+0x204>
        2c4148:	e330005b 	teq	r0, #91	; 0x5b
        2c414c:	1a000022 	bne	2c41dc <TCompiler::WalkAssignment(RefVar const &, RefVar const &, unsigned char)+0x204>
        2c4150:	e24dd008 	sub	sp, sp, #8	; 0x8
        2c4154:	e5950000 	ldr	r0, [r5]
        2c4158:	e5900000 	ldr	r0, [r0]
        2c415c:	e1a01008 	mov	r1, r8
        2c4160:	eb64003b 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c4164:	eb63f7f8 	bl	1bc214c <$AllocateRefHandle(long)>
        2c4168:	e58d0000 	str	r0, [sp]
        2c416c:	e1a0100d 	mov	r1, sp
        2c4170:	e1a00004 	mov	r0, r4
        2c4174:	e3a02000 	mov	r2, #0	; 0x0
        2c4178:	eb5e52bd 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c417c:	e59d0000 	ldr	r0, [sp]
        2c4180:	eb63fc0d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c4184:	e5950000 	ldr	r0, [r5]
        2c4188:	e5900000 	ldr	r0, [r0]
        2c418c:	e3a01002 	mov	r1, #2	; 0x2
        2c4190:	eb64002f 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c4194:	eb63f7ec 	bl	1bc214c <$AllocateRefHandle(long)>
        2c4198:	e58d0004 	str	r0, [sp, #4]	; fField4
        2c419c:	e28d1004 	add	r1, sp, #4	; 0x4
        2c41a0:	e1a00004 	mov	r0, r4
        2c41a4:	e3a02000 	mov	r2, #0	; 0x0
        2c41a8:	eb5e52b1 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c41ac:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c41b0:	eb63fc01 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c41b4:	e1a01006 	mov	r1, r6
        2c41b8:	e1a00004 	mov	r0, r4
        2c41bc:	e3a02000 	mov	r2, #0	; 0x0
        2c41c0:	eb5e52ab 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c41c4:	e59f100c 	ldr	r1, [pc, #c]	; 2c41d8 <TCompiler::WalkAssignment(RefVar const &, RefVar const &, unsigned char)+0x200>
        2c41c8:	e1a00004 	mov	r0, r4
        2c41cc:	e3a02003 	mov	r2, #3	; 0x3
        2c41d0:	eb5e39e1 	bl	1a5295c <TCompiler::$EmitFuncall(RefVar const &, unsigned long)>
        2c41d4:	eaffffd9 	b	2c4140 <TCompiler::WalkAssignment(RefVar const &, RefVar const &, unsigned char)+0x168>
        2c41d8:	00684558 	rsbeq	r4, r8, r8, asr r5
        2c41dc:	e1a00008 	mov	r0, r8
        2c41e0:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TCompiler::WalkForPath(RefVar const &, long &)
 * Address: 002c41e4
 */
TCompiler::WalkForPath(RefVar const &, long &) {
    /*
        2c41e4:	e1a0c00d 	mov	ip, sp
        2c41e8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2c41ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        2c41f0:	e1a04000 	mov	r4, r0
        2c41f4:	e1a06001 	mov	r6, r1
        2c41f8:	e1a05002 	mov	r5, r2
        2c41fc:	e5910000 	ldr	r0, [r1]
        2c4200:	e5900000 	ldr	r0, [r0]
        2c4204:	e3a08000 	mov	r8, #0	; 0x0
        2c4208:	e1a01008 	mov	r1, r8
        2c420c:	eb640010 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c4210:	e3100003 	tst	r0, #3	; 0x3
        2c4214:	01a00140 	moveq	r0, r0, asr #2
        2c4218:	0a000000 	beq	2c4220 <TCompiler::WalkForPath(RefVar const &, long &)+0x3c>
        2c421c:	eb63f7be 	bl	1bc211c <$_RINTError(long)>
        2c4220:	e3a09002 	mov	r9, #2	; 0x2
        2c4224:	e330002e 	teq	r0, #46	; 0x2e
        2c4228:	1a0000bf 	bne	2c452c <TCompiler::WalkForPath(RefVar const &, long &)+0x348>
        2c422c:	e24dd008 	sub	sp, sp, #8	; 0x8
        2c4230:	e5960000 	ldr	r0, [r6]
        2c4234:	e5900000 	ldr	r0, [r0]
        2c4238:	e3a07001 	mov	r7, #1	; 0x1
        2c423c:	e1a01007 	mov	r1, r7
        2c4240:	eb640003 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c4244:	eb63f7c0 	bl	1bc214c <$AllocateRefHandle(long)>
        2c4248:	e58d0004 	str	r0, [sp, #4]	; fField4
        2c424c:	e5960000 	ldr	r0, [r6]
        2c4250:	e5900000 	ldr	r0, [r0]
        2c4254:	e1a01009 	mov	r1, r9
        2c4258:	eb63fffd 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c425c:	eb63f7ba 	bl	1bc214c <$AllocateRefHandle(long)>
        2c4260:	e58d0000 	str	r0, [sp]
        2c4264:	e5900000 	ldr	r0, [r0]
        2c4268:	e1a01008 	mov	r1, r8
        2c426c:	eb63fff8 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c4270:	e3100003 	tst	r0, #3	; 0x3
        2c4274:	01a00140 	moveq	r0, r0, asr #2
        2c4278:	0a000000 	beq	2c4280 <TCompiler::WalkForPath(RefVar const &, long &)+0x9c>
        2c427c:	eb63f7a6 	bl	1bc211c <$_RINTError(long)>
        2c4280:	e240cc01 	sub	ip, r0, #256	; 0x100
        2c4284:	e33c0002 	teq	ip, #2	; 0x2
        2c4288:	1a000072 	bne	2c4458 <TCompiler::WalkForPath(RefVar const &, long &)+0x274>
        2c428c:	e59d0000 	ldr	r0, [sp]
        2c4290:	e5900000 	ldr	r0, [r0]
        2c4294:	e1a01007 	mov	r1, r7
        2c4298:	eb63ffed 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c429c:	eb640400 	bl	1bc52a4 <$IsSymbol(long)>
        2c42a0:	e3300000 	teq	r0, #0	; 0x0
        2c42a4:	0a00006b 	beq	2c4458 <TCompiler::WalkForPath(RefVar const &, long &)+0x274>
        2c42a8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c42ac:	e5900000 	ldr	r0, [r0]
        2c42b0:	e1a01008 	mov	r1, r8
        2c42b4:	eb63ffe6 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c42b8:	e3100003 	tst	r0, #3	; 0x3
        2c42bc:	01a00140 	moveq	r0, r0, asr #2
        2c42c0:	0a000000 	beq	2c42c8 <TCompiler::WalkForPath(RefVar const &, long &)+0xe4>
        2c42c4:	eb63f794 	bl	1bc211c <$_RINTError(long)>
        2c42c8:	e330002e 	teq	r0, #46	; 0x2e
        2c42cc:	1a000052 	bne	2c441c <TCompiler::WalkForPath(RefVar const &, long &)+0x238>
        2c42d0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c42d4:	e1a02005 	mov	r2, r5
        2c42d8:	e28d1008 	add	r1, sp, #8	; 0x8
        2c42dc:	e1a00004 	mov	r0, r4
        2c42e0:	eb5e5265 	bl	1a58c7c <TCompiler::$WalkForPath(RefVar const &, long &)>
        2c42e4:	eb63f798 	bl	1bc214c <$AllocateRefHandle(long)>
        2c42e8:	e58d0000 	str	r0, [sp]
        2c42ec:	e5900000 	ldr	r0, [r0]
        2c42f0:	e3300002 	teq	r0, #2	; 0x2
        2c42f4:	1a000011 	bne	2c4340 <TCompiler::WalkForPath(RefVar const &, long &)+0x15c>
        2c42f8:	e1a00004 	mov	r0, r4
        2c42fc:	e3a01012 	mov	r1, #18	; 0x12
        2c4300:	e5952000 	ldr	r2, [r5]
        2c4304:	eb5e3da0 	bl	1a5398c <TCompiler::$Emit(Opcode, long)>
        2c4308:	e5858000 	str	r8, [r5]
        2c430c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c4310:	e5900000 	ldr	r0, [r0]
        2c4314:	e1a01007 	mov	r1, r7
        2c4318:	eb63ffcd 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c431c:	e1a04000 	mov	r4, r0
        2c4320:	e59d0000 	ldr	r0, [sp]
        2c4324:	eb63fba4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c4328:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c432c:	eb63fba2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c4330:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2c4334:	eb63fba0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c4338:	e1a00004 	mov	r0, r4
        2c433c:	ea00006b 	b	2c44f0 <TCompiler::WalkForPath(RefVar const &, long &)+0x30c>
        2c4340:	eb6403d7 	bl	1bc52a4 <$IsSymbol(long)>
        2c4344:	e3300000 	teq	r0, #0	; 0x0
        2c4348:	0a00001e 	beq	2c43c8 <TCompiler::WalkForPath(RefVar const &, long &)+0x1e4>
        2c434c:	e59f0070 	ldr	r0, [pc, #70]	; 2c43c4 <TCompiler::WalkForPath(RefVar const &, long &)+0x1e0>
        2c4350:	e3a01002 	mov	r1, #2	; 0x2
        2c4354:	eb63f777 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        2c4358:	eb63f77b 	bl	1bc214c <$AllocateRefHandle(long)>
        2c435c:	e1a04000 	mov	r4, r0
        2c4360:	e5900000 	ldr	r0, [r0]
        2c4364:	e59d1000 	ldr	r1, [sp]
        2c4368:	e5912000 	ldr	r2, [r1]
        2c436c:	e1a01008 	mov	r1, r8
        2c4370:	eb6407f8 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c4374:	e5945000 	ldr	r5, [r4]
        2c4378:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c437c:	e5900000 	ldr	r0, [r0]
        2c4380:	e1a01007 	mov	r1, r7
        2c4384:	eb63ffb2 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c4388:	e1a02000 	mov	r2, r0
        2c438c:	e1a01007 	mov	r1, r7
        2c4390:	e1a00005 	mov	r0, r5
        2c4394:	eb6407ef 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c4398:	e5945000 	ldr	r5, [r4]
        2c439c:	e1a00004 	mov	r0, r4
        2c43a0:	eb63fb85 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c43a4:	e59d0000 	ldr	r0, [sp]
        2c43a8:	eb63fb83 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c43ac:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c43b0:	eb63fb81 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c43b4:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2c43b8:	eb63fb7f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c43bc:	e1a00005 	mov	r0, r5
        2c43c0:	ea00004a 	b	2c44f0 <TCompiler::WalkForPath(RefVar const &, long &)+0x30c>
        2c43c4:	00683d78 	rsbeq	r3, r8, r8, ror sp
        2c43c8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c43cc:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2c43d0:	e5900000 	ldr	r0, [r0]
        2c43d4:	e1a01007 	mov	r1, r7
        2c43d8:	eb63ff9d 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c43dc:	eb63f75a 	bl	1bc214c <$AllocateRefHandle(long)>
        2c43e0:	e58d0000 	str	r0, [sp]
        2c43e4:	e1a0100d 	mov	r1, sp
        2c43e8:	e28d0004 	add	r0, sp, #4	; 0x4
        2c43ec:	eb63f74d 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        2c43f0:	e59d0000 	ldr	r0, [sp]
        2c43f4:	eb63fb70 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c43f8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c43fc:	e5904000 	ldr	r4, [r0]
        2c4400:	eb63fb6d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c4404:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2c4408:	eb63fb6b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c440c:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        2c4410:	eb63fb69 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c4414:	e1a00004 	mov	r0, r4
        2c4418:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2c441c:	e28d1004 	add	r1, sp, #4	; 0x4
        2c4420:	e1a00004 	mov	r0, r4
        2c4424:	e3a02000 	mov	r2, #0	; 0x0
        2c4428:	eb5e5211 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c442c:	e59d0000 	ldr	r0, [sp]
        2c4430:	e5900000 	ldr	r0, [r0]
        2c4434:	e1a01007 	mov	r1, r7
        2c4438:	eb63ff85 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c443c:	e1a04000 	mov	r4, r0
        2c4440:	e59d0000 	ldr	r0, [sp]
        2c4444:	eb63fb5c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c4448:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c444c:	eb63fb5a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c4450:	e1a00004 	mov	r0, r4
        2c4454:	ea000033 	b	2c4528 <TCompiler::WalkForPath(RefVar const &, long &)+0x344>
        2c4458:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c445c:	e5900000 	ldr	r0, [r0]
        2c4460:	e1a01008 	mov	r1, r8
        2c4464:	eb63ff7a 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c4468:	e3100003 	tst	r0, #3	; 0x3
        2c446c:	01a00140 	moveq	r0, r0, asr #2
        2c4470:	0a000000 	beq	2c4478 <TCompiler::WalkForPath(RefVar const &, long &)+0x294>
        2c4474:	eb63f728 	bl	1bc211c <$_RINTError(long)>
        2c4478:	e330002e 	teq	r0, #46	; 0x2e
        2c447c:	1a00001c 	bne	2c44f4 <TCompiler::WalkForPath(RefVar const &, long &)+0x310>
        2c4480:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c4484:	e1a02005 	mov	r2, r5
        2c4488:	e28d1008 	add	r1, sp, #8	; 0x8
        2c448c:	e1a00004 	mov	r0, r4
        2c4490:	eb5e51f9 	bl	1a58c7c <TCompiler::$WalkForPath(RefVar const &, long &)>
        2c4494:	eb63f72c 	bl	1bc214c <$AllocateRefHandle(long)>
        2c4498:	e58d0000 	str	r0, [sp]
        2c449c:	e5900000 	ldr	r0, [r0]
        2c44a0:	e3300002 	teq	r0, #2	; 0x2
        2c44a4:	11a0100d 	movne	r1, sp
        2c44a8:	11a00004 	movne	r0, r4
        2c44ac:	1b5e392f 	blne	1a52970 <TCompiler::$EmitPush(RefVar const &)>
        2c44b0:	e1a00004 	mov	r0, r4
        2c44b4:	e3a01012 	mov	r1, #18	; 0x12
        2c44b8:	e5952000 	ldr	r2, [r5]
        2c44bc:	eb5e3d32 	bl	1a5398c <TCompiler::$Emit(Opcode, long)>
        2c44c0:	e28d1004 	add	r1, sp, #4	; 0x4
        2c44c4:	e1a00004 	mov	r0, r4
        2c44c8:	e3a02000 	mov	r2, #0	; 0x0
        2c44cc:	e5858000 	str	r8, [r5]
        2c44d0:	eb5e51e7 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c44d4:	e59d0000 	ldr	r0, [sp]
        2c44d8:	eb63fb37 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c44dc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c44e0:	eb63fb35 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c44e4:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2c44e8:	eb63fb33 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c44ec:	e1a00009 	mov	r0, r9
        2c44f0:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2c44f4:	e28d1004 	add	r1, sp, #4	; 0x4
        2c44f8:	e1a00004 	mov	r0, r4
        2c44fc:	e3a02000 	mov	r2, #0	; 0x0
        2c4500:	eb5e51db 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c4504:	e1a0100d 	mov	r1, sp
        2c4508:	e1a00004 	mov	r0, r4
        2c450c:	e3a02000 	mov	r2, #0	; 0x0
        2c4510:	eb5e51d7 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c4514:	e59d0000 	ldr	r0, [sp]
        2c4518:	eb63fb27 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c451c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c4520:	eb63fb25 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c4524:	e1a00009 	mov	r0, r9
        2c4528:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2c452c:	e1a02006 	mov	r2, r6
        2c4530:	e1a00004 	mov	r0, r4
        2c4534:	e3a01011 	mov	r1, #17	; 0x11
        2c4538:	e2411cbe 	sub	r1, r1, #48640	; 0xbe00
        2c453c:	eb5e3d17 	bl	1a539a0 <TCompiler::$Error(long, RefVar const &)>
        2c4540:	e1a00009 	mov	r0, r9
        2c4544:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TCompiler::WalkForStringer(RefVar const &)
 * Address: 002c4548
 */
TCompiler::WalkForStringer(RefVar const &) {
    /*
        2c4548:	e1a0c00d 	mov	ip, sp
        2c454c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2c4550:	e24cb004 	sub	fp, ip, #4	; 0x4
        2c4554:	e1a05000 	mov	r5, r0
        2c4558:	e1a04001 	mov	r4, r1
        2c455c:	e5910000 	ldr	r0, [r1]
        2c4560:	e5900000 	ldr	r0, [r0]
        2c4564:	e3a01000 	mov	r1, #0	; 0x0
        2c4568:	eb63ff39 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c456c:	e3100003 	tst	r0, #3	; 0x3
        2c4570:	01a00140 	moveq	r0, r0, asr #2
        2c4574:	0a000000 	beq	2c457c <TCompiler::WalkForStringer(RefVar const &)+0x34>
        2c4578:	eb63f6e7 	bl	1bc211c <$_RINTError(long)>
        2c457c:	e1a07000 	mov	r7, r0
        2c4580:	e3a06001 	mov	r6, #1	; 0x1
        2c4584:	e3a09032 	mov	r9, #50	; 0x32
        2c4588:	e2899c01 	add	r9, r9, #256	; 0x100
        2c458c:	e3300026 	teq	r0, #38	; 0x26
        2c4590:	11370009 	teqne	r7, r9
        2c4594:	1a00002c 	bne	2c464c <TCompiler::WalkForStringer(RefVar const &)+0x104>
        2c4598:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c459c:	e5940000 	ldr	r0, [r4]
        2c45a0:	e5900000 	ldr	r0, [r0]
        2c45a4:	e1a01006 	mov	r1, r6
        2c45a8:	eb63ff29 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c45ac:	eb63f6e6 	bl	1bc214c <$AllocateRefHandle(long)>
        2c45b0:	e58d0000 	str	r0, [sp]
        2c45b4:	e1a0100d 	mov	r1, sp
        2c45b8:	e1a00005 	mov	r0, r5
        2c45bc:	eb5e55af 	bl	1a59c80 <TCompiler::$WalkForStringer(RefVar const &)>
        2c45c0:	e1a08000 	mov	r8, r0
        2c45c4:	e59d0000 	ldr	r0, [sp]
        2c45c8:	eb63fafb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c45cc:	e3a06000 	mov	r6, #0	; 0x0
        2c45d0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c45d4:	e1370009 	teq	r7, r9
        2c45d8:	1a00000b 	bne	2c460c <TCompiler::WalkForStringer(RefVar const &)+0xc4>
        2c45dc:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c45e0:	e28f0f18 	add	r0, pc, #96	; 0x60
        2c45e4:	eb640339 	bl	1bc52d0 <$MakeString(char const *)>
        2c45e8:	eb63f6d7 	bl	1bc214c <$AllocateRefHandle(long)>
        2c45ec:	e58d0000 	str	r0, [sp]
        2c45f0:	e1a0100d 	mov	r1, sp
        2c45f4:	e1a00005 	mov	r0, r5
        2c45f8:	eb5e38dc 	bl	1a52970 <TCompiler::$EmitPush(RefVar const &)>
        2c45fc:	e59d0000 	ldr	r0, [sp]
        2c4600:	eb63faed 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c4604:	e3a06001 	mov	r6, #1	; 0x1
        2c4608:	e28dd004 	add	sp, sp, #4	; 0x4
        2c460c:	e5940000 	ldr	r0, [r4]
        2c4610:	e5900000 	ldr	r0, [r0]
        2c4614:	e3a01002 	mov	r1, #2	; 0x2
        2c4618:	eb63ff0d 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c461c:	eb63f6ca 	bl	1bc214c <$AllocateRefHandle(long)>
        2c4620:	e58d0000 	str	r0, [sp]
        2c4624:	e1a0100d 	mov	r1, sp
        2c4628:	e1a00005 	mov	r0, r5
        2c462c:	eb5e5593 	bl	1a59c80 <TCompiler::$WalkForStringer(RefVar const &)>
        2c4630:	e0881006 	add	r1, r8, r6
        2c4634:	e0804001 	add	r4, r0, r1
        2c4638:	e59d0000 	ldr	r0, [sp]
        2c463c:	eb63fade 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c4640:	e1a00004 	mov	r0, r4
        2c4644:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2c4648:	20000000 	andcs	r0, r0, r0
        2c464c:	e1a01004 	mov	r1, r4
        2c4650:	e1a00005 	mov	r0, r5
        2c4654:	e3a02000 	mov	r2, #0	; 0x0
        2c4658:	eb5e5185 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c465c:	e1a00006 	mov	r0, r6
        2c4660:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TCompiler::WalkForCode(RefVar const &, unsigned char)
 * Address: 002c4664
 */
TCompiler::WalkForCode(RefVar const &, unsigned char) {
    /*
        2c4664:	e1a0c00d 	mov	ip, sp
        2c4668:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2c466c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2c4670:	e1a04000 	mov	r4, r0
        2c4674:	e1a0a001 	mov	sl, r1
        2c4678:	e20260ff 	and	r6, r2, #255	; 0xff
        2c467c:	e24dd024 	sub	sp, sp, #36	; 0x24
        2c4680:	e5910000 	ldr	r0, [r1]
        2c4684:	e5900000 	ldr	r0, [r0]
        2c4688:	e3a08000 	mov	r8, #0	; 0x0
        2c468c:	e1a01008 	mov	r1, r8
        2c4690:	eb63feef 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c4694:	e3100003 	tst	r0, #3	; 0x3
        2c4698:	01a00140 	moveq	r0, r0, asr #2
        2c469c:	0a000000 	beq	2c46a4 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x40>
        2c46a0:	eb63f69d 	bl	1bc211c <$_RINTError(long)>
        2c46a4:	e58d0014 	str	r0, [sp, #20]	; fField20
        2c46a8:	e59a0000 	ldr	r0, [sl]
        2c46ac:	e5900000 	ldr	r0, [r0]
        2c46b0:	eb6402fd 	bl	1bc52ac <$Length(long)>
        2c46b4:	e2405001 	sub	r5, r0, #1	; 0x1
        2c46b8:	e3550001 	cmp	r5, #1	; 0x1
        2c46bc:	3a000004 	bcc	2c46d4 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x70>
        2c46c0:	e59a0000 	ldr	r0, [sl]
        2c46c4:	e5900000 	ldr	r0, [r0]
        2c46c8:	e3a01001 	mov	r1, #1	; 0x1
        2c46cc:	eb63fee0 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c46d0:	ea000000 	b	2c46d8 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x74>
        2c46d4:	e3a00002 	mov	r0, #2	; 0x2
        2c46d8:	eb63f69b 	bl	1bc214c <$AllocateRefHandle(long)>
        2c46dc:	e3550002 	cmp	r5, #2	; 0x2
        2c46e0:	e58d0010 	str	r0, [sp, #16]
        2c46e4:	3a000004 	bcc	2c46fc <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x98>
        2c46e8:	e59a0000 	ldr	r0, [sl]
        2c46ec:	e5900000 	ldr	r0, [r0]
        2c46f0:	e3a01002 	mov	r1, #2	; 0x2
        2c46f4:	eb63fed6 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c46f8:	ea000000 	b	2c4700 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x9c>
        2c46fc:	e3a00002 	mov	r0, #2	; 0x2
        2c4700:	eb63f691 	bl	1bc214c <$AllocateRefHandle(long)>
        2c4704:	e3550003 	cmp	r5, #3	; 0x3
        2c4708:	e58d000c 	str	r0, [sp, #12]	; fField12
        2c470c:	3a000004 	bcc	2c4724 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xc0>
        2c4710:	e59a0000 	ldr	r0, [sl]
        2c4714:	e5900000 	ldr	r0, [r0]
        2c4718:	e3a01003 	mov	r1, #3	; 0x3
        2c471c:	eb63fecc 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c4720:	ea000000 	b	2c4728 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xc4>
        2c4724:	e3a00002 	mov	r0, #2	; 0x2
        2c4728:	eb63f687 	bl	1bc214c <$AllocateRefHandle(long)>
        2c472c:	e3550004 	cmp	r5, #4	; 0x4
        2c4730:	e58d0008 	str	r0, [sp, #8]	; fField8
        2c4734:	3a000004 	bcc	2c474c <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xe8>
        2c4738:	e59a0000 	ldr	r0, [sl]
        2c473c:	e5900000 	ldr	r0, [r0]
        2c4740:	e3a01004 	mov	r1, #4	; 0x4
        2c4744:	eb63fec2 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c4748:	ea000000 	b	2c4750 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xec>
        2c474c:	e3a00002 	mov	r0, #2	; 0x2
        2c4750:	eb63f67d 	bl	1bc214c <$AllocateRefHandle(long)>
        2c4754:	e3550005 	cmp	r5, #5	; 0x5
        2c4758:	e58d0004 	str	r0, [sp, #4]	; fField4
        2c475c:	3a000004 	bcc	2c4774 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x110>
        2c4760:	e59a0000 	ldr	r0, [sl]
        2c4764:	e5900000 	ldr	r0, [r0]
        2c4768:	e3a01005 	mov	r1, #5	; 0x5
        2c476c:	eb63feb8 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c4770:	ea000000 	b	2c4778 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x114>
        2c4774:	e3a00002 	mov	r0, #2	; 0x2
        2c4778:	eb63f673 	bl	1bc214c <$AllocateRefHandle(long)>
        2c477c:	e3a05000 	mov	r5, #0	; 0x0
        2c4780:	e3a07001 	mov	r7, #1	; 0x1
        2c4784:	e58d0000 	str	r0, [sp]
        2c4788:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        2c478c:	e250cf46 	subs	ip, r0, #280	; 0x118
        2c4790:	a35c0002 	cmpge	ip, #2	; 0x2
        2c4794:	0a00060d 	beq	2c5fd0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x196c>
        2c4798:	e59f9084 	ldr	r9, [pc, #84]	; 2c4824 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1c0>
        2c479c:	e59f1084 	ldr	r1, [pc, #84]	; 2c4828 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1c4>
        2c47a0:	e58d1020 	str	r1, [sp, #32]
        2c47a4:	ca0000d1 	bgt	2c4af0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x48c>
        2c47a8:	e250cf41 	subs	ip, r0, #260	; 0x104
        2c47ac:	a35c0003 	cmpge	ip, #3	; 0x3
        2c47b0:	0a0002df 	beq	2c5334 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xcd0>
        2c47b4:	ca000047 	bgt	2c48d8 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x274>
        2c47b8:	e350003a 	cmp	r0, #58	; 0x3a
        2c47bc:	0a0000ed 	beq	2c4b78 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x514>
        2c47c0:	ca00001a 	bgt	2c4830 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1cc>
        2c47c4:	e2400026 	sub	r0, r0, #38	; 0x26
        2c47c8:	e3500009 	cmp	r0, #9	; 0x9
        2c47cc:	908ff100 	addls	pc, pc, r0, lsl #2
        2c47d0:	ea0007f6 	b	2c67b0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x214c>
        2c47d4:	ea0006d9 	b	2c6340 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1cdc>
        2c47d8:	ea0007f4 	b	2c67b0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x214c>
        2c47dc:	ea0007f3 	b	2c67b0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x214c>
        2c47e0:	ea0007f2 	b	2c67b0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x214c>
        2c47e4:	ea000132 	b	2c4cb4 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x650>
        2c47e8:	ea000119 	b	2c4c54 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x5f0>
        2c47ec:	ea0007ef 	b	2c67b0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x214c>
        2c47f0:	ea000123 	b	2c4c84 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x620>
        2c47f4:	ea0000f7 	b	2c4bd8 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x574>
        2c47f8:	e3a05001 	mov	r5, #1	; 0x1
        2c47fc:	e28d1010 	add	r1, sp, #16	; 0x10
        2c4800:	e1a00004 	mov	r0, r4
        2c4804:	e3a02000 	mov	r2, #0	; 0x0
        2c4808:	eb5e5119 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c480c:	e28d100c 	add	r1, sp, #12	; 0xc
        2c4810:	e1a00004 	mov	r0, r4
        2c4814:	e3a02000 	mov	r2, #0	; 0x0
        2c4818:	eb5e5115 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c481c:	e59f1008 	ldr	r1, [pc, #8]	; 2c482c <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1c8>	; fField8
        2c4820:	ea00034d 	b	2c555c <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xef8>
        2c4824:	00681ee8 	rsbeq	r1, r8, r8, ror #29
        2c4828:	00681f10 	rsbeq	r1, r8, r0, lsl pc
        2c482c:	00681cb8 	streqh	r1, [r8], -#200
        2c4830:	e350005b 	cmp	r0, #91	; 0x5b
        2c4834:	0a0000fb 	beq	2c4c28 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x5c4>
        2c4838:	ca00000f 	bgt	2c487c <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x218>
        2c483c:	e330003c 	teq	r0, #60	; 0x3c
        2c4840:	0a000157 	beq	2c4da4 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x740>
        2c4844:	e330003e 	teq	r0, #62	; 0x3e
        2c4848:	1a0007d8 	bne	2c67b0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x214c>
        2c484c:	e3a05001 	mov	r5, #1	; 0x1
        2c4850:	e28d1010 	add	r1, sp, #16	; 0x10
        2c4854:	e1a00004 	mov	r0, r4
        2c4858:	e3a02000 	mov	r2, #0	; 0x0
        2c485c:	eb5e5104 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c4860:	e28d100c 	add	r1, sp, #12	; 0xc
        2c4864:	e1a00004 	mov	r0, r4
        2c4868:	e3a02000 	mov	r2, #0	; 0x0
        2c486c:	eb5e5100 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c4870:	e59f1000 	ldr	r1, [pc, #0]	; 2c4878 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x214>
        2c4874:	ea000338 	b	2c555c <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xef8>
        2c4878:	00681cf0 	streqd	r1, [r8], -#192
        2c487c:	e240cc01 	sub	ip, r0, #256	; 0x100
        2c4880:	e33c0002 	teq	ip, #2	; 0x2
        2c4884:	0a0000c4 	beq	2c4b9c <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x538>
        2c4888:	e240cc01 	sub	ip, r0, #256	; 0x100
        2c488c:	e33c0003 	teq	ip, #3	; 0x3
        2c4890:	1a0007c6 	bne	2c67b0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x214c>
        2c4894:	e28d1010 	add	r1, sp, #16	; 0x10
        2c4898:	e5940000 	ldr	r0, [r4]
        2c489c:	eb5e4488 	bl	1a55ac4 <TFunctionState::$IsConstant(RefVar const &)>
        2c48a0:	e3300000 	teq	r0, #0	; 0x0
        2c48a4:	0a0000c2 	beq	2c4bb4 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x550>
        2c48a8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c48ac:	e28d1014 	add	r1, sp, #20	; 0x14
        2c48b0:	e3a02000 	mov	r2, #0	; 0x0
        2c48b4:	e5940000 	ldr	r0, [r4]
        2c48b8:	eb5e406e 	bl	1a54a78 <TFunctionState::$GetConstantValue(RefVar const &, long *)>
        2c48bc:	eb63f622 	bl	1bc214c <$AllocateRefHandle(long)>
        2c48c0:	e58d0000 	str	r0, [sp]
        2c48c4:	e1a0100d 	mov	r1, sp
        2c48c8:	e1a00004 	mov	r0, r4
        2c48cc:	eb5e3827 	bl	1a52970 <TCompiler::$EmitPush(RefVar const &)>
        2c48d0:	e59d0000 	ldr	r0, [sp]
        2c48d4:	ea0006c9 	b	2c6400 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1d9c>
        2c48d8:	e28000f7 	add	r0, r0, #247	; 0xf7
        2c48dc:	e2400c02 	sub	r0, r0, #512	; 0x200
        2c48e0:	e350000e 	cmp	r0, #14	; 0xe
        2c48e4:	908ff100 	addls	pc, pc, r0, lsl #2
        2c48e8:	ea0007b0 	b	2c67b0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x214c>
        2c48ec:	ea000618 	b	2c6154 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1af0>
        2c48f0:	ea0007ae 	b	2c67b0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x214c>
        2c48f4:	ea000304 	b	2c550c <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xea8>
        2c48f8:	ea0007ac 	b	2c67b0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x214c>
        2c48fc:	ea00031c 	b	2c5574 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xf10>
        2c4900:	ea000399 	b	2c576c <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1108>
        2c4904:	ea0007a9 	b	2c67b0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x214c>
        2c4908:	ea0007a8 	b	2c67b0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x214c>
        2c490c:	ea0006be 	b	2c640c <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1da8>
        2c4910:	ea0007a6 	b	2c67b0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x214c>
        2c4914:	ea000635 	b	2c61f0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1b8c>
        2c4918:	ea00065a 	b	2c6288 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1c24>
        2c491c:	ea0002c5 	b	2c5438 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xdd4>
        2c4920:	ea000408 	b	2c5948 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x12e4>
        2c4924:	e59d0010 	ldr	r0, [sp, #16]
        2c4928:	e5900000 	ldr	r0, [r0]
        2c492c:	eb640ec9 	bl	1bc8458 <$SymbolName(long)>
        2c4930:	e1a09000 	mov	r9, r0
        2c4934:	eb63c45d 	bl	1bb5ab0 <$strlen>
        2c4938:	e2800007 	add	r0, r0, #7	; 0x7
        2c493c:	eb644889 	bl	1bd6b68 <$malloc>
        2c4940:	e1a08000 	mov	r8, r0
        2c4944:	e1a01009 	mov	r1, r9
        2c4948:	eb63c457 	bl	1bb5aac <$strcpy>
        2c494c:	e1a00009 	mov	r0, r9
        2c4950:	eb63c456 	bl	1bb5ab0 <$strlen>
        2c4954:	e0800008 	add	r0, r0, r8
        2c4958:	e28f1f60 	add	r1, pc, #384	; 0x180
        2c495c:	e3a02007 	mov	r2, #7	; 0x7
        2c4960:	eb63c03a 	bl	1bb4a50 <$memcpy>
        2c4964:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c4968:	e1a00008 	mov	r0, r8
        2c496c:	eb640243 	bl	1bc5280 <$Intern(char *)>
        2c4970:	eb63f5f5 	bl	1bc214c <$AllocateRefHandle(long)>
        2c4974:	e58d0000 	str	r0, [sp]
        2c4978:	e1a00009 	mov	r0, r9
        2c497c:	eb63c44b 	bl	1bb5ab0 <$strlen>
        2c4980:	e0800008 	add	r0, r0, r8
        2c4984:	e28f1f57 	add	r1, pc, #348	; 0x15c
        2c4988:	e3a02006 	mov	r2, #6	; 0x6
        2c498c:	eb63c02f 	bl	1bb4a50 <$memcpy>
        2c4990:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c4994:	e1a00008 	mov	r0, r8
        2c4998:	eb640238 	bl	1bc5280 <$Intern(char *)>
        2c499c:	eb63f5ea 	bl	1bc214c <$AllocateRefHandle(long)>
        2c49a0:	e58d0000 	str	r0, [sp]
        2c49a4:	e1a00008 	mov	r0, r8
        2c49a8:	eb6437ea 	bl	1bd2958 <$free>
        2c49ac:	e28d1014 	add	r1, sp, #20	; 0x14
        2c49b0:	e1a00004 	mov	r0, r4
        2c49b4:	e3a02000 	mov	r2, #0	; 0x0
        2c49b8:	eb5e50ad 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c49bc:	e28d1018 	add	r1, sp, #24	; 0x18
        2c49c0:	e1a00004 	mov	r0, r4
        2c49c4:	eb5e3bee 	bl	1a53984 <TCompiler::$EmitVarSet(RefVar const &)>
        2c49c8:	e28d1010 	add	r1, sp, #16	; 0x10
        2c49cc:	e1a00004 	mov	r0, r4
        2c49d0:	e3a02000 	mov	r2, #0	; 0x0
        2c49d4:	eb5e50a6 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c49d8:	e28d1004 	add	r1, sp, #4	; 0x4
        2c49dc:	e1a00004 	mov	r0, r4
        2c49e0:	eb5e3be7 	bl	1a53984 <TCompiler::$EmitVarSet(RefVar const &)>
        2c49e4:	e28d100c 	add	r1, sp, #12	; 0xc
        2c49e8:	e1a00004 	mov	r0, r4
        2c49ec:	e3a02000 	mov	r2, #0	; 0x0
        2c49f0:	eb5e509f 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c49f4:	e1a0100d 	mov	r1, sp
        2c49f8:	e1a00004 	mov	r0, r4
        2c49fc:	eb5e3be0 	bl	1a53984 <TCompiler::$EmitVarSet(RefVar const &)>
        2c4a00:	e1a0100d 	mov	r1, sp
        2c4a04:	e1a00004 	mov	r0, r4
        2c4a08:	eb5e37db 	bl	1a5297c <TCompiler::$EmitVarGet(RefVar const &)>
        2c4a0c:	e28d1018 	add	r1, sp, #24	; 0x18
        2c4a10:	e1a00004 	mov	r0, r4
        2c4a14:	eb5e37d8 	bl	1a5297c <TCompiler::$EmitVarGet(RefVar const &)>
        2c4a18:	e1a00004 	mov	r0, r4
        2c4a1c:	eb5e37d1 	bl	1a52968 <TCompiler::$EmitPlaceholder(void)>
        2c4a20:	e1a09000 	mov	r9, r0
        2c4a24:	e1a00004 	mov	r0, r4
        2c4a28:	eb5e37be 	bl	1a52928 <TCompiler::$CurPC(void)>
        2c4a2c:	e1a08000 	mov	r8, r0
        2c4a30:	e1a00004 	mov	r0, r4
        2c4a34:	eb5e33a6 	bl	1a518d4 <TCompiler::$BeginLoop(void)>
        2c4a38:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c4a3c:	e28d100c 	add	r1, sp, #12	; 0xc
        2c4a40:	e1a00004 	mov	r0, r4
        2c4a44:	e3a02001 	mov	r2, #1	; 0x1
        2c4a48:	eb5e5089 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c4a4c:	e3300000 	teq	r0, #0	; 0x0
        2c4a50:	11a00004 	movne	r0, r4
        2c4a54:	1b5e37c4 	blne	1a5296c <TCompiler::$EmitPop(void)>
        2c4a58:	e28d1004 	add	r1, sp, #4	; 0x4
        2c4a5c:	e1a00004 	mov	r0, r4
        2c4a60:	eb5e37c5 	bl	1a5297c <TCompiler::$EmitVarGet(RefVar const &)>
        2c4a64:	e28d101c 	add	r1, sp, #28	; 0x1c
        2c4a68:	e1a00004 	mov	r0, r4
        2c4a6c:	eb5e3bc3 	bl	1a53980 <TCompiler::$EmitVarIncr(RefVar const &)>
        2c4a70:	e1a00004 	mov	r0, r4
        2c4a74:	eb5e37ab 	bl	1a52928 <TCompiler::$CurPC(void)>
        2c4a78:	e1a03000 	mov	r3, r0
        2c4a7c:	e1a01009 	mov	r1, r9
        2c4a80:	e1a00004 	mov	r0, r4
        2c4a84:	e3a0200b 	mov	r2, #11	; 0xb
        2c4a88:	eb5e338f 	bl	1a518cc <TCompiler::$Backpatch(unsigned long, Opcode, long)>
        2c4a8c:	e28d1008 	add	r1, sp, #8	; 0x8
        2c4a90:	e1a00004 	mov	r0, r4
        2c4a94:	eb5e37b8 	bl	1a5297c <TCompiler::$EmitVarGet(RefVar const &)>
        2c4a98:	e1a02008 	mov	r2, r8
        2c4a9c:	e1a00004 	mov	r0, r4
        2c4aa0:	e3a01017 	mov	r1, #23	; 0x17
        2c4aa4:	eb5e3bb8 	bl	1a5398c <TCompiler::$Emit(Opcode, long)>
        2c4aa8:	e3a00002 	mov	r0, #2	; 0x2
        2c4aac:	eb63f5a6 	bl	1bc214c <$AllocateRefHandle(long)>
        2c4ab0:	e58d0000 	str	r0, [sp]
        2c4ab4:	e1a0100d 	mov	r1, sp
        2c4ab8:	e1a00004 	mov	r0, r4
        2c4abc:	eb5e37ab 	bl	1a52970 <TCompiler::$EmitPush(RefVar const &)>
        2c4ac0:	e59d0000 	ldr	r0, [sp]
        2c4ac4:	eb63f9bc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c4ac8:	e1a00004 	mov	r0, r4
        2c4acc:	eb5e3bb1 	bl	1a53998 <TCompiler::$EndLoop(void)>
        2c4ad0:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        2c4ad4:	eb63f9b8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c4ad8:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        2c4adc:	ea000647 	b	2c6400 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1d9c>
        2c4ae0:	7c6c696d 	stcvcl	9, cr6, [ip], -#436
        2c4ae4:	69740000 	ldmvsdb	r4!, {}^
        2c4ae8:	7c696e63 	stcvcl	14, cr6, [r9], -#396
        2c4aec:	72000000 	andvc	r0, r0, #0	; 0x0
        2c4af0:	e28000e5 	add	r0, r0, #229	; 0xe5
        2c4af4:	e2400c02 	sub	r0, r0, #512	; 0x200
        2c4af8:	e350001d 	cmp	r0, #29	; 0x1d
        2c4afc:	908ff100 	addls	pc, pc, r0, lsl #2
        2c4b00:	ea00072a 	b	2c67b0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x214c>
        2c4b04:	ea00055a 	b	2c6074 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1a10>
        2c4b08:	ea000728 	b	2c67b0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x214c>
        2c4b0c:	ea000727 	b	2c67b0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x214c>
        2c4b10:	ea0002b0 	b	2c55d8 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xf74>
        2c4b14:	ea000725 	b	2c67b0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x214c>
        2c4b18:	ea0002ca 	b	2c5648 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xfe4>
        2c4b1c:	ea00039a 	b	2c598c <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1328>
        2c4b20:	ea000722 	b	2c67b0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x214c>
        2c4b24:	ea000721 	b	2c67b0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x214c>
        2c4b28:	ea000025 	b	2c4bc4 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x560>
        2c4b2c:	ea00071f 	b	2c67b0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x214c>
        2c4b30:	ea0002a1 	b	2c55bc <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xf58>
        2c4b34:	ea000299 	b	2c55a0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xf3c>
        2c4b38:	ea00071c 	b	2c67b0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x214c>
        2c4b3c:	ea0001f5 	b	2c5318 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xcb4>
        2c4b40:	ea0000d3 	b	2c4e94 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x830>
        2c4b44:	ea0000fd 	b	2c4f40 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x8dc>
        2c4b48:	ea00012c 	b	2c5000 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x99c>
        2c4b4c:	ea0000a0 	b	2c4dd4 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x770>
        2c4b50:	ea0000ab 	b	2c4e04 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x7a0>
        2c4b54:	ea0000b6 	b	2c4e34 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x7d0>
        2c4b58:	ea0000c1 	b	2c4e64 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x800>
        2c4b5c:	ea000194 	b	2c51b4 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xb50>
        2c4b60:	ea000610 	b	2c63a8 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1d44>
        2c4b64:	ea00005e 	b	2c4ce4 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x680>
        2c4b68:	ea000069 	b	2c4d14 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x6b0>
        2c4b6c:	ea000074 	b	2c4d44 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x6e0>
        2c4b70:	ea00007f 	b	2c4d74 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x710>
        2c4b74:	ea000129 	b	2c5020 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x9bc>
        2c4b78:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2c4b7c:	e5900000 	ldr	r0, [r0]
        2c4b80:	eb6401c9 	bl	1bc52ac <$Length(long)>
        2c4b84:	e1a08000 	mov	r8, r0
        2c4b88:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c4b8c:	e3a09000 	mov	r9, #0	; 0x0
        2c4b90:	e3500000 	cmp	r0, #0	; 0x0
        2c4b94:	9a0002d9 	bls	2c5700 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x109c>
        2c4b98:	ea0002c9 	b	2c56c4 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1060>
        2c4b9c:	e3360000 	teq	r6, #0	; 0x0
        2c4ba0:	1a00056e 	bne	2c6160 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1afc>
        2c4ba4:	e28d1010 	add	r1, sp, #16	; 0x10
        2c4ba8:	e1a00004 	mov	r0, r4
        2c4bac:	eb5e376f 	bl	1a52970 <TCompiler::$EmitPush(RefVar const &)>
        2c4bb0:	ea00070b 	b	2c67e4 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x2180>
        2c4bb4:	e28d1010 	add	r1, sp, #16	; 0x10
        2c4bb8:	e1a00004 	mov	r0, r4
        2c4bbc:	eb5e376e 	bl	1a5297c <TCompiler::$EmitVarGet(RefVar const &)>
        2c4bc0:	ea0006fa 	b	2c67b0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x214c>
        2c4bc4:	e1a00004 	mov	r0, r4
        2c4bc8:	e3a02003 	mov	r2, #3	; 0x3
        2c4bcc:	e3a01000 	mov	r1, #0	; 0x0
        2c4bd0:	eb5e3b6d 	bl	1a5398c <TCompiler::$Emit(Opcode, long)>
        2c4bd4:	ea0006f5 	b	2c67b0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x214c>
        2c4bd8:	e24dd008 	sub	sp, sp, #8	; 0x8
        2c4bdc:	e3a00001 	mov	r0, #1	; 0x1
        2c4be0:	e58d0004 	str	r0, [sp, #4]	; fField4
        2c4be4:	e28d2004 	add	r2, sp, #4	; 0x4
        2c4be8:	e1a0100a 	mov	r1, sl
        2c4bec:	e1a00004 	mov	r0, r4
        2c4bf0:	eb5e5021 	bl	1a58c7c <TCompiler::$WalkForPath(RefVar const &, long &)>
        2c4bf4:	eb63f554 	bl	1bc214c <$AllocateRefHandle(long)>
        2c4bf8:	e58d0000 	str	r0, [sp]
        2c4bfc:	e5900000 	ldr	r0, [r0]
        2c4c00:	e3300002 	teq	r0, #2	; 0x2
        2c4c04:	11a0100d 	movne	r1, sp
        2c4c08:	11a00004 	movne	r0, r4
        2c4c0c:	1b5e3757 	blne	1a52970 <TCompiler::$EmitPush(RefVar const &)>
        2c4c10:	e1a00004 	mov	r0, r4
        2c4c14:	e3a01012 	mov	r1, #18	; 0x12
        2c4c18:	e59d2004 	ldr	r2, [sp, #4]	; fField4
        2c4c1c:	eb5e3b5a 	bl	1a5398c <TCompiler::$Emit(Opcode, long)>
        2c4c20:	e59d0000 	ldr	r0, [sp]
        2c4c24:	ea0006df 	b	2c67a8 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x2144>
        2c4c28:	e3a05001 	mov	r5, #1	; 0x1
        2c4c2c:	e28d1010 	add	r1, sp, #16	; 0x10
        2c4c30:	e1a00004 	mov	r0, r4
        2c4c34:	e3a02000 	mov	r2, #0	; 0x0
        2c4c38:	eb5e500d 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c4c3c:	e28d100c 	add	r1, sp, #12	; 0xc
        2c4c40:	e1a00004 	mov	r0, r4
        2c4c44:	e3a02000 	mov	r2, #0	; 0x0
        2c4c48:	eb5e5009 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c4c4c:	e1a01009 	mov	r1, r9
        2c4c50:	ea000241 	b	2c555c <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xef8>
        2c4c54:	e3a05001 	mov	r5, #1	; 0x1
        2c4c58:	e28d1010 	add	r1, sp, #16	; 0x10
        2c4c5c:	e1a00004 	mov	r0, r4
        2c4c60:	e3a02000 	mov	r2, #0	; 0x0
        2c4c64:	eb5e5002 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c4c68:	e28d100c 	add	r1, sp, #12	; 0xc
        2c4c6c:	e1a00004 	mov	r0, r4
        2c4c70:	e3a02000 	mov	r2, #0	; 0x0
        2c4c74:	eb5e4ffe 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c4c78:	e59f1000 	ldr	r1, [pc, #0]	; 2c4c80 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x61c>
        2c4c7c:	ea000236 	b	2c555c <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xef8>
        2c4c80:	00681ca8 	rsbeq	r1, r8, r8, lsr #25
        2c4c84:	e3a05001 	mov	r5, #1	; 0x1
        2c4c88:	e28d1010 	add	r1, sp, #16	; 0x10
        2c4c8c:	e1a00004 	mov	r0, r4
        2c4c90:	e3a02000 	mov	r2, #0	; 0x0
        2c4c94:	eb5e4ff6 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c4c98:	e28d100c 	add	r1, sp, #12	; 0xc
        2c4c9c:	e1a00004 	mov	r0, r4
        2c4ca0:	e3a02000 	mov	r2, #0	; 0x0
        2c4ca4:	eb5e4ff2 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c4ca8:	e59f1000 	ldr	r1, [pc, #0]	; 2c4cb0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x64c>
        2c4cac:	ea00022a 	b	2c555c <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xef8>
        2c4cb0:	00681cb0 	streqh	r1, [r8], -#192
        2c4cb4:	e3a05001 	mov	r5, #1	; 0x1
        2c4cb8:	e28d1010 	add	r1, sp, #16	; 0x10
        2c4cbc:	e1a00004 	mov	r0, r4
        2c4cc0:	e3a02000 	mov	r2, #0	; 0x0
        2c4cc4:	eb5e4fea 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c4cc8:	e28d100c 	add	r1, sp, #12	; 0xc
        2c4ccc:	e1a00004 	mov	r0, r4
        2c4cd0:	e3a02000 	mov	r2, #0	; 0x0
        2c4cd4:	eb5e4fe6 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c4cd8:	e59f1000 	ldr	r1, [pc, #0]	; 2c4ce0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x67c>
        2c4cdc:	ea00021e 	b	2c555c <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xef8>
        2c4ce0:	00681ca0 	rsbeq	r1, r8, r0, lsr #25
        2c4ce4:	e3a05001 	mov	r5, #1	; 0x1
        2c4ce8:	e28d1010 	add	r1, sp, #16	; 0x10
        2c4cec:	e1a00004 	mov	r0, r4
        2c4cf0:	e3a02000 	mov	r2, #0	; 0x0
        2c4cf4:	eb5e4fde 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c4cf8:	e28d100c 	add	r1, sp, #12	; 0xc
        2c4cfc:	e1a00004 	mov	r0, r4
        2c4d00:	e3a02000 	mov	r2, #0	; 0x0
        2c4d04:	eb5e4fda 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c4d08:	e59f1000 	ldr	r1, [pc, #0]	; 2c4d10 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x6ac>
        2c4d0c:	ea000212 	b	2c555c <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xef8>
        2c4d10:	006829f8 	streqd	r2, [r8], -#152
        2c4d14:	e3a05001 	mov	r5, #1	; 0x1
        2c4d18:	e28d1010 	add	r1, sp, #16	; 0x10
        2c4d1c:	e1a00004 	mov	r0, r4
        2c4d20:	e3a02000 	mov	r2, #0	; 0x0
        2c4d24:	eb5e4fd2 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c4d28:	e28d100c 	add	r1, sp, #12	; 0xc
        2c4d2c:	e1a00004 	mov	r0, r4
        2c4d30:	e3a02000 	mov	r2, #0	; 0x0
        2c4d34:	eb5e4fce 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c4d38:	e59f1000 	ldr	r1, [pc, #0]	; 2c4d40 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x6dc>
        2c4d3c:	ea000206 	b	2c555c <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xef8>
        2c4d40:	006838c8 	rsbeq	r3, r8, r8, asr #17
        2c4d44:	e3a05001 	mov	r5, #1	; 0x1
        2c4d48:	e28d1010 	add	r1, sp, #16	; 0x10
        2c4d4c:	e1a00004 	mov	r0, r4
        2c4d50:	e3a02000 	mov	r2, #0	; 0x0
        2c4d54:	eb5e4fc6 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c4d58:	e28d100c 	add	r1, sp, #12	; 0xc
        2c4d5c:	e1a00004 	mov	r0, r4
        2c4d60:	e3a02000 	mov	r2, #0	; 0x0
        2c4d64:	eb5e4fc2 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c4d68:	e59f1000 	ldr	r1, [pc, #0]	; 2c4d70 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x70c>
        2c4d6c:	ea0001fa 	b	2c555c <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xef8>
        2c4d70:	00681cd0 	ldreqd	r1, [r8], -#192
        2c4d74:	e3a05001 	mov	r5, #1	; 0x1
        2c4d78:	e28d1010 	add	r1, sp, #16	; 0x10
        2c4d7c:	e1a00004 	mov	r0, r4
        2c4d80:	e3a02000 	mov	r2, #0	; 0x0
        2c4d84:	eb5e4fba 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c4d88:	e28d100c 	add	r1, sp, #12	; 0xc
        2c4d8c:	e1a00004 	mov	r0, r4
        2c4d90:	e3a02000 	mov	r2, #0	; 0x0
        2c4d94:	eb5e4fb6 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c4d98:	e59f1000 	ldr	r1, [pc, #0]	; 2c4da0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x73c>
        2c4d9c:	ea0001ee 	b	2c555c <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xef8>
        2c4da0:	00681d00 	rsbeq	r1, r8, r0, lsl #26
        2c4da4:	e3a05001 	mov	r5, #1	; 0x1
        2c4da8:	e28d1010 	add	r1, sp, #16	; 0x10
        2c4dac:	e1a00004 	mov	r0, r4
        2c4db0:	e3a02000 	mov	r2, #0	; 0x0
        2c4db4:	eb5e4fae 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c4db8:	e28d100c 	add	r1, sp, #12	; 0xc
        2c4dbc:	e1a00004 	mov	r0, r4
        2c4dc0:	e3a02000 	mov	r2, #0	; 0x0
        2c4dc4:	eb5e4faa 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c4dc8:	e59f1000 	ldr	r1, [pc, #0]	; 2c4dd0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x76c>
        2c4dcc:	ea0001e2 	b	2c555c <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xef8>
        2c4dd0:	00681cc8 	rsbeq	r1, r8, r8, asr #25
        2c4dd4:	e3a05001 	mov	r5, #1	; 0x1
        2c4dd8:	e28d1010 	add	r1, sp, #16	; 0x10
        2c4ddc:	e1a00004 	mov	r0, r4
        2c4de0:	e3a02000 	mov	r2, #0	; 0x0
        2c4de4:	eb5e4fa2 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c4de8:	e28d100c 	add	r1, sp, #12	; 0xc
        2c4dec:	e1a00004 	mov	r0, r4
        2c4df0:	e3a02000 	mov	r2, #0	; 0x0
        2c4df4:	eb5e4f9e 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c4df8:	e59f1000 	ldr	r1, [pc, #0]	; 2c4e00 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x79c>
        2c4dfc:	ea0001d6 	b	2c555c <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xef8>
        2c4e00:	00681cd8 	ldreqd	r1, [r8], -#200
        2c4e04:	e3a05001 	mov	r5, #1	; 0x1
        2c4e08:	e28d1010 	add	r1, sp, #16	; 0x10
        2c4e0c:	e1a00004 	mov	r0, r4
        2c4e10:	e3a02000 	mov	r2, #0	; 0x0
        2c4e14:	eb5e4f96 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c4e18:	e28d100c 	add	r1, sp, #12	; 0xc
        2c4e1c:	e1a00004 	mov	r0, r4
        2c4e20:	e3a02000 	mov	r2, #0	; 0x0
        2c4e24:	eb5e4f92 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c4e28:	e59f1000 	ldr	r1, [pc, #0]	; 2c4e30 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x7cc>
        2c4e2c:	ea0001ca 	b	2c555c <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xef8>
        2c4e30:	00681cf8 	streqd	r1, [r8], -#200
        2c4e34:	e3a05001 	mov	r5, #1	; 0x1
        2c4e38:	e28d1010 	add	r1, sp, #16	; 0x10
        2c4e3c:	e1a00004 	mov	r0, r4
        2c4e40:	e3a02000 	mov	r2, #0	; 0x0
        2c4e44:	eb5e4f8a 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c4e48:	e28d100c 	add	r1, sp, #12	; 0xc
        2c4e4c:	e1a00004 	mov	r0, r4
        2c4e50:	e3a02000 	mov	r2, #0	; 0x0
        2c4e54:	eb5e4f86 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c4e58:	e59f1000 	ldr	r1, [pc, #0]	; 2c4e60 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x7fc>
        2c4e5c:	ea0001be 	b	2c555c <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xef8>
        2c4e60:	00681ce8 	rsbeq	r1, r8, r8, ror #25
        2c4e64:	e3a05001 	mov	r5, #1	; 0x1
        2c4e68:	e28d1010 	add	r1, sp, #16	; 0x10
        2c4e6c:	e1a00004 	mov	r0, r4
        2c4e70:	e3a02000 	mov	r2, #0	; 0x0
        2c4e74:	eb5e4f7e 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c4e78:	e28d100c 	add	r1, sp, #12	; 0xc
        2c4e7c:	e1a00004 	mov	r0, r4
        2c4e80:	e3a02000 	mov	r2, #0	; 0x0
        2c4e84:	eb5e4f7a 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c4e88:	e59f1000 	ldr	r1, [pc, #0]	; 2c4e90 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x82c>
        2c4e8c:	ea0001b2 	b	2c555c <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xef8>
        2c4e90:	00681ce0 	rsbeq	r1, r8, r0, ror #25
        2c4e94:	e3a05001 	mov	r5, #1	; 0x1
        2c4e98:	e28d1010 	add	r1, sp, #16	; 0x10
        2c4e9c:	e1a00004 	mov	r0, r4
        2c4ea0:	e3a02000 	mov	r2, #0	; 0x0
        2c4ea4:	eb5e4f72 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c4ea8:	e1a00004 	mov	r0, r4
        2c4eac:	eb5e36ad 	bl	1a52968 <TCompiler::$EmitPlaceholder(void)>
        2c4eb0:	e1a08000 	mov	r8, r0
        2c4eb4:	e3360000 	teq	r6, #0	; 0x0
        2c4eb8:	0a000007 	beq	2c4edc <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x878>
        2c4ebc:	e1a02006 	mov	r2, r6
        2c4ec0:	e28d100c 	add	r1, sp, #12	; 0xc
        2c4ec4:	e1a00004 	mov	r0, r4
        2c4ec8:	eb5e4f69 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c4ecc:	e3300000 	teq	r0, #0	; 0x0
        2c4ed0:	11a00004 	movne	r0, r4
        2c4ed4:	1b5e36a4 	blne	1a5296c <TCompiler::$EmitPop(void)>
        2c4ed8:	ea000006 	b	2c4ef8 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x894>
        2c4edc:	e28d100c 	add	r1, sp, #12	; 0xc
        2c4ee0:	e1a00004 	mov	r0, r4
        2c4ee4:	e3a02000 	mov	r2, #0	; 0x0
        2c4ee8:	eb5e4f61 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c4eec:	e1a00004 	mov	r0, r4
        2c4ef0:	eb5e369c 	bl	1a52968 <TCompiler::$EmitPlaceholder(void)>
        2c4ef4:	e1a09000 	mov	r9, r0
        2c4ef8:	e1a00004 	mov	r0, r4
        2c4efc:	eb5e3689 	bl	1a52928 <TCompiler::$CurPC(void)>
        2c4f00:	e1a03000 	mov	r3, r0
        2c4f04:	e1a01008 	mov	r1, r8
        2c4f08:	e1a00004 	mov	r0, r4
        2c4f0c:	e3a0200d 	mov	r2, #13	; 0xd
        2c4f10:	eb5e326d 	bl	1a518cc <TCompiler::$Backpatch(unsigned long, Opcode, long)>
        2c4f14:	e3360000 	teq	r6, #0	; 0x0
        2c4f18:	1a000490 	bne	2c6160 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1afc>
        2c4f1c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c4f20:	e3a00002 	mov	r0, #2	; 0x2
        2c4f24:	eb63f488 	bl	1bc214c <$AllocateRefHandle(long)>
        2c4f28:	e58d0000 	str	r0, [sp]
        2c4f2c:	e1a0100d 	mov	r1, sp
        2c4f30:	e1a00004 	mov	r0, r4
        2c4f34:	eb5e368d 	bl	1a52970 <TCompiler::$EmitPush(RefVar const &)>
        2c4f38:	e59d0000 	ldr	r0, [sp]
        2c4f3c:	ea000256 	b	2c589c <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1238>
        2c4f40:	e3a05001 	mov	r5, #1	; 0x1
        2c4f44:	e28d1010 	add	r1, sp, #16	; 0x10
        2c4f48:	e1a00004 	mov	r0, r4
        2c4f4c:	e3a02000 	mov	r2, #0	; 0x0
        2c4f50:	eb5e4f47 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c4f54:	e1a00004 	mov	r0, r4
        2c4f58:	eb5e3682 	bl	1a52968 <TCompiler::$EmitPlaceholder(void)>
        2c4f5c:	e1a09000 	mov	r9, r0
        2c4f60:	e3360000 	teq	r6, #0	; 0x0
        2c4f64:	0a000007 	beq	2c4f88 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x924>
        2c4f68:	e1a02006 	mov	r2, r6
        2c4f6c:	e28d100c 	add	r1, sp, #12	; 0xc
        2c4f70:	e1a00004 	mov	r0, r4
        2c4f74:	eb5e4f3e 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c4f78:	e3300000 	teq	r0, #0	; 0x0
        2c4f7c:	11a00004 	movne	r0, r4
        2c4f80:	1b5e3679 	blne	1a5296c <TCompiler::$EmitPop(void)>
        2c4f84:	ea000006 	b	2c4fa4 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x940>
        2c4f88:	e28d100c 	add	r1, sp, #12	; 0xc
        2c4f8c:	e1a00004 	mov	r0, r4
        2c4f90:	e3a02000 	mov	r2, #0	; 0x0
        2c4f94:	eb5e4f36 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c4f98:	e1a00004 	mov	r0, r4
        2c4f9c:	eb5e3671 	bl	1a52968 <TCompiler::$EmitPlaceholder(void)>
        2c4fa0:	e1a08000 	mov	r8, r0
        2c4fa4:	e1a00004 	mov	r0, r4
        2c4fa8:	eb5e365e 	bl	1a52928 <TCompiler::$CurPC(void)>
        2c4fac:	e1a03000 	mov	r3, r0
        2c4fb0:	e1a01009 	mov	r1, r9
        2c4fb4:	e1a00004 	mov	r0, r4
        2c4fb8:	e3a0200c 	mov	r2, #12	; 0xc
        2c4fbc:	eb5e3242 	bl	1a518cc <TCompiler::$Backpatch(unsigned long, Opcode, long)>
        2c4fc0:	e3360000 	teq	r6, #0	; 0x0
        2c4fc4:	1a000465 	bne	2c6160 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1afc>
        2c4fc8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c4fcc:	e3a0001a 	mov	r0, #26	; 0x1a
        2c4fd0:	eb63f45d 	bl	1bc214c <$AllocateRefHandle(long)>
        2c4fd4:	e58d0000 	str	r0, [sp]
        2c4fd8:	e1a0100d 	mov	r1, sp
        2c4fdc:	e1a00004 	mov	r0, r4
        2c4fe0:	eb5e3662 	bl	1a52970 <TCompiler::$EmitPush(RefVar const &)>
        2c4fe4:	e59d0000 	ldr	r0, [sp]
        2c4fe8:	eb63f873 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c4fec:	e1a00004 	mov	r0, r4
        2c4ff0:	eb5e364c 	bl	1a52928 <TCompiler::$CurPC(void)>
        2c4ff4:	e1a03000 	mov	r3, r0
        2c4ff8:	e1a01008 	mov	r1, r8
        2c4ffc:	ea00022b 	b	2c58b0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x124c>
        2c5000:	e3a05001 	mov	r5, #1	; 0x1
        2c5004:	e28d1010 	add	r1, sp, #16	; 0x10
        2c5008:	e1a00004 	mov	r0, r4
        2c500c:	e3a02000 	mov	r2, #0	; 0x0
        2c5010:	eb5e4f17 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c5014:	e59f1000 	ldr	r1, [pc, #0]	; 2c501c <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x9b8>
        2c5018:	ea000061 	b	2c51a4 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xb40>
        2c501c:	00683a90 	streqb	r3, [r8], -#160
        2c5020:	e3a05001 	mov	r5, #1	; 0x1
        2c5024:	e59d0010 	ldr	r0, [sp, #16]
        2c5028:	e5900000 	ldr	r0, [r0]
        2c502c:	e1a01008 	mov	r1, r8
        2c5030:	eb63fc87 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c5034:	e3100003 	tst	r0, #3	; 0x3
        2c5038:	01a00140 	moveq	r0, r0, asr #2
        2c503c:	0a000000 	beq	2c5044 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x9e0>
        2c5040:	eb63f435 	bl	1bc211c <$_RINTError(long)>
        2c5044:	e240cc01 	sub	ip, r0, #256	; 0x100
        2c5048:	e33c0002 	teq	ip, #2	; 0x2
        2c504c:	1a00004f 	bne	2c5190 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xb2c>
        2c5050:	e52d806c 	str	r8, [sp, -#108]!
        2c5054:	e28d0008 	add	r0, sp, #8	; 0x8
        2c5058:	eb63b645 	bl	1bb2974 <$setjmp>
        2c505c:	e3300000 	teq	r0, #0	; 0x0
        2c5060:	1a00002e 	bne	2c5120 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xabc>
        2c5064:	e1a0000d 	mov	r0, sp
        2c5068:	eb646c03 	bl	1be007c <$AddExceptionHandler>
        2c506c:	e3a08001 	mov	r8, #1	; 0x1
        2c5070:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2c5074:	e59d0088 	ldr	r0, [sp, #136]
        2c5078:	e5900000 	ldr	r0, [r0]
        2c507c:	e1a01008 	mov	r1, r8
        2c5080:	eb63fc73 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c5084:	e3100003 	tst	r0, #3	; 0x3
        2c5088:	e59d0088 	ldr	r0, [sp, #136]
        2c508c:	e5900000 	ldr	r0, [r0]
        2c5090:	e1a01008 	mov	r1, r8
        2c5094:	1a00000d 	bne	2c50d0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xa6c>
        2c5098:	eb63fc6d 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c509c:	e3100003 	tst	r0, #3	; 0x3
        2c50a0:	01a00140 	moveq	r0, r0, asr #2
        2c50a4:	0a000000 	beq	2c50ac <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xa48>
        2c50a8:	eb63f41b 	bl	1bc211c <$_RINTError(long)>
        2c50ac:	e2600000 	rsb	r0, r0, #0	; 0x0
        2c50b0:	e1a00100 	mov	r0, r0, lsl #2
        2c50b4:	eb63f424 	bl	1bc214c <$AllocateRefHandle(long)>
        2c50b8:	e58d0000 	str	r0, [sp]
        2c50bc:	e1a0100d 	mov	r1, sp
        2c50c0:	e1a00004 	mov	r0, r4
        2c50c4:	eb5e3629 	bl	1a52970 <TCompiler::$EmitPush(RefVar const &)>
        2c50c8:	e59d0000 	ldr	r0, [sp]
        2c50cc:	ea000010 	b	2c5114 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xab0>
        2c50d0:	eb63fc5f 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c50d4:	eb63f41c 	bl	1bc214c <$AllocateRefHandle(long)>
        2c50d8:	e58d0008 	str	r0, [sp, #8]	; fField8
        2c50dc:	e28d0008 	add	r0, sp, #8	; 0x8
        2c50e0:	eb63f41f 	bl	1bc2164 <$CDouble(RefVar const &)>
        2c50e4:	ee108180 	mnfd	f0, f0
        2c50e8:	ed2d8102 	stfd	f0, [sp, -#8]!	; fField8
        2c50ec:	e8bd0003 	ldmia	sp!, {r0, r1}
        2c50f0:	eb640075 	bl	1bc52cc <$MakeReal(double)>
        2c50f4:	eb63f414 	bl	1bc214c <$AllocateRefHandle(long)>
        2c50f8:	e58d0004 	str	r0, [sp, #4]	; fField4
        2c50fc:	e28d1004 	add	r1, sp, #4	; 0x4
        2c5100:	e1a00004 	mov	r0, r4
        2c5104:	eb5e3619 	bl	1a52970 <TCompiler::$EmitPush(RefVar const &)>
        2c5108:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c510c:	eb63f82a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c5110:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2c5114:	eb63f828 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c5118:	e28dd00c 	add	sp, sp, #12	; 0xc
        2c511c:	ea000017 	b	2c5180 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xb1c>
        2c5120:	e59d0060 	ldr	r0, [sp, #96]
        2c5124:	e59f1048 	ldr	r1, [pc, #48]	; 2c5174 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xb10>	; fField48
        2c5128:	e5911000 	ldr	r1, [r1]
        2c512c:	eb647818 	bl	1be3194 <$Subexception>
        2c5130:	e3300000 	teq	r0, #0	; 0x0
        2c5134:	0a00000f 	beq	2c5178 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xb14>
        2c5138:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c513c:	e59d0080 	ldr	r0, [sp, #128]
        2c5140:	e5900000 	ldr	r0, [r0]
        2c5144:	e3a01001 	mov	r1, #1	; 0x1
        2c5148:	eb63fc41 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c514c:	eb63f3fe 	bl	1bc214c <$AllocateRefHandle(long)>
        2c5150:	e58d0000 	str	r0, [sp]
        2c5154:	e1a0100d 	mov	r1, sp
        2c5158:	e3a00fbb 	mov	r0, #748	; 0x2ec
        2c515c:	e2400903 	sub	r0, r0, #49152	; 0xc000
        2c5160:	eb650cbd 	bl	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2c5164:	e59d0000 	ldr	r0, [sp]
        2c5168:	eb63f813 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c516c:	e28dd004 	add	sp, sp, #4	; 0x4
        2c5170:	ea000002 	b	2c5180 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xb1c>
        2c5174:	00371310 	eoreqs	r1, r7, r0, lsl r3
        2c5178:	e1a0000d 	mov	r0, sp
        2c517c:	eb6473f4 	bl	1be2154 <$NextHandler>
        2c5180:	e1a0000d 	mov	r0, sp
        2c5184:	eb646fcb 	bl	1be10b8 <$ExitHandler>
        2c5188:	e28dd06c 	add	sp, sp, #108	; 0x6c
        2c518c:	ea000587 	b	2c67b0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x214c>
        2c5190:	e28d1010 	add	r1, sp, #16	; 0x10
        2c5194:	e1a00004 	mov	r0, r4
        2c5198:	e3a02000 	mov	r2, #0	; 0x0
        2c519c:	eb5e4eb4 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c51a0:	e59f1008 	ldr	r1, [pc, #8]	; 2c51b0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xb4c>	; fField8
        2c51a4:	e1a00004 	mov	r0, r4
        2c51a8:	e3a02001 	mov	r2, #1	; 0x1
        2c51ac:	ea0000ec 	b	2c5564 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xf00>
        2c51b0:	006839d0 	ldreqd	r3, [r8], -#144
        2c51b4:	e3a05001 	mov	r5, #1	; 0x1
        2c51b8:	e59d0010 	ldr	r0, [sp, #16]
        2c51bc:	e5900000 	ldr	r0, [r0]
        2c51c0:	e1a01008 	mov	r1, r8
        2c51c4:	eb63fc22 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c51c8:	e3100003 	tst	r0, #3	; 0x3
        2c51cc:	01a00140 	moveq	r0, r0, asr #2
        2c51d0:	0a000000 	beq	2c51d8 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xb74>
        2c51d4:	eb63f3d0 	bl	1bc211c <$_RINTError(long)>
        2c51d8:	e240cc01 	sub	ip, r0, #256	; 0x100
        2c51dc:	e33c0003 	teq	ip, #3	; 0x3
        2c51e0:	1a000010 	bne	2c5228 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xbc4>
        2c51e4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c51e8:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        2c51ec:	e5900000 	ldr	r0, [r0]
        2c51f0:	e3a01001 	mov	r1, #1	; 0x1
        2c51f4:	eb63fc16 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c51f8:	eb63f3d3 	bl	1bc214c <$AllocateRefHandle(long)>
        2c51fc:	e58d0000 	str	r0, [sp]
        2c5200:	e1a0100d 	mov	r1, sp
        2c5204:	e1a00004 	mov	r0, r4
        2c5208:	eb5e35d8 	bl	1a52970 <TCompiler::$EmitPush(RefVar const &)>
        2c520c:	e59d0000 	ldr	r0, [sp]
        2c5210:	eb63f7e9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c5214:	e59f1008 	ldr	r1, [pc, #8]	; 2c5224 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xbc0>	; fField8
        2c5218:	e1a00004 	mov	r0, r4
        2c521c:	e3a02001 	mov	r2, #1	; 0x1
        2c5220:	ea000106 	b	2c5640 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xfdc>
        2c5224:	006830a8 	rsbeq	r3, r8, r8, lsr #1
        2c5228:	e330002e 	teq	r0, #46	; 0x2e
        2c522c:	1a000014 	bne	2c5284 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xc20>
        2c5230:	e24dd008 	sub	sp, sp, #8	; 0x8
        2c5234:	e3a00000 	mov	r0, #0	; 0x0
        2c5238:	e58d0004 	str	r0, [sp, #4]	; fField4
        2c523c:	e28d2004 	add	r2, sp, #4	; 0x4
        2c5240:	e28d1018 	add	r1, sp, #24	; 0x18
        2c5244:	e1a00004 	mov	r0, r4
        2c5248:	eb5e4e8b 	bl	1a58c7c <TCompiler::$WalkForPath(RefVar const &, long &)>
        2c524c:	eb63f3be 	bl	1bc214c <$AllocateRefHandle(long)>
        2c5250:	e58d0000 	str	r0, [sp]
        2c5254:	e5900000 	ldr	r0, [r0]
        2c5258:	e3300002 	teq	r0, #2	; 0x2
        2c525c:	11a0100d 	movne	r1, sp
        2c5260:	11a00004 	movne	r0, r4
        2c5264:	1b5e35c1 	blne	1a52970 <TCompiler::$EmitPush(RefVar const &)>
        2c5268:	e59f1010 	ldr	r1, [pc, #10]	; 2c5280 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xc1c>
        2c526c:	e1a00004 	mov	r0, r4
        2c5270:	e3a02002 	mov	r2, #2	; 0x2
        2c5274:	eb5e35b8 	bl	1a5295c <TCompiler::$EmitFuncall(RefVar const &, unsigned long)>
        2c5278:	e59d0000 	ldr	r0, [sp]
        2c527c:	ea000549 	b	2c67a8 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x2144>
        2c5280:	006830a0 	rsbeq	r3, r8, r0, lsr #1
        2c5284:	e330003a 	teq	r0, #58	; 0x3a
        2c5288:	1a00001d 	bne	2c5304 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xca0>
        2c528c:	e24dd008 	sub	sp, sp, #8	; 0x8
        2c5290:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        2c5294:	e5900000 	ldr	r0, [r0]
        2c5298:	e3a01002 	mov	r1, #2	; 0x2
        2c529c:	eb63fbec 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c52a0:	eb63f3a9 	bl	1bc214c <$AllocateRefHandle(long)>
        2c52a4:	e58d0000 	str	r0, [sp]
        2c52a8:	e1a0100d 	mov	r1, sp
        2c52ac:	e1a00004 	mov	r0, r4
        2c52b0:	e3a02000 	mov	r2, #0	; 0x0
        2c52b4:	eb5e4e6e 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c52b8:	e59d0000 	ldr	r0, [sp]
        2c52bc:	eb63f7be 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c52c0:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        2c52c4:	e5900000 	ldr	r0, [r0]
        2c52c8:	e3a01001 	mov	r1, #1	; 0x1
        2c52cc:	eb63fbe0 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c52d0:	eb63f39d 	bl	1bc214c <$AllocateRefHandle(long)>
        2c52d4:	e58d0004 	str	r0, [sp, #4]	; fField4
        2c52d8:	e28d1004 	add	r1, sp, #4	; 0x4
        2c52dc:	e1a00004 	mov	r0, r4
        2c52e0:	eb5e35a2 	bl	1a52970 <TCompiler::$EmitPush(RefVar const &)>
        2c52e4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c52e8:	eb63f7b3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c52ec:	e59f100c 	ldr	r1, [pc, #c]	; 2c5300 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xc9c>
        2c52f0:	e1a00004 	mov	r0, r4
        2c52f4:	e3a02002 	mov	r2, #2	; 0x2
        2c52f8:	eb5e3597 	bl	1a5295c <TCompiler::$EmitFuncall(RefVar const &, unsigned long)>
        2c52fc:	ea00052a 	b	2c67ac <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x2148>
        2c5300:	006830b0 	streqh	r3, [r8]
        2c5304:	e1a00004 	mov	r0, r4
        2c5308:	e3a01f89 	mov	r1, #548	; 0x224
        2c530c:	e2411903 	sub	r1, r1, #49152	; 0xc000
        2c5310:	eb5e39a1 	bl	1a5399c <TCompiler::$Error(long)>
        2c5314:	ea000525 	b	2c67b0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x214c>
        2c5318:	e1a03006 	mov	r3, r6
        2c531c:	e28d200c 	add	r2, sp, #12	; 0xc
        2c5320:	e28d1010 	add	r1, sp, #16	; 0x10
        2c5324:	e1a00004 	mov	r0, r4
        2c5328:	eb5e4e4f 	bl	1a58c6c <TCompiler::$WalkAssignment(RefVar const &, RefVar const &, unsigned char)>
        2c532c:	e1a07000 	mov	r7, r0
        2c5330:	ea00051e 	b	2c67b0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x214c>
        2c5334:	e59d0010 	ldr	r0, [sp, #16]
        2c5338:	e5900000 	ldr	r0, [r0]
        2c533c:	eb63ffda 	bl	1bc52ac <$Length(long)>
        2c5340:	e1a08000 	mov	r8, r0
        2c5344:	e3500000 	cmp	r0, #0	; 0x0
        2c5348:	9a00002d 	bls	2c5404 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xda0>
        2c534c:	e3a09000 	mov	r9, #0	; 0x0
        2c5350:	9a000516 	bls	2c67b0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x214c>
        2c5354:	e2480001 	sub	r0, r8, #1	; 0x1
        2c5358:	e58d001c 	str	r0, [sp, #28]	; fField28
        2c535c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c5360:	e59d0020 	ldr	r0, [sp, #32]
        2c5364:	e1500009 	cmp	r0, r9
        2c5368:	9a000013 	bls	2c53bc <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xd58>
        2c536c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c5370:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        2c5374:	e5900000 	ldr	r0, [r0]
        2c5378:	e1a01009 	mov	r1, r9
        2c537c:	eb63fbb4 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c5380:	eb63f371 	bl	1bc214c <$AllocateRefHandle(long)>
        2c5384:	e58d0000 	str	r0, [sp]
        2c5388:	e1a0100d 	mov	r1, sp
        2c538c:	e1a00004 	mov	r0, r4
        2c5390:	e3a02001 	mov	r2, #1	; 0x1
        2c5394:	eb5e4e36 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c5398:	e1b0a000 	movs	sl, r0
        2c539c:	13a0a001 	movne	sl, #1	; 0x1
        2c53a0:	e59d0000 	ldr	r0, [sp]
        2c53a4:	eb63f784 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c53a8:	e33a0000 	teq	sl, #0	; 0x0
        2c53ac:	11a00004 	movne	r0, r4
        2c53b0:	1b5e356d 	blne	1a5296c <TCompiler::$EmitPop(void)>
        2c53b4:	e28dd004 	add	sp, sp, #4	; 0x4
        2c53b8:	ea00000c 	b	2c53f0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xd8c>
        2c53bc:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        2c53c0:	e5900000 	ldr	r0, [r0]
        2c53c4:	e1a01009 	mov	r1, r9
        2c53c8:	eb63fba1 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c53cc:	eb63f35e 	bl	1bc214c <$AllocateRefHandle(long)>
        2c53d0:	e58d0000 	str	r0, [sp]
        2c53d4:	e1a0100d 	mov	r1, sp
        2c53d8:	e1a02006 	mov	r2, r6
        2c53dc:	e1a00004 	mov	r0, r4
        2c53e0:	eb5e4e23 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c53e4:	e1a07000 	mov	r7, r0
        2c53e8:	e59d0000 	ldr	r0, [sp]
        2c53ec:	eb63f772 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c53f0:	e28dd004 	add	sp, sp, #4	; 0x4
        2c53f4:	e2899001 	add	r9, r9, #1	; 0x1
        2c53f8:	e1590008 	cmp	r9, r8
        2c53fc:	3affffd6 	bcc	2c535c <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xcf8>
        2c5400:	ea0004ea 	b	2c67b0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x214c>
        2c5404:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c5408:	e3360000 	teq	r6, #0	; 0x0
        2c540c:	0a000001 	beq	2c5418 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xdb4>
        2c5410:	e3a07000 	mov	r7, #0	; 0x0
        2c5414:	ea0003fa 	b	2c6404 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1da0>
        2c5418:	e3a00002 	mov	r0, #2	; 0x2
        2c541c:	eb63f34a 	bl	1bc214c <$AllocateRefHandle(long)>
        2c5420:	e58d0000 	str	r0, [sp]
        2c5424:	e1a0100d 	mov	r1, sp
        2c5428:	e1a00004 	mov	r0, r4
        2c542c:	eb5e354f 	bl	1a52970 <TCompiler::$EmitPush(RefVar const &)>
        2c5430:	e59d0000 	ldr	r0, [sp]
        2c5434:	ea0003f1 	b	2c6400 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1d9c>
        2c5438:	e59d0010 	ldr	r0, [sp, #16]
        2c543c:	e5900000 	ldr	r0, [r0]
        2c5440:	eb63ff99 	bl	1bc52ac <$Length(long)>
        2c5444:	e1a09000 	mov	r9, r0
        2c5448:	e3a08000 	mov	r8, #0	; 0x0
        2c544c:	e3500000 	cmp	r0, #0	; 0x0
        2c5450:	da000022 	ble	2c54e0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xe7c>
        2c5454:	e59d0010 	ldr	r0, [sp, #16]
        2c5458:	e5900000 	ldr	r0, [r0]
        2c545c:	e2881001 	add	r1, r8, #1	; 0x1
        2c5460:	e1a0a001 	mov	sl, r1
        2c5464:	eb63fb7a 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c5468:	e3300002 	teq	r0, #2	; 0x2
        2c546c:	0a000018 	beq	2c54d4 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xe70>
        2c5470:	e24dd008 	sub	sp, sp, #8	; 0x8
        2c5474:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        2c5478:	e5900000 	ldr	r0, [r0]
        2c547c:	e1a0100a 	mov	r1, sl
        2c5480:	eb63fb73 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c5484:	eb63f330 	bl	1bc214c <$AllocateRefHandle(long)>
        2c5488:	e58d0000 	str	r0, [sp]
        2c548c:	e1a0100d 	mov	r1, sp
        2c5490:	e1a00004 	mov	r0, r4
        2c5494:	e3a02000 	mov	r2, #0	; 0x0
        2c5498:	eb5e4df5 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c549c:	e59d0000 	ldr	r0, [sp]
        2c54a0:	eb63f745 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c54a4:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        2c54a8:	e5900000 	ldr	r0, [r0]
        2c54ac:	e1a01008 	mov	r1, r8
        2c54b0:	eb63fb67 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c54b4:	eb63f324 	bl	1bc214c <$AllocateRefHandle(long)>
        2c54b8:	e58d0004 	str	r0, [sp, #4]	; fField4
        2c54bc:	e28d1004 	add	r1, sp, #4	; 0x4
        2c54c0:	e1a00004 	mov	r0, r4
        2c54c4:	eb5e392e 	bl	1a53984 <TCompiler::$EmitVarSet(RefVar const &)>
        2c54c8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c54cc:	eb63f73a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c54d0:	e28dd008 	add	sp, sp, #8	; 0x8
        2c54d4:	e2888002 	add	r8, r8, #2	; 0x2
        2c54d8:	e1580009 	cmp	r8, r9
        2c54dc:	baffffdc 	blt	2c5454 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xdf0>
        2c54e0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c54e4:	e3360000 	teq	r6, #0	; 0x0
        2c54e8:	1affffc8 	bne	2c5410 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xdac>
        2c54ec:	e3a00002 	mov	r0, #2	; 0x2
        2c54f0:	eb63f315 	bl	1bc214c <$AllocateRefHandle(long)>
        2c54f4:	e58d0000 	str	r0, [sp]
        2c54f8:	e1a0100d 	mov	r1, sp
        2c54fc:	e1a00004 	mov	r0, r4
        2c5500:	eb5e351a 	bl	1a52970 <TCompiler::$EmitPush(RefVar const &)>
        2c5504:	e59d0000 	ldr	r0, [sp]
        2c5508:	ea0003bc 	b	2c6400 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1d9c>
        2c550c:	e59f0058 	ldr	r0, [pc, #58]	; 2c556c <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xf08>
        2c5510:	e59000d4 	ldr	r0, [r0, #212]
        2c5514:	e59d1010 	ldr	r1, [sp, #16]
        2c5518:	e5911000 	ldr	r1, [r1]
        2c551c:	eb63fb49 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        2c5520:	e3300000 	teq	r0, #0	; 0x0
        2c5524:	0a000004 	beq	2c553c <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xed8>
        2c5528:	e28d2010 	add	r2, sp, #16	; 0x10
        2c552c:	e1a00004 	mov	r0, r4
        2c5530:	e3a01022 	mov	r1, #34	; 0x22
        2c5534:	e2411cbe 	sub	r1, r1, #48640	; 0xbe00
        2c5538:	eb5e3918 	bl	1a539a0 <TCompiler::$Error(long, RefVar const &)>
        2c553c:	e28d100c 	add	r1, sp, #12	; 0xc
        2c5540:	e1a00004 	mov	r0, r4
        2c5544:	e3a02000 	mov	r2, #0	; 0x0
        2c5548:	eb5e4dc9 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c554c:	e28d1010 	add	r1, sp, #16	; 0x10
        2c5550:	e1a00004 	mov	r0, r4
        2c5554:	eb5e3505 	bl	1a52970 <TCompiler::$EmitPush(RefVar const &)>
        2c5558:	e59f1010 	ldr	r1, [pc, #10]	; 2c5570 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xf0c>
        2c555c:	e1a00004 	mov	r0, r4
        2c5560:	e3a02002 	mov	r2, #2	; 0x2
        2c5564:	eb5e34fc 	bl	1a5295c <TCompiler::$EmitFuncall(RefVar const &, unsigned long)>
        2c5568:	ea000490 	b	2c67b0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x214c>
        2c556c:	0c1051ec 	ldfeqs	f5, [r0], -#944
        2c5570:	00684570 	rsbeq	r4, r8, r0, ror r5
        2c5574:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c5578:	e3360000 	teq	r6, #0	; 0x0
        2c557c:	1affffa3 	bne	2c5410 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xdac>
        2c5580:	e3a00002 	mov	r0, #2	; 0x2
        2c5584:	eb63f2f0 	bl	1bc214c <$AllocateRefHandle(long)>
        2c5588:	e58d0000 	str	r0, [sp]
        2c558c:	e1a0100d 	mov	r1, sp
        2c5590:	e1a00004 	mov	r0, r4
        2c5594:	eb5e34f5 	bl	1a52970 <TCompiler::$EmitPush(RefVar const &)>
        2c5598:	e59d0000 	ldr	r0, [sp]
        2c559c:	ea000397 	b	2c6400 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1d9c>
        2c55a0:	e28d1010 	add	r1, sp, #16	; 0x10
        2c55a4:	e1a00004 	mov	r0, r4
        2c55a8:	e3a02000 	mov	r2, #0	; 0x0
        2c55ac:	eb5e4db0 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c55b0:	e1a00004 	mov	r0, r4
        2c55b4:	eb5e30bc 	bl	1a518ac <TCompiler::$AddLoopExit(void)>
        2c55b8:	ea00047c 	b	2c67b0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x214c>
        2c55bc:	e28d1010 	add	r1, sp, #16	; 0x10
        2c55c0:	e1a00004 	mov	r0, r4
        2c55c4:	e3a02000 	mov	r2, #0	; 0x0
        2c55c8:	eb5e4da9 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c55cc:	e1a00004 	mov	r0, r4
        2c55d0:	eb5e34e7 	bl	1a52974 <TCompiler::$EmitReturn(void)>
        2c55d4:	ea000475 	b	2c67b0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x214c>
        2c55d8:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        2c55dc:	e5900000 	ldr	r0, [r0]
        2c55e0:	eb63ff31 	bl	1bc52ac <$Length(long)>
        2c55e4:	e1a08000 	mov	r8, r0
        2c55e8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c55ec:	e3a09000 	mov	r9, #0	; 0x0
        2c55f0:	e3500000 	cmp	r0, #0	; 0x0
        2c55f4:	9a00000e 	bls	2c5634 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xfd0>
        2c55f8:	e59d0010 	ldr	r0, [sp, #16]
        2c55fc:	e5900000 	ldr	r0, [r0]
        2c5600:	e1a01009 	mov	r1, r9
        2c5604:	eb63fb12 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c5608:	eb63f2cf 	bl	1bc214c <$AllocateRefHandle(long)>
        2c560c:	e58d0000 	str	r0, [sp]
        2c5610:	e1a0100d 	mov	r1, sp
        2c5614:	e1a00004 	mov	r0, r4
        2c5618:	e3a02000 	mov	r2, #0	; 0x0
        2c561c:	eb5e4d94 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c5620:	e59d0000 	ldr	r0, [sp]
        2c5624:	eb63f6e4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c5628:	e2899001 	add	r9, r9, #1	; 0x1
        2c562c:	e1590008 	cmp	r9, r8
        2c5630:	3afffff0 	bcc	2c55f8 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0xf94>
        2c5634:	e1a02008 	mov	r2, r8
        2c5638:	e28d1014 	add	r1, sp, #20	; 0x14
        2c563c:	e1a00004 	mov	r0, r4
        2c5640:	eb5e34c5 	bl	1a5295c <TCompiler::$EmitFuncall(RefVar const &, unsigned long)>
        2c5644:	ea00036e 	b	2c6404 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1da0>
        2c5648:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        2c564c:	e5900000 	ldr	r0, [r0]
        2c5650:	eb63ff15 	bl	1bc52ac <$Length(long)>
        2c5654:	e1a08000 	mov	r8, r0
        2c5658:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c565c:	e3a09000 	mov	r9, #0	; 0x0
        2c5660:	e3500000 	cmp	r0, #0	; 0x0
        2c5664:	9a00000e 	bls	2c56a4 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1040>
        2c5668:	e59d0010 	ldr	r0, [sp, #16]
        2c566c:	e5900000 	ldr	r0, [r0]
        2c5670:	e1a01009 	mov	r1, r9
        2c5674:	eb63faf6 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c5678:	eb63f2b3 	bl	1bc214c <$AllocateRefHandle(long)>
        2c567c:	e58d0000 	str	r0, [sp]
        2c5680:	e1a0100d 	mov	r1, sp
        2c5684:	e1a00004 	mov	r0, r4
        2c5688:	e3a02000 	mov	r2, #0	; 0x0
        2c568c:	eb5e4d78 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c5690:	e59d0000 	ldr	r0, [sp]
        2c5694:	eb63f6c8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c5698:	e2899001 	add	r9, r9, #1	; 0x1
        2c569c:	e1590008 	cmp	r9, r8
        2c56a0:	3afffff0 	bcc	2c5668 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1004>
        2c56a4:	e28d1014 	add	r1, sp, #20	; 0x14
        2c56a8:	e1a00004 	mov	r0, r4
        2c56ac:	e3a02000 	mov	r2, #0	; 0x0
        2c56b0:	eb5e4d6f 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c56b4:	e1a02008 	mov	r2, r8
        2c56b8:	e1a00004 	mov	r0, r4
        2c56bc:	e3a01006 	mov	r1, #6	; 0x6
        2c56c0:	ea000027 	b	2c5764 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1100>
        2c56c4:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        2c56c8:	e5900000 	ldr	r0, [r0]
        2c56cc:	e1a01009 	mov	r1, r9
        2c56d0:	eb63fadf 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c56d4:	eb63f29c 	bl	1bc214c <$AllocateRefHandle(long)>
        2c56d8:	e58d0000 	str	r0, [sp]
        2c56dc:	e1a0100d 	mov	r1, sp
        2c56e0:	e1a00004 	mov	r0, r4
        2c56e4:	e3a02000 	mov	r2, #0	; 0x0
        2c56e8:	eb5e4d61 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c56ec:	e59d0000 	ldr	r0, [sp]
        2c56f0:	eb63f6b1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c56f4:	e2899001 	add	r9, r9, #1	; 0x1
        2c56f8:	e1590008 	cmp	r9, r8
        2c56fc:	3afffff0 	bcc	2c56c4 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1060>
        2c5700:	e59d0010 	ldr	r0, [sp, #16]
        2c5704:	e5900000 	ldr	r0, [r0]
        2c5708:	e3300002 	teq	r0, #2	; 0x2
        2c570c:	1a000007 	bne	2c5730 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x10cc>
        2c5710:	e28d1014 	add	r1, sp, #20	; 0x14
        2c5714:	e1a00004 	mov	r0, r4
        2c5718:	eb5e3494 	bl	1a52970 <TCompiler::$EmitPush(RefVar const &)>
        2c571c:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        2c5720:	e330003a 	teq	r0, #58	; 0x3a
        2c5724:	13a0100a 	movne	r1, #10	; 0xa
        2c5728:	03a01009 	moveq	r1, #9	; 0x9
        2c572c:	ea00000a 	b	2c575c <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x10f8>
        2c5730:	e28d1010 	add	r1, sp, #16	; 0x10
        2c5734:	e1a00004 	mov	r0, r4
        2c5738:	e3a02000 	mov	r2, #0	; 0x0
        2c573c:	eb5e4d4c 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c5740:	e28d1014 	add	r1, sp, #20	; 0x14
        2c5744:	e1a00004 	mov	r0, r4
        2c5748:	eb5e3488 	bl	1a52970 <TCompiler::$EmitPush(RefVar const &)>
        2c574c:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        2c5750:	e330003a 	teq	r0, #58	; 0x3a
        2c5754:	13a01008 	movne	r1, #8	; 0x8
        2c5758:	03a01007 	moveq	r1, #7	; 0x7
        2c575c:	e1a02008 	mov	r2, r8
        2c5760:	e1a00004 	mov	r0, r4
        2c5764:	eb5e3888 	bl	1a5398c <TCompiler::$Emit(Opcode, long)>
        2c5768:	ea000325 	b	2c6404 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1da0>
        2c576c:	e59d0010 	ldr	r0, [sp, #16]
        2c5770:	e5900000 	ldr	r0, [r0]
        2c5774:	e1a01008 	mov	r1, r8
        2c5778:	eb63fab5 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c577c:	e3100003 	tst	r0, #3	; 0x3
        2c5780:	01a00140 	moveq	r0, r0, asr #2
        2c5784:	0a000000 	beq	2c578c <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1128>
        2c5788:	eb63f263 	bl	1bc211c <$_RINTError(long)>
        2c578c:	e240ce13 	sub	ip, r0, #304	; 0x130
        2c5790:	e33c0002 	teq	ip, #2	; 0x2
        2c5794:	01a00004 	moveq	r0, r4
        2c5798:	028f1f11 	addeq	r1, pc, #68	; 0x44
        2c579c:	0b5e5139 	bleq	1a59c88 <TCompiler::$Warning(char *)>
        2c57a0:	e28d1010 	add	r1, sp, #16	; 0x10
        2c57a4:	e1a00004 	mov	r0, r4
        2c57a8:	e3a02000 	mov	r2, #0	; 0x0
        2c57ac:	eb5e4d30 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c57b0:	e1a00004 	mov	r0, r4
        2c57b4:	eb5e346b 	bl	1a52968 <TCompiler::$EmitPlaceholder(void)>
        2c57b8:	e1a08000 	mov	r8, r0
        2c57bc:	e3360000 	teq	r6, #0	; 0x0
        2c57c0:	0a000012 	beq	2c5810 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x11ac>
        2c57c4:	e1a02006 	mov	r2, r6
        2c57c8:	e28d100c 	add	r1, sp, #12	; 0xc
        2c57cc:	e1a00004 	mov	r0, r4
        2c57d0:	eb5e4d27 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c57d4:	e3300000 	teq	r0, #0	; 0x0
        2c57d8:	11a00004 	movne	r0, r4
        2c57dc:	1b5e3462 	blne	1a5296c <TCompiler::$EmitPop(void)>
        2c57e0:	ea00000e 	b	2c5820 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x11bc>
        2c57e4:	26262075 	undefined
        2c57e8:	73656420 	cmnvc	r5, #536870912	; 0x20000000
        2c57ec:	696e2049 	stmvsdb	lr!, {r0, r3, r6, sp}^
        2c57f0:	46207374 	undefined
        2c57f4:	6174656d 	cmnvs	r4, sp, ror #10
        2c57f8:	656e742e 	strvsb	r7, [lr, -#1070]!
        2c57fc:	2e2e6469 	cdpcs	4, 2, cr6, cr14, cr9, {3}
        2c5800:	6420796f 	strvst	r7, [r0], -#2415
        2c5804:	75206d65 	strvc	r6, [r0, -#3429]!
        2c5808:	616e2041 	cmnvs	lr, r1, asr #32
        2c580c:	4e443f00 	cdpmi	15, 4, cr3, cr4, cr0, {0}
        2c5810:	e28d100c 	add	r1, sp, #12	; 0xc
        2c5814:	e1a00004 	mov	r0, r4
        2c5818:	e3a02000 	mov	r2, #0	; 0x0
        2c581c:	eb5e4d14 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c5820:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2c5824:	e5900000 	ldr	r0, [r0]
        2c5828:	e3300002 	teq	r0, #2	; 0x2
        2c582c:	1a000023 	bne	2c58c0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x125c>
        2c5830:	e3360000 	teq	r6, #0	; 0x0
        2c5834:	0a000006 	beq	2c5854 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x11f0>
        2c5838:	e1a00004 	mov	r0, r4
        2c583c:	eb5e3439 	bl	1a52928 <TCompiler::$CurPC(void)>
        2c5840:	e1a03000 	mov	r3, r0
        2c5844:	e1a01008 	mov	r1, r8
        2c5848:	e1a00004 	mov	r0, r4
        2c584c:	e3a0200d 	mov	r2, #13	; 0xd
        2c5850:	ea000038 	b	2c5938 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x12d4>
        2c5854:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c5858:	e1a00004 	mov	r0, r4
        2c585c:	eb5e3441 	bl	1a52968 <TCompiler::$EmitPlaceholder(void)>
        2c5860:	e1a09000 	mov	r9, r0
        2c5864:	e1a00004 	mov	r0, r4
        2c5868:	eb5e342e 	bl	1a52928 <TCompiler::$CurPC(void)>
        2c586c:	e1a03000 	mov	r3, r0
        2c5870:	e1a01008 	mov	r1, r8
        2c5874:	e1a00004 	mov	r0, r4
        2c5878:	e3a0200d 	mov	r2, #13	; 0xd
        2c587c:	eb5e3012 	bl	1a518cc <TCompiler::$Backpatch(unsigned long, Opcode, long)>
        2c5880:	e3a00002 	mov	r0, #2	; 0x2
        2c5884:	eb63f230 	bl	1bc214c <$AllocateRefHandle(long)>
        2c5888:	e58d0000 	str	r0, [sp]
        2c588c:	e1a0100d 	mov	r1, sp
        2c5890:	e1a00004 	mov	r0, r4
        2c5894:	eb5e3435 	bl	1a52970 <TCompiler::$EmitPush(RefVar const &)>
        2c5898:	e59d0000 	ldr	r0, [sp]
        2c589c:	eb63f646 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c58a0:	e1a00004 	mov	r0, r4
        2c58a4:	eb5e341f 	bl	1a52928 <TCompiler::$CurPC(void)>
        2c58a8:	e1a03000 	mov	r3, r0
        2c58ac:	e1a01009 	mov	r1, r9
        2c58b0:	e1a00004 	mov	r0, r4
        2c58b4:	e3a0200b 	mov	r2, #11	; 0xb
        2c58b8:	eb5e3003 	bl	1a518cc <TCompiler::$Backpatch(unsigned long, Opcode, long)>
        2c58bc:	ea0002d0 	b	2c6404 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1da0>
        2c58c0:	e1a00004 	mov	r0, r4
        2c58c4:	eb5e3427 	bl	1a52968 <TCompiler::$EmitPlaceholder(void)>
        2c58c8:	e1a09000 	mov	r9, r0
        2c58cc:	e1a00004 	mov	r0, r4
        2c58d0:	eb5e3414 	bl	1a52928 <TCompiler::$CurPC(void)>
        2c58d4:	e1a03000 	mov	r3, r0
        2c58d8:	e1a01008 	mov	r1, r8
        2c58dc:	e1a00004 	mov	r0, r4
        2c58e0:	e3a0200d 	mov	r2, #13	; 0xd
        2c58e4:	eb5e2ff8 	bl	1a518cc <TCompiler::$Backpatch(unsigned long, Opcode, long)>
        2c58e8:	e3360000 	teq	r6, #0	; 0x0
        2c58ec:	0a000007 	beq	2c5910 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x12ac>
        2c58f0:	e1a02006 	mov	r2, r6
        2c58f4:	e28d1008 	add	r1, sp, #8	; 0x8
        2c58f8:	e1a00004 	mov	r0, r4
        2c58fc:	eb5e4cdc 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c5900:	e3300000 	teq	r0, #0	; 0x0
        2c5904:	11a00004 	movne	r0, r4
        2c5908:	1b5e3417 	blne	1a5296c <TCompiler::$EmitPop(void)>
        2c590c:	ea000003 	b	2c5920 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x12bc>
        2c5910:	e28d1008 	add	r1, sp, #8	; 0x8
        2c5914:	e1a00004 	mov	r0, r4
        2c5918:	e3a02000 	mov	r2, #0	; 0x0
        2c591c:	eb5e4cd4 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c5920:	e1a00004 	mov	r0, r4
        2c5924:	eb5e33ff 	bl	1a52928 <TCompiler::$CurPC(void)>
        2c5928:	e1a03000 	mov	r3, r0
        2c592c:	e1a01009 	mov	r1, r9
        2c5930:	e1a00004 	mov	r0, r4
        2c5934:	e3a0200b 	mov	r2, #11	; 0xb
        2c5938:	eb5e2fe3 	bl	1a518cc <TCompiler::$Backpatch(unsigned long, Opcode, long)>
        2c593c:	e3360000 	teq	r6, #0	; 0x0
        2c5940:	0a00039a 	beq	2c67b0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x214c>
        2c5944:	ea000205 	b	2c6160 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1afc>
        2c5948:	e1a00004 	mov	r0, r4
        2c594c:	eb5e33f5 	bl	1a52928 <TCompiler::$CurPC(void)>
        2c5950:	e1a08000 	mov	r8, r0
        2c5954:	e1a00004 	mov	r0, r4
        2c5958:	eb5e2fdd 	bl	1a518d4 <TCompiler::$BeginLoop(void)>
        2c595c:	e28d1010 	add	r1, sp, #16	; 0x10
        2c5960:	e1a00004 	mov	r0, r4
        2c5964:	e3a02000 	mov	r2, #0	; 0x0
        2c5968:	eb5e4cc1 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c596c:	e1a00004 	mov	r0, r4
        2c5970:	eb5e33fd 	bl	1a5296c <TCompiler::$EmitPop(void)>
        2c5974:	e1a01008 	mov	r1, r8
        2c5978:	e1a00004 	mov	r0, r4
        2c597c:	eb5e33f5 	bl	1a52958 <TCompiler::$EmitBranch(unsigned long)>
        2c5980:	e1a00004 	mov	r0, r4
        2c5984:	eb5e3803 	bl	1a53998 <TCompiler::$EndLoop(void)>
        2c5988:	ea000388 	b	2c67b0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x214c>
        2c598c:	e24dd018 	sub	sp, sp, #24	; 0x18
        2c5990:	e59d0028 	ldr	r0, [sp, #40]	; fField40
        2c5994:	e5900000 	ldr	r0, [r0]
        2c5998:	e59f1064 	ldr	r1, [pc, #64]	; 2c5a04 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x13a0>
        2c599c:	e5911000 	ldr	r1, [r1]
        2c59a0:	e5911000 	ldr	r1, [r1]
        2c59a4:	eb63fa21 	bl	1bc4230 <$EQRef__FlT1>
        2c59a8:	e200a0ff 	and	sl, r0, #255	; 0xff
        2c59ac:	e59d001c 	ldr	r0, [sp, #28]	; fField28
        2c59b0:	e5900000 	ldr	r0, [r0]
        2c59b4:	eb63fe3c 	bl	1bc52ac <$Length(long)>
        2c59b8:	e3500001 	cmp	r0, #1	; 0x1
        2c59bc:	d3a00000 	movle	r0, #0	; 0x0
        2c59c0:	c3a00001 	movgt	r0, #1	; 0x1
        2c59c4:	e20000ff 	and	r0, r0, #255	; 0xff
        2c59c8:	e58d0014 	str	r0, [sp, #20]	; fField20
        2c59cc:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        2c59d0:	e5900000 	ldr	r0, [r0]
        2c59d4:	e2500002 	subs	r0, r0, #2	; 0x2
        2c59d8:	13a00001 	movne	r0, #1	; 0x1
        2c59dc:	e20000ff 	and	r0, r0, #255	; 0xff
        2c59e0:	e58d0010 	str	r0, [sp, #16]
        2c59e4:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        2c59e8:	e3300000 	teq	r0, #0	; 0x0
        2c59ec:	0a000005 	beq	2c5a08 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x13a4>
        2c59f0:	e59d001c 	ldr	r0, [sp, #28]	; fField28
        2c59f4:	e5900000 	ldr	r0, [r0]
        2c59f8:	e1a01008 	mov	r1, r8
        2c59fc:	eb63fa14 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c5a00:	ea000001 	b	2c5a0c <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x13a8>
        2c5a04:	006824f0 	streqd	r2, [r8], -#64
        2c5a08:	e3a00002 	mov	r0, #2	; 0x2
        2c5a0c:	eb63f1ce 	bl	1bc214c <$AllocateRefHandle(long)>
        2c5a10:	e58d000c 	str	r0, [sp, #12]	; fField12
        2c5a14:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        2c5a18:	e3300000 	teq	r0, #0	; 0x0
        2c5a1c:	e59d001c 	ldr	r0, [sp, #28]	; fField28
        2c5a20:	e5900000 	ldr	r0, [r0]
        2c5a24:	01a01008 	moveq	r1, r8
        2c5a28:	13a01001 	movne	r1, #1	; 0x1
        2c5a2c:	eb63fa08 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c5a30:	eb63f1c5 	bl	1bc214c <$AllocateRefHandle(long)>
        2c5a34:	e58d0008 	str	r0, [sp, #8]	; fField8
        2c5a38:	e59d001c 	ldr	r0, [sp, #28]	; fField28
        2c5a3c:	e5900000 	ldr	r0, [r0]
        2c5a40:	e3a01000 	mov	r1, #0	; 0x0
        2c5a44:	eb63fa02 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c5a48:	eb640a82 	bl	1bc8458 <$SymbolName(long)>
        2c5a4c:	e58d0004 	str	r0, [sp, #4]	; fField4
        2c5a50:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        2c5a54:	e3300000 	teq	r0, #0	; 0x0
        2c5a58:	0a000005 	beq	2c5a74 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1410>
        2c5a5c:	e59d001c 	ldr	r0, [sp, #28]	; fField28
        2c5a60:	e5900000 	ldr	r0, [r0]
        2c5a64:	e3a01001 	mov	r1, #1	; 0x1
        2c5a68:	eb63f9f9 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c5a6c:	eb640a79 	bl	1bc8458 <$SymbolName(long)>
        2c5a70:	ea000000 	b	2c5a78 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1414>
        2c5a74:	e28f0f67 	add	r0, pc, #412	; 0x19c
        2c5a78:	e58d0000 	str	r0, [sp]
        2c5a7c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c5a80:	eb63c00a 	bl	1bb5ab0 <$strlen>
        2c5a84:	e1a08000 	mov	r8, r0
        2c5a88:	e59d0000 	ldr	r0, [sp]
        2c5a8c:	eb63c007 	bl	1bb5ab0 <$strlen>
        2c5a90:	e0880000 	add	r0, r8, r0
        2c5a94:	e2800008 	add	r0, r0, #8	; 0x8
        2c5a98:	eb644432 	bl	1bd6b68 <$malloc>
        2c5a9c:	e1a08000 	mov	r8, r0
        2c5aa0:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        2c5aa4:	eb63c000 	bl	1bb5aac <$strcpy>
        2c5aa8:	e1a00008 	mov	r0, r8
        2c5aac:	e59d1000 	ldr	r1, [sp]
        2c5ab0:	eb63bffb 	bl	1bb5aa4 <$strcat>
        2c5ab4:	e1a00008 	mov	r0, r8
        2c5ab8:	e28f1f57 	add	r1, pc, #348	; 0x15c
        2c5abc:	eb63bff8 	bl	1bb5aa4 <$strcat>
        2c5ac0:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2c5ac4:	e1a00008 	mov	r0, r8
        2c5ac8:	eb63fdec 	bl	1bc5280 <$Intern(char *)>
        2c5acc:	eb63f19e 	bl	1bc214c <$AllocateRefHandle(long)>
        2c5ad0:	e58d0008 	str	r0, [sp, #8]	; fField8
        2c5ad4:	e3a00002 	mov	r0, #2	; 0x2
        2c5ad8:	eb63f19b 	bl	1bc214c <$AllocateRefHandle(long)>
        2c5adc:	e58d0004 	str	r0, [sp, #4]	; fField4
        2c5ae0:	e3a00002 	mov	r0, #2	; 0x2
        2c5ae4:	eb63f198 	bl	1bc214c <$AllocateRefHandle(long)>
        2c5ae8:	e58d0000 	str	r0, [sp]
        2c5aec:	e28d1030 	add	r1, sp, #48	; 0x30
        2c5af0:	e1a00004 	mov	r0, r4
        2c5af4:	e3a02000 	mov	r2, #0	; 0x0
        2c5af8:	eb5e4c5d 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c5afc:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c5b00:	e33a0000 	teq	sl, #0	; 0x0
        2c5b04:	0a00001d 	beq	2c5b80 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x151c>
        2c5b08:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        2c5b0c:	eb63bfe7 	bl	1bb5ab0 <$strlen>
        2c5b10:	e0801008 	add	r1, r0, r8
        2c5b14:	e52d1004 	str	r1, [sp, -#4]!	; fField4
        2c5b18:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        2c5b1c:	eb63bfe3 	bl	1bb5ab0 <$strlen>
        2c5b20:	e49d1004 	ldr	r1, [sp], #4	; fField4
        2c5b24:	e0810000 	add	r0, r1, r0
        2c5b28:	e28f1f3d 	add	r1, pc, #244	; 0xf4
        2c5b2c:	e3a02007 	mov	r2, #7	; 0x7
        2c5b30:	eb63bbc6 	bl	1bb4a50 <$memcpy>
        2c5b34:	e1a00008 	mov	r0, r8
        2c5b38:	eb63fdd0 	bl	1bc5280 <$Intern(char *)>
        2c5b3c:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        2c5b40:	e5810000 	str	r0, [r1]
        2c5b44:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        2c5b48:	eb63bfd8 	bl	1bb5ab0 <$strlen>
        2c5b4c:	e0801008 	add	r1, r0, r8
        2c5b50:	e52d1004 	str	r1, [sp, -#4]!	; fField4
        2c5b54:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        2c5b58:	eb63bfd4 	bl	1bb5ab0 <$strlen>
        2c5b5c:	e49d1004 	ldr	r1, [sp], #4	; fField4
        2c5b60:	e0810000 	add	r0, r1, r0
        2c5b64:	e28f1f30 	add	r1, pc, #192	; 0xc0
        2c5b68:	e3a02008 	mov	r2, #8	; 0x8
        2c5b6c:	eb63bbb7 	bl	1bb4a50 <$memcpy>
        2c5b70:	e1a00008 	mov	r0, r8
        2c5b74:	eb63fdc1 	bl	1bc5280 <$Intern(char *)>
        2c5b78:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        2c5b7c:	e5810000 	str	r0, [r1]
        2c5b80:	e1a00008 	mov	r0, r8
        2c5b84:	eb643373 	bl	1bd2958 <$free>
        2c5b88:	e59d0020 	ldr	r0, [sp, #32]
        2c5b8c:	e3300000 	teq	r0, #0	; 0x0
        2c5b90:	03a00002 	moveq	r0, #2	; 0x2
        2c5b94:	13a0001a 	movne	r0, #26	; 0x1a
        2c5b98:	eb63f16b 	bl	1bc214c <$AllocateRefHandle(long)>
        2c5b9c:	e58d0000 	str	r0, [sp]
        2c5ba0:	e1a0100d 	mov	r1, sp
        2c5ba4:	e1a00004 	mov	r0, r4
        2c5ba8:	eb5e3370 	bl	1a52970 <TCompiler::$EmitPush(RefVar const &)>
        2c5bac:	e59d0000 	ldr	r0, [sp]
        2c5bb0:	eb63f581 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c5bb4:	e59f1078 	ldr	r1, [pc, #78]	; 2c5c34 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x15d0>
        2c5bb8:	e1a00004 	mov	r0, r4
        2c5bbc:	e3a02002 	mov	r2, #2	; 0x2
        2c5bc0:	eb5e3365 	bl	1a5295c <TCompiler::$EmitFuncall(RefVar const &, unsigned long)>
        2c5bc4:	e28d100c 	add	r1, sp, #12	; 0xc
        2c5bc8:	e1a00004 	mov	r0, r4
        2c5bcc:	eb5e376c 	bl	1a53984 <TCompiler::$EmitVarSet(RefVar const &)>
        2c5bd0:	e33a0000 	teq	sl, #0	; 0x0
        2c5bd4:	0a00003c 	beq	2c5ccc <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1668>
        2c5bd8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c5bdc:	e59d0024 	ldr	r0, [sp, #36]	; fField36
        2c5be0:	e3300000 	teq	r0, #0	; 0x0
        2c5be4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c5be8:	e28d1014 	add	r1, sp, #20	; 0x14
        2c5bec:	e1a00004 	mov	r0, r4
        2c5bf0:	0a000010 	beq	2c5c38 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x15d4>
        2c5bf4:	eb5e3360 	bl	1a5297c <TCompiler::$EmitVarGet(RefVar const &)>
        2c5bf8:	e3a0000c 	mov	r0, #12	; 0xc
        2c5bfc:	eb63f152 	bl	1bc214c <$AllocateRefHandle(long)>
        2c5c00:	e58d0000 	str	r0, [sp]
        2c5c04:	e1a0100d 	mov	r1, sp
        2c5c08:	e1a00004 	mov	r0, r4
        2c5c0c:	eb5e3357 	bl	1a52970 <TCompiler::$EmitPush(RefVar const &)>
        2c5c10:	e59d0000 	ldr	r0, [sp]
        2c5c14:	ea00000f 	b	2c5c58 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x15f4>
        2c5c18:	00000000 	andeq	r0, r0, r0
        2c5c1c:	7c697465 	stcvcl	4, cr7, [r9], -#404
        2c5c20:	72000000 	andvc	r0, r0, #0	; 0x0
        2c5c24:	7c696e64 	stcvcl	14, cr6, [r9], -#400
        2c5c28:	65780000 	ldrvsb	r0, [r8]!
        2c5c2c:	7c726573 	ldcvcl	5, cr6, [r2], -#460
        2c5c30:	756c7400 	strvcb	r7, [ip, -#1024]!
        2c5c34:	006839e8 	rsbeq	r3, r8, r8, ror #19
        2c5c38:	eb5e334f 	bl	1a5297c <TCompiler::$EmitVarGet(RefVar const &)>
        2c5c3c:	e3a00014 	mov	r0, #20	; 0x14
        2c5c40:	eb63f141 	bl	1bc214c <$AllocateRefHandle(long)>
        2c5c44:	e58d0000 	str	r0, [sp]
        2c5c48:	e1a0100d 	mov	r1, sp
        2c5c4c:	e1a00004 	mov	r0, r4
        2c5c50:	eb5e3346 	bl	1a52970 <TCompiler::$EmitPush(RefVar const &)>
        2c5c54:	e59d0000 	ldr	r0, [sp]
        2c5c58:	eb63f557 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c5c5c:	e1a01009 	mov	r1, r9
        2c5c60:	e1a00004 	mov	r0, r4
        2c5c64:	e3a02002 	mov	r2, #2	; 0x2
        2c5c68:	eb5e333b 	bl	1a5295c <TCompiler::$EmitFuncall(RefVar const &, unsigned long)>
        2c5c6c:	e28dd004 	add	sp, sp, #4	; 0x4
        2c5c70:	e1a00004 	mov	r0, r4
        2c5c74:	e59d104c 	ldr	r1, [sp, #76]
        2c5c78:	eb5e333c 	bl	1a52970 <TCompiler::$EmitPush(RefVar const &)>
        2c5c7c:	e1a00004 	mov	r0, r4
        2c5c80:	e3a02801 	mov	r2, #65536	; 0x10000
        2c5c84:	e2422001 	sub	r2, r2, #1	; 0x1
        2c5c88:	e3a01011 	mov	r1, #17	; 0x11
        2c5c8c:	eb5e373e 	bl	1a5398c <TCompiler::$Emit(Opcode, long)>
        2c5c90:	e28d1008 	add	r1, sp, #8	; 0x8
        2c5c94:	e1a00004 	mov	r0, r4
        2c5c98:	eb5e3739 	bl	1a53984 <TCompiler::$EmitVarSet(RefVar const &)>
        2c5c9c:	e3a00000 	mov	r0, #0	; 0x0
        2c5ca0:	eb63f129 	bl	1bc214c <$AllocateRefHandle(long)>
        2c5ca4:	e58d0000 	str	r0, [sp]
        2c5ca8:	e1a0100d 	mov	r1, sp
        2c5cac:	e1a00004 	mov	r0, r4
        2c5cb0:	eb5e332e 	bl	1a52970 <TCompiler::$EmitPush(RefVar const &)>
        2c5cb4:	e59d0000 	ldr	r0, [sp]
        2c5cb8:	eb63f53f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c5cbc:	e28d100c 	add	r1, sp, #12	; 0xc
        2c5cc0:	e1a00004 	mov	r0, r4
        2c5cc4:	eb5e372e 	bl	1a53984 <TCompiler::$EmitVarSet(RefVar const &)>
        2c5cc8:	e28dd004 	add	sp, sp, #4	; 0x4
        2c5ccc:	e24dd008 	sub	sp, sp, #8	; 0x8
        2c5cd0:	e1a00004 	mov	r0, r4
        2c5cd4:	eb5e3323 	bl	1a52968 <TCompiler::$EmitPlaceholder(void)>
        2c5cd8:	e1a08000 	mov	r8, r0
        2c5cdc:	e1a00004 	mov	r0, r4
        2c5ce0:	eb5e3310 	bl	1a52928 <TCompiler::$CurPC(void)>
        2c5ce4:	e58d0004 	str	r0, [sp, #4]	; fField4
        2c5ce8:	e1a00004 	mov	r0, r4
        2c5cec:	eb5e2ef8 	bl	1a518d4 <TCompiler::$BeginLoop(void)>
        2c5cf0:	e28d1014 	add	r1, sp, #20	; 0x14
        2c5cf4:	e1a00004 	mov	r0, r4
        2c5cf8:	eb5e331f 	bl	1a5297c <TCompiler::$EmitVarGet(RefVar const &)>
        2c5cfc:	e3a00004 	mov	r0, #4	; 0x4
        2c5d00:	eb63f111 	bl	1bc214c <$AllocateRefHandle(long)>
        2c5d04:	e58d0000 	str	r0, [sp]
        2c5d08:	e1a0100d 	mov	r1, sp
        2c5d0c:	e1a00004 	mov	r0, r4
        2c5d10:	eb5e3316 	bl	1a52970 <TCompiler::$EmitPush(RefVar const &)>
        2c5d14:	e59d0000 	ldr	r0, [sp]
        2c5d18:	eb63f527 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c5d1c:	e1a01009 	mov	r1, r9
        2c5d20:	e1a00004 	mov	r0, r4
        2c5d24:	e3a02002 	mov	r2, #2	; 0x2
        2c5d28:	eb5e330b 	bl	1a5295c <TCompiler::$EmitFuncall(RefVar const &, unsigned long)>
        2c5d2c:	e28d1020 	add	r1, sp, #32	; 0x20
        2c5d30:	e1a00004 	mov	r0, r4
        2c5d34:	eb5e3712 	bl	1a53984 <TCompiler::$EmitVarSet(RefVar const &)>
        2c5d38:	e59d002c 	ldr	r0, [sp, #44]	; fField44
        2c5d3c:	e3300000 	teq	r0, #0	; 0x0
        2c5d40:	0a000013 	beq	2c5d94 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1730>
        2c5d44:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c5d48:	e28d1018 	add	r1, sp, #24	; 0x18
        2c5d4c:	e1a00004 	mov	r0, r4
        2c5d50:	eb5e3309 	bl	1a5297c <TCompiler::$EmitVarGet(RefVar const &)>
        2c5d54:	e3a00000 	mov	r0, #0	; 0x0
        2c5d58:	eb63f0fb 	bl	1bc214c <$AllocateRefHandle(long)>
        2c5d5c:	e58d0000 	str	r0, [sp]
        2c5d60:	e1a0100d 	mov	r1, sp
        2c5d64:	e1a00004 	mov	r0, r4
        2c5d68:	eb5e3300 	bl	1a52970 <TCompiler::$EmitPush(RefVar const &)>
        2c5d6c:	e59d0000 	ldr	r0, [sp]
        2c5d70:	eb63f511 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c5d74:	e1a01009 	mov	r1, r9
        2c5d78:	e1a00004 	mov	r0, r4
        2c5d7c:	e3a02002 	mov	r2, #2	; 0x2
        2c5d80:	eb5e32f5 	bl	1a5295c <TCompiler::$EmitFuncall(RefVar const &, unsigned long)>
        2c5d84:	e28d1028 	add	r1, sp, #40	; 0x28
        2c5d88:	e1a00004 	mov	r0, r4
        2c5d8c:	eb5e36fc 	bl	1a53984 <TCompiler::$EmitVarSet(RefVar const &)>
        2c5d90:	e28dd004 	add	sp, sp, #4	; 0x4
        2c5d94:	e33a0000 	teq	sl, #0	; 0x0
        2c5d98:	0a000022 	beq	2c5e28 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x17c4>
        2c5d9c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c5da0:	e28d1010 	add	r1, sp, #16	; 0x10
        2c5da4:	e1a00004 	mov	r0, r4
        2c5da8:	eb5e32f3 	bl	1a5297c <TCompiler::$EmitVarGet(RefVar const &)>
        2c5dac:	e28d1014 	add	r1, sp, #20	; 0x14
        2c5db0:	e1a00004 	mov	r0, r4
        2c5db4:	eb5e32f0 	bl	1a5297c <TCompiler::$EmitVarGet(RefVar const &)>
        2c5db8:	e28d103c 	add	r1, sp, #60	; 0x3c
        2c5dbc:	e1a00004 	mov	r0, r4
        2c5dc0:	e3a02000 	mov	r2, #0	; 0x0
        2c5dc4:	eb5e4baa 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c5dc8:	e59f1054 	ldr	r1, [pc, #54]	; 2c5e24 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x17c0>
        2c5dcc:	e1a00004 	mov	r0, r4
        2c5dd0:	e3a02003 	mov	r2, #3	; 0x3
        2c5dd4:	eb5e32e0 	bl	1a5295c <TCompiler::$EmitFuncall(RefVar const &, unsigned long)>
        2c5dd8:	e1a00004 	mov	r0, r4
        2c5ddc:	eb5e32e2 	bl	1a5296c <TCompiler::$EmitPop(void)>
        2c5de0:	e3a00004 	mov	r0, #4	; 0x4
        2c5de4:	eb63f0d8 	bl	1bc214c <$AllocateRefHandle(long)>
        2c5de8:	e58d0000 	str	r0, [sp]
        2c5dec:	e1a0100d 	mov	r1, sp
        2c5df0:	e1a00004 	mov	r0, r4
        2c5df4:	eb5e32dd 	bl	1a52970 <TCompiler::$EmitPush(RefVar const &)>
        2c5df8:	e59d0000 	ldr	r0, [sp]
        2c5dfc:	eb63f4ee 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c5e00:	e28d1014 	add	r1, sp, #20	; 0x14
        2c5e04:	e1a00004 	mov	r0, r4
        2c5e08:	eb5e36dc 	bl	1a53980 <TCompiler::$EmitVarIncr(RefVar const &)>
        2c5e0c:	e1a00004 	mov	r0, r4
        2c5e10:	eb5e32d5 	bl	1a5296c <TCompiler::$EmitPop(void)>
        2c5e14:	e1a00004 	mov	r0, r4
        2c5e18:	eb5e32d3 	bl	1a5296c <TCompiler::$EmitPop(void)>
        2c5e1c:	e28dd004 	add	sp, sp, #4	; 0x4
        2c5e20:	ea000007 	b	2c5e44 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x17e0>
        2c5e24:	00684558 	rsbeq	r4, r8, r8, asr r5
        2c5e28:	e28d1038 	add	r1, sp, #56	; 0x38
        2c5e2c:	e1a00004 	mov	r0, r4
        2c5e30:	e3a02001 	mov	r2, #1	; 0x1
        2c5e34:	eb5e4b8e 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c5e38:	e3300000 	teq	r0, #0	; 0x0
        2c5e3c:	11a00004 	movne	r0, r4
        2c5e40:	1b5e32c9 	blne	1a5296c <TCompiler::$EmitPop(void)>
        2c5e44:	e28d1014 	add	r1, sp, #20	; 0x14
        2c5e48:	e1a00004 	mov	r0, r4
        2c5e4c:	eb5e32ca 	bl	1a5297c <TCompiler::$EmitVarGet(RefVar const &)>
        2c5e50:	e1a00004 	mov	r0, r4
        2c5e54:	e3a02005 	mov	r2, #5	; 0x5
        2c5e58:	e3a01000 	mov	r1, #0	; 0x0
        2c5e5c:	eb5e36ca 	bl	1a5398c <TCompiler::$Emit(Opcode, long)>
        2c5e60:	e1a00004 	mov	r0, r4
        2c5e64:	eb5e32af 	bl	1a52928 <TCompiler::$CurPC(void)>
        2c5e68:	e1a03000 	mov	r3, r0
        2c5e6c:	e1a01008 	mov	r1, r8
        2c5e70:	e1a00004 	mov	r0, r4
        2c5e74:	e3a0200b 	mov	r2, #11	; 0xb
        2c5e78:	eb5e2e93 	bl	1a518cc <TCompiler::$Backpatch(unsigned long, Opcode, long)>
        2c5e7c:	e28d1014 	add	r1, sp, #20	; 0x14
        2c5e80:	e1a00004 	mov	r0, r4
        2c5e84:	eb5e32bc 	bl	1a5297c <TCompiler::$EmitVarGet(RefVar const &)>
        2c5e88:	e1a00004 	mov	r0, r4
        2c5e8c:	e3a02006 	mov	r2, #6	; 0x6
        2c5e90:	e3a01000 	mov	r1, #0	; 0x0
        2c5e94:	eb5e36bc 	bl	1a5398c <TCompiler::$Emit(Opcode, long)>
        2c5e98:	e1a00004 	mov	r0, r4
        2c5e9c:	e3a0100d 	mov	r1, #13	; 0xd
        2c5ea0:	e59d2004 	ldr	r2, [sp, #4]	; fField4
        2c5ea4:	eb5e36b8 	bl	1a5398c <TCompiler::$Emit(Opcode, long)>
        2c5ea8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c5eac:	e33a0000 	teq	sl, #0	; 0x0
        2c5eb0:	0a000003 	beq	2c5ec4 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1860>
        2c5eb4:	e1a00004 	mov	r0, r4
        2c5eb8:	eb5e32aa 	bl	1a52968 <TCompiler::$EmitPlaceholder(void)>
        2c5ebc:	e1a08000 	mov	r8, r0
        2c5ec0:	ea000007 	b	2c5ee4 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1880>
        2c5ec4:	e3a00002 	mov	r0, #2	; 0x2
        2c5ec8:	eb63f09f 	bl	1bc214c <$AllocateRefHandle(long)>
        2c5ecc:	e58d0000 	str	r0, [sp]
        2c5ed0:	e1a0100d 	mov	r1, sp
        2c5ed4:	e1a00004 	mov	r0, r4
        2c5ed8:	eb5e32a4 	bl	1a52970 <TCompiler::$EmitPush(RefVar const &)>
        2c5edc:	e59d0000 	ldr	r0, [sp]
        2c5ee0:	eb63f4b5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c5ee4:	e1a00004 	mov	r0, r4
        2c5ee8:	eb5e36aa 	bl	1a53998 <TCompiler::$EndLoop(void)>
        2c5eec:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c5ef0:	e33a0000 	teq	sl, #0	; 0x0
        2c5ef4:	0a00001d 	beq	2c5f70 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x190c>
        2c5ef8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c5efc:	e28d1018 	add	r1, sp, #24	; 0x18
        2c5f00:	e1a00004 	mov	r0, r4
        2c5f04:	eb5e369e 	bl	1a53984 <TCompiler::$EmitVarSet(RefVar const &)>
        2c5f08:	e1a00004 	mov	r0, r4
        2c5f0c:	eb5e3296 	bl	1a5296c <TCompiler::$EmitPop(void)>
        2c5f10:	e1a00004 	mov	r0, r4
        2c5f14:	eb5e3294 	bl	1a5296c <TCompiler::$EmitPop(void)>
        2c5f18:	e1a00004 	mov	r0, r4
        2c5f1c:	eb5e3281 	bl	1a52928 <TCompiler::$CurPC(void)>
        2c5f20:	e1a03000 	mov	r3, r0
        2c5f24:	e1a01008 	mov	r1, r8
        2c5f28:	e1a00004 	mov	r0, r4
        2c5f2c:	e3a0200b 	mov	r2, #11	; 0xb
        2c5f30:	eb5e2e65 	bl	1a518cc <TCompiler::$Backpatch(unsigned long, Opcode, long)>
        2c5f34:	e28d1018 	add	r1, sp, #24	; 0x18
        2c5f38:	e1a00004 	mov	r0, r4
        2c5f3c:	eb5e328e 	bl	1a5297c <TCompiler::$EmitVarGet(RefVar const &)>
        2c5f40:	e3a00002 	mov	r0, #2	; 0x2
        2c5f44:	eb63f080 	bl	1bc214c <$AllocateRefHandle(long)>
        2c5f48:	e58d0000 	str	r0, [sp]
        2c5f4c:	e1a0100d 	mov	r1, sp
        2c5f50:	e1a00004 	mov	r0, r4
        2c5f54:	eb5e3285 	bl	1a52970 <TCompiler::$EmitPush(RefVar const &)>
        2c5f58:	e59d0000 	ldr	r0, [sp]
        2c5f5c:	eb63f496 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c5f60:	e28d1018 	add	r1, sp, #24	; 0x18
        2c5f64:	e1a00004 	mov	r0, r4
        2c5f68:	eb5e3685 	bl	1a53984 <TCompiler::$EmitVarSet(RefVar const &)>
        2c5f6c:	e28dd004 	add	sp, sp, #4	; 0x4
        2c5f70:	e3a00002 	mov	r0, #2	; 0x2
        2c5f74:	eb63f074 	bl	1bc214c <$AllocateRefHandle(long)>
        2c5f78:	e58d0000 	str	r0, [sp]
        2c5f7c:	e1a0100d 	mov	r1, sp
        2c5f80:	e1a00004 	mov	r0, r4
        2c5f84:	eb5e3279 	bl	1a52970 <TCompiler::$EmitPush(RefVar const &)>
        2c5f88:	e59d0000 	ldr	r0, [sp]
        2c5f8c:	eb63f48a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c5f90:	e28d101c 	add	r1, sp, #28	; 0x1c
        2c5f94:	e1a00004 	mov	r0, r4
        2c5f98:	eb5e3679 	bl	1a53984 <TCompiler::$EmitVarSet(RefVar const &)>
        2c5f9c:	e5bd0014 	ldr	r0, [sp, #20]!	; fField20
        2c5fa0:	eb63f485 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c5fa4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c5fa8:	eb63f483 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c5fac:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2c5fb0:	eb63f481 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c5fb4:	e28dd00c 	add	sp, sp, #12	; 0xc
        2c5fb8:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2c5fbc:	eb63f47e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c5fc0:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        2c5fc4:	eb63f47c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c5fc8:	e28dd018 	add	sp, sp, #24	; 0x18
        2c5fcc:	ea0001f7 	b	2c67b0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x214c>
        2c5fd0:	e1a00004 	mov	r0, r4
        2c5fd4:	eb5e3263 	bl	1a52968 <TCompiler::$EmitPlaceholder(void)>
        2c5fd8:	e1a09000 	mov	r9, r0
        2c5fdc:	e1a00004 	mov	r0, r4
        2c5fe0:	eb5e3250 	bl	1a52928 <TCompiler::$CurPC(void)>
        2c5fe4:	e1a08000 	mov	r8, r0
        2c5fe8:	e1a00004 	mov	r0, r4
        2c5fec:	eb5e2e38 	bl	1a518d4 <TCompiler::$BeginLoop(void)>
        2c5ff0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c5ff4:	e28d1010 	add	r1, sp, #16	; 0x10
        2c5ff8:	e1a00004 	mov	r0, r4
        2c5ffc:	e3a02000 	mov	r2, #0	; 0x0
        2c6000:	eb5e4b1b 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c6004:	e1a00004 	mov	r0, r4
        2c6008:	eb5e3257 	bl	1a5296c <TCompiler::$EmitPop(void)>
        2c600c:	e1a00004 	mov	r0, r4
        2c6010:	eb5e3244 	bl	1a52928 <TCompiler::$CurPC(void)>
        2c6014:	e1a03000 	mov	r3, r0
        2c6018:	e1a01009 	mov	r1, r9
        2c601c:	e1a00004 	mov	r0, r4
        2c6020:	e3a0200b 	mov	r2, #11	; 0xb
        2c6024:	eb5e2e28 	bl	1a518cc <TCompiler::$Backpatch(unsigned long, Opcode, long)>
        2c6028:	e28d1014 	add	r1, sp, #20	; 0x14
        2c602c:	e1a00004 	mov	r0, r4
        2c6030:	e3a02000 	mov	r2, #0	; 0x0
        2c6034:	eb5e4b0e 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c6038:	e1a02008 	mov	r2, r8
        2c603c:	e1a00004 	mov	r0, r4
        2c6040:	e3a0100c 	mov	r1, #12	; 0xc
        2c6044:	eb5e3650 	bl	1a5398c <TCompiler::$Emit(Opcode, long)>
        2c6048:	e3a00002 	mov	r0, #2	; 0x2
        2c604c:	eb63f03e 	bl	1bc214c <$AllocateRefHandle(long)>
        2c6050:	e58d0000 	str	r0, [sp]
        2c6054:	e1a0100d 	mov	r1, sp
        2c6058:	e1a00004 	mov	r0, r4
        2c605c:	eb5e3243 	bl	1a52970 <TCompiler::$EmitPush(RefVar const &)>
        2c6060:	e59d0000 	ldr	r0, [sp]
        2c6064:	eb63f454 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c6068:	e1a00004 	mov	r0, r4
        2c606c:	eb5e3649 	bl	1a53998 <TCompiler::$EndLoop(void)>
        2c6070:	ea0000e3 	b	2c6404 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1da0>
        2c6074:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c6078:	e1a00004 	mov	r0, r4
        2c607c:	eb5e3229 	bl	1a52928 <TCompiler::$CurPC(void)>
        2c6080:	e58d0000 	str	r0, [sp]
        2c6084:	e1a00004 	mov	r0, r4
        2c6088:	eb5e2e11 	bl	1a518d4 <TCompiler::$BeginLoop(void)>
        2c608c:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        2c6090:	e5900000 	ldr	r0, [r0]
        2c6094:	eb63fc84 	bl	1bc52ac <$Length(long)>
        2c6098:	e1a09000 	mov	r9, r0
        2c609c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c60a0:	e3a08000 	mov	r8, #0	; 0x0
        2c60a4:	e3500000 	cmp	r0, #0	; 0x0
        2c60a8:	9a000015 	bls	2c6104 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1aa0>
        2c60ac:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c60b0:	e59d001c 	ldr	r0, [sp, #28]	; fField28
        2c60b4:	e5900000 	ldr	r0, [r0]
        2c60b8:	e1a01008 	mov	r1, r8
        2c60bc:	eb63f864 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c60c0:	eb63f021 	bl	1bc214c <$AllocateRefHandle(long)>
        2c60c4:	e58d0000 	str	r0, [sp]
        2c60c8:	e1a0100d 	mov	r1, sp
        2c60cc:	e1a00004 	mov	r0, r4
        2c60d0:	e3a02001 	mov	r2, #1	; 0x1
        2c60d4:	eb5e4ae6 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c60d8:	e1b0a000 	movs	sl, r0
        2c60dc:	13a0a001 	movne	sl, #1	; 0x1
        2c60e0:	e59d0000 	ldr	r0, [sp]
        2c60e4:	eb63f434 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c60e8:	e33a0000 	teq	sl, #0	; 0x0
        2c60ec:	11a00004 	movne	r0, r4
        2c60f0:	1b5e321d 	blne	1a5296c <TCompiler::$EmitPop(void)>
        2c60f4:	e28dd004 	add	sp, sp, #4	; 0x4
        2c60f8:	e2888001 	add	r8, r8, #1	; 0x1
        2c60fc:	e1580009 	cmp	r8, r9
        2c6100:	3affffe9 	bcc	2c60ac <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1a48>
        2c6104:	e28d1014 	add	r1, sp, #20	; 0x14
        2c6108:	e1a00004 	mov	r0, r4
        2c610c:	e3a02000 	mov	r2, #0	; 0x0
        2c6110:	eb5e4ad7 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c6114:	e1a00004 	mov	r0, r4
        2c6118:	e3a0100d 	mov	r1, #13	; 0xd
        2c611c:	e59d2004 	ldr	r2, [sp, #4]	; fField4
        2c6120:	eb5e3619 	bl	1a5398c <TCompiler::$Emit(Opcode, long)>
        2c6124:	e3a00002 	mov	r0, #2	; 0x2
        2c6128:	eb63f007 	bl	1bc214c <$AllocateRefHandle(long)>
        2c612c:	e58d0000 	str	r0, [sp]
        2c6130:	e1a0100d 	mov	r1, sp
        2c6134:	e1a00004 	mov	r0, r4
        2c6138:	eb5e320c 	bl	1a52970 <TCompiler::$EmitPush(RefVar const &)>
        2c613c:	e59d0000 	ldr	r0, [sp]
        2c6140:	eb63f41d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c6144:	e1a00004 	mov	r0, r4
        2c6148:	eb5e3612 	bl	1a53998 <TCompiler::$EndLoop(void)>
        2c614c:	e28dd004 	add	sp, sp, #4	; 0x4
        2c6150:	ea0000ab 	b	2c6404 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1da0>
        2c6154:	e3a05001 	mov	r5, #1	; 0x1
        2c6158:	e3360000 	teq	r6, #0	; 0x0
        2c615c:	0a000001 	beq	2c6168 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1b04>
        2c6160:	e3a07000 	mov	r7, #0	; 0x0
        2c6164:	ea000191 	b	2c67b0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x214c>
        2c6168:	e59d0000 	ldr	r0, [sp]
        2c616c:	e5900000 	ldr	r0, [r0]
        2c6170:	e5840000 	str	r0, [r4]
        2c6174:	eb5e31e9 	bl	1a52920 <TFunctionState::$CopyClosedArgs(void)>
        2c6178:	e28d100c 	add	r1, sp, #12	; 0xc
        2c617c:	e1a00004 	mov	r0, r4
        2c6180:	e3a02000 	mov	r2, #0	; 0x0
        2c6184:	eb5e4aba 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c6188:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c618c:	e5940000 	ldr	r0, [r4]
        2c6190:	e5900018 	ldr	r0, [r0, #24]	; fField24
        2c6194:	e5900000 	ldr	r0, [r0]
        2c6198:	e2505002 	subs	r5, r0, #2	; 0x2
        2c619c:	13a05001 	movne	r5, #1	; 0x1
        2c61a0:	e3a00002 	mov	r0, #2	; 0x2
        2c61a4:	eb63efe8 	bl	1bc214c <$AllocateRefHandle(long)>
        2c61a8:	e58d0000 	str	r0, [sp]
        2c61ac:	e1a00004 	mov	r0, r4
        2c61b0:	eb5e35f6 	bl	1a53990 <TCompiler::$EndFunction(void)>
        2c61b4:	e59d1000 	ldr	r1, [sp]
        2c61b8:	e5810000 	str	r0, [r1]
        2c61bc:	e1a0100d 	mov	r1, sp
        2c61c0:	e1a00004 	mov	r0, r4
        2c61c4:	eb5e31e9 	bl	1a52970 <TCompiler::$EmitPush(RefVar const &)>
        2c61c8:	e3350000 	teq	r5, #0	; 0x0
        2c61cc:	0a000003 	beq	2c61e0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1b7c>
        2c61d0:	e1a00004 	mov	r0, r4
        2c61d4:	e3a02004 	mov	r2, #4	; 0x4
        2c61d8:	e3a01000 	mov	r1, #0	; 0x0
        2c61dc:	eb5e35ea 	bl	1a5398c <TCompiler::$Emit(Opcode, long)>
        2c61e0:	e59d0000 	ldr	r0, [sp]
        2c61e4:	eb63f3f4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c61e8:	e28dd004 	add	sp, sp, #4	; 0x4
        2c61ec:	ea00017c 	b	2c67e4 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x2180>
        2c61f0:	e3a05001 	mov	r5, #1	; 0x1
        2c61f4:	e59d0010 	ldr	r0, [sp, #16]
        2c61f8:	e5900000 	ldr	r0, [r0]
        2c61fc:	eb63fc2a 	bl	1bc52ac <$Length(long)>
        2c6200:	e1a08000 	mov	r8, r0
        2c6204:	e24dd008 	sub	sp, sp, #8	; 0x8
        2c6208:	e3a09000 	mov	r9, #0	; 0x0
        2c620c:	e3500000 	cmp	r0, #0	; 0x0
        2c6210:	9a00000e 	bls	2c6250 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1bec>
        2c6214:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        2c6218:	e5900000 	ldr	r0, [r0]
        2c621c:	e1a01009 	mov	r1, r9
        2c6220:	eb63f80b 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c6224:	eb63efc8 	bl	1bc214c <$AllocateRefHandle(long)>
        2c6228:	e58d0000 	str	r0, [sp]
        2c622c:	e1a0100d 	mov	r1, sp
        2c6230:	e1a00004 	mov	r0, r4
        2c6234:	e3a02000 	mov	r2, #0	; 0x0
        2c6238:	eb5e4a8d 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c623c:	e59d0000 	ldr	r0, [sp]
        2c6240:	eb63f3dd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c6244:	e2899001 	add	r9, r9, #1	; 0x1
        2c6248:	e1590008 	cmp	r9, r8
        2c624c:	3afffff0 	bcc	2c6214 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1bb0>
        2c6250:	e28d0018 	add	r0, sp, #24	; 0x18
        2c6254:	eb63efc3 	bl	1bc2168 <$ClassOf(RefVar const &)>
        2c6258:	eb63efbb 	bl	1bc214c <$AllocateRefHandle(long)>
        2c625c:	e58d0004 	str	r0, [sp, #4]	; fField4
        2c6260:	e28d1004 	add	r1, sp, #4	; 0x4
        2c6264:	e1a00004 	mov	r0, r4
        2c6268:	eb5e31c0 	bl	1a52970 <TCompiler::$EmitPush(RefVar const &)>
        2c626c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c6270:	eb63f3d1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c6274:	e1a02008 	mov	r2, r8
        2c6278:	e1a00004 	mov	r0, r4
        2c627c:	e3a01011 	mov	r1, #17	; 0x11
        2c6280:	eb5e35c1 	bl	1a5398c <TCompiler::$Emit(Opcode, long)>
        2c6284:	ea000148 	b	2c67ac <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x2148>
        2c6288:	e3a05001 	mov	r5, #1	; 0x1
        2c628c:	e59d0010 	ldr	r0, [sp, #16]
        2c6290:	e5900000 	ldr	r0, [r0]
        2c6294:	eb63fc04 	bl	1bc52ac <$Length(long)>
        2c6298:	e1a08000 	mov	r8, r0
        2c629c:	e24dd030 	sub	sp, sp, #48	; 0x30
        2c62a0:	e28d1040 	add	r1, sp, #64	; 0x40
        2c62a4:	e1a0000d 	mov	r0, sp
        2c62a8:	e3a02000 	mov	r2, #0	; 0x0
        2c62ac:	eb63eb8f 	bl	1bc10f0 <TObjectIterator::$__ct(RefVar const &, int)>
        2c62b0:	e1a0000d 	mov	r0, sp
        2c62b4:	eb63f3c8 	bl	1bc31dc <TObjectIterator::$Done(void)>
        2c62b8:	e28d9008 	add	r9, sp, #8	; 0x8
        2c62bc:	e3300000 	teq	r0, #0	; 0x0
        2c62c0:	1a000009 	bne	2c62ec <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1c88>
        2c62c4:	e1a01009 	mov	r1, r9
        2c62c8:	e1a00004 	mov	r0, r4
        2c62cc:	e3a02000 	mov	r2, #0	; 0x0
        2c62d0:	eb5e4a67 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c62d4:	e1a0000d 	mov	r0, sp
        2c62d8:	eb63fc02 	bl	1bc52e8 <TObjectIterator::$Next(void)>
        2c62dc:	e1a0000d 	mov	r0, sp
        2c62e0:	eb63f3bd 	bl	1bc31dc <TObjectIterator::$Done(void)>
        2c62e4:	e3300000 	teq	r0, #0	; 0x0
        2c62e8:	0afffff5 	beq	2c62c4 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1c60>
        2c62ec:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c62f0:	e28d0044 	add	r0, sp, #68	; 0x44
        2c62f4:	eb5df3bc 	bl	1a431ec <$SharedFrameMap(RefVar const &)>
        2c62f8:	eb63ef93 	bl	1bc214c <$AllocateRefHandle(long)>
        2c62fc:	e58d0000 	str	r0, [sp]
        2c6300:	e1a0100d 	mov	r1, sp
        2c6304:	e1a00004 	mov	r0, r4
        2c6308:	eb5e3198 	bl	1a52970 <TCompiler::$EmitPush(RefVar const &)>
        2c630c:	e1a02008 	mov	r2, r8
        2c6310:	e1a00004 	mov	r0, r4
        2c6314:	e3a01010 	mov	r1, #16	; 0x10
        2c6318:	eb5e359b 	bl	1a5398c <TCompiler::$Emit(Opcode, long)>
        2c631c:	e59d0000 	ldr	r0, [sp]
        2c6320:	eb63f3a5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c6324:	e28dd004 	add	sp, sp, #4	; 0x4
        2c6328:	e1a0000d 	mov	r0, sp
        2c632c:	e3a01000 	mov	r1, #0	; 0x0
        2c6330:	e1a0e00f 	mov	lr, pc
        2c6334:	e59df000 	ldr	pc, [sp]
        2c6338:	e28dd030 	add	sp, sp, #48	; 0x30
        2c633c:	ea00011b 	b	2c67b0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x214c>
        2c6340:	e3a05001 	mov	r5, #1	; 0x1
        2c6344:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c6348:	e1a0100a 	mov	r1, sl
        2c634c:	e1a00004 	mov	r0, r4
        2c6350:	eb5e4e4a 	bl	1a59c80 <TCompiler::$WalkForStringer(RefVar const &)>
        2c6354:	e1a08000 	mov	r8, r0
        2c6358:	e1a00004 	mov	r0, r4
        2c635c:	e59d1024 	ldr	r1, [sp, #36]	; fField36
        2c6360:	eb5e3182 	bl	1a52970 <TCompiler::$EmitPush(RefVar const &)>
        2c6364:	e1a02008 	mov	r2, r8
        2c6368:	e1a00004 	mov	r0, r4
        2c636c:	e3a01011 	mov	r1, #17	; 0x11
        2c6370:	eb5e3585 	bl	1a5398c <TCompiler::$Emit(Opcode, long)>
        2c6374:	e28f0f08 	add	r0, pc, #32	; 0x20
        2c6378:	eb63fbc0 	bl	1bc5280 <$Intern(char *)>
        2c637c:	eb63ef72 	bl	1bc214c <$AllocateRefHandle(long)>
        2c6380:	e58d0000 	str	r0, [sp]
        2c6384:	e1a0100d 	mov	r1, sp
        2c6388:	e1a00004 	mov	r0, r4
        2c638c:	e3a02001 	mov	r2, #1	; 0x1
        2c6390:	eb5e3171 	bl	1a5295c <TCompiler::$EmitFuncall(RefVar const &, unsigned long)>
        2c6394:	e59d0000 	ldr	r0, [sp]
        2c6398:	ea000018 	b	2c6400 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1d9c>
        2c639c:	53747269 	cmnpl	r4, #-1879048186	; 0x90000006
        2c63a0:	6e676572 	mcrvs	5, 3, r6, cr7, cr2, {3}
        2c63a4:	00000000 	andeq	r0, r0, r0
        2c63a8:	e3a05001 	mov	r5, #1	; 0x1
        2c63ac:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c63b0:	e1a0100a 	mov	r1, sl
        2c63b4:	e1a00004 	mov	r0, r4
        2c63b8:	eb5e4e30 	bl	1a59c80 <TCompiler::$WalkForStringer(RefVar const &)>
        2c63bc:	e1a08000 	mov	r8, r0
        2c63c0:	e1a00004 	mov	r0, r4
        2c63c4:	e59d1024 	ldr	r1, [sp, #36]	; fField36
        2c63c8:	eb5e3168 	bl	1a52970 <TCompiler::$EmitPush(RefVar const &)>
        2c63cc:	e1a02008 	mov	r2, r8
        2c63d0:	e1a00004 	mov	r0, r4
        2c63d4:	e3a01011 	mov	r1, #17	; 0x11
        2c63d8:	eb5e356b 	bl	1a5398c <TCompiler::$Emit(Opcode, long)>
        2c63dc:	e24f0f12 	sub	r0, pc, #72	; 0x48
        2c63e0:	eb63fba6 	bl	1bc5280 <$Intern(char *)>
        2c63e4:	eb63ef58 	bl	1bc214c <$AllocateRefHandle(long)>
        2c63e8:	e58d0000 	str	r0, [sp]
        2c63ec:	e1a0100d 	mov	r1, sp
        2c63f0:	e1a00004 	mov	r0, r4
        2c63f4:	e3a02001 	mov	r2, #1	; 0x1
        2c63f8:	eb5e3157 	bl	1a5295c <TCompiler::$EmitFuncall(RefVar const &, unsigned long)>
        2c63fc:	e59d0000 	ldr	r0, [sp]
        2c6400:	eb63f36d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c6404:	e28dd004 	add	sp, sp, #4	; 0x4
        2c6408:	ea0000e8 	b	2c67b0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x214c>
        2c640c:	e24dd008 	sub	sp, sp, #8	; 0x8
        2c6410:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        2c6414:	e5900000 	ldr	r0, [r0]
        2c6418:	eb63fba3 	bl	1bc52ac <$Length(long)>
        2c641c:	e1a08000 	mov	r8, r0
        2c6420:	e1a01000 	mov	r1, r0
        2c6424:	e59d0028 	ldr	r0, [sp, #40]	; fField40
        2c6428:	eb63ef42 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        2c642c:	eb63ef46 	bl	1bc214c <$AllocateRefHandle(long)>
        2c6430:	e2481001 	sub	r1, r8, #1	; 0x1
        2c6434:	e58d0004 	str	r0, [sp, #4]	; fField4
        2c6438:	e58d1020 	str	r1, [sp, #32]
        2c643c:	e59d0028 	ldr	r0, [sp, #40]	; fField40
        2c6440:	eb63ef3c 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        2c6444:	eb63ef40 	bl	1bc214c <$AllocateRefHandle(long)>
        2c6448:	e58d0000 	str	r0, [sp]
        2c644c:	e3a00002 	mov	r0, #2	; 0x2
        2c6450:	eb63ef3d 	bl	1bc214c <$AllocateRefHandle(long)>
        2c6454:	e1a09000 	mov	r9, r0
        2c6458:	e3a0a000 	mov	sl, #0	; 0x0
        2c645c:	e3580000 	cmp	r8, #0	; 0x0
        2c6460:	da00001e 	ble	2c64e0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1e7c>
        2c6464:	e24dd008 	sub	sp, sp, #8	; 0x8
        2c6468:	e59d001c 	ldr	r0, [sp, #28]	; fField28
        2c646c:	e5900000 	ldr	r0, [r0]
        2c6470:	e1a0100a 	mov	r1, sl
        2c6474:	eb63f776 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c6478:	e3a01001 	mov	r1, #1	; 0x1
        2c647c:	e5890000 	str	r0, [r9]
        2c6480:	eb63f773 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c6484:	eb63ef30 	bl	1bc214c <$AllocateRefHandle(long)>
        2c6488:	e58d0000 	str	r0, [sp]
        2c648c:	e1a0100d 	mov	r1, sp
        2c6490:	e1a00004 	mov	r0, r4
        2c6494:	eb5e3135 	bl	1a52970 <TCompiler::$EmitPush(RefVar const &)>
        2c6498:	e59d0000 	ldr	r0, [sp]
        2c649c:	eb63f346 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c64a0:	e1a00004 	mov	r0, r4
        2c64a4:	eb5e312f 	bl	1a52968 <TCompiler::$EmitPlaceholder(void)>
        2c64a8:	e1a00100 	mov	r0, r0, lsl #2
        2c64ac:	eb63ef26 	bl	1bc214c <$AllocateRefHandle(long)>
        2c64b0:	e58d0004 	str	r0, [sp, #4]	; fField4
        2c64b4:	e5902000 	ldr	r2, [r0]
        2c64b8:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        2c64bc:	e5900000 	ldr	r0, [r0]
        2c64c0:	e1a0100a 	mov	r1, sl
        2c64c4:	eb63ffa3 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c64c8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c64cc:	eb63f33a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c64d0:	e28dd008 	add	sp, sp, #8	; 0x8
        2c64d4:	e28aa001 	add	sl, sl, #1	; 0x1
        2c64d8:	e15a0008 	cmp	sl, r8
        2c64dc:	baffffe0 	blt	2c6464 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1e00>
        2c64e0:	e1a02008 	mov	r2, r8
        2c64e4:	e1a00004 	mov	r0, r4
        2c64e8:	e3a01019 	mov	r1, #25	; 0x19
        2c64ec:	eb5e3526 	bl	1a5398c <TCompiler::$Emit(Opcode, long)>
        2c64f0:	e3360000 	teq	r6, #0	; 0x0
        2c64f4:	e28d1018 	add	r1, sp, #24	; 0x18
        2c64f8:	e1a00004 	mov	r0, r4
        2c64fc:	0a000005 	beq	2c6518 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1eb4>
        2c6500:	e3a02001 	mov	r2, #1	; 0x1
        2c6504:	eb5e49da 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c6508:	e3300000 	teq	r0, #0	; 0x0
        2c650c:	11a00004 	movne	r0, r4
        2c6510:	1b5e3115 	blne	1a5296c <TCompiler::$EmitPop(void)>
        2c6514:	ea000001 	b	2c6520 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1ebc>
        2c6518:	e3a02000 	mov	r2, #0	; 0x0
        2c651c:	eb5e49d4 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c6520:	e1a00004 	mov	r0, r4
        2c6524:	e3a02007 	mov	r2, #7	; 0x7
        2c6528:	e3a01000 	mov	r1, #0	; 0x0
        2c652c:	eb5e3516 	bl	1a5398c <TCompiler::$Emit(Opcode, long)>
        2c6530:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c6534:	e1a00004 	mov	r0, r4
        2c6538:	eb5e310a 	bl	1a52968 <TCompiler::$EmitPlaceholder(void)>
        2c653c:	e3a0a000 	mov	sl, #0	; 0x0
        2c6540:	e3580000 	cmp	r8, #0	; 0x0
        2c6544:	e58d0000 	str	r0, [sp]
        2c6548:	da00006b 	ble	2c66fc <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x2098>
        2c654c:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        2c6550:	e5900000 	ldr	r0, [r0]
        2c6554:	e1a0100a 	mov	r1, sl
        2c6558:	eb63f73d 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c655c:	e5890000 	str	r0, [r9]
        2c6560:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c6564:	e1a00004 	mov	r0, r4
        2c6568:	eb5e30ee 	bl	1a52928 <TCompiler::$CurPC(void)>
        2c656c:	e1a03100 	mov	r3, r0, lsl #2
        2c6570:	e40d3004 	str	r3, [sp], -#4	; fField4
        2c6574:	e59d3004 	ldr	r3, [sp, #4]	; fField4
        2c6578:	e1a00803 	mov	r0, r3, lsl #16
        2c657c:	e1330840 	teq	r3, r0, asr #16
        2c6580:	1a00000d 	bne	2c65bc <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1f58>
        2c6584:	e59d0010 	ldr	r0, [sp, #16]
        2c6588:	e5900000 	ldr	r0, [r0]
        2c658c:	e1a0100a 	mov	r1, sl
        2c6590:	eb63f72f 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c6594:	e3100003 	tst	r0, #3	; 0x3
        2c6598:	01a00140 	moveq	r0, r0, asr #2
        2c659c:	0a000000 	beq	2c65a4 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1f40>
        2c65a0:	eb63eedd 	bl	1bc211c <$_RINTError(long)>
        2c65a4:	e1a01000 	mov	r1, r0
        2c65a8:	e1a00004 	mov	r0, r4
        2c65ac:	e3a02004 	mov	r2, #4	; 0x4
        2c65b0:	e59d3004 	ldr	r3, [sp, #4]	; fField4
        2c65b4:	eb5e2cc4 	bl	1a518cc <TCompiler::$Backpatch(unsigned long, Opcode, long)>
        2c65b8:	ea000017 	b	2c661c <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1fb8>
        2c65bc:	e1a00004 	mov	r0, r4
        2c65c0:	eb5e30d8 	bl	1a52928 <TCompiler::$CurPC(void)>
        2c65c4:	e1a00100 	mov	r0, r0, lsl #2
        2c65c8:	eb63eedf 	bl	1bc214c <$AllocateRefHandle(long)>
        2c65cc:	e58d0000 	str	r0, [sp]
        2c65d0:	e1a0100d 	mov	r1, sp
        2c65d4:	e5940000 	ldr	r0, [r4]
        2c65d8:	eb5e3d42 	bl	1a55ae8 <TFunctionState::$LitOffset(RefVar const &)>
        2c65dc:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        2c65e0:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        2c65e4:	e5900000 	ldr	r0, [r0]
        2c65e8:	e1a0100a 	mov	r1, sl
        2c65ec:	eb63f718 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c65f0:	e3100003 	tst	r0, #3	; 0x3
        2c65f4:	01a00140 	moveq	r0, r0, asr #2
        2c65f8:	0a000000 	beq	2c6600 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1f9c>
        2c65fc:	eb63eec6 	bl	1bc211c <$_RINTError(long)>
        2c6600:	e1a01000 	mov	r1, r0
        2c6604:	e1a00004 	mov	r0, r4
        2c6608:	e3a02003 	mov	r2, #3	; 0x3
        2c660c:	e49d3004 	ldr	r3, [sp], #4	; fField4
        2c6610:	eb5e2cad 	bl	1a518cc <TCompiler::$Backpatch(unsigned long, Opcode, long)>
        2c6614:	e59d0000 	ldr	r0, [sp]
        2c6618:	eb63f2e7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c661c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c6620:	e3360000 	teq	r6, #0	; 0x0
        2c6624:	0a000015 	beq	2c6680 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x201c>
        2c6628:	e24dd008 	sub	sp, sp, #8	; 0x8
        2c662c:	e3a01002 	mov	r1, #2	; 0x2
        2c6630:	e5990000 	ldr	r0, [r9]
        2c6634:	eb63f706 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c6638:	eb63eec3 	bl	1bc214c <$AllocateRefHandle(long)>
        2c663c:	e58d0004 	str	r0, [sp, #4]	; fField4
        2c6640:	e28d1004 	add	r1, sp, #4	; 0x4
        2c6644:	e1a00004 	mov	r0, r4
        2c6648:	e3a02001 	mov	r2, #1	; 0x1
        2c664c:	eb5e4988 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c6650:	e3300000 	teq	r0, #0	; 0x0
        2c6654:	13a00001 	movne	r0, #1	; 0x1
        2c6658:	e58d0000 	str	r0, [sp]
        2c665c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c6660:	eb63f2d5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c6664:	e49d0004 	ldr	r0, [sp], #4	; fField4
        2c6668:	e3300000 	teq	r0, #0	; 0x0
        2c666c:	0a000001 	beq	2c6678 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x2014>
        2c6670:	e1a00004 	mov	r0, r4
        2c6674:	eb5e30bc 	bl	1a5296c <TCompiler::$EmitPop(void)>
        2c6678:	e28dd004 	add	sp, sp, #4	; 0x4
        2c667c:	ea00000a 	b	2c66ac <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x2048>
        2c6680:	e3a01002 	mov	r1, #2	; 0x2
        2c6684:	e5990000 	ldr	r0, [r9]
        2c6688:	eb63f6f1 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c668c:	eb63eeae 	bl	1bc214c <$AllocateRefHandle(long)>
        2c6690:	e58d0000 	str	r0, [sp]
        2c6694:	e1a0100d 	mov	r1, sp
        2c6698:	e1a00004 	mov	r0, r4
        2c669c:	e3a02000 	mov	r2, #0	; 0x0
        2c66a0:	eb5e4973 	bl	1a58c74 <TCompiler::$WalkForCode(RefVar const &, unsigned char)>
        2c66a4:	e59d0000 	ldr	r0, [sp]
        2c66a8:	eb63f2c3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c66ac:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c66b0:	e59d0034 	ldr	r0, [sp, #52]
        2c66b4:	e150000a 	cmp	r0, sl
        2c66b8:	da00000b 	ble	2c66ec <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x2088>
        2c66bc:	e1a00004 	mov	r0, r4
        2c66c0:	eb5e30a8 	bl	1a52968 <TCompiler::$EmitPlaceholder(void)>
        2c66c4:	e1a00100 	mov	r0, r0, lsl #2
        2c66c8:	eb63ee9f 	bl	1bc214c <$AllocateRefHandle(long)>
        2c66cc:	e58d0000 	str	r0, [sp]
        2c66d0:	e5902000 	ldr	r2, [r0]
        2c66d4:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        2c66d8:	e5900000 	ldr	r0, [r0]
        2c66dc:	e1a0100a 	mov	r1, sl
        2c66e0:	eb63ff1c 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c66e4:	e59d0000 	ldr	r0, [sp]
        2c66e8:	eb63f2b3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c66ec:	e28dd010 	add	sp, sp, #16	; 0x10
        2c66f0:	e28aa001 	add	sl, sl, #1	; 0x1
        2c66f4:	e15a0008 	cmp	sl, r8
        2c66f8:	baffff93 	blt	2c654c <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x1ee8>
        2c66fc:	e3a0a000 	mov	sl, #0	; 0x0
        2c6700:	e59d0024 	ldr	r0, [sp, #36]	; fField36
        2c6704:	e3500000 	cmp	r0, #0	; 0x0
        2c6708:	da000013 	ble	2c675c <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x20f8>
        2c670c:	e1a00004 	mov	r0, r4
        2c6710:	eb5e3084 	bl	1a52928 <TCompiler::$CurPC(void)>
        2c6714:	e1a08000 	mov	r8, r0
        2c6718:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c671c:	e5900000 	ldr	r0, [r0]
        2c6720:	e1a0100a 	mov	r1, sl
        2c6724:	eb63f6ca 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c6728:	e3100003 	tst	r0, #3	; 0x3
        2c672c:	01a00140 	moveq	r0, r0, asr #2
        2c6730:	0a000000 	beq	2c6738 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x20d4>
        2c6734:	eb63ee78 	bl	1bc211c <$_RINTError(long)>
        2c6738:	e1a01000 	mov	r1, r0
        2c673c:	e1a00004 	mov	r0, r4
        2c6740:	e3a0200b 	mov	r2, #11	; 0xb
        2c6744:	e1a03008 	mov	r3, r8
        2c6748:	eb5e2c5f 	bl	1a518cc <TCompiler::$Backpatch(unsigned long, Opcode, long)>
        2c674c:	e28aa001 	add	sl, sl, #1	; 0x1
        2c6750:	e59d0024 	ldr	r0, [sp, #36]	; fField36
        2c6754:	e150000a 	cmp	r0, sl
        2c6758:	caffffeb 	bgt	2c670c <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x20a8>
        2c675c:	e1a00004 	mov	r0, r4
        2c6760:	e3a02007 	mov	r2, #7	; 0x7
        2c6764:	e3a01000 	mov	r1, #0	; 0x0
        2c6768:	eb5e3487 	bl	1a5398c <TCompiler::$Emit(Opcode, long)>
        2c676c:	e1a00004 	mov	r0, r4
        2c6770:	eb5e306c 	bl	1a52928 <TCompiler::$CurPC(void)>
        2c6774:	e1a03000 	mov	r3, r0
        2c6778:	e1a00004 	mov	r0, r4
        2c677c:	e3a0200b 	mov	r2, #11	; 0xb
        2c6780:	e59d1000 	ldr	r1, [sp]
        2c6784:	eb5e2c50 	bl	1a518cc <TCompiler::$Backpatch(unsigned long, Opcode, long)>
        2c6788:	e3360000 	teq	r6, #0	; 0x0
        2c678c:	13a07000 	movne	r7, #0	; 0x0
        2c6790:	e28dd004 	add	sp, sp, #4	; 0x4
        2c6794:	e1a00009 	mov	r0, r9
        2c6798:	eb63f287 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c679c:	e59d0000 	ldr	r0, [sp]
        2c67a0:	eb63f285 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c67a4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c67a8:	eb63f283 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c67ac:	e28dd008 	add	sp, sp, #8	; 0x8
        2c67b0:	e3360000 	teq	r6, #0	; 0x0
        2c67b4:	0a00000a 	beq	2c67e4 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x2180>
        2c67b8:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        2c67bc:	e240cf4b 	sub	ip, r0, #300	; 0x12c
        2c67c0:	e33c0003 	teq	ip, #3	; 0x3
        2c67c4:	01a00004 	moveq	r0, r4
        2c67c8:	028f1f12 	addeq	r1, pc, #72	; 0x48
        2c67cc:	0a000003 	beq	2c67e0 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x217c>
        2c67d0:	e3350000 	teq	r5, #0	; 0x0
        2c67d4:	0a000002 	beq	2c67e4 <TCompiler::WalkForCode(RefVar const &, unsigned char)+0x2180>
        2c67d8:	e1a00004 	mov	r0, r4
        2c67dc:	e28f1f17 	add	r1, pc, #92	; 0x5c
        2c67e0:	eb5e4d28 	bl	1a59c88 <TCompiler::$Warning(char *)>
        2c67e4:	e20740ff 	and	r4, r7, #255	; 0xff
        2c67e8:	e59d0000 	ldr	r0, [sp]
        2c67ec:	eb63f272 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c67f0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c67f4:	eb63f270 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c67f8:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2c67fc:	eb63f26e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c6800:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        2c6804:	eb63f26c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c6808:	e59d0010 	ldr	r0, [sp, #16]
        2c680c:	eb63f26a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c6810:	e1a00004 	mov	r0, r4
        2c6814:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2c6818:	3d207769 	stccc	7, cr7, [r0, -#420]!
        2c681c:	7468206e 	strvcbt	r2, [r8], -#110
        2c6820:	6f206566 	swivs	0x00206566
        2c6824:	66656374 	undefined
        2c6828:	2e2e2e64 	cdpcs	14, 2, cr2, cr14, cr4, {3}
        2c682c:	69642079 	stmvsdb	r4!, {r0, r3, r4, r5, r6, sp}^
        2c6830:	6f75206d 	swivs	0x0075206d
        2c6834:	65616e20 	strvsb	r6, [r1, -#3616]!
        2c6838:	3a3d203f 	bcc	120e93c <ROM$$Size+0xaeecf0>
        2c683c:	00000000 	andeq	r0, r0, r0
        2c6840:	53746174 	cmnpl	r4, #29	; 0x1d
        2c6844:	656d656e 	strvsb	r6, [sp, -#1390]!
        2c6848:	74206861 	strvct	r6, [r0], -#2145
        2c684c:	73206e6f 	teqvc	r0, #1776	; 0x6f0
        2c6850:	20656666 	rsbcs	r6, r5, r6, ror #12
        2c6854:	65637400 	strvsb	r7, [r3, -#1024]!
    */
}

/**
 * Symbol: TCompiler::DeclarationWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)
 * Address: 002c7210
 */
TCompiler::DeclarationWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &) {
    /*
        2c7210:	e1a0c00d 	mov	ip, sp
        2c7214:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2c7218:	e24cb004 	sub	fp, ip, #4	; 0x4
        2c721c:	e1a04000 	mov	r4, r0
        2c7220:	e1a07001 	mov	r7, r1
        2c7224:	e1a05003 	mov	r5, r3
        2c7228:	e59b600c 	ldr	r6, [fp, #12]	; fField12
        2c722c:	e59b8004 	ldr	r8, [fp, #4]	; fField4
        2c7230:	e59fa054 	ldr	sl, [pc, #54]	; 2c728c <TCompiler::DeclarationWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x7c>
        2c7234:	e3a09001 	mov	r9, #1	; 0x1
        2c7238:	e252cf45 	subs	ip, r2, #276	; 0x114
        2c723c:	a35c0001 	cmpge	ip, #1	; 0x1
        2c7240:	0a000034 	beq	2c7318 <TCompiler::DeclarationWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x108>
        2c7244:	ca000012 	bgt	2c7294 <TCompiler::DeclarationWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x84>
        2c7248:	e242cf42 	sub	ip, r2, #264	; 0x108
        2c724c:	e33c0001 	teq	ip, #1	; 0x1
        2c7250:	0a00014b 	beq	2c7784 <TCompiler::DeclarationWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x574>
        2c7254:	e242cf43 	sub	ip, r2, #268	; 0x10c
        2c7258:	e33c0001 	teq	ip, #1	; 0x1
        2c725c:	1a00015d 	bne	2c77d8 <TCompiler::DeclarationWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x5c8>
        2c7260:	e5950000 	ldr	r0, [r5]
        2c7264:	e5900000 	ldr	r0, [r0]
        2c7268:	eb63f80f 	bl	1bc52ac <$Length(long)>
        2c726c:	e1a08000 	mov	r8, r0
        2c7270:	e3a07000 	mov	r7, #0	; 0x0
        2c7274:	e3500000 	cmp	r0, #0	; 0x0
        2c7278:	da000156 	ble	2c77d8 <TCompiler::DeclarationWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x5c8>
        2c727c:	e3a06021 	mov	r6, #33	; 0x21
        2c7280:	e2466cbe 	sub	r6, r6, #48640	; 0xbe00
        2c7284:	e59fa004 	ldr	sl, [pc, #4]	; 2c7290 <TCompiler::DeclarationWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x80>	; fField4
        2c7288:	ea0000f5 	b	2c7664 <TCompiler::DeclarationWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x454>
        2c728c:	00681f10 	rsbeq	r1, r8, r0, lsl pc
        2c7290:	0c10180c 	ldceq	8, cr1, [r0], -#48	; fField48
        2c7294:	e242cf45 	sub	ip, r2, #276	; 0x114
        2c7298:	e33c0003 	teq	ip, #3	; 0x3
        2c729c:	0a00003f 	beq	2c73a0 <TCompiler::DeclarationWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x190>
        2c72a0:	e242ce12 	sub	ip, r2, #288	; 0x120
        2c72a4:	e33c0001 	teq	ip, #1	; 0x1
        2c72a8:	1a00014a 	bne	2c77d8 <TCompiler::DeclarationWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x5c8>
        2c72ac:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c72b0:	e1a00006 	mov	r0, r6
        2c72b4:	eb63ebac 	bl	1bc216c <$Clone(RefVar const &)>
        2c72b8:	eb63eba3 	bl	1bc214c <$AllocateRefHandle(long)>
        2c72bc:	e58d0000 	str	r0, [sp]
        2c72c0:	e1a0100d 	mov	r1, sp
        2c72c4:	e1a00004 	mov	r0, r4
        2c72c8:	eb5e2975 	bl	1a518a4 <TCompiler::$AddLocals(RefVar const &)>
        2c72cc:	e59d0000 	ldr	r0, [sp]
        2c72d0:	eb63efb9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c72d4:	e3a01000 	mov	r1, #0	; 0x0
        2c72d8:	e5960000 	ldr	r0, [r6]
        2c72dc:	e5900000 	ldr	r0, [r0]
        2c72e0:	eb63f3db 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c72e4:	eb64045b 	bl	1bc8458 <$SymbolName(long)>
        2c72e8:	e1a08000 	mov	r8, r0
        2c72ec:	e5960000 	ldr	r0, [r6]
        2c72f0:	e5900000 	ldr	r0, [r0]
        2c72f4:	eb63f7ec 	bl	1bc52ac <$Length(long)>
        2c72f8:	e3500001 	cmp	r0, #1	; 0x1
        2c72fc:	da00006b 	ble	2c74b0 <TCompiler::DeclarationWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x2a0>
        2c7300:	e5960000 	ldr	r0, [r6]
        2c7304:	e5900000 	ldr	r0, [r0]
        2c7308:	e1a01009 	mov	r1, r9
        2c730c:	eb63f3d0 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c7310:	eb640450 	bl	1bc8458 <$SymbolName(long)>
        2c7314:	ea000066 	b	2c74b4 <TCompiler::DeclarationWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x2a4>
        2c7318:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c731c:	e5950000 	ldr	r0, [r5]
        2c7320:	e5900000 	ldr	r0, [r0]
        2c7324:	eb63f7e0 	bl	1bc52ac <$Length(long)>
        2c7328:	e1a06000 	mov	r6, r0
        2c732c:	e0801fa0 	add	r1, r0, r0, lsr #31
        2c7330:	e1a010c1 	mov	r1, r1, asr #1
        2c7334:	e1a0000a 	mov	r0, sl
        2c7338:	eb63eb7e 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        2c733c:	eb63eb82 	bl	1bc214c <$AllocateRefHandle(long)>
        2c7340:	e3a07000 	mov	r7, #0	; 0x0
        2c7344:	e3560000 	cmp	r6, #0	; 0x0
        2c7348:	e58d0000 	str	r0, [sp]
        2c734c:	da00000e 	ble	2c738c <TCompiler::DeclarationWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x17c>
        2c7350:	e59d0000 	ldr	r0, [sp]
        2c7354:	e087afa7 	add	sl, r7, r7, lsr #31
        2c7358:	e1a0a0ca 	mov	sl, sl, asr #1
        2c735c:	e5908000 	ldr	r8, [r0]
        2c7360:	e5950000 	ldr	r0, [r5]
        2c7364:	e5900000 	ldr	r0, [r0]
        2c7368:	e1a01007 	mov	r1, r7
        2c736c:	eb63f3b8 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c7370:	e1a02000 	mov	r2, r0
        2c7374:	e1a0100a 	mov	r1, sl
        2c7378:	e1a00008 	mov	r0, r8
        2c737c:	eb63fbf5 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c7380:	e2877002 	add	r7, r7, #2	; 0x2
        2c7384:	e1570006 	cmp	r7, r6
        2c7388:	bafffff0 	blt	2c7350 <TCompiler::DeclarationWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x140>
        2c738c:	e1a0100d 	mov	r1, sp
        2c7390:	e1a00004 	mov	r0, r4
        2c7394:	eb5e2942 	bl	1a518a4 <TCompiler::$AddLocals(RefVar const &)>
        2c7398:	e59d0000 	ldr	r0, [sp]
        2c739c:	ea00003c 	b	2c7494 <TCompiler::DeclarationWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x284>
        2c73a0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c73a4:	e1a0000a 	mov	r0, sl
        2c73a8:	e3a01003 	mov	r1, #3	; 0x3
        2c73ac:	eb63eb61 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        2c73b0:	eb63eb65 	bl	1bc214c <$AllocateRefHandle(long)>
        2c73b4:	e58d0000 	str	r0, [sp]
        2c73b8:	e5900000 	ldr	r0, [r0]
        2c73bc:	e5951000 	ldr	r1, [r5]
        2c73c0:	e5912000 	ldr	r2, [r1]
        2c73c4:	e3a01000 	mov	r1, #0	; 0x0
        2c73c8:	eb63fbe2 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c73cc:	e5950000 	ldr	r0, [r5]
        2c73d0:	e5900000 	ldr	r0, [r0]
        2c73d4:	eb64041f 	bl	1bc8458 <$SymbolName(long)>
        2c73d8:	e1a06000 	mov	r6, r0
        2c73dc:	eb63b9b3 	bl	1bb5ab0 <$strlen>
        2c73e0:	e2800007 	add	r0, r0, #7	; 0x7
        2c73e4:	eb643ddf 	bl	1bd6b68 <$malloc>
        2c73e8:	e1a05000 	mov	r5, r0
        2c73ec:	e1a01006 	mov	r1, r6
        2c73f0:	eb63b9ad 	bl	1bb5aac <$strcpy>
        2c73f4:	e1a00006 	mov	r0, r6
        2c73f8:	eb63b9ac 	bl	1bb5ab0 <$strlen>
        2c73fc:	e0800005 	add	r0, r0, r5
        2c7400:	e28f1f26 	add	r1, pc, #152	; 0x98
        2c7404:	e3a02007 	mov	r2, #7	; 0x7
        2c7408:	eb63b590 	bl	1bb4a50 <$memcpy>
        2c740c:	e1a00005 	mov	r0, r5
        2c7410:	eb63f79a 	bl	1bc5280 <$Intern(char *)>
        2c7414:	eb63eb4c 	bl	1bc214c <$AllocateRefHandle(long)>
        2c7418:	e1a07000 	mov	r7, r0
        2c741c:	e5902000 	ldr	r2, [r0]
        2c7420:	e59d0000 	ldr	r0, [sp]
        2c7424:	e5900000 	ldr	r0, [r0]
        2c7428:	e1a01009 	mov	r1, r9
        2c742c:	eb63fbc9 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c7430:	e1a00007 	mov	r0, r7
        2c7434:	eb63ef60 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c7438:	e1a00006 	mov	r0, r6
        2c743c:	eb63b99b 	bl	1bb5ab0 <$strlen>
        2c7440:	e0800005 	add	r0, r0, r5
        2c7444:	e28f1f17 	add	r1, pc, #92	; 0x5c
        2c7448:	e3a02006 	mov	r2, #6	; 0x6
        2c744c:	eb63b57f 	bl	1bb4a50 <$memcpy>
        2c7450:	e1a00005 	mov	r0, r5
        2c7454:	eb63f789 	bl	1bc5280 <$Intern(char *)>
        2c7458:	eb63eb3b 	bl	1bc214c <$AllocateRefHandle(long)>
        2c745c:	e1a06000 	mov	r6, r0
        2c7460:	e5902000 	ldr	r2, [r0]
        2c7464:	e59d0000 	ldr	r0, [sp]
        2c7468:	e5900000 	ldr	r0, [r0]
        2c746c:	e3a01002 	mov	r1, #2	; 0x2
        2c7470:	eb63fbb8 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c7474:	e1a00006 	mov	r0, r6
        2c7478:	eb63ef4f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c747c:	e1a00005 	mov	r0, r5
        2c7480:	eb642d34 	bl	1bd2958 <$free>
        2c7484:	e1a0100d 	mov	r1, sp
        2c7488:	e1a00004 	mov	r0, r4
        2c748c:	eb5e2904 	bl	1a518a4 <TCompiler::$AddLocals(RefVar const &)>
        2c7490:	e59d0000 	ldr	r0, [sp]
        2c7494:	eb63ef48 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c7498:	e28dd004 	add	sp, sp, #4	; 0x4
        2c749c:	ea0000cd 	b	2c77d8 <TCompiler::DeclarationWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x5c8>
        2c74a0:	7c6c696d 	stcvcl	9, cr6, [ip], -#436
        2c74a4:	69740000 	ldmvsdb	r4!, {}^
        2c74a8:	7c696e63 	stcvcl	14, cr6, [r9], -#396
        2c74ac:	72000000 	andvc	r0, r0, #0	; 0x0
        2c74b0:	e28f0f63 	add	r0, pc, #396	; 0x18c
        2c74b4:	e1a07000 	mov	r7, r0
        2c74b8:	e1a00008 	mov	r0, r8
        2c74bc:	eb63b97b 	bl	1bb5ab0 <$strlen>
        2c74c0:	e1a06000 	mov	r6, r0
        2c74c4:	e1a00007 	mov	r0, r7
        2c74c8:	eb63b978 	bl	1bb5ab0 <$strlen>
        2c74cc:	e0860000 	add	r0, r6, r0
        2c74d0:	e2800008 	add	r0, r0, #8	; 0x8
        2c74d4:	eb643da3 	bl	1bd6b68 <$malloc>
        2c74d8:	e1a06000 	mov	r6, r0
        2c74dc:	e1a01008 	mov	r1, r8
        2c74e0:	eb63b971 	bl	1bb5aac <$strcpy>
        2c74e4:	e1a01007 	mov	r1, r7
        2c74e8:	e1a00006 	mov	r0, r6
        2c74ec:	eb63b96c 	bl	1bb5aa4 <$strcat>
        2c74f0:	e1a00006 	mov	r0, r6
        2c74f4:	e28f1f53 	add	r1, pc, #332	; 0x14c
        2c74f8:	eb63b969 	bl	1bb5aa4 <$strcat>
        2c74fc:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c7500:	e5950000 	ldr	r0, [r5]
        2c7504:	e5900000 	ldr	r0, [r0]
        2c7508:	e59f1140 	ldr	r1, [pc, #140]	; 2c7650 <TCompiler::DeclarationWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x440>
        2c750c:	e5911000 	ldr	r1, [r1]
        2c7510:	e5911000 	ldr	r1, [r1]
        2c7514:	eb63f345 	bl	1bc4230 <$EQRef__FlT1>
        2c7518:	e3300000 	teq	r0, #0	; 0x0
        2c751c:	03a01001 	moveq	r1, #1	; 0x1
        2c7520:	13a01003 	movne	r1, #3	; 0x3
        2c7524:	e1a0000a 	mov	r0, sl
        2c7528:	eb63eb02 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        2c752c:	eb63eb06 	bl	1bc214c <$AllocateRefHandle(long)>
        2c7530:	e58d0000 	str	r0, [sp]
        2c7534:	e1a00006 	mov	r0, r6
        2c7538:	eb63f750 	bl	1bc5280 <$Intern(char *)>
        2c753c:	eb63eb02 	bl	1bc214c <$AllocateRefHandle(long)>
        2c7540:	e1a0a000 	mov	sl, r0
        2c7544:	e5902000 	ldr	r2, [r0]
        2c7548:	e59d0000 	ldr	r0, [sp]
        2c754c:	e5900000 	ldr	r0, [r0]
        2c7550:	e3a01000 	mov	r1, #0	; 0x0
        2c7554:	eb63fb7f 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c7558:	e1a0000a 	mov	r0, sl
        2c755c:	eb63ef16 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c7560:	e5950000 	ldr	r0, [r5]
        2c7564:	e5900000 	ldr	r0, [r0]
        2c7568:	e59f10e0 	ldr	r1, [pc, #e0]	; 2c7650 <TCompiler::DeclarationWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x440>
        2c756c:	e5911000 	ldr	r1, [r1]
        2c7570:	e5911000 	ldr	r1, [r1]
        2c7574:	eb63f32d 	bl	1bc4230 <$EQRef__FlT1>
        2c7578:	e3300000 	teq	r0, #0	; 0x0
        2c757c:	0a000027 	beq	2c7620 <TCompiler::DeclarationWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x410>
        2c7580:	e1a00008 	mov	r0, r8
        2c7584:	eb63b949 	bl	1bb5ab0 <$strlen>
        2c7588:	e0805006 	add	r5, r0, r6
        2c758c:	e1a00007 	mov	r0, r7
        2c7590:	eb63b946 	bl	1bb5ab0 <$strlen>
        2c7594:	e0850000 	add	r0, r5, r0
        2c7598:	e28f1f2d 	add	r1, pc, #180	; 0xb4
        2c759c:	e3a02007 	mov	r2, #7	; 0x7
        2c75a0:	eb63b52a 	bl	1bb4a50 <$memcpy>
        2c75a4:	e1a00006 	mov	r0, r6
        2c75a8:	eb63f734 	bl	1bc5280 <$Intern(char *)>
        2c75ac:	eb63eae6 	bl	1bc214c <$AllocateRefHandle(long)>
        2c75b0:	e1a05000 	mov	r5, r0
        2c75b4:	e5902000 	ldr	r2, [r0]
        2c75b8:	e59d0000 	ldr	r0, [sp]
        2c75bc:	e5900000 	ldr	r0, [r0]
        2c75c0:	e1a01009 	mov	r1, r9
        2c75c4:	eb63fb63 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c75c8:	e1a00005 	mov	r0, r5
        2c75cc:	eb63eefa 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c75d0:	e1a00008 	mov	r0, r8
        2c75d4:	eb63b935 	bl	1bb5ab0 <$strlen>
        2c75d8:	e0805006 	add	r5, r0, r6
        2c75dc:	e1a00007 	mov	r0, r7
        2c75e0:	eb63b932 	bl	1bb5ab0 <$strlen>
        2c75e4:	e0850000 	add	r0, r5, r0
        2c75e8:	e28f1f1b 	add	r1, pc, #108	; 0x6c
        2c75ec:	e3a02008 	mov	r2, #8	; 0x8
        2c75f0:	eb63b516 	bl	1bb4a50 <$memcpy>
        2c75f4:	e1a00006 	mov	r0, r6
        2c75f8:	eb63f720 	bl	1bc5280 <$Intern(char *)>
        2c75fc:	eb63ead2 	bl	1bc214c <$AllocateRefHandle(long)>
        2c7600:	e1a05000 	mov	r5, r0
        2c7604:	e5902000 	ldr	r2, [r0]
        2c7608:	e59d0000 	ldr	r0, [sp]
        2c760c:	e5900000 	ldr	r0, [r0]
        2c7610:	e3a01002 	mov	r1, #2	; 0x2
        2c7614:	eb63fb4f 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c7618:	e1a00005 	mov	r0, r5
        2c761c:	eb63eee6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c7620:	e1a0100d 	mov	r1, sp
        2c7624:	e1a00004 	mov	r0, r4
        2c7628:	eb5e289d 	bl	1a518a4 <TCompiler::$AddLocals(RefVar const &)>
        2c762c:	e1a00006 	mov	r0, r6
        2c7630:	eb642cc8 	bl	1bd2958 <$free>
        2c7634:	e59d0000 	ldr	r0, [sp]
        2c7638:	eb63eedf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c763c:	e28dd004 	add	sp, sp, #4	; 0x4
        2c7640:	eaffff94 	b	2c7498 <TCompiler::DeclarationWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x288>
        2c7644:	00000000 	andeq	r0, r0, r0
        2c7648:	7c697465 	stcvcl	4, cr7, [r9], -#404
        2c764c:	72000000 	andvc	r0, r0, #0	; 0x0
        2c7650:	006824f0 	streqd	r2, [r8], -#64
        2c7654:	7c696e64 	stcvcl	14, cr6, [r9], -#400
        2c7658:	65780000 	ldrvsb	r0, [r8]!
        2c765c:	7c726573 	ldcvcl	5, cr6, [r2], -#460
        2c7660:	756c7400 	strvcb	r7, [ip, -#1024]!
        2c7664:	e24dd008 	sub	sp, sp, #8	; 0x8
        2c7668:	e5950000 	ldr	r0, [r5]
        2c766c:	e5900000 	ldr	r0, [r0]
        2c7670:	e1a01007 	mov	r1, r7
        2c7674:	eb63f2f6 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c7678:	eb63eab3 	bl	1bc214c <$AllocateRefHandle(long)>
        2c767c:	e58d0004 	str	r0, [sp, #4]	; fField4
        2c7680:	e5950000 	ldr	r0, [r5]
        2c7684:	e5900000 	ldr	r0, [r0]
        2c7688:	e2871001 	add	r1, r7, #1	; 0x1
        2c768c:	eb63f2f0 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c7690:	eb63eaad 	bl	1bc214c <$AllocateRefHandle(long)>
        2c7694:	e58d0000 	str	r0, [sp]
        2c7698:	e28d1004 	add	r1, sp, #4	; 0x4
        2c769c:	e5940000 	ldr	r0, [r4]
        2c76a0:	eb5e3909 	bl	1a55acc <TFunctionState::$IsLocalConstant(RefVar const &)>
        2c76a4:	e3300000 	teq	r0, #0	; 0x0
        2c76a8:	0a000003 	beq	2c76bc <TCompiler::DeclarationWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x4ac>
        2c76ac:	e28d2004 	add	r2, sp, #4	; 0x4
        2c76b0:	e1a00004 	mov	r0, r4
        2c76b4:	e1a01006 	mov	r1, r6
        2c76b8:	eb5e30b8 	bl	1a539a0 <TCompiler::$Error(long, RefVar const &)>
        2c76bc:	e5940000 	ldr	r0, [r4]
        2c76c0:	eb5e287f 	bl	1a518c4 <TFunctionState::$AtTopLevel(void)>
        2c76c4:	e3300000 	teq	r0, #0	; 0x0
        2c76c8:	0a00000a 	beq	2c76f8 <TCompiler::DeclarationWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x4e8>
        2c76cc:	e59a0000 	ldr	r0, [sl]
        2c76d0:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        2c76d4:	e5911000 	ldr	r1, [r1]
        2c76d8:	eb63f2da 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        2c76dc:	e3300000 	teq	r0, #0	; 0x0
        2c76e0:	0a000004 	beq	2c76f8 <TCompiler::DeclarationWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x4e8>
        2c76e4:	e28d2004 	add	r2, sp, #4	; 0x4
        2c76e8:	e1a00004 	mov	r0, r4
        2c76ec:	e3a01022 	mov	r1, #34	; 0x22
        2c76f0:	e2411cbe 	sub	r1, r1, #48640	; 0xbe00
        2c76f4:	eb5e30a9 	bl	1a539a0 <TCompiler::$Error(long, RefVar const &)>
        2c76f8:	e1a0100d 	mov	r1, sp
        2c76fc:	e1a00004 	mov	r0, r4
        2c7700:	eb650fb0 	bl	1c0b5c8 <TCompiler::$Simplify(RefVar const &)>
        2c7704:	e1a0100d 	mov	r1, sp
        2c7708:	e1a00004 	mov	r0, r4
        2c770c:	eb5e38eb 	bl	1a55ac0 <TCompiler::$IsConstantExpr(RefVar const &)>
        2c7710:	e3300000 	teq	r0, #0	; 0x0
        2c7714:	0a00000d 	beq	2c7750 <TCompiler::DeclarationWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x540>
        2c7718:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c771c:	e28d1004 	add	r1, sp, #4	; 0x4
        2c7720:	e1a00004 	mov	r0, r4
        2c7724:	eb5e309e 	bl	1a539a4 <TCompiler::$EvaluateConstantExpr(RefVar const &)>
        2c7728:	eb63ea87 	bl	1bc214c <$AllocateRefHandle(long)>
        2c772c:	e58d0000 	str	r0, [sp]
        2c7730:	e1a0200d 	mov	r2, sp
        2c7734:	e28d1008 	add	r1, sp, #8	; 0x8
        2c7738:	e5940000 	ldr	r0, [r4]
        2c773c:	eb5e2855 	bl	1a51898 <TFunctionState::$AddConstant(RefVar const &, RefVar const &)>
        2c7740:	e59d0000 	ldr	r0, [sp]
        2c7744:	eb63ee9c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c7748:	e28dd004 	add	sp, sp, #4	; 0x4
        2c774c:	ea000002 	b	2c775c <TCompiler::DeclarationWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x54c>
        2c7750:	e1a00004 	mov	r0, r4
        2c7754:	e59f1024 	ldr	r1, [pc, #24]	; 2c7780 <TCompiler::DeclarationWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x570>	; fField24
        2c7758:	eb5e308f 	bl	1a5399c <TCompiler::$Error(long)>
        2c775c:	e59d0000 	ldr	r0, [sp]
        2c7760:	eb63ee95 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c7764:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c7768:	eb63ee93 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c776c:	e28dd008 	add	sp, sp, #8	; 0x8
        2c7770:	e2877002 	add	r7, r7, #2	; 0x2
        2c7774:	e1570008 	cmp	r7, r8
        2c7778:	baffffb9 	blt	2c7664 <TCompiler::DeclarationWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x454>
        2c777c:	ea000015 	b	2c77d8 <TCompiler::DeclarationWalker(RefVar const &, long, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x5c8>
        2c7780:	ffff421f 	swinv	0x00ff421f
        2c7784:	e1a01005 	mov	r1, r5
        2c7788:	e5942000 	ldr	r2, [r4]
        2c778c:	e5943024 	ldr	r3, [r4, #36]	; fField36
        2c7790:	e1a00004 	mov	r0, r4
        2c7794:	eb5e3cde 	bl	1a56b14 <TCompiler::$NewFunctionState(RefVar const &, TFunctionState *, int *)>
        2c7798:	e1a01008 	mov	r1, r8
        2c779c:	e1a00004 	mov	r0, r4
        2c77a0:	eb5e4534 	bl	1a58c78 <TCompiler::$WalkForDeclarations(RefVar const &)>
        2c77a4:	e5940000 	ldr	r0, [r4]
        2c77a8:	eb63ea67 	bl	1bc214c <$AllocateRefHandle(long)>
        2c77ac:	e1a05000 	mov	r5, r0
        2c77b0:	e5902000 	ldr	r2, [r0]
        2c77b4:	e5970000 	ldr	r0, [r7]
        2c77b8:	e5900000 	ldr	r0, [r0]
        2c77bc:	e3a01005 	mov	r1, #5	; 0x5
        2c77c0:	eb63fae4 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c77c4:	e1a00005 	mov	r0, r5
        2c77c8:	eb63ee7b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c77cc:	e5940000 	ldr	r0, [r4]
        2c77d0:	e5900054 	ldr	r0, [r0, #84]
        2c77d4:	e5840000 	str	r0, [r4]
        2c77d8:	e1a00009 	mov	r0, r9
        2c77dc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TCompiler::WalkForDeclarations(RefVar const &)
 * Address: 002c781c
 */
TCompiler::WalkForDeclarations(RefVar const &) {
    /*
        2c781c:	e1a0c00d 	mov	ip, sp
        2c7820:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2c7824:	e24cb004 	sub	fp, ip, #4	; 0x4
        2c7828:	e1a04000 	mov	r4, r0
        2c782c:	e1a00001 	mov	r0, r1
        2c7830:	e59f2014 	ldr	r2, [pc, #14]	; 2c784c <TCompiler::WalkForDeclarations(RefVar const &)+0x30>
        2c7834:	e1a01004 	mov	r1, r4
        2c7838:	e3a03000 	mov	r3, #0	; 0x0
        2c783c:	eb5e4910 	bl	1a59c84 <$WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii>
        2c7840:	e5940000 	ldr	r0, [r4]
        2c7844:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        2c7848:	ea5e2c3b 	b	1a5293c <TFunctionState::$DeclarationsFinished(void)>
        2c784c:	01a52934 	moveq	r2, r4, lsr r9
    */
}

/**
 * Symbol: TCompiler::Parser(void)
 * Address: 00322cac
 */
TCompiler::Parser(void) {
    /*
        322cac:	e1a0c00d 	mov	ip, sp
        322cb0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        322cb4:	e24cb004 	sub	fp, ip, #4	; 0x4
        322cb8:	e1a04000 	mov	r4, r0
        322cbc:	e24dd034 	sub	sp, sp, #52	; 0x34
        322cc0:	e3a00000 	mov	r0, #0	; 0x0
        322cc4:	e59f5218 	ldr	r5, [pc, #218]	; 322ee4 <TCompiler::Parser(void)+0x238>
        322cc8:	e5850004 	str	r0, [r5, #4]	; fField4
        322ccc:	e3e01000 	mvn	r1, #0	; 0x0
        322cd0:	e2855008 	add	r5, r5, #8	; 0x8
        322cd4:	e8850003 	stmia	r5, {r0, r1}
        322cd8:	e2455008 	sub	r5, r5, #8	; 0x8
        322cdc:	e5941018 	ldr	r1, [r4, #24]	; fField24
        322ce0:	e5851024 	str	r1, [r5, #36]	; fField36
        322ce4:	e5851014 	str	r1, [r5, #20]	; fField20
        322ce8:	e5942014 	ldr	r2, [r4, #20]	; fField20
        322cec:	e5850010 	str	r0, [r5, #16]
        322cf0:	e5852018 	str	r2, [r5, #24]	; fField24
        322cf4:	e5c10001 	strb	r0, [r1, #1]
        322cf8:	e5c10000 	strb	r0, [r1]
        322cfc:	e59f11e4 	ldr	r1, [pc, #1e4]	; 322ee8 <TCompiler::Parser(void)+0x23c>
        322d00:	e58d1030 	str	r1, [sp, #48]	; fField48
        322d04:	e59f11e0 	ldr	r1, [pc, #1e0]	; 322eec <TCompiler::Parser(void)+0x240>
        322d08:	e58d102c 	str	r1, [sp, #44]	; fField44
        322d0c:	e59f11dc 	ldr	r1, [pc, #1dc]	; 322ef0 <TCompiler::Parser(void)+0x244>
        322d10:	e58d1028 	str	r1, [sp, #40]	; fField40
        322d14:	e59f11d8 	ldr	r1, [pc, #1d8]	; 322ef4 <TCompiler::Parser(void)+0x248>
        322d18:	e58d1024 	str	r1, [sp, #36]	; fField36
        322d1c:	e59f11d4 	ldr	r1, [pc, #1d4]	; 322ef8 <TCompiler::Parser(void)+0x24c>
        322d20:	e58d1020 	str	r1, [sp, #32]
        322d24:	e59f11d0 	ldr	r1, [pc, #1d0]	; 322efc <TCompiler::Parser(void)+0x250>
        322d28:	e58d101c 	str	r1, [sp, #28]	; fField28
        322d2c:	e59f11cc 	ldr	r1, [pc, #1cc]	; 322f00 <TCompiler::Parser(void)+0x254>
        322d30:	e58d1018 	str	r1, [sp, #24]	; fField24
        322d34:	e59f31c8 	ldr	r3, [pc, #1c8]	; 322f04 <TCompiler::Parser(void)+0x258>
        322d38:	e58d3014 	str	r3, [sp, #20]	; fField20
        322d3c:	e59f11c4 	ldr	r1, [pc, #1c4]	; 322f08 <TCompiler::Parser(void)+0x25c>
        322d40:	e58d1010 	str	r1, [sp, #16]
        322d44:	e59f21c0 	ldr	r2, [pc, #1c0]	; 322f0c <TCompiler::Parser(void)+0x260>
        322d48:	e58d200c 	str	r2, [sp, #12]	; fField12
        322d4c:	e59fc1bc 	ldr	ip, [pc, #1bc]	; 322f10 <TCompiler::Parser(void)+0x264>
        322d50:	e58dc008 	str	ip, [sp, #8]	; fField8
        322d54:	e59f01b8 	ldr	r0, [pc, #1b8]	; 322f14 <TCompiler::Parser(void)+0x268>
        322d58:	e58d0004 	str	r0, [sp, #4]	; fField4
        322d5c:	e59f01b4 	ldr	r0, [pc, #1b4]	; 322f18 <TCompiler::Parser(void)+0x26c>
        322d60:	e58d0000 	str	r0, [sp]
        322d64:	e59f71b0 	ldr	r7, [pc, #1b0]	; 322f1c <TCompiler::Parser(void)+0x270>
        322d68:	e59f61b0 	ldr	r6, [pc, #1b0]	; 322f20 <TCompiler::Parser(void)+0x274>
        322d6c:	e59d1030 	ldr	r1, [sp, #48]	; fField48
        322d70:	e5950010 	ldr	r0, [r5, #16]
        322d74:	e7918080 	ldr	r8, [r1, r0, lsl #1]
        322d78:	e1a08848 	mov	r8, r8, asr #16
        322d7c:	e3380000 	teq	r8, #0	; 0x0
        322d80:	1a000092 	bne	322fd0 <TCompiler::Parser(void)+0x324>
        322d84:	e595000c 	ldr	r0, [r5, #12]	; fField12
        322d88:	e3500000 	cmp	r0, #0	; 0x0
        322d8c:	aa000017 	bge	322df0 <TCompiler::Parser(void)+0x144>
        322d90:	e1a00004 	mov	r0, r4
        322d94:	eb5ccb39 	bl	1a55a80 <TCompiler::$GetToken(void)>
        322d98:	e585000c 	str	r0, [r5, #12]	; fField12
        322d9c:	e3500000 	cmp	r0, #0	; 0x0
        322da0:	b3a00000 	movlt	r0, #0	; 0x0
        322da4:	b585000c 	strlt	r0, [r5, #12]	; fField12
        322da8:	e5950000 	ldr	r0, [r5]
        322dac:	e3300000 	teq	r0, #0	; 0x0
        322db0:	0a00000e 	beq	322df0 <TCompiler::Parser(void)+0x144>
        322db4:	e595000c 	ldr	r0, [r5, #12]	; fField12
        322db8:	e3500f4e 	cmp	r0, #312	; 0x138
        322dbc:	ca000003 	bgt	322dd0 <TCompiler::Parser(void)+0x124>
        322dc0:	e59d1010 	ldr	r1, [sp, #16]
        322dc4:	e7913100 	ldr	r3, [r1, r0, lsl #2]
        322dc8:	e3330000 	teq	r3, #0	; 0x0
        322dcc:	1a000000 	bne	322dd4 <TCompiler::Parser(void)+0x128>
        322dd0:	e28f3f53 	add	r3, pc, #332	; 0x14c
        322dd4:	e92d0008 	stmdb	sp!, {r3}
        322dd8:	e1a03000 	mov	r3, r0
        322ddc:	e5952010 	ldr	r2, [r5, #16]
        322de0:	e5970000 	ldr	r0, [r7]
        322de4:	e28f1f52 	add	r1, pc, #328	; 0x148
        322de8:	eb019c32 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        322dec:	e28dd004 	add	sp, sp, #4	; 0x4
        322df0:	e59d0028 	ldr	r0, [sp, #40]	; fField40
        322df4:	e5951010 	ldr	r1, [r5, #16]
        322df8:	e7902081 	ldr	r2, [r0, r1, lsl #1]
        322dfc:	e1a02842 	mov	r2, r2, asr #16
        322e00:	e3320000 	teq	r2, #0	; 0x0
        322e04:	0a00005e 	beq	322f84 <TCompiler::Parser(void)+0x2d8>
        322e08:	e595000c 	ldr	r0, [r5, #12]	; fField12
        322e0c:	e0928000 	adds	r8, r2, r0
        322e10:	4a00005b 	bmi	322f84 <TCompiler::Parser(void)+0x2d8>
        322e14:	e258cc11 	subs	ip, r8, #4352	; 0x1100
        322e18:	a35c0031 	cmpge	ip, #49	; 0x31
        322e1c:	ca000058 	bgt	322f84 <TCompiler::Parser(void)+0x2d8>
        322e20:	e59dc008 	ldr	ip, [sp, #8]	; fField8
        322e24:	e79c2088 	ldr	r2, [ip, r8, lsl #1]
        322e28:	e1a02842 	mov	r2, r2, asr #16
        322e2c:	e1320000 	teq	r2, r0
        322e30:	1a000053 	bne	322f84 <TCompiler::Parser(void)+0x2d8>
        322e34:	e5950000 	ldr	r0, [r5]
        322e38:	e3300000 	teq	r0, #0	; 0x0
        322e3c:	0a000006 	beq	322e5c <TCompiler::Parser(void)+0x1b0>
        322e40:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        322e44:	e7903088 	ldr	r3, [r0, r8, lsl #1]
        322e48:	e1a03843 	mov	r3, r3, asr #16
        322e4c:	e5952010 	ldr	r2, [r5, #16]
        322e50:	e5970000 	ldr	r0, [r7]
        322e54:	e28f1f3f 	add	r1, pc, #252	; 0xfc
        322e58:	eb019c16 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        322e5c:	e594000c 	ldr	r0, [r4, #12]	; fField12
        322e60:	e5951024 	ldr	r1, [r5, #36]	; fField36
        322e64:	e0810080 	add	r0, r1, r0, lsl #1
        322e68:	e2401002 	sub	r1, r0, #2	; 0x2
        322e6c:	e5950014 	ldr	r0, [r5, #20]	; fField20
        322e70:	e1510000 	cmp	r1, r0
        322e74:	8a000003 	bhi	322e88 <TCompiler::Parser(void)+0x1dc>
        322e78:	e1a00004 	mov	r0, r4
        322e7c:	eb5ccf2b 	bl	1a56b30 <TCompiler::$ParserStackOverflow(void)>
        322e80:	e3300000 	teq	r0, #0	; 0x0
        322e84:	1a000c26 	bne	325f24 <TCompiler::Parser(void)+0x3278>
        322e88:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        322e8c:	e7900088 	ldr	r0, [r0, r8, lsl #1]
        322e90:	e1a00840 	mov	r0, r0, asr #16
        322e94:	e5850010 	str	r0, [r5, #16]
        322e98:	e5951014 	ldr	r1, [r5, #20]	; fField20
        322e9c:	e2811002 	add	r1, r1, #2	; 0x2
        322ea0:	e5851014 	str	r1, [r5, #20]	; fField20
        322ea4:	e5c10001 	strb	r0, [r1, #1]
        322ea8:	e1a00440 	mov	r0, r0, asr #8
        322eac:	e5c10000 	strb	r0, [r1]
        322eb0:	e5950018 	ldr	r0, [r5, #24]	; fField24
        322eb4:	e2800004 	add	r0, r0, #4	; 0x4
        322eb8:	e5951020 	ldr	r1, [r5, #32]
        322ebc:	e5850018 	str	r0, [r5, #24]	; fField24
        322ec0:	e5801000 	str	r1, [r0]
        322ec4:	e3e00000 	mvn	r0, #0	; 0x0
        322ec8:	e585000c 	str	r0, [r5, #12]	; fField12
        322ecc:	e5950008 	ldr	r0, [r5, #8]	; fField8
        322ed0:	e3500000 	cmp	r0, #0	; 0x0
        322ed4:	daffffa4 	ble	322d6c <TCompiler::Parser(void)+0xc0>
        322ed8:	e2400001 	sub	r0, r0, #1	; 0x1
        322edc:	e5850008 	str	r0, [r5, #8]	; fField8
        322ee0:	eaffffa1 	b	322d6c <TCompiler::Parser(void)+0xc0>
        322ee4:	0c105574 	ldceq	5, cr5, [r0], -#464
        322ee8:	0037b130 	eoreqs	fp, r7, r0, lsr r1
        322eec:	0037b65c 	eoreqs	fp, r7, ip, asr r6
        322ef0:	0037b3f4 	ldreqsh	fp, [r7], -r4
        322ef4:	003802cc 	eoreqs	r0, r8, ip, asr #5
        322ef8:	0037b000 	eoreqs	fp, r7, r0
        322efc:	006828a8 	rsbeq	r2, r8, r8, lsr #17
        322f00:	00683d78 	rsbeq	r3, r8, r8, ror sp
        322f04:	0037aed0 	ldreqsb	sl, [r7], -r0
        322f08:	0037fde8 	eoreqs	pc, r7, r8, ror #27
        322f0c:	0037b8c4 	eoreqs	fp, r7, r4, asr #17
        322f10:	0037db84 	eoreqs	sp, r7, r4, lsl #23
        322f14:	0037b920 	eoreqs	fp, r7, r0, lsr #18
        322f18:	0037b398 	mlaeqs	r7, r8, r3, fp
        322f1c:	0c101820 	ldceq	8, cr1, [r0], -#128
        322f20:	00681f10 	rsbeq	r1, r8, r0, lsl pc
        322f24:	696c6c65 	stmvsdb	ip!, {r0, r2, r5, r6, sl, fp, sp, lr}^
        322f28:	67616c2d 	strvsb	r6, [r1, -sp, lsr #24]!	; fField24
        322f2c:	73796d62 	cmnvc	r9, #6272	; 0x1880
        322f30:	6f6c0000 	swivs	0x006c0000
        322f34:	79796465 	ldmvcdb	r9!, {r0, r2, r5, r6, sl, sp, lr}^
        322f38:	6275673a 	rsbvss	r6, r5, #15204352	; 0xe80000
        322f3c:	20737461 	rsbcss	r7, r3, r1, ror #8
        322f40:	74652025 	strvcbt	r2, [r5], -#37
        322f44:	642c2072 	strvst	r2, [ip], -#114
        322f48:	65616469 	strvsb	r6, [r1, -#1129]!
        322f4c:	6e672025 	cdpvs	0, 6, cr2, cr7, cr5, {1}
        322f50:	64202825 	strvst	r2, [r0], -#2085
        322f54:	73290d00 	teqvc	r9, #0	; 0x0
        322f58:	79796465 	ldmvcdb	r9!, {r0, r2, r5, r6, sl, sp, lr}^
        322f5c:	6275673a 	rsbvss	r6, r5, #15204352	; 0xe80000
        322f60:	20737461 	rsbcss	r7, r3, r1, ror #8
        322f64:	74652025 	strvcbt	r2, [r5], -#37
        322f68:	642c2073 	strvst	r2, [ip], -#115
        322f6c:	68696674 	stmvsda	r9!, {r2, r4, r5, r6, r9, sl, sp, lr}^
        322f70:	696e6720 	stmvsdb	lr!, {r5, r8, r9, sl, sp, lr}^
        322f74:	746f2073 	strvcbt	r2, [pc], #73	; 322f7c <TCompiler::Parser(void)+0x2d0>
        322f78:	74617465 	strvcbt	r7, [r1], -#1125
        322f7c:	2025640d 	eorcs	r6, r5, sp, lsl #8
        322f80:	00000000 	andeq	r0, r0, r0
        322f84:	e59d002c 	ldr	r0, [sp, #44]	; fField44
        322f88:	e7900081 	ldr	r0, [r0, r1, lsl #1]
        322f8c:	e1a00840 	mov	r0, r0, asr #16
        322f90:	e3300000 	teq	r0, #0	; 0x0
        322f94:	0a0000f6 	beq	323374 <TCompiler::Parser(void)+0x6c8>
        322f98:	e595100c 	ldr	r1, [r5, #12]	; fField12
        322f9c:	e0900001 	adds	r0, r0, r1
        322fa0:	4a0000f3 	bmi	323374 <TCompiler::Parser(void)+0x6c8>
        322fa4:	e250cc11 	subs	ip, r0, #4352	; 0x1100
        322fa8:	a35c0031 	cmpge	ip, #49	; 0x31
        322fac:	ca0000f0 	bgt	323374 <TCompiler::Parser(void)+0x6c8>
        322fb0:	e59dc008 	ldr	ip, [sp, #8]	; fField8
        322fb4:	e79c2080 	ldr	r2, [ip, r0, lsl #1]
        322fb8:	e1a02842 	mov	r2, r2, asr #16
        322fbc:	e1320001 	teq	r2, r1
        322fc0:	1a0000eb 	bne	323374 <TCompiler::Parser(void)+0x6c8>
        322fc4:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        322fc8:	e7918080 	ldr	r8, [r1, r0, lsl #1]
        322fcc:	e1a08848 	mov	r8, r8, asr #16
        322fd0:	e5950000 	ldr	r0, [r5]
        322fd4:	e3300000 	teq	r0, #0	; 0x0
        322fd8:	0a000008 	beq	323000 <TCompiler::Parser(void)+0x354>
        322fdc:	e59d0024 	ldr	r0, [sp, #36]	; fField36
        322fe0:	e7903108 	ldr	r3, [r0, r8, lsl #2]
        322fe4:	e92d0008 	stmdb	sp!, {r3}
        322fe8:	e1a03008 	mov	r3, r8
        322fec:	e5952010 	ldr	r2, [r5, #16]
        322ff0:	e5970000 	ldr	r0, [r7]
        322ff4:	e28f1fcc 	add	r1, pc, #816	; 0x330
        322ff8:	eb019bae 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        322ffc:	e28dd004 	add	sp, sp, #4	; 0x4
        323000:	e59d0020 	ldr	r0, [sp, #32]
        323004:	e7909088 	ldr	r9, [r0, r8, lsl #1]
        323008:	e1a09849 	mov	r9, r9, asr #16
        32300c:	e2690001 	rsb	r0, r9, #1	; 0x1
        323010:	e5951018 	ldr	r1, [r5, #24]	; fField24
        323014:	e7910100 	ldr	r0, [r1, r0, lsl #2]
        323018:	e585001c 	str	r0, [r5, #28]	; fField28
        32301c:	e3580096 	cmp	r8, #150	; 0x96
        323020:	908ff108 	addls	pc, pc, r8, lsl #2
        323024:	ea000b24 	b	325cbc <TCompiler::Parser(void)+0x3010>
        323028:	ea000b23 	b	325cbc <TCompiler::Parser(void)+0x3010>
        32302c:	ea00016c 	b	3235e4 <TCompiler::Parser(void)+0x938>
        323030:	ea000b21 	b	325cbc <TCompiler::Parser(void)+0x3010>
        323034:	ea00016e 	b	3235f4 <TCompiler::Parser(void)+0x948>
        323038:	ea000175 	b	323614 <TCompiler::Parser(void)+0x968>
        32303c:	ea00017a 	b	32362c <TCompiler::Parser(void)+0x980>
        323040:	ea000b1d 	b	325cbc <TCompiler::Parser(void)+0x3010>
        323044:	ea000b1c 	b	325cbc <TCompiler::Parser(void)+0x3010>
        323048:	ea000b1b 	b	325cbc <TCompiler::Parser(void)+0x3010>
        32304c:	ea000b1a 	b	325cbc <TCompiler::Parser(void)+0x3010>
        323050:	ea000b19 	b	325cbc <TCompiler::Parser(void)+0x3010>
        323054:	ea000185 	b	323670 <TCompiler::Parser(void)+0x9c4>
        323058:	ea00018e 	b	323698 <TCompiler::Parser(void)+0x9ec>
        32305c:	ea000198 	b	3236c4 <TCompiler::Parser(void)+0xa18>
        323060:	ea000199 	b	3236cc <TCompiler::Parser(void)+0xa20>
        323064:	ea0001aa 	b	323714 <TCompiler::Parser(void)+0xa68>
        323068:	ea0001bb 	b	32375c <TCompiler::Parser(void)+0xab0>
        32306c:	ea0001cc 	b	3237a4 <TCompiler::Parser(void)+0xaf8>
        323070:	ea0001dd 	b	3237ec <TCompiler::Parser(void)+0xb40>
        323074:	ea0001ef 	b	323838 <TCompiler::Parser(void)+0xb8c>
        323078:	ea000200 	b	323880 <TCompiler::Parser(void)+0xbd4>
        32307c:	ea000212 	b	3238cc <TCompiler::Parser(void)+0xc20>
        323080:	ea000223 	b	323914 <TCompiler::Parser(void)+0xc68>
        323084:	ea00022d 	b	323940 <TCompiler::Parser(void)+0xc94>
        323088:	ea00023f 	b	32398c <TCompiler::Parser(void)+0xce0>
        32308c:	ea000251 	b	3239d8 <TCompiler::Parser(void)+0xd2c>
        323090:	ea000262 	b	323a20 <TCompiler::Parser(void)+0xd74>
        323094:	ea000273 	b	323a68 <TCompiler::Parser(void)+0xdbc>
        323098:	ea000285 	b	323ab4 <TCompiler::Parser(void)+0xe08>
        32309c:	ea000297 	b	323b00 <TCompiler::Parser(void)+0xe54>
        3230a0:	ea0002a9 	b	323b4c <TCompiler::Parser(void)+0xea0>
        3230a4:	ea0002ba 	b	323b94 <TCompiler::Parser(void)+0xee8>
        3230a8:	ea0002cc 	b	323be0 <TCompiler::Parser(void)+0xf34>
        3230ac:	ea0002de 	b	323c2c <TCompiler::Parser(void)+0xf80>
        3230b0:	ea0002e7 	b	323c54 <TCompiler::Parser(void)+0xfa8>
        3230b4:	ea0002f1 	b	323c80 <TCompiler::Parser(void)+0xfd4>
        3230b8:	ea000aff 	b	325cbc <TCompiler::Parser(void)+0x3010>
        3230bc:	ea000afe 	b	325cbc <TCompiler::Parser(void)+0x3010>
        3230c0:	ea000afd 	b	325cbc <TCompiler::Parser(void)+0x3010>
        3230c4:	ea000afc 	b	325cbc <TCompiler::Parser(void)+0x3010>
        3230c8:	ea000afb 	b	325cbc <TCompiler::Parser(void)+0x3010>
        3230cc:	ea000afa 	b	325cbc <TCompiler::Parser(void)+0x3010>
        3230d0:	ea000af9 	b	325cbc <TCompiler::Parser(void)+0x3010>
        3230d4:	ea000af8 	b	325cbc <TCompiler::Parser(void)+0x3010>
        3230d8:	ea000af7 	b	325cbc <TCompiler::Parser(void)+0x3010>
        3230dc:	ea000af6 	b	325cbc <TCompiler::Parser(void)+0x3010>
        3230e0:	ea000af5 	b	325cbc <TCompiler::Parser(void)+0x3010>
        3230e4:	ea0002f0 	b	323cac <TCompiler::Parser(void)+0x1000>
        3230e8:	ea0002fa 	b	323cd8 <TCompiler::Parser(void)+0x102c>
        3230ec:	ea000304 	b	323d04 <TCompiler::Parser(void)+0x1058>
        3230f0:	ea00030e 	b	323d30 <TCompiler::Parser(void)+0x1084>
        3230f4:	ea000318 	b	323d5c <TCompiler::Parser(void)+0x10b0>
        3230f8:	ea000322 	b	323d88 <TCompiler::Parser(void)+0x10dc>
        3230fc:	ea00032c 	b	323db4 <TCompiler::Parser(void)+0x1108>
        323100:	ea00033d 	b	323dfc <TCompiler::Parser(void)+0x1150>
        323104:	ea000356 	b	323e64 <TCompiler::Parser(void)+0x11b8>
        323108:	ea000367 	b	323eac <TCompiler::Parser(void)+0x1200>
        32310c:	ea000379 	b	323ef8 <TCompiler::Parser(void)+0x124c>
        323110:	ea00038f 	b	323f54 <TCompiler::Parser(void)+0x12a8>
        323114:	ea000399 	b	323f80 <TCompiler::Parser(void)+0x12d4>
        323118:	ea0003b3 	b	323fec <TCompiler::Parser(void)+0x1340>
        32311c:	ea0003c5 	b	324038 <TCompiler::Parser(void)+0x138c>
        323120:	ea000419 	b	32418c <TCompiler::Parser(void)+0x14e0>
        323124:	ea00046f 	b	3242e8 <TCompiler::Parser(void)+0x163c>
        323128:	ea000479 	b	324314 <TCompiler::Parser(void)+0x1668>
        32312c:	ea00048b 	b	324360 <TCompiler::Parser(void)+0x16b4>
        323130:	ea000495 	b	32438c <TCompiler::Parser(void)+0x16e0>
        323134:	ea0004a7 	b	3243d8 <TCompiler::Parser(void)+0x172c>
        323138:	ea0004b9 	b	324424 <TCompiler::Parser(void)+0x1778>
        32313c:	ea0004ca 	b	32446c <TCompiler::Parser(void)+0x17c0>
        323140:	ea0004db 	b	3244b4 <TCompiler::Parser(void)+0x1808>
        323144:	ea0004f3 	b	324518 <TCompiler::Parser(void)+0x186c>
        323148:	ea00050d 	b	324584 <TCompiler::Parser(void)+0x18d8>
        32314c:	ea000526 	b	3245ec <TCompiler::Parser(void)+0x1940>
        323150:	ea000546 	b	324670 <TCompiler::Parser(void)+0x19c4>
        323154:	ea000560 	b	3246dc <TCompiler::Parser(void)+0x1a30>
        323158:	ea000579 	b	324744 <TCompiler::Parser(void)+0x1a98>
        32315c:	ea000599 	b	3247c8 <TCompiler::Parser(void)+0x1b1c>
        323160:	ea0005b4 	b	324838 <TCompiler::Parser(void)+0x1b8c>
        323164:	ea000ad4 	b	325cbc <TCompiler::Parser(void)+0x3010>
        323168:	ea000ad3 	b	325cbc <TCompiler::Parser(void)+0x3010>
        32316c:	ea000ad2 	b	325cbc <TCompiler::Parser(void)+0x3010>
        323170:	ea000ad1 	b	325cbc <TCompiler::Parser(void)+0x3010>
        323174:	ea000ad0 	b	325cbc <TCompiler::Parser(void)+0x3010>
        323178:	ea0005ca 	b	3248a8 <TCompiler::Parser(void)+0x1bfc>
        32317c:	ea0005d4 	b	3248d4 <TCompiler::Parser(void)+0x1c28>
        323180:	ea000608 	b	3249a8 <TCompiler::Parser(void)+0x1cfc>
        323184:	ea000633 	b	324a58 <TCompiler::Parser(void)+0x1dac>
        323188:	ea00066a 	b	324b38 <TCompiler::Parser(void)+0x1e8c>
        32318c:	ea00069b 	b	324c00 <TCompiler::Parser(void)+0x1f54>
        323190:	ea00069c 	b	324c08 <TCompiler::Parser(void)+0x1f5c>
        323194:	ea00069d 	b	324c10 <TCompiler::Parser(void)+0x1f64>
        323198:	ea0006a0 	b	324c20 <TCompiler::Parser(void)+0x1f74>
        32319c:	ea0006b4 	b	324c74 <TCompiler::Parser(void)+0x1fc8>
        3231a0:	ea0006c6 	b	324cc0 <TCompiler::Parser(void)+0x2014>
        3231a4:	ea0006d8 	b	324d0c <TCompiler::Parser(void)+0x2060>
        3231a8:	ea000707 	b	324dcc <TCompiler::Parser(void)+0x2120>
        3231ac:	ea000735 	b	324e88 <TCompiler::Parser(void)+0x21dc>
        3231b0:	ea000765 	b	324f4c <TCompiler::Parser(void)+0x22a0>
        3231b4:	ea00010e 	b	3235f4 <TCompiler::Parser(void)+0x948>
        3231b8:	ea00077e 	b	324fb8 <TCompiler::Parser(void)+0x230c>
        3231bc:	ea00078e 	b	324ffc <TCompiler::Parser(void)+0x2350>
        3231c0:	ea0007a0 	b	325048 <TCompiler::Parser(void)+0x239c>
        3231c4:	ea0007aa 	b	325074 <TCompiler::Parser(void)+0x23c8>
        3231c8:	ea0007c4 	b	3250e0 <TCompiler::Parser(void)+0x2434>
        3231cc:	ea000104 	b	3235e4 <TCompiler::Parser(void)+0x938>
        3231d0:	ea000ab9 	b	325cbc <TCompiler::Parser(void)+0x3010>
        3231d4:	ea000106 	b	3235f4 <TCompiler::Parser(void)+0x948>
        3231d8:	ea0007ca 	b	325108 <TCompiler::Parser(void)+0x245c>
        3231dc:	ea000100 	b	3235e4 <TCompiler::Parser(void)+0x938>
        3231e0:	ea000103 	b	3235f4 <TCompiler::Parser(void)+0x948>
        3231e4:	ea0007d8 	b	32514c <TCompiler::Parser(void)+0x24a0>
        3231e8:	ea0007eb 	b	32519c <TCompiler::Parser(void)+0x24f0>
        3231ec:	ea000ab2 	b	325cbc <TCompiler::Parser(void)+0x3010>
        3231f0:	ea0007fd 	b	3251ec <TCompiler::Parser(void)+0x2540>
        3231f4:	ea00081d 	b	325270 <TCompiler::Parser(void)+0x25c4>
        3231f8:	ea000843 	b	32530c <TCompiler::Parser(void)+0x2660>
        3231fc:	ea000891 	b	325448 <TCompiler::Parser(void)+0x279c>
        323200:	ea0008d8 	b	325568 <TCompiler::Parser(void)+0x28bc>
        323204:	ea0008ed 	b	3255c0 <TCompiler::Parser(void)+0x2914>
        323208:	ea000903 	b	32561c <TCompiler::Parser(void)+0x2970>
        32320c:	ea00094b 	b	325740 <TCompiler::Parser(void)+0x2a94>
        323210:	ea00067a 	b	324c00 <TCompiler::Parser(void)+0x1f54>
        323214:	ea00098b 	b	325848 <TCompiler::Parser(void)+0x2b9c>
        323218:	ea0008e8 	b	3255c0 <TCompiler::Parser(void)+0x2914>
        32321c:	ea00099e 	b	32589c <TCompiler::Parser(void)+0x2bf0>
        323220:	ea0009ab 	b	3258d4 <TCompiler::Parser(void)+0x2c28>
        323224:	ea0009cc 	b	32595c <TCompiler::Parser(void)+0x2cb0>
        323228:	ea000aa3 	b	325cbc <TCompiler::Parser(void)+0x3010>
        32322c:	ea0009cc 	b	325964 <TCompiler::Parser(void)+0x2cb8>
        323230:	ea0009e6 	b	3259d0 <TCompiler::Parser(void)+0x2d24>
        323234:	ea000aa0 	b	325cbc <TCompiler::Parser(void)+0x3010>
        323238:	ea000a9f 	b	325cbc <TCompiler::Parser(void)+0x3010>
        32323c:	ea000a0f 	b	325a80 <TCompiler::Parser(void)+0x2dd4>
        323240:	ea000a9d 	b	325cbc <TCompiler::Parser(void)+0x3010>
        323244:	ea000a16 	b	325aa4 <TCompiler::Parser(void)+0x2df8>
        323248:	ea000a9b 	b	325cbc <TCompiler::Parser(void)+0x3010>
        32324c:	ea000a9a 	b	325cbc <TCompiler::Parser(void)+0x3010>
        323250:	ea00011b 	b	3236c4 <TCompiler::Parser(void)+0xa18>
        323254:	ea000a20 	b	325adc <TCompiler::Parser(void)+0x2e30>
        323258:	ea000119 	b	3236c4 <TCompiler::Parser(void)+0xa18>
        32325c:	ea000a96 	b	325cbc <TCompiler::Parser(void)+0x3010>
        323260:	ea000a2f 	b	325b24 <TCompiler::Parser(void)+0x2e78>
        323264:	ea0000de 	b	3235e4 <TCompiler::Parser(void)+0x938>
        323268:	ea000a93 	b	325cbc <TCompiler::Parser(void)+0x3010>
        32326c:	ea0000e0 	b	3235f4 <TCompiler::Parser(void)+0x948>
        323270:	ea000a61 	b	325bfc <TCompiler::Parser(void)+0x2f50>
        323274:	ea0009b8 	b	32595c <TCompiler::Parser(void)+0x2cb0>
        323278:	ea000a8f 	b	325cbc <TCompiler::Parser(void)+0x3010>
        32327c:	ea000a72 	b	325c4c <TCompiler::Parser(void)+0x2fa0>
        323280:	e5110010 	ldr	r0, [r1, -#16]
        323284:	e585001c 	str	r0, [r5, #28]	; fField28
        323288:	e24dd00c 	sub	sp, sp, #12	; 0xc
        32328c:	e5111008 	ldr	r1, [r1, -#8]	; fField8
        323290:	eb6283ec 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        323294:	e3300000 	teq	r0, #0	; 0x0
        323298:	0a00000b 	beq	3232cc <TCompiler::Parser(void)+0x620>
        32329c:	e24ddc01 	sub	sp, sp, #256	; 0x100
        3232a0:	e5950018 	ldr	r0, [r5, #24]	; fField24
        3232a4:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        3232a8:	eb62946a 	bl	1bc8458 <$SymbolName(long)>
        3232ac:	e1a02000 	mov	r2, r0
        3232b0:	e1a0000d 	mov	r0, sp
        3232b4:	e28f1f28 	add	r1, pc, #160	; 0xa0
        3232b8:	eb6249f5 	bl	1bb5a94 <$sprintf>
        3232bc:	e1a0100d 	mov	r1, sp
        3232c0:	e1a00004 	mov	r0, r4
        3232c4:	eb5cda6f 	bl	1a59c88 <TCompiler::$Warning(char *)>
        3232c8:	e28ddc01 	add	sp, sp, #256	; 0x100
        3232cc:	e5950018 	ldr	r0, [r5, #24]	; fField24
        3232d0:	e5900000 	ldr	r0, [r0]
        3232d4:	eb627b9c 	bl	1bc214c <$AllocateRefHandle(long)>
        3232d8:	e40d0004 	str	r0, [sp], -#4	; fField4
        3232dc:	e28d2004 	add	r2, sp, #4	; 0x4
        3232e0:	e58d2000 	str	r2, [sp]
        3232e4:	e5950018 	ldr	r0, [r5, #24]	; fField24
        3232e8:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        3232ec:	eb627b96 	bl	1bc214c <$AllocateRefHandle(long)>
        3232f0:	e58d0008 	str	r0, [sp, #8]	; fField8
        3232f4:	e28da008 	add	sl, sp, #8	; 0x8
        3232f8:	e595001c 	ldr	r0, [r5, #28]	; fField28
        3232fc:	eb627b92 	bl	1bc214c <$AllocateRefHandle(long)>
        323300:	e58d000c 	str	r0, [sp, #12]	; fField12
        323304:	e28d000c 	add	r0, sp, #12	; 0xc
        323308:	e1a0100a 	mov	r1, sl
        32330c:	e49d2004 	ldr	r2, [sp], #4	; fField4
        323310:	eb628c14 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        323314:	e59d0000 	ldr	r0, [sp]
        323318:	eb627fa7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        32331c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        323320:	eb627fa5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        323324:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        323328:	ea000a61 	b	325cb4 <TCompiler::Parser(void)+0x3008>
        32332c:	79796465 	ldmvcdb	r9!, {r0, r2, r5, r6, sl, sp, lr}^
        323330:	6275673a 	rsbvss	r6, r5, #15204352	; 0xe80000
        323334:	20737461 	rsbcss	r7, r3, r1, ror #8
        323338:	74652025 	strvcbt	r2, [r5], -#37
        32333c:	642c2072 	strvst	r2, [ip], -#114
        323340:	65647563 	strvsb	r7, [r4, -#1379]!	; fField1379
        323344:	696e6720 	stmvsdb	lr!, {r5, r8, r9, sl, sp, lr}^
        323348:	62792072 	rsbvss	r2, r9, #114	; 0x72
        32334c:	756c6520 	strvcb	r6, [ip, -#1312]!
        323350:	25642028 	strcsb	r2, [r4, -#40]!	; fField40
        323354:	2573290d 	ldrcsb	r2, [r3, -#2317]!
        323358:	00000000 	andeq	r0, r0, r0
        32335c:	6475706c 	ldrvsbt	r7, [r5], -#108
        323360:	69636174 	stmvsdb	r3!, {r2, r4, r5, r6, r8, sp, lr}^
        323364:	6520736c 	strvs	r7, [r0, -#876]!
        323368:	6f74206e 	swivs	0x0074206e
        32336c:	616d653a 	cmnvs	sp, sl, lsr r5
        323370:	20257300 	eorcs	r7, r5, r0, lsl #6
        323374:	e5950008 	ldr	r0, [r5, #8]	; fField8
        323378:	e3300000 	teq	r0, #0	; 0x0
        32337c:	1a000005 	bne	323398 <TCompiler::Parser(void)+0x6ec>
        323380:	e1a00004 	mov	r0, r4
        323384:	e28f1f42 	add	r1, pc, #264	; 0x108
        323388:	eb5cd217 	bl	1a57bec <TCompiler::$SyntaxError(char *)>
        32338c:	e5950004 	ldr	r0, [r5, #4]	; fField4
        323390:	e2800001 	add	r0, r0, #1	; 0x1
        323394:	e5850004 	str	r0, [r5, #4]	; fField4
        323398:	e5950008 	ldr	r0, [r5, #8]	; fField8
        32339c:	e3500003 	cmp	r0, #3	; 0x3
        3233a0:	aa000068 	bge	323548 <TCompiler::Parser(void)+0x89c>
        3233a4:	e3a00003 	mov	r0, #3	; 0x3
        3233a8:	e3a09031 	mov	r9, #49	; 0x31
        3233ac:	e2899c11 	add	r9, r9, #4352	; 0x1100
        3233b0:	e5850008 	str	r0, [r5, #8]	; fField8
        3233b4:	e59d0028 	ldr	r0, [sp, #40]	; fField40
        3233b8:	e5951014 	ldr	r1, [r5, #20]	; fField20
        3233bc:	e5912000 	ldr	r2, [r1]
        3233c0:	e1a02842 	mov	r2, r2, asr #16
        3233c4:	e7900082 	ldr	r0, [r0, r2, lsl #1]
        3233c8:	e1a00840 	mov	r0, r0, asr #16
        3233cc:	e3300000 	teq	r0, #0	; 0x0
        3233d0:	0a000041 	beq	3234dc <TCompiler::Parser(void)+0x830>
        3233d4:	e2908c01 	adds	r8, r0, #256	; 0x100
        3233d8:	4a00003f 	bmi	3234dc <TCompiler::Parser(void)+0x830>
        3233dc:	e1580009 	cmp	r8, r9
        3233e0:	ca00003d 	bgt	3234dc <TCompiler::Parser(void)+0x830>
        3233e4:	e59dc008 	ldr	ip, [sp, #8]	; fField8
        3233e8:	e79c0088 	ldr	r0, [ip, r8, lsl #1]
        3233ec:	e1a00840 	mov	r0, r0, asr #16
        3233f0:	e3300c01 	teq	r0, #256	; 0x100
        3233f4:	1a000038 	bne	3234dc <TCompiler::Parser(void)+0x830>
        3233f8:	e5950000 	ldr	r0, [r5]
        3233fc:	e3300000 	teq	r0, #0	; 0x0
        323400:	0a000008 	beq	323428 <TCompiler::Parser(void)+0x77c>
        323404:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        323408:	e7903088 	ldr	r3, [r0, r8, lsl #1]
        32340c:	e1a03843 	mov	r3, r3, asr #16
        323410:	e5950014 	ldr	r0, [r5, #20]	; fField20
        323414:	e5902000 	ldr	r2, [r0]
        323418:	e1a02842 	mov	r2, r2, asr #16
        32341c:	e5970000 	ldr	r0, [r7]
        323420:	e28f1f1f 	add	r1, pc, #124	; 0x7c
        323424:	eb019aa3 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        323428:	e594100c 	ldr	r1, [r4, #12]	; fField12
        32342c:	e5950024 	ldr	r0, [r5, #36]	; fField36
        323430:	e0800081 	add	r0, r0, r1, lsl #1
        323434:	e2400002 	sub	r0, r0, #2	; 0x2
        323438:	e5951014 	ldr	r1, [r5, #20]	; fField20
        32343c:	e1500001 	cmp	r0, r1
        323440:	8a000003 	bhi	323454 <TCompiler::Parser(void)+0x7a8>
        323444:	e1a00004 	mov	r0, r4
        323448:	eb5ccdb8 	bl	1a56b30 <TCompiler::$ParserStackOverflow(void)>
        32344c:	e3300000 	teq	r0, #0	; 0x0
        323450:	1a000ab3 	bne	325f24 <TCompiler::Parser(void)+0x3278>
        323454:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        323458:	e7900088 	ldr	r0, [r0, r8, lsl #1]
        32345c:	e1a00840 	mov	r0, r0, asr #16
        323460:	e5850010 	str	r0, [r5, #16]
        323464:	e5951014 	ldr	r1, [r5, #20]	; fField20
        323468:	e2811002 	add	r1, r1, #2	; 0x2
        32346c:	e5851014 	str	r1, [r5, #20]	; fField20
        323470:	e5c10001 	strb	r0, [r1, #1]
        323474:	e1a00440 	mov	r0, r0, asr #8
        323478:	e5c10000 	strb	r0, [r1]
        32347c:	e5950018 	ldr	r0, [r5, #24]	; fField24
        323480:	e2800004 	add	r0, r0, #4	; 0x4
        323484:	e5951020 	ldr	r1, [r5, #32]
        323488:	e5850018 	str	r0, [r5, #24]	; fField24
        32348c:	e5801000 	str	r1, [r0]
        323490:	eafffe35 	b	322d6c <TCompiler::Parser(void)+0xc0>
        323494:	73796e74 	cmnvc	r9, #1856	; 0x740
        323498:	61782065 	cmnvs	r8, r5, rrx
        32349c:	72726f72 	rsbvcs	r6, r2, #456	; 0x1c8
        3234a0:	00000000 	andeq	r0, r0, r0
        3234a4:	79796465 	ldmvcdb	r9!, {r0, r2, r5, r6, sl, sp, lr}^
        3234a8:	6275673a 	rsbvss	r6, r5, #15204352	; 0xe80000
        3234ac:	20737461 	rsbcss	r7, r3, r1, ror #8
        3234b0:	74652025 	strvcbt	r2, [r5], -#37
        3234b4:	642c2065 	strvst	r2, [ip], -#101
        3234b8:	72726f72 	rsbvcs	r6, r2, #456	; 0x1c8
        3234bc:	20726563 	rsbcss	r6, r2, r3, ror #10
        3234c0:	6f766572 	swivs	0x00766572
        3234c4:	79207368 	stmvcdb	r0!, {r3, r5, r6, r8, r9, ip, sp, lr}
        3234c8:	69667469 	stmvsdb	r6!, {r0, r3, r5, r6, sl, ip, sp, lr}^
        3234cc:	6e672074 	mcrvs	0, 3, r2, cr7, cr4, {3}
        3234d0:	6f207374 	swivs	0x00207374
        3234d4:	61746520 	cmnvs	r4, r0, lsr #10
        3234d8:	25640d00 	strcsb	r0, [r4, -#3328]!	; fField3328
        3234dc:	e5950000 	ldr	r0, [r5]
        3234e0:	e3300000 	teq	r0, #0	; 0x0
        3234e4:	15970000 	ldrne	r0, [r7]
        3234e8:	128f1f0a 	addne	r1, pc, #40	; 0x28
        3234ec:	1b019a71 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        3234f0:	e5950014 	ldr	r0, [r5, #20]	; fField20
        3234f4:	e5951024 	ldr	r1, [r5, #36]	; fField36
        3234f8:	e1500001 	cmp	r0, r1
        3234fc:	9a000a8b 	bls	325f30 <TCompiler::Parser(void)+0x3284>
        323500:	e2400002 	sub	r0, r0, #2	; 0x2
        323504:	e5850014 	str	r0, [r5, #20]	; fField20
        323508:	e5950018 	ldr	r0, [r5, #24]	; fField24
        32350c:	e2400004 	sub	r0, r0, #4	; 0x4
        323510:	e5850018 	str	r0, [r5, #24]	; fField24
        323514:	eaffffa6 	b	3233b4 <TCompiler::Parser(void)+0x708>
        323518:	79796465 	ldmvcdb	r9!, {r0, r2, r5, r6, sl, sp, lr}^
        32351c:	6275673a 	rsbvss	r6, r5, #15204352	; 0xe80000
        323520:	20657272 	rsbcs	r7, r5, r2, ror r2
        323524:	6f722072 	swivs	0x00722072
        323528:	65636f76 	strvsb	r6, [r3, -#3958]!
        32352c:	65727920 	ldrvsb	r7, [r2, -#2336]!
        323530:	64697363 	strvsbt	r7, [r9], -#867
        323534:	61726469 	cmnvs	r2, r9, ror #8
        323538:	6e672073 	mcrvs	0, 3, r2, cr7, cr3, {3}
        32353c:	74617465 	strvcbt	r7, [r1], -#1125
        323540:	2025640d 	eorcs	r6, r5, sp, lsl #8
        323544:	00000000 	andeq	r0, r0, r0
        323548:	e595000c 	ldr	r0, [r5, #12]	; fField12
        32354c:	e3300000 	teq	r0, #0	; 0x0
        323550:	0a000a76 	beq	325f30 <TCompiler::Parser(void)+0x3284>
        323554:	e5951000 	ldr	r1, [r5]
        323558:	e3310000 	teq	r1, #0	; 0x0
        32355c:	0a00000d 	beq	323598 <TCompiler::Parser(void)+0x8ec>
        323560:	e3500f4e 	cmp	r0, #312	; 0x138
        323564:	ca000003 	bgt	323578 <TCompiler::Parser(void)+0x8cc>
        323568:	e59d1010 	ldr	r1, [sp, #16]
        32356c:	e7913100 	ldr	r3, [r1, r0, lsl #2]
        323570:	e3330000 	teq	r3, #0	; 0x0
        323574:	1a000000 	bne	32357c <TCompiler::Parser(void)+0x8d0>
        323578:	e59f3024 	ldr	r3, [pc, #24]	; 3235a4 <TCompiler::Parser(void)+0x8f8>	; fField24
        32357c:	e92d0008 	stmdb	sp!, {r3}
        323580:	e1a03000 	mov	r3, r0
        323584:	e5952010 	ldr	r2, [r5, #16]
        323588:	e5970000 	ldr	r0, [r7]
        32358c:	e28f1f05 	add	r1, pc, #20	; 0x14
        323590:	eb019a48 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        323594:	e28dd004 	add	sp, sp, #4	; 0x4
        323598:	e3e00000 	mvn	r0, #0	; 0x0
        32359c:	e585000c 	str	r0, [r5, #12]	; fField12
        3235a0:	eafffdf1 	b	322d6c <TCompiler::Parser(void)+0xc0>
        3235a4:	00322f24 	eoreqs	r2, r2, r4, lsr #30
        3235a8:	79796465 	ldmvcdb	r9!, {r0, r2, r5, r6, sl, sp, lr}^
        3235ac:	6275673a 	rsbvss	r6, r5, #15204352	; 0xe80000
        3235b0:	20737461 	rsbcss	r7, r3, r1, ror #8
        3235b4:	74652025 	strvcbt	r2, [r5], -#37
        3235b8:	642c2065 	strvst	r2, [ip], -#101
        3235bc:	72726f72 	rsbvcs	r6, r2, #456	; 0x1c8
        3235c0:	20726563 	rsbcss	r6, r2, r3, ror #10
        3235c4:	6f766572 	swivs	0x00766572
        3235c8:	79206469 	stmvcdb	r0!, {r0, r3, r5, r6, sl, sp, lr}
        3235cc:	73636172 	cmnvc	r3, #-2147483620	; 0x8000001c
        3235d0:	64732074 	ldrvsbt	r2, [r3], -#116	; fField116
        3235d4:	6f6b656e 	swivs	0x006b656e
        3235d8:	20256420 	eorcs	r6, r5, r0, lsr #8
        3235dc:	28257329 	stmcsda	r5!, {r0, r3, r5, r8, r9, ip, sp, lr}
        3235e0:	0d000000 	stceq	0, cr0, [r0]
        3235e4:	e1a00006 	mov	r0, r6
        3235e8:	e3a01000 	mov	r1, #0	; 0x0
        3235ec:	eb627ad1 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        3235f0:	ea000929 	b	325a9c <TCompiler::Parser(void)+0x2df0>
        3235f4:	e1a00006 	mov	r0, r6
        3235f8:	e3a01001 	mov	r1, #1	; 0x1
        3235fc:	eb627acd 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        323600:	e585001c 	str	r0, [r5, #28]	; fField28
        323604:	e5951018 	ldr	r1, [r5, #24]	; fField24
        323608:	e5912000 	ldr	r2, [r1]
        32360c:	e3a01000 	mov	r1, #0	; 0x0
        323610:	ea0008ad 	b	3258cc <TCompiler::Parser(void)+0x2c20>
        323614:	e5310004 	ldr	r0, [r1, -#4]!	; fField4
        323618:	e585001c 	str	r0, [r5, #28]	; fField28
        32361c:	e594001c 	ldr	r0, [r4, #28]	; fField28
        323620:	e3300000 	teq	r0, #0	; 0x0
        323624:	1a0009e3 	bne	325db8 <TCompiler::Parser(void)+0x310c>
        323628:	ea0009a3 	b	325cbc <TCompiler::Parser(void)+0x3010>
        32362c:	e24dd008 	sub	sp, sp, #8	; 0x8
        323630:	e511000c 	ldr	r0, [r1, -#12]	; fField12
        323634:	e585001c 	str	r0, [r5, #28]	; fField28
        323638:	e5910000 	ldr	r0, [r1]
        32363c:	eb627ac2 	bl	1bc214c <$AllocateRefHandle(long)>
        323640:	e58d0000 	str	r0, [sp]
        323644:	e1a0a00d 	mov	sl, sp
        323648:	e595001c 	ldr	r0, [r5, #28]	; fField28
        32364c:	eb627abe 	bl	1bc214c <$AllocateRefHandle(long)>
        323650:	e58d0004 	str	r0, [sp, #4]	; fField4
        323654:	e28d0004 	add	r0, sp, #4	; 0x4
        323658:	e1a0100a 	mov	r1, sl
        32365c:	eb627ab1 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        323660:	e59d0000 	ldr	r0, [sp]
        323664:	eb627ed4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        323668:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        32366c:	ea000973 	b	325c40 <TCompiler::Parser(void)+0x2f94>
        323670:	e24dd004 	sub	sp, sp, #4	; 0x4
        323674:	e3a00002 	mov	r0, #2	; 0x2
        323678:	eb627ab3 	bl	1bc214c <$AllocateRefHandle(long)>
        32367c:	e58d0000 	str	r0, [sp]
        323680:	e1a0100d 	mov	r1, sp
        323684:	e3a00f49 	mov	r0, #292	; 0x124
        323688:	ebfe70bd 	bl	2bf984 <AllocatePT1(int, RefVar const &)>
        32368c:	e585001c 	str	r0, [r5, #28]	; fField28
        323690:	e59d0000 	ldr	r0, [sp]
        323694:	ea00090e 	b	325ad4 <TCompiler::Parser(void)+0x2e28>
        323698:	e24dd004 	sub	sp, sp, #4	; 0x4
        32369c:	e5310004 	ldr	r0, [r1, -#4]!	; fField4
        3236a0:	eb627aa9 	bl	1bc214c <$AllocateRefHandle(long)>
        3236a4:	e58d0000 	str	r0, [sp]
        3236a8:	e1a0100d 	mov	r1, sp
        3236ac:	e3a00007 	mov	r0, #7	; 0x7
        3236b0:	e2800c01 	add	r0, r0, #256	; 0x100
        3236b4:	ebfe70b2 	bl	2bf984 <AllocatePT1(int, RefVar const &)>
        3236b8:	e585001c 	str	r0, [r5, #28]	; fField28
        3236bc:	e59d0000 	ldr	r0, [sp]
        3236c0:	ea000903 	b	325ad4 <TCompiler::Parser(void)+0x2e28>
        3236c4:	e5310004 	ldr	r0, [r1, -#4]!	; fField4
        3236c8:	ea0008f3 	b	325a9c <TCompiler::Parser(void)+0x2df0>
        3236cc:	e24dd008 	sub	sp, sp, #8	; 0x8
        3236d0:	e5910000 	ldr	r0, [r1]
        3236d4:	eb627a9c 	bl	1bc214c <$AllocateRefHandle(long)>
        3236d8:	e58d0000 	str	r0, [sp]
        3236dc:	e1a0a00d 	mov	sl, sp
        3236e0:	e5950018 	ldr	r0, [r5, #24]	; fField24
        3236e4:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        3236e8:	eb627a97 	bl	1bc214c <$AllocateRefHandle(long)>
        3236ec:	e58d0004 	str	r0, [sp, #4]	; fField4
        3236f0:	e28d1004 	add	r1, sp, #4	; 0x4
        3236f4:	e3a0002b 	mov	r0, #43	; 0x2b
        3236f8:	e1a0200a 	mov	r2, sl
        3236fc:	ebfe7282 	bl	2c010c <AllocatePT2__FiRC6RefVarT2>
        323700:	e585001c 	str	r0, [r5, #28]	; fField28
        323704:	e59d0000 	ldr	r0, [sp]
        323708:	eb627eab 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        32370c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        323710:	ea00094a 	b	325c40 <TCompiler::Parser(void)+0x2f94>
        323714:	e24dd008 	sub	sp, sp, #8	; 0x8
        323718:	e5910000 	ldr	r0, [r1]
        32371c:	eb627a8a 	bl	1bc214c <$AllocateRefHandle(long)>
        323720:	e58d0000 	str	r0, [sp]
        323724:	e1a0a00d 	mov	sl, sp
        323728:	e5950018 	ldr	r0, [r5, #24]	; fField24
        32372c:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        323730:	eb627a85 	bl	1bc214c <$AllocateRefHandle(long)>
        323734:	e58d0004 	str	r0, [sp, #4]	; fField4
        323738:	e28d1004 	add	r1, sp, #4	; 0x4
        32373c:	e3a0002d 	mov	r0, #45	; 0x2d
        323740:	e1a0200a 	mov	r2, sl
        323744:	ebfe7270 	bl	2c010c <AllocatePT2__FiRC6RefVarT2>
        323748:	e585001c 	str	r0, [r5, #28]	; fField28
        32374c:	e59d0000 	ldr	r0, [sp]
        323750:	eb627e99 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        323754:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        323758:	ea000938 	b	325c40 <TCompiler::Parser(void)+0x2f94>
        32375c:	e24dd008 	sub	sp, sp, #8	; 0x8
        323760:	e5910000 	ldr	r0, [r1]
        323764:	eb627a78 	bl	1bc214c <$AllocateRefHandle(long)>
        323768:	e58d0000 	str	r0, [sp]
        32376c:	e1a0a00d 	mov	sl, sp
        323770:	e5950018 	ldr	r0, [r5, #24]	; fField24
        323774:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        323778:	eb627a73 	bl	1bc214c <$AllocateRefHandle(long)>
        32377c:	e58d0004 	str	r0, [sp, #4]	; fField4
        323780:	e28d1004 	add	r1, sp, #4	; 0x4
        323784:	e3a0002a 	mov	r0, #42	; 0x2a
        323788:	e1a0200a 	mov	r2, sl
        32378c:	ebfe725e 	bl	2c010c <AllocatePT2__FiRC6RefVarT2>
        323790:	e585001c 	str	r0, [r5, #28]	; fField28
        323794:	e59d0000 	ldr	r0, [sp]
        323798:	eb627e87 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        32379c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        3237a0:	ea000926 	b	325c40 <TCompiler::Parser(void)+0x2f94>
        3237a4:	e24dd008 	sub	sp, sp, #8	; 0x8
        3237a8:	e5910000 	ldr	r0, [r1]
        3237ac:	eb627a66 	bl	1bc214c <$AllocateRefHandle(long)>
        3237b0:	e58d0000 	str	r0, [sp]
        3237b4:	e1a0a00d 	mov	sl, sp
        3237b8:	e5950018 	ldr	r0, [r5, #24]	; fField24
        3237bc:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        3237c0:	eb627a61 	bl	1bc214c <$AllocateRefHandle(long)>
        3237c4:	e58d0004 	str	r0, [sp, #4]	; fField4
        3237c8:	e28d1004 	add	r1, sp, #4	; 0x4
        3237cc:	e3a0002f 	mov	r0, #47	; 0x2f
        3237d0:	e1a0200a 	mov	r2, sl
        3237d4:	ebfe724c 	bl	2c010c <AllocatePT2__FiRC6RefVarT2>
        3237d8:	e585001c 	str	r0, [r5, #28]	; fField28
        3237dc:	e59d0000 	ldr	r0, [sp]
        3237e0:	eb627e75 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3237e4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        3237e8:	ea000914 	b	325c40 <TCompiler::Parser(void)+0x2f94>
        3237ec:	e24dd008 	sub	sp, sp, #8	; 0x8
        3237f0:	e5910000 	ldr	r0, [r1]
        3237f4:	eb627a54 	bl	1bc214c <$AllocateRefHandle(long)>
        3237f8:	e58d0000 	str	r0, [sp]
        3237fc:	e1a0a00d 	mov	sl, sp
        323800:	e5950018 	ldr	r0, [r5, #24]	; fField24
        323804:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        323808:	eb627a4f 	bl	1bc214c <$AllocateRefHandle(long)>
        32380c:	e58d0004 	str	r0, [sp, #4]	; fField4
        323810:	e28d1004 	add	r1, sp, #4	; 0x4
        323814:	e3a00033 	mov	r0, #51	; 0x33
        323818:	e2800c01 	add	r0, r0, #256	; 0x100
        32381c:	e1a0200a 	mov	r2, sl
        323820:	ebfe7239 	bl	2c010c <AllocatePT2__FiRC6RefVarT2>
        323824:	e585001c 	str	r0, [r5, #28]	; fField28
        323828:	e59d0000 	ldr	r0, [sp]
        32382c:	eb627e62 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        323830:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        323834:	ea000901 	b	325c40 <TCompiler::Parser(void)+0x2f94>
        323838:	e24dd008 	sub	sp, sp, #8	; 0x8
        32383c:	e5910000 	ldr	r0, [r1]
        323840:	eb627a41 	bl	1bc214c <$AllocateRefHandle(long)>
        323844:	e58d0000 	str	r0, [sp]
        323848:	e1a0a00d 	mov	sl, sp
        32384c:	e5950018 	ldr	r0, [r5, #24]	; fField24
        323850:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        323854:	eb627a3c 	bl	1bc214c <$AllocateRefHandle(long)>
        323858:	e58d0004 	str	r0, [sp, #4]	; fField4
        32385c:	e28d1004 	add	r1, sp, #4	; 0x4
        323860:	e3a00026 	mov	r0, #38	; 0x26
        323864:	e1a0200a 	mov	r2, sl
        323868:	ebfe7227 	bl	2c010c <AllocatePT2__FiRC6RefVarT2>
        32386c:	e585001c 	str	r0, [r5, #28]	; fField28
        323870:	e59d0000 	ldr	r0, [sp]
        323874:	eb627e50 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        323878:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        32387c:	ea0008ef 	b	325c40 <TCompiler::Parser(void)+0x2f94>
        323880:	e24dd008 	sub	sp, sp, #8	; 0x8
        323884:	e5910000 	ldr	r0, [r1]
        323888:	eb627a2f 	bl	1bc214c <$AllocateRefHandle(long)>
        32388c:	e58d0000 	str	r0, [sp]
        323890:	e1a0a00d 	mov	sl, sp
        323894:	e5950018 	ldr	r0, [r5, #24]	; fField24
        323898:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        32389c:	eb627a2a 	bl	1bc214c <$AllocateRefHandle(long)>
        3238a0:	e58d0004 	str	r0, [sp, #4]	; fField4
        3238a4:	e28d1004 	add	r1, sp, #4	; 0x4
        3238a8:	e3a00032 	mov	r0, #50	; 0x32
        3238ac:	e2800c01 	add	r0, r0, #256	; 0x100
        3238b0:	e1a0200a 	mov	r2, sl
        3238b4:	ebfe7214 	bl	2c010c <AllocatePT2__FiRC6RefVarT2>
        3238b8:	e585001c 	str	r0, [r5, #28]	; fField28
        3238bc:	e59d0000 	ldr	r0, [sp]
        3238c0:	eb627e3d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3238c4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        3238c8:	ea0008dc 	b	325c40 <TCompiler::Parser(void)+0x2f94>
        3238cc:	e24dd008 	sub	sp, sp, #8	; 0x8
        3238d0:	e5910000 	ldr	r0, [r1]
        3238d4:	eb627a1c 	bl	1bc214c <$AllocateRefHandle(long)>
        3238d8:	e58d0000 	str	r0, [sp]
        3238dc:	e1a0a00d 	mov	sl, sp
        3238e0:	e5950018 	ldr	r0, [r5, #24]	; fField24
        3238e4:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        3238e8:	eb627a17 	bl	1bc214c <$AllocateRefHandle(long)>
        3238ec:	e58d0004 	str	r0, [sp, #4]	; fField4
        3238f0:	e28d1004 	add	r1, sp, #4	; 0x4
        3238f4:	e3a00f4d 	mov	r0, #308	; 0x134
        3238f8:	e1a0200a 	mov	r2, sl
        3238fc:	ebfe7202 	bl	2c010c <AllocatePT2__FiRC6RefVarT2>
        323900:	e585001c 	str	r0, [r5, #28]	; fField28
        323904:	e59d0000 	ldr	r0, [sp]
        323908:	eb627e2b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        32390c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        323910:	ea0008ca 	b	325c40 <TCompiler::Parser(void)+0x2f94>
        323914:	e24dd004 	sub	sp, sp, #4	; 0x4
        323918:	e5910000 	ldr	r0, [r1]
        32391c:	eb627a0a 	bl	1bc214c <$AllocateRefHandle(long)>
        323920:	e58d0000 	str	r0, [sp]
        323924:	e1a0100d 	mov	r1, sp
        323928:	e3a00037 	mov	r0, #55	; 0x37
        32392c:	e2800c01 	add	r0, r0, #256	; 0x100
        323930:	ebfe7013 	bl	2bf984 <AllocatePT1(int, RefVar const &)>
        323934:	e585001c 	str	r0, [r5, #28]	; fField28
        323938:	e59d0000 	ldr	r0, [sp]
        32393c:	ea000864 	b	325ad4 <TCompiler::Parser(void)+0x2e28>
        323940:	e24dd008 	sub	sp, sp, #8	; 0x8
        323944:	e5910000 	ldr	r0, [r1]
        323948:	eb6279ff 	bl	1bc214c <$AllocateRefHandle(long)>
        32394c:	e58d0000 	str	r0, [sp]
        323950:	e1a0a00d 	mov	sl, sp
        323954:	e5950018 	ldr	r0, [r5, #24]	; fField24
        323958:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        32395c:	eb6279fa 	bl	1bc214c <$AllocateRefHandle(long)>
        323960:	e58d0004 	str	r0, [sp, #4]	; fField4
        323964:	e28d1004 	add	r1, sp, #4	; 0x4
        323968:	e3a00035 	mov	r0, #53	; 0x35
        32396c:	e2800c01 	add	r0, r0, #256	; 0x100
        323970:	e1a0200a 	mov	r2, sl
        323974:	ebfe71e4 	bl	2c010c <AllocatePT2__FiRC6RefVarT2>
        323978:	e585001c 	str	r0, [r5, #28]	; fField28
        32397c:	e59d0000 	ldr	r0, [sp]
        323980:	eb627e0d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        323984:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        323988:	ea0008ac 	b	325c40 <TCompiler::Parser(void)+0x2f94>
        32398c:	e24dd008 	sub	sp, sp, #8	; 0x8
        323990:	e5910000 	ldr	r0, [r1]
        323994:	eb6279ec 	bl	1bc214c <$AllocateRefHandle(long)>
        323998:	e58d0000 	str	r0, [sp]
        32399c:	e1a0a00d 	mov	sl, sp
        3239a0:	e5950018 	ldr	r0, [r5, #24]	; fField24
        3239a4:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        3239a8:	eb6279e7 	bl	1bc214c <$AllocateRefHandle(long)>
        3239ac:	e58d0004 	str	r0, [sp, #4]	; fField4
        3239b0:	e28d1004 	add	r1, sp, #4	; 0x4
        3239b4:	e3a00036 	mov	r0, #54	; 0x36
        3239b8:	e2800c01 	add	r0, r0, #256	; 0x100
        3239bc:	e1a0200a 	mov	r2, sl
        3239c0:	ebfe71d1 	bl	2c010c <AllocatePT2__FiRC6RefVarT2>
        3239c4:	e585001c 	str	r0, [r5, #28]	; fField28
        3239c8:	e59d0000 	ldr	r0, [sp]
        3239cc:	eb627dfa 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3239d0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        3239d4:	ea000899 	b	325c40 <TCompiler::Parser(void)+0x2f94>
        3239d8:	e24dd008 	sub	sp, sp, #8	; 0x8
        3239dc:	e5910000 	ldr	r0, [r1]
        3239e0:	eb6279d9 	bl	1bc214c <$AllocateRefHandle(long)>
        3239e4:	e58d0000 	str	r0, [sp]
        3239e8:	e1a0a00d 	mov	sl, sp
        3239ec:	e5950018 	ldr	r0, [r5, #24]	; fField24
        3239f0:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        3239f4:	eb6279d4 	bl	1bc214c <$AllocateRefHandle(long)>
        3239f8:	e58d0004 	str	r0, [sp, #4]	; fField4
        3239fc:	e28d1004 	add	r1, sp, #4	; 0x4
        323a00:	e3a0003c 	mov	r0, #60	; 0x3c
        323a04:	e1a0200a 	mov	r2, sl
        323a08:	ebfe71bf 	bl	2c010c <AllocatePT2__FiRC6RefVarT2>
        323a0c:	e585001c 	str	r0, [r5, #28]	; fField28
        323a10:	e59d0000 	ldr	r0, [sp]
        323a14:	eb627de8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        323a18:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        323a1c:	ea000887 	b	325c40 <TCompiler::Parser(void)+0x2f94>
        323a20:	e24dd008 	sub	sp, sp, #8	; 0x8
        323a24:	e5910000 	ldr	r0, [r1]
        323a28:	eb6279c7 	bl	1bc214c <$AllocateRefHandle(long)>
        323a2c:	e58d0000 	str	r0, [sp]
        323a30:	e1a0a00d 	mov	sl, sp
        323a34:	e5950018 	ldr	r0, [r5, #24]	; fField24
        323a38:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        323a3c:	eb6279c2 	bl	1bc214c <$AllocateRefHandle(long)>
        323a40:	e58d0004 	str	r0, [sp, #4]	; fField4
        323a44:	e28d1004 	add	r1, sp, #4	; 0x4
        323a48:	e3a0003e 	mov	r0, #62	; 0x3e
        323a4c:	e1a0200a 	mov	r2, sl
        323a50:	ebfe71ad 	bl	2c010c <AllocatePT2__FiRC6RefVarT2>
        323a54:	e585001c 	str	r0, [r5, #28]	; fField28
        323a58:	e59d0000 	ldr	r0, [sp]
        323a5c:	eb627dd6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        323a60:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        323a64:	ea000875 	b	325c40 <TCompiler::Parser(void)+0x2f94>
        323a68:	e24dd008 	sub	sp, sp, #8	; 0x8
        323a6c:	e5910000 	ldr	r0, [r1]
        323a70:	eb6279b5 	bl	1bc214c <$AllocateRefHandle(long)>
        323a74:	e58d0000 	str	r0, [sp]
        323a78:	e1a0a00d 	mov	sl, sp
        323a7c:	e5950018 	ldr	r0, [r5, #24]	; fField24
        323a80:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        323a84:	eb6279b0 	bl	1bc214c <$AllocateRefHandle(long)>
        323a88:	e58d0004 	str	r0, [sp, #4]	; fField4
        323a8c:	e28d1004 	add	r1, sp, #4	; 0x4
        323a90:	e3a0002d 	mov	r0, #45	; 0x2d
        323a94:	e2800c01 	add	r0, r0, #256	; 0x100
        323a98:	e1a0200a 	mov	r2, sl
        323a9c:	ebfe719a 	bl	2c010c <AllocatePT2__FiRC6RefVarT2>
        323aa0:	e585001c 	str	r0, [r5, #28]	; fField28
        323aa4:	e59d0000 	ldr	r0, [sp]
        323aa8:	eb627dc3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        323aac:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        323ab0:	ea000862 	b	325c40 <TCompiler::Parser(void)+0x2f94>
        323ab4:	e24dd008 	sub	sp, sp, #8	; 0x8
        323ab8:	e5910000 	ldr	r0, [r1]
        323abc:	eb6279a2 	bl	1bc214c <$AllocateRefHandle(long)>
        323ac0:	e58d0000 	str	r0, [sp]
        323ac4:	e1a0a00d 	mov	sl, sp
        323ac8:	e5950018 	ldr	r0, [r5, #24]	; fField24
        323acc:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        323ad0:	eb62799d 	bl	1bc214c <$AllocateRefHandle(long)>
        323ad4:	e58d0004 	str	r0, [sp, #4]	; fField4
        323ad8:	e28d1004 	add	r1, sp, #4	; 0x4
        323adc:	e3a0002e 	mov	r0, #46	; 0x2e
        323ae0:	e2800c01 	add	r0, r0, #256	; 0x100
        323ae4:	e1a0200a 	mov	r2, sl
        323ae8:	ebfe7187 	bl	2c010c <AllocatePT2__FiRC6RefVarT2>
        323aec:	e585001c 	str	r0, [r5, #28]	; fField28
        323af0:	e59d0000 	ldr	r0, [sp]
        323af4:	eb627db0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        323af8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        323afc:	ea00084f 	b	325c40 <TCompiler::Parser(void)+0x2f94>
        323b00:	e24dd008 	sub	sp, sp, #8	; 0x8
        323b04:	e5910000 	ldr	r0, [r1]
        323b08:	eb62798f 	bl	1bc214c <$AllocateRefHandle(long)>
        323b0c:	e58d0000 	str	r0, [sp]
        323b10:	e1a0a00d 	mov	sl, sp
        323b14:	e5950018 	ldr	r0, [r5, #24]	; fField24
        323b18:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        323b1c:	eb62798a 	bl	1bc214c <$AllocateRefHandle(long)>
        323b20:	e58d0004 	str	r0, [sp, #4]	; fField4
        323b24:	e28d1004 	add	r1, sp, #4	; 0x4
        323b28:	e3a0002f 	mov	r0, #47	; 0x2f
        323b2c:	e2800c01 	add	r0, r0, #256	; 0x100
        323b30:	e1a0200a 	mov	r2, sl
        323b34:	ebfe7174 	bl	2c010c <AllocatePT2__FiRC6RefVarT2>
        323b38:	e585001c 	str	r0, [r5, #28]	; fField28
        323b3c:	e59d0000 	ldr	r0, [sp]
        323b40:	eb627d9d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        323b44:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        323b48:	ea00083c 	b	325c40 <TCompiler::Parser(void)+0x2f94>
        323b4c:	e24dd008 	sub	sp, sp, #8	; 0x8
        323b50:	e5910000 	ldr	r0, [r1]
        323b54:	eb62797c 	bl	1bc214c <$AllocateRefHandle(long)>
        323b58:	e58d0000 	str	r0, [sp]
        323b5c:	e1a0a00d 	mov	sl, sp
        323b60:	e5950018 	ldr	r0, [r5, #24]	; fField24
        323b64:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        323b68:	eb627977 	bl	1bc214c <$AllocateRefHandle(long)>
        323b6c:	e58d0004 	str	r0, [sp, #4]	; fField4
        323b70:	e28d1004 	add	r1, sp, #4	; 0x4
        323b74:	e3a00e13 	mov	r0, #304	; 0x130
        323b78:	e1a0200a 	mov	r2, sl
        323b7c:	ebfe7162 	bl	2c010c <AllocatePT2__FiRC6RefVarT2>
        323b80:	e585001c 	str	r0, [r5, #28]	; fField28
        323b84:	e59d0000 	ldr	r0, [sp]
        323b88:	eb627d8b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        323b8c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        323b90:	ea00082a 	b	325c40 <TCompiler::Parser(void)+0x2f94>
        323b94:	e24dd008 	sub	sp, sp, #8	; 0x8
        323b98:	e5910000 	ldr	r0, [r1]
        323b9c:	eb62796a 	bl	1bc214c <$AllocateRefHandle(long)>
        323ba0:	e58d0000 	str	r0, [sp]
        323ba4:	e1a0a00d 	mov	sl, sp
        323ba8:	e5950018 	ldr	r0, [r5, #24]	; fField24
        323bac:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        323bb0:	eb627965 	bl	1bc214c <$AllocateRefHandle(long)>
        323bb4:	e58d0004 	str	r0, [sp, #4]	; fField4
        323bb8:	e28d1004 	add	r1, sp, #4	; 0x4
        323bbc:	e3a0002a 	mov	r0, #42	; 0x2a
        323bc0:	e2800c01 	add	r0, r0, #256	; 0x100
        323bc4:	e1a0200a 	mov	r2, sl
        323bc8:	ebfe714f 	bl	2c010c <AllocatePT2__FiRC6RefVarT2>
        323bcc:	e585001c 	str	r0, [r5, #28]	; fField28
        323bd0:	e59d0000 	ldr	r0, [sp]
        323bd4:	eb627d78 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        323bd8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        323bdc:	ea000817 	b	325c40 <TCompiler::Parser(void)+0x2f94>
        323be0:	e24dd008 	sub	sp, sp, #8	; 0x8
        323be4:	e5910000 	ldr	r0, [r1]
        323be8:	eb627957 	bl	1bc214c <$AllocateRefHandle(long)>
        323bec:	e58d0000 	str	r0, [sp]
        323bf0:	e1a0a00d 	mov	sl, sp
        323bf4:	e5950018 	ldr	r0, [r5, #24]	; fField24
        323bf8:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        323bfc:	eb627952 	bl	1bc214c <$AllocateRefHandle(long)>
        323c00:	e58d0004 	str	r0, [sp, #4]	; fField4
        323c04:	e28d1004 	add	r1, sp, #4	; 0x4
        323c08:	e3a0002b 	mov	r0, #43	; 0x2b
        323c0c:	e2800c01 	add	r0, r0, #256	; 0x100
        323c10:	e1a0200a 	mov	r2, sl
        323c14:	ebfe713c 	bl	2c010c <AllocatePT2__FiRC6RefVarT2>
        323c18:	e585001c 	str	r0, [r5, #28]	; fField28
        323c1c:	e59d0000 	ldr	r0, [sp]
        323c20:	eb627d65 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        323c24:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        323c28:	ea000804 	b	325c40 <TCompiler::Parser(void)+0x2f94>
        323c2c:	e24dd004 	sub	sp, sp, #4	; 0x4
        323c30:	e5910000 	ldr	r0, [r1]
        323c34:	eb627944 	bl	1bc214c <$AllocateRefHandle(long)>
        323c38:	e58d0000 	str	r0, [sp]
        323c3c:	e1a0100d 	mov	r1, sp
        323c40:	e3a00f4b 	mov	r0, #300	; 0x12c
        323c44:	ebfe6f4e 	bl	2bf984 <AllocatePT1(int, RefVar const &)>
        323c48:	e585001c 	str	r0, [r5, #28]	; fField28
        323c4c:	e59d0000 	ldr	r0, [sp]
        323c50:	ea00079f 	b	325ad4 <TCompiler::Parser(void)+0x2e28>
        323c54:	e24dd004 	sub	sp, sp, #4	; 0x4
        323c58:	e5310004 	ldr	r0, [r1, -#4]!	; fField4
        323c5c:	eb62793a 	bl	1bc214c <$AllocateRefHandle(long)>
        323c60:	e58d0000 	str	r0, [sp]
        323c64:	e1a0100d 	mov	r1, sp
        323c68:	e3a00031 	mov	r0, #49	; 0x31
        323c6c:	e2800c01 	add	r0, r0, #256	; 0x100
        323c70:	ebfe6f43 	bl	2bf984 <AllocatePT1(int, RefVar const &)>
        323c74:	e585001c 	str	r0, [r5, #28]	; fField28
        323c78:	e59d0000 	ldr	r0, [sp]
        323c7c:	ea000794 	b	325ad4 <TCompiler::Parser(void)+0x2e28>
        323c80:	e24dd004 	sub	sp, sp, #4	; 0x4
        323c84:	e5310004 	ldr	r0, [r1, -#4]!	; fField4
        323c88:	eb62792f 	bl	1bc214c <$AllocateRefHandle(long)>
        323c8c:	e58d0000 	str	r0, [sp]
        323c90:	e1a0100d 	mov	r1, sp
        323c94:	e3a00031 	mov	r0, #49	; 0x31
        323c98:	e2800c01 	add	r0, r0, #256	; 0x100
        323c9c:	ebfe6f38 	bl	2bf984 <AllocatePT1(int, RefVar const &)>
        323ca0:	e585001c 	str	r0, [r5, #28]	; fField28
        323ca4:	e59d0000 	ldr	r0, [sp]
        323ca8:	ea000789 	b	325ad4 <TCompiler::Parser(void)+0x2e28>
        323cac:	e24dd004 	sub	sp, sp, #4	; 0x4
        323cb0:	e5910000 	ldr	r0, [r1]
        323cb4:	eb627924 	bl	1bc214c <$AllocateRefHandle(long)>
        323cb8:	e58d0000 	str	r0, [sp]
        323cbc:	e1a0100d 	mov	r1, sp
        323cc0:	e3a00002 	mov	r0, #2	; 0x2
        323cc4:	e2800c01 	add	r0, r0, #256	; 0x100
        323cc8:	ebfe6f2d 	bl	2bf984 <AllocatePT1(int, RefVar const &)>
        323ccc:	e585001c 	str	r0, [r5, #28]	; fField28
        323cd0:	e59d0000 	ldr	r0, [sp]
        323cd4:	ea00077e 	b	325ad4 <TCompiler::Parser(void)+0x2e28>
        323cd8:	e24dd004 	sub	sp, sp, #4	; 0x4
        323cdc:	e5910000 	ldr	r0, [r1]
        323ce0:	eb627919 	bl	1bc214c <$AllocateRefHandle(long)>
        323ce4:	e58d0000 	str	r0, [sp]
        323ce8:	e1a0100d 	mov	r1, sp
        323cec:	e3a00002 	mov	r0, #2	; 0x2
        323cf0:	e2800c01 	add	r0, r0, #256	; 0x100
        323cf4:	ebfe6f22 	bl	2bf984 <AllocatePT1(int, RefVar const &)>
        323cf8:	e585001c 	str	r0, [r5, #28]	; fField28
        323cfc:	e59d0000 	ldr	r0, [sp]
        323d00:	ea000773 	b	325ad4 <TCompiler::Parser(void)+0x2e28>
        323d04:	e24dd004 	sub	sp, sp, #4	; 0x4
        323d08:	e5910000 	ldr	r0, [r1]
        323d0c:	eb62790e 	bl	1bc214c <$AllocateRefHandle(long)>
        323d10:	e58d0000 	str	r0, [sp]
        323d14:	e1a0100d 	mov	r1, sp
        323d18:	e3a00002 	mov	r0, #2	; 0x2
        323d1c:	e2800c01 	add	r0, r0, #256	; 0x100
        323d20:	ebfe6f17 	bl	2bf984 <AllocatePT1(int, RefVar const &)>
        323d24:	e585001c 	str	r0, [r5, #28]	; fField28
        323d28:	e59d0000 	ldr	r0, [sp]
        323d2c:	ea000768 	b	325ad4 <TCompiler::Parser(void)+0x2e28>
        323d30:	e24dd004 	sub	sp, sp, #4	; 0x4
        323d34:	e5910000 	ldr	r0, [r1]
        323d38:	eb627903 	bl	1bc214c <$AllocateRefHandle(long)>
        323d3c:	e58d0000 	str	r0, [sp]
        323d40:	e1a0100d 	mov	r1, sp
        323d44:	e3a00002 	mov	r0, #2	; 0x2
        323d48:	e2800c01 	add	r0, r0, #256	; 0x100
        323d4c:	ebfe6f0c 	bl	2bf984 <AllocatePT1(int, RefVar const &)>
        323d50:	e585001c 	str	r0, [r5, #28]	; fField28
        323d54:	e59d0000 	ldr	r0, [sp]
        323d58:	ea00075d 	b	325ad4 <TCompiler::Parser(void)+0x2e28>
        323d5c:	e24dd004 	sub	sp, sp, #4	; 0x4
        323d60:	e5910000 	ldr	r0, [r1]
        323d64:	eb6278f8 	bl	1bc214c <$AllocateRefHandle(long)>
        323d68:	e58d0000 	str	r0, [sp]
        323d6c:	e1a0100d 	mov	r1, sp
        323d70:	e3a00002 	mov	r0, #2	; 0x2
        323d74:	e2800c01 	add	r0, r0, #256	; 0x100
        323d78:	ebfe6f01 	bl	2bf984 <AllocatePT1(int, RefVar const &)>
        323d7c:	e585001c 	str	r0, [r5, #28]	; fField28
        323d80:	e59d0000 	ldr	r0, [sp]
        323d84:	ea000752 	b	325ad4 <TCompiler::Parser(void)+0x2e28>
        323d88:	e24dd004 	sub	sp, sp, #4	; 0x4
        323d8c:	e5910000 	ldr	r0, [r1]
        323d90:	eb6278ed 	bl	1bc214c <$AllocateRefHandle(long)>
        323d94:	e58d0000 	str	r0, [sp]
        323d98:	e1a0100d 	mov	r1, sp
        323d9c:	e3a00003 	mov	r0, #3	; 0x3
        323da0:	e2800c01 	add	r0, r0, #256	; 0x100
        323da4:	ebfe6ef6 	bl	2bf984 <AllocatePT1(int, RefVar const &)>
        323da8:	e585001c 	str	r0, [r5, #28]	; fField28
        323dac:	e59d0000 	ldr	r0, [sp]
        323db0:	ea000747 	b	325ad4 <TCompiler::Parser(void)+0x2e28>
        323db4:	e24dd008 	sub	sp, sp, #8	; 0x8
        323db8:	e5310004 	ldr	r0, [r1, -#4]!	; fField4
        323dbc:	eb6278e2 	bl	1bc214c <$AllocateRefHandle(long)>
        323dc0:	e58d0000 	str	r0, [sp]
        323dc4:	e1a0a00d 	mov	sl, sp
        323dc8:	e5950018 	ldr	r0, [r5, #24]	; fField24
        323dcc:	e5100010 	ldr	r0, [r0, -#16]
        323dd0:	eb6278dd 	bl	1bc214c <$AllocateRefHandle(long)>
        323dd4:	e58d0004 	str	r0, [sp, #4]	; fField4
        323dd8:	e28d1004 	add	r1, sp, #4	; 0x4
        323ddc:	e3a0002e 	mov	r0, #46	; 0x2e
        323de0:	e1a0200a 	mov	r2, sl
        323de4:	ebfe70c8 	bl	2c010c <AllocatePT2__FiRC6RefVarT2>
        323de8:	e585001c 	str	r0, [r5, #28]	; fField28
        323dec:	e59d0000 	ldr	r0, [sp]
        323df0:	eb627cf1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        323df4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        323df8:	ea000790 	b	325c40 <TCompiler::Parser(void)+0x2f94>
        323dfc:	e24dd00c 	sub	sp, sp, #12	; 0xc
        323e00:	e5910000 	ldr	r0, [r1]
        323e04:	eb6278d0 	bl	1bc214c <$AllocateRefHandle(long)>
        323e08:	e58d0008 	str	r0, [sp, #8]	; fField8
        323e0c:	e28d1008 	add	r1, sp, #8	; 0x8
        323e10:	e3a00002 	mov	r0, #2	; 0x2
        323e14:	e2800c01 	add	r0, r0, #256	; 0x100
        323e18:	ebfe6ed9 	bl	2bf984 <AllocatePT1(int, RefVar const &)>
        323e1c:	eb6278ca 	bl	1bc214c <$AllocateRefHandle(long)>
        323e20:	e58d0000 	str	r0, [sp]
        323e24:	e1a0a00d 	mov	sl, sp
        323e28:	e5950018 	ldr	r0, [r5, #24]	; fField24
        323e2c:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        323e30:	eb6278c5 	bl	1bc214c <$AllocateRefHandle(long)>
        323e34:	e58d0004 	str	r0, [sp, #4]	; fField4
        323e38:	e28d1004 	add	r1, sp, #4	; 0x4
        323e3c:	e3a0002e 	mov	r0, #46	; 0x2e
        323e40:	e1a0200a 	mov	r2, sl
        323e44:	ebfe70b0 	bl	2c010c <AllocatePT2__FiRC6RefVarT2>
        323e48:	e585001c 	str	r0, [r5, #28]	; fField28
        323e4c:	e59d0000 	ldr	r0, [sp]
        323e50:	eb627cd9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        323e54:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        323e58:	eb627cd7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        323e5c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        323e60:	ea000793 	b	325cb4 <TCompiler::Parser(void)+0x3008>
        323e64:	e24dd008 	sub	sp, sp, #8	; 0x8
        323e68:	e5310004 	ldr	r0, [r1, -#4]!	; fField4
        323e6c:	eb6278b6 	bl	1bc214c <$AllocateRefHandle(long)>
        323e70:	e58d0000 	str	r0, [sp]
        323e74:	e1a0a00d 	mov	sl, sp
        323e78:	e5950018 	ldr	r0, [r5, #24]	; fField24
        323e7c:	e510000c 	ldr	r0, [r0, -#12]	; fField12
        323e80:	eb6278b1 	bl	1bc214c <$AllocateRefHandle(long)>
        323e84:	e58d0004 	str	r0, [sp, #4]	; fField4
        323e88:	e28d1004 	add	r1, sp, #4	; 0x4
        323e8c:	e3a0005b 	mov	r0, #91	; 0x5b
        323e90:	e1a0200a 	mov	r2, sl
        323e94:	ebfe709c 	bl	2c010c <AllocatePT2__FiRC6RefVarT2>
        323e98:	e585001c 	str	r0, [r5, #28]	; fField28
        323e9c:	e59d0000 	ldr	r0, [sp]
        323ea0:	eb627cc5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        323ea4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        323ea8:	ea000764 	b	325c40 <TCompiler::Parser(void)+0x2f94>
        323eac:	e24dd008 	sub	sp, sp, #8	; 0x8
        323eb0:	e5910000 	ldr	r0, [r1]
        323eb4:	eb6278a4 	bl	1bc214c <$AllocateRefHandle(long)>
        323eb8:	e58d0000 	str	r0, [sp]
        323ebc:	e1a0a00d 	mov	sl, sp
        323ec0:	e5950018 	ldr	r0, [r5, #24]	; fField24
        323ec4:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        323ec8:	eb62789f 	bl	1bc214c <$AllocateRefHandle(long)>
        323ecc:	e58d0004 	str	r0, [sp, #4]	; fField4
        323ed0:	e28d1004 	add	r1, sp, #4	; 0x4
        323ed4:	e3a00029 	mov	r0, #41	; 0x29
        323ed8:	e2800c01 	add	r0, r0, #256	; 0x100
        323edc:	e1a0200a 	mov	r2, sl
        323ee0:	ebfe7089 	bl	2c010c <AllocatePT2__FiRC6RefVarT2>
        323ee4:	e585001c 	str	r0, [r5, #28]	; fField28
        323ee8:	e59d0000 	ldr	r0, [sp]
        323eec:	eb627cb2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        323ef0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        323ef4:	ea000751 	b	325c40 <TCompiler::Parser(void)+0x2f94>
        323ef8:	e24dd008 	sub	sp, sp, #8	; 0x8
        323efc:	e5910000 	ldr	r0, [r1]
        323f00:	e3a01001 	mov	r1, #1	; 0x1
        323f04:	eb6280d2 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        323f08:	eb62788f 	bl	1bc214c <$AllocateRefHandle(long)>
        323f0c:	e58d0000 	str	r0, [sp]
        323f10:	e1a0a00d 	mov	sl, sp
        323f14:	e5950018 	ldr	r0, [r5, #24]	; fField24
        323f18:	e5900000 	ldr	r0, [r0]
        323f1c:	e3a01000 	mov	r1, #0	; 0x0
        323f20:	eb6280cb 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        323f24:	eb627888 	bl	1bc214c <$AllocateRefHandle(long)>
        323f28:	e58d0004 	str	r0, [sp, #4]	; fField4
        323f2c:	e28d1004 	add	r1, sp, #4	; 0x4
        323f30:	e3a00015 	mov	r0, #21	; 0x15
        323f34:	e2800c01 	add	r0, r0, #256	; 0x100
        323f38:	e1a0200a 	mov	r2, sl
        323f3c:	ebfe7072 	bl	2c010c <AllocatePT2__FiRC6RefVarT2>
        323f40:	e585001c 	str	r0, [r5, #28]	; fField28
        323f44:	e59d0000 	ldr	r0, [sp]
        323f48:	eb627c9b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        323f4c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        323f50:	ea00073a 	b	325c40 <TCompiler::Parser(void)+0x2f94>
        323f54:	e24dd004 	sub	sp, sp, #4	; 0x4
        323f58:	e5910000 	ldr	r0, [r1]
        323f5c:	eb62787a 	bl	1bc214c <$AllocateRefHandle(long)>
        323f60:	e58d0000 	str	r0, [sp]
        323f64:	e1a0100d 	mov	r1, sp
        323f68:	e3a0000d 	mov	r0, #13	; 0xd
        323f6c:	e2800c01 	add	r0, r0, #256	; 0x100
        323f70:	ebfe6e83 	bl	2bf984 <AllocatePT1(int, RefVar const &)>
        323f74:	e585001c 	str	r0, [r5, #28]	; fField28
        323f78:	e59d0000 	ldr	r0, [sp]
        323f7c:	ea0006d4 	b	325ad4 <TCompiler::Parser(void)+0x2e28>
        323f80:	e24dd00c 	sub	sp, sp, #12	; 0xc
        323f84:	e3a00002 	mov	r0, #2	; 0x2
        323f88:	eb62786f 	bl	1bc214c <$AllocateRefHandle(long)>
        323f8c:	e58d0008 	str	r0, [sp, #8]	; fField8
        323f90:	e28d1008 	add	r1, sp, #8	; 0x8
        323f94:	e3a00002 	mov	r0, #2	; 0x2
        323f98:	e2800c01 	add	r0, r0, #256	; 0x100
        323f9c:	ebfe6e78 	bl	2bf984 <AllocatePT1(int, RefVar const &)>
        323fa0:	eb627869 	bl	1bc214c <$AllocateRefHandle(long)>
        323fa4:	e58d0000 	str	r0, [sp]
        323fa8:	e1a0a00d 	mov	sl, sp
        323fac:	e5950018 	ldr	r0, [r5, #24]	; fField24
        323fb0:	e5900000 	ldr	r0, [r0]
        323fb4:	eb627864 	bl	1bc214c <$AllocateRefHandle(long)>
        323fb8:	e58d0004 	str	r0, [sp, #4]	; fField4
        323fbc:	e28d1004 	add	r1, sp, #4	; 0x4
        323fc0:	e3a0000b 	mov	r0, #11	; 0xb
        323fc4:	e2800c01 	add	r0, r0, #256	; 0x100
        323fc8:	e1a0200a 	mov	r2, sl
        323fcc:	ebfe704e 	bl	2c010c <AllocatePT2__FiRC6RefVarT2>
        323fd0:	e585001c 	str	r0, [r5, #28]	; fField28
        323fd4:	e59d0000 	ldr	r0, [sp]
        323fd8:	eb627c77 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        323fdc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        323fe0:	eb627c75 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        323fe4:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        323fe8:	ea000731 	b	325cb4 <TCompiler::Parser(void)+0x3008>
        323fec:	e24dd008 	sub	sp, sp, #8	; 0x8
        323ff0:	e5910000 	ldr	r0, [r1]
        323ff4:	eb627854 	bl	1bc214c <$AllocateRefHandle(long)>
        323ff8:	e58d0000 	str	r0, [sp]
        323ffc:	e1a0a00d 	mov	sl, sp
        324000:	e5950018 	ldr	r0, [r5, #24]	; fField24
        324004:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        324008:	eb62784f 	bl	1bc214c <$AllocateRefHandle(long)>
        32400c:	e58d0004 	str	r0, [sp, #4]	; fField4
        324010:	e28d1004 	add	r1, sp, #4	; 0x4
        324014:	e3a0000b 	mov	r0, #11	; 0xb
        324018:	e2800c01 	add	r0, r0, #256	; 0x100
        32401c:	e1a0200a 	mov	r2, sl
        324020:	ebfe7039 	bl	2c010c <AllocatePT2__FiRC6RefVarT2>
        324024:	e585001c 	str	r0, [r5, #28]	; fField28
        324028:	e59d0000 	ldr	r0, [sp]
        32402c:	eb627c62 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324030:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        324034:	ea000701 	b	325c40 <TCompiler::Parser(void)+0x2f94>
        324038:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        32403c:	e1a00006 	mov	r0, r6
        324040:	e3a01002 	mov	r1, #2	; 0x2
        324044:	eb62783b 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        324048:	eb62783f 	bl	1bc214c <$AllocateRefHandle(long)>
        32404c:	e58d0018 	str	r0, [sp, #24]	; fField24
        324050:	e590a000 	ldr	sl, [r0]
        324054:	e5950018 	ldr	r0, [r5, #24]	; fField24
        324058:	e5100010 	ldr	r0, [r0, -#16]
        32405c:	eb62783a 	bl	1bc214c <$AllocateRefHandle(long)>
        324060:	e58d0000 	str	r0, [sp]
        324064:	e1a0100d 	mov	r1, sp
        324068:	e3a00002 	mov	r0, #2	; 0x2
        32406c:	e2800c01 	add	r0, r0, #256	; 0x100
        324070:	ebfe6e43 	bl	2bf984 <AllocatePT1(int, RefVar const &)>
        324074:	e1a02000 	mov	r2, r0
        324078:	e3a01000 	mov	r1, #0	; 0x0
        32407c:	e1a0000a 	mov	r0, sl
        324080:	eb6288b4 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        324084:	e59d0000 	ldr	r0, [sp]
        324088:	eb627c4b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        32408c:	e3a01000 	mov	r1, #0	; 0x0
        324090:	e24dd004 	sub	sp, sp, #4	; 0x4
        324094:	e59d001c 	ldr	r0, [sp, #28]	; fField28
        324098:	e5900000 	ldr	r0, [r0]
        32409c:	e3a0a002 	mov	sl, #2	; 0x2
        3240a0:	e58d0000 	str	r0, [sp]
        3240a4:	e1a0000a 	mov	r0, sl
        3240a8:	eb627827 	bl	1bc214c <$AllocateRefHandle(long)>
        3240ac:	e58d0008 	str	r0, [sp, #8]	; fField8
        3240b0:	e28d3008 	add	r3, sp, #8	; 0x8
        3240b4:	e92d0008 	stmdb	sp!, {r3}
        3240b8:	e5950018 	ldr	r0, [r5, #24]	; fField24
        3240bc:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        3240c0:	e3a01001 	mov	r1, #1	; 0x1
        3240c4:	eb628062 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        3240c8:	eb62781f 	bl	1bc214c <$AllocateRefHandle(long)>
        3240cc:	e58d0010 	str	r0, [sp, #16]
        3240d0:	e28d3010 	add	r3, sp, #16	; 0x10
        3240d4:	e92d0008 	stmdb	sp!, {r3}
        3240d8:	e1a0000a 	mov	r0, sl
        3240dc:	eb62781a 	bl	1bc214c <$AllocateRefHandle(long)>
        3240e0:	e58d0018 	str	r0, [sp, #24]	; fField24
        3240e4:	e28d3018 	add	r3, sp, #24	; 0x18
        3240e8:	e52d3004 	str	r3, [sp, -#4]!	; fField4
        3240ec:	e5950018 	ldr	r0, [r5, #24]	; fField24
        3240f0:	e5900000 	ldr	r0, [r0]
        3240f4:	eb627814 	bl	1bc214c <$AllocateRefHandle(long)>
        3240f8:	e58d0020 	str	r0, [sp, #32]
        3240fc:	e28da020 	add	sl, sp, #32	; 0x20
        324100:	e5950018 	ldr	r0, [r5, #24]	; fField24
        324104:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        324108:	e3a01000 	mov	r1, #0	; 0x0
        32410c:	eb628050 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        324110:	eb62780d 	bl	1bc214c <$AllocateRefHandle(long)>
        324114:	e58d0024 	str	r0, [sp, #36]	; fField36
        324118:	e28d1024 	add	r1, sp, #36	; 0x24
        32411c:	e3a00009 	mov	r0, #9	; 0x9
        324120:	e2800c01 	add	r0, r0, #256	; 0x100
        324124:	e1a0200a 	mov	r2, sl
        324128:	e49d3004 	ldr	r3, [sp], #4	; fField4
        32412c:	ebfe7717 	bl	2c1d90 <AllocatePT5__FiRC6RefVarN42>
        324130:	e1a02000 	mov	r2, r0
        324134:	e3a01001 	mov	r1, #1	; 0x1
        324138:	e5bd0008 	ldr	r0, [sp, #8]!	; fField8
        32413c:	eb628885 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        324140:	e28dd004 	add	sp, sp, #4	; 0x4
        324144:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        324148:	eb627c1b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        32414c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        324150:	eb627c19 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324154:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        324158:	eb627c17 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        32415c:	e59d0010 	ldr	r0, [sp, #16]
        324160:	eb627c15 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324164:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        324168:	eb627c13 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        32416c:	e28d2018 	add	r2, sp, #24	; 0x18
        324170:	e3a0001e 	mov	r0, #30	; 0x1e
        324174:	e2800c01 	add	r0, r0, #256	; 0x100
        324178:	e59d1038 	ldr	r1, [sp, #56]
        32417c:	ebfe6fe2 	bl	2c010c <AllocatePT2__FiRC6RefVarT2>
        324180:	e585001c 	str	r0, [r5, #28]	; fField28
        324184:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        324188:	ea000053 	b	3242dc <TCompiler::Parser(void)+0x1630>
        32418c:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        324190:	e1a00006 	mov	r0, r6
        324194:	e3a01002 	mov	r1, #2	; 0x2
        324198:	eb6277e6 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        32419c:	eb6277ea 	bl	1bc214c <$AllocateRefHandle(long)>
        3241a0:	e58d0018 	str	r0, [sp, #24]	; fField24
        3241a4:	e590a000 	ldr	sl, [r0]
        3241a8:	e5950018 	ldr	r0, [r5, #24]	; fField24
        3241ac:	e5100010 	ldr	r0, [r0, -#16]
        3241b0:	eb6277e5 	bl	1bc214c <$AllocateRefHandle(long)>
        3241b4:	e58d0000 	str	r0, [sp]
        3241b8:	e1a0100d 	mov	r1, sp
        3241bc:	e3a00002 	mov	r0, #2	; 0x2
        3241c0:	e2800c01 	add	r0, r0, #256	; 0x100
        3241c4:	ebfe6dee 	bl	2bf984 <AllocatePT1(int, RefVar const &)>
        3241c8:	e1a02000 	mov	r2, r0
        3241cc:	e3a01000 	mov	r1, #0	; 0x0
        3241d0:	e1a0000a 	mov	r0, sl
        3241d4:	eb62885f 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        3241d8:	e59d0000 	ldr	r0, [sp]
        3241dc:	eb627bf6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3241e0:	e3a01000 	mov	r1, #0	; 0x0
        3241e4:	e24dd004 	sub	sp, sp, #4	; 0x4
        3241e8:	e59d001c 	ldr	r0, [sp, #28]	; fField28
        3241ec:	e5900000 	ldr	r0, [r0]
        3241f0:	e3a0a002 	mov	sl, #2	; 0x2
        3241f4:	e58d0000 	str	r0, [sp]
        3241f8:	e1a0000a 	mov	r0, sl
        3241fc:	eb6277d2 	bl	1bc214c <$AllocateRefHandle(long)>
        324200:	e58d0008 	str	r0, [sp, #8]	; fField8
        324204:	e28d3008 	add	r3, sp, #8	; 0x8
        324208:	e92d0008 	stmdb	sp!, {r3}
        32420c:	e5950018 	ldr	r0, [r5, #24]	; fField24
        324210:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        324214:	e3a01001 	mov	r1, #1	; 0x1
        324218:	eb62800d 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        32421c:	eb6277ca 	bl	1bc214c <$AllocateRefHandle(long)>
        324220:	e58d0010 	str	r0, [sp, #16]
        324224:	e28d3010 	add	r3, sp, #16	; 0x10
        324228:	e92d0008 	stmdb	sp!, {r3}
        32422c:	e1a0000a 	mov	r0, sl
        324230:	eb6277c5 	bl	1bc214c <$AllocateRefHandle(long)>
        324234:	e58d0018 	str	r0, [sp, #24]	; fField24
        324238:	e28d3018 	add	r3, sp, #24	; 0x18
        32423c:	e52d3004 	str	r3, [sp, -#4]!	; fField4
        324240:	e5950018 	ldr	r0, [r5, #24]	; fField24
        324244:	e5900000 	ldr	r0, [r0]
        324248:	eb6277bf 	bl	1bc214c <$AllocateRefHandle(long)>
        32424c:	e58d0020 	str	r0, [sp, #32]
        324250:	e28da020 	add	sl, sp, #32	; 0x20
        324254:	e5950018 	ldr	r0, [r5, #24]	; fField24
        324258:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        32425c:	e3a01000 	mov	r1, #0	; 0x0
        324260:	eb627ffb 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        324264:	eb6277b8 	bl	1bc214c <$AllocateRefHandle(long)>
        324268:	e58d0024 	str	r0, [sp, #36]	; fField36
        32426c:	e28d1024 	add	r1, sp, #36	; 0x24
        324270:	e3a00009 	mov	r0, #9	; 0x9
        324274:	e2800c01 	add	r0, r0, #256	; 0x100
        324278:	e1a0200a 	mov	r2, sl
        32427c:	e49d3004 	ldr	r3, [sp], #4	; fField4
        324280:	ebfe76c2 	bl	2c1d90 <AllocatePT5__FiRC6RefVarN42>
        324284:	e1a02000 	mov	r2, r0
        324288:	e3a01001 	mov	r1, #1	; 0x1
        32428c:	e5bd0008 	ldr	r0, [sp, #8]!	; fField8
        324290:	eb628830 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        324294:	e28dd004 	add	sp, sp, #4	; 0x4
        324298:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        32429c:	eb627bc6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3242a0:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        3242a4:	eb627bc4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3242a8:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        3242ac:	eb627bc2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3242b0:	e59d0010 	ldr	r0, [sp, #16]
        3242b4:	eb627bc0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3242b8:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        3242bc:	eb627bbe 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3242c0:	e28d2018 	add	r2, sp, #24	; 0x18
        3242c4:	e3a0001e 	mov	r0, #30	; 0x1e
        3242c8:	e2800c01 	add	r0, r0, #256	; 0x100
        3242cc:	e59d1038 	ldr	r1, [sp, #56]
        3242d0:	ebfe6f8d 	bl	2c010c <AllocatePT2__FiRC6RefVarT2>
        3242d4:	e585001c 	str	r0, [r5, #28]	; fField28
        3242d8:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        3242dc:	eb627bb6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3242e0:	e28dd01c 	add	sp, sp, #28	; 0x1c
        3242e4:	ea000674 	b	325cbc <TCompiler::Parser(void)+0x3010>
        3242e8:	e24dd004 	sub	sp, sp, #4	; 0x4
        3242ec:	e5910000 	ldr	r0, [r1]
        3242f0:	eb627795 	bl	1bc214c <$AllocateRefHandle(long)>
        3242f4:	e58d0000 	str	r0, [sp]
        3242f8:	e1a0100d 	mov	r1, sp
        3242fc:	e3a00027 	mov	r0, #39	; 0x27
        324300:	e2800c01 	add	r0, r0, #256	; 0x100
        324304:	ebfe6d9e 	bl	2bf984 <AllocatePT1(int, RefVar const &)>
        324308:	e585001c 	str	r0, [r5, #28]	; fField28
        32430c:	e59d0000 	ldr	r0, [sp]
        324310:	ea0005ef 	b	325ad4 <TCompiler::Parser(void)+0x2e28>
        324314:	e24dd008 	sub	sp, sp, #8	; 0x8
        324318:	e3a00002 	mov	r0, #2	; 0x2
        32431c:	eb62778a 	bl	1bc214c <$AllocateRefHandle(long)>
        324320:	e58d0004 	str	r0, [sp, #4]	; fField4
        324324:	e28d1004 	add	r1, sp, #4	; 0x4
        324328:	e3a00002 	mov	r0, #2	; 0x2
        32432c:	e2800c01 	add	r0, r0, #256	; 0x100
        324330:	ebfe6d93 	bl	2bf984 <AllocatePT1(int, RefVar const &)>
        324334:	eb627784 	bl	1bc214c <$AllocateRefHandle(long)>
        324338:	e58d0000 	str	r0, [sp]
        32433c:	e1a0100d 	mov	r1, sp
        324340:	e3a00027 	mov	r0, #39	; 0x27
        324344:	e2800c01 	add	r0, r0, #256	; 0x100
        324348:	ebfe6d8d 	bl	2bf984 <AllocatePT1(int, RefVar const &)>
        32434c:	e585001c 	str	r0, [r5, #28]	; fField28
        324350:	e59d0000 	ldr	r0, [sp]
        324354:	eb627b98 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324358:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        32435c:	ea000637 	b	325c40 <TCompiler::Parser(void)+0x2f94>
        324360:	e24dd004 	sub	sp, sp, #4	; 0x4
        324364:	e5910000 	ldr	r0, [r1]
        324368:	eb627777 	bl	1bc214c <$AllocateRefHandle(long)>
        32436c:	e58d0000 	str	r0, [sp]
        324370:	e1a0100d 	mov	r1, sp
        324374:	e3a00026 	mov	r0, #38	; 0x26
        324378:	e2800c01 	add	r0, r0, #256	; 0x100
        32437c:	ebfe6d80 	bl	2bf984 <AllocatePT1(int, RefVar const &)>
        324380:	e585001c 	str	r0, [r5, #28]	; fField28
        324384:	e59d0000 	ldr	r0, [sp]
        324388:	ea0005d1 	b	325ad4 <TCompiler::Parser(void)+0x2e28>
        32438c:	e24dd008 	sub	sp, sp, #8	; 0x8
        324390:	e3a00002 	mov	r0, #2	; 0x2
        324394:	eb62776c 	bl	1bc214c <$AllocateRefHandle(long)>
        324398:	e58d0004 	str	r0, [sp, #4]	; fField4
        32439c:	e28d1004 	add	r1, sp, #4	; 0x4
        3243a0:	e3a00002 	mov	r0, #2	; 0x2
        3243a4:	e2800c01 	add	r0, r0, #256	; 0x100
        3243a8:	ebfe6d75 	bl	2bf984 <AllocatePT1(int, RefVar const &)>
        3243ac:	eb627766 	bl	1bc214c <$AllocateRefHandle(long)>
        3243b0:	e58d0000 	str	r0, [sp]
        3243b4:	e1a0100d 	mov	r1, sp
        3243b8:	e3a00026 	mov	r0, #38	; 0x26
        3243bc:	e2800c01 	add	r0, r0, #256	; 0x100
        3243c0:	ebfe6d6f 	bl	2bf984 <AllocatePT1(int, RefVar const &)>
        3243c4:	e585001c 	str	r0, [r5, #28]	; fField28
        3243c8:	e59d0000 	ldr	r0, [sp]
        3243cc:	eb627b7a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3243d0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        3243d4:	ea000619 	b	325c40 <TCompiler::Parser(void)+0x2f94>
        3243d8:	e24dd008 	sub	sp, sp, #8	; 0x8
        3243dc:	e5310004 	ldr	r0, [r1, -#4]!	; fField4
        3243e0:	eb627759 	bl	1bc214c <$AllocateRefHandle(long)>
        3243e4:	e58d0000 	str	r0, [sp]
        3243e8:	e1a0a00d 	mov	sl, sp
        3243ec:	e5950018 	ldr	r0, [r5, #24]	; fField24
        3243f0:	e510000c 	ldr	r0, [r0, -#12]	; fField12
        3243f4:	eb627754 	bl	1bc214c <$AllocateRefHandle(long)>
        3243f8:	e58d0004 	str	r0, [sp, #4]	; fField4
        3243fc:	e28d1004 	add	r1, sp, #4	; 0x4
        324400:	e3a0001e 	mov	r0, #30	; 0x1e
        324404:	e2800c01 	add	r0, r0, #256	; 0x100
        324408:	e1a0200a 	mov	r2, sl
        32440c:	ebfe6f3e 	bl	2c010c <AllocatePT2__FiRC6RefVarT2>
        324410:	e585001c 	str	r0, [r5, #28]	; fField28
        324414:	e59d0000 	ldr	r0, [sp]
        324418:	eb627b67 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        32441c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        324420:	ea000606 	b	325c40 <TCompiler::Parser(void)+0x2f94>
        324424:	e24dd008 	sub	sp, sp, #8	; 0x8
        324428:	e5310004 	ldr	r0, [r1, -#4]!	; fField4
        32442c:	eb627746 	bl	1bc214c <$AllocateRefHandle(long)>
        324430:	e58d0000 	str	r0, [sp]
        324434:	e1a0a00d 	mov	sl, sp
        324438:	e5950018 	ldr	r0, [r5, #24]	; fField24
        32443c:	e5100010 	ldr	r0, [r0, -#16]
        324440:	eb627741 	bl	1bc214c <$AllocateRefHandle(long)>
        324444:	e58d0004 	str	r0, [sp, #4]	; fField4
        324448:	e28d1004 	add	r1, sp, #4	; 0x4
        32444c:	e3a00e12 	mov	r0, #288	; 0x120
        324450:	e1a0200a 	mov	r2, sl
        324454:	ebfe6f2c 	bl	2c010c <AllocatePT2__FiRC6RefVarT2>
        324458:	e585001c 	str	r0, [r5, #28]	; fField28
        32445c:	e59d0000 	ldr	r0, [sp]
        324460:	eb627b55 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324464:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        324468:	ea0005f4 	b	325c40 <TCompiler::Parser(void)+0x2f94>
        32446c:	e24dd008 	sub	sp, sp, #8	; 0x8
        324470:	e5310008 	ldr	r0, [r1, -#8]!	; fField8
        324474:	eb627734 	bl	1bc214c <$AllocateRefHandle(long)>
        324478:	e58d0000 	str	r0, [sp]
        32447c:	e1a0a00d 	mov	sl, sp
        324480:	e5950018 	ldr	r0, [r5, #24]	; fField24
        324484:	e5900000 	ldr	r0, [r0]
        324488:	eb62772f 	bl	1bc214c <$AllocateRefHandle(long)>
        32448c:	e58d0004 	str	r0, [sp, #4]	; fField4
        324490:	e28d1004 	add	r1, sp, #4	; 0x4
        324494:	e3a0003a 	mov	r0, #58	; 0x3a
        324498:	e1a0200a 	mov	r2, sl
        32449c:	ebfe6f1a 	bl	2c010c <AllocatePT2__FiRC6RefVarT2>
        3244a0:	e585001c 	str	r0, [r5, #28]	; fField28
        3244a4:	e59d0000 	ldr	r0, [sp]
        3244a8:	eb627b43 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3244ac:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        3244b0:	ea0005e2 	b	325c40 <TCompiler::Parser(void)+0x2f94>
        3244b4:	e24dd00c 	sub	sp, sp, #12	; 0xc
        3244b8:	e3a00002 	mov	r0, #2	; 0x2
        3244bc:	eb627722 	bl	1bc214c <$AllocateRefHandle(long)>
        3244c0:	e58d0008 	str	r0, [sp, #8]	; fField8
        3244c4:	e28d1008 	add	r1, sp, #8	; 0x8
        3244c8:	e3a00f49 	mov	r0, #292	; 0x124
        3244cc:	ebfe6d2c 	bl	2bf984 <AllocatePT1(int, RefVar const &)>
        3244d0:	eb62771d 	bl	1bc214c <$AllocateRefHandle(long)>
        3244d4:	e58d0000 	str	r0, [sp]
        3244d8:	e1a0a00d 	mov	sl, sp
        3244dc:	e5950018 	ldr	r0, [r5, #24]	; fField24
        3244e0:	e5900000 	ldr	r0, [r0]
        3244e4:	eb627718 	bl	1bc214c <$AllocateRefHandle(long)>
        3244e8:	e58d0004 	str	r0, [sp, #4]	; fField4
        3244ec:	e28d1004 	add	r1, sp, #4	; 0x4
        3244f0:	e3a0003a 	mov	r0, #58	; 0x3a
        3244f4:	e1a0200a 	mov	r2, sl
        3244f8:	ebfe6f03 	bl	2c010c <AllocatePT2__FiRC6RefVarT2>
        3244fc:	e585001c 	str	r0, [r5, #28]	; fField28
        324500:	e59d0000 	ldr	r0, [sp]
        324504:	eb627b2c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324508:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        32450c:	eb627b2a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324510:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        324514:	ea0005e6 	b	325cb4 <TCompiler::Parser(void)+0x3008>
        324518:	e24dd00c 	sub	sp, sp, #12	; 0xc
        32451c:	e5310004 	ldr	r0, [r1, -#4]!	; fField4
        324520:	eb627709 	bl	1bc214c <$AllocateRefHandle(long)>
        324524:	e58d0000 	str	r0, [sp]
        324528:	e1a0a00d 	mov	sl, sp
        32452c:	e5950018 	ldr	r0, [r5, #24]	; fField24
        324530:	e5100014 	ldr	r0, [r0, -#20]	; fField20
        324534:	eb627704 	bl	1bc214c <$AllocateRefHandle(long)>
        324538:	e58d0004 	str	r0, [sp, #4]	; fField4
        32453c:	e28d2004 	add	r2, sp, #4	; 0x4
        324540:	e52d2004 	str	r2, [sp, -#4]!	; fField4
        324544:	e5950018 	ldr	r0, [r5, #24]	; fField24
        324548:	e510000c 	ldr	r0, [r0, -#12]	; fField12
        32454c:	eb6276fe 	bl	1bc214c <$AllocateRefHandle(long)>
        324550:	e58d000c 	str	r0, [sp, #12]	; fField12
        324554:	e28d100c 	add	r1, sp, #12	; 0xc
        324558:	e3a0003a 	mov	r0, #58	; 0x3a
        32455c:	e1a0300a 	mov	r3, sl
        324560:	e49d2004 	ldr	r2, [sp], #4	; fField4
        324564:	ebfe713c 	bl	2c0a5c <AllocatePT3__FiRC6RefVarN22>
        324568:	e585001c 	str	r0, [r5, #28]	; fField28
        32456c:	e59d0000 	ldr	r0, [sp]
        324570:	eb627b11 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324574:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        324578:	eb627b0f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        32457c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        324580:	ea0005cb 	b	325cb4 <TCompiler::Parser(void)+0x3008>
        324584:	e24dd00c 	sub	sp, sp, #12	; 0xc
        324588:	e5310004 	ldr	r0, [r1, -#4]!	; fField4
        32458c:	eb6276ee 	bl	1bc214c <$AllocateRefHandle(long)>
        324590:	e58d0000 	str	r0, [sp]
        324594:	e1a0a00d 	mov	sl, sp
        324598:	e3a00002 	mov	r0, #2	; 0x2
        32459c:	eb6276ea 	bl	1bc214c <$AllocateRefHandle(long)>
        3245a0:	e58d0004 	str	r0, [sp, #4]	; fField4
        3245a4:	e28d2004 	add	r2, sp, #4	; 0x4
        3245a8:	e52d2004 	str	r2, [sp, -#4]!	; fField4
        3245ac:	e5950018 	ldr	r0, [r5, #24]	; fField24
        3245b0:	e510000c 	ldr	r0, [r0, -#12]	; fField12
        3245b4:	eb6276e4 	bl	1bc214c <$AllocateRefHandle(long)>
        3245b8:	e58d000c 	str	r0, [sp, #12]	; fField12
        3245bc:	e28d100c 	add	r1, sp, #12	; 0xc
        3245c0:	e3a0003a 	mov	r0, #58	; 0x3a
        3245c4:	e1a0300a 	mov	r3, sl
        3245c8:	e49d2004 	ldr	r2, [sp], #4	; fField4
        3245cc:	ebfe7122 	bl	2c0a5c <AllocatePT3__FiRC6RefVarN22>
        3245d0:	e585001c 	str	r0, [r5, #28]	; fField28
        3245d4:	e59d0000 	ldr	r0, [sp]
        3245d8:	eb627af7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3245dc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        3245e0:	eb627af5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3245e4:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        3245e8:	ea0005b1 	b	325cb4 <TCompiler::Parser(void)+0x3008>
        3245ec:	e24dd010 	sub	sp, sp, #16	; 0x10
        3245f0:	e5310004 	ldr	r0, [r1, -#4]!	; fField4
        3245f4:	eb6276d4 	bl	1bc214c <$AllocateRefHandle(long)>
        3245f8:	e58d0000 	str	r0, [sp]
        3245fc:	e1a0a00d 	mov	sl, sp
        324600:	e3a00002 	mov	r0, #2	; 0x2
        324604:	eb6276d0 	bl	1bc214c <$AllocateRefHandle(long)>
        324608:	e58d000c 	str	r0, [sp, #12]	; fField12
        32460c:	e28d100c 	add	r1, sp, #12	; 0xc
        324610:	e3a00f49 	mov	r0, #292	; 0x124
        324614:	ebfe6cda 	bl	2bf984 <AllocatePT1(int, RefVar const &)>
        324618:	eb6276cb 	bl	1bc214c <$AllocateRefHandle(long)>
        32461c:	e58d0004 	str	r0, [sp, #4]	; fField4
        324620:	e28d2004 	add	r2, sp, #4	; 0x4
        324624:	e52d2004 	str	r2, [sp, -#4]!	; fField4
        324628:	e5950018 	ldr	r0, [r5, #24]	; fField24
        32462c:	e510000c 	ldr	r0, [r0, -#12]	; fField12
        324630:	eb6276c5 	bl	1bc214c <$AllocateRefHandle(long)>
        324634:	e58d000c 	str	r0, [sp, #12]	; fField12
        324638:	e28d100c 	add	r1, sp, #12	; 0xc
        32463c:	e3a0003a 	mov	r0, #58	; 0x3a
        324640:	e1a0300a 	mov	r3, sl
        324644:	e49d2004 	ldr	r2, [sp], #4	; fField4
        324648:	ebfe7103 	bl	2c0a5c <AllocatePT3__FiRC6RefVarN22>
        32464c:	e585001c 	str	r0, [r5, #28]	; fField28
        324650:	e59d0000 	ldr	r0, [sp]
        324654:	eb627ad8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324658:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        32465c:	eb627ad6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324660:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        324664:	eb627ad4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324668:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        32466c:	ea0004b7 	b	325950 <TCompiler::Parser(void)+0x2ca4>
        324670:	e24dd00c 	sub	sp, sp, #12	; 0xc
        324674:	e5310004 	ldr	r0, [r1, -#4]!	; fField4
        324678:	eb6276b3 	bl	1bc214c <$AllocateRefHandle(long)>
        32467c:	e40d0004 	str	r0, [sp], -#4	; fField4
        324680:	e28d3004 	add	r3, sp, #4	; 0x4
        324684:	e58d3000 	str	r3, [sp]
        324688:	e5950018 	ldr	r0, [r5, #24]	; fField24
        32468c:	e5100014 	ldr	r0, [r0, -#20]	; fField20
        324690:	eb6276ad 	bl	1bc214c <$AllocateRefHandle(long)>
        324694:	e58d0008 	str	r0, [sp, #8]	; fField8
        324698:	e28da008 	add	sl, sp, #8	; 0x8
        32469c:	e5950018 	ldr	r0, [r5, #24]	; fField24
        3246a0:	e510000c 	ldr	r0, [r0, -#12]	; fField12
        3246a4:	eb6276a8 	bl	1bc214c <$AllocateRefHandle(long)>
        3246a8:	e58d000c 	str	r0, [sp, #12]	; fField12
        3246ac:	e28d100c 	add	r1, sp, #12	; 0xc
        3246b0:	e3a00f4e 	mov	r0, #312	; 0x138
        3246b4:	e1a0200a 	mov	r2, sl
        3246b8:	e49d3004 	ldr	r3, [sp], #4	; fField4
        3246bc:	ebfe70e6 	bl	2c0a5c <AllocatePT3__FiRC6RefVarN22>
        3246c0:	e585001c 	str	r0, [r5, #28]	; fField28
        3246c4:	e59d0000 	ldr	r0, [sp]
        3246c8:	eb627abb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3246cc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        3246d0:	eb627ab9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3246d4:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        3246d8:	ea000575 	b	325cb4 <TCompiler::Parser(void)+0x3008>
        3246dc:	e24dd00c 	sub	sp, sp, #12	; 0xc
        3246e0:	e5310004 	ldr	r0, [r1, -#4]!	; fField4
        3246e4:	eb627698 	bl	1bc214c <$AllocateRefHandle(long)>
        3246e8:	e40d0004 	str	r0, [sp], -#4	; fField4
        3246ec:	e28d3004 	add	r3, sp, #4	; 0x4
        3246f0:	e3a00002 	mov	r0, #2	; 0x2
        3246f4:	e58d3000 	str	r3, [sp]
        3246f8:	eb627693 	bl	1bc214c <$AllocateRefHandle(long)>
        3246fc:	e58d0008 	str	r0, [sp, #8]	; fField8
        324700:	e28da008 	add	sl, sp, #8	; 0x8
        324704:	e5950018 	ldr	r0, [r5, #24]	; fField24
        324708:	e510000c 	ldr	r0, [r0, -#12]	; fField12
        32470c:	eb62768e 	bl	1bc214c <$AllocateRefHandle(long)>
        324710:	e58d000c 	str	r0, [sp, #12]	; fField12
        324714:	e28d100c 	add	r1, sp, #12	; 0xc
        324718:	e3a00f4e 	mov	r0, #312	; 0x138
        32471c:	e1a0200a 	mov	r2, sl
        324720:	e49d3004 	ldr	r3, [sp], #4	; fField4
        324724:	ebfe70cc 	bl	2c0a5c <AllocatePT3__FiRC6RefVarN22>
        324728:	e585001c 	str	r0, [r5, #28]	; fField28
        32472c:	e59d0000 	ldr	r0, [sp]
        324730:	eb627aa1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324734:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        324738:	eb627a9f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        32473c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        324740:	ea00055b 	b	325cb4 <TCompiler::Parser(void)+0x3008>
        324744:	e24dd010 	sub	sp, sp, #16	; 0x10
        324748:	e5310004 	ldr	r0, [r1, -#4]!	; fField4
        32474c:	eb62767e 	bl	1bc214c <$AllocateRefHandle(long)>
        324750:	e58d0000 	str	r0, [sp]
        324754:	e1a0a00d 	mov	sl, sp
        324758:	e3a00002 	mov	r0, #2	; 0x2
        32475c:	eb62767a 	bl	1bc214c <$AllocateRefHandle(long)>
        324760:	e58d000c 	str	r0, [sp, #12]	; fField12
        324764:	e28d100c 	add	r1, sp, #12	; 0xc
        324768:	e3a00f49 	mov	r0, #292	; 0x124
        32476c:	ebfe6c84 	bl	2bf984 <AllocatePT1(int, RefVar const &)>
        324770:	eb627675 	bl	1bc214c <$AllocateRefHandle(long)>
        324774:	e58d0004 	str	r0, [sp, #4]	; fField4
        324778:	e28d2004 	add	r2, sp, #4	; 0x4
        32477c:	e52d2004 	str	r2, [sp, -#4]!	; fField4
        324780:	e5950018 	ldr	r0, [r5, #24]	; fField24
        324784:	e510000c 	ldr	r0, [r0, -#12]	; fField12
        324788:	eb62766f 	bl	1bc214c <$AllocateRefHandle(long)>
        32478c:	e58d000c 	str	r0, [sp, #12]	; fField12
        324790:	e28d100c 	add	r1, sp, #12	; 0xc
        324794:	e3a00f4e 	mov	r0, #312	; 0x138
        324798:	e1a0300a 	mov	r3, sl
        32479c:	e49d2004 	ldr	r2, [sp], #4	; fField4
        3247a0:	ebfe70ad 	bl	2c0a5c <AllocatePT3__FiRC6RefVarN22>
        3247a4:	e585001c 	str	r0, [r5, #28]	; fField28
        3247a8:	e59d0000 	ldr	r0, [sp]
        3247ac:	eb627a82 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3247b0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        3247b4:	eb627a80 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3247b8:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        3247bc:	eb627a7e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3247c0:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        3247c4:	ea000461 	b	325950 <TCompiler::Parser(void)+0x2ca4>
        3247c8:	e24dd00c 	sub	sp, sp, #12	; 0xc
        3247cc:	e5910000 	ldr	r0, [r1]
        3247d0:	eb62765d 	bl	1bc214c <$AllocateRefHandle(long)>
        3247d4:	e40d0004 	str	r0, [sp], -#4	; fField4
        3247d8:	e28d3004 	add	r3, sp, #4	; 0x4
        3247dc:	e58d3000 	str	r3, [sp]
        3247e0:	e5950018 	ldr	r0, [r5, #24]	; fField24
        3247e4:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        3247e8:	eb627657 	bl	1bc214c <$AllocateRefHandle(long)>
        3247ec:	e58d0008 	str	r0, [sp, #8]	; fField8
        3247f0:	e28da008 	add	sl, sp, #8	; 0x8
        3247f4:	e5950018 	ldr	r0, [r5, #24]	; fField24
        3247f8:	e5100010 	ldr	r0, [r0, -#16]
        3247fc:	eb627652 	bl	1bc214c <$AllocateRefHandle(long)>
        324800:	e58d000c 	str	r0, [sp, #12]	; fField12
        324804:	e28d100c 	add	r1, sp, #12	; 0xc
        324808:	e3a0000e 	mov	r0, #14	; 0xe
        32480c:	e2800c01 	add	r0, r0, #256	; 0x100
        324810:	e1a0200a 	mov	r2, sl
        324814:	e49d3004 	ldr	r3, [sp], #4	; fField4
        324818:	ebfe708f 	bl	2c0a5c <AllocatePT3__FiRC6RefVarN22>
        32481c:	e585001c 	str	r0, [r5, #28]	; fField28
        324820:	e59d0000 	ldr	r0, [sp]
        324824:	eb627a64 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324828:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        32482c:	eb627a62 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324830:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        324834:	ea00051e 	b	325cb4 <TCompiler::Parser(void)+0x3008>
        324838:	e24dd00c 	sub	sp, sp, #12	; 0xc
        32483c:	e3a00002 	mov	r0, #2	; 0x2
        324840:	eb627641 	bl	1bc214c <$AllocateRefHandle(long)>
        324844:	e40d0004 	str	r0, [sp], -#4	; fField4
        324848:	e28d3004 	add	r3, sp, #4	; 0x4
        32484c:	e58d3000 	str	r3, [sp]
        324850:	e5950018 	ldr	r0, [r5, #24]	; fField24
        324854:	e5900000 	ldr	r0, [r0]
        324858:	eb62763b 	bl	1bc214c <$AllocateRefHandle(long)>
        32485c:	e58d0008 	str	r0, [sp, #8]	; fField8
        324860:	e28da008 	add	sl, sp, #8	; 0x8
        324864:	e5950018 	ldr	r0, [r5, #24]	; fField24
        324868:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        32486c:	eb627636 	bl	1bc214c <$AllocateRefHandle(long)>
        324870:	e58d000c 	str	r0, [sp, #12]	; fField12
        324874:	e28d100c 	add	r1, sp, #12	; 0xc
        324878:	e3a0000e 	mov	r0, #14	; 0xe
        32487c:	e2800c01 	add	r0, r0, #256	; 0x100
        324880:	e1a0200a 	mov	r2, sl
        324884:	e49d3004 	ldr	r3, [sp], #4	; fField4
        324888:	ebfe7073 	bl	2c0a5c <AllocatePT3__FiRC6RefVarN22>
        32488c:	e585001c 	str	r0, [r5, #28]	; fField28
        324890:	e59d0000 	ldr	r0, [sp]
        324894:	eb627a48 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324898:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        32489c:	eb627a46 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3248a0:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        3248a4:	ea000502 	b	325cb4 <TCompiler::Parser(void)+0x3008>
        3248a8:	e24dd004 	sub	sp, sp, #4	; 0x4
        3248ac:	e5910000 	ldr	r0, [r1]
        3248b0:	eb627625 	bl	1bc214c <$AllocateRefHandle(long)>
        3248b4:	e58d0000 	str	r0, [sp]
        3248b8:	e1a0100d 	mov	r1, sp
        3248bc:	e3a00016 	mov	r0, #22	; 0x16
        3248c0:	e2800c01 	add	r0, r0, #256	; 0x100
        3248c4:	ebfe6c2e 	bl	2bf984 <AllocatePT1(int, RefVar const &)>
        3248c8:	e585001c 	str	r0, [r5, #28]	; fField28
        3248cc:	e59d0000 	ldr	r0, [sp]
        3248d0:	ea00047f 	b	325ad4 <TCompiler::Parser(void)+0x2e28>
        3248d4:	e24dd018 	sub	sp, sp, #24	; 0x18
        3248d8:	e5910000 	ldr	r0, [r1]
        3248dc:	eb62761a 	bl	1bc214c <$AllocateRefHandle(long)>
        3248e0:	e58d0000 	str	r0, [sp]
        3248e4:	e1a0300d 	mov	r3, sp
        3248e8:	e92d0008 	stmdb	sp!, {r3}
        3248ec:	e3a00004 	mov	r0, #4	; 0x4
        3248f0:	eb627615 	bl	1bc214c <$AllocateRefHandle(long)>
        3248f4:	e58d0018 	str	r0, [sp, #24]	; fField24
        3248f8:	e28d1018 	add	r1, sp, #24	; 0x18
        3248fc:	e3a00002 	mov	r0, #2	; 0x2
        324900:	e2800c01 	add	r0, r0, #256	; 0x100
        324904:	ebfe6c1e 	bl	2bf984 <AllocatePT1(int, RefVar const &)>
        324908:	eb62760f 	bl	1bc214c <$AllocateRefHandle(long)>
        32490c:	e58d0008 	str	r0, [sp, #8]	; fField8
        324910:	e28d3008 	add	r3, sp, #8	; 0x8
        324914:	e92d0008 	stmdb	sp!, {r3}
        324918:	e5950018 	ldr	r0, [r5, #24]	; fField24
        32491c:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        324920:	eb627609 	bl	1bc214c <$AllocateRefHandle(long)>
        324924:	e58d0010 	str	r0, [sp, #16]
        324928:	e28d3010 	add	r3, sp, #16	; 0x10
        32492c:	e52d3004 	str	r3, [sp, -#4]!	; fField4
        324930:	e5950018 	ldr	r0, [r5, #24]	; fField24
        324934:	e5100010 	ldr	r0, [r0, -#16]
        324938:	eb627603 	bl	1bc214c <$AllocateRefHandle(long)>
        32493c:	e58d0018 	str	r0, [sp, #24]	; fField24
        324940:	e28da018 	add	sl, sp, #24	; 0x18
        324944:	e5950018 	ldr	r0, [r5, #24]	; fField24
        324948:	e5100018 	ldr	r0, [r0, -#24]	; fField24
        32494c:	eb6275fe 	bl	1bc214c <$AllocateRefHandle(long)>
        324950:	e58d001c 	str	r0, [sp, #28]	; fField28
        324954:	e28d101c 	add	r1, sp, #28	; 0x1c
        324958:	e3a00017 	mov	r0, #23	; 0x17
        32495c:	e2800c01 	add	r0, r0, #256	; 0x100
        324960:	e1a0200a 	mov	r2, sl
        324964:	e49d3004 	ldr	r3, [sp], #4	; fField4
        324968:	ebfe7508 	bl	2c1d90 <AllocatePT5__FiRC6RefVarN42>
        32496c:	e585001c 	str	r0, [r5, #28]	; fField28
        324970:	e5bd0008 	ldr	r0, [sp, #8]!	; fField8
        324974:	eb627a10 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324978:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        32497c:	eb627a0e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324980:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        324984:	eb627a0c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324988:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        32498c:	eb627a0a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324990:	e59d0010 	ldr	r0, [sp, #16]
        324994:	eb627a08 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324998:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        32499c:	eb627a06 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3249a0:	e28dd018 	add	sp, sp, #24	; 0x18
        3249a4:	ea0004c4 	b	325cbc <TCompiler::Parser(void)+0x3010>
        3249a8:	e24dd014 	sub	sp, sp, #20	; 0x14
        3249ac:	e5910000 	ldr	r0, [r1]
        3249b0:	eb6275e5 	bl	1bc214c <$AllocateRefHandle(long)>
        3249b4:	e58d0000 	str	r0, [sp]
        3249b8:	e1a0300d 	mov	r3, sp
        3249bc:	e92d0008 	stmdb	sp!, {r3}
        3249c0:	e5950018 	ldr	r0, [r5, #24]	; fField24
        3249c4:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        3249c8:	eb6275df 	bl	1bc214c <$AllocateRefHandle(long)>
        3249cc:	e58d0008 	str	r0, [sp, #8]	; fField8
        3249d0:	e28d3008 	add	r3, sp, #8	; 0x8
        3249d4:	e92d0008 	stmdb	sp!, {r3}
        3249d8:	e5950018 	ldr	r0, [r5, #24]	; fField24
        3249dc:	e5100010 	ldr	r0, [r0, -#16]
        3249e0:	eb6275d9 	bl	1bc214c <$AllocateRefHandle(long)>
        3249e4:	e58d0010 	str	r0, [sp, #16]
        3249e8:	e28d3010 	add	r3, sp, #16	; 0x10
        3249ec:	e52d3004 	str	r3, [sp, -#4]!	; fField4
        3249f0:	e5950018 	ldr	r0, [r5, #24]	; fField24
        3249f4:	e5100018 	ldr	r0, [r0, -#24]	; fField24
        3249f8:	eb6275d3 	bl	1bc214c <$AllocateRefHandle(long)>
        3249fc:	e58d0018 	str	r0, [sp, #24]	; fField24
        324a00:	e28da018 	add	sl, sp, #24	; 0x18
        324a04:	e5950018 	ldr	r0, [r5, #24]	; fField24
        324a08:	e5100020 	ldr	r0, [r0, -#32]
        324a0c:	eb6275ce 	bl	1bc214c <$AllocateRefHandle(long)>
        324a10:	e58d001c 	str	r0, [sp, #28]	; fField28
        324a14:	e28d101c 	add	r1, sp, #28	; 0x1c
        324a18:	e3a00017 	mov	r0, #23	; 0x17
        324a1c:	e2800c01 	add	r0, r0, #256	; 0x100
        324a20:	e1a0200a 	mov	r2, sl
        324a24:	e49d3004 	ldr	r3, [sp], #4	; fField4
        324a28:	ebfe74d8 	bl	2c1d90 <AllocatePT5__FiRC6RefVarN42>
        324a2c:	e585001c 	str	r0, [r5, #28]	; fField28
        324a30:	e5bd0008 	ldr	r0, [sp, #8]!	; fField8
        324a34:	eb6279e0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324a38:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        324a3c:	eb6279de 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324a40:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        324a44:	eb6279dc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324a48:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        324a4c:	eb6279da 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324a50:	e59d0010 	ldr	r0, [sp, #16]
        324a54:	ea000139 	b	324f40 <TCompiler::Parser(void)+0x2294>
        324a58:	e24dd014 	sub	sp, sp, #20	; 0x14
        324a5c:	e1a00006 	mov	r0, r6
        324a60:	e3a01002 	mov	r1, #2	; 0x2
        324a64:	eb6275b3 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        324a68:	eb6275b7 	bl	1bc214c <$AllocateRefHandle(long)>
        324a6c:	e58d0010 	str	r0, [sp, #16]
        324a70:	e5900000 	ldr	r0, [r0]
        324a74:	e5951018 	ldr	r1, [r5, #24]	; fField24
        324a78:	e531201c 	ldr	r2, [r1, -#28]!	; fField28
        324a7c:	e3a01000 	mov	r1, #0	; 0x0
        324a80:	eb628634 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        324a84:	e59d0010 	ldr	r0, [sp, #16]
        324a88:	e5900000 	ldr	r0, [r0]
        324a8c:	e5951018 	ldr	r1, [r5, #24]	; fField24
        324a90:	e5312014 	ldr	r2, [r1, -#20]!	; fField20
        324a94:	e3a01001 	mov	r1, #1	; 0x1
        324a98:	eb62862e 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        324a9c:	e5950018 	ldr	r0, [r5, #24]	; fField24
        324aa0:	e5100010 	ldr	r0, [r0, -#16]
        324aa4:	eb6275a8 	bl	1bc214c <$AllocateRefHandle(long)>
        324aa8:	e58d0000 	str	r0, [sp]
        324aac:	e1a0300d 	mov	r3, sp
        324ab0:	e28d2010 	add	r2, sp, #16	; 0x10
        324ab4:	e92d000c 	stmdb	sp!, {r2, r3}
        324ab8:	e5950018 	ldr	r0, [r5, #24]	; fField24
        324abc:	e5900000 	ldr	r0, [r0]
        324ac0:	eb6275a1 	bl	1bc214c <$AllocateRefHandle(long)>
        324ac4:	e58d000c 	str	r0, [sp, #12]	; fField12
        324ac8:	e28da00c 	add	sl, sp, #12	; 0xc
        324acc:	e5950018 	ldr	r0, [r5, #24]	; fField24
        324ad0:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        324ad4:	eb62759c 	bl	1bc214c <$AllocateRefHandle(long)>
        324ad8:	e58d0010 	str	r0, [sp, #16]
        324adc:	e28d2010 	add	r2, sp, #16	; 0x10
        324ae0:	e52d2004 	str	r2, [sp, -#4]!	; fField4
        324ae4:	e5950018 	ldr	r0, [r5, #24]	; fField24
        324ae8:	e5100004 	ldr	r0, [r0, -#4]	; fField4
        324aec:	eb627596 	bl	1bc214c <$AllocateRefHandle(long)>
        324af0:	e58d0018 	str	r0, [sp, #24]	; fField24
        324af4:	e28d1018 	add	r1, sp, #24	; 0x18
        324af8:	e3a00021 	mov	r0, #33	; 0x21
        324afc:	e2800c01 	add	r0, r0, #256	; 0x100
        324b00:	e1a0300a 	mov	r3, sl
        324b04:	e49d2004 	ldr	r2, [sp], #4	; fField4
        324b08:	ebfe74a0 	bl	2c1d90 <AllocatePT5__FiRC6RefVarN42>
        324b0c:	e585001c 	str	r0, [r5, #28]	; fField28
        324b10:	e5bd0008 	ldr	r0, [sp, #8]!	; fField8
        324b14:	eb6279a8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324b18:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        324b1c:	eb6279a6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324b20:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        324b24:	eb6279a4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324b28:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        324b2c:	eb6279a2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324b30:	e59d0010 	ldr	r0, [sp, #16]
        324b34:	ea000101 	b	324f40 <TCompiler::Parser(void)+0x2294>
        324b38:	e24dd014 	sub	sp, sp, #20	; 0x14
        324b3c:	e1a00006 	mov	r0, r6
        324b40:	e3a01001 	mov	r1, #1	; 0x1
        324b44:	eb62757b 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        324b48:	eb62757f 	bl	1bc214c <$AllocateRefHandle(long)>
        324b4c:	e58d0010 	str	r0, [sp, #16]
        324b50:	e5900000 	ldr	r0, [r0]
        324b54:	e5951018 	ldr	r1, [r5, #24]	; fField24
        324b58:	e5312014 	ldr	r2, [r1, -#20]!	; fField20
        324b5c:	e3a01000 	mov	r1, #0	; 0x0
        324b60:	eb6285fc 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        324b64:	e5950018 	ldr	r0, [r5, #24]	; fField24
        324b68:	e5100010 	ldr	r0, [r0, -#16]
        324b6c:	eb627576 	bl	1bc214c <$AllocateRefHandle(long)>
        324b70:	e58d0000 	str	r0, [sp]
        324b74:	e1a0300d 	mov	r3, sp
        324b78:	e28d2010 	add	r2, sp, #16	; 0x10
        324b7c:	e92d000c 	stmdb	sp!, {r2, r3}
        324b80:	e5950018 	ldr	r0, [r5, #24]	; fField24
        324b84:	e5900000 	ldr	r0, [r0]
        324b88:	eb62756f 	bl	1bc214c <$AllocateRefHandle(long)>
        324b8c:	e58d000c 	str	r0, [sp, #12]	; fField12
        324b90:	e28da00c 	add	sl, sp, #12	; 0xc
        324b94:	e5950018 	ldr	r0, [r5, #24]	; fField24
        324b98:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        324b9c:	eb62756a 	bl	1bc214c <$AllocateRefHandle(long)>
        324ba0:	e58d0010 	str	r0, [sp, #16]
        324ba4:	e28d2010 	add	r2, sp, #16	; 0x10
        324ba8:	e52d2004 	str	r2, [sp, -#4]!	; fField4
        324bac:	e5950018 	ldr	r0, [r5, #24]	; fField24
        324bb0:	e5100004 	ldr	r0, [r0, -#4]	; fField4
        324bb4:	eb627564 	bl	1bc214c <$AllocateRefHandle(long)>
        324bb8:	e58d0018 	str	r0, [sp, #24]	; fField24
        324bbc:	e28d1018 	add	r1, sp, #24	; 0x18
        324bc0:	e3a00021 	mov	r0, #33	; 0x21
        324bc4:	e2800c01 	add	r0, r0, #256	; 0x100
        324bc8:	e1a0300a 	mov	r3, sl
        324bcc:	e49d2004 	ldr	r2, [sp], #4	; fField4
        324bd0:	ebfe746e 	bl	2c1d90 <AllocatePT5__FiRC6RefVarN42>
        324bd4:	e585001c 	str	r0, [r5, #28]	; fField28
        324bd8:	e5bd0008 	ldr	r0, [sp, #8]!	; fField8
        324bdc:	eb627976 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324be0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        324be4:	eb627974 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324be8:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        324bec:	eb627972 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324bf0:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        324bf4:	eb627970 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324bf8:	e59d0010 	ldr	r0, [sp, #16]
        324bfc:	ea0000cf 	b	324f40 <TCompiler::Parser(void)+0x2294>
        324c00:	e3a00002 	mov	r0, #2	; 0x2
        324c04:	ea0003a4 	b	325a9c <TCompiler::Parser(void)+0x2df0>
        324c08:	e3a0001a 	mov	r0, #26	; 0x1a
        324c0c:	ea0003a2 	b	325a9c <TCompiler::Parser(void)+0x2df0>
        324c10:	e59f0004 	ldr	r0, [pc, #4]	; 324c1c <TCompiler::Parser(void)+0x1f70>	; fField4
        324c14:	e5900000 	ldr	r0, [r0]
        324c18:	ea00000a 	b	324c48 <TCompiler::Parser(void)+0x1f9c>
        324c1c:	00683740 	rsbeq	r3, r8, r0, asr #14
        324c20:	e5910000 	ldr	r0, [r1]
        324c24:	e59fa024 	ldr	sl, [pc, #24]	; 324c50 <TCompiler::Parser(void)+0x1fa4>	; fField24
        324c28:	e59a1000 	ldr	r1, [sl]
        324c2c:	e5911000 	ldr	r1, [r1]
        324c30:	eb627d7e 	bl	1bc4230 <$EQRef__FlT1>
        324c34:	e3300000 	teq	r0, #0	; 0x0
        324c38:	01a00004 	moveq	r0, r4
        324c3c:	028f1f04 	addeq	r1, pc, #16	; 0x10
        324c40:	0b5ccbe9 	bleq	1a57bec <TCompiler::$SyntaxError(char *)>
        324c44:	e59a0000 	ldr	r0, [sl]
        324c48:	e5900000 	ldr	r0, [r0]
        324c4c:	ea000392 	b	325a9c <TCompiler::Parser(void)+0x2df0>
        324c50:	006824f0 	streqd	r2, [r8], -#64
        324c54:	464f5245 	strmib	r5, [pc], -r5, asr #4	; fField4
        324c58:	41434820 	cmpmi	r3, r0, lsr #16
        324c5c:	72657175 	rsbvc	r7, r5, #1073741853	; 0x4000001d
        324c60:	69726573 	ldmvsdb	r2!, {r0, r1, r4, r5, r6, r8, sl, sp, lr}^
        324c64:	20444f20 	subcs	r4, r4, r0, lsr #30
        324c68:	6f722043 	swivs	0x00722043
        324c6c:	4f4c4c45 	swimi	0x004c4c45
        324c70:	43540000 	cmpmi	r4, #0	; 0x0
        324c74:	e24dd008 	sub	sp, sp, #8	; 0x8
        324c78:	e5910000 	ldr	r0, [r1]
        324c7c:	eb627532 	bl	1bc214c <$AllocateRefHandle(long)>
        324c80:	e58d0000 	str	r0, [sp]
        324c84:	e1a0a00d 	mov	sl, sp
        324c88:	e5950018 	ldr	r0, [r5, #24]	; fField24
        324c8c:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        324c90:	eb62752d 	bl	1bc214c <$AllocateRefHandle(long)>
        324c94:	e58d0004 	str	r0, [sp, #4]	; fField4
        324c98:	e28d1004 	add	r1, sp, #4	; 0x4
        324c9c:	e3a0001a 	mov	r0, #26	; 0x1a
        324ca0:	e2800c01 	add	r0, r0, #256	; 0x100
        324ca4:	e1a0200a 	mov	r2, sl
        324ca8:	ebfe6d17 	bl	2c010c <AllocatePT2__FiRC6RefVarT2>
        324cac:	e585001c 	str	r0, [r5, #28]	; fField28
        324cb0:	e59d0000 	ldr	r0, [sp]
        324cb4:	eb627940 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324cb8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        324cbc:	ea0003df 	b	325c40 <TCompiler::Parser(void)+0x2f94>
        324cc0:	e24dd008 	sub	sp, sp, #8	; 0x8
        324cc4:	e5910000 	ldr	r0, [r1]
        324cc8:	eb62751f 	bl	1bc214c <$AllocateRefHandle(long)>
        324ccc:	e58d0000 	str	r0, [sp]
        324cd0:	e1a0a00d 	mov	sl, sp
        324cd4:	e5950018 	ldr	r0, [r5, #24]	; fField24
        324cd8:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        324cdc:	eb62751a 	bl	1bc214c <$AllocateRefHandle(long)>
        324ce0:	e58d0004 	str	r0, [sp, #4]	; fField4
        324ce4:	e28d1004 	add	r1, sp, #4	; 0x4
        324ce8:	e3a0001b 	mov	r0, #27	; 0x1b
        324cec:	e2800c01 	add	r0, r0, #256	; 0x100
        324cf0:	e1a0200a 	mov	r2, sl
        324cf4:	ebfe6d04 	bl	2c010c <AllocatePT2__FiRC6RefVarT2>
        324cf8:	e585001c 	str	r0, [r5, #28]	; fField28
        324cfc:	e59d0000 	ldr	r0, [sp]
        324d00:	eb62792d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324d04:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        324d08:	ea0003cc 	b	325c40 <TCompiler::Parser(void)+0x2f94>
        324d0c:	e24dd014 	sub	sp, sp, #20	; 0x14
        324d10:	e3a0a002 	mov	sl, #2	; 0x2
        324d14:	e1a0000a 	mov	r0, sl
        324d18:	eb62750b 	bl	1bc214c <$AllocateRefHandle(long)>
        324d1c:	e58d0000 	str	r0, [sp]
        324d20:	e1a0300d 	mov	r3, sp
        324d24:	e92d0008 	stmdb	sp!, {r3}
        324d28:	e5950018 	ldr	r0, [r5, #24]	; fField24
        324d2c:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        324d30:	e3a01001 	mov	r1, #1	; 0x1
        324d34:	eb627d46 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        324d38:	eb627503 	bl	1bc214c <$AllocateRefHandle(long)>
        324d3c:	e58d0008 	str	r0, [sp, #8]	; fField8
        324d40:	e28d3008 	add	r3, sp, #8	; 0x8
        324d44:	e92d0008 	stmdb	sp!, {r3}
        324d48:	e1a0000a 	mov	r0, sl
        324d4c:	eb6274fe 	bl	1bc214c <$AllocateRefHandle(long)>
        324d50:	e58d0010 	str	r0, [sp, #16]
        324d54:	e28da010 	add	sl, sp, #16	; 0x10
        324d58:	e5950018 	ldr	r0, [r5, #24]	; fField24
        324d5c:	e5900000 	ldr	r0, [r0]
        324d60:	eb6274f9 	bl	1bc214c <$AllocateRefHandle(long)>
        324d64:	e58d0014 	str	r0, [sp, #20]	; fField20
        324d68:	e28d2014 	add	r2, sp, #20	; 0x14
        324d6c:	e52d2004 	str	r2, [sp, -#4]!	; fField4
        324d70:	e5950018 	ldr	r0, [r5, #24]	; fField24
        324d74:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        324d78:	e3a01000 	mov	r1, #0	; 0x0
        324d7c:	eb627d34 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        324d80:	eb6274f1 	bl	1bc214c <$AllocateRefHandle(long)>
        324d84:	e58d001c 	str	r0, [sp, #28]	; fField28
        324d88:	e28d101c 	add	r1, sp, #28	; 0x1c
        324d8c:	e3a00009 	mov	r0, #9	; 0x9
        324d90:	e2800c01 	add	r0, r0, #256	; 0x100
        324d94:	e1a0300a 	mov	r3, sl
        324d98:	e49d2004 	ldr	r2, [sp], #4	; fField4
        324d9c:	ebfe73fb 	bl	2c1d90 <AllocatePT5__FiRC6RefVarN42>
        324da0:	e585001c 	str	r0, [r5, #28]	; fField28
        324da4:	e5bd0008 	ldr	r0, [sp, #8]!	; fField8
        324da8:	eb627903 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324dac:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        324db0:	eb627901 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324db4:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        324db8:	eb6278ff 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324dbc:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        324dc0:	eb6278fd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324dc4:	e59d0010 	ldr	r0, [sp, #16]
        324dc8:	ea00005c 	b	324f40 <TCompiler::Parser(void)+0x2294>
        324dcc:	e24dd014 	sub	sp, sp, #20	; 0x14
        324dd0:	e3a00002 	mov	r0, #2	; 0x2
        324dd4:	eb6274dc 	bl	1bc214c <$AllocateRefHandle(long)>
        324dd8:	e58d0000 	str	r0, [sp]
        324ddc:	e1a0300d 	mov	r3, sp
        324de0:	e92d0008 	stmdb	sp!, {r3}
        324de4:	e5950018 	ldr	r0, [r5, #24]	; fField24
        324de8:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        324dec:	e3a01001 	mov	r1, #1	; 0x1
        324df0:	eb627d17 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        324df4:	eb6274d4 	bl	1bc214c <$AllocateRefHandle(long)>
        324df8:	e58d0008 	str	r0, [sp, #8]	; fField8
        324dfc:	e28d3008 	add	r3, sp, #8	; 0x8
        324e00:	e92d0008 	stmdb	sp!, {r3}
        324e04:	e3a0001a 	mov	r0, #26	; 0x1a
        324e08:	eb6274cf 	bl	1bc214c <$AllocateRefHandle(long)>
        324e0c:	e58d0010 	str	r0, [sp, #16]
        324e10:	e28d3010 	add	r3, sp, #16	; 0x10
        324e14:	e52d3004 	str	r3, [sp, -#4]!	; fField4
        324e18:	e5950018 	ldr	r0, [r5, #24]	; fField24
        324e1c:	e5900000 	ldr	r0, [r0]
        324e20:	eb6274c9 	bl	1bc214c <$AllocateRefHandle(long)>
        324e24:	e58d0018 	str	r0, [sp, #24]	; fField24
        324e28:	e28da018 	add	sl, sp, #24	; 0x18
        324e2c:	e5950018 	ldr	r0, [r5, #24]	; fField24
        324e30:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        324e34:	e3a01000 	mov	r1, #0	; 0x0
        324e38:	eb627d05 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        324e3c:	eb6274c2 	bl	1bc214c <$AllocateRefHandle(long)>
        324e40:	e58d001c 	str	r0, [sp, #28]	; fField28
        324e44:	e28d101c 	add	r1, sp, #28	; 0x1c
        324e48:	e3a00009 	mov	r0, #9	; 0x9
        324e4c:	e2800c01 	add	r0, r0, #256	; 0x100
        324e50:	e1a0200a 	mov	r2, sl
        324e54:	e49d3004 	ldr	r3, [sp], #4	; fField4
        324e58:	ebfe73cc 	bl	2c1d90 <AllocatePT5__FiRC6RefVarN42>
        324e5c:	e585001c 	str	r0, [r5, #28]	; fField28
        324e60:	e5bd0008 	ldr	r0, [sp, #8]!	; fField8
        324e64:	eb6278d4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324e68:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        324e6c:	eb6278d2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324e70:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        324e74:	eb6278d0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324e78:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        324e7c:	eb6278ce 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324e80:	e59d0010 	ldr	r0, [sp, #16]
        324e84:	ea00002d 	b	324f40 <TCompiler::Parser(void)+0x2294>
        324e88:	e24dd014 	sub	sp, sp, #20	; 0x14
        324e8c:	e3a00002 	mov	r0, #2	; 0x2
        324e90:	eb6274ad 	bl	1bc214c <$AllocateRefHandle(long)>
        324e94:	e58d0000 	str	r0, [sp]
        324e98:	e1a0300d 	mov	r3, sp
        324e9c:	e92d0008 	stmdb	sp!, {r3}
        324ea0:	e5950018 	ldr	r0, [r5, #24]	; fField24
        324ea4:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        324ea8:	e3a01001 	mov	r1, #1	; 0x1
        324eac:	eb627ce8 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        324eb0:	eb6274a5 	bl	1bc214c <$AllocateRefHandle(long)>
        324eb4:	e58d0008 	str	r0, [sp, #8]	; fField8
        324eb8:	e28d3008 	add	r3, sp, #8	; 0x8
        324ebc:	e92d0008 	stmdb	sp!, {r3}
        324ec0:	e3a0001a 	mov	r0, #26	; 0x1a
        324ec4:	eb6274a0 	bl	1bc214c <$AllocateRefHandle(long)>
        324ec8:	e58d0010 	str	r0, [sp, #16]
        324ecc:	e28d3010 	add	r3, sp, #16	; 0x10
        324ed0:	e52d3004 	str	r3, [sp, -#4]!	; fField4
        324ed4:	e5950018 	ldr	r0, [r5, #24]	; fField24
        324ed8:	e5900000 	ldr	r0, [r0]
        324edc:	eb62749a 	bl	1bc214c <$AllocateRefHandle(long)>
        324ee0:	e58d0018 	str	r0, [sp, #24]	; fField24
        324ee4:	e28da018 	add	sl, sp, #24	; 0x18
        324ee8:	e5950018 	ldr	r0, [r5, #24]	; fField24
        324eec:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        324ef0:	e3a01000 	mov	r1, #0	; 0x0
        324ef4:	eb627cd6 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        324ef8:	eb627493 	bl	1bc214c <$AllocateRefHandle(long)>
        324efc:	e58d001c 	str	r0, [sp, #28]	; fField28
        324f00:	e28d101c 	add	r1, sp, #28	; 0x1c
        324f04:	e3a00009 	mov	r0, #9	; 0x9
        324f08:	e2800c01 	add	r0, r0, #256	; 0x100
        324f0c:	e1a0200a 	mov	r2, sl
        324f10:	e49d3004 	ldr	r3, [sp], #4	; fField4
        324f14:	ebfe739d 	bl	2c1d90 <AllocatePT5__FiRC6RefVarN42>
        324f18:	e585001c 	str	r0, [r5, #28]	; fField28
        324f1c:	e5bd0008 	ldr	r0, [sp, #8]!	; fField8
        324f20:	eb6278a5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324f24:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        324f28:	eb6278a3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324f2c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        324f30:	eb6278a1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324f34:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        324f38:	eb62789f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324f3c:	e59d0010 	ldr	r0, [sp, #16]
        324f40:	eb62789d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324f44:	e28dd014 	add	sp, sp, #20	; 0x14
        324f48:	ea00035b 	b	325cbc <TCompiler::Parser(void)+0x3010>
        324f4c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        324f50:	e5910000 	ldr	r0, [r1]
        324f54:	eb62747c 	bl	1bc214c <$AllocateRefHandle(long)>
        324f58:	e58d0000 	str	r0, [sp]
        324f5c:	e1a0a00d 	mov	sl, sp
        324f60:	e5950018 	ldr	r0, [r5, #24]	; fField24
        324f64:	e5100004 	ldr	r0, [r0, -#4]	; fField4
        324f68:	eb627477 	bl	1bc214c <$AllocateRefHandle(long)>
        324f6c:	e58d0008 	str	r0, [sp, #8]	; fField8
        324f70:	e28d1008 	add	r1, sp, #8	; 0x8
        324f74:	e3a00007 	mov	r0, #7	; 0x7
        324f78:	e2800c01 	add	r0, r0, #256	; 0x100
        324f7c:	ebfe6a80 	bl	2bf984 <AllocatePT1(int, RefVar const &)>
        324f80:	eb627471 	bl	1bc214c <$AllocateRefHandle(long)>
        324f84:	e58d0004 	str	r0, [sp, #4]	; fField4
        324f88:	e28d1004 	add	r1, sp, #4	; 0x4
        324f8c:	e3a00011 	mov	r0, #17	; 0x11
        324f90:	e2800c01 	add	r0, r0, #256	; 0x100
        324f94:	e1a0200a 	mov	r2, sl
        324f98:	ebfe6c5b 	bl	2c010c <AllocatePT2__FiRC6RefVarT2>
        324f9c:	e585001c 	str	r0, [r5, #28]	; fField28
        324fa0:	e59d0000 	ldr	r0, [sp]
        324fa4:	eb627884 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324fa8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        324fac:	eb627882 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324fb0:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        324fb4:	ea00033e 	b	325cb4 <TCompiler::Parser(void)+0x3008>
        324fb8:	e24dd008 	sub	sp, sp, #8	; 0x8
        324fbc:	e5110004 	ldr	r0, [r1, -#4]	; fField4
        324fc0:	e585001c 	str	r0, [r5, #28]	; fField28
        324fc4:	e5910000 	ldr	r0, [r1]
        324fc8:	eb62745f 	bl	1bc214c <$AllocateRefHandle(long)>
        324fcc:	e58d0000 	str	r0, [sp]
        324fd0:	e1a0a00d 	mov	sl, sp
        324fd4:	e595001c 	ldr	r0, [r5, #28]	; fField28
        324fd8:	eb62745b 	bl	1bc214c <$AllocateRefHandle(long)>
        324fdc:	e58d0004 	str	r0, [sp, #4]	; fField4
        324fe0:	e28d0004 	add	r0, sp, #4	; 0x4
        324fe4:	e1a0100a 	mov	r1, sl
        324fe8:	eb62744e 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        324fec:	e59d0000 	ldr	r0, [sp]
        324ff0:	eb627871 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        324ff4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        324ff8:	ea000310 	b	325c40 <TCompiler::Parser(void)+0x2f94>
        324ffc:	e24dd008 	sub	sp, sp, #8	; 0x8
        325000:	e5910000 	ldr	r0, [r1]
        325004:	eb627450 	bl	1bc214c <$AllocateRefHandle(long)>
        325008:	e58d0000 	str	r0, [sp]
        32500c:	e1a0a00d 	mov	sl, sp
        325010:	e5950018 	ldr	r0, [r5, #24]	; fField24
        325014:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        325018:	eb62744b 	bl	1bc214c <$AllocateRefHandle(long)>
        32501c:	e58d0004 	str	r0, [sp, #4]	; fField4
        325020:	e28d1004 	add	r1, sp, #4	; 0x4
        325024:	e3a00012 	mov	r0, #18	; 0x12
        325028:	e2800c01 	add	r0, r0, #256	; 0x100
        32502c:	e1a0200a 	mov	r2, sl
        325030:	ebfe6c35 	bl	2c010c <AllocatePT2__FiRC6RefVarT2>
        325034:	e585001c 	str	r0, [r5, #28]	; fField28
        325038:	e59d0000 	ldr	r0, [sp]
        32503c:	eb62785e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        325040:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        325044:	ea0002fd 	b	325c40 <TCompiler::Parser(void)+0x2f94>
        325048:	e24dd004 	sub	sp, sp, #4	; 0x4
        32504c:	e5310004 	ldr	r0, [r1, -#4]!	; fField4
        325050:	eb62743d 	bl	1bc214c <$AllocateRefHandle(long)>
        325054:	e58d0000 	str	r0, [sp]
        325058:	e1a0100d 	mov	r1, sp
        32505c:	e3a00013 	mov	r0, #19	; 0x13
        325060:	e2800c01 	add	r0, r0, #256	; 0x100
        325064:	ebfe6a46 	bl	2bf984 <AllocatePT1(int, RefVar const &)>
        325068:	e585001c 	str	r0, [r5, #28]	; fField28
        32506c:	e59d0000 	ldr	r0, [sp]
        325070:	ea000297 	b	325ad4 <TCompiler::Parser(void)+0x2e28>
        325074:	e24dd00c 	sub	sp, sp, #12	; 0xc
        325078:	e5310004 	ldr	r0, [r1, -#4]!	; fField4
        32507c:	eb627432 	bl	1bc214c <$AllocateRefHandle(long)>
        325080:	e58d0000 	str	r0, [sp]
        325084:	e1a0100d 	mov	r1, sp
        325088:	e3a00013 	mov	r0, #19	; 0x13
        32508c:	e2800c01 	add	r0, r0, #256	; 0x100
        325090:	ebfe6a3b 	bl	2bf984 <AllocatePT1(int, RefVar const &)>
        325094:	e585001c 	str	r0, [r5, #28]	; fField28
        325098:	e59d0000 	ldr	r0, [sp]
        32509c:	eb627846 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3250a0:	e5950018 	ldr	r0, [r5, #24]	; fField24
        3250a4:	e510000c 	ldr	r0, [r0, -#12]	; fField12
        3250a8:	eb627427 	bl	1bc214c <$AllocateRefHandle(long)>
        3250ac:	e58d0004 	str	r0, [sp, #4]	; fField4
        3250b0:	e28da004 	add	sl, sp, #4	; 0x4
        3250b4:	e5950018 	ldr	r0, [r5, #24]	; fField24
        3250b8:	e5100004 	ldr	r0, [r0, -#4]	; fField4
        3250bc:	eb627422 	bl	1bc214c <$AllocateRefHandle(long)>
        3250c0:	e58d0008 	str	r0, [sp, #8]	; fField8
        3250c4:	e28d0008 	add	r0, sp, #8	; 0x8
        3250c8:	e1a0100a 	mov	r1, sl
        3250cc:	eb6284a2 	bl	1bc635c <$SetClass__FRC6RefVarT1>
        3250d0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        3250d4:	eb627838 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3250d8:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        3250dc:	ea0002f4 	b	325cb4 <TCompiler::Parser(void)+0x3008>
        3250e0:	e24dd004 	sub	sp, sp, #4	; 0x4
        3250e4:	e5310004 	ldr	r0, [r1, -#4]!	; fField4
        3250e8:	eb627417 	bl	1bc214c <$AllocateRefHandle(long)>
        3250ec:	e58d0000 	str	r0, [sp]
        3250f0:	e1a0100d 	mov	r1, sp
        3250f4:	e3a00f45 	mov	r0, #276	; 0x114
        3250f8:	ebfe6a21 	bl	2bf984 <AllocatePT1(int, RefVar const &)>
        3250fc:	e585001c 	str	r0, [r5, #28]	; fField28
        325100:	e59d0000 	ldr	r0, [sp]
        325104:	ea000272 	b	325ad4 <TCompiler::Parser(void)+0x2e28>
        325108:	e24dd008 	sub	sp, sp, #8	; 0x8
        32510c:	e5110008 	ldr	r0, [r1, -#8]	; fField8
        325110:	e585001c 	str	r0, [r5, #28]	; fField28
        325114:	e5910000 	ldr	r0, [r1]
        325118:	eb62740b 	bl	1bc214c <$AllocateRefHandle(long)>
        32511c:	e58d0000 	str	r0, [sp]
        325120:	e1a0a00d 	mov	sl, sp
        325124:	e595001c 	ldr	r0, [r5, #28]	; fField28
        325128:	eb627407 	bl	1bc214c <$AllocateRefHandle(long)>
        32512c:	e58d0004 	str	r0, [sp, #4]	; fField4
        325130:	e28d0004 	add	r0, sp, #4	; 0x4
        325134:	e1a0100a 	mov	r1, sl
        325138:	eb6273fa 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        32513c:	e59d0000 	ldr	r0, [sp]
        325140:	eb62781d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        325144:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        325148:	ea0002bc 	b	325c40 <TCompiler::Parser(void)+0x2f94>
        32514c:	e24dd008 	sub	sp, sp, #8	; 0x8
        325150:	e5910000 	ldr	r0, [r1]
        325154:	eb6273fc 	bl	1bc214c <$AllocateRefHandle(long)>
        325158:	e58d0000 	str	r0, [sp]
        32515c:	e1a0a00d 	mov	sl, sp
        325160:	e5950018 	ldr	r0, [r5, #24]	; fField24
        325164:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        325168:	eb6273f7 	bl	1bc214c <$AllocateRefHandle(long)>
        32516c:	e58d0004 	str	r0, [sp, #4]	; fField4
        325170:	e28d0004 	add	r0, sp, #4	; 0x4
        325174:	e1a0100a 	mov	r1, sl
        325178:	eb6273ea 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        32517c:	e59d0000 	ldr	r0, [sp]
        325180:	eb62780d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        325184:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        325188:	eb62780b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        32518c:	e5950018 	ldr	r0, [r5, #24]	; fField24
        325190:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        325194:	e585001c 	str	r0, [r5, #28]	; fField28
        325198:	ea0002a9 	b	325c44 <TCompiler::Parser(void)+0x2f98>
        32519c:	e1a00006 	mov	r0, r6
        3251a0:	e3a01002 	mov	r1, #2	; 0x2
        3251a4:	eb6273e3 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        3251a8:	e585001c 	str	r0, [r5, #28]	; fField28
        3251ac:	e1a0a000 	mov	sl, r0
        3251b0:	e1a00006 	mov	r0, r6
        3251b4:	e3a01000 	mov	r1, #0	; 0x0
        3251b8:	eb6273de 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        3251bc:	e1a02000 	mov	r2, r0
        3251c0:	e3a01000 	mov	r1, #0	; 0x0
        3251c4:	e1a0000a 	mov	r0, sl
        3251c8:	eb628462 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        3251cc:	e1a00006 	mov	r0, r6
        3251d0:	e3a01000 	mov	r1, #0	; 0x0
        3251d4:	e595a01c 	ldr	sl, [r5, #28]	; fField28
        3251d8:	eb6273d6 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        3251dc:	e1a02000 	mov	r2, r0
        3251e0:	e3a01001 	mov	r1, #1	; 0x1
        3251e4:	e1a0000a 	mov	r0, sl
        3251e8:	ea0001b7 	b	3258cc <TCompiler::Parser(void)+0x2c20>
        3251ec:	e1a00006 	mov	r0, r6
        3251f0:	e3a01002 	mov	r1, #2	; 0x2
        3251f4:	eb6273cf 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        3251f8:	e585001c 	str	r0, [r5, #28]	; fField28
        3251fc:	e24dd004 	sub	sp, sp, #4	; 0x4
        325200:	e1a00006 	mov	r0, r6
        325204:	e3a01001 	mov	r1, #1	; 0x1
        325208:	eb6273ca 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        32520c:	eb6273ce 	bl	1bc214c <$AllocateRefHandle(long)>
        325210:	e1a0a000 	mov	sl, r0
        325214:	e1a00006 	mov	r0, r6
        325218:	e3a01001 	mov	r1, #1	; 0x1
        32521c:	eb6273c5 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        325220:	eb6273c9 	bl	1bc214c <$AllocateRefHandle(long)>
        325224:	e58d0000 	str	r0, [sp]
        325228:	e595001c 	ldr	r0, [r5, #28]	; fField28
        32522c:	e3a01000 	mov	r1, #0	; 0x0
        325230:	e59a2000 	ldr	r2, [sl]
        325234:	eb628447 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        325238:	e595001c 	ldr	r0, [r5, #28]	; fField28
        32523c:	e59d1000 	ldr	r1, [sp]
        325240:	e5912000 	ldr	r2, [r1]
        325244:	e3a01001 	mov	r1, #1	; 0x1
        325248:	eb628442 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        32524c:	e59a0000 	ldr	r0, [sl]
        325250:	e5951018 	ldr	r1, [r5, #24]	; fField24
        325254:	e5912000 	ldr	r2, [r1]
        325258:	e3a01000 	mov	r1, #0	; 0x0
        32525c:	eb62843d 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        325260:	e59d0000 	ldr	r0, [sp]
        325264:	eb6277d4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        325268:	e1a0000a 	mov	r0, sl
        32526c:	ea000218 	b	325ad4 <TCompiler::Parser(void)+0x2e28>
        325270:	e1a00006 	mov	r0, r6
        325274:	e3a01002 	mov	r1, #2	; 0x2
        325278:	eb6273ae 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        32527c:	e585001c 	str	r0, [r5, #28]	; fField28
        325280:	e24dd004 	sub	sp, sp, #4	; 0x4
        325284:	e1a00006 	mov	r0, r6
        325288:	e3a01001 	mov	r1, #1	; 0x1
        32528c:	eb6273a9 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        325290:	eb6273ad 	bl	1bc214c <$AllocateRefHandle(long)>
        325294:	e58d0000 	str	r0, [sp]
        325298:	e1a00006 	mov	r0, r6
        32529c:	e3a01001 	mov	r1, #1	; 0x1
        3252a0:	eb6273a4 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        3252a4:	eb6273a8 	bl	1bc214c <$AllocateRefHandle(long)>
        3252a8:	e1a0a000 	mov	sl, r0
        3252ac:	e595001c 	ldr	r0, [r5, #28]	; fField28
        3252b0:	e59d1000 	ldr	r1, [sp]
        3252b4:	e5912000 	ldr	r2, [r1]
        3252b8:	e3a01000 	mov	r1, #0	; 0x0
        3252bc:	eb628425 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        3252c0:	e595001c 	ldr	r0, [r5, #28]	; fField28
        3252c4:	e3a01001 	mov	r1, #1	; 0x1
        3252c8:	e59a2000 	ldr	r2, [sl]
        3252cc:	eb628421 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        3252d0:	e59d1000 	ldr	r1, [sp]
        3252d4:	e5910000 	ldr	r0, [r1]
        3252d8:	e5951018 	ldr	r1, [r5, #24]	; fField24
        3252dc:	e5912000 	ldr	r2, [r1]
        3252e0:	e3a01000 	mov	r1, #0	; 0x0
        3252e4:	eb62841b 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        3252e8:	e59a0000 	ldr	r0, [sl]
        3252ec:	e5951018 	ldr	r1, [r5, #24]	; fField24
        3252f0:	e5312004 	ldr	r2, [r1, -#4]!	; fField4
        3252f4:	e3a01000 	mov	r1, #0	; 0x0
        3252f8:	eb628416 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        3252fc:	e1a0000a 	mov	r0, sl
        325300:	eb6277ad 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        325304:	e59d0000 	ldr	r0, [sp]
        325308:	ea0001f1 	b	325ad4 <TCompiler::Parser(void)+0x2e28>
        32530c:	e5310008 	ldr	r0, [r1, -#8]!	; fField8
        325310:	e585001c 	str	r0, [r5, #28]	; fField28
        325314:	e24dd008 	sub	sp, sp, #8	; 0x8
        325318:	e3a01000 	mov	r1, #0	; 0x0
        32531c:	eb627bcc 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        325320:	eb627389 	bl	1bc214c <$AllocateRefHandle(long)>
        325324:	e58d0004 	str	r0, [sp, #4]	; fField4
        325328:	e3a01001 	mov	r1, #1	; 0x1
        32532c:	e595001c 	ldr	r0, [r5, #28]	; fField28
        325330:	eb627bc7 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        325334:	eb627384 	bl	1bc214c <$AllocateRefHandle(long)>
        325338:	e40d0038 	str	r0, [sp], -#56
        32533c:	e28d103c 	add	r1, sp, #60	; 0x3c
        325340:	e28d0008 	add	r0, sp, #8	; 0x8
        325344:	e3a02000 	mov	r2, #0	; 0x0
        325348:	eb626f68 	bl	1bc10f0 <TObjectIterator::$__ct(RefVar const &, int)>
        32534c:	e28d0008 	add	r0, sp, #8	; 0x8
        325350:	eb6277a1 	bl	1bc31dc <TObjectIterator::$Done(void)>
        325354:	e3300000 	teq	r0, #0	; 0x0
        325358:	1a000021 	bne	3253e4 <TCompiler::Parser(void)+0x2738>
        32535c:	e59d0010 	ldr	r0, [sp, #16]
        325360:	e5900000 	ldr	r0, [r0]
        325364:	e5951018 	ldr	r1, [r5, #24]	; fField24
        325368:	e5911000 	ldr	r1, [r1]
        32536c:	eb627baf 	bl	1bc4230 <$EQRef__FlT1>
        325370:	e3300000 	teq	r0, #0	; 0x0
        325374:	0a000014 	beq	3253cc <TCompiler::Parser(void)+0x2720>
        325378:	e24ddc01 	sub	sp, sp, #256	; 0x100
        32537c:	e5950018 	ldr	r0, [r5, #24]	; fField24
        325380:	e5900000 	ldr	r0, [r0]
        325384:	eb628c33 	bl	1bc8458 <$SymbolName(long)>
        325388:	e1a02000 	mov	r2, r0
        32538c:	e1a0000d 	mov	r0, sp
        325390:	e28f1f05 	add	r1, pc, #20	; 0x14
        325394:	eb6241be 	bl	1bb5a94 <$sprintf>
        325398:	e1a0100d 	mov	r1, sp
        32539c:	e1a00004 	mov	r0, r4
        3253a0:	eb5cd238 	bl	1a59c88 <TCompiler::$Warning(char *)>
        3253a4:	e28ddc01 	add	sp, sp, #256	; 0x100
        3253a8:	ea00000d 	b	3253e4 <TCompiler::Parser(void)+0x2738>
        3253ac:	4475706c 	ldrmibt	r7, [r5], -#108
        3253b0:	69636174 	stmvsdb	r3!, {r2, r4, r5, r6, r8, sp, lr}^
        3253b4:	65206172 	strvs	r6, [r0, -#370]!
        3253b8:	67756d65 	ldrvsb	r6, [r5, -r5, ror #26]!
        3253bc:	6e74206e 	cdpvs	0, 7, cr2, cr4, cr14, {3}
        3253c0:	616d653a 	cmnvs	sp, sl, lsr r5
        3253c4:	2025730d 	eorcs	r7, r5, sp, lsl #6
        3253c8:	00000000 	andeq	r0, r0, r0
        3253cc:	e28d0008 	add	r0, sp, #8	; 0x8
        3253d0:	eb627fc4 	bl	1bc52e8 <TObjectIterator::$Next(void)>
        3253d4:	e28d0008 	add	r0, sp, #8	; 0x8
        3253d8:	eb62777f 	bl	1bc31dc <TObjectIterator::$Done(void)>
        3253dc:	e3300000 	teq	r0, #0	; 0x0
        3253e0:	0affffdd 	beq	32535c <TCompiler::Parser(void)+0x26b0>
        3253e4:	e5950018 	ldr	r0, [r5, #24]	; fField24
        3253e8:	e5900000 	ldr	r0, [r0]
        3253ec:	eb627356 	bl	1bc214c <$AllocateRefHandle(long)>
        3253f0:	e58d0000 	str	r0, [sp]
        3253f4:	e1a0100d 	mov	r1, sp
        3253f8:	e28d003c 	add	r0, sp, #60	; 0x3c
        3253fc:	eb627349 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        325400:	e59d0000 	ldr	r0, [sp]
        325404:	eb62776c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        325408:	e3a00002 	mov	r0, #2	; 0x2
        32540c:	eb62734e 	bl	1bc214c <$AllocateRefHandle(long)>
        325410:	e58d0004 	str	r0, [sp, #4]	; fField4
        325414:	e28d1004 	add	r1, sp, #4	; 0x4
        325418:	e28d0038 	add	r0, sp, #56	; 0x38
        32541c:	eb627341 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        325420:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        325424:	eb627764 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        325428:	e28d0008 	add	r0, sp, #8	; 0x8
        32542c:	e3a01000 	mov	r1, #0	; 0x0
        325430:	e1a0e00f 	mov	lr, pc
        325434:	e59df008 	ldr	pc, [sp, #8]	; fField8
        325438:	e5bd0038 	ldr	r0, [sp, #56]!
        32543c:	eb62775e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        325440:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        325444:	ea0001fd 	b	325c40 <TCompiler::Parser(void)+0x2f94>
        325448:	e531000c 	ldr	r0, [r1, -#12]!	; fField12
        32544c:	e585001c 	str	r0, [r5, #28]	; fField28
        325450:	e24dd008 	sub	sp, sp, #8	; 0x8
        325454:	e3a01000 	mov	r1, #0	; 0x0
        325458:	eb627b7d 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        32545c:	eb62733a 	bl	1bc214c <$AllocateRefHandle(long)>
        325460:	e58d0004 	str	r0, [sp, #4]	; fField4
        325464:	e3a01001 	mov	r1, #1	; 0x1
        325468:	e595001c 	ldr	r0, [r5, #28]	; fField28
        32546c:	eb627b78 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        325470:	eb627335 	bl	1bc214c <$AllocateRefHandle(long)>
        325474:	e40d0038 	str	r0, [sp], -#56
        325478:	e28d103c 	add	r1, sp, #60	; 0x3c
        32547c:	e28d0008 	add	r0, sp, #8	; 0x8
        325480:	e3a02000 	mov	r2, #0	; 0x0
        325484:	eb626f19 	bl	1bc10f0 <TObjectIterator::$__ct(RefVar const &, int)>
        325488:	e28d0008 	add	r0, sp, #8	; 0x8
        32548c:	eb627752 	bl	1bc31dc <TObjectIterator::$Done(void)>
        325490:	e3300000 	teq	r0, #0	; 0x0
        325494:	1a000019 	bne	325500 <TCompiler::Parser(void)+0x2854>
        325498:	e59d0010 	ldr	r0, [sp, #16]
        32549c:	e5900000 	ldr	r0, [r0]
        3254a0:	e5951018 	ldr	r1, [r5, #24]	; fField24
        3254a4:	e5111004 	ldr	r1, [r1, -#4]	; fField4
        3254a8:	eb627b60 	bl	1bc4230 <$EQRef__FlT1>
        3254ac:	e3300000 	teq	r0, #0	; 0x0
        3254b0:	0a00000c 	beq	3254e8 <TCompiler::Parser(void)+0x283c>
        3254b4:	e24ddc01 	sub	sp, sp, #256	; 0x100
        3254b8:	e5950018 	ldr	r0, [r5, #24]	; fField24
        3254bc:	e5100004 	ldr	r0, [r0, -#4]	; fField4
        3254c0:	eb628be4 	bl	1bc8458 <$SymbolName(long)>
        3254c4:	e1a02000 	mov	r2, r0
        3254c8:	e1a0000d 	mov	r0, sp
        3254cc:	e24f1f4a 	sub	r1, pc, #296	; 0x128
        3254d0:	eb62416f 	bl	1bb5a94 <$sprintf>
        3254d4:	e1a0100d 	mov	r1, sp
        3254d8:	e1a00004 	mov	r0, r4
        3254dc:	eb5cd1e9 	bl	1a59c88 <TCompiler::$Warning(char *)>
        3254e0:	e28ddc01 	add	sp, sp, #256	; 0x100
        3254e4:	ea000005 	b	325500 <TCompiler::Parser(void)+0x2854>
        3254e8:	e28d0008 	add	r0, sp, #8	; 0x8
        3254ec:	eb627f7d 	bl	1bc52e8 <TObjectIterator::$Next(void)>
        3254f0:	e28d0008 	add	r0, sp, #8	; 0x8
        3254f4:	eb627738 	bl	1bc31dc <TObjectIterator::$Done(void)>
        3254f8:	e3300000 	teq	r0, #0	; 0x0
        3254fc:	0affffe5 	beq	325498 <TCompiler::Parser(void)+0x27ec>
        325500:	e5950018 	ldr	r0, [r5, #24]	; fField24
        325504:	e5900000 	ldr	r0, [r0]
        325508:	eb62730f 	bl	1bc214c <$AllocateRefHandle(long)>
        32550c:	e58d0000 	str	r0, [sp]
        325510:	e1a0100d 	mov	r1, sp
        325514:	e28d003c 	add	r0, sp, #60	; 0x3c
        325518:	eb627302 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        32551c:	e59d0000 	ldr	r0, [sp]
        325520:	eb627725 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        325524:	e5950018 	ldr	r0, [r5, #24]	; fField24
        325528:	e5100004 	ldr	r0, [r0, -#4]	; fField4
        32552c:	eb627306 	bl	1bc214c <$AllocateRefHandle(long)>
        325530:	e58d0004 	str	r0, [sp, #4]	; fField4
        325534:	e28d1004 	add	r1, sp, #4	; 0x4
        325538:	e28d0038 	add	r0, sp, #56	; 0x38
        32553c:	eb6272f9 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        325540:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        325544:	eb62771c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        325548:	e28d0008 	add	r0, sp, #8	; 0x8
        32554c:	e3a01000 	mov	r1, #0	; 0x0
        325550:	e1a0e00f 	mov	lr, pc
        325554:	e59df008 	ldr	pc, [sp, #8]	; fField8
        325558:	e5bd0038 	ldr	r0, [sp, #56]!
        32555c:	eb627716 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        325560:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        325564:	ea0001b5 	b	325c40 <TCompiler::Parser(void)+0x2f94>
        325568:	e5910000 	ldr	r0, [r1]
        32556c:	e3300002 	teq	r0, #2	; 0x2
        325570:	1585001c 	strne	r0, [r5, #28]	; fField28
        325574:	15312004 	ldrne	r2, [r1, -#4]!	; fField4
        325578:	1a0000d2 	bne	3258c8 <TCompiler::Parser(void)+0x2c1c>
        32557c:	e1a00006 	mov	r0, r6
        325580:	e3a01002 	mov	r1, #2	; 0x2
        325584:	eb6272eb 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        325588:	e585001c 	str	r0, [r5, #28]	; fField28
        32558c:	e1a00006 	mov	r0, r6
        325590:	e3a01002 	mov	r1, #2	; 0x2
        325594:	eb6272e7 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        325598:	eb6272eb 	bl	1bc214c <$AllocateRefHandle(long)>
        32559c:	e1a0a000 	mov	sl, r0
        3255a0:	e595001c 	ldr	r0, [r5, #28]	; fField28
        3255a4:	e3a01000 	mov	r1, #0	; 0x0
        3255a8:	e59a2000 	ldr	r2, [sl]
        3255ac:	eb628369 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        3255b0:	e59a0000 	ldr	r0, [sl]
        3255b4:	e5951018 	ldr	r1, [r5, #24]	; fField24
        3255b8:	e5312004 	ldr	r2, [r1, -#4]!	; fField4
        3255bc:	ea0000b1 	b	325888 <TCompiler::Parser(void)+0x2bdc>
        3255c0:	e1a00006 	mov	r0, r6
        3255c4:	e3a01002 	mov	r1, #2	; 0x2
        3255c8:	eb6272da 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        3255cc:	e585001c 	str	r0, [r5, #28]	; fField28
        3255d0:	e1a00006 	mov	r0, r6
        3255d4:	e3a01002 	mov	r1, #2	; 0x2
        3255d8:	eb6272d6 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        3255dc:	eb6272da 	bl	1bc214c <$AllocateRefHandle(long)>
        3255e0:	e1a0a000 	mov	sl, r0
        3255e4:	e595001c 	ldr	r0, [r5, #28]	; fField28
        3255e8:	e3a01000 	mov	r1, #0	; 0x0
        3255ec:	e59a2000 	ldr	r2, [sl]
        3255f0:	eb628358 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        3255f4:	e59a0000 	ldr	r0, [sl]
        3255f8:	e5951018 	ldr	r1, [r5, #24]	; fField24
        3255fc:	e5312008 	ldr	r2, [r1, -#8]!	; fField8
        325600:	e3a01000 	mov	r1, #0	; 0x0
        325604:	eb628353 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        325608:	e59a0000 	ldr	r0, [sl]
        32560c:	e5951018 	ldr	r1, [r5, #24]	; fField24
        325610:	e5912000 	ldr	r2, [r1]
        325614:	e3a01001 	mov	r1, #1	; 0x1
        325618:	ea00009b 	b	32588c <TCompiler::Parser(void)+0x2be0>
        32561c:	e5110008 	ldr	r0, [r1, -#8]	; fField8
        325620:	e585001c 	str	r0, [r5, #28]	; fField28
        325624:	e24dd004 	sub	sp, sp, #4	; 0x4
        325628:	e5310008 	ldr	r0, [r1, -#8]!	; fField8
        32562c:	e3a01000 	mov	r1, #0	; 0x0
        325630:	eb627b07 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        325634:	eb6272c4 	bl	1bc214c <$AllocateRefHandle(long)>
        325638:	e40d0038 	str	r0, [sp], -#56
        32563c:	e28d1038 	add	r1, sp, #56	; 0x38
        325640:	e28d0008 	add	r0, sp, #8	; 0x8
        325644:	e3a02000 	mov	r2, #0	; 0x0
        325648:	eb626ea8 	bl	1bc10f0 <TObjectIterator::$__ct(RefVar const &, int)>
        32564c:	e28d0008 	add	r0, sp, #8	; 0x8
        325650:	eb6276e1 	bl	1bc31dc <TObjectIterator::$Done(void)>
        325654:	e3300000 	teq	r0, #0	; 0x0
        325658:	1a000021 	bne	3256e4 <TCompiler::Parser(void)+0x2a38>
        32565c:	e59d0010 	ldr	r0, [sp, #16]
        325660:	e5900000 	ldr	r0, [r0]
        325664:	e5951018 	ldr	r1, [r5, #24]	; fField24
        325668:	e5911000 	ldr	r1, [r1]
        32566c:	eb627aef 	bl	1bc4230 <$EQRef__FlT1>
        325670:	e3300000 	teq	r0, #0	; 0x0
        325674:	0a000014 	beq	3256cc <TCompiler::Parser(void)+0x2a20>
        325678:	e24ddc01 	sub	sp, sp, #256	; 0x100
        32567c:	e5950018 	ldr	r0, [r5, #24]	; fField24
        325680:	e5900000 	ldr	r0, [r0]
        325684:	eb628b73 	bl	1bc8458 <$SymbolName(long)>
        325688:	e1a02000 	mov	r2, r0
        32568c:	e1a0000d 	mov	r0, sp
        325690:	e28f1f05 	add	r1, pc, #20	; 0x14
        325694:	eb6240fe 	bl	1bb5a94 <$sprintf>
        325698:	e1a0100d 	mov	r1, sp
        32569c:	e1a00004 	mov	r0, r4
        3256a0:	eb5cd178 	bl	1a59c88 <TCompiler::$Warning(char *)>
        3256a4:	e28ddc01 	add	sp, sp, #256	; 0x100
        3256a8:	ea00000d 	b	3256e4 <TCompiler::Parser(void)+0x2a38>
        3256ac:	4475706c 	ldrmibt	r7, [r5], -#108
        3256b0:	69636174 	stmvsdb	r3!, {r2, r4, r5, r6, r8, sp, lr}^
        3256b4:	65207661 	strvs	r7, [r0, -#1633]!
        3256b8:	72696162 	rsbvc	r6, r9, #-2147483624	; 0x80000018
        3256bc:	6c65206e 	stcvsl	0, cr2, [r5], -#440
        3256c0:	616d653a 	cmnvs	sp, sl, lsr r5
        3256c4:	2025730d 	eorcs	r7, r5, sp, lsl #6
        3256c8:	00000000 	andeq	r0, r0, r0
        3256cc:	e28d0008 	add	r0, sp, #8	; 0x8
        3256d0:	eb627f04 	bl	1bc52e8 <TObjectIterator::$Next(void)>
        3256d4:	e28d0008 	add	r0, sp, #8	; 0x8
        3256d8:	eb6276bf 	bl	1bc31dc <TObjectIterator::$Done(void)>
        3256dc:	e3300000 	teq	r0, #0	; 0x0
        3256e0:	0affffdd 	beq	32565c <TCompiler::Parser(void)+0x29b0>
        3256e4:	e5950018 	ldr	r0, [r5, #24]	; fField24
        3256e8:	e5900000 	ldr	r0, [r0]
        3256ec:	eb627296 	bl	1bc214c <$AllocateRefHandle(long)>
        3256f0:	e58d0000 	str	r0, [sp]
        3256f4:	e1a0100d 	mov	r1, sp
        3256f8:	e28d0038 	add	r0, sp, #56	; 0x38
        3256fc:	eb627289 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        325700:	e59d0000 	ldr	r0, [sp]
        325704:	eb6276ac 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        325708:	e3a00002 	mov	r0, #2	; 0x2
        32570c:	eb62728e 	bl	1bc214c <$AllocateRefHandle(long)>
        325710:	e58d0004 	str	r0, [sp, #4]	; fField4
        325714:	e28d1004 	add	r1, sp, #4	; 0x4
        325718:	e28d0038 	add	r0, sp, #56	; 0x38
        32571c:	eb627281 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        325720:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        325724:	eb6276a4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        325728:	e28d0008 	add	r0, sp, #8	; 0x8
        32572c:	e3a01000 	mov	r1, #0	; 0x0
        325730:	e1a0e00f 	mov	lr, pc
        325734:	e59df008 	ldr	pc, [sp, #8]	; fField8
        325738:	e5bd0038 	ldr	r0, [sp, #56]!
        32573c:	ea0000e4 	b	325ad4 <TCompiler::Parser(void)+0x2e28>
        325740:	e5110010 	ldr	r0, [r1, -#16]
        325744:	e585001c 	str	r0, [r5, #28]	; fField28
        325748:	e24dd004 	sub	sp, sp, #4	; 0x4
        32574c:	e5310010 	ldr	r0, [r1, -#16]!
        325750:	e3a01000 	mov	r1, #0	; 0x0
        325754:	eb627abe 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        325758:	eb62727b 	bl	1bc214c <$AllocateRefHandle(long)>
        32575c:	e40d0038 	str	r0, [sp], -#56
        325760:	e28d1038 	add	r1, sp, #56	; 0x38
        325764:	e28d0008 	add	r0, sp, #8	; 0x8
        325768:	e3a02000 	mov	r2, #0	; 0x0
        32576c:	eb626e5f 	bl	1bc10f0 <TObjectIterator::$__ct(RefVar const &, int)>
        325770:	e28d0008 	add	r0, sp, #8	; 0x8
        325774:	eb627698 	bl	1bc31dc <TObjectIterator::$Done(void)>
        325778:	e3300000 	teq	r0, #0	; 0x0
        32577c:	1a000019 	bne	3257e8 <TCompiler::Parser(void)+0x2b3c>
        325780:	e59d0010 	ldr	r0, [sp, #16]
        325784:	e5900000 	ldr	r0, [r0]
        325788:	e5951018 	ldr	r1, [r5, #24]	; fField24
        32578c:	e5111008 	ldr	r1, [r1, -#8]	; fField8
        325790:	eb627aa6 	bl	1bc4230 <$EQRef__FlT1>
        325794:	e3300000 	teq	r0, #0	; 0x0
        325798:	0a00000c 	beq	3257d0 <TCompiler::Parser(void)+0x2b24>
        32579c:	e24ddc01 	sub	sp, sp, #256	; 0x100
        3257a0:	e5950018 	ldr	r0, [r5, #24]	; fField24
        3257a4:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        3257a8:	eb628b2a 	bl	1bc8458 <$SymbolName(long)>
        3257ac:	e1a02000 	mov	r2, r0
        3257b0:	e1a0000d 	mov	r0, sp
        3257b4:	e24f1f44 	sub	r1, pc, #272	; 0x110
        3257b8:	eb6240b5 	bl	1bb5a94 <$sprintf>
        3257bc:	e1a0100d 	mov	r1, sp
        3257c0:	e1a00004 	mov	r0, r4
        3257c4:	eb5cd12f 	bl	1a59c88 <TCompiler::$Warning(char *)>
        3257c8:	e28ddc01 	add	sp, sp, #256	; 0x100
        3257cc:	ea000005 	b	3257e8 <TCompiler::Parser(void)+0x2b3c>
        3257d0:	e28d0008 	add	r0, sp, #8	; 0x8
        3257d4:	eb627ec3 	bl	1bc52e8 <TObjectIterator::$Next(void)>
        3257d8:	e28d0008 	add	r0, sp, #8	; 0x8
        3257dc:	eb62767e 	bl	1bc31dc <TObjectIterator::$Done(void)>
        3257e0:	e3300000 	teq	r0, #0	; 0x0
        3257e4:	0affffe5 	beq	325780 <TCompiler::Parser(void)+0x2ad4>
        3257e8:	e5950018 	ldr	r0, [r5, #24]	; fField24
        3257ec:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        3257f0:	eb627255 	bl	1bc214c <$AllocateRefHandle(long)>
        3257f4:	e58d0000 	str	r0, [sp]
        3257f8:	e1a0100d 	mov	r1, sp
        3257fc:	e28d0038 	add	r0, sp, #56	; 0x38
        325800:	eb627248 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        325804:	e59d0000 	ldr	r0, [sp]
        325808:	eb62766b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        32580c:	e5950018 	ldr	r0, [r5, #24]	; fField24
        325810:	e5900000 	ldr	r0, [r0]
        325814:	eb62724c 	bl	1bc214c <$AllocateRefHandle(long)>
        325818:	e58d0004 	str	r0, [sp, #4]	; fField4
        32581c:	e28d1004 	add	r1, sp, #4	; 0x4
        325820:	e28d0038 	add	r0, sp, #56	; 0x38
        325824:	eb62723f 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        325828:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        32582c:	eb627662 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        325830:	e28d0008 	add	r0, sp, #8	; 0x8
        325834:	e3a01000 	mov	r1, #0	; 0x0
        325838:	e1a0e00f 	mov	lr, pc
        32583c:	e59df008 	ldr	pc, [sp, #8]	; fField8
        325840:	e5bd0038 	ldr	r0, [sp, #56]!
        325844:	ea0000a2 	b	325ad4 <TCompiler::Parser(void)+0x2e28>
        325848:	e1a00006 	mov	r0, r6
        32584c:	e3a01002 	mov	r1, #2	; 0x2
        325850:	eb627238 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        325854:	e585001c 	str	r0, [r5, #28]	; fField28
        325858:	e1a00006 	mov	r0, r6
        32585c:	e3a01002 	mov	r1, #2	; 0x2
        325860:	eb627234 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        325864:	eb627238 	bl	1bc214c <$AllocateRefHandle(long)>
        325868:	e1a0a000 	mov	sl, r0
        32586c:	e595001c 	ldr	r0, [r5, #28]	; fField28
        325870:	e3a01000 	mov	r1, #0	; 0x0
        325874:	e59a2000 	ldr	r2, [sl]
        325878:	eb6282b6 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        32587c:	e59a0000 	ldr	r0, [sl]
        325880:	e5951018 	ldr	r1, [r5, #24]	; fField24
        325884:	e5912000 	ldr	r2, [r1]
        325888:	e3a01000 	mov	r1, #0	; 0x0
        32588c:	eb6282b1 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        325890:	e1a0000a 	mov	r0, sl
        325894:	eb627648 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        325898:	ea000107 	b	325cbc <TCompiler::Parser(void)+0x3010>
        32589c:	e1a00006 	mov	r0, r6
        3258a0:	e3a01002 	mov	r1, #2	; 0x2
        3258a4:	eb627223 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        3258a8:	e585001c 	str	r0, [r5, #28]	; fField28
        3258ac:	e5951018 	ldr	r1, [r5, #24]	; fField24
        3258b0:	e5312008 	ldr	r2, [r1, -#8]!	; fField8
        3258b4:	e3a01000 	mov	r1, #0	; 0x0
        3258b8:	eb6282a6 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        3258bc:	e595001c 	ldr	r0, [r5, #28]	; fField28
        3258c0:	e5951018 	ldr	r1, [r5, #24]	; fField24
        3258c4:	e5912000 	ldr	r2, [r1]
        3258c8:	e3a01001 	mov	r1, #1	; 0x1
        3258cc:	eb6282a1 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        3258d0:	ea0000f9 	b	325cbc <TCompiler::Parser(void)+0x3010>
        3258d4:	e24dd010 	sub	sp, sp, #16	; 0x10
        3258d8:	e5110010 	ldr	r0, [r1, -#16]
        3258dc:	e585001c 	str	r0, [r5, #28]	; fField28
        3258e0:	e5310008 	ldr	r0, [r1, -#8]!	; fField8
        3258e4:	eb627218 	bl	1bc214c <$AllocateRefHandle(long)>
        3258e8:	e58d0000 	str	r0, [sp]
        3258ec:	e1a0a00d 	mov	sl, sp
        3258f0:	e595001c 	ldr	r0, [r5, #28]	; fField28
        3258f4:	eb627214 	bl	1bc214c <$AllocateRefHandle(long)>
        3258f8:	e58d0004 	str	r0, [sp, #4]	; fField4
        3258fc:	e28d0004 	add	r0, sp, #4	; 0x4
        325900:	e1a0100a 	mov	r1, sl
        325904:	eb627207 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        325908:	e59d0000 	ldr	r0, [sp]
        32590c:	eb62762a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        325910:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        325914:	eb627628 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        325918:	e5950018 	ldr	r0, [r5, #24]	; fField24
        32591c:	e5900000 	ldr	r0, [r0]
        325920:	eb627209 	bl	1bc214c <$AllocateRefHandle(long)>
        325924:	e58d0008 	str	r0, [sp, #8]	; fField8
        325928:	e28da008 	add	sl, sp, #8	; 0x8
        32592c:	e595001c 	ldr	r0, [r5, #28]	; fField28
        325930:	eb627205 	bl	1bc214c <$AllocateRefHandle(long)>
        325934:	e58d000c 	str	r0, [sp, #12]	; fField12
        325938:	e28d000c 	add	r0, sp, #12	; 0xc
        32593c:	e1a0100a 	mov	r1, sl
        325940:	eb6271f8 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        325944:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        325948:	eb62761b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        32594c:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        325950:	eb627619 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        325954:	e28dd010 	add	sp, sp, #16	; 0x10
        325958:	ea0000d7 	b	325cbc <TCompiler::Parser(void)+0x3010>
        32595c:	eb6271f7 	bl	1bc2140 <$AllocateFrame(void)>
        325960:	ea00004d 	b	325a9c <TCompiler::Parser(void)+0x2df0>
        325964:	e24dd00c 	sub	sp, sp, #12	; 0xc
        325968:	eb6271f4 	bl	1bc2140 <$AllocateFrame(void)>
        32596c:	e585001c 	str	r0, [r5, #28]	; fField28
        325970:	e5950018 	ldr	r0, [r5, #24]	; fField24
        325974:	e5900000 	ldr	r0, [r0]
        325978:	eb6271f3 	bl	1bc214c <$AllocateRefHandle(long)>
        32597c:	e40d0004 	str	r0, [sp], -#4	; fField4
        325980:	e28d2004 	add	r2, sp, #4	; 0x4
        325984:	e58d2000 	str	r2, [sp]
        325988:	e5950018 	ldr	r0, [r5, #24]	; fField24
        32598c:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        325990:	eb6271ed 	bl	1bc214c <$AllocateRefHandle(long)>
        325994:	e58d0008 	str	r0, [sp, #8]	; fField8
        325998:	e28da008 	add	sl, sp, #8	; 0x8
        32599c:	e595001c 	ldr	r0, [r5, #28]	; fField28
        3259a0:	eb6271e9 	bl	1bc214c <$AllocateRefHandle(long)>
        3259a4:	e58d000c 	str	r0, [sp, #12]	; fField12
        3259a8:	e28d000c 	add	r0, sp, #12	; 0xc
        3259ac:	e1a0100a 	mov	r1, sl
        3259b0:	e49d2004 	ldr	r2, [sp], #4	; fField4
        3259b4:	eb62826b 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        3259b8:	e59d0000 	ldr	r0, [sp]
        3259bc:	eb6275fe 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3259c0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        3259c4:	eb6275fc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3259c8:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        3259cc:	ea0000b8 	b	325cb4 <TCompiler::Parser(void)+0x3008>
        3259d0:	e5110010 	ldr	r0, [r1, -#16]
        3259d4:	e585001c 	str	r0, [r5, #28]	; fField28
        3259d8:	e24dd00c 	sub	sp, sp, #12	; 0xc
        3259dc:	e5111008 	ldr	r1, [r1, -#8]	; fField8
        3259e0:	eb627a18 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        3259e4:	e3300000 	teq	r0, #0	; 0x0
        3259e8:	0a00000b 	beq	325a1c <TCompiler::Parser(void)+0x2d70>
        3259ec:	e24ddc01 	sub	sp, sp, #256	; 0x100
        3259f0:	e5950018 	ldr	r0, [r5, #24]	; fField24
        3259f4:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        3259f8:	eb628a96 	bl	1bc8458 <$SymbolName(long)>
        3259fc:	e1a02000 	mov	r2, r0
        325a00:	e1a0000d 	mov	r0, sp
        325a04:	e59f1070 	ldr	r1, [pc, #70]	; 325a7c <TCompiler::Parser(void)+0x2dd0>
        325a08:	eb624021 	bl	1bb5a94 <$sprintf>
        325a0c:	e1a0100d 	mov	r1, sp
        325a10:	e1a00004 	mov	r0, r4
        325a14:	eb5cd09b 	bl	1a59c88 <TCompiler::$Warning(char *)>
        325a18:	e28ddc01 	add	sp, sp, #256	; 0x100
        325a1c:	e5950018 	ldr	r0, [r5, #24]	; fField24
        325a20:	e5900000 	ldr	r0, [r0]
        325a24:	eb6271c8 	bl	1bc214c <$AllocateRefHandle(long)>
        325a28:	e40d0004 	str	r0, [sp], -#4	; fField4
        325a2c:	e28d2004 	add	r2, sp, #4	; 0x4
        325a30:	e58d2000 	str	r2, [sp]
        325a34:	e5950018 	ldr	r0, [r5, #24]	; fField24
        325a38:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        325a3c:	eb6271c2 	bl	1bc214c <$AllocateRefHandle(long)>
        325a40:	e58d0008 	str	r0, [sp, #8]	; fField8
        325a44:	e28da008 	add	sl, sp, #8	; 0x8
        325a48:	e595001c 	ldr	r0, [r5, #28]	; fField28
        325a4c:	eb6271be 	bl	1bc214c <$AllocateRefHandle(long)>
        325a50:	e58d000c 	str	r0, [sp, #12]	; fField12
        325a54:	e28d000c 	add	r0, sp, #12	; 0xc
        325a58:	e1a0100a 	mov	r1, sl
        325a5c:	e49d2004 	ldr	r2, [sp], #4	; fField4
        325a60:	eb628240 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        325a64:	e59d0000 	ldr	r0, [sp]
        325a68:	eb6275d3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        325a6c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        325a70:	eb6275d1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        325a74:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        325a78:	ea00008d 	b	325cb4 <TCompiler::Parser(void)+0x3008>
        325a7c:	0032335c 	eoreqs	r3, r2, ip, asr r3
        325a80:	e5910000 	ldr	r0, [r1]
        325a84:	e3100003 	tst	r0, #3	; 0x3
        325a88:	01a00140 	moveq	r0, r0, asr #2
        325a8c:	0a000000 	beq	325a94 <TCompiler::Parser(void)+0x2de8>
        325a90:	eb6271a1 	bl	1bc211c <$_RINTError(long)>
        325a94:	e2600000 	rsb	r0, r0, #0	; 0x0
        325a98:	e1a00100 	mov	r0, r0, lsl #2
        325a9c:	e585001c 	str	r0, [r5, #28]	; fField28
        325aa0:	ea000085 	b	325cbc <TCompiler::Parser(void)+0x3010>
        325aa4:	e24dd004 	sub	sp, sp, #4	; 0x4
        325aa8:	e5910000 	ldr	r0, [r1]
        325aac:	eb6271a6 	bl	1bc214c <$AllocateRefHandle(long)>
        325ab0:	e58d0000 	str	r0, [sp]
        325ab4:	e1a0000d 	mov	r0, sp
        325ab8:	eb6271a9 	bl	1bc2164 <$CDouble(RefVar const &)>
        325abc:	ee108180 	mnfd	f0, f0
        325ac0:	ed2d8102 	stfd	f0, [sp, -#8]!	; fField8
        325ac4:	e8bd0003 	ldmia	sp!, {r0, r1}
        325ac8:	eb627dff 	bl	1bc52cc <$MakeReal(double)>
        325acc:	e585001c 	str	r0, [r5, #28]	; fField28
        325ad0:	e59d0000 	ldr	r0, [sp]
        325ad4:	eb6275b8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        325ad8:	ea000045 	b	325bf4 <TCompiler::Parser(void)+0x2f48>
        325adc:	e24dd008 	sub	sp, sp, #8	; 0x8
        325ae0:	e5110004 	ldr	r0, [r1, -#4]	; fField4
        325ae4:	e585001c 	str	r0, [r5, #28]	; fField28
        325ae8:	e531000c 	ldr	r0, [r1, -#12]!	; fField12
        325aec:	eb627196 	bl	1bc214c <$AllocateRefHandle(long)>
        325af0:	e58d0000 	str	r0, [sp]
        325af4:	e1a0a00d 	mov	sl, sp
        325af8:	e5950018 	ldr	r0, [r5, #24]	; fField24
        325afc:	e5100004 	ldr	r0, [r0, -#4]	; fField4
        325b00:	eb627191 	bl	1bc214c <$AllocateRefHandle(long)>
        325b04:	e58d0004 	str	r0, [sp, #4]	; fField4
        325b08:	e28d0004 	add	r0, sp, #4	; 0x4
        325b0c:	e1a0100a 	mov	r1, sl
        325b10:	eb628211 	bl	1bc635c <$SetClass__FRC6RefVarT1>
        325b14:	e59d0000 	ldr	r0, [sp]
        325b18:	eb6275a7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        325b1c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        325b20:	ea000046 	b	325c40 <TCompiler::Parser(void)+0x2f94>
        325b24:	e24dd004 	sub	sp, sp, #4	; 0x4
        325b28:	e5310008 	ldr	r0, [r1, -#8]!	; fField8
        325b2c:	eb627186 	bl	1bc214c <$AllocateRefHandle(long)>
        325b30:	e58d0000 	str	r0, [sp]
        325b34:	e1a0000d 	mov	r0, sp
        325b38:	eb62718a 	bl	1bc2168 <$ClassOf(RefVar const &)>
        325b3c:	e59f1078 	ldr	r1, [pc, #78]	; 325bbc <TCompiler::Parser(void)+0x2f10>
        325b40:	e5911000 	ldr	r1, [r1]
        325b44:	e5911000 	ldr	r1, [r1]
        325b48:	eb6279b8 	bl	1bc4230 <$EQRef__FlT1>
        325b4c:	e1b0a000 	movs	sl, r0
        325b50:	13a0a001 	movne	sl, #1	; 0x1
        325b54:	e59d0000 	ldr	r0, [sp]
        325b58:	eb627597 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        325b5c:	e33a0000 	teq	sl, #0	; 0x0
        325b60:	0a000016 	beq	325bc0 <TCompiler::Parser(void)+0x2f14>
        325b64:	e24dd008 	sub	sp, sp, #8	; 0x8
        325b68:	e5950018 	ldr	r0, [r5, #24]	; fField24
        325b6c:	e5900000 	ldr	r0, [r0]
        325b70:	eb627175 	bl	1bc214c <$AllocateRefHandle(long)>
        325b74:	e58d0000 	str	r0, [sp]
        325b78:	e1a0a00d 	mov	sl, sp
        325b7c:	e5950018 	ldr	r0, [r5, #24]	; fField24
        325b80:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        325b84:	eb627170 	bl	1bc214c <$AllocateRefHandle(long)>
        325b88:	e58d0004 	str	r0, [sp, #4]	; fField4
        325b8c:	e28d0004 	add	r0, sp, #4	; 0x4
        325b90:	e1a0100a 	mov	r1, sl
        325b94:	eb627163 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        325b98:	e59d0000 	ldr	r0, [sp]
        325b9c:	eb627586 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        325ba0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        325ba4:	eb627584 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        325ba8:	e5950018 	ldr	r0, [r5, #24]	; fField24
        325bac:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        325bb0:	e585001c 	str	r0, [r5, #28]	; fField28
        325bb4:	e28dd008 	add	sp, sp, #8	; 0x8
        325bb8:	ea00000d 	b	325bf4 <TCompiler::Parser(void)+0x2f48>
        325bbc:	00683d78 	rsbeq	r3, r8, r8, ror sp
        325bc0:	e3a01002 	mov	r1, #2	; 0x2
        325bc4:	e59d001c 	ldr	r0, [sp, #28]	; fField28
        325bc8:	eb62715a 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        325bcc:	e585001c 	str	r0, [r5, #28]	; fField28
        325bd0:	e5951018 	ldr	r1, [r5, #24]	; fField24
        325bd4:	e5312008 	ldr	r2, [r1, -#8]!	; fField8
        325bd8:	e3a01000 	mov	r1, #0	; 0x0
        325bdc:	eb6281dd 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        325be0:	e595001c 	ldr	r0, [r5, #28]	; fField28
        325be4:	e5951018 	ldr	r1, [r5, #24]	; fField24
        325be8:	e5912000 	ldr	r2, [r1]
        325bec:	e3a01001 	mov	r1, #1	; 0x1
        325bf0:	eb6281d8 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        325bf4:	e28dd004 	add	sp, sp, #4	; 0x4
        325bf8:	ea00002f 	b	325cbc <TCompiler::Parser(void)+0x3010>
        325bfc:	e24dd008 	sub	sp, sp, #8	; 0x8
        325c00:	e5110008 	ldr	r0, [r1, -#8]	; fField8
        325c04:	e585001c 	str	r0, [r5, #28]	; fField28
        325c08:	e5910000 	ldr	r0, [r1]
        325c0c:	eb62714e 	bl	1bc214c <$AllocateRefHandle(long)>
        325c10:	e58d0000 	str	r0, [sp]
        325c14:	e1a0a00d 	mov	sl, sp
        325c18:	e5950018 	ldr	r0, [r5, #24]	; fField24
        325c1c:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        325c20:	eb627149 	bl	1bc214c <$AllocateRefHandle(long)>
        325c24:	e58d0004 	str	r0, [sp, #4]	; fField4
        325c28:	e28d0004 	add	r0, sp, #4	; 0x4
        325c2c:	e1a0100a 	mov	r1, sl
        325c30:	eb62713c 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        325c34:	e59d0000 	ldr	r0, [sp]
        325c38:	eb62755f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        325c3c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        325c40:	eb62755d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        325c44:	e28dd008 	add	sp, sp, #8	; 0x8
        325c48:	ea00001b 	b	325cbc <TCompiler::Parser(void)+0x3010>
        325c4c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        325c50:	eb62713a 	bl	1bc2140 <$AllocateFrame(void)>
        325c54:	e585001c 	str	r0, [r5, #28]	; fField28
        325c58:	e5950018 	ldr	r0, [r5, #24]	; fField24
        325c5c:	e5900000 	ldr	r0, [r0]
        325c60:	eb627139 	bl	1bc214c <$AllocateRefHandle(long)>
        325c64:	e58d0000 	str	r0, [sp]
        325c68:	e1a0a00d 	mov	sl, sp
        325c6c:	e5950018 	ldr	r0, [r5, #24]	; fField24
        325c70:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        325c74:	eb627134 	bl	1bc214c <$AllocateRefHandle(long)>
        325c78:	e58d0004 	str	r0, [sp, #4]	; fField4
        325c7c:	e28d1004 	add	r1, sp, #4	; 0x4
        325c80:	e52d1004 	str	r1, [sp, -#4]!	; fField4
        325c84:	e595001c 	ldr	r0, [r5, #28]	; fField28
        325c88:	eb62712f 	bl	1bc214c <$AllocateRefHandle(long)>
        325c8c:	e58d000c 	str	r0, [sp, #12]	; fField12
        325c90:	e28d000c 	add	r0, sp, #12	; 0xc
        325c94:	e1a0200a 	mov	r2, sl
        325c98:	e49d1004 	ldr	r1, [sp], #4	; fField4
        325c9c:	eb6281b1 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        325ca0:	e59d0000 	ldr	r0, [sp]
        325ca4:	eb627544 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        325ca8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        325cac:	eb627542 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        325cb0:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        325cb4:	eb627540 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        325cb8:	e28dd00c 	add	sp, sp, #12	; 0xc
        325cbc:	e5950014 	ldr	r0, [r5, #20]	; fField20
        325cc0:	e0401089 	sub	r1, r0, r9, lsl #1
        325cc4:	e5851014 	str	r1, [r5, #20]	; fField20
        325cc8:	e5910000 	ldr	r0, [r1]
        325ccc:	e1b00840 	movs	r0, r0, asr #16
        325cd0:	e5850010 	str	r0, [r5, #16]
        325cd4:	e5953018 	ldr	r3, [r5, #24]	; fField24
        325cd8:	e0433109 	sub	r3, r3, r9, lsl #2
        325cdc:	e5853018 	str	r3, [r5, #24]	; fField24
        325ce0:	e59d3014 	ldr	r3, [sp, #20]	; fField20
        325ce4:	e7933088 	ldr	r3, [r3, r8, lsl #1]
        325ce8:	e1a03843 	mov	r3, r3, asr #16
        325cec:	03330000 	teqeq	r3, #0	; 0x0
        325cf0:	1a000044 	bne	325e08 <TCompiler::Parser(void)+0x315c>
        325cf4:	e5950000 	ldr	r0, [r5]
        325cf8:	e3300000 	teq	r0, #0	; 0x0
        325cfc:	0a000003 	beq	325d10 <TCompiler::Parser(void)+0x3064>
        325d00:	e5970000 	ldr	r0, [r7]
        325d04:	e28f1f2d 	add	r1, pc, #180	; 0xb4
        325d08:	e3a0201f 	mov	r2, #31	; 0x1f
        325d0c:	eb019069 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        325d10:	e3a0101f 	mov	r1, #31	; 0x1f
        325d14:	e5851010 	str	r1, [r5, #16]
        325d18:	e5950014 	ldr	r0, [r5, #20]	; fField20
        325d1c:	e2800002 	add	r0, r0, #2	; 0x2
        325d20:	e5850014 	str	r0, [r5, #20]	; fField20
        325d24:	e5c01001 	strb	r1, [r0, #1]
        325d28:	e3a08000 	mov	r8, #0	; 0x0
        325d2c:	e5c08000 	strb	r8, [r0]
        325d30:	e2851018 	add	r1, r5, #24	; 0x18
        325d34:	e8910003 	ldmia	r1, {r0, r1}
        325d38:	e2800004 	add	r0, r0, #4	; 0x4
        325d3c:	e5850018 	str	r0, [r5, #24]	; fField24
        325d40:	e5801000 	str	r1, [r0]
        325d44:	e595000c 	ldr	r0, [r5, #12]	; fField12
        325d48:	e3500000 	cmp	r0, #0	; 0x0
        325d4c:	aa000016 	bge	325dac <TCompiler::Parser(void)+0x3100>
        325d50:	e1a00004 	mov	r0, r4
        325d54:	eb5cbf49 	bl	1a55a80 <TCompiler::$GetToken(void)>
        325d58:	e585000c 	str	r0, [r5, #12]	; fField12
        325d5c:	e3500000 	cmp	r0, #0	; 0x0
        325d60:	b585800c 	strlt	r8, [r5, #12]	; fField12
        325d64:	e5950000 	ldr	r0, [r5]
        325d68:	e3300000 	teq	r0, #0	; 0x0
        325d6c:	0a00000e 	beq	325dac <TCompiler::Parser(void)+0x3100>
        325d70:	e595000c 	ldr	r0, [r5, #12]	; fField12
        325d74:	e3500f4e 	cmp	r0, #312	; 0x138
        325d78:	ca000003 	bgt	325d8c <TCompiler::Parser(void)+0x30e0>
        325d7c:	e59d1010 	ldr	r1, [sp, #16]
        325d80:	e7913100 	ldr	r3, [r1, r0, lsl #2]
        325d84:	e3330000 	teq	r3, #0	; 0x0
        325d88:	1a000000 	bne	325d90 <TCompiler::Parser(void)+0x30e4>
        325d8c:	e59f306c 	ldr	r3, [pc, #6c]	; 325e00 <TCompiler::Parser(void)+0x3154>
        325d90:	e92d0008 	stmdb	sp!, {r3}
        325d94:	e1a03000 	mov	r3, r0
        325d98:	e5970000 	ldr	r0, [r7]
        325d9c:	e59f1060 	ldr	r1, [pc, #60]	; 325e04 <TCompiler::Parser(void)+0x3158>
        325da0:	e3a0201f 	mov	r2, #31	; 0x1f
        325da4:	eb019043 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        325da8:	e28dd004 	add	sp, sp, #4	; 0x4
        325dac:	e595000c 	ldr	r0, [r5, #12]	; fField12
        325db0:	e3300000 	teq	r0, #0	; 0x0
        325db4:	1afff3ec 	bne	322d6c <TCompiler::Parser(void)+0xc0>
        325db8:	e3a00000 	mov	r0, #0	; 0x0
        325dbc:	ea00005c 	b	325f34 <TCompiler::Parser(void)+0x3288>
        325dc0:	79796465 	ldmvcdb	r9!, {r0, r2, r5, r6, sl, sp, lr}^
        325dc4:	6275673a 	rsbvss	r6, r5, #15204352	; 0xe80000
        325dc8:	20616674 	rsbcs	r6, r1, r4, ror r6
        325dcc:	65722072 	ldrvsb	r2, [r2, -#114]!
        325dd0:	65647563 	strvsb	r7, [r4, -#1379]!	; fField1379
        325dd4:	74696f6e 	strvcbt	r6, [r9], -#3950
        325dd8:	2c207368 	stccs	3, cr7, [r0], -#416
        325ddc:	69667469 	stmvsdb	r6!, {r0, r3, r5, r6, sl, ip, sp, lr}^
        325de0:	6e672066 	cdpvs	0, 6, cr2, cr7, cr6, {3}
        325de4:	726f6d20 	rsbvc	r6, pc, #2048	; 0x800
        325de8:	73746174 	cmnvc	r4, #29	; 0x1d
        325dec:	65203020 	strvs	r3, [r0, -#32]!
        325df0:	746f2073 	strvcbt	r2, [pc], #73	; 325df8 <TCompiler::Parser(void)+0x314c>
        325df4:	74617465 	strvcbt	r7, [r1], -#1125
        325df8:	2025640d 	eorcs	r6, r5, sp, lsl #8
        325dfc:	00000000 	andeq	r0, r0, r0
        325e00:	00322f24 	eoreqs	r2, r2, r4, lsr #30
        325e04:	00322f34 	eoreqs	r2, r2, r4, lsr pc
        325e08:	e59d200c 	ldr	r2, [sp, #12]	; fField12
        325e0c:	e7922083 	ldr	r2, [r2, r3, lsl #1]
        325e10:	e1a02842 	mov	r2, r2, asr #16
        325e14:	e3320000 	teq	r2, #0	; 0x0
        325e18:	0a00000c 	beq	325e50 <TCompiler::Parser(void)+0x31a4>
        325e1c:	e0922000 	adds	r2, r2, r0
        325e20:	4a00000a 	bmi	325e50 <TCompiler::Parser(void)+0x31a4>
        325e24:	e252cc11 	subs	ip, r2, #4352	; 0x1100
        325e28:	a35c0031 	cmpge	ip, #49	; 0x31
        325e2c:	ca000007 	bgt	325e50 <TCompiler::Parser(void)+0x31a4>
        325e30:	e59dc008 	ldr	ip, [sp, #8]	; fField8
        325e34:	e79cc082 	ldr	ip, [ip, r2, lsl #1]
        325e38:	e1a0c84c 	mov	ip, ip, asr #16
        325e3c:	e13c0000 	teq	ip, r0
        325e40:	059d0004 	ldreq	r0, [sp, #4]	; fField4
        325e44:	07900082 	ldreq	r0, [r0, r2, lsl #1]
        325e48:	01a00840 	moveq	r0, r0, asr #16
        325e4c:	0a000002 	beq	325e5c <TCompiler::Parser(void)+0x31b0>
        325e50:	e59d0000 	ldr	r0, [sp]
        325e54:	e7900083 	ldr	r0, [r0, r3, lsl #1]
        325e58:	e1a00840 	mov	r0, r0, asr #16
        325e5c:	e5850010 	str	r0, [r5, #16]
        325e60:	e5950000 	ldr	r0, [r5]
        325e64:	e3300000 	teq	r0, #0	; 0x0
        325e68:	0a000005 	beq	325e84 <TCompiler::Parser(void)+0x31d8>
        325e6c:	e5953010 	ldr	r3, [r5, #16]
        325e70:	e5912000 	ldr	r2, [r1]
        325e74:	e1a02842 	mov	r2, r2, asr #16
        325e78:	e5970000 	ldr	r0, [r7]
        325e7c:	e28f1f18 	add	r1, pc, #96	; 0x60
        325e80:	eb01900c 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        325e84:	e594000c 	ldr	r0, [r4, #12]	; fField12
        325e88:	e5951024 	ldr	r1, [r5, #36]	; fField36
        325e8c:	e0810080 	add	r0, r1, r0, lsl #1
        325e90:	e2401002 	sub	r1, r0, #2	; 0x2
        325e94:	e5950014 	ldr	r0, [r5, #20]	; fField20
        325e98:	e1510000 	cmp	r1, r0
        325e9c:	8a000003 	bhi	325eb0 <TCompiler::Parser(void)+0x3204>
        325ea0:	e1a00004 	mov	r0, r4
        325ea4:	eb5cc321 	bl	1a56b30 <TCompiler::$ParserStackOverflow(void)>
        325ea8:	e3300000 	teq	r0, #0	; 0x0
        325eac:	1a00001c 	bne	325f24 <TCompiler::Parser(void)+0x3278>
        325eb0:	e2851010 	add	r1, r5, #16	; 0x10
        325eb4:	e8910003 	ldmia	r1, {r0, r1}
        325eb8:	e2811002 	add	r1, r1, #2	; 0x2
        325ebc:	e5851014 	str	r1, [r5, #20]	; fField20
        325ec0:	e5c10001 	strb	r0, [r1, #1]
        325ec4:	e1a00440 	mov	r0, r0, asr #8
        325ec8:	e5c10000 	strb	r0, [r1]
        325ecc:	e5951018 	ldr	r1, [r5, #24]	; fField24
        325ed0:	e2811004 	add	r1, r1, #4	; 0x4
        325ed4:	e595001c 	ldr	r0, [r5, #28]	; fField28
        325ed8:	e5851018 	str	r1, [r5, #24]	; fField24
        325edc:	e5810000 	str	r0, [r1]
        325ee0:	eafff3a1 	b	322d6c <TCompiler::Parser(void)+0xc0>
        325ee4:	79796465 	ldmvcdb	r9!, {r0, r2, r5, r6, sl, sp, lr}^
        325ee8:	6275673a 	rsbvss	r6, r5, #15204352	; 0xe80000
        325eec:	20616674 	rsbcs	r6, r1, r4, ror r6
        325ef0:	65722072 	ldrvsb	r2, [r2, -#114]!
        325ef4:	65647563 	strvsb	r7, [r4, -#1379]!	; fField1379
        325ef8:	74696f6e 	strvcbt	r6, [r9], -#3950
        325efc:	2c207368 	stccs	3, cr7, [r0], -#416
        325f00:	69667469 	stmvsdb	r6!, {r0, r3, r5, r6, sl, ip, sp, lr}^
        325f04:	6e672066 	cdpvs	0, 6, cr2, cr7, cr6, {3}
        325f08:	726f6d20 	rsbvc	r6, pc, #2048	; 0x800
        325f0c:	73746174 	cmnvc	r4, #29	; 0x1d
        325f10:	65202564 	strvs	r2, [r0, -#1380]!
        325f14:	20746f20 	rsbcss	r6, r4, r0, lsr #30
        325f18:	73746174 	cmnvc	r4, #29	; 0x1d
        325f1c:	65202564 	strvs	r2, [r0, -#1380]!
        325f20:	0d000000 	stceq	0, cr0, [r0]
        325f24:	e1a00004 	mov	r0, r4
        325f28:	e28f1f02 	add	r1, pc, #8	; 0x8
        325f2c:	eb5cc72e 	bl	1a57bec <TCompiler::$SyntaxError(char *)>
        325f30:	e3a00001 	mov	r0, #1	; 0x1
        325f34:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        325f38:	79616363 	stmvcdb	r1!, {r0, r1, r5, r6, r8, r9, sp, lr}^
        325f3c:	20737461 	rsbcss	r7, r3, r1, ror #8
        325f40:	636b206f 	cmnvs	fp, #111	; 0x6f
        325f44:	76657266 	strvcbt	r7, [r5], -r6, ror #4	; fField4
        325f48:	6c6f7700 	stcvsl	7, cr7, [pc]
    */
}

/**
 * Symbol: TCompiler::ParserStackOverflow(void)
 * Address: 00325f4c
 */
TCompiler::ParserStackOverflow(void) {
    /*
        325f4c:	e1a0c00d 	mov	ip, sp
        325f50:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        325f54:	e24cb004 	sub	fp, ip, #4	; 0x4
        325f58:	e1a04000 	mov	r4, r0
        325f5c:	e3a09001 	mov	r9, #1	; 0x1
        325f60:	e3a00000 	mov	r0, #0	; 0x0
        325f64:	e52d006c 	str	r0, [sp, -#108]!
        325f68:	e28d0008 	add	r0, sp, #8	; 0x8
        325f6c:	eb623280 	bl	1bb2974 <$setjmp>
        325f70:	e3300000 	teq	r0, #0	; 0x0
        325f74:	1a00002e 	bne	326034 <TCompiler::ParserStackOverflow(void)+0xe8>
        325f78:	e1a0000d 	mov	r0, sp
        325f7c:	eb62e83e 	bl	1be007c <$AddExceptionHandler>
        325f80:	e59f50a8 	ldr	r5, [pc, #a8]	; 326030 <TCompiler::ParserStackOverflow(void)+0xe4>
        325f84:	e5950014 	ldr	r0, [r5, #20]	; fField20
        325f88:	e5951024 	ldr	r1, [r5, #36]	; fField36
        325f8c:	e0408001 	sub	r8, r0, r1
        325f90:	e0888fa8 	add	r8, r8, r8, lsr #31
        325f94:	e1a080c8 	mov	r8, r8, asr #1
        325f98:	e594000c 	ldr	r0, [r4, #12]	; fField12
        325f9c:	e0800100 	add	r0, r0, r0, lsl #2
        325fa0:	e1a07120 	mov	r7, r0, lsr #2
        325fa4:	e1a00087 	mov	r0, r7, lsl #1
        325fa8:	eb62a1e2 	bl	1bce738 <$__nw(unsigned int)>
        325fac:	e1b06000 	movs	r6, r0
        325fb0:	0a000026 	beq	326050 <TCompiler::ParserStackOverflow(void)+0x104>
        325fb4:	e594000c 	ldr	r0, [r4, #12]	; fField12
        325fb8:	e1a02080 	mov	r2, r0, lsl #1
        325fbc:	e1a01006 	mov	r1, r6
        325fc0:	e5940018 	ldr	r0, [r4, #24]	; fField24
        325fc4:	eb62e3e2 	bl	1bdef54 <$BlockMove>
        325fc8:	e5940018 	ldr	r0, [r4, #24]	; fField24
        325fcc:	eb629dc3 	bl	1bcd6e0 <$__dl(void *)>
        325fd0:	e5846018 	str	r6, [r4, #24]	; fField24
        325fd4:	e5856024 	str	r6, [r5, #36]	; fField36
        325fd8:	e0860088 	add	r0, r6, r8, lsl #1
        325fdc:	e5850014 	str	r0, [r5, #20]	; fField20
        325fe0:	e2840010 	add	r0, r4, #16	; 0x10
        325fe4:	e1a06000 	mov	r6, r0
        325fe8:	e5900000 	ldr	r0, [r0]
        325fec:	e5900000 	ldr	r0, [r0]
        325ff0:	eb62891e 	bl	1bc8470 <$UnlockRef(long)>
        325ff4:	e1a00006 	mov	r0, r6
        325ff8:	e1a01007 	mov	r1, r7
        325ffc:	eb6280da 	bl	1bc636c <$SetLength(RefVar const &, long)>
        326000:	e5960000 	ldr	r0, [r6]
        326004:	e5900000 	ldr	r0, [r0]
        326008:	eb627ca9 	bl	1bc52b4 <$LockRef(long)>
        32600c:	e5960000 	ldr	r0, [r6]
        326010:	e5900000 	ldr	r0, [r0]
        326014:	eb6280d7 	bl	1bc6378 <$Slots(long)>
        326018:	e5840014 	str	r0, [r4, #20]	; fField20
        32601c:	e0800108 	add	r0, r0, r8, lsl #2
        326020:	e5a50018 	str	r0, [r5, #24]!	; fField24
        326024:	e3a09000 	mov	r9, #0	; 0x0
        326028:	e5a4700c 	str	r7, [r4, #12]!	; fField12
        32602c:	ea000007 	b	326050 <TCompiler::ParserStackOverflow(void)+0x104>
        326030:	0c105574 	ldceq	5, cr5, [r0], -#464
        326034:	e59d0060 	ldr	r0, [sp, #96]
        326038:	e59f1020 	ldr	r1, [pc, #20]	; 326060 <TCompiler::ParserStackOverflow(void)+0x114>	; fField20
        32603c:	e5911000 	ldr	r1, [r1]
        326040:	eb62f453 	bl	1be3194 <$Subexception>
        326044:	e3300000 	teq	r0, #0	; 0x0
        326048:	01a0000d 	moveq	r0, sp
        32604c:	0b62f040 	bleq	1be2154 <$NextHandler>
        326050:	e1a0000d 	mov	r0, sp
        326054:	eb62ec17 	bl	1be10b8 <$ExitHandler>
        326058:	e1a00009 	mov	r0, r9
        32605c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        326060:	003712a4 	eoreqs	r1, r7, r4, lsr #5
    */
}

/**
 * Symbol: TCompiler::SyntaxError(char *)
 * Address: 00326064
 */
TCompiler::SyntaxError(char *) {
    /*
        326064:	e1a0c00d 	mov	ip, sp
        326068:	e92ddff3 	stmdb	sp!, {r0, r1, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        32606c:	e24cb004 	sub	fp, ip, #4	; 0x4
        326070:	e24dd008 	sub	sp, sp, #8	; 0x8
        326074:	e59f60c0 	ldr	r6, [pc, #c0]	; 32613c <TCompiler::SyntaxError(char *)+0xd8>
        326078:	e596000c 	ldr	r0, [r6, #12]	; fField12
        32607c:	e3700001 	cmn	r0, #1	; 0x1
        326080:	0a00008c 	beq	3262b8 <TCompiler::SyntaxError(char *)+0x254>
        326084:	e24ddd09 	sub	sp, sp, #576	; 0x240
        326088:	e28d5040 	add	r5, sp, #64	; 0x40
        32608c:	e59f80ac 	ldr	r8, [pc, #ac]	; 326140 <TCompiler::SyntaxError(char *)+0xdc>
        326090:	e3500f4e 	cmp	r0, #312	; 0x138
        326094:	ca000002 	bgt	3260a4 <TCompiler::SyntaxError(char *)+0x40>
        326098:	e7984100 	ldr	r4, [r8, r0, lsl #2]
        32609c:	e3340000 	teq	r4, #0	; 0x0
        3260a0:	1a000000 	bne	3260a8 <TCompiler::SyntaxError(char *)+0x44>
        3260a4:	e28f4f26 	add	r4, pc, #152	; 0x98
        3260a8:	e240cc01 	sub	ip, r0, #256	; 0x100
        3260ac:	e33c0003 	teq	ip, #3	; 0x3
        3260b0:	0a000033 	beq	326184 <TCompiler::SyntaxError(char *)+0x120>
        3260b4:	e3300f41 	teq	r0, #260	; 0x104
        3260b8:	0a00003a 	beq	3261a8 <TCompiler::SyntaxError(char *)+0x144>
        3260bc:	e240cf41 	sub	ip, r0, #260	; 0x104
        3260c0:	e33c0001 	teq	ip, #1	; 0x1
        3260c4:	e24dd004 	sub	sp, sp, #4	; 0x4
        3260c8:	1a000043 	bne	3261dc <TCompiler::SyntaxError(char *)+0x178>
        3260cc:	e5960020 	ldr	r0, [r6, #32]
        3260d0:	eb62701d 	bl	1bc214c <$AllocateRefHandle(long)>
        3260d4:	e58d0000 	str	r0, [sp]
        3260d8:	e1a0000d 	mov	r0, sp
        3260dc:	eb627020 	bl	1bc2164 <$CDouble(RefVar const &)>
        3260e0:	e28d0004 	add	r0, sp, #4	; 0x4
        3260e4:	e28f1f1a 	add	r1, pc, #104	; 0x68
        3260e8:	ed2d8102 	stfd	f0, [sp, -#8]!	; fField8
        3260ec:	e8bd000c 	ldmia	sp!, {r2, r3}
        3260f0:	eb623e67 	bl	1bb5a94 <$sprintf>
        3260f4:	e59d0000 	ldr	r0, [sp]
        3260f8:	eb62742f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3260fc:	e28dd004 	add	sp, sp, #4	; 0x4
        326100:	e1a0300d 	mov	r3, sp
        326104:	e92d0008 	stmdb	sp!, {r3}
        326108:	e1a03004 	mov	r3, r4
        32610c:	e1a00005 	mov	r0, r5
        326110:	e51b202c 	ldr	r2, [fp, -#44]	; fField44
        326114:	e28f1f10 	add	r1, pc, #64	; 0x40
        326118:	eb623e5d 	bl	1bb5a94 <$sprintf>
        32611c:	e0804005 	add	r4, r0, r5
        326120:	e3a09000 	mov	r9, #0	; 0x0
        326124:	e3a05000 	mov	r5, #0	; 0x0
        326128:	e59fa048 	ldr	sl, [pc, #48]	; 326178 <TCompiler::SyntaxError(char *)+0x114>	; fField48
        32612c:	e59f2048 	ldr	r2, [pc, #48]	; 32617c <TCompiler::SyntaxError(char *)+0x118>	; fField48
        326130:	e58d2248 	str	r2, [sp, #584]
        326134:	e59f7044 	ldr	r7, [pc, #44]	; 326180 <TCompiler::SyntaxError(char *)+0x11c>	; fField44
        326138:	ea00002a 	b	3261e8 <TCompiler::SyntaxError(char *)+0x184>
        32613c:	0c105574 	ldceq	5, cr5, [r0], -#464
        326140:	0037fde8 	eoreqs	pc, r7, r8, ror #27
        326144:	696c6c65 	stmvsdb	ip!, {r0, r2, r5, r6, sl, fp, sp, lr}^
        326148:	67616c20 	strvsb	r6, [r1, -r0, lsr #24]!	; fField24
        32614c:	73796d62 	cmnvc	r9, #6272	; 0x1880
        326150:	6f6c0000 	swivs	0x006c0000
        326154:	20252367 	eorcs	r2, r5, r7, ror #6
        326158:	00000000 	andeq	r0, r0, r0
        32615c:	25732d2d 	ldrcsb	r2, [r3, -#3373]!
        326160:	72656164 	rsbvc	r6, r5, #25	; 0x19
        326164:	20257325 	eorcs	r7, r5, r5, lsr #6
        326168:	732c2062 	teqvc	ip, #98	; 0x62
        32616c:	75742077 	ldrvcb	r2, [r4, -#119]!
        326170:	616e7465 	cmnvs	lr, r5, ror #8
        326174:	64200000 	strvst	r0, [r0]
        326178:	0037b65c 	eoreqs	fp, r7, ip, asr r6
        32617c:	0037b3f4 	ldreqsh	fp, [r7], -r4
        326180:	0037db84 	eoreqs	sp, r7, r4, lsl #23
        326184:	e24dd004 	sub	sp, sp, #4	; 0x4
        326188:	e5960020 	ldr	r0, [r6, #32]
        32618c:	eb6288b1 	bl	1bc8458 <$SymbolName(long)>
        326190:	e1a02000 	mov	r2, r0
        326194:	e28d0004 	add	r0, sp, #4	; 0x4
        326198:	e28f1f00 	add	r1, pc, #0	; 0x0
        32619c:	ea00000a 	b	3261cc <TCompiler::SyntaxError(char *)+0x168>
        3261a0:	20222573 	eorcs	r2, r2, r3, ror r5
        3261a4:	22000000 	andcs	r0, r0, #0	; 0x0
        3261a8:	e24dd004 	sub	sp, sp, #4	; 0x4
        3261ac:	e5960020 	ldr	r0, [r6, #32]
        3261b0:	e3100003 	tst	r0, #3	; 0x3
        3261b4:	01a00140 	moveq	r0, r0, asr #2
        3261b8:	0a000000 	beq	3261c0 <TCompiler::SyntaxError(char *)+0x15c>
        3261bc:	eb626fd6 	bl	1bc211c <$_RINTError(long)>
        3261c0:	e1a02000 	mov	r2, r0
        3261c4:	e28d0004 	add	r0, sp, #4	; 0x4
        3261c8:	e28f1f01 	add	r1, pc, #4	; 0x4
        3261cc:	eb623e30 	bl	1bb5a94 <$sprintf>
        3261d0:	eaffffc9 	b	3260fc <TCompiler::SyntaxError(char *)+0x98>
        3261d4:	20256c64 	eorcs	r6, r5, r4, ror #24
        3261d8:	00000000 	andeq	r0, r0, r0
        3261dc:	e3a00000 	mov	r0, #0	; 0x0
        3261e0:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        3261e4:	eaffffc4 	b	3260fc <TCompiler::SyntaxError(char *)+0x98>
        3261e8:	e5961010 	ldr	r1, [r6, #16]
        3261ec:	e79a0081 	ldr	r0, [sl, r1, lsl #1]
        3261f0:	e1a00840 	mov	r0, r0, asr #16
        3261f4:	e59d2248 	ldr	r2, [sp, #584]
        3261f8:	e7921081 	ldr	r1, [r2, r1, lsl #1]
        3261fc:	e1a01841 	mov	r1, r1, asr #16
        326200:	e0900005 	adds	r0, r0, r5
        326204:	4a000006 	bmi	326224 <TCompiler::SyntaxError(char *)+0x1c0>
        326208:	e250cc11 	subs	ip, r0, #4352	; 0x1100
        32620c:	a35c0031 	cmpge	ip, #49	; 0x31
        326210:	ca000003 	bgt	326224 <TCompiler::SyntaxError(char *)+0x1c0>
        326214:	e7970080 	ldr	r0, [r7, r0, lsl #1]
        326218:	e1a00840 	mov	r0, r0, asr #16
        32621c:	e1300005 	teq	r0, r5
        326220:	0a000008 	beq	326248 <TCompiler::SyntaxError(char *)+0x1e4>
        326224:	e0910005 	adds	r0, r1, r5
        326228:	4a000012 	bmi	326278 <TCompiler::SyntaxError(char *)+0x214>
        32622c:	e250cc11 	subs	ip, r0, #4352	; 0x1100
        326230:	a35c0031 	cmpge	ip, #49	; 0x31
        326234:	ca00000f 	bgt	326278 <TCompiler::SyntaxError(char *)+0x214>
        326238:	e7970080 	ldr	r0, [r7, r0, lsl #1]
        32623c:	e1a00840 	mov	r0, r0, asr #16
        326240:	e1300005 	teq	r0, r5
        326244:	1a00000b 	bne	326278 <TCompiler::SyntaxError(char *)+0x214>
        326248:	e1b00009 	movs	r0, r9
        32624c:	e2899001 	add	r9, r9, #1	; 0x1
        326250:	0a000003 	beq	326264 <TCompiler::SyntaxError(char *)+0x200>
        326254:	e1a00004 	mov	r0, r4
        326258:	e28f1f21 	add	r1, pc, #132	; 0x84
        32625c:	eb623e0c 	bl	1bb5a94 <$sprintf>
        326260:	e0804004 	add	r4, r0, r4
        326264:	e7982105 	ldr	r2, [r8, r5, lsl #2]
        326268:	e1a00004 	mov	r0, r4
        32626c:	e28f1f1d 	add	r1, pc, #116	; 0x74
        326270:	eb623e07 	bl	1bb5a94 <$sprintf>
        326274:	e0804004 	add	r4, r0, r4
        326278:	e2855001 	add	r5, r5, #1	; 0x1
        32627c:	e3550f4e 	cmp	r5, #312	; 0x138
        326280:	daffffd8 	ble	3261e8 <TCompiler::SyntaxError(char *)+0x184>
        326284:	e3a00000 	mov	r0, #0	; 0x0
        326288:	e5c40000 	strb	r0, [r4]
        32628c:	e28d0044 	add	r0, sp, #68	; 0x44
        326290:	eb627c0e 	bl	1bc52d0 <$MakeString(char const *)>
        326294:	eb626fac 	bl	1bc214c <$AllocateRefHandle(long)>
        326298:	e58d0000 	str	r0, [sp]
        32629c:	e1a0200d 	mov	r2, sp
        3262a0:	e51b0030 	ldr	r0, [fp, -#48]	; fField48
        3262a4:	e59f1040 	ldr	r1, [pc, #40]	; 3262ec <TCompiler::SyntaxError(char *)+0x288>	; fField40
        3262a8:	eb5cb5bc 	bl	1a539a0 <TCompiler::$Error(long, RefVar const &)>
        3262ac:	e59d0000 	ldr	r0, [sp]
        3262b0:	eb6273c1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3262b4:	e28ddf91 	add	sp, sp, #580	; 0x244
        3262b8:	e51b002c 	ldr	r0, [fp, -#44]	; fField44
        3262bc:	eb627c03 	bl	1bc52d0 <$MakeString(char const *)>
        3262c0:	eb626fa1 	bl	1bc214c <$AllocateRefHandle(long)>
        3262c4:	e58d0000 	str	r0, [sp]
        3262c8:	e1a0200d 	mov	r2, sp
        3262cc:	e51b0030 	ldr	r0, [fp, -#48]	; fField48
        3262d0:	e59f1014 	ldr	r1, [pc, #14]	; 3262ec <TCompiler::SyntaxError(char *)+0x288>
        3262d4:	eb5cb5b1 	bl	1a539a0 <TCompiler::$Error(long, RefVar const &)>
        3262d8:	e59d0000 	ldr	r0, [sp]
        3262dc:	eb6273b6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3262e0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        3262e4:	2c200000 	stccs	0, cr0, [r0]
        3262e8:	25730000 	ldrcsb	r0, [r3]!
        3262ec:	ffff4227 	swinv	0x00ff4227
    */
}

/**
 * Symbol: TCompiler::GetCharsUntil(unsigned short, int, long &)
 * Address: 0032639c
 */
TCompiler::GetCharsUntil(unsigned short, int, long &) {
    /*
        32639c:	e1a0c00d 	mov	ip, sp
        3263a0:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        3263a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        3263a8:	e1a04000 	mov	r4, r0
        3263ac:	e1a00801 	mov	r0, r1, lsl #16
        3263b0:	e1a00820 	mov	r0, r0, lsr #16
        3263b4:	e3a09000 	mov	r9, #0	; 0x0
        3263b8:	e3e06000 	mvn	r6, #0	; 0x0
        3263bc:	e3a07000 	mov	r7, #0	; 0x0
        3263c0:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        3263c4:	e24dd008 	sub	sp, sp, #8	; 0x8
        3263c8:	e51b2030 	ldr	r2, [fp, -#48]	; fField48
        3263cc:	e3320000 	teq	r2, #0	; 0x0
        3263d0:	03a00001 	moveq	r0, #1	; 0x1
        3263d4:	13a00002 	movne	r0, #2	; 0x2
        3263d8:	e1a01080 	mov	r1, r0, lsl #1
        3263dc:	e3a05000 	mov	r5, #0	; 0x0
        3263e0:	e3a08000 	mov	r8, #0	; 0x0
        3263e4:	e58d1004 	str	r1, [sp, #4]	; fField4
        3263e8:	e58d8000 	str	r8, [sp]
        3263ec:	e3350000 	teq	r5, #0	; 0x0
        3263f0:	0a000003 	beq	326404 <TCompiler::GetCharsUntil(unsigned short, int, long &)+0x68>
        3263f4:	e2481004 	sub	r1, r8, #4	; 0x4
        3263f8:	e59d0000 	ldr	r0, [sp]
        3263fc:	e1510000 	cmp	r1, r0
        326400:	2a00000f 	bcs	326444 <TCompiler::GetCharsUntil(unsigned short, int, long &)+0xa8>
        326404:	e2880080 	add	r0, r8, #128	; 0x80
        326408:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        32640c:	eb62c1d5 	bl	1bd6b68 <$malloc>
        326410:	e1b0a000 	movs	sl, r0
        326414:	028f0f19 	addeq	r0, pc, #100	; 0x64
        326418:	0b62f360 	bleq	1be31a0 <$ThrowMsg>
        32641c:	e3350000 	teq	r5, #0	; 0x0
        326420:	0a000005 	beq	32643c <TCompiler::GetCharsUntil(unsigned short, int, long &)+0xa0>
        326424:	e1a02008 	mov	r2, r8
        326428:	e1a0100a 	mov	r1, sl
        32642c:	e1a00005 	mov	r0, r5
        326430:	eb62e2c7 	bl	1bdef54 <$BlockMove>
        326434:	e1a00005 	mov	r0, r5
        326438:	eb62b146 	bl	1bd2958 <$free>
        32643c:	e1a0500a 	mov	r5, sl
        326440:	e49d8004 	ldr	r8, [sp], #4	; fField4
        326444:	e5940008 	ldr	r0, [r4, #8]	; fField8
        326448:	e5901000 	ldr	r1, [r0]
        32644c:	e1a0e00f 	mov	lr, pc
        326450:	e281f004 	add	pc, r1, #4	; 0x4
        326454:	e1a0a000 	mov	sl, r0
        326458:	ebffffa4 	bl	3262f0 <dbprint(unsigned short)>
        32645c:	e24accff 	sub	ip, sl, #65280	; 0xff00
        326460:	e33c00ff 	teq	ip, #255	; 0xff
        326464:	1a00000d 	bne	3264a0 <TCompiler::GetCharsUntil(unsigned short, int, long &)+0x104>
        326468:	e1a00005 	mov	r0, r5
        32646c:	eb62b139 	bl	1bd2958 <$free>
        326470:	e1a00004 	mov	r0, r4
        326474:	e3a0101e 	mov	r1, #30	; 0x1e
        326478:	e2411cbe 	sub	r1, r1, #48640	; 0xbe00
        32647c:	ea000041 	b	326588 <TCompiler::GetCharsUntil(unsigned short, int, long &)+0x1ec>
        326480:	436f6d70 	cmnmi	pc, #7168	; 0x1c00
        326484:	696c6572 	stmvsdb	ip!, {r1, r4, r5, r6, r8, sl, sp, lr}^
        326488:	2063616e 	rsbcs	r6, r3, lr, ror #2
        32648c:	27742067 	ldrcsb	r2, [r4, -r7, rrx]!
        326490:	65742062 	ldrvsb	r2, [r4, -#98]!	; fField98
        326494:	75666665 	strvcb	r6, [r6, -#1637]!
        326498:	72207370 	eorvc	r7, r0, #-1073741823	; 0xc0000001
        32649c:	61636500 	cmnvs	r3, r0, lsl #10
        3264a0:	e3390000 	teq	r9, #0	; 0x0
        3264a4:	0a00002a 	beq	326554 <TCompiler::GetCharsUntil(unsigned short, int, long &)+0x1b8>
        3264a8:	e33a0075 	teq	sl, #117	; 0x75
        3264ac:	133a0055 	teqne	sl, #85	; 0x55
        3264b0:	1a000005 	bne	3264cc <TCompiler::GetCharsUntil(unsigned short, int, long &)+0x130>
        3264b4:	e3560000 	cmp	r6, #0	; 0x0
        3264b8:	b3a06000 	movlt	r6, #0	; 0x0
        3264bc:	ba000022 	blt	32654c <TCompiler::GetCharsUntil(unsigned short, int, long &)+0x1b0>
        3264c0:	03e06000 	mvneq	r6, #0	; 0x0
        3264c4:	0a000020 	beq	32654c <TCompiler::GetCharsUntil(unsigned short, int, long &)+0x1b0>
        3264c8:	ea000029 	b	326574 <TCompiler::GetCharsUntil(unsigned short, int, long &)+0x1d8>
        3264cc:	e3560000 	cmp	r6, #0	; 0x0
        3264d0:	ba000005 	blt	3264ec <TCompiler::GetCharsUntil(unsigned short, int, long &)+0x150>
        3264d4:	e1a00005 	mov	r0, r5
        3264d8:	eb62b11e 	bl	1bd2958 <$free>
        3264dc:	e1a00004 	mov	r0, r4
        3264e0:	e3a01f87 	mov	r1, #540	; 0x21c
        3264e4:	e2411903 	sub	r1, r1, #49152	; 0xc000
        3264e8:	ea000026 	b	326588 <TCompiler::GetCharsUntil(unsigned short, int, long &)+0x1ec>
        3264ec:	e33a006e 	teq	sl, #110	; 0x6e
        3264f0:	133a004e 	teqne	sl, #78	; 0x4e
        3264f4:	03a0100d 	moveq	r1, #13	; 0xd
        3264f8:	0a000003 	beq	32650c <TCompiler::GetCharsUntil(unsigned short, int, long &)+0x170>
        3264fc:	e33a0074 	teq	sl, #116	; 0x74
        326500:	133a0054 	teqne	sl, #84	; 0x54
        326504:	1a000006 	bne	326524 <TCompiler::GetCharsUntil(unsigned short, int, long &)+0x188>
        326508:	e3a01009 	mov	r1, #9	; 0x9
        32650c:	e59d0000 	ldr	r0, [sp]
        326510:	e0850000 	add	r0, r5, r0
        326514:	e5c01001 	strb	r1, [r0, #1]
        326518:	e3a01000 	mov	r1, #0	; 0x0
        32651c:	e5c01000 	strb	r1, [r0]
        326520:	ea000006 	b	326540 <TCompiler::GetCharsUntil(unsigned short, int, long &)+0x1a4>
        326524:	e1a0080a 	mov	r0, sl, lsl #16
        326528:	e1a00820 	mov	r0, r0, lsr #16
        32652c:	e59d1000 	ldr	r1, [sp]
        326530:	e0851001 	add	r1, r5, r1
        326534:	e5c10001 	strb	r0, [r1, #1]
        326538:	e1a00420 	mov	r0, r0, lsr #8
        32653c:	e5c10000 	strb	r0, [r1]
        326540:	e59d0000 	ldr	r0, [sp]
        326544:	e2800002 	add	r0, r0, #2	; 0x2
        326548:	e58d0000 	str	r0, [sp]
        32654c:	e3a09000 	mov	r9, #0	; 0x0
        326550:	eaffffa5 	b	3263ec <TCompiler::GetCharsUntil(unsigned short, int, long &)+0x50>
        326554:	e33a005c 	teq	sl, #92	; 0x5c
        326558:	03a09001 	moveq	r9, #1	; 0x1
        32655c:	0affffa2 	beq	3263ec <TCompiler::GetCharsUntil(unsigned short, int, long &)+0x50>
        326560:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        326564:	e13a0000 	teq	sl, r0
        326568:	1a000033 	bne	32663c <TCompiler::GetCharsUntil(unsigned short, int, long &)+0x2a0>
        32656c:	e3560000 	cmp	r6, #0	; 0x0
        326570:	da000007 	ble	326594 <TCompiler::GetCharsUntil(unsigned short, int, long &)+0x1f8>
        326574:	e1a00005 	mov	r0, r5
        326578:	eb62b0f6 	bl	1bd2958 <$free>
        32657c:	e1a00004 	mov	r0, r4
        326580:	e3a0101d 	mov	r1, #29	; 0x1d
        326584:	e2411cbe 	sub	r1, r1, #48640	; 0xbe00
        326588:	eb5cb503 	bl	1a5399c <TCompiler::$Error(long)>
        32658c:	e3a00000 	mov	r0, #0	; 0x0
        326590:	ea000027 	b	326634 <TCompiler::GetCharsUntil(unsigned short, int, long &)+0x298>
        326594:	e51b2030 	ldr	r2, [fp, -#48]	; fField48
        326598:	e3320000 	teq	r2, #0	; 0x0
        32659c:	0a000019 	beq	326608 <TCompiler::GetCharsUntil(unsigned short, int, long &)+0x26c>
        3265a0:	e5940008 	ldr	r0, [r4, #8]	; fField8
        3265a4:	e5901000 	ldr	r1, [r0]
        3265a8:	e1a0e00f 	mov	lr, pc
        3265ac:	e281f004 	add	pc, r1, #4	; 0x4
        3265b0:	e1a0a000 	mov	sl, r0
        3265b4:	ebffff4d 	bl	3262f0 <dbprint(unsigned short)>
        3265b8:	e1a0000a 	mov	r0, sl
        3265bc:	eb630fe2 	bl	1bea54c <$IsWhiteSpace(unsigned short)>
        3265c0:	e3300000 	teq	r0, #0	; 0x0
        3265c4:	1afffff5 	bne	3265a0 <TCompiler::GetCharsUntil(unsigned short, int, long &)+0x204>
        3265c8:	e33a0060 	teq	sl, #96	; 0x60
        3265cc:	0afffff3 	beq	3265a0 <TCompiler::GetCharsUntil(unsigned short, int, long &)+0x204>
        3265d0:	e24accff 	sub	ip, sl, #65280	; 0xff00
        3265d4:	e33c00ff 	teq	ip, #255	; 0xff
        3265d8:	0a00000a 	beq	326608 <TCompiler::GetCharsUntil(unsigned short, int, long &)+0x26c>
        3265dc:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        3265e0:	e13a0000 	teq	sl, r0
        3265e4:	0affff80 	beq	3263ec <TCompiler::GetCharsUntil(unsigned short, int, long &)+0x50>
        3265e8:	e1a0100a 	mov	r1, sl
        3265ec:	e5b42008 	ldr	r2, [r4, #8]!	; fField8
        3265f0:	e1a00002 	mov	r0, r2
        3265f4:	e5922000 	ldr	r2, [r2]
        3265f8:	e1a0e00f 	mov	lr, pc
        3265fc:	e282f008 	add	pc, r2, #8	; 0x8
        326600:	e28f0f0c 	add	r0, pc, #48	; 0x30
        326604:	ebffff57 	bl	326368 <dbprint(char *)>
        326608:	e3a00000 	mov	r0, #0	; 0x0
        32660c:	e59d1000 	ldr	r1, [sp]
        326610:	e0851001 	add	r1, r5, r1
        326614:	e5c10001 	strb	r0, [r1, #1]
        326618:	e5c10000 	strb	r0, [r1]
        32661c:	e59d0000 	ldr	r0, [sp]
        326620:	e2800002 	add	r0, r0, #2	; 0x2
        326624:	e58d0000 	str	r0, [sp]
        326628:	e51b302c 	ldr	r3, [fp, -#44]	; fField44
        32662c:	e5830000 	str	r0, [r3]
        326630:	e1a00005 	mov	r0, r5
        326634:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        326638:	756e0000 	strvcb	r0, [lr]!
        32663c:	e3560000 	cmp	r6, #0	; 0x0
        326640:	ba00003f 	blt	326744 <TCompiler::GetCharsUntil(unsigned short, int, long &)+0x3a8>
        326644:	e1a0000a 	mov	r0, sl
        326648:	eb630fb7 	bl	1bea52c <$IsDigit(unsigned short)>
        32664c:	e3300000 	teq	r0, #0	; 0x0
        326650:	124a0030 	subne	r0, sl, #48	; 0x30
        326654:	1a00000a 	bne	326684 <TCompiler::GetCharsUntil(unsigned short, int, long &)+0x2e8>
        326658:	e35a0061 	cmp	sl, #97	; 0x61
        32665c:	ba000002 	blt	32666c <TCompiler::GetCharsUntil(unsigned short, int, long &)+0x2d0>
        326660:	e35a0066 	cmp	sl, #102	; 0x66
        326664:	d24a0057 	suble	r0, sl, #87	; 0x57
        326668:	da000005 	ble	326684 <TCompiler::GetCharsUntil(unsigned short, int, long &)+0x2e8>
        32666c:	e35a0041 	cmp	sl, #65	; 0x41
        326670:	ba000002 	blt	326680 <TCompiler::GetCharsUntil(unsigned short, int, long &)+0x2e4>
        326674:	e35a0046 	cmp	sl, #70	; 0x46
        326678:	d24a0037 	suble	r0, sl, #55	; 0x37
        32667c:	da000000 	ble	326684 <TCompiler::GetCharsUntil(unsigned short, int, long &)+0x2e8>
        326680:	e3e00000 	mvn	r0, #0	; 0x0
        326684:	e3700001 	cmn	r0, #1	; 0x1
        326688:	1a000011 	bne	3266d4 <TCompiler::GetCharsUntil(unsigned short, int, long &)+0x338>
        32668c:	e24dd004 	sub	sp, sp, #4	; 0x4
        326690:	e1a00005 	mov	r0, r5
        326694:	eb62b0af 	bl	1bd2958 <$free>
        326698:	e3a00001 	mov	r0, #1	; 0x1
        32669c:	e180110a 	orr	r1, r0, sl, lsl #2
        3266a0:	e3a00002 	mov	r0, #2	; 0x2
        3266a4:	e1800101 	orr	r0, r0, r1, lsl #2
        3266a8:	eb626ea7 	bl	1bc214c <$AllocateRefHandle(long)>
        3266ac:	e58d0000 	str	r0, [sp]
        3266b0:	e1a0200d 	mov	r2, sp
        3266b4:	e1a00004 	mov	r0, r4
        3266b8:	e59f1010 	ldr	r1, [pc, #10]	; 3266d0 <TCompiler::GetCharsUntil(unsigned short, int, long &)+0x334>
        3266bc:	eb5cb4b7 	bl	1a539a0 <TCompiler::$Error(long, RefVar const &)>
        3266c0:	e59d0000 	ldr	r0, [sp]
        3266c4:	eb6272bc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3266c8:	e3a00000 	mov	r0, #0	; 0x0
        3266cc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        3266d0:	ffff421b 	swinv	0x00ff421b
        3266d4:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        3266d8:	e1560001 	cmp	r6, r1
        3266dc:	b0807207 	addlt	r7, r0, r7, lsl #4
        3266e0:	b2866001 	addlt	r6, r6, #1	; 0x1
        3266e4:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        3266e8:	e1360001 	teq	r6, r1
        3266ec:	1affff3e 	bne	3263ec <TCompiler::GetCharsUntil(unsigned short, int, long &)+0x50>
        3266f0:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        3266f4:	e3310004 	teq	r1, #4	; 0x4
        3266f8:	1a00000a 	bne	326728 <TCompiler::GetCharsUntil(unsigned short, int, long &)+0x38c>
        3266fc:	e1a00807 	mov	r0, r7, lsl #16
        326700:	e1a00820 	mov	r0, r0, lsr #16
        326704:	e59d1000 	ldr	r1, [sp]
        326708:	e0851001 	add	r1, r5, r1
        32670c:	e5c10001 	strb	r0, [r1, #1]
        326710:	e1a00420 	mov	r0, r0, lsr #8
        326714:	e5c10000 	strb	r0, [r1]
        326718:	e59d0000 	ldr	r0, [sp]
        32671c:	e2800002 	add	r0, r0, #2	; 0x2
        326720:	e58d0000 	str	r0, [sp]
        326724:	ea000003 	b	326738 <TCompiler::GetCharsUntil(unsigned short, int, long &)+0x39c>
        326728:	e59d0000 	ldr	r0, [sp]
        32672c:	e2801001 	add	r1, r0, #1	; 0x1
        326730:	e58d1000 	str	r1, [sp]
        326734:	e7c57000 	strb	r7, [r5, r0]
        326738:	e3a07000 	mov	r7, #0	; 0x0
        32673c:	e3a06000 	mov	r6, #0	; 0x0
        326740:	eaffff29 	b	3263ec <TCompiler::GetCharsUntil(unsigned short, int, long &)+0x50>
        326744:	e1a0080a 	mov	r0, sl, lsl #16
        326748:	e1a00820 	mov	r0, r0, lsr #16
        32674c:	e59d1000 	ldr	r1, [sp]
        326750:	e0851001 	add	r1, r5, r1
        326754:	e5c10001 	strb	r0, [r1, #1]
        326758:	e1a00420 	mov	r0, r0, lsr #8
        32675c:	e5c10000 	strb	r0, [r1]
        326760:	e59d0000 	ldr	r0, [sp]
        326764:	e2800002 	add	r0, r0, #2	; 0x2
        326768:	e58d0000 	str	r0, [sp]
        32676c:	eaffff1e 	b	3263ec <TCompiler::GetCharsUntil(unsigned short, int, long &)+0x50>
        326770:	616e6400 	cmnvs	lr, r0, lsl #8
        326774:	62656769 	rsbvs	r6, r5, #27525120	; 0x1a40000
        326778:	6e000000 	cdpvs	0, 0, cr0, cr0, cr0, {0}
        32677c:	62726561 	rsbvss	r6, r2, #406847488	; 0x18400000
        326780:	6b000000 	blvs	326788 <TCompiler::GetCharsUntil(unsigned short, int, long &)+0x3ec>
        326784:	62790000 	rsbvss	r0, r9, #0	; 0x0
        326788:	63616c6c 	cmnvs	r1, #27648	; 0x6c00
        32678c:	00000000 	andeq	r0, r0, r0
        326790:	636f6e73 	cmnvs	pc, #1840	; 0x730
        326794:	74616e74 	strvcbt	r6, [r1], -#3700
        326798:	00000000 	andeq	r0, r0, r0
        32679c:	64656570 	strvsbt	r6, [r5], -#1392
        3267a0:	6c790000 	ldcvsl	0, cr0, [r9]
        3267a4:	646f0000 	strvsbt	r0, [pc], #0	; 3267ac <TCompiler::GetCharsUntil(unsigned short, int, long &)+0x410>
        3267a8:	64697600 	strvsbt	r7, [r9], -#1536
        3267ac:	656c7365 	strvsb	r7, [ip, -#869]!
        3267b0:	00000000 	andeq	r0, r0, r0
        3267b4:	656e6400 	strvsb	r6, [lr, -#1024]!
        3267b8:	65786973 	ldrvsb	r6, [r8, -#2419]!
        3267bc:	74730000 	ldrvcbt	r0, [r3]
        3267c0:	666f7200 	strvsbt	r7, [pc], -r0, lsl #4	; fField4
        3267c4:	666f7265 	strvsbt	r7, [pc], -r5, ror #4	; fField4
        3267c8:	61636800 	cmnvs	r3, r0, lsl #16
        3267cc:	66756e63 	ldrvsbt	r6, [r5], -r3, ror #28	; fField28
        3267d0:	00000000 	andeq	r0, r0, r0
        3267d4:	676c6f62 	strvsb	r6, [ip, -r2, ror #30]!
        3267d8:	616c0000 	cmnvs	ip, r0
        3267dc:	69660000 	stmvsdb	r6!, {}^
        3267e0:	696e0000 	stmvsdb	lr!, {}^
        3267e4:	696e6865 	stmvsdb	lr!, {r0, r2, r5, r6, fp, sp, lr}^
        3267e8:	72697465 	rsbvc	r7, r9, #1694498816	; 0x65000000
        3267ec:	64000000 	strvs	r0, [r0]
        3267f0:	6c6f6361 	stcvsl	3, cr6, [pc], -#388
        3267f4:	6c000000 	stcvs	0, cr0, [r0]
        3267f8:	6c6f6f70 	stcvsl	15, cr6, [pc], -#448
        3267fc:	00000000 	andeq	r0, r0, r0
        326800:	6d6f6400 	stcvsl	4, cr6, [pc]
        326804:	6e617469 	cdpvs	4, 6, cr7, cr1, cr9, {3}
        326808:	76650000 	strvcbt	r0, [r5], -r0
        32680c:	6e6f7400 	cdpvs	4, 6, cr7, cr15, cr0, {0}
        326810:	6f6e6578 	swivs	0x006e6578
        326814:	63657074 	cmnvs	r5, #116	; 0x74
        326818:	696f6e00 	stmvsdb	pc!, {r9, sl, fp, sp, lr}^
        32681c:	6f720000 	swivs	0x00720000
        326820:	72657065 	rsbvc	r7, r5, #101	; 0x65
        326824:	61740000 	cmnvs	r4, r0
        326828:	72657475 	rsbvc	r7, r5, #1962934272	; 0x75000000
        32682c:	726e0000 	rsbvc	r0, lr, #0	; 0x0
        326830:	73656c66 	cmnvc	r5, #26112	; 0x6600
        326834:	00000000 	andeq	r0, r0, r0
        326838:	7468656e 	strvcbt	r6, [r8], -#1390
        32683c:	00000000 	andeq	r0, r0, r0
        326840:	746f0000 	strvcbt	r0, [pc], #0	; 326848 <TCompiler::GetCharsUntil(unsigned short, int, long &)+0x4ac>
        326844:	74727900 	ldrvcbt	r7, [r2], -#2304
        326848:	756e7469 	strvcb	r7, [lr, -#1129]!
        32684c:	6c000000 	stcvs	0, cr0, [r0]
        326850:	7768696c 	strvcb	r6, [r8, -ip, ror #18]!
        326854:	65000000 	strvs	r0, [r0]
        326858:	77697468 	strvcb	r7, [r9, -r8, ror #8]!	; fField8
        32685c:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: TCompiler::ReservedWordToken(char *)
 * Address: 00326860
 */
TCompiler::ReservedWordToken(char *) {
    /*
        326860:	e1a0c00d 	mov	ip, sp
        326864:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        326868:	e24cb004 	sub	fp, ip, #4	; 0x4
        32686c:	e1a04001 	mov	r4, r1
        326870:	e59f5034 	ldr	r5, [pc, #34]	; 3268ac <TCompiler::ReservedWordToken(char *)+0x4c>
        326874:	e5950000 	ldr	r0, [r5]
        326878:	e3300000 	teq	r0, #0	; 0x0
        32687c:	0a000008 	beq	3268a4 <TCompiler::ReservedWordToken(char *)+0x44>
        326880:	e1a00004 	mov	r0, r4
        326884:	e5951000 	ldr	r1, [r5]
        326888:	eb6386f4 	bl	1c08460 <$symcmp__FPcT1>
        32688c:	e3300000 	teq	r0, #0	; 0x0
        326890:	05b50004 	ldreq	r0, [r5, #4]!	; fField4
        326894:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        326898:	e5b50008 	ldr	r0, [r5, #8]!	; fField8
        32689c:	e3300000 	teq	r0, #0	; 0x0
        3268a0:	1afffff6 	bne	326880 <TCompiler::ReservedWordToken(char *)+0x20>
        3268a4:	e3a00000 	mov	r0, #0	; 0x0
        3268a8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        3268ac:	0c10559c 	ldceq	5, cr5, [r0], -#624
    */
}

/**
 * Symbol: TCompiler::GetToken(void)
 * Address: 003268b0
 */
TCompiler::GetToken(void) {
    /*
        3268b0:	e1a0c00d 	mov	ip, sp
        3268b4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        3268b8:	e24cb004 	sub	fp, ip, #4	; 0x4
        3268bc:	e1a04000 	mov	r4, r0
        3268c0:	e5900028 	ldr	r0, [r0, #40]	; fField40
        3268c4:	e59f6030 	ldr	r6, [pc, #30]	; 3268fc <TCompiler::GetToken(void)+0x4c>
        3268c8:	e2845030 	add	r5, r4, #48	; 0x30
        3268cc:	e3300001 	teq	r0, #1	; 0x1
        3268d0:	1a00000a 	bne	326900 <TCompiler::GetToken(void)+0x50>
        3268d4:	e3a00000 	mov	r0, #0	; 0x0
        3268d8:	e5840028 	str	r0, [r4, #40]	; fField40
        3268dc:	e5950000 	ldr	r0, [r5]
        3268e0:	e5900000 	ldr	r0, [r0]
        3268e4:	e5a60020 	str	r0, [r6, #32]!
        3268e8:	e3a00002 	mov	r0, #2	; 0x2
        3268ec:	e5951000 	ldr	r1, [r5]
        3268f0:	e5810000 	str	r0, [r1]
        3268f4:	e5b4002c 	ldr	r0, [r4, #44]!	; fField44
        3268f8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        3268fc:	0c105574 	ldceq	5, cr5, [r0], -#464
        326900:	e1a00004 	mov	r0, r4
        326904:	eb5cccf3 	bl	1a59cd8 <TCompiler::$yylex0(void)>
        326908:	e3a07001 	mov	r7, #1	; 0x1
        32690c:	e330003b 	teq	r0, #59	; 0x3b
        326910:	1a000013 	bne	326964 <TCompiler::GetToken(void)+0xb4>
        326914:	e1a00004 	mov	r0, r4
        326918:	eb5cccee 	bl	1a59cd8 <TCompiler::$yylex0(void)>
        32691c:	e3700001 	cmn	r0, #1	; 0x1
        326920:	13300f42 	teqne	r0, #264	; 0x108
        326924:	13300e11 	teqne	r0, #272	; 0x110
        326928:	1330005d 	teqne	r0, #93	; 0x5d
        32692c:	13300029 	teqne	r0, #41	; 0x29
        326930:	1330007d 	teqne	r0, #125	; 0x7d
        326934:	1330002c 	teqne	r0, #44	; 0x2c
        326938:	13300f47 	teqne	r0, #284	; 0x11c
        32693c:	1240ce11 	subne	ip, r0, #272	; 0x110
        326940:	133c0002 	teqne	ip, #2	; 0x2
        326944:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        326948:	e5847028 	str	r7, [r4, #40]	; fField40
        32694c:	e5b61020 	ldr	r1, [r6, #32]!
        326950:	e5952000 	ldr	r2, [r5]
        326954:	e5821000 	str	r1, [r2]
        326958:	e5a4002c 	str	r0, [r4, #44]!	; fField44
        32695c:	e3a0003b 	mov	r0, #59	; 0x3b
        326960:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        326964:	e330002c 	teq	r0, #44	; 0x2c
        326968:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        32696c:	e1a00004 	mov	r0, r4
        326970:	eb5cccd8 	bl	1a59cd8 <TCompiler::$yylex0(void)>
        326974:	e330007d 	teq	r0, #125	; 0x7d
        326978:	1330005d 	teqne	r0, #93	; 0x5d
        32697c:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        326980:	e5847028 	str	r7, [r4, #40]	; fField40
        326984:	e5b61020 	ldr	r1, [r6, #32]!
        326988:	e5952000 	ldr	r2, [r5]
        32698c:	e5821000 	str	r1, [r2]
        326990:	e5a4002c 	str	r0, [r4, #44]!	; fField44
        326994:	e3a0002c 	mov	r0, #44	; 0x2c
        326998:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TCompiler::yylex0(void)
 * Address: 0032699c
 */
TCompiler::yylex0(void) {
    /*
        32699c:	e1a0c00d 	mov	ip, sp
        3269a0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        3269a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        3269a8:	e1a04000 	mov	r4, r0
        3269ac:	e3e08000 	mvn	r8, #0	; 0x0
        3269b0:	e3a06801 	mov	r6, #65536	; 0x10000
        3269b4:	e2466001 	sub	r6, r6, #1	; 0x1
        3269b8:	e5940008 	ldr	r0, [r4, #8]	; fField8
        3269bc:	e5901000 	ldr	r1, [r0]
        3269c0:	e1a0e00f 	mov	lr, pc
        3269c4:	e281f004 	add	pc, r1, #4	; 0x4
        3269c8:	e1a05000 	mov	r5, r0
        3269cc:	ebfffe47 	bl	3262f0 <dbprint(unsigned short)>
        3269d0:	e335002f 	teq	r5, #47	; 0x2f
        3269d4:	1a000038 	bne	326abc <TCompiler::yylex0(void)+0x120>
        3269d8:	e5940008 	ldr	r0, [r4, #8]	; fField8
        3269dc:	e5901000 	ldr	r1, [r0]
        3269e0:	e1a0e00f 	mov	lr, pc
        3269e4:	e281f004 	add	pc, r1, #4	; 0x4
        3269e8:	e1a05000 	mov	r5, r0
        3269ec:	ebfffe3f 	bl	3262f0 <dbprint(unsigned short)>
        3269f0:	e335002f 	teq	r5, #47	; 0x2f
        3269f4:	1a00000d 	bne	326a30 <TCompiler::yylex0(void)+0x94>
        3269f8:	e28f0f0b 	add	r0, pc, #44	; 0x2c
        3269fc:	ebfffe59 	bl	326368 <dbprint(char *)>
        326a00:	e5940008 	ldr	r0, [r4, #8]	; fField8
        326a04:	e5901000 	ldr	r1, [r0]
        326a08:	e1a0e00f 	mov	lr, pc
        326a0c:	e281f004 	add	pc, r1, #4	; 0x4
        326a10:	e1a05000 	mov	r5, r0
        326a14:	eb630ec2 	bl	1bea524 <$IsBreaker(unsigned short)>
        326a18:	e3300000 	teq	r0, #0	; 0x0
        326a1c:	1affffe5 	bne	3269b8 <TCompiler::yylex0(void)+0x1c>
        326a20:	e1350006 	teq	r5, r6
        326a24:	1afffff5 	bne	326a00 <TCompiler::yylex0(void)+0x64>
        326a28:	eaffffe2 	b	3269b8 <TCompiler::yylex0(void)+0x1c>
        326a2c:	2f2f0000 	swics	0x002f0000
        326a30:	e335002a 	teq	r5, #42	; 0x2a
        326a34:	1a000015 	bne	326a90 <TCompiler::yylex0(void)+0xf4>
        326a38:	e28f0f09 	add	r0, pc, #36	; 0x24
        326a3c:	ebfffe49 	bl	326368 <dbprint(char *)>
        326a40:	e5940008 	ldr	r0, [r4, #8]	; fField8
        326a44:	e5901000 	ldr	r1, [r0]
        326a48:	e1a0e00f 	mov	lr, pc
        326a4c:	e281f004 	add	pc, r1, #4	; 0x4
        326a50:	e330002a 	teq	r0, #42	; 0x2a
        326a54:	0a000003 	beq	326a68 <TCompiler::yylex0(void)+0xcc>
        326a58:	e1300006 	teq	r0, r6
        326a5c:	1afffff7 	bne	326a40 <TCompiler::yylex0(void)+0xa4>
        326a60:	eaffffd4 	b	3269b8 <TCompiler::yylex0(void)+0x1c>
        326a64:	2f2a0000 	swics	0x002a0000
        326a68:	e5940008 	ldr	r0, [r4, #8]	; fField8
        326a6c:	e5901000 	ldr	r1, [r0]
        326a70:	e1a0e00f 	mov	lr, pc
        326a74:	e281f004 	add	pc, r1, #4	; 0x4
        326a78:	e330002a 	teq	r0, #42	; 0x2a
        326a7c:	0afffff9 	beq	326a68 <TCompiler::yylex0(void)+0xcc>
        326a80:	e330002f 	teq	r0, #47	; 0x2f
        326a84:	11300006 	teqne	r0, r6
        326a88:	0affffca 	beq	3269b8 <TCompiler::yylex0(void)+0x1c>
        326a8c:	eaffffeb 	b	326a40 <TCompiler::yylex0(void)+0xa4>
        326a90:	e1a01005 	mov	r1, r5
        326a94:	e5b42008 	ldr	r2, [r4, #8]!	; fField8
        326a98:	e1a00002 	mov	r0, r2
        326a9c:	e5922000 	ldr	r2, [r2]
        326aa0:	e1a0e00f 	mov	lr, pc
        326aa4:	e282f008 	add	pc, r2, #8	; 0x8
        326aa8:	e28f0f02 	add	r0, pc, #8	; 0x8
        326aac:	ebfffe2d 	bl	326368 <dbprint(char *)>
        326ab0:	e3a0002f 	mov	r0, #47	; 0x2f
        326ab4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        326ab8:	756e0000 	strvcb	r0, [lr]!
        326abc:	e3a00801 	mov	r0, #65536	; 0x10000
        326ac0:	e2400001 	sub	r0, r0, #1	; 0x1
        326ac4:	e1350000 	teq	r5, r0
        326ac8:	0a000007 	beq	326aec <TCompiler::yylex0(void)+0x150>
        326acc:	e1a00005 	mov	r0, r5
        326ad0:	eb630e9d 	bl	1bea54c <$IsWhiteSpace(unsigned short)>
        326ad4:	e3300000 	teq	r0, #0	; 0x0
        326ad8:	1affffb6 	bne	3269b8 <TCompiler::yylex0(void)+0x1c>
        326adc:	e3a0a801 	mov	sl, #65536	; 0x10000
        326ae0:	e24aa001 	sub	sl, sl, #1	; 0x1
        326ae4:	e135000a 	teq	r5, sl
        326ae8:	1a000001 	bne	326af4 <TCompiler::yylex0(void)+0x158>
        326aec:	e1a00008 	mov	r0, r8
        326af0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        326af4:	e59f6034 	ldr	r6, [pc, #34]	; 326b30 <TCompiler::yylex0(void)+0x194>
        326af8:	e3a09003 	mov	r9, #3	; 0x3
        326afc:	e2899c01 	add	r9, r9, #256	; 0x100
        326b00:	e335007c 	teq	r5, #124	; 0x7c
        326b04:	1a000017 	bne	326b68 <TCompiler::yylex0(void)+0x1cc>
        326b08:	e24dd004 	sub	sp, sp, #4	; 0x4
        326b0c:	e1a0300d 	mov	r3, sp
        326b10:	e1a00004 	mov	r0, r4
        326b14:	e3a02000 	mov	r2, #0	; 0x0
        326b18:	e3a0107c 	mov	r1, #124	; 0x7c
        326b1c:	eb5cb7d4 	bl	1a54a74 <TCompiler::$GetCharsUntil(unsigned short, int, long &)>
        326b20:	e1b04000 	movs	r4, r0
        326b24:	1a000002 	bne	326b34 <TCompiler::yylex0(void)+0x198>
        326b28:	e1a00008 	mov	r0, r8
        326b2c:	ea0001f3 	b	327300 <TCompiler::yylex0(void)+0x964>
        326b30:	0c105574 	ldceq	5, cr5, [r0], -#464
        326b34:	e24ddc01 	sub	sp, sp, #256	; 0x100
        326b38:	e1a0100d 	mov	r1, sp
        326b3c:	e1a00004 	mov	r0, r4
        326b40:	e3a03c01 	mov	r3, #256	; 0x100
        326b44:	e3a02002 	mov	r2, #2	; 0x2
        326b48:	eb63020c 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
        326b4c:	e1a0000d 	mov	r0, sp
        326b50:	eb6279ca 	bl	1bc5280 <$Intern(char *)>
        326b54:	e5a60020 	str	r0, [r6, #32]!
        326b58:	e1a00004 	mov	r0, r4
        326b5c:	eb62af7d 	bl	1bd2958 <$free>
        326b60:	e1a00009 	mov	r0, r9
        326b64:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        326b68:	e1a00005 	mov	r0, r5
        326b6c:	eb630e6a 	bl	1bea51c <$IsAlphabet(unsigned short)>
        326b70:	e3a07000 	mov	r7, #0	; 0x0
        326b74:	e3300000 	teq	r0, #0	; 0x0
        326b78:	1a000001 	bne	326b84 <TCompiler::yylex0(void)+0x1e8>
        326b7c:	e335005f 	teq	r5, #95	; 0x5f
        326b80:	1a00003f 	bne	326c84 <TCompiler::yylex0(void)+0x2e8>
        326b84:	e24ddc01 	sub	sp, sp, #256	; 0x100
        326b88:	e1a0800d 	mov	r8, sp
        326b8c:	e28da0fe 	add	sl, sp, #254	; 0xfe
        326b90:	e15a0008 	cmp	sl, r8
        326b94:	928f0f29 	addls	r0, pc, #164	; 0xa4
        326b98:	9b62f180 	blls	1be31a0 <$ThrowMsg>
        326b9c:	e1a00005 	mov	r0, r5
        326ba0:	eb61e93f 	bl	1ba10a4 <$A_CONST_CHAR>
        326ba4:	e4c80001 	strb	r0, [r8], #1
        326ba8:	e5940008 	ldr	r0, [r4, #8]	; fField8
        326bac:	e5901000 	ldr	r1, [r0]
        326bb0:	e1a0e00f 	mov	lr, pc
        326bb4:	e281f004 	add	pc, r1, #4	; 0x4
        326bb8:	e1a05000 	mov	r5, r0
        326bbc:	ebfffdcb 	bl	3262f0 <dbprint(unsigned short)>
        326bc0:	e1a00005 	mov	r0, r5
        326bc4:	eb630e55 	bl	1bea520 <$IsAlphaNumeric(unsigned short)>
        326bc8:	e3300000 	teq	r0, #0	; 0x0
        326bcc:	1affffef 	bne	326b90 <TCompiler::yylex0(void)+0x1f4>
        326bd0:	e335005f 	teq	r5, #95	; 0x5f
        326bd4:	0affffed 	beq	326b90 <TCompiler::yylex0(void)+0x1f4>
        326bd8:	e1a01005 	mov	r1, r5
        326bdc:	e5942008 	ldr	r2, [r4, #8]	; fField8
        326be0:	e1a00002 	mov	r0, r2
        326be4:	e5922000 	ldr	r2, [r2]
        326be8:	e1a0e00f 	mov	lr, pc
        326bec:	e282f008 	add	pc, r2, #8	; 0x8
        326bf0:	e24f0f50 	sub	r0, pc, #320	; 0x140
        326bf4:	ebfffddb 	bl	326368 <dbprint(char *)>
        326bf8:	e5c87000 	strb	r7, [r8]
        326bfc:	e1a0000d 	mov	r0, sp
        326c00:	e28f1f12 	add	r1, pc, #72	; 0x48
        326c04:	eb638615 	bl	1c08460 <$symcmp__FPcT1>
        326c08:	e3300000 	teq	r0, #0	; 0x0
        326c0c:	03a01002 	moveq	r1, #2	; 0x2
        326c10:	05a61020 	streq	r1, [r6, #32]!
        326c14:	0a000006 	beq	326c34 <TCompiler::yylex0(void)+0x298>
        326c18:	e1a0000d 	mov	r0, sp
        326c1c:	e28f1f0c 	add	r1, pc, #48	; 0x30
        326c20:	eb63860e 	bl	1c08460 <$symcmp__FPcT1>
        326c24:	e3300000 	teq	r0, #0	; 0x0
        326c28:	1a00000b 	bne	326c5c <TCompiler::yylex0(void)+0x2c0>
        326c2c:	e3a0001a 	mov	r0, #26	; 0x1a
        326c30:	e5a60020 	str	r0, [r6, #32]!
        326c34:	e3a00002 	mov	r0, #2	; 0x2
        326c38:	e2800c01 	add	r0, r0, #256	; 0x100
        326c3c:	ea0000a2 	b	326ecc <TCompiler::yylex0(void)+0x530>
        326c40:	53796d62 	cmnpl	r9, #6272	; 0x1880
        326c44:	6f6c2074 	swivs	0x006c2074
        326c48:	6f6f2062 	swivs	0x006f2062
        326c4c:	69670000 	stmvsdb	r7!, {}^
        326c50:	4e494c00 	cdpmi	12, 4, cr4, cr9, cr0, {0}
        326c54:	54525545 	ldrplb	r5, [r2], -#1349
        326c58:	00000000 	andeq	r0, r0, r0
        326c5c:	e1a0100d 	mov	r1, sp
        326c60:	e1a00004 	mov	r0, r4
        326c64:	eb5cc3c5 	bl	1a57b80 <TCompiler::$ReservedWordToken(char *)>
        326c68:	e3300000 	teq	r0, #0	; 0x0
        326c6c:	1a000096 	bne	326ecc <TCompiler::yylex0(void)+0x530>
        326c70:	e1a0000d 	mov	r0, sp
        326c74:	eb627981 	bl	1bc5280 <$Intern(char *)>
        326c78:	e5a60020 	str	r0, [r6, #32]!
        326c7c:	e1a00009 	mov	r0, r9
        326c80:	ea000091 	b	326ecc <TCompiler::yylex0(void)+0x530>
        326c84:	e1a00005 	mov	r0, r5
        326c88:	eb630e27 	bl	1bea52c <$IsDigit(unsigned short)>
        326c8c:	e3300000 	teq	r0, #0	; 0x0
        326c90:	11a01005 	movne	r1, r5
        326c94:	11a00004 	movne	r0, r4
        326c98:	191b6ff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        326c9c:	1a5cb776 	bne	1a54a7c <TCompiler::$GetNumber(unsigned short)>
        326ca0:	e3350023 	teq	r5, #35	; 0x23
        326ca4:	1a00008d 	bne	326ee0 <TCompiler::yylex0(void)+0x544>
        326ca8:	e5940008 	ldr	r0, [r4, #8]	; fField8
        326cac:	e5901000 	ldr	r1, [r0]
        326cb0:	e1a0e00f 	mov	lr, pc
        326cb4:	e281f004 	add	pc, r1, #4	; 0x4
        326cb8:	e1a05000 	mov	r5, r0
        326cbc:	ebfffd8b 	bl	3262f0 <dbprint(unsigned short)>
        326cc0:	e335006c 	teq	r5, #108	; 0x6c
        326cc4:	1a000081 	bne	326ed0 <TCompiler::yylex0(void)+0x534>
        326cc8:	e5940008 	ldr	r0, [r4, #8]	; fField8
        326ccc:	e5901000 	ldr	r1, [r0]
        326cd0:	e1a0e00f 	mov	lr, pc
        326cd4:	e281f004 	add	pc, r1, #4	; 0x4
        326cd8:	e1a05000 	mov	r5, r0
        326cdc:	ebfffd83 	bl	3262f0 <dbprint(unsigned short)>
        326ce0:	e1a00005 	mov	r0, r5
        326ce4:	e3a0501a 	mov	r5, #26	; 0x1a
        326ce8:	e2455cbe 	sub	r5, r5, #48640	; 0xbe00
        326cec:	e3300069 	teq	r0, #105	; 0x69
        326cf0:	11a00004 	movne	r0, r4
        326cf4:	11a01005 	movne	r1, r5
        326cf8:	1b5cb327 	blne	1a5399c <TCompiler::$Error(long)>
        326cfc:	e5940008 	ldr	r0, [r4, #8]	; fField8
        326d00:	e5901000 	ldr	r1, [r0]
        326d04:	e1a0e00f 	mov	lr, pc
        326d08:	e281f004 	add	pc, r1, #4	; 0x4
        326d0c:	e1a06000 	mov	r6, r0
        326d10:	ebfffd76 	bl	3262f0 <dbprint(unsigned short)>
        326d14:	e336006e 	teq	r6, #110	; 0x6e
        326d18:	11a00004 	movne	r0, r4
        326d1c:	11a01005 	movne	r1, r5
        326d20:	1b5cb31d 	blne	1a5399c <TCompiler::$Error(long)>
        326d24:	e5940008 	ldr	r0, [r4, #8]	; fField8
        326d28:	e5901000 	ldr	r1, [r0]
        326d2c:	e1a0e00f 	mov	lr, pc
        326d30:	e281f004 	add	pc, r1, #4	; 0x4
        326d34:	e1a06000 	mov	r6, r0
        326d38:	ebfffd6c 	bl	3262f0 <dbprint(unsigned short)>
        326d3c:	e3360065 	teq	r6, #101	; 0x65
        326d40:	11a00004 	movne	r0, r4
        326d44:	11a01005 	movne	r1, r5
        326d48:	1b5cb313 	blne	1a5399c <TCompiler::$Error(long)>
        326d4c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        326d50:	e5901000 	ldr	r1, [r0]
        326d54:	e1a0e00f 	mov	lr, pc
        326d58:	e281f004 	add	pc, r1, #4	; 0x4
        326d5c:	e1a06000 	mov	r6, r0
        326d60:	ebfffd62 	bl	3262f0 <dbprint(unsigned short)>
        326d64:	e3360020 	teq	r6, #32	; 0x20
        326d68:	11a00004 	movne	r0, r4
        326d6c:	11a01005 	movne	r1, r5
        326d70:	1b5cb309 	blne	1a5399c <TCompiler::$Error(long)>
        326d74:	e3a09000 	mov	r9, #0	; 0x0
        326d78:	e5940008 	ldr	r0, [r4, #8]	; fField8
        326d7c:	e5901000 	ldr	r1, [r0]
        326d80:	e1a0e00f 	mov	lr, pc
        326d84:	e281f004 	add	pc, r1, #4	; 0x4
        326d88:	e1a05000 	mov	r5, r0
        326d8c:	ebfffd57 	bl	3262f0 <dbprint(unsigned short)>
        326d90:	e1a00005 	mov	r0, r5
        326d94:	eb630de4 	bl	1bea52c <$IsDigit(unsigned short)>
        326d98:	e3300000 	teq	r0, #0	; 0x0
        326d9c:	0a00000d 	beq	326dd8 <TCompiler::yylex0(void)+0x43c>
        326da0:	e2450030 	sub	r0, r5, #48	; 0x30
        326da4:	e0891109 	add	r1, r9, r9, lsl #2
        326da8:	e0809081 	add	r9, r0, r1, lsl #1
        326dac:	e5940008 	ldr	r0, [r4, #8]	; fField8
        326db0:	e5901000 	ldr	r1, [r0]
        326db4:	e1a0e00f 	mov	lr, pc
        326db8:	e281f004 	add	pc, r1, #4	; 0x4
        326dbc:	e1a05000 	mov	r5, r0
        326dc0:	ebfffd4a 	bl	3262f0 <dbprint(unsigned short)>
        326dc4:	e1a00005 	mov	r0, r5
        326dc8:	eb630dd7 	bl	1bea52c <$IsDigit(unsigned short)>
        326dcc:	e3300000 	teq	r0, #0	; 0x0
        326dd0:	1afffff2 	bne	326da0 <TCompiler::yylex0(void)+0x404>
        326dd4:	ea000003 	b	326de8 <TCompiler::yylex0(void)+0x44c>
        326dd8:	e1a00004 	mov	r0, r4
        326ddc:	e3a01019 	mov	r1, #25	; 0x19
        326de0:	e2411cbe 	sub	r1, r1, #48640	; 0xbe00
        326de4:	eb5cb2ec 	bl	1a5399c <TCompiler::$Error(long)>
        326de8:	e1a00005 	mov	r0, r5
        326dec:	e3a05f86 	mov	r5, #536	; 0x218
        326df0:	e2455903 	sub	r5, r5, #49152	; 0xc000
        326df4:	e3300020 	teq	r0, #32	; 0x20
        326df8:	11a00004 	movne	r0, r4
        326dfc:	11a01005 	movne	r1, r5
        326e00:	1b5cb2e5 	blne	1a5399c <TCompiler::$Error(long)>
        326e04:	e5940008 	ldr	r0, [r4, #8]	; fField8
        326e08:	e5901000 	ldr	r1, [r0]
        326e0c:	e1a0e00f 	mov	lr, pc
        326e10:	e281f004 	add	pc, r1, #4	; 0x4
        326e14:	e1a06000 	mov	r6, r0
        326e18:	ebfffd34 	bl	3262f0 <dbprint(unsigned short)>
        326e1c:	e3360022 	teq	r6, #34	; 0x22
        326e20:	11a00004 	movne	r0, r4
        326e24:	11a01005 	movne	r1, r5
        326e28:	1b5cb2db 	blne	1a5399c <TCompiler::$Error(long)>
        326e2c:	e24ddc01 	sub	sp, sp, #256	; 0x100
        326e30:	e3a08000 	mov	r8, #0	; 0x0
        326e34:	e5940008 	ldr	r0, [r4, #8]	; fField8
        326e38:	e5901000 	ldr	r1, [r0]
        326e3c:	e1a0e00f 	mov	lr, pc
        326e40:	e281f004 	add	pc, r1, #4	; 0x4
        326e44:	e1a06000 	mov	r6, r0
        326e48:	ebfffd28 	bl	3262f0 <dbprint(unsigned short)>
        326e4c:	e3360022 	teq	r6, #34	; 0x22
        326e50:	0a000011 	beq	326e9c <TCompiler::yylex0(void)+0x500>
        326e54:	e136000a 	teq	r6, sl
        326e58:	133800ff 	teqne	r8, #255	; 0xff
        326e5c:	01a00004 	moveq	r0, r4
        326e60:	01a01005 	moveq	r1, r5
        326e64:	0b5cb2cc 	bleq	1a5399c <TCompiler::$Error(long)>
        326e68:	e1a00008 	mov	r0, r8
        326e6c:	e2888001 	add	r8, r8, #1	; 0x1
        326e70:	e7cd6000 	strb	r6, [sp, r0]
        326e74:	e5940008 	ldr	r0, [r4, #8]	; fField8
        326e78:	e5901000 	ldr	r1, [r0]
        326e7c:	e1a0e00f 	mov	lr, pc
        326e80:	e281f004 	add	pc, r1, #4	; 0x4
        326e84:	e1a06000 	mov	r6, r0
        326e88:	ebfffd18 	bl	3262f0 <dbprint(unsigned short)>
        326e8c:	e3360022 	teq	r6, #34	; 0x22
        326e90:	1affffef 	bne	326e54 <TCompiler::yylex0(void)+0x4b8>
        326e94:	e3380000 	teq	r8, #0	; 0x0
        326e98:	1a000002 	bne	326ea8 <TCompiler::yylex0(void)+0x50c>
        326e9c:	e1a00004 	mov	r0, r4
        326ea0:	e1a01005 	mov	r1, r5
        326ea4:	eb5cb2bc 	bl	1a5399c <TCompiler::$Error(long)>
        326ea8:	e7cd7008 	strb	r7, [sp, r8]
        326eac:	e2491001 	sub	r1, r9, #1	; 0x1
        326eb0:	e5940008 	ldr	r0, [r4, #8]	; fField8
        326eb4:	e5a01004 	str	r1, [r0, #4]!	; fField4
        326eb8:	e1a0100d 	mov	r1, sp
        326ebc:	e5940008 	ldr	r0, [r4, #8]	; fField8
        326ec0:	eb5c70c1 	bl	1a431cc <TInputStream::$SetFilename(char *)>
        326ec4:	e1a00004 	mov	r0, r4
        326ec8:	eb5ccb82 	bl	1a59cd8 <TCompiler::$yylex0(void)>
        326ecc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        326ed0:	e1a00004 	mov	r0, r4
        326ed4:	e3a0100e 	mov	r1, #14	; 0xe
        326ed8:	e2411cbe 	sub	r1, r1, #48640	; 0xbe00
        326edc:	eb5cb2ae 	bl	1a5399c <TCompiler::$Error(long)>
        326ee0:	e3350040 	teq	r5, #64	; 0x40
        326ee4:	1a00002b 	bne	326f98 <TCompiler::yylex0(void)+0x5fc>
        326ee8:	e3a07000 	mov	r7, #0	; 0x0
        326eec:	e5940008 	ldr	r0, [r4, #8]	; fField8
        326ef0:	e5901000 	ldr	r1, [r0]
        326ef4:	e1a0e00f 	mov	lr, pc
        326ef8:	e281f004 	add	pc, r1, #4	; 0x4
        326efc:	e1a05000 	mov	r5, r0
        326f00:	ebfffcfa 	bl	3262f0 <dbprint(unsigned short)>
        326f04:	e1a00005 	mov	r0, r5
        326f08:	eb630d87 	bl	1bea52c <$IsDigit(unsigned short)>
        326f0c:	e3300000 	teq	r0, #0	; 0x0
        326f10:	01a00004 	moveq	r0, r4
        326f14:	03a01f83 	moveq	r1, #524	; 0x20c
        326f18:	02411903 	subeq	r1, r1, #49152	; 0xc000
        326f1c:	0b5cb29e 	bleq	1a5399c <TCompiler::$Error(long)>
        326f20:	e0870107 	add	r0, r7, r7, lsl #2
        326f24:	e0850080 	add	r0, r5, r0, lsl #1
        326f28:	e2407030 	sub	r7, r0, #48	; 0x30
        326f2c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        326f30:	e5901000 	ldr	r1, [r0]
        326f34:	e1a0e00f 	mov	lr, pc
        326f38:	e281f004 	add	pc, r1, #4	; 0x4
        326f3c:	e1a05000 	mov	r5, r0
        326f40:	ebfffcea 	bl	3262f0 <dbprint(unsigned short)>
        326f44:	e135000a 	teq	r5, sl
        326f48:	0a000003 	beq	326f5c <TCompiler::yylex0(void)+0x5c0>
        326f4c:	e1a00005 	mov	r0, r5
        326f50:	eb630d75 	bl	1bea52c <$IsDigit(unsigned short)>
        326f54:	e3300000 	teq	r0, #0	; 0x0
        326f58:	1afffff0 	bne	326f20 <TCompiler::yylex0(void)+0x584>
        326f5c:	e1a01005 	mov	r1, r5
        326f60:	e5b42008 	ldr	r2, [r4, #8]!	; fField8
        326f64:	e1a00002 	mov	r0, r2
        326f68:	e5922000 	ldr	r2, [r2]
        326f6c:	e1a0e00f 	mov	lr, pc
        326f70:	e282f008 	add	pc, r2, #8	; 0x8
        326f74:	e28f0f06 	add	r0, pc, #24	; 0x18
        326f78:	ebfffcfa 	bl	326368 <dbprint(char *)>
        326f7c:	e3a00003 	mov	r0, #3	; 0x3
        326f80:	e1800107 	orr	r0, r0, r7, lsl #2
        326f84:	e5a60020 	str	r0, [r6, #32]!
        326f88:	e3a00006 	mov	r0, #6	; 0x6
        326f8c:	e2800c01 	add	r0, r0, #256	; 0x100
        326f90:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        326f94:	756e0000 	strvcb	r0, [lr]!
        326f98:	e3350022 	teq	r5, #34	; 0x22
        326f9c:	1a000016 	bne	326ffc <TCompiler::yylex0(void)+0x660>
        326fa0:	e24dd004 	sub	sp, sp, #4	; 0x4
        326fa4:	e1a0300d 	mov	r3, sp
        326fa8:	e1a00004 	mov	r0, r4
        326fac:	e3a02001 	mov	r2, #1	; 0x1
        326fb0:	e3a01022 	mov	r1, #34	; 0x22
        326fb4:	eb5cb6ae 	bl	1a54a74 <TCompiler::$GetCharsUntil(unsigned short, int, long &)>
        326fb8:	e1b04000 	movs	r4, r0
        326fbc:	0afffed9 	beq	326b28 <TCompiler::yylex0(void)+0x18c>
        326fc0:	e59d1000 	ldr	r1, [sp]
        326fc4:	e59f002c 	ldr	r0, [pc, #2c]	; 326ff8 <TCompiler::yylex0(void)+0x65c>
        326fc8:	eb626c5b 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
        326fcc:	e5a60020 	str	r0, [r6, #32]!
        326fd0:	eb626c61 	bl	1bc215c <$BinaryData(long)>
        326fd4:	e1a01000 	mov	r1, r0
        326fd8:	e1a00004 	mov	r0, r4
        326fdc:	e59d2000 	ldr	r2, [sp]
        326fe0:	eb62dfdb 	bl	1bdef54 <$BlockMove>
        326fe4:	e1a00004 	mov	r0, r4
        326fe8:	eb62ae5a 	bl	1bd2958 <$free>
        326fec:	e3a00002 	mov	r0, #2	; 0x2
        326ff0:	e2800c01 	add	r0, r0, #256	; 0x100
        326ff4:	ea0000c1 	b	327300 <TCompiler::yylex0(void)+0x964>
        326ff8:	006848d0 	ldreqd	r4, [r8], -#128
        326ffc:	e3350024 	teq	r5, #36	; 0x24
        327000:	1a00004d 	bne	32713c <TCompiler::yylex0(void)+0x7a0>
        327004:	e5940008 	ldr	r0, [r4, #8]	; fField8
        327008:	e5901000 	ldr	r1, [r0]
        32700c:	e1a0e00f 	mov	lr, pc
        327010:	e281f004 	add	pc, r1, #4	; 0x4
        327014:	e1a05000 	mov	r5, r0
        327018:	ebfffcb4 	bl	3262f0 <dbprint(unsigned short)>
        32701c:	e335005c 	teq	r5, #92	; 0x5c
        327020:	13a00001 	movne	r0, #1	; 0x1
        327024:	11800105 	orrne	r0, r0, r5, lsl #2
        327028:	1a00003d 	bne	327124 <TCompiler::yylex0(void)+0x788>
        32702c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        327030:	e5901000 	ldr	r1, [r0]
        327034:	e1a0e00f 	mov	lr, pc
        327038:	e281f004 	add	pc, r1, #4	; 0x4
        32703c:	e1a05000 	mov	r5, r0
        327040:	ebfffcaa 	bl	3262f0 <dbprint(unsigned short)>
        327044:	e335005c 	teq	r5, #92	; 0x5c
        327048:	03a000c6 	moveq	r0, #198	; 0xc6
        32704c:	02800c05 	addeq	r0, r0, #1280	; 0x500
        327050:	0a000035 	beq	32712c <TCompiler::yylex0(void)+0x790>
        327054:	e335006e 	teq	r5, #110	; 0x6e
        327058:	1335004e 	teqne	r5, #78	; 0x4e
        32705c:	03a000d6 	moveq	r0, #214	; 0xd6
        327060:	0a000031 	beq	32712c <TCompiler::yylex0(void)+0x790>
        327064:	e3350074 	teq	r5, #116	; 0x74
        327068:	13350054 	teqne	r5, #84	; 0x54
        32706c:	03a00096 	moveq	r0, #150	; 0x96
        327070:	0a00002d 	beq	32712c <TCompiler::yylex0(void)+0x790>
        327074:	e3a07002 	mov	r7, #2	; 0x2
        327078:	e3350075 	teq	r5, #117	; 0x75
        32707c:	13350055 	teqne	r5, #85	; 0x55
        327080:	1a000006 	bne	3270a0 <TCompiler::yylex0(void)+0x704>
        327084:	e3a07004 	mov	r7, #4	; 0x4
        327088:	e5940008 	ldr	r0, [r4, #8]	; fField8
        32708c:	e5901000 	ldr	r1, [r0]
        327090:	e1a0e00f 	mov	lr, pc
        327094:	e081f007 	add	pc, r1, r7
        327098:	e1a05000 	mov	r5, r0
        32709c:	ebfffc93 	bl	3262f0 <dbprint(unsigned short)>
        3270a0:	e3a08000 	mov	r8, #0	; 0x0
        3270a4:	e59fa06c 	ldr	sl, [pc, #6c]	; 327118 <TCompiler::yylex0(void)+0x77c>
        3270a8:	e24a9001 	sub	r9, sl, #1	; 0x1
        3270ac:	e1a00005 	mov	r0, r5
        3270b0:	eb621137 	bl	1bab594 <$IsHexDigit(unsigned short)>
        3270b4:	e3300000 	teq	r0, #0	; 0x0
        3270b8:	1a000004 	bne	3270d0 <TCompiler::yylex0(void)+0x734>
        3270bc:	e3370002 	teq	r7, #2	; 0x2
        3270c0:	e1a00004 	mov	r0, r4
        3270c4:	11a01009 	movne	r1, r9
        3270c8:	01a0100a 	moveq	r1, sl
        3270cc:	eb5cb232 	bl	1a5399c <TCompiler::$Error(long)>
        3270d0:	e1a00005 	mov	r0, r5
        3270d4:	eb630d14 	bl	1bea52c <$IsDigit(unsigned short)>
        3270d8:	e3300000 	teq	r0, #0	; 0x0
        3270dc:	12450030 	subne	r0, r5, #48	; 0x30
        3270e0:	1a000002 	bne	3270f0 <TCompiler::yylex0(void)+0x754>
        3270e4:	e1a00005 	mov	r0, r5
        3270e8:	eb62113a 	bl	1bab5d8 <$UToLower(unsigned short)>
        3270ec:	e2400057 	sub	r0, r0, #87	; 0x57
        3270f0:	e0808208 	add	r8, r0, r8, lsl #4
        3270f4:	e2577001 	subs	r7, r7, #1	; 0x1
        3270f8:	0a000007 	beq	32711c <TCompiler::yylex0(void)+0x780>
        3270fc:	e5940008 	ldr	r0, [r4, #8]	; fField8
        327100:	e5901000 	ldr	r1, [r0]
        327104:	e1a0e00f 	mov	lr, pc
        327108:	e281f004 	add	pc, r1, #4	; 0x4
        32710c:	e1a05000 	mov	r5, r0
        327110:	ebfffc76 	bl	3262f0 <dbprint(unsigned short)>
        327114:	eaffffe4 	b	3270ac <TCompiler::yylex0(void)+0x710>
        327118:	ffff4217 	swinv	0x00ff4217
        32711c:	e3a00001 	mov	r0, #1	; 0x1
        327120:	e1800108 	orr	r0, r0, r8, lsl #2
        327124:	e3a01002 	mov	r1, #2	; 0x2
        327128:	e1810100 	orr	r0, r1, r0, lsl #2
        32712c:	e5a60020 	str	r0, [r6, #32]!
        327130:	e3a00002 	mov	r0, #2	; 0x2
        327134:	e2800c01 	add	r0, r0, #256	; 0x100
        327138:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        32713c:	e335003c 	teq	r5, #60	; 0x3c
        327140:	1a000016 	bne	3271a0 <TCompiler::yylex0(void)+0x804>
        327144:	e5940008 	ldr	r0, [r4, #8]	; fField8
        327148:	e5901000 	ldr	r1, [r0]
        32714c:	e1a0e00f 	mov	lr, pc
        327150:	e281f004 	add	pc, r1, #4	; 0x4
        327154:	e1a01000 	mov	r1, r0
        327158:	e330003d 	teq	r0, #61	; 0x3d
        32715c:	03a0002d 	moveq	r0, #45	; 0x2d
        327160:	02800c01 	addeq	r0, r0, #256	; 0x100
        327164:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        327168:	e331003c 	teq	r1, #60	; 0x3c
        32716c:	03a00035 	moveq	r0, #53	; 0x35
        327170:	02800c01 	addeq	r0, r0, #256	; 0x100
        327174:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        327178:	e331003e 	teq	r1, #62	; 0x3e
        32717c:	03a00e13 	moveq	r0, #304	; 0x130
        327180:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        327184:	e5b42008 	ldr	r2, [r4, #8]!	; fField8
        327188:	e1a00002 	mov	r0, r2
        32718c:	e5922000 	ldr	r2, [r2]
        327190:	e1a0e00f 	mov	lr, pc
        327194:	e282f008 	add	pc, r2, #8	; 0x8
        327198:	e3a0003c 	mov	r0, #60	; 0x3c
        32719c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        3271a0:	e335003e 	teq	r5, #62	; 0x3e
        3271a4:	1a000013 	bne	3271f8 <TCompiler::yylex0(void)+0x85c>
        3271a8:	e5940008 	ldr	r0, [r4, #8]	; fField8
        3271ac:	e5901000 	ldr	r1, [r0]
        3271b0:	e1a0e00f 	mov	lr, pc
        3271b4:	e281f004 	add	pc, r1, #4	; 0x4
        3271b8:	e1a01000 	mov	r1, r0
        3271bc:	e330003d 	teq	r0, #61	; 0x3d
        3271c0:	03a0002e 	moveq	r0, #46	; 0x2e
        3271c4:	02800c01 	addeq	r0, r0, #256	; 0x100
        3271c8:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        3271cc:	e331003e 	teq	r1, #62	; 0x3e
        3271d0:	03a00036 	moveq	r0, #54	; 0x36
        3271d4:	02800c01 	addeq	r0, r0, #256	; 0x100
        3271d8:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        3271dc:	e5b42008 	ldr	r2, [r4, #8]!	; fField8
        3271e0:	e1a00002 	mov	r0, r2
        3271e4:	e5922000 	ldr	r2, [r2]
        3271e8:	e1a0e00f 	mov	lr, pc
        3271ec:	e282f008 	add	pc, r2, #8	; 0x8
        3271f0:	e3a0003e 	mov	r0, #62	; 0x3e
        3271f4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        3271f8:	e335003d 	teq	r5, #61	; 0x3d
        3271fc:	03a0002f 	moveq	r0, #47	; 0x2f
        327200:	02800c01 	addeq	r0, r0, #256	; 0x100
        327204:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        327208:	e335003a 	teq	r5, #58	; 0x3a
        32720c:	1a000012 	bne	32725c <TCompiler::yylex0(void)+0x8c0>
        327210:	e5940008 	ldr	r0, [r4, #8]	; fField8
        327214:	e5901000 	ldr	r1, [r0]
        327218:	e1a0e00f 	mov	lr, pc
        32721c:	e281f004 	add	pc, r1, #4	; 0x4
        327220:	e1a01000 	mov	r1, r0
        327224:	e330003d 	teq	r0, #61	; 0x3d
        327228:	03a00029 	moveq	r0, #41	; 0x29
        32722c:	02800c01 	addeq	r0, r0, #256	; 0x100
        327230:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        327234:	e331003f 	teq	r1, #63	; 0x3f
        327238:	03a00f4e 	moveq	r0, #312	; 0x138
        32723c:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        327240:	e5b42008 	ldr	r2, [r4, #8]!	; fField8
        327244:	e1a00002 	mov	r0, r2
        327248:	e5922000 	ldr	r2, [r2]
        32724c:	e1a0e00f 	mov	lr, pc
        327250:	e282f008 	add	pc, r2, #8	; 0x8
        327254:	e3a0003a 	mov	r0, #58	; 0x3a
        327258:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        32725c:	e3350026 	teq	r5, #38	; 0x26
        327260:	1a00000f 	bne	3272a4 <TCompiler::yylex0(void)+0x908>
        327264:	e5940008 	ldr	r0, [r4, #8]	; fField8
        327268:	e5901000 	ldr	r1, [r0]
        32726c:	e1a0e00f 	mov	lr, pc
        327270:	e281f004 	add	pc, r1, #4	; 0x4
        327274:	e1a01000 	mov	r1, r0
        327278:	e3300026 	teq	r0, #38	; 0x26
        32727c:	03a00032 	moveq	r0, #50	; 0x32
        327280:	02800c01 	addeq	r0, r0, #256	; 0x100
        327284:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        327288:	e5b42008 	ldr	r2, [r4, #8]!	; fField8
        32728c:	e1a00002 	mov	r0, r2
        327290:	e5922000 	ldr	r2, [r2]
        327294:	e1a0e00f 	mov	lr, pc
        327298:	e282f008 	add	pc, r2, #8	; 0x8
        32729c:	e3a00026 	mov	r0, #38	; 0x26
        3272a0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        3272a4:	e24dd004 	sub	sp, sp, #4	; 0x4
        3272a8:	e1a00005 	mov	r0, r5
        3272ac:	eb61e77c 	bl	1ba10a4 <$A_CONST_CHAR>
        3272b0:	e1a01000 	mov	r1, r0
        3272b4:	e28f0f12 	add	r0, pc, #72	; 0x48
        3272b8:	eb6373d5 	bl	1c04214 <$strchr>
        3272bc:	e3300000 	teq	r0, #0	; 0x0
        3272c0:	11a00005 	movne	r0, r5
        3272c4:	1a00000d 	bne	327300 <TCompiler::yylex0(void)+0x964>
        3272c8:	e3a00001 	mov	r0, #1	; 0x1
        3272cc:	e1800105 	orr	r0, r0, r5, lsl #2
        3272d0:	e3a01002 	mov	r1, #2	; 0x2
        3272d4:	e1810100 	orr	r0, r1, r0, lsl #2
        3272d8:	eb626b9b 	bl	1bc214c <$AllocateRefHandle(long)>
        3272dc:	e58d0000 	str	r0, [sp]
        3272e0:	e1a0200d 	mov	r2, sp
        3272e4:	e1a00004 	mov	r0, r4
        3272e8:	e3a01015 	mov	r1, #21	; 0x15
        3272ec:	e2411cbe 	sub	r1, r1, #48640	; 0xbe00
        3272f0:	eb5cb1aa 	bl	1a539a0 <TCompiler::$Error(long, RefVar const &)>
        3272f4:	e59d0000 	ldr	r0, [sp]
        3272f8:	eb626faf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3272fc:	e1a00007 	mov	r0, r7
        327300:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        327304:	2b2d2a2f 	blcs	e71bc8 <ROM$$Size+0x751f7c>
        327308:	2829272e 	stmcsda	r9!, {r1, r2, r3, r5, r8, r9, sl, sp}
        32730c:	5b5d2c3b 	blpl	1a72400 <TAppleTalkWorld::$__ct(void)+0xb04>
        327310:	7b7d0000 	blvc	2267318 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x656ac0>
    */
}

/**
 * Symbol: TCompiler::GetNumber(unsigned short)
 * Address: 00327314
 */
TCompiler::GetNumber(unsigned short) {
    /*
        327314:	e1a0c00d 	mov	ip, sp
        327318:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        32731c:	e24cb004 	sub	fp, ip, #4	; 0x4
        327320:	e1a04000 	mov	r4, r0
        327324:	e1a00801 	mov	r0, r1, lsl #16
        327328:	e1a00820 	mov	r0, r0, lsr #16
        32732c:	e24ddc01 	sub	sp, sp, #256	; 0x100
        327330:	e59f80b4 	ldr	r8, [pc, #b4]	; 3273ec <TCompiler::GetNumber(unsigned short)+0xd8>
        327334:	e3a0af41 	mov	sl, #260	; 0x104
        327338:	e59f50b0 	ldr	r5, [pc, #b0]	; 3273f0 <TCompiler::GetNumber(unsigned short)+0xdc>
        32733c:	e3a09000 	mov	r9, #0	; 0x0
        327340:	e3300030 	teq	r0, #48	; 0x30
        327344:	1a000064 	bne	3274dc <TCompiler::GetNumber(unsigned short)+0x1c8>
        327348:	e5940008 	ldr	r0, [r4, #8]	; fField8
        32734c:	e5901000 	ldr	r1, [r0]
        327350:	e1a0e00f 	mov	lr, pc
        327354:	e281f004 	add	pc, r1, #4	; 0x4
        327358:	e1a01000 	mov	r1, r0
        32735c:	e3a06030 	mov	r6, #48	; 0x30
        327360:	e3300078 	teq	r0, #120	; 0x78
        327364:	13310058 	teqne	r1, #88	; 0x58
        327368:	1a000053 	bne	3274bc <TCompiler::GetNumber(unsigned short)+0x1a8>
        32736c:	e5cd6000 	strb	r6, [sp]
        327370:	e3a07002 	mov	r7, #2	; 0x2
        327374:	e5cd1001 	strb	r1, [sp, #1]
        327378:	e5940008 	ldr	r0, [r4, #8]	; fField8
        32737c:	e5901000 	ldr	r1, [r0]
        327380:	e1a0e00f 	mov	lr, pc
        327384:	e281f004 	add	pc, r1, #4	; 0x4
        327388:	e1a06000 	mov	r6, r0
        32738c:	e3a01801 	mov	r1, #65536	; 0x10000
        327390:	e2411001 	sub	r1, r1, #1	; 0x1
        327394:	e1300001 	teq	r0, r1
        327398:	0a000020 	beq	327420 <TCompiler::GetNumber(unsigned short)+0x10c>
        32739c:	e1a00006 	mov	r0, r6
        3273a0:	ebfffbd2 	bl	3262f0 <dbprint(unsigned short)>
        3273a4:	e1a00006 	mov	r0, r6
        3273a8:	eb630c5f 	bl	1bea52c <$IsDigit(unsigned short)>
        3273ac:	e3300000 	teq	r0, #0	; 0x0
        3273b0:	1a000007 	bne	3273d4 <TCompiler::GetNumber(unsigned short)+0xc0>
        3273b4:	e3560061 	cmp	r6, #97	; 0x61
        3273b8:	ba000001 	blt	3273c4 <TCompiler::GetNumber(unsigned short)+0xb0>
        3273bc:	e3560066 	cmp	r6, #102	; 0x66
        3273c0:	da000003 	ble	3273d4 <TCompiler::GetNumber(unsigned short)+0xc0>
        3273c4:	e3560041 	cmp	r6, #65	; 0x41
        3273c8:	ba000014 	blt	327420 <TCompiler::GetNumber(unsigned short)+0x10c>
        3273cc:	e3560046 	cmp	r6, #70	; 0x46
        3273d0:	ca000012 	bgt	327420 <TCompiler::GetNumber(unsigned short)+0x10c>
        3273d4:	e3570c01 	cmp	r7, #256	; 0x100
        3273d8:	2a000005 	bcs	3273f4 <TCompiler::GetNumber(unsigned short)+0xe0>
        3273dc:	e1a00007 	mov	r0, r7
        3273e0:	e2877001 	add	r7, r7, #1	; 0x1
        3273e4:	e7cd6000 	strb	r6, [sp, r0]
        3273e8:	ea000004 	b	327400 <TCompiler::GetNumber(unsigned short)+0xec>
        3273ec:	0c105574 	ldceq	5, cr5, [r0], -#464
        3273f0:	ffff420f 	swinv	0x00ff420f
        3273f4:	e1a00004 	mov	r0, r4
        3273f8:	e1a01005 	mov	r1, r5
        3273fc:	eb5cb166 	bl	1a5399c <TCompiler::$Error(long)>
        327400:	e5940008 	ldr	r0, [r4, #8]	; fField8
        327404:	e5901000 	ldr	r1, [r0]
        327408:	e1a0e00f 	mov	lr, pc
        32740c:	e281f004 	add	pc, r1, #4	; 0x4
        327410:	e1a06000 	mov	r6, r0
        327414:	e240ccff 	sub	ip, r0, #65280	; 0xff00
        327418:	e33c00ff 	teq	ip, #255	; 0xff
        32741c:	1affffde 	bne	32739c <TCompiler::GetNumber(unsigned short)+0x88>
        327420:	e1a01006 	mov	r1, r6
        327424:	e5942008 	ldr	r2, [r4, #8]	; fField8
        327428:	e1a00002 	mov	r0, r2
        32742c:	e5922000 	ldr	r2, [r2]
        327430:	e1a0e00f 	mov	lr, pc
        327434:	e282f008 	add	pc, r2, #8	; 0x8
        327438:	e28f0f1e 	add	r0, pc, #120	; 0x78
        32743c:	ebfffbc9 	bl	326368 <dbprint(char *)>
        327440:	e3570c01 	cmp	r7, #256	; 0x100
        327444:	37cd9007 	strccb	r9, [sp, r7]
        327448:	3a000002 	bcc	327458 <TCompiler::GetNumber(unsigned short)+0x144>
        32744c:	e1a00004 	mov	r0, r4
        327450:	e1a01005 	mov	r1, r5
        327454:	eb5cb150 	bl	1a5399c <TCompiler::$Error(long)>
        327458:	e1a0000d 	mov	r0, sp
        32745c:	e3a02010 	mov	r2, #16	; 0x10
        327460:	e3a01000 	mov	r1, #0	; 0x0
        327464:	eb623997 	bl	1bb5ac8 <$strtol>
        327468:	e1a05000 	mov	r5, r0
        32746c:	e3500101 	cmp	r0, #1073741824	; 0x40000000
        327470:	ba00000c 	blt	3274a8 <TCompiler::GetNumber(unsigned short)+0x194>
        327474:	e24dd004 	sub	sp, sp, #4	; 0x4
        327478:	e28d0004 	add	r0, sp, #4	; 0x4
        32747c:	eb627793 	bl	1bc52d0 <$MakeString(char const *)>
        327480:	eb626b31 	bl	1bc214c <$AllocateRefHandle(long)>
        327484:	e58d0000 	str	r0, [sp]
        327488:	e1a0200d 	mov	r2, sp
        32748c:	e1a00004 	mov	r0, r4
        327490:	e3a01f85 	mov	r1, #532	; 0x214
        327494:	e2411903 	sub	r1, r1, #49152	; 0xc000
        327498:	eb5cb140 	bl	1a539a0 <TCompiler::$Error(long, RefVar const &)>
        32749c:	e59d0000 	ldr	r0, [sp]
        3274a0:	eb626f45 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3274a4:	e28dd004 	add	sp, sp, #4	; 0x4
        3274a8:	e1a00105 	mov	r0, r5, lsl #2
        3274ac:	e5a80020 	str	r0, [r8, #32]!
        3274b0:	e1a0000a 	mov	r0, sl
        3274b4:	ea0000a6 	b	327754 <TCompiler::GetNumber(unsigned short)+0x440>
        3274b8:	756e0000 	strvcb	r0, [lr]!
        3274bc:	e5942008 	ldr	r2, [r4, #8]	; fField8
        3274c0:	e1a00002 	mov	r0, r2
        3274c4:	e5922000 	ldr	r2, [r2]
        3274c8:	e1a0e00f 	mov	lr, pc
        3274cc:	e282f008 	add	pc, r2, #8	; 0x8
        3274d0:	e24f0f08 	sub	r0, pc, #32	; 0x20
        3274d4:	ebfffba3 	bl	326368 <dbprint(char *)>
        3274d8:	e1a00006 	mov	r0, r6
        3274dc:	e3a06001 	mov	r6, #1	; 0x1
        3274e0:	e5cd0000 	strb	r0, [sp]
        3274e4:	ea000004 	b	3274fc <TCompiler::GetNumber(unsigned short)+0x1e8>
        3274e8:	e1a00007 	mov	r0, r7
        3274ec:	ebfffb7f 	bl	3262f0 <dbprint(unsigned short)>
        3274f0:	e1a00006 	mov	r0, r6
        3274f4:	e2866001 	add	r6, r6, #1	; 0x1
        3274f8:	e7cd7000 	strb	r7, [sp, r0]
        3274fc:	e5940008 	ldr	r0, [r4, #8]	; fField8
        327500:	e5901000 	ldr	r1, [r0]
        327504:	e1a0e00f 	mov	lr, pc
        327508:	e281f004 	add	pc, r1, #4	; 0x4
        32750c:	e1a07000 	mov	r7, r0
        327510:	e3a01801 	mov	r1, #65536	; 0x10000
        327514:	e2411001 	sub	r1, r1, #1	; 0x1
        327518:	e1300001 	teq	r0, r1
        32751c:	0a00008e 	beq	32775c <TCompiler::GetNumber(unsigned short)+0x448>
        327520:	e1a00007 	mov	r0, r7
        327524:	eb630c00 	bl	1bea52c <$IsDigit(unsigned short)>
        327528:	e3300000 	teq	r0, #0	; 0x0
        32752c:	1affffed 	bne	3274e8 <TCompiler::GetNumber(unsigned short)+0x1d4>
        327530:	e337002e 	teq	r7, #46	; 0x2e
        327534:	1a000088 	bne	32775c <TCompiler::GetNumber(unsigned short)+0x448>
        327538:	e1a00007 	mov	r0, r7
        32753c:	ebfffb6b 	bl	3262f0 <dbprint(unsigned short)>
        327540:	e3560c01 	cmp	r6, #256	; 0x100
        327544:	2a00000c 	bcs	32757c <TCompiler::GetNumber(unsigned short)+0x268>
        327548:	e3a0102e 	mov	r1, #46	; 0x2e
        32754c:	e1a00006 	mov	r0, r6
        327550:	e2866001 	add	r6, r6, #1	; 0x1
        327554:	e7cd1000 	strb	r1, [sp, r0]
        327558:	ea00000a 	b	327588 <TCompiler::GetNumber(unsigned short)+0x274>
        32755c:	e1a00007 	mov	r0, r7
        327560:	ebfffb62 	bl	3262f0 <dbprint(unsigned short)>
        327564:	e3560c01 	cmp	r6, #256	; 0x100
        327568:	2a000003 	bcs	32757c <TCompiler::GetNumber(unsigned short)+0x268>
        32756c:	e1a00006 	mov	r0, r6
        327570:	e2866001 	add	r6, r6, #1	; 0x1
        327574:	e7cd7000 	strb	r7, [sp, r0]
        327578:	ea000002 	b	327588 <TCompiler::GetNumber(unsigned short)+0x274>
        32757c:	e1a00004 	mov	r0, r4
        327580:	e1a01005 	mov	r1, r5
        327584:	eb5cb104 	bl	1a5399c <TCompiler::$Error(long)>
        327588:	e5940008 	ldr	r0, [r4, #8]	; fField8
        32758c:	e5901000 	ldr	r1, [r0]
        327590:	e1a0e00f 	mov	lr, pc
        327594:	e281f004 	add	pc, r1, #4	; 0x4
        327598:	e1a07000 	mov	r7, r0
        32759c:	e3a0a801 	mov	sl, #65536	; 0x10000
        3275a0:	e24aa001 	sub	sl, sl, #1	; 0x1
        3275a4:	e130000a 	teq	r0, sl
        3275a8:	0a00003d 	beq	3276a4 <TCompiler::GetNumber(unsigned short)+0x390>
        3275ac:	e1a00007 	mov	r0, r7
        3275b0:	eb630bdd 	bl	1bea52c <$IsDigit(unsigned short)>
        3275b4:	e3300000 	teq	r0, #0	; 0x0
        3275b8:	1affffe7 	bne	32755c <TCompiler::GetNumber(unsigned short)+0x248>
        3275bc:	e3370065 	teq	r7, #101	; 0x65
        3275c0:	13370045 	teqne	r7, #69	; 0x45
        3275c4:	1a000036 	bne	3276a4 <TCompiler::GetNumber(unsigned short)+0x390>
        3275c8:	e1a00007 	mov	r0, r7
        3275cc:	ebfffb47 	bl	3262f0 <dbprint(unsigned short)>
        3275d0:	e3560c01 	cmp	r6, #256	; 0x100
        3275d4:	2a000003 	bcs	3275e8 <TCompiler::GetNumber(unsigned short)+0x2d4>
        3275d8:	e1a00006 	mov	r0, r6
        3275dc:	e2866001 	add	r6, r6, #1	; 0x1
        3275e0:	e7cd7000 	strb	r7, [sp, r0]
        3275e4:	ea000002 	b	3275f4 <TCompiler::GetNumber(unsigned short)+0x2e0>
        3275e8:	e1a00004 	mov	r0, r4
        3275ec:	e1a01005 	mov	r1, r5
        3275f0:	eb5cb0e9 	bl	1a5399c <TCompiler::$Error(long)>
        3275f4:	e5940008 	ldr	r0, [r4, #8]	; fField8
        3275f8:	e5901000 	ldr	r1, [r0]
        3275fc:	e1a0e00f 	mov	lr, pc
        327600:	e281f004 	add	pc, r1, #4	; 0x4
        327604:	e1a07000 	mov	r7, r0
        327608:	e330002b 	teq	r0, #43	; 0x2b
        32760c:	1337002d 	teqne	r7, #45	; 0x2d
        327610:	1a000004 	bne	327628 <TCompiler::GetNumber(unsigned short)+0x314>
        327614:	e1a00007 	mov	r0, r7
        327618:	ebfffb34 	bl	3262f0 <dbprint(unsigned short)>
        32761c:	e3560c01 	cmp	r6, #256	; 0x100
        327620:	2a000011 	bcs	32766c <TCompiler::GetNumber(unsigned short)+0x358>
        327624:	ea00000c 	b	32765c <TCompiler::GetNumber(unsigned short)+0x348>
        327628:	e1a01007 	mov	r1, r7
        32762c:	e5942008 	ldr	r2, [r4, #8]	; fField8
        327630:	e1a00002 	mov	r0, r2
        327634:	e5922000 	ldr	r2, [r2]
        327638:	e1a0e00f 	mov	lr, pc
        32763c:	e282f008 	add	pc, r2, #8	; 0x8
        327640:	e24f0f64 	sub	r0, pc, #400	; 0x190
        327644:	ebfffb47 	bl	326368 <dbprint(char *)>
        327648:	ea00000a 	b	327678 <TCompiler::GetNumber(unsigned short)+0x364>
        32764c:	e1a00007 	mov	r0, r7
        327650:	ebfffb26 	bl	3262f0 <dbprint(unsigned short)>
        327654:	e3560c01 	cmp	r6, #256	; 0x100
        327658:	2a000003 	bcs	32766c <TCompiler::GetNumber(unsigned short)+0x358>
        32765c:	e1a00006 	mov	r0, r6
        327660:	e2866001 	add	r6, r6, #1	; 0x1
        327664:	e7cd7000 	strb	r7, [sp, r0]
        327668:	ea000002 	b	327678 <TCompiler::GetNumber(unsigned short)+0x364>
        32766c:	e1a00004 	mov	r0, r4
        327670:	e1a01005 	mov	r1, r5
        327674:	eb5cb0c8 	bl	1a5399c <TCompiler::$Error(long)>
        327678:	e5940008 	ldr	r0, [r4, #8]	; fField8
        32767c:	e5901000 	ldr	r1, [r0]
        327680:	e1a0e00f 	mov	lr, pc
        327684:	e281f004 	add	pc, r1, #4	; 0x4
        327688:	e1a07000 	mov	r7, r0
        32768c:	e130000a 	teq	r0, sl
        327690:	0a000003 	beq	3276a4 <TCompiler::GetNumber(unsigned short)+0x390>
        327694:	e1a00007 	mov	r0, r7
        327698:	eb630ba3 	bl	1bea52c <$IsDigit(unsigned short)>
        32769c:	e3300000 	teq	r0, #0	; 0x0
        3276a0:	1affffe9 	bne	32764c <TCompiler::GetNumber(unsigned short)+0x338>
        3276a4:	e1a00007 	mov	r0, r7
        3276a8:	ebfffb10 	bl	3262f0 <dbprint(unsigned short)>
        3276ac:	e1a01007 	mov	r1, r7
        3276b0:	e5942008 	ldr	r2, [r4, #8]	; fField8
        3276b4:	e1a00002 	mov	r0, r2
        3276b8:	e5922000 	ldr	r2, [r2]
        3276bc:	e1a0e00f 	mov	lr, pc
        3276c0:	e282f008 	add	pc, r2, #8	; 0x8
        3276c4:	e24f0f85 	sub	r0, pc, #532	; 0x214
        3276c8:	ebfffb26 	bl	326368 <dbprint(char *)>
        3276cc:	e3560c01 	cmp	r6, #256	; 0x100
        3276d0:	37cd9006 	strccb	r9, [sp, r6]
        3276d4:	3a000002 	bcc	3276e4 <TCompiler::GetNumber(unsigned short)+0x3d0>
        3276d8:	e1a00004 	mov	r0, r4
        3276dc:	e1a01005 	mov	r1, r5
        3276e0:	eb5cb0ad 	bl	1a5399c <TCompiler::$Error(long)>
        3276e4:	e1a0000d 	mov	r0, sp
        3276e8:	e3a01000 	mov	r1, #0	; 0x0
        3276ec:	eb6238f4 	bl	1bb5ac4 <$strtod>
        3276f0:	e24dd004 	sub	sp, sp, #4	; 0x4
        3276f4:	e59f0024 	ldr	r0, [pc, #24]	; 327720 <TCompiler::GetNumber(unsigned short)+0x40c>	; fField24
        3276f8:	ed909100 	ldfd	f1, [r0]
        3276fc:	ee90f111 	cmf	f0, f1
        327700:	0a000007 	beq	327724 <TCompiler::GetNumber(unsigned short)+0x410>
        327704:	ed2d8102 	stfd	f0, [sp, -#8]!	; fField8
        327708:	e8bd0003 	ldmia	sp!, {r0, r1}
        32770c:	eb6276ee 	bl	1bc52cc <$MakeReal(double)>
        327710:	e5a80020 	str	r0, [r8, #32]!
        327714:	e3a00005 	mov	r0, #5	; 0x5
        327718:	e2800c01 	add	r0, r0, #256	; 0x100
        32771c:	ea000036 	b	3277fc <TCompiler::GetNumber(unsigned short)+0x4e8>
        327720:	00380a94 	mlaeqs	r8, r4, sl, r0
        327724:	e28d0004 	add	r0, sp, #4	; 0x4
        327728:	eb6276e8 	bl	1bc52d0 <$MakeString(char const *)>
        32772c:	eb626a86 	bl	1bc214c <$AllocateRefHandle(long)>
        327730:	e58d0000 	str	r0, [sp]
        327734:	e1a0200d 	mov	r2, sp
        327738:	e1a00004 	mov	r0, r4
        32773c:	e59f1014 	ldr	r1, [pc, #14]	; 327758 <TCompiler::GetNumber(unsigned short)+0x444>
        327740:	eb5cb096 	bl	1a539a0 <TCompiler::$Error(long, RefVar const &)>
        327744:	e59d0000 	ldr	r0, [sp]
        327748:	eb626e9b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        32774c:	e28dd004 	add	sp, sp, #4	; 0x4
        327750:	e1a00009 	mov	r0, r9
        327754:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        327758:	ffff4213 	swinv	0x00ff4213
        32775c:	e1a00007 	mov	r0, r7
        327760:	ebfffae2 	bl	3262f0 <dbprint(unsigned short)>
        327764:	e1a01007 	mov	r1, r7
        327768:	e5942008 	ldr	r2, [r4, #8]	; fField8
        32776c:	e1a00002 	mov	r0, r2
        327770:	e5922000 	ldr	r2, [r2]
        327774:	e1a0e00f 	mov	lr, pc
        327778:	e282f008 	add	pc, r2, #8	; 0x8
        32777c:	e24f0fb3 	sub	r0, pc, #716	; 0x2cc
        327780:	ebfffaf8 	bl	326368 <dbprint(char *)>
        327784:	e3560c01 	cmp	r6, #256	; 0x100
        327788:	37cd9006 	strccb	r9, [sp, r6]
        32778c:	3a000002 	bcc	32779c <TCompiler::GetNumber(unsigned short)+0x488>
        327790:	e1a00004 	mov	r0, r4
        327794:	e1a01005 	mov	r1, r5
        327798:	eb5cb07f 	bl	1a5399c <TCompiler::$Error(long)>
        32779c:	e1a0000d 	mov	r0, sp
        3277a0:	e3a0200a 	mov	r2, #10	; 0xa
        3277a4:	e3a01000 	mov	r1, #0	; 0x0
        3277a8:	eb6238c6 	bl	1bb5ac8 <$strtol>
        3277ac:	e1a05000 	mov	r5, r0
        3277b0:	e24dd004 	sub	sp, sp, #4	; 0x4
        3277b4:	e350020e 	cmp	r0, #-536870912	; 0xe0000000
        3277b8:	ba000001 	blt	3277c4 <TCompiler::GetNumber(unsigned short)+0x4b0>
        3277bc:	e375021e 	cmn	r5, #-536870911	; 0xe0000001
        3277c0:	da00000a 	ble	3277f0 <TCompiler::GetNumber(unsigned short)+0x4dc>
        3277c4:	e28d0004 	add	r0, sp, #4	; 0x4
        3277c8:	eb6276c0 	bl	1bc52d0 <$MakeString(char const *)>
        3277cc:	eb626a5e 	bl	1bc214c <$AllocateRefHandle(long)>
        3277d0:	e58d0000 	str	r0, [sp]
        3277d4:	e1a0200d 	mov	r2, sp
        3277d8:	e1a00004 	mov	r0, r4
        3277dc:	e3a01012 	mov	r1, #18	; 0x12
        3277e0:	e2411cbe 	sub	r1, r1, #48640	; 0xbe00
        3277e4:	eb5cb06d 	bl	1a539a0 <TCompiler::$Error(long, RefVar const &)>
        3277e8:	e59d0000 	ldr	r0, [sp]
        3277ec:	eb626e72 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3277f0:	e1a00105 	mov	r0, r5, lsl #2
        3277f4:	e5a80020 	str	r0, [r8, #32]!
        3277f8:	e1a0000a 	mov	r0, sl
        3277fc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

