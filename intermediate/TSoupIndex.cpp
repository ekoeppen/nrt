#include "include/TSoupIndex.h"

/**
 * Symbol: TSoupIndex::BalanceTwoNodes(NodeHeader *, NodeHeader *, long)
 * Address: 002e63c8
 */
TSoupIndex::BalanceTwoNodes(NodeHeader *, NodeHeader *, long) {
    /*
        2e63c8:	e1a0c00d 	mov	ip, sp
        2e63cc:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2e63d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e63d4:	e1a04000 	mov	r4, r0
        2e63d8:	e1a05001 	mov	r5, r1
        2e63dc:	e1a07002 	mov	r7, r2
        2e63e0:	e1a06003 	mov	r6, r3
        2e63e4:	e24dd068 	sub	sp, sp, #104	; 0x68
        2e63e8:	e1a0800d 	mov	r8, sp
        2e63ec:	e1a02003 	mov	r2, r3
        2e63f0:	eb5d6716 	bl	1a40050 <TSoupIndex::$KeyFieldAdr(NodeHeader *, long)>
        2e63f4:	e5900000 	ldr	r0, [r0]
        2e63f8:	e1a00100 	mov	r0, r0, lsl #2
        2e63fc:	e1b00920 	movs	r0, r0, lsr #18
        2e6400:	1a000016 	bne	2e6460 <TSoupIndex::BalanceTwoNodes(NodeHeader *, NodeHeader *, long)+0x98>
        2e6404:	e1a01005 	mov	r1, r5
        2e6408:	e1a00004 	mov	r0, r4
        2e640c:	eb5d6b26 	bl	1a410ac <TSoupIndex::$LastSlotInNode(NodeHeader *)>
        2e6410:	e1a06000 	mov	r6, r0
        2e6414:	e1a03000 	mov	r3, r0
        2e6418:	e92d0008 	stmdb	sp!, {r3}
        2e641c:	e1a03005 	mov	r3, r5
        2e6420:	e28d2068 	add	r2, sp, #104	; 0x68
        2e6424:	e1a01008 	mov	r1, r8
        2e6428:	e1a00004 	mov	r0, r4
        2e642c:	eb5d5ea2 	bl	1a3debc <TSoupIndex::$CopyKeyFmNode(KeyField *, unsigned long *, NodeHeader *, long)>
        2e6430:	e28dd004 	add	sp, sp, #4	; 0x4
        2e6434:	e1a02006 	mov	r2, r6
        2e6438:	e1a01005 	mov	r1, r5
        2e643c:	e1a00004 	mov	r0, r4
        2e6440:	eb5d7358 	bl	1a431a8 <TSoupIndex::$RightNodeNo(NodeHeader *, long)>
        2e6444:	e1a09007 	mov	r9, r7
        2e6448:	e5952000 	ldr	r2, [r5]
        2e644c:	e1a00004 	mov	r0, r4
        2e6450:	e59d1064 	ldr	r1, [sp, #100]
        2e6454:	eb5d6f43 	bl	1a42168 <TSoupIndex::$ReadANode(unsigned long, unsigned long)>
        2e6458:	e1a07000 	mov	r7, r0
        2e645c:	ea000010 	b	2e64a4 <TSoupIndex::BalanceTwoNodes(NodeHeader *, NodeHeader *, long)+0xdc>
        2e6460:	e1a03006 	mov	r3, r6
        2e6464:	e92d0008 	stmdb	sp!, {r3}
        2e6468:	e1a03005 	mov	r3, r5
        2e646c:	e28d2068 	add	r2, sp, #104	; 0x68
        2e6470:	e1a01008 	mov	r1, r8
        2e6474:	e1a00004 	mov	r0, r4
        2e6478:	eb5d5e8f 	bl	1a3debc <TSoupIndex::$CopyKeyFmNode(KeyField *, unsigned long *, NodeHeader *, long)>
        2e647c:	e28dd004 	add	sp, sp, #4	; 0x4
        2e6480:	e1a02006 	mov	r2, r6
        2e6484:	e1a01005 	mov	r1, r5
        2e6488:	e1a00004 	mov	r0, r4
        2e648c:	eb5d7345 	bl	1a431a8 <TSoupIndex::$RightNodeNo(NodeHeader *, long)>
        2e6490:	e1a01000 	mov	r1, r0
        2e6494:	e1a00004 	mov	r0, r4
        2e6498:	e5952000 	ldr	r2, [r5]
        2e649c:	eb5d6f31 	bl	1a42168 <TSoupIndex::$ReadANode(unsigned long, unsigned long)>
        2e64a0:	e1a09000 	mov	r9, r0
        2e64a4:	e1a01005 	mov	r1, r5
        2e64a8:	e1a00004 	mov	r0, r4
        2e64ac:	eb5d5a6f 	bl	1a3ce70 <TSoupIndex::$ChangeNode(NodeHeader *)>
        2e64b0:	e1a02006 	mov	r2, r6
        2e64b4:	e1a01005 	mov	r1, r5
        2e64b8:	e1a00004 	mov	r0, r4
        2e64bc:	eb5d5e87 	bl	1a3dee0 <TSoupIndex::$DeleteKeyFromNode(NodeHeader *, long)>
        2e64c0:	e1a01005 	mov	r1, r5
        2e64c4:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2e64c8:	eb5d5e89 	bl	1a3def4 <TNodeCache::$DirtyNode(NodeHeader *)>
        2e64cc:	e1a01007 	mov	r1, r7
        2e64d0:	e1a00004 	mov	r0, r4
        2e64d4:	eb5d5a65 	bl	1a3ce70 <TSoupIndex::$ChangeNode(NodeHeader *)>
        2e64d8:	e1a01009 	mov	r1, r9
        2e64dc:	e1a00004 	mov	r0, r4
        2e64e0:	eb5d5a62 	bl	1a3ce70 <TSoupIndex::$ChangeNode(NodeHeader *)>
        2e64e4:	e1a03009 	mov	r3, r9
        2e64e8:	e92d0008 	stmdb	sp!, {r3}
        2e64ec:	e1a03007 	mov	r3, r7
        2e64f0:	e1a02005 	mov	r2, r5
        2e64f4:	e1a01008 	mov	r1, r8
        2e64f8:	e1a00004 	mov	r0, r4
        2e64fc:	eb5d6af7 	bl	1a410e0 <TSoupIndex::$MergeTwoNodes(KeyField *, NodeHeader *, NodeHeader *, NodeHeader *)>
        2e6500:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::GetLeafKey(KeyField *, NodeHeader *)
 * Address: 002e6504
 */
TSoupIndex::GetLeafKey(KeyField *, NodeHeader *) {
    /*
        2e6504:	e1a0c00d 	mov	ip, sp
        2e6508:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2e650c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e6510:	e1a05000 	mov	r5, r0
        2e6514:	e1a07001 	mov	r7, r1
        2e6518:	e1a04002 	mov	r4, r2
        2e651c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2e6520:	e3a06000 	mov	r6, #0	; 0x0
        2e6524:	e1a01002 	mov	r1, r2
        2e6528:	eb5d6291 	bl	1a3ef74 <TSoupIndex::$FirstNodeNo(NodeHeader *)>
        2e652c:	e58d0000 	str	r0, [sp]
        2e6530:	e3300000 	teq	r0, #0	; 0x0
        2e6534:	0a00000a 	beq	2e6564 <TSoupIndex::GetLeafKey(KeyField *, NodeHeader *)+0x60>
        2e6538:	e5942000 	ldr	r2, [r4]
        2e653c:	e1a00005 	mov	r0, r5
        2e6540:	e59d1000 	ldr	r1, [sp]
        2e6544:	eb5d6f07 	bl	1a42168 <TSoupIndex::$ReadANode(unsigned long, unsigned long)>
        2e6548:	e1a01000 	mov	r1, r0
        2e654c:	e1a04000 	mov	r4, r0
        2e6550:	e1a00005 	mov	r0, r5
        2e6554:	eb5d6286 	bl	1a3ef74 <TSoupIndex::$FirstNodeNo(NodeHeader *)>
        2e6558:	e58d0000 	str	r0, [sp]
        2e655c:	e3300000 	teq	r0, #0	; 0x0
        2e6560:	1afffff4 	bne	2e6538 <TSoupIndex::GetLeafKey(KeyField *, NodeHeader *)+0x34>
        2e6564:	e1a03006 	mov	r3, r6
        2e6568:	e92d0008 	stmdb	sp!, {r3}
        2e656c:	e1a03004 	mov	r3, r4
        2e6570:	e28d2004 	add	r2, sp, #4	; 0x4
        2e6574:	e1a01007 	mov	r1, r7
        2e6578:	e1a00005 	mov	r0, r5
        2e657c:	eb5d5e4e 	bl	1a3debc <TSoupIndex::$CopyKeyFmNode(KeyField *, unsigned long *, NodeHeader *, long)>
        2e6580:	e28dd004 	add	sp, sp, #4	; 0x4
        2e6584:	e1a01004 	mov	r1, r4
        2e6588:	e1a00005 	mov	r0, r5
        2e658c:	eb5d5a37 	bl	1a3ce70 <TSoupIndex::$ChangeNode(NodeHeader *)>
        2e6590:	e1a02006 	mov	r2, r6
        2e6594:	e1a01004 	mov	r1, r4
        2e6598:	e1a00005 	mov	r0, r5
        2e659c:	eb5d5e4f 	bl	1a3dee0 <TSoupIndex::$DeleteKeyFromNode(NodeHeader *, long)>
        2e65a0:	e1a01004 	mov	r1, r4
        2e65a4:	e5950008 	ldr	r0, [r5, #8]	; fField8
        2e65a8:	eb5d5e51 	bl	1a3def4 <TNodeCache::$DirtyNode(NodeHeader *)>
        2e65ac:	e59f7054 	ldr	r7, [pc, #54]	; 2e6608 <TSoupIndex::GetLeafKey(KeyField *, NodeHeader *)+0x104>
        2e65b0:	e5970030 	ldr	r0, [r7, #48]	; fField48
        2e65b4:	e5901000 	ldr	r1, [r0]
        2e65b8:	e1a01821 	mov	r1, r1, lsr #16
        2e65bc:	e2011903 	and	r1, r1, #49152	; 0xc000
        2e65c0:	e5c01001 	strb	r1, [r0, #1]	; fField1
        2e65c4:	e1a01441 	mov	r1, r1, asr #8
        2e65c8:	e5c01000 	strb	r1, [r0]
        2e65cc:	e1a01004 	mov	r1, r4
        2e65d0:	e1a00005 	mov	r0, r5
        2e65d4:	eb5d6ecc 	bl	1a4210c <TSoupIndex::$NodeUnderflow(NodeHeader *)>
        2e65d8:	e1b08000 	movs	r8, r0
        2e65dc:	0a000007 	beq	2e6600 <TSoupIndex::GetLeafKey(KeyField *, NodeHeader *)+0xfc>
        2e65e0:	e1a03006 	mov	r3, r6
        2e65e4:	e92d0008 	stmdb	sp!, {r3}
        2e65e8:	e1a03004 	mov	r3, r4
        2e65ec:	e28d2004 	add	r2, sp, #4	; 0x4
        2e65f0:	e1a00005 	mov	r0, r5
        2e65f4:	e5b71030 	ldr	r1, [r7, #48]!	; fField48
        2e65f8:	eb5d5e2f 	bl	1a3debc <TSoupIndex::$CopyKeyFmNode(KeyField *, unsigned long *, NodeHeader *, long)>
        2e65fc:	e28dd004 	add	sp, sp, #4	; 0x4
        2e6600:	e1a00008 	mov	r0, r8
        2e6604:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2e6608:	0c105414 	ldceq	4, cr5, [r0], -#80
    */
}

/**
 * Symbol: TSoupIndex::DeleteTheKey(NodeHeader *, long, KeyField *)
 * Address: 002e660c
 */
TSoupIndex::DeleteTheKey(NodeHeader *, long, KeyField *) {
    /*
        2e660c:	e1a0c00d 	mov	ip, sp
        2e6610:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2e6614:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e6618:	e1a04000 	mov	r4, r0
        2e661c:	e1a05001 	mov	r5, r1
        2e6620:	e1a07002 	mov	r7, r2
        2e6624:	e1a06003 	mov	r6, r3
        2e6628:	e24dd008 	sub	sp, sp, #8	; 0x8
        2e662c:	e3a00000 	mov	r0, #0	; 0x0
        2e6630:	e3a09001 	mov	r9, #1	; 0x1
        2e6634:	e58d0004 	str	r0, [sp, #4]	; fField4
        2e6638:	e1a00004 	mov	r0, r4
        2e663c:	eb5d5a0b 	bl	1a3ce70 <TSoupIndex::$ChangeNode(NodeHeader *)>
        2e6640:	e1a01006 	mov	r1, r6
        2e6644:	e1a00004 	mov	r0, r4
        2e6648:	eb5d6689 	bl	1a40074 <TSoupIndex::$kfFirstDataAdr(KeyField *)>
        2e664c:	e1a0a000 	mov	sl, r0
        2e6650:	e1a02007 	mov	r2, r7
        2e6654:	e1a01005 	mov	r1, r5
        2e6658:	e1a00004 	mov	r0, r4
        2e665c:	eb5d667b 	bl	1a40050 <TSoupIndex::$KeyFieldAdr(NodeHeader *, long)>
        2e6660:	e1a08000 	mov	r8, r0
        2e6664:	e28d3004 	add	r3, sp, #4	; 0x4
        2e6668:	e1a01000 	mov	r1, r0
        2e666c:	e1a00004 	mov	r0, r4
        2e6670:	e59d2004 	ldr	r2, [sp, #4]	; fField4
        2e6674:	eb5d6a81 	bl	1a41080 <TSoupIndex::$kfNextDataAdr(KeyField *, void *, void **)>
        2e6678:	e3300000 	teq	r0, #0	; 0x0
        2e667c:	0a000010 	beq	2e66c4 <TSoupIndex::DeleteTheKey(NodeHeader *, long, KeyField *)+0xb8>
        2e6680:	e1a0100a 	mov	r1, sl
        2e6684:	e1a00004 	mov	r0, r4
        2e6688:	e59d2004 	ldr	r2, [sp, #4]	; fField4
        2e668c:	e1a0e00f 	mov	lr, pc
        2e6690:	e594f03c 	ldr	pc, [r4, #60]	; fField60
        2e6694:	e1b09000 	movs	r9, r0
        2e6698:	059d0004 	ldreq	r0, [sp, #4]	; fField4
        2e669c:	00400008 	subeq	r0, r0, r8
        2e66a0:	058d0000 	streq	r0, [sp]
        2e66a4:	0a000006 	beq	2e66c4 <TSoupIndex::DeleteTheKey(NodeHeader *, long, KeyField *)+0xb8>
        2e66a8:	e28d3004 	add	r3, sp, #4	; 0x4
        2e66ac:	e1a01008 	mov	r1, r8
        2e66b0:	e1a00004 	mov	r0, r4
        2e66b4:	e59d2004 	ldr	r2, [sp, #4]	; fField4
        2e66b8:	eb5d6a70 	bl	1a41080 <TSoupIndex::$kfNextDataAdr(KeyField *, void *, void **)>
        2e66bc:	e3300000 	teq	r0, #0	; 0x0
        2e66c0:	1affffee 	bne	2e6680 <TSoupIndex::DeleteTheKey(NodeHeader *, long, KeyField *)+0x74>
        2e66c4:	e5980000 	ldr	r0, [r8]
        2e66c8:	e1a00820 	mov	r0, r0, lsr #16
        2e66cc:	e1b00740 	movs	r0, r0, asr #14
        2e66d0:	1a00000b 	bne	2e6704 <TSoupIndex::DeleteTheKey(NodeHeader *, long, KeyField *)+0xf8>
        2e66d4:	e3390000 	teq	r9, #0	; 0x0
        2e66d8:	1a000004 	bne	2e66f0 <TSoupIndex::DeleteTheKey(NodeHeader *, long, KeyField *)+0xe4>
        2e66dc:	e1a02007 	mov	r2, r7
        2e66e0:	e1a01005 	mov	r1, r5
        2e66e4:	e1a00004 	mov	r0, r4
        2e66e8:	eb5d5dfc 	bl	1a3dee0 <TSoupIndex::$DeleteKeyFromNode(NodeHeader *, long)>
        2e66ec:	ea000001 	b	2e66f8 <TSoupIndex::DeleteTheKey(NodeHeader *, long, KeyField *)+0xec>
        2e66f0:	e3a00002 	mov	r0, #2	; 0x2
        2e66f4:	eb5d59cb 	bl	1a3ce28 <$_OSErr(long)>
        2e66f8:	e1a01005 	mov	r1, r5
        2e66fc:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
        2e6700:	ea000095 	b	2e695c <TSoupIndex::DeleteTheKey(NodeHeader *, long, KeyField *)+0x350>
        2e6704:	e3390000 	teq	r9, #0	; 0x0
        2e6708:	1a000060 	bne	2e6890 <TSoupIndex::DeleteTheKey(NodeHeader *, long, KeyField *)+0x284>
        2e670c:	e1a01005 	mov	r1, r5
        2e6710:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2e6714:	eb5d5df6 	bl	1a3def4 <TNodeCache::$DirtyNode(NodeHeader *)>
        2e6718:	e1a01008 	mov	r1, r8
        2e671c:	e1a00004 	mov	r0, r4
        2e6720:	eb5d6651 	bl	1a4006c <TSoupIndex::$kfDupCount(KeyField *)>
        2e6724:	e3500001 	cmp	r0, #1	; 0x1
        2e6728:	da00001a 	ble	2e6798 <TSoupIndex::DeleteTheKey(NodeHeader *, long, KeyField *)+0x18c>
        2e672c:	e1a02007 	mov	r2, r7
        2e6730:	e1a01005 	mov	r1, r5
        2e6734:	e1a00004 	mov	r0, r4
        2e6738:	eb5d729a 	bl	1a431a8 <TSoupIndex::$RightNodeNo(NodeHeader *, long)>
        2e673c:	e1a09000 	mov	r9, r0
        2e6740:	e1a02006 	mov	r2, r6
        2e6744:	e1a01008 	mov	r1, r8
        2e6748:	e1a00004 	mov	r0, r4
        2e674c:	eb5d6a64 	bl	1a410e4 <TSoupIndex::$MoveKey(KeyField *, KeyField *)>
        2e6750:	e59d0000 	ldr	r0, [sp]
        2e6754:	e0862000 	add	r2, r6, r0
        2e6758:	e1a01006 	mov	r1, r6
        2e675c:	e1a00004 	mov	r0, r4
        2e6760:	eb5d6640 	bl	1a40068 <TSoupIndex::$kfDeleteData(KeyField *, void *)>
        2e6764:	e1a02007 	mov	r2, r7
        2e6768:	e1a01005 	mov	r1, r5
        2e676c:	e1a00004 	mov	r0, r4
        2e6770:	eb5d5dda 	bl	1a3dee0 <TSoupIndex::$DeleteKeyFromNode(NodeHeader *, long)>
        2e6774:	e1a03007 	mov	r3, r7
        2e6778:	e92d0008 	stmdb	sp!, {r3}
        2e677c:	e1a03005 	mov	r3, r5
        2e6780:	e1a02009 	mov	r2, r9
        2e6784:	e1a01006 	mov	r1, r6
        2e6788:	e1a00004 	mov	r0, r4
        2e678c:	eb5d6e70 	bl	1a42154 <TSoupIndex::$PutKeyIntoNode(KeyField *, unsigned long, NodeHeader *, long)>
        2e6790:	e28dd004 	add	sp, sp, #4	; 0x4
        2e6794:	ea000074 	b	2e696c <TSoupIndex::DeleteTheKey(NodeHeader *, long, KeyField *)+0x360>
        2e6798:	e1a01008 	mov	r1, r8
        2e679c:	e1a00004 	mov	r0, r4
        2e67a0:	eb5d6a37 	bl	1a41084 <TSoupIndex::$kfNextDupID(KeyField *)>
        2e67a4:	e3300000 	teq	r0, #0	; 0x0
        2e67a8:	0a000033 	beq	2e687c <TSoupIndex::DeleteTheKey(NodeHeader *, long, KeyField *)+0x270>
        2e67ac:	e1a01000 	mov	r1, r0
        2e67b0:	e1a00004 	mov	r0, r4
        2e67b4:	eb5d6e6a 	bl	1a42164 <TSoupIndex::$ReadADupNode(unsigned long)>
        2e67b8:	e1a09000 	mov	r9, r0
        2e67bc:	e1a02006 	mov	r2, r6
        2e67c0:	e1a01008 	mov	r1, r8
        2e67c4:	e1a00004 	mov	r0, r4
        2e67c8:	eb5d6a45 	bl	1a410e4 <TSoupIndex::$MoveKey(KeyField *, KeyField *)>
        2e67cc:	e1a01009 	mov	r1, r9
        2e67d0:	e1a00004 	mov	r0, r4
        2e67d4:	eb5d61e4 	bl	1a3ef6c <TSoupIndex::$FirstDupDataAdr(DupNodeHeader *)>
        2e67d8:	e1a02000 	mov	r2, r0
        2e67dc:	e1a0a000 	mov	sl, r0
        2e67e0:	e1a01006 	mov	r1, r6
        2e67e4:	e1a00004 	mov	r0, r4
        2e67e8:	eb5d6a26 	bl	1a41088 <TSoupIndex::$kfReplaceFirstData(KeyField *, void *)>
        2e67ec:	e599000a 	ldr	r0, [r9, #10]
        2e67f0:	e1a00840 	mov	r0, r0, asr #16
        2e67f4:	e3300001 	teq	r0, #1	; 0x1
        2e67f8:	1a000003 	bne	2e680c <TSoupIndex::DeleteTheKey(NodeHeader *, long, KeyField *)+0x200>
        2e67fc:	e1a01006 	mov	r1, r6
        2e6800:	e1a00004 	mov	r0, r4
        2e6804:	e5992004 	ldr	r2, [r9, #4]	; fField4
        2e6808:	eb5d6a20 	bl	1a41090 <TSoupIndex::$kfSetNextDupID(KeyField *, unsigned long)>
        2e680c:	e1a02007 	mov	r2, r7
        2e6810:	e1a01005 	mov	r1, r5
        2e6814:	e1a00004 	mov	r0, r4
        2e6818:	eb5d7262 	bl	1a431a8 <TSoupIndex::$RightNodeNo(NodeHeader *, long)>
        2e681c:	e1a08000 	mov	r8, r0
        2e6820:	e1a02007 	mov	r2, r7
        2e6824:	e1a01005 	mov	r1, r5
        2e6828:	e1a00004 	mov	r0, r4
        2e682c:	eb5d5dab 	bl	1a3dee0 <TSoupIndex::$DeleteKeyFromNode(NodeHeader *, long)>
        2e6830:	e1a03007 	mov	r3, r7
        2e6834:	e92d0008 	stmdb	sp!, {r3}
        2e6838:	e1a03005 	mov	r3, r5
        2e683c:	e1a02008 	mov	r2, r8
        2e6840:	e1a01006 	mov	r1, r6
        2e6844:	e1a00004 	mov	r0, r4
        2e6848:	eb5d6e41 	bl	1a42154 <TSoupIndex::$PutKeyIntoNode(KeyField *, unsigned long, NodeHeader *, long)>
        2e684c:	e28dd004 	add	sp, sp, #4	; 0x4
        2e6850:	e1a0200a 	mov	r2, sl
        2e6854:	e1a01009 	mov	r1, r9
        2e6858:	e1a00004 	mov	r0, r4
        2e685c:	eb5d5d9c 	bl	1a3ded4 <TSoupIndex::$DeleteDupData(DupNodeHeader *, void *)>
        2e6860:	e599000a 	ldr	r0, [r9, #10]
        2e6864:	e1b00840 	movs	r0, r0, asr #16
        2e6868:	05991000 	ldreq	r1, [r9]
        2e686c:	0a000035 	beq	2e6948 <TSoupIndex::DeleteTheKey(NodeHeader *, long, KeyField *)+0x33c>
        2e6870:	e1a01009 	mov	r1, r9
        2e6874:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
        2e6878:	ea000037 	b	2e695c <TSoupIndex::DeleteTheKey(NodeHeader *, long, KeyField *)+0x350>
        2e687c:	e1a02007 	mov	r2, r7
        2e6880:	e1a01005 	mov	r1, r5
        2e6884:	e1a00004 	mov	r0, r4
        2e6888:	eb5d5d94 	bl	1a3dee0 <TSoupIndex::$DeleteKeyFromNode(NodeHeader *, long)>
        2e688c:	ea000036 	b	2e696c <TSoupIndex::DeleteTheKey(NodeHeader *, long, KeyField *)+0x360>
        2e6890:	e1a01008 	mov	r1, r8
        2e6894:	e1a00004 	mov	r0, r4
        2e6898:	eb5d69f9 	bl	1a41084 <TSoupIndex::$kfNextDupID(KeyField *)>
        2e689c:	e1a09000 	mov	r9, r0
        2e68a0:	e3a06000 	mov	r6, #0	; 0x0
        2e68a4:	ea00000c 	b	2e68dc <TSoupIndex::DeleteTheKey(NodeHeader *, long, KeyField *)+0x2d0>
        2e68a8:	e1a07006 	mov	r7, r6
        2e68ac:	e1a01009 	mov	r1, r9
        2e68b0:	e1a00004 	mov	r0, r4
        2e68b4:	eb5d6e2a 	bl	1a42164 <TSoupIndex::$ReadADupNode(unsigned long)>
        2e68b8:	e1a06000 	mov	r6, r0
        2e68bc:	e1a0200a 	mov	r2, sl
        2e68c0:	e5909004 	ldr	r9, [r0, #4]	; fField4
        2e68c4:	e1a01000 	mov	r1, r0
        2e68c8:	e1a00004 	mov	r0, r4
        2e68cc:	e3a03000 	mov	r3, #0	; 0x0
        2e68d0:	eb5d6196 	bl	1a3ef30 <TSoupIndex::$FindDupDataAdr(DupNodeHeader *, void *, void **)>
        2e68d4:	e3300000 	teq	r0, #0	; 0x0
        2e68d8:	1a000002 	bne	2e68e8 <TSoupIndex::DeleteTheKey(NodeHeader *, long, KeyField *)+0x2dc>
        2e68dc:	e3390000 	teq	r9, #0	; 0x0
        2e68e0:	1afffff0 	bne	2e68a8 <TSoupIndex::DeleteTheKey(NodeHeader *, long, KeyField *)+0x29c>
        2e68e4:	ea00001e 	b	2e6964 <TSoupIndex::DeleteTheKey(NodeHeader *, long, KeyField *)+0x358>
        2e68e8:	e3300000 	teq	r0, #0	; 0x0
        2e68ec:	0a00001c 	beq	2e6964 <TSoupIndex::DeleteTheKey(NodeHeader *, long, KeyField *)+0x358>
        2e68f0:	e1a02000 	mov	r2, r0
        2e68f4:	e1a01006 	mov	r1, r6
        2e68f8:	e1a00004 	mov	r0, r4
        2e68fc:	eb5d5d74 	bl	1a3ded4 <TSoupIndex::$DeleteDupData(DupNodeHeader *, void *)>
        2e6900:	e596000a 	ldr	r0, [r6, #10]
        2e6904:	e1b00840 	movs	r0, r0, asr #16
        2e6908:	1a000011 	bne	2e6954 <TSoupIndex::DeleteTheKey(NodeHeader *, long, KeyField *)+0x348>
        2e690c:	e3370000 	teq	r7, #0	; 0x0
        2e6910:	0a000004 	beq	2e6928 <TSoupIndex::DeleteTheKey(NodeHeader *, long, KeyField *)+0x31c>
        2e6914:	e5960004 	ldr	r0, [r6, #4]	; fField4
        2e6918:	e5870004 	str	r0, [r7, #4]	; fField4
        2e691c:	e1a01007 	mov	r1, r7
        2e6920:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2e6924:	ea000005 	b	2e6940 <TSoupIndex::DeleteTheKey(NodeHeader *, long, KeyField *)+0x334>
        2e6928:	e1a01008 	mov	r1, r8
        2e692c:	e1a00004 	mov	r0, r4
        2e6930:	e5962004 	ldr	r2, [r6, #4]	; fField4
        2e6934:	eb5d69d5 	bl	1a41090 <TSoupIndex::$kfSetNextDupID(KeyField *, unsigned long)>
        2e6938:	e1a01005 	mov	r1, r5
        2e693c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2e6940:	eb5d5d6b 	bl	1a3def4 <TNodeCache::$DirtyNode(NodeHeader *)>
        2e6944:	e5961000 	ldr	r1, [r6]
        2e6948:	e1a00004 	mov	r0, r4
        2e694c:	eb5d5d65 	bl	1a3dee8 <TSoupIndex::$DeleteNode(unsigned long)>
        2e6950:	ea000005 	b	2e696c <TSoupIndex::DeleteTheKey(NodeHeader *, long, KeyField *)+0x360>
        2e6954:	e1a01006 	mov	r1, r6
        2e6958:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
        2e695c:	eb5d5d64 	bl	1a3def4 <TNodeCache::$DirtyNode(NodeHeader *)>
        2e6960:	ea000001 	b	2e696c <TSoupIndex::DeleteTheKey(NodeHeader *, long, KeyField *)+0x360>
        2e6964:	e3a00002 	mov	r0, #2	; 0x2
        2e6968:	eb5d592e 	bl	1a3ce28 <$_OSErr(long)>
        2e696c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::DeleteKey(KeyField *, NodeHeader *, unsigned char *)
 * Address: 002e6970
 */
TSoupIndex::DeleteKey(KeyField *, NodeHeader *, unsigned char *) {
    /*
        2e6970:	e1a0c00d 	mov	ip, sp
        2e6974:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2e6978:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e697c:	e1a04000 	mov	r4, r0
        2e6980:	e1a07001 	mov	r7, r1
        2e6984:	e1a05002 	mov	r5, r2
        2e6988:	e1a06003 	mov	r6, r3
        2e698c:	e24dd008 	sub	sp, sp, #8	; 0x8
        2e6990:	e3a09000 	mov	r9, #0	; 0x0
        2e6994:	e1a0300d 	mov	r3, sp
        2e6998:	e92d0008 	stmdb	sp!, {r3}
        2e699c:	e28d3008 	add	r3, sp, #8	; 0x8
        2e69a0:	eb5d65ac 	bl	1a40058 <TSoupIndex::$KeyInNode(KeyField *, NodeHeader *, unsigned long *, long *)>
        2e69a4:	e28dd004 	add	sp, sp, #4	; 0x4
        2e69a8:	e59f8028 	ldr	r8, [pc, #28]	; 2e69d8 <TSoupIndex::DeleteKey(KeyField *, NodeHeader *, unsigned char *)+0x68>	; fField28
        2e69ac:	e3300000 	teq	r0, #0	; 0x0
        2e69b0:	1a000009 	bne	2e69dc <TSoupIndex::DeleteKey(KeyField *, NodeHeader *, unsigned char *)+0x6c>
        2e69b4:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        2e69b8:	e3510000 	cmp	r1, #0	; 0x0
        2e69bc:	1a000061 	bne	2e6b48 <TSoupIndex::DeleteKey(KeyField *, NodeHeader *, unsigned char *)+0x1d8>
        2e69c0:	e5980030 	ldr	r0, [r8, #48]	; fField48
        2e69c4:	e5900000 	ldr	r0, [r0]
        2e69c8:	e1a00100 	mov	r0, r0, lsl #2
        2e69cc:	e1b00920 	movs	r0, r0, lsr #18
        2e69d0:	0a000071 	beq	2e6b9c <TSoupIndex::DeleteKey(KeyField *, NodeHeader *, unsigned char *)+0x22c>
        2e69d4:	ea000003 	b	2e69e8 <TSoupIndex::DeleteKey(KeyField *, NodeHeader *, unsigned char *)+0x78>
        2e69d8:	0c105414 	ldceq	4, cr5, [r0], -#80
        2e69dc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2e69e0:	e3300000 	teq	r0, #0	; 0x0
        2e69e4:	1a000018 	bne	2e6a4c <TSoupIndex::DeleteKey(KeyField *, NodeHeader *, unsigned char *)+0xdc>
        2e69e8:	e3a09001 	mov	r9, #1	; 0x1
        2e69ec:	e5b81030 	ldr	r1, [r8, #48]!	; fField48
        2e69f0:	e5910000 	ldr	r0, [r1]
        2e69f4:	e1a00820 	mov	r0, r0, lsr #16
        2e69f8:	e1b02900 	movs	r2, r0, lsl #18
        2e69fc:	0a000004 	beq	2e6a14 <TSoupIndex::DeleteKey(KeyField *, NodeHeader *, unsigned char *)+0xa4>
        2e6a00:	e2000903 	and	r0, r0, #49152	; 0xc000
        2e6a04:	e5c10001 	strb	r0, [r1, #1]	; fField1
        2e6a08:	e1a00440 	mov	r0, r0, asr #8
        2e6a0c:	e5c10000 	strb	r0, [r1]
        2e6a10:	ea000004 	b	2e6a28 <TSoupIndex::DeleteKey(KeyField *, NodeHeader *, unsigned char *)+0xb8>
        2e6a14:	e1a03007 	mov	r3, r7
        2e6a18:	e1a01005 	mov	r1, r5
        2e6a1c:	e1a00004 	mov	r0, r4
        2e6a20:	e59d2000 	ldr	r2, [sp]
        2e6a24:	eb5d5d31 	bl	1a3def0 <TSoupIndex::$DeleteTheKey(NodeHeader *, long, KeyField *)>
        2e6a28:	e1a01005 	mov	r1, r5
        2e6a2c:	e1a00004 	mov	r0, r4
        2e6a30:	eb5d6db5 	bl	1a4210c <TSoupIndex::$NodeUnderflow(NodeHeader *)>
        2e6a34:	e5c60000 	strb	r0, [r6]
        2e6a38:	e31000ff 	tst	r0, #255	; 0xff
        2e6a3c:	01a01005 	moveq	r1, r5
        2e6a40:	05b40008 	ldreq	r0, [r4, #8]!	; fField8
        2e6a44:	0b5d5d2a 	bleq	1a3def4 <TNodeCache::$DirtyNode(NodeHeader *)>
        2e6a48:	ea000053 	b	2e6b9c <TSoupIndex::DeleteKey(KeyField *, NodeHeader *, unsigned char *)+0x22c>
        2e6a4c:	e3a09001 	mov	r9, #1	; 0x1
        2e6a50:	e1a01005 	mov	r1, r5
        2e6a54:	e1a00004 	mov	r0, r4
        2e6a58:	e59d2000 	ldr	r2, [sp]
        2e6a5c:	eb5d657b 	bl	1a40050 <TSoupIndex::$KeyFieldAdr(NodeHeader *, long)>
        2e6a60:	e1a0a000 	mov	sl, r0
        2e6a64:	e5901000 	ldr	r1, [r0]
        2e6a68:	e1a01821 	mov	r1, r1, lsr #16
        2e6a6c:	e3a00001 	mov	r0, #1	; 0x1
        2e6a70:	e1300741 	teq	r0, r1, asr #14
        2e6a74:	1a00000f 	bne	2e6ab8 <TSoupIndex::DeleteKey(KeyField *, NodeHeader *, unsigned char *)+0x148>
        2e6a78:	e1a0100a 	mov	r1, sl
        2e6a7c:	e1a00004 	mov	r0, r4
        2e6a80:	eb5d6579 	bl	1a4006c <TSoupIndex::$kfDupCount(KeyField *)>
        2e6a84:	e3500001 	cmp	r0, #1	; 0x1
        2e6a88:	ca000004 	bgt	2e6aa0 <TSoupIndex::DeleteKey(KeyField *, NodeHeader *, unsigned char *)+0x130>
        2e6a8c:	e1a0100a 	mov	r1, sl
        2e6a90:	e1a00004 	mov	r0, r4
        2e6a94:	eb5d697a 	bl	1a41084 <TSoupIndex::$kfNextDupID(KeyField *)>
        2e6a98:	e3300000 	teq	r0, #0	; 0x0
        2e6a9c:	0a000005 	beq	2e6ab8 <TSoupIndex::DeleteKey(KeyField *, NodeHeader *, unsigned char *)+0x148>
        2e6aa0:	e1a03007 	mov	r3, r7
        2e6aa4:	e1a01005 	mov	r1, r5
        2e6aa8:	e1a00004 	mov	r0, r4
        2e6aac:	e59d2000 	ldr	r2, [sp]
        2e6ab0:	eb5d5d0e 	bl	1a3def0 <TSoupIndex::$DeleteTheKey(NodeHeader *, long, KeyField *)>
        2e6ab4:	ea000021 	b	2e6b40 <TSoupIndex::DeleteKey(KeyField *, NodeHeader *, unsigned char *)+0x1d0>
        2e6ab8:	e1a01005 	mov	r1, r5
        2e6abc:	e1a00004 	mov	r0, r4
        2e6ac0:	e59d2000 	ldr	r2, [sp]
        2e6ac4:	eb5d71b7 	bl	1a431a8 <TSoupIndex::$RightNodeNo(NodeHeader *, long)>
        2e6ac8:	e1a0a000 	mov	sl, r0
        2e6acc:	e1a01000 	mov	r1, r0
        2e6ad0:	e1a00004 	mov	r0, r4
        2e6ad4:	e5952000 	ldr	r2, [r5]
        2e6ad8:	eb5d6da2 	bl	1a42168 <TSoupIndex::$ReadANode(unsigned long, unsigned long)>
        2e6adc:	e1a02000 	mov	r2, r0
        2e6ae0:	e1a00004 	mov	r0, r4
        2e6ae4:	e5981034 	ldr	r1, [r8, #52]	; fField52
        2e6ae8:	eb5d6535 	bl	1a3ffc4 <TSoupIndex::$GetLeafKey(KeyField *, NodeHeader *)>
        2e6aec:	e5c60000 	strb	r0, [r6]
        2e6af0:	e1a03007 	mov	r3, r7
        2e6af4:	e1a01005 	mov	r1, r5
        2e6af8:	e1a00004 	mov	r0, r4
        2e6afc:	e59d2000 	ldr	r2, [sp]
        2e6b00:	eb5d5cfa 	bl	1a3def0 <TSoupIndex::$DeleteTheKey(NodeHeader *, long, KeyField *)>
        2e6b04:	e1a03005 	mov	r3, r5
        2e6b08:	e1a0200a 	mov	r2, sl
        2e6b0c:	e1a00004 	mov	r0, r4
        2e6b10:	e5981034 	ldr	r1, [r8, #52]	; fField52
        2e6b14:	eb5d6540 	bl	1a4001c <TSoupIndex::$InsertAfterDelete(KeyField *, unsigned long, NodeHeader *)>
        2e6b18:	e5d60000 	ldrb	r0, [r6]
        2e6b1c:	e3300000 	teq	r0, #0	; 0x0
        2e6b20:	0a00001d 	beq	2e6b9c <TSoupIndex::DeleteKey(KeyField *, NodeHeader *, unsigned char *)+0x22c>
        2e6b24:	e1a00004 	mov	r0, r4
        2e6b28:	e2882030 	add	r2, r8, #48	; 0x30
        2e6b2c:	e8920006 	ldmia	r2, {r1, r2}
        2e6b30:	eb5d696b 	bl	1a410e4 <TSoupIndex::$MoveKey(KeyField *, KeyField *)>
        2e6b34:	e1a00004 	mov	r0, r4
        2e6b38:	e5b81034 	ldr	r1, [r8, #52]!	; fField52
        2e6b3c:	eb5d58b8 	bl	1a3ce24 <TSoupIndex::$_BTRemoveKey(KeyField *)>
        2e6b40:	e3a00000 	mov	r0, #0	; 0x0
        2e6b44:	ea000013 	b	2e6b98 <TSoupIndex::DeleteKey(KeyField *, NodeHeader *, unsigned char *)+0x228>
        2e6b48:	0a000013 	beq	2e6b9c <TSoupIndex::DeleteKey(KeyField *, NodeHeader *, unsigned char *)+0x22c>
        2e6b4c:	e1a00004 	mov	r0, r4
        2e6b50:	e5952000 	ldr	r2, [r5]
        2e6b54:	eb5d6d83 	bl	1a42168 <TSoupIndex::$ReadANode(unsigned long, unsigned long)>
        2e6b58:	e1b08000 	movs	r8, r0
        2e6b5c:	0a00000e 	beq	2e6b9c <TSoupIndex::DeleteKey(KeyField *, NodeHeader *, unsigned char *)+0x22c>
        2e6b60:	e1a03006 	mov	r3, r6
        2e6b64:	e1a02008 	mov	r2, r8
        2e6b68:	e1a01007 	mov	r1, r7
        2e6b6c:	e1a00004 	mov	r0, r4
        2e6b70:	eb5d5cd9 	bl	1a3dedc <TSoupIndex::$DeleteKey(KeyField *, NodeHeader *, unsigned char *)>
        2e6b74:	e1a09000 	mov	r9, r0
        2e6b78:	e5d60000 	ldrb	r0, [r6]
        2e6b7c:	e3300000 	teq	r0, #0	; 0x0
        2e6b80:	0a000005 	beq	2e6b9c <TSoupIndex::DeleteKey(KeyField *, NodeHeader *, unsigned char *)+0x22c>
        2e6b84:	e1a02008 	mov	r2, r8
        2e6b88:	e1a01005 	mov	r1, r5
        2e6b8c:	e1a00004 	mov	r0, r4
        2e6b90:	e59d3000 	ldr	r3, [sp]
        2e6b94:	eb5d58b1 	bl	1a3ce60 <TSoupIndex::$BalanceTwoNodes(NodeHeader *, NodeHeader *, long)>
        2e6b98:	e5c60000 	strb	r0, [r6]
        2e6b9c:	e1a00009 	mov	r0, r9
        2e6ba0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::FreeNodes(NodeHeader *)
 * Address: 002e6ba4
 */
TSoupIndex::FreeNodes(NodeHeader *) {
    /*
        2e6ba4:	e1a0c00d 	mov	ip, sp
        2e6ba8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2e6bac:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e6bb0:	e1a05000 	mov	r5, r0
        2e6bb4:	e1a04001 	mov	r4, r1
        2e6bb8:	e3a06000 	mov	r6, #0	; 0x0
        2e6bbc:	e591000a 	ldr	r0, [r1, #10]
        2e6bc0:	e1b00840 	movs	r0, r0, asr #16
        2e6bc4:	4a00001c 	bmi	2e6c3c <TSoupIndex::FreeNodes(NodeHeader *)+0x98>
        2e6bc8:	e3a07001 	mov	r7, #1	; 0x1
        2e6bcc:	e1a02006 	mov	r2, r6
        2e6bd0:	e1a01004 	mov	r1, r4
        2e6bd4:	e1a00005 	mov	r0, r5
        2e6bd8:	eb5d651c 	bl	1a40050 <TSoupIndex::$KeyFieldAdr(NodeHeader *, long)>
        2e6bdc:	e1a01000 	mov	r1, r0
        2e6be0:	e5900000 	ldr	r0, [r0]
        2e6be4:	e1a00820 	mov	r0, r0, lsr #16
        2e6be8:	e1370740 	teq	r7, r0, asr #14
        2e6bec:	1a000002 	bne	2e6bfc <TSoupIndex::FreeNodes(NodeHeader *)+0x58>
        2e6bf0:	e1b00900 	movs	r0, r0, lsl #18
        2e6bf4:	11a00005 	movne	r0, r5
        2e6bf8:	1b5d64e7 	blne	1a3ff9c <TSoupIndex::$FreeDupNodes(KeyField *)>
        2e6bfc:	e1a02006 	mov	r2, r6
        2e6c00:	e1a01004 	mov	r1, r4
        2e6c04:	e1a00005 	mov	r0, r5
        2e6c08:	eb5d6928 	bl	1a410b0 <TSoupIndex::$LeftNodeNo(NodeHeader *, long)>
        2e6c0c:	e1b01000 	movs	r1, r0
        2e6c10:	0a000005 	beq	2e6c2c <TSoupIndex::FreeNodes(NodeHeader *)+0x88>
        2e6c14:	e1a00005 	mov	r0, r5
        2e6c18:	e5942000 	ldr	r2, [r4]
        2e6c1c:	eb5d6d51 	bl	1a42168 <TSoupIndex::$ReadANode(unsigned long, unsigned long)>
        2e6c20:	e1a01000 	mov	r1, r0
        2e6c24:	e1a00005 	mov	r0, r5
        2e6c28:	eb5d64dc 	bl	1a3ffa0 <TSoupIndex::$FreeNodes(NodeHeader *)>
        2e6c2c:	e2866001 	add	r6, r6, #1	; 0x1
        2e6c30:	e594000a 	ldr	r0, [r4, #10]
        2e6c34:	e1560840 	cmp	r6, r0, asr #16
        2e6c38:	daffffe3 	ble	2e6bcc <TSoupIndex::FreeNodes(NodeHeader *)+0x28>
        2e6c3c:	e1a00005 	mov	r0, r5
        2e6c40:	e5941000 	ldr	r1, [r4]
        2e6c44:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        2e6c48:	ea5d5ca6 	b	1a3dee8 <TSoupIndex::$DeleteNode(unsigned long)>
    */
}

/**
 * Symbol: TSoupIndex::FreeDupNodes(KeyField *)
 * Address: 002e6c4c
 */
TSoupIndex::FreeDupNodes(KeyField *) {
    /*
        2e6c4c:	e1a0c00d 	mov	ip, sp
        2e6c50:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2e6c54:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e6c58:	e1a04000 	mov	r4, r0
        2e6c5c:	eb5d6908 	bl	1a41084 <TSoupIndex::$kfNextDupID(KeyField *)>
        2e6c60:	e1b05000 	movs	r5, r0
        2e6c64:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        2e6c68:	e1a01005 	mov	r1, r5
        2e6c6c:	e1a00004 	mov	r0, r4
        2e6c70:	eb5d6d3b 	bl	1a42164 <TSoupIndex::$ReadADupNode(unsigned long)>
        2e6c74:	e8900022 	ldmia	r0, {r1, r5}
        2e6c78:	e1a00004 	mov	r0, r4
        2e6c7c:	eb5d5c99 	bl	1a3dee8 <TSoupIndex::$DeleteNode(unsigned long)>
        2e6c80:	e3350000 	teq	r5, #0	; 0x0
        2e6c84:	1afffff7 	bne	2e6c68 <TSoupIndex::FreeDupNodes(KeyField *)+0x1c>
        2e6c88:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::_BTGetNextDupKey(KeyField *)
 * Address: 002e6c8c
 */
TSoupIndex::_BTGetNextDupKey(KeyField *) {
    /*
        2e6c8c:	e1a0c00d 	mov	ip, sp
        2e6c90:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2e6c94:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e6c98:	e1a04000 	mov	r4, r0
        2e6c9c:	e1a05001 	mov	r5, r1
        2e6ca0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2e6ca4:	e3a01000 	mov	r1, #0	; 0x0
        2e6ca8:	eb5d6d31 	bl	1a42174 <TSoupIndex::$ReadRootNode(unsigned char)>
        2e6cac:	e58d0000 	str	r0, [sp]
        2e6cb0:	e3300000 	teq	r0, #0	; 0x0
        2e6cb4:	03a00002 	moveq	r0, #2	; 0x2
        2e6cb8:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        2e6cbc:	e24dd008 	sub	sp, sp, #8	; 0x8
        2e6cc0:	e1a0300d 	mov	r3, sp
        2e6cc4:	e92d0008 	stmdb	sp!, {r3}
        2e6cc8:	e28d3008 	add	r3, sp, #8	; 0x8
        2e6ccc:	e28d200c 	add	r2, sp, #12	; 0xc
        2e6cd0:	e1a01005 	mov	r1, r5
        2e6cd4:	e1a00004 	mov	r0, r4
        2e6cd8:	eb5d923e 	bl	1a4b5d8 <TSoupIndex::$SearchNextDup(KeyField *, NodeHeader **, long *, DupNodeHeader **)>
        2e6cdc:	e28dd004 	add	sp, sp, #4	; 0x4
        2e6ce0:	e3300000 	teq	r0, #0	; 0x0
        2e6ce4:	0a000003 	beq	2e6cf8 <TSoupIndex::_BTGetNextDupKey(KeyField *)+0x6c>
        2e6ce8:	e3700001 	cmn	r0, #1	; 0x1
        2e6cec:	13a00000 	movne	r0, #0	; 0x0
        2e6cf0:	03a00002 	moveq	r0, #2	; 0x2
        2e6cf4:	ea000000 	b	2e6cfc <TSoupIndex::_BTGetNextDupKey(KeyField *)+0x70>
        2e6cf8:	e3a00003 	mov	r0, #3	; 0x3
        2e6cfc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::_BTGetPriorDupKey(KeyField *)
 * Address: 002e6d00
 */
TSoupIndex::_BTGetPriorDupKey(KeyField *) {
    /*
        2e6d00:	e1a0c00d 	mov	ip, sp
        2e6d04:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2e6d08:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e6d0c:	e1a04000 	mov	r4, r0
        2e6d10:	e1a05001 	mov	r5, r1
        2e6d14:	e24dd004 	sub	sp, sp, #4	; 0x4
        2e6d18:	e3a01000 	mov	r1, #0	; 0x0
        2e6d1c:	eb5d6d14 	bl	1a42174 <TSoupIndex::$ReadRootNode(unsigned char)>
        2e6d20:	e58d0000 	str	r0, [sp]
        2e6d24:	e3300000 	teq	r0, #0	; 0x0
        2e6d28:	03a00002 	moveq	r0, #2	; 0x2
        2e6d2c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        2e6d30:	e24dd008 	sub	sp, sp, #8	; 0x8
        2e6d34:	e1a0300d 	mov	r3, sp
        2e6d38:	e92d0008 	stmdb	sp!, {r3}
        2e6d3c:	e28d3008 	add	r3, sp, #8	; 0x8
        2e6d40:	e28d200c 	add	r2, sp, #12	; 0xc
        2e6d44:	e1a01005 	mov	r1, r5
        2e6d48:	e1a00004 	mov	r0, r4
        2e6d4c:	eb5d9224 	bl	1a4b5e4 <TSoupIndex::$SearchPriorDup(KeyField *, NodeHeader **, long *, DupNodeHeader **)>
        2e6d50:	e28dd004 	add	sp, sp, #4	; 0x4
        2e6d54:	e3300000 	teq	r0, #0	; 0x0
        2e6d58:	0a000003 	beq	2e6d6c <TSoupIndex::_BTGetPriorDupKey(KeyField *)+0x6c>
        2e6d5c:	e3700001 	cmn	r0, #1	; 0x1
        2e6d60:	13a00000 	movne	r0, #0	; 0x0
        2e6d64:	03a00002 	moveq	r0, #2	; 0x2
        2e6d68:	ea000000 	b	2e6d70 <TSoupIndex::_BTGetPriorDupKey(KeyField *)+0x70>
        2e6d6c:	e3a00003 	mov	r0, #3	; 0x3
        2e6d70:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::_BTGetNextKey(KeyField *)
 * Address: 002e6d74
 */
TSoupIndex::_BTGetNextKey(KeyField *) {
    /*
        2e6d74:	e1a0c00d 	mov	ip, sp
        2e6d78:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2e6d7c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e6d80:	e1a04000 	mov	r4, r0
        2e6d84:	e1a05001 	mov	r5, r1
        2e6d88:	e24dd004 	sub	sp, sp, #4	; 0x4
        2e6d8c:	e3a01000 	mov	r1, #0	; 0x0
        2e6d90:	eb5d6cf7 	bl	1a42174 <TSoupIndex::$ReadRootNode(unsigned char)>
        2e6d94:	e58d0000 	str	r0, [sp]
        2e6d98:	e3300000 	teq	r0, #0	; 0x0
        2e6d9c:	03a00002 	moveq	r0, #2	; 0x2
        2e6da0:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        2e6da4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2e6da8:	e1a0300d 	mov	r3, sp
        2e6dac:	e28d2004 	add	r2, sp, #4	; 0x4
        2e6db0:	e1a01005 	mov	r1, r5
        2e6db4:	e1a00004 	mov	r0, r4
        2e6db8:	eb5d9207 	bl	1a4b5dc <TSoupIndex::$SearchNext(KeyField *, NodeHeader **, long *)>
        2e6dbc:	e3300000 	teq	r0, #0	; 0x0
        2e6dc0:	0a000003 	beq	2e6dd4 <TSoupIndex::_BTGetNextKey(KeyField *)+0x60>
        2e6dc4:	e3700001 	cmn	r0, #1	; 0x1
        2e6dc8:	13a00000 	movne	r0, #0	; 0x0
        2e6dcc:	03a00002 	moveq	r0, #2	; 0x2
        2e6dd0:	ea000000 	b	2e6dd8 <TSoupIndex::_BTGetNextKey(KeyField *)+0x64>
        2e6dd4:	e3a00003 	mov	r0, #3	; 0x3
        2e6dd8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::_BTGetPriorKey(KeyField *)
 * Address: 002e6ddc
 */
TSoupIndex::_BTGetPriorKey(KeyField *) {
    /*
        2e6ddc:	e1a0c00d 	mov	ip, sp
        2e6de0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2e6de4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e6de8:	e1a04000 	mov	r4, r0
        2e6dec:	e1a05001 	mov	r5, r1
        2e6df0:	e24dd008 	sub	sp, sp, #8	; 0x8
        2e6df4:	e3a01000 	mov	r1, #0	; 0x0
        2e6df8:	eb5d6cdd 	bl	1a42174 <TSoupIndex::$ReadRootNode(unsigned char)>
        2e6dfc:	e58d0004 	str	r0, [sp, #4]	; fField4
        2e6e00:	e1a0300d 	mov	r3, sp
        2e6e04:	e28d2004 	add	r2, sp, #4	; 0x4
        2e6e08:	e1a01005 	mov	r1, r5
        2e6e0c:	e1a00004 	mov	r0, r4
        2e6e10:	eb5d91f2 	bl	1a4b5e0 <TSoupIndex::$SearchPrior(KeyField *, NodeHeader **, long *)>
        2e6e14:	e3300000 	teq	r0, #0	; 0x0
        2e6e18:	0a000003 	beq	2e6e2c <TSoupIndex::_BTGetPriorKey(KeyField *)+0x50>
        2e6e1c:	e3700001 	cmn	r0, #1	; 0x1
        2e6e20:	13a00000 	movne	r0, #0	; 0x0
        2e6e24:	03a00002 	moveq	r0, #2	; 0x2
        2e6e28:	ea000000 	b	2e6e30 <TSoupIndex::_BTGetPriorKey(KeyField *)+0x54>
        2e6e2c:	e3a00003 	mov	r0, #3	; 0x3
        2e6e30:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::_BTEnterKey(KeyField *)
 * Address: 002e6e5c
 */
TSoupIndex::_BTEnterKey(KeyField *) {
    /*
        2e6e5c:	e1a0c00d 	mov	ip, sp
        2e6e60:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2e6e64:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e6e68:	e1a04000 	mov	r4, r0
        2e6e6c:	e1a05001 	mov	r5, r1
        2e6e70:	e24dd008 	sub	sp, sp, #8	; 0x8
        2e6e74:	e3a00000 	mov	r0, #0	; 0x0
        2e6e78:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        2e6e7c:	e584002c 	str	r0, [r4, #44]	; fField44
        2e6e80:	e1a00004 	mov	r0, r4
        2e6e84:	e3a01001 	mov	r1, #1	; 0x1
        2e6e88:	eb5d6cb9 	bl	1a42174 <TSoupIndex::$ReadRootNode(unsigned char)>
        2e6e8c:	e1b02000 	movs	r2, r0
        2e6e90:	0a000013 	beq	2e6ee4 <TSoupIndex::_BTEnterKey(KeyField *)+0x88>
        2e6e94:	e28d3004 	add	r3, sp, #4	; 0x4
        2e6e98:	e92d0008 	stmdb	sp!, {r3}
        2e6e9c:	e28d3004 	add	r3, sp, #4	; 0x4
        2e6ea0:	e1a01005 	mov	r1, r5
        2e6ea4:	e1a00004 	mov	r0, r4
        2e6ea8:	eb5d645d 	bl	1a40024 <TSoupIndex::$InsertKey(KeyField *, NodeHeader *, unsigned long *, unsigned char *)>
        2e6eac:	e28dd004 	add	sp, sp, #4	; 0x4
        2e6eb0:	e3300000 	teq	r0, #0	; 0x0
        2e6eb4:	0a00000a 	beq	2e6ee4 <TSoupIndex::_BTEnterKey(KeyField *)+0x88>
        2e6eb8:	e5dd0004 	ldrb	r0, [sp, #4]	; fField4
        2e6ebc:	e3300000 	teq	r0, #0	; 0x0
        2e6ec0:	0a000003 	beq	2e6ed4 <TSoupIndex::_BTEnterKey(KeyField *)+0x78>
        2e6ec4:	e1a01005 	mov	r1, r5
        2e6ec8:	e1a00004 	mov	r0, r4
        2e6ecc:	e59d2000 	ldr	r2, [sp]
        2e6ed0:	eb5d5bfb 	bl	1a3dec4 <TSoupIndex::$CreateNewRoot(KeyField *, unsigned long)>
        2e6ed4:	e3a00000 	mov	r0, #0	; 0x0
        2e6ed8:	e584002c 	str	r0, [r4, #44]	; fField44
        2e6edc:	e5b4002c 	ldr	r0, [r4, #44]!	; fField44
        2e6ee0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2e6ee4:	e3a00002 	mov	r0, #2	; 0x2
        2e6ee8:	eafffffa 	b	2e6ed8 <TSoupIndex::_BTEnterKey(KeyField *)+0x7c>
    */
}

/**
 * Symbol: TSoupIndex::_BTRemoveKey(KeyField *)
 * Address: 002e6eec
 */
TSoupIndex::_BTRemoveKey(KeyField *) {
    /*
        2e6eec:	e1a0c00d 	mov	ip, sp
        2e6ef0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2e6ef4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e6ef8:	e1a04000 	mov	r4, r0
        2e6efc:	e1a05001 	mov	r5, r1
        2e6f00:	e3a00000 	mov	r0, #0	; 0x0
        2e6f04:	e56d0004 	strb	r0, [sp, -#4]!	; fField4
        2e6f08:	e1a00004 	mov	r0, r4
        2e6f0c:	e3a01000 	mov	r1, #0	; 0x0
        2e6f10:	eb5d6c97 	bl	1a42174 <TSoupIndex::$ReadRootNode(unsigned char)>
        2e6f14:	e1b06000 	movs	r6, r0
        2e6f18:	0a00001c 	beq	2e6f90 <TSoupIndex::_BTRemoveKey(KeyField *)+0xa4>
        2e6f1c:	e1a0300d 	mov	r3, sp
        2e6f20:	e1a02006 	mov	r2, r6
        2e6f24:	e1a01005 	mov	r1, r5
        2e6f28:	e1a00004 	mov	r0, r4
        2e6f2c:	eb5d5bea 	bl	1a3dedc <TSoupIndex::$DeleteKey(KeyField *, NodeHeader *, unsigned char *)>
        2e6f30:	e1b05000 	movs	r5, r0
        2e6f34:	0a000015 	beq	2e6f90 <TSoupIndex::_BTRemoveKey(KeyField *)+0xa4>
        2e6f38:	e5dd0000 	ldrb	r0, [sp]
        2e6f3c:	e3300000 	teq	r0, #0	; 0x0
        2e6f40:	0a00000f 	beq	2e6f84 <TSoupIndex::_BTRemoveKey(KeyField *)+0x98>
        2e6f44:	e596000a 	ldr	r0, [r6, #10]
        2e6f48:	e1b00840 	movs	r0, r0, asr #16
        2e6f4c:	1a000009 	bne	2e6f78 <TSoupIndex::_BTRemoveKey(KeyField *)+0x8c>
        2e6f50:	e1a01006 	mov	r1, r6
        2e6f54:	e1a00004 	mov	r0, r4
        2e6f58:	eb5d6005 	bl	1a3ef74 <TSoupIndex::$FirstNodeNo(NodeHeader *)>
        2e6f5c:	e1a01000 	mov	r1, r0
        2e6f60:	e1a00004 	mov	r0, r4
        2e6f64:	eb5d709e 	bl	1a431e4 <TSoupIndex::$SetRootNode(unsigned long)>
        2e6f68:	e1a00004 	mov	r0, r4
        2e6f6c:	e5961000 	ldr	r1, [r6]
        2e6f70:	eb5d5bdc 	bl	1a3dee8 <TSoupIndex::$DeleteNode(unsigned long)>
        2e6f74:	ea000002 	b	2e6f84 <TSoupIndex::_BTRemoveKey(KeyField *)+0x98>
        2e6f78:	e1a01006 	mov	r1, r6
        2e6f7c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2e6f80:	eb5d5bdb 	bl	1a3def4 <TNodeCache::$DirtyNode(NodeHeader *)>
        2e6f84:	e3350000 	teq	r5, #0	; 0x0
        2e6f88:	13a00000 	movne	r0, #0	; 0x0
        2e6f8c:	1a000000 	bne	2e6f94 <TSoupIndex::_BTRemoveKey(KeyField *)+0xa8>
        2e6f90:	e3a00002 	mov	r0, #2	; 0x2
        2e6f94:	e584002c 	str	r0, [r4, #44]	; fField44
        2e6f98:	e5b4002c 	ldr	r0, [r4, #44]!	; fField44
        2e6f9c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::ReadRootNode(unsigned char)
 * Address: 002e6fa0
 */
TSoupIndex::ReadRootNode(unsigned char) {
    /*
        2e6fa0:	e1a0c00d 	mov	ip, sp
        2e6fa4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2e6fa8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e6fac:	e1a04000 	mov	r4, r0
        2e6fb0:	e20100ff 	and	r0, r1, #255	; 0xff
        2e6fb4:	e5941010 	ldr	r1, [r4, #16]	; fField16
        2e6fb8:	e3310000 	teq	r1, #0	; 0x0
        2e6fbc:	1a000003 	bne	2e6fd0 <TSoupIndex::ReadRootNode(unsigned char)+0x30>
        2e6fc0:	e3300000 	teq	r0, #0	; 0x0
        2e6fc4:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        2e6fc8:	e1a00004 	mov	r0, r4
        2e6fcc:	eb5d5bbb 	bl	1a3dec0 <TSoupIndex::$CreateFirstRoot(void)>
        2e6fd0:	e5941010 	ldr	r1, [r4, #16]	; fField16
        2e6fd4:	e1a00004 	mov	r0, r4
        2e6fd8:	e3a02000 	mov	r2, #0	; 0x0
        2e6fdc:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        2e6fe0:	ea5d6c60 	b	1a42168 <TSoupIndex::$ReadANode(unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TSoupIndex::SetRootNode(unsigned long)
 * Address: 002e6fe4
 */
TSoupIndex::SetRootNode(unsigned long) {
    /*
        2e6fe4:	e1a0c00d 	mov	ip, sp
        2e6fe8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2e6fec:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e6ff0:	e1a04000 	mov	r4, r0
        2e6ff4:	e5801010 	str	r1, [r0, #16]	; fField16
        2e6ff8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2e6ffc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2e7000:	e594100c 	ldr	r1, [r4, #12]	; fField12
        2e7004:	e590007c 	ldr	r0, [r0, #124]	; fField124
        2e7008:	e1a0200d 	mov	r2, sp
        2e700c:	eb604f3b 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        2e7010:	e3300000 	teq	r0, #0	; 0x0
        2e7014:	1b5d5783 	blne	1a3ce28 <$_OSErr(long)>
        2e7018:	e59d0000 	ldr	r0, [sp]
        2e701c:	e350001c 	cmp	r0, #28	; 0x1c
        2e7020:	83a0001c 	movhi	r0, #28	; 0x1c
        2e7024:	858d0000 	strhi	r0, [sp]
        2e7028:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2e702c:	e594100c 	ldr	r1, [r4, #12]	; fField12
        2e7030:	e2842010 	add	r2, r4, #16	; 0x10
        2e7034:	e59d3000 	ldr	r3, [sp]
        2e7038:	e92d0008 	stmdb	sp!, {r3}
        2e703c:	e590007c 	ldr	r0, [r0, #124]	; fField124
        2e7040:	e1a03002 	mov	r3, r2
        2e7044:	e3a02000 	mov	r2, #0	; 0x0
        2e7048:	eb608d2c 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        2e704c:	e28dd004 	add	sp, sp, #4	; 0x4
        2e7050:	e3300000 	teq	r0, #0	; 0x0
        2e7054:	1b5d5773 	blne	1a3ce28 <$_OSErr(long)>
        2e7058:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::CompareKeys(SKey const &, SKey const &)
 * Address: 002e705c
 */
TSoupIndex::CompareKeys(SKey const &, SKey const &) {
    /*
        2e705c:	e1a0c00d 	mov	ip, sp
        2e7060:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2e7064:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e7068:	e1a04000 	mov	r4, r0
        2e706c:	e1a0e00f 	mov	lr, pc
        2e7070:	e590f038 	ldr	pc, [r0, #56]	; fField56
        2e7074:	e5d41029 	ldrb	r1, [r4, #41]	; fField41
        2e7078:	e3310000 	teq	r1, #0	; 0x0
        2e707c:	12600000 	rsbne	r0, r0, #0	; 0x0
        2e7080:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::StringKeyCompare(SKey const &, SKey const &)
 * Address: 002e7084
 */
TSoupIndex::StringKeyCompare(SKey const &, SKey const &) {
    /*
        2e7084:	e1a0c00d 	mov	ip, sp
        2e7088:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2e708c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e7090:	e1a0e001 	mov	lr, r1
        2e7094:	e1a0c002 	mov	ip, r2
        2e7098:	e3a03000 	mov	r3, #0	; 0x0
        2e709c:	e3a02000 	mov	r2, #0	; 0x0
        2e70a0:	e5900040 	ldr	r0, [r0, #64]	; fField64
        2e70a4:	e0901002 	adds	r1, r0, r2
        2e70a8:	13a01001 	movne	r1, #1	; 0x1
        2e70ac:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2e70b0:	e59c0000 	ldr	r0, [ip]
        2e70b4:	e1a00400 	mov	r0, r0, lsl #8
        2e70b8:	e1a00c20 	mov	r0, r0, lsr #24
        2e70bc:	e1a030a0 	mov	r3, r0, lsr #1
        2e70c0:	e28c2002 	add	r2, ip, #2	; 0x2
        2e70c4:	e59e0000 	ldr	r0, [lr]
        2e70c8:	e1a00400 	mov	r0, r0, lsl #8
        2e70cc:	e1a00c20 	mov	r0, r0, lsr #24
        2e70d0:	e1a010a0 	mov	r1, r0, lsr #1
        2e70d4:	e28e0002 	add	r0, lr, #2	; 0x2
        2e70d8:	eb6304df 	bl	1ba845c <$CompareUnicodeText(unsigned short const *, long, long, long, TSortingTable const *, unsigned char, long (*)(long, long, void *), void *)>
        2e70dc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::LongKeyCompare(SKey const &, SKey const &)
 * Address: 002e70e0
 */
TSoupIndex::LongKeyCompare(SKey const &, SKey const &) {
    /*
        2e70e0:	e1a0c00d 	mov	ip, sp
        2e70e4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2e70e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e70ec:	e1a04002 	mov	r4, r2
        2e70f0:	e1a00001 	mov	r0, r1
        2e70f4:	eb000b13 	bl	2e9d48 <SKey::operator long( const(void))>
        2e70f8:	e1a05000 	mov	r5, r0
        2e70fc:	e1a00004 	mov	r0, r4
        2e7100:	eb000b10 	bl	2e9d48 <SKey::operator long( const(void))>
        2e7104:	e0450000 	sub	r0, r5, r0
        2e7108:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::CharacterKeyCompare(SKey const &, SKey const &)
 * Address: 002e710c
 */
TSoupIndex::CharacterKeyCompare(SKey const &, SKey const &) {
    /*
        2e710c:	e1a0c00d 	mov	ip, sp
        2e7110:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2e7114:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e7118:	e1a04002 	mov	r4, r2
        2e711c:	e1a00001 	mov	r0, r1
        2e7120:	eb000d55 	bl	2ea67c <SKey::operator unsigned short( const(void))>
        2e7124:	e1a05000 	mov	r5, r0
        2e7128:	e1a00004 	mov	r0, r4
        2e712c:	eb000d52 	bl	2ea67c <SKey::operator unsigned short( const(void))>
        2e7130:	e1550000 	cmp	r5, r0
        2e7134:	b3e00000 	mvnlt	r0, #0	; 0x0
        2e7138:	b91ba830 	ldmltdb	fp, {r4, r5, fp, sp, pc}
        2e713c:	d3a00000 	movle	r0, #0	; 0x0
        2e7140:	c3a00001 	movgt	r0, #1	; 0x1
        2e7144:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::DoubleKeyCompare(SKey const &, SKey const &)
 * Address: 002e7148
 */
TSoupIndex::DoubleKeyCompare(SKey const &, SKey const &) {
    /*
        2e7148:	e1a0c00d 	mov	ip, sp
        2e714c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2e7150:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e7154:	ed2dc203 	sfm	f4, 1, [sp, -#12]!	; fField12
        2e7158:	e1a04002 	mov	r4, r2
        2e715c:	e1a00001 	mov	r0, r1
        2e7160:	eb000f21 	bl	2eadec <SKey::operator double( const(void))>
        2e7164:	ee00c180 	mvfd	f4, f0
        2e7168:	e1a00004 	mov	r0, r4
        2e716c:	eb000f1e 	bl	2eadec <SKey::operator double( const(void))>
        2e7170:	eed4f110 	cmfe	f4, f0
        2e7174:	b3e00000 	mvnlt	r0, #0	; 0x0
        2e7178:	ba000001 	blt	2e7184 <TSoupIndex::DoubleKeyCompare(SKey const &, SKey const &)+0x3c>
        2e717c:	d3a00000 	movle	r0, #0	; 0x0
        2e7180:	c3a00001 	movgt	r0, #1	; 0x1
        2e7184:	ed1bc207 	lfm	f4, 1, [fp, -#28]	; fField28
        2e7188:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::ASCIIKeyCompare(SKey const &, SKey const &)
 * Address: 002e718c
 */
TSoupIndex::ASCIIKeyCompare(SKey const &, SKey const &) {
    /*
        2e718c:	e92d40f0 	stmdb	sp!, {r4, r5, r6, r7, lr}
        2e7190:	e2817002 	add	r7, r1, #2	; 0x2
        2e7194:	e5910000 	ldr	r0, [r1]
        2e7198:	e1a04400 	mov	r4, r0, lsl #8
        2e719c:	e1a04c24 	mov	r4, r4, lsr #24
        2e71a0:	e2825002 	add	r5, r2, #2	; 0x2
        2e71a4:	e5920000 	ldr	r0, [r2]
        2e71a8:	e1a0e400 	mov	lr, r0, lsl #8
        2e71ac:	e1a0ec2e 	mov	lr, lr, lsr #24
        2e71b0:	e3a01000 	mov	r1, #0	; 0x0
        2e71b4:	e3a03000 	mov	r3, #0	; 0x0
        2e71b8:	e3e06000 	mvn	r6, #0	; 0x0
        2e71bc:	e3a00001 	mov	r0, #1	; 0x1
        2e71c0:	ea000010 	b	2e7208 <TSoupIndex::ASCIIKeyCompare(SKey const &, SKey const &)+0x7c>
        2e71c4:	e7d72001 	ldrb	r2, [r7, r1]
        2e71c8:	e3520041 	cmp	r2, #65	; 0x41
        2e71cc:	ba000002 	blt	2e71dc <TSoupIndex::ASCIIKeyCompare(SKey const &, SKey const &)+0x50>
        2e71d0:	e352005a 	cmp	r2, #90	; 0x5a
        2e71d4:	d2822020 	addle	r2, r2, #32	; 0x20
        2e71d8:	d20220ff 	andle	r2, r2, #255	; 0xff
        2e71dc:	e7d5c001 	ldrb	ip, [r5, r1]
        2e71e0:	e35c0041 	cmp	ip, #65	; 0x41
        2e71e4:	ba000002 	blt	2e71f4 <TSoupIndex::ASCIIKeyCompare(SKey const &, SKey const &)+0x68>
        2e71e8:	e35c005a 	cmp	ip, #90	; 0x5a
        2e71ec:	d28cc020 	addle	ip, ip, #32	; 0x20
        2e71f0:	d20cc0ff 	andle	ip, ip, #255	; 0xff
        2e71f4:	e152000c 	cmp	r2, ip
        2e71f8:	ba00000a 	blt	2e7228 <TSoupIndex::ASCIIKeyCompare(SKey const &, SKey const &)+0x9c>
        2e71fc:	c8bd80f0 	ldmgtia	sp!, {r4, r5, r6, r7, pc}
        2e7200:	e2811001 	add	r1, r1, #1	; 0x1
        2e7204:	e2833001 	add	r3, r3, #1	; 0x1
        2e7208:	e1510004 	cmp	r1, r4
        2e720c:	b153000e 	cmplt	r3, lr
        2e7210:	baffffeb 	blt	2e71c4 <TSoupIndex::ASCIIKeyCompare(SKey const &, SKey const &)+0x38>
        2e7214:	e1510004 	cmp	r1, r4
        2e7218:	b8bd80f0 	ldmltia	sp!, {r4, r5, r6, r7, pc}
        2e721c:	e153000e 	cmp	r3, lr
        2e7220:	a3a00000 	movge	r0, #0	; 0x0
        2e7224:	a8bd80f0 	ldmgeia	sp!, {r4, r5, r6, r7, pc}
        2e7228:	e1a00006 	mov	r0, r6
        2e722c:	e8bd80f0 	ldmia	sp!, {r4, r5, r6, r7, pc}
    */
}

/**
 * Symbol: TSoupIndex::RawKeyCompare(SKey const &, SKey const &)
 * Address: 002e7230
 */
TSoupIndex::RawKeyCompare(SKey const &, SKey const &) {
    /*
        2e7230:	e1a0c00d 	mov	ip, sp
        2e7234:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2e7238:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e723c:	e1a00001 	mov	r0, r1
        2e7240:	e1a01002 	mov	r1, r2
        2e7244:	e5902000 	ldr	r2, [r0]
        2e7248:	e1a02402 	mov	r2, r2, lsl #8
        2e724c:	e1a02c22 	mov	r2, r2, lsr #24
        2e7250:	e5913000 	ldr	r3, [r1]
        2e7254:	e1a03403 	mov	r3, r3, lsl #8
        2e7258:	e1a03c23 	mov	r3, r3, lsr #24
        2e725c:	e1520003 	cmp	r2, r3
        2e7260:	b3e04000 	mvnlt	r4, #0	; 0x0
        2e7264:	ba000002 	blt	2e7274 <TSoupIndex::RawKeyCompare(SKey const &, SKey const &)+0x44>
        2e7268:	d3a04000 	movle	r4, #0	; 0x0
        2e726c:	c1a02003 	movgt	r2, r3
        2e7270:	c3a04001 	movgt	r4, #1	; 0x1
        2e7274:	e2811002 	add	r1, r1, #2	; 0x2
        2e7278:	e2800002 	add	r0, r0, #2	; 0x2
        2e727c:	eb6335f2 	bl	1bb4a4c <$memcmp>
        2e7280:	e3300000 	teq	r0, #0	; 0x0
        2e7284:	01a00004 	moveq	r0, r4
        2e7288:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::MultiKeyCompare(SKey const &, SKey const &)
 * Address: 002e728c
 */
TSoupIndex::MultiKeyCompare(SKey const &, SKey const &) {
    /*
        2e728c:	e1a0c00d 	mov	ip, sp
        2e7290:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2e7294:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e7298:	e24dd010 	sub	sp, sp, #16	; 0x10
        2e729c:	e51b0034 	ldr	r0, [fp, -#52]	; fField52
        2e72a0:	e5b09024 	ldr	r9, [r0, #36]!	; fField36
        2e72a4:	e51b0034 	ldr	r0, [fp, -#52]	; fField52
        2e72a8:	e5d08028 	ldrb	r8, [r0, #40]	; fField40
        2e72ac:	e51b1030 	ldr	r1, [fp, -#48]	; fField48
        2e72b0:	e2815002 	add	r5, r1, #2	; 0x2
        2e72b4:	e51b1030 	ldr	r1, [fp, -#48]	; fField48
        2e72b8:	e5911000 	ldr	r1, [r1]
        2e72bc:	e1a01841 	mov	r1, r1, asr #16
        2e72c0:	e20100ff 	and	r0, r1, #255	; 0xff
        2e72c4:	e0800005 	add	r0, r0, r5
        2e72c8:	e58d0004 	str	r0, [sp, #4]	; fField4
        2e72cc:	e51b202c 	ldr	r2, [fp, -#44]	; fField44
        2e72d0:	e2824002 	add	r4, r2, #2	; 0x2
        2e72d4:	e51b202c 	ldr	r2, [fp, -#44]	; fField44
        2e72d8:	e5920000 	ldr	r0, [r2]
        2e72dc:	e1a00840 	mov	r0, r0, asr #16
        2e72e0:	e20020ff 	and	r2, r0, #255	; 0xff
        2e72e4:	e0822004 	add	r2, r2, r4
        2e72e8:	e1a01441 	mov	r1, r1, asr #8
        2e72ec:	e20170ff 	and	r7, r1, #255	; 0xff
        2e72f0:	e1a00440 	mov	r0, r0, asr #8
        2e72f4:	e20060ff 	and	r6, r0, #255	; 0xff
        2e72f8:	e58d2000 	str	r2, [sp]
        2e72fc:	e59f3044 	ldr	r3, [pc, #44]	; 2e7348 <TSoupIndex::MultiKeyCompare(SKey const &, SKey const &)+0xbc>	; fField44
        2e7300:	e58d300c 	str	r3, [sp, #12]	; fField12
        2e7304:	e59f1040 	ldr	r1, [pc, #40]	; 2e734c <TSoupIndex::MultiKeyCompare(SKey const &, SKey const &)+0xc0>	; fField40
        2e7308:	e58d1008 	str	r1, [sp, #8]	; fField8
        2e730c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2e7310:	e1350000 	teq	r5, r0
        2e7314:	e59d0000 	ldr	r0, [sp]
        2e7318:	1a00000e 	bne	2e7358 <TSoupIndex::MultiKeyCompare(SKey const &, SKey const &)+0xcc>
        2e731c:	e1340000 	teq	r4, r0
        2e7320:	03a00000 	moveq	r0, #0	; 0x0
        2e7324:	0a000045 	beq	2e7440 <TSoupIndex::MultiKeyCompare(SKey const &, SKey const &)+0x1b4>
        2e7328:	e51b1030 	ldr	r1, [fp, -#48]	; fField48
        2e732c:	e5910000 	ldr	r0, [r1]
        2e7330:	e1a00820 	mov	r0, r0, lsr #16
        2e7334:	e1a00440 	mov	r0, r0, asr #8
        2e7338:	e3100080 	tst	r0, #128	; 0x80
        2e733c:	0a000003 	beq	2e7350 <TSoupIndex::MultiKeyCompare(SKey const &, SKey const &)+0xc4>
        2e7340:	e3a00001 	mov	r0, #1	; 0x1
        2e7344:	ea00003d 	b	2e7440 <TSoupIndex::MultiKeyCompare(SKey const &, SKey const &)+0x1b4>
        2e7348:	0c105414 	ldceq	4, cr5, [r0], -#80
        2e734c:	0c105430 	ldceq	4, cr5, [r0], -#192
        2e7350:	e3e00000 	mvn	r0, #0	; 0x0
        2e7354:	ea000039 	b	2e7440 <TSoupIndex::MultiKeyCompare(SKey const &, SKey const &)+0x1b4>
        2e7358:	e1340000 	teq	r4, r0
        2e735c:	1a000006 	bne	2e737c <TSoupIndex::MultiKeyCompare(SKey const &, SKey const &)+0xf0>
        2e7360:	e51b202c 	ldr	r2, [fp, -#44]	; fField44
        2e7364:	e5920000 	ldr	r0, [r2]
        2e7368:	e1a00820 	mov	r0, r0, lsr #16
        2e736c:	e1a00440 	mov	r0, r0, asr #8
        2e7370:	e3100080 	tst	r0, #128	; 0x80
        2e7374:	0afffff1 	beq	2e7340 <TSoupIndex::MultiKeyCompare(SKey const &, SKey const &)+0xb4>
        2e7378:	eafffff4 	b	2e7350 <TSoupIndex::MultiKeyCompare(SKey const &, SKey const &)+0xc4>
        2e737c:	e1870006 	orr	r0, r7, r6
        2e7380:	e3100001 	tst	r0, #1	; 0x1
        2e7384:	0a000006 	beq	2e73a4 <TSoupIndex::MultiKeyCompare(SKey const &, SKey const &)+0x118>
        2e7388:	e3170001 	tst	r7, #1	; 0x1
        2e738c:	03a00001 	moveq	r0, #1	; 0x1
        2e7390:	0a000028 	beq	2e7438 <TSoupIndex::MultiKeyCompare(SKey const &, SKey const &)+0x1ac>
        2e7394:	e3160001 	tst	r6, #1	; 0x1
        2e7398:	03e00000 	mvneq	r0, #0	; 0x0
        2e739c:	0a000025 	beq	2e7438 <TSoupIndex::MultiKeyCompare(SKey const &, SKey const &)+0x1ac>
        2e73a0:	ea000027 	b	2e7444 <TSoupIndex::MultiKeyCompare(SKey const &, SKey const &)+0x1b8>
        2e73a4:	e209a00f 	and	sl, r9, #15	; 0xf
        2e73a8:	e1a02004 	mov	r2, r4
        2e73ac:	e1a01005 	mov	r1, r5
        2e73b0:	e51b0034 	ldr	r0, [fp, -#52]	; fField52
        2e73b4:	e59d300c 	ldr	r3, [sp, #12]	; fField12
        2e73b8:	e1a0e00f 	mov	lr, pc
        2e73bc:	e793f10a 	ldr	pc, [r3, sl, lsl #2]	; fField2
        2e73c0:	e3300000 	teq	r0, #0	; 0x0
        2e73c4:	1a000019 	bne	2e7430 <TSoupIndex::MultiKeyCompare(SKey const &, SKey const &)+0x1a4>
        2e73c8:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        2e73cc:	e791108a 	ldr	r1, [r1, sl, lsl #1]	; fField1
        2e73d0:	e1a01841 	mov	r1, r1, asr #16
        2e73d4:	e3310000 	teq	r1, #0	; 0x0
        2e73d8:	1a000012 	bne	2e7428 <TSoupIndex::MultiKeyCompare(SKey const &, SKey const &)+0x19c>
        2e73dc:	e5951000 	ldr	r1, [r5]
        2e73e0:	e1a01821 	mov	r1, r1, lsr #16
        2e73e4:	e2811002 	add	r1, r1, #2	; 0x2
        2e73e8:	e1a01801 	mov	r1, r1, lsl #16
        2e73ec:	e1a01841 	mov	r1, r1, asr #16
        2e73f0:	e3110001 	tst	r1, #1	; 0x1
        2e73f4:	12811001 	addne	r1, r1, #1	; 0x1
        2e73f8:	e1a01801 	mov	r1, r1, lsl #16
        2e73fc:	e0855841 	add	r5, r5, r1, asr #16
        2e7400:	e5941000 	ldr	r1, [r4]
        2e7404:	e1a01821 	mov	r1, r1, lsr #16
        2e7408:	e2811002 	add	r1, r1, #2	; 0x2
        2e740c:	e1a01801 	mov	r1, r1, lsl #16
        2e7410:	e1a01841 	mov	r1, r1, asr #16
        2e7414:	e3110001 	tst	r1, #1	; 0x1
        2e7418:	12811001 	addne	r1, r1, #1	; 0x1
        2e741c:	e1a01801 	mov	r1, r1, lsl #16
        2e7420:	e0844841 	add	r4, r4, r1, asr #16
        2e7424:	ea000001 	b	2e7430 <TSoupIndex::MultiKeyCompare(SKey const &, SKey const &)+0x1a4>
        2e7428:	e0855001 	add	r5, r5, r1
        2e742c:	e0844001 	add	r4, r4, r1
        2e7430:	e3300000 	teq	r0, #0	; 0x0
        2e7434:	0a000002 	beq	2e7444 <TSoupIndex::MultiKeyCompare(SKey const &, SKey const &)+0x1b8>
        2e7438:	e3180001 	tst	r8, #1	; 0x1
        2e743c:	02600000 	rsbeq	r0, r0, #0	; 0x0
        2e7440:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2e7444:	e1a09249 	mov	r9, r9, asr #4
        2e7448:	e1a080c8 	mov	r8, r8, asr #1
        2e744c:	e1a070c7 	mov	r7, r7, asr #1
        2e7450:	e1a060c6 	mov	r6, r6, asr #1
        2e7454:	eaffffac 	b	2e730c <TSoupIndex::MultiKeyCompare(SKey const &, SKey const &)+0x80>
    */
}

/**
 * Symbol: Create__10TSoupIndexSFP13TStoreWrapperP9IndexInfo
 * Address: 002e7458
 */
void TSoupIndex::Create() {
    /*
        2e7458:	e1a0c00d 	mov	ip, sp
        2e745c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2e7460:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e7464:	e3a02000 	mov	r2, #0	; 0x0
        2e7468:	e3a03c02 	mov	r3, #512	; 0x200
        2e746c:	e881000c 	stmia	r1, {r2, r3}
        2e7470:	e5c1201b 	strb	r2, [r1, #27]
        2e7474:	e5c1201a 	strb	r2, [r1, #26]
        2e7478:	e24dd004 	sub	sp, sp, #4	; 0x4
        2e747c:	e590007c 	ldr	r0, [r0, #124]	; fField124
        2e7480:	e1a0300d 	mov	r3, sp
        2e7484:	e3a0201c 	mov	r2, #28	; 0x1c
        2e7488:	eb027ddf 	bl	386c0c <TStore::NewObject(char *, long, unsigned long *)>
        2e748c:	e3300000 	teq	r0, #0	; 0x0
        2e7490:	1b5d5664 	blne	1a3ce28 <$_OSErr(long)>
        2e7494:	e49d0004 	ldr	r0, [sp], #4	; fField4
        2e7498:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::ReadInfo(void)
 * Address: 002e749c
 */
TSoupIndex::ReadInfo(void) {
    /*
        2e749c:	e1a0c00d 	mov	ip, sp
        2e74a0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2e74a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e74a8:	e1a04000 	mov	r4, r0
        2e74ac:	e24dd004 	sub	sp, sp, #4	; 0x4
        2e74b0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2e74b4:	e594100c 	ldr	r1, [r4, #12]	; fField12
        2e74b8:	e590007c 	ldr	r0, [r0, #124]	; fField124
        2e74bc:	e1a0200d 	mov	r2, sp
        2e74c0:	eb604e0e 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        2e74c4:	e3300000 	teq	r0, #0	; 0x0
        2e74c8:	1a00000e 	bne	2e7508 <TSoupIndex::ReadInfo(void)+0x6c>
        2e74cc:	e3a02000 	mov	r2, #0	; 0x0
        2e74d0:	e59d0000 	ldr	r0, [sp]
        2e74d4:	e350001c 	cmp	r0, #28	; 0x1c
        2e74d8:	95c42029 	strlsb	r2, [r4, #41]	; fField41
        2e74dc:	83a0001c 	movhi	r0, #28	; 0x1c
        2e74e0:	858d0000 	strhi	r0, [sp]
        2e74e4:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2e74e8:	e594100c 	ldr	r1, [r4, #12]	; fField12
        2e74ec:	e284c010 	add	ip, r4, #16	; 0x10
        2e74f0:	e59d3000 	ldr	r3, [sp]
        2e74f4:	e92d0008 	stmdb	sp!, {r3}
        2e74f8:	e590007c 	ldr	r0, [r0, #124]	; fField124
        2e74fc:	e1a0300c 	mov	r3, ip
        2e7500:	eb606b0e 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        2e7504:	e28dd004 	add	sp, sp, #4	; 0x4
        2e7508:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::Init(TStoreWrapper *, unsigned long, TSortingTable const *)
 * Address: 002e750c
 */
TSoupIndex::Init(TStoreWrapper *, unsigned long, TSortingTable const *) {
    /*
        2e750c:	e1a0c00d 	mov	ip, sp
        2e7510:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2e7514:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e7518:	e1a04000 	mov	r4, r0
        2e751c:	e5801004 	str	r1, [r0, #4]	; fField4
        2e7520:	e580200c 	str	r2, [r0, #12]	; fField12
        2e7524:	e5803040 	str	r3, [r0, #64]	; fField64
        2e7528:	e2810080 	add	r0, r1, #128	; 0x80
        2e752c:	e5840008 	str	r0, [r4, #8]	; fField8
        2e7530:	e1a00004 	mov	r0, r4
        2e7534:	eb5d8c05 	bl	1a4a550 <TSoupIndex::$ReadInfo(void)>
        2e7538:	e3300000 	teq	r0, #0	; 0x0
        2e753c:	1b5d5639 	blne	1a3ce28 <$_OSErr(long)>
        2e7540:	e3a00000 	mov	r0, #0	; 0x0
        2e7544:	e584002c 	str	r0, [r4, #44]	; fField44
        2e7548:	e5941018 	ldr	r1, [r4, #24]	; fField24
        2e754c:	e59f2030 	ldr	r2, [pc, #30]	; 2e7584 <TSoupIndex::Init(TStoreWrapper *, unsigned long, TSortingTable const *)+0x78>
        2e7550:	e7920101 	ldr	r0, [r2, r1, lsl #2]	; fField2
        2e7554:	e5840038 	str	r0, [r4, #56]	; fField56
        2e7558:	e594001c 	ldr	r0, [r4, #28]	; fField28
        2e755c:	e7922100 	ldr	r2, [r2, r0, lsl #2]	; fField2
        2e7560:	e584203c 	str	r2, [r4, #60]	; fField60
        2e7564:	e59f201c 	ldr	r2, [pc, #1c]	; 2e7588 <TSoupIndex::Init(TStoreWrapper *, unsigned long, TSortingTable const *)+0x7c>	; fField1
        2e7568:	e7921081 	ldr	r1, [r2, r1, lsl #1]	; fField1
        2e756c:	e1a01841 	mov	r1, r1, asr #16
        2e7570:	e5841030 	str	r1, [r4, #48]	; fField48
        2e7574:	e7920080 	ldr	r0, [r2, r0, lsl #1]	; fField1
        2e7578:	e1a00840 	mov	r0, r0, asr #16
        2e757c:	e5a40034 	str	r0, [r4, #52]!	; fField52
        2e7580:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2e7584:	0c105414 	ldceq	4, cr5, [r0], -#80
        2e7588:	0c105430 	ldceq	4, cr5, [r0], -#192
    */
}

/**
 * Symbol: TSoupIndex::__dt(void)
 * Address: 002e758c
 */
TSoupIndex::~TSoupIndex(void) {
    /*
        2e758c:	e59f200c 	ldr	r2, [pc, #c]	; 2e75a0 <TSoupIndex::__dt(void)+0x14>
        2e7590:	e3110001 	tst	r1, #1	; 0x1
        2e7594:	e5802000 	str	r2, [r0]
        2e7598:	1a639850 	bne	1bcd6e0 <$__dl(void *)>
        2e759c:	e1a0f00e 	mov	pc, lr
        2e75a0:	0001ae44 	andeq	sl, r1, r4, asr #28
    */
}

/**
 * Symbol: TSoupIndex::StoreAborted(void)
 * Address: 002e75a4
 */
TSoupIndex::StoreAborted(void) {
    /*
        2e75a4:	e1a0c00d 	mov	ip, sp
        2e75a8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2e75ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e75b0:	e1a04000 	mov	r4, r0
        2e75b4:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2e75b8:	e1a01004 	mov	r1, r4
        2e75bc:	eb5d561a 	bl	1a3ce2c <TNodeCache::$Abort(TSoupIndex *)>
        2e75c0:	e1a00004 	mov	r0, r4
        2e75c4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        2e75c8:	ea5d8be0 	b	1a4a550 <TSoupIndex::$ReadInfo(void)>
    */
}

/**
 * Symbol: TSoupIndex::Add(SKey *, SKey *)
 * Address: 002e75cc
 */
TSoupIndex::Add(SKey *, SKey *) {
    /*
        2e75cc:	e1a0c00d 	mov	ip, sp
        2e75d0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2e75d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e75d8:	e1a04000 	mov	r4, r0
        2e75dc:	e1a03002 	mov	r3, r2
        2e75e0:	e1a02001 	mov	r2, r1
        2e75e4:	e59f5038 	ldr	r5, [pc, #38]	; 2e7624 <TSoupIndex::Add(SKey *, SKey *)+0x58>
        2e75e8:	e595102c 	ldr	r1, [r5, #44]	; fField44
        2e75ec:	eb5d629b 	bl	1a40060 <TSoupIndex::$kfAssembleKeyField(KeyField *, void *, void *)>
        2e75f0:	e3a00000 	mov	r0, #0	; 0x0
        2e75f4:	e52d006c 	str	r0, [sp, -#108]!
        2e75f8:	e28d0008 	add	r0, sp, #8	; 0x8
        2e75fc:	eb632cdc 	bl	1bb2974 <$setjmp>
        2e7600:	e3300000 	teq	r0, #0	; 0x0
        2e7604:	1a000007 	bne	2e7628 <TSoupIndex::Add(SKey *, SKey *)+0x5c>
        2e7608:	e1a0000d 	mov	r0, sp
        2e760c:	eb63e29a 	bl	1be007c <$AddExceptionHandler>
        2e7610:	e1a00004 	mov	r0, r4
        2e7614:	e5b5102c 	ldr	r1, [r5, #44]!	; fField44
        2e7618:	eb5d55fc 	bl	1a3ce10 <TSoupIndex::$_BTEnterKey(KeyField *)>
        2e761c:	e1a05000 	mov	r5, r0
        2e7620:	ea000001 	b	2e762c <TSoupIndex::Add(SKey *, SKey *)+0x60>
        2e7624:	0c105414 	ldceq	4, cr5, [r0], -#80
        2e7628:	e59d5064 	ldr	r5, [sp, #100]
        2e762c:	e1a0000d 	mov	r0, sp
        2e7630:	eb63e6a0 	bl	1be10b8 <$ExitHandler>
        2e7634:	e28dd06c 	add	sp, sp, #108	; 0x6c
        2e7638:	e3350000 	teq	r5, #0	; 0x0
        2e763c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2e7640:	e1a01004 	mov	r1, r4
        2e7644:	0a000001 	beq	2e7650 <TSoupIndex::Add(SKey *, SKey *)+0x84>
        2e7648:	eb5d55f7 	bl	1a3ce2c <TNodeCache::$Abort(TSoupIndex *)>
        2e764c:	ea000000 	b	2e7654 <TSoupIndex::Add(SKey *, SKey *)+0x88>
        2e7650:	eb5d8fd7 	bl	1a4b5b4 <TNodeCache::$Commit(TSoupIndex *)>
        2e7654:	e1a00005 	mov	r0, r5
        2e7658:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::AddInTransaction(SKey *, SKey *)
 * Address: 002e765c
 */
TSoupIndex::AddInTransaction(SKey *, SKey *) {
    /*
        2e765c:	e1a0c00d 	mov	ip, sp
        2e7660:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2e7664:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e7668:	e1a04000 	mov	r4, r0
        2e766c:	e1a03002 	mov	r3, r2
        2e7670:	e1a02001 	mov	r2, r1
        2e7674:	e59f5030 	ldr	r5, [pc, #30]	; 2e76ac <TSoupIndex::AddInTransaction(SKey *, SKey *)+0x50>
        2e7678:	e595102c 	ldr	r1, [r5, #44]	; fField44
        2e767c:	eb5d6277 	bl	1a40060 <TSoupIndex::$kfAssembleKeyField(KeyField *, void *, void *)>
        2e7680:	e1a00004 	mov	r0, r4
        2e7684:	e5b5102c 	ldr	r1, [r5, #44]!	; fField44
        2e7688:	eb5d55e0 	bl	1a3ce10 <TSoupIndex::$_BTEnterKey(KeyField *)>
        2e768c:	e1a05000 	mov	r5, r0
        2e7690:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2e7694:	e5901000 	ldr	r1, [r0]
        2e7698:	e3510020 	cmp	r1, #32	; 0x20
        2e769c:	c1a01004 	movgt	r1, r4
        2e76a0:	cb5d8fc3 	blgt	1a4b5b4 <TNodeCache::$Commit(TSoupIndex *)>
        2e76a4:	e1a00005 	mov	r0, r5
        2e76a8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2e76ac:	0c105414 	ldceq	4, cr5, [r0], -#80
    */
}

/**
 * Symbol: TSoupIndex::Find(SKey *, SKey *, SKey *, unsigned char)
 * Address: 002e76b0
 */
TSoupIndex::Find(SKey *, SKey *, SKey *, unsigned char) {
    /*
        2e76b0:	e1a0c00d 	mov	ip, sp
        2e76b4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2e76b8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2e76bc:	e24cb014 	sub	fp, ip, #20	; 0x14
        2e76c0:	e1a04000 	mov	r4, r0
        2e76c4:	e1a05001 	mov	r5, r1
        2e76c8:	e1a06002 	mov	r6, r2
        2e76cc:	e59b0014 	ldr	r0, [fp, #20]	; fField20
        2e76d0:	e20070ff 	and	r7, r0, #255	; 0xff
        2e76d4:	e5940010 	ldr	r0, [r4, #16]	; fField16
        2e76d8:	e3300000 	teq	r0, #0	; 0x0
        2e76dc:	03a00003 	moveq	r0, #3	; 0x3
        2e76e0:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2e76e4:	e1a02005 	mov	r2, r5
        2e76e8:	e59f80dc 	ldr	r8, [pc, #dc]	; 2e77cc <TSoupIndex::Find(SKey *, SKey *, SKey *, unsigned char)+0x11c>
        2e76ec:	e1a00004 	mov	r0, r4
        2e76f0:	e3a03000 	mov	r3, #0	; 0x0
        2e76f4:	e598102c 	ldr	r1, [r8, #44]	; fField44
        2e76f8:	eb5d6258 	bl	1a40060 <TSoupIndex::$kfAssembleKeyField(KeyField *, void *, void *)>
        2e76fc:	e3a09000 	mov	r9, #0	; 0x0
        2e7700:	e5940040 	ldr	r0, [r4, #64]	; fField64
        2e7704:	e3300000 	teq	r0, #0	; 0x0
        2e7708:	0a00000b 	beq	2e773c <TSoupIndex::Find(SKey *, SKey *, SKey *, unsigned char)+0x8c>
        2e770c:	e3370000 	teq	r7, #0	; 0x0
        2e7710:	05941018 	ldreq	r1, [r4, #24]	; fField24
        2e7714:	03310000 	teqeq	r1, #0	; 0x0
        2e7718:	1a000007 	bne	2e773c <TSoupIndex::Find(SKey *, SKey *, SKey *, unsigned char)+0x8c>
        2e771c:	e5951000 	ldr	r1, [r5]
        2e7720:	e1a01401 	mov	r1, r1, lsl #8
        2e7724:	e1a01c21 	mov	r1, r1, lsr #24
        2e7728:	e1a090a1 	mov	r9, r1, lsr #1
        2e772c:	e598102c 	ldr	r1, [r8, #44]	; fField44
        2e7730:	e2811004 	add	r1, r1, #4	; 0x4
        2e7734:	e1a02009 	mov	r2, r9
        2e7738:	eb630349 	bl	1ba8464 <TSortingTable::$ConvertTextToLowestSort( const(unsigned short *, long))>
        2e773c:	e3a07000 	mov	r7, #0	; 0x0
        2e7740:	e3a0a000 	mov	sl, #0	; 0x0
        2e7744:	e3a00000 	mov	r0, #0	; 0x0
        2e7748:	e52d006c 	str	r0, [sp, -#108]!
        2e774c:	e28d0008 	add	r0, sp, #8	; 0x8
        2e7750:	eb632c87 	bl	1bb2974 <$setjmp>
        2e7754:	e3300000 	teq	r0, #0	; 0x0
        2e7758:	1a00001f 	bne	2e77dc <TSoupIndex::Find(SKey *, SKey *, SKey *, unsigned char)+0x12c>
        2e775c:	e1a0000d 	mov	r0, sp
        2e7760:	eb63e245 	bl	1be007c <$AddExceptionHandler>
        2e7764:	e24dd004 	sub	sp, sp, #4	; 0x4
        2e7768:	e1a00004 	mov	r0, r4
        2e776c:	e3a01000 	mov	r1, #0	; 0x0
        2e7770:	eb5d6a7f 	bl	1a42174 <TSoupIndex::$ReadRootNode(unsigned char)>
        2e7774:	e58d0000 	str	r0, [sp]
        2e7778:	e3300000 	teq	r0, #0	; 0x0
        2e777c:	0a000013 	beq	2e77d0 <TSoupIndex::Find(SKey *, SKey *, SKey *, unsigned char)+0x120>
        2e7780:	e24dd004 	sub	sp, sp, #4	; 0x4
        2e7784:	e1a0300d 	mov	r3, sp
        2e7788:	e28d2004 	add	r2, sp, #4	; 0x4
        2e778c:	e1a00004 	mov	r0, r4
        2e7790:	e598102c 	ldr	r1, [r8, #44]	; fField44
        2e7794:	eb5d8f8e 	bl	1a4b5d4 <TSoupIndex::$Search(KeyField *, NodeHeader **, long *)>
        2e7798:	e3300000 	teq	r0, #0	; 0x0
        2e779c:	1a000005 	bne	2e77b8 <TSoupIndex::Find(SKey *, SKey *, SKey *, unsigned char)+0x108>
        2e77a0:	e598002c 	ldr	r0, [r8, #44]	; fField44
        2e77a4:	e5900000 	ldr	r0, [r0]
        2e77a8:	e1a00100 	mov	r0, r0, lsl #2
        2e77ac:	e1b00920 	movs	r0, r0, lsr #18
        2e77b0:	03a07003 	moveq	r7, #3	; 0x3
        2e77b4:	13a07002 	movne	r7, #2	; 0x2
        2e77b8:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2e77bc:	e1a01004 	mov	r1, r4
        2e77c0:	eb5d8f7b 	bl	1a4b5b4 <TNodeCache::$Commit(TSoupIndex *)>
        2e77c4:	e28dd004 	add	sp, sp, #4	; 0x4
        2e77c8:	ea000001 	b	2e77d4 <TSoupIndex::Find(SKey *, SKey *, SKey *, unsigned char)+0x124>
        2e77cc:	0c105414 	ldceq	4, cr5, [r0], -#80
        2e77d0:	e3a07002 	mov	r7, #2	; 0x2
        2e77d4:	e28dd004 	add	sp, sp, #4	; 0x4
        2e77d8:	ea000004 	b	2e77f0 <TSoupIndex::Find(SKey *, SKey *, SKey *, unsigned char)+0x140>
        2e77dc:	e3a0a001 	mov	sl, #1	; 0x1
        2e77e0:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2e77e4:	e1a01004 	mov	r1, r4
        2e77e8:	eb5d558f 	bl	1a3ce2c <TNodeCache::$Abort(TSoupIndex *)>
        2e77ec:	e59d7064 	ldr	r7, [sp, #100]
        2e77f0:	e1a0000d 	mov	r0, sp
        2e77f4:	eb63e62f 	bl	1be10b8 <$ExitHandler>
        2e77f8:	e28dd06c 	add	sp, sp, #108	; 0x6c
        2e77fc:	e33a0000 	teq	sl, #0	; 0x0
        2e7800:	1a00001f 	bne	2e7884 <TSoupIndex::Find(SKey *, SKey *, SKey *, unsigned char)+0x1d4>
        2e7804:	e3390000 	teq	r9, #0	; 0x0
        2e7808:	0a000015 	beq	2e7864 <TSoupIndex::Find(SKey *, SKey *, SKey *, unsigned char)+0x1b4>
        2e780c:	e3370002 	teq	r7, #2	; 0x2
        2e7810:	1a000013 	bne	2e7864 <TSoupIndex::Find(SKey *, SKey *, SKey *, unsigned char)+0x1b4>
        2e7814:	e3a03000 	mov	r3, #0	; 0x0
        2e7818:	e3a02000 	mov	r2, #0	; 0x0
        2e781c:	e3a01000 	mov	r1, #0	; 0x0
        2e7820:	e5940040 	ldr	r0, [r4, #64]	; fField64
        2e7824:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2e7828:	e598002c 	ldr	r0, [r8, #44]	; fField44
        2e782c:	e2801002 	add	r1, r0, #2	; 0x2
        2e7830:	e1a00004 	mov	r0, r4
        2e7834:	eb5d6617 	bl	1a41098 <TSoupIndex::$kfSizeOfKey(void *)>
        2e7838:	e1a000a0 	mov	r0, r0, lsr #1
        2e783c:	e2403001 	sub	r3, r0, #1	; 0x1
        2e7840:	e2850002 	add	r0, r5, #2	; 0x2
        2e7844:	e598102c 	ldr	r1, [r8, #44]	; fField44
        2e7848:	e2812004 	add	r2, r1, #4	; 0x4
        2e784c:	e1a01009 	mov	r1, r9
        2e7850:	eb630301 	bl	1ba845c <$CompareUnicodeText(unsigned short const *, long, long, long, TSortingTable const *, unsigned char, long (*)(long, long, void *), void *)>
        2e7854:	e28dd010 	add	sp, sp, #16	; 0x10
        2e7858:	e3300000 	teq	r0, #0	; 0x0
        2e785c:	03a07000 	moveq	r7, #0	; 0x0
        2e7860:	ea000002 	b	2e7870 <TSoupIndex::Find(SKey *, SKey *, SKey *, unsigned char)+0x1c0>
        2e7864:	e3370000 	teq	r7, #0	; 0x0
        2e7868:	13370002 	teqne	r7, #2	; 0x2
        2e786c:	1a000004 	bne	2e7884 <TSoupIndex::Find(SKey *, SKey *, SKey *, unsigned char)+0x1d4>
        2e7870:	e1a02006 	mov	r2, r6
        2e7874:	e59b3010 	ldr	r3, [fp, #16]	; fField16
        2e7878:	e1a00004 	mov	r0, r4
        2e787c:	e5b8102c 	ldr	r1, [r8, #44]!	; fField44
        2e7880:	eb5d8f4e 	bl	1a4b5c0 <TSoupIndex::$kfDisassembleKeyField(KeyField *, SKey *, SKey *)>
        2e7884:	e1a00007 	mov	r0, r7
        2e7888:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::FindAndGetState(KeyField *, IndexState *)
 * Address: 002e788c
 */
TSoupIndex::FindAndGetState(KeyField *, IndexState *) {
    /*
        2e788c:	e1a0c00d 	mov	ip, sp
        2e7890:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2e7894:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e7898:	e1a05000 	mov	r5, r0
        2e789c:	e1a06001 	mov	r6, r1
        2e78a0:	e1a04002 	mov	r4, r2
        2e78a4:	e3a01000 	mov	r1, #0	; 0x0
        2e78a8:	eb5d6a31 	bl	1a42174 <TSoupIndex::$ReadRootNode(unsigned char)>
        2e78ac:	e3a07003 	mov	r7, #3	; 0x3
        2e78b0:	e5840000 	str	r0, [r4]
        2e78b4:	e3300000 	teq	r0, #0	; 0x0
        2e78b8:	0a00000b 	beq	2e78ec <TSoupIndex::FindAndGetState(KeyField *, IndexState *)+0x60>
        2e78bc:	e2843004 	add	r3, r4, #4	; 0x4
        2e78c0:	e1a02004 	mov	r2, r4
        2e78c4:	e1a01006 	mov	r1, r6
        2e78c8:	e1a00005 	mov	r0, r5
        2e78cc:	eb5d8f40 	bl	1a4b5d4 <TSoupIndex::$Search(KeyField *, NodeHeader **, long *)>
        2e78d0:	e3300000 	teq	r0, #0	; 0x0
        2e78d4:	1a000006 	bne	2e78f4 <TSoupIndex::FindAndGetState(KeyField *, IndexState *)+0x68>
        2e78d8:	e5960000 	ldr	r0, [r6]
        2e78dc:	e1a00100 	mov	r0, r0, lsl #2
        2e78e0:	e1b00920 	movs	r0, r0, lsr #18
        2e78e4:	13a06002 	movne	r6, #2	; 0x2
        2e78e8:	1a000002 	bne	2e78f8 <TSoupIndex::FindAndGetState(KeyField *, IndexState *)+0x6c>
        2e78ec:	e1a00007 	mov	r0, r7
        2e78f0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2e78f4:	e3a06000 	mov	r6, #0	; 0x0
        2e78f8:	e1a00005 	mov	r0, r5
        2e78fc:	e8940006 	ldmia	r4, {r1, r2}
        2e7900:	eb5d61d2 	bl	1a40050 <TSoupIndex::$KeyFieldAdr(NodeHeader *, long)>
        2e7904:	e5900000 	ldr	r0, [r0]
        2e7908:	e1a00820 	mov	r0, r0, lsr #16
        2e790c:	e1b00740 	movs	r0, r0, asr #14
        2e7910:	13a00001 	movne	r0, #1	; 0x1
        2e7914:	e5c40008 	strb	r0, [r4, #8]	; fField8
        2e7918:	e3a00000 	mov	r0, #0	; 0x0
        2e791c:	e5a4000c 	str	r0, [r4, #12]!	; fField12
        2e7920:	e1a00006 	mov	r0, r6
        2e7924:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::FindLastAndGetState(KeyField *, IndexState *)
 * Address: 002e7928
 */
TSoupIndex::FindLastAndGetState(KeyField *, IndexState *) {
    /*
        2e7928:	e1a0c00d 	mov	ip, sp
        2e792c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2e7930:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e7934:	e1a05000 	mov	r5, r0
        2e7938:	e1a06001 	mov	r6, r1
        2e793c:	e1a04002 	mov	r4, r2
        2e7940:	e3a01000 	mov	r1, #0	; 0x0
        2e7944:	eb5d6a0a 	bl	1a42174 <TSoupIndex::$ReadRootNode(unsigned char)>
        2e7948:	e5840000 	str	r0, [r4]
        2e794c:	e1b01000 	movs	r1, r0
        2e7950:	03a00003 	moveq	r0, #3	; 0x3
        2e7954:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2e7958:	e1a00005 	mov	r0, r5
        2e795c:	eb5d65d1 	bl	1a410a8 <TSoupIndex::$LastNodeNo(NodeHeader *)>
        2e7960:	e1b01000 	movs	r1, r0
        2e7964:	0a000009 	beq	2e7990 <TSoupIndex::FindLastAndGetState(KeyField *, IndexState *)+0x68>
        2e7968:	e5940000 	ldr	r0, [r4]
        2e796c:	e5902000 	ldr	r2, [r0]
        2e7970:	e1a00005 	mov	r0, r5
        2e7974:	eb5d69fb 	bl	1a42168 <TSoupIndex::$ReadANode(unsigned long, unsigned long)>
        2e7978:	e5840000 	str	r0, [r4]
        2e797c:	e1a01000 	mov	r1, r0
        2e7980:	e1a00005 	mov	r0, r5
        2e7984:	eb5d65c7 	bl	1a410a8 <TSoupIndex::$LastNodeNo(NodeHeader *)>
        2e7988:	e1b01000 	movs	r1, r0
        2e798c:	1afffff5 	bne	2e7968 <TSoupIndex::FindLastAndGetState(KeyField *, IndexState *)+0x40>
        2e7990:	e1a00005 	mov	r0, r5
        2e7994:	e5941000 	ldr	r1, [r4]
        2e7998:	eb5d65c3 	bl	1a410ac <TSoupIndex::$LastSlotInNode(NodeHeader *)>
        2e799c:	e5840004 	str	r0, [r4, #4]	; fField4
        2e79a0:	e1a00005 	mov	r0, r5
        2e79a4:	e5941000 	ldr	r1, [r4]
        2e79a8:	eb5d65bd 	bl	1a410a4 <TSoupIndex::$LastKeyField(NodeHeader *)>
        2e79ac:	e1a07000 	mov	r7, r0
        2e79b0:	e1a02006 	mov	r2, r6
        2e79b4:	e1a01000 	mov	r1, r0
        2e79b8:	e1a00005 	mov	r0, r5
        2e79bc:	eb5d65c8 	bl	1a410e4 <TSoupIndex::$MoveKey(KeyField *, KeyField *)>
        2e79c0:	e5971000 	ldr	r1, [r7]
        2e79c4:	e1a01821 	mov	r1, r1, lsr #16
        2e79c8:	e3a00001 	mov	r0, #1	; 0x1
        2e79cc:	e1300741 	teq	r0, r1, asr #14
        2e79d0:	13a00000 	movne	r0, #0	; 0x0
        2e79d4:	03a00001 	moveq	r0, #1	; 0x1
        2e79d8:	e5c40008 	strb	r0, [r4, #8]	; fField8
        2e79dc:	e31000ff 	tst	r0, #255	; 0xff
        2e79e0:	e3a08000 	mov	r8, #0	; 0x0
        2e79e4:	0a000008 	beq	2e7a0c <TSoupIndex::FindLastAndGetState(KeyField *, IndexState *)+0xe4>
        2e79e8:	e584800c 	str	r8, [r4, #12]	; fField12
        2e79ec:	e284200c 	add	r2, r4, #12	; 0xc
        2e79f0:	e1a01007 	mov	r1, r7
        2e79f4:	e1a00005 	mov	r0, r5
        2e79f8:	eb5d8ef1 	bl	1a4b5c4 <TSoupIndex::$LastDupDataAdr(KeyField *, DupNodeHeader **)>
        2e79fc:	e1a02000 	mov	r2, r0
        2e7a00:	e1a01006 	mov	r1, r6
        2e7a04:	e1a00005 	mov	r0, r5
        2e7a08:	eb5d659e 	bl	1a41088 <TSoupIndex::$kfReplaceFirstData(KeyField *, void *)>
        2e7a0c:	e1a00008 	mov	r0, r8
        2e7a10:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::FindPriorAndGetState(KeyField *, unsigned char, IndexState *)
 * Address: 002e7a14
 */
TSoupIndex::FindPriorAndGetState(KeyField *, unsigned char, IndexState *) {
    /*
        2e7a14:	e1a0c00d 	mov	ip, sp
        2e7a18:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2e7a1c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e7a20:	e1a05000 	mov	r5, r0
        2e7a24:	e1a06001 	mov	r6, r1
        2e7a28:	e1a04003 	mov	r4, r3
        2e7a2c:	e20280ff 	and	r8, r2, #255	; 0xff
        2e7a30:	e1a02003 	mov	r2, r3
        2e7a34:	eb5d8acb 	bl	1a4a568 <TSoupIndex::$FindAndGetState(KeyField *, IndexState *)>
        2e7a38:	e1b07000 	movs	r7, r0
        2e7a3c:	1a000018 	bne	2e7aa4 <TSoupIndex::FindPriorAndGetState(KeyField *, unsigned char, IndexState *)+0x90>
        2e7a40:	e3380000 	teq	r8, #0	; 0x0
        2e7a44:	0a000007 	beq	2e7a68 <TSoupIndex::FindPriorAndGetState(KeyField *, unsigned char, IndexState *)+0x54>
        2e7a48:	e1a03004 	mov	r3, r4
        2e7a4c:	e92d0008 	stmdb	sp!, {r3}
        2e7a50:	e1a03006 	mov	r3, r6
        2e7a54:	e1a00005 	mov	r0, r5
        2e7a58:	e3a02000 	mov	r2, #0	; 0x0
        2e7a5c:	e3a01000 	mov	r1, #0	; 0x0
        2e7a60:	eb5d8ac4 	bl	1a4a578 <TSoupIndex::$MoveUsingState(unsigned char, int, KeyField *, IndexState *)>
        2e7a64:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2e7a68:	e5d40008 	ldrb	r0, [r4, #8]	; fField8
        2e7a6c:	e3300000 	teq	r0, #0	; 0x0
        2e7a70:	0a00001f 	beq	2e7af4 <TSoupIndex::FindPriorAndGetState(KeyField *, unsigned char, IndexState *)+0xe0>
        2e7a74:	e1a00005 	mov	r0, r5
        2e7a78:	e8940006 	ldmia	r4, {r1, r2}
        2e7a7c:	eb5d6173 	bl	1a40050 <TSoupIndex::$KeyFieldAdr(NodeHeader *, long)>
        2e7a80:	e1a01000 	mov	r1, r0
        2e7a84:	e284200c 	add	r2, r4, #12	; 0xc
        2e7a88:	e1a00005 	mov	r0, r5
        2e7a8c:	eb5d8ecc 	bl	1a4b5c4 <TSoupIndex::$LastDupDataAdr(KeyField *, DupNodeHeader **)>
        2e7a90:	e1a02000 	mov	r2, r0
        2e7a94:	e1a01006 	mov	r1, r6
        2e7a98:	e1a00005 	mov	r0, r5
        2e7a9c:	eb5d6579 	bl	1a41088 <TSoupIndex::$kfReplaceFirstData(KeyField *, void *)>
        2e7aa0:	ea000013 	b	2e7af4 <TSoupIndex::FindPriorAndGetState(KeyField *, unsigned char, IndexState *)+0xe0>
        2e7aa4:	e3370002 	teq	r7, #2	; 0x2
        2e7aa8:	1a00000a 	bne	2e7ad8 <TSoupIndex::FindPriorAndGetState(KeyField *, unsigned char, IndexState *)+0xc4>
        2e7aac:	e1a03004 	mov	r3, r4
        2e7ab0:	e92d0008 	stmdb	sp!, {r3}
        2e7ab4:	e1a03006 	mov	r3, r6
        2e7ab8:	e1a00005 	mov	r0, r5
        2e7abc:	e3a02000 	mov	r2, #0	; 0x0
        2e7ac0:	e3a01000 	mov	r1, #0	; 0x0
        2e7ac4:	eb5d8aab 	bl	1a4a578 <TSoupIndex::$MoveUsingState(unsigned char, int, KeyField *, IndexState *)>
        2e7ac8:	e28dd004 	add	sp, sp, #4	; 0x4
        2e7acc:	e1b07000 	movs	r7, r0
        2e7ad0:	03a07002 	moveq	r7, #2	; 0x2
        2e7ad4:	ea000006 	b	2e7af4 <TSoupIndex::FindPriorAndGetState(KeyField *, unsigned char, IndexState *)+0xe0>
        2e7ad8:	e3370003 	teq	r7, #3	; 0x3
        2e7adc:	1a000004 	bne	2e7af4 <TSoupIndex::FindPriorAndGetState(KeyField *, unsigned char, IndexState *)+0xe0>
        2e7ae0:	e1a02004 	mov	r2, r4
        2e7ae4:	e1a01006 	mov	r1, r6
        2e7ae8:	e1a00005 	mov	r0, r5
        2e7aec:	eb5d8a9e 	bl	1a4a56c <TSoupIndex::$FindLastAndGetState(KeyField *, IndexState *)>
        2e7af0:	e1a07000 	mov	r7, r0
        2e7af4:	e1a00007 	mov	r0, r7
        2e7af8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::MoveAndGetState(unsigned char, int, KeyField *, IndexState *)
 * Address: 002e7afc
 */
TSoupIndex::MoveAndGetState(unsigned char, int, KeyField *, IndexState *) {
    /*
        2e7afc:	e1a0c00d 	mov	ip, sp
        2e7b00:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2e7b04:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e7b08:	e1a04000 	mov	r4, r0
        2e7b0c:	e1a06002 	mov	r6, r2
        2e7b10:	e1a05003 	mov	r5, r3
        2e7b14:	e20190ff 	and	r9, r1, #255	; 0xff
        2e7b18:	e3a01000 	mov	r1, #0	; 0x0
        2e7b1c:	e59b7004 	ldr	r7, [fp, #4]	; fField4
        2e7b20:	eb5d6993 	bl	1a42174 <TSoupIndex::$ReadRootNode(unsigned char)>
        2e7b24:	e3a0a003 	mov	sl, #3	; 0x3
        2e7b28:	e5870000 	str	r0, [r7]
        2e7b2c:	e3300000 	teq	r0, #0	; 0x0
        2e7b30:	0a000032 	beq	2e7c00 <TSoupIndex::MoveAndGetState(unsigned char, int, KeyField *, IndexState *)+0x104>
        2e7b34:	e2878004 	add	r8, r7, #4	; 0x4
        2e7b38:	e3360001 	teq	r6, #1	; 0x1
        2e7b3c:	1a00000d 	bne	2e7b78 <TSoupIndex::MoveAndGetState(unsigned char, int, KeyField *, IndexState *)+0x7c>
        2e7b40:	e3390000 	teq	r9, #0	; 0x0
        2e7b44:	e1a03008 	mov	r3, r8
        2e7b48:	e1a02007 	mov	r2, r7
        2e7b4c:	e1a01005 	mov	r1, r5
        2e7b50:	e1a00004 	mov	r0, r4
        2e7b54:	0a000001 	beq	2e7b60 <TSoupIndex::MoveAndGetState(unsigned char, int, KeyField *, IndexState *)+0x64>
        2e7b58:	eb5d8e9f 	bl	1a4b5dc <TSoupIndex::$SearchNext(KeyField *, NodeHeader **, long *)>
        2e7b5c:	ea000000 	b	2e7b64 <TSoupIndex::MoveAndGetState(unsigned char, int, KeyField *, IndexState *)+0x68>
        2e7b60:	eb5d8e9e 	bl	1a4b5e0 <TSoupIndex::$SearchPrior(KeyField *, NodeHeader **, long *)>
        2e7b64:	e3700001 	cmn	r0, #1	; 0x1
        2e7b68:	0a000015 	beq	2e7bc4 <TSoupIndex::MoveAndGetState(unsigned char, int, KeyField *, IndexState *)+0xc8>
        2e7b6c:	e3300000 	teq	r0, #0	; 0x0
        2e7b70:	1a000024 	bne	2e7c08 <TSoupIndex::MoveAndGetState(unsigned char, int, KeyField *, IndexState *)+0x10c>
        2e7b74:	ea000021 	b	2e7c00 <TSoupIndex::MoveAndGetState(unsigned char, int, KeyField *, IndexState *)+0x104>
        2e7b78:	e287300c 	add	r3, r7, #12	; 0xc
        2e7b7c:	e3390000 	teq	r9, #0	; 0x0
        2e7b80:	e92d0008 	stmdb	sp!, {r3}
        2e7b84:	e1a03008 	mov	r3, r8
        2e7b88:	e1a02007 	mov	r2, r7
        2e7b8c:	e1a01005 	mov	r1, r5
        2e7b90:	e1a00004 	mov	r0, r4
        2e7b94:	0a000001 	beq	2e7ba0 <TSoupIndex::MoveAndGetState(unsigned char, int, KeyField *, IndexState *)+0xa4>
        2e7b98:	eb5d8e8e 	bl	1a4b5d8 <TSoupIndex::$SearchNextDup(KeyField *, NodeHeader **, long *, DupNodeHeader **)>
        2e7b9c:	ea000000 	b	2e7ba4 <TSoupIndex::MoveAndGetState(unsigned char, int, KeyField *, IndexState *)+0xa8>
        2e7ba0:	eb5d8e8f 	bl	1a4b5e4 <TSoupIndex::$SearchPriorDup(KeyField *, NodeHeader **, long *, DupNodeHeader **)>
        2e7ba4:	e28dd004 	add	sp, sp, #4	; 0x4
        2e7ba8:	e3300000 	teq	r0, #0	; 0x0
        2e7bac:	0a000006 	beq	2e7bcc <TSoupIndex::MoveAndGetState(unsigned char, int, KeyField *, IndexState *)+0xd0>
        2e7bb0:	e3700001 	cmn	r0, #1	; 0x1
        2e7bb4:	13a00001 	movne	r0, #1	; 0x1
        2e7bb8:	15c70008 	strneb	r0, [r7, #8]	; fField8
        2e7bbc:	13a00000 	movne	r0, #0	; 0x0
        2e7bc0:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2e7bc4:	e3a00002 	mov	r0, #2	; 0x2
        2e7bc8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2e7bcc:	e3360002 	teq	r6, #2	; 0x2
        2e7bd0:	0a00000a 	beq	2e7c00 <TSoupIndex::MoveAndGetState(unsigned char, int, KeyField *, IndexState *)+0x104>
        2e7bd4:	e3390000 	teq	r9, #0	; 0x0
        2e7bd8:	e1a03008 	mov	r3, r8
        2e7bdc:	e1a02007 	mov	r2, r7
        2e7be0:	e1a01005 	mov	r1, r5
        2e7be4:	e1a00004 	mov	r0, r4
        2e7be8:	0a000001 	beq	2e7bf4 <TSoupIndex::MoveAndGetState(unsigned char, int, KeyField *, IndexState *)+0xf8>
        2e7bec:	eb5d5cd5 	bl	1a3ef48 <TSoupIndex::$FindNextKey(KeyField *, NodeHeader **, long *)>
        2e7bf0:	ea000000 	b	2e7bf8 <TSoupIndex::MoveAndGetState(unsigned char, int, KeyField *, IndexState *)+0xfc>
        2e7bf4:	eb5d8e75 	bl	1a4b5d0 <TSoupIndex::$FindPriorKey(KeyField *, NodeHeader **, long *)>
        2e7bf8:	e3300000 	teq	r0, #0	; 0x0
        2e7bfc:	1a000001 	bne	2e7c08 <TSoupIndex::MoveAndGetState(unsigned char, int, KeyField *, IndexState *)+0x10c>
        2e7c00:	e1a0000a 	mov	r0, sl
        2e7c04:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2e7c08:	e1a00004 	mov	r0, r4
        2e7c0c:	e8970006 	ldmia	r7, {r1, r2}
        2e7c10:	eb5d610e 	bl	1a40050 <TSoupIndex::$KeyFieldAdr(NodeHeader *, long)>
        2e7c14:	e5900000 	ldr	r0, [r0]
        2e7c18:	e1a00820 	mov	r0, r0, lsr #16
        2e7c1c:	e1b00740 	movs	r0, r0, asr #14
        2e7c20:	13a00001 	movne	r0, #1	; 0x1
        2e7c24:	e5c70008 	strb	r0, [r7, #8]	; fField8
        2e7c28:	e3a00000 	mov	r0, #0	; 0x0
        2e7c2c:	e5a7000c 	str	r0, [r7, #12]!	; fField12
        2e7c30:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::MoveUsingState(unsigned char, int, KeyField *, IndexState *)
 * Address: 002e7c34
 */
TSoupIndex::MoveUsingState(unsigned char, int, KeyField *, IndexState *) {
    /*
        2e7c34:	e1a0c00d 	mov	ip, sp
        2e7c38:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2e7c3c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e7c40:	e1a04000 	mov	r4, r0
        2e7c44:	e1a06002 	mov	r6, r2
        2e7c48:	e1a05003 	mov	r5, r3
        2e7c4c:	e20190ff 	and	r9, r1, #255	; 0xff
        2e7c50:	e3a00001 	mov	r0, #1	; 0x1
        2e7c54:	e59b7004 	ldr	r7, [fp, #4]	; fField4
        2e7c58:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        2e7c5c:	e5d70008 	ldrb	r0, [r7, #8]	; fField8
        2e7c60:	e3300000 	teq	r0, #0	; 0x0
        2e7c64:	0a000071 	beq	2e7e30 <TSoupIndex::MoveUsingState(unsigned char, int, KeyField *, IndexState *)+0x1fc>
        2e7c68:	e3360001 	teq	r6, #1	; 0x1
        2e7c6c:	0a00007b 	beq	2e7e60 <TSoupIndex::MoveUsingState(unsigned char, int, KeyField *, IndexState *)+0x22c>
        2e7c70:	e24dd004 	sub	sp, sp, #4	; 0x4
        2e7c74:	e1a01005 	mov	r1, r5
        2e7c78:	e1a00004 	mov	r0, r4
        2e7c7c:	eb5d60fc 	bl	1a40074 <TSoupIndex::$kfFirstDataAdr(KeyField *)>
        2e7c80:	e1a08000 	mov	r8, r0
        2e7c84:	e597000c 	ldr	r0, [r7, #12]	; fField12
        2e7c88:	e3300000 	teq	r0, #0	; 0x0
        2e7c8c:	0a000030 	beq	2e7d54 <TSoupIndex::MoveUsingState(unsigned char, int, KeyField *, IndexState *)+0x120>
        2e7c90:	e287a00c 	add	sl, r7, #12	; 0xc
        2e7c94:	e3390000 	teq	r9, #0	; 0x0
        2e7c98:	0a000005 	beq	2e7cb4 <TSoupIndex::MoveUsingState(unsigned char, int, KeyField *, IndexState *)+0x80>
        2e7c9c:	e1a0100a 	mov	r1, sl
        2e7ca0:	e1a02008 	mov	r2, r8
        2e7ca4:	e1a00004 	mov	r0, r4
        2e7ca8:	e3a03000 	mov	r3, #0	; 0x0
        2e7cac:	eb5d5ca4 	bl	1a3ef44 <TSoupIndex::$FindNextDupDataAdr(DupNodeHeader **, void *, unsigned char *)>
        2e7cb0:	ea000052 	b	2e7e00 <TSoupIndex::MoveUsingState(unsigned char, int, KeyField *, IndexState *)+0x1cc>
        2e7cb4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2e7cb8:	e1a00004 	mov	r0, r4
        2e7cbc:	e8970006 	ldmia	r7, {r1, r2}
        2e7cc0:	eb5d60e2 	bl	1a40050 <TSoupIndex::$KeyFieldAdr(NodeHeader *, long)>
        2e7cc4:	e58d0000 	str	r0, [sp]
        2e7cc8:	e28d3004 	add	r3, sp, #4	; 0x4
        2e7ccc:	e1a02008 	mov	r2, r8
        2e7cd0:	e1a00004 	mov	r0, r4
        2e7cd4:	e597100c 	ldr	r1, [r7, #12]	; fField12
        2e7cd8:	eb5d5c94 	bl	1a3ef30 <TSoupIndex::$FindDupDataAdr(DupNodeHeader *, void *, void **)>
        2e7cdc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2e7ce0:	e3300000 	teq	r0, #0	; 0x0
        2e7ce4:	1a000018 	bne	2e7d4c <TSoupIndex::MoveUsingState(unsigned char, int, KeyField *, IndexState *)+0x118>
        2e7ce8:	e1a00004 	mov	r0, r4
        2e7cec:	e59d1000 	ldr	r1, [sp]
        2e7cf0:	eb5d64e3 	bl	1a41084 <TSoupIndex::$kfNextDupID(KeyField *)>
        2e7cf4:	e597100c 	ldr	r1, [r7, #12]	; fField12
        2e7cf8:	e5911000 	ldr	r1, [r1]
        2e7cfc:	e1310000 	teq	r1, r0
        2e7d00:	1a000007 	bne	2e7d24 <TSoupIndex::MoveUsingState(unsigned char, int, KeyField *, IndexState *)+0xf0>
        2e7d04:	e3a00000 	mov	r0, #0	; 0x0
        2e7d08:	e28d3004 	add	r3, sp, #4	; 0x4
        2e7d0c:	e1a02008 	mov	r2, r8
        2e7d10:	e587000c 	str	r0, [r7, #12]	; fField12
        2e7d14:	e1a00004 	mov	r0, r4
        2e7d18:	e59d1000 	ldr	r1, [sp]
        2e7d1c:	eb5d60d3 	bl	1a40070 <TSoupIndex::$kfFindDataAdr(KeyField *, void *, void **)>
        2e7d20:	ea000009 	b	2e7d4c <TSoupIndex::MoveUsingState(unsigned char, int, KeyField *, IndexState *)+0x118>
        2e7d24:	e1a01000 	mov	r1, r0
        2e7d28:	e1a00004 	mov	r0, r4
        2e7d2c:	eb5d690c 	bl	1a42164 <TSoupIndex::$ReadADupNode(unsigned long)>
        2e7d30:	e1a0100a 	mov	r1, sl
        2e7d34:	e1a02008 	mov	r2, r8
        2e7d38:	e587000c 	str	r0, [r7, #12]	; fField12
        2e7d3c:	e1a00004 	mov	r0, r4
        2e7d40:	e3a03000 	mov	r3, #0	; 0x0
        2e7d44:	eb5d5c84 	bl	1a3ef5c <TSoupIndex::$FindPriorDupDataAdr(DupNodeHeader **, void *, unsigned char *)>
        2e7d48:	e58d0004 	str	r0, [sp, #4]	; fField4
        2e7d4c:	e28dd004 	add	sp, sp, #4	; 0x4
        2e7d50:	ea00002b 	b	2e7e04 <TSoupIndex::MoveUsingState(unsigned char, int, KeyField *, IndexState *)+0x1d0>
        2e7d54:	e1a00004 	mov	r0, r4
        2e7d58:	e8970006 	ldmia	r7, {r1, r2}
        2e7d5c:	eb5d60bb 	bl	1a40050 <TSoupIndex::$KeyFieldAdr(NodeHeader *, long)>
        2e7d60:	e1a0a000 	mov	sl, r0
        2e7d64:	e3390000 	teq	r9, #0	; 0x0
        2e7d68:	0a00000a 	beq	2e7d98 <TSoupIndex::MoveUsingState(unsigned char, int, KeyField *, IndexState *)+0x164>
        2e7d6c:	e1a02008 	mov	r2, r8
        2e7d70:	e1a0100a 	mov	r1, sl
        2e7d74:	e1a00004 	mov	r0, r4
        2e7d78:	e3a03000 	mov	r3, #0	; 0x0
        2e7d7c:	eb5d60bb 	bl	1a40070 <TSoupIndex::$kfFindDataAdr(KeyField *, void *, void **)>
        2e7d80:	e1a02000 	mov	r2, r0
        2e7d84:	e1a0300d 	mov	r3, sp
        2e7d88:	e1a0100a 	mov	r1, sl
        2e7d8c:	e1a00004 	mov	r0, r4
        2e7d90:	eb5d64ba 	bl	1a41080 <TSoupIndex::$kfNextDataAdr(KeyField *, void *, void **)>
        2e7d94:	ea000007 	b	2e7db8 <TSoupIndex::MoveUsingState(unsigned char, int, KeyField *, IndexState *)+0x184>
        2e7d98:	e1a0300d 	mov	r3, sp
        2e7d9c:	e1a02008 	mov	r2, r8
        2e7da0:	e1a0100a 	mov	r1, sl
        2e7da4:	e1a00004 	mov	r0, r4
        2e7da8:	eb5d60b0 	bl	1a40070 <TSoupIndex::$kfFindDataAdr(KeyField *, void *, void **)>
        2e7dac:	e1b00000 	movs	r0, r0
        2e7db0:	13a00001 	movne	r0, #1	; 0x1
        2e7db4:	e20000ff 	and	r0, r0, #255	; 0xff
        2e7db8:	e3300000 	teq	r0, #0	; 0x0
        2e7dbc:	1a000010 	bne	2e7e04 <TSoupIndex::MoveUsingState(unsigned char, int, KeyField *, IndexState *)+0x1d0>
        2e7dc0:	e3a00000 	mov	r0, #0	; 0x0
        2e7dc4:	e3390000 	teq	r9, #0	; 0x0
        2e7dc8:	e58d0000 	str	r0, [sp]
        2e7dcc:	0a00001b 	beq	2e7e40 <TSoupIndex::MoveUsingState(unsigned char, int, KeyField *, IndexState *)+0x20c>
        2e7dd0:	e1a0100a 	mov	r1, sl
        2e7dd4:	e1a00004 	mov	r0, r4
        2e7dd8:	eb5d64a9 	bl	1a41084 <TSoupIndex::$kfNextDupID(KeyField *)>
        2e7ddc:	e3300000 	teq	r0, #0	; 0x0
        2e7de0:	0a000007 	beq	2e7e04 <TSoupIndex::MoveUsingState(unsigned char, int, KeyField *, IndexState *)+0x1d0>
        2e7de4:	e1a01000 	mov	r1, r0
        2e7de8:	e1a00004 	mov	r0, r4
        2e7dec:	eb5d68dc 	bl	1a42164 <TSoupIndex::$ReadADupNode(unsigned long)>
        2e7df0:	e587000c 	str	r0, [r7, #12]	; fField12
        2e7df4:	e1a01000 	mov	r1, r0
        2e7df8:	e1a00004 	mov	r0, r4
        2e7dfc:	eb5d5c5a 	bl	1a3ef6c <TSoupIndex::$FirstDupDataAdr(DupNodeHeader *)>
        2e7e00:	e58d0000 	str	r0, [sp]
        2e7e04:	e59d2000 	ldr	r2, [sp]
        2e7e08:	e3320000 	teq	r2, #0	; 0x0
        2e7e0c:	0a000004 	beq	2e7e24 <TSoupIndex::MoveUsingState(unsigned char, int, KeyField *, IndexState *)+0x1f0>
        2e7e10:	e1a01005 	mov	r1, r5
        2e7e14:	e1a00004 	mov	r0, r4
        2e7e18:	eb5d649a 	bl	1a41088 <TSoupIndex::$kfReplaceFirstData(KeyField *, void *)>
        2e7e1c:	e3a00000 	mov	r0, #0	; 0x0
        2e7e20:	e58d0004 	str	r0, [sp, #4]	; fField4
        2e7e24:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        2e7e28:	e3300000 	teq	r0, #0	; 0x0
        2e7e2c:	0a000020 	beq	2e7eb4 <TSoupIndex::MoveUsingState(unsigned char, int, KeyField *, IndexState *)+0x280>
        2e7e30:	e3360002 	teq	r6, #2	; 0x2
        2e7e34:	1a000009 	bne	2e7e60 <TSoupIndex::MoveUsingState(unsigned char, int, KeyField *, IndexState *)+0x22c>
        2e7e38:	e3a00003 	mov	r0, #3	; 0x3
        2e7e3c:	ea00001d 	b	2e7eb8 <TSoupIndex::MoveUsingState(unsigned char, int, KeyField *, IndexState *)+0x284>
        2e7e40:	e1a03007 	mov	r3, r7
        2e7e44:	e92d0008 	stmdb	sp!, {r3}
        2e7e48:	e1a03005 	mov	r3, r5
        2e7e4c:	e1a02006 	mov	r2, r6
        2e7e50:	e1a01009 	mov	r1, r9
        2e7e54:	e1a00004 	mov	r0, r4
        2e7e58:	eb5d89c5 	bl	1a4a574 <TSoupIndex::$MoveAndGetState(unsigned char, int, KeyField *, IndexState *)>
        2e7e5c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2e7e60:	e2873004 	add	r3, r7, #4	; 0x4
        2e7e64:	e3390000 	teq	r9, #0	; 0x0
        2e7e68:	e1a02007 	mov	r2, r7
        2e7e6c:	e1a01005 	mov	r1, r5
        2e7e70:	e1a00004 	mov	r0, r4
        2e7e74:	0a000001 	beq	2e7e80 <TSoupIndex::MoveUsingState(unsigned char, int, KeyField *, IndexState *)+0x24c>
        2e7e78:	eb5d5c32 	bl	1a3ef48 <TSoupIndex::$FindNextKey(KeyField *, NodeHeader **, long *)>
        2e7e7c:	ea000000 	b	2e7e84 <TSoupIndex::MoveUsingState(unsigned char, int, KeyField *, IndexState *)+0x250>
        2e7e80:	eb5d8dd2 	bl	1a4b5d0 <TSoupIndex::$FindPriorKey(KeyField *, NodeHeader **, long *)>
        2e7e84:	e3300000 	teq	r0, #0	; 0x0
        2e7e88:	0affffea 	beq	2e7e38 <TSoupIndex::MoveUsingState(unsigned char, int, KeyField *, IndexState *)+0x204>
        2e7e8c:	e1a00004 	mov	r0, r4
        2e7e90:	e8970006 	ldmia	r7, {r1, r2}
        2e7e94:	eb5d606d 	bl	1a40050 <TSoupIndex::$KeyFieldAdr(NodeHeader *, long)>
        2e7e98:	e5900000 	ldr	r0, [r0]
        2e7e9c:	e1a00820 	mov	r0, r0, lsr #16
        2e7ea0:	e1b00740 	movs	r0, r0, asr #14
        2e7ea4:	13a00001 	movne	r0, #1	; 0x1
        2e7ea8:	e5c70008 	strb	r0, [r7, #8]	; fField8
        2e7eac:	e3a00000 	mov	r0, #0	; 0x0
        2e7eb0:	e5a7000c 	str	r0, [r7, #12]!	; fField12
        2e7eb4:	e3a00000 	mov	r0, #0	; 0x0
        2e7eb8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::Search(int, SKey *, SKey *, int (*)(SKey *, int, void *), void *, SKey *, SKey *)
 * Address: 002e7ebc
 */
TSoupIndex::Search(int, SKey *, SKey *, int (*)(SKey *, int, void *), void *, SKey *, SKey *) {
    /*
        2e7ebc:	e1a0c00d 	mov	ip, sp
        2e7ec0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2e7ec4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2e7ec8:	e24cb014 	sub	fp, ip, #20	; 0x14
        2e7ecc:	e1a04000 	mov	r4, r0
        2e7ed0:	e1a05001 	mov	r5, r1
        2e7ed4:	e59b8018 	ldr	r8, [fp, #24]	; fField24
        2e7ed8:	e59ba014 	ldr	sl, [fp, #20]	; fField20
        2e7edc:	e24dd064 	sub	sp, sp, #100	; 0x64
        2e7ee0:	e1a0600d 	mov	r6, sp
        2e7ee4:	e3a07000 	mov	r7, #0	; 0x0
        2e7ee8:	e3320000 	teq	r2, #0	; 0x0
        2e7eec:	1a00001c 	bne	2e7f64 <TSoupIndex::Search(int, SKey *, SKey *, int (*)(SKey *, int, void *), void *, SKey *, SKey *)+0xa8>
        2e7ef0:	e24dd0a0 	sub	sp, sp, #160	; 0xa0
        2e7ef4:	e5cd7051 	strb	r7, [sp, #81]
        2e7ef8:	e5cd7050 	strb	r7, [sp, #80]
        2e7efc:	e5cd7001 	strb	r7, [sp, #1]	; fField1
        2e7f00:	e5cd7000 	strb	r7, [sp]
        2e7f04:	e1a0200d 	mov	r2, sp
        2e7f08:	e28d1050 	add	r1, sp, #80	; 0x50
        2e7f0c:	e1a00004 	mov	r0, r4
        2e7f10:	e5943000 	ldr	r3, [r4]
        2e7f14:	e1a0e00f 	mov	lr, pc
        2e7f18:	e283f004 	add	pc, r3, #4	; 0x4
        2e7f1c:	e3300000 	teq	r0, #0	; 0x0
        2e7f20:	0a000000 	beq	2e7f28 <TSoupIndex::Search(int, SKey *, SKey *, int (*)(SKey *, int, void *), void *, SKey *, SKey *)+0x6c>
        2e7f24:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2e7f28:	e1a02008 	mov	r2, r8
        2e7f2c:	e1a0100d 	mov	r1, sp
        2e7f30:	e28d0050 	add	r0, sp, #80	; 0x50
        2e7f34:	e1a0e00f 	mov	lr, pc
        2e7f38:	e1a0f00a 	mov	pc, sl
        2e7f3c:	e3300000 	teq	r0, #0	; 0x0
        2e7f40:	11a00007 	movne	r0, r7
        2e7f44:	1afffff6 	bne	2e7f24 <TSoupIndex::Search(int, SKey *, SKey *, int (*)(SKey *, int, void *), void *, SKey *, SKey *)+0x68>
        2e7f48:	e1a0300d 	mov	r3, sp
        2e7f4c:	e28d2050 	add	r2, sp, #80	; 0x50
        2e7f50:	e1a01006 	mov	r1, r6
        2e7f54:	e1a00004 	mov	r0, r4
        2e7f58:	eb5d6040 	bl	1a40060 <TSoupIndex::$kfAssembleKeyField(KeyField *, void *, void *)>
        2e7f5c:	e28dd0a0 	add	sp, sp, #160	; 0xa0
        2e7f60:	ea000002 	b	2e7f70 <TSoupIndex::Search(int, SKey *, SKey *, int (*)(SKey *, int, void *), void *, SKey *, SKey *)+0xb4>
        2e7f64:	e1a01006 	mov	r1, r6
        2e7f68:	e1a00004 	mov	r0, r4
        2e7f6c:	eb5d603b 	bl	1a40060 <TSoupIndex::$kfAssembleKeyField(KeyField *, void *, void *)>
        2e7f70:	e52d706c 	str	r7, [sp, -#108]!
        2e7f74:	e28d0008 	add	r0, sp, #8	; 0x8
        2e7f78:	eb632a7d 	bl	1bb2974 <$setjmp>
        2e7f7c:	e3300000 	teq	r0, #0	; 0x0
        2e7f80:	1a00003f 	bne	2e8084 <TSoupIndex::Search(int, SKey *, SKey *, int (*)(SKey *, int, void *), void *, SKey *, SKey *)+0x1c8>
        2e7f84:	e1a0000d 	mov	r0, sp
        2e7f88:	eb63e03b 	bl	1be007c <$AddExceptionHandler>
        2e7f8c:	e24dd010 	sub	sp, sp, #16	; 0x10
        2e7f90:	e1a0300d 	mov	r3, sp
        2e7f94:	e92d0008 	stmdb	sp!, {r3}
        2e7f98:	e1a03006 	mov	r3, r6
        2e7f9c:	e1a01005 	mov	r1, r5
        2e7fa0:	e1a00004 	mov	r0, r4
        2e7fa4:	e3a02000 	mov	r2, #0	; 0x0
        2e7fa8:	eb5d8971 	bl	1a4a574 <TSoupIndex::$MoveAndGetState(unsigned char, int, KeyField *, IndexState *)>
        2e7fac:	e28dd004 	add	sp, sp, #4	; 0x4
        2e7fb0:	e1b07000 	movs	r7, r0
        2e7fb4:	e2869002 	add	r9, r6, #2	; 0x2
        2e7fb8:	1a000021 	bne	2e8044 <TSoupIndex::Search(int, SKey *, SKey *, int (*)(SKey *, int, void *), void *, SKey *, SKey *)+0x188>
        2e7fbc:	e1a01006 	mov	r1, r6
        2e7fc0:	e1a00004 	mov	r0, r4
        2e7fc4:	eb5d602a 	bl	1a40074 <TSoupIndex::$kfFirstDataAdr(KeyField *)>
        2e7fc8:	e1a01000 	mov	r1, r0
        2e7fcc:	e1a00009 	mov	r0, r9
        2e7fd0:	e1a02008 	mov	r2, r8
        2e7fd4:	e1a0e00f 	mov	lr, pc
        2e7fd8:	e1a0f00a 	mov	pc, sl
        2e7fdc:	e3300000 	teq	r0, #0	; 0x0
        2e7fe0:	1a000017 	bne	2e8044 <TSoupIndex::Search(int, SKey *, SKey *, int (*)(SKey *, int, void *), void *, SKey *, SKey *)+0x188>
        2e7fe4:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2e7fe8:	e5901000 	ldr	r1, [r0]
        2e7fec:	e3510020 	cmp	r1, #32	; 0x20
        2e7ff0:	da000009 	ble	2e801c <TSoupIndex::Search(int, SKey *, SKey *, int (*)(SKey *, int, void *), void *, SKey *, SKey *)+0x160>
        2e7ff4:	e1a01004 	mov	r1, r4
        2e7ff8:	eb5d8d6d 	bl	1a4b5b4 <TNodeCache::$Commit(TSoupIndex *)>
        2e7ffc:	e1a0300d 	mov	r3, sp
        2e8000:	e92d0008 	stmdb	sp!, {r3}
        2e8004:	e1a03006 	mov	r3, r6
        2e8008:	e1a01005 	mov	r1, r5
        2e800c:	e1a00004 	mov	r0, r4
        2e8010:	e3a02000 	mov	r2, #0	; 0x0
        2e8014:	eb5d8956 	bl	1a4a574 <TSoupIndex::$MoveAndGetState(unsigned char, int, KeyField *, IndexState *)>
        2e8018:	ea000006 	b	2e8038 <TSoupIndex::Search(int, SKey *, SKey *, int (*)(SKey *, int, void *), void *, SKey *, SKey *)+0x17c>
        2e801c:	e1a0300d 	mov	r3, sp
        2e8020:	e92d0008 	stmdb	sp!, {r3}
        2e8024:	e1a03006 	mov	r3, r6
        2e8028:	e1a01005 	mov	r1, r5
        2e802c:	e1a00004 	mov	r0, r4
        2e8030:	e3a02000 	mov	r2, #0	; 0x0
        2e8034:	eb5d894f 	bl	1a4a578 <TSoupIndex::$MoveUsingState(unsigned char, int, KeyField *, IndexState *)>
        2e8038:	e28dd004 	add	sp, sp, #4	; 0x4
        2e803c:	e1b07000 	movs	r7, r0
        2e8040:	0affffdd 	beq	2e7fbc <TSoupIndex::Search(int, SKey *, SKey *, int (*)(SKey *, int, void *), void *, SKey *, SKey *)+0x100>
        2e8044:	e3370000 	teq	r7, #0	; 0x0
        2e8048:	1a000004 	bne	2e8060 <TSoupIndex::Search(int, SKey *, SKey *, int (*)(SKey *, int, void *), void *, SKey *, SKey *)+0x1a4>
        2e804c:	e1a01006 	mov	r1, r6
        2e8050:	e1a00004 	mov	r0, r4
        2e8054:	e28b301c 	add	r3, fp, #28	; 0x1c
        2e8058:	e893000c 	ldmia	r3, {r2, r3}
        2e805c:	eb5d8d57 	bl	1a4b5c0 <TSoupIndex::$kfDisassembleKeyField(KeyField *, SKey *, SKey *)>
        2e8060:	e28dd010 	add	sp, sp, #16	; 0x10
        2e8064:	e1a0000d 	mov	r0, sp
        2e8068:	eb63e412 	bl	1be10b8 <$ExitHandler>
        2e806c:	e28dd06c 	add	sp, sp, #108	; 0x6c
        2e8070:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2e8074:	e1a01004 	mov	r1, r4
        2e8078:	eb5d8d4d 	bl	1a4b5b4 <TNodeCache::$Commit(TSoupIndex *)>
        2e807c:	e1a00007 	mov	r0, r7
        2e8080:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2e8084:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2e8088:	e1a01004 	mov	r1, r4
        2e808c:	eb5d5366 	bl	1a3ce2c <TNodeCache::$Abort(TSoupIndex *)>
        2e8090:	e1a0000d 	mov	r0, sp
        2e8094:	eb63e82e 	bl	1be2154 <$NextHandler>
        2e8098:	eafffff9 	b	2e8084 <TSoupIndex::Search(int, SKey *, SKey *, int (*)(SKey *, int, void *), void *, SKey *, SKey *)+0x1c8>
    */
}

/**
 * Symbol: TSoupIndex::Delete(SKey *, SKey *)
 * Address: 002e809c
 */
TSoupIndex::Delete(SKey *, SKey *) {
    /*
        2e809c:	e1a0c00d 	mov	ip, sp
        2e80a0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2e80a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e80a8:	e1a04000 	mov	r4, r0
        2e80ac:	e1a03002 	mov	r3, r2
        2e80b0:	e1a02001 	mov	r2, r1
        2e80b4:	e59f5054 	ldr	r5, [pc, #54]	; 2e8110 <TSoupIndex::Delete(SKey *, SKey *)+0x74>
        2e80b8:	e595102c 	ldr	r1, [r5, #44]	; fField44
        2e80bc:	eb5d5fe7 	bl	1a40060 <TSoupIndex::$kfAssembleKeyField(KeyField *, void *, void *)>
        2e80c0:	e3a00000 	mov	r0, #0	; 0x0
        2e80c4:	e52d006c 	str	r0, [sp, -#108]!
        2e80c8:	e28d0008 	add	r0, sp, #8	; 0x8
        2e80cc:	eb632a28 	bl	1bb2974 <$setjmp>
        2e80d0:	e3300000 	teq	r0, #0	; 0x0
        2e80d4:	1a00000e 	bne	2e8114 <TSoupIndex::Delete(SKey *, SKey *)+0x78>
        2e80d8:	e1a0000d 	mov	r0, sp
        2e80dc:	eb63dfe6 	bl	1be007c <$AddExceptionHandler>
        2e80e0:	e5950030 	ldr	r0, [r5, #48]	; fField48
        2e80e4:	e5901000 	ldr	r1, [r0]
        2e80e8:	e1a01821 	mov	r1, r1, lsr #16
        2e80ec:	e2011903 	and	r1, r1, #49152	; 0xc000
        2e80f0:	e5c01001 	strb	r1, [r0, #1]	; fField1
        2e80f4:	e1a01441 	mov	r1, r1, asr #8
        2e80f8:	e5c01000 	strb	r1, [r0]
        2e80fc:	e1a00004 	mov	r0, r4
        2e8100:	e5b5102c 	ldr	r1, [r5, #44]!	; fField44
        2e8104:	eb5d5346 	bl	1a3ce24 <TSoupIndex::$_BTRemoveKey(KeyField *)>
        2e8108:	e1a05000 	mov	r5, r0
        2e810c:	ea000001 	b	2e8118 <TSoupIndex::Delete(SKey *, SKey *)+0x7c>
        2e8110:	0c105414 	ldceq	4, cr5, [r0], -#80
        2e8114:	e59d5064 	ldr	r5, [sp, #100]
        2e8118:	e1a0000d 	mov	r0, sp
        2e811c:	eb63e3e5 	bl	1be10b8 <$ExitHandler>
        2e8120:	e28dd06c 	add	sp, sp, #108	; 0x6c
        2e8124:	e3350000 	teq	r5, #0	; 0x0
        2e8128:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2e812c:	e1a01004 	mov	r1, r4
        2e8130:	0a000001 	beq	2e813c <TSoupIndex::Delete(SKey *, SKey *)+0xa0>
        2e8134:	eb5d533c 	bl	1a3ce2c <TNodeCache::$Abort(TSoupIndex *)>
        2e8138:	ea000000 	b	2e8140 <TSoupIndex::Delete(SKey *, SKey *)+0xa4>
        2e813c:	eb5d8d1c 	bl	1a4b5b4 <TNodeCache::$Commit(TSoupIndex *)>
        2e8140:	e1a00005 	mov	r0, r5
        2e8144:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::First(SKey *, SKey *)
 * Address: 002e8148
 */
TSoupIndex::First(SKey *, SKey *) {
    /*
        2e8148:	e1a0c00d 	mov	ip, sp
        2e814c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2e8150:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e8154:	e1a04000 	mov	r4, r0
        2e8158:	e1a06001 	mov	r6, r1
        2e815c:	e1a05002 	mov	r5, r2
        2e8160:	e3a09000 	mov	r9, #0	; 0x0
        2e8164:	e3a00000 	mov	r0, #0	; 0x0
        2e8168:	e52d006c 	str	r0, [sp, -#108]!
        2e816c:	e28d0008 	add	r0, sp, #8	; 0x8
        2e8170:	eb6329ff 	bl	1bb2974 <$setjmp>
        2e8174:	e59f8040 	ldr	r8, [pc, #40]	; 2e81bc <TSoupIndex::First(SKey *, SKey *)+0x74>	; fField40
        2e8178:	e3300000 	teq	r0, #0	; 0x0
        2e817c:	1a00000f 	bne	2e81c0 <TSoupIndex::First(SKey *, SKey *)+0x78>
        2e8180:	e1a0000d 	mov	r0, sp
        2e8184:	eb63dfbc 	bl	1be007c <$AddExceptionHandler>
        2e8188:	e1a00004 	mov	r0, r4
        2e818c:	e3a01000 	mov	r1, #0	; 0x0
        2e8190:	eb5d67f7 	bl	1a42174 <TSoupIndex::$ReadRootNode(unsigned char)>
        2e8194:	e1b01000 	movs	r1, r0
        2e8198:	0a000005 	beq	2e81b4 <TSoupIndex::First(SKey *, SKey *)+0x6c>
        2e819c:	e1a00004 	mov	r0, r4
        2e81a0:	e598202c 	ldr	r2, [r8, #44]	; fField44
        2e81a4:	eb5d5b63 	bl	1a3ef38 <TSoupIndex::$FindFirstKey(NodeHeader *, KeyField *)>
        2e81a8:	e3300000 	teq	r0, #0	; 0x0
        2e81ac:	13a07000 	movne	r7, #0	; 0x0
        2e81b0:	1a000007 	bne	2e81d4 <TSoupIndex::First(SKey *, SKey *)+0x8c>
        2e81b4:	e3a07002 	mov	r7, #2	; 0x2
        2e81b8:	ea000005 	b	2e81d4 <TSoupIndex::First(SKey *, SKey *)+0x8c>
        2e81bc:	0c105414 	ldceq	4, cr5, [r0], -#80
        2e81c0:	e3a09001 	mov	r9, #1	; 0x1
        2e81c4:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2e81c8:	e1a01004 	mov	r1, r4
        2e81cc:	eb5d5316 	bl	1a3ce2c <TNodeCache::$Abort(TSoupIndex *)>
        2e81d0:	e59d7064 	ldr	r7, [sp, #100]
        2e81d4:	e1a0000d 	mov	r0, sp
        2e81d8:	eb63e3b6 	bl	1be10b8 <$ExitHandler>
        2e81dc:	e28dd06c 	add	sp, sp, #108	; 0x6c
        2e81e0:	e3390000 	teq	r9, #0	; 0x0
        2e81e4:	1a000009 	bne	2e8210 <TSoupIndex::First(SKey *, SKey *)+0xc8>
        2e81e8:	e3370000 	teq	r7, #0	; 0x0
        2e81ec:	1a000004 	bne	2e8204 <TSoupIndex::First(SKey *, SKey *)+0xbc>
        2e81f0:	e1a03005 	mov	r3, r5
        2e81f4:	e1a02006 	mov	r2, r6
        2e81f8:	e1a00004 	mov	r0, r4
        2e81fc:	e5b8102c 	ldr	r1, [r8, #44]!	; fField44
        2e8200:	eb5d8cee 	bl	1a4b5c0 <TSoupIndex::$kfDisassembleKeyField(KeyField *, SKey *, SKey *)>
        2e8204:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2e8208:	e1a01004 	mov	r1, r4
        2e820c:	eb5d8ce8 	bl	1a4b5b4 <TNodeCache::$Commit(TSoupIndex *)>
        2e8210:	e1a00007 	mov	r0, r7
        2e8214:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::Last(SKey *, SKey *)
 * Address: 002e8218
 */
TSoupIndex::Last(SKey *, SKey *) {
    /*
        2e8218:	e1a0c00d 	mov	ip, sp
        2e821c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2e8220:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e8224:	e1a04000 	mov	r4, r0
        2e8228:	e1a06001 	mov	r6, r1
        2e822c:	e1a05002 	mov	r5, r2
        2e8230:	e3a09000 	mov	r9, #0	; 0x0
        2e8234:	e3a00000 	mov	r0, #0	; 0x0
        2e8238:	e52d006c 	str	r0, [sp, -#108]!
        2e823c:	e28d0008 	add	r0, sp, #8	; 0x8
        2e8240:	eb6329cb 	bl	1bb2974 <$setjmp>
        2e8244:	e59f8040 	ldr	r8, [pc, #40]	; 2e828c <TSoupIndex::Last(SKey *, SKey *)+0x74>	; fField40
        2e8248:	e3300000 	teq	r0, #0	; 0x0
        2e824c:	1a00000f 	bne	2e8290 <TSoupIndex::Last(SKey *, SKey *)+0x78>
        2e8250:	e1a0000d 	mov	r0, sp
        2e8254:	eb63df88 	bl	1be007c <$AddExceptionHandler>
        2e8258:	e1a00004 	mov	r0, r4
        2e825c:	e3a01000 	mov	r1, #0	; 0x0
        2e8260:	eb5d67c3 	bl	1a42174 <TSoupIndex::$ReadRootNode(unsigned char)>
        2e8264:	e1b01000 	movs	r1, r0
        2e8268:	0a000005 	beq	2e8284 <TSoupIndex::Last(SKey *, SKey *)+0x6c>
        2e826c:	e1a00004 	mov	r0, r4
        2e8270:	e598202c 	ldr	r2, [r8, #44]	; fField44
        2e8274:	eb5d5b31 	bl	1a3ef40 <TSoupIndex::$FindLastKey(NodeHeader *, KeyField *)>
        2e8278:	e3300000 	teq	r0, #0	; 0x0
        2e827c:	13a07000 	movne	r7, #0	; 0x0
        2e8280:	1a000007 	bne	2e82a4 <TSoupIndex::Last(SKey *, SKey *)+0x8c>
        2e8284:	e3a07002 	mov	r7, #2	; 0x2
        2e8288:	ea000005 	b	2e82a4 <TSoupIndex::Last(SKey *, SKey *)+0x8c>
        2e828c:	0c105414 	ldceq	4, cr5, [r0], -#80
        2e8290:	e3a09001 	mov	r9, #1	; 0x1
        2e8294:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2e8298:	e1a01004 	mov	r1, r4
        2e829c:	eb5d52e2 	bl	1a3ce2c <TNodeCache::$Abort(TSoupIndex *)>
        2e82a0:	e59d7064 	ldr	r7, [sp, #100]
        2e82a4:	e1a0000d 	mov	r0, sp
        2e82a8:	eb63e382 	bl	1be10b8 <$ExitHandler>
        2e82ac:	e28dd06c 	add	sp, sp, #108	; 0x6c
        2e82b0:	e3390000 	teq	r9, #0	; 0x0
        2e82b4:	1a000009 	bne	2e82e0 <TSoupIndex::Last(SKey *, SKey *)+0xc8>
        2e82b8:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2e82bc:	e1a01004 	mov	r1, r4
        2e82c0:	eb5d8cbb 	bl	1a4b5b4 <TNodeCache::$Commit(TSoupIndex *)>
        2e82c4:	e3370000 	teq	r7, #0	; 0x0
        2e82c8:	1a000004 	bne	2e82e0 <TSoupIndex::Last(SKey *, SKey *)+0xc8>
        2e82cc:	e1a03005 	mov	r3, r5
        2e82d0:	e1a02006 	mov	r2, r6
        2e82d4:	e1a00004 	mov	r0, r4
        2e82d8:	e5b8102c 	ldr	r1, [r8, #44]!	; fField44
        2e82dc:	eb5d8cb7 	bl	1a4b5c0 <TSoupIndex::$kfDisassembleKeyField(KeyField *, SKey *, SKey *)>
        2e82e0:	e1a00007 	mov	r0, r7
        2e82e4:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::Next(SKey *, SKey *, int, SKey *, SKey *)
 * Address: 002e82e8
 */
TSoupIndex::Next(SKey *, SKey *, int, SKey *, SKey *) {
    /*
        2e82e8:	e1a0c00d 	mov	ip, sp
        2e82ec:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2e82f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e82f4:	e1a04000 	mov	r4, r0
        2e82f8:	e1a05003 	mov	r5, r3
        2e82fc:	e3a08000 	mov	r8, #0	; 0x0
        2e8300:	e1a03002 	mov	r3, r2
        2e8304:	e1a02001 	mov	r2, r1
        2e8308:	e59b9008 	ldr	r9, [fp, #8]	; fField8
        2e830c:	e59ba004 	ldr	sl, [fp, #4]	; fField4
        2e8310:	e59f705c 	ldr	r7, [pc, #5c]	; 2e8374 <TSoupIndex::Next(SKey *, SKey *, int, SKey *, SKey *)+0x8c>
        2e8314:	e597102c 	ldr	r1, [r7, #44]	; fField44
        2e8318:	eb5d5f50 	bl	1a40060 <TSoupIndex::$kfAssembleKeyField(KeyField *, void *, void *)>
        2e831c:	e3a00000 	mov	r0, #0	; 0x0
        2e8320:	e52d006c 	str	r0, [sp, -#108]!
        2e8324:	e28d0008 	add	r0, sp, #8	; 0x8
        2e8328:	eb632991 	bl	1bb2974 <$setjmp>
        2e832c:	e3300000 	teq	r0, #0	; 0x0
        2e8330:	1a000010 	bne	2e8378 <TSoupIndex::Next(SKey *, SKey *, int, SKey *, SKey *)+0x90>
        2e8334:	e1a0000d 	mov	r0, sp
        2e8338:	eb63df4f 	bl	1be007c <$AddExceptionHandler>
        2e833c:	e3350001 	teq	r5, #1	; 0x1
        2e8340:	0a000006 	beq	2e8360 <TSoupIndex::Next(SKey *, SKey *, int, SKey *, SKey *)+0x78>
        2e8344:	e1a00004 	mov	r0, r4
        2e8348:	e597102c 	ldr	r1, [r7, #44]	; fField44
        2e834c:	eb5d52b0 	bl	1a3ce14 <TSoupIndex::$_BTGetNextDupKey(KeyField *)>
        2e8350:	e1b06000 	movs	r6, r0
        2e8354:	13360002 	teqne	r6, #2	; 0x2
        2e8358:	13350002 	teqne	r5, #2	; 0x2
        2e835c:	0a00000a 	beq	2e838c <TSoupIndex::Next(SKey *, SKey *, int, SKey *, SKey *)+0xa4>
        2e8360:	e1a00004 	mov	r0, r4
        2e8364:	e597102c 	ldr	r1, [r7, #44]	; fField44
        2e8368:	eb5d52aa 	bl	1a3ce18 <TSoupIndex::$_BTGetNextKey(KeyField *)>
        2e836c:	e1a06000 	mov	r6, r0
        2e8370:	ea000005 	b	2e838c <TSoupIndex::Next(SKey *, SKey *, int, SKey *, SKey *)+0xa4>
        2e8374:	0c105414 	ldceq	4, cr5, [r0], -#80
        2e8378:	e3a08001 	mov	r8, #1	; 0x1
        2e837c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2e8380:	e1a01004 	mov	r1, r4
        2e8384:	eb5d52a8 	bl	1a3ce2c <TNodeCache::$Abort(TSoupIndex *)>
        2e8388:	e59d6064 	ldr	r6, [sp, #100]
        2e838c:	e1a0000d 	mov	r0, sp
        2e8390:	eb63e348 	bl	1be10b8 <$ExitHandler>
        2e8394:	e28dd06c 	add	sp, sp, #108	; 0x6c
        2e8398:	e3380000 	teq	r8, #0	; 0x0
        2e839c:	1a000009 	bne	2e83c8 <TSoupIndex::Next(SKey *, SKey *, int, SKey *, SKey *)+0xe0>
        2e83a0:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2e83a4:	e1a01004 	mov	r1, r4
        2e83a8:	eb5d8c81 	bl	1a4b5b4 <TNodeCache::$Commit(TSoupIndex *)>
        2e83ac:	e3360000 	teq	r6, #0	; 0x0
        2e83b0:	1a000004 	bne	2e83c8 <TSoupIndex::Next(SKey *, SKey *, int, SKey *, SKey *)+0xe0>
        2e83b4:	e1a03009 	mov	r3, r9
        2e83b8:	e1a0200a 	mov	r2, sl
        2e83bc:	e1a00004 	mov	r0, r4
        2e83c0:	e5b7102c 	ldr	r1, [r7, #44]!	; fField44
        2e83c4:	eb5d8c7d 	bl	1a4b5c0 <TSoupIndex::$kfDisassembleKeyField(KeyField *, SKey *, SKey *)>
        2e83c8:	e1a00006 	mov	r0, r6
        2e83cc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::Prior(SKey *, SKey *, unsigned char, SKey *, SKey *)
 * Address: 002e83d0
 */
TSoupIndex::Prior(SKey *, SKey *, unsigned char, SKey *, SKey *) {
    /*
        2e83d0:	e1a0c00d 	mov	ip, sp
        2e83d4:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2e83d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e83dc:	e1a04000 	mov	r4, r0
        2e83e0:	e20350ff 	and	r5, r3, #255	; 0xff
        2e83e4:	e3a07000 	mov	r7, #0	; 0x0
        2e83e8:	e1a03002 	mov	r3, r2
        2e83ec:	e1a02001 	mov	r2, r1
        2e83f0:	e59b8008 	ldr	r8, [fp, #8]	; fField8
        2e83f4:	e59b9004 	ldr	r9, [fp, #4]	; fField4
        2e83f8:	e59f6054 	ldr	r6, [pc, #54]	; 2e8454 <TSoupIndex::Prior(SKey *, SKey *, unsigned char, SKey *, SKey *)+0x84>
        2e83fc:	e596102c 	ldr	r1, [r6, #44]	; fField44
        2e8400:	eb5d5f16 	bl	1a40060 <TSoupIndex::$kfAssembleKeyField(KeyField *, void *, void *)>
        2e8404:	e3a00000 	mov	r0, #0	; 0x0
        2e8408:	e52d006c 	str	r0, [sp, -#108]!
        2e840c:	e28d0008 	add	r0, sp, #8	; 0x8
        2e8410:	eb632957 	bl	1bb2974 <$setjmp>
        2e8414:	e3300000 	teq	r0, #0	; 0x0
        2e8418:	1a00000e 	bne	2e8458 <TSoupIndex::Prior(SKey *, SKey *, unsigned char, SKey *, SKey *)+0x88>
        2e841c:	e1a0000d 	mov	r0, sp
        2e8420:	eb63df15 	bl	1be007c <$AddExceptionHandler>
        2e8424:	e3350000 	teq	r5, #0	; 0x0
        2e8428:	1a000004 	bne	2e8440 <TSoupIndex::Prior(SKey *, SKey *, unsigned char, SKey *, SKey *)+0x70>
        2e842c:	e1a00004 	mov	r0, r4
        2e8430:	e596102c 	ldr	r1, [r6, #44]	; fField44
        2e8434:	eb5d5278 	bl	1a3ce1c <TSoupIndex::$_BTGetPriorDupKey(KeyField *)>
        2e8438:	e1b05000 	movs	r5, r0
        2e843c:	0a00000a 	beq	2e846c <TSoupIndex::Prior(SKey *, SKey *, unsigned char, SKey *, SKey *)+0x9c>
        2e8440:	e1a00004 	mov	r0, r4
        2e8444:	e596102c 	ldr	r1, [r6, #44]	; fField44
        2e8448:	eb5d5274 	bl	1a3ce20 <TSoupIndex::$_BTGetPriorKey(KeyField *)>
        2e844c:	e1a05000 	mov	r5, r0
        2e8450:	ea000005 	b	2e846c <TSoupIndex::Prior(SKey *, SKey *, unsigned char, SKey *, SKey *)+0x9c>
        2e8454:	0c105414 	ldceq	4, cr5, [r0], -#80
        2e8458:	e3a07001 	mov	r7, #1	; 0x1
        2e845c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2e8460:	e1a01004 	mov	r1, r4
        2e8464:	eb5d5270 	bl	1a3ce2c <TNodeCache::$Abort(TSoupIndex *)>
        2e8468:	e59d5064 	ldr	r5, [sp, #100]
        2e846c:	e1a0000d 	mov	r0, sp
        2e8470:	eb63e310 	bl	1be10b8 <$ExitHandler>
        2e8474:	e28dd06c 	add	sp, sp, #108	; 0x6c
        2e8478:	e3370000 	teq	r7, #0	; 0x0
        2e847c:	1a000009 	bne	2e84a8 <TSoupIndex::Prior(SKey *, SKey *, unsigned char, SKey *, SKey *)+0xd8>
        2e8480:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2e8484:	e1a01004 	mov	r1, r4
        2e8488:	eb5d8c49 	bl	1a4b5b4 <TNodeCache::$Commit(TSoupIndex *)>
        2e848c:	e3350000 	teq	r5, #0	; 0x0
        2e8490:	1a000004 	bne	2e84a8 <TSoupIndex::Prior(SKey *, SKey *, unsigned char, SKey *, SKey *)+0xd8>
        2e8494:	e1a03008 	mov	r3, r8
        2e8498:	e1a02009 	mov	r2, r9
        2e849c:	e1a00004 	mov	r0, r4
        2e84a0:	e5b6102c 	ldr	r1, [r6, #44]!	; fField44
        2e84a4:	eb5d8c45 	bl	1a4b5c0 <TSoupIndex::$kfDisassembleKeyField(KeyField *, SKey *, SKey *)>
        2e84a8:	e1a00005 	mov	r0, r5
        2e84ac:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::Destroy(void)
 * Address: 002e84b0
 */
TSoupIndex::Destroy(void) {
    /*
        2e84b0:	e1a0c00d 	mov	ip, sp
        2e84b4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2e84b8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e84bc:	e1a04000 	mov	r4, r0
        2e84c0:	e5900010 	ldr	r0, [r0, #16]	; fField16
        2e84c4:	e3300000 	teq	r0, #0	; 0x0
        2e84c8:	0a000014 	beq	2e8520 <TSoupIndex::Destroy(void)+0x70>
        2e84cc:	e3a00000 	mov	r0, #0	; 0x0
        2e84d0:	e52d006c 	str	r0, [sp, -#108]!
        2e84d4:	e28d0008 	add	r0, sp, #8	; 0x8
        2e84d8:	eb632925 	bl	1bb2974 <$setjmp>
        2e84dc:	e3300000 	teq	r0, #0	; 0x0
        2e84e0:	1a000012 	bne	2e8530 <TSoupIndex::Destroy(void)+0x80>
        2e84e4:	e1a0000d 	mov	r0, sp
        2e84e8:	eb63dee3 	bl	1be007c <$AddExceptionHandler>
        2e84ec:	e1a00004 	mov	r0, r4
        2e84f0:	e3a01000 	mov	r1, #0	; 0x0
        2e84f4:	eb5d671e 	bl	1a42174 <TSoupIndex::$ReadRootNode(unsigned char)>
        2e84f8:	e3300000 	teq	r0, #0	; 0x0
        2e84fc:	11a01000 	movne	r1, r0
        2e8500:	11a00004 	movne	r0, r4
        2e8504:	1b5d5ea5 	blne	1a3ffa0 <TSoupIndex::$FreeNodes(NodeHeader *)>
        2e8508:	e1a00004 	mov	r0, r4
        2e850c:	e3a01000 	mov	r1, #0	; 0x0
        2e8510:	eb5d6b33 	bl	1a431e4 <TSoupIndex::$SetRootNode(unsigned long)>
        2e8514:	e1a0000d 	mov	r0, sp
        2e8518:	eb63e2e6 	bl	1be10b8 <$ExitHandler>
        2e851c:	e28dd06c 	add	sp, sp, #108	; 0x6c
        2e8520:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2e8524:	e1a01004 	mov	r1, r4
        2e8528:	eb5d8c21 	bl	1a4b5b4 <TNodeCache::$Commit(TSoupIndex *)>
        2e852c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2e8530:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2e8534:	e1a01004 	mov	r1, r4
        2e8538:	eb5d523b 	bl	1a3ce2c <TNodeCache::$Abort(TSoupIndex *)>
        2e853c:	e1a0000d 	mov	r0, sp
        2e8540:	eb63e703 	bl	1be2154 <$NextHandler>
        2e8544:	eafffff9 	b	2e8530 <TSoupIndex::Destroy(void)+0x80>
    */
}

/**
 * Symbol: TSoupIndex::NodeSize(NodeHeader *, long &)
 * Address: 002e8548
 */
TSoupIndex::NodeSize(NodeHeader *, long &) {
    /*
        2e8548:	e1a0c00d 	mov	ip, sp
        2e854c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2e8550:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e8554:	e1a05000 	mov	r5, r0
        2e8558:	e1a04001 	mov	r4, r1
        2e855c:	e1a06002 	mov	r6, r2
        2e8560:	e24dd004 	sub	sp, sp, #4	; 0x4
        2e8564:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2e8568:	e5911000 	ldr	r1, [r1]
        2e856c:	e590007c 	ldr	r0, [r0, #124]	; fField124
        2e8570:	e1a0200d 	mov	r2, sp
        2e8574:	eb6049e1 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        2e8578:	e3300000 	teq	r0, #0	; 0x0
        2e857c:	1b5d5229 	blne	1a3ce28 <$_OSErr(long)>
        2e8580:	e5962000 	ldr	r2, [r6]
        2e8584:	e59d1000 	ldr	r1, [sp]
        2e8588:	e0821001 	add	r1, r2, r1
        2e858c:	e3a07000 	mov	r7, #0	; 0x0
        2e8590:	e5861000 	str	r1, [r6]
        2e8594:	e594000a 	ldr	r0, [r4, #10]
        2e8598:	e1b00840 	movs	r0, r0, asr #16
        2e859c:	4a00001e 	bmi	2e861c <TSoupIndex::NodeSize(NodeHeader *, long &)+0xd4>
        2e85a0:	e3a08001 	mov	r8, #1	; 0x1
        2e85a4:	e1a02007 	mov	r2, r7
        2e85a8:	e1a01004 	mov	r1, r4
        2e85ac:	e1a00005 	mov	r0, r5
        2e85b0:	eb5d5ea6 	bl	1a40050 <TSoupIndex::$KeyFieldAdr(NodeHeader *, long)>
        2e85b4:	e1a01000 	mov	r1, r0
        2e85b8:	e5900000 	ldr	r0, [r0]
        2e85bc:	e1a00820 	mov	r0, r0, lsr #16
        2e85c0:	e1380740 	teq	r8, r0, asr #14
        2e85c4:	1a000003 	bne	2e85d8 <TSoupIndex::NodeSize(NodeHeader *, long &)+0x90>
        2e85c8:	e1b00900 	movs	r0, r0, lsl #18
        2e85cc:	11a02006 	movne	r2, r6
        2e85d0:	11a00005 	movne	r0, r5
        2e85d4:	1b5d5a4a 	blne	1a3ef04 <TSoupIndex::$DupNodeSize(KeyField *, long &)>
        2e85d8:	e1a02007 	mov	r2, r7
        2e85dc:	e1a01004 	mov	r1, r4
        2e85e0:	e1a00005 	mov	r0, r5
        2e85e4:	eb5d62b1 	bl	1a410b0 <TSoupIndex::$LeftNodeNo(NodeHeader *, long)>
        2e85e8:	e1b01000 	movs	r1, r0
        2e85ec:	0a000006 	beq	2e860c <TSoupIndex::NodeSize(NodeHeader *, long &)+0xc4>
        2e85f0:	e1a00005 	mov	r0, r5
        2e85f4:	e5942000 	ldr	r2, [r4]
        2e85f8:	eb5d66da 	bl	1a42168 <TSoupIndex::$ReadANode(unsigned long, unsigned long)>
        2e85fc:	e1a01000 	mov	r1, r0
        2e8600:	e1a02006 	mov	r2, r6
        2e8604:	e1a00005 	mov	r0, r5
        2e8608:	eb5d66be 	bl	1a42108 <TSoupIndex::$NodeSize(NodeHeader *, long &)>
        2e860c:	e2877001 	add	r7, r7, #1	; 0x1
        2e8610:	e594000a 	ldr	r0, [r4, #10]
        2e8614:	e1570840 	cmp	r7, r0, asr #16
        2e8618:	daffffe1 	ble	2e85a4 <TSoupIndex::NodeSize(NodeHeader *, long &)+0x5c>
        2e861c:	e5b50008 	ldr	r0, [r5, #8]!	; fField8
        2e8620:	e5941000 	ldr	r1, [r4]
        2e8624:	eb5d5e58 	bl	1a3ff8c <TNodeCache::$ForgetNode(unsigned long)>
        2e8628:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::DupNodeSize(KeyField *, long &)
 * Address: 002e862c
 */
TSoupIndex::DupNodeSize(KeyField *, long &) {
    /*
        2e862c:	e1a0c00d 	mov	ip, sp
        2e8630:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2e8634:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e8638:	e1a04000 	mov	r4, r0
        2e863c:	e1a05002 	mov	r5, r2
        2e8640:	eb5d628f 	bl	1a41084 <TSoupIndex::$kfNextDupID(KeyField *)>
        2e8644:	e1b06000 	movs	r6, r0
        2e8648:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2e864c:	e1a01006 	mov	r1, r6
        2e8650:	e1a00004 	mov	r0, r4
        2e8654:	eb5d66c2 	bl	1a42164 <TSoupIndex::$ReadADupNode(unsigned long)>
        2e8658:	e1a07000 	mov	r7, r0
        2e865c:	e5b06004 	ldr	r6, [r0, #4]!	; fField4
        2e8660:	e24dd004 	sub	sp, sp, #4	; 0x4
        2e8664:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2e8668:	e5971000 	ldr	r1, [r7]
        2e866c:	e590007c 	ldr	r0, [r0, #124]	; fField124
        2e8670:	e1a0200d 	mov	r2, sp
        2e8674:	eb6049a1 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        2e8678:	e3300000 	teq	r0, #0	; 0x0
        2e867c:	1b5d51e9 	blne	1a3ce28 <$_OSErr(long)>
        2e8680:	e5952000 	ldr	r2, [r5]
        2e8684:	e59d1000 	ldr	r1, [sp]
        2e8688:	e0821001 	add	r1, r2, r1
        2e868c:	e5851000 	str	r1, [r5]
        2e8690:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2e8694:	e5971000 	ldr	r1, [r7]
        2e8698:	eb5d5e3b 	bl	1a3ff8c <TNodeCache::$ForgetNode(unsigned long)>
        2e869c:	e28dd004 	add	sp, sp, #4	; 0x4
        2e86a0:	e3360000 	teq	r6, #0	; 0x0
        2e86a4:	1affffe8 	bne	2e864c <TSoupIndex::DupNodeSize(KeyField *, long &)+0x20>
        2e86a8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::TotalSize(void)
 * Address: 002e86ac
 */
TSoupIndex::TotalSize(void) {
    /*
        2e86ac:	e1a0c00d 	mov	ip, sp
        2e86b0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2e86b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e86b8:	e1a04000 	mov	r4, r0
        2e86bc:	e24dd004 	sub	sp, sp, #4	; 0x4
        2e86c0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2e86c4:	e594100c 	ldr	r1, [r4, #12]	; fField12
        2e86c8:	e590007c 	ldr	r0, [r0, #124]	; fField124
        2e86cc:	e1a0200d 	mov	r2, sp
        2e86d0:	eb60498a 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        2e86d4:	e3300000 	teq	r0, #0	; 0x0
        2e86d8:	1b5d51d2 	blne	1a3ce28 <$_OSErr(long)>
        2e86dc:	e5940010 	ldr	r0, [r4, #16]	; fField16
        2e86e0:	e3300000 	teq	r0, #0	; 0x0
        2e86e4:	0a000011 	beq	2e8730 <TSoupIndex::TotalSize(void)+0x84>
        2e86e8:	e3a00000 	mov	r0, #0	; 0x0
        2e86ec:	e52d006c 	str	r0, [sp, -#108]!
        2e86f0:	e28d0008 	add	r0, sp, #8	; 0x8
        2e86f4:	eb63289e 	bl	1bb2974 <$setjmp>
        2e86f8:	e3300000 	teq	r0, #0	; 0x0
        2e86fc:	1a000010 	bne	2e8744 <TSoupIndex::TotalSize(void)+0x98>
        2e8700:	e1a0000d 	mov	r0, sp
        2e8704:	eb63de5c 	bl	1be007c <$AddExceptionHandler>
        2e8708:	e1a00004 	mov	r0, r4
        2e870c:	e3a01000 	mov	r1, #0	; 0x0
        2e8710:	eb5d6697 	bl	1a42174 <TSoupIndex::$ReadRootNode(unsigned char)>
        2e8714:	e1b01000 	movs	r1, r0
        2e8718:	128d206c 	addne	r2, sp, #108	; 0x6c
        2e871c:	11a00004 	movne	r0, r4
        2e8720:	1b5d6678 	blne	1a42108 <TSoupIndex::$NodeSize(NodeHeader *, long &)>
        2e8724:	e1a0000d 	mov	r0, sp
        2e8728:	eb63e262 	bl	1be10b8 <$ExitHandler>
        2e872c:	e28dd06c 	add	sp, sp, #108	; 0x6c
        2e8730:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2e8734:	e1a01004 	mov	r1, r4
        2e8738:	eb5d8b9d 	bl	1a4b5b4 <TNodeCache::$Commit(TSoupIndex *)>
        2e873c:	e49d0004 	ldr	r0, [sp], #4	; fField4
        2e8740:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2e8744:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2e8748:	e1a01004 	mov	r1, r4
        2e874c:	eb5d51b6 	bl	1a3ce2c <TNodeCache::$Abort(TSoupIndex *)>
        2e8750:	e1a0000d 	mov	r0, sp
        2e8754:	eb63e67e 	bl	1be2154 <$NextHandler>
        2e8758:	eafffff9 	b	2e8744 <TSoupIndex::TotalSize(void)+0x98>
    */
}

/**
 * Symbol: TSoupIndex::ReadANode(unsigned long, unsigned long)
 * Address: 002e9ba4
 */
TSoupIndex::ReadANode(unsigned long, unsigned long) {
    /*
        2e9ba4:	e1a0c00d 	mov	ip, sp
        2e9ba8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2e9bac:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e9bb0:	e1a04000 	mov	r4, r0
        2e9bb4:	e1a05001 	mov	r5, r1
        2e9bb8:	e1a06002 	mov	r6, r2
        2e9bbc:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2e9bc0:	e1a02001 	mov	r2, r1
        2e9bc4:	e1a01004 	mov	r1, r4
        2e9bc8:	eb5d54df 	bl	1a3ef4c <TNodeCache::$FindNode(TSoupIndex *, unsigned long)>
        2e9bcc:	e1b07000 	movs	r7, r0
        2e9bd0:	1a00002e 	bne	2e9c90 <TSoupIndex::ReadANode(unsigned long, unsigned long)+0xec>
        2e9bd4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2e9bd8:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2e9bdc:	e590007c 	ldr	r0, [r0, #124]	; fField124
        2e9be0:	e1a0200d 	mov	r2, sp
        2e9be4:	e1a01005 	mov	r1, r5
        2e9be8:	eb604444 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        2e9bec:	e3300000 	teq	r0, #0	; 0x0
        2e9bf0:	1b5d4c8c 	blne	1a3ce28 <$_OSErr(long)>
        2e9bf4:	e3a03000 	mov	r3, #0	; 0x0
        2e9bf8:	e3a02000 	mov	r2, #0	; 0x0
        2e9bfc:	e92d000c 	stmdb	sp!, {r2, r3}
        2e9c00:	e1a02005 	mov	r2, r5
        2e9c04:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2e9c08:	e5943014 	ldr	r3, [r4, #20]	; fField20
        2e9c0c:	e1a01004 	mov	r1, r4
        2e9c10:	eb5d6159 	bl	1a4217c <TNodeCache::$RememberNode(TSoupIndex *, unsigned long, long, int, int)>
        2e9c14:	e1a07000 	mov	r7, r0
        2e9c18:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2e9c1c:	e5bd3008 	ldr	r3, [sp, #8]!	; fField8
        2e9c20:	e92d0008 	stmdb	sp!, {r3}
        2e9c24:	e590007c 	ldr	r0, [r0, #124]	; fField124
        2e9c28:	e1a03007 	mov	r3, r7
        2e9c2c:	e3a02000 	mov	r2, #0	; 0x0
        2e9c30:	e1a01005 	mov	r1, r5
        2e9c34:	eb606141 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        2e9c38:	e28dd004 	add	sp, sp, #4	; 0x4
        2e9c3c:	e3300000 	teq	r0, #0	; 0x0
        2e9c40:	1b5d4c78 	blne	1a3ce28 <$_OSErr(long)>
        2e9c44:	e597000a 	ldr	r0, [r7, #10]
        2e9c48:	e1a00840 	mov	r0, r0, asr #16
        2e9c4c:	e0870080 	add	r0, r7, r0, lsl #1
        2e9c50:	e280800e 	add	r8, r0, #14	; 0xe
        2e9c54:	e5b41014 	ldr	r1, [r4, #20]!	; fField20
        2e9c58:	e5970008 	ldr	r0, [r7, #8]	; fField8
        2e9c5c:	e1a00840 	mov	r0, r0, asr #16
        2e9c60:	e0411000 	sub	r1, r1, r0
        2e9c64:	e0482007 	sub	r2, r8, r7
        2e9c68:	e0412002 	sub	r2, r1, r2
        2e9c6c:	e0800008 	add	r0, r0, r8
        2e9c70:	e1a01008 	mov	r1, r8
        2e9c74:	eb632b76 	bl	1bb4a54 <$memmove>
        2e9c78:	e5972008 	ldr	r2, [r7, #8]	; fField8
        2e9c7c:	e1a02842 	mov	r2, r2, asr #16
        2e9c80:	e1a00008 	mov	r0, r8
        2e9c84:	e3a01000 	mov	r1, #0	; 0x0
        2e9c88:	eb632b72 	bl	1bb4a58 <$memset>
        2e9c8c:	e28dd004 	add	sp, sp, #4	; 0x4
        2e9c90:	e8870060 	stmia	r7, {r5, r6}
        2e9c94:	e1a00007 	mov	r0, r7
        2e9c98:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::ReadADupNode(unsigned long)
 * Address: 002e9c9c
 */
TSoupIndex::ReadADupNode(unsigned long) {
    /*
        2e9c9c:	e1a0c00d 	mov	ip, sp
        2e9ca0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2e9ca4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e9ca8:	e1a04000 	mov	r4, r0
        2e9cac:	e1a05001 	mov	r5, r1
        2e9cb0:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2e9cb4:	e1a02001 	mov	r2, r1
        2e9cb8:	e1a01004 	mov	r1, r4
        2e9cbc:	eb5d54a2 	bl	1a3ef4c <TNodeCache::$FindNode(TSoupIndex *, unsigned long)>
        2e9cc0:	e1b06000 	movs	r6, r0
        2e9cc4:	1a00001c 	bne	2e9d3c <TSoupIndex::ReadADupNode(unsigned long)+0xa0>
        2e9cc8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2e9ccc:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2e9cd0:	e590007c 	ldr	r0, [r0, #124]	; fField124
        2e9cd4:	e1a0200d 	mov	r2, sp
        2e9cd8:	e1a01005 	mov	r1, r5
        2e9cdc:	eb604407 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        2e9ce0:	e3300000 	teq	r0, #0	; 0x0
        2e9ce4:	1b5d4c4f 	blne	1a3ce28 <$_OSErr(long)>
        2e9ce8:	e3a03000 	mov	r3, #0	; 0x0
        2e9cec:	e3a02001 	mov	r2, #1	; 0x1
        2e9cf0:	e92d000c 	stmdb	sp!, {r2, r3}
        2e9cf4:	e1a02005 	mov	r2, r5
        2e9cf8:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2e9cfc:	e5943014 	ldr	r3, [r4, #20]	; fField20
        2e9d00:	e1a01004 	mov	r1, r4
        2e9d04:	eb5d611c 	bl	1a4217c <TNodeCache::$RememberNode(TSoupIndex *, unsigned long, long, int, int)>
        2e9d08:	e1a06000 	mov	r6, r0
        2e9d0c:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        2e9d10:	e5bd3008 	ldr	r3, [sp, #8]!	; fField8
        2e9d14:	e92d0008 	stmdb	sp!, {r3}
        2e9d18:	e590007c 	ldr	r0, [r0, #124]	; fField124
        2e9d1c:	e1a03006 	mov	r3, r6
        2e9d20:	e3a02000 	mov	r2, #0	; 0x0
        2e9d24:	e1a01005 	mov	r1, r5
        2e9d28:	eb606104 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        2e9d2c:	e28dd004 	add	sp, sp, #4	; 0x4
        2e9d30:	e3300000 	teq	r0, #0	; 0x0
        2e9d34:	1b5d4c3b 	blne	1a3ce28 <$_OSErr(long)>
        2e9d38:	e28dd004 	add	sp, sp, #4	; 0x4
        2e9d3c:	e5865000 	str	r5, [r6]
        2e9d40:	e1a00006 	mov	r0, r6
        2e9d44:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::ChangeNode(NodeHeader *)
 * Address: 002e9d7c
 */
TSoupIndex::ChangeNode(NodeHeader *) {
    /*
        2e9d7c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSoupIndex::UpdateNode(NodeHeader *)
 * Address: 002e9d80
 */
TSoupIndex::UpdateNode(NodeHeader *) {
    /*
        2e9d80:	e1a0c00d 	mov	ip, sp
        2e9d84:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2e9d88:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e9d8c:	e1a05000 	mov	r5, r0
        2e9d90:	e1a04001 	mov	r4, r1
        2e9d94:	e24ddc02 	sub	sp, sp, #512	; 0x200
        2e9d98:	eb5d4c31 	bl	1a3ce64 <TSoupIndex::$BytesInNode(NodeHeader *)>
        2e9d9c:	e1a07000 	mov	r7, r0
        2e9da0:	e594100a 	ldr	r1, [r4, #10]
        2e9da4:	e1a01841 	mov	r1, r1, asr #16
        2e9da8:	e3a0000e 	mov	r0, #14	; 0xe
        2e9dac:	e0802081 	add	r2, r0, r1, lsl #1
        2e9db0:	e1a06002 	mov	r6, r2
        2e9db4:	e1a01004 	mov	r1, r4
        2e9db8:	e1a0000d 	mov	r0, sp
        2e9dbc:	eb632b23 	bl	1bb4a50 <$memcpy>
        2e9dc0:	e0840006 	add	r0, r4, r6
        2e9dc4:	e5941008 	ldr	r1, [r4, #8]	; fField8
        2e9dc8:	e0801841 	add	r1, r0, r1, asr #16
        2e9dcc:	e0472006 	sub	r2, r7, r6
        2e9dd0:	e08d0006 	add	r0, sp, r6
        2e9dd4:	eb632b1d 	bl	1bb4a50 <$memcpy>
        2e9dd8:	e5b50004 	ldr	r0, [r5, #4]!	; fField4
        2e9ddc:	e5941000 	ldr	r1, [r4]
        2e9de0:	e590007c 	ldr	r0, [r0, #124]	; fField124
        2e9de4:	e1a03007 	mov	r3, r7
        2e9de8:	e1a0200d 	mov	r2, sp
        2e9dec:	eb027389 	bl	386c18 <TStore::ReplaceObject(unsigned long, char *, long)>
        2e9df0:	e3300000 	teq	r0, #0	; 0x0
        2e9df4:	1b5d4c0b 	blne	1a3ce28 <$_OSErr(long)>
        2e9df8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::UpdateDupNode(NodeHeader *)
 * Address: 002e9dfc
 */
TSoupIndex::UpdateDupNode(NodeHeader *) {
    /*
        2e9dfc:	e1a0c00d 	mov	ip, sp
        2e9e00:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2e9e04:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e9e08:	e1a04001 	mov	r4, r1
        2e9e0c:	e5906004 	ldr	r6, [r0, #4]	; fField4
        2e9e10:	e5915000 	ldr	r5, [r1]
        2e9e14:	eb5d4c12 	bl	1a3ce64 <TSoupIndex::$BytesInNode(NodeHeader *)>
        2e9e18:	e1a03000 	mov	r3, r0
        2e9e1c:	e1a02004 	mov	r2, r4
        2e9e20:	e1a01005 	mov	r1, r5
        2e9e24:	e5b6007c 	ldr	r0, [r6, #124]!	; fField124
        2e9e28:	eb02737a 	bl	386c18 <TStore::ReplaceObject(unsigned long, char *, long)>
        2e9e2c:	e3300000 	teq	r0, #0	; 0x0
        2e9e30:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
        2e9e34:	1a5d4bfb 	bne	1a3ce28 <$_OSErr(long)>
        2e9e38:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::NewNode(void)
 * Address: 002e9e3c
 */
TSoupIndex::NewNode(void) {
    /*
        2e9e3c:	e1a0c00d 	mov	ip, sp
        2e9e40:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2e9e44:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e9e48:	e1a04000 	mov	r4, r0
        2e9e4c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2e9e50:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2e9e54:	e590007c 	ldr	r0, [r0, #124]	; fField124
        2e9e58:	e1a0200d 	mov	r2, sp
        2e9e5c:	e3a01000 	mov	r1, #0	; 0x0
        2e9e60:	eb60586a 	bl	1b00010 <TStore::$NewObject(long, unsigned long *)>
        2e9e64:	e3300000 	teq	r0, #0	; 0x0
        2e9e68:	1b5d4bee 	blne	1a3ce28 <$_OSErr(long)>
        2e9e6c:	e3a03001 	mov	r3, #1	; 0x1
        2e9e70:	e3a02000 	mov	r2, #0	; 0x0
        2e9e74:	e92d000c 	stmdb	sp!, {r2, r3}
        2e9e78:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2e9e7c:	e5943014 	ldr	r3, [r4, #20]	; fField20
        2e9e80:	e1a01004 	mov	r1, r4
        2e9e84:	e59d2008 	ldr	r2, [sp, #8]	; fField8
        2e9e88:	eb5d60bb 	bl	1a4217c <TNodeCache::$RememberNode(TSoupIndex *, unsigned long, long, int, int)>
        2e9e8c:	e1a05000 	mov	r5, r0
        2e9e90:	e1a01000 	mov	r1, r0
        2e9e94:	e1a00004 	mov	r0, r4
        2e9e98:	e5bd2008 	ldr	r2, [sp, #8]!	; fField8
        2e9e9c:	eb5d5858 	bl	1a40004 <TSoupIndex::$InitNode(NodeHeader *, unsigned long)>
        2e9ea0:	e1a00005 	mov	r0, r5
        2e9ea4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::NewDupNode(void)
 * Address: 002e9ea8
 */
TSoupIndex::NewDupNode(void) {
    /*
        2e9ea8:	e1a0c00d 	mov	ip, sp
        2e9eac:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2e9eb0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e9eb4:	e1a04000 	mov	r4, r0
        2e9eb8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2e9ebc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2e9ec0:	e590007c 	ldr	r0, [r0, #124]	; fField124
        2e9ec4:	e1a0200d 	mov	r2, sp
        2e9ec8:	e3a05000 	mov	r5, #0	; 0x0
        2e9ecc:	e1a01005 	mov	r1, r5
        2e9ed0:	eb60584e 	bl	1b00010 <TStore::$NewObject(long, unsigned long *)>
        2e9ed4:	e3300000 	teq	r0, #0	; 0x0
        2e9ed8:	1b5d4bd2 	blne	1a3ce28 <$_OSErr(long)>
        2e9edc:	e3a03001 	mov	r3, #1	; 0x1
        2e9ee0:	e3a02001 	mov	r2, #1	; 0x1
        2e9ee4:	e92d000c 	stmdb	sp!, {r2, r3}
        2e9ee8:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2e9eec:	e5943014 	ldr	r3, [r4, #20]	; fField20
        2e9ef0:	e1a01004 	mov	r1, r4
        2e9ef4:	e59d2008 	ldr	r2, [sp, #8]	; fField8
        2e9ef8:	eb5d609f 	bl	1a4217c <TNodeCache::$RememberNode(TSoupIndex *, unsigned long, long, int, int)>
        2e9efc:	e5bd1008 	ldr	r1, [sp, #8]!	; fField8
        2e9f00:	e8800022 	stmia	r0, {r1, r5}
        2e9f04:	e5b41014 	ldr	r1, [r4, #20]!	; fField20
        2e9f08:	e2411010 	sub	r1, r1, #16	; 0x10
        2e9f0c:	e5c01009 	strb	r1, [r0, #9]
        2e9f10:	e1a01441 	mov	r1, r1, asr #8
        2e9f14:	e5c01008 	strb	r1, [r0, #8]	; fField8
        2e9f18:	e5c0500b 	strb	r5, [r0, #11]
        2e9f1c:	e5c0500a 	strb	r5, [r0, #10]
        2e9f20:	e3a01010 	mov	r1, #16	; 0x10
        2e9f24:	e5c0100d 	strb	r1, [r0, #13]
        2e9f28:	e5c0500c 	strb	r5, [r0, #12]	; fField12
        2e9f2c:	e5c0500f 	strb	r5, [r0, #15]
        2e9f30:	e5c0500e 	strb	r5, [r0, #14]
        2e9f34:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::DeleteNode(unsigned long)
 * Address: 002e9f38
 */
TSoupIndex::DeleteNode(unsigned long) {
    /*
        2e9f38:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2e9f3c:	ea5d4fe8 	b	1a3dee4 <TNodeCache::$DeleteNode(unsigned long)>
    */
}

/**
 * Symbol: TSoupIndex::kfSizeOfKey(void *)
 * Address: 002e9f40
 */
TSoupIndex::kfSizeOfKey(void *) {
    /*
        2e9f40:	e5900030 	ldr	r0, [r0, #48]	; fField48
        2e9f44:	e3300000 	teq	r0, #0	; 0x0
        2e9f48:	05910000 	ldreq	r0, [r1]
        2e9f4c:	01a00400 	moveq	r0, r0, lsl #8
        2e9f50:	01a00c20 	moveq	r0, r0, lsr #24
        2e9f54:	02800002 	addeq	r0, r0, #2	; 0x2
        2e9f58:	e1a00800 	mov	r0, r0, lsl #16
        2e9f5c:	e1a00840 	mov	r0, r0, asr #16
        2e9f60:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSoupIndex::kfSizeOfData(void *)
 * Address: 002e9f64
 */
TSoupIndex::kfSizeOfData(void *) {
    /*
        2e9f64:	e5900034 	ldr	r0, [r0, #52]	; fField52
        2e9f68:	e3300000 	teq	r0, #0	; 0x0
        2e9f6c:	05910000 	ldreq	r0, [r1]
        2e9f70:	01a00400 	moveq	r0, r0, lsl #8
        2e9f74:	01a00c20 	moveq	r0, r0, lsr #24
        2e9f78:	02800002 	addeq	r0, r0, #2	; 0x2
        2e9f7c:	e1a00800 	mov	r0, r0, lsl #16
        2e9f80:	e1a00840 	mov	r0, r0, asr #16
        2e9f84:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSoupIndex::kfFirstDataAdr(KeyField *)
 * Address: 002e9f88
 */
TSoupIndex::kfFirstDataAdr(KeyField *) {
    /*
        2e9f88:	e1a0c00d 	mov	ip, sp
        2e9f8c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2e9f90:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e9f94:	e1a04001 	mov	r4, r1
        2e9f98:	e2811002 	add	r1, r1, #2	; 0x2
        2e9f9c:	eb5d5c3d 	bl	1a41098 <TSoupIndex::$kfSizeOfKey(void *)>
        2e9fa0:	e1a00800 	mov	r0, r0, lsl #16
        2e9fa4:	e1a00840 	mov	r0, r0, asr #16
        2e9fa8:	e3100001 	tst	r0, #1	; 0x1
        2e9fac:	12800001 	addne	r0, r0, #1	; 0x1
        2e9fb0:	e1a00800 	mov	r0, r0, lsl #16
        2e9fb4:	e0840840 	add	r0, r4, r0, asr #16
        2e9fb8:	e2800002 	add	r0, r0, #2	; 0x2
        2e9fbc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::kfNextDataAdr(KeyField *, void *, void **)
 * Address: 002e9fc0
 */
TSoupIndex::kfNextDataAdr(KeyField *, void *, void **) {
    /*
        2e9fc0:	e1a0c00d 	mov	ip, sp
        2e9fc4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2e9fc8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e9fcc:	e1a04001 	mov	r4, r1
        2e9fd0:	e1b05002 	movs	r5, r2
        2e9fd4:	e1a06003 	mov	r6, r3
        2e9fd8:	1a00000b 	bne	2ea00c <TSoupIndex::kfNextDataAdr(KeyField *, void *, void **)+0x4c>
        2e9fdc:	e2841002 	add	r1, r4, #2	; 0x2
        2e9fe0:	eb5d5c2c 	bl	1a41098 <TSoupIndex::$kfSizeOfKey(void *)>
        2e9fe4:	e1a00800 	mov	r0, r0, lsl #16
        2e9fe8:	e1a00840 	mov	r0, r0, asr #16
        2e9fec:	e3100001 	tst	r0, #1	; 0x1
        2e9ff0:	12800001 	addne	r0, r0, #1	; 0x1
        2e9ff4:	e1a00800 	mov	r0, r0, lsl #16
        2e9ff8:	e0840840 	add	r0, r4, r0, asr #16
        2e9ffc:	e2800002 	add	r0, r0, #2	; 0x2
        2ea000:	e5860000 	str	r0, [r6]
        2ea004:	e3a00001 	mov	r0, #1	; 0x1
        2ea008:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2ea00c:	e5941000 	ldr	r1, [r4]
        2ea010:	e1a01101 	mov	r1, r1, lsl #2
        2ea014:	e0841921 	add	r1, r4, r1, lsr #18
        2ea018:	e2414006 	sub	r4, r1, #6	; 0x6
        2ea01c:	e1a01005 	mov	r1, r5
        2ea020:	eb5d5c1b 	bl	1a41094 <TSoupIndex::$kfSizeOfData(void *)>
        2ea024:	e1a00800 	mov	r0, r0, lsl #16
        2ea028:	e1a00840 	mov	r0, r0, asr #16
        2ea02c:	e3100001 	tst	r0, #1	; 0x1
        2ea030:	12800001 	addne	r0, r0, #1	; 0x1
        2ea034:	e1a00800 	mov	r0, r0, lsl #16
        2ea038:	e0850840 	add	r0, r5, r0, asr #16
        2ea03c:	e5860000 	str	r0, [r6]
        2ea040:	e1540000 	cmp	r4, r0
        2ea044:	93a00000 	movls	r0, #0	; 0x0
        2ea048:	83a00001 	movhi	r0, #1	; 0x1
        2ea04c:	e20000ff 	and	r0, r0, #255	; 0xff
        2ea050:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::kfLastDataAdr(KeyField *)
 * Address: 002ea09c
 */
TSoupIndex::kfLastDataAdr(KeyField *) {
    /*
        2ea09c:	e1a0c00d 	mov	ip, sp
        2ea0a0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2ea0a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ea0a8:	e1a04000 	mov	r4, r0
        2ea0ac:	e1a06001 	mov	r6, r1
        2ea0b0:	eb5d57ef 	bl	1a40074 <TSoupIndex::$kfFirstDataAdr(KeyField *)>
        2ea0b4:	e1a05000 	mov	r5, r0
        2ea0b8:	e5960000 	ldr	r0, [r6]
        2ea0bc:	e1a00100 	mov	r0, r0, lsl #2
        2ea0c0:	e0860920 	add	r0, r6, r0, lsr #18
        2ea0c4:	e2407006 	sub	r7, r0, #6	; 0x6
        2ea0c8:	e1a06005 	mov	r6, r5
        2ea0cc:	e1a01005 	mov	r1, r5
        2ea0d0:	e1a00004 	mov	r0, r4
        2ea0d4:	eb5d5bee 	bl	1a41094 <TSoupIndex::$kfSizeOfData(void *)>
        2ea0d8:	e1a00800 	mov	r0, r0, lsl #16
        2ea0dc:	e1a00840 	mov	r0, r0, asr #16
        2ea0e0:	e3100001 	tst	r0, #1	; 0x1
        2ea0e4:	12800001 	addne	r0, r0, #1	; 0x1
        2ea0e8:	e1a00800 	mov	r0, r0, lsl #16
        2ea0ec:	e0855840 	add	r5, r5, r0, asr #16
        2ea0f0:	e1550007 	cmp	r5, r7
        2ea0f4:	3afffff3 	bcc	2ea0c8 <TSoupIndex::kfLastDataAdr(KeyField *)+0x2c>
        2ea0f8:	e1a00006 	mov	r0, r6
        2ea0fc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::kfDupCount(KeyField *)
 * Address: 002ea100
 */
TSoupIndex::kfDupCount(KeyField *) {
    /*
        2ea100:	e5912000 	ldr	r2, [r1]
        2ea104:	e1a02822 	mov	r2, r2, lsr #16
        2ea108:	e3a00001 	mov	r0, #1	; 0x1
        2ea10c:	e1300742 	teq	r0, r2, asr #14
        2ea110:	11a0f00e 	movne	pc, lr
        2ea114:	e1a00902 	mov	r0, r2, lsl #18
        2ea118:	e0810920 	add	r0, r1, r0, lsr #18
        2ea11c:	e5100006 	ldr	r0, [r0, -#6]	; fField6
        2ea120:	e1a00840 	mov	r0, r0, asr #16
        2ea124:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSoupIndex::kfNextDupID(KeyField *)
 * Address: 002ea128
 */
TSoupIndex::kfNextDupID(KeyField *) {
    /*
        2ea128:	e5910000 	ldr	r0, [r1]
        2ea12c:	e1a00820 	mov	r0, r0, lsr #16
        2ea130:	e3a02001 	mov	r2, #1	; 0x1
        2ea134:	e1320740 	teq	r2, r0, asr #14
        2ea138:	13a00000 	movne	r0, #0	; 0x0
        2ea13c:	11a0f00e 	movne	pc, lr
        2ea140:	e1a00900 	mov	r0, r0, lsl #18
        2ea144:	e0810920 	add	r0, r1, r0, lsr #18
        2ea148:	e2400004 	sub	r0, r0, #4	; 0x4
        2ea14c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2ea150:	e3100003 	tst	r0, #3	; 0x3
        2ea154:	0a000008 	beq	2ea17c <TSoupIndex::kfNextDupID(KeyField *)+0x54>
        2ea158:	e5d01000 	ldrb	r1, [r0]
        2ea15c:	e5cd1000 	strb	r1, [sp]
        2ea160:	e5d01001 	ldrb	r1, [r0, #1]	; fField1
        2ea164:	e5cd1001 	strb	r1, [sp, #1]	; fField1
        2ea168:	e5d01002 	ldrb	r1, [r0, #2]	; fField2
        2ea16c:	e5cd1002 	strb	r1, [sp, #2]	; fField2
        2ea170:	e5d00003 	ldrb	r0, [r0, #3]	; fField3
        2ea174:	e5cd0003 	strb	r0, [sp, #3]	; fField3
        2ea178:	ea000001 	b	2ea184 <TSoupIndex::kfNextDupID(KeyField *)+0x5c>
        2ea17c:	e5900000 	ldr	r0, [r0]
        2ea180:	e58d0000 	str	r0, [sp]
        2ea184:	e49d0004 	ldr	r0, [sp], #4	; fField4
        2ea188:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSoupIndex::kfInsertData(KeyField *, void *, void *)
 * Address: 002ea18c
 */
TSoupIndex::kfInsertData(KeyField *, void *, void *) {
    /*
        2ea18c:	e1a0c00d 	mov	ip, sp
        2ea190:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2ea194:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ea198:	e1a06000 	mov	r6, r0
        2ea19c:	e1a04001 	mov	r4, r1
        2ea1a0:	e1a05002 	mov	r5, r2
        2ea1a4:	e1a07003 	mov	r7, r3
        2ea1a8:	e5910000 	ldr	r0, [r1]
        2ea1ac:	e1a09100 	mov	r9, r0, lsl #2
        2ea1b0:	e1a09929 	mov	r9, r9, lsr #18
        2ea1b4:	e1a01003 	mov	r1, r3
        2ea1b8:	e1a00006 	mov	r0, r6
        2ea1bc:	eb5d5bb4 	bl	1a41094 <TSoupIndex::$kfSizeOfData(void *)>
        2ea1c0:	e1a00800 	mov	r0, r0, lsl #16
        2ea1c4:	e1a00840 	mov	r0, r0, asr #16
        2ea1c8:	e3100001 	tst	r0, #1	; 0x1
        2ea1cc:	12800001 	addne	r0, r0, #1	; 0x1
        2ea1d0:	e1a08800 	mov	r8, r0, lsl #16
        2ea1d4:	e1a08848 	mov	r8, r8, asr #16
        2ea1d8:	e0840009 	add	r0, r4, r9
        2ea1dc:	e5941000 	ldr	r1, [r4]
        2ea1e0:	e1a01821 	mov	r1, r1, lsr #16
        2ea1e4:	e3a02001 	mov	r2, #1	; 0x1
        2ea1e8:	e1320741 	teq	r2, r1, asr #14
        2ea1ec:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2ea1f0:	e0402005 	sub	r2, r0, r5
        2ea1f4:	e0850008 	add	r0, r5, r8
        2ea1f8:	e1a01005 	mov	r1, r5
        2ea1fc:	eb632a14 	bl	1bb4a54 <$memmove>
        2ea200:	e1a02008 	mov	r2, r8
        2ea204:	e1a01007 	mov	r1, r7
        2ea208:	e1a00005 	mov	r0, r5
        2ea20c:	eb632a10 	bl	1bb4a54 <$memmove>
        2ea210:	e5940000 	ldr	r0, [r4]
        2ea214:	e1a00820 	mov	r0, r0, lsr #16
        2ea218:	e2000903 	and	r0, r0, #49152	; 0xc000
        2ea21c:	e0891008 	add	r1, r9, r8
        2ea220:	e1800001 	orr	r0, r0, r1
        2ea224:	e5c40001 	strb	r0, [r4, #1]	; fField1
        2ea228:	e1a00440 	mov	r0, r0, asr #8
        2ea22c:	e5c40000 	strb	r0, [r4]
        2ea230:	e1a01004 	mov	r1, r4
        2ea234:	e1a00006 	mov	r0, r6
        2ea238:	eb5d578b 	bl	1a4006c <TSoupIndex::$kfDupCount(KeyField *)>
        2ea23c:	e1a00800 	mov	r0, r0, lsl #16
        2ea240:	e1a00840 	mov	r0, r0, asr #16
        2ea244:	e2802001 	add	r2, r0, #1	; 0x1
        2ea248:	e1a01004 	mov	r1, r4
        2ea24c:	e1a00006 	mov	r0, r6
        2ea250:	e91b6bf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
        2ea254:	ea5d5b8c 	b	1a4108c <TSoupIndex::$kfSetDupCount(KeyField *, short)>
    */
}

/**
 * Symbol: TSoupIndex::kfSetDupCount(KeyField *, short)
 * Address: 002ea258
 */
TSoupIndex::kfSetDupCount(KeyField *, short) {
    /*
        2ea258:	e1a02802 	mov	r2, r2, lsl #16
        2ea25c:	e1a02842 	mov	r2, r2, asr #16
        2ea260:	e5910000 	ldr	r0, [r1]
        2ea264:	e1a00820 	mov	r0, r0, lsr #16
        2ea268:	e3a03001 	mov	r3, #1	; 0x1
        2ea26c:	e1330740 	teq	r3, r0, asr #14
        2ea270:	11a0f00e 	movne	pc, lr
        2ea274:	e1a00900 	mov	r0, r0, lsl #18
        2ea278:	e0810920 	add	r0, r1, r0, lsr #18
        2ea27c:	e2400006 	sub	r0, r0, #6	; 0x6
        2ea280:	e5c02001 	strb	r2, [r0, #1]	; fField1
        2ea284:	e1a01442 	mov	r1, r2, asr #8
        2ea288:	e5c01000 	strb	r1, [r0]
        2ea28c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSoupIndex::kfSetNextDupID(KeyField *, unsigned long)
 * Address: 002ea290
 */
TSoupIndex::kfSetNextDupID(KeyField *, unsigned long) {
    /*
        2ea290:	e5910000 	ldr	r0, [r1]
        2ea294:	e1a00820 	mov	r0, r0, lsr #16
        2ea298:	e3a03001 	mov	r3, #1	; 0x1
        2ea29c:	e1330740 	teq	r3, r0, asr #14
        2ea2a0:	11a0f00e 	movne	pc, lr
        2ea2a4:	e1a00900 	mov	r0, r0, lsl #18
        2ea2a8:	e0810920 	add	r0, r1, r0, lsr #18
        2ea2ac:	e2400004 	sub	r0, r0, #4	; 0x4
        2ea2b0:	e52d0008 	str	r0, [sp, -#8]!	; fField8
        2ea2b4:	e1a00002 	mov	r0, r2
        2ea2b8:	e58d2004 	str	r2, [sp, #4]	; fField4
        2ea2bc:	e59d1000 	ldr	r1, [sp]
        2ea2c0:	e3110003 	tst	r1, #3	; 0x3
        2ea2c4:	0a000009 	beq	2ea2f0 <TSoupIndex::kfSetNextDupID(KeyField *, unsigned long)+0x60>
        2ea2c8:	e59d0000 	ldr	r0, [sp]
        2ea2cc:	e5dd1004 	ldrb	r1, [sp, #4]	; fField4
        2ea2d0:	e5c01000 	strb	r1, [r0]
        2ea2d4:	e5dd1005 	ldrb	r1, [sp, #5]
        2ea2d8:	e5c01001 	strb	r1, [r0, #1]	; fField1
        2ea2dc:	e5dd1006 	ldrb	r1, [sp, #6]	; fField6
        2ea2e0:	e5c01002 	strb	r1, [r0, #2]	; fField2
        2ea2e4:	e5dd1007 	ldrb	r1, [sp, #7]
        2ea2e8:	e5c01003 	strb	r1, [r0, #3]	; fField3
        2ea2ec:	ea000001 	b	2ea2f8 <TSoupIndex::kfSetNextDupID(KeyField *, unsigned long)+0x68>
        2ea2f0:	e59d1000 	ldr	r1, [sp]
        2ea2f4:	e5810000 	str	r0, [r1]
        2ea2f8:	e28dd008 	add	sp, sp, #8	; 0x8
        2ea2fc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSoupIndex::kfDeleteData(KeyField *, void *)
 * Address: 002ea300
 */
TSoupIndex::kfDeleteData(KeyField *, void *) {
    /*
        2ea300:	e1a0c00d 	mov	ip, sp
        2ea304:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2ea308:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ea30c:	e1a06000 	mov	r6, r0
        2ea310:	e1a04001 	mov	r4, r1
        2ea314:	e1a05002 	mov	r5, r2
        2ea318:	e1a01002 	mov	r1, r2
        2ea31c:	eb5d5b5c 	bl	1a41094 <TSoupIndex::$kfSizeOfData(void *)>
        2ea320:	e1a00800 	mov	r0, r0, lsl #16
        2ea324:	e1a00840 	mov	r0, r0, asr #16
        2ea328:	e3100001 	tst	r0, #1	; 0x1
        2ea32c:	12800001 	addne	r0, r0, #1	; 0x1
        2ea330:	e1a07800 	mov	r7, r0, lsl #16
        2ea334:	e1a07847 	mov	r7, r7, asr #16
        2ea338:	e5941000 	ldr	r1, [r4]
        2ea33c:	e1a01821 	mov	r1, r1, lsr #16
        2ea340:	e1a00901 	mov	r0, r1, lsl #18
        2ea344:	e0840920 	add	r0, r4, r0, lsr #18
        2ea348:	e3a02001 	mov	r2, #1	; 0x1
        2ea34c:	e1320741 	teq	r2, r1, asr #14
        2ea350:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2ea354:	e0851007 	add	r1, r5, r7
        2ea358:	e0402001 	sub	r2, r0, r1
        2ea35c:	e1a00005 	mov	r0, r5
        2ea360:	eb6329bb 	bl	1bb4a54 <$memmove>
        2ea364:	e5940000 	ldr	r0, [r4]
        2ea368:	e1a00820 	mov	r0, r0, lsr #16
        2ea36c:	e2001903 	and	r1, r0, #49152	; 0xc000
        2ea370:	e1a00900 	mov	r0, r0, lsl #18
        2ea374:	e0670920 	rsb	r0, r7, r0, lsr #18
        2ea378:	e1810000 	orr	r0, r1, r0
        2ea37c:	e5c40001 	strb	r0, [r4, #1]	; fField1
        2ea380:	e1a00440 	mov	r0, r0, asr #8
        2ea384:	e5c40000 	strb	r0, [r4]
        2ea388:	e1a01004 	mov	r1, r4
        2ea38c:	e1a00006 	mov	r0, r6
        2ea390:	eb5d5735 	bl	1a4006c <TSoupIndex::$kfDupCount(KeyField *)>
        2ea394:	e1a00800 	mov	r0, r0, lsl #16
        2ea398:	e1a00840 	mov	r0, r0, asr #16
        2ea39c:	e2402001 	sub	r2, r0, #1	; 0x1
        2ea3a0:	e1a01004 	mov	r1, r4
        2ea3a4:	e1a00006 	mov	r0, r6
        2ea3a8:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        2ea3ac:	ea5d5b36 	b	1a4108c <TSoupIndex::$kfSetDupCount(KeyField *, short)>
    */
}

/**
 * Symbol: TSoupIndex::kfReplaceFirstData(KeyField *, void *)
 * Address: 002ea3b0
 */
TSoupIndex::kfReplaceFirstData(KeyField *, void *) {
    /*
        2ea3b0:	e1a0c00d 	mov	ip, sp
        2ea3b4:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2ea3b8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ea3bc:	e1a06000 	mov	r6, r0
        2ea3c0:	e1a04001 	mov	r4, r1
        2ea3c4:	e1a05002 	mov	r5, r2
        2ea3c8:	e2811002 	add	r1, r1, #2	; 0x2
        2ea3cc:	eb5d5b31 	bl	1a41098 <TSoupIndex::$kfSizeOfKey(void *)>
        2ea3d0:	e2800002 	add	r0, r0, #2	; 0x2
        2ea3d4:	e1a00800 	mov	r0, r0, lsl #16
        2ea3d8:	e1a00840 	mov	r0, r0, asr #16
        2ea3dc:	e3100001 	tst	r0, #1	; 0x1
        2ea3e0:	12800001 	addne	r0, r0, #1	; 0x1
        2ea3e4:	e1a08800 	mov	r8, r0, lsl #16
        2ea3e8:	e1a08848 	mov	r8, r8, asr #16
        2ea3ec:	e1a01005 	mov	r1, r5
        2ea3f0:	e1a00006 	mov	r0, r6
        2ea3f4:	eb5d5b26 	bl	1a41094 <TSoupIndex::$kfSizeOfData(void *)>
        2ea3f8:	e1a00800 	mov	r0, r0, lsl #16
        2ea3fc:	e1a00840 	mov	r0, r0, asr #16
        2ea400:	e3100001 	tst	r0, #1	; 0x1
        2ea404:	12800001 	addne	r0, r0, #1	; 0x1
        2ea408:	e1a07800 	mov	r7, r0, lsl #16
        2ea40c:	e1a07847 	mov	r7, r7, asr #16
        2ea410:	e5940000 	ldr	r0, [r4]
        2ea414:	e1a00820 	mov	r0, r0, lsr #16
        2ea418:	e1b01740 	movs	r1, r0, asr #14
        2ea41c:	1a00000a 	bne	2ea44c <TSoupIndex::kfReplaceFirstData(KeyField *, void *)+0x9c>
        2ea420:	e2000903 	and	r0, r0, #49152	; 0xc000
        2ea424:	e0881007 	add	r1, r8, r7
        2ea428:	e1800001 	orr	r0, r0, r1
        2ea42c:	e5c40001 	strb	r0, [r4, #1]	; fField1
        2ea430:	e1a00440 	mov	r0, r0, asr #8
        2ea434:	e5c40000 	strb	r0, [r4]
        2ea438:	e0840008 	add	r0, r4, r8
        2ea43c:	e1a02007 	mov	r2, r7
        2ea440:	e1a01005 	mov	r1, r5
        2ea444:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        2ea448:	ea632981 	b	1bb4a54 <$memmove>
        2ea44c:	e3a01001 	mov	r1, #1	; 0x1
        2ea450:	e1310740 	teq	r1, r0, asr #14
        2ea454:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2ea458:	e0841008 	add	r1, r4, r8
        2ea45c:	e1a08001 	mov	r8, r1
        2ea460:	e1a00006 	mov	r0, r6
        2ea464:	eb5d5b0a 	bl	1a41094 <TSoupIndex::$kfSizeOfData(void *)>
        2ea468:	e1a00800 	mov	r0, r0, lsl #16
        2ea46c:	e1a00840 	mov	r0, r0, asr #16
        2ea470:	e3100001 	tst	r0, #1	; 0x1
        2ea474:	12800001 	addne	r0, r0, #1	; 0x1
        2ea478:	e1a00800 	mov	r0, r0, lsl #16
        2ea47c:	e1a00840 	mov	r0, r0, asr #16
        2ea480:	e0576000 	subs	r6, r7, r0
        2ea484:	0a000006 	beq	2ea4a4 <TSoupIndex::kfReplaceFirstData(KeyField *, void *)+0xf4>
        2ea488:	e0881000 	add	r1, r8, r0
        2ea48c:	e0810006 	add	r0, r1, r6
        2ea490:	e5942000 	ldr	r2, [r4]
        2ea494:	e1a02102 	mov	r2, r2, lsl #2
        2ea498:	e0842922 	add	r2, r4, r2, lsr #18
        2ea49c:	e0422001 	sub	r2, r2, r1
        2ea4a0:	eb63296b 	bl	1bb4a54 <$memmove>
        2ea4a4:	e1a00008 	mov	r0, r8
        2ea4a8:	e1a02007 	mov	r2, r7
        2ea4ac:	e1a01005 	mov	r1, r5
        2ea4b0:	eb632967 	bl	1bb4a54 <$memmove>
        2ea4b4:	e5940000 	ldr	r0, [r4]
        2ea4b8:	e1a00820 	mov	r0, r0, lsr #16
        2ea4bc:	e2001903 	and	r1, r0, #49152	; 0xc000
        2ea4c0:	e1a00900 	mov	r0, r0, lsl #18
        2ea4c4:	e0860920 	add	r0, r6, r0, lsr #18
        2ea4c8:	e1810000 	orr	r0, r1, r0
        2ea4cc:	e5c40001 	strb	r0, [r4, #1]	; fField1
        2ea4d0:	e1a00440 	mov	r0, r0, asr #8
        2ea4d4:	e5c40000 	strb	r0, [r4]
        2ea4d8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::kfFindDataAdr(KeyField *, void *, void **)
 * Address: 002ea4dc
 */
TSoupIndex::kfFindDataAdr(KeyField *, void *, void **) {
    /*
        2ea4dc:	e1a0c00d 	mov	ip, sp
        2ea4e0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2ea4e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ea4e8:	e1a05000 	mov	r5, r0
        2ea4ec:	e1a06001 	mov	r6, r1
        2ea4f0:	e1a07002 	mov	r7, r2
        2ea4f4:	e1b04003 	movs	r4, r3
        2ea4f8:	e3a00000 	mov	r0, #0	; 0x0
        2ea4fc:	e3a08000 	mov	r8, #0	; 0x0
        2ea500:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        2ea504:	15848000 	strne	r8, [r4]
        2ea508:	e1a0300d 	mov	r3, sp
        2ea50c:	e1a01006 	mov	r1, r6
        2ea510:	e1a00005 	mov	r0, r5
        2ea514:	e59d2000 	ldr	r2, [sp]
        2ea518:	eb5d5ad8 	bl	1a41080 <TSoupIndex::$kfNextDataAdr(KeyField *, void *, void **)>
        2ea51c:	e3300000 	teq	r0, #0	; 0x0
        2ea520:	0a000011 	beq	2ea56c <TSoupIndex::kfFindDataAdr(KeyField *, void *, void **)+0x90>
        2ea524:	e1a01007 	mov	r1, r7
        2ea528:	e1a00005 	mov	r0, r5
        2ea52c:	e59d2000 	ldr	r2, [sp]
        2ea530:	e1a0e00f 	mov	lr, pc
        2ea534:	e595f03c 	ldr	pc, [r5, #60]	; fField60
        2ea538:	e3300000 	teq	r0, #0	; 0x0
        2ea53c:	059d0000 	ldreq	r0, [sp]
        2ea540:	0a00000a 	beq	2ea570 <TSoupIndex::kfFindDataAdr(KeyField *, void *, void **)+0x94>
        2ea544:	e3340000 	teq	r4, #0	; 0x0
        2ea548:	159d0000 	ldrne	r0, [sp]
        2ea54c:	15840000 	strne	r0, [r4]
        2ea550:	e1a0300d 	mov	r3, sp
        2ea554:	e1a01006 	mov	r1, r6
        2ea558:	e1a00005 	mov	r0, r5
        2ea55c:	e59d2000 	ldr	r2, [sp]
        2ea560:	eb5d5ac6 	bl	1a41080 <TSoupIndex::$kfNextDataAdr(KeyField *, void *, void **)>
        2ea564:	e3300000 	teq	r0, #0	; 0x0
        2ea568:	1affffed 	bne	2ea524 <TSoupIndex::kfFindDataAdr(KeyField *, void *, void **)+0x48>
        2ea56c:	e1a00008 	mov	r0, r8
        2ea570:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::kfAssembleKeyField(KeyField *, void *, void *)
 * Address: 002ea574
 */
TSoupIndex::kfAssembleKeyField(KeyField *, void *, void *) {
    /*
        2ea574:	e1a0c00d 	mov	ip, sp
        2ea578:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2ea57c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ea580:	e1a07000 	mov	r7, r0
        2ea584:	e1a04001 	mov	r4, r1
        2ea588:	e1a06002 	mov	r6, r2
        2ea58c:	e1a05003 	mov	r5, r3
        2ea590:	e1a01002 	mov	r1, r2
        2ea594:	eb5d5abf 	bl	1a41098 <TSoupIndex::$kfSizeOfKey(void *)>
        2ea598:	e1a08000 	mov	r8, r0
        2ea59c:	e2800002 	add	r0, r0, #2	; 0x2
        2ea5a0:	e1a00800 	mov	r0, r0, lsl #16
        2ea5a4:	e1a00840 	mov	r0, r0, asr #16
        2ea5a8:	e3100001 	tst	r0, #1	; 0x1
        2ea5ac:	12800001 	addne	r0, r0, #1	; 0x1
        2ea5b0:	e1a09800 	mov	r9, r0, lsl #16
        2ea5b4:	e1a09849 	mov	r9, r9, asr #16
        2ea5b8:	e3350000 	teq	r5, #0	; 0x0
        2ea5bc:	0a000009 	beq	2ea5e8 <TSoupIndex::kfAssembleKeyField(KeyField *, void *, void *)+0x74>
        2ea5c0:	e1a01005 	mov	r1, r5
        2ea5c4:	e1a00007 	mov	r0, r7
        2ea5c8:	eb5d5ab1 	bl	1a41094 <TSoupIndex::$kfSizeOfData(void *)>
        2ea5cc:	e1a00800 	mov	r0, r0, lsl #16
        2ea5d0:	e1a00840 	mov	r0, r0, asr #16
        2ea5d4:	e3100001 	tst	r0, #1	; 0x1
        2ea5d8:	12800001 	addne	r0, r0, #1	; 0x1
        2ea5dc:	e1a07800 	mov	r7, r0, lsl #16
        2ea5e0:	e1a07847 	mov	r7, r7, asr #16
        2ea5e4:	ea000000 	b	2ea5ec <TSoupIndex::kfAssembleKeyField(KeyField *, void *, void *)+0x78>
        2ea5e8:	e3a07000 	mov	r7, #0	; 0x0
        2ea5ec:	e0880007 	add	r0, r8, r7
        2ea5f0:	e2800004 	add	r0, r0, #4	; 0x4
        2ea5f4:	e3500064 	cmp	r0, #100	; 0x64
        2ea5f8:	9a000005 	bls	2ea614 <TSoupIndex::kfAssembleKeyField(KeyField *, void *, void *)+0xa0>
        2ea5fc:	e59f0074 	ldr	r0, [pc, #74]	; 2ea678 <TSoupIndex::kfAssembleKeyField(KeyField *, void *, void *)+0x104>
        2ea600:	e5900000 	ldr	r0, [r0]
        2ea604:	e3a02000 	mov	r2, #0	; 0x0
        2ea608:	e3a0106a 	mov	r1, #106	; 0x6a
        2ea60c:	e2411b2f 	sub	r1, r1, #48128	; 0xbc00
        2ea610:	eb63e2e1 	bl	1be319c <$Throw>
        2ea614:	e5940000 	ldr	r0, [r4]
        2ea618:	e1a00100 	mov	r0, r0, lsl #2
        2ea61c:	e1a00920 	mov	r0, r0, lsr #18
        2ea620:	e5c40001 	strb	r0, [r4, #1]	; fField1
        2ea624:	e1a00440 	mov	r0, r0, asr #8
        2ea628:	e5c40000 	strb	r0, [r4]
        2ea62c:	e5940000 	ldr	r0, [r4]
        2ea630:	e1a00820 	mov	r0, r0, lsr #16
        2ea634:	e2001903 	and	r1, r0, #49152	; 0xc000
        2ea638:	e0890007 	add	r0, r9, r7
        2ea63c:	e1810000 	orr	r0, r1, r0
        2ea640:	e5c40001 	strb	r0, [r4, #1]	; fField1
        2ea644:	e1a00440 	mov	r0, r0, asr #8
        2ea648:	e5c40000 	strb	r0, [r4]
        2ea64c:	e2840002 	add	r0, r4, #2	; 0x2
        2ea650:	e1a02008 	mov	r2, r8
        2ea654:	e1a01006 	mov	r1, r6
        2ea658:	eb6328fd 	bl	1bb4a54 <$memmove>
        2ea65c:	e3370000 	teq	r7, #0	; 0x0
        2ea660:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2ea664:	e0840009 	add	r0, r4, r9
        2ea668:	e1a02007 	mov	r2, r7
        2ea66c:	e1a01005 	mov	r1, r5
        2ea670:	e91b6bf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
        2ea674:	ea6328f6 	b	1bb4a54 <$memmove>
        2ea678:	003712fc 	ldreqsh	r1, [r7], -ip
    */
}

/**
 * Symbol: TSoupIndex::kfDisassembleKeyField(KeyField *, SKey *, SKey *)
 * Address: 002ea6b8
 */
TSoupIndex::kfDisassembleKeyField(KeyField *, SKey *, SKey *) {
    /*
        2ea6b8:	e1a0c00d 	mov	ip, sp
        2ea6bc:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2ea6c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ea6c4:	e1a04000 	mov	r4, r0
        2ea6c8:	e1a07001 	mov	r7, r1
        2ea6cc:	e1b06002 	movs	r6, r2
        2ea6d0:	e1a05003 	mov	r5, r3
        2ea6d4:	0a000007 	beq	2ea6f8 <TSoupIndex::kfDisassembleKeyField(KeyField *, SKey *, SKey *)+0x40>
        2ea6d8:	e2871002 	add	r1, r7, #2	; 0x2
        2ea6dc:	e1a08001 	mov	r8, r1
        2ea6e0:	e1a00004 	mov	r0, r4
        2ea6e4:	eb5d5a6b 	bl	1a41098 <TSoupIndex::$kfSizeOfKey(void *)>
        2ea6e8:	e1a02000 	mov	r2, r0
        2ea6ec:	e1a01008 	mov	r1, r8
        2ea6f0:	e1a00006 	mov	r0, r6
        2ea6f4:	eb6328d6 	bl	1bb4a54 <$memmove>
        2ea6f8:	e3350000 	teq	r5, #0	; 0x0
        2ea6fc:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2ea700:	e1a01007 	mov	r1, r7
        2ea704:	e1a00004 	mov	r0, r4
        2ea708:	eb5d5659 	bl	1a40074 <TSoupIndex::$kfFirstDataAdr(KeyField *)>
        2ea70c:	e1a01000 	mov	r1, r0
        2ea710:	e1a06000 	mov	r6, r0
        2ea714:	e1a00004 	mov	r0, r4
        2ea718:	eb5d5a5d 	bl	1a41094 <TSoupIndex::$kfSizeOfData(void *)>
        2ea71c:	e1a02000 	mov	r2, r0
        2ea720:	e1a01006 	mov	r1, r6
        2ea724:	e1a00005 	mov	r0, r5
        2ea728:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        2ea72c:	ea6328c8 	b	1bb4a54 <$memmove>
    */
}

/**
 * Symbol: TSoupIndex::kfConvertKeyField(long, KeyField *)
 * Address: 002ea730
 */
TSoupIndex::kfConvertKeyField(long, KeyField *) {
    /*
        2ea730:	e1a0c00d 	mov	ip, sp
        2ea734:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2ea738:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ea73c:	e1a05000 	mov	r5, r0
        2ea740:	e1a06001 	mov	r6, r1
        2ea744:	e1a04002 	mov	r4, r2
        2ea748:	e2821002 	add	r1, r2, #2	; 0x2
        2ea74c:	eb5d5a51 	bl	1a41098 <TSoupIndex::$kfSizeOfKey(void *)>
        2ea750:	e5940000 	ldr	r0, [r4]
        2ea754:	e1a00820 	mov	r0, r0, lsr #16
        2ea758:	e1b01740 	movs	r1, r0, asr #14
        2ea75c:	03360001 	teqeq	r6, #1	; 0x1
        2ea760:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        2ea764:	e1a00900 	mov	r0, r0, lsl #18
        2ea768:	e1a00920 	mov	r0, r0, lsr #18
        2ea76c:	e3800901 	orr	r0, r0, #16384	; 0x4000
        2ea770:	e5c40001 	strb	r0, [r4, #1]	; fField1
        2ea774:	e1a00440 	mov	r0, r0, asr #8
        2ea778:	e5c40000 	strb	r0, [r4]
        2ea77c:	e5940000 	ldr	r0, [r4]
        2ea780:	e1a00820 	mov	r0, r0, lsr #16
        2ea784:	e2001903 	and	r1, r0, #49152	; 0xc000
        2ea788:	e1a00900 	mov	r0, r0, lsl #18
        2ea78c:	e1a00920 	mov	r0, r0, lsr #18
        2ea790:	e2800006 	add	r0, r0, #6	; 0x6
        2ea794:	e1810000 	orr	r0, r1, r0
        2ea798:	e5c40001 	strb	r0, [r4, #1]	; fField1
        2ea79c:	e1a00440 	mov	r0, r0, asr #8
        2ea7a0:	e5c40000 	strb	r0, [r4]
        2ea7a4:	e1a01004 	mov	r1, r4
        2ea7a8:	e1a00005 	mov	r0, r5
        2ea7ac:	e3a02001 	mov	r2, #1	; 0x1
        2ea7b0:	eb5d5a35 	bl	1a4108c <TSoupIndex::$kfSetDupCount(KeyField *, short)>
        2ea7b4:	e1a01004 	mov	r1, r4
        2ea7b8:	e1a00005 	mov	r0, r5
        2ea7bc:	e3a02000 	mov	r2, #0	; 0x0
        2ea7c0:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        2ea7c4:	ea5d5a31 	b	1a41090 <TSoupIndex::$kfSetNextDupID(KeyField *, unsigned long)>
    */
}

/**
 * Symbol: TSoupIndex::FirstDupDataAdr(DupNodeHeader *)
 * Address: 002ea7c8
 */
TSoupIndex::FirstDupDataAdr(DupNodeHeader *) {
    /*
        2ea7c8:	e2810010 	add	r0, r1, #16	; 0x10
        2ea7cc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSoupIndex::NextDupDataAdr(DupNodeHeader *, void *, void **)
 * Address: 002ea7d0
 */
TSoupIndex::NextDupDataAdr(DupNodeHeader *, void *, void **) {
    /*
        2ea7d0:	e1a0c00d 	mov	ip, sp
        2ea7d4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2ea7d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ea7dc:	e1b04002 	movs	r4, r2
        2ea7e0:	e1a05003 	mov	r5, r3
        2ea7e4:	1a000003 	bne	2ea7f8 <TSoupIndex::NextDupDataAdr(DupNodeHeader *, void *, void **)+0x28>
        2ea7e8:	eb5d51df 	bl	1a3ef6c <TSoupIndex::$FirstDupDataAdr(DupNodeHeader *)>
        2ea7ec:	e5850000 	str	r0, [r5]
        2ea7f0:	e3a00001 	mov	r0, #1	; 0x1
        2ea7f4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2ea7f8:	e591200c 	ldr	r2, [r1, #12]	; fField12
        2ea7fc:	e0816842 	add	r6, r1, r2, asr #16
        2ea800:	e1a01004 	mov	r1, r4
        2ea804:	eb5d5a22 	bl	1a41094 <TSoupIndex::$kfSizeOfData(void *)>
        2ea808:	e1a00800 	mov	r0, r0, lsl #16
        2ea80c:	e1a00840 	mov	r0, r0, asr #16
        2ea810:	e3100001 	tst	r0, #1	; 0x1
        2ea814:	12800001 	addne	r0, r0, #1	; 0x1
        2ea818:	e1a00800 	mov	r0, r0, lsl #16
        2ea81c:	e0840840 	add	r0, r4, r0, asr #16
        2ea820:	e5850000 	str	r0, [r5]
        2ea824:	e1560000 	cmp	r6, r0
        2ea828:	93a00000 	movls	r0, #0	; 0x0
        2ea82c:	83a00001 	movhi	r0, #1	; 0x1
        2ea830:	e20000ff 	and	r0, r0, #255	; 0xff
        2ea834:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::LastDupDataAdr(KeyField *, DupNodeHeader **)
 * Address: 002ea838
 */
TSoupIndex::LastDupDataAdr(KeyField *, DupNodeHeader **) {
    /*
        2ea838:	e1a0c00d 	mov	ip, sp
        2ea83c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2ea840:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ea844:	e1a04000 	mov	r4, r0
        2ea848:	e1a06001 	mov	r6, r1
        2ea84c:	e1a05002 	mov	r5, r2
        2ea850:	eb5d5a0b 	bl	1a41084 <TSoupIndex::$kfNextDupID(KeyField *)>
        2ea854:	e3300000 	teq	r0, #0	; 0x0
        2ea858:	1a000006 	bne	2ea878 <TSoupIndex::LastDupDataAdr(KeyField *, DupNodeHeader **)+0x40>
        2ea85c:	e3350000 	teq	r5, #0	; 0x0
        2ea860:	13a00000 	movne	r0, #0	; 0x0
        2ea864:	15850000 	strne	r0, [r5]
        2ea868:	e1a01006 	mov	r1, r6
        2ea86c:	e1a00004 	mov	r0, r4
        2ea870:	e91b6bf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
        2ea874:	ea5d5600 	b	1a4007c <TSoupIndex::$kfLastDataAdr(KeyField *)>
        2ea878:	e1a01000 	mov	r1, r0
        2ea87c:	e1a00004 	mov	r0, r4
        2ea880:	eb5d5e37 	bl	1a42164 <TSoupIndex::$ReadADupNode(unsigned long)>
        2ea884:	e1a06000 	mov	r6, r0
        2ea888:	e5b01004 	ldr	r1, [r0, #4]!	; fField4
        2ea88c:	e3310000 	teq	r1, #0	; 0x0
        2ea890:	0a000005 	beq	2ea8ac <TSoupIndex::LastDupDataAdr(KeyField *, DupNodeHeader **)+0x74>
        2ea894:	e1a00004 	mov	r0, r4
        2ea898:	eb5d5e31 	bl	1a42164 <TSoupIndex::$ReadADupNode(unsigned long)>
        2ea89c:	e1a06000 	mov	r6, r0
        2ea8a0:	e5b01004 	ldr	r1, [r0, #4]!	; fField4
        2ea8a4:	e3310000 	teq	r1, #0	; 0x0
        2ea8a8:	1afffff9 	bne	2ea894 <TSoupIndex::LastDupDataAdr(KeyField *, DupNodeHeader **)+0x5c>
        2ea8ac:	e1a01006 	mov	r1, r6
        2ea8b0:	e1a00004 	mov	r0, r4
        2ea8b4:	eb5d51ac 	bl	1a3ef6c <TSoupIndex::$FirstDupDataAdr(DupNodeHeader *)>
        2ea8b8:	e1a07000 	mov	r7, r0
        2ea8bc:	e596000c 	ldr	r0, [r6, #12]	; fField12
        2ea8c0:	e0869840 	add	r9, r6, r0, asr #16
        2ea8c4:	e1a08007 	mov	r8, r7
        2ea8c8:	e1a01007 	mov	r1, r7
        2ea8cc:	e1a00004 	mov	r0, r4
        2ea8d0:	eb5d59ef 	bl	1a41094 <TSoupIndex::$kfSizeOfData(void *)>
        2ea8d4:	e1a00800 	mov	r0, r0, lsl #16
        2ea8d8:	e1a00840 	mov	r0, r0, asr #16
        2ea8dc:	e3100001 	tst	r0, #1	; 0x1
        2ea8e0:	12800001 	addne	r0, r0, #1	; 0x1
        2ea8e4:	e1a00800 	mov	r0, r0, lsl #16
        2ea8e8:	e0877840 	add	r7, r7, r0, asr #16
        2ea8ec:	e1570009 	cmp	r7, r9
        2ea8f0:	3afffff3 	bcc	2ea8c4 <TSoupIndex::LastDupDataAdr(KeyField *, DupNodeHeader **)+0x8c>
        2ea8f4:	e3350000 	teq	r5, #0	; 0x0
        2ea8f8:	15856000 	strne	r6, [r5]
        2ea8fc:	e1a00008 	mov	r0, r8
        2ea900:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::AppendDupData(DupNodeHeader *, void *)
 * Address: 002ea904
 */
TSoupIndex::AppendDupData(DupNodeHeader *, void *) {
    /*
        2ea904:	e1a0c00d 	mov	ip, sp
        2ea908:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2ea90c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ea910:	e1a04001 	mov	r4, r1
        2ea914:	e1a05002 	mov	r5, r2
        2ea918:	e3a07000 	mov	r7, #0	; 0x0
        2ea91c:	e591100c 	ldr	r1, [r1, #12]	; fField12
        2ea920:	e0848841 	add	r8, r4, r1, asr #16
        2ea924:	e1a01002 	mov	r1, r2
        2ea928:	eb5d59d9 	bl	1a41094 <TSoupIndex::$kfSizeOfData(void *)>
        2ea92c:	e1a00800 	mov	r0, r0, lsl #16
        2ea930:	e1a00840 	mov	r0, r0, asr #16
        2ea934:	e3100001 	tst	r0, #1	; 0x1
        2ea938:	12800001 	addne	r0, r0, #1	; 0x1
        2ea93c:	e1a06800 	mov	r6, r0, lsl #16
        2ea940:	e1a06846 	mov	r6, r6, asr #16
        2ea944:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2ea948:	e1560840 	cmp	r6, r0, asr #16
        2ea94c:	ca000016 	bgt	2ea9ac <TSoupIndex::AppendDupData(DupNodeHeader *, void *)+0xa8>
        2ea950:	e1a02006 	mov	r2, r6
        2ea954:	e1a01005 	mov	r1, r5
        2ea958:	e1a00008 	mov	r0, r8
        2ea95c:	eb63283c 	bl	1bb4a54 <$memmove>
        2ea960:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2ea964:	e1a00820 	mov	r0, r0, lsr #16
        2ea968:	e0400006 	sub	r0, r0, r6
        2ea96c:	e5c40009 	strb	r0, [r4, #9]
        2ea970:	e1a00440 	mov	r0, r0, asr #8
        2ea974:	e5c40008 	strb	r0, [r4, #8]	; fField8
        2ea978:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2ea97c:	e1a00820 	mov	r0, r0, lsr #16
        2ea980:	e0800006 	add	r0, r0, r6
        2ea984:	e5c4000d 	strb	r0, [r4, #13]
        2ea988:	e1a00440 	mov	r0, r0, asr #8
        2ea98c:	e5c4000c 	strb	r0, [r4, #12]	; fField12
        2ea990:	e594000a 	ldr	r0, [r4, #10]
        2ea994:	e1a00820 	mov	r0, r0, lsr #16
        2ea998:	e2800001 	add	r0, r0, #1	; 0x1
        2ea99c:	e5c4000b 	strb	r0, [r4, #11]
        2ea9a0:	e1a00440 	mov	r0, r0, asr #8
        2ea9a4:	e5c4000a 	strb	r0, [r4, #10]
        2ea9a8:	e3a07001 	mov	r7, #1	; 0x1
        2ea9ac:	e1a00007 	mov	r0, r7
        2ea9b0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::PrependDupData(DupNodeHeader *, void *)
 * Address: 002ea9b4
 */
TSoupIndex::PrependDupData(DupNodeHeader *, void *) {
    /*
        2ea9b4:	e1a0c00d 	mov	ip, sp
        2ea9b8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2ea9bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ea9c0:	e1a06000 	mov	r6, r0
        2ea9c4:	e1a04001 	mov	r4, r1
        2ea9c8:	e1a05002 	mov	r5, r2
        2ea9cc:	e3a08000 	mov	r8, #0	; 0x0
        2ea9d0:	eb5d5165 	bl	1a3ef6c <TSoupIndex::$FirstDupDataAdr(DupNodeHeader *)>
        2ea9d4:	e1a07000 	mov	r7, r0
        2ea9d8:	e1a01005 	mov	r1, r5
        2ea9dc:	e1a00006 	mov	r0, r6
        2ea9e0:	eb5d59ab 	bl	1a41094 <TSoupIndex::$kfSizeOfData(void *)>
        2ea9e4:	e1a00800 	mov	r0, r0, lsl #16
        2ea9e8:	e1a00840 	mov	r0, r0, asr #16
        2ea9ec:	e3100001 	tst	r0, #1	; 0x1
        2ea9f0:	12800001 	addne	r0, r0, #1	; 0x1
        2ea9f4:	e1a06800 	mov	r6, r0, lsl #16
        2ea9f8:	e1a06846 	mov	r6, r6, asr #16
        2ea9fc:	e0870006 	add	r0, r7, r6
        2eaa00:	e594100c 	ldr	r1, [r4, #12]	; fField12
        2eaa04:	e0841841 	add	r1, r4, r1, asr #16
        2eaa08:	e5942008 	ldr	r2, [r4, #8]	; fField8
        2eaa0c:	e1560842 	cmp	r6, r2, asr #16
        2eaa10:	aa000019 	bge	2eaa7c <TSoupIndex::PrependDupData(DupNodeHeader *, void *)+0xc8>
        2eaa14:	e0412000 	sub	r2, r1, r0
        2eaa18:	e1a01007 	mov	r1, r7
        2eaa1c:	eb63280c 	bl	1bb4a54 <$memmove>
        2eaa20:	e1a02006 	mov	r2, r6
        2eaa24:	e1a01005 	mov	r1, r5
        2eaa28:	e1a00007 	mov	r0, r7
        2eaa2c:	eb632808 	bl	1bb4a54 <$memmove>
        2eaa30:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2eaa34:	e1a00820 	mov	r0, r0, lsr #16
        2eaa38:	e0400006 	sub	r0, r0, r6
        2eaa3c:	e5c40009 	strb	r0, [r4, #9]
        2eaa40:	e1a00440 	mov	r0, r0, asr #8
        2eaa44:	e5c40008 	strb	r0, [r4, #8]	; fField8
        2eaa48:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2eaa4c:	e1a00820 	mov	r0, r0, lsr #16
        2eaa50:	e0800006 	add	r0, r0, r6
        2eaa54:	e5c4000d 	strb	r0, [r4, #13]
        2eaa58:	e1a00440 	mov	r0, r0, asr #8
        2eaa5c:	e5c4000c 	strb	r0, [r4, #12]	; fField12
        2eaa60:	e594000a 	ldr	r0, [r4, #10]
        2eaa64:	e1a00820 	mov	r0, r0, lsr #16
        2eaa68:	e2800001 	add	r0, r0, #1	; 0x1
        2eaa6c:	e5c4000b 	strb	r0, [r4, #11]
        2eaa70:	e1a00440 	mov	r0, r0, asr #8
        2eaa74:	e5c4000a 	strb	r0, [r4, #10]
        2eaa78:	e3a08001 	mov	r8, #1	; 0x1
        2eaa7c:	e1a00008 	mov	r0, r8
        2eaa80:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::DeleteDupData(DupNodeHeader *, void *)
 * Address: 002eaa84
 */
TSoupIndex::DeleteDupData(DupNodeHeader *, void *) {
    /*
        2eaa84:	e1a0c00d 	mov	ip, sp
        2eaa88:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2eaa8c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2eaa90:	e1a06000 	mov	r6, r0
        2eaa94:	e1a04001 	mov	r4, r1
        2eaa98:	e1a05002 	mov	r5, r2
        2eaa9c:	e3a07000 	mov	r7, #0	; 0x0
        2eaaa0:	eb5d48f2 	bl	1a3ce70 <TSoupIndex::$ChangeNode(NodeHeader *)>
        2eaaa4:	e1a01005 	mov	r1, r5
        2eaaa8:	e1a00006 	mov	r0, r6
        2eaaac:	eb5d5978 	bl	1a41094 <TSoupIndex::$kfSizeOfData(void *)>
        2eaab0:	e1a00800 	mov	r0, r0, lsl #16
        2eaab4:	e1a00840 	mov	r0, r0, asr #16
        2eaab8:	e3100001 	tst	r0, #1	; 0x1
        2eaabc:	12800001 	addne	r0, r0, #1	; 0x1
        2eaac0:	e1a06800 	mov	r6, r0, lsl #16
        2eaac4:	e1a06846 	mov	r6, r6, asr #16
        2eaac8:	e0851006 	add	r1, r5, r6
        2eaacc:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2eaad0:	e0840840 	add	r0, r4, r0, asr #16
        2eaad4:	e0402001 	sub	r2, r0, r1
        2eaad8:	e1a00005 	mov	r0, r5
        2eaadc:	eb6327dc 	bl	1bb4a54 <$memmove>
        2eaae0:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2eaae4:	e1a00820 	mov	r0, r0, lsr #16
        2eaae8:	e0800006 	add	r0, r0, r6
        2eaaec:	e5c40009 	strb	r0, [r4, #9]
        2eaaf0:	e1a00440 	mov	r0, r0, asr #8
        2eaaf4:	e5c40008 	strb	r0, [r4, #8]	; fField8
        2eaaf8:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2eaafc:	e1a00820 	mov	r0, r0, lsr #16
        2eab00:	e0400006 	sub	r0, r0, r6
        2eab04:	e5c4000d 	strb	r0, [r4, #13]
        2eab08:	e1a00440 	mov	r0, r0, asr #8
        2eab0c:	e5c4000c 	strb	r0, [r4, #12]	; fField12
        2eab10:	e594000a 	ldr	r0, [r4, #10]
        2eab14:	e1a00820 	mov	r0, r0, lsr #16
        2eab18:	e2400001 	sub	r0, r0, #1	; 0x1
        2eab1c:	e5c4000b 	strb	r0, [r4, #11]
        2eab20:	e1a00440 	mov	r0, r0, asr #8
        2eab24:	e5c4000a 	strb	r0, [r4, #10]
        2eab28:	e594000a 	ldr	r0, [r4, #10]
        2eab2c:	e1b00840 	movs	r0, r0, asr #16
        2eab30:	03a07001 	moveq	r7, #1	; 0x1
        2eab34:	e1a00007 	mov	r0, r7
        2eab38:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::KeyFieldAdr(NodeHeader *, long)
 * Address: 002eab3c
 */
TSoupIndex::KeyFieldAdr(NodeHeader *, long) {
    /*
        2eab3c:	e0810082 	add	r0, r1, r2, lsl #1
        2eab40:	e590000c 	ldr	r0, [r0, #12]	; fField12
        2eab44:	e0810840 	add	r0, r1, r0, asr #16
        2eab48:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSoupIndex::LeftNodeNo(NodeHeader *, long)
 * Address: 002eab4c
 */
TSoupIndex::LeftNodeNo(NodeHeader *, long) {
    /*
        2eab4c:	e1a0c00d 	mov	ip, sp
        2eab50:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2eab54:	e24cb004 	sub	fp, ip, #4	; 0x4
        2eab58:	eb5d553c 	bl	1a40050 <TSoupIndex::$KeyFieldAdr(NodeHeader *, long)>
        2eab5c:	e2400004 	sub	r0, r0, #4	; 0x4
        2eab60:	e24dd004 	sub	sp, sp, #4	; 0x4
        2eab64:	e3100003 	tst	r0, #3	; 0x3
        2eab68:	0a000008 	beq	2eab90 <TSoupIndex::LeftNodeNo(NodeHeader *, long)+0x44>
        2eab6c:	e5d01000 	ldrb	r1, [r0]
        2eab70:	e5cd1000 	strb	r1, [sp]
        2eab74:	e5d01001 	ldrb	r1, [r0, #1]	; fField1
        2eab78:	e5cd1001 	strb	r1, [sp, #1]	; fField1
        2eab7c:	e5d01002 	ldrb	r1, [r0, #2]	; fField2
        2eab80:	e5cd1002 	strb	r1, [sp, #2]	; fField2
        2eab84:	e5d00003 	ldrb	r0, [r0, #3]	; fField3
        2eab88:	e5cd0003 	strb	r0, [sp, #3]	; fField3
        2eab8c:	ea000001 	b	2eab98 <TSoupIndex::LeftNodeNo(NodeHeader *, long)+0x4c>
        2eab90:	e5900000 	ldr	r0, [r0]
        2eab94:	e58d0000 	str	r0, [sp]
        2eab98:	e49d0004 	ldr	r0, [sp], #4	; fField4
        2eab9c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::RightNodeNo(NodeHeader *, long)
 * Address: 002eabdc
 */
TSoupIndex::RightNodeNo(NodeHeader *, long) {
    /*
        2eabdc:	e1a0c00d 	mov	ip, sp
        2eabe0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2eabe4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2eabe8:	e2822001 	add	r2, r2, #1	; 0x1
        2eabec:	eb5d5517 	bl	1a40050 <TSoupIndex::$KeyFieldAdr(NodeHeader *, long)>
        2eabf0:	e2400004 	sub	r0, r0, #4	; 0x4
        2eabf4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2eabf8:	e3100003 	tst	r0, #3	; 0x3
        2eabfc:	0a000008 	beq	2eac24 <TSoupIndex::RightNodeNo(NodeHeader *, long)+0x48>
        2eac00:	e5d01000 	ldrb	r1, [r0]
        2eac04:	e5cd1000 	strb	r1, [sp]
        2eac08:	e5d01001 	ldrb	r1, [r0, #1]	; fField1
        2eac0c:	e5cd1001 	strb	r1, [sp, #1]	; fField1
        2eac10:	e5d01002 	ldrb	r1, [r0, #2]	; fField2
        2eac14:	e5cd1002 	strb	r1, [sp, #2]	; fField2
        2eac18:	e5d00003 	ldrb	r0, [r0, #3]	; fField3
        2eac1c:	e5cd0003 	strb	r0, [sp, #3]	; fField3
        2eac20:	ea000001 	b	2eac2c <TSoupIndex::RightNodeNo(NodeHeader *, long)+0x50>
        2eac24:	e5900000 	ldr	r0, [r0]
        2eac28:	e58d0000 	str	r0, [sp]
        2eac2c:	e49d0004 	ldr	r0, [sp], #4	; fField4
        2eac30:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::FirstNodeNo(NodeHeader *)
 * Address: 002eac34
 */
TSoupIndex::FirstNodeNo(NodeHeader *) {
    /*
        2eac34:	e3a02000 	mov	r2, #0	; 0x0
        2eac38:	ea5d591c 	b	1a410b0 <TSoupIndex::$LeftNodeNo(NodeHeader *, long)>
    */
}

/**
 * Symbol: TSoupIndex::LastNodeNo(NodeHeader *)
 * Address: 002eac3c
 */
TSoupIndex::LastNodeNo(NodeHeader *) {
    /*
        2eac3c:	e591200a 	ldr	r2, [r1, #10]
        2eac40:	e1a02842 	mov	r2, r2, asr #16
        2eac44:	ea5d5919 	b	1a410b0 <TSoupIndex::$LeftNodeNo(NodeHeader *, long)>
    */
}

/**
 * Symbol: TSoupIndex::SetNodeNo(NodeHeader *, long, unsigned long)
 * Address: 002eac48
 */
TSoupIndex::SetNodeNo(NodeHeader *, long, unsigned long) {
    /*
        2eac48:	e1a0c00d 	mov	ip, sp
        2eac4c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2eac50:	e24cb004 	sub	fp, ip, #4	; 0x4
        2eac54:	e1a04003 	mov	r4, r3
        2eac58:	e24dd008 	sub	sp, sp, #8	; 0x8
        2eac5c:	eb5d54fb 	bl	1a40050 <TSoupIndex::$KeyFieldAdr(NodeHeader *, long)>
        2eac60:	e2400004 	sub	r0, r0, #4	; 0x4
        2eac64:	e88d0011 	stmia	sp, {r0, r4}
        2eac68:	e3100003 	tst	r0, #3	; 0x3
        2eac6c:	e59d0000 	ldr	r0, [sp]
        2eac70:	0a000008 	beq	2eac98 <TSoupIndex::SetNodeNo(NodeHeader *, long, unsigned long)+0x50>
        2eac74:	e5dd1004 	ldrb	r1, [sp, #4]	; fField4
        2eac78:	e5c01000 	strb	r1, [r0]
        2eac7c:	e5dd1005 	ldrb	r1, [sp, #5]
        2eac80:	e5c01001 	strb	r1, [r0, #1]	; fField1
        2eac84:	e5dd1006 	ldrb	r1, [sp, #6]	; fField6
        2eac88:	e5c01002 	strb	r1, [r0, #2]	; fField2
        2eac8c:	e5dd1007 	ldrb	r1, [sp, #7]
        2eac90:	e5c01003 	strb	r1, [r0, #3]	; fField3
        2eac94:	ea000000 	b	2eac9c <TSoupIndex::SetNodeNo(NodeHeader *, long, unsigned long)+0x54>
        2eac98:	e5804000 	str	r4, [r0]
        2eac9c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::FirstKeyField(NodeHeader *)
 * Address: 002eaca0
 */
TSoupIndex::FirstKeyField(NodeHeader *) {
    /*
        2eaca0:	e3a02000 	mov	r2, #0	; 0x0
        2eaca4:	ea5d54e9 	b	1a40050 <TSoupIndex::$KeyFieldAdr(NodeHeader *, long)>
    */
}

/**
 * Symbol: TSoupIndex::LastKeyField(NodeHeader *)
 * Address: 002eaca8
 */
TSoupIndex::LastKeyField(NodeHeader *) {
    /*
        2eaca8:	e591000a 	ldr	r0, [r1, #10]
        2eacac:	e1a00840 	mov	r0, r0, asr #16
        2eacb0:	e2400001 	sub	r0, r0, #1	; 0x1
        2eacb4:	e0810080 	add	r0, r1, r0, lsl #1
        2eacb8:	e590000c 	ldr	r0, [r0, #12]	; fField12
        2eacbc:	e0810840 	add	r0, r1, r0, asr #16
        2eacc0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSoupIndex::KeyFieldBase(NodeHeader *)
 * Address: 002eacc4
 */
TSoupIndex::KeyFieldBase(NodeHeader *) {
    /*
        2eacc4:	e591200a 	ldr	r2, [r1, #10]
        2eacc8:	e1a02842 	mov	r2, r2, asr #16
        2eaccc:	e5910008 	ldr	r0, [r1, #8]	; fField8
        2eacd0:	e0811082 	add	r1, r1, r2, lsl #1
        2eacd4:	e0810840 	add	r0, r1, r0, asr #16
        2eacd8:	e280000e 	add	r0, r0, #14	; 0xe
        2eacdc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSoupIndex::MoveKey(KeyField *, KeyField *)
 * Address: 002eace0
 */
TSoupIndex::MoveKey(KeyField *, KeyField *) {
    /*
        2eace0:	e1a0c00d 	mov	ip, sp
        2eace4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2eace8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2eacec:	e1a00002 	mov	r0, r2
        2eacf0:	e5912000 	ldr	r2, [r1]
        2eacf4:	e1a02102 	mov	r2, r2, lsl #2
        2eacf8:	e1b02922 	movs	r2, r2, lsr #18
        2eacfc:	0a000002 	beq	2ead0c <TSoupIndex::MoveKey(KeyField *, KeyField *)+0x2c>
        2ead00:	eb632753 	bl	1bb4a54 <$memmove>
        2ead04:	e3a00001 	mov	r0, #1	; 0x1
        2ead08:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        2ead0c:	e5901000 	ldr	r1, [r0]
        2ead10:	e1a01821 	mov	r1, r1, lsr #16
        2ead14:	e2011903 	and	r1, r1, #49152	; 0xc000
        2ead18:	e5c01001 	strb	r1, [r0, #1]	; fField1
        2ead1c:	e1a01441 	mov	r1, r1, asr #8
        2ead20:	e5c01000 	strb	r1, [r0]
        2ead24:	e3a00000 	mov	r0, #0	; 0x0
        2ead28:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::CopyKeyFmNode(KeyField *, unsigned long *, NodeHeader *, long)
 * Address: 002ead2c
 */
TSoupIndex::CopyKeyFmNode(KeyField *, unsigned long *, NodeHeader *, long) {
    /*
        2ead2c:	e1a0c00d 	mov	ip, sp
        2ead30:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2ead34:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ead38:	e1a05000 	mov	r5, r0
        2ead3c:	e1a07001 	mov	r7, r1
        2ead40:	e1a06002 	mov	r6, r2
        2ead44:	e1a04003 	mov	r4, r3
        2ead48:	e59b8004 	ldr	r8, [fp, #4]	; fField4
        2ead4c:	e1a02008 	mov	r2, r8
        2ead50:	e1a01003 	mov	r1, r3
        2ead54:	eb5d54bd 	bl	1a40050 <TSoupIndex::$KeyFieldAdr(NodeHeader *, long)>
        2ead58:	e1a01000 	mov	r1, r0
        2ead5c:	e5900000 	ldr	r0, [r0]
        2ead60:	e1a02100 	mov	r2, r0, lsl #2
        2ead64:	e1a02922 	mov	r2, r2, lsr #18
        2ead68:	e1a00007 	mov	r0, r7
        2ead6c:	eb632738 	bl	1bb4a54 <$memmove>
        2ead70:	e1a02008 	mov	r2, r8
        2ead74:	e1a01004 	mov	r1, r4
        2ead78:	e1a00005 	mov	r0, r5
        2ead7c:	eb5d58cb 	bl	1a410b0 <TSoupIndex::$LeftNodeNo(NodeHeader *, long)>
        2ead80:	e5860000 	str	r0, [r6]
        2ead84:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::KeyAfterNodeNo(NodeHeader *, unsigned long, long *)
 * Address: 002ead88
 */
TSoupIndex::KeyAfterNodeNo(NodeHeader *, unsigned long, long *) {
    /*
        2ead88:	e1a0c00d 	mov	ip, sp
        2ead8c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2ead90:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ead94:	e1a06000 	mov	r6, r0
        2ead98:	e1a05001 	mov	r5, r1
        2ead9c:	e1a07002 	mov	r7, r2
        2eada0:	e1a04003 	mov	r4, r3
        2eada4:	e3a02000 	mov	r2, #0	; 0x0
        2eada8:	e5832000 	str	r2, [r3]
        2eadac:	eb5d58bf 	bl	1a410b0 <TSoupIndex::$LeftNodeNo(NodeHeader *, long)>
        2eadb0:	e1300007 	teq	r0, r7
        2eadb4:	0a000007 	beq	2eadd8 <TSoupIndex::KeyAfterNodeNo(NodeHeader *, unsigned long, long *)+0x50>
        2eadb8:	e5940000 	ldr	r0, [r4]
        2eadbc:	e2802001 	add	r2, r0, #1	; 0x1
        2eadc0:	e1a01005 	mov	r1, r5
        2eadc4:	e1a00006 	mov	r0, r6
        2eadc8:	e5842000 	str	r2, [r4]
        2eadcc:	eb5d58b7 	bl	1a410b0 <TSoupIndex::$LeftNodeNo(NodeHeader *, long)>
        2eadd0:	e1300007 	teq	r0, r7
        2eadd4:	1afffff7 	bne	2eadb8 <TSoupIndex::KeyAfterNodeNo(NodeHeader *, unsigned long, long *)+0x30>
        2eadd8:	e1a01005 	mov	r1, r5
        2eaddc:	e1a00006 	mov	r0, r6
        2eade0:	e5942000 	ldr	r2, [r4]
        2eade4:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        2eade8:	ea5d5498 	b	1a40050 <TSoupIndex::$KeyFieldAdr(NodeHeader *, long)>
    */
}

/**
 * Symbol: TSoupIndex::KeyBeforeNodeNo(NodeHeader *, unsigned long, long *)
 * Address: 002eae20
 */
TSoupIndex::KeyBeforeNodeNo(NodeHeader *, unsigned long, long *) {
    /*
        2eae20:	e1a0c00d 	mov	ip, sp
        2eae24:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2eae28:	e24cb004 	sub	fp, ip, #4	; 0x4
        2eae2c:	e1a05000 	mov	r5, r0
        2eae30:	e1a04001 	mov	r4, r1
        2eae34:	e1a06002 	mov	r6, r2
        2eae38:	e1a07003 	mov	r7, r3
        2eae3c:	e3a02000 	mov	r2, #0	; 0x0
        2eae40:	e1a08002 	mov	r8, r2
        2eae44:	eb5d5899 	bl	1a410b0 <TSoupIndex::$LeftNodeNo(NodeHeader *, long)>
        2eae48:	e1300006 	teq	r0, r6
        2eae4c:	0a000006 	beq	2eae6c <TSoupIndex::KeyBeforeNodeNo(NodeHeader *, unsigned long, long *)+0x4c>
        2eae50:	e2882001 	add	r2, r8, #1	; 0x1
        2eae54:	e1a08002 	mov	r8, r2
        2eae58:	e1a01004 	mov	r1, r4
        2eae5c:	e1a00005 	mov	r0, r5
        2eae60:	eb5d5892 	bl	1a410b0 <TSoupIndex::$LeftNodeNo(NodeHeader *, long)>
        2eae64:	e1300006 	teq	r0, r6
        2eae68:	1afffff8 	bne	2eae50 <TSoupIndex::KeyBeforeNodeNo(NodeHeader *, unsigned long, long *)+0x30>
        2eae6c:	e2482001 	sub	r2, r8, #1	; 0x1
        2eae70:	e3380000 	teq	r8, #0	; 0x0
        2eae74:	e5872000 	str	r2, [r7]
        2eae78:	03a00000 	moveq	r0, #0	; 0x0
        2eae7c:	11a01004 	movne	r1, r4
        2eae80:	11a00005 	movne	r0, r5
        2eae84:	191b69f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        2eae88:	1a5d5470 	bne	1a40050 <TSoupIndex::$KeyFieldAdr(NodeHeader *, long)>
        2eae8c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::KeyInNode(KeyField *, NodeHeader *, unsigned long *, long *)
 * Address: 002eae90
 */
TSoupIndex::KeyInNode(KeyField *, NodeHeader *, unsigned long *, long *) {
    /*
        2eae90:	e1a0c00d 	mov	ip, sp
        2eae94:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2eae98:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2eae9c:	e24cb014 	sub	fp, ip, #20	; 0x14
        2eaea0:	e1a05000 	mov	r5, r0
        2eaea4:	e1a04002 	mov	r4, r2
        2eaea8:	e3a06000 	mov	r6, #0	; 0x0
        2eaeac:	e3a08000 	mov	r8, #0	; 0x0
        2eaeb0:	e59ba014 	ldr	sl, [fp, #20]	; fField20
        2eaeb4:	e592000a 	ldr	r0, [r2, #10]
        2eaeb8:	e1a00840 	mov	r0, r0, asr #16
        2eaebc:	e2507001 	subs	r7, r0, #1	; 0x1
        2eaec0:	4a000014 	bmi	2eaf18 <TSoupIndex::KeyInNode(KeyField *, NodeHeader *, unsigned long *, long *)+0x88>
        2eaec4:	e2819002 	add	r9, r1, #2	; 0x2
        2eaec8:	e0470008 	sub	r0, r7, r8
        2eaecc:	e0800fa0 	add	r0, r0, r0, lsr #31
        2eaed0:	e08820c0 	add	r2, r8, r0, asr #1
        2eaed4:	e1a06002 	mov	r6, r2
        2eaed8:	e1a01004 	mov	r1, r4
        2eaedc:	e1a00005 	mov	r0, r5
        2eaee0:	eb5d545a 	bl	1a40050 <TSoupIndex::$KeyFieldAdr(NodeHeader *, long)>
        2eaee4:	e2802002 	add	r2, r0, #2	; 0x2
        2eaee8:	e1a01009 	mov	r1, r9
        2eaeec:	e1a00005 	mov	r0, r5
        2eaef0:	eb5d7d92 	bl	1a4a540 <TSoupIndex::$CompareKeys(SKey const &, SKey const &)>
        2eaef4:	e3500000 	cmp	r0, #0	; 0x0
        2eaef8:	c2868001 	addgt	r8, r6, #1	; 0x1
        2eaefc:	ca000001 	bgt	2eaf08 <TSoupIndex::KeyInNode(KeyField *, NodeHeader *, unsigned long *, long *)+0x78>
        2eaf00:	aa00000d 	bge	2eaf3c <TSoupIndex::KeyInNode(KeyField *, NodeHeader *, unsigned long *, long *)+0xac>
        2eaf04:	e2467001 	sub	r7, r6, #1	; 0x1
        2eaf08:	e1580007 	cmp	r8, r7
        2eaf0c:	daffffed 	ble	2eaec8 <TSoupIndex::KeyInNode(KeyField *, NodeHeader *, unsigned long *, long *)+0x38>
        2eaf10:	e3500000 	cmp	r0, #0	; 0x0
        2eaf14:	c2866001 	addgt	r6, r6, #1	; 0x1
        2eaf18:	e58a6000 	str	r6, [sl]
        2eaf1c:	e1a02006 	mov	r2, r6
        2eaf20:	e1a01004 	mov	r1, r4
        2eaf24:	e1a00005 	mov	r0, r5
        2eaf28:	eb5d5860 	bl	1a410b0 <TSoupIndex::$LeftNodeNo(NodeHeader *, long)>
        2eaf2c:	e59b3010 	ldr	r3, [fp, #16]	; fField16
        2eaf30:	e5830000 	str	r0, [r3]
        2eaf34:	e3a00000 	mov	r0, #0	; 0x0
        2eaf38:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2eaf3c:	e58a6000 	str	r6, [sl]
        2eaf40:	e1a02006 	mov	r2, r6
        2eaf44:	e1a01004 	mov	r1, r4
        2eaf48:	e1a00005 	mov	r0, r5
        2eaf4c:	eb5d5857 	bl	1a410b0 <TSoupIndex::$LeftNodeNo(NodeHeader *, long)>
        2eaf50:	e59b3010 	ldr	r3, [fp, #16]	; fField16
        2eaf54:	e5830000 	str	r0, [r3]
        2eaf58:	e3a00001 	mov	r0, #1	; 0x1
        2eaf5c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::LastSlotInNode(NodeHeader *)
 * Address: 002eaf60
 */
TSoupIndex::LastSlotInNode(NodeHeader *) {
    /*
        2eaf60:	e591000a 	ldr	r0, [r1, #10]
        2eaf64:	e1a00840 	mov	r0, r0, asr #16
        2eaf68:	e2400001 	sub	r0, r0, #1	; 0x1
        2eaf6c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSoupIndex::BytesInNode(NodeHeader *)
 * Address: 002eaf70
 */
TSoupIndex::BytesInNode(NodeHeader *) {
    /*
        2eaf70:	e5900014 	ldr	r0, [r0, #20]	; fField20
        2eaf74:	e5911008 	ldr	r1, [r1, #8]	; fField8
        2eaf78:	e0400841 	sub	r0, r0, r1, asr #16
        2eaf7c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSoupIndex::RoomInNode(NodeHeader *, KeyField *)
 * Address: 002eaf80
 */
TSoupIndex::RoomInNode(NodeHeader *, KeyField *) {
    /*
        2eaf80:	e5910008 	ldr	r0, [r1, #8]	; fField8
        2eaf84:	e5921000 	ldr	r1, [r2]
        2eaf88:	e1a01101 	mov	r1, r1, lsl #2
        2eaf8c:	e1a01921 	mov	r1, r1, lsr #18
        2eaf90:	e2811006 	add	r1, r1, #6	; 0x6
        2eaf94:	e1510840 	cmp	r1, r0, asr #16
        2eaf98:	a3a00000 	movge	r0, #0	; 0x0
        2eaf9c:	b3a00001 	movlt	r0, #1	; 0x1
        2eafa0:	e20000ff 	and	r0, r0, #255	; 0xff
        2eafa4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSoupIndex::NodeUnderflow(NodeHeader *)
 * Address: 002eafa8
 */
TSoupIndex::NodeUnderflow(NodeHeader *) {
    /*
        2eafa8:	e5911008 	ldr	r1, [r1, #8]	; fField8
        2eafac:	e1a01841 	mov	r1, r1, asr #16
        2eafb0:	e5900014 	ldr	r0, [r0, #20]	; fField20
        2eafb4:	e0800fa0 	add	r0, r0, r0, lsr #31
        2eafb8:	e15100c0 	cmp	r1, r0, asr #1
        2eafbc:	d3a00000 	movle	r0, #0	; 0x0
        2eafc0:	c3a00001 	movgt	r0, #1	; 0x1
        2eafc4:	e20000ff 	and	r0, r0, #255	; 0xff
        2eafc8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSoupIndex::PutKeyIntoNode(KeyField *, unsigned long, NodeHeader *, long)
 * Address: 002eafcc
 */
TSoupIndex::PutKeyIntoNode(KeyField *, unsigned long, NodeHeader *, long) {
    /*
        2eafcc:	e1a0c00d 	mov	ip, sp
        2eafd0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2eafd4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2eafd8:	e1a05000 	mov	r5, r0
        2eafdc:	e1a06001 	mov	r6, r1
        2eafe0:	e1a07002 	mov	r7, r2
        2eafe4:	e1a04003 	mov	r4, r3
        2eafe8:	e1a02001 	mov	r2, r1
        2eafec:	e1a01003 	mov	r1, r3
        2eaff0:	e59b8004 	ldr	r8, [fp, #4]	; fField4
        2eaff4:	eb5d606c 	bl	1a431ac <TSoupIndex::$RoomInNode(NodeHeader *, KeyField *)>
        2eaff8:	e3300000 	teq	r0, #0	; 0x0
        2eaffc:	1a000005 	bne	2eb018 <TSoupIndex::PutKeyIntoNode(KeyField *, unsigned long, NodeHeader *, long)+0x4c>
        2eb000:	e59f00dc 	ldr	r0, [pc, #dc]	; 2eb0e4 <TSoupIndex::PutKeyIntoNode(KeyField *, unsigned long, NodeHeader *, long)+0x118>
        2eb004:	e5900000 	ldr	r0, [r0]
        2eb008:	e3a02000 	mov	r2, #0	; 0x0
        2eb00c:	e3a0106a 	mov	r1, #106	; 0x6a
        2eb010:	e2411b2f 	sub	r1, r1, #48128	; 0xbc00
        2eb014:	eb63e060 	bl	1be319c <$Throw>
        2eb018:	e5960000 	ldr	r0, [r6]
        2eb01c:	e1a09100 	mov	r9, r0, lsl #2
        2eb020:	e1a09929 	mov	r9, r9, lsr #18
        2eb024:	e1a01004 	mov	r1, r4
        2eb028:	e1a00005 	mov	r0, r5
        2eb02c:	eb5d5408 	bl	1a40054 <TSoupIndex::$KeyFieldBase(NodeHeader *)>
        2eb030:	e040a009 	sub	sl, r0, r9
        2eb034:	e1a02009 	mov	r2, r9
        2eb038:	e1a01006 	mov	r1, r6
        2eb03c:	e1a0000a 	mov	r0, sl
        2eb040:	eb632683 	bl	1bb4a54 <$memmove>
        2eb044:	e594000a 	ldr	r0, [r4, #10]
        2eb048:	e0680840 	rsb	r0, r8, r0, asr #16
        2eb04c:	e2800001 	add	r0, r0, #1	; 0x1
        2eb050:	e1a02080 	mov	r2, r0, lsl #1
        2eb054:	e0846088 	add	r6, r4, r8, lsl #1
        2eb058:	e286100c 	add	r1, r6, #12	; 0xc
        2eb05c:	e286000e 	add	r0, r6, #14	; 0xe
        2eb060:	eb63267b 	bl	1bb4a54 <$memmove>
        2eb064:	e04a0004 	sub	r0, sl, r4
        2eb068:	e5c6000d 	strb	r0, [r6, #13]
        2eb06c:	e1a00440 	mov	r0, r0, asr #8
        2eb070:	e5c6000c 	strb	r0, [r6, #12]	; fField12
        2eb074:	e1a02008 	mov	r2, r8
        2eb078:	e1a01004 	mov	r1, r4
        2eb07c:	e1a00005 	mov	r0, r5
        2eb080:	eb5d6048 	bl	1a431a8 <TSoupIndex::$RightNodeNo(NodeHeader *, long)>
        2eb084:	e1a03000 	mov	r3, r0
        2eb088:	e1a02008 	mov	r2, r8
        2eb08c:	e1a01004 	mov	r1, r4
        2eb090:	e1a00005 	mov	r0, r5
        2eb094:	eb5d604e 	bl	1a431d4 <TSoupIndex::$SetNodeNo(NodeHeader *, long, unsigned long)>
        2eb098:	e2882001 	add	r2, r8, #1	; 0x1
        2eb09c:	e1a03007 	mov	r3, r7
        2eb0a0:	e1a01004 	mov	r1, r4
        2eb0a4:	e1a00005 	mov	r0, r5
        2eb0a8:	eb5d6049 	bl	1a431d4 <TSoupIndex::$SetNodeNo(NodeHeader *, long, unsigned long)>
        2eb0ac:	e594000a 	ldr	r0, [r4, #10]
        2eb0b0:	e1a00820 	mov	r0, r0, lsr #16
        2eb0b4:	e2800001 	add	r0, r0, #1	; 0x1
        2eb0b8:	e5c4000b 	strb	r0, [r4, #11]
        2eb0bc:	e1a00440 	mov	r0, r0, asr #8
        2eb0c0:	e5c4000a 	strb	r0, [r4, #10]
        2eb0c4:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2eb0c8:	e1a00820 	mov	r0, r0, lsr #16
        2eb0cc:	e2891006 	add	r1, r9, #6	; 0x6
        2eb0d0:	e0400001 	sub	r0, r0, r1
        2eb0d4:	e5c40009 	strb	r0, [r4, #9]
        2eb0d8:	e1a00440 	mov	r0, r0, asr #8
        2eb0dc:	e5c40008 	strb	r0, [r4, #8]	; fField8
        2eb0e0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2eb0e4:	003712fc 	ldreqsh	r1, [r7], -ip
    */
}

/**
 * Symbol: TSoupIndex::DeleteKeyFromNode(NodeHeader *, long)
 * Address: 002eb0e8
 */
TSoupIndex::DeleteKeyFromNode(NodeHeader *, long) {
    /*
        2eb0e8:	e1a0c00d 	mov	ip, sp
        2eb0ec:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2eb0f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2eb0f4:	e1a07000 	mov	r7, r0
        2eb0f8:	e1a04001 	mov	r4, r1
        2eb0fc:	e1b05002 	movs	r5, r2
        2eb100:	4a000002 	bmi	2eb110 <TSoupIndex::DeleteKeyFromNode(NodeHeader *, long)+0x28>
        2eb104:	e594000a 	ldr	r0, [r4, #10]
        2eb108:	e1550840 	cmp	r5, r0, asr #16
        2eb10c:	ba000005 	blt	2eb128 <TSoupIndex::DeleteKeyFromNode(NodeHeader *, long)+0x40>
        2eb110:	e59f0128 	ldr	r0, [pc, #128]	; 2eb240 <TSoupIndex::DeleteKeyFromNode(NodeHeader *, long)+0x158>
        2eb114:	e5900000 	ldr	r0, [r0]
        2eb118:	e3a02000 	mov	r2, #0	; 0x0
        2eb11c:	e3a0106a 	mov	r1, #106	; 0x6a
        2eb120:	e2411b2f 	sub	r1, r1, #48128	; 0xbc00
        2eb124:	eb63e01c 	bl	1be319c <$Throw>
        2eb128:	e1a02005 	mov	r2, r5
        2eb12c:	e1a01004 	mov	r1, r4
        2eb130:	e1a00007 	mov	r0, r7
        2eb134:	eb5d57dd 	bl	1a410b0 <TSoupIndex::$LeftNodeNo(NodeHeader *, long)>
        2eb138:	e1a03000 	mov	r3, r0
        2eb13c:	e2852001 	add	r2, r5, #1	; 0x1
        2eb140:	e1a01004 	mov	r1, r4
        2eb144:	e1a00007 	mov	r0, r7
        2eb148:	eb5d6021 	bl	1a431d4 <TSoupIndex::$SetNodeNo(NodeHeader *, long, unsigned long)>
        2eb14c:	e1a02005 	mov	r2, r5
        2eb150:	e1a01004 	mov	r1, r4
        2eb154:	e1a00007 	mov	r0, r7
        2eb158:	eb5d53bc 	bl	1a40050 <TSoupIndex::$KeyFieldAdr(NodeHeader *, long)>
        2eb15c:	e1a08000 	mov	r8, r0
        2eb160:	e5900000 	ldr	r0, [r0]
        2eb164:	e1a00100 	mov	r0, r0, lsl #2
        2eb168:	e1a00920 	mov	r0, r0, lsr #18
        2eb16c:	e2800004 	add	r0, r0, #4	; 0x4
        2eb170:	e1a06800 	mov	r6, r0, lsl #16
        2eb174:	e1a06846 	mov	r6, r6, asr #16
        2eb178:	e1a01004 	mov	r1, r4
        2eb17c:	e1a00007 	mov	r0, r7
        2eb180:	eb5d53b3 	bl	1a40054 <TSoupIndex::$KeyFieldBase(NodeHeader *)>
        2eb184:	e1a01000 	mov	r1, r0
        2eb188:	e0847085 	add	r7, r4, r5, lsl #1
        2eb18c:	e597000c 	ldr	r0, [r7, #12]	; fField12
        2eb190:	e0869840 	add	r9, r6, r0, asr #16
        2eb194:	e0480001 	sub	r0, r8, r1
        2eb198:	e2402004 	sub	r2, r0, #4	; 0x4
        2eb19c:	e0810006 	add	r0, r1, r6
        2eb1a0:	eb63262b 	bl	1bb4a54 <$memmove>
        2eb1a4:	e594000a 	ldr	r0, [r4, #10]
        2eb1a8:	e0650840 	rsb	r0, r5, r0, asr #16
        2eb1ac:	e2800001 	add	r0, r0, #1	; 0x1
        2eb1b0:	e1a02080 	mov	r2, r0, lsl #1
        2eb1b4:	e287100e 	add	r1, r7, #14	; 0xe
        2eb1b8:	e287000c 	add	r0, r7, #12	; 0xc
        2eb1bc:	eb632624 	bl	1bb4a54 <$memmove>
        2eb1c0:	e594000a 	ldr	r0, [r4, #10]
        2eb1c4:	e1a00820 	mov	r0, r0, lsr #16
        2eb1c8:	e2400001 	sub	r0, r0, #1	; 0x1
        2eb1cc:	e5c4000b 	strb	r0, [r4, #11]
        2eb1d0:	e1a00440 	mov	r0, r0, asr #8
        2eb1d4:	e5c4000a 	strb	r0, [r4, #10]
        2eb1d8:	e5941008 	ldr	r1, [r4, #8]	; fField8
        2eb1dc:	e1a01821 	mov	r1, r1, lsr #16
        2eb1e0:	e2860002 	add	r0, r6, #2	; 0x2
        2eb1e4:	e0810000 	add	r0, r1, r0
        2eb1e8:	e5c40009 	strb	r0, [r4, #9]
        2eb1ec:	e1a00440 	mov	r0, r0, asr #8
        2eb1f0:	e5c40008 	strb	r0, [r4, #8]	; fField8
        2eb1f4:	e3a00000 	mov	r0, #0	; 0x0
        2eb1f8:	e594100a 	ldr	r1, [r4, #10]
        2eb1fc:	e1a01841 	mov	r1, r1, asr #16
        2eb200:	e3510000 	cmp	r1, #0	; 0x0
        2eb204:	d91babf0 	ldmledb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2eb208:	e0841080 	add	r1, r4, r0, lsl #1
        2eb20c:	e591200c 	ldr	r2, [r1, #12]	; fField12
        2eb210:	e1a02842 	mov	r2, r2, asr #16
        2eb214:	e1520009 	cmp	r2, r9
        2eb218:	aa000003 	bge	2eb22c <TSoupIndex::DeleteKeyFromNode(NodeHeader *, long)+0x144>
        2eb21c:	e0822006 	add	r2, r2, r6
        2eb220:	e5c1200d 	strb	r2, [r1, #13]
        2eb224:	e1a02442 	mov	r2, r2, asr #8
        2eb228:	e5c1200c 	strb	r2, [r1, #12]	; fField12
        2eb22c:	e2800001 	add	r0, r0, #1	; 0x1
        2eb230:	e594100a 	ldr	r1, [r4, #10]
        2eb234:	e1500841 	cmp	r0, r1, asr #16
        2eb238:	bafffff2 	blt	2eb208 <TSoupIndex::DeleteKeyFromNode(NodeHeader *, long)+0x120>
        2eb23c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2eb240:	003712fc 	ldreqsh	r1, [r7], -ip
    */
}

/**
 * Symbol: TSoupIndex::InitNode(NodeHeader *, unsigned long)
 * Address: 002eb244
 */
TSoupIndex::InitNode(NodeHeader *, unsigned long) {
    /*
        2eb244:	e1a0c00d 	mov	ip, sp
        2eb248:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2eb24c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2eb250:	e1a05000 	mov	r5, r0
        2eb254:	e1a04001 	mov	r4, r1
        2eb258:	e3a06000 	mov	r6, #0	; 0x0
        2eb25c:	e8810044 	stmia	r1, {r2, r6}
        2eb260:	e5900014 	ldr	r0, [r0, #20]	; fField20
        2eb264:	e2400014 	sub	r0, r0, #20	; 0x14
        2eb268:	e5c10009 	strb	r0, [r1, #9]
        2eb26c:	e1a00440 	mov	r0, r0, asr #8
        2eb270:	e5c10008 	strb	r0, [r1, #8]	; fField8
        2eb274:	e5c1600b 	strb	r6, [r1, #11]
        2eb278:	e5c1600a 	strb	r6, [r1, #10]
        2eb27c:	e5950014 	ldr	r0, [r5, #20]	; fField20
        2eb280:	e2400002 	sub	r0, r0, #2	; 0x2
        2eb284:	e5c4000d 	strb	r0, [r4, #13]
        2eb288:	e1a00440 	mov	r0, r0, asr #8
        2eb28c:	e5c4000c 	strb	r0, [r4, #12]	; fField12
        2eb290:	e1a01004 	mov	r1, r4
        2eb294:	e1a00005 	mov	r0, r5
        2eb298:	eb5d4f34 	bl	1a3ef70 <TSoupIndex::$FirstKeyField(NodeHeader *)>
        2eb29c:	e5c06001 	strb	r6, [r0, #1]	; fField1
        2eb2a0:	e5c06000 	strb	r6, [r0]
        2eb2a4:	e1a01004 	mov	r1, r4
        2eb2a8:	e1a00005 	mov	r0, r5
        2eb2ac:	e3a03000 	mov	r3, #0	; 0x0
        2eb2b0:	e3a02000 	mov	r2, #0	; 0x0
        2eb2b4:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        2eb2b8:	ea5d5fc5 	b	1a431d4 <TSoupIndex::$SetNodeNo(NodeHeader *, long, unsigned long)>
    */
}

/**
 * Symbol: TSoupIndex::CreateNewRoot(KeyField *, unsigned long)
 * Address: 002eb2bc
 */
TSoupIndex::CreateNewRoot(KeyField *, unsigned long) {
    /*
        2eb2bc:	e1a0c00d 	mov	ip, sp
        2eb2c0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2eb2c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2eb2c8:	e1a04000 	mov	r4, r0
        2eb2cc:	e1a06001 	mov	r6, r1
        2eb2d0:	e1a05002 	mov	r5, r2
        2eb2d4:	eb5d5786 	bl	1a410f4 <TSoupIndex::$NewNode(void)>
        2eb2d8:	e1a07000 	mov	r7, r0
        2eb2dc:	e3a03000 	mov	r3, #0	; 0x0
        2eb2e0:	e92d0008 	stmdb	sp!, {r3}
        2eb2e4:	e1a03000 	mov	r3, r0
        2eb2e8:	e1a02005 	mov	r2, r5
        2eb2ec:	e1a01006 	mov	r1, r6
        2eb2f0:	e1a00004 	mov	r0, r4
        2eb2f4:	eb5d5b96 	bl	1a42154 <TSoupIndex::$PutKeyIntoNode(KeyField *, unsigned long, NodeHeader *, long)>
        2eb2f8:	e28dd004 	add	sp, sp, #4	; 0x4
        2eb2fc:	e1a01007 	mov	r1, r7
        2eb300:	e5943010 	ldr	r3, [r4, #16]	; fField16
        2eb304:	e1a00004 	mov	r0, r4
        2eb308:	e3a02000 	mov	r2, #0	; 0x0
        2eb30c:	eb5d5fb0 	bl	1a431d4 <TSoupIndex::$SetNodeNo(NodeHeader *, long, unsigned long)>
        2eb310:	e1a00004 	mov	r0, r4
        2eb314:	e5971000 	ldr	r1, [r7]
        2eb318:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        2eb31c:	ea5d5fb0 	b	1a431e4 <TSoupIndex::$SetRootNode(unsigned long)>
    */
}

/**
 * Symbol: TSoupIndex::CreateFirstRoot(void)
 * Address: 002eb388
 */
TSoupIndex::CreateFirstRoot(void) {
    /*
        2eb388:	e1a0c00d 	mov	ip, sp
        2eb38c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2eb390:	e24cb004 	sub	fp, ip, #4	; 0x4
        2eb394:	e1a04000 	mov	r4, r0
        2eb398:	eb5d5755 	bl	1a410f4 <TSoupIndex::$NewNode(void)>
        2eb39c:	e5901000 	ldr	r1, [r0]
        2eb3a0:	e1a00004 	mov	r0, r4
        2eb3a4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        2eb3a8:	ea5d5f8d 	b	1a431e4 <TSoupIndex::$SetRootNode(unsigned long)>
    */
}

/**
 * Symbol: TSoupIndex::FindNextKey(KeyField *, NodeHeader **, long *)
 * Address: 002eb3ac
 */
TSoupIndex::FindNextKey(KeyField *, NodeHeader **, long *) {
    /*
        2eb3ac:	e1a0c00d 	mov	ip, sp
        2eb3b0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2eb3b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2eb3b8:	e1a04000 	mov	r4, r0
        2eb3bc:	e1a07001 	mov	r7, r1
        2eb3c0:	e1a05002 	mov	r5, r2
        2eb3c4:	e1a06003 	mov	r6, r3
        2eb3c8:	e5932000 	ldr	r2, [r3]
        2eb3cc:	e5951000 	ldr	r1, [r5]
        2eb3d0:	eb5d531e 	bl	1a40050 <TSoupIndex::$KeyFieldAdr(NodeHeader *, long)>
        2eb3d4:	e5900000 	ldr	r0, [r0]
        2eb3d8:	e1a00100 	mov	r0, r0, lsl #2
        2eb3dc:	e1b00920 	movs	r0, r0, lsr #18
        2eb3e0:	e3a09000 	mov	r9, #0	; 0x0
        2eb3e4:	1a000007 	bne	2eb408 <TSoupIndex::FindNextKey(KeyField *, NodeHeader **, long *)+0x5c>
        2eb3e8:	e5970000 	ldr	r0, [r7]
        2eb3ec:	e1a00820 	mov	r0, r0, lsr #16
        2eb3f0:	e2000903 	and	r0, r0, #49152	; 0xc000
        2eb3f4:	e5c70001 	strb	r0, [r7, #1]	; fField1
        2eb3f8:	e1a00440 	mov	r0, r0, asr #8
        2eb3fc:	e5c70000 	strb	r0, [r7]
        2eb400:	e1a00009 	mov	r0, r9
        2eb404:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2eb408:	e5960000 	ldr	r0, [r6]
        2eb40c:	e2802001 	add	r2, r0, #1	; 0x1
        2eb410:	e5862000 	str	r2, [r6]
        2eb414:	e1a00004 	mov	r0, r4
        2eb418:	e5951000 	ldr	r1, [r5]
        2eb41c:	eb5d5723 	bl	1a410b0 <TSoupIndex::$LeftNodeNo(NodeHeader *, long)>
        2eb420:	e3300000 	teq	r0, #0	; 0x0
        2eb424:	0a000012 	beq	2eb474 <TSoupIndex::FindNextKey(KeyField *, NodeHeader **, long *)+0xc8>
        2eb428:	e5951000 	ldr	r1, [r5]
        2eb42c:	e5912000 	ldr	r2, [r1]
        2eb430:	e1a01000 	mov	r1, r0
        2eb434:	e1a00004 	mov	r0, r4
        2eb438:	eb5d5b4a 	bl	1a42168 <TSoupIndex::$ReadANode(unsigned long, unsigned long)>
        2eb43c:	e5850000 	str	r0, [r5]
        2eb440:	e5869000 	str	r9, [r6]
        2eb444:	e1a00004 	mov	r0, r4
        2eb448:	e5951000 	ldr	r1, [r5]
        2eb44c:	eb5d4ec7 	bl	1a3ef70 <TSoupIndex::$FirstKeyField(NodeHeader *)>
        2eb450:	e1a08000 	mov	r8, r0
        2eb454:	e1a00004 	mov	r0, r4
        2eb458:	e5951000 	ldr	r1, [r5]
        2eb45c:	eb5d4ec4 	bl	1a3ef74 <TSoupIndex::$FirstNodeNo(NodeHeader *)>
        2eb460:	e3300000 	teq	r0, #0	; 0x0
        2eb464:	1affffef 	bne	2eb428 <TSoupIndex::FindNextKey(KeyField *, NodeHeader **, long *)+0x7c>
        2eb468:	e1a02007 	mov	r2, r7
        2eb46c:	e1a01008 	mov	r1, r8
        2eb470:	ea000021 	b	2eb4fc <TSoupIndex::FindNextKey(KeyField *, NodeHeader **, long *)+0x150>
        2eb474:	e5962000 	ldr	r2, [r6]
        2eb478:	e1a00004 	mov	r0, r4
        2eb47c:	e5951000 	ldr	r1, [r5]
        2eb480:	eb5d52f2 	bl	1a40050 <TSoupIndex::$KeyFieldAdr(NodeHeader *, long)>
        2eb484:	e5901000 	ldr	r1, [r0]
        2eb488:	e1a01101 	mov	r1, r1, lsl #2
        2eb48c:	e1b01921 	movs	r1, r1, lsr #18
        2eb490:	0a00000f 	beq	2eb4d4 <TSoupIndex::FindNextKey(KeyField *, NodeHeader **, long *)+0x128>
        2eb494:	e1a02007 	mov	r2, r7
        2eb498:	e1a01000 	mov	r1, r0
        2eb49c:	e1a00004 	mov	r0, r4
        2eb4a0:	eb5d570f 	bl	1a410e4 <TSoupIndex::$MoveKey(KeyField *, KeyField *)>
        2eb4a4:	e3a00001 	mov	r0, #1	; 0x1
        2eb4a8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2eb4ac:	e5918000 	ldr	r8, [r1]
        2eb4b0:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2eb4b4:	e1a01004 	mov	r1, r4
        2eb4b8:	eb5d4ea3 	bl	1a3ef4c <TNodeCache::$FindNode(TSoupIndex *, unsigned long)>
        2eb4bc:	e5850000 	str	r0, [r5]
        2eb4c0:	e1a01000 	mov	r1, r0
        2eb4c4:	e1a03006 	mov	r3, r6
        2eb4c8:	e1a02008 	mov	r2, r8
        2eb4cc:	e1a00004 	mov	r0, r4
        2eb4d0:	eb5d52dd 	bl	1a4004c <TSoupIndex::$KeyAfterNodeNo(NodeHeader *, unsigned long, long *)>
        2eb4d4:	e5951000 	ldr	r1, [r5]
        2eb4d8:	e5912004 	ldr	r2, [r1, #4]	; fField4
        2eb4dc:	e3320000 	teq	r2, #0	; 0x0
        2eb4e0:	0a000003 	beq	2eb4f4 <TSoupIndex::FindNextKey(KeyField *, NodeHeader **, long *)+0x148>
        2eb4e4:	e5903000 	ldr	r3, [r0]
        2eb4e8:	e1a03103 	mov	r3, r3, lsl #2
        2eb4ec:	e1b03923 	movs	r3, r3, lsr #18
        2eb4f0:	0affffed 	beq	2eb4ac <TSoupIndex::FindNextKey(KeyField *, NodeHeader **, long *)+0x100>
        2eb4f4:	e1a02007 	mov	r2, r7
        2eb4f8:	e1a01000 	mov	r1, r0
        2eb4fc:	e1a00004 	mov	r0, r4
        2eb500:	e91b6bf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
        2eb504:	ea5d56f6 	b	1a410e4 <TSoupIndex::$MoveKey(KeyField *, KeyField *)>
    */
}

/**
 * Symbol: TSoupIndex::FindPriorKey(KeyField *, NodeHeader **, long *)
 * Address: 002eb508
 */
TSoupIndex::FindPriorKey(KeyField *, NodeHeader **, long *) {
    /*
        2eb508:	e1a0c00d 	mov	ip, sp
        2eb50c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2eb510:	e24cb004 	sub	fp, ip, #4	; 0x4
        2eb514:	e1a04000 	mov	r4, r0
        2eb518:	e1a06001 	mov	r6, r1
        2eb51c:	e1a07002 	mov	r7, r2
        2eb520:	e1a05003 	mov	r5, r3
        2eb524:	e5928000 	ldr	r8, [r2]
        2eb528:	e1a01008 	mov	r1, r8
        2eb52c:	e5932000 	ldr	r2, [r3]
        2eb530:	eb5d56de 	bl	1a410b0 <TSoupIndex::$LeftNodeNo(NodeHeader *, long)>
        2eb534:	e5951000 	ldr	r1, [r5]
        2eb538:	e3310000 	teq	r1, #0	; 0x0
        2eb53c:	0a000008 	beq	2eb564 <TSoupIndex::FindPriorKey(KeyField *, NodeHeader **, long *)+0x5c>
        2eb540:	e3300000 	teq	r0, #0	; 0x0
        2eb544:	1a000006 	bne	2eb564 <TSoupIndex::FindPriorKey(KeyField *, NodeHeader **, long *)+0x5c>
        2eb548:	e2412001 	sub	r2, r1, #1	; 0x1
        2eb54c:	e1a01008 	mov	r1, r8
        2eb550:	e1a00004 	mov	r0, r4
        2eb554:	e5852000 	str	r2, [r5]
        2eb558:	eb5d52bc 	bl	1a40050 <TSoupIndex::$KeyFieldAdr(NodeHeader *, long)>
        2eb55c:	e1a09000 	mov	r9, r0
        2eb560:	ea00002f 	b	2eb624 <TSoupIndex::FindPriorKey(KeyField *, NodeHeader **, long *)+0x11c>
        2eb564:	e3300000 	teq	r0, #0	; 0x0
        2eb568:	03a09000 	moveq	r9, #0	; 0x0
        2eb56c:	0a00001d 	beq	2eb5e8 <TSoupIndex::FindPriorKey(KeyField *, NodeHeader **, long *)+0xe0>
        2eb570:	e1a01000 	mov	r1, r0
        2eb574:	e1a00004 	mov	r0, r4
        2eb578:	e5982000 	ldr	r2, [r8]
        2eb57c:	eb5d5af9 	bl	1a42168 <TSoupIndex::$ReadANode(unsigned long, unsigned long)>
        2eb580:	e1a01000 	mov	r1, r0
        2eb584:	e1a08000 	mov	r8, r0
        2eb588:	e1a00004 	mov	r0, r4
        2eb58c:	eb5d56c4 	bl	1a410a4 <TSoupIndex::$LastKeyField(NodeHeader *)>
        2eb590:	e1a09000 	mov	r9, r0
        2eb594:	e1a01008 	mov	r1, r8
        2eb598:	e1a00004 	mov	r0, r4
        2eb59c:	eb5d56c1 	bl	1a410a8 <TSoupIndex::$LastNodeNo(NodeHeader *)>
        2eb5a0:	e3300000 	teq	r0, #0	; 0x0
        2eb5a4:	1afffff1 	bne	2eb570 <TSoupIndex::FindPriorKey(KeyField *, NodeHeader **, long *)+0x68>
        2eb5a8:	e1a01008 	mov	r1, r8
        2eb5ac:	e1a00004 	mov	r0, r4
        2eb5b0:	eb5d56bd 	bl	1a410ac <TSoupIndex::$LastSlotInNode(NodeHeader *)>
        2eb5b4:	e5850000 	str	r0, [r5]
        2eb5b8:	ea000019 	b	2eb624 <TSoupIndex::FindPriorKey(KeyField *, NodeHeader **, long *)+0x11c>
        2eb5bc:	e5989000 	ldr	r9, [r8]
        2eb5c0:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2eb5c4:	e1a01004 	mov	r1, r4
        2eb5c8:	eb5d4e5f 	bl	1a3ef4c <TNodeCache::$FindNode(TSoupIndex *, unsigned long)>
        2eb5cc:	e1a08000 	mov	r8, r0
        2eb5d0:	e1a03005 	mov	r3, r5
        2eb5d4:	e1a02009 	mov	r2, r9
        2eb5d8:	e1a01000 	mov	r1, r0
        2eb5dc:	e1a00004 	mov	r0, r4
        2eb5e0:	eb5d7ff9 	bl	1a4b5cc <TSoupIndex::$KeyBeforeNodeNo(NodeHeader *, unsigned long, long *)>
        2eb5e4:	e1a09000 	mov	r9, r0
        2eb5e8:	e5982004 	ldr	r2, [r8, #4]	; fField4
        2eb5ec:	e3320000 	teq	r2, #0	; 0x0
        2eb5f0:	0a000001 	beq	2eb5fc <TSoupIndex::FindPriorKey(KeyField *, NodeHeader **, long *)+0xf4>
        2eb5f4:	e3390000 	teq	r9, #0	; 0x0
        2eb5f8:	0affffef 	beq	2eb5bc <TSoupIndex::FindPriorKey(KeyField *, NodeHeader **, long *)+0xb4>
        2eb5fc:	e3390000 	teq	r9, #0	; 0x0
        2eb600:	1a000007 	bne	2eb624 <TSoupIndex::FindPriorKey(KeyField *, NodeHeader **, long *)+0x11c>
        2eb604:	e5960000 	ldr	r0, [r6]
        2eb608:	e1a00820 	mov	r0, r0, lsr #16
        2eb60c:	e2000903 	and	r0, r0, #49152	; 0xc000
        2eb610:	e5c60001 	strb	r0, [r6, #1]	; fField1
        2eb614:	e1a00440 	mov	r0, r0, asr #8
        2eb618:	e5c60000 	strb	r0, [r6]
        2eb61c:	e3a00000 	mov	r0, #0	; 0x0
        2eb620:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2eb624:	e1a02006 	mov	r2, r6
        2eb628:	e1a01009 	mov	r1, r9
        2eb62c:	e1a00004 	mov	r0, r4
        2eb630:	eb5d56ab 	bl	1a410e4 <TSoupIndex::$MoveKey(KeyField *, KeyField *)>
        2eb634:	e5990000 	ldr	r0, [r9]
        2eb638:	e1a00820 	mov	r0, r0, lsr #16
        2eb63c:	e3a05001 	mov	r5, #1	; 0x1
        2eb640:	e1350740 	teq	r5, r0, asr #14
        2eb644:	1a000007 	bne	2eb668 <TSoupIndex::FindPriorKey(KeyField *, NodeHeader **, long *)+0x160>
        2eb648:	e1a01009 	mov	r1, r9
        2eb64c:	e1a00004 	mov	r0, r4
        2eb650:	e3a02000 	mov	r2, #0	; 0x0
        2eb654:	eb5d7fda 	bl	1a4b5c4 <TSoupIndex::$LastDupDataAdr(KeyField *, DupNodeHeader **)>
        2eb658:	e1a02000 	mov	r2, r0
        2eb65c:	e1a01006 	mov	r1, r6
        2eb660:	e1a00004 	mov	r0, r4
        2eb664:	eb5d5687 	bl	1a41088 <TSoupIndex::$kfReplaceFirstData(KeyField *, void *)>
        2eb668:	e1a00005 	mov	r0, r5
        2eb66c:	e5878000 	str	r8, [r7]
        2eb670:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::FindFirstKey(NodeHeader *, KeyField *)
 * Address: 002eb674
 */
TSoupIndex::FindFirstKey(NodeHeader *, KeyField *) {
    /*
        2eb674:	e1a0c00d 	mov	ip, sp
        2eb678:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2eb67c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2eb680:	e1a04000 	mov	r4, r0
        2eb684:	e1a05001 	mov	r5, r1
        2eb688:	e1a06002 	mov	r6, r2
        2eb68c:	eb5d4e38 	bl	1a3ef74 <TSoupIndex::$FirstNodeNo(NodeHeader *)>
        2eb690:	e1b01000 	movs	r1, r0
        2eb694:	0a000008 	beq	2eb6bc <TSoupIndex::FindFirstKey(NodeHeader *, KeyField *)+0x48>
        2eb698:	e1a00004 	mov	r0, r4
        2eb69c:	e5952000 	ldr	r2, [r5]
        2eb6a0:	eb5d5ab0 	bl	1a42168 <TSoupIndex::$ReadANode(unsigned long, unsigned long)>
        2eb6a4:	e1a01000 	mov	r1, r0
        2eb6a8:	e1a05000 	mov	r5, r0
        2eb6ac:	e1a00004 	mov	r0, r4
        2eb6b0:	eb5d4e2f 	bl	1a3ef74 <TSoupIndex::$FirstNodeNo(NodeHeader *)>
        2eb6b4:	e1b01000 	movs	r1, r0
        2eb6b8:	1afffff6 	bne	2eb698 <TSoupIndex::FindFirstKey(NodeHeader *, KeyField *)+0x24>
        2eb6bc:	e1a01005 	mov	r1, r5
        2eb6c0:	e1a00004 	mov	r0, r4
        2eb6c4:	eb5d4e29 	bl	1a3ef70 <TSoupIndex::$FirstKeyField(NodeHeader *)>
        2eb6c8:	e1a01000 	mov	r1, r0
        2eb6cc:	e1a02006 	mov	r2, r6
        2eb6d0:	e1a00004 	mov	r0, r4
        2eb6d4:	eb5d5682 	bl	1a410e4 <TSoupIndex::$MoveKey(KeyField *, KeyField *)>
        2eb6d8:	e3a00001 	mov	r0, #1	; 0x1
        2eb6dc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::FindLastKey(NodeHeader *, KeyField *)
 * Address: 002eb6e0
 */
TSoupIndex::FindLastKey(NodeHeader *, KeyField *) {
    /*
        2eb6e0:	e1a0c00d 	mov	ip, sp
        2eb6e4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2eb6e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2eb6ec:	e1a04000 	mov	r4, r0
        2eb6f0:	e1a06001 	mov	r6, r1
        2eb6f4:	e1a05002 	mov	r5, r2
        2eb6f8:	eb5d566a 	bl	1a410a8 <TSoupIndex::$LastNodeNo(NodeHeader *)>
        2eb6fc:	e1b01000 	movs	r1, r0
        2eb700:	0a000008 	beq	2eb728 <TSoupIndex::FindLastKey(NodeHeader *, KeyField *)+0x48>
        2eb704:	e1a00004 	mov	r0, r4
        2eb708:	e5962000 	ldr	r2, [r6]
        2eb70c:	eb5d5a95 	bl	1a42168 <TSoupIndex::$ReadANode(unsigned long, unsigned long)>
        2eb710:	e1a01000 	mov	r1, r0
        2eb714:	e1a06000 	mov	r6, r0
        2eb718:	e1a00004 	mov	r0, r4
        2eb71c:	eb5d5661 	bl	1a410a8 <TSoupIndex::$LastNodeNo(NodeHeader *)>
        2eb720:	e1b01000 	movs	r1, r0
        2eb724:	1afffff6 	bne	2eb704 <TSoupIndex::FindLastKey(NodeHeader *, KeyField *)+0x24>
        2eb728:	e1a01006 	mov	r1, r6
        2eb72c:	e1a00004 	mov	r0, r4
        2eb730:	eb5d565b 	bl	1a410a4 <TSoupIndex::$LastKeyField(NodeHeader *)>
        2eb734:	e1a06000 	mov	r6, r0
        2eb738:	e1a02005 	mov	r2, r5
        2eb73c:	e1a01000 	mov	r1, r0
        2eb740:	e1a00004 	mov	r0, r4
        2eb744:	eb5d5666 	bl	1a410e4 <TSoupIndex::$MoveKey(KeyField *, KeyField *)>
        2eb748:	e5960000 	ldr	r0, [r6]
        2eb74c:	e1a00820 	mov	r0, r0, lsr #16
        2eb750:	e3a07001 	mov	r7, #1	; 0x1
        2eb754:	e1370740 	teq	r7, r0, asr #14
        2eb758:	1a000007 	bne	2eb77c <TSoupIndex::FindLastKey(NodeHeader *, KeyField *)+0x9c>
        2eb75c:	e1a01006 	mov	r1, r6
        2eb760:	e1a00004 	mov	r0, r4
        2eb764:	e3a02000 	mov	r2, #0	; 0x0
        2eb768:	eb5d7f95 	bl	1a4b5c4 <TSoupIndex::$LastDupDataAdr(KeyField *, DupNodeHeader **)>
        2eb76c:	e1a02000 	mov	r2, r0
        2eb770:	e1a01005 	mov	r1, r5
        2eb774:	e1a00004 	mov	r0, r4
        2eb778:	eb5d5642 	bl	1a41088 <TSoupIndex::$kfReplaceFirstData(KeyField *, void *)>
        2eb77c:	e1a00007 	mov	r0, r7
        2eb780:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::Search(KeyField *, NodeHeader **, long *)
 * Address: 002eb784
 */
TSoupIndex::Search(KeyField *, NodeHeader **, long *) {
    /*
        2eb784:	e1a0c00d 	mov	ip, sp
        2eb788:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2eb78c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2eb790:	e1a05000 	mov	r5, r0
        2eb794:	e1a07001 	mov	r7, r1
        2eb798:	e1a04002 	mov	r4, r2
        2eb79c:	e1a06003 	mov	r6, r3
        2eb7a0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2eb7a4:	e92d0008 	stmdb	sp!, {r3}
        2eb7a8:	e28d3004 	add	r3, sp, #4	; 0x4
        2eb7ac:	e5922000 	ldr	r2, [r2]
        2eb7b0:	eb5d5228 	bl	1a40058 <TSoupIndex::$KeyInNode(KeyField *, NodeHeader *, unsigned long *, long *)>
        2eb7b4:	e28dd004 	add	sp, sp, #4	; 0x4
        2eb7b8:	e1b08000 	movs	r8, r0
        2eb7bc:	1a000002 	bne	2eb7cc <TSoupIndex::Search(KeyField *, NodeHeader **, long *)+0x48>
        2eb7c0:	e59d1000 	ldr	r1, [sp]
        2eb7c4:	e3310000 	teq	r1, #0	; 0x0
        2eb7c8:	1a000016 	bne	2eb828 <TSoupIndex::Search(KeyField *, NodeHeader **, long *)+0xa4>
        2eb7cc:	e5962000 	ldr	r2, [r6]
        2eb7d0:	e1a00005 	mov	r0, r5
        2eb7d4:	e5941000 	ldr	r1, [r4]
        2eb7d8:	eb5d521c 	bl	1a40050 <TSoupIndex::$KeyFieldAdr(NodeHeader *, long)>
        2eb7dc:	e5901000 	ldr	r1, [r0]
        2eb7e0:	e1a01101 	mov	r1, r1, lsl #2
        2eb7e4:	e1b01921 	movs	r1, r1, lsr #18
        2eb7e8:	0a000004 	beq	2eb800 <TSoupIndex::Search(KeyField *, NodeHeader **, long *)+0x7c>
        2eb7ec:	e1a02007 	mov	r2, r7
        2eb7f0:	e1a01000 	mov	r1, r0
        2eb7f4:	e1a00005 	mov	r0, r5
        2eb7f8:	eb5d5639 	bl	1a410e4 <TSoupIndex::$MoveKey(KeyField *, KeyField *)>
        2eb7fc:	ea000014 	b	2eb854 <TSoupIndex::Search(KeyField *, NodeHeader **, long *)+0xd0>
        2eb800:	e1a00005 	mov	r0, r5
        2eb804:	e5941000 	ldr	r1, [r4]
        2eb808:	eb5d5627 	bl	1a410ac <TSoupIndex::$LastSlotInNode(NodeHeader *)>
        2eb80c:	e5860000 	str	r0, [r6]
        2eb810:	e1a03006 	mov	r3, r6
        2eb814:	e1a02004 	mov	r2, r4
        2eb818:	e1a01007 	mov	r1, r7
        2eb81c:	e1a00005 	mov	r0, r5
        2eb820:	eb5d4dc8 	bl	1a3ef48 <TSoupIndex::$FindNextKey(KeyField *, NodeHeader **, long *)>
        2eb824:	ea00000a 	b	2eb854 <TSoupIndex::Search(KeyField *, NodeHeader **, long *)+0xd0>
        2eb828:	e5940000 	ldr	r0, [r4]
        2eb82c:	e5902000 	ldr	r2, [r0]
        2eb830:	e1a00005 	mov	r0, r5
        2eb834:	eb5d5a4b 	bl	1a42168 <TSoupIndex::$ReadANode(unsigned long, unsigned long)>
        2eb838:	e1a03006 	mov	r3, r6
        2eb83c:	e5840000 	str	r0, [r4]
        2eb840:	e1a02004 	mov	r2, r4
        2eb844:	e1a01007 	mov	r1, r7
        2eb848:	e1a00005 	mov	r0, r5
        2eb84c:	eb5d7f60 	bl	1a4b5d4 <TSoupIndex::$Search(KeyField *, NodeHeader **, long *)>
        2eb850:	e1a08000 	mov	r8, r0
        2eb854:	e20800ff 	and	r0, r8, #255	; 0xff
        2eb858:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::FindDupDataAdr(DupNodeHeader *, void *, void **)
 * Address: 002eb85c
 */
TSoupIndex::FindDupDataAdr(DupNodeHeader *, void *, void **) {
    /*
        2eb85c:	e1a0c00d 	mov	ip, sp
        2eb860:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2eb864:	e24cb004 	sub	fp, ip, #4	; 0x4
        2eb868:	e1a05000 	mov	r5, r0
        2eb86c:	e1a06001 	mov	r6, r1
        2eb870:	e1a07002 	mov	r7, r2
        2eb874:	e1b04003 	movs	r4, r3
        2eb878:	e3a00000 	mov	r0, #0	; 0x0
        2eb87c:	e3a08000 	mov	r8, #0	; 0x0
        2eb880:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        2eb884:	15848000 	strne	r8, [r4]
        2eb888:	e1a0300d 	mov	r3, sp
        2eb88c:	e1a01006 	mov	r1, r6
        2eb890:	e1a00005 	mov	r0, r5
        2eb894:	e59d2000 	ldr	r2, [sp]
        2eb898:	eb5d5617 	bl	1a410fc <TSoupIndex::$NextDupDataAdr(DupNodeHeader *, void *, void **)>
        2eb89c:	e3300000 	teq	r0, #0	; 0x0
        2eb8a0:	0a000011 	beq	2eb8ec <TSoupIndex::FindDupDataAdr(DupNodeHeader *, void *, void **)+0x90>
        2eb8a4:	e1a01007 	mov	r1, r7
        2eb8a8:	e1a00005 	mov	r0, r5
        2eb8ac:	e59d2000 	ldr	r2, [sp]
        2eb8b0:	e1a0e00f 	mov	lr, pc
        2eb8b4:	e595f03c 	ldr	pc, [r5, #60]	; fField60
        2eb8b8:	e3300000 	teq	r0, #0	; 0x0
        2eb8bc:	059d0000 	ldreq	r0, [sp]
        2eb8c0:	0a00000a 	beq	2eb8f0 <TSoupIndex::FindDupDataAdr(DupNodeHeader *, void *, void **)+0x94>
        2eb8c4:	e3340000 	teq	r4, #0	; 0x0
        2eb8c8:	159d0000 	ldrne	r0, [sp]
        2eb8cc:	15840000 	strne	r0, [r4]
        2eb8d0:	e1a0300d 	mov	r3, sp
        2eb8d4:	e1a01006 	mov	r1, r6
        2eb8d8:	e1a00005 	mov	r0, r5
        2eb8dc:	e59d2000 	ldr	r2, [sp]
        2eb8e0:	eb5d5605 	bl	1a410fc <TSoupIndex::$NextDupDataAdr(DupNodeHeader *, void *, void **)>
        2eb8e4:	e3300000 	teq	r0, #0	; 0x0
        2eb8e8:	1affffed 	bne	2eb8a4 <TSoupIndex::FindDupDataAdr(DupNodeHeader *, void *, void **)+0x48>
        2eb8ec:	e1a00008 	mov	r0, r8
        2eb8f0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::FindNextDupDataAdr(DupNodeHeader **, void *, unsigned char *)
 * Address: 002eb8f4
 */
TSoupIndex::FindNextDupDataAdr(DupNodeHeader **, void *, unsigned char *) {
    /*
        2eb8f4:	e1a0c00d 	mov	ip, sp
        2eb8f8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2eb8fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2eb900:	e1a05000 	mov	r5, r0
        2eb904:	e1a04001 	mov	r4, r1
        2eb908:	e1a07002 	mov	r7, r2
        2eb90c:	e1a06003 	mov	r6, r3
        2eb910:	e3a00000 	mov	r0, #0	; 0x0
        2eb914:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        2eb918:	e5911000 	ldr	r1, [r1]
        2eb91c:	e1a00005 	mov	r0, r5
        2eb920:	e3a03000 	mov	r3, #0	; 0x0
        2eb924:	eb5d4d81 	bl	1a3ef30 <TSoupIndex::$FindDupDataAdr(DupNodeHeader *, void *, void **)>
        2eb928:	e3a08000 	mov	r8, #0	; 0x0
        2eb92c:	e58d0000 	str	r0, [sp]
        2eb930:	ea000008 	b	2eb958 <TSoupIndex::FindNextDupDataAdr(DupNodeHeader **, void *, unsigned char *)+0x64>
        2eb934:	e1a00005 	mov	r0, r5
        2eb938:	eb5d5a09 	bl	1a42164 <TSoupIndex::$ReadADupNode(unsigned long)>
        2eb93c:	e5840000 	str	r0, [r4]
        2eb940:	e1a01000 	mov	r1, r0
        2eb944:	e1a02007 	mov	r2, r7
        2eb948:	e1a00005 	mov	r0, r5
        2eb94c:	e3a03000 	mov	r3, #0	; 0x0
        2eb950:	eb5d4d76 	bl	1a3ef30 <TSoupIndex::$FindDupDataAdr(DupNodeHeader *, void *, void **)>
        2eb954:	e58d0000 	str	r0, [sp]
        2eb958:	e59d0000 	ldr	r0, [sp]
        2eb95c:	e3300000 	teq	r0, #0	; 0x0
        2eb960:	1a000004 	bne	2eb978 <TSoupIndex::FindNextDupDataAdr(DupNodeHeader **, void *, unsigned char *)+0x84>
        2eb964:	e5940000 	ldr	r0, [r4]
        2eb968:	e5b01004 	ldr	r1, [r0, #4]!	; fField4
        2eb96c:	e3310000 	teq	r1, #0	; 0x0
        2eb970:	1affffef 	bne	2eb934 <TSoupIndex::FindNextDupDataAdr(DupNodeHeader **, void *, unsigned char *)+0x40>
        2eb974:	ea000018 	b	2eb9dc <TSoupIndex::FindNextDupDataAdr(DupNodeHeader **, void *, unsigned char *)+0xe8>
        2eb978:	e59d0000 	ldr	r0, [sp]
        2eb97c:	e3300000 	teq	r0, #0	; 0x0
        2eb980:	0a000015 	beq	2eb9dc <TSoupIndex::FindNextDupDataAdr(DupNodeHeader **, void *, unsigned char *)+0xe8>
        2eb984:	e3360000 	teq	r6, #0	; 0x0
        2eb988:	13a00001 	movne	r0, #1	; 0x1
        2eb98c:	15c60000 	strneb	r0, [r6]
        2eb990:	e1a0300d 	mov	r3, sp
        2eb994:	e59d2000 	ldr	r2, [sp]
        2eb998:	e1a00005 	mov	r0, r5
        2eb99c:	e5941000 	ldr	r1, [r4]
        2eb9a0:	eb5d55d5 	bl	1a410fc <TSoupIndex::$NextDupDataAdr(DupNodeHeader *, void *, void **)>
        2eb9a4:	e3300000 	teq	r0, #0	; 0x0
        2eb9a8:	159d0000 	ldrne	r0, [sp]
        2eb9ac:	1a00000d 	bne	2eb9e8 <TSoupIndex::FindNextDupDataAdr(DupNodeHeader **, void *, unsigned char *)+0xf4>
        2eb9b0:	e5940000 	ldr	r0, [r4]
        2eb9b4:	e5b01004 	ldr	r1, [r0, #4]!	; fField4
        2eb9b8:	e3310000 	teq	r1, #0	; 0x0
        2eb9bc:	0a000008 	beq	2eb9e4 <TSoupIndex::FindNextDupDataAdr(DupNodeHeader **, void *, unsigned char *)+0xf0>
        2eb9c0:	e1a00005 	mov	r0, r5
        2eb9c4:	eb5d59e6 	bl	1a42164 <TSoupIndex::$ReadADupNode(unsigned long)>
        2eb9c8:	e5840000 	str	r0, [r4]
        2eb9cc:	e1a01000 	mov	r1, r0
        2eb9d0:	e1a00005 	mov	r0, r5
        2eb9d4:	eb5d4d64 	bl	1a3ef6c <TSoupIndex::$FirstDupDataAdr(DupNodeHeader *)>
        2eb9d8:	ea000002 	b	2eb9e8 <TSoupIndex::FindNextDupDataAdr(DupNodeHeader **, void *, unsigned char *)+0xf4>
        2eb9dc:	e3360000 	teq	r6, #0	; 0x0
        2eb9e0:	15c68000 	strneb	r8, [r6]
        2eb9e4:	e1a00008 	mov	r0, r8
        2eb9e8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::FindPriorDupDataAdr(DupNodeHeader **, void *, unsigned char *)
 * Address: 002eb9ec
 */
TSoupIndex::FindPriorDupDataAdr(DupNodeHeader **, void *, unsigned char *) {
    /*
        2eb9ec:	e1a0c00d 	mov	ip, sp
        2eb9f0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2eb9f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2eb9f8:	e1a06000 	mov	r6, r0
        2eb9fc:	e1a04001 	mov	r4, r1
        2eba00:	e1a07002 	mov	r7, r2
        2eba04:	e1a05003 	mov	r5, r3
        2eba08:	e24dd004 	sub	sp, sp, #4	; 0x4
        2eba0c:	e3a08000 	mov	r8, #0	; 0x0
        2eba10:	e1a0300d 	mov	r3, sp
        2eba14:	e5911000 	ldr	r1, [r1]
        2eba18:	eb5d4d44 	bl	1a3ef30 <TSoupIndex::$FindDupDataAdr(DupNodeHeader *, void *, void **)>
        2eba1c:	e3a09000 	mov	r9, #0	; 0x0
        2eba20:	e3300000 	teq	r0, #0	; 0x0
        2eba24:	1a00000d 	bne	2eba60 <TSoupIndex::FindPriorDupDataAdr(DupNodeHeader **, void *, unsigned char *)+0x74>
        2eba28:	ea000009 	b	2eba54 <TSoupIndex::FindPriorDupDataAdr(DupNodeHeader **, void *, unsigned char *)+0x68>
        2eba2c:	e1a00006 	mov	r0, r6
        2eba30:	eb5d59cb 	bl	1a42164 <TSoupIndex::$ReadADupNode(unsigned long)>
        2eba34:	e5840000 	str	r0, [r4]
        2eba38:	e1a01000 	mov	r1, r0
        2eba3c:	e1a0300d 	mov	r3, sp
        2eba40:	e1a02007 	mov	r2, r7
        2eba44:	e1a00006 	mov	r0, r6
        2eba48:	eb5d4d38 	bl	1a3ef30 <TSoupIndex::$FindDupDataAdr(DupNodeHeader *, void *, void **)>
        2eba4c:	e3300000 	teq	r0, #0	; 0x0
        2eba50:	1a000002 	bne	2eba60 <TSoupIndex::FindPriorDupDataAdr(DupNodeHeader **, void *, unsigned char *)+0x74>
        2eba54:	e59d8000 	ldr	r8, [sp]
        2eba58:	e594a000 	ldr	sl, [r4]
        2eba5c:	ea000001 	b	2eba68 <TSoupIndex::FindPriorDupDataAdr(DupNodeHeader **, void *, unsigned char *)+0x7c>
        2eba60:	e3500000 	cmp	r0, #0	; 0x0
        2eba64:	1a000004 	bne	2eba7c <TSoupIndex::FindPriorDupDataAdr(DupNodeHeader **, void *, unsigned char *)+0x90>
        2eba68:	e5940000 	ldr	r0, [r4]
        2eba6c:	e5b01004 	ldr	r1, [r0, #4]!	; fField4
        2eba70:	e3310000 	teq	r1, #0	; 0x0
        2eba74:	1affffec 	bne	2eba2c <TSoupIndex::FindPriorDupDataAdr(DupNodeHeader **, void *, unsigned char *)+0x40>
        2eba78:	ea00000b 	b	2ebaac <TSoupIndex::FindPriorDupDataAdr(DupNodeHeader **, void *, unsigned char *)+0xc0>
        2eba7c:	0a00000a 	beq	2ebaac <TSoupIndex::FindPriorDupDataAdr(DupNodeHeader **, void *, unsigned char *)+0xc0>
        2eba80:	e3350000 	teq	r5, #0	; 0x0
        2eba84:	13a00001 	movne	r0, #1	; 0x1
        2eba88:	15c50000 	strneb	r0, [r5]
        2eba8c:	e59d0000 	ldr	r0, [sp]
        2eba90:	e3300000 	teq	r0, #0	; 0x0
        2eba94:	1a000007 	bne	2ebab8 <TSoupIndex::FindPriorDupDataAdr(DupNodeHeader **, void *, unsigned char *)+0xcc>
        2eba98:	e3380000 	teq	r8, #0	; 0x0
        2eba9c:	11a00008 	movne	r0, r8
        2ebaa0:	1584a000 	strne	sl, [r4]
        2ebaa4:	1a000003 	bne	2ebab8 <TSoupIndex::FindPriorDupDataAdr(DupNodeHeader **, void *, unsigned char *)+0xcc>
        2ebaa8:	ea000001 	b	2ebab4 <TSoupIndex::FindPriorDupDataAdr(DupNodeHeader **, void *, unsigned char *)+0xc8>
        2ebaac:	e3350000 	teq	r5, #0	; 0x0
        2ebab0:	15c59000 	strneb	r9, [r5]
        2ebab4:	e1a00009 	mov	r0, r9
        2ebab8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::SearchNextDup(KeyField *, NodeHeader **, long *, DupNodeHeader **)
 * Address: 002ebabc
 */
TSoupIndex::SearchNextDup(KeyField *, NodeHeader **, long *, DupNodeHeader **) {
    /*
        2ebabc:	e1a0c00d 	mov	ip, sp
        2ebac0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2ebac4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ebac8:	e1a04000 	mov	r4, r0
        2ebacc:	e1a06001 	mov	r6, r1
        2ebad0:	e1a05002 	mov	r5, r2
        2ebad4:	e1a07003 	mov	r7, r3
        2ebad8:	e59b9004 	ldr	r9, [fp, #4]	; fField4
        2ebadc:	e24dd008 	sub	sp, sp, #8	; 0x8
        2ebae0:	e3a00000 	mov	r0, #0	; 0x0
        2ebae4:	e5890000 	str	r0, [r9]
        2ebae8:	e92d0008 	stmdb	sp!, {r3}
        2ebaec:	e28d3008 	add	r3, sp, #8	; 0x8
        2ebaf0:	e5922000 	ldr	r2, [r2]
        2ebaf4:	e1a00004 	mov	r0, r4
        2ebaf8:	eb5d5156 	bl	1a40058 <TSoupIndex::$KeyInNode(KeyField *, NodeHeader *, unsigned long *, long *)>
        2ebafc:	e28dd004 	add	sp, sp, #4	; 0x4
        2ebb00:	e1b0a000 	movs	sl, r0
        2ebb04:	0a000054 	beq	2ebc5c <TSoupIndex::SearchNextDup(KeyField *, NodeHeader **, long *, DupNodeHeader **)+0x1a0>
        2ebb08:	e1a01006 	mov	r1, r6
        2ebb0c:	e1a00004 	mov	r0, r4
        2ebb10:	eb5d5157 	bl	1a40074 <TSoupIndex::$kfFirstDataAdr(KeyField *)>
        2ebb14:	e1a08000 	mov	r8, r0
        2ebb18:	e5972000 	ldr	r2, [r7]
        2ebb1c:	e1a00004 	mov	r0, r4
        2ebb20:	e5951000 	ldr	r1, [r5]
        2ebb24:	eb5d5149 	bl	1a40050 <TSoupIndex::$KeyFieldAdr(NodeHeader *, long)>
        2ebb28:	e1a05000 	mov	r5, r0
        2ebb2c:	e5900000 	ldr	r0, [r0]
        2ebb30:	e1a00820 	mov	r0, r0, lsr #16
        2ebb34:	e1b00740 	movs	r0, r0, asr #14
        2ebb38:	1a00000b 	bne	2ebb6c <TSoupIndex::SearchNextDup(KeyField *, NodeHeader **, long *, DupNodeHeader **)+0xb0>
        2ebb3c:	e1a01005 	mov	r1, r5
        2ebb40:	e1a00004 	mov	r0, r4
        2ebb44:	eb5d514a 	bl	1a40074 <TSoupIndex::$kfFirstDataAdr(KeyField *)>
        2ebb48:	e1a02000 	mov	r2, r0
        2ebb4c:	e1a01008 	mov	r1, r8
        2ebb50:	e1a00004 	mov	r0, r4
        2ebb54:	e1a0e00f 	mov	lr, pc
        2ebb58:	e594f03c 	ldr	pc, [r4, #60]	; fField60
        2ebb5c:	e3300000 	teq	r0, #0	; 0x0
        2ebb60:	0a00004d 	beq	2ebc9c <TSoupIndex::SearchNextDup(KeyField *, NodeHeader **, long *, DupNodeHeader **)+0x1e0>
        2ebb64:	e3e00000 	mvn	r0, #0	; 0x0
        2ebb68:	ea00004b 	b	2ebc9c <TSoupIndex::SearchNextDup(KeyField *, NodeHeader **, long *, DupNodeHeader **)+0x1e0>
        2ebb6c:	e1a02008 	mov	r2, r8
        2ebb70:	e1a01005 	mov	r1, r5
        2ebb74:	e1a00004 	mov	r0, r4
        2ebb78:	e3a03000 	mov	r3, #0	; 0x0
        2ebb7c:	eb5d513b 	bl	1a40070 <TSoupIndex::$kfFindDataAdr(KeyField *, void *, void **)>
        2ebb80:	e58d0000 	str	r0, [sp]
        2ebb84:	e1b02000 	movs	r2, r0
        2ebb88:	0a00000a 	beq	2ebbb8 <TSoupIndex::SearchNextDup(KeyField *, NodeHeader **, long *, DupNodeHeader **)+0xfc>
        2ebb8c:	e1a0300d 	mov	r3, sp
        2ebb90:	e1a01005 	mov	r1, r5
        2ebb94:	e1a00004 	mov	r0, r4
        2ebb98:	eb5d5538 	bl	1a41080 <TSoupIndex::$kfNextDataAdr(KeyField *, void *, void **)>
        2ebb9c:	e3300000 	teq	r0, #0	; 0x0
        2ebba0:	0a000004 	beq	2ebbb8 <TSoupIndex::SearchNextDup(KeyField *, NodeHeader **, long *, DupNodeHeader **)+0xfc>
        2ebba4:	e1a01006 	mov	r1, r6
        2ebba8:	e1a00004 	mov	r0, r4
        2ebbac:	e59d2000 	ldr	r2, [sp]
        2ebbb0:	eb5d5534 	bl	1a41088 <TSoupIndex::$kfReplaceFirstData(KeyField *, void *)>
        2ebbb4:	ea000021 	b	2ebc40 <TSoupIndex::SearchNextDup(KeyField *, NodeHeader **, long *, DupNodeHeader **)+0x184>
        2ebbb8:	e1a01005 	mov	r1, r5
        2ebbbc:	e1a00004 	mov	r0, r4
        2ebbc0:	eb5d552f 	bl	1a41084 <TSoupIndex::$kfNextDupID(KeyField *)>
        2ebbc4:	e3300000 	teq	r0, #0	; 0x0
        2ebbc8:	1a000004 	bne	2ebbe0 <TSoupIndex::SearchNextDup(KeyField *, NodeHeader **, long *, DupNodeHeader **)+0x124>
        2ebbcc:	e59d0000 	ldr	r0, [sp]
        2ebbd0:	e3300000 	teq	r0, #0	; 0x0
        2ebbd4:	03e00000 	mvneq	r0, #0	; 0x0
        2ebbd8:	13a00000 	movne	r0, #0	; 0x0
        2ebbdc:	ea00002e 	b	2ebc9c <TSoupIndex::SearchNextDup(KeyField *, NodeHeader **, long *, DupNodeHeader **)+0x1e0>
        2ebbe0:	e1a01000 	mov	r1, r0
        2ebbe4:	e1a00004 	mov	r0, r4
        2ebbe8:	eb5d595d 	bl	1a42164 <TSoupIndex::$ReadADupNode(unsigned long)>
        2ebbec:	e5890000 	str	r0, [r9]
        2ebbf0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2ebbf4:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        2ebbf8:	e3310000 	teq	r1, #0	; 0x0
        2ebbfc:	0a000003 	beq	2ebc10 <TSoupIndex::SearchNextDup(KeyField *, NodeHeader **, long *, DupNodeHeader **)+0x154>
        2ebc00:	e1a01000 	mov	r1, r0
        2ebc04:	e1a00004 	mov	r0, r4
        2ebc08:	eb5d4cd7 	bl	1a3ef6c <TSoupIndex::$FirstDupDataAdr(DupNodeHeader *)>
        2ebc0c:	ea000004 	b	2ebc24 <TSoupIndex::SearchNextDup(KeyField *, NodeHeader **, long *, DupNodeHeader **)+0x168>
        2ebc10:	e1a0300d 	mov	r3, sp
        2ebc14:	e1a02008 	mov	r2, r8
        2ebc18:	e1a01009 	mov	r1, r9
        2ebc1c:	e1a00004 	mov	r0, r4
        2ebc20:	eb5d4cc7 	bl	1a3ef44 <TSoupIndex::$FindNextDupDataAdr(DupNodeHeader **, void *, unsigned char *)>
        2ebc24:	e58d0004 	str	r0, [sp, #4]	; fField4
        2ebc28:	e1b02000 	movs	r2, r0
        2ebc2c:	0a000005 	beq	2ebc48 <TSoupIndex::SearchNextDup(KeyField *, NodeHeader **, long *, DupNodeHeader **)+0x18c>
        2ebc30:	e1a01006 	mov	r1, r6
        2ebc34:	e1a00004 	mov	r0, r4
        2ebc38:	eb5d5512 	bl	1a41088 <TSoupIndex::$kfReplaceFirstData(KeyField *, void *)>
        2ebc3c:	e28dd004 	add	sp, sp, #4	; 0x4
        2ebc40:	e1a0000a 	mov	r0, sl
        2ebc44:	ea000014 	b	2ebc9c <TSoupIndex::SearchNextDup(KeyField *, NodeHeader **, long *, DupNodeHeader **)+0x1e0>
        2ebc48:	e5dd0000 	ldrb	r0, [sp]
        2ebc4c:	e3300000 	teq	r0, #0	; 0x0
        2ebc50:	03e00000 	mvneq	r0, #0	; 0x0
        2ebc54:	13a00000 	movne	r0, #0	; 0x0
        2ebc58:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2ebc5c:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        2ebc60:	e3310000 	teq	r1, #0	; 0x0
        2ebc64:	0affffbe 	beq	2ebb64 <TSoupIndex::SearchNextDup(KeyField *, NodeHeader **, long *, DupNodeHeader **)+0xa8>
        2ebc68:	e5950000 	ldr	r0, [r5]
        2ebc6c:	e5902000 	ldr	r2, [r0]
        2ebc70:	e1a00004 	mov	r0, r4
        2ebc74:	eb5d593b 	bl	1a42168 <TSoupIndex::$ReadANode(unsigned long, unsigned long)>
        2ebc78:	e1a03009 	mov	r3, r9
        2ebc7c:	e5850000 	str	r0, [r5]
        2ebc80:	e92d0008 	stmdb	sp!, {r3}
        2ebc84:	e1a03007 	mov	r3, r7
        2ebc88:	e1a02005 	mov	r2, r5
        2ebc8c:	e1a01006 	mov	r1, r6
        2ebc90:	e1a00004 	mov	r0, r4
        2ebc94:	eb5d7e4f 	bl	1a4b5d8 <TSoupIndex::$SearchNextDup(KeyField *, NodeHeader **, long *, DupNodeHeader **)>
        2ebc98:	e28dd004 	add	sp, sp, #4	; 0x4
        2ebc9c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::SearchNext(KeyField *, NodeHeader **, long *)
 * Address: 002ebcc4
 */
TSoupIndex::SearchNext(KeyField *, NodeHeader **, long *) {
    /*
        2ebcc4:	e1a0c00d 	mov	ip, sp
        2ebcc8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2ebccc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ebcd0:	e1a05000 	mov	r5, r0
        2ebcd4:	e1a07001 	mov	r7, r1
        2ebcd8:	e1a04002 	mov	r4, r2
        2ebcdc:	e1a06003 	mov	r6, r3
        2ebce0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2ebce4:	e92d0008 	stmdb	sp!, {r3}
        2ebce8:	e28d3004 	add	r3, sp, #4	; 0x4
        2ebcec:	e5922000 	ldr	r2, [r2]
        2ebcf0:	eb5d50d8 	bl	1a40058 <TSoupIndex::$KeyInNode(KeyField *, NodeHeader *, unsigned long *, long *)>
        2ebcf4:	e28dd004 	add	sp, sp, #4	; 0x4
        2ebcf8:	e3300000 	teq	r0, #0	; 0x0
        2ebcfc:	0a000005 	beq	2ebd18 <TSoupIndex::SearchNext(KeyField *, NodeHeader **, long *)+0x54>
        2ebd00:	e1a03006 	mov	r3, r6
        2ebd04:	e1a02004 	mov	r2, r4
        2ebd08:	e1a01007 	mov	r1, r7
        2ebd0c:	e1a00005 	mov	r0, r5
        2ebd10:	eb5d4c8c 	bl	1a3ef48 <TSoupIndex::$FindNextKey(KeyField *, NodeHeader **, long *)>
        2ebd14:	ea000028 	b	2ebdbc <TSoupIndex::SearchNext(KeyField *, NodeHeader **, long *)+0xf8>
        2ebd18:	e59d1000 	ldr	r1, [sp]
        2ebd1c:	e3310000 	teq	r1, #0	; 0x0
        2ebd20:	1a00001b 	bne	2ebd94 <TSoupIndex::SearchNext(KeyField *, NodeHeader **, long *)+0xd0>
        2ebd24:	e5962000 	ldr	r2, [r6]
        2ebd28:	e1a00005 	mov	r0, r5
        2ebd2c:	e5941000 	ldr	r1, [r4]
        2ebd30:	eb5d50c6 	bl	1a40050 <TSoupIndex::$KeyFieldAdr(NodeHeader *, long)>
        2ebd34:	e5901000 	ldr	r1, [r0]
        2ebd38:	e1a01101 	mov	r1, r1, lsl #2
        2ebd3c:	e1b01921 	movs	r1, r1, lsr #18
        2ebd40:	0a000004 	beq	2ebd58 <TSoupIndex::SearchNext(KeyField *, NodeHeader **, long *)+0x94>
        2ebd44:	e1a02007 	mov	r2, r7
        2ebd48:	e1a01000 	mov	r1, r0
        2ebd4c:	e1a00005 	mov	r0, r5
        2ebd50:	eb5d54e3 	bl	1a410e4 <TSoupIndex::$MoveKey(KeyField *, KeyField *)>
        2ebd54:	ea000008 	b	2ebd7c <TSoupIndex::SearchNext(KeyField *, NodeHeader **, long *)+0xb8>
        2ebd58:	e1a00005 	mov	r0, r5
        2ebd5c:	e5941000 	ldr	r1, [r4]
        2ebd60:	eb5d54d1 	bl	1a410ac <TSoupIndex::$LastSlotInNode(NodeHeader *)>
        2ebd64:	e5860000 	str	r0, [r6]
        2ebd68:	e1a03006 	mov	r3, r6
        2ebd6c:	e1a02004 	mov	r2, r4
        2ebd70:	e1a01007 	mov	r1, r7
        2ebd74:	e1a00005 	mov	r0, r5
        2ebd78:	eb5d4c72 	bl	1a3ef48 <TSoupIndex::$FindNextKey(KeyField *, NodeHeader **, long *)>
        2ebd7c:	e5970000 	ldr	r0, [r7]
        2ebd80:	e1a00100 	mov	r0, r0, lsl #2
        2ebd84:	e1b00920 	movs	r0, r0, lsr #18
        2ebd88:	13e00000 	mvnne	r0, #0	; 0x0
        2ebd8c:	03a00000 	moveq	r0, #0	; 0x0
        2ebd90:	ea000009 	b	2ebdbc <TSoupIndex::SearchNext(KeyField *, NodeHeader **, long *)+0xf8>
        2ebd94:	e5940000 	ldr	r0, [r4]
        2ebd98:	e5902000 	ldr	r2, [r0]
        2ebd9c:	e1a00005 	mov	r0, r5
        2ebda0:	eb5d58f0 	bl	1a42168 <TSoupIndex::$ReadANode(unsigned long, unsigned long)>
        2ebda4:	e1a03006 	mov	r3, r6
        2ebda8:	e5840000 	str	r0, [r4]
        2ebdac:	e1a02004 	mov	r2, r4
        2ebdb0:	e1a01007 	mov	r1, r7
        2ebdb4:	e1a00005 	mov	r0, r5
        2ebdb8:	eb5d7e07 	bl	1a4b5dc <TSoupIndex::$SearchNext(KeyField *, NodeHeader **, long *)>
        2ebdbc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::SearchPrior(KeyField *, NodeHeader **, long *)
 * Address: 002ebdc0
 */
TSoupIndex::SearchPrior(KeyField *, NodeHeader **, long *) {
    /*
        2ebdc0:	e1a0c00d 	mov	ip, sp
        2ebdc4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2ebdc8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ebdcc:	e1a05000 	mov	r5, r0
        2ebdd0:	e1a06001 	mov	r6, r1
        2ebdd4:	e1a04002 	mov	r4, r2
        2ebdd8:	e1a07003 	mov	r7, r3
        2ebddc:	e24dd004 	sub	sp, sp, #4	; 0x4
        2ebde0:	e92d0008 	stmdb	sp!, {r3}
        2ebde4:	e28d3004 	add	r3, sp, #4	; 0x4
        2ebde8:	e5922000 	ldr	r2, [r2]
        2ebdec:	eb5d5099 	bl	1a40058 <TSoupIndex::$KeyInNode(KeyField *, NodeHeader *, unsigned long *, long *)>
        2ebdf0:	e28dd004 	add	sp, sp, #4	; 0x4
        2ebdf4:	e3300000 	teq	r0, #0	; 0x0
        2ebdf8:	0a000005 	beq	2ebe14 <TSoupIndex::SearchPrior(KeyField *, NodeHeader **, long *)+0x54>
        2ebdfc:	e1a03007 	mov	r3, r7
        2ebe00:	e1a02004 	mov	r2, r4
        2ebe04:	e1a01006 	mov	r1, r6
        2ebe08:	e1a00005 	mov	r0, r5
        2ebe0c:	eb5d7def 	bl	1a4b5d0 <TSoupIndex::$FindPriorKey(KeyField *, NodeHeader **, long *)>
        2ebe10:	ea000023 	b	2ebea4 <TSoupIndex::SearchPrior(KeyField *, NodeHeader **, long *)+0xe4>
        2ebe14:	e59d1000 	ldr	r1, [sp]
        2ebe18:	e3310000 	teq	r1, #0	; 0x0
        2ebe1c:	1a000016 	bne	2ebe7c <TSoupIndex::SearchPrior(KeyField *, NodeHeader **, long *)+0xbc>
        2ebe20:	e5970000 	ldr	r0, [r7]
        2ebe24:	e3300000 	teq	r0, #0	; 0x0
        2ebe28:	0a000008 	beq	2ebe50 <TSoupIndex::SearchPrior(KeyField *, NodeHeader **, long *)+0x90>
        2ebe2c:	e2402001 	sub	r2, r0, #1	; 0x1
        2ebe30:	e1a00005 	mov	r0, r5
        2ebe34:	e5941000 	ldr	r1, [r4]
        2ebe38:	eb5d5084 	bl	1a40050 <TSoupIndex::$KeyFieldAdr(NodeHeader *, long)>
        2ebe3c:	e1a01000 	mov	r1, r0
        2ebe40:	e1a02006 	mov	r2, r6
        2ebe44:	e1a00005 	mov	r0, r5
        2ebe48:	eb5d54a5 	bl	1a410e4 <TSoupIndex::$MoveKey(KeyField *, KeyField *)>
        2ebe4c:	ea000004 	b	2ebe64 <TSoupIndex::SearchPrior(KeyField *, NodeHeader **, long *)+0xa4>
        2ebe50:	e1a03007 	mov	r3, r7
        2ebe54:	e1a02004 	mov	r2, r4
        2ebe58:	e1a01006 	mov	r1, r6
        2ebe5c:	e1a00005 	mov	r0, r5
        2ebe60:	eb5d7dda 	bl	1a4b5d0 <TSoupIndex::$FindPriorKey(KeyField *, NodeHeader **, long *)>
        2ebe64:	e5960000 	ldr	r0, [r6]
        2ebe68:	e1a00100 	mov	r0, r0, lsl #2
        2ebe6c:	e1b00920 	movs	r0, r0, lsr #18
        2ebe70:	13e00000 	mvnne	r0, #0	; 0x0
        2ebe74:	03a00000 	moveq	r0, #0	; 0x0
        2ebe78:	ea000009 	b	2ebea4 <TSoupIndex::SearchPrior(KeyField *, NodeHeader **, long *)+0xe4>
        2ebe7c:	e5940000 	ldr	r0, [r4]
        2ebe80:	e5902000 	ldr	r2, [r0]
        2ebe84:	e1a00005 	mov	r0, r5
        2ebe88:	eb5d58b6 	bl	1a42168 <TSoupIndex::$ReadANode(unsigned long, unsigned long)>
        2ebe8c:	e1a03007 	mov	r3, r7
        2ebe90:	e5840000 	str	r0, [r4]
        2ebe94:	e1a02004 	mov	r2, r4
        2ebe98:	e1a01006 	mov	r1, r6
        2ebe9c:	e1a00005 	mov	r0, r5
        2ebea0:	eb5d7dce 	bl	1a4b5e0 <TSoupIndex::$SearchPrior(KeyField *, NodeHeader **, long *)>
        2ebea4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::SearchPriorDup(KeyField *, NodeHeader **, long *, DupNodeHeader **)
 * Address: 002ebea8
 */
TSoupIndex::SearchPriorDup(KeyField *, NodeHeader **, long *, DupNodeHeader **) {
    /*
        2ebea8:	e1a0c00d 	mov	ip, sp
        2ebeac:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2ebeb0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ebeb4:	e1a04000 	mov	r4, r0
        2ebeb8:	e1a05001 	mov	r5, r1
        2ebebc:	e1a06002 	mov	r6, r2
        2ebec0:	e1a07003 	mov	r7, r3
        2ebec4:	e59b9004 	ldr	r9, [fp, #4]	; fField4
        2ebec8:	e24dd008 	sub	sp, sp, #8	; 0x8
        2ebecc:	e3a00000 	mov	r0, #0	; 0x0
        2ebed0:	e5890000 	str	r0, [r9]
        2ebed4:	e92d0008 	stmdb	sp!, {r3}
        2ebed8:	e28d3008 	add	r3, sp, #8	; 0x8
        2ebedc:	e5922000 	ldr	r2, [r2]
        2ebee0:	e1a00004 	mov	r0, r4
        2ebee4:	eb5d505b 	bl	1a40058 <TSoupIndex::$KeyInNode(KeyField *, NodeHeader *, unsigned long *, long *)>
        2ebee8:	e28dd004 	add	sp, sp, #4	; 0x4
        2ebeec:	e1b0a000 	movs	sl, r0
        2ebef0:	0a000048 	beq	2ec018 <TSoupIndex::SearchPriorDup(KeyField *, NodeHeader **, long *, DupNodeHeader **)+0x170>
        2ebef4:	e1a01005 	mov	r1, r5
        2ebef8:	e1a00004 	mov	r0, r4
        2ebefc:	eb5d505c 	bl	1a40074 <TSoupIndex::$kfFirstDataAdr(KeyField *)>
        2ebf00:	e1a08000 	mov	r8, r0
        2ebf04:	e5972000 	ldr	r2, [r7]
        2ebf08:	e1a00004 	mov	r0, r4
        2ebf0c:	e5961000 	ldr	r1, [r6]
        2ebf10:	eb5d504e 	bl	1a40050 <TSoupIndex::$KeyFieldAdr(NodeHeader *, long)>
        2ebf14:	e1a06000 	mov	r6, r0
        2ebf18:	e5900000 	ldr	r0, [r0]
        2ebf1c:	e1a00820 	mov	r0, r0, lsr #16
        2ebf20:	e1b00740 	movs	r0, r0, asr #14
        2ebf24:	1a00000d 	bne	2ebf60 <TSoupIndex::SearchPriorDup(KeyField *, NodeHeader **, long *, DupNodeHeader **)+0xb8>
        2ebf28:	e1a01006 	mov	r1, r6
        2ebf2c:	e1a00004 	mov	r0, r4
        2ebf30:	eb5d504f 	bl	1a40074 <TSoupIndex::$kfFirstDataAdr(KeyField *)>
        2ebf34:	e1a02000 	mov	r2, r0
        2ebf38:	e1a01008 	mov	r1, r8
        2ebf3c:	e1a00004 	mov	r0, r4
        2ebf40:	e1a0e00f 	mov	lr, pc
        2ebf44:	e594f03c 	ldr	pc, [r4, #60]	; fField60
        2ebf48:	e3300000 	teq	r0, #0	; 0x0
        2ebf4c:	0a000001 	beq	2ebf58 <TSoupIndex::SearchPriorDup(KeyField *, NodeHeader **, long *, DupNodeHeader **)+0xb0>
        2ebf50:	e3e00000 	mvn	r0, #0	; 0x0
        2ebf54:	ea00003f 	b	2ec058 <TSoupIndex::SearchPriorDup(KeyField *, NodeHeader **, long *, DupNodeHeader **)+0x1b0>
        2ebf58:	e3a00000 	mov	r0, #0	; 0x0
        2ebf5c:	ea00003d 	b	2ec058 <TSoupIndex::SearchPriorDup(KeyField *, NodeHeader **, long *, DupNodeHeader **)+0x1b0>
        2ebf60:	e1a0300d 	mov	r3, sp
        2ebf64:	e1a02008 	mov	r2, r8
        2ebf68:	e1a01006 	mov	r1, r6
        2ebf6c:	e1a00004 	mov	r0, r4
        2ebf70:	eb5d503e 	bl	1a40070 <TSoupIndex::$kfFindDataAdr(KeyField *, void *, void **)>
        2ebf74:	e3300000 	teq	r0, #0	; 0x0
        2ebf78:	0a000006 	beq	2ebf98 <TSoupIndex::SearchPriorDup(KeyField *, NodeHeader **, long *, DupNodeHeader **)+0xf0>
        2ebf7c:	e59d2000 	ldr	r2, [sp]
        2ebf80:	e3320000 	teq	r2, #0	; 0x0
        2ebf84:	0afffff3 	beq	2ebf58 <TSoupIndex::SearchPriorDup(KeyField *, NodeHeader **, long *, DupNodeHeader **)+0xb0>
        2ebf88:	e1a01005 	mov	r1, r5
        2ebf8c:	e1a00004 	mov	r0, r4
        2ebf90:	eb5d543c 	bl	1a41088 <TSoupIndex::$kfReplaceFirstData(KeyField *, void *)>
        2ebf94:	ea00001d 	b	2ec010 <TSoupIndex::SearchPriorDup(KeyField *, NodeHeader **, long *, DupNodeHeader **)+0x168>
        2ebf98:	e1a01006 	mov	r1, r6
        2ebf9c:	e1a00004 	mov	r0, r4
        2ebfa0:	eb5d5437 	bl	1a41084 <TSoupIndex::$kfNextDupID(KeyField *)>
        2ebfa4:	e3300000 	teq	r0, #0	; 0x0
        2ebfa8:	0affffe8 	beq	2ebf50 <TSoupIndex::SearchPriorDup(KeyField *, NodeHeader **, long *, DupNodeHeader **)+0xa8>
        2ebfac:	e1a01000 	mov	r1, r0
        2ebfb0:	e1a00004 	mov	r0, r4
        2ebfb4:	eb5d586a 	bl	1a42164 <TSoupIndex::$ReadADupNode(unsigned long)>
        2ebfb8:	e5890000 	str	r0, [r9]
        2ebfbc:	e24dd004 	sub	sp, sp, #4	; 0x4
        2ebfc0:	e1a0300d 	mov	r3, sp
        2ebfc4:	e1a02008 	mov	r2, r8
        2ebfc8:	e1a01009 	mov	r1, r9
        2ebfcc:	e1a00004 	mov	r0, r4
        2ebfd0:	eb5d4be1 	bl	1a3ef5c <TSoupIndex::$FindPriorDupDataAdr(DupNodeHeader **, void *, unsigned char *)>
        2ebfd4:	e3300000 	teq	r0, #0	; 0x0
        2ebfd8:	11a02000 	movne	r2, r0
        2ebfdc:	1a000007 	bne	2ec000 <TSoupIndex::SearchPriorDup(KeyField *, NodeHeader **, long *, DupNodeHeader **)+0x158>
        2ebfe0:	e5dd0000 	ldrb	r0, [sp]
        2ebfe4:	e3300000 	teq	r0, #0	; 0x0
        2ebfe8:	03e00000 	mvneq	r0, #0	; 0x0
        2ebfec:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2ebff0:	e1a01006 	mov	r1, r6
        2ebff4:	e1a00004 	mov	r0, r4
        2ebff8:	eb5d501f 	bl	1a4007c <TSoupIndex::$kfLastDataAdr(KeyField *)>
        2ebffc:	e1a02000 	mov	r2, r0
        2ec000:	e1a01005 	mov	r1, r5
        2ec004:	e1a00004 	mov	r0, r4
        2ec008:	eb5d541e 	bl	1a41088 <TSoupIndex::$kfReplaceFirstData(KeyField *, void *)>
        2ec00c:	e28dd004 	add	sp, sp, #4	; 0x4
        2ec010:	e1a0000a 	mov	r0, sl
        2ec014:	ea00000f 	b	2ec058 <TSoupIndex::SearchPriorDup(KeyField *, NodeHeader **, long *, DupNodeHeader **)+0x1b0>
        2ec018:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        2ec01c:	e3310000 	teq	r1, #0	; 0x0
        2ec020:	0affffca 	beq	2ebf50 <TSoupIndex::SearchPriorDup(KeyField *, NodeHeader **, long *, DupNodeHeader **)+0xa8>
        2ec024:	e5960000 	ldr	r0, [r6]
        2ec028:	e5902000 	ldr	r2, [r0]
        2ec02c:	e1a00004 	mov	r0, r4
        2ec030:	eb5d584c 	bl	1a42168 <TSoupIndex::$ReadANode(unsigned long, unsigned long)>
        2ec034:	e1a03009 	mov	r3, r9
        2ec038:	e5860000 	str	r0, [r6]
        2ec03c:	e92d0008 	stmdb	sp!, {r3}
        2ec040:	e1a03007 	mov	r3, r7
        2ec044:	e1a02006 	mov	r2, r6
        2ec048:	e1a01005 	mov	r1, r5
        2ec04c:	e1a00004 	mov	r0, r4
        2ec050:	eb5d7d63 	bl	1a4b5e4 <TSoupIndex::$SearchPriorDup(KeyField *, NodeHeader **, long *, DupNodeHeader **)>
        2ec054:	e28dd004 	add	sp, sp, #4	; 0x4
        2ec058:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::SplitANode(KeyField *, unsigned long *, NodeHeader *, long)
 * Address: 002ec05c
 */
TSoupIndex::SplitANode(KeyField *, unsigned long *, NodeHeader *, long) {
    /*
        2ec05c:	e1a0c00d 	mov	ip, sp
        2ec060:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2ec064:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ec068:	e1a04000 	mov	r4, r0
        2ec06c:	e1a07001 	mov	r7, r1
        2ec070:	e1a06002 	mov	r6, r2
        2ec074:	e1a05003 	mov	r5, r3
        2ec078:	e59ba004 	ldr	sl, [fp, #4]	; fField4
        2ec07c:	eb5d541c 	bl	1a410f4 <TSoupIndex::$NewNode(void)>
        2ec080:	e1a09000 	mov	r9, r0
        2ec084:	e595000a 	ldr	r0, [r5, #10]
        2ec088:	e13a0840 	teq	sl, r0, asr #16
        2ec08c:	1a000007 	bne	2ec0b0 <TSoupIndex::SplitANode(KeyField *, unsigned long *, NodeHeader *, long)+0x54>
        2ec090:	e3a03000 	mov	r3, #0	; 0x0
        2ec094:	e92d0008 	stmdb	sp!, {r3}
        2ec098:	e1a03009 	mov	r3, r9
        2ec09c:	e1a01007 	mov	r1, r7
        2ec0a0:	e1a00004 	mov	r0, r4
        2ec0a4:	e5962000 	ldr	r2, [r6]
        2ec0a8:	eb5d5829 	bl	1a42154 <TSoupIndex::$PutKeyIntoNode(KeyField *, unsigned long, NodeHeader *, long)>
        2ec0ac:	e28dd004 	add	sp, sp, #4	; 0x4
        2ec0b0:	e595000a 	ldr	r0, [r5, #10]
        2ec0b4:	e1a00840 	mov	r0, r0, asr #16
        2ec0b8:	e2408001 	sub	r8, r0, #1	; 0x1
        2ec0bc:	ea000022 	b	2ec14c <TSoupIndex::SplitANode(KeyField *, unsigned long *, NodeHeader *, long)+0xf0>
        2ec0c0:	e3a03000 	mov	r3, #0	; 0x0
        2ec0c4:	e92d0008 	stmdb	sp!, {r3}
        2ec0c8:	e1a02008 	mov	r2, r8
        2ec0cc:	e1a01005 	mov	r1, r5
        2ec0d0:	e1a00004 	mov	r0, r4
        2ec0d4:	eb5d5c33 	bl	1a431a8 <TSoupIndex::$RightNodeNo(NodeHeader *, long)>
        2ec0d8:	e1a02008 	mov	r2, r8
        2ec0dc:	e1a01005 	mov	r1, r5
        2ec0e0:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        2ec0e4:	e1a00004 	mov	r0, r4
        2ec0e8:	eb5d4fd8 	bl	1a40050 <TSoupIndex::$KeyFieldAdr(NodeHeader *, long)>
        2ec0ec:	e1a01000 	mov	r1, r0
        2ec0f0:	e1a03009 	mov	r3, r9
        2ec0f4:	e1a00004 	mov	r0, r4
        2ec0f8:	e49d2004 	ldr	r2, [sp], #4	; fField4
        2ec0fc:	eb5d5814 	bl	1a42154 <TSoupIndex::$PutKeyIntoNode(KeyField *, unsigned long, NodeHeader *, long)>
        2ec100:	e28dd004 	add	sp, sp, #4	; 0x4
        2ec104:	e1a01005 	mov	r1, r5
        2ec108:	e1a00004 	mov	r0, r4
        2ec10c:	eb5d4357 	bl	1a3ce70 <TSoupIndex::$ChangeNode(NodeHeader *)>
        2ec110:	e1a02008 	mov	r2, r8
        2ec114:	e1a01005 	mov	r1, r5
        2ec118:	e1a00004 	mov	r0, r4
        2ec11c:	eb5d476f 	bl	1a3dee0 <TSoupIndex::$DeleteKeyFromNode(NodeHeader *, long)>
        2ec120:	e13a0008 	teq	sl, r8
        2ec124:	1a000007 	bne	2ec148 <TSoupIndex::SplitANode(KeyField *, unsigned long *, NodeHeader *, long)+0xec>
        2ec128:	e3a03000 	mov	r3, #0	; 0x0
        2ec12c:	e92d0008 	stmdb	sp!, {r3}
        2ec130:	e1a03009 	mov	r3, r9
        2ec134:	e1a01007 	mov	r1, r7
        2ec138:	e1a00004 	mov	r0, r4
        2ec13c:	e5962000 	ldr	r2, [r6]
        2ec140:	eb5d5803 	bl	1a42154 <TSoupIndex::$PutKeyIntoNode(KeyField *, unsigned long, NodeHeader *, long)>
        2ec144:	e28dd004 	add	sp, sp, #4	; 0x4
        2ec148:	e2488001 	sub	r8, r8, #1	; 0x1
        2ec14c:	e3580001 	cmp	r8, #1	; 0x1
        2ec150:	da000004 	ble	2ec168 <TSoupIndex::SplitANode(KeyField *, unsigned long *, NodeHeader *, long)+0x10c>
        2ec154:	e1a01009 	mov	r1, r9
        2ec158:	e1a00004 	mov	r0, r4
        2ec15c:	eb5d57ea 	bl	1a4210c <TSoupIndex::$NodeUnderflow(NodeHeader *)>
        2ec160:	e3300000 	teq	r0, #0	; 0x0
        2ec164:	1affffd5 	bne	2ec0c0 <TSoupIndex::SplitANode(KeyField *, unsigned long *, NodeHeader *, long)+0x64>
        2ec168:	e15a0008 	cmp	sl, r8
        2ec16c:	ca00000b 	bgt	2ec1a0 <TSoupIndex::SplitANode(KeyField *, unsigned long *, NodeHeader *, long)+0x144>
        2ec170:	e1a01005 	mov	r1, r5
        2ec174:	e1a00004 	mov	r0, r4
        2ec178:	eb5d433c 	bl	1a3ce70 <TSoupIndex::$ChangeNode(NodeHeader *)>
        2ec17c:	e1a0300a 	mov	r3, sl
        2ec180:	e92d0008 	stmdb	sp!, {r3}
        2ec184:	e1a03005 	mov	r3, r5
        2ec188:	e1a01007 	mov	r1, r7
        2ec18c:	e1a00004 	mov	r0, r4
        2ec190:	e5962000 	ldr	r2, [r6]
        2ec194:	eb5d57ee 	bl	1a42154 <TSoupIndex::$PutKeyIntoNode(KeyField *, unsigned long, NodeHeader *, long)>
        2ec198:	e28dd004 	add	sp, sp, #4	; 0x4
        2ec19c:	e2888001 	add	r8, r8, #1	; 0x1
        2ec1a0:	e1a02008 	mov	r2, r8
        2ec1a4:	e1a01005 	mov	r1, r5
        2ec1a8:	e1a00004 	mov	r0, r4
        2ec1ac:	eb5d5bfd 	bl	1a431a8 <TSoupIndex::$RightNodeNo(NodeHeader *, long)>
        2ec1b0:	e1a03000 	mov	r3, r0
        2ec1b4:	e1a01009 	mov	r1, r9
        2ec1b8:	e1a00004 	mov	r0, r4
        2ec1bc:	e3a02000 	mov	r2, #0	; 0x0
        2ec1c0:	eb5d5c03 	bl	1a431d4 <TSoupIndex::$SetNodeNo(NodeHeader *, long, unsigned long)>
        2ec1c4:	e1a02008 	mov	r2, r8
        2ec1c8:	e1a01005 	mov	r1, r5
        2ec1cc:	e1a00004 	mov	r0, r4
        2ec1d0:	eb5d4f9e 	bl	1a40050 <TSoupIndex::$KeyFieldAdr(NodeHeader *, long)>
        2ec1d4:	e1a01000 	mov	r1, r0
        2ec1d8:	e1a02007 	mov	r2, r7
        2ec1dc:	e1a00004 	mov	r0, r4
        2ec1e0:	eb5d53bf 	bl	1a410e4 <TSoupIndex::$MoveKey(KeyField *, KeyField *)>
        2ec1e4:	e1a01005 	mov	r1, r5
        2ec1e8:	e1a00004 	mov	r0, r4
        2ec1ec:	eb5d431f 	bl	1a3ce70 <TSoupIndex::$ChangeNode(NodeHeader *)>
        2ec1f0:	e1a02008 	mov	r2, r8
        2ec1f4:	e1a01005 	mov	r1, r5
        2ec1f8:	e1a00004 	mov	r0, r4
        2ec1fc:	eb5d4737 	bl	1a3dee0 <TSoupIndex::$DeleteKeyFromNode(NodeHeader *, long)>
        2ec200:	e5990000 	ldr	r0, [r9]
        2ec204:	e5860000 	str	r0, [r6]
        2ec208:	e1a01005 	mov	r1, r5
        2ec20c:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
        2ec210:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        2ec214:	ea5d4736 	b	1a3def4 <TNodeCache::$DirtyNode(NodeHeader *)>
    */
}

/**
 * Symbol: TSoupIndex::CheckForDupData(KeyField *, void *)
 * Address: 002ec218
 */
TSoupIndex::CheckForDupData(KeyField *, void *) {
    /*
        2ec218:	e1a0c00d 	mov	ip, sp
        2ec21c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2ec220:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ec224:	e1a04000 	mov	r4, r0
        2ec228:	e1a05001 	mov	r5, r1
        2ec22c:	e1a06002 	mov	r6, r2
        2ec230:	e3a00000 	mov	r0, #0	; 0x0
        2ec234:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        2ec238:	e5940020 	ldr	r0, [r4, #32]	; fField32
        2ec23c:	e3300000 	teq	r0, #0	; 0x0
        2ec240:	03a00001 	moveq	r0, #1	; 0x1
        2ec244:	0b5d42f7 	bleq	1a3ce28 <$_OSErr(long)>
        2ec248:	e1a02006 	mov	r2, r6
        2ec24c:	e1a01005 	mov	r1, r5
        2ec250:	e1a00004 	mov	r0, r4
        2ec254:	e3a03000 	mov	r3, #0	; 0x0
        2ec258:	eb5d4f84 	bl	1a40070 <TSoupIndex::$kfFindDataAdr(KeyField *, void *, void **)>
        2ec25c:	e58d0000 	str	r0, [sp]
        2ec260:	e3300000 	teq	r0, #0	; 0x0
        2ec264:	13a00001 	movne	r0, #1	; 0x1
        2ec268:	1b5d42ee 	blne	1a3ce28 <$_OSErr(long)>
        2ec26c:	e5950000 	ldr	r0, [r5]
        2ec270:	e1a00820 	mov	r0, r0, lsr #16
        2ec274:	e1b00740 	movs	r0, r0, asr #14
        2ec278:	0a000022 	beq	2ec308 <TSoupIndex::CheckForDupData(KeyField *, void *)+0xf0>
        2ec27c:	e1a01005 	mov	r1, r5
        2ec280:	e1a00004 	mov	r0, r4
        2ec284:	eb5d537e 	bl	1a41084 <TSoupIndex::$kfNextDupID(KeyField *)>
        2ec288:	e3300000 	teq	r0, #0	; 0x0
        2ec28c:	0a00001d 	beq	2ec308 <TSoupIndex::CheckForDupData(KeyField *, void *)+0xf0>
        2ec290:	e1a01000 	mov	r1, r0
        2ec294:	e1a00004 	mov	r0, r4
        2ec298:	eb5d57b1 	bl	1a42164 <TSoupIndex::$ReadADupNode(unsigned long)>
        2ec29c:	e1a05000 	mov	r5, r0
        2ec2a0:	e3a02000 	mov	r2, #0	; 0x0
        2ec2a4:	e58d2000 	str	r2, [sp]
        2ec2a8:	e1a0300d 	mov	r3, sp
        2ec2ac:	e1a01000 	mov	r1, r0
        2ec2b0:	e1a00004 	mov	r0, r4
        2ec2b4:	eb5d5390 	bl	1a410fc <TSoupIndex::$NextDupDataAdr(DupNodeHeader *, void *, void **)>
        2ec2b8:	e3300000 	teq	r0, #0	; 0x0
        2ec2bc:	0a00000e 	beq	2ec2fc <TSoupIndex::CheckForDupData(KeyField *, void *)+0xe4>
        2ec2c0:	e1a01006 	mov	r1, r6
        2ec2c4:	e1a00004 	mov	r0, r4
        2ec2c8:	e59d2000 	ldr	r2, [sp]
        2ec2cc:	e1a0e00f 	mov	lr, pc
        2ec2d0:	e594f03c 	ldr	pc, [r4, #60]	; fField60
        2ec2d4:	e3300000 	teq	r0, #0	; 0x0
        2ec2d8:	03a00001 	moveq	r0, #1	; 0x1
        2ec2dc:	0b5d42d1 	bleq	1a3ce28 <$_OSErr(long)>
        2ec2e0:	e1a0300d 	mov	r3, sp
        2ec2e4:	e1a01005 	mov	r1, r5
        2ec2e8:	e1a00004 	mov	r0, r4
        2ec2ec:	e59d2000 	ldr	r2, [sp]
        2ec2f0:	eb5d5381 	bl	1a410fc <TSoupIndex::$NextDupDataAdr(DupNodeHeader *, void *, void **)>
        2ec2f4:	e3300000 	teq	r0, #0	; 0x0
        2ec2f8:	1afffff0 	bne	2ec2c0 <TSoupIndex::CheckForDupData(KeyField *, void *)+0xa8>
        2ec2fc:	e5b50004 	ldr	r0, [r5, #4]!	; fField4
        2ec300:	e3300000 	teq	r0, #0	; 0x0
        2ec304:	1affffe1 	bne	2ec290 <TSoupIndex::CheckForDupData(KeyField *, void *)+0x78>
        2ec308:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::StoreDupData(KeyField *, void *)
 * Address: 002ec30c
 */
TSoupIndex::StoreDupData(KeyField *, void *) {
    /*
        2ec30c:	e1a0c00d 	mov	ip, sp
        2ec310:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2ec314:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ec318:	e1a04000 	mov	r4, r0
        2ec31c:	e1a06001 	mov	r6, r1
        2ec320:	e1a05002 	mov	r5, r2
        2ec324:	e3a00000 	mov	r0, #0	; 0x0
        2ec328:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        2ec32c:	e1a00004 	mov	r0, r4
        2ec330:	eb5d5353 	bl	1a41084 <TSoupIndex::$kfNextDupID(KeyField *)>
        2ec334:	e1b01000 	movs	r1, r0
        2ec338:	0a00000c 	beq	2ec370 <TSoupIndex::StoreDupData(KeyField *, void *)+0x64>
        2ec33c:	e1a00004 	mov	r0, r4
        2ec340:	eb5d5787 	bl	1a42164 <TSoupIndex::$ReadADupNode(unsigned long)>
        2ec344:	e1a07000 	mov	r7, r0
        2ec348:	e5b01004 	ldr	r1, [r0, #4]!	; fField4
        2ec34c:	e3310000 	teq	r1, #0	; 0x0
        2ec350:	1afffff9 	bne	2ec33c <TSoupIndex::StoreDupData(KeyField *, void *)+0x30>
        2ec354:	e3370000 	teq	r7, #0	; 0x0
        2ec358:	0a000004 	beq	2ec370 <TSoupIndex::StoreDupData(KeyField *, void *)+0x64>
        2ec35c:	e1a01007 	mov	r1, r7
        2ec360:	e1a00004 	mov	r0, r4
        2ec364:	eb5d42c1 	bl	1a3ce70 <TSoupIndex::$ChangeNode(NodeHeader *)>
        2ec368:	e3570000 	cmp	r7, #0	; 0x0
        2ec36c:	1a000014 	bne	2ec3c4 <TSoupIndex::StoreDupData(KeyField *, void *)+0xb8>
        2ec370:	e1a01005 	mov	r1, r5
        2ec374:	e1a00004 	mov	r0, r4
        2ec378:	eb5d5345 	bl	1a41094 <TSoupIndex::$kfSizeOfData(void *)>
        2ec37c:	e5961000 	ldr	r1, [r6]
        2ec380:	e1a01101 	mov	r1, r1, lsl #2
        2ec384:	e0800921 	add	r0, r0, r1, lsr #18
        2ec388:	e3500064 	cmp	r0, #100	; 0x64
        2ec38c:	aa00000d 	bge	2ec3c8 <TSoupIndex::StoreDupData(KeyField *, void *)+0xbc>
        2ec390:	e1a0300d 	mov	r3, sp
        2ec394:	e1a01006 	mov	r1, r6
        2ec398:	e1a00004 	mov	r0, r4
        2ec39c:	e59d2000 	ldr	r2, [sp]
        2ec3a0:	eb5d5336 	bl	1a41080 <TSoupIndex::$kfNextDataAdr(KeyField *, void *, void **)>
        2ec3a4:	e3300000 	teq	r0, #0	; 0x0
        2ec3a8:	1afffff8 	bne	2ec390 <TSoupIndex::StoreDupData(KeyField *, void *)+0x84>
        2ec3ac:	e1a03005 	mov	r3, r5
        2ec3b0:	e1a01006 	mov	r1, r6
        2ec3b4:	e1a00004 	mov	r0, r4
        2ec3b8:	e59d2000 	ldr	r2, [sp]
        2ec3bc:	eb5d4f2d 	bl	1a40078 <TSoupIndex::$kfInsertData(KeyField *, void *, void *)>
        2ec3c0:	ea000023 	b	2ec454 <TSoupIndex::StoreDupData(KeyField *, void *)+0x148>
        2ec3c4:	1a00000b 	bne	2ec3f8 <TSoupIndex::StoreDupData(KeyField *, void *)+0xec>
        2ec3c8:	e1a00004 	mov	r0, r4
        2ec3cc:	eb5d5347 	bl	1a410f0 <TSoupIndex::$NewDupNode(void)>
        2ec3d0:	e1a07000 	mov	r7, r0
        2ec3d4:	e1a02005 	mov	r2, r5
        2ec3d8:	e1a01000 	mov	r1, r0
        2ec3dc:	e1a00004 	mov	r0, r4
        2ec3e0:	eb5d429c 	bl	1a3ce58 <TSoupIndex::$AppendDupData(DupNodeHeader *, void *)>
        2ec3e4:	e1a01006 	mov	r1, r6
        2ec3e8:	e1a00004 	mov	r0, r4
        2ec3ec:	e5972000 	ldr	r2, [r7]
        2ec3f0:	eb5d5326 	bl	1a41090 <TSoupIndex::$kfSetNextDupID(KeyField *, unsigned long)>
        2ec3f4:	ea000016 	b	2ec454 <TSoupIndex::StoreDupData(KeyField *, void *)+0x148>
        2ec3f8:	e1a01005 	mov	r1, r5
        2ec3fc:	e1a00004 	mov	r0, r4
        2ec400:	eb5d5323 	bl	1a41094 <TSoupIndex::$kfSizeOfData(void *)>
        2ec404:	e5971008 	ldr	r1, [r7, #8]	; fField8
        2ec408:	e1500841 	cmp	r0, r1, asr #16
        2ec40c:	da000009 	ble	2ec438 <TSoupIndex::StoreDupData(KeyField *, void *)+0x12c>
        2ec410:	e1a00004 	mov	r0, r4
        2ec414:	eb5d5335 	bl	1a410f0 <TSoupIndex::$NewDupNode(void)>
        2ec418:	e1a06000 	mov	r6, r0
        2ec41c:	e1a02005 	mov	r2, r5
        2ec420:	e1a01000 	mov	r1, r0
        2ec424:	e1a00004 	mov	r0, r4
        2ec428:	eb5d428a 	bl	1a3ce58 <TSoupIndex::$AppendDupData(DupNodeHeader *, void *)>
        2ec42c:	e5960000 	ldr	r0, [r6]
        2ec430:	e5870004 	str	r0, [r7, #4]	; fField4
        2ec434:	ea000003 	b	2ec448 <TSoupIndex::StoreDupData(KeyField *, void *)+0x13c>
        2ec438:	e1a02005 	mov	r2, r5
        2ec43c:	e1a01007 	mov	r1, r7
        2ec440:	e1a00004 	mov	r0, r4
        2ec444:	eb5d4283 	bl	1a3ce58 <TSoupIndex::$AppendDupData(DupNodeHeader *, void *)>
        2ec448:	e1a01007 	mov	r1, r7
        2ec44c:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
        2ec450:	eb5d46a7 	bl	1a3def4 <TNodeCache::$DirtyNode(NodeHeader *)>
        2ec454:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::InsertDupData(KeyField *, NodeHeader *, long, unsigned long *, unsigned char *)
 * Address: 002ec458
 */
TSoupIndex::InsertDupData(KeyField *, NodeHeader *, long, unsigned long *, unsigned char *) {
    /*
        2ec458:	e1a0c00d 	mov	ip, sp
        2ec45c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2ec460:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ec464:	e1a04000 	mov	r4, r0
        2ec468:	e1a06001 	mov	r6, r1
        2ec46c:	e1a05002 	mov	r5, r2
        2ec470:	e1a07003 	mov	r7, r3
        2ec474:	e99b0600 	ldmib	fp, {r9, sl}
        2ec478:	e24dd068 	sub	sp, sp, #104	; 0x68
        2ec47c:	e3a00000 	mov	r0, #0	; 0x0
        2ec480:	e5ca0000 	strb	r0, [sl]
        2ec484:	e1a00004 	mov	r0, r4
        2ec488:	eb5d4ef9 	bl	1a40074 <TSoupIndex::$kfFirstDataAdr(KeyField *)>
        2ec48c:	e1a01000 	mov	r1, r0
        2ec490:	e1a08000 	mov	r8, r0
        2ec494:	e1a00004 	mov	r0, r4
        2ec498:	eb5d52fd 	bl	1a41094 <TSoupIndex::$kfSizeOfData(void *)>
        2ec49c:	e1a02000 	mov	r2, r0
        2ec4a0:	e1a01008 	mov	r1, r8
        2ec4a4:	e28d0004 	add	r0, sp, #4	; 0x4
        2ec4a8:	eb632169 	bl	1bb4a54 <$memmove>
        2ec4ac:	e28d2004 	add	r2, sp, #4	; 0x4
        2ec4b0:	e58d2000 	str	r2, [sp]
        2ec4b4:	e1a02007 	mov	r2, r7
        2ec4b8:	e1a01005 	mov	r1, r5
        2ec4bc:	e1a00004 	mov	r0, r4
        2ec4c0:	eb5d4ee2 	bl	1a40050 <TSoupIndex::$KeyFieldAdr(NodeHeader *, long)>
        2ec4c4:	e1a08000 	mov	r8, r0
        2ec4c8:	e1a01000 	mov	r1, r0
        2ec4cc:	e1a00004 	mov	r0, r4
        2ec4d0:	e59d2000 	ldr	r2, [sp]
        2ec4d4:	eb5d4267 	bl	1a3ce78 <TSoupIndex::$CheckForDupData(KeyField *, void *)>
        2ec4d8:	e5940020 	ldr	r0, [r4, #32]	; fField32
        2ec4dc:	e3300001 	teq	r0, #1	; 0x1
        2ec4e0:	03a00001 	moveq	r0, #1	; 0x1
        2ec4e4:	0b5d424f 	bleq	1a3ce28 <$_OSErr(long)>
        2ec4e8:	e1a01005 	mov	r1, r5
        2ec4ec:	e1a00004 	mov	r0, r4
        2ec4f0:	eb5d425e 	bl	1a3ce70 <TSoupIndex::$ChangeNode(NodeHeader *)>
        2ec4f4:	e1a02007 	mov	r2, r7
        2ec4f8:	e1a01005 	mov	r1, r5
        2ec4fc:	e1a00004 	mov	r0, r4
        2ec500:	eb5d5b28 	bl	1a431a8 <TSoupIndex::$RightNodeNo(NodeHeader *, long)>
        2ec504:	e1a02006 	mov	r2, r6
        2ec508:	e1a01008 	mov	r1, r8
        2ec50c:	e5890000 	str	r0, [r9]
        2ec510:	e1a00004 	mov	r0, r4
        2ec514:	eb5d52f2 	bl	1a410e4 <TSoupIndex::$MoveKey(KeyField *, KeyField *)>
        2ec518:	e1a02007 	mov	r2, r7
        2ec51c:	e1a01005 	mov	r1, r5
        2ec520:	e1a00004 	mov	r0, r4
        2ec524:	eb5d466d 	bl	1a3dee0 <TSoupIndex::$DeleteKeyFromNode(NodeHeader *, long)>
        2ec528:	e1a02006 	mov	r2, r6
        2ec52c:	e1a00004 	mov	r0, r4
        2ec530:	e3a01001 	mov	r1, #1	; 0x1
        2ec534:	eb5d4eca 	bl	1a40064 <TSoupIndex::$kfConvertKeyField(long, KeyField *)>
        2ec538:	e1a01006 	mov	r1, r6
        2ec53c:	e1a00004 	mov	r0, r4
        2ec540:	e59d2000 	ldr	r2, [sp]
        2ec544:	eb5d5f32 	bl	1a44214 <TSoupIndex::$StoreDupData(KeyField *, void *)>
        2ec548:	e1a02006 	mov	r2, r6
        2ec54c:	e1a01005 	mov	r1, r5
        2ec550:	e1a00004 	mov	r0, r4
        2ec554:	eb5d5b14 	bl	1a431ac <TSoupIndex::$RoomInNode(NodeHeader *, KeyField *)>
        2ec558:	e3300000 	teq	r0, #0	; 0x0
        2ec55c:	0a00000b 	beq	2ec590 <TSoupIndex::InsertDupData(KeyField *, NodeHeader *, long, unsigned long *, unsigned char *)+0x138>
        2ec560:	e1a03007 	mov	r3, r7
        2ec564:	e92d0008 	stmdb	sp!, {r3}
        2ec568:	e1a03005 	mov	r3, r5
        2ec56c:	e1a01006 	mov	r1, r6
        2ec570:	e1a00004 	mov	r0, r4
        2ec574:	e5992000 	ldr	r2, [r9]
        2ec578:	eb5d56f5 	bl	1a42154 <TSoupIndex::$PutKeyIntoNode(KeyField *, unsigned long, NodeHeader *, long)>
        2ec57c:	e28dd004 	add	sp, sp, #4	; 0x4
        2ec580:	e1a01005 	mov	r1, r5
        2ec584:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
        2ec588:	eb5d4659 	bl	1a3def4 <TNodeCache::$DirtyNode(NodeHeader *)>
        2ec58c:	ea000009 	b	2ec5b8 <TSoupIndex::InsertDupData(KeyField *, NodeHeader *, long, unsigned long *, unsigned char *)+0x160>
        2ec590:	e3a00001 	mov	r0, #1	; 0x1
        2ec594:	e5ca0000 	strb	r0, [sl]
        2ec598:	e1a03007 	mov	r3, r7
        2ec59c:	e92d0008 	stmdb	sp!, {r3}
        2ec5a0:	e1a03005 	mov	r3, r5
        2ec5a4:	e1a02009 	mov	r2, r9
        2ec5a8:	e1a01006 	mov	r1, r6
        2ec5ac:	e1a00004 	mov	r0, r4
        2ec5b0:	eb5d5f13 	bl	1a44204 <TSoupIndex::$SplitANode(KeyField *, unsigned long *, NodeHeader *, long)>
        2ec5b4:	e28dd004 	add	sp, sp, #4	; 0x4
        2ec5b8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::InsertKey(KeyField *, NodeHeader *, unsigned long *, unsigned char *)
 * Address: 002ec5bc
 */
TSoupIndex::InsertKey(KeyField *, NodeHeader *, unsigned long *, unsigned char *) {
    /*
        2ec5bc:	e1a0c00d 	mov	ip, sp
        2ec5c0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2ec5c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ec5c8:	e1a04000 	mov	r4, r0
        2ec5cc:	e1a06001 	mov	r6, r1
        2ec5d0:	e1a05002 	mov	r5, r2
        2ec5d4:	e1a07003 	mov	r7, r3
        2ec5d8:	e59b8004 	ldr	r8, [fp, #4]	; fField4
        2ec5dc:	e24dd008 	sub	sp, sp, #8	; 0x8
        2ec5e0:	e1a0300d 	mov	r3, sp
        2ec5e4:	e92d0008 	stmdb	sp!, {r3}
        2ec5e8:	e28d3008 	add	r3, sp, #8	; 0x8
        2ec5ec:	eb5d4e99 	bl	1a40058 <TSoupIndex::$KeyInNode(KeyField *, NodeHeader *, unsigned long *, long *)>
        2ec5f0:	e28dd004 	add	sp, sp, #4	; 0x4
        2ec5f4:	e3300000 	teq	r0, #0	; 0x0
        2ec5f8:	0a00000c 	beq	2ec630 <TSoupIndex::InsertKey(KeyField *, NodeHeader *, unsigned long *, unsigned char *)+0x74>
        2ec5fc:	e1a01005 	mov	r1, r5
        2ec600:	e1a00004 	mov	r0, r4
        2ec604:	eb5d4219 	bl	1a3ce70 <TSoupIndex::$ChangeNode(NodeHeader *)>
        2ec608:	e1a03008 	mov	r3, r8
        2ec60c:	e1a02007 	mov	r2, r7
        2ec610:	e92d000c 	stmdb	sp!, {r2, r3}
        2ec614:	e1a02005 	mov	r2, r5
        2ec618:	e1a01006 	mov	r1, r6
        2ec61c:	e1a00004 	mov	r0, r4
        2ec620:	e59d3008 	ldr	r3, [sp, #8]	; fField8
        2ec624:	eb5d4e7d 	bl	1a40020 <TSoupIndex::$InsertDupData(KeyField *, NodeHeader *, long, unsigned long *, unsigned char *)>
        2ec628:	e28dd008 	add	sp, sp, #8	; 0x8
        2ec62c:	ea00003b 	b	2ec720 <TSoupIndex::InsertKey(KeyField *, NodeHeader *, unsigned long *, unsigned char *)+0x164>
        2ec630:	e3a0a000 	mov	sl, #0	; 0x0
        2ec634:	e3a09001 	mov	r9, #1	; 0x1
        2ec638:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        2ec63c:	e3310000 	teq	r1, #0	; 0x0
        2ec640:	05c89000 	streqb	r9, [r8]
        2ec644:	0587a000 	streq	sl, [r7]
        2ec648:	0a00000a 	beq	2ec678 <TSoupIndex::InsertKey(KeyField *, NodeHeader *, unsigned long *, unsigned char *)+0xbc>
        2ec64c:	e1a00004 	mov	r0, r4
        2ec650:	e5952000 	ldr	r2, [r5]
        2ec654:	eb5d56c3 	bl	1a42168 <TSoupIndex::$ReadANode(unsigned long, unsigned long)>
        2ec658:	e1a02000 	mov	r2, r0
        2ec65c:	e1a03008 	mov	r3, r8
        2ec660:	e92d0008 	stmdb	sp!, {r3}
        2ec664:	e1a03007 	mov	r3, r7
        2ec668:	e1a01006 	mov	r1, r6
        2ec66c:	e1a00004 	mov	r0, r4
        2ec670:	eb5d4e6b 	bl	1a40024 <TSoupIndex::$InsertKey(KeyField *, NodeHeader *, unsigned long *, unsigned char *)>
        2ec674:	e28dd004 	add	sp, sp, #4	; 0x4
        2ec678:	e5d80000 	ldrb	r0, [r8]
        2ec67c:	e3300000 	teq	r0, #0	; 0x0
        2ec680:	0a000026 	beq	2ec720 <TSoupIndex::InsertKey(KeyField *, NodeHeader *, unsigned long *, unsigned char *)+0x164>
        2ec684:	e1a0300d 	mov	r3, sp
        2ec688:	e92d0008 	stmdb	sp!, {r3}
        2ec68c:	e28d3008 	add	r3, sp, #8	; 0x8
        2ec690:	e1a02005 	mov	r2, r5
        2ec694:	e1a01006 	mov	r1, r6
        2ec698:	e1a00004 	mov	r0, r4
        2ec69c:	eb5d4e6d 	bl	1a40058 <TSoupIndex::$KeyInNode(KeyField *, NodeHeader *, unsigned long *, long *)>
        2ec6a0:	e28dd004 	add	sp, sp, #4	; 0x4
        2ec6a4:	e1a02006 	mov	r2, r6
        2ec6a8:	e1a01005 	mov	r1, r5
        2ec6ac:	e1a00004 	mov	r0, r4
        2ec6b0:	eb5d5abd 	bl	1a431ac <TSoupIndex::$RoomInNode(NodeHeader *, KeyField *)>
        2ec6b4:	e3300000 	teq	r0, #0	; 0x0
        2ec6b8:	0a00000f 	beq	2ec6fc <TSoupIndex::InsertKey(KeyField *, NodeHeader *, unsigned long *, unsigned char *)+0x140>
        2ec6bc:	e5c8a000 	strb	sl, [r8]
        2ec6c0:	e1a01005 	mov	r1, r5
        2ec6c4:	e1a00004 	mov	r0, r4
        2ec6c8:	eb5d41e8 	bl	1a3ce70 <TSoupIndex::$ChangeNode(NodeHeader *)>
        2ec6cc:	e59d3000 	ldr	r3, [sp]
        2ec6d0:	e92d0008 	stmdb	sp!, {r3}
        2ec6d4:	e1a03005 	mov	r3, r5
        2ec6d8:	e1a01006 	mov	r1, r6
        2ec6dc:	e1a00004 	mov	r0, r4
        2ec6e0:	e5972000 	ldr	r2, [r7]
        2ec6e4:	eb5d569a 	bl	1a42154 <TSoupIndex::$PutKeyIntoNode(KeyField *, unsigned long, NodeHeader *, long)>
        2ec6e8:	e28dd004 	add	sp, sp, #4	; 0x4
        2ec6ec:	e1a01005 	mov	r1, r5
        2ec6f0:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2ec6f4:	eb5d45fe 	bl	1a3def4 <TNodeCache::$DirtyNode(NodeHeader *)>
        2ec6f8:	ea000008 	b	2ec720 <TSoupIndex::InsertKey(KeyField *, NodeHeader *, unsigned long *, unsigned char *)+0x164>
        2ec6fc:	e5c89000 	strb	r9, [r8]
        2ec700:	e59d3000 	ldr	r3, [sp]
        2ec704:	e92d0008 	stmdb	sp!, {r3}
        2ec708:	e1a03005 	mov	r3, r5
        2ec70c:	e1a02007 	mov	r2, r7
        2ec710:	e1a01006 	mov	r1, r6
        2ec714:	e1a00004 	mov	r0, r4
        2ec718:	eb5d5eb9 	bl	1a44204 <TSoupIndex::$SplitANode(KeyField *, unsigned long *, NodeHeader *, long)>
        2ec71c:	e28dd004 	add	sp, sp, #4	; 0x4
        2ec720:	e5b4002c 	ldr	r0, [r4, #44]!	; fField44
        2ec724:	e3300000 	teq	r0, #0	; 0x0
        2ec728:	13a00000 	movne	r0, #0	; 0x0
        2ec72c:	03a00001 	moveq	r0, #1	; 0x1
        2ec730:	e20000ff 	and	r0, r0, #255	; 0xff
        2ec734:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::InsertAfterDelete(KeyField *, unsigned long, NodeHeader *)
 * Address: 002ec738
 */
TSoupIndex::InsertAfterDelete(KeyField *, unsigned long, NodeHeader *) {
    /*
        2ec738:	e1a0c00d 	mov	ip, sp
        2ec73c:	e92dd80f 	stmdb	sp!, {r0, r1, r2, r3, fp, ip, lr, pc}
        2ec740:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ec744:	e24dd008 	sub	sp, sp, #8	; 0x8
        2ec748:	e51b1010 	ldr	r1, [fp, -#16]	; fField16
        2ec74c:	e3310000 	teq	r1, #0	; 0x0
        2ec750:	0a000029 	beq	2ec7fc <TSoupIndex::InsertAfterDelete(KeyField *, unsigned long, NodeHeader *)+0xc4>
        2ec754:	e24b201c 	sub	r2, fp, #28	; 0x1c
        2ec758:	e8920005 	ldmia	r2, {r0, r2}
        2ec75c:	eb5d5a92 	bl	1a431ac <TSoupIndex::$RoomInNode(NodeHeader *, KeyField *)>
        2ec760:	e3300000 	teq	r0, #0	; 0x0
        2ec764:	1a000021 	bne	2ec7f0 <TSoupIndex::InsertAfterDelete(KeyField *, unsigned long, NodeHeader *)+0xb8>
        2ec768:	e28d3004 	add	r3, sp, #4	; 0x4
        2ec76c:	e92d0008 	stmdb	sp!, {r3}
        2ec770:	e28d3004 	add	r3, sp, #4	; 0x4
        2ec774:	e24b101c 	sub	r1, fp, #28	; 0x1c
        2ec778:	e8910003 	ldmia	r1, {r0, r1}
        2ec77c:	e51b2010 	ldr	r2, [fp, -#16]	; fField16
        2ec780:	eb5d4e34 	bl	1a40058 <TSoupIndex::$KeyInNode(KeyField *, NodeHeader *, unsigned long *, long *)>
        2ec784:	e28dd004 	add	sp, sp, #4	; 0x4
        2ec788:	e59d3004 	ldr	r3, [sp, #4]	; fField4
        2ec78c:	e92d0008 	stmdb	sp!, {r3}
        2ec790:	e51b3010 	ldr	r3, [fp, -#16]	; fField16
        2ec794:	e24b2014 	sub	r2, fp, #20	; 0x14
        2ec798:	e24b101c 	sub	r1, fp, #28	; 0x1c
        2ec79c:	e8910003 	ldmia	r1, {r0, r1}
        2ec7a0:	eb5d5e97 	bl	1a44204 <TSoupIndex::$SplitANode(KeyField *, unsigned long *, NodeHeader *, long)>
        2ec7a4:	e28dd004 	add	sp, sp, #4	; 0x4
        2ec7a8:	e51b0010 	ldr	r0, [fp, -#16]	; fField16
        2ec7ac:	e5b02004 	ldr	r2, [r0, #4]!	; fField4
        2ec7b0:	e3320000 	teq	r2, #0	; 0x0
        2ec7b4:	03a00000 	moveq	r0, #0	; 0x0
        2ec7b8:	050b0010 	streq	r0, [fp, -#16]	; fField16
        2ec7bc:	0a00000e 	beq	2ec7fc <TSoupIndex::InsertAfterDelete(KeyField *, unsigned long, NodeHeader *)+0xc4>
        2ec7c0:	e51b101c 	ldr	r1, [fp, -#28]	; fField28
        2ec7c4:	e5910008 	ldr	r0, [r1, #8]	; fField8
        2ec7c8:	eb5d49df 	bl	1a3ef4c <TNodeCache::$FindNode(TSoupIndex *, unsigned long)>
        2ec7cc:	e50b0010 	str	r0, [fp, -#16]	; fField16
        2ec7d0:	e3300000 	teq	r0, #0	; 0x0
        2ec7d4:	0a000008 	beq	2ec7fc <TSoupIndex::InsertAfterDelete(KeyField *, unsigned long, NodeHeader *)+0xc4>
        2ec7d8:	e1a01000 	mov	r1, r0
        2ec7dc:	e24b201c 	sub	r2, fp, #28	; 0x1c
        2ec7e0:	e8920005 	ldmia	r2, {r0, r2}
        2ec7e4:	eb5d5a70 	bl	1a431ac <TSoupIndex::$RoomInNode(NodeHeader *, KeyField *)>
        2ec7e8:	e3300000 	teq	r0, #0	; 0x0
        2ec7ec:	0affffdd 	beq	2ec768 <TSoupIndex::InsertAfterDelete(KeyField *, unsigned long, NodeHeader *)+0x30>
        2ec7f0:	e51b1010 	ldr	r1, [fp, -#16]	; fField16
        2ec7f4:	e3310000 	teq	r1, #0	; 0x0
        2ec7f8:	1a000003 	bne	2ec80c <TSoupIndex::InsertAfterDelete(KeyField *, unsigned long, NodeHeader *)+0xd4>
        2ec7fc:	e24b201c 	sub	r2, fp, #28	; 0x1c
        2ec800:	e8920007 	ldmia	r2, {r0, r1, r2}
        2ec804:	eb5d45ae 	bl	1a3dec4 <TSoupIndex::$CreateNewRoot(KeyField *, unsigned long)>
        2ec808:	ea000013 	b	2ec85c <TSoupIndex::InsertAfterDelete(KeyField *, unsigned long, NodeHeader *)+0x124>
        2ec80c:	e51b001c 	ldr	r0, [fp, -#28]	; fField28
        2ec810:	eb5d4196 	bl	1a3ce70 <TSoupIndex::$ChangeNode(NodeHeader *)>
        2ec814:	e28d3004 	add	r3, sp, #4	; 0x4
        2ec818:	e92d0008 	stmdb	sp!, {r3}
        2ec81c:	e28d3004 	add	r3, sp, #4	; 0x4
        2ec820:	e24b101c 	sub	r1, fp, #28	; 0x1c
        2ec824:	e8910003 	ldmia	r1, {r0, r1}
        2ec828:	e51b2010 	ldr	r2, [fp, -#16]	; fField16
        2ec82c:	eb5d4e09 	bl	1a40058 <TSoupIndex::$KeyInNode(KeyField *, NodeHeader *, unsigned long *, long *)>
        2ec830:	e28dd004 	add	sp, sp, #4	; 0x4
        2ec834:	e59d3004 	ldr	r3, [sp, #4]	; fField4
        2ec838:	e92d0008 	stmdb	sp!, {r3}
        2ec83c:	e24b301c 	sub	r3, fp, #28	; 0x1c
        2ec840:	e893000f 	ldmia	r3, {r0, r1, r2, r3}
        2ec844:	eb5d5642 	bl	1a42154 <TSoupIndex::$PutKeyIntoNode(KeyField *, unsigned long, NodeHeader *, long)>
        2ec848:	e28dd004 	add	sp, sp, #4	; 0x4
        2ec84c:	e51b001c 	ldr	r0, [fp, -#28]	; fField28
        2ec850:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2ec854:	e51b1010 	ldr	r1, [fp, -#16]	; fField16
        2ec858:	eb5d45a5 	bl	1a3def4 <TNodeCache::$DirtyNode(NodeHeader *)>
        2ec85c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TSoupIndex::MergeTwoNodes(KeyField *, NodeHeader *, NodeHeader *, NodeHeader *)
 * Address: 002ec860
 */
TSoupIndex::MergeTwoNodes(KeyField *, NodeHeader *, NodeHeader *, NodeHeader *) {
    /*
        2ec860:	e1a0c00d 	mov	ip, sp
        2ec864:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2ec868:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ec86c:	e1a04000 	mov	r4, r0
        2ec870:	e1a06001 	mov	r6, r1
        2ec874:	e1a07002 	mov	r7, r2
        2ec878:	e1a05003 	mov	r5, r3
        2ec87c:	e1a01003 	mov	r1, r3
        2ec880:	e59b9004 	ldr	r9, [fp, #4]	; fField4
        2ec884:	eb5d5620 	bl	1a4210c <TSoupIndex::$NodeUnderflow(NodeHeader *)>
        2ec888:	e1b08000 	movs	r8, r0
        2ec88c:	0a00000c 	beq	2ec8c4 <TSoupIndex::MergeTwoNodes(KeyField *, NodeHeader *, NodeHeader *, NodeHeader *)+0x64>
        2ec890:	e595300a 	ldr	r3, [r5, #10]
        2ec894:	e1a03843 	mov	r3, r3, asr #16
        2ec898:	e92d0008 	stmdb	sp!, {r3}
        2ec89c:	e1a01009 	mov	r1, r9
        2ec8a0:	e1a00004 	mov	r0, r4
        2ec8a4:	eb5d49b2 	bl	1a3ef74 <TSoupIndex::$FirstNodeNo(NodeHeader *)>
        2ec8a8:	e1a02000 	mov	r2, r0
        2ec8ac:	e1a03005 	mov	r3, r5
        2ec8b0:	e1a01006 	mov	r1, r6
        2ec8b4:	e1a00004 	mov	r0, r4
        2ec8b8:	eb5d5625 	bl	1a42154 <TSoupIndex::$PutKeyIntoNode(KeyField *, unsigned long, NodeHeader *, long)>
        2ec8bc:	e28dd004 	add	sp, sp, #4	; 0x4
        2ec8c0:	ea000012 	b	2ec910 <TSoupIndex::MergeTwoNodes(KeyField *, NodeHeader *, NodeHeader *, NodeHeader *)+0xb0>
        2ec8c4:	e3a03000 	mov	r3, #0	; 0x0
        2ec8c8:	e92d0008 	stmdb	sp!, {r3}
        2ec8cc:	e1a01009 	mov	r1, r9
        2ec8d0:	e1a00004 	mov	r0, r4
        2ec8d4:	eb5d49a6 	bl	1a3ef74 <TSoupIndex::$FirstNodeNo(NodeHeader *)>
        2ec8d8:	e1a02000 	mov	r2, r0
        2ec8dc:	e1a03009 	mov	r3, r9
        2ec8e0:	e1a01006 	mov	r1, r6
        2ec8e4:	e1a00004 	mov	r0, r4
        2ec8e8:	eb5d5619 	bl	1a42154 <TSoupIndex::$PutKeyIntoNode(KeyField *, unsigned long, NodeHeader *, long)>
        2ec8ec:	e28dd004 	add	sp, sp, #4	; 0x4
        2ec8f0:	e1a01005 	mov	r1, r5
        2ec8f4:	e1a00004 	mov	r0, r4
        2ec8f8:	eb5d51ea 	bl	1a410a8 <TSoupIndex::$LastNodeNo(NodeHeader *)>
        2ec8fc:	e1a03000 	mov	r3, r0
        2ec900:	e1a01009 	mov	r1, r9
        2ec904:	e1a00004 	mov	r0, r4
        2ec908:	e3a02000 	mov	r2, #0	; 0x0
        2ec90c:	eb5d5a30 	bl	1a431d4 <TSoupIndex::$SetNodeNo(NodeHeader *, long, unsigned long)>
        2ec910:	e1a01005 	mov	r1, r5
        2ec914:	e1a00004 	mov	r0, r4
        2ec918:	eb5d4151 	bl	1a3ce64 <TSoupIndex::$BytesInNode(NodeHeader *)>
        2ec91c:	e1a0a000 	mov	sl, r0
        2ec920:	e1a01009 	mov	r1, r9
        2ec924:	e1a00004 	mov	r0, r4
        2ec928:	eb5d414d 	bl	1a3ce64 <TSoupIndex::$BytesInNode(NodeHeader *)>
        2ec92c:	e08a0000 	add	r0, sl, r0
        2ec930:	e240001c 	sub	r0, r0, #28	; 0x1c
        2ec934:	e5941014 	ldr	r1, [r4, #20]	; fField20
        2ec938:	e241100e 	sub	r1, r1, #14	; 0xe
        2ec93c:	e1500001 	cmp	r0, r1
        2ec940:	8a000028 	bhi	2ec9e8 <TSoupIndex::MergeTwoNodes(KeyField *, NodeHeader *, NodeHeader *, NodeHeader *)+0x188>
        2ec944:	e3a08000 	mov	r8, #0	; 0x0
        2ec948:	e599000a 	ldr	r0, [r9, #10]
        2ec94c:	e1a00840 	mov	r0, r0, asr #16
        2ec950:	e3500000 	cmp	r0, #0	; 0x0
        2ec954:	da000015 	ble	2ec9b0 <TSoupIndex::MergeTwoNodes(KeyField *, NodeHeader *, NodeHeader *, NodeHeader *)+0x150>
        2ec958:	e595300a 	ldr	r3, [r5, #10]
        2ec95c:	e1a03843 	mov	r3, r3, asr #16
        2ec960:	e92d0008 	stmdb	sp!, {r3}
        2ec964:	e1a02008 	mov	r2, r8
        2ec968:	e1a01009 	mov	r1, r9
        2ec96c:	e1a00004 	mov	r0, r4
        2ec970:	eb5d5a0c 	bl	1a431a8 <TSoupIndex::$RightNodeNo(NodeHeader *, long)>
        2ec974:	e1a06000 	mov	r6, r0
        2ec978:	e1a02008 	mov	r2, r8
        2ec97c:	e1a01009 	mov	r1, r9
        2ec980:	e1a00004 	mov	r0, r4
        2ec984:	eb5d4db1 	bl	1a40050 <TSoupIndex::$KeyFieldAdr(NodeHeader *, long)>
        2ec988:	e1a01000 	mov	r1, r0
        2ec98c:	e1a03005 	mov	r3, r5
        2ec990:	e1a00004 	mov	r0, r4
        2ec994:	e1a02006 	mov	r2, r6
        2ec998:	eb5d55ed 	bl	1a42154 <TSoupIndex::$PutKeyIntoNode(KeyField *, unsigned long, NodeHeader *, long)>
        2ec99c:	e28dd004 	add	sp, sp, #4	; 0x4
        2ec9a0:	e2888001 	add	r8, r8, #1	; 0x1
        2ec9a4:	e599000a 	ldr	r0, [r9, #10]
        2ec9a8:	e1580840 	cmp	r8, r0, asr #16
        2ec9ac:	baffffe9 	blt	2ec958 <TSoupIndex::MergeTwoNodes(KeyField *, NodeHeader *, NodeHeader *, NodeHeader *)+0xf8>
        2ec9b0:	e1a01005 	mov	r1, r5
        2ec9b4:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2ec9b8:	eb5d454d 	bl	1a3def4 <TNodeCache::$DirtyNode(NodeHeader *)>
        2ec9bc:	e1a00004 	mov	r0, r4
        2ec9c0:	e5991000 	ldr	r1, [r9]
        2ec9c4:	eb5d4547 	bl	1a3dee8 <TSoupIndex::$DeleteNode(unsigned long)>
        2ec9c8:	e1a01007 	mov	r1, r7
        2ec9cc:	e1a00004 	mov	r0, r4
        2ec9d0:	eb5d55cd 	bl	1a4210c <TSoupIndex::$NodeUnderflow(NodeHeader *)>
        2ec9d4:	e1b05000 	movs	r5, r0
        2ec9d8:	01a01007 	moveq	r1, r7
        2ec9dc:	05b40008 	ldreq	r0, [r4, #8]!	; fField8
        2ec9e0:	0b5d4543 	bleq	1a3def4 <TNodeCache::$DirtyNode(NodeHeader *)>
        2ec9e4:	ea000077 	b	2ecbc8 <TSoupIndex::MergeTwoNodes(KeyField *, NodeHeader *, NodeHeader *, NodeHeader *)+0x368>
        2ec9e8:	e3380000 	teq	r8, #0	; 0x0
        2ec9ec:	13a0a000 	movne	sl, #0	; 0x0
        2ec9f0:	1a00001a 	bne	2eca60 <TSoupIndex::MergeTwoNodes(KeyField *, NodeHeader *, NodeHeader *, NodeHeader *)+0x200>
        2ec9f4:	e595000a 	ldr	r0, [r5, #10]
        2ec9f8:	e1a00840 	mov	r0, r0, asr #16
        2ec9fc:	e240a001 	sub	sl, r0, #1	; 0x1
        2eca00:	ea000049 	b	2ecb2c <TSoupIndex::MergeTwoNodes(KeyField *, NodeHeader *, NodeHeader *, NodeHeader *)+0x2cc>
        2eca04:	e595300a 	ldr	r3, [r5, #10]
        2eca08:	e1a03843 	mov	r3, r3, asr #16
        2eca0c:	e92d0008 	stmdb	sp!, {r3}
        2eca10:	e1a01009 	mov	r1, r9
        2eca14:	e1a00004 	mov	r0, r4
        2eca18:	e3a02000 	mov	r2, #0	; 0x0
        2eca1c:	eb5d59e1 	bl	1a431a8 <TSoupIndex::$RightNodeNo(NodeHeader *, long)>
        2eca20:	e1a08000 	mov	r8, r0
        2eca24:	e1a01009 	mov	r1, r9
        2eca28:	e1a00004 	mov	r0, r4
        2eca2c:	e3a02000 	mov	r2, #0	; 0x0
        2eca30:	eb5d4d86 	bl	1a40050 <TSoupIndex::$KeyFieldAdr(NodeHeader *, long)>
        2eca34:	e1a01000 	mov	r1, r0
        2eca38:	e1a03005 	mov	r3, r5
        2eca3c:	e1a00004 	mov	r0, r4
        2eca40:	e1a02008 	mov	r2, r8
        2eca44:	eb5d55c2 	bl	1a42154 <TSoupIndex::$PutKeyIntoNode(KeyField *, unsigned long, NodeHeader *, long)>
        2eca48:	e28dd004 	add	sp, sp, #4	; 0x4
        2eca4c:	e1a01009 	mov	r1, r9
        2eca50:	e1a00004 	mov	r0, r4
        2eca54:	e3a02000 	mov	r2, #0	; 0x0
        2eca58:	eb5d4520 	bl	1a3dee0 <TSoupIndex::$DeleteKeyFromNode(NodeHeader *, long)>
        2eca5c:	e28aa001 	add	sl, sl, #1	; 0x1
        2eca60:	e599000a 	ldr	r0, [r9, #10]
        2eca64:	e15a0840 	cmp	sl, r0, asr #16
        2eca68:	aa000004 	bge	2eca80 <TSoupIndex::MergeTwoNodes(KeyField *, NodeHeader *, NodeHeader *, NodeHeader *)+0x220>
        2eca6c:	e1a01005 	mov	r1, r5
        2eca70:	e1a00004 	mov	r0, r4
        2eca74:	eb5d55a4 	bl	1a4210c <TSoupIndex::$NodeUnderflow(NodeHeader *)>
        2eca78:	e3300000 	teq	r0, #0	; 0x0
        2eca7c:	1affffe0 	bne	2eca04 <TSoupIndex::MergeTwoNodes(KeyField *, NodeHeader *, NodeHeader *, NodeHeader *)+0x1a4>
        2eca80:	e1a01009 	mov	r1, r9
        2eca84:	e1a00004 	mov	r0, r4
        2eca88:	e3a02000 	mov	r2, #0	; 0x0
        2eca8c:	eb5d4d6f 	bl	1a40050 <TSoupIndex::$KeyFieldAdr(NodeHeader *, long)>
        2eca90:	e1a01000 	mov	r1, r0
        2eca94:	e1a02006 	mov	r2, r6
        2eca98:	e1a00004 	mov	r0, r4
        2eca9c:	eb5d5190 	bl	1a410e4 <TSoupIndex::$MoveKey(KeyField *, KeyField *)>
        2ecaa0:	e1a01009 	mov	r1, r9
        2ecaa4:	e1a00004 	mov	r0, r4
        2ecaa8:	e3a02000 	mov	r2, #0	; 0x0
        2ecaac:	eb5d59bd 	bl	1a431a8 <TSoupIndex::$RightNodeNo(NodeHeader *, long)>
        2ecab0:	e1a03000 	mov	r3, r0
        2ecab4:	e1a01009 	mov	r1, r9
        2ecab8:	e1a00004 	mov	r0, r4
        2ecabc:	e3a02000 	mov	r2, #0	; 0x0
        2ecac0:	eb5d59c3 	bl	1a431d4 <TSoupIndex::$SetNodeNo(NodeHeader *, long, unsigned long)>
        2ecac4:	e1a01009 	mov	r1, r9
        2ecac8:	e1a00004 	mov	r0, r4
        2ecacc:	e3a02000 	mov	r2, #0	; 0x0
        2ecad0:	ea00002f 	b	2ecb94 <TSoupIndex::MergeTwoNodes(KeyField *, NodeHeader *, NodeHeader *, NodeHeader *)+0x334>
        2ecad4:	e3a03000 	mov	r3, #0	; 0x0
        2ecad8:	e92d0008 	stmdb	sp!, {r3}
        2ecadc:	e1a0200a 	mov	r2, sl
        2ecae0:	e1a01005 	mov	r1, r5
        2ecae4:	e1a00004 	mov	r0, r4
        2ecae8:	eb5d59ae 	bl	1a431a8 <TSoupIndex::$RightNodeNo(NodeHeader *, long)>
        2ecaec:	e1a08000 	mov	r8, r0
        2ecaf0:	e1a0200a 	mov	r2, sl
        2ecaf4:	e1a01005 	mov	r1, r5
        2ecaf8:	e1a00004 	mov	r0, r4
        2ecafc:	eb5d4d53 	bl	1a40050 <TSoupIndex::$KeyFieldAdr(NodeHeader *, long)>
        2ecb00:	e1a01000 	mov	r1, r0
        2ecb04:	e1a03009 	mov	r3, r9
        2ecb08:	e1a00004 	mov	r0, r4
        2ecb0c:	e1a02008 	mov	r2, r8
        2ecb10:	eb5d558f 	bl	1a42154 <TSoupIndex::$PutKeyIntoNode(KeyField *, unsigned long, NodeHeader *, long)>
        2ecb14:	e28dd004 	add	sp, sp, #4	; 0x4
        2ecb18:	e1a0200a 	mov	r2, sl
        2ecb1c:	e1a01005 	mov	r1, r5
        2ecb20:	e1a00004 	mov	r0, r4
        2ecb24:	eb5d44ed 	bl	1a3dee0 <TSoupIndex::$DeleteKeyFromNode(NodeHeader *, long)>
        2ecb28:	e24aa001 	sub	sl, sl, #1	; 0x1
        2ecb2c:	e35a0000 	cmp	sl, #0	; 0x0
        2ecb30:	da000004 	ble	2ecb48 <TSoupIndex::MergeTwoNodes(KeyField *, NodeHeader *, NodeHeader *, NodeHeader *)+0x2e8>
        2ecb34:	e1a01009 	mov	r1, r9
        2ecb38:	e1a00004 	mov	r0, r4
        2ecb3c:	eb5d5572 	bl	1a4210c <TSoupIndex::$NodeUnderflow(NodeHeader *)>
        2ecb40:	e3300000 	teq	r0, #0	; 0x0
        2ecb44:	1affffe2 	bne	2ecad4 <TSoupIndex::MergeTwoNodes(KeyField *, NodeHeader *, NodeHeader *, NodeHeader *)+0x274>
        2ecb48:	e1a0200a 	mov	r2, sl
        2ecb4c:	e1a01005 	mov	r1, r5
        2ecb50:	e1a00004 	mov	r0, r4
        2ecb54:	eb5d4d3d 	bl	1a40050 <TSoupIndex::$KeyFieldAdr(NodeHeader *, long)>
        2ecb58:	e1a01000 	mov	r1, r0
        2ecb5c:	e1a02006 	mov	r2, r6
        2ecb60:	e1a00004 	mov	r0, r4
        2ecb64:	eb5d515e 	bl	1a410e4 <TSoupIndex::$MoveKey(KeyField *, KeyField *)>
        2ecb68:	e1a01005 	mov	r1, r5
        2ecb6c:	e1a00004 	mov	r0, r4
        2ecb70:	eb5d514c 	bl	1a410a8 <TSoupIndex::$LastNodeNo(NodeHeader *)>
        2ecb74:	e1a03000 	mov	r3, r0
        2ecb78:	e1a01009 	mov	r1, r9
        2ecb7c:	e1a00004 	mov	r0, r4
        2ecb80:	e3a02000 	mov	r2, #0	; 0x0
        2ecb84:	eb5d5992 	bl	1a431d4 <TSoupIndex::$SetNodeNo(NodeHeader *, long, unsigned long)>
        2ecb88:	e1a0200a 	mov	r2, sl
        2ecb8c:	e1a01005 	mov	r1, r5
        2ecb90:	e1a00004 	mov	r0, r4
        2ecb94:	eb5d44d1 	bl	1a3dee0 <TSoupIndex::$DeleteKeyFromNode(NodeHeader *, long)>
        2ecb98:	e1a01005 	mov	r1, r5
        2ecb9c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2ecba0:	eb5d44d3 	bl	1a3def4 <TNodeCache::$DirtyNode(NodeHeader *)>
        2ecba4:	e1a01009 	mov	r1, r9
        2ecba8:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2ecbac:	eb5d44d0 	bl	1a3def4 <TNodeCache::$DirtyNode(NodeHeader *)>
        2ecbb0:	e3a05000 	mov	r5, #0	; 0x0
        2ecbb4:	e1a03007 	mov	r3, r7
        2ecbb8:	e1a01006 	mov	r1, r6
        2ecbbc:	e1a00004 	mov	r0, r4
        2ecbc0:	e5992000 	ldr	r2, [r9]
        2ecbc4:	eb5d4d14 	bl	1a4001c <TSoupIndex::$InsertAfterDelete(KeyField *, unsigned long, NodeHeader *)>
        2ecbc8:	e1a00005 	mov	r0, r5
        2ecbcc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

