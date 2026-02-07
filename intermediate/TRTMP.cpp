#include "include/TRTMP.h"

/**
 * Symbol: TRTMP::__dt(void)
 * Address: 0019b48c
 */
TRTMP::~TRTMP(void) {
    /*
        19b48c:	e1a0c00d 	mov	ip, sp
        19b490:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        19b494:	e24cb004 	sub	fp, ip, #4	; 0x4
        19b498:	e1a04000 	mov	r4, r0
        19b49c:	e1a05001 	mov	r5, r1
        19b4a0:	e59f0020 	ldr	r0, [pc, #20]	; 19b4c8 <TRTMP::__dt(void)+0x3c>	; fField20
        19b4a4:	e5840000 	str	r0, [r4]
        19b4a8:	e1a00004 	mov	r0, r4
        19b4ac:	e3a01000 	mov	r1, #0	; 0x0
        19b4b0:	eb636136 	bl	1a73990 <TStackObject::$__dt(void)>
        19b4b4:	e3150001 	tst	r5, #1	; 0x1
        19b4b8:	11a00004 	movne	r0, r4
        19b4bc:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        19b4c0:	1a68c886 	bne	1bcd6e0 <$__dl(void *)>
        19b4c4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        19b4c8:	0001f6c4 	andeq	pc, r1, r4, asr #13
    */
}

/**
 * Symbol: TRTMP::Init(void)
 * Address: 0019b4cc
 */
TRTMP::Init(void) {
    /*
        19b4cc:	e1a0c00d 	mov	ip, sp
        19b4d0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        19b4d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        19b4d8:	e1a04000 	mov	r4, r0
        19b4dc:	e59f2030 	ldr	r2, [pc, #30]	; 19b514 <TRTMP::Init(void)+0x48>	; fField30
        19b4e0:	e59f1030 	ldr	r1, [pc, #30]	; 19b518 <TRTMP::Init(void)+0x4c>	; fField30
        19b4e4:	eb63822f 	bl	1a7bda8 <TStackObject::$Init(unsigned long, unsigned long)>
        19b4e8:	e1b05000 	movs	r5, r0
        19b4ec:	1a000006 	bne	19b50c <TRTMP::Init(void)+0x40>
        19b4f0:	e2841018 	add	r1, r4, #24	; 0x18
        19b4f4:	e3a00000 	mov	r0, #0	; 0x0
        19b4f8:	eb691f33 	bl	1be31cc <CSortedList::$__ct(CItemComparer *)>
        19b4fc:	e5a40028 	str	r0, [r4, #40]!	; fField40
        19b500:	e3300000 	teq	r0, #0	; 0x0
        19b504:	03a050a8 	moveq	r5, #168	; 0xa8
        19b508:	02455b07 	subeq	r5, r5, #7168	; 0x1c00
        19b50c:	e1a00005 	mov	r0, r5
        19b510:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        19b514:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        19b518:	72746d70 	rsbvcs	r6, r4, #7168	; 0x1c00
    */
}

/**
 * Symbol: TRTMP::Read(TAppleTalkMessage *)
 * Address: 0019b51c
 */
