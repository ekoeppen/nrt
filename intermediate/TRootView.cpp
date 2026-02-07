#include "include/TRootView.h"

/**
 * Symbol: TRootView::ClassID( const(void))
 * Address: 001b182c
 */
TRootView::ClassID( const(void)) {
    /*
        1b182c:	e3a0004b 	mov	r0, #75	; 0x4b
        1b1830:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRootView::DerivedFrom( const(long))
 * Address: 001b1834
 */
TRootView::DerivedFrom( const(long)) {
    /*
        1b1834:	e1a0c00d 	mov	ip, sp
        1b1838:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1b183c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b1840:	e331004b 	teq	r1, #75	; 0x4b
        1b1844:	0a000002 	beq	1b1854 <TRootView::DerivedFrom( const(long))+0x20>
        1b1848:	eb02c75c 	bl	2635c0 <TView::DerivedFrom( const(long))>
        1b184c:	e3300000 	teq	r0, #0	; 0x0
        1b1850:	0a000001 	beq	1b185c <TRootView::DerivedFrom( const(long))+0x28>
        1b1854:	e3a00001 	mov	r0, #1	; 0x1
        1b1858:	ea000000 	b	1b1860 <TRootView::DerivedFrom( const(long))+0x2c>
        1b185c:	e3a00000 	mov	r0, #0	; 0x0
        1b1860:	e20000ff 	and	r0, r0, #255	; 0xff
        1b1864:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TRootView::Constructor(RefVar const &)
 * Address: 001b1868
 */
TRootView::Constructor(RefVar const &) {
    /*
        1b1868:	e1a0c00d 	mov	ip, sp
        1b186c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1b1870:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b1874:	e1a04000 	mov	r4, r0
        1b1878:	e1a05001 	mov	r5, r1
        1b187c:	e59f3144 	ldr	r3, [pc, #144]	; 1b19c8 <TRootView::Constructor(RefVar const &)+0x160>	; fField144
        1b1880:	e3a02008 	mov	r2, #8	; 0x8
        1b1884:	e3a01003 	mov	r1, #3	; 0x3
        1b1888:	e3a00000 	mov	r0, #0	; 0x0
        1b188c:	eb614a77 	bl	1a04270 <$__nw_v__FPvUiT2PFPv_v>
        1b1890:	e3a02004 	mov	r2, #4	; 0x4
        1b1894:	e3a01010 	mov	r1, #16	; 0x10
        1b1898:	e5840034 	str	r0, [r4, #52]	; fField52
        1b189c:	e3a00000 	mov	r0, #0	; 0x0
        1b18a0:	eb68c64b 	bl	1be31d4 <CDynamicArray::$__ct(long, long)>
        1b18a4:	e5840040 	str	r0, [r4, #64]	; fField64
        1b18a8:	eb63a0fe 	bl	1a99ca8 <$InitCorrection(void)>
        1b18ac:	eb0764ad 	bl	38ab68 <C$$dtorvec$$Limit+0x1f4>
        1b18b0:	e59f7114 	ldr	r7, [pc, #114]	; 1b19cc <TRootView::Constructor(RefVar const &)+0x164>
        1b18b4:	e2848060 	add	r8, r4, #96	; 0x60
        1b18b8:	e5870000 	str	r0, [r7]
        1b18bc:	e59f010c 	ldr	r0, [pc, #10c]	; 1b19d0 <TRootView::Constructor(RefVar const &)+0x168>
        1b18c0:	e1a06000 	mov	r6, r0
        1b18c4:	e3a01000 	mov	r1, #0	; 0x0
        1b18c8:	eb68421a 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        1b18cc:	e5981000 	ldr	r1, [r8]
        1b18d0:	e284807c 	add	r8, r4, #124	; 0x7c
        1b18d4:	e5810000 	str	r0, [r1]
        1b18d8:	e1a00006 	mov	r0, r6
        1b18dc:	e3a01000 	mov	r1, #0	; 0x0
        1b18e0:	eb684214 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        1b18e4:	e5981000 	ldr	r1, [r8]
        1b18e8:	e5810000 	str	r0, [r1]
        1b18ec:	e24dd00c 	sub	sp, sp, #12	; 0xc
        1b18f0:	e28d0004 	add	r0, sp, #4	; 0x4
        1b18f4:	eb686f77 	bl	1bcd6d8 <TUGestalt::$__ct(void)>
        1b18f8:	e1a0200d 	mov	r2, sp
        1b18fc:	e28d0004 	add	r0, sp, #4	; 0x4
        1b1900:	e3a03004 	mov	r3, #4	; 0x4
        1b1904:	e3a01402 	mov	r1, #33554432	; 0x2000000
        1b1908:	e281100b 	add	r1, r1, #11	; 0xb
        1b190c:	eb688416 	bl	1bd296c <TUGestalt::$Gestalt(unsigned long, void *, unsigned long)>
        1b1910:	e3300000 	teq	r0, #0	; 0x0
        1b1914:	1a000003 	bne	1b1928 <TRootView::Constructor(RefVar const &)+0xc0>
        1b1918:	e5dd0000 	ldrb	r0, [sp]
        1b191c:	e3300000 	teq	r0, #0	; 0x0
        1b1920:	13a00001 	movne	r0, #1	; 0x1
        1b1924:	15c70008 	strneb	r0, [r7, #8]	; fField8
        1b1928:	e28d0004 	add	r0, sp, #4	; 0x4
        1b192c:	e3a01000 	mov	r1, #0	; 0x0
        1b1930:	eb68737b 	bl	1bce724 <TUObject::$__dt(void)>
        1b1934:	e3a06000 	mov	r6, #0	; 0x0
        1b1938:	e59f0094 	ldr	r0, [pc, #94]	; 1b19d4 <TRootView::Constructor(RefVar const &)+0x16c>
        1b193c:	eb68420a 	bl	1bc216c <$Clone(RefVar const &)>
        1b1940:	eb684201 	bl	1bc214c <$AllocateRefHandle(long)>
        1b1944:	e1a02005 	mov	r2, r5
        1b1948:	e58d0008 	str	r0, [sp, #8]	; fField8
        1b194c:	e59f1084 	ldr	r1, [pc, #84]	; 1b19d8 <TRootView::Constructor(RefVar const &)+0x170>	; fField84
        1b1950:	e28d0008 	add	r0, sp, #8	; 0x8
        1b1954:	eb685283 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1b1958:	e1a02004 	mov	r2, r4
        1b195c:	e28d1008 	add	r1, sp, #8	; 0x8
        1b1960:	e1a00004 	mov	r0, r4
        1b1964:	eb685edb 	bl	1bc94d8 <TView::$Constructor(RefVar const &, TView *)>
        1b1968:	e3a00000 	mov	r0, #0	; 0x0
        1b196c:	eb635aa9 	bl	1a88418 <TBits::$__ct(void)>
        1b1970:	e3a0100c 	mov	r1, #12	; 0xc
        1b1974:	e5840084 	str	r0, [r4, #132]	; fField132
        1b1978:	e3a0000b 	mov	r0, #11	; 0xb
        1b197c:	e5cd6001 	strb	r6, [sp, #1]	; fField1
        1b1980:	e5cd6000 	strb	r6, [sp]
        1b1984:	e5cd6003 	strb	r6, [sp, #3]	; fField3
        1b1988:	e5cd6002 	strb	r6, [sp, #2]	; fField2
        1b198c:	e5cd1005 	strb	r1, [sp, #5]	; fField5
        1b1990:	e5cd6004 	strb	r6, [sp, #4]	; fField4
        1b1994:	e5cd0007 	strb	r0, [sp, #7]	; fField7
        1b1998:	e5cd6006 	strb	r6, [sp, #6]	; fField6
        1b199c:	e1a0100d 	mov	r1, sp
        1b19a0:	e5940084 	ldr	r0, [r4, #132]	; fField132
        1b19a4:	eb636f49 	bl	1a8d6d0 <TBits::$Constructor(TRect const &)>
        1b19a8:	e1a00004 	mov	r0, r4
        1b19ac:	e3a01000 	mov	r1, #0	; 0x0
        1b19b0:	e5942000 	ldr	r2, [r4]
        1b19b4:	e1a0e00f 	mov	lr, pc
        1b19b8:	e282f054 	add	pc, r2, #84	; 0x54
        1b19bc:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        1b19c0:	eb6845fd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b19c4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1b19c8:	0038acf0 	ldreqsh	sl, [r8], -r0
        1b19cc:	0c101930 	ldceq	9, cr1, [r0], -#192
        1b19d0:	00681f10 	rsbeq	r1, r8, r0, lsl pc
        1b19d4:	00680c88 	rsbeq	r0, r8, r8, lsl #25
        1b19d8:	00685390 	streqb	r5, [r8], -#48	; fField48
    */
}

/**
 * Symbol: TRootView::__dt(void)
 * Address: 001b19dc
 */
TRootView::~TRootView(void) {
    /*
        1b19dc:	e1a0c00d 	mov	ip, sp
        1b19e0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1b19e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b19e8:	e1a04000 	mov	r4, r0
        1b19ec:	e1a05001 	mov	r5, r1
        1b19f0:	e59f0090 	ldr	r0, [pc, #90]	; 1b1a88 <TRootView::__dt(void)+0xac>
        1b19f4:	e5840000 	str	r0, [r4]
        1b19f8:	e5940040 	ldr	r0, [r4, #64]	; fField64
        1b19fc:	e3300000 	teq	r0, #0	; 0x0
        1b1a00:	13a01001 	movne	r1, #1	; 0x1
        1b1a04:	1b68ca16 	blne	1be4264 <CDynamicArray::$__dt(void)>
        1b1a08:	e5946034 	ldr	r6, [r4, #52]	; fField52
        1b1a0c:	e3360000 	teq	r6, #0	; 0x0
        1b1a10:	0a000004 	beq	1b1a28 <TRootView::__dt(void)+0x4c>
        1b1a14:	e2860004 	add	r0, r6, #4	; 0x4
        1b1a18:	e3a01000 	mov	r1, #0	; 0x0
        1b1a1c:	eb635a8d 	bl	1a88458 <TRegionStruct::$__dt(void)>
        1b1a20:	e1a00006 	mov	r0, r6
        1b1a24:	eb686f2d 	bl	1bcd6e0 <$__dl(void *)>
        1b1a28:	e5940084 	ldr	r0, [r4, #132]	; fField132
        1b1a2c:	e3300000 	teq	r0, #0	; 0x0
        1b1a30:	13a01001 	movne	r1, #1	; 0x1
        1b1a34:	1b635a8f 	blne	1a88478 <TBits::$__dt(void)>
        1b1a38:	e594009c 	ldr	r0, [r4, #156]	; fField156
        1b1a3c:	eb6845de 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b1a40:	e5940098 	ldr	r0, [r4, #152]	; fField152
        1b1a44:	eb6845dc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b1a48:	e594007c 	ldr	r0, [r4, #124]	; fField124
        1b1a4c:	eb6845da 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b1a50:	e5940060 	ldr	r0, [r4, #96]	; fField96
        1b1a54:	eb6845d8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b1a58:	e5940058 	ldr	r0, [r4, #88]	; fField88
        1b1a5c:	eb6845d6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b1a60:	e5940054 	ldr	r0, [r4, #84]	; fField84
        1b1a64:	eb6845d4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b1a68:	e1a00004 	mov	r0, r4
        1b1a6c:	e3a01000 	mov	r1, #0	; 0x0
        1b1a70:	eb685e85 	bl	1bc948c <TView::$__dt(void)>
        1b1a74:	e3150001 	tst	r5, #1	; 0x1
        1b1a78:	11a00004 	movne	r0, r4
        1b1a7c:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
        1b1a80:	1a635a6d 	bne	1a8843c <$__dl__8TxObjectSFPv>
        1b1a84:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1b1a88:	00020ffc 	streqd	r0, [r2], -ip
    */
}

/**
 * Symbol: TRootView::HoldPendingKeyView(RefVar const &, RefVar const &)
 * Address: 001b1cc0
 */
TRootView::HoldPendingKeyView(RefVar const &, RefVar const &) {
    /*
        1b1cc0:	e5911000 	ldr	r1, [r1]
        1b1cc4:	e5911000 	ldr	r1, [r1]
        1b1cc8:	e5903098 	ldr	r3, [r0, #152]	; fField152
        1b1ccc:	e5831000 	str	r1, [r3]
        1b1cd0:	e5921000 	ldr	r1, [r2]
        1b1cd4:	e5911000 	ldr	r1, [r1]
        1b1cd8:	e590009c 	ldr	r0, [r0, #156]	; fField156
        1b1cdc:	e5801000 	str	r1, [r0]
        1b1ce0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRootView::ActivatePendingKeyView(void)
 * Address: 001b1ce4
 */
TRootView::ActivatePendingKeyView(void) {
    /*
        1b1ce4:	e1a0c00d 	mov	ip, sp
        1b1ce8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1b1cec:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b1cf0:	e1a04000 	mov	r4, r0
        1b1cf4:	e2800098 	add	r0, r0, #152	; 0x98
        1b1cf8:	e1a06000 	mov	r6, r0
        1b1cfc:	eb686216 	bl	1bca55c <$GetView(RefVar const &)>
        1b1d00:	e1b01000 	movs	r1, r0
        1b1d04:	e284509c 	add	r5, r4, #156	; 0x9c
        1b1d08:	0a000003 	beq	1b1d1c <TRootView::ActivatePendingKeyView(void)+0x38>
        1b1d0c:	e1a02005 	mov	r2, r5
        1b1d10:	e1a00004 	mov	r0, r4
        1b1d14:	e3a03001 	mov	r3, #1	; 0x1
        1b1d18:	eb64d17d 	bl	1ae6314 <TRootView::$SetKeyViewSelection(TView *, RefVar const &, unsigned char)>
        1b1d1c:	e3a00002 	mov	r0, #2	; 0x2
        1b1d20:	e5961000 	ldr	r1, [r6]
        1b1d24:	e5810000 	str	r0, [r1]
        1b1d28:	e5951000 	ldr	r1, [r5]
        1b1d2c:	e5810000 	str	r0, [r1]
        1b1d30:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TRootView::CaretViewGone(void)
 * Address: 001b1d34
 */
TRootView::CaretViewGone(void) {
    /*
        1b1d34:	e1a0c00d 	mov	ip, sp
        1b1d38:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1b1d3c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b1d40:	e1a04000 	mov	r4, r0
        1b1d44:	eb64d175 	bl	1ae6320 <TRootView::$PopSelection(void)>
        1b1d48:	eb6840ff 	bl	1bc214c <$AllocateRefHandle(long)>
        1b1d4c:	e1a05000 	mov	r5, r0
        1b1d50:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b1d54:	e5900000 	ldr	r0, [r0]
        1b1d58:	e3300002 	teq	r0, #2	; 0x2
        1b1d5c:	1a00000a 	bne	1b1d8c <TRootView::CaretViewGone(void)+0x58>
        1b1d60:	e3a00002 	mov	r0, #2	; 0x2
        1b1d64:	eb6840f8 	bl	1bc214c <$AllocateRefHandle(long)>
        1b1d68:	e58d0000 	str	r0, [sp]
        1b1d6c:	e1a0200d 	mov	r2, sp
        1b1d70:	e1a00004 	mov	r0, r4
        1b1d74:	e3a03000 	mov	r3, #0	; 0x0
        1b1d78:	e3a01000 	mov	r1, #0	; 0x0
        1b1d7c:	eb64d164 	bl	1ae6314 <TRootView::$SetKeyViewSelection(TView *, RefVar const &, unsigned char)>
        1b1d80:	e59d0000 	ldr	r0, [sp]
        1b1d84:	eb68450c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b1d88:	ea00001a 	b	1b1df8 <TRootView::CaretViewGone(void)+0xc4>
        1b1d8c:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b1d90:	e59f106c 	ldr	r1, [pc, #6c]	; 1b1e04 <TRootView::CaretViewGone(void)+0xd0>	; fField6
        1b1d94:	e5911000 	ldr	r1, [r1]
        1b1d98:	e5911000 	ldr	r1, [r1]
        1b1d9c:	eb68492f 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        1b1da0:	eb6840e9 	bl	1bc214c <$AllocateRefHandle(long)>
        1b1da4:	e58d0000 	str	r0, [sp]
        1b1da8:	e1a0000d 	mov	r0, sp
        1b1dac:	eb6861ea 	bl	1bca55c <$GetView(RefVar const &)>
        1b1db0:	e1a06000 	mov	r6, r0
        1b1db4:	e59d0000 	ldr	r0, [sp]
        1b1db8:	eb6844ff 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b1dbc:	e59f0044 	ldr	r0, [pc, #44]	; 1b1e08 <TRootView::CaretViewGone(void)+0xd4>
        1b1dc0:	e5900000 	ldr	r0, [r0]
        1b1dc4:	e5901000 	ldr	r1, [r0]
        1b1dc8:	e5950000 	ldr	r0, [r5]
        1b1dcc:	eb684923 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        1b1dd0:	eb6840dd 	bl	1bc214c <$AllocateRefHandle(long)>
        1b1dd4:	e58d0004 	str	r0, [sp, #4]	; fField4
        1b1dd8:	e28d2004 	add	r2, sp, #4	; 0x4
        1b1ddc:	e1a01006 	mov	r1, r6
        1b1de0:	e1a00004 	mov	r0, r4
        1b1de4:	e3a03000 	mov	r3, #0	; 0x0
        1b1de8:	eb64d149 	bl	1ae6314 <TRootView::$SetKeyViewSelection(TView *, RefVar const &, unsigned char)>
        1b1dec:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1b1df0:	eb6844f1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b1df4:	e28dd008 	add	sp, sp, #8	; 0x8
        1b1df8:	e1a00005 	mov	r0, r5
        1b1dfc:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        1b1e00:	ea6844ed 	b	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b1e04:	00684ee8 	rsbeq	r4, r8, r8, ror #29
        1b1e08:	006831f8 	streqd	r3, [r8], -#24
    */
}

/**
 * Symbol: TRootView::ForgetAboutView(TView *)
 * Address: 001b1e0c
 */
TRootView::ForgetAboutView(TView *) {
    /*
        1b1e0c:	e1a0c00d 	mov	ip, sp
        1b1e10:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1b1e14:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b1e18:	e1a05000 	mov	r5, r0
        1b1e1c:	e1a04001 	mov	r4, r1
        1b1e20:	e5900030 	ldr	r0, [r0, #48]	; fField48
        1b1e24:	e3a06000 	mov	r6, #0	; 0x0
        1b1e28:	e1300001 	teq	r0, r1
        1b1e2c:	05856030 	streq	r6, [r5, #48]	; fField48
        1b1e30:	e5950068 	ldr	r0, [r5, #104]	; fField104
        1b1e34:	e1300004 	teq	r0, r4
        1b1e38:	01a00005 	moveq	r0, r5
        1b1e3c:	0b64d132 	bleq	1ae630c <TRootView::$CaretViewGone(void)>
        1b1e40:	e5950050 	ldr	r0, [r5, #80]	; fField80
        1b1e44:	e1300004 	teq	r0, r4
        1b1e48:	1a000003 	bne	1b1e5c <TRootView::ForgetAboutView(TView *)+0x50>
        1b1e4c:	e1a01004 	mov	r1, r4
        1b1e50:	e1a00005 	mov	r0, r5
        1b1e54:	e3a02000 	mov	r2, #0	; 0x0
        1b1e58:	eb63c0b3 	bl	1aa212c <TRootView::$SetPopup(TView *, unsigned char)>
        1b1e5c:	e5950078 	ldr	r0, [r5, #120]	; fField120
        1b1e60:	e1300004 	teq	r0, r4
        1b1e64:	05856078 	streq	r6, [r5, #120]	; fField120
        1b1e68:	0a000002 	beq	1b1e78 <TRootView::ForgetAboutView(TView *)+0x6c>
        1b1e6c:	e5950074 	ldr	r0, [r5, #116]	; fField116
        1b1e70:	e1300004 	teq	r0, r4
        1b1e74:	05856074 	streq	r6, [r5, #116]	; fField116
        1b1e78:	e2841024 	add	r1, r4, #36	; 0x24
        1b1e7c:	e1a00005 	mov	r0, r5
        1b1e80:	eb648aed 	bl	1ad4a3c <TRootView::$UnregisterKeyboard(RefVar const &)>
        1b1e84:	e5940008 	ldr	r0, [r4, #8]	; fField8
        1b1e88:	e3100202 	tst	r0, #536870912	; 0x20000000
        1b1e8c:	11a01004 	movne	r1, r4
        1b1e90:	11a00005 	movne	r0, r5
        1b1e94:	1b63b857 	blne	1a9fff8 <TRootView::$RemoveAllIdlers(TView *)>
        1b1e98:	e3a00000 	mov	r0, #0	; 0x0
        1b1e9c:	e5951034 	ldr	r1, [r5, #52]	; fField52
        1b1ea0:	e7912180 	ldr	r2, [r1, r0, lsl #3]	; fField3
        1b1ea4:	e1320004 	teq	r2, r4
        1b1ea8:	0594201c 	ldreq	r2, [r4, #28]	; fField28
        1b1eac:	07812180 	streq	r2, [r1, r0, lsl #3]	; fField3
        1b1eb0:	e2800001 	add	r0, r0, #1	; 0x1
        1b1eb4:	e3500003 	cmp	r0, #3	; 0x3
        1b1eb8:	bafffff7 	blt	1b1e9c <TRootView::ForgetAboutView(TView *)+0x90>
        1b1ebc:	e5940028 	ldr	r0, [r4, #40]	; fField40
        1b1ec0:	e3100101 	tst	r0, #1073741824	; 0x40000000
        1b1ec4:	0a000002 	beq	1b1ed4 <TRootView::ForgetAboutView(TView *)+0xc8>
        1b1ec8:	e1a00004 	mov	r0, r4
        1b1ecc:	eb6482a5 	bl	1ad2968 <$RealExitModalDialog(TView *)>
        1b1ed0:	ea000004 	b	1b1ee8 <TRootView::ForgetAboutView(TView *)+0xdc>
        1b1ed4:	e59f001c 	ldr	r0, [pc, #1c]	; 1b1ef8 <TRootView::ForgetAboutView(TView *)+0xec>	; fField1
        1b1ed8:	e5900000 	ldr	r0, [r0]
        1b1edc:	e3300000 	teq	r0, #0	; 0x0
        1b1ee0:	11a00004 	movne	r0, r4
        1b1ee4:	1b6486a6 	blne	1ad3984 <$RemoveModalSafeView(TView *)>
        1b1ee8:	e1a01004 	mov	r1, r4
        1b1eec:	e59f0008 	ldr	r0, [pc, #8]	; 1b1efc <TRootView::ForgetAboutView(TView *)+0xf0>	; fField8
        1b1ef0:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        1b1ef4:	ea641b5b 	b	1ab8c68 <TRecognitionManager::$RemoveClickView(TView *)>
        1b1ef8:	0c105524 	ldceq	5, cr5, [r0], -#144	; fField144
        1b1efc:	0c106e88 	ldceq	14, cr6, [r0], -#544
    */
}

/**
 * Symbol: TRootView::SmartInvalidate(TRect const &)
 * Address: 001b1f00
 */
TRootView::SmartInvalidate(TRect const &) {
    /*
        1b1f00:	e1a0c00d 	mov	ip, sp
        1b1f04:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1b1f08:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b1f0c:	e1a04001 	mov	r4, r1
        1b1f10:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b1f14:	e1a06000 	mov	r6, r0
        1b1f18:	e3a07000 	mov	r7, #0	; 0x0
        1b1f1c:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b1f20:	e1a0000d 	mov	r0, sp
        1b1f24:	e5961020 	ldr	r1, [r6, #32]	; fField32
        1b1f28:	eb63552f 	bl	1a873ec <TBackwardLoop::$__ct(CList *)>
        1b1f2c:	e1a0000d 	mov	r0, sp
        1b1f30:	eb63abb7 	bl	1a9ce14 <TBackwardLoop::$Next(void)>
        1b1f34:	e1b05000 	movs	r5, r0
        1b1f38:	0a000017 	beq	1b1f9c <TRootView::SmartInvalidate(TRect const &)+0x9c>
        1b1f3c:	e5950008 	ldr	r0, [r5, #8]	; fField8
        1b1f40:	e3100001 	tst	r0, #1	; 0x1
        1b1f44:	0a000010 	beq	1b1f8c <TRootView::SmartInvalidate(TRect const &)+0x8c>
        1b1f48:	e28d1008 	add	r1, sp, #8	; 0x8
        1b1f4c:	e1a00005 	mov	r0, r5
        1b1f50:	e5952000 	ldr	r2, [r5]
        1b1f54:	e1a0e00f 	mov	lr, pc
        1b1f58:	e282f024 	add	pc, r2, #36	; 0x24
        1b1f5c:	e28d1008 	add	r1, sp, #8	; 0x8
        1b1f60:	e1a00004 	mov	r0, r4
        1b1f64:	eb63a36c 	bl	1a9ad1c <TRect::$Intersects( const(TRect const &))>
        1b1f68:	e3300000 	teq	r0, #0	; 0x0
        1b1f6c:	0a000006 	beq	1b1f8c <TRootView::SmartInvalidate(TRect const &)+0x8c>
        1b1f70:	e2850010 	add	r0, r5, #16	; 0x10
        1b1f74:	e1a01004 	mov	r1, r4
        1b1f78:	eb638277 	bl	1a9295c <TRect::$Encloses( const(TRect const &))>
        1b1f7c:	e3300000 	teq	r0, #0	; 0x0
        1b1f80:	13a07001 	movne	r7, #1	; 0x1
        1b1f84:	11a06005 	movne	r6, r5
        1b1f88:	ea000003 	b	1b1f9c <TRootView::SmartInvalidate(TRect const &)+0x9c>
        1b1f8c:	e1a0000d 	mov	r0, sp
        1b1f90:	eb63ab9f 	bl	1a9ce14 <TBackwardLoop::$Next(void)>
        1b1f94:	e1b05000 	movs	r5, r0
        1b1f98:	1affffe7 	bne	1b1f3c <TRootView::SmartInvalidate(TRect const &)+0x3c>
        1b1f9c:	e28dd008 	add	sp, sp, #8	; 0x8
        1b1fa0:	e3370000 	teq	r7, #0	; 0x0
        1b1fa4:	1affffdb 	bne	1b1f18 <TRootView::SmartInvalidate(TRect const &)+0x18>
        1b1fa8:	e1a0500d 	mov	r5, sp
        1b1fac:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b1fb0:	e1a0000d 	mov	r0, sp
        1b1fb4:	eb68f5fa 	bl	1bef7a4 <$GetPort(GrafPort **)>
        1b1fb8:	e49d0004 	ldr	r0, [sp], #4	; fField4
        1b1fbc:	e280101c 	add	r1, r0, #28	; 0x1c
        1b1fc0:	e1a00004 	mov	r0, r4
        1b1fc4:	e1a02005 	mov	r2, r5
        1b1fc8:	eb66867f 	bl	1b539cc <$SectRect__FP4RectN21>
        1b1fcc:	e1a0100d 	mov	r1, sp
        1b1fd0:	e1a00006 	mov	r0, r6
        1b1fd4:	e5962000 	ldr	r2, [r6]
        1b1fd8:	e1a0e00f 	mov	lr, pc
        1b1fdc:	e282f054 	add	pc, r2, #84	; 0x54
        1b1fe0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TRootView::GetCommonParent(TView *, TView *)
 * Address: 001b1ffc
 */
TRootView::GetCommonParent(TView *, TView *) {
    /*
        1b1ffc:	e1b00001 	movs	r0, r1
        1b2000:	0a00000f 	beq	1b2044 <TRootView::GetCommonParent(TView *, TView *)+0x48>
        1b2004:	e1b01002 	movs	r1, r2
        1b2008:	0a000007 	beq	1b202c <TRootView::GetCommonParent(TView *, TView *)+0x30>
        1b200c:	e1310000 	teq	r1, r0
        1b2010:	01a0f00e 	moveq	pc, lr
        1b2014:	e591301c 	ldr	r3, [r1, #28]	; fField28
        1b2018:	e1330001 	teq	r3, r1
        1b201c:	11a01003 	movne	r1, r3
        1b2020:	03a01000 	moveq	r1, #0	; 0x0
        1b2024:	e3310000 	teq	r1, #0	; 0x0
        1b2028:	1afffff7 	bne	1b200c <TRootView::GetCommonParent(TView *, TView *)+0x10>
        1b202c:	e590101c 	ldr	r1, [r0, #28]	; fField28
        1b2030:	e1310000 	teq	r1, r0
        1b2034:	11a00001 	movne	r0, r1
        1b2038:	03a00000 	moveq	r0, #0	; 0x0
        1b203c:	e3300000 	teq	r0, #0	; 0x0
        1b2040:	1affffef 	bne	1b2004 <TRootView::GetCommonParent(TView *, TView *)+0x8>
        1b2044:	e3a00000 	mov	r0, #0	; 0x0
        1b2048:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRootView::Invalidate(TBaseRegion const, TView *)
 * Address: 001b204c
 */
TRootView::Invalidate(TBaseRegion const, TView *) {
    /*
        1b204c:	e1a0c00d 	mov	ip, sp
        1b2050:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1b2054:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b2058:	e1a05001 	mov	r5, r1
        1b205c:	e1a04000 	mov	r4, r0
        1b2060:	e1a06002 	mov	r6, r2
        1b2064:	e59f00b8 	ldr	r0, [pc, #b8]	; 1b2124 <TRootView::Invalidate(TBaseRegion const, TView *)+0xd8>
        1b2068:	e5900010 	ldr	r0, [r0, #16]
        1b206c:	e3300000 	teq	r0, #0	; 0x0
        1b2070:	0a000007 	beq	1b2094 <TRootView::Invalidate(TBaseRegion const, TView *)+0x48>
        1b2074:	e3a01000 	mov	r1, #0	; 0x0
        1b2078:	e3a00000 	mov	r0, #0	; 0x0
        1b207c:	eb666965 	bl	1b4c618 <$StartDrawing(PixelMap *, Rect *)>
        1b2080:	e1a00005 	mov	r0, r5
        1b2084:	eb6679f7 	bl	1b50868 <$InvertRgn(Region **)>
        1b2088:	e3a01000 	mov	r1, #0	; 0x0
        1b208c:	e3a00000 	mov	r0, #0	; 0x0
        1b2090:	eb666962 	bl	1b4c620 <$StopDrawing(PixelMap *, Rect *)>
        1b2094:	e24dd00c 	sub	sp, sp, #12	; 0xc
        1b2098:	e59f0088 	ldr	r0, [pc, #88]	; 1b2128 <TRootView::Invalidate(TBaseRegion const, TView *)+0xdc>	; fField88
        1b209c:	e890100a 	ldmia	r0, {r1, r3, ip}
        1b20a0:	e88d100a 	stmia	sp, {r1, r3, ip}
        1b20a4:	e3a08000 	mov	r8, #0	; 0x0
        1b20a8:	e3360000 	teq	r6, #0	; 0x0
        1b20ac:	11360004 	teqne	r6, r4
        1b20b0:	1a00001d 	bne	1b212c <TRootView::Invalidate(TBaseRegion const, TView *)+0xe0>
        1b20b4:	e5940034 	ldr	r0, [r4, #52]	; fField52
        1b20b8:	e5804000 	str	r4, [r0]
        1b20bc:	e1a01005 	mov	r1, r5
        1b20c0:	e5940034 	ldr	r0, [r4, #52]	; fField52
        1b20c4:	e5b02004 	ldr	r2, [r0, #4]!	; fField4
        1b20c8:	e1a00002 	mov	r0, r2
        1b20cc:	eb668e6d 	bl	1b55a88 <$UnionRgn__FPP6RegionN21>
        1b20d0:	e3a05001 	mov	r5, #1	; 0x1
        1b20d4:	e5941034 	ldr	r1, [r4, #52]	; fField52
        1b20d8:	e7910185 	ldr	r0, [r1, r5, lsl #3]	; fField3
        1b20dc:	e3300000 	teq	r0, #0	; 0x0
        1b20e0:	0a00000b 	beq	1b2114 <TRootView::Invalidate(TBaseRegion const, TView *)+0xc8>
        1b20e4:	e2810004 	add	r0, r1, #4	; 0x4
        1b20e8:	e0811185 	add	r1, r1, r5, lsl #3
        1b20ec:	e5911004 	ldr	r1, [r1, #4]	; fField4
        1b20f0:	e5902000 	ldr	r2, [r0]
        1b20f4:	e1a00002 	mov	r0, r2
        1b20f8:	eb668e62 	bl	1b55a88 <$UnionRgn__FPP6RegionN21>
        1b20fc:	e5940034 	ldr	r0, [r4, #52]	; fField52
        1b2100:	e7808185 	str	r8, [r0, r5, lsl #3]	; fField3
        1b2104:	e5940034 	ldr	r0, [r4, #52]	; fField52
        1b2108:	e0800185 	add	r0, r0, r5, lsl #3
        1b210c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1b2110:	eb668634 	bl	1b539e8 <$SetEmptyRgn(Region **)>
        1b2114:	e2855001 	add	r5, r5, #1	; 0x1
        1b2118:	e3550003 	cmp	r5, #3	; 0x3
        1b211c:	baffffec 	blt	1b20d4 <TRootView::Invalidate(TBaseRegion const, TView *)+0x88>
        1b2120:	ea00007d 	b	1b231c <TRootView::Invalidate(TBaseRegion const, TView *)+0x2d0>
        1b2124:	0c101930 	ldceq	9, cr1, [r0], -#192
        1b2128:	003774ec 	eoreqs	r7, r7, ip, ror #9
        1b212c:	e3a07000 	mov	r7, #0	; 0x0
        1b2130:	e5940034 	ldr	r0, [r4, #52]	; fField52
        1b2134:	e7901187 	ldr	r1, [r0, r7, lsl #3]	; fField3
        1b2138:	e3310000 	teq	r1, #0	; 0x0
        1b213c:	05940034 	ldreq	r0, [r4, #52]	; fField52
        1b2140:	07806187 	streq	r6, [r0, r7, lsl #3]	; fField3
        1b2144:	0a000013 	beq	1b2198 <TRootView::Invalidate(TBaseRegion const, TView *)+0x14c>
        1b2148:	e1310004 	teq	r1, r4
        1b214c:	1a000004 	bne	1b2164 <TRootView::Invalidate(TBaseRegion const, TView *)+0x118>
        1b2150:	e5b40034 	ldr	r0, [r4, #52]!	; fField52
        1b2154:	e0800187 	add	r0, r0, r7, lsl #3
        1b2158:	e2800004 	add	r0, r0, #4	; 0x4
        1b215c:	e1a01005 	mov	r1, r5
        1b2160:	ea000010 	b	1b21a8 <TRootView::Invalidate(TBaseRegion const, TView *)+0x15c>
        1b2164:	e1a02006 	mov	r2, r6
        1b2168:	e1a00004 	mov	r0, r4
        1b216c:	eb6475a0 	bl	1acf7f4 <TRootView::$GetCommonParent(TView *, TView *)>
        1b2170:	e78d0107 	str	r0, [sp, r7, lsl #2]	; fField2
        1b2174:	e1a01000 	mov	r1, r0
        1b2178:	e5942034 	ldr	r2, [r4, #52]	; fField52
        1b217c:	e7922187 	ldr	r2, [r2, r7, lsl #3]	; fField3
        1b2180:	e1320000 	teq	r2, r0
        1b2184:	11310006 	teqne	r1, r6
        1b2188:	1a00000a 	bne	1b21b8 <TRootView::Invalidate(TBaseRegion const, TView *)+0x16c>
        1b218c:	e79d1107 	ldr	r1, [sp, r7, lsl #2]	; fField2
        1b2190:	e5940034 	ldr	r0, [r4, #52]	; fField52
        1b2194:	e7801187 	str	r1, [r0, r7, lsl #3]	; fField3
        1b2198:	e5b40034 	ldr	r0, [r4, #52]!	; fField52
        1b219c:	e0800187 	add	r0, r0, r7, lsl #3
        1b21a0:	e2800004 	add	r0, r0, #4	; 0x4
        1b21a4:	e1a01005 	mov	r1, r5
        1b21a8:	e5902000 	ldr	r2, [r0]
        1b21ac:	e1a00002 	mov	r0, r2
        1b21b0:	eb668e34 	bl	1b55a88 <$UnionRgn__FPP6RegionN21>
        1b21b4:	ea000058 	b	1b231c <TRootView::Invalidate(TBaseRegion const, TView *)+0x2d0>
        1b21b8:	e2877001 	add	r7, r7, #1	; 0x1
        1b21bc:	e3570003 	cmp	r7, #3	; 0x3
        1b21c0:	baffffda 	blt	1b2130 <TRootView::Invalidate(TBaseRegion const, TView *)+0xe4>
        1b21c4:	e3a06000 	mov	r6, #0	; 0x0
        1b21c8:	e79d0106 	ldr	r0, [sp, r6, lsl #2]	; fField2
        1b21cc:	e1300004 	teq	r0, r4
        1b21d0:	0a000036 	beq	1b22b0 <TRootView::Invalidate(TBaseRegion const, TView *)+0x264>
        1b21d4:	e79d1106 	ldr	r1, [sp, r6, lsl #2]	; fField2
        1b21d8:	e5940034 	ldr	r0, [r4, #52]	; fField52
        1b21dc:	e7801186 	str	r1, [r0, r6, lsl #3]	; fField3
        1b21e0:	e5940034 	ldr	r0, [r4, #52]	; fField52
        1b21e4:	e0800186 	add	r0, r0, r6, lsl #3
        1b21e8:	e1a01005 	mov	r1, r5
        1b21ec:	e5b02004 	ldr	r2, [r0, #4]!	; fField4
        1b21f0:	e1a00002 	mov	r0, r2
        1b21f4:	eb668e23 	bl	1b55a88 <$UnionRgn__FPP6RegionN21>
        1b21f8:	e2865001 	add	r5, r6, #1	; 0x1
        1b21fc:	ea000025 	b	1b2298 <TRootView::Invalidate(TBaseRegion const, TView *)+0x24c>
        1b2200:	e79d1106 	ldr	r1, [sp, r6, lsl #2]	; fField2
        1b2204:	e1300001 	teq	r0, r1
        1b2208:	1a000021 	bne	1b2294 <TRootView::Invalidate(TBaseRegion const, TView *)+0x248>
        1b220c:	e5941034 	ldr	r1, [r4, #52]	; fField52
        1b2210:	e0810186 	add	r0, r1, r6, lsl #3
        1b2214:	e0811185 	add	r1, r1, r5, lsl #3
        1b2218:	e5911004 	ldr	r1, [r1, #4]	; fField4
        1b221c:	e5b02004 	ldr	r2, [r0, #4]!	; fField4
        1b2220:	e1a00002 	mov	r0, r2
        1b2224:	eb668e17 	bl	1b55a88 <$UnionRgn__FPP6RegionN21>
        1b2228:	e1a00005 	mov	r0, r5
        1b222c:	e3550002 	cmp	r5, #2	; 0x2
        1b2230:	aa000010 	bge	1b2278 <TRootView::Invalidate(TBaseRegion const, TView *)+0x22c>
        1b2234:	e08d1100 	add	r1, sp, r0, lsl #2
        1b2238:	e5b12004 	ldr	r2, [r1, #4]!	; fField4
        1b223c:	e78d2100 	str	r2, [sp, r0, lsl #2]	; fField2
        1b2240:	e5941034 	ldr	r1, [r4, #52]	; fField52
        1b2244:	e0812180 	add	r2, r1, r0, lsl #3
        1b2248:	e5922008 	ldr	r2, [r2, #8]	; fField8
        1b224c:	e7812180 	str	r2, [r1, r0, lsl #3]	; fField3
        1b2250:	e5941034 	ldr	r1, [r4, #52]	; fField52
        1b2254:	e0812180 	add	r2, r1, r0, lsl #3
        1b2258:	e2821004 	add	r1, r2, #4	; 0x4
        1b225c:	e5b2300c 	ldr	r3, [r2, #12]!
        1b2260:	e591c000 	ldr	ip, [r1]
        1b2264:	e582c000 	str	ip, [r2]
        1b2268:	e2800001 	add	r0, r0, #1	; 0x1
        1b226c:	e3500002 	cmp	r0, #2	; 0x2
        1b2270:	e5813000 	str	r3, [r1]
        1b2274:	baffffee 	blt	1b2234 <TRootView::Invalidate(TBaseRegion const, TView *)+0x1e8>
        1b2278:	e58d8008 	str	r8, [sp, #8]	; fField8
        1b227c:	e5940034 	ldr	r0, [r4, #52]	; fField52
        1b2280:	e5a08010 	str	r8, [r0, #16]!
        1b2284:	e5940034 	ldr	r0, [r4, #52]	; fField52
        1b2288:	e5900014 	ldr	r0, [r0, #20]
        1b228c:	eb6685d5 	bl	1b539e8 <$SetEmptyRgn(Region **)>
        1b2290:	e2455001 	sub	r5, r5, #1	; 0x1
        1b2294:	e2855001 	add	r5, r5, #1	; 0x1
        1b2298:	e3550003 	cmp	r5, #3	; 0x3
        1b229c:	aa00001e 	bge	1b231c <TRootView::Invalidate(TBaseRegion const, TView *)+0x2d0>
        1b22a0:	e79d0105 	ldr	r0, [sp, r5, lsl #2]	; fField2
        1b22a4:	e3300000 	teq	r0, #0	; 0x0
        1b22a8:	1affffd4 	bne	1b2200 <TRootView::Invalidate(TBaseRegion const, TView *)+0x1b4>
        1b22ac:	ea00001a 	b	1b231c <TRootView::Invalidate(TBaseRegion const, TView *)+0x2d0>
        1b22b0:	e2866001 	add	r6, r6, #1	; 0x1
        1b22b4:	e3560003 	cmp	r6, #3	; 0x3
        1b22b8:	baffffc2 	blt	1b21c8 <TRootView::Invalidate(TBaseRegion const, TView *)+0x17c>
        1b22bc:	e5940034 	ldr	r0, [r4, #52]	; fField52
        1b22c0:	e5804000 	str	r4, [r0]
        1b22c4:	e1a01005 	mov	r1, r5
        1b22c8:	e5940034 	ldr	r0, [r4, #52]	; fField52
        1b22cc:	e5b02004 	ldr	r2, [r0, #4]!	; fField4
        1b22d0:	e1a00002 	mov	r0, r2
        1b22d4:	eb668deb 	bl	1b55a88 <$UnionRgn__FPP6RegionN21>
        1b22d8:	e3a05001 	mov	r5, #1	; 0x1
        1b22dc:	e5941034 	ldr	r1, [r4, #52]	; fField52
        1b22e0:	e2810004 	add	r0, r1, #4	; 0x4
        1b22e4:	e0811185 	add	r1, r1, r5, lsl #3
        1b22e8:	e5911004 	ldr	r1, [r1, #4]	; fField4
        1b22ec:	e5902000 	ldr	r2, [r0]
        1b22f0:	e1a00002 	mov	r0, r2
        1b22f4:	eb668de3 	bl	1b55a88 <$UnionRgn__FPP6RegionN21>
        1b22f8:	e5940034 	ldr	r0, [r4, #52]	; fField52
        1b22fc:	e7808185 	str	r8, [r0, r5, lsl #3]	; fField3
        1b2300:	e5940034 	ldr	r0, [r4, #52]	; fField52
        1b2304:	e0800185 	add	r0, r0, r5, lsl #3
        1b2308:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1b230c:	eb6685b5 	bl	1b539e8 <$SetEmptyRgn(Region **)>
        1b2310:	e2855001 	add	r5, r5, #1	; 0x1
        1b2314:	e3550003 	cmp	r5, #3	; 0x3
        1b2318:	baffffef 	blt	1b22dc <TRootView::Invalidate(TBaseRegion const, TView *)+0x290>
        1b231c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TRootView::Validate(TBaseRegion const)
 * Address: 001b2320
 */
TRootView::Validate(TBaseRegion const) {
    /*
        1b2320:	e1a0c00d 	mov	ip, sp
        1b2324:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1b2328:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b232c:	e1a04001 	mov	r4, r1
        1b2330:	e1a05000 	mov	r5, r0
        1b2334:	e3a06000 	mov	r6, #0	; 0x0
        1b2338:	e5950034 	ldr	r0, [r5, #52]	; fField52
        1b233c:	e0800186 	add	r0, r0, r6, lsl #3
        1b2340:	e1a01004 	mov	r1, r4
        1b2344:	e5b02004 	ldr	r2, [r0, #4]!	; fField4
        1b2348:	e1a00002 	mov	r0, r2
        1b234c:	eb666cde 	bl	1b4d6cc <$DiffRgn__FPP6RegionN21>
        1b2350:	e2866001 	add	r6, r6, #1	; 0x1
        1b2354:	e3560003 	cmp	r6, #3	; 0x3
        1b2358:	bafffff6 	blt	1b2338 <TRootView::Validate(TBaseRegion const)+0x18>
        1b235c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TRootView::PostDraw(TRect &)
 * Address: 001b2360
 */
TRootView::PostDraw(TRect &) {
    /*
        1b2360:	e59f0000 	ldr	r0, [pc, #0]	; 1b2368 <TRootView::PostDraw(TRect &)+0x8>
        1b2364:	ea642692 	b	1abbdb4 <TRecognitionManager::$Update(TRect &)>
        1b2368:	0c106e88 	ldceq	14, cr6, [r0], -#544
    */
}

/**
 * Symbol: TRootView::RealDraw(TRect &)
 * Address: 001b236c
 */
TRootView::RealDraw(TRect &) {
    /*
        1b236c:	e59f0014 	ldr	r0, [pc, #14]	; 1b2388 <TRootView::RealDraw(TRect &)+0x1c>
        1b2370:	e5900000 	ldr	r0, [r0]
        1b2374:	e3300000 	teq	r0, #0	; 0x0
        1b2378:	059f000c 	ldreq	r0, [pc, #c]	; 1b238c <TRootView::RealDraw(TRect &)+0x20>
        1b237c:	05900000 	ldreq	r0, [r0]
        1b2380:	0a63816f 	beq	1a92944 <TNotebook::$DrawSplashScreen(void)>
        1b2384:	e1a0f00e 	mov	pc, lr
        1b2388:	0c105510 	ldceq	5, cr5, [r0], -#64	; fField64
        1b238c:	0c1054ac 	ldceq	4, cr5, [r0], -#688
    */
}

/**
 * Symbol: TRootView::SmartScreenDirty(TRect const &)
 * Address: 001b2390
 */
TRootView::SmartScreenDirty(TRect const &) {
    /*
        1b2390:	e2800038 	add	r0, r0, #56	; 0x38
        1b2394:	ea63cbbd 	b	1aa5290 <TRect::$Union(TRect const &)>
    */
}

/**
 * Symbol: TRootView::NeedsUpdate(void)
 * Address: 001b2398
 */
TRootView::NeedsUpdate(void) {
    /*
        1b2398:	e1a0c00d 	mov	ip, sp
        1b239c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1b23a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b23a4:	e1a04000 	mov	r4, r0
        1b23a8:	e2800038 	add	r0, r0, #56	; 0x38
        1b23ac:	eb6670d9 	bl	1b4e718 <$EmptyRect(Rect *)>
        1b23b0:	e3a05001 	mov	r5, #1	; 0x1
        1b23b4:	e3300000 	teq	r0, #0	; 0x0
        1b23b8:	0a000018 	beq	1b2420 <TRootView::NeedsUpdate(void)+0x88>
        1b23bc:	e1a00004 	mov	r0, r4
        1b23c0:	e3a01000 	mov	r1, #0	; 0x0
        1b23c4:	eb646cb9 	bl	1acd6b0 <TRootView::$CaretValid(TPoint *)>
        1b23c8:	e3300000 	teq	r0, #0	; 0x0
        1b23cc:	0a000013 	beq	1b2420 <TRootView::NeedsUpdate(void)+0x88>
        1b23d0:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b23d4:	e28d3004 	add	r3, sp, #4	; 0x4
        1b23d8:	e1a0200d 	mov	r2, sp
        1b23dc:	e5941068 	ldr	r1, [r4, #104]	; fField104
        1b23e0:	e1a00004 	mov	r0, r4
        1b23e4:	eb64cfcf 	bl	1ae6328 <TRootView::$FindDefaultButtonAndCaretSlip(TView *, TView **, TView **)>
        1b23e8:	e5940078 	ldr	r0, [r4, #120]	; fField120
        1b23ec:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        1b23f0:	e1300001 	teq	r0, r1
        1b23f4:	05941074 	ldreq	r1, [r4, #116]	; fField116
        1b23f8:	059d0000 	ldreq	r0, [sp]
        1b23fc:	01310000 	teqeq	r1, r0
        1b2400:	11a00005 	movne	r0, r5
        1b2404:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        1b2408:	e28dd008 	add	sp, sp, #8	; 0x8
        1b240c:	e3a00000 	mov	r0, #0	; 0x0
        1b2410:	e5b41034 	ldr	r1, [r4, #52]!	; fField52
        1b2414:	e7912180 	ldr	r2, [r1, r0, lsl #3]	; fField3
        1b2418:	e3320000 	teq	r2, #0	; 0x0
        1b241c:	0a000001 	beq	1b2428 <TRootView::NeedsUpdate(void)+0x90>
        1b2420:	e1a00005 	mov	r0, r5
        1b2424:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1b2428:	e2800001 	add	r0, r0, #1	; 0x1
        1b242c:	e3500003 	cmp	r0, #3	; 0x3
        1b2430:	bafffff7 	blt	1b2414 <TRootView::NeedsUpdate(void)+0x7c>
        1b2434:	e3a00000 	mov	r0, #0	; 0x0
        1b2438:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TRootView::Update(TRect *)
 * Address: 001b243c
 */
TRootView::Update(TRect *) {
    /*
        1b243c:	e1a0c00d 	mov	ip, sp
        1b2440:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1b2444:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b2448:	e1a04000 	mov	r4, r0
        1b244c:	e24dd010 	sub	sp, sp, #16	; 0x10
        1b2450:	e3310000 	teq	r1, #0	; 0x0
        1b2454:	0a000008 	beq	1b247c <TRootView::Update(TRect *)+0x40>
        1b2458:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b245c:	e28d0004 	add	r0, sp, #4	; 0x4
        1b2460:	eb6357ea 	bl	1a88410 <TRectangularRegion::$__ct(TRect const &)>
        1b2464:	e28d0004 	add	r0, sp, #4	; 0x4
        1b2468:	e58d0000 	str	r0, [sp]
        1b246c:	e1a00004 	mov	r0, r4
        1b2470:	e3a02000 	mov	r2, #0	; 0x0
        1b2474:	e49d1004 	ldr	r1, [sp], #4	; fField4
        1b2478:	eb63a22d 	bl	1a9ad34 <TRootView::$Invalidate(TBaseRegion const, TView *)>
        1b247c:	e1a00004 	mov	r0, r4
        1b2480:	eb63aa5f 	bl	1a9ce04 <TRootView::$NeedsUpdate(void)>
        1b2484:	e3300000 	teq	r0, #0	; 0x0
        1b2488:	1a000000 	bne	1b2490 <TRootView::Update(TRect *)+0x54>
        1b248c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1b2490:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b2494:	e3a07000 	mov	r7, #0	; 0x0
        1b2498:	e1a0100d 	mov	r1, sp
        1b249c:	e1a00004 	mov	r0, r4
        1b24a0:	eb646c82 	bl	1acd6b0 <TRootView::$CaretValid(TPoint *)>
        1b24a4:	e3300000 	teq	r0, #0	; 0x0
        1b24a8:	03a07001 	moveq	r7, #1	; 0x1
        1b24ac:	e1a00004 	mov	r0, r4
        1b24b0:	eb64cf9d 	bl	1ae632c <TRootView::$UpdateDefaultButtonAndCaretSlip(void)>
        1b24b4:	e24dd014 	sub	sp, sp, #20	; 0x14
        1b24b8:	e1a0000d 	mov	r0, sp
        1b24bc:	eb6353c7 	bl	1a873e0 <TRegionVar::$__ct(void)>
        1b24c0:	e59f91bc 	ldr	r9, [pc, #1bc]	; 1b2684 <TRootView::Update(TRect *)+0x248>	; fField1
        1b24c4:	e5990010 	ldr	r0, [r9, #16]
        1b24c8:	e3300000 	teq	r0, #0	; 0x0
        1b24cc:	03a01000 	moveq	r1, #0	; 0x0
        1b24d0:	0b666850 	bleq	1b4c618 <$StartDrawing(PixelMap *, Rect *)>
        1b24d4:	e3370000 	teq	r7, #0	; 0x0
        1b24d8:	1a000016 	bne	1b2538 <TRootView::Update(TRect *)+0xfc>
        1b24dc:	e5940088 	ldr	r0, [r4, #136]	; fField136
        1b24e0:	e3300000 	teq	r0, #0	; 0x0
        1b24e4:	0a000018 	beq	1b254c <TRootView::Update(TRect *)+0x110>
        1b24e8:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b24ec:	e1a0100d 	mov	r1, sp
        1b24f0:	e1a00004 	mov	r0, r4
        1b24f4:	eb6474bd 	bl	1acf7f0 <TRootView::$GetCaretRect(TRect *)>
        1b24f8:	e3a05000 	mov	r5, #0	; 0x0
        1b24fc:	e5940034 	ldr	r0, [r4, #52]	; fField52
        1b2500:	e7901185 	ldr	r1, [r0, r5, lsl #3]	; fField3
        1b2504:	e3310000 	teq	r1, #0	; 0x0
        1b2508:	0a000006 	beq	1b2528 <TRootView::Update(TRect *)+0xec>
        1b250c:	e0800185 	add	r0, r0, r5, lsl #3
        1b2510:	e5b01004 	ldr	r1, [r0, #4]!	; fField4
        1b2514:	e1a0000d 	mov	r0, sp
        1b2518:	eb66851e 	bl	1b53998 <$RectInRgn(Rect *, Region **)>
        1b251c:	e3300000 	teq	r0, #0	; 0x0
        1b2520:	13a07001 	movne	r7, #1	; 0x1
        1b2524:	1a000002 	bne	1b2534 <TRootView::Update(TRect *)+0xf8>
        1b2528:	e2855001 	add	r5, r5, #1	; 0x1
        1b252c:	e3550003 	cmp	r5, #3	; 0x3
        1b2530:	bafffff1 	blt	1b24fc <TRootView::Update(TRect *)+0xc0>
        1b2534:	e28dd008 	add	sp, sp, #8	; 0x8
        1b2538:	e5940088 	ldr	r0, [r4, #136]	; fField136
        1b253c:	e3300000 	teq	r0, #0	; 0x0
        1b2540:	13370000 	teqne	r7, #0	; 0x0
        1b2544:	11a00004 	movne	r0, r4
        1b2548:	1b64850f 	blne	1ad398c <TRootView::$RestoreBitsUnderCaret(void)>
        1b254c:	e2840038 	add	r0, r4, #56	; 0x38
        1b2550:	e1a05000 	mov	r5, r0
        1b2554:	eb66706f 	bl	1b4e718 <$EmptyRect(Rect *)>
        1b2558:	e3a08000 	mov	r8, #0	; 0x0
        1b255c:	e3300000 	teq	r0, #0	; 0x0
        1b2560:	1a00000d 	bne	1b259c <TRootView::Update(TRect *)+0x160>
        1b2564:	e1a01005 	mov	r1, r5
        1b2568:	e3a00000 	mov	r0, #0	; 0x0
        1b256c:	eb666829 	bl	1b4c618 <$StartDrawing(PixelMap *, Rect *)>
        1b2570:	e1a01005 	mov	r1, r5
        1b2574:	e3a00000 	mov	r0, #0	; 0x0
        1b2578:	eb666828 	bl	1b4c620 <$StopDrawing(PixelMap *, Rect *)>
        1b257c:	e5c58007 	strb	r8, [r5, #7]	; fField7
        1b2580:	e5c58006 	strb	r8, [r5, #6]	; fField6
        1b2584:	e5c58005 	strb	r8, [r5, #5]	; fField5
        1b2588:	e5c58004 	strb	r8, [r5, #4]	; fField4
        1b258c:	e5c58003 	strb	r8, [r5, #3]	; fField3
        1b2590:	e5c58002 	strb	r8, [r5, #2]	; fField2
        1b2594:	e5c58001 	strb	r8, [r5, #1]	; fField1
        1b2598:	e5c58000 	strb	r8, [r5]
        1b259c:	e3a06000 	mov	r6, #0	; 0x0
        1b25a0:	e5940034 	ldr	r0, [r4, #52]	; fField52
        1b25a4:	e7900186 	ldr	r0, [r0, r6, lsl #3]	; fField3
        1b25a8:	e3300000 	teq	r0, #0	; 0x0
        1b25ac:	0a000020 	beq	1b2634 <TRootView::Update(TRect *)+0x1f8>
        1b25b0:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b25b4:	e59d5004 	ldr	r5, [sp, #4]	; fField4
        1b25b8:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b25bc:	e1a0000d 	mov	r0, sp
        1b25c0:	eb68f477 	bl	1bef7a4 <$GetPort(GrafPort **)>
        1b25c4:	e49d0004 	ldr	r0, [sp], #4	; fField4
        1b25c8:	e5900024 	ldr	r0, [r0, #36]
        1b25cc:	e58d0000 	str	r0, [sp]
        1b25d0:	e1a01000 	mov	r1, r0
        1b25d4:	e5940034 	ldr	r0, [r4, #52]	; fField52
        1b25d8:	e0800186 	add	r0, r0, r6, lsl #3
        1b25dc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1b25e0:	e1a02005 	mov	r2, r5
        1b25e4:	eb666c38 	bl	1b4d6cc <$DiffRgn__FPP6RegionN21>
        1b25e8:	e5940034 	ldr	r0, [r4, #52]	; fField52
        1b25ec:	e0800186 	add	r0, r0, r6, lsl #3
        1b25f0:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        1b25f4:	e5b02004 	ldr	r2, [r0, #4]!	; fField4
        1b25f8:	e58d2004 	str	r2, [sp, #4]	; fField4
        1b25fc:	e5801000 	str	r1, [r0]
        1b2600:	e5940034 	ldr	r0, [r4, #52]	; fField52
        1b2604:	e7905186 	ldr	r5, [r0, r6, lsl #3]	; fField3
        1b2608:	e0800186 	add	r0, r0, r6, lsl #3
        1b260c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1b2610:	eb667041 	bl	1b4e71c <$EmptyRgn(Region **)>
        1b2614:	e3300000 	teq	r0, #0	; 0x0
        1b2618:	15940034 	ldrne	r0, [r4, #52]	; fField52
        1b261c:	17808186 	strne	r8, [r0, r6, lsl #3]	; fField3
        1b2620:	e1a02005 	mov	r2, r5
        1b2624:	e1a00004 	mov	r0, r4
        1b2628:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        1b262c:	eb686802 	bl	1bcc63c <TView::$Update(TBaseRegion, TView *)>
        1b2630:	e28dd004 	add	sp, sp, #4	; 0x4
        1b2634:	e2866001 	add	r6, r6, #1	; 0x1
        1b2638:	e3560003 	cmp	r6, #3	; 0x3
        1b263c:	baffffd7 	blt	1b25a0 <TRootView::Update(TRect *)+0x164>
        1b2640:	e3370000 	teq	r7, #0	; 0x0
        1b2644:	0a000005 	beq	1b2660 <TRootView::Update(TRect *)+0x224>
        1b2648:	e1a00004 	mov	r0, r4
        1b264c:	eb646c14 	bl	1acd6a4 <TRootView::$CaretEnabled(void)>
        1b2650:	e3300000 	teq	r0, #0	; 0x0
        1b2654:	11a00004 	movne	r0, r4
        1b2658:	159d1014 	ldrne	r1, [sp, #20]
        1b265c:	1b647031 	blne	1ace728 <TRootView::$DrawCaret(TPoint)>
        1b2660:	e5b90010 	ldr	r0, [r9, #16]!
        1b2664:	e3300000 	teq	r0, #0	; 0x0
        1b2668:	03a01000 	moveq	r1, #0	; 0x0
        1b266c:	0b6667eb 	bleq	1b4c620 <$StopDrawing(PixelMap *, Rect *)>
        1b2670:	e1a0000d 	mov	r0, sp
        1b2674:	e3a01000 	mov	r1, #0	; 0x0
        1b2678:	eb635771 	bl	1a88444 <TRegionVar::$__dt(void)>
        1b267c:	e28dd018 	add	sp, sp, #24	; 0x18
        1b2680:	eaffff81 	b	1b248c <TRootView::Update(TRect *)+0x50>
        1b2684:	0c101930 	ldceq	9, cr1, [r0], -#192
    */
}

/**
 * Symbol: TRootView::IdleViews(void)
 * Address: 001b271c
 */
TRootView::IdleViews(void) {
    /*
        1b271c:	e1a0c00d 	mov	ip, sp
        1b2720:	e92ddff3 	stmdb	sp!, {r0, r1, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1b2724:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b2728:	e1a04001 	mov	r4, r1
        1b272c:	e5910020 	ldr	r0, [r1, #32]	; fField32
        1b2730:	e5905000 	ldr	r5, [r0]
        1b2734:	e5911044 	ldr	r1, [r1, #68]
        1b2738:	e1510005 	cmp	r1, r5
        1b273c:	cb64cef3 	blgt	1ae6310 <$MoveLow(CDynamicArray *)>
        1b2740:	e5845044 	str	r5, [r4, #68]
        1b2744:	e5940040 	ldr	r0, [r4, #64]	; fField64
        1b2748:	e5905000 	ldr	r5, [r0]
        1b274c:	e5941048 	ldr	r1, [r4, #72]
        1b2750:	e1510005 	cmp	r1, r5
        1b2754:	cb64ceed 	blgt	1ae6310 <$MoveLow(CDynamicArray *)>
        1b2758:	e5845048 	str	r5, [r4, #72]
        1b275c:	e24dd028 	sub	sp, sp, #40	; 0x28
        1b2760:	e1a0000d 	mov	r0, sp
        1b2764:	eb68849b 	bl	1bd39d8 <$GetGlobalTime>
        1b2768:	e28d1020 	add	r1, sp, #32	; 0x20
        1b276c:	e89d5000 	ldmia	sp, {ip, lr}
        1b2770:	e8815000 	stmia	r1, {ip, lr}
        1b2774:	e3e00102 	mvn	r0, #-2147483648	; 0x80000000
        1b2778:	e3a06000 	mov	r6, #0	; 0x0
        1b277c:	e58d0018 	str	r0, [sp, #24]
        1b2780:	e58d601c 	str	r6, [sp, #28]	; fField28
        1b2784:	e28d0010 	add	r0, sp, #16	; 0x10
        1b2788:	e3a07066 	mov	r7, #102	; 0x66
        1b278c:	e2877c0e 	add	r7, r7, #3584	; 0xe00
        1b2790:	e1a02007 	mov	r2, r7
        1b2794:	e3a0100a 	mov	r1, #10	; 0xa
        1b2798:	eb686bca 	bl	1bcd6c8 <TTime::$__ct(unsigned long, TimeUnits)>
        1b279c:	e594004c 	ldr	r0, [r4, #76]	; fField76
        1b27a0:	e58d0008 	str	r0, [sp, #8]	; fField8
        1b27a4:	e58d600c 	str	r6, [sp, #12]
        1b27a8:	e28d0008 	add	r0, sp, #8	; 0x8
        1b27ac:	e584004c 	str	r0, [r4, #76]	; fField76
        1b27b0:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        1b27b4:	e1a0000d 	mov	r0, sp
        1b27b8:	e5941040 	ldr	r1, [r4, #64]	; fField64
        1b27bc:	eb68c28c 	bl	1be31f4 <CArrayIterator::$__ct(CDynamicArray *)>
        1b27c0:	e5940040 	ldr	r0, [r4, #64]	; fField64
        1b27c4:	e5909000 	ldr	r9, [r0]
        1b27c8:	e1a0000d 	mov	r0, sp
        1b27cc:	eb68d308 	bl	1be73f4 <CArrayIterator::$FirstIndex(void)>
        1b27d0:	e1a05000 	mov	r5, r0
        1b27d4:	e24da06c 	sub	sl, sp, #108	; 0x6c
        1b27d8:	ea00007e 	b	1b29d8 <TRootView::IdleViews(void)+0x2bc>
        1b27dc:	e1a01005 	mov	r1, r5
        1b27e0:	e5940040 	ldr	r0, [r4, #64]	; fField64
        1b27e4:	eb68ebaa 	bl	1bed694 <CDynamicArray::$SafeElementPtrAt(long)>
        1b27e8:	e1a05000 	mov	r5, r0
        1b27ec:	e5901000 	ldr	r1, [r0]
        1b27f0:	e1a00004 	mov	r0, r4
        1b27f4:	eb64780a 	bl	1ad0824 <TRootView::$GetIdlingView(TView *)>
        1b27f8:	e3300000 	teq	r0, #0	; 0x0
        1b27fc:	1a000072 	bne	1b29cc <TRootView::IdleViews(void)+0x2b0>
        1b2800:	e2850008 	add	r0, r5, #8	; 0x8
        1b2804:	e24dd010 	sub	sp, sp, #16	; 0x10
        1b2808:	e8905000 	ldmia	r0, {ip, lr}
        1b280c:	e88d5000 	stmia	sp, {ip, lr}
        1b2810:	e1a0100d 	mov	r1, sp
        1b2814:	e28d003c 	add	r0, sp, #60	; 0x3c
        1b2818:	eb68ba1f 	bl	1be109c <$CompSub>
        1b281c:	e28d0008 	add	r0, sp, #8	; 0x8
        1b2820:	e8bd5000 	ldmia	sp!, {ip, lr}
        1b2824:	e8805000 	stmia	r0, {ip, lr}
        1b2828:	e1a0100d 	mov	r1, sp
        1b282c:	e28d0044 	add	r0, sp, #68	; 0x44
        1b2830:	eb68ba14 	bl	1be1088 <$CompCompare>
        1b2834:	e3500000 	cmp	r0, #0	; 0x0
        1b2838:	ba00005a 	blt	1b29a8 <TRootView::IdleViews(void)+0x28c>
        1b283c:	e3a06000 	mov	r6, #0	; 0x0
        1b2840:	e5950000 	ldr	r0, [r5]
        1b2844:	e58d0030 	str	r0, [sp, #48]	; fField48
        1b2848:	e3a00000 	mov	r0, #0	; 0x0
        1b284c:	e52d006c 	str	r0, [sp, -#108]!
        1b2850:	e1a0000a 	mov	r0, sl
        1b2854:	eb680046 	bl	1bb2974 <$setjmp>
        1b2858:	e3300000 	teq	r0, #0	; 0x0
        1b285c:	1a000008 	bne	1b2884 <TRootView::IdleViews(void)+0x168>
        1b2860:	e1a0000d 	mov	r0, sp
        1b2864:	eb68b604 	bl	1be007c <$AddExceptionHandler>
        1b2868:	e5951004 	ldr	r1, [r5, #4]	; fField4
        1b286c:	e5952000 	ldr	r2, [r5]
        1b2870:	e1a00002 	mov	r0, r2
        1b2874:	e5922000 	ldr	r2, [r2]
        1b2878:	e1a0e00f 	mov	lr, pc
        1b287c:	e282f080 	add	pc, r2, #128	; 0x80
        1b2880:	e1a06000 	mov	r6, r0
        1b2884:	e1a0000d 	mov	r0, sp
        1b2888:	eb68ba0a 	bl	1be10b8 <$ExitHandler>
        1b288c:	e28dd06c 	add	sp, sp, #108	; 0x6c
        1b2890:	e28d0008 	add	r0, sp, #8	; 0x8
        1b2894:	eb68d2c8 	bl	1be73bc <CArrayIterator::$CurrentIndex(void)>
        1b2898:	e1a08000 	mov	r8, r0
        1b289c:	e1a01008 	mov	r1, r8
        1b28a0:	e5940040 	ldr	r0, [r4, #64]	; fField64
        1b28a4:	eb68eb7a 	bl	1bed694 <CDynamicArray::$SafeElementPtrAt(long)>
        1b28a8:	e1a05000 	mov	r5, r0
        1b28ac:	e1a00004 	mov	r0, r4
        1b28b0:	e59d1030 	ldr	r1, [sp, #48]	; fField48
        1b28b4:	eb6477da 	bl	1ad0824 <TRootView::$GetIdlingView(TView *)>
        1b28b8:	e1b00000 	movs	r0, r0
        1b28bc:	13a00001 	movne	r0, #1	; 0x1
        1b28c0:	e21070ff 	ands	r7, r0, #255	; 0xff
        1b28c4:	0a000035 	beq	1b29a0 <TRootView::IdleViews(void)+0x284>
        1b28c8:	e3360000 	teq	r6, #0	; 0x0
        1b28cc:	0a00002e 	beq	1b298c <TRootView::IdleViews(void)+0x270>
        1b28d0:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b28d4:	e1a01006 	mov	r1, r6
        1b28d8:	e1a0000d 	mov	r0, sp
        1b28dc:	e3a02066 	mov	r2, #102	; 0x66
        1b28e0:	e2822c0e 	add	r2, r2, #3584	; 0xe00
        1b28e4:	eb686b77 	bl	1bcd6c8 <TTime::$__ct(unsigned long, TimeUnits)>
        1b28e8:	e2850008 	add	r0, r5, #8	; 0x8
        1b28ec:	e1a06000 	mov	r6, r0
        1b28f0:	e1a08000 	mov	r8, r0
        1b28f4:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b28f8:	e28d2008 	add	r2, sp, #8	; 0x8
        1b28fc:	e8925000 	ldmia	r2, {ip, lr}
        1b2900:	e88d5000 	stmia	sp, {ip, lr}
        1b2904:	e1a0100d 	mov	r1, sp
        1b2908:	eb68b9dd 	bl	1be1084 <$CompAdd>
        1b290c:	e1b00008 	movs	r0, r8
        1b2910:	1a000003 	bne	1b2924 <TRootView::IdleViews(void)+0x208>
        1b2914:	e3a00008 	mov	r0, #8	; 0x8
        1b2918:	eb686f86 	bl	1bce738 <$__nw(unsigned int)>
        1b291c:	e3300000 	teq	r0, #0	; 0x0
        1b2920:	0a000001 	beq	1b292c <TRootView::IdleViews(void)+0x210>
        1b2924:	e89d1008 	ldmia	sp, {r3, ip}
        1b2928:	e8801008 	stmia	r0, {r3, ip}
        1b292c:	e28dd008 	add	sp, sp, #8	; 0x8
        1b2930:	e1a00006 	mov	r0, r6
        1b2934:	e28d104c 	add	r1, sp, #76	; 0x4c
        1b2938:	eb68b9d2 	bl	1be1088 <$CompCompare>
        1b293c:	e3500000 	cmp	r0, #0	; 0x0
        1b2940:	aa00000f 	bge	1b2984 <TRootView::IdleViews(void)+0x268>
        1b2944:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b2948:	e28d1008 	add	r1, sp, #8	; 0x8
        1b294c:	e8915000 	ldmia	r1, {ip, lr}
        1b2950:	e88d5000 	stmia	sp, {ip, lr}
        1b2954:	e1a0100d 	mov	r1, sp
        1b2958:	e28d0054 	add	r0, sp, #84	; 0x54
        1b295c:	eb68b9c8 	bl	1be1084 <$CompAdd>
        1b2960:	e1b00006 	movs	r0, r6
        1b2964:	1a000003 	bne	1b2978 <TRootView::IdleViews(void)+0x25c>
        1b2968:	e3a00008 	mov	r0, #8	; 0x8
        1b296c:	eb686f71 	bl	1bce738 <$__nw(unsigned int)>
        1b2970:	e3300000 	teq	r0, #0	; 0x0
        1b2974:	0a000001 	beq	1b2980 <TRootView::IdleViews(void)+0x264>
        1b2978:	e89d1008 	ldmia	sp, {r3, ip}
        1b297c:	e8801008 	stmia	r0, {r3, ip}
        1b2980:	e28dd008 	add	sp, sp, #8	; 0x8
        1b2984:	e28dd008 	add	sp, sp, #8	; 0x8
        1b2988:	ea000004 	b	1b29a0 <TRootView::IdleViews(void)+0x284>
        1b298c:	e1a01008 	mov	r1, r8
        1b2990:	e3a02001 	mov	r2, #1	; 0x1
        1b2994:	e5940040 	ldr	r0, [r4, #64]	; fField64
        1b2998:	eb68e725 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
        1b299c:	e3a07000 	mov	r7, #0	; 0x0
        1b29a0:	e3370000 	teq	r7, #0	; 0x0
        1b29a4:	0a000007 	beq	1b29c8 <TRootView::IdleViews(void)+0x2ac>
        1b29a8:	e2850008 	add	r0, r5, #8	; 0x8
        1b29ac:	e1a05000 	mov	r5, r0
        1b29b0:	e28d103c 	add	r1, sp, #60	; 0x3c
        1b29b4:	eb68b9b3 	bl	1be1088 <$CompCompare>
        1b29b8:	e3500000 	cmp	r0, #0	; 0x0
        1b29bc:	b28d003c 	addlt	r0, sp, #60	; 0x3c
        1b29c0:	b8955000 	ldmltia	r5, {ip, lr}
        1b29c4:	b8805000 	stmltia	r0, {ip, lr}
        1b29c8:	e28dd008 	add	sp, sp, #8	; 0x8
        1b29cc:	e1a0000d 	mov	r0, sp
        1b29d0:	eb68e2f1 	bl	1beb59c <CArrayIterator::$NextIndex(void)>
        1b29d4:	e1a05000 	mov	r5, r0
        1b29d8:	e1a0000d 	mov	r0, sp
        1b29dc:	eb68dee5 	bl	1bea578 <CArrayIterator::$More(void)>
        1b29e0:	e3300000 	teq	r0, #0	; 0x0
        1b29e4:	11a00009 	movne	r0, r9
        1b29e8:	12499001 	subne	r9, r9, #1	; 0x1
        1b29ec:	13300000 	teqne	r0, #0	; 0x0
        1b29f0:	1affff79 	bne	1b27dc <TRootView::IdleViews(void)+0xc0>
        1b29f4:	e1a00004 	mov	r0, r4
        1b29f8:	e59d1028 	ldr	r1, [sp, #40]	; fField40
        1b29fc:	eb64880d 	bl	1ad4a38 <TRootView::$UnlinkIdleView(TView *)>
        1b2a00:	e1a00004 	mov	r0, r4
        1b2a04:	e3a01000 	mov	r1, #0	; 0x0
        1b2a08:	eb646b28 	bl	1acd6b0 <TRootView::$CaretValid(TPoint *)>
        1b2a0c:	e3300000 	teq	r0, #0	; 0x0
        1b2a10:	028d0034 	addeq	r0, sp, #52	; 0x34
        1b2a14:	028d103c 	addeq	r1, sp, #60	; 0x3c
        1b2a18:	08915000 	ldmeqia	r1, {ip, lr}
        1b2a1c:	08805000 	stmeqia	r0, {ip, lr}
        1b2a20:	e24dd010 	sub	sp, sp, #16	; 0x10
        1b2a24:	e3e00102 	mvn	r0, #-2147483648	; 0x80000000
        1b2a28:	e3a06000 	mov	r6, #0	; 0x0
        1b2a2c:	e88d0041 	stmia	sp, {r0, r6}
        1b2a30:	e1a0100d 	mov	r1, sp
        1b2a34:	e28d0044 	add	r0, sp, #68	; 0x44
        1b2a38:	eb68b992 	bl	1be1088 <$CompCompare>
        1b2a3c:	e3300000 	teq	r0, #0	; 0x0
        1b2a40:	1a000005 	bne	1b2a5c <TRootView::IdleViews(void)+0x340>
        1b2a44:	e58d600c 	str	r6, [sp, #12]
        1b2a48:	e58d6008 	str	r6, [sp, #8]	; fField8
        1b2a4c:	e28d1044 	add	r1, sp, #68	; 0x44
        1b2a50:	e28d0008 	add	r0, sp, #8	; 0x8
        1b2a54:	e8905000 	ldmia	r0, {ip, lr}
        1b2a58:	e8815000 	stmia	r1, {ip, lr}
        1b2a5c:	e51b0030 	ldr	r0, [fp, -#48]	; fField48
        1b2a60:	e3300000 	teq	r0, #0	; 0x0
        1b2a64:	1a000003 	bne	1b2a78 <TRootView::IdleViews(void)+0x35c>
        1b2a68:	e3a00008 	mov	r0, #8	; 0x8
        1b2a6c:	eb686f31 	bl	1bce738 <$__nw(unsigned int)>
        1b2a70:	e3300000 	teq	r0, #0	; 0x0
        1b2a74:	0a000002 	beq	1b2a84 <TRootView::IdleViews(void)+0x368>
        1b2a78:	e28d1044 	add	r1, sp, #68	; 0x44
        1b2a7c:	e8911008 	ldmia	r1, {r3, ip}
        1b2a80:	e8801008 	stmia	r0, {r3, ip}
        1b2a84:	e28d0010 	add	r0, sp, #16	; 0x10
        1b2a88:	e3a01000 	mov	r1, #0	; 0x0
        1b2a8c:	eb68c5f5 	bl	1be4268 <CArrayIterator::$__dt(void)>
        1b2a90:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TRootView::AddIdler(TView *, unsigned long, long)
 * Address: 001b2ab4
 */
TRootView::AddIdler(TView *, unsigned long, long) {
    /*
        1b2ab4:	e3320000 	teq	r2, #0	; 0x0
        1b2ab8:	1a000001 	bne	1b2ac4 <TRootView::AddIdler(TView *, unsigned long, long)+0x10>
        1b2abc:	e1a02003 	mov	r2, r3
        1b2ac0:	ea63b555 	b	1aa001c <TRootView::$RemoveIdler(TView *, long)>
        1b2ac4:	e1a0c00d 	mov	ip, sp
        1b2ac8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1b2acc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b2ad0:	e1a05000 	mov	r5, r0
        1b2ad4:	e1a04001 	mov	r4, r1
        1b2ad8:	e1a07002 	mov	r7, r2
        1b2adc:	e1a06003 	mov	r6, r3
        1b2ae0:	e24dd020 	sub	sp, sp, #32	; 0x20
        1b2ae4:	e58d1010 	str	r1, [sp, #16]
        1b2ae8:	e58d3014 	str	r3, [sp, #20]
        1b2aec:	e28d8018 	add	r8, sp, #24	; 0x18
        1b2af0:	e1a09008 	mov	r9, r8
        1b2af4:	e1a0000d 	mov	r0, sp
        1b2af8:	eb6883b6 	bl	1bd39d8 <$GetGlobalTime>
        1b2afc:	e1a01007 	mov	r1, r7
        1b2b00:	e28d0008 	add	r0, sp, #8	; 0x8
        1b2b04:	e3a02066 	mov	r2, #102	; 0x66
        1b2b08:	e2822c0e 	add	r2, r2, #3584	; 0xe00
        1b2b0c:	eb686aed 	bl	1bcd6c8 <TTime::$__ct(unsigned long, TimeUnits)>
        1b2b10:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b2b14:	e28d0010 	add	r0, sp, #16	; 0x10
        1b2b18:	e8905000 	ldmia	r0, {ip, lr}
        1b2b1c:	e88d5000 	stmia	sp, {ip, lr}
        1b2b20:	e1a0100d 	mov	r1, sp
        1b2b24:	e28d0008 	add	r0, sp, #8	; 0x8
        1b2b28:	eb68b955 	bl	1be1084 <$CompAdd>
        1b2b2c:	e8bd5000 	ldmia	sp!, {ip, lr}
        1b2b30:	e8895000 	stmia	r9, {ip, lr}
        1b2b34:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        1b2b38:	e3a09000 	mov	r9, #0	; 0x0
        1b2b3c:	e1a0000d 	mov	r0, sp
        1b2b40:	e5951040 	ldr	r1, [r5, #64]	; fField64
        1b2b44:	eb68c1aa 	bl	1be31f4 <CArrayIterator::$__ct(CDynamicArray *)>
        1b2b48:	e1a0000d 	mov	r0, sp
        1b2b4c:	eb68d228 	bl	1be73f4 <CArrayIterator::$FirstIndex(void)>
        1b2b50:	e1a07000 	mov	r7, r0
        1b2b54:	e1a0000d 	mov	r0, sp
        1b2b58:	eb68de86 	bl	1bea578 <CArrayIterator::$More(void)>
        1b2b5c:	e3300000 	teq	r0, #0	; 0x0
        1b2b60:	0a000013 	beq	1b2bb4 <TRootView::AddIdler(TView *, unsigned long, long)+0x100>
        1b2b64:	e1a01007 	mov	r1, r7
        1b2b68:	e5950040 	ldr	r0, [r5, #64]	; fField64
        1b2b6c:	eb68eac8 	bl	1bed694 <CDynamicArray::$SafeElementPtrAt(long)>
        1b2b70:	e5901000 	ldr	r1, [r0]
        1b2b74:	e1310004 	teq	r1, r4
        1b2b78:	05901004 	ldreq	r1, [r0, #4]	; fField4
        1b2b7c:	01310006 	teqeq	r1, r6
        1b2b80:	02800008 	addeq	r0, r0, #8	; 0x8
        1b2b84:	08985000 	ldmeqia	r8, {ip, lr}
        1b2b88:	08805000 	stmeqia	r0, {ip, lr}
        1b2b8c:	0a00000d 	beq	1b2bc8 <TRootView::AddIdler(TView *, unsigned long, long)+0x114>
        1b2b90:	e1a0000d 	mov	r0, sp
        1b2b94:	eb68e280 	bl	1beb59c <CArrayIterator::$NextIndex(void)>
        1b2b98:	e1a07000 	mov	r7, r0
        1b2b9c:	e1a0000d 	mov	r0, sp
        1b2ba0:	eb68de74 	bl	1bea578 <CArrayIterator::$More(void)>
        1b2ba4:	e3300000 	teq	r0, #0	; 0x0
        1b2ba8:	1affffed 	bne	1b2b64 <TRootView::AddIdler(TView *, unsigned long, long)+0xb0>
        1b2bac:	e3390000 	teq	r9, #0	; 0x0
        1b2bb0:	1a000004 	bne	1b2bc8 <TRootView::AddIdler(TView *, unsigned long, long)+0x114>
        1b2bb4:	e5b50040 	ldr	r0, [r5, #64]!	; fField64
        1b2bb8:	e28d202c 	add	r2, sp, #44	; 0x2c
        1b2bbc:	e3a03001 	mov	r3, #1	; 0x1
        1b2bc0:	e5901000 	ldr	r1, [r0]
        1b2bc4:	eb68da4b 	bl	1be94f8 <CDynamicArray::$InsertElementsBefore(long, void *, long)>
        1b2bc8:	e1a00004 	mov	r0, r4
        1b2bcc:	e3a01202 	mov	r1, #536870912	; 0x20000000
        1b2bd0:	eb686289 	bl	1bcb5fc <TView::$SetFlags(unsigned long)>
        1b2bd4:	e1a01008 	mov	r1, r8
        1b2bd8:	e59f0014 	ldr	r0, [pc, #14]	; 1b2bf4 <TRootView::AddIdler(TView *, unsigned long, long)+0x140>
        1b2bdc:	e5900000 	ldr	r0, [r0]
        1b2be0:	eb63c9b6 	bl	1aa52c0 <TApplication::$UpdateNextIdleTime(TTime const &)>
        1b2be4:	e1a0000d 	mov	r0, sp
        1b2be8:	e3a01000 	mov	r1, #0	; 0x0
        1b2bec:	eb68c59d 	bl	1be4268 <CArrayIterator::$__dt(void)>
        1b2bf0:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1b2bf4:	0c1054ac 	ldceq	4, cr5, [r0], -#688
    */
}

/**
 * Symbol: TRootView::GetIdlingView(TView *)
 * Address: 001b2bf8
 */
TRootView::GetIdlingView(TView *) {
    /*
        1b2bf8:	e5b0204c 	ldr	r2, [r0, #76]!	; fField76
        1b2bfc:	e3320000 	teq	r2, #0	; 0x0
        1b2c00:	0a000006 	beq	1b2c20 <TRootView::GetIdlingView(TView *)+0x28>
        1b2c04:	e5923004 	ldr	r3, [r2, #4]	; fField4
        1b2c08:	e1330001 	teq	r3, r1
        1b2c0c:	01a0f00e 	moveq	pc, lr
        1b2c10:	e1a00002 	mov	r0, r2
        1b2c14:	e5922000 	ldr	r2, [r2]
        1b2c18:	e3320000 	teq	r2, #0	; 0x0
        1b2c1c:	1afffff8 	bne	1b2c04 <TRootView::GetIdlingView(TView *)+0xc>
        1b2c20:	e3a00000 	mov	r0, #0	; 0x0
        1b2c24:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRootView::UnlinkIdleView(TView *)
 * Address: 001b2c28
 */
TRootView::UnlinkIdleView(TView *) {
    /*
        1b2c28:	e1a0c00d 	mov	ip, sp
        1b2c2c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1b2c30:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b2c34:	eb6476fa 	bl	1ad0824 <TRootView::$GetIdlingView(TView *)>
        1b2c38:	e3300000 	teq	r0, #0	; 0x0
        1b2c3c:	15901000 	ldrne	r1, [r0]
        1b2c40:	15911000 	ldrne	r1, [r1]
        1b2c44:	15801000 	strne	r1, [r0]
        1b2c48:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TRootView::RemoveIdler(TView *, long)
 * Address: 001b2c4c
 */
TRootView::RemoveIdler(TView *, long) {
    /*
        1b2c4c:	e1a0c00d 	mov	ip, sp
        1b2c50:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1b2c54:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b2c58:	e1a04000 	mov	r4, r0
        1b2c5c:	e1a05001 	mov	r5, r1
        1b2c60:	e1a06002 	mov	r6, r2
        1b2c64:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        1b2c68:	e3a08000 	mov	r8, #0	; 0x0
        1b2c6c:	e5901040 	ldr	r1, [r0, #64]	; fField64
        1b2c70:	e1a0000d 	mov	r0, sp
        1b2c74:	eb68c15e 	bl	1be31f4 <CArrayIterator::$__ct(CDynamicArray *)>
        1b2c78:	e1a0000d 	mov	r0, sp
        1b2c7c:	eb68d1dc 	bl	1be73f4 <CArrayIterator::$FirstIndex(void)>
        1b2c80:	e1a07000 	mov	r7, r0
        1b2c84:	e1a0000d 	mov	r0, sp
        1b2c88:	eb68de3a 	bl	1bea578 <CArrayIterator::$More(void)>
        1b2c8c:	e3300000 	teq	r0, #0	; 0x0
        1b2c90:	0a00002d 	beq	1b2d4c <TRootView::RemoveIdler(TView *, long)+0x100>
        1b2c94:	e1a01007 	mov	r1, r7
        1b2c98:	e5940040 	ldr	r0, [r4, #64]	; fField64
        1b2c9c:	eb68ea7c 	bl	1bed694 <CDynamicArray::$SafeElementPtrAt(long)>
        1b2ca0:	e5901000 	ldr	r1, [r0]
        1b2ca4:	e1310005 	teq	r1, r5
        1b2ca8:	05901004 	ldreq	r1, [r0, #4]	; fField4
        1b2cac:	01310006 	teqeq	r1, r6
        1b2cb0:	1a00001e 	bne	1b2d30 <TRootView::RemoveIdler(TView *, long)+0xe4>
        1b2cb4:	e24dd018 	sub	sp, sp, #24	; 0x18
        1b2cb8:	e2806008 	add	r6, r0, #8	; 0x8
        1b2cbc:	e28d0008 	add	r0, sp, #8	; 0x8
        1b2cc0:	eb688344 	bl	1bd39d8 <$GetGlobalTime>
        1b2cc4:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b2cc8:	e8965000 	ldmia	r6, {ip, lr}
        1b2ccc:	e88d5000 	stmia	sp, {ip, lr}
        1b2cd0:	e1a0100d 	mov	r1, sp
        1b2cd4:	e28d0010 	add	r0, sp, #16	; 0x10
        1b2cd8:	eb68b8ef 	bl	1be109c <$CompSub>
        1b2cdc:	e28d0008 	add	r0, sp, #8	; 0x8
        1b2ce0:	e8bd5000 	ldmia	sp!, {ip, lr}
        1b2ce4:	e8805000 	stmia	r0, {ip, lr}
        1b2ce8:	e28d1010 	add	r1, sp, #16	; 0x10
        1b2cec:	e89d5000 	ldmia	sp, {ip, lr}
        1b2cf0:	e8815000 	stmia	r1, {ip, lr}
        1b2cf4:	e59f1030 	ldr	r1, [pc, #30]	; 1b2d2c <TRootView::RemoveIdler(TView *, long)+0xe0>
        1b2cf8:	e28d0010 	add	r0, sp, #16	; 0x10
        1b2cfc:	eb68b8e1 	bl	1be1088 <$CompCompare>
        1b2d00:	e3500000 	cmp	r0, #0	; 0x0
        1b2d04:	c59d8014 	ldrgt	r8, [sp, #20]
        1b2d08:	e1a01007 	mov	r1, r7
        1b2d0c:	e3a02001 	mov	r2, #1	; 0x1
        1b2d10:	e5940040 	ldr	r0, [r4, #64]	; fField64
        1b2d14:	eb68e646 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
        1b2d18:	e1a01005 	mov	r1, r5
        1b2d1c:	e1a00004 	mov	r0, r4
        1b2d20:	eb648744 	bl	1ad4a38 <TRootView::$UnlinkIdleView(TView *)>
        1b2d24:	e28dd018 	add	sp, sp, #24	; 0x18
        1b2d28:	ea000007 	b	1b2d4c <TRootView::RemoveIdler(TView *, long)+0x100>
        1b2d2c:	0c101690 	ldceq	6, cr1, [r0], -#576
        1b2d30:	e1a0000d 	mov	r0, sp
        1b2d34:	eb68e218 	bl	1beb59c <CArrayIterator::$NextIndex(void)>
        1b2d38:	e1a07000 	mov	r7, r0
        1b2d3c:	e1a0000d 	mov	r0, sp
        1b2d40:	eb68de0c 	bl	1bea578 <CArrayIterator::$More(void)>
        1b2d44:	e3300000 	teq	r0, #0	; 0x0
        1b2d48:	1affffd1 	bne	1b2c94 <TRootView::RemoveIdler(TView *, long)+0x48>
        1b2d4c:	e1a0000d 	mov	r0, sp
        1b2d50:	e3a01000 	mov	r1, #0	; 0x0
        1b2d54:	eb68c543 	bl	1be4268 <CArrayIterator::$__dt(void)>
        1b2d58:	e1a00008 	mov	r0, r8
        1b2d5c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TRootView::RemoveAllIdlers(TView *)
 * Address: 001b2d60
 */
TRootView::RemoveAllIdlers(TView *) {
    /*
        1b2d60:	e1a0c00d 	mov	ip, sp
        1b2d64:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1b2d68:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b2d6c:	e1a04000 	mov	r4, r0
        1b2d70:	e1a05001 	mov	r5, r1
        1b2d74:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        1b2d78:	e5901040 	ldr	r1, [r0, #64]	; fField64
        1b2d7c:	e1a0000d 	mov	r0, sp
        1b2d80:	eb68c11b 	bl	1be31f4 <CArrayIterator::$__ct(CDynamicArray *)>
        1b2d84:	e1a0000d 	mov	r0, sp
        1b2d88:	eb68d199 	bl	1be73f4 <CArrayIterator::$FirstIndex(void)>
        1b2d8c:	e1a06000 	mov	r6, r0
        1b2d90:	e1a0000d 	mov	r0, sp
        1b2d94:	eb68ddf7 	bl	1bea578 <CArrayIterator::$More(void)>
        1b2d98:	e3300000 	teq	r0, #0	; 0x0
        1b2d9c:	0a000013 	beq	1b2df0 <TRootView::RemoveAllIdlers(TView *)+0x90>
        1b2da0:	e1a01006 	mov	r1, r6
        1b2da4:	e5940040 	ldr	r0, [r4, #64]	; fField64
        1b2da8:	eb68ea39 	bl	1bed694 <CDynamicArray::$SafeElementPtrAt(long)>
        1b2dac:	e5900000 	ldr	r0, [r0]
        1b2db0:	e1300005 	teq	r0, r5
        1b2db4:	1a000006 	bne	1b2dd4 <TRootView::RemoveAllIdlers(TView *)+0x74>
        1b2db8:	e1a01006 	mov	r1, r6
        1b2dbc:	e3a02001 	mov	r2, #1	; 0x1
        1b2dc0:	e5940040 	ldr	r0, [r4, #64]	; fField64
        1b2dc4:	eb68e61a 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
        1b2dc8:	e1a01005 	mov	r1, r5
        1b2dcc:	e1a00004 	mov	r0, r4
        1b2dd0:	eb648718 	bl	1ad4a38 <TRootView::$UnlinkIdleView(TView *)>
        1b2dd4:	e1a0000d 	mov	r0, sp
        1b2dd8:	eb68e1ef 	bl	1beb59c <CArrayIterator::$NextIndex(void)>
        1b2ddc:	e1a06000 	mov	r6, r0
        1b2de0:	e1a0000d 	mov	r0, sp
        1b2de4:	eb68dde3 	bl	1bea578 <CArrayIterator::$More(void)>
        1b2de8:	e3300000 	teq	r0, #0	; 0x0
        1b2dec:	1affffeb 	bne	1b2da0 <TRootView::RemoveAllIdlers(TView *)+0x40>
        1b2df0:	e1a00005 	mov	r0, r5
        1b2df4:	e3a01202 	mov	r1, #536870912	; 0x20000000
        1b2df8:	eb6859b3 	bl	1bc94cc <TView::$ClearFlags(unsigned long)>
        1b2dfc:	e1a0000d 	mov	r0, sp
        1b2e00:	e3a01000 	mov	r1, #0	; 0x0
        1b2e04:	eb68c517 	bl	1be4268 <CArrayIterator::$__dt(void)>
        1b2e08:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TRootView::Dirty(TRect const *)
 * Address: 001b2e0c
 */
TRootView::Dirty(TRect const *) {
    /*
        1b2e0c:	e1a0c00d 	mov	ip, sp
        1b2e10:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1b2e14:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b2e18:	e1a04000 	mov	r4, r0
        1b2e1c:	e24dd018 	sub	sp, sp, #24	; 0x18
        1b2e20:	e3310000 	teq	r1, #0	; 0x0
        1b2e24:	02840010 	addeq	r0, r4, #16	; 0x10
        1b2e28:	11a00001 	movne	r0, r1
        1b2e2c:	e28d1010 	add	r1, sp, #16	; 0x10
        1b2e30:	e8905000 	ldmia	r0, {ip, lr}
        1b2e34:	e8815000 	stmia	r1, {ip, lr}
        1b2e38:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b2e3c:	e28d1014 	add	r1, sp, #20	; 0x14
        1b2e40:	e28d0004 	add	r0, sp, #4	; 0x4
        1b2e44:	eb635571 	bl	1a88410 <TRectangularRegion::$__ct(TRect const &)>
        1b2e48:	e28d0004 	add	r0, sp, #4	; 0x4
        1b2e4c:	e58d0000 	str	r0, [sp]
        1b2e50:	e1a00004 	mov	r0, r4
        1b2e54:	e3a02000 	mov	r2, #0	; 0x0
        1b2e58:	e49d1004 	ldr	r1, [sp], #4	; fField4
        1b2e5c:	eb639fb4 	bl	1a9ad34 <TRootView::$Invalidate(TBaseRegion const, TView *)>
        1b2e60:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TRootView::Hiliter(TUnitPublic *, TView *)
 * Address: 001b2e64
 */
TRootView::Hiliter(TUnitPublic *, TView *) {
    /*
        1b2e64:	e1a0c00d 	mov	ip, sp
        1b2e68:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1b2e6c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b2e70:	e1a04000 	mov	r4, r0
        1b2e74:	e1a05001 	mov	r5, r1
        1b2e78:	e1a00001 	mov	r0, r1
        1b2e7c:	eb63c0db 	bl	1aa31f0 <TUnitPublic::$Stroke(void)>
        1b2e80:	e1a07000 	mov	r7, r0
        1b2e84:	e3a02000 	mov	r2, #0	; 0x0
        1b2e88:	e3a01001 	mov	r1, #1	; 0x1
        1b2e8c:	eb645158 	bl	1ac73f4 <TStrokePublic::$InkOff(unsigned char, unsigned char)>
        1b2e90:	e3a00035 	mov	r0, #53	; 0x35
        1b2e94:	eb6444da 	bl	1ac4204 <$BusyBoxSend(long)>
        1b2e98:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b2e9c:	e5d4005c 	ldrb	r0, [r4, #92]	; fField92
        1b2ea0:	e59fa154 	ldr	sl, [pc, #154]	; 1b2ffc <TRootView::Hiliter(TUnitPublic *, TView *)+0x198>
        1b2ea4:	e3a08002 	mov	r8, #2	; 0x2
        1b2ea8:	e3a09000 	mov	r9, #0	; 0x0
        1b2eac:	e3300000 	teq	r0, #0	; 0x0
        1b2eb0:	0a000023 	beq	1b2f44 <TRootView::Hiliter(TUnitPublic *, TView *)+0xe0>
        1b2eb4:	e24dd010 	sub	sp, sp, #16	; 0x10
        1b2eb8:	e3a02302 	mov	r2, #134217728	; 0x8000000
        1b2ebc:	e59a6000 	ldr	r6, [sl]
        1b2ec0:	e3a00030 	mov	r0, #48	; 0x30
        1b2ec4:	e51b102c 	ldr	r1, [fp, -#44]
        1b2ec8:	eb63cd1c 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
        1b2ecc:	eb683c9e 	bl	1bc214c <$AllocateRefHandle(long)>
        1b2ed0:	e58d0000 	str	r0, [sp]
        1b2ed4:	e1a0100d 	mov	r1, sp
        1b2ed8:	e1a00006 	mov	r0, r6
        1b2edc:	eb637655 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
        1b2ee0:	e59d0000 	ldr	r0, [sp]
        1b2ee4:	eb6840b4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b2ee8:	e28dd004 	add	sp, sp, #4	; 0x4
        1b2eec:	e1a00008 	mov	r0, r8
        1b2ef0:	eb683c95 	bl	1bc214c <$AllocateRefHandle(long)>
        1b2ef4:	e58d0000 	str	r0, [sp]
        1b2ef8:	e1a0600d 	mov	r6, sp
        1b2efc:	e1a00008 	mov	r0, r8
        1b2f00:	eb683c91 	bl	1bc214c <$AllocateRefHandle(long)>
        1b2f04:	e58d0008 	str	r0, [sp, #8]	; fField8
        1b2f08:	e28d0008 	add	r0, sp, #8	; 0x8
        1b2f0c:	eb64a7d1 	bl	1adce58 <$FGetGlobals(RefVar const &)>
        1b2f10:	eb683c8d 	bl	1bc214c <$AllocateRefHandle(long)>
        1b2f14:	e58d0004 	str	r0, [sp, #4]	; fField4
        1b2f18:	e28d0004 	add	r0, sp, #4	; 0x4
        1b2f1c:	e59f10dc 	ldr	r1, [pc, #dc]	; 1b3000 <TRootView::Hiliter(TUnitPublic *, TView *)+0x19c>
        1b2f20:	e1a02006 	mov	r2, r6
        1b2f24:	eb684d0f 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1b2f28:	e59d0000 	ldr	r0, [sp]
        1b2f2c:	eb6840a2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b2f30:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1b2f34:	eb6840a0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b2f38:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        1b2f3c:	eb68409e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b2f40:	e28dd00c 	add	sp, sp, #12	; 0xc
        1b2f44:	e5c4905c 	strb	r9, [r4, #92]	; fField92
        1b2f48:	e1a00008 	mov	r0, r8
        1b2f4c:	eb683c7e 	bl	1bc214c <$AllocateRefHandle(long)>
        1b2f50:	e58d0000 	str	r0, [sp]
        1b2f54:	e1a0000d 	mov	r0, sp
        1b2f58:	e59f10a4 	ldr	r1, [pc, #a4]	; 1b3004 <TRootView::Hiliter(TUnitPublic *, TView *)+0x1a0>
        1b2f5c:	eb68fa5a 	bl	1bf18cc <$FPlaySound__FRC6RefVarT1>
        1b2f60:	e59d0000 	ldr	r0, [sp]
        1b2f64:	eb684094 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b2f68:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b2f6c:	e3a019fe 	mov	r1, #4161536	; 0x3f8000
        1b2f70:	e2411501 	sub	r1, r1, #4194304	; 0x400000
        1b2f74:	e5cd1005 	strb	r1, [sp, #5]	; fField5
        1b2f78:	e3e0007f 	mvn	r0, #127	; 0x7f
        1b2f7c:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        1b2f80:	e5cd1001 	strb	r1, [sp, #1]	; fField1
        1b2f84:	e44d0064 	strb	r0, [sp], -#100	; fField100
        1b2f88:	e1a0000d 	mov	r0, sp
        1b2f8c:	eb68f204 	bl	1bef7a4 <$GetPort(GrafPort **)>
        1b2f90:	e49d0004 	ldr	r0, [sp], #4	; fField4
        1b2f94:	e280801c 	add	r8, r0, #28	; 0x1c
        1b2f98:	e28d002c 	add	r0, sp, #44	; 0x2c
        1b2f9c:	eb63551d 	bl	1a88418 <TBits::$__ct(void)>
        1b2fa0:	e1a01008 	mov	r1, r8
        1b2fa4:	e28d002c 	add	r0, sp, #44	; 0x2c
        1b2fa8:	eb6369c8 	bl	1a8d6d0 <TBits::$Constructor(TRect const &)>
        1b2fac:	e1a06000 	mov	r6, r0
        1b2fb0:	e1a0000d 	mov	r0, sp
        1b2fb4:	eb668abc 	bl	1b55aac <TSaveScreenBits::$__ct(void)>
        1b2fb8:	e3360000 	teq	r6, #0	; 0x0
        1b2fbc:	0a000013 	beq	1b3010 <TRootView::Hiliter(TUnitPublic *, TView *)+0x1ac>
        1b2fc0:	e1a01008 	mov	r1, r8
        1b2fc4:	e1a0000d 	mov	r0, sp
        1b2fc8:	eb66659c 	bl	1b4c640 <TSaveScreenBits::$AllocateBuffers(Rect *)>
        1b2fcc:	e1b06000 	movs	r6, r0
        1b2fd0:	0a00000c 	beq	1b3008 <TRootView::Hiliter(TUnitPublic *, TView *)+0x1a4>
        1b2fd4:	e52d9004 	str	r9, [sp, -#4]!	; fField4
        1b2fd8:	e28d0030 	add	r0, sp, #48	; 0x30
        1b2fdc:	e1a01009 	mov	r1, r9
        1b2fe0:	e28dd004 	add	sp, sp, #4	; 0x4
        1b2fe4:	eb635d5c 	bl	1a8a55c <TBits::$BeginDrawing(TPoint)>
        1b2fe8:	e28d002c 	add	r0, sp, #44	; 0x2c
        1b2fec:	eb63b418 	bl	1aa0054 <TBits::$RestorePort(void)>
        1b2ff0:	e1a0000d 	mov	r0, sp
        1b2ff4:	eb66826d 	bl	1b539b0 <TSaveScreenBits::$SaveScreenBits(void)>
        1b2ff8:	ea000004 	b	1b3010 <TRootView::Hiliter(TUnitPublic *, TView *)+0x1ac>
        1b2ffc:	0c1054ac 	ldceq	4, cr5, [r0], -#688
        1b3000:	00683498 	streqb	r3, [r8], -#72
        1b3004:	0067ff28 	rsbeq	pc, r7, r8, lsr #30
        1b3008:	e28d002c 	add	r0, sp, #44	; 0x2c
        1b300c:	eb648a9b 	bl	1ad5a80 <TBits::$Cleanup(void)>
        1b3010:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b3014:	e1a01007 	mov	r1, r7
        1b3018:	e1a0000d 	mov	r0, sp
        1b301c:	eb638687 	bl	1a94a40 <TStrokePublic::$FirstPoint(void)>
        1b3020:	e59d0000 	ldr	r0, [sp]
        1b3024:	e2800001 	add	r0, r0, #1	; 0x1
        1b3028:	e5cd0003 	strb	r0, [sp, #3]	; fField3
        1b302c:	e1a00440 	mov	r0, r0, asr #8
        1b3030:	e5cd0002 	strb	r0, [sp, #2]	; fField2
        1b3034:	e3a09001 	mov	r9, #1	; 0x1
        1b3038:	e1a00007 	mov	r0, r7
        1b303c:	eb637a18 	bl	1a918a4 <TStrokePublic::$Done(void)>
        1b3040:	e3300000 	teq	r0, #0	; 0x0
        1b3044:	1a00004e 	bne	1b3184 <TRootView::Hiliter(TUnitPublic *, TView *)+0x320>
        1b3048:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b304c:	e1a01007 	mov	r1, r7
        1b3050:	e1a0000d 	mov	r0, sp
        1b3054:	eb63825a 	bl	1a939c4 <TStrokePublic::$FinalPoint(void)>
        1b3058:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1b305c:	e59d1000 	ldr	r1, [sp]
        1b3060:	e1310000 	teq	r1, r0
        1b3064:	0a00003f 	beq	1b3168 <TRootView::Hiliter(TUnitPublic *, TView *)+0x304>
        1b3068:	e3360000 	teq	r6, #0	; 0x0
        1b306c:	0a00000a 	beq	1b309c <TRootView::Hiliter(TUnitPublic *, TView *)+0x238>
        1b3070:	e28d0034 	add	r0, sp, #52	; 0x34
        1b3074:	eb63bc2d 	bl	1aa2130 <TBits::$SetPort(void)>
        1b3078:	e3a00004 	mov	r0, #4	; 0x4
        1b307c:	eb6671d7 	bl	1b4f7e0 <$GetStdPattern(unsigned char)>
        1b3080:	e1a02000 	mov	r2, r0
        1b3084:	e1a03009 	mov	r3, r9
        1b3088:	e1a0100d 	mov	r1, sp
        1b308c:	e28d0004 	add	r0, sp, #4	; 0x4
        1b3090:	eb637a18 	bl	1a918f8 <$DrawHiliteLine__FRC6TPointT1PP8PixelMapUc>
        1b3094:	e28d0034 	add	r0, sp, #52	; 0x34
        1b3098:	eb63b3ed 	bl	1aa0054 <TBits::$RestorePort(void)>
        1b309c:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b30a0:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        1b30a4:	e58d0000 	str	r0, [sp]
        1b30a8:	e59d000c 	ldr	r0, [sp, #12]
        1b30ac:	e58d0004 	str	r0, [sp, #4]	; fField4
        1b30b0:	e1a0000d 	mov	r0, sp
        1b30b4:	eb638663 	bl	1a94a48 <TRect::$Flip(void)>
        1b30b8:	e1a0000d 	mov	r0, sp
        1b30bc:	e3e01007 	mvn	r1, #7	; 0x7
        1b30c0:	e1a02001 	mov	r2, r1
        1b30c4:	eb6675dd 	bl	1b50840 <$InsetRect__FP4RectlT2>
        1b30c8:	e1a0200d 	mov	r2, sp
        1b30cc:	e1a0100d 	mov	r1, sp
        1b30d0:	e1a00008 	mov	r0, r8
        1b30d4:	eb66823c 	bl	1b539cc <$SectRect__FP4RectN21>
        1b30d8:	e3a01000 	mov	r1, #0	; 0x0
        1b30dc:	e3a00000 	mov	r0, #0	; 0x0
        1b30e0:	eb66654c 	bl	1b4c618 <$StartDrawing(PixelMap *, Rect *)>
        1b30e4:	e3360000 	teq	r6, #0	; 0x0
        1b30e8:	0a00000c 	beq	1b3120 <TRootView::Hiliter(TUnitPublic *, TView *)+0x2bc>
        1b30ec:	e1a0100d 	mov	r1, sp
        1b30f0:	e28d0010 	add	r0, sp, #16	; 0x10
        1b30f4:	e3a02000 	mov	r2, #0	; 0x0
        1b30f8:	eb668228 	bl	1b539a0 <TSaveScreenBits::$RestoreScreenBits(Rect *, Region **)>
        1b30fc:	e3a03000 	mov	r3, #0	; 0x0
        1b3100:	e92d0008 	stmdb	sp!, {r3}
        1b3104:	e28d2004 	add	r2, sp, #4	; 0x4
        1b3108:	e28d1004 	add	r1, sp, #4	; 0x4
        1b310c:	e28d0040 	add	r0, sp, #64	; 0x40
        1b3110:	e3a03002 	mov	r3, #2	; 0x2
        1b3114:	eb6379f0 	bl	1a918dc <TBits::$Draw(TRect const &, TRect const &, long, Region **)>
        1b3118:	e28dd004 	add	sp, sp, #4	; 0x4
        1b311c:	ea000006 	b	1b313c <TRootView::Hiliter(TUnitPublic *, TView *)+0x2d8>
        1b3120:	e3a00004 	mov	r0, #4	; 0x4
        1b3124:	eb6671ad 	bl	1b4f7e0 <$GetStdPattern(unsigned char)>
        1b3128:	e1a02000 	mov	r2, r0
        1b312c:	e1a03009 	mov	r3, r9
        1b3130:	e28d1008 	add	r1, sp, #8	; 0x8
        1b3134:	e28d000c 	add	r0, sp, #12	; 0xc
        1b3138:	eb6379ee 	bl	1a918f8 <$DrawHiliteLine__FRC6TPointT1PP8PixelMapUc>
        1b313c:	e3a01000 	mov	r1, #0	; 0x0
        1b3140:	e3a00000 	mov	r0, #0	; 0x0
        1b3144:	eb666535 	bl	1b4c620 <$StopDrawing(PixelMap *, Rect *)>
        1b3148:	e1a0100d 	mov	r1, sp
        1b314c:	e28d0070 	add	r0, sp, #112	; 0x70
        1b3150:	eb63c84e 	bl	1aa5290 <TRect::$Union(TRect const &)>
        1b3154:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        1b3158:	e3a09000 	mov	r9, #0	; 0x0
        1b315c:	e58d000c 	str	r0, [sp, #12]
        1b3160:	e28dd008 	add	sp, sp, #8	; 0x8
        1b3164:	ea000001 	b	1b3170 <TRootView::Hiliter(TUnitPublic *, TView *)+0x30c>
        1b3168:	e3a00001 	mov	r0, #1	; 0x1
        1b316c:	eb63c861 	bl	1aa52f8 <$Wait(unsigned long)>
        1b3170:	e28dd004 	add	sp, sp, #4	; 0x4
        1b3174:	e1a00007 	mov	r0, r7
        1b3178:	eb6379c9 	bl	1a918a4 <TStrokePublic::$Done(void)>
        1b317c:	e3300000 	teq	r0, #0	; 0x0
        1b3180:	0affffb0 	beq	1b3048 <TRootView::Hiliter(TUnitPublic *, TView *)+0x1e4>
        1b3184:	e28dd004 	add	sp, sp, #4	; 0x4
        1b3188:	e1a0000d 	mov	r0, sp
        1b318c:	e3a01000 	mov	r1, #0	; 0x0
        1b3190:	eb668a47 	bl	1b55ab4 <TSaveScreenBits::$__dt(void)>
        1b3194:	e28d002c 	add	r0, sp, #44	; 0x2c
        1b3198:	e3a01000 	mov	r1, #0	; 0x0
        1b319c:	eb6354b5 	bl	1a88478 <TBits::$__dt(void)>
        1b31a0:	e1a02005 	mov	r2, r5
        1b31a4:	e28dd05c 	add	sp, sp, #92	; 0x5c
        1b31a8:	e59a5000 	ldr	r5, [sl]
        1b31ac:	e3a0002f 	mov	r0, #47	; 0x2f
        1b31b0:	e51b102c 	ldr	r1, [fp, -#44]
        1b31b4:	eb63cc61 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
        1b31b8:	eb683be3 	bl	1bc214c <$AllocateRefHandle(long)>
        1b31bc:	e58d0000 	str	r0, [sp]
        1b31c0:	e1a0100d 	mov	r1, sp
        1b31c4:	e1a00005 	mov	r0, r5
        1b31c8:	eb63759a 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
        1b31cc:	e59d0000 	ldr	r0, [sp]
        1b31d0:	eb683ff9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b31d4:	e28dd004 	add	sp, sp, #4	; 0x4
        1b31d8:	e1a0100d 	mov	r1, sp
        1b31dc:	e1a00004 	mov	r0, r4
        1b31e0:	eb63bff3 	bl	1aa31b4 <TRootView::$SmartInvalidate(TRect const &)>
        1b31e4:	e3a00036 	mov	r0, #54	; 0x36
        1b31e8:	eb644405 	bl	1ac4204 <$BusyBoxSend(long)>
        1b31ec:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TRootView::RealDoCommand(RefVar const &)
 * Address: 001b31f0
 */
TRootView::RealDoCommand(RefVar const &) {
    /*
        1b31f0:	e1a0c00d 	mov	ip, sp
        1b31f4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1b31f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b31fc:	e1a04000 	mov	r4, r0
        1b3200:	e1a07001 	mov	r7, r1
        1b3204:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b3208:	e1a00001 	mov	r0, r1
        1b320c:	eb63cc4d 	bl	1aa6348 <$CommandID(RefVar const &)>
        1b3210:	e3300021 	teq	r0, #33	; 0x21
        1b3214:	0a000040 	beq	1b331c <TRootView::RealDoCommand(RefVar const &)+0x12c>
        1b3218:	e3300034 	teq	r0, #52	; 0x34
        1b321c:	0a000052 	beq	1b336c <TRootView::RealDoCommand(RefVar const &)+0x17c>
        1b3220:	e59f10e8 	ldr	r1, [pc, #e8]	; 1b3310 <TRootView::RealDoCommand(RefVar const &)+0x120>
        1b3224:	e58d1004 	str	r1, [sp, #4]	; fField4
        1b3228:	e59f10e4 	ldr	r1, [pc, #e4]	; 1b3314 <TRootView::RealDoCommand(RefVar const &)+0x124>
        1b322c:	e58d1000 	str	r1, [sp]
        1b3230:	e59f80e0 	ldr	r8, [pc, #e0]	; 1b3318 <TRootView::RealDoCommand(RefVar const &)+0x128>
        1b3234:	e3a0a000 	mov	sl, #0	; 0x0
        1b3238:	e2845054 	add	r5, r4, #84	; 0x54
        1b323c:	e2846058 	add	r6, r4, #88	; 0x58
        1b3240:	e330003d 	teq	r0, #61	; 0x3d
        1b3244:	0a000056 	beq	1b33a4 <TRootView::RealDoCommand(RefVar const &)+0x1b4>
        1b3248:	e330003f 	teq	r0, #63	; 0x3f
        1b324c:	1a000164 	bne	1b37e4 <TRootView::RealDoCommand(RefVar const &)+0x5f4>
        1b3250:	e1a00007 	mov	r0, r7
        1b3254:	eb63cc3f 	bl	1aa6358 <$CommandParameter(RefVar const &)>
        1b3258:	e1a01000 	mov	r1, r0
        1b325c:	e1a00004 	mov	r0, r4
        1b3260:	eb685caf 	bl	1bca524 <TView::$FindID(long)>
        1b3264:	e1a07000 	mov	r7, r0
        1b3268:	e3a01065 	mov	r1, #101	; 0x65
        1b326c:	e5902000 	ldr	r2, [r0]
        1b3270:	e1a0e00f 	mov	lr, pc
        1b3274:	e282f004 	add	pc, r2, #4	; 0x4
        1b3278:	e3300000 	teq	r0, #0	; 0x0
        1b327c:	05970008 	ldreq	r0, [r7, #8]	; fField8
        1b3280:	02000301 	andeq	r0, r0, #67108864	; 0x4000000
        1b3284:	03300000 	teqeq	r0, #0	; 0x0
        1b3288:	0a000153 	beq	1b37dc <TRootView::RealDoCommand(RefVar const &)+0x5ec>
        1b328c:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b3290:	e5979004 	ldr	r9, [r7, #4]	; fField4
        1b3294:	e1a00007 	mov	r0, r7
        1b3298:	eb685892 	bl	1bc94e8 <TView::$DataFrame(void)>
        1b329c:	eb683baa 	bl	1bc214c <$AllocateRefHandle(long)>
        1b32a0:	e58d0004 	str	r0, [sp, #4]	; fField4
        1b32a4:	e3a00002 	mov	r0, #2	; 0x2
        1b32a8:	eb683ba7 	bl	1bc214c <$AllocateRefHandle(long)>
        1b32ac:	e58d0000 	str	r0, [sp]
        1b32b0:	e1a0200d 	mov	r2, sp
        1b32b4:	e59d100c 	ldr	r1, [sp, #12]
        1b32b8:	e28d0004 	add	r0, sp, #4	; 0x4
        1b32bc:	eb684c29 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1b32c0:	e59d0000 	ldr	r0, [sp]
        1b32c4:	eb683fbc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b32c8:	e1a00007 	mov	r0, r7
        1b32cc:	e3a01065 	mov	r1, #101	; 0x65
        1b32d0:	e5972000 	ldr	r2, [r7]
        1b32d4:	e1a0e00f 	mov	lr, pc
        1b32d8:	e282f004 	add	pc, r2, #4	; 0x4
        1b32dc:	e3300000 	teq	r0, #0	; 0x0
        1b32e0:	e2871024 	add	r1, r7, #36	; 0x24
        1b32e4:	0a000103 	beq	1b36f8 <TRootView::RealDoCommand(RefVar const &)+0x508>
        1b32e8:	e1a00006 	mov	r0, r6
        1b32ec:	eb695458 	bl	1c08454 <$ArrayRemove__FRC6RefVarT1>
        1b32f0:	e5960000 	ldr	r0, [r6]
        1b32f4:	e5900000 	ldr	r0, [r0]
        1b32f8:	eb6847eb 	bl	1bc52ac <$Length(long)>
        1b32fc:	e3300000 	teq	r0, #0	; 0x0
        1b3300:	03a00002 	moveq	r0, #2	; 0x2
        1b3304:	05961000 	ldreq	r1, [r6]
        1b3308:	0a000103 	beq	1b371c <TRootView::RealDoCommand(RefVar const &)+0x52c>
        1b330c:	ea00011c 	b	1b3784 <TRootView::RealDoCommand(RefVar const &)+0x594>
        1b3310:	006820d8 	ldreqd	r2, [r8], -#8	; fField8
        1b3314:	00684fa8 	rsbeq	r4, r8, r8, lsr #31
        1b3318:	0c1054ac 	ldceq	4, cr5, [r0], -#688
        1b331c:	e1a00007 	mov	r0, r7
        1b3320:	eb63cc0c 	bl	1aa6358 <$CommandParameter(RefVar const &)>
        1b3324:	e21010ff 	ands	r1, r0, #255	; 0xff
        1b3328:	e59f0010 	ldr	r0, [pc, #10]	; 1b3340 <TRootView::RealDoCommand(RefVar const &)+0x150>
        1b332c:	e5c01008 	strb	r1, [r0, #8]	; fField8
        1b3330:	1a000003 	bne	1b3344 <TRootView::RealDoCommand(RefVar const &)+0x154>
        1b3334:	e1a00004 	mov	r0, r4
        1b3338:	eb6468e1 	bl	1acd6c4 <TRootView::$CheckForCaretRemoval(void)>
        1b333c:	ea000001 	b	1b3348 <TRootView::RealDoCommand(RefVar const &)+0x158>
        1b3340:	0c101930 	ldceq	9, cr1, [r0], -#192
        1b3344:	eb64d864 	bl	1ae94dc <$ClearHardKeymap(void)>
        1b3348:	e5940050 	ldr	r0, [r4, #80]	; fField80
        1b334c:	e3300000 	teq	r0, #0	; 0x0
        1b3350:	1b6864b4 	blne	1bcc628 <TView::$Sync(void)>
        1b3354:	e1a00004 	mov	r0, r4
        1b3358:	e3a01000 	mov	r1, #0	; 0x0
        1b335c:	e5942000 	ldr	r2, [r4]
        1b3360:	e1a0e00f 	mov	lr, pc
        1b3364:	e282f054 	add	pc, r2, #84	; 0x54
        1b3368:	ea00011b 	b	1b37dc <TRootView::RealDoCommand(RefVar const &)+0x5ec>
        1b336c:	e1a00007 	mov	r0, r7
        1b3370:	eb63cbf8 	bl	1aa6358 <$CommandParameter(RefVar const &)>
        1b3374:	e1a05000 	mov	r5, r0
        1b3378:	e1a00007 	mov	r0, r7
        1b337c:	eb63cbf0 	bl	1aa6344 <$CommandReceiver(RefVar const &)>
        1b3380:	e1a02000 	mov	r2, r0
        1b3384:	e1a01005 	mov	r1, r5
        1b3388:	e1a00004 	mov	r0, r4
        1b338c:	eb63962f 	bl	1a98c50 <TRootView::$Hiliter(TUnitPublic *, TView *)>
        1b3390:	e3a04001 	mov	r4, #1	; 0x1
        1b3394:	e1a00007 	mov	r0, r7
        1b3398:	e3a01001 	mov	r1, #1	; 0x1
        1b339c:	eb63cbec 	bl	1aa6354 <$CommandSetResult(RefVar const &, long)>
        1b33a0:	ea000113 	b	1b37f4 <TRootView::RealDoCommand(RefVar const &)+0x604>
        1b33a4:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b33a8:	e1a00007 	mov	r0, r7
        1b33ac:	eb63cbeb 	bl	1aa6360 <$CommandFrameParameter(RefVar const &)>
        1b33b0:	eb683b65 	bl	1bc214c <$AllocateRefHandle(long)>
        1b33b4:	e58d0000 	str	r0, [sp]
        1b33b8:	e1a0100d 	mov	r1, sp
        1b33bc:	e1a00004 	mov	r0, r4
        1b33c0:	eb63584d 	bl	1a894fc <TView::$AddView(RefVar const &)>
        1b33c4:	e1a07000 	mov	r7, r0
        1b33c8:	e59d0000 	ldr	r0, [sp]
        1b33cc:	eb683f7a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b33d0:	e3a0a001 	mov	sl, #1	; 0x1
        1b33d4:	e59f01ac 	ldr	r0, [pc, #1ac]	; 1b3588 <TRootView::RealDoCommand(RefVar const &)+0x398>	; fField1
        1b33d8:	eb638dc9 	bl	1a96b04 <$GetPreference(RefVar const &)>
        1b33dc:	eb683b5a 	bl	1bc214c <$AllocateRefHandle(long)>
        1b33e0:	e1a09000 	mov	r9, r0
        1b33e4:	e5900000 	ldr	r0, [r0]
        1b33e8:	e2001003 	and	r1, r0, #3	; 0x3
        1b33ec:	e3510000 	cmp	r1, #0	; 0x0
        1b33f0:	1a00000a 	bne	1b3420 <TRootView::RealDoCommand(RefVar const &)+0x230>
        1b33f4:	01a00140 	moveq	r0, r0, asr #2
        1b33f8:	0a000000 	beq	1b3400 <TRootView::RealDoCommand(RefVar const &)+0x210>
        1b33fc:	eb683b46 	bl	1bc211c <$_RINTError(long)>
        1b3400:	e3500000 	cmp	r0, #0	; 0x0
        1b3404:	da000005 	ble	1b3420 <TRootView::RealDoCommand(RefVar const &)+0x230>
        1b3408:	e5990000 	ldr	r0, [r9]
        1b340c:	e3100003 	tst	r0, #3	; 0x3
        1b3410:	01a00140 	moveq	r0, r0, asr #2
        1b3414:	0a000000 	beq	1b341c <TRootView::RealDoCommand(RefVar const &)+0x22c>
        1b3418:	eb683b3f 	bl	1bc211c <$_RINTError(long)>
        1b341c:	e1a0a000 	mov	sl, r0
        1b3420:	e1a00007 	mov	r0, r7
        1b3424:	e3a01065 	mov	r1, #101	; 0x65
        1b3428:	e5972000 	ldr	r2, [r7]
        1b342c:	e1a0e00f 	mov	lr, pc
        1b3430:	e282f004 	add	pc, r2, #4	; 0x4
        1b3434:	e59f1150 	ldr	r1, [pc, #150]	; 1b358c <TRootView::RealDoCommand(RefVar const &)+0x39c>
        1b3438:	e3300000 	teq	r0, #0	; 0x0
        1b343c:	0a000054 	beq	1b3594 <TRootView::RealDoCommand(RefVar const &)+0x3a4>
        1b3440:	e5960000 	ldr	r0, [r6]
        1b3444:	e5900000 	ldr	r0, [r0]
        1b3448:	e3300002 	teq	r0, #2	; 0x2
        1b344c:	1a000005 	bne	1b3468 <TRootView::RealDoCommand(RefVar const &)+0x278>
        1b3450:	e1a05006 	mov	r5, r6
        1b3454:	e1a00001 	mov	r0, r1
        1b3458:	e3a01000 	mov	r1, #0	; 0x0
        1b345c:	eb683b35 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        1b3460:	e5951000 	ldr	r1, [r5]
        1b3464:	e5810000 	str	r0, [r1]
        1b3468:	e2871024 	add	r1, r7, #36	; 0x24
        1b346c:	e1a00006 	mov	r0, r6
        1b3470:	e3a02000 	mov	r2, #0	; 0x0
        1b3474:	eb695818 	bl	1c094dc <$ArrayInsert__FRC6RefVarT1l>
        1b3478:	e5960000 	ldr	r0, [r6]
        1b347c:	e5900000 	ldr	r0, [r0]
        1b3480:	eb684789 	bl	1bc52ac <$Length(long)>
        1b3484:	e1a05000 	mov	r5, r0
        1b3488:	e150000a 	cmp	r0, sl
        1b348c:	da00001a 	ble	1b34fc <TRootView::RealDoCommand(RefVar const &)+0x30c>
        1b3490:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b3494:	e2451001 	sub	r1, r5, #1	; 0x1
        1b3498:	e1a05001 	mov	r5, r1
        1b349c:	e5960000 	ldr	r0, [r6]
        1b34a0:	e5900000 	ldr	r0, [r0]
        1b34a4:	eb68436a 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1b34a8:	eb683b27 	bl	1bc214c <$AllocateRefHandle(long)>
        1b34ac:	e58d0000 	str	r0, [sp]
        1b34b0:	e1a0000d 	mov	r0, sp
        1b34b4:	eb685c28 	bl	1bca55c <$GetView(RefVar const &)>
        1b34b8:	e1a0a000 	mov	sl, r0
        1b34bc:	e59d0000 	ldr	r0, [sp]
        1b34c0:	eb683f3d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b34c4:	e5ba2004 	ldr	r2, [sl, #4]!	; fField4
        1b34c8:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b34cc:	e1a01004 	mov	r1, r4
        1b34d0:	e3a0003f 	mov	r0, #63	; 0x3f
        1b34d4:	e598a000 	ldr	sl, [r8]
        1b34d8:	eb63cb98 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
        1b34dc:	eb683b1a 	bl	1bc214c <$AllocateRefHandle(long)>
        1b34e0:	e58d0000 	str	r0, [sp]
        1b34e4:	e1a0100d 	mov	r1, sp
        1b34e8:	e1a0000a 	mov	r0, sl
        1b34ec:	eb6374d1 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
        1b34f0:	e59d0000 	ldr	r0, [sp]
        1b34f4:	eb683f30 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b34f8:	e28dd008 	add	sp, sp, #8	; 0x8
        1b34fc:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b3500:	e3550001 	cmp	r5, #1	; 0x1
        1b3504:	da000015 	ble	1b3560 <TRootView::RealDoCommand(RefVar const &)+0x370>
        1b3508:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b350c:	e5960000 	ldr	r0, [r6]
        1b3510:	e5900000 	ldr	r0, [r0]
        1b3514:	e3a01001 	mov	r1, #1	; 0x1
        1b3518:	eb68434d 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1b351c:	eb683b0a 	bl	1bc214c <$AllocateRefHandle(long)>
        1b3520:	e58d0000 	str	r0, [sp]
        1b3524:	e1a0000d 	mov	r0, sp
        1b3528:	eb685c0b 	bl	1bca55c <$GetView(RefVar const &)>
        1b352c:	e1a05000 	mov	r5, r0
        1b3530:	e59d0000 	ldr	r0, [sp]
        1b3534:	eb683f20 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b3538:	e3a00002 	mov	r0, #2	; 0x2
        1b353c:	eb683b02 	bl	1bc214c <$AllocateRefHandle(long)>
        1b3540:	e58d0004 	str	r0, [sp, #4]	; fField4
        1b3544:	e28d2004 	add	r2, sp, #4	; 0x4
        1b3548:	e2850024 	add	r0, r5, #36	; 0x24
        1b354c:	e59d1014 	ldr	r1, [sp, #20]
        1b3550:	eb684b84 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1b3554:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1b3558:	eb683f17 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b355c:	e28dd008 	add	sp, sp, #8	; 0x8
        1b3560:	e3a00002 	mov	r0, #2	; 0x2
        1b3564:	eb683af8 	bl	1bc214c <$AllocateRefHandle(long)>
        1b3568:	e58d0000 	str	r0, [sp]
        1b356c:	e1a0000d 	mov	r0, sp
        1b3570:	e59f1018 	ldr	r1, [pc, #18]	; 1b3590 <TRootView::RealDoCommand(RefVar const &)+0x3a0>
        1b3574:	eb68f8d4 	bl	1bf18cc <$FPlaySound__FRC6RefVarT1>
        1b3578:	e59d0000 	ldr	r0, [sp]
        1b357c:	eb683f0e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b3580:	e28dd004 	add	sp, sp, #4	; 0x4
        1b3584:	ea000050 	b	1b36cc <TRootView::RealDoCommand(RefVar const &)+0x4dc>
        1b3588:	00682480 	rsbeq	r2, r8, r0, lsl #9
        1b358c:	00681f10 	rsbeq	r1, r8, r0, lsl pc
        1b3590:	0067fd70 	rsbeq	pc, r7, r0, ror sp
        1b3594:	e5950000 	ldr	r0, [r5]
        1b3598:	e5900000 	ldr	r0, [r0]
        1b359c:	e3300002 	teq	r0, #2	; 0x2
        1b35a0:	1a000005 	bne	1b35bc <TRootView::RealDoCommand(RefVar const &)+0x3cc>
        1b35a4:	e1a06005 	mov	r6, r5
        1b35a8:	e1a00001 	mov	r0, r1
        1b35ac:	e3a01000 	mov	r1, #0	; 0x0
        1b35b0:	eb683ae0 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        1b35b4:	e5961000 	ldr	r1, [r6]
        1b35b8:	e5810000 	str	r0, [r1]
        1b35bc:	e2871024 	add	r1, r7, #36	; 0x24
        1b35c0:	e1a00005 	mov	r0, r5
        1b35c4:	e3a02000 	mov	r2, #0	; 0x0
        1b35c8:	eb6957c3 	bl	1c094dc <$ArrayInsert__FRC6RefVarT1l>
        1b35cc:	e5950000 	ldr	r0, [r5]
        1b35d0:	e5900000 	ldr	r0, [r0]
        1b35d4:	eb684734 	bl	1bc52ac <$Length(long)>
        1b35d8:	e1a06000 	mov	r6, r0
        1b35dc:	e150000a 	cmp	r0, sl
        1b35e0:	da00001a 	ble	1b3650 <TRootView::RealDoCommand(RefVar const &)+0x460>
        1b35e4:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b35e8:	e2461001 	sub	r1, r6, #1	; 0x1
        1b35ec:	e1a06001 	mov	r6, r1
        1b35f0:	e5950000 	ldr	r0, [r5]
        1b35f4:	e5900000 	ldr	r0, [r0]
        1b35f8:	eb684315 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1b35fc:	eb683ad2 	bl	1bc214c <$AllocateRefHandle(long)>
        1b3600:	e58d0000 	str	r0, [sp]
        1b3604:	e1a0000d 	mov	r0, sp
        1b3608:	eb685bd3 	bl	1bca55c <$GetView(RefVar const &)>
        1b360c:	e1a0a000 	mov	sl, r0
        1b3610:	e59d0000 	ldr	r0, [sp]
        1b3614:	eb683ee8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b3618:	e5ba2004 	ldr	r2, [sl, #4]!	; fField4
        1b361c:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b3620:	e1a01004 	mov	r1, r4
        1b3624:	e3a0003f 	mov	r0, #63	; 0x3f
        1b3628:	e598a000 	ldr	sl, [r8]
        1b362c:	eb63cb43 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
        1b3630:	eb683ac5 	bl	1bc214c <$AllocateRefHandle(long)>
        1b3634:	e58d0000 	str	r0, [sp]
        1b3638:	e1a0100d 	mov	r1, sp
        1b363c:	e1a0000a 	mov	r0, sl
        1b3640:	eb63747c 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
        1b3644:	e59d0000 	ldr	r0, [sp]
        1b3648:	eb683edb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b364c:	e28dd008 	add	sp, sp, #8	; 0x8
        1b3650:	e3560001 	cmp	r6, #1	; 0x1
        1b3654:	da000017 	ble	1b36b8 <TRootView::RealDoCommand(RefVar const &)+0x4c8>
        1b3658:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b365c:	e5950000 	ldr	r0, [r5]
        1b3660:	e5900000 	ldr	r0, [r0]
        1b3664:	e3a01001 	mov	r1, #1	; 0x1
        1b3668:	eb6842f9 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1b366c:	eb683ab6 	bl	1bc214c <$AllocateRefHandle(long)>
        1b3670:	e58d0000 	str	r0, [sp]
        1b3674:	e1a0000d 	mov	r0, sp
        1b3678:	eb685bb7 	bl	1bca55c <$GetView(RefVar const &)>
        1b367c:	e1a05000 	mov	r5, r0
        1b3680:	e59d0000 	ldr	r0, [sp]
        1b3684:	eb683ecc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b3688:	e59f0064 	ldr	r0, [pc, #64]	; 1b36f4 <TRootView::RealDoCommand(RefVar const &)+0x504>	; fField64
        1b368c:	eb683aae 	bl	1bc214c <$AllocateRefHandle(long)>
        1b3690:	e58d0004 	str	r0, [sp, #4]	; fField4
        1b3694:	e28d2004 	add	r2, sp, #4	; 0x4
        1b3698:	e1a00005 	mov	r0, r5
        1b369c:	e59d100c 	ldr	r1, [sp, #12]
        1b36a0:	e5953000 	ldr	r3, [r5]
        1b36a4:	e1a0e00f 	mov	lr, pc
        1b36a8:	e283f048 	add	pc, r3, #72	; 0x48
        1b36ac:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1b36b0:	eb683ec1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b36b4:	e28dd008 	add	sp, sp, #8	; 0x8
        1b36b8:	e1a00007 	mov	r0, r7
        1b36bc:	e3a01000 	mov	r1, #0	; 0x0
        1b36c0:	e5972000 	ldr	r2, [r7]
        1b36c4:	e1a0e00f 	mov	lr, pc
        1b36c8:	e282f054 	add	pc, r2, #84	; 0x54
        1b36cc:	e1a02004 	mov	r2, r4
        1b36d0:	e5b73004 	ldr	r3, [r7, #4]!	; fField4
        1b36d4:	e3a0103f 	mov	r1, #63	; 0x3f
        1b36d8:	e5980000 	ldr	r0, [r8]
        1b36dc:	eb63ae07 	bl	1a9ef00 <TApplication::$PostUndoCommand(unsigned long, TResponder *, long)>
        1b36e0:	e3a04001 	mov	r4, #1	; 0x1
        1b36e4:	e1a00009 	mov	r0, r9
        1b36e8:	eb683eb3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b36ec:	e28dd004 	add	sp, sp, #4	; 0x4
        1b36f0:	ea00003f 	b	1b37f4 <TRootView::RealDoCommand(RefVar const &)+0x604>
        1b36f4:	42666664 	rsbmi	r6, r6, #104857600	; 0x6400000
        1b36f8:	e1a00005 	mov	r0, r5
        1b36fc:	eb695354 	bl	1c08454 <$ArrayRemove__FRC6RefVarT1>
        1b3700:	e5950000 	ldr	r0, [r5]
        1b3704:	e5900000 	ldr	r0, [r0]
        1b3708:	eb6846e7 	bl	1bc52ac <$Length(long)>
        1b370c:	e3300000 	teq	r0, #0	; 0x0
        1b3710:	1a000003 	bne	1b3724 <TRootView::RealDoCommand(RefVar const &)+0x534>
        1b3714:	e3a00002 	mov	r0, #2	; 0x2
        1b3718:	e5951000 	ldr	r1, [r5]
        1b371c:	e5810000 	str	r0, [r1]
        1b3720:	ea000017 	b	1b3784 <TRootView::RealDoCommand(RefVar const &)+0x594>
        1b3724:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b3728:	e5950000 	ldr	r0, [r5]
        1b372c:	e5900000 	ldr	r0, [r0]
        1b3730:	e1a0100a 	mov	r1, sl
        1b3734:	eb6842c6 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1b3738:	eb683a83 	bl	1bc214c <$AllocateRefHandle(long)>
        1b373c:	e58d0000 	str	r0, [sp]
        1b3740:	e1a0000d 	mov	r0, sp
        1b3744:	eb685b84 	bl	1bca55c <$GetView(RefVar const &)>
        1b3748:	e1a05000 	mov	r5, r0
        1b374c:	e59d0000 	ldr	r0, [sp]
        1b3750:	eb683e99 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b3754:	e3a00101 	mov	r0, #1073741824	; 0x40000000
        1b3758:	eb683a7b 	bl	1bc214c <$AllocateRefHandle(long)>
        1b375c:	e58d0004 	str	r0, [sp, #4]	; fField4
        1b3760:	e28d2004 	add	r2, sp, #4	; 0x4
        1b3764:	e1a00005 	mov	r0, r5
        1b3768:	e59d1010 	ldr	r1, [sp, #16]
        1b376c:	e5953000 	ldr	r3, [r5]
        1b3770:	e1a0e00f 	mov	lr, pc
        1b3774:	e283f048 	add	pc, r3, #72	; 0x48
        1b3778:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1b377c:	eb683e8e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b3780:	e28dd008 	add	sp, sp, #8	; 0x8
        1b3784:	e1a01007 	mov	r1, r7
        1b3788:	e1a00004 	mov	r0, r4
        1b378c:	eb685f8d 	bl	1bcb5c8 <TView::$RemoveChildView(TView *)>
        1b3790:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b3794:	e1a02009 	mov	r2, r9
        1b3798:	e1a01004 	mov	r1, r4
        1b379c:	e3a0003d 	mov	r0, #61	; 0x3d
        1b37a0:	eb63cae6 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
        1b37a4:	eb683a68 	bl	1bc214c <$AllocateRefHandle(long)>
        1b37a8:	e58d0000 	str	r0, [sp]
        1b37ac:	e28d1008 	add	r1, sp, #8	; 0x8
        1b37b0:	e1a0000d 	mov	r0, sp
        1b37b4:	eb63caea 	bl	1aa6364 <$CommandSetFrameParameter__FRC6RefVarT1>
        1b37b8:	e1a0100d 	mov	r1, sp
        1b37bc:	e5980000 	ldr	r0, [r8]
        1b37c0:	eb63a9cd 	bl	1a9defc <TApplication::$PostUndoCommand(RefVar const &)>
        1b37c4:	e59d0000 	ldr	r0, [sp]
        1b37c8:	eb683e7b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b37cc:	e28dd004 	add	sp, sp, #4	; 0x4
        1b37d0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1b37d4:	eb683e78 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b37d8:	e28dd008 	add	sp, sp, #8	; 0x8
        1b37dc:	e3a04001 	mov	r4, #1	; 0x1
        1b37e0:	ea000003 	b	1b37f4 <TRootView::RealDoCommand(RefVar const &)+0x604>
        1b37e4:	e1a01007 	mov	r1, r7
        1b37e8:	e1a00004 	mov	r0, r4
        1b37ec:	eb63adde 	bl	1a9ef6c <TView::$RealDoCommand(RefVar const &)>
        1b37f0:	e1a04000 	mov	r4, r0
        1b37f4:	e1a00004 	mov	r0, r4
        1b37f8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TRootView::AddClipboard(RefVar const &, RefVar const &)
 * Address: 001b37fc
 */
TRootView::AddClipboard(RefVar const &, RefVar const &) {
    /*
        1b37fc:	e1a0c00d 	mov	ip, sp
        1b3800:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1b3804:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b3808:	e1a05001 	mov	r5, r1
        1b380c:	e1a04002 	mov	r4, r2
        1b3810:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b3814:	e1a01000 	mov	r1, r0
        1b3818:	e3a02302 	mov	r2, #134217728	; 0x8000000
        1b381c:	e3a0003d 	mov	r0, #61	; 0x3d
        1b3820:	eb63cac6 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
        1b3824:	eb683a48 	bl	1bc214c <$AllocateRefHandle(long)>
        1b3828:	e1a01005 	mov	r1, r5
        1b382c:	e58d0000 	str	r0, [sp]
        1b3830:	e1a0000d 	mov	r0, sp
        1b3834:	eb63caca 	bl	1aa6364 <$CommandSetFrameParameter__FRC6RefVarT1>
        1b3838:	e59f502c 	ldr	r5, [pc, #2c]	; 1b386c <TRootView::AddClipboard(RefVar const &, RefVar const &)+0x70>	; fField2
        1b383c:	e1a0100d 	mov	r1, sp
        1b3840:	e5950000 	ldr	r0, [r5]
        1b3844:	eb6373fb 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
        1b3848:	e1a01004 	mov	r1, r4
        1b384c:	e1a0000d 	mov	r0, sp
        1b3850:	eb63cac3 	bl	1aa6364 <$CommandSetFrameParameter__FRC6RefVarT1>
        1b3854:	e1a0100d 	mov	r1, sp
        1b3858:	e5950000 	ldr	r0, [r5]
        1b385c:	eb6373f5 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
        1b3860:	e59d0000 	ldr	r0, [sp]
        1b3864:	eb683e54 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b3868:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1b386c:	0c1054ac 	ldceq	4, cr5, [r0], -#688
    */
}

/**
 * Symbol: TRootView::RemoveClipboard(void)
 * Address: 001b3870
 */
TRootView::RemoveClipboard(void) {
    /*
        1b3870:	e1a0c00d 	mov	ip, sp
        1b3874:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1b3878:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b387c:	e1a04000 	mov	r4, r0
        1b3880:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b3884:	e2800058 	add	r0, r0, #88	; 0x58
        1b3888:	e1a05000 	mov	r5, r0
        1b388c:	e5900000 	ldr	r0, [r0]
        1b3890:	e5900000 	ldr	r0, [r0]
        1b3894:	e59f611c 	ldr	r6, [pc, #11c]	; 1b39b8 <TRootView::RemoveClipboard(void)+0x148>
        1b3898:	e3a0803f 	mov	r8, #63	; 0x3f
        1b389c:	e3a07000 	mov	r7, #0	; 0x0
        1b38a0:	e3300002 	teq	r0, #2	; 0x2
        1b38a4:	0a00001d 	beq	1b3920 <TRootView::RemoveClipboard(void)+0xb0>
        1b38a8:	eb68467f 	bl	1bc52ac <$Length(long)>
        1b38ac:	e3500000 	cmp	r0, #0	; 0x0
        1b38b0:	da00001a 	ble	1b3920 <TRootView::RemoveClipboard(void)+0xb0>
        1b38b4:	e5950000 	ldr	r0, [r5]
        1b38b8:	e5900000 	ldr	r0, [r0]
        1b38bc:	e1a01007 	mov	r1, r7
        1b38c0:	eb684263 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1b38c4:	eb683a20 	bl	1bc214c <$AllocateRefHandle(long)>
        1b38c8:	e58d0000 	str	r0, [sp]
        1b38cc:	e1a0000d 	mov	r0, sp
        1b38d0:	eb685b21 	bl	1bca55c <$GetView(RefVar const &)>
        1b38d4:	e1a05000 	mov	r5, r0
        1b38d8:	e59d0000 	ldr	r0, [sp]
        1b38dc:	eb683e36 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b38e0:	e3350000 	teq	r5, #0	; 0x0
        1b38e4:	0a00000d 	beq	1b3920 <TRootView::RemoveClipboard(void)+0xb0>
        1b38e8:	e5b52004 	ldr	r2, [r5, #4]!	; fField4
        1b38ec:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b38f0:	e1a01004 	mov	r1, r4
        1b38f4:	e1a00008 	mov	r0, r8
        1b38f8:	e5965000 	ldr	r5, [r6]
        1b38fc:	eb63ca8f 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
        1b3900:	eb683a11 	bl	1bc214c <$AllocateRefHandle(long)>
        1b3904:	e58d0000 	str	r0, [sp]
        1b3908:	e1a0100d 	mov	r1, sp
        1b390c:	e1a00005 	mov	r0, r5
        1b3910:	eb6373c8 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
        1b3914:	e59d0000 	ldr	r0, [sp]
        1b3918:	eb683e27 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b391c:	e28dd004 	add	sp, sp, #4	; 0x4
        1b3920:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b3924:	e2840054 	add	r0, r4, #84	; 0x54
        1b3928:	e1a05000 	mov	r5, r0
        1b392c:	e5900000 	ldr	r0, [r0]
        1b3930:	e5900000 	ldr	r0, [r0]
        1b3934:	e3300002 	teq	r0, #2	; 0x2
        1b3938:	0a00001d 	beq	1b39b4 <TRootView::RemoveClipboard(void)+0x144>
        1b393c:	eb68465a 	bl	1bc52ac <$Length(long)>
        1b3940:	e3500000 	cmp	r0, #0	; 0x0
        1b3944:	da00001a 	ble	1b39b4 <TRootView::RemoveClipboard(void)+0x144>
        1b3948:	e5950000 	ldr	r0, [r5]
        1b394c:	e5900000 	ldr	r0, [r0]
        1b3950:	e1a01007 	mov	r1, r7
        1b3954:	eb68423e 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1b3958:	eb6839fb 	bl	1bc214c <$AllocateRefHandle(long)>
        1b395c:	e58d0000 	str	r0, [sp]
        1b3960:	e1a0000d 	mov	r0, sp
        1b3964:	eb685afc 	bl	1bca55c <$GetView(RefVar const &)>
        1b3968:	e1a05000 	mov	r5, r0
        1b396c:	e59d0000 	ldr	r0, [sp]
        1b3970:	eb683e11 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b3974:	e3350000 	teq	r5, #0	; 0x0
        1b3978:	0a00000d 	beq	1b39b4 <TRootView::RemoveClipboard(void)+0x144>
        1b397c:	e5b52004 	ldr	r2, [r5, #4]!	; fField4
        1b3980:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b3984:	e1a01004 	mov	r1, r4
        1b3988:	e1a00008 	mov	r0, r8
        1b398c:	e5965000 	ldr	r5, [r6]
        1b3990:	eb63ca6a 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
        1b3994:	eb6839ec 	bl	1bc214c <$AllocateRefHandle(long)>
        1b3998:	e58d0000 	str	r0, [sp]
        1b399c:	e1a0100d 	mov	r1, sp
        1b39a0:	e1a00005 	mov	r0, r5
        1b39a4:	eb6373a3 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
        1b39a8:	e59d0000 	ldr	r0, [sp]
        1b39ac:	eb683e02 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b39b0:	e28dd004 	add	sp, sp, #4	; 0x4
        1b39b4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1b39b8:	0c1054ac 	ldceq	4, cr5, [r0], -#688
    */
}

/**
 * Symbol: TRootView::SetHilitedView(TView *)
 * Address: 001b39e0
 */
TRootView::SetHilitedView(TView *) {
    /*
        1b39e0:	e1a0c00d 	mov	ip, sp
        1b39e4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1b39e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b39ec:	e1a05000 	mov	r5, r0
        1b39f0:	e1a04001 	mov	r4, r1
        1b39f4:	e5901030 	ldr	r1, [r0, #48]	; fField48
        1b39f8:	e1310004 	teq	r1, r4
        1b39fc:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        1b3a00:	e3310000 	teq	r1, #0	; 0x0
        1b3a04:	0a00000d 	beq	1b3a40 <TRootView::SetHilitedView(TView *)+0x60>
        1b3a08:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b3a0c:	e59f0034 	ldr	r0, [pc, #34]	; 1b3a48 <TRootView::SetHilitedView(TView *)+0x68>
        1b3a10:	e3a02302 	mov	r2, #134217728	; 0x8000000
        1b3a14:	e5906000 	ldr	r6, [r0]
        1b3a18:	e3a00030 	mov	r0, #48	; 0x30
        1b3a1c:	eb63ca47 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
        1b3a20:	eb6839c9 	bl	1bc214c <$AllocateRefHandle(long)>
        1b3a24:	e58d0000 	str	r0, [sp]
        1b3a28:	e1a0100d 	mov	r1, sp
        1b3a2c:	e1a00006 	mov	r0, r6
        1b3a30:	eb637380 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
        1b3a34:	e59d0000 	ldr	r0, [sp]
        1b3a38:	eb683ddf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b3a3c:	e28dd004 	add	sp, sp, #4	; 0x4
        1b3a40:	e5a54030 	str	r4, [r5, #48]!	; fField48
        1b3a44:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1b3a48:	0c1054ac 	ldceq	4, cr5, [r0], -#688
    */
}

/**
 * Symbol: TRootView::SetKeyViewSelection(TView *, RefVar const &, unsigned char)
 * Address: 001b3ae4
 */
TRootView::SetKeyViewSelection(TView *, RefVar const &, unsigned char) {
    /*
        1b3ae4:	e1a0c00d 	mov	ip, sp
        1b3ae8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1b3aec:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b3af0:	e1a04000 	mov	r4, r0
        1b3af4:	e1a05001 	mov	r5, r1
        1b3af8:	e1a06002 	mov	r6, r2
        1b3afc:	e20310ff 	and	r1, r3, #255	; 0xff
        1b3b00:	e5900068 	ldr	r0, [r0, #104]	; fField104
        1b3b04:	e3300000 	teq	r0, #0	; 0x0
        1b3b08:	15902008 	ldrne	r2, [r0, #8]	; fField8
        1b3b0c:	12022209 	andne	r2, r2, #-1879048192	; 0x90000000
        1b3b10:	13320209 	teqne	r2, #-1879048192	; 0x90000000
        1b3b14:	03a02001 	moveq	r2, #1	; 0x1
        1b3b18:	13a02000 	movne	r2, #0	; 0x0
        1b3b1c:	e20220ff 	and	r2, r2, #255	; 0xff
        1b3b20:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b3b24:	e3310000 	teq	r1, #0	; 0x0
        1b3b28:	0a00000e 	beq	1b3b68 <TRootView::SetKeyViewSelection(TView *, RefVar const &, unsigned char)+0x84>
        1b3b2c:	e3320000 	teq	r2, #0	; 0x0
        1b3b30:	1a00000c 	bne	1b3b68 <TRootView::SetKeyViewSelection(TView *, RefVar const &, unsigned char)+0x84>
        1b3b34:	e1300005 	teq	r0, r5
        1b3b38:	0a00000a 	beq	1b3b68 <TRootView::SetKeyViewSelection(TView *, RefVar const &, unsigned char)+0x84>
        1b3b3c:	e5901000 	ldr	r1, [r0]
        1b3b40:	e1a0e00f 	mov	lr, pc
        1b3b44:	e281f064 	add	pc, r1, #100	; 0x64
        1b3b48:	eb68397f 	bl	1bc214c <$AllocateRefHandle(long)>
        1b3b4c:	e58d0000 	str	r0, [sp]
        1b3b50:	e1a0200d 	mov	r2, sp
        1b3b54:	e5941068 	ldr	r1, [r4, #104]	; fField104
        1b3b58:	e1a00004 	mov	r0, r4
        1b3b5c:	eb64c9f0 	bl	1ae6324 <TRootView::$PushSelection(TView *, RefVar const &)>
        1b3b60:	e59d0000 	ldr	r0, [sp]
        1b3b64:	eb683d94 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b3b68:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b3b6c:	e3a00000 	mov	r0, #0	; 0x0
        1b3b70:	e58d0004 	str	r0, [sp, #4]	; fField4
        1b3b74:	e3350000 	teq	r5, #0	; 0x0
        1b3b78:	e58d0000 	str	r0, [sp]
        1b3b7c:	0a000006 	beq	1b3b9c <TRootView::SetKeyViewSelection(TView *, RefVar const &, unsigned char)+0xb8>
        1b3b80:	e1a0300d 	mov	r3, sp
        1b3b84:	e28d2004 	add	r2, sp, #4	; 0x4
        1b3b88:	e1a01006 	mov	r1, r6
        1b3b8c:	e1a00005 	mov	r0, r5
        1b3b90:	e595c000 	ldr	ip, [r5]
        1b3b94:	e1a0e00f 	mov	lr, pc
        1b3b98:	e28cf060 	add	pc, ip, #96	; 0x60
        1b3b9c:	e1a01000 	mov	r1, r0
        1b3ba0:	e1a00004 	mov	r0, r4
        1b3ba4:	e59d2004 	ldr	r2, [sp, #4]	; fField4
        1b3ba8:	e59d3000 	ldr	r3, [sp]
        1b3bac:	eb64c9d9 	bl	1ae6318 <TRootView::$CommonSetKeyView(TView *, long, long)>
        1b3bb0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TRootView::SetKeyView(TView *, long, long, unsigned char)
 * Address: 001b3bb4
 */
TRootView::SetKeyView(TView *, long, long, unsigned char) {
    /*
        1b3bb4:	e1a0c00d 	mov	ip, sp
        1b3bb8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1b3bbc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1b3bc0:	e24cb014 	sub	fp, ip, #20	; 0x14
        1b3bc4:	e59b0014 	ldr	r0, [fp, #20]
        1b3bc8:	e20050ff 	and	r5, r0, #255	; 0xff
        1b3bcc:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        1b3bd0:	e5900068 	ldr	r0, [r0, #104]	; fField104
        1b3bd4:	e3300000 	teq	r0, #0	; 0x0
        1b3bd8:	15901008 	ldrne	r1, [r0, #8]	; fField8
        1b3bdc:	12011209 	andne	r1, r1, #-1879048192	; 0x90000000
        1b3be0:	13310209 	teqne	r1, #-1879048192	; 0x90000000
        1b3be4:	03a01001 	moveq	r1, #1	; 0x1
        1b3be8:	13a01000 	movne	r1, #0	; 0x0
        1b3bec:	e21140ff 	ands	r4, r1, #255	; 0xff
        1b3bf0:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b3bf4:	1a00000d 	bne	1b3c30 <TRootView::SetKeyView(TView *, long, long, unsigned char)+0x7c>
        1b3bf8:	e59b1008 	ldr	r1, [fp, #8]	; fField8
        1b3bfc:	e1300001 	teq	r0, r1
        1b3c00:	0a00000a 	beq	1b3c30 <TRootView::SetKeyView(TView *, long, long, unsigned char)+0x7c>
        1b3c04:	e5901000 	ldr	r1, [r0]
        1b3c08:	e1a0e00f 	mov	lr, pc
        1b3c0c:	e281f064 	add	pc, r1, #100	; 0x64
        1b3c10:	eb68394d 	bl	1bc214c <$AllocateRefHandle(long)>
        1b3c14:	e58d0000 	str	r0, [sp]
        1b3c18:	e1a0200d 	mov	r2, sp
        1b3c1c:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        1b3c20:	e5901068 	ldr	r1, [r0, #104]	; fField104
        1b3c24:	eb64c9be 	bl	1ae6324 <TRootView::$PushSelection(TView *, RefVar const &)>
        1b3c28:	e59d0000 	ldr	r0, [sp]
        1b3c2c:	eb683d62 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b3c30:	e59b0008 	ldr	r0, [fp, #8]	; fField8
        1b3c34:	e3300000 	teq	r0, #0	; 0x0
        1b3c38:	0a000014 	beq	1b3c90 <TRootView::SetKeyView(TView *, long, long, unsigned char)+0xdc>
        1b3c3c:	e3350000 	teq	r5, #0	; 0x0
        1b3c40:	0a00000b 	beq	1b3c74 <TRootView::SetKeyView(TView *, long, long, unsigned char)+0xc0>
        1b3c44:	e3340000 	teq	r4, #0	; 0x0
        1b3c48:	1a000009 	bne	1b3c74 <TRootView::SetKeyView(TView *, long, long, unsigned char)+0xc0>
        1b3c4c:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        1b3c50:	e5900068 	ldr	r0, [r0, #104]	; fField104
        1b3c54:	e3a01051 	mov	r1, #81	; 0x51
        1b3c58:	e5902000 	ldr	r2, [r0]
        1b3c5c:	e1a0e00f 	mov	lr, pc
        1b3c60:	e282f004 	add	pc, r2, #4	; 0x4
        1b3c64:	e3300000 	teq	r0, #0	; 0x0
        1b3c68:	159b0004 	ldrne	r0, [fp, #4]	; fField4
        1b3c6c:	15900068 	ldrne	r0, [r0, #104]	; fField104
        1b3c70:	1b646ed8 	blne	1acf7d8 <TParagraphView::$FlushWordAtCaret(void)>
        1b3c74:	e59b3008 	ldr	r3, [fp, #8]	; fField8
        1b3c78:	e28b2010 	add	r2, fp, #16	; 0x10
        1b3c7c:	e28b100c 	add	r1, fp, #12	; 0xc
        1b3c80:	e1a00003 	mov	r0, r3
        1b3c84:	e5933000 	ldr	r3, [r3]
        1b3c88:	e1a0e00f 	mov	lr, pc
        1b3c8c:	e283f05c 	add	pc, r3, #92	; 0x5c
        1b3c90:	e99b000f 	ldmib	fp, {r0, r1, r2, r3}
        1b3c94:	eb64c99f 	bl	1ae6318 <TRootView::$CommonSetKeyView(TView *, long, long)>
        1b3c98:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TRootView::CommonSetKeyView(TView *, long, long)
 * Address: 001b3c9c
 */
TRootView::CommonSetKeyView(TView *, long, long) {
    /*
        1b3c9c:	e1a0c00d 	mov	ip, sp
        1b3ca0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1b3ca4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b3ca8:	e1a05000 	mov	r5, r0
        1b3cac:	e1a04001 	mov	r4, r1
        1b3cb0:	e1a0a002 	mov	sl, r2
        1b3cb4:	e1a07003 	mov	r7, r3
        1b3cb8:	e24dd010 	sub	sp, sp, #16	; 0x10
        1b3cbc:	e5906068 	ldr	r6, [r0, #104]	; fField104
        1b3cc0:	e2800068 	add	r0, r0, #104	; 0x68
        1b3cc4:	e880000e 	stmia	r0, {r1, r2, r3}
        1b3cc8:	e2400068 	sub	r0, r0, #104	; 0x68
        1b3ccc:	e1310006 	teq	r1, r6
        1b3cd0:	0a000052 	beq	1b3e20 <TRootView::CommonSetKeyView(TView *, long, long)+0x184>
        1b3cd4:	e3a09000 	mov	r9, #0	; 0x0
        1b3cd8:	e5d50080 	ldrb	r0, [r5, #128]	; fField128
        1b3cdc:	e3300000 	teq	r0, #0	; 0x0
        1b3ce0:	1a000047 	bne	1b3e04 <TRootView::CommonSetKeyView(TView *, long, long)+0x168>
        1b3ce4:	e3360000 	teq	r6, #0	; 0x0
        1b3ce8:	15960008 	ldrne	r0, [r6, #8]	; fField8
        1b3cec:	12000209 	andne	r0, r0, #-1879048192	; 0x90000000
        1b3cf0:	13300209 	teqne	r0, #-1879048192	; 0x90000000
        1b3cf4:	0a000042 	beq	1b3e04 <TRootView::CommonSetKeyView(TView *, long, long)+0x168>
        1b3cf8:	e3340000 	teq	r4, #0	; 0x0
        1b3cfc:	0a00003b 	beq	1b3df0 <TRootView::CommonSetKeyView(TView *, long, long)+0x154>
        1b3d00:	e1a00004 	mov	r0, r4
        1b3d04:	e3a01051 	mov	r1, #81	; 0x51
        1b3d08:	e5942000 	ldr	r2, [r4]
        1b3d0c:	e1a0e00f 	mov	lr, pc
        1b3d10:	e282f004 	add	pc, r2, #4	; 0x4
        1b3d14:	e3300000 	teq	r0, #0	; 0x0
        1b3d18:	0a000016 	beq	1b3d78 <TRootView::CommonSetKeyView(TView *, long, long)+0xdc>
        1b3d1c:	e1a00006 	mov	r0, r6
        1b3d20:	e3a01051 	mov	r1, #81	; 0x51
        1b3d24:	e5962000 	ldr	r2, [r6]
        1b3d28:	e1a0e00f 	mov	lr, pc
        1b3d2c:	e282f004 	add	pc, r2, #4	; 0x4
        1b3d30:	e3300000 	teq	r0, #0	; 0x0
        1b3d34:	0a00000f 	beq	1b3d78 <TRootView::CommonSetKeyView(TView *, long, long)+0xdc>
        1b3d38:	e1a00006 	mov	r0, r6
        1b3d3c:	e5961000 	ldr	r1, [r6]
        1b3d40:	e1a0e00f 	mov	lr, pc
        1b3d44:	e281fd05 	add	pc, r1, #320	; 0x140
        1b3d48:	e1a08000 	mov	r8, r0
        1b3d4c:	e1a00004 	mov	r0, r4
        1b3d50:	e5941000 	ldr	r1, [r4]
        1b3d54:	e1a0e00f 	mov	lr, pc
        1b3d58:	e281fd05 	add	pc, r1, #320	; 0x140
        1b3d5c:	e3380000 	teq	r8, #0	; 0x0
        1b3d60:	13300000 	teqne	r0, #0	; 0x0
        1b3d64:	0a000001 	beq	1b3d70 <TRootView::CommonSetKeyView(TView *, long, long)+0xd4>
        1b3d68:	e1380000 	teq	r8, r0
        1b3d6c:	03a09001 	moveq	r9, #1	; 0x1
        1b3d70:	e3590000 	cmp	r9, #0	; 0x0
        1b3d74:	1a00000d 	bne	1b3db0 <TRootView::CommonSetKeyView(TView *, long, long)+0x114>
        1b3d78:	e1a00004 	mov	r0, r4
        1b3d7c:	e3a01051 	mov	r1, #81	; 0x51
        1b3d80:	e5942000 	ldr	r2, [r4]
        1b3d84:	e1a0e00f 	mov	lr, pc
        1b3d88:	e282f004 	add	pc, r2, #4	; 0x4
        1b3d8c:	e3300000 	teq	r0, #0	; 0x0
        1b3d90:	0a000007 	beq	1b3db4 <TRootView::CommonSetKeyView(TView *, long, long)+0x118>
        1b3d94:	e1a00004 	mov	r0, r4
        1b3d98:	e5941000 	ldr	r1, [r4]
        1b3d9c:	e1a0e00f 	mov	lr, pc
        1b3da0:	e281fd05 	add	pc, r1, #320	; 0x140
        1b3da4:	e1300006 	teq	r0, r6
        1b3da8:	0a000015 	beq	1b3e04 <TRootView::CommonSetKeyView(TView *, long, long)+0x168>
        1b3dac:	ea000000 	b	1b3db4 <TRootView::CommonSetKeyView(TView *, long, long)+0x118>
        1b3db0:	1a00000d 	bne	1b3dec <TRootView::CommonSetKeyView(TView *, long, long)+0x150>
        1b3db4:	e1a00006 	mov	r0, r6
        1b3db8:	e3a01051 	mov	r1, #81	; 0x51
        1b3dbc:	e5962000 	ldr	r2, [r6]
        1b3dc0:	e1a0e00f 	mov	lr, pc
        1b3dc4:	e282f004 	add	pc, r2, #4	; 0x4
        1b3dc8:	e3300000 	teq	r0, #0	; 0x0
        1b3dcc:	0a000007 	beq	1b3df0 <TRootView::CommonSetKeyView(TView *, long, long)+0x154>
        1b3dd0:	e1a00006 	mov	r0, r6
        1b3dd4:	e5961000 	ldr	r1, [r6]
        1b3dd8:	e1a0e00f 	mov	lr, pc
        1b3ddc:	e281fd05 	add	pc, r1, #320	; 0x140
        1b3de0:	e1300004 	teq	r0, r4
        1b3de4:	0a000006 	beq	1b3e04 <TRootView::CommonSetKeyView(TView *, long, long)+0x168>
        1b3de8:	ea000000 	b	1b3df0 <TRootView::CommonSetKeyView(TView *, long, long)+0x154>
        1b3dec:	1a000004 	bne	1b3e04 <TRootView::CommonSetKeyView(TView *, long, long)+0x168>
        1b3df0:	e1a00006 	mov	r0, r6
        1b3df4:	e3a01000 	mov	r1, #0	; 0x0
        1b3df8:	e5962000 	ldr	r2, [r6]
        1b3dfc:	e1a0e00f 	mov	lr, pc
        1b3e00:	e282f068 	add	pc, r2, #104	; 0x68
        1b3e04:	e3340000 	teq	r4, #0	; 0x0
        1b3e08:	0a000004 	beq	1b3e20 <TRootView::CommonSetKeyView(TView *, long, long)+0x184>
        1b3e0c:	e1a00004 	mov	r0, r4
        1b3e10:	e3a01001 	mov	r1, #1	; 0x1
        1b3e14:	e5942000 	ldr	r2, [r4]
        1b3e18:	e1a0e00f 	mov	lr, pc
        1b3e1c:	e282f068 	add	pc, r2, #104	; 0x68
        1b3e20:	e3340000 	teq	r4, #0	; 0x0
        1b3e24:	13570000 	cmpne	r7, #0	; 0x0
        1b3e28:	03a00000 	moveq	r0, #0	; 0x0
        1b3e2c:	0a00000d 	beq	1b3e68 <TRootView::CommonSetKeyView(TView *, long, long)+0x1cc>
        1b3e30:	da00000f 	ble	1b3e74 <TRootView::CommonSetKeyView(TView *, long, long)+0x1d8>
        1b3e34:	e1a00004 	mov	r0, r4
        1b3e38:	e3a01051 	mov	r1, #81	; 0x51
        1b3e3c:	e5942000 	ldr	r2, [r4]
        1b3e40:	e1a0e00f 	mov	lr, pc
        1b3e44:	e282f004 	add	pc, r2, #4	; 0x4
        1b3e48:	e3300000 	teq	r0, #0	; 0x0
        1b3e4c:	0a000007 	beq	1b3e70 <TRootView::CommonSetKeyView(TView *, long, long)+0x1d4>
        1b3e50:	e1a00004 	mov	r0, r4
        1b3e54:	e5941000 	ldr	r1, [r4]
        1b3e58:	e1a0e00f 	mov	lr, pc
        1b3e5c:	e281fd05 	add	pc, r1, #320	; 0x140
        1b3e60:	e3300000 	teq	r0, #0	; 0x0
        1b3e64:	0a000001 	beq	1b3e70 <TRootView::CommonSetKeyView(TView *, long, long)+0x1d4>
        1b3e68:	e5850030 	str	r0, [r5, #48]	; fField48
        1b3e6c:	ea000000 	b	1b3e74 <TRootView::CommonSetKeyView(TView *, long, long)+0x1d8>
        1b3e70:	e5854030 	str	r4, [r5, #48]	; fField48
        1b3e74:	e3340000 	teq	r4, #0	; 0x0
        1b3e78:	0a00002f 	beq	1b3f3c <TRootView::CommonSetKeyView(TView *, long, long)+0x2a0>
        1b3e7c:	e1a00005 	mov	r0, r5
        1b3e80:	eb647aa1 	bl	1ad290c <TRootView::$KeyboardConnected(void)>
        1b3e84:	e3300000 	teq	r0, #0	; 0x0
        1b3e88:	03370000 	teqeq	r7, #0	; 0x0
        1b3e8c:	1a00002a 	bne	1b3f3c <TRootView::CommonSetKeyView(TView *, long, long)+0x2a0>
        1b3e90:	e5940008 	ldr	r0, [r4, #8]	; fField8
        1b3e94:	e3100502 	tst	r0, #8388608	; 0x800000
        1b3e98:	e1a00004 	mov	r0, r4
        1b3e9c:	e1a02004 	mov	r2, r4
        1b3ea0:	0a000016 	beq	1b3f00 <TRootView::CommonSetKeyView(TView *, long, long)+0x264>
        1b3ea4:	e3a0104d 	mov	r1, #77	; 0x4d
        1b3ea8:	e5922000 	ldr	r2, [r2]
        1b3eac:	e1a0e00f 	mov	lr, pc
        1b3eb0:	e282f004 	add	pc, r2, #4	; 0x4
        1b3eb4:	e3300000 	teq	r0, #0	; 0x0
        1b3eb8:	0a000006 	beq	1b3ed8 <TRootView::CommonSetKeyView(TView *, long, long)+0x23c>
        1b3ebc:	e3a01000 	mov	r1, #0	; 0x0
        1b3ec0:	e3a00038 	mov	r0, #56	; 0x38
        1b3ec4:	eb64768b 	bl	1ad18f8 <$KeyDown(unsigned long, unsigned char)>
        1b3ec8:	e3300000 	teq	r0, #0	; 0x0
        1b3ecc:	03a02000 	moveq	r2, #0	; 0x0
        1b3ed0:	03a01001 	moveq	r1, #1	; 0x1
        1b3ed4:	0a000016 	beq	1b3f34 <TRootView::CommonSetKeyView(TView *, long, long)+0x298>
        1b3ed8:	e1a00004 	mov	r0, r4
        1b3edc:	e3a01051 	mov	r1, #81	; 0x51
        1b3ee0:	e5942000 	ldr	r2, [r4]
        1b3ee4:	e1a0e00f 	mov	lr, pc
        1b3ee8:	e282f004 	add	pc, r2, #4	; 0x4
        1b3eec:	e3300000 	teq	r0, #0	; 0x0
        1b3ef0:	11a0100a 	movne	r1, sl
        1b3ef4:	11a00004 	movne	r0, r4
        1b3ef8:	1b646a04 	blne	1ace710 <$DoAutoShift(TParagraphView *, long)>
        1b3efc:	ea00000e 	b	1b3f3c <TRootView::CommonSetKeyView(TView *, long, long)+0x2a0>
        1b3f00:	e3a01051 	mov	r1, #81	; 0x51
        1b3f04:	e5922000 	ldr	r2, [r2]
        1b3f08:	e1a0e00f 	mov	lr, pc
        1b3f0c:	e282f004 	add	pc, r2, #4	; 0x4
        1b3f10:	e3300000 	teq	r0, #0	; 0x0
        1b3f14:	0a000008 	beq	1b3f3c <TRootView::CommonSetKeyView(TView *, long, long)+0x2a0>
        1b3f18:	e3a01000 	mov	r1, #0	; 0x0
        1b3f1c:	e3a00038 	mov	r0, #56	; 0x38
        1b3f20:	eb647674 	bl	1ad18f8 <$KeyDown(unsigned long, unsigned char)>
        1b3f24:	e3300000 	teq	r0, #0	; 0x0
        1b3f28:	0a000003 	beq	1b3f3c <TRootView::CommonSetKeyView(TView *, long, long)+0x2a0>
        1b3f2c:	e3a02000 	mov	r2, #0	; 0x0
        1b3f30:	e3a01000 	mov	r1, #0	; 0x0
        1b3f34:	e3a00038 	mov	r0, #56	; 0x38
        1b3f38:	eb64766f 	bl	1ad18fc <$KeyIn(unsigned long, unsigned char, TView *)>
        1b3f3c:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b3f40:	e2850060 	add	r0, r5, #96	; 0x60
        1b3f44:	e1a06000 	mov	r6, r0
        1b3f48:	e5900000 	ldr	r0, [r0]
        1b3f4c:	e5900000 	ldr	r0, [r0]
        1b3f50:	eb6844d5 	bl	1bc52ac <$Length(long)>
        1b3f54:	e0800fa0 	add	r0, r0, r0, lsr #31
        1b3f58:	e1a080c0 	mov	r8, r0, asr #1
        1b3f5c:	e3a00002 	mov	r0, #2	; 0x2
        1b3f60:	eb683879 	bl	1bc214c <$AllocateRefHandle(long)>
        1b3f64:	e3a05000 	mov	r5, #0	; 0x0
        1b3f68:	e3580000 	cmp	r8, #0	; 0x0
        1b3f6c:	e58d0000 	str	r0, [sp]
        1b3f70:	da000049 	ble	1b409c <TRootView::CommonSetKeyView(TView *, long, long)+0x400>
        1b3f74:	e59f912c 	ldr	r9, [pc, #12c]	; 1b40a8 <TRootView::CommonSetKeyView(TView *, long, long)+0x40c>
        1b3f78:	e2841024 	add	r1, r4, #36	; 0x24
        1b3f7c:	e1a0010a 	mov	r0, sl, lsl #2
        1b3f80:	e58d000c 	str	r0, [sp, #12]
        1b3f84:	e58d1010 	str	r1, [sp, #16]
        1b3f88:	e1a00107 	mov	r0, r7, lsl #2
        1b3f8c:	e58d0008 	str	r0, [sp, #8]	; fField8
        1b3f90:	e59f1114 	ldr	r1, [pc, #114]	; 1b40ac <TRootView::CommonSetKeyView(TView *, long, long)+0x410>
        1b3f94:	e58d1004 	str	r1, [sp, #4]	; fField4
        1b3f98:	e3a0a001 	mov	sl, #1	; 0x1
        1b3f9c:	e08a1085 	add	r1, sl, r5, lsl #1
        1b3fa0:	e5960000 	ldr	r0, [r6]
        1b3fa4:	e5900000 	ldr	r0, [r0]
        1b3fa8:	eb6840a9 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1b3fac:	e3100003 	tst	r0, #3	; 0x3
        1b3fb0:	01a00140 	moveq	r0, r0, asr #2
        1b3fb4:	0a000000 	beq	1b3fbc <TRootView::CommonSetKeyView(TView *, long, long)+0x320>
        1b3fb8:	eb683857 	bl	1bc211c <$_RINTError(long)>
        1b3fbc:	e3100002 	tst	r0, #2	; 0x2
        1b3fc0:	0a000032 	beq	1b4090 <TRootView::CommonSetKeyView(TView *, long, long)+0x3f4>
        1b3fc4:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b3fc8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1b3fcc:	e5900000 	ldr	r0, [r0]
        1b3fd0:	e3300002 	teq	r0, #2	; 0x2
        1b3fd4:	1a00001f 	bne	1b4058 <TRootView::CommonSetKeyView(TView *, long, long)+0x3bc>
        1b3fd8:	e1a00009 	mov	r0, r9
        1b3fdc:	e3a01003 	mov	r1, #3	; 0x3
        1b3fe0:	eb683854 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        1b3fe4:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        1b3fe8:	e3340000 	teq	r4, #0	; 0x0
        1b3fec:	e5810000 	str	r0, [r1]
        1b3ff0:	0a000018 	beq	1b4058 <TRootView::CommonSetKeyView(TView *, long, long)+0x3bc>
        1b3ff4:	e59d1014 	ldr	r1, [sp, #20]
        1b3ff8:	e5911000 	ldr	r1, [r1]
        1b3ffc:	e5912000 	ldr	r2, [r1]
        1b4000:	e3a01000 	mov	r1, #0	; 0x0
        1b4004:	eb6848d3 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        1b4008:	e59d0010 	ldr	r0, [sp, #16]
        1b400c:	eb68384e 	bl	1bc214c <$AllocateRefHandle(long)>
        1b4010:	e1a07000 	mov	r7, r0
        1b4014:	e5902000 	ldr	r2, [r0]
        1b4018:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1b401c:	e5900000 	ldr	r0, [r0]
        1b4020:	e1a0100a 	mov	r1, sl
        1b4024:	eb6848cb 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        1b4028:	e1a00007 	mov	r0, r7
        1b402c:	eb683c62 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b4030:	e59d000c 	ldr	r0, [sp, #12]
        1b4034:	eb683844 	bl	1bc214c <$AllocateRefHandle(long)>
        1b4038:	e1a07000 	mov	r7, r0
        1b403c:	e5902000 	ldr	r2, [r0]
        1b4040:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1b4044:	e5900000 	ldr	r0, [r0]
        1b4048:	e3a01002 	mov	r1, #2	; 0x2
        1b404c:	eb6848c1 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        1b4050:	e1a00007 	mov	r0, r7
        1b4054:	eb683c58 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b4058:	e1a01085 	mov	r1, r5, lsl #1
        1b405c:	e5960000 	ldr	r0, [r6]
        1b4060:	e5900000 	ldr	r0, [r0]
        1b4064:	eb68407a 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1b4068:	eb683837 	bl	1bc214c <$AllocateRefHandle(long)>
        1b406c:	e58d0000 	str	r0, [sp]
        1b4070:	e1a0000d 	mov	r0, sp
        1b4074:	e28d2004 	add	r2, sp, #4	; 0x4
        1b4078:	e3a03000 	mov	r3, #0	; 0x0
        1b407c:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        1b4080:	eb683c57 	bl	1bc31e4 <$DoProtoMessageIfDefined__FRC6RefVarN21Pl>
        1b4084:	e59d0000 	ldr	r0, [sp]
        1b4088:	eb683c4b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b408c:	e28dd004 	add	sp, sp, #4	; 0x4
        1b4090:	e2855001 	add	r5, r5, #1	; 0x1
        1b4094:	e1550008 	cmp	r5, r8
        1b4098:	baffffbe 	blt	1b3f98 <TRootView::CommonSetKeyView(TView *, long, long)+0x2fc>
        1b409c:	e59d0000 	ldr	r0, [sp]
        1b40a0:	eb683c45 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b40a4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1b40a8:	00681f10 	rsbeq	r1, r8, r0, lsl pc
        1b40ac:	00684f18 	rsbeq	r4, r8, r8, lsl pc
    */
}

/**
 * Symbol: TRootView::CleanSelectionStack(TView *, unsigned char)
 * Address: 001b40b0
 */
TRootView::CleanSelectionStack(TView *, unsigned char) {
    /*
        1b40b0:	e1a0c00d 	mov	ip, sp
        1b40b4:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1b40b8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b40bc:	e1a07000 	mov	r7, r0
        1b40c0:	e1a04001 	mov	r4, r1
        1b40c4:	e20280ff 	and	r8, r2, #255	; 0xff
        1b40c8:	e3a05000 	mov	r5, #0	; 0x0
        1b40cc:	e3a00002 	mov	r0, #2	; 0x2
        1b40d0:	eb68381d 	bl	1bc214c <$AllocateRefHandle(long)>
        1b40d4:	e1a06000 	mov	r6, r0
        1b40d8:	e3340000 	teq	r4, #0	; 0x0
        1b40dc:	0a000002 	beq	1b40ec <TRootView::CleanSelectionStack(TView *, unsigned char)+0x3c>
        1b40e0:	e5940024 	ldr	r0, [r4, #36]
        1b40e4:	e5900000 	ldr	r0, [r0]
        1b40e8:	e5860000 	str	r0, [r6]
        1b40ec:	e287007c 	add	r0, r7, #124	; 0x7c
        1b40f0:	e1a04000 	mov	r4, r0
        1b40f4:	e5900000 	ldr	r0, [r0]
        1b40f8:	e5900000 	ldr	r0, [r0]
        1b40fc:	eb68446a 	bl	1bc52ac <$Length(long)>
        1b4100:	e3500000 	cmp	r0, #0	; 0x0
        1b4104:	da000027 	ble	1b41a8 <TRootView::CleanSelectionStack(TView *, unsigned char)+0xf8>
        1b4108:	e59f9068 	ldr	r9, [pc, #68]	; 1b4178 <TRootView::CleanSelectionStack(TView *, unsigned char)+0xc8>
        1b410c:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b4110:	e5940000 	ldr	r0, [r4]
        1b4114:	e5900000 	ldr	r0, [r0]
        1b4118:	e1a01005 	mov	r1, r5
        1b411c:	eb68404c 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1b4120:	eb683809 	bl	1bc214c <$AllocateRefHandle(long)>
        1b4124:	e1a01009 	mov	r1, r9
        1b4128:	e58d0000 	str	r0, [sp]
        1b412c:	e1a0000d 	mov	r0, sp
        1b4130:	e3a02000 	mov	r2, #0	; 0x0
        1b4134:	eb68404b 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        1b4138:	eb683803 	bl	1bc214c <$AllocateRefHandle(long)>
        1b413c:	e1a07000 	mov	r7, r0
        1b4140:	e5900000 	ldr	r0, [r0]
        1b4144:	e3300002 	teq	r0, #2	; 0x2
        1b4148:	0a000005 	beq	1b4164 <TRootView::CleanSelectionStack(TView *, unsigned char)+0xb4>
        1b414c:	e5961000 	ldr	r1, [r6]
        1b4150:	e59d0000 	ldr	r0, [sp]
        1b4154:	e5900000 	ldr	r0, [r0]
        1b4158:	eb684034 	bl	1bc4230 <$EQRef__FlT1>
        1b415c:	e3300000 	teq	r0, #0	; 0x0
        1b4160:	0a000005 	beq	1b417c <TRootView::CleanSelectionStack(TView *, unsigned char)+0xcc>
        1b4164:	e1a00004 	mov	r0, r4
        1b4168:	e1a01005 	mov	r1, r5
        1b416c:	e3a02002 	mov	r2, #2	; 0x2
        1b4170:	eb6950b6 	bl	1c08450 <$ArrayRemoveCount__FRC6RefVarlT2>
        1b4174:	ea000001 	b	1b4180 <TRootView::CleanSelectionStack(TView *, unsigned char)+0xd0>
        1b4178:	00684f48 	rsbeq	r4, r8, r8, asr #30
        1b417c:	e2855002 	add	r5, r5, #2	; 0x2
        1b4180:	e1a00007 	mov	r0, r7
        1b4184:	eb683c0c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b4188:	e59d0000 	ldr	r0, [sp]
        1b418c:	eb683c0a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b4190:	e28dd004 	add	sp, sp, #4	; 0x4
        1b4194:	e5940000 	ldr	r0, [r4]
        1b4198:	e5900000 	ldr	r0, [r0]
        1b419c:	eb684442 	bl	1bc52ac <$Length(long)>
        1b41a0:	e1500005 	cmp	r0, r5
        1b41a4:	caffffd8 	bgt	1b410c <TRootView::CleanSelectionStack(TView *, unsigned char)+0x5c>
        1b41a8:	e3380000 	teq	r8, #0	; 0x0
        1b41ac:	0a000008 	beq	1b41d4 <TRootView::CleanSelectionStack(TView *, unsigned char)+0x124>
        1b41b0:	e5940000 	ldr	r0, [r4]
        1b41b4:	e5900000 	ldr	r0, [r0]
        1b41b8:	eb68443b 	bl	1bc52ac <$Length(long)>
        1b41bc:	e3500014 	cmp	r0, #20	; 0x14
        1b41c0:	ba000003 	blt	1b41d4 <TRootView::CleanSelectionStack(TView *, unsigned char)+0x124>
        1b41c4:	e1a00004 	mov	r0, r4
        1b41c8:	e3a0200a 	mov	r2, #10	; 0xa
        1b41cc:	e3a01000 	mov	r1, #0	; 0x0
        1b41d0:	eb69509e 	bl	1c08450 <$ArrayRemoveCount__FRC6RefVarlT2>
        1b41d4:	e1a00006 	mov	r0, r6
        1b41d8:	e91b6bf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
        1b41dc:	ea683bf6 	b	1bc31bc <$DisposeRefHandle(RefHandle *)>
    */
}

/**
 * Symbol: TRootView::GetSelectionStack(void)
 * Address: 001b41e0
 */
TRootView::GetSelectionStack(void) {
    /*
        1b41e0:	e590007c 	ldr	r0, [r0, #124]	; fField124
        1b41e4:	e5900000 	ldr	r0, [r0]
        1b41e8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRootView::FindRestorableKeyView(TView *, unsigned long *)
 * Address: 001b41fc
 */
TRootView::FindRestorableKeyView(TView *, unsigned long *) {
    /*
        1b41fc:	e1a0c00d 	mov	ip, sp
        1b4200:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1b4204:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b4208:	e1a05001 	mov	r5, r1
        1b420c:	e1a04002 	mov	r4, r2
        1b4210:	e280007c 	add	r0, r0, #124	; 0x7c
        1b4214:	e1a09000 	mov	r9, r0
        1b4218:	e5900000 	ldr	r0, [r0]
        1b421c:	e5900000 	ldr	r0, [r0]
        1b4220:	eb684421 	bl	1bc52ac <$Length(long)>
        1b4224:	e2506002 	subs	r6, r0, #2	; 0x2
        1b4228:	e3a0a000 	mov	sl, #0	; 0x0
        1b422c:	4a00001e 	bmi	1b42ac <TRootView::FindRestorableKeyView(TView *, unsigned long *)+0xb0>
        1b4230:	e59f8058 	ldr	r8, [pc, #58]	; 1b4290 <TRootView::FindRestorableKeyView(TView *, unsigned long *)+0x94>
        1b4234:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b4238:	e5990000 	ldr	r0, [r9]
        1b423c:	e5900000 	ldr	r0, [r0]
        1b4240:	e1a01006 	mov	r1, r6
        1b4244:	eb684002 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1b4248:	eb6837bf 	bl	1bc214c <$AllocateRefHandle(long)>
        1b424c:	e58d0000 	str	r0, [sp]
        1b4250:	e1a0000d 	mov	r0, sp
        1b4254:	eb6858c0 	bl	1bca55c <$GetView(RefVar const &)>
        1b4258:	e1a07000 	mov	r7, r0
        1b425c:	e59d0000 	ldr	r0, [sp]
        1b4260:	eb683bd5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b4264:	e3370000 	teq	r7, #0	; 0x0
        1b4268:	11a00007 	movne	r0, r7
        1b426c:	15981004 	ldrne	r1, [r8, #4]	; fField4
        1b4270:	11370001 	teqne	r7, r1
        1b4274:	0a000009 	beq	1b42a0 <TRootView::FindRestorableKeyView(TView *, unsigned long *)+0xa4>
        1b4278:	e1300005 	teq	r0, r5
        1b427c:	1a000004 	bne	1b4294 <TRootView::FindRestorableKeyView(TView *, unsigned long *)+0x98>
        1b4280:	e3340000 	teq	r4, #0	; 0x0
        1b4284:	15846000 	strne	r6, [r4]
        1b4288:	e1a00007 	mov	r0, r7
        1b428c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1b4290:	0c101930 	ldceq	9, cr1, [r0], -#192
        1b4294:	e590001c 	ldr	r0, [r0, #28]	; fField28
        1b4298:	e1300001 	teq	r0, r1
        1b429c:	1afffff5 	bne	1b4278 <TRootView::FindRestorableKeyView(TView *, unsigned long *)+0x7c>
        1b42a0:	e28dd004 	add	sp, sp, #4	; 0x4
        1b42a4:	e2566002 	subs	r6, r6, #2	; 0x2
        1b42a8:	5affffe1 	bpl	1b4234 <TRootView::FindRestorableKeyView(TView *, unsigned long *)+0x38>
        1b42ac:	e1a0000a 	mov	r0, sl
        1b42b0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TRootView::RestoreKeyView(TView *)
 * Address: 001b42b4
 */
TRootView::RestoreKeyView(TView *) {
    /*
        1b42b4:	e1a0c00d 	mov	ip, sp
        1b42b8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1b42bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b42c0:	e1a04000 	mov	r4, r0
        1b42c4:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b42c8:	e1a0200d 	mov	r2, sp
        1b42cc:	eb64d46b 	bl	1ae9480 <TRootView::$FindRestorableKeyView(TView *, unsigned long *)>
        1b42d0:	e1b05000 	movs	r5, r0
        1b42d4:	e3a00000 	mov	r0, #0	; 0x0
        1b42d8:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        1b42dc:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b42e0:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        1b42e4:	e2811001 	add	r1, r1, #1	; 0x1
        1b42e8:	e594007c 	ldr	r0, [r4, #124]	; fField124
        1b42ec:	e5900000 	ldr	r0, [r0]
        1b42f0:	eb683fd7 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1b42f4:	eb683794 	bl	1bc214c <$AllocateRefHandle(long)>
        1b42f8:	e58d0000 	str	r0, [sp]
        1b42fc:	e1a0200d 	mov	r2, sp
        1b4300:	e1a01005 	mov	r1, r5
        1b4304:	e1a00004 	mov	r0, r4
        1b4308:	e3a03001 	mov	r3, #1	; 0x1
        1b430c:	eb64c800 	bl	1ae6314 <TRootView::$SetKeyViewSelection(TView *, RefVar const &, unsigned char)>
        1b4310:	e59d0000 	ldr	r0, [sp]
        1b4314:	eb683ba8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b4318:	e3a00001 	mov	r0, #1	; 0x1
        1b431c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TRootView::PopSelection(void)
 * Address: 001b4390
 */
TRootView::PopSelection(void) {
    /*
        1b4390:	e1a0c00d 	mov	ip, sp
        1b4394:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1b4398:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b439c:	e1a04000 	mov	r4, r0
        1b43a0:	e280007c 	add	r0, r0, #124	; 0x7c
        1b43a4:	e1a05000 	mov	r5, r0
        1b43a8:	e5900000 	ldr	r0, [r0]
        1b43ac:	e5900000 	ldr	r0, [r0]
        1b43b0:	eb6843bd 	bl	1bc52ac <$Length(long)>
        1b43b4:	e3300000 	teq	r0, #0	; 0x0
        1b43b8:	03a00002 	moveq	r0, #2	; 0x2
        1b43bc:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1b43c0:	e1a00004 	mov	r0, r4
        1b43c4:	e3a02000 	mov	r2, #0	; 0x0
        1b43c8:	e3a01000 	mov	r1, #0	; 0x0
        1b43cc:	eb64c7d2 	bl	1ae631c <TRootView::$CleanSelectionStack(TView *, unsigned char)>
        1b43d0:	e3a00002 	mov	r0, #2	; 0x2
        1b43d4:	eb68375c 	bl	1bc214c <$AllocateRefHandle(long)>
        1b43d8:	e1a06000 	mov	r6, r0
        1b43dc:	e5950000 	ldr	r0, [r5]
        1b43e0:	e5900000 	ldr	r0, [r0]
        1b43e4:	eb6843b0 	bl	1bc52ac <$Length(long)>
        1b43e8:	e1a08000 	mov	r8, r0
        1b43ec:	e3500000 	cmp	r0, #0	; 0x0
        1b43f0:	da00002e 	ble	1b44b0 <TRootView::PopSelection(void)+0x120>
        1b43f4:	e24dd010 	sub	sp, sp, #16	; 0x10
        1b43f8:	e59f00c4 	ldr	r0, [pc, #c4]	; 1b44c4 <TRootView::PopSelection(void)+0x134>
        1b43fc:	eb68375a 	bl	1bc216c <$Clone(RefVar const &)>
        1b4400:	e1a07000 	mov	r7, r0
        1b4404:	e2481002 	sub	r1, r8, #2	; 0x2
        1b4408:	e1a09001 	mov	r9, r1
        1b440c:	e5950000 	ldr	r0, [r5]
        1b4410:	e5900000 	ldr	r0, [r0]
        1b4414:	eb683f8e 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1b4418:	eb68374b 	bl	1bc214c <$AllocateRefHandle(long)>
        1b441c:	e58d0000 	str	r0, [sp]
        1b4420:	e1a0400d 	mov	r4, sp
        1b4424:	e1a00007 	mov	r0, r7
        1b4428:	eb683747 	bl	1bc214c <$AllocateRefHandle(long)>
        1b442c:	e58d0004 	str	r0, [sp, #4]	; fField4
        1b4430:	e28d0004 	add	r0, sp, #4	; 0x4
        1b4434:	e59f108c 	ldr	r1, [pc, #8c]	; 1b44c8 <TRootView::PopSelection(void)+0x138>	; fField8
        1b4438:	e1a02004 	mov	r2, r4
        1b443c:	eb6847c9 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1b4440:	e59d0000 	ldr	r0, [sp]
        1b4444:	eb683b5c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b4448:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1b444c:	eb683b5a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b4450:	e2481001 	sub	r1, r8, #1	; 0x1
        1b4454:	e5950000 	ldr	r0, [r5]
        1b4458:	e5900000 	ldr	r0, [r0]
        1b445c:	eb683f7c 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1b4460:	eb683739 	bl	1bc214c <$AllocateRefHandle(long)>
        1b4464:	e58d0008 	str	r0, [sp, #8]	; fField8
        1b4468:	e28d4008 	add	r4, sp, #8	; 0x8
        1b446c:	e1a00007 	mov	r0, r7
        1b4470:	eb683735 	bl	1bc214c <$AllocateRefHandle(long)>
        1b4474:	e58d000c 	str	r0, [sp, #12]
        1b4478:	e28d000c 	add	r0, sp, #12	; 0xc
        1b447c:	e59f1048 	ldr	r1, [pc, #48]	; 1b44cc <TRootView::PopSelection(void)+0x13c>	; fField48
        1b4480:	e1a02004 	mov	r2, r4
        1b4484:	eb6847b7 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1b4488:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        1b448c:	eb683b4a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b4490:	e59d000c 	ldr	r0, [sp, #12]
        1b4494:	eb683b48 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b4498:	e1a01009 	mov	r1, r9
        1b449c:	e1a00005 	mov	r0, r5
        1b44a0:	e3a02002 	mov	r2, #2	; 0x2
        1b44a4:	eb694fe9 	bl	1c08450 <$ArrayRemoveCount__FRC6RefVarlT2>
        1b44a8:	e5867000 	str	r7, [r6]
        1b44ac:	e28dd010 	add	sp, sp, #16	; 0x10
        1b44b0:	e5964000 	ldr	r4, [r6]
        1b44b4:	e1a00006 	mov	r0, r6
        1b44b8:	eb683b3f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b44bc:	e1a00004 	mov	r0, r4
        1b44c0:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1b44c4:	00681290 	streqb	r1, [r8], -#32	; fField32
        1b44c8:	00684ee8 	rsbeq	r4, r8, r8, ror #29
        1b44cc:	006831f8 	streqd	r3, [r8], -#24
    */
}

/**
 * Symbol: TRootView::PushSelection(TView *, RefVar const &)
 * Address: 001b44d0
 */
TRootView::PushSelection(TView *, RefVar const &) {
    /*
        1b44d0:	e1a0c00d 	mov	ip, sp
        1b44d4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1b44d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b44dc:	e1a06000 	mov	r6, r0
        1b44e0:	e1a04001 	mov	r4, r1
        1b44e4:	e1a05002 	mov	r5, r2
        1b44e8:	e3a02001 	mov	r2, #1	; 0x1
        1b44ec:	eb64c78a 	bl	1ae631c <TRootView::$CleanSelectionStack(TView *, unsigned char)>
        1b44f0:	e286007c 	add	r0, r6, #124	; 0x7c
        1b44f4:	e1a06000 	mov	r6, r0
        1b44f8:	e5900000 	ldr	r0, [r0]
        1b44fc:	e5900000 	ldr	r0, [r0]
        1b4500:	eb684369 	bl	1bc52ac <$Length(long)>
        1b4504:	e1a07000 	mov	r7, r0
        1b4508:	e2801002 	add	r1, r0, #2	; 0x2
        1b450c:	e1a00006 	mov	r0, r6
        1b4510:	eb684795 	bl	1bc636c <$SetLength(RefVar const &, long)>
        1b4514:	e5941024 	ldr	r1, [r4, #36]
        1b4518:	e5912000 	ldr	r2, [r1]
        1b451c:	e5960000 	ldr	r0, [r6]
        1b4520:	e5900000 	ldr	r0, [r0]
        1b4524:	e1a01007 	mov	r1, r7
        1b4528:	eb68478a 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        1b452c:	e2871001 	add	r1, r7, #1	; 0x1
        1b4530:	e5950000 	ldr	r0, [r5]
        1b4534:	e5902000 	ldr	r2, [r0]
        1b4538:	e5960000 	ldr	r0, [r6]
        1b453c:	e5900000 	ldr	r0, [r0]
        1b4540:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        1b4544:	ea684783 	b	1bc6358 <$SetArraySlotRef__FlN21>
    */
}

/**
 * Symbol: TRootView::SetPreserveHilites(unsigned char)
 * Address: 001b4548
 */
TRootView::SetPreserveHilites(unsigned char) {
    /*
        1b4548:	e20120ff 	and	r2, r1, #255	; 0xff
        1b454c:	e5d01080 	ldrb	r1, [r0, #128]	; fField128
        1b4550:	e5c02080 	strb	r2, [r0, #128]	; fField128
        1b4554:	e1a00001 	mov	r0, r1
        1b4558:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRootView::GetPreserveHilites(void)
 * Address: 001b455c
 */
TRootView::GetPreserveHilites(void) {
    /*
        1b455c:	e5d00080 	ldrb	r0, [r0, #128]	; fField128
        1b4560:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRootView::RegisterKeyboard(RefVar const &, unsigned long)
 * Address: 001b4564
 */
TRootView::RegisterKeyboard(RefVar const &, unsigned long) {
    /*
        1b4564:	e1a0c00d 	mov	ip, sp
        1b4568:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1b456c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b4570:	e1a05000 	mov	r5, r0
        1b4574:	e1a04001 	mov	r4, r1
        1b4578:	e1a06002 	mov	r6, r2
        1b457c:	eb0000c0 	bl	1b4884 <TRootView::GetKeyboardIndex(RefVar const &)>
        1b4580:	e1a06106 	mov	r6, r6, lsl #2
        1b4584:	e2855060 	add	r5, r5, #96	; 0x60
        1b4588:	e3700001 	cmn	r0, #1	; 0x1
        1b458c:	12804001 	addne	r4, r0, #1	; 0x1
        1b4590:	1a00000d 	bne	1b45cc <TRootView::RegisterKeyboard(RefVar const &, unsigned long)+0x68>
        1b4594:	e5950000 	ldr	r0, [r5]
        1b4598:	e5900000 	ldr	r0, [r0]
        1b459c:	eb684342 	bl	1bc52ac <$Length(long)>
        1b45a0:	e1a07000 	mov	r7, r0
        1b45a4:	e2801002 	add	r1, r0, #2	; 0x2
        1b45a8:	e1a00005 	mov	r0, r5
        1b45ac:	eb68476e 	bl	1bc636c <$SetLength(RefVar const &, long)>
        1b45b0:	e5941000 	ldr	r1, [r4]
        1b45b4:	e5912000 	ldr	r2, [r1]
        1b45b8:	e5950000 	ldr	r0, [r5]
        1b45bc:	e5900000 	ldr	r0, [r0]
        1b45c0:	e1a01007 	mov	r1, r7
        1b45c4:	eb684763 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        1b45c8:	e2874001 	add	r4, r7, #1	; 0x1
        1b45cc:	e1a00006 	mov	r0, r6
        1b45d0:	eb6836dd 	bl	1bc214c <$AllocateRefHandle(long)>
        1b45d4:	e1a06000 	mov	r6, r0
        1b45d8:	e5902000 	ldr	r2, [r0]
        1b45dc:	e5950000 	ldr	r0, [r5]
        1b45e0:	e5900000 	ldr	r0, [r0]
        1b45e4:	e1a01004 	mov	r1, r4
        1b45e8:	eb68475a 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        1b45ec:	e1a00006 	mov	r0, r6
        1b45f0:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        1b45f4:	ea683af0 	b	1bc31bc <$DisposeRefHandle(RefHandle *)>
    */
}

/**
 * Symbol: TRootView::CheckForCaretRemoval(void)
 * Address: 001b45f8
 */
TRootView::CheckForCaretRemoval(void) {
    /*
        1b45f8:	e1a0c00d 	mov	ip, sp
        1b45fc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1b4600:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b4604:	e1a04000 	mov	r4, r0
        1b4608:	e5905068 	ldr	r5, [r0, #104]	; fField104
        1b460c:	e3350000 	teq	r5, #0	; 0x0
        1b4610:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        1b4614:	e1a00005 	mov	r0, r5
        1b4618:	e3a0104d 	mov	r1, #77	; 0x4d
        1b461c:	e5952000 	ldr	r2, [r5]
        1b4620:	e1a0e00f 	mov	lr, pc
        1b4624:	e282f004 	add	pc, r2, #4	; 0x4
        1b4628:	e3300000 	teq	r0, #0	; 0x0
        1b462c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        1b4630:	e1a00005 	mov	r0, r5
        1b4634:	eb6457b7 	bl	1aca518 <$TextOrInkWordsEnabled(TView *)>
        1b4638:	e3300000 	teq	r0, #0	; 0x0
        1b463c:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        1b4640:	e1a00004 	mov	r0, r4
        1b4644:	eb6478af 	bl	1ad2908 <TRootView::$KeyboardActive(void)>
        1b4648:	e3300000 	teq	r0, #0	; 0x0
        1b464c:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        1b4650:	e3a03000 	mov	r3, #0	; 0x0
        1b4654:	e92d0008 	stmdb	sp!, {r3}
        1b4658:	e1a00004 	mov	r0, r4
        1b465c:	e3a02000 	mov	r2, #0	; 0x0
        1b4660:	e3a01000 	mov	r1, #0	; 0x0
        1b4664:	eb647cde 	bl	1ad39e4 <TRootView::$SetKeyView(TView *, long, long, unsigned char)>
        1b4668:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TRootView::UnregisterKeyboard(RefVar const &)
 * Address: 001b466c
 */
TRootView::UnregisterKeyboard(RefVar const &) {
    /*
        1b466c:	e1a0c00d 	mov	ip, sp
        1b4670:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1b4674:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b4678:	e1a04000 	mov	r4, r0
        1b467c:	eb000080 	bl	1b4884 <TRootView::GetKeyboardIndex(RefVar const &)>
        1b4680:	e1a01000 	mov	r1, r0
        1b4684:	e3700001 	cmn	r0, #1	; 0x1
        1b4688:	03a00000 	moveq	r0, #0	; 0x0
        1b468c:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        1b4690:	e2840060 	add	r0, r4, #96	; 0x60
        1b4694:	e3a02002 	mov	r2, #2	; 0x2
        1b4698:	eb694f6c 	bl	1c08450 <$ArrayRemoveCount__FRC6RefVarlT2>
        1b469c:	e5940068 	ldr	r0, [r4, #104]	; fField104
        1b46a0:	e3300000 	teq	r0, #0	; 0x0
        1b46a4:	0a000006 	beq	1b46c4 <TRootView::UnregisterKeyboard(RefVar const &)+0x58>
        1b46a8:	e3a01051 	mov	r1, #81	; 0x51
        1b46ac:	e5902000 	ldr	r2, [r0]
        1b46b0:	e1a0e00f 	mov	lr, pc
        1b46b4:	e282f004 	add	pc, r2, #4	; 0x4
        1b46b8:	e3300000 	teq	r0, #0	; 0x0
        1b46bc:	15940068 	ldrne	r0, [r4, #104]	; fField104
        1b46c0:	1b646c44 	blne	1acf7d8 <TParagraphView::$FlushWordAtCaret(void)>
        1b46c4:	e1a00004 	mov	r0, r4
        1b46c8:	eb6463fd 	bl	1acd6c4 <TRootView::$CheckForCaretRemoval(void)>
        1b46cc:	e3a00001 	mov	r0, #1	; 0x1
        1b46d0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TRootView::FindDefaultButtonAndCaretSlip(TView *, TView **, TView **)
 * Address: 001b46d4
 */
TRootView::FindDefaultButtonAndCaretSlip(TView *, TView **, TView **) {
    /*
        1b46d4:	e1a0c00d 	mov	ip, sp
        1b46d8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1b46dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b46e0:	e1a05000 	mov	r5, r0
        1b46e4:	e1b04001 	movs	r4, r1
        1b46e8:	e1a07002 	mov	r7, r2
        1b46ec:	e1a06003 	mov	r6, r3
        1b46f0:	e3a09000 	mov	r9, #0	; 0x0
        1b46f4:	e3a08000 	mov	r8, #0	; 0x0
        1b46f8:	0a00001e 	beq	1b4778 <TRootView::FindDefaultButtonAndCaretSlip(TView *, TView **, TView **)+0xa4>
        1b46fc:	e1a00005 	mov	r0, r5
        1b4700:	eb64c70a 	bl	1ae6330 <TRootView::$CommandKeyboardConnected(void)>
        1b4704:	e3300000 	teq	r0, #0	; 0x0
        1b4708:	0a00001a 	beq	1b4778 <TRootView::FindDefaultButtonAndCaretSlip(TView *, TView **, TView **)+0xa4>
        1b470c:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b4710:	e2840024 	add	r0, r4, #36	; 0x24
        1b4714:	e59f1068 	ldr	r1, [pc, #68]	; 1b4784 <TRootView::FindDefaultButtonAndCaretSlip(TView *, TView **, TView **)+0xb0>
        1b4718:	e3a03000 	mov	r3, #0	; 0x0
        1b471c:	e3a02000 	mov	r2, #0	; 0x0
        1b4720:	eb683ed3 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        1b4724:	eb683688 	bl	1bc214c <$AllocateRefHandle(long)>
        1b4728:	e58d0000 	str	r0, [sp]
        1b472c:	e1a0000d 	mov	r0, sp
        1b4730:	eb685789 	bl	1bca55c <$GetView(RefVar const &)>
        1b4734:	e1a0a000 	mov	sl, r0
        1b4738:	e59d0000 	ldr	r0, [sp]
        1b473c:	eb683a9e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b4740:	e33a0000 	teq	sl, #0	; 0x0
        1b4744:	11a0900a 	movne	r9, sl
        1b4748:	e28dd004 	add	sp, sp, #4	; 0x4
        1b474c:	e1340005 	teq	r4, r5
        1b4750:	0a000008 	beq	1b4778 <TRootView::FindDefaultButtonAndCaretSlip(TView *, TView **, TView **)+0xa4>
        1b4754:	e594000c 	ldr	r0, [r4, #12]
        1b4758:	e20000f0 	and	r0, r0, #240	; 0xf0
        1b475c:	e33000f0 	teq	r0, #240	; 0xf0
        1b4760:	133000d0 	teqne	r0, #208	; 0xd0
        1b4764:	01a08004 	moveq	r8, r4
        1b4768:	0a000002 	beq	1b4778 <TRootView::FindDefaultButtonAndCaretSlip(TView *, TView **, TView **)+0xa4>
        1b476c:	e594401c 	ldr	r4, [r4, #28]	; fField28
        1b4770:	e1340005 	teq	r4, r5
        1b4774:	1afffff6 	bne	1b4754 <TRootView::FindDefaultButtonAndCaretSlip(TView *, TView **, TView **)+0x80>
        1b4778:	e5879000 	str	r9, [r7]
        1b477c:	e5868000 	str	r8, [r6]
        1b4780:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1b4784:	006852f0 	streqd	r5, [r8], -#32	; fField32
    */
}

/**
 * Symbol: TRootView::UpdateDefaultButtonAndCaretSlip(void)
 * Address: 001b4788
 */
TRootView::UpdateDefaultButtonAndCaretSlip(void) {
    /*
        1b4788:	e1a0c00d 	mov	ip, sp
        1b478c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1b4790:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b4794:	e1a04000 	mov	r4, r0
        1b4798:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b479c:	e1a0300d 	mov	r3, sp
        1b47a0:	e28d2004 	add	r2, sp, #4	; 0x4
        1b47a4:	e5901068 	ldr	r1, [r0, #104]	; fField104
        1b47a8:	eb64c6de 	bl	1ae6328 <TRootView::$FindDefaultButtonAndCaretSlip(TView *, TView **, TView **)>
        1b47ac:	e5940074 	ldr	r0, [r4, #116]	; fField116
        1b47b0:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        1b47b4:	e1300001 	teq	r0, r1
        1b47b8:	0a00000d 	beq	1b47f4 <TRootView::UpdateDefaultButtonAndCaretSlip(void)+0x6c>
        1b47bc:	e3300000 	teq	r0, #0	; 0x0
        1b47c0:	0a000003 	beq	1b47d4 <TRootView::UpdateDefaultButtonAndCaretSlip(void)+0x4c>
        1b47c4:	e3a01000 	mov	r1, #0	; 0x0
        1b47c8:	e5902000 	ldr	r2, [r0]
        1b47cc:	e1a0e00f 	mov	lr, pc
        1b47d0:	e282f054 	add	pc, r2, #84	; 0x54
        1b47d4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1b47d8:	e5840074 	str	r0, [r4, #116]	; fField116
        1b47dc:	e3300000 	teq	r0, #0	; 0x0
        1b47e0:	0a000003 	beq	1b47f4 <TRootView::UpdateDefaultButtonAndCaretSlip(void)+0x6c>
        1b47e4:	e3a01000 	mov	r1, #0	; 0x0
        1b47e8:	e5902000 	ldr	r2, [r0]
        1b47ec:	e1a0e00f 	mov	lr, pc
        1b47f0:	e282f054 	add	pc, r2, #84	; 0x54
        1b47f4:	e5940078 	ldr	r0, [r4, #120]	; fField120
        1b47f8:	e59d1000 	ldr	r1, [sp]
        1b47fc:	e1300001 	teq	r0, r1
        1b4800:	0a00000d 	beq	1b483c <TRootView::UpdateDefaultButtonAndCaretSlip(void)+0xb4>
        1b4804:	e3300000 	teq	r0, #0	; 0x0
        1b4808:	0a000003 	beq	1b481c <TRootView::UpdateDefaultButtonAndCaretSlip(void)+0x94>
        1b480c:	e3a01000 	mov	r1, #0	; 0x0
        1b4810:	e5902000 	ldr	r2, [r0]
        1b4814:	e1a0e00f 	mov	lr, pc
        1b4818:	e282f054 	add	pc, r2, #84	; 0x54
        1b481c:	e59d0000 	ldr	r0, [sp]
        1b4820:	e5a40078 	str	r0, [r4, #120]!	; fField120
        1b4824:	e3300000 	teq	r0, #0	; 0x0
        1b4828:	0a000003 	beq	1b483c <TRootView::UpdateDefaultButtonAndCaretSlip(void)+0xb4>
        1b482c:	e3a01000 	mov	r1, #0	; 0x0
        1b4830:	e5902000 	ldr	r2, [r0]
        1b4834:	e1a0e00f 	mov	lr, pc
        1b4838:	e282f054 	add	pc, r2, #84	; 0x54
        1b483c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TRootView::GetKeyboardIndex(RefVar const &)
 * Address: 001b4884
 */
TRootView::GetKeyboardIndex(RefVar const &) {
    /*
        1b4884:	e1a0c00d 	mov	ip, sp
        1b4888:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1b488c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b4890:	e1a04001 	mov	r4, r1
        1b4894:	e2800060 	add	r0, r0, #96	; 0x60
        1b4898:	e1a09000 	mov	r9, r0
        1b489c:	e5900000 	ldr	r0, [r0]
        1b48a0:	e5900000 	ldr	r0, [r0]
        1b48a4:	eb684280 	bl	1bc52ac <$Length(long)>
        1b48a8:	e0800fa0 	add	r0, r0, r0, lsr #31
        1b48ac:	e1a080c0 	mov	r8, r0, asr #1
        1b48b0:	e3e07000 	mvn	r7, #0	; 0x0
        1b48b4:	e3a05000 	mov	r5, #0	; 0x0
        1b48b8:	e1550088 	cmp	r5, r8, lsl #1
        1b48bc:	aa000014 	bge	1b4914 <TRootView::GetKeyboardIndex(RefVar const &)+0x90>
        1b48c0:	e5990000 	ldr	r0, [r9]
        1b48c4:	e5900000 	ldr	r0, [r0]
        1b48c8:	e1a01005 	mov	r1, r5
        1b48cc:	eb683e60 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1b48d0:	eb68361d 	bl	1bc214c <$AllocateRefHandle(long)>
        1b48d4:	e1a06000 	mov	r6, r0
        1b48d8:	e5940000 	ldr	r0, [r4]
        1b48dc:	e5901000 	ldr	r1, [r0]
        1b48e0:	e5960000 	ldr	r0, [r6]
        1b48e4:	eb683e51 	bl	1bc4230 <$EQRef__FlT1>
        1b48e8:	e3300000 	teq	r0, #0	; 0x0
        1b48ec:	0a000003 	beq	1b4900 <TRootView::GetKeyboardIndex(RefVar const &)+0x7c>
        1b48f0:	e1a07005 	mov	r7, r5
        1b48f4:	e1a00006 	mov	r0, r6
        1b48f8:	eb683a2f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b48fc:	ea000004 	b	1b4914 <TRootView::GetKeyboardIndex(RefVar const &)+0x90>
        1b4900:	e1a00006 	mov	r0, r6
        1b4904:	eb683a2c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b4908:	e2855002 	add	r5, r5, #2	; 0x2
        1b490c:	e1550088 	cmp	r5, r8, lsl #1
        1b4910:	baffffea 	blt	1b48c0 <TRootView::GetKeyboardIndex(RefVar const &)+0x3c>
        1b4914:	e1a00007 	mov	r0, r7
        1b4918:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TRootView::ConnectPassthruKeyboard(unsigned char)
 * Address: 001b491c
 */
TRootView::ConnectPassthruKeyboard(unsigned char) {
    /*
        1b491c:	e21110ff 	ands	r1, r1, #255	; 0xff
        1b4920:	e5c01064 	strb	r1, [r0, #100]	; fField100
        1b4924:	0a646366 	beq	1acd6c4 <TRootView::$CheckForCaretRemoval(void)>
        1b4928:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRootView::HandleKeyIn(unsigned long, unsigned char, TView *)
 * Address: 001b492c
 */
TRootView::HandleKeyIn(unsigned long, unsigned char, TView *) {
    /*
        1b492c:	e1a0c00d 	mov	ip, sp
        1b4930:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1b4934:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b4938:	e1a07000 	mov	r7, r0
        1b493c:	e1a04001 	mov	r4, r1
        1b4940:	e1a06003 	mov	r6, r3
        1b4944:	e3a00002 	mov	r0, #2	; 0x2
        1b4948:	eb6835ff 	bl	1bc214c <$AllocateRefHandle(long)>
        1b494c:	e1a05000 	mov	r5, r0
        1b4950:	e3360000 	teq	r6, #0	; 0x0
        1b4954:	0a000002 	beq	1b4964 <TRootView::HandleKeyIn(unsigned long, unsigned char, TView *)+0x38>
        1b4958:	e5960024 	ldr	r0, [r6, #36]
        1b495c:	e5900000 	ldr	r0, [r0]
        1b4960:	e5850000 	str	r0, [r5]
        1b4964:	e2870060 	add	r0, r7, #96	; 0x60
        1b4968:	e1a06000 	mov	r6, r0
        1b496c:	e5900000 	ldr	r0, [r0]
        1b4970:	e5900000 	ldr	r0, [r0]
        1b4974:	eb68424c 	bl	1bc52ac <$Length(long)>
        1b4978:	e0800fa0 	add	r0, r0, r0, lsr #31
        1b497c:	e1a080c0 	mov	r8, r0, asr #1
        1b4980:	e334003b 	teq	r4, #59	; 0x3b
        1b4984:	1334003a 	teqne	r4, #58	; 0x3a
        1b4988:	13340038 	teqne	r4, #56	; 0x38
        1b498c:	13340039 	teqne	r4, #57	; 0x39
        1b4990:	1a000032 	bne	1b4a60 <TRootView::HandleKeyIn(unsigned long, unsigned char, TView *)+0x134>
        1b4994:	e3a04000 	mov	r4, #0	; 0x0
        1b4998:	e3580000 	cmp	r8, #0	; 0x0
        1b499c:	da00002f 	ble	1b4a60 <TRootView::HandleKeyIn(unsigned long, unsigned char, TView *)+0x134>
        1b49a0:	e3a0a001 	mov	sl, #1	; 0x1
        1b49a4:	e1a01084 	mov	r1, r4, lsl #1
        1b49a8:	e1a09001 	mov	r9, r1
        1b49ac:	e5960000 	ldr	r0, [r6]
        1b49b0:	e5900000 	ldr	r0, [r0]
        1b49b4:	eb683e26 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1b49b8:	eb6835e3 	bl	1bc214c <$AllocateRefHandle(long)>
        1b49bc:	e1a07000 	mov	r7, r0
        1b49c0:	e08a1084 	add	r1, sl, r4, lsl #1
        1b49c4:	e5960000 	ldr	r0, [r6]
        1b49c8:	e5900000 	ldr	r0, [r0]
        1b49cc:	eb683e20 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1b49d0:	e3100003 	tst	r0, #3	; 0x3
        1b49d4:	01a00140 	moveq	r0, r0, asr #2
        1b49d8:	0a000000 	beq	1b49e0 <TRootView::HandleKeyIn(unsigned long, unsigned char, TView *)+0xb4>
        1b49dc:	eb6835ce 	bl	1bc211c <$_RINTError(long)>
        1b49e0:	e3100001 	tst	r0, #1	; 0x1
        1b49e4:	0a000018 	beq	1b4a4c <TRootView::HandleKeyIn(unsigned long, unsigned char, TView *)+0x120>
        1b49e8:	e5951000 	ldr	r1, [r5]
        1b49ec:	e5970000 	ldr	r0, [r7]
        1b49f0:	eb683e0e 	bl	1bc4230 <$EQRef__FlT1>
        1b49f4:	e3300000 	teq	r0, #0	; 0x0
        1b49f8:	1a000013 	bne	1b4a4c <TRootView::HandleKeyIn(unsigned long, unsigned char, TView *)+0x120>
        1b49fc:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b4a00:	e1a01009 	mov	r1, r9
        1b4a04:	e5960000 	ldr	r0, [r6]
        1b4a08:	e5900000 	ldr	r0, [r0]
        1b4a0c:	eb683e10 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1b4a10:	eb6835cd 	bl	1bc214c <$AllocateRefHandle(long)>
        1b4a14:	e58d0000 	str	r0, [sp]
        1b4a18:	e1a0000d 	mov	r0, sp
        1b4a1c:	eb6856ce 	bl	1bca55c <$GetView(RefVar const &)>
        1b4a20:	e1a09000 	mov	r9, r0
        1b4a24:	e59d0000 	ldr	r0, [sp]
        1b4a28:	eb6839e3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b4a2c:	e3390000 	teq	r9, #0	; 0x0
        1b4a30:	0a000004 	beq	1b4a48 <TRootView::HandleKeyIn(unsigned long, unsigned char, TView *)+0x11c>
        1b4a34:	e1a00009 	mov	r0, r9
        1b4a38:	e3a01000 	mov	r1, #0	; 0x0
        1b4a3c:	e5992000 	ldr	r2, [r9]
        1b4a40:	e1a0e00f 	mov	lr, pc
        1b4a44:	e282f054 	add	pc, r2, #84	; 0x54
        1b4a48:	e28dd004 	add	sp, sp, #4	; 0x4
        1b4a4c:	e1a00007 	mov	r0, r7
        1b4a50:	eb6839d9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b4a54:	e2844001 	add	r4, r4, #1	; 0x1
        1b4a58:	e1540008 	cmp	r4, r8
        1b4a5c:	baffffd0 	blt	1b49a4 <TRootView::HandleKeyIn(unsigned long, unsigned char, TView *)+0x78>
        1b4a60:	e1a00005 	mov	r0, r5
        1b4a64:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        1b4a68:	ea6839d3 	b	1bc31bc <$DisposeRefHandle(RefHandle *)>
    */
}

/**
 * Symbol: TRootView::GetRemoteWriting(void)
 * Address: 001b4a6c
 */
TRootView::GetRemoteWriting(void) {
    /*
        1b4a6c:	e1a0c00d 	mov	ip, sp
        1b4a70:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1b4a74:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b4a78:	e59f0010 	ldr	r0, [pc, #10]	; 1b4a90 <TRootView::GetRemoteWriting(void)+0x24>
        1b4a7c:	eb638820 	bl	1a96b04 <$GetPreference(RefVar const &)>
        1b4a80:	e2500002 	subs	r0, r0, #2	; 0x2
        1b4a84:	13a00001 	movne	r0, #1	; 0x1
        1b4a88:	e20000ff 	and	r0, r0, #255	; 0xff
        1b4a8c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        1b4a90:	00684270 	rsbeq	r4, r8, r0, ror r2
    */
}

/**
 * Symbol: TRootView::SetRemoteWriting(unsigned char)
 * Address: 001b4a94
 */
TRootView::SetRemoteWriting(unsigned char) {
    /*
        1b4a94:	e1a0c00d 	mov	ip, sp
        1b4a98:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1b4a9c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b4aa0:	e31100ff 	tst	r1, #255	; 0xff
        1b4aa4:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b4aa8:	03a00002 	moveq	r0, #2	; 0x2
        1b4aac:	13a0001a 	movne	r0, #26	; 0x1a
        1b4ab0:	eb6835a5 	bl	1bc214c <$AllocateRefHandle(long)>
        1b4ab4:	e58d0000 	str	r0, [sp]
        1b4ab8:	e1a0100d 	mov	r1, sp
        1b4abc:	e59f000c 	ldr	r0, [pc, #c]	; 1b4ad0 <TRootView::SetRemoteWriting(unsigned char)+0x3c>
        1b4ac0:	eb63b59b 	bl	1aa2134 <$SetPreference__FRC6RefVarT1>
        1b4ac4:	e59d0000 	ldr	r0, [sp]
        1b4ac8:	eb6839bb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b4acc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        1b4ad0:	00684270 	rsbeq	r4, r8, r0, ror r2
    */
}

/**
 * Symbol: TRootView::KeyboardConnected(void)
 * Address: 001b4ad4
 */
TRootView::KeyboardConnected(void) {
    /*
        1b4ad4:	e59f101c 	ldr	r1, [pc, #1c]	; 1b4af8 <TRootView::KeyboardConnected(void)+0x24>	; fField1
        1b4ad8:	e5d11008 	ldrb	r1, [r1, #8]	; fField8
        1b4adc:	e3310000 	teq	r1, #0	; 0x0
        1b4ae0:	05d00064 	ldreqb	r0, [r0, #100]	; fField100
        1b4ae4:	03300000 	teqeq	r0, #0	; 0x0
        1b4ae8:	13a00001 	movne	r0, #1	; 0x1
        1b4aec:	03a00000 	moveq	r0, #0	; 0x0
        1b4af0:	e20000ff 	and	r0, r0, #255	; 0xff
        1b4af4:	e1a0f00e 	mov	pc, lr
        1b4af8:	0c101930 	ldceq	9, cr1, [r0], -#192
    */
}

/**
 * Symbol: TRootView::CommandKeyboardConnected(void)
 * Address: 001b4afc
 */
TRootView::CommandKeyboardConnected(void) {
    /*
        1b4afc:	e59f0004 	ldr	r0, [pc, #4]	; 1b4b08 <TRootView::CommandKeyboardConnected(void)+0xc>	; fField4
        1b4b00:	e5d00008 	ldrb	r0, [r0, #8]	; fField8
        1b4b04:	e1a0f00e 	mov	pc, lr
        1b4b08:	0c101930 	ldceq	9, cr1, [r0], -#192
    */
}

/**
 * Symbol: TRootView::KeyboardActive(void)
 * Address: 001b4b0c
 */
TRootView::KeyboardActive(void) {
    /*
        1b4b0c:	e1a0c00d 	mov	ip, sp
        1b4b10:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1b4b14:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b4b18:	e1a04000 	mov	r4, r0
        1b4b1c:	eb64777a 	bl	1ad290c <TRootView::$KeyboardConnected(void)>
        1b4b20:	e3a05001 	mov	r5, #1	; 0x1
        1b4b24:	e3300000 	teq	r0, #0	; 0x0
        1b4b28:	1a000016 	bne	1b4b88 <TRootView::KeyboardActive(void)+0x7c>
        1b4b2c:	e2840060 	add	r0, r4, #96	; 0x60
        1b4b30:	e1a08000 	mov	r8, r0
        1b4b34:	e5900000 	ldr	r0, [r0]
        1b4b38:	e5900000 	ldr	r0, [r0]
        1b4b3c:	e3a07000 	mov	r7, #0	; 0x0
        1b4b40:	e3300002 	teq	r0, #2	; 0x2
        1b4b44:	0a000014 	beq	1b4b9c <TRootView::KeyboardActive(void)+0x90>
        1b4b48:	eb6841d7 	bl	1bc52ac <$Length(long)>
        1b4b4c:	e0800fa0 	add	r0, r0, r0, lsr #31
        1b4b50:	e1a060c0 	mov	r6, r0, asr #1
        1b4b54:	e3a04000 	mov	r4, #0	; 0x0
        1b4b58:	e3560000 	cmp	r6, #0	; 0x0
        1b4b5c:	9a00000e 	bls	1b4b9c <TRootView::KeyboardActive(void)+0x90>
        1b4b60:	e0851084 	add	r1, r5, r4, lsl #1
        1b4b64:	e5980000 	ldr	r0, [r8]
        1b4b68:	e5900000 	ldr	r0, [r0]
        1b4b6c:	eb683db8 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1b4b70:	e3100003 	tst	r0, #3	; 0x3
        1b4b74:	01a00140 	moveq	r0, r0, asr #2
        1b4b78:	0a000000 	beq	1b4b80 <TRootView::KeyboardActive(void)+0x74>
        1b4b7c:	eb683566 	bl	1bc211c <$_RINTError(long)>
        1b4b80:	e3100004 	tst	r0, #4	; 0x4
        1b4b84:	0a000001 	beq	1b4b90 <TRootView::KeyboardActive(void)+0x84>
        1b4b88:	e1a00005 	mov	r0, r5
        1b4b8c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1b4b90:	e2844001 	add	r4, r4, #1	; 0x1
        1b4b94:	e1540006 	cmp	r4, r6
        1b4b98:	3afffff0 	bcc	1b4b60 <TRootView::KeyboardActive(void)+0x54>
        1b4b9c:	e1a00007 	mov	r0, r7
        1b4ba0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TRootView::CaretEnabled(void)
 * Address: 001b4ba4
 */
TRootView::CaretEnabled(void) {
    /*
        1b4ba4:	e1a0c00d 	mov	ip, sp
        1b4ba8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1b4bac:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b4bb0:	e1a04000 	mov	r4, r0
        1b4bb4:	e5900068 	ldr	r0, [r0, #104]	; fField104
        1b4bb8:	e3300000 	teq	r0, #0	; 0x0
        1b4bbc:	0a000002 	beq	1b4bcc <TRootView::CaretEnabled(void)+0x28>
        1b4bc0:	e5940070 	ldr	r0, [r4, #112]	; fField112
        1b4bc4:	e3300000 	teq	r0, #0	; 0x0
        1b4bc8:	0a000001 	beq	1b4bd4 <TRootView::CaretEnabled(void)+0x30>
        1b4bcc:	e3a00000 	mov	r0, #0	; 0x0
        1b4bd0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1b4bd4:	e1a00004 	mov	r0, r4
        1b4bd8:	ebffffa3 	bl	1b4a6c <TRootView::GetRemoteWriting(void)>
        1b4bdc:	e3300000 	teq	r0, #0	; 0x0
        1b4be0:	01a00004 	moveq	r0, r4
        1b4be4:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
        1b4be8:	0a647746 	beq	1ad2908 <TRootView::$KeyboardActive(void)>
        1b4bec:	13a00001 	movne	r0, #1	; 0x1
        1b4bf0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TRootView::CaretValid(TPoint *)
 * Address: 001b4bf4
 */
TRootView::CaretValid(TPoint *) {
    /*
        1b4bf4:	e1a0c00d 	mov	ip, sp
        1b4bf8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1b4bfc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b4c00:	e1a04000 	mov	r4, r0
        1b4c04:	e1b05001 	movs	r5, r1
        1b4c08:	0a000003 	beq	1b4c1c <TRootView::CaretValid(TPoint *)+0x28>
        1b4c0c:	e3a00000 	mov	r0, #0	; 0x0
        1b4c10:	e5c50001 	strb	r0, [r5, #1]	; fField1
        1b4c14:	e3a00080 	mov	r0, #128	; 0x80
        1b4c18:	e5c50000 	strb	r0, [r5]
        1b4c1c:	e3a06001 	mov	r6, #1	; 0x1
        1b4c20:	e5940094 	ldr	r0, [r4, #148]	; fField148
        1b4c24:	e3500000 	cmp	r0, #0	; 0x0
        1b4c28:	c1a00006 	movgt	r0, r6
        1b4c2c:	c91ba870 	ldmgtdb	fp, {r4, r5, r6, fp, sp, pc}
        1b4c30:	e1a00004 	mov	r0, r4
        1b4c34:	eb64629a 	bl	1acd6a4 <TRootView::$CaretEnabled(void)>
        1b4c38:	e3300000 	teq	r0, #0	; 0x0
        1b4c3c:	0a000025 	beq	1b4cd8 <TRootView::CaretValid(TPoint *)+0xe4>
        1b4c40:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b4c44:	e1a0100d 	mov	r1, sp
        1b4c48:	e1a00004 	mov	r0, r4
        1b4c4c:	eb646ae6 	bl	1acf7ec <TRootView::$GetCaretPoint(TPoint *)>
        1b4c50:	e3350000 	teq	r5, #0	; 0x0
        1b4c54:	159d0000 	ldrne	r0, [sp]
        1b4c58:	15850000 	strne	r0, [r5]
        1b4c5c:	e59d0000 	ldr	r0, [sp]
        1b4c60:	e1a00840 	mov	r0, r0, asr #16
        1b4c64:	e284508c 	add	r5, r4, #140	; 0x8c
        1b4c68:	e3700902 	cmn	r0, #32768	; 0x8000
        1b4c6c:	1a000007 	bne	1b4c90 <TRootView::CaretValid(TPoint *)+0x9c>
        1b4c70:	e5940088 	ldr	r0, [r4, #136]	; fField136
        1b4c74:	e3300000 	teq	r0, #0	; 0x0
        1b4c78:	15950000 	ldrne	r0, [r5]
        1b4c7c:	11a00840 	movne	r0, r0, asr #16
        1b4c80:	13700902 	cmnne	r0, #32768	; 0x8000
        1b4c84:	1a000001 	bne	1b4c90 <TRootView::CaretValid(TPoint *)+0x9c>
        1b4c88:	e1a00006 	mov	r0, r6
        1b4c8c:	ea000010 	b	1b4cd4 <TRootView::CaretValid(TPoint *)+0xe0>
        1b4c90:	e5940068 	ldr	r0, [r4, #104]	; fField104
        1b4c94:	eb685e6a 	bl	1bcc644 <TView::$VisibleDeep( const(void))>
        1b4c98:	e3300000 	teq	r0, #0	; 0x0
        1b4c9c:	0afffff9 	beq	1b4c88 <TRootView::CaretValid(TPoint *)+0x94>
        1b4ca0:	e5940088 	ldr	r0, [r4, #136]	; fField136
        1b4ca4:	e3300000 	teq	r0, #0	; 0x0
        1b4ca8:	0a000007 	beq	1b4ccc <TRootView::CaretValid(TPoint *)+0xd8>
        1b4cac:	e5b41068 	ldr	r1, [r4, #104]!	; fField104
        1b4cb0:	e5940028 	ldr	r0, [r4, #40]	; fField40
        1b4cb4:	e1300001 	teq	r0, r1
        1b4cb8:	05950000 	ldreq	r0, [r5]
        1b4cbc:	059d1000 	ldreq	r1, [sp]
        1b4cc0:	01300001 	teqeq	r0, r1
        1b4cc4:	03a00001 	moveq	r0, #1	; 0x1
        1b4cc8:	0a000000 	beq	1b4cd0 <TRootView::CaretValid(TPoint *)+0xdc>
        1b4ccc:	e3a00000 	mov	r0, #0	; 0x0
        1b4cd0:	e20000ff 	and	r0, r0, #255	; 0xff
        1b4cd4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1b4cd8:	e5b40088 	ldr	r0, [r4, #136]!	; fField136
        1b4cdc:	e3300000 	teq	r0, #0	; 0x0
        1b4ce0:	13a00000 	movne	r0, #0	; 0x0
        1b4ce4:	03a00001 	moveq	r0, #1	; 0x1
        1b4ce8:	e20000ff 	and	r0, r0, #255	; 0xff
        1b4cec:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TRootView::GetCaretPoint(TPoint *)
 * Address: 001b4dc8
 */
TRootView::GetCaretPoint(TPoint *) {
    /*
        1b4dc8:	e1a0c00d 	mov	ip, sp
        1b4dcc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1b4dd0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b4dd4:	e1a04001 	mov	r4, r1
        1b4dd8:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b4ddc:	e1a0200d 	mov	r2, sp
        1b4de0:	e5b03068 	ldr	r3, [r0, #104]!	; fField104
        1b4de4:	e5901004 	ldr	r1, [r0, #4]	; fField4
        1b4de8:	e1a00003 	mov	r0, r3
        1b4dec:	e5933000 	ldr	r3, [r3]
        1b4df0:	e1a0e00f 	mov	lr, pc
        1b4df4:	e283f070 	add	pc, r3, #112	; 0x70
        1b4df8:	e59d0000 	ldr	r0, [sp]
        1b4dfc:	e1a00840 	mov	r0, r0, asr #16
        1b4e00:	e3700902 	cmn	r0, #32768	; 0x8000
        1b4e04:	03a00000 	moveq	r0, #0	; 0x0
        1b4e08:	05c40001 	streqb	r0, [r4, #1]	; fField1
        1b4e0c:	03e0007f 	mvneq	r0, #127	; 0x7f
        1b4e10:	0a000007 	beq	1b4e34 <TRootView::GetCaretPoint(TPoint *)+0x6c>
        1b4e14:	e59d0000 	ldr	r0, [sp]
        1b4e18:	e5c40003 	strb	r0, [r4, #3]	; fField3
        1b4e1c:	e1a00440 	mov	r0, r0, asr #8
        1b4e20:	e5c40002 	strb	r0, [r4, #2]	; fField2
        1b4e24:	e59d0006 	ldr	r0, [sp, #6]	; fField6
        1b4e28:	e2800001 	add	r0, r0, #1	; 0x1
        1b4e2c:	e5c40001 	strb	r0, [r4, #1]	; fField1
        1b4e30:	e1a00440 	mov	r0, r0, asr #8
        1b4e34:	e5c40000 	strb	r0, [r4]
        1b4e38:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TRootView::GetCaretRect(TRect *)
 * Address: 001b4e3c
 */
TRootView::GetCaretRect(TRect *) {
    /*
        1b4e3c:	e5902088 	ldr	r2, [r0, #136]	; fField136
        1b4e40:	e3320000 	teq	r2, #0	; 0x0
        1b4e44:	1280008c 	addne	r0, r0, #140	; 0x8c
        1b4e48:	1a646216 	bne	1acd6a8 <$CaretPointToRect(TPoint &, TRect *)>
        1b4e4c:	e3a029fe 	mov	r2, #4161536	; 0x3f8000
        1b4e50:	e2422501 	sub	r2, r2, #4194304	; 0x400000
        1b4e54:	e5c12005 	strb	r2, [r1, #5]	; fField5
        1b4e58:	e3e0007f 	mvn	r0, #127	; 0x7f
        1b4e5c:	e5c10004 	strb	r0, [r1, #4]	; fField4
        1b4e60:	e5c12001 	strb	r2, [r1, #1]	; fField1
        1b4e64:	e5c10000 	strb	r0, [r1]
        1b4e68:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRootView::DrawCaret(TPoint)
 * Address: 001b4f84
 */
TRootView::DrawCaret(TPoint) {
    /*
        1b4f84:	e1a0c00d 	mov	ip, sp
        1b4f88:	e92dd833 	stmdb	sp!, {r0, r1, r4, r5, fp, ip, lr, pc}
        1b4f8c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b4f90:	e51b001c 	ldr	r0, [fp, -#28]	; fField28
        1b4f94:	e5901068 	ldr	r1, [r0, #104]	; fField104
        1b4f98:	e3310000 	teq	r1, #0	; 0x0
        1b4f9c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        1b4fa0:	e5901070 	ldr	r1, [r0, #112]	; fField112
        1b4fa4:	e3310000 	teq	r1, #0	; 0x0
        1b4fa8:	05901094 	ldreq	r1, [r0, #148]	; fField148
        1b4fac:	03310000 	teqeq	r1, #0	; 0x0
        1b4fb0:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        1b4fb4:	e51b1018 	ldr	r1, [fp, -#24]
        1b4fb8:	e1a01841 	mov	r1, r1, asr #16
        1b4fbc:	e3710902 	cmn	r1, #32768	; 0x8000
        1b4fc0:	1a000009 	bne	1b4fec <TRootView::DrawCaret(TPoint)+0x68>
        1b4fc4:	e3a01000 	mov	r1, #0	; 0x0
        1b4fc8:	e5a01088 	str	r1, [r0, #136]!	; fField136
        1b4fcc:	e51b001c 	ldr	r0, [fp, -#28]	; fField28
        1b4fd0:	e280108c 	add	r1, r0, #140	; 0x8c
        1b4fd4:	e51b0018 	ldr	r0, [fp, -#24]
        1b4fd8:	e5810000 	str	r0, [r1]
        1b4fdc:	e51b001c 	ldr	r0, [fp, -#28]	; fField28
        1b4fe0:	e5901068 	ldr	r1, [r0, #104]	; fField104
        1b4fe4:	e5a01090 	str	r1, [r0, #144]!	; fField144
        1b4fe8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1b4fec:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b4ff0:	e1a0100d 	mov	r1, sp
        1b4ff4:	e24b0018 	sub	r0, fp, #24	; 0x18
        1b4ff8:	eb6461aa 	bl	1acd6a8 <$CaretPointToRect(TPoint &, TRect *)>
        1b4ffc:	e24dd010 	sub	sp, sp, #16	; 0x10
        1b5000:	e28d1008 	add	r1, sp, #8	; 0x8
        1b5004:	e28d0010 	add	r0, sp, #16	; 0x10
        1b5008:	e8905000 	ldmia	r0, {ip, lr}
        1b500c:	e8815000 	stmia	r1, {ip, lr}
        1b5010:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b5014:	e1a0000d 	mov	r0, sp
        1b5018:	eb68e9e1 	bl	1bef7a4 <$GetPort(GrafPort **)>
        1b501c:	e49d0004 	ldr	r0, [sp], #4	; fField4
        1b5020:	e2800008 	add	r0, r0, #8	; 0x8
        1b5024:	e8905000 	ldmia	r0, {ip, lr}
        1b5028:	e88d5000 	stmia	sp, {ip, lr}
        1b502c:	e28d2010 	add	r2, sp, #16	; 0x10
        1b5030:	e28d1010 	add	r1, sp, #16	; 0x10
        1b5034:	e1a0000d 	mov	r0, sp
        1b5038:	eb667a63 	bl	1b539cc <$SectRect__FP4RectN21>
        1b503c:	e59d0010 	ldr	r0, [sp, #16]
        1b5040:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        1b5044:	e0400001 	sub	r0, r0, r1
        1b5048:	e1a05800 	mov	r5, r0, lsl #16
        1b504c:	e1a05845 	mov	r5, r5, asr #16
        1b5050:	e59d1012 	ldr	r1, [sp, #18]
        1b5054:	e59d000a 	ldr	r0, [sp, #10]
        1b5058:	e0410000 	sub	r0, r1, r0
        1b505c:	e1a04800 	mov	r4, r0, lsl #16
        1b5060:	e1a04844 	mov	r4, r4, asr #16
        1b5064:	e28d0010 	add	r0, sp, #16	; 0x10
        1b5068:	eb6665aa 	bl	1b4e718 <$EmptyRect(Rect *)>
        1b506c:	e3300000 	teq	r0, #0	; 0x0
        1b5070:	1a000020 	bne	1b50f8 <TRootView::DrawCaret(TPoint)+0x174>
        1b5074:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b5078:	e59d101e 	ldr	r1, [sp, #30]
        1b507c:	e59d001a 	ldr	r0, [sp, #26]
        1b5080:	e0410000 	sub	r0, r1, r0
        1b5084:	e0800004 	add	r0, r0, r4
        1b5088:	e1a00800 	mov	r0, r0, lsl #16
        1b508c:	e1a00840 	mov	r0, r0, asr #16
        1b5090:	e59d201c 	ldr	r2, [sp, #28]	; fField28
        1b5094:	e59d1018 	ldr	r1, [sp, #24]
        1b5098:	e0421001 	sub	r1, r2, r1
        1b509c:	e0811005 	add	r1, r1, r5
        1b50a0:	e1a01801 	mov	r1, r1, lsl #16
        1b50a4:	e1a01841 	mov	r1, r1, asr #16
        1b50a8:	e5cd4001 	strb	r4, [sp, #1]	; fField1
        1b50ac:	e1a02444 	mov	r2, r4, asr #8
        1b50b0:	e5cd2000 	strb	r2, [sp]
        1b50b4:	e5cd5003 	strb	r5, [sp, #3]	; fField3
        1b50b8:	e1a02445 	mov	r2, r5, asr #8
        1b50bc:	e5cd2002 	strb	r2, [sp, #2]	; fField2
        1b50c0:	e5cd0005 	strb	r0, [sp, #5]	; fField5
        1b50c4:	e1a00440 	mov	r0, r0, asr #8
        1b50c8:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        1b50cc:	e5cd1007 	strb	r1, [sp, #7]	; fField7
        1b50d0:	e1a00441 	mov	r0, r1, asr #8
        1b50d4:	e5cd0006 	strb	r0, [sp, #6]	; fField6
        1b50d8:	e3a03000 	mov	r3, #0	; 0x0
        1b50dc:	e92d0008 	stmdb	sp!, {r3}
        1b50e0:	e51b001c 	ldr	r0, [fp, -#28]	; fField28
        1b50e4:	e5900084 	ldr	r0, [r0, #132]	; fField132
        1b50e8:	e28d2004 	add	r2, sp, #4	; 0x4
        1b50ec:	e28d101c 	add	r1, sp, #28	; 0x1c
        1b50f0:	eb636597 	bl	1a8e754 <TBits::$CopyFromScreen(TRect const &, TRect const &, long, Region **)>
        1b50f4:	e28dd00c 	add	sp, sp, #12	; 0xc
        1b50f8:	e24dd018 	sub	sp, sp, #24	; 0x18
        1b50fc:	e51b001c 	ldr	r0, [fp, -#28]	; fField28
        1b5100:	e5900068 	ldr	r0, [r0, #104]	; fField104
        1b5104:	eb6469b5 	bl	1acf7e0 <$GetCaretClipView(TView *)>
        1b5108:	e1a01000 	mov	r1, r0
        1b510c:	e1a04000 	mov	r4, r0
        1b5110:	e1a0000d 	mov	r0, sp
        1b5114:	eb685d3d 	bl	1bcc610 <TView::$SetupVisRgn( const(void))>
        1b5118:	e1a0100d 	mov	r1, sp
        1b511c:	e28d0004 	add	r0, sp, #4	; 0x4
        1b5120:	eb6348ad 	bl	1a873dc <TRegionVar::$__ct(TRegion &)>
        1b5124:	e1a0000d 	mov	r0, sp
        1b5128:	e3a01000 	mov	r1, #0	; 0x0
        1b512c:	eb6350d4 	bl	1a89484 <TRegion::$__dt(void)>
        1b5130:	e51b001c 	ldr	r0, [fp, -#28]	; fField28
        1b5134:	e28d2028 	add	r2, sp, #40	; 0x28
        1b5138:	e1a01004 	mov	r1, r4
        1b513c:	e5b03068 	ldr	r3, [r0, #104]!	; fField104
        1b5140:	e1a00003 	mov	r0, r3
        1b5144:	e5933000 	ldr	r3, [r3]
        1b5148:	e1a0e00f 	mov	lr, pc
        1b514c:	e283f078 	add	pc, r3, #120	; 0x78
        1b5150:	e28d0020 	add	r0, sp, #32	; 0x20
        1b5154:	e3a01000 	mov	r1, #0	; 0x0
        1b5158:	eb646571 	bl	1ace724 <$DrawCaretBits(TRect &, unsigned char)>
        1b515c:	e3a01001 	mov	r1, #1	; 0x1
        1b5160:	e51b001c 	ldr	r0, [fp, -#28]	; fField28
        1b5164:	e5a01088 	str	r1, [r0, #136]!	; fField136
        1b5168:	e51b001c 	ldr	r0, [fp, -#28]	; fField28
        1b516c:	e280108c 	add	r1, r0, #140	; 0x8c
        1b5170:	e51b0018 	ldr	r0, [fp, -#24]
        1b5174:	e5810000 	str	r0, [r1]
        1b5178:	e51b001c 	ldr	r0, [fp, -#28]	; fField28
        1b517c:	e5901068 	ldr	r1, [r0, #104]	; fField104
        1b5180:	e5a01090 	str	r1, [r0, #144]!	; fField144
        1b5184:	e59d4004 	ldr	r4, [sp, #4]	; fField4
        1b5188:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b518c:	e1a0000d 	mov	r0, sp
        1b5190:	eb68e983 	bl	1bef7a4 <$GetPort(GrafPort **)>
        1b5194:	e49d0004 	ldr	r0, [sp], #4	; fField4
        1b5198:	e5900024 	ldr	r0, [r0, #36]
        1b519c:	e58d0000 	str	r0, [sp]
        1b51a0:	e1a00004 	mov	r0, r4
        1b51a4:	e59d1000 	ldr	r1, [sp]
        1b51a8:	eb666141 	bl	1b4d6b4 <$CopyRgn__FPP6RegionT1>
        1b51ac:	e28dd004 	add	sp, sp, #4	; 0x4
        1b51b0:	e28d0004 	add	r0, sp, #4	; 0x4
        1b51b4:	e3a01000 	mov	r1, #0	; 0x0
        1b51b8:	eb634ca1 	bl	1a88444 <TRegionVar::$__dt(void)>
        1b51bc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TRootView::RestoreBitsUnderCaret(void)
 * Address: 001b51c0
 */
TRootView::RestoreBitsUnderCaret(void) {
    /*
        1b51c0:	e1a0c00d 	mov	ip, sp
        1b51c4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1b51c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b51cc:	e1a04000 	mov	r4, r0
        1b51d0:	e5900088 	ldr	r0, [r0, #136]	; fField136
        1b51d4:	e3300000 	teq	r0, #0	; 0x0
        1b51d8:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1b51dc:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b51e0:	e1a0100d 	mov	r1, sp
        1b51e4:	e1a00004 	mov	r0, r4
        1b51e8:	eb646980 	bl	1acf7f0 <TRootView::$GetCaretRect(TRect *)>
        1b51ec:	e24dd024 	sub	sp, sp, #36	; 0x24
        1b51f0:	e3a06000 	mov	r6, #0	; 0x0
        1b51f4:	e3a0100c 	mov	r1, #12	; 0xc
        1b51f8:	e3a0000b 	mov	r0, #11	; 0xb
        1b51fc:	e5cd601d 	strb	r6, [sp, #29]
        1b5200:	e5cd601c 	strb	r6, [sp, #28]	; fField28
        1b5204:	e5cd601f 	strb	r6, [sp, #31]
        1b5208:	e5cd601e 	strb	r6, [sp, #30]
        1b520c:	e5cd1021 	strb	r1, [sp, #33]
        1b5210:	e5cd6020 	strb	r6, [sp, #32]	; fField32
        1b5214:	e5cd0023 	strb	r0, [sp, #35]
        1b5218:	e5cd6022 	strb	r6, [sp, #34]
        1b521c:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b5220:	e1a0000d 	mov	r0, sp
        1b5224:	eb68e95e 	bl	1bef7a4 <$GetPort(GrafPort **)>
        1b5228:	e49d0004 	ldr	r0, [sp], #4	; fField4
        1b522c:	e5b07024 	ldr	r7, [r0, #36]!
        1b5230:	eb6671a4 	bl	1b518c8 <$NewRgn(void)>
        1b5234:	e1a05000 	mov	r5, r0
        1b5238:	e1a0100d 	mov	r1, sp
        1b523c:	e3a00000 	mov	r0, #0	; 0x0
        1b5240:	eb68f194 	bl	1bf1898 <$GetGrafInfo(long, void *)>
        1b5244:	e28d1008 	add	r1, sp, #8	; 0x8
        1b5248:	e1a00005 	mov	r0, r5
        1b524c:	eb6679d2 	bl	1b5399c <$RectRgn(Region **, Rect *)>
        1b5250:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b5254:	e1a0000d 	mov	r0, sp
        1b5258:	eb68e951 	bl	1bef7a4 <$GetPort(GrafPort **)>
        1b525c:	e49d0004 	ldr	r0, [sp], #4	; fField4
        1b5260:	e3a03000 	mov	r3, #0	; 0x0
        1b5264:	e5a05024 	str	r5, [r0, #36]!
        1b5268:	e92d0008 	stmdb	sp!, {r3}
        1b526c:	e28d2028 	add	r2, sp, #40	; 0x28
        1b5270:	e28d1020 	add	r1, sp, #32	; 0x20
        1b5274:	e5940084 	ldr	r0, [r4, #132]	; fField132
        1b5278:	eb637197 	bl	1a918dc <TBits::$Draw(TRect const &, TRect const &, long, Region **)>
        1b527c:	e1a0000d 	mov	r0, sp
        1b5280:	eb68e947 	bl	1bef7a4 <$GetPort(GrafPort **)>
        1b5284:	e49d0004 	ldr	r0, [sp], #4	; fField4
        1b5288:	e5a07024 	str	r7, [r0, #36]!
        1b528c:	e1a00005 	mov	r0, r5
        1b5290:	eb666112 	bl	1b4d6e0 <$DisposeRgn(Region **)>
        1b5294:	e5a46088 	str	r6, [r4, #136]!	; fField136
        1b5298:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TRootView::DoCaretClick(TUnitPublic *)
 * Address: 001b529c
 */
TRootView::DoCaretClick(TUnitPublic *) {
    /*
        1b529c:	e1a0c00d 	mov	ip, sp
        1b52a0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1b52a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b52a8:	e1a04000 	mov	r4, r0
        1b52ac:	e1a06001 	mov	r6, r1
        1b52b0:	e3a05000 	mov	r5, #0	; 0x0
        1b52b4:	e5900088 	ldr	r0, [r0, #136]	; fField136
        1b52b8:	e3300000 	teq	r0, #0	; 0x0
        1b52bc:	0a000002 	beq	1b52cc <TRootView::DoCaretClick(TUnitPublic *)+0x30>
        1b52c0:	e5940050 	ldr	r0, [r4, #80]	; fField80
        1b52c4:	e3300000 	teq	r0, #0	; 0x0
        1b52c8:	0a000001 	beq	1b52d4 <TRootView::DoCaretClick(TUnitPublic *)+0x38>
        1b52cc:	e1a00005 	mov	r0, r5
        1b52d0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1b52d4:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b52d8:	e1a0100d 	mov	r1, sp
        1b52dc:	e59f0140 	ldr	r0, [pc, #140]	; 1b5424 <TRootView::DoCaretClick(TUnitPublic *)+0x188>
        1b52e0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1b52e4:	eb646941 	bl	1acf7f0 <TRootView::$GetCaretRect(TRect *)>
        1b52e8:	e284008c 	add	r0, r4, #140	; 0x8c
        1b52ec:	e1a0100d 	mov	r1, sp
        1b52f0:	eb6460ec 	bl	1acd6a8 <$CaretPointToRect(TPoint &, TRect *)>
        1b52f4:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b52f8:	e28d1008 	add	r1, sp, #8	; 0x8
        1b52fc:	e8915000 	ldmia	r1, {ip, lr}
        1b5300:	e88d5000 	stmia	sp, {ip, lr}
        1b5304:	e1a0000d 	mov	r0, sp
        1b5308:	e3e01001 	mvn	r1, #1	; 0x1
        1b530c:	e1a02001 	mov	r2, r1
        1b5310:	eb666d4a 	bl	1b50840 <$InsetRect__FP4RectlT2>
        1b5314:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b5318:	e1a00006 	mov	r0, r6
        1b531c:	eb63b7b3 	bl	1aa31f0 <TUnitPublic::$Stroke(void)>
        1b5320:	e1a01000 	mov	r1, r0
        1b5324:	e1a07000 	mov	r7, r0
        1b5328:	e1a0000d 	mov	r0, sp
        1b532c:	eb637dc3 	bl	1a94a40 <TStrokePublic::$FirstPoint(void)>
        1b5330:	e41d0004 	ldr	r0, [sp], -#4	; fField4
        1b5334:	e48d0004 	str	r0, [sp], #4	; fField4
        1b5338:	e28d1004 	add	r1, sp, #4	; 0x4
        1b533c:	eb66757e 	bl	1b5293c <$PtInRect(Point, Rect *)>
        1b5340:	e3300000 	teq	r0, #0	; 0x0
        1b5344:	01a00005 	moveq	r0, r5
        1b5348:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1b534c:	e24dd014 	sub	sp, sp, #20	; 0x14
        1b5350:	e1a0000d 	mov	r0, sp
        1b5354:	eb634821 	bl	1a873e0 <TRegionVar::$__ct(void)>
        1b5358:	e28d1018 	add	r1, sp, #24	; 0x18
        1b535c:	e59d0000 	ldr	r0, [sp]
        1b5360:	eb66798d 	bl	1b5399c <$RectRgn(Region **, Rect *)>
        1b5364:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        1b5368:	e5940090 	ldr	r0, [r4, #144]	; fField144
        1b536c:	eb64691b 	bl	1acf7e0 <$GetCaretClipView(TView *)>
        1b5370:	e1a01000 	mov	r1, r0
        1b5374:	e1a06000 	mov	r6, r0
        1b5378:	e1a0000d 	mov	r0, sp
        1b537c:	eb685ca3 	bl	1bcc610 <TView::$SetupVisRgn( const(void))>
        1b5380:	e1a0100d 	mov	r1, sp
        1b5384:	e28d0008 	add	r0, sp, #8	; 0x8
        1b5388:	eb634813 	bl	1a873dc <TRegionVar::$__ct(TRegion &)>
        1b538c:	e1a0000d 	mov	r0, sp
        1b5390:	e3a01000 	mov	r1, #0	; 0x0
        1b5394:	eb63503a 	bl	1a89484 <TRegion::$__dt(void)>
        1b5398:	e28d203c 	add	r2, sp, #60	; 0x3c
        1b539c:	e1a01006 	mov	r1, r6
        1b53a0:	e5943090 	ldr	r3, [r4, #144]	; fField144
        1b53a4:	e1a00003 	mov	r0, r3
        1b53a8:	e5933000 	ldr	r3, [r3]
        1b53ac:	e1a0e00f 	mov	lr, pc
        1b53b0:	e283f078 	add	pc, r3, #120	; 0x78
        1b53b4:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b53b8:	e1a0000d 	mov	r0, sp
        1b53bc:	eb68e8f8 	bl	1bef7a4 <$GetPort(GrafPort **)>
        1b53c0:	e49d0004 	ldr	r0, [sp], #4	; fField4
        1b53c4:	e5900024 	ldr	r0, [r0, #36]
        1b53c8:	e58d0004 	str	r0, [sp, #4]	; fField4
        1b53cc:	e1a01000 	mov	r1, r0
        1b53d0:	e59d201c 	ldr	r2, [sp, #28]	; fField28
        1b53d4:	e1a00002 	mov	r0, r2
        1b53d8:	eb66797c 	bl	1b539d0 <$SectRgn__FPP6RegionN21>
        1b53dc:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b53e0:	e59d0034 	ldr	r0, [sp, #52]	; fField52
        1b53e4:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        1b53e8:	e59d1024 	ldr	r1, [sp, #36]
        1b53ec:	e28dd004 	add	sp, sp, #4	; 0x4
        1b53f0:	eb667552 	bl	1b52940 <$PtInRgn(Point, Region **)>
        1b53f4:	e3300000 	teq	r0, #0	; 0x0
        1b53f8:	1a00000a 	bne	1b5428 <TRootView::DoCaretClick(TUnitPublic *)+0x18c>
        1b53fc:	e59d400c 	ldr	r4, [sp, #12]
        1b5400:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b5404:	e1a0000d 	mov	r0, sp
        1b5408:	eb68e8e5 	bl	1bef7a4 <$GetPort(GrafPort **)>
        1b540c:	e49d0004 	ldr	r0, [sp], #4	; fField4
        1b5410:	e5900024 	ldr	r0, [r0, #36]
        1b5414:	e58d0000 	str	r0, [sp]
        1b5418:	e1a00004 	mov	r0, r4
        1b541c:	e59d1000 	ldr	r1, [sp]
        1b5420:	ea000075 	b	1b55fc <TRootView::DoCaretClick(TUnitPublic *)+0x360>
        1b5424:	0c101930 	ldceq	9, cr1, [r0], -#192
        1b5428:	e3a00002 	mov	r0, #2	; 0x2
        1b542c:	eb683346 	bl	1bc214c <$AllocateRefHandle(long)>
        1b5430:	e58d0000 	str	r0, [sp]
        1b5434:	e1a0000d 	mov	r0, sp
        1b5438:	eb643fa7 	bl	1ac52dc <$FClicker>
        1b543c:	e59d0000 	ldr	r0, [sp]
        1b5440:	eb68375d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b5444:	e3a06000 	mov	r6, #0	; 0x0
        1b5448:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b544c:	e1a01007 	mov	r1, r7
        1b5450:	e1a0000d 	mov	r0, sp
        1b5454:	eb63795a 	bl	1a939c4 <TStrokePublic::$FinalPoint(void)>
        1b5458:	e41d0004 	ldr	r0, [sp], -#4	; fField4
        1b545c:	e48d0004 	str	r0, [sp], #4	; fField4
        1b5460:	e59d1024 	ldr	r1, [sp, #36]
        1b5464:	eb667535 	bl	1b52940 <$PtInRgn(Point, Region **)>
        1b5468:	e1a08000 	mov	r8, r0
        1b546c:	e1300006 	teq	r0, r6
        1b5470:	0a000004 	beq	1b5488 <TRootView::DoCaretClick(TUnitPublic *)+0x1ec>
        1b5474:	e1a01008 	mov	r1, r8
        1b5478:	e28d0044 	add	r0, sp, #68	; 0x44
        1b547c:	eb6464a8 	bl	1ace724 <$DrawCaretBits(TRect &, unsigned char)>
        1b5480:	e1a06008 	mov	r6, r8
        1b5484:	ea000001 	b	1b5490 <TRootView::DoCaretClick(TUnitPublic *)+0x1f4>
        1b5488:	e3a00001 	mov	r0, #1	; 0x1
        1b548c:	eb63bf99 	bl	1aa52f8 <$Wait(unsigned long)>
        1b5490:	e28dd004 	add	sp, sp, #4	; 0x4
        1b5494:	e1a00007 	mov	r0, r7
        1b5498:	eb637101 	bl	1a918a4 <TStrokePublic::$Done(void)>
        1b549c:	e3300000 	teq	r0, #0	; 0x0
        1b54a0:	0affffe8 	beq	1b5448 <TRootView::DoCaretClick(TUnitPublic *)+0x1ac>
        1b54a4:	e3360000 	teq	r6, #0	; 0x0
        1b54a8:	0a00004a 	beq	1b55d8 <TRootView::DoCaretClick(TUnitPublic *)+0x33c>
        1b54ac:	e28d0040 	add	r0, sp, #64	; 0x40
        1b54b0:	e3a01000 	mov	r1, #0	; 0x0
        1b54b4:	eb64649a 	bl	1ace724 <$DrawCaretBits(TRect &, unsigned char)>
        1b54b8:	e59d600c 	ldr	r6, [sp, #12]
        1b54bc:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b54c0:	e1a0000d 	mov	r0, sp
        1b54c4:	eb68e8b6 	bl	1bef7a4 <$GetPort(GrafPort **)>
        1b54c8:	e49d0004 	ldr	r0, [sp], #4	; fField4
        1b54cc:	e5900024 	ldr	r0, [r0, #36]
        1b54d0:	e58d0000 	str	r0, [sp]
        1b54d4:	e1a00006 	mov	r0, r6
        1b54d8:	e59d1000 	ldr	r1, [sp]
        1b54dc:	eb666074 	bl	1b4d6b4 <$CopyRgn__FPP6RegionT1>
        1b54e0:	e28dd004 	add	sp, sp, #4	; 0x4
        1b54e4:	e5940068 	ldr	r0, [r4, #104]	; fField104
        1b54e8:	e3300000 	teq	r0, #0	; 0x0
        1b54ec:	0a00002f 	beq	1b55b0 <TRootView::DoCaretClick(TUnitPublic *)+0x314>
        1b54f0:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b54f4:	e59f10d4 	ldr	r1, [pc, #d4]	; 1b55d0 <TRootView::DoCaretClick(TUnitPublic *)+0x334>
        1b54f8:	eb685416 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        1b54fc:	eb683312 	bl	1bc214c <$AllocateRefHandle(long)>
        1b5500:	e58d0000 	str	r0, [sp]
        1b5504:	e5900000 	ldr	r0, [r0]
        1b5508:	e3300002 	teq	r0, #2	; 0x2
        1b550c:	0a000024 	beq	1b55a4 <TRootView::DoCaretClick(TUnitPublic *)+0x308>
        1b5510:	e24dd00c 	sub	sp, sp, #12	; 0xc
        1b5514:	e28d300c 	add	r3, sp, #12	; 0xc
        1b5518:	e92d0008 	stmdb	sp!, {r3}
        1b551c:	e59d0058 	ldr	r0, [sp, #88]	; fField88
        1b5520:	e1a00840 	mov	r0, r0, asr #16
        1b5524:	e1a00100 	mov	r0, r0, lsl #2
        1b5528:	eb683307 	bl	1bc214c <$AllocateRefHandle(long)>
        1b552c:	e58d0004 	str	r0, [sp, #4]	; fField4
        1b5530:	e28d5004 	add	r5, sp, #4	; 0x4
        1b5534:	e59d005a 	ldr	r0, [sp, #90]
        1b5538:	e1a00840 	mov	r0, r0, asr #16
        1b553c:	e1a00100 	mov	r0, r0, lsl #2
        1b5540:	eb683301 	bl	1bc214c <$AllocateRefHandle(long)>
        1b5544:	e58d0008 	str	r0, [sp, #8]	; fField8
        1b5548:	e28d6008 	add	r6, sp, #8	; 0x8
        1b554c:	e59f1080 	ldr	r1, [pc, #80]	; 1b55d4 <TRootView::DoCaretClick(TUnitPublic *)+0x338>	; fField80
        1b5550:	e28d0010 	add	r0, sp, #16	; 0x10
        1b5554:	e3a02000 	mov	r2, #0	; 0x0
        1b5558:	eb683b42 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        1b555c:	eb6832fa 	bl	1bc214c <$AllocateRefHandle(long)>
        1b5560:	e58d000c 	str	r0, [sp, #12]
        1b5564:	e28d100c 	add	r1, sp, #12	; 0xc
        1b5568:	e2840024 	add	r0, r4, #36	; 0x24
        1b556c:	e1a02006 	mov	r2, r6
        1b5570:	e1a03005 	mov	r3, r5
        1b5574:	eb64815d 	bl	1ad5af0 <$FDoPopup__FRC6RefVarN41>
        1b5578:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        1b557c:	eb68370e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b5580:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1b5584:	eb68370c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b5588:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        1b558c:	eb68370a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b5590:	e1a00007 	mov	r0, r7
        1b5594:	e3a01001 	mov	r1, #1	; 0x1
        1b5598:	eb6391d7 	bl	1a99cfc <TStrokePublic::$InkOff(unsigned char)>
        1b559c:	e3a05001 	mov	r5, #1	; 0x1
        1b55a0:	e28dd00c 	add	sp, sp, #12	; 0xc
        1b55a4:	e59d0000 	ldr	r0, [sp]
        1b55a8:	eb683703 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b55ac:	e28dd004 	add	sp, sp, #4	; 0x4
        1b55b0:	e28d000c 	add	r0, sp, #12	; 0xc
        1b55b4:	e3a01000 	mov	r1, #0	; 0x0
        1b55b8:	eb634ba1 	bl	1a88444 <TRegionVar::$__dt(void)>
        1b55bc:	e28d0020 	add	r0, sp, #32	; 0x20
        1b55c0:	e3a01000 	mov	r1, #0	; 0x0
        1b55c4:	eb634b9e 	bl	1a88444 <TRegionVar::$__dt(void)>
        1b55c8:	e1a00005 	mov	r0, r5
        1b55cc:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1b55d0:	006852c8 	rsbeq	r5, r8, r8, asr #5
        1b55d4:	00683f40 	rsbeq	r3, r8, r0, asr #30
        1b55d8:	e59d400c 	ldr	r4, [sp, #12]
        1b55dc:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b55e0:	e1a0000d 	mov	r0, sp
        1b55e4:	eb68e86e 	bl	1bef7a4 <$GetPort(GrafPort **)>
        1b55e8:	e49d0004 	ldr	r0, [sp], #4	; fField4
        1b55ec:	e5900024 	ldr	r0, [r0, #36]
        1b55f0:	e58d0000 	str	r0, [sp]
        1b55f4:	e1a00004 	mov	r0, r4
        1b55f8:	e59d1000 	ldr	r1, [sp]
        1b55fc:	eb66602c 	bl	1b4d6b4 <$CopyRgn__FPP6RegionT1>
        1b5600:	eaffffe9 	b	1b55ac <TRootView::DoCaretClick(TUnitPublic *)+0x310>
    */
}

/**
 * Symbol: TRootView::HideCaret(void)
 * Address: 001b5604
 */
TRootView::HideCaret(void) {
    /*
        1b5604:	e1a0c00d 	mov	ip, sp
        1b5608:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1b560c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b5610:	e1a04000 	mov	r4, r0
        1b5614:	e5900088 	ldr	r0, [r0, #136]	; fField136
        1b5618:	e3300000 	teq	r0, #0	; 0x0
        1b561c:	11a00004 	movne	r0, r4
        1b5620:	1b6478d9 	blne	1ad398c <TRootView::$RestoreBitsUnderCaret(void)>
        1b5624:	e5940094 	ldr	r0, [r4, #148]	; fField148
        1b5628:	e2800001 	add	r0, r0, #1	; 0x1
        1b562c:	e5a40094 	str	r0, [r4, #148]!	; fField148
        1b5630:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TRootView::ShowCaret(void)
 * Address: 001b5634
 */
TRootView::ShowCaret(void) {
    /*
        1b5634:	e5901094 	ldr	r1, [r0, #148]	; fField148
        1b5638:	e2511001 	subs	r1, r1, #1	; 0x1
        1b563c:	e5801094 	str	r1, [r0, #148]	; fField148
        1b5640:	43a01000 	movmi	r1, #0	; 0x0
        1b5644:	45a01094 	strmi	r1, [r0, #148]!	; fField148
        1b5648:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRootView::DirtyCaret(void)
 * Address: 001b5694
 */
TRootView::DirtyCaret(void) {
    /*
        1b5694:	e1a0c00d 	mov	ip, sp
        1b5698:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1b569c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b56a0:	e1a04000 	mov	r4, r0
        1b56a4:	e5900088 	ldr	r0, [r0, #136]	; fField136
        1b56a8:	e3300000 	teq	r0, #0	; 0x0
        1b56ac:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        1b56b0:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b56b4:	e1a0100d 	mov	r1, sp
        1b56b8:	e1a00004 	mov	r0, r4
        1b56bc:	eb64684b 	bl	1acf7f0 <TRootView::$GetCaretRect(TRect *)>
        1b56c0:	e1a0100d 	mov	r1, sp
        1b56c4:	e1a00004 	mov	r0, r4
        1b56c8:	eb63b6b9 	bl	1aa31b4 <TRootView::$SmartInvalidate(TRect const &)>
        1b56cc:	e3a00000 	mov	r0, #0	; 0x0
        1b56d0:	e5a40088 	str	r0, [r4, #136]!	; fField136
        1b56d4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TRootView::SetPopup(TView *, unsigned char)
 * Address: 001b56d8
 */
TRootView::SetPopup(TView *, unsigned char) {
    /*
        1b56d8:	e1a0c00d 	mov	ip, sp
        1b56dc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1b56e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b56e4:	e1a05000 	mov	r5, r0
        1b56e8:	e1a04001 	mov	r4, r1
        1b56ec:	e31200ff 	tst	r2, #255	; 0xff
        1b56f0:	e3a06000 	mov	r6, #0	; 0x0
        1b56f4:	e5950050 	ldr	r0, [r5, #80]	; fField80
        1b56f8:	0a000020 	beq	1b5780 <TRootView::SetPopup(TView *, unsigned char)+0xa8>
        1b56fc:	e3300000 	teq	r0, #0	; 0x0
        1b5700:	11300004 	teqne	r0, r4
        1b5704:	0a000005 	beq	1b5720 <TRootView::SetPopup(TView *, unsigned char)+0x48>
        1b5708:	e3340000 	teq	r4, #0	; 0x0
        1b570c:	0a000007 	beq	1b5730 <TRootView::SetPopup(TView *, unsigned char)+0x58>
        1b5710:	e2802024 	add	r2, r0, #36	; 0x24
        1b5714:	e2840024 	add	r0, r4, #36	; 0x24
        1b5718:	e59f100c 	ldr	r1, [pc, #c]	; 1b572c <TRootView::SetPopup(TView *, unsigned char)+0x54>
        1b571c:	eb684311 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1b5720:	e3340000 	teq	r4, #0	; 0x0
        1b5724:	15a54050 	strne	r4, [r5, #80]!	; fField80
        1b5728:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1b572c:	00683f40 	rsbeq	r3, r8, r0, asr #30
        1b5730:	e590101c 	ldr	r1, [r0, #28]	; fField28
        1b5734:	e1a02000 	mov	r2, r0
        1b5738:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b573c:	e59f0034 	ldr	r0, [pc, #34]	; 1b5778 <TRootView::SetPopup(TView *, unsigned char)+0xa0>
        1b5740:	e5904000 	ldr	r4, [r0]
        1b5744:	e3a0002a 	mov	r0, #42	; 0x2a
        1b5748:	eb63c2fc 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
        1b574c:	eb68327e 	bl	1bc214c <$AllocateRefHandle(long)>
        1b5750:	e58d0000 	str	r0, [sp]
        1b5754:	e1a0100d 	mov	r1, sp
        1b5758:	e1a00004 	mov	r0, r4
        1b575c:	eb636c35 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
        1b5760:	e59d0000 	ldr	r0, [sp]
        1b5764:	eb683694 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b5768:	e3a01001 	mov	r1, #1	; 0x1
        1b576c:	e59f0008 	ldr	r0, [pc, #8]	; 1b577c <TRootView::SetPopup(TView *, unsigned char)+0xa4>	; fField8
        1b5770:	e5c01018 	strb	r1, [r0, #24]
        1b5774:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1b5778:	0c1054ac 	ldceq	4, cr5, [r0], -#688
        1b577c:	0c101930 	ldceq	9, cr1, [r0], -#192
        1b5780:	e1300004 	teq	r0, r4
        1b5784:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        1b5788:	e51f1064 	ldr	r1, [pc, #ffffff9c]	; 1b572c <TRootView::SetPopup(TView *, unsigned char)+0x54>
        1b578c:	e5911000 	ldr	r1, [r1]
        1b5790:	e5911000 	ldr	r1, [r1]
        1b5794:	e5900024 	ldr	r0, [r0, #36]
        1b5798:	e5900000 	ldr	r0, [r0]
        1b579c:	eb683aaf 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        1b57a0:	eb683269 	bl	1bc214c <$AllocateRefHandle(long)>
        1b57a4:	e1a04000 	mov	r4, r0
        1b57a8:	e5900000 	ldr	r0, [r0]
        1b57ac:	e3300002 	teq	r0, #2	; 0x2
        1b57b0:	0a000007 	beq	1b57d4 <TRootView::SetPopup(TView *, unsigned char)+0xfc>
        1b57b4:	e59f1014 	ldr	r1, [pc, #14]	; 1b57d0 <TRootView::SetPopup(TView *, unsigned char)+0xf8>
        1b57b8:	e5911000 	ldr	r1, [r1]
        1b57bc:	e5911000 	ldr	r1, [r1]
        1b57c0:	eb683aa6 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        1b57c4:	eb63aa05 	bl	1a9ffe0 <$RefToAddress(long)>
        1b57c8:	e5a50050 	str	r0, [r5, #80]!	; fField80
        1b57cc:	ea000001 	b	1b57d8 <TRootView::SetPopup(TView *, unsigned char)+0x100>
        1b57d0:	00684f48 	rsbeq	r4, r8, r8, asr #30
        1b57d4:	e5a56050 	str	r6, [r5, #80]!	; fField80
        1b57d8:	e1a00004 	mov	r0, r4
        1b57dc:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        1b57e0:	ea683675 	b	1bc31bc <$DisposeRefHandle(RefHandle *)>
    */
}

/**
 * Symbol: TRootView::GetFrontmostModalView(void)
 * Address: 001b584c
 */
TRootView::GetFrontmostModalView(void) {
    /*
        1b584c:	e1a0c00d 	mov	ip, sp
        1b5850:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1b5854:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b5858:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b585c:	e5b01020 	ldr	r1, [r0, #32]!	; fField32
        1b5860:	e1a0000d 	mov	r0, sp
        1b5864:	eb6346e0 	bl	1a873ec <TBackwardLoop::$__ct(CList *)>
        1b5868:	e1a0000d 	mov	r0, sp
        1b586c:	eb639d68 	bl	1a9ce14 <TBackwardLoop::$Next(void)>
        1b5870:	e1b04000 	movs	r4, r0
        1b5874:	0a00000d 	beq	1b58b0 <TRootView::GetFrontmostModalView(void)+0x64>
        1b5878:	e59f5038 	ldr	r5, [pc, #38]	; 1b58b8 <TRootView::GetFrontmostModalView(void)+0x6c>
        1b587c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        1b5880:	e3100001 	tst	r0, #1	; 0x1
        1b5884:	0a000005 	beq	1b58a0 <TRootView::GetFrontmostModalView(void)+0x54>
        1b5888:	e1a01005 	mov	r1, r5
        1b588c:	e1a00004 	mov	r0, r4
        1b5890:	eb68532c 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        1b5894:	e3300002 	teq	r0, #2	; 0x2
        1b5898:	11a00004 	movne	r0, r4
        1b589c:	1a000004 	bne	1b58b4 <TRootView::GetFrontmostModalView(void)+0x68>
        1b58a0:	e1a0000d 	mov	r0, sp
        1b58a4:	eb639d5a 	bl	1a9ce14 <TBackwardLoop::$Next(void)>
        1b58a8:	e1b04000 	movs	r4, r0
        1b58ac:	1afffff2 	bne	1b587c <TRootView::GetFrontmostModalView(void)+0x30>
        1b58b0:	e3a00000 	mov	r0, #0	; 0x0
        1b58b4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1b58b8:	006838d0 	ldreqd	r3, [r8], -#128	; fField128
    */
}

/**
 * Symbol: TRootView::GetClipboard(void)
 * Address: 001b58bc
 */
TRootView::GetClipboard(void) {
    /*
        1b58bc:	e1a0c00d 	mov	ip, sp
        1b58c0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1b58c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b58c8:	e3a04000 	mov	r4, #0	; 0x0
        1b58cc:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b58d0:	e2800058 	add	r0, r0, #88	; 0x58
        1b58d4:	e1a05000 	mov	r5, r0
        1b58d8:	e5900000 	ldr	r0, [r0]
        1b58dc:	e5900000 	ldr	r0, [r0]
        1b58e0:	e3300002 	teq	r0, #2	; 0x2
        1b58e4:	0a00000d 	beq	1b5920 <TRootView::GetClipboard(void)+0x64>
        1b58e8:	eb683e6f 	bl	1bc52ac <$Length(long)>
        1b58ec:	e3500000 	cmp	r0, #0	; 0x0
        1b58f0:	da00000a 	ble	1b5920 <TRootView::GetClipboard(void)+0x64>
        1b58f4:	e5950000 	ldr	r0, [r5]
        1b58f8:	e5900000 	ldr	r0, [r0]
        1b58fc:	e3a01000 	mov	r1, #0	; 0x0
        1b5900:	eb683a53 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1b5904:	eb683210 	bl	1bc214c <$AllocateRefHandle(long)>
        1b5908:	e58d0000 	str	r0, [sp]
        1b590c:	e1a0000d 	mov	r0, sp
        1b5910:	eb685311 	bl	1bca55c <$GetView(RefVar const &)>
        1b5914:	e1a04000 	mov	r4, r0
        1b5918:	e59d0000 	ldr	r0, [sp]
        1b591c:	eb683626 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b5920:	e1a00004 	mov	r0, r4
        1b5924:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TRootView::GetClipboardIcon(void)
 * Address: 001b5928
 */
TRootView::GetClipboardIcon(void) {
    /*
        1b5928:	e1a0c00d 	mov	ip, sp
        1b592c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1b5930:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b5934:	e3a04000 	mov	r4, #0	; 0x0
        1b5938:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b593c:	e2800054 	add	r0, r0, #84	; 0x54
        1b5940:	e1a05000 	mov	r5, r0
        1b5944:	e5900000 	ldr	r0, [r0]
        1b5948:	e5900000 	ldr	r0, [r0]
        1b594c:	e3300002 	teq	r0, #2	; 0x2
        1b5950:	0a00000d 	beq	1b598c <TRootView::GetClipboardIcon(void)+0x64>
        1b5954:	eb683e54 	bl	1bc52ac <$Length(long)>
        1b5958:	e3500000 	cmp	r0, #0	; 0x0
        1b595c:	da00000a 	ble	1b598c <TRootView::GetClipboardIcon(void)+0x64>
        1b5960:	e5950000 	ldr	r0, [r5]
        1b5964:	e5900000 	ldr	r0, [r0]
        1b5968:	e3a01000 	mov	r1, #0	; 0x0
        1b596c:	eb683a38 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1b5970:	eb6831f5 	bl	1bc214c <$AllocateRefHandle(long)>
        1b5974:	e58d0000 	str	r0, [sp]
        1b5978:	e1a0000d 	mov	r0, sp
        1b597c:	eb6852f6 	bl	1bca55c <$GetView(RefVar const &)>
        1b5980:	e1a04000 	mov	r4, r0
        1b5984:	e59d0000 	ldr	r0, [sp]
        1b5988:	eb68360b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b598c:	e1a00004 	mov	r0, r4
        1b5990:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TRootView::GetClipboard(TView *)
 * Address: 001b5994
 */
TRootView::GetClipboard(TView *) {
    /*
        1b5994:	e1a0c00d 	mov	ip, sp
        1b5998:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1b599c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b59a0:	e1a04000 	mov	r4, r0
        1b59a4:	e1a05001 	mov	r5, r1
        1b59a8:	e3a06000 	mov	r6, #0	; 0x0
        1b59ac:	e2800054 	add	r0, r0, #84	; 0x54
        1b59b0:	e1a07000 	mov	r7, r0
        1b59b4:	e5900000 	ldr	r0, [r0]
        1b59b8:	e5900000 	ldr	r0, [r0]
        1b59bc:	e3300002 	teq	r0, #2	; 0x2
        1b59c0:	0a000024 	beq	1b5a58 <TRootView::GetClipboard(TView *)+0xc4>
        1b59c4:	eb683e38 	bl	1bc52ac <$Length(long)>
        1b59c8:	e3500000 	cmp	r0, #0	; 0x0
        1b59cc:	da000021 	ble	1b5a58 <TRootView::GetClipboard(TView *)+0xc4>
        1b59d0:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b59d4:	e3a00002 	mov	r0, #2	; 0x2
        1b59d8:	eb6831db 	bl	1bc214c <$AllocateRefHandle(long)>
        1b59dc:	e58d0000 	str	r0, [sp]
        1b59e0:	e1a0300d 	mov	r3, sp
        1b59e4:	e92d0008 	stmdb	sp!, {r3}
        1b59e8:	e3a00000 	mov	r0, #0	; 0x0
        1b59ec:	eb6831d6 	bl	1bc214c <$AllocateRefHandle(long)>
        1b59f0:	e58d0008 	str	r0, [sp, #8]	; fField8
        1b59f4:	e28d2008 	add	r2, sp, #8	; 0x8
        1b59f8:	e2851024 	add	r1, r5, #36	; 0x24
        1b59fc:	e1a00007 	mov	r0, r7
        1b5a00:	e59f3058 	ldr	r3, [pc, #58]	; 1b5a60 <TRootView::GetClipboard(TView *)+0xcc>
        1b5a04:	eb694eb8 	bl	1c094ec <$LSearch__FRC6RefVarN41>
        1b5a08:	e1a05000 	mov	r5, r0
        1b5a0c:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        1b5a10:	eb6835e9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b5a14:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1b5a18:	eb6835e7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b5a1c:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b5a20:	e3550000 	cmp	r5, #0	; 0x0
        1b5a24:	ba00000a 	blt	1b5a54 <TRootView::GetClipboard(TView *)+0xc0>
        1b5a28:	e5940058 	ldr	r0, [r4, #88]	; fField88
        1b5a2c:	e5900000 	ldr	r0, [r0]
        1b5a30:	e1a01005 	mov	r1, r5
        1b5a34:	eb683a06 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1b5a38:	eb6831c3 	bl	1bc214c <$AllocateRefHandle(long)>
        1b5a3c:	e58d0000 	str	r0, [sp]
        1b5a40:	e1a0000d 	mov	r0, sp
        1b5a44:	eb6852c4 	bl	1bca55c <$GetView(RefVar const &)>
        1b5a48:	e1a06000 	mov	r6, r0
        1b5a4c:	e59d0000 	ldr	r0, [sp]
        1b5a50:	eb6835d9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b5a54:	e28dd00c 	add	sp, sp, #12	; 0xc
        1b5a58:	e1a00006 	mov	r0, r6
        1b5a5c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1b5a60:	00681ce8 	rsbeq	r1, r8, r8, ror #25
    */
}

/**
 * Symbol: TRootView::GetClipboardIcon(TClipboard *)
 * Address: 001b5a64
 */
TRootView::GetClipboardIcon(TClipboard *) {
    /*
        1b5a64:	e1a0c00d 	mov	ip, sp
        1b5a68:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1b5a6c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b5a70:	e1a04000 	mov	r4, r0
        1b5a74:	e1a05001 	mov	r5, r1
        1b5a78:	e3a06000 	mov	r6, #0	; 0x0
        1b5a7c:	e2800058 	add	r0, r0, #88	; 0x58
        1b5a80:	e1a07000 	mov	r7, r0
        1b5a84:	e5900000 	ldr	r0, [r0]
        1b5a88:	e5900000 	ldr	r0, [r0]
        1b5a8c:	e3300002 	teq	r0, #2	; 0x2
        1b5a90:	0a000024 	beq	1b5b28 <TRootView::GetClipboardIcon(TClipboard *)+0xc4>
        1b5a94:	eb683e04 	bl	1bc52ac <$Length(long)>
        1b5a98:	e3500000 	cmp	r0, #0	; 0x0
        1b5a9c:	da000021 	ble	1b5b28 <TRootView::GetClipboardIcon(TClipboard *)+0xc4>
        1b5aa0:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b5aa4:	e3a00002 	mov	r0, #2	; 0x2
        1b5aa8:	eb6831a7 	bl	1bc214c <$AllocateRefHandle(long)>
        1b5aac:	e58d0000 	str	r0, [sp]
        1b5ab0:	e1a0300d 	mov	r3, sp
        1b5ab4:	e92d0008 	stmdb	sp!, {r3}
        1b5ab8:	e3a00000 	mov	r0, #0	; 0x0
        1b5abc:	eb6831a2 	bl	1bc214c <$AllocateRefHandle(long)>
        1b5ac0:	e58d0008 	str	r0, [sp, #8]	; fField8
        1b5ac4:	e28d2008 	add	r2, sp, #8	; 0x8
        1b5ac8:	e2851024 	add	r1, r5, #36	; 0x24
        1b5acc:	e1a00007 	mov	r0, r7
        1b5ad0:	e59f3058 	ldr	r3, [pc, #58]	; 1b5b30 <TRootView::GetClipboardIcon(TClipboard *)+0xcc>
        1b5ad4:	eb694e84 	bl	1c094ec <$LSearch__FRC6RefVarN41>
        1b5ad8:	e1a05000 	mov	r5, r0
        1b5adc:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        1b5ae0:	eb6835b5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b5ae4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1b5ae8:	eb6835b3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b5aec:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b5af0:	e3550000 	cmp	r5, #0	; 0x0
        1b5af4:	ba00000a 	blt	1b5b24 <TRootView::GetClipboardIcon(TClipboard *)+0xc0>
        1b5af8:	e5940054 	ldr	r0, [r4, #84]	; fField84
        1b5afc:	e5900000 	ldr	r0, [r0]
        1b5b00:	e1a01005 	mov	r1, r5
        1b5b04:	eb6839d2 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1b5b08:	eb68318f 	bl	1bc214c <$AllocateRefHandle(long)>
        1b5b0c:	e58d0000 	str	r0, [sp]
        1b5b10:	e1a0000d 	mov	r0, sp
        1b5b14:	eb685290 	bl	1bca55c <$GetView(RefVar const &)>
        1b5b18:	e1a06000 	mov	r6, r0
        1b5b1c:	e59d0000 	ldr	r0, [sp]
        1b5b20:	eb6835a5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b5b24:	e28dd00c 	add	sp, sp, #12	; 0xc
        1b5b28:	e1a00006 	mov	r0, r6
        1b5b2c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1b5b30:	00681ce8 	rsbeq	r1, r8, r8, ror #25
    */
}

/**
 * Symbol: TRootView::GetClipboardIcons(void)
 * Address: 001b5b54
 */
TRootView::GetClipboardIcons(void) {
    /*
        1b5b54:	e59f000c 	ldr	r0, [pc, #c]	; 1b5b68 <TRootView::GetClipboardIcons(void)+0x14>
        1b5b58:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1b5b5c:	e5900054 	ldr	r0, [r0, #84]	; fField84
        1b5b60:	e5900000 	ldr	r0, [r0]
        1b5b64:	e1a0f00e 	mov	pc, lr
        1b5b68:	0c101930 	ldceq	9, cr1, [r0], -#192
    */
}

/**
 * Symbol: TRootView::RemoveAllViews(void)
 * Address: 001b5b6c
 */
TRootView::RemoveAllViews(void) {
    /*
        1b5b6c:	e1a0c00d 	mov	ip, sp
        1b5b70:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1b5b74:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b5b78:	e1a04000 	mov	r4, r0
        1b5b7c:	eb64c1ec 	bl	1ae6334 <TRootView::$GetClipboard(void)>
        1b5b80:	e3300000 	teq	r0, #0	; 0x0
        1b5b84:	0a000005 	beq	1b5ba0 <TRootView::RemoveAllViews(void)+0x34>
        1b5b88:	e1a00004 	mov	r0, r4
        1b5b8c:	eb6424eb 	bl	1abef40 <TRootView::$RemoveClipboard(void)>
        1b5b90:	e1a00004 	mov	r0, r4
        1b5b94:	eb64c1e6 	bl	1ae6334 <TRootView::$GetClipboard(void)>
        1b5b98:	e3300000 	teq	r0, #0	; 0x0
        1b5b9c:	1afffff9 	bne	1b5b88 <TRootView::RemoveAllViews(void)+0x1c>
        1b5ba0:	e1a00004 	mov	r0, r4
        1b5ba4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1b5ba8:	ea685685 	b	1bcb5c4 <TView::$RemoveAllViews(void)>
    */
}

