#include "include/TDTMFCodec.h"

/**
 * Symbol: Sizeof__10TDTMFCodecSFv
 * Address: 00088128
 */
void TDTMFCodec::Sizeof() {
    /*
         88128:	e3a00d0b 	mov	r0, #704	; 0x2c0
         8812c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDTMFCodec::New(void)
 * Address: 00088130
 */
TDTMFCodec::New(void) {
    /*
         88130:	e3a01000 	mov	r1, #0	; 0x0
         88134:	e5801294 	str	r1, [r0, #660]	; fField660
         88138:	e58012a0 	str	r1, [r0, #672]	; fField672
         8813c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDTMFCodec::Delete(void)
 * Address: 00088310
 */
TDTMFCodec::Delete(void) {
    /*
         88310:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDTMFCodec::Init(CodecBlock *)
 * Address: 00088314
 */
TDTMFCodec::Init(CodecBlock *) {
    /*
         88314:	e3a00000 	mov	r0, #0	; 0x0
         88318:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDTMFCodec::Reset(CodecBlock *)
 * Address: 0008831c
 */
TDTMFCodec::Reset(CodecBlock *) {
    /*
         8831c:	e5912004 	ldr	r2, [r1, #4]
         88320:	e5802294 	str	r2, [r0, #660]	; fField660
         88324:	e5912010 	ldr	r2, [r1, #16]	; fField16
         88328:	e58022a8 	str	r2, [r0, #680]	; fField680
         8832c:	e5912014 	ldr	r2, [r1, #20]
         88330:	e58022ac 	str	r2, [r0, #684]	; fField684
         88334:	e591200c 	ldr	r2, [r1, #12]
         88338:	e58022b0 	str	r2, [r0, #688]	; fField688
         8833c:	e5911008 	ldr	r1, [r1, #8]
         88340:	e580129c 	str	r1, [r0, #668]	; fField668
         88344:	e3a01000 	mov	r1, #0	; 0x0
         88348:	e58012a0 	str	r1, [r0, #672]	; fField672
         8834c:	e5801138 	str	r1, [r0, #312]	; fField312
         88350:	e580113c 	str	r1, [r0, #316]	; fField316
         88354:	e5801134 	str	r1, [r0, #308]	; fField308
         88358:	e5801140 	str	r1, [r0, #320]	; fField320
         8835c:	e3a02000 	mov	r2, #0	; 0x0
         88360:	e58012a4 	str	r1, [r0, #676]	; fField676
         88364:	e0803102 	add	r3, r0, r2, lsl #2
         88368:	e5831204 	str	r1, [r3, #516]
         8836c:	e5831234 	str	r1, [r3, #564]
         88370:	e2822001 	add	r2, r2, #1	; 0x1
         88374:	e352000c 	cmp	r2, #12	; 0xc
         88378:	e5a31264 	str	r1, [r3, #612]!
         8837c:	3afffff8 	bcc	88364 <TDTMFCodec::Reset(CodecBlock *)+0x48>
         88380:	e1a00001 	mov	r0, r1
         88384:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)
 * Address: 00088388
 */
TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *) {
    /*
         88388:	e1a0c00d 	mov	ip, sp
         8838c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         88390:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         88394:	e24cb014 	sub	fp, ip, #20	; 0x14
         88398:	e1a04000 	mov	r4, r0
         8839c:	e3a00000 	mov	r0, #0	; 0x0
         883a0:	e52d0004 	str	r0, [sp, -#4]!
         883a4:	e3a00fb2 	mov	r0, #712	; 0x2c8
         883a8:	e2400b1e 	sub	r0, r0, #30720	; 0x7800
         883ac:	e5941294 	ldr	r1, [r4, #660]	; fField660
         883b0:	e3310000 	teq	r1, #0	; 0x0
         883b4:	0a0005a5 	beq	89a50 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x16c8>
         883b8:	e24ddf4b 	sub	sp, sp, #300	; 0x12c
         883bc:	e5911000 	ldr	r1, [r1]
         883c0:	e1a01821 	mov	r1, r1, lsr #16
         883c4:	e3310001 	teq	r1, #1	; 0x1
         883c8:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         883cc:	e3a00801 	mov	r0, #65536	; 0x10000
         883d0:	e59412ac 	ldr	r1, [r4, #684]	; fField684
         883d4:	eb6d6339 	bl	1be10c0 <$FixedDivide>
         883d8:	e5840010 	str	r0, [r4, #16]	; fField16
         883dc:	e3a017fa 	mov	r1, #65536000	; 0x3e80000
         883e0:	e59402ac 	ldr	r0, [r4, #684]	; fField684
         883e4:	eb6d6335 	bl	1be10c0 <$FixedDivide>
         883e8:	e2800902 	add	r0, r0, #32768	; 0x8000
         883ec:	e1a00840 	mov	r0, r0, asr #16
         883f0:	e1a09800 	mov	r9, r0, lsl #16
         883f4:	e1a09849 	mov	r9, r9, asr #16
         883f8:	e5940294 	ldr	r0, [r4, #660]	; fField660
         883fc:	e5901008 	ldr	r1, [r0, #8]
         88400:	e1a01821 	mov	r1, r1, lsr #16
         88404:	e351000c 	cmp	r1, #12	; 0xc
         88408:	c3a0100c 	movgt	r1, #12	; 0xc
         8840c:	e1a07001 	mov	r7, r1
         88410:	e59f1478 	ldr	r1, [pc, #478]	; 88890 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x508>
         88414:	e5911000 	ldr	r1, [r1]
         88418:	e3310003 	teq	r1, #3	; 0x3
         8841c:	159f6470 	ldrne	r6, [pc, #470]	; 88894 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x50c>
         88420:	059f6470 	ldreq	r6, [pc, #470]	; 88898 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x510>
         88424:	e5900006 	ldr	r0, [r0, #6]
         88428:	e1a00820 	mov	r0, r0, lsr #16
         8842c:	e3a08000 	mov	r8, #0	; 0x0
         88430:	e3570000 	cmp	r7, #0	; 0x0
         88434:	e5840138 	str	r0, [r4, #312]	; fField312
         88438:	9a000083 	bls	8864c <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x2c4>
         8843c:	e0881108 	add	r1, r8, r8, lsl #2
         88440:	e1a01081 	mov	r1, r1, lsl #1
         88444:	e5940294 	ldr	r0, [r4, #660]	; fField660
         88448:	e0800081 	add	r0, r0, r1, lsl #1
         8844c:	e5900010 	ldr	r0, [r0, #16]	; fField16
         88450:	e1a00820 	mov	r0, r0, lsr #16
         88454:	e0000099 	mul	r0, r9, r0
         88458:	e084e108 	add	lr, r4, r8, lsl #2
         8845c:	e1a0500e 	mov	r5, lr
         88460:	e58e0014 	str	r0, [lr, #20]
         88464:	e5942294 	ldr	r2, [r4, #660]	; fField660
         88468:	e0822081 	add	r2, r2, r1, lsl #1
         8846c:	e5922012 	ldr	r2, [r2, #18]
         88470:	e1a02822 	mov	r2, r2, lsr #16
         88474:	e0200299 	mla	r0, r9, r2, r0
         88478:	e58e0044 	str	r0, [lr, #68]
         8847c:	e5942294 	ldr	r2, [r4, #660]	; fField660
         88480:	e0822081 	add	r2, r2, r1, lsl #1
         88484:	e5922014 	ldr	r2, [r2, #20]
         88488:	e1a02822 	mov	r2, r2, lsr #16
         8848c:	e0200299 	mla	r0, r9, r2, r0
         88490:	e58e0074 	str	r0, [lr, #116]
         88494:	e5942294 	ldr	r2, [r4, #660]	; fField660
         88498:	e0822081 	add	r2, r2, r1, lsl #1
         8849c:	e5922016 	ldr	r2, [r2, #22]
         884a0:	e1a02822 	mov	r2, r2, lsr #16
         884a4:	e0200299 	mla	r0, r9, r2, r0
         884a8:	e58e00a4 	str	r0, [lr, #164]
         884ac:	e5942294 	ldr	r2, [r4, #660]	; fField660
         884b0:	e0822081 	add	r2, r2, r1, lsl #1
         884b4:	e5922018 	ldr	r2, [r2, #24]
         884b8:	e1a02822 	mov	r2, r2, lsr #16
         884bc:	e0200299 	mla	r0, r9, r2, r0
         884c0:	e58e00d4 	str	r0, [lr, #212]
         884c4:	e5942294 	ldr	r2, [r4, #660]	; fField660
         884c8:	e0822081 	add	r2, r2, r1, lsl #1
         884cc:	e592201c 	ldr	r2, [r2, #28]
         884d0:	e1a02822 	mov	r2, r2, lsr #16
         884d4:	e0200299 	mla	r0, r9, r2, r0
         884d8:	e58e0104 	str	r0, [lr, #260]
         884dc:	e5940294 	ldr	r0, [r4, #660]	; fField660
         884e0:	e0802081 	add	r2, r0, r1, lsl #1
         884e4:	e592000a 	ldr	r0, [r2, #10]
         884e8:	e1a00820 	mov	r0, r0, lsr #16
         884ec:	e592200c 	ldr	r2, [r2, #12]
         884f0:	e1a02822 	mov	r2, r2, lsr #16
         884f4:	e1820800 	orr	r0, r2, r0, lsl #16
         884f8:	e58e0144 	str	r0, [lr, #324]
         884fc:	e5942294 	ldr	r2, [r4, #660]	; fField660
         88500:	e0822081 	add	r2, r2, r1, lsl #1
         88504:	e592200e 	ldr	r2, [r2, #14]
         88508:	e1a02822 	mov	r2, r2, lsr #16
         8850c:	e1a03802 	mov	r3, r2, lsl #16
         88510:	e58e3174 	str	r3, [lr, #372]
         88514:	e5942294 	ldr	r2, [r4, #660]	; fField660
         88518:	e0822081 	add	r2, r2, r1, lsl #1
         8851c:	e592200e 	ldr	r2, [r2, #14]
         88520:	e1a02822 	mov	r2, r2, lsr #16
         88524:	e1a02802 	mov	r2, r2, lsl #16
         88528:	e5ae21a4 	str	r2, [lr, #420]!
         8852c:	e594e294 	ldr	lr, [r4, #660]	; fField660
         88530:	e08e1081 	add	r1, lr, r1, lsl #1
         88534:	e591101a 	ldr	r1, [r1, #26]
         88538:	e1a01821 	mov	r1, r1, lsr #16
         8853c:	e1530801 	cmp	r3, r1, lsl #16
         88540:	d1a0a801 	movle	sl, r1, lsl #16
         88544:	c1a0a003 	movgt	sl, r3
         88548:	d1a02801 	movle	r2, r1, lsl #16
         8854c:	e58d2000 	str	r2, [sp]
         88550:	e3a0175a 	mov	r1, #23592960	; 0x1680000
         88554:	e59422ac 	ldr	r2, [r4, #684]	; fField684
         88558:	eb6d62da 	bl	1be10c8 <$FixedMultiplyDivide>
         8855c:	e58501d4 	str	r0, [r5, #468]
         88560:	e5950104 	ldr	r0, [r5, #260]
         88564:	e5941134 	ldr	r1, [r4, #308]	; fField308
         88568:	e1500001 	cmp	r0, r1
         8856c:	91a00001 	movls	r0, r1
         88570:	e5840134 	str	r0, [r4, #308]	; fField308
         88574:	e5950044 	ldr	r0, [r5, #68]
         88578:	e5951014 	ldr	r1, [r5, #20]
         8857c:	e0400001 	sub	r0, r0, r1
         88580:	e1a01800 	mov	r1, r0, lsl #16
         88584:	e1a0000a 	mov	r0, sl
         88588:	eb6d62cc 	bl	1be10c0 <$FixedDivide>
         8858c:	e28d10f4 	add	r1, sp, #244	; 0xf4
         88590:	e7810108 	str	r0, [r1, r8, lsl #2]
         88594:	e5950014 	ldr	r0, [r5, #20]
         88598:	e5951044 	ldr	r1, [r5, #68]
         8859c:	e0410000 	sub	r0, r1, r0
         885a0:	e1a01800 	mov	r1, r0, lsl #16
         885a4:	e59d0000 	ldr	r0, [sp]
         885a8:	eb6d62c4 	bl	1be10c0 <$FixedDivide>
         885ac:	e28d1064 	add	r1, sp, #100	; 0x64
         885b0:	e7810108 	str	r0, [r1, r8, lsl #2]
         885b4:	e5950044 	ldr	r0, [r5, #68]
         885b8:	e5951074 	ldr	r1, [r5, #116]
         885bc:	e0410000 	sub	r0, r1, r0
         885c0:	e1a01800 	mov	r1, r0, lsl #16
         885c4:	e5950174 	ldr	r0, [r5, #372]
         885c8:	e04a0000 	sub	r0, sl, r0
         885cc:	eb6d62bb 	bl	1be10c0 <$FixedDivide>
         885d0:	e28d10c4 	add	r1, sp, #196	; 0xc4
         885d4:	e7810108 	str	r0, [r1, r8, lsl #2]
         885d8:	e5950044 	ldr	r0, [r5, #68]
         885dc:	e5951074 	ldr	r1, [r5, #116]
         885e0:	e0410000 	sub	r0, r1, r0
         885e4:	e1a01800 	mov	r1, r0, lsl #16
         885e8:	e59501a4 	ldr	r0, [r5, #420]
         885ec:	e59d2000 	ldr	r2, [sp]
         885f0:	e0420000 	sub	r0, r2, r0
         885f4:	eb6d62b1 	bl	1be10c0 <$FixedDivide>
         885f8:	e28d1034 	add	r1, sp, #52	; 0x34
         885fc:	e7810108 	str	r0, [r1, r8, lsl #2]
         88600:	e59500d4 	ldr	r0, [r5, #212]
         88604:	e59510a4 	ldr	r1, [r5, #164]
         88608:	e0400001 	sub	r0, r0, r1
         8860c:	e1a01800 	mov	r1, r0, lsl #16
         88610:	e5950174 	ldr	r0, [r5, #372]
         88614:	eb6d62a9 	bl	1be10c0 <$FixedDivide>
         88618:	e28d1094 	add	r1, sp, #148	; 0x94
         8861c:	e7810108 	str	r0, [r1, r8, lsl #2]
         88620:	e59500a4 	ldr	r0, [r5, #164]
         88624:	e59510d4 	ldr	r1, [r5, #212]
         88628:	e0410000 	sub	r0, r1, r0
         8862c:	e1a01800 	mov	r1, r0, lsl #16
         88630:	e5b501a4 	ldr	r0, [r5, #420]!
         88634:	eb6d62a1 	bl	1be10c0 <$FixedDivide>
         88638:	e28d1004 	add	r1, sp, #4	; 0x4
         8863c:	e7810108 	str	r0, [r1, r8, lsl #2]
         88640:	e2888001 	add	r8, r8, #1	; 0x1
         88644:	e1580007 	cmp	r8, r7
         88648:	3affff7b 	bcc	8843c <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xb4>
         8864c:	e1a00007 	mov	r0, r7
         88650:	e3a02000 	mov	r2, #0	; 0x0
         88654:	e357000c 	cmp	r7, #12	; 0xc
         88658:	2a000019 	bcs	886c4 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x33c>
         8865c:	e0841100 	add	r1, r4, r0, lsl #2
         88660:	e5812014 	str	r2, [r1, #20]
         88664:	e5812044 	str	r2, [r1, #68]
         88668:	e5812074 	str	r2, [r1, #116]
         8866c:	e58120a4 	str	r2, [r1, #164]
         88670:	e58120d4 	str	r2, [r1, #212]
         88674:	e5812104 	str	r2, [r1, #260]
         88678:	e5812144 	str	r2, [r1, #324]
         8867c:	e5812174 	str	r2, [r1, #372]
         88680:	e58121a4 	str	r2, [r1, #420]
         88684:	e5a121d4 	str	r2, [r1, #468]!
         88688:	e28d10f4 	add	r1, sp, #244	; 0xf4
         8868c:	e7812100 	str	r2, [r1, r0, lsl #2]
         88690:	e28d1064 	add	r1, sp, #100	; 0x64
         88694:	e7812100 	str	r2, [r1, r0, lsl #2]
         88698:	e28d10c4 	add	r1, sp, #196	; 0xc4
         8869c:	e7812100 	str	r2, [r1, r0, lsl #2]
         886a0:	e28d1034 	add	r1, sp, #52	; 0x34
         886a4:	e7812100 	str	r2, [r1, r0, lsl #2]
         886a8:	e28d1094 	add	r1, sp, #148	; 0x94
         886ac:	e7812100 	str	r2, [r1, r0, lsl #2]
         886b0:	e28d1004 	add	r1, sp, #4	; 0x4
         886b4:	e7812100 	str	r2, [r1, r0, lsl #2]
         886b8:	e2800001 	add	r0, r0, #1	; 0x1
         886bc:	e350000c 	cmp	r0, #12	; 0xc
         886c0:	3affffe5 	bcc	8865c <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x2d4>
         886c4:	e59b200c 	ldr	r2, [fp, #12]
         886c8:	e59ba008 	ldr	sl, [fp, #8]
         886cc:	e5920000 	ldr	r0, [r2]
         886d0:	e1a010a0 	mov	r1, r0, lsr #1
         886d4:	e58d1124 	str	r1, [sp, #292]
         886d8:	e5940294 	ldr	r0, [r4, #660]	; fField660
         886dc:	e5901002 	ldr	r1, [r0, #2]
         886e0:	e1b01821 	movs	r1, r1, lsr #16
         886e4:	e3a00001 	mov	r0, #1	; 0x1
         886e8:	1a00007b 	bne	888dc <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x554>
         886ec:	e3a01000 	mov	r1, #0	; 0x0
         886f0:	e58d1128 	str	r1, [sp, #296]
         886f4:	e59d1124 	ldr	r1, [sp, #292]
         886f8:	e3510000 	cmp	r1, #0	; 0x0
         886fc:	9a0004c1 	bls	89a08 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x1680>
         88700:	e3a01000 	mov	r1, #0	; 0x0
         88704:	e52d1004 	str	r1, [sp, -#4]!
         88708:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         8870c:	e2800001 	add	r0, r0, #1	; 0x1
         88710:	e3a08000 	mov	r8, #0	; 0x0
         88714:	e3570000 	cmp	r7, #0	; 0x0
         88718:	e58402a4 	str	r0, [r4, #676]	; fField676
         8871c:	9a00004e 	bls	8885c <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x4d4>
         88720:	e0845108 	add	r5, r4, r8, lsl #2
         88724:	e1a09005 	mov	r9, r5
         88728:	e5950204 	ldr	r0, [r5, #516]
         8872c:	e1a0e00f 	mov	lr, pc
         88730:	e1a0f006 	mov	pc, r6
         88734:	e5991234 	ldr	r1, [r9, #564]
         88738:	e1a01841 	mov	r1, r1, asr #16
         8873c:	e0000091 	mul	r0, r1, r0
         88740:	e59d1000 	ldr	r1, [sp]
         88744:	e0801001 	add	r1, r0, r1
         88748:	e58d1000 	str	r1, [sp]
         8874c:	e5990204 	ldr	r0, [r9, #516]
         88750:	e59911d4 	ldr	r1, [r9, #468]
         88754:	e0800001 	add	r0, r0, r1
         88758:	e5a90204 	str	r0, [r9, #516]!
         8875c:	e350075a 	cmp	r0, #23592960	; 0x1680000
         88760:	c240075a 	subgt	r0, r0, #23592960	; 0x1680000
         88764:	c5850204 	strgt	r0, [r5, #516]
         88768:	e59412a4 	ldr	r1, [r4, #676]	; fField676
         8876c:	e5950014 	ldr	r0, [r5, #20]
         88770:	e1510000 	cmp	r1, r0
         88774:	93a01000 	movls	r1, #0	; 0x0
         88778:	95851234 	strls	r1, [r5, #564]
         8877c:	e59412a4 	ldr	r1, [r4, #676]	; fField676
         88780:	e1510000 	cmp	r1, r0
         88784:	3a000007 	bcc	887a8 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x420>
         88788:	e5950044 	ldr	r0, [r5, #68]
         8878c:	e1510000 	cmp	r1, r0
         88790:	8a000004 	bhi	887a8 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x420>
         88794:	e28d00f8 	add	r0, sp, #248	; 0xf8
         88798:	e5951234 	ldr	r1, [r5, #564]
         8879c:	e7900108 	ldr	r0, [r0, r8, lsl #2]
         887a0:	e0810000 	add	r0, r1, r0
         887a4:	e5850234 	str	r0, [r5, #564]
         887a8:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         887ac:	e5951044 	ldr	r1, [r5, #68]
         887b0:	e1500001 	cmp	r0, r1
         887b4:	3a000007 	bcc	887d8 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x450>
         887b8:	e5951074 	ldr	r1, [r5, #116]
         887bc:	e1500001 	cmp	r0, r1
         887c0:	8a000004 	bhi	887d8 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x450>
         887c4:	e28d00c8 	add	r0, sp, #200	; 0xc8
         887c8:	e5951234 	ldr	r1, [r5, #564]
         887cc:	e7900108 	ldr	r0, [r0, r8, lsl #2]
         887d0:	e0410000 	sub	r0, r1, r0
         887d4:	e5850234 	str	r0, [r5, #564]
         887d8:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         887dc:	e5951074 	ldr	r1, [r5, #116]
         887e0:	e1500001 	cmp	r0, r1
         887e4:	3a000003 	bcc	887f8 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x470>
         887e8:	e59510a4 	ldr	r1, [r5, #164]
         887ec:	e1500001 	cmp	r0, r1
         887f0:	95950174 	ldrls	r0, [r5, #372]
         887f4:	95850234 	strls	r0, [r5, #564]
         887f8:	e59500d4 	ldr	r0, [r5, #212]
         887fc:	e59520a4 	ldr	r2, [r5, #164]
         88800:	e1320000 	teq	r2, r0
         88804:	0a00000c 	beq	8883c <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x4b4>
         88808:	e59412a4 	ldr	r1, [r4, #676]	; fField676
         8880c:	e1510002 	cmp	r1, r2
         88810:	9a000006 	bls	88830 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x4a8>
         88814:	e1510000 	cmp	r1, r0
         88818:	8a000004 	bhi	88830 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x4a8>
         8881c:	e28d1098 	add	r1, sp, #152	; 0x98
         88820:	e5952234 	ldr	r2, [r5, #564]
         88824:	e7911108 	ldr	r1, [r1, r8, lsl #2]
         88828:	e0421001 	sub	r1, r2, r1
         8882c:	e5851234 	str	r1, [r5, #564]
         88830:	e59412a4 	ldr	r1, [r4, #676]	; fField676
         88834:	e1510000 	cmp	r1, r0
         88838:	8a000002 	bhi	88848 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x4c0>
         8883c:	e5950234 	ldr	r0, [r5, #564]
         88840:	e3500000 	cmp	r0, #0	; 0x0
         88844:	aa000001 	bge	88850 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x4c8>
         88848:	e3a01000 	mov	r1, #0	; 0x0
         8884c:	e5a51234 	str	r1, [r5, #564]!
         88850:	e2888001 	add	r8, r8, #1	; 0x1
         88854:	e1580007 	cmp	r8, r7
         88858:	3affffb0 	bcc	88720 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x398>
         8885c:	e5940134 	ldr	r0, [r4, #308]	; fField308
         88860:	e59412a4 	ldr	r1, [r4, #676]	; fField676
         88864:	e1510000 	cmp	r1, r0
         88868:	9a00000d 	bls	888a4 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x51c>
         8886c:	e594013c 	ldr	r0, [r4, #316]	; fField316
         88870:	e5941138 	ldr	r1, [r4, #312]	; fField312
         88874:	e1300001 	teq	r0, r1
         88878:	0a000007 	beq	8889c <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x514>
         8887c:	e3a01000 	mov	r1, #0	; 0x0
         88880:	e2800001 	add	r0, r0, #1	; 0x1
         88884:	e584013c 	str	r0, [r4, #316]	; fField316
         88888:	e58412a4 	str	r1, [r4, #676]	; fField676
         8888c:	ea000004 	b	888a4 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x51c>
         88890:	0c1008dc 	ldceq	8, cr0, [r0], -#880
         88894:	01b7bde8 	moveqs	fp, r8, ror #27
         88898:	01b7bdec 	moveqs	fp, ip, ror #27
         8889c:	e3a00001 	mov	r0, #1	; 0x1
         888a0:	e5840140 	str	r0, [r4, #320]	; fField320
         888a4:	e59d1000 	ldr	r1, [sp]
         888a8:	e2810902 	add	r0, r1, #32768	; 0x8000
         888ac:	e1a00840 	mov	r0, r0, asr #16
         888b0:	e5ca0001 	strb	r0, [sl, #1]
         888b4:	e1a00440 	mov	r0, r0, asr #8
         888b8:	e4ca0002 	strb	r0, [sl], #2
         888bc:	e28dd004 	add	sp, sp, #4	; 0x4
         888c0:	e59d0128 	ldr	r0, [sp, #296]
         888c4:	e2800001 	add	r0, r0, #1	; 0x1
         888c8:	e58d0128 	str	r0, [sp, #296]
         888cc:	e59d1124 	ldr	r1, [sp, #292]
         888d0:	e1500001 	cmp	r0, r1
         888d4:	3affff89 	bcc	88700 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x378>
         888d8:	ea00044a 	b	89a08 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x1680>
         888dc:	e3310001 	teq	r1, #1	; 0x1
         888e0:	1a0000c4 	bne	88bf8 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x870>
         888e4:	e3a01000 	mov	r1, #0	; 0x0
         888e8:	e58d1128 	str	r1, [sp, #296]
         888ec:	e59d1124 	ldr	r1, [sp, #292]
         888f0:	e3510000 	cmp	r1, #0	; 0x0
         888f4:	9a000443 	bls	89a08 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x1680>
         888f8:	e3a01000 	mov	r1, #0	; 0x0
         888fc:	e52d1004 	str	r1, [sp, -#4]!
         88900:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         88904:	e2800001 	add	r0, r0, #1	; 0x1
         88908:	e3a08000 	mov	r8, #0	; 0x0
         8890c:	e3570000 	cmp	r7, #0	; 0x0
         88910:	e58402a4 	str	r0, [r4, #676]	; fField676
         88914:	9a00009a 	bls	88b84 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x7fc>
         88918:	e0845108 	add	r5, r4, r8, lsl #2
         8891c:	e1a09005 	mov	r9, r5
         88920:	e5950208 	ldr	r0, [r5, #520]
         88924:	e1a0e00f 	mov	lr, pc
         88928:	e1a0f006 	mov	pc, r6
         8892c:	e5991268 	ldr	r1, [r9, #616]
         88930:	e1a01841 	mov	r1, r1, asr #16
         88934:	e0000091 	mul	r0, r1, r0
         88938:	e5991204 	ldr	r1, [r9, #516]
         8893c:	e0800001 	add	r0, r0, r1
         88940:	e1a0e00f 	mov	lr, pc
         88944:	e1a0f006 	mov	pc, r6
         88948:	e5991234 	ldr	r1, [r9, #564]
         8894c:	e1a01841 	mov	r1, r1, asr #16
         88950:	e0000091 	mul	r0, r1, r0
         88954:	e59d1000 	ldr	r1, [sp]
         88958:	e0801001 	add	r1, r0, r1
         8895c:	e58d1000 	str	r1, [sp]
         88960:	e5990204 	ldr	r0, [r9, #516]
         88964:	e59911d4 	ldr	r1, [r9, #468]
         88968:	e0800001 	add	r0, r0, r1
         8896c:	e5a90204 	str	r0, [r9, #516]!
         88970:	e350075a 	cmp	r0, #23592960	; 0x1680000
         88974:	c240075a 	subgt	r0, r0, #23592960	; 0x1680000
         88978:	c5850204 	strgt	r0, [r5, #516]
         8897c:	e5950208 	ldr	r0, [r5, #520]
         88980:	e59511d8 	ldr	r1, [r5, #472]
         88984:	e0800001 	add	r0, r0, r1
         88988:	e5850208 	str	r0, [r5, #520]
         8898c:	e1a01000 	mov	r1, r0
         88990:	e350075a 	cmp	r0, #23592960	; 0x1680000
         88994:	c241075a 	subgt	r0, r1, #23592960	; 0x1680000
         88998:	c5850208 	strgt	r0, [r5, #520]
         8899c:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         889a0:	e5951014 	ldr	r1, [r5, #20]
         889a4:	e1500001 	cmp	r0, r1
         889a8:	93a00000 	movls	r0, #0	; 0x0
         889ac:	95850234 	strls	r0, [r5, #564]
         889b0:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         889b4:	e1500001 	cmp	r0, r1
         889b8:	3a000007 	bcc	889dc <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x654>
         889bc:	e5951044 	ldr	r1, [r5, #68]
         889c0:	e1500001 	cmp	r0, r1
         889c4:	8a000004 	bhi	889dc <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x654>
         889c8:	e28d00f8 	add	r0, sp, #248	; 0xf8
         889cc:	e5951234 	ldr	r1, [r5, #564]
         889d0:	e7900108 	ldr	r0, [r0, r8, lsl #2]
         889d4:	e0810000 	add	r0, r1, r0
         889d8:	e5850234 	str	r0, [r5, #564]
         889dc:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         889e0:	e5951044 	ldr	r1, [r5, #68]
         889e4:	e1500001 	cmp	r0, r1
         889e8:	3a000007 	bcc	88a0c <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x684>
         889ec:	e5951074 	ldr	r1, [r5, #116]
         889f0:	e1500001 	cmp	r0, r1
         889f4:	8a000004 	bhi	88a0c <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x684>
         889f8:	e28d00c8 	add	r0, sp, #200	; 0xc8
         889fc:	e5951234 	ldr	r1, [r5, #564]
         88a00:	e7900108 	ldr	r0, [r0, r8, lsl #2]
         88a04:	e0410000 	sub	r0, r1, r0
         88a08:	e5850234 	str	r0, [r5, #564]
         88a0c:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         88a10:	e5951074 	ldr	r1, [r5, #116]
         88a14:	e1500001 	cmp	r0, r1
         88a18:	3a000003 	bcc	88a2c <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x6a4>
         88a1c:	e59510a4 	ldr	r1, [r5, #164]
         88a20:	e1500001 	cmp	r0, r1
         88a24:	95950174 	ldrls	r0, [r5, #372]
         88a28:	95850234 	strls	r0, [r5, #564]
         88a2c:	e59500d4 	ldr	r0, [r5, #212]
         88a30:	e59510a4 	ldr	r1, [r5, #164]
         88a34:	e1310000 	teq	r1, r0
         88a38:	0a00000d 	beq	88a74 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x6ec>
         88a3c:	e59422a4 	ldr	r2, [r4, #676]	; fField676
         88a40:	e1520001 	cmp	r2, r1
         88a44:	9a000006 	bls	88a64 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x6dc>
         88a48:	e1520000 	cmp	r2, r0
         88a4c:	8a000004 	bhi	88a64 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x6dc>
         88a50:	e28d1098 	add	r1, sp, #152	; 0x98
         88a54:	e5952234 	ldr	r2, [r5, #564]
         88a58:	e7911108 	ldr	r1, [r1, r8, lsl #2]
         88a5c:	e0421001 	sub	r1, r2, r1
         88a60:	e5851234 	str	r1, [r5, #564]
         88a64:	e59412a4 	ldr	r1, [r4, #676]	; fField676
         88a68:	e1510000 	cmp	r1, r0
         88a6c:	83a00000 	movhi	r0, #0	; 0x0
         88a70:	85850234 	strhi	r0, [r5, #564]
         88a74:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         88a78:	e5951018 	ldr	r1, [r5, #24]
         88a7c:	e1500001 	cmp	r0, r1
         88a80:	93a00000 	movls	r0, #0	; 0x0
         88a84:	95850268 	strls	r0, [r5, #616]
         88a88:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         88a8c:	e1500001 	cmp	r0, r1
         88a90:	3a000008 	bcc	88ab8 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x730>
         88a94:	e5951048 	ldr	r1, [r5, #72]
         88a98:	e1500001 	cmp	r0, r1
         88a9c:	8a000005 	bhi	88ab8 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x730>
         88aa0:	e28d0068 	add	r0, sp, #104	; 0x68
         88aa4:	e0800108 	add	r0, r0, r8, lsl #2
         88aa8:	e5951268 	ldr	r1, [r5, #616]
         88aac:	e5900004 	ldr	r0, [r0, #4]
         88ab0:	e0810000 	add	r0, r1, r0
         88ab4:	e5850268 	str	r0, [r5, #616]
         88ab8:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         88abc:	e5951048 	ldr	r1, [r5, #72]
         88ac0:	e1500001 	cmp	r0, r1
         88ac4:	3a000008 	bcc	88aec <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x764>
         88ac8:	e5951078 	ldr	r1, [r5, #120]
         88acc:	e1500001 	cmp	r0, r1
         88ad0:	8a000005 	bhi	88aec <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x764>
         88ad4:	e28d0038 	add	r0, sp, #56	; 0x38
         88ad8:	e0800108 	add	r0, r0, r8, lsl #2
         88adc:	e5951268 	ldr	r1, [r5, #616]
         88ae0:	e5900004 	ldr	r0, [r0, #4]
         88ae4:	e0410000 	sub	r0, r1, r0
         88ae8:	e5850268 	str	r0, [r5, #616]
         88aec:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         88af0:	e5951078 	ldr	r1, [r5, #120]
         88af4:	e1500001 	cmp	r0, r1
         88af8:	3a000003 	bcc	88b0c <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x784>
         88afc:	e59510a8 	ldr	r1, [r5, #168]
         88b00:	e1500001 	cmp	r0, r1
         88b04:	959501a8 	ldrls	r0, [r5, #424]
         88b08:	95850268 	strls	r0, [r5, #616]
         88b0c:	e59500d8 	ldr	r0, [r5, #216]
         88b10:	e59510a8 	ldr	r1, [r5, #168]
         88b14:	e1310000 	teq	r1, r0
         88b18:	0a00000e 	beq	88b58 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x7d0>
         88b1c:	e59422a4 	ldr	r2, [r4, #676]	; fField676
         88b20:	e1520001 	cmp	r2, r1
         88b24:	9a000007 	bls	88b48 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x7c0>
         88b28:	e1520000 	cmp	r2, r0
         88b2c:	8a000005 	bhi	88b48 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x7c0>
         88b30:	e28d1008 	add	r1, sp, #8	; 0x8
         88b34:	e0811108 	add	r1, r1, r8, lsl #2
         88b38:	e5952268 	ldr	r2, [r5, #616]
         88b3c:	e5911004 	ldr	r1, [r1, #4]
         88b40:	e0421001 	sub	r1, r2, r1
         88b44:	e5851268 	str	r1, [r5, #616]
         88b48:	e59412a4 	ldr	r1, [r4, #676]	; fField676
         88b4c:	e1510000 	cmp	r1, r0
         88b50:	83a00000 	movhi	r0, #0	; 0x0
         88b54:	85850268 	strhi	r0, [r5, #616]
         88b58:	e5950234 	ldr	r0, [r5, #564]
         88b5c:	e3500000 	cmp	r0, #0	; 0x0
         88b60:	b3a00000 	movlt	r0, #0	; 0x0
         88b64:	b5850234 	strlt	r0, [r5, #564]
         88b68:	e5950268 	ldr	r0, [r5, #616]
         88b6c:	e3500000 	cmp	r0, #0	; 0x0
         88b70:	b3a00000 	movlt	r0, #0	; 0x0
         88b74:	b5a50268 	strlt	r0, [r5, #616]!
         88b78:	e2888002 	add	r8, r8, #2	; 0x2
         88b7c:	e1580007 	cmp	r8, r7
         88b80:	3affff64 	bcc	88918 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x590>
         88b84:	e5940134 	ldr	r0, [r4, #308]	; fField308
         88b88:	e59412a4 	ldr	r1, [r4, #676]	; fField676
         88b8c:	e1510000 	cmp	r1, r0
         88b90:	9a00000a 	bls	88bc0 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x838>
         88b94:	e594013c 	ldr	r0, [r4, #316]	; fField316
         88b98:	e5941138 	ldr	r1, [r4, #312]	; fField312
         88b9c:	e1300001 	teq	r0, r1
         88ba0:	0a000004 	beq	88bb8 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x830>
         88ba4:	e3a01000 	mov	r1, #0	; 0x0
         88ba8:	e2800001 	add	r0, r0, #1	; 0x1
         88bac:	e584013c 	str	r0, [r4, #316]	; fField316
         88bb0:	e58412a4 	str	r1, [r4, #676]	; fField676
         88bb4:	ea000001 	b	88bc0 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x838>
         88bb8:	e3a00001 	mov	r0, #1	; 0x1
         88bbc:	e5840140 	str	r0, [r4, #320]	; fField320
         88bc0:	e59d1000 	ldr	r1, [sp]
         88bc4:	e2810902 	add	r0, r1, #32768	; 0x8000
         88bc8:	e1a00840 	mov	r0, r0, asr #16
         88bcc:	e5ca0001 	strb	r0, [sl, #1]
         88bd0:	e1a00440 	mov	r0, r0, asr #8
         88bd4:	e4ca0002 	strb	r0, [sl], #2
         88bd8:	e28dd004 	add	sp, sp, #4	; 0x4
         88bdc:	e59d0128 	ldr	r0, [sp, #296]
         88be0:	e2800001 	add	r0, r0, #1	; 0x1
         88be4:	e58d0128 	str	r0, [sp, #296]
         88be8:	e59d1124 	ldr	r1, [sp, #292]
         88bec:	e1500001 	cmp	r0, r1
         88bf0:	3affff40 	bcc	888f8 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x570>
         88bf4:	ea000383 	b	89a08 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x1680>
         88bf8:	e3310002 	teq	r1, #2	; 0x2
         88bfc:	1a000112 	bne	8904c <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xcc4>
         88c00:	e3a01000 	mov	r1, #0	; 0x0
         88c04:	e58d1128 	str	r1, [sp, #296]
         88c08:	e59d1124 	ldr	r1, [sp, #292]
         88c0c:	e3510000 	cmp	r1, #0	; 0x0
         88c10:	9a00037c 	bls	89a08 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x1680>
         88c14:	e3a01000 	mov	r1, #0	; 0x0
         88c18:	e52d1004 	str	r1, [sp, -#4]!
         88c1c:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         88c20:	e2800001 	add	r0, r0, #1	; 0x1
         88c24:	e3a08000 	mov	r8, #0	; 0x0
         88c28:	e3570000 	cmp	r7, #0	; 0x0
         88c2c:	e58402a4 	str	r0, [r4, #676]	; fField676
         88c30:	9a0000e8 	bls	88fd8 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xc50>
         88c34:	e0845108 	add	r5, r4, r8, lsl #2
         88c38:	e1a09005 	mov	r9, r5
         88c3c:	e5950208 	ldr	r0, [r5, #520]
         88c40:	e1a0e00f 	mov	lr, pc
         88c44:	e1a0f006 	mov	pc, r6
         88c48:	e5991268 	ldr	r1, [r9, #616]
         88c4c:	e1a01841 	mov	r1, r1, asr #16
         88c50:	e0000091 	mul	r0, r1, r0
         88c54:	e5991204 	ldr	r1, [r9, #516]
         88c58:	e0801001 	add	r1, r0, r1
         88c5c:	e52d1004 	str	r1, [sp, -#4]!
         88c60:	e599020c 	ldr	r0, [r9, #524]
         88c64:	e1a0e00f 	mov	lr, pc
         88c68:	e1a0f006 	mov	pc, r6
         88c6c:	e49d1004 	ldr	r1, [sp], #4
         88c70:	e599226c 	ldr	r2, [r9, #620]
         88c74:	e1a02842 	mov	r2, r2, asr #16
         88c78:	e0201092 	mla	r0, r2, r0, r1
         88c7c:	e1a0e00f 	mov	lr, pc
         88c80:	e1a0f006 	mov	pc, r6
         88c84:	e5991234 	ldr	r1, [r9, #564]
         88c88:	e1a01841 	mov	r1, r1, asr #16
         88c8c:	e0000091 	mul	r0, r1, r0
         88c90:	e59d1000 	ldr	r1, [sp]
         88c94:	e0801001 	add	r1, r0, r1
         88c98:	e58d1000 	str	r1, [sp]
         88c9c:	e5990204 	ldr	r0, [r9, #516]
         88ca0:	e59911d4 	ldr	r1, [r9, #468]
         88ca4:	e0800001 	add	r0, r0, r1
         88ca8:	e5a90204 	str	r0, [r9, #516]!
         88cac:	e1a01000 	mov	r1, r0
         88cb0:	e350075a 	cmp	r0, #23592960	; 0x1680000
         88cb4:	c241075a 	subgt	r0, r1, #23592960	; 0x1680000
         88cb8:	c5850204 	strgt	r0, [r5, #516]
         88cbc:	e5950208 	ldr	r0, [r5, #520]
         88cc0:	e59511d8 	ldr	r1, [r5, #472]
         88cc4:	e0800001 	add	r0, r0, r1
         88cc8:	e5850208 	str	r0, [r5, #520]
         88ccc:	e1a01000 	mov	r1, r0
         88cd0:	e350075a 	cmp	r0, #23592960	; 0x1680000
         88cd4:	c241075a 	subgt	r0, r1, #23592960	; 0x1680000
         88cd8:	c5850208 	strgt	r0, [r5, #520]
         88cdc:	e595020c 	ldr	r0, [r5, #524]
         88ce0:	e59511dc 	ldr	r1, [r5, #476]
         88ce4:	e0800001 	add	r0, r0, r1
         88ce8:	e585020c 	str	r0, [r5, #524]
         88cec:	e1a01000 	mov	r1, r0
         88cf0:	e350075a 	cmp	r0, #23592960	; 0x1680000
         88cf4:	c241075a 	subgt	r0, r1, #23592960	; 0x1680000
         88cf8:	c585020c 	strgt	r0, [r5, #524]
         88cfc:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         88d00:	e5951014 	ldr	r1, [r5, #20]
         88d04:	e1500001 	cmp	r0, r1
         88d08:	93a00000 	movls	r0, #0	; 0x0
         88d0c:	95850234 	strls	r0, [r5, #564]
         88d10:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         88d14:	e1500001 	cmp	r0, r1
         88d18:	3a000007 	bcc	88d3c <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x9b4>
         88d1c:	e5951044 	ldr	r1, [r5, #68]
         88d20:	e1500001 	cmp	r0, r1
         88d24:	8a000004 	bhi	88d3c <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x9b4>
         88d28:	e28d00f8 	add	r0, sp, #248	; 0xf8
         88d2c:	e5951234 	ldr	r1, [r5, #564]
         88d30:	e7900108 	ldr	r0, [r0, r8, lsl #2]
         88d34:	e0810000 	add	r0, r1, r0
         88d38:	e5850234 	str	r0, [r5, #564]
         88d3c:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         88d40:	e5951044 	ldr	r1, [r5, #68]
         88d44:	e1500001 	cmp	r0, r1
         88d48:	3a000007 	bcc	88d6c <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x9e4>
         88d4c:	e5951074 	ldr	r1, [r5, #116]
         88d50:	e1500001 	cmp	r0, r1
         88d54:	8a000004 	bhi	88d6c <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x9e4>
         88d58:	e28d00c8 	add	r0, sp, #200	; 0xc8
         88d5c:	e5951234 	ldr	r1, [r5, #564]
         88d60:	e7900108 	ldr	r0, [r0, r8, lsl #2]
         88d64:	e0410000 	sub	r0, r1, r0
         88d68:	e5850234 	str	r0, [r5, #564]
         88d6c:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         88d70:	e5951074 	ldr	r1, [r5, #116]
         88d74:	e1500001 	cmp	r0, r1
         88d78:	3a000003 	bcc	88d8c <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xa04>
         88d7c:	e59510a4 	ldr	r1, [r5, #164]
         88d80:	e1500001 	cmp	r0, r1
         88d84:	95950174 	ldrls	r0, [r5, #372]
         88d88:	95850234 	strls	r0, [r5, #564]
         88d8c:	e59500d4 	ldr	r0, [r5, #212]
         88d90:	e59510a4 	ldr	r1, [r5, #164]
         88d94:	e1310000 	teq	r1, r0
         88d98:	0a00000d 	beq	88dd4 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xa4c>
         88d9c:	e59422a4 	ldr	r2, [r4, #676]	; fField676
         88da0:	e1520001 	cmp	r2, r1
         88da4:	9a000006 	bls	88dc4 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xa3c>
         88da8:	e1520000 	cmp	r2, r0
         88dac:	8a000004 	bhi	88dc4 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xa3c>
         88db0:	e28d1098 	add	r1, sp, #152	; 0x98
         88db4:	e5952234 	ldr	r2, [r5, #564]
         88db8:	e7911108 	ldr	r1, [r1, r8, lsl #2]
         88dbc:	e0421001 	sub	r1, r2, r1
         88dc0:	e5851234 	str	r1, [r5, #564]
         88dc4:	e59412a4 	ldr	r1, [r4, #676]	; fField676
         88dc8:	e1510000 	cmp	r1, r0
         88dcc:	83a00000 	movhi	r0, #0	; 0x0
         88dd0:	85850234 	strhi	r0, [r5, #564]
         88dd4:	e59412a4 	ldr	r1, [r4, #676]	; fField676
         88dd8:	e5950018 	ldr	r0, [r5, #24]
         88ddc:	e1510000 	cmp	r1, r0
         88de0:	93a01000 	movls	r1, #0	; 0x0
         88de4:	95851268 	strls	r1, [r5, #616]
         88de8:	e59412a4 	ldr	r1, [r4, #676]	; fField676
         88dec:	e1510000 	cmp	r1, r0
         88df0:	3a000008 	bcc	88e18 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xa90>
         88df4:	e5950048 	ldr	r0, [r5, #72]
         88df8:	e1510000 	cmp	r1, r0
         88dfc:	8a000005 	bhi	88e18 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xa90>
         88e00:	e28d0068 	add	r0, sp, #104	; 0x68
         88e04:	e0800108 	add	r0, r0, r8, lsl #2
         88e08:	e5951268 	ldr	r1, [r5, #616]
         88e0c:	e5900004 	ldr	r0, [r0, #4]
         88e10:	e0810000 	add	r0, r1, r0
         88e14:	e5850268 	str	r0, [r5, #616]
         88e18:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         88e1c:	e5951048 	ldr	r1, [r5, #72]
         88e20:	e1500001 	cmp	r0, r1
         88e24:	3a000008 	bcc	88e4c <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xac4>
         88e28:	e5951078 	ldr	r1, [r5, #120]
         88e2c:	e1500001 	cmp	r0, r1
         88e30:	8a000005 	bhi	88e4c <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xac4>
         88e34:	e28d0038 	add	r0, sp, #56	; 0x38
         88e38:	e0800108 	add	r0, r0, r8, lsl #2
         88e3c:	e5951268 	ldr	r1, [r5, #616]
         88e40:	e5900004 	ldr	r0, [r0, #4]
         88e44:	e0410000 	sub	r0, r1, r0
         88e48:	e5850268 	str	r0, [r5, #616]
         88e4c:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         88e50:	e5951078 	ldr	r1, [r5, #120]
         88e54:	e1500001 	cmp	r0, r1
         88e58:	3a000003 	bcc	88e6c <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xae4>
         88e5c:	e59510a8 	ldr	r1, [r5, #168]
         88e60:	e1500001 	cmp	r0, r1
         88e64:	959501a8 	ldrls	r0, [r5, #424]
         88e68:	95850268 	strls	r0, [r5, #616]
         88e6c:	e59500d8 	ldr	r0, [r5, #216]
         88e70:	e59520a8 	ldr	r2, [r5, #168]
         88e74:	e1320000 	teq	r2, r0
         88e78:	0a00000e 	beq	88eb8 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xb30>
         88e7c:	e59412a4 	ldr	r1, [r4, #676]	; fField676
         88e80:	e1510002 	cmp	r1, r2
         88e84:	9a000007 	bls	88ea8 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xb20>
         88e88:	e1510000 	cmp	r1, r0
         88e8c:	8a000005 	bhi	88ea8 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xb20>
         88e90:	e28d1008 	add	r1, sp, #8	; 0x8
         88e94:	e0811108 	add	r1, r1, r8, lsl #2
         88e98:	e5952268 	ldr	r2, [r5, #616]
         88e9c:	e5911004 	ldr	r1, [r1, #4]
         88ea0:	e0421001 	sub	r1, r2, r1
         88ea4:	e5851268 	str	r1, [r5, #616]
         88ea8:	e59412a4 	ldr	r1, [r4, #676]	; fField676
         88eac:	e1510000 	cmp	r1, r0
         88eb0:	83a00000 	movhi	r0, #0	; 0x0
         88eb4:	85850268 	strhi	r0, [r5, #616]
         88eb8:	e59412a4 	ldr	r1, [r4, #676]	; fField676
         88ebc:	e595001c 	ldr	r0, [r5, #28]
         88ec0:	e1510000 	cmp	r1, r0
         88ec4:	93a01000 	movls	r1, #0	; 0x0
         88ec8:	9585126c 	strls	r1, [r5, #620]
         88ecc:	e59412a4 	ldr	r1, [r4, #676]	; fField676
         88ed0:	e1510000 	cmp	r1, r0
         88ed4:	3a000008 	bcc	88efc <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xb74>
         88ed8:	e595004c 	ldr	r0, [r5, #76]
         88edc:	e1510000 	cmp	r1, r0
         88ee0:	8a000005 	bhi	88efc <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xb74>
         88ee4:	e28d0068 	add	r0, sp, #104	; 0x68
         88ee8:	e0800108 	add	r0, r0, r8, lsl #2
         88eec:	e595126c 	ldr	r1, [r5, #620]
         88ef0:	e5900008 	ldr	r0, [r0, #8]
         88ef4:	e0810000 	add	r0, r1, r0
         88ef8:	e585026c 	str	r0, [r5, #620]
         88efc:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         88f00:	e595104c 	ldr	r1, [r5, #76]
         88f04:	e1500001 	cmp	r0, r1
         88f08:	3a000008 	bcc	88f30 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xba8>
         88f0c:	e595107c 	ldr	r1, [r5, #124]
         88f10:	e1500001 	cmp	r0, r1
         88f14:	8a000005 	bhi	88f30 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xba8>
         88f18:	e28d0038 	add	r0, sp, #56	; 0x38
         88f1c:	e0800108 	add	r0, r0, r8, lsl #2
         88f20:	e595126c 	ldr	r1, [r5, #620]
         88f24:	e5900008 	ldr	r0, [r0, #8]
         88f28:	e0410000 	sub	r0, r1, r0
         88f2c:	e585026c 	str	r0, [r5, #620]
         88f30:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         88f34:	e595107c 	ldr	r1, [r5, #124]
         88f38:	e1500001 	cmp	r0, r1
         88f3c:	3a000003 	bcc	88f50 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xbc8>
         88f40:	e59510ac 	ldr	r1, [r5, #172]
         88f44:	e1500001 	cmp	r0, r1
         88f48:	959501ac 	ldrls	r0, [r5, #428]
         88f4c:	9585026c 	strls	r0, [r5, #620]
         88f50:	e59500dc 	ldr	r0, [r5, #220]
         88f54:	e59520ac 	ldr	r2, [r5, #172]
         88f58:	e1320000 	teq	r2, r0
         88f5c:	0a00000e 	beq	88f9c <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xc14>
         88f60:	e59412a4 	ldr	r1, [r4, #676]	; fField676
         88f64:	e1510002 	cmp	r1, r2
         88f68:	9a000007 	bls	88f8c <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xc04>
         88f6c:	e1510000 	cmp	r1, r0
         88f70:	8a000005 	bhi	88f8c <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xc04>
         88f74:	e28d1008 	add	r1, sp, #8	; 0x8
         88f78:	e0811108 	add	r1, r1, r8, lsl #2
         88f7c:	e595226c 	ldr	r2, [r5, #620]
         88f80:	e5911008 	ldr	r1, [r1, #8]
         88f84:	e0421001 	sub	r1, r2, r1
         88f88:	e585126c 	str	r1, [r5, #620]
         88f8c:	e59412a4 	ldr	r1, [r4, #676]	; fField676
         88f90:	e1510000 	cmp	r1, r0
         88f94:	83a00000 	movhi	r0, #0	; 0x0
         88f98:	8585026c 	strhi	r0, [r5, #620]
         88f9c:	e5950234 	ldr	r0, [r5, #564]
         88fa0:	e3500000 	cmp	r0, #0	; 0x0
         88fa4:	b3a00000 	movlt	r0, #0	; 0x0
         88fa8:	b5850234 	strlt	r0, [r5, #564]
         88fac:	e5950268 	ldr	r0, [r5, #616]
         88fb0:	e3500000 	cmp	r0, #0	; 0x0
         88fb4:	b3a00000 	movlt	r0, #0	; 0x0
         88fb8:	b5850268 	strlt	r0, [r5, #616]
         88fbc:	e595026c 	ldr	r0, [r5, #620]
         88fc0:	e3500000 	cmp	r0, #0	; 0x0
         88fc4:	b3a00000 	movlt	r0, #0	; 0x0
         88fc8:	b5a5026c 	strlt	r0, [r5, #620]!
         88fcc:	e2888003 	add	r8, r8, #3	; 0x3
         88fd0:	e1580007 	cmp	r8, r7
         88fd4:	3affff16 	bcc	88c34 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x8ac>
         88fd8:	e5940134 	ldr	r0, [r4, #308]	; fField308
         88fdc:	e59412a4 	ldr	r1, [r4, #676]	; fField676
         88fe0:	e1510000 	cmp	r1, r0
         88fe4:	9a00000a 	bls	89014 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xc8c>
         88fe8:	e594013c 	ldr	r0, [r4, #316]	; fField316
         88fec:	e5941138 	ldr	r1, [r4, #312]	; fField312
         88ff0:	e1300001 	teq	r0, r1
         88ff4:	0a000004 	beq	8900c <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xc84>
         88ff8:	e3a01000 	mov	r1, #0	; 0x0
         88ffc:	e2800001 	add	r0, r0, #1	; 0x1
         89000:	e584013c 	str	r0, [r4, #316]	; fField316
         89004:	e58412a4 	str	r1, [r4, #676]	; fField676
         89008:	ea000001 	b	89014 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xc8c>
         8900c:	e3a00001 	mov	r0, #1	; 0x1
         89010:	e5840140 	str	r0, [r4, #320]	; fField320
         89014:	e59d1000 	ldr	r1, [sp]
         89018:	e2810902 	add	r0, r1, #32768	; 0x8000
         8901c:	e1a00840 	mov	r0, r0, asr #16
         89020:	e5ca0001 	strb	r0, [sl, #1]
         89024:	e1a00440 	mov	r0, r0, asr #8
         89028:	e4ca0002 	strb	r0, [sl], #2
         8902c:	e28dd004 	add	sp, sp, #4	; 0x4
         89030:	e59d0128 	ldr	r0, [sp, #296]
         89034:	e2800001 	add	r0, r0, #1	; 0x1
         89038:	e58d0128 	str	r0, [sp, #296]
         8903c:	e59d1124 	ldr	r1, [sp, #292]
         89040:	e1500001 	cmp	r0, r1
         89044:	3afffef2 	bcc	88c14 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x88c>
         89048:	ea00026e 	b	89a08 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x1680>
         8904c:	e3310003 	teq	r1, #3	; 0x3
         89050:	1a00010f 	bne	89494 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x110c>
         89054:	e3a01000 	mov	r1, #0	; 0x0
         89058:	e58d1128 	str	r1, [sp, #296]
         8905c:	e59d1124 	ldr	r1, [sp, #292]
         89060:	e3510000 	cmp	r1, #0	; 0x0
         89064:	9a000267 	bls	89a08 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x1680>
         89068:	e3a01000 	mov	r1, #0	; 0x0
         8906c:	e52d1004 	str	r1, [sp, -#4]!
         89070:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         89074:	e2800001 	add	r0, r0, #1	; 0x1
         89078:	e3a08000 	mov	r8, #0	; 0x0
         8907c:	e3570000 	cmp	r7, #0	; 0x0
         89080:	e58402a4 	str	r0, [r4, #676]	; fField676
         89084:	9a0000e5 	bls	89420 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x1098>
         89088:	e0845108 	add	r5, r4, r8, lsl #2
         8908c:	e1a09005 	mov	r9, r5
         89090:	e595020c 	ldr	r0, [r5, #524]
         89094:	e1a0e00f 	mov	lr, pc
         89098:	e1a0f006 	mov	pc, r6
         8909c:	e599126c 	ldr	r1, [r9, #620]
         890a0:	e1a01841 	mov	r1, r1, asr #16
         890a4:	e0000091 	mul	r0, r1, r0
         890a8:	e5991208 	ldr	r1, [r9, #520]
         890ac:	e0800001 	add	r0, r0, r1
         890b0:	e1a0e00f 	mov	lr, pc
         890b4:	e1a0f006 	mov	pc, r6
         890b8:	e5991268 	ldr	r1, [r9, #616]
         890bc:	e1a01841 	mov	r1, r1, asr #16
         890c0:	e0000091 	mul	r0, r1, r0
         890c4:	e5991204 	ldr	r1, [r9, #516]
         890c8:	e0800001 	add	r0, r0, r1
         890cc:	e1a0e00f 	mov	lr, pc
         890d0:	e1a0f006 	mov	pc, r6
         890d4:	e5991234 	ldr	r1, [r9, #564]
         890d8:	e1a01841 	mov	r1, r1, asr #16
         890dc:	e0000091 	mul	r0, r1, r0
         890e0:	e59d1000 	ldr	r1, [sp]
         890e4:	e0801001 	add	r1, r0, r1
         890e8:	e58d1000 	str	r1, [sp]
         890ec:	e5990204 	ldr	r0, [r9, #516]
         890f0:	e59911d4 	ldr	r1, [r9, #468]
         890f4:	e0800001 	add	r0, r0, r1
         890f8:	e5a90204 	str	r0, [r9, #516]!
         890fc:	e350075a 	cmp	r0, #23592960	; 0x1680000
         89100:	c240075a 	subgt	r0, r0, #23592960	; 0x1680000
         89104:	c5850204 	strgt	r0, [r5, #516]
         89108:	e59501d8 	ldr	r0, [r5, #472]
         8910c:	e5951208 	ldr	r1, [r5, #520]
         89110:	e0810000 	add	r0, r1, r0
         89114:	e5850208 	str	r0, [r5, #520]
         89118:	e1a01000 	mov	r1, r0
         8911c:	e350075a 	cmp	r0, #23592960	; 0x1680000
         89120:	c241075a 	subgt	r0, r1, #23592960	; 0x1680000
         89124:	c5850208 	strgt	r0, [r5, #520]
         89128:	e59501dc 	ldr	r0, [r5, #476]
         8912c:	e595120c 	ldr	r1, [r5, #524]
         89130:	e0810000 	add	r0, r1, r0
         89134:	e585020c 	str	r0, [r5, #524]
         89138:	e350075a 	cmp	r0, #23592960	; 0x1680000
         8913c:	c240075a 	subgt	r0, r0, #23592960	; 0x1680000
         89140:	c585020c 	strgt	r0, [r5, #524]
         89144:	e59412a4 	ldr	r1, [r4, #676]	; fField676
         89148:	e5950014 	ldr	r0, [r5, #20]
         8914c:	e1510000 	cmp	r1, r0
         89150:	93a01000 	movls	r1, #0	; 0x0
         89154:	95851234 	strls	r1, [r5, #564]
         89158:	e59412a4 	ldr	r1, [r4, #676]	; fField676
         8915c:	e1510000 	cmp	r1, r0
         89160:	3a000007 	bcc	89184 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xdfc>
         89164:	e5950044 	ldr	r0, [r5, #68]
         89168:	e1510000 	cmp	r1, r0
         8916c:	8a000004 	bhi	89184 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xdfc>
         89170:	e28d00f8 	add	r0, sp, #248	; 0xf8
         89174:	e5951234 	ldr	r1, [r5, #564]
         89178:	e7900108 	ldr	r0, [r0, r8, lsl #2]
         8917c:	e0810000 	add	r0, r1, r0
         89180:	e5850234 	str	r0, [r5, #564]
         89184:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         89188:	e5951044 	ldr	r1, [r5, #68]
         8918c:	e1500001 	cmp	r0, r1
         89190:	3a000007 	bcc	891b4 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xe2c>
         89194:	e5951074 	ldr	r1, [r5, #116]
         89198:	e1500001 	cmp	r0, r1
         8919c:	8a000004 	bhi	891b4 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xe2c>
         891a0:	e28d00c8 	add	r0, sp, #200	; 0xc8
         891a4:	e5951234 	ldr	r1, [r5, #564]
         891a8:	e7900108 	ldr	r0, [r0, r8, lsl #2]
         891ac:	e0410000 	sub	r0, r1, r0
         891b0:	e5850234 	str	r0, [r5, #564]
         891b4:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         891b8:	e5951074 	ldr	r1, [r5, #116]
         891bc:	e1500001 	cmp	r0, r1
         891c0:	3a000003 	bcc	891d4 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xe4c>
         891c4:	e59510a4 	ldr	r1, [r5, #164]
         891c8:	e1500001 	cmp	r0, r1
         891cc:	95950174 	ldrls	r0, [r5, #372]
         891d0:	95850234 	strls	r0, [r5, #564]
         891d4:	e59500d4 	ldr	r0, [r5, #212]
         891d8:	e59520a4 	ldr	r2, [r5, #164]
         891dc:	e1320000 	teq	r2, r0
         891e0:	0a00000d 	beq	8921c <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xe94>
         891e4:	e59412a4 	ldr	r1, [r4, #676]	; fField676
         891e8:	e1510002 	cmp	r1, r2
         891ec:	9a000006 	bls	8920c <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xe84>
         891f0:	e1510000 	cmp	r1, r0
         891f4:	8a000004 	bhi	8920c <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xe84>
         891f8:	e28d1098 	add	r1, sp, #152	; 0x98
         891fc:	e5952234 	ldr	r2, [r5, #564]
         89200:	e7911108 	ldr	r1, [r1, r8, lsl #2]
         89204:	e0421001 	sub	r1, r2, r1
         89208:	e5851234 	str	r1, [r5, #564]
         8920c:	e59412a4 	ldr	r1, [r4, #676]	; fField676
         89210:	e1510000 	cmp	r1, r0
         89214:	83a00000 	movhi	r0, #0	; 0x0
         89218:	85850234 	strhi	r0, [r5, #564]
         8921c:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         89220:	e5951018 	ldr	r1, [r5, #24]
         89224:	e1500001 	cmp	r0, r1
         89228:	93a00000 	movls	r0, #0	; 0x0
         8922c:	95850268 	strls	r0, [r5, #616]
         89230:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         89234:	e1500001 	cmp	r0, r1
         89238:	3a000008 	bcc	89260 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xed8>
         8923c:	e5951048 	ldr	r1, [r5, #72]
         89240:	e1500001 	cmp	r0, r1
         89244:	8a000005 	bhi	89260 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xed8>
         89248:	e28d0068 	add	r0, sp, #104	; 0x68
         8924c:	e0800108 	add	r0, r0, r8, lsl #2
         89250:	e5951268 	ldr	r1, [r5, #616]
         89254:	e5900004 	ldr	r0, [r0, #4]
         89258:	e0810000 	add	r0, r1, r0
         8925c:	e5850268 	str	r0, [r5, #616]
         89260:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         89264:	e5951048 	ldr	r1, [r5, #72]
         89268:	e1500001 	cmp	r0, r1
         8926c:	3a000008 	bcc	89294 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xf0c>
         89270:	e5951078 	ldr	r1, [r5, #120]
         89274:	e1500001 	cmp	r0, r1
         89278:	8a000005 	bhi	89294 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xf0c>
         8927c:	e28d0038 	add	r0, sp, #56	; 0x38
         89280:	e0800108 	add	r0, r0, r8, lsl #2
         89284:	e5951268 	ldr	r1, [r5, #616]
         89288:	e5900004 	ldr	r0, [r0, #4]
         8928c:	e0410000 	sub	r0, r1, r0
         89290:	e5850268 	str	r0, [r5, #616]
         89294:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         89298:	e5951078 	ldr	r1, [r5, #120]
         8929c:	e1500001 	cmp	r0, r1
         892a0:	3a000003 	bcc	892b4 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xf2c>
         892a4:	e59510a8 	ldr	r1, [r5, #168]
         892a8:	e1500001 	cmp	r0, r1
         892ac:	959501a8 	ldrls	r0, [r5, #424]
         892b0:	95850268 	strls	r0, [r5, #616]
         892b4:	e59500d8 	ldr	r0, [r5, #216]
         892b8:	e59510a8 	ldr	r1, [r5, #168]
         892bc:	e1310000 	teq	r1, r0
         892c0:	0a00000e 	beq	89300 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xf78>
         892c4:	e59422a4 	ldr	r2, [r4, #676]	; fField676
         892c8:	e1520001 	cmp	r2, r1
         892cc:	9a000007 	bls	892f0 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xf68>
         892d0:	e1520000 	cmp	r2, r0
         892d4:	8a000005 	bhi	892f0 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xf68>
         892d8:	e28d1008 	add	r1, sp, #8	; 0x8
         892dc:	e0811108 	add	r1, r1, r8, lsl #2
         892e0:	e5952268 	ldr	r2, [r5, #616]
         892e4:	e5911004 	ldr	r1, [r1, #4]
         892e8:	e0421001 	sub	r1, r2, r1
         892ec:	e5851268 	str	r1, [r5, #616]
         892f0:	e59412a4 	ldr	r1, [r4, #676]	; fField676
         892f4:	e1510000 	cmp	r1, r0
         892f8:	83a00000 	movhi	r0, #0	; 0x0
         892fc:	85850268 	strhi	r0, [r5, #616]
         89300:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         89304:	e595101c 	ldr	r1, [r5, #28]
         89308:	e1500001 	cmp	r0, r1
         8930c:	93a00000 	movls	r0, #0	; 0x0
         89310:	9585026c 	strls	r0, [r5, #620]
         89314:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         89318:	e1500001 	cmp	r0, r1
         8931c:	3a000008 	bcc	89344 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xfbc>
         89320:	e595104c 	ldr	r1, [r5, #76]
         89324:	e1500001 	cmp	r0, r1
         89328:	8a000005 	bhi	89344 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xfbc>
         8932c:	e28d0068 	add	r0, sp, #104	; 0x68
         89330:	e0800108 	add	r0, r0, r8, lsl #2
         89334:	e595126c 	ldr	r1, [r5, #620]
         89338:	e5900008 	ldr	r0, [r0, #8]
         8933c:	e0810000 	add	r0, r1, r0
         89340:	e585026c 	str	r0, [r5, #620]
         89344:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         89348:	e595104c 	ldr	r1, [r5, #76]
         8934c:	e1500001 	cmp	r0, r1
         89350:	3a000008 	bcc	89378 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xff0>
         89354:	e595107c 	ldr	r1, [r5, #124]
         89358:	e1500001 	cmp	r0, r1
         8935c:	8a000005 	bhi	89378 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xff0>
         89360:	e28d0038 	add	r0, sp, #56	; 0x38
         89364:	e0800108 	add	r0, r0, r8, lsl #2
         89368:	e595126c 	ldr	r1, [r5, #620]
         8936c:	e5900008 	ldr	r0, [r0, #8]
         89370:	e0410000 	sub	r0, r1, r0
         89374:	e585026c 	str	r0, [r5, #620]
         89378:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         8937c:	e595107c 	ldr	r1, [r5, #124]
         89380:	e1500001 	cmp	r0, r1
         89384:	3a000003 	bcc	89398 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x1010>
         89388:	e59510ac 	ldr	r1, [r5, #172]
         8938c:	e1500001 	cmp	r0, r1
         89390:	959501ac 	ldrls	r0, [r5, #428]
         89394:	9585026c 	strls	r0, [r5, #620]
         89398:	e59500dc 	ldr	r0, [r5, #220]
         8939c:	e59520ac 	ldr	r2, [r5, #172]
         893a0:	e1320000 	teq	r2, r0
         893a4:	0a00000e 	beq	893e4 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x105c>
         893a8:	e59412a4 	ldr	r1, [r4, #676]	; fField676
         893ac:	e1510002 	cmp	r1, r2
         893b0:	9a000007 	bls	893d4 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x104c>
         893b4:	e1510000 	cmp	r1, r0
         893b8:	8a000005 	bhi	893d4 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x104c>
         893bc:	e28d1008 	add	r1, sp, #8	; 0x8
         893c0:	e0811108 	add	r1, r1, r8, lsl #2
         893c4:	e595226c 	ldr	r2, [r5, #620]
         893c8:	e5911008 	ldr	r1, [r1, #8]
         893cc:	e0421001 	sub	r1, r2, r1
         893d0:	e585126c 	str	r1, [r5, #620]
         893d4:	e59412a4 	ldr	r1, [r4, #676]	; fField676
         893d8:	e1510000 	cmp	r1, r0
         893dc:	83a00000 	movhi	r0, #0	; 0x0
         893e0:	8585026c 	strhi	r0, [r5, #620]
         893e4:	e5950234 	ldr	r0, [r5, #564]
         893e8:	e3500000 	cmp	r0, #0	; 0x0
         893ec:	b3a00000 	movlt	r0, #0	; 0x0
         893f0:	b5850234 	strlt	r0, [r5, #564]
         893f4:	e5950268 	ldr	r0, [r5, #616]
         893f8:	e3500000 	cmp	r0, #0	; 0x0
         893fc:	b3a00000 	movlt	r0, #0	; 0x0
         89400:	b5850268 	strlt	r0, [r5, #616]
         89404:	e595026c 	ldr	r0, [r5, #620]
         89408:	e3500000 	cmp	r0, #0	; 0x0
         8940c:	b3a00000 	movlt	r0, #0	; 0x0
         89410:	b5a5026c 	strlt	r0, [r5, #620]!
         89414:	e2888003 	add	r8, r8, #3	; 0x3
         89418:	e1580007 	cmp	r8, r7
         8941c:	3affff19 	bcc	89088 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xd00>
         89420:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         89424:	e5941134 	ldr	r1, [r4, #308]	; fField308
         89428:	e1500001 	cmp	r0, r1
         8942c:	9a00000a 	bls	8945c <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x10d4>
         89430:	e594013c 	ldr	r0, [r4, #316]	; fField316
         89434:	e5941138 	ldr	r1, [r4, #312]	; fField312
         89438:	e1300001 	teq	r0, r1
         8943c:	0a000004 	beq	89454 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x10cc>
         89440:	e3a01000 	mov	r1, #0	; 0x0
         89444:	e2800001 	add	r0, r0, #1	; 0x1
         89448:	e584013c 	str	r0, [r4, #316]	; fField316
         8944c:	e58412a4 	str	r1, [r4, #676]	; fField676
         89450:	ea000001 	b	8945c <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x10d4>
         89454:	e3a00001 	mov	r0, #1	; 0x1
         89458:	e5840140 	str	r0, [r4, #320]	; fField320
         8945c:	e59d1000 	ldr	r1, [sp]
         89460:	e2810902 	add	r0, r1, #32768	; 0x8000
         89464:	e1a00840 	mov	r0, r0, asr #16
         89468:	e5ca0001 	strb	r0, [sl, #1]
         8946c:	e1a00440 	mov	r0, r0, asr #8
         89470:	e4ca0002 	strb	r0, [sl], #2
         89474:	e28dd004 	add	sp, sp, #4	; 0x4
         89478:	e59d0128 	ldr	r0, [sp, #296]
         8947c:	e2800001 	add	r0, r0, #1	; 0x1
         89480:	e58d0128 	str	r0, [sp, #296]
         89484:	e59d1124 	ldr	r1, [sp, #292]
         89488:	e1500001 	cmp	r0, r1
         8948c:	3afffef5 	bcc	89068 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xce0>
         89490:	ea00015c 	b	89a08 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x1680>
         89494:	e3310004 	teq	r1, #4	; 0x4
         89498:	1a00015a 	bne	89a08 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x1680>
         8949c:	e3a01000 	mov	r1, #0	; 0x0
         894a0:	e58d1128 	str	r1, [sp, #296]
         894a4:	e59d1124 	ldr	r1, [sp, #292]
         894a8:	e3510000 	cmp	r1, #0	; 0x0
         894ac:	9a000155 	bls	89a08 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x1680>
         894b0:	e3a01000 	mov	r1, #0	; 0x0
         894b4:	e52d1004 	str	r1, [sp, -#4]!
         894b8:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         894bc:	e2800001 	add	r0, r0, #1	; 0x1
         894c0:	e3a08000 	mov	r8, #0	; 0x0
         894c4:	e3570000 	cmp	r7, #0	; 0x0
         894c8:	e58402a4 	str	r0, [r4, #676]	; fField676
         894cc:	9a000131 	bls	89998 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x1610>
         894d0:	e0845108 	add	r5, r4, r8, lsl #2
         894d4:	e1a09005 	mov	r9, r5
         894d8:	e5950210 	ldr	r0, [r5, #528]
         894dc:	e1a0e00f 	mov	lr, pc
         894e0:	e1a0f006 	mov	pc, r6
         894e4:	e5991270 	ldr	r1, [r9, #624]
         894e8:	e1a01841 	mov	r1, r1, asr #16
         894ec:	e0000091 	mul	r0, r1, r0
         894f0:	e599120c 	ldr	r1, [r9, #524]
         894f4:	e0800001 	add	r0, r0, r1
         894f8:	e1a0e00f 	mov	lr, pc
         894fc:	e1a0f006 	mov	pc, r6
         89500:	e599126c 	ldr	r1, [r9, #620]
         89504:	e1a01841 	mov	r1, r1, asr #16
         89508:	e0000091 	mul	r0, r1, r0
         8950c:	e5991208 	ldr	r1, [r9, #520]
         89510:	e0800001 	add	r0, r0, r1
         89514:	e1a0e00f 	mov	lr, pc
         89518:	e1a0f006 	mov	pc, r6
         8951c:	e5991268 	ldr	r1, [r9, #616]
         89520:	e1a01841 	mov	r1, r1, asr #16
         89524:	e0000091 	mul	r0, r1, r0
         89528:	e5991204 	ldr	r1, [r9, #516]
         8952c:	e0800001 	add	r0, r0, r1
         89530:	e1a0e00f 	mov	lr, pc
         89534:	e1a0f006 	mov	pc, r6
         89538:	e5991234 	ldr	r1, [r9, #564]
         8953c:	e1a01841 	mov	r1, r1, asr #16
         89540:	e0000091 	mul	r0, r1, r0
         89544:	e59d1000 	ldr	r1, [sp]
         89548:	e0801001 	add	r1, r0, r1
         8954c:	e58d1000 	str	r1, [sp]
         89550:	e59901d4 	ldr	r0, [r9, #468]
         89554:	e5991204 	ldr	r1, [r9, #516]
         89558:	e0810000 	add	r0, r1, r0
         8955c:	e5a90204 	str	r0, [r9, #516]!
         89560:	e350075a 	cmp	r0, #23592960	; 0x1680000
         89564:	c240075a 	subgt	r0, r0, #23592960	; 0x1680000
         89568:	c5850204 	strgt	r0, [r5, #516]
         8956c:	e59501d8 	ldr	r0, [r5, #472]
         89570:	e5951208 	ldr	r1, [r5, #520]
         89574:	e0810000 	add	r0, r1, r0
         89578:	e5850208 	str	r0, [r5, #520]
         8957c:	e1a01000 	mov	r1, r0
         89580:	e350075a 	cmp	r0, #23592960	; 0x1680000
         89584:	c241075a 	subgt	r0, r1, #23592960	; 0x1680000
         89588:	c5850208 	strgt	r0, [r5, #520]
         8958c:	e59501dc 	ldr	r0, [r5, #476]
         89590:	e595120c 	ldr	r1, [r5, #524]
         89594:	e0810000 	add	r0, r1, r0
         89598:	e585020c 	str	r0, [r5, #524]
         8959c:	e1a01000 	mov	r1, r0
         895a0:	e350075a 	cmp	r0, #23592960	; 0x1680000
         895a4:	c241075a 	subgt	r0, r1, #23592960	; 0x1680000
         895a8:	c585020c 	strgt	r0, [r5, #524]
         895ac:	e5950210 	ldr	r0, [r5, #528]
         895b0:	e59511e0 	ldr	r1, [r5, #480]
         895b4:	e0800001 	add	r0, r0, r1
         895b8:	e5850210 	str	r0, [r5, #528]
         895bc:	e350075a 	cmp	r0, #23592960	; 0x1680000
         895c0:	c240075a 	subgt	r0, r0, #23592960	; 0x1680000
         895c4:	c5850210 	strgt	r0, [r5, #528]
         895c8:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         895cc:	e5951014 	ldr	r1, [r5, #20]
         895d0:	e1500001 	cmp	r0, r1
         895d4:	93a00000 	movls	r0, #0	; 0x0
         895d8:	95850234 	strls	r0, [r5, #564]
         895dc:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         895e0:	e1500001 	cmp	r0, r1
         895e4:	3a000007 	bcc	89608 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x1280>
         895e8:	e5951044 	ldr	r1, [r5, #68]
         895ec:	e1500001 	cmp	r0, r1
         895f0:	8a000004 	bhi	89608 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x1280>
         895f4:	e28d00f8 	add	r0, sp, #248	; 0xf8
         895f8:	e5951234 	ldr	r1, [r5, #564]
         895fc:	e7900108 	ldr	r0, [r0, r8, lsl #2]
         89600:	e0810000 	add	r0, r1, r0
         89604:	e5850234 	str	r0, [r5, #564]
         89608:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         8960c:	e5951044 	ldr	r1, [r5, #68]
         89610:	e1500001 	cmp	r0, r1
         89614:	3a000007 	bcc	89638 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x12b0>
         89618:	e5951074 	ldr	r1, [r5, #116]
         8961c:	e1500001 	cmp	r0, r1
         89620:	8a000004 	bhi	89638 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x12b0>
         89624:	e28d00c8 	add	r0, sp, #200	; 0xc8
         89628:	e5951234 	ldr	r1, [r5, #564]
         8962c:	e7900108 	ldr	r0, [r0, r8, lsl #2]
         89630:	e0410000 	sub	r0, r1, r0
         89634:	e5850234 	str	r0, [r5, #564]
         89638:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         8963c:	e5951074 	ldr	r1, [r5, #116]
         89640:	e1500001 	cmp	r0, r1
         89644:	3a000003 	bcc	89658 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x12d0>
         89648:	e59510a4 	ldr	r1, [r5, #164]
         8964c:	e1500001 	cmp	r0, r1
         89650:	95950174 	ldrls	r0, [r5, #372]
         89654:	95850234 	strls	r0, [r5, #564]
         89658:	e59500d4 	ldr	r0, [r5, #212]
         8965c:	e59520a4 	ldr	r2, [r5, #164]
         89660:	e1320000 	teq	r2, r0
         89664:	0a00000d 	beq	896a0 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x1318>
         89668:	e59412a4 	ldr	r1, [r4, #676]	; fField676
         8966c:	e1510002 	cmp	r1, r2
         89670:	9a000006 	bls	89690 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x1308>
         89674:	e1510000 	cmp	r1, r0
         89678:	8a000004 	bhi	89690 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x1308>
         8967c:	e28d1098 	add	r1, sp, #152	; 0x98
         89680:	e5952234 	ldr	r2, [r5, #564]
         89684:	e7911108 	ldr	r1, [r1, r8, lsl #2]
         89688:	e0421001 	sub	r1, r2, r1
         8968c:	e5851234 	str	r1, [r5, #564]
         89690:	e59412a4 	ldr	r1, [r4, #676]	; fField676
         89694:	e1510000 	cmp	r1, r0
         89698:	83a00000 	movhi	r0, #0	; 0x0
         8969c:	85850234 	strhi	r0, [r5, #564]
         896a0:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         896a4:	e5951018 	ldr	r1, [r5, #24]
         896a8:	e1500001 	cmp	r0, r1
         896ac:	93a00000 	movls	r0, #0	; 0x0
         896b0:	95850268 	strls	r0, [r5, #616]
         896b4:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         896b8:	e1500001 	cmp	r0, r1
         896bc:	3a000008 	bcc	896e4 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x135c>
         896c0:	e5951048 	ldr	r1, [r5, #72]
         896c4:	e1500001 	cmp	r0, r1
         896c8:	8a000005 	bhi	896e4 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x135c>
         896cc:	e28d0068 	add	r0, sp, #104	; 0x68
         896d0:	e0800108 	add	r0, r0, r8, lsl #2
         896d4:	e5951268 	ldr	r1, [r5, #616]
         896d8:	e5900004 	ldr	r0, [r0, #4]
         896dc:	e0810000 	add	r0, r1, r0
         896e0:	e5850268 	str	r0, [r5, #616]
         896e4:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         896e8:	e5951048 	ldr	r1, [r5, #72]
         896ec:	e1500001 	cmp	r0, r1
         896f0:	3a000008 	bcc	89718 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x1390>
         896f4:	e5951078 	ldr	r1, [r5, #120]
         896f8:	e1500001 	cmp	r0, r1
         896fc:	8a000005 	bhi	89718 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x1390>
         89700:	e28d0038 	add	r0, sp, #56	; 0x38
         89704:	e0800108 	add	r0, r0, r8, lsl #2
         89708:	e5951268 	ldr	r1, [r5, #616]
         8970c:	e5900004 	ldr	r0, [r0, #4]
         89710:	e0410000 	sub	r0, r1, r0
         89714:	e5850268 	str	r0, [r5, #616]
         89718:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         8971c:	e5951078 	ldr	r1, [r5, #120]
         89720:	e1500001 	cmp	r0, r1
         89724:	3a000003 	bcc	89738 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x13b0>
         89728:	e59510a8 	ldr	r1, [r5, #168]
         8972c:	e1500001 	cmp	r0, r1
         89730:	959501a8 	ldrls	r0, [r5, #424]
         89734:	95850268 	strls	r0, [r5, #616]
         89738:	e59500d8 	ldr	r0, [r5, #216]
         8973c:	e59520a8 	ldr	r2, [r5, #168]
         89740:	e1320000 	teq	r2, r0
         89744:	0a00000e 	beq	89784 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x13fc>
         89748:	e59412a4 	ldr	r1, [r4, #676]	; fField676
         8974c:	e1510002 	cmp	r1, r2
         89750:	9a000007 	bls	89774 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x13ec>
         89754:	e1510000 	cmp	r1, r0
         89758:	8a000005 	bhi	89774 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x13ec>
         8975c:	e28d1008 	add	r1, sp, #8	; 0x8
         89760:	e0811108 	add	r1, r1, r8, lsl #2
         89764:	e5952268 	ldr	r2, [r5, #616]
         89768:	e5911004 	ldr	r1, [r1, #4]
         8976c:	e0421001 	sub	r1, r2, r1
         89770:	e5851268 	str	r1, [r5, #616]
         89774:	e59412a4 	ldr	r1, [r4, #676]	; fField676
         89778:	e1510000 	cmp	r1, r0
         8977c:	83a00000 	movhi	r0, #0	; 0x0
         89780:	85850268 	strhi	r0, [r5, #616]
         89784:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         89788:	e595101c 	ldr	r1, [r5, #28]
         8978c:	e1500001 	cmp	r0, r1
         89790:	93a00000 	movls	r0, #0	; 0x0
         89794:	9585026c 	strls	r0, [r5, #620]
         89798:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         8979c:	e1500001 	cmp	r0, r1
         897a0:	3a000008 	bcc	897c8 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x1440>
         897a4:	e595104c 	ldr	r1, [r5, #76]
         897a8:	e1500001 	cmp	r0, r1
         897ac:	8a000005 	bhi	897c8 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x1440>
         897b0:	e28d0068 	add	r0, sp, #104	; 0x68
         897b4:	e0800108 	add	r0, r0, r8, lsl #2
         897b8:	e595126c 	ldr	r1, [r5, #620]
         897bc:	e5900008 	ldr	r0, [r0, #8]
         897c0:	e0810000 	add	r0, r1, r0
         897c4:	e585026c 	str	r0, [r5, #620]
         897c8:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         897cc:	e595104c 	ldr	r1, [r5, #76]
         897d0:	e1500001 	cmp	r0, r1
         897d4:	3a000008 	bcc	897fc <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x1474>
         897d8:	e595107c 	ldr	r1, [r5, #124]
         897dc:	e1500001 	cmp	r0, r1
         897e0:	8a000005 	bhi	897fc <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x1474>
         897e4:	e28d0038 	add	r0, sp, #56	; 0x38
         897e8:	e0800108 	add	r0, r0, r8, lsl #2
         897ec:	e595126c 	ldr	r1, [r5, #620]
         897f0:	e5900008 	ldr	r0, [r0, #8]
         897f4:	e0410000 	sub	r0, r1, r0
         897f8:	e585026c 	str	r0, [r5, #620]
         897fc:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         89800:	e595107c 	ldr	r1, [r5, #124]
         89804:	e1500001 	cmp	r0, r1
         89808:	3a000003 	bcc	8981c <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x1494>
         8980c:	e59510ac 	ldr	r1, [r5, #172]
         89810:	e1500001 	cmp	r0, r1
         89814:	959501ac 	ldrls	r0, [r5, #428]
         89818:	9585026c 	strls	r0, [r5, #620]
         8981c:	e59500dc 	ldr	r0, [r5, #220]
         89820:	e59510ac 	ldr	r1, [r5, #172]
         89824:	e1310000 	teq	r1, r0
         89828:	0a00000e 	beq	89868 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x14e0>
         8982c:	e59422a4 	ldr	r2, [r4, #676]	; fField676
         89830:	e1520001 	cmp	r2, r1
         89834:	9a000007 	bls	89858 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x14d0>
         89838:	e1520000 	cmp	r2, r0
         8983c:	8a000005 	bhi	89858 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x14d0>
         89840:	e28d1008 	add	r1, sp, #8	; 0x8
         89844:	e0811108 	add	r1, r1, r8, lsl #2
         89848:	e595226c 	ldr	r2, [r5, #620]
         8984c:	e5911008 	ldr	r1, [r1, #8]
         89850:	e0421001 	sub	r1, r2, r1
         89854:	e585126c 	str	r1, [r5, #620]
         89858:	e59412a4 	ldr	r1, [r4, #676]	; fField676
         8985c:	e1510000 	cmp	r1, r0
         89860:	83a00000 	movhi	r0, #0	; 0x0
         89864:	8585026c 	strhi	r0, [r5, #620]
         89868:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         8986c:	e5951020 	ldr	r1, [r5, #32]
         89870:	e1500001 	cmp	r0, r1
         89874:	93a00000 	movls	r0, #0	; 0x0
         89878:	95850270 	strls	r0, [r5, #624]
         8987c:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         89880:	e1500001 	cmp	r0, r1
         89884:	3a000008 	bcc	898ac <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x1524>
         89888:	e5951050 	ldr	r1, [r5, #80]
         8988c:	e1500001 	cmp	r0, r1
         89890:	8a000005 	bhi	898ac <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x1524>
         89894:	e28d0068 	add	r0, sp, #104	; 0x68
         89898:	e0800108 	add	r0, r0, r8, lsl #2
         8989c:	e5951270 	ldr	r1, [r5, #624]
         898a0:	e590000c 	ldr	r0, [r0, #12]
         898a4:	e0810000 	add	r0, r1, r0
         898a8:	e5850270 	str	r0, [r5, #624]
         898ac:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         898b0:	e5951050 	ldr	r1, [r5, #80]
         898b4:	e1500001 	cmp	r0, r1
         898b8:	3a000008 	bcc	898e0 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x1558>
         898bc:	e5951080 	ldr	r1, [r5, #128]
         898c0:	e1500001 	cmp	r0, r1
         898c4:	8a000005 	bhi	898e0 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x1558>
         898c8:	e28d0038 	add	r0, sp, #56	; 0x38
         898cc:	e0800108 	add	r0, r0, r8, lsl #2
         898d0:	e5951270 	ldr	r1, [r5, #624]
         898d4:	e590000c 	ldr	r0, [r0, #12]
         898d8:	e0410000 	sub	r0, r1, r0
         898dc:	e5850270 	str	r0, [r5, #624]
         898e0:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         898e4:	e5951080 	ldr	r1, [r5, #128]
         898e8:	e1500001 	cmp	r0, r1
         898ec:	3a000003 	bcc	89900 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x1578>
         898f0:	e59510b0 	ldr	r1, [r5, #176]
         898f4:	e1500001 	cmp	r0, r1
         898f8:	959501b0 	ldrls	r0, [r5, #432]
         898fc:	95850270 	strls	r0, [r5, #624]
         89900:	e59500e0 	ldr	r0, [r5, #224]
         89904:	e59510b0 	ldr	r1, [r5, #176]
         89908:	e1310000 	teq	r1, r0
         8990c:	0a00000e 	beq	8994c <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x15c4>
         89910:	e59422a4 	ldr	r2, [r4, #676]	; fField676
         89914:	e1520001 	cmp	r2, r1
         89918:	9a000007 	bls	8993c <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x15b4>
         8991c:	e1520000 	cmp	r2, r0
         89920:	8a000005 	bhi	8993c <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x15b4>
         89924:	e28d1008 	add	r1, sp, #8	; 0x8
         89928:	e0811108 	add	r1, r1, r8, lsl #2
         8992c:	e5952270 	ldr	r2, [r5, #624]
         89930:	e591100c 	ldr	r1, [r1, #12]
         89934:	e0421001 	sub	r1, r2, r1
         89938:	e5851270 	str	r1, [r5, #624]
         8993c:	e59412a4 	ldr	r1, [r4, #676]	; fField676
         89940:	e1510000 	cmp	r1, r0
         89944:	83a00000 	movhi	r0, #0	; 0x0
         89948:	85850270 	strhi	r0, [r5, #624]
         8994c:	e5950234 	ldr	r0, [r5, #564]
         89950:	e3500000 	cmp	r0, #0	; 0x0
         89954:	b3a00000 	movlt	r0, #0	; 0x0
         89958:	b5850234 	strlt	r0, [r5, #564]
         8995c:	e5950268 	ldr	r0, [r5, #616]
         89960:	e3500000 	cmp	r0, #0	; 0x0
         89964:	b3a00000 	movlt	r0, #0	; 0x0
         89968:	b5850268 	strlt	r0, [r5, #616]
         8996c:	e595026c 	ldr	r0, [r5, #620]
         89970:	e3500000 	cmp	r0, #0	; 0x0
         89974:	b3a00000 	movlt	r0, #0	; 0x0
         89978:	b585026c 	strlt	r0, [r5, #620]
         8997c:	e5950270 	ldr	r0, [r5, #624]
         89980:	e3500000 	cmp	r0, #0	; 0x0
         89984:	b3a00000 	movlt	r0, #0	; 0x0
         89988:	b5a50270 	strlt	r0, [r5, #624]!
         8998c:	e2888004 	add	r8, r8, #4	; 0x4
         89990:	e1580007 	cmp	r8, r7
         89994:	3afffecd 	bcc	894d0 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x1148>
         89998:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         8999c:	e5941134 	ldr	r1, [r4, #308]	; fField308
         899a0:	e1500001 	cmp	r0, r1
         899a4:	9a00000a 	bls	899d4 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x164c>
         899a8:	e594013c 	ldr	r0, [r4, #316]	; fField316
         899ac:	e5941138 	ldr	r1, [r4, #312]	; fField312
         899b0:	e1300001 	teq	r0, r1
         899b4:	0a000004 	beq	899cc <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x1644>
         899b8:	e3a01000 	mov	r1, #0	; 0x0
         899bc:	e2800001 	add	r0, r0, #1	; 0x1
         899c0:	e584013c 	str	r0, [r4, #316]	; fField316
         899c4:	e58412a4 	str	r1, [r4, #676]	; fField676
         899c8:	ea000001 	b	899d4 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x164c>
         899cc:	e3a00001 	mov	r0, #1	; 0x1
         899d0:	e5840140 	str	r0, [r4, #320]	; fField320
         899d4:	e59d1000 	ldr	r1, [sp]
         899d8:	e2810902 	add	r0, r1, #32768	; 0x8000
         899dc:	e1a00840 	mov	r0, r0, asr #16
         899e0:	e5ca0001 	strb	r0, [sl, #1]
         899e4:	e1a00440 	mov	r0, r0, asr #8
         899e8:	e4ca0002 	strb	r0, [sl], #2
         899ec:	e28dd004 	add	sp, sp, #4	; 0x4
         899f0:	e59d0128 	ldr	r0, [sp, #296]
         899f4:	e2800001 	add	r0, r0, #1	; 0x1
         899f8:	e58d0128 	str	r0, [sp, #296]
         899fc:	e59d1124 	ldr	r1, [sp, #292]
         89a00:	e1500001 	cmp	r0, r1
         89a04:	3afffea9 	bcc	894b0 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x1128>
         89a08:	e59d1124 	ldr	r1, [sp, #292]
         89a0c:	e1a00081 	mov	r0, r1, lsl #1
         89a10:	e59b200c 	ldr	r2, [fp, #12]
         89a14:	e5820000 	str	r0, [r2]
         89a18:	e3a02000 	mov	r2, #0	; 0x0
         89a1c:	e59b3010 	ldr	r3, [fp, #16]	; fField16
         89a20:	e5832000 	str	r2, [r3]
         89a24:	e59402b0 	ldr	r0, [r4, #688]	; fField688
         89a28:	e59b1014 	ldr	r1, [fp, #20]
         89a2c:	e5a1000c 	str	r0, [r1, #12]!
         89a30:	e3a00006 	mov	r0, #6	; 0x6
         89a34:	e59b1014 	ldr	r1, [fp, #20]
         89a38:	e5a10010 	str	r0, [r1, #16]!	; fField16
         89a3c:	e5b402ac 	ldr	r0, [r4, #684]!	; fField684
         89a40:	e59b1014 	ldr	r1, [fp, #20]
         89a44:	e5a10014 	str	r0, [r1, #20]!
         89a48:	e28ddf4b 	add	sp, sp, #300	; 0x12c
         89a4c:	ea000000 	b	89a54 <TDTMFCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x16cc>
         89a50:	e58d0000 	str	r0, [sp]
         89a54:	e49d0004 	ldr	r0, [sp], #4
         89a58:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TDTMFCodec::Consume(void const *, unsigned long *, unsigned long *, CodecBlock const *)
 * Address: 00089a5c
 */
TDTMFCodec::Consume(void const *, unsigned long *, unsigned long *, CodecBlock const *) {
    /*
         89a5c:	e590129c 	ldr	r1, [r0, #668]	; fField668
         89a60:	e5a012a0 	str	r1, [r0, #672]!	; fField672
         89a64:	e3a00000 	mov	r0, #0	; 0x0
         89a68:	e5830000 	str	r0, [r3]
         89a6c:	e3a00fb2 	mov	r0, #712	; 0x2c8
         89a70:	e2400b1e 	sub	r0, r0, #30720	; 0x7800
         89a74:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDTMFCodec::Start(void)
 * Address: 00089a78
 */
TDTMFCodec::Start(void) {
    /*
         89a78:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDTMFCodec::Stop(int)
 * Address: 00089a7c
 */
TDTMFCodec::Stop(int) {
    /*
         89a7c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDTMFCodec::BufferCompleted(void)
 * Address: 00089a80
 */
TDTMFCodec::BufferCompleted(void) {
    /*
         89a80:	e5900140 	ldr	r0, [r0, #320]	; fField320
         89a84:	e20000ff 	and	r0, r0, #255	; 0xff
         89a88:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ClassInfo__10TDTMFCodecSFv
 * Address: 00388fa4
 */
void TDTMFCodec::ClassInfo() {
    /*
        388fa4:	e24f0044 	sub	r0, pc, #68	; 0x44
        388fa8:	e1a0f00e 	mov	pc, lr
        388fac:	e3a00000 	mov	r0, #0	; 0x0
        388fb0:	e1a0f00e 	mov	pc, lr
        388fb4:	5444544d 	strplb	r5, [r4], -#1101
        388fb8:	46436f64 	strmib	r6, [r3], -r4, ror #30
        388fbc:	65630054 	strvsb	r0, [r3, -#84]!
        388fc0:	536f756e 	cmnpl	pc, #461373440	; 0x1b800000
        388fc4:	64436f64 	strvsb	r6, [r3], -#3940
        388fc8:	65630000 	strvsb	r0, [r3]!
        388fcc:	00000000 	andeq	r0, r0, r0
        388fd0:	eafffff3 	b	388fa4 <ClassInfo__10TDTMFCodecSFv>
        388fd4:	ea5fcb7a 	b	1b7bdc4 <TDTMFCodec::$New(void)>
        388fd8:	ea5fcb7a 	b	1b7bdc8 <TDTMFCodec::$Delete(void)>
        388fdc:	ea5fcb7a 	b	1b7bdcc <TDTMFCodec::$Init(CodecBlock *)>
        388fe0:	ea5fcb7a 	b	1b7bdd0 <TDTMFCodec::$Reset(CodecBlock *)>
        388fe4:	ea5fcb7a 	b	1b7bdd4 <TDTMFCodec::$Produce(void *, unsigned long *, unsigned long *, CodecBlock *)>
        388fe8:	ea5fcb7a 	b	1b7bdd8 <TDTMFCodec::$Consume(void const *, unsigned long *, unsigned long *, CodecBlock const *)>
        388fec:	ea5fcb7a 	b	1b7bddc <TDTMFCodec::$Start(void)>
        388ff0:	ea5fcb7a 	b	1b7bde0 <TDTMFCodec::$Stop(int)>
        388ff4:	ea5fcb7a 	b	1b7bde4 <TDTMFCodec::$BufferCompleted(void)>
        388ff8:	00000000 	andeq	r0, r0, r0
        388ffc:	00000048 	andeq	r0, r0, r8, asr #32
        389000:	0000004e 	andeq	r0, r0, lr, asr #32
        389004:	00000056 	andeq	r0, r0, r6, asr r0
        389008:	00000054 	andeq	r0, r0, r4, asr r0
        38900c:	0000007c 	andeq	r0, r0, ip, ror r0
        389010:	ea5fcb77 	b	1b7bdf4 <$Sizeof__9TGSMCodecSFv>
        38901c:	ea5fcb75 	b	1b7bdf8 <TGSMCodec::$New(void)>
        389020:	ea5fcb75 	b	1b7bdfc <TGSMCodec::$Delete(void)>
        389030:	ea000001 	b	38903c <ClassInfo__9TGSMCodecSFv+0x8>
    */
}

