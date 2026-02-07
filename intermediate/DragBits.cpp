#include "include/DragBits.h"

/**
 * Symbol: DragBits::Constructor(TView *, TRect const *, unsigned char)
 * Address: 0004266c
 */
DragBits::Constructor(TView *, TRect const *, unsigned char) {
    /*
         4266c:	e1a0c00d 	mov	ip, sp
         42670:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         42674:	e24cb004 	sub	fp, ip, #4	; 0x4
         42678:	e1a04000 	mov	r4, r0
         4267c:	e1a06001 	mov	r6, r1
         42680:	e1a05002 	mov	r5, r2
         42684:	e20390ff 	and	r9, r3, #255	; 0xff
         42688:	e24dd004 	sub	sp, sp, #4	; 0x4
         4268c:	e1a0000d 	mov	r0, sp
         42690:	eb6eb443 	bl	1bef7a4 <$GetPort(GrafPort **)>
         42694:	e49d0004 	ldr	r0, [sp], #4
         42698:	e280701c 	add	r7, r0, #28	; 0x1c
         4269c:	e5940000 	ldr	r0, [r4]
         426a0:	eb6c3444 	bl	1b4f7b8 <$GetClip(Region **)>
         426a4:	e1a00007 	mov	r0, r7
         426a8:	eb6c2bfa 	bl	1b4d698 <$ClipRect(Rect *)>
         426ac:	e3a0a001 	mov	sl, #1	; 0x1
         426b0:	e584a06c 	str	sl, [r4, #108]	; fField108
         426b4:	e59f0208 	ldr	r0, [pc, #208]	; 428c4 <DragBits::Constructor(TView *, TRect const *, unsigned char)+0x258>
         426b8:	e5840078 	str	r0, [r4, #120]	; fField120
         426bc:	e5844074 	str	r4, [r4, #116]	; fField116
         426c0:	e284006c 	add	r0, r4, #108	; 0x6c
         426c4:	eb6e766c 	bl	1be007c <$AddExceptionHandler>
         426c8:	e5c4a07c 	strb	sl, [r4, #124]	; fField124
         426cc:	e3350000 	teq	r5, #0	; 0x0
         426d0:	01a05007 	moveq	r5, r7
         426d4:	e24dd008 	sub	sp, sp, #8	; 0x8
         426d8:	e8955000 	ldmia	r5, {ip, lr}
         426dc:	e88d5000 	stmia	sp, {ip, lr}
         426e0:	e2840004 	add	r0, r4, #4	; 0x4
         426e4:	e1a07000 	mov	r7, r0
         426e8:	e1a0100d 	mov	r1, sp
         426ec:	eb692bf7 	bl	1a8d6d0 <TBits::$Constructor(TRect const &)>
         426f0:	e59f81d0 	ldr	r8, [pc, #1d0]	; 428c8 <DragBits::Constructor(TView *, TRect const *, unsigned char)+0x25c>
         426f4:	e3300000 	teq	r0, #0	; 0x0
         426f8:	1a000004 	bne	42710 <DragBits::Constructor(TView *, TRect const *, unsigned char)+0xa4>
         426fc:	e3a02000 	mov	r2, #0	; 0x0
         42700:	e3a010e9 	mov	r1, #233	; 0xe9
         42704:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
         42708:	e5980000 	ldr	r0, [r8]
         4270c:	eb6e82a2 	bl	1be319c <$Throw>
         42710:	e1a00007 	mov	r0, r7
         42714:	e59d1000 	ldr	r1, [sp]
         42718:	eb691f8f 	bl	1a8a55c <TBits::$BeginDrawing(TPoint)>
         4271c:	e1a0100d 	mov	r1, sp
         42720:	e1a00006 	mov	r0, r6
         42724:	e5962000 	ldr	r2, [r6]
         42728:	e1a0e00f 	mov	lr, pc
         4272c:	e282f0d8 	add	pc, r2, #216	; 0xd8
         42730:	e1a00007 	mov	r0, r7
         42734:	eb697646 	bl	1aa0054 <TBits::$RestorePort(void)>
         42738:	e2840038 	add	r0, r4, #56	; 0x38
         4273c:	e1a04000 	mov	r4, r0
         42740:	e1a01005 	mov	r1, r5
         42744:	eb692be1 	bl	1a8d6d0 <TBits::$Constructor(TRect const &)>
         42748:	e3300000 	teq	r0, #0	; 0x0
         4274c:	1a000004 	bne	42764 <DragBits::Constructor(TView *, TRect const *, unsigned char)+0xf8>
         42750:	e3a02000 	mov	r2, #0	; 0x0
         42754:	e3a010e9 	mov	r1, #233	; 0xe9
         42758:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
         4275c:	e5980000 	ldr	r0, [r8]
         42760:	eb6e828d 	bl	1be319c <$Throw>
         42764:	e24dd004 	sub	sp, sp, #4	; 0x4
         42768:	e5950000 	ldr	r0, [r5]
         4276c:	e58d0000 	str	r0, [sp]
         42770:	e1a00004 	mov	r0, r4
         42774:	e49d1004 	ldr	r1, [sp], #4
         42778:	eb691f77 	bl	1a8a55c <TBits::$BeginDrawing(TPoint)>
         4277c:	e1a00004 	mov	r0, r4
         42780:	eb697633 	bl	1aa0054 <TBits::$RestorePort(void)>
         42784:	e3a03000 	mov	r3, #0	; 0x0
         42788:	e92d0008 	stmdb	sp!, {r3}
         4278c:	e1a00004 	mov	r0, r4
         42790:	e1a02005 	mov	r2, r5
         42794:	e1a01005 	mov	r1, r5
         42798:	eb692fed 	bl	1a8e754 <TBits::$CopyFromScreen(TRect const &, TRect const &, long, Region **)>
         4279c:	e28dd004 	add	sp, sp, #4	; 0x4
         427a0:	e5960008 	ldr	r0, [r6, #8]
         427a4:	e3100301 	tst	r0, #67108864	; 0x4000000
         427a8:	1a000044 	bne	428c0 <DragBits::Constructor(TView *, TRect const *, unsigned char)+0x254>
         427ac:	e1a00004 	mov	r0, r4
         427b0:	eb697e5e 	bl	1aa2130 <TBits::$SetPort(void)>
         427b4:	e24dd014 	sub	sp, sp, #20	; 0x14
         427b8:	e1a0000d 	mov	r0, sp
         427bc:	eb691307 	bl	1a873e0 <TRegionVar::$__ct(void)>
         427c0:	e59d0000 	ldr	r0, [sp]
         427c4:	eb6c33fb 	bl	1b4f7b8 <$GetClip(Region **)>
         427c8:	e28d0014 	add	r0, sp, #20	; 0x14
         427cc:	eb6c2bb1 	bl	1b4d698 <$ClipRect(Rect *)>
         427d0:	e1a02009 	mov	r2, r9
         427d4:	e28d1014 	add	r1, sp, #20	; 0x14
         427d8:	e1a00006 	mov	r0, r6
         427dc:	e5963000 	ldr	r3, [r6]
         427e0:	e1a0e00f 	mov	lr, pc
         427e4:	e283f0d4 	add	pc, r3, #212	; 0xd4
         427e8:	e3300000 	teq	r0, #0	; 0x0
         427ec:	1a00002b 	bne	428a0 <DragBits::Constructor(TView *, TRect const *, unsigned char)+0x234>
         427f0:	e59f50d4 	ldr	r5, [pc, #d4]	; 428cc <DragBits::Constructor(TView *, TRect const *, unsigned char)+0x260>
         427f4:	e5c5a000 	strb	sl, [r5]
         427f8:	e28d1014 	add	r1, sp, #20	; 0x14
         427fc:	e59f00cc 	ldr	r0, [pc, #cc]	; 428d0 <DragBits::Constructor(TView *, TRect const *, unsigned char)+0x264>
         42800:	e5900000 	ldr	r0, [r0]
         42804:	e3a02000 	mov	r2, #0	; 0x0
         42808:	eb6e1f3d 	bl	1bca504 <TView::$Draw(TRect const &, unsigned char)>
         4280c:	e3a00000 	mov	r0, #0	; 0x0
         42810:	e5c50000 	strb	r0, [r5]
         42814:	e3390000 	teq	r9, #0	; 0x0
         42818:	1a000020 	bne	428a0 <DragBits::Constructor(TView *, TRect const *, unsigned char)+0x234>
         4281c:	e24dd018 	sub	sp, sp, #24	; 0x18
         42820:	e1a01006 	mov	r1, r6
         42824:	e1a0000d 	mov	r0, sp
         42828:	eb6e2778 	bl	1bcc610 <TView::$SetupVisRgn( const(void))>
         4282c:	e1a0100d 	mov	r1, sp
         42830:	e28d0004 	add	r0, sp, #4	; 0x4
         42834:	eb6912e8 	bl	1a873dc <TRegionVar::$__ct(TRegion &)>
         42838:	e1a0000d 	mov	r0, sp
         4283c:	e3a01000 	mov	r1, #0	; 0x0
         42840:	eb691b0f 	bl	1a89484 <TRegion::$__dt(void)>
         42844:	e3a03000 	mov	r3, #0	; 0x0
         42848:	e92d0008 	stmdb	sp!, {r3}
         4284c:	e1a00007 	mov	r0, r7
         42850:	e28d2030 	add	r2, sp, #48	; 0x30
         42854:	e28d1030 	add	r1, sp, #48	; 0x30
         42858:	e3a03002 	mov	r3, #2	; 0x2
         4285c:	eb693c1e 	bl	1a918dc <TBits::$Draw(TRect const &, TRect const &, long, Region **)>
         42860:	e28dd004 	add	sp, sp, #4	; 0x4
         42864:	e59d5004 	ldr	r5, [sp, #4]
         42868:	e24dd008 	sub	sp, sp, #8	; 0x8
         4286c:	e1a0000d 	mov	r0, sp
         42870:	eb6eb3cb 	bl	1bef7a4 <$GetPort(GrafPort **)>
         42874:	e49d0004 	ldr	r0, [sp], #4
         42878:	e5900024 	ldr	r0, [r0, #36]
         4287c:	e58d0000 	str	r0, [sp]
         42880:	e1a00005 	mov	r0, r5
         42884:	e59d1000 	ldr	r1, [sp]
         42888:	eb6c2b89 	bl	1b4d6b4 <$CopyRgn__FPP6RegionT1>
         4288c:	e28dd004 	add	sp, sp, #4	; 0x4
         42890:	e28d0004 	add	r0, sp, #4	; 0x4
         42894:	e3a01000 	mov	r1, #0	; 0x0
         42898:	eb6916e9 	bl	1a88444 <TRegionVar::$__dt(void)>
         4289c:	e28dd018 	add	sp, sp, #24	; 0x18
         428a0:	e59d0000 	ldr	r0, [sp]
         428a4:	eb6c444c 	bl	1b539dc <$SetClip(Region **)>
         428a8:	e1a00004 	mov	r0, r4
         428ac:	eb6975e8 	bl	1aa0054 <TBits::$RestorePort(void)>
         428b0:	e1a0000d 	mov	r0, sp
         428b4:	e3a01000 	mov	r1, #0	; 0x0
         428b8:	eb6916e1 	bl	1a88444 <TRegionVar::$__dt(void)>
         428bc:	e28dd014 	add	sp, sp, #20	; 0x14
         428c0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         428c4:	000425ac 	andeq	r2, r4, ip, lsr #11
         428c8:	00371318 	eoreqs	r1, r7, r8, lsl r3
         428cc:	0c100cbc 	ldceq	12, cr0, [r0], -#752
         428d0:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: DragBits::__ct(TView *, TRect const *, unsigned char)
 * Address: 000428d4
 */
DragBits::DragBits(TView *, TRect const *, unsigned char) {
    /*
         428d4:	e1a0c00d 	mov	ip, sp
         428d8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         428dc:	e24cb004 	sub	fp, ip, #4	; 0x4
         428e0:	e1b04000 	movs	r4, r0
         428e4:	e1a06001 	mov	r6, r1
         428e8:	e1a05002 	mov	r5, r2
         428ec:	e20370ff 	and	r7, r3, #255	; 0xff
         428f0:	1a000003 	bne	42904 <DragBits::__ct(TView *, TRect const *, unsigned char)+0x30>
         428f4:	e3a00080 	mov	r0, #128	; 0x80
         428f8:	eb6e2f8e 	bl	1bce738 <$__nw(unsigned int)>
         428fc:	e1b04000 	movs	r4, r0
         42900:	0a00000a 	beq	42930 <DragBits::__ct(TView *, TRect const *, unsigned char)+0x5c>
         42904:	e1a00004 	mov	r0, r4
         42908:	eb6912b9 	bl	1a873f4 <TRegionStruct::$__ct(void)>
         4290c:	e2840004 	add	r0, r4, #4	; 0x4
         42910:	eb6916c0 	bl	1a88418 <TBits::$__ct(void)>
         42914:	e2840038 	add	r0, r4, #56	; 0x38
         42918:	eb6916be 	bl	1a88418 <TBits::$__ct(void)>
         4291c:	e1a03007 	mov	r3, r7
         42920:	e1a02005 	mov	r2, r5
         42924:	e1a01006 	mov	r1, r6
         42928:	e1a00004 	mov	r0, r4
         4292c:	eb6a6d56 	bl	1adde8c <DragBits::$Constructor(TView *, TRect const *, unsigned char)>
         42930:	e1a00004 	mov	r0, r4
         42934:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: DragBits::__dt(void)
 * Address: 00042938
 */
DragBits::~DragBits(void) {
    /*
         42938:	e1a0c00d 	mov	ip, sp
         4293c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         42940:	e24cb004 	sub	fp, ip, #4	; 0x4
         42944:	e1a04000 	mov	r4, r0
         42948:	e1a05001 	mov	r5, r1
         4294c:	e5d0007c 	ldrb	r0, [r0, #124]	; fField124
         42950:	e3300000 	teq	r0, #0	; 0x0
         42954:	0a000003 	beq	42968 <DragBits::__dt(void)+0x30>
         42958:	e284006c 	add	r0, r4, #108	; 0x6c
         4295c:	eb6e7e00 	bl	1be2164 <$RemoveExceptionHandler>
         42960:	e5940000 	ldr	r0, [r4]
         42964:	eb6c441c 	bl	1b539dc <$SetClip(Region **)>
         42968:	e2840038 	add	r0, r4, #56	; 0x38
         4296c:	e3a01000 	mov	r1, #0	; 0x0
         42970:	eb6916c0 	bl	1a88478 <TBits::$__dt(void)>
         42974:	e2840004 	add	r0, r4, #4	; 0x4
         42978:	e3a01000 	mov	r1, #0	; 0x0
         4297c:	eb6916bd 	bl	1a88478 <TBits::$__dt(void)>
         42980:	e1a00004 	mov	r0, r4
         42984:	e3a01000 	mov	r1, #0	; 0x0
         42988:	eb6916b2 	bl	1a88458 <TRegionStruct::$__dt(void)>
         4298c:	e3150001 	tst	r5, #1	; 0x1
         42990:	11a00004 	movne	r0, r4
         42994:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         42998:	1a6e2b50 	bne	1bcd6e0 <$__dl(void *)>
         4299c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: DragBits::__ct(void)
 * Address: 000429a0
 */
DragBits::DragBits(void) {
    /*
         429a0:	e1a0c00d 	mov	ip, sp
         429a4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         429a8:	e24cb004 	sub	fp, ip, #4	; 0x4
         429ac:	e1b04000 	movs	r4, r0
         429b0:	1a000003 	bne	429c4 <DragBits::__ct(void)+0x24>
         429b4:	e3a00080 	mov	r0, #128	; 0x80
         429b8:	eb6e2f5e 	bl	1bce738 <$__nw(unsigned int)>
         429bc:	e1b04000 	movs	r4, r0
         429c0:	0a000007 	beq	429e4 <DragBits::__ct(void)+0x44>
         429c4:	e1a00004 	mov	r0, r4
         429c8:	eb691289 	bl	1a873f4 <TRegionStruct::$__ct(void)>
         429cc:	e2840004 	add	r0, r4, #4	; 0x4
         429d0:	eb691690 	bl	1a88418 <TBits::$__ct(void)>
         429d4:	e2840038 	add	r0, r4, #56	; 0x38
         429d8:	eb69168e 	bl	1a88418 <TBits::$__ct(void)>
         429dc:	e3a00000 	mov	r0, #0	; 0x0
         429e0:	e5c4007c 	strb	r0, [r4, #124]	; fField124
         429e4:	e1a00004 	mov	r0, r4
         429e8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

