#include "include/TICache.h"

/**
 * Symbol: TICache::__ct(long)
 * Address: 002ff53c
 */
TICache::TICache(long) {
    /*
        2ff53c:	e1a0c00d 	mov	ip, sp
        2ff540:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2ff544:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ff548:	e1b04000 	movs	r4, r0
        2ff54c:	e1a05001 	mov	r5, r1
        2ff550:	1a000005 	bne	2ff56c <TICache::__ct(long)+0x30>
        2ff554:	e3a00010 	mov	r0, #16	; 0x10
        2ff558:	eb633c76 	bl	1bce738 <$__nw(unsigned int)>
        2ff55c:	e1b04000 	movs	r4, r0
        2ff560:	1a000001 	bne	2ff56c <TICache::__ct(long)+0x30>
        2ff564:	e1a00004 	mov	r0, r4
        2ff568:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2ff56c:	e3a00001 	mov	r0, #1	; 0x1
        2ff570:	e1a00510 	mov	r0, r0, lsl r5
        2ff574:	e2651020 	rsb	r1, r5, #32	; 0x20
        2ff578:	e9840003 	stmib	r4, {r0, r1}
        2ff57c:	e3e01000 	mvn	r1, #0	; 0x0
        2ff580:	e1e01511 	mvn	r1, r1, lsl r5
        2ff584:	e0800100 	add	r0, r0, r0, lsl #2
        2ff588:	e1a00100 	mov	r0, r0, lsl #2
        2ff58c:	e584100c 	str	r1, [r4, #12]	; fField12
        2ff590:	eb633c68 	bl	1bce738 <$__nw(unsigned int)>
        2ff594:	e5840000 	str	r0, [r4]
        2ff598:	e3300000 	teq	r0, #0	; 0x0
        2ff59c:	1a000005 	bne	2ff5b8 <TICache::__ct(long)+0x7c>
        2ff5a0:	e59f002c 	ldr	r0, [pc, #2c]	; 2ff5d4 <TICache::__ct(long)+0x98>
        2ff5a4:	e5900000 	ldr	r0, [r0]
        2ff5a8:	e3a02000 	mov	r2, #0	; 0x0
        2ff5ac:	e3a010e9 	mov	r1, #233	; 0xe9
        2ff5b0:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        2ff5b4:	eb638ef8 	bl	1be319c <$Throw>
        2ff5b8:	e1a00004 	mov	r0, r4
        2ff5bc:	eb5d48ce 	bl	1a518fc <TICache::$Clear(void)>
        2ff5c0:	e59f2010 	ldr	r2, [pc, #10]	; 2ff5d8 <TICache::__ct(long)+0x9c>
        2ff5c4:	e59f1010 	ldr	r1, [pc, #10]	; 2ff5dc <TICache::__ct(long)+0xa0>
        2ff5c8:	e1a00004 	mov	r0, r4
        2ff5cc:	eb630efc 	bl	1bc31c4 <$DIYGCRegister__FPvPFPv_vT2>
        2ff5d0:	eaffffe3 	b	2ff564 <TICache::__ct(long)+0x28>
        2ff5d4:	00371318 	eoreqs	r1, r7, r8, lsl r3
        2ff5d8:	01a52930 	moveq	r2, r0, lsr r9
        2ff5dc:	01a5292c 	moveq	r2, ip, lsr #18
    */
}

/**
 * Symbol: TICache::__dt(void)
 * Address: 002ff5e0
 */
