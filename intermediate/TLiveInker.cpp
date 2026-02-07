#include "include/TLiveInker.h"

/**
 * Symbol: TLiveInker::__ct(void)
 * Address: 00113840
 */
TLiveInker::TLiveInker(void) {
    /*
        113840:	e1a0c00d 	mov	ip, sp
        113844:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        113848:	e24cb004 	sub	fp, ip, #4	; 0x4
        11384c:	e3300000 	teq	r0, #0	; 0x0
        113850:	1a000003 	bne	113864 <TLiveInker::__ct(void)+0x24>
        113854:	e3a0003c 	mov	r0, #60	; 0x3c
        113858:	eb6aebb6 	bl	1bce738 <$__nw(unsigned int)>
        11385c:	e3300000 	teq	r0, #0	; 0x0
        113860:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        113864:	e3a01000 	mov	r1, #0	; 0x0
        113868:	e5801000 	str	r1, [r0]
        11386c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TLiveInker::__dt(void)
 * Address: 00113870
 */
TLiveInker::~TLiveInker(void) {
    /*
        113870:	e1a0c00d 	mov	ip, sp
        113874:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        113878:	e24cb004 	sub	fp, ip, #4	; 0x4
        11387c:	e1a04000 	mov	r4, r0
        113880:	e1a05001 	mov	r5, r1
        113884:	e5900000 	ldr	r0, [r0]
        113888:	eb6b3609 	bl	1be10b4 <$DisposPtr>
        11388c:	e3150001 	tst	r5, #1	; 0x1
        113890:	11a00004 	movne	r0, r4
        113894:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        113898:	1a6ae790 	bne	1bcd6e0 <$__dl(void *)>
        11389c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TLiveInker::Init(void)
 * Address: 001138a0
 */
TLiveInker::Init(void) {
    /*
        1138a0:	e1a0c00d 	mov	ip, sp
        1138a4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1138a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1138ac:	e1a04000 	mov	r4, r0
        1138b0:	e59f0068 	ldr	r0, [pc, #68]	; 113920 <TLiveInker::Init(void)+0x80>
        1138b4:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1138b8:	e20050ff 	and	r5, r0, #255	; 0xff
        1138bc:	e59f0060 	ldr	r0, [pc, #60]	; 113924 <TLiveInker::Init(void)+0x84>
        1138c0:	e0800005 	add	r0, r0, r5
        1138c4:	e5d00065 	ldrb	r0, [r0, #101]
        1138c8:	e3a01040 	mov	r1, #64	; 0x40
        1138cc:	e5840038 	str	r0, [r4, #56]	; fField56
        1138d0:	e1a00031 	mov	r0, r1, lsr r0
        1138d4:	e1a00300 	mov	r0, r0, lsl #6
        1138d8:	e5840034 	str	r0, [r4, #52]	; fField52
        1138dc:	eb6b3a17 	bl	1be2140 <$NewPtr>
        1138e0:	e5840000 	str	r0, [r4]
        1138e4:	e1b01000 	movs	r1, r0
        1138e8:	03a000e9 	moveq	r0, #233	; 0xe9
        1138ec:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        1138f0:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        1138f4:	e2850101 	add	r0, r5, #1073741824	; 0x40000000
        1138f8:	e5841004 	str	r1, [r4, #4]	; fField4
        1138fc:	e3a01048 	mov	r1, #72	; 0x48
        113900:	e5840014 	str	r0, [r4, #20]	; fField20
        113904:	e5c41019 	strb	r1, [r4, #25]	; fField25
        113908:	e3a00000 	mov	r0, #0	; 0x0
        11390c:	e5c40018 	strb	r0, [r4, #24]	; fField24
        113910:	e5c4101b 	strb	r1, [r4, #27]	; fField27
        113914:	e5c4001a 	strb	r0, [r4, #26]	; fField26
        113918:	e5a4001c 	str	r0, [r4, #28]!	; fField28
        11391c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        113920:	0c107d8c 	ldceq	13, cr7, [r0], -#560
        113924:	00380bcc 	eoreqs	r0, r8, ip, asr #23
    */
}

/**
 * Symbol: TLiveInker::ResetAccumulator(void)
 * Address: 00113928
 */
TLiveInker::ResetAccumulator(void) {
    /*
        113928:	e1a0c00d 	mov	ip, sp
        11392c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        113930:	e24cb004 	sub	fp, ip, #4	; 0x4
        113934:	e1a04000 	mov	r4, r0
        113938:	e3a03902 	mov	r3, #32768	; 0x8000
        11393c:	e92d0008 	stmdb	sp!, {r3}
        113940:	e2800020 	add	r0, r0, #32	; 0x20
        113944:	e3a02902 	mov	r2, #32768	; 0x8000
        113948:	e2422001 	sub	r2, r2, #1	; 0x1
        11394c:	e1a01002 	mov	r1, r2
        113950:	eb69042d 	bl	1b54a0c <$SetRect__FP4RectlN32>
        113954:	e3a00000 	mov	r0, #0	; 0x0
        113958:	e5840028 	str	r0, [r4, #40]	; fField40
        11395c:	e24dd018 	sub	sp, sp, #24	; 0x18
        113960:	e1a0100d 	mov	r1, sp
        113964:	e3a00007 	mov	r0, #7	; 0x7
        113968:	eb6b77ca 	bl	1bf1898 <$GetGrafInfo(long, void *)>
        11396c:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        113970:	e584002c 	str	r0, [r4, #44]	; fField44
        113974:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        113978:	e5a40030 	str	r0, [r4, #48]!	; fField48
        11397c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TLiveInker::AddPoint(Point const, Point const)
 * Address: 00113980
 */
TLiveInker::AddPoint(Point const, Point const) {
    /*
        113980:	e1a0c00d 	mov	ip, sp
        113984:	e92dd817 	stmdb	sp!, {r0, r1, r2, r4, fp, ip, lr, pc}
        113988:	e24cb004 	sub	fp, ip, #4	; 0x4
        11398c:	e1a04000 	mov	r4, r0
        113990:	e24dd008 	sub	sp, sp, #8	; 0x8
        113994:	e51b1018 	ldr	r1, [fp, -#24]	; fField24
        113998:	e1a01841 	mov	r1, r1, asr #16
        11399c:	e51b0016 	ldr	r0, [fp, -#22]
        1139a0:	e1a00840 	mov	r0, r0, asr #16
        1139a4:	e51b2014 	ldr	r2, [fp, -#20]	; fField20
        1139a8:	e0813842 	add	r3, r1, r2, asr #16
        1139ac:	e51b2012 	ldr	r2, [fp, -#18]	; fField18
        1139b0:	e0802842 	add	r2, r0, r2, asr #16
        1139b4:	e594c020 	ldr	ip, [r4, #32]	; fField32
        1139b8:	e1a0c84c 	mov	ip, ip, asr #16
        1139bc:	e15c0001 	cmp	ip, r1
        1139c0:	d594e022 	ldrle	lr, [r4, #34]	; fField34
        1139c4:	d1a0e84e 	movle	lr, lr, asr #16
        1139c8:	d15e0000 	cmple	lr, r0
        1139cc:	ca00000b 	bgt	113a00 <TLiveInker::AddPoint(Point const, Point const)+0x80>
        1139d0:	e594e024 	ldr	lr, [r4, #36]	; fField36
        1139d4:	e1a0e84e 	mov	lr, lr, asr #16
        1139d8:	e15e0003 	cmp	lr, r3
        1139dc:	a594e026 	ldrge	lr, [r4, #38]	; fField38
        1139e0:	a1a0e84e 	movge	lr, lr, asr #16
        1139e4:	a15e0002 	cmpge	lr, r2
        1139e8:	ba000004 	blt	113a00 <TLiveInker::AddPoint(Point const, Point const)+0x80>
        1139ec:	e5940028 	ldr	r0, [r4, #40]	; fField40
        1139f0:	e2800001 	add	r0, r0, #1	; 0x1
        1139f4:	e5a40028 	str	r0, [r4, #40]!	; fField40
        1139f8:	e3a00001 	mov	r0, #1	; 0x1
        1139fc:	ea000029 	b	113aa8 <TLiveInker::AddPoint(Point const, Point const)+0x128>
        113a00:	e15c0001 	cmp	ip, r1
        113a04:	b1a0100c 	movlt	r1, ip
        113a08:	e5cd1001 	strb	r1, [sp, #1]
        113a0c:	e1a01441 	mov	r1, r1, asr #8
        113a10:	e5cd1000 	strb	r1, [sp]
        113a14:	e5941022 	ldr	r1, [r4, #34]	; fField34
        113a18:	e1a01841 	mov	r1, r1, asr #16
        113a1c:	e1510000 	cmp	r1, r0
        113a20:	b1a00001 	movlt	r0, r1
        113a24:	e5cd0003 	strb	r0, [sp, #3]
        113a28:	e1a00440 	mov	r0, r0, asr #8
        113a2c:	e5cd0002 	strb	r0, [sp, #2]
        113a30:	e5940024 	ldr	r0, [r4, #36]	; fField36
        113a34:	e1a00840 	mov	r0, r0, asr #16
        113a38:	e1500003 	cmp	r0, r3
        113a3c:	d1a00003 	movle	r0, r3
        113a40:	e5cd0005 	strb	r0, [sp, #5]
        113a44:	e1a00440 	mov	r0, r0, asr #8
        113a48:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        113a4c:	e5940026 	ldr	r0, [r4, #38]	; fField38
        113a50:	e1a00840 	mov	r0, r0, asr #16
        113a54:	e1500002 	cmp	r0, r2
        113a58:	d1a00002 	movle	r0, r2
        113a5c:	e5cd0007 	strb	r0, [sp, #7]
        113a60:	e1a00440 	mov	r0, r0, asr #8
        113a64:	e5cd0006 	strb	r0, [sp, #6]
        113a68:	e5940028 	ldr	r0, [r4, #40]	; fField40
        113a6c:	e3500001 	cmp	r0, #1	; 0x1
        113a70:	d3a00001 	movle	r0, #1	; 0x1
        113a74:	da000005 	ble	113a90 <TLiveInker::AddPoint(Point const, Point const)+0x110>
        113a78:	e1a0100d 	mov	r1, sp
        113a7c:	e1a00004 	mov	r0, r4
        113a80:	e3a02000 	mov	r2, #0	; 0x0
        113a84:	eb68dec6 	bl	1b4b5a4 <TLiveInker::$MapLCDExtent(Rect const *, Rect *)>
        113a88:	e3300000 	teq	r0, #0	; 0x0
        113a8c:	0a000005 	beq	113aa8 <TLiveInker::AddPoint(Point const, Point const)+0x128>
        113a90:	e2841020 	add	r1, r4, #32	; 0x20
        113a94:	e89d1008 	ldmia	sp, {r3, ip}
        113a98:	e8811008 	stmia	r1, {r3, ip}
        113a9c:	e5941028 	ldr	r1, [r4, #40]	; fField40
        113aa0:	e2811001 	add	r1, r1, #1	; 0x1
        113aa4:	e5a41028 	str	r1, [r4, #40]!	; fField40
        113aa8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TLiveInker::MapLCDExtent(Rect const *, Rect *)
 * Address: 00113aac
 */
TLiveInker::MapLCDExtent(Rect const *, Rect *) {
    /*
        113aac:	e1a0c00d 	mov	ip, sp
        113ab0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        113ab4:	e24cb004 	sub	fp, ip, #4	; 0x4
        113ab8:	e590c02c 	ldr	ip, [r0, #44]	; fField44
        113abc:	e26c3000 	rsb	r3, ip, #0	; 0x0
        113ac0:	e591e000 	ldr	lr, [r1]
        113ac4:	e003e84e 	and	lr, r3, lr, asr #16
        113ac8:	e5914004 	ldr	r4, [r1, #4]	; fField4
        113acc:	e08cc844 	add	ip, ip, r4, asr #16
        113ad0:	e24cc001 	sub	ip, ip, #1	; 0x1
        113ad4:	e00c3003 	and	r3, ip, r3
        113ad8:	e591c002 	ldr	ip, [r1, #2]
        113adc:	e5904030 	ldr	r4, [r0, #48]	; fField48
        113ae0:	e2645000 	rsb	r5, r4, #0	; 0x0
        113ae4:	e005c84c 	and	ip, r5, ip, asr #16
        113ae8:	e5911006 	ldr	r1, [r1, #6]
        113aec:	e0841841 	add	r1, r4, r1, asr #16
        113af0:	e2411001 	sub	r1, r1, #1	; 0x1
        113af4:	e0011005 	and	r1, r1, r5
        113af8:	e59f5068 	ldr	r5, [pc, #68]	; 113b68 <TLiveInker::MapLCDExtent(Rect const *, Rect *)+0xbc>
        113afc:	e5904014 	ldr	r4, [r0, #20]	; fField20
        113b00:	e20440ff 	and	r4, r4, #255	; 0xff
        113b04:	e0854004 	add	r4, r5, r4
        113b08:	e5d44065 	ldrb	r4, [r4, #101]
        113b0c:	e041500c 	sub	r5, r1, ip
        113b10:	e1a04455 	mov	r4, r5, asr r4
        113b14:	e043500e 	sub	r5, r3, lr
        113b18:	e0040495 	mul	r4, r5, r4
        113b1c:	e5900034 	ldr	r0, [r0, #52]	; fField52
        113b20:	e1500004 	cmp	r0, r4
        113b24:	ba000010 	blt	113b6c <TLiveInker::MapLCDExtent(Rect const *, Rect *)+0xc0>
        113b28:	e3320000 	teq	r2, #0	; 0x0
        113b2c:	0a00000b 	beq	113b60 <TLiveInker::MapLCDExtent(Rect const *, Rect *)+0xb4>
        113b30:	e5c2e001 	strb	lr, [r2, #1]
        113b34:	e1a0044e 	mov	r0, lr, asr #8
        113b38:	e5c20000 	strb	r0, [r2]
        113b3c:	e5c2c003 	strb	ip, [r2, #3]
        113b40:	e1a0044c 	mov	r0, ip, asr #8
        113b44:	e5c20002 	strb	r0, [r2, #2]
        113b48:	e5c23005 	strb	r3, [r2, #5]
        113b4c:	e1a00443 	mov	r0, r3, asr #8
        113b50:	e5c20004 	strb	r0, [r2, #4]	; fField4
        113b54:	e5c21007 	strb	r1, [r2, #7]
        113b58:	e1a00441 	mov	r0, r1, asr #8
        113b5c:	e5c20006 	strb	r0, [r2, #6]
        113b60:	e3a00001 	mov	r0, #1	; 0x1
        113b64:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        113b68:	00380bcc 	eoreqs	r0, r8, ip, asr #23
        113b6c:	e3320000 	teq	r2, #0	; 0x0
        113b70:	0a000007 	beq	113b94 <TLiveInker::MapLCDExtent(Rect const *, Rect *)+0xe8>
        113b74:	e28e3040 	add	r3, lr, #64	; 0x40
        113b78:	e92d0008 	stmdb	sp!, {r3}
        113b7c:	e28c3040 	add	r3, ip, #64	; 0x40
        113b80:	e1a0100c 	mov	r1, ip
        113b84:	e1a00002 	mov	r0, r2
        113b88:	e1a0200e 	mov	r2, lr
        113b8c:	eb69039e 	bl	1b54a0c <$SetRect__FP4RectlN32>
        113b90:	e28dd004 	add	sp, sp, #4	; 0x4
        113b94:	e3a00000 	mov	r0, #0	; 0x0
        113b98:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TLiveInker::StartLiveInk(void)
 * Address: 00113b9c
 */
TLiveInker::StartLiveInk(void) {
    /*
        113b9c:	e1a0c00d 	mov	ip, sp
        113ba0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        113ba4:	e24cb004 	sub	fp, ip, #4	; 0x4
        113ba8:	e1a04000 	mov	r4, r0
        113bac:	e280200c 	add	r2, r0, #12	; 0xc
        113bb0:	e1a05002 	mov	r5, r2
        113bb4:	e2801020 	add	r1, r0, #32	; 0x20
        113bb8:	eb68de79 	bl	1b4b5a4 <TLiveInker::$MapLCDExtent(Rect const *, Rect *)>
        113bbc:	e59f1070 	ldr	r1, [pc, #70]	; 113c34 <TLiveInker::StartLiveInk(void)+0x98>
        113bc0:	e5940014 	ldr	r0, [r4, #20]	; fField20
        113bc4:	e20000ff 	and	r0, r0, #255	; 0xff
        113bc8:	e0810000 	add	r0, r1, r0
        113bcc:	e5d00065 	ldrb	r0, [r0, #101]
        113bd0:	e5942012 	ldr	r2, [r4, #18]	; fField18
        113bd4:	e1a02842 	mov	r2, r2, asr #16
        113bd8:	e594100e 	ldr	r1, [r4, #14]	; fField14
        113bdc:	e0421841 	sub	r1, r2, r1, asr #16
        113be0:	e1a00051 	mov	r0, r1, asr r0
        113be4:	e5c40009 	strb	r0, [r4, #9]	; fField9
        113be8:	e1a00440 	mov	r0, r0, asr #8
        113bec:	e5c40008 	strb	r0, [r4, #8]	; fField8
        113bf0:	e59f3040 	ldr	r3, [pc, #40]	; 113c38 <TLiveInker::StartLiveInk(void)+0x9c>	; fField40
        113bf4:	e1a02005 	mov	r2, r5
        113bf8:	e1a00005 	mov	r0, r5
        113bfc:	e3a01002 	mov	r1, #2	; 0x2
        113c00:	eb68ff61 	bl	1b5398c <$RSect(Rect *, long, long,...)>
        113c04:	e3300000 	teq	r0, #0	; 0x0
        113c08:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        113c0c:	e5940010 	ldr	r0, [r4, #16]	; fField16
        113c10:	e1a00840 	mov	r0, r0, asr #16
        113c14:	e594100c 	ldr	r1, [r4, #12]	; fField12
        113c18:	e0401841 	sub	r1, r0, r1, asr #16
        113c1c:	e5940000 	ldr	r0, [r4]
        113c20:	e5942008 	ldr	r2, [r4, #8]	; fField8
        113c24:	e1a02842 	mov	r2, r2, asr #16
        113c28:	e0010192 	mul	r1, r2, r1
        113c2c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        113c30:	ea6b30f9 	b	1be001c <$ZeroBytes>
        113c34:	00380bcc 	eoreqs	r0, r8, ip, asr #23
        113c38:	0c107d94 	ldceq	13, cr7, [r0], -#592
    */
}

/**
 * Symbol: TLiveInker::InkLine(Point const, Point const, Point const)
 * Address: 00113c3c
 */
TLiveInker::InkLine(Point const, Point const, Point const) {
    /*
        113c3c:	e1a0c00d 	mov	ip, sp
        113c40:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        113c44:	e24cb004 	sub	fp, ip, #4	; 0x4
        113c48:	e1a0c003 	mov	ip, r3
        113c4c:	e24dd008 	sub	sp, sp, #8	; 0x8
        113c50:	e2803004 	add	r3, r0, #4	; 0x4
        113c54:	e92d0008 	stmdb	sp!, {r3}
        113c58:	e28d3004 	add	r3, sp, #4	; 0x4
        113c5c:	e1a00001 	mov	r0, r1
        113c60:	e1a01002 	mov	r1, r2
        113c64:	e1a02003 	mov	r2, r3
        113c68:	e1a0300c 	mov	r3, ip
        113c6c:	eb68de44 	bl	1b4b584 <$InkerLine__FC5PointT1P4RectT1PC8PixelMap>
        113c70:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TLiveInker::StopLiveInk(void)
 * Address: 00113c74
 */
TLiveInker::StopLiveInk(void) {
    /*
        113c74:	e1a0c00d 	mov	ip, sp
        113c78:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        113c7c:	e24cb004 	sub	fp, ip, #4	; 0x4
        113c80:	e1a04000 	mov	r4, r0
        113c84:	e3a00001 	mov	r0, #1	; 0x1
        113c88:	eb68d614 	bl	1b494e0 <$BlockLCDActivity(unsigned char)>
        113c8c:	e284200c 	add	r2, r4, #12	; 0xc
        113c90:	e1a01002 	mov	r1, r2
        113c94:	e2840004 	add	r0, r4, #4	; 0x4
        113c98:	e3a03001 	mov	r3, #1	; 0x1
        113c9c:	eb68e26c 	bl	1b4c654 <$BlitToScreens__FP8PixelMapP4RectT2l>
        113ca0:	e3a00000 	mov	r0, #0	; 0x0
        113ca4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        113ca8:	ea68d60c 	b	1b494e0 <$BlockLCDActivity(unsigned char)>
    */
}