TRTMP::Read(TAppleTalkMessage *) {
    /*
        19b51c:	e1a0c00d 	mov	ip, sp
        19b520:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        19b524:	e24cb004 	sub	fp, ip, #4	; 0x4
        19b528:	e1a04001 	mov	r4, r1
        19b52c:	e5d11020 	ldrb	r1, [r1, #32]
        19b530:	e3310001 	teq	r1, #1	; 0x1
        19b534:	1a000025 	bne	19b5d0 <TRTMP::Read(TAppleTalkMessage *)+0xb4>
        19b538:	e5941028 	ldr	r1, [r4, #40]	; fField40
        19b53c:	e591102c 	ldr	r1, [r1, #44]	; fField44
        19b540:	e3510004 	cmp	r1, #4	; 0x4
        19b544:	3a000021 	bcc	19b5d0 <TRTMP::Read(TAppleTalkMessage *)+0xb4>
        19b548:	e24dd010 	sub	sp, sp, #16	; 0x10
        19b54c:	e5941018 	ldr	r1, [r4, #24]
        19b550:	e5801024 	str	r1, [r0, #36]	; fField36
        19b554:	e2801018 	add	r1, r0, #24	; 0x18
        19b558:	e5900028 	ldr	r0, [r0, #40]	; fField40
        19b55c:	e1a0200d 	mov	r2, sp
        19b560:	eb69484c 	bl	1bed698 <CSortedList::$Search(CItemTester *, long &)>
        19b564:	e1b05000 	movs	r5, r0
        19b568:	0a000017 	beq	19b5cc <TRTMP::Read(TAppleTalkMessage *)+0xb0>
        19b56c:	e5946028 	ldr	r6, [r4, #40]	; fField40
        19b570:	e1a00006 	mov	r0, r6
        19b574:	eb696116 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
        19b578:	e5b61028 	ldr	r1, [r6, #40]!	; fField40
        19b57c:	e0800001 	add	r0, r0, r1
        19b580:	e28d100c 	add	r1, sp, #12	; 0xc
        19b584:	e3a02004 	mov	r2, #4	; 0x4
        19b588:	eb690e71 	bl	1bdef54 <$BlockMove>
        19b58c:	e5950018 	ldr	r0, [r5, #24]
        19b590:	e3300002 	teq	r0, #2	; 0x2
        19b594:	1a000008 	bne	19b5bc <TRTMP::Read(TAppleTalkMessage *)+0xa0>
        19b598:	e5944028 	ldr	r4, [r4, #40]	; fField40
        19b59c:	e1a00004 	mov	r0, r4
        19b5a0:	eb69610b 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
        19b5a4:	e5b41028 	ldr	r1, [r4, #40]!	; fField40
        19b5a8:	e0800001 	add	r0, r0, r1
        19b5ac:	e2800004 	add	r0, r0, #4	; 0x4
        19b5b0:	e28d1004 	add	r1, sp, #4	; 0x4
        19b5b4:	e3a02006 	mov	r2, #6	; 0x6
        19b5b8:	eb690e65 	bl	1bdef54 <$BlockMove>
        19b5bc:	e28d2004 	add	r2, sp, #4	; 0x4
        19b5c0:	e28d100c 	add	r1, sp, #12	; 0xc
        19b5c4:	e1a00005 	mov	r0, r5
        19b5c8:	eb637de3 	bl	1a7ad5c <TRTMPTableEntry::$GleanHeader(TRTMPHeader *, TExtNetworkTuple *)>
        19b5cc:	e28dd010 	add	sp, sp, #16	; 0x10
        19b5d0:	e3a00000 	mov	r0, #0	; 0x0
        19b5d4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TRTMP::AgeTable(TAppleTalkMessage *)
 * Address: 0019b5d8
 */
TRTMP::AgeTable(TAppleTalkMessage *) {
    /*
        19b5d8:	e1a0c00d 	mov	ip, sp
        19b5dc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        19b5e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        19b5e4:	e24dd004 	sub	sp, sp, #4	; 0x4
        19b5e8:	e591101c 	ldr	r1, [r1, #28]
        19b5ec:	e5801024 	str	r1, [r0, #36]	; fField36
        19b5f0:	e2801018 	add	r1, r0, #24	; 0x18
        19b5f4:	e5900028 	ldr	r0, [r0, #40]	; fField40
        19b5f8:	e1a0200d 	mov	r2, sp
        19b5fc:	eb694825 	bl	1bed698 <CSortedList::$Search(CItemTester *, long &)>
        19b600:	e1b04000 	movs	r4, r0
        19b604:	e3a05000 	mov	r5, #0	; 0x0
        19b608:	0a00000d 	beq	19b644 <TRTMP::AgeTable(TAppleTalkMessage *)+0x6c>
        19b60c:	e5940018 	ldr	r0, [r4, #24]
        19b610:	e2000003 	and	r0, r0, #3	; 0x3
        19b614:	e3300001 	teq	r0, #1	; 0x1
        19b618:	0a00000b 	beq	19b64c <TRTMP::AgeTable(TAppleTalkMessage *)+0x74>
        19b61c:	e3300002 	teq	r0, #2	; 0x2
        19b620:	1a000007 	bne	19b644 <TRTMP::AgeTable(TAppleTalkMessage *)+0x6c>
        19b624:	e1a00004 	mov	r0, r4
        19b628:	e3a02000 	mov	r2, #0	; 0x0
        19b62c:	e3a01000 	mov	r1, #0	; 0x0
        19b630:	eb639258 	bl	1a7ff98 <TAddress::$SetAddress(unsigned short, unsigned char)>
        19b634:	e3a00801 	mov	r0, #65536	; 0x10000
        19b638:	e2400002 	sub	r0, r0, #2	; 0x2
        19b63c:	e5a4500c 	str	r5, [r4, #12]!
        19b640:	e5840004 	str	r0, [r4, #4]
        19b644:	e1a00005 	mov	r0, r5
        19b648:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        19b64c:	e3a01000 	mov	r1, #0	; 0x0
        19b650:	e5940014 	ldr	r0, [r4, #20]	; fField20
        19b654:	eb639252 	bl	1a7ffa4 <TLink::$SetNetwork(unsigned short)>
        19b658:	e5c4500a 	strb	r5, [r4, #10]	; fField10
        19b65c:	eafffff8 	b	19b644 <TRTMP::AgeTable(TAppleTalkMessage *)+0x6c>
    */
}

/**
 * Symbol: TRTMP::BroadcastRTMPRequest(unsigned long)
 * Address: 0019b660
 */
TRTMP::BroadcastRTMPRequest(unsigned long) {
    /*
        19b660:	e1a0c00d 	mov	ip, sp
        19b664:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        19b668:	e24cb004 	sub	fp, ip, #4	; 0x4
        19b66c:	e1a04001 	mov	r4, r1
        19b670:	e24dd028 	sub	sp, sp, #40	; 0x28
        19b674:	e28d001c 	add	r0, sp, #28	; 0x1c
        19b678:	eb63588b 	bl	1a718ac <TWriteChain::$__ct(void)>
        19b67c:	e28d0004 	add	r0, sp, #4	; 0x4
        19b680:	eb635897 	bl	1a718e4 <TWriteElement::$__ct(void)>
        19b684:	e3a06001 	mov	r6, #1	; 0x1
        19b688:	e5cd6000 	strb	r6, [sp]
        19b68c:	e1a0100d 	mov	r1, sp
        19b690:	e28d0004 	add	r0, sp, #4	; 0x4
        19b694:	e3a03002 	mov	r3, #2	; 0x2
        19b698:	e3a02001 	mov	r2, #1	; 0x1
        19b69c:	eb6381c6 	bl	1a7bdbc <TWriteElement::$Init(void *, unsigned long, unsigned char)>
        19b6a0:	e28d1004 	add	r1, sp, #4	; 0x4
        19b6a4:	e28d001c 	add	r0, sp, #28	; 0x1c
        19b6a8:	eb6364dc 	bl	1a74a20 <TWriteChain::$Add(TWriteElement *)>
        19b6ac:	e24dd014 	sub	sp, sp, #20	; 0x14
        19b6b0:	e1a0000d 	mov	r0, sp
        19b6b4:	e3a01001 	mov	r1, #1	; 0x1
        19b6b8:	eb6960bb 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
        19b6bc:	e28d200c 	add	r2, sp, #12	; 0xc
        19b6c0:	e28d1010 	add	r1, sp, #16	; 0x10
        19b6c4:	e1a00004 	mov	r0, r4
        19b6c8:	eb637986 	bl	1a79ce8 <$GetAddress(unsigned long, unsigned short &, unsigned char &)>
        19b6cc:	e1b05000 	movs	r5, r0
        19b6d0:	0a000007 	beq	19b6f4 <TRTMP::BroadcastRTMPRequest(unsigned long)+0x94>
        19b6d4:	e28d0018 	add	r0, sp, #24	; 0x18
        19b6d8:	e3a01000 	mov	r1, #0	; 0x0
        19b6dc:	e1a0e00f 	mov	lr, pc
        19b6e0:	e59df018 	ldr	pc, [sp, #24]
        19b6e4:	e28d0030 	add	r0, sp, #48	; 0x30
        19b6e8:	eb63754f 	bl	1a78c2c <TWriteChain::$Destroy(void)>
        19b6ec:	e28dd03c 	add	sp, sp, #60	; 0x3c
        19b6f0:	ea000016 	b	19b750 <TRTMP::BroadcastRTMPRequest(unsigned long)+0xf0>
        19b6f4:	e5cd6001 	strb	r6, [sp, #1]
        19b6f8:	e3a03001 	mov	r3, #1	; 0x1
        19b6fc:	e92d0008 	stmdb	sp!, {r3}
        19b700:	e59d2014 	ldr	r2, [sp, #20]	; fField20
        19b704:	e1a02822 	mov	r2, r2, lsr #16
        19b708:	e1a01004 	mov	r1, r4
        19b70c:	e28d0004 	add	r0, sp, #4	; 0x4
        19b710:	e3a030ff 	mov	r3, #255	; 0xff
        19b714:	eb6960b1 	bl	1bf39e0 <TAddress::$SetAddress(unsigned long, unsigned short, unsigned char, unsigned char)>
        19b718:	e28dd004 	add	sp, sp, #4	; 0x4
        19b71c:	e28d1030 	add	r1, sp, #48	; 0x30
        19b720:	e1a0000d 	mov	r0, sp
        19b724:	e3a02005 	mov	r2, #5	; 0x5
        19b728:	eb63965b 	bl	1a8109c <$WriteSocket(TAddress *, TWriteChain *, unsigned char)>
        19b72c:	e1a05000 	mov	r5, r0
        19b730:	e28dd014 	add	sp, sp, #20	; 0x14
        19b734:	e28d0004 	add	r0, sp, #4	; 0x4
        19b738:	e3a01000 	mov	r1, #0	; 0x0
        19b73c:	e1a0e00f 	mov	lr, pc
        19b740:	e59df004 	ldr	pc, [sp, #4]
        19b744:	e28d001c 	add	r0, sp, #28	; 0x1c
        19b748:	eb637537 	bl	1a78c2c <TWriteChain::$Destroy(void)>
        19b74c:	e28dd028 	add	sp, sp, #40	; 0x28
        19b750:	e1a00005 	mov	r0, r5
        19b754:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TRTMP::ResolveAddress(TAppleTalkMessage *)
 * Address: 0019b758
 */
TRTMP::ResolveAddress(TAppleTalkMessage *) {
    /*
        19b758:	e1a0c00d 	mov	ip, sp
        19b75c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        19b760:	e24cb004 	sub	fp, ip, #4	; 0x4
        19b764:	e24dd004 	sub	sp, sp, #4	; 0x4
        19b768:	e3a05000 	mov	r5, #0	; 0x0
        19b76c:	e1a09001 	mov	r9, r1
        19b770:	e2812024 	add	r2, r1, #36	; 0x24
        19b774:	e1a07002 	mov	r7, r2
        19b778:	e2816018 	add	r6, r1, #24	; 0x18
        19b77c:	e1a01002 	mov	r1, r2
        19b780:	e5922004 	ldr	r2, [r2, #4]
        19b784:	e59fc0b0 	ldr	ip, [pc, #b0]	; 19b83c <TRTMP::ResolveAddress(TAppleTalkMessage *)+0xe4>
        19b788:	e132000c 	teq	r2, ip
        19b78c:	0590202c 	ldreq	r2, [r0, #44]	; fField44
        19b790:	05812004 	streq	r2, [r1, #4]
        19b794:	e5911004 	ldr	r1, [r1, #4]
        19b798:	e5801024 	str	r1, [r0, #36]	; fField36
        19b79c:	e2801018 	add	r1, r0, #24	; 0x18
        19b7a0:	e5900028 	ldr	r0, [r0, #40]	; fField40
        19b7a4:	e1a0200d 	mov	r2, sp
        19b7a8:	eb6947ba 	bl	1bed698 <CSortedList::$Search(CItemTester *, long &)>
        19b7ac:	e1b04000 	movs	r4, r0
        19b7b0:	e3e080d7 	mvn	r8, #215	; 0xd7
        19b7b4:	e2488a03 	sub	r8, r8, #12288	; 0x3000
        19b7b8:	15940014 	ldrne	r0, [r4, #20]	; fField20
        19b7bc:	13300000 	teqne	r0, #0	; 0x0
        19b7c0:	0a000035 	beq	19b89c <TRTMP::ResolveAddress(TAppleTalkMessage *)+0x144>
        19b7c4:	e5940018 	ldr	r0, [r4, #24]
        19b7c8:	e5a90014 	str	r0, [r9, #20]!	; fField20
        19b7cc:	e5940014 	ldr	r0, [r4, #20]	; fField20
        19b7d0:	e5d0201d 	ldrb	r2, [r0, #29]	; fField29
        19b7d4:	e590101e 	ldr	r1, [r0, #30]	; fField30
        19b7d8:	e1a01821 	mov	r1, r1, lsr #16
        19b7dc:	e1a00006 	mov	r0, r6
        19b7e0:	eb6391ec 	bl	1a7ff98 <TAddress::$SetAddress(unsigned short, unsigned char)>
        19b7e4:	e5970008 	ldr	r0, [r7, #8]
        19b7e8:	e1b00820 	movs	r0, r0, lsr #16
        19b7ec:	0a00002b 	beq	19b8a0 <TRTMP::ResolveAddress(TAppleTalkMessage *)+0x148>
        19b7f0:	e3e090d6 	mvn	r9, #214	; 0xd6
        19b7f4:	e2499a03 	sub	r9, r9, #12288	; 0x3000
        19b7f8:	e5941018 	ldr	r1, [r4, #24]
        19b7fc:	e3310001 	teq	r1, #1	; 0x1
        19b800:	0a00000e 	beq	19b840 <TRTMP::ResolveAddress(TAppleTalkMessage *)+0xe8>
        19b804:	e3310002 	teq	r1, #2	; 0x2
        19b808:	1a000023 	bne	19b89c <TRTMP::ResolveAddress(TAppleTalkMessage *)+0x144>
        19b80c:	e5d4100a 	ldrb	r1, [r4, #10]	; fField10
        19b810:	e3310000 	teq	r1, #0	; 0x0
        19b814:	0a00001d 	beq	19b890 <TRTMP::ResolveAddress(TAppleTalkMessage *)+0x138>
        19b818:	e594300c 	ldr	r3, [r4, #12]
        19b81c:	e1500003 	cmp	r0, r3
        19b820:	3a000002 	bcc	19b830 <TRTMP::ResolveAddress(TAppleTalkMessage *)+0xd8>
        19b824:	e5943010 	ldr	r3, [r4, #16]
        19b828:	e1500003 	cmp	r0, r3
        19b82c:	9a00001b 	bls	19b8a0 <TRTMP::ResolveAddress(TAppleTalkMessage *)+0x148>
        19b830:	e3500cff 	cmp	r0, #65280	; 0xff00
        19b834:	aa000011 	bge	19b880 <TRTMP::ResolveAddress(TAppleTalkMessage *)+0x128>
        19b838:	ea000005 	b	19b854 <TRTMP::ResolveAddress(TAppleTalkMessage *)+0xfc>
        19b83c:	736c746b 	cmnvc	ip, #1795162112	; 0x6b000000
        19b840:	e5d4100a 	ldrb	r1, [r4, #10]	; fField10
        19b844:	e3310000 	teq	r1, #0	; 0x0
        19b848:	15963008 	ldrne	r3, [r6, #8]
        19b84c:	11300823 	teqne	r0, r3, lsr #16
        19b850:	0a000005 	beq	19b86c <TRTMP::ResolveAddress(TAppleTalkMessage *)+0x114>
        19b854:	e1a02001 	mov	r2, r1
        19b858:	e5941008 	ldr	r1, [r4, #8]
        19b85c:	e1a01821 	mov	r1, r1, lsr #16
        19b860:	e1a00007 	mov	r0, r7
        19b864:	eb6391cb 	bl	1a7ff98 <TAddress::$SetAddress(unsigned short, unsigned char)>
        19b868:	ea000002 	b	19b878 <TRTMP::ResolveAddress(TAppleTalkMessage *)+0x120>
        19b86c:	e5961008 	ldr	r1, [r6, #8]
        19b870:	e1300821 	teq	r0, r1, lsr #16
        19b874:	0a000009 	beq	19b8a0 <TRTMP::ResolveAddress(TAppleTalkMessage *)+0x148>
        19b878:	e1a05009 	mov	r5, r9
        19b87c:	ea000007 	b	19b8a0 <TRTMP::ResolveAddress(TAppleTalkMessage *)+0x148>
        19b880:	e250ccff 	subs	ip, r0, #65280	; 0xff00
        19b884:	a35c00fe 	cmpge	ip, #254	; 0xfe
        19b888:	cafffff1 	bgt	19b854 <TRTMP::ResolveAddress(TAppleTalkMessage *)+0xfc>
        19b88c:	ea000003 	b	19b8a0 <TRTMP::ResolveAddress(TAppleTalkMessage *)+0x148>
        19b890:	e240ccff 	sub	ip, r0, #65280	; 0xff00
        19b894:	e33c00ff 	teq	ip, #255	; 0xff
        19b898:	1a000000 	bne	19b8a0 <TRTMP::ResolveAddress(TAppleTalkMessage *)+0x148>
        19b89c:	e1a05008 	mov	r5, r8
        19b8a0:	e1a00005 	mov	r0, r5
        19b8a4:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TRTMP::GetRouterAddress(TAppleTalkMessage *)
 * Address: 0019b8a8
 */
TRTMP::GetRouterAddress(TAppleTalkMessage *) {
    /*
        19b8a8:	e1a0c00d 	mov	ip, sp
        19b8ac:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        19b8b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        19b8b4:	e24dd004 	sub	sp, sp, #4	; 0x4
        19b8b8:	e1a05001 	mov	r5, r1
        19b8bc:	e5911014 	ldr	r1, [r1, #20]	; fField20
        19b8c0:	e5801024 	str	r1, [r0, #36]	; fField36
        19b8c4:	e59fc04c 	ldr	ip, [pc, #4c]	; 19b918 <TRTMP::GetRouterAddress(TAppleTalkMessage *)+0x70>
        19b8c8:	e131000c 	teq	r1, ip
        19b8cc:	0590102c 	ldreq	r1, [r0, #44]	; fField44
        19b8d0:	05801024 	streq	r1, [r0, #36]	; fField36
        19b8d4:	e2801018 	add	r1, r0, #24	; 0x18
        19b8d8:	e5900028 	ldr	r0, [r0, #40]	; fField40
        19b8dc:	e1a0200d 	mov	r2, sp
        19b8e0:	eb69476c 	bl	1bed698 <CSortedList::$Search(CItemTester *, long &)>
        19b8e4:	e1a04000 	mov	r4, r0
        19b8e8:	e2850014 	add	r0, r5, #20	; 0x14
        19b8ec:	e1a01004 	mov	r1, r4
        19b8f0:	eb69602e 	bl	1bf39b0 <TAddress::$__as(TAddress const &)>
        19b8f4:	eb68e036 	bl	1bd39d4 <$GetGlobals>
        19b8f8:	e3a01020 	mov	r1, #32	; 0x20
        19b8fc:	eb692a87 	bl	1be6320 <TAppWorld::$AESetReply(unsigned long)>
        19b900:	e5d4000a 	ldrb	r0, [r4, #10]	; fField10
        19b904:	e3300000 	teq	r0, #0	; 0x0
        19b908:	13a00000 	movne	r0, #0	; 0x0
        19b90c:	03e000d8 	mvneq	r0, #216	; 0xd8
        19b910:	02400a03 	subeq	r0, r0, #12288	; 0x3000
        19b914:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        19b918:	736c746b 	cmnvc	ip, #1795162112	; 0x6b000000
    */
}

/**
 * Symbol: TRTMP::ATLKAttachLink(TAppleTalkMessage *)
 * Address: 0019b91c
 */
TRTMP::ATLKAttachLink(TAppleTalkMessage *) {
    /*
        19b91c:	e1a0c00d 	mov	ip, sp
        19b920:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        19b924:	e24cb004 	sub	fp, ip, #4	; 0x4
        19b928:	e1a04000 	mov	r4, r0
        19b92c:	e24dd004 	sub	sp, sp, #4	; 0x4
        19b930:	e1a05001 	mov	r5, r1
        19b934:	e3a00000 	mov	r0, #0	; 0x0
        19b938:	eb635bf2 	bl	1a72908 <TRTMPTableEntry::$__ct(void)>
        19b93c:	e1b06000 	movs	r6, r0
        19b940:	0a000010 	beq	19b988 <TRTMP::ATLKAttachLink(TAppleTalkMessage *)+0x6c>
        19b944:	e1a00006 	mov	r0, r6
        19b948:	e5951018 	ldr	r1, [r5, #24]
        19b94c:	eb63811d 	bl	1a7bdc8 <TRTMPTableEntry::$Init(TLink *)>
        19b950:	e5950018 	ldr	r0, [r5, #24]
        19b954:	e5900020 	ldr	r0, [r0, #32]
        19b958:	e5840024 	str	r0, [r4, #36]	; fField36
        19b95c:	e2841018 	add	r1, r4, #24	; 0x18
        19b960:	e1a0200d 	mov	r2, sp
        19b964:	e5940028 	ldr	r0, [r4, #40]	; fField40
        19b968:	eb69474a 	bl	1bed698 <CSortedList::$Search(CItemTester *, long &)>
        19b96c:	e5940028 	ldr	r0, [r4, #40]	; fField40
        19b970:	e1a02006 	mov	r2, r6
        19b974:	e59d1000 	ldr	r1, [sp]
        19b978:	eb6936db 	bl	1be94ec <CList::$InsertAt(long, void *)>
        19b97c:	e5950018 	ldr	r0, [r5, #24]
        19b980:	e5900020 	ldr	r0, [r0, #32]
        19b984:	e584002c 	str	r0, [r4, #44]	; fField44
        19b988:	e5950018 	ldr	r0, [r5, #24]
        19b98c:	e5b01020 	ldr	r1, [r0, #32]!
        19b990:	e1a00004 	mov	r0, r4
        19b994:	eb636c71 	bl	1a76b60 <TRTMP::$BroadcastRTMPRequest(unsigned long)>
        19b998:	e5950018 	ldr	r0, [r5, #24]
        19b99c:	e5b01020 	ldr	r1, [r0, #32]!
        19b9a0:	e1a00004 	mov	r0, r4
        19b9a4:	eb636c6d 	bl	1a76b60 <TRTMP::$BroadcastRTMPRequest(unsigned long)>
        19b9a8:	e5950018 	ldr	r0, [r5, #24]
        19b9ac:	e5b01020 	ldr	r1, [r0, #32]!
        19b9b0:	e1a00004 	mov	r0, r4
        19b9b4:	eb636c69 	bl	1a76b60 <TRTMP::$BroadcastRTMPRequest(unsigned long)>
        19b9b8:	e5950018 	ldr	r0, [r5, #24]
        19b9bc:	e5b01020 	ldr	r1, [r0, #32]!
        19b9c0:	e1a00004 	mov	r0, r4
        19b9c4:	eb636c65 	bl	1a76b60 <TRTMP::$BroadcastRTMPRequest(unsigned long)>
        19b9c8:	e5b50018 	ldr	r0, [r5, #24]!
        19b9cc:	e5b01020 	ldr	r1, [r0, #32]!
        19b9d0:	e1a00004 	mov	r0, r4
        19b9d4:	eb636c61 	bl	1a76b60 <TRTMP::$BroadcastRTMPRequest(unsigned long)>
        19b9d8:	e3a00000 	mov	r0, #0	; 0x0
        19b9dc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TRTMP::ATLKDetachLink(TAppleTalkMessage *)
 * Address: 0019b9e0
 */
TRTMP::ATLKDetachLink(TAppleTalkMessage *) {
    /*
        19b9e0:	e1a0c00d 	mov	ip, sp
        19b9e4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        19b9e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        19b9ec:	e1a04000 	mov	r4, r0
        19b9f0:	e24dd004 	sub	sp, sp, #4	; 0x4
        19b9f4:	e5b10014 	ldr	r0, [r1, #20]!	; fField20
        19b9f8:	e5840024 	str	r0, [r4, #36]	; fField36
        19b9fc:	e2841018 	add	r1, r4, #24	; 0x18
        19ba00:	e1a0200d 	mov	r2, sp
        19ba04:	e5940028 	ldr	r0, [r4, #40]	; fField40
        19ba08:	eb694722 	bl	1bed698 <CSortedList::$Search(CItemTester *, long &)>
        19ba0c:	e1b05000 	movs	r5, r0
        19ba10:	0a000006 	beq	19ba30 <TRTMP::ATLKDetachLink(TAppleTalkMessage *)+0x50>
        19ba14:	e5b40028 	ldr	r0, [r4, #40]!	; fField40
        19ba18:	e3a02001 	mov	r2, #1	; 0x1
        19ba1c:	e59d1000 	ldr	r1, [sp]
        19ba20:	eb694303 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
        19ba24:	e1a00005 	mov	r0, r5
        19ba28:	e3a01001 	mov	r1, #1	; 0x1
        19ba2c:	eb635fe0 	bl	1a739b4 <TRTMPTableEntry::$__dt(void)>
        19ba30:	e3a00000 	mov	r0, #0	; 0x0
        19ba34:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TRTMP::ATLKShutDown(TAppleTalkMessage *)
 * Address: 0019ba38
 */
TRTMP::ATLKShutDown(TAppleTalkMessage *) {
    /*
        19ba38:	e1a0c00d 	mov	ip, sp
        19ba3c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        19ba40:	e24cb004 	sub	fp, ip, #4	; 0x4
        19ba44:	e1a04000 	mov	r4, r0
        19ba48:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        19ba4c:	e5901028 	ldr	r1, [r0, #40]	; fField40
        19ba50:	e1a0000d 	mov	r0, sp
        19ba54:	eb691de2 	bl	1be31e4 <CListIterator::$__ct(CDynamicArray *)>
        19ba58:	e1a0000d 	mov	r0, sp
        19ba5c:	eb692e65 	bl	1be73f8 <CListIterator::$FirstItem(void)>
        19ba60:	e1a05000 	mov	r5, r0
        19ba64:	e1a0000d 	mov	r0, sp
        19ba68:	eb693ac2 	bl	1bea578 <CArrayIterator::$More(void)>
        19ba6c:	e3300000 	teq	r0, #0	; 0x0
        19ba70:	0a000009 	beq	19ba9c <TRTMP::ATLKShutDown(TAppleTalkMessage *)+0x64>
        19ba74:	e1b00005 	movs	r0, r5
        19ba78:	13a01001 	movne	r1, #1	; 0x1
        19ba7c:	1b635fcc 	blne	1a739b4 <TRTMPTableEntry::$__dt(void)>
        19ba80:	e1a0000d 	mov	r0, sp
        19ba84:	eb693ec5 	bl	1beb5a0 <CListIterator::$NextItem(void)>
        19ba88:	e1a05000 	mov	r5, r0
        19ba8c:	e1a0000d 	mov	r0, sp
        19ba90:	eb693ab8 	bl	1bea578 <CArrayIterator::$More(void)>
        19ba94:	e3300000 	teq	r0, #0	; 0x0
        19ba98:	1afffff5 	bne	19ba74 <TRTMP::ATLKShutDown(TAppleTalkMessage *)+0x3c>
        19ba9c:	e5b40028 	ldr	r0, [r4, #40]!	; fField40
        19baa0:	e3300000 	teq	r0, #0	; 0x0
        19baa4:	13a01001 	movne	r1, #1	; 0x1
        19baa8:	1b6921eb 	blne	1be425c <CSortedList::$__dt(void)>
        19baac:	e3a04000 	mov	r4, #0	; 0x0
        19bab0:	e1a0000d 	mov	r0, sp
        19bab4:	e3a01000 	mov	r1, #0	; 0x0
        19bab8:	eb6921ea 	bl	1be4268 <CArrayIterator::$__dt(void)>
        19babc:	e1a00004 	mov	r0, r4
        19bac0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TRTMP::ATLKClose(TAppleTalkMessage *)
 * Address: 0019bb04
 */
TRTMP::ATLKClose(TAppleTalkMessage *) {
    /*
        19bb04:	e1a0c00d 	mov	ip, sp
        19bb08:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        19bb0c:	e24cb004 	sub	fp, ip, #4	; 0x4
        19bb10:	e1a04000 	mov	r4, r0
        19bb14:	e3a00000 	mov	r0, #0	; 0x0
        19bb18:	e5941014 	ldr	r1, [r4, #20]	; fField20
        19bb1c:	e2511001 	subs	r1, r1, #1	; 0x1
        19bb20:	1a000004 	bne	19bb38 <TRTMP::ATLKClose(TAppleTalkMessage *)+0x34>
        19bb24:	e3a00001 	mov	r0, #1	; 0x1
        19bb28:	eb637025 	bl	1a77bc4 <$CloseSocket(unsigned char)>
        19bb2c:	e3300000 	teq	r0, #0	; 0x0
        19bb30:	13300000 	teqne	r0, #0	; 0x0
        19bb34:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        19bb38:	e5941014 	ldr	r1, [r4, #20]	; fField20
        19bb3c:	e2411001 	sub	r1, r1, #1	; 0x1
        19bb40:	e5a41014 	str	r1, [r4, #20]!	; fField20
        19bb44:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TRTMP::ATLKOpen(TAppleTalkMessage *)
 * Address: 0019bb48
 */
TRTMP::ATLKOpen(TAppleTalkMessage *) {
    /*
        19bb48:	e1a0c00d 	mov	ip, sp
        19bb4c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        19bb50:	e24cb004 	sub	fp, ip, #4	; 0x4
        19bb54:	e1a04000 	mov	r4, r0
        19bb58:	e3a00000 	mov	r0, #0	; 0x0
        19bb5c:	e5941014 	ldr	r1, [r4, #20]	; fField20
        19bb60:	e3310000 	teq	r1, #0	; 0x0
        19bb64:	1a000009 	bne	19bb90 <TRTMP::ATLKOpen(TAppleTalkMessage *)+0x48>
        19bb68:	e3a00001 	mov	r0, #1	; 0x1
        19bb6c:	e56d0004 	strb	r0, [sp, -#4]!
        19bb70:	e1a0000d 	mov	r0, sp
        19bb74:	e59f1024 	ldr	r1, [pc, #24]	; 19bba0 <TRTMP::ATLKOpen(TAppleTalkMessage *)+0x58>
        19bb78:	eb6388ca 	bl	1a7dea8 <$OpenSocket(unsigned char &, unsigned long)>
        19bb7c:	e3300000 	teq	r0, #0	; 0x0
        19bb80:	e28dd004 	add	sp, sp, #4	; 0x4
        19bb84:	0a000001 	beq	19bb90 <TRTMP::ATLKOpen(TAppleTalkMessage *)+0x48>
        19bb88:	e3300000 	teq	r0, #0	; 0x0
        19bb8c:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        19bb90:	e5941014 	ldr	r1, [r4, #20]	; fField20
        19bb94:	e2811001 	add	r1, r1, #1	; 0x1
        19bb98:	e5a41014 	str	r1, [r4, #20]!	; fField20
        19bb9c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        19bba0:	72746d70 	rsbvcs	r6, r4, #7168	; 0x1c00
    */
}

/**
 * Symbol: TRTMP::ATLKSocketClosed(TAppleTalkMessage *)
 * Address: 0019bba4
 */
TRTMP::ATLKSocketClosed(TAppleTalkMessage *) {
    /*
        19bba4:	e3a00000 	mov	r0, #0	; 0x0
        19bba8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRTMP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)
 * Address: 0019bbac
 */
TRTMP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *) {
    /*
        19bbac:	e5931010 	ldr	r1, [r3, #16]
        19bbb0:	e3310006 	teq	r1, #6	; 0x6
        19bbb4:	01a01003 	moveq	r1, r3
        19bbb8:	0a6388ce 	beq	1a7def8 <TRTMP::$Read(TAppleTalkMessage *)>
        19bbbc:	e3310064 	teq	r1, #100	; 0x64
        19bbc0:	01a01003 	moveq	r1, r3
        19bbc4:	0a6363a2 	beq	1a74a54 <TRTMP::$AgeTable(TAppleTalkMessage *)>
        19bbc8:	e3310c01 	teq	r1, #256	; 0x100
        19bbcc:	01a01003 	moveq	r1, r3
        19bbd0:	0a638ce3 	beq	1a7ef64 <TRTMP::$ResolveAddress(TAppleTalkMessage *)>
        19bbd4:	e241cc01 	sub	ip, r1, #256	; 0x100
        19bbd8:	e33c0001 	teq	ip, #1	; 0x1
        19bbdc:	01a01003 	moveq	r1, r3
        19bbe0:	0a637c51 	beq	1a7ad2c <TRTMP::$GetRouterAddress(TAppleTalkMessage *)>
        19bbe4:	13e000d3 	mvnne	r0, #211	; 0xd3
        19bbe8:	12400a03 	subne	r0, r0, #12288	; 0x3000
        19bbec:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRTMP::__ct(void)
 * Address: 0019bddc
 */
TRTMP::TRTMP(void) {
    /*
        19bddc:	e1a0c00d 	mov	ip, sp
        19bde0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        19bde4:	e24cb004 	sub	fp, ip, #4	; 0x4
        19bde8:	e1b04000 	movs	r4, r0
        19bdec:	1a000003 	bne	19be00 <TRTMP::__ct(void)+0x24>
        19bdf0:	e3a00030 	mov	r0, #48	; 0x30
        19bdf4:	eb68ca4f 	bl	1bce738 <$__nw(unsigned int)>
        19bdf8:	e1b04000 	movs	r4, r0
        19bdfc:	0a000007 	beq	19be20 <TRTMP::__ct(void)+0x44>
        19be00:	e1a00004 	mov	r0, r4
        19be04:	eb6356a9 	bl	1a718b0 <TStackObject::$__ct(void)>
        19be08:	e2840018 	add	r0, r4, #24	; 0x18
        19be0c:	eb6356b3 	bl	1a718e0 <TRTMPComparer::$__ct(void)>
        19be10:	e59f0010 	ldr	r0, [pc, #10]	; 19be28 <TRTMP::__ct(void)+0x4c>	; fField10
        19be14:	e5840000 	str	r0, [r4]
        19be18:	e3a00000 	mov	r0, #0	; 0x0
        19be1c:	e584002c 	str	r0, [r4, #44]	; fField44
        19be20:	e1a00004 	mov	r0, r4
        19be24:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        19be28:	0001f6c4 	andeq	pc, r1, r4, asr #13
    */
}

