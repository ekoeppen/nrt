#include "include/TXNewtDisplay.h"

/**
 * Symbol: TXNewtDisplay::__ct(TView *)
 * Address: 0024d6b8
 */
TXNewtDisplay::TXNewtDisplay(TView *) {
    /*
        24d6b8:	e1a0c00d 	mov	ip, sp
        24d6bc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        24d6c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        24d6c4:	e1b04000 	movs	r4, r0
        24d6c8:	e1a05001 	mov	r5, r1
        24d6cc:	1a000003 	bne	24d6e0 <TXNewtDisplay::__ct(TView *)+0x28>
        24d6d0:	e3a0002c 	mov	r0, #44	; 0x2c
        24d6d4:	eb660417 	bl	1bce738 <$__nw(unsigned int)>
        24d6d8:	e1b04000 	movs	r4, r0
        24d6dc:	0a000006 	beq	24d6fc <TXNewtDisplay::__ct(TView *)+0x44>
        24d6e0:	e1a00004 	mov	r0, r4
        24d6e4:	eb64f7b4 	bl	1b8b5bc <TXDisplay::$__ct(void)>
        24d6e8:	e2840028 	add	r0, r4, #40	; 0x28
        24d6ec:	eb60e740 	bl	1a873f4 <TRegionStruct::$__ct(void)>
        24d6f0:	e59f000c 	ldr	r0, [pc, #c]	; 24d704 <TXNewtDisplay::__ct(TView *)+0x4c>
        24d6f4:	e5840000 	str	r0, [r4]
        24d6f8:	e5845024 	str	r5, [r4, #36]	; fField36
        24d6fc:	e1a00004 	mov	r0, r4
        24d700:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        24d704:	0001d294 	muleq	r1, r4, r2
    */
}

/**
 * Symbol: TXNewtDisplay::BeginEdit(TXEditInfo *)
 * Address: 0024d708
 */
