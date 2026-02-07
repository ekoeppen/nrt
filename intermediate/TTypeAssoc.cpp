#include "include/TTypeAssoc.h"

/**
 * Symbol: Make__10TTypeAssocSFv
 * Address: 0022c778
 */
void TTypeAssoc::Make() {
    /*
        22c778:	e1a0c00d 	mov	ip, sp
        22c77c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        22c780:	e24cb004 	sub	fp, ip, #4	; 0x4
        22c784:	e3a00020 	mov	r0, #32	; 0x20
        22c788:	eb6687ea 	bl	1bce738 <$__nw(unsigned int)>
        22c78c:	e1b04000 	movs	r4, r0
        22c790:	0a000003 	beq	22c7a4 <Make__10TTypeAssocSFv+0x2c>
        22c794:	e1a00004 	mov	r0, r4
        22c798:	ebff7ff1 	bl	20c764 <TDArray::__ct(void)>
        22c79c:	e59f0038 	ldr	r0, [pc, #38]	; 22c7dc <Make__10TTypeAssocSFv+0x64>
        22c7a0:	e5840000 	str	r0, [r4]
        22c7a4:	e3340000 	teq	r4, #0	; 0x0
        22c7a8:	0a000009 	beq	22c7d4 <Make__10TTypeAssocSFv+0x5c>
        22c7ac:	e3a00000 	mov	r0, #0	; 0x0
        22c7b0:	e584001c 	str	r0, [r4, #28]
        22c7b4:	e1a00004 	mov	r0, r4
        22c7b8:	eb64ce25 	bl	1b60054 <TTypeAssoc::$ITypeAssoc(void)>
        22c7bc:	e3300000 	teq	r0, #0	; 0x0
        22c7c0:	0a000003 	beq	22c7d4 <Make__10TTypeAssocSFv+0x5c>
        22c7c4:	e1a00004 	mov	r0, r4
        22c7c8:	e1a0e00f 	mov	lr, pc
        22c7cc:	e594f000 	ldr	pc, [r4]
        22c7d0:	e3a04000 	mov	r4, #0	; 0x0
        22c7d4:	e1a00004 	mov	r0, r4
        22c7d8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        22c7dc:	0001af5c 	andeq	sl, r1, ip, asr pc
    */
}

/**
 * Symbol: TTypeAssoc::ITypeAssoc(void)
 * Address: 0022c7e0
 */
