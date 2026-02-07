#include "include/TVRemoteIRTool.h"

/**
 * Symbol: TVRemoteIRTool::__ct(unsigned long)
 * Address: 0022e61c
 */
TVRemoteIRTool::TVRemoteIRTool(unsigned long) {
    /*
        22e61c:	e1a0c00d 	mov	ip, sp
        22e620:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        22e624:	e24cb004 	sub	fp, ip, #4	; 0x4
        22e628:	e1b04000 	movs	r4, r0
        22e62c:	e1a05001 	mov	r5, r1
        22e630:	1a000003 	bne	22e644 <TVRemoteIRTool::__ct(unsigned long)+0x28>
        22e634:	e3a00e4d 	mov	r0, #1232	; 0x4d0
        22e638:	eb66803e 	bl	1bce738 <$__nw(unsigned int)>
        22e63c:	e1b04000 	movs	r4, r0
        22e640:	0a000006 	beq	22e660 <TVRemoteIRTool::__ct(unsigned long)+0x44>
        22e644:	e1a01005 	mov	r1, r5
        22e648:	e1a00004 	mov	r0, r4
        22e64c:	eb5f6ba0 	bl	1a094d4 <TAsyncSerTool::$__ct(unsigned long)>
        22e650:	e2840e4b 	add	r0, r4, #1200	; 0x4b0
        22e654:	eb6635e7 	bl	1bbbdf8 <TCMOSlowIRBitBang::$__ct(void)>
        22e658:	e59f0008 	ldr	r0, [pc, #8]	; 22e668 <TVRemoteIRTool::__ct(unsigned long)+0x4c>
        22e65c:	e5840000 	str	r0, [r4]
        22e660:	e1a00004 	mov	r0, r4
        22e664:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        22e668:	0001dbdc 	ldreqd	sp, [r1], -ip
    */
}

/**
 * Symbol: TVRemoteIRTool::GetToolName(void)
 * Address: 0022e66c
 */
TVRemoteIRTool::GetToolName(void) {
    /*
        22e66c:	e28f0f00 	add	r0, pc, #0	; 0x0
        22e670:	e1a0f00e 	mov	pc, lr
        22e674:	54565265 	ldrplb	r5, [r6], -#613
        22e678:	6d6f7465 	stcvsl	4, cr7, [pc, -#404]!
        22e67c:	49520000 	ldmmidb	r2, {}^
    */
}

/**
 * Symbol: TVRemoteIRTool::IHReqHandler(void)
 * Address: 0022e680
 */
TVRemoteIRTool::IHReqHandler(void) {
    /*
        22e680:	e1a01000 	mov	r1, r0
        22e684:	e5900270 	ldr	r0, [r0, #624]	; fField624
        22e688:	e3300000 	teq	r0, #0	; 0x0
        22e68c:	01a0f00e 	moveq	pc, lr
        22e690:	e1a00001 	mov	r0, r1
        22e694:	e5911000 	ldr	r1, [r1]
        22e698:	e281fe17 	add	pc, r1, #368	; 0x170
    */
}

/**
 * Symbol: TVRemoteIRTool::DoInput(void)
 * Address: 0022e69c
 */
TVRemoteIRTool::DoInput(void) {
    /*
        22e69c:	e3a03000 	mov	r3, #0	; 0x0
        22e6a0:	e3a02000 	mov	r2, #0	; 0x0
        22e6a4:	e3a01072 	mov	r1, #114	; 0x72
        22e6a8:	e2411c3f 	sub	r1, r1, #16128	; 0x3f00
        22e6ac:	e590c000 	ldr	ip, [r0]
        22e6b0:	e28cf0ec 	add	pc, ip, #236	; 0xec
    */
}

/**
 * Symbol: TVRemoteIRTool::AddDefaultOptions(TOptionArray *)
 * Address: 0022e6b4
 */
