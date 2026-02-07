#include "include/TXContainer.h"

/**
 * Symbol: TXContainer::__ct(TXStream *)
 * Address: 00234804
 */
TXContainer::TXContainer(TXStream *) {
    /*
        234804:	e1a0c00d 	mov	ip, sp
        234808:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        23480c:	e24cb004 	sub	fp, ip, #4	; 0x4
        234810:	e1a04001 	mov	r4, r1
        234814:	e3300000 	teq	r0, #0	; 0x0
        234818:	1a000003 	bne	23482c <TXContainer::__ct(TXStream *)+0x28>
        23481c:	e3a0000c 	mov	r0, #12	; 0xc
        234820:	eb6667c4 	bl	1bce738 <$__nw(unsigned int)>
        234824:	e3300000 	teq	r0, #0	; 0x0
        234828:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        23482c:	e59f100c 	ldr	r1, [pc, #c]	; 234840 <TXContainer::__ct(TXStream *)+0x3c>
        234830:	e8800012 	stmia	r0, {r1, r4}
        234834:	e3a01000 	mov	r1, #0	; 0x0
        234838:	e5801008 	str	r1, [r0, #8]	; fField8
        23483c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        234840:	0001b790 	muleq	r1, r0, r7
    */
}

/**
 * Symbol: TXContainer::AcquireTextDescriptor(TXTextDescriptor *)
 * Address: 00234844
 */
