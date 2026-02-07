#include "include/TXBasicRuler.h"

/**
 * Symbol: TXBasicRuler::__ct(void)
 * Address: 0024587c
 */
TXBasicRuler::TXBasicRuler(void) {
    /*
        24587c:	e1a0c00d 	mov	ip, sp
        245880:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        245884:	e24cb004 	sub	fp, ip, #4	; 0x4
        245888:	e1b04000 	movs	r4, r0
        24588c:	1a000003 	bne	2458a0 <TXBasicRuler::__ct(void)+0x24>
        245890:	e3a0000c 	mov	r0, #12	; 0xc
        245894:	eb6623a7 	bl	1bce738 <$__nw(unsigned int)>
        245898:	e1b04000 	movs	r4, r0
        24589c:	0a000005 	beq	2458b8 <TXBasicRuler::__ct(void)+0x3c>
        2458a0:	e1a00004 	mov	r0, r4
        2458a4:	eb6544a1 	bl	1b96b30 <TXRuler::$__ct(void)>
        2458a8:	e59f0010 	ldr	r0, [pc, #10]	; 2458c0 <TXBasicRuler::__ct(void)+0x44>
        2458ac:	e5840000 	str	r0, [r4]
        2458b0:	e3a00001 	mov	r0, #1	; 0x1
        2458b4:	e5c40008 	strb	r0, [r4, #8]	; fField8
        2458b8:	e1a00004 	mov	r0, r4
        2458bc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2458c0:	0001c714 	andeq	ip, r1, r4, lsl r7
    */
}

/**
 * Symbol: TXBasicRuler::GetAttributesValues(TXAttrValues *)
 * Address: 002458c4
 */
TXBasicRuler::GetAttributesValues(TXAttrValues *) {
    /*
        2458c4:	e1a0c00d 	mov	ip, sp
        2458c8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2458cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2458d0:	e3a03000 	mov	r3, #0	; 0x0
        2458d4:	e92d0008 	stmdb	sp!, {r3}
        2458d8:	e2802008 	add	r2, r0, #8	; 0x8
        2458dc:	e1a00001 	mov	r0, r1
        2458e0:	e3a03001 	mov	r3, #1	; 0x1
        2458e4:	e59f1004 	ldr	r1, [pc, #4]	; 2458f0 <TXBasicRuler::GetAttributesValues(TXAttrValues *)+0x2c>
        2458e8:	eb6506a5 	bl	1b87384 <TXAttrValues::$Add(unsigned long, void const *, int, unsigned char)>
        2458ec:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        2458f0:	6a757374 	bvs	1fa26c8 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x391e70>
    */
}

/**
 * Symbol: TXBasicRuler::Assign(TXAttrObject const *)
 * Address: 002458f4
 */
