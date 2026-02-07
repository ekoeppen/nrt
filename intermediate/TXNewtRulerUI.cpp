#include "include/TXNewtRulerUI.h"

/**
 * Symbol: TXNewtRulerUI::__ct(TView *, Textension *, PixelMap *, RefVar const &)
 * Address: 0024d900
 */
TXNewtRulerUI::TXNewtRulerUI(TView *, Textension *, PixelMap *, RefVar const &) {
    /*
        24d900:	e1a0c00d 	mov	ip, sp
        24d904:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        24d908:	e24cb004 	sub	fp, ip, #4	; 0x4
        24d90c:	e1b04000 	movs	r4, r0
        24d910:	e1a07001 	mov	r7, r1
        24d914:	e1a06002 	mov	r6, r2
        24d918:	e1a05003 	mov	r5, r3
        24d91c:	e59b8004 	ldr	r8, [fp, #4]
        24d920:	1a000003 	bne	24d934 <TXNewtRulerUI::__ct(TView *, Textension *, PixelMap *, RefVar const &)+0x34>
        24d924:	e3a000c0 	mov	r0, #192	; 0xc0
        24d928:	eb660382 	bl	1bce738 <$__nw(unsigned int)>
        24d92c:	e1b04000 	movs	r4, r0
        24d930:	0a000009 	beq	24d95c <TXNewtRulerUI::__ct(TView *, Textension *, PixelMap *, RefVar const &)+0x5c>
        24d934:	e1a03008 	mov	r3, r8
        24d938:	e1a02005 	mov	r2, r5
        24d93c:	e1a01006 	mov	r1, r6
        24d940:	e1a00004 	mov	r0, r4
        24d944:	eb652899 	bl	1b97bb0 <TXRulerUI::$__ct(Textension *, PixelMap *, RefVar const &)>
        24d948:	e28400bc 	add	r0, r4, #188	; 0xbc
        24d94c:	eb60e6a8 	bl	1a873f4 <TRegionStruct::$__ct(void)>
        24d950:	e59f000c 	ldr	r0, [pc, #c]	; 24d964 <TXNewtRulerUI::__ct(TView *, Textension *, PixelMap *, RefVar const &)+0x64>
        24d954:	e5840000 	str	r0, [r4]
        24d958:	e58470b8 	str	r7, [r4, #184]
        24d95c:	e1a00004 	mov	r0, r4
        24d960:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        24d964:	0001d2b0 	streqh	sp, [r1], -r0
    */
}

/**
 * Symbol: TXNewtRulerUI::Focus(TXRulerUIFocusInfo *)
 * Address: 0024d968
 */
TXNewtRulerUI::Focus(TXRulerUIFocusInfo *) {
    /*
        24d968:	e1a0c00d 	mov	ip, sp
        24d96c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        24d970:	e24cb004 	sub	fp, ip, #4	; 0x4
        24d974:	e1a04000 	mov	r4, r0
        24d978:	e1a05001 	mov	r5, r1
        24d97c:	e24dd004 	sub	sp, sp, #4	; 0x4
        24d980:	e59010b8 	ldr	r1, [r0, #184]
        24d984:	e1a0000d 	mov	r0, sp
        24d988:	eb65fb20 	bl	1bcc610 <TView::$SetupVisRgn( const(void))>
        24d98c:	e1a0100d 	mov	r1, sp
        24d990:	e28400bc 	add	r0, r4, #188	; 0xbc
        24d994:	eb60e68e 	bl	1a873d4 <TRegionStruct::$__as(TRegion &)>
        24d998:	e1a0000d 	mov	r0, sp
        24d99c:	e3a01000 	mov	r1, #0	; 0x0
        24d9a0:	eb60eeb7 	bl	1a89484 <TRegion::$__dt(void)>
        24d9a4:	e1a01005 	mov	r1, r5
        24d9a8:	e1a00004 	mov	r0, r4
        24d9ac:	eb652885 	bl	1b97bc8 <TXRulerUI::$Focus(TXRulerUIFocusInfo *)>
        24d9b0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXNewtRulerUI::Unfocus(TXRulerUIFocusInfo const &)
 * Address: 0024d9b4
 */
TXNewtRulerUI::Unfocus(TXRulerUIFocusInfo const &) {
    /*
        24d9b4:	e1a0c00d 	mov	ip, sp
        24d9b8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        24d9bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        24d9c0:	e1a04000 	mov	r4, r0
        24d9c4:	eb652880 	bl	1b97bcc <TXRulerUI::$Unfocus(TXRulerUIFocusInfo const &)>
        24d9c8:	e59440bc 	ldr	r4, [r4, #188]	; fField188
        24d9cc:	e24dd008 	sub	sp, sp, #8	; 0x8
        24d9d0:	e1a0000d 	mov	r0, sp
        24d9d4:	eb668772 	bl	1bef7a4 <$GetPort(GrafPort **)>
        24d9d8:	e49d0004 	ldr	r0, [sp], #4
        24d9dc:	e5900024 	ldr	r0, [r0, #36]
        24d9e0:	e58d0000 	str	r0, [sp]
        24d9e4:	e1a00004 	mov	r0, r4
        24d9e8:	e59d1000 	ldr	r1, [sp]
        24d9ec:	eb63ff30 	bl	1b4d6b4 <$CopyRgn__FPP6RegionT1>
        24d9f0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

