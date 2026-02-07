#include "include/TFaxToolInterface.h"

/**
 * Symbol: TFaxToolInterface::__ct(unsigned long, unsigned long)
 * Address: 000b9794
 */
TFaxToolInterface::TFaxToolInterface(unsigned long, unsigned long) {
    /*
         b9794:	e1a0c00d 	mov	ip, sp
         b9798:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         b979c:	e24cb004 	sub	fp, ip, #4	; 0x4
         b97a0:	e1b04000 	movs	r4, r0
         b97a4:	e1a06001 	mov	r6, r1
         b97a8:	e1a05002 	mov	r5, r2
         b97ac:	1a000003 	bne	b97c0 <TFaxToolInterface::__ct(unsigned long, unsigned long)+0x2c>
         b97b0:	e3a00f8f 	mov	r0, #572	; 0x23c
         b97b4:	eb6c53df 	bl	1bce738 <$__nw(unsigned int)>
         b97b8:	e1b04000 	movs	r4, r0
         b97bc:	0a000039 	beq	b98a8 <TFaxToolInterface::__ct(unsigned long, unsigned long)+0x114>
         b97c0:	e1a00004 	mov	r0, r4
         b97c4:	eb6caa8f 	bl	1be4208 <TAEventHandler::$__ct(void)>
         b97c8:	e3a07000 	mov	r7, #0	; 0x0
         b97cc:	e5c47018 	strb	r7, [r4, #24]
         b97d0:	e5847014 	str	r7, [r4, #20]
         b97d4:	e2840020 	add	r0, r4, #32	; 0x20
         b97d8:	eb6bf0c1 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
         b97dc:	e2840038 	add	r0, r4, #56	; 0x38
         b97e0:	eb6bf0bf 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
         b97e4:	e2840058 	add	r0, r4, #88	; 0x58
         b97e8:	eb6c0d84 	bl	1bbce00 <TCMOFaxSessionInfo::$__ct(void)>
         b97ec:	e2840078 	add	r0, r4, #120	; 0x78
         b97f0:	eb6d2ea4 	bl	1c05288 <TCMOFaxConfigSendBand::$__ct(void)>
         b97f4:	e2840090 	add	r0, r4, #144	; 0x90
         b97f8:	eb6ca670 	bl	1be31c0 <CBufferList::$__ct(void)>
         b97fc:	e28400b0 	add	r0, r4, #176	; 0xb0
         b9800:	eb6caa7f 	bl	1be4204 <CBufferSegment::$__ct(void)>
         b9804:	e28400dc 	add	r0, r4, #220	; 0xdc
         b9808:	eb6cd7f4 	bl	1bef7e0 <TCommToolConnectRequest::$__ct(void)>
         b980c:	e2840f41 	add	r0, r4, #260	; 0x104
         b9810:	eb6cd7f4 	bl	1bef7e8 <TCommToolBindRequest::$__ct(void)>
         b9814:	e2840f49 	add	r0, r4, #292	; 0x124
         b9818:	eb6cd7e5 	bl	1bef7b4 <TCommToolReply::$__ct(void)>
         b981c:	e2840f4d 	add	r0, r4, #308	; 0x134
         b9820:	eb6c4fa1 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
         b9824:	e2840f52 	add	r0, r4, #328	; 0x148
         b9828:	eb6cd7e9 	bl	1bef7d4 <TCommToolPutRequest::$__ct(void)>
         b982c:	e2840f59 	add	r0, r4, #356	; 0x164
         b9830:	eb6cd7e0 	bl	1bef7b8 <TCommToolPutReply::$__ct(void)>
         b9834:	e2840f5e 	add	r0, r4, #376	; 0x178
         b9838:	eb6cd7e6 	bl	1bef7d8 <TCommToolGetRequest::$__ct(void)>
         b983c:	e2840f65 	add	r0, r4, #404	; 0x194
         b9840:	eb6cd7dd 	bl	1bef7bc <TCommToolGetReply::$__ct(void)>
         b9844:	e2840f6b 	add	r0, r4, #428	; 0x1ac
         b9848:	eb6c4f97 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
         b984c:	e2840f71 	add	r0, r4, #452	; 0x1c4
         b9850:	eb6cd7e5 	bl	1bef7ec <TCommToolOptionMgmtRequest::$__ct(void)>
         b9854:	e2840e1e 	add	r0, r4, #480	; 0x1e0
         b9858:	eb6cd7d5 	bl	1bef7b4 <TCommToolReply::$__ct(void)>
         b985c:	e2840e1f 	add	r0, r4, #496	; 0x1f0
         b9860:	eb6c4f91 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
         b9864:	e2840f81 	add	r0, r4, #516	; 0x204
         b9868:	eb6cd7e1 	bl	1bef7f4 <TCommToolKillRequest::$__ct(void)>
         b986c:	e2840e21 	add	r0, r4, #528	; 0x210
         b9870:	eb6cd7cf 	bl	1bef7b4 <TCommToolReply::$__ct(void)>
         b9874:	e2840e22 	add	r0, r4, #544	; 0x220
         b9878:	eb6c4f8b 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
         b987c:	e59f002c 	ldr	r0, [pc, #2c]	; b98b0 <TFaxToolInterface::__ct(unsigned long, unsigned long)+0x11c>
         b9880:	e5840000 	str	r0, [r4]
         b9884:	e2844f8d 	add	r4, r4, #564	; 0x234
         b9888:	e8840060 	stmia	r4, {r5, r6}
         b988c:	e52471e0 	str	r7, [r4, -#480]!
         b9890:	e2444054 	sub	r4, r4, #84	; 0x54
         b9894:	e5c470da 	strb	r7, [r4, #218]	; fField218
         b9898:	e5c470db 	strb	r7, [r4, #219]	; fField219
         b989c:	e5c470d8 	strb	r7, [r4, #216]	; fField216
         b98a0:	e5c470d9 	strb	r7, [r4, #217]	; fField217
         b98a4:	e5c471c0 	strb	r7, [r4, #448]	; fField448
         b98a8:	e1a00004 	mov	r0, r4
         b98ac:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         b98b0:	0001e798 	muleq	r1, r8, r7
    */
}

/**
 * Symbol: TFaxToolInterface::__dt(void)
 * Address: 000b98b4
 */
TFaxToolInterface::~TFaxToolInterface(void) {
    /*
         b98b4:	e1a0c00d 	mov	ip, sp
         b98b8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         b98bc:	e24cb004 	sub	fp, ip, #4	; 0x4
         b98c0:	e1a04000 	mov	r4, r0
         b98c4:	e1a05001 	mov	r5, r1
         b98c8:	e59f00fc 	ldr	r0, [pc, #fc]	; b99cc <TFaxToolInterface::__dt(void)+0x118>
         b98cc:	e5840000 	str	r0, [r4]
         b98d0:	e24dd020 	sub	sp, sp, #32	; 0x20
         b98d4:	e28d0010 	add	r0, sp, #16	; 0x10
         b98d8:	eb6cd7b5 	bl	1bef7b4 <TCommToolReply::$__ct(void)>
         b98dc:	e28d0004 	add	r0, sp, #4	; 0x4
         b98e0:	eb6cd7ba 	bl	1bef7d0 <TCommToolControlRequest::$__ct(void)>
         b98e4:	e3a00002 	mov	r0, #2	; 0x2
         b98e8:	e284e014 	add	lr, r4, #20	; 0x14
         b98ec:	e1a0600e 	mov	r6, lr
         b98f0:	e58d000c 	str	r0, [sp, #12]
         b98f4:	e28d0010 	add	r0, sp, #16	; 0x10
         b98f8:	e3a01010 	mov	r1, #16	; 0x10
         b98fc:	e3a02000 	mov	r2, #0	; 0x0
         b9900:	e3a07004 	mov	r7, #4	; 0x4
         b9904:	e3a0c000 	mov	ip, #0	; 0x0
         b9908:	e3a03000 	mov	r3, #0	; 0x0
         b990c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         b9910:	e1a0300c 	mov	r3, ip
         b9914:	e1a01007 	mov	r1, r7
         b9918:	e3a0000c 	mov	r0, #12	; 0xc
         b991c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         b9920:	e28d3024 	add	r3, sp, #36	; 0x24
         b9924:	e92d0008 	stmdb	sp!, {r3}
         b9928:	e28d3024 	add	r3, sp, #36	; 0x24
         b992c:	e1a0000e 	mov	r0, lr
         b9930:	e3a02002 	mov	r2, #2	; 0x2
         b9934:	e3a01001 	mov	r1, #1	; 0x1
         b9938:	eb6c8503 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         b993c:	e28dd044 	add	sp, sp, #68	; 0x44
         b9940:	e2840e22 	add	r0, r4, #544	; 0x220
         b9944:	e3a01000 	mov	r1, #0	; 0x0
         b9948:	eb6c5370 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
         b994c:	e2840e1f 	add	r0, r4, #496	; 0x1f0
         b9950:	e3a01000 	mov	r1, #0	; 0x0
         b9954:	eb6c536d 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
         b9958:	e2840f6b 	add	r0, r4, #428	; 0x1ac
         b995c:	e3a01000 	mov	r1, #0	; 0x0
         b9960:	eb6c536a 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
         b9964:	e2840f4d 	add	r0, r4, #308	; 0x134
         b9968:	e3a01000 	mov	r1, #0	; 0x0
         b996c:	eb6c5367 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
         b9970:	e28400b0 	add	r0, r4, #176	; 0xb0
         b9974:	e3a01000 	mov	r1, #0	; 0x0
         b9978:	eb6caa3b 	bl	1be426c <CBufferSegment::$__dt(void)>
         b997c:	e2840090 	add	r0, r4, #144	; 0x90
         b9980:	e3a01000 	mov	r1, #0	; 0x0
         b9984:	eb6caa31 	bl	1be4250 <CBufferList::$__dt(void)>
         b9988:	e2840038 	add	r0, r4, #56	; 0x38
         b998c:	e3a01000 	mov	r1, #0	; 0x0
         b9990:	eb6bf465 	bl	1bb6b2c <TOptionArray::$__dt(void)>
         b9994:	e2840020 	add	r0, r4, #32	; 0x20
         b9998:	e3a01000 	mov	r1, #0	; 0x0
         b999c:	eb6bf462 	bl	1bb6b2c <TOptionArray::$__dt(void)>
         b99a0:	e1a00006 	mov	r0, r6
         b99a4:	e3a01000 	mov	r1, #0	; 0x0
         b99a8:	eb6c535d 	bl	1bce724 <TUObject::$__dt(void)>
         b99ac:	e1a00004 	mov	r0, r4
         b99b0:	e3a01000 	mov	r1, #0	; 0x0
         b99b4:	eb6caa2d 	bl	1be4270 <TAEventHandler::$__dt(void)>
         b99b8:	e3150001 	tst	r5, #1	; 0x1
         b99bc:	11a00004 	movne	r0, r4
         b99c0:	191b68f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, lr}
         b99c4:	1a6c4f45 	bne	1bcd6e0 <$__dl(void *)>
         b99c8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         b99cc:	0001e798 	muleq	r1, r8, r7
    */
}

/**
 * Symbol: TFaxToolInterface::GetBand(unsigned char *, unsigned long, unsigned char)
 * Address: 000b99d0
 */
