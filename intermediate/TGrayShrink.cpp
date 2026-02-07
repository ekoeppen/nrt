#include "include/TGrayShrink.h"

/**
 * Symbol: Sizeof__11TGrayShrinkSFv
 * Address: 000e4714
 */
void TGrayShrink::Sizeof() {
    /*
         e4714:	e3a00010 	mov	r0, #16	; 0x10
         e4718:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TGrayShrink::GrayShrink(PixelMap *, PixelMap *, Rect *, Rect *, Region **, Region **, Region **)
 * Address: 000e471c
 */
TGrayShrink::GrayShrink(PixelMap *, PixelMap *, Rect *, Rect *, Region **, Region **, Region **) {
    /*
         e471c:	e1a0c00d 	mov	ip, sp
         e4720:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         e4724:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         e4728:	e24cb014 	sub	fp, ip, #20	; 0x14
         e472c:	e1a0a001 	mov	sl, r1
         e4730:	e1a04002 	mov	r4, r2
         e4734:	e24dd0ec 	sub	sp, sp, #236	; 0xec
         e4738:	e59b0020 	ldr	r0, [fp, #32]
         e473c:	e5900000 	ldr	r0, [r0]
         e4740:	e2803004 	add	r3, r0, #4	; 0x4
         e4744:	e59b001c 	ldr	r0, [fp, #28]
         e4748:	e5900000 	ldr	r0, [r0]
         e474c:	e2802004 	add	r2, r0, #4	; 0x4
         e4750:	e59b0018 	ldr	r0, [fp, #24]
         e4754:	e5900000 	ldr	r0, [r0]
         e4758:	e2801004 	add	r1, r0, #4	; 0x4
         e475c:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         e4760:	e2843008 	add	r3, r4, #8	; 0x8
         e4764:	e28d0094 	add	r0, sp, #148	; 0x94
         e4768:	e3a01005 	mov	r1, #5	; 0x5
         e476c:	e59b2014 	ldr	r2, [fp, #20]
         e4770:	eb69bc85 	bl	1b5398c <$RSect(Rect *, long, long,...)>
         e4774:	e28dd00c 	add	sp, sp, #12	; 0xc
         e4778:	e3300000 	teq	r0, #0	; 0x0
         e477c:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         e4780:	e59b0014 	ldr	r0, [fp, #20]
         e4784:	e5900004 	ldr	r0, [r0, #4]	; fField4
         e4788:	e1a00820 	mov	r0, r0, lsr #16
         e478c:	e59b2014 	ldr	r2, [fp, #20]
         e4790:	e5921000 	ldr	r1, [r2]
         e4794:	e1a01821 	mov	r1, r1, lsr #16
         e4798:	e0400001 	sub	r0, r0, r1
         e479c:	e1a01800 	mov	r1, r0, lsl #16
         e47a0:	e1b01841 	movs	r1, r1, asr #16
         e47a4:	e5cd1095 	strb	r1, [sp, #149]
         e47a8:	e1a00441 	mov	r0, r1, asr #8
         e47ac:	e5cd0094 	strb	r0, [sp, #148]
         e47b0:	5a000004 	bpl	e47c8 <TGrayShrink::GrayShrink(PixelMap *, PixelMap *, Rect *, Rect *, Region **, Region **, Region **)+0xac>
         e47b4:	e59d0096 	ldr	r0, [sp, #150]
         e47b8:	e1e00000 	mvn	r0, r0
         e47bc:	e5cd0095 	strb	r0, [sp, #149]
         e47c0:	e1a00440 	mov	r0, r0, asr #8
         e47c4:	e5cd0094 	strb	r0, [sp, #148]
         e47c8:	e59b0014 	ldr	r0, [fp, #20]
         e47cc:	e5900006 	ldr	r0, [r0, #6]	; fField6
         e47d0:	e1a00820 	mov	r0, r0, lsr #16
         e47d4:	e59b2014 	ldr	r2, [fp, #20]
         e47d8:	e5921002 	ldr	r1, [r2, #2]
         e47dc:	e1a01821 	mov	r1, r1, lsr #16
         e47e0:	e0400001 	sub	r0, r0, r1
         e47e4:	e1a01800 	mov	r1, r0, lsl #16
         e47e8:	e1b01841 	movs	r1, r1, asr #16
         e47ec:	e5cd1097 	strb	r1, [sp, #151]
         e47f0:	e1a00441 	mov	r0, r1, asr #8
         e47f4:	e5cd0096 	strb	r0, [sp, #150]
         e47f8:	5a000004 	bpl	e4810 <TGrayShrink::GrayShrink(PixelMap *, PixelMap *, Rect *, Rect *, Region **, Region **, Region **)+0xf4>
         e47fc:	e59d0094 	ldr	r0, [sp, #148]
         e4800:	e1e00000 	mvn	r0, r0
         e4804:	e5cd0097 	strb	r0, [sp, #151]
         e4808:	e1a00440 	mov	r0, r0, asr #8
         e480c:	e5cd0096 	strb	r0, [sp, #150]
         e4810:	e59b3010 	ldr	r3, [fp, #16]
         e4814:	e5930004 	ldr	r0, [r3, #4]	; fField4
         e4818:	e1a00820 	mov	r0, r0, lsr #16
         e481c:	e59b3010 	ldr	r3, [fp, #16]
         e4820:	e5931000 	ldr	r1, [r3]
         e4824:	e1a01821 	mov	r1, r1, lsr #16
         e4828:	e0400001 	sub	r0, r0, r1
         e482c:	e5cd0091 	strb	r0, [sp, #145]
         e4830:	e1a00440 	mov	r0, r0, asr #8
         e4834:	e5cd0090 	strb	r0, [sp, #144]
         e4838:	e59b3010 	ldr	r3, [fp, #16]
         e483c:	e5930006 	ldr	r0, [r3, #6]	; fField6
         e4840:	e1a00820 	mov	r0, r0, lsr #16
         e4844:	e59b3010 	ldr	r3, [fp, #16]
         e4848:	e5931002 	ldr	r1, [r3, #2]
         e484c:	e1a01821 	mov	r1, r1, lsr #16
         e4850:	e0400001 	sub	r0, r0, r1
         e4854:	e5cd0093 	strb	r0, [sp, #147]
         e4858:	e1a00440 	mov	r0, r0, asr #8
         e485c:	e5cd0092 	strb	r0, [sp, #146]
         e4860:	e24dd004 	sub	sp, sp, #4	; 0x4
         e4864:	e5940010 	ldr	r0, [r4, #16]
         e4868:	e20090ff 	and	r9, r0, #255	; 0xff
         e486c:	e59f04b8 	ldr	r0, [pc, #4b8]	; e4d2c <TGrayShrink::GrayShrink(PixelMap *, PixelMap *, Rect *, Rect *, Region **, Region **, Region **)+0x610>	; fField4
         e4870:	e58d00ec 	str	r0, [sp, #236]
         e4874:	e0800009 	add	r0, r0, r9
         e4878:	e5d010a9 	ldrb	r1, [r0, #169]	; fField169
         e487c:	e58d1000 	str	r1, [sp]
         e4880:	e28d20b4 	add	r2, sp, #180	; 0xb4
         e4884:	e59d0098 	ldr	r0, [sp, #152]
         e4888:	e59d1094 	ldr	r1, [sp, #148]
         e488c:	eb69d0f1 	bl	1b58c58 <$SetupHorizProc__F5PointT1Pl>
         e4890:	e3a06000 	mov	r6, #0	; 0x0
         e4894:	e58d0004 	str	r0, [sp, #4]	; fField4
         e4898:	e3a00000 	mov	r0, #0	; 0x0
         e489c:	e58d00d4 	str	r0, [sp, #212]
         e48a0:	e58d00d8 	str	r0, [sp, #216]
         e48a4:	e58d00dc 	str	r0, [sp, #220]
         e48a8:	e59d0096 	ldr	r0, [sp, #150]
         e48ac:	e1a00840 	mov	r0, r0, asr #16
         e48b0:	e1a032c0 	mov	r3, r0, asr #5
         e48b4:	e58d30b8 	str	r3, [sp, #184]
         e48b8:	e59d0096 	ldr	r0, [sp, #150]
         e48bc:	e1a00840 	mov	r0, r0, asr #16
         e48c0:	eb699b41 	bl	1b4b5cc <$QDNewTempPtr(long)>
         e48c4:	e58d00cc 	str	r0, [sp, #204]
         e48c8:	e3300000 	teq	r0, #0	; 0x0
         e48cc:	0a00019a 	beq	e4f3c <TGrayShrink::GrayShrink(PixelMap *, PixelMap *, Rect *, Rect *, Region **, Region **, Region **)+0x820>
         e48d0:	e59d0096 	ldr	r0, [sp, #150]
         e48d4:	e59d20cc 	ldr	r2, [sp, #204]
         e48d8:	e0822840 	add	r2, r2, r0, asr #16
         e48dc:	e58d20c8 	str	r2, [sp, #200]
         e48e0:	e59d009a 	ldr	r0, [sp, #154]
         e48e4:	e1a00840 	mov	r0, r0, asr #16
         e48e8:	e1a05000 	mov	r5, r0
         e48ec:	eb699b36 	bl	1b4b5cc <$QDNewTempPtr(long)>
         e48f0:	e58d00d0 	str	r0, [sp, #208]
         e48f4:	e3300000 	teq	r0, #0	; 0x0
         e48f8:	0a00018f 	beq	e4f3c <TGrayShrink::GrayShrink(PixelMap *, PixelMap *, Rect *, Rect *, Region **, Region **, Region **)+0x820>
         e48fc:	e1a01005 	mov	r1, r5
         e4900:	e59d00d0 	ldr	r0, [sp, #208]
         e4904:	eb6bedc4 	bl	1be001c <$ZeroBytes>
         e4908:	e59d00d0 	ldr	r0, [sp, #208]
         e490c:	e0803005 	add	r3, r0, r5
         e4910:	e3a00000 	mov	r0, #0	; 0x0
         e4914:	e58d30bc 	str	r3, [sp, #188]
         e4918:	e59d1096 	ldr	r1, [sp, #150]
         e491c:	e1a01841 	mov	r1, r1, asr #16
         e4920:	e59d209a 	ldr	r2, [sp, #154]
         e4924:	e1a02842 	mov	r2, r2, asr #16
         e4928:	e2800001 	add	r0, r0, #1	; 0x1
         e492c:	e0411002 	sub	r1, r1, r2
         e4930:	e3510000 	cmp	r1, #0	; 0x0
         e4934:	cafffffb 	bgt	e4928 <TGrayShrink::GrayShrink(PixelMap *, PixelMap *, Rect *, Rect *, Region **, Region **, Region **)+0x20c>
         e4938:	e59d2094 	ldr	r2, [sp, #148]
         e493c:	e1a02842 	mov	r2, r2, asr #16
         e4940:	e59d3098 	ldr	r3, [sp, #152]
         e4944:	e1a03843 	mov	r3, r3, asr #16
         e4948:	e3a01000 	mov	r1, #0	; 0x0
         e494c:	e2811001 	add	r1, r1, #1	; 0x1
         e4950:	e0422003 	sub	r2, r2, r3
         e4954:	e3520000 	cmp	r2, #0	; 0x0
         e4958:	cafffffb 	bgt	e494c <TGrayShrink::GrayShrink(PixelMap *, PixelMap *, Rect *, Rect *, Region **, Region **, Region **)+0x230>
         e495c:	e0050091 	mul	r5, r1, r0
         e4960:	e2850001 	add	r0, r5, #1	; 0x1
         e4964:	eb699b18 	bl	1b4b5cc <$QDNewTempPtr(long)>
         e4968:	e58d00c4 	str	r0, [sp, #196]
         e496c:	e3300000 	teq	r0, #0	; 0x0
         e4970:	0a000146 	beq	e4e90 <TGrayShrink::GrayShrink(PixelMap *, PixelMap *, Rect *, Rect *, Region **, Region **, Region **)+0x774>
         e4974:	e1a01005 	mov	r1, r5
         e4978:	e59d00c4 	ldr	r0, [sp, #196]
         e497c:	eb69d0b1 	bl	1b58c48 <$MakeGrayTable(char *, long)>
         e4980:	e59d008e 	ldr	r0, [sp, #142]
         e4984:	e594100a 	ldr	r1, [r4, #10]
         e4988:	e1a01841 	mov	r1, r1, asr #16
         e498c:	e0610840 	rsb	r0, r1, r0, asr #16
         e4990:	e59d20ec 	ldr	r2, [sp, #236]
         e4994:	e5943010 	ldr	r3, [r4, #16]
         e4998:	e20330ff 	and	r3, r3, #255	; 0xff
         e499c:	e0822003 	add	r2, r2, r3
         e49a0:	e5d22088 	ldrb	r2, [r2, #136]
         e49a4:	e1c00002 	bic	r0, r0, r2
         e49a8:	e0817000 	add	r7, r1, r0
         e49ac:	e59d0092 	ldr	r0, [sp, #146]
         e49b0:	e0670840 	rsb	r0, r7, r0, asr #16
         e49b4:	e59d1000 	ldr	r1, [sp]
         e49b8:	e1a00110 	mov	r0, r0, lsl r1
         e49bc:	e1a032c0 	mov	r3, r0, asr #5
         e49c0:	e3a00002 	mov	r0, #2	; 0x2
         e49c4:	e1a00110 	mov	r0, r0, lsl r1
         e49c8:	e1a00100 	mov	r0, r0, lsl #2
         e49cc:	e58d30b0 	str	r3, [sp, #176]
         e49d0:	e0800103 	add	r0, r0, r3, lsl #2
         e49d4:	e1a08000 	mov	r8, r0
         e49d8:	eb699afb 	bl	1b4b5cc <$QDNewTempPtr(long)>
         e49dc:	e1b06000 	movs	r6, r0
         e49e0:	0a00012a 	beq	e4e90 <TGrayShrink::GrayShrink(PixelMap *, PixelMap *, Rect *, Rect *, Region **, Region **, Region **)+0x774>
         e49e4:	e1a01008 	mov	r1, r8
         e49e8:	e1a00006 	mov	r0, r6
         e49ec:	eb6bed8a 	bl	1be001c <$ZeroBytes>
         e49f0:	e3a00902 	mov	r0, #32768	; 0x8000
         e49f4:	e2400001 	sub	r0, r0, #1	; 0x1
         e49f8:	e58d0074 	str	r0, [sp, #116]
         e49fc:	e58d0048 	str	r0, [sp, #72]
         e4a00:	e58d001c 	str	r0, [sp, #28]
         e4a04:	e3a00001 	mov	r0, #1	; 0x1
         e4a08:	e2400902 	sub	r0, r0, #32768	; 0x8000
         e4a0c:	e58d0070 	str	r0, [sp, #112]
         e4a10:	e58d0044 	str	r0, [sp, #68]
         e4a14:	e3a05000 	mov	r5, #0	; 0x0
         e4a18:	e58d0018 	str	r0, [sp, #24]
         e4a1c:	e59b0018 	ldr	r0, [fp, #24]
         e4a20:	e5900000 	ldr	r0, [r0]
         e4a24:	e5900000 	ldr	r0, [r0]
         e4a28:	e1a00840 	mov	r0, r0, asr #16
         e4a2c:	e330000c 	teq	r0, #12	; 0xc
         e4a30:	0a000014 	beq	e4a88 <TGrayShrink::GrayShrink(PixelMap *, PixelMap *, Rect *, Rect *, Region **, Region **, Region **)+0x36c>
         e4a34:	e3a05002 	mov	r5, #2	; 0x2
         e4a38:	e1a00008 	mov	r0, r8
         e4a3c:	eb699ae2 	bl	1b4b5cc <$QDNewTempPtr(long)>
         e4a40:	e58d00dc 	str	r0, [sp, #220]
         e4a44:	e3300000 	teq	r0, #0	; 0x0
         e4a48:	0a000110 	beq	e4e90 <TGrayShrink::GrayShrink(PixelMap *, PixelMap *, Rect *, Rect *, Region **, Region **, Region **)+0x774>
         e4a4c:	e59b0018 	ldr	r0, [fp, #24]
         e4a50:	eb699adf 	bl	1b4b5d4 <$QDSafeLock(char **)>
         e4a54:	e58d00e8 	str	r0, [sp, #232]
         e4a58:	e1a02007 	mov	r2, r7
         e4a5c:	e59d30dc 	ldr	r3, [sp, #220]
         e4a60:	e92d000c 	stmdb	sp!, {r2, r3}
         e4a64:	e59d309a 	ldr	r3, [sp, #154]
         e4a68:	e1a03843 	mov	r3, r3, asr #16
         e4a6c:	e59d2096 	ldr	r2, [sp, #150]
         e4a70:	e1a02842 	mov	r2, r2, asr #16
         e4a74:	e28d1068 	add	r1, sp, #104	; 0x68
         e4a78:	e59b0018 	ldr	r0, [fp, #24]
         e4a7c:	e5900000 	ldr	r0, [r0]
         e4a80:	eb69af64 	bl	1b50818 <$InitRgn__FP6RegionP8RgnStatelN23Pc>
         e4a84:	e28dd008 	add	sp, sp, #8	; 0x8
         e4a88:	e59b001c 	ldr	r0, [fp, #28]
         e4a8c:	e5900000 	ldr	r0, [r0]
         e4a90:	e5900000 	ldr	r0, [r0]
         e4a94:	e1a00840 	mov	r0, r0, asr #16
         e4a98:	e330000c 	teq	r0, #12	; 0xc
         e4a9c:	0a000014 	beq	e4af4 <TGrayShrink::GrayShrink(PixelMap *, PixelMap *, Rect *, Rect *, Region **, Region **, Region **)+0x3d8>
         e4aa0:	e2855004 	add	r5, r5, #4	; 0x4
         e4aa4:	e1a00008 	mov	r0, r8
         e4aa8:	eb699ac7 	bl	1b4b5cc <$QDNewTempPtr(long)>
         e4aac:	e58d00d8 	str	r0, [sp, #216]
         e4ab0:	e3300000 	teq	r0, #0	; 0x0
         e4ab4:	0a0000f5 	beq	e4e90 <TGrayShrink::GrayShrink(PixelMap *, PixelMap *, Rect *, Rect *, Region **, Region **, Region **)+0x774>
         e4ab8:	e59b001c 	ldr	r0, [fp, #28]
         e4abc:	eb699ac4 	bl	1b4b5d4 <$QDSafeLock(char **)>
         e4ac0:	e58d00e4 	str	r0, [sp, #228]
         e4ac4:	e1a02007 	mov	r2, r7
         e4ac8:	e59d30d8 	ldr	r3, [sp, #216]
         e4acc:	e92d000c 	stmdb	sp!, {r2, r3}
         e4ad0:	e59d309a 	ldr	r3, [sp, #154]
         e4ad4:	e1a03843 	mov	r3, r3, asr #16
         e4ad8:	e59d2096 	ldr	r2, [sp, #150]
         e4adc:	e1a02842 	mov	r2, r2, asr #16
         e4ae0:	e28d103c 	add	r1, sp, #60	; 0x3c
         e4ae4:	e59b001c 	ldr	r0, [fp, #28]
         e4ae8:	e5900000 	ldr	r0, [r0]
         e4aec:	eb69af49 	bl	1b50818 <$InitRgn__FP6RegionP8RgnStatelN23Pc>
         e4af0:	e28dd008 	add	sp, sp, #8	; 0x8
         e4af4:	e59b0020 	ldr	r0, [fp, #32]
         e4af8:	e5900000 	ldr	r0, [r0]
         e4afc:	e5900000 	ldr	r0, [r0]
         e4b00:	e1a00840 	mov	r0, r0, asr #16
         e4b04:	e330000c 	teq	r0, #12	; 0xc
         e4b08:	0a000014 	beq	e4b60 <TGrayShrink::GrayShrink(PixelMap *, PixelMap *, Rect *, Rect *, Region **, Region **, Region **)+0x444>
         e4b0c:	e2855008 	add	r5, r5, #8	; 0x8
         e4b10:	e1a00008 	mov	r0, r8
         e4b14:	eb699aac 	bl	1b4b5cc <$QDNewTempPtr(long)>
         e4b18:	e58d00d4 	str	r0, [sp, #212]
         e4b1c:	e3300000 	teq	r0, #0	; 0x0
         e4b20:	0a0000e3 	beq	e4eb4 <TGrayShrink::GrayShrink(PixelMap *, PixelMap *, Rect *, Rect *, Region **, Region **, Region **)+0x798>
         e4b24:	e59b0020 	ldr	r0, [fp, #32]
         e4b28:	eb699aa9 	bl	1b4b5d4 <$QDSafeLock(char **)>
         e4b2c:	e58d00e0 	str	r0, [sp, #224]
         e4b30:	e1a02007 	mov	r2, r7
         e4b34:	e59d30d4 	ldr	r3, [sp, #212]
         e4b38:	e92d000c 	stmdb	sp!, {r2, r3}
         e4b3c:	e59d309a 	ldr	r3, [sp, #154]
         e4b40:	e1a03843 	mov	r3, r3, asr #16
         e4b44:	e59d2096 	ldr	r2, [sp, #150]
         e4b48:	e1a02842 	mov	r2, r2, asr #16
         e4b4c:	e28d1010 	add	r1, sp, #16	; 0x10
         e4b50:	e59b0020 	ldr	r0, [fp, #32]
         e4b54:	e5900000 	ldr	r0, [r0]
         e4b58:	eb69af2e 	bl	1b50818 <$InitRgn__FP6RegionP8RgnStatelN23Pc>
         e4b5c:	e28dd008 	add	sp, sp, #8	; 0x8
         e4b60:	e3350000 	teq	r5, #0	; 0x0
         e4b64:	1a000006 	bne	e4b84 <TGrayShrink::GrayShrink(PixelMap *, PixelMap *, Rect *, Rect *, Region **, Region **, Region **)+0x468>
         e4b68:	e59d0092 	ldr	r0, [sp, #146]
         e4b6c:	e0672840 	rsb	r2, r7, r0, asr #16
         e4b70:	e59d008e 	ldr	r0, [sp, #142]
         e4b74:	e0671840 	rsb	r1, r7, r0, asr #16
         e4b78:	e1a03009 	mov	r3, r9
         e4b7c:	e1a00006 	mov	r0, r6
         e4b80:	eb69c3c5 	bl	1b55a9c <$XorSlab__FPclN22>
         e4b84:	e59a2004 	ldr	r2, [sl, #4]	; fField4
         e4b88:	e1a02842 	mov	r2, r2, asr #16
         e4b8c:	e1a0000a 	mov	r0, sl
         e4b90:	e58d20ac 	str	r2, [sp, #172]
         e4b94:	eb6c9e9b 	bl	1c0c608 <$GetPixelMapBits(PixelMap *)>
         e4b98:	e1a09000 	mov	r9, r0
         e4b9c:	e59a100c 	ldr	r1, [sl, #12]
         e4ba0:	e1a01841 	mov	r1, r1, asr #16
         e4ba4:	e59a2008 	ldr	r2, [sl, #8]
         e4ba8:	e0411842 	sub	r1, r1, r2, asr #16
         e4bac:	e59d20ac 	ldr	r2, [sp, #172]
         e4bb0:	e0200192 	mla	r0, r2, r1, r0
         e4bb4:	e58d00c0 	str	r0, [sp, #192]
         e4bb8:	e59b3010 	ldr	r3, [fp, #16]
         e4bbc:	e5931002 	ldr	r1, [r3, #2]
         e4bc0:	e1a01841 	mov	r1, r1, asr #16
         e4bc4:	e59a000a 	ldr	r0, [sl, #10]
         e4bc8:	e0418840 	sub	r8, r1, r0, asr #16
         e4bcc:	e59b0014 	ldr	r0, [fp, #20]
         e4bd0:	e5900002 	ldr	r0, [r0, #2]
         e4bd4:	e1a00840 	mov	r0, r0, asr #16
         e4bd8:	e59d108e 	ldr	r1, [sp, #142]
         e4bdc:	e1500841 	cmp	r0, r1, asr #16
         e4be0:	aa000012 	bge	e4c30 <TGrayShrink::GrayShrink(PixelMap *, PixelMap *, Rect *, Rect *, Region **, Region **, Region **)+0x514>
         e4be4:	e59d108e 	ldr	r1, [sp, #142]
         e4be8:	e0607841 	rsb	r7, r0, r1, asr #16
         e4bec:	e59d00b4 	ldr	r0, [sp, #180]
         e4bf0:	e3300000 	teq	r0, #0	; 0x0
         e4bf4:	00882007 	addeq	r2, r8, r7
         e4bf8:	0a00000b 	beq	e4c2c <TGrayShrink::GrayShrink(PixelMap *, PixelMap *, Rect *, Rect *, Region **, Region **, Region **)+0x510>
         e4bfc:	e59d0098 	ldr	r0, [sp, #152]
         e4c00:	e1a01800 	mov	r1, r0, lsl #16
         e4c04:	e59d0094 	ldr	r0, [sp, #148]
         e4c08:	e1a00800 	mov	r0, r0, lsl #16
         e4c0c:	eb6bf12b 	bl	1be10c0 <$FixedDivide>
         e4c10:	e1a01000 	mov	r1, r0
         e4c14:	e1a00807 	mov	r0, r7, lsl #16
         e4c18:	eb6bf129 	bl	1be10c4 <$FixedMultiply>
         e4c1c:	e2800902 	add	r0, r0, #32768	; 0x8000
         e4c20:	e1a00840 	mov	r0, r0, asr #16
         e4c24:	e1a00800 	mov	r0, r0, lsl #16
         e4c28:	e0882840 	add	r2, r8, r0, asr #16
         e4c2c:	e1a08002 	mov	r8, r2
         e4c30:	e59d10ec 	ldr	r1, [sp, #236]
         e4c34:	e59a0010 	ldr	r0, [sl, #16]
         e4c38:	e20000ff 	and	r0, r0, #255	; 0xff
         e4c3c:	e0810000 	add	r0, r1, r0
         e4c40:	e5d01088 	ldrb	r1, [r0, #136]
         e4c44:	e001e008 	and	lr, r1, r8
         e4c48:	e58de0a0 	str	lr, [sp, #160]
         e4c4c:	e5d00044 	ldrb	r0, [r0, #68]
         e4c50:	e1a00058 	mov	r0, r8, asr r0
         e4c54:	e26ee020 	rsb	lr, lr, #32	; 0x20
         e4c58:	e58de09c 	str	lr, [sp, #156]
         e4c5c:	e59a1008 	ldr	r1, [sl, #8]
         e4c60:	e59b3010 	ldr	r3, [fp, #16]
         e4c64:	e5932000 	ldr	r2, [r3]
         e4c68:	e1a02842 	mov	r2, r2, asr #16
         e4c6c:	e0421841 	sub	r1, r2, r1, asr #16
         e4c70:	e59d20ac 	ldr	r2, [sp, #172]
         e4c74:	e0219192 	mla	r1, r2, r1, r9
         e4c78:	e0817100 	add	r7, r1, r0, lsl #2
         e4c7c:	e5940004 	ldr	r0, [r4, #4]	; fField4
         e4c80:	e1a00840 	mov	r0, r0, asr #16
         e4c84:	e58d00a8 	str	r0, [sp, #168]
         e4c88:	e59b0014 	ldr	r0, [fp, #20]
         e4c8c:	e5908000 	ldr	r8, [r0]
         e4c90:	e1a08848 	mov	r8, r8, asr #16
         e4c94:	e59d008e 	ldr	r0, [sp, #142]
         e4c98:	e1a00840 	mov	r0, r0, asr #16
         e4c9c:	e594100a 	ldr	r1, [r4, #10]
         e4ca0:	e0409841 	sub	r9, r0, r1, asr #16
         e4ca4:	e59d00ec 	ldr	r0, [sp, #236]
         e4ca8:	e5941010 	ldr	r1, [r4, #16]
         e4cac:	e20110ff 	and	r1, r1, #255	; 0xff
         e4cb0:	e0800001 	add	r0, r0, r1
         e4cb4:	e5d00088 	ldrb	r0, [r0, #136]
         e4cb8:	e0000009 	and	r0, r0, r9
         e4cbc:	e59d1000 	ldr	r1, [sp]
         e4cc0:	e1a03110 	mov	r3, r0, lsl r1
         e4cc4:	e1a00004 	mov	r0, r4
         e4cc8:	e58d30a4 	str	r3, [sp, #164]
         e4ccc:	eb6c9e4d 	bl	1c0c608 <$GetPixelMapBits(PixelMap *)>
         e4cd0:	e5942008 	ldr	r2, [r4, #8]
         e4cd4:	e59d108c 	ldr	r1, [sp, #140]
         e4cd8:	e1a01841 	mov	r1, r1, asr #16
         e4cdc:	e0412842 	sub	r2, r1, r2, asr #16
         e4ce0:	e5941004 	ldr	r1, [r4, #4]	; fField4
         e4ce4:	e1a01841 	mov	r1, r1, asr #16
         e4ce8:	e0200291 	mla	r0, r1, r2, r0
         e4cec:	e59d20ec 	ldr	r2, [sp, #236]
         e4cf0:	e5941010 	ldr	r1, [r4, #16]
         e4cf4:	e20110ff 	and	r1, r1, #255	; 0xff
         e4cf8:	e0821001 	add	r1, r2, r1
         e4cfc:	e5d11044 	ldrb	r1, [r1, #68]
         e4d00:	e1a01159 	mov	r1, r9, asr r1
         e4d04:	e080a101 	add	sl, r0, r1, lsl #2
         e4d08:	e59d0094 	ldr	r0, [sp, #148]
         e4d0c:	e1a00840 	mov	r0, r0, asr #16
         e4d10:	e1a000c0 	mov	r0, r0, asr #1
         e4d14:	e2609000 	rsb	r9, r0, #0	; 0x0
         e4d18:	e28d108c 	add	r1, sp, #140	; 0x8c
         e4d1c:	e1a00004 	mov	r0, r4
         e4d20:	eb69bb17 	bl	1b53984 <$QDStartDrawing(PixelMap *, Rect *)>
         e4d24:	eb69c365 	bl	1b55ac0 <$QDPatchpoint(void)>
         e4d28:	ea00004f 	b	e4e6c <TGrayShrink::GrayShrink(PixelMap *, PixelMap *, Rect *, Rect *, Region **, Region **, Region **)+0x750>
         e4d2c:	00380bcc 	eoreqs	r0, r8, ip, asr #23
         e4d30:	e59d1096 	ldr	r1, [sp, #150]
         e4d34:	e1a01841 	mov	r1, r1, asr #16
         e4d38:	e59d00cc 	ldr	r0, [sp, #204]
         e4d3c:	eb6becb6 	bl	1be001c <$ZeroBytes>
         e4d40:	e1a0c007 	mov	ip, r7
         e4d44:	e59d30b8 	ldr	r3, [sp, #184]
         e4d48:	e3530000 	cmp	r3, #0	; 0x0
         e4d4c:	e59d20cc 	ldr	r2, [sp, #204]
         e4d50:	da000012 	ble	e4da0 <TGrayShrink::GrayShrink(PixelMap *, PixelMap *, Rect *, Rect *, Region **, Region **, Region **)+0x684>
         e4d54:	e89c0003 	ldmia	ip, {r0, r1}
         e4d58:	e28cc004 	add	ip, ip, #4	; 0x4
         e4d5c:	e59de09c 	ldr	lr, [sp, #156]
         e4d60:	e1a01e31 	mov	r1, r1, lsr lr
         e4d64:	e59de0a0 	ldr	lr, [sp, #160]
         e4d68:	e0910e10 	adds	r0, r1, r0, lsl lr
         e4d6c:	e1a01002 	mov	r1, r2
         e4d70:	0a000006 	beq	e4d90 <TGrayShrink::GrayShrink(PixelMap *, PixelMap *, Rect *, Rect *, Region **, Region **, Region **)+0x674>
         e4d74:	e3500000 	cmp	r0, #0	; 0x0
         e4d78:	b5d1e000 	ldrltb	lr, [r1]
         e4d7c:	b28ee001 	addlt	lr, lr, #1	; 0x1
         e4d80:	b5c1e000 	strltb	lr, [r1]
         e4d84:	e2811001 	add	r1, r1, #1	; 0x1
         e4d88:	e1b00080 	movs	r0, r0, lsl #1
         e4d8c:	1afffff8 	bne	e4d74 <TGrayShrink::GrayShrink(PixelMap *, PixelMap *, Rect *, Rect *, Region **, Region **, Region **)+0x658>
         e4d90:	e2822020 	add	r2, r2, #32	; 0x20
         e4d94:	e2433001 	sub	r3, r3, #1	; 0x1
         e4d98:	e3530000 	cmp	r3, #0	; 0x0
         e4d9c:	caffffec 	bgt	e4d54 <TGrayShrink::GrayShrink(PixelMap *, PixelMap *, Rect *, Rect *, Region **, Region **, Region **)+0x638>
         e4da0:	e59d20ac 	ldr	r2, [sp, #172]
         e4da4:	e0877002 	add	r7, r7, r2
         e4da8:	e59d0098 	ldr	r0, [sp, #152]
         e4dac:	e0899840 	add	r9, r9, r0, asr #16
         e4db0:	e3590000 	cmp	r9, #0	; 0x0
         e4db4:	ca000002 	bgt	e4dc4 <TGrayShrink::GrayShrink(PixelMap *, PixelMap *, Rect *, Rect *, Region **, Region **, Region **)+0x6a8>
         e4db8:	e59d00c0 	ldr	r0, [sp, #192]
         e4dbc:	e1570000 	cmp	r7, r0
         e4dc0:	3affffde 	bcc	e4d40 <TGrayShrink::GrayShrink(PixelMap *, PixelMap *, Rect *, Rect *, Region **, Region **, Region **)+0x624>
         e4dc4:	e59d20c4 	ldr	r2, [sp, #196]
         e4dc8:	e59d30b4 	ldr	r3, [sp, #180]
         e4dcc:	e92d000c 	stmdb	sp!, {r2, r3}
         e4dd0:	e28d10d4 	add	r1, sp, #212	; 0xd4
         e4dd4:	e8910003 	ldmia	r1, {r0, r1}
         e4dd8:	e59d20d0 	ldr	r2, [sp, #208]
         e4ddc:	e59d30c4 	ldr	r3, [sp, #196]
         e4de0:	e1a0e00f 	mov	lr, pc
         e4de4:	e59df00c 	ldr	pc, [sp, #12]
         e4de8:	e28dd008 	add	sp, sp, #8	; 0x8
         e4dec:	e59d008c 	ldr	r0, [sp, #140]
         e4df0:	e1580840 	cmp	r8, r0, asr #16
         e4df4:	ba000015 	blt	e4e50 <TGrayShrink::GrayShrink(PixelMap *, PixelMap *, Rect *, Rect *, Region **, Region **, Region **)+0x734>
         e4df8:	e3350000 	teq	r5, #0	; 0x0
         e4dfc:	0a000009 	beq	e4e28 <TGrayShrink::GrayShrink(PixelMap *, PixelMap *, Rect *, Rect *, Region **, Region **, Region **)+0x70c>
         e4e00:	e28d3008 	add	r3, sp, #8	; 0x8
         e4e04:	e28d2034 	add	r2, sp, #52	; 0x34
         e4e08:	e28d1060 	add	r1, sp, #96	; 0x60
         e4e0c:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         e4e10:	e1a02006 	mov	r2, r6
         e4e14:	e1a01005 	mov	r1, r5
         e4e18:	e1a00008 	mov	r0, r8
         e4e1c:	e59d30bc 	ldr	r3, [sp, #188]
         e4e20:	eb6999e1 	bl	1b4b5ac <$MSeekMask__FlT1PUlT1P8RgnStateN25>
         e4e24:	e28dd00c 	add	sp, sp, #12	; 0xc
         e4e28:	e59d30a4 	ldr	r3, [sp, #164]
         e4e2c:	e92d0008 	stmdb	sp!, {r3}
         e4e30:	e1a0200a 	mov	r2, sl
         e4e34:	e1a00006 	mov	r0, r6
         e4e38:	e59d10d4 	ldr	r1, [sp, #212]
         e4e3c:	e59d30b4 	ldr	r3, [sp, #180]
         e4e40:	eb69cf7e 	bl	1b58c40 <$GrayBlitModeCopy__FPlN21lT4>
         e4e44:	e28dd004 	add	sp, sp, #4	; 0x4
         e4e48:	e59d00a8 	ldr	r0, [sp, #168]
         e4e4c:	e08aa000 	add	sl, sl, r0
         e4e50:	e2888001 	add	r8, r8, #1	; 0x1
         e4e54:	e59d0090 	ldr	r0, [sp, #144]
         e4e58:	e1580840 	cmp	r8, r0, asr #16
         e4e5c:	aa000002 	bge	e4e6c <TGrayShrink::GrayShrink(PixelMap *, PixelMap *, Rect *, Rect *, Region **, Region **, Region **)+0x750>
         e4e60:	e59d0094 	ldr	r0, [sp, #148]
         e4e64:	e0599840 	subs	r9, r9, r0, asr #16
         e4e68:	5affffdf 	bpl	e4dec <TGrayShrink::GrayShrink(PixelMap *, PixelMap *, Rect *, Rect *, Region **, Region **, Region **)+0x6d0>
         e4e6c:	e59d00c0 	ldr	r0, [sp, #192]
         e4e70:	e1570000 	cmp	r7, r0
         e4e74:	2a000002 	bcs	e4e84 <TGrayShrink::GrayShrink(PixelMap *, PixelMap *, Rect *, Rect *, Region **, Region **, Region **)+0x768>
         e4e78:	e59d0090 	ldr	r0, [sp, #144]
         e4e7c:	e1580840 	cmp	r8, r0, asr #16
         e4e80:	baffffaa 	blt	e4d30 <TGrayShrink::GrayShrink(PixelMap *, PixelMap *, Rect *, Rect *, Region **, Region **, Region **)+0x614>
         e4e84:	e28d108c 	add	r1, sp, #140	; 0x8c
         e4e88:	e1a00004 	mov	r0, r4
         e4e8c:	eb69babd 	bl	1b53988 <$QDStopDrawing(PixelMap *, Rect *)>
         e4e90:	e59d00d4 	ldr	r0, [sp, #212]
         e4e94:	e3300000 	teq	r0, #0	; 0x0
         e4e98:	0a000005 	beq	e4eb4 <TGrayShrink::GrayShrink(PixelMap *, PixelMap *, Rect *, Rect *, Region **, Region **, Region **)+0x798>
         e4e9c:	e59d00e0 	ldr	r0, [sp, #224]
         e4ea0:	e20010ff 	and	r1, r0, #255	; 0xff
         e4ea4:	e59b0020 	ldr	r0, [fp, #32]
         e4ea8:	eb6bf498 	bl	1be2110 <$HSetState>
         e4eac:	e59d00d4 	ldr	r0, [sp, #212]
         e4eb0:	eb6999c4 	bl	1b4b5c8 <$QDDisposeTempPtr(char *)>
         e4eb4:	e59d00d8 	ldr	r0, [sp, #216]
         e4eb8:	e3300000 	teq	r0, #0	; 0x0
         e4ebc:	0a000005 	beq	e4ed8 <TGrayShrink::GrayShrink(PixelMap *, PixelMap *, Rect *, Rect *, Region **, Region **, Region **)+0x7bc>
         e4ec0:	e59d00e4 	ldr	r0, [sp, #228]
         e4ec4:	e20010ff 	and	r1, r0, #255	; 0xff
         e4ec8:	e59b001c 	ldr	r0, [fp, #28]
         e4ecc:	eb6bf48f 	bl	1be2110 <$HSetState>
         e4ed0:	e59d00d8 	ldr	r0, [sp, #216]
         e4ed4:	eb6999bb 	bl	1b4b5c8 <$QDDisposeTempPtr(char *)>
         e4ed8:	e59d00dc 	ldr	r0, [sp, #220]
         e4edc:	e3300000 	teq	r0, #0	; 0x0
         e4ee0:	0a000005 	beq	e4efc <TGrayShrink::GrayShrink(PixelMap *, PixelMap *, Rect *, Rect *, Region **, Region **, Region **)+0x7e0>
         e4ee4:	e59d00e8 	ldr	r0, [sp, #232]
         e4ee8:	e20010ff 	and	r1, r0, #255	; 0xff
         e4eec:	e59b0018 	ldr	r0, [fp, #24]
         e4ef0:	eb6bf486 	bl	1be2110 <$HSetState>
         e4ef4:	e59d00dc 	ldr	r0, [sp, #220]
         e4ef8:	eb6999b2 	bl	1b4b5c8 <$QDDisposeTempPtr(char *)>
         e4efc:	e3360000 	teq	r6, #0	; 0x0
         e4f00:	11a00006 	movne	r0, r6
         e4f04:	1b6999af 	blne	1b4b5c8 <$QDDisposeTempPtr(char *)>
         e4f08:	e59d00c4 	ldr	r0, [sp, #196]
         e4f0c:	e3300000 	teq	r0, #0	; 0x0
         e4f10:	159d00c4 	ldrne	r0, [sp, #196]
         e4f14:	1b6999ab 	blne	1b4b5c8 <$QDDisposeTempPtr(char *)>
         e4f18:	e59d00d0 	ldr	r0, [sp, #208]
         e4f1c:	e3300000 	teq	r0, #0	; 0x0
         e4f20:	0a000005 	beq	e4f3c <TGrayShrink::GrayShrink(PixelMap *, PixelMap *, Rect *, Rect *, Region **, Region **, Region **)+0x820>
         e4f24:	e59d00d0 	ldr	r0, [sp, #208]
         e4f28:	eb6999a6 	bl	1b4b5c8 <$QDDisposeTempPtr(char *)>
         e4f2c:	e59d00d0 	ldr	r0, [sp, #208]
         e4f30:	e3300000 	teq	r0, #0	; 0x0
         e4f34:	159d00cc 	ldrne	r0, [sp, #204]
         e4f38:	1b6999a2 	blne	1b4b5c8 <$QDDisposeTempPtr(char *)>
         e4f3c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: ClassInfo__11TGrayShrinkSFv
 * Address: 00388b7c
 */
void TGrayShrink::ClassInfo() {
    /*
        388b7c:	e24f0044 	sub	r0, pc, #68	; 0x44
        388b80:	e1a0f00e 	mov	pc, lr
        388b84:	e3a00000 	mov	r0, #0	; 0x0
        388b88:	e1a0f00e 	mov	pc, lr
        388b8c:	54477261 	strplb	r7, [r7], -#609
        388b90:	79536872 	ldmvcdb	r3, {r1, r4, r5, r6, fp, sp, lr}^
        388b94:	696e6b00 	stmvsdb	lr!, {r8, r9, fp, sp, lr}^
        388b98:	54506978 	ldrplb	r6, [r0], -#2424	; fField2424
        388b9c:	656c4d61 	strvsb	r4, [ip, -#3425]!
        388ba0:	70416e74 	subvc	r6, r1, r4, ror lr
        388ba4:	69616c69 	stmvsdb	r1!, {r0, r3, r5, r6, sl, fp, sp, lr}^
        388ba8:	61730000 	cmnvs	r3, r0
        388bac:	00000000 	andeq	r0, r0, r0
        388bb0:	eafffff1 	b	388b7c <ClassInfo__11TGrayShrinkSFv>
        388bb4:	ea5f485d 	b	1b5ad30 <TGrayShrink::$GrayShrink(PixelMap *, PixelMap *, Rect *, Rect *, Region **, Region **, Region **)>
        388bb8:	e1a0000f 	mov	r0, pc
        388bbc:	e1a0f00e 	mov	pc, lr
        388bc0:	54575265 	ldrplb	r5, [r7], -#613
        388bc4:	636f676e 	cmnvs	pc, #28835840	; 0x1b80000
        388bc8:	697a6572 	ldmvsdb	sl!, {r1, r4, r5, r6, r8, sl, sp, lr}^
        388bcc:	00000000 	andeq	r0, r0, r0
    */
}

