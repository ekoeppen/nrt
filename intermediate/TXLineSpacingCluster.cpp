#include "include/TXLineSpacingCluster.h"

/**
 * Symbol: CalcDimensions__20TXLineSpacingClusterCFPiT1
 * Address: 00245544
 */
void TXLineSpacingCluster::CalcDimensions() {
    /*
        245544:	e1a0c00d 	mov	ip, sp
        245548:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        24554c:	e24cb004 	sub	fp, ip, #4	; 0x4
        245550:	e1a04001 	mov	r4, r1
        245554:	eb654dc6 	bl	1b98c74 <$CalcDimensions__20TXRulerBitMapClusterCFPiT1>
        245558:	e5940000 	ldr	r0, [r4]
        24555c:	e2800024 	add	r0, r0, #36	; 0x24
        245560:	e5840000 	str	r0, [r4]
        245564:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TXLineSpacingCluster::GetLineSpacingStringBounds(Rect *)
 * Address: 00245568
 */
TXLineSpacingCluster::GetLineSpacingStringBounds(Rect *) {
    /*
        245568:	e1a0c00d 	mov	ip, sp
        24556c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        245570:	e24cb004 	sub	fp, ip, #4	; 0x4
        245574:	e590201c 	ldr	r2, [r0, #28]	; fField28
        245578:	e590300c 	ldr	r3, [r0, #12]	; fField12
        24557c:	e0030392 	mul	r3, r2, r3
        245580:	e5902008 	ldr	r2, [r0, #8]	; fField8
        245584:	e083c002 	add	ip, r3, r2
        245588:	e5902004 	ldr	r2, [r0, #4]	; fField4
        24558c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        245590:	e0823000 	add	r3, r2, r0
        245594:	e92d0008 	stmdb	sp!, {r3}
        245598:	e28c3024 	add	r3, ip, #36	; 0x24
        24559c:	e24cc002 	sub	ip, ip, #2	; 0x2
        2455a0:	e1a00001 	mov	r0, r1
        2455a4:	e1a0100c 	mov	r1, ip
        2455a8:	eb643d17 	bl	1b54a0c <$SetRect__FP4RectlN32>
        2455ac:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TXLineSpacingCluster::DrawLineSpacingString(TXRuler const *)
 * Address: 002455b0
 */
TXLineSpacingCluster::DrawLineSpacingString(TXRuler const *) {
    /*
        2455b0:	e1a0c00d 	mov	ip, sp
        2455b4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2455b8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2455bc:	e1a04000 	mov	r4, r0
        2455c0:	e1a05001 	mov	r5, r1
        2455c4:	e24dd008 	sub	sp, sp, #8	; 0x8
        2455c8:	e1a0100d 	mov	r1, sp
        2455cc:	eb6551af 	bl	1b99c90 <TXLineSpacingCluster::$GetLineSpacingStringBounds(Rect *)>
        2455d0:	e1a0000d 	mov	r0, sp
        2455d4:	e3a02002 	mov	r2, #2	; 0x2
        2455d8:	e3a01002 	mov	r1, #2	; 0x2
        2455dc:	eb642c97 	bl	1b50840 <$InsetRect__FP4RectlT2>
        2455e0:	e1a0000d 	mov	r0, sp
        2455e4:	eb642458 	bl	1b4e74c <$EraseRect(Rect *)>
        2455e8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2455ec:	e1a0200d 	mov	r2, sp
        2455f0:	e1a00005 	mov	r0, r5
        2455f4:	e59f1114 	ldr	r1, [pc, #114]	; 245710 <TXLineSpacingCluster::DrawLineSpacingString(TXRuler const *)+0x160>
        2455f8:	e5953000 	ldr	r3, [r5]
        2455fc:	e1a0e00f 	mov	lr, pc
        245600:	e283f02c 	add	pc, r3, #44	; 0x2c
        245604:	e24dd028 	sub	sp, sp, #40	; 0x28
        245608:	e28d1014 	add	r1, sp, #20	; 0x14
        24560c:	e5dd0028 	ldrb	r0, [sp, #40]
        245610:	eb6693bf 	bl	1bea514 <$IntegerString(long, unsigned short *)>
        245614:	e59f00f8 	ldr	r0, [pc, #f8]	; 245714 <TXLineSpacingCluster::DrawLineSpacingString(TXRuler const *)+0x164>
        245618:	eb65f6d9 	bl	1bc3184 <$GetCString(RefVar const &)>
        24561c:	e1a02000 	mov	r2, r0
        245620:	e28d3014 	add	r3, sp, #20	; 0x14
        245624:	e1a0000d 	mov	r0, sp
        245628:	e3a0100a 	mov	r1, #10	; 0xa
        24562c:	eb6697df 	bl	1beb5b0 <$ParamString(unsigned short *, long const, unsigned short const *,...)>
        245630:	e24dd024 	sub	sp, sp, #36	; 0x24
        245634:	e3a00002 	mov	r0, #2	; 0x2
        245638:	eb65f2c3 	bl	1bc214c <$AllocateRefHandle(long)>
        24563c:	e3a05000 	mov	r5, #0	; 0x0
        245640:	e58d0004 	str	r0, [sp, #4]	; fField4
        245644:	e5a05004 	str	r5, [r0, #4]!	; fField4
        245648:	e58d5020 	str	r5, [sp, #32]
        24564c:	e59f00c4 	ldr	r0, [pc, #c4]	; 245718 <TXLineSpacingCluster::DrawLineSpacingString(TXRuler const *)+0x168>
        245650:	e5900000 	ldr	r0, [r0]
        245654:	e5900000 	ldr	r0, [r0]
        245658:	eb65f2bb 	bl	1bc214c <$AllocateRefHandle(long)>
        24565c:	e58d0000 	str	r0, [sp]
        245660:	e28d1004 	add	r1, sp, #4	; 0x4
        245664:	e1a0000d 	mov	r0, sp
        245668:	eb660f9d 	bl	1bc94e4 <$CreateTextStyleRecord(RefVar const &, StyleRecord *)>
        24566c:	e24dd004 	sub	sp, sp, #4	; 0x4
        245670:	e28d0008 	add	r0, sp, #8	; 0x8
        245674:	e40d001c 	str	r0, [sp], -#28	; fField28
        245678:	e59d0070 	ldr	r0, [sp, #112]
        24567c:	e1a00800 	mov	r0, r0, lsl #16
        245680:	e5b41004 	ldr	r1, [r4, #4]!	; fField4
        245684:	e5b4200c 	ldr	r2, [r4, #12]!	; fField12
        245688:	e0811002 	add	r1, r1, r2
        24568c:	e2411003 	sub	r1, r1, #3	; 0x3
        245690:	e1a01801 	mov	r1, r1, lsl #16
        245694:	e3a02902 	mov	r2, #32768	; 0x8000
        245698:	e58d2004 	str	r2, [sp, #4]	; fField4
        24569c:	e3a02709 	mov	r2, #2359296	; 0x240000
        2456a0:	e58d2008 	str	r2, [sp, #8]	; fField8
        2456a4:	e58d5000 	str	r5, [sp]
        2456a8:	e58d5014 	str	r5, [sp, #20]
        2456ac:	e3a02001 	mov	r2, #1	; 0x1
        2456b0:	e58d2010 	str	r2, [sp, #16]	; fField16
        2456b4:	e58d500c 	str	r5, [sp, #12]	; fField12
        2456b8:	e3a03000 	mov	r3, #0	; 0x0
        2456bc:	e58d5018 	str	r5, [sp, #24]
        2456c0:	e1a0200d 	mov	r2, sp
        2456c4:	e92d000c 	stmdb	sp!, {r2, r3}
        2456c8:	e24dd008 	sub	sp, sp, #8	; 0x8
        2456cc:	e88d0003 	stmia	sp, {r0, r1}
        2456d0:	e28d0054 	add	r0, sp, #84	; 0x54
        2456d4:	eb66a421 	bl	1bee760 <$Ustrlen>
        2456d8:	e1a01000 	mov	r1, r0
        2456dc:	e28d202c 	add	r2, sp, #44	; 0x2c
        2456e0:	e28d0054 	add	r0, sp, #84	; 0x54
        2456e4:	e3a03000 	mov	r3, #0	; 0x0
        2456e8:	eb642409 	bl	1b4e714 <$DrawTextOnce(void *, long, StyleRecord **, short *, FPoint, TextOptions *, TextBoundsInfo *)>
        2456ec:	e5bd0030 	ldr	r0, [sp, #48]!
        2456f0:	eb65f6b1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2456f4:	e59d0020 	ldr	r0, [sp, #32]
        2456f8:	e3300000 	teq	r0, #0	; 0x0
        2456fc:	159d0020 	ldrne	r0, [sp, #32]
        245700:	1b641ff5 	blne	1b4d6dc <$DisposePattern(PixelMap **)>
        245704:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        245708:	eb65f6ab 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24570c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        245710:	6c737063 	ldcvsl	0, cr7, [r3], -#396
        245714:	0067fde8 	rsbeq	pc, r7, r8, ror #27
        245718:	00680bb8 	streqh	r0, [r8], -#184
    */
}

/**
 * Symbol: TXLineSpacingCluster::Draw(TXRuler const *)
 * Address: 0024571c
 */
TXLineSpacingCluster::Draw(TXRuler const *) {
    /*
        24571c:	e1a0c00d 	mov	ip, sp
        245720:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        245724:	e24cb004 	sub	fp, ip, #4	; 0x4
        245728:	e1a04000 	mov	r4, r0
        24572c:	e1a05001 	mov	r5, r1
        245730:	eb655157 	bl	1b99c94 <TXLineSpacingCluster::$DrawLineSpacingString(TXRuler const *)>
        245734:	e24dd008 	sub	sp, sp, #8	; 0x8
        245738:	e1a0100d 	mov	r1, sp
        24573c:	e1a00004 	mov	r0, r4
        245740:	eb655152 	bl	1b99c90 <TXLineSpacingCluster::$GetLineSpacingStringBounds(Rect *)>
        245744:	e24dd010 	sub	sp, sp, #16	; 0x10
        245748:	e1a0000d 	mov	r0, sp
        24574c:	eb64281f 	bl	1b4f7d0 <$GetPenState(PenState *)>
        245750:	eb643473 	bl	1b52924 <$PenNormal(void)>
        245754:	e3a01002 	mov	r1, #2	; 0x2
        245758:	e3a00002 	mov	r0, #2	; 0x2
        24575c:	eb643471 	bl	1b52928 <$PenSize__FlT1>
        245760:	e3a00002 	mov	r0, #2	; 0x2
        245764:	eb64281d 	bl	1b4f7e0 <$GetStdPattern(unsigned char)>
        245768:	eb6438a0 	bl	1b539f0 <$SetFgPattern(PixelMap **)>
        24576c:	e28d0010 	add	r0, sp, #16	; 0x10
        245770:	e3a02005 	mov	r2, #5	; 0x5
        245774:	e3a01005 	mov	r1, #5	; 0x5
        245778:	eb642809 	bl	1b4f7a4 <$FrameRoundRect__FP4RectlT2>
        24577c:	e1a0000d 	mov	r0, sp
        245780:	eb64389c 	bl	1b539f8 <$SetPenState(PenState *)>
        245784:	e1a01005 	mov	r1, r5
        245788:	e1a00004 	mov	r0, r4
        24578c:	eb65513b 	bl	1b99c80 <TXRulerBitMapCluster::$Draw(TXRuler const *)>
        245790:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