TICache::~TICache(void) {
    /*
        2ff5e0:	e1a0c00d 	mov	ip, sp
        2ff5e4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2ff5e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ff5ec:	e1a04000 	mov	r4, r0
        2ff5f0:	e1a05001 	mov	r5, r1
        2ff5f4:	e5900000 	ldr	r0, [r0]
        2ff5f8:	eb633838 	bl	1bcd6e0 <$__dl(void *)>
        2ff5fc:	e1a00004 	mov	r0, r4
        2ff600:	eb630ef0 	bl	1bc31c8 <$DIYGCUnregister(void *)>
        2ff604:	e3150001 	tst	r5, #1	; 0x1
        2ff608:	11a00004 	movne	r0, r4
        2ff60c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        2ff610:	1a633832 	bne	1bcd6e0 <$__dl(void *)>
        2ff614:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TICache::ClearSymbol(long, long)
 * Address: 002ff650
 */
TICache::ClearSymbol(long, long) {
    /*
        2ff650:	e1a0c00d 	mov	ip, sp
        2ff654:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2ff658:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ff65c:	e1a04000 	mov	r4, r0
        2ff660:	e1a06001 	mov	r6, r1
        2ff664:	e1a05002 	mov	r5, r2
        2ff668:	e3a07000 	mov	r7, #0	; 0x0
        2ff66c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2ff670:	e3500000 	cmp	r0, #0	; 0x0
        2ff674:	d91babf0 	ldmledb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2ff678:	e3a09000 	mov	r9, #0	; 0x0
        2ff67c:	e0871107 	add	r1, r7, r7, lsl #2
        2ff680:	e5940000 	ldr	r0, [r4]
        2ff684:	e0808101 	add	r8, r0, r1, lsl #2
        2ff688:	e5980000 	ldr	r0, [r8]
        2ff68c:	e3300000 	teq	r0, #0	; 0x0
        2ff690:	0a000008 	beq	2ff6b8 <TICache::ClearSymbol(long, long)+0x68>
        2ff694:	e5980008 	ldr	r0, [r8, #8]	; fField8
        2ff698:	e1300005 	teq	r0, r5
        2ff69c:	1a000005 	bne	2ff6b8 <TICache::ClearSymbol(long, long)+0x68>
        2ff6a0:	e1a02005 	mov	r2, r5
        2ff6a4:	e1a01006 	mov	r1, r6
        2ff6a8:	e5980004 	ldr	r0, [r8, #4]	; fField4
        2ff6ac:	eb5d656b 	bl	1a58c60 <$UnsafeSymbolEqual__FlT1Ul>
        2ff6b0:	e3300000 	teq	r0, #0	; 0x0
        2ff6b4:	15889000 	strne	r9, [r8]
        2ff6b8:	e2877001 	add	r7, r7, #1	; 0x1
        2ff6bc:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2ff6c0:	e1500007 	cmp	r0, r7
        2ff6c4:	caffffec 	bgt	2ff67c <TICache::ClearSymbol(long, long)+0x2c>
        2ff6c8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TICache::ClearFrame(long)
 * Address: 002ff71c
 */
TICache::ClearFrame(long) {
    /*
        2ff71c:	e1a0c00d 	mov	ip, sp
        2ff720:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2ff724:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ff728:	e1a04000 	mov	r4, r0
        2ff72c:	e1a05001 	mov	r5, r1
        2ff730:	e1a00001 	mov	r0, r1
        2ff734:	eb5d611b 	bl	1a57ba8 <$SetupListEQ(long)>
        2ff738:	e1a08000 	mov	r8, r0
        2ff73c:	e3a06000 	mov	r6, #0	; 0x0
        2ff740:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2ff744:	e3500000 	cmp	r0, #0	; 0x0
        2ff748:	d91babf0 	ldmledb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2ff74c:	e3a09000 	mov	r9, #0	; 0x0
        2ff750:	e0861106 	add	r1, r6, r6, lsl #2
        2ff754:	e5940000 	ldr	r0, [r4]
        2ff758:	e0807101 	add	r7, r0, r1, lsl #2
        2ff75c:	e5970000 	ldr	r0, [r7]
        2ff760:	e3300000 	teq	r0, #0	; 0x0
        2ff764:	0a000005 	beq	2ff780 <TICache::ClearFrame(long)+0x64>
        2ff768:	e1a02008 	mov	r2, r8
        2ff76c:	e1a01005 	mov	r1, r5
        2ff770:	e597000c 	ldr	r0, [r7, #12]	; fField12
        2ff774:	eb5d58da 	bl	1a55ae4 <$ListEQ__FlT1Pc>
        2ff778:	e3300000 	teq	r0, #0	; 0x0
        2ff77c:	15879000 	strne	r9, [r7]
        2ff780:	e2866001 	add	r6, r6, #1	; 0x1
        2ff784:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2ff788:	e1500006 	cmp	r0, r6
        2ff78c:	caffffef 	bgt	2ff750 <TICache::ClearFrame(long)+0x34>
        2ff790:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: DIYMarkTICache__7TICacheSFPv
 * Address: 00300610
 */
void TICache::DIYMarkTICache() {
    /*
        300610:	ea5d5539 	b	1a55afc <TICache::$Mark(void)>
    */
}

/**
 * Symbol: TICache::Mark(void)
 * Address: 00301300
 */
TICache::Mark(void) {
    /*
        301300:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: DIYUpdateTICache__7TICacheSFPv
 * Address: 00301304
 */
void TICache::DIYUpdateTICache() {
    /*
        301304:	ea5d5e56 	b	1a58c64 <TICache::$Update(void)>
    */
}

/**
 * Symbol: TICache::Update(void)
 * Address: 00301308
 */
TICache::Update(void) {
    /*
        301308:	e1a0c00d 	mov	ip, sp
        30130c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        301310:	e24cb004 	sub	fp, ip, #4	; 0x4
        301314:	e1a04000 	mov	r4, r0
        301318:	e3a06000 	mov	r6, #0	; 0x0
        30131c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        301320:	e3500000 	cmp	r0, #0	; 0x0
        301324:	d91ba8f0 	ldmledb	fp, {r4, r5, r6, r7, fp, sp, pc}
        301328:	e3a07000 	mov	r7, #0	; 0x0
        30132c:	e0860106 	add	r0, r6, r6, lsl #2
        301330:	e5941000 	ldr	r1, [r4]
        301334:	e0815100 	add	r5, r1, r0, lsl #2
        301338:	e5950000 	ldr	r0, [r5]
        30133c:	e3300000 	teq	r0, #0	; 0x0
        301340:	0a00000d 	beq	30137c <TICache::Update(void)+0x74>
        301344:	eb6307a0 	bl	1bc31cc <$DIYGCUpdate(long)>
        301348:	e5850000 	str	r0, [r5]
        30134c:	e3300002 	teq	r0, #2	; 0x2
        301350:	05857000 	streq	r7, [r5]
        301354:	e5950004 	ldr	r0, [r5, #4]	; fField4
        301358:	eb63079b 	bl	1bc31cc <$DIYGCUpdate(long)>
        30135c:	e5850004 	str	r0, [r5, #4]	; fField4
        301360:	e3300002 	teq	r0, #2	; 0x2
        301364:	05857000 	streq	r7, [r5]
        301368:	e595000c 	ldr	r0, [r5, #12]	; fField12
        30136c:	eb630796 	bl	1bc31cc <$DIYGCUpdate(long)>
        301370:	e585000c 	str	r0, [r5, #12]	; fField12
        301374:	e3300002 	teq	r0, #2	; 0x2
        301378:	05857000 	streq	r7, [r5]
        30137c:	e2866001 	add	r6, r6, #1	; 0x1
        301380:	e5940004 	ldr	r0, [r4, #4]	; fField4
        301384:	e1500006 	cmp	r0, r6
        301388:	caffffe7 	bgt	30132c <TICache::Update(void)+0x24>
        30138c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TICache::Lookup(long, long, long *, long *, long *, long *)
 * Address: 00301390
 */
TICache::Lookup(long, long, long *, long *, long *, long *) {
    /*
        301390:	e1a0c00d 	mov	ip, sp
        301394:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        301398:	e24cb004 	sub	fp, ip, #4	; 0x4
        30139c:	e1a04002 	mov	r4, r2
        3013a0:	e1a05003 	mov	r5, r3
        3013a4:	e28ba008 	add	sl, fp, #8	; 0x8
        3013a8:	e89a0500 	ldmia	sl, {r8, sl}
        3013ac:	e59b9004 	ldr	r9, [fp, #4]	; fField4
        3013b0:	e592700b 	ldr	r7, [r2, #11]
        3013b4:	e590200c 	ldr	r2, [r0, #12]	; fField12
        3013b8:	e0023241 	and	r3, r2, r1, asr #4
        3013bc:	e5902008 	ldr	r2, [r0, #8]	; fField8
        3013c0:	e0232237 	eor	r2, r3, r7, lsr r2
        3013c4:	e0822102 	add	r2, r2, r2, lsl #2
        3013c8:	e5900000 	ldr	r0, [r0]
        3013cc:	e0806102 	add	r6, r0, r2, lsl #2
        3013d0:	e5960008 	ldr	r0, [r6, #8]	; fField8
        3013d4:	e1300007 	teq	r0, r7
        3013d8:	1a000021 	bne	301464 <TICache::Lookup(long, long, long *, long *, long *, long *)+0xd4>
        3013dc:	e5960000 	ldr	r0, [r6]
        3013e0:	e3300000 	teq	r0, #0	; 0x0
        3013e4:	0a00001e 	beq	301464 <TICache::Lookup(long, long, long *, long *, long *, long *)+0xd4>
        3013e8:	eb630b90 	bl	1bc4230 <$EQRef__FlT1>
        3013ec:	e3300000 	teq	r0, #0	; 0x0
        3013f0:	0a00001b 	beq	301464 <TICache::Lookup(long, long, long *, long *, long *, long *)+0xd4>
        3013f4:	e1a02007 	mov	r2, r7
        3013f8:	e1a01004 	mov	r1, r4
        3013fc:	e5960004 	ldr	r0, [r6, #4]	; fField4
        301400:	eb5d5e16 	bl	1a58c60 <$UnsafeSymbolEqual__FlT1Ul>
        301404:	e3300000 	teq	r0, #0	; 0x0
        301408:	0a000015 	beq	301464 <TICache::Lookup(long, long, long *, long *, long *, long *)+0xd4>
        30140c:	e3a04001 	mov	r4, #1	; 0x1
        301410:	e596000c 	ldr	r0, [r6, #12]	; fField12
        301414:	e3300000 	teq	r0, #0	; 0x0
        301418:	0a00000b 	beq	30144c <TICache::Lookup(long, long, long *, long *, long *, long *)+0xbc>
        30141c:	e5884000 	str	r4, [r8]
        301420:	e596000c 	ldr	r0, [r6, #12]	; fField12
        301424:	e5850000 	str	r0, [r5]
        301428:	e286500c 	add	r5, r6, #12	; 0xc
        30142c:	e8950021 	ldmia	r5, {r0, r5}
        301430:	eb630faf 	bl	1bc52f4 <$ObjectPtr(long)>
        301434:	e0800105 	add	r0, r0, r5, lsl #2
        301438:	e590000c 	ldr	r0, [r0, #12]	; fField12
        30143c:	e5890000 	str	r0, [r9]
        301440:	e5b60010 	ldr	r0, [r6, #16]!
        301444:	e58a0000 	str	r0, [sl]
        301448:	ea000003 	b	30145c <TICache::Lookup(long, long, long *, long *, long *, long *)+0xcc>
        30144c:	e3a00000 	mov	r0, #0	; 0x0
        301450:	e5880000 	str	r0, [r8]
        301454:	e3a00002 	mov	r0, #2	; 0x2
        301458:	e5890000 	str	r0, [r9]
        30145c:	e1a00004 	mov	r0, r4
        301460:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        301464:	e3a00000 	mov	r0, #0	; 0x0
        301468:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TICache::LookupValue(long, long, long *, long *)
 * Address: 0030146c
 */
TICache::LookupValue(long, long, long *, long *) {
    /*
        30146c:	e1a0c00d 	mov	ip, sp
        301470:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        301474:	e24cb004 	sub	fp, ip, #4	; 0x4
        301478:	e1a05002 	mov	r5, r2
        30147c:	e1a04003 	mov	r4, r3
        301480:	e59b8004 	ldr	r8, [fp, #4]	; fField4
        301484:	e592700b 	ldr	r7, [r2, #11]
        301488:	e590200c 	ldr	r2, [r0, #12]	; fField12
        30148c:	e0023241 	and	r3, r2, r1, asr #4
        301490:	e5902008 	ldr	r2, [r0, #8]	; fField8
        301494:	e0232237 	eor	r2, r3, r7, lsr r2
        301498:	e0822102 	add	r2, r2, r2, lsl #2
        30149c:	e5900000 	ldr	r0, [r0]
        3014a0:	e0806102 	add	r6, r0, r2, lsl #2
        3014a4:	e3a09000 	mov	r9, #0	; 0x0
        3014a8:	e5960008 	ldr	r0, [r6, #8]	; fField8
        3014ac:	e1300007 	teq	r0, r7
        3014b0:	1a00001a 	bne	301520 <TICache::LookupValue(long, long, long *, long *)+0xb4>
        3014b4:	e5960000 	ldr	r0, [r6]
        3014b8:	e3300000 	teq	r0, #0	; 0x0
        3014bc:	0a000017 	beq	301520 <TICache::LookupValue(long, long, long *, long *)+0xb4>
        3014c0:	eb630b5a 	bl	1bc4230 <$EQRef__FlT1>
        3014c4:	e3300000 	teq	r0, #0	; 0x0
        3014c8:	0a000014 	beq	301520 <TICache::LookupValue(long, long, long *, long *)+0xb4>
        3014cc:	e1a02007 	mov	r2, r7
        3014d0:	e1a01005 	mov	r1, r5
        3014d4:	e5960004 	ldr	r0, [r6, #4]	; fField4
        3014d8:	eb5d5de0 	bl	1a58c60 <$UnsafeSymbolEqual__FlT1Ul>
        3014dc:	e3300000 	teq	r0, #0	; 0x0
        3014e0:	0a00000e 	beq	301520 <TICache::LookupValue(long, long, long *, long *)+0xb4>
        3014e4:	e3a05001 	mov	r5, #1	; 0x1
        3014e8:	e596000c 	ldr	r0, [r6, #12]	; fField12
        3014ec:	e3300000 	teq	r0, #0	; 0x0
        3014f0:	03a00002 	moveq	r0, #2	; 0x2
        3014f4:	05889000 	streq	r9, [r8]
        3014f8:	0a000005 	beq	301514 <TICache::LookupValue(long, long, long *, long *)+0xa8>
        3014fc:	e5885000 	str	r5, [r8]
        301500:	e286600c 	add	r6, r6, #12	; 0xc
        301504:	e8960041 	ldmia	r6, {r0, r6}
        301508:	eb630f79 	bl	1bc52f4 <$ObjectPtr(long)>
        30150c:	e0800106 	add	r0, r0, r6, lsl #2
        301510:	e590000c 	ldr	r0, [r0, #12]	; fField12
        301514:	e5840000 	str	r0, [r4]
        301518:	e1a00005 	mov	r0, r5
        30151c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        301520:	e1a00009 	mov	r0, r9
        301524:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TICache::Insert(long, long, long, long)
 * Address: 00301528
 */
TICache::Insert(long, long, long, long) {
    /*
        301528:	e1a0c00d 	mov	ip, sp
        30152c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        301530:	e24cb004 	sub	fp, ip, #4	; 0x4
        301534:	e1a05000 	mov	r5, r0
        301538:	e1a04001 	mov	r4, r1
        30153c:	e1a06002 	mov	r6, r2
        301540:	e1a07003 	mov	r7, r3
        301544:	e1a00001 	mov	r0, r1
        301548:	e59b8004 	ldr	r8, [fp, #4]	; fField4
        30154c:	eb630f4d 	bl	1bc5288 <$IsFaultBlock(long)>
        301550:	e3300000 	teq	r0, #0	; 0x0
        301554:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        301558:	e596000b 	ldr	r0, [r6, #11]
        30155c:	e595100c 	ldr	r1, [r5, #12]	; fField12
        301560:	e0012244 	and	r2, r1, r4, asr #4
        301564:	e5951008 	ldr	r1, [r5, #8]	; fField8
        301568:	e0221130 	eor	r1, r2, r0, lsr r1
        30156c:	e0811101 	add	r1, r1, r1, lsl #2
        301570:	e5952000 	ldr	r2, [r5]
        301574:	e0821101 	add	r1, r2, r1, lsl #2
        301578:	e8a10050 	stmia	r1!, {r4, r6}
        30157c:	e8810181 	stmia	r1, {r0, r7, r8}
        301580:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TICache::Clear(void)
 * Address: 00301584
 */
TICache::Clear(void) {
    /*
        301584:	e3a01000 	mov	r1, #0	; 0x0
        301588:	e5902004 	ldr	r2, [r0, #4]	; fField4
        30158c:	e3520000 	cmp	r2, #0	; 0x0
        301590:	d1a0f00e 	movle	pc, lr
        301594:	e3a02000 	mov	r2, #0	; 0x0
        301598:	e081c101 	add	ip, r1, r1, lsl #2
        30159c:	e5903000 	ldr	r3, [r0]
        3015a0:	e783210c 	str	r2, [r3, ip, lsl #2]
        3015a4:	e2811001 	add	r1, r1, #1	; 0x1
        3015a8:	e5903004 	ldr	r3, [r0, #4]	; fField4
        3015ac:	e1530001 	cmp	r3, r1
        3015b0:	cafffff8 	bgt	301598 <TICache::Clear(void)+0x14>
        3015b4:	e1a0f00e 	mov	pc, lr
    */
}

