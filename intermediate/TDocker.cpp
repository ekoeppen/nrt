#include "include/TDocker.h"

/**
 * Symbol: TDocker::ReadProtocolExtension(void)
 * Address: 000926cc
 */
TDocker::ReadProtocolExtension(void) {
    /*
         926cc:	e1a0c00d 	mov	ip, sp
         926d0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         926d4:	e24cb004 	sub	fp, ip, #4	; 0x4
         926d8:	e1a04000 	mov	r4, r0
         926dc:	e24dd004 	sub	sp, sp, #4	; 0x4
         926e0:	e1a0100d 	mov	r1, sp
         926e4:	e5900000 	ldr	r0, [r0]
         926e8:	eb6d4af7 	bl	1be52cc <CPipe::$__rs(unsigned long &)>
         926ec:	e24dd00c 	sub	sp, sp, #12	; 0xc
         926f0:	e3a00002 	mov	r0, #2	; 0x2
         926f4:	eb6cbe94 	bl	1bc214c <$AllocateRefHandle(long)>
         926f8:	e3a05002 	mov	r5, #2	; 0x2
         926fc:	e58d0008 	str	r0, [sp, #8]
         92700:	e1a00005 	mov	r0, r5
         92704:	eb6cbe90 	bl	1bc214c <$AllocateRefHandle(long)>
         92708:	e58d0000 	str	r0, [sp]
         9270c:	e1a0100d 	mov	r1, sp
         92710:	e1a00004 	mov	r0, r4
         92714:	eb689535 	bl	1ab7bf0 <TDocker::$ReadRef(RefVar const &)>
         92718:	e59d1008 	ldr	r1, [sp, #8]
         9271c:	e5810000 	str	r0, [r1]
         92720:	e59d0000 	ldr	r0, [sp]
         92724:	eb6cc2a4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         92728:	e1a00005 	mov	r0, r5
         9272c:	eb6cbe86 	bl	1bc214c <$AllocateRefHandle(long)>
         92730:	e58d0004 	str	r0, [sp, #4]	; fField4
         92734:	e28d1004 	add	r1, sp, #4	; 0x4
         92738:	e59d300c 	ldr	r3, [sp, #12]	; fField12
         9273c:	e28d2008 	add	r2, sp, #8	; 0x8
         92740:	e1a00004 	mov	r0, r4
         92744:	eb688cd7 	bl	1ab5aa8 <TDocker::$InstallProtocolExtension(RefVar const &, RefVar const &, unsigned long)>
         92748:	e5a40050 	str	r0, [r4, #80]!	; fField80
         9274c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         92750:	eb6cc299 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         92754:	e59d0008 	ldr	r0, [sp, #8]
         92758:	eb6cc297 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9275c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::ReadRemoveProtocolExtension(void)
 * Address: 00092760
 */
TDocker::ReadRemoveProtocolExtension(void) {
    /*
         92760:	e1a0c00d 	mov	ip, sp
         92764:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         92768:	e24cb004 	sub	fp, ip, #4	; 0x4
         9276c:	e1a04000 	mov	r4, r0
         92770:	e24dd008 	sub	sp, sp, #8	; 0x8
         92774:	e28d1004 	add	r1, sp, #4	; 0x4
         92778:	e5900000 	ldr	r0, [r0]
         9277c:	eb6d4ad2 	bl	1be52cc <CPipe::$__rs(unsigned long &)>
         92780:	e3a00002 	mov	r0, #2	; 0x2
         92784:	eb6cbe70 	bl	1bc214c <$AllocateRefHandle(long)>
         92788:	e58d0000 	str	r0, [sp]
         9278c:	e1a0100d 	mov	r1, sp
         92790:	e1a00004 	mov	r0, r4
         92794:	e59d2004 	ldr	r2, [sp, #4]	; fField4
         92798:	eb689936 	bl	1ab8c78 <TDocker::$RemoveProtocolExtension(RefVar const &, unsigned long)>
         9279c:	e5a40050 	str	r0, [r4, #80]!	; fField80
         927a0:	e59d0000 	ldr	r0, [sp]
         927a4:	eb6cc284 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         927a8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::CallConnectionApp(RefVar const &, RefVar const &)
 * Address: 000927ac
 */
TDocker::CallConnectionApp(RefVar const &, RefVar const &) {
    /*
         927ac:	e1a0c00d 	mov	ip, sp
         927b0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         927b4:	e24cb004 	sub	fp, ip, #4	; 0x4
         927b8:	e1a04000 	mov	r4, r0
         927bc:	e1a06001 	mov	r6, r1
         927c0:	e1a05002 	mov	r5, r2
         927c4:	e24dd004 	sub	sp, sp, #4	; 0x4
         927c8:	e59f0158 	ldr	r0, [pc, #158]	; 92928 <TDocker::CallConnectionApp(RefVar const &, RefVar const &)+0x17c>
         927cc:	eb6db612 	bl	1c0001c <$NSCallGlobalFn(RefVar const &)>
         927d0:	eb6cbe5d 	bl	1bc214c <$AllocateRefHandle(long)>
         927d4:	e58d0000 	str	r0, [sp]
         927d8:	e5900000 	ldr	r0, [r0]
         927dc:	e3a07fa5 	mov	r7, #660	; 0x294
         927e0:	e2477a07 	sub	r7, r7, #28672	; 0x7000
         927e4:	e59f8140 	ldr	r8, [pc, #140]	; 9292c <TDocker::CallConnectionApp(RefVar const &, RefVar const &)+0x180>	; fField140
         927e8:	e3300002 	teq	r0, #2	; 0x2
         927ec:	1a000003 	bne	92800 <TDocker::CallConnectionApp(RefVar const &, RefVar const &)+0x54>
         927f0:	e3a02000 	mov	r2, #0	; 0x0
         927f4:	e1a01007 	mov	r1, r7
         927f8:	e5980000 	ldr	r0, [r8]
         927fc:	eb6d4266 	bl	1be319c <$Throw>
         92800:	e24dd004 	sub	sp, sp, #4	; 0x4
         92804:	e59f1124 	ldr	r1, [pc, #124]	; 92930 <TDocker::CallConnectionApp(RefVar const &, RefVar const &)+0x184>	; fField124
         92808:	e28d0004 	add	r0, sp, #4	; 0x4
         9280c:	e3a03000 	mov	r3, #0	; 0x0
         92810:	e3a02000 	mov	r2, #0	; 0x0
         92814:	eb6cc696 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
         92818:	eb6cbe4b 	bl	1bc214c <$AllocateRefHandle(long)>
         9281c:	e58d0000 	str	r0, [sp]
         92820:	e5900000 	ldr	r0, [r0]
         92824:	e3300002 	teq	r0, #2	; 0x2
         92828:	1a000003 	bne	9283c <TDocker::CallConnectionApp(RefVar const &, RefVar const &)+0x90>
         9282c:	e3a02000 	mov	r2, #0	; 0x0
         92830:	e1a01007 	mov	r1, r7
         92834:	e5980000 	ldr	r0, [r8]
         92838:	eb6d4257 	bl	1be319c <$Throw>
         9283c:	e24dd004 	sub	sp, sp, #4	; 0x4
         92840:	e1a01006 	mov	r1, r6
         92844:	e28d0004 	add	r0, sp, #4	; 0x4
         92848:	e3a02000 	mov	r2, #0	; 0x0
         9284c:	eb6cc685 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         92850:	eb6cbe3d 	bl	1bc214c <$AllocateRefHandle(long)>
         92854:	e58d0000 	str	r0, [sp]
         92858:	e5900000 	ldr	r0, [r0]
         9285c:	e3300002 	teq	r0, #2	; 0x2
         92860:	1a000003 	bne	92874 <TDocker::CallConnectionApp(RefVar const &, RefVar const &)+0xc8>
         92864:	e3a02000 	mov	r2, #0	; 0x0
         92868:	e1a01007 	mov	r1, r7
         9286c:	e5980000 	ldr	r0, [r8]
         92870:	eb6d4249 	bl	1be319c <$Throw>
         92874:	e24dd004 	sub	sp, sp, #4	; 0x4
         92878:	e59f00b4 	ldr	r0, [pc, #b4]	; 92934 <TDocker::CallConnectionApp(RefVar const &, RefVar const &)+0x188>
         9287c:	e3a01002 	mov	r1, #2	; 0x2
         92880:	eb6cbe2c 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
         92884:	eb6cbe30 	bl	1bc214c <$AllocateRefHandle(long)>
         92888:	e58d0000 	str	r0, [sp]
         9288c:	e5940020 	ldr	r0, [r4, #32]	; fField32
         92890:	e5902000 	ldr	r2, [r0]
         92894:	e59d0000 	ldr	r0, [sp]
         92898:	e5900000 	ldr	r0, [r0]
         9289c:	e3a06000 	mov	r6, #0	; 0x0
         928a0:	e1a01006 	mov	r1, r6
         928a4:	eb6cceab 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         928a8:	e5950000 	ldr	r0, [r5]
         928ac:	e5902000 	ldr	r2, [r0]
         928b0:	e59d0000 	ldr	r0, [sp]
         928b4:	e5900000 	ldr	r0, [r0]
         928b8:	e3a05001 	mov	r5, #1	; 0x1
         928bc:	e1a01005 	mov	r1, r5
         928c0:	eb6ccea4 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         928c4:	e5c450b4 	strb	r5, [r4, #180]	; fField180
         928c8:	e1a0100d 	mov	r1, sp
         928cc:	e28d0004 	add	r0, sp, #4	; 0x4
         928d0:	eb6cc23e 	bl	1bc31d0 <$DoBlock__FRC6RefVarT1>
         928d4:	eb6cbe1c 	bl	1bc214c <$AllocateRefHandle(long)>
         928d8:	e1a05000 	mov	r5, r0
         928dc:	e5c460b4 	strb	r6, [r4, #180]	; fField180
         928e0:	e5b41050 	ldr	r1, [r4, #80]!	; fField80
         928e4:	e3310000 	teq	r1, #0	; 0x0
         928e8:	13a02000 	movne	r2, #0	; 0x0
         928ec:	15980000 	ldrne	r0, [r8]
         928f0:	1b6d4229 	blne	1be319c <$Throw>
         928f4:	e5954000 	ldr	r4, [r5]
         928f8:	e1a00005 	mov	r0, r5
         928fc:	eb6cc22e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         92900:	e59d0000 	ldr	r0, [sp]
         92904:	eb6cc22c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         92908:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         9290c:	eb6cc22a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         92910:	e59d0008 	ldr	r0, [sp, #8]
         92914:	eb6cc228 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         92918:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         9291c:	eb6cc226 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         92920:	e1a00004 	mov	r0, r4
         92924:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         92928:	00682fe8 	rsbeq	r2, r8, r8, ror #31
         9292c:	003712d0 	ldreqsb	r1, [r7], -r0
         92930:	006825b8 	streqh	r2, [r8], -#88	; fField88
         92934:	00681f10 	rsbeq	r1, r8, r0, lsl pc
    */
}

/**
 * Symbol: TDocker::DoDisplaySlip(void)
 * Address: 00092938
 */
TDocker::DoDisplaySlip(void) {
    /*
         92938:	e1a0c00d 	mov	ip, sp
         9293c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         92940:	e24cb004 	sub	fp, ip, #4	; 0x4
         92944:	e1a04000 	mov	r4, r0
         92948:	e24dd008 	sub	sp, sp, #8	; 0x8
         9294c:	e3a00002 	mov	r0, #2	; 0x2
         92950:	eb6cbdfd 	bl	1bc214c <$AllocateRefHandle(long)>
         92954:	e58d0000 	str	r0, [sp]
         92958:	e1a0100d 	mov	r1, sp
         9295c:	e1a00004 	mov	r0, r4
         92960:	eb6894a2 	bl	1ab7bf0 <TDocker::$ReadRef(RefVar const &)>
         92964:	eb6cbdf8 	bl	1bc214c <$AllocateRefHandle(long)>
         92968:	e58d0004 	str	r0, [sp, #4]	; fField4
         9296c:	e59d0000 	ldr	r0, [sp]
         92970:	eb6cc211 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         92974:	e28d2004 	add	r2, sp, #4	; 0x4
         92978:	e59f1070 	ldr	r1, [pc, #70]	; 929f0 <TDocker::DoDisplaySlip(void)+0xb8>
         9297c:	e1a00004 	mov	r0, r4
         92980:	eb685ef3 	bl	1aaa554 <TDocker::$CallConnectionApp(RefVar const &, RefVar const &)>
         92984:	eb6cbdf0 	bl	1bc214c <$AllocateRefHandle(long)>
         92988:	e1a05000 	mov	r5, r0
         9298c:	e1a00004 	mov	r0, r4
         92990:	e3a02000 	mov	r2, #0	; 0x0
         92994:	e59f1058 	ldr	r1, [pc, #58]	; 929f4 <TDocker::DoDisplaySlip(void)+0xbc>
         92998:	eb68a91a 	bl	1abce08 <TEzPipeProtocol::$WriteDockerHeader(unsigned long, unsigned char)>
         9299c:	e5950000 	ldr	r0, [r5]
         929a0:	e3100003 	tst	r0, #3	; 0x3
         929a4:	01a00140 	moveq	r0, r0, asr #2
         929a8:	0a000000 	beq	929b0 <TDocker::DoDisplaySlip(void)+0x78>
         929ac:	eb6cbdda 	bl	1bc211c <$_RINTError(long)>
         929b0:	e1a06000 	mov	r6, r0
         929b4:	e3a01004 	mov	r1, #4	; 0x4
         929b8:	e5940000 	ldr	r0, [r4]
         929bc:	eb6d4a3b 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         929c0:	e1a01006 	mov	r1, r6
         929c4:	e5940000 	ldr	r0, [r4]
         929c8:	eb6d4a38 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         929cc:	e5940000 	ldr	r0, [r4]
         929d0:	e5901000 	ldr	r1, [r0]
         929d4:	e1a0e00f 	mov	lr, pc
         929d8:	e281f020 	add	pc, r1, #32	; 0x20
         929dc:	e1a00005 	mov	r0, r5
         929e0:	eb6cc1f5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         929e4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         929e8:	eb6cc1f3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         929ec:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         929f0:	006829d8 	ldreqd	r2, [r8], -#152	; fField152
         929f4:	736c7273 	cmnvc	ip, #805306375	; 0x30000007
    */
}

/**
 * Symbol: TDocker::DoImportParametersSlip(void)
 * Address: 000929f8
 */
TDocker::DoImportParametersSlip(void) {
    /*
         929f8:	e1a0c00d 	mov	ip, sp
         929fc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         92a00:	e24cb004 	sub	fp, ip, #4	; 0x4
         92a04:	e1a04000 	mov	r4, r0
         92a08:	e24dd008 	sub	sp, sp, #8	; 0x8
         92a0c:	e3a00002 	mov	r0, #2	; 0x2
         92a10:	eb6cbdcd 	bl	1bc214c <$AllocateRefHandle(long)>
         92a14:	e58d0000 	str	r0, [sp]
         92a18:	e1a0100d 	mov	r1, sp
         92a1c:	e1a00004 	mov	r0, r4
         92a20:	eb689472 	bl	1ab7bf0 <TDocker::$ReadRef(RefVar const &)>
         92a24:	eb6cbdc8 	bl	1bc214c <$AllocateRefHandle(long)>
         92a28:	e58d0004 	str	r0, [sp, #4]	; fField4
         92a2c:	e59d0000 	ldr	r0, [sp]
         92a30:	eb6cc1e1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         92a34:	e1a00004 	mov	r0, r4
         92a38:	eb68b9af 	bl	1ac10fc <TDocker::$GetTDockerLock(void)>
         92a3c:	e1a05000 	mov	r5, r0
         92a40:	e1a00004 	mov	r0, r4
         92a44:	eb68a4d6 	bl	1abbda4 <TDocker::$UnlockTDocker(void)>
         92a48:	e24dd004 	sub	sp, sp, #4	; 0x4
         92a4c:	e28d2008 	add	r2, sp, #8	; 0x8
         92a50:	e59f1040 	ldr	r1, [pc, #40]	; 92a98 <TDocker::DoImportParametersSlip(void)+0xa0>	; fField40
         92a54:	e1a00004 	mov	r0, r4
         92a58:	eb685ebd 	bl	1aaa554 <TDocker::$CallConnectionApp(RefVar const &, RefVar const &)>
         92a5c:	eb6cbdba 	bl	1bc214c <$AllocateRefHandle(long)>
         92a60:	e3350000 	teq	r5, #0	; 0x0
         92a64:	e58d0000 	str	r0, [sp]
         92a68:	11a00004 	movne	r0, r4
         92a6c:	1b68a4da 	blne	1abbddc <TDocker::$WaitAndLockTDocker(void)>
         92a70:	e1a0200d 	mov	r2, sp
         92a74:	e1a00004 	mov	r0, r4
         92a78:	e59f101c 	ldr	r1, [pc, #1c]	; 92a9c <TDocker::DoImportParametersSlip(void)+0xa4>
         92a7c:	eb68a8e9 	bl	1abce28 <TDocker::$WriteRef(unsigned long, RefVar const &)>
         92a80:	e59d0000 	ldr	r0, [sp]
         92a84:	eb6cc1cc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         92a88:	e28dd004 	add	sp, sp, #4	; 0x4
         92a8c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         92a90:	eb6cc1c9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         92a94:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         92a98:	006829c8 	rsbeq	r2, r8, r8, asr #19
         92a9c:	69736c72 	ldmvsdb	r3!, {r1, r4, r5, r6, sl, fp, sp, lr}^
    */
}

/**
 * Symbol: TDocker::DoGetPassword(void)
 * Address: 00092aa0
 */
TDocker::DoGetPassword(void) {
    /*
         92aa0:	e1a0c00d 	mov	ip, sp
         92aa4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         92aa8:	e24cb004 	sub	fp, ip, #4	; 0x4
         92aac:	e1a04000 	mov	r4, r0
         92ab0:	e24dd00c 	sub	sp, sp, #12	; 0xc
         92ab4:	e3a00002 	mov	r0, #2	; 0x2
         92ab8:	eb6cbda3 	bl	1bc214c <$AllocateRefHandle(long)>
         92abc:	e58d0000 	str	r0, [sp]
         92ac0:	e1a0100d 	mov	r1, sp
         92ac4:	e1a00004 	mov	r0, r4
         92ac8:	eb689448 	bl	1ab7bf0 <TDocker::$ReadRef(RefVar const &)>
         92acc:	eb6cbd9e 	bl	1bc214c <$AllocateRefHandle(long)>
         92ad0:	e58d0008 	str	r0, [sp, #8]
         92ad4:	e59d0000 	ldr	r0, [sp]
         92ad8:	eb6cc1b7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         92adc:	e28d2008 	add	r2, sp, #8	; 0x8
         92ae0:	e59f102c 	ldr	r1, [pc, #2c]	; 92b14 <TDocker::DoGetPassword(void)+0x74>
         92ae4:	e1a00004 	mov	r0, r4
         92ae8:	eb685e99 	bl	1aaa554 <TDocker::$CallConnectionApp(RefVar const &, RefVar const &)>
         92aec:	eb6cbd96 	bl	1bc214c <$AllocateRefHandle(long)>
         92af0:	e58d0004 	str	r0, [sp, #4]	; fField4
         92af4:	e28d1004 	add	r1, sp, #4	; 0x4
         92af8:	e1a00004 	mov	r0, r4
         92afc:	eb68a8c7 	bl	1abce20 <TDocker::$WritePassword(RefVar const &)>
         92b00:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         92b04:	eb6cc1ac 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         92b08:	e59d0008 	ldr	r0, [sp, #8]
         92b0c:	eb6cc1aa 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         92b10:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         92b14:	00682fd8 	ldreqd	r2, [r8], -#248
    */
}

/**
 * Symbol: TDocker::DoRestorePackage(void)
 * Address: 00092b18
 */
TDocker::DoRestorePackage(void) {
    /*
         92b18:	e1a0c00d 	mov	ip, sp
         92b1c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         92b20:	e24cb004 	sub	fp, ip, #4	; 0x4
         92b24:	e1a04000 	mov	r4, r0
         92b28:	e2800010 	add	r0, r0, #16	; 0x10
         92b2c:	e1a05000 	mov	r5, r0
         92b30:	e5900000 	ldr	r0, [r0]
         92b34:	e5901000 	ldr	r1, [r0]
         92b38:	e2840014 	add	r0, r4, #20	; 0x14
         92b3c:	e3310002 	teq	r1, #2	; 0x2
         92b40:	0a000007 	beq	92b64 <TDocker::DoRestorePackage(void)+0x4c>
         92b44:	e1a06000 	mov	r6, r0
         92b48:	e1a00005 	mov	r0, r5
         92b4c:	e59f100c 	ldr	r1, [pc, #c]	; 92b60 <TDocker::DoRestorePackage(void)+0x48>
         92b50:	eb6cd227 	bl	1bc73f4 <$StoreGetSoup>
         92b54:	e5961000 	ldr	r1, [r6]
         92b58:	e5810000 	str	r0, [r1]
         92b5c:	ea000003 	b	92b70 <TDocker::DoRestorePackage(void)+0x58>
         92b60:	00681580 	rsbeq	r1, r8, r0, lsl #11
         92b64:	e3a01002 	mov	r1, #2	; 0x2
         92b68:	e5900000 	ldr	r0, [r0]
         92b6c:	e5801000 	str	r1, [r0]
         92b70:	e24dd004 	sub	sp, sp, #4	; 0x4
         92b74:	e1a01005 	mov	r1, r5
         92b78:	e1a00004 	mov	r0, r4
         92b7c:	eb68941b 	bl	1ab7bf0 <TDocker::$ReadRef(RefVar const &)>
         92b80:	eb6cbd71 	bl	1bc214c <$AllocateRefHandle(long)>
         92b84:	e1a02005 	mov	r2, r5
         92b88:	e58d0000 	str	r0, [sp]
         92b8c:	e1a0100d 	mov	r1, sp
         92b90:	e59f0028 	ldr	r0, [pc, #28]	; 92bc0 <TDocker::DoRestorePackage(void)+0xa8>	; fField28
         92b94:	eb6db522 	bl	1c00024 <$NSCallGlobalFn__FRC6RefVarN21>
         92b98:	e1a00004 	mov	r0, r4
         92b9c:	e3a01000 	mov	r1, #0	; 0x0
         92ba0:	eb68a8a1 	bl	1abce2c <TDocker::$WriteResult(long)>
         92ba4:	e59f1018 	ldr	r1, [pc, #18]	; 92bc4 <TDocker::DoRestorePackage(void)+0xac>
         92ba8:	e1a00004 	mov	r0, r4
         92bac:	e3a02001 	mov	r2, #1	; 0x1
         92bb0:	eb685618 	bl	1aa8418 <TDocker::$AddChangedSoup(RefVar const &, unsigned long)>
         92bb4:	e59d0000 	ldr	r0, [sp]
         92bb8:	eb6cc17f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         92bbc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         92bc0:	00684328 	rsbeq	r4, r8, r8, lsr #6
         92bc4:	00682388 	rsbeq	r2, r8, r8, lsl #7
    */
}

/**
 * Symbol: TDocker::DoRestorePatch(void)
 * Address: 00092bc8
 */
TDocker::DoRestorePatch(void) {
    /*
         92bc8:	e1a0c00d 	mov	ip, sp
         92bcc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         92bd0:	e24cb004 	sub	fp, ip, #4	; 0x4
         92bd4:	e1a04000 	mov	r4, r0
         92bd8:	e5900000 	ldr	r0, [r0]
         92bdc:	eb692cac 	bl	1adde94 <$RestorePatchFromPipe(CPipe *)>
         92be0:	e1a00004 	mov	r0, r4
         92be4:	e3a01000 	mov	r1, #0	; 0x0
         92be8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         92bec:	ea68a88e 	b	1abce2c <TDocker::$WriteResult(long)>
    */
}

/**
 * Symbol: TDocker::DoRemovePackage(void)
 * Address: 00092bf0
 */
TDocker::DoRemovePackage(void) {
    /*
         92bf0:	e1a0c00d 	mov	ip, sp
         92bf4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         92bf8:	e24cb004 	sub	fp, ip, #4	; 0x4
         92bfc:	e1a04000 	mov	r4, r0
         92c00:	e24dd008 	sub	sp, sp, #8	; 0x8
         92c04:	e2801010 	add	r1, r0, #16	; 0x10
         92c08:	e1a05001 	mov	r5, r1
         92c0c:	eb6893f7 	bl	1ab7bf0 <TDocker::$ReadRef(RefVar const &)>
         92c10:	eb6cbd4d 	bl	1bc214c <$AllocateRefHandle(long)>
         92c14:	e1a02005 	mov	r2, r5
         92c18:	e58d0004 	str	r0, [sp, #4]	; fField4
         92c1c:	e28d1004 	add	r1, sp, #4	; 0x4
         92c20:	e59f004c 	ldr	r0, [pc, #4c]	; 92c74 <TDocker::DoRemovePackage(void)+0x84>	; fField4
         92c24:	eb6db4fe 	bl	1c00024 <$NSCallGlobalFn__FRC6RefVarN21>
         92c28:	eb6cbd47 	bl	1bc214c <$AllocateRefHandle(long)>
         92c2c:	e58d0000 	str	r0, [sp]
         92c30:	e5900000 	ldr	r0, [r0]
         92c34:	e3300002 	teq	r0, #2	; 0x2
         92c38:	11a0100d 	movne	r1, sp
         92c3c:	159f0034 	ldrne	r0, [pc, #34]	; 92c78 <TDocker::DoRemovePackage(void)+0x88>
         92c40:	1b6db4f6 	blne	1c00020 <$NSCallGlobalFn__FRC6RefVarT1>
         92c44:	e1a00004 	mov	r0, r4
         92c48:	e3a01000 	mov	r1, #0	; 0x0
         92c4c:	eb68a876 	bl	1abce2c <TDocker::$WriteResult(long)>
         92c50:	e59f1024 	ldr	r1, [pc, #24]	; 92c7c <TDocker::DoRemovePackage(void)+0x8c>	; fField24
         92c54:	e1a00004 	mov	r0, r4
         92c58:	e3a02001 	mov	r2, #1	; 0x1
         92c5c:	eb6855ed 	bl	1aa8418 <TDocker::$AddChangedSoup(RefVar const &, unsigned long)>
         92c60:	e59d0000 	ldr	r0, [sp]
         92c64:	eb6cc154 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         92c68:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         92c6c:	eb6cc152 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         92c70:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         92c74:	00682fd0 	ldreqd	r2, [r8], -#240
         92c78:	006842a0 	rsbeq	r4, r8, r0, lsr #5
         92c7c:	00682388 	rsbeq	r2, r8, r8, lsl #7
    */
}

/**
 * Symbol: TDocker::SetWhichIcons(void)
 * Address: 00092c80
 */
TDocker::SetWhichIcons(void) {
    /*
         92c80:	e1a0c00d 	mov	ip, sp
         92c84:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         92c88:	e24cb004 	sub	fp, ip, #4	; 0x4
         92c8c:	e1a04000 	mov	r4, r0
         92c90:	e24dd008 	sub	sp, sp, #8	; 0x8
         92c94:	e28d1004 	add	r1, sp, #4	; 0x4
         92c98:	e5900000 	ldr	r0, [r0]
         92c9c:	eb6d498a 	bl	1be52cc <CPipe::$__rs(unsigned long &)>
         92ca0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         92ca4:	e1a00100 	mov	r0, r0, lsl #2
         92ca8:	eb6cbd27 	bl	1bc214c <$AllocateRefHandle(long)>
         92cac:	e58d0000 	str	r0, [sp]
         92cb0:	e1a0200d 	mov	r2, sp
         92cb4:	e2840020 	add	r0, r4, #32	; 0x20
         92cb8:	e59f1018 	ldr	r1, [pc, #18]	; 92cd8 <TDocker::SetWhichIcons(void)+0x58>
         92cbc:	eb6ccda9 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         92cc0:	e59d0000 	ldr	r0, [sp]
         92cc4:	eb6cc13c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         92cc8:	e1a00004 	mov	r0, r4
         92ccc:	e3a01000 	mov	r1, #0	; 0x0
         92cd0:	eb68a855 	bl	1abce2c <TDocker::$WriteResult(long)>
         92cd4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         92cd8:	006851a0 	rsbeq	r5, r8, r0, lsr #3
    */
}

/**
 * Symbol: TDocker::CallFunction(unsigned char)
 * Address: 00092cf8
 */
TDocker::CallFunction(unsigned char) {
    /*
         92cf8:	e1a0c00d 	mov	ip, sp
         92cfc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         92d00:	e24cb004 	sub	fp, ip, #4	; 0x4
         92d04:	e1a04000 	mov	r4, r0
         92d08:	e20170ff 	and	r7, r1, #255	; 0xff
         92d0c:	e24dd00c 	sub	sp, sp, #12	; 0xc
         92d10:	e2801010 	add	r1, r0, #16	; 0x10
         92d14:	e1a06001 	mov	r6, r1
         92d18:	eb6893b4 	bl	1ab7bf0 <TDocker::$ReadRef(RefVar const &)>
         92d1c:	eb6cbd0a 	bl	1bc214c <$AllocateRefHandle(long)>
         92d20:	e1a05000 	mov	r5, r0
         92d24:	e3a00002 	mov	r0, #2	; 0x2
         92d28:	eb6cbd07 	bl	1bc214c <$AllocateRefHandle(long)>
         92d2c:	e58d0008 	str	r0, [sp, #8]
         92d30:	e3a00002 	mov	r0, #2	; 0x2
         92d34:	eb6cbd04 	bl	1bc214c <$AllocateRefHandle(long)>
         92d38:	e58d0004 	str	r0, [sp, #4]	; fField4
         92d3c:	e3a00002 	mov	r0, #2	; 0x2
         92d40:	eb6cbd01 	bl	1bc214c <$AllocateRefHandle(long)>
         92d44:	e58d0000 	str	r0, [sp]
         92d48:	e5950000 	ldr	r0, [r5]
         92d4c:	eb6cc954 	bl	1bc52a4 <$IsSymbol(long)>
         92d50:	e3300000 	teq	r0, #0	; 0x0
         92d54:	0a000006 	beq	92d74 <TDocker::CallFunction(unsigned char)+0x7c>
         92d58:	e5950000 	ldr	r0, [r5]
         92d5c:	e59d1008 	ldr	r1, [sp, #8]
         92d60:	e5810000 	str	r0, [r1]
         92d64:	e1a01006 	mov	r1, r6
         92d68:	e1a00004 	mov	r0, r4
         92d6c:	eb68939f 	bl	1ab7bf0 <TDocker::$ReadRef(RefVar const &)>
         92d70:	ea00000b 	b	92da4 <TDocker::CallFunction(unsigned char)+0xac>
         92d74:	e59f0054 	ldr	r0, [pc, #54]	; 92dd0 <TDocker::CallFunction(unsigned char)+0xd8>
         92d78:	e5900000 	ldr	r0, [r0]
         92d7c:	e5901000 	ldr	r1, [r0]
         92d80:	e5950000 	ldr	r0, [r5]
         92d84:	eb6cc535 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         92d88:	e59d1008 	ldr	r1, [sp, #8]
         92d8c:	e5810000 	str	r0, [r1]
         92d90:	e59f003c 	ldr	r0, [pc, #3c]	; 92dd4 <TDocker::CallFunction(unsigned char)+0xdc>
         92d94:	e5900000 	ldr	r0, [r0]
         92d98:	e5901000 	ldr	r1, [r0]
         92d9c:	e5950000 	ldr	r0, [r5]
         92da0:	eb6cc52e 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         92da4:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         92da8:	e5810000 	str	r0, [r1]
         92dac:	e24dd004 	sub	sp, sp, #4	; 0x4
         92db0:	e3370000 	teq	r7, #0	; 0x0
         92db4:	0a000007 	beq	92dd8 <TDocker::CallFunction(unsigned char)+0xe0>
         92db8:	e28d1008 	add	r1, sp, #8	; 0x8
         92dbc:	e28d000c 	add	r0, sp, #12	; 0xc
         92dc0:	eb6db49c 	bl	1c00038 <$NSCallGlobalFnWithArgArray__FRC6RefVarT1>
         92dc4:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         92dc8:	e5810000 	str	r0, [r1]
         92dcc:	ea00000d 	b	92e08 <TDocker::CallFunction(unsigned char)+0x110>
         92dd0:	00682f28 	rsbeq	r2, r8, r8, lsr #30
         92dd4:	00681ef8 	streqd	r1, [r8], -#232
         92dd8:	e59f005c 	ldr	r0, [pc, #5c]	; 92e3c <TDocker::CallFunction(unsigned char)+0x144>
         92ddc:	eb6db48e 	bl	1c0001c <$NSCallGlobalFn(RefVar const &)>
         92de0:	eb6cbcd9 	bl	1bc214c <$AllocateRefHandle(long)>
         92de4:	e58d0000 	str	r0, [sp]
         92de8:	e1a0000d 	mov	r0, sp
         92dec:	e28d2008 	add	r2, sp, #8	; 0x8
         92df0:	e28d100c 	add	r1, sp, #12	; 0xc
         92df4:	eb6cc0f6 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
         92df8:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         92dfc:	e5810000 	str	r0, [r1]
         92e00:	e59d0000 	ldr	r0, [sp]
         92e04:	eb6cc0ec 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         92e08:	e28d2004 	add	r2, sp, #4	; 0x4
         92e0c:	e1a00004 	mov	r0, r4
         92e10:	e59f1028 	ldr	r1, [pc, #28]	; 92e40 <TDocker::CallFunction(unsigned char)+0x148>	; fField28
         92e14:	eb68a803 	bl	1abce28 <TDocker::$WriteRef(unsigned long, RefVar const &)>
         92e18:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
         92e1c:	eb6cc0e6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         92e20:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         92e24:	eb6cc0e4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         92e28:	e59d0008 	ldr	r0, [sp, #8]
         92e2c:	eb6cc0e2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         92e30:	e1a00005 	mov	r0, r5
         92e34:	eb6cc0e0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         92e38:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         92e3c:	00682fe8 	rsbeq	r2, r8, r8, ror #31
         92e40:	63726573 	cmnvs	r2, #482344960	; 0x1cc00000
    */
}

/**
 * Symbol: TDocker::RemoteQuery(void)
 * Address: 00092e44
 */
TDocker::RemoteQuery(void) {
    /*
         92e44:	e1a0c00d 	mov	ip, sp
         92e48:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         92e4c:	e24cb004 	sub	fp, ip, #4	; 0x4
         92e50:	e1a04000 	mov	r4, r0
         92e54:	e24dd008 	sub	sp, sp, #8	; 0x8
         92e58:	e2801010 	add	r1, r0, #16	; 0x10
         92e5c:	e1a08001 	mov	r8, r1
         92e60:	eb689362 	bl	1ab7bf0 <TDocker::$ReadRef(RefVar const &)>
         92e64:	eb6cbcb8 	bl	1bc214c <$AllocateRefHandle(long)>
         92e68:	e1a05000 	mov	r5, r0
         92e6c:	e59f00a0 	ldr	r0, [pc, #a0]	; 92f14 <TDocker::RemoteQuery(void)+0xd0>
         92e70:	e5900000 	ldr	r0, [r0]
         92e74:	e5901000 	ldr	r1, [r0]
         92e78:	e5950000 	ldr	r0, [r5]
         92e7c:	eb6cc4f7 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         92e80:	eb6cbcb1 	bl	1bc214c <$AllocateRefHandle(long)>
         92e84:	e58d0004 	str	r0, [sp, #4]	; fField4
         92e88:	e59f0088 	ldr	r0, [pc, #88]	; 92f18 <TDocker::RemoteQuery(void)+0xd4>	; fField88
         92e8c:	e5900000 	ldr	r0, [r0]
         92e90:	e5901000 	ldr	r1, [r0]
         92e94:	e5950000 	ldr	r0, [r5]
         92e98:	eb6cc4f0 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         92e9c:	eb6cbcaa 	bl	1bc214c <$AllocateRefHandle(long)>
         92ea0:	e58d0000 	str	r0, [sp]
         92ea4:	e5900000 	ldr	r0, [r0]
         92ea8:	e2846014 	add	r6, r4, #20	; 0x14
         92eac:	e3300002 	teq	r0, #2	; 0x2
         92eb0:	0a00001d 	beq	92f2c <TDocker::RemoteQuery(void)+0xe8>
         92eb4:	e1a0000d 	mov	r0, sp
         92eb8:	eb6cc8f7 	bl	1bc529c <$IsString(RefVar const &)>
         92ebc:	e3300000 	teq	r0, #0	; 0x0
         92ec0:	0a000019 	beq	92f2c <TDocker::RemoteQuery(void)+0xe8>
         92ec4:	e1a0000d 	mov	r0, sp
         92ec8:	eb6cc0ad 	bl	1bc3184 <$GetCString(RefVar const &)>
         92ecc:	eb6d6e23 	bl	1bee760 <$Ustrlen>
         92ed0:	e3500000 	cmp	r0, #0	; 0x0
         92ed4:	9a000014 	bls	92f2c <TDocker::RemoteQuery(void)+0xe8>
         92ed8:	e1a07006 	mov	r7, r6
         92edc:	e1a00008 	mov	r0, r8
         92ee0:	e1a0100d 	mov	r1, sp
         92ee4:	eb6cd142 	bl	1bc73f4 <$StoreGetSoup>
         92ee8:	e5971000 	ldr	r1, [r7]
         92eec:	e5810000 	str	r0, [r1]
         92ef0:	e5960000 	ldr	r0, [r6]
         92ef4:	e5900000 	ldr	r0, [r0]
         92ef8:	e3300002 	teq	r0, #2	; 0x2
         92efc:	e1a00004 	mov	r0, r4
         92f00:	1a000008 	bne	92f28 <TDocker::RemoteQuery(void)+0xe4>
         92f04:	e3a01091 	mov	r1, #145	; 0x91
         92f08:	e2411c6e 	sub	r1, r1, #28160	; 0x6e00
         92f0c:	eb68a7c6 	bl	1abce2c <TDocker::$WriteResult(long)>
         92f10:	ea000020 	b	92f98 <TDocker::RemoteQuery(void)+0x154>
         92f14:	006840c0 	rsbeq	r4, r8, r0, asr #1
         92f18:	00684788 	rsbeq	r4, r8, r8, lsl #15
         92f1c:	e1a00005 	mov	r0, r5
         92f20:	eb6cc0a5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         92f24:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         92f28:	eb683c93 	bl	1aa217c <TDocker::$SetupSoup(void)>
         92f2c:	e1a00004 	mov	r0, r4
         92f30:	eb6848ec 	bl	1aa52e8 <TDocker::$VerifySoup(void)>
         92f34:	e24dd004 	sub	sp, sp, #4	; 0x4
         92f38:	e1a00006 	mov	r0, r6
         92f3c:	e28d1008 	add	r1, sp, #8	; 0x8
         92f40:	eb0ab219 	bl	33f7ac <SoupQuery__FRC6RefVarT1>
         92f44:	eb6cbc80 	bl	1bc214c <$AllocateRefHandle(long)>
         92f48:	e58d0000 	str	r0, [sp]
         92f4c:	e5940054 	ldr	r0, [r4, #84]	; fField84
         92f50:	e3300000 	teq	r0, #0	; 0x0
         92f54:	1a000005 	bne	92f70 <TDocker::RemoteQuery(void)+0x12c>
         92f58:	e3a00000 	mov	r0, #0	; 0x0
         92f5c:	eb68a7ba 	bl	1abce4c <TCursorArray::$__ct(void)>
         92f60:	e5840054 	str	r0, [r4, #84]	; fField84
         92f64:	e3300000 	teq	r0, #0	; 0x0
         92f68:	01a00004 	moveq	r0, r4
         92f6c:	0b68bc75 	bleq	1ac2148 <TDocker::$OutOfMemory(void)>
         92f70:	e1a0100d 	mov	r1, sp
         92f74:	e5940054 	ldr	r0, [r4, #84]	; fField84
         92f78:	eb68553a 	bl	1aa8468 <TCursorArray::$Add(RefVar const &)>
         92f7c:	e1a02000 	mov	r2, r0
         92f80:	e1a00004 	mov	r0, r4
         92f84:	e59f1020 	ldr	r1, [pc, #20]	; 92fac <TDocker::RemoteQuery(void)+0x168>	; fField20
         92f88:	eb68a7a2 	bl	1abce18 <TDocker::$WriteLong(unsigned long, unsigned long)>
         92f8c:	e59d0000 	ldr	r0, [sp]
         92f90:	eb6cc089 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         92f94:	e28dd004 	add	sp, sp, #4	; 0x4
         92f98:	e59d0000 	ldr	r0, [sp]
         92f9c:	eb6cc086 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         92fa0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         92fa4:	eb6cc084 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         92fa8:	eaffffdb 	b	92f1c <TDocker::RemoteQuery(void)+0xd8>
         92fac:	6c647461 	stcvsl	4, cr7, [r4], -#388
    */
}

/**
 * Symbol: TDocker::RemoteGetCursor(void)
 * Address: 00092fb0
 */
TDocker::RemoteGetCursor(void) {
    /*
         92fb0:	e1a0c00d 	mov	ip, sp
         92fb4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         92fb8:	e24cb004 	sub	fp, ip, #4	; 0x4
         92fbc:	e1a04000 	mov	r4, r0
         92fc0:	e24dd004 	sub	sp, sp, #4	; 0x4
         92fc4:	e1a0100d 	mov	r1, sp
         92fc8:	e5900000 	ldr	r0, [r0]
         92fcc:	eb6d48be 	bl	1be52cc <CPipe::$__rs(unsigned long &)>
         92fd0:	e5940054 	ldr	r0, [r4, #84]	; fField84
         92fd4:	e59f6060 	ldr	r6, [pc, #60]	; 9303c <TDocker::RemoteGetCursor(void)+0x8c>	; fField60
         92fd8:	e3a05086 	mov	r5, #134	; 0x86
         92fdc:	e2455c6e 	sub	r5, r5, #28160	; 0x6e00
         92fe0:	e3300000 	teq	r0, #0	; 0x0
         92fe4:	1a000003 	bne	92ff8 <TDocker::RemoteGetCursor(void)+0x48>
         92fe8:	e3a02000 	mov	r2, #0	; 0x0
         92fec:	e1a01005 	mov	r1, r5
         92ff0:	e5960000 	ldr	r0, [r6]
         92ff4:	eb6d4068 	bl	1be319c <$Throw>
         92ff8:	e5b40054 	ldr	r0, [r4, #84]!	; fField84
         92ffc:	e59d1000 	ldr	r1, [sp]
         93000:	eb68bc40 	bl	1ac2108 <TCursorArray::$Get(unsigned long)>
         93004:	eb6cbc50 	bl	1bc214c <$AllocateRefHandle(long)>
         93008:	e1a04000 	mov	r4, r0
         9300c:	e5900000 	ldr	r0, [r0]
         93010:	e3300002 	teq	r0, #2	; 0x2
         93014:	1a000003 	bne	93028 <TDocker::RemoteGetCursor(void)+0x78>
         93018:	e3a02000 	mov	r2, #0	; 0x0
         9301c:	e1a01005 	mov	r1, r5
         93020:	e5960000 	ldr	r0, [r6]
         93024:	eb6d405c 	bl	1be319c <$Throw>
         93028:	e5945000 	ldr	r5, [r4]
         9302c:	e1a00004 	mov	r0, r4
         93030:	eb6cc061 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         93034:	e1a00005 	mov	r0, r5
         93038:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         9303c:	003712d0 	ldreqsb	r1, [r7], -r0
    */
}

/**
 * Symbol: TDocker::RemoteCursorGotoKey(void)
 * Address: 00093040
 */
TDocker::RemoteCursorGotoKey(void) {
    /*
         93040:	e1a0c00d 	mov	ip, sp
         93044:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         93048:	e24cb004 	sub	fp, ip, #4	; 0x4
         9304c:	e1a04000 	mov	r4, r0
         93050:	e24dd00c 	sub	sp, sp, #12	; 0xc
         93054:	eb6896fd 	bl	1ab8c50 <TDocker::$RemoteGetCursor(void)>
         93058:	eb6cbc3b 	bl	1bc214c <$AllocateRefHandle(long)>
         9305c:	e2841010 	add	r1, r4, #16	; 0x10
         93060:	e58d0004 	str	r0, [sp, #4]	; fField4
         93064:	e1a00004 	mov	r0, r4
         93068:	eb6892e0 	bl	1ab7bf0 <TDocker::$ReadRef(RefVar const &)>
         9306c:	eb6cbc36 	bl	1bc214c <$AllocateRefHandle(long)>
         93070:	e58d0000 	str	r0, [sp]
         93074:	e1a0100d 	mov	r1, sp
         93078:	e28d0004 	add	r0, sp, #4	; 0x4
         9307c:	eb6cc044 	bl	1bc3194 <$CursorGotoKey__FRC6RefVarT1>
         93080:	eb6cbc31 	bl	1bc214c <$AllocateRefHandle(long)>
         93084:	e58d0008 	str	r0, [sp, #8]
         93088:	e28d2008 	add	r2, sp, #8	; 0x8
         9308c:	e1a00004 	mov	r0, r4
         93090:	e59f101c 	ldr	r1, [pc, #1c]	; 930b4 <TDocker::RemoteCursorGotoKey(void)+0x74>
         93094:	eb68a75c 	bl	1abce0c <TDocker::$WriteEntry(unsigned long, RefVar const &)>
         93098:	e59d0000 	ldr	r0, [sp]
         9309c:	eb6cc046 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         930a0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         930a4:	eb6cc044 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         930a8:	e59d0008 	ldr	r0, [sp, #8]
         930ac:	eb6cc042 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         930b0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         930b4:	656e7472 	strvsb	r7, [lr, -#1138]!
    */
}

/**
 * Symbol: TDocker::RemoteCursorMap(void)
 * Address: 000930b8
 */
TDocker::RemoteCursorMap(void) {
    /*
         930b8:	e1a0c00d 	mov	ip, sp
         930bc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         930c0:	e24cb004 	sub	fp, ip, #4	; 0x4
         930c4:	e1a04000 	mov	r4, r0
         930c8:	e24dd00c 	sub	sp, sp, #12	; 0xc
         930cc:	eb6896df 	bl	1ab8c50 <TDocker::$RemoteGetCursor(void)>
         930d0:	eb6cbc1d 	bl	1bc214c <$AllocateRefHandle(long)>
         930d4:	e2841010 	add	r1, r4, #16	; 0x10
         930d8:	e58d0008 	str	r0, [sp, #8]
         930dc:	e1a00004 	mov	r0, r4
         930e0:	eb6892c2 	bl	1ab7bf0 <TDocker::$ReadRef(RefVar const &)>
         930e4:	eb6cbc18 	bl	1bc214c <$AllocateRefHandle(long)>
         930e8:	e58d0004 	str	r0, [sp, #4]	; fField4
         930ec:	e28d2004 	add	r2, sp, #4	; 0x4
         930f0:	e28d1008 	add	r1, sp, #8	; 0x8
         930f4:	e59f0034 	ldr	r0, [pc, #34]	; 93130 <TDocker::RemoteCursorMap(void)+0x78>
         930f8:	eb6db3c9 	bl	1c00024 <$NSCallGlobalFn__FRC6RefVarN21>
         930fc:	eb6cbc12 	bl	1bc214c <$AllocateRefHandle(long)>
         93100:	e58d0000 	str	r0, [sp]
         93104:	e1a0200d 	mov	r2, sp
         93108:	e1a00004 	mov	r0, r4
         9310c:	e59f1020 	ldr	r1, [pc, #20]	; 93134 <TDocker::RemoteCursorMap(void)+0x7c>	; fField20
         93110:	eb68a744 	bl	1abce28 <TDocker::$WriteRef(unsigned long, RefVar const &)>
         93114:	e59d0000 	ldr	r0, [sp]
         93118:	eb6cc027 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9311c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         93120:	eb6cc025 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         93124:	e59d0008 	ldr	r0, [sp, #8]
         93128:	eb6cc023 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9312c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         93130:	00683748 	rsbeq	r3, r8, r8, asr #14
         93134:	72656620 	rsbvc	r6, r5, #33554432	; 0x2000000
    */
}

/**
 * Symbol: TDocker::RemoteCursorEntry(void)
 * Address: 00093138
 */
TDocker::RemoteCursorEntry(void) {
    /*
         93138:	e1a0c00d 	mov	ip, sp
         9313c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         93140:	e24cb004 	sub	fp, ip, #4	; 0x4
         93144:	e1a04000 	mov	r4, r0
         93148:	e24dd008 	sub	sp, sp, #8	; 0x8
         9314c:	eb6896bf 	bl	1ab8c50 <TDocker::$RemoteGetCursor(void)>
         93150:	eb6cbbfd 	bl	1bc214c <$AllocateRefHandle(long)>
         93154:	e58d0004 	str	r0, [sp, #4]	; fField4
         93158:	e28d0004 	add	r0, sp, #4	; 0x4
         9315c:	eb6cc00a 	bl	1bc318c <$CursorEntry(RefVar const &)>
         93160:	eb6cbbf9 	bl	1bc214c <$AllocateRefHandle(long)>
         93164:	e58d0000 	str	r0, [sp]
         93168:	e1a0200d 	mov	r2, sp
         9316c:	e1a00004 	mov	r0, r4
         93170:	e59f1014 	ldr	r1, [pc, #14]	; 9318c <TDocker::RemoteCursorEntry(void)+0x54>
         93174:	eb68a72b 	bl	1abce28 <TDocker::$WriteRef(unsigned long, RefVar const &)>
         93178:	e59d0000 	ldr	r0, [sp]
         9317c:	eb6cc00e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         93180:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         93184:	eb6cc00c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         93188:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         9318c:	656e7472 	strvsb	r7, [lr, -#1138]!
    */
}

/**
 * Symbol: TDocker::RemoteCursorMove(void)
 * Address: 00093190
 */
TDocker::RemoteCursorMove(void) {
    /*
         93190:	e1a0c00d 	mov	ip, sp
         93194:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         93198:	e24cb004 	sub	fp, ip, #4	; 0x4
         9319c:	e1a04000 	mov	r4, r0
         931a0:	e24dd00c 	sub	sp, sp, #12	; 0xc
         931a4:	eb6896a9 	bl	1ab8c50 <TDocker::$RemoteGetCursor(void)>
         931a8:	eb6cbbe7 	bl	1bc214c <$AllocateRefHandle(long)>
         931ac:	e58d0008 	str	r0, [sp, #8]
         931b0:	e28d1004 	add	r1, sp, #4	; 0x4
         931b4:	e5940000 	ldr	r0, [r4]
         931b8:	eb6d4843 	bl	1be52cc <CPipe::$__rs(unsigned long &)>
         931bc:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         931c0:	e28d0008 	add	r0, sp, #8	; 0x8
         931c4:	eb6cbff3 	bl	1bc3198 <$CursorMove(RefVar const &, long)>
         931c8:	eb6cbbdf 	bl	1bc214c <$AllocateRefHandle(long)>
         931cc:	e58d0000 	str	r0, [sp]
         931d0:	e1a0200d 	mov	r2, sp
         931d4:	e1a00004 	mov	r0, r4
         931d8:	e59f1014 	ldr	r1, [pc, #14]	; 931f4 <TDocker::RemoteCursorMove(void)+0x64>
         931dc:	eb68a711 	bl	1abce28 <TDocker::$WriteRef(unsigned long, RefVar const &)>
         931e0:	e59d0000 	ldr	r0, [sp]
         931e4:	eb6cbff4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         931e8:	e59d0008 	ldr	r0, [sp, #8]
         931ec:	eb6cbff2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         931f0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         931f4:	656e7472 	strvsb	r7, [lr, -#1138]!
    */
}

/**
 * Symbol: TDocker::RemoteCursorNext(void)
 * Address: 000931f8
 */
TDocker::RemoteCursorNext(void) {
    /*
         931f8:	e1a0c00d 	mov	ip, sp
         931fc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         93200:	e24cb004 	sub	fp, ip, #4	; 0x4
         93204:	e1a04000 	mov	r4, r0
         93208:	e24dd008 	sub	sp, sp, #8	; 0x8
         9320c:	eb68968f 	bl	1ab8c50 <TDocker::$RemoteGetCursor(void)>
         93210:	eb6cbbcd 	bl	1bc214c <$AllocateRefHandle(long)>
         93214:	e58d0004 	str	r0, [sp, #4]	; fField4
         93218:	e28d0004 	add	r0, sp, #4	; 0x4
         9321c:	eb6cbfde 	bl	1bc319c <$CursorNext(RefVar const &)>
         93220:	eb6cbbc9 	bl	1bc214c <$AllocateRefHandle(long)>
         93224:	e58d0000 	str	r0, [sp]
         93228:	e1a0200d 	mov	r2, sp
         9322c:	e1a00004 	mov	r0, r4
         93230:	e59f1014 	ldr	r1, [pc, #14]	; 9324c <TDocker::RemoteCursorNext(void)+0x54>
         93234:	eb68a6fb 	bl	1abce28 <TDocker::$WriteRef(unsigned long, RefVar const &)>
         93238:	e59d0000 	ldr	r0, [sp]
         9323c:	eb6cbfde 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         93240:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         93244:	eb6cbfdc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         93248:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         9324c:	656e7472 	strvsb	r7, [lr, -#1138]!
    */
}

/**
 * Symbol: TDocker::RemoteCursorPrev(void)
 * Address: 00093250
 */
TDocker::RemoteCursorPrev(void) {
    /*
         93250:	e1a0c00d 	mov	ip, sp
         93254:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         93258:	e24cb004 	sub	fp, ip, #4	; 0x4
         9325c:	e1a04000 	mov	r4, r0
         93260:	e24dd008 	sub	sp, sp, #8	; 0x8
         93264:	eb689679 	bl	1ab8c50 <TDocker::$RemoteGetCursor(void)>
         93268:	eb6cbbb7 	bl	1bc214c <$AllocateRefHandle(long)>
         9326c:	e58d0004 	str	r0, [sp, #4]	; fField4
         93270:	e28d0004 	add	r0, sp, #4	; 0x4
         93274:	eb6cbfc9 	bl	1bc31a0 <$CursorPrev(RefVar const &)>
         93278:	eb6cbbb3 	bl	1bc214c <$AllocateRefHandle(long)>
         9327c:	e58d0000 	str	r0, [sp]
         93280:	e1a0200d 	mov	r2, sp
         93284:	e1a00004 	mov	r0, r4
         93288:	e59f1014 	ldr	r1, [pc, #14]	; 932a4 <TDocker::RemoteCursorPrev(void)+0x54>
         9328c:	eb68a6e5 	bl	1abce28 <TDocker::$WriteRef(unsigned long, RefVar const &)>
         93290:	e59d0000 	ldr	r0, [sp]
         93294:	eb6cbfc8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         93298:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         9329c:	eb6cbfc6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         932a0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         932a4:	656e7472 	strvsb	r7, [lr, -#1138]!
    */
}

/**
 * Symbol: TDocker::RemoteCursorReset(void)
 * Address: 000932a8
 */
TDocker::RemoteCursorReset(void) {
    /*
         932a8:	e1a0c00d 	mov	ip, sp
         932ac:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         932b0:	e24cb004 	sub	fp, ip, #4	; 0x4
         932b4:	e1a04000 	mov	r4, r0
         932b8:	e24dd004 	sub	sp, sp, #4	; 0x4
         932bc:	eb689663 	bl	1ab8c50 <TDocker::$RemoteGetCursor(void)>
         932c0:	eb6cbba1 	bl	1bc214c <$AllocateRefHandle(long)>
         932c4:	e58d0000 	str	r0, [sp]
         932c8:	e1a0000d 	mov	r0, sp
         932cc:	eb6cbfb4 	bl	1bc31a4 <$CursorReset(RefVar const &)>
         932d0:	e1a00004 	mov	r0, r4
         932d4:	e3a01000 	mov	r1, #0	; 0x0
         932d8:	eb68a6d3 	bl	1abce2c <TDocker::$WriteResult(long)>
         932dc:	e59d0000 	ldr	r0, [sp]
         932e0:	eb6cbfb5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         932e4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::RemoteCursorResetToEnd(void)
 * Address: 00093330
 */
TDocker::RemoteCursorResetToEnd(void) {
    /*
         93330:	e1a0c00d 	mov	ip, sp
         93334:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         93338:	e24cb004 	sub	fp, ip, #4	; 0x4
         9333c:	e1a04000 	mov	r4, r0
         93340:	e24dd004 	sub	sp, sp, #4	; 0x4
         93344:	eb689641 	bl	1ab8c50 <TDocker::$RemoteGetCursor(void)>
         93348:	eb6cbb7f 	bl	1bc214c <$AllocateRefHandle(long)>
         9334c:	e58d0000 	str	r0, [sp]
         93350:	e1a0000d 	mov	r0, sp
         93354:	eb08f599 	bl	2d09c0 <CursorResetToEnd>
         93358:	e1a00004 	mov	r0, r4
         9335c:	e3a01000 	mov	r1, #0	; 0x0
         93360:	eb68a6b1 	bl	1abce2c <TDocker::$WriteResult(long)>
         93364:	e59d0000 	ldr	r0, [sp]
         93368:	eb6cbf93 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9336c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::RemoteCursorCountEntries(void)
 * Address: 00093370
 */
TDocker::RemoteCursorCountEntries(void) {
    /*
         93370:	e1a0c00d 	mov	ip, sp
         93374:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         93378:	e24cb004 	sub	fp, ip, #4	; 0x4
         9337c:	e1a04000 	mov	r4, r0
         93380:	e24dd004 	sub	sp, sp, #4	; 0x4
         93384:	eb689631 	bl	1ab8c50 <TDocker::$RemoteGetCursor(void)>
         93388:	eb6cbb6f 	bl	1bc214c <$AllocateRefHandle(long)>
         9338c:	e58d0000 	str	r0, [sp]
         93390:	e1a0000d 	mov	r0, sp
         93394:	eb08f596 	bl	2d09f4 <CursorCountEntries>
         93398:	e3100003 	tst	r0, #3	; 0x3
         9339c:	01a00140 	moveq	r0, r0, asr #2
         933a0:	0a000000 	beq	933a8 <TDocker::RemoteCursorCountEntries(void)+0x38>
         933a4:	eb6cbb5c 	bl	1bc211c <$_RINTError(long)>
         933a8:	e1a02000 	mov	r2, r0
         933ac:	e1a00004 	mov	r0, r4
         933b0:	e59f100c 	ldr	r1, [pc, #c]	; 933c4 <TDocker::RemoteCursorCountEntries(void)+0x54>
         933b4:	eb68a697 	bl	1abce18 <TDocker::$WriteLong(unsigned long, unsigned long)>
         933b8:	e59d0000 	ldr	r0, [sp]
         933bc:	eb6cbf7e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         933c0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         933c4:	6c647461 	stcvsl	4, cr7, [r4], -#388
    */
}

/**
 * Symbol: TDocker::RemoteCursorWhichEnd(void)
 * Address: 000933c8
 */
TDocker::RemoteCursorWhichEnd(void) {
    /*
         933c8:	e1a0c00d 	mov	ip, sp
         933cc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         933d0:	e24cb004 	sub	fp, ip, #4	; 0x4
         933d4:	e1a04000 	mov	r4, r0
         933d8:	e24dd004 	sub	sp, sp, #4	; 0x4
         933dc:	eb68961b 	bl	1ab8c50 <TDocker::$RemoteGetCursor(void)>
         933e0:	eb6cbb59 	bl	1bc214c <$AllocateRefHandle(long)>
         933e4:	e58d0000 	str	r0, [sp]
         933e8:	e1a0000d 	mov	r0, sp
         933ec:	eb08f589 	bl	2d0a18 <CursorWhichEnd>
         933f0:	eb6cbb55 	bl	1bc214c <$AllocateRefHandle(long)>
         933f4:	e1a05000 	mov	r5, r0
         933f8:	e3a06000 	mov	r6, #0	; 0x0
         933fc:	e5900000 	ldr	r0, [r0]
         93400:	e3300002 	teq	r0, #2	; 0x2
         93404:	0a00000d 	beq	93440 <TDocker::RemoteCursorWhichEnd(void)+0x78>
         93408:	e59f1054 	ldr	r1, [pc, #54]	; 93464 <TDocker::RemoteCursorWhichEnd(void)+0x9c>
         9340c:	e5911000 	ldr	r1, [r1]
         93410:	e5911000 	ldr	r1, [r1]
         93414:	eb6cc385 	bl	1bc4230 <$EQRef__FlT1>
         93418:	e3300000 	teq	r0, #0	; 0x0
         9341c:	13a06001 	movne	r6, #1	; 0x1
         93420:	1a000006 	bne	93440 <TDocker::RemoteCursorWhichEnd(void)+0x78>
         93424:	e59f003c 	ldr	r0, [pc, #3c]	; 93468 <TDocker::RemoteCursorWhichEnd(void)+0xa0>
         93428:	e5900000 	ldr	r0, [r0]
         9342c:	e5901000 	ldr	r1, [r0]
         93430:	e5950000 	ldr	r0, [r5]
         93434:	eb6cc37d 	bl	1bc4230 <$EQRef__FlT1>
         93438:	e3300000 	teq	r0, #0	; 0x0
         9343c:	13a06002 	movne	r6, #2	; 0x2
         93440:	e1a02006 	mov	r2, r6
         93444:	e1a00004 	mov	r0, r4
         93448:	e59f101c 	ldr	r1, [pc, #1c]	; 9346c <TDocker::RemoteCursorWhichEnd(void)+0xa4>
         9344c:	eb68a671 	bl	1abce18 <TDocker::$WriteLong(unsigned long, unsigned long)>
         93450:	e1a00005 	mov	r0, r5
         93454:	eb6cbf58 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         93458:	e59d0000 	ldr	r0, [sp]
         9345c:	eb6cbf56 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         93460:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         93464:	00682070 	rsbeq	r2, r8, r0, ror r0
         93468:	00682b60 	rsbeq	r2, r8, r0, ror #22
         9346c:	6c647461 	stcvsl	4, cr7, [r4], -#388
    */
}

/**
 * Symbol: TDocker::RemoteCursorFree(void)
 * Address: 00093470
 */
TDocker::RemoteCursorFree(void) {
    /*
         93470:	e1a0c00d 	mov	ip, sp
         93474:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         93478:	e24cb004 	sub	fp, ip, #4	; 0x4
         9347c:	e1a04000 	mov	r4, r0
         93480:	e24dd004 	sub	sp, sp, #4	; 0x4
         93484:	e1a0100d 	mov	r1, sp
         93488:	e5900000 	ldr	r0, [r0]
         9348c:	eb6d478e 	bl	1be52cc <CPipe::$__rs(unsigned long &)>
         93490:	e5940054 	ldr	r0, [r4, #84]	; fField84
         93494:	e3300000 	teq	r0, #0	; 0x0
         93498:	159d1000 	ldrne	r1, [sp]
         9349c:	1b6899f9 	blne	1ab9c88 <TCursorArray::$Remove(unsigned long)>
         934a0:	e1a00004 	mov	r0, r4
         934a4:	e3a01000 	mov	r1, #0	; 0x0
         934a8:	eb68a65f 	bl	1abce2c <TDocker::$WriteResult(long)>
         934ac:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::ProcessCommand(unsigned char &, unsigned char &)
 * Address: 000934b0
 */
TDocker::ProcessCommand(unsigned char &, unsigned char &) {
    /*
         934b0:	e1a0c00d 	mov	ip, sp
         934b4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         934b8:	e24cb004 	sub	fp, ip, #4	; 0x4
         934bc:	e1a04000 	mov	r4, r0
         934c0:	e1a06001 	mov	r6, r1
         934c4:	e1a05002 	mov	r5, r2
         934c8:	e3a0a000 	mov	sl, #0	; 0x0
         934cc:	e5c1a000 	strb	sl, [r1]
         934d0:	e5c2a000 	strb	sl, [r2]
         934d4:	e5c0a02f 	strb	sl, [r0, #47]	; fField47
         934d8:	e5901044 	ldr	r1, [r0, #68]	; fField68
         934dc:	eb685c21 	bl	1aaa568 <TDocker::$CheckProtocolExtension(unsigned long, unsigned char &)>
         934e0:	e3a08001 	mov	r8, #1	; 0x1
         934e4:	e3300000 	teq	r0, #0	; 0x0
         934e8:	1a00027e 	bne	93ee8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa38>
         934ec:	e1a02005 	mov	r2, r5
         934f0:	e5941044 	ldr	r1, [r4, #68]	; fField68
         934f4:	e1a00004 	mov	r0, r4
         934f8:	eb685c1b 	bl	1aaa56c <TDocker::$CheckProtocolPatch(unsigned long, unsigned char &)>
         934fc:	e3300000 	teq	r0, #0	; 0x0
         93500:	1a000278 	bne	93ee8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa38>
         93504:	e3a00002 	mov	r0, #2	; 0x2
         93508:	e5942044 	ldr	r2, [r4, #68]	; fField68
         9350c:	e2849010 	add	r9, r4, #16	; 0x10
         93510:	e59fc080 	ldr	ip, [pc, #80]	; 93598 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xe8>	; fField80
         93514:	e152000c 	cmp	r2, ip
         93518:	0a0001bf 	beq	93c1c <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x76c>
         9351c:	e59f1078 	ldr	r1, [pc, #78]	; 9359c <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xec>
         93520:	e59f7078 	ldr	r7, [pc, #78]	; 935a0 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xf0>
         93524:	ca0000bb 	bgt	93818 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x368>
         93528:	e59fc074 	ldr	ip, [pc, #74]	; 935a4 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xf4>
         9352c:	e152000c 	cmp	r2, ip
         93530:	0a0001e8 	beq	93cd8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x828>
         93534:	ca00005e 	bgt	936b4 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x204>
         93538:	e59fc068 	ldr	ip, [pc, #68]	; 935a8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xf8>	; fField68
         9353c:	e152000c 	cmp	r2, ip
         93540:	0a000203 	beq	93d54 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x8a4>
         93544:	ca000031 	bgt	93610 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x160>
         93548:	e1520001 	cmp	r2, r1
         9354c:	0a0001a7 	beq	93bf0 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x740>
         93550:	ca000019 	bgt	935bc <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x10c>
         93554:	e59fc050 	ldr	ip, [pc, #50]	; 935ac <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xfc>	; fField50
         93558:	e132000c 	teq	r2, ip
         9355c:	01a00004 	moveq	r0, r4
         93560:	03a01000 	moveq	r1, #0	; 0x0
         93564:	0a00019f 	beq	93be8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x738>
         93568:	e59fc040 	ldr	ip, [pc, #40]	; 935b0 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x100>	; fField40
         9356c:	e132000c 	teq	r2, ip
         93570:	0a00019a 	beq	93be0 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x730>
         93574:	e59fc038 	ldr	ip, [pc, #38]	; 935b4 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x104>
         93578:	e132000c 	teq	r2, ip
         9357c:	0a00018a 	beq	93bac <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x6fc>
         93580:	e59fc030 	ldr	ip, [pc, #30]	; 935b8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x108>
         93584:	e132000c 	teq	r2, ip
         93588:	1a00024e 	bne	93ec8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa18>
         9358c:	e1a00004 	mov	r0, r4
         93590:	eb68b27a 	bl	1abff80 <TDocker::$CreateSoupFromSoupDef(void)>
         93594:	ea000253 	b	93ee8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa38>
         93598:	6c706b67 	ldcvsl	11, cr6, [r0], -#412
         9359c:	63656e74 	cmnvs	r5, #1856	; 0x740
         935a0:	756e6b6e 	strvcb	r6, [lr, -#2926]!
         935a4:	64736c70 	ldrvsbt	r6, [r3], -#3184
         935a8:	636d6170 	cmnvs	sp, #28	; 0x1c
         935ac:	61646465 	cmnvs	r4, r5, ror #8
         935b0:	61756e69 	cmnvs	r5, r9, ror #28
         935b4:	626b7370 	rsbvs	r7, fp, #-1073741823	; 0xc0000001
         935b8:	63647370 	cmnvs	r4, #-1073741823	; 0xc0000001
         935bc:	e59fc03c 	ldr	ip, [pc, #3c]	; 93600 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x150>
         935c0:	e132000c 	teq	r2, ip
         935c4:	0a0001fe 	beq	93dc4 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x914>
         935c8:	e59fc034 	ldr	ip, [pc, #34]	; 93604 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x154>
         935cc:	e132000c 	teq	r2, ip
         935d0:	0a00020f 	beq	93e14 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x964>
         935d4:	e59fc02c 	ldr	ip, [pc, #2c]	; 93608 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x158>
         935d8:	e132000c 	teq	r2, ip
         935dc:	01a00004 	moveq	r0, r4
         935e0:	03a01001 	moveq	r1, #1	; 0x1
         935e4:	0a000175 	beq	93bc0 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x710>
         935e8:	e59fc01c 	ldr	ip, [pc, #1c]	; 9360c <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x15c>
         935ec:	e132000c 	teq	r2, ip
         935f0:	01a00004 	moveq	r0, r4
         935f4:	03a01001 	moveq	r1, #1	; 0x1
         935f8:	0a000070 	beq	937c0 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x310>
         935fc:	ea000231 	b	93ec8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa18>
         93600:	63667265 	cmnvs	r6, #1342177286	; 0x50000006
         93604:	6367666e 	cmnvs	r7, #115343360	; 0x6e00000
         93608:	63696478 	cmnvs	r9, #2013265920	; 0x78000000
         9360c:	63696e66 	cmnvs	r9, #1632	; 0x660
         93610:	e59fc044 	ldr	ip, [pc, #44]	; 9365c <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x1ac>	; fField44
         93614:	e152000c 	cmp	r2, ip
         93618:	0a0001be 	beq	93d18 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x868>
         9361c:	ca000013 	bgt	93670 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x1c0>
         93620:	e59fc038 	ldr	ip, [pc, #38]	; 93660 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x1b0>
         93624:	e132000c 	teq	r2, ip
         93628:	0a0001dd 	beq	93da4 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x8f4>
         9362c:	e59fc030 	ldr	ip, [pc, #30]	; 93664 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x1b4>
         93630:	e132000c 	teq	r2, ip
         93634:	0a0001fa 	beq	93e24 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x974>
         93638:	e59fc028 	ldr	ip, [pc, #28]	; 93668 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x1b8>	; fField28
         9363c:	e132000c 	teq	r2, ip
         93640:	0a0001c7 	beq	93d64 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x8b4>
         93644:	e59fc020 	ldr	ip, [pc, #20]	; 9366c <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x1bc>	; fField20
         93648:	e132000c 	teq	r2, ip
         9364c:	1a00021d 	bne	93ec8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa18>
         93650:	e1a00004 	mov	r0, r4
         93654:	eb67f04e 	bl	1a8f794 <TDocker::$CreateSoup(void)>
         93658:	ea000222 	b	93ee8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa38>
         9365c:	6376626f 	cmnvs	r6, #-268435450	; 0xf0000006
         93660:	636e7420 	cmnvs	lr, #536870912	; 0x20000000
         93664:	63726d66 	cmnvs	r2, #6528	; 0x1980
         93668:	63727372 	cmnvs	r2, #-939524095	; 0xc8000001
         9366c:	63736f70 	cmnvs	r3, #448	; 0x1c0
         93670:	e59fc030 	ldr	ip, [pc, #30]	; 936a8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x1f8>
         93674:	e132000c 	teq	r2, ip
         93678:	0a000155 	beq	93bd4 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x724>
         9367c:	e59fc028 	ldr	ip, [pc, #28]	; 936ac <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x1fc>	; fField28
         93680:	e132000c 	teq	r2, ip
         93684:	05c68000 	streqb	r8, [r6]
         93688:	0a000216 	beq	93ee8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa38>
         9368c:	e59fc01c 	ldr	ip, [pc, #1c]	; 936b0 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x200>
         93690:	e132000c 	teq	r2, ip
         93694:	1a00020b 	bne	93ec8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa18>
         93698:	e1a00004 	mov	r0, r4
         9369c:	eb682e2e 	bl	1a9ef5c <TDocker::$ReadResult(void)>
         936a0:	e5840050 	str	r0, [r4, #80]	; fField80
         936a4:	ea00020f 	b	93ee8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa38>
         936a8:	64656c65 	strvsbt	r6, [r5], -#3173
         936ac:	64697363 	strvsbt	r7, [r9], -#867
         936b0:	64726573 	ldrvsbt	r6, [r2], -#1395
         936b4:	e59fc058 	ldr	ip, [pc, #58]	; 93714 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x264>
         936b8:	e152000c 	cmp	r2, ip
         936bc:	0a0001a0 	beq	93d44 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x894>
         936c0:	ca00002c 	bgt	93778 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x2c8>
         936c4:	e59fc04c 	ldr	ip, [pc, #4c]	; 93718 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x268>	; fField4
         936c8:	e152000c 	cmp	r2, ip
         936cc:	0a000130 	beq	93b94 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x6e4>
         936d0:	ca000015 	bgt	9372c <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x27c>
         936d4:	e59fc040 	ldr	ip, [pc, #40]	; 9371c <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x26c>	; fField40
         936d8:	e132000c 	teq	r2, ip
         936dc:	058480a4 	streq	r8, [r4, #164]	; fField164
         936e0:	05c4a02f 	streqb	sl, [r4, #47]	; fField47
         936e4:	0a0001ff 	beq	93ee8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa38>
         936e8:	e59f1030 	ldr	r1, [pc, #30]	; 93720 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x270>
         936ec:	e1320001 	teq	r2, r1
         936f0:	159f102c 	ldrne	r1, [pc, #2c]	; 93724 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x274>
         936f4:	11320001 	teqne	r2, r1
         936f8:	0a000144 	beq	93c10 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x760>
         936fc:	e59fc024 	ldr	ip, [pc, #24]	; 93728 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x278>	; fField24
         93700:	e132000c 	teq	r2, ip
         93704:	1a0001ef 	bne	93ec8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa18>
         93708:	e1a00004 	mov	r0, r4
         9370c:	eb68a1ba 	bl	1abbdfc <TDocker::$WriteChangedIDs(void)>
         93710:	ea0001f4 	b	93ee8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa38>
         93714:	676f746f 	strvsb	r7, [pc, -pc, ror #8]!
         93718:	67646673 	undefined
         9371c:	64736e63 	ldrvsbt	r6, [r3], -#3683
         93720:	64736f75 	ldrvsbt	r6, [r3], -#3957
         93724:	65736f75 	ldrvsb	r6, [r3, -#3957]!
         93728:	67636964 	strvsb	r6, [r3, -r4, ror #18]!
         9372c:	e59fc034 	ldr	ip, [pc, #34]	; 93768 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x2b8>
         93730:	e132000c 	teq	r2, ip
         93734:	0a000109 	beq	93b60 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x6b0>
         93738:	e59fc02c 	ldr	ip, [pc, #2c]	; 9376c <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x2bc>
         9373c:	e132000c 	teq	r2, ip
         93740:	0a000120 	beq	93bc8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x718>
         93744:	e59fc024 	ldr	ip, [pc, #24]	; 93770 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x2c0>	; fField24
         93748:	e132000c 	teq	r2, ip
         9374c:	0a000119 	beq	93bb8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x708>
         93750:	e59fc01c 	ldr	ip, [pc, #1c]	; 93774 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x2c4>
         93754:	e132000c 	teq	r2, ip
         93758:	1a0001da 	bne	93ec8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa18>
         9375c:	e1a00004 	mov	r0, r4
         93760:	eb68a5ab 	bl	1abce14 <TDocker::$WriteInheritanceFrame(void)>
         93764:	ea0001df 	b	93ee8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa38>
         93768:	67657473 	undefined
         9376c:	67696473 	undefined
         93770:	67696e64 	strvsb	r6, [r9, -r4, ror #28]!	; fField28
         93774:	67696e68 	strvsb	r6, [r9, -r8, ror #28]!	; fField28
         93778:	e59fc048 	ldr	ip, [pc, #48]	; 937c8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x318>	; fField48
         9377c:	e152000c 	cmp	r2, ip
         93780:	0a0000ee 	beq	93b40 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x690>
         93784:	ca000014 	bgt	937dc <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x32c>
         93788:	e59fc03c 	ldr	ip, [pc, #3c]	; 937cc <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x31c>
         9378c:	e132000c 	teq	r2, ip
         93790:	0a000141 	beq	93c9c <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x7ec>
         93794:	e59fc034 	ldr	ip, [pc, #34]	; 937d0 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x320>
         93798:	e132000c 	teq	r2, ip
         9379c:	0a00013b 	beq	93c90 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x7e0>
         937a0:	e59fc02c 	ldr	ip, [pc, #2c]	; 937d4 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x324>
         937a4:	e132000c 	teq	r2, ip
         937a8:	0a00014d 	beq	93ce4 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x834>
         937ac:	e59fc024 	ldr	ip, [pc, #24]	; 937d8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x328>	; fField24
         937b0:	e132000c 	teq	r2, ip
         937b4:	1a0001c3 	bne	93ec8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa18>
         937b8:	e1a00004 	mov	r0, r4
         937bc:	e3a01000 	mov	r1, #0	; 0x0
         937c0:	eb68a59b 	bl	1abce34 <TDocker::$WriteSoupInfo(unsigned char)>
         937c4:	ea0001c7 	b	93ee8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa38>
         937c8:	6773746f 	ldrvsb	r7, [r3, -pc, ror #8]!
         937cc:	67706174 	undefined
         937d0:	6770696e 	ldrvsb	r6, [r0, -lr, ror #18]!
         937d4:	67707764 	ldrvsb	r7, [r0, -r4, ror #14]!
         937d8:	6773696e 	ldrvsb	r6, [r3, -lr, ror #18]!
         937dc:	e59fc028 	ldr	ip, [pc, #28]	; 9380c <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x35c>	; fField28
         937e0:	e132000c 	teq	r2, ip
         937e4:	0a000132 	beq	93cb4 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x804>
         937e8:	e59fc020 	ldr	ip, [pc, #20]	; 93810 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x360>	; fField20
         937ec:	e132000c 	teq	r2, ip
         937f0:	0a0000bf 	beq	93af4 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x644>
         937f4:	e59fc018 	ldr	ip, [pc, #18]	; 93814 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x364>
         937f8:	e132000c 	teq	r2, ip
         937fc:	1a0001b1 	bne	93ec8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa18>
         93800:	e1a00004 	mov	r0, r4
         93804:	eb686390 	bl	1aac64c <TDocker::$DoImportParametersSlip(void)>
         93808:	ea0001b6 	b	93ee8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa38>
         9380c:	6773796e 	ldrvsb	r7, [r3, -lr, ror #18]!
         93810:	68656c6f 	stmvsda	r5!, {r0, r1, r2, r3, r5, r6, sl, fp, sp, lr}^
         93814:	69736c70 	ldmvsdb	r3!, {r4, r5, r6, sl, fp, sp, lr}^
         93818:	e59fc05c 	ldr	ip, [pc, #5c]	; 9387c <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x3cc>
         9381c:	e152000c 	cmp	r2, ip
         93820:	0a000198 	beq	93e88 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x9d8>
         93824:	ca000059 	bgt	93990 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x4e0>
         93828:	e59fc050 	ldr	ip, [pc, #50]	; 93880 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x3d0>	; fField50
         9382c:	e152000c 	cmp	r2, ip
         93830:	0a000172 	beq	93e00 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x950>
         93834:	ca00002b 	bgt	938e8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x438>
         93838:	e59fc044 	ldr	ip, [pc, #44]	; 93884 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x3d4>	; fField44
         9383c:	e152000c 	cmp	r2, ip
         93840:	0a000163 	beq	93dd4 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x924>
         93844:	ca000013 	bgt	93898 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x3e8>
         93848:	e59fc038 	ldr	ip, [pc, #38]	; 93888 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x3d8>
         9384c:	e132000c 	teq	r2, ip
         93850:	0a000147 	beq	93d74 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x8c4>
         93854:	e59fc030 	ldr	ip, [pc, #30]	; 9388c <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x3dc>
         93858:	e132000c 	teq	r2, ip
         9385c:	0a000148 	beq	93d84 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x8d4>
         93860:	e59fc028 	ldr	ip, [pc, #28]	; 93890 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x3e0>	; fField28
         93864:	e132000c 	teq	r2, ip
         93868:	0a000123 	beq	93cfc <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x84c>
         9386c:	e59fc020 	ldr	ip, [pc, #20]	; 93894 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x3e4>	; fField20
         93870:	e132000c 	teq	r2, ip
         93874:	1a000193 	bne	93ec8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa18>
         93878:	ea0000fe 	b	93c78 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x7c8>
         9387c:	72747374 	rsbvcs	r7, r4, #-805306367	; 0xd0000001
         93880:	72657373 	rsbvc	r7, r5, #-872415231	; 0xcc000001
         93884:	70657874 	rsbvc	r7, r5, r4, ror r8
         93888:	6d6f7665 	stcvsl	6, cr7, [pc, -#404]!
         9388c:	6e657874 	mcrvs	8, 3, r7, cr5, cr4, {3}
         93890:	6f706361 	swivs	0x00706361
         93894:	6f70646e 	swivs	0x0070646e
         93898:	e59fc038 	ldr	ip, [pc, #38]	; 938d8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x428>
         9389c:	e132000c 	teq	r2, ip
         938a0:	0a00013b 	beq	93d94 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x8e4>
         938a4:	e59fc030 	ldr	ip, [pc, #30]	; 938dc <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x42c>
         938a8:	e132000c 	teq	r2, ip
         938ac:	0a000120 	beq	93d34 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x884>
         938b0:	e59fc028 	ldr	ip, [pc, #28]	; 938e0 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x430>	; fField28
         938b4:	e132000c 	teq	r2, ip
         938b8:	0a0000d0 	beq	93c00 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x750>
         938bc:	e59fc020 	ldr	ip, [pc, #20]	; 938e4 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x434>	; fField20
         938c0:	e132000c 	teq	r2, ip
         938c4:	1a00017f 	bne	93ec8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa18>
         938c8:	e24dd004 	sub	sp, sp, #4	; 0x4
         938cc:	e1a00004 	mov	r0, r4
         938d0:	eb6894db 	bl	1ab8c44 <TDocker::$RemoteCursorResetToEnd(void)>
         938d4:	ea000182 	b	93ee4 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa34>
         938d8:	70726576 	rsbvcs	r6, r2, r6, ror r5
         938dc:	71757279 	cmnvc	r5, r9, ror r2
         938e0:	7263656e 	rsbvc	r6, r3, #461373440	; 0x1b800000
         938e4:	72656e64 	rsbvc	r6, r5, #1600	; 0x640
         938e8:	e59fc048 	ldr	ip, [pc, #48]	; 93938 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x488>	; fField48
         938ec:	e152000c 	cmp	r2, ip
         938f0:	0a00013b 	beq	93de4 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x934>
         938f4:	ca000014 	bgt	9394c <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x49c>
         938f8:	e59fc03c 	ldr	ip, [pc, #3c]	; 9393c <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x48c>
         938fc:	e132000c 	teq	r2, ip
         93900:	0a0000bd 	beq	93bfc <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x74c>
         93904:	e59fc034 	ldr	ip, [pc, #34]	; 93940 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x490>
         93908:	e132000c 	teq	r2, ip
         9390c:	03a00004 	moveq	r0, #4	; 0x4
         93910:	0a00007a 	beq	93b00 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x650>
         93914:	e59fc028 	ldr	ip, [pc, #28]	; 93944 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x494>	; fField28
         93918:	e132000c 	teq	r2, ip
         9391c:	0a0000f3 	beq	93cf0 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x840>
         93920:	e59fc020 	ldr	ip, [pc, #20]	; 93948 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x498>	; fField20
         93924:	e132000c 	teq	r2, ip
         93928:	1a000166 	bne	93ec8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa18>
         9392c:	e1a00004 	mov	r0, r4
         93930:	eb692956 	bl	1adde90 <TDocker::$DoRestorePatch(void)>
         93934:	ea00016b 	b	93ee8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa38>
         93938:	72706578 	rsbvcs	r6, r0, #503316480	; 0x1e000000
         9393c:	72657465 	rsbvc	r7, r5, #1694498816	; 0x65000000
         93940:	72696e73 	rsbvc	r6, r9, #1840	; 0x730
         93944:	726d7670 	rsbvc	r7, sp, #117440512	; 0x7000000
         93948:	72706174 	rsbvcs	r6, r0, #29	; 0x1d
         9394c:	e59fc030 	ldr	ip, [pc, #30]	; 93984 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x4d4>
         93950:	e132000c 	teq	r2, ip
         93954:	0a0000ca 	beq	93c84 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x7d4>
         93958:	e59fc028 	ldr	ip, [pc, #28]	; 93988 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x4d8>	; fField28
         9395c:	e132000c 	teq	r2, ip
         93960:	03a00003 	moveq	r0, #3	; 0x3
         93964:	0a000065 	beq	93b00 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x650>
         93968:	e59fc01c 	ldr	ip, [pc, #1c]	; 9398c <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x4dc>
         9396c:	e132000c 	teq	r2, ip
         93970:	1a000154 	bne	93ec8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa18>
         93974:	e24dd004 	sub	sp, sp, #4	; 0x4
         93978:	e1a00004 	mov	r0, r4
         9397c:	eb6894b1 	bl	1ab8c48 <TDocker::$RemoteCursorReset(void)>
         93980:	ea000157 	b	93ee4 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa34>
         93984:	72706b67 	rsbvcs	r6, r0, #105472	; 0x19c00
         93988:	72727374 	rsbvcs	r7, r2, #-805306367	; 0xd0000001
         9398c:	72736574 	rsbvcs	r6, r3, #486539264	; 0x1d000000
         93990:	e59fc05c 	ldr	ip, [pc, #5c]	; 939f4 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x544>
         93994:	e152000c 	cmp	r2, ip
         93998:	01a00004 	moveq	r0, r4
         9399c:	03a01000 	moveq	r1, #0	; 0x0
         939a0:	0a000073 	beq	93b74 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x6c4>
         939a4:	ca00002c 	bgt	93a5c <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x5ac>
         939a8:	e59fc048 	ldr	ip, [pc, #48]	; 939f8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x548>	; fField48
         939ac:	e152000c 	cmp	r2, ip
         939b0:	0a00006d 	beq	93b6c <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x6bc>
         939b4:	ca000014 	bgt	93a0c <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x55c>
         939b8:	e59fc03c 	ldr	ip, [pc, #3c]	; 939fc <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x54c>
         939bc:	e132000c 	teq	r2, ip
         939c0:	0a00006d 	beq	93b7c <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x6cc>
         939c4:	e59fc034 	ldr	ip, [pc, #34]	; 93a00 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x550>
         939c8:	e132000c 	teq	r2, ip
         939cc:	0a00005e 	beq	93b4c <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x69c>
         939d0:	e59fc02c 	ldr	ip, [pc, #2c]	; 93a04 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x554>
         939d4:	e132000c 	teq	r2, ip
         939d8:	0a000070 	beq	93ba0 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x6f0>
         939dc:	e59fc024 	ldr	ip, [pc, #24]	; 93a08 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x558>	; fField24
         939e0:	e132000c 	teq	r2, ip
         939e4:	01a00004 	moveq	r0, r4
         939e8:	03a01001 	moveq	r1, #1	; 0x1
         939ec:	0a000014 	beq	93a44 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x594>
         939f0:	ea000134 	b	93ec8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa18>
         939f4:	7373746f 	cmnvc	r3, #1862270976	; 0x6f000000
         939f8:	7373676e 	cmnvc	r3, #28835840	; 0x1b80000
         939fc:	73646566 	cmnvc	r4, #427819008	; 0x19800000
         93a00:	73696e66 	cmnvc	r9, #1632	; 0x660
         93a04:	736e6473 	cmnvc	lr, #1929379840	; 0x73000000
         93a08:	73736769 	cmnvc	r3, #27525120	; 0x1a40000
         93a0c:	e59fc038 	ldr	ip, [pc, #38]	; 93a4c <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x59c>
         93a10:	e132000c 	teq	r2, ip
         93a14:	0a0000a9 	beq	93cc0 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x810>
         93a18:	e59fc030 	ldr	ip, [pc, #30]	; 93a50 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x5a0>
         93a1c:	e132000c 	teq	r2, ip
         93a20:	0a000104 	beq	93e38 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x988>
         93a24:	e59fc028 	ldr	ip, [pc, #28]	; 93a54 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x5a4>	; fField28
         93a28:	e132000c 	teq	r2, ip
         93a2c:	0a0000a6 	beq	93ccc <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x81c>
         93a30:	e59fc020 	ldr	ip, [pc, #20]	; 93a58 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x5a8>	; fField20
         93a34:	e132000c 	teq	r2, ip
         93a38:	1a000122 	bne	93ec8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa18>
         93a3c:	e1a00004 	mov	r0, r4
         93a40:	e3a01000 	mov	r1, #0	; 0x0
         93a44:	eb6898a7 	bl	1ab9ce8 <TDocker::$SetCurrentSoup(unsigned char)>
         93a48:	ea000126 	b	93ee8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa38>
         93a4c:	73736967 	cmnvc	r3, #1687552	; 0x19c000
         93a50:	73736e61 	cmnvc	r3, #1552	; 0x610
         93a54:	73736f73 	cmnvc	r3, #460	; 0x1cc
         93a58:	73736f75 	cmnvc	r3, #468	; 0x1d4
         93a5c:	e59fc044 	ldr	ip, [pc, #44]	; 93aa8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x5f8>	; fField44
         93a60:	e152000c 	cmp	r2, ip
         93a64:	0a000103 	beq	93e78 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x9c8>
         93a68:	ca000013 	bgt	93abc <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x60c>
         93a6c:	e59fc038 	ldr	ip, [pc, #38]	; 93aac <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x5fc>
         93a70:	e132000c 	teq	r2, ip
         93a74:	0a000021 	beq	93b00 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x650>
         93a78:	e59fc030 	ldr	ip, [pc, #30]	; 93ab0 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x600>
         93a7c:	e132000c 	teq	r2, ip
         93a80:	0a000088 	beq	93ca8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x7f8>
         93a84:	e59fc028 	ldr	ip, [pc, #28]	; 93ab4 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x604>	; fField28
         93a88:	e132000c 	teq	r2, ip
         93a8c:	0a00001d 	beq	93b08 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x658>
         93a90:	e59fc020 	ldr	ip, [pc, #20]	; 93ab8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x608>	; fField20
         93a94:	e132000c 	teq	r2, ip
         93a98:	1a00010a 	bne	93ec8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa18>
         93a9c:	e1a00004 	mov	r0, r4
         93aa0:	eb689055 	bl	1ab7bfc <TDocker::$ReadSourceVersion(void)>
         93aa4:	ea00010f 	b	93ee8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa38>
         93aa8:	74657374 	strvcbt	r7, [r5], -#884
         93aac:	7373796e 	cmnvc	r3, #1802240	; 0x1b8000
         93ab0:	7374696d 	cmnvc	r4, #1785856	; 0x1b4000
         93ab4:	73746d65 	cmnvc	r4, #6464	; 0x1940
         93ab8:	73766572 	cmnvc	r6, #478150656	; 0x1c800000
         93abc:	e1320007 	teq	r2, r7
         93ac0:	0a0000f4 	beq	93e98 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x9e8>
         93ac4:	e59fc020 	ldr	ip, [pc, #20]	; 93aec <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x63c>	; fField20
         93ac8:	e132000c 	teq	r2, ip
         93acc:	0a0000b8 	beq	93db4 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x904>
         93ad0:	e59fc018 	ldr	ip, [pc, #18]	; 93af0 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x640>
         93ad4:	e132000c 	teq	r2, ip
         93ad8:	1a0000fa 	bne	93ec8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa18>
         93adc:	e24dd004 	sub	sp, sp, #4	; 0x4
         93ae0:	e1a00004 	mov	r0, r4
         93ae4:	eb689c8e 	bl	1abad24 <TDocker::$SetWhichIcons(void)>
         93ae8:	ea0000fd 	b	93ee4 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa34>
         93aec:	77686368 	strvcb	r6, [r8, -r8, ror #6]!
         93af0:	7769636e 	strvcb	r6, [r9, -lr, ror #6]!
         93af4:	e1a00004 	mov	r0, r4
         93af8:	eb6803d4 	bl	1a94a50 <TDocker::$FlushCommand(void)>
         93afc:	ea0000f9 	b	93ee8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa38>
         93b00:	e58400a4 	str	r0, [r4, #164]	; fField164
         93b04:	ea00001e 	b	93b84 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x6d4>
         93b08:	e2841074 	add	r1, r4, #116	; 0x74
         93b0c:	e5940000 	ldr	r0, [r4]
         93b10:	eb6d45ed 	bl	1be52cc <CPipe::$__rs(unsigned long &)>
         93b14:	e5940074 	ldr	r0, [r4, #116]	; fField116
         93b18:	e3c0020e 	bic	r0, r0, #-536870912	; 0xe0000000
         93b1c:	e5840074 	str	r0, [r4, #116]	; fField116
         93b20:	eb682d10 	bl	1a9ef68 <$RealClock(void)>
         93b24:	e5840078 	str	r0, [r4, #120]	; fField120
         93b28:	e1a02000 	mov	r2, r0
         93b2c:	e1a00004 	mov	r0, r4
         93b30:	e59f1004 	ldr	r1, [pc, #4]	; 93b3c <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x68c>	; fField4
         93b34:	eb68a4b7 	bl	1abce18 <TDocker::$WriteLong(unsigned long, unsigned long)>
         93b38:	ea0000ea 	b	93ee8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa38>
         93b3c:	74696d65 	strvcbt	r6, [r9], -#3429
         93b40:	e1a00004 	mov	r0, r4
         93b44:	eb68a4bc 	bl	1abce3c <TDocker::$WriteStoreNames(void)>
         93b48:	ea0000e6 	b	93ee8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa38>
         93b4c:	e1a00004 	mov	r0, r4
         93b50:	eb68397c 	bl	1aa2148 <TDocker::$SetSoupInfoFrame(void)>
         93b54:	e5941050 	ldr	r1, [r4, #80]	; fField80
         93b58:	e1a00004 	mov	r0, r4
         93b5c:	ea00000a 	b	93b8c <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x6dc>
         93b60:	e1a00004 	mov	r0, r4
         93b64:	eb68a4b3 	bl	1abce38 <TDocker::$WriteSoupNames(void)>
         93b68:	ea0000de 	b	93ee8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa38>
         93b6c:	e1a00004 	mov	r0, r4
         93b70:	e3a01001 	mov	r1, #1	; 0x1
         93b74:	eb68985c 	bl	1ab9cec <TDocker::$SetCurrentStore(unsigned char)>
         93b78:	ea0000da 	b	93ee8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa38>
         93b7c:	e1a00004 	mov	r0, r4
         93b80:	eb689c61 	bl	1abad0c <TDocker::$SetStoreToDefault(void)>
         93b84:	e1a00004 	mov	r0, r4
         93b88:	e3a01000 	mov	r1, #0	; 0x0
         93b8c:	eb68a4a6 	bl	1abce2c <TDocker::$WriteResult(long)>
         93b90:	ea0000d4 	b	93ee8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa38>
         93b94:	e1a00004 	mov	r0, r4
         93b98:	eb68a499 	bl	1abce04 <TDocker::$WriteDefaultStore(void)>
         93b9c:	ea0000d1 	b	93ee8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa38>
         93ba0:	e1a00004 	mov	r0, r4
         93ba4:	eb68984c 	bl	1ab9cdc <TDocker::$SendSoup(void)>
         93ba8:	ea0000ce 	b	93ee8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa38>
         93bac:	e1a00004 	mov	r0, r4
         93bb0:	eb685632 	bl	1aa9480 <TDocker::$BackupSoup(void)>
         93bb4:	ea0000cb 	b	93ee8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa38>
         93bb8:	e1a00004 	mov	r0, r4
         93bbc:	e3a01000 	mov	r1, #0	; 0x0
         93bc0:	eb68a492 	bl	1abce10 <TDocker::$WriteIndexDescription(unsigned char)>
         93bc4:	ea0000c7 	b	93ee8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa38>
         93bc8:	e1a00004 	mov	r0, r4
         93bcc:	eb68a497 	bl	1abce30 <TDocker::$WriteSoupIDs(void)>
         93bd0:	ea0000c4 	b	93ee8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa38>
         93bd4:	e1a00004 	mov	r0, r4
         93bd8:	eb67ef04 	bl	1a8f7f0 <TDocker::$DeleteEntries(void)>
         93bdc:	ea0000c1 	b	93ee8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa38>
         93be0:	e1a00004 	mov	r0, r4
         93be4:	e3a01001 	mov	r1, #1	; 0x1
         93be8:	eb685212 	bl	1aa8438 <TDocker::$AddEntry(unsigned char)>
         93bec:	ea0000bd 	b	93ee8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa38>
         93bf0:	e1a00004 	mov	r0, r4
         93bf4:	eb67de6e 	bl	1a8b5b4 <TDocker::$ChangeEntry(void)>
         93bf8:	ea0000ba 	b	93ee8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa38>
         93bfc:	e59f1008 	ldr	r1, [pc, #8]	; 93c0c <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x75c>
         93c00:	e1a00004 	mov	r0, r4
         93c04:	eb683115 	bl	1aa0060 <TDocker::$ReturnEntry(unsigned long)>
         93c08:	ea0000b6 	b	93ee8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa38>
         93c0c:	656e7472 	strvsb	r7, [lr, -#1138]!
         93c10:	e1a00004 	mov	r0, r4
         93c14:	eb67fb4e 	bl	1a92954 <TDocker::$EmptyOrDelete(unsigned long)>
         93c18:	ea0000b2 	b	93ee8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa38>
         93c1c:	e59410a4 	ldr	r1, [r4, #164]	; fField164
         93c20:	e3310003 	teq	r1, #3	; 0x3
         93c24:	1a000008 	bne	93c4c <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x79c>
         93c28:	e5991000 	ldr	r1, [r9]
         93c2c:	e5911000 	ldr	r1, [r1]
         93c30:	e2846014 	add	r6, r4, #20	; 0x14
         93c34:	e3310002 	teq	r1, #2	; 0x2
         93c38:	11a00009 	movne	r0, r9
         93c3c:	159f103c 	ldrne	r1, [pc, #3c]	; 93c80 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x7d0>
         93c40:	1b6ccdeb 	blne	1bc73f4 <$StoreGetSoup>
         93c44:	e5961000 	ldr	r1, [r6]
         93c48:	e5810000 	str	r0, [r1]
         93c4c:	e1a00004 	mov	r0, r4
         93c50:	eb682cc0 	bl	1a9ef58 <TDocker::$ReadPackage(void)>
         93c54:	e5941050 	ldr	r1, [r4, #80]	; fField80
         93c58:	e1a00004 	mov	r0, r4
         93c5c:	eb68a472 	bl	1abce2c <TDocker::$WriteResult(long)>
         93c60:	e59400a4 	ldr	r0, [r4, #164]	; fField164
         93c64:	e3300003 	teq	r0, #3	; 0x3
         93c68:	0a00009e 	beq	93ee8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa38>
         93c6c:	e594004c 	ldr	r0, [r4, #76]	; fField76
         93c70:	e330000a 	teq	r0, #10	; 0xa
         93c74:	1a00009b 	bne	93ee8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa38>
         93c78:	e5c58000 	strb	r8, [r5]
         93c7c:	ea00009c 	b	93ef4 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa44>
         93c80:	00681580 	rsbeq	r1, r8, r0, lsl #11
         93c84:	e1a00004 	mov	r0, r4
         93c88:	eb68627b 	bl	1aac67c <TDocker::$DoRestorePackage(void)>
         93c8c:	ea000095 	b	93ee8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa38>
         93c90:	e1a00004 	mov	r0, r4
         93c94:	eb68b514 	bl	1ac10ec <TDocker::$GetPackageInfo(void)>
         93c98:	ea000092 	b	93ee8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa38>
         93c9c:	e1a00004 	mov	r0, r4
         93ca0:	eb68a45f 	bl	1abce24 <TDocker::$WritePatches(void)>
         93ca4:	ea00008f 	b	93ee8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa38>
         93ca8:	e1a00004 	mov	r0, r4
         93cac:	eb689c17 	bl	1abad10 <TDocker::$SetTimeout(void)>
         93cb0:	ea00008c 	b	93ee8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa38>
         93cb4:	e1a00004 	mov	r0, r4
         93cb8:	eb68a461 	bl	1abce44 <TDocker::$WriteSyncOptions(void)>
         93cbc:	ea000089 	b	93ee8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa38>
         93cc0:	e1a00004 	mov	r0, r4
         93cc4:	eb689c0f 	bl	1abad08 <TDocker::$SetStoreSignature(void)>
         93cc8:	ea000086 	b	93ee8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa38>
         93ccc:	e1a00004 	mov	r0, r4
         93cd0:	eb689c0a 	bl	1abad00 <TDocker::$SetSoupSignature(void)>
         93cd4:	ea000083 	b	93ee8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa38>
         93cd8:	e1a00004 	mov	r0, r4
         93cdc:	eb686256 	bl	1aac63c <TDocker::$DoDisplaySlip(void)>
         93ce0:	ea000080 	b	93ee8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa38>
         93ce4:	e1a00004 	mov	r0, r4
         93ce8:	eb686256 	bl	1aac648 <TDocker::$DoGetPassword(void)>
         93cec:	ea00007d 	b	93ee8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa38>
         93cf0:	e1a00004 	mov	r0, r4
         93cf4:	eb68625f 	bl	1aac678 <TDocker::$DoRemovePackage(void)>
         93cf8:	ea00007a 	b	93ee8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa38>
         93cfc:	e5c58000 	strb	r8, [r5]
         93d00:	e1a00004 	mov	r0, r4
         93d04:	e3a02001 	mov	r2, #1	; 0x1
         93d08:	e59f1004 	ldr	r1, [pc, #4]	; 93d14 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x864>	; fField4
         93d0c:	eb68a43d 	bl	1abce08 <TEzPipeProtocol::$WriteDockerHeader(unsigned long, unsigned char)>
         93d10:	ea000074 	b	93ee8 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa38>
         93d14:	6f636161 	swivs	0x00636161
         93d18:	e24dd004 	sub	sp, sp, #4	; 0x4
         93d1c:	e1a0100d 	mov	r1, sp
         93d20:	e5940000 	ldr	r0, [r4]
         93d24:	eb6d4568 	bl	1be52cc <CPipe::$__rs(unsigned long &)>
         93d28:	e59d0000 	ldr	r0, [sp]
         93d2c:	e5840034 	str	r0, [r4, #52]	; fField52
         93d30:	ea00006b 	b	93ee4 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa34>
         93d34:	e24dd004 	sub	sp, sp, #4	; 0x4
         93d38:	e1a00004 	mov	r0, r4
         93d3c:	eb6893c4 	bl	1ab8c54 <TDocker::$RemoteQuery(void)>
         93d40:	ea000067 	b	93ee4 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa34>
         93d44:	e24dd004 	sub	sp, sp, #4	; 0x4
         93d48:	e1a00004 	mov	r0, r4
         93d4c:	eb6893b7 	bl	1ab8c30 <TDocker::$RemoteCursorGotoKey(void)>
         93d50:	ea000063 	b	93ee4 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa34>
         93d54:	e24dd004 	sub	sp, sp, #4	; 0x4
         93d58:	e1a00004 	mov	r0, r4
         93d5c:	eb6893b4 	bl	1ab8c34 <TDocker::$RemoteCursorMap(void)>
         93d60:	ea00005f 	b	93ee4 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa34>
         93d64:	e24dd004 	sub	sp, sp, #4	; 0x4
         93d68:	e1a00004 	mov	r0, r4
         93d6c:	eb6893ad 	bl	1ab8c28 <TDocker::$RemoteCursorEntry(void)>
         93d70:	ea00005b 	b	93ee4 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa34>
         93d74:	e24dd004 	sub	sp, sp, #4	; 0x4
         93d78:	e1a00004 	mov	r0, r4
         93d7c:	eb6893ad 	bl	1ab8c38 <TDocker::$RemoteCursorMove(void)>
         93d80:	ea000057 	b	93ee4 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa34>
         93d84:	e24dd004 	sub	sp, sp, #4	; 0x4
         93d88:	e1a00004 	mov	r0, r4
         93d8c:	eb6893aa 	bl	1ab8c3c <TDocker::$RemoteCursorNext(void)>
         93d90:	ea000053 	b	93ee4 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa34>
         93d94:	e24dd004 	sub	sp, sp, #4	; 0x4
         93d98:	e1a00004 	mov	r0, r4
         93d9c:	eb6893a7 	bl	1ab8c40 <TDocker::$RemoteCursorPrev(void)>
         93da0:	ea00004f 	b	93ee4 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa34>
         93da4:	e24dd004 	sub	sp, sp, #4	; 0x4
         93da8:	e1a00004 	mov	r0, r4
         93dac:	eb68939c 	bl	1ab8c24 <TDocker::$RemoteCursorCountEntries(void)>
         93db0:	ea00004b 	b	93ee4 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa34>
         93db4:	e24dd004 	sub	sp, sp, #4	; 0x4
         93db8:	e1a00004 	mov	r0, r4
         93dbc:	eb6893a2 	bl	1ab8c4c <TDocker::$RemoteCursorWhichEnd(void)>
         93dc0:	ea000047 	b	93ee4 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa34>
         93dc4:	e24dd004 	sub	sp, sp, #4	; 0x4
         93dc8:	e1a00004 	mov	r0, r4
         93dcc:	eb689396 	bl	1ab8c2c <TDocker::$RemoteCursorFree(void)>
         93dd0:	ea000043 	b	93ee4 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa34>
         93dd4:	e24dd004 	sub	sp, sp, #4	; 0x4
         93dd8:	e1a00004 	mov	r0, r4
         93ddc:	eb688f82 	bl	1ab7bec <TDocker::$ReadProtocolExtension(void)>
         93de0:	ea000002 	b	93df0 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x940>
         93de4:	e24dd004 	sub	sp, sp, #4	; 0x4
         93de8:	e1a00004 	mov	r0, r4
         93dec:	eb688f80 	bl	1ab7bf4 <TDocker::$ReadRemoveProtocolExtension(void)>
         93df0:	e5941050 	ldr	r1, [r4, #80]	; fField80
         93df4:	e1a00004 	mov	r0, r4
         93df8:	eb68a40b 	bl	1abce2c <TDocker::$WriteResult(long)>
         93dfc:	ea000038 	b	93ee4 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa34>
         93e00:	e24dd004 	sub	sp, sp, #4	; 0x4
         93e04:	e1a00004 	mov	r0, r4
         93e08:	eb688f7a 	bl	1ab7bf8 <TDocker::$ReadResultString(void)>
         93e0c:	e5840050 	str	r0, [r4, #80]	; fField80
         93e10:	ea000033 	b	93ee4 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa34>
         93e14:	e24dd004 	sub	sp, sp, #4	; 0x4
         93e18:	e1a00004 	mov	r0, r4
         93e1c:	e3a01001 	mov	r1, #1	; 0x1
         93e20:	ea000002 	b	93e30 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0x980>
         93e24:	e24dd004 	sub	sp, sp, #4	; 0x4
         93e28:	e1a00004 	mov	r0, r4
         93e2c:	e3a01000 	mov	r1, #0	; 0x0
         93e30:	eb68ac4c 	bl	1abef68 <TDocker::$CallFunction(unsigned char)>
         93e34:	ea00002a 	b	93ee4 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa34>
         93e38:	e24dd008 	sub	sp, sp, #8	; 0x8
         93e3c:	e1a01009 	mov	r1, r9
         93e40:	e1a00004 	mov	r0, r4
         93e44:	eb688f69 	bl	1ab7bf0 <TDocker::$ReadRef(RefVar const &)>
         93e48:	eb6cb8bf 	bl	1bc214c <$AllocateRefHandle(long)>
         93e4c:	e58d0000 	str	r0, [sp]
         93e50:	e1a00009 	mov	r0, r9
         93e54:	e1a0100d 	mov	r1, sp
         93e58:	eb6cd16e 	bl	1bc8418 <$StoreSetName>
         93e5c:	e1a00004 	mov	r0, r4
         93e60:	e3a01000 	mov	r1, #0	; 0x0
         93e64:	eb68a3f0 	bl	1abce2c <TDocker::$WriteResult(long)>
         93e68:	e59d0000 	ldr	r0, [sp]
         93e6c:	eb6cbcd2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         93e70:	e28dd004 	add	sp, sp, #4	; 0x4
         93e74:	ea00001a 	b	93ee4 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa34>
         93e78:	e24dd004 	sub	sp, sp, #4	; 0x4
         93e7c:	e1a00004 	mov	r0, r4
         93e80:	eb6840e3 	bl	1aa4214 <TDocker::$TestMessage(void)>
         93e84:	ea000016 	b	93ee4 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa34>
         93e88:	e24dd004 	sub	sp, sp, #4	; 0x4
         93e8c:	e1a00004 	mov	r0, r4
         93e90:	eb689bb6 	bl	1abad70 <TDocker::$TestRefMessage(void)>
         93e94:	ea000012 	b	93ee4 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa34>
         93e98:	e24dd004 	sub	sp, sp, #4	; 0x4
         93e9c:	e2841044 	add	r1, r4, #68	; 0x44
         93ea0:	e5940000 	ldr	r0, [r4]
         93ea4:	eb6d4508 	bl	1be52cc <CPipe::$__rs(unsigned long &)>
         93ea8:	e59f0010 	ldr	r0, [pc, #10]	; 93ec0 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa10>
         93eac:	e5900000 	ldr	r0, [r0]
         93eb0:	e3a02000 	mov	r2, #0	; 0x0
         93eb4:	e59f1008 	ldr	r1, [pc, #8]	; 93ec4 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa14>
         93eb8:	eb6d3cb7 	bl	1be319c <$Throw>
         93ebc:	ea000008 	b	93ee4 <TDocker::ProcessCommand(unsigned char &, unsigned char &)+0xa34>
         93ec0:	003712d0 	ldreqsb	r1, [r7], -r0
         93ec4:	ffff9297 	swinv	0x00ff9297
         93ec8:	e24dd004 	sub	sp, sp, #4	; 0x4
         93ecc:	e1a00004 	mov	r0, r4
         93ed0:	eb6802de 	bl	1a94a50 <TDocker::$FlushCommand(void)>
         93ed4:	e5942044 	ldr	r2, [r4, #68]	; fField68
         93ed8:	e1a00004 	mov	r0, r4
         93edc:	e1a01007 	mov	r1, r7
         93ee0:	eb68a3cc 	bl	1abce18 <TDocker::$WriteLong(unsigned long, unsigned long)>
         93ee4:	e28dd004 	add	sp, sp, #4	; 0x4
         93ee8:	e5d50000 	ldrb	r0, [r5]
         93eec:	e3300000 	teq	r0, #0	; 0x0
         93ef0:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         93ef4:	e5c4802f 	strb	r8, [r4, #47]	; fField47
         93ef8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::GetState(void)
 * Address: 00093efc
 */
TDocker::GetState(void) {
    /*
         93efc:	e1a0c00d 	mov	ip, sp
         93f00:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         93f04:	e24cb004 	sub	fp, ip, #4	; 0x4
         93f08:	e1a04000 	mov	r4, r0
         93f0c:	e24dd010 	sub	sp, sp, #16	; 0x10
         93f10:	eb6cb88a 	bl	1bc2140 <$AllocateFrame(void)>
         93f14:	eb6cb88c 	bl	1bc214c <$AllocateRefHandle(long)>
         93f18:	e58d000c 	str	r0, [sp, #12]	; fField12
         93f1c:	e594004c 	ldr	r0, [r4, #76]	; fField76
         93f20:	e1a00100 	mov	r0, r0, lsl #2
         93f24:	eb6cb888 	bl	1bc214c <$AllocateRefHandle(long)>
         93f28:	e58d0000 	str	r0, [sp]
         93f2c:	e1a0200d 	mov	r2, sp
         93f30:	e59f10a8 	ldr	r1, [pc, #a8]	; 93fe0 <TDocker::GetState(void)+0xe4>
         93f34:	e28d000c 	add	r0, sp, #12	; 0xc
         93f38:	eb6cc90a 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         93f3c:	e59d0000 	ldr	r0, [sp]
         93f40:	eb6cbc9d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         93f44:	e2842010 	add	r2, r4, #16	; 0x10
         93f48:	e59f1094 	ldr	r1, [pc, #94]	; 93fe4 <TDocker::GetState(void)+0xe8>
         93f4c:	e28d000c 	add	r0, sp, #12	; 0xc
         93f50:	eb6cc904 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         93f54:	e2842014 	add	r2, r4, #20	; 0x14
         93f58:	e59f1088 	ldr	r1, [pc, #88]	; 93fe8 <TDocker::GetState(void)+0xec>	; fField88
         93f5c:	e28d000c 	add	r0, sp, #12	; 0xc
         93f60:	eb6cc900 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         93f64:	e59400a4 	ldr	r0, [r4, #164]	; fField164
         93f68:	e1a00100 	mov	r0, r0, lsl #2
         93f6c:	eb6cb876 	bl	1bc214c <$AllocateRefHandle(long)>
         93f70:	e58d0004 	str	r0, [sp, #4]	; fField4
         93f74:	e28d2004 	add	r2, sp, #4	; 0x4
         93f78:	e59f106c 	ldr	r1, [pc, #6c]	; 93fec <TDocker::GetState(void)+0xf0>
         93f7c:	e28d000c 	add	r0, sp, #12	; 0xc
         93f80:	eb6cc8f8 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         93f84:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         93f88:	eb6cbc8b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         93f8c:	e5d400b2 	ldrb	r0, [r4, #178]	; fField178
         93f90:	e3300000 	teq	r0, #0	; 0x0
         93f94:	03a00002 	moveq	r0, #2	; 0x2
         93f98:	13a0001a 	movne	r0, #26	; 0x1a
         93f9c:	eb6cb86a 	bl	1bc214c <$AllocateRefHandle(long)>
         93fa0:	e58d0008 	str	r0, [sp, #8]
         93fa4:	e28d2008 	add	r2, sp, #8	; 0x8
         93fa8:	e59f1040 	ldr	r1, [pc, #40]	; 93ff0 <TDocker::GetState(void)+0xf4>	; fField40
         93fac:	e28d000c 	add	r0, sp, #12	; 0xc
         93fb0:	eb6cc8ec 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         93fb4:	e59d0008 	ldr	r0, [sp, #8]
         93fb8:	eb6cbc7f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         93fbc:	e2842088 	add	r2, r4, #136	; 0x88
         93fc0:	e59f102c 	ldr	r1, [pc, #2c]	; 93ff4 <TDocker::GetState(void)+0xf8>
         93fc4:	e28d000c 	add	r0, sp, #12	; 0xc
         93fc8:	eb6cc8e6 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         93fcc:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         93fd0:	e5904000 	ldr	r4, [r0]
         93fd4:	eb6cbc78 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         93fd8:	e1a00004 	mov	r0, r4
         93fdc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         93fe0:	00684068 	rsbeq	r4, r8, r8, rrx
         93fe4:	00684868 	rsbeq	r4, r8, r8, ror #16
         93fe8:	00684738 	rsbeq	r4, r8, r8, lsr r7
         93fec:	00684828 	rsbeq	r4, r8, r8, lsr #16
         93ff0:	00684508 	rsbeq	r4, r8, r8, lsl #10
         93ff4:	006828e0 	rsbeq	r2, r8, r0, ror #17
    */
}

/**
 * Symbol: TDocker::GetSyncChanges(void)
 * Address: 00093ff8
 */
TDocker::GetSyncChanges(void) {
    /*
         93ff8:	e5900040 	ldr	r0, [r0, #64]	; fField64
         93ffc:	e5900000 	ldr	r0, [r0]
         94000:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDocker::SetState(eDockingState)
 * Address: 00094004
 */
TDocker::SetState(eDockingState) {
    /*
         94004:	e5a010a4 	str	r1, [r0, #164]!	; fField164
         94008:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDocker::GetPlatform(void)
 * Address: 0009400c
 */
TDocker::GetPlatform(void) {
    /*
         9400c:	e59000a8 	ldr	r0, [r0, #168]	; fField168
         94010:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDocker::BytesAvailable(unsigned char)
 * Address: 00094014
 */
TDocker::BytesAvailable(unsigned char) {
    /*
         94014:	e1a0c00d 	mov	ip, sp
         94018:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         9401c:	e24cb004 	sub	fp, ip, #4	; 0x4
         94020:	e1a04000 	mov	r4, r0
         94024:	e20150ff 	and	r5, r1, #255	; 0xff
         94028:	e5d000b3 	ldrb	r0, [r0, #179]	; fField179
         9402c:	e3a06000 	mov	r6, #0	; 0x0
         94030:	e3300000 	teq	r0, #0	; 0x0
         94034:	11a00006 	movne	r0, r6
         94038:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         9403c:	e3a00000 	mov	r0, #0	; 0x0
         94040:	e3350000 	teq	r5, #0	; 0x0
         94044:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         94048:	1a000003 	bne	9405c <TDocker::BytesAvailable(unsigned char)+0x48>
         9404c:	e1a00004 	mov	r0, r4
         94050:	eb689f61 	bl	1abbddc <TDocker::$WaitAndLockTDocker(void)>
         94054:	e3300000 	teq	r0, #0	; 0x0
         94058:	0a00000f 	beq	9409c <TDocker::BytesAvailable(unsigned char)+0x88>
         9405c:	e52d606c 	str	r6, [sp, -#108]!	; fField108
         94060:	e28d0008 	add	r0, sp, #8	; 0x8
         94064:	eb6c7a42 	bl	1bb2974 <$setjmp>
         94068:	e3300000 	teq	r0, #0	; 0x0
         9406c:	1a000004 	bne	94084 <TDocker::BytesAvailable(unsigned char)+0x70>
         94070:	e1a0000d 	mov	r0, sp
         94074:	eb6d3000 	bl	1be007c <$AddExceptionHandler>
         94078:	e5940000 	ldr	r0, [r4]
         9407c:	eb6c8ec3 	bl	1bb7b90 <TEzEndpointPipe::$BytesAvailable(void)>
         94080:	e58d006c 	str	r0, [sp, #108]	; fField108
         94084:	e1a0000d 	mov	r0, sp
         94088:	eb6d340a 	bl	1be10b8 <$ExitHandler>
         9408c:	e28dd06c 	add	sp, sp, #108	; 0x6c
         94090:	e3350000 	teq	r5, #0	; 0x0
         94094:	01a00004 	moveq	r0, r4
         94098:	0b689f41 	bleq	1abbda4 <TDocker::$UnlockTDocker(void)>
         9409c:	e49d0004 	ldr	r0, [sp], #4	; fField4
         940a0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::GetCurrentStore(void)
 * Address: 000940f8
 */
TDocker::GetCurrentStore(void) {
    /*
         940f8:	e5900010 	ldr	r0, [r0, #16]	; fField16
         940fc:	e5900000 	ldr	r0, [r0]
         94100:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDocker::BroadcastChanges(void)
 * Address: 00094104
 */
TDocker::BroadcastChanges(void) {
    /*
         94104:	e1a0c00d 	mov	ip, sp
         94108:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         9410c:	e24cb004 	sub	fp, ip, #4	; 0x4
         94110:	e1a04000 	mov	r4, r0
         94114:	e2800040 	add	r0, r0, #64	; 0x40
         94118:	e1a05000 	mov	r5, r0
         9411c:	e5900000 	ldr	r0, [r0]
         94120:	e5900000 	ldr	r0, [r0]
         94124:	e3300002 	teq	r0, #2	; 0x2
         94128:	0a000020 	beq	941b0 <TDocker::BroadcastChanges(void)+0xac>
         9412c:	e3a00000 	mov	r0, #0	; 0x0
         94130:	e52d006c 	str	r0, [sp, -#108]!	; fField108
         94134:	e28d0008 	add	r0, sp, #8	; 0x8
         94138:	eb6c7a0d 	bl	1bb2974 <$setjmp>
         9413c:	e3300000 	teq	r0, #0	; 0x0
         94140:	e1a0000d 	mov	r0, sp
         94144:	1a000010 	bne	9418c <TDocker::BroadcastChanges(void)+0x88>
         94148:	eb6d2fcb 	bl	1be007c <$AddExceptionHandler>
         9414c:	e24dd004 	sub	sp, sp, #4	; 0x4
         94150:	e59400a4 	ldr	r0, [r4, #164]	; fField164
         94154:	e3300003 	teq	r0, #3	; 0x3
         94158:	13a00002 	movne	r0, #2	; 0x2
         9415c:	03a0001a 	moveq	r0, #26	; 0x1a
         94160:	eb6cb7f9 	bl	1bc214c <$AllocateRefHandle(long)>
         94164:	e58d0000 	str	r0, [sp]
         94168:	e1a0100d 	mov	r1, sp
         9416c:	e1a02005 	mov	r2, r5
         94170:	e59f0010 	ldr	r0, [pc, #10]	; 94188 <TDocker::BroadcastChanges(void)+0x84>
         94174:	eb6dafaa 	bl	1c00024 <$NSCallGlobalFn__FRC6RefVarN21>
         94178:	e59d0000 	ldr	r0, [sp]
         9417c:	eb6cbc0e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         94180:	e28dd004 	add	sp, sp, #4	; 0x4
         94184:	ea000003 	b	94198 <TDocker::BroadcastChanges(void)+0x94>
         94188:	006825d8 	ldreqd	r2, [r8], -#88	; fField88
         9418c:	e2801060 	add	r1, r0, #96	; 0x60
         94190:	e1a00004 	mov	r0, r4
         94194:	eb688e85 	bl	1ab7bb0 <TDocker::$ProcessException(Exception *)>
         94198:	e1a0000d 	mov	r0, sp
         9419c:	eb6d33c5 	bl	1be10b8 <$ExitHandler>
         941a0:	e28dd06c 	add	sp, sp, #108	; 0x6c
         941a4:	e1a00004 	mov	r0, r4
         941a8:	e3a01000 	mov	r1, #0	; 0x0
         941ac:	eb6858f0 	bl	1aaa574 <TDocker::$CleanUpIfError(unsigned char)>
         941b0:	e5b40050 	ldr	r0, [r4, #80]!	; fField80
         941b4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::ProcessException(Exception *)
 * Address: 000941b8
 */
TDocker::ProcessException(Exception *) {
    /*
         941b8:	e1a0c00d 	mov	ip, sp
         941bc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         941c0:	e24cb004 	sub	fp, ip, #4	; 0x4
         941c4:	e1a05000 	mov	r5, r0
         941c8:	e1a04001 	mov	r4, r1
         941cc:	e59f0048 	ldr	r0, [pc, #48]	; 9421c <TDocker::ProcessException(Exception *)+0x64>	; fField48
         941d0:	e5901000 	ldr	r1, [r0]
         941d4:	e5940000 	ldr	r0, [r4]
         941d8:	eb6d3bed 	bl	1be3194 <$Subexception>
         941dc:	e3300000 	teq	r0, #0	; 0x0
         941e0:	1a00000b 	bne	94214 <TDocker::ProcessException(Exception *)+0x5c>
         941e4:	e59f0034 	ldr	r0, [pc, #34]	; 94220 <TDocker::ProcessException(Exception *)+0x68>
         941e8:	e5901000 	ldr	r1, [r0]
         941ec:	e5940000 	ldr	r0, [r4]
         941f0:	eb6d3be7 	bl	1be3194 <$Subexception>
         941f4:	e3300000 	teq	r0, #0	; 0x0
         941f8:	1a000005 	bne	94214 <TDocker::ProcessException(Exception *)+0x5c>
         941fc:	e59f0020 	ldr	r0, [pc, #20]	; 94224 <TDocker::ProcessException(Exception *)+0x6c>	; fField20
         94200:	e5901000 	ldr	r1, [r0]
         94204:	e5940000 	ldr	r0, [r4]
         94208:	eb6d3be1 	bl	1be3194 <$Subexception>
         9420c:	e3300000 	teq	r0, #0	; 0x0
         94210:	0a000004 	beq	94228 <TDocker::ProcessException(Exception *)+0x70>
         94214:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
         94218:	ea00001d 	b	94294 <TDocker::ProcessException(Exception *)+0xdc>
         9421c:	00371324 	eoreqs	r1, r7, r4, lsr #6
         94220:	003712d0 	ldreqsb	r1, [r7], -r0
         94224:	00371318 	eoreqs	r1, r7, r8, lsl r3
         94228:	e59f004c 	ldr	r0, [pc, #4c]	; 9427c <TDocker::ProcessException(Exception *)+0xc4>	; fField4
         9422c:	e5901000 	ldr	r1, [r0]
         94230:	e5940000 	ldr	r0, [r4]
         94234:	eb6d3bd6 	bl	1be3194 <$Subexception>
         94238:	e3300000 	teq	r0, #0	; 0x0
         9423c:	1a00000b 	bne	94270 <TDocker::ProcessException(Exception *)+0xb8>
         94240:	e59f0038 	ldr	r0, [pc, #38]	; 94280 <TDocker::ProcessException(Exception *)+0xc8>
         94244:	e5901000 	ldr	r1, [r0]
         94248:	e5940000 	ldr	r0, [r4]
         9424c:	eb6d3bd0 	bl	1be3194 <$Subexception>
         94250:	e3300000 	teq	r0, #0	; 0x0
         94254:	1a000005 	bne	94270 <TDocker::ProcessException(Exception *)+0xb8>
         94258:	e59f0024 	ldr	r0, [pc, #24]	; 94284 <TDocker::ProcessException(Exception *)+0xcc>	; fField24
         9425c:	e5901000 	ldr	r1, [r0]
         94260:	e5940000 	ldr	r0, [r4]
         94264:	eb6d3bca 	bl	1be3194 <$Subexception>
         94268:	e3300000 	teq	r0, #0	; 0x0
         9426c:	0a000005 	beq	94288 <TDocker::ProcessException(Exception *)+0xd0>
         94270:	e1a00004 	mov	r0, r4
         94274:	eb686505 	bl	1aad690 <$DockerFramesException(Exception *)>
         94278:	ea000005 	b	94294 <TDocker::ProcessException(Exception *)+0xdc>
         9427c:	00371308 	eoreqs	r1, r7, r8, lsl #6
         94280:	00380880 	eoreqs	r0, r8, r0, lsl #17
         94284:	003712d4 	ldreqsb	r1, [r7], -r4
         94288:	e5950050 	ldr	r0, [r5, #80]	; fField80
         9428c:	e3300000 	teq	r0, #0	; 0x0
         94290:	03e00000 	mvneq	r0, #0	; 0x0
         94294:	e5850050 	str	r0, [r5, #80]	; fField80
         94298:	e5950050 	ldr	r0, [r5, #80]	; fField80
         9429c:	e280cb23 	add	ip, r0, #35840	; 0x8c00
         942a0:	e37c00a6 	cmn	ip, #166	; 0xa6
         942a4:	059f0020 	ldreq	r0, [pc, #20]	; 942cc <TDocker::ProcessException(Exception *)+0x114>	; fField20
         942a8:	0a000005 	beq	942c4 <TDocker::ProcessException(Exception *)+0x10c>
         942ac:	e280cc27 	add	ip, r0, #9984	; 0x2700
         942b0:	e37c0037 	cmn	ip, #55	; 0x37
         942b4:	1280cb23 	addne	ip, r0, #35840	; 0x8c00
         942b8:	137c00a3 	cmnne	ip, #163	; 0xa3
         942bc:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         942c0:	e59f0008 	ldr	r0, [pc, #8]	; 942d0 <TDocker::ProcessException(Exception *)+0x118>
         942c4:	e5a50050 	str	r0, [r5, #80]!	; fField80
         942c8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         942cc:	ffffc177 	swinv	0x00ffc177
         942d0:	ffffc17b 	swinv	0x00ffc17b
    */
}

/**
 * Symbol: TDocker::Delay(unsigned long)
 * Address: 000942d4
 */
TDocker::Delay(unsigned long) {
    /*
         942d4:	e1a0c00d 	mov	ip, sp
         942d8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         942dc:	e24cb004 	sub	fp, ip, #4	; 0x4
         942e0:	e1a04001 	mov	r4, r1
         942e4:	eb6d798d 	bl	1bf2920 <$Ticks(void)>
         942e8:	e1a05000 	mov	r5, r0
         942ec:	eb6d798b 	bl	1bf2920 <$Ticks(void)>
         942f0:	e0400005 	sub	r0, r0, r5
         942f4:	e1500004 	cmp	r0, r4
         942f8:	291ba830 	ldmcsdb	fp, {r4, r5, fp, sp, pc}
         942fc:	eb6d7987 	bl	1bf2920 <$Ticks(void)>
         94300:	e0400005 	sub	r0, r0, r5
         94304:	e1500004 	cmp	r0, r4
         94308:	3afffffb 	bcc	942fc <TDocker::Delay(unsigned long)+0x28>
         9430c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::WaitForDisconnect(void)
 * Address: 00094310
 */
TDocker::WaitForDisconnect(void) {
    /*
         94310:	e3a010b4 	mov	r1, #180	; 0xb4
         94314:	ea685cb7 	b	1aab5f8 <TDocker::$Delay(unsigned long)>
    */
}

/**
 * Symbol: TDocker::CleanUpIfError(unsigned char)
 * Address: 00094318
 */
TDocker::CleanUpIfError(unsigned char) {
    /*
         94318:	e1a0c00d 	mov	ip, sp
         9431c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         94320:	e24cb004 	sub	fp, ip, #4	; 0x4
         94324:	e1a04000 	mov	r4, r0
         94328:	e20110ff 	and	r1, r1, #255	; 0xff
         9432c:	e5900050 	ldr	r0, [r0, #80]	; fField80
         94330:	e3300000 	teq	r0, #0	; 0x0
         94334:	1280cc6d 	addne	ip, r0, #27904	; 0x6d00
         94338:	137c0077 	cmnne	ip, #119	; 0x77
         9433c:	1280cdfa 	addne	ip, r0, #16000	; 0x3e80
         94340:	137c0005 	cmnne	ip, #5	; 0x5
         94344:	1a000001 	bne	94350 <TDocker::CleanUpIfError(unsigned char)+0x38>
         94348:	e3310000 	teq	r1, #0	; 0x0
         9434c:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         94350:	e3a01001 	mov	r1, #1	; 0x1
         94354:	e5c410b3 	strb	r1, [r4, #179]	; fField179
         94358:	e3300000 	teq	r0, #0	; 0x0
         9435c:	15941000 	ldrne	r1, [r4]
         94360:	13310000 	teqne	r1, #0	; 0x0
         94364:	15d410b1 	ldrneb	r1, [r4, #177]	; fField177
         94368:	13310000 	teqne	r1, #0	; 0x0
         9436c:	1280cdfa 	addne	ip, r0, #16000	; 0x3e80
         94370:	137c0009 	cmnne	ip, #9	; 0x9
         94374:	0a00000f 	beq	943b8 <TDocker::CleanUpIfError(unsigned char)+0xa0>
         94378:	e3a00000 	mov	r0, #0	; 0x0
         9437c:	e52d006c 	str	r0, [sp, -#108]!	; fField108
         94380:	e28d0008 	add	r0, sp, #8	; 0x8
         94384:	eb6c797a 	bl	1bb2974 <$setjmp>
         94388:	e3300000 	teq	r0, #0	; 0x0
         9438c:	1a000006 	bne	943ac <TDocker::CleanUpIfError(unsigned char)+0x94>
         94390:	e1a0000d 	mov	r0, sp
         94394:	eb6d2f38 	bl	1be007c <$AddExceptionHandler>
         94398:	e5941050 	ldr	r1, [r4, #80]	; fField80
         9439c:	e1a00004 	mov	r0, r4
         943a0:	eb68a2a1 	bl	1abce2c <TDocker::$WriteResult(long)>
         943a4:	e1a00004 	mov	r0, r4
         943a8:	eb689e8c 	bl	1abbde0 <TDocker::$WaitForDisconnect(void)>
         943ac:	e1a0000d 	mov	r0, sp
         943b0:	eb6d3340 	bl	1be10b8 <$ExitHandler>
         943b4:	e28dd06c 	add	sp, sp, #108	; 0x6c
         943b8:	e1a00004 	mov	r0, r4
         943bc:	eb689e6f 	bl	1abbd80 <TDocker::$TossDataStructures(void)>
         943c0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::CleanUpIfStopping(unsigned char)
 * Address: 000943c4
 */
TDocker::CleanUpIfStopping(unsigned char) {
    /*
         943c4:	e1a0c00d 	mov	ip, sp
         943c8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         943cc:	e24cb004 	sub	fp, ip, #4	; 0x4
         943d0:	e1a04000 	mov	r4, r0
         943d4:	e20150ff 	and	r5, r1, #255	; 0xff
         943d8:	e5d000af 	ldrb	r0, [r0, #175]	; fField175
         943dc:	e3300000 	teq	r0, #0	; 0x0
         943e0:	0a000047 	beq	94504 <TDocker::CleanUpIfStopping(unsigned char)+0x140>
         943e4:	e3350000 	teq	r5, #0	; 0x0
         943e8:	1a000045 	bne	94504 <TDocker::CleanUpIfStopping(unsigned char)+0x140>
         943ec:	e1a00004 	mov	r0, r4
         943f0:	eb693b72 	bl	1ae31c0 <TDocker::$WaitForStopToComplete(void)>
         943f4:	e5940050 	ldr	r0, [r4, #80]	; fField80
         943f8:	e59f9068 	ldr	r9, [pc, #68]	; 94468 <TDocker::CleanUpIfStopping(unsigned char)+0xa4>	; fField68
         943fc:	e3300000 	teq	r0, #0	; 0x0
         94400:	11300009 	teqne	r0, r9
         94404:	1a00003e 	bne	94504 <TDocker::CleanUpIfStopping(unsigned char)+0x140>
         94408:	e594104c 	ldr	r1, [r4, #76]	; fField76
         9440c:	e3510009 	cmp	r1, #9	; 0x9
         94410:	93a05001 	movls	r5, #1	; 0x1
         94414:	9a00003a 	bls	94504 <TDocker::CleanUpIfStopping(unsigned char)+0x140>
         94418:	e3300000 	teq	r0, #0	; 0x0
         9441c:	11a09000 	movne	r9, r0
         94420:	e3a00000 	mov	r0, #0	; 0x0
         94424:	e5840050 	str	r0, [r4, #80]	; fField80
         94428:	e52d006c 	str	r0, [sp, -#108]!	; fField108
         9442c:	e28d0008 	add	r0, sp, #8	; 0x8
         94430:	eb6c794f 	bl	1bb2974 <$setjmp>
         94434:	e3300000 	teq	r0, #0	; 0x0
         94438:	e1a0000d 	mov	r0, sp
         9443c:	1a000027 	bne	944e0 <TDocker::CleanUpIfStopping(unsigned char)+0x11c>
         94440:	eb6d2f0d 	bl	1be007c <$AddExceptionHandler>
         94444:	e3a0a001 	mov	sl, #1	; 0x1
         94448:	e1a00004 	mov	r0, r4
         9444c:	e3a02001 	mov	r2, #1	; 0x1
         94450:	e59f1014 	ldr	r1, [pc, #14]	; 9446c <TDocker::CleanUpIfStopping(unsigned char)+0xa8>
         94454:	eb68a26b 	bl	1abce08 <TEzPipeProtocol::$WriteDockerHeader(unsigned long, unsigned char)>
         94458:	e3a07001 	mov	r7, #1	; 0x1
         9445c:	e2846048 	add	r6, r4, #72	; 0x48
         94460:	e2848044 	add	r8, r4, #68	; 0x44
         94464:	ea000010 	b	944ac <TDocker::CleanUpIfStopping(unsigned char)+0xe8>
         94468:	ffffc17b 	swinv	0x00ffc17b
         9446c:	6f706361 	swivs	0x00706361
         94470:	e3370000 	teq	r7, #0	; 0x0
         94474:	e1a02006 	mov	r2, r6
         94478:	e1a01008 	mov	r1, r8
         9447c:	e1a00004 	mov	r0, r4
         94480:	0a000002 	beq	94490 <TDocker::CleanUpIfStopping(unsigned char)+0xcc>
         94484:	eb68b309 	bl	1ac10b0 <TEzPipeProtocol::$FindDockerHeader(unsigned long &, unsigned long &)>
         94488:	e3a07000 	mov	r7, #0	; 0x0
         9448c:	ea000000 	b	94494 <TDocker::CleanUpIfStopping(unsigned char)+0xd0>
         94490:	eb688dd0 	bl	1ab7bd8 <TEzPipeProtocol::$ReadDockerHeader(unsigned long &, unsigned long &)>
         94494:	e5940044 	ldr	r0, [r4, #68]	; fField68
         94498:	e59fc038 	ldr	ip, [pc, #38]	; 944d8 <TDocker::CleanUpIfStopping(unsigned char)+0x114>
         9449c:	e130000c 	teq	r0, ip
         944a0:	03a05001 	moveq	r5, #1	; 0x1
         944a4:	e1a00004 	mov	r0, r4
         944a8:	eb680168 	bl	1a94a50 <TDocker::$FlushCommand(void)>
         944ac:	e5940050 	ldr	r0, [r4, #80]	; fField80
         944b0:	e3300000 	teq	r0, #0	; 0x0
         944b4:	1a000005 	bne	944d0 <TDocker::CleanUpIfStopping(unsigned char)+0x10c>
         944b8:	e5940044 	ldr	r0, [r4, #68]	; fField68
         944bc:	e59fc018 	ldr	ip, [pc, #18]	; 944dc <TDocker::CleanUpIfStopping(unsigned char)+0x118>
         944c0:	e130000c 	teq	r0, ip
         944c4:	0a000001 	beq	944d0 <TDocker::CleanUpIfStopping(unsigned char)+0x10c>
         944c8:	e3350000 	teq	r5, #0	; 0x0
         944cc:	0affffe7 	beq	94470 <TDocker::CleanUpIfStopping(unsigned char)+0xac>
         944d0:	e5c4a02f 	strb	sl, [r4, #47]	; fField47
         944d4:	ea000004 	b	944ec <TDocker::CleanUpIfStopping(unsigned char)+0x128>
         944d8:	64697363 	strvsbt	r7, [r9], -#867
         944dc:	6f636161 	swivs	0x00636161
         944e0:	e2801060 	add	r1, r0, #96	; 0x60
         944e4:	e1a00004 	mov	r0, r4
         944e8:	eb688db0 	bl	1ab7bb0 <TDocker::$ProcessException(Exception *)>
         944ec:	e1a0000d 	mov	r0, sp
         944f0:	eb6d32f0 	bl	1be10b8 <$ExitHandler>
         944f4:	e28dd06c 	add	sp, sp, #108	; 0x6c
         944f8:	e5940050 	ldr	r0, [r4, #80]	; fField80
         944fc:	e3300000 	teq	r0, #0	; 0x0
         94500:	05a49050 	streq	r9, [r4, #80]!	; fField80
         94504:	e1a00005 	mov	r0, r5
         94508:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::AbortConnection(long)
 * Address: 0009450c
 */
TDocker::AbortConnection(long) {
    /*
         9450c:	e1a0c00d 	mov	ip, sp
         94510:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         94514:	e24cb004 	sub	fp, ip, #4	; 0x4
         94518:	e1a04000 	mov	r4, r0
         9451c:	e5801050 	str	r1, [r0, #80]	; fField80
         94520:	e5900000 	ldr	r0, [r0]
         94524:	e3a05001 	mov	r5, #1	; 0x1
         94528:	e3300000 	teq	r0, #0	; 0x0
         9452c:	0a00000e 	beq	9456c <TDocker::AbortConnection(long)+0x60>
         94530:	e3a00000 	mov	r0, #0	; 0x0
         94534:	e52d006c 	str	r0, [sp, -#108]!	; fField108
         94538:	e28d0008 	add	r0, sp, #8	; 0x8
         9453c:	eb6c790c 	bl	1bb2974 <$setjmp>
         94540:	e3300000 	teq	r0, #0	; 0x0
         94544:	1a000005 	bne	94560 <TDocker::AbortConnection(long)+0x54>
         94548:	e1a0000d 	mov	r0, sp
         9454c:	eb6d2eca 	bl	1be007c <$AddExceptionHandler>
         94550:	e5940000 	ldr	r0, [r4]
         94554:	e5901000 	ldr	r1, [r0]
         94558:	e1a0e00f 	mov	lr, pc
         9455c:	e281f038 	add	pc, r1, #56	; 0x38
         94560:	e1a0000d 	mov	r0, sp
         94564:	eb6d32d3 	bl	1be10b8 <$ExitHandler>
         94568:	e28dd06c 	add	sp, sp, #108	; 0x6c
         9456c:	e1a00004 	mov	r0, r4
         94570:	e3a01001 	mov	r1, #1	; 0x1
         94574:	eb6857fe 	bl	1aaa574 <TDocker::$CleanUpIfError(unsigned char)>
         94578:	e1a00005 	mov	r0, r5
         9457c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::ReadInitiateDocking(void)
 * Address: 00094580
 */
TDocker::ReadInitiateDocking(void) {
    /*
         94580:	e1a0c00d 	mov	ip, sp
         94584:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         94588:	e24cb004 	sub	fp, ip, #4	; 0x4
         9458c:	e1a04000 	mov	r4, r0
         94590:	e5900048 	ldr	r0, [r0, #72]	; fField72
         94594:	e3300004 	teq	r0, #4	; 0x4
         94598:	0a000006 	beq	945b8 <TDocker::ReadInitiateDocking(void)+0x38>
         9459c:	e59f0030 	ldr	r0, [pc, #30]	; 945d4 <TDocker::ReadInitiateDocking(void)+0x54>
         945a0:	e5900000 	ldr	r0, [r0]
         945a4:	e3a02000 	mov	r2, #0	; 0x0
         945a8:	e3a01099 	mov	r1, #153	; 0x99
         945ac:	e2411c6e 	sub	r1, r1, #28160	; 0x6e00
         945b0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         945b4:	ea6d3af8 	b	1be319c <$Throw>
         945b8:	e24dd004 	sub	sp, sp, #4	; 0x4
         945bc:	e1a0100d 	mov	r1, sp
         945c0:	e5940000 	ldr	r0, [r4]
         945c4:	eb6d4340 	bl	1be52cc <CPipe::$__rs(unsigned long &)>
         945c8:	e59d0000 	ldr	r0, [sp]
         945cc:	e5a400a4 	str	r0, [r4, #164]!	; fField164
         945d0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         945d4:	003712d0 	ldreqsb	r1, [r7], -r0
    */
}

/**
 * Symbol: TDocker::ReadDesktopInfo(void)
 * Address: 000945d8
 */
TDocker::ReadDesktopInfo(void) {
    /*
         945d8:	e1a0c00d 	mov	ip, sp
         945dc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         945e0:	e24cb004 	sub	fp, ip, #4	; 0x4
         945e4:	e1a04000 	mov	r4, r0
         945e8:	e280104c 	add	r1, r0, #76	; 0x4c
         945ec:	e5900000 	ldr	r0, [r0]
         945f0:	eb6d4335 	bl	1be52cc <CPipe::$__rs(unsigned long &)>
         945f4:	e594004c 	ldr	r0, [r4, #76]	; fField76
         945f8:	e350000a 	cmp	r0, #10	; 0xa
         945fc:	2a000005 	bcs	94618 <TDocker::ReadDesktopInfo(void)+0x40>
         94600:	e59f00a8 	ldr	r0, [pc, #a8]	; 946b0 <TDocker::ReadDesktopInfo(void)+0xd8>
         94604:	e5900000 	ldr	r0, [r0]
         94608:	e3a02000 	mov	r2, #0	; 0x0
         9460c:	e3a01095 	mov	r1, #149	; 0x95
         94610:	e2411c6e 	sub	r1, r1, #28160	; 0x6e00
         94614:	eb6d3ae0 	bl	1be319c <$Throw>
         94618:	e24dd004 	sub	sp, sp, #4	; 0x4
         9461c:	e1a0100d 	mov	r1, sp
         94620:	e5940000 	ldr	r0, [r4]
         94624:	eb6d4328 	bl	1be52cc <CPipe::$__rs(unsigned long &)>
         94628:	e59d0000 	ldr	r0, [sp]
         9462c:	e58400a8 	str	r0, [r4, #168]	; fField168
         94630:	e284108c 	add	r1, r4, #140	; 0x8c
         94634:	e5940000 	ldr	r0, [r4]
         94638:	eb6d4323 	bl	1be52cc <CPipe::$__rs(unsigned long &)>
         9463c:	e2841090 	add	r1, r4, #144	; 0x90
         94640:	e5940000 	ldr	r0, [r4]
         94644:	eb6d4320 	bl	1be52cc <CPipe::$__rs(unsigned long &)>
         94648:	e1a0100d 	mov	r1, sp
         9464c:	e5940000 	ldr	r0, [r4]
         94650:	eb6d431d 	bl	1be52cc <CPipe::$__rs(unsigned long &)>
         94654:	e59d0000 	ldr	r0, [sp]
         94658:	e1a0100d 	mov	r1, sp
         9465c:	e58400a4 	str	r0, [r4, #164]	; fField164
         94660:	e5940000 	ldr	r0, [r4]
         94664:	eb6d4318 	bl	1be52cc <CPipe::$__rs(unsigned long &)>
         94668:	e41d0004 	ldr	r0, [sp], -#4	; fField4
         9466c:	e5c400b2 	strb	r0, [r4, #178]	; fField178
         94670:	e5940048 	ldr	r0, [r4, #72]	; fField72
         94674:	e2401018 	sub	r1, r0, #24	; 0x18
         94678:	e2845088 	add	r5, r4, #136	; 0x88
         9467c:	e3a00002 	mov	r0, #2	; 0x2
         94680:	e3510004 	cmp	r1, #4	; 0x4
         94684:	3a00000a 	bcc	946b4 <TDocker::ReadDesktopInfo(void)+0xdc>
         94688:	eb6cb6af 	bl	1bc214c <$AllocateRefHandle(long)>
         9468c:	e58d0000 	str	r0, [sp]
         94690:	e1a0100d 	mov	r1, sp
         94694:	e1a00004 	mov	r0, r4
         94698:	eb688d54 	bl	1ab7bf0 <TDocker::$ReadRef(RefVar const &)>
         9469c:	e5951000 	ldr	r1, [r5]
         946a0:	e5810000 	str	r0, [r1]
         946a4:	e59d0000 	ldr	r0, [sp]
         946a8:	eb6cbac3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         946ac:	ea000002 	b	946bc <TDocker::ReadDesktopInfo(void)+0xe4>
         946b0:	003712d0 	ldreqsb	r1, [r7], -r0
         946b4:	e5951000 	ldr	r1, [r5]
         946b8:	e5810000 	str	r0, [r1]
         946bc:	e1a00004 	mov	r0, r4
         946c0:	e3a02000 	mov	r2, #0	; 0x0
         946c4:	e59f10e4 	ldr	r1, [pc, #e4]	; 947b0 <TDocker::ReadDesktopInfo(void)+0x1d8>
         946c8:	eb68a1ce 	bl	1abce08 <TEzPipeProtocol::$WriteDockerHeader(unsigned long, unsigned char)>
         946cc:	e3a0100c 	mov	r1, #12	; 0xc
         946d0:	e5940000 	ldr	r0, [r4]
         946d4:	eb6d42f5 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         946d8:	e2840020 	add	r0, r4, #32	; 0x20
         946dc:	e1a05000 	mov	r5, r0
         946e0:	e59f10cc 	ldr	r1, [pc, #cc]	; 947b4 <TDocker::ReadDesktopInfo(void)+0x1dc>
         946e4:	e1a06001 	mov	r6, r1
         946e8:	e3a02000 	mov	r2, #0	; 0x0
         946ec:	eb6cbedd 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         946f0:	e3100003 	tst	r0, #3	; 0x3
         946f4:	01a00140 	moveq	r0, r0, asr #2
         946f8:	0a000000 	beq	94700 <TDocker::ReadDesktopInfo(void)+0x128>
         946fc:	eb6cb686 	bl	1bc211c <$_RINTError(long)>
         94700:	e24dd004 	sub	sp, sp, #4	; 0x4
         94704:	e594104c 	ldr	r1, [r4, #76]	; fField76
         94708:	e1510000 	cmp	r1, r0
         9470c:	8584004c 	strhi	r0, [r4, #76]	; fField76
         94710:	e5940000 	ldr	r0, [r4]
         94714:	e594104c 	ldr	r1, [r4, #76]	; fField76
         94718:	eb6d42e4 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         9471c:	e594004c 	ldr	r0, [r4, #76]	; fField76
         94720:	e1a00100 	mov	r0, r0, lsl #2
         94724:	eb6cb688 	bl	1bc214c <$AllocateRefHandle(long)>
         94728:	e58d0000 	str	r0, [sp]
         9472c:	e1a0200d 	mov	r2, sp
         94730:	e1a00005 	mov	r0, r5
         94734:	e1a01006 	mov	r1, r6
         94738:	eb6cc70a 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         9473c:	e59d0000 	ldr	r0, [sp]
         94740:	eb6cba9d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         94744:	eb6aec23 	bl	1b4f7d8 <$GetRandSeed(void)>
         94748:	e1a05000 	mov	r5, r0
         9474c:	eb682a05 	bl	1a9ef68 <$RealClock(void)>
         94750:	eb6b00ab 	bl	1b54a04 <$SetRandSeed(long)>
         94754:	eb6afc8d 	bl	1b53990 <$Random(void)>
         94758:	e1a06000 	mov	r6, r0
         9475c:	eb6afc8b 	bl	1b53990 <$Random(void)>
         94760:	e0860400 	add	r0, r6, r0, lsl #8
         94764:	e5840094 	str	r0, [r4, #148]	; fField148
         94768:	eb6afc88 	bl	1b53990 <$Random(void)>
         9476c:	e1a06000 	mov	r6, r0
         94770:	eb6afc86 	bl	1b53990 <$Random(void)>
         94774:	e0860400 	add	r0, r6, r0, lsl #8
         94778:	e5840098 	str	r0, [r4, #152]	; fField152
         9477c:	e1a00005 	mov	r0, r5
         94780:	eb6b009f 	bl	1b54a04 <$SetRandSeed(long)>
         94784:	e5940000 	ldr	r0, [r4]
         94788:	e5941094 	ldr	r1, [r4, #148]	; fField148
         9478c:	eb6d42c7 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         94790:	e5940000 	ldr	r0, [r4]
         94794:	e5941098 	ldr	r1, [r4, #152]	; fField152
         94798:	eb6d42c4 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         9479c:	e5940000 	ldr	r0, [r4]
         947a0:	e5901000 	ldr	r1, [r0]
         947a4:	e1a0e00f 	mov	lr, pc
         947a8:	e281f020 	add	pc, r1, #32	; 0x20
         947ac:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         947b0:	6e696e66 	cdpvs	14, 6, cr6, cr9, cr6, {3}
         947b4:	00684068 	rsbeq	r4, r8, r8, rrx
    */
}

/**
 * Symbol: TDocker::WritePassword(RefVar const &)
 * Address: 000947e8
 */
TDocker::WritePassword(RefVar const &) {
    /*
         947e8:	e1a0c00d 	mov	ip, sp
         947ec:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         947f0:	e24cb004 	sub	fp, ip, #4	; 0x4
         947f4:	e1a04000 	mov	r4, r0
         947f8:	e1a05001 	mov	r5, r1
         947fc:	e590008c 	ldr	r0, [r0, #140]	; fField140
         94800:	e3a0608a 	mov	r6, #138	; 0x8a
         94804:	e2466c6e 	sub	r6, r6, #28160	; 0x6e00
         94808:	e3300000 	teq	r0, #0	; 0x0
         9480c:	05940090 	ldreq	r0, [r4, #144]	; fField144
         94810:	03300000 	teqeq	r0, #0	; 0x0
         94814:	01a00004 	moveq	r0, r4
         94818:	01a01006 	moveq	r1, r6
         9481c:	091b68f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         94820:	0a68a181 	beq	1abce2c <TDocker::$WriteResult(long)>
         94824:	e59f1030 	ldr	r1, [pc, #30]	; 9485c <TDocker::WritePassword(RefVar const &)+0x74>
         94828:	e1a00005 	mov	r0, r5
         9482c:	eb6cc297 	bl	1bc5290 <$IsInstance__FRC6RefVarT1>
         94830:	e284709c 	add	r7, r4, #156	; 0x9c
         94834:	e3300000 	teq	r0, #0	; 0x0
         94838:	0a000008 	beq	94860 <TDocker::WritePassword(RefVar const &)+0x78>
         9483c:	e5950000 	ldr	r0, [r5]
         94840:	e5900000 	ldr	r0, [r0]
         94844:	eb6cc29a 	bl	1bc52b4 <$LockRef(long)>
         94848:	e1a00005 	mov	r0, r5
         9484c:	eb6cba4c 	bl	1bc3184 <$GetCString(RefVar const &)>
         94850:	e1a01007 	mov	r1, r7
         94854:	eb6c5f82 	bl	1bac664 <$DESCharToKey>
         94858:	ea00000e 	b	94898 <TDocker::WritePassword(RefVar const &)+0xb0>
         9485c:	006848d0 	ldreqd	r4, [r8], -#128	; fField128
         94860:	e1a00005 	mov	r0, r5
         94864:	eb6dc295 	bl	1c052c0 <$IsBinary(RefVar const &)>
         94868:	e3300000 	teq	r0, #0	; 0x0
         9486c:	0a00000d 	beq	948a8 <TDocker::WritePassword(RefVar const &)+0xc0>
         94870:	e5950000 	ldr	r0, [r5]
         94874:	e5900000 	ldr	r0, [r0]
         94878:	eb6cc28d 	bl	1bc52b4 <$LockRef(long)>
         9487c:	e5950000 	ldr	r0, [r5]
         94880:	e5900000 	ldr	r0, [r0]
         94884:	eb6cb634 	bl	1bc215c <$BinaryData(long)>
         94888:	e5901000 	ldr	r1, [r0]
         9488c:	e584109c 	str	r1, [r4, #156]	; fField156
         94890:	e5900004 	ldr	r0, [r0, #4]	; fField4
         94894:	e58400a0 	str	r0, [r4, #160]	; fField160
         94898:	e5950000 	ldr	r0, [r5]
         9489c:	e5900000 	ldr	r0, [r0]
         948a0:	eb6ccef2 	bl	1bc8470 <$UnlockRef(long)>
         948a4:	ea000002 	b	948b4 <TDocker::WritePassword(RefVar const &)+0xcc>
         948a8:	e1a00004 	mov	r0, r4
         948ac:	e1a01006 	mov	r1, r6
         948b0:	eb68a15d 	bl	1abce2c <TDocker::$WriteResult(long)>
         948b4:	e24dd008 	sub	sp, sp, #8	; 0x8
         948b8:	e594008c 	ldr	r0, [r4, #140]	; fField140
         948bc:	e58d0000 	str	r0, [sp]
         948c0:	e5940090 	ldr	r0, [r4, #144]	; fField144
         948c4:	e58d0004 	str	r0, [sp, #4]	; fField4
         948c8:	e1a00007 	mov	r0, r7
         948cc:	e1a0100d 	mov	r1, sp
         948d0:	eb6c5f65 	bl	1bac66c <$DESEncodeNonce>
         948d4:	e1a00004 	mov	r0, r4
         948d8:	e3a02000 	mov	r2, #0	; 0x0
         948dc:	e59f1038 	ldr	r1, [pc, #38]	; 9491c <TDocker::WritePassword(RefVar const &)+0x134>
         948e0:	eb68a148 	bl	1abce08 <TEzPipeProtocol::$WriteDockerHeader(unsigned long, unsigned char)>
         948e4:	e3a01008 	mov	r1, #8	; 0x8
         948e8:	e5940000 	ldr	r0, [r4]
         948ec:	eb6d426f 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         948f0:	e59d1000 	ldr	r1, [sp]
         948f4:	e5940000 	ldr	r0, [r4]
         948f8:	eb6d426c 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         948fc:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         94900:	e5940000 	ldr	r0, [r4]
         94904:	eb6d4269 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         94908:	e5940000 	ldr	r0, [r4]
         9490c:	e5901000 	ldr	r1, [r0]
         94910:	e1a0e00f 	mov	lr, pc
         94914:	e281f020 	add	pc, r1, #32	; 0x20
         94918:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         9491c:	70617373 	rsbvc	r7, r1, r3, ror r3
    */
}

/**
 * Symbol: TDocker::VerifyPassword(void)
 * Address: 00094920
 */
TDocker::VerifyPassword(void) {
    /*
         94920:	e1a0c00d 	mov	ip, sp
         94924:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         94928:	e24cb004 	sub	fp, ip, #4	; 0x4
         9492c:	e1a04000 	mov	r4, r0
         94930:	e5900048 	ldr	r0, [r0, #72]	; fField72
         94934:	e59f50e0 	ldr	r5, [pc, #e0]	; 94a1c <TDocker::VerifyPassword(void)+0xfc>
         94938:	e3300008 	teq	r0, #8	; 0x8
         9493c:	0a000004 	beq	94954 <TDocker::VerifyPassword(void)+0x34>
         94940:	e3a02000 	mov	r2, #0	; 0x0
         94944:	e3a01099 	mov	r1, #153	; 0x99
         94948:	e2411c6e 	sub	r1, r1, #28160	; 0x6e00
         9494c:	e5950000 	ldr	r0, [r5]
         94950:	eb6d3a11 	bl	1be319c <$Throw>
         94954:	e24dd010 	sub	sp, sp, #16	; 0x10
         94958:	e28d1008 	add	r1, sp, #8	; 0x8
         9495c:	e5940000 	ldr	r0, [r4]
         94960:	eb6d4259 	bl	1be52cc <CPipe::$__rs(unsigned long &)>
         94964:	e28d100c 	add	r1, sp, #12	; 0xc
         94968:	e5940000 	ldr	r0, [r4]
         9496c:	eb6d4256 	bl	1be52cc <CPipe::$__rs(unsigned long &)>
         94970:	e59d0008 	ldr	r0, [sp, #8]
         94974:	e58d0000 	str	r0, [sp]
         94978:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         9497c:	e58d0004 	str	r0, [sp, #4]	; fField4
         94980:	e284009c 	add	r0, r4, #156	; 0x9c
         94984:	e1a0100d 	mov	r1, sp
         94988:	eb6c5f36 	bl	1bac668 <$DESDecodeNonce>
         9498c:	e5941094 	ldr	r1, [r4, #148]	; fField148
         94990:	e59d0000 	ldr	r0, [sp]
         94994:	e1310000 	teq	r1, r0
         94998:	059d1004 	ldreq	r1, [sp, #4]	; fField4
         9499c:	05940098 	ldreq	r0, [r4, #152]	; fField152
         949a0:	01310000 	teqeq	r1, r0
         949a4:	0a000019 	beq	94a10 <TDocker::VerifyPassword(void)+0xf0>
         949a8:	e24dd00c 	sub	sp, sp, #12	; 0xc
         949ac:	e3a00000 	mov	r0, #0	; 0x0
         949b0:	e58d0008 	str	r0, [sp, #8]
         949b4:	e1a0100d 	mov	r1, sp
         949b8:	e28d0008 	add	r0, sp, #8	; 0x8
         949bc:	eb6c5f28 	bl	1bac664 <$DESCharToKey>
         949c0:	e28d1014 	add	r1, sp, #20	; 0x14
         949c4:	e1a0000d 	mov	r0, sp
         949c8:	eb6c5f26 	bl	1bac668 <$DESDecodeNonce>
         949cc:	e5940094 	ldr	r0, [r4, #148]	; fField148
         949d0:	e59d1014 	ldr	r1, [sp, #20]	; fField20
         949d4:	e1300001 	teq	r0, r1
         949d8:	059d0018 	ldreq	r0, [sp, #24]	; fField24
         949dc:	05941098 	ldreq	r1, [r4, #152]	; fField152
         949e0:	01300001 	teqeq	r0, r1
         949e4:	0a000008 	beq	94a0c <TDocker::VerifyPassword(void)+0xec>
         949e8:	e1a00004 	mov	r0, r4
         949ec:	e3a0108a 	mov	r1, #138	; 0x8a
         949f0:	e2411c6e 	sub	r1, r1, #28160	; 0x6e00
         949f4:	eb68a10c 	bl	1abce2c <TDocker::$WriteResult(long)>
         949f8:	e3a02000 	mov	r2, #0	; 0x0
         949fc:	e3a0108a 	mov	r1, #138	; 0x8a
         94a00:	e2411c6e 	sub	r1, r1, #28160	; 0x6e00
         94a04:	e5950000 	ldr	r0, [r5]
         94a08:	eb6d39e3 	bl	1be319c <$Throw>
         94a0c:	e28dd00c 	add	sp, sp, #12	; 0xc
         94a10:	e3a00001 	mov	r0, #1	; 0x1
         94a14:	e5c400ac 	strb	r0, [r4, #172]	; fField172
         94a18:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         94a1c:	003712d0 	ldreqsb	r1, [r7], -r0
    */
}

/**
 * Symbol: TDocker::ReadPassword(void)
 * Address: 00094a20
 */
TDocker::ReadPassword(void) {
    /*
         94a20:	e1a0c00d 	mov	ip, sp
         94a24:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         94a28:	e24cb004 	sub	fp, ip, #4	; 0x4
         94a2c:	e1a04000 	mov	r4, r0
         94a30:	e2802048 	add	r2, r0, #72	; 0x48
         94a34:	e2801044 	add	r1, r0, #68	; 0x44
         94a38:	eb688c66 	bl	1ab7bd8 <TEzPipeProtocol::$ReadDockerHeader(unsigned long &, unsigned long &)>
         94a3c:	e5940044 	ldr	r0, [r4, #68]	; fField68
         94a40:	e59fc06c 	ldr	ip, [pc, #6c]	; 94ab4 <TDocker::ReadPassword(void)+0x94>
         94a44:	e130000c 	teq	r0, ip
         94a48:	01a00004 	moveq	r0, r4
         94a4c:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
         94a50:	0a689cdb 	beq	1abbdc4 <TDocker::$VerifyPassword(void)>
         94a54:	e59fc05c 	ldr	ip, [pc, #5c]	; 94ab8 <TDocker::ReadPassword(void)+0x98>
         94a58:	e130000c 	teq	r0, ip
         94a5c:	03a00089 	moveq	r0, #137	; 0x89
         94a60:	02400c6e 	subeq	r0, r0, #28160	; 0x6e00
         94a64:	05a40050 	streq	r0, [r4, #80]!	; fField80
         94a68:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         94a6c:	e59f5048 	ldr	r5, [pc, #48]	; 94abc <TDocker::ReadPassword(void)+0x9c>	; fField48
         94a70:	e59fc048 	ldr	ip, [pc, #48]	; 94ac0 <TDocker::ReadPassword(void)+0xa0>	; fField48
         94a74:	e130000c 	teq	r0, ip
         94a78:	13a02000 	movne	r2, #0	; 0x0
         94a7c:	13a01fa5 	movne	r1, #660	; 0x294
         94a80:	12411a07 	subne	r1, r1, #28672	; 0x7000
         94a84:	15950000 	ldrne	r0, [r5]
         94a88:	1a000007 	bne	94aac <TDocker::ReadPassword(void)+0x8c>
         94a8c:	e1a00004 	mov	r0, r4
         94a90:	eb682931 	bl	1a9ef5c <TDocker::$ReadResult(void)>
         94a94:	e5a40050 	str	r0, [r4, #80]!	; fField80
         94a98:	e3300000 	teq	r0, #0	; 0x0
         94a9c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         94aa0:	e1a01000 	mov	r1, r0
         94aa4:	e3a02000 	mov	r2, #0	; 0x0
         94aa8:	e5950000 	ldr	r0, [r5]
         94aac:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         94ab0:	ea6d39b9 	b	1be319c <$Throw>
         94ab4:	70617373 	rsbvc	r7, r1, r3, ror r3
         94ab8:	70776264 	rsbvcs	r6, r7, r4, ror #4
         94abc:	003712d0 	ldreqsb	r1, [r7], -r0
         94ac0:	64726573 	ldrvsbt	r6, [r2], -#1395
    */
}

/**
 * Symbol: TDocker::RetryPassword(RefVar const &)
 * Address: 00094ac4
 */
TDocker::RetryPassword(RefVar const &) {
    /*
         94ac4:	e1a0c00d 	mov	ip, sp
         94ac8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         94acc:	e24cb004 	sub	fp, ip, #4	; 0x4
         94ad0:	e1a04000 	mov	r4, r0
         94ad4:	e1a05001 	mov	r5, r1
         94ad8:	e5d000b3 	ldrb	r0, [r0, #179]	; fField179
         94adc:	e3a06000 	mov	r6, #0	; 0x0
         94ae0:	e3300000 	teq	r0, #0	; 0x0
         94ae4:	11a00006 	movne	r0, r6
         94ae8:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         94aec:	e1a00004 	mov	r0, r4
         94af0:	eb689cb9 	bl	1abbddc <TDocker::$WaitAndLockTDocker(void)>
         94af4:	e5846050 	str	r6, [r4, #80]	; fField80
         94af8:	e52d606c 	str	r6, [sp, -#108]!	; fField108
         94afc:	e28d0008 	add	r0, sp, #8	; 0x8
         94b00:	eb6c779b 	bl	1bb2974 <$setjmp>
         94b04:	e3300000 	teq	r0, #0	; 0x0
         94b08:	e1a0000d 	mov	r0, sp
         94b0c:	1a000008 	bne	94b34 <TDocker::RetryPassword(RefVar const &)+0x70>
         94b10:	eb6d2d59 	bl	1be007c <$AddExceptionHandler>
         94b14:	e3a06001 	mov	r6, #1	; 0x1
         94b18:	e1a01005 	mov	r1, r5
         94b1c:	e1a00004 	mov	r0, r4
         94b20:	eb68a0be 	bl	1abce20 <TDocker::$WritePassword(RefVar const &)>
         94b24:	e1a00004 	mov	r0, r4
         94b28:	eb688c2e 	bl	1ab7be8 <TDocker::$ReadPassword(void)>
         94b2c:	e5c4602f 	strb	r6, [r4, #47]	; fField47
         94b30:	ea000002 	b	94b40 <TDocker::RetryPassword(RefVar const &)+0x7c>
         94b34:	e2801060 	add	r1, r0, #96	; 0x60
         94b38:	e1a00004 	mov	r0, r4
         94b3c:	eb688c1b 	bl	1ab7bb0 <TDocker::$ProcessException(Exception *)>
         94b40:	e1a0000d 	mov	r0, sp
         94b44:	eb6d315b 	bl	1be10b8 <$ExitHandler>
         94b48:	e28dd06c 	add	sp, sp, #108	; 0x6c
         94b4c:	e1a00004 	mov	r0, r4
         94b50:	e3a01000 	mov	r1, #0	; 0x0
         94b54:	eb685687 	bl	1aaa578 <TDocker::$CleanUpIfStopping(unsigned char)>
         94b58:	e1a00004 	mov	r0, r4
         94b5c:	e3a01000 	mov	r1, #0	; 0x0
         94b60:	eb685683 	bl	1aaa574 <TDocker::$CleanUpIfError(unsigned char)>
         94b64:	e1a00004 	mov	r0, r4
         94b68:	eb689c8d 	bl	1abbda4 <TDocker::$UnlockTDocker(void)>
         94b6c:	e5b40050 	ldr	r0, [r4, #80]!	; fField80
         94b70:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::Connect(RefVar const &, RefVar const &, RefVar const &)
 * Address: 00094b74
 */
TDocker::Connect(RefVar const &, RefVar const &, RefVar const &) {
    /*
         94b74:	e1a0c00d 	mov	ip, sp
         94b78:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         94b7c:	e24cb004 	sub	fp, ip, #4	; 0x4
         94b80:	e1a04000 	mov	r4, r0
         94b84:	e1a06001 	mov	r6, r1
         94b88:	e1a09002 	mov	r9, r2
         94b8c:	e1a05003 	mov	r5, r3
         94b90:	eb689c91 	bl	1abbddc <TDocker::$WaitAndLockTDocker(void)>
         94b94:	e3a00000 	mov	r0, #0	; 0x0
         94b98:	e5840050 	str	r0, [r4, #80]	; fField80
         94b9c:	e5c400b3 	strb	r0, [r4, #179]	; fField179
         94ba0:	e52d006c 	str	r0, [sp, -#108]!	; fField108
         94ba4:	e28d0008 	add	r0, sp, #8	; 0x8
         94ba8:	eb6c7771 	bl	1bb2974 <$setjmp>
         94bac:	e3300000 	teq	r0, #0	; 0x0
         94bb0:	e1a0000d 	mov	r0, sp
         94bb4:	1a0000d7 	bne	94f18 <TDocker::Connect(RefVar const &, RefVar const &, RefVar const &)+0x3a4>
         94bb8:	eb6d2d2f 	bl	1be007c <$AddExceptionHandler>
         94bbc:	e3a07001 	mov	r7, #1	; 0x1
         94bc0:	e5961000 	ldr	r1, [r6]
         94bc4:	e5911000 	ldr	r1, [r1]
         94bc8:	e5940020 	ldr	r0, [r4, #32]	; fField32
         94bcc:	e5801000 	str	r1, [r0]
         94bd0:	e3a00000 	mov	r0, #0	; 0x0
         94bd4:	eb6c83c6 	bl	1bb5af4 <TEzEndpointPipe::$__ct(void)>
         94bd8:	e5840000 	str	r0, [r4]
         94bdc:	e3300000 	teq	r0, #0	; 0x0
         94be0:	01a00004 	moveq	r0, r4
         94be4:	0b68b557 	bleq	1ac2148 <TDocker::$OutOfMemory(void)>
         94be8:	e3a0695e 	mov	r6, #1540096	; 0x178000
         94bec:	e286651a 	add	r6, r6, #109051904	; 0x6800000
         94bf0:	e59f0118 	ldr	r0, [pc, #118]	; 94d10 <TDocker::Connect(RefVar const &, RefVar const &, RefVar const &)+0x19c>
         94bf4:	e5900000 	ldr	r0, [r0]
         94bf8:	e5901000 	ldr	r1, [r0]
         94bfc:	e5990000 	ldr	r0, [r9]
         94c00:	e5900000 	ldr	r0, [r0]
         94c04:	eb6cbd95 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         94c08:	eb6cb54f 	bl	1bc214c <$AllocateRefHandle(long)>
         94c0c:	e1a08000 	mov	r8, r0
         94c10:	e5900000 	ldr	r0, [r0]
         94c14:	e3300002 	teq	r0, #2	; 0x2
         94c18:	0a000006 	beq	94c38 <TDocker::Connect(RefVar const &, RefVar const &, RefVar const &)+0xc4>
         94c1c:	e3100003 	tst	r0, #3	; 0x3
         94c20:	01a00140 	moveq	r0, r0, asr #2
         94c24:	0a000000 	beq	94c2c <TDocker::Connect(RefVar const &, RefVar const &, RefVar const &)+0xb8>
         94c28:	eb6cb53b 	bl	1bc211c <$_RINTError(long)>
         94c2c:	e0606280 	rsb	r6, r0, r0, lsl #5
         94c30:	e0666400 	rsb	r6, r6, r0, lsl #8
         94c34:	e1a06706 	mov	r6, r6, lsl #14
         94c38:	e1a02006 	mov	r2, r6
         94c3c:	e1a01009 	mov	r1, r9
         94c40:	e5940000 	ldr	r0, [r4]
         94c44:	eb65cdf2 	bl	1a08414 <TEzEndpointPipe::$Init(RefVar const &, unsigned long)>
         94c48:	e5c470b1 	strb	r7, [r4, #177]	; fField177
         94c4c:	e5d400af 	ldrb	r0, [r4, #175]	; fField175
         94c50:	e59f60bc 	ldr	r6, [pc, #bc]	; 94d14 <TDocker::Connect(RefVar const &, RefVar const &, RefVar const &)+0x1a0>
         94c54:	e3300000 	teq	r0, #0	; 0x0
         94c58:	0a000003 	beq	94c6c <TDocker::Connect(RefVar const &, RefVar const &, RefVar const &)+0xf8>
         94c5c:	e3a02000 	mov	r2, #0	; 0x0
         94c60:	e5960000 	ldr	r0, [r6]
         94c64:	e59f10ac 	ldr	r1, [pc, #ac]	; 94d18 <TDocker::Connect(RefVar const &, RefVar const &, RefVar const &)+0x1a4>
         94c68:	eb6d394b 	bl	1be319c <$Throw>
         94c6c:	e59f00a8 	ldr	r0, [pc, #a8]	; 94d1c <TDocker::Connect(RefVar const &, RefVar const &, RefVar const &)+0x1a8>
         94c70:	e5900000 	ldr	r0, [r0]
         94c74:	e5901000 	ldr	r1, [r0]
         94c78:	e5990000 	ldr	r0, [r9]
         94c7c:	e5900000 	ldr	r0, [r0]
         94c80:	eb6cbd76 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         94c84:	e5880000 	str	r0, [r8]
         94c88:	e3300002 	teq	r0, #2	; 0x2
         94c8c:	0a000008 	beq	94cb4 <TDocker::Connect(RefVar const &, RefVar const &, RefVar const &)+0x140>
         94c90:	e3100003 	tst	r0, #3	; 0x3
         94c94:	01a00140 	moveq	r0, r0, asr #2
         94c98:	0a000000 	beq	94ca0 <TDocker::Connect(RefVar const &, RefVar const &, RefVar const &)+0x12c>
         94c9c:	eb6cb51e 	bl	1bc211c <$_RINTError(long)>
         94ca0:	e0601280 	rsb	r1, r0, r0, lsl #5
         94ca4:	e0611400 	rsb	r1, r1, r0, lsl #8
         94ca8:	e1a01701 	mov	r1, r1, lsl #14
         94cac:	e5940000 	ldr	r0, [r4]
         94cb0:	eb6c9824 	bl	1bbad48 <TEndpointPipe::$SetTimeout(unsigned long)>
         94cb4:	e1a00004 	mov	r0, r4
         94cb8:	e59f2060 	ldr	r2, [pc, #60]	; 94d20 <TDocker::Connect(RefVar const &, RefVar const &, RefVar const &)+0x1ac>	; fField60
         94cbc:	e59f1060 	ldr	r1, [pc, #60]	; 94d24 <TDocker::Connect(RefVar const &, RefVar const &, RefVar const &)+0x1b0>	; fField60
         94cc0:	eb682896 	bl	1a9ef20 <TEzPipeProtocol::$ProtocolInit(unsigned long, unsigned long)>
         94cc4:	e1a00004 	mov	r0, r4
         94cc8:	e3a02009 	mov	r2, #9	; 0x9
         94ccc:	e59f1054 	ldr	r1, [pc, #54]	; 94d28 <TDocker::Connect(RefVar const &, RefVar const &, RefVar const &)+0x1b4>
         94cd0:	eb68a050 	bl	1abce18 <TDocker::$WriteLong(unsigned long, unsigned long)>
         94cd4:	e2842048 	add	r2, r4, #72	; 0x48
         94cd8:	e1a0a002 	mov	sl, r2
         94cdc:	e2841044 	add	r1, r4, #68	; 0x44
         94ce0:	e1a09001 	mov	r9, r1
         94ce4:	e1a00004 	mov	r0, r4
         94ce8:	eb688bba 	bl	1ab7bd8 <TEzPipeProtocol::$ReadDockerHeader(unsigned long &, unsigned long &)>
         94cec:	e5940044 	ldr	r0, [r4, #68]	; fField68
         94cf0:	e59fc034 	ldr	ip, [pc, #34]	; 94d2c <TDocker::Connect(RefVar const &, RefVar const &, RefVar const &)+0x1b8>
         94cf4:	e130000c 	teq	r0, ip
         94cf8:	1a00000c 	bne	94d30 <TDocker::Connect(RefVar const &, RefVar const &, RefVar const &)+0x1bc>
         94cfc:	e5c470ae 	strb	r7, [r4, #174]	; fField174
         94d00:	e5c470ac 	strb	r7, [r4, #172]	; fField172
         94d04:	e3a00004 	mov	r0, #4	; 0x4
         94d08:	e58400a4 	str	r0, [r4, #164]	; fField164
         94d0c:	ea00007d 	b	94f08 <TDocker::Connect(RefVar const &, RefVar const &, RefVar const &)+0x394>
         94d10:	006825d0 	ldreqd	r2, [r8], -#80	; fField80
         94d14:	003712d0 	ldreqsb	r1, [r7], -r0
         94d18:	ffff9293 	swinv	0x00ff9293
         94d1c:	00683178 	rsbeq	r3, r8, r8, ror r1
         94d20:	646f636b 	strvsbt	r6, [pc], #36b	; 94d28 <TDocker::Connect(RefVar const &, RefVar const &, RefVar const &)+0x1b4>	; fField36
         94d24:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         94d28:	7274646b 	rsbvcs	r6, r4, #1795162112	; 0x6b000000
         94d2c:	6c706b67 	ldcvsl	11, cr6, [r0], -#412
         94d30:	e51fc018 	ldr	ip, [pc, #ffffffe8]	; 94d20 <TDocker::Connect(RefVar const &, RefVar const &, RefVar const &)+0x1ac>
         94d34:	e130000c 	teq	r0, ip
         94d38:	1a00006a 	bne	94ee8 <TDocker::Connect(RefVar const &, RefVar const &, RefVar const &)+0x374>
         94d3c:	e5d400af 	ldrb	r0, [r4, #175]	; fField175
         94d40:	e3300000 	teq	r0, #0	; 0x0
         94d44:	0a000003 	beq	94d58 <TDocker::Connect(RefVar const &, RefVar const &, RefVar const &)+0x1e4>
         94d48:	e3a02000 	mov	r2, #0	; 0x0
         94d4c:	e5960000 	ldr	r0, [r6]
         94d50:	e51f1040 	ldr	r1, [pc, #ffffffc0]	; 94d18 <TDocker::Connect(RefVar const &, RefVar const &, RefVar const &)+0x1a4>
         94d54:	eb6d3910 	bl	1be319c <$Throw>
         94d58:	e1a00004 	mov	r0, r4
         94d5c:	eb688b9f 	bl	1ab7be0 <TDocker::$ReadInitiateDocking(void)>
         94d60:	e1a00004 	mov	r0, r4
         94d64:	eb68a02c 	bl	1abce1c <TDocker::$WriteNewtonName(void)>
         94d68:	e1a0200a 	mov	r2, sl
         94d6c:	e1a01009 	mov	r1, r9
         94d70:	e1a00004 	mov	r0, r4
         94d74:	eb688b97 	bl	1ab7bd8 <TEzPipeProtocol::$ReadDockerHeader(unsigned long &, unsigned long &)>
         94d78:	e5940044 	ldr	r0, [r4, #68]	; fField68
         94d7c:	e59fc0b4 	ldr	ip, [pc, #b4]	; 94e38 <TDocker::Connect(RefVar const &, RefVar const &, RefVar const &)+0x2c4>
         94d80:	e130000c 	teq	r0, ip
         94d84:	1a000005 	bne	94da0 <TDocker::Connect(RefVar const &, RefVar const &, RefVar const &)+0x22c>
         94d88:	e1a00004 	mov	r0, r4
         94d8c:	eb688b90 	bl	1ab7bd4 <TDocker::$ReadDesktopInfo(void)>
         94d90:	e1a0200a 	mov	r2, sl
         94d94:	e1a01009 	mov	r1, r9
         94d98:	e1a00004 	mov	r0, r4
         94d9c:	eb688b8d 	bl	1ab7bd8 <TEzPipeProtocol::$ReadDockerHeader(unsigned long &, unsigned long &)>
         94da0:	e594004c 	ldr	r0, [r4, #76]	; fField76
         94da4:	e3500009 	cmp	r0, #9	; 0x9
         94da8:	8a000008 	bhi	94dd0 <TDocker::Connect(RefVar const &, RefVar const &, RefVar const &)+0x25c>
         94dac:	e59400a4 	ldr	r0, [r4, #164]	; fField164
         94db0:	e3300004 	teq	r0, #4	; 0x4
         94db4:	0a000004 	beq	94dcc <TDocker::Connect(RefVar const &, RefVar const &, RefVar const &)+0x258>
         94db8:	e3a02000 	mov	r2, #0	; 0x0
         94dbc:	e3a01095 	mov	r1, #149	; 0x95
         94dc0:	e2411c6e 	sub	r1, r1, #28160	; 0x6e00
         94dc4:	e5960000 	ldr	r0, [r6]
         94dc8:	eb6d38f3 	bl	1be319c <$Throw>
         94dcc:	e5c470ac 	strb	r7, [r4, #172]	; fField172
         94dd0:	e5940044 	ldr	r0, [r4, #68]	; fField68
         94dd4:	e59fc060 	ldr	ip, [pc, #60]	; 94e3c <TDocker::Connect(RefVar const &, RefVar const &, RefVar const &)+0x2c8>	; fField60
         94dd8:	e130000c 	teq	r0, ip
         94ddc:	1a000005 	bne	94df8 <TDocker::Connect(RefVar const &, RefVar const &, RefVar const &)+0x284>
         94de0:	e1a00004 	mov	r0, r4
         94de4:	eb6897ce 	bl	1abad24 <TDocker::$SetWhichIcons(void)>
         94de8:	e1a0200a 	mov	r2, sl
         94dec:	e1a01009 	mov	r1, r9
         94df0:	e1a00004 	mov	r0, r4
         94df4:	eb688b77 	bl	1ab7bd8 <TEzPipeProtocol::$ReadDockerHeader(unsigned long &, unsigned long &)>
         94df8:	e5940044 	ldr	r0, [r4, #68]	; fField68
         94dfc:	e59fc03c 	ldr	ip, [pc, #3c]	; 94e40 <TDocker::Connect(RefVar const &, RefVar const &, RefVar const &)+0x2cc>
         94e00:	e130000c 	teq	r0, ip
         94e04:	1a00000e 	bne	94e44 <TDocker::Connect(RefVar const &, RefVar const &, RefVar const &)+0x2d0>
         94e08:	e24dd004 	sub	sp, sp, #4	; 0x4
         94e0c:	e1a0100d 	mov	r1, sp
         94e10:	e5940000 	ldr	r0, [r4]
         94e14:	eb6d4128 	bl	1be52bc <CPipe::$__rs(long &)>
         94e18:	e59d0000 	ldr	r0, [sp]
         94e1c:	e0601280 	rsb	r1, r0, r0, lsl #5
         94e20:	e0611400 	rsb	r1, r1, r0, lsl #8
         94e24:	e1a01701 	mov	r1, r1, lsl #14
         94e28:	e5940000 	ldr	r0, [r4]
         94e2c:	eb6c97c5 	bl	1bbad48 <TEndpointPipe::$SetTimeout(unsigned long)>
         94e30:	e28dd004 	add	sp, sp, #4	; 0x4
         94e34:	ea000012 	b	94e84 <TDocker::Connect(RefVar const &, RefVar const &, RefVar const &)+0x310>
         94e38:	64696e66 	strvsbt	r6, [r9], -#3686
         94e3c:	7769636e 	strvcb	r6, [r9, -lr, ror #6]!
         94e40:	7374696d 	cmnvc	r4, #1785856	; 0x1b4000
         94e44:	e59fc098 	ldr	ip, [pc, #98]	; 94ee4 <TDocker::Connect(RefVar const &, RefVar const &, RefVar const &)+0x370>
         94e48:	e130000c 	teq	r0, ip
         94e4c:	13a02000 	movne	r2, #0	; 0x0
         94e50:	13a01fa5 	movne	r1, #660	; 0x294
         94e54:	12411a07 	subne	r1, r1, #28672	; 0x7000
         94e58:	15960000 	ldrne	r0, [r6]
         94e5c:	1a000007 	bne	94e80 <TDocker::Connect(RefVar const &, RefVar const &, RefVar const &)+0x30c>
         94e60:	e1a00004 	mov	r0, r4
         94e64:	eb68283c 	bl	1a9ef5c <TDocker::$ReadResult(void)>
         94e68:	e5840050 	str	r0, [r4, #80]	; fField80
         94e6c:	e3300000 	teq	r0, #0	; 0x0
         94e70:	0a000003 	beq	94e84 <TDocker::Connect(RefVar const &, RefVar const &, RefVar const &)+0x310>
         94e74:	e1a01000 	mov	r1, r0
         94e78:	e3a02000 	mov	r2, #0	; 0x0
         94e7c:	e5960000 	ldr	r0, [r6]
         94e80:	eb6d38c5 	bl	1be319c <$Throw>
         94e84:	e5d400af 	ldrb	r0, [r4, #175]	; fField175
         94e88:	e3300000 	teq	r0, #0	; 0x0
         94e8c:	0a000003 	beq	94ea0 <TDocker::Connect(RefVar const &, RefVar const &, RefVar const &)+0x32c>
         94e90:	e3a02000 	mov	r2, #0	; 0x0
         94e94:	e5960000 	ldr	r0, [r6]
         94e98:	e51f1188 	ldr	r1, [pc, #fffffe78]	; 94d18 <TDocker::Connect(RefVar const &, RefVar const &, RefVar const &)+0x1a4>
         94e9c:	eb6d38be 	bl	1be319c <$Throw>
         94ea0:	e594004c 	ldr	r0, [r4, #76]	; fField76
         94ea4:	e350000a 	cmp	r0, #10	; 0xa
         94ea8:	3a000004 	bcc	94ec0 <TDocker::Connect(RefVar const &, RefVar const &, RefVar const &)+0x34c>
         94eac:	e1a01005 	mov	r1, r5
         94eb0:	e1a00004 	mov	r0, r4
         94eb4:	eb689fd9 	bl	1abce20 <TDocker::$WritePassword(RefVar const &)>
         94eb8:	e1a00004 	mov	r0, r4
         94ebc:	eb688b49 	bl	1ab7be8 <TDocker::$ReadPassword(void)>
         94ec0:	e5d400af 	ldrb	r0, [r4, #175]	; fField175
         94ec4:	e3300000 	teq	r0, #0	; 0x0
         94ec8:	0a000003 	beq	94edc <TDocker::Connect(RefVar const &, RefVar const &, RefVar const &)+0x368>
         94ecc:	e3a02000 	mov	r2, #0	; 0x0
         94ed0:	e5960000 	ldr	r0, [r6]
         94ed4:	e51f11c4 	ldr	r1, [pc, #fffffe3c]	; 94d18 <TDocker::Connect(RefVar const &, RefVar const &, RefVar const &)+0x1a4>
         94ed8:	eb6d38af 	bl	1be319c <$Throw>
         94edc:	e5c4702f 	strb	r7, [r4, #47]	; fField47
         94ee0:	ea000008 	b	94f08 <TDocker::Connect(RefVar const &, RefVar const &, RefVar const &)+0x394>
         94ee4:	64726573 	ldrvsbt	r6, [r2], -#1395
         94ee8:	e51fc1c8 	ldr	ip, [pc, #fffffe38]	; 94d28 <TDocker::Connect(RefVar const &, RefVar const &, RefVar const &)+0x1b4>
         94eec:	e130000c 	teq	r0, ip
         94ef0:	e3a02000 	mov	r2, #0	; 0x0
         94ef4:	e5960000 	ldr	r0, [r6]
         94ef8:	13a01e29 	movne	r1, #656	; 0x290
         94efc:	12411a07 	subne	r1, r1, #28672	; 0x7000
         94f00:	059f100c 	ldreq	r1, [pc, #c]	; 94f14 <TDocker::Connect(RefVar const &, RefVar const &, RefVar const &)+0x3a0>
         94f04:	eb6d38a4 	bl	1be319c <$Throw>
         94f08:	e1a00008 	mov	r0, r8
         94f0c:	eb6cb8aa 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         94f10:	ea000003 	b	94f24 <TDocker::Connect(RefVar const &, RefVar const &, RefVar const &)+0x3b0>
         94f14:	ffff9283 	swinv	0x00ff9283
         94f18:	e2801060 	add	r1, r0, #96	; 0x60
         94f1c:	e1a00004 	mov	r0, r4
         94f20:	eb688b22 	bl	1ab7bb0 <TDocker::$ProcessException(Exception *)>
         94f24:	e1a0000d 	mov	r0, sp
         94f28:	eb6d3062 	bl	1be10b8 <$ExitHandler>
         94f2c:	e28dd06c 	add	sp, sp, #108	; 0x6c
         94f30:	e5d410af 	ldrb	r1, [r4, #175]	; fField175
         94f34:	e1a00004 	mov	r0, r4
         94f38:	eb68558d 	bl	1aaa574 <TDocker::$CleanUpIfError(unsigned char)>
         94f3c:	e1a00004 	mov	r0, r4
         94f40:	eb689b97 	bl	1abbda4 <TDocker::$UnlockTDocker(void)>
         94f44:	e5b40050 	ldr	r0, [r4, #80]!	; fField80
         94f48:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::ProcessBuiltinCommand(unsigned char &)
 * Address: 00094f4c
 */
TDocker::ProcessBuiltinCommand(unsigned char &) {
    /*
         94f4c:	e1a0c00d 	mov	ip, sp
         94f50:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         94f54:	e24cb004 	sub	fp, ip, #4	; 0x4
         94f58:	e1a04000 	mov	r4, r0
         94f5c:	e1a05001 	mov	r5, r1
         94f60:	e5d010b3 	ldrb	r1, [r0, #179]	; fField179
         94f64:	e3a00000 	mov	r0, #0	; 0x0
         94f68:	e3310000 	teq	r1, #0	; 0x0
         94f6c:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         94f70:	e1a06000 	mov	r6, r0
         94f74:	e5840050 	str	r0, [r4, #80]	; fField80
         94f78:	e5d400ac 	ldrb	r0, [r4, #172]	; fField172
         94f7c:	e3300000 	teq	r0, #0	; 0x0
         94f80:	03a0008a 	moveq	r0, #138	; 0x8a
         94f84:	02400c6e 	subeq	r0, r0, #28160	; 0x6e00
         94f88:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         94f8c:	e1a00004 	mov	r0, r4
         94f90:	eb689b91 	bl	1abbddc <TDocker::$WaitAndLockTDocker(void)>
         94f94:	e5c56000 	strb	r6, [r5]
         94f98:	e56d6004 	strb	r6, [sp, -#4]!	; fField4
         94f9c:	e52d606c 	str	r6, [sp, -#108]!	; fField108
         94fa0:	e28d0008 	add	r0, sp, #8	; 0x8
         94fa4:	eb6c7672 	bl	1bb2974 <$setjmp>
         94fa8:	e3300000 	teq	r0, #0	; 0x0
         94fac:	e1a0000d 	mov	r0, sp
         94fb0:	1a000005 	bne	94fcc <TDocker::ProcessBuiltinCommand(unsigned char &)+0x80>
         94fb4:	eb6d2c30 	bl	1be007c <$AddExceptionHandler>
         94fb8:	e28d206c 	add	r2, sp, #108	; 0x6c
         94fbc:	e1a01005 	mov	r1, r5
         94fc0:	e1a00004 	mov	r0, r4
         94fc4:	eb688af8 	bl	1ab7bac <TDocker::$ProcessCommand(unsigned char &, unsigned char &)>
         94fc8:	ea000002 	b	94fd8 <TDocker::ProcessBuiltinCommand(unsigned char &)+0x8c>
         94fcc:	e2801060 	add	r1, r0, #96	; 0x60
         94fd0:	e1a00004 	mov	r0, r4
         94fd4:	eb688af5 	bl	1ab7bb0 <TDocker::$ProcessException(Exception *)>
         94fd8:	e1a0000d 	mov	r0, sp
         94fdc:	eb6d3035 	bl	1be10b8 <$ExitHandler>
         94fe0:	e28dd06c 	add	sp, sp, #108	; 0x6c
         94fe4:	e5d51000 	ldrb	r1, [r5]
         94fe8:	e1a00004 	mov	r0, r4
         94fec:	eb685561 	bl	1aaa578 <TDocker::$CleanUpIfStopping(unsigned char)>
         94ff0:	e5c50000 	strb	r0, [r5]
         94ff4:	e20010ff 	and	r1, r0, #255	; 0xff
         94ff8:	e1a00004 	mov	r0, r4
         94ffc:	eb68555c 	bl	1aaa574 <TDocker::$CleanUpIfError(unsigned char)>
         95000:	e1a00004 	mov	r0, r4
         95004:	eb689b66 	bl	1abbda4 <TDocker::$UnlockTDocker(void)>
         95008:	e5b40050 	ldr	r0, [r4, #80]!	; fField80
         9500c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::Stop(void)
 * Address: 00095010
 */
TDocker::Stop(void) {
    /*
         95010:	e1a0c00d 	mov	ip, sp
         95014:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         95018:	e24cb004 	sub	fp, ip, #4	; 0x4
         9501c:	e1a04000 	mov	r4, r0
         95020:	eb68b035 	bl	1ac10fc <TDocker::$GetTDockerLock(void)>
         95024:	e3300000 	teq	r0, #0	; 0x0
         95028:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         9502c:	e3a05001 	mov	r5, #1	; 0x1
         95030:	e5c450af 	strb	r5, [r4, #175]	; fField175
         95034:	e3a00000 	mov	r0, #0	; 0x0
         95038:	e5c400b0 	strb	r0, [r4, #176]	; fField176
         9503c:	e5940000 	ldr	r0, [r4]
         95040:	e3300000 	teq	r0, #0	; 0x0
         95044:	15901000 	ldrne	r1, [r0]
         95048:	11a0e00f 	movne	lr, pc
         9504c:	1281f038 	addne	pc, r1, #56	; 0x38
         95050:	e5c450b0 	strb	r5, [r4, #176]	; fField176
         95054:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::CompatabilityHacks(void)
 * Address: 00095058
 */
TDocker::CompatabilityHacks(void) {
    /*
         95058:	e1a0c00d 	mov	ip, sp
         9505c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         95060:	e24cb004 	sub	fp, ip, #4	; 0x4
         95064:	e1a04000 	mov	r4, r0
         95068:	e3a09000 	mov	r9, #0	; 0x0
         9506c:	e24d8064 	sub	r8, sp, #100	; 0x64
         95070:	e2807048 	add	r7, r0, #72	; 0x48
         95074:	e2806044 	add	r6, r0, #68	; 0x44
         95078:	e59fa0a8 	ldr	sl, [pc, #a8]	; 95128 <TDocker::CompatabilityHacks(void)+0xd0>
         9507c:	e3a05000 	mov	r5, #0	; 0x0
         95080:	e1a00004 	mov	r0, r4
         95084:	eb6827b3 	bl	1a9ef58 <TDocker::$ReadPackage(void)>
         95088:	e1a00008 	mov	r0, r8
         9508c:	e52d906c 	str	r9, [sp, -#108]!	; fField108
         95090:	eb6c7637 	bl	1bb2974 <$setjmp>
         95094:	e3300000 	teq	r0, #0	; 0x0
         95098:	1a00001c 	bne	95110 <TDocker::CompatabilityHacks(void)+0xb8>
         9509c:	e1a0000d 	mov	r0, sp
         950a0:	eb6d2bf5 	bl	1be007c <$AddExceptionHandler>
         950a4:	e5941050 	ldr	r1, [r4, #80]	; fField80
         950a8:	e1a00004 	mov	r0, r4
         950ac:	eb689f5e 	bl	1abce2c <TDocker::$WriteResult(long)>
         950b0:	e1a00004 	mov	r0, r4
         950b4:	e3a0101e 	mov	r1, #30	; 0x1e
         950b8:	eb68594e 	bl	1aab5f8 <TDocker::$Delay(unsigned long)>
         950bc:	e1a00004 	mov	r0, r4
         950c0:	e3a01001 	mov	r1, #1	; 0x1
         950c4:	eb6850f8 	bl	1aa94ac <TDocker::$BytesAvailable(unsigned char)>
         950c8:	e3300000 	teq	r0, #0	; 0x0
         950cc:	0a00000c 	beq	95104 <TDocker::CompatabilityHacks(void)+0xac>
         950d0:	e1a02007 	mov	r2, r7
         950d4:	e1a01006 	mov	r1, r6
         950d8:	e1a00004 	mov	r0, r4
         950dc:	eb688abd 	bl	1ab7bd8 <TEzPipeProtocol::$ReadDockerHeader(unsigned long &, unsigned long &)>
         950e0:	e5940044 	ldr	r0, [r4, #68]	; fField68
         950e4:	e130000a 	teq	r0, sl
         950e8:	03a05001 	moveq	r5, #1	; 0x1
         950ec:	0a000007 	beq	95110 <TDocker::CompatabilityHacks(void)+0xb8>
         950f0:	e59fc034 	ldr	ip, [pc, #34]	; 9512c <TDocker::CompatabilityHacks(void)+0xd4>
         950f4:	e130000c 	teq	r0, ip
         950f8:	13a00fa5 	movne	r0, #660	; 0x294
         950fc:	12400a07 	subne	r0, r0, #28672	; 0x7000
         95100:	15840050 	strne	r0, [r4, #80]	; fField80
         95104:	e1a00004 	mov	r0, r4
         95108:	e3a0103c 	mov	r1, #60	; 0x3c
         9510c:	eb685939 	bl	1aab5f8 <TDocker::$Delay(unsigned long)>
         95110:	e1a0000d 	mov	r0, sp
         95114:	eb6d2fe7 	bl	1be10b8 <$ExitHandler>
         95118:	e28dd06c 	add	sp, sp, #108	; 0x6c
         9511c:	e3350000 	teq	r5, #0	; 0x0
         95120:	1affffd5 	bne	9507c <TDocker::CompatabilityHacks(void)+0x24>
         95124:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         95128:	6c706b67 	ldcvsl	11, cr6, [r0], -#412
         9512c:	64697363 	strvsbt	r7, [r9], -#867
    */
}

/**
 * Symbol: TDocker::DoConnection(RefVar const &, RefVar const &, RefVar const &, unsigned char &)
 * Address: 00095130
 */
TDocker::DoConnection(RefVar const &, RefVar const &, RefVar const &, unsigned char &) {
    /*
         95130:	e1a0c00d 	mov	ip, sp
         95134:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         95138:	e24cb004 	sub	fp, ip, #4	; 0x4
         9513c:	e1a04000 	mov	r4, r0
         95140:	e1a07001 	mov	r7, r1
         95144:	e1a06002 	mov	r6, r2
         95148:	e1a05003 	mov	r5, r3
         9514c:	e59b8004 	ldr	r8, [fp, #4]	; fField4
         95150:	e5d010b3 	ldrb	r1, [r0, #179]	; fField179
         95154:	e3a00000 	mov	r0, #0	; 0x0
         95158:	e3310000 	teq	r1, #0	; 0x0
         9515c:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         95160:	e1a09000 	mov	r9, r0
         95164:	e5c400af 	strb	r0, [r4, #175]	; fField175
         95168:	e56d0004 	strb	r0, [sp, -#4]!	; fField4
         9516c:	e3a00001 	mov	r0, #1	; 0x1
         95170:	e5c80000 	strb	r0, [r8]
         95174:	e5849050 	str	r9, [r4, #80]	; fField80
         95178:	e5d400ac 	ldrb	r0, [r4, #172]	; fField172
         9517c:	e284a014 	add	sl, r4, #20	; 0x14
         95180:	e3300000 	teq	r0, #0	; 0x0
         95184:	03a0008a 	moveq	r0, #138	; 0x8a
         95188:	02400c6e 	subeq	r0, r0, #28160	; 0x6e00
         9518c:	05840050 	streq	r0, [r4, #80]	; fField80
         95190:	0a00006b 	beq	95344 <TDocker::DoConnection(RefVar const &, RefVar const &, RefVar const &, unsigned char &)+0x214>
         95194:	e1a00004 	mov	r0, r4
         95198:	eb689b0f 	bl	1abbddc <TDocker::$WaitAndLockTDocker(void)>
         9519c:	e5961000 	ldr	r1, [r6]
         951a0:	e5911000 	ldr	r1, [r1]
         951a4:	e594000c 	ldr	r0, [r4, #12]	; fField12
         951a8:	e5801000 	str	r1, [r0]
         951ac:	e5951000 	ldr	r1, [r5]
         951b0:	e5911000 	ldr	r1, [r1]
         951b4:	e594001c 	ldr	r0, [r4, #28]	; fField28
         951b8:	e5801000 	str	r1, [r0]
         951bc:	e5970000 	ldr	r0, [r7]
         951c0:	e5900000 	ldr	r0, [r0]
         951c4:	e2500002 	subs	r0, r0, #2	; 0x2
         951c8:	13a00001 	movne	r0, #1	; 0x1
         951cc:	e5c400ad 	strb	r0, [r4, #173]	; fField173
         951d0:	e3a05002 	mov	r5, #2	; 0x2
         951d4:	e5940040 	ldr	r0, [r4, #64]	; fField64
         951d8:	e5805000 	str	r5, [r0]
         951dc:	e1a00004 	mov	r0, r4
         951e0:	eb68afb7 	bl	1ac10c4 <TDocker::$FreeCurrentStore(void)>
         951e4:	e59a0000 	ldr	r0, [sl]
         951e8:	e5805000 	str	r5, [r0]
         951ec:	e52d906c 	str	r9, [sp, -#108]!	; fField108
         951f0:	e28d0008 	add	r0, sp, #8	; 0x8
         951f4:	eb6c75de 	bl	1bb2974 <$setjmp>
         951f8:	e3300000 	teq	r0, #0	; 0x0
         951fc:	e1a0000d 	mov	r0, sp
         95200:	1a000049 	bne	9532c <TDocker::DoConnection(RefVar const &, RefVar const &, RefVar const &, unsigned char &)+0x1fc>
         95204:	eb6d2b9c 	bl	1be007c <$AddExceptionHandler>
         95208:	e3a07001 	mov	r7, #1	; 0x1
         9520c:	eb6cf9f0 	bl	1bd39d4 <$GetGlobals>
         95210:	e3a01000 	mov	r1, #0	; 0x0
         95214:	eb6c6125 	bl	1bad6b0 <TForkWorld::$Fork(TForkWorld *)>
         95218:	e5840050 	str	r0, [r4, #80]	; fField80
         9521c:	e3300000 	teq	r0, #0	; 0x0
         95220:	0a000004 	beq	95238 <TDocker::DoConnection(RefVar const &, RefVar const &, RefVar const &, unsigned char &)+0x108>
         95224:	e1a01000 	mov	r1, r0
         95228:	e59f0020 	ldr	r0, [pc, #20]	; 95250 <TDocker::DoConnection(RefVar const &, RefVar const &, RefVar const &, unsigned char &)+0x120>	; fField20
         9522c:	e5900000 	ldr	r0, [r0]
         95230:	e3a02000 	mov	r2, #0	; 0x0
         95234:	eb6d37d8 	bl	1be319c <$Throw>
         95238:	e5d400ae 	ldrb	r0, [r4, #174]	; fField174
         9523c:	e3300000 	teq	r0, #0	; 0x0
         95240:	0a000003 	beq	95254 <TDocker::DoConnection(RefVar const &, RefVar const &, RefVar const &, unsigned char &)+0x124>
         95244:	e1a00004 	mov	r0, r4
         95248:	eb6858d4 	bl	1aab5a0 <TDocker::$CompatabilityHacks(void)>
         9524c:	ea000039 	b	95338 <TDocker::DoConnection(RefVar const &, RefVar const &, RefVar const &, unsigned char &)+0x208>
         95250:	003712d0 	ldreqsb	r1, [r7], -r0
         95254:	e5d4002f 	ldrb	r0, [r4, #47]	; fField47
         95258:	e3300000 	teq	r0, #0	; 0x0
         9525c:	0a000015 	beq	952b8 <TDocker::DoConnection(RefVar const &, RefVar const &, RefVar const &, unsigned char &)+0x188>
         95260:	e1a00004 	mov	r0, r4
         95264:	e3a01001 	mov	r1, #1	; 0x1
         95268:	eb68508f 	bl	1aa94ac <TDocker::$BytesAvailable(unsigned char)>
         9526c:	e3300000 	teq	r0, #0	; 0x0
         95270:	1a000010 	bne	952b8 <TDocker::DoConnection(RefVar const &, RefVar const &, RefVar const &, unsigned char &)+0x188>
         95274:	e59400a4 	ldr	r0, [r4, #164]	; fField164
         95278:	e3300002 	teq	r0, #2	; 0x2
         9527c:	01a00004 	moveq	r0, r4
         95280:	03a02001 	moveq	r2, #1	; 0x1
         95284:	059f101c 	ldreq	r1, [pc, #1c]	; 952a8 <TDocker::DoConnection(RefVar const &, RefVar const &, RefVar const &, unsigned char &)+0x178>
         95288:	0a000004 	beq	952a0 <TDocker::DoConnection(RefVar const &, RefVar const &, RefVar const &, unsigned char &)+0x170>
         9528c:	e3300003 	teq	r0, #3	; 0x3
         95290:	e1a00004 	mov	r0, r4
         95294:	1a000005 	bne	952b0 <TDocker::DoConnection(RefVar const &, RefVar const &, RefVar const &, unsigned char &)+0x180>
         95298:	e3a02001 	mov	r2, #1	; 0x1
         9529c:	e59f1008 	ldr	r1, [pc, #8]	; 952ac <TDocker::DoConnection(RefVar const &, RefVar const &, RefVar const &, unsigned char &)+0x17c>
         952a0:	eb689ed8 	bl	1abce08 <TEzPipeProtocol::$WriteDockerHeader(unsigned long, unsigned char)>
         952a4:	ea000003 	b	952b8 <TDocker::DoConnection(RefVar const &, RefVar const &, RefVar const &, unsigned char &)+0x188>
         952a8:	7373796e 	cmnvc	r3, #1802240	; 0x1b8000
         952ac:	72727374 	rsbvcs	r7, r2, #-805306367	; 0xd0000001
         952b0:	e3a01000 	mov	r1, #0	; 0x0
         952b4:	eb689edc 	bl	1abce2c <TDocker::$WriteResult(long)>
         952b8:	e5c89000 	strb	r9, [r8]
         952bc:	e2846048 	add	r6, r4, #72	; 0x48
         952c0:	e2845044 	add	r5, r4, #68	; 0x44
         952c4:	ea00000e 	b	95304 <TDocker::DoConnection(RefVar const &, RefVar const &, RefVar const &, unsigned char &)+0x1d4>
         952c8:	e1a02006 	mov	r2, r6
         952cc:	e1a01005 	mov	r1, r5
         952d0:	e1a00004 	mov	r0, r4
         952d4:	eb688a3f 	bl	1ab7bd8 <TEzPipeProtocol::$ReadDockerHeader(unsigned long &, unsigned long &)>
         952d8:	e28d206c 	add	r2, sp, #108	; 0x6c
         952dc:	e1a01008 	mov	r1, r8
         952e0:	e1a00004 	mov	r0, r4
         952e4:	eb688a30 	bl	1ab7bac <TDocker::$ProcessCommand(unsigned char &, unsigned char &)>
         952e8:	e59400a4 	ldr	r0, [r4, #164]	; fField164
         952ec:	e3300009 	teq	r0, #9	; 0x9
         952f0:	1a000003 	bne	95304 <TDocker::DoConnection(RefVar const &, RefVar const &, RefVar const &, unsigned char &)+0x1d4>
         952f4:	e1a00004 	mov	r0, r4
         952f8:	eb68b38e 	bl	1ac2138 <TDocker::$KeyboardProcessCommand(void)>
         952fc:	e5cd706c 	strb	r7, [sp, #108]	; fField108
         95300:	e5c4702f 	strb	r7, [r4, #47]	; fField47
         95304:	e5940050 	ldr	r0, [r4, #80]	; fField80
         95308:	e3300000 	teq	r0, #0	; 0x0
         9530c:	05d80000 	ldreqb	r0, [r8]
         95310:	03300000 	teqeq	r0, #0	; 0x0
         95314:	05dd006c 	ldreqb	r0, [sp, #108]	; fField108
         95318:	03300000 	teqeq	r0, #0	; 0x0
         9531c:	05d400af 	ldreqb	r0, [r4, #175]	; fField175
         95320:	03300000 	teqeq	r0, #0	; 0x0
         95324:	0affffe7 	beq	952c8 <TDocker::DoConnection(RefVar const &, RefVar const &, RefVar const &, unsigned char &)+0x198>
         95328:	ea000002 	b	95338 <TDocker::DoConnection(RefVar const &, RefVar const &, RefVar const &, unsigned char &)+0x208>
         9532c:	e2801060 	add	r1, r0, #96	; 0x60
         95330:	e1a00004 	mov	r0, r4
         95334:	eb688a1d 	bl	1ab7bb0 <TDocker::$ProcessException(Exception *)>
         95338:	e1a0000d 	mov	r0, sp
         9533c:	eb6d2f5d 	bl	1be10b8 <$ExitHandler>
         95340:	e28dd06c 	add	sp, sp, #108	; 0x6c
         95344:	e5d400af 	ldrb	r0, [r4, #175]	; fField175
         95348:	e3300000 	teq	r0, #0	; 0x0
         9534c:	0a00000b 	beq	95380 <TDocker::DoConnection(RefVar const &, RefVar const &, RefVar const &, unsigned char &)+0x250>
         95350:	e5dd0000 	ldrb	r0, [sp]
         95354:	e3300000 	teq	r0, #0	; 0x0
         95358:	1a000003 	bne	9536c <TDocker::DoConnection(RefVar const &, RefVar const &, RefVar const &, unsigned char &)+0x23c>
         9535c:	e5d81000 	ldrb	r1, [r8]
         95360:	e1a00004 	mov	r0, r4
         95364:	eb685483 	bl	1aaa578 <TDocker::$CleanUpIfStopping(unsigned char)>
         95368:	e5c80000 	strb	r0, [r8]
         9536c:	e5940050 	ldr	r0, [r4, #80]	; fField80
         95370:	e280cdfa 	add	ip, r0, #16000	; 0x3e80
         95374:	e37c0005 	cmn	ip, #5	; 0x5
         95378:	05849050 	streq	r9, [r4, #80]	; fField80
         9537c:	ea000008 	b	953a4 <TDocker::DoConnection(RefVar const &, RefVar const &, RefVar const &, unsigned char &)+0x274>
         95380:	e5940050 	ldr	r0, [r4, #80]	; fField80
         95384:	e3300000 	teq	r0, #0	; 0x0
         95388:	059400a4 	ldreq	r0, [r4, #164]	; fField164
         9538c:	03300002 	teqeq	r0, #2	; 0x2
         95390:	1a000003 	bne	953a4 <TDocker::DoConnection(RefVar const &, RefVar const &, RefVar const &, unsigned char &)+0x274>
         95394:	e5dd0000 	ldrb	r0, [sp]
         95398:	e3300000 	teq	r0, #0	; 0x0
         9539c:	13a00001 	movne	r0, #1	; 0x1
         953a0:	15c400b2 	strneb	r0, [r4, #178]	; fField178
         953a4:	e3a05002 	mov	r5, #2	; 0x2
         953a8:	e594006c 	ldr	r0, [r4, #108]	; fField108
         953ac:	e5805000 	str	r5, [r0]
         953b0:	e5940070 	ldr	r0, [r4, #112]	; fField112
         953b4:	e5805000 	str	r5, [r0]
         953b8:	e5845060 	str	r5, [r4, #96]	; fField96
         953bc:	e1a00004 	mov	r0, r4
         953c0:	eb68af3f 	bl	1ac10c4 <TDocker::$FreeCurrentStore(void)>
         953c4:	e59a0000 	ldr	r0, [sl]
         953c8:	e5805000 	str	r5, [r0]
         953cc:	e5940028 	ldr	r0, [r4, #40]	; fField40
         953d0:	e5805000 	str	r5, [r0]
         953d4:	e5d81000 	ldrb	r1, [r8]
         953d8:	e1a00004 	mov	r0, r4
         953dc:	eb685464 	bl	1aaa574 <TDocker::$CleanUpIfError(unsigned char)>
         953e0:	e1a00004 	mov	r0, r4
         953e4:	eb689a6e 	bl	1abbda4 <TDocker::$UnlockTDocker(void)>
         953e8:	e5b40050 	ldr	r0, [r4, #80]!	; fField80
         953ec:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::KeyboardProcessCommand(void)
 * Address: 000953f0
 */
TDocker::KeyboardProcessCommand(void) {
    /*
         953f0:	e1a0c00d 	mov	ip, sp
         953f4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         953f8:	e24cb004 	sub	fp, ip, #4	; 0x4
         953fc:	e1a04000 	mov	r4, r0
         95400:	e24dd030 	sub	sp, sp, #48	; 0x30
         95404:	e3a07000 	mov	r7, #0	; 0x0
         95408:	e5cd7014 	strb	r7, [sp, #20]	; fField20
         9540c:	e3a00002 	mov	r0, #2	; 0x2
         95410:	eb6cb34d 	bl	1bc214c <$AllocateRefHandle(long)>
         95414:	e58d0010 	str	r0, [sp, #16]	; fField16
         95418:	e3a00002 	mov	r0, #2	; 0x2
         9541c:	eb6cb34a 	bl	1bc214c <$AllocateRefHandle(long)>
         95420:	e3a05002 	mov	r5, #2	; 0x2
         95424:	e58d000c 	str	r0, [sp, #12]	; fField12
         95428:	e1a00005 	mov	r0, r5
         9542c:	eb6cb346 	bl	1bc214c <$AllocateRefHandle(long)>
         95430:	e58d0000 	str	r0, [sp]
         95434:	e1a0000d 	mov	r0, sp
         95438:	eb691a52 	bl	1adbd88 <$FTimeInSeconds(RefVar const &)>
         9543c:	e3100003 	tst	r0, #3	; 0x3
         95440:	01a00140 	moveq	r0, r0, asr #2
         95444:	0a000000 	beq	9544c <TDocker::KeyboardProcessCommand(void)+0x5c>
         95448:	eb6cb333 	bl	1bc211c <$_RINTError(long)>
         9544c:	e1a0a000 	mov	sl, r0
         95450:	e59d0000 	ldr	r0, [sp]
         95454:	eb6cb758 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         95458:	e3a08001 	mov	r8, #1	; 0x1
         9545c:	e3a05002 	mov	r5, #2	; 0x2
         95460:	e1a00005 	mov	r0, r5
         95464:	eb6cb338 	bl	1bc214c <$AllocateRefHandle(long)>
         95468:	e58d0004 	str	r0, [sp, #4]	; fField4
         9546c:	e28d6004 	add	r6, sp, #4	; 0x4
         95470:	e1a00005 	mov	r0, r5
         95474:	eb6cb334 	bl	1bc214c <$AllocateRefHandle(long)>
         95478:	e58d0008 	str	r0, [sp, #8]
         9547c:	e28d2008 	add	r2, sp, #8	; 0x8
         95480:	e2840020 	add	r0, r4, #32	; 0x20
         95484:	e1a05000 	mov	r5, r0
         95488:	e59f1074 	ldr	r1, [pc, #74]	; 95504 <TDocker::KeyboardProcessCommand(void)+0x114>
         9548c:	e1a03006 	mov	r3, r6
         95490:	eb6daaec 	bl	1c00048 <$NSSend__FRC6RefVarN31>
         95494:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         95498:	eb6cb747 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9549c:	e59d0008 	ldr	r0, [sp, #8]
         954a0:	eb6cb745 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         954a4:	e3a07000 	mov	r7, #0	; 0x0
         954a8:	e3a06000 	mov	r6, #0	; 0x0
         954ac:	e52d706c 	str	r7, [sp, -#108]!	; fField108
         954b0:	e28d0008 	add	r0, sp, #8	; 0x8
         954b4:	eb6c752e 	bl	1bb2974 <$setjmp>
         954b8:	e3300000 	teq	r0, #0	; 0x0
         954bc:	1a0000c0 	bne	957c4 <TDocker::KeyboardProcessCommand(void)+0x3d4>
         954c0:	e1a0000d 	mov	r0, sp
         954c4:	eb6d2aec 	bl	1be007c <$AddExceptionHandler>
         954c8:	e3a00001 	mov	r0, #1	; 0x1
         954cc:	e2849048 	add	r9, r4, #72	; 0x48
         954d0:	e2841044 	add	r1, r4, #68	; 0x44
         954d4:	e58d1098 	str	r1, [sp, #152]	; fField152
         954d8:	e59f1028 	ldr	r1, [pc, #28]	; 95508 <TDocker::KeyboardProcessCommand(void)+0x118>	; fField28
         954dc:	e58d1094 	str	r1, [sp, #148]	; fField148
         954e0:	e59f1024 	ldr	r1, [pc, #24]	; 9550c <TDocker::KeyboardProcessCommand(void)+0x11c>	; fField24
         954e4:	e58d1090 	str	r1, [sp, #144]	; fField144
         954e8:	e59f1020 	ldr	r1, [pc, #20]	; 95510 <TDocker::KeyboardProcessCommand(void)+0x120>	; fField20
         954ec:	e58d108c 	str	r1, [sp, #140]	; fField140
         954f0:	e59f101c 	ldr	r1, [pc, #1c]	; 95514 <TDocker::KeyboardProcessCommand(void)+0x124>
         954f4:	e58d1088 	str	r1, [sp, #136]	; fField136
         954f8:	e59f1018 	ldr	r1, [pc, #18]	; 95518 <TDocker::KeyboardProcessCommand(void)+0x128>
         954fc:	e58d1084 	str	r1, [sp, #132]	; fField132
         95500:	ea000098 	b	95768 <TDocker::KeyboardProcessCommand(void)+0x378>
         95504:	00684810 	rsbeq	r4, r8, r0, lsl r8
         95508:	00683448 	rsbeq	r3, r8, r8, asr #8
         9550c:	00684fe8 	rsbeq	r4, r8, r8, ror #31
         95510:	00683008 	rsbeq	r3, r8, r8
         95514:	00683f58 	rsbeq	r3, r8, r8, asr pc
         95518:	00683170 	rsbeq	r3, r8, r0, ror r1
         9551c:	e1a02009 	mov	r2, r9
         95520:	e1a00004 	mov	r0, r4
         95524:	e59d1098 	ldr	r1, [sp, #152]	; fField152
         95528:	eb6889aa 	bl	1ab7bd8 <TEzPipeProtocol::$ReadDockerHeader(unsigned long &, unsigned long &)>
         9552c:	e28d2080 	add	r2, sp, #128	; 0x80
         95530:	e5941044 	ldr	r1, [r4, #68]	; fField68
         95534:	e1a00004 	mov	r0, r4
         95538:	eb68540a 	bl	1aaa568 <TDocker::$CheckProtocolExtension(unsigned long, unsigned char &)>
         9553c:	e3300000 	teq	r0, #0	; 0x0
         95540:	1a00002e 	bne	95600 <TDocker::KeyboardProcessCommand(void)+0x210>
         95544:	e28d2080 	add	r2, sp, #128	; 0x80
         95548:	e5941044 	ldr	r1, [r4, #68]	; fField68
         9554c:	e1a00004 	mov	r0, r4
         95550:	eb685405 	bl	1aaa56c <TDocker::$CheckProtocolPatch(unsigned long, unsigned char &)>
         95554:	e3300000 	teq	r0, #0	; 0x0
         95558:	1a000028 	bne	95600 <TDocker::KeyboardProcessCommand(void)+0x210>
         9555c:	e5940044 	ldr	r0, [r4, #68]	; fField68
         95560:	e59fc058 	ldr	ip, [pc, #58]	; 955c0 <TDocker::KeyboardProcessCommand(void)+0x1d0>
         95564:	e150000c 	cmp	r0, ip
         95568:	0a00008b 	beq	9579c <TDocker::KeyboardProcessCommand(void)+0x3ac>
         9556c:	ca000016 	bgt	955cc <TDocker::KeyboardProcessCommand(void)+0x1dc>
         95570:	e59fc04c 	ldr	ip, [pc, #4c]	; 955c4 <TDocker::KeyboardProcessCommand(void)+0x1d4>	; fField4
         95574:	e130000c 	teq	r0, ip
         95578:	0a000020 	beq	95600 <TDocker::KeyboardProcessCommand(void)+0x210>
         9557c:	e59fc044 	ldr	ip, [pc, #44]	; 955c8 <TDocker::KeyboardProcessCommand(void)+0x1d8>	; fField44
         95580:	e130000c 	teq	r0, ip
         95584:	1a000017 	bne	955e8 <TDocker::KeyboardProcessCommand(void)+0x1f8>
         95588:	e24dd004 	sub	sp, sp, #4	; 0x4
         9558c:	e1a0100d 	mov	r1, sp
         95590:	e5940000 	ldr	r0, [r4]
         95594:	eb6d3f4c 	bl	1be52cc <CPipe::$__rs(unsigned long &)>
         95598:	e59d0000 	ldr	r0, [sp]
         9559c:	e1a00820 	mov	r0, r0, lsr #16
         955a0:	e1a00800 	mov	r0, r0, lsl #16
         955a4:	e58d0000 	str	r0, [sp]
         955a8:	e1a0000d 	mov	r0, sp
         955ac:	eb6cbf48 	bl	1bc52d4 <$MakeString(unsigned short const *)>
         955b0:	e59d107c 	ldr	r1, [sp, #124]	; fField124
         955b4:	e5810000 	str	r0, [r1]
         955b8:	e28dd004 	add	sp, sp, #4	; 0x4
         955bc:	ea00000f 	b	95600 <TDocker::KeyboardProcessCommand(void)+0x210>
         955c0:	6b626473 	blvs	192e794 <ROM$$Size+0x120eb48>
         955c4:	68656c6f 	stmvsda	r5!, {r0, r1, r2, r3, r5, r6, sl, fp, sp, lr}^
         955c8:	6b626463 	blvs	192e75c <ROM$$Size+0x120eb10>
         955cc:	e59fc1bc 	ldr	ip, [pc, #1bc]	; 95790 <TDocker::KeyboardProcessCommand(void)+0x3a0>
         955d0:	e130000c 	teq	r0, ip
         955d4:	159fc1b8 	ldrne	ip, [pc, #1b8]	; 95794 <TDocker::KeyboardProcessCommand(void)+0x3a4>
         955d8:	1130000c 	teqne	r0, ip
         955dc:	03a00001 	moveq	r0, #1	; 0x1
         955e0:	05cd0080 	streqb	r0, [sp, #128]	; fField128
         955e4:	0a000005 	beq	95600 <TDocker::KeyboardProcessCommand(void)+0x210>
         955e8:	e1a00004 	mov	r0, r4
         955ec:	eb67fd17 	bl	1a94a50 <TDocker::$FlushCommand(void)>
         955f0:	e5942044 	ldr	r2, [r4, #68]	; fField68
         955f4:	e1a00004 	mov	r0, r4
         955f8:	e59f1198 	ldr	r1, [pc, #198]	; 95798 <TDocker::KeyboardProcessCommand(void)+0x3a8>
         955fc:	eb689e05 	bl	1abce18 <TDocker::$WriteLong(unsigned long, unsigned long)>
         95600:	e59d0078 	ldr	r0, [sp, #120]	; fField120
         95604:	e5900000 	ldr	r0, [r0]
         95608:	e3300002 	teq	r0, #2	; 0x2
         9560c:	0a00002b 	beq	956c0 <TDocker::KeyboardProcessCommand(void)+0x2d0>
         95610:	e24dd008 	sub	sp, sp, #8	; 0x8
         95614:	e3a07002 	mov	r7, #2	; 0x2
         95618:	e1a00007 	mov	r0, r7
         9561c:	eb6cb2ca 	bl	1bc214c <$AllocateRefHandle(long)>
         95620:	e58d0004 	str	r0, [sp, #4]	; fField4
         95624:	e28d0004 	add	r0, sp, #4	; 0x4
         95628:	eb6919d6 	bl	1adbd88 <$FTimeInSeconds(RefVar const &)>
         9562c:	eb6cb2c6 	bl	1bc214c <$AllocateRefHandle(long)>
         95630:	e58d0000 	str	r0, [sp]
         95634:	e1a0200d 	mov	r2, sp
         95638:	e1a00005 	mov	r0, r5
         9563c:	e59d109c 	ldr	r1, [sp, #156]	; fField156
         95640:	eb6cc348 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         95644:	e59d0000 	ldr	r0, [sp]
         95648:	eb6cb6db 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9564c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         95650:	eb6cb6d9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         95654:	e28d1094 	add	r1, sp, #148	; 0x94
         95658:	e8910003 	ldmia	r1, {r0, r1}
         9565c:	eb6daa6f 	bl	1c00020 <$NSCallGlobalFn__FRC6RefVarT1>
         95660:	e59d1084 	ldr	r1, [sp, #132]	; fField132
         95664:	e28d2080 	add	r2, sp, #128	; 0x80
         95668:	e5810000 	str	r0, [r1]
         9566c:	e28d1084 	add	r1, sp, #132	; 0x84
         95670:	e59d0090 	ldr	r0, [sp, #144]	; fField144
         95674:	eb6daa6a 	bl	1c00024 <$NSCallGlobalFn__FRC6RefVarN21>
         95678:	e59d0080 	ldr	r0, [sp, #128]	; fField128
         9567c:	e5807000 	str	r7, [r0]
         95680:	eb6cf8d3 	bl	1bd39d4 <$GetGlobals>
         95684:	e5900078 	ldr	r0, [r0, #120]	; fField120
         95688:	e3a01001 	mov	r1, #1	; 0x1
         9568c:	eb69475a 	bl	1ae73fc <TNewtEventHandler::$SetWakeupTime(unsigned long)>
         95690:	e24dd004 	sub	sp, sp, #4	; 0x4
         95694:	e5940048 	ldr	r0, [r4, #72]	; fField72
         95698:	e3500064 	cmp	r0, #100	; 0x64
         9569c:	9a000006 	bls	956bc <TDocker::KeyboardProcessCommand(void)+0x2cc>
         956a0:	e1a00007 	mov	r0, r7
         956a4:	eb6cb2a8 	bl	1bc214c <$AllocateRefHandle(long)>
         956a8:	e58d0000 	str	r0, [sp]
         956ac:	e1a0000d 	mov	r0, sp
         956b0:	eb68e83e 	bl	1acf7b0 <$FYieldToFork>
         956b4:	e59d0000 	ldr	r0, [sp]
         956b8:	eb6cb6bf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         956bc:	e28dd00c 	add	sp, sp, #12	; 0xc
         956c0:	e24dd004 	sub	sp, sp, #4	; 0x4
         956c4:	e3a00002 	mov	r0, #2	; 0x2
         956c8:	eb6cb29f 	bl	1bc214c <$AllocateRefHandle(long)>
         956cc:	e58d0000 	str	r0, [sp]
         956d0:	e1a0000d 	mov	r0, sp
         956d4:	eb6919ab 	bl	1adbd88 <$FTimeInSeconds(RefVar const &)>
         956d8:	e3100003 	tst	r0, #3	; 0x3
         956dc:	01a00140 	moveq	r0, r0, asr #2
         956e0:	0a000000 	beq	956e8 <TDocker::KeyboardProcessCommand(void)+0x2f8>
         956e4:	eb6cb28c 	bl	1bc211c <$_RINTError(long)>
         956e8:	e08a1008 	add	r1, sl, r8
         956ec:	e1500001 	cmp	r0, r1
         956f0:	93a07000 	movls	r7, #0	; 0x0
         956f4:	83a07001 	movhi	r7, #1	; 0x1
         956f8:	e59d0000 	ldr	r0, [sp]
         956fc:	eb6cb6ae 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         95700:	e3370000 	teq	r7, #0	; 0x0
         95704:	0a000016 	beq	95764 <TDocker::KeyboardProcessCommand(void)+0x374>
         95708:	e24dd004 	sub	sp, sp, #4	; 0x4
         9570c:	e3a00001 	mov	r0, #1	; 0x1
         95710:	e5c400b4 	strb	r0, [r4, #180]	; fField180
         95714:	e3a00002 	mov	r0, #2	; 0x2
         95718:	eb6cb28b 	bl	1bc214c <$AllocateRefHandle(long)>
         9571c:	e58d0000 	str	r0, [sp]
         95720:	e1a0200d 	mov	r2, sp
         95724:	e1a00005 	mov	r0, r5
         95728:	e59d108c 	ldr	r1, [sp, #140]	; fField140
         9572c:	eb6daa44 	bl	1c00044 <$NSSend__FRC6RefVarN21>
         95730:	e3100003 	tst	r0, #3	; 0x3
         95734:	01a00140 	moveq	r0, r0, asr #2
         95738:	0a000000 	beq	95740 <TDocker::KeyboardProcessCommand(void)+0x350>
         9573c:	eb6cb276 	bl	1bc211c <$_RINTError(long)>
         95740:	e1a01000 	mov	r1, r0
         95744:	e3a00ffa 	mov	r0, #1000	; 0x3e8
         95748:	eb6c747c 	bl	1bb2940 <$__rt_sdiv>
         9574c:	e1a08000 	mov	r8, r0
         95750:	e59d0000 	ldr	r0, [sp]
         95754:	eb6cb698 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         95758:	e3a00000 	mov	r0, #0	; 0x0
         9575c:	e5c400b4 	strb	r0, [r4, #180]	; fField180
         95760:	e28dd004 	add	sp, sp, #4	; 0x4
         95764:	e28dd004 	add	sp, sp, #4	; 0x4
         95768:	e5940050 	ldr	r0, [r4, #80]	; fField80
         9576c:	e3300000 	teq	r0, #0	; 0x0
         95770:	05dd0080 	ldreqb	r0, [sp, #128]	; fField128
         95774:	03300000 	teqeq	r0, #0	; 0x0
         95778:	05d400af 	ldreqb	r0, [r4, #175]	; fField175
         9577c:	03300000 	teqeq	r0, #0	; 0x0
         95780:	0affff65 	beq	9551c <TDocker::KeyboardProcessCommand(void)+0x12c>
         95784:	e1a0000d 	mov	r0, sp
         95788:	eb6d2e4a 	bl	1be10b8 <$ExitHandler>
         9578c:	ea00000d 	b	957c8 <TDocker::KeyboardProcessCommand(void)+0x3d8>
         95790:	6f706361 	swivs	0x00706361
         95794:	6f70646e 	swivs	0x0070646e
         95798:	756e6b6e 	strvcb	r6, [lr, -#2926]!
         9579c:	e5941048 	ldr	r1, [r4, #72]	; fField72
         957a0:	e1a00004 	mov	r0, r4
         957a4:	eb6825ed 	bl	1a9ef60 <TDocker::$ReadString(unsigned long)>
         957a8:	e1a07000 	mov	r7, r0
         957ac:	eb6cbec8 	bl	1bc52d4 <$MakeString(unsigned short const *)>
         957b0:	e59d1078 	ldr	r1, [sp, #120]	; fField120
         957b4:	e5810000 	str	r0, [r1]
         957b8:	e1a00007 	mov	r0, r7
         957bc:	eb6d2e3c 	bl	1be10b4 <$DisposPtr>
         957c0:	eaffff8e 	b	95600 <TDocker::KeyboardProcessCommand(void)+0x210>
         957c4:	e3a06001 	mov	r6, #1	; 0x1
         957c8:	e24dd004 	sub	sp, sp, #4	; 0x4
         957cc:	e3a00002 	mov	r0, #2	; 0x2
         957d0:	eb6cb25d 	bl	1bc214c <$AllocateRefHandle(long)>
         957d4:	e58d0000 	str	r0, [sp]
         957d8:	e1a0200d 	mov	r2, sp
         957dc:	e1a00005 	mov	r0, r5
         957e0:	e59f1038 	ldr	r1, [pc, #38]	; 95820 <TDocker::KeyboardProcessCommand(void)+0x430>
         957e4:	eb6daa16 	bl	1c00044 <$NSSend__FRC6RefVarN21>
         957e8:	e59d0000 	ldr	r0, [sp]
         957ec:	eb6cb672 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         957f0:	e3a07000 	mov	r7, #0	; 0x0
         957f4:	e5c470b4 	strb	r7, [r4, #180]	; fField180
         957f8:	e28dd004 	add	sp, sp, #4	; 0x4
         957fc:	e3360000 	teq	r6, #0	; 0x0
         95800:	11a0000d 	movne	r0, sp
         95804:	1b6d3252 	blne	1be2154 <$NextHandler>
         95808:	e28dd06c 	add	sp, sp, #108	; 0x6c
         9580c:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         95810:	eb6cb669 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         95814:	e59d0010 	ldr	r0, [sp, #16]	; fField16
         95818:	eb6cb667 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9581c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         95820:	00684860 	rsbeq	r4, r8, r0, ror #16
    */
}

/**
 * Symbol: TDocker::DoKeyboardPassthrough(void)
 * Address: 000958cc
 */
TDocker::DoKeyboardPassthrough(void) {
    /*
         958cc:	e1a0c00d 	mov	ip, sp
         958d0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         958d4:	e24cb004 	sub	fp, ip, #4	; 0x4
         958d8:	e1a04000 	mov	r4, r0
         958dc:	e5d010b3 	ldrb	r1, [r0, #179]	; fField179
         958e0:	e3a00000 	mov	r0, #0	; 0x0
         958e4:	e3310000 	teq	r1, #0	; 0x0
         958e8:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         958ec:	e1a05000 	mov	r5, r0
         958f0:	e5840050 	str	r0, [r4, #80]	; fField80
         958f4:	e5d400ac 	ldrb	r0, [r4, #172]	; fField172
         958f8:	e3300000 	teq	r0, #0	; 0x0
         958fc:	03a0008a 	moveq	r0, #138	; 0x8a
         95900:	02400c6e 	subeq	r0, r0, #28160	; 0x6e00
         95904:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         95908:	e1a00004 	mov	r0, r4
         9590c:	eb689932 	bl	1abbddc <TDocker::$WaitAndLockTDocker(void)>
         95910:	e52d506c 	str	r5, [sp, -#108]!	; fField108
         95914:	e28d0008 	add	r0, sp, #8	; 0x8
         95918:	eb6c7415 	bl	1bb2974 <$setjmp>
         9591c:	e3300000 	teq	r0, #0	; 0x0
         95920:	e1a0000d 	mov	r0, sp
         95924:	1a000016 	bne	95984 <TDocker::DoKeyboardPassthrough(void)+0xb8>
         95928:	eb6d29d3 	bl	1be007c <$AddExceptionHandler>
         9592c:	e3a06001 	mov	r6, #1	; 0x1
         95930:	eb6cf827 	bl	1bd39d4 <$GetGlobals>
         95934:	e3a01000 	mov	r1, #0	; 0x0
         95938:	eb6c5f5c 	bl	1bad6b0 <TForkWorld::$Fork(TForkWorld *)>
         9593c:	e5840050 	str	r0, [r4, #80]	; fField80
         95940:	e3300000 	teq	r0, #0	; 0x0
         95944:	0a000004 	beq	9595c <TDocker::DoKeyboardPassthrough(void)+0x90>
         95948:	e1a01000 	mov	r1, r0
         9594c:	e59f0028 	ldr	r0, [pc, #28]	; 9597c <TDocker::DoKeyboardPassthrough(void)+0xb0>	; fField28
         95950:	e5900000 	ldr	r0, [r0]
         95954:	e3a02000 	mov	r2, #0	; 0x0
         95958:	eb6d360f 	bl	1be319c <$Throw>
         9595c:	e1a00004 	mov	r0, r4
         95960:	e3a02001 	mov	r2, #1	; 0x1
         95964:	e59f1014 	ldr	r1, [pc, #14]	; 95980 <TDocker::DoKeyboardPassthrough(void)+0xb4>
         95968:	eb689d26 	bl	1abce08 <TEzPipeProtocol::$WriteDockerHeader(unsigned long, unsigned char)>
         9596c:	e1a00004 	mov	r0, r4
         95970:	eb68b1f0 	bl	1ac2138 <TDocker::$KeyboardProcessCommand(void)>
         95974:	e5c4602f 	strb	r6, [r4, #47]	; fField47
         95978:	ea000004 	b	95990 <TDocker::DoKeyboardPassthrough(void)+0xc4>
         9597c:	003712d0 	ldreqsb	r1, [r7], -r0
         95980:	6b796264 	blvs	1eee318 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x2ddac0>
         95984:	e2801060 	add	r1, r0, #96	; 0x60
         95988:	e1a00004 	mov	r0, r4
         9598c:	eb688887 	bl	1ab7bb0 <TDocker::$ProcessException(Exception *)>
         95990:	e1a0000d 	mov	r0, sp
         95994:	eb6d2dc7 	bl	1be10b8 <$ExitHandler>
         95998:	e28dd06c 	add	sp, sp, #108	; 0x6c
         9599c:	e1a00004 	mov	r0, r4
         959a0:	e3a01000 	mov	r1, #0	; 0x0
         959a4:	eb6852f3 	bl	1aaa578 <TDocker::$CleanUpIfStopping(unsigned char)>
         959a8:	e5940050 	ldr	r0, [r4, #80]	; fField80
         959ac:	e280cdfa 	add	ip, r0, #16000	; 0x3e80
         959b0:	e37c0005 	cmn	ip, #5	; 0x5
         959b4:	05845050 	streq	r5, [r4, #80]	; fField80
         959b8:	e1a00004 	mov	r0, r4
         959bc:	e3a01000 	mov	r1, #0	; 0x0
         959c0:	eb6852eb 	bl	1aaa574 <TDocker::$CleanUpIfError(unsigned char)>
         959c4:	e1a00004 	mov	r0, r4
         959c8:	eb6898f5 	bl	1abbda4 <TDocker::$UnlockTDocker(void)>
         959cc:	e5b40050 	ldr	r0, [r4, #80]!	; fField80
         959d0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::WriteCommand(RefVar const &, RefVar const &, long, unsigned char, unsigned long &)
 * Address: 000959d4
 */
TDocker::WriteCommand(RefVar const &, RefVar const &, long, unsigned char, unsigned long &) {
    /*
         959d4:	e1a0c00d 	mov	ip, sp
         959d8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         959dc:	e24cb004 	sub	fp, ip, #4	; 0x4
         959e0:	e1a04000 	mov	r4, r0
         959e4:	e1a07001 	mov	r7, r1
         959e8:	e1a06002 	mov	r6, r2
         959ec:	e1a05003 	mov	r5, r3
         959f0:	e99b0101 	ldmib	fp, {r0, r8}
         959f4:	e20000ff 	and	r0, r0, #255	; 0xff
         959f8:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         959fc:	e5d410b3 	ldrb	r1, [r4, #179]	; fField179
         95a00:	e3a00000 	mov	r0, #0	; 0x0
         95a04:	e3310000 	teq	r1, #0	; 0x0
         95a08:	1a000089 	bne	95c34 <TDocker::WriteCommand(RefVar const &, RefVar const &, long, unsigned char, unsigned long &)+0x260>
         95a0c:	e3a00000 	mov	r0, #0	; 0x0
         95a10:	e5840050 	str	r0, [r4, #80]	; fField80
         95a14:	e5c40031 	strb	r0, [r4, #49]	; fField49
         95a18:	e3a09000 	mov	r9, #0	; 0x0
         95a1c:	e1a00004 	mov	r0, r4
         95a20:	eb68adb5 	bl	1ac10fc <TDocker::$GetTDockerLock(void)>
         95a24:	e3300000 	teq	r0, #0	; 0x0
         95a28:	0a000003 	beq	95a3c <TDocker::WriteCommand(RefVar const &, RefVar const &, long, unsigned char, unsigned long &)+0x68>
         95a2c:	e5d400af 	ldrb	r0, [r4, #175]	; fField175
         95a30:	e3300000 	teq	r0, #0	; 0x0
         95a34:	03a00001 	moveq	r0, #1	; 0x1
         95a38:	0a000000 	beq	95a40 <TDocker::WriteCommand(RefVar const &, RefVar const &, long, unsigned char, unsigned long &)+0x6c>
         95a3c:	e3a00000 	mov	r0, #0	; 0x0
         95a40:	e200a0ff 	and	sl, r0, #255	; 0xff
         95a44:	e3a00000 	mov	r0, #0	; 0x0
         95a48:	e52d006c 	str	r0, [sp, -#108]!	; fField108
         95a4c:	e28d0008 	add	r0, sp, #8	; 0x8
         95a50:	eb6c73c7 	bl	1bb2974 <$setjmp>
         95a54:	e3300000 	teq	r0, #0	; 0x0
         95a58:	e1a0000d 	mov	r0, sp
         95a5c:	1a000064 	bne	95bf4 <TDocker::WriteCommand(RefVar const &, RefVar const &, long, unsigned char, unsigned long &)+0x220>
         95a60:	eb6d2985 	bl	1be007c <$AddExceptionHandler>
         95a64:	e1a00007 	mov	r0, r7
         95a68:	eb6cbe0b 	bl	1bc529c <$IsString(RefVar const &)>
         95a6c:	e3300000 	teq	r0, #0	; 0x0
         95a70:	1a000005 	bne	95a8c <TDocker::WriteCommand(RefVar const &, RefVar const &, long, unsigned char, unsigned long &)+0xb8>
         95a74:	e59f00e0 	ldr	r0, [pc, #e0]	; 95b5c <TDocker::WriteCommand(RefVar const &, RefVar const &, long, unsigned char, unsigned long &)+0x188>
         95a78:	e5900000 	ldr	r0, [r0]
         95a7c:	e3a02000 	mov	r2, #0	; 0x0
         95a80:	e3a01fa5 	mov	r1, #660	; 0x294
         95a84:	e2411a07 	sub	r1, r1, #28672	; 0x7000
         95a88:	eb6d35c3 	bl	1be319c <$Throw>
         95a8c:	e24dd014 	sub	sp, sp, #20	; 0x14
         95a90:	e1a00007 	mov	r0, r7
         95a94:	eb6cb5ba 	bl	1bc3184 <$GetCString(RefVar const &)>
         95a98:	e1a0100d 	mov	r1, sp
         95a9c:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
         95aa0:	e3a02004 	mov	r2, #4	; 0x4
         95aa4:	eb6d4635 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
         95aa8:	e59d0000 	ldr	r0, [sp]
         95aac:	e33a0000 	teq	sl, #0	; 0x0
         95ab0:	e5880000 	str	r0, [r8]
         95ab4:	0a000004 	beq	95acc <TDocker::WriteCommand(RefVar const &, RefVar const &, long, unsigned char, unsigned long &)+0xf8>
         95ab8:	e59fc0a0 	ldr	ip, [pc, #a0]	; 95b60 <TDocker::WriteCommand(RefVar const &, RefVar const &, long, unsigned char, unsigned long &)+0x18c>
         95abc:	e130000c 	teq	r0, ip
         95ac0:	05d400b4 	ldreqb	r0, [r4, #180]	; fField180
         95ac4:	03300000 	teqeq	r0, #0	; 0x0
         95ac8:	0a000047 	beq	95bec <TDocker::WriteCommand(RefVar const &, RefVar const &, long, unsigned char, unsigned long &)+0x218>
         95acc:	e1a00004 	mov	r0, r4
         95ad0:	eb6898c1 	bl	1abbddc <TDocker::$WaitAndLockTDocker(void)>
         95ad4:	e1b09000 	movs	r9, r0
         95ad8:	0a000043 	beq	95bec <TDocker::WriteCommand(RefVar const &, RefVar const &, long, unsigned char, unsigned long &)+0x218>
         95adc:	e5d400ac 	ldrb	r0, [r4, #172]	; fField172
         95ae0:	e3300000 	teq	r0, #0	; 0x0
         95ae4:	1a000006 	bne	95b04 <TDocker::WriteCommand(RefVar const &, RefVar const &, long, unsigned char, unsigned long &)+0x130>
         95ae8:	e5980000 	ldr	r0, [r8]
         95aec:	e59fc06c 	ldr	ip, [pc, #6c]	; 95b60 <TDocker::WriteCommand(RefVar const &, RefVar const &, long, unsigned char, unsigned long &)+0x18c>
         95af0:	e130000c 	teq	r0, ip
         95af4:	13a0008a 	movne	r0, #138	; 0x8a
         95af8:	12400c6e 	subne	r0, r0, #28160	; 0x6e00
         95afc:	15840050 	strne	r0, [r4, #80]	; fField80
         95b00:	1a000034 	bne	95bd8 <TDocker::WriteCommand(RefVar const &, RefVar const &, long, unsigned char, unsigned long &)+0x204>
         95b04:	e59d0080 	ldr	r0, [sp, #128]	; fField128
         95b08:	e3300000 	teq	r0, #0	; 0x0
         95b0c:	1a000014 	bne	95b64 <TDocker::WriteCommand(RefVar const &, RefVar const &, long, unsigned char, unsigned long &)+0x190>
         95b10:	e3550000 	cmp	r5, #0	; 0x0
         95b14:	c3a00001 	movgt	r0, #1	; 0x1
         95b18:	c5845048 	strgt	r5, [r4, #72]	; fField72
         95b1c:	c5c40031 	strgtb	r0, [r4, #49]	; fField49
         95b20:	ca000003 	bgt	95b34 <TDocker::WriteCommand(RefVar const &, RefVar const &, long, unsigned char, unsigned long &)+0x160>
         95b24:	e5d40031 	ldrb	r0, [r4, #49]	; fField49
         95b28:	e3300000 	teq	r0, #0	; 0x0
         95b2c:	03a02001 	moveq	r2, #1	; 0x1
         95b30:	0a000000 	beq	95b38 <TDocker::WriteCommand(RefVar const &, RefVar const &, long, unsigned char, unsigned long &)+0x164>
         95b34:	e3a02000 	mov	r2, #0	; 0x0
         95b38:	e1a00004 	mov	r0, r4
         95b3c:	e5981000 	ldr	r1, [r8]
         95b40:	eb689cb0 	bl	1abce08 <TEzPipeProtocol::$WriteDockerHeader(unsigned long, unsigned char)>
         95b44:	e5d40031 	ldrb	r0, [r4, #49]	; fField49
         95b48:	e3300000 	teq	r0, #0	; 0x0
         95b4c:	11a01005 	movne	r1, r5
         95b50:	15940000 	ldrne	r0, [r4]
         95b54:	1b6d3dd1 	blne	1be52a0 <CPipe::$__ls(long)>
         95b58:	ea00001e 	b	95bd8 <TDocker::WriteCommand(RefVar const &, RefVar const &, long, unsigned char, unsigned long &)+0x204>
         95b5c:	003712d0 	ldreqsb	r1, [r7], -r0
         95b60:	68656c6f 	stmvsda	r5!, {r0, r1, r2, r3, r5, r6, sl, fp, sp, lr}^
         95b64:	e5960000 	ldr	r0, [r6]
         95b68:	e5900000 	ldr	r0, [r0]
         95b6c:	e3100003 	tst	r0, #3	; 0x3
         95b70:	1a000014 	bne	95bc8 <TDocker::WriteCommand(RefVar const &, RefVar const &, long, unsigned char, unsigned long &)+0x1f4>
         95b74:	e1a00004 	mov	r0, r4
         95b78:	e3a02000 	mov	r2, #0	; 0x0
         95b7c:	e5981000 	ldr	r1, [r8]
         95b80:	eb689ca0 	bl	1abce08 <TEzPipeProtocol::$WriteDockerHeader(unsigned long, unsigned char)>
         95b84:	e3a01004 	mov	r1, #4	; 0x4
         95b88:	e5940000 	ldr	r0, [r4]
         95b8c:	eb6d3dc3 	bl	1be52a0 <CPipe::$__ls(long)>
         95b90:	e5960000 	ldr	r0, [r6]
         95b94:	e5900000 	ldr	r0, [r0]
         95b98:	e3100003 	tst	r0, #3	; 0x3
         95b9c:	01a00140 	moveq	r0, r0, asr #2
         95ba0:	0a000000 	beq	95ba8 <TDocker::WriteCommand(RefVar const &, RefVar const &, long, unsigned char, unsigned long &)+0x1d4>
         95ba4:	eb6cb15c 	bl	1bc211c <$_RINTError(long)>
         95ba8:	e1a01000 	mov	r1, r0
         95bac:	e5940000 	ldr	r0, [r4]
         95bb0:	eb6d3dba 	bl	1be52a0 <CPipe::$__ls(long)>
         95bb4:	e5940000 	ldr	r0, [r4]
         95bb8:	e5901000 	ldr	r1, [r0]
         95bbc:	e1a0e00f 	mov	lr, pc
         95bc0:	e281f020 	add	pc, r1, #32	; 0x20
         95bc4:	ea000003 	b	95bd8 <TDocker::WriteCommand(RefVar const &, RefVar const &, long, unsigned char, unsigned long &)+0x204>
         95bc8:	e1a02006 	mov	r2, r6
         95bcc:	e1a00004 	mov	r0, r4
         95bd0:	e5981000 	ldr	r1, [r8]
         95bd4:	eb689c93 	bl	1abce28 <TDocker::$WriteRef(unsigned long, RefVar const &)>
         95bd8:	e5980000 	ldr	r0, [r8]
         95bdc:	e51fc084 	ldr	ip, [pc, #ffffff7c]	; 95b60 <TDocker::WriteCommand(RefVar const &, RefVar const &, long, unsigned char, unsigned long &)+0x18c>
         95be0:	e130000c 	teq	r0, ip
         95be4:	13a00000 	movne	r0, #0	; 0x0
         95be8:	15c4002f 	strneb	r0, [r4, #47]	; fField47
         95bec:	e28dd014 	add	sp, sp, #20	; 0x14
         95bf0:	ea000002 	b	95c00 <TDocker::WriteCommand(RefVar const &, RefVar const &, long, unsigned char, unsigned long &)+0x22c>
         95bf4:	e2801060 	add	r1, r0, #96	; 0x60
         95bf8:	e1a00004 	mov	r0, r4
         95bfc:	eb6887eb 	bl	1ab7bb0 <TDocker::$ProcessException(Exception *)>
         95c00:	e1a0000d 	mov	r0, sp
         95c04:	eb6d2d2b 	bl	1be10b8 <$ExitHandler>
         95c08:	e28dd06c 	add	sp, sp, #108	; 0x6c
         95c0c:	e33a0000 	teq	sl, #0	; 0x0
         95c10:	0a000008 	beq	95c38 <TDocker::WriteCommand(RefVar const &, RefVar const &, long, unsigned char, unsigned long &)+0x264>
         95c14:	e3390000 	teq	r9, #0	; 0x0
         95c18:	1a000006 	bne	95c38 <TDocker::WriteCommand(RefVar const &, RefVar const &, long, unsigned char, unsigned long &)+0x264>
         95c1c:	e5980000 	ldr	r0, [r8]
         95c20:	e51fc0c8 	ldr	ip, [pc, #ffffff38]	; 95b60 <TDocker::WriteCommand(RefVar const &, RefVar const &, long, unsigned char, unsigned long &)+0x18c>
         95c24:	e130000c 	teq	r0, ip
         95c28:	13a00085 	movne	r0, #133	; 0x85
         95c2c:	12400c6e 	subne	r0, r0, #28160	; 0x6e00
         95c30:	03a00000 	moveq	r0, #0	; 0x0
         95c34:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         95c38:	e1a00004 	mov	r0, r4
         95c3c:	e3a01000 	mov	r1, #0	; 0x0
         95c40:	eb68524c 	bl	1aaa578 <TDocker::$CleanUpIfStopping(unsigned char)>
         95c44:	e1a00004 	mov	r0, r4
         95c48:	e3a01000 	mov	r1, #0	; 0x0
         95c4c:	eb685248 	bl	1aaa574 <TDocker::$CleanUpIfError(unsigned char)>
         95c50:	e33a0000 	teq	sl, #0	; 0x0
         95c54:	1a000002 	bne	95c64 <TDocker::WriteCommand(RefVar const &, RefVar const &, long, unsigned char, unsigned long &)+0x290>
         95c58:	e3390000 	teq	r9, #0	; 0x0
         95c5c:	11a00004 	movne	r0, r4
         95c60:	1b68984f 	blne	1abbda4 <TDocker::$UnlockTDocker(void)>
         95c64:	e5b40050 	ldr	r0, [r4, #80]!	; fField80
         95c68:	eafffff1 	b	95c34 <TDocker::WriteCommand(RefVar const &, RefVar const &, long, unsigned char, unsigned long &)+0x260>
    */
}

/**
 * Symbol: TDocker::WriteBytes(RefVar const &)
 * Address: 00095c6c
 */
TDocker::WriteBytes(RefVar const &) {
    /*
         95c6c:	e1a0c00d 	mov	ip, sp
         95c70:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         95c74:	e24cb004 	sub	fp, ip, #4	; 0x4
         95c78:	e1a04000 	mov	r4, r0
         95c7c:	e1a05001 	mov	r5, r1
         95c80:	e5d010b3 	ldrb	r1, [r0, #179]	; fField179
         95c84:	e3a00000 	mov	r0, #0	; 0x0
         95c88:	e3310000 	teq	r1, #0	; 0x0
         95c8c:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
         95c90:	e1a07000 	mov	r7, r0
         95c94:	e5840050 	str	r0, [r4, #80]	; fField80
         95c98:	e1a00004 	mov	r0, r4
         95c9c:	eb68984e 	bl	1abbddc <TDocker::$WaitAndLockTDocker(void)>
         95ca0:	e52d706c 	str	r7, [sp, -#108]!	; fField108
         95ca4:	e28d0008 	add	r0, sp, #8	; 0x8
         95ca8:	eb6c7331 	bl	1bb2974 <$setjmp>
         95cac:	e3300000 	teq	r0, #0	; 0x0
         95cb0:	e1a0000d 	mov	r0, sp
         95cb4:	1a000033 	bne	95d88 <TDocker::WriteBytes(RefVar const &)+0x11c>
         95cb8:	eb6d28ef 	bl	1be007c <$AddExceptionHandler>
         95cbc:	e5d40031 	ldrb	r0, [r4, #49]	; fField49
         95cc0:	e3300000 	teq	r0, #0	; 0x0
         95cc4:	03a00fa5 	moveq	r0, #660	; 0x294
         95cc8:	02400a07 	subeq	r0, r0, #28672	; 0x7000
         95ccc:	05840050 	streq	r0, [r4, #80]	; fField80
         95cd0:	0a00002f 	beq	95d94 <TDocker::WriteBytes(RefVar const &)+0x128>
         95cd4:	e5950000 	ldr	r0, [r5]
         95cd8:	e5900000 	ldr	r0, [r0]
         95cdc:	eb6cbd72 	bl	1bc52ac <$Length(long)>
         95ce0:	e1a06000 	mov	r6, r0
         95ce4:	e5940048 	ldr	r0, [r4, #72]	; fField72
         95ce8:	e594103c 	ldr	r1, [r4, #60]	; fField60
         95cec:	e0400001 	sub	r0, r0, r1
         95cf0:	e1500006 	cmp	r0, r6
         95cf4:	31a06000 	movcc	r6, r0
         95cf8:	e0810006 	add	r0, r1, r6
         95cfc:	e584003c 	str	r0, [r4, #60]	; fField60
         95d00:	e24dd008 	sub	sp, sp, #8	; 0x8
         95d04:	e1a01005 	mov	r1, r5
         95d08:	e1a0000d 	mov	r0, sp
         95d0c:	eb6cacf1 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
         95d10:	e1a0100d 	mov	r1, sp
         95d14:	e28d0004 	add	r0, sp, #4	; 0x4
         95d18:	eb6caced 	bl	1bc10d4 <TObjectPtr::$__ct(TObjectPtr const &)>
         95d1c:	e1a0000d 	mov	r0, sp
         95d20:	e3a01000 	mov	r1, #0	; 0x0
         95d24:	eb6cb0f5 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         95d28:	e28d0004 	add	r0, sp, #4	; 0x4
         95d2c:	e5945000 	ldr	r5, [r4]
         95d30:	eb6cb0f7 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
         95d34:	e1a01000 	mov	r1, r0
         95d38:	e1a02006 	mov	r2, r6
         95d3c:	e1a00005 	mov	r0, r5
         95d40:	e3a03000 	mov	r3, #0	; 0x0
         95d44:	e595c000 	ldr	ip, [r5]
         95d48:	e1a0e00f 	mov	lr, pc
         95d4c:	e28cf018 	add	pc, ip, #24	; 0x18
         95d50:	e5940048 	ldr	r0, [r4, #72]	; fField72
         95d54:	e594103c 	ldr	r1, [r4, #60]	; fField60
         95d58:	e1310000 	teq	r1, r0
         95d5c:	1a000004 	bne	95d74 <TDocker::WriteBytes(RefVar const &)+0x108>
         95d60:	e5c47031 	strb	r7, [r4, #49]	; fField49
         95d64:	e5940000 	ldr	r0, [r4]
         95d68:	e5901000 	ldr	r1, [r0]
         95d6c:	e1a0e00f 	mov	lr, pc
         95d70:	e281f020 	add	pc, r1, #32	; 0x20
         95d74:	e28d0004 	add	r0, sp, #4	; 0x4
         95d78:	e3a01000 	mov	r1, #0	; 0x0
         95d7c:	eb6cb0df 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         95d80:	e28dd008 	add	sp, sp, #8	; 0x8
         95d84:	ea000002 	b	95d94 <TDocker::WriteBytes(RefVar const &)+0x128>
         95d88:	e2801060 	add	r1, r0, #96	; 0x60
         95d8c:	e1a00004 	mov	r0, r4
         95d90:	eb688786 	bl	1ab7bb0 <TDocker::$ProcessException(Exception *)>
         95d94:	e1a0000d 	mov	r0, sp
         95d98:	eb6d2cc6 	bl	1be10b8 <$ExitHandler>
         95d9c:	e28dd06c 	add	sp, sp, #108	; 0x6c
         95da0:	e1a00004 	mov	r0, r4
         95da4:	e3a01000 	mov	r1, #0	; 0x0
         95da8:	eb6851f2 	bl	1aaa578 <TDocker::$CleanUpIfStopping(unsigned char)>
         95dac:	e1a00004 	mov	r0, r4
         95db0:	e3a01000 	mov	r1, #0	; 0x0
         95db4:	eb6851ee 	bl	1aaa574 <TDocker::$CleanUpIfError(unsigned char)>
         95db8:	e1a00004 	mov	r0, r4
         95dbc:	eb6897f8 	bl	1abbda4 <TDocker::$UnlockTDocker(void)>
         95dc0:	e5b40050 	ldr	r0, [r4, #80]!	; fField80
         95dc4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::ReadCommandData(RefVar &)
 * Address: 00095dc8
 */
TDocker::ReadCommandData(RefVar &) {
    /*
         95dc8:	e1a0c00d 	mov	ip, sp
         95dcc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         95dd0:	e24cb004 	sub	fp, ip, #4	; 0x4
         95dd4:	e1a04000 	mov	r4, r0
         95dd8:	e1a05001 	mov	r5, r1
         95ddc:	e5d010b3 	ldrb	r1, [r0, #179]	; fField179
         95de0:	e3a00000 	mov	r0, #0	; 0x0
         95de4:	e3310000 	teq	r1, #0	; 0x0
         95de8:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         95dec:	e5840050 	str	r0, [r4, #80]	; fField80
         95df0:	e1a00004 	mov	r0, r4
         95df4:	eb6897f8 	bl	1abbddc <TDocker::$WaitAndLockTDocker(void)>
         95df8:	e1a01005 	mov	r1, r5
         95dfc:	e1a00004 	mov	r0, r4
         95e00:	eb688772 	bl	1ab7bd0 <TDocker::$ReadData(RefVar &)>
         95e04:	e1a00004 	mov	r0, r4
         95e08:	e3a01000 	mov	r1, #0	; 0x0
         95e0c:	eb6851d9 	bl	1aaa578 <TDocker::$CleanUpIfStopping(unsigned char)>
         95e10:	e1a00004 	mov	r0, r4
         95e14:	e3a01000 	mov	r1, #0	; 0x0
         95e18:	eb6851d5 	bl	1aaa574 <TDocker::$CleanUpIfError(unsigned char)>
         95e1c:	e1a00004 	mov	r0, r4
         95e20:	eb6897df 	bl	1abbda4 <TDocker::$UnlockTDocker(void)>
         95e24:	e5b40050 	ldr	r0, [r4, #80]!	; fField80
         95e28:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::FlushCommandData(void)
 * Address: 00095e2c
 */
TDocker::FlushCommandData(void) {
    /*
         95e2c:	e1a0c00d 	mov	ip, sp
         95e30:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         95e34:	e24cb004 	sub	fp, ip, #4	; 0x4
         95e38:	e1a04000 	mov	r4, r0
         95e3c:	e5d00030 	ldrb	r0, [r0, #48]	; fField48
         95e40:	e3a05000 	mov	r5, #0	; 0x0
         95e44:	e3300000 	teq	r0, #0	; 0x0
         95e48:	03a00fa5 	moveq	r0, #660	; 0x294
         95e4c:	02400a07 	subeq	r0, r0, #28672	; 0x7000
         95e50:	05840050 	streq	r0, [r4, #80]	; fField80
         95e54:	0a000011 	beq	95ea0 <TDocker::FlushCommandData(void)+0x74>
         95e58:	e1a00004 	mov	r0, r4
         95e5c:	eb6897de 	bl	1abbddc <TDocker::$WaitAndLockTDocker(void)>
         95e60:	e52d506c 	str	r5, [sp, -#108]!	; fField108
         95e64:	e28d0008 	add	r0, sp, #8	; 0x8
         95e68:	eb6c72c1 	bl	1bb2974 <$setjmp>
         95e6c:	e3300000 	teq	r0, #0	; 0x0
         95e70:	e1a0000d 	mov	r0, sp
         95e74:	1a000003 	bne	95e88 <TDocker::FlushCommandData(void)+0x5c>
         95e78:	eb6d287f 	bl	1be007c <$AddExceptionHandler>
         95e7c:	e1a00004 	mov	r0, r4
         95e80:	eb67faf2 	bl	1a94a50 <TDocker::$FlushCommand(void)>
         95e84:	ea000002 	b	95e94 <TDocker::FlushCommandData(void)+0x68>
         95e88:	e2801060 	add	r1, r0, #96	; 0x60
         95e8c:	e1a00004 	mov	r0, r4
         95e90:	eb688746 	bl	1ab7bb0 <TDocker::$ProcessException(Exception *)>
         95e94:	e1a0000d 	mov	r0, sp
         95e98:	eb6d2c86 	bl	1be10b8 <$ExitHandler>
         95e9c:	e28dd06c 	add	sp, sp, #108	; 0x6c
         95ea0:	e5c45030 	strb	r5, [r4, #48]	; fField48
         95ea4:	e1a00004 	mov	r0, r4
         95ea8:	e3a01000 	mov	r1, #0	; 0x0
         95eac:	eb6851b1 	bl	1aaa578 <TDocker::$CleanUpIfStopping(unsigned char)>
         95eb0:	e1a00004 	mov	r0, r4
         95eb4:	e3a01000 	mov	r1, #0	; 0x0
         95eb8:	eb6851ad 	bl	1aaa574 <TDocker::$CleanUpIfError(unsigned char)>
         95ebc:	e1a00004 	mov	r0, r4
         95ec0:	eb6897b7 	bl	1abbda4 <TDocker::$UnlockTDocker(void)>
         95ec4:	e5b40050 	ldr	r0, [r4, #80]!	; fField80
         95ec8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::ReadData(RefVar &)
 * Address: 00095ecc
 */
TDocker::ReadData(RefVar &) {
    /*
         95ecc:	e1a0c00d 	mov	ip, sp
         95ed0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         95ed4:	e24cb004 	sub	fp, ip, #4	; 0x4
         95ed8:	e1a04000 	mov	r4, r0
         95edc:	e1a05001 	mov	r5, r1
         95ee0:	e5d000b3 	ldrb	r0, [r0, #179]	; fField179
         95ee4:	e3300000 	teq	r0, #0	; 0x0
         95ee8:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         95eec:	e3a06000 	mov	r6, #0	; 0x0
         95ef0:	e3a00002 	mov	r0, #2	; 0x2
         95ef4:	e5846050 	str	r6, [r4, #80]	; fField80
         95ef8:	e5951000 	ldr	r1, [r5]
         95efc:	e5810000 	str	r0, [r1]
         95f00:	e5d40030 	ldrb	r0, [r4, #48]	; fField48
         95f04:	e3300000 	teq	r0, #0	; 0x0
         95f08:	03a00fa5 	moveq	r0, #660	; 0x294
         95f0c:	02400a07 	subeq	r0, r0, #28672	; 0x7000
         95f10:	05840050 	streq	r0, [r4, #80]	; fField80
         95f14:	0a000021 	beq	95fa0 <TDocker::ReadData(RefVar &)+0xd4>
         95f18:	e52d606c 	str	r6, [sp, -#108]!	; fField108
         95f1c:	e28d0008 	add	r0, sp, #8	; 0x8
         95f20:	eb6c7293 	bl	1bb2974 <$setjmp>
         95f24:	e3300000 	teq	r0, #0	; 0x0
         95f28:	e1a0000d 	mov	r0, sp
         95f2c:	1a000015 	bne	95f88 <TDocker::ReadData(RefVar &)+0xbc>
         95f30:	eb6d2851 	bl	1be007c <$AddExceptionHandler>
         95f34:	e5940048 	ldr	r0, [r4, #72]	; fField72
         95f38:	e3500000 	cmp	r0, #0	; 0x0
         95f3c:	9a000014 	bls	95f94 <TDocker::ReadData(RefVar &)+0xc8>
         95f40:	e3300004 	teq	r0, #4	; 0x4
         95f44:	1a000009 	bne	95f70 <TDocker::ReadData(RefVar &)+0xa4>
         95f48:	e24dd004 	sub	sp, sp, #4	; 0x4
         95f4c:	e1a0100d 	mov	r1, sp
         95f50:	e5940000 	ldr	r0, [r4]
         95f54:	eb6d3cdc 	bl	1be52cc <CPipe::$__rs(unsigned long &)>
         95f58:	e59d0000 	ldr	r0, [sp]
         95f5c:	e1a00100 	mov	r0, r0, lsl #2
         95f60:	e5951000 	ldr	r1, [r5]
         95f64:	e5810000 	str	r0, [r1]
         95f68:	e28dd004 	add	sp, sp, #4	; 0x4
         95f6c:	ea000008 	b	95f94 <TDocker::ReadData(RefVar &)+0xc8>
         95f70:	e2841010 	add	r1, r4, #16	; 0x10
         95f74:	e1a00004 	mov	r0, r4
         95f78:	eb68871c 	bl	1ab7bf0 <TDocker::$ReadRef(RefVar const &)>
         95f7c:	e5951000 	ldr	r1, [r5]
         95f80:	e5810000 	str	r0, [r1]
         95f84:	ea000002 	b	95f94 <TDocker::ReadData(RefVar &)+0xc8>
         95f88:	e2801060 	add	r1, r0, #96	; 0x60
         95f8c:	e1a00004 	mov	r0, r4
         95f90:	eb688706 	bl	1ab7bb0 <TDocker::$ProcessException(Exception *)>
         95f94:	e1a0000d 	mov	r0, sp
         95f98:	eb6d2c46 	bl	1be10b8 <$ExitHandler>
         95f9c:	e28dd06c 	add	sp, sp, #108	; 0x6c
         95fa0:	e5c46030 	strb	r6, [r4, #48]	; fField48
         95fa4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::ReadCommand(RefVar &, unsigned char, unsigned char)
 * Address: 00095fa8
 */
TDocker::ReadCommand(RefVar &, unsigned char, unsigned char) {
    /*
         95fa8:	e1a0c00d 	mov	ip, sp
         95fac:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         95fb0:	e24cb004 	sub	fp, ip, #4	; 0x4
         95fb4:	e1a04000 	mov	r4, r0
         95fb8:	e1a05001 	mov	r5, r1
         95fbc:	e20270ff 	and	r7, r2, #255	; 0xff
         95fc0:	e203a0ff 	and	sl, r3, #255	; 0xff
         95fc4:	e5d010b3 	ldrb	r1, [r0, #179]	; fField179
         95fc8:	e3a00000 	mov	r0, #0	; 0x0
         95fcc:	e3310000 	teq	r1, #0	; 0x0
         95fd0:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         95fd4:	e1a06000 	mov	r6, r0
         95fd8:	e5840050 	str	r0, [r4, #80]	; fField80
         95fdc:	e5d400ac 	ldrb	r0, [r4, #172]	; fField172
         95fe0:	e3300000 	teq	r0, #0	; 0x0
         95fe4:	03a00f8a 	moveq	r0, #552	; 0x228
         95fe8:	02400b6e 	subeq	r0, r0, #112640	; 0x1b800
         95fec:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         95ff0:	e1a00004 	mov	r0, r4
         95ff4:	eb689778 	bl	1abbddc <TDocker::$WaitAndLockTDocker(void)>
         95ff8:	e5846038 	str	r6, [r4, #56]	; fField56
         95ffc:	e5c47030 	strb	r7, [r4, #48]	; fField48
         96000:	e3a00002 	mov	r0, #2	; 0x2
         96004:	e5951000 	ldr	r1, [r5]
         96008:	e5810000 	str	r0, [r1]
         9600c:	e52d606c 	str	r6, [sp, -#108]!	; fField108
         96010:	e28d0008 	add	r0, sp, #8	; 0x8
         96014:	eb6c7256 	bl	1bb2974 <$setjmp>
         96018:	e3300000 	teq	r0, #0	; 0x0
         9601c:	e1a0000d 	mov	r0, sp
         96020:	1a000041 	bne	9612c <TDocker::ReadCommand(RefVar &, unsigned char, unsigned char)+0x184>
         96024:	eb6d2814 	bl	1be007c <$AddExceptionHandler>
         96028:	e3a09001 	mov	r9, #1	; 0x1
         9602c:	eb6cb043 	bl	1bc2140 <$AllocateFrame(void)>
         96030:	e5951000 	ldr	r1, [r5]
         96034:	e2848048 	add	r8, r4, #72	; 0x48
         96038:	e2846044 	add	r6, r4, #68	; 0x44
         9603c:	e5810000 	str	r0, [r1]
         96040:	e1a02008 	mov	r2, r8
         96044:	e1a01006 	mov	r1, r6
         96048:	e1a00004 	mov	r0, r4
         9604c:	eb6886e1 	bl	1ab7bd8 <TEzPipeProtocol::$ReadDockerHeader(unsigned long &, unsigned long &)>
         96050:	e33a0000 	teq	sl, #0	; 0x0
         96054:	0a000003 	beq	96068 <TDocker::ReadCommand(RefVar &, unsigned char, unsigned char)+0xc0>
         96058:	e5940044 	ldr	r0, [r4, #68]	; fField68
         9605c:	e59fc0b8 	ldr	ip, [pc, #b8]	; 9611c <TDocker::ReadCommand(RefVar &, unsigned char, unsigned char)+0x174>
         96060:	e130000c 	teq	r0, ip
         96064:	0afffff5 	beq	96040 <TDocker::ReadCommand(RefVar &, unsigned char, unsigned char)+0x98>
         96068:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         9606c:	e1a00006 	mov	r0, r6
         96070:	e28d1008 	add	r1, sp, #8	; 0x8
         96074:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
         96078:	e3a02004 	mov	r2, #4	; 0x4
         9607c:	eb6d44c0 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
         96080:	e28d0008 	add	r0, sp, #8	; 0x8
         96084:	eb6cbc92 	bl	1bc52d4 <$MakeString(unsigned short const *)>
         96088:	eb6cb02f 	bl	1bc214c <$AllocateRefHandle(long)>
         9608c:	e58d0000 	str	r0, [sp]
         96090:	e1a0200d 	mov	r2, sp
         96094:	e59f1084 	ldr	r1, [pc, #84]	; 96120 <TDocker::ReadCommand(RefVar &, unsigned char, unsigned char)+0x178>	; fField84
         96098:	e1a00005 	mov	r0, r5
         9609c:	eb6cc0b1 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         960a0:	e59d0000 	ldr	r0, [sp]
         960a4:	eb6cb444 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         960a8:	e5940048 	ldr	r0, [r4, #72]	; fField72
         960ac:	e1a00100 	mov	r0, r0, lsl #2
         960b0:	eb6cb025 	bl	1bc214c <$AllocateRefHandle(long)>
         960b4:	e58d0004 	str	r0, [sp, #4]	; fField4
         960b8:	e28d2004 	add	r2, sp, #4	; 0x4
         960bc:	e59f1060 	ldr	r1, [pc, #60]	; 96124 <TDocker::ReadCommand(RefVar &, unsigned char, unsigned char)+0x17c>	; fField60
         960c0:	e1a00005 	mov	r0, r5
         960c4:	eb6cc0a7 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         960c8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         960cc:	eb6cb43a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         960d0:	e24dd004 	sub	sp, sp, #4	; 0x4
         960d4:	e3a00002 	mov	r0, #2	; 0x2
         960d8:	eb6cb01b 	bl	1bc214c <$AllocateRefHandle(long)>
         960dc:	e3370000 	teq	r7, #0	; 0x0
         960e0:	e58d0000 	str	r0, [sp]
         960e4:	1a000003 	bne	960f8 <TDocker::ReadCommand(RefVar &, unsigned char, unsigned char)+0x150>
         960e8:	e5c49030 	strb	r9, [r4, #48]	; fField48
         960ec:	e1a0100d 	mov	r1, sp
         960f0:	e1a00004 	mov	r0, r4
         960f4:	eb6886b5 	bl	1ab7bd0 <TDocker::$ReadData(RefVar &)>
         960f8:	e1a0200d 	mov	r2, sp
         960fc:	e59f1024 	ldr	r1, [pc, #24]	; 96128 <TDocker::ReadCommand(RefVar &, unsigned char, unsigned char)+0x180>	; fField24
         96100:	e1a00005 	mov	r0, r5
         96104:	eb6cc097 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         96108:	e5c4902f 	strb	r9, [r4, #47]	; fField47
         9610c:	e59d0000 	ldr	r0, [sp]
         96110:	eb6cb429 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         96114:	e28dd020 	add	sp, sp, #32	; 0x20
         96118:	ea000006 	b	96138 <TDocker::ReadCommand(RefVar &, unsigned char, unsigned char)+0x190>
         9611c:	68656c6f 	stmvsda	r5!, {r0, r1, r2, r3, r5, r6, sl, fp, sp, lr}^
         96120:	00682518 	rsbeq	r2, r8, r8, lsl r5
         96124:	00683500 	rsbeq	r3, r8, r0, lsl #10
         96128:	006827a0 	rsbeq	r2, r8, r0, lsr #15
         9612c:	e2801060 	add	r1, r0, #96	; 0x60
         96130:	e1a00004 	mov	r0, r4
         96134:	eb68869d 	bl	1ab7bb0 <TDocker::$ProcessException(Exception *)>
         96138:	e1a0000d 	mov	r0, sp
         9613c:	eb6d2bdd 	bl	1be10b8 <$ExitHandler>
         96140:	e28dd06c 	add	sp, sp, #108	; 0x6c
         96144:	e1a00004 	mov	r0, r4
         96148:	e3a01000 	mov	r1, #0	; 0x0
         9614c:	eb685109 	bl	1aaa578 <TDocker::$CleanUpIfStopping(unsigned char)>
         96150:	e1a00004 	mov	r0, r4
         96154:	e3a01000 	mov	r1, #0	; 0x0
         96158:	eb685105 	bl	1aaa574 <TDocker::$CleanUpIfError(unsigned char)>
         9615c:	e1a00004 	mov	r0, r4
         96160:	eb68970f 	bl	1abbda4 <TDocker::$UnlockTDocker(void)>
         96164:	e5b40050 	ldr	r0, [r4, #80]!	; fField80
         96168:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::ReadBytes(long &, RefVar)
 * Address: 0009616c
 */
TDocker::ReadBytes(long &, RefVar) {
    /*
         9616c:	e1a0c00d 	mov	ip, sp
         96170:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         96174:	e24cb004 	sub	fp, ip, #4	; 0x4
         96178:	e1a04000 	mov	r4, r0
         9617c:	e1a05001 	mov	r5, r1
         96180:	e24dd004 	sub	sp, sp, #4	; 0x4
         96184:	e5920000 	ldr	r0, [r2]
         96188:	e5900000 	ldr	r0, [r0]
         9618c:	eb6cafee 	bl	1bc214c <$AllocateRefHandle(long)>
         96190:	e58d0000 	str	r0, [sp]
         96194:	e5d400b3 	ldrb	r0, [r4, #179]	; fField179
         96198:	e3a06000 	mov	r6, #0	; 0x0
         9619c:	e3300000 	teq	r0, #0	; 0x0
         961a0:	0a000003 	beq	961b4 <TDocker::ReadBytes(long &, RefVar)+0x48>
         961a4:	e59d0000 	ldr	r0, [sp]
         961a8:	eb6cb403 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         961ac:	e1a00006 	mov	r0, r6
         961b0:	ea000058 	b	96318 <TDocker::ReadBytes(long &, RefVar)+0x1ac>
         961b4:	e5846050 	str	r6, [r4, #80]	; fField80
         961b8:	e1a00004 	mov	r0, r4
         961bc:	eb689706 	bl	1abbddc <TDocker::$WaitAndLockTDocker(void)>
         961c0:	e52d606c 	str	r6, [sp, -#108]!	; fField108
         961c4:	e28d0008 	add	r0, sp, #8	; 0x8
         961c8:	eb6c71e9 	bl	1bb2974 <$setjmp>
         961cc:	e3300000 	teq	r0, #0	; 0x0
         961d0:	e1a0000d 	mov	r0, sp
         961d4:	1a00003d 	bne	962d0 <TDocker::ReadBytes(long &, RefVar)+0x164>
         961d8:	eb6d27a7 	bl	1be007c <$AddExceptionHandler>
         961dc:	e5d40030 	ldrb	r0, [r4, #48]	; fField48
         961e0:	e3300000 	teq	r0, #0	; 0x0
         961e4:	03a00fa5 	moveq	r0, #660	; 0x294
         961e8:	02400a07 	subeq	r0, r0, #28672	; 0x7000
         961ec:	0a000012 	beq	9623c <TDocker::ReadBytes(long &, RefVar)+0xd0>
         961f0:	e28d006c 	add	r0, sp, #108	; 0x6c
         961f4:	eb6dbc31 	bl	1c052c0 <$IsBinary(RefVar const &)>
         961f8:	e3300000 	teq	r0, #0	; 0x0
         961fc:	03a00fba 	moveq	r0, #744	; 0x2e8
         96200:	02400903 	subeq	r0, r0, #49152	; 0xc000
         96204:	0a00000c 	beq	9623c <TDocker::ReadBytes(long &, RefVar)+0xd0>
         96208:	e5940048 	ldr	r0, [r4, #72]	; fField72
         9620c:	e5941038 	ldr	r1, [r4, #56]	; fField56
         96210:	e0400001 	sub	r0, r0, r1
         96214:	e5951000 	ldr	r1, [r5]
         96218:	e1500001 	cmp	r0, r1
         9621c:	35850000 	strcc	r0, [r5]
         96220:	e59d006c 	ldr	r0, [sp, #108]	; fField108
         96224:	e5900000 	ldr	r0, [r0]
         96228:	eb6cbc1f 	bl	1bc52ac <$Length(long)>
         9622c:	e5951000 	ldr	r1, [r5]
         96230:	e1500001 	cmp	r0, r1
         96234:	aa000003 	bge	96248 <TDocker::ReadBytes(long &, RefVar)+0xdc>
         96238:	e59f0004 	ldr	r0, [pc, #4]	; 96244 <TDocker::ReadBytes(long &, RefVar)+0xd8>	; fField4
         9623c:	e5840050 	str	r0, [r4, #80]	; fField80
         96240:	ea000025 	b	962dc <TDocker::ReadBytes(long &, RefVar)+0x170>
         96244:	ffff43b3 	swinv	0x00ff43b3
         96248:	e5940038 	ldr	r0, [r4, #56]	; fField56
         9624c:	e0800001 	add	r0, r0, r1
         96250:	e5840038 	str	r0, [r4, #56]	; fField56
         96254:	e24dd008 	sub	sp, sp, #8	; 0x8
         96258:	e28d1074 	add	r1, sp, #116	; 0x74
         9625c:	e1a0000d 	mov	r0, sp
         96260:	eb6cab9c 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
         96264:	e1a0100d 	mov	r1, sp
         96268:	e28d0004 	add	r0, sp, #4	; 0x4
         9626c:	eb6cab98 	bl	1bc10d4 <TObjectPtr::$__ct(TObjectPtr const &)>
         96270:	e1a0000d 	mov	r0, sp
         96274:	e3a01000 	mov	r1, #0	; 0x0
         96278:	eb6cafa0 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         9627c:	e28d0004 	add	r0, sp, #4	; 0x4
         96280:	eb6cafa3 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
         96284:	e1a01000 	mov	r1, r0
         96288:	e5940038 	ldr	r0, [r4, #56]	; fField56
         9628c:	e5942048 	ldr	r2, [r4, #72]	; fField72
         96290:	e1300002 	teq	r0, r2
         96294:	13a03000 	movne	r3, #0	; 0x0
         96298:	03a03001 	moveq	r3, #1	; 0x1
         9629c:	e1a00004 	mov	r0, r4
         962a0:	e5952000 	ldr	r2, [r5]
         962a4:	eb682328 	bl	1a9ef4c <TDocker::$ReadChunk(void *, long, unsigned char)>
         962a8:	e5940038 	ldr	r0, [r4, #56]	; fField56
         962ac:	e5941048 	ldr	r1, [r4, #72]	; fField72
         962b0:	e1300001 	teq	r0, r1
         962b4:	05846038 	streq	r6, [r4, #56]	; fField56
         962b8:	05c46030 	streqb	r6, [r4, #48]	; fField48
         962bc:	e28d0004 	add	r0, sp, #4	; 0x4
         962c0:	e3a01000 	mov	r1, #0	; 0x0
         962c4:	eb6caf8d 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         962c8:	e28dd008 	add	sp, sp, #8	; 0x8
         962cc:	ea000002 	b	962dc <TDocker::ReadBytes(long &, RefVar)+0x170>
         962d0:	e2801060 	add	r1, r0, #96	; 0x60
         962d4:	e1a00004 	mov	r0, r4
         962d8:	eb688634 	bl	1ab7bb0 <TDocker::$ProcessException(Exception *)>
         962dc:	e1a0000d 	mov	r0, sp
         962e0:	eb6d2b74 	bl	1be10b8 <$ExitHandler>
         962e4:	e28dd06c 	add	sp, sp, #108	; 0x6c
         962e8:	e1a00004 	mov	r0, r4
         962ec:	e3a01000 	mov	r1, #0	; 0x0
         962f0:	eb6850a0 	bl	1aaa578 <TDocker::$CleanUpIfStopping(unsigned char)>
         962f4:	e1a00004 	mov	r0, r4
         962f8:	e3a01000 	mov	r1, #0	; 0x0
         962fc:	eb68509c 	bl	1aaa574 <TDocker::$CleanUpIfError(unsigned char)>
         96300:	e1a00004 	mov	r0, r4
         96304:	eb6896a6 	bl	1abbda4 <TDocker::$UnlockTDocker(void)>
         96308:	e5944050 	ldr	r4, [r4, #80]	; fField80
         9630c:	e59d0000 	ldr	r0, [sp]
         96310:	eb6cb3a9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         96314:	e1a00004 	mov	r0, r4
         96318:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::__ct(void)
 * Address: 00097374
 */
TDocker::TDocker(void) {
    /*
         97374:	e1a0c00d 	mov	ip, sp
         97378:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         9737c:	e24cb004 	sub	fp, ip, #4	; 0x4
         97380:	e1b04000 	movs	r4, r0
         97384:	1a000003 	bne	97398 <TDocker::__ct(void)+0x24>
         97388:	e3a000b8 	mov	r0, #184	; 0xb8
         9738c:	eb6cdce9 	bl	1bce738 <$__nw(unsigned int)>
         97390:	e1b04000 	movs	r4, r0
         97394:	0a000071 	beq	97560 <TDocker::__ct(void)+0x1ec>
         97398:	e3a00002 	mov	r0, #2	; 0x2
         9739c:	eb6cab6a 	bl	1bc214c <$AllocateRefHandle(long)>
         973a0:	e3a05000 	mov	r5, #0	; 0x0
         973a4:	e584000c 	str	r0, [r4, #12]	; fField12
         973a8:	e5a05004 	str	r5, [r0, #4]!	; fField4
         973ac:	e3a00002 	mov	r0, #2	; 0x2
         973b0:	eb6cab65 	bl	1bc214c <$AllocateRefHandle(long)>
         973b4:	e5840010 	str	r0, [r4, #16]	; fField16
         973b8:	e5a05004 	str	r5, [r0, #4]!	; fField4
         973bc:	e3a00002 	mov	r0, #2	; 0x2
         973c0:	eb6cab61 	bl	1bc214c <$AllocateRefHandle(long)>
         973c4:	e5840014 	str	r0, [r4, #20]	; fField20
         973c8:	e5a05004 	str	r5, [r0, #4]!	; fField4
         973cc:	e3a00002 	mov	r0, #2	; 0x2
         973d0:	eb6cab5d 	bl	1bc214c <$AllocateRefHandle(long)>
         973d4:	e5840018 	str	r0, [r4, #24]	; fField24
         973d8:	e5a05004 	str	r5, [r0, #4]!	; fField4
         973dc:	e3a00002 	mov	r0, #2	; 0x2
         973e0:	eb6cab59 	bl	1bc214c <$AllocateRefHandle(long)>
         973e4:	e584001c 	str	r0, [r4, #28]	; fField28
         973e8:	e5a05004 	str	r5, [r0, #4]!	; fField4
         973ec:	e3a00002 	mov	r0, #2	; 0x2
         973f0:	eb6cab55 	bl	1bc214c <$AllocateRefHandle(long)>
         973f4:	e5840020 	str	r0, [r4, #32]	; fField32
         973f8:	e5a05004 	str	r5, [r0, #4]!	; fField4
         973fc:	e3a00002 	mov	r0, #2	; 0x2
         97400:	eb6cab51 	bl	1bc214c <$AllocateRefHandle(long)>
         97404:	e5840024 	str	r0, [r4, #36]	; fField36
         97408:	e5a05004 	str	r5, [r0, #4]!	; fField4
         9740c:	e3a00002 	mov	r0, #2	; 0x2
         97410:	eb6cab4d 	bl	1bc214c <$AllocateRefHandle(long)>
         97414:	e5840028 	str	r0, [r4, #40]	; fField40
         97418:	e5a05004 	str	r5, [r0, #4]!	; fField4
         9741c:	e3a00002 	mov	r0, #2	; 0x2
         97420:	eb6cab49 	bl	1bc214c <$AllocateRefHandle(long)>
         97424:	e5840040 	str	r0, [r4, #64]	; fField64
         97428:	e5a05004 	str	r5, [r0, #4]!	; fField4
         9742c:	e3a00002 	mov	r0, #2	; 0x2
         97430:	eb6cab45 	bl	1bc214c <$AllocateRefHandle(long)>
         97434:	e584006c 	str	r0, [r4, #108]	; fField108
         97438:	e5a05004 	str	r5, [r0, #4]!	; fField4
         9743c:	e3a00002 	mov	r0, #2	; 0x2
         97440:	eb6cab41 	bl	1bc214c <$AllocateRefHandle(long)>
         97444:	e5840070 	str	r0, [r4, #112]	; fField112
         97448:	e5a05004 	str	r5, [r0, #4]!	; fField4
         9744c:	e3a00002 	mov	r0, #2	; 0x2
         97450:	eb6cab3d 	bl	1bc214c <$AllocateRefHandle(long)>
         97454:	e5840084 	str	r0, [r4, #132]	; fField132
         97458:	e5a05004 	str	r5, [r0, #4]!	; fField4
         9745c:	e3a00002 	mov	r0, #2	; 0x2
         97460:	eb6cab39 	bl	1bc214c <$AllocateRefHandle(long)>
         97464:	e5840088 	str	r0, [r4, #136]	; fField136
         97468:	e5a05004 	str	r5, [r0, #4]!	; fField4
         9746c:	e3a00002 	mov	r0, #2	; 0x2
         97470:	e594100c 	ldr	r1, [r4, #12]	; fField12
         97474:	e5810000 	str	r0, [r1]
         97478:	e5941014 	ldr	r1, [r4, #20]	; fField20
         9747c:	e5810000 	str	r0, [r1]
         97480:	e5941010 	ldr	r1, [r4, #16]	; fField16
         97484:	e5810000 	str	r0, [r1]
         97488:	e5941018 	ldr	r1, [r4, #24]	; fField24
         9748c:	e5810000 	str	r0, [r1]
         97490:	e594101c 	ldr	r1, [r4, #28]	; fField28
         97494:	e5810000 	str	r0, [r1]
         97498:	e5941084 	ldr	r1, [r4, #132]	; fField132
         9749c:	e5810000 	str	r0, [r1]
         974a0:	e5941088 	ldr	r1, [r4, #136]	; fField136
         974a4:	e5810000 	str	r0, [r1]
         974a8:	e5845054 	str	r5, [r4, #84]	; fField84
         974ac:	e5941040 	ldr	r1, [r4, #64]	; fField64
         974b0:	e5810000 	str	r0, [r1]
         974b4:	e584508c 	str	r5, [r4, #140]	; fField140
         974b8:	e5845090 	str	r5, [r4, #144]	; fField144
         974bc:	e5845094 	str	r5, [r4, #148]	; fField148
         974c0:	e5845098 	str	r5, [r4, #152]	; fField152
         974c4:	e5c450ac 	strb	r5, [r4, #172]	; fField172
         974c8:	e58400a8 	str	r0, [r4, #168]	; fField168
         974cc:	e5c450af 	strb	r5, [r4, #175]	; fField175
         974d0:	e3a01009 	mov	r1, #9	; 0x9
         974d4:	e584104c 	str	r1, [r4, #76]	; fField76
         974d8:	e5845048 	str	r5, [r4, #72]	; fField72
         974dc:	e5845050 	str	r5, [r4, #80]	; fField80
         974e0:	e5845000 	str	r5, [r4]
         974e4:	e5c450b1 	strb	r5, [r4, #177]	; fField177
         974e8:	e5c450b2 	strb	r5, [r4, #178]	; fField178
         974ec:	e5c4502c 	strb	r5, [r4, #44]	; fField44
         974f0:	e5c4502d 	strb	r5, [r4, #45]	; fField45
         974f4:	e5c4502e 	strb	r5, [r4, #46]	; fField46
         974f8:	e5941028 	ldr	r1, [r4, #40]	; fField40
         974fc:	e5810000 	str	r0, [r1]
         97500:	e5c4502f 	strb	r5, [r4, #47]	; fField47
         97504:	e5c45030 	strb	r5, [r4, #48]	; fField48
         97508:	e5845038 	str	r5, [r4, #56]	; fField56
         9750c:	e5c45031 	strb	r5, [r4, #49]	; fField49
         97510:	e584503c 	str	r5, [r4, #60]	; fField60
         97514:	e5c45032 	strb	r5, [r4, #50]	; fField50
         97518:	e5840034 	str	r0, [r4, #52]	; fField52
         9751c:	e5c450ad 	strb	r5, [r4, #173]	; fField173
         97520:	e5c450ae 	strb	r5, [r4, #174]	; fField174
         97524:	e584507c 	str	r5, [r4, #124]	; fField124
         97528:	e5845080 	str	r5, [r4, #128]	; fField128
         9752c:	e5845058 	str	r5, [r4, #88]	; fField88
         97530:	e5840060 	str	r0, [r4, #96]	; fField96
         97534:	e584505c 	str	r5, [r4, #92]	; fField92
         97538:	e5845064 	str	r5, [r4, #100]	; fField100
         9753c:	e5845068 	str	r5, [r4, #104]	; fField104
         97540:	e594106c 	ldr	r1, [r4, #108]	; fField108
         97544:	e5810000 	str	r0, [r1]
         97548:	e5941070 	ldr	r1, [r4, #112]	; fField112
         9754c:	e5810000 	str	r0, [r1]
         97550:	e5c450b3 	strb	r5, [r4, #179]	; fField179
         97554:	e5c450b4 	strb	r5, [r4, #180]	; fField180
         97558:	e3a00001 	mov	r0, #1	; 0x1
         9755c:	e58400a4 	str	r0, [r4, #164]	; fField164
         97560:	e1a00004 	mov	r0, r4
         97564:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::WaitForStopToComplete(void)
 * Address: 00097568
 */
TDocker::WaitForStopToComplete(void) {
    /*
         97568:	e1a0c00d 	mov	ip, sp
         9756c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         97570:	e24cb004 	sub	fp, ip, #4	; 0x4
         97574:	e1a04000 	mov	r4, r0
         97578:	e5d000af 	ldrb	r0, [r0, #175]	; fField175
         9757c:	e3300000 	teq	r0, #0	; 0x0
         97580:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         97584:	eb6d6ce5 	bl	1bf2920 <$Ticks(void)>
         97588:	e28050b4 	add	r5, r0, #180	; 0xb4
         9758c:	e24dd004 	sub	sp, sp, #4	; 0x4
         97590:	e3a06002 	mov	r6, #2	; 0x2
         97594:	ea000006 	b	975b4 <TDocker::WaitForStopToComplete(void)+0x4c>
         97598:	e1a00006 	mov	r0, r6
         9759c:	eb6caaea 	bl	1bc214c <$AllocateRefHandle(long)>
         975a0:	e58d0000 	str	r0, [sp]
         975a4:	e1a0000d 	mov	r0, sp
         975a8:	eb68e080 	bl	1acf7b0 <$FYieldToFork>
         975ac:	e59d0000 	ldr	r0, [sp]
         975b0:	eb6caf01 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         975b4:	e5d400b0 	ldrb	r0, [r4, #176]	; fField176
         975b8:	e3300000 	teq	r0, #0	; 0x0
         975bc:	1a000002 	bne	975cc <TDocker::WaitForStopToComplete(void)+0x64>
         975c0:	eb6d6cd6 	bl	1bf2920 <$Ticks(void)>
         975c4:	e1500005 	cmp	r0, r5
         975c8:	3afffff2 	bcc	97598 <TDocker::WaitForStopToComplete(void)+0x30>
         975cc:	e3a00000 	mov	r0, #0	; 0x0
         975d0:	e5c400af 	strb	r0, [r4, #175]	; fField175
         975d4:	e5c400b0 	strb	r0, [r4, #176]	; fField176
         975d8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::TossDataStructures(void)
 * Address: 000975dc
 */
TDocker::TossDataStructures(void) {
    /*
         975dc:	e1a0c00d 	mov	ip, sp
         975e0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         975e4:	e24cb004 	sub	fp, ip, #4	; 0x4
         975e8:	e1a04000 	mov	r4, r0
         975ec:	eb692ef3 	bl	1ae31c0 <TDocker::$WaitForStopToComplete(void)>
         975f0:	e3a05000 	mov	r5, #0	; 0x0
         975f4:	e5940000 	ldr	r0, [r4]
         975f8:	e3300000 	teq	r0, #0	; 0x0
         975fc:	0a000010 	beq	97644 <TDocker::TossDataStructures(void)+0x68>
         97600:	e52d506c 	str	r5, [sp, -#108]!	; fField108
         97604:	e28d0008 	add	r0, sp, #8	; 0x8
         97608:	eb6c6cd9 	bl	1bb2974 <$setjmp>
         9760c:	e3300000 	teq	r0, #0	; 0x0
         97610:	1a000007 	bne	97634 <TDocker::TossDataStructures(void)+0x58>
         97614:	e1a0000d 	mov	r0, sp
         97618:	eb6d2297 	bl	1be007c <$AddExceptionHandler>
         9761c:	e5940000 	ldr	r0, [r4]
         97620:	e3300000 	teq	r0, #0	; 0x0
         97624:	0a000002 	beq	97634 <TDocker::TossDataStructures(void)+0x58>
         97628:	e3a01001 	mov	r1, #1	; 0x1
         9762c:	e1a0e00f 	mov	lr, pc
         97630:	e590f000 	ldr	pc, [r0]
         97634:	e1a0000d 	mov	r0, sp
         97638:	eb6d269e 	bl	1be10b8 <$ExitHandler>
         9763c:	e28dd06c 	add	sp, sp, #108	; 0x6c
         97640:	e5845000 	str	r5, [r4]
         97644:	e5940054 	ldr	r0, [r4, #84]	; fField84
         97648:	e3300000 	teq	r0, #0	; 0x0
         9764c:	0a00000e 	beq	9768c <TDocker::TossDataStructures(void)+0xb0>
         97650:	e52d506c 	str	r5, [sp, -#108]!	; fField108
         97654:	e28d0008 	add	r0, sp, #8	; 0x8
         97658:	eb6c6cc5 	bl	1bb2974 <$setjmp>
         9765c:	e3300000 	teq	r0, #0	; 0x0
         97660:	1a000005 	bne	9767c <TDocker::TossDataStructures(void)+0xa0>
         97664:	e1a0000d 	mov	r0, sp
         97668:	eb6d2283 	bl	1be007c <$AddExceptionHandler>
         9766c:	e5940054 	ldr	r0, [r4, #84]	; fField84
         97670:	e3300000 	teq	r0, #0	; 0x0
         97674:	13a01001 	movne	r1, #1	; 0x1
         97678:	1b6895f9 	blne	1abce64 <TCursorArray::$__dt(void)>
         9767c:	e1a0000d 	mov	r0, sp
         97680:	eb6d268c 	bl	1be10b8 <$ExitHandler>
         97684:	e28dd06c 	add	sp, sp, #108	; 0x6c
         97688:	e5845054 	str	r5, [r4, #84]	; fField84
         9768c:	e594007c 	ldr	r0, [r4, #124]	; fField124
         97690:	e3300000 	teq	r0, #0	; 0x0
         97694:	0a00000e 	beq	976d4 <TDocker::TossDataStructures(void)+0xf8>
         97698:	e52d506c 	str	r5, [sp, -#108]!	; fField108
         9769c:	e28d0008 	add	r0, sp, #8	; 0x8
         976a0:	eb6c6cb3 	bl	1bb2974 <$setjmp>
         976a4:	e3300000 	teq	r0, #0	; 0x0
         976a8:	1a000005 	bne	976c4 <TDocker::TossDataStructures(void)+0xe8>
         976ac:	e1a0000d 	mov	r0, sp
         976b0:	eb6d2271 	bl	1be007c <$AddExceptionHandler>
         976b4:	e594007c 	ldr	r0, [r4, #124]	; fField124
         976b8:	e3300000 	teq	r0, #0	; 0x0
         976bc:	13a01001 	movne	r1, #1	; 0x1
         976c0:	1b6895e9 	blne	1abce6c <TDockerDynArray::$__dt(void)>
         976c4:	e1a0000d 	mov	r0, sp
         976c8:	eb6d267a 	bl	1be10b8 <$ExitHandler>
         976cc:	e28dd06c 	add	sp, sp, #108	; 0x6c
         976d0:	e584507c 	str	r5, [r4, #124]	; fField124
         976d4:	e5940080 	ldr	r0, [r4, #128]	; fField128
         976d8:	e3300000 	teq	r0, #0	; 0x0
         976dc:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         976e0:	e52d506c 	str	r5, [sp, -#108]!	; fField108
         976e4:	e28d0008 	add	r0, sp, #8	; 0x8
         976e8:	eb6c6ca1 	bl	1bb2974 <$setjmp>
         976ec:	e3300000 	teq	r0, #0	; 0x0
         976f0:	1a000005 	bne	9770c <TDocker::TossDataStructures(void)+0x130>
         976f4:	e1a0000d 	mov	r0, sp
         976f8:	eb6d225f 	bl	1be007c <$AddExceptionHandler>
         976fc:	e5940080 	ldr	r0, [r4, #128]	; fField128
         97700:	e3300000 	teq	r0, #0	; 0x0
         97704:	13a01001 	movne	r1, #1	; 0x1
         97708:	1b6895d7 	blne	1abce6c <TDockerDynArray::$__dt(void)>
         9770c:	e1a0000d 	mov	r0, sp
         97710:	eb6d2668 	bl	1be10b8 <$ExitHandler>
         97714:	e5a45080 	str	r5, [r4, #128]!	; fField128
         97718:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::__dt(void)
 * Address: 0009771c
 */
TDocker::~TDocker(void) {
    /*
         9771c:	e1a0c00d 	mov	ip, sp
         97720:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         97724:	e24cb004 	sub	fp, ip, #4	; 0x4
         97728:	e1a04000 	mov	r4, r0
         9772c:	e1a05001 	mov	r5, r1
         97730:	eb689192 	bl	1abbd80 <TDocker::$TossDataStructures(void)>
         97734:	e5940088 	ldr	r0, [r4, #136]	; fField136
         97738:	eb6cae9f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9773c:	e5940084 	ldr	r0, [r4, #132]	; fField132
         97740:	eb6cae9d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         97744:	e5940070 	ldr	r0, [r4, #112]	; fField112
         97748:	eb6cae9b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9774c:	e594006c 	ldr	r0, [r4, #108]	; fField108
         97750:	eb6cae99 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         97754:	e5940040 	ldr	r0, [r4, #64]	; fField64
         97758:	eb6cae97 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9775c:	e5940028 	ldr	r0, [r4, #40]	; fField40
         97760:	eb6cae95 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         97764:	e5940024 	ldr	r0, [r4, #36]	; fField36
         97768:	eb6cae93 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9776c:	e5940020 	ldr	r0, [r4, #32]	; fField32
         97770:	eb6cae91 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         97774:	e594001c 	ldr	r0, [r4, #28]	; fField28
         97778:	eb6cae8f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9777c:	e5940018 	ldr	r0, [r4, #24]	; fField24
         97780:	eb6cae8d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         97784:	e5940014 	ldr	r0, [r4, #20]	; fField20
         97788:	eb6cae8b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9778c:	e5940010 	ldr	r0, [r4, #16]	; fField16
         97790:	eb6cae89 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         97794:	e594000c 	ldr	r0, [r4, #12]	; fField12
         97798:	eb6cae87 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9779c:	e3150001 	tst	r5, #1	; 0x1
         977a0:	11a00004 	movne	r0, r4
         977a4:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         977a8:	1a6cd7cc 	bne	1bcd6e0 <$__dl(void *)>
         977ac:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::GetTDockerLock(void)
 * Address: 000977b0
 */
TDocker::GetTDockerLock(void) {
    /*
         977b0:	e5d00032 	ldrb	r0, [r0, #50]	; fField50
         977b4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDocker::WaitAndLockTDocker(void)
 * Address: 000977b8
 */
TDocker::WaitAndLockTDocker(void) {
    /*
         977b8:	e1a0c00d 	mov	ip, sp
         977bc:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         977c0:	e24cb004 	sub	fp, ip, #4	; 0x4
         977c4:	e1a04000 	mov	r4, r0
         977c8:	e3a05000 	mov	r5, #0	; 0x0
         977cc:	eb6d6c53 	bl	1bf2920 <$Ticks(void)>
         977d0:	e1a07000 	mov	r7, r0
         977d4:	e24dd004 	sub	sp, sp, #4	; 0x4
         977d8:	e3a06000 	mov	r6, #0	; 0x0
         977dc:	e3a08002 	mov	r8, #2	; 0x2
         977e0:	ea000008 	b	97808 <TDocker::WaitAndLockTDocker(void)+0x50>
         977e4:	e1a00008 	mov	r0, r8
         977e8:	eb6caa57 	bl	1bc214c <$AllocateRefHandle(long)>
         977ec:	e58d0000 	str	r0, [sp]
         977f0:	e1a0000d 	mov	r0, sp
         977f4:	eb68dfed 	bl	1acf7b0 <$FYieldToFork>
         977f8:	e59d0000 	ldr	r0, [sp]
         977fc:	eb6cae6e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         97800:	eb6d6c46 	bl	1bf2920 <$Ticks(void)>
         97804:	e0406007 	sub	r6, r0, r7
         97808:	e1a00004 	mov	r0, r4
         9780c:	eb68a63a 	bl	1ac10fc <TDocker::$GetTDockerLock(void)>
         97810:	e3300000 	teq	r0, #0	; 0x0
         97814:	0a000001 	beq	97820 <TDocker::WaitAndLockTDocker(void)+0x68>
         97818:	e3560f96 	cmp	r6, #600	; 0x258
         9781c:	3afffff0 	bcc	977e4 <TDocker::WaitAndLockTDocker(void)+0x2c>
         97820:	e1a00004 	mov	r0, r4
         97824:	eb68a634 	bl	1ac10fc <TDocker::$GetTDockerLock(void)>
         97828:	e3300000 	teq	r0, #0	; 0x0
         9782c:	03a05001 	moveq	r5, #1	; 0x1
         97830:	05c45032 	streqb	r5, [r4, #50]	; fField50
         97834:	e1a00005 	mov	r0, r5
         97838:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::UnlockTDocker(void)
 * Address: 0009783c
 */
TDocker::UnlockTDocker(void) {
    /*
         9783c:	e3a01000 	mov	r1, #0	; 0x0
         97840:	e5c01032 	strb	r1, [r0, #50]	; fField50
         97844:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDocker::OutOfMemory(void)
 * Address: 00097848
 */
TDocker::OutOfMemory(void) {
    /*
         97848:	e3a010e9 	mov	r1, #233	; 0xe9
         9784c:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
         97850:	e5a01050 	str	r1, [r0, #80]!	; fField80
         97854:	e59f0008 	ldr	r0, [pc, #8]	; 97864 <TDocker::OutOfMemory(void)+0x1c>
         97858:	e5900000 	ldr	r0, [r0]
         9785c:	e3a02000 	mov	r2, #0	; 0x0
         97860:	ea6d2e4d 	b	1be319c <$Throw>
         97864:	00371318 	eoreqs	r1, r7, r8, lsl r3
    */
}

/**
 * Symbol: TDocker::ReadChunk(void *, long, unsigned char)
 * Address: 00097868
 */
TDocker::ReadChunk(void *, long, unsigned char) {
    /*
         97868:	e1a0c00d 	mov	ip, sp
         9786c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         97870:	e24cb004 	sub	fp, ip, #4	; 0x4
         97874:	e1a05000 	mov	r5, r0
         97878:	e1a04002 	mov	r4, r2
         9787c:	e20360ff 	and	r6, r3, #255	; 0xff
         97880:	e52d2008 	str	r2, [sp, -#8]!
         97884:	e28d3004 	add	r3, sp, #4	; 0x4
         97888:	e1a0200d 	mov	r2, sp
         9788c:	e590c000 	ldr	ip, [r0]
         97890:	e1a0000c 	mov	r0, ip
         97894:	e59cc000 	ldr	ip, [ip]
         97898:	e1a0e00f 	mov	lr, pc
         9789c:	e28cf014 	add	pc, ip, #20	; 0x14
         978a0:	e3360000 	teq	r6, #0	; 0x0
         978a4:	11a01004 	movne	r1, r4
         978a8:	11a00005 	movne	r0, r5
         978ac:	1b67f468 	blne	1a94a54 <TDocker::$FlushPadding(unsigned long)>
         978b0:	e5dd0004 	ldrb	r0, [sp, #4]	; fField4
         978b4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::Pad(unsigned long)
 * Address: 000978c0
 */
TDocker::Pad(unsigned long) {
    /*
         978c0:	e1a0c00d 	mov	ip, sp
         978c4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         978c8:	e24cb004 	sub	fp, ip, #4	; 0x4
         978cc:	e2011003 	and	r1, r1, #3	; 0x3
         978d0:	e3510000 	cmp	r1, #0	; 0x0
         978d4:	991ba800 	ldmlsdb	fp, {fp, sp, pc}
         978d8:	e2612004 	rsb	r2, r1, #4	; 0x4
         978dc:	e3a01000 	mov	r1, #0	; 0x0
         978e0:	e52d1004 	str	r1, [sp, -#4]!	; fField4
         978e4:	e1a0100d 	mov	r1, sp
         978e8:	e590c000 	ldr	ip, [r0]
         978ec:	e1a0000c 	mov	r0, ip
         978f0:	e3a03000 	mov	r3, #0	; 0x0
         978f4:	e59cc000 	ldr	ip, [ip]
         978f8:	e1a0e00f 	mov	lr, pc
         978fc:	e28cf018 	add	pc, ip, #24	; 0x18
         97900:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::FlushPadding(unsigned long)
 * Address: 00097904
 */
TDocker::FlushPadding(unsigned long) {
    /*
         97904:	e1a0c00d 	mov	ip, sp
         97908:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         9790c:	e24cb004 	sub	fp, ip, #4	; 0x4
         97910:	e2011003 	and	r1, r1, #3	; 0x3
         97914:	e52d1004 	str	r1, [sp, -#4]!	; fField4
         97918:	e3510000 	cmp	r1, #0	; 0x0
         9791c:	da00000b 	ble	97950 <TDocker::FlushPadding(unsigned long)+0x4c>
         97920:	e24dd008 	sub	sp, sp, #8	; 0x8
         97924:	e2611004 	rsb	r1, r1, #4	; 0x4
         97928:	e58d1008 	str	r1, [sp, #8]
         9792c:	e1a0300d 	mov	r3, sp
         97930:	e28d2008 	add	r2, sp, #8	; 0x8
         97934:	e28d1004 	add	r1, sp, #4	; 0x4
         97938:	e590c000 	ldr	ip, [r0]
         9793c:	e1a0000c 	mov	r0, ip
         97940:	e59cc000 	ldr	ip, [ip]
         97944:	e1a0e00f 	mov	lr, pc
         97948:	e28cf014 	add	pc, ip, #20	; 0x14
         9794c:	e28dd008 	add	sp, sp, #8	; 0x8
         97950:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::VerifySoup(void)
 * Address: 00097954
 */
TDocker::VerifySoup(void) {
    /*
         97954:	e5900014 	ldr	r0, [r0, #20]	; fField20
         97958:	e5900000 	ldr	r0, [r0]
         9795c:	e3300002 	teq	r0, #2	; 0x2
         97960:	11a0f00e 	movne	pc, lr
         97964:	e59f0010 	ldr	r0, [pc, #10]	; 9797c <TDocker::VerifySoup(void)+0x28>
         97968:	e5900000 	ldr	r0, [r0]
         9796c:	e3a02000 	mov	r2, #0	; 0x0
         97970:	e3a0109a 	mov	r1, #154	; 0x9a
         97974:	e2411c6e 	sub	r1, r1, #28160	; 0x6e00
         97978:	ea6d2e07 	b	1be319c <$Throw>
         9797c:	003712d0 	ldreqsb	r1, [r7], -r0
    */
}

/**
 * Symbol: TDocker::WriteString(unsigned short *)
 * Address: 00097980
 */
TDocker::WriteString(unsigned short *) {
    /*
         97980:	e1a0c00d 	mov	ip, sp
         97984:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         97988:	e24cb004 	sub	fp, ip, #4	; 0x4
         9798c:	e1a04000 	mov	r4, r0
         97990:	e1a05001 	mov	r5, r1
         97994:	e1a00001 	mov	r0, r1
         97998:	eb6d5b70 	bl	1bee760 <$Ustrlen>
         9799c:	e3a01002 	mov	r1, #2	; 0x2
         979a0:	e0811080 	add	r1, r1, r0, lsl #1
         979a4:	e1a06001 	mov	r6, r1
         979a8:	e5940000 	ldr	r0, [r4]
         979ac:	eb6d363f 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         979b0:	e1a02006 	mov	r2, r6
         979b4:	e1a01005 	mov	r1, r5
         979b8:	e594c000 	ldr	ip, [r4]
         979bc:	e1a0000c 	mov	r0, ip
         979c0:	e3a03000 	mov	r3, #0	; 0x0
         979c4:	e59cc000 	ldr	ip, [ip]
         979c8:	e1a0e00f 	mov	lr, pc
         979cc:	e28cf018 	add	pc, ip, #24	; 0x18
         979d0:	e1a01006 	mov	r1, r6
         979d4:	e1a00004 	mov	r0, r4
         979d8:	eb681520 	bl	1a9ce60 <TDocker::$Pad(unsigned long)>
         979dc:	e5940000 	ldr	r0, [r4]
         979e0:	e5901000 	ldr	r1, [r0]
         979e4:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         979e8:	e281f020 	add	pc, r1, #32	; 0x20
    */
}

/**
 * Symbol: TDocker::WriteInheritanceFrame(void)
 * Address: 000979ec
 */
TDocker::WriteInheritanceFrame(void) {
    /*
         979ec:	e1a0c00d 	mov	ip, sp
         979f0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         979f4:	e24cb004 	sub	fp, ip, #4	; 0x4
         979f8:	e1a04000 	mov	r4, r0
         979fc:	e3a06000 	mov	r6, #0	; 0x0
         97a00:	e3a05000 	mov	r5, #0	; 0x0
         97a04:	e24dd034 	sub	sp, sp, #52	; 0x34
         97a08:	e59f71a4 	ldr	r7, [pc, #1a4]	; 97bb4 <TDocker::WriteInheritanceFrame(void)+0x1c8>
         97a0c:	e5970000 	ldr	r0, [r7]
         97a10:	eb6ca9cd 	bl	1bc214c <$AllocateRefHandle(long)>
         97a14:	e58d0000 	str	r0, [sp]
         97a18:	e1a0100d 	mov	r1, sp
         97a1c:	e28d0004 	add	r0, sp, #4	; 0x4
         97a20:	e3a02000 	mov	r2, #0	; 0x0
         97a24:	eb6ca5b1 	bl	1bc10f0 <TObjectIterator::$__ct(RefVar const &, int)>
         97a28:	e59d0000 	ldr	r0, [sp]
         97a2c:	eb6cade2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         97a30:	e28d0004 	add	r0, sp, #4	; 0x4
         97a34:	eb6cade8 	bl	1bc31dc <TObjectIterator::$Done(void)>
         97a38:	e3300000 	teq	r0, #0	; 0x0
         97a3c:	1a000012 	bne	97a8c <TDocker::WriteInheritanceFrame(void)+0xa0>
         97a40:	e2866001 	add	r6, r6, #1	; 0x1
         97a44:	e59d0008 	ldr	r0, [sp, #8]
         97a48:	e5900000 	ldr	r0, [r0]
         97a4c:	eb6cc281 	bl	1bc8458 <$SymbolName(long)>
         97a50:	eb6c7816 	bl	1bb5ab0 <$strlen>
         97a54:	e1a08000 	mov	r8, r0
         97a58:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         97a5c:	e5900000 	ldr	r0, [r0]
         97a60:	eb6cc27c 	bl	1bc8458 <$SymbolName(long)>
         97a64:	eb6c7811 	bl	1bb5ab0 <$strlen>
         97a68:	e0880000 	add	r0, r8, r0
         97a6c:	e0800005 	add	r0, r0, r5
         97a70:	e2805002 	add	r5, r0, #2	; 0x2
         97a74:	e28d0004 	add	r0, sp, #4	; 0x4
         97a78:	eb6cb61a 	bl	1bc52e8 <TObjectIterator::$Next(void)>
         97a7c:	e28d0004 	add	r0, sp, #4	; 0x4
         97a80:	eb6cadd5 	bl	1bc31dc <TObjectIterator::$Done(void)>
         97a84:	e3300000 	teq	r0, #0	; 0x0
         97a88:	0affffec 	beq	97a40 <TDocker::WriteInheritanceFrame(void)+0x54>
         97a8c:	e1a00004 	mov	r0, r4
         97a90:	e3a02000 	mov	r2, #0	; 0x0
         97a94:	e59f111c 	ldr	r1, [pc, #11c]	; 97bb8 <TDocker::WriteInheritanceFrame(void)+0x1cc>
         97a98:	eb6894da 	bl	1abce08 <TEzPipeProtocol::$WriteDockerHeader(unsigned long, unsigned char)>
         97a9c:	e2851004 	add	r1, r5, #4	; 0x4
         97aa0:	e1a05001 	mov	r5, r1
         97aa4:	e5940000 	ldr	r0, [r4]
         97aa8:	eb6d3600 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         97aac:	e1a01006 	mov	r1, r6
         97ab0:	e5940000 	ldr	r0, [r4]
         97ab4:	eb6d35fd 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         97ab8:	e24dd034 	sub	sp, sp, #52	; 0x34
         97abc:	e5970000 	ldr	r0, [r7]
         97ac0:	eb6ca9a1 	bl	1bc214c <$AllocateRefHandle(long)>
         97ac4:	e58d0000 	str	r0, [sp]
         97ac8:	e1a0100d 	mov	r1, sp
         97acc:	e28d0004 	add	r0, sp, #4	; 0x4
         97ad0:	e3a02000 	mov	r2, #0	; 0x0
         97ad4:	eb6ca585 	bl	1bc10f0 <TObjectIterator::$__ct(RefVar const &, int)>
         97ad8:	e59d0000 	ldr	r0, [sp]
         97adc:	eb6cadb6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         97ae0:	e28d0004 	add	r0, sp, #4	; 0x4
         97ae4:	eb6cadbc 	bl	1bc31dc <TObjectIterator::$Done(void)>
         97ae8:	e3300000 	teq	r0, #0	; 0x0
         97aec:	1a00001f 	bne	97b70 <TDocker::WriteInheritanceFrame(void)+0x184>
         97af0:	e59d0008 	ldr	r0, [sp, #8]
         97af4:	e5900000 	ldr	r0, [r0]
         97af8:	eb6cc256 	bl	1bc8458 <$SymbolName(long)>
         97afc:	e1a06000 	mov	r6, r0
         97b00:	e5947000 	ldr	r7, [r4]
         97b04:	eb6c77e9 	bl	1bb5ab0 <$strlen>
         97b08:	e2802001 	add	r2, r0, #1	; 0x1
         97b0c:	e1a01006 	mov	r1, r6
         97b10:	e1a00007 	mov	r0, r7
         97b14:	e3a03000 	mov	r3, #0	; 0x0
         97b18:	e597c000 	ldr	ip, [r7]
         97b1c:	e1a0e00f 	mov	lr, pc
         97b20:	e28cf018 	add	pc, ip, #24	; 0x18
         97b24:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         97b28:	e5900000 	ldr	r0, [r0]
         97b2c:	eb6cc249 	bl	1bc8458 <$SymbolName(long)>
         97b30:	e1a07000 	mov	r7, r0
         97b34:	e5946000 	ldr	r6, [r4]
         97b38:	eb6c77dc 	bl	1bb5ab0 <$strlen>
         97b3c:	e2802001 	add	r2, r0, #1	; 0x1
         97b40:	e1a01007 	mov	r1, r7
         97b44:	e1a00006 	mov	r0, r6
         97b48:	e3a03000 	mov	r3, #0	; 0x0
         97b4c:	e596c000 	ldr	ip, [r6]
         97b50:	e1a0e00f 	mov	lr, pc
         97b54:	e28cf018 	add	pc, ip, #24	; 0x18
         97b58:	e28d0004 	add	r0, sp, #4	; 0x4
         97b5c:	eb6cb5e1 	bl	1bc52e8 <TObjectIterator::$Next(void)>
         97b60:	e28d0004 	add	r0, sp, #4	; 0x4
         97b64:	eb6cad9c 	bl	1bc31dc <TObjectIterator::$Done(void)>
         97b68:	e3300000 	teq	r0, #0	; 0x0
         97b6c:	0affffdf 	beq	97af0 <TDocker::WriteInheritanceFrame(void)+0x104>
         97b70:	e1a01005 	mov	r1, r5
         97b74:	e1a00004 	mov	r0, r4
         97b78:	eb6814b8 	bl	1a9ce60 <TDocker::$Pad(unsigned long)>
         97b7c:	e5940000 	ldr	r0, [r4]
         97b80:	e5901000 	ldr	r1, [r0]
         97b84:	e1a0e00f 	mov	lr, pc
         97b88:	e281f020 	add	pc, r1, #32	; 0x20
         97b8c:	e28d0004 	add	r0, sp, #4	; 0x4
         97b90:	e3a01000 	mov	r1, #0	; 0x0
         97b94:	e1a0e00f 	mov	lr, pc
         97b98:	e59df004 	ldr	pc, [sp, #4]	; fField4
         97b9c:	e28dd034 	add	sp, sp, #52	; 0x34
         97ba0:	e28d0004 	add	r0, sp, #4	; 0x4
         97ba4:	e3a01000 	mov	r1, #0	; 0x0
         97ba8:	e1a0e00f 	mov	lr, pc
         97bac:	e59df004 	ldr	pc, [sp, #4]	; fField4
         97bb0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         97bb4:	0c105184 	ldfeqs	f5, [r0], -#528
         97bb8:	64696e68 	strvsbt	r6, [r9], -#3688
    */
}

/**
 * Symbol: TDocker::MakeStoreFrame(RefVar const &)
 * Address: 00097bbc
 */
TDocker::MakeStoreFrame(RefVar const &) {
    /*
         97bbc:	e1a0c00d 	mov	ip, sp
         97bc0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         97bc4:	e24cb004 	sub	fp, ip, #4	; 0x4
         97bc8:	e1a05001 	mov	r5, r1
         97bcc:	e24dd008 	sub	sp, sp, #8	; 0x8
         97bd0:	e3a0001a 	mov	r0, #26	; 0x1a
         97bd4:	eb6ca95c 	bl	1bc214c <$AllocateRefHandle(long)>
         97bd8:	e58d0000 	str	r0, [sp]
         97bdc:	e1a0400d 	mov	r4, sp
         97be0:	e3a00002 	mov	r0, #2	; 0x2
         97be4:	eb6ca958 	bl	1bc214c <$AllocateRefHandle(long)>
         97be8:	e58d0004 	str	r0, [sp, #4]	; fField4
         97bec:	e28d0004 	add	r0, sp, #4	; 0x4
         97bf0:	e1a01005 	mov	r1, r5
         97bf4:	e1a02004 	mov	r2, r4
         97bf8:	eb68f7b2 	bl	1ad5ac8 <$FConnBuildStoreFrame>
         97bfc:	eb6ca952 	bl	1bc214c <$AllocateRefHandle(long)>
         97c00:	e1a04000 	mov	r4, r0
         97c04:	e59d0000 	ldr	r0, [sp]
         97c08:	eb6cad6b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         97c0c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         97c10:	eb6cad69 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         97c14:	e5945000 	ldr	r5, [r4]
         97c18:	e1a00004 	mov	r0, r4
         97c1c:	eb6cad66 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         97c20:	e1a00005 	mov	r0, r5
         97c24:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::WriteStoreNames(void)
 * Address: 00097c28
 */
TDocker::WriteStoreNames(void) {
    /*
         97c28:	e1a0c00d 	mov	ip, sp
         97c2c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         97c30:	e24cb004 	sub	fp, ip, #4	; 0x4
         97c34:	e1a04000 	mov	r4, r0
         97c38:	e24dd008 	sub	sp, sp, #8	; 0x8
         97c3c:	eb6cb18a 	bl	1bc426c <$GetStores(void)>
         97c40:	eb6ca941 	bl	1bc214c <$AllocateRefHandle(long)>
         97c44:	e58d0004 	str	r0, [sp, #4]	; fField4
         97c48:	e5900000 	ldr	r0, [r0]
         97c4c:	eb6cb596 	bl	1bc52ac <$Length(long)>
         97c50:	e1a01000 	mov	r1, r0
         97c54:	e59f00c0 	ldr	r0, [pc, #c0]	; 97d1c <TDocker::WriteStoreNames(void)+0xf4>
         97c58:	eb6ca936 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
         97c5c:	eb6ca93a 	bl	1bc214c <$AllocateRefHandle(long)>
         97c60:	e3a06000 	mov	r6, #0	; 0x0
         97c64:	e58d0000 	str	r0, [sp]
         97c68:	e3a00002 	mov	r0, #2	; 0x2
         97c6c:	eb6ca936 	bl	1bc214c <$AllocateRefHandle(long)>
         97c70:	e1a05000 	mov	r5, r0
         97c74:	e24dd030 	sub	sp, sp, #48	; 0x30
         97c78:	e28d1034 	add	r1, sp, #52	; 0x34
         97c7c:	e1a0000d 	mov	r0, sp
         97c80:	e3a02000 	mov	r2, #0	; 0x0
         97c84:	eb6ca519 	bl	1bc10f0 <TObjectIterator::$__ct(RefVar const &, int)>
         97c88:	e1a0000d 	mov	r0, sp
         97c8c:	eb6cad52 	bl	1bc31dc <TObjectIterator::$Done(void)>
         97c90:	e28d7008 	add	r7, sp, #8	; 0x8
         97c94:	e3300000 	teq	r0, #0	; 0x0
         97c98:	1a00000f 	bne	97cdc <TDocker::WriteStoreNames(void)+0xb4>
         97c9c:	e1a01007 	mov	r1, r7
         97ca0:	e1a00004 	mov	r0, r4
         97ca4:	eb68778f 	bl	1ab5ae8 <TDocker::$MakeStoreFrame(RefVar const &)>
         97ca8:	e1a01006 	mov	r1, r6
         97cac:	e2866001 	add	r6, r6, #1	; 0x1
         97cb0:	e5850000 	str	r0, [r5]
         97cb4:	e1a02000 	mov	r2, r0
         97cb8:	e59d0030 	ldr	r0, [sp, #48]	; fField48
         97cbc:	e5900000 	ldr	r0, [r0]
         97cc0:	eb6cb9a4 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         97cc4:	e1a0000d 	mov	r0, sp
         97cc8:	eb6cb586 	bl	1bc52e8 <TObjectIterator::$Next(void)>
         97ccc:	e1a0000d 	mov	r0, sp
         97cd0:	eb6cad41 	bl	1bc31dc <TObjectIterator::$Done(void)>
         97cd4:	e3300000 	teq	r0, #0	; 0x0
         97cd8:	0affffef 	beq	97c9c <TDocker::WriteStoreNames(void)+0x74>
         97cdc:	e28d2030 	add	r2, sp, #48	; 0x30
         97ce0:	e1a00004 	mov	r0, r4
         97ce4:	e59f1034 	ldr	r1, [pc, #34]	; 97d20 <TDocker::WriteStoreNames(void)+0xf8>
         97ce8:	eb68944e 	bl	1abce28 <TDocker::$WriteRef(unsigned long, RefVar const &)>
         97cec:	e1a0000d 	mov	r0, sp
         97cf0:	e3a01000 	mov	r1, #0	; 0x0
         97cf4:	e1a0e00f 	mov	lr, pc
         97cf8:	e59df000 	ldr	pc, [sp]
         97cfc:	e28dd030 	add	sp, sp, #48	; 0x30
         97d00:	e1a00005 	mov	r0, r5
         97d04:	eb6cad2c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         97d08:	e59d0000 	ldr	r0, [sp]
         97d0c:	eb6cad2a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         97d10:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         97d14:	eb6cad28 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         97d18:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         97d1c:	00681f10 	rsbeq	r1, r8, r0, lsl pc
         97d20:	73746f72 	cmnvc	r4, #456	; 0x1c8
    */
}

/**
 * Symbol: TDocker::WriteSoupNames(void)
 * Address: 00097d24
 */
TDocker::WriteSoupNames(void) {
    /*
         97d24:	e1a0c00d 	mov	ip, sp
         97d28:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         97d2c:	e24cb004 	sub	fp, ip, #4	; 0x4
         97d30:	e1a04000 	mov	r4, r0
         97d34:	e24dd008 	sub	sp, sp, #8	; 0x8
         97d38:	e3a02000 	mov	r2, #0	; 0x0
         97d3c:	e59f128c 	ldr	r1, [pc, #28c]	; 97fd0 <TDocker::WriteSoupNames(void)+0x2ac>	; fField28
         97d40:	eb689430 	bl	1abce08 <TEzPipeProtocol::$WriteDockerHeader(unsigned long, unsigned char)>
         97d44:	e24dd010 	sub	sp, sp, #16	; 0x10
         97d48:	e2840010 	add	r0, r4, #16	; 0x10
         97d4c:	e1a09000 	mov	r9, r0
         97d50:	eb6cbda8 	bl	1bc73f8 <$StoreGetSoupNames>
         97d54:	eb6ca8fc 	bl	1bc214c <$AllocateRefHandle(long)>
         97d58:	e58d000c 	str	r0, [sp, #12]	; fField12
         97d5c:	e3a00002 	mov	r0, #2	; 0x2
         97d60:	eb6ca8f9 	bl	1bc214c <$AllocateRefHandle(long)>
         97d64:	e58d0008 	str	r0, [sp, #8]
         97d68:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         97d6c:	e5900000 	ldr	r0, [r0]
         97d70:	eb6cb54d 	bl	1bc52ac <$Length(long)>
         97d74:	e1a07000 	mov	r7, r0
         97d78:	e3a05000 	mov	r5, #0	; 0x0
         97d7c:	e1a01000 	mov	r1, r0
         97d80:	e59f024c 	ldr	r0, [pc, #24c]	; 97fd4 <TDocker::WriteSoupNames(void)+0x2b0>	; fField24
         97d84:	e1a06000 	mov	r6, r0
         97d88:	eb6ca8ea 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
         97d8c:	eb6ca8ee 	bl	1bc214c <$AllocateRefHandle(long)>
         97d90:	e1a01007 	mov	r1, r7
         97d94:	e58d0004 	str	r0, [sp, #4]	; fField4
         97d98:	e1a00006 	mov	r0, r6
         97d9c:	eb6ca8e5 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
         97da0:	eb6ca8e9 	bl	1bc214c <$AllocateRefHandle(long)>
         97da4:	e58d0000 	str	r0, [sp]
         97da8:	e3a00002 	mov	r0, #2	; 0x2
         97dac:	eb6ca8e6 	bl	1bc214c <$AllocateRefHandle(long)>
         97db0:	e1a06000 	mov	r6, r0
         97db4:	e24dd030 	sub	sp, sp, #48	; 0x30
         97db8:	e28d103c 	add	r1, sp, #60	; 0x3c
         97dbc:	e1a0000d 	mov	r0, sp
         97dc0:	e3a02000 	mov	r2, #0	; 0x0
         97dc4:	eb6ca4c9 	bl	1bc10f0 <TObjectIterator::$__ct(RefVar const &, int)>
         97dc8:	e1a0000d 	mov	r0, sp
         97dcc:	eb6cad02 	bl	1bc31dc <TObjectIterator::$Done(void)>
         97dd0:	e3300000 	teq	r0, #0	; 0x0
         97dd4:	1a000034 	bne	97eac <TDocker::WriteSoupNames(void)+0x188>
         97dd8:	e59f11f8 	ldr	r1, [pc, #1f8]	; 97fd8 <TDocker::WriteSoupNames(void)+0x2b4>
         97ddc:	e58d1044 	str	r1, [sp, #68]	; fField68
         97de0:	e28d1008 	add	r1, sp, #8	; 0x8
         97de4:	e58d1040 	str	r1, [sp, #64]	; fField64
         97de8:	e1a00009 	mov	r0, r9
         97dec:	e59d1040 	ldr	r1, [sp, #64]	; fField64
         97df0:	eb6cbd7f 	bl	1bc73f4 <$StoreGetSoup>
         97df4:	e59d1038 	ldr	r1, [sp, #56]	; fField56
         97df8:	e5810000 	str	r0, [r1]
         97dfc:	e59d1044 	ldr	r1, [sp, #68]	; fField68
         97e00:	e28d0038 	add	r0, sp, #56	; 0x38
         97e04:	eb6cbd65 	bl	1bc73a0 <$SoupGetInfo__FRC6RefVarT1>
         97e08:	e5860000 	str	r0, [r6]
         97e0c:	e3300002 	teq	r0, #2	; 0x2
         97e10:	0a00000c 	beq	97e48 <TDocker::WriteSoupNames(void)+0x124>
         97e14:	e59f11c0 	ldr	r1, [pc, #1c0]	; 97fdc <TDocker::WriteSoupNames(void)+0x2b8>
         97e18:	e5911000 	ldr	r1, [r1]
         97e1c:	e5911000 	ldr	r1, [r1]
         97e20:	eb6cb10e 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         97e24:	e5860000 	str	r0, [r6]
         97e28:	e3300002 	teq	r0, #2	; 0x2
         97e2c:	0a000005 	beq	97e48 <TDocker::WriteSoupNames(void)+0x124>
         97e30:	e59f11a8 	ldr	r1, [pc, #1a8]	; 97fe0 <TDocker::WriteSoupNames(void)+0x2bc>
         97e34:	e5911000 	ldr	r1, [r1]
         97e38:	e5911000 	ldr	r1, [r1]
         97e3c:	eb6cb0fb 	bl	1bc4230 <$EQRef__FlT1>
         97e40:	e3300000 	teq	r0, #0	; 0x0
         97e44:	1a000012 	bne	97e94 <TDocker::WriteSoupNames(void)+0x170>
         97e48:	e59d0008 	ldr	r0, [sp, #8]
         97e4c:	e5902000 	ldr	r2, [r0]
         97e50:	e59d0034 	ldr	r0, [sp, #52]	; fField52
         97e54:	e5900000 	ldr	r0, [r0]
         97e58:	e1a01005 	mov	r1, r5
         97e5c:	eb6cb93d 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         97e60:	e1a0a005 	mov	sl, r5
         97e64:	e2855001 	add	r5, r5, #1	; 0x1
         97e68:	e28d0038 	add	r0, sp, #56	; 0x38
         97e6c:	eb6cbd4e 	bl	1bc73ac <$SoupGetSignature(RefVar const &)>
         97e70:	eb6ca8b5 	bl	1bc214c <$AllocateRefHandle(long)>
         97e74:	e1a08000 	mov	r8, r0
         97e78:	e5902000 	ldr	r2, [r0]
         97e7c:	e59d0030 	ldr	r0, [sp, #48]	; fField48
         97e80:	e5900000 	ldr	r0, [r0]
         97e84:	e1a0100a 	mov	r1, sl
         97e88:	eb6cb932 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         97e8c:	e1a00008 	mov	r0, r8
         97e90:	eb6cacc9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         97e94:	e1a0000d 	mov	r0, sp
         97e98:	eb6cb512 	bl	1bc52e8 <TObjectIterator::$Next(void)>
         97e9c:	e1a0000d 	mov	r0, sp
         97ea0:	eb6caccd 	bl	1bc31dc <TObjectIterator::$Done(void)>
         97ea4:	e3300000 	teq	r0, #0	; 0x0
         97ea8:	0affffce 	beq	97de8 <TDocker::WriteSoupNames(void)+0xc4>
         97eac:	e1350007 	teq	r5, r7
         97eb0:	0a000005 	beq	97ecc <TDocker::WriteSoupNames(void)+0x1a8>
         97eb4:	e1a01005 	mov	r1, r5
         97eb8:	e28d0034 	add	r0, sp, #52	; 0x34
         97ebc:	eb6cb92a 	bl	1bc636c <$SetLength(RefVar const &, long)>
         97ec0:	e1a01005 	mov	r1, r5
         97ec4:	e28d0030 	add	r0, sp, #48	; 0x30
         97ec8:	eb6cb927 	bl	1bc636c <$SetLength(RefVar const &, long)>
         97ecc:	e24dd050 	sub	sp, sp, #80	; 0x50
         97ed0:	e28d1084 	add	r1, sp, #132	; 0x84
         97ed4:	e28d0028 	add	r0, sp, #40	; 0x28
         97ed8:	e3a03000 	mov	r3, #0	; 0x0
         97edc:	e5942000 	ldr	r2, [r4]
         97ee0:	eb6ca481 	bl	1bc10ec <TObjectWriter::$__ct(RefVar const &, CPipe &, int)>
         97ee4:	e28d1080 	add	r1, sp, #128	; 0x80
         97ee8:	e1a0000d 	mov	r0, sp
         97eec:	e3a03000 	mov	r3, #0	; 0x0
         97ef0:	e5942000 	ldr	r2, [r4]
         97ef4:	eb6ca47c 	bl	1bc10ec <TObjectWriter::$__ct(RefVar const &, CPipe &, int)>
         97ef8:	e3a00000 	mov	r0, #0	; 0x0
         97efc:	e52d006c 	str	r0, [sp, -#108]!	; fField108
         97f00:	e28d0008 	add	r0, sp, #8	; 0x8
         97f04:	eb6c6a9a 	bl	1bb2974 <$setjmp>
         97f08:	e3300000 	teq	r0, #0	; 0x0
         97f0c:	1a000034 	bne	97fe4 <TDocker::WriteSoupNames(void)+0x2c0>
         97f10:	e1a0000d 	mov	r0, sp
         97f14:	eb6d2058 	bl	1be007c <$AddExceptionHandler>
         97f18:	e28d0094 	add	r0, sp, #148	; 0x94
         97f1c:	eb6cb914 	bl	1bc6374 <TObjectWriter::$Size(void)>
         97f20:	e1a05000 	mov	r5, r0
         97f24:	e28d006c 	add	r0, sp, #108	; 0x6c
         97f28:	eb6cb911 	bl	1bc6374 <TObjectWriter::$Size(void)>
         97f2c:	e0851000 	add	r1, r5, r0
         97f30:	e1a05001 	mov	r5, r1
         97f34:	e5940000 	ldr	r0, [r4]
         97f38:	eb6d34dc 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         97f3c:	e28d0094 	add	r0, sp, #148	; 0x94
         97f40:	eb6cc14d 	bl	1bc847c <TObjectWriter::$Write(void)>
         97f44:	e28d006c 	add	r0, sp, #108	; 0x6c
         97f48:	eb6cc14b 	bl	1bc847c <TObjectWriter::$Write(void)>
         97f4c:	e1a0000d 	mov	r0, sp
         97f50:	eb6d2458 	bl	1be10b8 <$ExitHandler>
         97f54:	e28dd06c 	add	sp, sp, #108	; 0x6c
         97f58:	e1a0000d 	mov	r0, sp
         97f5c:	e3a01000 	mov	r1, #0	; 0x0
         97f60:	eb66da00 	bl	1a4e768 <TObjectWriter::$__dt(void)>
         97f64:	e28d0028 	add	r0, sp, #40	; 0x28
         97f68:	e3a01000 	mov	r1, #0	; 0x0
         97f6c:	eb66d9fd 	bl	1a4e768 <TObjectWriter::$__dt(void)>
         97f70:	e28dd050 	add	sp, sp, #80	; 0x50
         97f74:	e1a01005 	mov	r1, r5
         97f78:	e1a00004 	mov	r0, r4
         97f7c:	eb6813b7 	bl	1a9ce60 <TDocker::$Pad(unsigned long)>
         97f80:	e5940000 	ldr	r0, [r4]
         97f84:	e5901000 	ldr	r1, [r0]
         97f88:	e1a0e00f 	mov	lr, pc
         97f8c:	e281f020 	add	pc, r1, #32	; 0x20
         97f90:	e1a0000d 	mov	r0, sp
         97f94:	e3a01000 	mov	r1, #0	; 0x0
         97f98:	e1a0e00f 	mov	lr, pc
         97f9c:	e59df000 	ldr	pc, [sp]
         97fa0:	e28dd030 	add	sp, sp, #48	; 0x30
         97fa4:	e1a00006 	mov	r0, r6
         97fa8:	eb6cac83 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         97fac:	e59d0000 	ldr	r0, [sp]
         97fb0:	eb6cac81 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         97fb4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         97fb8:	eb6cac7f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         97fbc:	e59d0008 	ldr	r0, [sp, #8]
         97fc0:	eb6cac7d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         97fc4:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         97fc8:	eb6cac7b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         97fcc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         97fd0:	736f7570 	cmnvc	pc, #469762048	; 0x1c000000
         97fd4:	00681f10 	rsbeq	r1, r8, r0, lsl pc
         97fd8:	00684748 	rsbeq	r4, r8, r8, asr #14
         97fdc:	00683c10 	rsbeq	r3, r8, r0, lsl ip
         97fe0:	006849e0 	rsbeq	r4, r8, r0, ror #19
         97fe4:	e28d0094 	add	r0, sp, #148	; 0x94
         97fe8:	e3a01000 	mov	r1, #0	; 0x0
         97fec:	eb66d9dd 	bl	1a4e768 <TObjectWriter::$__dt(void)>
         97ff0:	e28d006c 	add	r0, sp, #108	; 0x6c
         97ff4:	e3a01000 	mov	r1, #0	; 0x0
         97ff8:	eb66d9da 	bl	1a4e768 <TObjectWriter::$__dt(void)>
         97ffc:	e1a0000d 	mov	r0, sp
         98000:	eb6d2853 	bl	1be2154 <$NextHandler>
         98004:	eafffff6 	b	97fe4 <TDocker::WriteSoupNames(void)+0x2c0>
    */
}

/**
 * Symbol: TDocker::FreeCurrentStore(void)
 * Address: 00098008
 */
TDocker::FreeCurrentStore(void) {
    /*
         98008:	e1a0c00d 	mov	ip, sp
         9800c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         98010:	e24cb004 	sub	fp, ip, #4	; 0x4
         98014:	e2801010 	add	r1, r0, #16	; 0x10
         98018:	e1a04001 	mov	r4, r1
         9801c:	e5911000 	ldr	r1, [r1]
         98020:	e5911000 	ldr	r1, [r1]
         98024:	e3310002 	teq	r1, #2	; 0x2
         98028:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         9802c:	e24dd004 	sub	sp, sp, #4	; 0x4
         98030:	e59f1040 	ldr	r1, [pc, #40]	; 98078 <TDocker::FreeCurrentStore(void)+0x70>	; fField40
         98034:	e5911000 	ldr	r1, [r1]
         98038:	e5911000 	ldr	r1, [r1]
         9803c:	e5900020 	ldr	r0, [r0, #32]	; fField32
         98040:	e5900000 	ldr	r0, [r0]
         98044:	eb6cb085 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         98048:	eb6ca83f 	bl	1bc214c <$AllocateRefHandle(long)>
         9804c:	e58d0000 	str	r0, [sp]
         98050:	e1a0200d 	mov	r2, sp
         98054:	e1a00004 	mov	r0, r4
         98058:	e59f101c 	ldr	r1, [pc, #1c]	; 9807c <TDocker::FreeCurrentStore(void)+0x74>
         9805c:	eb6d9ff8 	bl	1c00044 <$NSSend__FRC6RefVarN21>
         98060:	e59d0000 	ldr	r0, [sp]
         98064:	eb6cac54 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         98068:	e3a00002 	mov	r0, #2	; 0x2
         9806c:	e5941000 	ldr	r1, [r4]
         98070:	e5810000 	str	r0, [r1]
         98074:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         98078:	00681ed8 	ldreqd	r1, [r8], -#232
         9807c:	00683780 	rsbeq	r3, r8, r0, lsl #15
    */
}

/**
 * Symbol: TDocker::ReserveCurrentStore(RefVar const &)
 * Address: 00098080
 */
TDocker::ReserveCurrentStore(RefVar const &) {
    /*
         98080:	e1a0c00d 	mov	ip, sp
         98084:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         98088:	e24cb004 	sub	fp, ip, #4	; 0x4
         9808c:	e1a04000 	mov	r4, r0
         98090:	e1a05001 	mov	r5, r1
         98094:	e24dd008 	sub	sp, sp, #8	; 0x8
         98098:	e2800010 	add	r0, r0, #16	; 0x10
         9809c:	e1a06000 	mov	r6, r0
         980a0:	e5900000 	ldr	r0, [r0]
         980a4:	e5900000 	ldr	r0, [r0]
         980a8:	e3300002 	teq	r0, #2	; 0x2
         980ac:	11a00004 	movne	r0, r4
         980b0:	1b68a403 	blne	1ac10c4 <TDocker::$FreeCurrentStore(void)>
         980b4:	e5951000 	ldr	r1, [r5]
         980b8:	e5911000 	ldr	r1, [r1]
         980bc:	e5960000 	ldr	r0, [r6]
         980c0:	e5801000 	str	r1, [r0]
         980c4:	e2840020 	add	r0, r4, #32	; 0x20
         980c8:	e1a05000 	mov	r5, r0
         980cc:	e59f1064 	ldr	r1, [pc, #64]	; 98138 <TDocker::ReserveCurrentStore(RefVar const &)+0xb8>	; fField64
         980d0:	e5911000 	ldr	r1, [r1]
         980d4:	e5911000 	ldr	r1, [r1]
         980d8:	e5900000 	ldr	r0, [r0]
         980dc:	e5900000 	ldr	r0, [r0]
         980e0:	eb6cb05e 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         980e4:	eb6ca818 	bl	1bc214c <$AllocateRefHandle(long)>
         980e8:	e58d0000 	str	r0, [sp]
         980ec:	e1a0400d 	mov	r4, sp
         980f0:	e59f0044 	ldr	r0, [pc, #44]	; 9813c <TDocker::ReserveCurrentStore(RefVar const &)+0xbc>	; fField44
         980f4:	e5900000 	ldr	r0, [r0]
         980f8:	e5901000 	ldr	r1, [r0]
         980fc:	e5950000 	ldr	r0, [r5]
         98100:	e5900000 	ldr	r0, [r0]
         98104:	eb6cb055 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         98108:	eb6ca80f 	bl	1bc214c <$AllocateRefHandle(long)>
         9810c:	e58d0004 	str	r0, [sp, #4]	; fField4
         98110:	e28d2004 	add	r2, sp, #4	; 0x4
         98114:	e1a00006 	mov	r0, r6
         98118:	e59f1020 	ldr	r1, [pc, #20]	; 98140 <TDocker::ReserveCurrentStore(RefVar const &)+0xc0>	; fField20
         9811c:	e1a03004 	mov	r3, r4
         98120:	eb6d9fc8 	bl	1c00048 <$NSSend__FRC6RefVarN31>
         98124:	e59d0000 	ldr	r0, [sp]
         98128:	eb6cac23 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9812c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         98130:	eb6cac21 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         98134:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         98138:	00681ed0 	ldreqd	r1, [r8], -#224
         9813c:	00681ed8 	ldreqd	r1, [r8], -#232
         98140:	00683770 	rsbeq	r3, r8, r0, ror r7
    */
}

/**
 * Symbol: TDocker::SetCurrentStore(unsigned char)
 * Address: 0009821c
 */
TDocker::SetCurrentStore(unsigned char) {
    /*
         9821c:	e1a0c00d 	mov	ip, sp
         98220:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         98224:	e24cb004 	sub	fp, ip, #4	; 0x4
         98228:	e1a04000 	mov	r4, r0
         9822c:	e20100ff 	and	r0, r1, #255	; 0xff
         98230:	e3a06002 	mov	r6, #2	; 0x2
         98234:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         98238:	e24dd070 	sub	sp, sp, #112	; 0x70
         9823c:	e1a00006 	mov	r0, r6
         98240:	eb6ca7c1 	bl	1bc214c <$AllocateRefHandle(long)>
         98244:	e58d0000 	str	r0, [sp]
         98248:	e1a0100d 	mov	r1, sp
         9824c:	e1a00004 	mov	r0, r4
         98250:	eb687e66 	bl	1ab7bf0 <TDocker::$ReadRef(RefVar const &)>
         98254:	eb6ca7bc 	bl	1bc214c <$AllocateRefHandle(long)>
         98258:	e1a05000 	mov	r5, r0
         9825c:	e59d0000 	ldr	r0, [sp]
         98260:	eb6cabd5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         98264:	e59f01dc 	ldr	r0, [pc, #1dc]	; 98448 <TDocker::SetCurrentStore(unsigned char)+0x22c>
         98268:	e5900000 	ldr	r0, [r0]
         9826c:	e5901000 	ldr	r1, [r0]
         98270:	e5950000 	ldr	r0, [r5]
         98274:	eb6caff9 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         98278:	eb6ca7b3 	bl	1bc214c <$AllocateRefHandle(long)>
         9827c:	e58d006c 	str	r0, [sp, #108]	; fField108
         98280:	e59f01c4 	ldr	r0, [pc, #1c4]	; 9844c <TDocker::SetCurrentStore(unsigned char)+0x230>
         98284:	e5900000 	ldr	r0, [r0]
         98288:	e5901000 	ldr	r1, [r0]
         9828c:	e5950000 	ldr	r0, [r5]
         98290:	eb6caff2 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         98294:	eb6ca7ac 	bl	1bc214c <$AllocateRefHandle(long)>
         98298:	e58d0068 	str	r0, [sp, #104]	; fField104
         9829c:	e59f01ac 	ldr	r0, [pc, #1ac]	; 98450 <TDocker::SetCurrentStore(unsigned char)+0x234>
         982a0:	e5900000 	ldr	r0, [r0]
         982a4:	e5901000 	ldr	r1, [r0]
         982a8:	e5950000 	ldr	r0, [r5]
         982ac:	eb6cafeb 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         982b0:	eb6ca7a5 	bl	1bc214c <$AllocateRefHandle(long)>
         982b4:	e1a09000 	mov	r9, r0
         982b8:	e59f7194 	ldr	r7, [pc, #194]	; 98454 <TDocker::SetCurrentStore(unsigned char)+0x238>
         982bc:	e5970000 	ldr	r0, [r7]
         982c0:	e5901000 	ldr	r1, [r0]
         982c4:	e5950000 	ldr	r0, [r5]
         982c8:	eb6cafde 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
         982cc:	e20000ff 	and	r0, r0, #255	; 0xff
         982d0:	e58d0064 	str	r0, [sp, #100]	; fField100
         982d4:	e5970000 	ldr	r0, [r7]
         982d8:	e5901000 	ldr	r1, [r0]
         982dc:	e5950000 	ldr	r0, [r5]
         982e0:	eb6cafde 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         982e4:	eb6ca798 	bl	1bc214c <$AllocateRefHandle(long)>
         982e8:	e58d0060 	str	r0, [sp, #96]	; fField96
         982ec:	eb6cafde 	bl	1bc426c <$GetStores(void)>
         982f0:	eb6ca795 	bl	1bc214c <$AllocateRefHandle(long)>
         982f4:	e1a07000 	mov	r7, r0
         982f8:	e1a00006 	mov	r0, r6
         982fc:	eb6ca792 	bl	1bc214c <$AllocateRefHandle(long)>
         98300:	e58d005c 	str	r0, [sp, #92]	; fField92
         98304:	e3a00002 	mov	r0, #2	; 0x2
         98308:	eb6ca78f 	bl	1bc214c <$AllocateRefHandle(long)>
         9830c:	e58d0058 	str	r0, [sp, #88]	; fField88
         98310:	e3a00002 	mov	r0, #2	; 0x2
         98314:	eb6ca78c 	bl	1bc214c <$AllocateRefHandle(long)>
         98318:	e58d0054 	str	r0, [sp, #84]	; fField84
         9831c:	e5990000 	ldr	r0, [r9]
         98320:	e3100003 	tst	r0, #3	; 0x3
         98324:	01a00140 	moveq	r0, r0, asr #2
         98328:	0a000000 	beq	98330 <TDocker::SetCurrentStore(unsigned char)+0x114>
         9832c:	eb6ca77a 	bl	1bc211c <$_RINTError(long)>
         98330:	e1a0a000 	mov	sl, r0
         98334:	e3a08000 	mov	r8, #0	; 0x0
         98338:	e28d106c 	add	r1, sp, #108	; 0x6c
         9833c:	e28d002c 	add	r0, sp, #44	; 0x2c
         98340:	eb0451b6 	bl	1aca20 <TRichString::__ct(RefVar const &)>
         98344:	e28d1068 	add	r1, sp, #104	; 0x68
         98348:	e28d0004 	add	r0, sp, #4	; 0x4
         9834c:	eb0451b3 	bl	1aca20 <TRichString::__ct(RefVar const &)>
         98350:	e1a00004 	mov	r0, r4
         98354:	eb68a35a 	bl	1ac10c4 <TDocker::$FreeCurrentStore(void)>
         98358:	e24dd004 	sub	sp, sp, #4	; 0x4
         9835c:	e3a06000 	mov	r6, #0	; 0x0
         98360:	e5970000 	ldr	r0, [r7]
         98364:	eb6cb3d0 	bl	1bc52ac <$Length(long)>
         98368:	e3500000 	cmp	r0, #0	; 0x0
         9836c:	da00004c 	ble	984a4 <TDocker::SetCurrentStore(unsigned char)+0x288>
         98370:	e1a01006 	mov	r1, r6
         98374:	e5970000 	ldr	r0, [r7]
         98378:	eb6cafb5 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         9837c:	e59d1060 	ldr	r1, [sp, #96]	; fField96
         98380:	e5810000 	str	r0, [r1]
         98384:	e28d0060 	add	r0, sp, #96	; 0x60
         98388:	eb6cbc17 	bl	1bc73ec <$StoreGetName>
         9838c:	e59d105c 	ldr	r1, [sp, #92]	; fField92
         98390:	e5810000 	str	r0, [r1]
         98394:	e28d0060 	add	r0, sp, #96	; 0x60
         98398:	eb6cbc12 	bl	1bc73e8 <$StoreGetKind>
         9839c:	e59d1058 	ldr	r1, [sp, #88]	; fField88
         983a0:	e5810000 	str	r0, [r1]
         983a4:	e28d0060 	add	r0, sp, #96	; 0x60
         983a8:	eb6cbc10 	bl	1bc73f0 <$StoreGetSignature>
         983ac:	e3100003 	tst	r0, #3	; 0x3
         983b0:	01a00140 	moveq	r0, r0, asr #2
         983b4:	0a000000 	beq	983bc <TDocker::SetCurrentStore(unsigned char)+0x1a0>
         983b8:	eb6ca757 	bl	1bc211c <$_RINTError(long)>
         983bc:	e40d0050 	str	r0, [sp], -#80	; fField80
         983c0:	e28d10ac 	add	r1, sp, #172	; 0xac
         983c4:	e28d0028 	add	r0, sp, #40	; 0x28
         983c8:	eb045194 	bl	1aca20 <TRichString::__ct(RefVar const &)>
         983cc:	e28d10a8 	add	r1, sp, #168	; 0xa8
         983d0:	e1a0000d 	mov	r0, sp
         983d4:	eb045191 	bl	1aca20 <TRichString::__ct(RefVar const &)>
         983d8:	e3a03000 	mov	r3, #0	; 0x0
         983dc:	e92d0008 	stmdb	sp!, {r3}
         983e0:	e3e03000 	mvn	r3, #0	; 0x0
         983e4:	e3a02000 	mov	r2, #0	; 0x0
         983e8:	e28d1084 	add	r1, sp, #132	; 0x84
         983ec:	e28d002c 	add	r0, sp, #44	; 0x2c
         983f0:	eb6c4016 	bl	1ba8450 <TRichString::$CompareSubStringCommon( const(TRichString const &, unsigned long, long, unsigned char))>
         983f4:	e28dd004 	add	sp, sp, #4	; 0x4
         983f8:	e3300000 	teq	r0, #0	; 0x0
         983fc:	1a00001c 	bne	98474 <TDocker::SetCurrentStore(unsigned char)+0x258>
         98400:	e3a03000 	mov	r3, #0	; 0x0
         98404:	e92d0008 	stmdb	sp!, {r3}
         98408:	e3e03000 	mvn	r3, #0	; 0x0
         9840c:	e3a02000 	mov	r2, #0	; 0x0
         98410:	e28d105c 	add	r1, sp, #92	; 0x5c
         98414:	e28d0004 	add	r0, sp, #4	; 0x4
         98418:	eb6c400c 	bl	1ba8450 <TRichString::$CompareSubStringCommon( const(TRichString const &, unsigned long, long, unsigned char))>
         9841c:	e28dd004 	add	sp, sp, #4	; 0x4
         98420:	e3300000 	teq	r0, #0	; 0x0
         98424:	1a000012 	bne	98474 <TDocker::SetCurrentStore(unsigned char)+0x258>
         98428:	e33a0000 	teq	sl, #0	; 0x0
         9842c:	159d0050 	ldrne	r0, [sp, #80]	; fField80
         98430:	1130000a 	teqne	r0, sl
         98434:	1a000007 	bne	98458 <TDocker::SetCurrentStore(unsigned char)+0x23c>
         98438:	e28d10b0 	add	r1, sp, #176	; 0xb0
         9843c:	e1a00004 	mov	r0, r4
         98440:	eb68a74b 	bl	1ac2174 <TDocker::$ReserveCurrentStore(RefVar const &)>
         98444:	ea000004 	b	9845c <TDocker::SetCurrentStore(unsigned char)+0x240>
         98448:	006839a8 	rsbeq	r3, r8, r8, lsr #19
         9844c:	006833f0 	streqd	r3, [r8], -#48	; fField48
         98450:	00684680 	rsbeq	r4, r8, r0, lsl #13
         98454:	006831f8 	streqd	r3, [r8], -#24	; fField24
         98458:	e3a08001 	mov	r8, #1	; 0x1
         9845c:	e59d0000 	ldr	r0, [sp]
         98460:	eb6cab55 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         98464:	e59d0028 	ldr	r0, [sp, #40]	; fField40
         98468:	eb6cab53 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9846c:	e28dd050 	add	sp, sp, #80	; 0x50
         98470:	ea00000b 	b	984a4 <TDocker::SetCurrentStore(unsigned char)+0x288>
         98474:	e59d0000 	ldr	r0, [sp]
         98478:	eb6cab4f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9847c:	e59d0028 	ldr	r0, [sp, #40]	; fField40
         98480:	eb6cab4d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         98484:	e28dd050 	add	sp, sp, #80	; 0x50
         98488:	e2860001 	add	r0, r6, #1	; 0x1
         9848c:	e1a06800 	mov	r6, r0, lsl #16
         98490:	e1a06846 	mov	r6, r6, asr #16
         98494:	e5970000 	ldr	r0, [r7]
         98498:	eb6cb383 	bl	1bc52ac <$Length(long)>
         9849c:	e1500006 	cmp	r0, r6
         984a0:	caffffb2 	bgt	98370 <TDocker::SetCurrentStore(unsigned char)+0x154>
         984a4:	e2840010 	add	r0, r4, #16	; 0x10
         984a8:	e1a06000 	mov	r6, r0
         984ac:	e5900000 	ldr	r0, [r0]
         984b0:	e5900000 	ldr	r0, [r0]
         984b4:	e3300002 	teq	r0, #2	; 0x2
         984b8:	1a000006 	bne	984d8 <TDocker::SetCurrentStore(unsigned char)+0x2bc>
         984bc:	e3380000 	teq	r8, #0	; 0x0
         984c0:	03a00092 	moveq	r0, #146	; 0x92
         984c4:	02400c6e 	subeq	r0, r0, #28160	; 0x6e00
         984c8:	159f0004 	ldrne	r0, [pc, #4]	; 984d4 <TDocker::SetCurrentStore(unsigned char)+0x2b8>	; fField4
         984cc:	e5840050 	str	r0, [r4, #80]	; fField80
         984d0:	ea000009 	b	984fc <TDocker::SetCurrentStore(unsigned char)+0x2e0>
         984d4:	ffff929f 	swinv	0x00ff929f
         984d8:	e5940050 	ldr	r0, [r4, #80]	; fField80
         984dc:	e3300000 	teq	r0, #0	; 0x0
         984e0:	1a000005 	bne	984fc <TDocker::SetCurrentStore(unsigned char)+0x2e0>
         984e4:	e59d0074 	ldr	r0, [sp, #116]	; fField116
         984e8:	e3300000 	teq	r0, #0	; 0x0
         984ec:	0a000002 	beq	984fc <TDocker::SetCurrentStore(unsigned char)+0x2e0>
         984f0:	e1a00004 	mov	r0, r4
         984f4:	eb68924f 	bl	1abce38 <TDocker::$WriteSoupNames(void)>
         984f8:	ea000002 	b	98508 <TDocker::SetCurrentStore(unsigned char)+0x2ec>
         984fc:	e5941050 	ldr	r1, [r4, #80]	; fField80
         98500:	e1a00004 	mov	r0, r4
         98504:	eb689248 	bl	1abce2c <TDocker::$WriteResult(long)>
         98508:	e5960000 	ldr	r0, [r6]
         9850c:	e5900000 	ldr	r0, [r0]
         98510:	e3300002 	teq	r0, #2	; 0x2
         98514:	0a00000e 	beq	98554 <TDocker::SetCurrentStore(unsigned char)+0x338>
         98518:	e1a00006 	mov	r0, r6
         9851c:	eb6cbbb0 	bl	1bc73e4 <$StoreFlush>
         98520:	e59d0068 	ldr	r0, [sp, #104]	; fField104
         98524:	e3300000 	teq	r0, #0	; 0x0
         98528:	0a000009 	beq	98554 <TDocker::SetCurrentStore(unsigned char)+0x338>
         9852c:	e59d0064 	ldr	r0, [sp, #100]	; fField100
         98530:	e5900000 	ldr	r0, [r0]
         98534:	e3300002 	teq	r0, #2	; 0x2
         98538:	1a000002 	bne	98548 <TDocker::SetCurrentStore(unsigned char)+0x32c>
         9853c:	eb6ca6ff 	bl	1bc2140 <$AllocateFrame(void)>
         98540:	e59d1064 	ldr	r1, [sp, #100]	; fField100
         98544:	e5810000 	str	r0, [r1]
         98548:	e1a00006 	mov	r0, r6
         9854c:	e28d1064 	add	r1, sp, #100	; 0x64
         98550:	eb6722ca 	bl	1a61080 <$StoreSetAllInfo>
         98554:	e3380000 	teq	r8, #0	; 0x0
         98558:	13a00000 	movne	r0, #0	; 0x0
         9855c:	15a40050 	strne	r0, [r4, #80]!	; fField80
         98560:	e28dd004 	add	sp, sp, #4	; 0x4
         98564:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         98568:	eb6cab13 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9856c:	e59d002c 	ldr	r0, [sp, #44]	; fField44
         98570:	eb6cab11 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         98574:	e59d0054 	ldr	r0, [sp, #84]	; fField84
         98578:	eb6cab0f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9857c:	e59d0058 	ldr	r0, [sp, #88]	; fField88
         98580:	eb6cab0d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         98584:	e59d005c 	ldr	r0, [sp, #92]	; fField92
         98588:	eb6cab0b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9858c:	e1a00007 	mov	r0, r7
         98590:	eb6cab09 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         98594:	e59d0060 	ldr	r0, [sp, #96]	; fField96
         98598:	eb6cab07 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9859c:	e1a00009 	mov	r0, r9
         985a0:	eb6cab05 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         985a4:	e59d0068 	ldr	r0, [sp, #104]	; fField104
         985a8:	eb6cab03 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         985ac:	e59d006c 	ldr	r0, [sp, #108]	; fField108
         985b0:	eb6cab01 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         985b4:	e1a00005 	mov	r0, r5
         985b8:	eb6caaff 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         985bc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::SetStoreToDefault(void)
 * Address: 000985c0
 */
TDocker::SetStoreToDefault(void) {
    /*
         985c0:	e1a0c00d 	mov	ip, sp
         985c4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         985c8:	e24cb004 	sub	fp, ip, #4	; 0x4
         985cc:	e1a04000 	mov	r4, r0
         985d0:	e24dd008 	sub	sp, sp, #8	; 0x8
         985d4:	e3a00002 	mov	r0, #2	; 0x2
         985d8:	eb6ca6db 	bl	1bc214c <$AllocateRefHandle(long)>
         985dc:	e58d0004 	str	r0, [sp, #4]	; fField4
         985e0:	e28d0004 	add	r0, sp, #4	; 0x4
         985e4:	eb68f53b 	bl	1ad5ad8 <$FDefaultStore>
         985e8:	eb6ca6d7 	bl	1bc214c <$AllocateRefHandle(long)>
         985ec:	e58d0000 	str	r0, [sp]
         985f0:	e1a0100d 	mov	r1, sp
         985f4:	e1a00004 	mov	r0, r4
         985f8:	eb68a6dd 	bl	1ac2174 <TDocker::$ReserveCurrentStore(RefVar const &)>
         985fc:	e59d0000 	ldr	r0, [sp]
         98600:	eb6caaed 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         98604:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         98608:	eb6caaeb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9860c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::WriteDefaultStore(void)
 * Address: 00098610
 */
TDocker::WriteDefaultStore(void) {
    /*
         98610:	e1a0c00d 	mov	ip, sp
         98614:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         98618:	e24cb004 	sub	fp, ip, #4	; 0x4
         9861c:	e1a04000 	mov	r4, r0
         98620:	e24dd00c 	sub	sp, sp, #12	; 0xc
         98624:	e3a00002 	mov	r0, #2	; 0x2
         98628:	eb6ca6c7 	bl	1bc214c <$AllocateRefHandle(long)>
         9862c:	e58d0004 	str	r0, [sp, #4]	; fField4
         98630:	e28d0004 	add	r0, sp, #4	; 0x4
         98634:	eb68f527 	bl	1ad5ad8 <$FDefaultStore>
         98638:	eb6ca6c3 	bl	1bc214c <$AllocateRefHandle(long)>
         9863c:	e58d0000 	str	r0, [sp]
         98640:	e1a0100d 	mov	r1, sp
         98644:	e1a00004 	mov	r0, r4
         98648:	eb687526 	bl	1ab5ae8 <TDocker::$MakeStoreFrame(RefVar const &)>
         9864c:	eb6ca6be 	bl	1bc214c <$AllocateRefHandle(long)>
         98650:	e58d0008 	str	r0, [sp, #8]
         98654:	e59d0000 	ldr	r0, [sp]
         98658:	eb6caad7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9865c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         98660:	eb6caad5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         98664:	e28d2008 	add	r2, sp, #8	; 0x8
         98668:	e1a00004 	mov	r0, r4
         9866c:	e59f100c 	ldr	r1, [pc, #c]	; 98680 <TDocker::WriteDefaultStore(void)+0x70>
         98670:	eb6891ec 	bl	1abce28 <TDocker::$WriteRef(unsigned long, RefVar const &)>
         98674:	e59d0008 	ldr	r0, [sp, #8]
         98678:	eb6caacf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9867c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         98680:	64667374 	strvsbt	r7, [r6], -#884
    */
}

/**
 * Symbol: TDocker::AddChangedSoup(RefVar const &, unsigned long)
 * Address: 00098684
 */
TDocker::AddChangedSoup(RefVar const &, unsigned long) {
    /*
         98684:	e1a0c00d 	mov	ip, sp
         98688:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         9868c:	e24cb004 	sub	fp, ip, #4	; 0x4
         98690:	e1a06000 	mov	r6, r0
         98694:	e1a05001 	mov	r5, r1
         98698:	e1a04002 	mov	r4, r2
         9869c:	e5b01014 	ldr	r1, [r0, #20]!	; fField20
         986a0:	e5911000 	ldr	r1, [r1]
         986a4:	e3310002 	teq	r1, #2	; 0x2
         986a8:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         986ac:	e24dd004 	sub	sp, sp, #4	; 0x4
         986b0:	eb6cbb3b 	bl	1bc73a4 <$SoupGetName(RefVar const &)>
         986b4:	eb6ca6a4 	bl	1bc214c <$AllocateRefHandle(long)>
         986b8:	e40d0004 	str	r0, [sp], -#4	; fField4
         986bc:	e2860040 	add	r0, r6, #64	; 0x40
         986c0:	e1a06000 	mov	r6, r0
         986c4:	e5900000 	ldr	r0, [r0]
         986c8:	e5900000 	ldr	r0, [r0]
         986cc:	e3300002 	teq	r0, #2	; 0x2
         986d0:	1a000005 	bne	986ec <TDocker::AddChangedSoup(RefVar const &, unsigned long)+0x68>
         986d4:	e1a07006 	mov	r7, r6
         986d8:	e59f0048 	ldr	r0, [pc, #48]	; 98728 <TDocker::AddChangedSoup(RefVar const &, unsigned long)+0xa4>	; fField48
         986dc:	e3a01000 	mov	r1, #0	; 0x0
         986e0:	eb6ca694 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
         986e4:	e5971000 	ldr	r1, [r7]
         986e8:	e5810000 	str	r0, [r1]
         986ec:	e1a00104 	mov	r0, r4, lsl #2
         986f0:	eb6ca695 	bl	1bc214c <$AllocateRefHandle(long)>
         986f4:	e58d0000 	str	r0, [sp]
         986f8:	e1a0300d 	mov	r3, sp
         986fc:	e92d0008 	stmdb	sp!, {r3}
         98700:	e1a01006 	mov	r1, r6
         98704:	e1a03005 	mov	r3, r5
         98708:	e28d2008 	add	r2, sp, #8	; 0x8
         9870c:	e59f0018 	ldr	r0, [pc, #18]	; 9872c <TDocker::AddChangedSoup(RefVar const &, unsigned long)+0xa8>
         98710:	eb6d9e45 	bl	1c0002c <$NSCallGlobalFn__FRC6RefVarN41>
         98714:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
         98718:	eb6caaa7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9871c:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
         98720:	eb6caaa5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         98724:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         98728:	00681f10 	rsbeq	r1, r8, r0, lsl pc
         9872c:	00682590 	streqb	r2, [r8], -#80	; fField80
    */
}

/**
 * Symbol: TDocker::SetupSoup(void)
 * Address: 00098730
 */
TDocker::SetupSoup(void) {
    /*
         98730:	e1a0c00d 	mov	ip, sp
         98734:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         98738:	e24cb004 	sub	fp, ip, #4	; 0x4
         9873c:	e1a04000 	mov	r4, r0
         98740:	e280106c 	add	r1, r0, #108	; 0x6c
         98744:	e3a00002 	mov	r0, #2	; 0x2
         98748:	e5911000 	ldr	r1, [r1]
         9874c:	e5810000 	str	r0, [r1]
         98750:	e5941070 	ldr	r1, [r4, #112]	; fField112
         98754:	e3a05000 	mov	r5, #0	; 0x0
         98758:	e5810000 	str	r0, [r1]
         9875c:	e5c4502c 	strb	r5, [r4, #44]	; fField44
         98760:	e5c4502d 	strb	r5, [r4, #45]	; fField45
         98764:	e5c4502e 	strb	r5, [r4, #46]	; fField46
         98768:	e5941028 	ldr	r1, [r4, #40]	; fField40
         9876c:	e5810000 	str	r0, [r1]
         98770:	e2840014 	add	r0, r4, #20	; 0x14
         98774:	e5901000 	ldr	r1, [r0]
         98778:	e5911000 	ldr	r1, [r1]
         9877c:	e3310002 	teq	r1, #2	; 0x2
         98780:	0a000042 	beq	98890 <TDocker::SetupSoup(void)+0x160>
         98784:	e24dd0a4 	sub	sp, sp, #164	; 0xa4
         98788:	eb6cbb05 	bl	1bc73a4 <$SoupGetName(RefVar const &)>
         9878c:	eb6ca66e 	bl	1bc214c <$AllocateRefHandle(long)>
         98790:	e58d0000 	str	r0, [sp]
         98794:	e1a0100d 	mov	r1, sp
         98798:	e28d007c 	add	r0, sp, #124	; 0x7c
         9879c:	eb04509f 	bl	1aca20 <TRichString::__ct(RefVar const &)>
         987a0:	e59d0000 	ldr	r0, [sp]
         987a4:	eb6caa84 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         987a8:	e59f10d4 	ldr	r1, [pc, #d4]	; 98884 <TDocker::SetupSoup(void)+0x154>
         987ac:	e28d0004 	add	r0, sp, #4	; 0x4
         987b0:	eb04509a 	bl	1aca20 <TRichString::__ct(RefVar const &)>
         987b4:	e3a03000 	mov	r3, #0	; 0x0
         987b8:	e92d0008 	stmdb	sp!, {r3}
         987bc:	e3e06000 	mvn	r6, #0	; 0x0
         987c0:	e1a03006 	mov	r3, r6
         987c4:	e1a02005 	mov	r2, r5
         987c8:	e28d1080 	add	r1, sp, #128	; 0x80
         987cc:	e28d0008 	add	r0, sp, #8	; 0x8
         987d0:	eb6c3f1e 	bl	1ba8450 <TRichString::$CompareSubStringCommon( const(TRichString const &, unsigned long, long, unsigned char))>
         987d4:	e28dd004 	add	sp, sp, #4	; 0x4
         987d8:	e3300000 	teq	r0, #0	; 0x0
         987dc:	13a00000 	movne	r0, #0	; 0x0
         987e0:	03a00001 	moveq	r0, #1	; 0x1
         987e4:	e5c4002c 	strb	r0, [r4, #44]	; fField44
         987e8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         987ec:	eb6caa72 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         987f0:	e59f1090 	ldr	r1, [pc, #90]	; 98888 <TDocker::SetupSoup(void)+0x158>
         987f4:	e28d002c 	add	r0, sp, #44	; 0x2c
         987f8:	eb045088 	bl	1aca20 <TRichString::__ct(RefVar const &)>
         987fc:	e3a03000 	mov	r3, #0	; 0x0
         98800:	e92d0008 	stmdb	sp!, {r3}
         98804:	e1a03006 	mov	r3, r6
         98808:	e1a02005 	mov	r2, r5
         9880c:	e28d1080 	add	r1, sp, #128	; 0x80
         98810:	e28d0030 	add	r0, sp, #48	; 0x30
         98814:	eb6c3f0d 	bl	1ba8450 <TRichString::$CompareSubStringCommon( const(TRichString const &, unsigned long, long, unsigned char))>
         98818:	e28dd004 	add	sp, sp, #4	; 0x4
         9881c:	e3300000 	teq	r0, #0	; 0x0
         98820:	13a00000 	movne	r0, #0	; 0x0
         98824:	03a00001 	moveq	r0, #1	; 0x1
         98828:	e5c4002d 	strb	r0, [r4, #45]	; fField45
         9882c:	e59d002c 	ldr	r0, [sp, #44]	; fField44
         98830:	eb6caa61 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         98834:	e59f1050 	ldr	r1, [pc, #50]	; 9888c <TDocker::SetupSoup(void)+0x15c>	; fField50
         98838:	e28d0054 	add	r0, sp, #84	; 0x54
         9883c:	eb045077 	bl	1aca20 <TRichString::__ct(RefVar const &)>
         98840:	e3a03000 	mov	r3, #0	; 0x0
         98844:	e92d0008 	stmdb	sp!, {r3}
         98848:	e1a03006 	mov	r3, r6
         9884c:	e1a02005 	mov	r2, r5
         98850:	e28d1080 	add	r1, sp, #128	; 0x80
         98854:	e28d0058 	add	r0, sp, #88	; 0x58
         98858:	eb6c3efc 	bl	1ba8450 <TRichString::$CompareSubStringCommon( const(TRichString const &, unsigned long, long, unsigned char))>
         9885c:	e28dd004 	add	sp, sp, #4	; 0x4
         98860:	e3300000 	teq	r0, #0	; 0x0
         98864:	13a00000 	movne	r0, #0	; 0x0
         98868:	03a00001 	moveq	r0, #1	; 0x1
         9886c:	e5c4002e 	strb	r0, [r4, #46]	; fField46
         98870:	e59d0054 	ldr	r0, [sp, #84]	; fField84
         98874:	eb6caa50 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         98878:	e59d007c 	ldr	r0, [sp, #124]	; fField124
         9887c:	eb6caa4e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         98880:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         98884:	0067faf0 	streqd	pc, [r7], -#160	; fField160
         98888:	00680998 	streqb	r0, [r8], -#152	; fField152
         9888c:	00681580 	rsbeq	r1, r8, r0, lsl #11
         98890:	e5940050 	ldr	r0, [r4, #80]	; fField80
         98894:	e3300000 	teq	r0, #0	; 0x0
         98898:	03e00000 	mvneq	r0, #0	; 0x0
         9889c:	e5a40050 	str	r0, [r4, #80]!	; fField80
         988a0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::CreateSoup(void)
 * Address: 000988a4
 */
TDocker::CreateSoup(void) {
    /*
         988a4:	e1a0c00d 	mov	ip, sp
         988a8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         988ac:	e24cb004 	sub	fp, ip, #4	; 0x4
         988b0:	e1a04000 	mov	r4, r0
         988b4:	e24dd004 	sub	sp, sp, #4	; 0x4
         988b8:	e1a0100d 	mov	r1, sp
         988bc:	e5900000 	ldr	r0, [r0]
         988c0:	eb6d3281 	bl	1be52cc <CPipe::$__rs(unsigned long &)>
         988c4:	e1a00004 	mov	r0, r4
         988c8:	e59d1000 	ldr	r1, [sp]
         988cc:	eb6819a3 	bl	1a9ef60 <TDocker::$ReadString(unsigned long)>
         988d0:	e1a08000 	mov	r8, r0
         988d4:	e3a00000 	mov	r0, #0	; 0x0
         988d8:	e3a06000 	mov	r6, #0	; 0x0
         988dc:	e52d006c 	str	r0, [sp, -#108]!	; fField108
         988e0:	e28d0008 	add	r0, sp, #8	; 0x8
         988e4:	eb6c6822 	bl	1bb2974 <$setjmp>
         988e8:	e2845014 	add	r5, r4, #20	; 0x14
         988ec:	e3300000 	teq	r0, #0	; 0x0
         988f0:	1a00002e 	bne	989b0 <TDocker::CreateSoup(void)+0x10c>
         988f4:	e1a0000d 	mov	r0, sp
         988f8:	eb6d1ddf 	bl	1be007c <$AddExceptionHandler>
         988fc:	e24dd008 	sub	sp, sp, #8	; 0x8
         98900:	e1a00008 	mov	r0, r8
         98904:	eb6cb272 	bl	1bc52d4 <$MakeString(unsigned short const *)>
         98908:	eb6ca60f 	bl	1bc214c <$AllocateRefHandle(long)>
         9890c:	e2841010 	add	r1, r4, #16	; 0x10
         98910:	e1a07001 	mov	r7, r1
         98914:	e58d0004 	str	r0, [sp, #4]	; fField4
         98918:	e1a00004 	mov	r0, r4
         9891c:	eb687cb3 	bl	1ab7bf0 <TDocker::$ReadRef(RefVar const &)>
         98920:	eb6ca609 	bl	1bc214c <$AllocateRefHandle(long)>
         98924:	e1a09005 	mov	r9, r5
         98928:	e58d0000 	str	r0, [sp]
         9892c:	e1a00007 	mov	r0, r7
         98930:	e28d1004 	add	r1, sp, #4	; 0x4
         98934:	eb6cbaae 	bl	1bc73f4 <$StoreGetSoup>
         98938:	e5991000 	ldr	r1, [r9]
         9893c:	e5810000 	str	r0, [r1]
         98940:	e5950000 	ldr	r0, [r5]
         98944:	e5900000 	ldr	r0, [r0]
         98948:	e3300002 	teq	r0, #2	; 0x2
         9894c:	1a00000e 	bne	9898c <TDocker::CreateSoup(void)+0xe8>
         98950:	e1a09005 	mov	r9, r5
         98954:	e1a00007 	mov	r0, r7
         98958:	e1a0200d 	mov	r2, sp
         9895c:	e28d1004 	add	r1, sp, #4	; 0x4
         98960:	eb6cba9d 	bl	1bc73dc <$StoreCreateSoup>
         98964:	e5991000 	ldr	r1, [r9]
         98968:	e5810000 	str	r0, [r1]
         9896c:	e5950000 	ldr	r0, [r5]
         98970:	e5900000 	ldr	r0, [r0]
         98974:	e3300002 	teq	r0, #2	; 0x2
         98978:	0a000003 	beq	9898c <TDocker::CreateSoup(void)+0xe8>
         9897c:	e59f1028 	ldr	r1, [pc, #28]	; 989ac <TDocker::CreateSoup(void)+0x108>	; fField28
         98980:	e1a00004 	mov	r0, r4
         98984:	e3a02001 	mov	r2, #1	; 0x1
         98988:	eb683ea2 	bl	1aa8418 <TDocker::$AddChangedSoup(RefVar const &, unsigned long)>
         9898c:	e59d0000 	ldr	r0, [sp]
         98990:	eb6caa09 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         98994:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         98998:	eb6caa07 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9899c:	e28dd008 	add	sp, sp, #8	; 0x8
         989a0:	e1a0000d 	mov	r0, sp
         989a4:	eb6d21c3 	bl	1be10b8 <$ExitHandler>
         989a8:	ea000001 	b	989b4 <TDocker::CreateSoup(void)+0x110>
         989ac:	00682388 	rsbeq	r2, r8, r8, lsl #7
         989b0:	e3a06001 	mov	r6, #1	; 0x1
         989b4:	e1a00008 	mov	r0, r8
         989b8:	eb6d21bd 	bl	1be10b4 <$DisposPtr>
         989bc:	e3360000 	teq	r6, #0	; 0x0
         989c0:	11a0000d 	movne	r0, sp
         989c4:	1b6d25e2 	blne	1be2154 <$NextHandler>
         989c8:	e28dd06c 	add	sp, sp, #108	; 0x6c
         989cc:	e5950000 	ldr	r0, [r5]
         989d0:	e5900000 	ldr	r0, [r0]
         989d4:	e3300002 	teq	r0, #2	; 0x2
         989d8:	03a0009a 	moveq	r0, #154	; 0x9a
         989dc:	02400c6e 	subeq	r0, r0, #28160	; 0x6e00
         989e0:	05a40050 	streq	r0, [r4, #80]!	; fField80
         989e4:	0a000004 	beq	989fc <TDocker::CreateSoup(void)+0x158>
         989e8:	e1a00004 	mov	r0, r4
         989ec:	eb6825e2 	bl	1aa217c <TDocker::$SetupSoup(void)>
         989f0:	e5941050 	ldr	r1, [r4, #80]	; fField80
         989f4:	e1a00004 	mov	r0, r4
         989f8:	eb68910b 	bl	1abce2c <TDocker::$WriteResult(long)>
         989fc:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::CreateSoupFromSoupDef(void)
 * Address: 00098a00
 */
TDocker::CreateSoupFromSoupDef(void) {
    /*
         98a00:	e1a0c00d 	mov	ip, sp
         98a04:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         98a08:	e24cb004 	sub	fp, ip, #4	; 0x4
         98a0c:	e1a04000 	mov	r4, r0
         98a10:	e5901048 	ldr	r1, [r0, #72]	; fField72
         98a14:	eb681951 	bl	1a9ef60 <TDocker::$ReadString(unsigned long)>
         98a18:	e1a06000 	mov	r6, r0
         98a1c:	e3a07000 	mov	r7, #0	; 0x0
         98a20:	e52d706c 	str	r7, [sp, -#108]!	; fField108
         98a24:	e28d0008 	add	r0, sp, #8	; 0x8
         98a28:	eb6c67d1 	bl	1bb2974 <$setjmp>
         98a2c:	e2845014 	add	r5, r4, #20	; 0x14
         98a30:	e3300000 	teq	r0, #0	; 0x0
         98a34:	1a000038 	bne	98b1c <TDocker::CreateSoupFromSoupDef(void)+0x11c>
         98a38:	e1a0000d 	mov	r0, sp
         98a3c:	eb6d1d8e 	bl	1be007c <$AddExceptionHandler>
         98a40:	e52d706c 	str	r7, [sp, -#108]!	; fField108
         98a44:	e3a07000 	mov	r7, #0	; 0x0
         98a48:	e28d0008 	add	r0, sp, #8	; 0x8
         98a4c:	eb6c67c8 	bl	1bb2974 <$setjmp>
         98a50:	e3300000 	teq	r0, #0	; 0x0
         98a54:	1a000028 	bne	98afc <TDocker::CreateSoupFromSoupDef(void)+0xfc>
         98a58:	e1a0000d 	mov	r0, sp
         98a5c:	eb6d1d86 	bl	1be007c <$AddExceptionHandler>
         98a60:	e24dd004 	sub	sp, sp, #4	; 0x4
         98a64:	e1a00006 	mov	r0, r6
         98a68:	eb6cb219 	bl	1bc52d4 <$MakeString(unsigned short const *)>
         98a6c:	eb6ca5b6 	bl	1bc214c <$AllocateRefHandle(long)>
         98a70:	e1a09005 	mov	r9, r5
         98a74:	e58d0000 	str	r0, [sp]
         98a78:	e2840010 	add	r0, r4, #16	; 0x10
         98a7c:	e1a08000 	mov	r8, r0
         98a80:	e1a0100d 	mov	r1, sp
         98a84:	eb6cba5a 	bl	1bc73f4 <$StoreGetSoup>
         98a88:	e5991000 	ldr	r1, [r9]
         98a8c:	e5810000 	str	r0, [r1]
         98a90:	e5950000 	ldr	r0, [r5]
         98a94:	e5900000 	ldr	r0, [r0]
         98a98:	e3300002 	teq	r0, #2	; 0x2
         98a9c:	1a00000e 	bne	98adc <TDocker::CreateSoupFromSoupDef(void)+0xdc>
         98aa0:	e1a09005 	mov	r9, r5
         98aa4:	e1a02008 	mov	r2, r8
         98aa8:	e1a0100d 	mov	r1, sp
         98aac:	e59f0040 	ldr	r0, [pc, #40]	; 98af4 <TDocker::CreateSoupFromSoupDef(void)+0xf4>	; fField40
         98ab0:	eb6d9d5b 	bl	1c00024 <$NSCallGlobalFn__FRC6RefVarN21>
         98ab4:	e5991000 	ldr	r1, [r9]
         98ab8:	e5810000 	str	r0, [r1]
         98abc:	e5950000 	ldr	r0, [r5]
         98ac0:	e5900000 	ldr	r0, [r0]
         98ac4:	e3300002 	teq	r0, #2	; 0x2
         98ac8:	0a000003 	beq	98adc <TDocker::CreateSoupFromSoupDef(void)+0xdc>
         98acc:	e59f1024 	ldr	r1, [pc, #24]	; 98af8 <TDocker::CreateSoupFromSoupDef(void)+0xf8>	; fField24
         98ad0:	e1a00004 	mov	r0, r4
         98ad4:	e3a02001 	mov	r2, #1	; 0x1
         98ad8:	eb683e4e 	bl	1aa8418 <TDocker::$AddChangedSoup(RefVar const &, unsigned long)>
         98adc:	e59d0000 	ldr	r0, [sp]
         98ae0:	eb6ca9b5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         98ae4:	e28dd004 	add	sp, sp, #4	; 0x4
         98ae8:	e1a0000d 	mov	r0, sp
         98aec:	eb6d2171 	bl	1be10b8 <$ExitHandler>
         98af0:	ea000002 	b	98b00 <TDocker::CreateSoupFromSoupDef(void)+0x100>
         98af4:	006826a8 	rsbeq	r2, r8, r8, lsr #13
         98af8:	00682388 	rsbeq	r2, r8, r8, lsl #7
         98afc:	e3a07001 	mov	r7, #1	; 0x1
         98b00:	e1a00006 	mov	r0, r6
         98b04:	eb6d216a 	bl	1be10b4 <$DisposPtr>
         98b08:	e3370000 	teq	r7, #0	; 0x0
         98b0c:	11a0000d 	movne	r0, sp
         98b10:	1b6d258f 	blne	1be2154 <$NextHandler>
         98b14:	e28dd06c 	add	sp, sp, #108	; 0x6c
         98b18:	ea000006 	b	98b38 <TDocker::CreateSoupFromSoupDef(void)+0x138>
         98b1c:	e59d0060 	ldr	r0, [sp, #96]	; fField96
         98b20:	e59f104c 	ldr	r1, [pc, #4c]	; 98b74 <TDocker::CreateSoupFromSoupDef(void)+0x174>	; fField4
         98b24:	e5911000 	ldr	r1, [r1]
         98b28:	eb6d2999 	bl	1be3194 <$Subexception>
         98b2c:	e3300000 	teq	r0, #0	; 0x0
         98b30:	01a0000d 	moveq	r0, sp
         98b34:	0b6d2586 	bleq	1be2154 <$NextHandler>
         98b38:	e1a0000d 	mov	r0, sp
         98b3c:	eb6d215d 	bl	1be10b8 <$ExitHandler>
         98b40:	e28dd06c 	add	sp, sp, #108	; 0x6c
         98b44:	e5950000 	ldr	r0, [r5]
         98b48:	e5900000 	ldr	r0, [r0]
         98b4c:	e3300002 	teq	r0, #2	; 0x2
         98b50:	e1a00004 	mov	r0, r4
         98b54:	03a01091 	moveq	r1, #145	; 0x91
         98b58:	02411c6e 	subeq	r1, r1, #28160	; 0x6e00
         98b5c:	0a000002 	beq	98b6c <TDocker::CreateSoupFromSoupDef(void)+0x16c>
         98b60:	eb682585 	bl	1aa217c <TDocker::$SetupSoup(void)>
         98b64:	e5941050 	ldr	r1, [r4, #80]	; fField80
         98b68:	e1a00004 	mov	r0, r4
         98b6c:	eb6890ae 	bl	1abce2c <TDocker::$WriteResult(long)>
         98b70:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         98b74:	003712d8 	ldreqsb	r1, [r7], -r8
    */
}

/**
 * Symbol: TDocker::ReadCurrentSoup(void)
 * Address: 00098b78
 */
TDocker::ReadCurrentSoup(void) {
    /*
         98b78:	e1a0c00d 	mov	ip, sp
         98b7c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         98b80:	e24cb004 	sub	fp, ip, #4	; 0x4
         98b84:	e1a04000 	mov	r4, r0
         98b88:	e5901048 	ldr	r1, [r0, #72]	; fField72
         98b8c:	eb6818f3 	bl	1a9ef60 <TDocker::$ReadString(unsigned long)>
         98b90:	e1a07000 	mov	r7, r0
         98b94:	e3a09000 	mov	r9, #0	; 0x0
         98b98:	e3a06000 	mov	r6, #0	; 0x0
         98b9c:	e52d906c 	str	r9, [sp, -#108]!	; fField108
         98ba0:	e28d0008 	add	r0, sp, #8	; 0x8
         98ba4:	eb6c6772 	bl	1bb2974 <$setjmp>
         98ba8:	e2845014 	add	r5, r4, #20	; 0x14
         98bac:	e3300000 	teq	r0, #0	; 0x0
         98bb0:	1a00001f 	bne	98c34 <TDocker::ReadCurrentSoup(void)+0xbc>
         98bb4:	e1a0000d 	mov	r0, sp
         98bb8:	eb6d1d2f 	bl	1be007c <$AddExceptionHandler>
         98bbc:	e2840010 	add	r0, r4, #16	; 0x10
         98bc0:	e1a08000 	mov	r8, r0
         98bc4:	e5900000 	ldr	r0, [r0]
         98bc8:	e5900000 	ldr	r0, [r0]
         98bcc:	e3300002 	teq	r0, #2	; 0x2
         98bd0:	1a000005 	bne	98bec <TDocker::ReadCurrentSoup(void)+0x74>
         98bd4:	e59f0054 	ldr	r0, [pc, #54]	; 98c30 <TDocker::ReadCurrentSoup(void)+0xb8>
         98bd8:	e5900000 	ldr	r0, [r0]
         98bdc:	e3a02000 	mov	r2, #0	; 0x0
         98be0:	e3a01091 	mov	r1, #145	; 0x91
         98be4:	e2411c6e 	sub	r1, r1, #28160	; 0x6e00
         98be8:	eb6d296b 	bl	1be319c <$Throw>
         98bec:	e24dd004 	sub	sp, sp, #4	; 0x4
         98bf0:	e1a00007 	mov	r0, r7
         98bf4:	eb6cb1b6 	bl	1bc52d4 <$MakeString(unsigned short const *)>
         98bf8:	eb6ca553 	bl	1bc214c <$AllocateRefHandle(long)>
         98bfc:	e1a0a005 	mov	sl, r5
         98c00:	e58d0000 	str	r0, [sp]
         98c04:	e1a00008 	mov	r0, r8
         98c08:	e1a0100d 	mov	r1, sp
         98c0c:	eb6cb9f8 	bl	1bc73f4 <$StoreGetSoup>
         98c10:	e59a1000 	ldr	r1, [sl]
         98c14:	e5810000 	str	r0, [r1]
         98c18:	e59d0000 	ldr	r0, [sp]
         98c1c:	eb6ca966 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         98c20:	e28dd004 	add	sp, sp, #4	; 0x4
         98c24:	e1a0000d 	mov	r0, sp
         98c28:	eb6d2122 	bl	1be10b8 <$ExitHandler>
         98c2c:	ea000001 	b	98c38 <TDocker::ReadCurrentSoup(void)+0xc0>
         98c30:	003712d0 	ldreqsb	r1, [r7], -r0
         98c34:	e3a06001 	mov	r6, #1	; 0x1
         98c38:	e1a00007 	mov	r0, r7
         98c3c:	eb6d211c 	bl	1be10b4 <$DisposPtr>
         98c40:	e3360000 	teq	r6, #0	; 0x0
         98c44:	11a0000d 	movne	r0, sp
         98c48:	1b6d2541 	blne	1be2154 <$NextHandler>
         98c4c:	e28dd06c 	add	sp, sp, #108	; 0x6c
         98c50:	e5950000 	ldr	r0, [r5]
         98c54:	e5900000 	ldr	r0, [r0]
         98c58:	e3300002 	teq	r0, #2	; 0x2
         98c5c:	1a000004 	bne	98c74 <TDocker::ReadCurrentSoup(void)+0xfc>
         98c60:	e1a00004 	mov	r0, r4
         98c64:	e3a01091 	mov	r1, #145	; 0x91
         98c68:	e2411c6e 	sub	r1, r1, #28160	; 0x6e00
         98c6c:	eb68906e 	bl	1abce2c <TDocker::$WriteResult(long)>
         98c70:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         98c74:	e1a00005 	mov	r0, r5
         98c78:	e59f1080 	ldr	r1, [pc, #80]	; 98d00 <TDocker::ReadCurrentSoup(void)+0x188>	; fField80
         98c7c:	eb6cb9c7 	bl	1bc73a0 <$SoupGetInfo__FRC6RefVarT1>
         98c80:	eb6ca531 	bl	1bc214c <$AllocateRefHandle(long)>
         98c84:	e1a06000 	mov	r6, r0
         98c88:	e5900000 	ldr	r0, [r0]
         98c8c:	e3300002 	teq	r0, #2	; 0x2
         98c90:	0a000012 	beq	98ce0 <TDocker::ReadCurrentSoup(void)+0x168>
         98c94:	e59f1068 	ldr	r1, [pc, #68]	; 98d04 <TDocker::ReadCurrentSoup(void)+0x18c>	; fField68
         98c98:	e5911000 	ldr	r1, [r1]
         98c9c:	e5911000 	ldr	r1, [r1]
         98ca0:	eb6cad6e 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         98ca4:	e5860000 	str	r0, [r6]
         98ca8:	e3300002 	teq	r0, #2	; 0x2
         98cac:	0a00000b 	beq	98ce0 <TDocker::ReadCurrentSoup(void)+0x168>
         98cb0:	e59f1050 	ldr	r1, [pc, #50]	; 98d08 <TDocker::ReadCurrentSoup(void)+0x190>	; fField50
         98cb4:	e5911000 	ldr	r1, [r1]
         98cb8:	e5911000 	ldr	r1, [r1]
         98cbc:	eb6cad5b 	bl	1bc4230 <$EQRef__FlT1>
         98cc0:	e3300000 	teq	r0, #0	; 0x0
         98cc4:	0a000005 	beq	98ce0 <TDocker::ReadCurrentSoup(void)+0x168>
         98cc8:	e5950000 	ldr	r0, [r5]
         98ccc:	e5809000 	str	r9, [r0]
         98cd0:	e1a00004 	mov	r0, r4
         98cd4:	e3a0109a 	mov	r1, #154	; 0x9a
         98cd8:	e2411c6e 	sub	r1, r1, #28160	; 0x6e00
         98cdc:	eb689052 	bl	1abce2c <TDocker::$WriteResult(long)>
         98ce0:	e5950000 	ldr	r0, [r5]
         98ce4:	e5900000 	ldr	r0, [r0]
         98ce8:	e3300002 	teq	r0, #2	; 0x2
         98cec:	11a00004 	movne	r0, r4
         98cf0:	1b682521 	blne	1aa217c <TDocker::$SetupSoup(void)>
         98cf4:	e1a00006 	mov	r0, r6
         98cf8:	eb6ca92f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         98cfc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         98d00:	00684748 	rsbeq	r4, r8, r8, asr #14
         98d04:	00683c10 	rsbeq	r3, r8, r0, lsl ip
         98d08:	006849e0 	rsbeq	r4, r8, r0, ror #19
    */
}

/**
 * Symbol: TDocker::SetCurrentSoup(unsigned char)
 * Address: 00098d0c
 */
TDocker::SetCurrentSoup(unsigned char) {
    /*
         98d0c:	e1a0c00d 	mov	ip, sp
         98d10:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         98d14:	e24cb004 	sub	fp, ip, #4	; 0x4
         98d18:	e1a04000 	mov	r4, r0
         98d1c:	e20150ff 	and	r5, r1, #255	; 0xff
         98d20:	eb687ba9 	bl	1ab7bcc <TDocker::$ReadCurrentSoup(void)>
         98d24:	e5940014 	ldr	r0, [r4, #20]	; fField20
         98d28:	e5900000 	ldr	r0, [r0]
         98d2c:	e3300002 	teq	r0, #2	; 0x2
         98d30:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         98d34:	e3350000 	teq	r5, #0	; 0x0
         98d38:	05941050 	ldreq	r1, [r4, #80]	; fField80
         98d3c:	e1a00004 	mov	r0, r4
         98d40:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
         98d44:	0a689038 	beq	1abce2c <TDocker::$WriteResult(long)>
         98d48:	13a01001 	movne	r1, #1	; 0x1
         98d4c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         98d50:	1a689037 	bne	1abce34 <TDocker::$WriteSoupInfo(unsigned char)>
    */
}

/**
 * Symbol: TDocker::ShouldBackupEntry(RefVar const &)
 * Address: 00098d54
 */
TDocker::ShouldBackupEntry(RefVar const &) {
    /*
         98d54:	e1a0c00d 	mov	ip, sp
         98d58:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         98d5c:	e24cb004 	sub	fp, ip, #4	; 0x4
         98d60:	e1a02001 	mov	r2, r1
         98d64:	e5d0002d 	ldrb	r0, [r0, #45]	; fField45
         98d68:	e3300000 	teq	r0, #0	; 0x0
         98d6c:	03a00001 	moveq	r0, #1	; 0x1
         98d70:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         98d74:	e59f0044 	ldr	r0, [pc, #44]	; 98dc0 <TDocker::ShouldBackupEntry(RefVar const &)+0x6c>	; fField44
         98d78:	e5900000 	ldr	r0, [r0]
         98d7c:	e5901000 	ldr	r1, [r0]
         98d80:	e5920000 	ldr	r0, [r2]
         98d84:	e5900000 	ldr	r0, [r0]
         98d88:	eb6cad34 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         98d8c:	eb6ca4ee 	bl	1bc214c <$AllocateRefHandle(long)>
         98d90:	e1a04000 	mov	r4, r0
         98d94:	e5900000 	ldr	r0, [r0]
         98d98:	e3300002 	teq	r0, #2	; 0x2
         98d9c:	0a000005 	beq	98db8 <TDocker::ShouldBackupEntry(RefVar const &)+0x64>
         98da0:	e59f101c 	ldr	r1, [pc, #1c]	; 98dc4 <TDocker::ShouldBackupEntry(RefVar const &)+0x70>
         98da4:	e5911000 	ldr	r1, [r1]
         98da8:	e5911000 	ldr	r1, [r1]
         98dac:	eb6cad1f 	bl	1bc4230 <$EQRef__FlT1>
         98db0:	e3300000 	teq	r0, #0	; 0x0
         98db4:	1a000003 	bne	98dc8 <TDocker::ShouldBackupEntry(RefVar const &)+0x74>
         98db8:	e3a00001 	mov	r0, #1	; 0x1
         98dbc:	ea000002 	b	98dcc <TDocker::ShouldBackupEntry(RefVar const &)+0x78>
         98dc0:	00681f98 	streqb	r1, [r8], -#248
         98dc4:	00682a50 	rsbeq	r2, r8, r0, asr sl
         98dc8:	e3a00000 	mov	r0, #0	; 0x0
         98dcc:	e20050ff 	and	r5, r0, #255	; 0xff
         98dd0:	e1a00004 	mov	r0, r4
         98dd4:	eb6ca8f8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         98dd8:	e1a00005 	mov	r0, r5
         98ddc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::GetSoupIDCount(RefVar const &)
 * Address: 00098e98
 */
TDocker::GetSoupIDCount(RefVar const &) {
    /*
         98e98:	e1a0c00d 	mov	ip, sp
         98e9c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         98ea0:	e24cb004 	sub	fp, ip, #4	; 0x4
         98ea4:	e1a05000 	mov	r5, r0
         98ea8:	e1a04001 	mov	r4, r1
         98eac:	e5d0002d 	ldrb	r0, [r0, #45]	; fField45
         98eb0:	e3300000 	teq	r0, #0	; 0x0
         98eb4:	0a000019 	beq	98f20 <TDocker::GetSoupIDCount(RefVar const &)+0x88>
         98eb8:	e24dd004 	sub	sp, sp, #4	; 0x4
         98ebc:	e3a06000 	mov	r6, #0	; 0x0
         98ec0:	e1a00004 	mov	r0, r4
         98ec4:	eb6ca8b0 	bl	1bc318c <$CursorEntry(RefVar const &)>
         98ec8:	eb6ca49f 	bl	1bc214c <$AllocateRefHandle(long)>
         98ecc:	e58d0000 	str	r0, [sp]
         98ed0:	e5900000 	ldr	r0, [r0]
         98ed4:	e3300002 	teq	r0, #2	; 0x2
         98ed8:	0a00000a 	beq	98f08 <TDocker::GetSoupIDCount(RefVar const &)+0x70>
         98edc:	e1a0100d 	mov	r1, sp
         98ee0:	e1a00005 	mov	r0, r5
         98ee4:	eb688791 	bl	1abad30 <TDocker::$ShouldBackupEntry(RefVar const &)>
         98ee8:	e3300000 	teq	r0, #0	; 0x0
         98eec:	12866001 	addne	r6, r6, #1	; 0x1
         98ef0:	e1a00004 	mov	r0, r4
         98ef4:	eb6ca8a8 	bl	1bc319c <$CursorNext(RefVar const &)>
         98ef8:	e59d1000 	ldr	r1, [sp]
         98efc:	e5810000 	str	r0, [r1]
         98f00:	e3300002 	teq	r0, #2	; 0x2
         98f04:	1afffff4 	bne	98edc <TDocker::GetSoupIDCount(RefVar const &)+0x44>
         98f08:	e1a00004 	mov	r0, r4
         98f0c:	eb6ca8a4 	bl	1bc31a4 <$CursorReset(RefVar const &)>
         98f10:	e59d0000 	ldr	r0, [sp]
         98f14:	eb6ca8a8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         98f18:	e1a00006 	mov	r0, r6
         98f1c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         98f20:	e1a00004 	mov	r0, r4
         98f24:	eb08deb2 	bl	2d09f4 <CursorCountEntries>
         98f28:	e3100003 	tst	r0, #3	; 0x3
         98f2c:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
         98f30:	1a6ca479 	bne	1bc211c <$_RINTError(long)>
         98f34:	01a00140 	moveq	r0, r0, asr #2
         98f38:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::ValidateQuery(void)
 * Address: 00098f3c
 */
TDocker::ValidateQuery(void) {
    /*
         98f3c:	e1a0c00d 	mov	ip, sp
         98f40:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         98f44:	e24cb004 	sub	fp, ip, #4	; 0x4
         98f48:	e1a04000 	mov	r4, r0
         98f4c:	e24dd004 	sub	sp, sp, #4	; 0x4
         98f50:	e2800028 	add	r0, r0, #40	; 0x28
         98f54:	e1a05000 	mov	r5, r0
         98f58:	e5900000 	ldr	r0, [r0]
         98f5c:	e5900000 	ldr	r0, [r0]
         98f60:	e3300002 	teq	r0, #2	; 0x2
         98f64:	1a000009 	bne	98f90 <TDocker::ValidateQuery(void)+0x54>
         98f68:	e3a00002 	mov	r0, #2	; 0x2
         98f6c:	eb6ca476 	bl	1bc214c <$AllocateRefHandle(long)>
         98f70:	e58d0000 	str	r0, [sp]
         98f74:	e1a0100d 	mov	r1, sp
         98f78:	e2840014 	add	r0, r4, #20	; 0x14
         98f7c:	eb0a9a0a 	bl	33f7ac <SoupQuery__FRC6RefVarT1>
         98f80:	e5951000 	ldr	r1, [r5]
         98f84:	e5810000 	str	r0, [r1]
         98f88:	e59d0000 	ldr	r0, [sp]
         98f8c:	eb6ca88a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         98f90:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::CheckCancel(unsigned long &)
 * Address: 00098f94
 */
TDocker::CheckCancel(unsigned long &) {
    /*
         98f94:	e1a0c00d 	mov	ip, sp
         98f98:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         98f9c:	e24cb004 	sub	fp, ip, #4	; 0x4
         98fa0:	e1a04000 	mov	r4, r0
         98fa4:	e1a05001 	mov	r5, r1
         98fa8:	eb6d665c 	bl	1bf2920 <$Ticks(void)>
         98fac:	e5951000 	ldr	r1, [r5]
         98fb0:	e281105a 	add	r1, r1, #90	; 0x5a
         98fb4:	e1510000 	cmp	r1, r0
         98fb8:	991ba830 	ldmlsdb	fp, {r4, r5, fp, sp, pc}
         98fbc:	e5850000 	str	r0, [r5]
         98fc0:	e1a00004 	mov	r0, r4
         98fc4:	e3a01001 	mov	r1, #1	; 0x1
         98fc8:	eb684137 	bl	1aa94ac <TDocker::$BytesAvailable(unsigned char)>
         98fcc:	e3500000 	cmp	r0, #0	; 0x0
         98fd0:	991ba830 	ldmlsdb	fp, {r4, r5, fp, sp, pc}
         98fd4:	e2842048 	add	r2, r4, #72	; 0x48
         98fd8:	e2841044 	add	r1, r4, #68	; 0x44
         98fdc:	e1a00004 	mov	r0, r4
         98fe0:	eb687afc 	bl	1ab7bd8 <TEzPipeProtocol::$ReadDockerHeader(unsigned long &, unsigned long &)>
         98fe4:	e5940044 	ldr	r0, [r4, #68]	; fField68
         98fe8:	e59fc044 	ldr	ip, [pc, #44]	; 99034 <TDocker::CheckCancel(unsigned long &)+0xa0>	; fField44
         98fec:	e130000c 	teq	r0, ip
         98ff0:	11a00004 	movne	r0, r4
         98ff4:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         98ff8:	1a67ee94 	bne	1a94a50 <TDocker::$FlushCommand(void)>
         98ffc:	e24dd008 	sub	sp, sp, #8	; 0x8
         99000:	e3a00000 	mov	r0, #0	; 0x0
         99004:	e5cd0004 	strb	r0, [sp, #4]	; fField4
         99008:	e5cd0000 	strb	r0, [sp]
         9900c:	e1a0200d 	mov	r2, sp
         99010:	e28d1004 	add	r1, sp, #4	; 0x4
         99014:	e1a00004 	mov	r0, r4
         99018:	eb687ae3 	bl	1ab7bac <TDocker::$ProcessCommand(unsigned char &, unsigned char &)>
         9901c:	e59f0014 	ldr	r0, [pc, #14]	; 99038 <TDocker::CheckCancel(unsigned long &)+0xa4>
         99020:	e5900000 	ldr	r0, [r0]
         99024:	e3a02000 	mov	r2, #0	; 0x0
         99028:	e59f100c 	ldr	r1, [pc, #c]	; 9903c <TDocker::CheckCancel(unsigned long &)+0xa8>
         9902c:	eb6d285a 	bl	1be319c <$Throw>
         99030:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         99034:	6f706361 	swivs	0x00706361
         99038:	003712d0 	ldreqsb	r1, [r7], -r0
         9903c:	ffff9293 	swinv	0x00ff9293
    */
}

/**
 * Symbol: TDocker::GetBackupCursor(void)
 * Address: 00099040
 */
TDocker::GetBackupCursor(void) {
    /*
         99040:	e1a0c00d 	mov	ip, sp
         99044:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         99048:	e24cb004 	sub	fp, ip, #4	; 0x4
         9904c:	e1a04000 	mov	r4, r0
         99050:	e3a00002 	mov	r0, #2	; 0x2
         99054:	eb6ca43c 	bl	1bc214c <$AllocateRefHandle(long)>
         99058:	e1a05000 	mov	r5, r0
         9905c:	e5940014 	ldr	r0, [r4, #20]	; fField20
         99060:	e5900000 	ldr	r0, [r0]
         99064:	e3300002 	teq	r0, #2	; 0x2
         99068:	1a000007 	bne	9908c <TDocker::GetBackupCursor(void)+0x4c>
         9906c:	e59f0014 	ldr	r0, [pc, #14]	; 99088 <TDocker::GetBackupCursor(void)+0x48>
         99070:	e5900000 	ldr	r0, [r0]
         99074:	e3a02000 	mov	r2, #0	; 0x0
         99078:	e3a0109a 	mov	r1, #154	; 0x9a
         9907c:	e2411c6e 	sub	r1, r1, #28160	; 0x6e00
         99080:	eb6d2845 	bl	1be319c <$Throw>
         99084:	ea000010 	b	990cc <TDocker::GetBackupCursor(void)+0x8c>
         99088:	003712d0 	ldreqsb	r1, [r7], -r0
         9908c:	e5d4002e 	ldrb	r0, [r4, #46]	; fField46
         99090:	e3300000 	teq	r0, #0	; 0x0
         99094:	0a000004 	beq	990ac <TDocker::GetBackupCursor(void)+0x6c>
         99098:	e2841010 	add	r1, r4, #16	; 0x10
         9909c:	e59f0004 	ldr	r0, [pc, #4]	; 990a8 <TDocker::GetBackupCursor(void)+0x68>	; fField4
         990a0:	eb6d9bde 	bl	1c00020 <$NSCallGlobalFn__FRC6RefVarT1>
         990a4:	ea000007 	b	990c8 <TDocker::GetBackupCursor(void)+0x88>
         990a8:	00682f60 	rsbeq	r2, r8, r0, ror #30
         990ac:	e1a00004 	mov	r0, r4
         990b0:	eb688b42 	bl	1abbdc0 <TDocker::$ValidateQuery(void)>
         990b4:	e2840028 	add	r0, r4, #40	; 0x28
         990b8:	e1a04000 	mov	r4, r0
         990bc:	eb6ca838 	bl	1bc31a4 <$CursorReset(RefVar const &)>
         990c0:	e5940000 	ldr	r0, [r4]
         990c4:	e5900000 	ldr	r0, [r0]
         990c8:	e5850000 	str	r0, [r5]
         990cc:	e5954000 	ldr	r4, [r5]
         990d0:	e1a00005 	mov	r0, r5
         990d4:	eb6ca838 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         990d8:	e1a00004 	mov	r0, r4
         990dc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::SendSoup(void)
 * Address: 000990e0
 */
TDocker::SendSoup(void) {
    /*
         990e0:	e1a0c00d 	mov	ip, sp
         990e4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         990e8:	e24cb004 	sub	fp, ip, #4	; 0x4
         990ec:	e1a04000 	mov	r4, r0
         990f0:	e24dd004 	sub	sp, sp, #4	; 0x4
         990f4:	eb689ff4 	bl	1ac10cc <TDocker::$GetBackupCursor(void)>
         990f8:	eb6ca413 	bl	1bc214c <$AllocateRefHandle(long)>
         990fc:	e58d0000 	str	r0, [sp]
         99100:	e5900000 	ldr	r0, [r0]
         99104:	e3300002 	teq	r0, #2	; 0x2
         99108:	0a000020 	beq	99190 <TDocker::SendSoup(void)+0xb0>
         9910c:	e24dd008 	sub	sp, sp, #8	; 0x8
         99110:	e28d0008 	add	r0, sp, #8	; 0x8
         99114:	eb6ca81c 	bl	1bc318c <$CursorEntry(RefVar const &)>
         99118:	eb6ca40b 	bl	1bc214c <$AllocateRefHandle(long)>
         9911c:	e58d0004 	str	r0, [sp, #4]	; fField4
         99120:	e3a00000 	mov	r0, #0	; 0x0
         99124:	e58d0000 	str	r0, [sp]
         99128:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         9912c:	e5900000 	ldr	r0, [r0]
         99130:	e3300002 	teq	r0, #2	; 0x2
         99134:	0a000012 	beq	99184 <TDocker::SendSoup(void)+0xa4>
         99138:	e59f5074 	ldr	r5, [pc, #74]	; 991b4 <TDocker::SendSoup(void)+0xd4>
         9913c:	e1a0100d 	mov	r1, sp
         99140:	e1a00004 	mov	r0, r4
         99144:	eb684504 	bl	1aaa55c <TDocker::$CheckCancel(unsigned long &)>
         99148:	e28d1004 	add	r1, sp, #4	; 0x4
         9914c:	e1a00004 	mov	r0, r4
         99150:	eb6886f6 	bl	1abad30 <TDocker::$ShouldBackupEntry(RefVar const &)>
         99154:	e3300000 	teq	r0, #0	; 0x0
         99158:	0a000003 	beq	9916c <TDocker::SendSoup(void)+0x8c>
         9915c:	e28d2004 	add	r2, sp, #4	; 0x4
         99160:	e1a00004 	mov	r0, r4
         99164:	e1a01005 	mov	r1, r5
         99168:	eb688f27 	bl	1abce0c <TDocker::$WriteEntry(unsigned long, RefVar const &)>
         9916c:	e28d0008 	add	r0, sp, #8	; 0x8
         99170:	eb6ca809 	bl	1bc319c <$CursorNext(RefVar const &)>
         99174:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         99178:	e5810000 	str	r0, [r1]
         9917c:	e3300002 	teq	r0, #2	; 0x2
         99180:	1affffed 	bne	9913c <TDocker::SendSoup(void)+0x5c>
         99184:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         99188:	eb6ca80b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9918c:	e28dd008 	add	sp, sp, #8	; 0x8
         99190:	e1a00004 	mov	r0, r4
         99194:	e3a02001 	mov	r2, #1	; 0x1
         99198:	e59f1018 	ldr	r1, [pc, #18]	; 991b8 <TDocker::SendSoup(void)+0xd8>
         9919c:	eb688f19 	bl	1abce08 <TEzPipeProtocol::$WriteDockerHeader(unsigned long, unsigned char)>
         991a0:	e1a00004 	mov	r0, r4
         991a4:	eb689772 	bl	1abef74 <TDocker::$ClearSoupDirty(void)>
         991a8:	e59d0000 	ldr	r0, [sp]
         991ac:	eb6ca802 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         991b0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         991b4:	656e7472 	strvsb	r7, [lr, -#1138]!
         991b8:	6273646e 	rsbvss	r6, r3, #1845493760	; 0x6e000000
    */
}

/**
 * Symbol: TDocker::FinishSequence(short &, short)
 * Address: 000991bc
 */
TDocker::FinishSequence(short &, short) {
    /*
         991bc:	e1a0c00d 	mov	ip, sp
         991c0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         991c4:	e24cb004 	sub	fp, ip, #4	; 0x4
         991c8:	e1a05000 	mov	r5, r0
         991cc:	e1a04001 	mov	r4, r1
         991d0:	e1a06802 	mov	r6, r2, lsl #16
         991d4:	e1a06846 	mov	r6, r6, asr #16
         991d8:	e5910000 	ldr	r0, [r1]
         991dc:	e1a00840 	mov	r0, r0, asr #16
         991e0:	e3500000 	cmp	r0, #0	; 0x0
         991e4:	da000007 	ble	99208 <TDocker::FinishSequence(short &, short)+0x4c>
         991e8:	e2600000 	rsb	r0, r0, #0	; 0x0
         991ec:	e1a01800 	mov	r1, r0, lsl #16
         991f0:	e1a01841 	mov	r1, r1, asr #16
         991f4:	e5950000 	ldr	r0, [r5]
         991f8:	eb6d3029 	bl	1be52a4 <CPipe::$__ls(short)>
         991fc:	e3a00000 	mov	r0, #0	; 0x0
         99200:	e5c40001 	strb	r0, [r4, #1]
         99204:	e5c40000 	strb	r0, [r4]
         99208:	e1a01006 	mov	r1, r6
         9920c:	e5950000 	ldr	r0, [r5]
         99210:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         99214:	ea6d3022 	b	1be52a4 <CPipe::$__ls(short)>
    */
}

/**
 * Symbol: TDocker::SoupChangedSinceLastBackup(void)
 * Address: 00099218
 */
TDocker::SoupChangedSinceLastBackup(void) {
    /*
         99218:	e1a0c00d 	mov	ip, sp
         9921c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         99220:	e24cb004 	sub	fp, ip, #4	; 0x4
         99224:	e1a04000 	mov	r4, r0
         99228:	e3a06001 	mov	r6, #1	; 0x1
         9922c:	e2800014 	add	r0, r0, #20	; 0x14
         99230:	e1a07000 	mov	r7, r0
         99234:	e5900000 	ldr	r0, [r0]
         99238:	e5900000 	ldr	r0, [r0]
         9923c:	e3300002 	teq	r0, #2	; 0x2
         99240:	1a000007 	bne	99264 <TDocker::SoupChangedSinceLastBackup(void)+0x4c>
         99244:	e59f0014 	ldr	r0, [pc, #14]	; 99260 <TDocker::SoupChangedSinceLastBackup(void)+0x48>
         99248:	e5900000 	ldr	r0, [r0]
         9924c:	e3a02000 	mov	r2, #0	; 0x0
         99250:	e3a0109a 	mov	r1, #154	; 0x9a
         99254:	e2411c6e 	sub	r1, r1, #28160	; 0x6e00
         99258:	eb6d27cf 	bl	1be319c <$Throw>
         9925c:	ea000027 	b	99300 <TDocker::SoupChangedSinceLastBackup(void)+0xe8>
         99260:	003712d0 	ldreqsb	r1, [r7], -r0
         99264:	e1a00007 	mov	r0, r7
         99268:	e59f1098 	ldr	r1, [pc, #98]	; 99308 <TDocker::SoupChangedSinceLastBackup(void)+0xf0>
         9926c:	eb6cb84b 	bl	1bc73a0 <$SoupGetInfo__FRC6RefVarT1>
         99270:	eb6ca3b5 	bl	1bc214c <$AllocateRefHandle(long)>
         99274:	e1a05000 	mov	r5, r0
         99278:	e5900000 	ldr	r0, [r0]
         9927c:	e3300002 	teq	r0, #2	; 0x2
         99280:	0a00001c 	beq	992f8 <TDocker::SoupChangedSinceLastBackup(void)+0xe0>
         99284:	e3100003 	tst	r0, #3	; 0x3
         99288:	01a00140 	moveq	r0, r0, asr #2
         9928c:	0a000000 	beq	99294 <TDocker::SoupChangedSinceLastBackup(void)+0x7c>
         99290:	eb6ca3a1 	bl	1bc211c <$_RINTError(long)>
         99294:	e5941074 	ldr	r1, [r4, #116]	; fField116
         99298:	e1310000 	teq	r1, r0
         9929c:	12800001 	addne	r0, r0, #1	; 0x1
         992a0:	11300001 	teqne	r0, r1
         992a4:	1a000013 	bne	992f8 <TDocker::SoupChangedSinceLastBackup(void)+0xe0>
         992a8:	e1a00007 	mov	r0, r7
         992ac:	eb66ccee 	bl	1a4c66c <$SoupGetFlags>
         992b0:	eb6ca3a5 	bl	1bc214c <$AllocateRefHandle(long)>
         992b4:	e1a07000 	mov	r7, r0
         992b8:	e5900000 	ldr	r0, [r0]
         992bc:	e3300002 	teq	r0, #2	; 0x2
         992c0:	0a00000a 	beq	992f0 <TDocker::SoupChangedSinceLastBackup(void)+0xd8>
         992c4:	e3100003 	tst	r0, #3	; 0x3
         992c8:	01a00140 	moveq	r0, r0, asr #2
         992cc:	0a000000 	beq	992d4 <TDocker::SoupChangedSinceLastBackup(void)+0xbc>
         992d0:	eb6ca391 	bl	1bc211c <$_RINTError(long)>
         992d4:	e3100002 	tst	r0, #2	; 0x2
         992d8:	1a000004 	bne	992f0 <TDocker::SoupChangedSinceLastBackup(void)+0xd8>
         992dc:	e3a06000 	mov	r6, #0	; 0x0
         992e0:	e1a00004 	mov	r0, r4
         992e4:	e3a02001 	mov	r2, #1	; 0x1
         992e8:	e59f101c 	ldr	r1, [pc, #1c]	; 9930c <TDocker::SoupChangedSinceLastBackup(void)+0xf4>
         992ec:	eb688ec5 	bl	1abce08 <TEzPipeProtocol::$WriteDockerHeader(unsigned long, unsigned char)>
         992f0:	e1a00007 	mov	r0, r7
         992f4:	eb6ca7b0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         992f8:	e1a00005 	mov	r0, r5
         992fc:	eb6ca7ae 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         99300:	e1a00006 	mov	r0, r6
         99304:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         99308:	006839c8 	rsbeq	r3, r8, r8, asr #19
         9930c:	6e646972 	mcrvs	9, 3, r6, cr4, cr2, {3}
    */
}

/**
 * Symbol: TDocker::ClearSoupDirty(void)
 * Address: 00099310
 */
TDocker::ClearSoupDirty(void) {
    /*
         99310:	e1a0c00d 	mov	ip, sp
         99314:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         99318:	e24cb004 	sub	fp, ip, #4	; 0x4
         9931c:	e1a04000 	mov	r4, r0
         99320:	e2800010 	add	r0, r0, #16	; 0x10
         99324:	eb6cbc35 	bl	1bc8400 <$StoreIsReadOnly>
         99328:	e3300002 	teq	r0, #2	; 0x2
         9932c:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         99330:	e24dd004 	sub	sp, sp, #4	; 0x4
         99334:	e5940078 	ldr	r0, [r4, #120]	; fField120
         99338:	e1a00100 	mov	r0, r0, lsl #2
         9933c:	eb6ca382 	bl	1bc214c <$AllocateRefHandle(long)>
         99340:	e58d0000 	str	r0, [sp]
         99344:	e1a0200d 	mov	r2, sp
         99348:	e2840014 	add	r0, r4, #20	; 0x14
         9934c:	e1a05000 	mov	r5, r0
         99350:	e59f106c 	ldr	r1, [pc, #6c]	; 993c4 <TDocker::ClearSoupDirty(void)+0xb4>
         99354:	eb6cb81b 	bl	1bc73c8 <$SoupSetInfo__FRC6RefVarN21>
         99358:	e59d0000 	ldr	r0, [sp]
         9935c:	eb6ca796 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         99360:	e1a00005 	mov	r0, r5
         99364:	eb66ccc0 	bl	1a4c66c <$SoupGetFlags>
         99368:	eb6ca377 	bl	1bc214c <$AllocateRefHandle(long)>
         9936c:	e1a04000 	mov	r4, r0
         99370:	e24dd004 	sub	sp, sp, #4	; 0x4
         99374:	e5900000 	ldr	r0, [r0]
         99378:	e3300002 	teq	r0, #2	; 0x2
         9937c:	0a00000c 	beq	993b4 <TDocker::ClearSoupDirty(void)+0xa4>
         99380:	e3100003 	tst	r0, #3	; 0x3
         99384:	01a00140 	moveq	r0, r0, asr #2
         99388:	0a000000 	beq	99390 <TDocker::ClearSoupDirty(void)+0x80>
         9938c:	eb6ca362 	bl	1bc211c <$_RINTError(long)>
         99390:	e3c00002 	bic	r0, r0, #2	; 0x2
         99394:	e1a00100 	mov	r0, r0, lsl #2
         99398:	eb6ca36b 	bl	1bc214c <$AllocateRefHandle(long)>
         9939c:	e58d0000 	str	r0, [sp]
         993a0:	e1a0100d 	mov	r1, sp
         993a4:	e1a00005 	mov	r0, r5
         993a8:	eb66ccb0 	bl	1a4c670 <$SoupSetFlags>
         993ac:	e59d0000 	ldr	r0, [sp]
         993b0:	eb6ca781 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         993b4:	e28dd004 	add	sp, sp, #4	; 0x4
         993b8:	e1a00004 	mov	r0, r4
         993bc:	eb6ca77e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         993c0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         993c4:	006839c8 	rsbeq	r3, r8, r8, asr #19
    */
}

/**
 * Symbol: TDocker::BackupSoup(void)
 * Address: 000993c8
 */
TDocker::BackupSoup(void) {
    /*
         993c8:	e1a0c00d 	mov	ip, sp
         993cc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         993d0:	e24cb004 	sub	fp, ip, #4	; 0x4
         993d4:	e1a04000 	mov	r4, r0
         993d8:	e3e00102 	mvn	r0, #-2147483648	; 0x80000000
         993dc:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         993e0:	e5940048 	ldr	r0, [r4, #72]	; fField72
         993e4:	e3300004 	teq	r0, #4	; 0x4
         993e8:	01a0100d 	moveq	r1, sp
         993ec:	05940000 	ldreq	r0, [r4]
         993f0:	0b6d2fb5 	bleq	1be52cc <CPipe::$__rs(unsigned long &)>
         993f4:	e1a00004 	mov	r0, r4
         993f8:	eb68a767 	bl	1ac319c <TDocker::$SoupChangedSinceLastBackup(void)>
         993fc:	e3300000 	teq	r0, #0	; 0x0
         99400:	0a000087 	beq	99624 <TDocker::BackupSoup(void)+0x25c>
         99404:	e24dd004 	sub	sp, sp, #4	; 0x4
         99408:	e1a00004 	mov	r0, r4
         9940c:	eb689f2e 	bl	1ac10cc <TDocker::$GetBackupCursor(void)>
         99410:	eb6ca34d 	bl	1bc214c <$AllocateRefHandle(long)>
         99414:	e58d0000 	str	r0, [sp]
         99418:	e5900000 	ldr	r0, [r0]
         9941c:	e3a06000 	mov	r6, #0	; 0x0
         99420:	e3300002 	teq	r0, #2	; 0x2
         99424:	0a000077 	beq	99608 <TDocker::BackupSoup(void)+0x240>
         99428:	e24dd00c 	sub	sp, sp, #12	; 0xc
         9942c:	e3a00000 	mov	r0, #0	; 0x0
         99430:	e58d0008 	str	r0, [sp, #8]
         99434:	e5cd6005 	strb	r6, [sp, #5]
         99438:	e5cd6004 	strb	r6, [sp, #4]	; fField4
         9943c:	e3a07000 	mov	r7, #0	; 0x0
         99440:	e3a09000 	mov	r9, #0	; 0x0
         99444:	e3a08000 	mov	r8, #0	; 0x0
         99448:	e28d000c 	add	r0, sp, #12	; 0xc
         9944c:	eb6ca74e 	bl	1bc318c <$CursorEntry(RefVar const &)>
         99450:	eb6ca33d 	bl	1bc214c <$AllocateRefHandle(long)>
         99454:	e58d0000 	str	r0, [sp]
         99458:	e5900000 	ldr	r0, [r0]
         9945c:	e3300002 	teq	r0, #2	; 0x2
         99460:	0a000065 	beq	995fc <TDocker::BackupSoup(void)+0x234>
         99464:	e59f507c 	ldr	r5, [pc, #7c]	; 994e8 <TDocker::BackupSoup(void)+0x120>
         99468:	e3a0a902 	mov	sl, #32768	; 0x8000
         9946c:	e24aa001 	sub	sl, sl, #1	; 0x1
         99470:	e28d1008 	add	r1, sp, #8	; 0x8
         99474:	e1a00004 	mov	r0, r4
         99478:	eb684437 	bl	1aaa55c <TDocker::$CheckCancel(unsigned long &)>
         9947c:	e1a0100d 	mov	r1, sp
         99480:	e1a00004 	mov	r0, r4
         99484:	eb688629 	bl	1abad30 <TDocker::$ShouldBackupEntry(RefVar const &)>
         99488:	e3300000 	teq	r0, #0	; 0x0
         9948c:	0a00004e 	beq	995cc <TDocker::BackupSoup(void)+0x204>
         99490:	e1a0000d 	mov	r0, sp
         99494:	eb6cab5a 	bl	1bc4204 <$EntryModTime(RefVar const &)>
         99498:	e5941074 	ldr	r1, [r4, #116]	; fField116
         9949c:	e1500001 	cmp	r0, r1
         994a0:	2a000004 	bcs	994b8 <TDocker::BackupSoup(void)+0xf0>
         994a4:	e1a0000d 	mov	r0, sp
         994a8:	eb6cab5f 	bl	1bc422c <$EntryUniqueID(RefVar const &)>
         994ac:	e59d1010 	ldr	r1, [sp, #16]	; fField16
         994b0:	e1500001 	cmp	r0, r1
         994b4:	9a00000c 	bls	994ec <TDocker::BackupSoup(void)+0x124>
         994b8:	e3370000 	teq	r7, #0	; 0x0
         994bc:	0a000004 	beq	994d4 <TDocker::BackupSoup(void)+0x10c>
         994c0:	e3a07000 	mov	r7, #0	; 0x0
         994c4:	e28d1004 	add	r1, sp, #4	; 0x4
         994c8:	e1a00004 	mov	r0, r4
         994cc:	e3a02902 	mov	r2, #32768	; 0x8000
         994d0:	eb6860ff 	bl	1ab18d4 <TDocker::$FinishSequence(short &, short)>
         994d4:	e1a0200d 	mov	r2, sp
         994d8:	e1a00004 	mov	r0, r4
         994dc:	e1a01005 	mov	r1, r5
         994e0:	eb688e49 	bl	1abce0c <TDocker::$WriteEntry(unsigned long, RefVar const &)>
         994e4:	ea000038 	b	995cc <TDocker::BackupSoup(void)+0x204>
         994e8:	656e7472 	strvsb	r7, [lr, -#1138]!
         994ec:	e1a0000d 	mov	r0, sp
         994f0:	eb6cab4d 	bl	1bc422c <$EntryUniqueID(RefVar const &)>
         994f4:	e1a06000 	mov	r6, r0
         994f8:	e3370000 	teq	r7, #0	; 0x0
         994fc:	0a000019 	beq	99568 <TDocker::BackupSoup(void)+0x1a0>
         99500:	e2890001 	add	r0, r9, #1	; 0x1
         99504:	e1300006 	teq	r0, r6
         99508:	1a000007 	bne	9952c <TDocker::BackupSoup(void)+0x164>
         9950c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         99510:	e15a0840 	cmp	sl, r0, asr #16
         99514:	da000004 	ble	9952c <TDocker::BackupSoup(void)+0x164>
         99518:	e59d0006 	ldr	r0, [sp, #6]
         9951c:	e2800001 	add	r0, r0, #1	; 0x1
         99520:	e5cd0005 	strb	r0, [sp, #5]
         99524:	e1a00440 	mov	r0, r0, asr #8
         99528:	ea00001d 	b	995a4 <TDocker::BackupSoup(void)+0x1dc>
         9952c:	e0460008 	sub	r0, r6, r8
         99530:	e150000a 	cmp	r0, sl
         99534:	9a00001e 	bls	995b4 <TDocker::BackupSoup(void)+0x1ec>
         99538:	e28d1004 	add	r1, sp, #4	; 0x4
         9953c:	e1a00004 	mov	r0, r4
         99540:	e3a029fe 	mov	r2, #4161536	; 0x3f8000
         99544:	e2422501 	sub	r2, r2, #4194304	; 0x400000
         99548:	eb6860e1 	bl	1ab18d4 <TDocker::$FinishSequence(short &, short)>
         9954c:	e1a00004 	mov	r0, r4
         99550:	e3a02000 	mov	r2, #0	; 0x0
         99554:	e59f1050 	ldr	r1, [pc, #50]	; 995ac <TDocker::BackupSoup(void)+0x1e4>	; fField50
         99558:	eb688e2a 	bl	1abce08 <TEzPipeProtocol::$WriteDockerHeader(unsigned long, unsigned char)>
         9955c:	e1a01006 	mov	r1, r6
         99560:	e5940000 	ldr	r0, [r4]
         99564:	eb6d2f51 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         99568:	e1a00004 	mov	r0, r4
         9956c:	e3a02000 	mov	r2, #0	; 0x0
         99570:	e59f1038 	ldr	r1, [pc, #38]	; 995b0 <TDocker::BackupSoup(void)+0x1e8>
         99574:	eb688e23 	bl	1abce08 <TEzPipeProtocol::$WriteDockerHeader(unsigned long, unsigned char)>
         99578:	e3e01000 	mvn	r1, #0	; 0x0
         9957c:	e5940000 	ldr	r0, [r4]
         99580:	eb6d2f4a 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         99584:	e0460008 	sub	r0, r6, r8
         99588:	e1a01800 	mov	r1, r0, lsl #16
         9958c:	e1a01841 	mov	r1, r1, asr #16
         99590:	e5940000 	ldr	r0, [r4]
         99594:	eb6d2f42 	bl	1be52a4 <CPipe::$__ls(short)>
         99598:	e3a07001 	mov	r7, #1	; 0x1
         9959c:	e3a00000 	mov	r0, #0	; 0x0
         995a0:	e5cd0005 	strb	r0, [sp, #5]
         995a4:	e5cd0004 	strb	r0, [sp, #4]	; fField4
         995a8:	ea000006 	b	995c8 <TDocker::BackupSoup(void)+0x200>
         995ac:	62617365 	rsbvs	r7, r1, #-1811939327	; 0x94000001
         995b0:	62696473 	rsbvs	r6, r9, #1929379840	; 0x73000000
         995b4:	e1a02800 	mov	r2, r0, lsl #16
         995b8:	e1a02842 	mov	r2, r2, asr #16
         995bc:	e28d1004 	add	r1, sp, #4	; 0x4
         995c0:	e1a00004 	mov	r0, r4
         995c4:	eb6860c2 	bl	1ab18d4 <TDocker::$FinishSequence(short &, short)>
         995c8:	e1a09006 	mov	r9, r6
         995cc:	e28d000c 	add	r0, sp, #12	; 0xc
         995d0:	eb6ca6f1 	bl	1bc319c <$CursorNext(RefVar const &)>
         995d4:	e59d1000 	ldr	r1, [sp]
         995d8:	e5810000 	str	r0, [r1]
         995dc:	e3300002 	teq	r0, #2	; 0x2
         995e0:	1affffa2 	bne	99470 <TDocker::BackupSoup(void)+0xa8>
         995e4:	e3370000 	teq	r7, #0	; 0x0
         995e8:	0a000003 	beq	995fc <TDocker::BackupSoup(void)+0x234>
         995ec:	e28d1004 	add	r1, sp, #4	; 0x4
         995f0:	e1a00004 	mov	r0, r4
         995f4:	e3a02902 	mov	r2, #32768	; 0x8000
         995f8:	eb6860b5 	bl	1ab18d4 <TDocker::$FinishSequence(short &, short)>
         995fc:	e59d0000 	ldr	r0, [sp]
         99600:	eb6ca6ed 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         99604:	e28dd00c 	add	sp, sp, #12	; 0xc
         99608:	e1a00004 	mov	r0, r4
         9960c:	e3a02001 	mov	r2, #1	; 0x1
         99610:	e59f1018 	ldr	r1, [pc, #18]	; 99630 <TDocker::BackupSoup(void)+0x268>
         99614:	eb688dfb 	bl	1abce08 <TEzPipeProtocol::$WriteDockerHeader(unsigned long, unsigned char)>
         99618:	e59d0000 	ldr	r0, [sp]
         9961c:	eb6ca6e6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         99620:	e28dd004 	add	sp, sp, #4	; 0x4
         99624:	e1a00004 	mov	r0, r4
         99628:	eb689651 	bl	1abef74 <TDocker::$ClearSoupDirty(void)>
         9962c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         99630:	6273646e 	rsbvss	r6, r3, #1845493760	; 0x6e000000
    */
}

/**
 * Symbol: TDocker::SetSoupInfoFrame(void)
 * Address: 00099634
 */
TDocker::SetSoupInfoFrame(void) {
    /*
         99634:	e1a0c00d 	mov	ip, sp
         99638:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         9963c:	e24cb004 	sub	fp, ip, #4	; 0x4
         99640:	e1a04000 	mov	r4, r0
         99644:	e24dd004 	sub	sp, sp, #4	; 0x4
         99648:	e2801010 	add	r1, r0, #16	; 0x10
         9964c:	eb687967 	bl	1ab7bf0 <TDocker::$ReadRef(RefVar const &)>
         99650:	eb6ca2bd 	bl	1bc214c <$AllocateRefHandle(long)>
         99654:	e58d0000 	str	r0, [sp]
         99658:	e1a00004 	mov	r0, r4
         9965c:	eb682f21 	bl	1aa52e8 <TDocker::$VerifySoup(void)>
         99660:	e3a06001 	mov	r6, #1	; 0x1
         99664:	e59400a4 	ldr	r0, [r4, #164]	; fField164
         99668:	e2845014 	add	r5, r4, #20	; 0x14
         9966c:	e3300003 	teq	r0, #3	; 0x3
         99670:	05b40060 	ldreq	r0, [r4, #96]!	; fField96
         99674:	03300001 	teqeq	r0, #1	; 0x1
         99678:	1a000006 	bne	99698 <TDocker::SetSoupInfoFrame(void)+0x64>
         9967c:	e1a00005 	mov	r0, r5
         99680:	e59f1048 	ldr	r1, [pc, #48]	; 996d0 <TDocker::SetSoupInfoFrame(void)+0x9c>	; fField48
         99684:	eb6cb745 	bl	1bc73a0 <$SoupGetInfo__FRC6RefVarT1>
         99688:	e3300002 	teq	r0, #2	; 0x2
         9968c:	13a00000 	movne	r0, #0	; 0x0
         99690:	03a00001 	moveq	r0, #1	; 0x1
         99694:	e20060ff 	and	r6, r0, #255	; 0xff
         99698:	e59d0000 	ldr	r0, [sp]
         9969c:	e5900000 	ldr	r0, [r0]
         996a0:	e3300002 	teq	r0, #2	; 0x2
         996a4:	1a000002 	bne	996b4 <TDocker::SetSoupInfoFrame(void)+0x80>
         996a8:	eb6ca2a4 	bl	1bc2140 <$AllocateFrame(void)>
         996ac:	e59d1000 	ldr	r1, [sp]
         996b0:	e5810000 	str	r0, [r1]
         996b4:	e3360000 	teq	r6, #0	; 0x0
         996b8:	11a00005 	movne	r0, r5
         996bc:	11a0100d 	movne	r1, sp
         996c0:	1b6cb73f 	blne	1bc73c4 <$SoupSetAllInfo__FRC6RefVarT1>
         996c4:	e59d0000 	ldr	r0, [sp]
         996c8:	eb6ca6bb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         996cc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         996d0:	00684748 	rsbeq	r4, r8, r8, asr #14
    */
}

/**
 * Symbol: TDocker::WriteSoupInfo(unsigned char)
 * Address: 000996d4
 */
TDocker::WriteSoupInfo(unsigned char) {
    /*
         996d4:	e1a0c00d 	mov	ip, sp
         996d8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         996dc:	e24cb004 	sub	fp, ip, #4	; 0x4
         996e0:	e1a04000 	mov	r4, r0
         996e4:	e20150ff 	and	r5, r1, #255	; 0xff
         996e8:	eb682efe 	bl	1aa52e8 <TDocker::$VerifySoup(void)>
         996ec:	e2846014 	add	r6, r4, #20	; 0x14
         996f0:	e3350000 	teq	r5, #0	; 0x0
         996f4:	0a000018 	beq	9975c <TDocker::WriteSoupInfo(unsigned char)+0x88>
         996f8:	e1a00006 	mov	r0, r6
         996fc:	eb67017b 	bl	1a59cf0 <$SoupGetInfoModTime>
         99700:	eb6ca291 	bl	1bc214c <$AllocateRefHandle(long)>
         99704:	e1a05000 	mov	r5, r0
         99708:	e5900000 	ldr	r0, [r0]
         9970c:	e3300002 	teq	r0, #2	; 0x2
         99710:	0a000006 	beq	99730 <TDocker::WriteSoupInfo(unsigned char)+0x5c>
         99714:	e3100003 	tst	r0, #3	; 0x3
         99718:	01a00140 	moveq	r0, r0, asr #2
         9971c:	0a000000 	beq	99724 <TDocker::WriteSoupInfo(unsigned char)+0x50>
         99720:	eb6ca27d 	bl	1bc211c <$_RINTError(long)>
         99724:	e5941074 	ldr	r1, [r4, #116]	; fField116
         99728:	e1500001 	cmp	r0, r1
         9972c:	3a000001 	bcc	99738 <TDocker::WriteSoupInfo(unsigned char)+0x64>
         99730:	e3a00001 	mov	r0, #1	; 0x1
         99734:	ea000000 	b	9973c <TDocker::WriteSoupInfo(unsigned char)+0x68>
         99738:	e3a00000 	mov	r0, #0	; 0x0
         9973c:	e20070ff 	and	r7, r0, #255	; 0xff
         99740:	e1a00005 	mov	r0, r5
         99744:	eb6ca69c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         99748:	e3370000 	teq	r7, #0	; 0x0
         9974c:	01a00004 	moveq	r0, r4
         99750:	03a01000 	moveq	r1, #0	; 0x0
         99754:	091b68f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         99758:	0a688db3 	beq	1abce2c <TDocker::$WriteResult(long)>
         9975c:	e24dd004 	sub	sp, sp, #4	; 0x4
         99760:	e1a00006 	mov	r0, r6
         99764:	eb6cb70b 	bl	1bc7398 <$SoupGetAllInfo(RefVar const &)>
         99768:	eb6ca277 	bl	1bc214c <$AllocateRefHandle(long)>
         9976c:	e58d0000 	str	r0, [sp]
         99770:	e1a0200d 	mov	r2, sp
         99774:	e1a00004 	mov	r0, r4
         99778:	e59f100c 	ldr	r1, [pc, #c]	; 9978c <TDocker::WriteSoupInfo(unsigned char)+0xb8>
         9977c:	eb688da9 	bl	1abce28 <TDocker::$WriteRef(unsigned long, RefVar const &)>
         99780:	e59d0000 	ldr	r0, [sp]
         99784:	eb6ca68c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         99788:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         9978c:	73696e66 	cmnvc	r9, #1632	; 0x660
    */
}

/**
 * Symbol: TDocker::WriteIndexDescription(unsigned char)
 * Address: 00099790
 */
TDocker::WriteIndexDescription(unsigned char) {
    /*
         99790:	e1a0c00d 	mov	ip, sp
         99794:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         99798:	e24cb004 	sub	fp, ip, #4	; 0x4
         9979c:	e1a04000 	mov	r4, r0
         997a0:	e20150ff 	and	r5, r1, #255	; 0xff
         997a4:	eb682ecf 	bl	1aa52e8 <TDocker::$VerifySoup(void)>
         997a8:	e2846014 	add	r6, r4, #20	; 0x14
         997ac:	e3350000 	teq	r5, #0	; 0x0
         997b0:	0a000018 	beq	99818 <TDocker::WriteIndexDescription(unsigned char)+0x88>
         997b4:	e1a00006 	mov	r0, r6
         997b8:	eb67014b 	bl	1a59cec <$SoupGetIndexesModTime>
         997bc:	eb6ca262 	bl	1bc214c <$AllocateRefHandle(long)>
         997c0:	e1a05000 	mov	r5, r0
         997c4:	e5900000 	ldr	r0, [r0]
         997c8:	e3300002 	teq	r0, #2	; 0x2
         997cc:	0a000006 	beq	997ec <TDocker::WriteIndexDescription(unsigned char)+0x5c>
         997d0:	e3100003 	tst	r0, #3	; 0x3
         997d4:	01a00140 	moveq	r0, r0, asr #2
         997d8:	0a000000 	beq	997e0 <TDocker::WriteIndexDescription(unsigned char)+0x50>
         997dc:	eb6ca24e 	bl	1bc211c <$_RINTError(long)>
         997e0:	e5941074 	ldr	r1, [r4, #116]	; fField116
         997e4:	e1500001 	cmp	r0, r1
         997e8:	3a000001 	bcc	997f4 <TDocker::WriteIndexDescription(unsigned char)+0x64>
         997ec:	e3a00001 	mov	r0, #1	; 0x1
         997f0:	ea000000 	b	997f8 <TDocker::WriteIndexDescription(unsigned char)+0x68>
         997f4:	e3a00000 	mov	r0, #0	; 0x0
         997f8:	e20070ff 	and	r7, r0, #255	; 0xff
         997fc:	e1a00005 	mov	r0, r5
         99800:	eb6ca66d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         99804:	e3370000 	teq	r7, #0	; 0x0
         99808:	01a00004 	moveq	r0, r4
         9980c:	03a01000 	moveq	r1, #0	; 0x0
         99810:	091b68f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         99814:	0a688d84 	beq	1abce2c <TDocker::$WriteResult(long)>
         99818:	e24dd004 	sub	sp, sp, #4	; 0x4
         9981c:	e1a00006 	mov	r0, r6
         99820:	eb6cb6dd 	bl	1bc739c <$SoupGetIndexes(RefVar const &)>
         99824:	eb6ca248 	bl	1bc214c <$AllocateRefHandle(long)>
         99828:	e58d0000 	str	r0, [sp]
         9982c:	e1a0200d 	mov	r2, sp
         99830:	e1a00004 	mov	r0, r4
         99834:	e59f100c 	ldr	r1, [pc, #c]	; 99848 <TDocker::WriteIndexDescription(unsigned char)+0xb8>
         99838:	eb688d7a 	bl	1abce28 <TDocker::$WriteRef(unsigned long, RefVar const &)>
         9983c:	e59d0000 	ldr	r0, [sp]
         99840:	eb6ca65d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         99844:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         99848:	696e6478 	stmvsdb	lr!, {r3, r4, r5, r6, sl, sp, lr}^
    */
}

/**
 * Symbol: TDocker::WriteSoupIDs(void)
 * Address: 0009984c
 */
TDocker::WriteSoupIDs(void) {
    /*
         9984c:	e1a0c00d 	mov	ip, sp
         99850:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         99854:	e24cb004 	sub	fp, ip, #4	; 0x4
         99858:	e1a04000 	mov	r4, r0
         9985c:	eb682ea1 	bl	1aa52e8 <TDocker::$VerifySoup(void)>
         99860:	e24dd004 	sub	sp, sp, #4	; 0x4
         99864:	e3a00002 	mov	r0, #2	; 0x2
         99868:	eb6ca237 	bl	1bc214c <$AllocateRefHandle(long)>
         9986c:	e58d0000 	str	r0, [sp]
         99870:	e5d4002e 	ldrb	r0, [r4, #46]	; fField46
         99874:	e3300000 	teq	r0, #0	; 0x0
         99878:	0a000006 	beq	99898 <TDocker::WriteSoupIDs(void)+0x4c>
         9987c:	e2841010 	add	r1, r4, #16	; 0x10
         99880:	e59f000c 	ldr	r0, [pc, #c]	; 99894 <TDocker::WriteSoupIDs(void)+0x48>
         99884:	eb6d99e5 	bl	1c00020 <$NSCallGlobalFn__FRC6RefVarT1>
         99888:	e59d1000 	ldr	r1, [sp]
         9988c:	e5810000 	str	r0, [r1]
         99890:	ea000009 	b	998bc <TDocker::WriteSoupIDs(void)+0x70>
         99894:	00682f60 	rsbeq	r2, r8, r0, ror #30
         99898:	e1a00004 	mov	r0, r4
         9989c:	eb688947 	bl	1abbdc0 <TDocker::$ValidateQuery(void)>
         998a0:	e2840028 	add	r0, r4, #40	; 0x28
         998a4:	e1a05000 	mov	r5, r0
         998a8:	eb6ca63d 	bl	1bc31a4 <$CursorReset(RefVar const &)>
         998ac:	e5950000 	ldr	r0, [r5]
         998b0:	e5901000 	ldr	r1, [r0]
         998b4:	e59d0000 	ldr	r0, [sp]
         998b8:	e5801000 	str	r1, [r0]
         998bc:	e1a00004 	mov	r0, r4
         998c0:	e3a02000 	mov	r2, #0	; 0x0
         998c4:	e59f1024 	ldr	r1, [pc, #24]	; 998f0 <TDocker::WriteSoupIDs(void)+0xa4>	; fField24
         998c8:	eb688d4e 	bl	1abce08 <TEzPipeProtocol::$WriteDockerHeader(unsigned long, unsigned char)>
         998cc:	e59d0000 	ldr	r0, [sp]
         998d0:	e5900000 	ldr	r0, [r0]
         998d4:	e3300002 	teq	r0, #2	; 0x2
         998d8:	0a000005 	beq	998f4 <TDocker::WriteSoupIDs(void)+0xa8>
         998dc:	e1a0100d 	mov	r1, sp
         998e0:	e1a00004 	mov	r0, r4
         998e4:	eb686825 	bl	1ab3980 <TDocker::$GetSoupIDCount(RefVar const &)>
         998e8:	e1a05000 	mov	r5, r0
         998ec:	ea000001 	b	998f8 <TDocker::WriteSoupIDs(void)+0xac>
         998f0:	73696473 	cmnvc	r9, #1929379840	; 0x73000000
         998f4:	e3a05000 	mov	r5, #0	; 0x0
         998f8:	e3a00004 	mov	r0, #4	; 0x4
         998fc:	e0801105 	add	r1, r0, r5, lsl #2
         99900:	e5940000 	ldr	r0, [r4]
         99904:	eb6d2e69 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         99908:	e1a01005 	mov	r1, r5
         9990c:	e5940000 	ldr	r0, [r4]
         99910:	eb6d2e66 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         99914:	e3a05000 	mov	r5, #0	; 0x0
         99918:	e594007c 	ldr	r0, [r4, #124]	; fField124
         9991c:	e3300000 	teq	r0, #0	; 0x0
         99920:	0a000002 	beq	99930 <TDocker::WriteSoupIDs(void)+0xe4>
         99924:	e3a01001 	mov	r1, #1	; 0x1
         99928:	eb688d4f 	bl	1abce6c <TDockerDynArray::$__dt(void)>
         9992c:	e584507c 	str	r5, [r4, #124]	; fField124
         99930:	e59d0000 	ldr	r0, [sp]
         99934:	e5900000 	ldr	r0, [r0]
         99938:	e3300002 	teq	r0, #2	; 0x2
         9993c:	0a000071 	beq	99b08 <TDocker::WriteSoupIDs(void)+0x2bc>
         99940:	e24dd07c 	sub	sp, sp, #124	; 0x7c
         99944:	e3a05000 	mov	r5, #0	; 0x0
         99948:	e28d007c 	add	r0, sp, #124	; 0x7c
         9994c:	eb6ca60e 	bl	1bc318c <$CursorEntry(RefVar const &)>
         99950:	eb6ca1fd 	bl	1bc214c <$AllocateRefHandle(long)>
         99954:	e58d0000 	str	r0, [sp]
         99958:	e5900000 	ldr	r0, [r0]
         9995c:	e3300002 	teq	r0, #2	; 0x2
         99960:	0a000025 	beq	999fc <TDocker::WriteSoupIDs(void)+0x1b0>
         99964:	e1a0100d 	mov	r1, sp
         99968:	e1a00004 	mov	r0, r4
         9996c:	eb6884ef 	bl	1abad30 <TDocker::$ShouldBackupEntry(RefVar const &)>
         99970:	e3300000 	teq	r0, #0	; 0x0
         99974:	0a000010 	beq	999bc <TDocker::WriteSoupIDs(void)+0x170>
         99978:	e1a0000d 	mov	r0, sp
         9997c:	eb6caa2a 	bl	1bc422c <$EntryUniqueID(RefVar const &)>
         99980:	e1a01005 	mov	r1, r5
         99984:	e2855001 	add	r5, r5, #1	; 0x1
         99988:	e28d2004 	add	r2, sp, #4	; 0x4
         9998c:	e7820101 	str	r0, [r2, r1, lsl #2]
         99990:	e335001e 	teq	r5, #30	; 0x1e
         99994:	1a000008 	bne	999bc <TDocker::WriteSoupIDs(void)+0x170>
         99998:	e3a05000 	mov	r5, #0	; 0x0
         9999c:	e28d1004 	add	r1, sp, #4	; 0x4
         999a0:	e594c000 	ldr	ip, [r4]
         999a4:	e1a0000c 	mov	r0, ip
         999a8:	e3a03000 	mov	r3, #0	; 0x0
         999ac:	e3a02078 	mov	r2, #120	; 0x78
         999b0:	e59cc000 	ldr	ip, [ip]
         999b4:	e1a0e00f 	mov	lr, pc
         999b8:	e28cf018 	add	pc, ip, #24	; 0x18
         999bc:	e28d007c 	add	r0, sp, #124	; 0x7c
         999c0:	eb6ca5f5 	bl	1bc319c <$CursorNext(RefVar const &)>
         999c4:	e59d1000 	ldr	r1, [sp]
         999c8:	e5810000 	str	r0, [r1]
         999cc:	e3300002 	teq	r0, #2	; 0x2
         999d0:	1affffe3 	bne	99964 <TDocker::WriteSoupIDs(void)+0x118>
         999d4:	e3550000 	cmp	r5, #0	; 0x0
         999d8:	9a000007 	bls	999fc <TDocker::WriteSoupIDs(void)+0x1b0>
         999dc:	e1a02105 	mov	r2, r5, lsl #2
         999e0:	e28d1004 	add	r1, sp, #4	; 0x4
         999e4:	e594c000 	ldr	ip, [r4]
         999e8:	e1a0000c 	mov	r0, ip
         999ec:	e3a03000 	mov	r3, #0	; 0x0
         999f0:	e59cc000 	ldr	ip, [ip]
         999f4:	e1a0e00f 	mov	lr, pc
         999f8:	e28cf018 	add	pc, ip, #24	; 0x18
         999fc:	e5940000 	ldr	r0, [r4]
         99a00:	e5901000 	ldr	r1, [r0]
         99a04:	e1a0e00f 	mov	lr, pc
         99a08:	e281f020 	add	pc, r1, #32	; 0x20
         99a0c:	e59d0000 	ldr	r0, [sp]
         99a10:	eb6ca5e9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         99a14:	e28dd07c 	add	sp, sp, #124	; 0x7c
         99a18:	e5940074 	ldr	r0, [r4, #116]	; fField116
         99a1c:	e3300000 	teq	r0, #0	; 0x0
         99a20:	0a00003c 	beq	99b18 <TDocker::WriteSoupIDs(void)+0x2cc>
         99a24:	e1a0000d 	mov	r0, sp
         99a28:	eb6ca5dd 	bl	1bc31a4 <$CursorReset(RefVar const &)>
         99a2c:	e24dd004 	sub	sp, sp, #4	; 0x4
         99a30:	e28d0004 	add	r0, sp, #4	; 0x4
         99a34:	eb6ca5d4 	bl	1bc318c <$CursorEntry(RefVar const &)>
         99a38:	eb6ca1c3 	bl	1bc214c <$AllocateRefHandle(long)>
         99a3c:	e58d0000 	str	r0, [sp]
         99a40:	e5900000 	ldr	r0, [r0]
         99a44:	e3300002 	teq	r0, #2	; 0x2
         99a48:	0a000029 	beq	99af4 <TDocker::WriteSoupIDs(void)+0x2a8>
         99a4c:	e59f50b0 	ldr	r5, [pc, #b0]	; 99b04 <TDocker::WriteSoupIDs(void)+0x2b8>
         99a50:	e1a0000d 	mov	r0, sp
         99a54:	eb6ca9ea 	bl	1bc4204 <$EntryModTime(RefVar const &)>
         99a58:	e5941074 	ldr	r1, [r4, #116]	; fField116
         99a5c:	e1500001 	cmp	r0, r1
         99a60:	3a00001d 	bcc	99adc <TDocker::WriteSoupIDs(void)+0x290>
         99a64:	e1a0100d 	mov	r1, sp
         99a68:	e1a00004 	mov	r0, r4
         99a6c:	eb6884af 	bl	1abad30 <TDocker::$ShouldBackupEntry(RefVar const &)>
         99a70:	e3300000 	teq	r0, #0	; 0x0
         99a74:	0a000018 	beq	99adc <TDocker::WriteSoupIDs(void)+0x290>
         99a78:	e594007c 	ldr	r0, [r4, #124]	; fField124
         99a7c:	e3300000 	teq	r0, #0	; 0x0
         99a80:	1a000005 	bne	99a9c <TDocker::WriteSoupIDs(void)+0x250>
         99a84:	e3a00000 	mov	r0, #0	; 0x0
         99a88:	eb688cf0 	bl	1abce50 <TDockerDynArray::$__ct(void)>
         99a8c:	e584007c 	str	r0, [r4, #124]	; fField124
         99a90:	e3300000 	teq	r0, #0	; 0x0
         99a94:	01a00004 	moveq	r0, r4
         99a98:	0b68a1aa 	bleq	1ac2148 <TDocker::$OutOfMemory(void)>
         99a9c:	e1a0000d 	mov	r0, sp
         99aa0:	eb6ca9e1 	bl	1bc422c <$EntryUniqueID(RefVar const &)>
         99aa4:	e1a01000 	mov	r1, r0
         99aa8:	e594007c 	ldr	r0, [r4, #124]	; fField124
         99aac:	eb683a6e 	bl	1aa846c <TDockerDynArray::$Add(unsigned long)>
         99ab0:	e3300000 	teq	r0, #0	; 0x0
         99ab4:	0a000008 	beq	99adc <TDocker::WriteSoupIDs(void)+0x290>
         99ab8:	e1a0000d 	mov	r0, sp
         99abc:	eb6ca9da 	bl	1bc422c <$EntryUniqueID(RefVar const &)>
         99ac0:	e1a01000 	mov	r1, r0
         99ac4:	e594007c 	ldr	r0, [r4, #124]	; fField124
         99ac8:	eb683a67 	bl	1aa846c <TDockerDynArray::$Add(unsigned long)>
         99acc:	e1a01000 	mov	r1, r0
         99ad0:	e3a02000 	mov	r2, #0	; 0x0
         99ad4:	e5950000 	ldr	r0, [r5]
         99ad8:	eb6d25af 	bl	1be319c <$Throw>
         99adc:	e28d0004 	add	r0, sp, #4	; 0x4
         99ae0:	eb6ca5ad 	bl	1bc319c <$CursorNext(RefVar const &)>
         99ae4:	e59d1000 	ldr	r1, [sp]
         99ae8:	e5810000 	str	r0, [r1]
         99aec:	e3300002 	teq	r0, #2	; 0x2
         99af0:	1affffd6 	bne	99a50 <TDocker::WriteSoupIDs(void)+0x204>
         99af4:	e59d0000 	ldr	r0, [sp]
         99af8:	eb6ca5af 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         99afc:	e28dd004 	add	sp, sp, #4	; 0x4
         99b00:	ea000004 	b	99b18 <TDocker::WriteSoupIDs(void)+0x2cc>
         99b04:	003712d0 	ldreqsb	r1, [r7], -r0
         99b08:	e5940000 	ldr	r0, [r4]
         99b0c:	e5901000 	ldr	r1, [r0]
         99b10:	e1a0e00f 	mov	lr, pc
         99b14:	e281f020 	add	pc, r1, #32	; 0x20
         99b18:	e59d0000 	ldr	r0, [sp]
         99b1c:	eb6ca5a6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         99b20:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::WriteChangedIDs(void)
 * Address: 00099b24
 */
TDocker::WriteChangedIDs(void) {
    /*
         99b24:	e1a0c00d 	mov	ip, sp
         99b28:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         99b2c:	e24cb004 	sub	fp, ip, #4	; 0x4
         99b30:	e1a04000 	mov	r4, r0
         99b34:	e3a02000 	mov	r2, #0	; 0x0
         99b38:	e59f1058 	ldr	r1, [pc, #58]	; 99b98 <TDocker::WriteChangedIDs(void)+0x74>
         99b3c:	eb688cb1 	bl	1abce08 <TEzPipeProtocol::$WriteDockerHeader(unsigned long, unsigned char)>
         99b40:	e594507c 	ldr	r5, [r4, #124]	; fField124
         99b44:	e3350000 	teq	r5, #0	; 0x0
         99b48:	15950004 	ldrne	r0, [r5, #4]	; fField4
         99b4c:	13300000 	teqne	r0, #0	; 0x0
         99b50:	0a000009 	beq	99b7c <TDocker::WriteChangedIDs(void)+0x58>
         99b54:	e3a06000 	mov	r6, #0	; 0x0
         99b58:	e5950000 	ldr	r0, [r5]
         99b5c:	e3300000 	teq	r0, #0	; 0x0
         99b60:	01a00006 	moveq	r0, r6
         99b64:	0a000002 	beq	99b74 <TDocker::WriteChangedIDs(void)+0x50>
         99b68:	eb6d2167 	bl	1be210c <$HLock>
         99b6c:	e5950000 	ldr	r0, [r5]
         99b70:	e5900000 	ldr	r0, [r0]
         99b74:	e3300000 	teq	r0, #0	; 0x0
         99b78:	1a000007 	bne	99b9c <TDocker::WriteChangedIDs(void)+0x78>
         99b7c:	e3a01004 	mov	r1, #4	; 0x4
         99b80:	e5940000 	ldr	r0, [r4]
         99b84:	eb6d2dc9 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         99b88:	e3a01000 	mov	r1, #0	; 0x0
         99b8c:	e5940000 	ldr	r0, [r4]
         99b90:	eb6d2dc6 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         99b94:	ea000021 	b	99c20 <TDocker::WriteChangedIDs(void)+0xfc>
         99b98:	63696473 	cmnvs	r9, #1929379840	; 0x73000000
         99b9c:	e594007c 	ldr	r0, [r4, #124]	; fField124
         99ba0:	e5900004 	ldr	r0, [r0, #4]	; fField4
         99ba4:	e3a01004 	mov	r1, #4	; 0x4
         99ba8:	e0811100 	add	r1, r1, r0, lsl #2
         99bac:	e5940000 	ldr	r0, [r4]
         99bb0:	eb6d2dbe 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         99bb4:	e594007c 	ldr	r0, [r4, #124]	; fField124
         99bb8:	e5b01004 	ldr	r1, [r0, #4]!	; fField4
         99bbc:	e5940000 	ldr	r0, [r4]
         99bc0:	eb6d2dba 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         99bc4:	e594007c 	ldr	r0, [r4, #124]	; fField124
         99bc8:	e1a08000 	mov	r8, r0
         99bcc:	e5947000 	ldr	r7, [r4]
         99bd0:	e5900004 	ldr	r0, [r0, #4]	; fField4
         99bd4:	e1a05100 	mov	r5, r0, lsl #2
         99bd8:	e5980000 	ldr	r0, [r8]
         99bdc:	e3300000 	teq	r0, #0	; 0x0
         99be0:	01a01006 	moveq	r1, r6
         99be4:	0a000002 	beq	99bf4 <TDocker::WriteChangedIDs(void)+0xd0>
         99be8:	eb6d2147 	bl	1be210c <$HLock>
         99bec:	e5980000 	ldr	r0, [r8]
         99bf0:	e5901000 	ldr	r1, [r0]
         99bf4:	e1a00007 	mov	r0, r7
         99bf8:	e3a03000 	mov	r3, #0	; 0x0
         99bfc:	e1a02005 	mov	r2, r5
         99c00:	e597c000 	ldr	ip, [r7]
         99c04:	e1a0e00f 	mov	lr, pc
         99c08:	e28cf018 	add	pc, ip, #24	; 0x18
         99c0c:	e594007c 	ldr	r0, [r4, #124]	; fField124
         99c10:	e3300000 	teq	r0, #0	; 0x0
         99c14:	13a01001 	movne	r1, #1	; 0x1
         99c18:	1b688c93 	blne	1abce6c <TDockerDynArray::$__dt(void)>
         99c1c:	e584607c 	str	r6, [r4, #124]	; fField124
         99c20:	e5940000 	ldr	r0, [r4]
         99c24:	e5901000 	ldr	r1, [r0]
         99c28:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         99c2c:	e281f020 	add	pc, r1, #32	; 0x20
    */
}

/**
 * Symbol: TDocker::WriteLong(unsigned long, unsigned long)
 * Address: 00099c30
 */
TDocker::WriteLong(unsigned long, unsigned long) {
    /*
         99c30:	e1a0c00d 	mov	ip, sp
         99c34:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         99c38:	e24cb004 	sub	fp, ip, #4	; 0x4
         99c3c:	e1a04000 	mov	r4, r0
         99c40:	e1a05002 	mov	r5, r2
         99c44:	e3a02000 	mov	r2, #0	; 0x0
         99c48:	eb688c6e 	bl	1abce08 <TEzPipeProtocol::$WriteDockerHeader(unsigned long, unsigned char)>
         99c4c:	e3a01004 	mov	r1, #4	; 0x4
         99c50:	e5940000 	ldr	r0, [r4]
         99c54:	eb6d2d95 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         99c58:	e1a01005 	mov	r1, r5
         99c5c:	e5940000 	ldr	r0, [r4]
         99c60:	eb6d2d92 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         99c64:	e5940000 	ldr	r0, [r4]
         99c68:	e5901000 	ldr	r1, [r0]
         99c6c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         99c70:	e281f020 	add	pc, r1, #32	; 0x20
    */
}

/**
 * Symbol: TDocker::WriteResult(long)
 * Address: 00099c74
 */
TDocker::WriteResult(long) {
    /*
         99c74:	e1a02001 	mov	r2, r1
         99c78:	e59f1000 	ldr	r1, [pc, #0]	; 99c80 <TDocker::WriteResult(long)+0xc>
         99c7c:	ea688c65 	b	1abce18 <TDocker::$WriteLong(unsigned long, unsigned long)>
         99c80:	64726573 	ldrvsbt	r6, [r2], -#1395
    */
}

/**
 * Symbol: TDocker::ReadResult(void)
 * Address: 00099c84
 */
TDocker::ReadResult(void) {
    /*
         99c84:	e1a0c00d 	mov	ip, sp
         99c88:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         99c8c:	e24cb004 	sub	fp, ip, #4	; 0x4
         99c90:	e24dd004 	sub	sp, sp, #4	; 0x4
         99c94:	e1a0100d 	mov	r1, sp
         99c98:	e5900000 	ldr	r0, [r0]
         99c9c:	eb6d2d86 	bl	1be52bc <CPipe::$__rs(long &)>
         99ca0:	e49d0004 	ldr	r0, [sp], #4	; fField4
         99ca4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::ReadResultString(void)
 * Address: 00099ca8
 */
TDocker::ReadResultString(void) {
    /*
         99ca8:	e1a0c00d 	mov	ip, sp
         99cac:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         99cb0:	e24cb004 	sub	fp, ip, #4	; 0x4
         99cb4:	e1a04000 	mov	r4, r0
         99cb8:	e24dd008 	sub	sp, sp, #8	; 0x8
         99cbc:	e3a00002 	mov	r0, #2	; 0x2
         99cc0:	eb6ca121 	bl	1bc214c <$AllocateRefHandle(long)>
         99cc4:	e58d0000 	str	r0, [sp]
         99cc8:	e1a0100d 	mov	r1, sp
         99ccc:	e1a00004 	mov	r0, r4
         99cd0:	eb6877c6 	bl	1ab7bf0 <TDocker::$ReadRef(RefVar const &)>
         99cd4:	eb6ca11c 	bl	1bc214c <$AllocateRefHandle(long)>
         99cd8:	e58d0004 	str	r0, [sp, #4]	; fField4
         99cdc:	e59d0000 	ldr	r0, [sp]
         99ce0:	eb6ca535 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         99ce4:	e2840020 	add	r0, r4, #32	; 0x20
         99ce8:	e28d2004 	add	r2, sp, #4	; 0x4
         99cec:	e59f1018 	ldr	r1, [pc, #18]	; 99d0c <TDocker::ReadResultString(void)+0x64>
         99cf0:	eb6cb19c 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         99cf4:	e3a04fa1 	mov	r4, #644	; 0x284
         99cf8:	e2444a07 	sub	r4, r4, #28672	; 0x7000
         99cfc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         99d00:	eb6ca52d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         99d04:	e1a00004 	mov	r0, r4
         99d08:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         99d0c:	006828f0 	streqd	r2, [r8], -#128	; fField128
    */
}

/**
 * Symbol: TDocker::WriteRef(unsigned long, RefVar const &)
 * Address: 00099d10
 */
TDocker::WriteRef(unsigned long, RefVar const &) {
    /*
         99d10:	e1a0c00d 	mov	ip, sp
         99d14:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         99d18:	e24cb004 	sub	fp, ip, #4	; 0x4
         99d1c:	e1a04000 	mov	r4, r0
         99d20:	e1a05002 	mov	r5, r2
         99d24:	e3a06000 	mov	r6, #0	; 0x0
         99d28:	e3310000 	teq	r1, #0	; 0x0
         99d2c:	1a00001b 	bne	99da0 <TDocker::WriteRef(unsigned long, RefVar const &)+0x90>
         99d30:	e24dd028 	sub	sp, sp, #40	; 0x28
         99d34:	e1a01005 	mov	r1, r5
         99d38:	e1a0000d 	mov	r0, sp
         99d3c:	e3a03000 	mov	r3, #0	; 0x0
         99d40:	e5942000 	ldr	r2, [r4]
         99d44:	eb6c9ce8 	bl	1bc10ec <TObjectWriter::$__ct(RefVar const &, CPipe &, int)>
         99d48:	e52d606c 	str	r6, [sp, -#108]!	; fField108
         99d4c:	e28d0008 	add	r0, sp, #8	; 0x8
         99d50:	eb6c6307 	bl	1bb2974 <$setjmp>
         99d54:	e3300000 	teq	r0, #0	; 0x0
         99d58:	1a00000a 	bne	99d88 <TDocker::WriteRef(unsigned long, RefVar const &)+0x78>
         99d5c:	e1a0000d 	mov	r0, sp
         99d60:	eb6d18c5 	bl	1be007c <$AddExceptionHandler>
         99d64:	e28d006c 	add	r0, sp, #108	; 0x6c
         99d68:	eb6cb9c3 	bl	1bc847c <TObjectWriter::$Write(void)>
         99d6c:	e1a0000d 	mov	r0, sp
         99d70:	eb6d1cd0 	bl	1be10b8 <$ExitHandler>
         99d74:	e28dd06c 	add	sp, sp, #108	; 0x6c
         99d78:	e1a0000d 	mov	r0, sp
         99d7c:	e3a01000 	mov	r1, #0	; 0x0
         99d80:	eb66d278 	bl	1a4e768 <TObjectWriter::$__dt(void)>
         99d84:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         99d88:	e28d006c 	add	r0, sp, #108	; 0x6c
         99d8c:	e3a01000 	mov	r1, #0	; 0x0
         99d90:	eb66d274 	bl	1a4e768 <TObjectWriter::$__dt(void)>
         99d94:	e1a0000d 	mov	r0, sp
         99d98:	eb6d20ed 	bl	1be2154 <$NextHandler>
         99d9c:	eafffff9 	b	99d88 <TDocker::WriteRef(unsigned long, RefVar const &)+0x78>
         99da0:	e1a00004 	mov	r0, r4
         99da4:	e3a02000 	mov	r2, #0	; 0x0
         99da8:	eb688c16 	bl	1abce08 <TEzPipeProtocol::$WriteDockerHeader(unsigned long, unsigned char)>
         99dac:	e24dd028 	sub	sp, sp, #40	; 0x28
         99db0:	e1a01005 	mov	r1, r5
         99db4:	e1a0000d 	mov	r0, sp
         99db8:	e3a03000 	mov	r3, #0	; 0x0
         99dbc:	e5942000 	ldr	r2, [r4]
         99dc0:	eb6c9cc9 	bl	1bc10ec <TObjectWriter::$__ct(RefVar const &, CPipe &, int)>
         99dc4:	e52d606c 	str	r6, [sp, -#108]!	; fField108
         99dc8:	e28d0008 	add	r0, sp, #8	; 0x8
         99dcc:	eb6c62e8 	bl	1bb2974 <$setjmp>
         99dd0:	e3300000 	teq	r0, #0	; 0x0
         99dd4:	1a000022 	bne	99e64 <TDocker::WriteRef(unsigned long, RefVar const &)+0x154>
         99dd8:	e1a0000d 	mov	r0, sp
         99ddc:	eb6d18a6 	bl	1be007c <$AddExceptionHandler>
         99de0:	e5940034 	ldr	r0, [r4, #52]	; fField52
         99de4:	e3300002 	teq	r0, #2	; 0x2
         99de8:	0a000004 	beq	99e00 <TDocker::WriteRef(unsigned long, RefVar const &)+0xf0>
         99dec:	e5d4102e 	ldrb	r1, [r4, #46]	; fField46
         99df0:	e3310000 	teq	r1, #0	; 0x0
         99df4:	0a000003 	beq	99e08 <TDocker::WriteRef(unsigned long, RefVar const &)+0xf8>
         99df8:	e3300001 	teq	r0, #1	; 0x1
         99dfc:	1a000001 	bne	99e08 <TDocker::WriteRef(unsigned long, RefVar const &)+0xf8>
         99e00:	e28d006c 	add	r0, sp, #108	; 0x6c
         99e04:	eb66da96 	bl	1a50864 <TObjectWriter::$SetCompressLargeBinaries(void)>
         99e08:	e28d006c 	add	r0, sp, #108	; 0x6c
         99e0c:	eb6cb158 	bl	1bc6374 <TObjectWriter::$Size(void)>
         99e10:	e1a01000 	mov	r1, r0
         99e14:	e1a05000 	mov	r5, r0
         99e18:	e5940000 	ldr	r0, [r4]
         99e1c:	eb6d2d23 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         99e20:	e28d006c 	add	r0, sp, #108	; 0x6c
         99e24:	eb6cb994 	bl	1bc847c <TObjectWriter::$Write(void)>
         99e28:	e1a0000d 	mov	r0, sp
         99e2c:	eb6d1ca1 	bl	1be10b8 <$ExitHandler>
         99e30:	e28dd06c 	add	sp, sp, #108	; 0x6c
         99e34:	e1a0000d 	mov	r0, sp
         99e38:	e3a01000 	mov	r1, #0	; 0x0
         99e3c:	eb66d249 	bl	1a4e768 <TObjectWriter::$__dt(void)>
         99e40:	e28dd028 	add	sp, sp, #40	; 0x28
         99e44:	e1a01005 	mov	r1, r5
         99e48:	e1a00004 	mov	r0, r4
         99e4c:	eb680c03 	bl	1a9ce60 <TDocker::$Pad(unsigned long)>
         99e50:	e5940000 	ldr	r0, [r4]
         99e54:	e5901000 	ldr	r1, [r0]
         99e58:	e1a0e00f 	mov	lr, pc
         99e5c:	e281f020 	add	pc, r1, #32	; 0x20
         99e60:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         99e64:	e28d006c 	add	r0, sp, #108	; 0x6c
         99e68:	e3a01000 	mov	r1, #0	; 0x0
         99e6c:	eb66d23d 	bl	1a4e768 <TObjectWriter::$__dt(void)>
         99e70:	e1a0000d 	mov	r0, sp
         99e74:	eb6d20b6 	bl	1be2154 <$NextHandler>
         99e78:	eafffff9 	b	99e64 <TDocker::WriteRef(unsigned long, RefVar const &)+0x154>
    */
}

/**
 * Symbol: TDocker::ReadRef(RefVar const &)
 * Address: 00099e7c
 */
TDocker::ReadRef(RefVar const &) {
    /*
         99e7c:	e1a0c00d 	mov	ip, sp
         99e80:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         99e84:	e24cb004 	sub	fp, ip, #4	; 0x4
         99e88:	e1a04000 	mov	r4, r0
         99e8c:	e1a05001 	mov	r5, r1
         99e90:	e3a00002 	mov	r0, #2	; 0x2
         99e94:	eb6ca0ac 	bl	1bc214c <$AllocateRefHandle(long)>
         99e98:	e1a06000 	mov	r6, r0
         99e9c:	e24dd010 	sub	sp, sp, #16	; 0x10
         99ea0:	e1a02005 	mov	r2, r5
         99ea4:	e1a0000d 	mov	r0, sp
         99ea8:	e5941000 	ldr	r1, [r4]
         99eac:	eb66d230 	bl	1a4e774 <TObjectReader::$__ct(CPipe &, RefVar const &)>
         99eb0:	e3a00000 	mov	r0, #0	; 0x0
         99eb4:	e52d006c 	str	r0, [sp, -#108]!	; fField108
         99eb8:	e28d0008 	add	r0, sp, #8	; 0x8
         99ebc:	eb6c62ac 	bl	1bb2974 <$setjmp>
         99ec0:	e3300000 	teq	r0, #0	; 0x0
         99ec4:	1a000014 	bne	99f1c <TDocker::ReadRef(RefVar const &)+0xa0>
         99ec8:	e1a0000d 	mov	r0, sp
         99ecc:	eb6d186a 	bl	1be007c <$AddExceptionHandler>
         99ed0:	e28d006c 	add	r0, sp, #108	; 0x6c
         99ed4:	eb6cb10c 	bl	1bc630c <TObjectReader::$Read(void)>
         99ed8:	e5860000 	str	r0, [r6]
         99edc:	e1a0000d 	mov	r0, sp
         99ee0:	eb6d1c74 	bl	1be10b8 <$ExitHandler>
         99ee4:	e28dd06c 	add	sp, sp, #108	; 0x6c
         99ee8:	e1a0000d 	mov	r0, sp
         99eec:	e3a01000 	mov	r1, #0	; 0x0
         99ef0:	eb66d21e 	bl	1a4e770 <TObjectReader::$__dt(void)>
         99ef4:	e28dd010 	add	sp, sp, #16	; 0x10
         99ef8:	e5941048 	ldr	r1, [r4, #72]	; fField72
         99efc:	e3710001 	cmn	r1, #1	; 0x1
         99f00:	11a00004 	movne	r0, r4
         99f04:	1b67ead2 	blne	1a94a54 <TDocker::$FlushPadding(unsigned long)>
         99f08:	e5964000 	ldr	r4, [r6]
         99f0c:	e1a00006 	mov	r0, r6
         99f10:	eb6ca4a9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         99f14:	e1a00004 	mov	r0, r4
         99f18:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         99f1c:	e28d006c 	add	r0, sp, #108	; 0x6c
         99f20:	e3a01000 	mov	r1, #0	; 0x0
         99f24:	eb66d211 	bl	1a4e770 <TObjectReader::$__dt(void)>
         99f28:	e1a0000d 	mov	r0, sp
         99f2c:	eb6d2088 	bl	1be2154 <$NextHandler>
         99f30:	eafffff9 	b	99f1c <TDocker::ReadRef(RefVar const &)+0xa0>
    */
}

/**
 * Symbol: TDocker::WriteEntry(unsigned long, RefVar const &)
 * Address: 00099f6c
 */
TDocker::WriteEntry(unsigned long, RefVar const &) {
    /*
         99f6c:	e1a0c00d 	mov	ip, sp
         99f70:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         99f74:	e24cb004 	sub	fp, ip, #4	; 0x4
         99f78:	e1a05000 	mov	r5, r0
         99f7c:	e1a06001 	mov	r6, r1
         99f80:	e1a04002 	mov	r4, r2
         99f84:	e24dd004 	sub	sp, sp, #4	; 0x4
         99f88:	e5920000 	ldr	r0, [r2]
         99f8c:	e5900000 	ldr	r0, [r0]
         99f90:	eb6ca06d 	bl	1bc214c <$AllocateRefHandle(long)>
         99f94:	e58d0000 	str	r0, [sp]
         99f98:	e5d5002c 	ldrb	r0, [r5, #44]	; fField44
         99f9c:	e3300000 	teq	r0, #0	; 0x0
         99fa0:	0a000004 	beq	99fb8 <TDocker::WriteEntry(unsigned long, RefVar const &)+0x4c>
         99fa4:	e1a01004 	mov	r1, r4
         99fa8:	e59f0024 	ldr	r0, [pc, #24]	; 99fd4 <TDocker::WriteEntry(unsigned long, RefVar const &)+0x68>	; fField24
         99fac:	eb6d981b 	bl	1c00020 <$NSCallGlobalFn__FRC6RefVarT1>
         99fb0:	e59d1000 	ldr	r1, [sp]
         99fb4:	e5810000 	str	r0, [r1]
         99fb8:	e1a0200d 	mov	r2, sp
         99fbc:	e1a01006 	mov	r1, r6
         99fc0:	e1a00005 	mov	r0, r5
         99fc4:	eb688b97 	bl	1abce28 <TDocker::$WriteRef(unsigned long, RefVar const &)>
         99fc8:	e59d0000 	ldr	r0, [sp]
         99fcc:	eb6ca47a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         99fd0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         99fd4:	00682cf8 	streqd	r2, [r8], -#200
    */
}

/**
 * Symbol: TDocker::GetEntryFromID(unsigned long)
 * Address: 00099fd8
 */
TDocker::GetEntryFromID(unsigned long) {
    /*
         99fd8:	e1a0c00d 	mov	ip, sp
         99fdc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         99fe0:	e24cb004 	sub	fp, ip, #4	; 0x4
         99fe4:	e1a04000 	mov	r4, r0
         99fe8:	e1a05001 	mov	r5, r1
         99fec:	eb682cbd 	bl	1aa52e8 <TDocker::$VerifySoup(void)>
         99ff0:	e1a00004 	mov	r0, r4
         99ff4:	eb688771 	bl	1abbdc0 <TDocker::$ValidateQuery(void)>
         99ff8:	e24dd008 	sub	sp, sp, #8	; 0x8
         99ffc:	e1a00105 	mov	r0, r5, lsl #2
         9a000:	eb6ca051 	bl	1bc214c <$AllocateRefHandle(long)>
         9a004:	e58d0000 	str	r0, [sp]
         9a008:	e1a0100d 	mov	r1, sp
         9a00c:	e2840028 	add	r0, r4, #40	; 0x28
         9a010:	eb6ca45f 	bl	1bc3194 <$CursorGotoKey__FRC6RefVarT1>
         9a014:	eb6ca04c 	bl	1bc214c <$AllocateRefHandle(long)>
         9a018:	e58d0004 	str	r0, [sp, #4]	; fField4
         9a01c:	e59d0000 	ldr	r0, [sp]
         9a020:	eb6ca465 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9a024:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         9a028:	e5900000 	ldr	r0, [r0]
         9a02c:	e3300002 	teq	r0, #2	; 0x2
         9a030:	1a000003 	bne	9a044 <TDocker::GetEntryFromID(unsigned long)+0x6c>
         9a034:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         9a038:	eb6ca45f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9a03c:	e3a00002 	mov	r0, #2	; 0x2
         9a040:	ea000003 	b	9a054 <TDocker::GetEntryFromID(unsigned long)+0x7c>
         9a044:	e1a04000 	mov	r4, r0
         9a048:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         9a04c:	eb6ca45a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9a050:	e1a00004 	mov	r0, r4
         9a054:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::DeleteEntries(void)
 * Address: 0009a058
 */
TDocker::DeleteEntries(void) {
    /*
         9a058:	e1a0c00d 	mov	ip, sp
         9a05c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         9a060:	e24cb004 	sub	fp, ip, #4	; 0x4
         9a064:	e1a04000 	mov	r4, r0
         9a068:	eb682c9e 	bl	1aa52e8 <TDocker::$VerifySoup(void)>
         9a06c:	e5940048 	ldr	r0, [r4, #72]	; fField72
         9a070:	eb6d2032 	bl	1be2140 <$NewPtr>
         9a074:	e1b05000 	movs	r5, r0
         9a078:	01a00004 	moveq	r0, r4
         9a07c:	0b68a031 	bleq	1ac2148 <TDocker::$OutOfMemory(void)>
         9a080:	e3a06000 	mov	r6, #0	; 0x0
         9a084:	e1a01005 	mov	r1, r5
         9a088:	e5942048 	ldr	r2, [r4, #72]	; fField72
         9a08c:	e1a00004 	mov	r0, r4
         9a090:	e3a03001 	mov	r3, #1	; 0x1
         9a094:	eb6813ac 	bl	1a9ef4c <TDocker::$ReadChunk(void *, long, unsigned char)>
         9a098:	e3a07000 	mov	r7, #0	; 0x0
         9a09c:	e5950000 	ldr	r0, [r5]
         9a0a0:	e3500000 	cmp	r0, #0	; 0x0
         9a0a4:	9a000012 	bls	9a0f4 <TDocker::DeleteEntries(void)+0x9c>
         9a0a8:	e24dd004 	sub	sp, sp, #4	; 0x4
         9a0ac:	e0850107 	add	r0, r5, r7, lsl #2
         9a0b0:	e5b01004 	ldr	r1, [r0, #4]!	; fField4
         9a0b4:	e1a00004 	mov	r0, r4
         9a0b8:	eb67ee80 	bl	1a95ac0 <TDocker::$GetEntryFromID(unsigned long)>
         9a0bc:	eb6ca022 	bl	1bc214c <$AllocateRefHandle(long)>
         9a0c0:	e58d0000 	str	r0, [sp]
         9a0c4:	e5900000 	ldr	r0, [r0]
         9a0c8:	e3300002 	teq	r0, #2	; 0x2
         9a0cc:	12866001 	addne	r6, r6, #1	; 0x1
         9a0d0:	11a0000d 	movne	r0, sp
         9a0d4:	1b6ca84c 	blne	1bc420c <$EntryRemoveFromSoup(RefVar const &)>
         9a0d8:	e59d0000 	ldr	r0, [sp]
         9a0dc:	eb6ca436 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9a0e0:	e28dd004 	add	sp, sp, #4	; 0x4
         9a0e4:	e2877001 	add	r7, r7, #1	; 0x1
         9a0e8:	e5950000 	ldr	r0, [r5]
         9a0ec:	e1570000 	cmp	r7, r0
         9a0f0:	3affffec 	bcc	9a0a8 <TDocker::DeleteEntries(void)+0x50>
         9a0f4:	e1a00005 	mov	r0, r5
         9a0f8:	eb6d1bed 	bl	1be10b4 <$DisposPtr>
         9a0fc:	e1a00004 	mov	r0, r4
         9a100:	e3a01000 	mov	r1, #0	; 0x0
         9a104:	eb688b48 	bl	1abce2c <TDocker::$WriteResult(long)>
         9a108:	e3560000 	cmp	r6, #0	; 0x0
         9a10c:	991ba8f0 	ldmlsdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         9a110:	e1a02006 	mov	r2, r6
         9a114:	e59f1008 	ldr	r1, [pc, #8]	; 9a124 <TDocker::DeleteEntries(void)+0xcc>
         9a118:	e1a00004 	mov	r0, r4
         9a11c:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         9a120:	ea6838bc 	b	1aa8418 <TDocker::$AddChangedSoup(RefVar const &, unsigned long)>
         9a124:	006828b0 	streqh	r2, [r8], -#128	; fField128
    */
}

/**
 * Symbol: TDocker::RefsEqual(RefVar const &, RefVar const &)
 * Address: 0009a128
 */
TDocker::RefsEqual(RefVar const &, RefVar const &) {
    /*
         9a128:	e1a0c00d 	mov	ip, sp
         9a12c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         9a130:	e24cb004 	sub	fp, ip, #4	; 0x4
         9a134:	e1a06000 	mov	r6, r0
         9a138:	e1a04001 	mov	r4, r1
         9a13c:	e1a05002 	mov	r5, r2
         9a140:	e1a00001 	mov	r0, r1
         9a144:	eb6d6611 	bl	1bf3990 <$IsFrame(RefVar const &)>
         9a148:	e3a09000 	mov	r9, #0	; 0x0
         9a14c:	e3300000 	teq	r0, #0	; 0x0
         9a150:	0a000009 	beq	9a17c <TDocker::RefsEqual(RefVar const &, RefVar const &)+0x54>
         9a154:	e1a00005 	mov	r0, r5
         9a158:	eb6d660c 	bl	1bf3990 <$IsFrame(RefVar const &)>
         9a15c:	e3300000 	teq	r0, #0	; 0x0
         9a160:	0a000052 	beq	9a2b0 <TDocker::RefsEqual(RefVar const &, RefVar const &)+0x188>
         9a164:	e1a02005 	mov	r2, r5
         9a168:	e1a01004 	mov	r1, r4
         9a16c:	e1a00006 	mov	r0, r6
         9a170:	e3a03000 	mov	r3, #0	; 0x0
         9a174:	e91b6bf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
         9a178:	ea685dd9 	b	1ab18e4 <TDocker::$FramesEqual(RefVar const &, RefVar const &, unsigned long)>
         9a17c:	e1a00004 	mov	r0, r4
         9a180:	eb6d6601 	bl	1bf398c <$IsArray(RefVar const &)>
         9a184:	e3300000 	teq	r0, #0	; 0x0
         9a188:	0a000037 	beq	9a26c <TDocker::RefsEqual(RefVar const &, RefVar const &)+0x144>
         9a18c:	e1a00005 	mov	r0, r5
         9a190:	eb6d65fd 	bl	1bf398c <$IsArray(RefVar const &)>
         9a194:	e3300000 	teq	r0, #0	; 0x0
         9a198:	0a000044 	beq	9a2b0 <TDocker::RefsEqual(RefVar const &, RefVar const &)+0x188>
         9a19c:	e5940000 	ldr	r0, [r4]
         9a1a0:	e5900000 	ldr	r0, [r0]
         9a1a4:	eb6cac40 	bl	1bc52ac <$Length(long)>
         9a1a8:	e1a07000 	mov	r7, r0
         9a1ac:	e5950000 	ldr	r0, [r5]
         9a1b0:	e5900000 	ldr	r0, [r0]
         9a1b4:	eb6cac3c 	bl	1bc52ac <$Length(long)>
         9a1b8:	e1370000 	teq	r7, r0
         9a1bc:	1a00003b 	bne	9a2b0 <TDocker::RefsEqual(RefVar const &, RefVar const &)+0x188>
         9a1c0:	e3a08000 	mov	r8, #0	; 0x0
         9a1c4:	e5940000 	ldr	r0, [r4]
         9a1c8:	e5900000 	ldr	r0, [r0]
         9a1cc:	eb6cac36 	bl	1bc52ac <$Length(long)>
         9a1d0:	e3500000 	cmp	r0, #0	; 0x0
         9a1d4:	da000022 	ble	9a264 <TDocker::RefsEqual(RefVar const &, RefVar const &)+0x13c>
         9a1d8:	e24dd008 	sub	sp, sp, #8	; 0x8
         9a1dc:	e5950000 	ldr	r0, [r5]
         9a1e0:	e5900000 	ldr	r0, [r0]
         9a1e4:	e1a01008 	mov	r1, r8
         9a1e8:	eb6ca819 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         9a1ec:	eb6c9fd6 	bl	1bc214c <$AllocateRefHandle(long)>
         9a1f0:	e58d0000 	str	r0, [sp]
         9a1f4:	e1a0700d 	mov	r7, sp
         9a1f8:	e5940000 	ldr	r0, [r4]
         9a1fc:	e5900000 	ldr	r0, [r0]
         9a200:	e1a01008 	mov	r1, r8
         9a204:	eb6ca812 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         9a208:	eb6c9fcf 	bl	1bc214c <$AllocateRefHandle(long)>
         9a20c:	e58d0004 	str	r0, [sp, #4]	; fField4
         9a210:	e28d1004 	add	r1, sp, #4	; 0x4
         9a214:	e1a00006 	mov	r0, r6
         9a218:	e1a02007 	mov	r2, r7
         9a21c:	eb687a7e 	bl	1ab8c1c <TDocker::$RefsEqual(RefVar const &, RefVar const &)>
         9a220:	e3300000 	teq	r0, #0	; 0x0
         9a224:	13a07000 	movne	r7, #0	; 0x0
         9a228:	03a07001 	moveq	r7, #1	; 0x1
         9a22c:	e59d0000 	ldr	r0, [sp]
         9a230:	eb6ca3e1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9a234:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         9a238:	eb6ca3df 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9a23c:	e3370000 	teq	r7, #0	; 0x0
         9a240:	11a00009 	movne	r0, r9
         9a244:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         9a248:	e28dd008 	add	sp, sp, #8	; 0x8
         9a24c:	e2888001 	add	r8, r8, #1	; 0x1
         9a250:	e5940000 	ldr	r0, [r4]
         9a254:	e5900000 	ldr	r0, [r0]
         9a258:	eb6cac13 	bl	1bc52ac <$Length(long)>
         9a25c:	e1500008 	cmp	r0, r8
         9a260:	caffffdc 	bgt	9a1d8 <TDocker::RefsEqual(RefVar const &, RefVar const &)+0xb0>
         9a264:	e3a00001 	mov	r0, #1	; 0x1
         9a268:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         9a26c:	e1a00004 	mov	r0, r4
         9a270:	eb6dac12 	bl	1c052c0 <$IsBinary(RefVar const &)>
         9a274:	e3300000 	teq	r0, #0	; 0x0
         9a278:	0a00003e 	beq	9a378 <TDocker::RefsEqual(RefVar const &, RefVar const &)+0x250>
         9a27c:	e1a00005 	mov	r0, r5
         9a280:	eb6dac0e 	bl	1c052c0 <$IsBinary(RefVar const &)>
         9a284:	e3300000 	teq	r0, #0	; 0x0
         9a288:	0a000008 	beq	9a2b0 <TDocker::RefsEqual(RefVar const &, RefVar const &)+0x188>
         9a28c:	e5940000 	ldr	r0, [r4]
         9a290:	e5900000 	ldr	r0, [r0]
         9a294:	eb6cac04 	bl	1bc52ac <$Length(long)>
         9a298:	e1a06000 	mov	r6, r0
         9a29c:	e5950000 	ldr	r0, [r5]
         9a2a0:	e5900000 	ldr	r0, [r0]
         9a2a4:	eb6cac00 	bl	1bc52ac <$Length(long)>
         9a2a8:	e1300006 	teq	r0, r6
         9a2ac:	0a000001 	beq	9a2b8 <TDocker::RefsEqual(RefVar const &, RefVar const &)+0x190>
         9a2b0:	e1a00009 	mov	r0, r9
         9a2b4:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         9a2b8:	e5940000 	ldr	r0, [r4]
         9a2bc:	e5900000 	ldr	r0, [r0]
         9a2c0:	eb6cabfb 	bl	1bc52b4 <$LockRef(long)>
         9a2c4:	e5950000 	ldr	r0, [r5]
         9a2c8:	e5900000 	ldr	r0, [r0]
         9a2cc:	eb6cabf8 	bl	1bc52b4 <$LockRef(long)>
         9a2d0:	e5940000 	ldr	r0, [r4]
         9a2d4:	e5900000 	ldr	r0, [r0]
         9a2d8:	eb6c9f9f 	bl	1bc215c <$BinaryData(long)>
         9a2dc:	e1a07000 	mov	r7, r0
         9a2e0:	e5950000 	ldr	r0, [r5]
         9a2e4:	e5900000 	ldr	r0, [r0]
         9a2e8:	eb6c9f9b 	bl	1bc215c <$BinaryData(long)>
         9a2ec:	e3a08001 	mov	r8, #1	; 0x1
         9a2f0:	e0871006 	add	r1, r7, r6
         9a2f4:	e3160003 	tst	r6, #3	; 0x3
         9a2f8:	1a00000a 	bne	9a328 <TDocker::RefsEqual(RefVar const &, RefVar const &)+0x200>
         9a2fc:	e1570001 	cmp	r7, r1
         9a300:	2a000014 	bcs	9a358 <TDocker::RefsEqual(RefVar const &, RefVar const &)+0x230>
         9a304:	e5972000 	ldr	r2, [r7]
         9a308:	e5903000 	ldr	r3, [r0]
         9a30c:	e1320003 	teq	r2, r3
         9a310:	1a00000a 	bne	9a340 <TDocker::RefsEqual(RefVar const &, RefVar const &)+0x218>
         9a314:	e2877004 	add	r7, r7, #4	; 0x4
         9a318:	e2800004 	add	r0, r0, #4	; 0x4
         9a31c:	e1570001 	cmp	r7, r1
         9a320:	3afffff7 	bcc	9a304 <TDocker::RefsEqual(RefVar const &, RefVar const &)+0x1dc>
         9a324:	ea00000b 	b	9a358 <TDocker::RefsEqual(RefVar const &, RefVar const &)+0x230>
         9a328:	e1570001 	cmp	r7, r1
         9a32c:	2a000009 	bcs	9a358 <TDocker::RefsEqual(RefVar const &, RefVar const &)+0x230>
         9a330:	e5d73000 	ldrb	r3, [r7]
         9a334:	e5d02000 	ldrb	r2, [r0]
         9a338:	e1330002 	teq	r3, r2
         9a33c:	0a000001 	beq	9a348 <TDocker::RefsEqual(RefVar const &, RefVar const &)+0x220>
         9a340:	e3a08000 	mov	r8, #0	; 0x0
         9a344:	ea000003 	b	9a358 <TDocker::RefsEqual(RefVar const &, RefVar const &)+0x230>
         9a348:	e2877001 	add	r7, r7, #1	; 0x1
         9a34c:	e2800001 	add	r0, r0, #1	; 0x1
         9a350:	e1570001 	cmp	r7, r1
         9a354:	3afffff5 	bcc	9a330 <TDocker::RefsEqual(RefVar const &, RefVar const &)+0x208>
         9a358:	e5940000 	ldr	r0, [r4]
         9a35c:	e5900000 	ldr	r0, [r0]
         9a360:	eb6cb842 	bl	1bc8470 <$UnlockRef(long)>
         9a364:	e5950000 	ldr	r0, [r5]
         9a368:	e5900000 	ldr	r0, [r0]
         9a36c:	eb6cb83f 	bl	1bc8470 <$UnlockRef(long)>
         9a370:	e1a00008 	mov	r0, r8
         9a374:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         9a378:	e5940000 	ldr	r0, [r4]
         9a37c:	e5900000 	ldr	r0, [r0]
         9a380:	e5951000 	ldr	r1, [r5]
         9a384:	e5911000 	ldr	r1, [r1]
         9a388:	e1300001 	teq	r0, r1
         9a38c:	13a00000 	movne	r0, #0	; 0x0
         9a390:	03a00001 	moveq	r0, #1	; 0x1
         9a394:	e20000ff 	and	r0, r0, #255	; 0xff
         9a398:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::FramesEqual(RefVar const &, RefVar const &, unsigned long)
 * Address: 0009a39c
 */
TDocker::FramesEqual(RefVar const &, RefVar const &, unsigned long) {
    /*
         9a39c:	e1a0c00d 	mov	ip, sp
         9a3a0:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         9a3a4:	e24cb004 	sub	fp, ip, #4	; 0x4
         9a3a8:	e1a04001 	mov	r4, r1
         9a3ac:	e1a07002 	mov	r7, r2
         9a3b0:	e1a05003 	mov	r5, r3
         9a3b4:	e24dd004 	sub	sp, sp, #4	; 0x4
         9a3b8:	e3a06001 	mov	r6, #1	; 0x1
         9a3bc:	e59f81b4 	ldr	r8, [pc, #1b4]	; 9a578 <TDocker::FramesEqual(RefVar const &, RefVar const &, unsigned long)+0x1dc>
         9a3c0:	e5980000 	ldr	r0, [r8]
         9a3c4:	e5901000 	ldr	r1, [r0]
         9a3c8:	e5940000 	ldr	r0, [r4]
         9a3cc:	e5900000 	ldr	r0, [r0]
         9a3d0:	eb6ca79c 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
         9a3d4:	e3300000 	teq	r0, #0	; 0x0
         9a3d8:	12455001 	subne	r5, r5, #1	; 0x1
         9a3dc:	e5980000 	ldr	r0, [r8]
         9a3e0:	e5901000 	ldr	r1, [r0]
         9a3e4:	e5970000 	ldr	r0, [r7]
         9a3e8:	e5900000 	ldr	r0, [r0]
         9a3ec:	eb6ca795 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
         9a3f0:	e3300000 	teq	r0, #0	; 0x0
         9a3f4:	12855001 	addne	r5, r5, #1	; 0x1
         9a3f8:	e5940000 	ldr	r0, [r4]
         9a3fc:	e5900000 	ldr	r0, [r0]
         9a400:	eb6caba9 	bl	1bc52ac <$Length(long)>
         9a404:	e0805005 	add	r5, r0, r5
         9a408:	e5970000 	ldr	r0, [r7]
         9a40c:	e5900000 	ldr	r0, [r0]
         9a410:	eb6caba5 	bl	1bc52ac <$Length(long)>
         9a414:	e1350000 	teq	r5, r0
         9a418:	13a06000 	movne	r6, #0	; 0x0
         9a41c:	1a000061 	bne	9a5a8 <TDocker::FramesEqual(RefVar const &, RefVar const &, unsigned long)+0x20c>
         9a420:	e24dd030 	sub	sp, sp, #48	; 0x30
         9a424:	e1a01007 	mov	r1, r7
         9a428:	e1a0000d 	mov	r0, sp
         9a42c:	e3a02000 	mov	r2, #0	; 0x0
         9a430:	eb6c9b2e 	bl	1bc10f0 <TObjectIterator::$__ct(RefVar const &, int)>
         9a434:	e1a0000d 	mov	r0, sp
         9a438:	eb6ca367 	bl	1bc31dc <TObjectIterator::$Done(void)>
         9a43c:	e51b1038 	ldr	r1, [fp, -#56]	; fField56
         9a440:	e2817024 	add	r7, r1, #36	; 0x24
         9a444:	e28d2008 	add	r2, sp, #8	; 0x8
         9a448:	e3300000 	teq	r0, #0	; 0x0
         9a44c:	e58d2030 	str	r2, [sp, #48]	; fField48
         9a450:	1a00004f 	bne	9a594 <TDocker::FramesEqual(RefVar const &, RefVar const &, unsigned long)+0x1f8>
         9a454:	e3a08000 	mov	r8, #0	; 0x0
         9a458:	e59f0118 	ldr	r0, [pc, #118]	; 9a578 <TDocker::FramesEqual(RefVar const &, RefVar const &, unsigned long)+0x1dc>
         9a45c:	e5900000 	ldr	r0, [r0]
         9a460:	e5901000 	ldr	r1, [r0]
         9a464:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         9a468:	e5900000 	ldr	r0, [r0]
         9a46c:	eb6ca76f 	bl	1bc4230 <$EQRef__FlT1>
         9a470:	e3300000 	teq	r0, #0	; 0x0
         9a474:	1a000040 	bne	9a57c <TDocker::FramesEqual(RefVar const &, RefVar const &, unsigned long)+0x1e0>
         9a478:	e5970000 	ldr	r0, [r7]
         9a47c:	e5900000 	ldr	r0, [r0]
         9a480:	e3300002 	teq	r0, #2	; 0x2
         9a484:	0a00001c 	beq	9a4fc <TDocker::FramesEqual(RefVar const &, RefVar const &, unsigned long)+0x160>
         9a488:	e3a05000 	mov	r5, #0	; 0x0
         9a48c:	eb6cab86 	bl	1bc52ac <$Length(long)>
         9a490:	e3500000 	cmp	r0, #0	; 0x0
         9a494:	da000016 	ble	9a4f4 <TDocker::FramesEqual(RefVar const &, RefVar const &, unsigned long)+0x158>
         9a498:	e5970000 	ldr	r0, [r7]
         9a49c:	e5900000 	ldr	r0, [r0]
         9a4a0:	e1a01005 	mov	r1, r5
         9a4a4:	eb6ca76a 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         9a4a8:	eb6c9f27 	bl	1bc214c <$AllocateRefHandle(long)>
         9a4ac:	e1a09000 	mov	r9, r0
         9a4b0:	e5901000 	ldr	r1, [r0]
         9a4b4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         9a4b8:	e5900000 	ldr	r0, [r0]
         9a4bc:	eb6ca75b 	bl	1bc4230 <$EQRef__FlT1>
         9a4c0:	e1b0a000 	movs	sl, r0
         9a4c4:	13a0a001 	movne	sl, #1	; 0x1
         9a4c8:	e1a00009 	mov	r0, r9
         9a4cc:	eb6ca33a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9a4d0:	e33a0000 	teq	sl, #0	; 0x0
         9a4d4:	13a08001 	movne	r8, #1	; 0x1
         9a4d8:	1a000005 	bne	9a4f4 <TDocker::FramesEqual(RefVar const &, RefVar const &, unsigned long)+0x158>
         9a4dc:	e2855001 	add	r5, r5, #1	; 0x1
         9a4e0:	e5970000 	ldr	r0, [r7]
         9a4e4:	e5900000 	ldr	r0, [r0]
         9a4e8:	eb6cab6f 	bl	1bc52ac <$Length(long)>
         9a4ec:	e1500005 	cmp	r0, r5
         9a4f0:	caffffe8 	bgt	9a498 <TDocker::FramesEqual(RefVar const &, RefVar const &, unsigned long)+0xfc>
         9a4f4:	e3380000 	teq	r8, #0	; 0x0
         9a4f8:	1a00001f 	bne	9a57c <TDocker::FramesEqual(RefVar const &, RefVar const &, unsigned long)+0x1e0>
         9a4fc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         9a500:	e5901000 	ldr	r1, [r0]
         9a504:	e5940000 	ldr	r0, [r4]
         9a508:	e5900000 	ldr	r0, [r0]
         9a50c:	eb6ca74d 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
         9a510:	e3300000 	teq	r0, #0	; 0x0
         9a514:	03a06000 	moveq	r6, #0	; 0x0
         9a518:	0a00001d 	beq	9a594 <TDocker::FramesEqual(RefVar const &, RefVar const &, unsigned long)+0x1f8>
         9a51c:	e24dd004 	sub	sp, sp, #4	; 0x4
         9a520:	e59d0008 	ldr	r0, [sp, #8]
         9a524:	e5901000 	ldr	r1, [r0]
         9a528:	e5940000 	ldr	r0, [r4]
         9a52c:	e5900000 	ldr	r0, [r0]
         9a530:	eb6ca74a 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         9a534:	eb6c9f04 	bl	1bc214c <$AllocateRefHandle(long)>
         9a538:	e58d0000 	str	r0, [sp]
         9a53c:	e1a0100d 	mov	r1, sp
         9a540:	e59d2034 	ldr	r2, [sp, #52]	; fField52
         9a544:	e51b0038 	ldr	r0, [fp, -#56]	; fField56
         9a548:	eb6879b3 	bl	1ab8c1c <TDocker::$RefsEqual(RefVar const &, RefVar const &)>
         9a54c:	e3300000 	teq	r0, #0	; 0x0
         9a550:	13a05000 	movne	r5, #0	; 0x0
         9a554:	03a05001 	moveq	r5, #1	; 0x1
         9a558:	e59d0000 	ldr	r0, [sp]
         9a55c:	eb6ca316 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9a560:	e3350000 	teq	r5, #0	; 0x0
         9a564:	028dd004 	addeq	sp, sp, #4	; 0x4
         9a568:	0a000003 	beq	9a57c <TDocker::FramesEqual(RefVar const &, RefVar const &, unsigned long)+0x1e0>
         9a56c:	e3a06000 	mov	r6, #0	; 0x0
         9a570:	e28dd004 	add	sp, sp, #4	; 0x4
         9a574:	ea000006 	b	9a594 <TDocker::FramesEqual(RefVar const &, RefVar const &, unsigned long)+0x1f8>
         9a578:	00685390 	streqb	r5, [r8], -#48	; fField48
         9a57c:	e1a0000d 	mov	r0, sp
         9a580:	eb6cab58 	bl	1bc52e8 <TObjectIterator::$Next(void)>
         9a584:	e1a0000d 	mov	r0, sp
         9a588:	eb6ca313 	bl	1bc31dc <TObjectIterator::$Done(void)>
         9a58c:	e3300000 	teq	r0, #0	; 0x0
         9a590:	0affffaf 	beq	9a454 <TDocker::FramesEqual(RefVar const &, RefVar const &, unsigned long)+0xb8>
         9a594:	e1a0000d 	mov	r0, sp
         9a598:	e3a01000 	mov	r1, #0	; 0x0
         9a59c:	e1a0e00f 	mov	lr, pc
         9a5a0:	e59df000 	ldr	pc, [sp]
         9a5a4:	e28dd030 	add	sp, sp, #48	; 0x30
         9a5a8:	e1a00006 	mov	r0, r6
         9a5ac:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::EntriesEqual(RefVar const &)
 * Address: 0009a5b0
 */
TDocker::EntriesEqual(RefVar const &) {
    /*
         9a5b0:	e1a0c00d 	mov	ip, sp
         9a5b4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         9a5b8:	e24cb004 	sub	fp, ip, #4	; 0x4
         9a5bc:	e1a05000 	mov	r5, r0
         9a5c0:	e1a04001 	mov	r4, r1
         9a5c4:	e59f0030 	ldr	r0, [pc, #30]	; 9a5fc <TDocker::EntriesEqual(RefVar const &)+0x4c>
         9a5c8:	e5900000 	ldr	r0, [r0]
         9a5cc:	e5901000 	ldr	r1, [r0]
         9a5d0:	e5940000 	ldr	r0, [r4]
         9a5d4:	e5900000 	ldr	r0, [r0]
         9a5d8:	eb6ca71a 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
         9a5dc:	e3300000 	teq	r0, #0	; 0x0
         9a5e0:	03e03000 	mvneq	r3, #0	; 0x0
         9a5e4:	13e03001 	mvnne	r3, #1	; 0x1
         9a5e8:	e2852018 	add	r2, r5, #24	; 0x18
         9a5ec:	e1a01004 	mov	r1, r4
         9a5f0:	e1a00005 	mov	r0, r5
         9a5f4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         9a5f8:	ea685cb9 	b	1ab18e4 <TDocker::$FramesEqual(RefVar const &, RefVar const &, unsigned long)>
         9a5fc:	00685360 	rsbeq	r5, r8, r0, ror #6
    */
}

/**
 * Symbol: TDocker::IsDuplicateEntry(RefVar const &)
 * Address: 0009a600
 */
TDocker::IsDuplicateEntry(RefVar const &) {
    /*
         9a600:	e1a0c00d 	mov	ip, sp
         9a604:	e92ddff3 	stmdb	sp!, {r0, r1, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         9a608:	e24cb004 	sub	fp, ip, #4	; 0x4
         9a60c:	e24dd008 	sub	sp, sp, #8	; 0x8
         9a610:	e59f12f0 	ldr	r1, [pc, #2f0]	; 9a908 <TDocker::IsDuplicateEntry(RefVar const &)+0x308>
         9a614:	e58d1004 	str	r1, [sp, #4]	; fField4
         9a618:	e51b002c 	ldr	r0, [fp, -#44]	; fField44
         9a61c:	eb6caf40 	bl	1bc6324 <$RemoveSlot__FRC6RefVarT1>
         9a620:	e59f12e4 	ldr	r1, [pc, #2e4]	; 9a90c <TDocker::IsDuplicateEntry(RefVar const &)+0x30c>
         9a624:	e51b002c 	ldr	r0, [fp, -#44]	; fField44
         9a628:	eb6caf3d 	bl	1bc6324 <$RemoveSlot__FRC6RefVarT1>
         9a62c:	e24dd008 	sub	sp, sp, #8	; 0x8
         9a630:	eb6c9ec2 	bl	1bc2140 <$AllocateFrame(void)>
         9a634:	eb6c9ec4 	bl	1bc214c <$AllocateRefHandle(long)>
         9a638:	e58d0004 	str	r0, [sp, #4]	; fField4
         9a63c:	e51b0030 	ldr	r0, [fp, -#48]	; fField48
         9a640:	e2800014 	add	r0, r0, #20	; 0x14
         9a644:	e58d0008 	str	r0, [sp, #8]
         9a648:	eb6cb355 	bl	1bc73a4 <$SoupGetName(RefVar const &)>
         9a64c:	eb6c9ebe 	bl	1bc214c <$AllocateRefHandle(long)>
         9a650:	e40d0100 	str	r0, [sp], -#256
         9a654:	e28d0c01 	add	r0, sp, #256	; 0x100
         9a658:	eb6ca2c9 	bl	1bc3184 <$GetCString(RefVar const &)>
         9a65c:	e1a0100d 	mov	r1, sp
         9a660:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
         9a664:	e3a02001 	mov	r2, #1	; 0x1
         9a668:	eb6d3344 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
         9a66c:	e51b0030 	ldr	r0, [fp, -#48]	; fField48
         9a670:	e2805024 	add	r5, r0, #36	; 0x24
         9a674:	e1a06005 	mov	r6, r5
         9a678:	e1a0000d 	mov	r0, sp
         9a67c:	eb6caaff 	bl	1bc5280 <$Intern(char *)>
         9a680:	eb6c9eb1 	bl	1bc214c <$AllocateRefHandle(long)>
         9a684:	e1a04000 	mov	r4, r0
         9a688:	e5901000 	ldr	r1, [r0]
         9a68c:	e59f027c 	ldr	r0, [pc, #27c]	; 9a910 <TDocker::IsDuplicateEntry(RefVar const &)+0x310>
         9a690:	e5900000 	ldr	r0, [r0]
         9a694:	e5900000 	ldr	r0, [r0]
         9a698:	eb6ca6f0 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         9a69c:	e5951000 	ldr	r1, [r5]
         9a6a0:	e5810000 	str	r0, [r1]
         9a6a4:	e1a00004 	mov	r0, r4
         9a6a8:	eb6ca2c3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9a6ac:	e28dd0fc 	add	sp, sp, #252	; 0xfc
         9a6b0:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         9a6b4:	eb6cb338 	bl	1bc739c <$SoupGetIndexes(RefVar const &)>
         9a6b8:	eb6c9ea3 	bl	1bc214c <$AllocateRefHandle(long)>
         9a6bc:	e1a04000 	mov	r4, r0
         9a6c0:	e3a00002 	mov	r0, #2	; 0x2
         9a6c4:	eb6c9ea0 	bl	1bc214c <$AllocateRefHandle(long)>
         9a6c8:	e58d0000 	str	r0, [sp]
         9a6cc:	e5940000 	ldr	r0, [r4]
         9a6d0:	e3300002 	teq	r0, #2	; 0x2
         9a6d4:	0a000071 	beq	9a8a0 <TDocker::IsDuplicateEntry(RefVar const &)+0x2a0>
         9a6d8:	eb6caaf3 	bl	1bc52ac <$Length(long)>
         9a6dc:	e3500000 	cmp	r0, #0	; 0x0
         9a6e0:	da00006e 	ble	9a8a0 <TDocker::IsDuplicateEntry(RefVar const &)+0x2a0>
         9a6e4:	e24dd008 	sub	sp, sp, #8	; 0x8
         9a6e8:	e3a00002 	mov	r0, #2	; 0x2
         9a6ec:	eb6c9e96 	bl	1bc214c <$AllocateRefHandle(long)>
         9a6f0:	e1a08000 	mov	r8, r0
         9a6f4:	e3a00002 	mov	r0, #2	; 0x2
         9a6f8:	eb6c9e93 	bl	1bc214c <$AllocateRefHandle(long)>
         9a6fc:	e58d0004 	str	r0, [sp, #4]	; fField4
         9a700:	e3a00002 	mov	r0, #2	; 0x2
         9a704:	eb6c9e90 	bl	1bc214c <$AllocateRefHandle(long)>
         9a708:	e3a05000 	mov	r5, #0	; 0x0
         9a70c:	e58d0000 	str	r0, [sp]
         9a710:	e5940000 	ldr	r0, [r4]
         9a714:	eb6caae4 	bl	1bc52ac <$Length(long)>
         9a718:	e3500000 	cmp	r0, #0	; 0x0
         9a71c:	da000058 	ble	9a884 <TDocker::IsDuplicateEntry(RefVar const &)+0x284>
         9a720:	e1a01005 	mov	r1, r5
         9a724:	e5940000 	ldr	r0, [r4]
         9a728:	eb6ca6c9 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         9a72c:	e5880000 	str	r0, [r8]
         9a730:	e59f11dc 	ldr	r1, [pc, #1dc]	; 9a914 <TDocker::IsDuplicateEntry(RefVar const &)+0x314>
         9a734:	e5911000 	ldr	r1, [r1]
         9a738:	e5911000 	ldr	r1, [r1]
         9a73c:	eb6ca6c7 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         9a740:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         9a744:	e5810000 	str	r0, [r1]
         9a748:	e59f01c8 	ldr	r0, [pc, #1c8]	; 9a918 <TDocker::IsDuplicateEntry(RefVar const &)+0x318>
         9a74c:	e5900000 	ldr	r0, [r0]
         9a750:	e5901000 	ldr	r1, [r0]
         9a754:	e5980000 	ldr	r0, [r8]
         9a758:	eb6ca6c0 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         9a75c:	e59d1000 	ldr	r1, [sp]
         9a760:	e5810000 	str	r0, [r1]
         9a764:	e59f01b0 	ldr	r0, [pc, #1b0]	; 9a91c <TDocker::IsDuplicateEntry(RefVar const &)+0x31c>
         9a768:	e5900000 	ldr	r0, [r0]
         9a76c:	e5901000 	ldr	r1, [r0]
         9a770:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         9a774:	e5900000 	ldr	r0, [r0]
         9a778:	eb6ca6ac 	bl	1bc4230 <$EQRef__FlT1>
         9a77c:	e3300000 	teq	r0, #0	; 0x0
         9a780:	1a00003a 	bne	9a870 <TDocker::IsDuplicateEntry(RefVar const &)+0x270>
         9a784:	e59f0194 	ldr	r0, [pc, #194]	; 9a920 <TDocker::IsDuplicateEntry(RefVar const &)+0x320>
         9a788:	e5900000 	ldr	r0, [r0]
         9a78c:	e5901000 	ldr	r1, [r0]
         9a790:	e59d0000 	ldr	r0, [sp]
         9a794:	e5900000 	ldr	r0, [r0]
         9a798:	eb6ca6a4 	bl	1bc4230 <$EQRef__FlT1>
         9a79c:	e3300000 	teq	r0, #0	; 0x0
         9a7a0:	1a000032 	bne	9a870 <TDocker::IsDuplicateEntry(RefVar const &)+0x270>
         9a7a4:	e1a01005 	mov	r1, r5
         9a7a8:	e5940000 	ldr	r0, [r4]
         9a7ac:	eb6ca6a8 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         9a7b0:	eb6c9e65 	bl	1bc214c <$AllocateRefHandle(long)>
         9a7b4:	e1a07000 	mov	r7, r0
         9a7b8:	e59f0164 	ldr	r0, [pc, #164]	; 9a924 <TDocker::IsDuplicateEntry(RefVar const &)+0x324>	; fField164
         9a7bc:	e5900000 	ldr	r0, [r0]
         9a7c0:	e5901000 	ldr	r1, [r0]
         9a7c4:	e5970000 	ldr	r0, [r7]
         9a7c8:	eb6ca6a4 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         9a7cc:	e59d1008 	ldr	r1, [sp, #8]
         9a7d0:	e5810000 	str	r0, [r1]
         9a7d4:	e1a00007 	mov	r0, r7
         9a7d8:	eb6ca277 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9a7dc:	e5960000 	ldr	r0, [r6]
         9a7e0:	e5900000 	ldr	r0, [r0]
         9a7e4:	e3300002 	teq	r0, #2	; 0x2
         9a7e8:	0a00001c 	beq	9a860 <TDocker::IsDuplicateEntry(RefVar const &)+0x260>
         9a7ec:	e3a07000 	mov	r7, #0	; 0x0
         9a7f0:	eb6caaad 	bl	1bc52ac <$Length(long)>
         9a7f4:	e3500000 	cmp	r0, #0	; 0x0
         9a7f8:	da000018 	ble	9a860 <TDocker::IsDuplicateEntry(RefVar const &)+0x260>
         9a7fc:	e5960000 	ldr	r0, [r6]
         9a800:	e5900000 	ldr	r0, [r0]
         9a804:	e1a01007 	mov	r1, r7
         9a808:	eb6ca691 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         9a80c:	eb6c9e4e 	bl	1bc214c <$AllocateRefHandle(long)>
         9a810:	e1a09000 	mov	r9, r0
         9a814:	e5901000 	ldr	r1, [r0]
         9a818:	e59d0008 	ldr	r0, [sp, #8]
         9a81c:	e5900000 	ldr	r0, [r0]
         9a820:	eb6ca682 	bl	1bc4230 <$EQRef__FlT1>
         9a824:	e1b0a000 	movs	sl, r0
         9a828:	13a0a001 	movne	sl, #1	; 0x1
         9a82c:	e1a00009 	mov	r0, r9
         9a830:	eb6ca261 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9a834:	e33a0000 	teq	sl, #0	; 0x0
         9a838:	13a01002 	movne	r1, #2	; 0x2
         9a83c:	159d0008 	ldrne	r0, [sp, #8]
         9a840:	15801000 	strne	r1, [r0]
         9a844:	1a000005 	bne	9a860 <TDocker::IsDuplicateEntry(RefVar const &)+0x260>
         9a848:	e2877001 	add	r7, r7, #1	; 0x1
         9a84c:	e5960000 	ldr	r0, [r6]
         9a850:	e5900000 	ldr	r0, [r0]
         9a854:	eb6caa94 	bl	1bc52ac <$Length(long)>
         9a858:	e1500007 	cmp	r0, r7
         9a85c:	caffffe6 	bgt	9a7fc <TDocker::IsDuplicateEntry(RefVar const &)+0x1fc>
         9a860:	e59d0008 	ldr	r0, [sp, #8]
         9a864:	e5900000 	ldr	r0, [r0]
         9a868:	e3300002 	teq	r0, #2	; 0x2
         9a86c:	1a000004 	bne	9a884 <TDocker::IsDuplicateEntry(RefVar const &)+0x284>
         9a870:	e2855001 	add	r5, r5, #1	; 0x1
         9a874:	e5940000 	ldr	r0, [r4]
         9a878:	eb6caa8b 	bl	1bc52ac <$Length(long)>
         9a87c:	e1500005 	cmp	r0, r5
         9a880:	caffffa6 	bgt	9a720 <TDocker::IsDuplicateEntry(RefVar const &)+0x120>
         9a884:	e59d0000 	ldr	r0, [sp]
         9a888:	eb6ca24b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9a88c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         9a890:	eb6ca249 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9a894:	e1a00008 	mov	r0, r8
         9a898:	eb6ca247 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9a89c:	e28dd008 	add	sp, sp, #8	; 0x8
         9a8a0:	e59d0000 	ldr	r0, [sp]
         9a8a4:	e5900000 	ldr	r0, [r0]
         9a8a8:	e59f1078 	ldr	r1, [pc, #78]	; 9a928 <TDocker::IsDuplicateEntry(RefVar const &)+0x328>
         9a8ac:	e3300002 	teq	r0, #2	; 0x2
         9a8b0:	0a00001f 	beq	9a934 <TDocker::IsDuplicateEntry(RefVar const &)+0x334>
         9a8b4:	e1a0200d 	mov	r2, sp
         9a8b8:	e28d0008 	add	r0, sp, #8	; 0x8
         9a8bc:	eb6caea9 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         9a8c0:	e24dd004 	sub	sp, sp, #4	; 0x4
         9a8c4:	e28d1004 	add	r1, sp, #4	; 0x4
         9a8c8:	e51b002c 	ldr	r0, [fp, -#44]	; fField44
         9a8cc:	eb6ca662 	bl	1bc425c <$GetFramePath__FRC6RefVarT1>
         9a8d0:	eb6c9e1d 	bl	1bc214c <$AllocateRefHandle(long)>
         9a8d4:	e58d0000 	str	r0, [sp]
         9a8d8:	e1a0200d 	mov	r2, sp
         9a8dc:	e59f1048 	ldr	r1, [pc, #48]	; 9a92c <TDocker::IsDuplicateEntry(RefVar const &)+0x32c>	; fField48
         9a8e0:	e28d000c 	add	r0, sp, #12	; 0xc
         9a8e4:	eb6cae9f 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         9a8e8:	e1a0200d 	mov	r2, sp
         9a8ec:	e59f103c 	ldr	r1, [pc, #3c]	; 9a930 <TDocker::IsDuplicateEntry(RefVar const &)+0x330>
         9a8f0:	e28d000c 	add	r0, sp, #12	; 0xc
         9a8f4:	eb6cae9b 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         9a8f8:	e59d0000 	ldr	r0, [sp]
         9a8fc:	eb6ca22e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9a900:	e28dd004 	add	sp, sp, #4	; 0x4
         9a904:	ea00000d 	b	9a940 <TDocker::IsDuplicateEntry(RefVar const &)+0x340>
         9a908:	006853d0 	ldreqd	r5, [r8], -#48	; fField48
         9a90c:	00685360 	rsbeq	r5, r8, r0, ror #6
         9a910:	00680200 	rsbeq	r0, r8, r0, lsl #4
         9a914:	00684cb0 	streqh	r4, [r8], -#192
         9a918:	00684910 	rsbeq	r4, r8, r0, lsl r9
         9a91c:	00684a48 	rsbeq	r4, r8, r8, asr #20
         9a920:	00683998 	streqb	r3, [r8], -#152	; fField152
         9a924:	00683d70 	rsbeq	r3, r8, r0, ror sp
         9a928:	006831e8 	rsbeq	r3, r8, r8, ror #3
         9a92c:	00682080 	rsbeq	r2, r8, r0, lsl #1
         9a930:	00682b80 	rsbeq	r2, r8, r0, lsl #23
         9a934:	e59d2010 	ldr	r2, [sp, #16]	; fField16
         9a938:	e28d0008 	add	r0, sp, #8	; 0x8
         9a93c:	eb6cae89 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         9a940:	e51b0030 	ldr	r0, [fp, -#48]	; fField48
         9a944:	e59f50b0 	ldr	r5, [pc, #b0]	; 9a9fc <TDocker::IsDuplicateEntry(RefVar const &)+0x3fc>
         9a948:	e5850000 	str	r0, [r5]
         9a94c:	e59f20ac 	ldr	r2, [pc, #ac]	; 9aa00 <TDocker::IsDuplicateEntry(RefVar const &)+0x400>
         9a950:	e59f10ac 	ldr	r1, [pc, #ac]	; 9aa04 <TDocker::IsDuplicateEntry(RefVar const &)+0x404>
         9a954:	e28d0008 	add	r0, sp, #8	; 0x8
         9a958:	eb6cae82 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         9a95c:	e24b1030 	sub	r1, fp, #48	; 0x30
         9a960:	e8910003 	ldmia	r1, {r0, r1}
         9a964:	e5911000 	ldr	r1, [r1]
         9a968:	e5911000 	ldr	r1, [r1]
         9a96c:	e5900018 	ldr	r0, [r0, #24]	; fField24
         9a970:	e5801000 	str	r1, [r0]
         9a974:	e24dd004 	sub	sp, sp, #4	; 0x4
         9a978:	e59d0010 	ldr	r0, [sp, #16]	; fField16
         9a97c:	e28d100c 	add	r1, sp, #12	; 0xc
         9a980:	eb0a9389 	bl	33f7ac <SoupQuery__FRC6RefVarT1>
         9a984:	eb6c9df0 	bl	1bc214c <$AllocateRefHandle(long)>
         9a988:	e58d0000 	str	r0, [sp]
         9a98c:	e3a00000 	mov	r0, #0	; 0x0
         9a990:	e59d1000 	ldr	r1, [sp]
         9a994:	e5911000 	ldr	r1, [r1]
         9a998:	e3310002 	teq	r1, #2	; 0x2
         9a99c:	0a000004 	beq	9a9b4 <TDocker::IsDuplicateEntry(RefVar const &)+0x3b4>
         9a9a0:	e1a0000d 	mov	r0, sp
         9a9a4:	eb6ca1f8 	bl	1bc318c <$CursorEntry(RefVar const &)>
         9a9a8:	e2500002 	subs	r0, r0, #2	; 0x2
         9a9ac:	13a00001 	movne	r0, #1	; 0x1
         9a9b0:	e20000ff 	and	r0, r0, #255	; 0xff
         9a9b4:	e3a01000 	mov	r1, #0	; 0x0
         9a9b8:	e5851000 	str	r1, [r5]
         9a9bc:	e3a01002 	mov	r1, #2	; 0x2
         9a9c0:	e5962000 	ldr	r2, [r6]
         9a9c4:	e1a05000 	mov	r5, r0
         9a9c8:	e5821000 	str	r1, [r2]
         9a9cc:	e59d0000 	ldr	r0, [sp]
         9a9d0:	eb6ca1f9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9a9d4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         9a9d8:	eb6ca1f7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9a9dc:	e1a00004 	mov	r0, r4
         9a9e0:	eb6ca1f5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9a9e4:	e59d0008 	ldr	r0, [sp, #8]
         9a9e8:	eb6ca1f3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9a9ec:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         9a9f0:	eb6ca1f1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9a9f4:	e1a00005 	mov	r0, r5
         9a9f8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         9a9fc:	0c100cb8 	ldceq	12, cr0, [r0], -#736
         9aa00:	00681b40 	rsbeq	r1, r8, r0, asr #22
         9aa04:	00684e90 	streqb	r4, [r8], -#224
    */
}

/**
 * Symbol: TDocker::ConvertEntry(RefVar const &)
 * Address: 0009aa08
 */
TDocker::ConvertEntry(RefVar const &) {
    /*
         9aa08:	e1a0c00d 	mov	ip, sp
         9aa0c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         9aa10:	e24cb004 	sub	fp, ip, #4	; 0x4
         9aa14:	e1a04000 	mov	r4, r0
         9aa18:	e1a05001 	mov	r5, r1
         9aa1c:	e24dd004 	sub	sp, sp, #4	; 0x4
         9aa20:	e3a00002 	mov	r0, #2	; 0x2
         9aa24:	eb6c9dc8 	bl	1bc214c <$AllocateRefHandle(long)>
         9aa28:	e58d0000 	str	r0, [sp]
         9aa2c:	e3a00002 	mov	r0, #2	; 0x2
         9aa30:	eb6c9dc5 	bl	1bc214c <$AllocateRefHandle(long)>
         9aa34:	e1a07000 	mov	r7, r0
         9aa38:	e5940060 	ldr	r0, [r4, #96]	; fField96
         9aa3c:	e3300001 	teq	r0, #1	; 0x1
         9aa40:	1a000006 	bne	9aa60 <TDocker::ConvertEntry(RefVar const &)+0x58>
         9aa44:	e59f0010 	ldr	r0, [pc, #10]	; 9aa5c <TDocker::ConvertEntry(RefVar const &)+0x54>
         9aa48:	e5900000 	ldr	r0, [r0]
         9aa4c:	e5901000 	ldr	r1, [r0]
         9aa50:	e59d0000 	ldr	r0, [sp]
         9aa54:	e5801000 	str	r1, [r0]
         9aa58:	ea000005 	b	9aa74 <TDocker::ConvertEntry(RefVar const &)+0x6c>
         9aa5c:	00683b40 	rsbeq	r3, r8, r0, asr #22
         9aa60:	e59f00f4 	ldr	r0, [pc, #f4]	; 9ab5c <TDocker::ConvertEntry(RefVar const &)+0x154>
         9aa64:	e5900000 	ldr	r0, [r0]
         9aa68:	e5900000 	ldr	r0, [r0]
         9aa6c:	e59d1000 	ldr	r1, [sp]
         9aa70:	e5810000 	str	r0, [r1]
         9aa74:	e3a09000 	mov	r9, #0	; 0x0
         9aa78:	e52d906c 	str	r9, [sp, -#108]!	; fField108
         9aa7c:	e28d0008 	add	r0, sp, #8	; 0x8
         9aa80:	eb6c5fbb 	bl	1bb2974 <$setjmp>
         9aa84:	e3300000 	teq	r0, #0	; 0x0
         9aa88:	1a00005a 	bne	9abf8 <TDocker::ConvertEntry(RefVar const &)+0x1f0>
         9aa8c:	e1a0000d 	mov	r0, sp
         9aa90:	eb6d1579 	bl	1be007c <$AddExceptionHandler>
         9aa94:	e2840070 	add	r0, r4, #112	; 0x70
         9aa98:	e1a06000 	mov	r6, r0
         9aa9c:	e5900000 	ldr	r0, [r0]
         9aaa0:	e284806c 	add	r8, r4, #108	; 0x6c
         9aaa4:	e5901000 	ldr	r1, [r0]
         9aaa8:	e3310002 	teq	r1, #2	; 0x2
         9aaac:	05981000 	ldreq	r1, [r8]
         9aab0:	05911000 	ldreq	r1, [r1]
         9aab4:	03310002 	teqeq	r1, #2	; 0x2
         9aab8:	1a00002d 	bne	9ab74 <TDocker::ConvertEntry(RefVar const &)+0x16c>
         9aabc:	e5d4102d 	ldrb	r1, [r4, #45]	; fField45
         9aac0:	e3310000 	teq	r1, #0	; 0x0
         9aac4:	159f1094 	ldrne	r1, [pc, #94]	; 9ab60 <TDocker::ConvertEntry(RefVar const &)+0x158>
         9aac8:	1a000003 	bne	9aadc <TDocker::ConvertEntry(RefVar const &)+0xd4>
         9aacc:	e5d4102c 	ldrb	r1, [r4, #44]	; fField44
         9aad0:	e3310000 	teq	r1, #0	; 0x0
         9aad4:	0a000003 	beq	9aae8 <TDocker::ConvertEntry(RefVar const &)+0xe0>
         9aad8:	e59f1084 	ldr	r1, [pc, #84]	; 9ab64 <TDocker::ConvertEntry(RefVar const &)+0x15c>	; fField84
         9aadc:	e5911000 	ldr	r1, [r1]
         9aae0:	e5911000 	ldr	r1, [r1]
         9aae4:	e5801000 	str	r1, [r0]
         9aae8:	e5960000 	ldr	r0, [r6]
         9aaec:	e5900000 	ldr	r0, [r0]
         9aaf0:	e3300002 	teq	r0, #2	; 0x2
         9aaf4:	1a00000d 	bne	9ab30 <TDocker::ConvertEntry(RefVar const &)+0x128>
         9aaf8:	e24dd004 	sub	sp, sp, #4	; 0x4
         9aafc:	e1a0a006 	mov	sl, r6
         9ab00:	e2840014 	add	r0, r4, #20	; 0x14
         9ab04:	eb6cb226 	bl	1bc73a4 <$SoupGetName(RefVar const &)>
         9ab08:	eb6c9d8f 	bl	1bc214c <$AllocateRefHandle(long)>
         9ab0c:	e58d0000 	str	r0, [sp]
         9ab10:	e1a0100d 	mov	r1, sp
         9ab14:	e59f004c 	ldr	r0, [pc, #4c]	; 9ab68 <TDocker::ConvertEntry(RefVar const &)+0x160>	; fField4
         9ab18:	eb6d9540 	bl	1c00020 <$NSCallGlobalFn__FRC6RefVarT1>
         9ab1c:	e59a1000 	ldr	r1, [sl]
         9ab20:	e5810000 	str	r0, [r1]
         9ab24:	e59d0000 	ldr	r0, [sp]
         9ab28:	eb6ca1a3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9ab2c:	e28dd004 	add	sp, sp, #4	; 0x4
         9ab30:	e5960000 	ldr	r0, [r6]
         9ab34:	e5901000 	ldr	r1, [r0]
         9ab38:	e3310002 	teq	r1, #2	; 0x2
         9ab3c:	0a00000b 	beq	9ab70 <TDocker::ConvertEntry(RefVar const &)+0x168>
         9ab40:	e1a04008 	mov	r4, r8
         9ab44:	e1a01006 	mov	r1, r6
         9ab48:	e59f001c 	ldr	r0, [pc, #1c]	; 9ab6c <TDocker::ConvertEntry(RefVar const &)+0x164>
         9ab4c:	eb6d9533 	bl	1c00020 <$NSCallGlobalFn__FRC6RefVarT1>
         9ab50:	e5941000 	ldr	r1, [r4]
         9ab54:	e5810000 	str	r0, [r1]
         9ab58:	ea000005 	b	9ab74 <TDocker::ConvertEntry(RefVar const &)+0x16c>
         9ab5c:	00684d28 	rsbeq	r4, r8, r8, lsr #26
         9ab60:	006849b8 	streqh	r4, [r8], -#152	; fField152
         9ab64:	006849c0 	rsbeq	r4, r8, r0, asr #19
         9ab68:	00682fc8 	rsbeq	r2, r8, r8, asr #31
         9ab6c:	00682f70 	rsbeq	r2, r8, r0, ror pc
         9ab70:	e5809000 	str	r9, [r0]
         9ab74:	e5980000 	ldr	r0, [r8]
         9ab78:	e5900000 	ldr	r0, [r0]
         9ab7c:	e3300002 	teq	r0, #2	; 0x2
         9ab80:	0a000018 	beq	9abe8 <TDocker::ConvertEntry(RefVar const &)+0x1e0>
         9ab84:	e5960000 	ldr	r0, [r6]
         9ab88:	e5900000 	ldr	r0, [r0]
         9ab8c:	eb6ca9c4 	bl	1bc52a4 <$IsSymbol(long)>
         9ab90:	e3300000 	teq	r0, #0	; 0x0
         9ab94:	0a000013 	beq	9abe8 <TDocker::ConvertEntry(RefVar const &)+0x1e0>
         9ab98:	e24dd004 	sub	sp, sp, #4	; 0x4
         9ab9c:	e3a0001a 	mov	r0, #26	; 0x1a
         9aba0:	eb6c9d69 	bl	1bc214c <$AllocateRefHandle(long)>
         9aba4:	e58d0000 	str	r0, [sp]
         9aba8:	e1a0300d 	mov	r3, sp
         9abac:	e1a02005 	mov	r2, r5
         9abb0:	e59f1028 	ldr	r1, [pc, #28]	; 9abe0 <TDocker::ConvertEntry(RefVar const &)+0x1d8>	; fField28
         9abb4:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         9abb8:	e1a02008 	mov	r2, r8
         9abbc:	e1a01006 	mov	r1, r6
         9abc0:	e28d307c 	add	r3, sp, #124	; 0x7c
         9abc4:	e59f0018 	ldr	r0, [pc, #18]	; 9abe4 <TDocker::ConvertEntry(RefVar const &)+0x1dc>
         9abc8:	eb6d9519 	bl	1c00034 <$NSCallGlobalFn__FRC6RefVarN61>
         9abcc:	e5870000 	str	r0, [r7]
         9abd0:	e5bd000c 	ldr	r0, [sp, #12]!	; fField12
         9abd4:	eb6ca178 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9abd8:	e28dd004 	add	sp, sp, #4	; 0x4
         9abdc:	ea00000b 	b	9ac10 <TDocker::ConvertEntry(RefVar const &)+0x208>
         9abe0:	00684c90 	streqb	r4, [r8], -#192
         9abe4:	00682630 	rsbeq	r2, r8, r0, lsr r6
         9abe8:	e5950000 	ldr	r0, [r5]
         9abec:	e5900000 	ldr	r0, [r0]
         9abf0:	e5870000 	str	r0, [r7]
         9abf4:	ea000005 	b	9ac10 <TDocker::ConvertEntry(RefVar const &)+0x208>
         9abf8:	e3a00002 	mov	r0, #2	; 0x2
         9abfc:	e5870000 	str	r0, [r7]
         9ac00:	e59f1030 	ldr	r1, [pc, #30]	; 9ac38 <TDocker::ConvertEntry(RefVar const &)+0x230>
         9ac04:	e1a00004 	mov	r0, r4
         9ac08:	e3a02001 	mov	r2, #1	; 0x1
         9ac0c:	eb683601 	bl	1aa8418 <TDocker::$AddChangedSoup(RefVar const &, unsigned long)>
         9ac10:	e1a0000d 	mov	r0, sp
         9ac14:	eb6d1927 	bl	1be10b8 <$ExitHandler>
         9ac18:	e28dd06c 	add	sp, sp, #108	; 0x6c
         9ac1c:	e5974000 	ldr	r4, [r7]
         9ac20:	e1a00007 	mov	r0, r7
         9ac24:	eb6ca164 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9ac28:	e59d0000 	ldr	r0, [sp]
         9ac2c:	eb6ca162 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9ac30:	e1a00004 	mov	r0, r4
         9ac34:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         9ac38:	00682610 	rsbeq	r2, r8, r0, lsl r6
    */
}

/**
 * Symbol: TDocker::AddEntry(unsigned char)
 * Address: 0009ac3c
 */
TDocker::AddEntry(unsigned char) {
    /*
         9ac3c:	e1a0c00d 	mov	ip, sp
         9ac40:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         9ac44:	e24cb004 	sub	fp, ip, #4	; 0x4
         9ac48:	e1a04000 	mov	r4, r0
         9ac4c:	e20180ff 	and	r8, r1, #255	; 0xff
         9ac50:	eb6829a4 	bl	1aa52e8 <TDocker::$VerifySoup(void)>
         9ac54:	e24dd004 	sub	sp, sp, #4	; 0x4
         9ac58:	e2841010 	add	r1, r4, #16	; 0x10
         9ac5c:	e1a00004 	mov	r0, r4
         9ac60:	eb6873e2 	bl	1ab7bf0 <TDocker::$ReadRef(RefVar const &)>
         9ac64:	eb6c9d38 	bl	1bc214c <$AllocateRefHandle(long)>
         9ac68:	e58d0000 	str	r0, [sp]
         9ac6c:	e5900000 	ldr	r0, [r0]
         9ac70:	e3a0a000 	mov	sl, #0	; 0x0
         9ac74:	e3300002 	teq	r0, #2	; 0x2
         9ac78:	1a000007 	bne	9ac9c <TDocker::AddEntry(unsigned char)+0x60>
         9ac7c:	e59f0010 	ldr	r0, [pc, #10]	; 9ac94 <TDocker::AddEntry(unsigned char)+0x58>
         9ac80:	e5900000 	ldr	r0, [r0]
         9ac84:	e3a02000 	mov	r2, #0	; 0x0
         9ac88:	e59f1008 	ldr	r1, [pc, #8]	; 9ac98 <TDocker::AddEntry(unsigned char)+0x5c>
         9ac8c:	eb6d2142 	bl	1be319c <$Throw>
         9ac90:	ea0000ca 	b	9afc0 <TDocker::AddEntry(unsigned char)+0x384>
         9ac94:	003712d0 	ldreqsb	r1, [r7], -r0
         9ac98:	ffff929b 	swinv	0x00ff929b
         9ac9c:	e3a09000 	mov	r9, #0	; 0x0
         9aca0:	e3a07000 	mov	r7, #0	; 0x0
         9aca4:	e3e06000 	mvn	r6, #0	; 0x0
         9aca8:	e5940060 	ldr	r0, [r4, #96]	; fField96
         9acac:	e3300002 	teq	r0, #2	; 0x2
         9acb0:	0a000006 	beq	9acd0 <TDocker::AddEntry(unsigned char)+0x94>
         9acb4:	e3a07001 	mov	r7, #1	; 0x1
         9acb8:	e1a0100d 	mov	r1, sp
         9acbc:	e1a00004 	mov	r0, r4
         9acc0:	eb684242 	bl	1aab5d0 <TDocker::$ConvertEntry(RefVar const &)>
         9acc4:	e59d1000 	ldr	r1, [sp]
         9acc8:	e5810000 	str	r0, [r1]
         9accc:	ea00005d 	b	9ae48 <TDocker::AddEntry(unsigned char)+0x20c>
         9acd0:	e5d4002d 	ldrb	r0, [r4, #45]	; fField45
         9acd4:	e3300000 	teq	r0, #0	; 0x0
         9acd8:	0a00005a 	beq	9ae48 <TDocker::AddEntry(unsigned char)+0x20c>
         9acdc:	e5940068 	ldr	r0, [r4, #104]	; fField104
         9ace0:	e594105c 	ldr	r1, [r4, #92]	; fField92
         9ace4:	e1310000 	teq	r1, r0
         9ace8:	05940064 	ldreq	r0, [r4, #100]	; fField100
         9acec:	05941058 	ldreq	r1, [r4, #88]	; fField88
         9acf0:	01310000 	teqeq	r1, r0
         9acf4:	0a000004 	beq	9ad0c <TDocker::AddEntry(unsigned char)+0xd0>
         9acf8:	e1a0100d 	mov	r1, sp
         9acfc:	e59f01ec 	ldr	r0, [pc, #1ec]	; 9aef0 <TDocker::AddEntry(unsigned char)+0x2b4>
         9ad00:	eb6d94c6 	bl	1c00020 <$NSCallGlobalFn__FRC6RefVarT1>
         9ad04:	e59d1000 	ldr	r1, [sp]
         9ad08:	e5810000 	str	r0, [r1]
         9ad0c:	e59d0000 	ldr	r0, [sp]
         9ad10:	e5900000 	ldr	r0, [r0]
         9ad14:	e3300002 	teq	r0, #2	; 0x2
         9ad18:	0a00004f 	beq	9ae5c <TDocker::AddEntry(unsigned char)+0x220>
         9ad1c:	e24dd004 	sub	sp, sp, #4	; 0x4
         9ad20:	e59f11cc 	ldr	r1, [pc, #1cc]	; 9aef4 <TDocker::AddEntry(unsigned char)+0x2b8>
         9ad24:	e5911000 	ldr	r1, [r1]
         9ad28:	e5911000 	ldr	r1, [r1]
         9ad2c:	eb6ca54b 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         9ad30:	eb6c9d05 	bl	1bc214c <$AllocateRefHandle(long)>
         9ad34:	e58d0000 	str	r0, [sp]
         9ad38:	e5900000 	ldr	r0, [r0]
         9ad3c:	e3300002 	teq	r0, #2	; 0x2
         9ad40:	0a00003d 	beq	9ae3c <TDocker::AddEntry(unsigned char)+0x200>
         9ad44:	e24dd02c 	sub	sp, sp, #44	; 0x2c
         9ad48:	e28f0f6a 	add	r0, pc, #424	; 0x1a8
         9ad4c:	eb6ca95f 	bl	1bc52d0 <$MakeString(char const *)>
         9ad50:	eb6c9cfd 	bl	1bc214c <$AllocateRefHandle(long)>
         9ad54:	e58d0000 	str	r0, [sp]
         9ad58:	e1a0100d 	mov	r1, sp
         9ad5c:	e28d0004 	add	r0, sp, #4	; 0x4
         9ad60:	eb04472e 	bl	1aca20 <TRichString::__ct(RefVar const &)>
         9ad64:	e59d0000 	ldr	r0, [sp]
         9ad68:	eb6ca113 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9ad6c:	e24dd028 	sub	sp, sp, #40	; 0x28
         9ad70:	e28d1054 	add	r1, sp, #84	; 0x54
         9ad74:	e1a0000d 	mov	r0, sp
         9ad78:	eb044728 	bl	1aca20 <TRichString::__ct(RefVar const &)>
         9ad7c:	e3a03000 	mov	r3, #0	; 0x0
         9ad80:	e92d0008 	stmdb	sp!, {r3}
         9ad84:	e3e03000 	mvn	r3, #0	; 0x0
         9ad88:	e1a0200a 	mov	r2, sl
         9ad8c:	e28d1030 	add	r1, sp, #48	; 0x30
         9ad90:	e28d0004 	add	r0, sp, #4	; 0x4
         9ad94:	eb6c35ad 	bl	1ba8450 <TRichString::$CompareSubStringCommon( const(TRichString const &, unsigned long, long, unsigned char))>
         9ad98:	e28dd004 	add	sp, sp, #4	; 0x4
         9ad9c:	e3300000 	teq	r0, #0	; 0x0
         9ada0:	13a05000 	movne	r5, #0	; 0x0
         9ada4:	03a05001 	moveq	r5, #1	; 0x1
         9ada8:	e59d0000 	ldr	r0, [sp]
         9adac:	eb6ca102 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9adb0:	e3350000 	teq	r5, #0	; 0x0
         9adb4:	0a00001c 	beq	9ae2c <TDocker::AddEntry(unsigned char)+0x1f0>
         9adb8:	e24dd004 	sub	sp, sp, #4	; 0x4
         9adbc:	e59f0148 	ldr	r0, [pc, #148]	; 9af0c <TDocker::AddEntry(unsigned char)+0x2d0>	; fField148
         9adc0:	e5900000 	ldr	r0, [r0]
         9adc4:	eb6c9ce0 	bl	1bc214c <$AllocateRefHandle(long)>
         9adc8:	e1a05000 	mov	r5, r0
         9adcc:	e59f013c 	ldr	r0, [pc, #13c]	; 9af10 <TDocker::AddEntry(unsigned char)+0x2d4>
         9add0:	e5900000 	ldr	r0, [r0]
         9add4:	e5901000 	ldr	r1, [r0]
         9add8:	e5950000 	ldr	r0, [r5]
         9addc:	eb6ca51f 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         9ade0:	eb6c9cd9 	bl	1bc214c <$AllocateRefHandle(long)>
         9ade4:	e58d0000 	str	r0, [sp]
         9ade8:	e1a00005 	mov	r0, r5
         9adec:	eb6ca0f2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9adf0:	e1a0000d 	mov	r0, sp
         9adf4:	eb6ca927 	bl	1bc5298 <$IsSoupEntry(RefVar const &)>
         9adf8:	e3300000 	teq	r0, #0	; 0x0
         9adfc:	11a0000d 	movne	r0, sp
         9ae00:	1b6ca501 	blne	1bc420c <$EntryRemoveFromSoup(RefVar const &)>
         9ae04:	e59f1108 	ldr	r1, [pc, #108]	; 9af14 <TDocker::AddEntry(unsigned char)+0x2d8>	; fField108
         9ae08:	e28d005c 	add	r0, sp, #92	; 0x5c
         9ae0c:	eb6cad44 	bl	1bc6324 <$RemoveSlot__FRC6RefVarT1>
         9ae10:	e59f1100 	ldr	r1, [pc, #100]	; 9af18 <TDocker::AddEntry(unsigned char)+0x2dc>	; fField100
         9ae14:	e28d005c 	add	r0, sp, #92	; 0x5c
         9ae18:	eb6cad41 	bl	1bc6324 <$RemoveSlot__FRC6RefVarT1>
         9ae1c:	e3a09001 	mov	r9, #1	; 0x1
         9ae20:	e59d0000 	ldr	r0, [sp]
         9ae24:	eb6ca0e4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9ae28:	e28dd004 	add	sp, sp, #4	; 0x4
         9ae2c:	e28dd028 	add	sp, sp, #40	; 0x28
         9ae30:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         9ae34:	eb6ca0e0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9ae38:	e28dd02c 	add	sp, sp, #44	; 0x2c
         9ae3c:	e59d0000 	ldr	r0, [sp]
         9ae40:	eb6ca0dd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9ae44:	e28dd004 	add	sp, sp, #4	; 0x4
         9ae48:	e59d0000 	ldr	r0, [sp]
         9ae4c:	e5900000 	ldr	r0, [r0]
         9ae50:	e3300002 	teq	r0, #2	; 0x2
         9ae54:	13a00001 	movne	r0, #1	; 0x1
         9ae58:	1a000000 	bne	9ae60 <TDocker::AddEntry(unsigned char)+0x224>
         9ae5c:	e3a00000 	mov	r0, #0	; 0x0
         9ae60:	e21050ff 	ands	r5, r0, #255	; 0xff
         9ae64:	0a000041 	beq	9af70 <TDocker::AddEntry(unsigned char)+0x334>
         9ae68:	e5d400ad 	ldrb	r0, [r4, #173]	; fField173
         9ae6c:	e3300000 	teq	r0, #0	; 0x0
         9ae70:	0a000006 	beq	9ae90 <TDocker::AddEntry(unsigned char)+0x254>
         9ae74:	e1a0100d 	mov	r1, sp
         9ae78:	e1a00004 	mov	r0, r4
         9ae7c:	eb686b0d 	bl	1ab5ab8 <TDocker::$IsDuplicateEntry(RefVar const &)>
         9ae80:	e3300000 	teq	r0, #0	; 0x0
         9ae84:	13a00000 	movne	r0, #0	; 0x0
         9ae88:	03a00001 	moveq	r0, #1	; 0x1
         9ae8c:	e20050ff 	and	r5, r0, #255	; 0xff
         9ae90:	e3350000 	teq	r5, #0	; 0x0
         9ae94:	0a000035 	beq	9af70 <TDocker::AddEntry(unsigned char)+0x334>
         9ae98:	e52da06c 	str	sl, [sp, -#108]!	; fField108
         9ae9c:	e28d0008 	add	r0, sp, #8	; 0x8
         9aea0:	eb6c5eb3 	bl	1bb2974 <$setjmp>
         9aea4:	e3300000 	teq	r0, #0	; 0x0
         9aea8:	1a000023 	bne	9af3c <TDocker::AddEntry(unsigned char)+0x300>
         9aeac:	e1a0000d 	mov	r0, sp
         9aeb0:	eb6d1471 	bl	1be007c <$AddExceptionHandler>
         9aeb4:	e2847014 	add	r7, r4, #20	; 0x14
         9aeb8:	e3380000 	teq	r8, #0	; 0x0
         9aebc:	0a000017 	beq	9af20 <TDocker::AddEntry(unsigned char)+0x2e4>
         9aec0:	e59f0054 	ldr	r0, [pc, #54]	; 9af1c <TDocker::AddEntry(unsigned char)+0x2e0>
         9aec4:	e5900000 	ldr	r0, [r0]
         9aec8:	e5901000 	ldr	r1, [r0]
         9aecc:	e59d006c 	ldr	r0, [sp, #108]	; fField108
         9aed0:	e5900000 	ldr	r0, [r0]
         9aed4:	eb6ca4db 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
         9aed8:	e3300000 	teq	r0, #0	; 0x0
         9aedc:	0a00000f 	beq	9af20 <TDocker::AddEntry(unsigned char)+0x2e4>
         9aee0:	e1a00007 	mov	r0, r7
         9aee4:	e28d106c 	add	r1, sp, #108	; 0x6c
         9aee8:	eb0ab7d0 	bl	348e30 <SoupAddFlushedWithUniqueId>
         9aeec:	ea00001c 	b	9af64 <TDocker::AddEntry(unsigned char)+0x328>
         9aef0:	00684320 	rsbeq	r4, r8, r0, lsr #6
         9aef4:	00684a40 	rsbeq	r4, r8, r0, asr #20
         9aef8:	55736572 	ldrplb	r6, [r3, -#1394]!
         9aefc:	636f6e66 	cmnvs	pc, #1632	; 0x660
         9af00:	69677572 	stmvsdb	r7!, {r1, r4, r5, r6, r8, sl, ip, sp, lr}^
         9af04:	6174696f 	cmnvs	r4, pc, ror #18
         9af08:	6e000000 	cdpvs	0, 0, cr0, cr0, cr0, {0}
         9af0c:	0c10180c 	ldceq	8, cr1, [r0], -#48	; fField48
         9af10:	00684e28 	rsbeq	r4, r8, r8, lsr #28
         9af14:	00684e08 	rsbeq	r4, r8, r8, lsl #28
         9af18:	00683d58 	rsbeq	r3, r8, r8, asr sp
         9af1c:	006853d0 	ldreqd	r5, [r8], -#48	; fField48
         9af20:	e1a00007 	mov	r0, r7
         9af24:	e28d106c 	add	r1, sp, #108	; 0x6c
         9af28:	eb0ab7ba 	bl	348e18 <SoupAddFlushed>
         9af2c:	e28d006c 	add	r0, sp, #108	; 0x6c
         9af30:	eb6ca4bd 	bl	1bc422c <$EntryUniqueID(RefVar const &)>
         9af34:	e1a06000 	mov	r6, r0
         9af38:	ea000009 	b	9af64 <TDocker::AddEntry(unsigned char)+0x328>
         9af3c:	e3370000 	teq	r7, #0	; 0x0
         9af40:	0a000005 	beq	9af5c <TDocker::AddEntry(unsigned char)+0x320>
         9af44:	e59f100c 	ldr	r1, [pc, #c]	; 9af58 <TDocker::AddEntry(unsigned char)+0x31c>
         9af48:	e1a00004 	mov	r0, r4
         9af4c:	e3a02001 	mov	r2, #1	; 0x1
         9af50:	eb683530 	bl	1aa8418 <TDocker::$AddChangedSoup(RefVar const &, unsigned long)>
         9af54:	ea000002 	b	9af64 <TDocker::AddEntry(unsigned char)+0x328>
         9af58:	00682610 	rsbeq	r2, r8, r0, lsl r6
         9af5c:	e1a0000d 	mov	r0, sp
         9af60:	eb6d1c7b 	bl	1be2154 <$NextHandler>
         9af64:	e1a0000d 	mov	r0, sp
         9af68:	eb6d1852 	bl	1be10b8 <$ExitHandler>
         9af6c:	e28dd06c 	add	sp, sp, #108	; 0x6c
         9af70:	e3390000 	teq	r9, #0	; 0x0
         9af74:	159f0018 	ldrne	r0, [pc, #18]	; 9af94 <TDocker::AddEntry(unsigned char)+0x358>
         9af78:	1b6d9420 	blne	1c00000 <$NSCall(RefVar const &)>
         9af7c:	e3380000 	teq	r8, #0	; 0x0
         9af80:	0a000004 	beq	9af98 <TDocker::AddEntry(unsigned char)+0x35c>
         9af84:	e5941050 	ldr	r1, [r4, #80]	; fField80
         9af88:	e1a00004 	mov	r0, r4
         9af8c:	eb6887a6 	bl	1abce2c <TDocker::$WriteResult(long)>
         9af90:	ea000004 	b	9afa8 <TDocker::AddEntry(unsigned char)+0x36c>
         9af94:	006818f8 	streqd	r1, [r8], -#136	; fField136
         9af98:	e1a02006 	mov	r2, r6
         9af9c:	e1a00004 	mov	r0, r4
         9afa0:	e59f1024 	ldr	r1, [pc, #24]	; 9afcc <TDocker::AddEntry(unsigned char)+0x390>	; fField24
         9afa4:	eb68879b 	bl	1abce18 <TDocker::$WriteLong(unsigned long, unsigned long)>
         9afa8:	e3350000 	teq	r5, #0	; 0x0
         9afac:	0a000003 	beq	9afc0 <TDocker::AddEntry(unsigned char)+0x384>
         9afb0:	e59f1018 	ldr	r1, [pc, #18]	; 9afd0 <TDocker::AddEntry(unsigned char)+0x394>
         9afb4:	e1a00004 	mov	r0, r4
         9afb8:	e3a02001 	mov	r2, #1	; 0x1
         9afbc:	eb683515 	bl	1aa8418 <TDocker::$AddChangedSoup(RefVar const &, unsigned long)>
         9afc0:	e59d0000 	ldr	r0, [sp]
         9afc4:	eb6ca07c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9afc8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         9afcc:	61646964 	cmnvs	r4, r4, ror #18
         9afd0:	00681d88 	rsbeq	r1, r8, r8, lsl #27
    */
}

/**
 * Symbol: TDocker::ReplaceEntryContents(RefVar const &)
 * Address: 0009afd4
 */
TDocker::ReplaceEntryContents(RefVar const &) {
    /*
         9afd4:	e1a0c00d 	mov	ip, sp
         9afd8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         9afdc:	e24cb004 	sub	fp, ip, #4	; 0x4
         9afe0:	e1a05000 	mov	r5, r0
         9afe4:	e1a04001 	mov	r4, r1
         9afe8:	e59f00f8 	ldr	r0, [pc, #f8]	; 9b0e8 <TDocker::ReplaceEntryContents(RefVar const &)+0x114>
         9afec:	e5900000 	ldr	r0, [r0]
         9aff0:	e5901000 	ldr	r1, [r0]
         9aff4:	e5940000 	ldr	r0, [r4]
         9aff8:	e5900000 	ldr	r0, [r0]
         9affc:	eb6ca497 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         9b000:	eb6c9c51 	bl	1bc214c <$AllocateRefHandle(long)>
         9b004:	e1a07000 	mov	r7, r0
         9b008:	e5900000 	ldr	r0, [r0]
         9b00c:	e59f80d8 	ldr	r8, [pc, #d8]	; 9b0ec <TDocker::ReplaceEntryContents(RefVar const &)+0x118>
         9b010:	e3a0609e 	mov	r6, #158	; 0x9e
         9b014:	e2466c6e 	sub	r6, r6, #28160	; 0x6e00
         9b018:	e3300002 	teq	r0, #2	; 0x2
         9b01c:	1a000003 	bne	9b030 <TDocker::ReplaceEntryContents(RefVar const &)+0x5c>
         9b020:	e3a02000 	mov	r2, #0	; 0x0
         9b024:	e1a01006 	mov	r1, r6
         9b028:	e5980000 	ldr	r0, [r8]
         9b02c:	eb6d205a 	bl	1be319c <$Throw>
         9b030:	e24dd004 	sub	sp, sp, #4	; 0x4
         9b034:	e5970000 	ldr	r0, [r7]
         9b038:	e3100003 	tst	r0, #3	; 0x3
         9b03c:	01a00140 	moveq	r0, r0, asr #2
         9b040:	0a000000 	beq	9b048 <TDocker::ReplaceEntryContents(RefVar const &)+0x74>
         9b044:	eb6c9c34 	bl	1bc211c <$_RINTError(long)>
         9b048:	e1a01000 	mov	r1, r0
         9b04c:	e1a00005 	mov	r0, r5
         9b050:	eb67ea9a 	bl	1a95ac0 <TDocker::$GetEntryFromID(unsigned long)>
         9b054:	eb6c9c3c 	bl	1bc214c <$AllocateRefHandle(long)>
         9b058:	e40d0004 	str	r0, [sp], -#4	; fField4
         9b05c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         9b060:	e5900000 	ldr	r0, [r0]
         9b064:	e3300002 	teq	r0, #2	; 0x2
         9b068:	1a000003 	bne	9b07c <TDocker::ReplaceEntryContents(RefVar const &)+0xa8>
         9b06c:	e3a02000 	mov	r2, #0	; 0x0
         9b070:	e1a01006 	mov	r1, r6
         9b074:	e5980000 	ldr	r0, [r8]
         9b078:	eb6d2047 	bl	1be319c <$Throw>
         9b07c:	e59f006c 	ldr	r0, [pc, #6c]	; 9b0f0 <TDocker::ReplaceEntryContents(RefVar const &)+0x11c>
         9b080:	e5900000 	ldr	r0, [r0]
         9b084:	e5901000 	ldr	r1, [r0]
         9b088:	e5940000 	ldr	r0, [r4]
         9b08c:	e5900000 	ldr	r0, [r0]
         9b090:	eb6ca472 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         9b094:	e3100003 	tst	r0, #3	; 0x3
         9b098:	01a00140 	moveq	r0, r0, asr #2
         9b09c:	0a000000 	beq	9b0a4 <TDocker::ReplaceEntryContents(RefVar const &)+0xd0>
         9b0a0:	eb6c9c1d 	bl	1bc211c <$_RINTError(long)>
         9b0a4:	e1a00100 	mov	r0, r0, lsl #2
         9b0a8:	eb6c9c27 	bl	1bc214c <$AllocateRefHandle(long)>
         9b0ac:	e58d0000 	str	r0, [sp]
         9b0b0:	e1a0200d 	mov	r2, sp
         9b0b4:	e59f1034 	ldr	r1, [pc, #34]	; 9b0f0 <TDocker::ReplaceEntryContents(RefVar const &)+0x11c>
         9b0b8:	e1a00004 	mov	r0, r4
         9b0bc:	eb6caca9 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         9b0c0:	e59d0000 	ldr	r0, [sp]
         9b0c4:	eb6ca03c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9b0c8:	e1a01004 	mov	r1, r4
         9b0cc:	e28d0004 	add	r0, sp, #4	; 0x4
         9b0d0:	eb6ca44f 	bl	1bc4214 <$EntryReplaceWithModTime__FRC6RefVarT1>
         9b0d4:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
         9b0d8:	eb6ca037 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9b0dc:	e1a00007 	mov	r0, r7
         9b0e0:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         9b0e4:	ea6ca034 	b	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9b0e8:	006853d0 	ldreqd	r5, [r8], -#48	; fField48
         9b0ec:	003712d0 	ldreqsb	r1, [r7], -r0
         9b0f0:	00685360 	rsbeq	r5, r8, r0, ror #6
    */
}

/**
 * Symbol: TDocker::ChangeEntry(void)
 * Address: 0009b128
 */
TDocker::ChangeEntry(void) {
    /*
         9b128:	e1a0c00d 	mov	ip, sp
         9b12c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         9b130:	e24cb004 	sub	fp, ip, #4	; 0x4
         9b134:	e1a04000 	mov	r4, r0
         9b138:	eb68286a 	bl	1aa52e8 <TDocker::$VerifySoup(void)>
         9b13c:	e24dd004 	sub	sp, sp, #4	; 0x4
         9b140:	e2841010 	add	r1, r4, #16	; 0x10
         9b144:	e1a00004 	mov	r0, r4
         9b148:	eb6872a8 	bl	1ab7bf0 <TDocker::$ReadRef(RefVar const &)>
         9b14c:	eb6c9bfe 	bl	1bc214c <$AllocateRefHandle(long)>
         9b150:	e58d0000 	str	r0, [sp]
         9b154:	e5900000 	ldr	r0, [r0]
         9b158:	e3300002 	teq	r0, #2	; 0x2
         9b15c:	1a000004 	bne	9b174 <TDocker::ChangeEntry(void)+0x4c>
         9b160:	e59f0040 	ldr	r0, [pc, #40]	; 9b1a8 <TDocker::ChangeEntry(void)+0x80>	; fField40
         9b164:	e5900000 	ldr	r0, [r0]
         9b168:	e3a02000 	mov	r2, #0	; 0x0
         9b16c:	e59f1038 	ldr	r1, [pc, #38]	; 9b1ac <TDocker::ChangeEntry(void)+0x84>
         9b170:	eb6d2009 	bl	1be319c <$Throw>
         9b174:	e1a0100d 	mov	r1, sp
         9b178:	e1a00004 	mov	r0, r4
         9b17c:	eb6813ae 	bl	1aa003c <TDocker::$ReplaceEntryContents(RefVar const &)>
         9b180:	e1a00004 	mov	r0, r4
         9b184:	e3a01000 	mov	r1, #0	; 0x0
         9b188:	eb688727 	bl	1abce2c <TDocker::$WriteResult(long)>
         9b18c:	e59f101c 	ldr	r1, [pc, #1c]	; 9b1b0 <TDocker::ChangeEntry(void)+0x88>
         9b190:	e1a00004 	mov	r0, r4
         9b194:	e3a02001 	mov	r2, #1	; 0x1
         9b198:	eb68349e 	bl	1aa8418 <TDocker::$AddChangedSoup(RefVar const &, unsigned long)>
         9b19c:	e59d0000 	ldr	r0, [sp]
         9b1a0:	eb6ca005 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9b1a4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         9b1a8:	003712d0 	ldreqsb	r1, [r7], -r0
         9b1ac:	ffff929b 	swinv	0x00ff929b
         9b1b0:	00682388 	rsbeq	r2, r8, r8, lsl #7
    */
}

/**
 * Symbol: TDocker::ReturnEntry(unsigned long)
 * Address: 0009b1b4
 */
TDocker::ReturnEntry(unsigned long) {
    /*
         9b1b4:	e1a0c00d 	mov	ip, sp
         9b1b8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         9b1bc:	e24cb004 	sub	fp, ip, #4	; 0x4
         9b1c0:	e1a04000 	mov	r4, r0
         9b1c4:	e1a05001 	mov	r5, r1
         9b1c8:	e24dd004 	sub	sp, sp, #4	; 0x4
         9b1cc:	e1a0100d 	mov	r1, sp
         9b1d0:	e5900000 	ldr	r0, [r0]
         9b1d4:	eb6d283c 	bl	1be52cc <CPipe::$__rs(unsigned long &)>
         9b1d8:	e24dd004 	sub	sp, sp, #4	; 0x4
         9b1dc:	e1a00004 	mov	r0, r4
         9b1e0:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         9b1e4:	eb67ea35 	bl	1a95ac0 <TDocker::$GetEntryFromID(unsigned long)>
         9b1e8:	eb6c9bd7 	bl	1bc214c <$AllocateRefHandle(long)>
         9b1ec:	e58d0000 	str	r0, [sp]
         9b1f0:	e5900000 	ldr	r0, [r0]
         9b1f4:	e3300002 	teq	r0, #2	; 0x2
         9b1f8:	1a000007 	bne	9b21c <TDocker::ReturnEntry(unsigned long)+0x68>
         9b1fc:	e59f0014 	ldr	r0, [pc, #14]	; 9b218 <TDocker::ReturnEntry(unsigned long)+0x64>
         9b200:	e5900000 	ldr	r0, [r0]
         9b204:	e3a02000 	mov	r2, #0	; 0x0
         9b208:	e3a01fa6 	mov	r1, #664	; 0x298
         9b20c:	e2411a07 	sub	r1, r1, #28672	; 0x7000
         9b210:	eb6d1fe1 	bl	1be319c <$Throw>
         9b214:	ea000004 	b	9b22c <TDocker::ReturnEntry(unsigned long)+0x78>
         9b218:	003712d0 	ldreqsb	r1, [r7], -r0
         9b21c:	e1a0200d 	mov	r2, sp
         9b220:	e1a01005 	mov	r1, r5
         9b224:	e1a00004 	mov	r0, r4
         9b228:	eb6886f7 	bl	1abce0c <TDocker::$WriteEntry(unsigned long, RefVar const &)>
         9b22c:	e59d0000 	ldr	r0, [sp]
         9b230:	eb6c9fe1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9b234:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::EmptyOrDelete(unsigned long)
 * Address: 0009b238
 */
TDocker::EmptyOrDelete(unsigned long) {
    /*
         9b238:	e1a0c00d 	mov	ip, sp
         9b23c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         9b240:	e24cb004 	sub	fp, ip, #4	; 0x4
         9b244:	e1a04000 	mov	r4, r0
         9b248:	e1a05001 	mov	r5, r1
         9b24c:	eb682825 	bl	1aa52e8 <TDocker::$VerifySoup(void)>
         9b250:	e3a06001 	mov	r6, #1	; 0x1
         9b254:	e5940060 	ldr	r0, [r4, #96]	; fField96
         9b258:	e3300001 	teq	r0, #1	; 0x1
         9b25c:	1a000004 	bne	9b274 <TDocker::EmptyOrDelete(unsigned long)+0x3c>
         9b260:	e5d4002c 	ldrb	r0, [r4, #44]	; fField44
         9b264:	e3300000 	teq	r0, #0	; 0x0
         9b268:	13a06000 	movne	r6, #0	; 0x0
         9b26c:	159f0020 	ldrne	r0, [pc, #20]	; 9b294 <TDocker::EmptyOrDelete(unsigned long)+0x5c>	; fField20
         9b270:	1b6d9369 	blne	1c0001c <$NSCallGlobalFn(RefVar const &)>
         9b274:	e5d4002e 	ldrb	r0, [r4, #46]	; fField46
         9b278:	e3300000 	teq	r0, #0	; 0x0
         9b27c:	0a000006 	beq	9b29c <TDocker::EmptyOrDelete(unsigned long)+0x64>
         9b280:	e2841010 	add	r1, r4, #16	; 0x10
         9b284:	e59f000c 	ldr	r0, [pc, #c]	; 9b298 <TDocker::EmptyOrDelete(unsigned long)+0x60>
         9b288:	eb6d9364 	bl	1c00020 <$NSCallGlobalFn__FRC6RefVarT1>
         9b28c:	e3a06000 	mov	r6, #0	; 0x0
         9b290:	ea00000f 	b	9b2d4 <TDocker::EmptyOrDelete(unsigned long)+0x9c>
         9b294:	00684260 	rsbeq	r4, r8, r0, ror #4
         9b298:	00685298 	streqb	r5, [r8], -#40	; fField40
         9b29c:	e3360000 	teq	r6, #0	; 0x0
         9b2a0:	0a00000b 	beq	9b2d4 <TDocker::EmptyOrDelete(unsigned long)+0x9c>
         9b2a4:	e2840014 	add	r0, r4, #20	; 0x14
         9b2a8:	e59fc00c 	ldr	ip, [pc, #c]	; 9b2bc <TDocker::EmptyOrDelete(unsigned long)+0x84>
         9b2ac:	e135000c 	teq	r5, ip
         9b2b0:	1a000002 	bne	9b2c0 <TDocker::EmptyOrDelete(unsigned long)+0x88>
         9b2b4:	eb6cb040 	bl	1bc73bc <$SoupRemoveFromStore(RefVar const &)>
         9b2b8:	ea000001 	b	9b2c4 <TDocker::EmptyOrDelete(unsigned long)+0x8c>
         9b2bc:	64736f75 	ldrvsbt	r6, [r3], -#3957
         9b2c0:	eb6cb03c 	bl	1bc73b8 <$SoupRemoveAllEntries(RefVar const &)>
         9b2c4:	e5d4002d 	ldrb	r0, [r4, #45]	; fField45
         9b2c8:	e3300000 	teq	r0, #0	; 0x0
         9b2cc:	159f0030 	ldrne	r0, [pc, #30]	; 9b304 <TDocker::EmptyOrDelete(unsigned long)+0xcc>
         9b2d0:	1b6d934a 	blne	1c00000 <$NSCall(RefVar const &)>
         9b2d4:	e1a00004 	mov	r0, r4
         9b2d8:	e3a01000 	mov	r1, #0	; 0x0
         9b2dc:	eb6886d2 	bl	1abce2c <TDocker::$WriteResult(long)>
         9b2e0:	e3360000 	teq	r6, #0	; 0x0
         9b2e4:	05d4002c 	ldreqb	r0, [r4, #44]	; fField44
         9b2e8:	03300000 	teqeq	r0, #0	; 0x0
         9b2ec:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         9b2f0:	e59f1010 	ldr	r1, [pc, #10]	; 9b308 <TDocker::EmptyOrDelete(unsigned long)+0xd0>
         9b2f4:	e1a00004 	mov	r0, r4
         9b2f8:	e3a02001 	mov	r2, #1	; 0x1
         9b2fc:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         9b300:	ea683444 	b	1aa8418 <TDocker::$AddChangedSoup(RefVar const &, unsigned long)>
         9b304:	006818f8 	streqd	r1, [r8], -#136	; fField136
         9b308:	00682b28 	rsbeq	r2, r8, r8, lsr #22
    */
}

/**
 * Symbol: TDocker::ReadPackage(void)
 * Address: 0009b30c
 */
TDocker::ReadPackage(void) {
    /*
         9b30c:	e1a0c00d 	mov	ip, sp
         9b310:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         9b314:	e24cb004 	sub	fp, ip, #4	; 0x4
         9b318:	e1a04000 	mov	r4, r0
         9b31c:	e24dd004 	sub	sp, sp, #4	; 0x4
         9b320:	e5900010 	ldr	r0, [r0, #16]	; fField16
         9b324:	e5900000 	ldr	r0, [r0]
         9b328:	eb6c9b87 	bl	1bc214c <$AllocateRefHandle(long)>
         9b32c:	e40d0004 	str	r0, [sp], -#4	; fField4
         9b330:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         9b334:	e5900000 	ldr	r0, [r0]
         9b338:	e3300002 	teq	r0, #2	; 0x2
         9b33c:	1a000008 	bne	9b364 <TDocker::ReadPackage(void)+0x58>
         9b340:	e3a00002 	mov	r0, #2	; 0x2
         9b344:	eb6c9b80 	bl	1bc214c <$AllocateRefHandle(long)>
         9b348:	e58d0000 	str	r0, [sp]
         9b34c:	e1a0000d 	mov	r0, sp
         9b350:	eb68e9e0 	bl	1ad5ad8 <$FDefaultStore>
         9b354:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         9b358:	e5810000 	str	r0, [r1]
         9b35c:	e59d0000 	ldr	r0, [sp]
         9b360:	eb6c9f95 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9b364:	e59400a4 	ldr	r0, [r4, #164]	; fField164
         9b368:	e2503003 	subs	r3, r0, #3	; 0x3
         9b36c:	13a03001 	movne	r3, #1	; 0x1
         9b370:	e92d0008 	stmdb	sp!, {r3}
         9b374:	e284201c 	add	r2, r4, #28	; 0x1c
         9b378:	e28d1008 	add	r1, sp, #8	; 0x8
         9b37c:	e3a03e7d 	mov	r3, #2000	; 0x7d0
         9b380:	e5940000 	ldr	r0, [r4]
         9b384:	eb6db85a 	bl	1c094f4 <$SuckPackageThruPipe__FP5CPipeRC6RefVarT2Uli>
         9b388:	e28dd004 	add	sp, sp, #4	; 0x4
         9b38c:	eb6c9b6e 	bl	1bc214c <$AllocateRefHandle(long)>
         9b390:	e1a05000 	mov	r5, r0
         9b394:	e5900000 	ldr	r0, [r0]
         9b398:	e2001003 	and	r1, r0, #3	; 0x3
         9b39c:	e3510000 	cmp	r1, #0	; 0x0
         9b3a0:	1a000003 	bne	9b3b4 <TDocker::ReadPackage(void)+0xa8>
         9b3a4:	01a00140 	moveq	r0, r0, asr #2
         9b3a8:	0a000000 	beq	9b3b0 <TDocker::ReadPackage(void)+0xa4>
         9b3ac:	eb6c9b5a 	bl	1bc211c <$_RINTError(long)>
         9b3b0:	e5840050 	str	r0, [r4, #80]	; fField80
         9b3b4:	e5941050 	ldr	r1, [r4, #80]	; fField80
         9b3b8:	e3310000 	teq	r1, #0	; 0x0
         9b3bc:	1281cda2 	addne	ip, r1, #10368	; 0x2880
         9b3c0:	137c0022 	cmnne	ip, #34	; 0x22
         9b3c4:	1281cda2 	addne	ip, r1, #10368	; 0x2880
         9b3c8:	137c0029 	cmnne	ip, #41	; 0x29
         9b3cc:	1281cda2 	addne	ip, r1, #10368	; 0x2880
         9b3d0:	137c002a 	cmnne	ip, #42	; 0x2a
         9b3d4:	0a000003 	beq	9b3e8 <TDocker::ReadPackage(void)+0xdc>
         9b3d8:	e59f0028 	ldr	r0, [pc, #28]	; 9b408 <TDocker::ReadPackage(void)+0xfc>	; fField28
         9b3dc:	e5900000 	ldr	r0, [r0]
         9b3e0:	e3a02000 	mov	r2, #0	; 0x0
         9b3e4:	eb6d1f6c 	bl	1be319c <$Throw>
         9b3e8:	e5941048 	ldr	r1, [r4, #72]	; fField72
         9b3ec:	e1a00004 	mov	r0, r4
         9b3f0:	eb67e597 	bl	1a94a54 <TDocker::$FlushPadding(unsigned long)>
         9b3f4:	e1a00005 	mov	r0, r5
         9b3f8:	eb6c9f6f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9b3fc:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
         9b400:	eb6c9f6d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9b404:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         9b408:	003712d0 	ldreqsb	r1, [r7], -r0
    */
}

/**
 * Symbol: TDocker::GetPackageInfo(void)
 * Address: 0009b40c
 */
TDocker::GetPackageInfo(void) {
    /*
         9b40c:	e1a0c00d 	mov	ip, sp
         9b410:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         9b414:	e24cb004 	sub	fp, ip, #4	; 0x4
         9b418:	e1a04000 	mov	r4, r0
         9b41c:	e24dd034 	sub	sp, sp, #52	; 0x34
         9b420:	e3a0a002 	mov	sl, #2	; 0x2
         9b424:	e1a0000a 	mov	r0, sl
         9b428:	eb6c9b47 	bl	1bc214c <$AllocateRefHandle(long)>
         9b42c:	e58d0000 	str	r0, [sp]
         9b430:	e1a0100d 	mov	r1, sp
         9b434:	e1a00004 	mov	r0, r4
         9b438:	eb6871ec 	bl	1ab7bf0 <TDocker::$ReadRef(RefVar const &)>
         9b43c:	eb6c9b42 	bl	1bc214c <$AllocateRefHandle(long)>
         9b440:	e58d0008 	str	r0, [sp, #8]
         9b444:	e59d0000 	ldr	r0, [sp]
         9b448:	eb6c9f5b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9b44c:	e3a00002 	mov	r0, #2	; 0x2
         9b450:	eb6c9b3d 	bl	1bc214c <$AllocateRefHandle(long)>
         9b454:	e58d0004 	str	r0, [sp, #4]	; fField4
         9b458:	e59f0450 	ldr	r0, [pc, #450]	; 9b8b0 <TDocker::GetPackageInfo(void)+0x4a4>
         9b45c:	e3a01000 	mov	r1, #0	; 0x0
         9b460:	eb6c9b34 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
         9b464:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         9b468:	e5810000 	str	r0, [r1]
         9b46c:	e24dd038 	sub	sp, sp, #56	; 0x38
         9b470:	e1a0000d 	mov	r0, sp
         9b474:	eb044557 	bl	1ac9d8 <TRichString::__ct(void)>
         9b478:	e59d0040 	ldr	r0, [sp, #64]	; fField64
         9b47c:	e5900000 	ldr	r0, [r0]
         9b480:	e3300002 	teq	r0, #2	; 0x2
         9b484:	128d1040 	addne	r1, sp, #64	; 0x40
         9b488:	11a0000d 	movne	r0, sp
         9b48c:	1b6c5905 	blne	1bb18a8 <TRichString::$SetStringData(RefVar const &)>
         9b490:	e24dd08c 	sub	sp, sp, #140	; 0x8c
         9b494:	e28d0064 	add	r0, sp, #100	; 0x64
         9b498:	eb04454e 	bl	1ac9d8 <TRichString::__ct(void)>
         9b49c:	e1a0000d 	mov	r0, sp
         9b4a0:	eb6cc471 	bl	1bcc66c <TPMIterator::$__ct(void)>
         9b4a4:	e1a0000d 	mov	r0, sp
         9b4a8:	eb6ce572 	bl	1bd4a78 <TPMIterator::$Init(void)>
         9b4ac:	e5840050 	str	r0, [r4, #80]	; fField80
         9b4b0:	e1b01000 	movs	r1, r0
         9b4b4:	e59f53f8 	ldr	r5, [pc, #3f8]	; 9b8b4 <TDocker::GetPackageInfo(void)+0x4a8>
         9b4b8:	13a02000 	movne	r2, #0	; 0x0
         9b4bc:	15950000 	ldrne	r0, [r5]
         9b4c0:	1b6d1f35 	blne	1be319c <$Throw>
         9b4c4:	e1a0000d 	mov	r0, sp
         9b4c8:	eb6ceda9 	bl	1bd6b74 <TPMIterator::$More(void)>
         9b4cc:	e2849010 	add	r9, r4, #16	; 0x10
         9b4d0:	e28d7050 	add	r7, sp, #80	; 0x50
         9b4d4:	e59f63dc 	ldr	r6, [pc, #3dc]	; 9b8b8 <TDocker::GetPackageInfo(void)+0x4ac>
         9b4d8:	e59f83dc 	ldr	r8, [pc, #3dc]	; 9b8bc <TDocker::GetPackageInfo(void)+0x4b0>
         9b4dc:	e59f13dc 	ldr	r1, [pc, #3dc]	; 9b8c0 <TDocker::GetPackageInfo(void)+0x4b4>
         9b4e0:	e58d10f4 	str	r1, [sp, #244]
         9b4e4:	e59f13d8 	ldr	r1, [pc, #3d8]	; 9b8c4 <TDocker::GetPackageInfo(void)+0x4b8>
         9b4e8:	e58d10f0 	str	r1, [sp, #240]
         9b4ec:	e59f13d4 	ldr	r1, [pc, #3d4]	; 9b8c8 <TDocker::GetPackageInfo(void)+0x4bc>
         9b4f0:	e58d10ec 	str	r1, [sp, #236]
         9b4f4:	e59f13d0 	ldr	r1, [pc, #3d0]	; 9b8cc <TDocker::GetPackageInfo(void)+0x4c0>
         9b4f8:	e58d10e8 	str	r1, [sp, #232]
         9b4fc:	e59f13cc 	ldr	r1, [pc, #3cc]	; 9b8d0 <TDocker::GetPackageInfo(void)+0x4c4>
         9b500:	e58d10e4 	str	r1, [sp, #228]
         9b504:	e59f13c8 	ldr	r1, [pc, #3c8]	; 9b8d4 <TDocker::GetPackageInfo(void)+0x4c8>
         9b508:	e58d10e0 	str	r1, [sp, #224]
         9b50c:	e59f13c4 	ldr	r1, [pc, #3c4]	; 9b8d8 <TDocker::GetPackageInfo(void)+0x4cc>
         9b510:	e58d10dc 	str	r1, [sp, #220]
         9b514:	e59f13c0 	ldr	r1, [pc, #3c0]	; 9b8dc <TDocker::GetPackageInfo(void)+0x4d0>
         9b518:	e58d10d8 	str	r1, [sp, #216]
         9b51c:	e59f13bc 	ldr	r1, [pc, #3bc]	; 9b8e0 <TDocker::GetPackageInfo(void)+0x4d4>
         9b520:	e58d10d4 	str	r1, [sp, #212]
         9b524:	e59f13b8 	ldr	r1, [pc, #3b8]	; 9b8e4 <TDocker::GetPackageInfo(void)+0x4d8>
         9b528:	e3300000 	teq	r0, #0	; 0x0
         9b52c:	e58d10d0 	str	r1, [sp, #208]
         9b530:	0a0000cb 	beq	9b864 <TDocker::GetPackageInfo(void)+0x458>
         9b534:	e1a0000d 	mov	r0, sp
         9b538:	eb6cf1a2 	bl	1bd7bc8 <TPMIterator::$PackageId(void)>
         9b53c:	e28d20b4 	add	r2, sp, #180	; 0xb4
         9b540:	e28d10b8 	add	r1, sp, #184	; 0xb8
         9b544:	eb6ce548 	bl	1bd4a6c <$IdToStore(unsigned long, TStore **, unsigned long *)>
         9b548:	e3300000 	teq	r0, #0	; 0x0
         9b54c:	1a0000be 	bne	9b84c <TDocker::GetPackageInfo(void)+0x440>
         9b550:	e5990000 	ldr	r0, [r9]
         9b554:	e590a000 	ldr	sl, [r0]
         9b558:	e59d00b8 	ldr	r0, [sp, #184]
         9b55c:	eb6d5cfc 	bl	1bf2954 <$ToObject(TStore *)>
         9b560:	e13a0000 	teq	sl, r0
         9b564:	1a0000b8 	bne	9b84c <TDocker::GetPackageInfo(void)+0x440>
         9b568:	e59d00cc 	ldr	r0, [sp, #204]
         9b56c:	e5900000 	ldr	r0, [r0]
         9b570:	e3300002 	teq	r0, #2	; 0x2
         9b574:	0a000012 	beq	9b5c4 <TDocker::GetPackageInfo(void)+0x1b8>
         9b578:	e1a0000d 	mov	r0, sp
         9b57c:	eb6cf193 	bl	1bd7bd0 <TPMIterator::$PackageName(void)>
         9b580:	e1a01000 	mov	r1, r0
         9b584:	e28d0064 	add	r0, sp, #100	; 0x64
         9b588:	eb043f42 	bl	1ab298 <TRichString::SetCPlainStringData(unsigned short *)>
         9b58c:	e59d00cc 	ldr	r0, [sp, #204]
         9b590:	e5900000 	ldr	r0, [r0]
         9b594:	e3300002 	teq	r0, #2	; 0x2
         9b598:	0a000009 	beq	9b5c4 <TDocker::GetPackageInfo(void)+0x1b8>
         9b59c:	e3a03000 	mov	r3, #0	; 0x0
         9b5a0:	e92d0008 	stmdb	sp!, {r3}
         9b5a4:	e3e03000 	mvn	r3, #0	; 0x0
         9b5a8:	e3a02000 	mov	r2, #0	; 0x0
         9b5ac:	e28d1090 	add	r1, sp, #144	; 0x90
         9b5b0:	e28d0068 	add	r0, sp, #104	; 0x68
         9b5b4:	eb6c33a5 	bl	1ba8450 <TRichString::$CompareSubStringCommon( const(TRichString const &, unsigned long, long, unsigned char))>
         9b5b8:	e28dd004 	add	sp, sp, #4	; 0x4
         9b5bc:	e3300000 	teq	r0, #0	; 0x0
         9b5c0:	1a0000a1 	bne	9b84c <TDocker::GetPackageInfo(void)+0x440>
         9b5c4:	e24dd030 	sub	sp, sp, #48	; 0x30
         9b5c8:	eb6c9adc 	bl	1bc2140 <$AllocateFrame(void)>
         9b5cc:	eb6c9ade 	bl	1bc214c <$AllocateRefHandle(long)>
         9b5d0:	e58d002c 	str	r0, [sp, #44]	; fField44
         9b5d4:	e28d00ec 	add	r0, sp, #236	; 0xec
         9b5d8:	e8975000 	ldmia	r7, {ip, lr}
         9b5dc:	e8805000 	stmia	r0, {ip, lr}
         9b5e0:	e28d0030 	add	r0, sp, #48	; 0x30
         9b5e4:	eb6cf179 	bl	1bd7bd0 <TPMIterator::$PackageName(void)>
         9b5e8:	eb6ca739 	bl	1bc52d4 <$MakeString(unsigned short const *)>
         9b5ec:	eb6c9ad6 	bl	1bc214c <$AllocateRefHandle(long)>
         9b5f0:	e58d0000 	str	r0, [sp]
         9b5f4:	e1a0200d 	mov	r2, sp
         9b5f8:	e1a01006 	mov	r1, r6
         9b5fc:	e28d002c 	add	r0, sp, #44	; 0x2c
         9b600:	eb6cab58 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         9b604:	e59d0000 	ldr	r0, [sp]
         9b608:	eb6c9eeb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9b60c:	e3a0a000 	mov	sl, #0	; 0x0
         9b610:	e28d0030 	add	r0, sp, #48	; 0x30
         9b614:	eb6cf16f 	bl	1bd7bd8 <TPMIterator::$PackageSize(void)>
         9b618:	e1a00100 	mov	r0, r0, lsl #2
         9b61c:	eb6c9aca 	bl	1bc214c <$AllocateRefHandle(long)>
         9b620:	e58d0004 	str	r0, [sp, #4]	; fField4
         9b624:	e28d2004 	add	r2, sp, #4	; 0x4
         9b628:	e1a01008 	mov	r1, r8
         9b62c:	e28d002c 	add	r0, sp, #44	; 0x2c
         9b630:	eb6cab4c 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         9b634:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         9b638:	eb6c9edf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9b63c:	e28d0030 	add	r0, sp, #48	; 0x30
         9b640:	eb6cf160 	bl	1bd7bc8 <TPMIterator::$PackageId(void)>
         9b644:	e1a00100 	mov	r0, r0, lsl #2
         9b648:	eb6c9abf 	bl	1bc214c <$AllocateRefHandle(long)>
         9b64c:	e58d0008 	str	r0, [sp, #8]
         9b650:	e28d2008 	add	r2, sp, #8	; 0x8
         9b654:	e59d1124 	ldr	r1, [sp, #292]
         9b658:	e28d002c 	add	r0, sp, #44	; 0x2c
         9b65c:	eb6cab41 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         9b660:	e59d0008 	ldr	r0, [sp, #8]
         9b664:	eb6c9ed4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9b668:	e59d007c 	ldr	r0, [sp, #124]	; fField124
         9b66c:	e1a00100 	mov	r0, r0, lsl #2
         9b670:	eb6c9ab5 	bl	1bc214c <$AllocateRefHandle(long)>
         9b674:	e58d000c 	str	r0, [sp, #12]	; fField12
         9b678:	e28d200c 	add	r2, sp, #12	; 0xc
         9b67c:	e59d1120 	ldr	r1, [sp, #288]
         9b680:	e28d002c 	add	r0, sp, #44	; 0x2c
         9b684:	eb6cab37 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         9b688:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         9b68c:	eb6c9eca 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9b690:	e5dd00ec 	ldrb	r0, [sp, #236]
         9b694:	e1a00100 	mov	r0, r0, lsl #2
         9b698:	eb6c9aab 	bl	1bc214c <$AllocateRefHandle(long)>
         9b69c:	e58d0010 	str	r0, [sp, #16]	; fField16
         9b6a0:	e28d2010 	add	r2, sp, #16	; 0x10
         9b6a4:	e59d111c 	ldr	r1, [sp, #284]
         9b6a8:	e28d002c 	add	r0, sp, #44	; 0x2c
         9b6ac:	eb6cab2d 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         9b6b0:	e59d0010 	ldr	r0, [sp, #16]	; fField16
         9b6b4:	eb6c9ec0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9b6b8:	e5dd00ed 	ldrb	r0, [sp, #237]
         9b6bc:	e1a00100 	mov	r0, r0, lsl #2
         9b6c0:	eb6c9aa1 	bl	1bc214c <$AllocateRefHandle(long)>
         9b6c4:	e58d0014 	str	r0, [sp, #20]	; fField20
         9b6c8:	e28d2014 	add	r2, sp, #20	; 0x14
         9b6cc:	e59d1118 	ldr	r1, [sp, #280]
         9b6d0:	e28d002c 	add	r0, sp, #44	; 0x2c
         9b6d4:	eb6cab23 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         9b6d8:	e59d0014 	ldr	r0, [sp, #20]	; fField20
         9b6dc:	eb6c9eb6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9b6e0:	e59d00ee 	ldr	r0, [sp, #238]
         9b6e4:	e1a00820 	mov	r0, r0, lsr #16
         9b6e8:	e1a00100 	mov	r0, r0, lsl #2
         9b6ec:	eb6c9a96 	bl	1bc214c <$AllocateRefHandle(long)>
         9b6f0:	e58d0018 	str	r0, [sp, #24]	; fField24
         9b6f4:	e28d2018 	add	r2, sp, #24	; 0x18
         9b6f8:	e59d1114 	ldr	r1, [sp, #276]
         9b6fc:	e28d002c 	add	r0, sp, #44	; 0x2c
         9b700:	eb6cab18 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         9b704:	e59d0018 	ldr	r0, [sp, #24]	; fField24
         9b708:	eb6c9eab 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9b70c:	e59d00f0 	ldr	r0, [sp, #240]
         9b710:	e1a00100 	mov	r0, r0, lsl #2
         9b714:	eb6c9a8c 	bl	1bc214c <$AllocateRefHandle(long)>
         9b718:	e58d001c 	str	r0, [sp, #28]	; fField28
         9b71c:	e28d201c 	add	r2, sp, #28	; 0x1c
         9b720:	e59d1110 	ldr	r1, [sp, #272]
         9b724:	e28d002c 	add	r0, sp, #44	; 0x2c
         9b728:	eb6cab0e 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         9b72c:	e59d001c 	ldr	r0, [sp, #28]	; fField28
         9b730:	eb6c9ea1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9b734:	e59d0088 	ldr	r0, [sp, #136]	; fField136
         9b738:	e1a00100 	mov	r0, r0, lsl #2
         9b73c:	eb6c9a82 	bl	1bc214c <$AllocateRefHandle(long)>
         9b740:	e58d0020 	str	r0, [sp, #32]	; fField32
         9b744:	e28d2020 	add	r2, sp, #32	; 0x20
         9b748:	e59d110c 	ldr	r1, [sp, #268]
         9b74c:	e28d002c 	add	r0, sp, #44	; 0x2c
         9b750:	eb6cab04 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         9b754:	e59d0020 	ldr	r0, [sp, #32]	; fField32
         9b758:	eb6c9e97 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9b75c:	e28d0030 	add	r0, sp, #48	; 0x30
         9b760:	eb6cece9 	bl	1bd6b0c <TPMIterator::$IsCopyProtected(void)>
         9b764:	e1a00100 	mov	r0, r0, lsl #2
         9b768:	eb6c9a77 	bl	1bc214c <$AllocateRefHandle(long)>
         9b76c:	e58d0024 	str	r0, [sp, #36]	; fField36
         9b770:	e28d2024 	add	r2, sp, #36	; 0x24
         9b774:	e59d1108 	ldr	r1, [sp, #264]
         9b778:	e28d002c 	add	r0, sp, #44	; 0x2c
         9b77c:	eb6caaf9 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         9b780:	e59d0024 	ldr	r0, [sp, #36]	; fField36
         9b784:	eb6c9e8c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9b788:	e28d0030 	add	r0, sp, #48	; 0x30
         9b78c:	eb6cf10f 	bl	1bd7bd0 <TPMIterator::$PackageName(void)>
         9b790:	eb6d4bf2 	bl	1bee760 <$Ustrlen>
         9b794:	e3a01002 	mov	r1, #2	; 0x2
         9b798:	e0810080 	add	r0, r1, r0, lsl #1
         9b79c:	e1a00100 	mov	r0, r0, lsl #2
         9b7a0:	eb6c9a69 	bl	1bc214c <$AllocateRefHandle(long)>
         9b7a4:	e58d0028 	str	r0, [sp, #40]	; fField40
         9b7a8:	e28d2028 	add	r2, sp, #40	; 0x28
         9b7ac:	e59d1104 	ldr	r1, [sp, #260]
         9b7b0:	e28d002c 	add	r0, sp, #44	; 0x2c
         9b7b4:	eb6caaeb 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         9b7b8:	e59d0028 	ldr	r0, [sp, #40]	; fField40
         9b7bc:	eb6c9e7e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9b7c0:	e56da004 	strb	sl, [sp, -#4]!	; fField4
         9b7c4:	e24dd004 	sub	sp, sp, #4	; 0x4
         9b7c8:	e28d0038 	add	r0, sp, #56	; 0x38
         9b7cc:	eb6cf0fd 	bl	1bd7bc8 <TPMIterator::$PackageId(void)>
         9b7d0:	e28d1004 	add	r1, sp, #4	; 0x4
         9b7d4:	eb0319c5 	bl	161ef0 <SafeToDeactivatePackage(unsigned long, unsigned char *)>
         9b7d8:	e3300000 	teq	r0, #0	; 0x0
         9b7dc:	0a000007 	beq	9b800 <TDocker::GetPackageInfo(void)+0x3f4>
         9b7e0:	e28d0038 	add	r0, sp, #56	; 0x38
         9b7e4:	eb6cf0f7 	bl	1bd7bc8 <TPMIterator::$PackageId(void)>
         9b7e8:	e28d1004 	add	r1, sp, #4	; 0x4
         9b7ec:	eb0319bf 	bl	161ef0 <SafeToDeactivatePackage(unsigned long, unsigned char *)>
         9b7f0:	e1a01000 	mov	r1, r0
         9b7f4:	e3a02000 	mov	r2, #0	; 0x0
         9b7f8:	e5950000 	ldr	r0, [r5]
         9b7fc:	eb6d1e66 	bl	1be319c <$Throw>
         9b800:	e5dd0004 	ldrb	r0, [sp, #4]	; fField4
         9b804:	e3300000 	teq	r0, #0	; 0x0
         9b808:	03a00002 	moveq	r0, #2	; 0x2
         9b80c:	13a0001a 	movne	r0, #26	; 0x1a
         9b810:	eb6c9a4d 	bl	1bc214c <$AllocateRefHandle(long)>
         9b814:	e58d0000 	str	r0, [sp]
         9b818:	e1a0200d 	mov	r2, sp
         9b81c:	e59d1108 	ldr	r1, [sp, #264]
         9b820:	e28d0034 	add	r0, sp, #52	; 0x34
         9b824:	eb6caacf 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         9b828:	e59d0000 	ldr	r0, [sp]
         9b82c:	eb6c9e62 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9b830:	e28d1034 	add	r1, sp, #52	; 0x34
         9b834:	e28d0c01 	add	r0, sp, #256	; 0x100
         9b838:	eb6c9a3a 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
         9b83c:	e28dd008 	add	sp, sp, #8	; 0x8
         9b840:	e59d002c 	ldr	r0, [sp, #44]	; fField44
         9b844:	eb6c9e5c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9b848:	e28dd030 	add	sp, sp, #48	; 0x30
         9b84c:	e1a0000d 	mov	r0, sp
         9b850:	eb6cf0d5 	bl	1bd7bac <TPMIterator::$NextPackage(void)>
         9b854:	e1a0000d 	mov	r0, sp
         9b858:	eb6cecc5 	bl	1bd6b74 <TPMIterator::$More(void)>
         9b85c:	e3300000 	teq	r0, #0	; 0x0
         9b860:	1affff33 	bne	9b534 <TDocker::GetPackageInfo(void)+0x128>
         9b864:	e1a0000d 	mov	r0, sp
         9b868:	eb6cd815 	bl	1bd18c4 <TPMIterator::$Done(void)>
         9b86c:	e28d20c8 	add	r2, sp, #200	; 0xc8
         9b870:	e1a00004 	mov	r0, r4
         9b874:	e59f106c 	ldr	r1, [pc, #6c]	; 9b8e8 <TDocker::GetPackageInfo(void)+0x4dc>
         9b878:	eb68856a 	bl	1abce28 <TDocker::$WriteRef(unsigned long, RefVar const &)>
         9b87c:	e1a0000d 	mov	r0, sp
         9b880:	e3a01000 	mov	r1, #0	; 0x0
         9b884:	eb6cc799 	bl	1bcd6f0 <TPMIterator::$__dt(void)>
         9b888:	e59d0064 	ldr	r0, [sp, #100]	; fField100
         9b88c:	eb6c9e4a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9b890:	e5bd008c 	ldr	r0, [sp, #140]!	; fField140
         9b894:	eb6c9e48 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9b898:	e28dd038 	add	sp, sp, #56	; 0x38
         9b89c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         9b8a0:	eb6c9e45 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9b8a4:	e59d0008 	ldr	r0, [sp, #8]
         9b8a8:	eb6c9e43 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9b8ac:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         9b8b0:	00681f10 	rsbeq	r1, r8, r0, lsl pc
         9b8b4:	003712d0 	ldreqsb	r1, [r7], -r0
         9b8b8:	006839a8 	rsbeq	r3, r8, r8, lsr #19
         9b8bc:	00683c40 	rsbeq	r3, r8, r0, asr #24
         9b8c0:	00683c30 	rsbeq	r3, r8, r0, lsr ip
         9b8c4:	00683c58 	rsbeq	r3, r8, r8, asr ip
         9b8c8:	00682e70 	rsbeq	r2, r8, r0, ror lr
         9b8cc:	00682920 	rsbeq	r2, r8, r0, lsr #18
         9b8d0:	00682928 	rsbeq	r2, r8, r8, lsr #18
         9b8d4:	00682918 	rsbeq	r2, r8, r8, lsl r9
         9b8d8:	00683908 	rsbeq	r3, r8, r8, lsl #18
         9b8dc:	00683310 	rsbeq	r3, r8, r0, lsl r3
         9b8e0:	00683500 	rsbeq	r3, r8, r0, lsl #10
         9b8e4:	00684400 	rsbeq	r4, r8, r0, lsl #8
         9b8e8:	70696e66 	rsbvc	r6, r9, r6, ror #28
    */
}

/**
 * Symbol: TDocker::WritePatches(void)
 * Address: 0009b8ec
 */
TDocker::WritePatches(void) {
    /*
         9b8ec:	e1a0c00d 	mov	ip, sp
         9b8f0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         9b8f4:	e24cb004 	sub	fp, ip, #4	; 0x4
         9b8f8:	e1a04000 	mov	r4, r0
         9b8fc:	e3a02000 	mov	r2, #0	; 0x0
         9b900:	e59f1060 	ldr	r1, [pc, #60]	; 9b968 <TDocker::WritePatches(void)+0x7c>	; fField60
         9b904:	eb68853f 	bl	1abce08 <TEzPipeProtocol::$WriteDockerHeader(unsigned long, unsigned char)>
         9b908:	eb6d0546 	bl	1bdce28 <$SizeOfPatches(void)>
         9b90c:	e1a01000 	mov	r1, r0
         9b910:	e1a05000 	mov	r5, r0
         9b914:	e5940000 	ldr	r0, [r4]
         9b918:	eb6d2664 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         9b91c:	e3350000 	teq	r5, #0	; 0x0
         9b920:	0a000009 	beq	9b94c <TDocker::WritePatches(void)+0x60>
         9b924:	e5940000 	ldr	r0, [r4]
         9b928:	eb6ccfa4 	bl	1bcf7c0 <$BackupPatches(CPipe *)>
         9b92c:	e5840050 	str	r0, [r4, #80]	; fField80
         9b930:	e3300000 	teq	r0, #0	; 0x0
         9b934:	0a000004 	beq	9b94c <TDocker::WritePatches(void)+0x60>
         9b938:	e1a01000 	mov	r1, r0
         9b93c:	e59f0028 	ldr	r0, [pc, #28]	; 9b96c <TDocker::WritePatches(void)+0x80>	; fField28
         9b940:	e5900000 	ldr	r0, [r0]
         9b944:	e3a02000 	mov	r2, #0	; 0x0
         9b948:	eb6d1e13 	bl	1be319c <$Throw>
         9b94c:	e1a01005 	mov	r1, r5
         9b950:	e1a00004 	mov	r0, r4
         9b954:	eb680541 	bl	1a9ce60 <TDocker::$Pad(unsigned long)>
         9b958:	e5940000 	ldr	r0, [r4]
         9b95c:	e5901000 	ldr	r1, [r0]
         9b960:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         9b964:	e281f020 	add	pc, r1, #32	; 0x20
         9b968:	70617463 	rsbvc	r7, r1, r3, ror #8
         9b96c:	003712d0 	ldreqsb	r1, [r7], -r0
    */
}

/**
 * Symbol: TDocker::SetTimeout(void)
 * Address: 0009b970
 */
TDocker::SetTimeout(void) {
    /*
         9b970:	e1a0c00d 	mov	ip, sp
         9b974:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         9b978:	e24cb004 	sub	fp, ip, #4	; 0x4
         9b97c:	e1a04000 	mov	r4, r0
         9b980:	e24dd004 	sub	sp, sp, #4	; 0x4
         9b984:	e1a0100d 	mov	r1, sp
         9b988:	e5900000 	ldr	r0, [r0]
         9b98c:	eb6d264e 	bl	1be52cc <CPipe::$__rs(unsigned long &)>
         9b990:	e59d0000 	ldr	r0, [sp]
         9b994:	e0601280 	rsb	r1, r0, r0, lsl #5
         9b998:	e0611400 	rsb	r1, r1, r0, lsl #8
         9b99c:	e1a01701 	mov	r1, r1, lsl #14
         9b9a0:	e5940000 	ldr	r0, [r4]
         9b9a4:	eb6c7ce7 	bl	1bbad48 <TEndpointPipe::$SetTimeout(unsigned long)>
         9b9a8:	e1a00004 	mov	r0, r4
         9b9ac:	e3a01000 	mov	r1, #0	; 0x0
         9b9b0:	eb68851d 	bl	1abce2c <TDocker::$WriteResult(long)>
         9b9b4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::WriteSyncOptions(void)
 * Address: 0009b9b8
 */
TDocker::WriteSyncOptions(void) {
    /*
         9b9b8:	e280200c 	add	r2, r0, #12	; 0xc
         9b9bc:	e59f1000 	ldr	r1, [pc, #0]	; 9b9c4 <TDocker::WriteSyncOptions(void)+0xc>
         9b9c0:	ea688518 	b	1abce28 <TDocker::$WriteRef(unsigned long, RefVar const &)>
         9b9c4:	736f7074 	cmnvc	pc, #116	; 0x74
    */
}

/**
 * Symbol: TDocker::SetStoreSignature(void)
 * Address: 0009b9c8
 */
TDocker::SetStoreSignature(void) {
    /*
         9b9c8:	e1a0c00d 	mov	ip, sp
         9b9cc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         9b9d0:	e24cb004 	sub	fp, ip, #4	; 0x4
         9b9d4:	e1a04000 	mov	r4, r0
         9b9d8:	e24dd004 	sub	sp, sp, #4	; 0x4
         9b9dc:	e1a0100d 	mov	r1, sp
         9b9e0:	e5900000 	ldr	r0, [r0]
         9b9e4:	eb6d2638 	bl	1be52cc <CPipe::$__rs(unsigned long &)>
         9b9e8:	e24dd004 	sub	sp, sp, #4	; 0x4
         9b9ec:	e2840010 	add	r0, r4, #16	; 0x10
         9b9f0:	e1a05000 	mov	r5, r0
         9b9f4:	e5900000 	ldr	r0, [r0]
         9b9f8:	e5900000 	ldr	r0, [r0]
         9b9fc:	e3300002 	teq	r0, #2	; 0x2
         9ba00:	0a000008 	beq	9ba28 <TDocker::SetStoreSignature(void)+0x60>
         9ba04:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         9ba08:	e1a00100 	mov	r0, r0, lsl #2
         9ba0c:	eb6c99ce 	bl	1bc214c <$AllocateRefHandle(long)>
         9ba10:	e58d0000 	str	r0, [sp]
         9ba14:	e1a0100d 	mov	r1, sp
         9ba18:	e1a00005 	mov	r0, r5
         9ba1c:	eb671599 	bl	1a61088 <$StoreSetSignature>
         9ba20:	e59d0000 	ldr	r0, [sp]
         9ba24:	eb6c9de4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9ba28:	e1a00004 	mov	r0, r4
         9ba2c:	e3a01000 	mov	r1, #0	; 0x0
         9ba30:	eb6884fd 	bl	1abce2c <TDocker::$WriteResult(long)>
         9ba34:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::SetSoupSignature(void)
 * Address: 0009ba38
 */
TDocker::SetSoupSignature(void) {
    /*
         9ba38:	e1a0c00d 	mov	ip, sp
         9ba3c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         9ba40:	e24cb004 	sub	fp, ip, #4	; 0x4
         9ba44:	e1a04000 	mov	r4, r0
         9ba48:	e24dd004 	sub	sp, sp, #4	; 0x4
         9ba4c:	e1a0100d 	mov	r1, sp
         9ba50:	e5900000 	ldr	r0, [r0]
         9ba54:	eb6d261c 	bl	1be52cc <CPipe::$__rs(unsigned long &)>
         9ba58:	e2840014 	add	r0, r4, #20	; 0x14
         9ba5c:	e5901000 	ldr	r1, [r0]
         9ba60:	e5911000 	ldr	r1, [r1]
         9ba64:	e3310002 	teq	r1, #2	; 0x2
         9ba68:	159d1000 	ldrne	r1, [sp]
         9ba6c:	1b6cae57 	blne	1bc73d0 <$SoupSetSignature(RefVar const &, long)>
         9ba70:	e1a00004 	mov	r0, r4
         9ba74:	e3a01000 	mov	r1, #0	; 0x0
         9ba78:	eb6884eb 	bl	1abce2c <TDocker::$WriteResult(long)>
         9ba7c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::ReadString(unsigned long)
 * Address: 0009bb1c
 */
TDocker::ReadString(unsigned long) {
    /*
         9bb1c:	e1a0c00d 	mov	ip, sp
         9bb20:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         9bb24:	e24cb004 	sub	fp, ip, #4	; 0x4
         9bb28:	e1a05000 	mov	r5, r0
         9bb2c:	e1b04001 	movs	r4, r1
         9bb30:	e3a06000 	mov	r6, #0	; 0x0
         9bb34:	0a000014 	beq	9bb8c <TDocker::ReadString(unsigned long)+0x70>
         9bb38:	e1a00004 	mov	r0, r4
         9bb3c:	eb6d197f 	bl	1be2140 <$NewPtr>
         9bb40:	e1b06000 	movs	r6, r0
         9bb44:	01a00005 	moveq	r0, r5
         9bb48:	0b68997e 	bleq	1ac2148 <TDocker::$OutOfMemory(void)>
         9bb4c:	e3a00000 	mov	r0, #0	; 0x0
         9bb50:	e52d006c 	str	r0, [sp, -#108]!	; fField108
         9bb54:	e28d0008 	add	r0, sp, #8	; 0x8
         9bb58:	eb6c5b85 	bl	1bb2974 <$setjmp>
         9bb5c:	e3300000 	teq	r0, #0	; 0x0
         9bb60:	1a00000b 	bne	9bb94 <TDocker::ReadString(unsigned long)+0x78>
         9bb64:	e1a0000d 	mov	r0, sp
         9bb68:	eb6d1143 	bl	1be007c <$AddExceptionHandler>
         9bb6c:	e1a02004 	mov	r2, r4
         9bb70:	e1a01006 	mov	r1, r6
         9bb74:	e1a00005 	mov	r0, r5
         9bb78:	e3a03001 	mov	r3, #1	; 0x1
         9bb7c:	eb680cf2 	bl	1a9ef4c <TDocker::$ReadChunk(void *, long, unsigned char)>
         9bb80:	e1a0000d 	mov	r0, sp
         9bb84:	eb6d154b 	bl	1be10b8 <$ExitHandler>
         9bb88:	e28dd06c 	add	sp, sp, #108	; 0x6c
         9bb8c:	e1a00006 	mov	r0, r6
         9bb90:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         9bb94:	e1a00006 	mov	r0, r6
         9bb98:	eb6d1545 	bl	1be10b4 <$DisposPtr>
         9bb9c:	e1a0000d 	mov	r0, sp
         9bba0:	eb6d196b 	bl	1be2154 <$NextHandler>
         9bba4:	eafffffa 	b	9bb94 <TDocker::ReadString(unsigned long)+0x78>
    */
}

/**
 * Symbol: TDocker::ReadSourceVersion(void)
 * Address: 0009bba8
 */
TDocker::ReadSourceVersion(void) {
    /*
         9bba8:	e1a0c00d 	mov	ip, sp
         9bbac:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         9bbb0:	e24cb004 	sub	fp, ip, #4	; 0x4
         9bbb4:	e1a04000 	mov	r4, r0
         9bbb8:	e2801060 	add	r1, r0, #96	; 0x60
         9bbbc:	e5900000 	ldr	r0, [r0]
         9bbc0:	eb6d25c1 	bl	1be52cc <CPipe::$__rs(unsigned long &)>
         9bbc4:	e5940048 	ldr	r0, [r4, #72]	; fField72
         9bbc8:	e3500004 	cmp	r0, #4	; 0x4
         9bbcc:	9a000006 	bls	9bbec <TDocker::ReadSourceVersion(void)+0x44>
         9bbd0:	e2841064 	add	r1, r4, #100	; 0x64
         9bbd4:	e5940000 	ldr	r0, [r4]
         9bbd8:	eb6d25bb 	bl	1be52cc <CPipe::$__rs(unsigned long &)>
         9bbdc:	e2841068 	add	r1, r4, #104	; 0x68
         9bbe0:	e5940000 	ldr	r0, [r4]
         9bbe4:	eb6d25b8 	bl	1be52cc <CPipe::$__rs(unsigned long &)>
         9bbe8:	ea000002 	b	9bbf8 <TDocker::ReadSourceVersion(void)+0x50>
         9bbec:	e3a00000 	mov	r0, #0	; 0x0
         9bbf0:	e5840064 	str	r0, [r4, #100]	; fField100
         9bbf4:	e5840068 	str	r0, [r4, #104]	; fField104
         9bbf8:	e1a00004 	mov	r0, r4
         9bbfc:	e3a01000 	mov	r1, #0	; 0x0
         9bc00:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         9bc04:	ea688488 	b	1abce2c <TDocker::$WriteResult(long)>
    */
}

/**
 * Symbol: TDocker::WriteNewtonName(void)
 * Address: 0009bc08
 */
TDocker::WriteNewtonName(void) {
    /*
         9bc08:	e1a0c00d 	mov	ip, sp
         9bc0c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         9bc10:	e24cb004 	sub	fp, ip, #4	; 0x4
         9bc14:	e1a04000 	mov	r4, r0
         9bc18:	e59f0024 	ldr	r0, [pc, #24]	; 9bc44 <TDocker::WriteNewtonName(void)+0x3c>	; fField24
         9bc1c:	e1a06000 	mov	r6, r0
         9bc20:	eb67ebb7 	bl	1a96b04 <$GetPreference(RefVar const &)>
         9bc24:	e3300002 	teq	r0, #2	; 0x2
         9bc28:	0a000006 	beq	9bc48 <TDocker::WriteNewtonName(void)+0x40>
         9bc2c:	e3100003 	tst	r0, #3	; 0x3
         9bc30:	01a00140 	moveq	r0, r0, asr #2
         9bc34:	0a000000 	beq	9bc3c <TDocker::WriteNewtonName(void)+0x34>
         9bc38:	eb6c9937 	bl	1bc211c <$_RINTError(long)>
         9bc3c:	e1a05000 	mov	r5, r0
         9bc40:	ea000016 	b	9bca0 <TDocker::WriteNewtonName(void)+0x98>
         9bc44:	006839f0 	streqd	r3, [r8], -#144	; fField144
         9bc48:	eb6acee2 	bl	1b4f7d8 <$GetRandSeed(void)>
         9bc4c:	e1a07000 	mov	r7, r0
         9bc50:	eb680cc4 	bl	1a9ef68 <$RealClock(void)>
         9bc54:	eb6ae36a 	bl	1b54a04 <$SetRandSeed(long)>
         9bc58:	e24dd004 	sub	sp, sp, #4	; 0x4
         9bc5c:	eb6adf4b 	bl	1b53990 <$Random(void)>
         9bc60:	e1a05000 	mov	r5, r0
         9bc64:	eb6adf49 	bl	1b53990 <$Random(void)>
         9bc68:	e0955800 	adds	r5, r5, r0, lsl #16
         9bc6c:	13750001 	cmnne	r5, #1	; 0x1
         9bc70:	0afffff9 	beq	9bc5c <TDocker::WriteNewtonName(void)+0x54>
         9bc74:	e1a00105 	mov	r0, r5, lsl #2
         9bc78:	eb6c9933 	bl	1bc214c <$AllocateRefHandle(long)>
         9bc7c:	e58d0000 	str	r0, [sp]
         9bc80:	e1a0100d 	mov	r1, sp
         9bc84:	e1a00006 	mov	r0, r6
         9bc88:	eb681929 	bl	1aa2134 <$SetPreference__FRC6RefVarT1>
         9bc8c:	e59d0000 	ldr	r0, [sp]
         9bc90:	eb6c9d49 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9bc94:	e1a00007 	mov	r0, r7
         9bc98:	eb6ae359 	bl	1b54a04 <$SetRandSeed(long)>
         9bc9c:	e28dd004 	add	sp, sp, #4	; 0x4
         9bca0:	e24dd008 	sub	sp, sp, #8	; 0x8
         9bca4:	e59f0028 	ldr	r0, [pc, #28]	; 9bcd4 <TDocker::WriteNewtonName(void)+0xcc>	; fField28
         9bca8:	eb67eb95 	bl	1a96b04 <$GetPreference(RefVar const &)>
         9bcac:	eb6c9926 	bl	1bc214c <$AllocateRefHandle(long)>
         9bcb0:	e58d0004 	str	r0, [sp, #4]	; fField4
         9bcb4:	e5900000 	ldr	r0, [r0]
         9bcb8:	e3300002 	teq	r0, #2	; 0x2
         9bcbc:	1a000005 	bne	9bcd8 <TDocker::WriteNewtonName(void)+0xd0>
         9bcc0:	e3a01000 	mov	r1, #0	; 0x0
         9bcc4:	e5cd1001 	strb	r1, [sp, #1]
         9bcc8:	e5cd1000 	strb	r1, [sp]
         9bccc:	e1a0600d 	mov	r6, sp
         9bcd0:	ea000003 	b	9bce4 <TDocker::WriteNewtonName(void)+0xdc>
         9bcd4:	006839a8 	rsbeq	r3, r8, r8, lsr #19
         9bcd8:	e28d0004 	add	r0, sp, #4	; 0x4
         9bcdc:	eb6c9d28 	bl	1bc3184 <$GetCString(RefVar const &)>
         9bce0:	e1a06000 	mov	r6, r0
         9bce4:	e24dd008 	sub	sp, sp, #8	; 0x8
         9bce8:	e2840020 	add	r0, r4, #32	; 0x20
         9bcec:	e59f1268 	ldr	r1, [pc, #268]	; 9bf5c <TDocker::WriteNewtonName(void)+0x354>
         9bcf0:	e3a02000 	mov	r2, #0	; 0x0
         9bcf4:	eb6ca15b 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         9bcf8:	e3100003 	tst	r0, #3	; 0x3
         9bcfc:	01a00140 	moveq	r0, r0, asr #2
         9bd00:	0a000000 	beq	9bd08 <TDocker::WriteNewtonName(void)+0x100>
         9bd04:	eb6c9904 	bl	1bc211c <$_RINTError(long)>
         9bd08:	e1a0a000 	mov	sl, r0
         9bd0c:	e59f124c 	ldr	r1, [pc, #24c]	; 9bf60 <TDocker::WriteNewtonName(void)+0x358>	; fField24
         9bd10:	e8915000 	ldmia	r1, {ip, lr}
         9bd14:	e88d5000 	stmia	sp, {ip, lr}
         9bd18:	eb6739fe 	bl	1a6a518 <$GetSerialNumberROMObject(void)>
         9bd1c:	e1a0100d 	mov	r1, sp
         9bd20:	eb674255 	bl	1a6c67c <TSerialNumberROM::$GetSystemSerialNumber(unsigned long *)>
         9bd24:	e3a09003 	mov	r9, #3	; 0x3
         9bd28:	e1a00004 	mov	r0, r4
         9bd2c:	e3a02000 	mov	r2, #0	; 0x0
         9bd30:	e59f122c 	ldr	r1, [pc, #22c]	; 9bf64 <TDocker::WriteNewtonName(void)+0x35c>
         9bd34:	eb688433 	bl	1abce08 <TEzPipeProtocol::$WriteDockerHeader(unsigned long, unsigned char)>
         9bd38:	e1a00006 	mov	r0, r6
         9bd3c:	eb6d4a87 	bl	1bee760 <$Ustrlen>
         9bd40:	e3a01002 	mov	r1, #2	; 0x2
         9bd44:	e0818080 	add	r8, r1, r0, lsl #1
         9bd48:	e288104c 	add	r1, r8, #76	; 0x4c
         9bd4c:	e5940000 	ldr	r0, [r4]
         9bd50:	eb6d2556 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         9bd54:	e24dd044 	sub	sp, sp, #68	; 0x44
         9bd58:	e28d003c 	add	r0, sp, #60	; 0x3c
         9bd5c:	eb6cc65d 	bl	1bcd6d8 <TUGestalt::$__ct(void)>
         9bd60:	e1a0200d 	mov	r2, sp
         9bd64:	e28d003c 	add	r0, sp, #60	; 0x3c
         9bd68:	e3a0303c 	mov	r3, #60	; 0x3c
         9bd6c:	e3a01401 	mov	r1, #16777216	; 0x1000000
         9bd70:	e2811003 	add	r1, r1, #3	; 0x3
         9bd74:	eb6cdafc 	bl	1bd296c <TUGestalt::$Gestalt(unsigned long, void *, unsigned long)>
         9bd78:	e5840050 	str	r0, [r4, #80]	; fField80
         9bd7c:	e1b01000 	movs	r1, r0
         9bd80:	e59f71e0 	ldr	r7, [pc, #1e0]	; 9bf68 <TDocker::WriteNewtonName(void)+0x360>
         9bd84:	13a02000 	movne	r2, #0	; 0x0
         9bd88:	15970000 	ldrne	r0, [r7]
         9bd8c:	1b6d1d02 	blne	1be319c <$Throw>
         9bd90:	e24dd004 	sub	sp, sp, #4	; 0x4
         9bd94:	e1a0200d 	mov	r2, sp
         9bd98:	e28d0040 	add	r0, sp, #64	; 0x40
         9bd9c:	e3a03004 	mov	r3, #4	; 0x4
         9bda0:	e3a01401 	mov	r1, #16777216	; 0x1000000
         9bda4:	e2811005 	add	r1, r1, #5	; 0x5
         9bda8:	eb6cdaef 	bl	1bd296c <TUGestalt::$Gestalt(unsigned long, void *, unsigned long)>
         9bdac:	e5840050 	str	r0, [r4, #80]	; fField80
         9bdb0:	e3300000 	teq	r0, #0	; 0x0
         9bdb4:	0a000003 	beq	9bdc8 <TDocker::WriteNewtonName(void)+0x1c0>
         9bdb8:	e1a01000 	mov	r1, r0
         9bdbc:	e3a02000 	mov	r2, #0	; 0x0
         9bdc0:	e5970000 	ldr	r0, [r7]
         9bdc4:	eb6d1cf4 	bl	1be319c <$Throw>
         9bdc8:	e3a01048 	mov	r1, #72	; 0x48
         9bdcc:	e5940000 	ldr	r0, [r4]
         9bdd0:	eb6d2536 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         9bdd4:	e1a01005 	mov	r1, r5
         9bdd8:	e5940000 	ldr	r0, [r4]
         9bddc:	eb6d2533 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         9bde0:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         9bde4:	e5841058 	str	r1, [r4, #88]	; fField88
         9bde8:	e5940000 	ldr	r0, [r4]
         9bdec:	eb6d252f 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         9bdf0:	e59d1008 	ldr	r1, [sp, #8]
         9bdf4:	e584105c 	str	r1, [r4, #92]	; fField92
         9bdf8:	e5940000 	ldr	r0, [r4]
         9bdfc:	eb6d252b 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         9be00:	e59d100c 	ldr	r1, [sp, #12]	; fField12
         9be04:	e5940000 	ldr	r0, [r4]
         9be08:	eb6d2528 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         9be0c:	e59d1010 	ldr	r1, [sp, #16]	; fField16
         9be10:	e5940000 	ldr	r0, [r4]
         9be14:	eb6d2525 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         9be18:	e59d1014 	ldr	r1, [sp, #20]	; fField20
         9be1c:	e5940000 	ldr	r0, [r4]
         9be20:	eb6d2522 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         9be24:	e59d101c 	ldr	r1, [sp, #28]	; fField28
         9be28:	e5940000 	ldr	r0, [r4]
         9be2c:	eb6d251f 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         9be30:	e59d1018 	ldr	r1, [sp, #24]	; fField24
         9be34:	e5940000 	ldr	r0, [r4]
         9be38:	eb6d251c 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         9be3c:	e59d1020 	ldr	r1, [sp, #32]	; fField32
         9be40:	e5940000 	ldr	r0, [r4]
         9be44:	eb6d2519 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         9be48:	e59d1000 	ldr	r1, [sp]
         9be4c:	e5940000 	ldr	r0, [r4]
         9be50:	eb6d2516 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         9be54:	e24dd004 	sub	sp, sp, #4	; 0x4
         9be58:	eb6ca103 	bl	1bc426c <$GetStores(void)>
         9be5c:	eb6c98ba 	bl	1bc214c <$AllocateRefHandle(long)>
         9be60:	e58d0000 	str	r0, [sp]
         9be64:	e5900000 	ldr	r0, [r0]
         9be68:	e3a01000 	mov	r1, #0	; 0x0
         9be6c:	eb6ca0f8 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         9be70:	e59d1000 	ldr	r1, [sp]
         9be74:	e5810000 	str	r0, [r1]
         9be78:	e1a0000d 	mov	r0, sp
         9be7c:	eb6cad5b 	bl	1bc73f0 <$StoreGetSignature>
         9be80:	e3100003 	tst	r0, #3	; 0x3
         9be84:	01a00140 	moveq	r0, r0, asr #2
         9be88:	0a000000 	beq	9be90 <TDocker::WriteNewtonName(void)+0x288>
         9be8c:	eb6c98a2 	bl	1bc211c <$_RINTError(long)>
         9be90:	e1a01000 	mov	r1, r0
         9be94:	e5940000 	ldr	r0, [r4]
         9be98:	eb6d2504 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         9be9c:	e59d1028 	ldr	r1, [sp, #40]	; fField40
         9bea0:	e1a01841 	mov	r1, r1, asr #16
         9bea4:	e5940000 	ldr	r0, [r4]
         9bea8:	eb6d2500 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         9beac:	e59d102a 	ldr	r1, [sp, #42]
         9beb0:	e1a01841 	mov	r1, r1, asr #16
         9beb4:	e5940000 	ldr	r0, [r4]
         9beb8:	eb6d24fc 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         9bebc:	e59d102c 	ldr	r1, [sp, #44]	; fField44
         9bec0:	e5940000 	ldr	r0, [r4]
         9bec4:	eb6d24f9 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         9bec8:	e1a01009 	mov	r1, r9
         9becc:	e5940000 	ldr	r0, [r4]
         9bed0:	eb6d24f6 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         9bed4:	e59d104c 	ldr	r1, [sp, #76]	; fField76
         9bed8:	e5940000 	ldr	r0, [r4]
         9bedc:	eb6d24f3 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         9bee0:	e59d1050 	ldr	r1, [sp, #80]	; fField80
         9bee4:	e5940000 	ldr	r0, [r4]
         9bee8:	eb6d24f0 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         9beec:	e1a0100a 	mov	r1, sl
         9bef0:	e5940000 	ldr	r0, [r4]
         9bef4:	eb6d24ed 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         9bef8:	e1a02008 	mov	r2, r8
         9befc:	e1a01006 	mov	r1, r6
         9bf00:	e594c000 	ldr	ip, [r4]
         9bf04:	e1a0000c 	mov	r0, ip
         9bf08:	e3a03000 	mov	r3, #0	; 0x0
         9bf0c:	e59cc000 	ldr	ip, [ip]
         9bf10:	e1a0e00f 	mov	lr, pc
         9bf14:	e28cf018 	add	pc, ip, #24	; 0x18
         9bf18:	e1a01008 	mov	r1, r8
         9bf1c:	e1a00004 	mov	r0, r4
         9bf20:	eb6803ce 	bl	1a9ce60 <TDocker::$Pad(unsigned long)>
         9bf24:	e5940000 	ldr	r0, [r4]
         9bf28:	e5901000 	ldr	r1, [r0]
         9bf2c:	e1a0e00f 	mov	lr, pc
         9bf30:	e281f020 	add	pc, r1, #32	; 0x20
         9bf34:	e59d0000 	ldr	r0, [sp]
         9bf38:	eb6c9c9f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9bf3c:	e28dd008 	add	sp, sp, #8	; 0x8
         9bf40:	e28d003c 	add	r0, sp, #60	; 0x3c
         9bf44:	e3a01000 	mov	r1, #0	; 0x0
         9bf48:	eb6cc9f5 	bl	1bce724 <TUObject::$__dt(void)>
         9bf4c:	e28dd04c 	add	sp, sp, #76	; 0x4c
         9bf50:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         9bf54:	eb6c9c98 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9bf58:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         9bf5c:	00684068 	rsbeq	r4, r8, r8, rrx
         9bf60:	00371288 	eoreqs	r1, r7, r8, lsl #5
         9bf64:	6e616d65 	cdpvs	13, 6, cr6, cr1, cr5, {3}
         9bf68:	003712d0 	ldreqsb	r1, [r7], -r0
    */
}

/**
 * Symbol: TDocker::FlushCommand(void)
 * Address: 0009bf6c
 */
TDocker::FlushCommand(void) {
    /*
         9bf6c:	e1a0c00d 	mov	ip, sp
         9bf70:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         9bf74:	e24cb004 	sub	fp, ip, #4	; 0x4
         9bf78:	e1a04000 	mov	r4, r0
         9bf7c:	e5900048 	ldr	r0, [r0, #72]	; fField72
         9bf80:	e3500000 	cmp	r0, #0	; 0x0
         9bf84:	991ba870 	ldmlsdb	fp, {r4, r5, r6, fp, sp, pc}
         9bf88:	eb6d186c 	bl	1be2140 <$NewPtr>
         9bf8c:	e1b05000 	movs	r5, r0
         9bf90:	01a00004 	moveq	r0, r4
         9bf94:	0b68986b 	bleq	1ac2148 <TDocker::$OutOfMemory(void)>
         9bf98:	e3a00000 	mov	r0, #0	; 0x0
         9bf9c:	e3a06000 	mov	r6, #0	; 0x0
         9bfa0:	e52d006c 	str	r0, [sp, -#108]!	; fField108
         9bfa4:	e28d0008 	add	r0, sp, #8	; 0x8
         9bfa8:	eb6c5a71 	bl	1bb2974 <$setjmp>
         9bfac:	e3300000 	teq	r0, #0	; 0x0
         9bfb0:	1a000009 	bne	9bfdc <TDocker::FlushCommand(void)+0x70>
         9bfb4:	e1a0000d 	mov	r0, sp
         9bfb8:	eb6d102f 	bl	1be007c <$AddExceptionHandler>
         9bfbc:	e1a01005 	mov	r1, r5
         9bfc0:	e5942048 	ldr	r2, [r4, #72]	; fField72
         9bfc4:	e1a00004 	mov	r0, r4
         9bfc8:	e3a03001 	mov	r3, #1	; 0x1
         9bfcc:	eb680bde 	bl	1a9ef4c <TDocker::$ReadChunk(void *, long, unsigned char)>
         9bfd0:	e1a0000d 	mov	r0, sp
         9bfd4:	eb6d1437 	bl	1be10b8 <$ExitHandler>
         9bfd8:	ea000000 	b	9bfe0 <TDocker::FlushCommand(void)+0x74>
         9bfdc:	e3a06001 	mov	r6, #1	; 0x1
         9bfe0:	e1a00005 	mov	r0, r5
         9bfe4:	eb6d1432 	bl	1be10b4 <$DisposPtr>
         9bfe8:	e3360000 	teq	r6, #0	; 0x0
         9bfec:	11a0000d 	movne	r0, sp
         9bff0:	1b6d1857 	blne	1be2154 <$NextHandler>
         9bff4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::TestMessage(void)
 * Address: 0009bff8
 */
TDocker::TestMessage(void) {
    /*
         9bff8:	e1a0c00d 	mov	ip, sp
         9bffc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         9c000:	e24cb004 	sub	fp, ip, #4	; 0x4
         9c004:	e1a04000 	mov	r4, r0
         9c008:	e5900048 	ldr	r0, [r0, #72]	; fField72
         9c00c:	e59f50a8 	ldr	r5, [pc, #a8]	; 9c0bc <TDocker::TestMessage(void)+0xc4>
         9c010:	e3500000 	cmp	r0, #0	; 0x0
         9c014:	9a00000a 	bls	9c044 <TDocker::TestMessage(void)+0x4c>
         9c018:	eb6d1848 	bl	1be2140 <$NewPtr>
         9c01c:	e1b06000 	movs	r6, r0
         9c020:	01a00004 	moveq	r0, r4
         9c024:	0b689847 	bleq	1ac2148 <TDocker::$OutOfMemory(void)>
         9c028:	e1a01006 	mov	r1, r6
         9c02c:	e5942048 	ldr	r2, [r4, #72]	; fField72
         9c030:	e1a00004 	mov	r0, r4
         9c034:	e3a03001 	mov	r3, #1	; 0x1
         9c038:	eb680bc3 	bl	1a9ef4c <TDocker::$ReadChunk(void *, long, unsigned char)>
         9c03c:	e3360000 	teq	r6, #0	; 0x0
         9c040:	1a000004 	bne	9c058 <TDocker::TestMessage(void)+0x60>
         9c044:	e1a00004 	mov	r0, r4
         9c048:	e3a02001 	mov	r2, #1	; 0x1
         9c04c:	e1a01005 	mov	r1, r5
         9c050:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         9c054:	ea68836b 	b	1abce08 <TEzPipeProtocol::$WriteDockerHeader(unsigned long, unsigned char)>
         9c058:	e1a00004 	mov	r0, r4
         9c05c:	e3a02000 	mov	r2, #0	; 0x0
         9c060:	e1a01005 	mov	r1, r5
         9c064:	eb688367 	bl	1abce08 <TEzPipeProtocol::$WriteDockerHeader(unsigned long, unsigned char)>
         9c068:	e5940000 	ldr	r0, [r4]
         9c06c:	e5941048 	ldr	r1, [r4, #72]	; fField72
         9c070:	eb6d248e 	bl	1be52b0 <CPipe::$__ls(unsigned long)>
         9c074:	e1a01006 	mov	r1, r6
         9c078:	e594c000 	ldr	ip, [r4]
         9c07c:	e1a0000c 	mov	r0, ip
         9c080:	e3a03000 	mov	r3, #0	; 0x0
         9c084:	e5942048 	ldr	r2, [r4, #72]	; fField72
         9c088:	e59cc000 	ldr	ip, [ip]
         9c08c:	e1a0e00f 	mov	lr, pc
         9c090:	e28cf018 	add	pc, ip, #24	; 0x18
         9c094:	e5941048 	ldr	r1, [r4, #72]	; fField72
         9c098:	e1a00004 	mov	r0, r4
         9c09c:	eb68036f 	bl	1a9ce60 <TDocker::$Pad(unsigned long)>
         9c0a0:	e5940000 	ldr	r0, [r4]
         9c0a4:	e5901000 	ldr	r1, [r0]
         9c0a8:	e1a0e00f 	mov	lr, pc
         9c0ac:	e281f020 	add	pc, r1, #32	; 0x20
         9c0b0:	e1a00006 	mov	r0, r6
         9c0b4:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         9c0b8:	ea6d13fd 	b	1be10b4 <$DisposPtr>
         9c0bc:	74657374 	strvcbt	r7, [r5], -#884
    */
}

/**
 * Symbol: TDocker::TestRefMessage(void)
 * Address: 0009c0c0
 */
TDocker::TestRefMessage(void) {
    /*
         9c0c0:	e1a0c00d 	mov	ip, sp
         9c0c4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         9c0c8:	e24cb004 	sub	fp, ip, #4	; 0x4
         9c0cc:	e1a04000 	mov	r4, r0
         9c0d0:	e5900048 	ldr	r0, [r0, #72]	; fField72
         9c0d4:	e59f5070 	ldr	r5, [pc, #70]	; 9c14c <TDocker::TestRefMessage(void)+0x8c>
         9c0d8:	e3300000 	teq	r0, #0	; 0x0
         9c0dc:	1a000004 	bne	9c0f4 <TDocker::TestRefMessage(void)+0x34>
         9c0e0:	e1a00004 	mov	r0, r4
         9c0e4:	e3a02001 	mov	r2, #1	; 0x1
         9c0e8:	e1a01005 	mov	r1, r5
         9c0ec:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         9c0f0:	ea688344 	b	1abce08 <TEzPipeProtocol::$WriteDockerHeader(unsigned long, unsigned char)>
         9c0f4:	e24dd008 	sub	sp, sp, #8	; 0x8
         9c0f8:	e3a00002 	mov	r0, #2	; 0x2
         9c0fc:	eb6c9812 	bl	1bc214c <$AllocateRefHandle(long)>
         9c100:	e58d0000 	str	r0, [sp]
         9c104:	e1a0100d 	mov	r1, sp
         9c108:	e1a00004 	mov	r0, r4
         9c10c:	eb686eb7 	bl	1ab7bf0 <TDocker::$ReadRef(RefVar const &)>
         9c110:	eb6c980d 	bl	1bc214c <$AllocateRefHandle(long)>
         9c114:	e58d0004 	str	r0, [sp, #4]	; fField4
         9c118:	e59d0000 	ldr	r0, [sp]
         9c11c:	eb6c9c26 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9c120:	e1a00004 	mov	r0, r4
         9c124:	e3a02000 	mov	r2, #0	; 0x0
         9c128:	e1a01005 	mov	r1, r5
         9c12c:	eb688335 	bl	1abce08 <TEzPipeProtocol::$WriteDockerHeader(unsigned long, unsigned char)>
         9c130:	e28d2004 	add	r2, sp, #4	; 0x4
         9c134:	e1a00004 	mov	r0, r4
         9c138:	e59f100c 	ldr	r1, [pc, #c]	; 9c14c <TDocker::TestRefMessage(void)+0x8c>
         9c13c:	eb688339 	bl	1abce28 <TDocker::$WriteRef(unsigned long, RefVar const &)>
         9c140:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         9c144:	eb6c9c1c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9c148:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         9c14c:	72747374 	rsbvcs	r7, r4, #-805306367	; 0xd0000001
    */
}

/**
 * Symbol: TDocker::CheckProtocolExtension(unsigned long, unsigned char &)
 * Address: 0009c150
 */
TDocker::CheckProtocolExtension(unsigned long, unsigned char &) {
    /*
         9c150:	e1a0c00d 	mov	ip, sp
         9c154:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         9c158:	e24cb004 	sub	fp, ip, #4	; 0x4
         9c15c:	e1a04000 	mov	r4, r0
         9c160:	e1a05002 	mov	r5, r2
         9c164:	e3a06000 	mov	r6, #0	; 0x0
         9c168:	e5900080 	ldr	r0, [r0, #128]	; fField128
         9c16c:	e3300000 	teq	r0, #0	; 0x0
         9c170:	0a00001e 	beq	9c1f0 <TDocker::CheckProtocolExtension(unsigned long, unsigned char &)+0xa0>
         9c174:	eb6893ce 	bl	1ac10b4 <TDockerDynArray::$Find(long)>
         9c178:	e1b08000 	movs	r8, r0
         9c17c:	4a00001b 	bmi	9c1f0 <TDocker::CheckProtocolExtension(unsigned long, unsigned char &)+0xa0>
         9c180:	e3a06001 	mov	r6, #1	; 0x1
         9c184:	e5c46030 	strb	r6, [r4, #48]	; fField48
         9c188:	e24dd004 	sub	sp, sp, #4	; 0x4
         9c18c:	e1a00004 	mov	r0, r4
         9c190:	eb6893d9 	bl	1ac10fc <TDocker::$GetTDockerLock(void)>
         9c194:	e1a07000 	mov	r7, r0
         9c198:	e1a00004 	mov	r0, r4
         9c19c:	eb687f00 	bl	1abbda4 <TDocker::$UnlockTDocker(void)>
         9c1a0:	e5940084 	ldr	r0, [r4, #132]	; fField132
         9c1a4:	e5900000 	ldr	r0, [r0]
         9c1a8:	e1a01008 	mov	r1, r8
         9c1ac:	eb6ca028 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         9c1b0:	eb6c97e5 	bl	1bc214c <$AllocateRefHandle(long)>
         9c1b4:	e58d0000 	str	r0, [sp]
         9c1b8:	e1a0000d 	mov	r0, sp
         9c1bc:	e2841020 	add	r1, r4, #32	; 0x20
         9c1c0:	eb6d8f8f 	bl	1c00004 <$NSCall__FRC6RefVarT1>
         9c1c4:	e2500002 	subs	r0, r0, #2	; 0x2
         9c1c8:	13a00001 	movne	r0, #1	; 0x1
         9c1cc:	e5c50000 	strb	r0, [r5]
         9c1d0:	e59d0000 	ldr	r0, [sp]
         9c1d4:	eb6c9bf8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9c1d8:	e3a00000 	mov	r0, #0	; 0x0
         9c1dc:	e5c40030 	strb	r0, [r4, #48]	; fField48
         9c1e0:	e3370000 	teq	r7, #0	; 0x0
         9c1e4:	11a00004 	movne	r0, r4
         9c1e8:	1b687efb 	blne	1abbddc <TDocker::$WaitAndLockTDocker(void)>
         9c1ec:	e28dd004 	add	sp, sp, #4	; 0x4
         9c1f0:	e1a00006 	mov	r0, r6
         9c1f4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::CheckProtocolPatch(unsigned long, unsigned char &)
 * Address: 0009c1f8
 */
TDocker::CheckProtocolPatch(unsigned long, unsigned char &) {
    /*
         9c1f8:	e3a00000 	mov	r0, #0	; 0x0
         9c1fc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDocker::InstallProtocolExtension(RefVar const &, RefVar const &, unsigned long)
 * Address: 0009c200
 */
TDocker::InstallProtocolExtension(RefVar const &, RefVar const &, unsigned long) {
    /*
         9c200:	e1a0c00d 	mov	ip, sp
         9c204:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         9c208:	e24cb004 	sub	fp, ip, #4	; 0x4
         9c20c:	e1a04000 	mov	r4, r0
         9c210:	e1a08001 	mov	r8, r1
         9c214:	e1a06002 	mov	r6, r2
         9c218:	e1a05003 	mov	r5, r3
         9c21c:	e5d010b3 	ldrb	r1, [r0, #179]	; fField179
         9c220:	e3a00000 	mov	r0, #0	; 0x0
         9c224:	e3310000 	teq	r1, #0	; 0x0
         9c228:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         9c22c:	e5840050 	str	r0, [r4, #80]	; fField80
         9c230:	e52d006c 	str	r0, [sp, -#108]!	; fField108
         9c234:	e28d0008 	add	r0, sp, #8	; 0x8
         9c238:	eb6c59cd 	bl	1bb2974 <$setjmp>
         9c23c:	e3a07fa3 	mov	r7, #652	; 0x28c
         9c240:	e2477a07 	sub	r7, r7, #28672	; 0x7000
         9c244:	e3300000 	teq	r0, #0	; 0x0
         9c248:	e1a0000d 	mov	r0, sp
         9c24c:	1a000059 	bne	9c3b8 <TDocker::InstallProtocolExtension(RefVar const &, RefVar const &, unsigned long)+0x1b8>
         9c250:	eb6d0f89 	bl	1be007c <$AddExceptionHandler>
         9c254:	e3350000 	teq	r5, #0	; 0x0
         9c258:	1a00001e 	bne	9c2d8 <TDocker::InstallProtocolExtension(RefVar const &, RefVar const &, unsigned long)+0xd8>
         9c25c:	e24dd004 	sub	sp, sp, #4	; 0x4
         9c260:	e5980000 	ldr	r0, [r8]
         9c264:	e5900000 	ldr	r0, [r0]
         9c268:	eb6c97b7 	bl	1bc214c <$AllocateRefHandle(long)>
         9c26c:	e58d0000 	str	r0, [sp]
         9c270:	e1a0000d 	mov	r0, sp
         9c274:	eb6ca408 	bl	1bc529c <$IsString(RefVar const &)>
         9c278:	e3300000 	teq	r0, #0	; 0x0
         9c27c:	0a000004 	beq	9c294 <TDocker::InstallProtocolExtension(RefVar const &, RefVar const &, unsigned long)+0x94>
         9c280:	e1a0000d 	mov	r0, sp
         9c284:	eb6c9bbe 	bl	1bc3184 <$GetCString(RefVar const &)>
         9c288:	eb6d4934 	bl	1bee760 <$Ustrlen>
         9c28c:	e3500004 	cmp	r0, #4	; 0x4
         9c290:	9a000005 	bls	9c2ac <TDocker::InstallProtocolExtension(RefVar const &, RefVar const &, unsigned long)+0xac>
         9c294:	e1a0000d 	mov	r0, sp
         9c298:	e3a02004 	mov	r2, #4	; 0x4
         9c29c:	e3a01000 	mov	r1, #0	; 0x0
         9c2a0:	eb6cb069 	bl	1bc844c <$Substring__FRC6RefVarlT2>
         9c2a4:	e59d1000 	ldr	r1, [sp]
         9c2a8:	e5810000 	str	r0, [r1]
         9c2ac:	e24dd014 	sub	sp, sp, #20	; 0x14
         9c2b0:	e28d0014 	add	r0, sp, #20	; 0x14
         9c2b4:	eb6c9bb2 	bl	1bc3184 <$GetCString(RefVar const &)>
         9c2b8:	e1a0100d 	mov	r1, sp
         9c2bc:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
         9c2c0:	e3a02001 	mov	r2, #1	; 0x1
         9c2c4:	eb6d2c2d 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
         9c2c8:	e49d5014 	ldr	r5, [sp], #20	; fField20
         9c2cc:	e59d0000 	ldr	r0, [sp]
         9c2d0:	eb6c9bb9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9c2d4:	e28dd004 	add	sp, sp, #4	; 0x4
         9c2d8:	e3350000 	teq	r5, #0	; 0x0
         9c2dc:	1a000004 	bne	9c2f4 <TDocker::InstallProtocolExtension(RefVar const &, RefVar const &, unsigned long)+0xf4>
         9c2e0:	e59f00ac 	ldr	r0, [pc, #ac]	; 9c394 <TDocker::InstallProtocolExtension(RefVar const &, RefVar const &, unsigned long)+0x194>
         9c2e4:	e5900000 	ldr	r0, [r0]
         9c2e8:	e3a02000 	mov	r2, #0	; 0x0
         9c2ec:	e1a01007 	mov	r1, r7
         9c2f0:	eb6d1ba9 	bl	1be319c <$Throw>
         9c2f4:	e5940080 	ldr	r0, [r4, #128]	; fField128
         9c2f8:	e2848084 	add	r8, r4, #132	; 0x84
         9c2fc:	e3300000 	teq	r0, #0	; 0x0
         9c300:	1a00000b 	bne	9c334 <TDocker::InstallProtocolExtension(RefVar const &, RefVar const &, unsigned long)+0x134>
         9c304:	e3a00000 	mov	r0, #0	; 0x0
         9c308:	eb6882d0 	bl	1abce50 <TDockerDynArray::$__ct(void)>
         9c30c:	e5840080 	str	r0, [r4, #128]	; fField128
         9c310:	e3300000 	teq	r0, #0	; 0x0
         9c314:	01a00004 	moveq	r0, r4
         9c318:	0b68978a 	bleq	1ac2148 <TDocker::$OutOfMemory(void)>
         9c31c:	e1a09008 	mov	r9, r8
         9c320:	e59f0070 	ldr	r0, [pc, #70]	; 9c398 <TDocker::InstallProtocolExtension(RefVar const &, RefVar const &, unsigned long)+0x198>
         9c324:	e3a01000 	mov	r1, #0	; 0x0
         9c328:	eb6c9782 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
         9c32c:	e5991000 	ldr	r1, [r9]
         9c330:	e5810000 	str	r0, [r1]
         9c334:	e1a01005 	mov	r1, r5
         9c338:	e5940080 	ldr	r0, [r4, #128]	; fField128
         9c33c:	eb68935c 	bl	1ac10b4 <TDockerDynArray::$Find(long)>
         9c340:	e3500000 	cmp	r0, #0	; 0x0
         9c344:	a5847050 	strge	r7, [r4, #80]	; fField80
         9c348:	aa00001d 	bge	9c3c4 <TDocker::InstallProtocolExtension(RefVar const &, RefVar const &, unsigned long)+0x1c4>
         9c34c:	e24dd004 	sub	sp, sp, #4	; 0x4
         9c350:	e1a0200d 	mov	r2, sp
         9c354:	e1a01005 	mov	r1, r5
         9c358:	e5940080 	ldr	r0, [r4, #128]	; fField128
         9c35c:	eb68302a 	bl	1aa840c <TDockerDynArray::$AddAndReplaceZero(unsigned long, long &)>
         9c360:	e5840050 	str	r0, [r4, #80]	; fField80
         9c364:	e3300000 	teq	r0, #0	; 0x0
         9c368:	1a000010 	bne	9c3b0 <TDocker::InstallProtocolExtension(RefVar const &, RefVar const &, unsigned long)+0x1b0>
         9c36c:	e5980000 	ldr	r0, [r8]
         9c370:	e5900000 	ldr	r0, [r0]
         9c374:	eb6ca3cc 	bl	1bc52ac <$Length(long)>
         9c378:	e59d1000 	ldr	r1, [sp]
         9c37c:	e1500001 	cmp	r0, r1
         9c380:	ca000005 	bgt	9c39c <TDocker::InstallProtocolExtension(RefVar const &, RefVar const &, unsigned long)+0x19c>
         9c384:	e1a00008 	mov	r0, r8
         9c388:	e1a01006 	mov	r1, r6
         9c38c:	eb6c9765 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
         9c390:	ea000006 	b	9c3b0 <TDocker::InstallProtocolExtension(RefVar const &, RefVar const &, unsigned long)+0x1b0>
         9c394:	003712d0 	ldreqsb	r1, [r7], -r0
         9c398:	00681f10 	rsbeq	r1, r8, r0, lsl pc
         9c39c:	e5960000 	ldr	r0, [r6]
         9c3a0:	e5902000 	ldr	r2, [r0]
         9c3a4:	e5980000 	ldr	r0, [r8]
         9c3a8:	e5900000 	ldr	r0, [r0]
         9c3ac:	eb6ca7e9 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         9c3b0:	e28dd004 	add	sp, sp, #4	; 0x4
         9c3b4:	ea000002 	b	9c3c4 <TDocker::InstallProtocolExtension(RefVar const &, RefVar const &, unsigned long)+0x1c4>
         9c3b8:	e2801060 	add	r1, r0, #96	; 0x60
         9c3bc:	e1a00004 	mov	r0, r4
         9c3c0:	eb686dfa 	bl	1ab7bb0 <TDocker::$ProcessException(Exception *)>
         9c3c4:	e1a0000d 	mov	r0, sp
         9c3c8:	eb6d133a 	bl	1be10b8 <$ExitHandler>
         9c3cc:	e28dd06c 	add	sp, sp, #108	; 0x6c
         9c3d0:	e1a00004 	mov	r0, r4
         9c3d4:	e3a01000 	mov	r1, #0	; 0x0
         9c3d8:	eb683866 	bl	1aaa578 <TDocker::$CleanUpIfStopping(unsigned char)>
         9c3dc:	e5940050 	ldr	r0, [r4, #80]	; fField80
         9c3e0:	e1300007 	teq	r0, r7
         9c3e4:	11a00004 	movne	r0, r4
         9c3e8:	13a01000 	movne	r1, #0	; 0x0
         9c3ec:	1b683860 	blne	1aaa574 <TDocker::$CleanUpIfError(unsigned char)>
         9c3f0:	e5b40050 	ldr	r0, [r4, #80]!	; fField80
         9c3f4:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TDocker::RemoveProtocolExtension(RefVar const &, unsigned long)
 * Address: 0009c3f8
 */
TDocker::RemoveProtocolExtension(RefVar const &, unsigned long) {
    /*
         9c3f8:	e1a0c00d 	mov	ip, sp
         9c3fc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         9c400:	e24cb004 	sub	fp, ip, #4	; 0x4
         9c404:	e1a04000 	mov	r4, r0
         9c408:	e1a06001 	mov	r6, r1
         9c40c:	e1a05002 	mov	r5, r2
         9c410:	e5d010b3 	ldrb	r1, [r0, #179]	; fField179
         9c414:	e3a00000 	mov	r0, #0	; 0x0
         9c418:	e3310000 	teq	r1, #0	; 0x0
         9c41c:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
         9c420:	e5840050 	str	r0, [r4, #80]	; fField80
         9c424:	e52d006c 	str	r0, [sp, -#108]!	; fField108
         9c428:	e28d0008 	add	r0, sp, #8	; 0x8
         9c42c:	eb6c5950 	bl	1bb2974 <$setjmp>
         9c430:	e3300000 	teq	r0, #0	; 0x0
         9c434:	e1a0000d 	mov	r0, sp
         9c438:	1a000038 	bne	9c520 <TDocker::RemoveProtocolExtension(RefVar const &, unsigned long)+0x128>
         9c43c:	eb6d0f0e 	bl	1be007c <$AddExceptionHandler>
         9c440:	e3350000 	teq	r5, #0	; 0x0
         9c444:	1a00001e 	bne	9c4c4 <TDocker::RemoveProtocolExtension(RefVar const &, unsigned long)+0xcc>
         9c448:	e24dd004 	sub	sp, sp, #4	; 0x4
         9c44c:	e5960000 	ldr	r0, [r6]
         9c450:	e5900000 	ldr	r0, [r0]
         9c454:	eb6c973c 	bl	1bc214c <$AllocateRefHandle(long)>
         9c458:	e58d0000 	str	r0, [sp]
         9c45c:	e1a0000d 	mov	r0, sp
         9c460:	eb6ca38d 	bl	1bc529c <$IsString(RefVar const &)>
         9c464:	e3300000 	teq	r0, #0	; 0x0
         9c468:	0a000004 	beq	9c480 <TDocker::RemoveProtocolExtension(RefVar const &, unsigned long)+0x88>
         9c46c:	e1a0000d 	mov	r0, sp
         9c470:	eb6c9b43 	bl	1bc3184 <$GetCString(RefVar const &)>
         9c474:	eb6d48b9 	bl	1bee760 <$Ustrlen>
         9c478:	e3500004 	cmp	r0, #4	; 0x4
         9c47c:	9a000005 	bls	9c498 <TDocker::RemoveProtocolExtension(RefVar const &, unsigned long)+0xa0>
         9c480:	e1a0000d 	mov	r0, sp
         9c484:	e3a02004 	mov	r2, #4	; 0x4
         9c488:	e3a01000 	mov	r1, #0	; 0x0
         9c48c:	eb6cafee 	bl	1bc844c <$Substring__FRC6RefVarlT2>
         9c490:	e59d1000 	ldr	r1, [sp]
         9c494:	e5810000 	str	r0, [r1]
         9c498:	e24dd014 	sub	sp, sp, #20	; 0x14
         9c49c:	e28d0014 	add	r0, sp, #20	; 0x14
         9c4a0:	eb6c9b37 	bl	1bc3184 <$GetCString(RefVar const &)>
         9c4a4:	e1a0100d 	mov	r1, sp
         9c4a8:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
         9c4ac:	e3a02001 	mov	r2, #1	; 0x1
         9c4b0:	eb6d2bb2 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
         9c4b4:	e49d5014 	ldr	r5, [sp], #20	; fField20
         9c4b8:	e59d0000 	ldr	r0, [sp]
         9c4bc:	eb6c9b3e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9c4c0:	e28dd004 	add	sp, sp, #4	; 0x4
         9c4c4:	e5940080 	ldr	r0, [r4, #128]	; fField128
         9c4c8:	e3300000 	teq	r0, #0	; 0x0
         9c4cc:	0a000016 	beq	9c52c <TDocker::RemoveProtocolExtension(RefVar const &, unsigned long)+0x134>
         9c4d0:	e1a01005 	mov	r1, r5
         9c4d4:	eb6892f6 	bl	1ac10b4 <TDockerDynArray::$Find(long)>
         9c4d8:	e1b06000 	movs	r6, r0
         9c4dc:	4a000012 	bmi	9c52c <TDocker::RemoveProtocolExtension(RefVar const &, unsigned long)+0x134>
         9c4e0:	e1a01006 	mov	r1, r6
         9c4e4:	e3a02000 	mov	r2, #0	; 0x0
         9c4e8:	e5940080 	ldr	r0, [r4, #128]	; fField128
         9c4ec:	eb6875e9 	bl	1ab9c98 <TDockerDynArray::$Replace(long, unsigned long)>
         9c4f0:	e2847084 	add	r7, r4, #132	; 0x84
         9c4f4:	e3a00002 	mov	r0, #2	; 0x2
         9c4f8:	eb6c9713 	bl	1bc214c <$AllocateRefHandle(long)>
         9c4fc:	e1a05000 	mov	r5, r0
         9c500:	e5902000 	ldr	r2, [r0]
         9c504:	e5970000 	ldr	r0, [r7]
         9c508:	e5900000 	ldr	r0, [r0]
         9c50c:	e1a01006 	mov	r1, r6
         9c510:	eb6ca790 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         9c514:	e1a00005 	mov	r0, r5
         9c518:	eb6c9b27 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9c51c:	ea000002 	b	9c52c <TDocker::RemoveProtocolExtension(RefVar const &, unsigned long)+0x134>
         9c520:	e2801060 	add	r1, r0, #96	; 0x60
         9c524:	e1a00004 	mov	r0, r4
         9c528:	eb686da0 	bl	1ab7bb0 <TDocker::$ProcessException(Exception *)>
         9c52c:	e1a0000d 	mov	r0, sp
         9c530:	eb6d12e0 	bl	1be10b8 <$ExitHandler>
         9c534:	e28dd06c 	add	sp, sp, #108	; 0x6c
         9c538:	e1a00004 	mov	r0, r4
         9c53c:	e3a01000 	mov	r1, #0	; 0x0
         9c540:	eb68380c 	bl	1aaa578 <TDocker::$CleanUpIfStopping(unsigned char)>
         9c544:	e1a00004 	mov	r0, r4
         9c548:	e3a01000 	mov	r1, #0	; 0x0
         9c54c:	eb683808 	bl	1aaa574 <TDocker::$CleanUpIfError(unsigned char)>
         9c550:	e5b40050 	ldr	r0, [r4, #80]!	; fField80
         9c554:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

