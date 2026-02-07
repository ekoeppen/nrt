#include "include/TGeneralShapeUnit.h"

/**
 * Symbol: Make__17TGeneralShapeUnitSFP7TDomainUlP6TArray
 * Address: 00216668
 */
void TGeneralShapeUnit::Make() {
    /*
        216668:	e1a0c00d 	mov	ip, sp
        21666c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        216670:	e24cb004 	sub	fp, ip, #4	; 0x4
        216674:	e1a06000 	mov	r6, r0
        216678:	e1a05001 	mov	r5, r1
        21667c:	e1a04002 	mov	r4, r2
        216680:	e3a0007c 	mov	r0, #124	; 0x7c
        216684:	eb66e02b 	bl	1bce738 <$__nw(unsigned int)>
        216688:	e1b07000 	movs	r7, r0
        21668c:	0a000003 	beq	2166a0 <Make__17TGeneralShapeUnitSFP7TDomainUlP6TArray+0x38>
        216690:	e1a00007 	mov	r0, r7
        216694:	eb6511ac 	bl	1b5ad4c <TSIUnit::$__ct(void)>
        216698:	e59f003c 	ldr	r0, [pc, #3c]	; 2166dc <Make__17TGeneralShapeUnitSFP7TDomainUlP6TArray+0x74>
        21669c:	e5870000 	str	r0, [r7]
        2166a0:	e3370000 	teq	r7, #0	; 0x0
        2166a4:	0a00000a 	beq	2166d4 <Make__17TGeneralShapeUnitSFP7TDomainUlP6TArray+0x6c>
        2166a8:	e1a03004 	mov	r3, r4
        2166ac:	e1a02005 	mov	r2, r5
        2166b0:	e1a01006 	mov	r1, r6
        2166b4:	e1a00007 	mov	r0, r7
        2166b8:	eb654346 	bl	1b673d8 <TGeneralShapeUnit::$IGeneralShapeUnit(TDomain *, unsigned long, TArray *)>
        2166bc:	e3300000 	teq	r0, #0	; 0x0
        2166c0:	0a000003 	beq	2166d4 <Make__17TGeneralShapeUnitSFP7TDomainUlP6TArray+0x6c>
        2166c4:	e1a00007 	mov	r0, r7
        2166c8:	e1a0e00f 	mov	lr, pc
        2166cc:	e597f000 	ldr	pc, [r7]
        2166d0:	e3a07000 	mov	r7, #0	; 0x0
        2166d4:	e1a00007 	mov	r0, r7
        2166d8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2166dc:	0001e808 	andeq	lr, r1, r8, lsl #16
    */
}

/**
 * Symbol: TGeneralShapeUnit::IGeneralShapeUnit(TDomain *, unsigned long, TArray *)
 * Address: 002166e0
 */
TGeneralShapeUnit::IGeneralShapeUnit(TDomain *, unsigned long, TArray *) {
    /*
        2166e0:	e1a0c00d 	mov	ip, sp
        2166e4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2166e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2166ec:	e1a04000 	mov	r4, r0
        2166f0:	e1a00002 	mov	r0, r2
        2166f4:	e1a02003 	mov	r2, r3
        2166f8:	e3a05000 	mov	r5, #0	; 0x0
        2166fc:	e3a0302c 	mov	r3, #44	; 0x2c
        216700:	e584503c 	str	r5, [r4, #60]	; fField60
        216704:	e92d000c 	stmdb	sp!, {r2, r3}
        216708:	e1a03000 	mov	r3, r0
        21670c:	e1a00004 	mov	r0, r4
        216710:	e59f20a4 	ldr	r2, [pc, #a4]	; 2167bc <TGeneralShapeUnit::IGeneralShapeUnit(TDomain *, unsigned long, TArray *)+0xdc>
        216714:	eb65264c 	bl	1b6004c <TSIUnit::$ISIUnit(TDomain *, unsigned long, unsigned long, TArray *, unsigned long)>
        216718:	e28dd008 	add	sp, sp, #8	; 0x8
        21671c:	e5845044 	str	r5, [r4, #68]	; fField68
        216720:	e5845074 	str	r5, [r4, #116]	; fField116
        216724:	e5845078 	str	r5, [r4, #120]	; fField120
        216728:	e1a00004 	mov	r0, r4
        21672c:	e3a01000 	mov	r1, #0	; 0x0
        216730:	eb65432b 	bl	1b673e4 <TGeneralShapeUnit::$NewInterpretation(TDArray *)>
        216734:	e3a0007c 	mov	r0, #124	; 0x7c
        216738:	eb672e80 	bl	1be2140 <$NewPtr>
        21673c:	e5840040 	str	r0, [r4, #64]	; fField64
        216740:	e1b01000 	movs	r1, r0
        216744:	13a00000 	movne	r0, #0	; 0x0
        216748:	03a00001 	moveq	r0, #1	; 0x1
        21674c:	e3300000 	teq	r0, #0	; 0x0
        216750:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        216754:	e1a03005 	mov	r3, r5
        216758:	e5a15058 	str	r5, [r1, #88]!
        21675c:	e3a01000 	mov	r1, #0	; 0x0
        216760:	e5942040 	ldr	r2, [r4, #64]	; fField64
        216764:	e7c23001 	strb	r3, [r2, r1]
        216768:	e5942040 	ldr	r2, [r4, #64]	; fField64
        21676c:	e0822001 	add	r2, r2, r1
        216770:	e5c23008 	strb	r3, [r2, #8]
        216774:	e2811001 	add	r1, r1, #1	; 0x1
        216778:	e3510008 	cmp	r1, #8	; 0x8
        21677c:	bafffff7 	blt	216760 <TGeneralShapeUnit::IGeneralShapeUnit(TDomain *, unsigned long, TArray *)+0x80>
        216780:	e3a01000 	mov	r1, #0	; 0x0
        216784:	e3e02000 	mvn	r2, #0	; 0x0
        216788:	e594c040 	ldr	ip, [r4, #64]	; fField64
        21678c:	e08cc101 	add	ip, ip, r1, lsl #2
        216790:	e5ac2050 	str	r2, [ip, #80]!
        216794:	e594c040 	ldr	ip, [r4, #64]	; fField64
        216798:	e08cc201 	add	ip, ip, r1, lsl #4
        21679c:	e5ac305c 	str	r3, [ip, #92]!
        2167a0:	e594c040 	ldr	ip, [r4, #64]	; fField64
        2167a4:	e08cc201 	add	ip, ip, r1, lsl #4
        2167a8:	e2811001 	add	r1, r1, #1	; 0x1
        2167ac:	e5ac2064 	str	r2, [ip, #100]!
        2167b0:	e3510002 	cmp	r1, #2	; 0x2
        2167b4:	bafffff3 	blt	216788 <TGeneralShapeUnit::IGeneralShapeUnit(TDomain *, unsigned long, TArray *)+0xa8>
        2167b8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2167bc:	47534850 	undefined
    */
}