TTypeAssoc::ITypeAssoc(void) {
    /*
        22c7e0:	e3a02000 	mov	r2, #0	; 0x0
        22c7e4:	e3a0101c 	mov	r1, #28	; 0x1c
        22c7e8:	ea64cdf8 	b	1b5ffd0 <TDArray::$IDArray(unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TTypeAssoc::IDispose(void)
 * Address: 0022c7ec
 */
TTypeAssoc::IDispose(void) {
    /*
        22c7ec:	e1a0c00d 	mov	ip, sp
        22c7f0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        22c7f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        22c7f8:	e1a04000 	mov	r4, r0
        22c7fc:	e3a06000 	mov	r6, #0	; 0x0
        22c800:	e590700c 	ldr	r7, [r0, #12]	; fField12
        22c804:	e3570000 	cmp	r7, #0	; 0x0
        22c808:	9a000017 	bls	22c86c <TTypeAssoc::IDispose(void)+0x80>
        22c80c:	e1a01006 	mov	r1, r6
        22c810:	e1a00004 	mov	r0, r4
        22c814:	e5942000 	ldr	r2, [r4]
        22c818:	e1a0e00f 	mov	lr, pc
        22c81c:	e282f01c 	add	pc, r2, #28	; 0x1c
        22c820:	e1a05000 	mov	r5, r0
        22c824:	e5b03008 	ldr	r3, [r0, #8]!	; fField8
        22c828:	e3330000 	teq	r3, #0	; 0x0
        22c82c:	0a00000b 	beq	22c860 <TTypeAssoc::IDispose(void)+0x74>
        22c830:	e5d50018 	ldrb	r0, [r5, #24]	; fField24
        22c834:	e3300000 	teq	r0, #0	; 0x0
        22c838:	1a000008 	bne	22c860 <TTypeAssoc::IDispose(void)+0x74>
        22c83c:	e595c004 	ldr	ip, [r5, #4]	; fField4
        22c840:	e1a0000c 	mov	r0, ip
        22c844:	e3a02000 	mov	r2, #0	; 0x0
        22c848:	e3a01003 	mov	r1, #3	; 0x3
        22c84c:	e59cc000 	ldr	ip, [ip]
        22c850:	e1a0e00f 	mov	lr, pc
        22c854:	e28cf02c 	add	pc, ip, #44	; 0x2c
        22c858:	e5b50008 	ldr	r0, [r5, #8]!	; fField8
        22c85c:	eb64fb4d 	bl	1b6b598 <$DeleteHandle(char **)>
        22c860:	e2866001 	add	r6, r6, #1	; 0x1
        22c864:	e1560007 	cmp	r6, r7
        22c868:	3affffe7 	bcc	22c80c <TTypeAssoc::IDispose(void)+0x20>
        22c86c:	e1a00004 	mov	r0, r4
        22c870:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        22c874:	ea64cdda 	b	1b5ffe4 <TArray::$IDispose(void)>
    */
}

/**
 * Symbol: TTypeAssoc::Copy(void)
 * Address: 0022c878
 */
TTypeAssoc::Copy(void) {
    /*
        22c878:	e1a0c00d 	mov	ip, sp
        22c87c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        22c880:	e24cb004 	sub	fp, ip, #4	; 0x4
        22c884:	e1a04000 	mov	r4, r0
        22c888:	e3a00020 	mov	r0, #32	; 0x20
        22c88c:	eb6687a9 	bl	1bce738 <$__nw(unsigned int)>
        22c890:	e1b05000 	movs	r5, r0
        22c894:	0a000003 	beq	22c8a8 <TTypeAssoc::Copy(void)+0x30>
        22c898:	e1a00005 	mov	r0, r5
        22c89c:	ebff7fb0 	bl	20c764 <TDArray::__ct(void)>
        22c8a0:	e59f0024 	ldr	r0, [pc, #24]	; 22c8cc <TTypeAssoc::Copy(void)+0x54>	; fField24
        22c8a4:	e5850000 	str	r0, [r5]
        22c8a8:	e3350000 	teq	r5, #0	; 0x0
        22c8ac:	0a000004 	beq	22c8c4 <TTypeAssoc::Copy(void)+0x4c>
        22c8b0:	e1a01005 	mov	r1, r5
        22c8b4:	e1a00004 	mov	r0, r4
        22c8b8:	e5942000 	ldr	r2, [r4]
        22c8bc:	e1a0e00f 	mov	lr, pc
        22c8c0:	e282f00c 	add	pc, r2, #12	; 0xc
        22c8c4:	e1a00005 	mov	r0, r5
        22c8c8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        22c8cc:	0001af5c 	andeq	sl, r1, ip, asr pc
    */
}

/**
 * Symbol: TTypeAssoc::AddAssoc(Assoc *)
 * Address: 0022c8d0
 */
TTypeAssoc::AddAssoc(Assoc *) {
    /*
        22c8d0:	e1a0c00d 	mov	ip, sp
        22c8d4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        22c8d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        22c8dc:	e1a05000 	mov	r5, r0
        22c8e0:	e1a04001 	mov	r4, r1
        22c8e4:	e3a06000 	mov	r6, #0	; 0x0
        22c8e8:	e590700c 	ldr	r7, [r0, #12]	; fField12
        22c8ec:	e3570000 	cmp	r7, #0	; 0x0
        22c8f0:	9a000015 	bls	22c94c <TTypeAssoc::AddAssoc(Assoc *)+0x7c>
        22c8f4:	e1a01006 	mov	r1, r6
        22c8f8:	e1a00005 	mov	r0, r5
        22c8fc:	e5952000 	ldr	r2, [r5]
        22c900:	e1a0e00f 	mov	lr, pc
        22c904:	e282f01c 	add	pc, r2, #28	; 0x1c
        22c908:	e5941000 	ldr	r1, [r4]
        22c90c:	e5902000 	ldr	r2, [r0]
        22c910:	e1510002 	cmp	r1, r2
        22c914:	3a00000c 	bcc	22c94c <TTypeAssoc::AddAssoc(Assoc *)+0x7c>
        22c918:	05941004 	ldreq	r1, [r4, #4]	; fField4
        22c91c:	05902004 	ldreq	r2, [r0, #4]	; fField4
        22c920:	01310002 	teqeq	r1, r2
        22c924:	0594100c 	ldreq	r1, [r4, #12]	; fField12
        22c928:	0590200c 	ldreq	r2, [r0, #12]	; fField12
        22c92c:	01310002 	teqeq	r1, r2
        22c930:	05941010 	ldreq	r1, [r4, #16]
        22c934:	05900010 	ldreq	r0, [r0, #16]
        22c938:	01310000 	teqeq	r1, r0
        22c93c:	0a000013 	beq	22c990 <TTypeAssoc::AddAssoc(Assoc *)+0xc0>
        22c940:	e2866001 	add	r6, r6, #1	; 0x1
        22c944:	e1560007 	cmp	r6, r7
        22c948:	3affffe9 	bcc	22c8f4 <TTypeAssoc::AddAssoc(Assoc *)+0x24>
        22c94c:	e1a01006 	mov	r1, r6
        22c950:	e1a00005 	mov	r0, r5
        22c954:	e5952000 	ldr	r2, [r5]
        22c958:	e1a0e00f 	mov	lr, pc
        22c95c:	e282f048 	add	pc, r2, #72	; 0x48
        22c960:	e1a06000 	mov	r6, r0
        22c964:	e3700001 	cmn	r0, #1	; 0x1
        22c968:	0a000008 	beq	22c990 <TTypeAssoc::AddAssoc(Assoc *)+0xc0>
        22c96c:	e1a01006 	mov	r1, r6
        22c970:	e1a00005 	mov	r0, r5
        22c974:	e5952000 	ldr	r2, [r5]
        22c978:	e1a0e00f 	mov	lr, pc
        22c97c:	e282f01c 	add	pc, r2, #28	; 0x1c
        22c980:	e8b4500e 	ldmia	r4!, {r1, r2, r3, ip, lr}
        22c984:	e8a0500e 	stmia	r0!, {r1, r2, r3, ip, lr}
        22c988:	e8945000 	ldmia	r4, {ip, lr}
        22c98c:	e8805000 	stmia	r0, {ip, lr}
        22c990:	e1a00006 	mov	r0, r6
        22c994:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TTypeAssoc::MergeAssoc(TTypeAssoc *)
 * Address: 0022c998
 */
TTypeAssoc::MergeAssoc(TTypeAssoc *) {
    /*
        22c998:	e1a0c00d 	mov	ip, sp
        22c99c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        22c9a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        22c9a4:	e1a05000 	mov	r5, r0
        22c9a8:	e1a04001 	mov	r4, r1
        22c9ac:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        22c9b0:	e3a06000 	mov	r6, #0	; 0x0
        22c9b4:	e591700c 	ldr	r7, [r1, #12]	; fField12
        22c9b8:	e3570000 	cmp	r7, #0	; 0x0
        22c9bc:	9a00000f 	bls	22ca00 <TTypeAssoc::MergeAssoc(TTypeAssoc *)+0x68>
        22c9c0:	e1a0800d 	mov	r8, sp
        22c9c4:	e1a01006 	mov	r1, r6
        22c9c8:	e1a00004 	mov	r0, r4
        22c9cc:	eb64c95a 	bl	1b5ef3c <TTypeAssoc::$GetAssoc(unsigned long)>
        22c9d0:	e8b0500e 	ldmia	r0!, {r1, r2, r3, ip, lr}
        22c9d4:	e8a8500e 	stmia	r8!, {r1, r2, r3, ip, lr}
        22c9d8:	e8905000 	ldmia	r0, {ip, lr}
        22c9dc:	e8885000 	stmia	r8, {ip, lr}
        22c9e0:	e1a0100d 	mov	r1, sp
        22c9e4:	e1a00005 	mov	r0, r5
        22c9e8:	eb64b8de 	bl	1b5ad68 <TTypeAssoc::$AddAssoc(Assoc *)>
        22c9ec:	e3700001 	cmn	r0, #1	; 0x1
        22c9f0:	0a000004 	beq	22ca08 <TTypeAssoc::MergeAssoc(TTypeAssoc *)+0x70>
        22c9f4:	e2866001 	add	r6, r6, #1	; 0x1
        22c9f8:	e1560007 	cmp	r6, r7
        22c9fc:	3affffef 	bcc	22c9c0 <TTypeAssoc::MergeAssoc(TTypeAssoc *)+0x28>
        22ca00:	e3700001 	cmn	r0, #1	; 0x1
        22ca04:	1a000001 	bne	22ca10 <TTypeAssoc::MergeAssoc(TTypeAssoc *)+0x78>
        22ca08:	e3a00001 	mov	r0, #1	; 0x1
        22ca0c:	ea000000 	b	22ca14 <TTypeAssoc::MergeAssoc(TTypeAssoc *)+0x7c>
        22ca10:	e3a00000 	mov	r0, #0	; 0x0
        22ca14:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TTypeAssoc::GetAssoc(unsigned long)
 * Address: 0022ca18
 */
TTypeAssoc::GetAssoc(unsigned long) {
    /*
        22ca18:	e5902000 	ldr	r2, [r0]
        22ca1c:	e282f01c 	add	pc, r2, #28	; 0x1c
    */
}

/**
 * Symbol: TTypeAssoc::Dump(TMsg *)
 * Address: 0022ca20
 */
TTypeAssoc::Dump(TMsg *) {
    /*
        22ca20:	e1a0c00d 	mov	ip, sp
        22ca24:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        22ca28:	e24cb004 	sub	fp, ip, #4	; 0x4
        22ca2c:	e1a05000 	mov	r5, r0
        22ca30:	e1a04001 	mov	r4, r1
        22ca34:	e3a06000 	mov	r6, #0	; 0x0
        22ca38:	e590000c 	ldr	r0, [r0, #12]	; fField12
        22ca3c:	e3500000 	cmp	r0, #0	; 0x0
        22ca40:	9a00000f 	bls	22ca84 <TTypeAssoc::Dump(TMsg *)+0x64>
        22ca44:	e1a00004 	mov	r0, r4
        22ca48:	e3a01028 	mov	r1, #40	; 0x28
        22ca4c:	eb64ff06 	bl	1b6c66c <TMsg::$MsgChar(char)>
        22ca50:	e1a01006 	mov	r1, r6
        22ca54:	e1a00005 	mov	r0, r5
        22ca58:	eb64c937 	bl	1b5ef3c <TTypeAssoc::$GetAssoc(unsigned long)>
        22ca5c:	e5901000 	ldr	r1, [r0]
        22ca60:	e1a00004 	mov	r0, r4
        22ca64:	eb650307 	bl	1b6d688 <TMsg::$MsgType(unsigned long)>
        22ca68:	e1a00004 	mov	r0, r4
        22ca6c:	e28f1f07 	add	r1, pc, #28	; 0x1c
        22ca70:	eb650303 	bl	1b6d684 <TMsg::$MsgStr(char *)>
        22ca74:	e2866001 	add	r6, r6, #1	; 0x1
        22ca78:	e595000c 	ldr	r0, [r5, #12]	; fField12
        22ca7c:	e1500006 	cmp	r0, r6
        22ca80:	8affffef 	bhi	22ca44 <TTypeAssoc::Dump(TMsg *)+0x24>
        22ca84:	e1a00004 	mov	r0, r4
        22ca88:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        22ca8c:	ea64fef9 	b	1b6c678 <TMsg::$MsgLF(void)>
        22ca90:	29200000 	stmcsdb	r0!, {}
    */
}

