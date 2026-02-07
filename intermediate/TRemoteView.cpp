#include "include/TRemoteView.h"

/**
 * Symbol: TRemoteView::ClassID( const(void))
 * Address: 001a6720
 */
TRemoteView::ClassID( const(void)) {
    /*
        1a6720:	e3a00058 	mov	r0, #88	; 0x58
        1a6724:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRemoteView::DerivedFrom( const(long))
 * Address: 001a6728
 */
TRemoteView::DerivedFrom( const(long)) {
    /*
        1a6728:	e1a0c00d 	mov	ip, sp
        1a672c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1a6730:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a6734:	e3310058 	teq	r1, #88	; 0x58
        1a6738:	0a000002 	beq	1a6748 <TRemoteView::DerivedFrom( const(long))+0x20>
        1a673c:	eb02f39f 	bl	2635c0 <TView::DerivedFrom( const(long))>
        1a6740:	e3300000 	teq	r0, #0	; 0x0
        1a6744:	0a000001 	beq	1a6750 <TRemoteView::DerivedFrom( const(long))+0x28>
        1a6748:	e3a00001 	mov	r0, #1	; 0x1
        1a674c:	ea000000 	b	1a6754 <TRemoteView::DerivedFrom( const(long))+0x2c>
        1a6750:	e3a00000 	mov	r0, #0	; 0x0
        1a6754:	e20000ff 	and	r0, r0, #255	; 0xff
        1a6758:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TRemoteView::Constructor(RefVar const &, TView *)
 * Address: 001a675c
 */
TRemoteView::Constructor(RefVar const &, TView *) {
    /*
        1a675c:	e1a0c00d 	mov	ip, sp
        1a6760:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1a6764:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a6768:	e1a04000 	mov	r4, r0
        1a676c:	eb688b59 	bl	1bc94d8 <TView::$Constructor(RefVar const &, TView *)>
        1a6770:	e3a01000 	mov	r1, #0	; 0x0
        1a6774:	e5940020 	ldr	r0, [r4, #32]	; fField32
        1a6778:	eb68fef1 	bl	1be6344 <CList::$At(long)>
        1a677c:	e3a01001 	mov	r1, #1	; 0x1
        1a6780:	e5a40030 	str	r0, [r4, #48]!	; fField48
        1a6784:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1a6788:	ea688b4f 	b	1bc94cc <TView::$ClearFlags(unsigned long)>
    */
}

/**
 * Symbol: TRemoteView::RealDraw(TRect &)
 * Address: 001a678c
 */
TRemoteView::RealDraw(TRect &) {
    /*
        1a678c:	e1a0c00d 	mov	ip, sp
        1a6790:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1a6794:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a6798:	e1a04000 	mov	r4, r0
        1a679c:	e5900030 	ldr	r0, [r0, #48]	; fField48
        1a67a0:	e3300000 	teq	r0, #0	; 0x0
        1a67a4:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1a67a8:	e24dd018 	sub	sp, sp, #24	; 0x18
        1a67ac:	e28d0004 	add	r0, sp, #4	; 0x4
        1a67b0:	eb63830a 	bl	1a873e0 <TRegionVar::$__ct(void)>
        1a67b4:	e24dd004 	sub	sp, sp, #4	; 0x4
        1a67b8:	e1a0000d 	mov	r0, sp
        1a67bc:	eb6923f8 	bl	1bef7a4 <$GetPort(GrafPort **)>
        1a67c0:	e49d0004 	ldr	r0, [sp], #4
        1a67c4:	e5900024 	ldr	r0, [r0, #36]
        1a67c8:	e58d0000 	str	r0, [sp]
        1a67cc:	e1a05000 	mov	r5, r0
        1a67d0:	e59d1004 	ldr	r1, [sp, #4]
        1a67d4:	eb669bb6 	bl	1b4d6b4 <$CopyRgn__FPP6RegionT1>
        1a67d8:	e3a00000 	mov	r0, #0	; 0x0
        1a67dc:	e3a06000 	mov	r6, #0	; 0x0
        1a67e0:	e52d006c 	str	r0, [sp, -#108]!
        1a67e4:	e28d0008 	add	r0, sp, #8	; 0x8
        1a67e8:	eb683061 	bl	1bb2974 <$setjmp>
        1a67ec:	e3300000 	teq	r0, #0	; 0x0
        1a67f0:	1a000056 	bne	1a6950 <TRemoteView::RealDraw(TRect &)+0x1c4>
        1a67f4:	e1a0000d 	mov	r0, sp
        1a67f8:	eb68e61f 	bl	1be007c <$AddExceptionHandler>
        1a67fc:	e594004c 	ldr	r0, [r4, #76]
        1a6800:	e3100102 	tst	r0, #-2147483648	; 0x80000000
        1a6804:	e2847034 	add	r7, r4, #52	; 0x34
        1a6808:	1a000005 	bne	1a6824 <TRemoteView::RealDraw(TRect &)+0x98>
        1a680c:	e2842010 	add	r2, r4, #16	; 0x10
        1a6810:	e5940030 	ldr	r0, [r4, #48]	; fField48
        1a6814:	e2801010 	add	r1, r0, #16	; 0x10
        1a6818:	e1a00007 	mov	r0, r7
        1a681c:	e3a03001 	mov	r3, #1	; 0x1
        1a6820:	eb63ee4d 	bl	1aa215c <TTransform::$Setup(TRect const *, TRect const *, unsigned char)>
        1a6824:	e1a00007 	mov	r0, r7
        1a6828:	e3a02001 	mov	r2, #1	; 0x1
        1a682c:	e3a01001 	mov	r1, #1	; 0x1
        1a6830:	eb64b875 	bl	1ad4a0c <$StartScaling__9TQDScalerSFP10TTransformUcl>
        1a6834:	e3a01001 	mov	r1, #1	; 0x1
        1a6838:	e5940030 	ldr	r0, [r4, #48]	; fField48
        1a683c:	eb68936e 	bl	1bcb5fc <TView::$SetFlags(unsigned long)>
        1a6840:	e284203c 	add	r2, r4, #60	; 0x3c
        1a6844:	e2841044 	add	r1, r4, #68	; 0x44
        1a6848:	e1a00005 	mov	r0, r5
        1a684c:	eb66ac18 	bl	1b518b4 <$MapRgn__FPP6RegionP4RectT2>
        1a6850:	e2847050 	add	r7, r4, #80	; 0x50
        1a6854:	e5940030 	ldr	r0, [r4, #48]	; fField48
        1a6858:	e2800010 	add	r0, r0, #16	; 0x10
        1a685c:	e8905000 	ldmia	r0, {ip, lr}
        1a6860:	e8875000 	stmia	r7, {ip, lr}
        1a6864:	e59f10d4 	ldr	r1, [pc, #d4]	; 1a6940 <TRemoteView::RealDraw(TRect &)+0x1b4>
        1a6868:	e1a00004 	mov	r0, r4
        1a686c:	eb688f39 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        1a6870:	eb686e35 	bl	1bc214c <$AllocateRefHandle(long)>
        1a6874:	e1a05000 	mov	r5, r0
        1a6878:	e5900000 	ldr	r0, [r0]
        1a687c:	e3300002 	teq	r0, #2	; 0x2
        1a6880:	0a000025 	beq	1a691c <TRemoteView::RealDraw(TRect &)+0x190>
        1a6884:	e24dd004 	sub	sp, sp, #4	; 0x4
        1a6888:	e59f10b4 	ldr	r1, [pc, #b4]	; 1a6944 <TRemoteView::RealDraw(TRect &)+0x1b8>
        1a688c:	e5911000 	ldr	r1, [r1]
        1a6890:	e5911000 	ldr	r1, [r1]
        1a6894:	eb687671 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        1a6898:	eb686e2b 	bl	1bc214c <$AllocateRefHandle(long)>
        1a689c:	e58d0000 	str	r0, [sp]
        1a68a0:	e5900000 	ldr	r0, [r0]
        1a68a4:	e3300002 	teq	r0, #2	; 0x2
        1a68a8:	0a000018 	beq	1a6910 <TRemoteView::RealDraw(TRect &)+0x184>
        1a68ac:	e59f1094 	ldr	r1, [pc, #94]	; 1a6948 <TRemoteView::RealDraw(TRect &)+0x1bc>
        1a68b0:	e1a0000d 	mov	r0, sp
        1a68b4:	e3a02000 	mov	r2, #0	; 0x0
        1a68b8:	eb68766a 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        1a68bc:	e3300002 	teq	r0, #2	; 0x2
        1a68c0:	0a000012 	beq	1a6910 <TRemoteView::RealDraw(TRect &)+0x184>
        1a68c4:	e24dd004 	sub	sp, sp, #4	; 0x4
        1a68c8:	e59f007c 	ldr	r0, [pc, #7c]	; 1a694c <TRemoteView::RealDraw(TRect &)+0x1c0>
        1a68cc:	e5900000 	ldr	r0, [r0]
        1a68d0:	e5901000 	ldr	r1, [r0]
        1a68d4:	e5950000 	ldr	r0, [r5]
        1a68d8:	eb687660 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        1a68dc:	eb686e1a 	bl	1bc214c <$AllocateRefHandle(long)>
        1a68e0:	e58d0000 	str	r0, [sp]
        1a68e4:	e5900000 	ldr	r0, [r0]
        1a68e8:	e3300002 	teq	r0, #2	; 0x2
        1a68ec:	0a000004 	beq	1a6904 <TRemoteView::RealDraw(TRect &)+0x178>
        1a68f0:	e1a0000d 	mov	r0, sp
        1a68f4:	eb688f18 	bl	1bca55c <$GetView(RefVar const &)>
        1a68f8:	e2800010 	add	r0, r0, #16	; 0x10
        1a68fc:	e8905000 	ldmia	r0, {ip, lr}
        1a6900:	e8875000 	stmia	r7, {ip, lr}
        1a6904:	e59d0000 	ldr	r0, [sp]
        1a6908:	eb68722b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a690c:	e28dd004 	add	sp, sp, #4	; 0x4
        1a6910:	e59d0000 	ldr	r0, [sp]
        1a6914:	eb687228 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a6918:	e28dd004 	add	sp, sp, #4	; 0x4
        1a691c:	e1a01007 	mov	r1, r7
        1a6920:	e3a02000 	mov	r2, #0	; 0x0
        1a6924:	e5940030 	ldr	r0, [r4, #48]	; fField48
        1a6928:	eb688ef5 	bl	1bca504 <TView::$Draw(TRect const &, unsigned char)>
        1a692c:	e1a00005 	mov	r0, r5
        1a6930:	eb687221 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a6934:	e1a0000d 	mov	r0, sp
        1a6938:	eb68e9de 	bl	1be10b8 <$ExitHandler>
        1a693c:	ea000004 	b	1a6954 <TRemoteView::RealDraw(TRect &)+0x1c8>
        1a6940:	00684018 	rsbeq	r4, r8, r8, lsl r0
        1a6944:	00684b00 	rsbeq	r4, r8, r0, lsl #22
        1a6948:	00684dc0 	rsbeq	r4, r8, r0, asr #27
        1a694c:	00683fe0 	rsbeq	r3, r8, r0, ror #31
        1a6950:	e3a06001 	mov	r6, #1	; 0x1
        1a6954:	e59d5070 	ldr	r5, [sp, #112]
        1a6958:	e24dd008 	sub	sp, sp, #8	; 0x8
        1a695c:	e1a0000d 	mov	r0, sp
        1a6960:	eb69238f 	bl	1bef7a4 <$GetPort(GrafPort **)>
        1a6964:	e49d0004 	ldr	r0, [sp], #4
        1a6968:	e5900024 	ldr	r0, [r0, #36]
        1a696c:	e58d0000 	str	r0, [sp]
        1a6970:	e1a00005 	mov	r0, r5
        1a6974:	e59d1000 	ldr	r1, [sp]
        1a6978:	eb669b4d 	bl	1b4d6b4 <$CopyRgn__FPP6RegionT1>
        1a697c:	e28dd004 	add	sp, sp, #4	; 0x4
        1a6980:	e3a01001 	mov	r1, #1	; 0x1
        1a6984:	e5b40030 	ldr	r0, [r4, #48]!	; fField48
        1a6988:	eb688acf 	bl	1bc94cc <TView::$ClearFlags(unsigned long)>
        1a698c:	eb64b81f 	bl	1ad4a10 <$StopScaling__9TQDScalerSFv>
        1a6990:	e3360000 	teq	r6, #0	; 0x0
        1a6994:	11a0000d 	movne	r0, sp
        1a6998:	1b68eded 	blne	1be2154 <$NextHandler>
        1a699c:	e28dd06c 	add	sp, sp, #108	; 0x6c
        1a69a0:	e28d0004 	add	r0, sp, #4	; 0x4
        1a69a4:	e3a01000 	mov	r1, #0	; 0x0
        1a69a8:	eb6386a5 	bl	1a88444 <TRegionVar::$__dt(void)>
        1a69ac:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

