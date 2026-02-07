#include "include/TIrGlue.h"

/**
 * Symbol: TIrGlue::__ct(void)
 * Address: 000ef538
 */
TIrGlue::TIrGlue(void) {
    /*
         ef538:	e1a0c00d 	mov	ip, sp
         ef53c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         ef540:	e24cb004 	sub	fp, ip, #4	; 0x4
         ef544:	e1b04000 	movs	r4, r0
         ef548:	1a000003 	bne	ef55c <TIrGlue::__ct(void)+0x24>
         ef54c:	e3a000b8 	mov	r0, #184	; 0xb8
         ef550:	eb6b7c78 	bl	1bce738 <$__nw(unsigned int)>
         ef554:	e1b04000 	movs	r4, r0
         ef558:	0a00001a 	beq	ef5c8 <TIrGlue::__ct(void)+0x90>
         ef55c:	e1a00004 	mov	r0, r4
         ef560:	eb65219d 	bl	1a37bdc <TIrStream::$__ct(void)>
         ef564:	e284004c 	add	r0, r4, #76	; 0x4c
         ef568:	ebffff7b 	bl	ef35c <TIrDscInfo::__ct(void)>
         ef56c:	e2840070 	add	r0, r4, #112	; 0x70
         ef570:	eb00223f 	bl	f7e74 <TIrQOS::__ct(void)>
         ef574:	e2840078 	add	r0, r4, #120	; 0x78
         ef578:	eb00223d 	bl	f7e74 <TIrQOS::__ct(void)>
         ef57c:	e59f004c 	ldr	r0, [pc, #4c]	; ef5d0 <TIrGlue::__ct(void)+0x98>
         ef580:	e5840000 	str	r0, [r4]
         ef584:	e3a00000 	mov	r0, #0	; 0x0
         ef588:	e5c40034 	strb	r0, [r4, #52]	; fField52
         ef58c:	e5c40035 	strb	r0, [r4, #53]	; fField53
         ef590:	e584006c 	str	r0, [r4, #108]	; fField108
         ef594:	e58400ac 	str	r0, [r4, #172]	; fField172
         ef598:	e58400b0 	str	r0, [r4, #176]	; fField176
         ef59c:	e58400b4 	str	r0, [r4, #180]	; fField180
         ef5a0:	e584001c 	str	r0, [r4, #28]	; fField28
         ef5a4:	e5840018 	str	r0, [r4, #24]	; fField24
         ef5a8:	e5840020 	str	r0, [r4, #32]	; fField32
         ef5ac:	e5840024 	str	r0, [r4, #36]	; fField36
         ef5b0:	e5840028 	str	r0, [r4, #40]	; fField40
         ef5b4:	e5840030 	str	r0, [r4, #48]	; fField48
         ef5b8:	e5840080 	str	r0, [r4, #128]	; fField128
         ef5bc:	e5c400a4 	strb	r0, [r4, #164]	; fField164
         ef5c0:	e3a00001 	mov	r0, #1	; 0x1
         ef5c4:	e5840040 	str	r0, [r4, #64]	; fField64
         ef5c8:	e1a00004 	mov	r0, r4
         ef5cc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         ef5d0:	0001fc38 	andeq	pc, r1, r8, lsr ip
    */
}

/**
 * Symbol: TIrGlue::__dt(void)
 * Address: 000ef5d4
 */
TIrGlue::~TIrGlue(void) {
    /*
         ef5d4:	e1a0c00d 	mov	ip, sp
         ef5d8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         ef5dc:	e24cb004 	sub	fp, ip, #4	; 0x4
         ef5e0:	e1a04000 	mov	r4, r0
         ef5e4:	e1a05001 	mov	r5, r1
         ef5e8:	e59f0050 	ldr	r0, [pc, #50]	; ef640 <TIrGlue::__dt(void)+0x6c>
         ef5ec:	e5840000 	str	r0, [r4]
         ef5f0:	e1a00004 	mov	r0, r4
         ef5f4:	e3a01001 	mov	r1, #1	; 0x1
         ef5f8:	eb6508a0 	bl	1a31880 <TIrGlue::$DeInit(unsigned char)>
         ef5fc:	e2840078 	add	r0, r4, #120	; 0x78
         ef600:	e3a01000 	mov	r1, #0	; 0x0
         ef604:	eb002227 	bl	f7ea8 <TIrQOS::__dt(void)>
         ef608:	e2840070 	add	r0, r4, #112	; 0x70
         ef60c:	e3a01000 	mov	r1, #0	; 0x0
         ef610:	eb002224 	bl	f7ea8 <TIrQOS::__dt(void)>
         ef614:	e284004c 	add	r0, r4, #76	; 0x4c
         ef618:	e3a01000 	mov	r1, #0	; 0x0
         ef61c:	ebffff61 	bl	ef3a8 <TIrDscInfo::__dt(void)>
         ef620:	e1a00004 	mov	r0, r4
         ef624:	e3a01000 	mov	r1, #0	; 0x0
         ef628:	eb65216c 	bl	1a37be0 <TIrStream::$__dt(void)>
         ef62c:	e3150001 	tst	r5, #1	; 0x1
         ef630:	11a00004 	movne	r0, r4
         ef634:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         ef638:	1a6b7828 	bne	1bcd6e0 <$__dl(void *)>
         ef63c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         ef640:	0001fc38 	andeq	pc, r1, r8, lsr ip
    */
}

/**
 * Symbol: TIrGlue::HandleDiscoverComplete(void)
 * Address: 000ef644
 */
TIrGlue::HandleDiscoverComplete(void) {
    /*
         ef644:	e1a0c00d 	mov	ip, sp
         ef648:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         ef64c:	e24cb004 	sub	fp, ip, #4	; 0x4
         ef650:	e1a04000 	mov	r4, r0
         ef654:	e590000c 	ldr	r0, [r0, #12]	; fField12
         ef658:	e1a01000 	mov	r1, r0
         ef65c:	e5b05004 	ldr	r5, [r0, #4]!
         ef660:	e1a00004 	mov	r0, r4
         ef664:	eb650895 	bl	1a318c0 <TIrGlue::$ReleaseEventBlock(TIrEvent *)>
         ef668:	e3a00000 	mov	r0, #0	; 0x0
         ef66c:	e5c40034 	strb	r0, [r4, #52]	; fField52
         ef670:	e1a01005 	mov	r1, r5
         ef674:	e594206c 	ldr	r2, [r4, #108]	; fField108
         ef678:	e1a00004 	mov	r0, r4
         ef67c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         ef680:	ea650476 	b	1a30860 <TIrGlue::$DiscoverComplete(long, CList *)>
    */
}

/**
 * Symbol: TIrGlue::LSAPLookupStart(unsigned long, unsigned char *, unsigned char *)
 * Address: 000ef684
 */
TIrGlue::LSAPLookupStart(unsigned long, unsigned char *, unsigned char *) {
    /*
         ef684:	e1a0c00d 	mov	ip, sp
         ef688:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         ef68c:	e24cb004 	sub	fp, ip, #4	; 0x4
         ef690:	e1a04000 	mov	r4, r0
         ef694:	e1a05001 	mov	r5, r1
         ef698:	e3a06000 	mov	r6, #0	; 0x0
         ef69c:	e2800094 	add	r0, r0, #148	; 0x94
         ef6a0:	e880000c 	stmia	r0, {r2, r3}
         ef6a4:	e2400094 	sub	r0, r0, #148	; 0x94
         ef6a8:	e3a00000 	mov	r0, #0	; 0x0
         ef6ac:	eb650887 	bl	1a318d0 <TIASClient::$__ct(void)>
         ef6b0:	e5840028 	str	r0, [r4, #40]	; fField40
         ef6b4:	e3300000 	teq	r0, #0	; 0x0
         ef6b8:	0a000026 	beq	ef758 <TIrGlue::LSAPLookupStart(unsigned long, unsigned char *, unsigned char *)+0xd4>
         ef6bc:	e5942018 	ldr	r2, [r4, #24]	; fField24
         ef6c0:	e1a03004 	mov	r3, r4
         ef6c4:	e1a01004 	mov	r1, r4
         ef6c8:	eb650885 	bl	1a318e4 <TIASClient::$Init(TIrGlue *, TIrLMP *, TIrStream *)>
         ef6cc:	e1b07000 	movs	r7, r0
         ef6d0:	1a000026 	bne	ef770 <TIrGlue::LSAPLookupStart(unsigned long, unsigned char *, unsigned char *)+0xec>
         ef6d4:	e1a00004 	mov	r0, r4
         ef6d8:	e3a02020 	mov	r2, #32	; 0x20
         ef6dc:	e3a01005 	mov	r1, #5	; 0x5
         ef6e0:	eb650874 	bl	1a318b8 <TIrGlue::$GrabEventBlock(unsigned long, unsigned long)>
         ef6e4:	e1b06000 	movs	r6, r0
         ef6e8:	0a00001a 	beq	ef758 <TIrGlue::LSAPLookupStart(unsigned long, unsigned char *, unsigned char *)+0xd4>
         ef6ec:	e2840070 	add	r0, r4, #112	; 0x70
         ef6f0:	e5860014 	str	r0, [r6, #20]	; fField20
         ef6f4:	e2840078 	add	r0, r4, #120	; 0x78
         ef6f8:	e5860018 	str	r0, [r6, #24]	; fField24
         ef6fc:	e3a00000 	mov	r0, #0	; 0x0
         ef700:	e586001c 	str	r0, [r6, #28]	; fField28
         ef704:	e586500c 	str	r5, [r6, #12]	; fField12
         ef708:	e1a01006 	mov	r1, r6
         ef70c:	e5940028 	ldr	r0, [r4, #40]	; fField40
         ef710:	eb652134 	bl	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
         ef714:	e3a00000 	mov	r0, #0	; 0x0
         ef718:	eb650876 	bl	1a318f8 <TIASServer::$__ct(void)>
         ef71c:	e5840024 	str	r0, [r4, #36]	; fField36
         ef720:	e3300000 	teq	r0, #0	; 0x0
         ef724:	0a00000b 	beq	ef758 <TIrGlue::LSAPLookupStart(unsigned long, unsigned char *, unsigned char *)+0xd4>
         ef728:	e5942018 	ldr	r2, [r4, #24]	; fField24
         ef72c:	e1a03004 	mov	r3, r4
         ef730:	e1a01004 	mov	r1, r4
         ef734:	eb650c74 	bl	1a3290c <TIASServer::$Init(TIrGlue *, TIrLMP *, TIrStream *)>
         ef738:	e1b07000 	movs	r7, r0
         ef73c:	1a000007 	bne	ef760 <TIrGlue::LSAPLookupStart(unsigned long, unsigned char *, unsigned char *)+0xdc>
         ef740:	e5940024 	ldr	r0, [r4, #36]	; fField36
         ef744:	e5941020 	ldr	r1, [r4, #32]	; fField32
         ef748:	eb00079e 	bl	f15c8 <TIASServer::SetNameService(TIASService *)>
         ef74c:	e3a00002 	mov	r0, #2	; 0x2
         ef750:	e5c40034 	strb	r0, [r4, #52]	; fField52
         ef754:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         ef758:	e3a070a8 	mov	r7, #168	; 0xa8
         ef75c:	e2477b07 	sub	r7, r7, #7168	; 0x1c00
         ef760:	e3360000 	teq	r6, #0	; 0x0
         ef764:	11a01006 	movne	r1, r6
         ef768:	11a00004 	movne	r0, r4
         ef76c:	1b650853 	blne	1a318c0 <TIrGlue::$ReleaseEventBlock(TIrEvent *)>
         ef770:	e1a01007 	mov	r1, r7
         ef774:	e1a00004 	mov	r0, r4
         ef778:	e3a02000 	mov	r2, #0	; 0x0
         ef77c:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         ef780:	ea650437 	b	1a30864 <TIrGlue::$LSAPLookupComplete(long, unsigned long)>
    */
}

/**
 * Symbol: TIrGlue::HandleNameServerConnectComplete(void)
 * Address: 000ef784
 */
TIrGlue::HandleNameServerConnectComplete(void) {
    /*
         ef784:	e1a0c00d 	mov	ip, sp
         ef788:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         ef78c:	e24cb004 	sub	fp, ip, #4	; 0x4
         ef790:	e1a04000 	mov	r4, r0
         ef794:	e590000c 	ldr	r0, [r0, #12]	; fField12
         ef798:	e1a01000 	mov	r1, r0
         ef79c:	e5905004 	ldr	r5, [r0, #4]
         ef7a0:	e3350000 	teq	r5, #0	; 0x0
         ef7a4:	0a000009 	beq	ef7d0 <TIrGlue::HandleNameServerConnectComplete(void)+0x4c>
         ef7a8:	e1a01000 	mov	r1, r0
         ef7ac:	e1a00004 	mov	r0, r4
         ef7b0:	eb650842 	bl	1a318c0 <TIrGlue::$ReleaseEventBlock(TIrEvent *)>
         ef7b4:	e3a00000 	mov	r0, #0	; 0x0
         ef7b8:	e5c40034 	strb	r0, [r4, #52]	; fField52
         ef7bc:	e1a01005 	mov	r1, r5
         ef7c0:	e1a00004 	mov	r0, r4
         ef7c4:	e3a02000 	mov	r2, #0	; 0x0
         ef7c8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         ef7cc:	ea650424 	b	1a30864 <TIrGlue::$LSAPLookupComplete(long, unsigned long)>
         ef7d0:	e3a0000f 	mov	r0, #15	; 0xf
         ef7d4:	e5c10000 	strb	r0, [r1]
         ef7d8:	e5940094 	ldr	r0, [r4, #148]	; fField148
         ef7dc:	e5810008 	str	r0, [r1, #8]
         ef7e0:	e5940098 	ldr	r0, [r4, #152]	; fField152
         ef7e4:	e581000c 	str	r0, [r1, #12]	; fField12
         ef7e8:	e5b40028 	ldr	r0, [r4, #40]!	; fField40
         ef7ec:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         ef7f0:	ea6520fc 	b	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
    */
}

/**
 * Symbol: TIrGlue::HandleNameServerLookupComplete(void)
 * Address: 000ef7f4
 */
TIrGlue::HandleNameServerLookupComplete(void) {
    /*
         ef7f4:	e1a0c00d 	mov	ip, sp
         ef7f8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         ef7fc:	e24cb004 	sub	fp, ip, #4	; 0x4
         ef800:	e1a04000 	mov	r4, r0
         ef804:	e3a06000 	mov	r6, #0	; 0x0
         ef808:	e590500c 	ldr	r5, [r0, #12]	; fField12
         ef80c:	e5806038 	str	r6, [r0, #56]	; fField56
         ef810:	e5950004 	ldr	r0, [r5, #4]
         ef814:	e5840044 	str	r0, [r4, #68]	; fField68
         ef818:	e5950004 	ldr	r0, [r5, #4]
         ef81c:	e3300000 	teq	r0, #0	; 0x0
         ef820:	1a00000e 	bne	ef860 <TIrGlue::HandleNameServerLookupComplete(void)+0x6c>
         ef824:	e5950010 	ldr	r0, [r5, #16]
         ef828:	e3300000 	teq	r0, #0	; 0x0
         ef82c:	0a00000b 	beq	ef860 <TIrGlue::HandleNameServerLookupComplete(void)+0x6c>
         ef830:	e3a01000 	mov	r1, #0	; 0x0
         ef834:	eb6bdac2 	bl	1be6344 <CList::$At(long)>
         ef838:	e3300000 	teq	r0, #0	; 0x0
         ef83c:	0a000003 	beq	ef850 <TIrGlue::HandleNameServerLookupComplete(void)+0x5c>
         ef840:	e2841038 	add	r1, r4, #56	; 0x38
         ef844:	eb650c4a 	bl	1a32974 <TIASElement::$GetInteger(unsigned long &)>
         ef848:	e3300000 	teq	r0, #0	; 0x0
         ef84c:	15846038 	strne	r6, [r4, #56]	; fField56
         ef850:	e5950010 	ldr	r0, [r5, #16]
         ef854:	e3300000 	teq	r0, #0	; 0x0
         ef858:	13a01001 	movne	r1, #1	; 0x1
         ef85c:	1b650c35 	blne	1a32938 <TIASAttribute::$__dt(void)>
         ef860:	e1a01005 	mov	r1, r5
         ef864:	e3a00015 	mov	r0, #21	; 0x15
         ef868:	e5c50000 	strb	r0, [r5]
         ef86c:	e5856004 	str	r6, [r5, #4]
         ef870:	e5b40028 	ldr	r0, [r4, #40]!	; fField40
         ef874:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         ef878:	ea6520da 	b	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
    */
}

