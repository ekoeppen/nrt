#include "include/TXAdvancedRuler.h"

/**
 * Symbol: TXAdvancedRuler::__ct(void)
 * Address: 0022f2b8
 */
TXAdvancedRuler::TXAdvancedRuler(void) {
    /*
        22f2b8:	e1a0c00d 	mov	ip, sp
        22f2bc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        22f2c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        22f2c4:	e1b04000 	movs	r4, r0
        22f2c8:	1a000003 	bne	22f2dc <TXAdvancedRuler::__ct(void)+0x24>
        22f2cc:	e3a00020 	mov	r0, #32	; 0x20
        22f2d0:	eb667d18 	bl	1bce738 <$__nw(unsigned int)>
        22f2d4:	e1b04000 	movs	r4, r0
        22f2d8:	0a00000a 	beq	22f308 <TXAdvancedRuler::__ct(void)+0x50>
        22f2dc:	e1a00004 	mov	r0, r4
        22f2e0:	eb659e13 	bl	1b96b34 <TXBasicRuler::$__ct(void)>
        22f2e4:	e59f0024 	ldr	r0, [pc, #24]	; 22f310 <TXAdvancedRuler::__ct(void)+0x58>	; fField24
        22f2e8:	e5840000 	str	r0, [r4]
        22f2ec:	e3a00000 	mov	r0, #0	; 0x0
        22f2f0:	e584000c 	str	r0, [r4, #12]	; fField12
        22f2f4:	e5840010 	str	r0, [r4, #16]	; fField16
        22f2f8:	e5840014 	str	r0, [r4, #20]	; fField20
        22f2fc:	e5840018 	str	r0, [r4, #24]	; fField24
        22f300:	e3a00001 	mov	r0, #1	; 0x1
        22f304:	e5c4001c 	strb	r0, [r4, #28]	; fField28
        22f308:	e1a00004 	mov	r0, r4
        22f30c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        22f310:	0001e27c 	andeq	lr, r1, ip, ror r2
    */
}

/**
 * Symbol: TXAdvancedRuler::FreeData(void)
 * Address: 0022f314
 */
TXAdvancedRuler::FreeData(void) {
    /*
        22f314:	e1a0c00d 	mov	ip, sp
        22f318:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        22f31c:	e24cb004 	sub	fp, ip, #4	; 0x4
        22f320:	e1a04000 	mov	r4, r0
        22f324:	e590000c 	ldr	r0, [r0, #12]	; fField12
        22f328:	e3300000 	teq	r0, #0	; 0x0
        22f32c:	0a000004 	beq	22f344 <TXAdvancedRuler::FreeData(void)+0x30>
        22f330:	e3a01001 	mov	r1, #1	; 0x1
        22f334:	e1a0e00f 	mov	lr, pc
        22f338:	e590f000 	ldr	pc, [r0]
        22f33c:	e3a00000 	mov	r0, #0	; 0x0
        22f340:	e584000c 	str	r0, [r4, #12]	; fField12
        22f344:	e1a00004 	mov	r0, r4
        22f348:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        22f34c:	ea655bfc 	b	1b86344 <TXAttrObject::$FreeData(void)>
    */
}

/**
 * Symbol: TXAdvancedRuler::GetAttributesValues(TXAttrValues *)
 * Address: 0022f350
 */
TXAdvancedRuler::GetAttributesValues(TXAttrValues *) {
    /*
        22f350:	e1a0c00d 	mov	ip, sp
        22f354:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        22f358:	e24cb004 	sub	fp, ip, #4	; 0x4
        22f35c:	e1a05000 	mov	r5, r0
        22f360:	e1a04001 	mov	r4, r1
        22f364:	e3a03000 	mov	r3, #0	; 0x0
        22f368:	e92d0008 	stmdb	sp!, {r3}
        22f36c:	e280200c 	add	r2, r0, #12	; 0xc
        22f370:	e1a00001 	mov	r0, r1
        22f374:	e3a03004 	mov	r3, #4	; 0x4
        22f378:	e59f1090 	ldr	r1, [pc, #90]	; 22f410 <TXAdvancedRuler::GetAttributesValues(TXAttrValues *)+0xc0>
        22f37c:	eb656000 	bl	1b87384 <TXAttrValues::$Add(unsigned long, void const *, int, unsigned char)>
        22f380:	e28dd004 	add	sp, sp, #4	; 0x4
        22f384:	e3a03000 	mov	r3, #0	; 0x0
        22f388:	e92d0008 	stmdb	sp!, {r3}
        22f38c:	e2852010 	add	r2, r5, #16	; 0x10
        22f390:	e1a00004 	mov	r0, r4
        22f394:	e3a03004 	mov	r3, #4	; 0x4
        22f398:	e59f1074 	ldr	r1, [pc, #74]	; 22f414 <TXAdvancedRuler::GetAttributesValues(TXAttrValues *)+0xc4>
        22f39c:	eb655ff8 	bl	1b87384 <TXAttrValues::$Add(unsigned long, void const *, int, unsigned char)>
        22f3a0:	e28dd004 	add	sp, sp, #4	; 0x4
        22f3a4:	e3a03000 	mov	r3, #0	; 0x0
        22f3a8:	e92d0008 	stmdb	sp!, {r3}
        22f3ac:	e2852014 	add	r2, r5, #20	; 0x14
        22f3b0:	e1a00004 	mov	r0, r4
        22f3b4:	e3a03004 	mov	r3, #4	; 0x4
        22f3b8:	e59f1058 	ldr	r1, [pc, #58]	; 22f418 <TXAdvancedRuler::GetAttributesValues(TXAttrValues *)+0xc8>
        22f3bc:	eb655ff0 	bl	1b87384 <TXAttrValues::$Add(unsigned long, void const *, int, unsigned char)>
        22f3c0:	e28dd004 	add	sp, sp, #4	; 0x4
        22f3c4:	e3a03000 	mov	r3, #0	; 0x0
        22f3c8:	e92d0008 	stmdb	sp!, {r3}
        22f3cc:	e2852018 	add	r2, r5, #24	; 0x18
        22f3d0:	e1a00004 	mov	r0, r4
        22f3d4:	e3a03004 	mov	r3, #4	; 0x4
        22f3d8:	e59f103c 	ldr	r1, [pc, #3c]	; 22f41c <TXAdvancedRuler::GetAttributesValues(TXAttrValues *)+0xcc>
        22f3dc:	eb655fe8 	bl	1b87384 <TXAttrValues::$Add(unsigned long, void const *, int, unsigned char)>
        22f3e0:	e28dd004 	add	sp, sp, #4	; 0x4
        22f3e4:	e3a03000 	mov	r3, #0	; 0x0
        22f3e8:	e92d0008 	stmdb	sp!, {r3}
        22f3ec:	e285201c 	add	r2, r5, #28	; 0x1c
        22f3f0:	e1a00004 	mov	r0, r4
        22f3f4:	e3a03001 	mov	r3, #1	; 0x1
        22f3f8:	e59f1020 	ldr	r1, [pc, #20]	; 22f420 <TXAdvancedRuler::GetAttributesValues(TXAttrValues *)+0xd0>	; fField20
        22f3fc:	eb655fe0 	bl	1b87384 <TXAttrValues::$Add(unsigned long, void const *, int, unsigned char)>
        22f400:	e1a01004 	mov	r1, r4
        22f404:	e1a00005 	mov	r0, r5
        22f408:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        22f40c:	ea659dd1 	b	1b96b58 <TXBasicRuler::$GetAttributesValues(TXAttrValues *)>
        22f410:	74616273 	strvcbt	r6, [r1], -#627
        22f414:	6e646e74 	mcrvs	14, 3, r6, cr4, cr4, {3}
        22f418:	6c4d7267 	mcrrvs	2, 6, r7, sp, cr7
        22f41c:	724d7267 	subvc	r7, sp, #1879048198	; 0x70000006
        22f420:	6c737063 	ldcvsl	0, cr7, [r3], -#396
    */
}

/**
 * Symbol: TXAdvancedRuler::SetTabs(TXTabsArray const *)
 * Address: 0022f424
 */