TFaxToolInterface::GetBand(unsigned char *, unsigned long, unsigned char) {
    /*
         b99d0:	e1a0c00d 	mov	ip, sp
         b99d4:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         b99d8:	e24cb004 	sub	fp, ip, #4	; 0x4
         b99dc:	e1a04000 	mov	r4, r0
         b99e0:	e1a07001 	mov	r7, r1
         b99e4:	e1a05002 	mov	r5, r2
         b99e8:	e20360ff 	and	r6, r3, #255	; 0xff
         b99ec:	e2800090 	add	r0, r0, #144	; 0x90
         b99f0:	e1a08000 	mov	r8, r0
         b99f4:	eb6ccb0c 	bl	1bec62c <CBufferList::$RemoveAll(void)>
         b99f8:	e3300000 	teq	r0, #0	; 0x0
         b99fc:	1a000032 	bne	b9acc <TFaxToolInterface::GetBand(unsigned char *, unsigned long, unsigned char)+0xfc>
         b9a00:	e3e03000 	mvn	r3, #0	; 0x0
         b9a04:	e3a02000 	mov	r2, #0	; 0x0
         b9a08:	e92d000c 	stmdb	sp!, {r2, r3}
         b9a0c:	e28400b0 	add	r0, r4, #176	; 0xb0
         b9a10:	e1a09000 	mov	r9, r0
         b9a14:	e1a02005 	mov	r2, r5
         b9a18:	e1a01007 	mov	r1, r7
         b9a1c:	e3a03000 	mov	r3, #0	; 0x0
         b9a20:	eb6cbea1 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
         b9a24:	e28dd008 	add	sp, sp, #8	; 0x8
         b9a28:	e3300000 	teq	r0, #0	; 0x0
         b9a2c:	1a000026 	bne	b9acc <TFaxToolInterface::GetBand(unsigned char *, unsigned long, unsigned char)+0xfc>
         b9a30:	e1a01009 	mov	r1, r9
         b9a34:	e1a00008 	mov	r0, r8
         b9a38:	eb6cc2b1 	bl	1bea504 <CBufferList::$InsertLast(CBuffer *)>
         b9a3c:	e3300000 	teq	r0, #0	; 0x0
         b9a40:	1a000021 	bne	b9acc <TFaxToolInterface::GetBand(unsigned char *, unsigned long, unsigned char)+0xfc>
         b9a44:	e3a0e000 	mov	lr, #0	; 0x0
         b9a48:	e5848180 	str	r8, [r4, #384]	; fField384
         b9a4c:	e5c4e18a 	strb	lr, [r4, #394]	; fField394
         b9a50:	e3a05001 	mov	r5, #1	; 0x1
         b9a54:	e5c45189 	strb	r5, [r4, #393]	; fField393
         b9a58:	e5c4e188 	strb	lr, [r4, #392]	; fField392
         b9a5c:	e1b01006 	movs	r1, r6
         b9a60:	e2847014 	add	r7, r4, #20	; 0x14
         b9a64:	e2848f5e 	add	r8, r4, #376	; 0x178
         b9a68:	e2840f65 	add	r0, r4, #404	; 0x194
         b9a6c:	e3a0601c 	mov	r6, #28	; 0x1c
         b9a70:	0a00001c 	beq	b9ae8 <TFaxToolInterface::GetBand(unsigned char *, unsigned long, unsigned char)+0x118>
         b9a74:	e284cf6b 	add	ip, r4, #428	; 0x1ac
         b9a78:	e3a01018 	mov	r1, #24	; 0x18
         b9a7c:	e3a02000 	mov	r2, #0	; 0x0
         b9a80:	e3a03000 	mov	r3, #0	; 0x0
         b9a84:	e3a09001 	mov	r9, #1	; 0x1
         b9a88:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         b9a8c:	e1a0300e 	mov	r3, lr
         b9a90:	e3a02001 	mov	r2, #1	; 0x1
         b9a94:	e1a01009 	mov	r1, r9
         b9a98:	e1a00006 	mov	r0, r6
         b9a9c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         b9aa0:	e1a03008 	mov	r3, r8
         b9aa4:	e92d0008 	stmdb	sp!, {r3}
         b9aa8:	e1a00007 	mov	r0, r7
         b9aac:	e3a03000 	mov	r3, #0	; 0x0
         b9ab0:	e49c1008 	ldr	r1, [ip], #8	; fField8
         b9ab4:	e59c2000 	ldr	r2, [ip]
         b9ab8:	eb6c84a3 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         b9abc:	e28dd024 	add	sp, sp, #36	; 0x24
         b9ac0:	e3300000 	teq	r0, #0	; 0x0
         b9ac4:	05c450da 	streqb	r5, [r4, #218]	; fField218
         b9ac8:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         b9acc:	e1a01000 	mov	r1, r0
         b9ad0:	e1a00004 	mov	r0, r4
         b9ad4:	e3a03000 	mov	r3, #0	; 0x0
         b9ad8:	e3a02000 	mov	r2, #0	; 0x0
         b9adc:	e594c000 	ldr	ip, [r4]
         b9ae0:	e91b6bf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
         b9ae4:	e28cf04c 	add	pc, ip, #76	; 0x4c
         b9ae8:	e24dd004 	sub	sp, sp, #4	; 0x4
         b9aec:	e1a0c008 	mov	ip, r8
         b9af0:	e3a01018 	mov	r1, #24	; 0x18
         b9af4:	e3a02000 	mov	r2, #0	; 0x0
         b9af8:	e3a05001 	mov	r5, #1	; 0x1
         b9afc:	e3a03000 	mov	r3, #0	; 0x0
         b9b00:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         b9b04:	e1a0300e 	mov	r3, lr
         b9b08:	e1a01005 	mov	r1, r5
         b9b0c:	e1a00006 	mov	r0, r6
         b9b10:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         b9b14:	e1a03008 	mov	r3, r8
         b9b18:	e92d0008 	stmdb	sp!, {r3}
         b9b1c:	e28d3024 	add	r3, sp, #36	; 0x24
         b9b20:	e1a00007 	mov	r0, r7
         b9b24:	e3a02002 	mov	r2, #2	; 0x2
         b9b28:	e3a01001 	mov	r1, #1	; 0x1
         b9b2c:	eb6c8486 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         b9b30:	e28dd024 	add	sp, sp, #36	; 0x24
         b9b34:	e1b01000 	movs	r1, r0
         b9b38:	e5d431a4 	ldrb	r3, [r4, #420]	; fField420
         b9b3c:	e59421a8 	ldr	r2, [r4, #424]	; fField424
         b9b40:	0594119c 	ldreq	r1, [r4, #412]	; fField412
         b9b44:	e1a00004 	mov	r0, r4
         b9b48:	e594c000 	ldr	ip, [r4]
         b9b4c:	e1a0e00f 	mov	lr, pc
         b9b50:	e28cf04c 	add	pc, ip, #76	; 0x4c
         b9b54:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxToolInterface::ConfirmReceivedPage(unsigned char, unsigned char)
 * Address: 000b9b58
 */
TFaxToolInterface::ConfirmReceivedPage(unsigned char, unsigned char) {
    /*
         b9b58:	e1a0c00d 	mov	ip, sp
         b9b5c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         b9b60:	e24cb004 	sub	fp, ip, #4	; 0x4
         b9b64:	e1a04000 	mov	r4, r0
         b9b68:	e20160ff 	and	r6, r1, #255	; 0xff
         b9b6c:	e20250ff 	and	r5, r2, #255	; 0xff
         b9b70:	e3e00dfa 	mvn	r0, #16000	; 0x3e80
         b9b74:	e5d411c0 	ldrb	r1, [r4, #448]	; fField448
         b9b78:	e3310000 	teq	r1, #0	; 0x0
         b9b7c:	1a00000f 	bne	b9bc0 <TFaxToolInterface::ConfirmReceivedPage(unsigned char, unsigned char)+0x68>
         b9b80:	e24dd018 	sub	sp, sp, #24	; 0x18
         b9b84:	e1a0000d 	mov	r0, sp
         b9b88:	eb6d29b5 	bl	1c04264 <TCMOFaxEndMessage::$__ct(void)>
         b9b8c:	e5cd6015 	strb	r6, [sp, #21]
         b9b90:	e2840020 	add	r0, r4, #32	; 0x20
         b9b94:	e1a06000 	mov	r6, r0
         b9b98:	eb6c0057 	bl	1bb9cfc <TOptionArray::$RemoveAllOptions(void)>
         b9b9c:	e3300000 	teq	r0, #0	; 0x0
         b9ba0:	1a000005 	bne	b9bbc <TFaxToolInterface::ConfirmReceivedPage(unsigned char, unsigned char)+0x64>
         b9ba4:	e1a00006 	mov	r0, r6
         b9ba8:	e1a0200d 	mov	r2, sp
         b9bac:	e5961000 	ldr	r1, [r6]
         b9bb0:	eb6c003b 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         b9bb4:	e3300000 	teq	r0, #0	; 0x0
         b9bb8:	0a000006 	beq	b9bd8 <TFaxToolInterface::ConfirmReceivedPage(unsigned char, unsigned char)+0x80>
         b9bbc:	e28dd018 	add	sp, sp, #24	; 0x18
         b9bc0:	e1a01000 	mov	r1, r0
         b9bc4:	e1a00004 	mov	r0, r4
         b9bc8:	e3a02000 	mov	r2, #0	; 0x0
         b9bcc:	e5943000 	ldr	r3, [r4]
         b9bd0:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         b9bd4:	e283f054 	add	pc, r3, #84	; 0x54
         b9bd8:	e1b01005 	movs	r1, r5
         b9bdc:	e3a0e000 	mov	lr, #0	; 0x0
         b9be0:	e284c014 	add	ip, r4, #20	; 0x14
         b9be4:	e2847f71 	add	r7, r4, #452	; 0x1c4
         b9be8:	e2840e1e 	add	r0, r4, #480	; 0x1e0
         b9bec:	e3a0501c 	mov	r5, #28	; 0x1c
         b9bf0:	0a00001f 	beq	b9c74 <TFaxToolInterface::ConfirmReceivedPage(unsigned char, unsigned char)+0x11c>
         b9bf4:	e3a01003 	mov	r1, #3	; 0x3
         b9bf8:	e1a0600c 	mov	r6, ip
         b9bfc:	e5841050 	str	r1, [r4, #80]	; fField80
         b9c00:	e284ce1f 	add	ip, r4, #496	; 0x1f0
         b9c04:	e3a01010 	mov	r1, #16	; 0x10
         b9c08:	e3a02000 	mov	r2, #0	; 0x0
         b9c0c:	e3a03000 	mov	r3, #0	; 0x0
         b9c10:	e3a08004 	mov	r8, #4	; 0x4
         b9c14:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         b9c18:	e1a0300e 	mov	r3, lr
         b9c1c:	e3a02001 	mov	r2, #1	; 0x1
         b9c20:	e1a01008 	mov	r1, r8
         b9c24:	e1a00005 	mov	r0, r5
         b9c28:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         b9c2c:	e1a03007 	mov	r3, r7
         b9c30:	e92d0008 	stmdb	sp!, {r3}
         b9c34:	e1a00006 	mov	r0, r6
         b9c38:	e3a03000 	mov	r3, #0	; 0x0
         b9c3c:	e49c1008 	ldr	r1, [ip], #8	; fField8
         b9c40:	e59c2000 	ldr	r2, [ip]
         b9c44:	eb6c8440 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         b9c48:	e28dd024 	add	sp, sp, #36	; 0x24
         b9c4c:	e1b01000 	movs	r1, r0
         b9c50:	03a00001 	moveq	r0, #1	; 0x1
         b9c54:	05c401c0 	streqb	r0, [r4, #448]	; fField448
         b9c58:	0a000028 	beq	b9d00 <TFaxToolInterface::ConfirmReceivedPage(unsigned char, unsigned char)+0x1a8>
         b9c5c:	e1a00004 	mov	r0, r4
         b9c60:	e3a02000 	mov	r2, #0	; 0x0
         b9c64:	e5943000 	ldr	r3, [r4]
         b9c68:	e1a0e00f 	mov	lr, pc
         b9c6c:	e283f054 	add	pc, r3, #84	; 0x54
         b9c70:	ea000022 	b	b9d00 <TFaxToolInterface::ConfirmReceivedPage(unsigned char, unsigned char)+0x1a8>
         b9c74:	e24dd004 	sub	sp, sp, #4	; 0x4
         b9c78:	e1a08007 	mov	r8, r7
         b9c7c:	e3a01010 	mov	r1, #16	; 0x10
         b9c80:	e3a02000 	mov	r2, #0	; 0x0
         b9c84:	e3a07004 	mov	r7, #4	; 0x4
         b9c88:	e3a03000 	mov	r3, #0	; 0x0
         b9c8c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         b9c90:	e1a0300e 	mov	r3, lr
         b9c94:	e1a01007 	mov	r1, r7
         b9c98:	e1a00005 	mov	r0, r5
         b9c9c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         b9ca0:	e1a03008 	mov	r3, r8
         b9ca4:	e92d0008 	stmdb	sp!, {r3}
         b9ca8:	e28d3024 	add	r3, sp, #36	; 0x24
         b9cac:	e1a0000c 	mov	r0, ip
         b9cb0:	e3a02002 	mov	r2, #2	; 0x2
         b9cb4:	e3a01001 	mov	r1, #1	; 0x1
         b9cb8:	eb6c8423 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         b9cbc:	e28dd024 	add	sp, sp, #36	; 0x24
         b9cc0:	e1a05000 	mov	r5, r0
         b9cc4:	e1a00006 	mov	r0, r6
         b9cc8:	e3a01000 	mov	r1, #0	; 0x0
         b9ccc:	eb6c0000 	bl	1bb9cd4 <TOptionArray::$OptionAt(long)>
         b9cd0:	e3350000 	teq	r5, #0	; 0x0
         b9cd4:	11a01005 	movne	r1, r5
         b9cd8:	1a000002 	bne	b9ce8 <TFaxToolInterface::ConfirmReceivedPage(unsigned char, unsigned char)+0x190>
         b9cdc:	e59411e8 	ldr	r1, [r4, #488]	; fField488
         b9ce0:	e3310000 	teq	r1, #0	; 0x0
         b9ce4:	05901010 	ldreq	r1, [r0, #16]
         b9ce8:	e5d02014 	ldrb	r2, [r0, #20]
         b9cec:	e1a00004 	mov	r0, r4
         b9cf0:	e5943000 	ldr	r3, [r4]
         b9cf4:	e1a0e00f 	mov	lr, pc
         b9cf8:	e283f054 	add	pc, r3, #84	; 0x54
         b9cfc:	e28dd004 	add	sp, sp, #4	; 0x4
         b9d00:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxToolInterface::SetMinScanLineTime(unsigned long)
 * Address: 000b9d04
 */
TFaxToolInterface::SetMinScanLineTime(unsigned long) {
    /*
         b9d04:	e1a0c00d 	mov	ip, sp
         b9d08:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         b9d0c:	e24cb004 	sub	fp, ip, #4	; 0x4
         b9d10:	e1a04000 	mov	r4, r0
         b9d14:	e1a05001 	mov	r5, r1
         b9d18:	e3a08000 	mov	r8, #0	; 0x0
         b9d1c:	e3e06dfa 	mvn	r6, #16000	; 0x3e80
         b9d20:	e5d001c0 	ldrb	r0, [r0, #448]	; fField448
         b9d24:	e3300000 	teq	r0, #0	; 0x0
         b9d28:	1a00002b 	bne	b9ddc <TFaxToolInterface::SetMinScanLineTime(unsigned long)+0xd8>
         b9d2c:	e24dd014 	sub	sp, sp, #20	; 0x14
         b9d30:	e1a0000d 	mov	r0, sp
         b9d34:	eb6d2d56 	bl	1c05294 <TCMOFaxMinScanLineTime::$__ct(void)>
         b9d38:	e2840020 	add	r0, r4, #32	; 0x20
         b9d3c:	e1a07000 	mov	r7, r0
         b9d40:	eb6bffed 	bl	1bb9cfc <TOptionArray::$RemoveAllOptions(void)>
         b9d44:	e1b06000 	movs	r6, r0
         b9d48:	1a000020 	bne	b9dd0 <TFaxToolInterface::SetMinScanLineTime(unsigned long)+0xcc>
         b9d4c:	e1a00007 	mov	r0, r7
         b9d50:	e58d500c 	str	r5, [sp, #12]
         b9d54:	e1a0200d 	mov	r2, sp
         b9d58:	e5971000 	ldr	r1, [r7]
         b9d5c:	eb6bffd0 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         b9d60:	e1b06000 	movs	r6, r0
         b9d64:	1a000019 	bne	b9dd0 <TFaxToolInterface::SetMinScanLineTime(unsigned long)+0xcc>
         b9d68:	e2845014 	add	r5, r4, #20	; 0x14
         b9d6c:	e284cf71 	add	ip, r4, #452	; 0x1c4
         b9d70:	e2840e1e 	add	r0, r4, #480	; 0x1e0
         b9d74:	e3a01010 	mov	r1, #16	; 0x10
         b9d78:	e3a02000 	mov	r2, #0	; 0x0
         b9d7c:	e3a0e004 	mov	lr, #4	; 0x4
         b9d80:	e3a06000 	mov	r6, #0	; 0x0
         b9d84:	e3a03000 	mov	r3, #0	; 0x0
         b9d88:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         b9d8c:	e1a03006 	mov	r3, r6
         b9d90:	e1a0100e 	mov	r1, lr
         b9d94:	e3a0001c 	mov	r0, #28	; 0x1c
         b9d98:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         b9d9c:	e1a0300c 	mov	r3, ip
         b9da0:	e92d0008 	stmdb	sp!, {r3}
         b9da4:	e28d3034 	add	r3, sp, #52	; 0x34
         b9da8:	e1a00005 	mov	r0, r5
         b9dac:	e3a02002 	mov	r2, #2	; 0x2
         b9db0:	e3a01001 	mov	r1, #1	; 0x1
         b9db4:	eb6c83e4 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         b9db8:	e28dd024 	add	sp, sp, #36	; 0x24
         b9dbc:	e1a06000 	mov	r6, r0
         b9dc0:	e1a00007 	mov	r0, r7
         b9dc4:	e3a01000 	mov	r1, #0	; 0x0
         b9dc8:	eb6bffc1 	bl	1bb9cd4 <TOptionArray::$OptionAt(long)>
         b9dcc:	e1a08000 	mov	r8, r0
         b9dd0:	e28dd014 	add	sp, sp, #20	; 0x14
         b9dd4:	e3360000 	teq	r6, #0	; 0x0
         b9dd8:	0a000001 	beq	b9de4 <TFaxToolInterface::SetMinScanLineTime(unsigned long)+0xe0>
         b9ddc:	e1a00006 	mov	r0, r6
         b9de0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         b9de4:	e5b401e8 	ldr	r0, [r4, #488]!	; fField488
         b9de8:	e3300000 	teq	r0, #0	; 0x0
         b9dec:	05b80010 	ldreq	r0, [r8, #16]!
         b9df0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxToolInterface::SetDefaultConfig(TOptionArray *, unsigned long)
 * Address: 000b9df4
 */
TFaxToolInterface::SetDefaultConfig(TOptionArray *, unsigned long) {
    /*
         b9df4:	e1a0c00d 	mov	ip, sp
         b9df8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         b9dfc:	e24cb004 	sub	fp, ip, #4	; 0x4
         b9e00:	e1a04001 	mov	r4, r1
         b9e04:	e1a05002 	mov	r5, r2
         b9e08:	e24dd038 	sub	sp, sp, #56	; 0x38
         b9e0c:	e28d0024 	add	r0, sp, #36	; 0x24
         b9e10:	eb6d398d 	bl	1c0844c <TCMOServiceIdentifier::$__ct(void)>
         b9e14:	e28d0010 	add	r0, sp, #16	; 0x10
         b9e18:	eb6c0bff 	bl	1bbce1c <TCMOModemConnectType::$__ct(void)>
         b9e1c:	e1a0000d 	mov	r0, sp
         b9e20:	eb6c07e8 	bl	1bbbdc8 <TCMOFaxDirection::$__ct(void)>
         b9e24:	e1a00004 	mov	r0, r4
         b9e28:	eb6bffb3 	bl	1bb9cfc <TOptionArray::$RemoveAllOptions(void)>
         b9e2c:	e59f00b0 	ldr	r0, [pc, #b0]	; b9ee4 <TFaxToolInterface::SetDefaultConfig(TOptionArray *, unsigned long)+0xf0>
         b9e30:	e58d0030 	str	r0, [sp, #48]
         b9e34:	e28d0024 	add	r0, sp, #36	; 0x24
         b9e38:	eb6d3981 	bl	1c08444 <TOption::$SetAsService(void)>
         b9e3c:	e28d2024 	add	r2, sp, #36	; 0x24
         b9e40:	e5941000 	ldr	r1, [r4]
         b9e44:	e1a00004 	mov	r0, r4
         b9e48:	eb6bff95 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         b9e4c:	e3300000 	teq	r0, #0	; 0x0
         b9e50:	1a000022 	bne	b9ee0 <TFaxToolInterface::SetDefaultConfig(TOptionArray *, unsigned long)+0xec>
         b9e54:	e59f008c 	ldr	r0, [pc, #8c]	; b9ee8 <TFaxToolInterface::SetDefaultConfig(TOptionArray *, unsigned long)+0xf4>	; fField8
         b9e58:	e58d0030 	str	r0, [sp, #48]
         b9e5c:	e58d5034 	str	r5, [sp, #52]
         b9e60:	e28d0024 	add	r0, sp, #36	; 0x24
         b9e64:	eb6d3976 	bl	1c08444 <TOption::$SetAsService(void)>
         b9e68:	e28d2024 	add	r2, sp, #36	; 0x24
         b9e6c:	e5941000 	ldr	r1, [r4]
         b9e70:	e1a00004 	mov	r0, r4
         b9e74:	eb6bff8a 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         b9e78:	e3300000 	teq	r0, #0	; 0x0
         b9e7c:	1a000017 	bne	b9ee0 <TFaxToolInterface::SetDefaultConfig(TOptionArray *, unsigned long)+0xec>
         b9e80:	e59d0018 	ldr	r0, [sp, #24]
         b9e84:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
         b9e88:	e3800c02 	orr	r0, r0, #512	; 0x200
         b9e8c:	e3a05000 	mov	r5, #0	; 0x0
         b9e90:	e58d0018 	str	r0, [sp, #24]
         b9e94:	e5cd501e 	strb	r5, [sp, #30]
         b9e98:	e3a06001 	mov	r6, #1	; 0x1
         b9e9c:	e5cd601d 	strb	r6, [sp, #29]
         b9ea0:	e28d2010 	add	r2, sp, #16	; 0x10
         b9ea4:	e5941000 	ldr	r1, [r4]
         b9ea8:	e1a00004 	mov	r0, r4
         b9eac:	eb6bff7c 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         b9eb0:	e3300000 	teq	r0, #0	; 0x0
         b9eb4:	1a000009 	bne	b9ee0 <TFaxToolInterface::SetDefaultConfig(TOptionArray *, unsigned long)+0xec>
         b9eb8:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         b9ebc:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
         b9ec0:	e3800c02 	orr	r0, r0, #512	; 0x200
         b9ec4:	e58d0008 	str	r0, [sp, #8]	; fField8
         b9ec8:	e5cd500d 	strb	r5, [sp, #13]
         b9ecc:	e5cd600c 	strb	r6, [sp, #12]
         b9ed0:	e1a0200d 	mov	r2, sp
         b9ed4:	e5941000 	ldr	r1, [r4]
         b9ed8:	e1a00004 	mov	r0, r4
         b9edc:	eb6bff70 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         b9ee0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         b9ee4:	66617873 	undefined
         b9ee8:	6d6f6473 	stcvsl	4, cr6, [pc, -#460]!
    */
}

/**
 * Symbol: TFaxToolInterface::SetDefaultOptions(TOptionArray *)
 * Address: 000b9eec
 */
TFaxToolInterface::SetDefaultOptions(TOptionArray *) {
    /*
         b9eec:	e3a02001 	mov	r2, #1	; 0x1
         b9ef0:	ea65c5c0 	b	1a2b5f8 <TFaxToolInterface::$SetFaxOptions(TOptionArray *, unsigned char)>
    */
}

/**
 * Symbol: TFaxToolInterface::SetFaxOptions(TOptionArray *, unsigned char)
 * Address: 000b9ef4
 */
TFaxToolInterface::SetFaxOptions(TOptionArray *, unsigned char) {
    /*
         b9ef4:	e1a0c00d 	mov	ip, sp
         b9ef8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b9efc:	e24cb004 	sub	fp, ip, #4	; 0x4
         b9f00:	e1a04001 	mov	r4, r1
         b9f04:	e24dd018 	sub	sp, sp, #24	; 0x18
         b9f08:	e1a0000d 	mov	r0, sp
         b9f0c:	eb6c07ae 	bl	1bbbdcc <TCMOFaxPageSetUp::$__ct(void)>
         b9f10:	e1a00004 	mov	r0, r4
         b9f14:	eb6bff78 	bl	1bb9cfc <TOptionArray::$RemoveAllOptions(void)>
         b9f18:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         b9f1c:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
         b9f20:	e3800c02 	orr	r0, r0, #512	; 0x200
         b9f24:	e58d0008 	str	r0, [sp, #8]	; fField8
         b9f28:	e1a0200d 	mov	r2, sp
         b9f2c:	e5941000 	ldr	r1, [r4]
         b9f30:	e1a00004 	mov	r0, r4
         b9f34:	eb6bff5a 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         b9f38:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxToolInterface::AETestEvent(TAEvent *)
 * Address: 000b9f3c
 */
TFaxToolInterface::AETestEvent(TAEvent *) {
    /*
         b9f3c:	e5910000 	ldr	r0, [r1]
         b9f40:	e59fc018 	ldr	ip, [pc, #18]	; b9f60 <TFaxToolInterface::AETestEvent(TAEvent *)+0x24>
         b9f44:	e130000c 	teq	r0, ip
         b9f48:	05b10004 	ldreq	r0, [r1, #4]!	; fField4
         b9f4c:	059fc010 	ldreq	ip, [pc, #10]	; b9f64 <TFaxToolInterface::AETestEvent(TAEvent *)+0x28>
         b9f50:	0130000c 	teqeq	r0, ip
         b9f54:	13a00000 	movne	r0, #0	; 0x0
         b9f58:	03a00001 	moveq	r0, #1	; 0x1
         b9f5c:	e1a0f00e 	mov	pc, lr
         b9f60:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         b9f64:	66617873 	undefined
    */
}

/**
 * Symbol: TFaxToolInterface::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 000b9f68
 */
TFaxToolInterface::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
         b9f68:	e1a0c00d 	mov	ip, sp
         b9f6c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         b9f70:	e24cb004 	sub	fp, ip, #4	; 0x4
         b9f74:	e1a04000 	mov	r4, r0
         b9f78:	e5910000 	ldr	r0, [r1]
         b9f7c:	e3a07000 	mov	r7, #0	; 0x0
         b9f80:	e5941144 	ldr	r1, [r4, #324]	; fField324
         b9f84:	e1310000 	teq	r1, r0
         b9f88:	1a000090 	bne	ba1d0 <TFaxToolInterface::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)+0x268>
         b9f8c:	e5d400db 	ldrb	r0, [r4, #219]	; fField219
         b9f90:	e3300000 	teq	r0, #0	; 0x0
         b9f94:	0a000008 	beq	b9fbc <TFaxToolInterface::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)+0x54>
         b9f98:	e5c470db 	strb	r7, [r4, #219]	; fField219
         b9f9c:	e594612c 	ldr	r6, [r4, #300]	; fField300
         b9fa0:	e3360000 	teq	r6, #0	; 0x0
         b9fa4:	1a000064 	bne	ba13c <TFaxToolInterface::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)+0x1d4>
         b9fa8:	e1a00004 	mov	r0, r4
         b9fac:	e3a01001 	mov	r1, #1	; 0x1
         b9fb0:	e5942000 	ldr	r2, [r4]
         b9fb4:	e2822060 	add	r2, r2, #96	; 0x60
         b9fb8:	ea0000ce 	b	ba2f8 <TFaxToolInterface::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)+0x390>
         b9fbc:	e5d400d8 	ldrb	r0, [r4, #216]	; fField216
         b9fc0:	e3300000 	teq	r0, #0	; 0x0
         b9fc4:	0a00007c 	beq	ba1bc <TFaxToolInterface::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)+0x254>
         b9fc8:	e5c470d8 	strb	r7, [r4, #216]	; fField216
         b9fcc:	e594612c 	ldr	r6, [r4, #300]	; fField300
         b9fd0:	e3360000 	teq	r6, #0	; 0x0
         b9fd4:	1a000058 	bne	ba13c <TFaxToolInterface::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)+0x1d4>
         b9fd8:	e5d400d9 	ldrb	r0, [r4, #217]	; fField217
         b9fdc:	e59f5058 	ldr	r5, [pc, #58]	; ba03c <TFaxToolInterface::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)+0xd4>
         b9fe0:	e2848058 	add	r8, r4, #88	; 0x58
         b9fe4:	e3300000 	teq	r0, #0	; 0x0
         b9fe8:	0a00003c 	beq	ba0e0 <TFaxToolInterface::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)+0x178>
         b9fec:	e59400e4 	ldr	r0, [r4, #228]	; fField228
         b9ff0:	e3300004 	teq	r0, #4	; 0x4
         b9ff4:	1a000032 	bne	ba0c4 <TFaxToolInterface::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)+0x15c>
         b9ff8:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         b9ffc:	e1a0000d 	mov	r0, sp
         ba000:	e594101c 	ldr	r1, [r4, #28]	; fField28
         ba004:	eb6beebb 	bl	1bb5af8 <TOptionIterator::$__ct(TOptionArray *)>
         ba008:	e1a0000d 	mov	r0, sp
         ba00c:	e1a01005 	mov	r1, r5
         ba010:	eb6bfaff 	bl	1bb8c14 <TOptionIterator::$FindOption(unsigned long)>
         ba014:	e3300000 	teq	r0, #0	; 0x0
         ba018:	0a000005 	beq	ba034 <TFaxToolInterface::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)+0xcc>
         ba01c:	e5901008 	ldr	r1, [r0, #8]	; fField8
         ba020:	e2012102 	and	r2, r1, #-2147483648	; 0x80000000
         ba024:	e3320102 	teq	r2, #-2147483648	; 0x80000000
         ba028:	01a01c01 	moveq	r1, r1, lsl #24
         ba02c:	03310000 	teqeq	r1, #0	; 0x0
         ba030:	0a000002 	beq	ba040 <TFaxToolInterface::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)+0xd8>
         ba034:	e1a0000d 	mov	r0, sp
         ba038:	ea00003c 	b	ba130 <TFaxToolInterface::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)+0x1c8>
         ba03c:	66736966 	ldrvsbt	r6, [r3], -r6, ror #18
         ba040:	e8b0100e 	ldmia	r0!, {r1, r2, r3, ip}
         ba044:	e8a8100e 	stmia	r8!, {r1, r2, r3, ip}
         ba048:	e890100e 	ldmia	r0, {r1, r2, r3, ip}
         ba04c:	e888100e 	stmia	r8, {r1, r2, r3, ip}
         ba050:	e3a00005 	mov	r0, #5	; 0x5
         ba054:	e58400e4 	str	r0, [r4, #228]	; fField228
         ba058:	e58470f0 	str	r7, [r4, #240]	; fField240
         ba05c:	e284e014 	add	lr, r4, #20	; 0x14
         ba060:	e284cf4d 	add	ip, r4, #308	; 0x134
         ba064:	e28450dc 	add	r5, r4, #220	; 0xdc
         ba068:	e2840f49 	add	r0, r4, #292	; 0x124
         ba06c:	e3a01010 	mov	r1, #16	; 0x10
         ba070:	e3a02000 	mov	r2, #0	; 0x0
         ba074:	e3a03000 	mov	r3, #0	; 0x0
         ba078:	e3a06004 	mov	r6, #4	; 0x4
         ba07c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         ba080:	e1a03007 	mov	r3, r7
         ba084:	e3a02001 	mov	r2, #1	; 0x1
         ba088:	e1a01006 	mov	r1, r6
         ba08c:	e3a00028 	mov	r0, #40	; 0x28
         ba090:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         ba094:	e1a03005 	mov	r3, r5
         ba098:	e92d0008 	stmdb	sp!, {r3}
         ba09c:	e1a0000e 	mov	r0, lr
         ba0a0:	e3a03000 	mov	r3, #0	; 0x0
         ba0a4:	e49c1008 	ldr	r1, [ip], #8	; fField8
         ba0a8:	e59c2000 	ldr	r2, [ip]
         ba0ac:	eb6c8326 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         ba0b0:	e28dd024 	add	sp, sp, #36	; 0x24
         ba0b4:	e1b06000 	movs	r6, r0
         ba0b8:	1affffdd 	bne	ba034 <TFaxToolInterface::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)+0xcc>
         ba0bc:	e1a0000d 	mov	r0, sp
         ba0c0:	ea00003a 	b	ba1b0 <TFaxToolInterface::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)+0x248>
         ba0c4:	e5943074 	ldr	r3, [r4, #116]	; fField116
         ba0c8:	e92d0008 	stmdb	sp!, {r3}
         ba0cc:	e2843064 	add	r3, r4, #100	; 0x64
         ba0d0:	e893000c 	ldmia	r3, {r2, r3}
         ba0d4:	e1a00004 	mov	r0, r4
         ba0d8:	e3a01000 	mov	r1, #0	; 0x0
         ba0dc:	ea00001f 	b	ba160 <TFaxToolInterface::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)+0x1f8>
         ba0e0:	e1a00004 	mov	r0, r4
         ba0e4:	e5941000 	ldr	r1, [r4]
         ba0e8:	e1a0e00f 	mov	lr, pc
         ba0ec:	e281f06c 	add	pc, r1, #108	; 0x6c
         ba0f0:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         ba0f4:	e1a0000d 	mov	r0, sp
         ba0f8:	e594101c 	ldr	r1, [r4, #28]	; fField28
         ba0fc:	eb6bee7d 	bl	1bb5af8 <TOptionIterator::$__ct(TOptionArray *)>
         ba100:	e1a0000d 	mov	r0, sp
         ba104:	e1a01005 	mov	r1, r5
         ba108:	eb6bfac1 	bl	1bb8c14 <TOptionIterator::$FindOption(unsigned long)>
         ba10c:	e3300000 	teq	r0, #0	; 0x0
         ba110:	0a000005 	beq	ba12c <TFaxToolInterface::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)+0x1c4>
         ba114:	e5901008 	ldr	r1, [r0, #8]	; fField8
         ba118:	e2012102 	and	r2, r1, #-2147483648	; 0x80000000
         ba11c:	e3320102 	teq	r2, #-2147483648	; 0x80000000
         ba120:	01a01c01 	moveq	r1, r1, lsl #24
         ba124:	03310000 	teqeq	r1, #0	; 0x0
         ba128:	0a000010 	beq	ba170 <TFaxToolInterface::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)+0x208>
         ba12c:	e1a0000d 	mov	r0, sp
         ba130:	e3a01000 	mov	r1, #0	; 0x0
         ba134:	eb6bf280 	bl	1bb6b3c <TOptionIterator::$__dt(void)>
         ba138:	e28dd01c 	add	sp, sp, #28	; 0x1c
         ba13c:	e5d400d9 	ldrb	r0, [r4, #217]	; fField217
         ba140:	e3300000 	teq	r0, #0	; 0x0
         ba144:	e3a03000 	mov	r3, #0	; 0x0
         ba148:	0a00006c 	beq	ba300 <TFaxToolInterface::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)+0x398>
         ba14c:	e92d0008 	stmdb	sp!, {r3}
         ba150:	e1a01006 	mov	r1, r6
         ba154:	e1a00004 	mov	r0, r4
         ba158:	e3a03000 	mov	r3, #0	; 0x0
         ba15c:	e3a02000 	mov	r2, #0	; 0x0
         ba160:	e594c000 	ldr	ip, [r4]
         ba164:	e1a0e00f 	mov	lr, pc
         ba168:	e28cf020 	add	pc, ip, #32	; 0x20
         ba16c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         ba170:	e8b0100e 	ldmia	r0!, {r1, r2, r3, ip}
         ba174:	e8a8100e 	stmia	r8!, {r1, r2, r3, ip}
         ba178:	e890100e 	ldmia	r0, {r1, r2, r3, ip}
         ba17c:	e888100e 	stmia	r8, {r1, r2, r3, ip}
         ba180:	e2843064 	add	r3, r4, #100	; 0x64
         ba184:	e893000c 	ldmia	r3, {r2, r3}
         ba188:	e92d000c 	stmdb	sp!, {r2, r3}
         ba18c:	e594112c 	ldr	r1, [r4, #300]	; fField300
         ba190:	e1a00004 	mov	r0, r4
         ba194:	e3a03000 	mov	r3, #0	; 0x0
         ba198:	e3a02001 	mov	r2, #1	; 0x1
         ba19c:	e594c000 	ldr	ip, [r4]
         ba1a0:	e1a0e00f 	mov	lr, pc
         ba1a4:	e28cf018 	add	pc, ip, #24	; 0x18
         ba1a8:	e28dd008 	add	sp, sp, #8	; 0x8
         ba1ac:	e1a0000d 	mov	r0, sp
         ba1b0:	e3a01000 	mov	r1, #0	; 0x0
         ba1b4:	eb6bf260 	bl	1bb6b3c <TOptionIterator::$__dt(void)>
         ba1b8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         ba1bc:	e594112c 	ldr	r1, [r4, #300]	; fField300
         ba1c0:	e1a00004 	mov	r0, r4
         ba1c4:	e5942000 	ldr	r2, [r4]
         ba1c8:	e2822028 	add	r2, r2, #40	; 0x28
         ba1cc:	ea000049 	b	ba2f8 <TFaxToolInterface::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)+0x390>
         ba1d0:	e5941200 	ldr	r1, [r4, #512]	; fField512
         ba1d4:	e1310000 	teq	r1, r0
         ba1d8:	1a00002d 	bne	ba294 <TFaxToolInterface::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)+0x32c>
         ba1dc:	e2840020 	add	r0, r4, #32	; 0x20
         ba1e0:	e3a01000 	mov	r1, #0	; 0x0
         ba1e4:	eb6bfeba 	bl	1bb9cd4 <TOptionArray::$OptionAt(long)>
         ba1e8:	e5c471c0 	strb	r7, [r4, #448]	; fField448
         ba1ec:	e5941050 	ldr	r1, [r4, #80]	; fField80
         ba1f0:	e3510005 	cmp	r1, #5	; 0x5
         ba1f4:	908ff101 	addls	pc, pc, r1, lsl #2
         ba1f8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         ba1fc:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         ba200:	ea00000c 	b	ba238 <TFaxToolInterface::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)+0x2d0>
         ba204:	ea000012 	b	ba254 <TFaxToolInterface::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)+0x2ec>
         ba208:	ea000018 	b	ba270 <TFaxToolInterface::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)+0x308>
         ba20c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         ba210:	e59411e8 	ldr	r1, [r4, #488]	; fField488
         ba214:	e3310000 	teq	r1, #0	; 0x0
         ba218:	05900008 	ldreq	r0, [r0, #8]	; fField8
         ba21c:	01a01c00 	moveq	r1, r0, lsl #24
         ba220:	01a01c41 	moveq	r1, r1, asr #24
         ba224:	e1a00004 	mov	r0, r4
         ba228:	e3a02001 	mov	r2, #1	; 0x1
         ba22c:	e5943000 	ldr	r3, [r4]
         ba230:	e2833040 	add	r3, r3, #64	; 0x40
         ba234:	ea000014 	b	ba28c <TFaxToolInterface::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)+0x324>
         ba238:	e59411e8 	ldr	r1, [r4, #488]	; fField488
         ba23c:	e3310000 	teq	r1, #0	; 0x0
         ba240:	05b01010 	ldreq	r1, [r0, #16]!
         ba244:	e1a00004 	mov	r0, r4
         ba248:	e5942000 	ldr	r2, [r4]
         ba24c:	e2822030 	add	r2, r2, #48	; 0x30
         ba250:	ea000028 	b	ba2f8 <TFaxToolInterface::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)+0x390>
         ba254:	e59411e8 	ldr	r1, [r4, #488]	; fField488
         ba258:	e3310000 	teq	r1, #0	; 0x0
         ba25c:	05b01010 	ldreq	r1, [r0, #16]!
         ba260:	e1a00004 	mov	r0, r4
         ba264:	e5942000 	ldr	r2, [r4]
         ba268:	e2822038 	add	r2, r2, #56	; 0x38
         ba26c:	ea000021 	b	ba2f8 <TFaxToolInterface::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)+0x390>
         ba270:	e59411e8 	ldr	r1, [r4, #488]	; fField488
         ba274:	e3310000 	teq	r1, #0	; 0x0
         ba278:	05901010 	ldreq	r1, [r0, #16]
         ba27c:	e5d02014 	ldrb	r2, [r0, #20]
         ba280:	e1a00004 	mov	r0, r4
         ba284:	e5943000 	ldr	r3, [r4]
         ba288:	e2833054 	add	r3, r3, #84	; 0x54
         ba28c:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         ba290:	e283f000 	add	pc, r3, #0	; 0x0
         ba294:	e5941230 	ldr	r1, [r4, #560]	; fField560
         ba298:	e1310000 	teq	r1, r0
         ba29c:	1a000003 	bne	ba2b0 <TFaxToolInterface::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)+0x348>
         ba2a0:	e1a00004 	mov	r0, r4
         ba2a4:	e5941000 	ldr	r1, [r4]
         ba2a8:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         ba2ac:	e281f058 	add	pc, r1, #88	; 0x58
         ba2b0:	e59411bc 	ldr	r1, [r4, #444]	; fField444
         ba2b4:	e1310000 	teq	r1, r0
         ba2b8:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         ba2bc:	e5d400da 	ldrb	r0, [r4, #218]	; fField218
         ba2c0:	e3300000 	teq	r0, #0	; 0x0
         ba2c4:	0a000007 	beq	ba2e8 <TFaxToolInterface::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)+0x380>
         ba2c8:	e5c470da 	strb	r7, [r4, #218]	; fField218
         ba2cc:	e5d431a4 	ldrb	r3, [r4, #420]	; fField420
         ba2d0:	e594119c 	ldr	r1, [r4, #412]	; fField412
         ba2d4:	e59421a8 	ldr	r2, [r4, #424]	; fField424
         ba2d8:	e1a00004 	mov	r0, r4
         ba2dc:	e594c000 	ldr	ip, [r4]
         ba2e0:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         ba2e4:	e28cf04c 	add	pc, ip, #76	; 0x4c
         ba2e8:	e594116c 	ldr	r1, [r4, #364]	; fField364
         ba2ec:	e1a00004 	mov	r0, r4
         ba2f0:	e5942000 	ldr	r2, [r4]
         ba2f4:	e2822044 	add	r2, r2, #68	; 0x44
         ba2f8:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         ba2fc:	e282f000 	add	pc, r2, #0	; 0x0
         ba300:	e3a02000 	mov	r2, #0	; 0x0
         ba304:	e92d000c 	stmdb	sp!, {r2, r3}
         ba308:	e1a01006 	mov	r1, r6
         ba30c:	e1a00004 	mov	r0, r4
         ba310:	e3a03000 	mov	r3, #0	; 0x0
         ba314:	e594c000 	ldr	ip, [r4]
         ba318:	e1a0e00f 	mov	lr, pc
         ba31c:	e28cf018 	add	pc, ip, #24	; 0x18
         ba320:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxToolInterface::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 000ba324
 */
TFaxToolInterface::IdleProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
         ba324:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFaxToolInterface::Init(TOptionArray *, unsigned long, unsigned long)
 * Address: 000ba328
 */
TFaxToolInterface::Init(TOptionArray *, unsigned long, unsigned long) {
    /*
         ba328:	e1a0c00d 	mov	ip, sp
         ba32c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         ba330:	e24cb004 	sub	fp, ip, #4	; 0x4
         ba334:	e1a04000 	mov	r4, r0
         ba338:	e1a05001 	mov	r5, r1
         ba33c:	e1a01002 	mov	r1, r2
         ba340:	e1a02003 	mov	r2, r3
         ba344:	eb6cbc59 	bl	1be94b0 <TAEventHandler::$Init(unsigned long, unsigned long)>
         ba348:	e3300000 	teq	r0, #0	; 0x0
         ba34c:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         ba350:	e1a01005 	mov	r1, r5
         ba354:	e1a00004 	mov	r0, r4
         ba358:	e5942000 	ldr	r2, [r4]
         ba35c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         ba360:	e282f064 	add	pc, r2, #100	; 0x64
    */
}

/**
 * Symbol: TFaxToolInterface::ContinueClose(void)
 * Address: 000ba364
 */
TFaxToolInterface::ContinueClose(void) {
    /*
         ba364:	e1a0c00d 	mov	ip, sp
         ba368:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         ba36c:	e24cb004 	sub	fp, ip, #4	; 0x4
         ba370:	e1a04000 	mov	r4, r0
         ba374:	e3a00006 	mov	r0, #6	; 0x6
         ba378:	e3a0e000 	mov	lr, #0	; 0x0
         ba37c:	e58400e4 	str	r0, [r4, #228]	; fField228
         ba380:	e5c4e0d8 	strb	lr, [r4, #216]	; fField216
         ba384:	e2845014 	add	r5, r4, #20	; 0x14
         ba388:	e284cf4d 	add	ip, r4, #308	; 0x134
         ba38c:	e28460dc 	add	r6, r4, #220	; 0xdc
         ba390:	e2840f49 	add	r0, r4, #292	; 0x124
         ba394:	e3a01010 	mov	r1, #16	; 0x10
         ba398:	e3a02000 	mov	r2, #0	; 0x0
         ba39c:	e3a03000 	mov	r3, #0	; 0x0
         ba3a0:	e3a07004 	mov	r7, #4	; 0x4
         ba3a4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         ba3a8:	e1a0300e 	mov	r3, lr
         ba3ac:	e3a02001 	mov	r2, #1	; 0x1
         ba3b0:	e1a01007 	mov	r1, r7
         ba3b4:	e3a00028 	mov	r0, #40	; 0x28
         ba3b8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         ba3bc:	e1a03006 	mov	r3, r6
         ba3c0:	e92d0008 	stmdb	sp!, {r3}
         ba3c4:	e1a00005 	mov	r0, r5
         ba3c8:	e3a03000 	mov	r3, #0	; 0x0
         ba3cc:	e49c1008 	ldr	r1, [ip], #8	; fField8
         ba3d0:	e59c2000 	ldr	r2, [ip]
         ba3d4:	eb6c825c 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         ba3d8:	e28dd024 	add	sp, sp, #36	; 0x24
         ba3dc:	e3300000 	teq	r0, #0	; 0x0
         ba3e0:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         ba3e4:	e1a01000 	mov	r1, r0
         ba3e8:	e1a00004 	mov	r0, r4
         ba3ec:	e5942000 	ldr	r2, [r4]
         ba3f0:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         ba3f4:	e282f028 	add	pc, r2, #40	; 0x28
    */
}

/**
 * Symbol: TFaxToolInterface::PostBind(unsigned char)
 * Address: 000ba3f8
 */
TFaxToolInterface::PostBind(unsigned char) {
    /*
         ba3f8:	e1a0c00d 	mov	ip, sp
         ba3fc:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         ba400:	e24cb004 	sub	fp, ip, #4	; 0x4
         ba404:	e1a04000 	mov	r4, r0
         ba408:	e21160ff 	ands	r6, r1, #255	; 0xff
         ba40c:	e3a0e000 	mov	lr, #0	; 0x0
         ba410:	e580e11c 	str	lr, [r0, #284]
         ba414:	e5c0e118 	strb	lr, [r0, #280]
         ba418:	e280c014 	add	ip, r0, #20	; 0x14
         ba41c:	e2807f41 	add	r7, r0, #260	; 0x104
         ba420:	e2800f49 	add	r0, r0, #292	; 0x124
         ba424:	e3a05020 	mov	r5, #32	; 0x20
         ba428:	0a000018 	beq	ba490 <TFaxToolInterface::PostBind(unsigned char)+0x98>
         ba42c:	e3a01001 	mov	r1, #1	; 0x1
         ba430:	e5c410db 	strb	r1, [r4, #219]	; fField219
         ba434:	e1a0600c 	mov	r6, ip
         ba438:	e284cf4d 	add	ip, r4, #308	; 0x134
         ba43c:	e3a01010 	mov	r1, #16	; 0x10
         ba440:	e3a02000 	mov	r2, #0	; 0x0
         ba444:	e3a03000 	mov	r3, #0	; 0x0
         ba448:	e3a08004 	mov	r8, #4	; 0x4
         ba44c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         ba450:	e1a0300e 	mov	r3, lr
         ba454:	e3a02001 	mov	r2, #1	; 0x1
         ba458:	e1a01008 	mov	r1, r8
         ba45c:	e1a00005 	mov	r0, r5
         ba460:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         ba464:	e1a03007 	mov	r3, r7
         ba468:	e92d0008 	stmdb	sp!, {r3}
         ba46c:	e1a00006 	mov	r0, r6
         ba470:	e3a03000 	mov	r3, #0	; 0x0
         ba474:	e49c1008 	ldr	r1, [ip], #8	; fField8
         ba478:	e59c2000 	ldr	r2, [ip]
         ba47c:	eb6c8232 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         ba480:	e28dd024 	add	sp, sp, #36	; 0x24
         ba484:	e1b05000 	movs	r5, r0
         ba488:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         ba48c:	ea000016 	b	ba4ec <TFaxToolInterface::PostBind(unsigned char)+0xf4>
         ba490:	e24dd004 	sub	sp, sp, #4	; 0x4
         ba494:	e3a01010 	mov	r1, #16	; 0x10
         ba498:	e3a02000 	mov	r2, #0	; 0x0
         ba49c:	e3a08004 	mov	r8, #4	; 0x4
         ba4a0:	e3a03000 	mov	r3, #0	; 0x0
         ba4a4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         ba4a8:	e1a0300e 	mov	r3, lr
         ba4ac:	e1a01008 	mov	r1, r8
         ba4b0:	e1a00005 	mov	r0, r5
         ba4b4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         ba4b8:	e1a03007 	mov	r3, r7
         ba4bc:	e92d0008 	stmdb	sp!, {r3}
         ba4c0:	e28d3024 	add	r3, sp, #36	; 0x24
         ba4c4:	e1a0000c 	mov	r0, ip
         ba4c8:	e3a02002 	mov	r2, #2	; 0x2
         ba4cc:	e3a01001 	mov	r1, #1	; 0x1
         ba4d0:	eb6c821d 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         ba4d4:	e28dd024 	add	sp, sp, #36	; 0x24
         ba4d8:	e1b05000 	movs	r5, r0
         ba4dc:	0594512c 	ldreq	r5, [r4, #300]	; fField300
         ba4e0:	03350000 	teqeq	r5, #0	; 0x0
         ba4e4:	0a000011 	beq	ba530 <TFaxToolInterface::PostBind(unsigned char)+0x138>
         ba4e8:	e28dd004 	add	sp, sp, #4	; 0x4
         ba4ec:	e1a00004 	mov	r0, r4
         ba4f0:	e5941000 	ldr	r1, [r4]
         ba4f4:	e1a0e00f 	mov	lr, pc
         ba4f8:	e281f06c 	add	pc, r1, #108	; 0x6c
         ba4fc:	e5d400d9 	ldrb	r0, [r4, #217]	; fField217
         ba500:	e3300001 	teq	r0, #1	; 0x1
         ba504:	e3a03000 	mov	r3, #0	; 0x0
         ba508:	1a00000e 	bne	ba548 <TFaxToolInterface::PostBind(unsigned char)+0x150>
         ba50c:	e92d0008 	stmdb	sp!, {r3}
         ba510:	e1a01005 	mov	r1, r5
         ba514:	e1a00004 	mov	r0, r4
         ba518:	e3a03000 	mov	r3, #0	; 0x0
         ba51c:	e3a02000 	mov	r2, #0	; 0x0
         ba520:	e594c000 	ldr	ip, [r4]
         ba524:	e1a0e00f 	mov	lr, pc
         ba528:	e28cf020 	add	pc, ip, #32	; 0x20
         ba52c:	ea000004 	b	ba544 <TFaxToolInterface::PostBind(unsigned char)+0x14c>
         ba530:	e1a01006 	mov	r1, r6
         ba534:	e1a00004 	mov	r0, r4
         ba538:	e5942000 	ldr	r2, [r4]
         ba53c:	e1a0e00f 	mov	lr, pc
         ba540:	e282f060 	add	pc, r2, #96	; 0x60
         ba544:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         ba548:	e3a02000 	mov	r2, #0	; 0x0
         ba54c:	e92d000c 	stmdb	sp!, {r2, r3}
         ba550:	e1a01005 	mov	r1, r5
         ba554:	e1a00004 	mov	r0, r4
         ba558:	e3a03000 	mov	r3, #0	; 0x0
         ba55c:	e594c000 	ldr	ip, [r4]
         ba560:	e1a0e00f 	mov	lr, pc
         ba564:	e28cf018 	add	pc, ip, #24	; 0x18
         ba568:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxToolInterface::PostConnect(unsigned char)
 * Address: 000ba56c
 */
TFaxToolInterface::PostConnect(unsigned char) {
    /*
         ba56c:	e1a0c00d 	mov	ip, sp
         ba570:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         ba574:	e24cb004 	sub	fp, ip, #4	; 0x4
         ba578:	e1a04000 	mov	r4, r0
         ba57c:	e20150ff 	and	r5, r1, #255	; 0xff
         ba580:	e5d000d9 	ldrb	r0, [r0, #217]	; fField217
         ba584:	e3300001 	teq	r0, #1	; 0x1
         ba588:	13a00003 	movne	r0, #3	; 0x3
         ba58c:	03a00004 	moveq	r0, #4	; 0x4
         ba590:	e58400e4 	str	r0, [r4, #228]	; fField228
         ba594:	e594001c 	ldr	r0, [r4, #28]	; fField28
         ba598:	eb6c01dd 	bl	1bbad14 <TOptionArray::$Reset(void)>
         ba59c:	e594001c 	ldr	r0, [r4, #28]	; fField28
         ba5a0:	e58400f0 	str	r0, [r4, #240]	; fField240
         ba5a4:	e5900000 	ldr	r0, [r0]
         ba5a8:	e3a08000 	mov	r8, #0	; 0x0
         ba5ac:	e28440f4 	add	r4, r4, #244	; 0xf4
         ba5b0:	e8840101 	stmia	r4, {r0, r8}
         ba5b4:	e24440f4 	sub	r4, r4, #244	; 0xf4
         ba5b8:	e5c48100 	strb	r8, [r4, #256]	; fField256
         ba5bc:	e1b00005 	movs	r0, r5
         ba5c0:	e2847014 	add	r7, r4, #20	; 0x14
         ba5c4:	e28460dc 	add	r6, r4, #220	; 0xdc
         ba5c8:	e2845f49 	add	r5, r4, #292	; 0x124
         ba5cc:	e3a0c028 	mov	ip, #40	; 0x28
         ba5d0:	0a000018 	beq	ba638 <TFaxToolInterface::PostConnect(unsigned char)+0xcc>
         ba5d4:	e3a00001 	mov	r0, #1	; 0x1
         ba5d8:	e5c400d8 	strb	r0, [r4, #216]	; fField216
         ba5dc:	e284ef4d 	add	lr, r4, #308	; 0x134
         ba5e0:	e1a00005 	mov	r0, r5
         ba5e4:	e3a01010 	mov	r1, #16	; 0x10
         ba5e8:	e3a02000 	mov	r2, #0	; 0x0
         ba5ec:	e3a03000 	mov	r3, #0	; 0x0
         ba5f0:	e3a05004 	mov	r5, #4	; 0x4
         ba5f4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         ba5f8:	e1a03008 	mov	r3, r8
         ba5fc:	e3a02001 	mov	r2, #1	; 0x1
         ba600:	e1a01005 	mov	r1, r5
         ba604:	e1a0000c 	mov	r0, ip
         ba608:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         ba60c:	e1a03006 	mov	r3, r6
         ba610:	e92d0008 	stmdb	sp!, {r3}
         ba614:	e1a00007 	mov	r0, r7
         ba618:	e3a03000 	mov	r3, #0	; 0x0
         ba61c:	e49e1008 	ldr	r1, [lr], #8	; fField8
         ba620:	e59e2000 	ldr	r2, [lr]
         ba624:	eb6c81c8 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         ba628:	e28dd024 	add	sp, sp, #36	; 0x24
         ba62c:	e1b0a000 	movs	sl, r0
         ba630:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         ba634:	ea00005b 	b	ba7a8 <TFaxToolInterface::PostConnect(unsigned char)+0x23c>
         ba638:	e24dd004 	sub	sp, sp, #4	; 0x4
         ba63c:	e1a0e007 	mov	lr, r7
         ba640:	e1a0a006 	mov	sl, r6
         ba644:	e1a00005 	mov	r0, r5
         ba648:	e3a01010 	mov	r1, #16	; 0x10
         ba64c:	e3a02000 	mov	r2, #0	; 0x0
         ba650:	e3a09004 	mov	r9, #4	; 0x4
         ba654:	e3a03000 	mov	r3, #0	; 0x0
         ba658:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         ba65c:	e1a03008 	mov	r3, r8
         ba660:	e1a01009 	mov	r1, r9
         ba664:	e1a0900c 	mov	r9, ip
         ba668:	e1a0000c 	mov	r0, ip
         ba66c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         ba670:	e1a0300a 	mov	r3, sl
         ba674:	e92d0008 	stmdb	sp!, {r3}
         ba678:	e28d3024 	add	r3, sp, #36	; 0x24
         ba67c:	e1a0000e 	mov	r0, lr
         ba680:	e3a02002 	mov	r2, #2	; 0x2
         ba684:	e3a01001 	mov	r1, #1	; 0x1
         ba688:	eb6c81af 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         ba68c:	e28dd024 	add	sp, sp, #36	; 0x24
         ba690:	e1b0a000 	movs	sl, r0
         ba694:	0594a12c 	ldreq	sl, [r4, #300]	; fField300
         ba698:	033a0000 	teqeq	sl, #0	; 0x0
         ba69c:	1a00001c 	bne	ba714 <TFaxToolInterface::PostConnect(unsigned char)+0x1a8>
         ba6a0:	e1a00004 	mov	r0, r4
         ba6a4:	e5941000 	ldr	r1, [r4]
         ba6a8:	e1a0e00f 	mov	lr, pc
         ba6ac:	e281f06c 	add	pc, r1, #108	; 0x6c
         ba6b0:	e3a00005 	mov	r0, #5	; 0x5
         ba6b4:	e58400e4 	str	r0, [r4, #228]	; fField228
         ba6b8:	e1a00005 	mov	r0, r5
         ba6bc:	e3a01010 	mov	r1, #16	; 0x10
         ba6c0:	e3a02000 	mov	r2, #0	; 0x0
         ba6c4:	e3a0c004 	mov	ip, #4	; 0x4
         ba6c8:	e3a03000 	mov	r3, #0	; 0x0
         ba6cc:	e58480f0 	str	r8, [r4, #240]	; fField240
         ba6d0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         ba6d4:	e1a03008 	mov	r3, r8
         ba6d8:	e1a0100c 	mov	r1, ip
         ba6dc:	e1a00009 	mov	r0, r9
         ba6e0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         ba6e4:	e1a03006 	mov	r3, r6
         ba6e8:	e92d0008 	stmdb	sp!, {r3}
         ba6ec:	e28d3024 	add	r3, sp, #36	; 0x24
         ba6f0:	e1a00007 	mov	r0, r7
         ba6f4:	e3a02002 	mov	r2, #2	; 0x2
         ba6f8:	e3a01001 	mov	r1, #1	; 0x1
         ba6fc:	eb6c8192 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         ba700:	e28dd024 	add	sp, sp, #36	; 0x24
         ba704:	e1b0a000 	movs	sl, r0
         ba708:	0594a12c 	ldreq	sl, [r4, #300]	; fField300
         ba70c:	033a0000 	teqeq	sl, #0	; 0x0
         ba710:	0a000001 	beq	ba71c <TFaxToolInterface::PostConnect(unsigned char)+0x1b0>
         ba714:	e28dd004 	add	sp, sp, #4	; 0x4
         ba718:	ea000022 	b	ba7a8 <TFaxToolInterface::PostConnect(unsigned char)+0x23c>
         ba71c:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         ba720:	e1a0000d 	mov	r0, sp
         ba724:	e594101c 	ldr	r1, [r4, #28]	; fField28
         ba728:	eb6becf2 	bl	1bb5af8 <TOptionIterator::$__ct(TOptionArray *)>
         ba72c:	e1a0000d 	mov	r0, sp
         ba730:	e59f1054 	ldr	r1, [pc, #54]	; ba78c <TFaxToolInterface::PostConnect(unsigned char)+0x220>
         ba734:	eb6bf936 	bl	1bb8c14 <TOptionIterator::$FindOption(unsigned long)>
         ba738:	e3300000 	teq	r0, #0	; 0x0
         ba73c:	0a000013 	beq	ba790 <TFaxToolInterface::PostConnect(unsigned char)+0x224>
         ba740:	e284e058 	add	lr, r4, #88	; 0x58
         ba744:	e8b0100e 	ldmia	r0!, {r1, r2, r3, ip}
         ba748:	e8ae100e 	stmia	lr!, {r1, r2, r3, ip}
         ba74c:	e890100e 	ldmia	r0, {r1, r2, r3, ip}
         ba750:	e88e100e 	stmia	lr, {r1, r2, r3, ip}
         ba754:	e5d400d9 	ldrb	r0, [r4, #217]	; fField217
         ba758:	e3300001 	teq	r0, #1	; 0x1
         ba75c:	1a000022 	bne	ba7ec <TFaxToolInterface::PostConnect(unsigned char)+0x280>
         ba760:	e5943074 	ldr	r3, [r4, #116]	; fField116
         ba764:	e92d0008 	stmdb	sp!, {r3}
         ba768:	e594112c 	ldr	r1, [r4, #300]	; fField300
         ba76c:	e2843064 	add	r3, r4, #100	; 0x64
         ba770:	e893000c 	ldmia	r3, {r2, r3}
         ba774:	e1a00004 	mov	r0, r4
         ba778:	e594c000 	ldr	ip, [r4]
         ba77c:	e1a0e00f 	mov	lr, pc
         ba780:	e28cf020 	add	pc, ip, #32	; 0x20
         ba784:	e28dd004 	add	sp, sp, #4	; 0x4
         ba788:	ea000022 	b	ba818 <TFaxToolInterface::PostConnect(unsigned char)+0x2ac>
         ba78c:	66736966 	ldrvsbt	r6, [r3], -r6, ror #18
         ba790:	e3a0a07a 	mov	sl, #122	; 0x7a
         ba794:	e24aac3f 	sub	sl, sl, #16128	; 0x3f00
         ba798:	e1a0000d 	mov	r0, sp
         ba79c:	e3a01000 	mov	r1, #0	; 0x0
         ba7a0:	eb6bf0e5 	bl	1bb6b3c <TOptionIterator::$__dt(void)>
         ba7a4:	e28dd020 	add	sp, sp, #32	; 0x20
         ba7a8:	e1a00004 	mov	r0, r4
         ba7ac:	e5941000 	ldr	r1, [r4]
         ba7b0:	e1a0e00f 	mov	lr, pc
         ba7b4:	e281f06c 	add	pc, r1, #108	; 0x6c
         ba7b8:	e5d400d9 	ldrb	r0, [r4, #217]	; fField217
         ba7bc:	e3300001 	teq	r0, #1	; 0x1
         ba7c0:	e3a03000 	mov	r3, #0	; 0x0
         ba7c4:	1a000018 	bne	ba82c <TFaxToolInterface::PostConnect(unsigned char)+0x2c0>
         ba7c8:	e92d0008 	stmdb	sp!, {r3}
         ba7cc:	e1a0100a 	mov	r1, sl
         ba7d0:	e1a00004 	mov	r0, r4
         ba7d4:	e3a03000 	mov	r3, #0	; 0x0
         ba7d8:	e3a02000 	mov	r2, #0	; 0x0
         ba7dc:	e594c000 	ldr	ip, [r4]
         ba7e0:	e1a0e00f 	mov	lr, pc
         ba7e4:	e28cf020 	add	pc, ip, #32	; 0x20
         ba7e8:	ea00000e 	b	ba828 <TFaxToolInterface::PostConnect(unsigned char)+0x2bc>
         ba7ec:	e2843064 	add	r3, r4, #100	; 0x64
         ba7f0:	e893000c 	ldmia	r3, {r2, r3}
         ba7f4:	e92d000c 	stmdb	sp!, {r2, r3}
         ba7f8:	e594112c 	ldr	r1, [r4, #300]	; fField300
         ba7fc:	e1a00004 	mov	r0, r4
         ba800:	e3a03000 	mov	r3, #0	; 0x0
         ba804:	e3a02001 	mov	r2, #1	; 0x1
         ba808:	e594c000 	ldr	ip, [r4]
         ba80c:	e1a0e00f 	mov	lr, pc
         ba810:	e28cf018 	add	pc, ip, #24	; 0x18
         ba814:	e28dd008 	add	sp, sp, #8	; 0x8
         ba818:	e1a0000d 	mov	r0, sp
         ba81c:	e3a01000 	mov	r1, #0	; 0x0
         ba820:	eb6bf0c5 	bl	1bb6b3c <TOptionIterator::$__dt(void)>
         ba824:	e28dd01c 	add	sp, sp, #28	; 0x1c
         ba828:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         ba82c:	e3a02000 	mov	r2, #0	; 0x0
         ba830:	e92d000c 	stmdb	sp!, {r2, r3}
         ba834:	e1a0100a 	mov	r1, sl
         ba838:	e1a00004 	mov	r0, r4
         ba83c:	e3a03000 	mov	r3, #0	; 0x0
         ba840:	e594c000 	ldr	ip, [r4]
         ba844:	e1a0e00f 	mov	lr, pc
         ba848:	e28cf018 	add	pc, ip, #24	; 0x18
         ba84c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxToolInterface::DoInit(TOptionArray *)
 * Address: 000ba850
 */
TFaxToolInterface::DoInit(TOptionArray *) {
    /*
         ba850:	e1a0c00d 	mov	ip, sp
         ba854:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         ba858:	e24cb004 	sub	fp, ip, #4	; 0x4
         ba85c:	e1a04000 	mov	r4, r0
         ba860:	e1a05001 	mov	r5, r1
         ba864:	e24dd00c 	sub	sp, sp, #12	; 0xc
         ba868:	e1a00001 	mov	r0, r1
         ba86c:	eb6cdc0b 	bl	1bf18a0 <$RunModemNavigator(TOptionArray *)>
         ba870:	e3300000 	teq	r0, #0	; 0x0
         ba874:	1a00003f 	bne	ba978 <TFaxToolInterface::DoInit(TOptionArray *)+0x128>
         ba878:	e1a0100d 	mov	r1, sp
         ba87c:	e1a00005 	mov	r0, r5
         ba880:	eb6bf4ce 	bl	1bb7bc0 <$CMStartService(TOptionArray *, TServiceInfo *)>
         ba884:	e3300000 	teq	r0, #0	; 0x0
         ba888:	1a00003a 	bne	ba978 <TFaxToolInterface::DoInit(TOptionArray *)+0x128>
         ba88c:	e2840014 	add	r0, r4, #20	; 0x14
         ba890:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         ba894:	eb6c57eb 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
         ba898:	e3a05000 	mov	r5, #0	; 0x0
         ba89c:	e5c451c0 	strb	r5, [r4, #448]	; fField448
         ba8a0:	e2846020 	add	r6, r4, #32	; 0x20
         ba8a4:	e58461d0 	str	r6, [r4, #464]	; fField464
         ba8a8:	e5c451dc 	strb	r5, [r4, #476]	; fField476
         ba8ac:	e3a00001 	mov	r0, #1	; 0x1
         ba8b0:	e5c401dd 	strb	r0, [r4, #477]	; fField477
         ba8b4:	e3a00c05 	mov	r0, #1280	; 0x500
         ba8b8:	e58401d8 	str	r0, [r4, #472]	; fField472
         ba8bc:	e2842f51 	add	r2, r4, #324	; 0x144
         ba8c0:	e2841f4d 	add	r1, r4, #308	; 0x134
         ba8c4:	e1a00004 	mov	r0, r4
         ba8c8:	eb65b2bc 	bl	1a273c0 <TFaxToolInterface::$InitAsyncMsg(TUAsyncMessage *, unsigned long *)>
         ba8cc:	e3300000 	teq	r0, #0	; 0x0
         ba8d0:	1a000028 	bne	ba978 <TFaxToolInterface::DoInit(TOptionArray *)+0x128>
         ba8d4:	e2842c02 	add	r2, r4, #512	; 0x200
         ba8d8:	e2841e1f 	add	r1, r4, #496	; 0x1f0
         ba8dc:	e1a00004 	mov	r0, r4
         ba8e0:	eb65b2b6 	bl	1a273c0 <TFaxToolInterface::$InitAsyncMsg(TUAsyncMessage *, unsigned long *)>
         ba8e4:	e3300000 	teq	r0, #0	; 0x0
         ba8e8:	1a000022 	bne	ba978 <TFaxToolInterface::DoInit(TOptionArray *)+0x128>
         ba8ec:	e2842e23 	add	r2, r4, #560	; 0x230
         ba8f0:	e2841e22 	add	r1, r4, #544	; 0x220
         ba8f4:	e1a00004 	mov	r0, r4
         ba8f8:	eb65b2b0 	bl	1a273c0 <TFaxToolInterface::$InitAsyncMsg(TUAsyncMessage *, unsigned long *)>
         ba8fc:	e3300000 	teq	r0, #0	; 0x0
         ba900:	1a00001c 	bne	ba978 <TFaxToolInterface::DoInit(TOptionArray *)+0x128>
         ba904:	e2842f6f 	add	r2, r4, #444	; 0x1bc
         ba908:	e2841f6b 	add	r1, r4, #428	; 0x1ac
         ba90c:	e1a00004 	mov	r0, r4
         ba910:	eb65b2aa 	bl	1a273c0 <TFaxToolInterface::$InitAsyncMsg(TUAsyncMessage *, unsigned long *)>
         ba914:	e3300000 	teq	r0, #0	; 0x0
         ba918:	1a000016 	bne	ba978 <TFaxToolInterface::DoInit(TOptionArray *)+0x128>
         ba91c:	e1a00006 	mov	r0, r6
         ba920:	eb6bf8d5 	bl	1bb8c7c <TOptionArray::$Init(void)>
         ba924:	e3300000 	teq	r0, #0	; 0x0
         ba928:	1a000012 	bne	ba978 <TFaxToolInterface::DoInit(TOptionArray *)+0x128>
         ba92c:	e2840038 	add	r0, r4, #56	; 0x38
         ba930:	e1a06000 	mov	r6, r0
         ba934:	eb6bf8d0 	bl	1bb8c7c <TOptionArray::$Init(void)>
         ba938:	e3300000 	teq	r0, #0	; 0x0
         ba93c:	1a00000d 	bne	ba978 <TFaxToolInterface::DoInit(TOptionArray *)+0x128>
         ba940:	e2840078 	add	r0, r4, #120	; 0x78
         ba944:	e5901008 	ldr	r1, [r0, #8]	; fField8
         ba948:	e3c11cff 	bic	r1, r1, #65280	; 0xff00
         ba94c:	e3811c02 	orr	r1, r1, #512	; 0x200
         ba950:	e5a01008 	str	r1, [r0, #8]!	; fField8
         ba954:	e584615c 	str	r6, [r4, #348]	; fField348
         ba958:	e2840090 	add	r0, r4, #144	; 0x90
         ba95c:	e5840150 	str	r0, [r4, #336]	; fField336
         ba960:	e5c45158 	strb	r5, [r4, #344]	; fField344
         ba964:	e5c45159 	strb	r5, [r4, #345]	; fField345
         ba968:	e584518c 	str	r5, [r4, #396]	; fField396
         ba96c:	e3a01000 	mov	r1, #0	; 0x0
         ba970:	e5a45190 	str	r5, [r4, #400]!	; fField400
         ba974:	eb6cbac4 	bl	1be948c <CBufferList::$Init(unsigned char)>
         ba978:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxToolInterface::InitAsyncMsg(TUAsyncMessage *, unsigned long *)
 * Address: 000ba97c
 */
TFaxToolInterface::InitAsyncMsg(TUAsyncMessage *, unsigned long *) {
    /*
         ba97c:	e1a0c00d 	mov	ip, sp
         ba980:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         ba984:	e24cb004 	sub	fp, ip, #4	; 0x4
         ba988:	e1a06000 	mov	r6, r0
         ba98c:	e1a04001 	mov	r4, r1
         ba990:	e1a05002 	mov	r5, r2
         ba994:	e1a00001 	mov	r0, r1
         ba998:	e3a01001 	mov	r1, #1	; 0x1
         ba99c:	eb6c6c3c 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
         ba9a0:	e3300000 	teq	r0, #0	; 0x0
         ba9a4:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         ba9a8:	eb6c6409 	bl	1bd39d4 <$GetGlobals>
         ba9ac:	eb6cb6a2 	bl	1be843c <TAppWorld::$GetMyPort(void)>
         ba9b0:	e5901000 	ldr	r1, [r0]
         ba9b4:	e1a00004 	mov	r0, r4
         ba9b8:	eb6c84f4 	bl	1bdbd90 <TUAsyncMessage::$SetCollectorPort(unsigned long)>
         ba9bc:	e3300000 	teq	r0, #0	; 0x0
         ba9c0:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         ba9c4:	e1a01006 	mov	r1, r6
         ba9c8:	e1a00004 	mov	r0, r4
         ba9cc:	eb6c890f 	bl	1bdce10 <TUSharedMemMsg::$SetUserRefCon(unsigned long)>
         ba9d0:	e3300000 	teq	r0, #0	; 0x0
         ba9d4:	05941000 	ldreq	r1, [r4]
         ba9d8:	05851000 	streq	r1, [r5]
         ba9dc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxToolInterface::InitConnect(unsigned char *, unsigned long)
 * Address: 000ba9e0
 */
TFaxToolInterface::InitConnect(unsigned char *, unsigned long) {
    /*
         ba9e0:	e1a0c00d 	mov	ip, sp
         ba9e4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         ba9e8:	e24cb004 	sub	fp, ip, #4	; 0x4
         ba9ec:	e1a05000 	mov	r5, r0
         ba9f0:	e1b06001 	movs	r6, r1
         ba9f4:	e1a04002 	mov	r4, r2
         ba9f8:	13340000 	teqne	r4, #0	; 0x0
         ba9fc:	0a00000d 	beq	baa38 <TFaxToolInterface::InitConnect(unsigned char *, unsigned long)+0x58>
         baa00:	e24dd014 	sub	sp, sp, #20	; 0x14
         baa04:	e1a01004 	mov	r1, r4
         baa08:	e1a0000d 	mov	r0, sp
         baa0c:	eb652a24 	bl	1a052a4 <TCMAPhoneNumber::$__ct(unsigned long)>
         baa10:	e1a03004 	mov	r3, r4
         baa14:	e595001c 	ldr	r0, [r5, #28]	; fField28
         baa18:	e92d0008 	stmdb	sp!, {r3}
         baa1c:	e1a03006 	mov	r3, r6
         baa20:	e28d2004 	add	r2, sp, #4	; 0x4
         baa24:	e5901000 	ldr	r1, [r0]
         baa28:	eb6bfc9f 	bl	1bb9cac <TOptionArray::$InsertVarOptionAt(long, TOption *, void *, unsigned long)>
         baa2c:	e3300000 	teq	r0, #0	; 0x0
         baa30:	e28dd018 	add	sp, sp, #24	; 0x18
         baa34:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         baa38:	e2850058 	add	r0, r5, #88	; 0x58
         baa3c:	e1a04000 	mov	r4, r0
         baa40:	eb6c00b5 	bl	1bbad1c <TOption::$Reset(void)>
         baa44:	e5941008 	ldr	r1, [r4, #8]	; fField8
         baa48:	e3c11cff 	bic	r1, r1, #65280	; 0xff00
         baa4c:	e3811b01 	orr	r1, r1, #1024	; 0x400
         baa50:	e5841008 	str	r1, [r4, #8]	; fField8
         baa54:	e1a02004 	mov	r2, r4
         baa58:	e5b5001c 	ldr	r0, [r5, #28]!	; fField28
         baa5c:	e5901000 	ldr	r1, [r0]
         baa60:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         baa64:	ea6bfc8e 	b	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
    */
}

/**
 * Symbol: TFaxToolInterface::CleanUpAfterConnect(void)
 * Address: 000baa68
 */
TFaxToolInterface::CleanUpAfterConnect(void) {
    /*
         baa68:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFaxToolInterface::OpenSession(TOptionArray *, unsigned char *, unsigned long, unsigned char)
 * Address: 000baa6c
 */
TFaxToolInterface::OpenSession(TOptionArray *, unsigned char *, unsigned long, unsigned char) {
    /*
         baa6c:	e1a0c00d 	mov	ip, sp
         baa70:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         baa74:	e24cb004 	sub	fp, ip, #4	; 0x4
         baa78:	e1a04000 	mov	r4, r0
         baa7c:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         baa80:	e20050ff 	and	r5, r0, #255	; 0xff
         baa84:	e3a0007a 	mov	r0, #122	; 0x7a
         baa88:	e2400c3f 	sub	r0, r0, #16128	; 0x3f00
         baa8c:	e3310000 	teq	r1, #0	; 0x0
         baa90:	0a00000f 	beq	baad4 <TFaxToolInterface::OpenSession(TOptionArray *, unsigned char *, unsigned long, unsigned char)+0x68>
         baa94:	e584101c 	str	r1, [r4, #28]	; fField28
         baa98:	e1a01002 	mov	r1, r2
         baa9c:	e1a00004 	mov	r0, r4
         baaa0:	e1a02003 	mov	r2, r3
         baaa4:	e5943000 	ldr	r3, [r4]
         baaa8:	e1a0e00f 	mov	lr, pc
         baaac:	e283f068 	add	pc, r3, #104	; 0x68
         baab0:	e3300000 	teq	r0, #0	; 0x0
         baab4:	1a000006 	bne	baad4 <TFaxToolInterface::OpenSession(TOptionArray *, unsigned char *, unsigned long, unsigned char)+0x68>
         baab8:	e3a00000 	mov	r0, #0	; 0x0
         baabc:	e5c400d9 	strb	r0, [r4, #217]	; fField217
         baac0:	e1a01005 	mov	r1, r5
         baac4:	e1a00004 	mov	r0, r4
         baac8:	e5942000 	ldr	r2, [r4]
         baacc:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         baad0:	e282f05c 	add	pc, r2, #92	; 0x5c
         baad4:	e3a03000 	mov	r3, #0	; 0x0
         baad8:	e3a02000 	mov	r2, #0	; 0x0
         baadc:	e92d000c 	stmdb	sp!, {r2, r3}
         baae0:	e1a01000 	mov	r1, r0
         baae4:	e1a00004 	mov	r0, r4
         baae8:	e594c000 	ldr	ip, [r4]
         baaec:	e1a0e00f 	mov	lr, pc
         baaf0:	e28cf018 	add	pc, ip, #24	; 0x18
         baaf4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxToolInterface::AcceptSession(TOptionArray *, unsigned char)
 * Address: 000baaf8
 */
TFaxToolInterface::AcceptSession(TOptionArray *, unsigned char) {
    /*
         baaf8:	e1a0c00d 	mov	ip, sp
         baafc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         bab00:	e24cb004 	sub	fp, ip, #4	; 0x4
         bab04:	e1a04000 	mov	r4, r0
         bab08:	e20250ff 	and	r5, r2, #255	; 0xff
         bab0c:	e3a0007a 	mov	r0, #122	; 0x7a
         bab10:	e2400c3f 	sub	r0, r0, #16128	; 0x3f00
         bab14:	e3310000 	teq	r1, #0	; 0x0
         bab18:	0a00000f 	beq	bab5c <TFaxToolInterface::AcceptSession(TOptionArray *, unsigned char)+0x64>
         bab1c:	e584101c 	str	r1, [r4, #28]	; fField28
         bab20:	e1a00004 	mov	r0, r4
         bab24:	e3a02000 	mov	r2, #0	; 0x0
         bab28:	e3a01000 	mov	r1, #0	; 0x0
         bab2c:	e5943000 	ldr	r3, [r4]
         bab30:	e1a0e00f 	mov	lr, pc
         bab34:	e283f068 	add	pc, r3, #104	; 0x68
         bab38:	e3300000 	teq	r0, #0	; 0x0
         bab3c:	1a000006 	bne	bab5c <TFaxToolInterface::AcceptSession(TOptionArray *, unsigned char)+0x64>
         bab40:	e3a00001 	mov	r0, #1	; 0x1
         bab44:	e5c400d9 	strb	r0, [r4, #217]	; fField217
         bab48:	e1a01005 	mov	r1, r5
         bab4c:	e1a00004 	mov	r0, r4
         bab50:	e5942000 	ldr	r2, [r4]
         bab54:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         bab58:	e282f060 	add	pc, r2, #96	; 0x60
         bab5c:	e3a03000 	mov	r3, #0	; 0x0
         bab60:	e92d0008 	stmdb	sp!, {r3}
         bab64:	e1a01000 	mov	r1, r0
         bab68:	e1a00004 	mov	r0, r4
         bab6c:	e3a02000 	mov	r2, #0	; 0x0
         bab70:	e594c000 	ldr	ip, [r4]
         bab74:	e1a0e00f 	mov	lr, pc
         bab78:	e28cf020 	add	pc, ip, #32	; 0x20
         bab7c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxToolInterface::CloseSession(unsigned char)
 * Address: 000bab80
 */
TFaxToolInterface::CloseSession(unsigned char) {
    /*
         bab80:	e1a0c00d 	mov	ip, sp
         bab84:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         bab88:	e24cb004 	sub	fp, ip, #4	; 0x4
         bab8c:	e1a04000 	mov	r4, r0
         bab90:	e31100ff 	tst	r1, #255	; 0xff
         bab94:	e3a00004 	mov	r0, #4	; 0x4
         bab98:	e584020c 	str	r0, [r4, #524]	; fField524
         bab9c:	e2847f81 	add	r7, r4, #516	; 0x204
         baba0:	e2840e21 	add	r0, r4, #528	; 0x210
         baba4:	e3a0c00c 	mov	ip, #12	; 0xc
         baba8:	e3a06000 	mov	r6, #0	; 0x0
         babac:	e2845014 	add	r5, r4, #20	; 0x14
         babb0:	0a000018 	beq	bac18 <TFaxToolInterface::CloseSession(unsigned char)+0x98>
         babb4:	e284ee22 	add	lr, r4, #544	; 0x220
         babb8:	e3a01010 	mov	r1, #16	; 0x10
         babbc:	e3a02000 	mov	r2, #0	; 0x0
         babc0:	e3a03000 	mov	r3, #0	; 0x0
         babc4:	e3a08010 	mov	r8, #16	; 0x10
         babc8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         babcc:	e1a03006 	mov	r3, r6
         babd0:	e3a02001 	mov	r2, #1	; 0x1
         babd4:	e1a01008 	mov	r1, r8
         babd8:	e1a0000c 	mov	r0, ip
         babdc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         babe0:	e1a03007 	mov	r3, r7
         babe4:	e92d0008 	stmdb	sp!, {r3}
         babe8:	e1a00005 	mov	r0, r5
         babec:	e3a03000 	mov	r3, #0	; 0x0
         babf0:	e49e1008 	ldr	r1, [lr], #8	; fField8
         babf4:	e59e2000 	ldr	r2, [lr]
         babf8:	eb6c8053 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         babfc:	e28dd024 	add	sp, sp, #36	; 0x24
         bac00:	e1b01000 	movs	r1, r0
         bac04:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         bac08:	e1a00004 	mov	r0, r4
         bac0c:	e5942000 	ldr	r2, [r4]
         bac10:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         bac14:	e282f028 	add	pc, r2, #40	; 0x28
         bac18:	e24dd004 	sub	sp, sp, #4	; 0x4
         bac1c:	e1a0e005 	mov	lr, r5
         bac20:	e3a01010 	mov	r1, #16	; 0x10
         bac24:	e3a02000 	mov	r2, #0	; 0x0
         bac28:	e3a08010 	mov	r8, #16	; 0x10
         bac2c:	e3a03000 	mov	r3, #0	; 0x0
         bac30:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         bac34:	e1a03006 	mov	r3, r6
         bac38:	e1a01008 	mov	r1, r8
         bac3c:	e1a0000c 	mov	r0, ip
         bac40:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         bac44:	e1a03007 	mov	r3, r7
         bac48:	e92d0008 	stmdb	sp!, {r3}
         bac4c:	e28d3024 	add	r3, sp, #36	; 0x24
         bac50:	e1a0000e 	mov	r0, lr
         bac54:	e3a02002 	mov	r2, #2	; 0x2
         bac58:	e3a01001 	mov	r1, #1	; 0x1
         bac5c:	eb6c803a 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         bac60:	e28dd024 	add	sp, sp, #36	; 0x24
         bac64:	e3300000 	teq	r0, #0	; 0x0
         bac68:	11a01000 	movne	r1, r0
         bac6c:	1a000017 	bne	bacd0 <TFaxToolInterface::CloseSession(unsigned char)+0x150>
         bac70:	e3a00006 	mov	r0, #6	; 0x6
         bac74:	e58400e4 	str	r0, [r4, #228]	; fField228
         bac78:	e284c0dc 	add	ip, r4, #220	; 0xdc
         bac7c:	e2840f49 	add	r0, r4, #292	; 0x124
         bac80:	e3a01010 	mov	r1, #16	; 0x10
         bac84:	e3a02000 	mov	r2, #0	; 0x0
         bac88:	e3a0e004 	mov	lr, #4	; 0x4
         bac8c:	e3a03000 	mov	r3, #0	; 0x0
         bac90:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         bac94:	e1a03006 	mov	r3, r6
         bac98:	e1a0100e 	mov	r1, lr
         bac9c:	e3a00028 	mov	r0, #40	; 0x28
         baca0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         baca4:	e1a0300c 	mov	r3, ip
         baca8:	e92d0008 	stmdb	sp!, {r3}
         bacac:	e28d3024 	add	r3, sp, #36	; 0x24
         bacb0:	e1a00005 	mov	r0, r5
         bacb4:	e3a02002 	mov	r2, #2	; 0x2
         bacb8:	e3a01001 	mov	r1, #1	; 0x1
         bacbc:	eb6c8022 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         bacc0:	e28dd024 	add	sp, sp, #36	; 0x24
         bacc4:	e3300000 	teq	r0, #0	; 0x0
         bacc8:	0594112c 	ldreq	r1, [r4, #300]	; fField300
         baccc:	11a01000 	movne	r1, r0
         bacd0:	e1a00004 	mov	r0, r4
         bacd4:	e5942000 	ldr	r2, [r4]
         bacd8:	e1a0e00f 	mov	lr, pc
         bacdc:	e282f028 	add	pc, r2, #40	; 0x28
         bace0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxToolInterface::BeginPage(unsigned char)
 * Address: 000bace4
 */
TFaxToolInterface::BeginPage(unsigned char) {
    /*
         bace4:	e1a0c00d 	mov	ip, sp
         bace8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         bacec:	e24cb004 	sub	fp, ip, #4	; 0x4
         bacf0:	e1a04000 	mov	r4, r0
         bacf4:	e20160ff 	and	r6, r1, #255	; 0xff
         bacf8:	e3e00dfa 	mvn	r0, #16000	; 0x3e80
         bacfc:	e5d411c0 	ldrb	r1, [r4, #448]	; fField448
         bad00:	e3310000 	teq	r1, #0	; 0x0
         bad04:	1a00000e 	bne	bad44 <TFaxToolInterface::BeginPage(unsigned char)+0x60>
         bad08:	e24dd014 	sub	sp, sp, #20	; 0x14
         bad0c:	e1a0000d 	mov	r0, sp
         bad10:	eb6d254e 	bl	1c04250 <TCMOFaxStartPage::$__ct(void)>
         bad14:	e2840020 	add	r0, r4, #32	; 0x20
         bad18:	e1a05000 	mov	r5, r0
         bad1c:	eb6bfbf6 	bl	1bb9cfc <TOptionArray::$RemoveAllOptions(void)>
         bad20:	e3300000 	teq	r0, #0	; 0x0
         bad24:	1a000005 	bne	bad40 <TFaxToolInterface::BeginPage(unsigned char)+0x5c>
         bad28:	e1a00005 	mov	r0, r5
         bad2c:	e1a0200d 	mov	r2, sp
         bad30:	e5951000 	ldr	r1, [r5]
         bad34:	eb6bfbda 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         bad38:	e3300000 	teq	r0, #0	; 0x0
         bad3c:	0a000005 	beq	bad58 <TFaxToolInterface::BeginPage(unsigned char)+0x74>
         bad40:	e28dd014 	add	sp, sp, #20	; 0x14
         bad44:	e1a01000 	mov	r1, r0
         bad48:	e1a00004 	mov	r0, r4
         bad4c:	e5942000 	ldr	r2, [r4]
         bad50:	e91b6bf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
         bad54:	e282f030 	add	pc, r2, #48	; 0x30
         bad58:	e1b01006 	movs	r1, r6
         bad5c:	e3a0e000 	mov	lr, #0	; 0x0
         bad60:	e284c014 	add	ip, r4, #20	; 0x14
         bad64:	e2848f71 	add	r8, r4, #452	; 0x1c4
         bad68:	e2840e1e 	add	r0, r4, #480	; 0x1e0
         bad6c:	e3a0601c 	mov	r6, #28	; 0x1c
         bad70:	0a00001e 	beq	badf0 <TFaxToolInterface::BeginPage(unsigned char)+0x10c>
         bad74:	e3a05001 	mov	r5, #1	; 0x1
         bad78:	e1a0700c 	mov	r7, ip
         bad7c:	e5845050 	str	r5, [r4, #80]	; fField80
         bad80:	e284ce1f 	add	ip, r4, #496	; 0x1f0
         bad84:	e3a01010 	mov	r1, #16	; 0x10
         bad88:	e3a02000 	mov	r2, #0	; 0x0
         bad8c:	e3a03000 	mov	r3, #0	; 0x0
         bad90:	e3a09004 	mov	r9, #4	; 0x4
         bad94:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         bad98:	e1a0300e 	mov	r3, lr
         bad9c:	e3a02001 	mov	r2, #1	; 0x1
         bada0:	e1a01009 	mov	r1, r9
         bada4:	e1a00006 	mov	r0, r6
         bada8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         badac:	e1a03008 	mov	r3, r8
         badb0:	e92d0008 	stmdb	sp!, {r3}
         badb4:	e1a00007 	mov	r0, r7
         badb8:	e3a03000 	mov	r3, #0	; 0x0
         badbc:	e49c1008 	ldr	r1, [ip], #8	; fField8
         badc0:	e59c2000 	ldr	r2, [ip]
         badc4:	eb6c7fe0 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         badc8:	e28dd024 	add	sp, sp, #36	; 0x24
         badcc:	e3300000 	teq	r0, #0	; 0x0
         badd0:	05c451c0 	streqb	r5, [r4, #448]	; fField448
         badd4:	0a000027 	beq	bae78 <TFaxToolInterface::BeginPage(unsigned char)+0x194>
         badd8:	e1a01000 	mov	r1, r0
         baddc:	e1a00004 	mov	r0, r4
         bade0:	e5942000 	ldr	r2, [r4]
         bade4:	e1a0e00f 	mov	lr, pc
         bade8:	e282f030 	add	pc, r2, #48	; 0x30
         badec:	ea000021 	b	bae78 <TFaxToolInterface::BeginPage(unsigned char)+0x194>
         badf0:	e24dd004 	sub	sp, sp, #4	; 0x4
         badf4:	e1a07008 	mov	r7, r8
         badf8:	e3a01010 	mov	r1, #16	; 0x10
         badfc:	e3a02000 	mov	r2, #0	; 0x0
         bae00:	e3a08004 	mov	r8, #4	; 0x4
         bae04:	e3a03000 	mov	r3, #0	; 0x0
         bae08:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         bae0c:	e1a0300e 	mov	r3, lr
         bae10:	e1a01008 	mov	r1, r8
         bae14:	e1a00006 	mov	r0, r6
         bae18:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         bae1c:	e1a03007 	mov	r3, r7
         bae20:	e92d0008 	stmdb	sp!, {r3}
         bae24:	e28d3024 	add	r3, sp, #36	; 0x24
         bae28:	e1a0000c 	mov	r0, ip
         bae2c:	e3a02002 	mov	r2, #2	; 0x2
         bae30:	e3a01001 	mov	r1, #1	; 0x1
         bae34:	eb6c7fc4 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         bae38:	e28dd024 	add	sp, sp, #36	; 0x24
         bae3c:	e1a06000 	mov	r6, r0
         bae40:	e1a00005 	mov	r0, r5
         bae44:	e3a01000 	mov	r1, #0	; 0x0
         bae48:	eb6bfba1 	bl	1bb9cd4 <TOptionArray::$OptionAt(long)>
         bae4c:	e3360000 	teq	r6, #0	; 0x0
         bae50:	11a01006 	movne	r1, r6
         bae54:	1a000002 	bne	bae64 <TFaxToolInterface::BeginPage(unsigned char)+0x180>
         bae58:	e59411e8 	ldr	r1, [r4, #488]	; fField488
         bae5c:	e3310000 	teq	r1, #0	; 0x0
         bae60:	05b01010 	ldreq	r1, [r0, #16]!
         bae64:	e1a00004 	mov	r0, r4
         bae68:	e5942000 	ldr	r2, [r4]
         bae6c:	e1a0e00f 	mov	lr, pc
         bae70:	e282f030 	add	pc, r2, #48	; 0x30
         bae74:	e28dd004 	add	sp, sp, #4	; 0x4
         bae78:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxToolInterface::EndPage(unsigned char, unsigned char)
 * Address: 000bae7c
 */
TFaxToolInterface::EndPage(unsigned char, unsigned char) {
    /*
         bae7c:	e1a0c00d 	mov	ip, sp
         bae80:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         bae84:	e24cb004 	sub	fp, ip, #4	; 0x4
         bae88:	e1a04000 	mov	r4, r0
         bae8c:	e20150ff 	and	r5, r1, #255	; 0xff
         bae90:	e20260ff 	and	r6, r2, #255	; 0xff
         bae94:	e3e00dfa 	mvn	r0, #16000	; 0x3e80
         bae98:	e5d411c0 	ldrb	r1, [r4, #448]	; fField448
         bae9c:	e3310000 	teq	r1, #0	; 0x0
         baea0:	1a00000f 	bne	baee4 <TFaxToolInterface::EndPage(unsigned char, unsigned char)+0x68>
         baea4:	e24dd018 	sub	sp, sp, #24	; 0x18
         baea8:	e1a0000d 	mov	r0, sp
         baeac:	eb6d24ec 	bl	1c04264 <TCMOFaxEndMessage::$__ct(void)>
         baeb0:	e5cd6014 	strb	r6, [sp, #20]
         baeb4:	e2840020 	add	r0, r4, #32	; 0x20
         baeb8:	e1a06000 	mov	r6, r0
         baebc:	eb6bfb8e 	bl	1bb9cfc <TOptionArray::$RemoveAllOptions(void)>
         baec0:	e3300000 	teq	r0, #0	; 0x0
         baec4:	1a000005 	bne	baee0 <TFaxToolInterface::EndPage(unsigned char, unsigned char)+0x64>
         baec8:	e1a00006 	mov	r0, r6
         baecc:	e1a0200d 	mov	r2, sp
         baed0:	e5961000 	ldr	r1, [r6]
         baed4:	eb6bfb72 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         baed8:	e3300000 	teq	r0, #0	; 0x0
         baedc:	0a000005 	beq	baef8 <TFaxToolInterface::EndPage(unsigned char, unsigned char)+0x7c>
         baee0:	e28dd018 	add	sp, sp, #24	; 0x18
         baee4:	e1a01000 	mov	r1, r0
         baee8:	e1a00004 	mov	r0, r4
         baeec:	e5942000 	ldr	r2, [r4]
         baef0:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         baef4:	e282f038 	add	pc, r2, #56	; 0x38
         baef8:	e1b01005 	movs	r1, r5
         baefc:	e3a0e000 	mov	lr, #0	; 0x0
         baf00:	e284c014 	add	ip, r4, #20	; 0x14
         baf04:	e2847f71 	add	r7, r4, #452	; 0x1c4
         baf08:	e2840e1e 	add	r0, r4, #480	; 0x1e0
         baf0c:	e3a0501c 	mov	r5, #28	; 0x1c
         baf10:	0a00001e 	beq	baf90 <TFaxToolInterface::EndPage(unsigned char, unsigned char)+0x114>
         baf14:	e3a01002 	mov	r1, #2	; 0x2
         baf18:	e1a0600c 	mov	r6, ip
         baf1c:	e5841050 	str	r1, [r4, #80]	; fField80
         baf20:	e284ce1f 	add	ip, r4, #496	; 0x1f0
         baf24:	e3a01010 	mov	r1, #16	; 0x10
         baf28:	e3a02000 	mov	r2, #0	; 0x0
         baf2c:	e3a03000 	mov	r3, #0	; 0x0
         baf30:	e3a08004 	mov	r8, #4	; 0x4
         baf34:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         baf38:	e1a0300e 	mov	r3, lr
         baf3c:	e3a02001 	mov	r2, #1	; 0x1
         baf40:	e1a01008 	mov	r1, r8
         baf44:	e1a00005 	mov	r0, r5
         baf48:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         baf4c:	e1a03007 	mov	r3, r7
         baf50:	e92d0008 	stmdb	sp!, {r3}
         baf54:	e1a00006 	mov	r0, r6
         baf58:	e3a03000 	mov	r3, #0	; 0x0
         baf5c:	e49c1008 	ldr	r1, [ip], #8	; fField8
         baf60:	e59c2000 	ldr	r2, [ip]
         baf64:	eb6c7f78 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         baf68:	e28dd024 	add	sp, sp, #36	; 0x24
         baf6c:	e1b01000 	movs	r1, r0
         baf70:	03a00001 	moveq	r0, #1	; 0x1
         baf74:	05c401c0 	streqb	r0, [r4, #448]	; fField448
         baf78:	0a000026 	beq	bb018 <TFaxToolInterface::EndPage(unsigned char, unsigned char)+0x19c>
         baf7c:	e1a00004 	mov	r0, r4
         baf80:	e5942000 	ldr	r2, [r4]
         baf84:	e1a0e00f 	mov	lr, pc
         baf88:	e282f038 	add	pc, r2, #56	; 0x38
         baf8c:	ea000021 	b	bb018 <TFaxToolInterface::EndPage(unsigned char, unsigned char)+0x19c>
         baf90:	e24dd004 	sub	sp, sp, #4	; 0x4
         baf94:	e1a08007 	mov	r8, r7
         baf98:	e3a01010 	mov	r1, #16	; 0x10
         baf9c:	e3a02000 	mov	r2, #0	; 0x0
         bafa0:	e3a07004 	mov	r7, #4	; 0x4
         bafa4:	e3a03000 	mov	r3, #0	; 0x0
         bafa8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         bafac:	e1a0300e 	mov	r3, lr
         bafb0:	e1a01007 	mov	r1, r7
         bafb4:	e1a00005 	mov	r0, r5
         bafb8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         bafbc:	e1a03008 	mov	r3, r8
         bafc0:	e92d0008 	stmdb	sp!, {r3}
         bafc4:	e28d3024 	add	r3, sp, #36	; 0x24
         bafc8:	e1a0000c 	mov	r0, ip
         bafcc:	e3a02002 	mov	r2, #2	; 0x2
         bafd0:	e3a01001 	mov	r1, #1	; 0x1
         bafd4:	eb6c7f5c 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         bafd8:	e28dd024 	add	sp, sp, #36	; 0x24
         bafdc:	e1a05000 	mov	r5, r0
         bafe0:	e1a00006 	mov	r0, r6
         bafe4:	e3a01000 	mov	r1, #0	; 0x0
         bafe8:	eb6bfb39 	bl	1bb9cd4 <TOptionArray::$OptionAt(long)>
         bafec:	e3350000 	teq	r5, #0	; 0x0
         baff0:	11a01005 	movne	r1, r5
         baff4:	1a000002 	bne	bb004 <TFaxToolInterface::EndPage(unsigned char, unsigned char)+0x188>
         baff8:	e59411e8 	ldr	r1, [r4, #488]	; fField488
         baffc:	e3310000 	teq	r1, #0	; 0x0
         bb000:	05b01010 	ldreq	r1, [r0, #16]!
         bb004:	e1a00004 	mov	r0, r4
         bb008:	e5942000 	ldr	r2, [r4]
         bb00c:	e1a0e00f 	mov	lr, pc
         bb010:	e282f038 	add	pc, r2, #56	; 0x38
         bb014:	e28dd004 	add	sp, sp, #4	; 0x4
         bb018:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxToolInterface::PrintBand(unsigned char *, unsigned long, unsigned long, unsigned long, unsigned char)
 * Address: 000bb01c
 */
TFaxToolInterface::PrintBand(unsigned char *, unsigned long, unsigned long, unsigned long, unsigned char) {
    /*
         bb01c:	e1a0c00d 	mov	ip, sp
         bb020:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         bb024:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         bb028:	e24cb014 	sub	fp, ip, #20	; 0x14
         bb02c:	e1a04000 	mov	r4, r0
         bb030:	e1a06002 	mov	r6, r2
         bb034:	e1a05003 	mov	r5, r3
         bb038:	e59b0018 	ldr	r0, [fp, #24]
         bb03c:	e20080ff 	and	r8, r0, #255	; 0xff
         bb040:	e2840090 	add	r0, r4, #144	; 0x90
         bb044:	e1a09000 	mov	r9, r0
         bb048:	e59ba014 	ldr	sl, [fp, #20]
         bb04c:	eb6cc576 	bl	1bec62c <CBufferList::$RemoveAll(void)>
         bb050:	e3300000 	teq	r0, #0	; 0x0
         bb054:	1a00003c 	bne	bb14c <TFaxToolInterface::PrintBand(unsigned char *, unsigned long, unsigned long, unsigned long, unsigned char)+0x130>
         bb058:	e3e03000 	mvn	r3, #0	; 0x0
         bb05c:	e3a02000 	mov	r2, #0	; 0x0
         bb060:	e92d000c 	stmdb	sp!, {r2, r3}
         bb064:	e0020695 	mul	r2, r5, r6
         bb068:	e28400b0 	add	r0, r4, #176	; 0xb0
         bb06c:	e1a07000 	mov	r7, r0
         bb070:	e3a03000 	mov	r3, #0	; 0x0
         bb074:	e59b1008 	ldr	r1, [fp, #8]	; fField8
         bb078:	eb6cb90b 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
         bb07c:	e28dd008 	add	sp, sp, #8	; 0x8
         bb080:	e3300000 	teq	r0, #0	; 0x0
         bb084:	1a000030 	bne	bb14c <TFaxToolInterface::PrintBand(unsigned char *, unsigned long, unsigned long, unsigned long, unsigned char)+0x130>
         bb088:	e1a01007 	mov	r1, r7
         bb08c:	e1a00009 	mov	r0, r9
         bb090:	eb6cbd1b 	bl	1bea504 <CBufferList::$InsertLast(CBuffer *)>
         bb094:	e3300000 	teq	r0, #0	; 0x0
         bb098:	1a00002b 	bne	bb14c <TFaxToolInterface::PrintBand(unsigned char *, unsigned long, unsigned long, unsigned long, unsigned char)+0x130>
         bb09c:	e2844088 	add	r4, r4, #136	; 0x88
         bb0a0:	e8840420 	stmia	r4, {r5, sl}
         bb0a4:	e5246004 	str	r6, [r4, -#4]!	; fField4
         bb0a8:	e2444084 	sub	r4, r4, #132	; 0x84
         bb0ac:	e2840038 	add	r0, r4, #56	; 0x38
         bb0b0:	e1a05000 	mov	r5, r0
         bb0b4:	eb6bfb10 	bl	1bb9cfc <TOptionArray::$RemoveAllOptions(void)>
         bb0b8:	e3300000 	teq	r0, #0	; 0x0
         bb0bc:	1a000022 	bne	bb14c <TFaxToolInterface::PrintBand(unsigned char *, unsigned long, unsigned long, unsigned long, unsigned char)+0x130>
         bb0c0:	e1a00005 	mov	r0, r5
         bb0c4:	e2842078 	add	r2, r4, #120	; 0x78
         bb0c8:	e5951000 	ldr	r1, [r5]
         bb0cc:	eb6bfaf4 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         bb0d0:	e3300000 	teq	r0, #0	; 0x0
         bb0d4:	1a00001c 	bne	bb14c <TFaxToolInterface::PrintBand(unsigned char *, unsigned long, unsigned long, unsigned long, unsigned char)+0x130>
         bb0d8:	e3a0e000 	mov	lr, #0	; 0x0
         bb0dc:	e284c014 	add	ip, r4, #20	; 0x14
         bb0e0:	e2847f52 	add	r7, r4, #328	; 0x148
         bb0e4:	e2840f59 	add	r0, r4, #356	; 0x164
         bb0e8:	e3a0501c 	mov	r5, #28	; 0x1c
         bb0ec:	e3380000 	teq	r8, #0	; 0x0
         bb0f0:	0a00001a 	beq	bb160 <TFaxToolInterface::PrintBand(unsigned char *, unsigned long, unsigned long, unsigned long, unsigned char)+0x144>
         bb0f4:	e1a0600c 	mov	r6, ip
         bb0f8:	e284cf6b 	add	ip, r4, #428	; 0x1ac
         bb0fc:	e3a01014 	mov	r1, #20	; 0x14
         bb100:	e3a02000 	mov	r2, #0	; 0x0
         bb104:	e3a03000 	mov	r3, #0	; 0x0
         bb108:	e3a08002 	mov	r8, #2	; 0x2
         bb10c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         bb110:	e1a0300e 	mov	r3, lr
         bb114:	e3a02001 	mov	r2, #1	; 0x1
         bb118:	e1a01008 	mov	r1, r8
         bb11c:	e1a00005 	mov	r0, r5
         bb120:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         bb124:	e1a03007 	mov	r3, r7
         bb128:	e92d0008 	stmdb	sp!, {r3}
         bb12c:	e1a00006 	mov	r0, r6
         bb130:	e3a03000 	mov	r3, #0	; 0x0
         bb134:	e49c1008 	ldr	r1, [ip], #8	; fField8
         bb138:	e59c2000 	ldr	r2, [ip]
         bb13c:	eb6c7f02 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         bb140:	e28dd024 	add	sp, sp, #36	; 0x24
         bb144:	e3300000 	teq	r0, #0	; 0x0
         bb148:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         bb14c:	e1a01000 	mov	r1, r0
         bb150:	e1a00004 	mov	r0, r4
         bb154:	e5942000 	ldr	r2, [r4]
         bb158:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
         bb15c:	e282f044 	add	pc, r2, #68	; 0x44
         bb160:	e24dd004 	sub	sp, sp, #4	; 0x4
         bb164:	e3a01014 	mov	r1, #20	; 0x14
         bb168:	e3a02000 	mov	r2, #0	; 0x0
         bb16c:	e3a06002 	mov	r6, #2	; 0x2
         bb170:	e3a03000 	mov	r3, #0	; 0x0
         bb174:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         bb178:	e1a0300e 	mov	r3, lr
         bb17c:	e1a01006 	mov	r1, r6
         bb180:	e1a00005 	mov	r0, r5
         bb184:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         bb188:	e1a03007 	mov	r3, r7
         bb18c:	e92d0008 	stmdb	sp!, {r3}
         bb190:	e28d3024 	add	r3, sp, #36	; 0x24
         bb194:	e1a0000c 	mov	r0, ip
         bb198:	e3a02002 	mov	r2, #2	; 0x2
         bb19c:	e3a01001 	mov	r1, #1	; 0x1
         bb1a0:	eb6c7ee9 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         bb1a4:	e28dd024 	add	sp, sp, #36	; 0x24
         bb1a8:	e3300000 	teq	r0, #0	; 0x0
         bb1ac:	0594116c 	ldreq	r1, [r4, #364]	; fField364
         bb1b0:	11a01000 	movne	r1, r0
         bb1b4:	e1a00004 	mov	r0, r4
         bb1b8:	e5942000 	ldr	r2, [r4]
         bb1bc:	e1a0e00f 	mov	lr, pc
         bb1c0:	e282f044 	add	pc, r2, #68	; 0x44
         bb1c4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxToolInterface::PrintBandContinue(long, unsigned char)
 * Address: 000bb1c8
 */
TFaxToolInterface::PrintBandContinue(long, unsigned char) {
    /*
         bb1c8:	e1a0c00d 	mov	ip, sp
         bb1cc:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         bb1d0:	e24cb004 	sub	fp, ip, #4	; 0x4
         bb1d4:	e1a04000 	mov	r4, r0
         bb1d8:	e20200ff 	and	r0, r2, #255	; 0xff
         bb1dc:	e3310000 	teq	r1, #0	; 0x0
         bb1e0:	1a000020 	bne	bb268 <TFaxToolInterface::PrintBandContinue(long, unsigned char)+0xa0>
         bb1e4:	e2841090 	add	r1, r4, #144	; 0x90
         bb1e8:	e3a0e000 	mov	lr, #0	; 0x0
         bb1ec:	e5841150 	str	r1, [r4, #336]	; fField336
         bb1f0:	e5c4e158 	strb	lr, [r4, #344]	; fField344
         bb1f4:	e5c4e159 	strb	lr, [r4, #345]	; fField345
         bb1f8:	e1b01000 	movs	r1, r0
         bb1fc:	e284c014 	add	ip, r4, #20	; 0x14
         bb200:	e2847f52 	add	r7, r4, #328	; 0x148
         bb204:	e2840f59 	add	r0, r4, #356	; 0x164
         bb208:	e3a0501c 	mov	r5, #28	; 0x1c
         bb20c:	0a000019 	beq	bb278 <TFaxToolInterface::PrintBandContinue(long, unsigned char)+0xb0>
         bb210:	e1a0600c 	mov	r6, ip
         bb214:	e284cf6b 	add	ip, r4, #428	; 0x1ac
         bb218:	e3a01014 	mov	r1, #20	; 0x14
         bb21c:	e3a02000 	mov	r2, #0	; 0x0
         bb220:	e3a03000 	mov	r3, #0	; 0x0
         bb224:	e3a08002 	mov	r8, #2	; 0x2
         bb228:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         bb22c:	e1a0300e 	mov	r3, lr
         bb230:	e3a02001 	mov	r2, #1	; 0x1
         bb234:	e1a01008 	mov	r1, r8
         bb238:	e1a00005 	mov	r0, r5
         bb23c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         bb240:	e1a03007 	mov	r3, r7
         bb244:	e92d0008 	stmdb	sp!, {r3}
         bb248:	e1a00006 	mov	r0, r6
         bb24c:	e3a03000 	mov	r3, #0	; 0x0
         bb250:	e49c1008 	ldr	r1, [ip], #8	; fField8
         bb254:	e59c2000 	ldr	r2, [ip]
         bb258:	eb6c7ebb 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         bb25c:	e28dd024 	add	sp, sp, #36	; 0x24
         bb260:	e1b01000 	movs	r1, r0
         bb264:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         bb268:	e1a00004 	mov	r0, r4
         bb26c:	e5942000 	ldr	r2, [r4]
         bb270:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         bb274:	e282f044 	add	pc, r2, #68	; 0x44
         bb278:	e24dd004 	sub	sp, sp, #4	; 0x4
         bb27c:	e3a01014 	mov	r1, #20	; 0x14
         bb280:	e3a02000 	mov	r2, #0	; 0x0
         bb284:	e3a06002 	mov	r6, #2	; 0x2
         bb288:	e3a03000 	mov	r3, #0	; 0x0
         bb28c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         bb290:	e1a0300e 	mov	r3, lr
         bb294:	e1a01006 	mov	r1, r6
         bb298:	e1a00005 	mov	r0, r5
         bb29c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         bb2a0:	e1a03007 	mov	r3, r7
         bb2a4:	e92d0008 	stmdb	sp!, {r3}
         bb2a8:	e28d3024 	add	r3, sp, #36	; 0x24
         bb2ac:	e1a0000c 	mov	r0, ip
         bb2b0:	e3a02002 	mov	r2, #2	; 0x2
         bb2b4:	e3a01001 	mov	r1, #1	; 0x1
         bb2b8:	eb6c7ea3 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         bb2bc:	e28dd024 	add	sp, sp, #36	; 0x24
         bb2c0:	e1b01000 	movs	r1, r0
         bb2c4:	0594116c 	ldreq	r1, [r4, #364]	; fField364
         bb2c8:	e1a00004 	mov	r0, r4
         bb2cc:	e5942000 	ldr	r2, [r4]
         bb2d0:	e1a0e00f 	mov	lr, pc
         bb2d4:	e282f044 	add	pc, r2, #68	; 0x44
         bb2d8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