TVRemoteIRTool::AddDefaultOptions(TOptionArray *) {
    /*
        22e6b4:	e1a0c00d 	mov	ip, sp
        22e6b8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        22e6bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        22e6c0:	e1a05000 	mov	r5, r0
        22e6c4:	e1a04001 	mov	r4, r1
        22e6c8:	e24dd018 	sub	sp, sp, #24	; 0x18
        22e6cc:	e1a0000d 	mov	r0, sp
        22e6d0:	eb6635c8 	bl	1bbbdf8 <TCMOSlowIRBitBang::$__ct(void)>
        22e6d4:	e1a0200d 	mov	r2, sp
        22e6d8:	e5941000 	ldr	r1, [r4]
        22e6dc:	e1a00004 	mov	r0, r4
        22e6e0:	eb662d6f 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        22e6e4:	e3300000 	teq	r0, #0	; 0x0
        22e6e8:	01a01004 	moveq	r1, r4
        22e6ec:	01a00005 	moveq	r0, r5
        22e6f0:	0b5f73a7 	bleq	1a0b594 <TAsyncSerTool::$AddDefaultOptions(TOptionArray *)>
        22e6f4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TVRemoteIRTool::AddCurrentOptions(TOptionArray *)
 * Address: 0022e6f8
 */
TVRemoteIRTool::AddCurrentOptions(TOptionArray *) {
    /*
        22e6f8:	e1a0c00d 	mov	ip, sp
        22e6fc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        22e700:	e24cb004 	sub	fp, ip, #4	; 0x4
        22e704:	e1a05000 	mov	r5, r0
        22e708:	e1a04001 	mov	r4, r1
        22e70c:	e2802e4b 	add	r2, r0, #1200	; 0x4b0
        22e710:	e5911000 	ldr	r1, [r1]
        22e714:	e1a00004 	mov	r0, r4
        22e718:	eb662d61 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        22e71c:	e3300000 	teq	r0, #0	; 0x0
        22e720:	01a01004 	moveq	r1, r4
        22e724:	01a00005 	moveq	r0, r5
        22e728:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
        22e72c:	0a5f7394 	beq	1a0b584 <TAsyncSerTool::$AddCurrentOptions(TOptionArray *)>
        22e730:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TVRemoteIRTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)
 * Address: 0022e734
 */
TVRemoteIRTool::ProcessOptionStart(TOption *, unsigned long, unsigned long) {
    /*
        22e734:	e1a0c00d 	mov	ip, sp
        22e738:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        22e73c:	e24cb004 	sub	fp, ip, #4	; 0x4
        22e740:	e1a04001 	mov	r4, r1
        22e744:	e3a05000 	mov	r5, #0	; 0x0
        22e748:	e59fc048 	ldr	ip, [pc, #48]	; 22e798 <TVRemoteIRTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x64>
        22e74c:	e132000c 	teq	r2, ip
        22e750:	11a01004 	movne	r1, r4
        22e754:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        22e758:	1a5fc63c 	bne	1a20050 <TAsyncSerTool::$ProcessOptionStart(TOption *, unsigned long, unsigned long)>
        22e75c:	e2800e4b 	add	r0, r0, #1200	; 0x4b0
        22e760:	e3330c01 	teq	r3, #256	; 0x100
        22e764:	13330c02 	teqne	r3, #512	; 0x200
        22e768:	01a01004 	moveq	r1, r4
        22e76c:	0a00000c 	beq	22e7a4 <TVRemoteIRTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x70>
        22e770:	e3330c03 	teq	r3, #768	; 0x300
        22e774:	1a000008 	bne	22e79c <TVRemoteIRTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x68>
        22e778:	e24dd018 	sub	sp, sp, #24	; 0x18
        22e77c:	e1a0000d 	mov	r0, sp
        22e780:	eb66359c 	bl	1bbbdf8 <TCMOSlowIRBitBang::$__ct(void)>
        22e784:	e1a0100d 	mov	r1, sp
        22e788:	e1a00004 	mov	r0, r4
        22e78c:	eb66250f 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
        22e790:	e28dd018 	add	sp, sp, #24	; 0x18
        22e794:	ea000003 	b	22e7a8 <TVRemoteIRTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x74>
        22e798:	69727476 	ldmvsdb	r2!, {r1, r2, r4, r5, r6, sl, ip, sp, lr}^
        22e79c:	e1a01000 	mov	r1, r0
        22e7a0:	e1a00004 	mov	r0, r4
        22e7a4:	eb662509 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
        22e7a8:	e1a00005 	mov	r0, r5
        22e7ac:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TVRemoteIRTool::PacketSentInt(void)
 * Address: 0022e7b0
 */
TVRemoteIRTool::PacketSentInt(void) {
    /*
        22e7b0:	e3a01000 	mov	r1, #0	; 0x0
        22e7b4:	ea5f9471 	b	1a13980 <TSerTool::$IHRequest(unsigned long)>
    */
}

/**
 * Symbol: TVRemoteIRTool::TaskConstructor(void)
 * Address: 0022e7b8
 */
TVRemoteIRTool::TaskConstructor(void) {
    /*
        22e7b8:	e1a0c00d 	mov	ip, sp
        22e7bc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        22e7c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        22e7c4:	e1a04000 	mov	r4, r0
        22e7c8:	eb5fb167 	bl	1a1ad6c <TAsyncSerTool::$TaskConstructor(void)>
        22e7cc:	e3300000 	teq	r0, #0	; 0x0
        22e7d0:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        22e7d4:	e3a01002 	mov	r1, #2	; 0x2
        22e7d8:	e5841300 	str	r1, [r4, #768]	; fField768
        22e7dc:	e59f1030 	ldr	r1, [pc, #30]	; 22e814 <TVRemoteIRTool::TaskConstructor(void)+0x5c>
        22e7e0:	e58412f4 	str	r1, [r4, #756]	; fField756
        22e7e4:	e3a0103a 	mov	r1, #58	; 0x3a
        22e7e8:	e5841158 	str	r1, [r4, #344]	; fField344
        22e7ec:	e3a01b02 	mov	r1, #2048	; 0x800
        22e7f0:	e584115c 	str	r1, [r4, #348]	; fField348
        22e7f4:	e3e01001 	mvn	r1, #1	; 0x1
        22e7f8:	e5841160 	str	r1, [r4, #352]	; fField352
        22e7fc:	e5841164 	str	r1, [r4, #356]	; fField356
        22e800:	e5841168 	str	r1, [r4, #360]	; fField360
        22e804:	e584116c 	str	r1, [r4, #364]	; fField364
        22e808:	e3a01000 	mov	r1, #0	; 0x0
        22e80c:	e5a414c8 	str	r1, [r4, #1224]!	; fField1224
        22e810:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        22e814:	696e6672 	stmvsdb	lr!, {r1, r4, r5, r6, r9, sl, sp, lr}^
    */
}

/**
 * Symbol: TVRemoteIRTool::TaskDestructor(void)
 * Address: 0022e818
 */
TVRemoteIRTool::TaskDestructor(void) {
    /*
        22e818:	ea5fb55b 	b	1a1bd8c <TAsyncSerTool::$TaskDestructor(void)>
    */
}

/**
 * Symbol: TVRemoteIRTool::GetSizeOf(void)
 * Address: 0022e81c
 */
TVRemoteIRTool::GetSizeOf(void) {
    /*
        22e81c:	e3a00e4d 	mov	r0, #1232	; 0x4d0
        22e820:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TVRemoteIRTool::AllocateBuffers(void)
 * Address: 0022e824
 */
TVRemoteIRTool::AllocateBuffers(void) {
    /*
        22e824:	e1a0c00d 	mov	ip, sp
        22e828:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        22e82c:	e24cb004 	sub	fp, ip, #4	; 0x4
        22e830:	e1a04000 	mov	r4, r0
        22e834:	e3a03000 	mov	r3, #0	; 0x0
        22e838:	e92d0008 	stmdb	sp!, {r3}
        22e83c:	e2800fe1 	add	r0, r0, #900	; 0x384
        22e840:	e1a05000 	mov	r5, r0
        22e844:	e3a03002 	mov	r3, #2	; 0x2
        22e848:	e3a02000 	mov	r2, #0	; 0x0
        22e84c:	e3a01004 	mov	r1, #4	; 0x4
        22e850:	e2811b02 	add	r1, r1, #2048	; 0x800
        22e854:	eb675eb2 	bl	1c06324 <TCircleBuf::$Allocate(unsigned long, int, unsigned char, unsigned char)>
        22e858:	e28dd004 	add	sp, sp, #4	; 0x4
        22e85c:	e3300000 	teq	r0, #0	; 0x0
        22e860:	1a000003 	bne	22e874 <TVRemoteIRTool::AllocateBuffers(void)+0x50>
        22e864:	e1a01005 	mov	r1, r5
        22e868:	e5940304 	ldr	r0, [r4, #772]	; fField772
        22e86c:	e59f2010 	ldr	r2, [pc, #10]	; 22e884 <TVRemoteIRTool::AllocateBuffers(void)+0x60>
        22e870:	eb05591d 	bl	384cec <TSerialChip::InitTxDMA(TCircleBuf *, void (*)(void *))>
        22e874:	e3300000 	teq	r0, #0	; 0x0
        22e878:	03a01001 	moveq	r1, #1	; 0x1
        22e87c:	05a413f0 	streq	r1, [r4, #1008]!
        22e880:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        22e884:	01a20020 	moveq	r0, r0, lsr #32
    */
}

/**
 * Symbol: TVRemoteIRTool::ConnectStart(void)
 * Address: 0022e888
 */
TVRemoteIRTool::ConnectStart(void) {
    /*
        22e888:	e1a02000 	mov	r2, r0
        22e88c:	e590030c 	ldr	r0, [r0, #780]	; fField780
        22e890:	e3100080 	tst	r0, #128	; 0x80
        22e894:	e1a00002 	mov	r0, r2
        22e898:	1a5f7faa 	bne	1a0e748 <TSerTool::$ConnectStart(void)>
        22e89c:	e3a01072 	mov	r1, #114	; 0x72
        22e8a0:	e2411c3f 	sub	r1, r1, #16128	; 0x3f00
        22e8a4:	e5922000 	ldr	r2, [r2]
        22e8a8:	e282f054 	add	pc, r2, #84	; 0x54
    */
}

/**
 * Symbol: TVRemoteIRTool::TurnOnSerChip(void)
 * Address: 0022e8ac
 */
TVRemoteIRTool::TurnOnSerChip(void) {
    /*
        22e8ac:	e1a0c00d 	mov	ip, sp
        22e8b0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        22e8b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        22e8b8:	e1a04000 	mov	r4, r0
        22e8bc:	eb5fce1d 	bl	1a22138 <TAsyncSerTool::$TurnOnSerChip(void)>
        22e8c0:	e1b05000 	movs	r5, r0
        22e8c4:	1a000011 	bne	22e910 <TVRemoteIRTool::TurnOnSerChip(void)+0x64>
        22e8c8:	e3a02000 	mov	r2, #0	; 0x0
        22e8cc:	e3a01080 	mov	r1, #128	; 0x80
        22e8d0:	e5940304 	ldr	r0, [r4, #772]	; fField772
        22e8d4:	eb0558fb 	bl	384cc8 <TSerialChip::SetIntSourceEnable(unsigned long, unsigned char)>
        22e8d8:	e3a02000 	mov	r2, #0	; 0x0
        22e8dc:	e3a01040 	mov	r1, #64	; 0x40
        22e8e0:	e5940304 	ldr	r0, [r4, #772]	; fField772
        22e8e4:	eb0558f7 	bl	384cc8 <TSerialChip::SetIntSourceEnable(unsigned long, unsigned char)>
        22e8e8:	e2840e4b 	add	r0, r4, #1200	; 0x4b0
        22e8ec:	e1a01000 	mov	r1, r0
        22e8f0:	e5902008 	ldr	r2, [r0, #8]
        22e8f4:	e3c22cff 	bic	r2, r2, #65280	; 0xff00
        22e8f8:	e3822c02 	orr	r2, r2, #512	; 0x200
        22e8fc:	e5a02008 	str	r2, [r0, #8]!
        22e900:	e5940304 	ldr	r0, [r4, #772]	; fField772
        22e904:	eb0558e0 	bl	384c8c <TSerialChip::ProcessOption(TOption *)>
        22e908:	e3a00001 	mov	r0, #1	; 0x1
        22e90c:	e5a404c8 	str	r0, [r4, #1224]!	; fField1224
        22e910:	e1a00005 	mov	r0, r5
        22e914:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TVRemoteIRTool::DoOutput(void)
 * Address: 0022e918
 */
TVRemoteIRTool::DoOutput(void) {
    /*
        22e918:	e1a0c00d 	mov	ip, sp
        22e91c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        22e920:	e24cb004 	sub	fp, ip, #4	; 0x4
        22e924:	e1a04000 	mov	r4, r0
        22e928:	e3a01000 	mov	r1, #0	; 0x0
        22e92c:	e5d0027a 	ldrb	r0, [r0, #634]	; fField634
        22e930:	e2845fe1 	add	r5, r4, #900	; 0x384
        22e934:	e3300000 	teq	r0, #0	; 0x0
        22e938:	0a00002c 	beq	22e9f0 <TVRemoteIRTool::DoOutput(void)+0xd8>
        22e93c:	e3a00000 	mov	r0, #0	; 0x0
        22e940:	e5c4027a 	strb	r0, [r4, #634]	; fField634
        22e944:	e1a00005 	mov	r0, r5
        22e948:	eb6766ca 	bl	1c08478 <TCircleBuf::$Reset(void)>
        22e94c:	e1a00005 	mov	r0, r5
        22e950:	e3a01000 	mov	r1, #0	; 0x0
        22e954:	eb6766c4 	bl	1c0846c <TCircleBuf::$PutNextByte(unsigned char)>
        22e958:	e2842f9d 	add	r2, r4, #628	; 0x274
        22e95c:	e1a00005 	mov	r0, r5
        22e960:	e5941270 	ldr	r1, [r4, #624]	; fField624
        22e964:	eb675e73 	bl	1c06338 <TCircleBuf::$CopyIn(CBufferList *, unsigned long *)>
        22e968:	e3300000 	teq	r0, #0	; 0x0
        22e96c:	1a00002a 	bne	22ea1c <TVRemoteIRTool::DoOutput(void)+0x104>
        22e970:	e3a03000 	mov	r3, #0	; 0x0
        22e974:	e92d0008 	stmdb	sp!, {r3}
        22e978:	e1a00005 	mov	r0, r5
        22e97c:	e3a02000 	mov	r2, #0	; 0x0
        22e980:	e3a01000 	mov	r1, #0	; 0x0
        22e984:	eb675e6f 	bl	1c06348 <TCircleBuf::$DMABufInfo(unsigned long *, unsigned long *, unsigned char *, unsigned char *)>
        22e988:	e28dd004 	add	sp, sp, #4	; 0x4
        22e98c:	e1a06000 	mov	r6, r0
        22e990:	e1a00005 	mov	r0, r5
        22e994:	eb675e64 	bl	1c0632c <TCircleBuf::$BufferCount(void)>
        22e998:	e1a01000 	mov	r1, r0
        22e99c:	e3a00000 	mov	r0, #0	; 0x0
        22e9a0:	e3510000 	cmp	r1, #0	; 0x0
        22e9a4:	9a000005 	bls	22e9c0 <TVRemoteIRTool::DoOutput(void)+0xa8>
        22e9a8:	e5d62000 	ldrb	r2, [r6]
        22e9ac:	e1e02002 	mvn	r2, r2
        22e9b0:	e4c62001 	strb	r2, [r6], #1
        22e9b4:	e2800001 	add	r0, r0, #1	; 0x1
        22e9b8:	e1500001 	cmp	r0, r1
        22e9bc:	3afffff9 	bcc	22e9a8 <TVRemoteIRTool::DoOutput(void)+0x90>
        22e9c0:	e59404c0 	ldr	r0, [r4, #1216]	; fField1216
        22e9c4:	e58404cc 	str	r0, [r4, #1228]	; fField1228
        22e9c8:	e5d40292 	ldrb	r0, [r4, #658]	; fField658
        22e9cc:	e3300000 	teq	r0, #0	; 0x0
        22e9d0:	13a01001 	movne	r1, #1	; 0x1
        22e9d4:	15940304 	ldrne	r0, [r4, #772]	; fField772
        22e9d8:	1b0558c0 	blne	384ce0 <TSerialChip::ConfigureForOutput(unsigned char)>
        22e9dc:	e1a00004 	mov	r0, r4
        22e9e0:	eb5fc9bf 	bl	1a210e4 <TVRemoteIRTool::$StartIRTransmit(void)>
        22e9e4:	e3300000 	teq	r0, #0	; 0x0
        22e9e8:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        22e9ec:	ea00000a 	b	22ea1c <TVRemoteIRTool::DoOutput(void)+0x104>
        22e9f0:	e59404cc 	ldr	r0, [r4, #1228]	; fField1228
        22e9f4:	e2400001 	sub	r0, r0, #1	; 0x1
        22e9f8:	e58404cc 	str	r0, [r4, #1228]	; fField1228
        22e9fc:	e3500000 	cmp	r0, #0	; 0x0
        22ea00:	da000007 	ble	22ea24 <TVRemoteIRTool::DoOutput(void)+0x10c>
        22ea04:	e1a00005 	mov	r0, r5
        22ea08:	eb676699 	bl	1c08474 <TCircleBuf::$ResetStart(void)>
        22ea0c:	e1a00004 	mov	r0, r4
        22ea10:	eb5fc9b3 	bl	1a210e4 <TVRemoteIRTool::$StartIRTransmit(void)>
        22ea14:	e3300000 	teq	r0, #0	; 0x0
        22ea18:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        22ea1c:	e1a01000 	mov	r1, r0
        22ea20:	ea000003 	b	22ea34 <TVRemoteIRTool::DoOutput(void)+0x11c>
        22ea24:	e5940274 	ldr	r0, [r4, #628]	; fField628
        22ea28:	e3300000 	teq	r0, #0	; 0x0
        22ea2c:	13a01f5f 	movne	r1, #380	; 0x17c
        22ea30:	12411901 	subne	r1, r1, #16384	; 0x4000
        22ea34:	e1a00004 	mov	r0, r4
        22ea38:	e5942000 	ldr	r2, [r4]
        22ea3c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        22ea40:	e282ff63 	add	pc, r2, #396	; 0x18c
    */
}

/**
 * Symbol: TVRemoteIRTool::StartIRTransmit(void)
 * Address: 0022ea44
 */
TVRemoteIRTool::StartIRTransmit(void) {
    /*
        22ea44:	e1a0c00d 	mov	ip, sp
        22ea48:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        22ea4c:	e24cb004 	sub	fp, ip, #4	; 0x4
        22ea50:	e1a04000 	mov	r4, r0
        22ea54:	e5900304 	ldr	r0, [r0, #772]	; fField772
        22ea58:	e3300000 	teq	r0, #0	; 0x0
        22ea5c:	059f0038 	ldreq	r0, [pc, #38]	; 22ea9c <TVRemoteIRTool::StartIRTransmit(void)+0x58>
        22ea60:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        22ea64:	e2840e4b 	add	r0, r4, #1200	; 0x4b0
        22ea68:	e1a01000 	mov	r1, r0
        22ea6c:	e5902008 	ldr	r2, [r0, #8]
        22ea70:	e3c22cff 	bic	r2, r2, #65280	; 0xff00
        22ea74:	e3822c02 	orr	r2, r2, #512	; 0x200
        22ea78:	e5a02008 	str	r2, [r0, #8]!
        22ea7c:	e5940304 	ldr	r0, [r4, #772]	; fField772
        22ea80:	eb055881 	bl	384c8c <TSerialChip::ProcessOption(TOption *)>
        22ea84:	e3300000 	teq	r0, #0	; 0x0
        22ea88:	03a01001 	moveq	r1, #1	; 0x1
        22ea8c:	05b40304 	ldreq	r0, [r4, #772]!	; fField772
        22ea90:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
        22ea94:	0a05589a 	beq	384d04 <TSerialChip::TxDMAControl(unsigned char)>
        22ea98:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        22ea9c:	ffffc173 	swinv	0x00ffc173
    */
}

