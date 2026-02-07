#include "include/ThpPCL.h"

/**
 * Symbol: Sizeof__6ThpPCLSFv
 * Address: 002e56c0
 */
void ThpPCL::Sizeof() {
    /*
        2e56c0:	e3a0004c 	mov	r0, #76	; 0x4c
        2e56c4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ThpPCL::Delete(void)
 * Address: 002e56c8
 */
ThpPCL::Delete(void) {
    /*
        2e56c8:	e5900018 	ldr	r0, [r0, #24]	; fField24
        2e56cc:	e3300000 	teq	r0, #0	; 0x0
        2e56d0:	1a634946 	bne	1bb7bf0 <TEndpoint::$Delete(void)>
        2e56d4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ThpPCL::GetBandPrefs(DotPrinterPrefs *)
 * Address: 002e56d8
 */
ThpPCL::GetBandPrefs(DotPrinterPrefs *) {
    /*
        2e56d8:	e3a00019 	mov	r0, #25	; 0x19
        2e56dc:	e5810000 	str	r0, [r1]
        2e56e0:	e3a00032 	mov	r0, #50	; 0x32
        2e56e4:	e5810004 	str	r0, [r1, #4]
        2e56e8:	e3a00000 	mov	r0, #0	; 0x0
        2e56ec:	e5c10008 	strb	r0, [r1, #8]
        2e56f0:	e3a00001 	mov	r0, #1	; 0x1
        2e56f4:	e5c10009 	strb	r0, [r1, #9]
        2e56f8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ThpPCL::ContinueIO(void)
 * Address: 002e56fc
 */
ThpPCL::ContinueIO(void) {
    /*
        2e56fc:	e3a01001 	mov	r1, #1	; 0x1
        2e5700:	e590201c 	ldr	r2, [r0, #28]	; fField28
        2e5704:	e282ccab 	add	ip, r2, #43776	; 0xab00
        2e5708:	e37c00e0 	cmn	ip, #224	; 0xe0
        2e570c:	1282ccab 	addne	ip, r2, #43776	; 0xab00
        2e5710:	137c00e5 	cmnne	ip, #229	; 0xe5
        2e5714:	0a000002 	beq	2e5724 <ThpPCL::ContinueIO(void)+0x28>
        2e5718:	e5d00020 	ldrb	r0, [r0, #32]	; fField32
        2e571c:	e3300000 	teq	r0, #0	; 0x0
        2e5720:	0a000000 	beq	2e5728 <ThpPCL::ContinueIO(void)+0x2c>
        2e5724:	e3a01000 	mov	r1, #0	; 0x0
        2e5728:	e1a00001 	mov	r0, r1
        2e572c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ThpPCL::DoHandleProblem(void)
 * Address: 002e5730
 */
ThpPCL::DoHandleProblem(void) {
    /*
        2e5730:	e1a0c00d 	mov	ip, sp
        2e5734:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2e5738:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e573c:	e1a04000 	mov	r4, r0
        2e5740:	e3a06000 	mov	r6, #0	; 0x0
        2e5744:	e3a059c2 	mov	r5, #3178496	; 0x308000
        2e5748:	e2855501 	add	r5, r5, #4194304	; 0x400000
        2e574c:	e3a09001 	mov	r9, #1	; 0x1
        2e5750:	e594001c 	ldr	r0, [r4, #28]	; fField28
        2e5754:	e1a02000 	mov	r2, r0
        2e5758:	e1a07000 	mov	r7, r0
        2e575c:	e3a0afee 	mov	sl, #952	; 0x3b8
        2e5760:	e24aaa0b 	sub	sl, sl, #45056	; 0xb000
        2e5764:	e130000a 	teq	r0, sl
        2e5768:	1282cb2b 	addne	ip, r2, #44032	; 0xac00
        2e576c:	137c004b 	cmnne	ip, #75	; 0x4b
        2e5770:	03a06001 	moveq	r6, #1	; 0x1
        2e5774:	e1a03006 	mov	r3, r6
        2e5778:	e92d0008 	stmdb	sp!, {r3}
        2e577c:	e1a03005 	mov	r3, r5
        2e5780:	e2841010 	add	r1, r4, #16	; 0x10
        2e5784:	e8910003 	ldmia	r1, {r0, r1}
        2e5788:	eb63e5ee 	bl	1bdef48 <$CallHandleProblem(PrintConnect *, TPrinter *, long, unsigned long, unsigned char)>
        2e578c:	e28dd004 	add	sp, sp, #4	; 0x4
        2e5790:	e1a08000 	mov	r8, r0
        2e5794:	e3300001 	teq	r0, #1	; 0x1
        2e5798:	05c49020 	streqb	r9, [r4, #32]	; fField32
        2e579c:	0a000001 	beq	2e57a8 <ThpPCL::DoHandleProblem(void)+0x78>
        2e57a0:	e1a00004 	mov	r0, r4
        2e57a4:	eb618b1c 	bl	1b4841c <ThpPCL::$GetStatus(void)>
        2e57a8:	e594001c 	ldr	r0, [r4, #28]	; fField28
        2e57ac:	e3300000 	teq	r0, #0	; 0x0
        2e57b0:	0a000002 	beq	2e57c0 <ThpPCL::DoHandleProblem(void)+0x90>
        2e57b4:	e5d40020 	ldrb	r0, [r4, #32]	; fField32
        2e57b8:	e3300000 	teq	r0, #0	; 0x0
        2e57bc:	0affffe3 	beq	2e5750 <ThpPCL::DoHandleProblem(void)+0x20>
        2e57c0:	e1a00008 	mov	r0, r8
        2e57c4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: ThpPCL::ErrorIsProblem(void)
 * Address: 002e57c8
 */
ThpPCL::ErrorIsProblem(void) {
    /*
        2e57c8:	e590001c 	ldr	r0, [r0, #28]	; fField28
        2e57cc:	e290cb2b 	adds	ip, r0, #44032	; 0xac00
        2e57d0:	d37c00a7 	cmnle	ip, #167	; 0xa7
        2e57d4:	ba000003 	blt	2e57e8 <ThpPCL::ErrorIsProblem(void)+0x20>
        2e57d8:	e290cb2b 	adds	ip, r0, #44032	; 0xac00
        2e57dc:	d37c0044 	cmnle	ip, #68	; 0x44
        2e57e0:	d3a00001 	movle	r0, #1	; 0x1
        2e57e4:	da000000 	ble	2e57ec <ThpPCL::ErrorIsProblem(void)+0x24>
        2e57e8:	e3a00000 	mov	r0, #0	; 0x0
        2e57ec:	e20000ff 	and	r0, r0, #255	; 0xff
        2e57f0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ThpPCL::GetStatus(void)
 * Address: 002e57f4
 */
ThpPCL::GetStatus(void) {
    /*
        2e57f4:	e1a0c00d 	mov	ip, sp
        2e57f8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2e57fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e5800:	e1a04000 	mov	r4, r0
        2e5804:	eb6186fb 	bl	1b473f8 <ThpPCL::$ContinueIO(void)>
        2e5808:	e3300000 	teq	r0, #0	; 0x0
        2e580c:	13a00000 	movne	r0, #0	; 0x0
        2e5810:	15a4001c 	strne	r0, [r4, #28]!	; fField28
        2e5814:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: ThpPCL::InitializeConnection(void)
 * Address: 002e5818
 */
ThpPCL::InitializeConnection(void) {
    /*
        2e5818:	e1a0c00d 	mov	ip, sp
        2e581c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2e5820:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e5824:	e1a04000 	mov	r4, r0
        2e5828:	e24dd018 	sub	sp, sp, #24	; 0x18
        2e582c:	e1a0000d 	mov	r0, sp
        2e5830:	eb6340ab 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
        2e5834:	e1a0000d 	mov	r0, sp
        2e5838:	eb634d0f 	bl	1bb8c7c <TOptionArray::$Init(void)>
        2e583c:	e584001c 	str	r0, [r4, #28]	; fField28
        2e5840:	e3300000 	teq	r0, #0	; 0x0
        2e5844:	0a000001 	beq	2e5850 <ThpPCL::InitializeConnection(void)+0x38>
        2e5848:	e3a04000 	mov	r4, #0	; 0x0
        2e584c:	ea000069 	b	2e59f8 <ThpPCL::InitializeConnection(void)+0x1e0>
        2e5850:	e5940048 	ldr	r0, [r4, #72]	; fField72
        2e5854:	e3300000 	teq	r0, #0	; 0x0
        2e5858:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2e585c:	0a00001f 	beq	2e58e0 <ThpPCL::InitializeConnection(void)+0xc8>
        2e5860:	e1a0000d 	mov	r0, sp
        2e5864:	e3a01303 	mov	r1, #201326592	; 0xc000000
        2e5868:	eb6344ae 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        2e586c:	e1a0000d 	mov	r0, sp
        2e5870:	e59f105c 	ldr	r1, [pc, #5c]	; 2e58d4 <ThpPCL::InitializeConnection(void)+0xbc>
        2e5874:	eb63552e 	bl	1bbad34 <TOption::$SetAsService(unsigned long)>
        2e5878:	e1a0200d 	mov	r2, sp
        2e587c:	e59d100c 	ldr	r1, [sp, #12]
        2e5880:	e28d000c 	add	r0, sp, #12	; 0xc
        2e5884:	eb635106 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        2e5888:	e584001c 	str	r0, [r4, #28]	; fField28
        2e588c:	e3300000 	teq	r0, #0	; 0x0
        2e5890:	1a00001f 	bne	2e5914 <ThpPCL::InitializeConnection(void)+0xfc>
        2e5894:	e24dd05c 	sub	sp, sp, #92	; 0x5c
        2e5898:	e1a0000d 	mov	r0, sp
        2e589c:	eb5d239c 	bl	1a2e714 <TCMOIrDAConnectionInfo::$__ct(void)>
        2e58a0:	e3a00005 	mov	r0, #5	; 0x5
        2e58a4:	e58d0018 	str	r0, [sp, #24]	; fField24
        2e58a8:	e28d0020 	add	r0, sp, #32	; 0x20
        2e58ac:	e28f1f09 	add	r1, pc, #36	; 0x24
        2e58b0:	e3a02006 	mov	r2, #6	; 0x6
        2e58b4:	eb633c65 	bl	1bb4a50 <$memcpy>
        2e58b8:	e1a0200d 	mov	r2, sp
        2e58bc:	e59d1068 	ldr	r1, [sp, #104]
        2e58c0:	e28d0068 	add	r0, sp, #104	; 0x68
        2e58c4:	eb6350f6 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        2e58c8:	e584001c 	str	r0, [r4, #28]	; fField28
        2e58cc:	e28dd05c 	add	sp, sp, #92	; 0x5c
        2e58d0:	ea000032 	b	2e59a0 <ThpPCL::InitializeConnection(void)+0x188>
        2e58d4:	69726461 	ldmvsdb	r2!, {r0, r5, r6, sl, sp, lr}^
        2e58d8:	49724c50 	ldmmidb	r2!, {r4, r6, sl, fp, lr}^
        2e58dc:	54000000 	strpl	r0, [r0]
        2e58e0:	e1a0000d 	mov	r0, sp
        2e58e4:	e3a01303 	mov	r1, #201326592	; 0xc000000
        2e58e8:	eb63448e 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        2e58ec:	e1a0000d 	mov	r0, sp
        2e58f0:	e59f1034 	ldr	r1, [pc, #34]	; 2e592c <ThpPCL::InitializeConnection(void)+0x114>	; fField34
        2e58f4:	eb63550e 	bl	1bbad34 <TOption::$SetAsService(unsigned long)>
        2e58f8:	e1a0200d 	mov	r2, sp
        2e58fc:	e59d100c 	ldr	r1, [sp, #12]
        2e5900:	e28d000c 	add	r0, sp, #12	; 0xc
        2e5904:	eb6350e6 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        2e5908:	e584001c 	str	r0, [r4, #28]	; fField28
        2e590c:	e3300000 	teq	r0, #0	; 0x0
        2e5910:	0a000006 	beq	2e5930 <ThpPCL::InitializeConnection(void)+0x118>
        2e5914:	e3a04000 	mov	r4, #0	; 0x0
        2e5918:	e28d000c 	add	r0, sp, #12	; 0xc
        2e591c:	e3a01000 	mov	r1, #0	; 0x0
        2e5920:	eb634481 	bl	1bb6b2c <TOptionArray::$__dt(void)>
        2e5924:	e1a00004 	mov	r0, r4
        2e5928:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2e592c:	61736572 	cmnvs	r3, r2, ror r5
        2e5930:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        2e5934:	e1a0000d 	mov	r0, sp
        2e5938:	eb63592c 	bl	1bbbdf0 <TCMOSerialIOParms::$__ct(void)>
        2e593c:	e3a00ce1 	mov	r0, #57600	; 0xe100
        2e5940:	e58d0018 	str	r0, [sp, #24]	; fField24
        2e5944:	e1a0200d 	mov	r2, sp
        2e5948:	e59d1028 	ldr	r1, [sp, #40]	; fField40
        2e594c:	e28d0028 	add	r0, sp, #40	; 0x28
        2e5950:	eb6350d3 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        2e5954:	e584001c 	str	r0, [r4, #28]	; fField28
        2e5958:	e3300000 	teq	r0, #0	; 0x0
        2e595c:	1a00000e 	bne	2e599c <ThpPCL::InitializeConnection(void)+0x184>
        2e5960:	e24dd014 	sub	sp, sp, #20	; 0x14
        2e5964:	e1a0000d 	mov	r0, sp
        2e5968:	eb635d34 	bl	1bbce40 <TCMOOutputFlowControlParms::$__ct(void)>
        2e596c:	e3a00001 	mov	r0, #1	; 0x1
        2e5970:	e5cd000f 	strb	r0, [sp, #15]
        2e5974:	e59d0008 	ldr	r0, [sp, #8]
        2e5978:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
        2e597c:	e3800c02 	orr	r0, r0, #512	; 0x200
        2e5980:	e58d0008 	str	r0, [sp, #8]
        2e5984:	e1a0200d 	mov	r2, sp
        2e5988:	e59d103c 	ldr	r1, [sp, #60]
        2e598c:	e28d003c 	add	r0, sp, #60	; 0x3c
        2e5990:	eb6350c3 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        2e5994:	e584001c 	str	r0, [r4, #28]	; fField28
        2e5998:	e28dd014 	add	sp, sp, #20	; 0x14
        2e599c:	e28dd01c 	add	sp, sp, #28	; 0x1c
        2e59a0:	e28dd00c 	add	sp, sp, #12	; 0xc
        2e59a4:	e594001c 	ldr	r0, [r4, #28]	; fField28
        2e59a8:	e3300000 	teq	r0, #0	; 0x0
        2e59ac:	1a000004 	bne	2e59c4 <ThpPCL::InitializeConnection(void)+0x1ac>
        2e59b0:	e2841018 	add	r1, r4, #24	; 0x18
        2e59b4:	e1a0000d 	mov	r0, sp
        2e59b8:	e3a02000 	mov	r2, #0	; 0x0
        2e59bc:	eb634877 	bl	1bb7ba0 <$CMGetEndpoint(TOptionArray *, TEndpoint **, unsigned char)>
        2e59c0:	e584001c 	str	r0, [r4, #28]	; fField28
        2e59c4:	e594001c 	ldr	r0, [r4, #28]	; fField28
        2e59c8:	e3300000 	teq	r0, #0	; 0x0
        2e59cc:	1affff9d 	bne	2e5848 <ThpPCL::InitializeConnection(void)+0x30>
        2e59d0:	e5940018 	ldr	r0, [r4, #24]	; fField24
        2e59d4:	e3300000 	teq	r0, #0	; 0x0
        2e59d8:	0affff9a 	beq	2e5848 <ThpPCL::InitializeConnection(void)+0x30>
        2e59dc:	e3a01000 	mov	r1, #0	; 0x0
        2e59e0:	eb634c8a 	bl	1bb8c10 <TEndpoint::$EasyOpen(unsigned long)>
        2e59e4:	e5a4001c 	str	r0, [r4, #28]!	; fField28
        2e59e8:	e3300000 	teq	r0, #0	; 0x0
        2e59ec:	13a00000 	movne	r0, #0	; 0x0
        2e59f0:	03a00001 	moveq	r0, #1	; 0x1
        2e59f4:	e20040ff 	and	r4, r0, #255	; 0xff
        2e59f8:	e1a0000d 	mov	r0, sp
        2e59fc:	e3a01000 	mov	r1, #0	; 0x0
        2e5a00:	eb634449 	bl	1bb6b2c <TOptionArray::$__dt(void)>
        2e5a04:	e1a00004 	mov	r0, r4
        2e5a08:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: ThpPCL::InitializeFields(void)
 * Address: 002e5a0c
 */
ThpPCL::InitializeFields(void) {
    /*
        2e5a0c:	e1a0c00d 	mov	ip, sp
        2e5a10:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2e5a14:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e5a18:	e1a04000 	mov	r4, r0
        2e5a1c:	e3a00000 	mov	r0, #0	; 0x0
        2e5a20:	e5840018 	str	r0, [r4, #24]	; fField24
        2e5a24:	e584001c 	str	r0, [r4, #28]	; fField28
        2e5a28:	e5c40020 	strb	r0, [r4, #32]	; fField32
        2e5a2c:	e5c40021 	strb	r0, [r4, #33]	; fField33
        2e5a30:	e5840044 	str	r0, [r4, #68]	; fField68
        2e5a34:	e5940010 	ldr	r0, [r4, #16]	; fField16
        2e5a38:	e59f10a8 	ldr	r1, [pc, #a8]	; 2e5ae8 <ThpPCL::InitializeFields(void)+0xdc>
        2e5a3c:	e5911000 	ldr	r1, [r1]
        2e5a40:	e5911000 	ldr	r1, [r1]
        2e5a44:	e5900008 	ldr	r0, [r0, #8]
        2e5a48:	e5900000 	ldr	r0, [r0]
        2e5a4c:	eb6379f7 	bl	1bc4230 <$EQRef__FlT1>
        2e5a50:	e5c40022 	strb	r0, [r4, #34]	; fField34
        2e5a54:	e5940010 	ldr	r0, [r4, #16]	; fField16
        2e5a58:	e5900004 	ldr	r0, [r0, #4]
        2e5a5c:	e5900000 	ldr	r0, [r0]
        2e5a60:	eb6371b9 	bl	1bc214c <$AllocateRefHandle(long)>
        2e5a64:	e1a05000 	mov	r5, r0
        2e5a68:	e28f0f1f 	add	r0, pc, #124	; 0x7c
        2e5a6c:	eb637e03 	bl	1bc5280 <$Intern(char *)>
        2e5a70:	eb6371b5 	bl	1bc214c <$AllocateRefHandle(long)>
        2e5a74:	e1a08000 	mov	r8, r0
        2e5a78:	e5901000 	ldr	r1, [r0]
        2e5a7c:	e5950000 	ldr	r0, [r5]
        2e5a80:	eb6379f6 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2e5a84:	eb6371b0 	bl	1bc214c <$AllocateRefHandle(long)>
        2e5a88:	e1a07000 	mov	r7, r0
        2e5a8c:	e28f0f18 	add	r0, pc, #96	; 0x60
        2e5a90:	eb637dfa 	bl	1bc5280 <$Intern(char *)>
        2e5a94:	eb6371ac 	bl	1bc214c <$AllocateRefHandle(long)>
        2e5a98:	e1a06000 	mov	r6, r0
        2e5a9c:	e5901000 	ldr	r1, [r0]
        2e5aa0:	e5970000 	ldr	r0, [r7]
        2e5aa4:	eb6379ed 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2e5aa8:	e5850000 	str	r0, [r5]
        2e5aac:	e1a00006 	mov	r0, r6
        2e5ab0:	eb6375c1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2e5ab4:	e1a00007 	mov	r0, r7
        2e5ab8:	eb6375bf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2e5abc:	e1a00008 	mov	r0, r8
        2e5ac0:	eb6375bd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2e5ac4:	e5950000 	ldr	r0, [r5]
        2e5ac8:	e3100003 	tst	r0, #3	; 0x3
        2e5acc:	01a00140 	moveq	r0, r0, asr #2
        2e5ad0:	0a000000 	beq	2e5ad8 <ThpPCL::InitializeFields(void)+0xcc>
        2e5ad4:	eb637190 	bl	1bc211c <$_RINTError(long)>
        2e5ad8:	e5a40048 	str	r0, [r4, #72]!	; fField72
        2e5adc:	e1a00005 	mov	r0, r5
        2e5ae0:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        2e5ae4:	ea6375b4 	b	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2e5ae8:	00681d08 	rsbeq	r1, r8, r8, lsl #26
        2e5aec:	7072696e 	rsbvcs	r6, r2, lr, ror #18
        2e5af0:	74657200 	strvcbt	r7, [r5], -#512	; fField512
        2e5af4:	70726d6f 	rsbvcs	r6, r2, pc, ror #26
        2e5af8:	64656c00 	strvsbt	r6, [r5], -#3072	; fField3072
    */
}

/**
 * Symbol: ThpPCL::PrinterCanPrint(void)
 * Address: 002e5afc
 */
ThpPCL::PrinterCanPrint(void) {
    /*
        2e5afc:	e1a0c00d 	mov	ip, sp
        2e5b00:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2e5b04:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e5b08:	e1a04000 	mov	r4, r0
        2e5b0c:	eb618639 	bl	1b473f8 <ThpPCL::$ContinueIO(void)>
        2e5b10:	e3a06000 	mov	r6, #0	; 0x0
        2e5b14:	e3300000 	teq	r0, #0	; 0x0
        2e5b18:	0a00000f 	beq	2e5b5c <ThpPCL::PrinterCanPrint(void)+0x60>
        2e5b1c:	e1a00004 	mov	r0, r4
        2e5b20:	eb618a3d 	bl	1b4841c <ThpPCL::$GetStatus(void)>
        2e5b24:	e3a05001 	mov	r5, #1	; 0x1
        2e5b28:	e594001c 	ldr	r0, [r4, #28]	; fField28
        2e5b2c:	e3300000 	teq	r0, #0	; 0x0
        2e5b30:	0a000007 	beq	2e5b54 <ThpPCL::PrinterCanPrint(void)+0x58>
        2e5b34:	e1a00004 	mov	r0, r4
        2e5b38:	eb618a3b 	bl	1b4842c <ThpPCL::$ErrorIsProblem(void)>
        2e5b3c:	e3300000 	teq	r0, #0	; 0x0
        2e5b40:	0a000005 	beq	2e5b5c <ThpPCL::PrinterCanPrint(void)+0x60>
        2e5b44:	e1a00004 	mov	r0, r4
        2e5b48:	eb618a36 	bl	1b48428 <ThpPCL::$DoHandleProblem(void)>
        2e5b4c:	e3300000 	teq	r0, #0	; 0x0
        2e5b50:	1a000001 	bne	2e5b5c <ThpPCL::PrinterCanPrint(void)+0x60>
        2e5b54:	e1a00005 	mov	r0, r5
        2e5b58:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2e5b5c:	e1a00006 	mov	r0, r6
        2e5b60:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: ThpPCL::ReleaseConnection(void)
 * Address: 002e5b64
 */
ThpPCL::ReleaseConnection(void) {
    /*
        2e5b64:	e1a0c00d 	mov	ip, sp
        2e5b68:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2e5b6c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e5b70:	e3a01000 	mov	r1, #0	; 0x0
        2e5b74:	e5900018 	ldr	r0, [r0, #24]	; fField24
        2e5b78:	e3300000 	teq	r0, #0	; 0x0
        2e5b7c:	0a000001 	beq	2e5b88 <ThpPCL::ReleaseConnection(void)+0x24>
        2e5b80:	eb634c20 	bl	1bb8c08 <TEndpoint::$EasyClose(void)>
        2e5b84:	e1a01000 	mov	r1, r0
        2e5b88:	e1a00001 	mov	r0, r1
        2e5b8c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: ThpPCL::Open(void)
 * Address: 002e5b90
 */
ThpPCL::Open(void) {
    /*
        2e5b90:	e1a0c00d 	mov	ip, sp
        2e5b94:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2e5b98:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e5b9c:	e1a04000 	mov	r4, r0
        2e5ba0:	eb618610 	bl	1b473e8 <ThpPCL::$InitializeFields(void)>
        2e5ba4:	e1a00004 	mov	r0, r4
        2e5ba8:	eb61860f 	bl	1b473ec <ThpPCL::$InitializeConnection(void)>
        2e5bac:	e3300000 	teq	r0, #0	; 0x0
        2e5bb0:	059f0060 	ldreq	r0, [pc, #60]	; 2e5c18 <ThpPCL::Open(void)+0x88>
        2e5bb4:	0584001c 	streq	r0, [r4, #28]	; fField28
        2e5bb8:	0a000014 	beq	2e5c10 <ThpPCL::Open(void)+0x80>
        2e5bbc:	e3a05001 	mov	r5, #1	; 0x1
        2e5bc0:	e594001c 	ldr	r0, [r4, #28]	; fField28
        2e5bc4:	e3300000 	teq	r0, #0	; 0x0
        2e5bc8:	1a000007 	bne	2e5bec <ThpPCL::Open(void)+0x5c>
        2e5bcc:	e5d40022 	ldrb	r0, [r4, #34]	; fField34
        2e5bd0:	e3300000 	teq	r0, #0	; 0x0
        2e5bd4:	03a00f4b 	moveq	r0, #300	; 0x12c
        2e5bd8:	13a00f49 	movne	r0, #292	; 0x124
        2e5bdc:	e5840028 	str	r0, [r4, #40]	; fField40
        2e5be0:	e2800010 	add	r0, r0, #16	; 0x10
        2e5be4:	eb63f155 	bl	1be2140 <$NewPtr>
        2e5be8:	e5840044 	str	r0, [r4, #68]	; fField68
        2e5bec:	e3350000 	teq	r5, #0	; 0x0
        2e5bf0:	1594001c 	ldrne	r0, [r4, #28]	; fField28
        2e5bf4:	13300000 	teqne	r0, #0	; 0x0
        2e5bf8:	0a000004 	beq	2e5c10 <ThpPCL::Open(void)+0x80>
        2e5bfc:	e5940044 	ldr	r0, [r4, #68]	; fField68
        2e5c00:	e3300000 	teq	r0, #0	; 0x0
        2e5c04:	1b63ed2a 	blne	1be10b4 <$DisposPtr>
        2e5c08:	e1a00004 	mov	r0, r4
        2e5c0c:	eb6185f7 	bl	1b473f0 <ThpPCL::$ReleaseConnection(void)>
        2e5c10:	e5b4001c 	ldr	r0, [r4, #28]!	; fField28
        2e5c14:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2e5c18:	ffff541f 	swinv	0x00ff541f
    */
}

/**
 * Symbol: ThpPCL::SendCommand(char *)
 * Address: 002e5c1c
 */
ThpPCL::SendCommand(char *) {
    /*
        2e5c1c:	e1a0c00d 	mov	ip, sp
        2e5c20:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2e5c24:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e5c28:	e1a05000 	mov	r5, r0
        2e5c2c:	e1a04001 	mov	r4, r1
        2e5c30:	e1a00001 	mov	r0, r1
        2e5c34:	eb633f9d 	bl	1bb5ab0 <$strlen>
        2e5c38:	e1a02000 	mov	r2, r0
        2e5c3c:	e1a01004 	mov	r1, r4
        2e5c40:	e1a00005 	mov	r0, r5
        2e5c44:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        2e5c48:	ea6189f0 	b	1b48410 <ThpPCL::$SendData(char *, long)>
    */
}

/**
 * Symbol: ThpPCL::SendData(char *, long)
 * Address: 002e5c4c
 */
ThpPCL::SendData(char *, long) {
    /*
        2e5c4c:	e1a0c00d 	mov	ip, sp
        2e5c50:	e92dd807 	stmdb	sp!, {r0, r1, r2, fp, ip, lr, pc}
        2e5c54:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e5c58:	e3a0392f 	mov	r3, #770048	; 0xbc000
        2e5c5c:	e283350d 	add	r3, r3, #54525952	; 0x3400000
        2e5c60:	e92d0008 	stmdb	sp!, {r3}
        2e5c64:	e51b0018 	ldr	r0, [fp, -#24]	; fField24
        2e5c68:	e5900018 	ldr	r0, [r0, #24]	; fField24
        2e5c6c:	e24b2010 	sub	r2, fp, #16	; 0x10
        2e5c70:	e3a03000 	mov	r3, #0	; 0x0
        2e5c74:	e51b1014 	ldr	r1, [fp, -#20]	; fField20
        2e5c78:	eb635435 	bl	1bbad54 <TEndpoint::$Snd(unsigned char *, long &, unsigned long, unsigned long)>
        2e5c7c:	e28dd004 	add	sp, sp, #4	; 0x4
        2e5c80:	e280cc27 	add	ip, r0, #9984	; 0x2700
        2e5c84:	e37c0037 	cmn	ip, #55	; 0x37
        2e5c88:	03a0101c 	moveq	r1, #28	; 0x1c
        2e5c8c:	02411b2b 	subeq	r1, r1, #44032	; 0xac00
        2e5c90:	0a000006 	beq	2e5cb0 <ThpPCL::SendData(char *, long)+0x64>
        2e5c94:	e280cc27 	add	ip, r0, #9984	; 0x2700
        2e5c98:	e37c0025 	cmn	ip, #37	; 0x25
        2e5c9c:	059f1018 	ldreq	r1, [pc, #18]	; 2e5cbc <ThpPCL::SendData(char *, long)+0x70>
        2e5ca0:	0a000002 	beq	2e5cb0 <ThpPCL::SendData(char *, long)+0x64>
        2e5ca4:	e3300000 	teq	r0, #0	; 0x0
        2e5ca8:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        2e5cac:	e59f100c 	ldr	r1, [pc, #c]	; 2e5cc0 <ThpPCL::SendData(char *, long)+0x74>
        2e5cb0:	e51b0018 	ldr	r0, [fp, -#24]	; fField24
        2e5cb4:	e5a0101c 	str	r1, [r0, #28]!	; fField28
        2e5cb8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        2e5cbc:	ffff541b 	swinv	0x00ff541b
        2e5cc0:	ffff541f 	swinv	0x00ff541f
    */
}

/**
 * Symbol: ThpPCL::FaxEndPage(long)
 * Address: 002e5cc4
 */
ThpPCL::FaxEndPage(long) {
    /*
        2e5cc4:	e3a00000 	mov	r0, #0	; 0x0
        2e5cc8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ThpPCL::Close(void)
 * Address: 002e5ccc
 */
ThpPCL::Close(void) {
    /*
        2e5ccc:	e1a0c00d 	mov	ip, sp
        2e5cd0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2e5cd4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e5cd8:	e1a04000 	mov	r4, r0
        2e5cdc:	eb6185c5 	bl	1b473f8 <ThpPCL::$ContinueIO(void)>
        2e5ce0:	e3300000 	teq	r0, #0	; 0x0
        2e5ce4:	13a00965 	movne	r0, #1654784	; 0x194000
        2e5ce8:	12800401 	addne	r0, r0, #16777216	; 0x1000000
        2e5cec:	15941014 	ldrne	r1, [r4, #20]	; fField20
        2e5cf0:	1b63e496 	blne	1bdef50 <$PrReleaseControl(unsigned long, TPrinter *)>
        2e5cf4:	e1a00004 	mov	r0, r4
        2e5cf8:	eb6185bc 	bl	1b473f0 <ThpPCL::$ReleaseConnection(void)>
        2e5cfc:	e1a05000 	mov	r5, r0
        2e5d00:	e5940044 	ldr	r0, [r4, #68]	; fField68
        2e5d04:	e3300000 	teq	r0, #0	; 0x0
        2e5d08:	1b63ece9 	blne	1be10b4 <$DisposPtr>
        2e5d0c:	e594001c 	ldr	r0, [r4, #28]	; fField28
        2e5d10:	e3300000 	teq	r0, #0	; 0x0
        2e5d14:	0584501c 	streq	r5, [r4, #28]	; fField28
        2e5d18:	e5b4001c 	ldr	r0, [r4, #28]!	; fField28
        2e5d1c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: ThpPCL::OpenPage(void)
 * Address: 002e5d20
 */
ThpPCL::OpenPage(void) {
    /*
        2e5d20:	e1a0c00d 	mov	ip, sp
        2e5d24:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2e5d28:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e5d2c:	e1a04000 	mov	r4, r0
        2e5d30:	eb6189b2 	bl	1b48400 <ThpPCL::$PrinterCanPrint(void)>
        2e5d34:	e594001c 	ldr	r0, [r4, #28]	; fField28
        2e5d38:	e3300000 	teq	r0, #0	; 0x0
        2e5d3c:	1a00003d 	bne	2e5e38 <ThpPCL::OpenPage(void)+0x118>
        2e5d40:	e1a00004 	mov	r0, r4
        2e5d44:	e28f1f17 	add	r1, pc, #92	; 0x5c
        2e5d48:	eb6189ad 	bl	1b48404 <ThpPCL::$SendCommand(char *)>
        2e5d4c:	e1a00004 	mov	r0, r4
        2e5d50:	e28f1f17 	add	r1, pc, #92	; 0x5c
        2e5d54:	eb6189aa 	bl	1b48404 <ThpPCL::$SendCommand(char *)>
        2e5d58:	e1a00004 	mov	r0, r4
        2e5d5c:	e28f1f15 	add	r1, pc, #84	; 0x54
        2e5d60:	eb6189a7 	bl	1b48404 <ThpPCL::$SendCommand(char *)>
        2e5d64:	e5d40022 	ldrb	r0, [r4, #34]	; fField34
        2e5d68:	e2845038 	add	r5, r4, #56	; 0x38
        2e5d6c:	e3300000 	teq	r0, #0	; 0x0
        2e5d70:	e1a00005 	mov	r0, r5
        2e5d74:	0a000015 	beq	2e5dd0 <ThpPCL::OpenPage(void)+0xb0>
        2e5d78:	e28f1f10 	add	r1, pc, #64	; 0x40
        2e5d7c:	e3a020fc 	mov	r2, #252	; 0xfc
        2e5d80:	e2822b03 	add	r2, r2, #3072	; 0xc00
        2e5d84:	eb633f42 	bl	1bb5a94 <$sprintf>
        2e5d88:	e1a01005 	mov	r1, r5
        2e5d8c:	e1a00004 	mov	r0, r4
        2e5d90:	eb61899b 	bl	1b48404 <ThpPCL::$SendCommand(char *)>
        2e5d94:	e1a00005 	mov	r0, r5
        2e5d98:	e28f1f0a 	add	r1, pc, #40	; 0x28
        2e5d9c:	e3a0201b 	mov	r2, #27	; 0x1b
        2e5da0:	e2822c09 	add	r2, r2, #2304	; 0x900
        2e5da4:	ea000013 	b	2e5df8 <ThpPCL::OpenPage(void)+0xd8>
        2e5da8:	1b252d31 	blne	c31274 <ROM$$Size+0x511628>
        2e5dac:	32333435 	eorccs	r3, r3, #889192448	; 0x35000000
        2e5db0:	58000000 	stmplda	r0, {}
        2e5db4:	1b450000 	blne	1425dbc <ROM$$Size+0xd06170>
        2e5db8:	1b2a7433 	blne	d82e8c <ROM$$Size+0x663240>
        2e5dbc:	30305200 	eorccs	r5, r0, r0, lsl #4
        2e5dc0:	1b2a7225 	blne	d8265c <ROM$$Size+0x662a10>
        2e5dc4:	64540000 	ldrvsb	r0, [r4]
        2e5dc8:	1b2a7225 	blne	d82664 <ROM$$Size+0x662a18>
        2e5dcc:	64530000 	ldrvsb	r0, [r3]
        2e5dd0:	e24f1f06 	sub	r1, pc, #24	; 0x18
        2e5dd4:	e3a0204e 	mov	r2, #78	; 0x4e
        2e5dd8:	e2822b03 	add	r2, r2, #3072	; 0xc00
        2e5ddc:	eb633f2c 	bl	1bb5a94 <$sprintf>
        2e5de0:	e1a01005 	mov	r1, r5
        2e5de4:	e1a00004 	mov	r0, r4
        2e5de8:	eb618985 	bl	1b48404 <ThpPCL::$SendCommand(char *)>
        2e5dec:	e1a00005 	mov	r0, r5
        2e5df0:	e24f1f0c 	sub	r1, pc, #48	; 0x30
        2e5df4:	e3a02e96 	mov	r2, #2400	; 0x960
        2e5df8:	eb633f25 	bl	1bb5a94 <$sprintf>
        2e5dfc:	e1a01005 	mov	r1, r5
        2e5e00:	e1a00004 	mov	r0, r4
        2e5e04:	eb61897e 	bl	1b48404 <ThpPCL::$SendCommand(char *)>
        2e5e08:	e1a00004 	mov	r0, r4
        2e5e0c:	e28f1f0b 	add	r1, pc, #44	; 0x2c
        2e5e10:	eb61897b 	bl	1b48404 <ThpPCL::$SendCommand(char *)>
        2e5e14:	e3a00000 	mov	r0, #0	; 0x0
        2e5e18:	e5840024 	str	r0, [r4, #36]	; fField36
        2e5e1c:	e5940044 	ldr	r0, [r4, #68]	; fField68
        2e5e20:	e3300000 	teq	r0, #0	; 0x0
        2e5e24:	1a000003 	bne	2e5e38 <ThpPCL::OpenPage(void)+0x118>
        2e5e28:	e5942028 	ldr	r2, [r4, #40]	; fField40
        2e5e2c:	e284002c 	add	r0, r4, #44	; 0x2c
        2e5e30:	e28f1f04 	add	r1, pc, #16	; 0x10
        2e5e34:	eb633f16 	bl	1bb5a94 <$sprintf>
        2e5e38:	e5b4001c 	ldr	r0, [r4, #28]!	; fField28
        2e5e3c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2e5e40:	1b2a7230 	blne	d82708 <ROM$$Size+0x662abc>
        2e5e44:	41000000 	tstmi	r0, r0
        2e5e48:	1b2a6225 	blne	d7e6e4 <ROM$$Size+0x65ea98>
        2e5e4c:	64570000 	ldrvsb	r0, [r7]
    */
}

/**
 * Symbol: ThpPCL::ClosePage(void)
 * Address: 002e5e50
 */
ThpPCL::ClosePage(void) {
    /*
        2e5e50:	e1a0c00d 	mov	ip, sp
        2e5e54:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2e5e58:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e5e5c:	e1a04000 	mov	r4, r0
        2e5e60:	e28f1f08 	add	r1, pc, #32	; 0x20
        2e5e64:	eb618966 	bl	1b48404 <ThpPCL::$SendCommand(char *)>
        2e5e68:	e1a00004 	mov	r0, r4
        2e5e6c:	e28f1f07 	add	r1, pc, #28	; 0x1c
        2e5e70:	eb618963 	bl	1b48404 <ThpPCL::$SendCommand(char *)>
        2e5e74:	e1a00004 	mov	r0, r4
        2e5e78:	e28f1f05 	add	r1, pc, #20	; 0x14
        2e5e7c:	eb618960 	bl	1b48404 <ThpPCL::$SendCommand(char *)>
        2e5e80:	e5b4001c 	ldr	r0, [r4, #28]!	; fField28
        2e5e84:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2e5e88:	1b2a7243 	blne	d8279c <ROM$$Size+0x662b50>
        2e5e8c:	00000000 	andeq	r0, r0, r0
        2e5e90:	1b450000 	blne	1425e98 <ROM$$Size+0xd0624c>
        2e5e94:	1b252d31 	blne	c31360 <ROM$$Size+0x511714>
        2e5e98:	32333435 	eorccs	r3, r3, #889192448	; 0x35000000
        2e5e9c:	58000000 	stmplda	r0, {}
    */
}

/**
 * Symbol: ThpPCL::ImageBand(PixelMap *, Rect const *)
 * Address: 002e5ea0
 */
ThpPCL::ImageBand(PixelMap *, Rect const *) {
    /*
        2e5ea0:	e1a0c00d 	mov	ip, sp
        2e5ea4:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2e5ea8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e5eac:	e1a04000 	mov	r4, r0
        2e5eb0:	e1a05001 	mov	r5, r1
        2e5eb4:	e1a06002 	mov	r6, r2
        2e5eb8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2e5ebc:	eb61854d 	bl	1b473f8 <ThpPCL::$ContinueIO(void)>
        2e5ec0:	e3300000 	teq	r0, #0	; 0x0
        2e5ec4:	0a000072 	beq	2e6094 <ThpPCL::ImageBand(PixelMap *, Rect const *)+0x1f4>
        2e5ec8:	e5d40021 	ldrb	r0, [r4, #33]	; fField33
        2e5ecc:	e3a09000 	mov	r9, #0	; 0x0
        2e5ed0:	e2848038 	add	r8, r4, #56	; 0x38
        2e5ed4:	e3300000 	teq	r0, #0	; 0x0
        2e5ed8:	0a00000f 	beq	2e5f1c <ThpPCL::ImageBand(PixelMap *, Rect const *)+0x7c>
        2e5edc:	e595000c 	ldr	r0, [r5, #12]
        2e5ee0:	e1a00840 	mov	r0, r0, asr #16
        2e5ee4:	e5951008 	ldr	r1, [r5, #8]
        2e5ee8:	e0400841 	sub	r0, r0, r1, asr #16
        2e5eec:	e5941024 	ldr	r1, [r4, #36]	; fField36
        2e5ef0:	e0812000 	add	r2, r1, r0
        2e5ef4:	e1a00008 	mov	r0, r8
        2e5ef8:	e28f1f05 	add	r1, pc, #20	; 0x14
        2e5efc:	eb633ee4 	bl	1bb5a94 <$sprintf>
        2e5f00:	e1a01008 	mov	r1, r8
        2e5f04:	e1a00004 	mov	r0, r4
        2e5f08:	eb61893d 	bl	1b48404 <ThpPCL::$SendCommand(char *)>
        2e5f0c:	e5849024 	str	r9, [r4, #36]	; fField36
        2e5f10:	ea00005f 	b	2e6094 <ThpPCL::ImageBand(PixelMap *, Rect const *)+0x1f4>
        2e5f14:	1b2a6225 	blne	d7e7b0 <ROM$$Size+0x65eb64>
        2e5f18:	64590000 	ldrvsb	r0, [r9]
        2e5f1c:	e5960004 	ldr	r0, [r6, #4]
        2e5f20:	e1b00840 	movs	r0, r0, asr #16
        2e5f24:	1a000007 	bne	2e5f48 <ThpPCL::ImageBand(PixelMap *, Rect const *)+0xa8>
        2e5f28:	e595000c 	ldr	r0, [r5, #12]
        2e5f2c:	e1a00840 	mov	r0, r0, asr #16
        2e5f30:	e5951008 	ldr	r1, [r5, #8]
        2e5f34:	e0400841 	sub	r0, r0, r1, asr #16
        2e5f38:	e5941024 	ldr	r1, [r4, #36]	; fField36
        2e5f3c:	e0810000 	add	r0, r1, r0
        2e5f40:	e5840024 	str	r0, [r4, #36]	; fField36
        2e5f44:	ea000052 	b	2e6094 <ThpPCL::ImageBand(PixelMap *, Rect const *)+0x1f4>
        2e5f48:	e5951008 	ldr	r1, [r5, #8]
        2e5f4c:	e5960000 	ldr	r0, [r6]
        2e5f50:	e1a00840 	mov	r0, r0, asr #16
        2e5f54:	e0407841 	sub	r7, r0, r1, asr #16
        2e5f58:	e5940024 	ldr	r0, [r4, #36]	; fField36
        2e5f5c:	e0902007 	adds	r2, r0, r7
        2e5f60:	0a000006 	beq	2e5f80 <ThpPCL::ImageBand(PixelMap *, Rect const *)+0xe0>
        2e5f64:	e1a00008 	mov	r0, r8
        2e5f68:	e24f1f17 	sub	r1, pc, #92	; 0x5c
        2e5f6c:	eb633ec8 	bl	1bb5a94 <$sprintf>
        2e5f70:	e1a01008 	mov	r1, r8
        2e5f74:	e1a00004 	mov	r0, r4
        2e5f78:	eb618921 	bl	1b48404 <ThpPCL::$SendCommand(char *)>
        2e5f7c:	e5849024 	str	r9, [r4, #36]	; fField36
        2e5f80:	e5960004 	ldr	r0, [r6, #4]
        2e5f84:	e1a00840 	mov	r0, r0, asr #16
        2e5f88:	e5961000 	ldr	r1, [r6]
        2e5f8c:	e0408841 	sub	r8, r0, r1, asr #16
        2e5f90:	e5950004 	ldr	r0, [r5, #4]
        2e5f94:	e1a00840 	mov	r0, r0, asr #16
        2e5f98:	e0000097 	mul	r0, r7, r0
        2e5f9c:	e5951000 	ldr	r1, [r5]
        2e5fa0:	e0800001 	add	r0, r0, r1
        2e5fa4:	e284702c 	add	r7, r4, #44	; 0x2c
        2e5fa8:	e58d0000 	str	r0, [sp]
        2e5fac:	ea000028 	b	2e6054 <ThpPCL::ImageBand(PixelMap *, Rect const *)+0x1b4>
        2e5fb0:	e5940044 	ldr	r0, [r4, #68]	; fField68
        2e5fb4:	e3300000 	teq	r0, #0	; 0x0
        2e5fb8:	0a000019 	beq	2e6024 <ThpPCL::ImageBand(PixelMap *, Rect const *)+0x184>
        2e5fbc:	e24dd004 	sub	sp, sp, #4	; 0x4
        2e5fc0:	e5940044 	ldr	r0, [r4, #68]	; fField68
        2e5fc4:	e58d0000 	str	r0, [sp]
        2e5fc8:	e1a0100d 	mov	r1, sp
        2e5fcc:	e28d0004 	add	r0, sp, #4	; 0x4
        2e5fd0:	e5942028 	ldr	r2, [r4, #40]	; fField40
        2e5fd4:	eb61ae47 	bl	1b518f8 <$PackBits__FPPcT1l>
        2e5fd8:	e5941044 	ldr	r1, [r4, #68]	; fField68
        2e5fdc:	e59d0000 	ldr	r0, [sp]
        2e5fe0:	e0409001 	sub	r9, r0, r1
        2e5fe4:	e1a00007 	mov	r0, r7
        2e5fe8:	e1a02009 	mov	r2, r9
        2e5fec:	e28f1f09 	add	r1, pc, #36	; 0x24
        2e5ff0:	eb633ea7 	bl	1bb5a94 <$sprintf>
        2e5ff4:	e1a01007 	mov	r1, r7
        2e5ff8:	e1a00004 	mov	r0, r4
        2e5ffc:	eb618900 	bl	1b48404 <ThpPCL::$SendCommand(char *)>
        2e6000:	e1a02009 	mov	r2, r9
        2e6004:	e5941044 	ldr	r1, [r4, #68]	; fField68
        2e6008:	e1a00004 	mov	r0, r4
        2e600c:	eb6188ff 	bl	1b48410 <ThpPCL::$SendData(char *, long)>
        2e6010:	e28dd004 	add	sp, sp, #4	; 0x4
        2e6014:	ea00000e 	b	2e6054 <ThpPCL::ImageBand(PixelMap *, Rect const *)+0x1b4>
        2e6018:	1b2a6232 	blne	d7e8e8 <ROM$$Size+0x65ec9c>
        2e601c:	6d256457 	stcvs	4, cr6, [r5, -#348]!
        2e6020:	00000000 	andeq	r0, r0, r0
        2e6024:	e1a01007 	mov	r1, r7
        2e6028:	e1a00004 	mov	r0, r4
        2e602c:	eb6188f4 	bl	1b48404 <ThpPCL::$SendCommand(char *)>
        2e6030:	e5952004 	ldr	r2, [r5, #4]
        2e6034:	e1a02842 	mov	r2, r2, asr #16
        2e6038:	e1a00004 	mov	r0, r4
        2e603c:	e59d1000 	ldr	r1, [sp]
        2e6040:	eb6188f2 	bl	1b48410 <ThpPCL::$SendData(char *, long)>
        2e6044:	e5950004 	ldr	r0, [r5, #4]
        2e6048:	e59d1000 	ldr	r1, [sp]
        2e604c:	e0810840 	add	r0, r1, r0, asr #16
        2e6050:	e58d0000 	str	r0, [sp]
        2e6054:	e1b00008 	movs	r0, r8
        2e6058:	e2488001 	sub	r8, r8, #1	; 0x1
        2e605c:	0a000002 	beq	2e606c <ThpPCL::ImageBand(PixelMap *, Rect const *)+0x1cc>
        2e6060:	e594001c 	ldr	r0, [r4, #28]	; fField28
        2e6064:	e3300000 	teq	r0, #0	; 0x0
        2e6068:	0affffd0 	beq	2e5fb0 <ThpPCL::ImageBand(PixelMap *, Rect const *)+0x110>
        2e606c:	e5960004 	ldr	r0, [r6, #4]
        2e6070:	e1b00840 	movs	r0, r0, asr #16
        2e6074:	0a000004 	beq	2e608c <ThpPCL::ImageBand(PixelMap *, Rect const *)+0x1ec>
        2e6078:	e595100c 	ldr	r1, [r5, #12]
        2e607c:	e0700841 	rsbs	r0, r0, r1, asr #16
        2e6080:	15941024 	ldrne	r1, [r4, #36]	; fField36
        2e6084:	10810000 	addne	r0, r1, r0
        2e6088:	15840024 	strne	r0, [r4, #36]	; fField36
        2e608c:	e1a00004 	mov	r0, r4
        2e6090:	eb6188da 	bl	1b48400 <ThpPCL::$PrinterCanPrint(void)>
        2e6094:	e5b4001c 	ldr	r0, [r4, #28]!	; fField28
        2e6098:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: ThpPCL::CancelJob(unsigned char)
 * Address: 002e609c
 */
ThpPCL::CancelJob(unsigned char) {
    /*
        2e609c:	e31100ff 	tst	r1, #255	; 0xff
        2e60a0:	13a01001 	movne	r1, #1	; 0x1
        2e60a4:	15c01021 	strneb	r1, [r0, #33]	; fField33
        2e60a8:	03a0101c 	moveq	r1, #28	; 0x1c
        2e60ac:	02411b2b 	subeq	r1, r1, #44032	; 0xac00
        2e60b0:	05a0101c 	streq	r1, [r0, #28]!	; fField28
        2e60b4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ThpPCL::IsProblemResolved(void)
 * Address: 002e60b8
 */
ThpPCL::IsProblemResolved(void) {
    /*
        2e60b8:	e1a0c00d 	mov	ip, sp
        2e60bc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2e60c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e60c4:	e1a04000 	mov	r4, r0
        2e60c8:	e3a06001 	mov	r6, #1	; 0x1
        2e60cc:	e590501c 	ldr	r5, [r0, #28]	; fField28
        2e60d0:	e285cb2b 	add	ip, r5, #44032	; 0xac00
        2e60d4:	e37c0048 	cmn	ip, #72	; 0x48
        2e60d8:	1285cb2b 	addne	ip, r5, #44032	; 0xac00
        2e60dc:	137c004b 	cmnne	ip, #75	; 0x4b
        2e60e0:	0a000005 	beq	2e60fc <ThpPCL::IsProblemResolved(void)+0x44>
        2e60e4:	e1a00004 	mov	r0, r4
        2e60e8:	eb6188cb 	bl	1b4841c <ThpPCL::$GetStatus(void)>
        2e60ec:	e5b4001c 	ldr	r0, [r4, #28]!	; fField28
        2e60f0:	e1300005 	teq	r0, r5
        2e60f4:	13a00000 	movne	r0, #0	; 0x0
        2e60f8:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        2e60fc:	e1a00006 	mov	r0, r6
        2e6100:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: ThpPCL::GetPageInfo(PrPageInfo *)
 * Address: 002e6104
 */
ThpPCL::GetPageInfo(PrPageInfo *) {
    /*
        2e6104:	e3a0274b 	mov	r2, #19660800	; 0x12c0000
        2e6108:	e5812004 	str	r2, [r1, #4]
        2e610c:	e5812000 	str	r2, [r1]
        2e6110:	e5d03022 	ldrb	r3, [r0, #34]	; fField34
        2e6114:	e3a02009 	mov	r2, #9	; 0x9
        2e6118:	e3a0000c 	mov	r0, #12	; 0xc
        2e611c:	e3330000 	teq	r3, #0	; 0x0
        2e6120:	0a000005 	beq	2e613c <ThpPCL::GetPageInfo(PrPageInfo *)+0x38>
        2e6124:	e3a0301b 	mov	r3, #27	; 0x1b
        2e6128:	e5c1300b 	strb	r3, [r1, #11]
        2e612c:	e5c1200a 	strb	r2, [r1, #10]
        2e6130:	e3a020fc 	mov	r2, #252	; 0xfc
        2e6134:	e2822b03 	add	r2, r2, #3072	; 0xc00
        2e6138:	ea000004 	b	2e6150 <ThpPCL::GetPageInfo(PrPageInfo *)+0x4c>
        2e613c:	e3a03060 	mov	r3, #96	; 0x60
        2e6140:	e5c1300b 	strb	r3, [r1, #11]
        2e6144:	e5c1200a 	strb	r2, [r1, #10]
        2e6148:	e3a0204e 	mov	r2, #78	; 0x4e
        2e614c:	e2822b03 	add	r2, r2, #3072	; 0xc00
        2e6150:	e5c12009 	strb	r2, [r1, #9]
        2e6154:	e5c10008 	strb	r0, [r1, #8]
        2e6158:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ClassInfo__6ThpPCLSFv
 * Address: 00388484
 */
void ThpPCL::ClassInfo() {
    /*
        388484:	e24f0044 	sub	r0, pc, #68	; 0x44
        388488:	e1a0f00e 	mov	pc, lr
        38848c:	e3a00000 	mov	r0, #0	; 0x0
        388490:	e1a0f00e 	mov	pc, lr
        388494:	54687050 	strplbt	r7, [r8], -#80
        388498:	434c0054 	cmpmi	ip, #84	; 0x54
        38849c:	446f7450 	strmibt	r7, [pc], #450	; 3884a4 <ClassInfo__6ThpPCLSFv+0x20>
        3884a0:	72696e74 	rsbvc	r6, r9, #1856	; 0x740
        3884a4:	65724472 	ldrvsb	r4, [r2, -#1138]!
        3884a8:	69766572 	ldmvsdb	r6!, {r1, r4, r5, r6, r8, sl, sp, lr}^
        3884b4:	eafffff2 	b	388484 <ClassInfo__6ThpPCLSFv>
        3884b8:	ea5efbc8 	b	1b473e0 <ThpPCL::$Delete(void)>
        3884bc:	ea5efbc8 	b	1b473e4 <ThpPCL::$Open(void)>
        3884c0:	ea5efbcb 	b	1b473f4 <ThpPCL::$Close(void)>
        3884c4:	ea5efbcc 	b	1b473fc <ThpPCL::$OpenPage(void)>
        3884c8:	ea5effce 	b	1b48408 <ThpPCL::$ClosePage(void)>
        3884cc:	ea5effce 	b	1b4840c <ThpPCL::$ImageBand(PixelMap *, Rect const *)>
        3884d0:	ea5effcf 	b	1b48414 <ThpPCL::$CancelJob(unsigned char)>
        3884d4:	ea5effcf 	b	1b48418 <ThpPCL::$IsProblemResolved(void)>
        3884d8:	ea5effd0 	b	1b48420 <ThpPCL::$GetPageInfo(PrPageInfo *)>
        3884dc:	ea5effd0 	b	1b48424 <ThpPCL::$GetBandPrefs(DotPrinterPrefs *)>
        3884e0:	ea5effd2 	b	1b48430 <ThpPCL::$FaxEndPage(long)>
        3884e4:	00000000 	andeq	r0, r0, r0
        3884e8:	00000048 	andeq	r0, r0, r8, asr #32
        3884ec:	00000051 	andeq	r0, r0, r1, asr r0
        3884f0:	0000005e 	andeq	r0, r0, lr, asr r0
        3884f4:	0000005c 	andeq	r0, r0, ip, asr r0
        3884f8:	00000090 	muleq	r0, r0, r0
        3884fc:	ea5ef371 	b	1b452c8 <$Sizeof__12TPSPAPDriverSFv>
        388508:	e1a0f00e 	mov	pc, lr
        38850c:	ea5edeae 	b	1b3ffcc <TPSPAPDriver::$Delete(void)>
        388510:	00020000 	andeq	r0, r2, r0
        38851c:	ea000001 	b	388528 <ClassInfo__12TPSPAPDriverSFv+0x8>
    */
}