/**
 * Symbol: TIrGlue::HandleNameServerReleaseComplete(void)
 * Address: 000ef87c
 */
TIrGlue::HandleNameServerReleaseComplete(void) {
    /*
         ef87c:	e1a0c00d 	mov	ip, sp
         ef880:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         ef884:	e24cb004 	sub	fp, ip, #4	; 0x4
         ef888:	e1a04000 	mov	r4, r0
         ef88c:	e590100c 	ldr	r1, [r0, #12]	; fField12
         ef890:	eb65080a 	bl	1a318c0 <TIrGlue::$ReleaseEventBlock(TIrEvent *)>
         ef894:	e5940044 	ldr	r0, [r4, #68]	; fField68
         ef898:	e3300000 	teq	r0, #0	; 0x0
         ef89c:	05940038 	ldreq	r0, [r4, #56]	; fField56
         ef8a0:	03300000 	teqeq	r0, #0	; 0x0
         ef8a4:	03a0009a 	moveq	r0, #154	; 0x9a
         ef8a8:	02400c97 	subeq	r0, r0, #38656	; 0x9700
         ef8ac:	05840044 	streq	r0, [r4, #68]	; fField68
         ef8b0:	e3a00000 	mov	r0, #0	; 0x0
         ef8b4:	e5c40034 	strb	r0, [r4, #52]	; fField52
         ef8b8:	e5941044 	ldr	r1, [r4, #68]	; fField68
         ef8bc:	e5942038 	ldr	r2, [r4, #56]	; fField56
         ef8c0:	e1a00004 	mov	r0, r4
         ef8c4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         ef8c8:	ea6503e5 	b	1a30864 <TIrGlue::$LSAPLookupComplete(long, unsigned long)>
    */
}

/**
 * Symbol: TIrGlue::ConnectStart(unsigned long, unsigned long, CBuffer *)
 * Address: 000ef8cc
 */
TIrGlue::ConnectStart(unsigned long, unsigned long, CBuffer *) {
    /*
         ef8cc:	e1a0c00d 	mov	ip, sp
         ef8d0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         ef8d4:	e24cb004 	sub	fp, ip, #4	; 0x4
         ef8d8:	e1a04000 	mov	r4, r0
         ef8dc:	e1a07001 	mov	r7, r1
         ef8e0:	e1a06002 	mov	r6, r2
         ef8e4:	e1a05003 	mov	r5, r3
         ef8e8:	e3a00000 	mov	r0, #0	; 0x0
         ef8ec:	eb65186b 	bl	1a35aa0 <TLSAPConn::$__ct(void)>
         ef8f0:	e5840030 	str	r0, [r4, #48]	; fField48
         ef8f4:	e3300000 	teq	r0, #0	; 0x0
         ef8f8:	0a00001d 	beq	ef974 <TIrGlue::ConnectStart(unsigned long, unsigned long, CBuffer *)+0xa8>
         ef8fc:	e5942018 	ldr	r2, [r4, #24]	; fField24
         ef900:	e1a03004 	mov	r3, r4
         ef904:	e1a01004 	mov	r1, r4
         ef908:	eb651872 	bl	1a35ad8 <TLSAPConn::$Init(TIrGlue *, TIrLMP *, TIrStream *)>
         ef90c:	e3300000 	teq	r0, #0	; 0x0
         ef910:	1a000019 	bne	ef97c <TIrGlue::ConnectStart(unsigned long, unsigned long, CBuffer *)+0xb0>
         ef914:	e5940030 	ldr	r0, [r4, #48]	; fField48
         ef918:	e594102c 	ldr	r1, [r4, #44]	; fField44
         ef91c:	eb001ca4 	bl	f6bb4 <TLSAPConn::AssignId(unsigned long)>
         ef920:	e1a00004 	mov	r0, r4
         ef924:	e3a02020 	mov	r2, #32	; 0x20
         ef928:	e3a01005 	mov	r1, #5	; 0x5
         ef92c:	eb6507e1 	bl	1a318b8 <TIrGlue::$GrabEventBlock(unsigned long, unsigned long)>
         ef930:	e3300000 	teq	r0, #0	; 0x0
         ef934:	0a00000e 	beq	ef974 <TIrGlue::ConnectStart(unsigned long, unsigned long, CBuffer *)+0xa8>
         ef938:	e580700c 	str	r7, [r0, #12]	; fField12
         ef93c:	e5c06010 	strb	r6, [r0, #16]
         ef940:	e2841070 	add	r1, r4, #112	; 0x70
         ef944:	e5801014 	str	r1, [r0, #20]	; fField20
         ef948:	e2841078 	add	r1, r4, #120	; 0x78
         ef94c:	e2800018 	add	r0, r0, #24	; 0x18
         ef950:	e8800022 	stmia	r0, {r1, r5}
         ef954:	e2400018 	sub	r0, r0, #24	; 0x18
         ef958:	e1a01000 	mov	r1, r0
         ef95c:	e5942030 	ldr	r2, [r4, #48]	; fField48
         ef960:	e1a00002 	mov	r0, r2
         ef964:	eb65209f 	bl	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
         ef968:	e3a00003 	mov	r0, #3	; 0x3
         ef96c:	e5c40034 	strb	r0, [r4, #52]	; fField52
         ef970:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         ef974:	e3a000a8 	mov	r0, #168	; 0xa8
         ef978:	e2400b07 	sub	r0, r0, #7168	; 0x1c00
         ef97c:	e1a01000 	mov	r1, r0
         ef980:	e1a00004 	mov	r0, r4
         ef984:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         ef988:	ea6503b6 	b	1a30868 <TIrGlue::$ConnectComplete(long)>
    */
}

/**
 * Symbol: TIrGlue::HandleConnectComplete(void)
 * Address: 000ef98c
 */
TIrGlue::HandleConnectComplete(void) {
    /*
         ef98c:	e1a0c00d 	mov	ip, sp
         ef990:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         ef994:	e24cb004 	sub	fp, ip, #4	; 0x4
         ef998:	e1a04000 	mov	r4, r0
         ef99c:	e590600c 	ldr	r6, [r0, #12]	; fField12
         ef9a0:	e5965004 	ldr	r5, [r6, #4]
         ef9a4:	e3350000 	teq	r5, #0	; 0x0
         ef9a8:	1a000002 	bne	ef9b8 <TIrGlue::HandleConnectComplete(void)+0x2c>
         ef9ac:	e1a00004 	mov	r0, r4
         ef9b0:	eb6507b5 	bl	1a3188c <TIrGlue::$InitBuffers(void)>
         ef9b4:	e1a05000 	mov	r5, r0
         ef9b8:	e3350000 	teq	r5, #0	; 0x0
         ef9bc:	13a00000 	movne	r0, #0	; 0x0
         ef9c0:	03a00006 	moveq	r0, #6	; 0x6
         ef9c4:	e5c40034 	strb	r0, [r4, #52]	; fField52
         ef9c8:	e1a01006 	mov	r1, r6
         ef9cc:	e1a00004 	mov	r0, r4
         ef9d0:	eb6507ba 	bl	1a318c0 <TIrGlue::$ReleaseEventBlock(TIrEvent *)>
         ef9d4:	e1a01005 	mov	r1, r5
         ef9d8:	e1a00004 	mov	r0, r4
         ef9dc:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         ef9e0:	ea6503a0 	b	1a30868 <TIrGlue::$ConnectComplete(long)>
    */
}

/**
 * Symbol: TIrGlue::ListenStart(CBuffer *)
 * Address: 000ef9e4
 */
TIrGlue::ListenStart(CBuffer *) {
    /*
         ef9e4:	e1a0c00d 	mov	ip, sp
         ef9e8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         ef9ec:	e24cb004 	sub	fp, ip, #4	; 0x4
         ef9f0:	e1a04000 	mov	r4, r0
         ef9f4:	e1a05001 	mov	r5, r1
         ef9f8:	e3a00000 	mov	r0, #0	; 0x0
         ef9fc:	eb651827 	bl	1a35aa0 <TLSAPConn::$__ct(void)>
         efa00:	e5840030 	str	r0, [r4, #48]	; fField48
         efa04:	e3300000 	teq	r0, #0	; 0x0
         efa08:	0a000027 	beq	efaac <TIrGlue::ListenStart(CBuffer *)+0xc8>
         efa0c:	e5942018 	ldr	r2, [r4, #24]	; fField24
         efa10:	e1a03004 	mov	r3, r4
         efa14:	e1a01004 	mov	r1, r4
         efa18:	eb65182e 	bl	1a35ad8 <TLSAPConn::$Init(TIrGlue *, TIrLMP *, TIrStream *)>
         efa1c:	e3300000 	teq	r0, #0	; 0x0
         efa20:	1a000023 	bne	efab4 <TIrGlue::ListenStart(CBuffer *)+0xd0>
         efa24:	e5940030 	ldr	r0, [r4, #48]	; fField48
         efa28:	e594102c 	ldr	r1, [r4, #44]	; fField44
         efa2c:	eb001c60 	bl	f6bb4 <TLSAPConn::AssignId(unsigned long)>
         efa30:	e3a00000 	mov	r0, #0	; 0x0
         efa34:	eb6507af 	bl	1a318f8 <TIASServer::$__ct(void)>
         efa38:	e5840024 	str	r0, [r4, #36]	; fField36
         efa3c:	e3300000 	teq	r0, #0	; 0x0
         efa40:	0a000019 	beq	efaac <TIrGlue::ListenStart(CBuffer *)+0xc8>
         efa44:	e5942018 	ldr	r2, [r4, #24]	; fField24
         efa48:	e1a03004 	mov	r3, r4
         efa4c:	e1a01004 	mov	r1, r4
         efa50:	eb650bad 	bl	1a3290c <TIASServer::$Init(TIrGlue *, TIrLMP *, TIrStream *)>
         efa54:	e3300000 	teq	r0, #0	; 0x0
         efa58:	1a000015 	bne	efab4 <TIrGlue::ListenStart(CBuffer *)+0xd0>
         efa5c:	e5940024 	ldr	r0, [r4, #36]	; fField36
         efa60:	e5941020 	ldr	r1, [r4, #32]	; fField32
         efa64:	eb0006d7 	bl	f15c8 <TIASServer::SetNameService(TIASService *)>
         efa68:	e1a00004 	mov	r0, r4
         efa6c:	e3a02020 	mov	r2, #32	; 0x20
         efa70:	e3a01007 	mov	r1, #7	; 0x7
         efa74:	eb65078f 	bl	1a318b8 <TIrGlue::$GrabEventBlock(unsigned long, unsigned long)>
         efa78:	e1b01000 	movs	r1, r0
         efa7c:	0a00000a 	beq	efaac <TIrGlue::ListenStart(CBuffer *)+0xc8>
         efa80:	e2840070 	add	r0, r4, #112	; 0x70
         efa84:	e5810014 	str	r0, [r1, #20]	; fField20
         efa88:	e2840078 	add	r0, r4, #120	; 0x78
         efa8c:	e2811018 	add	r1, r1, #24	; 0x18
         efa90:	e8810021 	stmia	r1, {r0, r5}
         efa94:	e2411018 	sub	r1, r1, #24	; 0x18
         efa98:	e5940030 	ldr	r0, [r4, #48]	; fField48
         efa9c:	eb652051 	bl	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
         efaa0:	e3a00004 	mov	r0, #4	; 0x4
         efaa4:	e5c40034 	strb	r0, [r4, #52]	; fField52
         efaa8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         efaac:	e3a000a8 	mov	r0, #168	; 0xa8
         efab0:	e2400b07 	sub	r0, r0, #7168	; 0x1c00
         efab4:	e1a01000 	mov	r1, r0
         efab8:	e1a00004 	mov	r0, r4
         efabc:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         efac0:	ea650369 	b	1a3086c <TIrGlue::$ListenComplete(long)>
    */
}

/**
 * Symbol: TIrGlue::HandleListenComplete(void)
 * Address: 000efac4
 */
TIrGlue::HandleListenComplete(void) {
    /*
         efac4:	e1a0c00d 	mov	ip, sp
         efac8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         efacc:	e24cb004 	sub	fp, ip, #4	; 0x4
         efad0:	e1a04000 	mov	r4, r0
         efad4:	e590100c 	ldr	r1, [r0, #12]	; fField12
         efad8:	e5915004 	ldr	r5, [r1, #4]
         efadc:	e3350000 	teq	r5, #0	; 0x0
         efae0:	13a00000 	movne	r0, #0	; 0x0
         efae4:	03a00005 	moveq	r0, #5	; 0x5
         efae8:	e5c40034 	strb	r0, [r4, #52]	; fField52
         efaec:	e1a00004 	mov	r0, r4
         efaf0:	eb650772 	bl	1a318c0 <TIrGlue::$ReleaseEventBlock(TIrEvent *)>
         efaf4:	e1a01005 	mov	r1, r5
         efaf8:	e1a00004 	mov	r0, r4
         efafc:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         efb00:	ea650359 	b	1a3086c <TIrGlue::$ListenComplete(long)>
    */
}

/**
 * Symbol: TIrGlue::AcceptStart(CBuffer *)
 * Address: 000efb04
 */
TIrGlue::AcceptStart(CBuffer *) {
    /*
         efb04:	e1a0c00d 	mov	ip, sp
         efb08:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         efb0c:	e24cb004 	sub	fp, ip, #4	; 0x4
         efb10:	e1a04000 	mov	r4, r0
         efb14:	e1a05001 	mov	r5, r1
         efb18:	e3a02020 	mov	r2, #32	; 0x20
         efb1c:	e3a01009 	mov	r1, #9	; 0x9
         efb20:	eb650764 	bl	1a318b8 <TIrGlue::$GrabEventBlock(unsigned long, unsigned long)>
         efb24:	e3300000 	teq	r0, #0	; 0x0
         efb28:	01a00004 	moveq	r0, r4
         efb2c:	03a010a8 	moveq	r1, #168	; 0xa8
         efb30:	02411b07 	subeq	r1, r1, #7168	; 0x1c00
         efb34:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
         efb38:	0a65034c 	beq	1a30870 <TIrGlue::$AcceptComplete(long)>
         efb3c:	e580501c 	str	r5, [r0, #28]	; fField28
         efb40:	e1a01000 	mov	r1, r0
         efb44:	e5b42030 	ldr	r2, [r4, #48]!	; fField48
         efb48:	e1a00002 	mov	r0, r2
         efb4c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         efb50:	ea652024 	b	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
    */
}

/**
 * Symbol: TIrGlue::Init(TIrDATool *)
 * Address: 000efb54
 */