TXNewtDisplay::BeginEdit(TXEditInfo *) {
    /*
        24d708:	e1a0c00d 	mov	ip, sp
        24d70c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        24d710:	e24cb004 	sub	fp, ip, #4	; 0x4
        24d714:	e1a04000 	mov	r4, r0
        24d718:	e1a05001 	mov	r5, r1
        24d71c:	e3a01000 	mov	r1, #0	; 0x0
        24d720:	e3a00000 	mov	r0, #0	; 0x0
        24d724:	eb63fbbb 	bl	1b4c618 <$StartDrawing(PixelMap *, Rect *)>
        24d728:	e59f0014 	ldr	r0, [pc, #14]	; 24d744 <TXNewtDisplay::BeginEdit(TXEditInfo *)+0x3c>
        24d72c:	e5900000 	ldr	r0, [r0]
        24d730:	eb62105b 	bl	1ad18a4 <TRootView::$HideCaret(void)>
        24d734:	e1a01005 	mov	r1, r5
        24d738:	e1a00004 	mov	r0, r4
        24d73c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        24d740:	ea64f7aa 	b	1b8b5f0 <TXDisplay::$BeginEdit(TXEditInfo *)>
        24d744:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: TXNewtDisplay::EndEdit(TXEditInfo const &, long, long, TXOffset *)
 * Address: 0024d748
 */
TXNewtDisplay::EndEdit(TXEditInfo const &, long, long, TXOffset *) {
    /*
        24d748:	e1a0c00d 	mov	ip, sp
        24d74c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        24d750:	e24cb004 	sub	fp, ip, #4	; 0x4
        24d754:	e1a0c003 	mov	ip, r3
        24d758:	e59b3004 	ldr	r3, [fp, #4]
        24d75c:	e92d0008 	stmdb	sp!, {r3}
        24d760:	e1a0300c 	mov	r3, ip
        24d764:	eb64f7a2 	bl	1b8b5f4 <TXDisplay::$EndEdit(TXEditInfo const &, long, long, TXOffset *)>
        24d768:	e28dd004 	add	sp, sp, #4	; 0x4
        24d76c:	e59f0014 	ldr	r0, [pc, #14]	; 24d788 <TXNewtDisplay::EndEdit(TXEditInfo const &, long, long, TXOffset *)+0x40>
        24d770:	e5900000 	ldr	r0, [r0]
        24d774:	eb615687 	bl	1aa3198 <TRootView::$ShowCaret(void)>
        24d778:	e3a01000 	mov	r1, #0	; 0x0
        24d77c:	e3a00000 	mov	r0, #0	; 0x0
        24d780:	e91b6800 	ldmdb	fp, {fp, sp, lr}
        24d784:	ea63fba5 	b	1b4c620 <$StopDrawing(PixelMap *, Rect *)>
        24d788:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: TXNewtDisplay::Focus(Region ***, Point *)
 * Address: 0024d824
 */
TXNewtDisplay::Focus(Region ***, Point *) {
    /*
        24d824:	e1a0c00d 	mov	ip, sp
        24d828:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        24d82c:	e24cb004 	sub	fp, ip, #4	; 0x4
        24d830:	e1a04000 	mov	r4, r0
        24d834:	e1a05001 	mov	r5, r1
        24d838:	ebfffff0 	bl	24d800 <TXView::SetStore(RefVar const &)+0x74>
        24d83c:	e3300000 	teq	r0, #0	; 0x0
        24d840:	13a00000 	movne	r0, #0	; 0x0
        24d844:	15850000 	strne	r0, [r5]
        24d848:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        24d84c:	e24dd004 	sub	sp, sp, #4	; 0x4
        24d850:	e1a0000d 	mov	r0, sp
        24d854:	e5941024 	ldr	r1, [r4, #36]	; fField36
        24d858:	eb65fb6c 	bl	1bcc610 <TView::$SetupVisRgn( const(void))>
        24d85c:	e1a0100d 	mov	r1, sp
        24d860:	e2840028 	add	r0, r4, #40	; 0x28
        24d864:	eb60e6da 	bl	1a873d4 <TRegionStruct::$__as(TRegion &)>
        24d868:	e1a0000d 	mov	r0, sp
        24d86c:	e3a01000 	mov	r1, #0	; 0x0
        24d870:	eb60ef03 	bl	1a89484 <TRegion::$__dt(void)>
        24d874:	e59f0018 	ldr	r0, [pc, #18]	; 24d894 <TXNewtDisplay::Focus(Region ***, Point *)+0x70>
        24d878:	e5900000 	ldr	r0, [r0]
        24d87c:	eb64ef11 	bl	1b894c8 <TXTempReferences::$Get(void)>
        24d880:	e5850000 	str	r0, [r5]
        24d884:	eb6407cb 	bl	1b4f7b8 <$GetClip(Region **)>
        24d888:	e5b40020 	ldr	r0, [r4, #32]!	; fField32
        24d88c:	eb641852 	bl	1b539dc <$SetClip(Region **)>
        24d890:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        24d894:	0c104d78 	ldceq	13, cr4, [r0], -#480
    */
}

/**
 * Symbol: TXNewtDisplay::UnFocus(Region **, Point)
 * Address: 0024d898
 */
TXNewtDisplay::UnFocus(Region **, Point) {
    /*
        24d898:	e1a0c00d 	mov	ip, sp
        24d89c:	e92dd837 	stmdb	sp!, {r0, r1, r2, r4, r5, fp, ip, lr, pc}
        24d8a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        24d8a4:	e1a05000 	mov	r5, r0
        24d8a8:	e1a04001 	mov	r4, r1
        24d8ac:	ebffffd3 	bl	24d800 <TXView::SetStore(RefVar const &)+0x74>
        24d8b0:	e3300000 	teq	r0, #0	; 0x0
        24d8b4:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        24d8b8:	e1a00004 	mov	r0, r4
        24d8bc:	eb641846 	bl	1b539dc <$SetClip(Region **)>
        24d8c0:	e59f0034 	ldr	r0, [pc, #34]	; 24d8fc <TXNewtDisplay::UnFocus(Region **, Point)+0x64>
        24d8c4:	e5900000 	ldr	r0, [r0]
        24d8c8:	e1a01004 	mov	r1, r4
        24d8cc:	eb64eefe 	bl	1b894cc <TXTempReferences::$Done(void *)>
        24d8d0:	e5954028 	ldr	r4, [r5, #40]	; fField40
        24d8d4:	e24dd008 	sub	sp, sp, #8	; 0x8
        24d8d8:	e1a0000d 	mov	r0, sp
        24d8dc:	eb6687b0 	bl	1bef7a4 <$GetPort(GrafPort **)>
        24d8e0:	e49d0004 	ldr	r0, [sp], #4
        24d8e4:	e5900024 	ldr	r0, [r0, #36]	; fField36
        24d8e8:	e58d0000 	str	r0, [sp]
        24d8ec:	e1a00004 	mov	r0, r4
        24d8f0:	e59d1000 	ldr	r1, [sp]
        24d8f4:	eb63ff6e 	bl	1b4d6b4 <$CopyRgn__FPP6RegionT1>
        24d8f8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        24d8fc:	0c104d78 	ldceq	13, cr4, [r0], -#480
    */
}