TXContainer::AcquireTextDescriptor(TXTextDescriptor *) {
    /*
        234844:	e1a0c00d 	mov	ip, sp
        234848:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        23484c:	e24cb004 	sub	fp, ip, #4	; 0x4
        234850:	e1a04000 	mov	r4, r0
        234854:	e1a05001 	mov	r5, r1
        234858:	e24dd004 	sub	sp, sp, #4	; 0x4
        23485c:	e1a0100d 	mov	r1, sp
        234860:	e5902000 	ldr	r2, [r0]
        234864:	e1a0e00f 	mov	lr, pc
        234868:	e282f020 	add	pc, r2, #32	; 0x20
        23486c:	e59d0000 	ldr	r0, [sp]
        234870:	e1a020a0 	mov	r2, r0, lsr #1
        234874:	e1a00005 	mov	r0, r5
        234878:	e5b41004 	ldr	r1, [r4, #4]!	; fField4
        23487c:	eb654ee0 	bl	1b88404 <TXTextDescriptor::$Set(TXStream *, long)>
        234880:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXContainer::ReleaseTextDescriptor(TXTextDescriptor *)
 * Address: 00234884
 */
TXContainer::ReleaseTextDescriptor(TXTextDescriptor *) {
    /*
        234884:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXContainer::WriteText(TXTextDescriptor *)
 * Address: 00234888
 */
TXContainer::WriteText(TXTextDescriptor *) {
    /*
        234888:	e1a0c00d 	mov	ip, sp
        23488c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        234890:	e24cb004 	sub	fp, ip, #4	; 0x4
        234894:	e1a04001 	mov	r4, r1
        234898:	e24dd014 	sub	sp, sp, #20	; 0x14
        23489c:	e5915008 	ldr	r5, [r1, #8]	; fField8
        2348a0:	e1a02005 	mov	r2, r5
        2348a4:	e5b01004 	ldr	r1, [r0, #4]!	; fField4
        2348a8:	e1a0000d 	mov	r0, sp
        2348ac:	eb654ed4 	bl	1b88404 <TXTextDescriptor::$Set(TXStream *, long)>
        2348b0:	e1a02005 	mov	r2, r5
        2348b4:	e1a0100d 	mov	r1, sp
        2348b8:	e1a00004 	mov	r0, r4
        2348bc:	eb654ed3 	bl	1b88410 <TXTextDescriptor::$CopyTo(TXTextDescriptor *, long)>
        2348c0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXContainer::GetAvailTypes(void)
 * Address: 00234904
 */
TXContainer::GetAvailTypes(void) {
    /*
        234904:	e1a0c00d 	mov	ip, sp
        234908:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        23490c:	e24cb004 	sub	fp, ip, #4	; 0x4
        234910:	e1a04000 	mov	r4, r0
        234914:	e3a05000 	mov	r5, #0	; 0x0
        234918:	e59f10a0 	ldr	r1, [pc, #a0]	; 2349c0 <TXContainer::GetAvailTypes(void)+0xbc>
        23491c:	eb6556f8 	bl	1b8a504 <TXContainer::$ConvertAndFocusOnValue(unsigned long)>
        234920:	e3300000 	teq	r0, #0	; 0x0
        234924:	03a05002 	moveq	r5, #2	; 0x2
        234928:	0a000016 	beq	234988 <TXContainer::GetAvailTypes(void)+0x84>
        23492c:	e59f8090 	ldr	r8, [pc, #90]	; 2349c4 <TXContainer::GetAvailTypes(void)+0xc0>
        234930:	e5980000 	ldr	r0, [r8]
        234934:	e3a06000 	mov	r6, #0	; 0x0
        234938:	e5b07004 	ldr	r7, [r0, #4]!	; fField4
        23493c:	e3570000 	cmp	r7, #0	; 0x0
        234940:	da000010 	ble	234988 <TXContainer::GetAvailTypes(void)+0x84>
        234944:	e1a01006 	mov	r1, r6
        234948:	e5980000 	ldr	r0, [r8]
        23494c:	eb655b16 	bl	1b8b5ac <TXRegisteredObjects::$GetIndObject( const(int))>
        234950:	e5901000 	ldr	r1, [r0]
        234954:	e1a0e00f 	mov	lr, pc
        234958:	e281f03c 	add	pc, r1, #60	; 0x3c
        23495c:	e3300000 	teq	r0, #0	; 0x0
        234960:	0a000005 	beq	23497c <TXContainer::GetAvailTypes(void)+0x78>
        234964:	e1a01000 	mov	r1, r0
        234968:	e1a00004 	mov	r0, r4
        23496c:	eb6556e4 	bl	1b8a504 <TXContainer::$ConvertAndFocusOnValue(unsigned long)>
        234970:	e3300000 	teq	r0, #0	; 0x0
        234974:	03a05003 	moveq	r5, #3	; 0x3
        234978:	0a000002 	beq	234988 <TXContainer::GetAvailTypes(void)+0x84>
        23497c:	e2866001 	add	r6, r6, #1	; 0x1
        234980:	e1560007 	cmp	r6, r7
        234984:	baffffee 	blt	234944 <TXContainer::GetAvailTypes(void)+0x40>
        234988:	e1a00004 	mov	r0, r4
        23498c:	e59f1034 	ldr	r1, [pc, #34]	; 2349c8 <TXContainer::GetAvailTypes(void)+0xc4>
        234990:	eb6556db 	bl	1b8a504 <TXContainer::$ConvertAndFocusOnValue(unsigned long)>
        234994:	e3300000 	teq	r0, #0	; 0x0
        234998:	020500ff 	andeq	r0, r5, #255	; 0xff
        23499c:	03805004 	orreq	r5, r0, #4	; 0x4
        2349a0:	e1a00004 	mov	r0, r4
        2349a4:	e59f1020 	ldr	r1, [pc, #20]	; 2349cc <TXContainer::GetAvailTypes(void)+0xc8>
        2349a8:	eb6556d5 	bl	1b8a504 <TXContainer::$ConvertAndFocusOnValue(unsigned long)>
        2349ac:	e3300000 	teq	r0, #0	; 0x0
        2349b0:	020500ff 	andeq	r0, r5, #255	; 0xff
        2349b4:	03805001 	orreq	r5, r0, #1	; 0x1
        2349b8:	e1a00005 	mov	r0, r5
        2349bc:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2349c0:	7478726e 	ldrvcbt	r7, [r8], -#622
        2349c4:	0c104d80 	ldceq	13, cr4, [r0], -#512
        2349c8:	7478726c 	ldrvcbt	r7, [r8], -#620
        2349cc:	54455854 	strplb	r5, [r5], -#2132
    */
}

/**
 * Symbol: TXContainer::Import(TXContainer *, TXContainerImportInfo *)
 * Address: 002349d0
 */
TXContainer::Import(TXContainer *, TXContainerImportInfo *) {
    /*
        2349d0:	e1a0c00d 	mov	ip, sp
        2349d4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2349d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2349dc:	e1a05000 	mov	r5, r0
        2349e0:	e1a06001 	mov	r6, r1
        2349e4:	e1a04002 	mov	r4, r2
        2349e8:	e24dd008 	sub	sp, sp, #8	; 0x8
        2349ec:	e1a0e00f 	mov	lr, pc
        2349f0:	e590f000 	ldr	pc, [r0]
        2349f4:	e3300000 	teq	r0, #0	; 0x0
        2349f8:	1a00005e 	bne	234b78 <TXContainer::Import(TXContainer *, TXContainerImportInfo *)+0x1a8>
        2349fc:	e3a08000 	mov	r8, #0	; 0x0
        234a00:	e5d40000 	ldrb	r0, [r4]
        234a04:	e3100002 	tst	r0, #2	; 0x2
        234a08:	0a00002b 	beq	234abc <TXContainer::Import(TXContainer *, TXContainerImportInfo *)+0xec>
        234a0c:	e2843008 	add	r3, r4, #8	; 0x8
        234a10:	e1a01006 	mov	r1, r6
        234a14:	e1a00005 	mov	r0, r5
        234a18:	e58d3004 	str	r3, [sp, #4]	; fField4
        234a1c:	e59f2100 	ldr	r2, [pc, #100]	; 234b24 <TXContainer::Import(TXContainer *, TXContainerImportInfo *)+0x154>
        234a20:	eb6556c2 	bl	1b8a530 <TXContainer::$ImportObjects(TXContainer *, unsigned long, long *)>
        234a24:	e1b07000 	movs	r7, r0
        234a28:	0a000021 	beq	234ab4 <TXContainer::Import(TXContainer *, TXContainerImportInfo *)+0xe4>
        234a2c:	e3770066 	cmn	r7, #102	; 0x66
        234a30:	1a000048 	bne	234b58 <TXContainer::Import(TXContainer *, TXContainerImportInfo *)+0x188>
        234a34:	e59f00ec 	ldr	r0, [pc, #ec]	; 234b28 <TXContainer::Import(TXContainer *, TXContainerImportInfo *)+0x158>
        234a38:	e58d0000 	str	r0, [sp]
        234a3c:	e5900000 	ldr	r0, [r0]
        234a40:	e3a09000 	mov	r9, #0	; 0x0
        234a44:	e5b0a004 	ldr	sl, [r0, #4]!	; fField4
        234a48:	e35a0000 	cmp	sl, #0	; 0x0
        234a4c:	da000016 	ble	234aac <TXContainer::Import(TXContainer *, TXContainerImportInfo *)+0xdc>
        234a50:	e1a01009 	mov	r1, r9
        234a54:	e59d0000 	ldr	r0, [sp]
        234a58:	e5900000 	ldr	r0, [r0]
        234a5c:	eb655ad2 	bl	1b8b5ac <TXRegisteredObjects::$GetIndObject( const(int))>
        234a60:	e5901000 	ldr	r1, [r0]
        234a64:	e1a0e00f 	mov	lr, pc
        234a68:	e281f03c 	add	pc, r1, #60	; 0x3c
        234a6c:	e1b02000 	movs	r2, r0
        234a70:	0a00000a 	beq	234aa0 <TXContainer::Import(TXContainer *, TXContainerImportInfo *)+0xd0>
        234a74:	e1a01006 	mov	r1, r6
        234a78:	e1a00005 	mov	r0, r5
        234a7c:	e59d3004 	ldr	r3, [sp, #4]	; fField4
        234a80:	eb6556aa 	bl	1b8a530 <TXContainer::$ImportObjects(TXContainer *, unsigned long, long *)>
        234a84:	e1b07000 	movs	r7, r0
        234a88:	05d40000 	ldreqb	r0, [r4]
        234a8c:	03c00001 	biceq	r0, r0, #1	; 0x1
        234a90:	05c40000 	streqb	r0, [r4]
        234a94:	0a000004 	beq	234aac <TXContainer::Import(TXContainer *, TXContainerImportInfo *)+0xdc>
        234a98:	e3770066 	cmn	r7, #102	; 0x66
        234a9c:	1a00002d 	bne	234b58 <TXContainer::Import(TXContainer *, TXContainerImportInfo *)+0x188>
        234aa0:	e2899001 	add	r9, r9, #1	; 0x1
        234aa4:	e159000a 	cmp	r9, sl
        234aa8:	baffffe8 	blt	234a50 <TXContainer::Import(TXContainer *, TXContainerImportInfo *)+0x80>
        234aac:	e3370000 	teq	r7, #0	; 0x0
        234ab0:	1a000001 	bne	234abc <TXContainer::Import(TXContainer *, TXContainerImportInfo *)+0xec>
        234ab4:	e20800ff 	and	r0, r8, #255	; 0xff
        234ab8:	e3808002 	orr	r8, r0, #2	; 0x2
        234abc:	e5d40000 	ldrb	r0, [r4]
        234ac0:	e3100004 	tst	r0, #4	; 0x4
        234ac4:	0a00000a 	beq	234af4 <TXContainer::Import(TXContainer *, TXContainerImportInfo *)+0x124>
        234ac8:	e284300c 	add	r3, r4, #12	; 0xc
        234acc:	e1a01006 	mov	r1, r6
        234ad0:	e1a00005 	mov	r0, r5
        234ad4:	e59f2050 	ldr	r2, [pc, #50]	; 234b2c <TXContainer::Import(TXContainer *, TXContainerImportInfo *)+0x15c>
        234ad8:	eb655694 	bl	1b8a530 <TXContainer::$ImportObjects(TXContainer *, unsigned long, long *)>
        234adc:	e1b07000 	movs	r7, r0
        234ae0:	020800ff 	andeq	r0, r8, #255	; 0xff
        234ae4:	03808004 	orreq	r8, r0, #4	; 0x4
        234ae8:	0a000001 	beq	234af4 <TXContainer::Import(TXContainer *, TXContainerImportInfo *)+0x124>
        234aec:	e3770066 	cmn	r7, #102	; 0x66
        234af0:	1a000018 	bne	234b58 <TXContainer::Import(TXContainer *, TXContainerImportInfo *)+0x188>
        234af4:	e5d40000 	ldrb	r0, [r4]
        234af8:	e3100001 	tst	r0, #1	; 0x1
        234afc:	0a00000d 	beq	234b38 <TXContainer::Import(TXContainer *, TXContainerImportInfo *)+0x168>
        234b00:	e2842004 	add	r2, r4, #4	; 0x4
        234b04:	e1a01006 	mov	r1, r6
        234b08:	e1a00005 	mov	r0, r5
        234b0c:	eb655686 	bl	1b8a52c <TXContainer::$ImportText(TXContainer *, long *)>
        234b10:	e1b07000 	movs	r7, r0
        234b14:	0a000005 	beq	234b30 <TXContainer::Import(TXContainer *, TXContainerImportInfo *)+0x160>
        234b18:	e3770066 	cmn	r7, #102	; 0x66
        234b1c:	1a00000d 	bne	234b58 <TXContainer::Import(TXContainer *, TXContainerImportInfo *)+0x188>
        234b20:	ea000004 	b	234b38 <TXContainer::Import(TXContainer *, TXContainerImportInfo *)+0x168>
        234b24:	7478726e 	ldrvcbt	r7, [r8], -#622
        234b28:	0c104d80 	ldceq	13, cr4, [r0], -#512
        234b2c:	7478726c 	ldrvcbt	r7, [r8], -#620
        234b30:	e20800ff 	and	r0, r8, #255	; 0xff
        234b34:	e3808001 	orr	r8, r0, #1	; 0x1
        234b38:	e5c48000 	strb	r8, [r4]
        234b3c:	e1a02004 	mov	r2, r4
        234b40:	e1a00005 	mov	r0, r5
        234b44:	e3a01000 	mov	r1, #0	; 0x0
        234b48:	e5953000 	ldr	r3, [r5]
        234b4c:	e1a0e00f 	mov	lr, pc
        234b50:	e283f014 	add	pc, r3, #20	; 0x14
        234b54:	ea000007 	b	234b78 <TXContainer::Import(TXContainer *, TXContainerImportInfo *)+0x1a8>
        234b58:	e5c48000 	strb	r8, [r4]
        234b5c:	e1a02004 	mov	r2, r4
        234b60:	e1a00005 	mov	r0, r5
        234b64:	e3a01001 	mov	r1, #1	; 0x1
        234b68:	e5953000 	ldr	r3, [r5]
        234b6c:	e1a0e00f 	mov	lr, pc
        234b70:	e283f014 	add	pc, r3, #20	; 0x14
        234b74:	e1a00007 	mov	r0, r7
        234b78:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXContainer::ImportText(TXContainer *, long *)
 * Address: 00234b7c
 */
TXContainer::ImportText(TXContainer *, long *) {
    /*
        234b7c:	e1a0c00d 	mov	ip, sp
        234b80:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        234b84:	e24cb004 	sub	fp, ip, #4	; 0x4
        234b88:	e1a06000 	mov	r6, r0
        234b8c:	e1a05001 	mov	r5, r1
        234b90:	e1a04002 	mov	r4, r2
        234b94:	e1a00001 	mov	r0, r1
        234b98:	e59f70dc 	ldr	r7, [pc, #dc]	; 234c7c <TXContainer::ImportText(TXContainer *, long *)+0x100>
        234b9c:	e1a01007 	mov	r1, r7
        234ba0:	eb655657 	bl	1b8a504 <TXContainer::$ConvertAndFocusOnValue(unsigned long)>
        234ba4:	e3300000 	teq	r0, #0	; 0x0
        234ba8:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        234bac:	e1a01004 	mov	r1, r4
        234bb0:	e1a00005 	mov	r0, r5
        234bb4:	e5952000 	ldr	r2, [r5]
        234bb8:	e1a0e00f 	mov	lr, pc
        234bbc:	e282f020 	add	pc, r2, #32	; 0x20
        234bc0:	e3300000 	teq	r0, #0	; 0x0
        234bc4:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        234bc8:	e5940000 	ldr	r0, [r4]
        234bcc:	e1a000a0 	mov	r0, r0, lsr #1
        234bd0:	e5840000 	str	r0, [r4]
        234bd4:	e1a00006 	mov	r0, r6
        234bd8:	e1a01007 	mov	r1, r7
        234bdc:	e5962000 	ldr	r2, [r6]
        234be0:	e1a0e00f 	mov	lr, pc
        234be4:	e282f030 	add	pc, r2, #48	; 0x30
        234be8:	e1b01000 	movs	r1, r0
        234bec:	03e00065 	mvneq	r0, #101	; 0x65
        234bf0:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        234bf4:	e1a00006 	mov	r0, r6
        234bf8:	e5942000 	ldr	r2, [r4]
        234bfc:	e5963000 	ldr	r3, [r6]
        234c00:	e1a0e00f 	mov	lr, pc
        234c04:	e283f004 	add	pc, r3, #4	; 0x4
        234c08:	e3300000 	teq	r0, #0	; 0x0
        234c0c:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        234c10:	e24dd014 	sub	sp, sp, #20	; 0x14
        234c14:	e1a0000d 	mov	r0, sp
        234c18:	eb654df8 	bl	1b88400 <TXTextDescriptor::$__ct(void)>
        234c1c:	e1a0100d 	mov	r1, sp
        234c20:	e1a00005 	mov	r0, r5
        234c24:	e5952000 	ldr	r2, [r5]
        234c28:	e1a0e00f 	mov	lr, pc
        234c2c:	e282f024 	add	pc, r2, #36	; 0x24
        234c30:	e1a0100d 	mov	r1, sp
        234c34:	e1a00006 	mov	r0, r6
        234c38:	e5962000 	ldr	r2, [r6]
        234c3c:	e1a0e00f 	mov	lr, pc
        234c40:	e282f008 	add	pc, r2, #8	; 0x8
        234c44:	e1a04000 	mov	r4, r0
        234c48:	e1a0100d 	mov	r1, sp
        234c4c:	e1a00005 	mov	r0, r5
        234c50:	e5952000 	ldr	r2, [r5]
        234c54:	e1a0e00f 	mov	lr, pc
        234c58:	e282f028 	add	pc, r2, #40	; 0x28
        234c5c:	e3340000 	teq	r4, #0	; 0x0
        234c60:	11a00004 	movne	r0, r4
        234c64:	1a000003 	bne	234c78 <TXContainer::ImportText(TXContainer *, long *)+0xfc>
        234c68:	e1a00006 	mov	r0, r6
        234c6c:	e5961000 	ldr	r1, [r6]
        234c70:	e1a0e00f 	mov	lr, pc
        234c74:	e281f010 	add	pc, r1, #16	; 0x10
        234c78:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        234c7c:	54455854 	strplb	r5, [r5], -#2132
    */
}

/**
 * Symbol: TXContainer::ImportObjects(TXContainer *, unsigned long, long *)
 * Address: 00234c80
 */
TXContainer::ImportObjects(TXContainer *, unsigned long, long *) {
    /*
        234c80:	e1a0c00d 	mov	ip, sp
        234c84:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        234c88:	e24cb004 	sub	fp, ip, #4	; 0x4
        234c8c:	e1a04000 	mov	r4, r0
        234c90:	e1a05001 	mov	r5, r1
        234c94:	e1a06002 	mov	r6, r2
        234c98:	e1a07003 	mov	r7, r3
        234c9c:	e1a01002 	mov	r1, r2
        234ca0:	e1a00005 	mov	r0, r5
        234ca4:	eb655616 	bl	1b8a504 <TXContainer::$ConvertAndFocusOnValue(unsigned long)>
        234ca8:	e3300000 	teq	r0, #0	; 0x0
        234cac:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        234cb0:	e1a01007 	mov	r1, r7
        234cb4:	e1a00005 	mov	r0, r5
        234cb8:	e5952000 	ldr	r2, [r5]
        234cbc:	e1a0e00f 	mov	lr, pc
        234cc0:	e282f01c 	add	pc, r2, #28	; 0x1c
        234cc4:	e3300000 	teq	r0, #0	; 0x0
        234cc8:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        234ccc:	e5977000 	ldr	r7, [r7]
        234cd0:	e1a01006 	mov	r1, r6
        234cd4:	e1a00004 	mov	r0, r4
        234cd8:	e5942000 	ldr	r2, [r4]
        234cdc:	e1a0e00f 	mov	lr, pc
        234ce0:	e282f030 	add	pc, r2, #48	; 0x30
        234ce4:	e1b01000 	movs	r1, r0
        234ce8:	03e00065 	mvneq	r0, #101	; 0x65
        234cec:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        234cf0:	e1a02007 	mov	r2, r7
        234cf4:	e1a00004 	mov	r0, r4
        234cf8:	e5943000 	ldr	r3, [r4]
        234cfc:	e1a0e00f 	mov	lr, pc
        234d00:	e283f004 	add	pc, r3, #4	; 0x4
        234d04:	e3300000 	teq	r0, #0	; 0x0
        234d08:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        234d0c:	e3a06000 	mov	r6, #0	; 0x0
        234d10:	e3570000 	cmp	r7, #0	; 0x0
        234d14:	da00002f 	ble	234dd8 <TXContainer::ImportObjects(TXContainer *, unsigned long, long *)+0x158>
        234d18:	e24dd00c 	sub	sp, sp, #12	; 0xc
        234d1c:	e1a0300d 	mov	r3, sp
        234d20:	e92d0008 	stmdb	sp!, {r3}
        234d24:	e28d3008 	add	r3, sp, #8	; 0x8
        234d28:	e28d200c 	add	r2, sp, #12	; 0xc
        234d2c:	e1a01006 	mov	r1, r6
        234d30:	e1a00005 	mov	r0, r5
        234d34:	e595c000 	ldr	ip, [r5]
        234d38:	e1a0e00f 	mov	lr, pc
        234d3c:	e28cf02c 	add	pc, ip, #44	; 0x2c
        234d40:	e28dd004 	add	sp, sp, #4	; 0x4
        234d44:	e3300000 	teq	r0, #0	; 0x0
        234d48:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        234d4c:	e24dd004 	sub	sp, sp, #4	; 0x4
        234d50:	e5dd0004 	ldrb	r0, [sp, #4]	; fField4
        234d54:	e3300000 	teq	r0, #0	; 0x0
        234d58:	13a00000 	movne	r0, #0	; 0x0
        234d5c:	03a00001 	moveq	r0, #1	; 0x1
        234d60:	e5cd0000 	strb	r0, [sp]
        234d64:	e1a0300d 	mov	r3, sp
        234d68:	e92d0008 	stmdb	sp!, {r3}
        234d6c:	e1a01006 	mov	r1, r6
        234d70:	e1a00004 	mov	r0, r4
        234d74:	e59d2010 	ldr	r2, [sp, #16]
        234d78:	e59d300c 	ldr	r3, [sp, #12]
        234d7c:	e594c000 	ldr	ip, [r4]
        234d80:	e1a0e00f 	mov	lr, pc
        234d84:	e28cf00c 	add	pc, ip, #12	; 0xc
        234d88:	e28dd004 	add	sp, sp, #4	; 0x4
        234d8c:	e1a08000 	mov	r8, r0
        234d90:	e5dd0004 	ldrb	r0, [sp, #4]	; fField4
        234d94:	e3300000 	teq	r0, #0	; 0x0
        234d98:	0a000007 	beq	234dbc <TXContainer::ImportObjects(TXContainer *, unsigned long, long *)+0x13c>
        234d9c:	e3380000 	teq	r8, #0	; 0x0
        234da0:	05dd0000 	ldreqb	r0, [sp]
        234da4:	03300000 	teqeq	r0, #0	; 0x0
        234da8:	0a000006 	beq	234dc8 <TXContainer::ImportObjects(TXContainer *, unsigned long, long *)+0x148>
        234dac:	e59d000c 	ldr	r0, [sp, #12]
        234db0:	e5901000 	ldr	r1, [r0]
        234db4:	e1a0e00f 	mov	lr, pc
        234db8:	e281f004 	add	pc, r1, #4	; 0x4
        234dbc:	e3380000 	teq	r8, #0	; 0x0
        234dc0:	11a00008 	movne	r0, r8
        234dc4:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        234dc8:	e28dd010 	add	sp, sp, #16	; 0x10
        234dcc:	e2866001 	add	r6, r6, #1	; 0x1
        234dd0:	e1560007 	cmp	r6, r7
        234dd4:	baffffcf 	blt	234d18 <TXContainer::ImportObjects(TXContainer *, unsigned long, long *)+0x98>
        234dd8:	e1a00004 	mov	r0, r4
        234ddc:	e5941000 	ldr	r1, [r4]
        234de0:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        234de4:	e281f010 	add	pc, r1, #16	; 0x10
    */
}

/**
 * Symbol: TXContainer::SetStream(TXStream *)
 * Address: 00234e60
 */
TXContainer::SetStream(TXStream *) {
    /*
        234e60:	e5a01004 	str	r1, [r0, #4]!	; fField4
        234e64:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXContainer::FocusOnValue(unsigned long)
 * Address: 00235274
 */
TXContainer::FocusOnValue(unsigned long) {
    /*
        235274:	e5a01008 	str	r1, [r0, #8]!	; fField8
        235278:	e3a00000 	mov	r0, #0	; 0x0
        23527c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXContainer::AppendNewValue(unsigned long, long)
 * Address: 00235704
 */
TXContainer::AppendNewValue(unsigned long, long) {
    /*
        235704:	e5a01008 	str	r1, [r0, #8]!	; fField8
        235708:	e3a00000 	mov	r0, #0	; 0x0
        23570c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXContainer::ConvertValueType(unsigned long)
 * Address: 00235a9c
 */
TXContainer::ConvertValueType(unsigned long) {
    /*
        235a9c:	e1a00001 	mov	r0, r1
        235aa0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXContainer::ConvertAndFocusOnValue(unsigned long)
 * Address: 00235ab0
 */
TXContainer::ConvertAndFocusOnValue(unsigned long) {
    /*
        235ab0:	e1a0c00d 	mov	ip, sp
        235ab4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        235ab8:	e24cb004 	sub	fp, ip, #4	; 0x4
        235abc:	e1a04000 	mov	r4, r0
        235ac0:	e5902000 	ldr	r2, [r0]
        235ac4:	e1a0e00f 	mov	lr, pc
        235ac8:	e282f030 	add	pc, r2, #48	; 0x30
        235acc:	e1b01000 	movs	r1, r0
        235ad0:	03e00065 	mvneq	r0, #101	; 0x65
        235ad4:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        235ad8:	e1a00004 	mov	r0, r4
        235adc:	e5942000 	ldr	r2, [r4]
        235ae0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        235ae4:	e282f018 	add	pc, r2, #24	; 0x18
    */
}

/**
 * Symbol: TXContainer::BeginWrite(void)
 * Address: 00235ae8
 */
TXContainer::BeginWrite(void) {
    /*
        235ae8:	e3a00000 	mov	r0, #0	; 0x0
        235aec:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXContainer::EndValueWrite(void)
 * Address: 00235af0
 */
TXContainer::EndValueWrite(void) {
    /*
        235af0:	e3a00000 	mov	r0, #0	; 0x0
        235af4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXContainer::EndWrite(unsigned char, TXContainerImportInfo *)
 * Address: 00235af8
 */
TXContainer::EndWrite(unsigned char, TXContainerImportInfo *) {
    /*
        235af8:	e3a00000 	mov	r0, #0	; 0x0
        235afc:	e1a0f00e 	mov	pc, lr
    */
}