TIrGlue::Init(TIrDATool *) {
    /*
         efb54:	e1a0c00d 	mov	ip, sp
         efb58:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         efb5c:	e24cb004 	sub	fp, ip, #4	; 0x4
         efb60:	e1a04000 	mov	r4, r0
         efb64:	e5801014 	str	r1, [r0, #20]	; fField20
         efb68:	e1a01000 	mov	r1, r0
         efb6c:	eb65201c 	bl	1a37be4 <TIrStream::$Init(TIrGlue *)>
         efb70:	e1b05000 	movs	r5, r0
         efb74:	1a000027 	bne	efc18 <TIrGlue::Init(TIrDATool *)+0xc4>
         efb78:	e3a00000 	mov	r0, #0	; 0x0
         efb7c:	eb650f93 	bl	1a339d0 <TIrLAP::$__ct(void)>
         efb80:	e584001c 	str	r0, [r4, #28]	; fField28
         efb84:	e3300000 	teq	r0, #0	; 0x0
         efb88:	0a000020 	beq	efc10 <TIrGlue::Init(TIrDATool *)+0xbc>
         efb8c:	e3a00000 	mov	r0, #0	; 0x0
         efb90:	eb6513b9 	bl	1a34a7c <TIrLMP::$__ct(void)>
         efb94:	e5840018 	str	r0, [r4, #24]	; fField24
         efb98:	e3300000 	teq	r0, #0	; 0x0
         efb9c:	0a00001b 	beq	efc10 <TIrGlue::Init(TIrDATool *)+0xbc>
         efba0:	e3a00000 	mov	r0, #0	; 0x0
         efba4:	eb6bd1a0 	bl	1be422c <CList::$__ct(void)>
         efba8:	e584006c 	str	r0, [r4, #108]	; fField108
         efbac:	e3300000 	teq	r0, #0	; 0x0
         efbb0:	0a000016 	beq	efc10 <TIrGlue::Init(TIrDATool *)+0xbc>
         efbb4:	e3a00000 	mov	r0, #0	; 0x0
         efbb8:	eb6bd19b 	bl	1be422c <CList::$__ct(void)>
         efbbc:	e58400b0 	str	r0, [r4, #176]	; fField176
         efbc0:	e3300000 	teq	r0, #0	; 0x0
         efbc4:	0a000011 	beq	efc10 <TIrGlue::Init(TIrDATool *)+0xbc>
         efbc8:	e1a00004 	mov	r0, r4
         efbcc:	eb650737 	bl	1a318b0 <TIrGlue::$InitEventBlockList(void)>
         efbd0:	e1b05000 	movs	r5, r0
         efbd4:	1a00000f 	bne	efc18 <TIrGlue::Init(TIrDATool *)+0xc4>
         efbd8:	e594001c 	ldr	r0, [r4, #28]	; fField28
         efbdc:	e5942018 	ldr	r2, [r4, #24]	; fField24
         efbe0:	e1a01004 	mov	r1, r4
         efbe4:	eb650f84 	bl	1a339fc <TIrLAP::$Init(TIrGlue *, TIrLMP *)>
         efbe8:	e1b05000 	movs	r5, r0
         efbec:	1a000009 	bne	efc18 <TIrGlue::Init(TIrDATool *)+0xc4>
         efbf0:	e2842018 	add	r2, r4, #24	; 0x18
         efbf4:	e8920005 	ldmia	r2, {r0, r2}
         efbf8:	e1a01004 	mov	r1, r4
         efbfc:	eb6517a3 	bl	1a35a90 <TIrLMP::$Init(TIrGlue *, TIrLAP *)>
         efc00:	e1b05000 	movs	r5, r0
         efc04:	03a00000 	moveq	r0, #0	; 0x0
         efc08:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         efc0c:	ea000001 	b	efc18 <TIrGlue::Init(TIrDATool *)+0xc4>
         efc10:	e3a050a8 	mov	r5, #168	; 0xa8
         efc14:	e2455b07 	sub	r5, r5, #7168	; 0x1c00
         efc18:	e1a00004 	mov	r0, r4
         efc1c:	e3a01001 	mov	r1, #1	; 0x1
         efc20:	eb650716 	bl	1a31880 <TIrGlue::$DeInit(unsigned char)>
         efc24:	e1a00005 	mov	r0, r5
         efc28:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TIrGlue::HandleAcceptComplete(void)
 * Address: 000efc2c
 */
TIrGlue::HandleAcceptComplete(void) {
    /*
         efc2c:	e1a0c00d 	mov	ip, sp
         efc30:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         efc34:	e24cb004 	sub	fp, ip, #4	; 0x4
         efc38:	e1a04000 	mov	r4, r0
         efc3c:	e590600c 	ldr	r6, [r0, #12]	; fField12
         efc40:	e5965004 	ldr	r5, [r6, #4]
         efc44:	e3350000 	teq	r5, #0	; 0x0
         efc48:	1a000002 	bne	efc58 <TIrGlue::HandleAcceptComplete(void)+0x2c>
         efc4c:	e1a00004 	mov	r0, r4
         efc50:	eb65070d 	bl	1a3188c <TIrGlue::$InitBuffers(void)>
         efc54:	e1a05000 	mov	r5, r0
         efc58:	e3350000 	teq	r5, #0	; 0x0
         efc5c:	13a00000 	movne	r0, #0	; 0x0
         efc60:	03a00006 	moveq	r0, #6	; 0x6
         efc64:	e5c40034 	strb	r0, [r4, #52]	; fField52
         efc68:	e1a01006 	mov	r1, r6
         efc6c:	e1a00004 	mov	r0, r4
         efc70:	eb650712 	bl	1a318c0 <TIrGlue::$ReleaseEventBlock(TIrEvent *)>
         efc74:	e1a01005 	mov	r1, r5
         efc78:	e1a00004 	mov	r0, r4
         efc7c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         efc80:	ea6502fa 	b	1a30870 <TIrGlue::$AcceptComplete(long)>
    */
}

/**
 * Symbol: TIrGlue::GetStart(CBuffer *, unsigned long)
 * Address: 000efc84
 */
TIrGlue::GetStart(CBuffer *, unsigned long) {
    /*
         efc84:	e1a0c00d 	mov	ip, sp
         efc88:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         efc8c:	e24cb004 	sub	fp, ip, #4	; 0x4
         efc90:	e1a04000 	mov	r4, r0
         efc94:	e5802088 	str	r2, [r0, #136]
         efc98:	e3a02000 	mov	r2, #0	; 0x0
         efc9c:	e5801090 	str	r1, [r0, #144]	; fField144
         efca0:	e3a01000 	mov	r1, #0	; 0x0
         efca4:	eb6506fb 	bl	1a31898 <TIrGlue::$CheckGetDone(unsigned long, unsigned char)>
         efca8:	e3300000 	teq	r0, #0	; 0x0
         efcac:	e1a00004 	mov	r0, r4
         efcb0:	13a01000 	movne	r1, #0	; 0x0
         efcb4:	1a00000a 	bne	efce4 <TIrGlue::GetStart(CBuffer *, unsigned long)+0x60>
         efcb8:	e3a0201c 	mov	r2, #28	; 0x1c
         efcbc:	e3a0100b 	mov	r1, #11	; 0xb
         efcc0:	eb6506fc 	bl	1a318b8 <TIrGlue::$GrabEventBlock(unsigned long, unsigned long)>
         efcc4:	e3300000 	teq	r0, #0	; 0x0
         efcc8:	11a01000 	movne	r1, r0
         efccc:	11a00004 	movne	r0, r4
         efcd0:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         efcd4:	1a6506ee 	bne	1a31894 <TIrGlue::$InitGetRequest(TIrDataXferEvent *)>
         efcd8:	e1a00004 	mov	r0, r4
         efcdc:	e3a010a8 	mov	r1, #168	; 0xa8
         efce0:	e2411b07 	sub	r1, r1, #7168	; 0x1c00
         efce4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         efce8:	ea6502e1 	b	1a30874 <TIrGlue::$GetComplete(long)>
    */
}

/**
 * Symbol: TIrGlue::HandleGetComplete(void)
 * Address: 000efcec
 */
TIrGlue::HandleGetComplete(void) {
    /*
         efcec:	e1a0c00d 	mov	ip, sp
         efcf0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         efcf4:	e24cb004 	sub	fp, ip, #4	; 0x4
         efcf8:	e1a04000 	mov	r4, r0
         efcfc:	e590600c 	ldr	r6, [r0, #12]	; fField12
         efd00:	e5965004 	ldr	r5, [r6, #4]
         efd04:	e3350000 	teq	r5, #0	; 0x0
         efd08:	1a000009 	bne	efd34 <TIrGlue::HandleGetComplete(void)+0x48>
         efd0c:	e1a00004 	mov	r0, r4
         efd10:	e3a02001 	mov	r2, #1	; 0x1
         efd14:	e5961014 	ldr	r1, [r6, #20]	; fField20
         efd18:	eb6506de 	bl	1a31898 <TIrGlue::$CheckGetDone(unsigned long, unsigned char)>
         efd1c:	e3300000 	teq	r0, #0	; 0x0
         efd20:	01a01006 	moveq	r1, r6
         efd24:	01a00004 	moveq	r0, r4
         efd28:	091b6870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, lr}
         efd2c:	0a6506d8 	beq	1a31894 <TIrGlue::$InitGetRequest(TIrDataXferEvent *)>
         efd30:	ea000001 	b	efd3c <TIrGlue::HandleGetComplete(void)+0x50>
         efd34:	e3350000 	teq	r5, #0	; 0x0
         efd38:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         efd3c:	e1a01006 	mov	r1, r6
         efd40:	e1a00004 	mov	r0, r4
         efd44:	eb6506dd 	bl	1a318c0 <TIrGlue::$ReleaseEventBlock(TIrEvent *)>
         efd48:	e1a01005 	mov	r1, r5
         efd4c:	e1a00004 	mov	r0, r4
         efd50:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         efd54:	ea6502c6 	b	1a30874 <TIrGlue::$GetComplete(long)>
    */
}

/**
 * Symbol: TIrGlue::PutStart(CBuffer *)
 * Address: 000efd58
 */
TIrGlue::PutStart(CBuffer *) {
    /*
         efd58:	e1a0c00d 	mov	ip, sp
         efd5c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         efd60:	e24cb004 	sub	fp, ip, #4	; 0x4
         efd64:	e1a04000 	mov	r4, r0
         efd68:	e1a05001 	mov	r5, r1
         efd6c:	e1a00001 	mov	r0, r1
         efd70:	e5911000 	ldr	r1, [r1]
         efd74:	e1a0e00f 	mov	lr, pc
         efd78:	e281f02c 	add	pc, r1, #44	; 0x2c
         efd7c:	e1a03000 	mov	r3, r0
         efd80:	e1a01005 	mov	r1, r5
         efd84:	e1a00004 	mov	r0, r4
         efd88:	e3a02000 	mov	r2, #0	; 0x0
         efd8c:	eb6506c2 	bl	1a3189c <TIrGlue::$InitPutRequests(CBuffer *, unsigned long, unsigned long)>
         efd90:	e3300000 	teq	r0, #0	; 0x0
         efd94:	058400a8 	streq	r0, [r4, #168]	; fField168
         efd98:	05a400a0 	streq	r0, [r4, #160]!	; fField160
         efd9c:	11a01000 	movne	r1, r0
         efda0:	11a00004 	movne	r0, r4
         efda4:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         efda8:	1a6502b2 	bne	1a30878 <TIrGlue::$PutComplete(long)>
         efdac:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TIrGlue::HandlePutComplete(void)
 * Address: 000efdb0
 */
TIrGlue::HandlePutComplete(void) {
    /*
         efdb0:	e1a0c00d 	mov	ip, sp
         efdb4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         efdb8:	e24cb004 	sub	fp, ip, #4	; 0x4
         efdbc:	e1a04000 	mov	r4, r0
         efdc0:	e590100c 	ldr	r1, [r0, #12]	; fField12
         efdc4:	e5910004 	ldr	r0, [r1, #4]
         efdc8:	e591500c 	ldr	r5, [r1, #12]	; fField12
         efdcc:	e5917014 	ldr	r7, [r1, #20]	; fField20
         efdd0:	e5d420a4 	ldrb	r2, [r4, #164]	; fField164
         efdd4:	e2422001 	sub	r2, r2, #1	; 0x1
         efdd8:	e21220ff 	ands	r2, r2, #255	; 0xff
         efddc:	e5c420a4 	strb	r2, [r4, #164]	; fField164
         efde0:	13a02000 	movne	r2, #0	; 0x0
         efde4:	03a02001 	moveq	r2, #1	; 0x1
         efde8:	e20260ff 	and	r6, r2, #255	; 0xff
         efdec:	e3300000 	teq	r0, #0	; 0x0
         efdf0:	13a07000 	movne	r7, #0	; 0x0
         efdf4:	158400a8 	strne	r0, [r4, #168]	; fField168
         efdf8:	e1a00004 	mov	r0, r4
         efdfc:	eb6506af 	bl	1a318c0 <TIrGlue::$ReleaseEventBlock(TIrEvent *)>
         efe00:	e59400a8 	ldr	r0, [r4, #168]	; fField168
         efe04:	e3300000 	teq	r0, #0	; 0x0
         efe08:	1a000017 	bne	efe6c <TIrGlue::HandlePutComplete(void)+0xbc>
         efe0c:	e59400a0 	ldr	r0, [r4, #160]	; fField160
         efe10:	e0800007 	add	r0, r0, r7
         efe14:	e3360000 	teq	r6, #0	; 0x0
         efe18:	e58400a0 	str	r0, [r4, #160]	; fField160
         efe1c:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         efe20:	e1a00005 	mov	r0, r5
         efe24:	e5951000 	ldr	r1, [r5]
         efe28:	e1a0e00f 	mov	lr, pc
         efe2c:	e281f02c 	add	pc, r1, #44	; 0x2c
         efe30:	e59410a0 	ldr	r1, [r4, #160]	; fField160
         efe34:	e1500001 	cmp	r0, r1
         efe38:	9a00000b 	bls	efe6c <TIrGlue::HandlePutComplete(void)+0xbc>
         efe3c:	e1a00005 	mov	r0, r5
         efe40:	e5951000 	ldr	r1, [r5]
         efe44:	e1a0e00f 	mov	lr, pc
         efe48:	e281f02c 	add	pc, r1, #44	; 0x2c
         efe4c:	e59420a0 	ldr	r2, [r4, #160]	; fField160
         efe50:	e0403002 	sub	r3, r0, r2
         efe54:	e1a01005 	mov	r1, r5
         efe58:	e1a00004 	mov	r0, r4
         efe5c:	eb65068e 	bl	1a3189c <TIrGlue::$InitPutRequests(CBuffer *, unsigned long, unsigned long)>
         efe60:	e58400a8 	str	r0, [r4, #168]	; fField168
         efe64:	e3300000 	teq	r0, #0	; 0x0
         efe68:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         efe6c:	e3360000 	teq	r6, #0	; 0x0
         efe70:	159410a8 	ldrne	r1, [r4, #168]	; fField168
         efe74:	11a00004 	movne	r0, r4
         efe78:	191b68f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, lr}
         efe7c:	1a65027d 	bne	1a30878 <TIrGlue::$PutComplete(long)>
         efe80:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TIrGlue::CancelGetStart(void)
 * Address: 000efe84
 */
TIrGlue::CancelGetStart(void) {
    /*
         efe84:	e1a0c00d 	mov	ip, sp
         efe88:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         efe8c:	e24cb004 	sub	fp, ip, #4	; 0x4
         efe90:	e1a04000 	mov	r4, r0
         efe94:	e3a0200c 	mov	r2, #12	; 0xc
         efe98:	e3a01011 	mov	r1, #17	; 0x11
         efe9c:	eb650685 	bl	1a318b8 <TIrGlue::$GrabEventBlock(unsigned long, unsigned long)>
         efea0:	e1b01000 	movs	r1, r0
         efea4:	15b40030 	ldrne	r0, [r4, #48]!	; fField48
         efea8:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         efeac:	1a651f4d 	bne	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
         efeb0:	01a00004 	moveq	r0, r4
         efeb4:	03a010a8 	moveq	r1, #168	; 0xa8
         efeb8:	02411b07 	subeq	r1, r1, #7168	; 0x1c00
         efebc:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         efec0:	0a65026d 	beq	1a3087c <TIrGlue::$CancelGetComplete(long)>
    */
}

/**
 * Symbol: TIrGlue::HandleCancelGetComplete(void)
 * Address: 000efec4
 */
TIrGlue::HandleCancelGetComplete(void) {
    /*
         efec4:	e1a0c00d 	mov	ip, sp
         efec8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         efecc:	e24cb004 	sub	fp, ip, #4	; 0x4
         efed0:	e1a04000 	mov	r4, r0
         efed4:	e590100c 	ldr	r1, [r0, #12]	; fField12
         efed8:	e5915004 	ldr	r5, [r1, #4]
         efedc:	eb650677 	bl	1a318c0 <TIrGlue::$ReleaseEventBlock(TIrEvent *)>
         efee0:	e1a01005 	mov	r1, r5
         efee4:	e1a00004 	mov	r0, r4
         efee8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         efeec:	ea650262 	b	1a3087c <TIrGlue::$CancelGetComplete(long)>
    */
}

/**
 * Symbol: TIrGlue::CancelPutStart(void)
 * Address: 000efef0
 */
TIrGlue::CancelPutStart(void) {
    /*
         efef0:	e1a0c00d 	mov	ip, sp
         efef4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         efef8:	e24cb004 	sub	fp, ip, #4	; 0x4
         efefc:	e1a04000 	mov	r4, r0
         eff00:	e3a0200c 	mov	r2, #12	; 0xc
         eff04:	e3a01013 	mov	r1, #19	; 0x13
         eff08:	eb65066a 	bl	1a318b8 <TIrGlue::$GrabEventBlock(unsigned long, unsigned long)>
         eff0c:	e1b01000 	movs	r1, r0
         eff10:	15b40030 	ldrne	r0, [r4, #48]!	; fField48
         eff14:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         eff18:	1a651f32 	bne	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
         eff1c:	01a00004 	moveq	r0, r4
         eff20:	03a010a8 	moveq	r1, #168	; 0xa8
         eff24:	02411b07 	subeq	r1, r1, #7168	; 0x1c00
         eff28:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         eff2c:	0a650654 	beq	1a31884 <TIrGlue::$CancelPutComplete(long)>
    */
}

/**
 * Symbol: TIrGlue::HandleCancelPutComplete(void)
 * Address: 000eff30
 */
TIrGlue::HandleCancelPutComplete(void) {
    /*
         eff30:	e1a0c00d 	mov	ip, sp
         eff34:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         eff38:	e24cb004 	sub	fp, ip, #4	; 0x4
         eff3c:	e1a04000 	mov	r4, r0
         eff40:	e590100c 	ldr	r1, [r0, #12]	; fField12
         eff44:	e5915004 	ldr	r5, [r1, #4]
         eff48:	eb65065c 	bl	1a318c0 <TIrGlue::$ReleaseEventBlock(TIrEvent *)>
         eff4c:	e1a01005 	mov	r1, r5
         eff50:	e1a00004 	mov	r0, r4
         eff54:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         eff58:	ea650649 	b	1a31884 <TIrGlue::$CancelPutComplete(long)>
    */
}

/**
 * Symbol: TIrGlue::DisconnectStart(long)
 * Address: 000eff5c
 */
TIrGlue::DisconnectStart(long) {
    /*
         eff5c:	e5801048 	str	r1, [r0, #72]	; fField72
         eff60:	e3a01001 	mov	r1, #1	; 0x1
         eff64:	e5c01035 	strb	r1, [r0, #53]	; fField53
         eff68:	ea65023b 	b	1a3085c <TIrGlue::$HandleDisconnectComplete(void)>
    */
}

/**
 * Symbol: TIrGlue::DeInit(unsigned char)
 * Address: 000eff6c
 */
TIrGlue::DeInit(unsigned char) {
    /*
         eff6c:	e1a0c00d 	mov	ip, sp
         eff70:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         eff74:	e24cb004 	sub	fp, ip, #4	; 0x4
         eff78:	e1a04000 	mov	r4, r0
         eff7c:	e20160ff 	and	r6, r1, #255	; 0xff
         eff80:	e5900030 	ldr	r0, [r0, #48]	; fField48
         eff84:	e3a05000 	mov	r5, #0	; 0x0
         eff88:	e3300000 	teq	r0, #0	; 0x0
         eff8c:	0a000003 	beq	effa0 <TIrGlue::DeInit(unsigned char)+0x34>
         eff90:	e3a01001 	mov	r1, #1	; 0x1
         eff94:	e1a0e00f 	mov	lr, pc
         eff98:	e590f000 	ldr	pc, [r0]
         eff9c:	e5845030 	str	r5, [r4, #48]	; fField48
         effa0:	e5940020 	ldr	r0, [r4, #32]	; fField32
         effa4:	e3300000 	teq	r0, #0	; 0x0
         effa8:	0a000002 	beq	effb8 <TIrGlue::DeInit(unsigned char)+0x4c>
         effac:	e3a01001 	mov	r1, #1	; 0x1
         effb0:	eb650a62 	bl	1a32940 <TIASService::$__dt(void)>
         effb4:	e5845020 	str	r5, [r4, #32]	; fField32
         effb8:	e5940024 	ldr	r0, [r4, #36]	; fField36
         effbc:	e3300000 	teq	r0, #0	; 0x0
         effc0:	0a000003 	beq	effd4 <TIrGlue::DeInit(unsigned char)+0x68>
         effc4:	e3a01001 	mov	r1, #1	; 0x1
         effc8:	e1a0e00f 	mov	lr, pc
         effcc:	e590f000 	ldr	pc, [r0]
         effd0:	e5845024 	str	r5, [r4, #36]	; fField36
         effd4:	e5940028 	ldr	r0, [r4, #40]	; fField40
         effd8:	e3300000 	teq	r0, #0	; 0x0
         effdc:	0a000003 	beq	efff0 <TIrGlue::DeInit(unsigned char)+0x84>
         effe0:	e3a01001 	mov	r1, #1	; 0x1
         effe4:	e1a0e00f 	mov	lr, pc
         effe8:	e590f000 	ldr	pc, [r0]
         effec:	e5845028 	str	r5, [r4, #40]	; fField40
         efff0:	e5940080 	ldr	r0, [r4, #128]	; fField128
         efff4:	e3300000 	teq	r0, #0	; 0x0
         efff8:	0a000003 	beq	f000c <TIrGlue::DeInit(unsigned char)+0xa0>
         efffc:	e3a01001 	mov	r1, #1	; 0x1
         f0000:	e1a0e00f 	mov	lr, pc
         f0004:	e590f000 	ldr	pc, [r0]
         f0008:	e5845080 	str	r5, [r4, #128]	; fField128
         f000c:	e1a01006 	mov	r1, r6
         f0010:	e1a00004 	mov	r0, r4
         f0014:	eb650622 	bl	1a318a4 <TIrGlue::$DeleteDiscoveredDevicesList(unsigned char)>
         f0018:	e1a01006 	mov	r1, r6
         f001c:	e1a00004 	mov	r0, r4
         f0020:	eb650623 	bl	1a318b4 <TIrGlue::$DeleteEventBlockList(unsigned char)>
         f0024:	e3360000 	teq	r6, #0	; 0x0
         f0028:	0a000014 	beq	f0080 <TIrGlue::DeInit(unsigned char)+0x114>
         f002c:	e5940018 	ldr	r0, [r4, #24]	; fField24
         f0030:	e3300000 	teq	r0, #0	; 0x0
         f0034:	0a000003 	beq	f0048 <TIrGlue::DeInit(unsigned char)+0xdc>
         f0038:	e3a01001 	mov	r1, #1	; 0x1
         f003c:	e1a0e00f 	mov	lr, pc
         f0040:	e590f000 	ldr	pc, [r0]
         f0044:	e5845018 	str	r5, [r4, #24]	; fField24
         f0048:	e594001c 	ldr	r0, [r4, #28]	; fField28
         f004c:	e3300000 	teq	r0, #0	; 0x0
         f0050:	0a000003 	beq	f0064 <TIrGlue::DeInit(unsigned char)+0xf8>
         f0054:	e3a01001 	mov	r1, #1	; 0x1
         f0058:	e1a0e00f 	mov	lr, pc
         f005c:	e590f000 	ldr	pc, [r0]
         f0060:	e584501c 	str	r5, [r4, #28]	; fField28
         f0064:	e59400b0 	ldr	r0, [r4, #176]	; fField176
         f0068:	e3300000 	teq	r0, #0	; 0x0
         f006c:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         f0070:	e3a01001 	mov	r1, #1	; 0x1
         f0074:	eb6bd482 	bl	1be5284 <CList::$__dt(void)>
         f0078:	e5a450b0 	str	r5, [r4, #176]!	; fField176
         f007c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         f0080:	e594001c 	ldr	r0, [r4, #28]	; fField28
         f0084:	e3300000 	teq	r0, #0	; 0x0
         f0088:	1b651266 	blne	1a34a28 <TIrLAP::$Reset(void)>
         f008c:	e5940018 	ldr	r0, [r4, #24]	; fField24
         f0090:	e3300000 	teq	r0, #0	; 0x0
         f0094:	1b65167e 	blne	1a35a94 <TIrLMP::$Reset(void)>
         f0098:	e5b400b0 	ldr	r0, [r4, #176]!	; fField176
         f009c:	e3a01000 	mov	r1, #0	; 0x0
         f00a0:	e5902000 	ldr	r2, [r0]
         f00a4:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         f00a8:	ea6bf161 	b	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
    */
}

/**
 * Symbol: TIrGlue::HandleDisconnectComplete(void)
 * Address: 000f00ac
 */
TIrGlue::HandleDisconnectComplete(void) {
    /*
         f00ac:	e1a0c00d 	mov	ip, sp
         f00b0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         f00b4:	e24cb004 	sub	fp, ip, #4	; 0x4
         f00b8:	e1a04000 	mov	r4, r0
         f00bc:	e5d00035 	ldrb	r0, [r0, #53]	; fField53
         f00c0:	e3a06006 	mov	r6, #6	; 0x6
         f00c4:	e3300001 	teq	r0, #1	; 0x1
         f00c8:	13a00017 	movne	r0, #23	; 0x17
         f00cc:	1594100c 	ldrne	r1, [r4, #12]	; fField12
         f00d0:	15c10000 	strneb	r0, [r1]
         f00d4:	1a000008 	bne	f00fc <TIrGlue::HandleDisconnectComplete(void)+0x50>
         f00d8:	e1a00004 	mov	r0, r4
         f00dc:	e3a0200c 	mov	r2, #12	; 0xc
         f00e0:	e3a01017 	mov	r1, #23	; 0x17
         f00e4:	eb6505f3 	bl	1a318b8 <TIrGlue::$GrabEventBlock(unsigned long, unsigned long)>
         f00e8:	e1b01000 	movs	r1, r0
         f00ec:	05c46035 	streqb	r6, [r4, #53]	; fField53
         f00f0:	0a000003 	beq	f0104 <TIrGlue::HandleDisconnectComplete(void)+0x58>
         f00f4:	e3a00002 	mov	r0, #2	; 0x2
         f00f8:	e5c40035 	strb	r0, [r4, #53]	; fField53
         f00fc:	e5940048 	ldr	r0, [r4, #72]	; fField72
         f0100:	e5810004 	str	r0, [r1, #4]
         f0104:	e5d40035 	ldrb	r0, [r4, #53]	; fField53
         f0108:	e2400002 	sub	r0, r0, #2	; 0x2
         f010c:	e3a05000 	mov	r5, #0	; 0x0
         f0110:	e3500004 	cmp	r0, #4	; 0x4
         f0114:	908ff100 	addls	pc, pc, r0, lsl #2
         f0118:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         f011c:	ea000010 	b	f0164 <TIrGlue::HandleDisconnectComplete(void)+0xb8>
         f0120:	ea000014 	b	f0178 <TIrGlue::HandleDisconnectComplete(void)+0xcc>
         f0124:	ea000018 	b	f018c <TIrGlue::HandleDisconnectComplete(void)+0xe0>
         f0128:	ea00001c 	b	f01a0 <TIrGlue::HandleDisconnectComplete(void)+0xf4>
         f012c:	e5c45035 	strb	r5, [r4, #53]	; fField53
         f0130:	e1a00004 	mov	r0, r4
         f0134:	eb6505e1 	bl	1a318c0 <TIrGlue::$ReleaseEventBlock(TIrEvent *)>
         f0138:	e5c45034 	strb	r5, [r4, #52]	; fField52
         f013c:	e2840070 	add	r0, r4, #112	; 0x70
         f0140:	eb651e90 	bl	1a37b88 <TIrQOS::$Reset(void)>
         f0144:	e2840078 	add	r0, r4, #120	; 0x78
         f0148:	eb651e8e 	bl	1a37b88 <TIrQOS::$Reset(void)>
         f014c:	e1a00004 	mov	r0, r4
         f0150:	e3a01000 	mov	r1, #0	; 0x0
         f0154:	eb6505c9 	bl	1a31880 <TIrGlue::$DeInit(unsigned char)>
         f0158:	e1a00004 	mov	r0, r4
         f015c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         f0160:	ea6505c8 	b	1a31888 <TIrGlue::$DisconnectComplete(void)>
         f0164:	e3a00003 	mov	r0, #3	; 0x3
         f0168:	e5c40035 	strb	r0, [r4, #53]	; fField53
         f016c:	e5940030 	ldr	r0, [r4, #48]	; fField48
         f0170:	e3300000 	teq	r0, #0	; 0x0
         f0174:	1a00000c 	bne	f01ac <TIrGlue::HandleDisconnectComplete(void)+0x100>
         f0178:	e3a00004 	mov	r0, #4	; 0x4
         f017c:	e5c40035 	strb	r0, [r4, #53]	; fField53
         f0180:	e5940028 	ldr	r0, [r4, #40]	; fField40
         f0184:	e3300000 	teq	r0, #0	; 0x0
         f0188:	1a000007 	bne	f01ac <TIrGlue::HandleDisconnectComplete(void)+0x100>
         f018c:	e3a00005 	mov	r0, #5	; 0x5
         f0190:	e5c40035 	strb	r0, [r4, #53]	; fField53
         f0194:	e5940024 	ldr	r0, [r4, #36]	; fField36
         f0198:	e3300000 	teq	r0, #0	; 0x0
         f019c:	1a000002 	bne	f01ac <TIrGlue::HandleDisconnectComplete(void)+0x100>
         f01a0:	e5c46035 	strb	r6, [r4, #53]	; fField53
         f01a4:	e5815008 	str	r5, [r1, #8]
         f01a8:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
         f01ac:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         f01b0:	ea651e8c 	b	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
    */
}

/**
 * Symbol: TIrGlue::DiscoverComplete(long, CList *)
 * Address: 000f01b4
 */
TIrGlue::DiscoverComplete(long, CList *) {
    /*
         f01b4:	e5900014 	ldr	r0, [r0, #20]	; fField20
         f01b8:	ea64f966 	b	1a2e758 <TIrDATool::$DoDiscoverComplete(long, CList *)>
    */
}

/**
 * Symbol: TIrGlue::LSAPLookupComplete(long, unsigned long)
 * Address: 000f01bc
 */
TIrGlue::LSAPLookupComplete(long, unsigned long) {
    /*
         f01bc:	e5900014 	ldr	r0, [r0, #20]	; fField20
         f01c0:	ea64f965 	b	1a2e75c <TIrDATool::$DoLSAPLookupComplete(long, unsigned long)>
    */
}

/**
 * Symbol: TIrGlue::ConnectComplete(long)
 * Address: 000f01c4
 */
TIrGlue::ConnectComplete(long) {
    /*
         f01c4:	e5900014 	ldr	r0, [r0, #20]	; fField20
         f01c8:	ea64f965 	b	1a2e764 <TIrDATool::$DoConnectComplete(long)>
    */
}

/**
 * Symbol: TIrGlue::ListenComplete(long)
 * Address: 000f01cc
 */
TIrGlue::ListenComplete(long) {
    /*
         f01cc:	e5900014 	ldr	r0, [r0, #20]	; fField20
         f01d0:	ea64f965 	b	1a2e76c <TIrDATool::$DoListenComplete(long)>
    */
}

/**
 * Symbol: TIrGlue::AcceptComplete(long)
 * Address: 000f01d4
 */
TIrGlue::AcceptComplete(long) {
    /*
         f01d4:	e5900014 	ldr	r0, [r0, #20]	; fField20
         f01d8:	ea64f965 	b	1a2e774 <TIrDATool::$DoAcceptComplete(long)>
    */
}

/**
 * Symbol: TIrGlue::GetComplete(long)
 * Address: 000f01dc
 */
TIrGlue::GetComplete(long) {
    /*
         f01dc:	e1a0c00d 	mov	ip, sp
         f01e0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f01e4:	e24cb004 	sub	fp, ip, #4	; 0x4
         f01e8:	e1a04000 	mov	r4, r0
         f01ec:	e1a05001 	mov	r5, r1
         f01f0:	e590209c 	ldr	r2, [r0, #156]	; fField156
         f01f4:	e5900014 	ldr	r0, [r0, #20]	; fField20
         f01f8:	eb64fd62 	bl	1a2f788 <TIrDATool::$DoGetDataComplete(long, unsigned long)>
         f01fc:	e3a00000 	mov	r0, #0	; 0x0
         f0200:	e3350000 	teq	r5, #0	; 0x0
         f0204:	e584009c 	str	r0, [r4, #156]	; fField156
         f0208:	1a00000d 	bne	f0244 <TIrGlue::GetComplete(long)+0x68>
         f020c:	e5940080 	ldr	r0, [r4, #128]	; fField128
         f0210:	e3300000 	teq	r0, #0	; 0x0
         f0214:	0a00000a 	beq	f0244 <TIrGlue::GetComplete(long)+0x68>
         f0218:	e5901000 	ldr	r1, [r0]
         f021c:	e1a0e00f 	mov	lr, pc
         f0220:	e281f02c 	add	pc, r1, #44	; 0x2c
         f0224:	e1a05000 	mov	r5, r0
         f0228:	e5941080 	ldr	r1, [r4, #128]	; fField128
         f022c:	e1a00001 	mov	r0, r1
         f0230:	e5911000 	ldr	r1, [r1]
         f0234:	e1a0e00f 	mov	lr, pc
         f0238:	e281f03c 	add	pc, r1, #60	; 0x3c
         f023c:	e0550000 	subs	r0, r5, r0
         f0240:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         f0244:	e1a00004 	mov	r0, r4
         f0248:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         f024c:	ea65058f 	b	1a31890 <TIrGlue::$ResetRecvBufferState(void)>
    */
}

/**
 * Symbol: TIrGlue::PutComplete(long)
 * Address: 000f0250
 */
TIrGlue::PutComplete(long) {
    /*
         f0250:	e59020a0 	ldr	r2, [r0, #160]	; fField160
         f0254:	e5900014 	ldr	r0, [r0, #20]	; fField20
         f0258:	ea64fd48 	b	1a2f780 <TIrDATool::$DoPutDataComplete(long, unsigned long)>
    */
}

/**
 * Symbol: TIrGlue::CancelGetComplete(long)
 * Address: 000f025c
 */
TIrGlue::CancelGetComplete(long) {
    /*
         f025c:	e5900014 	ldr	r0, [r0, #20]	; fField20
         f0260:	ea64fd4c 	b	1a2f798 <TIrDATool::$DoCancelGetComplete(long)>
    */
}

/**
 * Symbol: TIrGlue::CancelPutComplete(long)
 * Address: 000f0264
 */
TIrGlue::CancelPutComplete(long) {
    /*
         f0264:	e5900014 	ldr	r0, [r0, #20]	; fField20
         f0268:	ea64fd48 	b	1a2f790 <TIrDATool::$DoCancelPutComplete(long)>
    */
}

/**
 * Symbol: TIrGlue::DeleteDiscoveredDevicesList(unsigned char)
 * Address: 000f026c
 */
TIrGlue::DeleteDiscoveredDevicesList(unsigned char) {
    /*
         f026c:	e1a0c00d 	mov	ip, sp
         f0270:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f0274:	e24cb004 	sub	fp, ip, #4	; 0x4
         f0278:	e1a04000 	mov	r4, r0
         f027c:	e20150ff 	and	r5, r1, #255	; 0xff
         f0280:	e590006c 	ldr	r0, [r0, #108]	; fField108
         f0284:	e3300000 	teq	r0, #0	; 0x0
         f0288:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         f028c:	e594006c 	ldr	r0, [r4, #108]	; fField108
         f0290:	e5901000 	ldr	r1, [r0]
         f0294:	e2411001 	sub	r1, r1, #1	; 0x1
         f0298:	eb6bd829 	bl	1be6344 <CList::$At(long)>
         f029c:	e3300000 	teq	r0, #0	; 0x0
         f02a0:	0a000007 	beq	f02c4 <TIrGlue::DeleteDiscoveredDevicesList(unsigned char)+0x58>
         f02a4:	e3a01001 	mov	r1, #1	; 0x1
         f02a8:	ebfffc3e 	bl	ef3a8 <TIrDscInfo::__dt(void)>
         f02ac:	e594006c 	ldr	r0, [r4, #108]	; fField108
         f02b0:	e5901000 	ldr	r1, [r0]
         f02b4:	e2411001 	sub	r1, r1, #1	; 0x1
         f02b8:	e3a02001 	mov	r2, #1	; 0x1
         f02bc:	eb6bf0dc 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         f02c0:	eafffff1 	b	f028c <TIrGlue::DeleteDiscoveredDevicesList(unsigned char)+0x20>
         f02c4:	e3350000 	teq	r5, #0	; 0x0
         f02c8:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         f02cc:	e594006c 	ldr	r0, [r4, #108]	; fField108
         f02d0:	e3300000 	teq	r0, #0	; 0x0
         f02d4:	13a01001 	movne	r1, #1	; 0x1
         f02d8:	1b6bd3e9 	blne	1be5284 <CList::$__dt(void)>
         f02dc:	e3a00000 	mov	r0, #0	; 0x0
         f02e0:	e5a4006c 	str	r0, [r4, #108]!	; fField108
         f02e4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TIrGlue::DisconnectComplete(void)
 * Address: 000f02e8
 */
TIrGlue::DisconnectComplete(void) {
    /*
         f02e8:	e5900014 	ldr	r0, [r0, #20]	; fField20
         f02ec:	e5901000 	ldr	r1, [r0]
         f02f0:	e281ff47 	add	pc, r1, #284	; 0x11c
    */
}

/**
 * Symbol: TIrGlue::InitBuffers(void)
 * Address: 000f02f4
 */
TIrGlue::InitBuffers(void) {
    /*
         f02f4:	e1a0c00d 	mov	ip, sp
         f02f8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f02fc:	e24cb004 	sub	fp, ip, #4	; 0x4
         f0300:	e1a04000 	mov	r4, r0
         f0304:	e2800078 	add	r0, r0, #120	; 0x78
         f0308:	e1a05000 	mov	r5, r0
         f030c:	eb651a14 	bl	1a36b64 <TIrQOS::$GetWindowSize(void)>
         f0310:	e5c40036 	strb	r0, [r4, #54]
         f0314:	e1a00005 	mov	r0, r5
         f0318:	eb651a10 	bl	1a36b60 <TIrQOS::$GetDataSize(void)>
         f031c:	e2400002 	sub	r0, r0, #2	; 0x2
         f0320:	e584003c 	str	r0, [r4, #60]	; fField60
         f0324:	e2840070 	add	r0, r4, #112	; 0x70
         f0328:	eb651a0c 	bl	1a36b60 <TIrQOS::$GetDataSize(void)>
         f032c:	e2400002 	sub	r0, r0, #2	; 0x2
         f0330:	e5840084 	str	r0, [r4, #132]	; fField132
         f0334:	e3a00000 	mov	r0, #0	; 0x0
         f0338:	eb6bcfb1 	bl	1be4204 <CBufferSegment::$__ct(void)>
         f033c:	e5840080 	str	r0, [r4, #128]	; fField128
         f0340:	e3300000 	teq	r0, #0	; 0x0
         f0344:	03a000a8 	moveq	r0, #168	; 0xa8
         f0348:	02400b07 	subeq	r0, r0, #7168	; 0x1c00
         f034c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         f0350:	e5941084 	ldr	r1, [r4, #132]	; fField132
         f0354:	eb6be453 	bl	1be94a8 <CBufferSegment::$Init(long)>
         f0358:	e3300000 	teq	r0, #0	; 0x0
         f035c:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         f0360:	e1a00004 	mov	r0, r4
         f0364:	eb650549 	bl	1a31890 <TIrGlue::$ResetRecvBufferState(void)>
         f0368:	e3a00000 	mov	r0, #0	; 0x0
         f036c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TIrGlue::ResetRecvBufferState(void)
 * Address: 000f0370
 */
TIrGlue::ResetRecvBufferState(void) {
    /*
         f0370:	e1a0c00d 	mov	ip, sp
         f0374:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f0378:	e24cb004 	sub	fp, ip, #4	; 0x4
         f037c:	e1a04000 	mov	r4, r0
         f0380:	e5903080 	ldr	r3, [r0, #128]	; fField128
         f0384:	e3330000 	teq	r3, #0	; 0x0
         f0388:	0a000005 	beq	f03a4 <TIrGlue::ResetRecvBufferState(void)+0x34>
         f038c:	e1a00003 	mov	r0, r3
         f0390:	e3a02001 	mov	r2, #1	; 0x1
         f0394:	e5941084 	ldr	r1, [r4, #132]	; fField132
         f0398:	e5933000 	ldr	r3, [r3]
         f039c:	e1a0e00f 	mov	lr, pc
         f03a0:	e283f034 	add	pc, r3, #52	; 0x34
         f03a4:	e3a00000 	mov	r0, #0	; 0x0
         f03a8:	e584009c 	str	r0, [r4, #156]	; fField156
         f03ac:	e3a00001 	mov	r0, #1	; 0x1
         f03b0:	e5c4008c 	strb	r0, [r4, #140]	; fField140
         f03b4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TIrGlue::InitGetRequest(TIrDataXferEvent *)
 * Address: 000f03b8
 */
TIrGlue::InitGetRequest(TIrDataXferEvent *) {
    /*
         f03b8:	e1a0c00d 	mov	ip, sp
         f03bc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         f03c0:	e24cb004 	sub	fp, ip, #4	; 0x4
         f03c4:	e1a04000 	mov	r4, r0
         f03c8:	e1a05001 	mov	r5, r1
         f03cc:	e5900090 	ldr	r0, [r0, #144]	; fField144
         f03d0:	e5901000 	ldr	r1, [r0]
         f03d4:	e1a0e00f 	mov	lr, pc
         f03d8:	e281f02c 	add	pc, r1, #44	; 0x2c
         f03dc:	e1a06000 	mov	r6, r0
         f03e0:	e5941090 	ldr	r1, [r4, #144]	; fField144
         f03e4:	e1a00001 	mov	r0, r1
         f03e8:	e5911000 	ldr	r1, [r1]
         f03ec:	e1a0e00f 	mov	lr, pc
         f03f0:	e281f03c 	add	pc, r1, #60	; 0x3c
         f03f4:	e0460000 	sub	r0, r6, r0
         f03f8:	e5941084 	ldr	r1, [r4, #132]	; fField132
         f03fc:	e1510000 	cmp	r1, r0
         f0400:	83a01000 	movhi	r1, #0	; 0x0
         f0404:	93a01001 	movls	r1, #1	; 0x1
         f0408:	e5c4108c 	strb	r1, [r4, #140]	; fField140
         f040c:	e3a0100b 	mov	r1, #11	; 0xb
         f0410:	e5c51000 	strb	r1, [r5]
         f0414:	e3a06000 	mov	r6, #0	; 0x0
         f0418:	e5856004 	str	r6, [r5, #4]
         f041c:	e5d4108c 	ldrb	r1, [r4, #140]	; fField140
         f0420:	e3310000 	teq	r1, #0	; 0x0
         f0424:	0a000004 	beq	f043c <TIrGlue::InitGetRequest(TIrDataXferEvent *)+0x84>
         f0428:	e5941090 	ldr	r1, [r4, #144]	; fField144
         f042c:	e585100c 	str	r1, [r5, #12]	; fField12
         f0430:	e594109c 	ldr	r1, [r4, #156]	; fField156
         f0434:	e5851010 	str	r1, [r5, #16]
         f0438:	ea000008 	b	f0460 <TIrGlue::InitGetRequest(TIrDataXferEvent *)+0xa8>
         f043c:	e5940080 	ldr	r0, [r4, #128]	; fField128
         f0440:	e5901000 	ldr	r1, [r0]
         f0444:	e1a0e00f 	mov	lr, pc
         f0448:	e281f028 	add	pc, r1, #40	; 0x28
         f044c:	e5940080 	ldr	r0, [r4, #128]	; fField128
         f0450:	e285500c 	add	r5, r5, #12	; 0xc
         f0454:	e8850041 	stmia	r5, {r0, r6}
         f0458:	e245500c 	sub	r5, r5, #12	; 0xc
         f045c:	e5940084 	ldr	r0, [r4, #132]	; fField132
         f0460:	e5850014 	str	r0, [r5, #20]	; fField20
         f0464:	e1a01005 	mov	r1, r5
         f0468:	e5b40030 	ldr	r0, [r4, #48]!	; fField48
         f046c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         f0470:	ea651ddc 	b	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
    */
}

/**
 * Symbol: TIrGlue::CheckGetDone(unsigned long, unsigned char)
 * Address: 000f0474
 */
TIrGlue::CheckGetDone(unsigned long, unsigned char) {
    /*
         f0474:	e1a0c00d 	mov	ip, sp
         f0478:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         f047c:	e24cb004 	sub	fp, ip, #4	; 0x4
         f0480:	e1a04000 	mov	r4, r0
         f0484:	e20200ff 	and	r0, r2, #255	; 0xff
         f0488:	e5d4208c 	ldrb	r2, [r4, #140]	; fField140
         f048c:	e3320000 	teq	r2, #0	; 0x0
         f0490:	1594009c 	ldrne	r0, [r4, #156]	; fField156
         f0494:	10800001 	addne	r0, r0, r1
         f0498:	1a00003b 	bne	f058c <TIrGlue::CheckGetDone(unsigned long, unsigned char)+0x118>
         f049c:	e3300000 	teq	r0, #0	; 0x0
         f04a0:	0a00000d 	beq	f04dc <TIrGlue::CheckGetDone(unsigned long, unsigned char)+0x68>
         f04a4:	e5940084 	ldr	r0, [r4, #132]	; fField132
         f04a8:	e0401001 	sub	r1, r0, r1
         f04ac:	e5943080 	ldr	r3, [r4, #128]	; fField128
         f04b0:	e1a00003 	mov	r0, r3
         f04b4:	e3a02001 	mov	r2, #1	; 0x1
         f04b8:	e5933000 	ldr	r3, [r3]
         f04bc:	e1a0e00f 	mov	lr, pc
         f04c0:	e283f034 	add	pc, r3, #52	; 0x34
         f04c4:	e3e02000 	mvn	r2, #0	; 0x0
         f04c8:	e3a01000 	mov	r1, #0	; 0x0
         f04cc:	e5940080 	ldr	r0, [r4, #128]	; fField128
         f04d0:	e5903000 	ldr	r3, [r0]
         f04d4:	e1a0e00f 	mov	lr, pc
         f04d8:	e283f038 	add	pc, r3, #56	; 0x38
         f04dc:	e5940090 	ldr	r0, [r4, #144]	; fField144
         f04e0:	e5901000 	ldr	r1, [r0]
         f04e4:	e1a0e00f 	mov	lr, pc
         f04e8:	e281f02c 	add	pc, r1, #44	; 0x2c
         f04ec:	e1a05000 	mov	r5, r0
         f04f0:	e5941090 	ldr	r1, [r4, #144]	; fField144
         f04f4:	e1a00001 	mov	r0, r1
         f04f8:	e5911000 	ldr	r1, [r1]
         f04fc:	e1a0e00f 	mov	lr, pc
         f0500:	e281f03c 	add	pc, r1, #60	; 0x3c
         f0504:	e0456000 	sub	r6, r5, r0
         f0508:	e5940080 	ldr	r0, [r4, #128]	; fField128
         f050c:	e5901000 	ldr	r1, [r0]
         f0510:	e1a0e00f 	mov	lr, pc
         f0514:	e281f03c 	add	pc, r1, #60	; 0x3c
         f0518:	e1a05000 	mov	r5, r0
         f051c:	e5940080 	ldr	r0, [r4, #128]	; fField128
         f0520:	e5901000 	ldr	r1, [r0]
         f0524:	e1a0e00f 	mov	lr, pc
         f0528:	e281f02c 	add	pc, r1, #44	; 0x2c
         f052c:	e0400005 	sub	r0, r0, r5
         f0530:	e3500000 	cmp	r0, #0	; 0x0
         f0534:	9a000015 	bls	f0590 <TIrGlue::CheckGetDone(unsigned long, unsigned char)+0x11c>
         f0538:	e1500006 	cmp	r0, r6
         f053c:	a1a00006 	movge	r0, r6
         f0540:	e1a02000 	mov	r2, r0
         f0544:	e5940080 	ldr	r0, [r4, #128]	; fField128
         f0548:	e5943090 	ldr	r3, [r4, #144]	; fField144
         f054c:	e5900010 	ldr	r0, [r0, #16]
         f0550:	e0801005 	add	r1, r0, r5
         f0554:	e1a00003 	mov	r0, r3
         f0558:	e5933000 	ldr	r3, [r3]
         f055c:	e1a0e00f 	mov	lr, pc
         f0560:	e283f020 	add	pc, r3, #32	; 0x20
         f0564:	e1a05000 	mov	r5, r0
         f0568:	e1a01000 	mov	r1, r0
         f056c:	e5943080 	ldr	r3, [r4, #128]	; fField128
         f0570:	e1a00003 	mov	r0, r3
         f0574:	e3a02000 	mov	r2, #0	; 0x0
         f0578:	e5933000 	ldr	r3, [r3]
         f057c:	e1a0e00f 	mov	lr, pc
         f0580:	e283f038 	add	pc, r3, #56	; 0x38
         f0584:	e594009c 	ldr	r0, [r4, #156]	; fField156
         f0588:	e0800005 	add	r0, r0, r5
         f058c:	e584009c 	str	r0, [r4, #156]	; fField156
         f0590:	e5b41088 	ldr	r1, [r4, #136]!
         f0594:	e5940014 	ldr	r0, [r4, #20]	; fField20
         f0598:	e1500001 	cmp	r0, r1
         f059c:	33a00000 	movcc	r0, #0	; 0x0
         f05a0:	23a00001 	movcs	r0, #1	; 0x1
         f05a4:	e20000ff 	and	r0, r0, #255	; 0xff
         f05a8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TIrGlue::InitPutRequests(CBuffer *, unsigned long, unsigned long)
 * Address: 000f05ac
 */
TIrGlue::InitPutRequests(CBuffer *, unsigned long, unsigned long) {
    /*
         f05ac:	e1a0c00d 	mov	ip, sp
         f05b0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         f05b4:	e24cb004 	sub	fp, ip, #4	; 0x4
         f05b8:	e1a04000 	mov	r4, r0
         f05bc:	e1a07001 	mov	r7, r1
         f05c0:	e1a06002 	mov	r6, r2
         f05c4:	e1a05003 	mov	r5, r3
         f05c8:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         f05cc:	e5d08036 	ldrb	r8, [r0, #54]
         f05d0:	ea000014 	b	f0628 <TIrGlue::InitPutRequests(CBuffer *, unsigned long, unsigned long)+0x7c>
         f05d4:	e1a00004 	mov	r0, r4
         f05d8:	e3a0201c 	mov	r2, #28	; 0x1c
         f05dc:	e3a0100d 	mov	r1, #13	; 0xd
         f05e0:	eb6504b4 	bl	1a318b8 <TIrGlue::$GrabEventBlock(unsigned long, unsigned long)>
         f05e4:	e3300000 	teq	r0, #0	; 0x0
         f05e8:	0a00001e 	beq	f0668 <TIrGlue::InitPutRequests(CBuffer *, unsigned long, unsigned long)+0xbc>
         f05ec:	e1a01005 	mov	r1, r5
         f05f0:	e5806010 	str	r6, [r0, #16]
         f05f4:	e580700c 	str	r7, [r0, #12]	; fField12
         f05f8:	e594203c 	ldr	r2, [r4, #60]	; fField60
         f05fc:	e1550002 	cmp	r5, r2
         f0600:	a1a01002 	movge	r1, r2
         f0604:	e5801014 	str	r1, [r0, #20]	; fField20
         f0608:	e5d410a4 	ldrb	r1, [r4, #164]	; fField164
         f060c:	e2812001 	add	r2, r1, #1	; 0x1
         f0610:	e5c420a4 	strb	r2, [r4, #164]	; fField164
         f0614:	e78d0101 	str	r0, [sp, r1, lsl #2]
         f0618:	e2488001 	sub	r8, r8, #1	; 0x1
         f061c:	e5900014 	ldr	r0, [r0, #20]	; fField20
         f0620:	e0806006 	add	r6, r0, r6
         f0624:	e0455000 	sub	r5, r5, r0
         f0628:	e3580000 	cmp	r8, #0	; 0x0
         f062c:	83550000 	cmphi	r5, #0	; 0x0
         f0630:	8affffe7 	bhi	f05d4 <TIrGlue::InitPutRequests(CBuffer *, unsigned long, unsigned long)+0x28>
         f0634:	e3a05000 	mov	r5, #0	; 0x0
         f0638:	e5d400a4 	ldrb	r0, [r4, #164]	; fField164
         f063c:	e3500000 	cmp	r0, #0	; 0x0
         f0640:	9a000006 	bls	f0660 <TIrGlue::InitPutRequests(CBuffer *, unsigned long, unsigned long)+0xb4>
         f0644:	e79d1105 	ldr	r1, [sp, r5, lsl #2]
         f0648:	e5940030 	ldr	r0, [r4, #48]	; fField48
         f064c:	eb651d65 	bl	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
         f0650:	e2855001 	add	r5, r5, #1	; 0x1
         f0654:	e5d400a4 	ldrb	r0, [r4, #164]	; fField164
         f0658:	e1500005 	cmp	r0, r5
         f065c:	8afffff8 	bhi	f0644 <TIrGlue::InitPutRequests(CBuffer *, unsigned long, unsigned long)+0x98>
         f0660:	e3a00000 	mov	r0, #0	; 0x0
         f0664:	ea00000d 	b	f06a0 <TIrGlue::InitPutRequests(CBuffer *, unsigned long, unsigned long)+0xf4>
         f0668:	e5d400a4 	ldrb	r0, [r4, #164]	; fField164
         f066c:	e3500000 	cmp	r0, #0	; 0x0
         f0670:	da000008 	ble	f0698 <TIrGlue::InitPutRequests(CBuffer *, unsigned long, unsigned long)+0xec>
         f0674:	e5d400a4 	ldrb	r0, [r4, #164]	; fField164
         f0678:	e2401001 	sub	r1, r0, #1	; 0x1
         f067c:	e5c410a4 	strb	r1, [r4, #164]	; fField164
         f0680:	e79d1100 	ldr	r1, [sp, r0, lsl #2]
         f0684:	e1a00004 	mov	r0, r4
         f0688:	eb65048c 	bl	1a318c0 <TIrGlue::$ReleaseEventBlock(TIrEvent *)>
         f068c:	e5d400a4 	ldrb	r0, [r4, #164]	; fField164
         f0690:	e3500000 	cmp	r0, #0	; 0x0
         f0694:	cafffff6 	bgt	f0674 <TIrGlue::InitPutRequests(CBuffer *, unsigned long, unsigned long)+0xc8>
         f0698:	e3a000a8 	mov	r0, #168	; 0xa8
         f069c:	e2400b07 	sub	r0, r0, #7168	; 0x1c00
         f06a0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TIrGlue::NextState(unsigned long)
 * Address: 000f06a4
 */
TIrGlue::NextState(unsigned long) {
    /*
         f06a4:	e5d02034 	ldrb	r2, [r0, #52]	; fField52
         f06a8:	e3520006 	cmp	r2, #6	; 0x6
         f06ac:	908ff102 	addls	pc, pc, r2, lsl #2
         f06b0:	e1a0f00e 	mov	pc, lr
         f06b4:	ea000005 	b	f06d0 <TIrGlue::NextState(unsigned long)+0x2c>
         f06b8:	ea000005 	b	f06d4 <TIrGlue::NextState(unsigned long)+0x30>
         f06bc:	ea000005 	b	f06d8 <TIrGlue::NextState(unsigned long)+0x34>
         f06c0:	ea000005 	b	f06dc <TIrGlue::NextState(unsigned long)+0x38>
         f06c4:	ea000005 	b	f06e0 <TIrGlue::NextState(unsigned long)+0x3c>
         f06c8:	ea000005 	b	f06e4 <TIrGlue::NextState(unsigned long)+0x40>
         f06cc:	ea00004e 	b	f080c <TIrGlue::HandleConnectedStateEvent(unsigned long)>
         f06d0:	ea000004 	b	f06e8 <TIrGlue::HandleDisconnectedStateEvent(unsigned long)>
         f06d4:	ea000006 	b	f06f4 <TIrGlue::HandleDiscoveringStateEvent(unsigned long)>
         f06d8:	ea00000a 	b	f0708 <TIrGlue::HandleNameServerLookupStateEvent(unsigned long)>
         f06dc:	ea00003b 	b	f07d0 <TIrGlue::HandleConnectingStateEvent(unsigned long)>
         f06e0:	ea00003f 	b	f07e4 <TIrGlue::HandleListeningStateEvent(unsigned long)>
         f06e4:	ea000043 	b	f07f8 <TIrGlue::HandleAcceptingStateEvent(unsigned long)>
    */
}

/**
 * Symbol: TIrGlue::HandleDisconnectedStateEvent(unsigned long)
 * Address: 000f06e8
 */
TIrGlue::HandleDisconnectedStateEvent(unsigned long) {
    /*
         f06e8:	e3310018 	teq	r1, #24	; 0x18
         f06ec:	0a65005a 	beq	1a3085c <TIrGlue::$HandleDisconnectComplete(void)>
         f06f0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrGlue::HandleDiscoveringStateEvent(unsigned long)
 * Address: 000f06f4
 */
TIrGlue::HandleDiscoveringStateEvent(unsigned long) {
    /*
         f06f4:	e3310004 	teq	r1, #4	; 0x4
         f06f8:	0a650042 	beq	1a30808 <TIrGlue::$HandleDiscoverComplete(void)>
         f06fc:	e3310018 	teq	r1, #24	; 0x18
         f0700:	0a650055 	beq	1a3085c <TIrGlue::$HandleDisconnectComplete(void)>
         f0704:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrGlue::HandleNameServerLookupStateEvent(unsigned long)
 * Address: 000f0708
 */
TIrGlue::HandleNameServerLookupStateEvent(unsigned long) {
    /*
         f0708:	e3310006 	teq	r1, #6	; 0x6
         f070c:	0a65003f 	beq	1a30810 <TIrGlue::$HandleNameServerConnectComplete(void)>
         f0710:	e3310010 	teq	r1, #16	; 0x10
         f0714:	0a65003e 	beq	1a30814 <TIrGlue::$HandleNameServerLookupComplete(void)>
         f0718:	e3310016 	teq	r1, #22	; 0x16
         f071c:	0a65003d 	beq	1a30818 <TIrGlue::$HandleNameServerReleaseComplete(void)>
         f0720:	e3310018 	teq	r1, #24	; 0x18
         f0724:	0a65004c 	beq	1a3085c <TIrGlue::$HandleDisconnectComplete(void)>
         f0728:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrGlue::InitNameService(void)
 * Address: 000f072c
 */
TIrGlue::InitNameService(void) {
    /*
         f072c:	e1a0c00d 	mov	ip, sp
         f0730:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         f0734:	e24cb004 	sub	fp, ip, #4	; 0x4
         f0738:	e1a04000 	mov	r4, r0
         f073c:	e3a00000 	mov	r0, #0	; 0x0
         f0740:	eb000477 	bl	f1924 <TIASService::__ct(void)>
         f0744:	e5840020 	str	r0, [r4, #32]	; fField32
         f0748:	e3300000 	teq	r0, #0	; 0x0
         f074c:	03a000a8 	moveq	r0, #168	; 0xa8
         f0750:	02400b07 	subeq	r0, r0, #7168	; 0x1c00
         f0754:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         f0758:	e59f3060 	ldr	r3, [pc, #60]	; f07c0 <TIrGlue::InitNameService(void)+0x94>	; fField60
         f075c:	e59f2060 	ldr	r2, [pc, #60]	; f07c4 <TIrGlue::InitNameService(void)+0x98>	; fField60
         f0760:	e59f1060 	ldr	r1, [pc, #60]	; f07c8 <TIrGlue::InitNameService(void)+0x9c>	; fField60
         f0764:	e1a07001 	mov	r7, r1
         f0768:	eb650c84 	bl	1a33980 <TIASService::$AddStringEntry(unsigned char const *, unsigned char const *, unsigned char const *)>
         f076c:	e1b05000 	movs	r5, r0
         f0770:	e3a06000 	mov	r6, #0	; 0x0
         f0774:	1a00000a 	bne	f07a4 <TIrGlue::InitNameService(void)+0x78>
         f0778:	e3a03003 	mov	r3, #3	; 0x3
         f077c:	e92d0008 	stmdb	sp!, {r3}
         f0780:	e5940020 	ldr	r0, [r4, #32]	; fField32
         f0784:	e59f2040 	ldr	r2, [pc, #40]	; f07cc <TIrGlue::InitNameService(void)+0xa0>	; fField40
         f0788:	e1a01007 	mov	r1, r7
         f078c:	e3a03401 	mov	r3, #16777216	; 0x1000000
         f0790:	eb650c7b 	bl	1a33984 <TIASService::$AddNBytesEntry(unsigned char const *, unsigned char const *, unsigned long, unsigned long)>
         f0794:	e28dd004 	add	sp, sp, #4	; 0x4
         f0798:	e1b05000 	movs	r5, r0
         f079c:	01a00006 	moveq	r0, r6
         f07a0:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         f07a4:	e5940020 	ldr	r0, [r4, #32]	; fField32
         f07a8:	e3300000 	teq	r0, #0	; 0x0
         f07ac:	13a01001 	movne	r1, #1	; 0x1
         f07b0:	1b650862 	blne	1a32940 <TIASService::$__dt(void)>
         f07b4:	e1a00005 	mov	r0, r5
         f07b8:	e5a46020 	str	r6, [r4, #32]!	; fField32
         f07bc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         f07c0:	00371784 	eoreqs	r1, r7, r4, lsl #15
         f07c4:	00371768 	eoreqs	r1, r7, r8, ror #14
         f07c8:	00371760 	eoreqs	r1, r7, r0, ror #14
         f07cc:	00371774 	eoreqs	r1, r7, r4, ror r7
    */
}

/**
 * Symbol: TIrGlue::HandleConnectingStateEvent(unsigned long)
 * Address: 000f07d0
 */
TIrGlue::HandleConnectingStateEvent(unsigned long) {
    /*
         f07d0:	e3310006 	teq	r1, #6	; 0x6
         f07d4:	0a650011 	beq	1a30820 <TIrGlue::$HandleConnectComplete(void)>
         f07d8:	e3310018 	teq	r1, #24	; 0x18
         f07dc:	0a65001e 	beq	1a3085c <TIrGlue::$HandleDisconnectComplete(void)>
         f07e0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrGlue::HandleListeningStateEvent(unsigned long)
 * Address: 000f07e4
 */
TIrGlue::HandleListeningStateEvent(unsigned long) {
    /*
         f07e4:	e3310008 	teq	r1, #8	; 0x8
         f07e8:	0a65000e 	beq	1a30828 <TIrGlue::$HandleListenComplete(void)>
         f07ec:	e3310018 	teq	r1, #24	; 0x18
         f07f0:	0a650019 	beq	1a3085c <TIrGlue::$HandleDisconnectComplete(void)>
         f07f4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrGlue::HandleAcceptingStateEvent(unsigned long)
 * Address: 000f07f8
 */
TIrGlue::HandleAcceptingStateEvent(unsigned long) {
    /*
         f07f8:	e331000a 	teq	r1, #10	; 0xa
         f07fc:	0a65000b 	beq	1a30830 <TIrGlue::$HandleAcceptComplete(void)>
         f0800:	e3310018 	teq	r1, #24	; 0x18
         f0804:	0a650014 	beq	1a3085c <TIrGlue::$HandleDisconnectComplete(void)>
         f0808:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrGlue::HandleConnectedStateEvent(unsigned long)
 * Address: 000f080c
 */
TIrGlue::HandleConnectedStateEvent(unsigned long) {
    /*
         f080c:	e3510012 	cmp	r1, #18	; 0x12
         f0810:	0a65000c 	beq	1a30848 <TIrGlue::$HandleCancelGetComplete(void)>
         f0814:	ca000004 	bgt	f082c <TIrGlue::HandleConnectedStateEvent(unsigned long)+0x20>
         f0818:	e331000c 	teq	r1, #12	; 0xc
         f081c:	0a650005 	beq	1a30838 <TIrGlue::$HandleGetComplete(void)>
         f0820:	e331000e 	teq	r1, #14	; 0xe
         f0824:	0a650005 	beq	1a30840 <TIrGlue::$HandlePutComplete(void)>
         f0828:	e1a0f00e 	mov	pc, lr
         f082c:	e3310014 	teq	r1, #20	; 0x14
         f0830:	0a650006 	beq	1a30850 <TIrGlue::$HandleCancelPutComplete(void)>
         f0834:	e3310018 	teq	r1, #24	; 0x18
         f0838:	0a650007 	beq	1a3085c <TIrGlue::$HandleDisconnectComplete(void)>
         f083c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrGlue::NextStateMachine(TIrStream *)
 * Address: 000f0840
 */
TIrGlue::NextStateMachine(TIrStream *) {
    /*
         f0840:	e59020ac 	ldr	r2, [r0, #172]	; fField172
         f0844:	e3320000 	teq	r2, #0	; 0x0
         f0848:	05a010ac 	streq	r1, [r0, #172]!	; fField172
         f084c:	01a0f00e 	moveq	pc, lr
         f0850:	e1320001 	teq	r2, r1
         f0854:	01a0f00e 	moveq	pc, lr
         f0858:	e59000b0 	ldr	r0, [r0, #176]	; fField176
         f085c:	e1a02001 	mov	r2, r1
         f0860:	e3a01000 	mov	r1, #0	; 0x0
         f0864:	ea6be320 	b	1be94ec <CList::$InsertAt(long, void *)>
    */
}

/**
 * Symbol: TIrGlue::HandleInternalEvent(void)
 * Address: 000f0868
 */
TIrGlue::HandleInternalEvent(void) {
    /*
         f0868:	e1a0c00d 	mov	ip, sp
         f086c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f0870:	e24cb004 	sub	fp, ip, #4	; 0x4
         f0874:	e1a04000 	mov	r4, r0
         f0878:	e3a05000 	mov	r5, #0	; 0x0
         f087c:	e59400ac 	ldr	r0, [r4, #172]	; fField172
         f0880:	e3300000 	teq	r0, #0	; 0x0
         f0884:	0a000005 	beq	f08a0 <TIrGlue::HandleInternalEvent(void)+0x38>
         f0888:	e59400ac 	ldr	r0, [r4, #172]	; fField172
         f088c:	e58450ac 	str	r5, [r4, #172]	; fField172
         f0890:	eb651cd6 	bl	1a37bf0 <TIrStream::$ProcessNextEvent(void)>
         f0894:	e59400ac 	ldr	r0, [r4, #172]	; fField172
         f0898:	e3300000 	teq	r0, #0	; 0x0
         f089c:	1afffff9 	bne	f0888 <TIrGlue::HandleInternalEvent(void)+0x20>
         f08a0:	e59400b0 	ldr	r0, [r4, #176]	; fField176
         f08a4:	e3300000 	teq	r0, #0	; 0x0
         f08a8:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         f08ac:	e5901000 	ldr	r1, [r0]
         f08b0:	e2411001 	sub	r1, r1, #1	; 0x1
         f08b4:	eb6bd6a2 	bl	1be6344 <CList::$At(long)>
         f08b8:	e58400ac 	str	r0, [r4, #172]	; fField172
         f08bc:	e3300000 	teq	r0, #0	; 0x0
         f08c0:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         f08c4:	e59400b0 	ldr	r0, [r4, #176]	; fField176
         f08c8:	e5901000 	ldr	r1, [r0]
         f08cc:	e2411001 	sub	r1, r1, #1	; 0x1
         f08d0:	e3a02001 	mov	r2, #1	; 0x1
         f08d4:	eb6bef56 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         f08d8:	eaffffe7 	b	f087c <TIrGlue::HandleInternalEvent(void)+0x14>
    */
}

/**
 * Symbol: TIrGlue::InitEventBlockList(void)
 * Address: 000f08dc
 */
TIrGlue::InitEventBlockList(void) {
    /*
         f08dc:	e1a0c00d 	mov	ip, sp
         f08e0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f08e4:	e24cb004 	sub	fp, ip, #4	; 0x4
         f08e8:	e1a04000 	mov	r4, r0
         f08ec:	e3a050a8 	mov	r5, #168	; 0xa8
         f08f0:	e2455b07 	sub	r5, r5, #7168	; 0x1c00
         f08f4:	e3a00000 	mov	r0, #0	; 0x0
         f08f8:	eb6bce4b 	bl	1be422c <CList::$__ct(void)>
         f08fc:	e58400b4 	str	r0, [r4, #180]	; fField180
         f0900:	e3300000 	teq	r0, #0	; 0x0
         f0904:	0a000009 	beq	f0930 <TIrGlue::InitEventBlockList(void)+0x54>
         f0908:	e1a00004 	mov	r0, r4
         f090c:	e3a02000 	mov	r2, #0	; 0x0
         f0910:	e3a01000 	mov	r1, #0	; 0x0
         f0914:	eb6503e7 	bl	1a318b8 <TIrGlue::$GrabEventBlock(unsigned long, unsigned long)>
         f0918:	e1b02000 	movs	r2, r0
         f091c:	0a000003 	beq	f0930 <TIrGlue::InitEventBlockList(void)+0x54>
         f0920:	e5b400b4 	ldr	r0, [r4, #180]!	; fField180
         f0924:	e5901000 	ldr	r1, [r0]
         f0928:	eb6be2ef 	bl	1be94ec <CList::$InsertAt(long, void *)>
         f092c:	e1a05000 	mov	r5, r0
         f0930:	e1a00005 	mov	r0, r5
         f0934:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TIrGlue::DeleteEventBlockList(unsigned char)
 * Address: 000f0938
 */
TIrGlue::DeleteEventBlockList(unsigned char) {
    /*
         f0938:	e1a0c00d 	mov	ip, sp
         f093c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         f0940:	e24cb004 	sub	fp, ip, #4	; 0x4
         f0944:	e1a04000 	mov	r4, r0
         f0948:	e20170ff 	and	r7, r1, #255	; 0xff
         f094c:	e59000b4 	ldr	r0, [r0, #180]	; fField180
         f0950:	e3300000 	teq	r0, #0	; 0x0
         f0954:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         f0958:	e5900000 	ldr	r0, [r0]
         f095c:	e3500000 	cmp	r0, #0	; 0x0
         f0960:	da00000d 	ble	f099c <TIrGlue::DeleteEventBlockList(unsigned char)+0x64>
         f0964:	e2505001 	subs	r5, r0, #1	; 0x1
         f0968:	4a00000b 	bmi	f099c <TIrGlue::DeleteEventBlockList(unsigned char)+0x64>
         f096c:	e1a01005 	mov	r1, r5
         f0970:	e59400b4 	ldr	r0, [r4, #180]	; fField180
         f0974:	eb6bd672 	bl	1be6344 <CList::$At(long)>
         f0978:	e1a06000 	mov	r6, r0
         f097c:	e1a01005 	mov	r1, r5
         f0980:	e3a02001 	mov	r2, #1	; 0x1
         f0984:	e59400b4 	ldr	r0, [r4, #180]	; fField180
         f0988:	eb6bef29 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         f098c:	e1a00006 	mov	r0, r6
         f0990:	eb6b7352 	bl	1bcd6e0 <$__dl(void *)>
         f0994:	e2555001 	subs	r5, r5, #1	; 0x1
         f0998:	5afffff3 	bpl	f096c <TIrGlue::DeleteEventBlockList(unsigned char)+0x34>
         f099c:	e3370000 	teq	r7, #0	; 0x0
         f09a0:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         f09a4:	e59400b4 	ldr	r0, [r4, #180]	; fField180
         f09a8:	e3300000 	teq	r0, #0	; 0x0
         f09ac:	13a01001 	movne	r1, #1	; 0x1
         f09b0:	1b6bd233 	blne	1be5284 <CList::$__dt(void)>
         f09b4:	e3a00000 	mov	r0, #0	; 0x0
         f09b8:	e5a400b4 	str	r0, [r4, #180]!	; fField180
         f09bc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TIrGlue::GrabEventBlock(unsigned long, unsigned long)
 * Address: 000f09c0
 */
TIrGlue::GrabEventBlock(unsigned long, unsigned long) {
    /*
         f09c0:	e1a0c00d 	mov	ip, sp
         f09c4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         f09c8:	e24cb004 	sub	fp, ip, #4	; 0x4
         f09cc:	e1a04000 	mov	r4, r0
         f09d0:	e1a05001 	mov	r5, r1
         f09d4:	e59000b4 	ldr	r0, [r0, #180]	; fField180
         f09d8:	e5901000 	ldr	r1, [r0]
         f09dc:	e3510000 	cmp	r1, #0	; 0x0
         f09e0:	da000008 	ble	f0a08 <TIrGlue::GrabEventBlock(unsigned long, unsigned long)+0x48>
         f09e4:	e2411001 	sub	r1, r1, #1	; 0x1
         f09e8:	eb6bd655 	bl	1be6344 <CList::$At(long)>
         f09ec:	e1a06000 	mov	r6, r0
         f09f0:	e5b400b4 	ldr	r0, [r4, #180]!	; fField180
         f09f4:	e5901000 	ldr	r1, [r0]
         f09f8:	e2411001 	sub	r1, r1, #1	; 0x1
         f09fc:	e3a02001 	mov	r2, #1	; 0x1
         f0a00:	eb6bef0b 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         f0a04:	ea000003 	b	f0a18 <TIrGlue::GrabEventBlock(unsigned long, unsigned long)+0x58>
         f0a08:	e3a00024 	mov	r0, #36	; 0x24
         f0a0c:	eb6b7749 	bl	1bce738 <$__nw(unsigned int)>
         f0a10:	e1b06000 	movs	r6, r0
         f0a14:	0a000002 	beq	f0a24 <TIrGlue::GrabEventBlock(unsigned long, unsigned long)+0x64>
         f0a18:	e5c65000 	strb	r5, [r6]
         f0a1c:	e3a00000 	mov	r0, #0	; 0x0
         f0a20:	e5860004 	str	r0, [r6, #4]
         f0a24:	e1a00006 	mov	r0, r6
         f0a28:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TIrGlue::ReleaseEventBlock(TIrEvent *)
 * Address: 000f0a2c
 */
TIrGlue::ReleaseEventBlock(TIrEvent *) {
    /*
         f0a2c:	e3310000 	teq	r1, #0	; 0x0
         f0a30:	01a0f00e 	moveq	pc, lr
         f0a34:	e1a02000 	mov	r2, r0
         f0a38:	e1a00001 	mov	r0, r1
         f0a3c:	e5b230b4 	ldr	r3, [r2, #180]!	; fField180
         f0a40:	e3330000 	teq	r3, #0	; 0x0
         f0a44:	0a6b7325 	beq	1bcd6e0 <$__dl(void *)>
         f0a48:	e1a02000 	mov	r2, r0
         f0a4c:	e5931000 	ldr	r1, [r3]
         f0a50:	e1a00003 	mov	r0, r3
         f0a54:	ea6be2a4 	b	1be94ec <CList::$InsertAt(long, void *)>
    */
}

/**
 * Symbol: TIrGlue::RegisterMyNameAndLSAPId(unsigned char *, unsigned char *, unsigned long)
 * Address: 000f0a58
 */
TIrGlue::RegisterMyNameAndLSAPId(unsigned char *, unsigned char *, unsigned long) {
    /*
         f0a58:	e1a0c00d 	mov	ip, sp
         f0a5c:	e92dd81f 	stmdb	sp!, {r0, r1, r2, r3, r4, fp, ip, lr, pc}
         f0a60:	e24cb004 	sub	fp, ip, #4	; 0x4
         f0a64:	e51b0020 	ldr	r0, [fp, -#32]	; fField32
         f0a68:	e5901020 	ldr	r1, [r0, #32]	; fField32
         f0a6c:	e3310000 	teq	r1, #0	; 0x0
         f0a70:	1a000002 	bne	f0a80 <TIrGlue::RegisterMyNameAndLSAPId(unsigned char *, unsigned char *, unsigned long)+0x28>
         f0a74:	eb650390 	bl	1a318bc <TIrGlue::$InitNameService(void)>
         f0a78:	e1b04000 	movs	r4, r0
         f0a7c:	1a000014 	bne	f0ad4 <TIrGlue::RegisterMyNameAndLSAPId(unsigned char *, unsigned char *, unsigned long)+0x7c>
         f0a80:	e24b1014 	sub	r1, fp, #20	; 0x14
         f0a84:	e51b0020 	ldr	r0, [fp, -#32]	; fField32
         f0a88:	eb65038e 	bl	1a318c8 <TIrGlue::$ObtainLSAPId(unsigned long &)>
         f0a8c:	e1b04000 	movs	r4, r0
         f0a90:	1a00000f 	bne	f0ad4 <TIrGlue::RegisterMyNameAndLSAPId(unsigned char *, unsigned char *, unsigned long)+0x7c>
         f0a94:	e51b0020 	ldr	r0, [fp, -#32]	; fField32
         f0a98:	e5900020 	ldr	r0, [r0, #32]	; fField32
         f0a9c:	e24b301c 	sub	r3, fp, #28	; 0x1c
         f0aa0:	e893000e 	ldmia	r3, {r1, r2, r3}
         f0aa4:	eb6507b0 	bl	1a3296c <TIASService::$AddIntegerEntry(unsigned char const *, unsigned char const *, unsigned long)>
         f0aa8:	e1b04000 	movs	r4, r0
         f0aac:	1a000004 	bne	f0ac4 <TIrGlue::RegisterMyNameAndLSAPId(unsigned char *, unsigned char *, unsigned long)+0x6c>
         f0ab0:	e51b0020 	ldr	r0, [fp, -#32]	; fField32
         f0ab4:	e51b1014 	ldr	r1, [fp, -#20]	; fField20
         f0ab8:	e5a0102c 	str	r1, [r0, #44]!	; fField44
         f0abc:	e3a00000 	mov	r0, #0	; 0x0
         f0ac0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         f0ac4:	e51b0014 	ldr	r0, [fp, -#20]	; fField20
         f0ac8:	e20010ff 	and	r1, r0, #255	; 0xff
         f0acc:	e51b0020 	ldr	r0, [fp, -#32]	; fField32
         f0ad0:	eb65037d 	bl	1a318cc <TIrGlue::$ReleaseLSAPId(unsigned char)>
         f0ad4:	e1a00004 	mov	r0, r4
         f0ad8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TIrGlue::PostAsyncEvent(unsigned long)
 * Address: 000f0adc
 */
TIrGlue::PostAsyncEvent(unsigned long) {
    /*
         f0adc:	e5900014 	ldr	r0, [r0, #20]	; fField20
         f0ae0:	ea64fb30 	b	1a2f7a8 <TIrDATool::$PostAsyncEvent(unsigned long)>
    */
}

/**
 * Symbol: TIrGlue::StartTerminate(long)
 * Address: 000f0ae4
 */
TIrGlue::StartTerminate(long) {
    /*
         f0ae4:	e5900014 	ldr	r0, [r0, #20]	; fField20
         f0ae8:	ea64fb2b 	b	1a2f79c <TIrDATool::$StartTerminate(long)>
    */
}

/**
 * Symbol: TIrGlue::StartTimer1(unsigned long, int)
 * Address: 000f0aec
 */
TIrGlue::StartTimer1(unsigned long, int) {
    /*
         f0aec:	e5900014 	ldr	r0, [r0, #20]	; fField20
         f0af0:	ea64fb2d 	b	1a2f7ac <TIrDATool::$StartTimer1(unsigned long, int)>
    */
}

/**
 * Symbol: TIrGlue::StopTimer1(void)
 * Address: 000f0af4
 */
TIrGlue::StopTimer1(void) {
    /*
         f0af4:	e5900014 	ldr	r0, [r0, #20]	; fField20
         f0af8:	ea64fb2c 	b	1a2f7b0 <TIrDATool::$StopTimer1(void)>
    */
}

/**
 * Symbol: TIrGlue::StartTimer2(unsigned long, int)
 * Address: 000f0afc
 */
TIrGlue::StartTimer2(unsigned long, int) {
    /*
         f0afc:	e5900014 	ldr	r0, [r0, #20]	; fField20
         f0b00:	ea64fb2b 	b	1a2f7b4 <TIrDATool::$StartTimer2(unsigned long, int)>
    */
}

/**
 * Symbol: TIrGlue::StopTimer2(void)
 * Address: 000f0b04
 */
TIrGlue::StopTimer2(void) {
    /*
         f0b04:	e5900014 	ldr	r0, [r0, #20]	; fField20
         f0b08:	ea64fb2b 	b	1a2f7bc <TIrDATool::$StopTimer2(void)>
    */
}

/**
 * Symbol: TIrGlue::StartTransmit(TIrLAPPutBuffer *, unsigned long)
 * Address: 000f0b0c
 */
TIrGlue::StartTransmit(TIrLAPPutBuffer *, unsigned long) {
    /*
         f0b0c:	e5900014 	ldr	r0, [r0, #20]	; fField20
         f0b10:	ea64fb2b 	b	1a2f7c4 <TIrDATool::$StartTransmit(TIrLAPPutBuffer *, unsigned long)>
    */
}

/**
 * Symbol: TIrGlue::StopTransmit(void)
 * Address: 000f0b14
 */
TIrGlue::StopTransmit(void) {
    /*
         f0b14:	e5900014 	ldr	r0, [r0, #20]	; fField20
         f0b18:	ea64fb2a 	b	1a2f7c8 <TIrDATool::$StopTransmit(void)>
    */
}

/**
 * Symbol: TIrGlue::StartReceive(CBufferSegment *, unsigned char, unsigned char)
 * Address: 000f0b1c
 */
TIrGlue::StartReceive(CBufferSegment *, unsigned char, unsigned char) {
    /*
         f0b1c:	e20220ff 	and	r2, r2, #255	; 0xff
         f0b20:	e20330ff 	and	r3, r3, #255	; 0xff
         f0b24:	e5900014 	ldr	r0, [r0, #20]	; fField20
         f0b28:	ea64fb29 	b	1a2f7d4 <TIrDATool::$StartReceive(CBufferSegment *, unsigned char, unsigned char)>
    */
}

/**
 * Symbol: TIrGlue::StopReceive(void)
 * Address: 000f0b2c
 */
TIrGlue::StopReceive(void) {
    /*
         f0b2c:	e5900014 	ldr	r0, [r0, #20]	; fField20
         f0b30:	ea64fb28 	b	1a2f7d8 <TIrDATool::$StopReceive(void)>
    */
}

/**
 * Symbol: TIrGlue::ObtainLSAPId(unsigned long &)
 * Address: 000f0b34
 */
TIrGlue::ObtainLSAPId(unsigned long &) {
    /*
         f0b34:	e1a0c00d 	mov	ip, sp
         f0b38:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         f0b3c:	e24cb004 	sub	fp, ip, #4	; 0x4
         f0b40:	e1a04000 	mov	r4, r0
         f0b44:	e1a05001 	mov	r5, r1
         f0b48:	e5900040 	ldr	r0, [r0, #64]	; fField64
         f0b4c:	e3a0606a 	mov	r6, #106	; 0x6a
         f0b50:	e2466c3f 	sub	r6, r6, #16128	; 0x3f00
         f0b54:	e3700001 	cmn	r0, #1	; 0x1
         f0b58:	0a000017 	beq	f0bbc <TIrGlue::ObtainLSAPId(unsigned long &)+0x88>
         f0b5c:	e5950000 	ldr	r0, [r5]
         f0b60:	e3300000 	teq	r0, #0	; 0x0
         f0b64:	1a000003 	bne	f0b78 <TIrGlue::ObtainLSAPId(unsigned long &)+0x44>
         f0b68:	eb6b0fbe 	bl	1bb4a68 <$rand>
         f0b6c:	e200001f 	and	r0, r0, #31	; 0x1f
         f0b70:	e3a01001 	mov	r1, #1	; 0x1
         f0b74:	ea000007 	b	f0b98 <TIrGlue::ObtainLSAPId(unsigned long &)+0x64>
         f0b78:	e350001f 	cmp	r0, #31	; 0x1f
         f0b7c:	83a0007a 	movhi	r0, #122	; 0x7a
         f0b80:	82400c3f 	subhi	r0, r0, #16128	; 0x3f00
         f0b84:	891ba870 	ldmhidb	fp, {r4, r5, r6, fp, sp, pc}
         f0b88:	e20000ff 	and	r0, r0, #255	; 0xff
         f0b8c:	eafffff7 	b	f0b70 <TIrGlue::ObtainLSAPId(unsigned long &)+0x3c>
         f0b90:	e2800001 	add	r0, r0, #1	; 0x1
         f0b94:	e200001f 	and	r0, r0, #31	; 0x1f
         f0b98:	e3300000 	teq	r0, #0	; 0x0
         f0b9c:	0afffffb 	beq	f0b90 <TIrGlue::ObtainLSAPId(unsigned long &)+0x5c>
         f0ba0:	e5942040 	ldr	r2, [r4, #64]	; fField64
         f0ba4:	e1120011 	tst	r2, r1, lsl r0
         f0ba8:	1afffff8 	bne	f0b90 <TIrGlue::ObtainLSAPId(unsigned long &)+0x5c>
         f0bac:	e5952000 	ldr	r2, [r5]
         f0bb0:	e3320000 	teq	r2, #0	; 0x0
         f0bb4:	11300002 	teqne	r0, r2
         f0bb8:	0a000001 	beq	f0bc4 <TIrGlue::ObtainLSAPId(unsigned long &)+0x90>
         f0bbc:	e1a00006 	mov	r0, r6
         f0bc0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         f0bc4:	e5850000 	str	r0, [r5]
         f0bc8:	e5942040 	ldr	r2, [r4, #64]	; fField64
         f0bcc:	e1820011 	orr	r0, r2, r1, lsl r0
         f0bd0:	e5a40040 	str	r0, [r4, #64]!	; fField64
         f0bd4:	e3a00000 	mov	r0, #0	; 0x0
         f0bd8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TIrGlue::MediaBusy(void)
 * Address: 000f0bdc
 */
TIrGlue::MediaBusy(void) {
    /*
         f0bdc:	e5900014 	ldr	r0, [r0, #20]	; fField20
         f0be0:	eafff994 	b	ef238 <TIrDATool::MediaBusy(void)>
    */
}

/**
 * Symbol: TIrGlue::ReceivingInput(void)
 * Address: 000f0be4
 */
TIrGlue::ReceivingInput(void) {
    /*
         f0be4:	e5900014 	ldr	r0, [r0, #20]	; fField20
         f0be8:	eafff996 	b	ef248 <TIrDATool::ReceivingInput(void)>
    */
}

/**
 * Symbol: TIrGlue::SetMediaBusy(unsigned char)
 * Address: 000f0bec
 */
TIrGlue::SetMediaBusy(unsigned char) {
    /*
         f0bec:	e20110ff 	and	r1, r1, #255	; 0xff
         f0bf0:	e5900014 	ldr	r0, [r0, #20]	; fField20
         f0bf4:	eafff995 	b	ef250 <TIrDATool::SetMediaBusy(unsigned char)>
    */
}

/**
 * Symbol: TIrGlue::ChangeSpeed(unsigned long)
 * Address: 000f0bf8
 */
TIrGlue::ChangeSpeed(unsigned long) {
    /*
         f0bf8:	e5900014 	ldr	r0, [r0, #20]	; fField20
         f0bfc:	ea64faef 	b	1a2f7c0 <TIrDATool::$ChangeSpeed(unsigned long)>
    */
}

/**
 * Symbol: TIrGlue::TimerComplete(unsigned long)
 * Address: 000f0c00
 */
TIrGlue::TimerComplete(unsigned long) {
    /*
         f0c00:	e590001c 	ldr	r0, [r0, #28]	; fField28
         f0c04:	ea650f8f 	b	1a34a48 <TIrLAP::$TimerComplete(unsigned long)>
    */
}

/**
 * Symbol: TIrGlue::OutputComplete(void)
 * Address: 000f0c08
 */
TIrGlue::OutputComplete(void) {
    /*
         f0c08:	e590001c 	ldr	r0, [r0, #28]	; fField28
         f0c0c:	ea650f8e 	b	1a34a4c <TIrLAP::$OutputComplete(void)>
    */
}

/**
 * Symbol: TIrGlue::InputComplete(unsigned char, unsigned char)
 * Address: 000f0c10
 */
TIrGlue::InputComplete(unsigned char, unsigned char) {
    /*
         f0c10:	e20110ff 	and	r1, r1, #255	; 0xff
         f0c14:	e20220ff 	and	r2, r2, #255	; 0xff
         f0c18:	e590001c 	ldr	r0, [r0, #28]	; fField28
         f0c1c:	ea650f8b 	b	1a34a50 <TIrLAP::$InputComplete(unsigned char, unsigned char)>
    */
}

/**
 * Symbol: TIrGlue::ConnectedAsPrimary(void)
 * Address: 000f0c20
 */
TIrGlue::ConnectedAsPrimary(void) {
    /*
         f0c20:	e590001c 	ldr	r0, [r0, #28]	; fField28
         f0c24:	e5d00094 	ldrb	r0, [r0, #148]	; fField148
         f0c28:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrGlue::CopyStatsTo(TCMOSlowIRStats *)
 * Address: 000f0c2c
 */
TIrGlue::CopyStatsTo(TCMOSlowIRStats *) {
    /*
         f0c2c:	e590001c 	ldr	r0, [r0, #28]	; fField28
         f0c30:	ea650b6a 	b	1a339e0 <TIrLAP::$CopyStatsTo(TCMOSlowIRStats *)>
    */
}

/**
 * Symbol: TIrGlue::ReleaseLSAPId(unsigned char)
 * Address: 000f0c34
 */
TIrGlue::ReleaseLSAPId(unsigned char) {
    /*
         f0c34:	e20110ff 	and	r1, r1, #255	; 0xff
         f0c38:	e3a03001 	mov	r3, #1	; 0x1
         f0c3c:	e1e01113 	mvn	r1, r3, lsl r1
         f0c40:	e5902040 	ldr	r2, [r0, #64]	; fField64
         f0c44:	e0021001 	and	r1, r2, r1
         f0c48:	e5a01040 	str	r1, [r0, #64]!	; fField64
         f0c4c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrGlue::ResetStats(void)
 * Address: 000f0c50
 */
TIrGlue::ResetStats(void) {
    /*
         f0c50:	e590001c 	ldr	r0, [r0, #28]	; fField28
         f0c54:	ea650b62 	b	1a339e4 <TIrLAP::$ResetStats(void)>
    */
}

/**
 * Symbol: TIrGlue::DiscoverStart(unsigned long, unsigned char)
 * Address: 000f0c58
 */
TIrGlue::DiscoverStart(unsigned long, unsigned char) {
    /*
         f0c58:	e1a0c00d 	mov	ip, sp
         f0c5c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         f0c60:	e24cb004 	sub	fp, ip, #4	; 0x4
         f0c64:	e1a04000 	mov	r4, r0
         f0c68:	e1a05001 	mov	r5, r1
         f0c6c:	e20260ff 	and	r6, r2, #255	; 0xff
         f0c70:	e3a02018 	mov	r2, #24	; 0x18
         f0c74:	e3a01003 	mov	r1, #3	; 0x3
         f0c78:	eb65030e 	bl	1a318b8 <TIrGlue::$GrabEventBlock(unsigned long, unsigned long)>
         f0c7c:	e3300000 	teq	r0, #0	; 0x0
         f0c80:	0a00000a 	beq	f0cb0 <TIrGlue::DiscoverStart(unsigned long, unsigned char)+0x58>
         f0c84:	e5805008 	str	r5, [r0, #8]
         f0c88:	e594106c 	ldr	r1, [r4, #108]	; fField108
         f0c8c:	e5801010 	str	r1, [r0, #16]
         f0c90:	e5c06014 	strb	r6, [r0, #20]	; fField20
         f0c94:	e1a01000 	mov	r1, r0
         f0c98:	e5942018 	ldr	r2, [r4, #24]	; fField24
         f0c9c:	e1a00002 	mov	r0, r2
         f0ca0:	eb651bd0 	bl	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
         f0ca4:	e3a00001 	mov	r0, #1	; 0x1
         f0ca8:	e5c40034 	strb	r0, [r4, #52]	; fField52
         f0cac:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         f0cb0:	e1a00004 	mov	r0, r4
         f0cb4:	e3a02000 	mov	r2, #0	; 0x0
         f0cb8:	e3a010a8 	mov	r1, #168	; 0xa8
         f0cbc:	e2411b07 	sub	r1, r1, #7168	; 0x1c00
         f0cc0:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         f0cc4:	ea64fee5 	b	1a30860 <TIrGlue::$DiscoverComplete(long, CList *)>
    */
}

