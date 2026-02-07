#include "include/TObjectWriter.h"

/**
 * Symbol: TObjectWriter::__ct(RefVar const &, CPipe &, int)
 * Address: 0035627c
 */
TObjectWriter::TObjectWriter(RefVar const &, CPipe &, int) {
    /*
        35627c:	e1a0c00d 	mov	ip, sp
        356280:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        356284:	e24cb004 	sub	fp, ip, #4	; 0x4
        356288:	e1b04000 	movs	r4, r0
        35628c:	e1a07001 	mov	r7, r1
        356290:	e1a06002 	mov	r6, r2
        356294:	e1a05003 	mov	r5, r3
        356298:	1a000003 	bne	3562ac <TObjectWriter::__ct(RefVar const &, CPipe &, int)+0x30>
        35629c:	e3a00028 	mov	r0, #40	; 0x28
        3562a0:	eb61e124 	bl	1bce738 <$__nw(unsigned int)>
        3562a4:	e1b04000 	movs	r4, r0
        3562a8:	0a000025 	beq	356344 <TObjectWriter::__ct(RefVar const &, CPipe &, int)+0xc8>
        3562ac:	e2840004 	add	r0, r4, #4	; 0x4
        3562b0:	eb5b96cf 	bl	1a3bdf4 <TRefStack::$__ct(void)>
        3562b4:	e3a00002 	mov	r0, #2	; 0x2
        3562b8:	eb61afa3 	bl	1bc214c <$AllocateRefHandle(long)>
        3562bc:	e2844014 	add	r4, r4, #20	; 0x14
        3562c0:	e8840041 	stmia	r4, {r0, r6}
        3562c4:	e2444014 	sub	r4, r4, #20	; 0x14
        3562c8:	e5971000 	ldr	r1, [r7]
        3562cc:	e5911000 	ldr	r1, [r1]
        3562d0:	e5940014 	ldr	r0, [r4, #20]	; fField20
        3562d4:	e5801000 	str	r1, [r0]
        3562d8:	e3a00000 	mov	r0, #0	; 0x0
        3562dc:	e284401c 	add	r4, r4, #28	; 0x1c
        3562e0:	e8840021 	stmia	r4, {r0, r5}
        3562e4:	e244401c 	sub	r4, r4, #28	; 0x1c
        3562e8:	e5c40024 	strb	r0, [r4, #36]	; fField36
        3562ec:	e59f0038 	ldr	r0, [pc, #38]	; 35632c <TObjectWriter::__ct(RefVar const &, CPipe &, int)+0xb0>
        3562f0:	e5d01008 	ldrb	r1, [r0, #8]	; fField8
        3562f4:	e3310000 	teq	r1, #0	; 0x0
        3562f8:	0a00000d 	beq	356334 <TObjectWriter::__ct(RefVar const &, CPipe &, int)+0xb8>
        3562fc:	e3a00000 	mov	r0, #0	; 0x0
        356300:	eb5be109 	bl	1a4e72c <TPrecedentsForWriting::$__ct(void)>
        356304:	e5840000 	str	r0, [r4]
        356308:	e3300000 	teq	r0, #0	; 0x0
        35630c:	1a00000c 	bne	356344 <TObjectWriter::__ct(RefVar const &, CPipe &, int)+0xc8>
        356310:	e59f0018 	ldr	r0, [pc, #18]	; 356330 <TObjectWriter::__ct(RefVar const &, CPipe &, int)+0xb4>
        356314:	e5900000 	ldr	r0, [r0]
        356318:	e3a02000 	mov	r2, #0	; 0x0
        35631c:	e3a010e9 	mov	r1, #233	; 0xe9
        356320:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        356324:	eb62339c 	bl	1be319c <$Throw>
        356328:	ea000005 	b	356344 <TObjectWriter::__ct(RefVar const &, CPipe &, int)+0xc8>
        35632c:	0c105980 	ldceq	9, cr5, [r0], -#512
        356330:	00371318 	eoreqs	r1, r7, r8, lsl r3
        356334:	e5901000 	ldr	r1, [r0]
        356338:	e5841000 	str	r1, [r4]
        35633c:	e3a01001 	mov	r1, #1	; 0x1
        356340:	e5c01008 	strb	r1, [r0, #8]	; fField8
        356344:	e1a00004 	mov	r0, r4
        356348:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectWriter::__dt(void)
 * Address: 0035634c
 */
TObjectWriter::~TObjectWriter(void) {
    /*
        35634c:	e1a0c00d 	mov	ip, sp
        356350:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        356354:	e24cb004 	sub	fp, ip, #4	; 0x4
        356358:	e1a04000 	mov	r4, r0
        35635c:	e1a05001 	mov	r5, r1
        356360:	e5901000 	ldr	r1, [r0]
        356364:	e59f001c 	ldr	r0, [pc, #1c]	; 356388 <TObjectWriter::__dt(void)+0x3c>
        356368:	e3a02000 	mov	r2, #0	; 0x0
        35636c:	e5903000 	ldr	r3, [r0]
        356370:	e1310003 	teq	r1, r3
        356374:	1a000004 	bne	35638c <TObjectWriter::__dt(void)+0x40>
        356378:	e5c02008 	strb	r2, [r0, #8]	; fField8
        35637c:	e5940000 	ldr	r0, [r4]
        356380:	eb5be0ec 	bl	1a4e738 <TPrecedentsForWriting::$Reset(void)>
        356384:	ea000003 	b	356398 <TObjectWriter::__dt(void)+0x4c>
        356388:	0c105980 	ldceq	9, cr5, [r0], -#512
        35638c:	e1b00001 	movs	r0, r1
        356390:	13a01001 	movne	r1, #1	; 0x1
        356394:	1b5be0e5 	blne	1a4e730 <TPrecedentsForWriting::$__dt(void)>
        356398:	e5940014 	ldr	r0, [r4, #20]	; fField20
        35639c:	eb61b386 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3563a0:	e2840004 	add	r0, r4, #4	; 0x4
        3563a4:	e3a01000 	mov	r1, #0	; 0x0
        3563a8:	eb5c0e49 	bl	1a59cd4 <TRefStack::$__dt(void)>
        3563ac:	e3150001 	tst	r5, #1	; 0x1
        3563b0:	11a00004 	movne	r0, r4
        3563b4:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        3563b8:	1a61dcc8 	bne	1bcd6e0 <$__dl(void *)>
        3563bc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectWriter::SetCompressLargeBinaries(void)
 * Address: 003563c0
 */
TObjectWriter::SetCompressLargeBinaries(void) {
    /*
        3563c0:	e3a01001 	mov	r1, #1	; 0x1
        3563c4:	e5c01024 	strb	r1, [r0, #36]	; fField36
        3563c8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TObjectWriter::Size(void)
 * Address: 0035649c
 */
TObjectWriter::Size(void) {
    /*
        35649c:	e1a0c00d 	mov	ip, sp
        3564a0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        3564a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        3564a8:	e1a04000 	mov	r4, r0
        3564ac:	e590001c 	ldr	r0, [r0, #28]	; fField28
        3564b0:	e3300000 	teq	r0, #0	; 0x0
        3564b4:	1a000006 	bne	3564d4 <TObjectWriter::Size(void)+0x38>
        3564b8:	e5940000 	ldr	r0, [r4]
        3564bc:	eb5be09d 	bl	1a4e738 <TPrecedentsForWriting::$Reset(void)>
        3564c0:	e1a00004 	mov	r0, r4
        3564c4:	eb5baf1c 	bl	1a4213c <TObjectWriter::$Prescan(void)>
        3564c8:	e594001c 	ldr	r0, [r4, #28]	; fField28
        3564cc:	e2800001 	add	r0, r0, #1	; 0x1
        3564d0:	e584001c 	str	r0, [r4, #28]	; fField28
        3564d4:	e5b4001c 	ldr	r0, [r4, #28]!	; fField28
        3564d8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectWriter::Write(void)
 * Address: 003564dc
 */
TObjectWriter::Write(void) {
    /*
        3564dc:	e1a0c00d 	mov	ip, sp
        3564e0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        3564e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        3564e8:	e1a04000 	mov	r4, r0
        3564ec:	e5900000 	ldr	r0, [r0]
        3564f0:	eb5be090 	bl	1a4e738 <TPrecedentsForWriting::$Reset(void)>
        3564f4:	e3a01002 	mov	r1, #2	; 0x2
        3564f8:	e5940018 	ldr	r0, [r4, #24]	; fField24
        3564fc:	eb623b6a 	bl	1be52ac <CPipe::$__ls(unsigned char)>
        356500:	e1a00004 	mov	r0, r4
        356504:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        356508:	ea5bb329 	b	1a431b4 <TObjectWriter::$Scan(void)>
    */
}

/**
 * Symbol: TObjectWriter::Prescan(void)
 * Address: 0035650c
 */
TObjectWriter::Prescan(void) {
    /*
        35650c:	e1a0c00d 	mov	ip, sp
        356510:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        356514:	e24cb004 	sub	fp, ip, #4	; 0x4
        356518:	e1a04000 	mov	r4, r0
        35651c:	e2800014 	add	r0, r0, #20	; 0x14
        356520:	e1a05000 	mov	r5, r0
        356524:	e5900000 	ldr	r0, [r0]
        356528:	e5900000 	ldr	r0, [r0]
        35652c:	e3100001 	tst	r0, #1	; 0x1
        356530:	e3a09001 	mov	r9, #1	; 0x1
        356534:	e3a08005 	mov	r8, #5	; 0x5
        356538:	0a00015a 	beq	356aa8 <TObjectWriter::Prescan(void)+0x59c>
        35653c:	e1a01005 	mov	r1, r5
        356540:	e5940000 	ldr	r0, [r4]
        356544:	eb5be8b5 	bl	1a50820 <TPrecedentsForWriting::$Find(RefVar const &)>
        356548:	e3700001 	cmn	r0, #1	; 0x1
        35654c:	0a000008 	beq	356574 <TObjectWriter::Prescan(void)+0x68>
        356550:	e594101c 	ldr	r1, [r4, #28]	; fField28
        356554:	e2811001 	add	r1, r1, #1	; 0x1
        356558:	e3500000 	cmp	r0, #0	; 0x0
        35655c:	e584101c 	str	r1, [r4, #28]	; fField28
        356560:	ba000001 	blt	35656c <TObjectWriter::Prescan(void)+0x60>
        356564:	e35000fe 	cmp	r0, #254	; 0xfe
        356568:	d1a08009 	movle	r8, r9
        35656c:	e0880001 	add	r0, r8, r1
        356570:	ea000178 	b	356b58 <TObjectWriter::Prescan(void)+0x64c>
        356574:	e1a01005 	mov	r1, r5
        356578:	e5940000 	ldr	r0, [r4]
        35657c:	eb5be06c 	bl	1a4e734 <TPrecedentsForWriting::$Append(RefVar const &)>
        356580:	e5950000 	ldr	r0, [r5]
        356584:	e5900000 	ldr	r0, [r0]
        356588:	eb61bb58 	bl	1bc52f0 <$ObjectFlags(long)>
        35658c:	e3100001 	tst	r0, #1	; 0x1
        356590:	e2846004 	add	r6, r4, #4	; 0x4
        356594:	0a0000b9 	beq	356880 <TObjectWriter::Prescan(void)+0x374>
        356598:	e3100002 	tst	r0, #2	; 0x2
        35659c:	e594001c 	ldr	r0, [r4, #28]	; fField28
        3565a0:	e2800001 	add	r0, r0, #1	; 0x1
        3565a4:	e584001c 	str	r0, [r4, #28]	; fField28
        3565a8:	e5950000 	ldr	r0, [r5]
        3565ac:	e5900000 	ldr	r0, [r0]
        3565b0:	0a000070 	beq	356778 <TObjectWriter::Prescan(void)+0x26c>
        3565b4:	e3a01000 	mov	r1, #0	; 0x0
        3565b8:	eb5baedb 	bl	1a4212c <$PackSmallRect(long, long *)>
        3565bc:	e3300000 	teq	r0, #0	; 0x0
        3565c0:	1594001c 	ldrne	r0, [r4, #28]	; fField28
        3565c4:	12800004 	addne	r0, r0, #4	; 0x4
        3565c8:	1a000162 	bne	356b58 <TObjectWriter::Prescan(void)+0x64c>
        3565cc:	e5950000 	ldr	r0, [r5]
        3565d0:	e5900000 	ldr	r0, [r0]
        3565d4:	eb61bb34 	bl	1bc52ac <$Length(long)>
        3565d8:	e1a07000 	mov	r7, r0
        3565dc:	e5940020 	ldr	r0, [r4, #32]
        3565e0:	e59fa038 	ldr	sl, [pc, #38]	; 356620 <TObjectWriter::Prescan(void)+0x114>
        3565e4:	e3300000 	teq	r0, #0	; 0x0
        3565e8:	1a00000d 	bne	356624 <TObjectWriter::Prescan(void)+0x118>
        3565ec:	e5950000 	ldr	r0, [r5]
        3565f0:	e5900000 	ldr	r0, [r0]
        3565f4:	e59a1000 	ldr	r1, [sl]
        3565f8:	e5911000 	ldr	r1, [r1]
        3565fc:	eb61b711 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        356600:	e3300000 	teq	r0, #0	; 0x0
        356604:	0a000006 	beq	356624 <TObjectWriter::Prescan(void)+0x118>
        356608:	e2570001 	subs	r0, r7, #1	; 0x1
        35660c:	4a000008 	bmi	356634 <TObjectWriter::Prescan(void)+0x128>
        356610:	e35000fe 	cmp	r0, #254	; 0xfe
        356614:	ca000006 	bgt	356634 <TObjectWriter::Prescan(void)+0x128>
        356618:	e1a08009 	mov	r8, r9
        35661c:	ea000004 	b	356634 <TObjectWriter::Prescan(void)+0x128>
        356620:	00685390 	streqb	r5, [r8], -#48
        356624:	e3570000 	cmp	r7, #0	; 0x0
        356628:	ba000001 	blt	356634 <TObjectWriter::Prescan(void)+0x128>
        35662c:	e35700fe 	cmp	r7, #254	; 0xfe
        356630:	dafffff8 	ble	356618 <TObjectWriter::Prescan(void)+0x10c>
        356634:	e594001c 	ldr	r0, [r4, #28]	; fField28
        356638:	e0880000 	add	r0, r8, r0
        35663c:	e3e09000 	mvn	r9, #0	; 0x0
        356640:	e584001c 	str	r0, [r4, #28]	; fField28
        356644:	e5951000 	ldr	r1, [r5]
        356648:	e5911000 	ldr	r1, [r1]
        35664c:	e5962000 	ldr	r2, [r6]
        356650:	e4821004 	str	r1, [r2], #4
        356654:	e5862000 	str	r2, [r6]
        356658:	e24dd004 	sub	sp, sp, #4	; 0x4
        35665c:	e5950000 	ldr	r0, [r5]
        356660:	e5900000 	ldr	r0, [r0]
        356664:	eb61bb22 	bl	1bc52f4 <$ObjectPtr(long)>
        356668:	e5900008 	ldr	r0, [r0, #8]	; fField8
        35666c:	eb61aeb6 	bl	1bc214c <$AllocateRefHandle(long)>
        356670:	e3a08000 	mov	r8, #0	; 0x0
        356674:	e3570000 	cmp	r7, #0	; 0x0
        356678:	e58d0000 	str	r0, [sp]
        35667c:	da000017 	ble	3566e0 <TObjectWriter::Prescan(void)+0x1d4>
        356680:	e1a0a005 	mov	sl, r5
        356684:	e1a01008 	mov	r1, r8
        356688:	e1a0000d 	mov	r0, sp
        35668c:	e3a02000 	mov	r2, #0	; 0x0
        356690:	eb5ba651 	bl	1a3ffdc <$GetTag(RefVar const &, long, long *)>
        356694:	e59a1000 	ldr	r1, [sl]
        356698:	e5810000 	str	r0, [r1]
        35669c:	e5940020 	ldr	r0, [r4, #32]
        3566a0:	e3300000 	teq	r0, #0	; 0x0
        3566a4:	1a000008 	bne	3566cc <TObjectWriter::Prescan(void)+0x1c0>
        3566a8:	e5950000 	ldr	r0, [r5]
        3566ac:	e5900000 	ldr	r0, [r0]
        3566b0:	e51fa098 	ldr	sl, [pc, #ffffff68]	; 356620 <TObjectWriter::Prescan(void)+0x114>
        3566b4:	e59a1000 	ldr	r1, [sl]
        3566b8:	e5911000 	ldr	r1, [r1]
        3566bc:	eb61b6db 	bl	1bc4230 <$EQRef__FlT1>
        3566c0:	e3300000 	teq	r0, #0	; 0x0
        3566c4:	11a09008 	movne	r9, r8
        3566c8:	1a000001 	bne	3566d4 <TObjectWriter::Prescan(void)+0x1c8>
        3566cc:	e1a00004 	mov	r0, r4
        3566d0:	eb5bae99 	bl	1a4213c <TObjectWriter::$Prescan(void)>
        3566d4:	e2888001 	add	r8, r8, #1	; 0x1
        3566d8:	e1580007 	cmp	r8, r7
        3566dc:	baffffe7 	blt	356680 <TObjectWriter::Prescan(void)+0x174>
        3566e0:	e59d0000 	ldr	r0, [sp]
        3566e4:	eb61b2b4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3566e8:	e28dd004 	add	sp, sp, #4	; 0x4
        3566ec:	e5962000 	ldr	r2, [r6]
        3566f0:	e2422004 	sub	r2, r2, #4	; 0x4
        3566f4:	e5862000 	str	r2, [r6]
        3566f8:	e5920000 	ldr	r0, [r2]
        3566fc:	e5951000 	ldr	r1, [r5]
        356700:	e3a08000 	mov	r8, #0	; 0x0
        356704:	e3570000 	cmp	r7, #0	; 0x0
        356708:	e5810000 	str	r0, [r1]
        35670c:	d91baff0 	ldmledb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        356710:	e1380009 	teq	r8, r9
        356714:	0a000013 	beq	356768 <TObjectWriter::Prescan(void)+0x25c>
        356718:	e5951000 	ldr	r1, [r5]
        35671c:	e5911000 	ldr	r1, [r1]
        356720:	e5962000 	ldr	r2, [r6]
        356724:	e4821004 	str	r1, [r2], #4
        356728:	e1a0a005 	mov	sl, r5
        35672c:	e1a01008 	mov	r1, r8
        356730:	e5862000 	str	r2, [r6]
        356734:	e5950000 	ldr	r0, [r5]
        356738:	e5900000 	ldr	r0, [r0]
        35673c:	eb61b6c4 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        356740:	e59a1000 	ldr	r1, [sl]
        356744:	e5810000 	str	r0, [r1]
        356748:	e1a00004 	mov	r0, r4
        35674c:	eb5bae7a 	bl	1a4213c <TObjectWriter::$Prescan(void)>
        356750:	e5962000 	ldr	r2, [r6]
        356754:	e2422004 	sub	r2, r2, #4	; 0x4
        356758:	e5862000 	str	r2, [r6]
        35675c:	e5920000 	ldr	r0, [r2]
        356760:	e5951000 	ldr	r1, [r5]
        356764:	e5810000 	str	r0, [r1]
        356768:	e2888001 	add	r8, r8, #1	; 0x1
        35676c:	e1580007 	cmp	r8, r7
        356770:	baffffe6 	blt	356710 <TObjectWriter::Prescan(void)+0x204>
        356774:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        356778:	eb61bacb 	bl	1bc52ac <$Length(long)>
        35677c:	e1b07000 	movs	r7, r0
        356780:	4a000001 	bmi	35678c <TObjectWriter::Prescan(void)+0x280>
        356784:	e35700fe 	cmp	r7, #254	; 0xfe
        356788:	d1a08009 	movle	r8, r9
        35678c:	e594001c 	ldr	r0, [r4, #28]	; fField28
        356790:	e0880000 	add	r0, r8, r0
        356794:	e584001c 	str	r0, [r4, #28]	; fField28
        356798:	e5950000 	ldr	r0, [r5]
        35679c:	e5900000 	ldr	r0, [r0]
        3567a0:	eb61bad3 	bl	1bc52f4 <$ObjectPtr(long)>
        3567a4:	e5900008 	ldr	r0, [r0, #8]	; fField8
        3567a8:	e59f10cc 	ldr	r1, [pc, #cc]	; 35687c <TObjectWriter::Prescan(void)+0x370>
        3567ac:	e5911000 	ldr	r1, [r1]
        3567b0:	e5911000 	ldr	r1, [r1]
        3567b4:	eb61b69d 	bl	1bc4230 <$EQRef__FlT1>
        3567b8:	e3300000 	teq	r0, #0	; 0x0
        3567bc:	1a000013 	bne	356810 <TObjectWriter::Prescan(void)+0x304>
        3567c0:	e5951000 	ldr	r1, [r5]
        3567c4:	e5911000 	ldr	r1, [r1]
        3567c8:	e5962000 	ldr	r2, [r6]
        3567cc:	e4821004 	str	r1, [r2], #4
        3567d0:	e1a08005 	mov	r8, r5
        3567d4:	e5862000 	str	r2, [r6]
        3567d8:	e5950000 	ldr	r0, [r5]
        3567dc:	e5900000 	ldr	r0, [r0]
        3567e0:	eb61bac3 	bl	1bc52f4 <$ObjectPtr(long)>
        3567e4:	e5900008 	ldr	r0, [r0, #8]	; fField8
        3567e8:	e5981000 	ldr	r1, [r8]
        3567ec:	e5810000 	str	r0, [r1]
        3567f0:	e1a00004 	mov	r0, r4
        3567f4:	eb5bae50 	bl	1a4213c <TObjectWriter::$Prescan(void)>
        3567f8:	e5962000 	ldr	r2, [r6]
        3567fc:	e2422004 	sub	r2, r2, #4	; 0x4
        356800:	e5862000 	str	r2, [r6]
        356804:	e5920000 	ldr	r0, [r2]
        356808:	e5951000 	ldr	r1, [r5]
        35680c:	e5810000 	str	r0, [r1]
        356810:	e3a08000 	mov	r8, #0	; 0x0
        356814:	e3570000 	cmp	r7, #0	; 0x0
        356818:	d91baff0 	ldmledb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        35681c:	e5951000 	ldr	r1, [r5]
        356820:	e5911000 	ldr	r1, [r1]
        356824:	e5962000 	ldr	r2, [r6]
        356828:	e4821004 	str	r1, [r2], #4
        35682c:	e1a09005 	mov	r9, r5
        356830:	e1a01008 	mov	r1, r8
        356834:	e5862000 	str	r2, [r6]
        356838:	e5950000 	ldr	r0, [r5]
        35683c:	e5900000 	ldr	r0, [r0]
        356840:	eb61b683 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        356844:	e5991000 	ldr	r1, [r9]
        356848:	e5810000 	str	r0, [r1]
        35684c:	e1a00004 	mov	r0, r4
        356850:	eb5bae39 	bl	1a4213c <TObjectWriter::$Prescan(void)>
        356854:	e5962000 	ldr	r2, [r6]
        356858:	e2422004 	sub	r2, r2, #4	; 0x4
        35685c:	e5862000 	str	r2, [r6]
        356860:	e5920000 	ldr	r0, [r2]
        356864:	e5951000 	ldr	r1, [r5]
        356868:	e2888001 	add	r8, r8, #1	; 0x1
        35686c:	e1580007 	cmp	r8, r7
        356870:	e5810000 	str	r0, [r1]
        356874:	baffffe8 	blt	35681c <TObjectWriter::Prescan(void)+0x310>
        356878:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        35687c:	00681f10 	rsbeq	r1, r8, r0, lsl pc
        356880:	e2000003 	and	r0, r0, #3	; 0x3
        356884:	e3300002 	teq	r0, #2	; 0x2
        356888:	e1a00005 	mov	r0, r5
        35688c:	1a000043 	bne	3569a0 <TObjectWriter::Prescan(void)+0x494>
        356890:	e5900000 	ldr	r0, [r0]
        356894:	e5900000 	ldr	r0, [r0]
        356898:	eb61ba95 	bl	1bc52f4 <$ObjectPtr(long)>
        35689c:	e5b0100c 	ldr	r1, [r0, #12]!
        3568a0:	e59f00e0 	ldr	r0, [pc, #e0]	; 356988 <TObjectWriter::Prescan(void)+0x47c>
        3568a4:	e1310000 	teq	r1, r0
        3568a8:	1a000037 	bne	35698c <TObjectWriter::Prescan(void)+0x480>
        3568ac:	e5950000 	ldr	r0, [r5]
        3568b0:	e5900000 	ldr	r0, [r0]
        3568b4:	eb61ba8e 	bl	1bc52f4 <$ObjectPtr(long)>
        3568b8:	e2800010 	add	r0, r0, #16	; 0x10
        3568bc:	e1a08000 	mov	r8, r0
        3568c0:	eb5bba8d 	bl	1a452fc <LBData::$GetStore( const(void))>
        3568c4:	e1a07000 	mov	r7, r0
        3568c8:	e594001c 	ldr	r0, [r4, #28]	; fField28
        3568cc:	e2800001 	add	r0, r0, #1	; 0x1
        3568d0:	e584001c 	str	r0, [r4, #28]	; fField28
        3568d4:	e5951000 	ldr	r1, [r5]
        3568d8:	e5911000 	ldr	r1, [r1]
        3568dc:	e5962000 	ldr	r2, [r6]
        3568e0:	e4821004 	str	r1, [r2], #4
        3568e4:	e1a09005 	mov	r9, r5
        3568e8:	e1a00005 	mov	r0, r5
        3568ec:	e5862000 	str	r2, [r6]
        3568f0:	eb61ae1c 	bl	1bc2168 <$ClassOf(RefVar const &)>
        3568f4:	e5991000 	ldr	r1, [r9]
        3568f8:	e5810000 	str	r0, [r1]
        3568fc:	e1a00004 	mov	r0, r4
        356900:	eb5bae0d 	bl	1a4213c <TObjectWriter::$Prescan(void)>
        356904:	e5960000 	ldr	r0, [r6]
        356908:	e2400004 	sub	r0, r0, #4	; 0x4
        35690c:	e5860000 	str	r0, [r6]
        356910:	e5900000 	ldr	r0, [r0]
        356914:	e5951000 	ldr	r1, [r5]
        356918:	e5810000 	str	r0, [r1]
        35691c:	e594001c 	ldr	r0, [r4, #28]	; fField28
        356920:	e2800011 	add	r0, r0, #17	; 0x11
        356924:	e584001c 	str	r0, [r4, #28]	; fField28
        356928:	e24dd008 	sub	sp, sp, #8	; 0x8
        35692c:	e5981004 	ldr	r1, [r8, #4]
        356930:	e28d2004 	add	r2, sp, #4	; 0x4
        356934:	e597007c 	ldr	r0, [r7, #124]
        356938:	eb5ee7bf 	bl	1b1083c <$LOCompanderNameStrLen(TStore *, unsigned long, long *)>
        35693c:	e5981004 	ldr	r1, [r8, #4]
        356940:	e1a0200d 	mov	r2, sp
        356944:	e597007c 	ldr	r0, [r7, #124]
        356948:	eb5ee7be 	bl	1b10848 <$LOCompanderParameterSize(TStore *, unsigned long, long *)>
        35694c:	e594101c 	ldr	r1, [r4, #28]	; fField28
        356950:	e59d0004 	ldr	r0, [sp, #4]
        356954:	e0810000 	add	r0, r1, r0
        356958:	e584001c 	str	r0, [r4, #28]	; fField28
        35695c:	e59d1000 	ldr	r1, [sp]
        356960:	e0800001 	add	r0, r0, r1
        356964:	e584001c 	str	r0, [r4, #28]	; fField28
        356968:	e5d42024 	ldrb	r2, [r4, #36]	; fField36
        35696c:	e5b81004 	ldr	r1, [r8, #4]!
        356970:	e5b7007c 	ldr	r0, [r7, #124]!
        356974:	eb5ed315 	bl	1b0b5d0 <$LOSizeOfStream(TStore *, unsigned long, unsigned char)>
        356978:	e594101c 	ldr	r1, [r4, #28]	; fField28
        35697c:	e0800001 	add	r0, r0, r1
        356980:	e5a4001c 	str	r0, [r4, #28]!	; fField28
        356984:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        356988:	0c1010a0 	ldceq	0, cr1, [r0], -#640
        35698c:	e594001c 	ldr	r0, [r4, #28]	; fField28
        356990:	e2800001 	add	r0, r0, #1	; 0x1
        356994:	e584001c 	str	r0, [r4, #28]	; fField28
        356998:	e2800001 	add	r0, r0, #1	; 0x1
        35699c:	ea00006d 	b	356b58 <TObjectWriter::Prescan(void)+0x64c>
        3569a0:	eb61adf0 	bl	1bc2168 <$ClassOf(RefVar const &)>
        3569a4:	eb61ade8 	bl	1bc214c <$AllocateRefHandle(long)>
        3569a8:	e1a0a000 	mov	sl, r0
        3569ac:	e5950000 	ldr	r0, [r5]
        3569b0:	e5900000 	ldr	r0, [r0]
        3569b4:	eb61ba3a 	bl	1bc52a4 <$IsSymbol(long)>
        3569b8:	e3300000 	teq	r0, #0	; 0x0
        3569bc:	e594001c 	ldr	r0, [r4, #28]	; fField28
        3569c0:	e2800001 	add	r0, r0, #1	; 0x1
        3569c4:	e584001c 	str	r0, [r4, #28]	; fField28
        3569c8:	0a00000b 	beq	3569fc <TObjectWriter::Prescan(void)+0x4f0>
        3569cc:	e5950000 	ldr	r0, [r5]
        3569d0:	e5900000 	ldr	r0, [r0]
        3569d4:	eb61c69f 	bl	1bc8458 <$SymbolName(long)>
        3569d8:	eb617c34 	bl	1bb5ab0 <$strlen>
        3569dc:	e3500000 	cmp	r0, #0	; 0x0
        3569e0:	ba000001 	blt	3569ec <TObjectWriter::Prescan(void)+0x4e0>
        3569e4:	e35000fe 	cmp	r0, #254	; 0xfe
        3569e8:	d1a08009 	movle	r8, r9
        3569ec:	e594101c 	ldr	r1, [r4, #28]	; fField28
        3569f0:	e0881001 	add	r1, r8, r1
        3569f4:	e0810000 	add	r0, r1, r0
        3569f8:	ea000026 	b	356a98 <TObjectWriter::Prescan(void)+0x58c>
        3569fc:	e5950000 	ldr	r0, [r5]
        356a00:	e5900000 	ldr	r0, [r0]
        356a04:	eb61ba28 	bl	1bc52ac <$Length(long)>
        356a08:	e1b07000 	movs	r7, r0
        356a0c:	4a000001 	bmi	356a18 <TObjectWriter::Prescan(void)+0x50c>
        356a10:	e35700fe 	cmp	r7, #254	; 0xfe
        356a14:	d1a08009 	movle	r8, r9
        356a18:	e594001c 	ldr	r0, [r4, #28]	; fField28
        356a1c:	e0880000 	add	r0, r8, r0
        356a20:	e584001c 	str	r0, [r4, #28]	; fField28
        356a24:	e59a0000 	ldr	r0, [sl]
        356a28:	e59f10fc 	ldr	r1, [pc, #fc]	; 356b2c <TObjectWriter::Prescan(void)+0x620>
        356a2c:	e5911000 	ldr	r1, [r1]
        356a30:	e5911000 	ldr	r1, [r1]
        356a34:	eb61b5fd 	bl	1bc4230 <$EQRef__FlT1>
        356a38:	e3300000 	teq	r0, #0	; 0x0
        356a3c:	1a000013 	bne	356a90 <TObjectWriter::Prescan(void)+0x584>
        356a40:	e5951000 	ldr	r1, [r5]
        356a44:	e5911000 	ldr	r1, [r1]
        356a48:	e5962000 	ldr	r2, [r6]
        356a4c:	e4821004 	str	r1, [r2], #4
        356a50:	e1a08005 	mov	r8, r5
        356a54:	e5862000 	str	r2, [r6]
        356a58:	e5950000 	ldr	r0, [r5]
        356a5c:	e5900000 	ldr	r0, [r0]
        356a60:	eb61ba23 	bl	1bc52f4 <$ObjectPtr(long)>
        356a64:	e5900008 	ldr	r0, [r0, #8]	; fField8
        356a68:	e5981000 	ldr	r1, [r8]
        356a6c:	e5810000 	str	r0, [r1]
        356a70:	e1a00004 	mov	r0, r4
        356a74:	eb5badb0 	bl	1a4213c <TObjectWriter::$Prescan(void)>
        356a78:	e5960000 	ldr	r0, [r6]
        356a7c:	e2400004 	sub	r0, r0, #4	; 0x4
        356a80:	e5860000 	str	r0, [r6]
        356a84:	e5900000 	ldr	r0, [r0]
        356a88:	e5951000 	ldr	r1, [r5]
        356a8c:	e5810000 	str	r0, [r1]
        356a90:	e594001c 	ldr	r0, [r4, #28]	; fField28
        356a94:	e0800007 	add	r0, r0, r7
        356a98:	e5a4001c 	str	r0, [r4, #28]!	; fField28
        356a9c:	e1a0000a 	mov	r0, sl
        356aa0:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        356aa4:	ea61b1c4 	b	1bc31bc <$DisposeRefHandle(RefHandle *)>
        356aa8:	e3300002 	teq	r0, #2	; 0x2
        356aac:	0a00001c 	beq	356b24 <TObjectWriter::Prescan(void)+0x618>
        356ab0:	e2001003 	and	r1, r0, #3	; 0x3
        356ab4:	e3310002 	teq	r1, #2	; 0x2
        356ab8:	01a01000 	moveq	r1, r0
        356abc:	03a00003 	moveq	r0, #3	; 0x3
        356ac0:	00001141 	andeq	r1, r0, r1, asr #2
        356ac4:	03310001 	teqeq	r1, #1	; 0x1
        356ac8:	1a000018 	bne	356b30 <TObjectWriter::Prescan(void)+0x624>
        356acc:	e594101c 	ldr	r1, [r4, #28]	; fField28
        356ad0:	e2811001 	add	r1, r1, #1	; 0x1
        356ad4:	e584101c 	str	r1, [r4, #28]	; fField28
        356ad8:	e5951000 	ldr	r1, [r5]
        356adc:	e5911000 	ldr	r1, [r1]
        356ae0:	e2012003 	and	r2, r1, #3	; 0x3
        356ae4:	e3320002 	teq	r2, #2	; 0x2
        356ae8:	00000141 	andeq	r0, r0, r1, asr #2
        356aec:	03300001 	teqeq	r0, #1	; 0x1
        356af0:	01a00141 	moveq	r0, r1, asr #2
        356af4:	01a00140 	moveq	r0, r0, asr #2
        356af8:	01a00800 	moveq	r0, r0, lsl #16
        356afc:	01a00820 	moveq	r0, r0, lsr #16
        356b00:	0a000001 	beq	356b0c <TObjectWriter::Prescan(void)+0x600>
        356b04:	e1a00001 	mov	r0, r1
        356b08:	eb61ad82 	bl	1bc2118 <$_RCHARError(long)>
        356b0c:	e1a00800 	mov	r0, r0, lsl #16
        356b10:	e1a00820 	mov	r0, r0, lsr #16
        356b14:	e35000ff 	cmp	r0, #255	; 0xff
        356b18:	c594001c 	ldrgt	r0, [r4, #28]	; fField28
        356b1c:	c2800002 	addgt	r0, r0, #2	; 0x2
        356b20:	ca00000c 	bgt	356b58 <TObjectWriter::Prescan(void)+0x64c>
        356b24:	e594001c 	ldr	r0, [r4, #28]	; fField28
        356b28:	eaffff9a 	b	356998 <TObjectWriter::Prescan(void)+0x48c>
        356b2c:	006848d0 	ldreqd	r4, [r8], -#128
        356b30:	e594001c 	ldr	r0, [r4, #28]	; fField28
        356b34:	e2800001 	add	r0, r0, #1	; 0x1
        356b38:	e584001c 	str	r0, [r4, #28]	; fField28
        356b3c:	e5951000 	ldr	r1, [r5]
        356b40:	e5911000 	ldr	r1, [r1]
        356b44:	e3510000 	cmp	r1, #0	; 0x0
        356b48:	ba000001 	blt	356b54 <TObjectWriter::Prescan(void)+0x648>
        356b4c:	e35100fe 	cmp	r1, #254	; 0xfe
        356b50:	d1a08009 	movle	r8, r9
        356b54:	e0880000 	add	r0, r8, r0
        356b58:	e5a4001c 	str	r0, [r4, #28]!	; fField28
        356b5c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectWriter::Scan(void)
 * Address: 00356b60
 */
TObjectWriter::Scan(void) {
    /*
        356b60:	e1a0c00d 	mov	ip, sp
        356b64:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        356b68:	e24cb004 	sub	fp, ip, #4	; 0x4
        356b6c:	e1a04000 	mov	r4, r0
        356b70:	e24dd008 	sub	sp, sp, #8	; 0x8
        356b74:	e2800014 	add	r0, r0, #20	; 0x14
        356b78:	e1a05000 	mov	r5, r0
        356b7c:	e5900000 	ldr	r0, [r0]
        356b80:	e5900000 	ldr	r0, [r0]
        356b84:	e3100001 	tst	r0, #1	; 0x1
        356b88:	0a0001cc 	beq	3572c0 <TObjectWriter::Scan(void)+0x760>
        356b8c:	e1a01005 	mov	r1, r5
        356b90:	e5940000 	ldr	r0, [r4]
        356b94:	eb5be721 	bl	1a50820 <TPrecedentsForWriting::$Find(RefVar const &)>
        356b98:	e1a06000 	mov	r6, r0
        356b9c:	e3700001 	cmn	r0, #1	; 0x1
        356ba0:	0a000005 	beq	356bbc <TObjectWriter::Scan(void)+0x5c>
        356ba4:	e3a01009 	mov	r1, #9	; 0x9
        356ba8:	e5940018 	ldr	r0, [r4, #24]	; fField24
        356bac:	eb6239be 	bl	1be52ac <CPipe::$__ls(unsigned char)>
        356bb0:	e1a01006 	mov	r1, r6
        356bb4:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        356bb8:	ea0001e8 	b	357360 <TObjectWriter::Scan(void)+0x800>
        356bbc:	e1a01005 	mov	r1, r5
        356bc0:	e5940000 	ldr	r0, [r4]
        356bc4:	eb5bdeda 	bl	1a4e734 <TPrecedentsForWriting::$Append(RefVar const &)>
        356bc8:	e5950000 	ldr	r0, [r5]
        356bcc:	e5900000 	ldr	r0, [r0]
        356bd0:	eb61b9c6 	bl	1bc52f0 <$ObjectFlags(long)>
        356bd4:	e3100001 	tst	r0, #1	; 0x1
        356bd8:	e2846004 	add	r6, r4, #4	; 0x4
        356bdc:	0a0000bd 	beq	356ed8 <TObjectWriter::Scan(void)+0x378>
        356be0:	e3100002 	tst	r0, #2	; 0x2
        356be4:	0a000074 	beq	356dbc <TObjectWriter::Scan(void)+0x25c>
        356be8:	e24dd004 	sub	sp, sp, #4	; 0x4
        356bec:	e5950000 	ldr	r0, [r5]
        356bf0:	e5900000 	ldr	r0, [r0]
        356bf4:	e1a0100d 	mov	r1, sp
        356bf8:	eb5bad4b 	bl	1a4212c <$PackSmallRect(long, long *)>
        356bfc:	e3300000 	teq	r0, #0	; 0x0
        356c00:	0a000006 	beq	356c20 <TObjectWriter::Scan(void)+0xc0>
        356c04:	e3a0100b 	mov	r1, #11	; 0xb
        356c08:	e5940018 	ldr	r0, [r4, #24]	; fField24
        356c0c:	eb6239a6 	bl	1be52ac <CPipe::$__ls(unsigned char)>
        356c10:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        356c14:	e59d1000 	ldr	r1, [sp]
        356c18:	eb6239a0 	bl	1be52a0 <CPipe::$__ls(long)>
        356c1c:	ea000063 	b	356db0 <TObjectWriter::Scan(void)+0x250>
        356c20:	e3a01006 	mov	r1, #6	; 0x6
        356c24:	e5940018 	ldr	r0, [r4, #24]	; fField24
        356c28:	eb62399f 	bl	1be52ac <CPipe::$__ls(unsigned char)>
        356c2c:	e5950000 	ldr	r0, [r5]
        356c30:	e5900000 	ldr	r0, [r0]
        356c34:	eb61b99c 	bl	1bc52ac <$Length(long)>
        356c38:	e1a07000 	mov	r7, r0
        356c3c:	e5940020 	ldr	r0, [r4, #32]
        356c40:	e59fa170 	ldr	sl, [pc, #170]	; 356db8 <TObjectWriter::Scan(void)+0x258>
        356c44:	e3300000 	teq	r0, #0	; 0x0
        356c48:	1a000008 	bne	356c70 <TObjectWriter::Scan(void)+0x110>
        356c4c:	e5950000 	ldr	r0, [r5]
        356c50:	e5900000 	ldr	r0, [r0]
        356c54:	e59a1000 	ldr	r1, [sl]
        356c58:	e5911000 	ldr	r1, [r1]
        356c5c:	eb61b579 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        356c60:	e3300000 	teq	r0, #0	; 0x0
        356c64:	12471001 	subne	r1, r7, #1	; 0x1
        356c68:	15940018 	ldrne	r0, [r4, #24]	; fField24
        356c6c:	1a000001 	bne	356c78 <TObjectWriter::Scan(void)+0x118>
        356c70:	e1a01007 	mov	r1, r7
        356c74:	e5940018 	ldr	r0, [r4, #24]	; fField24
        356c78:	eb5ba910 	bl	1a410c0 <$LongToPipe(CPipe &, long)>
        356c7c:	e3e09000 	mvn	r9, #0	; 0x0
        356c80:	e5951000 	ldr	r1, [r5]
        356c84:	e5911000 	ldr	r1, [r1]
        356c88:	e5962000 	ldr	r2, [r6]
        356c8c:	e4821004 	str	r1, [r2], #4
        356c90:	e5862000 	str	r2, [r6]
        356c94:	e24dd004 	sub	sp, sp, #4	; 0x4
        356c98:	e5950000 	ldr	r0, [r5]
        356c9c:	e5900000 	ldr	r0, [r0]
        356ca0:	eb61b993 	bl	1bc52f4 <$ObjectPtr(long)>
        356ca4:	e5900008 	ldr	r0, [r0, #8]	; fField8
        356ca8:	eb61ad27 	bl	1bc214c <$AllocateRefHandle(long)>
        356cac:	e3a08000 	mov	r8, #0	; 0x0
        356cb0:	e3570000 	cmp	r7, #0	; 0x0
        356cb4:	e58d0000 	str	r0, [sp]
        356cb8:	da000017 	ble	356d1c <TObjectWriter::Scan(void)+0x1bc>
        356cbc:	e1a0a005 	mov	sl, r5
        356cc0:	e1a01008 	mov	r1, r8
        356cc4:	e1a0000d 	mov	r0, sp
        356cc8:	e3a02000 	mov	r2, #0	; 0x0
        356ccc:	eb5ba4c2 	bl	1a3ffdc <$GetTag(RefVar const &, long, long *)>
        356cd0:	e59a1000 	ldr	r1, [sl]
        356cd4:	e5810000 	str	r0, [r1]
        356cd8:	e5940020 	ldr	r0, [r4, #32]
        356cdc:	e3300000 	teq	r0, #0	; 0x0
        356ce0:	1a000008 	bne	356d08 <TObjectWriter::Scan(void)+0x1a8>
        356ce4:	e5950000 	ldr	r0, [r5]
        356ce8:	e5900000 	ldr	r0, [r0]
        356cec:	e59fa0c4 	ldr	sl, [pc, #c4]	; 356db8 <TObjectWriter::Scan(void)+0x258>
        356cf0:	e59a1000 	ldr	r1, [sl]
        356cf4:	e5911000 	ldr	r1, [r1]
        356cf8:	eb61b54c 	bl	1bc4230 <$EQRef__FlT1>
        356cfc:	e3300000 	teq	r0, #0	; 0x0
        356d00:	11a09008 	movne	r9, r8
        356d04:	1a000001 	bne	356d10 <TObjectWriter::Scan(void)+0x1b0>
        356d08:	e1a00004 	mov	r0, r4
        356d0c:	eb5bb128 	bl	1a431b4 <TObjectWriter::$Scan(void)>
        356d10:	e2888001 	add	r8, r8, #1	; 0x1
        356d14:	e1580007 	cmp	r8, r7
        356d18:	baffffe7 	blt	356cbc <TObjectWriter::Scan(void)+0x15c>
        356d1c:	e59d0000 	ldr	r0, [sp]
        356d20:	eb61b125 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        356d24:	e28dd004 	add	sp, sp, #4	; 0x4
        356d28:	e5962000 	ldr	r2, [r6]
        356d2c:	e2422004 	sub	r2, r2, #4	; 0x4
        356d30:	e5862000 	str	r2, [r6]
        356d34:	e5920000 	ldr	r0, [r2]
        356d38:	e5951000 	ldr	r1, [r5]
        356d3c:	e3a08000 	mov	r8, #0	; 0x0
        356d40:	e3570000 	cmp	r7, #0	; 0x0
        356d44:	e5810000 	str	r0, [r1]
        356d48:	da000018 	ble	356db0 <TObjectWriter::Scan(void)+0x250>
        356d4c:	e1380009 	teq	r8, r9
        356d50:	0a000013 	beq	356da4 <TObjectWriter::Scan(void)+0x244>
        356d54:	e5951000 	ldr	r1, [r5]
        356d58:	e5911000 	ldr	r1, [r1]
        356d5c:	e5962000 	ldr	r2, [r6]
        356d60:	e4821004 	str	r1, [r2], #4
        356d64:	e1a0a005 	mov	sl, r5
        356d68:	e1a01008 	mov	r1, r8
        356d6c:	e5862000 	str	r2, [r6]
        356d70:	e5950000 	ldr	r0, [r5]
        356d74:	e5900000 	ldr	r0, [r0]
        356d78:	eb61b535 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        356d7c:	e59a1000 	ldr	r1, [sl]
        356d80:	e5810000 	str	r0, [r1]
        356d84:	e1a00004 	mov	r0, r4
        356d88:	eb5bb109 	bl	1a431b4 <TObjectWriter::$Scan(void)>
        356d8c:	e5962000 	ldr	r2, [r6]
        356d90:	e2422004 	sub	r2, r2, #4	; 0x4
        356d94:	e5862000 	str	r2, [r6]
        356d98:	e5920000 	ldr	r0, [r2]
        356d9c:	e5951000 	ldr	r1, [r5]
        356da0:	e5810000 	str	r0, [r1]
        356da4:	e2888001 	add	r8, r8, #1	; 0x1
        356da8:	e1580007 	cmp	r8, r7
        356dac:	baffffe6 	blt	356d4c <TObjectWriter::Scan(void)+0x1ec>
        356db0:	e28dd004 	add	sp, sp, #4	; 0x4
        356db4:	ea00016a 	b	357364 <TObjectWriter::Scan(void)+0x804>
        356db8:	00685390 	streqb	r5, [r8], -#48
        356dbc:	e5950000 	ldr	r0, [r5]
        356dc0:	e5900000 	ldr	r0, [r0]
        356dc4:	eb61b94a 	bl	1bc52f4 <$ObjectPtr(long)>
        356dc8:	e5900008 	ldr	r0, [r0, #8]	; fField8
        356dcc:	e59f1100 	ldr	r1, [pc, #100]	; 356ed4 <TObjectWriter::Scan(void)+0x374>
        356dd0:	e5911000 	ldr	r1, [r1]
        356dd4:	e5911000 	ldr	r1, [r1]
        356dd8:	eb61b514 	bl	1bc4230 <$EQRef__FlT1>
        356ddc:	e1b07000 	movs	r7, r0
        356de0:	03a00004 	moveq	r0, #4	; 0x4
        356de4:	13a00005 	movne	r0, #5	; 0x5
        356de8:	e20010ff 	and	r1, r0, #255	; 0xff
        356dec:	e5940018 	ldr	r0, [r4, #24]	; fField24
        356df0:	eb62392d 	bl	1be52ac <CPipe::$__ls(unsigned char)>
        356df4:	e5950000 	ldr	r0, [r5]
        356df8:	e5900000 	ldr	r0, [r0]
        356dfc:	eb61b92a 	bl	1bc52ac <$Length(long)>
        356e00:	e1a08000 	mov	r8, r0
        356e04:	e1a01008 	mov	r1, r8
        356e08:	e5940018 	ldr	r0, [r4, #24]	; fField24
        356e0c:	eb5ba8ab 	bl	1a410c0 <$LongToPipe(CPipe &, long)>
        356e10:	e3370000 	teq	r7, #0	; 0x0
        356e14:	1a000013 	bne	356e68 <TObjectWriter::Scan(void)+0x308>
        356e18:	e5951000 	ldr	r1, [r5]
        356e1c:	e5911000 	ldr	r1, [r1]
        356e20:	e5962000 	ldr	r2, [r6]
        356e24:	e4821004 	str	r1, [r2], #4
        356e28:	e1a07005 	mov	r7, r5
        356e2c:	e5862000 	str	r2, [r6]
        356e30:	e5950000 	ldr	r0, [r5]
        356e34:	e5900000 	ldr	r0, [r0]
        356e38:	eb61b92d 	bl	1bc52f4 <$ObjectPtr(long)>
        356e3c:	e5900008 	ldr	r0, [r0, #8]	; fField8
        356e40:	e5971000 	ldr	r1, [r7]
        356e44:	e5810000 	str	r0, [r1]
        356e48:	e1a00004 	mov	r0, r4
        356e4c:	eb5bb0d8 	bl	1a431b4 <TObjectWriter::$Scan(void)>
        356e50:	e5962000 	ldr	r2, [r6]
        356e54:	e2422004 	sub	r2, r2, #4	; 0x4
        356e58:	e5862000 	str	r2, [r6]
        356e5c:	e5920000 	ldr	r0, [r2]
        356e60:	e5951000 	ldr	r1, [r5]
        356e64:	e5810000 	str	r0, [r1]
        356e68:	e3a07000 	mov	r7, #0	; 0x0
        356e6c:	e3580000 	cmp	r8, #0	; 0x0
        356e70:	da00013b 	ble	357364 <TObjectWriter::Scan(void)+0x804>
        356e74:	e5951000 	ldr	r1, [r5]
        356e78:	e5911000 	ldr	r1, [r1]
        356e7c:	e5962000 	ldr	r2, [r6]
        356e80:	e4821004 	str	r1, [r2], #4
        356e84:	e1a09005 	mov	r9, r5
        356e88:	e1a01007 	mov	r1, r7
        356e8c:	e5862000 	str	r2, [r6]
        356e90:	e5950000 	ldr	r0, [r5]
        356e94:	e5900000 	ldr	r0, [r0]
        356e98:	eb61b4ed 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        356e9c:	e5991000 	ldr	r1, [r9]
        356ea0:	e5810000 	str	r0, [r1]
        356ea4:	e1a00004 	mov	r0, r4
        356ea8:	eb5bb0c1 	bl	1a431b4 <TObjectWriter::$Scan(void)>
        356eac:	e5962000 	ldr	r2, [r6]
        356eb0:	e2422004 	sub	r2, r2, #4	; 0x4
        356eb4:	e5862000 	str	r2, [r6]
        356eb8:	e5920000 	ldr	r0, [r2]
        356ebc:	e5951000 	ldr	r1, [r5]
        356ec0:	e2877001 	add	r7, r7, #1	; 0x1
        356ec4:	e1570008 	cmp	r7, r8
        356ec8:	e5810000 	str	r0, [r1]
        356ecc:	baffffe8 	blt	356e74 <TObjectWriter::Scan(void)+0x314>
        356ed0:	ea000123 	b	357364 <TObjectWriter::Scan(void)+0x804>
        356ed4:	00681f10 	rsbeq	r1, r8, r0, lsl pc
        356ed8:	e2000003 	and	r0, r0, #3	; 0x3
        356edc:	e3300002 	teq	r0, #2	; 0x2
        356ee0:	e1a00005 	mov	r0, r5
        356ee4:	1a0000a4 	bne	35717c <TObjectWriter::Scan(void)+0x61c>
        356ee8:	e5900000 	ldr	r0, [r0]
        356eec:	e5900000 	ldr	r0, [r0]
        356ef0:	eb61b8ff 	bl	1bc52f4 <$ObjectPtr(long)>
        356ef4:	e5b0100c 	ldr	r1, [r0, #12]!
        356ef8:	e59f0098 	ldr	r0, [pc, #98]	; 356f98 <TObjectWriter::Scan(void)+0x438>
        356efc:	e1310000 	teq	r1, r0
        356f00:	1a000098 	bne	357168 <TObjectWriter::Scan(void)+0x608>
        356f04:	e5950000 	ldr	r0, [r5]
        356f08:	e5900000 	ldr	r0, [r0]
        356f0c:	eb61b8f8 	bl	1bc52f4 <$ObjectPtr(long)>
        356f10:	e2800010 	add	r0, r0, #16	; 0x10
        356f14:	e1a09000 	mov	r9, r0
        356f18:	eb5bb8f7 	bl	1a452fc <LBData::$GetStore( const(void))>
        356f1c:	e1a08000 	mov	r8, r0
        356f20:	e3a0100c 	mov	r1, #12	; 0xc
        356f24:	e40d100c 	str	r1, [sp], -#12
        356f28:	e5991004 	ldr	r1, [r9, #4]
        356f2c:	e590007c 	ldr	r0, [r0, #124]
        356f30:	e28d2008 	add	r2, sp, #8	; 0x8
        356f34:	eb5ee640 	bl	1b1083c <$LOCompanderNameStrLen(TStore *, unsigned long, long *)>
        356f38:	e5991004 	ldr	r1, [r9, #4]
        356f3c:	e28d2004 	add	r2, sp, #4	; 0x4
        356f40:	e598007c 	ldr	r0, [r8, #124]
        356f44:	eb5ee63f 	bl	1b10848 <$LOCompanderParameterSize(TStore *, unsigned long, long *)>
        356f48:	e5d42024 	ldrb	r2, [r4, #36]	; fField36
        356f4c:	e5991004 	ldr	r1, [r9, #4]
        356f50:	e598007c 	ldr	r0, [r8, #124]
        356f54:	eb5ed19d 	bl	1b0b5d0 <$LOSizeOfStream(TStore *, unsigned long, unsigned char)>
        356f58:	e3a07000 	mov	r7, #0	; 0x0
        356f5c:	e58d0000 	str	r0, [sp]
        356f60:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        356f64:	e59f1030 	ldr	r1, [pc, #30]	; 356f9c <TObjectWriter::Scan(void)+0x43c>
        356f68:	e3300000 	teq	r0, #0	; 0x0
        356f6c:	e58d1010 	str	r1, [sp, #16]
        356f70:	0a000010 	beq	356fb8 <TObjectWriter::Scan(void)+0x458>
        356f74:	e2800001 	add	r0, r0, #1	; 0x1
        356f78:	eb61fefa 	bl	1bd6b68 <$malloc>
        356f7c:	e1b07000 	movs	r7, r0
        356f80:	0a000006 	beq	356fa0 <TObjectWriter::Scan(void)+0x440>
        356f84:	e5991004 	ldr	r1, [r9, #4]
        356f88:	e1a02007 	mov	r2, r7
        356f8c:	e598007c 	ldr	r0, [r8, #124]
        356f90:	eb5ee62a 	bl	1b10840 <$LOCompanderName(TStore *, unsigned long, char *)>
        356f94:	ea000007 	b	356fb8 <TObjectWriter::Scan(void)+0x458>
        356f98:	0c1010a0 	ldceq	0, cr1, [r0], -#640
        356f9c:	00371318 	eoreqs	r1, r7, r8, lsl r3
        356fa0:	e59d0010 	ldr	r0, [sp, #16]
        356fa4:	e5900000 	ldr	r0, [r0]
        356fa8:	e3a02000 	mov	r2, #0	; 0x0
        356fac:	e3a010e9 	mov	r1, #233	; 0xe9
        356fb0:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        356fb4:	eb623078 	bl	1be319c <$Throw>
        356fb8:	e3a0a000 	mov	sl, #0	; 0x0
        356fbc:	e59d0004 	ldr	r0, [sp, #4]
        356fc0:	e3300000 	teq	r0, #0	; 0x0
        356fc4:	0a000010 	beq	35700c <TObjectWriter::Scan(void)+0x4ac>
        356fc8:	eb61fee6 	bl	1bd6b68 <$malloc>
        356fcc:	e1b0a000 	movs	sl, r0
        356fd0:	0a000004 	beq	356fe8 <TObjectWriter::Scan(void)+0x488>
        356fd4:	e5991004 	ldr	r1, [r9, #4]
        356fd8:	e1a0200a 	mov	r2, sl
        356fdc:	e598007c 	ldr	r0, [r8, #124]
        356fe0:	eb5ed171 	bl	1b0b5ac <$LOCompanderParameters(TStore *, unsigned long, void *)>
        356fe4:	ea000008 	b	35700c <TObjectWriter::Scan(void)+0x4ac>
        356fe8:	e3370000 	teq	r7, #0	; 0x0
        356fec:	11a00007 	movne	r0, r7
        356ff0:	1b61ee58 	blne	1bd2958 <$free>
        356ff4:	e59d0010 	ldr	r0, [sp, #16]
        356ff8:	e5900000 	ldr	r0, [r0]
        356ffc:	e3a02000 	mov	r2, #0	; 0x0
        357000:	e3a010e9 	mov	r1, #233	; 0xe9
        357004:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        357008:	eb623063 	bl	1be319c <$Throw>
        35700c:	e3a00000 	mov	r0, #0	; 0x0
        357010:	e52d006c 	str	r0, [sp, -#108]!
        357014:	e28d0008 	add	r0, sp, #8	; 0x8
        357018:	eb616e55 	bl	1bb2974 <$setjmp>
        35701c:	e3300000 	teq	r0, #0	; 0x0
        357020:	1a000047 	bne	357144 <TObjectWriter::Scan(void)+0x5e4>
        357024:	e1a0000d 	mov	r0, sp
        357028:	eb622413 	bl	1be007c <$AddExceptionHandler>
        35702c:	e5940018 	ldr	r0, [r4, #24]	; fField24
        357030:	e59d1078 	ldr	r1, [sp, #120]
        357034:	eb62389c 	bl	1be52ac <CPipe::$__ls(unsigned char)>
        357038:	e5951000 	ldr	r1, [r5]
        35703c:	e5911000 	ldr	r1, [r1]
        357040:	e5962000 	ldr	r2, [r6]
        357044:	e4821004 	str	r1, [r2], #4
        357048:	e5862000 	str	r2, [r6]
        35704c:	e52d5004 	str	r5, [sp, -#4]!
        357050:	e1a00005 	mov	r0, r5
        357054:	eb61ac43 	bl	1bc2168 <$ClassOf(RefVar const &)>
        357058:	e59d1000 	ldr	r1, [sp]
        35705c:	e5911000 	ldr	r1, [r1]
        357060:	e5810000 	str	r0, [r1]
        357064:	e28dd004 	add	sp, sp, #4	; 0x4
        357068:	e1a00004 	mov	r0, r4
        35706c:	eb5bb050 	bl	1a431b4 <TObjectWriter::$Scan(void)>
        357070:	e5960000 	ldr	r0, [r6]
        357074:	e2400004 	sub	r0, r0, #4	; 0x4
        357078:	e5860000 	str	r0, [r6]
        35707c:	e5900000 	ldr	r0, [r0]
        357080:	e5951000 	ldr	r1, [r5]
        357084:	e5810000 	str	r0, [r1]
        357088:	e5d41024 	ldrb	r1, [r4, #36]	; fField36
        35708c:	e5940018 	ldr	r0, [r4, #24]	; fField24
        357090:	eb623881 	bl	1be529c <CPipe::$__ls(char)>
        357094:	e5940018 	ldr	r0, [r4, #24]	; fField24
        357098:	e59d106c 	ldr	r1, [sp, #108]
        35709c:	eb62387f 	bl	1be52a0 <CPipe::$__ls(long)>
        3570a0:	e5940018 	ldr	r0, [r4, #24]	; fField24
        3570a4:	e59d1074 	ldr	r1, [sp, #116]
        3570a8:	eb62387c 	bl	1be52a0 <CPipe::$__ls(long)>
        3570ac:	e5940018 	ldr	r0, [r4, #24]	; fField24
        3570b0:	e59d1070 	ldr	r1, [sp, #112]
        3570b4:	eb623879 	bl	1be52a0 <CPipe::$__ls(long)>
        3570b8:	e3a01000 	mov	r1, #0	; 0x0
        3570bc:	e5940018 	ldr	r0, [r4, #24]	; fField24
        3570c0:	eb623876 	bl	1be52a0 <CPipe::$__ls(long)>
        3570c4:	e3370000 	teq	r7, #0	; 0x0
        3570c8:	0a000007 	beq	3570ec <TObjectWriter::Scan(void)+0x58c>
        3570cc:	e594c018 	ldr	ip, [r4, #24]	; fField24
        3570d0:	e1a01007 	mov	r1, r7
        3570d4:	e1a0000c 	mov	r0, ip
        3570d8:	e3a03000 	mov	r3, #0	; 0x0
        3570dc:	e59d2074 	ldr	r2, [sp, #116]
        3570e0:	e59cc000 	ldr	ip, [ip]
        3570e4:	e1a0e00f 	mov	lr, pc
        3570e8:	e28cf018 	add	pc, ip, #24	; 0x18
        3570ec:	e33a0000 	teq	sl, #0	; 0x0
        3570f0:	0a000007 	beq	357114 <TObjectWriter::Scan(void)+0x5b4>
        3570f4:	e594c018 	ldr	ip, [r4, #24]	; fField24
        3570f8:	e1a0100a 	mov	r1, sl
        3570fc:	e1a0000c 	mov	r0, ip
        357100:	e3a03000 	mov	r3, #0	; 0x0
        357104:	e59d2070 	ldr	r2, [sp, #112]
        357108:	e59cc000 	ldr	ip, [ip]
        35710c:	e1a0e00f 	mov	lr, pc
        357110:	e28cf018 	add	pc, ip, #24	; 0x18
        357114:	e3a03000 	mov	r3, #0	; 0x0
        357118:	e92d0008 	stmdb	sp!, {r3}
        35711c:	e5d43024 	ldrb	r3, [r4, #36]	; fField36
        357120:	e5b92004 	ldr	r2, [r9, #4]!
        357124:	e5b8107c 	ldr	r1, [r8, #124]!
        357128:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        35712c:	eb5ed128 	bl	1b0b5d4 <$LOWrite(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)>
        357130:	e28dd004 	add	sp, sp, #4	; 0x4
        357134:	e1a0000d 	mov	r0, sp
        357138:	eb6227de 	bl	1be10b8 <$ExitHandler>
        35713c:	e28dd078 	add	sp, sp, #120	; 0x78
        357140:	ea000087 	b	357364 <TObjectWriter::Scan(void)+0x804>
        357144:	e3370000 	teq	r7, #0	; 0x0
        357148:	11a00007 	movne	r0, r7
        35714c:	1b61ee01 	blne	1bd2958 <$free>
        357150:	e33a0000 	teq	sl, #0	; 0x0
        357154:	11a0000a 	movne	r0, sl
        357158:	1b61edfe 	blne	1bd2958 <$free>
        35715c:	e1a0000d 	mov	r0, sp
        357160:	eb622bfb 	bl	1be2154 <$NextHandler>
        357164:	eafffff6 	b	357144 <TObjectWriter::Scan(void)+0x5e4>
        357168:	e3a01000 	mov	r1, #0	; 0x0
        35716c:	e5940018 	ldr	r0, [r4, #24]	; fField24
        357170:	eb62384d 	bl	1be52ac <CPipe::$__ls(unsigned char)>
        357174:	e3a01052 	mov	r1, #82	; 0x52
        357178:	ea000077 	b	35735c <TObjectWriter::Scan(void)+0x7fc>
        35717c:	eb61abf9 	bl	1bc2168 <$ClassOf(RefVar const &)>
        357180:	eb61abf1 	bl	1bc214c <$AllocateRefHandle(long)>
        357184:	e1a08000 	mov	r8, r0
        357188:	e5950000 	ldr	r0, [r5]
        35718c:	e5900000 	ldr	r0, [r0]
        357190:	eb61b843 	bl	1bc52a4 <$IsSymbol(long)>
        357194:	e3300000 	teq	r0, #0	; 0x0
        357198:	0a000011 	beq	3571e4 <TObjectWriter::Scan(void)+0x684>
        35719c:	e3a01007 	mov	r1, #7	; 0x7
        3571a0:	e5940018 	ldr	r0, [r4, #24]	; fField24
        3571a4:	eb623840 	bl	1be52ac <CPipe::$__ls(unsigned char)>
        3571a8:	e5950000 	ldr	r0, [r5]
        3571ac:	e5900000 	ldr	r0, [r0]
        3571b0:	eb61c4a8 	bl	1bc8458 <$SymbolName(long)>
        3571b4:	eb617a3d 	bl	1bb5ab0 <$strlen>
        3571b8:	e1a06000 	mov	r6, r0
        3571bc:	e1a01006 	mov	r1, r6
        3571c0:	e5940018 	ldr	r0, [r4, #24]	; fField24
        3571c4:	eb5ba7bd 	bl	1a410c0 <$LongToPipe(CPipe &, long)>
        3571c8:	e5944018 	ldr	r4, [r4, #24]	; fField24
        3571cc:	e5950000 	ldr	r0, [r5]
        3571d0:	e5900000 	ldr	r0, [r0]
        3571d4:	eb61c49f 	bl	1bc8458 <$SymbolName(long)>
        3571d8:	e1a01000 	mov	r1, r0
        3571dc:	e1a02006 	mov	r2, r6
        3571e0:	ea00002d 	b	35729c <TObjectWriter::Scan(void)+0x73c>
        3571e4:	e5980000 	ldr	r0, [r8]
        3571e8:	e59f10cc 	ldr	r1, [pc, #cc]	; 3572bc <TObjectWriter::Scan(void)+0x75c>
        3571ec:	e5911000 	ldr	r1, [r1]
        3571f0:	e5911000 	ldr	r1, [r1]
        3571f4:	eb61b40d 	bl	1bc4230 <$EQRef__FlT1>
        3571f8:	e3300000 	teq	r0, #0	; 0x0
        3571fc:	03a07003 	moveq	r7, #3	; 0x3
        357200:	13a07008 	movne	r7, #8	; 0x8
        357204:	e1a01007 	mov	r1, r7
        357208:	e5940018 	ldr	r0, [r4, #24]	; fField24
        35720c:	eb623826 	bl	1be52ac <CPipe::$__ls(unsigned char)>
        357210:	e5950000 	ldr	r0, [r5]
        357214:	e5900000 	ldr	r0, [r0]
        357218:	eb61b823 	bl	1bc52ac <$Length(long)>
        35721c:	e1a09000 	mov	r9, r0
        357220:	e1a01009 	mov	r1, r9
        357224:	e5940018 	ldr	r0, [r4, #24]	; fField24
        357228:	eb5ba7a4 	bl	1a410c0 <$LongToPipe(CPipe &, long)>
        35722c:	e3370003 	teq	r7, #3	; 0x3
        357230:	1a000013 	bne	357284 <TObjectWriter::Scan(void)+0x724>
        357234:	e5951000 	ldr	r1, [r5]
        357238:	e5911000 	ldr	r1, [r1]
        35723c:	e5962000 	ldr	r2, [r6]
        357240:	e4821004 	str	r1, [r2], #4
        357244:	e1a07005 	mov	r7, r5
        357248:	e5862000 	str	r2, [r6]
        35724c:	e5950000 	ldr	r0, [r5]
        357250:	e5900000 	ldr	r0, [r0]
        357254:	eb61b826 	bl	1bc52f4 <$ObjectPtr(long)>
        357258:	e5900008 	ldr	r0, [r0, #8]	; fField8
        35725c:	e5971000 	ldr	r1, [r7]
        357260:	e5810000 	str	r0, [r1]
        357264:	e1a00004 	mov	r0, r4
        357268:	eb5bafd1 	bl	1a431b4 <TObjectWriter::$Scan(void)>
        35726c:	e5961000 	ldr	r1, [r6]
        357270:	e2411004 	sub	r1, r1, #4	; 0x4
        357274:	e5861000 	str	r1, [r6]
        357278:	e5911000 	ldr	r1, [r1]
        35727c:	e5950000 	ldr	r0, [r5]
        357280:	e5801000 	str	r1, [r0]
        357284:	e5944018 	ldr	r4, [r4, #24]	; fField24
        357288:	e5950000 	ldr	r0, [r5]
        35728c:	e5900000 	ldr	r0, [r0]
        357290:	eb61abb1 	bl	1bc215c <$BinaryData(long)>
        357294:	e1a01000 	mov	r1, r0
        357298:	e1a02009 	mov	r2, r9
        35729c:	e1a00004 	mov	r0, r4
        3572a0:	e3a03000 	mov	r3, #0	; 0x0
        3572a4:	e594c000 	ldr	ip, [r4]
        3572a8:	e1a0e00f 	mov	lr, pc
        3572ac:	e28cf018 	add	pc, ip, #24	; 0x18
        3572b0:	e1a00008 	mov	r0, r8
        3572b4:	eb61afc0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3572b8:	ea000029 	b	357364 <TObjectWriter::Scan(void)+0x804>
        3572bc:	006848d0 	ldreqd	r4, [r8], -#128
        3572c0:	e3300002 	teq	r0, #2	; 0x2
        3572c4:	03a0100a 	moveq	r1, #10	; 0xa
        3572c8:	05b40018 	ldreq	r0, [r4, #24]!	; fField24
        3572cc:	0a00001b 	beq	357340 <TObjectWriter::Scan(void)+0x7e0>
        3572d0:	e2001003 	and	r1, r0, #3	; 0x3
        3572d4:	e3310002 	teq	r1, #2	; 0x2
        3572d8:	03a02003 	moveq	r2, #3	; 0x3
        3572dc:	00022140 	andeq	r2, r2, r0, asr #2
        3572e0:	03320001 	teqeq	r2, #1	; 0x1
        3572e4:	1a000017 	bne	357348 <TObjectWriter::Scan(void)+0x7e8>
        3572e8:	e3310002 	teq	r1, #2	; 0x2
        3572ec:	03320001 	teqeq	r2, #1	; 0x1
        3572f0:	01a00140 	moveq	r0, r0, asr #2
        3572f4:	01a00140 	moveq	r0, r0, asr #2
        3572f8:	01a00800 	moveq	r0, r0, lsl #16
        3572fc:	01a00820 	moveq	r0, r0, lsr #16
        357300:	0a000000 	beq	357308 <TObjectWriter::Scan(void)+0x7a8>
        357304:	eb61ab83 	bl	1bc2118 <$_RCHARError(long)>
        357308:	e1a05800 	mov	r5, r0, lsl #16
        35730c:	e1a05825 	mov	r5, r5, lsr #16
        357310:	e35500ff 	cmp	r5, #255	; 0xff
        357314:	d3a01001 	movle	r1, #1	; 0x1
        357318:	da000004 	ble	357330 <TObjectWriter::Scan(void)+0x7d0>
        35731c:	e3a01002 	mov	r1, #2	; 0x2
        357320:	e5940018 	ldr	r0, [r4, #24]	; fField24
        357324:	eb6237e0 	bl	1be52ac <CPipe::$__ls(unsigned char)>
        357328:	e1a00445 	mov	r0, r5, asr #8
        35732c:	e20010ff 	and	r1, r0, #255	; 0xff
        357330:	e5940018 	ldr	r0, [r4, #24]	; fField24
        357334:	eb6237dc 	bl	1be52ac <CPipe::$__ls(unsigned char)>
        357338:	e20510ff 	and	r1, r5, #255	; 0xff
        35733c:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        357340:	eb6237d9 	bl	1be52ac <CPipe::$__ls(unsigned char)>
        357344:	ea000006 	b	357364 <TObjectWriter::Scan(void)+0x804>
        357348:	e3a01000 	mov	r1, #0	; 0x0
        35734c:	e5940018 	ldr	r0, [r4, #24]	; fField24
        357350:	eb6237d5 	bl	1be52ac <CPipe::$__ls(unsigned char)>
        357354:	e5950000 	ldr	r0, [r5]
        357358:	e5901000 	ldr	r1, [r0]
        35735c:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        357360:	eb5ba756 	bl	1a410c0 <$LongToPipe(CPipe &, long)>
        357364:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

