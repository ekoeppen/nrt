#include "include/TNBPReplyBuffer.h"

/**
 * Symbol: TNBPReplyBuffer::Reset(void)
 * Address: 0012739c
 */
TNBPReplyBuffer::Reset(void) {
    /*
        12739c:	e1a0c00d 	mov	ip, sp
        1273a0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1273a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1273a8:	e1a04000 	mov	r4, r0
        1273ac:	e280000c 	add	r0, r0, #12	; 0xc
        1273b0:	eb65461e 	bl	1a78c30 <TMemoryObject::$Destroy(void)>
        1273b4:	e3a00000 	mov	r0, #0	; 0x0
        1273b8:	e5a40004 	str	r0, [r4, #4]!	; fField4
        1273bc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TNBPReplyBuffer::ConstantPart(unsigned short *)
 * Address: 001273c0
 */
TNBPReplyBuffer::ConstantPart(unsigned short *) {
    /*
        1273c0:	e1a0c00d 	mov	ip, sp
        1273c4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1273c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1273cc:	e1a04001 	mov	r4, r1
        1273d0:	e3a05000 	mov	r5, #0	; 0x0
        1273d4:	e1a00001 	mov	r0, r1
        1273d8:	eb6b1ce0 	bl	1bee760 <$Ustrlen>
        1273dc:	e1a02000 	mov	r2, r0
        1273e0:	e3a00000 	mov	r0, #0	; 0x0
        1273e4:	e3520000 	cmp	r2, #0	; 0x0
        1273e8:	9a000017 	bls	12744c <TNBPReplyBuffer::ConstantPart(unsigned short *)+0x8c>
        1273ec:	e3a03f92 	mov	r3, #584	; 0x248
        1273f0:	e2833a02 	add	r3, r3, #8192	; 0x2000
        1273f4:	e7941080 	ldr	r1, [r4, r0, lsl #1]
        1273f8:	e1a01821 	mov	r1, r1, lsr #16
        1273fc:	e331003d 	teq	r1, #61	; 0x3d
        127400:	11310003 	teqne	r1, r3
        127404:	03a05001 	moveq	r5, #1	; 0x1
        127408:	e331003a 	teq	r1, #58	; 0x3a
        12740c:	1a000004 	bne	127424 <TNBPReplyBuffer::ConstantPart(unsigned short *)+0x64>
        127410:	e3350000 	teq	r5, #0	; 0x0
        127414:	13a05000 	movne	r5, #0	; 0x0
        127418:	1a000007 	bne	12743c <TNBPReplyBuffer::ConstantPart(unsigned short *)+0x7c>
        12741c:	e3a00002 	mov	r0, #2	; 0x2
        127420:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        127424:	e3310040 	teq	r1, #64	; 0x40
        127428:	1a000003 	bne	12743c <TNBPReplyBuffer::ConstantPart(unsigned short *)+0x7c>
        12742c:	e3350000 	teq	r5, #0	; 0x0
        127430:	03a00003 	moveq	r0, #3	; 0x3
        127434:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        127438:	ea000003 	b	12744c <TNBPReplyBuffer::ConstantPart(unsigned short *)+0x8c>
        12743c:	e2800001 	add	r0, r0, #1	; 0x1
        127440:	e20000ff 	and	r0, r0, #255	; 0xff
        127444:	e1500002 	cmp	r0, r2
        127448:	3affffe9 	bcc	1273f4 <TNBPReplyBuffer::ConstantPart(unsigned short *)+0x34>
        12744c:	e3a00001 	mov	r0, #1	; 0x1
        127450:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TNBPReplyBuffer::Ith(TNBPReplyItem *, unsigned long)
 * Address: 00127454
 */
TNBPReplyBuffer::Ith(TNBPReplyItem *, unsigned long) {
    /*
        127454:	e1a0c00d 	mov	ip, sp
        127458:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        12745c:	e24cb004 	sub	fp, ip, #4	; 0x4
        127460:	e1a04000 	mov	r4, r0
        127464:	e1a06001 	mov	r6, r1
        127468:	e1a05002 	mov	r5, r2
        12746c:	e280000c 	add	r0, r0, #12	; 0xc
        127470:	eb6b3157 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
        127474:	e5941004 	ldr	r1, [r4, #4]	; fField4
        127478:	e1510005 	cmp	r1, r5
        12747c:	3a000001 	bcc	127488 <TNBPReplyBuffer::Ith(TNBPReplyItem *, unsigned long)+0x34>
        127480:	e3310000 	teq	r1, #0	; 0x0
        127484:	1a000001 	bne	127490 <TNBPReplyBuffer::Ith(TNBPReplyItem *, unsigned long)+0x3c>
        127488:	e3a00000 	mov	r0, #0	; 0x0
        12748c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        127490:	e5941030 	ldr	r1, [r4, #48]	; fField48
        127494:	e1510005 	cmp	r1, r5
        127498:	0a000012 	beq	1274e8 <TNBPReplyBuffer::Ith(TNBPReplyItem *, unsigned long)+0x94>
        12749c:	23a01001 	movcs	r1, #1	; 0x1
        1274a0:	35940034 	ldrcc	r0, [r4, #52]	; fField52
        1274a4:	e1510005 	cmp	r1, r5
        1274a8:	2a00000b 	bcs	1274dc <TNBPReplyBuffer::Ith(TNBPReplyItem *, unsigned long)+0x88>
        1274ac:	e5f02009 	ldrb	r2, [r0, #9]!
        1274b0:	e0800002 	add	r0, r0, r2
        1274b4:	e2802001 	add	r2, r0, #1	; 0x1
        1274b8:	e5d20000 	ldrb	r0, [r2]
        1274bc:	e0820000 	add	r0, r2, r0
        1274c0:	e2802001 	add	r2, r0, #1	; 0x1
        1274c4:	e5d20000 	ldrb	r0, [r2]
        1274c8:	e0820000 	add	r0, r2, r0
        1274cc:	e2800001 	add	r0, r0, #1	; 0x1
        1274d0:	e2811001 	add	r1, r1, #1	; 0x1
        1274d4:	e1510005 	cmp	r1, r5
        1274d8:	3afffff3 	bcc	1274ac <TNBPReplyBuffer::Ith(TNBPReplyItem *, unsigned long)+0x58>
        1274dc:	e5a45030 	str	r5, [r4, #48]!	; fField48
        1274e0:	e5840004 	str	r0, [r4, #4]	; fField4
        1274e4:	ea000000 	b	1274ec <TNBPReplyBuffer::Ith(TNBPReplyItem *, unsigned long)+0x98>
        1274e8:	e5b40034 	ldr	r0, [r4, #52]!	; fField52
        1274ec:	e5860000 	str	r0, [r6]
        1274f0:	e2800009 	add	r0, r0, #9	; 0x9
        1274f4:	e5860004 	str	r0, [r6, #4]	; fField4
        1274f8:	e5d01000 	ldrb	r1, [r0]
        1274fc:	e0810000 	add	r0, r1, r0
        127500:	e2800001 	add	r0, r0, #1	; 0x1
        127504:	e5860008 	str	r0, [r6, #8]	; fField8
        127508:	e5d01000 	ldrb	r1, [r0]
        12750c:	e0810000 	add	r0, r1, r0
        127510:	e2800001 	add	r0, r0, #1	; 0x1
        127514:	e5a6000c 	str	r0, [r6, #12]!
        127518:	e3a00001 	mov	r0, #1	; 0x1
        12751c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TNBPReplyBuffer::Insert(unsigned char, unsigned char *, TTupleEquiv &)
 * Address: 00127520
 */
TNBPReplyBuffer::Insert(unsigned char, unsigned char *, TTupleEquiv &) {
    /*
        127520:	e1a0c00d 	mov	ip, sp
        127524:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        127528:	e24cb004 	sub	fp, ip, #4	; 0x4
        12752c:	e1a04000 	mov	r4, r0
        127530:	e1a06002 	mov	r6, r2
        127534:	e1a05003 	mov	r5, r3
        127538:	e20170ff 	and	r7, r1, #255	; 0xff
        12753c:	e280000c 	add	r0, r0, #12	; 0xc
        127540:	e1a08000 	mov	r8, r0
        127544:	eb6b3122 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
        127548:	e5b8101c 	ldr	r1, [r8, #28]!
        12754c:	e0801001 	add	r1, r0, r1
        127550:	e5940008 	ldr	r0, [r4, #8]	; fField8
        127554:	e0411000 	sub	r1, r1, r0
        127558:	e2872009 	add	r2, r7, #9	; 0x9
        12755c:	e1520001 	cmp	r2, r1
        127560:	83a00000 	movhi	r0, #0	; 0x0
        127564:	891ba9f0 	ldmhidb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        127568:	e5951000 	ldr	r1, [r5]
        12756c:	e1a01c21 	mov	r1, r1, lsr #24
        127570:	e5c01000 	strb	r1, [r0]
        127574:	e5950000 	ldr	r0, [r5]
        127578:	e1a00820 	mov	r0, r0, lsr #16
        12757c:	e5941008 	ldr	r1, [r4, #8]	; fField8
        127580:	e5c10001 	strb	r0, [r1, #1]
        127584:	e5950000 	ldr	r0, [r5]
        127588:	e1a00420 	mov	r0, r0, lsr #8
        12758c:	e5941008 	ldr	r1, [r4, #8]	; fField8
        127590:	e5c10002 	strb	r0, [r1, #2]
        127594:	e5950000 	ldr	r0, [r5]
        127598:	e5941008 	ldr	r1, [r4, #8]	; fField8
        12759c:	e5c10003 	strb	r0, [r1, #3]
        1275a0:	e5940008 	ldr	r0, [r4, #8]	; fField8
        1275a4:	e2800004 	add	r0, r0, #4	; 0x4
        1275a8:	e5840008 	str	r0, [r4, #8]	; fField8
        1275ac:	e5951004 	ldr	r1, [r5, #4]	; fField4
        1275b0:	e1a01821 	mov	r1, r1, lsr #16
        1275b4:	e1a01421 	mov	r1, r1, lsr #8
        1275b8:	e5c01000 	strb	r1, [r0]
        1275bc:	e5950004 	ldr	r0, [r5, #4]	; fField4
        1275c0:	e1a00820 	mov	r0, r0, lsr #16
        1275c4:	e5941008 	ldr	r1, [r4, #8]	; fField8
        1275c8:	e5c10001 	strb	r0, [r1, #1]
        1275cc:	e5940008 	ldr	r0, [r4, #8]	; fField8
        1275d0:	e2800002 	add	r0, r0, #2	; 0x2
        1275d4:	e5840008 	str	r0, [r4, #8]	; fField8
        1275d8:	e5d51006 	ldrb	r1, [r5, #6]
        1275dc:	e5c01000 	strb	r1, [r0]
        1275e0:	e5940008 	ldr	r0, [r4, #8]	; fField8
        1275e4:	e2800001 	add	r0, r0, #1	; 0x1
        1275e8:	e5840008 	str	r0, [r4, #8]	; fField8
        1275ec:	e5d51007 	ldrb	r1, [r5, #7]
        1275f0:	e5c01000 	strb	r1, [r0]
        1275f4:	e5940008 	ldr	r0, [r4, #8]	; fField8
        1275f8:	e2800001 	add	r0, r0, #1	; 0x1
        1275fc:	e5840008 	str	r0, [r4, #8]	; fField8
        127600:	e5d51008 	ldrb	r1, [r5, #8]	; fField8
        127604:	e5c01000 	strb	r1, [r0]
        127608:	e5940008 	ldr	r0, [r4, #8]	; fField8
        12760c:	e2801001 	add	r1, r0, #1	; 0x1
        127610:	e1a02007 	mov	r2, r7
        127614:	e1a00006 	mov	r0, r6
        127618:	e5841008 	str	r1, [r4, #8]	; fField8
        12761c:	eb6ade4c 	bl	1bdef54 <$BlockMove>
        127620:	e5940008 	ldr	r0, [r4, #8]	; fField8
        127624:	e0800007 	add	r0, r0, r7
        127628:	e5840008 	str	r0, [r4, #8]	; fField8
        12762c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        127630:	e2800001 	add	r0, r0, #1	; 0x1
        127634:	e5a40004 	str	r0, [r4, #4]!	; fField4
        127638:	e3a00001 	mov	r0, #1	; 0x1
        12763c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TNBPReplyBuffer::InsertLookupTuples(unsigned char, CRingBuffer *, unsigned long)
 * Address: 00127640
 */
TNBPReplyBuffer::InsertLookupTuples(unsigned char, CRingBuffer *, unsigned long) {
    /*
        127640:	e1a0c00d 	mov	ip, sp
        127644:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        127648:	e24cb004 	sub	fp, ip, #4	; 0x4
        12764c:	e1a05000 	mov	r5, r0
        127650:	e1a04002 	mov	r4, r2
        127654:	e20100ff 	and	r0, r1, #255	; 0xff
        127658:	e24dd028 	sub	sp, sp, #40	; 0x28
        12765c:	e58d3004 	str	r3, [sp, #4]	; fField4
        127660:	e8950006 	ldmia	r5, {r1, r2}
        127664:	e0411002 	sub	r1, r1, r2
        127668:	e1510000 	cmp	r1, r0
        12766c:	91a00001 	movls	r0, r1
        127670:	e3a0a000 	mov	sl, #0	; 0x0
        127674:	e58d0000 	str	r0, [sp]
        127678:	e3500000 	cmp	r0, #0	; 0x0
        12767c:	9a000083 	bls	127890 <TNBPReplyBuffer::InsertLookupTuples(unsigned char, CRingBuffer *, unsigned long)+0x250>
        127680:	e28d1008 	add	r1, sp, #8	; 0x8
        127684:	e58d1024 	str	r1, [sp, #36]
        127688:	e24d7067 	sub	r7, sp, #103	; 0x67
        12768c:	e58d7020 	str	r7, [sp, #32]
        127690:	e3a00002 	mov	r0, #2	; 0x2
        127694:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        127698:	e59d1028 	ldr	r1, [sp, #40]
        12769c:	e1a0200d 	mov	r2, sp
        1276a0:	e1a00004 	mov	r0, r4
        1276a4:	e5943000 	ldr	r3, [r4]
        1276a8:	e1a0e00f 	mov	lr, pc
        1276ac:	e283f018 	add	pc, r3, #24	; 0x18
        1276b0:	e1a00004 	mov	r0, r4
        1276b4:	e5941000 	ldr	r1, [r4]
        1276b8:	e1a0e00f 	mov	lr, pc
        1276bc:	e281f010 	add	pc, r1, #16	; 0x10
        1276c0:	e5cd000e 	strb	r0, [sp, #14]
        1276c4:	e1a00004 	mov	r0, r4
        1276c8:	e5941000 	ldr	r1, [r4]
        1276cc:	e1a0e00f 	mov	lr, pc
        1276d0:	e281f010 	add	pc, r1, #16	; 0x10
        1276d4:	e5cd000f 	strb	r0, [sp, #15]
        1276d8:	e1a00004 	mov	r0, r4
        1276dc:	e5941000 	ldr	r1, [r4]
        1276e0:	e1a0e00f 	mov	lr, pc
        1276e4:	e281f010 	add	pc, r1, #16	; 0x10
        1276e8:	e5cd0010 	strb	r0, [sp, #16]
        1276ec:	e3a09000 	mov	r9, #0	; 0x0
        1276f0:	e3a08001 	mov	r8, #1	; 0x1
        1276f4:	e5950004 	ldr	r0, [r5, #4]	; fField4
        1276f8:	e3500001 	cmp	r0, #1	; 0x1
        1276fc:	3a000022 	bcc	12778c <TNBPReplyBuffer::InsertLookupTuples(unsigned char, CRingBuffer *, unsigned long)+0x14c>
        127700:	e1a02008 	mov	r2, r8
        127704:	e28d1014 	add	r1, sp, #20	; 0x14
        127708:	e1a00005 	mov	r0, r5
        12770c:	eb6555bf 	bl	1a7ce10 <TNBPReplyBuffer::$Ith(TNBPReplyItem *, unsigned long)>
        127710:	e3300000 	teq	r0, #0	; 0x0
        127714:	0a000018 	beq	12777c <TNBPReplyBuffer::InsertLookupTuples(unsigned char, CRingBuffer *, unsigned long)+0x13c>
        127718:	e28d0014 	add	r0, sp, #20	; 0x14
        12771c:	eb654975 	bl	1a79cf8 <TNBPReplyItem::$GetEnumerator(void)>
        127720:	e1a03000 	mov	r3, r0
        127724:	e92d0008 	stmdb	sp!, {r3}
        127728:	e28d0018 	add	r0, sp, #24	; 0x18
        12772c:	eb654d81 	bl	1a7ad38 <TNBPReplyItem::$GetSocket(void)>
        127730:	e1a03000 	mov	r3, r0
        127734:	e92d0008 	stmdb	sp!, {r3}
        127738:	e28d001c 	add	r0, sp, #28	; 0x1c
        12773c:	eb654d76 	bl	1a7ad1c <TNBPReplyItem::$GetNode(void)>
        127740:	e1a07000 	mov	r7, r0
        127744:	e28d001c 	add	r0, sp, #28	; 0x1c
        127748:	eb654d72 	bl	1a7ad18 <TNBPReplyItem::$GetNetwork(void)>
        12774c:	e1a06000 	mov	r6, r0
        127750:	e28d001c 	add	r0, sp, #28	; 0x1c
        127754:	eb654d69 	bl	1a7ad00 <TNBPReplyItem::$GetLinkId(void)>
        127758:	e1a01000 	mov	r1, r0
        12775c:	e28d0010 	add	r0, sp, #16	; 0x10
        127760:	e1a02006 	mov	r2, r6
        127764:	e1a03007 	mov	r3, r7
        127768:	eb65494c 	bl	1a79ca0 <TTupleEquiv::$Equal(unsigned long, unsigned short, unsigned char, unsigned char, unsigned char)>
        12776c:	e28dd008 	add	sp, sp, #8	; 0x8
        127770:	e3300000 	teq	r0, #0	; 0x0
        127774:	13a09001 	movne	r9, #1	; 0x1
        127778:	1a000003 	bne	12778c <TNBPReplyBuffer::InsertLookupTuples(unsigned char, CRingBuffer *, unsigned long)+0x14c>
        12777c:	e2888001 	add	r8, r8, #1	; 0x1
        127780:	e5950004 	ldr	r0, [r5, #4]	; fField4
        127784:	e1500008 	cmp	r0, r8
        127788:	2affffdc 	bcs	127700 <TNBPReplyBuffer::InsertLookupTuples(unsigned char, CRingBuffer *, unsigned long)+0xc0>
        12778c:	e24dd068 	sub	sp, sp, #104	; 0x68
        127790:	e1a00004 	mov	r0, r4
        127794:	e5941000 	ldr	r1, [r4]
        127798:	e1a0e00f 	mov	lr, pc
        12779c:	e281f010 	add	pc, r1, #16	; 0x10
        1277a0:	e20060ff 	and	r6, r0, #255	; 0xff
        1277a4:	e2860001 	add	r0, r6, #1	; 0x1
        1277a8:	e20080ff 	and	r8, r0, #255	; 0xff
        1277ac:	e5cd6004 	strb	r6, [sp, #4]	; fField4
        1277b0:	e59d708c 	ldr	r7, [sp, #140]
        1277b4:	e58d6000 	str	r6, [sp]
        1277b8:	e1a0200d 	mov	r2, sp
        1277bc:	e1a01007 	mov	r1, r7
        1277c0:	e1a00004 	mov	r0, r4
        1277c4:	e5943000 	ldr	r3, [r4]
        1277c8:	e1a0e00f 	mov	lr, pc
        1277cc:	e283f018 	add	pc, r3, #24	; 0x18
        1277d0:	e0877006 	add	r7, r7, r6
        1277d4:	e1a00004 	mov	r0, r4
        1277d8:	e5941000 	ldr	r1, [r4]
        1277dc:	e1a0e00f 	mov	lr, pc
        1277e0:	e281f010 	add	pc, r1, #16	; 0x10
        1277e4:	e20060ff 	and	r6, r0, #255	; 0xff
        1277e8:	e0880006 	add	r0, r8, r6
        1277ec:	e2800001 	add	r0, r0, #1	; 0x1
        1277f0:	e20080ff 	and	r8, r0, #255	; 0xff
        1277f4:	e4c76001 	strb	r6, [r7], #1
        1277f8:	e58d6000 	str	r6, [sp]
        1277fc:	e1a0200d 	mov	r2, sp
        127800:	e1a01007 	mov	r1, r7
        127804:	e1a00004 	mov	r0, r4
        127808:	e5943000 	ldr	r3, [r4]
        12780c:	e1a0e00f 	mov	lr, pc
        127810:	e283f018 	add	pc, r3, #24	; 0x18
        127814:	e0876006 	add	r6, r7, r6
        127818:	e1a00004 	mov	r0, r4
        12781c:	e5941000 	ldr	r1, [r4]
        127820:	e1a0e00f 	mov	lr, pc
        127824:	e281f010 	add	pc, r1, #16	; 0x10
        127828:	e20000ff 	and	r0, r0, #255	; 0xff
        12782c:	e0881000 	add	r1, r8, r0
        127830:	e2811001 	add	r1, r1, #1	; 0x1
        127834:	e20170ff 	and	r7, r1, #255	; 0xff
        127838:	e5c60000 	strb	r0, [r6]
        12783c:	e2861001 	add	r1, r6, #1	; 0x1
        127840:	e58d0000 	str	r0, [sp]
        127844:	e1a0200d 	mov	r2, sp
        127848:	e1a00004 	mov	r0, r4
        12784c:	e5943000 	ldr	r3, [r4]
        127850:	e1a0e00f 	mov	lr, pc
        127854:	e283f018 	add	pc, r3, #24	; 0x18
        127858:	e3390000 	teq	r9, #0	; 0x0
        12785c:	1a000007 	bne	127880 <TNBPReplyBuffer::InsertLookupTuples(unsigned char, CRingBuffer *, unsigned long)+0x240>
        127860:	e28d3070 	add	r3, sp, #112	; 0x70
        127864:	e28d2004 	add	r2, sp, #4	; 0x4
        127868:	e1a01007 	mov	r1, r7
        12786c:	e1a00005 	mov	r0, r5
        127870:	eb655564 	bl	1a7ce08 <TNBPReplyBuffer::$Insert(unsigned char, unsigned char *, TTupleEquiv &)>
        127874:	e3300000 	teq	r0, #0	; 0x0
        127878:	028dd06c 	addeq	sp, sp, #108	; 0x6c
        12787c:	0a000003 	beq	127890 <TNBPReplyBuffer::InsertLookupTuples(unsigned char, CRingBuffer *, unsigned long)+0x250>
        127880:	e28aa001 	add	sl, sl, #1	; 0x1
        127884:	e5bd006c 	ldr	r0, [sp, #108]!
        127888:	e15a0000 	cmp	sl, r0
        12788c:	3affff7f 	bcc	127690 <TNBPReplyBuffer::InsertLookupTuples(unsigned char, CRingBuffer *, unsigned long)+0x50>
        127890:	e1a05004 	mov	r5, r4
        127894:	e1a00004 	mov	r0, r4
        127898:	e5941000 	ldr	r1, [r4]
        12789c:	e1a0e00f 	mov	lr, pc
        1278a0:	e281f040 	add	pc, r1, #64	; 0x40
        1278a4:	e1a01000 	mov	r1, r0
        1278a8:	e1a00005 	mov	r0, r5
        1278ac:	e5952000 	ldr	r2, [r5]
        1278b0:	e1a0e00f 	mov	lr, pc
        1278b4:	e282f048 	add	pc, r2, #72	; 0x48
        1278b8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TNBPReplyBuffer::__ct(void)
 * Address: 00127980
 */
TNBPReplyBuffer::TNBPReplyBuffer(void) {
    /*
        127980:	e1a0c00d 	mov	ip, sp
        127984:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        127988:	e24cb004 	sub	fp, ip, #4	; 0x4
        12798c:	e1b04000 	movs	r4, r0
        127990:	1a000003 	bne	1279a4 <TNBPReplyBuffer::__ct(void)+0x24>
        127994:	e3a00060 	mov	r0, #96	; 0x60
        127998:	eb6a9b66 	bl	1bce738 <$__nw(unsigned int)>
        12799c:	e1b04000 	movs	r4, r0
        1279a0:	0a000003 	beq	1279b4 <TNBPReplyBuffer::__ct(void)+0x34>
        1279a4:	e284000c 	add	r0, r4, #12	; 0xc
        1279a8:	eb6b3001 	bl	1bf39b4 <TMemoryObject::$__ct(void)>
        1279ac:	e284003c 	add	r0, r4, #60	; 0x3c
        1279b0:	eb652bf0 	bl	1a72978 <TString32::$__ct(void)>
        1279b4:	e1a00004 	mov	r0, r4
        1279b8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TNBPReplyBuffer::Init(unsigned short *, unsigned long, unsigned char)
 * Address: 001279bc
 */
TNBPReplyBuffer::Init(unsigned short *, unsigned long, unsigned char) {
    /*
        1279bc:	e1a0c00d 	mov	ip, sp
        1279c0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1279c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1279c8:	e1a04000 	mov	r4, r0
        1279cc:	e1a06001 	mov	r6, r1
        1279d0:	e1a05002 	mov	r5, r2
        1279d4:	e0821102 	add	r1, r2, r2, lsl #2
        1279d8:	e0811182 	add	r1, r1, r2, lsl #3
        1279dc:	e0811181 	add	r1, r1, r1, lsl #3
        1279e0:	e1a08001 	mov	r8, r1
        1279e4:	e280000c 	add	r0, r0, #12	; 0xc
        1279e8:	e1a07000 	mov	r7, r0
        1279ec:	e3a03001 	mov	r3, #1	; 0x1
        1279f0:	e3a02000 	mov	r2, #0	; 0x0
        1279f4:	eb6b2fef 	bl	1bf39b8 <TMemoryObject::$Init(unsigned long, unsigned char, unsigned long)>
        1279f8:	e1b09000 	movs	r9, r0
        1279fc:	1a000018 	bne	127a64 <TNBPReplyBuffer::Init(unsigned short *, unsigned long, unsigned char)+0xa8>
        127a00:	e1a00007 	mov	r0, r7
        127a04:	eb6b2ff2 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
        127a08:	e1a01000 	mov	r1, r0
        127a0c:	e3a00000 	mov	r0, #0	; 0x0
        127a10:	e3a02000 	mov	r2, #0	; 0x0
        127a14:	e3580000 	cmp	r8, #0	; 0x0
        127a18:	9a000003 	bls	127a2c <TNBPReplyBuffer::Init(unsigned short *, unsigned long, unsigned char)+0x70>
        127a1c:	e4c12001 	strb	r2, [r1], #1
        127a20:	e2800001 	add	r0, r0, #1	; 0x1
        127a24:	e1580000 	cmp	r8, r0
        127a28:	8afffffb 	bhi	127a1c <TNBPReplyBuffer::Init(unsigned short *, unsigned long, unsigned char)+0x60>
        127a2c:	e1a00007 	mov	r0, r7
        127a30:	e5842004 	str	r2, [r4, #4]	; fField4
        127a34:	e5845000 	str	r5, [r4]
        127a38:	eb6b2fe5 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
        127a3c:	e5840008 	str	r0, [r4, #8]	; fField8
        127a40:	e3a00001 	mov	r0, #1	; 0x1
        127a44:	e5840030 	str	r0, [r4, #48]	; fField48
        127a48:	e1a00007 	mov	r0, r7
        127a4c:	eb6b2fe0 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
        127a50:	e1a01006 	mov	r1, r6
        127a54:	e5840034 	str	r0, [r4, #52]	; fField52
        127a58:	e1a00004 	mov	r0, r4
        127a5c:	eb6569b3 	bl	1a82130 <TNBPReplyBuffer::$ConstantPart(unsigned short *)>
        127a60:	e5a40038 	str	r0, [r4, #56]!	; fField56
        127a64:	e1a00009 	mov	r0, r9
        127a68:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