TXAdvancedRuler::SetTabs(TXTabsArray const *) {
    /*
        22f424:	e1a0c00d 	mov	ip, sp
        22f428:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        22f42c:	e24cb004 	sub	fp, ip, #4	; 0x4
        22f430:	e1a04000 	mov	r4, r0
        22f434:	e1a05001 	mov	r5, r1
        22f438:	e590000c 	ldr	r0, [r0, #12]	; fField12
        22f43c:	e3300000 	teq	r0, #0	; 0x0
        22f440:	0a000002 	beq	22f450 <TXAdvancedRuler::SetTabs(TXTabsArray const *)+0x2c>
        22f444:	e3a01001 	mov	r1, #1	; 0x1
        22f448:	e1a0e00f 	mov	lr, pc
        22f44c:	e590f000 	ldr	pc, [r0]
        22f450:	e3350000 	teq	r5, #0	; 0x0
        22f454:	15956004 	ldrne	r6, [r5, #4]
        22f458:	13360000 	teqne	r6, #0	; 0x0
        22f45c:	e3a00000 	mov	r0, #0	; 0x0
        22f460:	05a4000c 	streq	r0, [r4, #12]!	; fField12
        22f464:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        22f468:	eb65578e 	bl	1b852a8 <TXTabsArray::$__ct(void)>
        22f46c:	e584000c 	str	r0, [r4, #12]	; fField12
        22f470:	e3300000 	teq	r0, #0	; 0x0
        22f474:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        22f478:	e2566001 	subs	r6, r6, #1	; 0x1
        22f47c:	491ba870 	ldmmidb	fp, {r4, r5, r6, fp, sp, pc}
        22f480:	e24dd008 	sub	sp, sp, #8	; 0x8
        22f484:	e1a02006 	mov	r2, r6
        22f488:	e1a01005 	mov	r1, r5
        22f48c:	e1a0000d 	mov	r0, sp
        22f490:	eb65578b 	bl	1b852c4 <TXTabsArray::$GetIndTab( const(long))>
        22f494:	e594000c 	ldr	r0, [r4, #12]	; fField12
        22f498:	e8bd0006 	ldmia	sp!, {r1, r2}
        22f49c:	eb655783 	bl	1b852b0 <TXTabsArray::$InsertTab(TXTab)>
        22f4a0:	e2566001 	subs	r6, r6, #1	; 0x1
        22f4a4:	5afffff5 	bpl	22f480 <TXAdvancedRuler::SetTabs(TXTabsArray const *)+0x5c>
        22f4a8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXAdvancedRuler::Assign(TXAttrObject const *)
 * Address: 0022f4ac
 */
TXAdvancedRuler::Assign(TXAttrObject const *) {
    /*
        22f4ac:	e1a0c00d 	mov	ip, sp
        22f4b0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        22f4b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        22f4b8:	e1a04000 	mov	r4, r0
        22f4bc:	e1a05001 	mov	r5, r1
        22f4c0:	eb659da5 	bl	1b96b5c <TXBasicRuler::$Assign(TXAttrObject const *)>
        22f4c4:	e1350004 	teq	r5, r4
        22f4c8:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        22f4cc:	e1a00004 	mov	r0, r4
        22f4d0:	e5941000 	ldr	r1, [r4]
        22f4d4:	e1a0e00f 	mov	lr, pc
        22f4d8:	e281f008 	add	pc, r1, #8	; 0x8
        22f4dc:	e5950010 	ldr	r0, [r5, #16]	; fField16
        22f4e0:	e5840010 	str	r0, [r4, #16]	; fField16
        22f4e4:	e5950014 	ldr	r0, [r5, #20]	; fField20
        22f4e8:	e5840014 	str	r0, [r4, #20]	; fField20
        22f4ec:	e5950018 	ldr	r0, [r5, #24]	; fField24
        22f4f0:	e5840018 	str	r0, [r4, #24]	; fField24
        22f4f4:	e5d5001c 	ldrb	r0, [r5, #28]	; fField28
        22f4f8:	e5c4001c 	strb	r0, [r4, #28]	; fField28
        22f4fc:	e1a00004 	mov	r0, r4
        22f500:	e5b5100c 	ldr	r1, [r5, #12]!	; fField12
        22f504:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        22f508:	ea655358 	b	1b84270 <TXAdvancedRuler::$SetTabs(TXTabsArray const *)>
    */
}

/**
 * Symbol: TXAdvancedRuler::SetAttributeValue(unsigned long, void const *)
 * Address: 0022f50c
 */
TXAdvancedRuler::SetAttributeValue(unsigned long, void const *) {
    /*
        22f50c:	e59fc058 	ldr	ip, [pc, #58]	; 22f56c <TXAdvancedRuler::SetAttributeValue(unsigned long, void const *)+0x60>
        22f510:	e151000c 	cmp	r1, ip
        22f514:	05921000 	ldreq	r1, [r2]
        22f518:	05a01010 	streq	r1, [r0, #16]!	; fField16
        22f51c:	01a0f00e 	moveq	pc, lr
        22f520:	ca000014 	bgt	22f578 <TXAdvancedRuler::SetAttributeValue(unsigned long, void const *)+0x6c>
        22f524:	e59fc044 	ldr	ip, [pc, #44]	; 22f570 <TXAdvancedRuler::SetAttributeValue(unsigned long, void const *)+0x64>
        22f528:	e131000c 	teq	r1, ip
        22f52c:	05921000 	ldreq	r1, [r2]
        22f530:	05a01014 	streq	r1, [r0, #20]!	; fField20
        22f534:	01a0f00e 	moveq	pc, lr
        22f538:	e59fc034 	ldr	ip, [pc, #34]	; 22f574 <TXAdvancedRuler::SetAttributeValue(unsigned long, void const *)+0x68>
        22f53c:	e131000c 	teq	r1, ip
        22f540:	1a000015 	bne	22f59c <TXAdvancedRuler::SetAttributeValue(unsigned long, void const *)+0x90>
        22f544:	e5d21000 	ldrb	r1, [r2]
        22f548:	e5c0101c 	strb	r1, [r0, #28]	; fField28
        22f54c:	e3510001 	cmp	r1, #1	; 0x1
        22f550:	b3a01001 	movlt	r1, #1	; 0x1
        22f554:	ba000002 	blt	22f564 <TXAdvancedRuler::SetAttributeValue(unsigned long, void const *)+0x58>
        22f558:	e3510014 	cmp	r1, #20	; 0x14
        22f55c:	d1a0f00e 	movle	pc, lr
        22f560:	e3a01014 	mov	r1, #20	; 0x14
        22f564:	e5c0101c 	strb	r1, [r0, #28]	; fField28
        22f568:	e1a0f00e 	mov	pc, lr
        22f56c:	6e646e74 	mcrvs	14, 3, r6, cr4, cr4, {3}
        22f570:	6c4d7267 	mcrrvs	2, 6, r7, sp, cr7
        22f574:	6c737063 	ldcvsl	0, cr7, [r3], -#396
        22f578:	e59fc020 	ldr	ip, [pc, #20]	; 22f5a0 <TXAdvancedRuler::SetAttributeValue(unsigned long, void const *)+0x94>	; fField20
        22f57c:	e131000c 	teq	r1, ip
        22f580:	05921000 	ldreq	r1, [r2]
        22f584:	05a01018 	streq	r1, [r0, #24]!	; fField24
        22f588:	01a0f00e 	moveq	pc, lr
        22f58c:	e59fc010 	ldr	ip, [pc, #10]	; 22f5a4 <TXAdvancedRuler::SetAttributeValue(unsigned long, void const *)+0x98>
        22f590:	e131000c 	teq	r1, ip
        22f594:	05921000 	ldreq	r1, [r2]
        22f598:	0a655334 	beq	1b84270 <TXAdvancedRuler::$SetTabs(TXTabsArray const *)>
        22f59c:	ea659d6f 	b	1b96b60 <TXBasicRuler::$SetAttributeValue(unsigned long, void const *)>
        22f5a0:	724d7267 	subvc	r7, sp, #1879048198	; 0x70000006
        22f5a4:	74616273 	strvcbt	r6, [r1], -#627
    */
}

/**
 * Symbol: TXAdvancedRuler::UpdateAttribute(unsigned long, void const *, long)
 * Address: 0022f5a8
 */
TXAdvancedRuler::UpdateAttribute(unsigned long, void const *, long) {
    /*
        22f5a8:	e1a0c00d 	mov	ip, sp
        22f5ac:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        22f5b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        22f5b4:	e1a04000 	mov	r4, r0
        22f5b8:	e1a06002 	mov	r6, r2
        22f5bc:	e1a05003 	mov	r5, r3
        22f5c0:	e59fc074 	ldr	ip, [pc, #74]	; 22f63c <TXAdvancedRuler::UpdateAttribute(unsigned long, void const *, long)+0x94>
        22f5c4:	e131000c 	teq	r1, ip
        22f5c8:	1a00003f 	bne	22f6cc <TXAdvancedRuler::UpdateAttribute(unsigned long, void const *, long)+0x124>
        22f5cc:	e3350000 	teq	r5, #0	; 0x0
        22f5d0:	0a00003d 	beq	22f6cc <TXAdvancedRuler::UpdateAttribute(unsigned long, void const *, long)+0x124>
        22f5d4:	e1a07006 	mov	r7, r6
        22f5d8:	e5960010 	ldr	r0, [r6, #16]	; fField16
        22f5dc:	e5b0100c 	ldr	r1, [r0, #12]!	; fField12
        22f5e0:	e1a00004 	mov	r0, r4
        22f5e4:	eb655321 	bl	1b84270 <TXAdvancedRuler::$SetTabs(TXTabsArray const *)>
        22f5e8:	e3350001 	teq	r5, #1	; 0x1
        22f5ec:	0a000013 	beq	22f640 <TXAdvancedRuler::UpdateAttribute(unsigned long, void const *, long)+0x98>
        22f5f0:	e2866008 	add	r6, r6, #8	; 0x8
        22f5f4:	e3350002 	teq	r5, #2	; 0x2
        22f5f8:	0a000027 	beq	22f69c <TXAdvancedRuler::UpdateAttribute(unsigned long, void const *, long)+0xf4>
        22f5fc:	e3350004 	teq	r5, #4	; 0x4
        22f600:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        22f604:	e24dd004 	sub	sp, sp, #4	; 0x4
        22f608:	e1a0200d 	mov	r2, sp
        22f60c:	e594000c 	ldr	r0, [r4, #12]	; fField12
        22f610:	e5971000 	ldr	r1, [r7]
        22f614:	eb655727 	bl	1b852b8 <TXTabsArray::$SearchTab( const(int, long *))>
        22f618:	e3300000 	teq	r0, #0	; 0x0
        22f61c:	0a000005 	beq	22f638 <TXAdvancedRuler::UpdateAttribute(unsigned long, void const *, long)+0x90>
        22f620:	e594000c 	ldr	r0, [r4, #12]	; fField12
        22f624:	e59d1000 	ldr	r1, [sp]
        22f628:	eb655721 	bl	1b852b4 <TXTabsArray::$RemoveTab(long)>
        22f62c:	e5b4000c 	ldr	r0, [r4, #12]!	; fField12
        22f630:	e8960006 	ldmia	r6, {r1, r2}
        22f634:	eb65571d 	bl	1b852b0 <TXTabsArray::$InsertTab(TXTab)>
        22f638:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        22f63c:	74616273 	strvcbt	r6, [r1], -#627
        22f640:	e24dd004 	sub	sp, sp, #4	; 0x4
        22f644:	e1a0200d 	mov	r2, sp
        22f648:	e594000c 	ldr	r0, [r4, #12]	; fField12
        22f64c:	e5971000 	ldr	r1, [r7]
        22f650:	eb655718 	bl	1b852b8 <TXTabsArray::$SearchTab( const(int, long *))>
        22f654:	e3300000 	teq	r0, #0	; 0x0
        22f658:	0afffff6 	beq	22f638 <TXAdvancedRuler::UpdateAttribute(unsigned long, void const *, long)+0x90>
        22f65c:	e594000c 	ldr	r0, [r4, #12]	; fField12
        22f660:	e59d1000 	ldr	r1, [sp]
        22f664:	eb655712 	bl	1b852b4 <TXTabsArray::$RemoveTab(long)>
        22f668:	e594000c 	ldr	r0, [r4, #12]	; fField12
        22f66c:	e1a01000 	mov	r1, r0
        22f670:	e5900004 	ldr	r0, [r0, #4]
        22f674:	e3300000 	teq	r0, #0	; 0x0
        22f678:	1affffee 	bne	22f638 <TXAdvancedRuler::UpdateAttribute(unsigned long, void const *, long)+0x90>
        22f67c:	e1b00001 	movs	r0, r1
        22f680:	0a000002 	beq	22f690 <TXAdvancedRuler::UpdateAttribute(unsigned long, void const *, long)+0xe8>
        22f684:	e3a01001 	mov	r1, #1	; 0x1
        22f688:	e1a0e00f 	mov	lr, pc
        22f68c:	e590f000 	ldr	pc, [r0]
        22f690:	e3a00000 	mov	r0, #0	; 0x0
        22f694:	e5a4000c 	str	r0, [r4, #12]!	; fField12
        22f698:	eaffffe6 	b	22f638 <TXAdvancedRuler::UpdateAttribute(unsigned long, void const *, long)+0x90>
        22f69c:	e594000c 	ldr	r0, [r4, #12]	; fField12
        22f6a0:	e3300000 	teq	r0, #0	; 0x0
        22f6a4:	1a000004 	bne	22f6bc <TXAdvancedRuler::UpdateAttribute(unsigned long, void const *, long)+0x114>
        22f6a8:	e3a00000 	mov	r0, #0	; 0x0
        22f6ac:	eb6556fd 	bl	1b852a8 <TXTabsArray::$__ct(void)>
        22f6b0:	e584000c 	str	r0, [r4, #12]	; fField12
        22f6b4:	e3300000 	teq	r0, #0	; 0x0
        22f6b8:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        22f6bc:	e5b4000c 	ldr	r0, [r4, #12]!	; fField12
        22f6c0:	e8960006 	ldmia	r6, {r1, r2}
        22f6c4:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        22f6c8:	ea6556f8 	b	1b852b0 <TXTabsArray::$InsertTab(TXTab)>
        22f6cc:	e1a03005 	mov	r3, r5
        22f6d0:	e1a02006 	mov	r2, r6
        22f6d4:	e1a00004 	mov	r0, r4
        22f6d8:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        22f6dc:	ea655b1e 	b	1b8635c <TXAttrObject::$UpdateAttribute(unsigned long, void const *, long)>
    */
}

/**
 * Symbol: TXAdvancedRuler::GetLineLeftBlanks( const(unsigned char))
 * Address: 0022f6e0
 */
TXAdvancedRuler::GetLineLeftBlanks( const(unsigned char)) {
    /*
        22f6e0:	e31100ff 	tst	r1, #255	; 0xff
        22f6e4:	05900014 	ldreq	r0, [r0, #20]	; fField20
        22f6e8:	15900010 	ldrne	r0, [r0, #16]	; fField16
        22f6ec:	e1a00800 	mov	r0, r0, lsl #16
        22f6f0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXAdvancedRuler::GetLineRightBlanks( const(void))
 * Address: 0022f6f4
 */
TXAdvancedRuler::GetLineRightBlanks( const(void)) {
    /*
        22f6f4:	e5900018 	ldr	r0, [r0, #24]	; fField24
        22f6f8:	e1a00800 	mov	r0, r0, lsl #16
        22f6fc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CalcPendingTabWidth__15TXAdvancedRulerCFRC12TXPendingTablT2
 * Address: 0022f700
 */
void TXAdvancedRuler::CalcPendingTabWidth() {
    /*
        22f700:	e1a0c00d 	mov	ip, sp
        22f704:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        22f708:	e24cb004 	sub	fp, ip, #4	; 0x4
        22f70c:	e1a04003 	mov	r4, r3
        22f710:	e591500c 	ldr	r5, [r1, #12]	; fField12
        22f714:	e5d10008 	ldrb	r0, [r1, #8]
        22f718:	e3300001 	teq	r0, #1	; 0x1
        22f71c:	1a000008 	bne	22f744 <CalcPendingTabWidth__15TXAdvancedRulerCFRC12TXPendingTablT2+0x44>
        22f720:	e1a00002 	mov	r0, r2
        22f724:	e3a01802 	mov	r1, #131072	; 0x20000
        22f728:	eb66c664 	bl	1be10c0 <$FixedDivide>
        22f72c:	e0450000 	sub	r0, r5, r0
        22f730:	e3500000 	cmp	r0, #0	; 0x0
        22f734:	da000003 	ble	22f748 <CalcPendingTabWidth__15TXAdvancedRulerCFRC12TXPendingTablT2+0x48>
        22f738:	e0544000 	subs	r4, r4, r0
        22f73c:	40800004 	addmi	r0, r0, r4
        22f740:	ea000000 	b	22f748 <CalcPendingTabWidth__15TXAdvancedRulerCFRC12TXPendingTablT2+0x48>
        22f744:	e0450002 	sub	r0, r5, r2
        22f748:	e3500000 	cmp	r0, #0	; 0x0
        22f74c:	b3a00000 	movlt	r0, #0	; 0x0
        22f750:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: GetTabWidth__15TXAdvancedRulerCFlT1P12TXPendingTab
 * Address: 0022f754
 */
void TXAdvancedRuler::GetTabWidth() {
    /*
        22f754:	e1a0c00d 	mov	ip, sp
        22f758:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        22f75c:	e24cb004 	sub	fp, ip, #4	; 0x4
        22f760:	e1a05001 	mov	r5, r1
        22f764:	e1a06002 	mov	r6, r2
        22f768:	e1a04003 	mov	r4, r3
        22f76c:	e24dd008 	sub	sp, sp, #8	; 0x8
        22f770:	e5b0100c 	ldr	r1, [r0, #12]!	; fField12
        22f774:	e3310000 	teq	r1, #0	; 0x0
        22f778:	0a000015 	beq	22f7d4 <GetTabWidth__15TXAdvancedRulerCFlT1P12TXPendingTab+0x80>
        22f77c:	e1a02005 	mov	r2, r5
        22f780:	e1a0000d 	mov	r0, sp
        22f784:	eb6556cc 	bl	1b852bc <TXTabsArray::$WidthToTab( const(long))>
        22f788:	e2860902 	add	r0, r6, #32768	; 0x8000
        22f78c:	e1a00840 	mov	r0, r0, asr #16
        22f790:	e1a01800 	mov	r1, r0, lsl #16
        22f794:	e59d0000 	ldr	r0, [sp]
        22f798:	e1500841 	cmp	r0, r1, asr #16
        22f79c:	ca00000c 	bgt	22f7d4 <GetTabWidth__15TXAdvancedRulerCFlT1P12TXPendingTab+0x80>
        22f7a0:	e2840004 	add	r0, r4, #4	; 0x4
        22f7a4:	e89d5000 	ldmia	sp, {ip, lr}
        22f7a8:	e8805000 	stmia	r0, {ip, lr}
        22f7ac:	e5dd0004 	ldrb	r0, [sp, #4]
        22f7b0:	e3300000 	teq	r0, #0	; 0x0
        22f7b4:	13a00001 	movne	r0, #1	; 0x1
        22f7b8:	1a000000 	bne	22f7c0 <GetTabWidth__15TXAdvancedRulerCFlT1P12TXPendingTab+0x6c>
        22f7bc:	e3a00000 	mov	r0, #0	; 0x0
        22f7c0:	e5c40000 	strb	r0, [r4]
        22f7c4:	e5940004 	ldr	r0, [r4, #4]
        22f7c8:	e0650800 	rsb	r0, r5, r0, lsl #16
        22f7cc:	e5a4000c 	str	r0, [r4, #12]!	; fField12
        22f7d0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        22f7d4:	e2850902 	add	r0, r5, #32768	; 0x8000
        22f7d8:	e1a00840 	mov	r0, r0, asr #16
        22f7dc:	e1a01800 	mov	r1, r0, lsl #16
        22f7e0:	e1a01841 	mov	r1, r1, asr #16
        22f7e4:	e59f0018 	ldr	r0, [pc, #18]	; 22f804 <GetTabWidth__15TXAdvancedRulerCFlT1P12TXPendingTab+0xb0>
        22f7e8:	e5900000 	ldr	r0, [r0]
        22f7ec:	e1a06000 	mov	r6, r0
        22f7f0:	eb660c52 	bl	1bb2940 <$__rt_sdiv>
        22f7f4:	e2800001 	add	r0, r0, #1	; 0x1
        22f7f8:	e0000096 	mul	r0, r6, r0
        22f7fc:	e5840004 	str	r0, [r4, #4]
        22f800:	eaffffed 	b	22f7bc <GetTabWidth__15TXAdvancedRulerCFlT1P12TXPendingTab+0x68>
        22f804:	0c104d7c 	ldceq	13, cr4, [r0], -#496
    */
}

/**
 * Symbol: TXAdvancedRuler::AdjustLineHeight( const(TXLineHeightInfo *))
 * Address: 0022f808
 */
TXAdvancedRuler::AdjustLineHeight( const(TXLineHeightInfo *)) {
    /*
        22f808:	e5d0001c 	ldrb	r0, [r0, #28]	; fField28
        22f80c:	e3300001 	teq	r0, #1	; 0x1
        22f810:	01a0f00e 	moveq	pc, lr
        22f814:	e2400001 	sub	r0, r0, #1	; 0x1
        22f818:	e5912004 	ldr	r2, [r1, #4]
        22f81c:	e0020290 	mul	r2, r0, r2
        22f820:	e0822fa2 	add	r2, r2, r2, lsr #31
        22f824:	e5910000 	ldr	r0, [r1]
        22f828:	e08000c2 	add	r0, r0, r2, asr #1
        22f82c:	e5810000 	str	r0, [r1]
        22f830:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXAdvancedRuler::CreateNew( const(void))
 * Address: 0022f834
 */
TXAdvancedRuler::CreateNew( const(void)) {
    /*
        22f834:	e3a00000 	mov	r0, #0	; 0x0
        22f838:	ea655281 	b	1b84244 <TXAdvancedRuler::$__ct(void)>
    */
}

/**
 * Symbol: TXAdvancedRuler::GetNSObject( const(void))
 * Address: 0022fcec
 */
TXAdvancedRuler::GetNSObject( const(void)) {
    /*
        22fcec:	e1a0c00d 	mov	ip, sp
        22fcf0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        22fcf4:	e24cb004 	sub	fp, ip, #4	; 0x4
        22fcf8:	e1a04000 	mov	r4, r0
        22fcfc:	e24dd014 	sub	sp, sp, #20	; 0x14
        22fd00:	eb659b8e 	bl	1b96b40 <TXBasicRuler::$GetNSObject( const(void))>
        22fd04:	eb664910 	bl	1bc214c <$AllocateRefHandle(long)>
        22fd08:	e58d0010 	str	r0, [sp, #16]	; fField16
        22fd0c:	e5940010 	ldr	r0, [r4, #16]	; fField16
        22fd10:	e1a00100 	mov	r0, r0, lsl #2
        22fd14:	eb66490c 	bl	1bc214c <$AllocateRefHandle(long)>
        22fd18:	e58d0000 	str	r0, [sp]
        22fd1c:	e1a0200d 	mov	r2, sp
        22fd20:	e59f116c 	ldr	r1, [pc, #16c]	; 22fe94 <TXAdvancedRuler::GetNSObject( const(void))+0x1a8>	; fField16
        22fd24:	e28d0010 	add	r0, sp, #16	; 0x10
        22fd28:	eb66598e 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        22fd2c:	e59d0000 	ldr	r0, [sp]
        22fd30:	eb664d21 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        22fd34:	e5940014 	ldr	r0, [r4, #20]	; fField20
        22fd38:	e1a00100 	mov	r0, r0, lsl #2
        22fd3c:	eb664902 	bl	1bc214c <$AllocateRefHandle(long)>
        22fd40:	e58d0004 	str	r0, [sp, #4]
        22fd44:	e28d2004 	add	r2, sp, #4	; 0x4
        22fd48:	e59f1148 	ldr	r1, [pc, #148]	; 22fe98 <TXAdvancedRuler::GetNSObject( const(void))+0x1ac>
        22fd4c:	e28d0010 	add	r0, sp, #16	; 0x10
        22fd50:	eb665984 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        22fd54:	e59d0004 	ldr	r0, [sp, #4]
        22fd58:	eb664d17 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        22fd5c:	e5940018 	ldr	r0, [r4, #24]	; fField24
        22fd60:	e1a00100 	mov	r0, r0, lsl #2
        22fd64:	eb6648f8 	bl	1bc214c <$AllocateRefHandle(long)>
        22fd68:	e58d0008 	str	r0, [sp, #8]
        22fd6c:	e28d2008 	add	r2, sp, #8	; 0x8
        22fd70:	e59f1124 	ldr	r1, [pc, #124]	; 22fe9c <TXAdvancedRuler::GetNSObject( const(void))+0x1b0>
        22fd74:	e28d0010 	add	r0, sp, #16	; 0x10
        22fd78:	eb66597a 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        22fd7c:	e59d0008 	ldr	r0, [sp, #8]
        22fd80:	eb664d0d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        22fd84:	e5d4001c 	ldrb	r0, [r4, #28]	; fField28
        22fd88:	e1a00100 	mov	r0, r0, lsl #2
        22fd8c:	eb6648ee 	bl	1bc214c <$AllocateRefHandle(long)>
        22fd90:	e58d000c 	str	r0, [sp, #12]	; fField12
        22fd94:	e28d200c 	add	r2, sp, #12	; 0xc
        22fd98:	e59f1100 	ldr	r1, [pc, #100]	; 22fea0 <TXAdvancedRuler::GetNSObject( const(void))+0x1b4>
        22fd9c:	e28d0010 	add	r0, sp, #16	; 0x10
        22fda0:	eb665970 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        22fda4:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        22fda8:	eb664d03 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        22fdac:	e594000c 	ldr	r0, [r4, #12]	; fField12
        22fdb0:	e3300000 	teq	r0, #0	; 0x0
        22fdb4:	0a000060 	beq	22ff3c <TXAdvancedRuler::GetNSObject( const(void))+0x250>
        22fdb8:	e5b06004 	ldr	r6, [r0, #4]!
        22fdbc:	e24dd004 	sub	sp, sp, #4	; 0x4
        22fdc0:	e1a01006 	mov	r1, r6
        22fdc4:	e59f00d8 	ldr	r0, [pc, #d8]	; 22fea4 <TXAdvancedRuler::GetNSObject( const(void))+0x1b8>
        22fdc8:	eb6648da 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        22fdcc:	eb6648de 	bl	1bc214c <$AllocateRefHandle(long)>
        22fdd0:	e3a05000 	mov	r5, #0	; 0x0
        22fdd4:	e3560000 	cmp	r6, #0	; 0x0
        22fdd8:	e58d0000 	str	r0, [sp]
        22fddc:	da00004f 	ble	22ff20 <TXAdvancedRuler::GetNSObject( const(void))+0x234>
        22fde0:	e59f90c0 	ldr	r9, [pc, #c0]	; 22fea8 <TXAdvancedRuler::GetNSObject( const(void))+0x1bc>
        22fde4:	e59f80c0 	ldr	r8, [pc, #c0]	; 22feac <TXAdvancedRuler::GetNSObject( const(void))+0x1c0>
        22fde8:	e59fa0c0 	ldr	sl, [pc, #c0]	; 22feb0 <TXAdvancedRuler::GetNSObject( const(void))+0x1c4>
        22fdec:	e59f70c0 	ldr	r7, [pc, #c0]	; 22feb4 <TXAdvancedRuler::GetNSObject( const(void))+0x1c8>
        22fdf0:	e24dd018 	sub	sp, sp, #24	; 0x18
        22fdf4:	e1a02005 	mov	r2, r5
        22fdf8:	e1a0000d 	mov	r0, sp
        22fdfc:	e594100c 	ldr	r1, [r4, #12]	; fField12
        22fe00:	eb65552f 	bl	1b852c4 <TXTabsArray::$GetIndTab( const(long))>
        22fe04:	e1a0100d 	mov	r1, sp
        22fe08:	e28d0010 	add	r0, sp, #16	; 0x10
        22fe0c:	e3a02006 	mov	r2, #6	; 0x6
        22fe10:	eb66130e 	bl	1bb4a50 <$memcpy>
        22fe14:	e1a00009 	mov	r0, r9
        22fe18:	eb6648d3 	bl	1bc216c <$Clone(RefVar const &)>
        22fe1c:	eb6648ca 	bl	1bc214c <$AllocateRefHandle(long)>
        22fe20:	e58d000c 	str	r0, [sp, #12]	; fField12
        22fe24:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        22fe28:	e1a00100 	mov	r0, r0, lsl #2
        22fe2c:	eb6648c6 	bl	1bc214c <$AllocateRefHandle(long)>
        22fe30:	e58d0008 	str	r0, [sp, #8]
        22fe34:	e28d2008 	add	r2, sp, #8	; 0x8
        22fe38:	e1a01008 	mov	r1, r8
        22fe3c:	e28d000c 	add	r0, sp, #12	; 0xc
        22fe40:	eb665948 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        22fe44:	e59d0008 	ldr	r0, [sp, #8]
        22fe48:	eb664cdb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        22fe4c:	e24dd004 	sub	sp, sp, #4	; 0x4
        22fe50:	e3a00002 	mov	r0, #2	; 0x2
        22fe54:	eb6648bc 	bl	1bc214c <$AllocateRefHandle(long)>
        22fe58:	e58d0000 	str	r0, [sp]
        22fe5c:	e5dd0018 	ldrb	r0, [sp, #24]	; fField24
        22fe60:	e3300001 	teq	r0, #1	; 0x1
        22fe64:	059f004c 	ldreq	r0, [pc, #4c]	; 22feb8 <TXAdvancedRuler::GetNSObject( const(void))+0x1cc>
        22fe68:	0a000015 	beq	22fec4 <TXAdvancedRuler::GetNSObject( const(void))+0x1d8>
        22fe6c:	e3300002 	teq	r0, #2	; 0x2
        22fe70:	059f0044 	ldreq	r0, [pc, #44]	; 22febc <TXAdvancedRuler::GetNSObject( const(void))+0x1d0>
        22fe74:	0a000012 	beq	22fec4 <TXAdvancedRuler::GetNSObject( const(void))+0x1d8>
        22fe78:	e33000ff 	teq	r0, #255	; 0xff
        22fe7c:	1a00000f 	bne	22fec0 <TXAdvancedRuler::GetNSObject( const(void))+0x1d4>
        22fe80:	e59a0000 	ldr	r0, [sl]
        22fe84:	e5900000 	ldr	r0, [r0]
        22fe88:	e59d1000 	ldr	r1, [sp]
        22fe8c:	e5810000 	str	r0, [r1]
        22fe90:	ea00000f 	b	22fed4 <TXAdvancedRuler::GetNSObject( const(void))+0x1e8>
        22fe94:	006831b8 	streqh	r3, [r8], -#24	; fField24
        22fe98:	006834e8 	rsbeq	r3, r8, r8, ror #9
        22fe9c:	00684370 	rsbeq	r4, r8, r0, ror r3
        22fea0:	006835b8 	streqh	r3, [r8], -#88
        22fea4:	00681f10 	rsbeq	r1, r8, r0, lsl pc
        22fea8:	006810b8 	streqh	r1, [r8], -#8
        22feac:	00684e98 	streqb	r4, [r8], -#232
        22feb0:	00684360 	rsbeq	r4, r8, r0, ror #6
        22feb4:	006833f0 	streqd	r3, [r8], -#48
        22feb8:	00682368 	rsbeq	r2, r8, r8, ror #6
        22febc:	00682858 	rsbeq	r2, r8, r8, asr r8
        22fec0:	e59f0088 	ldr	r0, [pc, #88]	; 22ff50 <TXAdvancedRuler::GetNSObject( const(void))+0x264>
        22fec4:	e5900000 	ldr	r0, [r0]
        22fec8:	e5901000 	ldr	r1, [r0]
        22fecc:	e59d0000 	ldr	r0, [sp]
        22fed0:	e5801000 	str	r1, [r0]
        22fed4:	e1a0200d 	mov	r2, sp
        22fed8:	e1a01007 	mov	r1, r7
        22fedc:	e28d0010 	add	r0, sp, #16	; 0x10
        22fee0:	eb665920 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        22fee4:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        22fee8:	e5902000 	ldr	r2, [r0]
        22feec:	e59d001c 	ldr	r0, [sp, #28]	; fField28
        22fef0:	e5900000 	ldr	r0, [r0]
        22fef4:	e1a01005 	mov	r1, r5
        22fef8:	eb665916 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        22fefc:	e59d0000 	ldr	r0, [sp]
        22ff00:	eb664cad 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        22ff04:	e28dd004 	add	sp, sp, #4	; 0x4
        22ff08:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        22ff0c:	eb664caa 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        22ff10:	e28dd018 	add	sp, sp, #24	; 0x18
        22ff14:	e2855001 	add	r5, r5, #1	; 0x1
        22ff18:	e1550006 	cmp	r5, r6
        22ff1c:	baffffb3 	blt	22fdf0 <TXAdvancedRuler::GetNSObject( const(void))+0x104>
        22ff20:	e1a0200d 	mov	r2, sp
        22ff24:	e59f1028 	ldr	r1, [pc, #28]	; 22ff54 <TXAdvancedRuler::GetNSObject( const(void))+0x268>	; fField28
        22ff28:	e28d0014 	add	r0, sp, #20	; 0x14
        22ff2c:	eb66590d 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        22ff30:	e59d0000 	ldr	r0, [sp]
        22ff34:	eb664ca0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        22ff38:	e28dd004 	add	sp, sp, #4	; 0x4
        22ff3c:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        22ff40:	e5904000 	ldr	r4, [r0]
        22ff44:	eb664c9c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        22ff48:	e1a00004 	mov	r0, r4
        22ff4c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        22ff50:	006834e0 	rsbeq	r3, r8, r0, ror #9
        22ff54:	00684a18 	rsbeq	r4, r8, r8, lsl sl
    */
}

/**
 * Symbol: TXAdvancedRuler::SetNSObject(RefVar const &)
 * Address: 0022ff58
 */
TXAdvancedRuler::SetNSObject(RefVar const &) {
    /*
        22ff58:	e1a0c00d 	mov	ip, sp
        22ff5c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        22ff60:	e24cb004 	sub	fp, ip, #4	; 0x4
        22ff64:	e1a04000 	mov	r4, r0
        22ff68:	e1a05001 	mov	r5, r1
        22ff6c:	eb659af5 	bl	1b96b48 <TXBasicRuler::$SetNSObject(RefVar const &)>
        22ff70:	e24dd004 	sub	sp, sp, #4	; 0x4
        22ff74:	e59f015c 	ldr	r0, [pc, #15c]	; 2300d8 <TXAdvancedRuler::SetNSObject(RefVar const &)+0x180>
        22ff78:	e5900000 	ldr	r0, [r0]
        22ff7c:	e5901000 	ldr	r1, [r0]
        22ff80:	e5950000 	ldr	r0, [r5]
        22ff84:	e5900000 	ldr	r0, [r0]
        22ff88:	eb6650b4 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        22ff8c:	eb66486e 	bl	1bc214c <$AllocateRefHandle(long)>
        22ff90:	e58d0000 	str	r0, [sp]
        22ff94:	e5900000 	ldr	r0, [r0]
        22ff98:	e2001003 	and	r1, r0, #3	; 0x3
        22ff9c:	e3510000 	cmp	r1, #0	; 0x0
        22ffa0:	1a000003 	bne	22ffb4 <TXAdvancedRuler::SetNSObject(RefVar const &)+0x5c>
        22ffa4:	01a00140 	moveq	r0, r0, asr #2
        22ffa8:	0a000000 	beq	22ffb0 <TXAdvancedRuler::SetNSObject(RefVar const &)+0x58>
        22ffac:	eb66485a 	bl	1bc211c <$_RINTError(long)>
        22ffb0:	e5840010 	str	r0, [r4, #16]	; fField16
        22ffb4:	e59f0120 	ldr	r0, [pc, #120]	; 2300dc <TXAdvancedRuler::SetNSObject(RefVar const &)+0x184>
        22ffb8:	e5900000 	ldr	r0, [r0]
        22ffbc:	e5901000 	ldr	r1, [r0]
        22ffc0:	e5950000 	ldr	r0, [r5]
        22ffc4:	e5900000 	ldr	r0, [r0]
        22ffc8:	eb6650a4 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        22ffcc:	e59d1000 	ldr	r1, [sp]
        22ffd0:	e5810000 	str	r0, [r1]
        22ffd4:	e1a01000 	mov	r1, r0
        22ffd8:	e2000003 	and	r0, r0, #3	; 0x3
        22ffdc:	e3500000 	cmp	r0, #0	; 0x0
        22ffe0:	1a000004 	bne	22fff8 <TXAdvancedRuler::SetNSObject(RefVar const &)+0xa0>
        22ffe4:	e1a00001 	mov	r0, r1
        22ffe8:	01a00140 	moveq	r0, r0, asr #2
        22ffec:	0a000000 	beq	22fff4 <TXAdvancedRuler::SetNSObject(RefVar const &)+0x9c>
        22fff0:	eb664849 	bl	1bc211c <$_RINTError(long)>
        22fff4:	e5840014 	str	r0, [r4, #20]	; fField20
        22fff8:	e59f00e0 	ldr	r0, [pc, #e0]	; 2300e0 <TXAdvancedRuler::SetNSObject(RefVar const &)+0x188>
        22fffc:	e5900000 	ldr	r0, [r0]
        230000:	e5901000 	ldr	r1, [r0]
        230004:	e5950000 	ldr	r0, [r5]
        230008:	e5900000 	ldr	r0, [r0]
        23000c:	eb665093 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        230010:	e59d1000 	ldr	r1, [sp]
        230014:	e5810000 	str	r0, [r1]
        230018:	e2001003 	and	r1, r0, #3	; 0x3
        23001c:	e3510000 	cmp	r1, #0	; 0x0
        230020:	1a000003 	bne	230034 <TXAdvancedRuler::SetNSObject(RefVar const &)+0xdc>
        230024:	01a00140 	moveq	r0, r0, asr #2
        230028:	0a000000 	beq	230030 <TXAdvancedRuler::SetNSObject(RefVar const &)+0xd8>
        23002c:	eb66483a 	bl	1bc211c <$_RINTError(long)>
        230030:	e5840018 	str	r0, [r4, #24]	; fField24
        230034:	e59f00a8 	ldr	r0, [pc, #a8]	; 2300e4 <TXAdvancedRuler::SetNSObject(RefVar const &)+0x18c>
        230038:	e5900000 	ldr	r0, [r0]
        23003c:	e5901000 	ldr	r1, [r0]
        230040:	e5950000 	ldr	r0, [r5]
        230044:	e5900000 	ldr	r0, [r0]
        230048:	eb665084 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        23004c:	e59d1000 	ldr	r1, [sp]
        230050:	e5810000 	str	r0, [r1]
        230054:	e1a01000 	mov	r1, r0
        230058:	e2000003 	and	r0, r0, #3	; 0x3
        23005c:	e3500000 	cmp	r0, #0	; 0x0
        230060:	1a000004 	bne	230078 <TXAdvancedRuler::SetNSObject(RefVar const &)+0x120>
        230064:	e1a00001 	mov	r0, r1
        230068:	01a00140 	moveq	r0, r0, asr #2
        23006c:	0a000000 	beq	230074 <TXAdvancedRuler::SetNSObject(RefVar const &)+0x11c>
        230070:	eb664829 	bl	1bc211c <$_RINTError(long)>
        230074:	e5c4001c 	strb	r0, [r4, #28]	; fField28
        230078:	e59f0068 	ldr	r0, [pc, #68]	; 2300e8 <TXAdvancedRuler::SetNSObject(RefVar const &)+0x190>
        23007c:	e5900000 	ldr	r0, [r0]
        230080:	e5901000 	ldr	r1, [r0]
        230084:	e5950000 	ldr	r0, [r5]
        230088:	e5900000 	ldr	r0, [r0]
        23008c:	eb665073 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        230090:	e59d1000 	ldr	r1, [sp]
        230094:	e5810000 	str	r0, [r1]
        230098:	e1a0000d 	mov	r0, sp
        23009c:	eb670e3a 	bl	1bf398c <$IsArray(RefVar const &)>
        2300a0:	e3300000 	teq	r0, #0	; 0x0
        2300a4:	0a000008 	beq	2300cc <TXAdvancedRuler::SetNSObject(RefVar const &)+0x174>
        2300a8:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2300ac:	e3300000 	teq	r0, #0	; 0x0
        2300b0:	0a000002 	beq	2300c0 <TXAdvancedRuler::SetNSObject(RefVar const &)+0x168>
        2300b4:	e3a01001 	mov	r1, #1	; 0x1
        2300b8:	e1a0e00f 	mov	lr, pc
        2300bc:	e590f000 	ldr	pc, [r0]
        2300c0:	e284100c 	add	r1, r4, #12	; 0xc
        2300c4:	e1a0000d 	mov	r0, sp
        2300c8:	eb655472 	bl	1b85298 <$FromObject(RefVar const &, TXTabsArray **)>
        2300cc:	e59d0000 	ldr	r0, [sp]
        2300d0:	eb664c39 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2300d4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2300d8:	006831b8 	streqh	r3, [r8], -#24	; fField24
        2300dc:	006834e8 	rsbeq	r3, r8, r8, ror #9
        2300e0:	00684370 	rsbeq	r4, r8, r0, ror r3
        2300e4:	006835b8 	streqh	r3, [r8], -#88
        2300e8:	00684a18 	rsbeq	r4, r8, r8, lsl sl
    */
}

/**
 * Symbol: TXAdvancedRuler::Reference(void)
 * Address: 00230234
 */
TXAdvancedRuler::Reference(void) {
    /*
        230234:	e1a0c00d 	mov	ip, sp
        230238:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        23023c:	e24cb004 	sub	fp, ip, #4	; 0x4
        230240:	e1a04000 	mov	r4, r0
        230244:	e590000c 	ldr	r0, [r0, #12]	; fField12
        230248:	e3300000 	teq	r0, #0	; 0x0
        23024c:	e1a00004 	mov	r0, r4
        230250:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
        230254:	0a0004d8 	beq	2315bc <TXAttrObject::Reference(void)>
        230258:	e5901000 	ldr	r1, [r0]
        23025c:	e1a0e00f 	mov	lr, pc
        230260:	e281f00c 	add	pc, r1, #12	; 0xc
        230264:	e1b05000 	movs	r5, r0
        230268:	0a000004 	beq	230280 <TXAdvancedRuler::Reference(void)+0x4c>
        23026c:	e1a01004 	mov	r1, r4
        230270:	e1a00005 	mov	r0, r5
        230274:	e5952000 	ldr	r2, [r5]
        230278:	e1a0e00f 	mov	lr, pc
        23027c:	e282f028 	add	pc, r2, #40	; 0x28
        230280:	e1a00005 	mov	r0, r5
        230284:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXAdvancedRuler::GetClassId( const(void))
 * Address: 0023046c
 */
TXAdvancedRuler::GetClassId( const(void)) {
    /*
        23046c:	e59f0000 	ldr	r0, [pc, #0]	; 230474 <TXAdvancedRuler::GetClassId( const(void))+0x8>
        230470:	e1a0f00e 	mov	pc, lr
        230474:	72756c72 	rsbvcs	r6, r5, #29184	; 0x7200
    */
}

/**
 * Symbol: TXAdvancedRuler::GetAttributeFlags( const(unsigned long))
 * Address: 00230478
 */
TXAdvancedRuler::GetAttributeFlags( const(unsigned long)) {
    /*
        230478:	e1a0c00d 	mov	ip, sp
        23047c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        230480:	e24cb004 	sub	fp, ip, #4	; 0x4
        230484:	e59fc03c 	ldr	ip, [pc, #3c]	; 2304c8 <TXAdvancedRuler::GetAttributeFlags( const(unsigned long))+0x50>
        230488:	e131000c 	teq	r1, ip
        23048c:	159fc038 	ldrne	ip, [pc, #38]	; 2304cc <TXAdvancedRuler::GetAttributeFlags( const(unsigned long))+0x54>
        230490:	1131000c 	teqne	r1, ip
        230494:	159fc034 	ldrne	ip, [pc, #34]	; 2304d0 <TXAdvancedRuler::GetAttributeFlags( const(unsigned long))+0x58>
        230498:	1131000c 	teqne	r1, ip
        23049c:	159fc030 	ldrne	ip, [pc, #30]	; 2304d4 <TXAdvancedRuler::GetAttributeFlags( const(unsigned long))+0x5c>
        2304a0:	1131000c 	teqne	r1, ip
        2304a4:	03a04001 	moveq	r4, #1	; 0x1
        2304a8:	0a000003 	beq	2304bc <TXAdvancedRuler::GetAttributeFlags( const(unsigned long))+0x44>
        2304ac:	e59fc024 	ldr	ip, [pc, #24]	; 2304d8 <TXAdvancedRuler::GetAttributeFlags( const(unsigned long))+0x60>	; fField24
        2304b0:	e131000c 	teq	r1, ip
        2304b4:	13a04000 	movne	r4, #0	; 0x0
        2304b8:	03a04002 	moveq	r4, #2	; 0x2
        2304bc:	eb6557a5 	bl	1b86358 <TXAttrObject::$GetAttributeFlags( const(unsigned long))>
        2304c0:	e1800004 	orr	r0, r0, r4
        2304c4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2304c8:	74616273 	strvcbt	r6, [r1], -#627
        2304cc:	6e646e74 	mcrvs	14, 3, r6, cr4, cr4, {3}
        2304d0:	6c4d7267 	mcrrvs	2, 6, r7, sp, cr7
        2304d4:	724d7267 	subvc	r7, sp, #1879048198	; 0x70000006
        2304d8:	6c737063 	ldcvsl	0, cr7, [r3], -#396
    */
}

/**
 * Symbol: TXAdvancedRuler::EqualTabs( const(TXTabsArray const *))
 * Address: 002304dc
 */
TXAdvancedRuler::EqualTabs( const(TXTabsArray const *)) {
    /*
        2304dc:	e3310000 	teq	r1, #0	; 0x0
        2304e0:	1590200c 	ldrne	r2, [r0, #12]	; fField12
        2304e4:	13320000 	teqne	r2, #0	; 0x0
        2304e8:	11a00002 	movne	r0, r2
        2304ec:	1a655373 	bne	1b852c0 <TXTabsArray::$IsEqual( const(TXTabsArray const *))>
        2304f0:	e590000c 	ldr	r0, [r0, #12]	; fField12
        2304f4:	e1300001 	teq	r0, r1
        2304f8:	13a00000 	movne	r0, #0	; 0x0
        2304fc:	03a00001 	moveq	r0, #1	; 0x1
        230500:	e20000ff 	and	r0, r0, #255	; 0xff
        230504:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXAdvancedRuler::GetCommonAttrValue( const(unsigned long, void *))
 * Address: 00230508
 */
TXAdvancedRuler::GetCommonAttrValue( const(unsigned long, void *)) {
    /*
        230508:	e59fc034 	ldr	ip, [pc, #34]	; 230544 <TXAdvancedRuler::GetCommonAttrValue( const(unsigned long, void *))+0x3c>
        23050c:	e151000c 	cmp	r1, ip
        230510:	0a000016 	beq	230570 <TXAdvancedRuler::GetCommonAttrValue( const(unsigned long, void *))+0x68>
        230514:	ca00000d 	bgt	230550 <TXAdvancedRuler::GetCommonAttrValue( const(unsigned long, void *))+0x48>
        230518:	e59fc028 	ldr	ip, [pc, #28]	; 230548 <TXAdvancedRuler::GetCommonAttrValue( const(unsigned long, void *))+0x40>	; fField28
        23051c:	e131000c 	teq	r1, ip
        230520:	0a00001d 	beq	23059c <TXAdvancedRuler::GetCommonAttrValue( const(unsigned long, void *))+0x94>
        230524:	e59fc020 	ldr	ip, [pc, #20]	; 23054c <TXAdvancedRuler::GetCommonAttrValue( const(unsigned long, void *))+0x44>	; fField20
        230528:	e131000c 	teq	r1, ip
        23052c:	1a00000e 	bne	23056c <TXAdvancedRuler::GetCommonAttrValue( const(unsigned long, void *))+0x64>
        230530:	e5d0001c 	ldrb	r0, [r0, #28]	; fField28
        230534:	e5d21000 	ldrb	r1, [r2]
        230538:	e1300001 	teq	r0, r1
        23053c:	1a000013 	bne	230590 <TXAdvancedRuler::GetCommonAttrValue( const(unsigned long, void *))+0x88>
        230540:	ea00000e 	b	230580 <TXAdvancedRuler::GetCommonAttrValue( const(unsigned long, void *))+0x78>
        230544:	6e646e74 	mcrvs	14, 3, r6, cr4, cr4, {3}
        230548:	6c4d7267 	mcrrvs	2, 6, r7, sp, cr7
        23054c:	6c737063 	ldcvsl	0, cr7, [r3], -#396
        230550:	e59fc030 	ldr	ip, [pc, #30]	; 230588 <TXAdvancedRuler::GetCommonAttrValue( const(unsigned long, void *))+0x80>
        230554:	e131000c 	teq	r1, ip
        230558:	0a000014 	beq	2305b0 <TXAdvancedRuler::GetCommonAttrValue( const(unsigned long, void *))+0xa8>
        23055c:	e59fc028 	ldr	ip, [pc, #28]	; 23058c <TXAdvancedRuler::GetCommonAttrValue( const(unsigned long, void *))+0x84>	; fField28
        230560:	e131000c 	teq	r1, ip
        230564:	05921000 	ldreq	r1, [r2]
        230568:	0a654f3b 	beq	1b8425c <TXAdvancedRuler::$EqualTabs( const(TXTabsArray const *))>
        23056c:	ea659977 	b	1b96b50 <TXBasicRuler::$GetCommonAttrValue( const(unsigned long, void *))>
        230570:	e5900010 	ldr	r0, [r0, #16]	; fField16
        230574:	e5921000 	ldr	r1, [r2]
        230578:	e1300001 	teq	r0, r1
        23057c:	1a000003 	bne	230590 <TXAdvancedRuler::GetCommonAttrValue( const(unsigned long, void *))+0x88>
        230580:	e3a00001 	mov	r0, #1	; 0x1
        230584:	ea000002 	b	230594 <TXAdvancedRuler::GetCommonAttrValue( const(unsigned long, void *))+0x8c>
        230588:	724d7267 	subvc	r7, sp, #1879048198	; 0x70000006
        23058c:	74616273 	strvcbt	r6, [r1], -#627
        230590:	e3a00000 	mov	r0, #0	; 0x0
        230594:	e20000ff 	and	r0, r0, #255	; 0xff
        230598:	e1a0f00e 	mov	pc, lr
        23059c:	e5900014 	ldr	r0, [r0, #20]	; fField20
        2305a0:	e5921000 	ldr	r1, [r2]
        2305a4:	e1300001 	teq	r0, r1
        2305a8:	1afffff8 	bne	230590 <TXAdvancedRuler::GetCommonAttrValue( const(unsigned long, void *))+0x88>
        2305ac:	eafffff3 	b	230580 <TXAdvancedRuler::GetCommonAttrValue( const(unsigned long, void *))+0x78>
        2305b0:	e5900018 	ldr	r0, [r0, #24]	; fField24
        2305b4:	e5921000 	ldr	r1, [r2]
        2305b8:	e1300001 	teq	r0, r1
        2305bc:	1afffff3 	bne	230590 <TXAdvancedRuler::GetCommonAttrValue( const(unsigned long, void *))+0x88>
        2305c0:	eaffffee 	b	230580 <TXAdvancedRuler::GetCommonAttrValue( const(unsigned long, void *))+0x78>
    */
}

/**
 * Symbol: TXAdvancedRuler::IsEqual( const(TXAttrObject const *))
 * Address: 002305c4
 */
TXAdvancedRuler::IsEqual( const(TXAttrObject const *)) {
    /*
        2305c4:	e1a0c00d 	mov	ip, sp
        2305c8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2305cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2305d0:	e1a04000 	mov	r4, r0
        2305d4:	e1a05001 	mov	r5, r1
        2305d8:	eb65995b 	bl	1b96b4c <TXBasicRuler::$IsEqual( const(TXAttrObject const *))>
        2305dc:	e3300000 	teq	r0, #0	; 0x0
        2305e0:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        2305e4:	e1350004 	teq	r5, r4
        2305e8:	03a00001 	moveq	r0, #1	; 0x1
        2305ec:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        2305f0:	e5941010 	ldr	r1, [r4, #16]	; fField16
        2305f4:	e5950010 	ldr	r0, [r5, #16]	; fField16
        2305f8:	e1310000 	teq	r1, r0
        2305fc:	05941014 	ldreq	r1, [r4, #20]	; fField20
        230600:	05950014 	ldreq	r0, [r5, #20]	; fField20
        230604:	01310000 	teqeq	r1, r0
        230608:	05941018 	ldreq	r1, [r4, #24]	; fField24
        23060c:	05950018 	ldreq	r0, [r5, #24]	; fField24
        230610:	01310000 	teqeq	r1, r0
        230614:	05d4101c 	ldreqb	r1, [r4, #28]	; fField28
        230618:	05d5001c 	ldreqb	r0, [r5, #28]	; fField28
        23061c:	01310000 	teqeq	r1, r0
        230620:	1a000005 	bne	23063c <TXAdvancedRuler::IsEqual( const(TXAttrObject const *))+0x78>
        230624:	e1a00004 	mov	r0, r4
        230628:	e5b5100c 	ldr	r1, [r5, #12]!	; fField12
        23062c:	eb654f0a 	bl	1b8425c <TXAdvancedRuler::$EqualTabs( const(TXTabsArray const *))>
        230630:	e3300000 	teq	r0, #0	; 0x0
        230634:	13a00001 	movne	r0, #1	; 0x1
        230638:	1a000000 	bne	230640 <TXAdvancedRuler::IsEqual( const(TXAttrObject const *))+0x7c>
        23063c:	e3a00000 	mov	r0, #0	; 0x0
        230640:	e20000ff 	and	r0, r0, #255	; 0xff
        230644:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXAdvancedRuler::GetAttributeValue( const(unsigned long, void *))
 * Address: 00230648
 */
TXAdvancedRuler::GetAttributeValue( const(unsigned long, void *)) {
    /*
        230648:	e59fc034 	ldr	ip, [pc, #34]	; 230684 <TXAdvancedRuler::GetAttributeValue( const(unsigned long, void *))+0x3c>
        23064c:	e151000c 	cmp	r1, ip
        230650:	05900010 	ldreq	r0, [r0, #16]	; fField16
        230654:	0a000015 	beq	2306b0 <TXAdvancedRuler::GetAttributeValue( const(unsigned long, void *))+0x68>
        230658:	ca00000c 	bgt	230690 <TXAdvancedRuler::GetAttributeValue( const(unsigned long, void *))+0x48>
        23065c:	e59fc024 	ldr	ip, [pc, #24]	; 230688 <TXAdvancedRuler::GetAttributeValue( const(unsigned long, void *))+0x40>	; fField24
        230660:	e131000c 	teq	r1, ip
        230664:	05900014 	ldreq	r0, [r0, #20]	; fField20
        230668:	0a000010 	beq	2306b0 <TXAdvancedRuler::GetAttributeValue( const(unsigned long, void *))+0x68>
        23066c:	e59fc018 	ldr	ip, [pc, #18]	; 23068c <TXAdvancedRuler::GetAttributeValue( const(unsigned long, void *))+0x44>
        230670:	e131000c 	teq	r1, ip
        230674:	05d0001c 	ldreqb	r0, [r0, #28]	; fField28
        230678:	05c20000 	streqb	r0, [r2]
        23067c:	0a00000c 	beq	2306b4 <TXAdvancedRuler::GetAttributeValue( const(unsigned long, void *))+0x6c>
        230680:	ea00000f 	b	2306c4 <TXAdvancedRuler::GetAttributeValue( const(unsigned long, void *))+0x7c>
        230684:	6e646e74 	mcrvs	14, 3, r6, cr4, cr4, {3}
        230688:	6c4d7267 	mcrrvs	2, 6, r7, sp, cr7
        23068c:	6c737063 	ldcvsl	0, cr7, [r3], -#396
        230690:	e59fc024 	ldr	ip, [pc, #24]	; 2306bc <TXAdvancedRuler::GetAttributeValue( const(unsigned long, void *))+0x74>	; fField24
        230694:	e131000c 	teq	r1, ip
        230698:	05900018 	ldreq	r0, [r0, #24]	; fField24
        23069c:	0a000003 	beq	2306b0 <TXAdvancedRuler::GetAttributeValue( const(unsigned long, void *))+0x68>
        2306a0:	e59fc018 	ldr	ip, [pc, #18]	; 2306c0 <TXAdvancedRuler::GetAttributeValue( const(unsigned long, void *))+0x78>
        2306a4:	e131000c 	teq	r1, ip
        2306a8:	1a000005 	bne	2306c4 <TXAdvancedRuler::GetAttributeValue( const(unsigned long, void *))+0x7c>
        2306ac:	e590000c 	ldr	r0, [r0, #12]	; fField12
        2306b0:	e5820000 	str	r0, [r2]
        2306b4:	e3a00001 	mov	r0, #1	; 0x1
        2306b8:	e1a0f00e 	mov	pc, lr
        2306bc:	724d7267 	subvc	r7, sp, #1879048198	; 0x70000006
        2306c0:	74616273 	strvcbt	r6, [r1], -#627
        2306c4:	ea659922 	b	1b96b54 <TXBasicRuler::$GetAttributeValue( const(unsigned long, void *))>
    */
}