/**
 * Symbol: TGeneralShapeUnit::GetInterpretation(unsigned long)
 * Address: 002167c0
 */
TGeneralShapeUnit::GetInterpretation(unsigned long) {
    /*
        2167c0:	e5902044 	ldr	r2, [r0, #68]	; fField68
        2167c4:	e1520001 	cmp	r2, r1
        2167c8:	82800048 	addhi	r0, r0, #72	; 0x48
        2167cc:	93a00000 	movls	r0, #0	; 0x0
        2167d0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TGeneralShapeUnit::InterpretationCount(void)
 * Address: 002167d4
 */
TGeneralShapeUnit::InterpretationCount(void) {
    /*
        2167d4:	e5900044 	ldr	r0, [r0, #68]	; fField68
        2167d8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TGeneralShapeUnit::AddInterpretation(char *)
 * Address: 002167dc
 */
TGeneralShapeUnit::AddInterpretation(char *) {
    /*
        2167dc:	e1a0c00d 	mov	ip, sp
        2167e0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2167e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2167e8:	e1a04000 	mov	r4, r0
        2167ec:	e1a00001 	mov	r0, r1
        2167f0:	e2841048 	add	r1, r4, #72	; 0x48
        2167f4:	e3a02010 	mov	r2, #16	; 0x10
        2167f8:	eb655799 	bl	1b6c664 <$MoveBlock__FPcT1l>
        2167fc:	e3a00001 	mov	r0, #1	; 0x1
        216800:	e5a40044 	str	r0, [r4, #68]!	; fField68
        216804:	e3a00000 	mov	r0, #0	; 0x0
        216808:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TGeneralShapeUnit::GetGSAsStroke(void)
 * Address: 0021682c
 */
TGeneralShapeUnit::GetGSAsStroke(void) {
    /*
        21682c:	e1a0c00d 	mov	ip, sp
        216830:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        216834:	e24cb004 	sub	fp, ip, #4	; 0x4
        216838:	e1a05000 	mov	r5, r0
        21683c:	e24dd0c8 	sub	sp, sp, #200	; 0xc8
        216840:	e3a04000 	mov	r4, #0	; 0x0
        216844:	e3a01000 	mov	r1, #0	; 0x0
        216848:	e5902000 	ldr	r2, [r0]
        21684c:	e1a0e00f 	mov	lr, pc
        216850:	e282f08c 	add	pc, r2, #140	; 0x8c
        216854:	e330000f 	teq	r0, #15	; 0xf
        216858:	0a000095 	beq	216ab4 <TGeneralShapeUnit::GetGSAsStroke(void)+0x288>
        21685c:	e3300000 	teq	r0, #0	; 0x0
        216860:	13300001 	teqne	r0, #1	; 0x1
        216864:	e1a00005 	mov	r0, r5
        216868:	1a000002 	bne	216878 <TGeneralShapeUnit::GetGSAsStroke(void)+0x4c>
        21686c:	eb6542d4 	bl	1b673c4 <TGeneralShapeUnit::$GetEllipseAsStroke(void)>
        216870:	e1a04000 	mov	r4, r0
        216874:	ea000088 	b	216a9c <TGeneralShapeUnit::GetGSAsStroke(void)+0x270>
        216878:	eb6542d3 	bl	1b673cc <TGeneralShapeUnit::$GetGeneralShape(void)>
        21687c:	e1b07000 	movs	r7, r0
        216880:	1597000c 	ldrne	r0, [r7, #12]
        216884:	158d00b4 	strne	r0, [sp, #180]
        216888:	13300000 	teqne	r0, #0	; 0x0
        21688c:	0a000088 	beq	216ab4 <TGeneralShapeUnit::GetGSAsStroke(void)+0x288>
        216890:	e28d4098 	add	r4, sp, #152	; 0x98
        216894:	e1a00007 	mov	r0, r7
        216898:	e3a01000 	mov	r1, #0	; 0x0
        21689c:	e5972000 	ldr	r2, [r7]
        2168a0:	e1a0e00f 	mov	lr, pc
        2168a4:	e282f01c 	add	pc, r2, #28	; 0x1c
        2168a8:	e1a01000 	mov	r1, r0
        2168ac:	e1a00004 	mov	r0, r4
        2168b0:	e3a0200c 	mov	r2, #12	; 0xc
        2168b4:	eb667865 	bl	1bb4a50 <$memcpy>
        2168b8:	e3a00000 	mov	r0, #0	; 0x0
        2168bc:	e5948004 	ldr	r8, [r4, #4]	; fField4
        2168c0:	e5949000 	ldr	r9, [r4]
        2168c4:	eb655761 	bl	1b6c650 <$Make__7TStrokeSFUl>
        2168c8:	e1b04000 	movs	r4, r0
        2168cc:	0a000078 	beq	216ab4 <TGeneralShapeUnit::GetGSAsStroke(void)+0x288>
        2168d0:	e28d10b8 	add	r1, sp, #184	; 0xb8
        2168d4:	e28d0098 	add	r0, sp, #152	; 0x98
        2168d8:	e8905000 	ldmia	r0, {ip, lr}
        2168dc:	e8815000 	stmia	r1, {ip, lr}
        2168e0:	e3a0a001 	mov	sl, #1	; 0x1
        2168e4:	e5cda0c1 	strb	sl, [sp, #193]
        2168e8:	e3a00000 	mov	r0, #0	; 0x0
        2168ec:	e5cd00c0 	strb	r0, [sp, #192]
        2168f0:	e5cd00c3 	strb	r0, [sp, #195]
        2168f4:	e5cd00c2 	strb	r0, [sp, #194]
        2168f8:	e28d00b8 	add	r0, sp, #184	; 0xb8
        2168fc:	eb6542a8 	bl	1b673a4 <$CleanPt(TabPt *)>
        216900:	e28d10b8 	add	r1, sp, #184	; 0xb8
        216904:	e1a00004 	mov	r0, r4
        216908:	eb654f18 	bl	1b6a570 <TStroke::$AddPoint(TabPt *)>
        21690c:	e1b05000 	movs	r5, r0
        216910:	1a000058 	bne	216a78 <TGeneralShapeUnit::GetGSAsStroke(void)+0x24c>
        216914:	e3a06001 	mov	r6, #1	; 0x1
        216918:	e59d00b4 	ldr	r0, [sp, #180]
        21691c:	e3500001 	cmp	r0, #1	; 0x1
        216920:	da00005d 	ble	216a9c <TGeneralShapeUnit::GetGSAsStroke(void)+0x270>
        216924:	e28d1008 	add	r1, sp, #8	; 0x8
        216928:	e58d10c4 	str	r1, [sp, #196]
        21692c:	e28da010 	add	sl, sp, #16	; 0x10
        216930:	e1a01006 	mov	r1, r6
        216934:	e1a00007 	mov	r0, r7
        216938:	e5972000 	ldr	r2, [r7]
        21693c:	e1a0e00f 	mov	lr, pc
        216940:	e282f01c 	add	pc, r2, #28	; 0x1c
        216944:	e1a01000 	mov	r1, r0
        216948:	e28d00a4 	add	r0, sp, #164	; 0xa4
        21694c:	e3a0200c 	mov	r2, #12	; 0xc
        216950:	eb66783e 	bl	1bb4a50 <$memcpy>
        216954:	e5dd00ac 	ldrb	r0, [sp, #172]
        216958:	e3300000 	teq	r0, #0	; 0x0
        21695c:	1a00003d 	bne	216a58 <TGeneralShapeUnit::GetGSAsStroke(void)+0x22c>
        216960:	e5dd00a0 	ldrb	r0, [sp, #160]
        216964:	e3300000 	teq	r0, #0	; 0x0
        216968:	1a00000b 	bne	21699c <TGeneralShapeUnit::GetGSAsStroke(void)+0x170>
        21696c:	e28d10b8 	add	r1, sp, #184	; 0xb8
        216970:	e28d00a4 	add	r0, sp, #164	; 0xa4
        216974:	e8905000 	ldmia	r0, {ip, lr}
        216978:	e8815000 	stmia	r1, {ip, lr}
        21697c:	e28d00b8 	add	r0, sp, #184	; 0xb8
        216980:	eb654287 	bl	1b673a4 <$CleanPt(TabPt *)>
        216984:	e28d10b8 	add	r1, sp, #184	; 0xb8
        216988:	e1a00004 	mov	r0, r4
        21698c:	eb654ef7 	bl	1b6a570 <TStroke::$AddPoint(TabPt *)>
        216990:	e1b05000 	movs	r5, r0
        216994:	1a000037 	bne	216a78 <TGeneralShapeUnit::GetGSAsStroke(void)+0x24c>
        216998:	ea00002b 	b	216a4c <TGeneralShapeUnit::GetGSAsStroke(void)+0x220>
        21699c:	e58d8004 	str	r8, [sp, #4]	; fField4
        2169a0:	e58d9000 	str	r9, [sp]
        2169a4:	e59d10c4 	ldr	r1, [sp, #196]
        2169a8:	e28d0098 	add	r0, sp, #152	; 0x98
        2169ac:	e8901008 	ldmia	r0, {r3, ip}
        2169b0:	e8811008 	stmia	r1, {r3, ip}
        2169b4:	e28d00a4 	add	r0, sp, #164	; 0xa4
        2169b8:	e8905000 	ldmia	r0, {ip, lr}
        2169bc:	e88a5000 	stmia	sl, {ip, lr}
        2169c0:	e3a00000 	mov	r0, #0	; 0x0
        2169c4:	e1a0100a 	mov	r1, sl
        2169c8:	e58d00b0 	str	r0, [sp, #176]
        2169cc:	e1a0000d 	mov	r0, sp
        2169d0:	eb6514fc 	bl	1b5bdc8 <$CheapDistPoint__FP6FPointT1>
        2169d4:	e3500806 	cmp	r0, #393216	; 0x60000
        2169d8:	b3a03001 	movlt	r3, #1	; 0x1
        2169dc:	ba000002 	blt	2169ec <TGeneralShapeUnit::GetGSAsStroke(void)+0x1c0>
        2169e0:	e3500812 	cmp	r0, #1179648	; 0x120000
        2169e4:	a3a03003 	movge	r3, #3	; 0x3
        2169e8:	b3a03002 	movlt	r3, #2	; 0x2
        2169ec:	e3a00001 	mov	r0, #1	; 0x1
        2169f0:	e1a09310 	mov	r9, r0, lsl r3
        2169f4:	e28d2018 	add	r2, sp, #24	; 0x18
        2169f8:	e28d10b0 	add	r1, sp, #176	; 0xb0
        2169fc:	e1a0000d 	mov	r0, sp
        216a00:	eb654269 	bl	1b673ac <$CurvePts(Curve *, long *, FPoint *, long)>
        216a04:	e3a08000 	mov	r8, #0	; 0x0
        216a08:	e3590000 	cmp	r9, #0	; 0x0
        216a0c:	da00000e 	ble	216a4c <TGeneralShapeUnit::GetGSAsStroke(void)+0x220>
        216a10:	e28d00b8 	add	r0, sp, #184	; 0xb8
        216a14:	e28d1018 	add	r1, sp, #24	; 0x18
        216a18:	e0811188 	add	r1, r1, r8, lsl #3
        216a1c:	e8915000 	ldmia	r1, {ip, lr}
        216a20:	e8805000 	stmia	r0, {ip, lr}
        216a24:	e28d00b8 	add	r0, sp, #184	; 0xb8
        216a28:	eb65425d 	bl	1b673a4 <$CleanPt(TabPt *)>
        216a2c:	e28d10b8 	add	r1, sp, #184	; 0xb8
        216a30:	e1a00004 	mov	r0, r4
        216a34:	eb654ecd 	bl	1b6a570 <TStroke::$AddPoint(TabPt *)>
        216a38:	e1b05000 	movs	r5, r0
        216a3c:	1a00000d 	bne	216a78 <TGeneralShapeUnit::GetGSAsStroke(void)+0x24c>
        216a40:	e2888001 	add	r8, r8, #1	; 0x1
        216a44:	e1580009 	cmp	r8, r9
        216a48:	bafffff0 	blt	216a10 <TGeneralShapeUnit::GetGSAsStroke(void)+0x1e4>
        216a4c:	e28d00a4 	add	r0, sp, #164	; 0xa4
        216a50:	e5908004 	ldr	r8, [r0, #4]	; fField4
        216a54:	e5909000 	ldr	r9, [r0]
        216a58:	e28d0098 	add	r0, sp, #152	; 0x98
        216a5c:	e28d10a4 	add	r1, sp, #164	; 0xa4
        216a60:	e891100a 	ldmia	r1, {r1, r3, ip}
        216a64:	e880100a 	stmia	r0, {r1, r3, ip}
        216a68:	e2866001 	add	r6, r6, #1	; 0x1
        216a6c:	e59d00b4 	ldr	r0, [sp, #180]
        216a70:	e1560000 	cmp	r6, r0
        216a74:	baffffad 	blt	216930 <TGeneralShapeUnit::GetGSAsStroke(void)+0x104>
        216a78:	e3350000 	teq	r5, #0	; 0x0
        216a7c:	0a000006 	beq	216a9c <TGeneralShapeUnit::GetGSAsStroke(void)+0x270>
        216a80:	e3340000 	teq	r4, #0	; 0x0
        216a84:	0a00000a 	beq	216ab4 <TGeneralShapeUnit::GetGSAsStroke(void)+0x288>
        216a88:	e1a00004 	mov	r0, r4
        216a8c:	e1a0e00f 	mov	lr, pc
        216a90:	e594f000 	ldr	pc, [r4]
        216a94:	e3a04000 	mov	r4, #0	; 0x0
        216a98:	ea000005 	b	216ab4 <TGeneralShapeUnit::GetGSAsStroke(void)+0x288>
        216a9c:	e3340000 	teq	r4, #0	; 0x0
        216aa0:	0a000003 	beq	216ab4 <TGeneralShapeUnit::GetGSAsStroke(void)+0x288>
        216aa4:	e1a00004 	mov	r0, r4
        216aa8:	e5941000 	ldr	r1, [r4]
        216aac:	e1a0e00f 	mov	lr, pc
        216ab0:	e281f024 	add	pc, r1, #36	; 0x24
        216ab4:	e1a00004 	mov	r0, r4
        216ab8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TGeneralShapeUnit::GetEllipseAsStroke(void)
 * Address: 00216abc
 */
TGeneralShapeUnit::GetEllipseAsStroke(void) {
    /*
        216abc:	e1a0c00d 	mov	ip, sp
        216ac0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        216ac4:	e24cb004 	sub	fp, ip, #4	; 0x4
        216ac8:	e24dd00c 	sub	sp, sp, #12	; 0xc
        216acc:	e3a01000 	mov	r1, #0	; 0x0
        216ad0:	e5902000 	ldr	r2, [r0]
        216ad4:	e1a0e00f 	mov	lr, pc
        216ad8:	e282f068 	add	pc, r2, #104	; 0x68
        216adc:	e1a05000 	mov	r5, r0
        216ae0:	e3a00000 	mov	r0, #0	; 0x0
        216ae4:	eb6556d9 	bl	1b6c650 <$Make__7TStrokeSFUl>
        216ae8:	e1b04000 	movs	r4, r0
        216aec:	0a000094 	beq	216d44 <TGeneralShapeUnit::GetEllipseAsStroke(void)+0x288>
        216af0:	e3a00001 	mov	r0, #1	; 0x1
        216af4:	e5cd0009 	strb	r0, [sp, #9]
        216af8:	e3a00000 	mov	r0, #0	; 0x0
        216afc:	e5cd0008 	strb	r0, [sp, #8]
        216b00:	e5cd000b 	strb	r0, [sp, #11]
        216b04:	e5cd000a 	strb	r0, [sp, #10]
        216b08:	e5950000 	ldr	r0, [r5]
        216b0c:	e59f6070 	ldr	r6, [pc, #70]	; 216b84 <TGeneralShapeUnit::GetEllipseAsStroke(void)+0xc8>
        216b10:	e3a0703f 	mov	r7, #63	; 0x3f
        216b14:	e2877bc9 	add	r7, r7, #205824	; 0x32400
        216b18:	e3300000 	teq	r0, #0	; 0x0
        216b1c:	0a000019 	beq	216b88 <TGeneralShapeUnit::GetEllipseAsStroke(void)+0xcc>
        216b20:	e3300001 	teq	r0, #1	; 0x1
        216b24:	1a000075 	bne	216d00 <TGeneralShapeUnit::GetEllipseAsStroke(void)+0x244>
        216b28:	e24dd010 	sub	sp, sp, #16	; 0x10
        216b2c:	e5951014 	ldr	r1, [r5, #20]	; fField20
        216b30:	e58d1008 	str	r1, [sp, #8]
        216b34:	e5951018 	ldr	r1, [r5, #24]	; fField24
        216b38:	e58d100c 	str	r1, [sp, #12]
        216b3c:	e595001c 	ldr	r0, [r5, #28]	; fField28
        216b40:	e58d0004 	str	r0, [sp, #4]	; fField4
        216b44:	e5950020 	ldr	r0, [r5, #32]	; fField32
        216b48:	e58d0000 	str	r0, [sp]
        216b4c:	e3a0272d 	mov	r2, #11796480	; 0xb40000
        216b50:	e1a01007 	mov	r1, r7
        216b54:	e5b50024 	ldr	r0, [r5, #36]!	; fField36
        216b58:	eb67295a 	bl	1be10c8 <$FixedMultiplyDivide>
        216b5c:	e1a05000 	mov	r5, r0
        216b60:	eb655297 	bl	1b6b5c4 <$FractSin(long)>
        216b64:	e2800a02 	add	r0, r0, #8192	; 0x2000
        216b68:	e1a09740 	mov	r9, r0, asr #14
        216b6c:	e1a00005 	mov	r0, r5
        216b70:	eb655292 	bl	1b6b5c0 <$FractCos(long)>
        216b74:	e2800a02 	add	r0, r0, #8192	; 0x2000
        216b78:	e1a08740 	mov	r8, r0, asr #14
        216b7c:	e3a05000 	mov	r5, #0	; 0x0
        216b80:	ea00002a 	b	216c30 <TGeneralShapeUnit::GetEllipseAsStroke(void)+0x174>
        216b84:	00377464 	eoreqs	r7, r7, r4, ror #8
        216b88:	e24dd004 	sub	sp, sp, #4	; 0x4
        216b8c:	e5951014 	ldr	r1, [r5, #20]	; fField20
        216b90:	e58d1000 	str	r1, [sp]
        216b94:	e2855014 	add	r5, r5, #20	; 0x14
        216b98:	e9b50300 	ldmib	r5!, {r8, r9}
        216b9c:	e3a05000 	mov	r5, #0	; 0x0
        216ba0:	e7960105 	ldr	r0, [r6, r5, lsl #2]
        216ba4:	e3a0272d 	mov	r2, #11796480	; 0xb40000
        216ba8:	e3a0103f 	mov	r1, #63	; 0x3f
        216bac:	e2811bc9 	add	r1, r1, #205824	; 0x32400
        216bb0:	eb672944 	bl	1be10c8 <$FixedMultiplyDivide>
        216bb4:	e1a0a000 	mov	sl, r0
        216bb8:	eb655281 	bl	1b6b5c4 <$FractSin(long)>
        216bbc:	e2800a02 	add	r0, r0, #8192	; 0x2000
        216bc0:	e1a07740 	mov	r7, r0, asr #14
        216bc4:	e1a0000a 	mov	r0, sl
        216bc8:	eb65527c 	bl	1b6b5c0 <$FractCos(long)>
        216bcc:	e2800a02 	add	r0, r0, #8192	; 0x2000
        216bd0:	e1a01740 	mov	r1, r0, asr #14
        216bd4:	e1a00009 	mov	r0, r9
        216bd8:	eb672939 	bl	1be10c4 <$FixedMultiply>
        216bdc:	e59d1000 	ldr	r1, [sp]
        216be0:	e0800001 	add	r0, r0, r1
        216be4:	e1a01007 	mov	r1, r7
        216be8:	e58d0004 	str	r0, [sp, #4]	; fField4
        216bec:	e1a00009 	mov	r0, r9
        216bf0:	eb672933 	bl	1be10c4 <$FixedMultiply>
        216bf4:	e0480000 	sub	r0, r8, r0
        216bf8:	e58d0008 	str	r0, [sp, #8]
        216bfc:	e28d0004 	add	r0, sp, #4	; 0x4
        216c00:	eb6541e7 	bl	1b673a4 <$CleanPt(TabPt *)>
        216c04:	e28d1004 	add	r1, sp, #4	; 0x4
        216c08:	e1a00004 	mov	r0, r4
        216c0c:	eb654e57 	bl	1b6a570 <TStroke::$AddPoint(TabPt *)>
        216c10:	e3300000 	teq	r0, #0	; 0x0
        216c14:	128dd004 	addne	sp, sp, #4	; 0x4
        216c18:	1a000036 	bne	216cf8 <TGeneralShapeUnit::GetEllipseAsStroke(void)+0x23c>
        216c1c:	e2855001 	add	r5, r5, #1	; 0x1
        216c20:	e3550019 	cmp	r5, #25	; 0x19
        216c24:	baffffdd 	blt	216ba0 <TGeneralShapeUnit::GetEllipseAsStroke(void)+0xe4>
        216c28:	e28dd004 	add	sp, sp, #4	; 0x4
        216c2c:	ea00003e 	b	216d2c <TGeneralShapeUnit::GetEllipseAsStroke(void)+0x270>
        216c30:	e7960105 	ldr	r0, [r6, r5, lsl #2]
        216c34:	e3a0272d 	mov	r2, #11796480	; 0xb40000
        216c38:	e3a0103f 	mov	r1, #63	; 0x3f
        216c3c:	e2811bc9 	add	r1, r1, #205824	; 0x32400
        216c40:	eb672920 	bl	1be10c8 <$FixedMultiplyDivide>
        216c44:	e1a0a000 	mov	sl, r0
        216c48:	eb65525d 	bl	1b6b5c4 <$FractSin(long)>
        216c4c:	e2800a02 	add	r0, r0, #8192	; 0x2000
        216c50:	e1a07740 	mov	r7, r0, asr #14
        216c54:	e1a0000a 	mov	r0, sl
        216c58:	eb655258 	bl	1b6b5c0 <$FractCos(long)>
        216c5c:	e2800a02 	add	r0, r0, #8192	; 0x2000
        216c60:	e1a01740 	mov	r1, r0, asr #14
        216c64:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        216c68:	eb672915 	bl	1be10c4 <$FixedMultiply>
        216c6c:	e1a0a000 	mov	sl, r0
        216c70:	e1a01007 	mov	r1, r7
        216c74:	e59d0000 	ldr	r0, [sp]
        216c78:	eb672911 	bl	1be10c4 <$FixedMultiply>
        216c7c:	e2607000 	rsb	r7, r0, #0	; 0x0
        216c80:	e1a01008 	mov	r1, r8
        216c84:	e1a0000a 	mov	r0, sl
        216c88:	eb67290d 	bl	1be10c4 <$FixedMultiply>
        216c8c:	e59d1008 	ldr	r1, [sp, #8]
        216c90:	e0801001 	add	r1, r0, r1
        216c94:	e52d1004 	str	r1, [sp, -#4]!	; fField4
        216c98:	e1a01009 	mov	r1, r9
        216c9c:	e1a00007 	mov	r0, r7
        216ca0:	eb672907 	bl	1be10c4 <$FixedMultiply>
        216ca4:	e49d1004 	ldr	r1, [sp], #4	; fField4
        216ca8:	e0810000 	add	r0, r1, r0
        216cac:	e1a01009 	mov	r1, r9
        216cb0:	e58d0010 	str	r0, [sp, #16]
        216cb4:	e1a0000a 	mov	r0, sl
        216cb8:	eb672901 	bl	1be10c4 <$FixedMultiply>
        216cbc:	e59d100c 	ldr	r1, [sp, #12]
        216cc0:	e041a000 	sub	sl, r1, r0
        216cc4:	e1a01008 	mov	r1, r8
        216cc8:	e1a00007 	mov	r0, r7
        216ccc:	eb6728fc 	bl	1be10c4 <$FixedMultiply>
        216cd0:	e08a0000 	add	r0, sl, r0
        216cd4:	e58d0014 	str	r0, [sp, #20]	; fField20
        216cd8:	e28d0010 	add	r0, sp, #16	; 0x10
        216cdc:	eb6541b0 	bl	1b673a4 <$CleanPt(TabPt *)>
        216ce0:	e28d1010 	add	r1, sp, #16	; 0x10
        216ce4:	e1a00004 	mov	r0, r4
        216ce8:	eb654e20 	bl	1b6a570 <TStroke::$AddPoint(TabPt *)>
        216cec:	e3300000 	teq	r0, #0	; 0x0
        216cf0:	0a000009 	beq	216d1c <TGeneralShapeUnit::GetEllipseAsStroke(void)+0x260>
        216cf4:	e28dd010 	add	sp, sp, #16	; 0x10
        216cf8:	e3300000 	teq	r0, #0	; 0x0
        216cfc:	0a00000a 	beq	216d2c <TGeneralShapeUnit::GetEllipseAsStroke(void)+0x270>
        216d00:	e3340000 	teq	r4, #0	; 0x0
        216d04:	0a00000e 	beq	216d44 <TGeneralShapeUnit::GetEllipseAsStroke(void)+0x288>
        216d08:	e1a00004 	mov	r0, r4
        216d0c:	e1a0e00f 	mov	lr, pc
        216d10:	e594f000 	ldr	pc, [r4]
        216d14:	e3a04000 	mov	r4, #0	; 0x0
        216d18:	ea000009 	b	216d44 <TGeneralShapeUnit::GetEllipseAsStroke(void)+0x288>
        216d1c:	e2855001 	add	r5, r5, #1	; 0x1
        216d20:	e3550019 	cmp	r5, #25	; 0x19
        216d24:	baffffc1 	blt	216c30 <TGeneralShapeUnit::GetEllipseAsStroke(void)+0x174>
        216d28:	e28dd010 	add	sp, sp, #16	; 0x10
        216d2c:	e3340000 	teq	r4, #0	; 0x0
        216d30:	0a000003 	beq	216d44 <TGeneralShapeUnit::GetEllipseAsStroke(void)+0x288>
        216d34:	e1a00004 	mov	r0, r4
        216d38:	e5941000 	ldr	r1, [r4]
        216d3c:	e1a0e00f 	mov	lr, pc
        216d40:	e281f024 	add	pc, r1, #36	; 0x24
        216d44:	e1a00004 	mov	r0, r4
        216d48:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TGeneralShapeUnit::IDispose(void)
 * Address: 00216e90
 */
TGeneralShapeUnit::IDispose(void) {
    /*
        216e90:	e1a0c00d 	mov	ip, sp
        216e94:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        216e98:	e24cb004 	sub	fp, ip, #4	; 0x4
        216e9c:	e1a04000 	mov	r4, r0
        216ea0:	e5901000 	ldr	r1, [r0]
        216ea4:	e1a0e00f 	mov	lr, pc
        216ea8:	e281f020 	add	pc, r1, #32	; 0x20
        216eac:	e3300000 	teq	r0, #0	; 0x0
        216eb0:	0a000008 	beq	216ed8 <TGeneralShapeUnit::IDispose(void)+0x48>
        216eb4:	e1a00004 	mov	r0, r4
        216eb8:	e3a01000 	mov	r1, #0	; 0x0
        216ebc:	e5942000 	ldr	r2, [r4]
        216ec0:	e1a0e00f 	mov	lr, pc
        216ec4:	e282f068 	add	pc, r2, #104	; 0x68
        216ec8:	e1a00004 	mov	r0, r4
        216ecc:	eb65413e 	bl	1b673cc <TGeneralShapeUnit::$GetGeneralShape(void)>
        216ed0:	e3300000 	teq	r0, #0	; 0x0
        216ed4:	1b6551bf 	blne	1b6b5d8 <$GDisposeShape(TDArray *)>
        216ed8:	e1a00004 	mov	r0, r4
        216edc:	e3a01601 	mov	r1, #1048576	; 0x100000
        216ee0:	eb6530c0 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        216ee4:	e3300000 	teq	r0, #0	; 0x0
        216ee8:	0a00001a 	beq	216f58 <TGeneralShapeUnit::IDispose(void)+0xc8>
        216eec:	e1a00004 	mov	r0, r4
        216ef0:	e5941000 	ldr	r1, [r4]
        216ef4:	e1a0e00f 	mov	lr, pc
        216ef8:	e281f01c 	add	pc, r1, #28	; 0x1c
        216efc:	e1a06000 	mov	r6, r0
        216f00:	e3a05000 	mov	r5, #0	; 0x0
        216f04:	e3500000 	cmp	r0, #0	; 0x0
        216f08:	9a000012 	bls	216f58 <TGeneralShapeUnit::IDispose(void)+0xc8>
        216f0c:	e1a01005 	mov	r1, r5
        216f10:	e1a00004 	mov	r0, r4
        216f14:	e5942000 	ldr	r2, [r4]
        216f18:	e1a0e00f 	mov	lr, pc
        216f1c:	e282f058 	add	pc, r2, #88	; 0x58
        216f20:	e3a01601 	mov	r1, #1048576	; 0x100000
        216f24:	eb6530af 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        216f28:	e3300000 	teq	r0, #0	; 0x0
        216f2c:	0a000006 	beq	216f4c <TGeneralShapeUnit::IDispose(void)+0xbc>
        216f30:	e1a01005 	mov	r1, r5
        216f34:	e1a00004 	mov	r0, r4
        216f38:	e5942000 	ldr	r2, [r4]
        216f3c:	e1a0e00f 	mov	lr, pc
        216f40:	e282f05c 	add	pc, r2, #92	; 0x5c
        216f44:	e2455001 	sub	r5, r5, #1	; 0x1
        216f48:	e2466001 	sub	r6, r6, #1	; 0x1
        216f4c:	e2855001 	add	r5, r5, #1	; 0x1
        216f50:	e1550006 	cmp	r5, r6
        216f54:	3affffec 	bcc	216f0c <TGeneralShapeUnit::IDispose(void)+0x7c>
        216f58:	e1a00004 	mov	r0, r4
        216f5c:	eb654113 	bl	1b673b0 <$DisposeFD(TGeneralShapeUnit *)>
        216f60:	e1a00004 	mov	r0, r4
        216f64:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        216f68:	ea65241e 	b	1b5ffe8 <TSIUnit::$IDispose(void)>
    */
}

/**
 * Symbol: TGeneralShapeUnit::EndUnit(void)
 * Address: 00216f6c
 */
TGeneralShapeUnit::EndUnit(void) {
    /*
        216f6c:	e1a0c00d 	mov	ip, sp
        216f70:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        216f74:	e24cb004 	sub	fp, ip, #4	; 0x4
        216f78:	e1a04000 	mov	r4, r0
        216f7c:	eb651fe1 	bl	1b5ef08 <TSIUnit::$EndUnit(void)>
        216f80:	e1a00004 	mov	r0, r4
        216f84:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        216f88:	ea654108 	b	1b673b0 <$DisposeFD(TGeneralShapeUnit *)>
    */
}

/**
 * Symbol: TGeneralShapeUnit::Dump(TMsg *)
 * Address: 00216f8c
 */
TGeneralShapeUnit::Dump(TMsg *) {
    /*
        216f8c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TGeneralShapeUnit::ContextID(void)
 * Address: 00216f90
 */
TGeneralShapeUnit::ContextID(void) {
    /*
        216f90:	e590003c 	ldr	r0, [r0, #60]	; fField60
        216f94:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TGeneralShapeUnit::SetContextID(unsigned long)
 * Address: 00216f98
 */
TGeneralShapeUnit::SetContextID(unsigned long) {
    /*
        216f98:	e5a0103c 	str	r1, [r0, #60]!	; fField60
        216f9c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TGeneralShapeUnit::SizeInBytes(void)
 * Address: 00216fa0
 */
TGeneralShapeUnit::SizeInBytes(void) {
    /*
        216fa0:	e1a0c00d 	mov	ip, sp
        216fa4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        216fa8:	e24cb004 	sub	fp, ip, #4	; 0x4
        216fac:	e1a04000 	mov	r4, r0
        216fb0:	e3a05000 	mov	r5, #0	; 0x0
        216fb4:	e5901000 	ldr	r1, [r0]
        216fb8:	e1a0e00f 	mov	lr, pc
        216fbc:	e281f020 	add	pc, r1, #32	; 0x20
        216fc0:	e3300000 	teq	r0, #0	; 0x0
        216fc4:	0a000014 	beq	21701c <TGeneralShapeUnit::SizeInBytes(void)+0x7c>
        216fc8:	e1a00004 	mov	r0, r4
        216fcc:	e3a01000 	mov	r1, #0	; 0x0
        216fd0:	e5942000 	ldr	r2, [r4]
        216fd4:	e1a0e00f 	mov	lr, pc
        216fd8:	e282f068 	add	pc, r2, #104	; 0x68
        216fdc:	e5900000 	ldr	r0, [r0]
        216fe0:	e3300000 	teq	r0, #0	; 0x0
        216fe4:	13300001 	teqne	r0, #1	; 0x1
        216fe8:	0a00000b 	beq	21701c <TGeneralShapeUnit::SizeInBytes(void)+0x7c>
        216fec:	e3300002 	teq	r0, #2	; 0x2
        216ff0:	0a000001 	beq	216ffc <TGeneralShapeUnit::SizeInBytes(void)+0x5c>
        216ff4:	e330000f 	teq	r0, #15	; 0xf
        216ff8:	0a000007 	beq	21701c <TGeneralShapeUnit::SizeInBytes(void)+0x7c>
        216ffc:	e1a00004 	mov	r0, r4
        217000:	eb6540f1 	bl	1b673cc <TGeneralShapeUnit::$GetGeneralShape(void)>
        217004:	e3300000 	teq	r0, #0	; 0x0
        217008:	0a000003 	beq	21701c <TGeneralShapeUnit::SizeInBytes(void)+0x7c>
        21700c:	e5901000 	ldr	r1, [r0]
        217010:	e1a0e00f 	mov	lr, pc
        217014:	e281f008 	add	pc, r1, #8	; 0x8
        217018:	e1a05000 	mov	r5, r0
        21701c:	e5940040 	ldr	r0, [r4, #64]	; fField64
        217020:	e3300000 	teq	r0, #0	; 0x0
        217024:	0a000014 	beq	21707c <TGeneralShapeUnit::SizeInBytes(void)+0xdc>
        217028:	e3a00000 	mov	r0, #0	; 0x0
        21702c:	e3a07000 	mov	r7, #0	; 0x0
        217030:	e5941040 	ldr	r1, [r4, #64]	; fField64
        217034:	e0811207 	add	r1, r1, r7, lsl #4
        217038:	e5b1605c 	ldr	r6, [r1, #92]!
        21703c:	e3360000 	teq	r6, #0	; 0x0
        217040:	0a000007 	beq	217064 <TGeneralShapeUnit::SizeInBytes(void)+0xc4>
        217044:	e1360000 	teq	r6, r0
        217048:	0a000004 	beq	217060 <TGeneralShapeUnit::SizeInBytes(void)+0xc0>
        21704c:	e1a00006 	mov	r0, r6
        217050:	e5961000 	ldr	r1, [r6]
        217054:	e1a0e00f 	mov	lr, pc
        217058:	e281f008 	add	pc, r1, #8	; 0x8
        21705c:	e0805005 	add	r5, r0, r5
        217060:	e1a00006 	mov	r0, r6
        217064:	e2877001 	add	r7, r7, #1	; 0x1
        217068:	e3570002 	cmp	r7, #2	; 0x2
        21706c:	3affffef 	bcc	217030 <TGeneralShapeUnit::SizeInBytes(void)+0x90>
        217070:	e5940040 	ldr	r0, [r4, #64]	; fField64
        217074:	eb67281f 	bl	1be10f8 <$GetPtrSize>
        217078:	e0805005 	add	r5, r0, r5
        21707c:	e1a00004 	mov	r0, r4
        217080:	eb65304b 	bl	1b631b4 <TSIUnit::$SizeInBytes(void)>
        217084:	e0800005 	add	r0, r0, r5
        217088:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TGeneralShapeUnit::DoneUsingUnit(void)
 * Address: 00217214
 */
TGeneralShapeUnit::DoneUsingUnit(void) {
    /*
        217214:	e1a0c00d 	mov	ip, sp
        217218:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        21721c:	e24cb004 	sub	fp, ip, #4	; 0x4
        217220:	e1a04000 	mov	r4, r0
        217224:	e5901000 	ldr	r1, [r0]
        217228:	e1a0e00f 	mov	lr, pc
        21722c:	e281f020 	add	pc, r1, #32	; 0x20
        217230:	e3300000 	teq	r0, #0	; 0x0
        217234:	0a00000c 	beq	21726c <TGeneralShapeUnit::DoneUsingUnit(void)+0x58>
        217238:	e1a00004 	mov	r0, r4
        21723c:	e3a01000 	mov	r1, #0	; 0x0
        217240:	e5942000 	ldr	r2, [r4]
        217244:	e1a0e00f 	mov	lr, pc
        217248:	e282f068 	add	pc, r2, #104	; 0x68
        21724c:	e1a00004 	mov	r0, r4
        217250:	eb65405d 	bl	1b673cc <TGeneralShapeUnit::$GetGeneralShape(void)>
        217254:	e3300000 	teq	r0, #0	; 0x0
        217258:	0a000003 	beq	21726c <TGeneralShapeUnit::DoneUsingUnit(void)+0x58>
        21725c:	eb6550dd 	bl	1b6b5d8 <$GDisposeShape(TDArray *)>
        217260:	e1a00004 	mov	r0, r4
        217264:	e3a01000 	mov	r1, #0	; 0x0
        217268:	eb65405f 	bl	1b673ec <TGeneralShapeUnit::$SetGeneralShape(TDArray *)>
        21726c:	e1a00004 	mov	r0, r4
        217270:	e3a01601 	mov	r1, #1048576	; 0x100000
        217274:	eb652fdb 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        217278:	e3300000 	teq	r0, #0	; 0x0
        21727c:	0a00001d 	beq	2172f8 <TGeneralShapeUnit::DoneUsingUnit(void)+0xe4>
        217280:	e1a00004 	mov	r0, r4
        217284:	e5941000 	ldr	r1, [r4]
        217288:	e1a0e00f 	mov	lr, pc
        21728c:	e281f01c 	add	pc, r1, #28	; 0x1c
        217290:	e1a06000 	mov	r6, r0
        217294:	e3a05000 	mov	r5, #0	; 0x0
        217298:	e3500000 	cmp	r0, #0	; 0x0
        21729c:	9a000012 	bls	2172ec <TGeneralShapeUnit::DoneUsingUnit(void)+0xd8>
        2172a0:	e1a01005 	mov	r1, r5
        2172a4:	e1a00004 	mov	r0, r4
        2172a8:	e5942000 	ldr	r2, [r4]
        2172ac:	e1a0e00f 	mov	lr, pc
        2172b0:	e282f058 	add	pc, r2, #88	; 0x58
        2172b4:	e3a01601 	mov	r1, #1048576	; 0x100000
        2172b8:	eb652fca 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        2172bc:	e3300000 	teq	r0, #0	; 0x0
        2172c0:	0a000006 	beq	2172e0 <TGeneralShapeUnit::DoneUsingUnit(void)+0xcc>
        2172c4:	e1a01005 	mov	r1, r5
        2172c8:	e1a00004 	mov	r0, r4
        2172cc:	e5942000 	ldr	r2, [r4]
        2172d0:	e1a0e00f 	mov	lr, pc
        2172d4:	e282f05c 	add	pc, r2, #92	; 0x5c
        2172d8:	e2455001 	sub	r5, r5, #1	; 0x1
        2172dc:	e2466001 	sub	r6, r6, #1	; 0x1
        2172e0:	e2855001 	add	r5, r5, #1	; 0x1
        2172e4:	e1550006 	cmp	r5, r6
        2172e8:	3affffec 	bcc	2172a0 <TGeneralShapeUnit::DoneUsingUnit(void)+0x8c>
        2172ec:	e1a00004 	mov	r0, r4
        2172f0:	e3a01601 	mov	r1, #1048576	; 0x100000
        2172f4:	eb6533c4 	bl	1b6420c <TRecObject::$UnsetFlags(unsigned long)>
        2172f8:	e1a00004 	mov	r0, r4
        2172fc:	eb65402b 	bl	1b673b0 <$DisposeFD(TGeneralShapeUnit *)>
        217300:	e1a00004 	mov	r0, r4
        217304:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        217308:	ea6533d5 	b	1b64264 <TSIUnit::$DoneUsingUnit(void)>
    */
}

/**
 * Symbol: TGeneralShapeUnit::GetGeneralShape(void)
 * Address: 0021730c
 */
TGeneralShapeUnit::GetGeneralShape(void) {
    /*
        21730c:	e1a0c00d 	mov	ip, sp
        217310:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        217314:	e24cb004 	sub	fp, ip, #4	; 0x4
        217318:	e1a04000 	mov	r4, r0
        21731c:	e3a05000 	mov	r5, #0	; 0x0
        217320:	e5901000 	ldr	r1, [r0]
        217324:	e1a0e00f 	mov	lr, pc
        217328:	e281f020 	add	pc, r1, #32	; 0x20
        21732c:	e3300000 	teq	r0, #0	; 0x0
        217330:	0a000005 	beq	21734c <TGeneralShapeUnit::GetGeneralShape(void)+0x40>
        217334:	e1a00004 	mov	r0, r4
        217338:	e3a01000 	mov	r1, #0	; 0x0
        21733c:	e5942000 	ldr	r2, [r4]
        217340:	e1a0e00f 	mov	lr, pc
        217344:	e282f068 	add	pc, r2, #104	; 0x68
        217348:	e5b05010 	ldr	r5, [r0, #16]!
        21734c:	e1a00005 	mov	r0, r5
        217350:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TGeneralShapeUnit::SetGeneralShape(TDArray *)
 * Address: 00217354
 */
TGeneralShapeUnit::SetGeneralShape(TDArray *) {
    /*
        217354:	e1a0c00d 	mov	ip, sp
        217358:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        21735c:	e24cb004 	sub	fp, ip, #4	; 0x4
        217360:	e1a04000 	mov	r4, r0
        217364:	e1a05001 	mov	r5, r1
        217368:	e5901000 	ldr	r1, [r0]
        21736c:	e1a0e00f 	mov	lr, pc
        217370:	e281f020 	add	pc, r1, #32	; 0x20
        217374:	e3300000 	teq	r0, #0	; 0x0
        217378:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        21737c:	e1a00004 	mov	r0, r4
        217380:	e3a01000 	mov	r1, #0	; 0x0
        217384:	e5942000 	ldr	r2, [r4]
        217388:	e1a0e00f 	mov	lr, pc
        21738c:	e282f068 	add	pc, r2, #104	; 0x68
        217390:	e5a05010 	str	r5, [r0, #16]!
        217394:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TGeneralShapeUnit::NewInterpretation(TDArray *)
 * Address: 00217398
 */
TGeneralShapeUnit::NewInterpretation(TDArray *) {
    /*
        217398:	e1a0c00d 	mov	ip, sp
        21739c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2173a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2173a4:	e1a04000 	mov	r4, r0
        2173a8:	e1a05001 	mov	r5, r1
        2173ac:	e2800048 	add	r0, r0, #72	; 0x48
        2173b0:	e1a06000 	mov	r6, r0
        2173b4:	e3a02000 	mov	r2, #0	; 0x0
        2173b8:	e3a01000 	mov	r1, #0	; 0x0
        2173bc:	eb652314 	bl	1b60014 <$InitInterpretation__FP18UnitInterpretationUlT2>
        2173c0:	e3a00000 	mov	r0, #0	; 0x0
        2173c4:	e3a01000 	mov	r1, #0	; 0x0
        2173c8:	e5865010 	str	r5, [r6, #16]
        2173cc:	e0862100 	add	r2, r6, r0, lsl #2
        2173d0:	e2800001 	add	r0, r0, #1	; 0x1
        2173d4:	e3500006 	cmp	r0, #6	; 0x6
        2173d8:	e5a21014 	str	r1, [r2, #20]!	; fField20
        2173dc:	3afffffa 	bcc	2173cc <TGeneralShapeUnit::NewInterpretation(TDArray *)+0x34>
        2173e0:	e3a00001 	mov	r0, #1	; 0x1
        2173e4:	e5a40044 	str	r0, [r4, #68]!	; fField68
        2173e8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

