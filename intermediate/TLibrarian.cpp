#include "include/TLibrarian.h"

/**
 * Symbol: TLibrarian::ClassID( const(void))
 * Address: 001082f8
 */
TLibrarian::ClassID( const(void)) {
    /*
        1082f8:	e3a00068 	mov	r0, #104	; 0x68
        1082fc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLibrarian::DerivedFrom( const(long))
 * Address: 00108300
 */
TLibrarian::DerivedFrom( const(long)) {
    /*
        108300:	e1a0c00d 	mov	ip, sp
        108304:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        108308:	e24cb004 	sub	fp, ip, #4	; 0x4
        10830c:	e3310068 	teq	r1, #104	; 0x68
        108310:	0a000002 	beq	108320 <TLibrarian::DerivedFrom( const(long))+0x20>
        108314:	eb028410 	bl	1a935c <TResponder::DerivedFrom( const(long))>
        108318:	e3300000 	teq	r0, #0	; 0x0
        10831c:	0a000001 	beq	108328 <TLibrarian::DerivedFrom( const(long))+0x28>
        108320:	e3a00001 	mov	r0, #1	; 0x1
        108324:	ea000000 	b	10832c <TLibrarian::DerivedFrom( const(long))+0x2c>
        108328:	e3a00000 	mov	r0, #0	; 0x0
        10832c:	e20000ff 	and	r0, r0, #255	; 0xff
        108330:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TLibrarian::BookRemoved(RefVar const &)
 * Address: 00108358
 */
TLibrarian::BookRemoved(RefVar const &) {
    /*
        108358:	e1a0c00d 	mov	ip, sp
        10835c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        108360:	e24cb004 	sub	fp, ip, #4	; 0x4
        108364:	e1a05000 	mov	r5, r0
        108368:	e1a04001 	mov	r4, r1
        10836c:	e24dd014 	sub	sp, sp, #20	; 0x14
        108370:	e3a00002 	mov	r0, #2	; 0x2
        108374:	eb6ae774 	bl	1bc214c <$AllocateRefHandle(long)>
        108378:	e58d0008 	str	r0, [sp, #8]	; fField8
        10837c:	e3a00002 	mov	r0, #2	; 0x2
        108380:	eb6ae771 	bl	1bc214c <$AllocateRefHandle(long)>
        108384:	e1a09000 	mov	r9, r0
        108388:	e3a00002 	mov	r0, #2	; 0x2
        10838c:	eb6ae76e 	bl	1bc214c <$AllocateRefHandle(long)>
        108390:	e58d0004 	str	r0, [sp, #4]	; fField4
        108394:	e3a00002 	mov	r0, #2	; 0x2
        108398:	eb6ae76b 	bl	1bc214c <$AllocateRefHandle(long)>
        10839c:	e58d0000 	str	r0, [sp]
        1083a0:	e59f6068 	ldr	r6, [pc, #68]	; 108410 <TLibrarian::BookRemoved(RefVar const &)+0xb8>
        1083a4:	e5960000 	ldr	r0, [r6]
        1083a8:	e5901000 	ldr	r1, [r0]
        1083ac:	e5940000 	ldr	r0, [r4]
        1083b0:	e5900000 	ldr	r0, [r0]
        1083b4:	eb6aefa9 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        1083b8:	e59d1000 	ldr	r1, [sp]
        1083bc:	e5810000 	str	r0, [r1]
        1083c0:	e1a0100d 	mov	r1, sp
        1083c4:	e1a00005 	mov	r0, r5
        1083c8:	eb670c7d 	bl	1acb5c4 <TLibrarian::$GetLibraryEntry(RefVar const &)>
        1083cc:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        1083d0:	e3a08000 	mov	r8, #0	; 0x0
        1083d4:	e5810000 	str	r0, [r1]
        1083d8:	e3300002 	teq	r0, #2	; 0x2
        1083dc:	1a00000c 	bne	108414 <TLibrarian::BookRemoved(RefVar const &)+0xbc>
        1083e0:	e3a040e8 	mov	r4, #232	; 0xe8
        1083e4:	e2444b0a 	sub	r4, r4, #10240	; 0x2800
        1083e8:	e59d0000 	ldr	r0, [sp]
        1083ec:	eb6aeb72 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1083f0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1083f4:	eb6aeb70 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1083f8:	e1a00009 	mov	r0, r9
        1083fc:	eb6aeb6e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        108400:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        108404:	eb6aeb6c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        108408:	e1a00004 	mov	r0, r4
        10840c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        108410:	00683308 	rsbeq	r3, r8, r8, lsl #6
        108414:	e24dd004 	sub	sp, sp, #4	; 0x4
        108418:	e59f0404 	ldr	r0, [pc, #404]	; 108824 <TLibrarian::BookRemoved(RefVar const &)+0x4cc>
        10841c:	e5900000 	ldr	r0, [r0]
        108420:	e5901000 	ldr	r1, [r0]
        108424:	e5940000 	ldr	r0, [r4]
        108428:	e5900000 	ldr	r0, [r0]
        10842c:	eb6aef8b 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        108430:	eb6ae745 	bl	1bc214c <$AllocateRefHandle(long)>
        108434:	e58d0000 	str	r0, [sp]
        108438:	e5900000 	ldr	r0, [r0]
        10843c:	e3300002 	teq	r0, #2	; 0x2
        108440:	0a000010 	beq	108488 <TLibrarian::BookRemoved(RefVar const &)+0x130>
        108444:	e24dd004 	sub	sp, sp, #4	; 0x4
        108448:	e3a00001 	mov	r0, #1	; 0x1
        10844c:	eb664e52 	bl	1a9bd9c <$MakeArray(long)>
        108450:	eb6ae73d 	bl	1bc214c <$AllocateRefHandle(long)>
        108454:	e58d0000 	str	r0, [sp]
        108458:	e5940000 	ldr	r0, [r4]
        10845c:	e1a01008 	mov	r1, r8
        108460:	e5902000 	ldr	r2, [r0]
        108464:	e59d0000 	ldr	r0, [sp]
        108468:	e5900000 	ldr	r0, [r0]
        10846c:	eb6af7b9 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        108470:	e1a0100d 	mov	r1, sp
        108474:	e28d0004 	add	r0, sp, #4	; 0x4
        108478:	eb6aeb54 	bl	1bc31d0 <$DoBlock__FRC6RefVarT1>
        10847c:	e59d0000 	ldr	r0, [sp]
        108480:	eb6aeb4d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        108484:	e28dd004 	add	sp, sp, #4	; 0x4
        108488:	e24dd008 	sub	sp, sp, #8	; 0x8
        10848c:	e59f0394 	ldr	r0, [pc, #394]	; 108828 <TLibrarian::BookRemoved(RefVar const &)+0x4d0>
        108490:	e58d001c 	str	r0, [sp, #28]
        108494:	e5900000 	ldr	r0, [r0]
        108498:	e2800024 	add	r0, r0, #36	; 0x24
        10849c:	e59f1388 	ldr	r1, [pc, #388]	; 10882c <TLibrarian::BookRemoved(RefVar const &)+0x4d4>
        1084a0:	e3a03000 	mov	r3, #0	; 0x0
        1084a4:	e3a02000 	mov	r2, #0	; 0x0
        1084a8:	e58d1018 	str	r1, [sp, #24]
        1084ac:	eb6aef70 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        1084b0:	eb6ae725 	bl	1bc214c <$AllocateRefHandle(long)>
        1084b4:	e58d0004 	str	r0, [sp, #4]	; fField4
        1084b8:	e51f10b0 	ldr	r1, [pc, #ffffff50]	; 108410 <TLibrarian::BookRemoved(RefVar const &)+0xb8>
        1084bc:	e5910000 	ldr	r0, [r1]
        1084c0:	e5901000 	ldr	r1, [r0]
        1084c4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1084c8:	e5900000 	ldr	r0, [r0]
        1084cc:	eb6aef63 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        1084d0:	eb6ae71d 	bl	1bc214c <$AllocateRefHandle(long)>
        1084d4:	e40d000c 	str	r0, [sp], -#12
        1084d8:	e59d000c 	ldr	r0, [sp, #12]
        1084dc:	e5900000 	ldr	r0, [r0]
        1084e0:	e3a07002 	mov	r7, #2	; 0x2
        1084e4:	e3300002 	teq	r0, #2	; 0x2
        1084e8:	0a00001a 	beq	108558 <TLibrarian::BookRemoved(RefVar const &)+0x200>
        1084ec:	e24dd008 	sub	sp, sp, #8	; 0x8
        1084f0:	e51f10e8 	ldr	r1, [pc, #ffffff18]	; 108410 <TLibrarian::BookRemoved(RefVar const &)+0xb8>
        1084f4:	e5910000 	ldr	r0, [r1]
        1084f8:	e5901000 	ldr	r1, [r0]
        1084fc:	e59d0018 	ldr	r0, [sp, #24]
        108500:	e5900000 	ldr	r0, [r0]
        108504:	eb6aef55 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        108508:	eb6ae70f 	bl	1bc214c <$AllocateRefHandle(long)>
        10850c:	e58d0000 	str	r0, [sp]
        108510:	e1a0600d 	mov	r6, sp
        108514:	e1a00007 	mov	r0, r7
        108518:	eb6ae70b 	bl	1bc214c <$AllocateRefHandle(long)>
        10851c:	e58d0004 	str	r0, [sp, #4]	; fField4
        108520:	e28d0004 	add	r0, sp, #4	; 0x4
        108524:	e28d2020 	add	r2, sp, #32	; 0x20
        108528:	e1a01006 	mov	r1, r6
        10852c:	eb6ba4f2 	bl	1bf18fc <$FStrEqual__FRC6RefVarN21>
        108530:	e2506002 	subs	r6, r0, #2	; 0x2
        108534:	13a06001 	movne	r6, #1	; 0x1
        108538:	e59d0000 	ldr	r0, [sp]
        10853c:	eb6aeb1e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        108540:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        108544:	eb6aeb1c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        108548:	e3360000 	teq	r6, #0	; 0x0
        10854c:	128d0018 	addne	r0, sp, #24	; 0x18
        108550:	1b67355b 	blne	1ad5ac4 <$FCloseX>
        108554:	e28dd008 	add	sp, sp, #8	; 0x8
        108558:	e28d1018 	add	r1, sp, #24	; 0x18
        10855c:	e1a00005 	mov	r0, r5
        108560:	eb666b25 	bl	1aa31fc <TLibrarian::$StrRefToSymbol(RefVar const &)>
        108564:	eb6ae6f8 	bl	1bc214c <$AllocateRefHandle(long)>
        108568:	e58d0000 	str	r0, [sp]
        10856c:	e1a0100d 	mov	r1, sp
        108570:	e2850004 	add	r0, r5, #4	; 0x4
        108574:	eb6af76a 	bl	1bc6324 <$RemoveSlot__FRC6RefVarT1>
        108578:	e59d0000 	ldr	r0, [sp]
        10857c:	eb6aeb0e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        108580:	e1a00008 	mov	r0, r8
        108584:	eb6ae6f0 	bl	1bc214c <$AllocateRefHandle(long)>
        108588:	e58d0004 	str	r0, [sp, #4]	; fField4
        10858c:	e28d2004 	add	r2, sp, #4	; 0x4
        108590:	e59f1298 	ldr	r1, [pc, #298]	; 108830 <TLibrarian::BookRemoved(RefVar const &)+0x4d8>
        108594:	e28d0020 	add	r0, sp, #32	; 0x20
        108598:	eb6af772 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10859c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1085a0:	eb6aeb05 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1085a4:	e3a00002 	mov	r0, #2	; 0x2
        1085a8:	eb6ae6e7 	bl	1bc214c <$AllocateRefHandle(long)>
        1085ac:	e58d0008 	str	r0, [sp, #8]	; fField8
        1085b0:	e28d2008 	add	r2, sp, #8	; 0x8
        1085b4:	e59f1278 	ldr	r1, [pc, #278]	; 108834 <TLibrarian::BookRemoved(RefVar const &)+0x4dc>
        1085b8:	e28d0020 	add	r0, sp, #32	; 0x20
        1085bc:	eb6af769 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1085c0:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        1085c4:	eb6aeafc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1085c8:	e28d0020 	add	r0, sp, #32	; 0x20
        1085cc:	eb6aeb07 	bl	1bc31f0 <$EntryChange(RefVar const &)>
        1085d0:	e59f6260 	ldr	r6, [pc, #260]	; 108838 <TLibrarian::BookRemoved(RefVar const &)+0x4e0>
        1085d4:	e5960000 	ldr	r0, [r6]
        1085d8:	e5901000 	ldr	r1, [r0]
        1085dc:	e5940000 	ldr	r0, [r4]
        1085e0:	e5900000 	ldr	r0, [r0]
        1085e4:	eb6aef17 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        1085e8:	e3300000 	teq	r0, #0	; 0x0
        1085ec:	0a000023 	beq	108680 <TLibrarian::BookRemoved(RefVar const &)+0x328>
        1085f0:	e5960000 	ldr	r0, [r6]
        1085f4:	e5901000 	ldr	r1, [r0]
        1085f8:	e5940000 	ldr	r0, [r4]
        1085fc:	e5900000 	ldr	r0, [r0]
        108600:	eb6aef16 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        108604:	eb6ae6d0 	bl	1bc214c <$AllocateRefHandle(long)>
        108608:	e1a07000 	mov	r7, r0
        10860c:	e5900000 	ldr	r0, [r0]
        108610:	eb6af325 	bl	1bc52ac <$Length(long)>
        108614:	e1a0a000 	mov	sl, r0
        108618:	e3a08000 	mov	r8, #0	; 0x0
        10861c:	e3500000 	cmp	r0, #0	; 0x0
        108620:	da000014 	ble	108678 <TLibrarian::BookRemoved(RefVar const &)+0x320>
        108624:	e24dd008 	sub	sp, sp, #8	; 0x8
        108628:	e1a01008 	mov	r1, r8
        10862c:	e5970000 	ldr	r0, [r7]
        108630:	eb6aef07 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        108634:	eb6ae6c4 	bl	1bc214c <$AllocateRefHandle(long)>
        108638:	e58d0000 	str	r0, [sp]
        10863c:	e1a0600d 	mov	r6, sp
        108640:	e3a00002 	mov	r0, #2	; 0x2
        108644:	eb6ae6c0 	bl	1bc214c <$AllocateRefHandle(long)>
        108648:	e58d0004 	str	r0, [sp, #4]	; fField4
        10864c:	e28d0004 	add	r0, sp, #4	; 0x4
        108650:	e1a01006 	mov	r1, r6
        108654:	eb6ae298 	bl	1bc10bc <$UnRegTaskTemplate__FRC6RefVarT1>
        108658:	e59d0000 	ldr	r0, [sp]
        10865c:	eb6aead6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        108660:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        108664:	eb6aead4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        108668:	e28dd008 	add	sp, sp, #8	; 0x8
        10866c:	e2888001 	add	r8, r8, #1	; 0x1
        108670:	e158000a 	cmp	r8, sl
        108674:	baffffea 	blt	108624 <TLibrarian::BookRemoved(RefVar const &)+0x2cc>
        108678:	e1a00007 	mov	r0, r7
        10867c:	eb6aeace 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        108680:	e59f01b4 	ldr	r0, [pc, #1b4]	; 10883c <TLibrarian::BookRemoved(RefVar const &)+0x4e4>
        108684:	e5900000 	ldr	r0, [r0]
        108688:	e5901000 	ldr	r1, [r0]
        10868c:	e5940000 	ldr	r0, [r4]
        108690:	e5900000 	ldr	r0, [r0]
        108694:	eb6aeef1 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        108698:	e3300002 	teq	r0, #2	; 0x2
        10869c:	1a000028 	bne	108744 <TLibrarian::BookRemoved(RefVar const &)+0x3ec>
        1086a0:	e24dd004 	sub	sp, sp, #4	; 0x4
        1086a4:	e59d002c 	ldr	r0, [sp, #44]
        1086a8:	e5900000 	ldr	r0, [r0]
        1086ac:	e2800024 	add	r0, r0, #36	; 0x24
        1086b0:	e59f1188 	ldr	r1, [pc, #188]	; 108840 <TLibrarian::BookRemoved(RefVar const &)+0x4e8>
        1086b4:	e3a03000 	mov	r3, #0	; 0x0
        1086b8:	e3a02000 	mov	r2, #0	; 0x0
        1086bc:	eb6aeeec 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        1086c0:	eb6ae6a1 	bl	1bc214c <$AllocateRefHandle(long)>
        1086c4:	e58d0000 	str	r0, [sp]
        1086c8:	e3a00001 	mov	r0, #1	; 0x1
        1086cc:	eb664db2 	bl	1a9bd9c <$MakeArray(long)>
        1086d0:	e59d1020 	ldr	r1, [sp, #32]
        1086d4:	e5810000 	str	r0, [r1]
        1086d8:	e24dd004 	sub	sp, sp, #4	; 0x4
        1086dc:	eb6ae697 	bl	1bc2140 <$AllocateFrame(void)>
        1086e0:	eb6ae699 	bl	1bc214c <$AllocateRefHandle(long)>
        1086e4:	e58d0000 	str	r0, [sp]
        1086e8:	e59f213c 	ldr	r2, [pc, #13c]	; 10882c <TLibrarian::BookRemoved(RefVar const &)+0x4d4>
        1086ec:	e59f1150 	ldr	r1, [pc, #150]	; 108844 <TLibrarian::BookRemoved(RefVar const &)+0x4ec>
        1086f0:	e1a0000d 	mov	r0, sp
        1086f4:	eb6af71b 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1086f8:	e28d2020 	add	r2, sp, #32	; 0x20
        1086fc:	e51f12f4 	ldr	r1, [pc, #fffffd0c]	; 108410 <TLibrarian::BookRemoved(RefVar const &)+0xb8>
        108700:	e1a0000d 	mov	r0, sp
        108704:	eb6af717 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        108708:	e59d0000 	ldr	r0, [sp]
        10870c:	e3a01000 	mov	r1, #0	; 0x0
        108710:	e5902000 	ldr	r2, [r0]
        108714:	e59d0024 	ldr	r0, [sp, #36]
        108718:	e5900000 	ldr	r0, [r0]
        10871c:	eb6af70d 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        108720:	e28d2024 	add	r2, sp, #36	; 0x24
        108724:	e59f111c 	ldr	r1, [pc, #11c]	; 108848 <TLibrarian::BookRemoved(RefVar const &)+0x4f0>
        108728:	e28d0004 	add	r0, sp, #4	; 0x4
        10872c:	eb6aeaa8 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
        108730:	e59d0000 	ldr	r0, [sp]
        108734:	eb6aeaa0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        108738:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        10873c:	eb6aea9e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        108740:	e28dd004 	add	sp, sp, #4	; 0x4
        108744:	e5950008 	ldr	r0, [r5, #8]	; fField8
        108748:	e2500001 	subs	r0, r0, #1	; 0x1
        10874c:	e5a50008 	str	r0, [r5, #8]!	; fField8
        108750:	e24dd008 	sub	sp, sp, #8	; 0x8
        108754:	1a00000f 	bne	108798 <TLibrarian::BookRemoved(RefVar const &)+0x440>
        108758:	e59f00ec 	ldr	r0, [pc, #ec]	; 10884c <TLibrarian::BookRemoved(RefVar const &)+0x4f4>
        10875c:	e5900000 	ldr	r0, [r0]
        108760:	eb6ae679 	bl	1bc214c <$AllocateRefHandle(long)>
        108764:	e1a04000 	mov	r4, r0
        108768:	e59f00e0 	ldr	r0, [pc, #e0]	; 108850 <TLibrarian::BookRemoved(RefVar const &)+0x4f8>
        10876c:	e5900000 	ldr	r0, [r0]
        108770:	e5901000 	ldr	r1, [r0]
        108774:	e5940000 	ldr	r0, [r4]
        108778:	eb6aeeb8 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10877c:	e59d1024 	ldr	r1, [sp, #36]
        108780:	e5810000 	str	r0, [r1]
        108784:	e1a00004 	mov	r0, r4
        108788:	eb6aea8b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10878c:	e59d102c 	ldr	r1, [sp, #44]
        108790:	e28d0024 	add	r0, sp, #36	; 0x24
        108794:	eb6bff2e 	bl	1c08454 <$ArrayRemove__FRC6RefVarT1>
        108798:	e3a00002 	mov	r0, #2	; 0x2
        10879c:	eb6ae66a 	bl	1bc214c <$AllocateRefHandle(long)>
        1087a0:	e58d0000 	str	r0, [sp]
        1087a4:	e1a0400d 	mov	r4, sp
        1087a8:	e59d0030 	ldr	r0, [sp, #48]
        1087ac:	e59d102c 	ldr	r1, [sp, #44]
        1087b0:	e5900000 	ldr	r0, [r0]
        1087b4:	eb6b0767 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        1087b8:	eb6ae663 	bl	1bc214c <$AllocateRefHandle(long)>
        1087bc:	e58d0004 	str	r0, [sp, #4]	; fField4
        1087c0:	e28d0004 	add	r0, sp, #4	; 0x4
        1087c4:	e59f1088 	ldr	r1, [pc, #88]	; 108854 <TLibrarian::BookRemoved(RefVar const &)+0x4fc>
        1087c8:	e1a02004 	mov	r2, r4
        1087cc:	eb6aea80 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
        1087d0:	e59d0000 	ldr	r0, [sp]
        1087d4:	eb6aea78 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1087d8:	e3a04000 	mov	r4, #0	; 0x0
        1087dc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1087e0:	eb6aea75 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1087e4:	e59d0014 	ldr	r0, [sp, #20]
        1087e8:	eb6aea73 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1087ec:	e59d0018 	ldr	r0, [sp, #24]
        1087f0:	eb6aea71 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1087f4:	e59d001c 	ldr	r0, [sp, #28]
        1087f8:	eb6aea6f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1087fc:	e59d0020 	ldr	r0, [sp, #32]
        108800:	eb6aea6d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        108804:	e59d0024 	ldr	r0, [sp, #36]
        108808:	eb6aea6b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10880c:	e1a00009 	mov	r0, r9
        108810:	eb6aea69 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        108814:	e59d0028 	ldr	r0, [sp, #40]
        108818:	eb6aea67 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10881c:	e1a00004 	mov	r0, r4
        108820:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        108824:	00682158 	rsbeq	r2, r8, r8, asr r1
        108828:	0c101934 	ldceq	9, cr1, [r0], -#208
        10882c:	00682638 	rsbeq	r2, r8, r8, lsr r6
        108830:	00682148 	rsbeq	r2, r8, r8, asr #2
        108834:	00683c30 	rsbeq	r3, r8, r0, lsr ip
        108838:	00681f28 	rsbeq	r1, r8, r8, lsr #30
        10883c:	00684cb0 	streqh	r4, [r8], -#192
        108840:	00682d18 	rsbeq	r2, r8, r8, lsl sp
        108844:	00681e80 	rsbeq	r1, r8, r0, lsl #29
        108848:	00682ac0 	rsbeq	r2, r8, r0, asr #21
        10884c:	0c10180c 	ldceq	8, cr1, [r0], -#48
        108850:	00682d90 	streqb	r2, [r8], -#208
        108854:	00684298 	streqb	r4, [r8], -#40
    */
}

/**
 * Symbol: TLibrarian::CheckHints(unsigned short *, char *, long)
 * Address: 001088ec
 */
TLibrarian::CheckHints(unsigned short *, char *, long) {
    /*
        1088ec:	e92d4010 	stmdb	sp!, {r4, lr}
        1088f0:	e3a0c000 	mov	ip, #0	; 0x0
        1088f4:	e3a00001 	mov	r0, #1	; 0x1
        1088f8:	e3330000 	teq	r3, #0	; 0x0
        1088fc:	08bd8010 	ldmeqia	sp!, {r4, pc}
        108900:	e791e08c 	ldr	lr, [r1, ip, lsl #1]
        108904:	e1a0e82e 	mov	lr, lr, lsr #16
        108908:	e33e0000 	teq	lr, #0	; 0x0
        10890c:	0a000004 	beq	108924 <TLibrarian::CheckHints(unsigned short *, char *, long)+0x38>
        108910:	e7d241ce 	ldrb	r4, [r2, lr, asr #3]
        108914:	e20ee007 	and	lr, lr, #7	; 0x7
        108918:	e1140e10 	tst	r4, r0, lsl lr
        10891c:	03a00000 	moveq	r0, #0	; 0x0
        108920:	08bd8010 	ldmeqia	sp!, {r4, pc}
        108924:	e28cc001 	add	ip, ip, #1	; 0x1
        108928:	e1a0c80c 	mov	ip, ip, lsl #16
        10892c:	e1a0c82c 	mov	ip, ip, lsr #16
        108930:	e2533001 	subs	r3, r3, #1	; 0x1
        108934:	1afffff1 	bne	108900 <TLibrarian::CheckHints(unsigned short *, char *, long)+0x14>
        108938:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: TLibrarian::CompareValues(RefVar const &, RefVar const &, RefVar const &)
 * Address: 0010893c
 */
TLibrarian::CompareValues(RefVar const &, RefVar const &, RefVar const &) {
    /*
        10893c:	e1a0c00d 	mov	ip, sp
        108940:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        108944:	e24cb004 	sub	fp, ip, #4	; 0x4
        108948:	ed2dc203 	sfm	f4, 1, [sp, -#12]!
        10894c:	e1a06001 	mov	r6, r1
        108950:	e1a05002 	mov	r5, r2
        108954:	e1a04003 	mov	r4, r3
        108958:	e24dd004 	sub	sp, sp, #4	; 0x4
        10895c:	e3a00002 	mov	r0, #2	; 0x2
        108960:	eb6ae5f9 	bl	1bc214c <$AllocateRefHandle(long)>
        108964:	e3a07000 	mov	r7, #0	; 0x0
        108968:	e58d0000 	str	r0, [sp]
        10896c:	e5950000 	ldr	r0, [r5]
        108970:	e5901000 	ldr	r1, [r0]
        108974:	e5960000 	ldr	r0, [r6]
        108978:	e5900000 	ldr	r0, [r0]
        10897c:	eb6aee31 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        108980:	e3300000 	teq	r0, #0	; 0x0
        108984:	0a00004b 	beq	108ab8 <TLibrarian::CompareValues(RefVar const &, RefVar const &, RefVar const &)+0x17c>
        108988:	e5950000 	ldr	r0, [r5]
        10898c:	e5901000 	ldr	r1, [r0]
        108990:	e5960000 	ldr	r0, [r6]
        108994:	e5900000 	ldr	r0, [r0]
        108998:	eb6aee30 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10899c:	e59d1000 	ldr	r1, [sp]
        1089a0:	e5810000 	str	r0, [r1]
        1089a4:	e1a0000d 	mov	r0, sp
        1089a8:	eb6ae5ee 	bl	1bc2168 <$ClassOf(RefVar const &)>
        1089ac:	eb6ae5e6 	bl	1bc214c <$AllocateRefHandle(long)>
        1089b0:	e1a05000 	mov	r5, r0
        1089b4:	e59f0064 	ldr	r0, [pc, #64]	; 108a20 <TLibrarian::CompareValues(RefVar const &, RefVar const &, RefVar const &)+0xe4>
        1089b8:	e5900000 	ldr	r0, [r0]
        1089bc:	e5901000 	ldr	r1, [r0]
        1089c0:	e5950000 	ldr	r0, [r5]
        1089c4:	eb6aee19 	bl	1bc4230 <$EQRef__FlT1>
        1089c8:	e1b06000 	movs	r6, r0
        1089cc:	13a06001 	movne	r6, #1	; 0x1
        1089d0:	e1a00005 	mov	r0, r5
        1089d4:	eb6ae9f8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1089d8:	e3360000 	teq	r6, #0	; 0x0
        1089dc:	0a000010 	beq	108a24 <TLibrarian::CompareValues(RefVar const &, RefVar const &, RefVar const &)+0xe8>
        1089e0:	e24dd004 	sub	sp, sp, #4	; 0x4
        1089e4:	e3a00002 	mov	r0, #2	; 0x2
        1089e8:	eb6ae5d7 	bl	1bc214c <$AllocateRefHandle(long)>
        1089ec:	e58d0000 	str	r0, [sp]
        1089f0:	e1a0000d 	mov	r0, sp
        1089f4:	e1a02004 	mov	r2, r4
        1089f8:	e28d1004 	add	r1, sp, #4	; 0x4
        1089fc:	eb6ba3be 	bl	1bf18fc <$FStrEqual__FRC6RefVarN21>
        108a00:	e2504002 	subs	r4, r0, #2	; 0x2
        108a04:	13a04001 	movne	r4, #1	; 0x1
        108a08:	e59d0000 	ldr	r0, [sp]
        108a0c:	eb6ae9ea 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        108a10:	e3340000 	teq	r4, #0	; 0x0
        108a14:	13a07001 	movne	r7, #1	; 0x1
        108a18:	e28dd004 	add	sp, sp, #4	; 0x4
        108a1c:	ea000025 	b	108ab8 <TLibrarian::CompareValues(RefVar const &, RefVar const &, RefVar const &)+0x17c>
        108a20:	006848d0 	ldreqd	r4, [r8], -#128
        108a24:	e59d0000 	ldr	r0, [sp]
        108a28:	e5900000 	ldr	r0, [r0]
        108a2c:	e2001003 	and	r1, r0, #3	; 0x3
        108a30:	e3510000 	cmp	r1, #0	; 0x0
        108a34:	1a00000c 	bne	108a6c <TLibrarian::CompareValues(RefVar const &, RefVar const &, RefVar const &)+0x130>
        108a38:	01a00140 	moveq	r0, r0, asr #2
        108a3c:	0a000000 	beq	108a44 <TLibrarian::CompareValues(RefVar const &, RefVar const &, RefVar const &)+0x108>
        108a40:	eb6ae5b5 	bl	1bc211c <$_RINTError(long)>
        108a44:	e1a05000 	mov	r5, r0
        108a48:	e5940000 	ldr	r0, [r4]
        108a4c:	e5900000 	ldr	r0, [r0]
        108a50:	e3100003 	tst	r0, #3	; 0x3
        108a54:	01a00140 	moveq	r0, r0, asr #2
        108a58:	0a000000 	beq	108a60 <TLibrarian::CompareValues(RefVar const &, RefVar const &, RefVar const &)+0x124>
        108a5c:	eb6ae5ae 	bl	1bc211c <$_RINTError(long)>
        108a60:	e1350000 	teq	r5, r0
        108a64:	1a000013 	bne	108ab8 <TLibrarian::CompareValues(RefVar const &, RefVar const &, RefVar const &)+0x17c>
        108a68:	ea000011 	b	108ab4 <TLibrarian::CompareValues(RefVar const &, RefVar const &, RefVar const &)+0x178>
        108a6c:	eb6af208 	bl	1bc5294 <$ISREAL(long)>
        108a70:	e3300000 	teq	r0, #0	; 0x0
        108a74:	0a000007 	beq	108a98 <TLibrarian::CompareValues(RefVar const &, RefVar const &, RefVar const &)+0x15c>
        108a78:	e1a0000d 	mov	r0, sp
        108a7c:	eb6ae5b8 	bl	1bc2164 <$CDouble(RefVar const &)>
        108a80:	ee00c180 	mvfd	f4, f0
        108a84:	e1a00004 	mov	r0, r4
        108a88:	eb6ae5b5 	bl	1bc2164 <$CDouble(RefVar const &)>
        108a8c:	ee94f110 	cmf	f4, f0
        108a90:	1a000008 	bne	108ab8 <TLibrarian::CompareValues(RefVar const &, RefVar const &, RefVar const &)+0x17c>
        108a94:	ea000006 	b	108ab4 <TLibrarian::CompareValues(RefVar const &, RefVar const &, RefVar const &)+0x178>
        108a98:	e5940000 	ldr	r0, [r4]
        108a9c:	e5901000 	ldr	r1, [r0]
        108aa0:	e59d0000 	ldr	r0, [sp]
        108aa4:	e5900000 	ldr	r0, [r0]
        108aa8:	eb6aede0 	bl	1bc4230 <$EQRef__FlT1>
        108aac:	e3300000 	teq	r0, #0	; 0x0
        108ab0:	0a000000 	beq	108ab8 <TLibrarian::CompareValues(RefVar const &, RefVar const &, RefVar const &)+0x17c>
        108ab4:	e3a07001 	mov	r7, #1	; 0x1
        108ab8:	e59d0000 	ldr	r0, [sp]
        108abc:	eb6ae9be 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        108ac0:	e1a00007 	mov	r0, r7
        108ac4:	ed1bc20a 	lfm	f4, 1, [fp, -#40]
        108ac8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TLibrarian::CountPages(RefVar const &)
 * Address: 00108af4
 */
TLibrarian::CountPages(RefVar const &) {
    /*
        108af4:	e1a0c00d 	mov	ip, sp
        108af8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        108afc:	e24cb004 	sub	fp, ip, #4	; 0x4
        108b00:	e1a05000 	mov	r5, r0
        108b04:	e1a04001 	mov	r4, r1
        108b08:	e3a00002 	mov	r0, #2	; 0x2
        108b0c:	eb6ae58e 	bl	1bc214c <$AllocateRefHandle(long)>
        108b10:	e1a06000 	mov	r6, r0
        108b14:	e1a01004 	mov	r1, r4
        108b18:	e1a00005 	mov	r0, r5
        108b1c:	eb6650d1 	bl	1a9ce68 <TLibrarian::$Pages(RefVar const &)>
        108b20:	e5860000 	str	r0, [r6]
        108b24:	eb6af1e0 	bl	1bc52ac <$Length(long)>
        108b28:	e1a04000 	mov	r4, r0
        108b2c:	e1a00006 	mov	r0, r6
        108b30:	eb6ae9a1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        108b34:	e1a00004 	mov	r0, r4
        108b38:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TLibrarian::CurrentPage(RefVar const &)
 * Address: 0010909c
 */
TLibrarian::CurrentPage(RefVar const &) {
    /*
        10909c:	e1a0c00d 	mov	ip, sp
        1090a0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1090a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1090a8:	e1a05000 	mov	r5, r0
        1090ac:	e1a04001 	mov	r4, r1
        1090b0:	e24dd008 	sub	sp, sp, #8	; 0x8
        1090b4:	e3a00002 	mov	r0, #2	; 0x2
        1090b8:	eb6ae423 	bl	1bc214c <$AllocateRefHandle(long)>
        1090bc:	e58d0004 	str	r0, [sp, #4]	; fField4
        1090c0:	e3a00002 	mov	r0, #2	; 0x2
        1090c4:	eb6ae420 	bl	1bc214c <$AllocateRefHandle(long)>
        1090c8:	e58d0000 	str	r0, [sp]
        1090cc:	e59f10d4 	ldr	r1, [pc, #d4]	; 1091a8 <TLibrarian::CurrentPage(RefVar const &)+0x10c>
        1090d0:	e1a00004 	mov	r0, r4
        1090d4:	e3a03000 	mov	r3, #0	; 0x0
        1090d8:	e3a02000 	mov	r2, #0	; 0x0
        1090dc:	eb6aec64 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        1090e0:	e59d1000 	ldr	r1, [sp]
        1090e4:	e5810000 	str	r0, [r1]
        1090e8:	e1a0100d 	mov	r1, sp
        1090ec:	e1a00005 	mov	r0, r5
        1090f0:	eb670933 	bl	1acb5c4 <TLibrarian::$GetLibraryEntry(RefVar const &)>
        1090f4:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        1090f8:	e5810000 	str	r0, [r1]
        1090fc:	e59f70a8 	ldr	r7, [pc, #a8]	; 1091ac <TLibrarian::CurrentPage(RefVar const &)+0x110>
        109100:	e5971000 	ldr	r1, [r7]
        109104:	e5911000 	ldr	r1, [r1]
        109108:	eb6aec54 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10910c:	e3100003 	tst	r0, #3	; 0x3
        109110:	01a00140 	moveq	r0, r0, asr #2
        109114:	0a000000 	beq	10911c <TLibrarian::CurrentPage(RefVar const &)+0x80>
        109118:	eb6ae3ff 	bl	1bc211c <$_RINTError(long)>
        10911c:	e1a06000 	mov	r6, r0
        109120:	e1a01004 	mov	r1, r4
        109124:	e1a00005 	mov	r0, r5
        109128:	eb661593 	bl	1a8e77c <TLibrarian::$CountPages(RefVar const &)>
        10912c:	e3a01000 	mov	r1, #0	; 0x0
        109130:	e1500006 	cmp	r0, r6
        109134:	aa000015 	bge	109190 <TLibrarian::CurrentPage(RefVar const &)+0xf4>
        109138:	e24dd008 	sub	sp, sp, #8	; 0x8
        10913c:	e1a00001 	mov	r0, r1
        109140:	eb6ae401 	bl	1bc214c <$AllocateRefHandle(long)>
        109144:	e58d0000 	str	r0, [sp]
        109148:	e1a0200d 	mov	r2, sp
        10914c:	e59f105c 	ldr	r1, [pc, #5c]	; 1091b0 <TLibrarian::CurrentPage(RefVar const &)+0x114>
        109150:	e28d000c 	add	r0, sp, #12	; 0xc
        109154:	eb6af483 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        109158:	e59d0000 	ldr	r0, [sp]
        10915c:	eb6ae816 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        109160:	e3a00004 	mov	r0, #4	; 0x4
        109164:	eb6ae3f8 	bl	1bc214c <$AllocateRefHandle(long)>
        109168:	e58d0004 	str	r0, [sp, #4]	; fField4
        10916c:	e28d2004 	add	r2, sp, #4	; 0x4
        109170:	e1a01007 	mov	r1, r7
        109174:	e28d000c 	add	r0, sp, #12	; 0xc
        109178:	eb6af47a 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10917c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        109180:	eb6ae80d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        109184:	e28d000c 	add	r0, sp, #12	; 0xc
        109188:	eb6ae818 	bl	1bc31f0 <$EntryChange(RefVar const &)>
        10918c:	e28dd008 	add	sp, sp, #8	; 0x8
        109190:	e59d0000 	ldr	r0, [sp]
        109194:	eb6ae808 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        109198:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        10919c:	eb6ae806 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1091a0:	e1a00006 	mov	r0, r6
        1091a4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1091a8:	00683308 	rsbeq	r3, r8, r8, lsl #6
        1091ac:	00682708 	rsbeq	r2, r8, r8, lsl #14
        1091b0:	00683fb0 	streqh	r3, [r8], -#240
    */
}

/**
 * Symbol: TLibrarian::Encode(unsigned char *, unsigned short *)
 * Address: 001091b4
 */
TLibrarian::Encode(unsigned char *, unsigned short *) {
    /*
        1091b4:	e92d4000 	stmdb	sp!, {lr}
        1091b8:	e3a00000 	mov	r0, #0	; 0x0
        1091bc:	e3a03000 	mov	r3, #0	; 0x0
        1091c0:	e5c23001 	strb	r3, [r2, #1]
        1091c4:	e5c23000 	strb	r3, [r2]
        1091c8:	e4d1c001 	ldrb	ip, [r1], #1
        1091cc:	e59f3048 	ldr	r3, [pc, #48]	; 10921c <TLibrarian::Encode(unsigned char *, unsigned short *)+0x68>
        1091d0:	e7d3c00c 	ldrb	ip, [r3, ip]
        1091d4:	e33c0000 	teq	ip, #0	; 0x0
        1091d8:	14d1e001 	ldrneb	lr, [r1], #1
        1091dc:	17d3e00e 	ldrneb	lr, [r3, lr]
        1091e0:	133e0000 	teqne	lr, #0	; 0x0
        1091e4:	08bd8000 	ldmeqia	sp!, {pc}
        1091e8:	e02ec10c 	eor	ip, lr, ip, lsl #2
        1091ec:	e1a0c80c 	mov	ip, ip, lsl #16
        1091f0:	e1a0c82c 	mov	ip, ip, lsr #16
        1091f4:	e5d11000 	ldrb	r1, [r1]
        1091f8:	e7d31001 	ldrb	r1, [r3, r1]
        1091fc:	e3310000 	teq	r1, #0	; 0x0
        109200:	08bd8000 	ldmeqia	sp!, {pc}
        109204:	e021018c 	eor	r0, r1, ip, lsl #3
        109208:	e5c20001 	strb	r0, [r2, #1]
        10920c:	e1a00440 	mov	r0, r0, asr #8
        109210:	e5c20000 	strb	r0, [r2]
        109214:	e3a00001 	mov	r0, #1	; 0x1
        109218:	e8bd8000 	ldmia	sp!, {pc}
        10921c:	00371e98 	mlaeqs	r7, r8, lr, r1
    */
}

/**
 * Symbol: TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)
 * Address: 00109388
 */
TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &) {
    /*
        109388:	e1a0c00d 	mov	ip, sp
        10938c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        109390:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        109394:	e24cb014 	sub	fp, ip, #20	; 0x14
        109398:	e1a05000 	mov	r5, r0
        10939c:	e1a04001 	mov	r4, r1
        1093a0:	e24dd0c8 	sub	sp, sp, #200	; 0xc8
        1093a4:	e3a00002 	mov	r0, #2	; 0x2
        1093a8:	eb6ae367 	bl	1bc214c <$AllocateRefHandle(long)>
        1093ac:	e58d0094 	str	r0, [sp, #148]
        1093b0:	e3a00002 	mov	r0, #2	; 0x2
        1093b4:	eb6ae364 	bl	1bc214c <$AllocateRefHandle(long)>
        1093b8:	e58d0090 	str	r0, [sp, #144]
        1093bc:	e3a00002 	mov	r0, #2	; 0x2
        1093c0:	eb6ae361 	bl	1bc214c <$AllocateRefHandle(long)>
        1093c4:	e58d008c 	str	r0, [sp, #140]
        1093c8:	e3a00002 	mov	r0, #2	; 0x2
        1093cc:	eb6ae35e 	bl	1bc214c <$AllocateRefHandle(long)>
        1093d0:	e58d0088 	str	r0, [sp, #136]
        1093d4:	e3a00002 	mov	r0, #2	; 0x2
        1093d8:	eb6ae35b 	bl	1bc214c <$AllocateRefHandle(long)>
        1093dc:	e58d0084 	str	r0, [sp, #132]
        1093e0:	e3a00002 	mov	r0, #2	; 0x2
        1093e4:	eb6ae358 	bl	1bc214c <$AllocateRefHandle(long)>
        1093e8:	e58d0078 	str	r0, [sp, #120]
        1093ec:	e3a00002 	mov	r0, #2	; 0x2
        1093f0:	eb6ae355 	bl	1bc214c <$AllocateRefHandle(long)>
        1093f4:	e58d0074 	str	r0, [sp, #116]
        1093f8:	e3a00002 	mov	r0, #2	; 0x2
        1093fc:	eb6ae352 	bl	1bc214c <$AllocateRefHandle(long)>
        109400:	e58d0070 	str	r0, [sp, #112]
        109404:	e3a00002 	mov	r0, #2	; 0x2
        109408:	eb6ae34f 	bl	1bc214c <$AllocateRefHandle(long)>
        10940c:	e58d006c 	str	r0, [sp, #108]
        109410:	e3a00002 	mov	r0, #2	; 0x2
        109414:	eb6ae34c 	bl	1bc214c <$AllocateRefHandle(long)>
        109418:	e58d0014 	str	r0, [sp, #20]
        10941c:	e3a00002 	mov	r0, #2	; 0x2
        109420:	eb6ae349 	bl	1bc214c <$AllocateRefHandle(long)>
        109424:	e58d0010 	str	r0, [sp, #16]
        109428:	e3a00002 	mov	r0, #2	; 0x2
        10942c:	eb6ae346 	bl	1bc214c <$AllocateRefHandle(long)>
        109430:	e3a07002 	mov	r7, #2	; 0x2
        109434:	e58d000c 	str	r0, [sp, #12]
        109438:	e1a00007 	mov	r0, r7
        10943c:	eb6ae342 	bl	1bc214c <$AllocateRefHandle(long)>
        109440:	e58d0008 	str	r0, [sp, #8]	; fField8
        109444:	e1a00007 	mov	r0, r7
        109448:	eb6ae33f 	bl	1bc214c <$AllocateRefHandle(long)>
        10944c:	e58d0004 	str	r0, [sp, #4]	; fField4
        109450:	e1a00007 	mov	r0, r7
        109454:	eb6ae33c 	bl	1bc214c <$AllocateRefHandle(long)>
        109458:	e58d0000 	str	r0, [sp]
        10945c:	e28d1018 	add	r1, sp, #24	; 0x18
        109460:	e28f0ffb 	add	r0, pc, #1004	; 0x3ec
        109464:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
        109468:	e3a02001 	mov	r2, #1	; 0x1
        10946c:	eb6b77c4 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
        109470:	e1a00004 	mov	r0, r4
        109474:	eb6b94b9 	bl	1bee760 <$Ustrlen>
        109478:	e1a06000 	mov	r6, r0
        10947c:	e2800001 	add	r0, r0, #1	; 0x1
        109480:	e1a00080 	mov	r0, r0, lsl #1
        109484:	eb6b632d 	bl	1be2140 <$NewPtr>
        109488:	e1b08000 	movs	r8, r0
        10948c:	e59fa3c4 	ldr	sl, [pc, #3c4]	; 109858 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x4d0>
        109490:	e3a090e9 	mov	r9, #233	; 0xe9
        109494:	e2499b0a 	sub	r9, r9, #10240	; 0x2800
        109498:	1a000003 	bne	1094ac <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x124>
        10949c:	e3a02000 	mov	r2, #0	; 0x0
        1094a0:	e1a01009 	mov	r1, r9
        1094a4:	e59a0000 	ldr	r0, [sl]
        1094a8:	eb6b673b 	bl	1be319c <$Throw>
        1094ac:	e1a01008 	mov	r1, r8
        1094b0:	e1a00004 	mov	r0, r4
        1094b4:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
        1094b8:	e3a02001 	mov	r2, #1	; 0x1
        1094bc:	eb6b77af 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
        1094c0:	e2463002 	sub	r3, r6, #2	; 0x2
        1094c4:	e58d3080 	str	r3, [sp, #128]
        1094c8:	e3530001 	cmp	r3, #1	; 0x1
        1094cc:	b3a03000 	movlt	r3, #0	; 0x0
        1094d0:	b58d3080 	strlt	r3, [sp, #128]
        1094d4:	e59d3080 	ldr	r3, [sp, #128]
        1094d8:	e1a00083 	mov	r0, r3, lsl #1
        1094dc:	eb6b6317 	bl	1be2140 <$NewPtr>
        1094e0:	e58d009c 	str	r0, [sp, #156]
        1094e4:	e3300000 	teq	r0, #0	; 0x0
        1094e8:	1a000003 	bne	1094fc <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x174>
        1094ec:	e3a02000 	mov	r2, #0	; 0x0
        1094f0:	e1a01009 	mov	r1, r9
        1094f4:	e59a0000 	ldr	r0, [sl]
        1094f8:	eb6b6727 	bl	1be319c <$Throw>
        1094fc:	e3a0a000 	mov	sl, #0	; 0x0
        109500:	e3a09000 	mov	r9, #0	; 0x0
        109504:	e59d3080 	ldr	r3, [sp, #128]
        109508:	e3530000 	cmp	r3, #0	; 0x0
        10950c:	da000009 	ble	109538 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x1b0>
        109510:	e59d109c 	ldr	r1, [sp, #156]
        109514:	e0812089 	add	r2, r1, r9, lsl #1
        109518:	e088100a 	add	r1, r8, sl
        10951c:	e1a00005 	mov	r0, r5
        109520:	eb66250f 	bl	1a92964 <TLibrarian::$Encode(unsigned char *, unsigned short *)>
        109524:	e28aa001 	add	sl, sl, #1	; 0x1
        109528:	e2899001 	add	r9, r9, #1	; 0x1
        10952c:	e59d3080 	ldr	r3, [sp, #128]
        109530:	e1590003 	cmp	r9, r3
        109534:	bafffff5 	blt	109510 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x188>
        109538:	e1a00008 	mov	r0, r8
        10953c:	eb6b5edc 	bl	1be10b4 <$DisposPtr>
        109540:	e1a00004 	mov	r0, r4
        109544:	e5941000 	ldr	r1, [r4]
        109548:	e1b01821 	movs	r1, r1, lsr #16
        10954c:	0a00000b 	beq	109580 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x1f8>
        109550:	e5901000 	ldr	r1, [r0]
        109554:	e1a01821 	mov	r1, r1, lsr #16
        109558:	e3510061 	cmp	r1, #97	; 0x61
        10955c:	ba000001 	blt	109568 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x1e0>
        109560:	e351007a 	cmp	r1, #122	; 0x7a
        109564:	d2411020 	suble	r1, r1, #32	; 0x20
        109568:	e5c01001 	strb	r1, [r0, #1]
        10956c:	e1a01441 	mov	r1, r1, asr #8
        109570:	e4c01002 	strb	r1, [r0], #2	; fField2
        109574:	e5901000 	ldr	r1, [r0]
        109578:	e1b01821 	movs	r1, r1, lsr #16
        10957c:	1afffff3 	bne	109550 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x1c8>
        109580:	e59b001c 	ldr	r0, [fp, #28]
        109584:	e5900000 	ldr	r0, [r0]
        109588:	e5900000 	ldr	r0, [r0]
        10958c:	eb6aef46 	bl	1bc52ac <$Length(long)>
        109590:	e3a01000 	mov	r1, #0	; 0x0
        109594:	e3a0a000 	mov	sl, #0	; 0x0
        109598:	e58d00ac 	str	r0, [sp, #172]
        10959c:	e3500000 	cmp	r0, #0	; 0x0
        1095a0:	e58d1098 	str	r1, [sp, #152]
        1095a4:	da0000d7 	ble	109908 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x580>
        1095a8:	e2850004 	add	r0, r5, #4	; 0x4
        1095ac:	e58d00c4 	str	r0, [sp, #196]
        1095b0:	e59f22a4 	ldr	r2, [pc, #2a4]	; 10985c <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x4d4>	; fField2
        1095b4:	e58d20c0 	str	r2, [sp, #192]
        1095b8:	e59f22a0 	ldr	r2, [pc, #2a0]	; 109860 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x4d8>	; fField2
        1095bc:	e58d20bc 	str	r2, [sp, #188]
        1095c0:	e59f129c 	ldr	r1, [pc, #29c]	; 109864 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x4dc>
        1095c4:	e58d10b8 	str	r1, [sp, #184]
        1095c8:	e59f1298 	ldr	r1, [pc, #298]	; 109868 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x4e0>
        1095cc:	e1a00106 	mov	r0, r6, lsl #2
        1095d0:	e58d00b0 	str	r0, [sp, #176]
        1095d4:	e58d10b4 	str	r1, [sp, #180]
        1095d8:	e59d1098 	ldr	r1, [sp, #152]
        1095dc:	e59b001c 	ldr	r0, [fp, #28]
        1095e0:	e5900000 	ldr	r0, [r0]
        1095e4:	e5900000 	ldr	r0, [r0]
        1095e8:	eb6aeb19 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1095ec:	e59d1090 	ldr	r1, [sp, #144]
        1095f0:	e5810000 	str	r0, [r1]
        1095f4:	e59f8270 	ldr	r8, [pc, #270]	; 10986c <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x4e4>
        1095f8:	e5981000 	ldr	r1, [r8]
        1095fc:	e5911000 	ldr	r1, [r1]
        109600:	eb6aeb16 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        109604:	e59d1090 	ldr	r1, [sp, #144]
        109608:	e5810000 	str	r0, [r1]
        10960c:	e28d1090 	add	r1, sp, #144	; 0x90
        109610:	e1a00005 	mov	r0, r5
        109614:	eb6666f8 	bl	1aa31fc <TLibrarian::$StrRefToSymbol(RefVar const &)>
        109618:	e1a01000 	mov	r1, r0
        10961c:	e59d008c 	ldr	r0, [sp, #140]
        109620:	e5801000 	str	r1, [r0]
        109624:	e59d00c4 	ldr	r0, [sp, #196]
        109628:	e5900000 	ldr	r0, [r0]
        10962c:	e5900000 	ldr	r0, [r0]
        109630:	eb6aeb0a 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        109634:	e59d1094 	ldr	r1, [sp, #148]
        109638:	e5810000 	str	r0, [r1]
        10963c:	e59f122c 	ldr	r1, [pc, #22c]	; 109870 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x4e8>
        109640:	e5911000 	ldr	r1, [r1]
        109644:	e5911000 	ldr	r1, [r1]
        109648:	eb6aeb04 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10964c:	e59d1094 	ldr	r1, [sp, #148]
        109650:	e5810000 	str	r0, [r1]
        109654:	e59f7218 	ldr	r7, [pc, #218]	; 109874 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x4ec>
        109658:	e5971000 	ldr	r1, [r7]
        10965c:	e5911000 	ldr	r1, [r1]
        109660:	eb6aeaf8 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        109664:	e3300000 	teq	r0, #0	; 0x0
        109668:	0a000043 	beq	10977c <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x3f4>
        10966c:	e24dd004 	sub	sp, sp, #4	; 0x4
        109670:	e5970000 	ldr	r0, [r7]
        109674:	e5901000 	ldr	r1, [r0]
        109678:	e59d0098 	ldr	r0, [sp, #152]
        10967c:	e5900000 	ldr	r0, [r0]
        109680:	eb6aeaf6 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        109684:	eb6ae2b0 	bl	1bc214c <$AllocateRefHandle(long)>
        109688:	e58d0000 	str	r0, [sp]
        10968c:	e5900000 	ldr	r0, [r0]
        109690:	e3300002 	teq	r0, #2	; 0x2
        109694:	0a000035 	beq	109770 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x3e8>
        109698:	e24dd004 	sub	sp, sp, #4	; 0x4
        10969c:	e3a07002 	mov	r7, #2	; 0x2
        1096a0:	e1a00007 	mov	r0, r7
        1096a4:	eb6ae2a8 	bl	1bc214c <$AllocateRefHandle(long)>
        1096a8:	e58d0000 	str	r0, [sp]
        1096ac:	e1a0000d 	mov	r0, sp
        1096b0:	e59d20c8 	ldr	r2, [sp, #200]
        1096b4:	e28d1004 	add	r1, sp, #4	; 0x4
        1096b8:	eb6551fc 	bl	1a5deb0 <$FSetContains>
        1096bc:	e59d1090 	ldr	r1, [sp, #144]
        1096c0:	e5810000 	str	r0, [r1]
        1096c4:	e59d0000 	ldr	r0, [sp]
        1096c8:	eb6ae6bb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1096cc:	e24dd004 	sub	sp, sp, #4	; 0x4
        1096d0:	e59d0094 	ldr	r0, [sp, #148]
        1096d4:	e5900000 	ldr	r0, [r0]
        1096d8:	e3300002 	teq	r0, #2	; 0x2
        1096dc:	0a000009 	beq	109708 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x380>
        1096e0:	e3100003 	tst	r0, #3	; 0x3
        1096e4:	01a00140 	moveq	r0, r0, asr #2
        1096e8:	0a000000 	beq	1096f0 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x368>
        1096ec:	eb6ae28a 	bl	1bc211c <$_RINTError(long)>
        1096f0:	e2801001 	add	r1, r0, #1	; 0x1
        1096f4:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        1096f8:	e5900000 	ldr	r0, [r0]
        1096fc:	eb6aead4 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        109700:	e59d1010 	ldr	r1, [sp, #16]
        109704:	e5810000 	str	r0, [r1]
        109708:	e1a00007 	mov	r0, r7
        10970c:	eb6ae28e 	bl	1bc214c <$AllocateRefHandle(long)>
        109710:	e58d0000 	str	r0, [sp]
        109714:	e1a0000d 	mov	r0, sp
        109718:	e59d20c8 	ldr	r2, [sp, #200]
        10971c:	e28d1008 	add	r1, sp, #8	; 0x8
        109720:	eb6551e2 	bl	1a5deb0 <$FSetContains>
        109724:	e59d1094 	ldr	r1, [sp, #148]
        109728:	e5810000 	str	r0, [r1]
        10972c:	e59d0000 	ldr	r0, [sp]
        109730:	eb6ae6a1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        109734:	e59d0094 	ldr	r0, [sp, #148]
        109738:	e5900000 	ldr	r0, [r0]
        10973c:	e3300002 	teq	r0, #2	; 0x2
        109740:	0a000009 	beq	10976c <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x3e4>
        109744:	e3100003 	tst	r0, #3	; 0x3
        109748:	01a00140 	moveq	r0, r0, asr #2
        10974c:	0a000000 	beq	109754 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x3cc>
        109750:	eb6ae271 	bl	1bc211c <$_RINTError(long)>
        109754:	e2801001 	add	r1, r0, #1	; 0x1
        109758:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        10975c:	e5900000 	ldr	r0, [r0]
        109760:	eb6aeabb 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        109764:	e59d100c 	ldr	r1, [sp, #12]
        109768:	e5810000 	str	r0, [r1]
        10976c:	e28dd008 	add	sp, sp, #8	; 0x8
        109770:	e59d0000 	ldr	r0, [sp]
        109774:	eb6ae690 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        109778:	e28dd004 	add	sp, sp, #4	; 0x4
        10977c:	e3a07000 	mov	r7, #0	; 0x0
        109780:	e24dd008 	sub	sp, sp, #8	; 0x8
        109784:	e3a00003 	mov	r0, #3	; 0x3
        109788:	eb664983 	bl	1a9bd9c <$MakeArray(long)>
        10978c:	eb6ae26e 	bl	1bc214c <$AllocateRefHandle(long)>
        109790:	e58d0004 	str	r0, [sp, #4]	; fField4
        109794:	e59f00dc 	ldr	r0, [pc, #dc]	; 109878 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x4f0>
        109798:	e5900000 	ldr	r0, [r0]
        10979c:	e3a0a000 	mov	sl, #0	; 0x0
        1097a0:	e1a0100a 	mov	r1, sl
        1097a4:	e5902000 	ldr	r2, [r0]
        1097a8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1097ac:	e5900000 	ldr	r0, [r0]
        1097b0:	eb6af2e8 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        1097b4:	e59f00c0 	ldr	r0, [pc, #c0]	; 10987c <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x4f4>
        1097b8:	e5900000 	ldr	r0, [r0]
        1097bc:	e5901000 	ldr	r1, [r0]
        1097c0:	e59d009c 	ldr	r0, [sp, #156]
        1097c4:	e5900000 	ldr	r0, [r0]
        1097c8:	eb6aeaa4 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        1097cc:	eb6ae25e 	bl	1bc214c <$AllocateRefHandle(long)>
        1097d0:	e1a09000 	mov	r9, r0
        1097d4:	e3a01001 	mov	r1, #1	; 0x1
        1097d8:	e5902000 	ldr	r2, [r0]
        1097dc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1097e0:	e5900000 	ldr	r0, [r0]
        1097e4:	eb6af2db 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        1097e8:	e1a00009 	mov	r0, r9
        1097ec:	eb6ae672 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1097f0:	e59f0088 	ldr	r0, [pc, #88]	; 109880 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x4f8>
        1097f4:	e5900000 	ldr	r0, [r0]
        1097f8:	e3a09002 	mov	r9, #2	; 0x2
        1097fc:	e1a01009 	mov	r1, r9
        109800:	e5902000 	ldr	r2, [r0]
        109804:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        109808:	e5900000 	ldr	r0, [r0]
        10980c:	eb6af2d1 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        109810:	e3a00001 	mov	r0, #1	; 0x1
        109814:	eb664960 	bl	1a9bd9c <$MakeArray(long)>
        109818:	e59d1090 	ldr	r1, [sp, #144]
        10981c:	e5810000 	str	r0, [r1]
        109820:	e1a00009 	mov	r0, r9
        109824:	eb6ae248 	bl	1bc214c <$AllocateRefHandle(long)>
        109828:	e58d0000 	str	r0, [sp]
        10982c:	e1a0000d 	mov	r0, sp
        109830:	e28d1004 	add	r1, sp, #4	; 0x4
        109834:	eb6ba432 	bl	1bf2904 <$FStringer__FRC6RefVarT1>
        109838:	eb6ae243 	bl	1bc214c <$AllocateRefHandle(long)>
        10983c:	e1a09000 	mov	r9, r0
        109840:	e1a0100a 	mov	r1, sl
        109844:	e5902000 	ldr	r2, [r0]
        109848:	e59d0090 	ldr	r0, [sp, #144]
        10984c:	e5900000 	ldr	r0, [r0]
        109850:	ea00000b 	b	109884 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x4fc>
        109854:	c9000000 	stmgtdb	r0, {}
        109858:	00371318 	eoreqs	r1, r7, r8, lsl r3
        10985c:	00682170 	rsbeq	r2, r8, r0, ror r1
        109860:	006839a0 	rsbeq	r3, r8, r0, lsr #19
        109864:	006845c0 	rsbeq	r4, r8, r0, asr #11
        109868:	00682ea8 	rsbeq	r2, r8, r8, lsr #29
        10986c:	00683308 	rsbeq	r3, r8, r8, lsl #6
        109870:	00682138 	rsbeq	r2, r8, r8, lsr r1
        109874:	006844a8 	rsbeq	r4, r8, r8, lsr #9
        109878:	00680198 	streqb	r0, [r8], -#24
        10987c:	00684b90 	streqb	r4, [r8], -#176
        109880:	00680d18 	rsbeq	r0, r8, r8, lsl sp
        109884:	eb6af2b3 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        109888:	e1a00009 	mov	r0, r9
        10988c:	eb6ae64a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        109890:	e59d0000 	ldr	r0, [sp]
        109894:	eb6ae648 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        109898:	e28d2090 	add	r2, sp, #144	; 0x90
        10989c:	e59d10c0 	ldr	r1, [sp, #192]
        1098a0:	e59b0018 	ldr	r0, [fp, #24]
        1098a4:	eb6ae64a 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
        1098a8:	e3a00000 	mov	r0, #0	; 0x0
        1098ac:	eb66493a 	bl	1a9bd9c <$MakeArray(long)>
        1098b0:	e59d1014 	ldr	r1, [sp, #20]
        1098b4:	e5810000 	str	r0, [r1]
        1098b8:	e59f00d8 	ldr	r0, [pc, #d8]	; 109998 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x610>
        1098bc:	e5900000 	ldr	r0, [r0]
        1098c0:	e5901000 	ldr	r1, [r0]
        1098c4:	e59d009c 	ldr	r0, [sp, #156]
        1098c8:	e5900000 	ldr	r0, [r0]
        1098cc:	eb6aea63 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        1098d0:	e59d108c 	ldr	r1, [sp, #140]
        1098d4:	e5810000 	str	r0, [r1]
        1098d8:	e1a01000 	mov	r1, r0
        1098dc:	e3300002 	teq	r0, #2	; 0x2
        1098e0:	1a00002d 	bne	10999c <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x614>
        1098e4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1098e8:	eb6ae633 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1098ec:	e28dd008 	add	sp, sp, #8	; 0x8
        1098f0:	e59d1098 	ldr	r1, [sp, #152]
        1098f4:	e2811001 	add	r1, r1, #1	; 0x1
        1098f8:	e58d1098 	str	r1, [sp, #152]
        1098fc:	e59d00ac 	ldr	r0, [sp, #172]
        109900:	e1510000 	cmp	r1, r0
        109904:	baffff33 	blt	1095d8 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x250>
        109908:	e59d009c 	ldr	r0, [sp, #156]
        10990c:	eb6b5de8 	bl	1be10b4 <$DisposPtr>
        109910:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        109914:	e5904000 	ldr	r4, [r0]
        109918:	e59d0000 	ldr	r0, [sp]
        10991c:	eb6ae626 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        109920:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        109924:	eb6ae624 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        109928:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        10992c:	eb6ae622 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        109930:	e59d000c 	ldr	r0, [sp, #12]
        109934:	eb6ae620 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        109938:	e59d0010 	ldr	r0, [sp, #16]
        10993c:	eb6ae61e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        109940:	e59d0014 	ldr	r0, [sp, #20]
        109944:	eb6ae61c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        109948:	e59d006c 	ldr	r0, [sp, #108]
        10994c:	eb6ae61a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        109950:	e59d0070 	ldr	r0, [sp, #112]
        109954:	eb6ae618 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        109958:	e59d0074 	ldr	r0, [sp, #116]
        10995c:	eb6ae616 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        109960:	e59d0078 	ldr	r0, [sp, #120]
        109964:	eb6ae614 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        109968:	e59d0084 	ldr	r0, [sp, #132]
        10996c:	eb6ae612 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        109970:	e59d0088 	ldr	r0, [sp, #136]
        109974:	eb6ae610 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        109978:	e59d008c 	ldr	r0, [sp, #140]
        10997c:	eb6ae60e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        109980:	e59d0090 	ldr	r0, [sp, #144]
        109984:	eb6ae60c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        109988:	e59d0094 	ldr	r0, [sp, #148]
        10998c:	eb6ae60a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        109990:	e1a00004 	mov	r0, r4
        109994:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        109998:	00683118 	rsbeq	r3, r8, r8, lsl r1
        10999c:	e1a00001 	mov	r0, r1
        1099a0:	eb6aee41 	bl	1bc52ac <$Length(long)>
        1099a4:	e58d0084 	str	r0, [sp, #132]
        1099a8:	e59f0304 	ldr	r0, [pc, #304]	; 109cb4 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x92c>
        1099ac:	e5900000 	ldr	r0, [r0]
        1099b0:	e5901000 	ldr	r1, [r0]
        1099b4:	e59d009c 	ldr	r0, [sp, #156]
        1099b8:	e5900000 	ldr	r0, [r0]
        1099bc:	eb6aea27 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        1099c0:	e59d107c 	ldr	r1, [sp, #124]
        1099c4:	e3a09000 	mov	r9, #0	; 0x0
        1099c8:	e5810000 	str	r0, [r1]
        1099cc:	e59d0084 	ldr	r0, [sp, #132]
        1099d0:	e3500000 	cmp	r0, #0	; 0x0
        1099d4:	daffffc2 	ble	1098e4 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x55c>
        1099d8:	e1a01009 	mov	r1, r9
        1099dc:	e59d008c 	ldr	r0, [sp, #140]
        1099e0:	e5900000 	ldr	r0, [r0]
        1099e4:	eb6aea1a 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1099e8:	e59d1080 	ldr	r1, [sp, #128]
        1099ec:	e5810000 	str	r0, [r1]
        1099f0:	e3300002 	teq	r0, #2	; 0x2
        1099f4:	0a000132 	beq	109ec4 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0xb3c>
        1099f8:	e28d0080 	add	r0, sp, #128	; 0x80
        1099fc:	eb6ae1d9 	bl	1bc2168 <$ClassOf(RefVar const &)>
        109a00:	eb6ae1d1 	bl	1bc214c <$AllocateRefHandle(long)>
        109a04:	e1a0a000 	mov	sl, r0
        109a08:	e59f02a8 	ldr	r0, [pc, #2a8]	; 109cb8 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x930>	; fField2
        109a0c:	e5900000 	ldr	r0, [r0]
        109a10:	e5901000 	ldr	r1, [r0]
        109a14:	e59a0000 	ldr	r0, [sl]
        109a18:	eb6aea04 	bl	1bc4230 <$EQRef__FlT1>
        109a1c:	e1b08000 	movs	r8, r0
        109a20:	13a08001 	movne	r8, #1	; 0x1
        109a24:	e1a0000a 	mov	r0, sl
        109a28:	eb6ae5e3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        109a2c:	e3380000 	teq	r8, #0	; 0x0
        109a30:	0a000011 	beq	109a7c <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x6f4>
        109a34:	e24dd004 	sub	sp, sp, #4	; 0x4
        109a38:	e28d1084 	add	r1, sp, #132	; 0x84
        109a3c:	e1a0000d 	mov	r0, sp
        109a40:	eb6adda4 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        109a44:	e1a0000d 	mov	r0, sp
        109a48:	eb6ae1b1 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        109a4c:	e1a02000 	mov	r2, r0
        109a50:	e1a00005 	mov	r0, r5
        109a54:	e59d10a8 	ldr	r1, [sp, #168]
        109a58:	e59d308c 	ldr	r3, [sp, #140]
        109a5c:	eb6606d9 	bl	1a8b5c8 <TLibrarian::$CheckHints(unsigned short *, char *, long)>
        109a60:	e1a08000 	mov	r8, r0
        109a64:	e1a0000d 	mov	r0, sp
        109a68:	e3a01000 	mov	r1, #0	; 0x0
        109a6c:	eb6ae1a3 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        109a70:	e28dd004 	add	sp, sp, #4	; 0x4
        109a74:	e3380000 	teq	r8, #0	; 0x0
        109a78:	0a000111 	beq	109ec4 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0xb3c>
        109a7c:	e1a01009 	mov	r1, r9
        109a80:	e59d007c 	ldr	r0, [sp, #124]
        109a84:	e5900000 	ldr	r0, [r0]
        109a88:	eb6ae9f1 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        109a8c:	e59d1078 	ldr	r1, [sp, #120]
        109a90:	e5810000 	str	r0, [r1]
        109a94:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        109a98:	e5900000 	ldr	r0, [r0]
        109a9c:	e3300002 	teq	r0, #2	; 0x2
        109aa0:	0a00000c 	beq	109ad8 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x750>
        109aa4:	e3a00001 	mov	r0, #1	; 0x1
        109aa8:	eb6648bb 	bl	1a9bd9c <$MakeArray(long)>
        109aac:	e59d1090 	ldr	r1, [sp, #144]
        109ab0:	e5810000 	str	r0, [r1]
        109ab4:	e59d1078 	ldr	r1, [sp, #120]
        109ab8:	e5912000 	ldr	r2, [r1]
        109abc:	e3a01000 	mov	r1, #0	; 0x0
        109ac0:	eb6af224 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        109ac4:	e28d1090 	add	r1, sp, #144	; 0x90
        109ac8:	e28d0008 	add	r0, sp, #8	; 0x8
        109acc:	eb6ae5bf 	bl	1bc31d0 <$DoBlock__FRC6RefVarT1>
        109ad0:	e59d1078 	ldr	r1, [sp, #120]
        109ad4:	e5810000 	str	r0, [r1]
        109ad8:	e59d000c 	ldr	r0, [sp, #12]
        109adc:	e5900000 	ldr	r0, [r0]
        109ae0:	e3300002 	teq	r0, #2	; 0x2
        109ae4:	0a000078 	beq	109ccc <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x944>
        109ae8:	e3a00005 	mov	r0, #5	; 0x5
        109aec:	eb6648aa 	bl	1a9bd9c <$MakeArray(long)>
        109af0:	e59d1090 	ldr	r1, [sp, #144]
        109af4:	e5810000 	str	r0, [r1]
        109af8:	e1a00004 	mov	r0, r4
        109afc:	eb6aedf4 	bl	1bc52d4 <$MakeString(unsigned short const *)>
        109b00:	eb6ae191 	bl	1bc214c <$AllocateRefHandle(long)>
        109b04:	e1a08000 	mov	r8, r0
        109b08:	e3a01000 	mov	r1, #0	; 0x0
        109b0c:	e5902000 	ldr	r2, [r0]
        109b10:	e59d0090 	ldr	r0, [sp, #144]
        109b14:	e5900000 	ldr	r0, [r0]
        109b18:	eb6af20e 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        109b1c:	e1a00008 	mov	r0, r8
        109b20:	eb6ae5a5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        109b24:	e59d00b8 	ldr	r0, [sp, #184]
        109b28:	eb6ae187 	bl	1bc214c <$AllocateRefHandle(long)>
        109b2c:	e1a08000 	mov	r8, r0
        109b30:	e3a01001 	mov	r1, #1	; 0x1
        109b34:	e5902000 	ldr	r2, [r0]
        109b38:	e59d0090 	ldr	r0, [sp, #144]
        109b3c:	e5900000 	ldr	r0, [r0]
        109b40:	eb6af204 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        109b44:	e1a00008 	mov	r0, r8
        109b48:	eb6ae59b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        109b4c:	e59d0078 	ldr	r0, [sp, #120]
        109b50:	e3a01002 	mov	r1, #2	; 0x2
        109b54:	e5902000 	ldr	r2, [r0]
        109b58:	e59d0090 	ldr	r0, [sp, #144]
        109b5c:	e5900000 	ldr	r0, [r0]
        109b60:	eb6af1fc 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        109b64:	e59f014c 	ldr	r0, [pc, #14c]	; 109cb8 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x930>
        109b68:	e5900000 	ldr	r0, [r0]
        109b6c:	e5901000 	ldr	r1, [r0]
        109b70:	e59d009c 	ldr	r0, [sp, #156]
        109b74:	e5900000 	ldr	r0, [r0]
        109b78:	eb6ae9b8 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        109b7c:	eb6ae172 	bl	1bc214c <$AllocateRefHandle(long)>
        109b80:	e1a08000 	mov	r8, r0
        109b84:	e3a01003 	mov	r1, #3	; 0x3
        109b88:	e5902000 	ldr	r2, [r0]
        109b8c:	e59d0090 	ldr	r0, [sp, #144]
        109b90:	e5900000 	ldr	r0, [r0]
        109b94:	eb6af1ef 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        109b98:	e1a00008 	mov	r0, r8
        109b9c:	eb6ae586 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        109ba0:	e59d009c 	ldr	r0, [sp, #156]
        109ba4:	e3a01004 	mov	r1, #4	; 0x4
        109ba8:	e5902000 	ldr	r2, [r0]
        109bac:	e59d0090 	ldr	r0, [sp, #144]
        109bb0:	e5900000 	ldr	r0, [r0]
        109bb4:	eb6af1e7 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        109bb8:	e28d1090 	add	r1, sp, #144	; 0x90
        109bbc:	e28d000c 	add	r0, sp, #12	; 0xc
        109bc0:	eb6ae582 	bl	1bc31d0 <$DoBlock__FRC6RefVarT1>
        109bc4:	e59d101c 	ldr	r1, [sp, #28]
        109bc8:	e5810000 	str	r0, [r1]
        109bcc:	e3300002 	teq	r0, #2	; 0x2
        109bd0:	0a00003d 	beq	109ccc <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x944>
        109bd4:	e24dd004 	sub	sp, sp, #4	; 0x4
        109bd8:	e3a0001a 	mov	r0, #26	; 0x1a
        109bdc:	eb6ae15a 	bl	1bc214c <$AllocateRefHandle(long)>
        109be0:	e1a08000 	mov	r8, r0
        109be4:	e5901000 	ldr	r1, [r0]
        109be8:	e59d0020 	ldr	r0, [sp, #32]
        109bec:	e5900000 	ldr	r0, [r0]
        109bf0:	eb6ae98e 	bl	1bc4230 <$EQRef__FlT1>
        109bf4:	e1b0a000 	movs	sl, r0
        109bf8:	13a0a001 	movne	sl, #1	; 0x1
        109bfc:	e1a00008 	mov	r0, r8
        109c00:	eb6ae56d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        109c04:	e33a0000 	teq	sl, #0	; 0x0
        109c08:	1a0000ac 	bne	109ec0 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0xb38>
        109c0c:	e28d207c 	add	r2, sp, #124	; 0x7c
        109c10:	e59f10a4 	ldr	r1, [pc, #a4]	; 109cbc <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x934>
        109c14:	e28d0020 	add	r0, sp, #32	; 0x20
        109c18:	eb6af1d2 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        109c1c:	e28d20a0 	add	r2, sp, #160	; 0xa0
        109c20:	e59f1098 	ldr	r1, [pc, #98]	; 109cc0 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x938>
        109c24:	e28d0020 	add	r0, sp, #32	; 0x20
        109c28:	eb6af1ce 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        109c2c:	eb6ae143 	bl	1bc2140 <$AllocateFrame(void)>
        109c30:	e59d101c 	ldr	r1, [sp, #28]
        109c34:	e5810000 	str	r0, [r1]
        109c38:	e51f73c4 	ldr	r7, [pc, #fffffc3c]	; 10987c <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x4f4>
        109c3c:	e5970000 	ldr	r0, [r7]
        109c40:	e5901000 	ldr	r1, [r0]
        109c44:	e59d0020 	ldr	r0, [sp, #32]
        109c48:	e5900000 	ldr	r0, [r0]
        109c4c:	eb6ae983 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        109c50:	eb6ae13d 	bl	1bc214c <$AllocateRefHandle(long)>
        109c54:	e58d0000 	str	r0, [sp]
        109c58:	e1a0200d 	mov	r2, sp
        109c5c:	e1a01007 	mov	r1, r7
        109c60:	e28d001c 	add	r0, sp, #28	; 0x1c
        109c64:	eb6af1bf 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        109c68:	e59d0000 	ldr	r0, [sp]
        109c6c:	eb6ae552 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        109c70:	e59b200c 	ldr	r2, [fp, #12]
        109c74:	e59f1048 	ldr	r1, [pc, #48]	; 109cc4 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x93c>
        109c78:	e28d001c 	add	r0, sp, #28	; 0x1c
        109c7c:	eb6af1b9 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        109c80:	e28d209c 	add	r2, sp, #156	; 0x9c
        109c84:	e51f1420 	ldr	r1, [pc, #fffffbe0]	; 10986c <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x4e4>
        109c88:	e28d001c 	add	r0, sp, #28	; 0x1c
        109c8c:	eb6af1b5 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        109c90:	e28d2020 	add	r2, sp, #32	; 0x20
        109c94:	e59f102c 	ldr	r1, [pc, #2c]	; 109cc8 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x940>	; fField2
        109c98:	e28d001c 	add	r0, sp, #28	; 0x1c
        109c9c:	eb6af1b1 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        109ca0:	e28d101c 	add	r1, sp, #28	; 0x1c
        109ca4:	e28d0018 	add	r0, sp, #24	; 0x18
        109ca8:	eb6ae11e 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        109cac:	e3a07001 	mov	r7, #1	; 0x1
        109cb0:	ea000082 	b	109ec0 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0xb38>
        109cb4:	006825f8 	streqd	r2, [r8], -#88
        109cb8:	006827a0 	rsbeq	r2, r8, r0, lsr #15
        109cbc:	00683338 	rsbeq	r3, r8, r8, lsr r3
        109cc0:	00682178 	rsbeq	r2, r8, r8, ror r1
        109cc4:	00683c08 	rsbeq	r3, r8, r8, lsl #24
        109cc8:	00682eb0 	streqh	r2, [r8], -#224
        109ccc:	e59f0284 	ldr	r0, [pc, #284]	; 109f58 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0xbd0>
        109cd0:	e5900000 	ldr	r0, [r0]
        109cd4:	e5901000 	ldr	r1, [r0]
        109cd8:	e59d0078 	ldr	r0, [sp, #120]
        109cdc:	e5900000 	ldr	r0, [r0]
        109ce0:	eb6ae95e 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        109ce4:	eb6ae118 	bl	1bc214c <$AllocateRefHandle(long)>
        109ce8:	e1a08000 	mov	r8, r0
        109cec:	e59f0268 	ldr	r0, [pc, #268]	; 109f5c <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0xbd4>
        109cf0:	e5900000 	ldr	r0, [r0]
        109cf4:	e5901000 	ldr	r1, [r0]
        109cf8:	e5980000 	ldr	r0, [r8]
        109cfc:	eb6ae94b 	bl	1bc4230 <$EQRef__FlT1>
        109d00:	e1b0a000 	movs	sl, r0
        109d04:	13a0a001 	movne	sl, #1	; 0x1
        109d08:	e1a00008 	mov	r0, r8
        109d0c:	eb6ae52a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        109d10:	e33a0000 	teq	sl, #0	; 0x0
        109d14:	0a000095 	beq	109f70 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0xbe8>
        109d18:	e59f0240 	ldr	r0, [pc, #240]	; 109f60 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0xbd8>
        109d1c:	e5900000 	ldr	r0, [r0]
        109d20:	e5901000 	ldr	r1, [r0]
        109d24:	e59d0078 	ldr	r0, [sp, #120]
        109d28:	e5900000 	ldr	r0, [r0]
        109d2c:	eb6ae94b 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        109d30:	e59d1074 	ldr	r1, [sp, #116]
        109d34:	e5810000 	str	r0, [r1]
        109d38:	e3300002 	teq	r0, #2	; 0x2
        109d3c:	1a000093 	bne	109f90 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0xc08>
        109d40:	e51f0090 	ldr	r0, [pc, #ffffff70]	; 109cb8 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x930>
        109d44:	e5900000 	ldr	r0, [r0]
        109d48:	e5901000 	ldr	r1, [r0]
        109d4c:	e59d0078 	ldr	r0, [sp, #120]
        109d50:	e5900000 	ldr	r0, [r0]
        109d54:	eb6ae941 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        109d58:	e59d1074 	ldr	r1, [sp, #116]
        109d5c:	e5810000 	str	r0, [r1]
        109d60:	e24dd004 	sub	sp, sp, #4	; 0x4
        109d64:	e59d10c0 	ldr	r1, [sp, #192]
        109d68:	e28d0078 	add	r0, sp, #120	; 0x78
        109d6c:	e3a03000 	mov	r3, #0	; 0x0
        109d70:	e3a02000 	mov	r2, #0	; 0x0
        109d74:	eb6ae93e 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        109d78:	eb6ae0f3 	bl	1bc214c <$AllocateRefHandle(long)>
        109d7c:	e58d0000 	str	r0, [sp]
        109d80:	e5900000 	ldr	r0, [r0]
        109d84:	e3300002 	teq	r0, #2	; 0x2
        109d88:	0a00004a 	beq	109eb8 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0xb30>
        109d8c:	e3a00002 	mov	r0, #2	; 0x2
        109d90:	eb664801 	bl	1a9bd9c <$MakeArray(long)>
        109d94:	e59d1094 	ldr	r1, [sp, #148]
        109d98:	e5810000 	str	r0, [r1]
        109d9c:	e1a00004 	mov	r0, r4
        109da0:	eb6aed4b 	bl	1bc52d4 <$MakeString(unsigned short const *)>
        109da4:	eb6ae0e8 	bl	1bc214c <$AllocateRefHandle(long)>
        109da8:	e1a08000 	mov	r8, r0
        109dac:	e3a01000 	mov	r1, #0	; 0x0
        109db0:	e5902000 	ldr	r2, [r0]
        109db4:	e59d0094 	ldr	r0, [sp, #148]
        109db8:	e5900000 	ldr	r0, [r0]
        109dbc:	eb6af165 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        109dc0:	e1a00008 	mov	r0, r8
        109dc4:	eb6ae4fc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        109dc8:	e59d00bc 	ldr	r0, [sp, #188]
        109dcc:	eb6ae0de 	bl	1bc214c <$AllocateRefHandle(long)>
        109dd0:	e1a08000 	mov	r8, r0
        109dd4:	e3a01001 	mov	r1, #1	; 0x1
        109dd8:	e5902000 	ldr	r2, [r0]
        109ddc:	e59d0094 	ldr	r0, [sp, #148]
        109de0:	e5900000 	ldr	r0, [r0]
        109de4:	eb6af15b 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        109de8:	e1a00008 	mov	r0, r8
        109dec:	eb6ae4f2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        109df0:	e28d1094 	add	r1, sp, #148	; 0x94
        109df4:	e1a0000d 	mov	r0, sp
        109df8:	eb6ae4f4 	bl	1bc31d0 <$DoBlock__FRC6RefVarT1>
        109dfc:	e59d1020 	ldr	r1, [sp, #32]
        109e00:	e5810000 	str	r0, [r1]
        109e04:	e3300002 	teq	r0, #2	; 0x2
        109e08:	0a00002a 	beq	109eb8 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0xb30>
        109e0c:	e24dd004 	sub	sp, sp, #4	; 0x4
        109e10:	e28d2080 	add	r2, sp, #128	; 0x80
        109e14:	e51f1160 	ldr	r1, [pc, #fffffea0]	; 109cbc <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x934>
        109e18:	e28d0024 	add	r0, sp, #36	; 0x24
        109e1c:	eb6af151 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        109e20:	e28d20a4 	add	r2, sp, #164	; 0xa4
        109e24:	e51f116c 	ldr	r1, [pc, #fffffe94]	; 109cc0 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x938>
        109e28:	e28d0024 	add	r0, sp, #36	; 0x24
        109e2c:	eb6af14d 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        109e30:	eb6ae0c2 	bl	1bc2140 <$AllocateFrame(void)>
        109e34:	e59d1020 	ldr	r1, [sp, #32]
        109e38:	e5810000 	str	r0, [r1]
        109e3c:	e51f75c8 	ldr	r7, [pc, #fffffa38]	; 10987c <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x4f4>
        109e40:	e5970000 	ldr	r0, [r7]
        109e44:	e5901000 	ldr	r1, [r0]
        109e48:	e59d0024 	ldr	r0, [sp, #36]
        109e4c:	e5900000 	ldr	r0, [r0]
        109e50:	eb6ae902 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        109e54:	eb6ae0bc 	bl	1bc214c <$AllocateRefHandle(long)>
        109e58:	e58d0000 	str	r0, [sp]
        109e5c:	e1a0200d 	mov	r2, sp
        109e60:	e1a01007 	mov	r1, r7
        109e64:	e28d0020 	add	r0, sp, #32	; 0x20
        109e68:	eb6af13e 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        109e6c:	e59d0000 	ldr	r0, [sp]
        109e70:	eb6ae4d1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        109e74:	e59b200c 	ldr	r2, [fp, #12]
        109e78:	e51f11bc 	ldr	r1, [pc, #fffffe44]	; 109cc4 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x93c>
        109e7c:	e28d0020 	add	r0, sp, #32	; 0x20
        109e80:	eb6af138 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        109e84:	e28d20a0 	add	r2, sp, #160	; 0xa0
        109e88:	e51f1624 	ldr	r1, [pc, #fffff9dc]	; 10986c <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x4e4>
        109e8c:	e28d0020 	add	r0, sp, #32	; 0x20
        109e90:	eb6af134 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        109e94:	e28d2024 	add	r2, sp, #36	; 0x24
        109e98:	e51f11d8 	ldr	r1, [pc, #fffffe28]	; 109cc8 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x940>
        109e9c:	e28d0020 	add	r0, sp, #32	; 0x20
        109ea0:	eb6af130 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        109ea4:	e28d1020 	add	r1, sp, #32	; 0x20
        109ea8:	e28d001c 	add	r0, sp, #28	; 0x1c
        109eac:	eb6ae09d 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        109eb0:	e3a07001 	mov	r7, #1	; 0x1
        109eb4:	e28dd004 	add	sp, sp, #4	; 0x4
        109eb8:	e59d0000 	ldr	r0, [sp]
        109ebc:	eb6ae4be 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        109ec0:	e28dd004 	add	sp, sp, #4	; 0x4
        109ec4:	e2899001 	add	r9, r9, #1	; 0x1
        109ec8:	e59d0084 	ldr	r0, [sp, #132]
        109ecc:	e1590000 	cmp	r9, r0
        109ed0:	bafffec0 	blt	1099d8 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x650>
        109ed4:	e3370000 	teq	r7, #0	; 0x0
        109ed8:	0afffe81 	beq	1098e4 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x55c>
        109edc:	e24dd004 	sub	sp, sp, #4	; 0x4
        109ee0:	eb6ae096 	bl	1bc2140 <$AllocateFrame(void)>
        109ee4:	e59d1014 	ldr	r1, [sp, #20]
        109ee8:	e5810000 	str	r0, [r1]
        109eec:	e51f7678 	ldr	r7, [pc, #fffff988]	; 10987c <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x4f4>
        109ef0:	e5970000 	ldr	r0, [r7]
        109ef4:	e5901000 	ldr	r1, [r0]
        109ef8:	e59d00a0 	ldr	r0, [sp, #160]
        109efc:	e5900000 	ldr	r0, [r0]
        109f00:	eb6ae8d6 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        109f04:	eb6ae090 	bl	1bc214c <$AllocateRefHandle(long)>
        109f08:	e58d0000 	str	r0, [sp]
        109f0c:	e1a0200d 	mov	r2, sp
        109f10:	e1a01007 	mov	r1, r7
        109f14:	e28d0014 	add	r0, sp, #20	; 0x14
        109f18:	eb6af112 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        109f1c:	e59d0000 	ldr	r0, [sp]
        109f20:	eb6ae4a5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        109f24:	e28d2018 	add	r2, sp, #24	; 0x18
        109f28:	e59f1034 	ldr	r1, [pc, #34]	; 109f64 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0xbdc>
        109f2c:	e28d0014 	add	r0, sp, #20	; 0x14
        109f30:	eb6af10c 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        109f34:	e59f202c 	ldr	r2, [pc, #2c]	; 109f68 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0xbe0>	; fField2
        109f38:	e59f102c 	ldr	r1, [pc, #2c]	; 109f6c <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0xbe4>	; fField2
        109f3c:	e28d0014 	add	r0, sp, #20	; 0x14
        109f40:	eb6af108 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        109f44:	e28d1014 	add	r1, sp, #20	; 0x14
        109f48:	e59b0010 	ldr	r0, [fp, #16]
        109f4c:	eb6ae075 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        109f50:	e28dd004 	add	sp, sp, #4	; 0x4
        109f54:	eafffe62 	b	1098e4 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x55c>
        109f58:	00684cb0 	streqh	r4, [r8], -#192
        109f5c:	00682e68 	rsbeq	r2, r8, r8, ror #28
        109f60:	00684ac0 	rsbeq	r4, r8, r0, asr #21
        109f64:	00683360 	rsbeq	r3, r8, r0, ror #6
        109f68:	00682638 	rsbeq	r2, r8, r8, lsr r6
        109f6c:	00681ed8 	ldreqd	r1, [r8], -#232
        109f70:	e51f02c0 	ldr	r0, [pc, #fffffd40]	; 109cb8 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x930>
        109f74:	e5900000 	ldr	r0, [r0]
        109f78:	e5901000 	ldr	r1, [r0]
        109f7c:	e59d0078 	ldr	r0, [sp, #120]
        109f80:	e5900000 	ldr	r0, [r0]
        109f84:	eb6ae8b5 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        109f88:	e59d1074 	ldr	r1, [sp, #116]
        109f8c:	e5810000 	str	r0, [r1]
        109f90:	e59d0074 	ldr	r0, [sp, #116]
        109f94:	e5900000 	ldr	r0, [r0]
        109f98:	eb6aecc3 	bl	1bc52ac <$Length(long)>
        109f9c:	e2400002 	sub	r0, r0, #2	; 0x2
        109fa0:	e1a080a0 	mov	r8, r0, lsr #1
        109fa4:	e24dd004 	sub	sp, sp, #4	; 0x4
        109fa8:	e1560008 	cmp	r6, r8
        109fac:	caffffc3 	bgt	109ec0 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0xb38>
        109fb0:	e28d1078 	add	r1, sp, #120	; 0x78
        109fb4:	e1a0000d 	mov	r0, sp
        109fb8:	eb6adc46 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        109fbc:	e1a0000d 	mov	r0, sp
        109fc0:	eb6ae053 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        109fc4:	e1a0a000 	mov	sl, r0
        109fc8:	e1a0000d 	mov	r0, sp
        109fcc:	e3a01000 	mov	r1, #0	; 0x0
        109fd0:	eb6ae04a 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        109fd4:	e3a00000 	mov	r0, #0	; 0x0
        109fd8:	e58d00ac 	str	r0, [sp, #172]
        109fdc:	e28d30b4 	add	r3, sp, #180	; 0xb4
        109fe0:	e1a02008 	mov	r2, r8
        109fe4:	e28d10ac 	add	r1, sp, #172	; 0xac
        109fe8:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        109fec:	e1a0300a 	mov	r3, sl
        109ff0:	e1a02006 	mov	r2, r6
        109ff4:	e1a01004 	mov	r1, r4
        109ff8:	e1a00005 	mov	r0, r5
        109ffc:	eb670984 	bl	1acc614 <TLibrarian::$TextSearch(unsigned short *, long, unsigned short *, long *, long, long *)>
        10a000:	e28dd00c 	add	sp, sp, #12	; 0xc
        10a004:	e3300000 	teq	r0, #0	; 0x0
        10a008:	0a000056 	beq	10a168 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0xde0>
        10a00c:	e24dd008 	sub	sp, sp, #8	; 0x8
        10a010:	eb6ae04a 	bl	1bc2140 <$AllocateFrame(void)>
        10a014:	e59d1028 	ldr	r1, [sp, #40]
        10a018:	e5810000 	str	r0, [r1]
        10a01c:	e59d00c4 	ldr	r0, [sp, #196]
        10a020:	eb6ae049 	bl	1bc214c <$AllocateRefHandle(long)>
        10a024:	e58d0000 	str	r0, [sp]
        10a028:	e1a0200d 	mov	r2, sp
        10a02c:	e59f1148 	ldr	r1, [pc, #148]	; 10a17c <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0xdf4>
        10a030:	e28d0028 	add	r0, sp, #40	; 0x28
        10a034:	eb6af0cb 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10a038:	e59d0000 	ldr	r0, [sp]
        10a03c:	eb6ae45e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10a040:	e3a07000 	mov	r7, #0	; 0x0
        10a044:	e28d2084 	add	r2, sp, #132	; 0x84
        10a048:	e51f1394 	ldr	r1, [pc, #fffffc6c]	; 109cbc <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x934>
        10a04c:	e28d0028 	add	r0, sp, #40	; 0x28
        10a050:	eb6af0c4 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10a054:	e28d20a8 	add	r2, sp, #168	; 0xa8
        10a058:	e51f13a0 	ldr	r1, [pc, #fffffc60]	; 109cc0 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x938>
        10a05c:	e28d0028 	add	r0, sp, #40	; 0x28
        10a060:	eb6af0c0 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10a064:	e59d00bc 	ldr	r0, [sp, #188]
        10a068:	e1a00100 	mov	r0, r0, lsl #2
        10a06c:	eb6ae036 	bl	1bc214c <$AllocateRefHandle(long)>
        10a070:	e58d0004 	str	r0, [sp, #4]	; fField4
        10a074:	e28d2004 	add	r2, sp, #4	; 0x4
        10a078:	e59f1100 	ldr	r1, [pc, #100]	; 10a180 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0xdf8>
        10a07c:	e28d0028 	add	r0, sp, #40	; 0x28
        10a080:	eb6af0b8 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10a084:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        10a088:	eb6ae44b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10a08c:	e5cd7031 	strb	r7, [sp, #49]
        10a090:	e5cd7030 	strb	r7, [sp, #48]
        10a094:	e24dd004 	sub	sp, sp, #4	; 0x4
        10a098:	e59d00c0 	ldr	r0, [sp, #192]
        10a09c:	e3500000 	cmp	r0, #0	; 0x0
        10a0a0:	c28d1030 	addgt	r1, sp, #48	; 0x30
        10a0a4:	c28d0034 	addgt	r0, sp, #52	; 0x34
        10a0a8:	cb6b91ab 	blgt	1bee75c <$Ustrcpy>
        10a0ac:	e58d80bc 	str	r8, [sp, #188]
        10a0b0:	e28d20bc 	add	r2, sp, #188	; 0xbc
        10a0b4:	e28d10c0 	add	r1, sp, #192	; 0xc0
        10a0b8:	e1a0000a 	mov	r0, sl
        10a0bc:	eb662632 	bl	1a9398c <$ExtractWords__FPUsPlT2>
        10a0c0:	e3a00022 	mov	r0, #34	; 0x22
        10a0c4:	e59d20bc 	ldr	r2, [sp, #188]
        10a0c8:	e3520022 	cmp	r2, #34	; 0x22
        10a0cc:	a1a02000 	movge	r2, r0
        10a0d0:	e58d20bc 	str	r2, [sp, #188]
        10a0d4:	e59d00c0 	ldr	r0, [sp, #192]
        10a0d8:	e08a1080 	add	r1, sl, r0, lsl #1
        10a0dc:	e28d0034 	add	r0, sp, #52	; 0x34
        10a0e0:	eb6b919f 	bl	1bee764 <$Ustrncat>
        10a0e4:	e28d1030 	add	r1, sp, #48	; 0x30
        10a0e8:	e28d0034 	add	r0, sp, #52	; 0x34
        10a0ec:	eb6b9197 	bl	1bee750 <$Ustrcat>
        10a0f0:	eb6ae012 	bl	1bc2140 <$AllocateFrame(void)>
        10a0f4:	e59d1028 	ldr	r1, [sp, #40]
        10a0f8:	e5810000 	str	r0, [r1]
        10a0fc:	e28d0034 	add	r0, sp, #52	; 0x34
        10a100:	eb6aec73 	bl	1bc52d4 <$MakeString(unsigned short const *)>
        10a104:	eb6ae010 	bl	1bc214c <$AllocateRefHandle(long)>
        10a108:	e58d0000 	str	r0, [sp]
        10a10c:	e1a0200d 	mov	r2, sp
        10a110:	e51f189c 	ldr	r1, [pc, #fffff764]	; 10987c <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x4f4>
        10a114:	e28d0028 	add	r0, sp, #40	; 0x28
        10a118:	eb6af092 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10a11c:	e59d0000 	ldr	r0, [sp]
        10a120:	eb6ae425 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10a124:	e59b200c 	ldr	r2, [fp, #12]
        10a128:	e51f146c 	ldr	r1, [pc, #fffffb94]	; 109cc4 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x93c>
        10a12c:	e28d0028 	add	r0, sp, #40	; 0x28
        10a130:	eb6af08c 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10a134:	e28d20a8 	add	r2, sp, #168	; 0xa8
        10a138:	e51f18d4 	ldr	r1, [pc, #fffff72c]	; 10986c <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x4e4>
        10a13c:	e28d0028 	add	r0, sp, #40	; 0x28
        10a140:	eb6af088 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10a144:	e28d202c 	add	r2, sp, #44	; 0x2c
        10a148:	e51f1488 	ldr	r1, [pc, #fffffb78]	; 109cc8 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x940>
        10a14c:	e28d0028 	add	r0, sp, #40	; 0x28
        10a150:	eb6af084 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10a154:	e28d1028 	add	r1, sp, #40	; 0x28
        10a158:	e28d0024 	add	r0, sp, #36	; 0x24
        10a15c:	eb6adff1 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        10a160:	e3a07001 	mov	r7, #1	; 0x1
        10a164:	e28dd00c 	add	sp, sp, #12	; 0xc
        10a168:	e59d00ac 	ldr	r0, [sp, #172]
        10a16c:	e0860000 	add	r0, r6, r0
        10a170:	e1500008 	cmp	r0, r8
        10a174:	daffff98 	ble	109fdc <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0xc54>
        10a178:	eaffff50 	b	109ec0 <TLibrarian::Find(unsigned short *, RefVar const &, RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0xb38>
        10a17c:	006834f8 	streqd	r3, [r8], -#72
        10a180:	00682390 	streqb	r2, [r8], -#48
    */
}

/**
 * Symbol: TLibrarian::FindContentBySlot(RefVar const &, RefVar const &, RefVar const &)
 * Address: 0010a1a0
 */
TLibrarian::FindContentBySlot(RefVar const &, RefVar const &, RefVar const &) {
    /*
        10a1a0:	e1a0c00d 	mov	ip, sp
        10a1a4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        10a1a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        10a1ac:	e1a09000 	mov	r9, r0
        10a1b0:	e1a07001 	mov	r7, r1
        10a1b4:	e1a04002 	mov	r4, r2
        10a1b8:	e1a06003 	mov	r6, r3
        10a1bc:	e24dd020 	sub	sp, sp, #32	; 0x20
        10a1c0:	e3a00002 	mov	r0, #2	; 0x2
        10a1c4:	eb6adfe0 	bl	1bc214c <$AllocateRefHandle(long)>
        10a1c8:	e58d001c 	str	r0, [sp, #28]
        10a1cc:	e3a00002 	mov	r0, #2	; 0x2
        10a1d0:	eb6adfdd 	bl	1bc214c <$AllocateRefHandle(long)>
        10a1d4:	e58d0018 	str	r0, [sp, #24]
        10a1d8:	e3a00002 	mov	r0, #2	; 0x2
        10a1dc:	eb6adfda 	bl	1bc214c <$AllocateRefHandle(long)>
        10a1e0:	e58d0014 	str	r0, [sp, #20]
        10a1e4:	e3a00002 	mov	r0, #2	; 0x2
        10a1e8:	eb6adfd7 	bl	1bc214c <$AllocateRefHandle(long)>
        10a1ec:	e58d0010 	str	r0, [sp, #16]
        10a1f0:	e3a00002 	mov	r0, #2	; 0x2
        10a1f4:	eb6adfd4 	bl	1bc214c <$AllocateRefHandle(long)>
        10a1f8:	e3a05000 	mov	r5, #0	; 0x0
        10a1fc:	e58d0008 	str	r0, [sp, #8]	; fField8
        10a200:	e58d5004 	str	r5, [sp, #4]	; fField4
        10a204:	e5960000 	ldr	r0, [r6]
        10a208:	e5900000 	ldr	r0, [r0]
        10a20c:	e3300002 	teq	r0, #2	; 0x2
        10a210:	0a000003 	beq	10a224 <TLibrarian::FindContentBySlot(RefVar const &, RefVar const &, RefVar const &)+0x84>
        10a214:	e3a0101a 	mov	r1, #26	; 0x1a
        10a218:	eb6ae804 	bl	1bc4230 <$EQRef__FlT1>
        10a21c:	e3300000 	teq	r0, #0	; 0x0
        10a220:	0a00001a 	beq	10a290 <TLibrarian::FindContentBySlot(RefVar const &, RefVar const &, RefVar const &)+0xf0>
        10a224:	e59f1060 	ldr	r1, [pc, #60]	; 10a28c <TLibrarian::FindContentBySlot(RefVar const &, RefVar const &, RefVar const &)+0xec>
        10a228:	e1a00007 	mov	r0, r7
        10a22c:	e3a03000 	mov	r3, #0	; 0x0
        10a230:	e3a02000 	mov	r2, #0	; 0x0
        10a234:	eb6ae80e 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        10a238:	e59d101c 	ldr	r1, [sp, #28]
        10a23c:	e5810000 	str	r0, [r1]
        10a240:	e28d101c 	add	r1, sp, #28	; 0x1c
        10a244:	e1a00009 	mov	r0, r9
        10a248:	eb662e14 	bl	1a95aa0 <TLibrarian::$GetBookFrame(RefVar const &)>
        10a24c:	e59d1018 	ldr	r1, [sp, #24]
        10a250:	e5810000 	str	r0, [r1]
        10a254:	e3a0001a 	mov	r0, #26	; 0x1a
        10a258:	eb6adfbb 	bl	1bc214c <$AllocateRefHandle(long)>
        10a25c:	e1a07000 	mov	r7, r0
        10a260:	e5901000 	ldr	r1, [r0]
        10a264:	e5960000 	ldr	r0, [r6]
        10a268:	e5900000 	ldr	r0, [r0]
        10a26c:	eb6ae7ef 	bl	1bc4230 <$EQRef__FlT1>
        10a270:	e1b06000 	movs	r6, r0
        10a274:	13a06001 	movne	r6, #1	; 0x1
        10a278:	e1a00007 	mov	r0, r7
        10a27c:	eb6ae3ce 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10a280:	e3360000 	teq	r6, #0	; 0x0
        10a284:	13a05001 	movne	r5, #1	; 0x1
        10a288:	ea000004 	b	10a2a0 <TLibrarian::FindContentBySlot(RefVar const &, RefVar const &, RefVar const &)+0x100>
        10a28c:	00683308 	rsbeq	r3, r8, r8, lsl #6
        10a290:	e5960000 	ldr	r0, [r6]
        10a294:	e5900000 	ldr	r0, [r0]
        10a298:	e59d1018 	ldr	r1, [sp, #24]
        10a29c:	e5810000 	str	r0, [r1]
        10a2a0:	e3a00000 	mov	r0, #0	; 0x0
        10a2a4:	eb6646bc 	bl	1a9bd9c <$MakeArray(long)>
        10a2a8:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        10a2ac:	e5810000 	str	r0, [r1]
        10a2b0:	e59f00a8 	ldr	r0, [pc, #a8]	; 10a360 <TLibrarian::FindContentBySlot(RefVar const &, RefVar const &, RefVar const &)+0x1c0>
        10a2b4:	e5900000 	ldr	r0, [r0]
        10a2b8:	e5901000 	ldr	r1, [r0]
        10a2bc:	e59d0018 	ldr	r0, [sp, #24]
        10a2c0:	e5900000 	ldr	r0, [r0]
        10a2c4:	eb6ae7e5 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10a2c8:	e59d1014 	ldr	r1, [sp, #20]
        10a2cc:	e5810000 	str	r0, [r1]
        10a2d0:	eb6aebf5 	bl	1bc52ac <$Length(long)>
        10a2d4:	e58d000c 	str	r0, [sp, #12]
        10a2d8:	e1a00004 	mov	r0, r4
        10a2dc:	eb6ba5aa 	bl	1bf398c <$IsArray(RefVar const &)>
        10a2e0:	e3300000 	teq	r0, #0	; 0x0
        10a2e4:	0a000005 	beq	10a300 <TLibrarian::FindContentBySlot(RefVar const &, RefVar const &, RefVar const &)+0x160>
        10a2e8:	e5940000 	ldr	r0, [r4]
        10a2ec:	e5900000 	ldr	r0, [r0]
        10a2f0:	eb6aebed 	bl	1bc52ac <$Length(long)>
        10a2f4:	e1a08000 	mov	r8, r0
        10a2f8:	e3a00001 	mov	r0, #1	; 0x1
        10a2fc:	e58d0004 	str	r0, [sp, #4]	; fField4
        10a300:	e3a07000 	mov	r7, #0	; 0x0
        10a304:	e59d000c 	ldr	r0, [sp, #12]
        10a308:	e3500000 	cmp	r0, #0	; 0x0
        10a30c:	da000038 	ble	10a3f4 <TLibrarian::FindContentBySlot(RefVar const &, RefVar const &, RefVar const &)+0x254>
        10a310:	e1a01007 	mov	r1, r7
        10a314:	e59d0014 	ldr	r0, [sp, #20]
        10a318:	e5900000 	ldr	r0, [r0]
        10a31c:	eb6ae7cc 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        10a320:	e59d1010 	ldr	r1, [sp, #16]
        10a324:	e5810000 	str	r0, [r1]
        10a328:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        10a32c:	e3310000 	teq	r1, #0	; 0x0
        10a330:	1a00000b 	bne	10a364 <TLibrarian::FindContentBySlot(RefVar const &, RefVar const &, RefVar const &)+0x1c4>
        10a334:	e5941000 	ldr	r1, [r4]
        10a338:	e5911000 	ldr	r1, [r1]
        10a33c:	eb6ae7c1 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        10a340:	e3300000 	teq	r0, #0	; 0x0
        10a344:	0a000026 	beq	10a3e4 <TLibrarian::FindContentBySlot(RefVar const &, RefVar const &, RefVar const &)+0x244>
        10a348:	e28d1010 	add	r1, sp, #16	; 0x10
        10a34c:	e28d0008 	add	r0, sp, #8	; 0x8
        10a350:	eb6adf74 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        10a354:	e3350000 	teq	r5, #0	; 0x0
        10a358:	1a000025 	bne	10a3f4 <TLibrarian::FindContentBySlot(RefVar const &, RefVar const &, RefVar const &)+0x254>
        10a35c:	ea000020 	b	10a3e4 <TLibrarian::FindContentBySlot(RefVar const &, RefVar const &, RefVar const &)+0x244>
        10a360:	006825f8 	streqd	r2, [r8], -#88
        10a364:	e3a00001 	mov	r0, #1	; 0x1
        10a368:	e3a06000 	mov	r6, #0	; 0x0
        10a36c:	e3580000 	cmp	r8, #0	; 0x0
        10a370:	e58d0000 	str	r0, [sp]
        10a374:	da000015 	ble	10a3d0 <TLibrarian::FindContentBySlot(RefVar const &, RefVar const &, RefVar const &)+0x230>
        10a378:	e1a01006 	mov	r1, r6
        10a37c:	e5940000 	ldr	r0, [r4]
        10a380:	e5900000 	ldr	r0, [r0]
        10a384:	eb6ae7b2 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        10a388:	eb6adf6f 	bl	1bc214c <$AllocateRefHandle(long)>
        10a38c:	e1a09000 	mov	r9, r0
        10a390:	e5901000 	ldr	r1, [r0]
        10a394:	e59d0010 	ldr	r0, [sp, #16]
        10a398:	e5900000 	ldr	r0, [r0]
        10a39c:	eb6ae7a9 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        10a3a0:	e1b0a000 	movs	sl, r0
        10a3a4:	13a0a001 	movne	sl, #1	; 0x1
        10a3a8:	e1a00009 	mov	r0, r9
        10a3ac:	eb6ae382 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10a3b0:	e33a0000 	teq	sl, #0	; 0x0
        10a3b4:	0a00000a 	beq	10a3e4 <TLibrarian::FindContentBySlot(RefVar const &, RefVar const &, RefVar const &)+0x244>
        10a3b8:	e2866001 	add	r6, r6, #1	; 0x1
        10a3bc:	e1560008 	cmp	r6, r8
        10a3c0:	baffffec 	blt	10a378 <TLibrarian::FindContentBySlot(RefVar const &, RefVar const &, RefVar const &)+0x1d8>
        10a3c4:	e59d0000 	ldr	r0, [sp]
        10a3c8:	e3300000 	teq	r0, #0	; 0x0
        10a3cc:	0a000004 	beq	10a3e4 <TLibrarian::FindContentBySlot(RefVar const &, RefVar const &, RefVar const &)+0x244>
        10a3d0:	e28d1010 	add	r1, sp, #16	; 0x10
        10a3d4:	e28d0008 	add	r0, sp, #8	; 0x8
        10a3d8:	eb6adf52 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        10a3dc:	e3350000 	teq	r5, #0	; 0x0
        10a3e0:	1a000003 	bne	10a3f4 <TLibrarian::FindContentBySlot(RefVar const &, RefVar const &, RefVar const &)+0x254>
        10a3e4:	e2877001 	add	r7, r7, #1	; 0x1
        10a3e8:	e59d000c 	ldr	r0, [sp, #12]
        10a3ec:	e1570000 	cmp	r7, r0
        10a3f0:	baffffc6 	blt	10a310 <TLibrarian::FindContentBySlot(RefVar const &, RefVar const &, RefVar const &)+0x170>
        10a3f4:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        10a3f8:	e5904000 	ldr	r4, [r0]
        10a3fc:	eb6ae36e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10a400:	e59d0010 	ldr	r0, [sp, #16]
        10a404:	eb6ae36c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10a408:	e59d0014 	ldr	r0, [sp, #20]
        10a40c:	eb6ae36a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10a410:	e59d0018 	ldr	r0, [sp, #24]
        10a414:	eb6ae368 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10a418:	e59d001c 	ldr	r0, [sp, #28]
        10a41c:	eb6ae366 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10a420:	e1a00004 	mov	r0, r4
        10a424:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TLibrarian::FindContentByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)
 * Address: 0010a458
 */
TLibrarian::FindContentByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &) {
    /*
        10a458:	e1a0c00d 	mov	ip, sp
        10a45c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        10a460:	e24cb004 	sub	fp, ip, #4	; 0x4
        10a464:	e1a05000 	mov	r5, r0
        10a468:	e1a07001 	mov	r7, r1
        10a46c:	e1a04002 	mov	r4, r2
        10a470:	e1a06003 	mov	r6, r3
        10a474:	e59b8004 	ldr	r8, [fp, #4]	; fField4
        10a478:	e24dd024 	sub	sp, sp, #36	; 0x24
        10a47c:	e3a00002 	mov	r0, #2	; 0x2
        10a480:	eb6adf31 	bl	1bc214c <$AllocateRefHandle(long)>
        10a484:	e58d0020 	str	r0, [sp, #32]
        10a488:	e3a00002 	mov	r0, #2	; 0x2
        10a48c:	eb6adf2e 	bl	1bc214c <$AllocateRefHandle(long)>
        10a490:	e58d001c 	str	r0, [sp, #28]
        10a494:	e3a00002 	mov	r0, #2	; 0x2
        10a498:	eb6adf2b 	bl	1bc214c <$AllocateRefHandle(long)>
        10a49c:	e58d0018 	str	r0, [sp, #24]
        10a4a0:	e3a00002 	mov	r0, #2	; 0x2
        10a4a4:	eb6adf28 	bl	1bc214c <$AllocateRefHandle(long)>
        10a4a8:	e58d0014 	str	r0, [sp, #20]
        10a4ac:	e3a00002 	mov	r0, #2	; 0x2
        10a4b0:	eb6adf25 	bl	1bc214c <$AllocateRefHandle(long)>
        10a4b4:	e58d000c 	str	r0, [sp, #12]
        10a4b8:	e3a00000 	mov	r0, #0	; 0x0
        10a4bc:	e58d0008 	str	r0, [sp, #8]	; fField8
        10a4c0:	e58d0004 	str	r0, [sp, #4]	; fField4
        10a4c4:	e5980000 	ldr	r0, [r8]
        10a4c8:	e5900000 	ldr	r0, [r0]
        10a4cc:	e3300002 	teq	r0, #2	; 0x2
        10a4d0:	0a000003 	beq	10a4e4 <TLibrarian::FindContentByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x8c>
        10a4d4:	e3a0101a 	mov	r1, #26	; 0x1a
        10a4d8:	eb6ae754 	bl	1bc4230 <$EQRef__FlT1>
        10a4dc:	e3300000 	teq	r0, #0	; 0x0
        10a4e0:	0a00001b 	beq	10a554 <TLibrarian::FindContentByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0xfc>
        10a4e4:	e59f1064 	ldr	r1, [pc, #64]	; 10a550 <TLibrarian::FindContentByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0xf8>
        10a4e8:	e1a00007 	mov	r0, r7
        10a4ec:	e3a03000 	mov	r3, #0	; 0x0
        10a4f0:	e3a02000 	mov	r2, #0	; 0x0
        10a4f4:	eb6ae75e 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        10a4f8:	e59d1020 	ldr	r1, [sp, #32]
        10a4fc:	e5810000 	str	r0, [r1]
        10a500:	e28d1020 	add	r1, sp, #32	; 0x20
        10a504:	e1a00005 	mov	r0, r5
        10a508:	eb662d64 	bl	1a95aa0 <TLibrarian::$GetBookFrame(RefVar const &)>
        10a50c:	e59d101c 	ldr	r1, [sp, #28]
        10a510:	e5810000 	str	r0, [r1]
        10a514:	e3a0001a 	mov	r0, #26	; 0x1a
        10a518:	eb6adf0b 	bl	1bc214c <$AllocateRefHandle(long)>
        10a51c:	e1a07000 	mov	r7, r0
        10a520:	e5901000 	ldr	r1, [r0]
        10a524:	e5980000 	ldr	r0, [r8]
        10a528:	e5900000 	ldr	r0, [r0]
        10a52c:	eb6ae73f 	bl	1bc4230 <$EQRef__FlT1>
        10a530:	e1b08000 	movs	r8, r0
        10a534:	13a08001 	movne	r8, #1	; 0x1
        10a538:	e1a00007 	mov	r0, r7
        10a53c:	eb6ae31e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10a540:	e3380000 	teq	r8, #0	; 0x0
        10a544:	13a00001 	movne	r0, #1	; 0x1
        10a548:	158d0008 	strne	r0, [sp, #8]	; fField8
        10a54c:	ea000004 	b	10a564 <TLibrarian::FindContentByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x10c>
        10a550:	00683308 	rsbeq	r3, r8, r8, lsl #6
        10a554:	e5980000 	ldr	r0, [r8]
        10a558:	e5900000 	ldr	r0, [r0]
        10a55c:	e59d101c 	ldr	r1, [sp, #28]
        10a560:	e5810000 	str	r0, [r1]
        10a564:	e1a00004 	mov	r0, r4
        10a568:	eb6ba507 	bl	1bf398c <$IsArray(RefVar const &)>
        10a56c:	e3300000 	teq	r0, #0	; 0x0
        10a570:	0a000005 	beq	10a58c <TLibrarian::FindContentByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x134>
        10a574:	e5940000 	ldr	r0, [r4]
        10a578:	e5900000 	ldr	r0, [r0]
        10a57c:	eb6aeb4a 	bl	1bc52ac <$Length(long)>
        10a580:	e1a0a000 	mov	sl, r0
        10a584:	e3a00001 	mov	r0, #1	; 0x1
        10a588:	e58d0004 	str	r0, [sp, #4]	; fField4
        10a58c:	e3a00000 	mov	r0, #0	; 0x0
        10a590:	eb664601 	bl	1a9bd9c <$MakeArray(long)>
        10a594:	e59d100c 	ldr	r1, [sp, #12]
        10a598:	e5810000 	str	r0, [r1]
        10a59c:	e59f0088 	ldr	r0, [pc, #88]	; 10a62c <TLibrarian::FindContentByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x1d4>
        10a5a0:	e5900000 	ldr	r0, [r0]
        10a5a4:	e5901000 	ldr	r1, [r0]
        10a5a8:	e59d001c 	ldr	r0, [sp, #28]
        10a5ac:	e5900000 	ldr	r0, [r0]
        10a5b0:	eb6ae72a 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10a5b4:	e59d1018 	ldr	r1, [sp, #24]
        10a5b8:	e5810000 	str	r0, [r1]
        10a5bc:	eb6aeb3a 	bl	1bc52ac <$Length(long)>
        10a5c0:	e3a09000 	mov	r9, #0	; 0x0
        10a5c4:	e58d0010 	str	r0, [sp, #16]
        10a5c8:	e3500000 	cmp	r0, #0	; 0x0
        10a5cc:	da00004a 	ble	10a6fc <TLibrarian::FindContentByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x2a4>
        10a5d0:	e1a01009 	mov	r1, r9
        10a5d4:	e59d0018 	ldr	r0, [sp, #24]
        10a5d8:	e5900000 	ldr	r0, [r0]
        10a5dc:	eb6ae71c 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        10a5e0:	e59d1014 	ldr	r1, [sp, #20]
        10a5e4:	e5810000 	str	r0, [r1]
        10a5e8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        10a5ec:	e3300000 	teq	r0, #0	; 0x0
        10a5f0:	1a00000e 	bne	10a630 <TLibrarian::FindContentByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x1d8>
        10a5f4:	e1a03006 	mov	r3, r6
        10a5f8:	e1a02004 	mov	r2, r4
        10a5fc:	e28d1014 	add	r1, sp, #20	; 0x14
        10a600:	e1a00005 	mov	r0, r5
        10a604:	eb660c25 	bl	1a8d6a0 <TLibrarian::$CompareValues(RefVar const &, RefVar const &, RefVar const &)>
        10a608:	e3300001 	teq	r0, #1	; 0x1
        10a60c:	1a000036 	bne	10a6ec <TLibrarian::FindContentByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x294>
        10a610:	e28d1014 	add	r1, sp, #20	; 0x14
        10a614:	e28d000c 	add	r0, sp, #12	; 0xc
        10a618:	eb6adec2 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        10a61c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        10a620:	e3300000 	teq	r0, #0	; 0x0
        10a624:	1a000034 	bne	10a6fc <TLibrarian::FindContentByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x2a4>
        10a628:	ea00002f 	b	10a6ec <TLibrarian::FindContentByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x294>
        10a62c:	006825f8 	streqd	r2, [r8], -#88
        10a630:	e3a00001 	mov	r0, #1	; 0x1
        10a634:	e3a08000 	mov	r8, #0	; 0x0
        10a638:	e35a0000 	cmp	sl, #0	; 0x0
        10a63c:	e58d0000 	str	r0, [sp]
        10a640:	da000023 	ble	10a6d4 <TLibrarian::FindContentByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x27c>
        10a644:	e24dd008 	sub	sp, sp, #8	; 0x8
        10a648:	e1a01008 	mov	r1, r8
        10a64c:	e5960000 	ldr	r0, [r6]
        10a650:	e5900000 	ldr	r0, [r0]
        10a654:	eb6ae6fe 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        10a658:	eb6adebb 	bl	1bc214c <$AllocateRefHandle(long)>
        10a65c:	e58d0000 	str	r0, [sp]
        10a660:	e1a0700d 	mov	r7, sp
        10a664:	e1a01008 	mov	r1, r8
        10a668:	e5940000 	ldr	r0, [r4]
        10a66c:	e5900000 	ldr	r0, [r0]
        10a670:	eb6ae6f7 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        10a674:	eb6adeb4 	bl	1bc214c <$AllocateRefHandle(long)>
        10a678:	e58d0004 	str	r0, [sp, #4]	; fField4
        10a67c:	e28d2004 	add	r2, sp, #4	; 0x4
        10a680:	e28d101c 	add	r1, sp, #28	; 0x1c
        10a684:	e1a00005 	mov	r0, r5
        10a688:	e1a03007 	mov	r3, r7
        10a68c:	eb660c03 	bl	1a8d6a0 <TLibrarian::$CompareValues(RefVar const &, RefVar const &, RefVar const &)>
        10a690:	e3300001 	teq	r0, #1	; 0x1
        10a694:	13a07000 	movne	r7, #0	; 0x0
        10a698:	03a07001 	moveq	r7, #1	; 0x1
        10a69c:	e59d0000 	ldr	r0, [sp]
        10a6a0:	eb6ae2c5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10a6a4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        10a6a8:	eb6ae2c3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10a6ac:	e3370000 	teq	r7, #0	; 0x0
        10a6b0:	e28dd008 	add	sp, sp, #8	; 0x8
        10a6b4:	1a000000 	bne	10a6bc <TLibrarian::FindContentByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x264>
        10a6b8:	ea00000b 	b	10a6ec <TLibrarian::FindContentByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x294>
        10a6bc:	e2888001 	add	r8, r8, #1	; 0x1
        10a6c0:	e158000a 	cmp	r8, sl
        10a6c4:	baffffde 	blt	10a644 <TLibrarian::FindContentByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x1ec>
        10a6c8:	e59d0000 	ldr	r0, [sp]
        10a6cc:	e3300000 	teq	r0, #0	; 0x0
        10a6d0:	0a000005 	beq	10a6ec <TLibrarian::FindContentByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x294>
        10a6d4:	e28d1014 	add	r1, sp, #20	; 0x14
        10a6d8:	e28d000c 	add	r0, sp, #12	; 0xc
        10a6dc:	eb6ade91 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        10a6e0:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        10a6e4:	e3300000 	teq	r0, #0	; 0x0
        10a6e8:	1a000003 	bne	10a6fc <TLibrarian::FindContentByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x2a4>
        10a6ec:	e2899001 	add	r9, r9, #1	; 0x1
        10a6f0:	e59d0010 	ldr	r0, [sp, #16]
        10a6f4:	e1590000 	cmp	r9, r0
        10a6f8:	baffffb4 	blt	10a5d0 <TLibrarian::FindContentByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x178>
        10a6fc:	e59d000c 	ldr	r0, [sp, #12]
        10a700:	e5904000 	ldr	r4, [r0]
        10a704:	eb6ae2ac 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10a708:	e59d0014 	ldr	r0, [sp, #20]
        10a70c:	eb6ae2aa 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10a710:	e59d0018 	ldr	r0, [sp, #24]
        10a714:	eb6ae2a8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10a718:	e59d001c 	ldr	r0, [sp, #28]
        10a71c:	eb6ae2a6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10a720:	e59d0020 	ldr	r0, [sp, #32]
        10a724:	eb6ae2a4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10a728:	e1a00004 	mov	r0, r4
        10a72c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TLibrarian::FindPageByContent(RefVar const &, RefVar const &, long, long *, RefVar const &)
 * Address: 0010a980
 */
TLibrarian::FindPageByContent(RefVar const &, RefVar const &, long, long *, RefVar const &) {
    /*
        10a980:	e1a0c00d 	mov	ip, sp
        10a984:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        10a988:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        10a98c:	e24cb014 	sub	fp, ip, #20	; 0x14
        10a990:	e1a08001 	mov	r8, r1
        10a994:	e59ba018 	ldr	sl, [fp, #24]
        10a998:	e24dd004 	sub	sp, sp, #4	; 0x4
        10a99c:	e3a00002 	mov	r0, #2	; 0x2
        10a9a0:	eb6adde9 	bl	1bc214c <$AllocateRefHandle(long)>
        10a9a4:	e3a04000 	mov	r4, #0	; 0x0
        10a9a8:	e58d0000 	str	r0, [sp]
        10a9ac:	e59f00c8 	ldr	r0, [pc, #c8]	; 10aa7c <TLibrarian::FindPageByContent(RefVar const &, RefVar const &, long, long *, RefVar const &)+0xfc>
        10a9b0:	e5900000 	ldr	r0, [r0]
        10a9b4:	e5901000 	ldr	r1, [r0]
        10a9b8:	e59b200c 	ldr	r2, [fp, #12]
        10a9bc:	e5920000 	ldr	r0, [r2]
        10a9c0:	e5900000 	ldr	r0, [r0]
        10a9c4:	eb6ae625 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10a9c8:	e59d1000 	ldr	r1, [sp]
        10a9cc:	e5810000 	str	r0, [r1]
        10a9d0:	e59f90a8 	ldr	r9, [pc, #a8]	; 10aa80 <TLibrarian::FindPageByContent(RefVar const &, RefVar const &, long, long *, RefVar const &)+0x100>
        10a9d4:	e3300002 	teq	r0, #2	; 0x2
        10a9d8:	0a00003a 	beq	10aac8 <TLibrarian::FindPageByContent(RefVar const &, RefVar const &, long, long *, RefVar const &)+0x148>
        10a9dc:	e1a0000d 	mov	r0, sp
        10a9e0:	eb6adde0 	bl	1bc2168 <$ClassOf(RefVar const &)>
        10a9e4:	eb6addd8 	bl	1bc214c <$AllocateRefHandle(long)>
        10a9e8:	e1a04000 	mov	r4, r0
        10a9ec:	e59f0090 	ldr	r0, [pc, #90]	; 10aa84 <TLibrarian::FindPageByContent(RefVar const &, RefVar const &, long, long *, RefVar const &)+0x104>
        10a9f0:	e5900000 	ldr	r0, [r0]
        10a9f4:	e5901000 	ldr	r1, [r0]
        10a9f8:	e5940000 	ldr	r0, [r4]
        10a9fc:	eb6ae60b 	bl	1bc4230 <$EQRef__FlT1>
        10aa00:	e1b05000 	movs	r5, r0
        10aa04:	13a05001 	movne	r5, #1	; 0x1
        10aa08:	e1a00004 	mov	r0, r4
        10aa0c:	eb6ae1ea 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10aa10:	e3350000 	teq	r5, #0	; 0x0
        10aa14:	0a00001b 	beq	10aa88 <TLibrarian::FindPageByContent(RefVar const &, RefVar const &, long, long *, RefVar const &)+0x108>
        10aa18:	e1a01009 	mov	r1, r9
        10aa1c:	e1a00008 	mov	r0, r8
        10aa20:	e3a03000 	mov	r3, #0	; 0x0
        10aa24:	e3a02000 	mov	r2, #0	; 0x0
        10aa28:	eb6ae611 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        10aa2c:	e3100003 	tst	r0, #3	; 0x3
        10aa30:	01a00140 	moveq	r0, r0, asr #2
        10aa34:	0a000000 	beq	10aa3c <TLibrarian::FindPageByContent(RefVar const &, RefVar const &, long, long *, RefVar const &)+0xbc>
        10aa38:	eb6addb7 	bl	1bc211c <$_RINTError(long)>
        10aa3c:	e1a01000 	mov	r1, r0
        10aa40:	e59d0000 	ldr	r0, [sp]
        10aa44:	e5900000 	ldr	r0, [r0]
        10aa48:	eb6ae601 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        10aa4c:	e3100003 	tst	r0, #3	; 0x3
        10aa50:	01a00140 	moveq	r0, r0, asr #2
        10aa54:	0a000000 	beq	10aa5c <TLibrarian::FindPageByContent(RefVar const &, RefVar const &, long, long *, RefVar const &)+0xdc>
        10aa58:	eb6addaf 	bl	1bc211c <$_RINTError(long)>
        10aa5c:	e59b3010 	ldr	r3, [fp, #16]
        10aa60:	e3330000 	teq	r3, #0	; 0x0
        10aa64:	1a000016 	bne	10aac4 <TLibrarian::FindPageByContent(RefVar const &, RefVar const &, long, long *, RefVar const &)+0x144>
        10aa68:	e1a04000 	mov	r4, r0
        10aa6c:	e59d0000 	ldr	r0, [sp]
        10aa70:	eb6ae1d1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10aa74:	e1a00004 	mov	r0, r4
        10aa78:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        10aa7c:	00682dc8 	rsbeq	r2, r8, r8, asr #27
        10aa80:	00682728 	rsbeq	r2, r8, r8, lsr #14
        10aa84:	00681f10 	rsbeq	r1, r8, r0, lsl pc
        10aa88:	e59b3010 	ldr	r3, [fp, #16]
        10aa8c:	e3330000 	teq	r3, #0	; 0x0
        10aa90:	e59d0000 	ldr	r0, [sp]
        10aa94:	e5900000 	ldr	r0, [r0]
        10aa98:	e2001003 	and	r1, r0, #3	; 0x3
        10aa9c:	1a000004 	bne	10aab4 <TLibrarian::FindPageByContent(RefVar const &, RefVar const &, long, long *, RefVar const &)+0x134>
        10aaa0:	e3310000 	teq	r1, #0	; 0x0
        10aaa4:	01a00140 	moveq	r0, r0, asr #2
        10aaa8:	0affffee 	beq	10aa68 <TLibrarian::FindPageByContent(RefVar const &, RefVar const &, long, long *, RefVar const &)+0xe8>
        10aaac:	eb6add9a 	bl	1bc211c <$_RINTError(long)>
        10aab0:	eaffffec 	b	10aa68 <TLibrarian::FindPageByContent(RefVar const &, RefVar const &, long, long *, RefVar const &)+0xe8>
        10aab4:	e3310000 	teq	r1, #0	; 0x0
        10aab8:	01a00140 	moveq	r0, r0, asr #2
        10aabc:	0a000000 	beq	10aac4 <TLibrarian::FindPageByContent(RefVar const &, RefVar const &, long, long *, RefVar const &)+0x144>
        10aac0:	eb6add95 	bl	1bc211c <$_RINTError(long)>
        10aac4:	e2404001 	sub	r4, r0, #1	; 0x1
        10aac8:	e24dd00c 	sub	sp, sp, #12	; 0xc
        10aacc:	e3a00002 	mov	r0, #2	; 0x2
        10aad0:	eb6add9d 	bl	1bc214c <$AllocateRefHandle(long)>
        10aad4:	e58d0004 	str	r0, [sp, #4]	; fField4
        10aad8:	e3a00002 	mov	r0, #2	; 0x2
        10aadc:	eb6add9a 	bl	1bc214c <$AllocateRefHandle(long)>
        10aae0:	e1a07000 	mov	r7, r0
        10aae4:	e3a00002 	mov	r0, #2	; 0x2
        10aae8:	eb6add97 	bl	1bc214c <$AllocateRefHandle(long)>
        10aaec:	e1a05000 	mov	r5, r0
        10aaf0:	e3a00002 	mov	r0, #2	; 0x2
        10aaf4:	eb6add94 	bl	1bc214c <$AllocateRefHandle(long)>
        10aaf8:	e58d0000 	str	r0, [sp]
        10aafc:	e3a00002 	mov	r0, #2	; 0x2
        10ab00:	eb6add91 	bl	1bc214c <$AllocateRefHandle(long)>
        10ab04:	e1a06000 	mov	r6, r0
        10ab08:	e59a0000 	ldr	r0, [sl]
        10ab0c:	e5900000 	ldr	r0, [r0]
        10ab10:	e3300002 	teq	r0, #2	; 0x2
        10ab14:	1a000003 	bne	10ab28 <TLibrarian::FindPageByContent(RefVar const &, RefVar const &, long, long *, RefVar const &)+0x1a8>
        10ab18:	e1a01008 	mov	r1, r8
        10ab1c:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        10ab20:	eb6648d0 	bl	1a9ce68 <TLibrarian::$Pages(RefVar const &)>
        10ab24:	ea000018 	b	10ab8c <TLibrarian::FindPageByContent(RefVar const &, RefVar const &, long, long *, RefVar const &)+0x20c>
        10ab28:	e59f1184 	ldr	r1, [pc, #184]	; 10acb4 <TLibrarian::FindPageByContent(RefVar const &, RefVar const &, long, long *, RefVar const &)+0x334>
        10ab2c:	e5911000 	ldr	r1, [r1]
        10ab30:	e5911000 	ldr	r1, [r1]
        10ab34:	eb6ae5c9 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10ab38:	e59d100c 	ldr	r1, [sp, #12]
        10ab3c:	e5810000 	str	r0, [r1]
        10ab40:	e1a01009 	mov	r1, r9
        10ab44:	e1a00008 	mov	r0, r8
        10ab48:	e3a03000 	mov	r3, #0	; 0x0
        10ab4c:	e3a02000 	mov	r2, #0	; 0x0
        10ab50:	eb6ae5c7 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        10ab54:	e3100003 	tst	r0, #3	; 0x3
        10ab58:	01a00140 	moveq	r0, r0, asr #2
        10ab5c:	0a000000 	beq	10ab64 <TLibrarian::FindPageByContent(RefVar const &, RefVar const &, long, long *, RefVar const &)+0x1e4>
        10ab60:	eb6add6d 	bl	1bc211c <$_RINTError(long)>
        10ab64:	e1a01000 	mov	r1, r0
        10ab68:	e59d000c 	ldr	r0, [sp, #12]
        10ab6c:	e5900000 	ldr	r0, [r0]
        10ab70:	eb6ae5b7 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        10ab74:	e59d100c 	ldr	r1, [sp, #12]
        10ab78:	e5810000 	str	r0, [r1]
        10ab7c:	e59f1134 	ldr	r1, [pc, #134]	; 10acb8 <TLibrarian::FindPageByContent(RefVar const &, RefVar const &, long, long *, RefVar const &)+0x338>
        10ab80:	e5911000 	ldr	r1, [r1]
        10ab84:	e5911000 	ldr	r1, [r1]
        10ab88:	eb6ae5b4 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10ab8c:	e59d100c 	ldr	r1, [sp, #12]
        10ab90:	e5810000 	str	r0, [r1]
        10ab94:	e59d000c 	ldr	r0, [sp, #12]
        10ab98:	e5900000 	ldr	r0, [r0]
        10ab9c:	eb6ae9c2 	bl	1bc52ac <$Length(long)>
        10aba0:	e58d0008 	str	r0, [sp, #8]	; fField8
        10aba4:	e1540000 	cmp	r4, r0
        10aba8:	aa000066 	bge	10ad48 <TLibrarian::FindPageByContent(RefVar const &, RefVar const &, long, long *, RefVar const &)+0x3c8>
        10abac:	e1a01004 	mov	r1, r4
        10abb0:	e59d000c 	ldr	r0, [sp, #12]
        10abb4:	e5900000 	ldr	r0, [r0]
        10abb8:	eb6ae5a5 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        10abbc:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        10abc0:	e5810000 	str	r0, [r1]
        10abc4:	e59f10f0 	ldr	r1, [pc, #f0]	; 10acbc <TLibrarian::FindPageByContent(RefVar const &, RefVar const &, long, long *, RefVar const &)+0x33c>
        10abc8:	e5911000 	ldr	r1, [r1]
        10abcc:	e5911000 	ldr	r1, [r1]
        10abd0:	eb6ae5a2 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10abd4:	e5870000 	str	r0, [r7]
        10abd8:	eb6ae9b3 	bl	1bc52ac <$Length(long)>
        10abdc:	e1a0a000 	mov	sl, r0
        10abe0:	e3a08000 	mov	r8, #0	; 0x0
        10abe4:	e3500000 	cmp	r0, #0	; 0x0
        10abe8:	da000052 	ble	10ad38 <TLibrarian::FindPageByContent(RefVar const &, RefVar const &, long, long *, RefVar const &)+0x3b8>
        10abec:	e1a01008 	mov	r1, r8
        10abf0:	e5970000 	ldr	r0, [r7]
        10abf4:	eb6ae596 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        10abf8:	e5850000 	str	r0, [r5]
        10abfc:	e24dd004 	sub	sp, sp, #4	; 0x4
        10ac00:	e59f10b8 	ldr	r1, [pc, #b8]	; 10acc0 <TLibrarian::FindPageByContent(RefVar const &, RefVar const &, long, long *, RefVar const &)+0x340>
        10ac04:	e5911000 	ldr	r1, [r1]
        10ac08:	e5911000 	ldr	r1, [r1]
        10ac0c:	eb6ae593 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10ac10:	eb6add4d 	bl	1bc214c <$AllocateRefHandle(long)>
        10ac14:	e1a09000 	mov	r9, r0
        10ac18:	e59b200c 	ldr	r2, [fp, #12]
        10ac1c:	e5920000 	ldr	r0, [r2]
        10ac20:	e5901000 	ldr	r1, [r0]
        10ac24:	e5990000 	ldr	r0, [r9]
        10ac28:	eb6ae580 	bl	1bc4230 <$EQRef__FlT1>
        10ac2c:	e3300000 	teq	r0, #0	; 0x0
        10ac30:	13a00001 	movne	r0, #1	; 0x1
        10ac34:	e58d0000 	str	r0, [sp]
        10ac38:	e1a00009 	mov	r0, r9
        10ac3c:	eb6ae15e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10ac40:	e49d0004 	ldr	r0, [sp], #4	; fField4
        10ac44:	e3300000 	teq	r0, #0	; 0x0
        10ac48:	0a000037 	beq	10ad2c <TLibrarian::FindPageByContent(RefVar const &, RefVar const &, long, long *, RefVar const &)+0x3ac>
        10ac4c:	e59f0070 	ldr	r0, [pc, #70]	; 10acc4 <TLibrarian::FindPageByContent(RefVar const &, RefVar const &, long, long *, RefVar const &)+0x344>
        10ac50:	e5900000 	ldr	r0, [r0]
        10ac54:	e5901000 	ldr	r1, [r0]
        10ac58:	e5950000 	ldr	r0, [r5]
        10ac5c:	eb6ae57f 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10ac60:	e5860000 	str	r0, [r6]
        10ac64:	e3300002 	teq	r0, #2	; 0x2
        10ac68:	0a00001c 	beq	10ace0 <TLibrarian::FindPageByContent(RefVar const &, RefVar const &, long, long *, RefVar const &)+0x360>
        10ac6c:	e3100003 	tst	r0, #3	; 0x3
        10ac70:	01a00140 	moveq	r0, r0, asr #2
        10ac74:	0a000000 	beq	10ac7c <TLibrarian::FindPageByContent(RefVar const &, RefVar const &, long, long *, RefVar const &)+0x2fc>
        10ac78:	eb6add27 	bl	1bc211c <$_RINTError(long)>
        10ac7c:	e1a09000 	mov	r9, r0
        10ac80:	e59f0040 	ldr	r0, [pc, #40]	; 10acc8 <TLibrarian::FindPageByContent(RefVar const &, RefVar const &, long, long *, RefVar const &)+0x348>
        10ac84:	e5900000 	ldr	r0, [r0]
        10ac88:	e5901000 	ldr	r1, [r0]
        10ac8c:	e5950000 	ldr	r0, [r5]
        10ac90:	eb6ae572 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10ac94:	e5860000 	str	r0, [r6]
        10ac98:	e3300002 	teq	r0, #2	; 0x2
        10ac9c:	0a00000a 	beq	10accc <TLibrarian::FindPageByContent(RefVar const &, RefVar const &, long, long *, RefVar const &)+0x34c>
        10aca0:	e3100003 	tst	r0, #3	; 0x3
        10aca4:	01a00140 	moveq	r0, r0, asr #2
        10aca8:	0a000008 	beq	10acd0 <TLibrarian::FindPageByContent(RefVar const &, RefVar const &, long, long *, RefVar const &)+0x350>
        10acac:	eb6add1a 	bl	1bc211c <$_RINTError(long)>
        10acb0:	ea000006 	b	10acd0 <TLibrarian::FindPageByContent(RefVar const &, RefVar const &, long, long *, RefVar const &)+0x350>
        10acb4:	006842c0 	rsbeq	r4, r8, r0, asr #5
        10acb8:	00683c80 	rsbeq	r3, r8, r0, lsl #25
        10acbc:	00682108 	rsbeq	r2, r8, r8, lsl #2
        10acc0:	00683338 	rsbeq	r3, r8, r8, lsr r3
        10acc4:	006827b8 	streqh	r2, [r8], -#120
        10acc8:	006827c0 	rsbeq	r2, r8, r0, asr #15
        10accc:	e3a00000 	mov	r0, #0	; 0x0
        10acd0:	e0800009 	add	r0, r0, r9
        10acd4:	e59b3010 	ldr	r3, [fp, #16]
        10acd8:	e1500003 	cmp	r0, r3
        10acdc:	ba000012 	blt	10ad2c <TLibrarian::FindPageByContent(RefVar const &, RefVar const &, long, long *, RefVar const &)+0x3ac>
        10ace0:	e59b0014 	ldr	r0, [fp, #20]
        10ace4:	e3300000 	teq	r0, #0	; 0x0
        10ace8:	159b0014 	ldrne	r0, [fp, #20]
        10acec:	15808000 	strne	r8, [r0]
        10acf0:	e2844001 	add	r4, r4, #1	; 0x1
        10acf4:	e1a00006 	mov	r0, r6
        10acf8:	eb6ae12f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10acfc:	e59d0000 	ldr	r0, [sp]
        10ad00:	eb6ae12d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10ad04:	e1a00005 	mov	r0, r5
        10ad08:	eb6ae12b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10ad0c:	e1a00007 	mov	r0, r7
        10ad10:	eb6ae129 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10ad14:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        10ad18:	eb6ae127 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10ad1c:	e59d000c 	ldr	r0, [sp, #12]
        10ad20:	eb6ae125 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10ad24:	e1a00004 	mov	r0, r4
        10ad28:	ea000014 	b	10ad80 <TLibrarian::FindPageByContent(RefVar const &, RefVar const &, long, long *, RefVar const &)+0x400>
        10ad2c:	e2888001 	add	r8, r8, #1	; 0x1
        10ad30:	e158000a 	cmp	r8, sl
        10ad34:	baffffac 	blt	10abec <TLibrarian::FindPageByContent(RefVar const &, RefVar const &, long, long *, RefVar const &)+0x26c>
        10ad38:	e2844001 	add	r4, r4, #1	; 0x1
        10ad3c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        10ad40:	e1540000 	cmp	r4, r0
        10ad44:	baffff98 	blt	10abac <TLibrarian::FindPageByContent(RefVar const &, RefVar const &, long, long *, RefVar const &)+0x22c>
        10ad48:	e1a00006 	mov	r0, r6
        10ad4c:	eb6ae11a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10ad50:	e3a04000 	mov	r4, #0	; 0x0
        10ad54:	e59d0000 	ldr	r0, [sp]
        10ad58:	eb6ae117 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10ad5c:	e1a00005 	mov	r0, r5
        10ad60:	eb6ae115 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10ad64:	e1a00007 	mov	r0, r7
        10ad68:	eb6ae113 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10ad6c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        10ad70:	eb6ae111 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10ad74:	e59d000c 	ldr	r0, [sp, #12]
        10ad78:	eb6ae10f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10ad7c:	e1a00004 	mov	r0, r4
        10ad80:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TLibrarian::FindPageByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)
 * Address: 0010ae68
 */
TLibrarian::FindPageByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &) {
    /*
        10ae68:	e1a0c00d 	mov	ip, sp
        10ae6c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        10ae70:	e24cb004 	sub	fp, ip, #4	; 0x4
        10ae74:	e1a05000 	mov	r5, r0
        10ae78:	e1a07001 	mov	r7, r1
        10ae7c:	e1a04002 	mov	r4, r2
        10ae80:	e1a06003 	mov	r6, r3
        10ae84:	e59b9004 	ldr	r9, [fp, #4]	; fField4
        10ae88:	e24dd038 	sub	sp, sp, #56	; 0x38
        10ae8c:	e3a00002 	mov	r0, #2	; 0x2
        10ae90:	eb6adcad 	bl	1bc214c <$AllocateRefHandle(long)>
        10ae94:	e58d0028 	str	r0, [sp, #40]
        10ae98:	e3a00002 	mov	r0, #2	; 0x2
        10ae9c:	eb6adcaa 	bl	1bc214c <$AllocateRefHandle(long)>
        10aea0:	e58d0024 	str	r0, [sp, #36]
        10aea4:	e3a00002 	mov	r0, #2	; 0x2
        10aea8:	eb6adca7 	bl	1bc214c <$AllocateRefHandle(long)>
        10aeac:	e58d001c 	str	r0, [sp, #28]
        10aeb0:	e3a00002 	mov	r0, #2	; 0x2
        10aeb4:	eb6adca4 	bl	1bc214c <$AllocateRefHandle(long)>
        10aeb8:	e58d0018 	str	r0, [sp, #24]
        10aebc:	e3a00002 	mov	r0, #2	; 0x2
        10aec0:	eb6adca1 	bl	1bc214c <$AllocateRefHandle(long)>
        10aec4:	e58d0014 	str	r0, [sp, #20]
        10aec8:	e3a00002 	mov	r0, #2	; 0x2
        10aecc:	eb6adc9e 	bl	1bc214c <$AllocateRefHandle(long)>
        10aed0:	e58d0010 	str	r0, [sp, #16]
        10aed4:	e3a00000 	mov	r0, #0	; 0x0
        10aed8:	e58d000c 	str	r0, [sp, #12]
        10aedc:	e58d0008 	str	r0, [sp, #8]	; fField8
        10aee0:	e3a00002 	mov	r0, #2	; 0x2
        10aee4:	eb6adc98 	bl	1bc214c <$AllocateRefHandle(long)>
        10aee8:	e58d0000 	str	r0, [sp]
        10aeec:	e5990000 	ldr	r0, [r9]
        10aef0:	e5900000 	ldr	r0, [r0]
        10aef4:	e3300002 	teq	r0, #2	; 0x2
        10aef8:	0a000003 	beq	10af0c <TLibrarian::FindPageByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0xa4>
        10aefc:	e3a0101a 	mov	r1, #26	; 0x1a
        10af00:	eb6ae4ca 	bl	1bc4230 <$EQRef__FlT1>
        10af04:	e3300000 	teq	r0, #0	; 0x0
        10af08:	0a000011 	beq	10af54 <TLibrarian::FindPageByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0xec>
        10af0c:	e3a0001a 	mov	r0, #26	; 0x1a
        10af10:	eb6adc8d 	bl	1bc214c <$AllocateRefHandle(long)>
        10af14:	e1a08000 	mov	r8, r0
        10af18:	e5901000 	ldr	r1, [r0]
        10af1c:	e5990000 	ldr	r0, [r9]
        10af20:	e5900000 	ldr	r0, [r0]
        10af24:	eb6ae4c1 	bl	1bc4230 <$EQRef__FlT1>
        10af28:	e1b09000 	movs	r9, r0
        10af2c:	13a09001 	movne	r9, #1	; 0x1
        10af30:	e1a00008 	mov	r0, r8
        10af34:	eb6ae0a0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10af38:	e3390000 	teq	r9, #0	; 0x0
        10af3c:	13a00001 	movne	r0, #1	; 0x1
        10af40:	158d000c 	strne	r0, [sp, #12]
        10af44:	e1a01007 	mov	r1, r7
        10af48:	e1a00005 	mov	r0, r5
        10af4c:	eb6647c5 	bl	1a9ce68 <TLibrarian::$Pages(RefVar const &)>
        10af50:	ea00001a 	b	10afc0 <TLibrarian::FindPageByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x158>
        10af54:	e59f01e8 	ldr	r0, [pc, #1e8]	; 10b144 <TLibrarian::FindPageByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x2dc>
        10af58:	e5900000 	ldr	r0, [r0]
        10af5c:	e5901000 	ldr	r1, [r0]
        10af60:	e5990000 	ldr	r0, [r9]
        10af64:	e5900000 	ldr	r0, [r0]
        10af68:	eb6ae4bc 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10af6c:	e59d1028 	ldr	r1, [sp, #40]
        10af70:	e5810000 	str	r0, [r1]
        10af74:	e59f11cc 	ldr	r1, [pc, #1cc]	; 10b148 <TLibrarian::FindPageByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x2e0>
        10af78:	e1a00007 	mov	r0, r7
        10af7c:	e3a03000 	mov	r3, #0	; 0x0
        10af80:	e3a02000 	mov	r2, #0	; 0x0
        10af84:	eb6ae4ba 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        10af88:	e3100003 	tst	r0, #3	; 0x3
        10af8c:	01a00140 	moveq	r0, r0, asr #2
        10af90:	0a000000 	beq	10af98 <TLibrarian::FindPageByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x130>
        10af94:	eb6adc60 	bl	1bc211c <$_RINTError(long)>
        10af98:	e1a01000 	mov	r1, r0
        10af9c:	e59d0028 	ldr	r0, [sp, #40]
        10afa0:	e5900000 	ldr	r0, [r0]
        10afa4:	eb6ae4aa 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        10afa8:	e59d1028 	ldr	r1, [sp, #40]
        10afac:	e5810000 	str	r0, [r1]
        10afb0:	e59f1194 	ldr	r1, [pc, #194]	; 10b14c <TLibrarian::FindPageByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x2e4>
        10afb4:	e5911000 	ldr	r1, [r1]
        10afb8:	e5911000 	ldr	r1, [r1]
        10afbc:	eb6ae4a7 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10afc0:	e59d1028 	ldr	r1, [sp, #40]
        10afc4:	e5810000 	str	r0, [r1]
        10afc8:	e59d0028 	ldr	r0, [sp, #40]
        10afcc:	e5900000 	ldr	r0, [r0]
        10afd0:	eb6ae8b5 	bl	1bc52ac <$Length(long)>
        10afd4:	e58d002c 	str	r0, [sp, #44]
        10afd8:	e3a00000 	mov	r0, #0	; 0x0
        10afdc:	eb66436e 	bl	1a9bd9c <$MakeArray(long)>
        10afe0:	e59d1010 	ldr	r1, [sp, #16]
        10afe4:	e5810000 	str	r0, [r1]
        10afe8:	e1a00004 	mov	r0, r4
        10afec:	eb6ba266 	bl	1bf398c <$IsArray(RefVar const &)>
        10aff0:	e3300000 	teq	r0, #0	; 0x0
        10aff4:	0a000005 	beq	10b010 <TLibrarian::FindPageByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x1a8>
        10aff8:	e5940000 	ldr	r0, [r4]
        10affc:	e5900000 	ldr	r0, [r0]
        10b000:	eb6ae8a9 	bl	1bc52ac <$Length(long)>
        10b004:	e1a0a000 	mov	sl, r0
        10b008:	e3a00001 	mov	r0, #1	; 0x1
        10b00c:	e58d0008 	str	r0, [sp, #8]	; fField8
        10b010:	e3a00000 	mov	r0, #0	; 0x0
        10b014:	e58d0030 	str	r0, [sp, #48]
        10b018:	e59d002c 	ldr	r0, [sp, #44]
        10b01c:	e3500000 	cmp	r0, #0	; 0x0
        10b020:	da00008f 	ble	10b264 <TLibrarian::FindPageByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x3fc>
        10b024:	e59d0028 	ldr	r0, [sp, #40]
        10b028:	e59d1030 	ldr	r1, [sp, #48]
        10b02c:	e5900000 	ldr	r0, [r0]
        10b030:	eb6ae487 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        10b034:	e59d1024 	ldr	r1, [sp, #36]
        10b038:	e5810000 	str	r0, [r1]
        10b03c:	e59f110c 	ldr	r1, [pc, #10c]	; 10b150 <TLibrarian::FindPageByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x2e8>
        10b040:	e5911000 	ldr	r1, [r1]
        10b044:	e5911000 	ldr	r1, [r1]
        10b048:	eb6ae484 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10b04c:	e59d101c 	ldr	r1, [sp, #28]
        10b050:	e5810000 	str	r0, [r1]
        10b054:	eb6ae894 	bl	1bc52ac <$Length(long)>
        10b058:	e3a09000 	mov	r9, #0	; 0x0
        10b05c:	e58d0020 	str	r0, [sp, #32]
        10b060:	e3500000 	cmp	r0, #0	; 0x0
        10b064:	da000078 	ble	10b24c <TLibrarian::FindPageByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x3e4>
        10b068:	e59d0030 	ldr	r0, [sp, #48]
        10b06c:	e2800001 	add	r0, r0, #1	; 0x1
        10b070:	e1a00100 	mov	r0, r0, lsl #2
        10b074:	e58d0034 	str	r0, [sp, #52]
        10b078:	e1a01009 	mov	r1, r9
        10b07c:	e59d001c 	ldr	r0, [sp, #28]
        10b080:	e5900000 	ldr	r0, [r0]
        10b084:	eb6ae472 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        10b088:	e59d1018 	ldr	r1, [sp, #24]
        10b08c:	e5810000 	str	r0, [r1]
        10b090:	e59f10bc 	ldr	r1, [pc, #bc]	; 10b154 <TLibrarian::FindPageByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x2ec>
        10b094:	e5911000 	ldr	r1, [r1]
        10b098:	e5911000 	ldr	r1, [r1]
        10b09c:	eb6ae46f 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10b0a0:	e59d1014 	ldr	r1, [sp, #20]
        10b0a4:	e5810000 	str	r0, [r1]
        10b0a8:	e59f10a8 	ldr	r1, [pc, #a8]	; 10b158 <TLibrarian::FindPageByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x2f0>
        10b0ac:	e5911000 	ldr	r1, [r1]
        10b0b0:	e5911000 	ldr	r1, [r1]
        10b0b4:	eb6ae469 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10b0b8:	e59d1000 	ldr	r1, [sp]
        10b0bc:	e5810000 	str	r0, [r1]
        10b0c0:	e1a01000 	mov	r1, r0
        10b0c4:	e3300002 	teq	r0, #2	; 0x2
        10b0c8:	0a000006 	beq	10b0e8 <TLibrarian::FindPageByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x280>
        10b0cc:	e1a00001 	mov	r0, r1
        10b0d0:	e3110003 	tst	r1, #3	; 0x3
        10b0d4:	01a00140 	moveq	r0, r0, asr #2
        10b0d8:	0a000000 	beq	10b0e0 <TLibrarian::FindPageByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x278>
        10b0dc:	eb6adc0e 	bl	1bc211c <$_RINTError(long)>
        10b0e0:	e3100b12 	tst	r0, #18432	; 0x4800
        10b0e4:	1a000054 	bne	10b23c <TLibrarian::FindPageByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x3d4>
        10b0e8:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        10b0ec:	e3300000 	teq	r0, #0	; 0x0
        10b0f0:	1a000019 	bne	10b15c <TLibrarian::FindPageByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x2f4>
        10b0f4:	e1a03006 	mov	r3, r6
        10b0f8:	e1a02004 	mov	r2, r4
        10b0fc:	e28d1014 	add	r1, sp, #20	; 0x14
        10b100:	e1a00005 	mov	r0, r5
        10b104:	eb660965 	bl	1a8d6a0 <TLibrarian::$CompareValues(RefVar const &, RefVar const &, RefVar const &)>
        10b108:	e3300001 	teq	r0, #1	; 0x1
        10b10c:	1a00004a 	bne	10b23c <TLibrarian::FindPageByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x3d4>
        10b110:	e24dd004 	sub	sp, sp, #4	; 0x4
        10b114:	e59d0038 	ldr	r0, [sp, #56]
        10b118:	eb6adc0b 	bl	1bc214c <$AllocateRefHandle(long)>
        10b11c:	e58d0000 	str	r0, [sp]
        10b120:	e1a0100d 	mov	r1, sp
        10b124:	e28d0014 	add	r0, sp, #20	; 0x14
        10b128:	eb6adbfe 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        10b12c:	e59d0000 	ldr	r0, [sp]
        10b130:	eb6ae021 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10b134:	e59d0010 	ldr	r0, [sp, #16]
        10b138:	e3300000 	teq	r0, #0	; 0x0
        10b13c:	0a00003d 	beq	10b238 <TLibrarian::FindPageByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x3d0>
        10b140:	ea00003a 	b	10b230 <TLibrarian::FindPageByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x3c8>
        10b144:	006842c0 	rsbeq	r4, r8, r0, asr #5
        10b148:	00682728 	rsbeq	r2, r8, r8, lsr #14
        10b14c:	00683c80 	rsbeq	r3, r8, r0, lsl #25
        10b150:	00682108 	rsbeq	r2, r8, r8, lsl #2
        10b154:	00683338 	rsbeq	r3, r8, r8, lsr r3
        10b158:	006834c0 	rsbeq	r3, r8, r0, asr #9
        10b15c:	e3a00001 	mov	r0, #1	; 0x1
        10b160:	e3a08000 	mov	r8, #0	; 0x0
        10b164:	e35a0000 	cmp	sl, #0	; 0x0
        10b168:	e58d0004 	str	r0, [sp, #4]	; fField4
        10b16c:	da000023 	ble	10b200 <TLibrarian::FindPageByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x398>
        10b170:	e24dd008 	sub	sp, sp, #8	; 0x8
        10b174:	e1a01008 	mov	r1, r8
        10b178:	e5960000 	ldr	r0, [r6]
        10b17c:	e5900000 	ldr	r0, [r0]
        10b180:	eb6ae433 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        10b184:	eb6adbf0 	bl	1bc214c <$AllocateRefHandle(long)>
        10b188:	e58d0000 	str	r0, [sp]
        10b18c:	e1a0700d 	mov	r7, sp
        10b190:	e1a01008 	mov	r1, r8
        10b194:	e5940000 	ldr	r0, [r4]
        10b198:	e5900000 	ldr	r0, [r0]
        10b19c:	eb6ae42c 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        10b1a0:	eb6adbe9 	bl	1bc214c <$AllocateRefHandle(long)>
        10b1a4:	e58d0004 	str	r0, [sp, #4]	; fField4
        10b1a8:	e28d2004 	add	r2, sp, #4	; 0x4
        10b1ac:	e28d101c 	add	r1, sp, #28	; 0x1c
        10b1b0:	e1a00005 	mov	r0, r5
        10b1b4:	e1a03007 	mov	r3, r7
        10b1b8:	eb660938 	bl	1a8d6a0 <TLibrarian::$CompareValues(RefVar const &, RefVar const &, RefVar const &)>
        10b1bc:	e3300001 	teq	r0, #1	; 0x1
        10b1c0:	13a07000 	movne	r7, #0	; 0x0
        10b1c4:	03a07001 	moveq	r7, #1	; 0x1
        10b1c8:	e59d0000 	ldr	r0, [sp]
        10b1cc:	eb6adffa 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10b1d0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        10b1d4:	eb6adff8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10b1d8:	e3370000 	teq	r7, #0	; 0x0
        10b1dc:	e28dd008 	add	sp, sp, #8	; 0x8
        10b1e0:	1a000000 	bne	10b1e8 <TLibrarian::FindPageByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x380>
        10b1e4:	ea000014 	b	10b23c <TLibrarian::FindPageByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x3d4>
        10b1e8:	e2888001 	add	r8, r8, #1	; 0x1
        10b1ec:	e158000a 	cmp	r8, sl
        10b1f0:	baffffde 	blt	10b170 <TLibrarian::FindPageByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x308>
        10b1f4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        10b1f8:	e3300000 	teq	r0, #0	; 0x0
        10b1fc:	0a00000e 	beq	10b23c <TLibrarian::FindPageByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x3d4>
        10b200:	e24dd004 	sub	sp, sp, #4	; 0x4
        10b204:	e59d0038 	ldr	r0, [sp, #56]
        10b208:	eb6adbcf 	bl	1bc214c <$AllocateRefHandle(long)>
        10b20c:	e58d0000 	str	r0, [sp]
        10b210:	e1a0100d 	mov	r1, sp
        10b214:	e28d0014 	add	r0, sp, #20	; 0x14
        10b218:	eb6adbc2 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        10b21c:	e59d0000 	ldr	r0, [sp]
        10b220:	eb6adfe5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10b224:	e59d0010 	ldr	r0, [sp, #16]
        10b228:	e3300000 	teq	r0, #0	; 0x0
        10b22c:	0a000001 	beq	10b238 <TLibrarian::FindPageByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x3d0>
        10b230:	e28dd004 	add	sp, sp, #4	; 0x4
        10b234:	ea000004 	b	10b24c <TLibrarian::FindPageByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x3e4>
        10b238:	e28dd004 	add	sp, sp, #4	; 0x4
        10b23c:	e2899001 	add	r9, r9, #1	; 0x1
        10b240:	e59d0020 	ldr	r0, [sp, #32]
        10b244:	e1590000 	cmp	r9, r0
        10b248:	baffff8a 	blt	10b078 <TLibrarian::FindPageByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x210>
        10b24c:	e59d0030 	ldr	r0, [sp, #48]
        10b250:	e2801001 	add	r1, r0, #1	; 0x1
        10b254:	e58d1030 	str	r1, [sp, #48]
        10b258:	e59d002c 	ldr	r0, [sp, #44]
        10b25c:	e1510000 	cmp	r1, r0
        10b260:	baffff6f 	blt	10b024 <TLibrarian::FindPageByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x1bc>
        10b264:	e59d0010 	ldr	r0, [sp, #16]
        10b268:	e5904000 	ldr	r4, [r0]
        10b26c:	e59d0000 	ldr	r0, [sp]
        10b270:	eb6adfd1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10b274:	e59d0010 	ldr	r0, [sp, #16]
        10b278:	eb6adfcf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10b27c:	e59d0014 	ldr	r0, [sp, #20]
        10b280:	eb6adfcd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10b284:	e59d0018 	ldr	r0, [sp, #24]
        10b288:	eb6adfcb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10b28c:	e59d001c 	ldr	r0, [sp, #28]
        10b290:	eb6adfc9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10b294:	e59d0024 	ldr	r0, [sp, #36]
        10b298:	eb6adfc7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10b29c:	e59d0028 	ldr	r0, [sp, #40]
        10b2a0:	eb6adfc5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10b2a4:	e1a00004 	mov	r0, r4
        10b2a8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TLibrarian::GetBookFrame(RefVar const &)
 * Address: 0010b2ac
 */
TLibrarian::GetBookFrame(RefVar const &) {
    /*
        10b2ac:	e1a0c00d 	mov	ip, sp
        10b2b0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        10b2b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        10b2b8:	e1a04000 	mov	r4, r0
        10b2bc:	e1a05001 	mov	r5, r1
        10b2c0:	e3a00002 	mov	r0, #2	; 0x2
        10b2c4:	eb6adba0 	bl	1bc214c <$AllocateRefHandle(long)>
        10b2c8:	e1a07000 	mov	r7, r0
        10b2cc:	e3a00002 	mov	r0, #2	; 0x2
        10b2d0:	eb6adb9d 	bl	1bc214c <$AllocateRefHandle(long)>
        10b2d4:	e1a06000 	mov	r6, r0
        10b2d8:	e1a01005 	mov	r1, r5
        10b2dc:	e1a00004 	mov	r0, r4
        10b2e0:	eb665fc5 	bl	1aa31fc <TLibrarian::$StrRefToSymbol(RefVar const &)>
        10b2e4:	e5870000 	str	r0, [r7]
        10b2e8:	e1a01000 	mov	r1, r0
        10b2ec:	e5940004 	ldr	r0, [r4, #4]	; fField4
        10b2f0:	e5900000 	ldr	r0, [r0]
        10b2f4:	eb6ae3d9 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10b2f8:	e5860000 	str	r0, [r6]
        10b2fc:	e3300002 	teq	r0, #2	; 0x2
        10b300:	0a00000b 	beq	10b334 <TLibrarian::GetBookFrame(RefVar const &)+0x88>
        10b304:	e59f1024 	ldr	r1, [pc, #24]	; 10b330 <TLibrarian::GetBookFrame(RefVar const &)+0x84>
        10b308:	e5911000 	ldr	r1, [r1]
        10b30c:	e5911000 	ldr	r1, [r1]
        10b310:	eb6ae3d2 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10b314:	e1a04000 	mov	r4, r0
        10b318:	e1a00006 	mov	r0, r6
        10b31c:	eb6adfa6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10b320:	e1a00007 	mov	r0, r7
        10b324:	eb6adfa4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10b328:	e1a00004 	mov	r0, r4
        10b32c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        10b330:	00682138 	rsbeq	r2, r8, r8, lsr r1
        10b334:	e1a00006 	mov	r0, r6
        10b338:	eb6adf9f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10b33c:	e1a00007 	mov	r0, r7
        10b340:	eb6adf9d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10b344:	e3a00002 	mov	r0, #2	; 0x2
        10b348:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TLibrarian::GetLibraryEntry(RefVar const &)
 * Address: 0010b34c
 */
TLibrarian::GetLibraryEntry(RefVar const &) {
    /*
        10b34c:	e1a0c00d 	mov	ip, sp
        10b350:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        10b354:	e24cb004 	sub	fp, ip, #4	; 0x4
        10b358:	e1a04001 	mov	r4, r1
        10b35c:	e24dd008 	sub	sp, sp, #8	; 0x8
        10b360:	e3a00001 	mov	r0, #1	; 0x1
        10b364:	eb66428c 	bl	1a9bd9c <$MakeArray(long)>
        10b368:	eb6adb77 	bl	1bc214c <$AllocateRefHandle(long)>
        10b36c:	e58d0004 	str	r0, [sp, #4]	; fField4
        10b370:	e5940000 	ldr	r0, [r4]
        10b374:	e3a01000 	mov	r1, #0	; 0x0
        10b378:	e5902000 	ldr	r2, [r0]
        10b37c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        10b380:	e5900000 	ldr	r0, [r0]
        10b384:	eb6aebf3 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        10b388:	e59f103c 	ldr	r1, [pc, #3c]	; 10b3cc <TLibrarian::GetLibraryEntry(RefVar const &)+0x80>
        10b38c:	e59f003c 	ldr	r0, [pc, #3c]	; 10b3d0 <TLibrarian::GetLibraryEntry(RefVar const &)+0x84>
        10b390:	e5900000 	ldr	r0, [r0]
        10b394:	eb6afc6f 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        10b398:	eb6adb6b 	bl	1bc214c <$AllocateRefHandle(long)>
        10b39c:	e58d0000 	str	r0, [sp]
        10b3a0:	e1a0000d 	mov	r0, sp
        10b3a4:	e28d2004 	add	r2, sp, #4	; 0x4
        10b3a8:	e59f1024 	ldr	r1, [pc, #24]	; 10b3d4 <TLibrarian::GetLibraryEntry(RefVar const &)+0x88>
        10b3ac:	eb6adf88 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
        10b3b0:	e1a04000 	mov	r4, r0
        10b3b4:	e59d0000 	ldr	r0, [sp]
        10b3b8:	eb6adf7f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10b3bc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        10b3c0:	eb6adf7d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10b3c4:	e1a00004 	mov	r0, r4
        10b3c8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        10b3cc:	00682638 	rsbeq	r2, r8, r8, lsr r6
        10b3d0:	0c101934 	ldceq	9, cr1, [r0], -#208
        10b3d4:	00682fa8 	rsbeq	r2, r8, r8, lsr #31
    */
}

/**
 * Symbol: TLibrarian::GetPageN(long, RefVar const &)
 * Address: 0010b3d8
 */
TLibrarian::GetPageN(long, RefVar const &) {
    /*
        10b3d8:	e1a0c00d 	mov	ip, sp
        10b3dc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        10b3e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        10b3e4:	e1a06000 	mov	r6, r0
        10b3e8:	e1a05001 	mov	r5, r1
        10b3ec:	e1a04002 	mov	r4, r2
        10b3f0:	e3a00002 	mov	r0, #2	; 0x2
        10b3f4:	eb6adb54 	bl	1bc214c <$AllocateRefHandle(long)>
        10b3f8:	e1a07000 	mov	r7, r0
        10b3fc:	e1a01004 	mov	r1, r4
        10b400:	e1a00006 	mov	r0, r6
        10b404:	eb664697 	bl	1a9ce68 <TLibrarian::$Pages(RefVar const &)>
        10b408:	e2451001 	sub	r1, r5, #1	; 0x1
        10b40c:	e5870000 	str	r0, [r7]
        10b410:	eb6ae38f 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        10b414:	e1a04000 	mov	r4, r0
        10b418:	e1a00007 	mov	r0, r7
        10b41c:	eb6adf66 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10b420:	e1a00004 	mov	r0, r4
        10b424:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TLibrarian::Pages(RefVar const &)
 * Address: 0010b778
 */
TLibrarian::Pages(RefVar const &) {
    /*
        10b778:	e1a0c00d 	mov	ip, sp
        10b77c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        10b780:	e24cb004 	sub	fp, ip, #4	; 0x4
        10b784:	e1a05000 	mov	r5, r0
        10b788:	e1a04001 	mov	r4, r1
        10b78c:	e3a00002 	mov	r0, #2	; 0x2
        10b790:	eb6ada6d 	bl	1bc214c <$AllocateRefHandle(long)>
        10b794:	e1a06000 	mov	r6, r0
        10b798:	e1a01004 	mov	r1, r4
        10b79c:	e1a00005 	mov	r0, r5
        10b7a0:	eb665222 	bl	1aa0030 <TLibrarian::$Rendering(RefVar const &)>
        10b7a4:	e5860000 	str	r0, [r6]
        10b7a8:	e59f101c 	ldr	r1, [pc, #1c]	; 10b7cc <TLibrarian::Pages(RefVar const &)+0x54>
        10b7ac:	e5911000 	ldr	r1, [r1]
        10b7b0:	e5911000 	ldr	r1, [r1]
        10b7b4:	eb6ae2a9 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10b7b8:	e1a04000 	mov	r4, r0
        10b7bc:	e1a00006 	mov	r0, r6
        10b7c0:	eb6ade7d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10b7c4:	e1a00004 	mov	r0, r4
        10b7c8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        10b7cc:	00683c80 	rsbeq	r3, r8, r0, lsl #25
    */
}

/**
 * Symbol: TLibrarian::PageSize(RefVar const &)
 * Address: 0010b7d0
 */
TLibrarian::PageSize(RefVar const &) {
    /*
        10b7d0:	e1a0c00d 	mov	ip, sp
        10b7d4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        10b7d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        10b7dc:	e1a04001 	mov	r4, r1
        10b7e0:	e24dd004 	sub	sp, sp, #4	; 0x4
        10b7e4:	eb665211 	bl	1aa0030 <TLibrarian::$Rendering(RefVar const &)>
        10b7e8:	eb6ada57 	bl	1bc214c <$AllocateRefHandle(long)>
        10b7ec:	e1a05000 	mov	r5, r0
        10b7f0:	e59f00c0 	ldr	r0, [pc, #c0]	; 10b8b8 <TLibrarian::PageSize(RefVar const &)+0xe8>
        10b7f4:	e5900000 	ldr	r0, [r0]
        10b7f8:	e5901000 	ldr	r1, [r0]
        10b7fc:	e5950000 	ldr	r0, [r5]
        10b800:	eb6ae296 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10b804:	eb6ada50 	bl	1bc214c <$AllocateRefHandle(long)>
        10b808:	e58d0000 	str	r0, [sp]
        10b80c:	e1a00004 	mov	r0, r4
        10b810:	eb660fea 	bl	1a8f7c0 <$CurrentBook>
        10b814:	eb6ada4c 	bl	1bc214c <$AllocateRefHandle(long)>
        10b818:	e1a04000 	mov	r4, r0
        10b81c:	e5900000 	ldr	r0, [r0]
        10b820:	e3300002 	teq	r0, #2	; 0x2
        10b824:	0a000019 	beq	10b890 <TLibrarian::PageSize(RefVar const &)+0xc0>
        10b828:	e59f108c 	ldr	r1, [pc, #8c]	; 10b8bc <TLibrarian::PageSize(RefVar const &)+0xec>	; fField8
        10b82c:	e5911000 	ldr	r1, [r1]
        10b830:	e5911000 	ldr	r1, [r1]
        10b834:	eb6ae289 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10b838:	e3100003 	tst	r0, #3	; 0x3
        10b83c:	01a00140 	moveq	r0, r0, asr #2
        10b840:	0a000000 	beq	10b848 <TLibrarian::PageSize(RefVar const &)+0x78>
        10b844:	eb6ada34 	bl	1bc211c <$_RINTError(long)>
        10b848:	e3300001 	teq	r0, #1	; 0x1
        10b84c:	1a00000f 	bne	10b890 <TLibrarian::PageSize(RefVar const &)+0xc0>
        10b850:	e24dd004 	sub	sp, sp, #4	; 0x4
        10b854:	e28d0004 	add	r0, sp, #4	; 0x4
        10b858:	eb6ada43 	bl	1bc216c <$Clone(RefVar const &)>
        10b85c:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        10b860:	e5810000 	str	r0, [r1]
        10b864:	e3a000f8 	mov	r0, #248	; 0xf8
        10b868:	e2800b01 	add	r0, r0, #1024	; 0x400
        10b86c:	eb6ada36 	bl	1bc214c <$AllocateRefHandle(long)>
        10b870:	e58d0000 	str	r0, [sp]
        10b874:	e1a0200d 	mov	r2, sp
        10b878:	e59f1040 	ldr	r1, [pc, #40]	; 10b8c0 <TLibrarian::PageSize(RefVar const &)+0xf0>
        10b87c:	e28d0004 	add	r0, sp, #4	; 0x4
        10b880:	eb6aeab8 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10b884:	e59d0000 	ldr	r0, [sp]
        10b888:	eb6ade4b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10b88c:	e28dd004 	add	sp, sp, #4	; 0x4
        10b890:	e59d0000 	ldr	r0, [sp]
        10b894:	e5906000 	ldr	r6, [r0]
        10b898:	e1a00004 	mov	r0, r4
        10b89c:	eb6ade46 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10b8a0:	e59d0000 	ldr	r0, [sp]
        10b8a4:	eb6ade44 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10b8a8:	e1a00005 	mov	r0, r5
        10b8ac:	eb6ade42 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10b8b0:	e1a00006 	mov	r0, r6
        10b8b4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        10b8b8:	00683c88 	rsbeq	r3, r8, r8, lsl #25
        10b8bc:	00684ec8 	rsbeq	r4, r8, r8, asr #29
        10b8c0:	00682188 	rsbeq	r2, r8, r8, lsl #3
    */
}

/**
 * Symbol: TLibrarian::PreviousPage(RefVar const &)
 * Address: 0010b944
 */
TLibrarian::PreviousPage(RefVar const &) {
    /*
        10b944:	e1a0c00d 	mov	ip, sp
        10b948:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        10b94c:	e24cb004 	sub	fp, ip, #4	; 0x4
        10b950:	e1a04001 	mov	r4, r1
        10b954:	e24dd004 	sub	sp, sp, #4	; 0x4
        10b958:	e3a00002 	mov	r0, #2	; 0x2
        10b95c:	eb6ad9fa 	bl	1bc214c <$AllocateRefHandle(long)>
        10b960:	e1a05000 	mov	r5, r0
        10b964:	e3a00002 	mov	r0, #2	; 0x2
        10b968:	eb6ad9f7 	bl	1bc214c <$AllocateRefHandle(long)>
        10b96c:	e58d0000 	str	r0, [sp]
        10b970:	e59f1064 	ldr	r1, [pc, #64]	; 10b9dc <TLibrarian::PreviousPage(RefVar const &)+0x98>
        10b974:	e1a00004 	mov	r0, r4
        10b978:	e3a03000 	mov	r3, #0	; 0x0
        10b97c:	e3a02000 	mov	r2, #0	; 0x0
        10b980:	eb6ae23b 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        10b984:	e59d1000 	ldr	r1, [sp]
        10b988:	e5810000 	str	r0, [r1]
        10b98c:	e1a0100d 	mov	r1, sp
        10b990:	e59f0048 	ldr	r0, [pc, #48]	; 10b9e0 <TLibrarian::PreviousPage(RefVar const &)+0x9c>
        10b994:	e5900000 	ldr	r0, [r0]
        10b998:	eb66ff09 	bl	1acb5c4 <TLibrarian::$GetLibraryEntry(RefVar const &)>
        10b99c:	e5850000 	str	r0, [r5]
        10b9a0:	e59f103c 	ldr	r1, [pc, #3c]	; 10b9e4 <TLibrarian::PreviousPage(RefVar const &)+0xa0>
        10b9a4:	e5911000 	ldr	r1, [r1]
        10b9a8:	e5911000 	ldr	r1, [r1]
        10b9ac:	eb6ae22b 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10b9b0:	e3100003 	tst	r0, #3	; 0x3
        10b9b4:	01a00140 	moveq	r0, r0, asr #2
        10b9b8:	0a000000 	beq	10b9c0 <TLibrarian::PreviousPage(RefVar const &)+0x7c>
        10b9bc:	eb6ad9d6 	bl	1bc211c <$_RINTError(long)>
        10b9c0:	e1a04000 	mov	r4, r0
        10b9c4:	e59d0000 	ldr	r0, [sp]
        10b9c8:	eb6addfb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10b9cc:	e1a00005 	mov	r0, r5
        10b9d0:	eb6addf9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10b9d4:	e1a00004 	mov	r0, r4
        10b9d8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        10b9dc:	00683308 	rsbeq	r3, r8, r8, lsl #6
        10b9e0:	0c1010d0 	ldceq	0, cr1, [r0], -#832
        10b9e4:	00683fb0 	streqh	r3, [r8], -#240
    */
}

/**
 * Symbol: TLibrarian::Rendering(RefVar const &)
 * Address: 0010ba4c
 */
TLibrarian::Rendering(RefVar const &) {
    /*
        10ba4c:	e1a0c00d 	mov	ip, sp
        10ba50:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        10ba54:	e24cb004 	sub	fp, ip, #4	; 0x4
        10ba58:	e1a05000 	mov	r5, r0
        10ba5c:	e1a04001 	mov	r4, r1
        10ba60:	e24dd004 	sub	sp, sp, #4	; 0x4
        10ba64:	e3a00002 	mov	r0, #2	; 0x2
        10ba68:	eb6ad9b7 	bl	1bc214c <$AllocateRefHandle(long)>
        10ba6c:	e1a07000 	mov	r7, r0
        10ba70:	e3a00002 	mov	r0, #2	; 0x2
        10ba74:	eb6ad9b4 	bl	1bc214c <$AllocateRefHandle(long)>
        10ba78:	e58d0000 	str	r0, [sp]
        10ba7c:	e3a00002 	mov	r0, #2	; 0x2
        10ba80:	eb6ad9b1 	bl	1bc214c <$AllocateRefHandle(long)>
        10ba84:	e1a08000 	mov	r8, r0
        10ba88:	e3a00002 	mov	r0, #2	; 0x2
        10ba8c:	eb6ad9ae 	bl	1bc214c <$AllocateRefHandle(long)>
        10ba90:	e1a06000 	mov	r6, r0
        10ba94:	e59f105c 	ldr	r1, [pc, #5c]	; 10baf8 <TLibrarian::Rendering(RefVar const &)+0xac>
        10ba98:	e1a00004 	mov	r0, r4
        10ba9c:	e3a03000 	mov	r3, #0	; 0x0
        10baa0:	e3a02000 	mov	r2, #0	; 0x0
        10baa4:	eb6ae1f2 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        10baa8:	e59d1000 	ldr	r1, [sp]
        10baac:	e5810000 	str	r0, [r1]
        10bab0:	e59f1044 	ldr	r1, [pc, #44]	; 10bafc <TLibrarian::Rendering(RefVar const &)+0xb0>
        10bab4:	e1a00004 	mov	r0, r4
        10bab8:	e3a03000 	mov	r3, #0	; 0x0
        10babc:	e3a02000 	mov	r2, #0	; 0x0
        10bac0:	eb6ae1eb 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        10bac4:	e5870000 	str	r0, [r7]
        10bac8:	e59d0000 	ldr	r0, [sp]
        10bacc:	e5900000 	ldr	r0, [r0]
        10bad0:	e3300002 	teq	r0, #2	; 0x2
        10bad4:	0a000009 	beq	10bb00 <TLibrarian::Rendering(RefVar const &)+0xb4>
        10bad8:	e1a0100d 	mov	r1, sp
        10badc:	e1a00005 	mov	r0, r5
        10bae0:	eb665dc5 	bl	1aa31fc <TLibrarian::$StrRefToSymbol(RefVar const &)>
        10bae4:	e1a0100d 	mov	r1, sp
        10bae8:	e5880000 	str	r0, [r8]
        10baec:	e1a00005 	mov	r0, r5
        10baf0:	eb6627ea 	bl	1a95aa0 <TLibrarian::$GetBookFrame(RefVar const &)>
        10baf4:	ea000006 	b	10bb14 <TLibrarian::Rendering(RefVar const &)+0xc8>
        10baf8:	00683308 	rsbeq	r3, r8, r8, lsl #6
        10bafc:	00682728 	rsbeq	r2, r8, r8, lsr #14
        10bb00:	e59f1080 	ldr	r1, [pc, #80]	; 10bb88 <TLibrarian::Rendering(RefVar const &)+0x13c>
        10bb04:	e1a00004 	mov	r0, r4
        10bb08:	e3a03000 	mov	r3, #0	; 0x0
        10bb0c:	e3a02000 	mov	r2, #0	; 0x0
        10bb10:	eb6ae1d7 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        10bb14:	e5860000 	str	r0, [r6]
        10bb18:	e59f006c 	ldr	r0, [pc, #6c]	; 10bb8c <TLibrarian::Rendering(RefVar const &)+0x140>
        10bb1c:	e5900000 	ldr	r0, [r0]
        10bb20:	e5901000 	ldr	r1, [r0]
        10bb24:	e5960000 	ldr	r0, [r6]
        10bb28:	eb6ae1cc 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10bb2c:	eb6ad986 	bl	1bc214c <$AllocateRefHandle(long)>
        10bb30:	e1a04000 	mov	r4, r0
        10bb34:	e5970000 	ldr	r0, [r7]
        10bb38:	e3100003 	tst	r0, #3	; 0x3
        10bb3c:	01a00140 	moveq	r0, r0, asr #2
        10bb40:	0a000000 	beq	10bb48 <TLibrarian::Rendering(RefVar const &)+0xfc>
        10bb44:	eb6ad974 	bl	1bc211c <$_RINTError(long)>
        10bb48:	e1a01000 	mov	r1, r0
        10bb4c:	e5940000 	ldr	r0, [r4]
        10bb50:	eb6ae1bf 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        10bb54:	e1a05000 	mov	r5, r0
        10bb58:	e1a00004 	mov	r0, r4
        10bb5c:	eb6add96 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10bb60:	e1a00006 	mov	r0, r6
        10bb64:	eb6add94 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10bb68:	e1a00008 	mov	r0, r8
        10bb6c:	eb6add92 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10bb70:	e59d0000 	ldr	r0, [sp]
        10bb74:	eb6add90 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10bb78:	e1a00007 	mov	r0, r7
        10bb7c:	eb6add8e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10bb80:	e1a00005 	mov	r0, r5
        10bb84:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        10bb88:	00682150 	rsbeq	r2, r8, r0, asr r1
        10bb8c:	006842c0 	rsbeq	r4, r8, r0, asr #5
    */
}

/**
 * Symbol: TLibrarian::SetCurrentPage(RefVar const &, long)
 * Address: 0010bb90
 */
TLibrarian::SetCurrentPage(RefVar const &, long) {
    /*
        10bb90:	e1a0c00d 	mov	ip, sp
        10bb94:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        10bb98:	e24cb004 	sub	fp, ip, #4	; 0x4
        10bb9c:	e1a06000 	mov	r6, r0
        10bba0:	e1a05001 	mov	r5, r1
        10bba4:	e1a04002 	mov	r4, r2
        10bba8:	e24dd010 	sub	sp, sp, #16	; 0x10
        10bbac:	e3a00002 	mov	r0, #2	; 0x2
        10bbb0:	eb6ad965 	bl	1bc214c <$AllocateRefHandle(long)>
        10bbb4:	e58d000c 	str	r0, [sp, #12]
        10bbb8:	e3a00002 	mov	r0, #2	; 0x2
        10bbbc:	eb6ad962 	bl	1bc214c <$AllocateRefHandle(long)>
        10bbc0:	e58d0008 	str	r0, [sp, #8]	; fField8
        10bbc4:	e59f1098 	ldr	r1, [pc, #98]	; 10bc64 <TLibrarian::SetCurrentPage(RefVar const &, long)+0xd4>
        10bbc8:	e1a00005 	mov	r0, r5
        10bbcc:	e3a03000 	mov	r3, #0	; 0x0
        10bbd0:	e3a02000 	mov	r2, #0	; 0x0
        10bbd4:	eb6ae1a6 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        10bbd8:	e59d100c 	ldr	r1, [sp, #12]
        10bbdc:	e5810000 	str	r0, [r1]
        10bbe0:	e28d100c 	add	r1, sp, #12	; 0xc
        10bbe4:	e1a00006 	mov	r0, r6
        10bbe8:	eb66fe75 	bl	1acb5c4 <TLibrarian::$GetLibraryEntry(RefVar const &)>
        10bbec:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        10bbf0:	e5810000 	str	r0, [r1]
        10bbf4:	e59f506c 	ldr	r5, [pc, #6c]	; 10bc68 <TLibrarian::SetCurrentPage(RefVar const &, long)+0xd8>
        10bbf8:	e5951000 	ldr	r1, [r5]
        10bbfc:	e5911000 	ldr	r1, [r1]
        10bc00:	eb6ae196 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10bc04:	eb6ad950 	bl	1bc214c <$AllocateRefHandle(long)>
        10bc08:	e58d0000 	str	r0, [sp]
        10bc0c:	e1a0200d 	mov	r2, sp
        10bc10:	e59f1054 	ldr	r1, [pc, #54]	; 10bc6c <TLibrarian::SetCurrentPage(RefVar const &, long)+0xdc>
        10bc14:	e28d0008 	add	r0, sp, #8	; 0x8
        10bc18:	eb6ae9d2 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10bc1c:	e59d0000 	ldr	r0, [sp]
        10bc20:	eb6add65 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10bc24:	e1a00104 	mov	r0, r4, lsl #2
        10bc28:	eb6ad947 	bl	1bc214c <$AllocateRefHandle(long)>
        10bc2c:	e58d0004 	str	r0, [sp, #4]	; fField4
        10bc30:	e28d2004 	add	r2, sp, #4	; 0x4
        10bc34:	e1a01005 	mov	r1, r5
        10bc38:	e28d0008 	add	r0, sp, #8	; 0x8
        10bc3c:	eb6ae9c9 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10bc40:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        10bc44:	eb6add5c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10bc48:	e28d0008 	add	r0, sp, #8	; 0x8
        10bc4c:	eb6add67 	bl	1bc31f0 <$EntryChange(RefVar const &)>
        10bc50:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        10bc54:	eb6add58 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10bc58:	e59d000c 	ldr	r0, [sp, #12]
        10bc5c:	eb6add56 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10bc60:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        10bc64:	00683308 	rsbeq	r3, r8, r8, lsl #6
        10bc68:	00682708 	rsbeq	r2, r8, r8, lsl #14
        10bc6c:	00683fb0 	streqh	r3, [r8], -#240
    */
}

/**
 * Symbol: TLibrarian::StrRefToSymbol(RefVar const &)
 * Address: 0010bc70
 */
TLibrarian::StrRefToSymbol(RefVar const &) {
    /*
        10bc70:	e1a0c00d 	mov	ip, sp
        10bc74:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        10bc78:	e24cb004 	sub	fp, ip, #4	; 0x4
        10bc7c:	e1a05001 	mov	r5, r1
        10bc80:	e3a00002 	mov	r0, #2	; 0x2
        10bc84:	eb6ad930 	bl	1bc214c <$AllocateRefHandle(long)>
        10bc88:	e1a04000 	mov	r4, r0
        10bc8c:	e1a00005 	mov	r0, r5
        10bc90:	eb6add3b 	bl	1bc3184 <$GetCString(RefVar const &)>
        10bc94:	e1a06000 	mov	r6, r0
        10bc98:	eb6b8ab0 	bl	1bee760 <$Ustrlen>
        10bc9c:	e3a01002 	mov	r1, #2	; 0x2
        10bca0:	e0810080 	add	r0, r1, r0, lsl #1
        10bca4:	eb6b5925 	bl	1be2140 <$NewPtr>
        10bca8:	e1a01000 	mov	r1, r0
        10bcac:	e1a05000 	mov	r5, r0
        10bcb0:	e1a00006 	mov	r0, r6
        10bcb4:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
        10bcb8:	e3a02001 	mov	r2, #1	; 0x1
        10bcbc:	eb6b6daf 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
        10bcc0:	e1a00005 	mov	r0, r5
        10bcc4:	eb6ae56d 	bl	1bc5280 <$Intern(char *)>
        10bcc8:	e5840000 	str	r0, [r4]
        10bccc:	e1a00005 	mov	r0, r5
        10bcd0:	eb6b54f7 	bl	1be10b4 <$DisposPtr>
        10bcd4:	e5945000 	ldr	r5, [r4]
        10bcd8:	e1a00004 	mov	r0, r4
        10bcdc:	eb6add36 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10bce0:	e1a00005 	mov	r0, r5
        10bce4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TLibrarian::TextSearch(unsigned short *, long, unsigned short *, long *, long, long *)
 * Address: 0010bce8
 */
TLibrarian::TextSearch(unsigned short *, long, unsigned short *, long *, long, long *) {
    /*
        10bce8:	e1a0c00d 	mov	ip, sp
        10bcec:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        10bcf0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        10bcf4:	e24cb014 	sub	fp, ip, #20	; 0x14
        10bcf8:	e1a06001 	mov	r6, r1
        10bcfc:	e1a04002 	mov	r4, r2
        10bd00:	e1a05003 	mov	r5, r3
        10bd04:	e3a08000 	mov	r8, #0	; 0x0
        10bd08:	e28ba014 	add	sl, fp, #20	; 0x14
        10bd0c:	e89a0600 	ldmia	sl, {r9, sl}
        10bd10:	e5997000 	ldr	r7, [r9]
        10bd14:	e157000a 	cmp	r7, sl
        10bd18:	aa00001f 	bge	10bd9c <TLibrarian::TextSearch(unsigned short *, long, unsigned short *, long *, long, long *)+0xb4>
        10bd1c:	e7950087 	ldr	r0, [r5, r7, lsl #1]
        10bd20:	e1a00820 	mov	r0, r0, lsr #16
        10bd24:	e3500061 	cmp	r0, #97	; 0x61
        10bd28:	ba000001 	blt	10bd34 <TLibrarian::TextSearch(unsigned short *, long, unsigned short *, long *, long, long *)+0x4c>
        10bd2c:	e350007a 	cmp	r0, #122	; 0x7a
        10bd30:	d2400020 	suble	r0, r0, #32	; 0x20
        10bd34:	e1a00800 	mov	r0, r0, lsl #16
        10bd38:	e7961088 	ldr	r1, [r6, r8, lsl #1]
        10bd3c:	e1a01821 	mov	r1, r1, lsr #16
        10bd40:	e1310820 	teq	r1, r0, lsr #16
        10bd44:	e2877001 	add	r7, r7, #1	; 0x1
        10bd48:	1a000010 	bne	10bd90 <TLibrarian::TextSearch(unsigned short *, long, unsigned short *, long *, long, long *)+0xa8>
        10bd4c:	e2888001 	add	r8, r8, #1	; 0x1
        10bd50:	e1380004 	teq	r8, r4
        10bd54:	1a00000e 	bne	10bd94 <TLibrarian::TextSearch(unsigned short *, long, unsigned short *, long *, long, long *)+0xac>
        10bd58:	e0570004 	subs	r0, r7, r4
        10bd5c:	0a000005 	beq	10bd78 <TLibrarian::TextSearch(unsigned short *, long, unsigned short *, long *, long, long *)+0x90>
        10bd60:	e0850080 	add	r0, r5, r0, lsl #1
        10bd64:	e5100002 	ldr	r0, [r0, -#2]	; fField2
        10bd68:	e1a00820 	mov	r0, r0, lsr #16
        10bd6c:	eb6b79eb 	bl	1bea520 <$IsAlphaNumeric(unsigned short)>
        10bd70:	e3300000 	teq	r0, #0	; 0x0
        10bd74:	1a000006 	bne	10bd94 <TLibrarian::TextSearch(unsigned short *, long, unsigned short *, long *, long, long *)+0xac>
        10bd78:	e0470004 	sub	r0, r7, r4
        10bd7c:	e59b101c 	ldr	r1, [fp, #28]
        10bd80:	e5810000 	str	r0, [r1]
        10bd84:	e3a00001 	mov	r0, #1	; 0x1
        10bd88:	e5897000 	str	r7, [r9]
        10bd8c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        10bd90:	e3a08000 	mov	r8, #0	; 0x0
        10bd94:	e157000a 	cmp	r7, sl
        10bd98:	baffffdf 	blt	10bd1c <TLibrarian::TextSearch(unsigned short *, long, unsigned short *, long *, long, long *)+0x34>
        10bd9c:	e3a00000 	mov	r0, #0	; 0x0
        10bda0:	e5897000 	str	r7, [r9]
        10bda4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TLibrarian::BookAvailable(RefVar const &, RefVar const &)
 * Address: 0010c61c
 */
TLibrarian::BookAvailable(RefVar const &, RefVar const &) {
    /*
        10c61c:	e3a03000 	mov	r3, #0	; 0x0
        10c620:	ea66f7cd 	b	1aca55c <TLibrarian::$BookAvailable(RefVar const &, RefVar const &, SourceType *)>
    */
}

/**
 * Symbol: TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)
 * Address: 0010c624
 */
TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *) {
    /*
        10c624:	e1a0c00d 	mov	ip, sp
        10c628:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        10c62c:	e24cb004 	sub	fp, ip, #4	; 0x4
        10c630:	e1a05000 	mov	r5, r0
        10c634:	e1a04003 	mov	r4, r3
        10c638:	e24dd0d0 	sub	sp, sp, #208	; 0xd0
        10c63c:	e3a00002 	mov	r0, #2	; 0x2
        10c640:	eb6ad6c1 	bl	1bc214c <$AllocateRefHandle(long)>
        10c644:	e58d00c4 	str	r0, [sp, #196]
        10c648:	e3a00002 	mov	r0, #2	; 0x2
        10c64c:	eb6ad6be 	bl	1bc214c <$AllocateRefHandle(long)>
        10c650:	e58d00c0 	str	r0, [sp, #192]
        10c654:	e3a00002 	mov	r0, #2	; 0x2
        10c658:	eb6ad6bb 	bl	1bc214c <$AllocateRefHandle(long)>
        10c65c:	e58d00bc 	str	r0, [sp, #188]
        10c660:	e3a00002 	mov	r0, #2	; 0x2
        10c664:	eb6ad6b8 	bl	1bc214c <$AllocateRefHandle(long)>
        10c668:	e1a06000 	mov	r6, r0
        10c66c:	e3a00002 	mov	r0, #2	; 0x2
        10c670:	eb6ad6b5 	bl	1bc214c <$AllocateRefHandle(long)>
        10c674:	e58d00b8 	str	r0, [sp, #184]
        10c678:	e3a00002 	mov	r0, #2	; 0x2
        10c67c:	eb6ad6b2 	bl	1bc214c <$AllocateRefHandle(long)>
        10c680:	e58d00b4 	str	r0, [sp, #180]
        10c684:	e3a00002 	mov	r0, #2	; 0x2
        10c688:	eb6ad6af 	bl	1bc214c <$AllocateRefHandle(long)>
        10c68c:	e1a07000 	mov	r7, r0
        10c690:	e59f2064 	ldr	r2, [pc, #64]	; 10c6fc <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0xd8>
        10c694:	e5920000 	ldr	r0, [r2]
        10c698:	e5901000 	ldr	r1, [r0]
        10c69c:	e51b2034 	ldr	r2, [fp, -#52]
        10c6a0:	e5920000 	ldr	r0, [r2]
        10c6a4:	e5900000 	ldr	r0, [r0]
        10c6a8:	eb6adeec 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10c6ac:	e3a0a000 	mov	sl, #0	; 0x0
        10c6b0:	e5860000 	str	r0, [r6]
        10c6b4:	e3300002 	teq	r0, #2	; 0x2
        10c6b8:	1a000010 	bne	10c700 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0xdc>
        10c6bc:	e1a00007 	mov	r0, r7
        10c6c0:	eb6adabd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c6c4:	e59d00b4 	ldr	r0, [sp, #180]
        10c6c8:	eb6adabb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c6cc:	e59d00b8 	ldr	r0, [sp, #184]
        10c6d0:	eb6adab9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c6d4:	e1a00006 	mov	r0, r6
        10c6d8:	eb6adab7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c6dc:	e59d00bc 	ldr	r0, [sp, #188]
        10c6e0:	eb6adab5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c6e4:	e59d00c0 	ldr	r0, [sp, #192]
        10c6e8:	eb6adab3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c6ec:	e59d00c4 	ldr	r0, [sp, #196]
        10c6f0:	eb6adab1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c6f4:	e3a00002 	mov	r0, #2	; 0x2
        10c6f8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        10c6fc:	00682138 	rsbeq	r2, r8, r8, lsr r1
        10c700:	e59f0098 	ldr	r0, [pc, #98]	; 10c7a0 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0x17c>
        10c704:	e5900000 	ldr	r0, [r0]
        10c708:	e5901000 	ldr	r1, [r0]
        10c70c:	e51b2034 	ldr	r2, [fp, -#52]
        10c710:	e5920000 	ldr	r0, [r2]
        10c714:	e5900000 	ldr	r0, [r0]
        10c718:	eb6aded0 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10c71c:	e2500002 	subs	r0, r0, #2	; 0x2
        10c720:	13a00001 	movne	r0, #1	; 0x1
        10c724:	e20000ff 	and	r0, r0, #255	; 0xff
        10c728:	e40d0004 	str	r0, [sp], -#4	; fField4
        10c72c:	e59f1070 	ldr	r1, [pc, #70]	; 10c7a4 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0x180>
        10c730:	e5910000 	ldr	r0, [r1]
        10c734:	e5901000 	ldr	r1, [r0]
        10c738:	e5960000 	ldr	r0, [r6]
        10c73c:	eb6adec7 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10c740:	eb6ad681 	bl	1bc214c <$AllocateRefHandle(long)>
        10c744:	e40d0004 	str	r0, [sp], -#4	; fField4
        10c748:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        10c74c:	e5900000 	ldr	r0, [r0]
        10c750:	e3300002 	teq	r0, #2	; 0x2
        10c754:	1a000013 	bne	10c7a8 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0x184>
        10c758:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        10c75c:	eb6ada96 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c760:	e1a00007 	mov	r0, r7
        10c764:	eb6ada94 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c768:	e59d00bc 	ldr	r0, [sp, #188]
        10c76c:	eb6ada92 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c770:	e59d00c0 	ldr	r0, [sp, #192]
        10c774:	eb6ada90 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c778:	e1a00006 	mov	r0, r6
        10c77c:	eb6ada8e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c780:	e59d00c4 	ldr	r0, [sp, #196]
        10c784:	eb6ada8c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c788:	e59d00c8 	ldr	r0, [sp, #200]
        10c78c:	eb6ada8a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c790:	e59d00cc 	ldr	r0, [sp, #204]
        10c794:	eb6ada88 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c798:	e3a00002 	mov	r0, #2	; 0x2
        10c79c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        10c7a0:	006830d0 	ldreqd	r3, [r8]
        10c7a4:	00683308 	rsbeq	r3, r8, r8, lsl #6
        10c7a8:	eb6ae2bf 	bl	1bc52ac <$Length(long)>
        10c7ac:	e2400002 	sub	r0, r0, #2	; 0x2
        10c7b0:	e1a000a0 	mov	r0, r0, lsr #1
        10c7b4:	e3a01017 	mov	r1, #23	; 0x17
        10c7b8:	e3500017 	cmp	r0, #23	; 0x17
        10c7bc:	a1a00001 	movge	r0, r1
        10c7c0:	e1a08000 	mov	r8, r0
        10c7c4:	e28d1004 	add	r1, sp, #4	; 0x4
        10c7c8:	e1a0000d 	mov	r0, sp
        10c7cc:	eb6ad241 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        10c7d0:	e1a0000d 	mov	r0, sp
        10c7d4:	eb6ad64e 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        10c7d8:	e1a02088 	mov	r2, r8, lsl #1
        10c7dc:	e28d108c 	add	r1, sp, #140	; 0x8c
        10c7e0:	eb6b49db 	bl	1bdef54 <$BlockMove>
        10c7e4:	e1a0000d 	mov	r0, sp
        10c7e8:	e3a01000 	mov	r1, #0	; 0x0
        10c7ec:	eb6ad643 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        10c7f0:	e28d008c 	add	r0, sp, #140	; 0x8c
        10c7f4:	e0800088 	add	r0, r0, r8, lsl #1
        10c7f8:	e5c0a001 	strb	sl, [r0, #1]
        10c7fc:	e5c0a000 	strb	sl, [r0]
        10c800:	e28d1004 	add	r1, sp, #4	; 0x4
        10c804:	e1a00005 	mov	r0, r5
        10c808:	eb665a7b 	bl	1aa31fc <TLibrarian::$StrRefToSymbol(RefVar const &)>
        10c80c:	e59d10c8 	ldr	r1, [sp, #200]
        10c810:	e5810000 	str	r0, [r1]
        10c814:	e24dd008 	sub	sp, sp, #8	; 0x8
        10c818:	e59f90e0 	ldr	r9, [pc, #e0]	; 10c900 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0x2dc>
        10c81c:	e5990000 	ldr	r0, [r9]
        10c820:	e5901000 	ldr	r1, [r0]
        10c824:	e5960000 	ldr	r0, [r6]
        10c828:	eb6ade8c 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10c82c:	eb6ad646 	bl	1bc214c <$AllocateRefHandle(long)>
        10c830:	e58d0004 	str	r0, [sp, #4]	; fField4
        10c834:	e5900000 	ldr	r0, [r0]
        10c838:	eb6ae29b 	bl	1bc52ac <$Length(long)>
        10c83c:	e2400002 	sub	r0, r0, #2	; 0x2
        10c840:	e1a080a0 	mov	r8, r0, lsr #1
        10c844:	e358003f 	cmp	r8, #63	; 0x3f
        10c848:	a3a0803f 	movge	r8, #63	; 0x3f
        10c84c:	e28d1004 	add	r1, sp, #4	; 0x4
        10c850:	e1a0000d 	mov	r0, sp
        10c854:	eb6ad21f 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        10c858:	e1a0000d 	mov	r0, sp
        10c85c:	eb6ad62c 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        10c860:	e1a02088 	mov	r2, r8, lsl #1
        10c864:	e28d1014 	add	r1, sp, #20	; 0x14
        10c868:	eb6b49b9 	bl	1bdef54 <$BlockMove>
        10c86c:	e1a0000d 	mov	r0, sp
        10c870:	e3a01000 	mov	r1, #0	; 0x0
        10c874:	eb6ad621 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        10c878:	e3a0a000 	mov	sl, #0	; 0x0
        10c87c:	e28d0014 	add	r0, sp, #20	; 0x14
        10c880:	e0800088 	add	r0, r0, r8, lsl #1
        10c884:	e5c0a001 	strb	sl, [r0, #1]
        10c888:	e5c0a000 	strb	sl, [r0]
        10c88c:	e2850004 	add	r0, r5, #4	; 0x4
        10c890:	e58d00dc 	str	r0, [sp, #220]
        10c894:	e59d10d0 	ldr	r1, [sp, #208]
        10c898:	e5911000 	ldr	r1, [r1]
        10c89c:	e5900000 	ldr	r0, [r0]
        10c8a0:	e5900000 	ldr	r0, [r0]
        10c8a4:	eb6ade6d 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10c8a8:	e3300002 	teq	r0, #2	; 0x2
        10c8ac:	0a000014 	beq	10c904 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0x2e0>
        10c8b0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        10c8b4:	eb6ada40 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c8b8:	e59d000c 	ldr	r0, [sp, #12]
        10c8bc:	eb6ada3e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c8c0:	e1a00007 	mov	r0, r7
        10c8c4:	eb6ada3c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c8c8:	e59d00c4 	ldr	r0, [sp, #196]
        10c8cc:	eb6ada3a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c8d0:	e59d00c8 	ldr	r0, [sp, #200]
        10c8d4:	eb6ada38 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c8d8:	e1a00006 	mov	r0, r6
        10c8dc:	eb6ada36 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c8e0:	e59d00cc 	ldr	r0, [sp, #204]
        10c8e4:	eb6ada34 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c8e8:	e59d00d0 	ldr	r0, [sp, #208]
        10c8ec:	eb6ada32 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c8f0:	e59d00d4 	ldr	r0, [sp, #212]
        10c8f4:	eb6ada30 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c8f8:	e3a0001a 	mov	r0, #26	; 0x1a
        10c8fc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        10c900:	00684b90 	streqb	r4, [r8], -#176
        10c904:	e59d0010 	ldr	r0, [sp, #16]
        10c908:	e59f1074 	ldr	r1, [pc, #74]	; 10c984 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0x360>
        10c90c:	e3300000 	teq	r0, #0	; 0x0
        10c910:	e58d10d8 	str	r1, [sp, #216]
        10c914:	1a0000d0 	bne	10cc5c <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0x638>
        10c918:	e28d100c 	add	r1, sp, #12	; 0xc
        10c91c:	e1a00005 	mov	r0, r5
        10c920:	eb66fb27 	bl	1acb5c4 <TLibrarian::$GetLibraryEntry(RefVar const &)>
        10c924:	e59d10cc 	ldr	r1, [sp, #204]
        10c928:	e3a0a004 	mov	sl, #4	; 0x4
        10c92c:	e5810000 	str	r0, [r1]
        10c930:	e59f8050 	ldr	r8, [pc, #50]	; 10c988 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0x364>
        10c934:	e3300002 	teq	r0, #2	; 0x2
        10c938:	0a000014 	beq	10c990 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0x36c>
        10c93c:	e24dd004 	sub	sp, sp, #4	; 0x4
        10c940:	e1a0000a 	mov	r0, sl
        10c944:	eb6ad600 	bl	1bc214c <$AllocateRefHandle(long)>
        10c948:	e58d0000 	str	r0, [sp]
        10c94c:	e1a0200d 	mov	r2, sp
        10c950:	e1a01008 	mov	r1, r8
        10c954:	e28d00d0 	add	r0, sp, #208	; 0xd0
        10c958:	eb6ae682 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10c95c:	e59d0000 	ldr	r0, [sp]
        10c960:	eb6ada15 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c964:	e51b2030 	ldr	r2, [fp, -#48]
        10c968:	e59f101c 	ldr	r1, [pc, #1c]	; 10c98c <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0x368>
        10c96c:	e28d00d0 	add	r0, sp, #208	; 0xd0
        10c970:	eb6ae67c 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10c974:	e28d00d0 	add	r0, sp, #208	; 0xd0
        10c978:	eb6ada1c 	bl	1bc31f0 <$EntryChange(RefVar const &)>
        10c97c:	e28dd004 	add	sp, sp, #4	; 0x4
        10c980:	ea0000b5 	b	10cc5c <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0x638>
        10c984:	0c101934 	ldceq	9, cr1, [r0], -#208
        10c988:	00682148 	rsbeq	r2, r8, r8, asr #2
        10c98c:	00683c30 	rsbeq	r3, r8, r0, lsr ip
        10c990:	e24dd014 	sub	sp, sp, #20	; 0x14
        10c994:	eb6ad5e9 	bl	1bc2140 <$AllocateFrame(void)>
        10c998:	e59d10e8 	ldr	r1, [sp, #232]
        10c99c:	e5810000 	str	r0, [r1]
        10c9a0:	e1a0000a 	mov	r0, sl
        10c9a4:	eb6ad5e8 	bl	1bc214c <$AllocateRefHandle(long)>
        10c9a8:	e58d0000 	str	r0, [sp]
        10c9ac:	e1a0200d 	mov	r2, sp
        10c9b0:	e1a01008 	mov	r1, r8
        10c9b4:	e28d00e8 	add	r0, sp, #232	; 0xe8
        10c9b8:	eb6ae66a 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10c9bc:	e59d0000 	ldr	r0, [sp]
        10c9c0:	eb6ad9fd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c9c4:	e3a08000 	mov	r8, #0	; 0x0
        10c9c8:	e28d0028 	add	r0, sp, #40	; 0x28
        10c9cc:	eb6ae240 	bl	1bc52d4 <$MakeString(unsigned short const *)>
        10c9d0:	eb6ad5dd 	bl	1bc214c <$AllocateRefHandle(long)>
        10c9d4:	e58d0004 	str	r0, [sp, #4]	; fField4
        10c9d8:	e28d2004 	add	r2, sp, #4	; 0x4
        10c9dc:	e1a01009 	mov	r1, r9
        10c9e0:	e28d00e8 	add	r0, sp, #232	; 0xe8
        10c9e4:	eb6ae65f 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10c9e8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        10c9ec:	eb6ad9f2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c9f0:	e28d00a8 	add	r0, sp, #168	; 0xa8
        10c9f4:	eb6ae236 	bl	1bc52d4 <$MakeString(unsigned short const *)>
        10c9f8:	eb6ad5d3 	bl	1bc214c <$AllocateRefHandle(long)>
        10c9fc:	e58d0008 	str	r0, [sp, #8]	; fField8
        10ca00:	e28d2008 	add	r2, sp, #8	; 0x8
        10ca04:	e51f1268 	ldr	r1, [pc, #fffffd98]	; 10c7a4 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0x180>
        10ca08:	e28d00e8 	add	r0, sp, #232	; 0xe8
        10ca0c:	eb6ae655 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10ca10:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        10ca14:	eb6ad9e8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10ca18:	e1a00008 	mov	r0, r8
        10ca1c:	eb6ad5ca 	bl	1bc214c <$AllocateRefHandle(long)>
        10ca20:	e58d000c 	str	r0, [sp, #12]
        10ca24:	e28d200c 	add	r2, sp, #12	; 0xc
        10ca28:	e59f1678 	ldr	r1, [pc, #678]	; 10d0a8 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0xa84>
        10ca2c:	e28d00e8 	add	r0, sp, #232	; 0xe8
        10ca30:	eb6ae64c 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10ca34:	e59d000c 	ldr	r0, [sp, #12]
        10ca38:	eb6ad9df 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10ca3c:	e1a00008 	mov	r0, r8
        10ca40:	eb6ad5c1 	bl	1bc214c <$AllocateRefHandle(long)>
        10ca44:	e58d0010 	str	r0, [sp, #16]
        10ca48:	e28d2010 	add	r2, sp, #16	; 0x10
        10ca4c:	e59f1658 	ldr	r1, [pc, #658]	; 10d0ac <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0xa88>
        10ca50:	e28d00e8 	add	r0, sp, #232	; 0xe8
        10ca54:	eb6ae643 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10ca58:	e59d0010 	ldr	r0, [sp, #16]
        10ca5c:	eb6ad9d6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10ca60:	e59f0648 	ldr	r0, [pc, #648]	; 10d0b0 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0xa8c>
        10ca64:	e5900000 	ldr	r0, [r0]
        10ca68:	e5901000 	ldr	r1, [r0]
        10ca6c:	e5960000 	ldr	r0, [r6]
        10ca70:	eb6addfa 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10ca74:	eb6ae20c 	bl	1bc52ac <$Length(long)>
        10ca78:	e1a09000 	mov	r9, r0
        10ca7c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        10ca80:	e3a00002 	mov	r0, #2	; 0x2
        10ca84:	eb6ad5b0 	bl	1bc214c <$AllocateRefHandle(long)>
        10ca88:	e58d0008 	str	r0, [sp, #8]	; fField8
        10ca8c:	e3a00002 	mov	r0, #2	; 0x2
        10ca90:	eb6ad5ad 	bl	1bc214c <$AllocateRefHandle(long)>
        10ca94:	e1a0a000 	mov	sl, r0
        10ca98:	e3a00002 	mov	r0, #2	; 0x2
        10ca9c:	eb6ad5aa 	bl	1bc214c <$AllocateRefHandle(long)>
        10caa0:	e58d0004 	str	r0, [sp, #4]	; fField4
        10caa4:	e3a00002 	mov	r0, #2	; 0x2
        10caa8:	eb6ad5a7 	bl	1bc214c <$AllocateRefHandle(long)>
        10caac:	e58d0000 	str	r0, [sp]
        10cab0:	e1a00009 	mov	r0, r9
        10cab4:	eb663cb8 	bl	1a9bd9c <$MakeArray(long)>
        10cab8:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        10cabc:	e5810000 	str	r0, [r1]
        10cac0:	e1a00009 	mov	r0, r9
        10cac4:	eb663cb4 	bl	1a9bd9c <$MakeArray(long)>
        10cac8:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        10cacc:	e5810000 	str	r0, [r1]
        10cad0:	e24dd00c 	sub	sp, sp, #12	; 0xc
        10cad4:	e3a08000 	mov	r8, #0	; 0x0
        10cad8:	e3590000 	cmp	r9, #0	; 0x0
        10cadc:	da000013 	ble	10cb30 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0x50c>
        10cae0:	e3a00000 	mov	r0, #0	; 0x0
        10cae4:	eb663cac 	bl	1a9bd9c <$MakeArray(long)>
        10cae8:	e58a0000 	str	r0, [sl]
        10caec:	e1a02000 	mov	r2, r0
        10caf0:	e1a01008 	mov	r1, r8
        10caf4:	e59d0014 	ldr	r0, [sp, #20]
        10caf8:	e5900000 	ldr	r0, [r0]
        10cafc:	eb6ae615 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        10cb00:	e3a00000 	mov	r0, #0	; 0x0
        10cb04:	eb663ca4 	bl	1a9bd9c <$MakeArray(long)>
        10cb08:	e59d100c 	ldr	r1, [sp, #12]
        10cb0c:	e5810000 	str	r0, [r1]
        10cb10:	e1a02000 	mov	r2, r0
        10cb14:	e1a01008 	mov	r1, r8
        10cb18:	e59d0010 	ldr	r0, [sp, #16]
        10cb1c:	e5900000 	ldr	r0, [r0]
        10cb20:	eb6ae60c 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        10cb24:	e2888001 	add	r8, r8, #1	; 0x1
        10cb28:	e1580009 	cmp	r8, r9
        10cb2c:	baffffeb 	blt	10cae0 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0x4bc>
        10cb30:	e28d2014 	add	r2, sp, #20	; 0x14
        10cb34:	e59f1578 	ldr	r1, [pc, #578]	; 10d0b4 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0xa90>
        10cb38:	e28d0c01 	add	r0, sp, #256	; 0x100
        10cb3c:	eb6ae609 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10cb40:	e28d2010 	add	r2, sp, #16	; 0x10
        10cb44:	e59f156c 	ldr	r1, [pc, #56c]	; 10d0b8 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0xa94>
        10cb48:	e28d0c01 	add	r0, sp, #256	; 0x100
        10cb4c:	eb6ae605 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10cb50:	eb6ad57a 	bl	1bc2140 <$AllocateFrame(void)>
        10cb54:	eb6ad57c 	bl	1bc214c <$AllocateRefHandle(long)>
        10cb58:	e58d0000 	str	r0, [sp]
        10cb5c:	e1a0200d 	mov	r2, sp
        10cb60:	e59f1554 	ldr	r1, [pc, #554]	; 10d0bc <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0xa98>
        10cb64:	e28d0c01 	add	r0, sp, #256	; 0x100
        10cb68:	eb6ae5fe 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10cb6c:	e59d0000 	ldr	r0, [sp]
        10cb70:	eb6ad991 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10cb74:	e3a08000 	mov	r8, #0	; 0x0
        10cb78:	e51b2030 	ldr	r2, [fp, -#48]
        10cb7c:	e51f11f8 	ldr	r1, [pc, #fffffe08]	; 10c98c <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0x368>
        10cb80:	e28d0c01 	add	r0, sp, #256	; 0x100
        10cb84:	eb6ae5f7 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10cb88:	e1a00008 	mov	r0, r8
        10cb8c:	eb6ad56e 	bl	1bc214c <$AllocateRefHandle(long)>
        10cb90:	e58d0004 	str	r0, [sp, #4]	; fField4
        10cb94:	e28d2004 	add	r2, sp, #4	; 0x4
        10cb98:	e59f1520 	ldr	r1, [pc, #520]	; 10d0c0 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0xa9c>
        10cb9c:	e28d0c01 	add	r0, sp, #256	; 0x100
        10cba0:	eb6ae5f0 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10cba4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        10cba8:	eb6ad983 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10cbac:	e1a00008 	mov	r0, r8
        10cbb0:	eb6ad565 	bl	1bc214c <$AllocateRefHandle(long)>
        10cbb4:	e58d0008 	str	r0, [sp, #8]	; fField8
        10cbb8:	e28d2008 	add	r2, sp, #8	; 0x8
        10cbbc:	e59f1500 	ldr	r1, [pc, #500]	; 10d0c4 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0xaa0>
        10cbc0:	e28d0c01 	add	r0, sp, #256	; 0x100
        10cbc4:	eb6ae5e7 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10cbc8:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        10cbcc:	eb6ad97a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10cbd0:	e24dd00c 	sub	sp, sp, #12	; 0xc
        10cbd4:	e3a00002 	mov	r0, #2	; 0x2
        10cbd8:	eb6ad55b 	bl	1bc214c <$AllocateRefHandle(long)>
        10cbdc:	e58d0000 	str	r0, [sp]
        10cbe0:	e1a0800d 	mov	r8, sp
        10cbe4:	e59f14dc 	ldr	r1, [pc, #4dc]	; 10d0c8 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0xaa4>	; fField4
        10cbe8:	e59d0110 	ldr	r0, [sp, #272]
        10cbec:	e5900000 	ldr	r0, [r0]
        10cbf0:	eb6af658 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        10cbf4:	eb6ad554 	bl	1bc214c <$AllocateRefHandle(long)>
        10cbf8:	e58d0004 	str	r0, [sp, #4]	; fField4
        10cbfc:	e28d0004 	add	r0, sp, #4	; 0x4
        10cc00:	e59f14c4 	ldr	r1, [pc, #4c4]	; 10d0cc <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0xaa8>	; fField4
        10cc04:	e1a02008 	mov	r2, r8
        10cc08:	eb6ad971 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
        10cc0c:	eb6ad54e 	bl	1bc214c <$AllocateRefHandle(long)>
        10cc10:	e58d0008 	str	r0, [sp, #8]	; fField8
        10cc14:	e59d0000 	ldr	r0, [sp]
        10cc18:	eb6ad967 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10cc1c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        10cc20:	eb6ad965 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10cc24:	e28d1f43 	add	r1, sp, #268	; 0x10c
        10cc28:	e28d0008 	add	r0, sp, #8	; 0x8
        10cc2c:	eb6ae9d3 	bl	1bc7380 <$SoupAdd__FRC6RefVarT1>
        10cc30:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        10cc34:	eb6ad960 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10cc38:	e5bd0018 	ldr	r0, [sp, #24]!
        10cc3c:	eb6ad95e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10cc40:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        10cc44:	eb6ad95c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10cc48:	e1a0000a 	mov	r0, sl
        10cc4c:	eb6ad95a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10cc50:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        10cc54:	eb6ad958 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10cc58:	e28dd020 	add	sp, sp, #32	; 0x20
        10cc5c:	e59d00dc 	ldr	r0, [sp, #220]
        10cc60:	e28d10d0 	add	r1, sp, #208	; 0xd0
        10cc64:	e51b2034 	ldr	r2, [fp, -#52]
        10cc68:	eb6ae5be 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10cc6c:	e59f8454 	ldr	r8, [pc, #454]	; 10d0c8 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0xaa4>
        10cc70:	e3340000 	teq	r4, #0	; 0x0
        10cc74:	0a00000a 	beq	10cca4 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0x680>
        10cc78:	e5d40001 	ldrb	r0, [r4, #1]
        10cc7c:	e3300005 	teq	r0, #5	; 0x5
        10cc80:	1a000002 	bne	10cc90 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0x66c>
        10cc84:	e5d41000 	ldrb	r1, [r4]
        10cc88:	e3110002 	tst	r1, #2	; 0x2
        10cc8c:	1a000004 	bne	10cca4 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0x680>
        10cc90:	e5d41000 	ldrb	r1, [r4]
        10cc94:	e3110001 	tst	r1, #1	; 0x1
        10cc98:	0a00008b 	beq	10cecc <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0x8a8>
        10cc9c:	e3300000 	teq	r0, #0	; 0x0
        10cca0:	1a000089 	bne	10cecc <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0x8a8>
        10cca4:	eb6ad525 	bl	1bc2140 <$AllocateFrame(void)>
        10cca8:	e59d10c4 	ldr	r1, [sp, #196]
        10ccac:	e5810000 	str	r0, [r1]
        10ccb0:	e59d0010 	ldr	r0, [sp, #16]
        10ccb4:	e59f1414 	ldr	r1, [pc, #414]	; 10d0d0 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0xaac>
        10ccb8:	e3300000 	teq	r0, #0	; 0x0
        10ccbc:	159f2410 	ldrne	r2, [pc, #410]	; 10d0d4 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0xab0>
        10ccc0:	01a02008 	moveq	r2, r8
        10ccc4:	e28d00c4 	add	r0, sp, #196	; 0xc4
        10ccc8:	eb6ae5a6 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10cccc:	e59f0404 	ldr	r0, [pc, #404]	; 10d0d8 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0xab4>
        10ccd0:	e5900000 	ldr	r0, [r0]
        10ccd4:	e5901000 	ldr	r1, [r0]
        10ccd8:	e5960000 	ldr	r0, [r6]
        10ccdc:	eb6add5f 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10cce0:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        10cce4:	e5810000 	str	r0, [r1]
        10cce8:	e24dd008 	sub	sp, sp, #8	; 0x8
        10ccec:	e3300002 	teq	r0, #2	; 0x2
        10ccf0:	0a000018 	beq	10cd58 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0x734>
        10ccf4:	e24dd004 	sub	sp, sp, #4	; 0x4
        10ccf8:	eb6ae16b 	bl	1bc52ac <$Length(long)>
        10ccfc:	e2400002 	sub	r0, r0, #2	; 0x2
        10cd00:	e1a000a0 	mov	r0, r0, lsr #1
        10cd04:	e3a0103f 	mov	r1, #63	; 0x3f
        10cd08:	e350003f 	cmp	r0, #63	; 0x3f
        10cd0c:	a1a00001 	movge	r0, r1
        10cd10:	e1a09000 	mov	r9, r0
        10cd14:	e28d1010 	add	r1, sp, #16	; 0x10
        10cd18:	e1a0000d 	mov	r0, sp
        10cd1c:	eb6ad0ed 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        10cd20:	e1a0000d 	mov	r0, sp
        10cd24:	eb6ad4fa 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        10cd28:	e1a02089 	mov	r2, r9, lsl #1
        10cd2c:	e28d1020 	add	r1, sp, #32	; 0x20
        10cd30:	eb6b4887 	bl	1bdef54 <$BlockMove>
        10cd34:	e1a0000d 	mov	r0, sp
        10cd38:	e3a01000 	mov	r1, #0	; 0x0
        10cd3c:	eb6ad4ef 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        10cd40:	e3a0a000 	mov	sl, #0	; 0x0
        10cd44:	e28d0020 	add	r0, sp, #32	; 0x20
        10cd48:	e0800089 	add	r0, r0, r9, lsl #1
        10cd4c:	e5c0a001 	strb	sl, [r0, #1]
        10cd50:	e5c0a000 	strb	sl, [r0]
        10cd54:	e28dd004 	add	sp, sp, #4	; 0x4
        10cd58:	e28d001c 	add	r0, sp, #28	; 0x1c
        10cd5c:	eb6ae15c 	bl	1bc52d4 <$MakeString(unsigned short const *)>
        10cd60:	eb6ad4f9 	bl	1bc214c <$AllocateRefHandle(long)>
        10cd64:	e58d0000 	str	r0, [sp]
        10cd68:	e1a0200d 	mov	r2, sp
        10cd6c:	e59f1368 	ldr	r1, [pc, #368]	; 10d0dc <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0xab8>
        10cd70:	e28d00cc 	add	r0, sp, #204	; 0xcc
        10cd74:	eb6ae57b 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10cd78:	e59d0000 	ldr	r0, [sp]
        10cd7c:	eb6ad90e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10cd80:	e3a0a000 	mov	sl, #0	; 0x0
        10cd84:	e28d009c 	add	r0, sp, #156	; 0x9c
        10cd88:	eb6ae151 	bl	1bc52d4 <$MakeString(unsigned short const *)>
        10cd8c:	eb6ad4ee 	bl	1bc214c <$AllocateRefHandle(long)>
        10cd90:	e58d0004 	str	r0, [sp, #4]	; fField4
        10cd94:	e28d2004 	add	r2, sp, #4	; 0x4
        10cd98:	e51f15fc 	ldr	r1, [pc, #fffffa04]	; 10c7a4 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0x180>
        10cd9c:	e28d00cc 	add	r0, sp, #204	; 0xcc
        10cda0:	eb6ae570 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10cda4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        10cda8:	eb6ad903 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10cdac:	e51b2030 	ldr	r2, [fp, -#48]
        10cdb0:	e51f142c 	ldr	r1, [pc, #fffffbd4]	; 10c98c <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0x368>
        10cdb4:	e28d00cc 	add	r0, sp, #204	; 0xcc
        10cdb8:	eb6ae56a 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10cdbc:	e51f26c8 	ldr	r2, [pc, #fffff938]	; 10c6fc <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0xd8>
        10cdc0:	e59f1318 	ldr	r1, [pc, #318]	; 10d0e0 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0xabc>
        10cdc4:	e28d00cc 	add	r0, sp, #204	; 0xcc
        10cdc8:	eb6ae566 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10cdcc:	e59f9310 	ldr	r9, [pc, #310]	; 10d0e4 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0xac0>
        10cdd0:	e5990000 	ldr	r0, [r9]
        10cdd4:	e5901000 	ldr	r1, [r0]
        10cdd8:	e5960000 	ldr	r0, [r6]
        10cddc:	eb6add19 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        10cde0:	e3300000 	teq	r0, #0	; 0x0
        10cde4:	0a000013 	beq	10ce38 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0x814>
        10cde8:	e24dd008 	sub	sp, sp, #8	; 0x8
        10cdec:	e5990000 	ldr	r0, [r9]
        10cdf0:	e5901000 	ldr	r1, [r0]
        10cdf4:	e5960000 	ldr	r0, [r6]
        10cdf8:	eb6add18 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10cdfc:	eb6ad4d2 	bl	1bc214c <$AllocateRefHandle(long)>
        10ce00:	e58d0000 	str	r0, [sp]
        10ce04:	e1a0000d 	mov	r0, sp
        10ce08:	eb6aed94 	bl	1bc8460 <$TotalClone(RefVar const &)>
        10ce0c:	eb6ad4ce 	bl	1bc214c <$AllocateRefHandle(long)>
        10ce10:	e58d0004 	str	r0, [sp, #4]	; fField4
        10ce14:	e59d0000 	ldr	r0, [sp]
        10ce18:	eb6ad8e7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10ce1c:	e28d2004 	add	r2, sp, #4	; 0x4
        10ce20:	e1a01009 	mov	r1, r9
        10ce24:	e28d00d4 	add	r0, sp, #212	; 0xd4
        10ce28:	eb6ae54e 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10ce2c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        10ce30:	eb6ad8e1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10ce34:	e28dd008 	add	sp, sp, #8	; 0x8
        10ce38:	e24dd004 	sub	sp, sp, #4	; 0x4
        10ce3c:	e59d00e4 	ldr	r0, [sp, #228]
        10ce40:	e5900000 	ldr	r0, [r0]
        10ce44:	e2800024 	add	r0, r0, #36	; 0x24
        10ce48:	e59f1298 	ldr	r1, [pc, #298]	; 10d0e8 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0xac4>
        10ce4c:	e3a03000 	mov	r3, #0	; 0x0
        10ce50:	e3a02000 	mov	r2, #0	; 0x0
        10ce54:	eb6add06 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        10ce58:	eb6ad4bb 	bl	1bc214c <$AllocateRefHandle(long)>
        10ce5c:	e58d0000 	str	r0, [sp]
        10ce60:	e3a00001 	mov	r0, #1	; 0x1
        10ce64:	eb663bcc 	bl	1a9bd9c <$MakeArray(long)>
        10ce68:	e59d10d4 	ldr	r1, [sp, #212]
        10ce6c:	e5810000 	str	r0, [r1]
        10ce70:	e59d10d0 	ldr	r1, [sp, #208]
        10ce74:	e5912000 	ldr	r2, [r1]
        10ce78:	e1a0100a 	mov	r1, sl
        10ce7c:	eb6ae535 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        10ce80:	e5d40000 	ldrb	r0, [r4]
        10ce84:	e3100001 	tst	r0, #1	; 0x1
        10ce88:	0a000004 	beq	10cea0 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0x87c>
        10ce8c:	e5d40001 	ldrb	r0, [r4, #1]
        10ce90:	e3300000 	teq	r0, #0	; 0x0
        10ce94:	028d20d4 	addeq	r2, sp, #212	; 0xd4
        10ce98:	059f124c 	ldreq	r1, [pc, #24c]	; 10d0ec <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0xac8>
        10ce9c:	0a000005 	beq	10ceb8 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0x894>
        10cea0:	e59f2248 	ldr	r2, [pc, #248]	; 10d0f0 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0xacc>
        10cea4:	e59f1248 	ldr	r1, [pc, #248]	; 10d0f4 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0xad0>
        10cea8:	e28d00d0 	add	r0, sp, #208	; 0xd0
        10ceac:	eb6ae52d 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10ceb0:	e28d20d4 	add	r2, sp, #212	; 0xd4
        10ceb4:	e59f123c 	ldr	r1, [pc, #23c]	; 10d0f8 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0xad4>
        10ceb8:	e1a0000d 	mov	r0, sp
        10cebc:	eb6ad8c4 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
        10cec0:	e59d0000 	ldr	r0, [sp]
        10cec4:	eb6ad8bc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10cec8:	e28dd00c 	add	sp, sp, #12	; 0xc
        10cecc:	e24dd004 	sub	sp, sp, #4	; 0x4
        10ced0:	e59d0014 	ldr	r0, [sp, #20]
        10ced4:	e3300000 	teq	r0, #0	; 0x0
        10ced8:	1a000015 	bne	10cf34 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0x910>
        10cedc:	e5950008 	ldr	r0, [r5, #8]	; fField8
        10cee0:	e3300000 	teq	r0, #0	; 0x0
        10cee4:	1a00000f 	bne	10cf28 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0x904>
        10cee8:	e59f020c 	ldr	r0, [pc, #20c]	; 10d0fc <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0xad8>
        10ceec:	e5900000 	ldr	r0, [r0]
        10cef0:	eb6ad495 	bl	1bc214c <$AllocateRefHandle(long)>
        10cef4:	e1a04000 	mov	r4, r0
        10cef8:	e59f0200 	ldr	r0, [pc, #200]	; 10d100 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0xadc>
        10cefc:	e5900000 	ldr	r0, [r0]
        10cf00:	e5901000 	ldr	r1, [r0]
        10cf04:	e5940000 	ldr	r0, [r4]
        10cf08:	eb6adcd4 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10cf0c:	e59d10cc 	ldr	r1, [sp, #204]
        10cf10:	e5810000 	str	r0, [r1]
        10cf14:	e1a00004 	mov	r0, r4
        10cf18:	eb6ad8a7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10cf1c:	e1a01008 	mov	r1, r8
        10cf20:	e28d00cc 	add	r0, sp, #204	; 0xcc
        10cf24:	eb6ad47f 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        10cf28:	e5950008 	ldr	r0, [r5, #8]	; fField8
        10cf2c:	e2800001 	add	r0, r0, #1	; 0x1
        10cf30:	e5a50008 	str	r0, [r5, #8]!	; fField8
        10cf34:	eb6ad481 	bl	1bc2140 <$AllocateFrame(void)>
        10cf38:	e59d10cc 	ldr	r1, [sp, #204]
        10cf3c:	e5810000 	str	r0, [r1]
        10cf40:	e28d0098 	add	r0, sp, #152	; 0x98
        10cf44:	eb6ae0e2 	bl	1bc52d4 <$MakeString(unsigned short const *)>
        10cf48:	eb6ad47f 	bl	1bc214c <$AllocateRefHandle(long)>
        10cf4c:	e58d0000 	str	r0, [sp]
        10cf50:	e1a0200d 	mov	r2, sp
        10cf54:	e51f17b8 	ldr	r1, [pc, #fffff848]	; 10c7a4 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0x180>
        10cf58:	e28d00cc 	add	r0, sp, #204	; 0xcc
        10cf5c:	eb6ae501 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10cf60:	e59d0000 	ldr	r0, [sp]
        10cf64:	eb6ad894 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10cf68:	e59f4194 	ldr	r4, [pc, #194]	; 10d104 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0xae0>
        10cf6c:	e5940000 	ldr	r0, [r4]
        10cf70:	e5901000 	ldr	r1, [r0]
        10cf74:	e5960000 	ldr	r0, [r6]
        10cf78:	eb6adcb2 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        10cf7c:	e3300000 	teq	r0, #0	; 0x0
        10cf80:	0a000032 	beq	10d050 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0xa2c>
        10cf84:	e24dd004 	sub	sp, sp, #4	; 0x4
        10cf88:	e3a00000 	mov	r0, #0	; 0x0
        10cf8c:	eb663b82 	bl	1a9bd9c <$MakeArray(long)>
        10cf90:	eb6ad46d 	bl	1bc214c <$AllocateRefHandle(long)>
        10cf94:	e58d0000 	str	r0, [sp]
        10cf98:	e1a0200d 	mov	r2, sp
        10cf9c:	e1a01004 	mov	r1, r4
        10cfa0:	e28d00d0 	add	r0, sp, #208	; 0xd0
        10cfa4:	eb6ae4ef 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10cfa8:	e5940000 	ldr	r0, [r4]
        10cfac:	e5901000 	ldr	r1, [r0]
        10cfb0:	e5960000 	ldr	r0, [r6]
        10cfb4:	eb6adca9 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10cfb8:	e5870000 	str	r0, [r7]
        10cfbc:	eb6ae0ba 	bl	1bc52ac <$Length(long)>
        10cfc0:	e1a05000 	mov	r5, r0
        10cfc4:	e3a04000 	mov	r4, #0	; 0x0
        10cfc8:	e3500000 	cmp	r0, #0	; 0x0
        10cfcc:	da00001c 	ble	10d044 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0xa20>
        10cfd0:	e3a09002 	mov	r9, #2	; 0x2
        10cfd4:	e24dd00c 	sub	sp, sp, #12	; 0xc
        10cfd8:	e1a01004 	mov	r1, r4
        10cfdc:	e5970000 	ldr	r0, [r7]
        10cfe0:	eb6adc9b 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        10cfe4:	eb6ad458 	bl	1bc214c <$AllocateRefHandle(long)>
        10cfe8:	e58d0004 	str	r0, [sp, #4]	; fField4
        10cfec:	e28d8004 	add	r8, sp, #4	; 0x4
        10cff0:	e1a00009 	mov	r0, r9
        10cff4:	eb6ad454 	bl	1bc214c <$AllocateRefHandle(long)>
        10cff8:	e58d0008 	str	r0, [sp, #8]	; fField8
        10cffc:	e28d0008 	add	r0, sp, #8	; 0x8
        10d000:	e1a01008 	mov	r1, r8
        10d004:	eb6ad02b 	bl	1bc10b8 <$RegTaskTemplate__FRC6RefVarT1>
        10d008:	eb6ad44f 	bl	1bc214c <$AllocateRefHandle(long)>
        10d00c:	e58d0000 	str	r0, [sp]
        10d010:	e1a0100d 	mov	r1, sp
        10d014:	e28d000c 	add	r0, sp, #12	; 0xc
        10d018:	eb6ad442 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        10d01c:	e59d0000 	ldr	r0, [sp]
        10d020:	eb6ad865 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10d024:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        10d028:	eb6ad863 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10d02c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        10d030:	eb6ad861 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10d034:	e28dd00c 	add	sp, sp, #12	; 0xc
        10d038:	e2844001 	add	r4, r4, #1	; 0x1
        10d03c:	e1540005 	cmp	r4, r5
        10d040:	baffffe3 	blt	10cfd4 <TLibrarian::BookAvailable(RefVar const &, RefVar const &, SourceType *)+0x9b0>
        10d044:	e59d0000 	ldr	r0, [sp]
        10d048:	eb6ad85b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10d04c:	e28dd004 	add	sp, sp, #4	; 0x4
        10d050:	e59d00cc 	ldr	r0, [sp, #204]
        10d054:	e5904000 	ldr	r4, [r0]
        10d058:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        10d05c:	eb6ad856 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10d060:	e59d0010 	ldr	r0, [sp, #16]
        10d064:	eb6ad854 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10d068:	e1a00007 	mov	r0, r7
        10d06c:	eb6ad852 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10d070:	e59d00c8 	ldr	r0, [sp, #200]
        10d074:	eb6ad850 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10d078:	e59d00cc 	ldr	r0, [sp, #204]
        10d07c:	eb6ad84e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10d080:	e1a00006 	mov	r0, r6
        10d084:	eb6ad84c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10d088:	e59d00d0 	ldr	r0, [sp, #208]
        10d08c:	eb6ad84a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10d090:	e59d00d4 	ldr	r0, [sp, #212]
        10d094:	eb6ad848 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10d098:	e59d00d8 	ldr	r0, [sp, #216]
        10d09c:	eb6ad846 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10d0a0:	e1a00004 	mov	r0, r4
        10d0a4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        10d0a8:	00682708 	rsbeq	r2, r8, r8, lsl #14
        10d0ac:	00683fb0 	streqh	r3, [r8], -#240
        10d0b0:	006842c0 	rsbeq	r4, r8, r0, asr #5
        10d0b4:	00683788 	rsbeq	r3, r8, r8, lsl #15
        10d0b8:	00683230 	rsbeq	r3, r8, r0, lsr r2
        10d0bc:	006827a0 	rsbeq	r2, r8, r0, lsr #15
        10d0c0:	00682728 	rsbeq	r2, r8, r8, lsr #14
        10d0c4:	00682df0 	streqd	r2, [r8], -#208
        10d0c8:	00682638 	rsbeq	r2, r8, r8, lsr r6
        10d0cc:	006826a0 	rsbeq	r2, r8, r0, lsr #13
        10d0d0:	00681e80 	rsbeq	r1, r8, r0, lsl #29
        10d0d4:	00684b88 	rsbeq	r4, r8, r8, lsl #23
        10d0d8:	00684658 	rsbeq	r4, r8, r8, asr r6
        10d0dc:	00684ac0 	rsbeq	r4, r8, r0, asr #21
        10d0e0:	00684cb0 	streqh	r4, [r8], -#192
        10d0e4:	00683150 	rsbeq	r3, r8, r0, asr r1
        10d0e8:	00682d18 	rsbeq	r2, r8, r8, lsl sp
        10d0ec:	006845f0 	streqd	r4, [r8], -#80
        10d0f0:	00680eb0 	streqh	r0, [r8], -#224
        10d0f4:	00685390 	streqb	r5, [r8], -#48
        10d0f8:	00681d98 	streqb	r1, [r8], -#216
        10d0fc:	0c10180c 	ldceq	8, cr1, [r0], -#48
        10d100:	00682d90 	streqb	r2, [r8], -#208
        10d104:	00681f28 	rsbeq	r1, r8, r8, lsr #30
    */
}

