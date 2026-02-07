#include "include/TUSoundChannel.h"

/**
 * Symbol: TUSoundChannel::__ct(void)
 * Address: 0025a7a4
 */
TUSoundChannel::TUSoundChannel(void) {
    /*
        25a7a4:	e1a0c00d 	mov	ip, sp
        25a7a8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        25a7ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        25a7b0:	e1b04000 	movs	r4, r0
        25a7b4:	1a000005 	bne	25a7d0 <TUSoundChannel::__ct(void)+0x2c>
        25a7b8:	e3a0003c 	mov	r0, #60	; 0x3c
        25a7bc:	eb65cfdd 	bl	1bce738 <$__nw(unsigned int)>
        25a7c0:	e1b04000 	movs	r4, r0
        25a7c4:	1a000001 	bne	25a7d0 <TUSoundChannel::__ct(void)+0x2c>
        25a7c8:	e1a00004 	mov	r0, r4
        25a7cc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        25a7d0:	e1a00004 	mov	r0, r4
        25a7d4:	eb66268b 	bl	1be4208 <TAEventHandler::$__ct(void)>
        25a7d8:	e59f0084 	ldr	r0, [pc, #84]	; 25a864 <TUSoundChannel::__ct(void)+0xc0>
        25a7dc:	e5840000 	str	r0, [r4]
        25a7e0:	e3a00000 	mov	r0, #0	; 0x0
        25a7e4:	e5840014 	str	r0, [r4, #20]	; fField20
        25a7e8:	e5840018 	str	r0, [r4, #24]	; fField24
        25a7ec:	e584001c 	str	r0, [r4, #28]	; fField28
        25a7f0:	e5840020 	str	r0, [r4, #32]	; fField32
        25a7f4:	e5840024 	str	r0, [r4, #36]	; fField36
        25a7f8:	e3e01102 	mvn	r1, #-2147483648	; 0x80000000
        25a7fc:	e2844028 	add	r4, r4, #40	; 0x28
        25a800:	e8840003 	stmia	r4, {r0, r1}
        25a804:	e2444028 	sub	r4, r4, #40	; 0x28
        25a808:	e3a01080 	mov	r1, #128	; 0x80
        25a80c:	e5840034 	str	r0, [r4, #52]
        25a810:	e5841030 	str	r1, [r4, #48]	; fField48
        25a814:	e5840038 	str	r0, [r4, #56]
        25a818:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        25a81c:	e28d0014 	add	r0, sp, #20	; 0x14
        25a820:	eb65cbac 	bl	1bcd6d8 <TUGestalt::$__ct(void)>
        25a824:	e1a0200d 	mov	r2, sp
        25a828:	e28d0014 	add	r0, sp, #20	; 0x14
        25a82c:	e3a03014 	mov	r3, #20	; 0x14
        25a830:	e3a01402 	mov	r1, #33554432	; 0x2000000
        25a834:	e2811009 	add	r1, r1, #9	; 0x9
        25a838:	eb65e04b 	bl	1bd296c <TUGestalt::$Gestalt(unsigned long, void *, unsigned long)>
        25a83c:	e5dd0002 	ldrb	r0, [sp, #2]
        25a840:	e3300000 	teq	r0, #0	; 0x0
        25a844:	15940014 	ldrne	r0, [r4, #20]	; fField20
        25a848:	13800080 	orrne	r0, r0, #128	; 0x80
        25a84c:	15840014 	strne	r0, [r4, #20]	; fField20
        25a850:	e28d0014 	add	r0, sp, #20	; 0x14
        25a854:	e3a01000 	mov	r1, #0	; 0x0
        25a858:	eb65cfb1 	bl	1bce724 <TUObject::$__dt(void)>
        25a85c:	e28dd01c 	add	sp, sp, #28	; 0x1c
        25a860:	eaffffd8 	b	25a7c8 <TUSoundChannel::__ct(void)+0x24>
        25a864:	0001dbc8 	andeq	sp, r1, r8, asr #23
    */
}

/**
 * Symbol: TUSoundChannel::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 0025a868
 */
