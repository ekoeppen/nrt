#include "include/TLZDecompressor.h"

/**
 * Symbol: Sizeof__15TLZDecompressorSFv
 * Address: 000ff6a4
 */
void TLZDecompressor::Sizeof() {
    /*
         ff6a4:	e3a0003c 	mov	r0, #60	; 0x3c
         ff6a8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLZDecompressor::New(void)
 * Address: 000ff6ac
 */
TLZDecompressor::New(void) {
    /*
         ff6ac:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLZDecompressor::codeword_dec_bin(unsigned long *, unsigned long *, long *, long)
 * Address: 000ff6b0
 */
TLZDecompressor::codeword_dec_bin(unsigned long *, unsigned long *, long *, long) {
    /*
         ff6b0:	e1a0c00d 	mov	ip, sp
         ff6b4:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         ff6b8:	e24cb004 	sub	fp, ip, #4	; 0x4
         ff6bc:	e1a04000 	mov	r4, r0
         ff6c0:	e1a07001 	mov	r7, r1
         ff6c4:	e1a06002 	mov	r6, r2
         ff6c8:	e1a05003 	mov	r5, r3
         ff6cc:	e59b9004 	ldr	r9, [fp, #4]
         ff6d0:	eb6a8a8c 	bl	1ba2108 <TLZDecompressor::$decode_copy_length_bin_huff4(void)>
         ff6d4:	e1b08000 	movs	r8, r0
         ff6d8:	1a000002 	bne	ff6e8 <TLZDecompressor::codeword_dec_bin(unsigned long *, unsigned long *, long *, long)+0x38>
         ff6dc:	e5d40039 	ldrb	r0, [r4, #57]	; fField57
         ff6e0:	e3300000 	teq	r0, #0	; 0x0
         ff6e4:	1a00000a 	bne	ff714 <TLZDecompressor::codeword_dec_bin(unsigned long *, unsigned long *, long *, long)+0x64>
         ff6e8:	e2888002 	add	r8, r8, #2	; 0x2
         ff6ec:	e5d40039 	ldrb	r0, [r4, #57]	; fField57
         ff6f0:	e3300000 	teq	r0, #0	; 0x0
         ff6f4:	02888001 	addeq	r8, r8, #1	; 0x1
         ff6f8:	e3a00001 	mov	r0, #1	; 0x1
         ff6fc:	e5c40039 	strb	r0, [r4, #57]	; fField57
         ff700:	e1a01009 	mov	r1, r9
         ff704:	e1a00004 	mov	r0, r4
         ff708:	eb6a8a80 	bl	1ba2110 <TLZDecompressor::$decode_offset_bin(long)>
         ff70c:	e5860000 	str	r0, [r6]
         ff710:	ea000006 	b	ff730 <TLZDecompressor::codeword_dec_bin(unsigned long *, unsigned long *, long *, long)+0x80>
         ff714:	e1a00004 	mov	r0, r4
         ff718:	eb6a8a7b 	bl	1ba210c <TLZDecompressor::$decode_lit_len_bin(void)>
         ff71c:	e5850000 	str	r0, [r5]
         ff720:	e350003f 	cmp	r0, #63	; 0x3f
         ff724:	a3a00001 	movge	r0, #1	; 0x1
         ff728:	b3a00000 	movlt	r0, #0	; 0x0
         ff72c:	e5c40039 	strb	r0, [r4, #57]	; fField57
         ff730:	e5878000 	str	r8, [r7]
         ff734:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TLZDecompressor::decode_lit_len_bin(void)
 * Address: 000ff738
 */
TLZDecompressor::decode_lit_len_bin(void) {
    /*
         ff738:	e1a0c00d 	mov	ip, sp
         ff73c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         ff740:	e24cb004 	sub	fp, ip, #4	; 0x4
         ff744:	e2800010 	add	r0, r0, #16	; 0x10
         ff748:	e1a06000 	mov	r6, r0
         ff74c:	e3a01001 	mov	r1, #1	; 0x1
         ff750:	eb08fec5 	bl	33f26c <Pushpopper::popFewBits(long)>
         ff754:	e3300000 	teq	r0, #0	; 0x0
         ff758:	03a05001 	moveq	r5, #1	; 0x1
         ff75c:	0a00002e 	beq	ff81c <TLZDecompressor::decode_lit_len_bin(void)+0xe4>
         ff760:	e1a00006 	mov	r0, r6
         ff764:	e3a01002 	mov	r1, #2	; 0x2
         ff768:	eb08febf 	bl	33f26c <Pushpopper::popFewBits(long)>
         ff76c:	e3300000 	teq	r0, #0	; 0x0
         ff770:	03a05002 	moveq	r5, #2	; 0x2
         ff774:	0a000028 	beq	ff81c <TLZDecompressor::decode_lit_len_bin(void)+0xe4>
         ff778:	e3300001 	teq	r0, #1	; 0x1
         ff77c:	03a05003 	moveq	r5, #3	; 0x3
         ff780:	0a000025 	beq	ff81c <TLZDecompressor::decode_lit_len_bin(void)+0xe4>
         ff784:	e3300002 	teq	r0, #2	; 0x2
         ff788:	1a000004 	bne	ff7a0 <TLZDecompressor::decode_lit_len_bin(void)+0x68>
         ff78c:	e1a00006 	mov	r0, r6
         ff790:	e3a01002 	mov	r1, #2	; 0x2
         ff794:	eb08feb4 	bl	33f26c <Pushpopper::popFewBits(long)>
         ff798:	e2805004 	add	r5, r0, #4	; 0x4
         ff79c:	ea00001e 	b	ff81c <TLZDecompressor::decode_lit_len_bin(void)+0xe4>
         ff7a0:	e3300003 	teq	r0, #3	; 0x3
         ff7a4:	1a00001c 	bne	ff81c <TLZDecompressor::decode_lit_len_bin(void)+0xe4>
         ff7a8:	e1a00006 	mov	r0, r6
         ff7ac:	e3a01004 	mov	r1, #4	; 0x4
         ff7b0:	eb08fead 	bl	33f26c <Pushpopper::popFewBits(long)>
         ff7b4:	e1b04000 	movs	r4, r0
         ff7b8:	4a000002 	bmi	ff7c8 <TLZDecompressor::decode_lit_len_bin(void)+0x90>
         ff7bc:	e3540007 	cmp	r4, #7	; 0x7
         ff7c0:	d2845008 	addle	r5, r4, #8	; 0x8
         ff7c4:	da000014 	ble	ff81c <TLZDecompressor::decode_lit_len_bin(void)+0xe4>
         ff7c8:	e3540008 	cmp	r4, #8	; 0x8
         ff7cc:	ba000008 	blt	ff7f4 <TLZDecompressor::decode_lit_len_bin(void)+0xbc>
         ff7d0:	e354000b 	cmp	r4, #11	; 0xb
         ff7d4:	ca000006 	bgt	ff7f4 <TLZDecompressor::decode_lit_len_bin(void)+0xbc>
         ff7d8:	e1a00006 	mov	r0, r6
         ff7dc:	e3a01002 	mov	r1, #2	; 0x2
         ff7e0:	eb08fea1 	bl	33f26c <Pushpopper::popFewBits(long)>
         ff7e4:	e2441008 	sub	r1, r4, #8	; 0x8
         ff7e8:	e0800101 	add	r0, r0, r1, lsl #2
         ff7ec:	e2805010 	add	r5, r0, #16	; 0x10
         ff7f0:	ea000009 	b	ff81c <TLZDecompressor::decode_lit_len_bin(void)+0xe4>
         ff7f4:	e354000c 	cmp	r4, #12	; 0xc
         ff7f8:	ba000007 	blt	ff81c <TLZDecompressor::decode_lit_len_bin(void)+0xe4>
         ff7fc:	e354000f 	cmp	r4, #15	; 0xf
         ff800:	ca000005 	bgt	ff81c <TLZDecompressor::decode_lit_len_bin(void)+0xe4>
         ff804:	e1a00006 	mov	r0, r6
         ff808:	e3a01003 	mov	r1, #3	; 0x3
         ff80c:	eb08fe96 	bl	33f26c <Pushpopper::popFewBits(long)>
         ff810:	e244100c 	sub	r1, r4, #12	; 0xc
         ff814:	e0800181 	add	r0, r0, r1, lsl #3
         ff818:	e2805020 	add	r5, r0, #32	; 0x20
         ff81c:	e1a00005 	mov	r0, r5
         ff820:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TLZDecompressor::decode_copy_length_bin_huff4(void)
 * Address: 000ff824
 */
TLZDecompressor::decode_copy_length_bin_huff4(void) {
    /*
         ff824:	e1a0c00d 	mov	ip, sp
         ff828:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         ff82c:	e24cb004 	sub	fp, ip, #4	; 0x4
         ff830:	e2800010 	add	r0, r0, #16	; 0x10
         ff834:	e1a06000 	mov	r6, r0
         ff838:	e3a01008 	mov	r1, #8	; 0x8
         ff83c:	eb08fe8a 	bl	33f26c <Pushpopper::popFewBits(long)>
         ff840:	e20040ff 	and	r4, r0, #255	; 0xff
         ff844:	e59f0028 	ldr	r0, [pc, #28]	; ff874 <TLZDecompressor::decode_copy_length_bin_huff4(void)+0x50>
         ff848:	e7d00004 	ldrb	r0, [r0, r4]
         ff84c:	e59f5024 	ldr	r5, [pc, #24]	; ff878 <TLZDecompressor::decode_copy_length_bin_huff4(void)+0x54>
         ff850:	e3500008 	cmp	r0, #8	; 0x8
         ff854:	da000008 	ble	ff87c <TLZDecompressor::decode_copy_length_bin_huff4(void)+0x58>
         ff858:	e2401008 	sub	r1, r0, #8	; 0x8
         ff85c:	e1a00006 	mov	r0, r6
         ff860:	eb6a927f 	bl	1ba4264 <Pushpopper::$popbits(long)>
         ff864:	e20000ff 	and	r0, r0, #255	; 0xff
         ff868:	e7d51004 	ldrb	r1, [r5, r4]
         ff86c:	e0810000 	add	r0, r1, r0
         ff870:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         ff874:	00371d94 	mlaeqs	r7, r4, sp, r1
         ff878:	00371c94 	mlaeqs	r7, r4, ip, r1
         ff87c:	e2601008 	rsb	r1, r0, #8	; 0x8
         ff880:	e1a00006 	mov	r0, r6
         ff884:	eb6a9685 	bl	1ba52a0 <Pushpopper::$restorebits(long)>
         ff888:	e7d50004 	ldrb	r0, [r5, r4]
         ff88c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TLZDecompressor::decode_offset_bin(long)
 * Address: 000ff890
 */
TLZDecompressor::decode_offset_bin(long) {
    /*
         ff890:	e1a0c00d 	mov	ip, sp
         ff894:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         ff898:	e24cb004 	sub	fp, ip, #4	; 0x4
         ff89c:	e1a04000 	mov	r4, r0
         ff8a0:	e1a05001 	mov	r5, r1
         ff8a4:	e590002c 	ldr	r0, [r0, #44]	; fField44
         ff8a8:	e2846010 	add	r6, r4, #16	; 0x10
         ff8ac:	e350000a 	cmp	r0, #10	; 0xa
         ff8b0:	908ff100 	addls	pc, pc, r0, lsl #2
         ff8b4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         ff8b8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         ff8bc:	ea000046 	b	ff9dc <TLZDecompressor::decode_offset_bin(long)+0x14c>
         ff8c0:	ea00003e 	b	ff9c0 <TLZDecompressor::decode_offset_bin(long)+0x130>
         ff8c4:	ea000036 	b	ff9a4 <TLZDecompressor::decode_offset_bin(long)+0x114>
         ff8c8:	ea00002e 	b	ff988 <TLZDecompressor::decode_offset_bin(long)+0xf8>
         ff8cc:	ea000026 	b	ff96c <TLZDecompressor::decode_offset_bin(long)+0xdc>
         ff8d0:	ea00001e 	b	ff950 <TLZDecompressor::decode_offset_bin(long)+0xc0>
         ff8d4:	ea000016 	b	ff934 <TLZDecompressor::decode_offset_bin(long)+0xa4>
         ff8d8:	ea00000e 	b	ff918 <TLZDecompressor::decode_offset_bin(long)+0x88>
         ff8dc:	ea000006 	b	ff8fc <TLZDecompressor::decode_offset_bin(long)+0x6c>
         ff8e0:	e1a01006 	mov	r1, r6
         ff8e4:	e1a00005 	mov	r0, r5
         ff8e8:	eb6a8a09 	bl	1ba2114 <$decode_offset_case10_bin(long, Pushpopper *)>
         ff8ec:	e3500015 	cmp	r0, #21	; 0x15
         ff8f0:	391ba870 	ldmccdb	fp, {r4, r5, r6, fp, sp, pc}
         ff8f4:	e3a00009 	mov	r0, #9	; 0x9
         ff8f8:	e584002c 	str	r0, [r4, #44]	; fField44
         ff8fc:	e1a01006 	mov	r1, r6
         ff900:	e1a00005 	mov	r0, r5
         ff904:	eb6a8a0b 	bl	1ba2138 <$decode_offset_case9_bin(long, Pushpopper *)>
         ff908:	e350002a 	cmp	r0, #42	; 0x2a
         ff90c:	391ba870 	ldmccdb	fp, {r4, r5, r6, fp, sp, pc}
         ff910:	e3a00008 	mov	r0, #8	; 0x8
         ff914:	e584002c 	str	r0, [r4, #44]	; fField44
         ff918:	e1a01006 	mov	r1, r6
         ff91c:	e1a00005 	mov	r0, r5
         ff920:	eb6a8a03 	bl	1ba2134 <$decode_offset_case8_bin(long, Pushpopper *)>
         ff924:	e3500054 	cmp	r0, #84	; 0x54
         ff928:	391ba870 	ldmccdb	fp, {r4, r5, r6, fp, sp, pc}
         ff92c:	e3a00007 	mov	r0, #7	; 0x7
         ff930:	e584002c 	str	r0, [r4, #44]	; fField44
         ff934:	e1a01006 	mov	r1, r6
         ff938:	e1a00005 	mov	r0, r5
         ff93c:	eb6a89fb 	bl	1ba2130 <$decode_offset_case7_bin(long, Pushpopper *)>
         ff940:	e35000a8 	cmp	r0, #168	; 0xa8
         ff944:	391ba870 	ldmccdb	fp, {r4, r5, r6, fp, sp, pc}
         ff948:	e3a00006 	mov	r0, #6	; 0x6
         ff94c:	e584002c 	str	r0, [r4, #44]	; fField44
         ff950:	e1a01006 	mov	r1, r6
         ff954:	e1a00005 	mov	r0, r5
         ff958:	eb6a89f3 	bl	1ba212c <$decode_offset_case6_bin(long, Pushpopper *)>
         ff95c:	e3500e15 	cmp	r0, #336	; 0x150
         ff960:	391ba870 	ldmccdb	fp, {r4, r5, r6, fp, sp, pc}
         ff964:	e3a00005 	mov	r0, #5	; 0x5
         ff968:	e584002c 	str	r0, [r4, #44]	; fField44
         ff96c:	e1a01006 	mov	r1, r6
         ff970:	e1a00005 	mov	r0, r5
         ff974:	eb6a89eb 	bl	1ba2128 <$decode_offset_case5_bin(long, Pushpopper *)>
         ff978:	e3500e2a 	cmp	r0, #672	; 0x2a0
         ff97c:	391ba870 	ldmccdb	fp, {r4, r5, r6, fp, sp, pc}
         ff980:	e3a00004 	mov	r0, #4	; 0x4
         ff984:	e584002c 	str	r0, [r4, #44]	; fField44
         ff988:	e1a01006 	mov	r1, r6
         ff98c:	e1a00005 	mov	r0, r5
         ff990:	eb6a89e3 	bl	1ba2124 <$decode_offset_case4_bin(long, Pushpopper *)>
         ff994:	e3500d15 	cmp	r0, #1344	; 0x540
         ff998:	391ba870 	ldmccdb	fp, {r4, r5, r6, fp, sp, pc}
         ff99c:	e3a00003 	mov	r0, #3	; 0x3
         ff9a0:	e584002c 	str	r0, [r4, #44]	; fField44
         ff9a4:	e1a01006 	mov	r1, r6
         ff9a8:	e1a00005 	mov	r0, r5
         ff9ac:	eb6a89db 	bl	1ba2120 <$decode_offset_case3_bin(long, Pushpopper *)>
         ff9b0:	e3500d2a 	cmp	r0, #2688	; 0xa80
         ff9b4:	391ba870 	ldmccdb	fp, {r4, r5, r6, fp, sp, pc}
         ff9b8:	e3a00002 	mov	r0, #2	; 0x2
         ff9bc:	e584002c 	str	r0, [r4, #44]	; fField44
         ff9c0:	e1a01006 	mov	r1, r6
         ff9c4:	e1a00005 	mov	r0, r5
         ff9c8:	eb6a89d3 	bl	1ba211c <$decode_offset_case2_bin(long, Pushpopper *)>
         ff9cc:	e3500c15 	cmp	r0, #5376	; 0x1500
         ff9d0:	391ba870 	ldmccdb	fp, {r4, r5, r6, fp, sp, pc}
         ff9d4:	e3a00001 	mov	r0, #1	; 0x1
         ff9d8:	e5a4002c 	str	r0, [r4, #44]!	; fField44
         ff9dc:	e1a01006 	mov	r1, r6
         ff9e0:	e1a00005 	mov	r0, r5
         ff9e4:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         ff9e8:	ea6a89ca 	b	1ba2118 <$decode_offset_case1_bin(long, Pushpopper *)>
    */
}

/**
 * Symbol: TLZDecompressor::Delete(void)
 * Address: 000ffa04
 */
TLZDecompressor::Delete(void) {
    /*
         ffa04:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLZDecompressor::Init(void *)
 * Address: 000ffa08
 */
TLZDecompressor::Init(void *) {
    /*
         ffa08:	e3a00000 	mov	r0, #0	; 0x0
         ffa0c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLZDecompressor::DecompressBlock(unsigned long *, void *, unsigned long, void *, unsigned long)
 * Address: 000ffa10
 */
TLZDecompressor::DecompressBlock(unsigned long *, void *, unsigned long, void *, unsigned long) {
    /*
         ffa10:	e1a0c00d 	mov	ip, sp
         ffa14:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         ffa18:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         ffa1c:	e24cb014 	sub	fp, ip, #20	; 0x14
         ffa20:	e1a04000 	mov	r4, r0
         ffa24:	e59b0018 	ldr	r0, [fp, #24]
         ffa28:	e59b8014 	ldr	r8, [fp, #20]
         ffa2c:	e24dd00c 	sub	sp, sp, #12	; 0xc
         ffa30:	e2881004 	add	r1, r8, #4	; 0x4
         ffa34:	e1a09001 	mov	r9, r1
         ffa38:	e1a05002 	mov	r5, r2
         ffa3c:	e088a000 	add	sl, r8, r0
         ffa40:	e3a06000 	mov	r6, #0	; 0x0
         ffa44:	e3a03001 	mov	r3, #1	; 0x1
         ffa48:	e5c43039 	strb	r3, [r4, #57]	; fField57
         ffa4c:	e3a0300a 	mov	r3, #10	; 0xa
         ffa50:	e584302c 	str	r3, [r4, #44]	; fField44
         ffa54:	e5d83000 	ldrb	r3, [r8]
         ffa58:	e3330001 	teq	r3, #1	; 0x1
         ffa5c:	1a00000e 	bne	ffa9c <TLZDecompressor::DecompressBlock(unsigned long *, void *, unsigned long, void *, unsigned long)+0x8c>
         ffa60:	e5940030 	ldr	r0, [r4, #48]	; fField48
         ffa64:	e3500b01 	cmp	r0, #1024	; 0x400
         ffa68:	92403004 	subls	r3, r0, #4	; 0x4
         ffa6c:	83a03b01 	movhi	r3, #1024	; 0x400
         ffa70:	e1a00001 	mov	r0, r1
         ffa74:	e1a01002 	mov	r1, r2
         ffa78:	e58d3008 	str	r3, [sp, #8]
         ffa7c:	e1a02003 	mov	r2, r3
         ffa80:	eb6a8dc7 	bl	1ba31a4 <$fast_copy__FPUcT1l>
         ffa84:	e59d0008 	ldr	r0, [sp, #8]
         ffa88:	e59b1008 	ldr	r1, [fp, #8]
         ffa8c:	e5810000 	str	r0, [r1]
         ffa90:	e59d0008 	ldr	r0, [sp, #8]
         ffa94:	e2800004 	add	r0, r0, #4	; 0x4
         ffa98:	ea00005e 	b	ffc18 <TLZDecompressor::DecompressBlock(unsigned long *, void *, unsigned long, void *, unsigned long)+0x208>
         ffa9c:	e1a02000 	mov	r2, r0
         ffaa0:	e2840010 	add	r0, r4, #16	; 0x10
         ffaa4:	e1a07000 	mov	r7, r0
         ffaa8:	eb6a9600 	bl	1ba52b0 <Pushpopper::$setupreadbuffer(unsigned char *, long)>
         ffaac:	e3a03001 	mov	r3, #1	; 0x1
         ffab0:	e5c43038 	strb	r3, [r4, #56]	; fField56
         ffab4:	ea000042 	b	ffbc4 <TLZDecompressor::DecompressBlock(unsigned long *, void *, unsigned long, void *, unsigned long)+0x1b4>
         ffab8:	e1a03006 	mov	r3, r6
         ffabc:	e92d0008 	stmdb	sp!, {r3}
         ffac0:	e28d3004 	add	r3, sp, #4	; 0x4
         ffac4:	e28d2008 	add	r2, sp, #8	; 0x8
         ffac8:	e28d100c 	add	r1, sp, #12	; 0xc
         ffacc:	e1a00004 	mov	r0, r4
         ffad0:	eb6a8585 	bl	1ba10ec <TLZDecompressor::$codeword_dec_bin(unsigned long *, unsigned long *, long *, long)>
         ffad4:	e28dd004 	add	sp, sp, #4	; 0x4
         ffad8:	e59d0008 	ldr	r0, [sp, #8]
         ffadc:	e3500000 	cmp	r0, #0	; 0x0
         ffae0:	9a000026 	bls	ffb80 <TLZDecompressor::DecompressBlock(unsigned long *, void *, unsigned long, void *, unsigned long)+0x170>
         ffae4:	e0801006 	add	r1, r0, r6
         ffae8:	e3510b01 	cmp	r1, #1024	; 0x400
         ffaec:	8a00002f 	bhi	ffbb0 <TLZDecompressor::DecompressBlock(unsigned long *, void *, unsigned long, void *, unsigned long)+0x1a0>
         ffaf0:	e0866000 	add	r6, r6, r0
         ffaf4:	e59d1004 	ldr	r1, [sp, #4]
         ffaf8:	e0451001 	sub	r1, r5, r1
         ffafc:	e3500000 	cmp	r0, #0	; 0x0
         ffb00:	da00002a 	ble	ffbb0 <TLZDecompressor::DecompressBlock(unsigned long *, void *, unsigned long, void *, unsigned long)+0x1a0>
         ffb04:	e3500007 	cmp	r0, #7	; 0x7
         ffb08:	908ff100 	addls	pc, pc, r0, lsl #2
         ffb0c:	ea000007 	b	ffb30 <TLZDecompressor::DecompressBlock(unsigned long *, void *, unsigned long, void *, unsigned long)+0x120>
         ffb10:	ea000006 	b	ffb30 <TLZDecompressor::DecompressBlock(unsigned long *, void *, unsigned long, void *, unsigned long)+0x120>
         ffb14:	ea000013 	b	ffb68 <TLZDecompressor::DecompressBlock(unsigned long *, void *, unsigned long, void *, unsigned long)+0x158>
         ffb18:	ea000010 	b	ffb60 <TLZDecompressor::DecompressBlock(unsigned long *, void *, unsigned long, void *, unsigned long)+0x150>
         ffb1c:	ea00000d 	b	ffb58 <TLZDecompressor::DecompressBlock(unsigned long *, void *, unsigned long, void *, unsigned long)+0x148>
         ffb20:	ea00000a 	b	ffb50 <TLZDecompressor::DecompressBlock(unsigned long *, void *, unsigned long, void *, unsigned long)+0x140>
         ffb24:	ea000007 	b	ffb48 <TLZDecompressor::DecompressBlock(unsigned long *, void *, unsigned long, void *, unsigned long)+0x138>
         ffb28:	ea000004 	b	ffb40 <TLZDecompressor::DecompressBlock(unsigned long *, void *, unsigned long, void *, unsigned long)+0x130>
         ffb2c:	ea000001 	b	ffb38 <TLZDecompressor::DecompressBlock(unsigned long *, void *, unsigned long, void *, unsigned long)+0x128>
         ffb30:	e4d12001 	ldrb	r2, [r1], #1
         ffb34:	e4c52001 	strb	r2, [r5], #1
         ffb38:	e4d12001 	ldrb	r2, [r1], #1
         ffb3c:	e4c52001 	strb	r2, [r5], #1
         ffb40:	e4d12001 	ldrb	r2, [r1], #1
         ffb44:	e4c52001 	strb	r2, [r5], #1
         ffb48:	e4d12001 	ldrb	r2, [r1], #1
         ffb4c:	e4c52001 	strb	r2, [r5], #1
         ffb50:	e4d12001 	ldrb	r2, [r1], #1
         ffb54:	e4c52001 	strb	r2, [r5], #1
         ffb58:	e4d12001 	ldrb	r2, [r1], #1
         ffb5c:	e4c52001 	strb	r2, [r5], #1
         ffb60:	e4d12001 	ldrb	r2, [r1], #1
         ffb64:	e4c52001 	strb	r2, [r5], #1
         ffb68:	e4d12001 	ldrb	r2, [r1], #1
         ffb6c:	e4c52001 	strb	r2, [r5], #1
         ffb70:	e2400008 	sub	r0, r0, #8	; 0x8
         ffb74:	e3500000 	cmp	r0, #0	; 0x0
         ffb78:	caffffe1 	bgt	ffb04 <TLZDecompressor::DecompressBlock(unsigned long *, void *, unsigned long, void *, unsigned long)+0xf4>
         ffb7c:	ea00000b 	b	ffbb0 <TLZDecompressor::DecompressBlock(unsigned long *, void *, unsigned long, void *, unsigned long)+0x1a0>
         ffb80:	e59d2000 	ldr	r2, [sp]
         ffb84:	e3520000 	cmp	r2, #0	; 0x0
         ffb88:	da000008 	ble	ffbb0 <TLZDecompressor::DecompressBlock(unsigned long *, void *, unsigned long, void *, unsigned long)+0x1a0>
         ffb8c:	e5940030 	ldr	r0, [r4, #48]	; fField48
         ffb90:	e1590000 	cmp	r9, r0
         ffb94:	2a000005 	bcs	ffbb0 <TLZDecompressor::DecompressBlock(unsigned long *, void *, unsigned long, void *, unsigned long)+0x1a0>
         ffb98:	e1a00007 	mov	r0, r7
         ffb9c:	e1a01005 	mov	r1, r5
         ffba0:	eb08fd94 	bl	33f1f8 <Pushpopper::popString(unsigned char *, long)>
         ffba4:	e59d0000 	ldr	r0, [sp]
         ffba8:	e0866000 	add	r6, r6, r0
         ffbac:	e0855000 	add	r5, r5, r0
         ffbb0:	e5971004 	ldr	r1, [r7, #4]
         ffbb4:	e0811008 	add	r1, r1, r8
         ffbb8:	e2811004 	add	r1, r1, #4	; 0x4
         ffbbc:	e5970014 	ldr	r0, [r7, #20]
         ffbc0:	e04191c0 	sub	r9, r1, r0, asr #3
         ffbc4:	e159000a 	cmp	r9, sl
         ffbc8:	8a00000a 	bhi	ffbf8 <TLZDecompressor::DecompressBlock(unsigned long *, void *, unsigned long, void *, unsigned long)+0x1e8>
         ffbcc:	e3560b01 	cmp	r6, #1024	; 0x400
         ffbd0:	2a000008 	bcs	ffbf8 <TLZDecompressor::DecompressBlock(unsigned long *, void *, unsigned long, void *, unsigned long)+0x1e8>
         ffbd4:	e0499008 	sub	r9, r9, r8
         ffbd8:	e5940030 	ldr	r0, [r4, #48]	; fField48
         ffbdc:	e1590000 	cmp	r9, r0
         ffbe0:	3affffb4 	bcc	ffab8 <TLZDecompressor::DecompressBlock(unsigned long *, void *, unsigned long, void *, unsigned long)+0xa8>
         ffbe4:	1a000003 	bne	ffbf8 <TLZDecompressor::DecompressBlock(unsigned long *, void *, unsigned long, void *, unsigned long)+0x1e8>
         ffbe8:	e5970014 	ldr	r0, [r7, #20]
         ffbec:	e2000003 	and	r0, r0, #3	; 0x3
         ffbf0:	e3500003 	cmp	r0, #3	; 0x3
         ffbf4:	aaffffaf 	bge	ffab8 <TLZDecompressor::DecompressBlock(unsigned long *, void *, unsigned long, void *, unsigned long)+0xa8>
         ffbf8:	e5970014 	ldr	r0, [r7, #20]
         ffbfc:	e59b1008 	ldr	r1, [fp, #8]
         ffc00:	e5816000 	str	r6, [r1]
         ffc04:	e5b71004 	ldr	r1, [r7, #4]!
         ffc08:	e0811008 	add	r1, r1, r8
         ffc0c:	e2811004 	add	r1, r1, #4	; 0x4
         ffc10:	e04101c0 	sub	r0, r1, r0, asr #3
         ffc14:	e0400008 	sub	r0, r0, r8
         ffc18:	e5a40034 	str	r0, [r4, #52]!	; fField52
         ffc1c:	e3a00000 	mov	r0, #0	; 0x0
         ffc20:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TLZDecompressor::DecompressChunk(unsigned long *, void *, unsigned long, void *, unsigned long)
 * Address: 000ffc24
 */
TLZDecompressor::DecompressChunk(unsigned long *, void *, unsigned long, void *, unsigned long) {
    /*
         ffc24:	e1a0c00d 	mov	ip, sp
         ffc28:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         ffc2c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         ffc30:	e24cb014 	sub	fp, ip, #20	; 0x14
         ffc34:	e1a04000 	mov	r4, r0
         ffc38:	e1a05003 	mov	r5, r3
         ffc3c:	e59b8018 	ldr	r8, [fp, #24]
         ffc40:	e24dd008 	sub	sp, sp, #8	; 0x8
         ffc44:	e59b0014 	ldr	r0, [fp, #20]
         ffc48:	e2806004 	add	r6, r0, #4	; 0x4
         ffc4c:	e1a07002 	mov	r7, r2
         ffc50:	e3a09000 	mov	r9, #0	; 0x0
         ffc54:	e3a00000 	mov	r0, #0	; 0x0
         ffc58:	e5849034 	str	r9, [r4, #52]	; fField52
         ffc5c:	e3a0a001 	mov	sl, #1	; 0x1
         ffc60:	e58d0000 	str	r0, [sp]
         ffc64:	e3a01b02 	mov	r1, #2048	; 0x800
         ffc68:	e584a030 	str	sl, [r4, #48]	; fField48
         ffc6c:	e58d1004 	str	r1, [sp, #4]
         ffc70:	ea000023 	b	ffd04 <TLZDecompressor::DecompressChunk(unsigned long *, void *, unsigned long, void *, unsigned long)+0xe0>
         ffc74:	e33a0001 	teq	sl, #1	; 0x1
         ffc78:	1a000009 	bne	ffca4 <TLZDecompressor::DecompressChunk(unsigned long *, void *, unsigned long, void *, unsigned long)+0x80>
         ffc7c:	e3a0a000 	mov	sl, #0	; 0x0
         ffc80:	e59b0014 	ldr	r0, [fp, #20]
         ffc84:	e5900000 	ldr	r0, [r0]
         ffc88:	e2400004 	sub	r0, r0, #4	; 0x4
         ffc8c:	e5840030 	str	r0, [r4, #48]	; fField48
         ffc90:	e2808004 	add	r8, r0, #4	; 0x4
         ffc94:	e3500000 	cmp	r0, #0	; 0x0
         ffc98:	82483004 	subhi	r3, r8, #4	; 0x4
         ffc9c:	8a000003 	bhi	ffcb0 <TLZDecompressor::DecompressChunk(unsigned long *, void *, unsigned long, void *, unsigned long)+0x8c>
         ffca0:	ea00000a 	b	ffcd0 <TLZDecompressor::DecompressChunk(unsigned long *, void *, unsigned long, void *, unsigned long)+0xac>
         ffca4:	e3500000 	cmp	r0, #0	; 0x0
         ffca8:	9a000008 	bls	ffcd0 <TLZDecompressor::DecompressChunk(unsigned long *, void *, unsigned long, void *, unsigned long)+0xac>
         ffcac:	e1a03008 	mov	r3, r8
         ffcb0:	e1a02006 	mov	r2, r6
         ffcb4:	e92d000c 	stmdb	sp!, {r2, r3}
         ffcb8:	e1a03005 	mov	r3, r5
         ffcbc:	e1a02007 	mov	r2, r7
         ffcc0:	e28d1008 	add	r1, sp, #8	; 0x8
         ffcc4:	e1a00004 	mov	r0, r4
         ffcc8:	eb6a891c 	bl	1ba2140 <TLZDecompressor::$DecompressBlock(unsigned long *, void *, unsigned long, void *, unsigned long)>
         ffccc:	e28dd008 	add	sp, sp, #8	; 0x8
         ffcd0:	e2841030 	add	r1, r4, #48	; 0x30
         ffcd4:	e8910003 	ldmia	r1, {r0, r1}
         ffcd8:	e1510000 	cmp	r1, r0
         ffcdc:	85840034 	strhi	r0, [r4, #52]	; fField52
         ffce0:	e1a01000 	mov	r1, r0
         ffce4:	e5940034 	ldr	r0, [r4, #52]	; fField52
         ffce8:	e0411000 	sub	r1, r1, r0
         ffcec:	e5841030 	str	r1, [r4, #48]	; fField48
         ffcf0:	e59d1000 	ldr	r1, [sp]
         ffcf4:	e0899001 	add	r9, r9, r1
         ffcf8:	e0806006 	add	r6, r0, r6
         ffcfc:	e0877001 	add	r7, r7, r1
         ffd00:	e0488000 	sub	r8, r8, r0
         ffd04:	e5940034 	ldr	r0, [r4, #52]	; fField52
         ffd08:	e59d1004 	ldr	r1, [sp, #4]
         ffd0c:	e1300001 	teq	r0, r1
         ffd10:	0a000002 	beq	ffd20 <TLZDecompressor::DecompressChunk(unsigned long *, void *, unsigned long, void *, unsigned long)+0xfc>
         ffd14:	e5940030 	ldr	r0, [r4, #48]	; fField48
         ffd18:	e3500000 	cmp	r0, #0	; 0x0
         ffd1c:	8affffd4 	bhi	ffc74 <TLZDecompressor::DecompressChunk(unsigned long *, void *, unsigned long, void *, unsigned long)+0x50>
         ffd20:	e59b1008 	ldr	r1, [fp, #8]
         ffd24:	e3a00000 	mov	r0, #0	; 0x0
         ffd28:	e5819000 	str	r9, [r1]
         ffd2c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TLZDecompressor::Decompress(unsigned long *, void *, unsigned long, void *, unsigned long)
 * Address: 000ffd30
 */
TLZDecompressor::Decompress(unsigned long *, void *, unsigned long, void *, unsigned long) {
    /*
         ffd30:	e1a0c00d 	mov	ip, sp
         ffd34:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         ffd38:	e24cb004 	sub	fp, ip, #4	; 0x4
         ffd3c:	e1a0c002 	mov	ip, r2
         ffd40:	e1a0e003 	mov	lr, r3
         ffd44:	e99b000c 	ldmib	fp, {r2, r3}
         ffd48:	e92d000c 	stmdb	sp!, {r2, r3}
         ffd4c:	e1a0300e 	mov	r3, lr
         ffd50:	e1a0200c 	mov	r2, ip
         ffd54:	eb6a88fa 	bl	1ba2144 <TLZDecompressor::$DecompressChunk(unsigned long *, void *, unsigned long, void *, unsigned long)>
         ffd58:	e3a00000 	mov	r0, #0	; 0x0
         ffd5c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: ClassInfo__15TLZDecompressorSFv
 * Address: 003898e8
 */
void TLZDecompressor::ClassInfo() {
    /*
        3898e8:	e24f0044 	sub	r0, pc, #68	; 0x44
        3898ec:	e1a0f00e 	mov	pc, lr
        3898f0:	e3a00000 	mov	r0, #0	; 0x0
        3898f4:	e1a0f00e 	mov	pc, lr
        3898f8:	544c5a44 	strplb	r5, [ip], -#2628
        3898fc:	65636f6d 	strvsb	r6, [r3, -#3949]!
        389900:	70726573 	rsbvcs	r6, r2, r3, ror r5
        389904:	736f7200 	cmnvc	pc, #0	; 0x0
        389908:	54446563 	strplb	r6, [r4], -#1379
        38990c:	6f6d7072 	swivs	0x006d7072
        389910:	6573736f 	ldrvsb	r7, [r3, -#879]!
        389914:	72000000 	andvc	r0, r0, #0	; 0x0
        389918:	00000000 	andeq	r0, r0, r0
        38991c:	eafffff1 	b	3898e8 <ClassInfo__15TLZDecompressorSFv>
        389920:	ea606a48 	b	1ba4248 <TLZDecompressor::$New(void)>
        389924:	ea606208 	b	1ba214c <TLZDecompressor::$Delete(void)>
        389928:	ea606a35 	b	1ba4204 <TLZDecompressor::$Init(void *)>
        38992c:	ea606202 	b	1ba213c <TLZDecompressor::$Decompress(unsigned long *, void *, unsigned long, void *, unsigned long)>
        389930:	00000000 	andeq	r0, r0, r0
        389934:	00000048 	andeq	r0, r0, r8, asr #32
        389938:	00000055 	andeq	r0, r0, r5, asr r0
        38993c:	0000005d 	andeq	r0, r0, sp, asr r0
        389940:	0000005c 	andeq	r0, r0, ip, asr r0
        389944:	00000074 	andeq	r0, r0, r4, ror r0
        389948:	ea60871c 	b	1bab5c0 <$Sizeof__16TZippyCompressorSFv>
        389954:	ea608712 	b	1bab5a4 <TZippyCompressor::$New(void)>
        389958:	ea6082eb 	b	1baa50c <TZippyCompressor::$Delete(void)>
        389968:	ea000001 	b	389974 <ClassInfo__16TZippyCompressorSFv+0x8>
    */
}