TXBasicRuler::Assign(TXAttrObject const *) {
    /*
        2458f4:	e5d11008 	ldrb	r1, [r1, #8]	; fField8
        2458f8:	e5c01008 	strb	r1, [r0, #8]	; fField8
        2458fc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXBasicRuler::SetAttributeValue(unsigned long, void const *)
 * Address: 00245900
 */
TXBasicRuler::SetAttributeValue(unsigned long, void const *) {
    /*
        245900:	e5d21000 	ldrb	r1, [r2]
        245904:	e5c01008 	strb	r1, [r0, #8]	; fField8
        245908:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXBasicRuler::GetLineLeftBlanks( const(unsigned char))
 * Address: 0024590c
 */
TXBasicRuler::GetLineLeftBlanks( const(unsigned char)) {
    /*
        24590c:	e3a00000 	mov	r0, #0	; 0x0
        245910:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXBasicRuler::GetLineRightBlanks( const(void))
 * Address: 00245914
 */
TXBasicRuler::GetLineRightBlanks( const(void)) {
    /*
        245914:	e3a00000 	mov	r0, #0	; 0x0
        245918:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: GetTabWidth__12TXBasicRulerCFlT1P12TXPendingTab
 * Address: 0024591c
 */
void TXBasicRuler::GetTabWidth() {
    /*
        24591c:	e1a0c00d 	mov	ip, sp
        245920:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        245924:	e24cb004 	sub	fp, ip, #4	; 0x4
        245928:	e1a05001 	mov	r5, r1
        24592c:	e1a04003 	mov	r4, r3
        245930:	e2810902 	add	r0, r1, #32768	; 0x8000
        245934:	e1a00840 	mov	r0, r0, asr #16
        245938:	e1a01800 	mov	r1, r0, lsl #16
        24593c:	e1a01841 	mov	r1, r1, asr #16
        245940:	e59f002c 	ldr	r0, [pc, #2c]	; 245974 <GetTabWidth__12TXBasicRulerCFlT1P12TXPendingTab+0x58>
        245944:	e5900000 	ldr	r0, [r0]
        245948:	e1a06000 	mov	r6, r0
        24594c:	eb65b3fb 	bl	1bb2940 <$__rt_sdiv>
        245950:	e2800001 	add	r0, r0, #1	; 0x1
        245954:	e0010096 	mul	r1, r6, r0
        245958:	e3a00000 	mov	r0, #0	; 0x0
        24595c:	e5841004 	str	r1, [r4, #4]
        245960:	e5c40008 	strb	r0, [r4, #8]	; fField8
        245964:	e5c40000 	strb	r0, [r4]
        245968:	e0650801 	rsb	r0, r5, r1, lsl #16
        24596c:	e5a4000c 	str	r0, [r4, #12]!
        245970:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        245974:	0c104d7c 	ldceq	13, cr4, [r0], -#496
    */
}

/**
 * Symbol: TXBasicRuler::AdjustLineHeight( const(TXLineHeightInfo *))
 * Address: 00245978
 */
TXBasicRuler::AdjustLineHeight( const(TXLineHeightInfo *)) {
    /*
        245978:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CalcPendingTabWidth__12TXBasicRulerCFRC12TXPendingTablT2
 * Address: 0024597c
 */
void TXBasicRuler::CalcPendingTabWidth() {
    /*
        24597c:	e3a00000 	mov	r0, #0	; 0x0
        245980:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXBasicRuler::GetClassId( const(void))
 * Address: 002459a8
 */
TXBasicRuler::GetClassId( const(void)) {
    /*
        2459a8:	e59f0000 	ldr	r0, [pc, #0]	; 2459b0 <TXBasicRuler::GetClassId( const(void))+0x8>
        2459ac:	e1a0f00e 	mov	pc, lr
        2459b0:	62726c72 	rsbvss	r6, r2, #29184	; 0x7200
    */
}

/**
 * Symbol: TXBasicRuler::CreateNew( const(void))
 * Address: 002459b4
 */
TXBasicRuler::CreateNew( const(void)) {
    /*
        2459b4:	e3a00000 	mov	r0, #0	; 0x0
        2459b8:	ea65445d 	b	1b96b34 <TXBasicRuler::$__ct(void)>
    */
}

/**
 * Symbol: TXBasicRuler::GetNSObject( const(void))
 * Address: 002459bc
 */
TXBasicRuler::GetNSObject( const(void)) {
    /*
        2459bc:	e1a0c00d 	mov	ip, sp
        2459c0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2459c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2459c8:	e1a04000 	mov	r4, r0
        2459cc:	e24dd008 	sub	sp, sp, #8	; 0x8
        2459d0:	e59f0050 	ldr	r0, [pc, #50]	; 245a28 <TXBasicRuler::GetNSObject( const(void))+0x6c>
        2459d4:	eb65f1e4 	bl	1bc216c <$Clone(RefVar const &)>
        2459d8:	eb65f1db 	bl	1bc214c <$AllocateRefHandle(long)>
        2459dc:	e58d0004 	str	r0, [sp, #4]
        2459e0:	e3a00002 	mov	r0, #2	; 0x2
        2459e4:	eb65f1d8 	bl	1bc214c <$AllocateRefHandle(long)>
        2459e8:	e58d0000 	str	r0, [sp]
        2459ec:	e5d40008 	ldrb	r0, [r4, #8]	; fField8
        2459f0:	e3300002 	teq	r0, #2	; 0x2
        2459f4:	059f0030 	ldreq	r0, [pc, #30]	; 245a2c <TXBasicRuler::GetNSObject( const(void))+0x70>
        2459f8:	0a00000f 	beq	245a3c <TXBasicRuler::GetNSObject( const(void))+0x80>
        2459fc:	e3300004 	teq	r0, #4	; 0x4
        245a00:	059f0028 	ldreq	r0, [pc, #28]	; 245a30 <TXBasicRuler::GetNSObject( const(void))+0x74>
        245a04:	0a00000c 	beq	245a3c <TXBasicRuler::GetNSObject( const(void))+0x80>
        245a08:	e3300008 	teq	r0, #8	; 0x8
        245a0c:	1a000009 	bne	245a38 <TXBasicRuler::GetNSObject( const(void))+0x7c>
        245a10:	e59f001c 	ldr	r0, [pc, #1c]	; 245a34 <TXBasicRuler::GetNSObject( const(void))+0x78>
        245a14:	e5900000 	ldr	r0, [r0]
        245a18:	e5901000 	ldr	r1, [r0]
        245a1c:	e59d0000 	ldr	r0, [sp]
        245a20:	e5801000 	str	r1, [r0]
        245a24:	ea000008 	b	245a4c <TXBasicRuler::GetNSObject( const(void))+0x90>
        245a28:	00680400 	rsbeq	r0, r8, r0, lsl #8
        245a2c:	00684360 	rsbeq	r4, r8, r0, ror #6
        245a30:	00682368 	rsbeq	r2, r8, r8, ror #6
        245a34:	00682f10 	rsbeq	r2, r8, r0, lsl pc
        245a38:	e59f003c 	ldr	r0, [pc, #3c]	; 245a7c <TXBasicRuler::GetNSObject( const(void))+0xc0>
        245a3c:	e5900000 	ldr	r0, [r0]
        245a40:	e5900000 	ldr	r0, [r0]
        245a44:	e59d1000 	ldr	r1, [sp]
        245a48:	e5810000 	str	r0, [r1]
        245a4c:	e1a0200d 	mov	r2, sp
        245a50:	e59f1028 	ldr	r1, [pc, #28]	; 245a80 <TXBasicRuler::GetNSObject( const(void))+0xc4>
        245a54:	e28d0004 	add	r0, sp, #4	; 0x4
        245a58:	eb660242 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        245a5c:	e59d0004 	ldr	r0, [sp, #4]
        245a60:	e5904000 	ldr	r4, [r0]
        245a64:	e59d0000 	ldr	r0, [sp]
        245a68:	eb65f5d3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        245a6c:	e59d0004 	ldr	r0, [sp, #4]
        245a70:	eb65f5d1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        245a74:	e1a00004 	mov	r0, r4
        245a78:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        245a7c:	006834e0 	rsbeq	r3, r8, r0, ror #9
        245a80:	00683368 	rsbeq	r3, r8, r8, ror #6
    */
}

/**
 * Symbol: TXBasicRuler::SetNSObject(RefVar const &)
 * Address: 00245b10
 */
TXBasicRuler::SetNSObject(RefVar const &) {
    /*
        245b10:	e1a0c00d 	mov	ip, sp
        245b14:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        245b18:	e24cb004 	sub	fp, ip, #4	; 0x4
        245b1c:	e1a04000 	mov	r4, r0
        245b20:	e1a00001 	mov	r0, r1
        245b24:	e24dd004 	sub	sp, sp, #4	; 0x4
        245b28:	e59f1030 	ldr	r1, [pc, #30]	; 245b60 <TXBasicRuler::SetNSObject(RefVar const &)+0x50>
        245b2c:	e5911000 	ldr	r1, [r1]
        245b30:	e5911000 	ldr	r1, [r1]
        245b34:	e5900000 	ldr	r0, [r0]
        245b38:	e5900000 	ldr	r0, [r0]
        245b3c:	eb65f9c7 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        245b40:	eb65f181 	bl	1bc214c <$AllocateRefHandle(long)>
        245b44:	e58d0000 	str	r0, [sp]
        245b48:	e1a0000d 	mov	r0, sp
        245b4c:	eb6543fc 	bl	1b96b44 <$TXJustSymbolToNum(RefVar const &)>
        245b50:	e5c40008 	strb	r0, [r4, #8]	; fField8
        245b54:	e59d0000 	ldr	r0, [sp]
        245b58:	eb65f597 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        245b5c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        245b60:	00683368 	rsbeq	r3, r8, r8, ror #6
    */
}

/**
 * Symbol: TXBasicRuler::IsEqual( const(TXAttrObject const *))
 * Address: 00245b64
 */
TXBasicRuler::IsEqual( const(TXAttrObject const *)) {
    /*
        245b64:	e1310000 	teq	r1, r0
        245b68:	03a00001 	moveq	r0, #1	; 0x1
        245b6c:	01a0f00e 	moveq	pc, lr
        245b70:	e1a0c00d 	mov	ip, sp
        245b74:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        245b78:	e24cb004 	sub	fp, ip, #4	; 0x4
        245b7c:	e1a05000 	mov	r5, r0
        245b80:	e1a04001 	mov	r4, r1
        245b84:	e5901000 	ldr	r1, [r0]
        245b88:	e1a0e00f 	mov	lr, pc
        245b8c:	e281f018 	add	pc, r1, #24	; 0x18
        245b90:	e1a06000 	mov	r6, r0
        245b94:	e1a00004 	mov	r0, r4
        245b98:	e5941000 	ldr	r1, [r4]
        245b9c:	e1a0e00f 	mov	lr, pc
        245ba0:	e281f018 	add	pc, r1, #24	; 0x18
        245ba4:	e1360000 	teq	r6, r0
        245ba8:	13a00000 	movne	r0, #0	; 0x0
        245bac:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        245bb0:	e5d50008 	ldrb	r0, [r5, #8]	; fField8
        245bb4:	e5d41008 	ldrb	r1, [r4, #8]	; fField8
        245bb8:	e1300001 	teq	r0, r1
        245bbc:	13a00000 	movne	r0, #0	; 0x0
        245bc0:	03a00001 	moveq	r0, #1	; 0x1
        245bc4:	e20000ff 	and	r0, r0, #255	; 0xff
        245bc8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXBasicRuler::GetCommonAttrValue( const(unsigned long, void *))
 * Address: 00245bcc
 */
TXBasicRuler::GetCommonAttrValue( const(unsigned long, void *)) {
    /*
        245bcc:	e59fc020 	ldr	ip, [pc, #20]	; 245bf4 <TXBasicRuler::GetCommonAttrValue( const(unsigned long, void *))+0x28>
        245bd0:	e131000c 	teq	r1, ip
        245bd4:	1a6501e2 	bne	1b86364 <TXAttrObject::$GetCommonAttrValue( const(unsigned long, void *))>
        245bd8:	e5d00008 	ldrb	r0, [r0, #8]	; fField8
        245bdc:	e5d21000 	ldrb	r1, [r2]
        245be0:	e1300001 	teq	r0, r1
        245be4:	13a00000 	movne	r0, #0	; 0x0
        245be8:	03a00001 	moveq	r0, #1	; 0x1
        245bec:	e20000ff 	and	r0, r0, #255	; 0xff
        245bf0:	e1a0f00e 	mov	pc, lr
        245bf4:	6a757374 	bvs	1fa29cc <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x392174>
    */
}

/**
 * Symbol: TXBasicRuler::GetAttributeValue( const(unsigned long, void *))
 * Address: 00245bf8
 */
TXBasicRuler::GetAttributeValue( const(unsigned long, void *)) {
    /*
        245bf8:	e59fc014 	ldr	ip, [pc, #14]	; 245c14 <TXBasicRuler::GetAttributeValue( const(unsigned long, void *))+0x1c>
        245bfc:	e131000c 	teq	r1, ip
        245c00:	1a6501d2 	bne	1b86350 <TXAttrObject::$GetAttributeValue( const(unsigned long, void *))>
        245c04:	e5d00008 	ldrb	r0, [r0, #8]	; fField8
        245c08:	e5c20000 	strb	r0, [r2]
        245c0c:	e3a00001 	mov	r0, #1	; 0x1
        245c10:	e1a0f00e 	mov	pc, lr
        245c14:	6a757374 	bvs	1fa29ec <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x392194>
    */
}