TUSoundChannel::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        25a868:	e1a0c00d 	mov	ip, sp
        25a86c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        25a870:	e24cb004 	sub	fp, ip, #4	; 0x4
        25a874:	e1a04000 	mov	r4, r0
        25a878:	e1a00003 	mov	r0, r3
        25a87c:	e3a01000 	mov	r1, #0	; 0x0
        25a880:	e5945024 	ldr	r5, [r4, #36]	; fField36
        25a884:	e3350000 	teq	r5, #0	; 0x0
        25a888:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        25a88c:	e5902014 	ldr	r2, [r0, #20]	; fField20
        25a890:	e5953004 	ldr	r3, [r5, #4]	; fField4
        25a894:	e1320003 	teq	r2, r3
        25a898:	0a000004 	beq	25a8b0 <TUSoundChannel::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)+0x48>
        25a89c:	e1a01005 	mov	r1, r5
        25a8a0:	e5955000 	ldr	r5, [r5]
        25a8a4:	e3350000 	teq	r5, #0	; 0x0
        25a8a8:	1afffff8 	bne	25a890 <TUSoundChannel::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)+0x28>
        25a8ac:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        25a8b0:	e3350000 	teq	r5, #0	; 0x0
        25a8b4:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        25a8b8:	e3310000 	teq	r1, #0	; 0x0
        25a8bc:	15952000 	ldrne	r2, [r5]
        25a8c0:	15812000 	strne	r2, [r1]
        25a8c4:	05951000 	ldreq	r1, [r5]
        25a8c8:	05841024 	streq	r1, [r4, #36]	; fField36
        25a8cc:	e595c008 	ldr	ip, [r5, #8]
        25a8d0:	e33c0000 	teq	ip, #0	; 0x0
        25a8d4:	0a000006 	beq	25a8f4 <TUSoundChannel::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)+0x8c>
        25a8d8:	e2851020 	add	r1, r5, #32	; 0x20
        25a8dc:	e5b0300c 	ldr	r3, [r0, #12]!
        25a8e0:	e590200c 	ldr	r2, [r0, #12]
        25a8e4:	e1a0000c 	mov	r0, ip
        25a8e8:	e59cc000 	ldr	ip, [ip]
        25a8ec:	e1a0e00f 	mov	lr, pc
        25a8f0:	e28cf004 	add	pc, ip, #4	; 0x4
        25a8f4:	e1a01005 	mov	r1, r5
        25a8f8:	e1a00004 	mov	r0, r4
        25a8fc:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        25a900:	ea66bf19 	b	1c0a56c <TUSoundChannel::$FreeNode(SoundNode *)>
    */
}

/**
 * Symbol: TUSoundChannel::MakeNode(SoundNode **)
 * Address: 0025a904
 */
TUSoundChannel::MakeNode(SoundNode **) {
    /*
        25a904:	e1a0c00d 	mov	ip, sp
        25a908:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        25a90c:	e24cb004 	sub	fp, ip, #4	; 0x4
        25a910:	e1a05000 	mov	r5, r0
        25a914:	e1a04001 	mov	r4, r1
        25a918:	e3a06000 	mov	r6, #0	; 0x0
        25a91c:	e5900028 	ldr	r0, [r0, #40]	; fField40
        25a920:	e3a07000 	mov	r7, #0	; 0x0
        25a924:	e3300000 	teq	r0, #0	; 0x0
        25a928:	0a000004 	beq	25a940 <TUSoundChannel::MakeNode(SoundNode **)+0x3c>
        25a92c:	e5840000 	str	r0, [r4]
        25a930:	e5950028 	ldr	r0, [r5, #40]	; fField40
        25a934:	e5900000 	ldr	r0, [r0]
        25a938:	e5850028 	str	r0, [r5, #40]	; fField40
        25a93c:	ea000042 	b	25aa4c <TUSoundChannel::MakeNode(SoundNode **)+0x148>
        25a940:	e3a00088 	mov	r0, #136	; 0x88
        25a944:	eb65cf7b 	bl	1bce738 <$__nw(unsigned int)>
        25a948:	e1b06000 	movs	r6, r0
        25a94c:	0a000022 	beq	25a9dc <TUSoundChannel::MakeNode(SoundNode **)+0xd8>
        25a950:	e286000c 	add	r0, r6, #12	; 0xc
        25a954:	eb662637 	bl	1be4238 <TAEvent::$__ct(void)>
        25a958:	e59f9094 	ldr	r9, [pc, #94]	; 25a9f4 <TUSoundChannel::MakeNode(SoundNode **)+0xf0>
        25a95c:	e586900c 	str	r9, [r6, #12]
        25a960:	e59f8090 	ldr	r8, [pc, #90]	; 25a9f8 <TUSoundChannel::MakeNode(SoundNode **)+0xf4>
        25a964:	e5867014 	str	r7, [r6, #20]	; fField20
        25a968:	e5868010 	str	r8, [r6, #16]
        25a96c:	e5867018 	str	r7, [r6, #24]	; fField24
        25a970:	e586701c 	str	r7, [r6, #28]	; fField28
        25a974:	e5867020 	str	r7, [r6, #32]	; fField32
        25a978:	e5867024 	str	r7, [r6, #36]	; fField36
        25a97c:	e5867028 	str	r7, [r6, #40]	; fField40
        25a980:	e586702c 	str	r7, [r6, #44]	; fField44
        25a984:	e59f0070 	ldr	r0, [pc, #70]	; 25a9fc <TUSoundChannel::MakeNode(SoundNode **)+0xf8>
        25a988:	e5860030 	str	r0, [r6, #48]	; fField48
        25a98c:	e3e00102 	mvn	r0, #-2147483648	; 0x80000000
        25a990:	e2866034 	add	r6, r6, #52	; 0x34
        25a994:	e8860081 	stmia	r6, {r0, r7}
        25a998:	e5867008 	str	r7, [r6, #8]
        25a99c:	e586700c 	str	r7, [r6, #12]
        25a9a0:	e5860020 	str	r0, [r6, #32]	; fField32
        25a9a4:	e5867010 	str	r7, [r6, #16]
        25a9a8:	e2466034 	sub	r6, r6, #52	; 0x34
        25a9ac:	e2860058 	add	r0, r6, #88	; 0x58
        25a9b0:	eb662620 	bl	1be4238 <TAEvent::$__ct(void)>
        25a9b4:	e5867060 	str	r7, [r6, #96]
        25a9b8:	e586805c 	str	r8, [r6, #92]
        25a9bc:	e5869058 	str	r9, [r6, #88]
        25a9c0:	e5867064 	str	r7, [r6, #100]
        25a9c4:	e5867068 	str	r7, [r6, #104]
        25a9c8:	e586706c 	str	r7, [r6, #108]
        25a9cc:	e5867070 	str	r7, [r6, #112]
        25a9d0:	e5867074 	str	r7, [r6, #116]
        25a9d4:	e2860078 	add	r0, r6, #120	; 0x78
        25a9d8:	eb65cb33 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
        25a9dc:	e5846000 	str	r6, [r4]
        25a9e0:	e3360000 	teq	r6, #0	; 0x0
        25a9e4:	1a000005 	bne	25aa00 <TUSoundChannel::MakeNode(SoundNode **)+0xfc>
        25a9e8:	eb661dcc 	bl	1be2120 <$MemError>
        25a9ec:	e1a06000 	mov	r6, r0
        25a9f0:	ea00001d 	b	25aa6c <TUSoundChannel::MakeNode(SoundNode **)+0x168>
        25a9f4:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        25a9f8:	75736e64 	ldrvcb	r6, [r3, -#3684]!
        25a9fc:	560a6e85 	strpl	r6, [sl], -r5, lsl #29
        25aa00:	e2860078 	add	r0, r6, #120	; 0x78
        25aa04:	e3a01001 	mov	r1, #1	; 0x1
        25aa08:	eb65ec21 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
        25aa0c:	e1b06000 	movs	r6, r0
        25aa10:	1a000015 	bne	25aa6c <TUSoundChannel::MakeNode(SoundNode **)+0x168>
        25aa14:	eb65e3ee 	bl	1bd39d4 <$GetGlobals>
        25aa18:	eb663687 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        25aa1c:	e5901000 	ldr	r1, [r0]
        25aa20:	e5940000 	ldr	r0, [r4]
        25aa24:	e2800078 	add	r0, r0, #120	; 0x78
        25aa28:	eb6604d8 	bl	1bdbd90 <TUAsyncMessage::$SetCollectorPort(unsigned long)>
        25aa2c:	e1b06000 	movs	r6, r0
        25aa30:	1a00000d 	bne	25aa6c <TUSoundChannel::MakeNode(SoundNode **)+0x168>
        25aa34:	e5940000 	ldr	r0, [r4]
        25aa38:	e2800078 	add	r0, r0, #120	; 0x78
        25aa3c:	e1a01005 	mov	r1, r5
        25aa40:	eb6608f2 	bl	1bdce10 <TUSharedMemMsg::$SetUserRefCon(unsigned long)>
        25aa44:	e1b06000 	movs	r6, r0
        25aa48:	1a000007 	bne	25aa6c <TUSoundChannel::MakeNode(SoundNode **)+0x168>
        25aa4c:	e1a00005 	mov	r0, r5
        25aa50:	eb66c2cd 	bl	1c0b58c <TUSoundChannel::$UniqueId(void)>
        25aa54:	e5941000 	ldr	r1, [r4]
        25aa58:	e5a10004 	str	r0, [r1, #4]!	; fField4
        25aa5c:	e5940000 	ldr	r0, [r4]
        25aa60:	e5807000 	str	r7, [r0]
        25aa64:	e5940000 	ldr	r0, [r4]
        25aa68:	e5a07008 	str	r7, [r0, #8]!
        25aa6c:	e1a00006 	mov	r0, r6
        25aa70:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TUSoundChannel::FreeNode(SoundNode *)
 * Address: 0025aa74
 */
TUSoundChannel::FreeNode(SoundNode *) {
    /*
        25aa74:	e1a0c00d 	mov	ip, sp
        25aa78:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        25aa7c:	e24cb004 	sub	fp, ip, #4	; 0x4
        25aa80:	e1a04000 	mov	r4, r0
        25aa84:	e3a00000 	mov	r0, #0	; 0x0
        25aa88:	e5942028 	ldr	r2, [r4, #40]	; fField40
        25aa8c:	e1b03002 	movs	r3, r2
        25aa90:	0a000005 	beq	25aaac <TUSoundChannel::FreeNode(SoundNode *)+0x38>
        25aa94:	e2800001 	add	r0, r0, #1	; 0x1
        25aa98:	e5922000 	ldr	r2, [r2]
        25aa9c:	e3320000 	teq	r2, #0	; 0x0
        25aaa0:	1afffffb 	bne	25aa94 <TUSoundChannel::FreeNode(SoundNode *)+0x20>
        25aaa4:	e3500002 	cmp	r0, #2	; 0x2
        25aaa8:	aa000002 	bge	25aab8 <TUSoundChannel::FreeNode(SoundNode *)+0x44>
        25aaac:	e5813000 	str	r3, [r1]
        25aab0:	e5841028 	str	r1, [r4, #40]	; fField40
        25aab4:	ea000006 	b	25aad4 <TUSoundChannel::FreeNode(SoundNode *)+0x60>
        25aab8:	e1b05001 	movs	r5, r1
        25aabc:	0a000004 	beq	25aad4 <TUSoundChannel::FreeNode(SoundNode *)+0x60>
        25aac0:	e2850078 	add	r0, r5, #120	; 0x78
        25aac4:	e3a01000 	mov	r1, #0	; 0x0
        25aac8:	eb65cf10 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        25aacc:	e1a00005 	mov	r0, r5
        25aad0:	eb65cb02 	bl	1bcd6e0 <$__dl(void *)>
        25aad4:	e5940024 	ldr	r0, [r4, #36]	; fField36
        25aad8:	e3300000 	teq	r0, #0	; 0x0
        25aadc:	05940014 	ldreq	r0, [r4, #20]	; fField20
        25aae0:	03c0000c 	biceq	r0, r0, #12	; 0xc
        25aae4:	05a40014 	streq	r0, [r4, #20]!	; fField20
        25aae8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TUSoundChannel::FindNode(unsigned long)
 * Address: 0025aaec
 */
TUSoundChannel::FindNode(unsigned long) {
    /*
        25aaec:	e5900024 	ldr	r0, [r0, #36]	; fField36
        25aaf0:	e3300000 	teq	r0, #0	; 0x0
        25aaf4:	01a0f00e 	moveq	pc, lr
        25aaf8:	e5902004 	ldr	r2, [r0, #4]	; fField4
        25aafc:	e1320001 	teq	r2, r1
        25ab00:	15900000 	ldrne	r0, [r0]
        25ab04:	13300000 	teqne	r0, #0	; 0x0
        25ab08:	1afffffa 	bne	25aaf8 <TUSoundChannel::FindNode(unsigned long)+0xc>
        25ab0c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TUSoundChannel::FindRefCon(unsigned long)
 * Address: 0025ab10
 */
TUSoundChannel::FindRefCon(unsigned long) {
    /*
        25ab10:	e5900024 	ldr	r0, [r0, #36]	; fField36
        25ab14:	e3300000 	teq	r0, #0	; 0x0
        25ab18:	01a0f00e 	moveq	pc, lr
        25ab1c:	e5902044 	ldr	r2, [r0, #68]	; fField68
        25ab20:	e1320001 	teq	r2, r1
        25ab24:	15900000 	ldrne	r0, [r0]
        25ab28:	13300000 	teqne	r0, #0	; 0x0
        25ab2c:	1afffffa 	bne	25ab1c <TUSoundChannel::FindRefCon(unsigned long)+0xc>
        25ab30:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TUSoundChannel::UniqueId(void)
 * Address: 0025ab34
 */
TUSoundChannel::UniqueId(void) {
    /*
        25ab34:	e1a0c00d 	mov	ip, sp
        25ab38:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        25ab3c:	e24cb004 	sub	fp, ip, #4	; 0x4
        25ab40:	e1a04000 	mov	r4, r0
        25ab44:	e3a05001 	mov	r5, #1	; 0x1
        25ab48:	e5940020 	ldr	r0, [r4, #32]	; fField32
        25ab4c:	e2901001 	adds	r1, r0, #1	; 0x1
        25ab50:	e5841020 	str	r1, [r4, #32]	; fField32
        25ab54:	01a01005 	moveq	r1, r5
        25ab58:	05845020 	streq	r5, [r4, #32]	; fField32
        25ab5c:	e1a00004 	mov	r0, r4
        25ab60:	eb66be7f 	bl	1c0a564 <TUSoundChannel::$FindNode(unsigned long)>
        25ab64:	e3300000 	teq	r0, #0	; 0x0
        25ab68:	1afffff6 	bne	25ab48 <TUSoundChannel::UniqueId(void)+0x14>
        25ab6c:	e5b40020 	ldr	r0, [r4, #32]!	; fField32
        25ab70:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TUSoundChannel::AbortBusy(void)
 * Address: 0025ab74
 */
TUSoundChannel::AbortBusy(void) {
    /*
        25ab74:	e1a0c00d 	mov	ip, sp
        25ab78:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        25ab7c:	e24cb004 	sub	fp, ip, #4	; 0x4
        25ab80:	e1a04000 	mov	r4, r0
        25ab84:	e5906024 	ldr	r6, [r0, #36]	; fField36
        25ab88:	e3360000 	teq	r6, #0	; 0x0
        25ab8c:	0a000013 	beq	25abe0 <TUSoundChannel::AbortBusy(void)+0x6c>
        25ab90:	e3a050c5 	mov	r5, #197	; 0xc5
        25ab94:	e2455c76 	sub	r5, r5, #30208	; 0x7600
        25ab98:	e2860078 	add	r0, r6, #120	; 0x78
        25ab9c:	eb65ceea 	bl	1bce74c <TUAsyncMessage::$Abort(void)>
        25aba0:	e596c008 	ldr	ip, [r6, #8]
        25aba4:	e33c0000 	teq	ip, #0	; 0x0
        25aba8:	e5967000 	ldr	r7, [r6]
        25abac:	0a000006 	beq	25abcc <TUSoundChannel::AbortBusy(void)+0x58>
        25abb0:	e2861020 	add	r1, r6, #32	; 0x20
        25abb4:	e1a0000c 	mov	r0, ip
        25abb8:	e1a03005 	mov	r3, r5
        25abbc:	e3a02001 	mov	r2, #1	; 0x1
        25abc0:	e59cc000 	ldr	ip, [ip]
        25abc4:	e1a0e00f 	mov	lr, pc
        25abc8:	e28cf004 	add	pc, ip, #4	; 0x4
        25abcc:	e1a01006 	mov	r1, r6
        25abd0:	e1a00004 	mov	r0, r4
        25abd4:	eb66be64 	bl	1c0a56c <TUSoundChannel::$FreeNode(SoundNode *)>
        25abd8:	e1b06007 	movs	r6, r7
        25abdc:	1affffed 	bne	25ab98 <TUSoundChannel::AbortBusy(void)+0x24>
        25abe0:	e3a00000 	mov	r0, #0	; 0x0
        25abe4:	e5a40024 	str	r0, [r4, #36]!	; fField36
        25abe8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TUSoundChannel::__dt(void)
 * Address: 0025ac80
 */
TUSoundChannel::~TUSoundChannel(void) {
    /*
        25ac80:	e1a0c00d 	mov	ip, sp
        25ac84:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        25ac88:	e24cb004 	sub	fp, ip, #4	; 0x4
        25ac8c:	e1a04000 	mov	r4, r0
        25ac90:	e1a05001 	mov	r5, r1
        25ac94:	e59f005c 	ldr	r0, [pc, #5c]	; 25acf8 <TUSoundChannel::__dt(void)+0x78>
        25ac98:	e5840000 	str	r0, [r4]
        25ac9c:	e1a00004 	mov	r0, r4
        25aca0:	eb66be2e 	bl	1c0a560 <TUSoundChannel::$Close(void)>
        25aca4:	e5946028 	ldr	r6, [r4, #40]	; fField40
        25aca8:	e3360000 	teq	r6, #0	; 0x0
        25acac:	0a000009 	beq	25acd8 <TUSoundChannel::__dt(void)+0x58>
        25acb0:	e5967000 	ldr	r7, [r6]
        25acb4:	e3360000 	teq	r6, #0	; 0x0
        25acb8:	0a000004 	beq	25acd0 <TUSoundChannel::__dt(void)+0x50>
        25acbc:	e2860078 	add	r0, r6, #120	; 0x78
        25acc0:	e3a01000 	mov	r1, #0	; 0x0
        25acc4:	eb65ce91 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        25acc8:	e1a00006 	mov	r0, r6
        25accc:	eb65ca83 	bl	1bcd6e0 <$__dl(void *)>
        25acd0:	e1b06007 	movs	r6, r7
        25acd4:	1afffff5 	bne	25acb0 <TUSoundChannel::__dt(void)+0x30>
        25acd8:	e1a00004 	mov	r0, r4
        25acdc:	e3a01000 	mov	r1, #0	; 0x0
        25ace0:	eb662562 	bl	1be4270 <TAEventHandler::$__dt(void)>
        25ace4:	e3150001 	tst	r5, #1	; 0x1
        25ace8:	11a00004 	movne	r0, r4
        25acec:	191b68f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, lr}
        25acf0:	1a65ca7a 	bne	1bcd6e0 <$__dl(void *)>
        25acf4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        25acf8:	0001dbc8 	andeq	sp, r1, r8, asr #23
    */
}

/**
 * Symbol: TUSoundChannel::SetVolume(long)
 * Address: 0025ad6c
 */
TUSoundChannel::SetVolume(long) {
    /*
        25ad6c:	e1a0c00d 	mov	ip, sp
        25ad70:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        25ad74:	e24cb004 	sub	fp, ip, #4	; 0x4
        25ad78:	e1a04000 	mov	r4, r0
        25ad7c:	e1a05001 	mov	r5, r1
        25ad80:	e1a06001 	mov	r6, r1
        25ad84:	e580102c 	str	r1, [r0, #44]	; fField44
        25ad88:	e5900024 	ldr	r0, [r0, #36]	; fField36
        25ad8c:	e3300000 	teq	r0, #0	; 0x0
        25ad90:	1a000003 	bne	25ada4 <TUSoundChannel::SetVolume(long)+0x38>
        25ad94:	e59f006c 	ldr	r0, [pc, #6c]	; 25ae08 <TUSoundChannel::SetVolume(long)+0x9c>
        25ad98:	e5900000 	ldr	r0, [r0]
        25ad9c:	e1340000 	teq	r4, r0
        25ada0:	1a000016 	bne	25ae00 <TUSoundChannel::SetVolume(long)+0x94>
        25ada4:	e24dd014 	sub	sp, sp, #20	; 0x14
        25ada8:	e1a0000d 	mov	r0, sp
        25adac:	eb662521 	bl	1be4238 <TAEvent::$__ct(void)>
        25adb0:	e59f0054 	ldr	r0, [pc, #54]	; 25ae0c <TUSoundChannel::SetVolume(long)+0xa0>
        25adb4:	e58d0000 	str	r0, [sp]
        25adb8:	e59f0050 	ldr	r0, [pc, #50]	; 25ae10 <TUSoundChannel::SetVolume(long)+0xa4>
        25adbc:	e58d0004 	str	r0, [sp, #4]	; fField4
        25adc0:	e3a00000 	mov	r0, #0	; 0x0
        25adc4:	e58d0008 	str	r0, [sp, #8]
        25adc8:	e58d000c 	str	r0, [sp, #12]
        25adcc:	e3a03014 	mov	r3, #20	; 0x14
        25add0:	e58d0010 	str	r0, [sp, #16]
        25add4:	e1a0200d 	mov	r2, sp
        25add8:	e92d000c 	stmdb	sp!, {r2, r3}
        25addc:	e1a03005 	mov	r3, r5
        25ade0:	e1a00004 	mov	r0, r4
        25ade4:	e3a02000 	mov	r2, #0	; 0x0
        25ade8:	e3a0100f 	mov	r1, #15	; 0xf
        25adec:	eb649477 	bl	1b7ffd0 <TUSoundChannel::$SendImmediate(unsigned long, unsigned long, unsigned long, TUSoundReply *, unsigned long)>
        25adf0:	e28dd008 	add	sp, sp, #8	; 0x8
        25adf4:	e3300000 	teq	r0, #0	; 0x0
        25adf8:	059d6010 	ldreq	r6, [sp, #16]
        25adfc:	e28dd014 	add	sp, sp, #20	; 0x14
        25ae00:	e1a00006 	mov	r0, r6
        25ae04:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        25ae08:	0c101b08 	ldceq	11, cr1, [r0], -#32	; fField32
        25ae0c:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        25ae10:	75736e64 	ldrvcb	r6, [r3, -#3684]!
    */
}

/**
 * Symbol: TUSoundChannel::GetVolume(void)
 * Address: 0025ae14
 */
TUSoundChannel::GetVolume(void) {
    /*
        25ae14:	e1a0c00d 	mov	ip, sp
        25ae18:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        25ae1c:	e24cb004 	sub	fp, ip, #4	; 0x4
        25ae20:	e1a04000 	mov	r4, r0
        25ae24:	e590502c 	ldr	r5, [r0, #44]	; fField44
        25ae28:	e5900024 	ldr	r0, [r0, #36]	; fField36
        25ae2c:	e3300000 	teq	r0, #0	; 0x0
        25ae30:	1a000003 	bne	25ae44 <TUSoundChannel::GetVolume(void)+0x30>
        25ae34:	e59f0078 	ldr	r0, [pc, #78]	; 25aeb4 <TUSoundChannel::GetVolume(void)+0xa0>
        25ae38:	e5900000 	ldr	r0, [r0]
        25ae3c:	e1340000 	teq	r4, r0
        25ae40:	1a000019 	bne	25aeac <TUSoundChannel::GetVolume(void)+0x98>
        25ae44:	e5940014 	ldr	r0, [r4, #20]	; fField20
        25ae48:	e3100080 	tst	r0, #128	; 0x80
        25ae4c:	0a000016 	beq	25aeac <TUSoundChannel::GetVolume(void)+0x98>
        25ae50:	e24dd014 	sub	sp, sp, #20	; 0x14
        25ae54:	e1a0000d 	mov	r0, sp
        25ae58:	eb6624f6 	bl	1be4238 <TAEvent::$__ct(void)>
        25ae5c:	e59f0054 	ldr	r0, [pc, #54]	; 25aeb8 <TUSoundChannel::GetVolume(void)+0xa4>
        25ae60:	e58d0000 	str	r0, [sp]
        25ae64:	e59f0050 	ldr	r0, [pc, #50]	; 25aebc <TUSoundChannel::GetVolume(void)+0xa8>
        25ae68:	e58d0004 	str	r0, [sp, #4]	; fField4
        25ae6c:	e3a00000 	mov	r0, #0	; 0x0
        25ae70:	e58d0008 	str	r0, [sp, #8]
        25ae74:	e58d000c 	str	r0, [sp, #12]
        25ae78:	e3a03014 	mov	r3, #20	; 0x14
        25ae7c:	e58d0010 	str	r0, [sp, #16]
        25ae80:	e1a0200d 	mov	r2, sp
        25ae84:	e92d000c 	stmdb	sp!, {r2, r3}
        25ae88:	e1a00004 	mov	r0, r4
        25ae8c:	e3a03000 	mov	r3, #0	; 0x0
        25ae90:	e3a02000 	mov	r2, #0	; 0x0
        25ae94:	e3a01015 	mov	r1, #21	; 0x15
        25ae98:	eb64944c 	bl	1b7ffd0 <TUSoundChannel::$SendImmediate(unsigned long, unsigned long, unsigned long, TUSoundReply *, unsigned long)>
        25ae9c:	e28dd008 	add	sp, sp, #8	; 0x8
        25aea0:	e3300000 	teq	r0, #0	; 0x0
        25aea4:	059d5010 	ldreq	r5, [sp, #16]
        25aea8:	e28dd014 	add	sp, sp, #20	; 0x14
        25aeac:	e1a00005 	mov	r0, r5
        25aeb0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        25aeb4:	0c101b08 	ldceq	11, cr1, [r0], -#32	; fField32
        25aeb8:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        25aebc:	75736e64 	ldrvcb	r6, [r3, -#3684]!
    */
}

/**
 * Symbol: TUSoundChannel::SetInputGain(long)
 * Address: 0025aec0
 */
TUSoundChannel::SetInputGain(long) {
    /*
        25aec0:	e1a0c00d 	mov	ip, sp
        25aec4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        25aec8:	e24cb004 	sub	fp, ip, #4	; 0x4
        25aecc:	e1a04000 	mov	r4, r0
        25aed0:	e1a05001 	mov	r5, r1
        25aed4:	e5801030 	str	r1, [r0, #48]	; fField48
        25aed8:	e5900018 	ldr	r0, [r0, #24]	; fField24
        25aedc:	e3300000 	teq	r0, #0	; 0x0
        25aee0:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        25aee4:	e24dd014 	sub	sp, sp, #20	; 0x14
        25aee8:	e1a0000d 	mov	r0, sp
        25aeec:	eb6624d1 	bl	1be4238 <TAEvent::$__ct(void)>
        25aef0:	e59f003c 	ldr	r0, [pc, #3c]	; 25af34 <TUSoundChannel::SetInputGain(long)+0x74>
        25aef4:	e58d0000 	str	r0, [sp]
        25aef8:	e59f0038 	ldr	r0, [pc, #38]	; 25af38 <TUSoundChannel::SetInputGain(long)+0x78>
        25aefc:	e58d0004 	str	r0, [sp, #4]	; fField4
        25af00:	e3a00000 	mov	r0, #0	; 0x0
        25af04:	e58d0008 	str	r0, [sp, #8]
        25af08:	e58d000c 	str	r0, [sp, #12]
        25af0c:	e3a03014 	mov	r3, #20	; 0x14
        25af10:	e58d0010 	str	r0, [sp, #16]
        25af14:	e1a0200d 	mov	r2, sp
        25af18:	e92d000c 	stmdb	sp!, {r2, r3}
        25af1c:	e1a03005 	mov	r3, r5
        25af20:	e5942018 	ldr	r2, [r4, #24]	; fField24
        25af24:	e1a00004 	mov	r0, r4
        25af28:	e3a01010 	mov	r1, #16	; 0x10
        25af2c:	eb649427 	bl	1b7ffd0 <TUSoundChannel::$SendImmediate(unsigned long, unsigned long, unsigned long, TUSoundReply *, unsigned long)>
        25af30:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        25af34:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        25af38:	75736e64 	ldrvcb	r6, [r3, -#3684]!
    */
}

/**
 * Symbol: TUSoundChannel::GetInputGain(void)
 * Address: 0025af3c
 */
TUSoundChannel::GetInputGain(void) {
    /*
        25af3c:	e5900030 	ldr	r0, [r0, #48]	; fField48
        25af40:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TUSoundChannel::Open(int, int)
 * Address: 0025af44
 */
TUSoundChannel::Open(int, int) {
    /*
        25af44:	e1a0c00d 	mov	ip, sp
        25af48:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        25af4c:	e24cb004 	sub	fp, ip, #4	; 0x4
        25af50:	e1a04000 	mov	r4, r0
        25af54:	e1a07001 	mov	r7, r1
        25af58:	e1a05002 	mov	r5, r2
        25af5c:	e59f8060 	ldr	r8, [pc, #60]	; 25afc4 <TUSoundChannel::Open(int, int)+0x80>
        25af60:	e1a02008 	mov	r2, r8
        25af64:	e59f605c 	ldr	r6, [pc, #5c]	; 25afc8 <TUSoundChannel::Open(int, int)+0x84>
        25af68:	e1a01006 	mov	r1, r6
        25af6c:	eb66394f 	bl	1be94b0 <TAEventHandler::$Init(unsigned long, unsigned long)>
        25af70:	e59f0054 	ldr	r0, [pc, #54]	; 25afcc <TUSoundChannel::Open(int, int)+0x88>
        25af74:	e5900000 	ldr	r0, [r0]
        25af78:	e3300000 	teq	r0, #0	; 0x0
        25af7c:	0a00003b 	beq	25b070 <TUSoundChannel::Open(int, int)+0x12c>
        25af80:	e24dd014 	sub	sp, sp, #20	; 0x14
        25af84:	e1a0000d 	mov	r0, sp
        25af88:	eb6624aa 	bl	1be4238 <TAEvent::$__ct(void)>
        25af8c:	e3a00000 	mov	r0, #0	; 0x0
        25af90:	e58d0008 	str	r0, [sp, #8]
        25af94:	e58d6004 	str	r6, [sp, #4]	; fField4
        25af98:	e58d8000 	str	r8, [sp]
        25af9c:	e58d000c 	str	r0, [sp, #12]
        25afa0:	e3370000 	teq	r7, #0	; 0x0
        25afa4:	e58d0010 	str	r0, [sp, #16]
        25afa8:	e5940014 	ldr	r0, [r4, #20]	; fField20
        25afac:	0a000007 	beq	25afd0 <TUSoundChannel::Open(int, int)+0x8c>
        25afb0:	e3800002 	orr	r0, r0, #2	; 0x2
        25afb4:	e3a01007 	mov	r1, #7	; 0x7
        25afb8:	e3a06013 	mov	r6, #19	; 0x13
        25afbc:	e5840014 	str	r0, [r4, #20]	; fField20
        25afc0:	ea000006 	b	25afe0 <TUSoundChannel::Open(int, int)+0x9c>
        25afc4:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        25afc8:	75736e64 	ldrvcb	r6, [r3, -#3684]!
        25afcc:	0c101b10 	ldceq	11, cr1, [r0], -#64
        25afd0:	e3800001 	orr	r0, r0, #1	; 0x1
        25afd4:	e3a01006 	mov	r1, #6	; 0x6
        25afd8:	e3a06014 	mov	r6, #20	; 0x14
        25afdc:	e5840014 	str	r0, [r4, #20]	; fField20
        25afe0:	e3a03014 	mov	r3, #20	; 0x14
        25afe4:	e1a0200d 	mov	r2, sp
        25afe8:	e92d000c 	stmdb	sp!, {r2, r3}
        25afec:	e1a03005 	mov	r3, r5
        25aff0:	e1a00004 	mov	r0, r4
        25aff4:	e3a02000 	mov	r2, #0	; 0x0
        25aff8:	eb6493f4 	bl	1b7ffd0 <TUSoundChannel::$SendImmediate(unsigned long, unsigned long, unsigned long, TUSoundReply *, unsigned long)>
        25affc:	e28dd008 	add	sp, sp, #8	; 0x8
        25b000:	e1b05000 	movs	r5, r0
        25b004:	059d500c 	ldreq	r5, [sp, #12]
        25b008:	03350000 	teqeq	r5, #0	; 0x0
        25b00c:	059d0008 	ldreq	r0, [sp, #8]
        25b010:	05840018 	streq	r0, [r4, #24]	; fField24
        25b014:	0a000001 	beq	25b020 <TUSoundChannel::Open(int, int)+0xdc>
        25b018:	e3350000 	teq	r5, #0	; 0x0
        25b01c:	1a000011 	bne	25b068 <TUSoundChannel::Open(int, int)+0x124>
        25b020:	e3a03014 	mov	r3, #20	; 0x14
        25b024:	e1a0200d 	mov	r2, sp
        25b028:	e92d000c 	stmdb	sp!, {r2, r3}
        25b02c:	e1a01006 	mov	r1, r6
        25b030:	e5943018 	ldr	r3, [r4, #24]	; fField24
        25b034:	e1a00004 	mov	r0, r4
        25b038:	e3a02000 	mov	r2, #0	; 0x0
        25b03c:	eb6493e3 	bl	1b7ffd0 <TUSoundChannel::$SendImmediate(unsigned long, unsigned long, unsigned long, TUSoundReply *, unsigned long)>
        25b040:	e28dd008 	add	sp, sp, #8	; 0x8
        25b044:	e1b05000 	movs	r5, r0
        25b048:	059d500c 	ldreq	r5, [sp, #12]
        25b04c:	03350000 	teqeq	r5, #0	; 0x0
        25b050:	059d0008 	ldreq	r0, [sp, #8]
        25b054:	05a4001c 	streq	r0, [r4, #28]!	; fField28
        25b058:	0a000002 	beq	25b068 <TUSoundChannel::Open(int, int)+0x124>
        25b05c:	e3350000 	teq	r5, #0	; 0x0
        25b060:	11a00004 	movne	r0, r4
        25b064:	1b66bd3d 	blne	1c0a560 <TUSoundChannel::$Close(void)>
        25b068:	e28dd014 	add	sp, sp, #20	; 0x14
        25b06c:	ea000001 	b	25b078 <TUSoundChannel::Open(int, int)+0x134>
        25b070:	e3a05ead 	mov	r5, #2768	; 0xad0
        25b074:	e2455902 	sub	r5, r5, #32768	; 0x8000
        25b078:	e1a00005 	mov	r0, r5
        25b07c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TUSoundChannel::SetOutputDevice(long)
 * Address: 0025b080
 */
TUSoundChannel::SetOutputDevice(long) {
    /*
        25b080:	e1a0c00d 	mov	ip, sp
        25b084:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        25b088:	e24cb004 	sub	fp, ip, #4	; 0x4
        25b08c:	e1a04000 	mov	r4, r0
        25b090:	e1a05001 	mov	r5, r1
        25b094:	e5801038 	str	r1, [r0, #56]
        25b098:	e5900018 	ldr	r0, [r0, #24]	; fField24
        25b09c:	e3300000 	teq	r0, #0	; 0x0
        25b0a0:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        25b0a4:	e24dd014 	sub	sp, sp, #20	; 0x14
        25b0a8:	e1a0000d 	mov	r0, sp
        25b0ac:	eb662461 	bl	1be4238 <TAEvent::$__ct(void)>
        25b0b0:	e59f003c 	ldr	r0, [pc, #3c]	; 25b0f4 <TUSoundChannel::SetOutputDevice(long)+0x74>
        25b0b4:	e58d0000 	str	r0, [sp]
        25b0b8:	e59f0038 	ldr	r0, [pc, #38]	; 25b0f8 <TUSoundChannel::SetOutputDevice(long)+0x78>
        25b0bc:	e58d0004 	str	r0, [sp, #4]	; fField4
        25b0c0:	e3a00000 	mov	r0, #0	; 0x0
        25b0c4:	e58d0008 	str	r0, [sp, #8]
        25b0c8:	e58d000c 	str	r0, [sp, #12]
        25b0cc:	e3a03014 	mov	r3, #20	; 0x14
        25b0d0:	e58d0010 	str	r0, [sp, #16]
        25b0d4:	e1a0200d 	mov	r2, sp
        25b0d8:	e92d000c 	stmdb	sp!, {r2, r3}
        25b0dc:	e1a03005 	mov	r3, r5
        25b0e0:	e5942018 	ldr	r2, [r4, #24]	; fField24
        25b0e4:	e1a00004 	mov	r0, r4
        25b0e8:	e3a01012 	mov	r1, #18	; 0x12
        25b0ec:	eb6493b7 	bl	1b7ffd0 <TUSoundChannel::$SendImmediate(unsigned long, unsigned long, unsigned long, TUSoundReply *, unsigned long)>
        25b0f0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        25b0f4:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        25b0f8:	75736e64 	ldrvcb	r6, [r3, -#3684]!
    */
}

/**
 * Symbol: TUSoundChannel::SendImmediate(unsigned long, unsigned long, unsigned long, TUSoundReply *, unsigned long)
 * Address: 0025b0fc
 */
TUSoundChannel::SendImmediate(unsigned long, unsigned long, unsigned long, TUSoundReply *, unsigned long) {
    /*
        25b0fc:	e1a0c00d 	mov	ip, sp
        25b100:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        25b104:	e24cb004 	sub	fp, ip, #4	; 0x4
        25b108:	e1a06001 	mov	r6, r1
        25b10c:	e1a05002 	mov	r5, r2
        25b110:	e1a04003 	mov	r4, r3
        25b114:	e59b7008 	ldr	r7, [fp, #8]
        25b118:	e59b8004 	ldr	r8, [fp, #4]	; fField4
        25b11c:	e24dd018 	sub	sp, sp, #24	; 0x18
        25b120:	e28d0004 	add	r0, sp, #4	; 0x4
        25b124:	eb662443 	bl	1be4238 <TAEvent::$__ct(void)>
        25b128:	e59f0068 	ldr	r0, [pc, #68]	; 25b198 <TUSoundChannel::SendImmediate(unsigned long, unsigned long, unsigned long, TUSoundReply *, unsigned long)+0x9c>	; fField68
        25b12c:	e58d0004 	str	r0, [sp, #4]	; fField4
        25b130:	e59f0064 	ldr	r0, [pc, #64]	; 25b19c <TUSoundChannel::SendImmediate(unsigned long, unsigned long, unsigned long, TUSoundReply *, unsigned long)+0xa0>
        25b134:	e3a0c000 	mov	ip, #0	; 0x0
        25b138:	e58d0008 	str	r0, [sp, #8]
        25b13c:	e58d500c 	str	r5, [sp, #12]
        25b140:	e58d6010 	str	r6, [sp, #16]
        25b144:	e58d4014 	str	r4, [sp, #20]	; fField20
        25b148:	e59f0050 	ldr	r0, [pc, #50]	; 25b1a0 <TUSoundChannel::SendImmediate(unsigned long, unsigned long, unsigned long, TUSoundReply *, unsigned long)+0xa4>
        25b14c:	e590e000 	ldr	lr, [r0]
        25b150:	e1a00008 	mov	r0, r8
        25b154:	e1a01007 	mov	r1, r7
        25b158:	e3a02000 	mov	r2, #0	; 0x0
        25b15c:	e3a04000 	mov	r4, #0	; 0x0
        25b160:	e3a03000 	mov	r3, #0	; 0x0
        25b164:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        25b168:	e1a0300c 	mov	r3, ip
        25b16c:	e1a01004 	mov	r1, r4
        25b170:	e3a00014 	mov	r0, #20	; 0x14
        25b174:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        25b178:	e28d3024 	add	r3, sp, #36	; 0x24
        25b17c:	e92d0008 	stmdb	sp!, {r3}
        25b180:	e28d3024 	add	r3, sp, #36	; 0x24
        25b184:	e1a0000e 	mov	r0, lr
        25b188:	e3a02002 	mov	r2, #2	; 0x2
        25b18c:	e3a01001 	mov	r1, #1	; 0x1
        25b190:	eb65feed 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        25b194:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        25b198:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        25b19c:	75736e64 	ldrvcb	r6, [r3, -#3684]!
        25b1a0:	0c101b10 	ldceq	11, cr1, [r0], -#64
    */
}

/**
 * Symbol: TUSoundChannel::Close(void)
 * Address: 0025b1a4
 */
TUSoundChannel::Close(void) {
    /*
        25b1a4:	e1a0c00d 	mov	ip, sp
        25b1a8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        25b1ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        25b1b0:	e1a04000 	mov	r4, r0
        25b1b4:	e24dd014 	sub	sp, sp, #20	; 0x14
        25b1b8:	e3a05000 	mov	r5, #0	; 0x0
        25b1bc:	e1a0000d 	mov	r0, sp
        25b1c0:	eb66241c 	bl	1be4238 <TAEvent::$__ct(void)>
        25b1c4:	e59f00a4 	ldr	r0, [pc, #a4]	; 25b270 <TUSoundChannel::Close(void)+0xcc>
        25b1c8:	e58d0000 	str	r0, [sp]
        25b1cc:	e59f00a0 	ldr	r0, [pc, #a0]	; 25b274 <TUSoundChannel::Close(void)+0xd0>
        25b1d0:	e3a06000 	mov	r6, #0	; 0x0
        25b1d4:	e98d0041 	stmib	sp, {r0, r6}
        25b1d8:	e58d600c 	str	r6, [sp, #12]
        25b1dc:	e58d6010 	str	r6, [sp, #16]
        25b1e0:	e594001c 	ldr	r0, [r4, #28]	; fField28
        25b1e4:	e3300000 	teq	r0, #0	; 0x0
        25b1e8:	0a000009 	beq	25b214 <TUSoundChannel::Close(void)+0x70>
        25b1ec:	e3a03014 	mov	r3, #20	; 0x14
        25b1f0:	e1a0200d 	mov	r2, sp
        25b1f4:	e92d000c 	stmdb	sp!, {r2, r3}
        25b1f8:	e1a02000 	mov	r2, r0
        25b1fc:	e1a00004 	mov	r0, r4
        25b200:	e3a03000 	mov	r3, #0	; 0x0
        25b204:	e3a01008 	mov	r1, #8	; 0x8
        25b208:	eb649370 	bl	1b7ffd0 <TUSoundChannel::$SendImmediate(unsigned long, unsigned long, unsigned long, TUSoundReply *, unsigned long)>
        25b20c:	e28dd008 	add	sp, sp, #8	; 0x8
        25b210:	e1a05000 	mov	r5, r0
        25b214:	e5940018 	ldr	r0, [r4, #24]	; fField24
        25b218:	e3300000 	teq	r0, #0	; 0x0
        25b21c:	0a00000a 	beq	25b24c <TUSoundChannel::Close(void)+0xa8>
        25b220:	e3a03014 	mov	r3, #20	; 0x14
        25b224:	e1a0200d 	mov	r2, sp
        25b228:	e92d000c 	stmdb	sp!, {r2, r3}
        25b22c:	e1a02000 	mov	r2, r0
        25b230:	e1a00004 	mov	r0, r4
        25b234:	e3a03000 	mov	r3, #0	; 0x0
        25b238:	e3a01008 	mov	r1, #8	; 0x8
        25b23c:	eb649363 	bl	1b7ffd0 <TUSoundChannel::$SendImmediate(unsigned long, unsigned long, unsigned long, TUSoundReply *, unsigned long)>
        25b240:	e28dd008 	add	sp, sp, #8	; 0x8
        25b244:	e3300000 	teq	r0, #0	; 0x0
        25b248:	11a05000 	movne	r5, r0
        25b24c:	e3350000 	teq	r5, #0	; 0x0
        25b250:	1a000004 	bne	25b268 <TUSoundChannel::Close(void)+0xc4>
        25b254:	e59d500c 	ldr	r5, [sp, #12]
        25b258:	e5846018 	str	r6, [r4, #24]	; fField24
        25b25c:	e584601c 	str	r6, [r4, #28]	; fField28
        25b260:	e1a00004 	mov	r0, r4
        25b264:	eb66bcbb 	bl	1c0a558 <TUSoundChannel::$AbortBusy(void)>
        25b268:	e1a00005 	mov	r0, r5
        25b26c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        25b270:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        25b274:	75736e64 	ldrvcb	r6, [r3, -#3684]!
    */
}

/**
 * Symbol: TUSoundChannel::Schedule(SoundBlock *, TUSoundCallback *)
 * Address: 0025b278
 */
TUSoundChannel::Schedule(SoundBlock *, TUSoundCallback *) {
    /*
        25b278:	e1a0c00d 	mov	ip, sp
        25b27c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        25b280:	e24cb004 	sub	fp, ip, #4	; 0x4
        25b284:	e1a04000 	mov	r4, r0
        25b288:	e1a05001 	mov	r5, r1
        25b28c:	e1a06002 	mov	r6, r2
        25b290:	e3a00000 	mov	r0, #0	; 0x0
        25b294:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        25b298:	e594002c 	ldr	r0, [r4, #44]	; fField44
        25b29c:	e3300102 	teq	r0, #-2147483648	; 0x80000000
        25b2a0:	1a000005 	bne	25b2bc <TUSoundChannel::Schedule(SoundBlock *, TUSoundCallback *)+0x44>
        25b2a4:	e5940014 	ldr	r0, [r4, #20]	; fField20
        25b2a8:	e3100080 	tst	r0, #128	; 0x80
        25b2ac:	0a000002 	beq	25b2bc <TUSoundChannel::Schedule(SoundBlock *, TUSoundCallback *)+0x44>
        25b2b0:	e1a00004 	mov	r0, r4
        25b2b4:	eb649344 	bl	1b7ffcc <TUSoundChannel::$GetVolume(void)>
        25b2b8:	e584002c 	str	r0, [r4, #44]	; fField44
        25b2bc:	e5950028 	ldr	r0, [r5, #40]	; fField40
        25b2c0:	e3300000 	teq	r0, #0	; 0x0
        25b2c4:	05948018 	ldreq	r8, [r4, #24]	; fField24
        25b2c8:	1594801c 	ldrne	r8, [r4, #28]	; fField28
        25b2cc:	e595000c 	ldr	r0, [r5, #12]
        25b2d0:	e3300000 	teq	r0, #0	; 0x0
        25b2d4:	13300006 	teqne	r0, #6	; 0x6
        25b2d8:	13300001 	teqne	r0, #1	; 0x1
        25b2dc:	159f7180 	ldrne	r7, [pc, #180]	; 25b464 <TUSoundChannel::Schedule(SoundBlock *, TUSoundCallback *)+0x1ec>
        25b2e0:	1a000059 	bne	25b44c <TUSoundChannel::Schedule(SoundBlock *, TUSoundCallback *)+0x1d4>
        25b2e4:	e3380000 	teq	r8, #0	; 0x0
        25b2e8:	03a070c6 	moveq	r7, #198	; 0xc6
        25b2ec:	02477c76 	subeq	r7, r7, #30208	; 0x7600
        25b2f0:	0a000055 	beq	25b44c <TUSoundChannel::Schedule(SoundBlock *, TUSoundCallback *)+0x1d4>
        25b2f4:	e1a0100d 	mov	r1, sp
        25b2f8:	e1a00004 	mov	r0, r4
        25b2fc:	eb66bc9b 	bl	1c0a570 <TUSoundChannel::$MakeNode(SoundNode **)>
        25b300:	e1b07000 	movs	r7, r0
        25b304:	1a00004e 	bne	25b444 <TUSoundChannel::Schedule(SoundBlock *, TUSoundCallback *)+0x1cc>
        25b308:	e59d0000 	ldr	r0, [sp]
        25b30c:	e5a06008 	str	r6, [r0, #8]!
        25b310:	e3a0000d 	mov	r0, #13	; 0xd
        25b314:	e59d1000 	ldr	r1, [sp]
        25b318:	e5a10018 	str	r0, [r1, #24]!	; fField24
        25b31c:	e59d0000 	ldr	r0, [sp]
        25b320:	e5a08014 	str	r8, [r0, #20]!	; fField20
        25b324:	e59d0000 	ldr	r0, [sp]
        25b328:	e5901004 	ldr	r1, [r0, #4]	; fField4
        25b32c:	e5a0101c 	str	r1, [r0, #28]!	; fField28
        25b330:	e59d0000 	ldr	r0, [sp]
        25b334:	e2800020 	add	r0, r0, #32	; 0x20
        25b338:	e1a0e005 	mov	lr, r5
        25b33c:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        25b340:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        25b344:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        25b348:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        25b34c:	e89e500e 	ldmia	lr, {r1, r2, r3, ip, lr}
        25b350:	e880500e 	stmia	r0, {r1, r2, r3, ip, lr}
        25b354:	e594102c 	ldr	r1, [r4, #44]	; fField44
        25b358:	e59d0000 	ldr	r0, [sp]
        25b35c:	e5a01054 	str	r1, [r0, #84]!
        25b360:	e2851018 	add	r1, r5, #24	; 0x18
        25b364:	e8910003 	ldmia	r1, {r0, r1}
        25b368:	e3500000 	cmp	r0, #0	; 0x0
        25b36c:	e5952004 	ldr	r2, [r5, #4]	; fField4
        25b370:	ba000001 	blt	25b37c <TUSoundChannel::Schedule(SoundBlock *, TUSoundCallback *)+0x104>
        25b374:	e1500002 	cmp	r0, r2
        25b378:	ba000000 	blt	25b380 <TUSoundChannel::Schedule(SoundBlock *, TUSoundCallback *)+0x108>
        25b37c:	e3a00000 	mov	r0, #0	; 0x0
        25b380:	e3510000 	cmp	r1, #0	; 0x0
        25b384:	da000002 	ble	25b394 <TUSoundChannel::Schedule(SoundBlock *, TUSoundCallback *)+0x11c>
        25b388:	e0803001 	add	r3, r0, r1
        25b38c:	e1530002 	cmp	r3, r2
        25b390:	da000000 	ble	25b398 <TUSoundChannel::Schedule(SoundBlock *, TUSoundCallback *)+0x120>
        25b394:	e0421000 	sub	r1, r2, r0
        25b398:	e5952008 	ldr	r2, [r5, #8]
        25b39c:	e0120290 	muls	r2, r0, r2
        25b3a0:	42822007 	addmi	r2, r2, #7	; 0x7
        25b3a4:	e5953000 	ldr	r3, [r5]
        25b3a8:	e08321c2 	add	r2, r3, r2, asr #3
        25b3ac:	e59d3000 	ldr	r3, [sp]
        25b3b0:	e5a30038 	str	r0, [r3, #56]!
        25b3b4:	e59d0000 	ldr	r0, [sp]
        25b3b8:	e5a0103c 	str	r1, [r0, #60]!
        25b3bc:	e59d0000 	ldr	r0, [sp]
        25b3c0:	e5a02020 	str	r2, [r0, #32]!	; fField32
        25b3c4:	e59f009c 	ldr	r0, [pc, #9c]	; 25b468 <TUSoundChannel::Schedule(SoundBlock *, TUSoundCallback *)+0x1f0>
        25b3c8:	e590e000 	ldr	lr, [r0]
        25b3cc:	e59d0000 	ldr	r0, [sp]
        25b3d0:	e280c078 	add	ip, r0, #120	; 0x78
        25b3d4:	e280500c 	add	r5, r0, #12	; 0xc
        25b3d8:	e2800058 	add	r0, r0, #88	; 0x58
        25b3dc:	e3a01020 	mov	r1, #32	; 0x20
        25b3e0:	e3a02000 	mov	r2, #0	; 0x0
        25b3e4:	e3a03000 	mov	r3, #0	; 0x0
        25b3e8:	e3a06000 	mov	r6, #0	; 0x0
        25b3ec:	e3a07000 	mov	r7, #0	; 0x0
        25b3f0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        25b3f4:	e1a03007 	mov	r3, r7
        25b3f8:	e3a02001 	mov	r2, #1	; 0x1
        25b3fc:	e1a01006 	mov	r1, r6
        25b400:	e3a0004c 	mov	r0, #76	; 0x4c
        25b404:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        25b408:	e1a03005 	mov	r3, r5
        25b40c:	e92d0008 	stmdb	sp!, {r3}
        25b410:	e1a0000e 	mov	r0, lr
        25b414:	e3a03000 	mov	r3, #0	; 0x0
        25b418:	e49c1008 	ldr	r1, [ip], #8
        25b41c:	e59c2000 	ldr	r2, [ip]
        25b420:	eb65fe49 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        25b424:	e28dd024 	add	sp, sp, #36	; 0x24
        25b428:	e1b07000 	movs	r7, r0
        25b42c:	1a000004 	bne	25b444 <TUSoundChannel::Schedule(SoundBlock *, TUSoundCallback *)+0x1cc>
        25b430:	e5941024 	ldr	r1, [r4, #36]	; fField36
        25b434:	e59d0000 	ldr	r0, [sp]
        25b438:	e5801000 	str	r1, [r0]
        25b43c:	e59d0000 	ldr	r0, [sp]
        25b440:	e5840024 	str	r0, [r4, #36]	; fField36
        25b444:	e3370000 	teq	r7, #0	; 0x0
        25b448:	0a000003 	beq	25b45c <TUSoundChannel::Schedule(SoundBlock *, TUSoundCallback *)+0x1e4>
        25b44c:	e59d1000 	ldr	r1, [sp]
        25b450:	e3310000 	teq	r1, #0	; 0x0
        25b454:	11a00004 	movne	r0, r4
        25b458:	1b66bc43 	blne	1c0a56c <TUSoundChannel::$FreeNode(SoundNode *)>
        25b45c:	e1a00007 	mov	r0, r7
        25b460:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        25b464:	ffff8ac7 	swinv	0x00ff8ac7
        25b468:	0c101b10 	ldceq	11, cr1, [r0], -#64
    */
}

/**
 * Symbol: TUSoundChannel::Cancel(unsigned long)
 * Address: 0025b46c
 */
TUSoundChannel::Cancel(unsigned long) {
    /*
        25b46c:	e1a0c00d 	mov	ip, sp
        25b470:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        25b474:	e24cb004 	sub	fp, ip, #4	; 0x4
        25b478:	e1a04000 	mov	r4, r0
        25b47c:	e5900018 	ldr	r0, [r0, #24]	; fField24
        25b480:	e3300000 	teq	r0, #0	; 0x0
        25b484:	03a000c6 	moveq	r0, #198	; 0xc6
        25b488:	02400c76 	subeq	r0, r0, #30208	; 0x7600
        25b48c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        25b490:	e1a00004 	mov	r0, r4
        25b494:	eb66bc33 	bl	1c0a568 <TUSoundChannel::$FindRefCon(unsigned long)>
        25b498:	e1b05000 	movs	r5, r0
        25b49c:	03a00fb2 	moveq	r0, #712	; 0x2c8
        25b4a0:	02400b1e 	subeq	r0, r0, #30720	; 0x7800
        25b4a4:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        25b4a8:	e24dd014 	sub	sp, sp, #20	; 0x14
        25b4ac:	e1a0000d 	mov	r0, sp
        25b4b0:	eb662360 	bl	1be4238 <TAEvent::$__ct(void)>
        25b4b4:	e59f0048 	ldr	r0, [pc, #48]	; 25b504 <TUSoundChannel::Cancel(unsigned long)+0x98>	; fField48
        25b4b8:	e58d0000 	str	r0, [sp]
        25b4bc:	e59f0044 	ldr	r0, [pc, #44]	; 25b508 <TUSoundChannel::Cancel(unsigned long)+0x9c>	; fField44
        25b4c0:	e58d0004 	str	r0, [sp, #4]	; fField4
        25b4c4:	e3a00000 	mov	r0, #0	; 0x0
        25b4c8:	e58d0008 	str	r0, [sp, #8]
        25b4cc:	e58d000c 	str	r0, [sp, #12]
        25b4d0:	e3a03014 	mov	r3, #20	; 0x14
        25b4d4:	e58d0010 	str	r0, [sp, #16]
        25b4d8:	e1a0200d 	mov	r2, sp
        25b4dc:	e92d000c 	stmdb	sp!, {r2, r3}
        25b4e0:	e5b53004 	ldr	r3, [r5, #4]!	; fField4
        25b4e4:	e5942018 	ldr	r2, [r4, #24]	; fField24
        25b4e8:	e1a00004 	mov	r0, r4
        25b4ec:	e3a0100e 	mov	r1, #14	; 0xe
        25b4f0:	eb6492b6 	bl	1b7ffd0 <TUSoundChannel::$SendImmediate(unsigned long, unsigned long, unsigned long, TUSoundReply *, unsigned long)>
        25b4f4:	e28dd008 	add	sp, sp, #8	; 0x8
        25b4f8:	e3300000 	teq	r0, #0	; 0x0
        25b4fc:	059d000c 	ldreq	r0, [sp, #12]
        25b500:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        25b504:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        25b508:	75736e64 	ldrvcb	r6, [r3, -#3684]!
    */
}

/**
 * Symbol: TUSoundChannel::Start(int)
 * Address: 0025b50c
 */
TUSoundChannel::Start(int) {
    /*
        25b50c:	e1a0c00d 	mov	ip, sp
        25b510:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        25b514:	e24cb004 	sub	fp, ip, #4	; 0x4
        25b518:	e1a04000 	mov	r4, r0
        25b51c:	e1a05001 	mov	r5, r1
        25b520:	e590001c 	ldr	r0, [r0, #28]	; fField28
        25b524:	e3300000 	teq	r0, #0	; 0x0
        25b528:	03a000c6 	moveq	r0, #198	; 0xc6
        25b52c:	02400c76 	subeq	r0, r0, #30208	; 0x7600
        25b530:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        25b534:	e24dd014 	sub	sp, sp, #20	; 0x14
        25b538:	e1a0000d 	mov	r0, sp
        25b53c:	eb66233d 	bl	1be4238 <TAEvent::$__ct(void)>
        25b540:	e59f0070 	ldr	r0, [pc, #70]	; 25b5b8 <TUSoundChannel::Start(int)+0xac>
        25b544:	e58d0000 	str	r0, [sp]
        25b548:	e59f006c 	ldr	r0, [pc, #6c]	; 25b5bc <TUSoundChannel::Start(int)+0xb0>
        25b54c:	e58d0004 	str	r0, [sp, #4]	; fField4
        25b550:	e3a00000 	mov	r0, #0	; 0x0
        25b554:	e58d0008 	str	r0, [sp, #8]
        25b558:	e58d000c 	str	r0, [sp, #12]
        25b55c:	e3350000 	teq	r5, #0	; 0x0
        25b560:	e58d0010 	str	r0, [sp, #16]
        25b564:	03a0100a 	moveq	r1, #10	; 0xa
        25b568:	13a01009 	movne	r1, #9	; 0x9
        25b56c:	e3a03014 	mov	r3, #20	; 0x14
        25b570:	e1a0200d 	mov	r2, sp
        25b574:	e92d000c 	stmdb	sp!, {r2, r3}
        25b578:	e594201c 	ldr	r2, [r4, #28]	; fField28
        25b57c:	e1a00004 	mov	r0, r4
        25b580:	e3a03000 	mov	r3, #0	; 0x0
        25b584:	eb649291 	bl	1b7ffd0 <TUSoundChannel::$SendImmediate(unsigned long, unsigned long, unsigned long, TUSoundReply *, unsigned long)>
        25b588:	e28dd008 	add	sp, sp, #8	; 0x8
        25b58c:	e3300000 	teq	r0, #0	; 0x0
        25b590:	059d000c 	ldreq	r0, [sp, #12]
        25b594:	03300000 	teqeq	r0, #0	; 0x0
        25b598:	1a000005 	bne	25b5b4 <TUSoundChannel::Start(int)+0xa8>
        25b59c:	e5941014 	ldr	r1, [r4, #20]	; fField20
        25b5a0:	e3c11008 	bic	r1, r1, #8	; 0x8
        25b5a4:	e3350000 	teq	r5, #0	; 0x0
        25b5a8:	e5841014 	str	r1, [r4, #20]	; fField20
        25b5ac:	13811004 	orrne	r1, r1, #4	; 0x4
        25b5b0:	15a41014 	strne	r1, [r4, #20]!	; fField20
        25b5b4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        25b5b8:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        25b5bc:	75736e64 	ldrvcb	r6, [r3, -#3684]!
    */
}

/**
 * Symbol: TUSoundChannel::Pause(SoundBlock *, long *)
 * Address: 0025b5c0
 */
TUSoundChannel::Pause(SoundBlock *, long *) {
    /*
        25b5c0:	e1a0c00d 	mov	ip, sp
        25b5c4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        25b5c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        25b5cc:	e1a04000 	mov	r4, r0
        25b5d0:	e1a06001 	mov	r6, r1
        25b5d4:	e1b05002 	movs	r5, r2
        25b5d8:	13e00000 	mvnne	r0, #0	; 0x0
        25b5dc:	15850000 	strne	r0, [r5]
        25b5e0:	e5940018 	ldr	r0, [r4, #24]	; fField24
        25b5e4:	e3300000 	teq	r0, #0	; 0x0
        25b5e8:	0a00003d 	beq	25b6e4 <TUSoundChannel::Pause(SoundBlock *, long *)+0x124>
        25b5ec:	e5940014 	ldr	r0, [r4, #20]	; fField20
        25b5f0:	e3100008 	tst	r0, #8	; 0x8
        25b5f4:	0a000004 	beq	25b60c <TUSoundChannel::Pause(SoundBlock *, long *)+0x4c>
        25b5f8:	e1a00004 	mov	r0, r4
        25b5fc:	e3a01001 	mov	r1, #1	; 0x1
        25b600:	eb66bfdf 	bl	1c0b584 <TUSoundChannel::$Start(int)>
        25b604:	e1a07000 	mov	r7, r0
        25b608:	ea000037 	b	25b6ec <TUSoundChannel::Pause(SoundBlock *, long *)+0x12c>
        25b60c:	e24dd020 	sub	sp, sp, #32	; 0x20
        25b610:	e1a0000d 	mov	r0, sp
        25b614:	eb662307 	bl	1be4238 <TAEvent::$__ct(void)>
        25b618:	e59f00bc 	ldr	r0, [pc, #bc]	; 25b6dc <TUSoundChannel::Pause(SoundBlock *, long *)+0x11c>
        25b61c:	e58d0000 	str	r0, [sp]
        25b620:	e59f00b8 	ldr	r0, [pc, #b8]	; 25b6e0 <TUSoundChannel::Pause(SoundBlock *, long *)+0x120>
        25b624:	e58d0004 	str	r0, [sp, #4]	; fField4
        25b628:	e3a00000 	mov	r0, #0	; 0x0
        25b62c:	e58d0008 	str	r0, [sp, #8]
        25b630:	e58d000c 	str	r0, [sp, #12]
        25b634:	e58d0010 	str	r0, [sp, #16]
        25b638:	e58d0014 	str	r0, [sp, #20]	; fField20
        25b63c:	e58d0018 	str	r0, [sp, #24]	; fField24
        25b640:	e3a03020 	mov	r3, #32	; 0x20
        25b644:	e58d001c 	str	r0, [sp, #28]	; fField28
        25b648:	e1a0200d 	mov	r2, sp
        25b64c:	e92d000c 	stmdb	sp!, {r2, r3}
        25b650:	e594201c 	ldr	r2, [r4, #28]	; fField28
        25b654:	e1a00004 	mov	r0, r4
        25b658:	e3a03000 	mov	r3, #0	; 0x0
        25b65c:	e3a0100b 	mov	r1, #11	; 0xb
        25b660:	eb64925a 	bl	1b7ffd0 <TUSoundChannel::$SendImmediate(unsigned long, unsigned long, unsigned long, TUSoundReply *, unsigned long)>
        25b664:	e28dd008 	add	sp, sp, #8	; 0x8
        25b668:	e1b07000 	movs	r7, r0
        25b66c:	059d700c 	ldreq	r7, [sp, #12]
        25b670:	03370000 	teqeq	r7, #0	; 0x0
        25b674:	1a000016 	bne	25b6d4 <TUSoundChannel::Pause(SoundBlock *, long *)+0x114>
        25b678:	e5940014 	ldr	r0, [r4, #20]	; fField20
        25b67c:	e3800008 	orr	r0, r0, #8	; 0x8
        25b680:	e5840014 	str	r0, [r4, #20]	; fField20
        25b684:	e1a00004 	mov	r0, r4
        25b688:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        25b68c:	eb66bbb4 	bl	1c0a564 <TUSoundChannel::$FindNode(unsigned long)>
        25b690:	e3300000 	teq	r0, #0	; 0x0
        25b694:	0a00000e 	beq	25b6d4 <TUSoundChannel::Pause(SoundBlock *, long *)+0x114>
        25b698:	e3360000 	teq	r6, #0	; 0x0
        25b69c:	0a000006 	beq	25b6bc <TUSoundChannel::Pause(SoundBlock *, long *)+0xfc>
        25b6a0:	e280e020 	add	lr, r0, #32	; 0x20
        25b6a4:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        25b6a8:	e8a6100e 	stmia	r6!, {r1, r2, r3, ip}
        25b6ac:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        25b6b0:	e8a6100e 	stmia	r6!, {r1, r2, r3, ip}
        25b6b4:	e89e500e 	ldmia	lr, {r1, r2, r3, ip, lr}
        25b6b8:	e886500e 	stmia	r6, {r1, r2, r3, ip, lr}
        25b6bc:	e3350000 	teq	r5, #0	; 0x0
        25b6c0:	0a000003 	beq	25b6d4 <TUSoundChannel::Pause(SoundBlock *, long *)+0x114>
        25b6c4:	e5900038 	ldr	r0, [r0, #56]
        25b6c8:	e59d101c 	ldr	r1, [sp, #28]	; fField28
        25b6cc:	e0800001 	add	r0, r0, r1
        25b6d0:	e5850000 	str	r0, [r5]
        25b6d4:	e28dd020 	add	sp, sp, #32	; 0x20
        25b6d8:	ea000003 	b	25b6ec <TUSoundChannel::Pause(SoundBlock *, long *)+0x12c>
        25b6dc:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        25b6e0:	75736e64 	ldrvcb	r6, [r3, -#3684]!
        25b6e4:	e3a070c6 	mov	r7, #198	; 0xc6
        25b6e8:	e2477c76 	sub	r7, r7, #30208	; 0x7600
        25b6ec:	e1a00007 	mov	r0, r7
        25b6f0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TUSoundChannel::Stop(SoundBlock *, long *)
 * Address: 0025b6f4
 */
TUSoundChannel::Stop(SoundBlock *, long *) {
    /*
        25b6f4:	e1a0c00d 	mov	ip, sp
        25b6f8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        25b6fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        25b700:	e1a04000 	mov	r4, r0
        25b704:	e1a06001 	mov	r6, r1
        25b708:	e1b05002 	movs	r5, r2
        25b70c:	e3a07000 	mov	r7, #0	; 0x0
        25b710:	13e00000 	mvnne	r0, #0	; 0x0
        25b714:	15850000 	strne	r0, [r5]
        25b718:	e5940018 	ldr	r0, [r4, #24]	; fField24
        25b71c:	e3300000 	teq	r0, #0	; 0x0
        25b720:	0a00003a 	beq	25b810 <TUSoundChannel::Stop(SoundBlock *, long *)+0x11c>
        25b724:	e5940014 	ldr	r0, [r4, #20]	; fField20
        25b728:	e3100004 	tst	r0, #4	; 0x4
        25b72c:	0a000039 	beq	25b818 <TUSoundChannel::Stop(SoundBlock *, long *)+0x124>
        25b730:	e24dd020 	sub	sp, sp, #32	; 0x20
        25b734:	e1a0000d 	mov	r0, sp
        25b738:	eb6622be 	bl	1be4238 <TAEvent::$__ct(void)>
        25b73c:	e59f00c4 	ldr	r0, [pc, #c4]	; 25b808 <TUSoundChannel::Stop(SoundBlock *, long *)+0x114>
        25b740:	e58d0000 	str	r0, [sp]
        25b744:	e59f00c0 	ldr	r0, [pc, #c0]	; 25b80c <TUSoundChannel::Stop(SoundBlock *, long *)+0x118>
        25b748:	e58d0004 	str	r0, [sp, #4]	; fField4
        25b74c:	e3a00000 	mov	r0, #0	; 0x0
        25b750:	e58d0008 	str	r0, [sp, #8]
        25b754:	e58d000c 	str	r0, [sp, #12]
        25b758:	e58d0010 	str	r0, [sp, #16]
        25b75c:	e58d0014 	str	r0, [sp, #20]	; fField20
        25b760:	e58d0018 	str	r0, [sp, #24]	; fField24
        25b764:	e3a03020 	mov	r3, #32	; 0x20
        25b768:	e58d001c 	str	r0, [sp, #28]	; fField28
        25b76c:	e1a0200d 	mov	r2, sp
        25b770:	e92d000c 	stmdb	sp!, {r2, r3}
        25b774:	e594201c 	ldr	r2, [r4, #28]	; fField28
        25b778:	e1a00004 	mov	r0, r4
        25b77c:	e3a03000 	mov	r3, #0	; 0x0
        25b780:	e3a0100c 	mov	r1, #12	; 0xc
        25b784:	eb649211 	bl	1b7ffd0 <TUSoundChannel::$SendImmediate(unsigned long, unsigned long, unsigned long, TUSoundReply *, unsigned long)>
        25b788:	e28dd008 	add	sp, sp, #8	; 0x8
        25b78c:	e1b07000 	movs	r7, r0
        25b790:	059d700c 	ldreq	r7, [sp, #12]
        25b794:	03370000 	teqeq	r7, #0	; 0x0
        25b798:	1a000018 	bne	25b800 <TUSoundChannel::Stop(SoundBlock *, long *)+0x10c>
        25b79c:	e5940014 	ldr	r0, [r4, #20]	; fField20
        25b7a0:	e3c0000c 	bic	r0, r0, #12	; 0xc
        25b7a4:	e5840014 	str	r0, [r4, #20]	; fField20
        25b7a8:	e1a00004 	mov	r0, r4
        25b7ac:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        25b7b0:	eb66bb6b 	bl	1c0a564 <TUSoundChannel::$FindNode(unsigned long)>
        25b7b4:	e3300000 	teq	r0, #0	; 0x0
        25b7b8:	0a00000e 	beq	25b7f8 <TUSoundChannel::Stop(SoundBlock *, long *)+0x104>
        25b7bc:	e3360000 	teq	r6, #0	; 0x0
        25b7c0:	0a000006 	beq	25b7e0 <TUSoundChannel::Stop(SoundBlock *, long *)+0xec>
        25b7c4:	e280e020 	add	lr, r0, #32	; 0x20
        25b7c8:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        25b7cc:	e8a6100e 	stmia	r6!, {r1, r2, r3, ip}
        25b7d0:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        25b7d4:	e8a6100e 	stmia	r6!, {r1, r2, r3, ip}
        25b7d8:	e89e500e 	ldmia	lr, {r1, r2, r3, ip, lr}
        25b7dc:	e886500e 	stmia	r6, {r1, r2, r3, ip, lr}
        25b7e0:	e3350000 	teq	r5, #0	; 0x0
        25b7e4:	0a000003 	beq	25b7f8 <TUSoundChannel::Stop(SoundBlock *, long *)+0x104>
        25b7e8:	e5b01038 	ldr	r1, [r0, #56]!
        25b7ec:	e59d001c 	ldr	r0, [sp, #28]	; fField28
        25b7f0:	e0810000 	add	r0, r1, r0
        25b7f4:	e5850000 	str	r0, [r5]
        25b7f8:	e1a00004 	mov	r0, r4
        25b7fc:	eb66bb55 	bl	1c0a558 <TUSoundChannel::$AbortBusy(void)>
        25b800:	e28dd020 	add	sp, sp, #32	; 0x20
        25b804:	ea000003 	b	25b818 <TUSoundChannel::Stop(SoundBlock *, long *)+0x124>
        25b808:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        25b80c:	75736e64 	ldrvcb	r6, [r3, -#3684]!
        25b810:	e3a070c6 	mov	r7, #198	; 0xc6
        25b814:	e2477c76 	sub	r7, r7, #30208	; 0x7600
        25b818:	e1a00007 	mov	r0, r7
        25b81c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

