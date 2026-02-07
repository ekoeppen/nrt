#include "include/TXPageFrames.h"

/**
 * Symbol: TXPageFrames::__ct(void)
 * Address: 002413e0
 */
TXPageFrames::TXPageFrames(void) {
    /*
        2413e0:	e1a0c00d 	mov	ip, sp
        2413e4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2413e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2413ec:	e1b04000 	movs	r4, r0
        2413f0:	1a000003 	bne	241404 <TXPageFrames::__ct(void)+0x24>
        2413f4:	e3a00034 	mov	r0, #52	; 0x34
        2413f8:	eb6634ce 	bl	1bce738 <$__nw(unsigned int)>
        2413fc:	e1b04000 	movs	r4, r0
        241400:	0a000008 	beq	241428 <TXPageFrames::__ct(void)+0x48>
        241404:	e1a00004 	mov	r0, r4
        241408:	eb6538ec 	bl	1b8f7c0 <TXMonoSizeFrames::$__ct(void)>
        24140c:	e59f001c 	ldr	r0, [pc, #1c]	; 241430 <TXPageFrames::__ct(void)+0x50>
        241410:	e5840000 	str	r0, [r4]
        241414:	e3a00001 	mov	r0, #1	; 0x1
        241418:	e5c40030 	strb	r0, [r4, #48]	; fField48
        24141c:	e3a00000 	mov	r0, #0	; 0x0
        241420:	eb6555b8 	bl	1b96b08 <TXPageFormatter::$__ct(void)>
        241424:	e5840004 	str	r0, [r4, #4]	; fField4
        241428:	e1a00004 	mov	r0, r4
        24142c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        241430:	0001c7d0 	ldreqd	ip, [r1], -r0
    */
}

/**
 * Symbol: TXPageFrames::GetCountPages( const(void))
 * Address: 00241434
 */
TXPageFrames::GetCountPages( const(void)) {
    /*
        241434:	e5900004 	ldr	r0, [r0, #4]	; fField4
        241438:	e5901000 	ldr	r1, [r0]
        24143c:	e281f02c 	add	pc, r1, #44	; 0x2c
    */
}

/**
 * Symbol: TXPageFrames::PointToNearestFrame( const(TXLongPoint const &))
 * Address: 00241440
 */
TXPageFrames::PointToNearestFrame( const(TXLongPoint const &)) {
    /*
        241440:	e1a0c00d 	mov	ip, sp
        241444:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        241448:	e24cb004 	sub	fp, ip, #4	; 0x4
        24144c:	e1a04000 	mov	r4, r0
        241450:	e1a05001 	mov	r5, r1
        241454:	e5d00030 	ldrb	r0, [r0, #48]	; fField48
        241458:	e3500001 	cmp	r0, #1	; 0x1
        24145c:	da000010 	ble	2414a4 <TXPageFrames::PointToNearestFrame( const(TXLongPoint const &))+0x64>
        241460:	e1a00004 	mov	r0, r4
        241464:	eb655188 	bl	1b95a8c <TXPageFrames::$GetPageWidth( const(void))>
        241468:	e1a06000 	mov	r6, r0
        24146c:	e1a00004 	mov	r0, r4
        241470:	e5941000 	ldr	r1, [r4]
        241474:	e1a0e00f 	mov	lr, pc
        241478:	e281f040 	add	pc, r1, #64	; 0x40
        24147c:	e0860000 	add	r0, r6, r0
        241480:	e5951004 	ldr	r1, [r5, #4]	; fField4
        241484:	eb65c52d 	bl	1bb2940 <$__rt_sdiv>
        241488:	e1a01000 	mov	r1, r0
        24148c:	e5d40030 	ldrb	r0, [r4, #48]	; fField48
        241490:	e2400001 	sub	r0, r0, #1	; 0x1
        241494:	e1510000 	cmp	r1, r0
        241498:	b1a00001 	movlt	r0, r1
        24149c:	e1a06000 	mov	r6, r0
        2414a0:	ea000000 	b	2414a8 <TXPageFrames::PointToNearestFrame( const(TXLongPoint const &))+0x68>
        2414a4:	e3a06000 	mov	r6, #0	; 0x0
        2414a8:	e1a00004 	mov	r0, r4
        2414ac:	eb655175 	bl	1b95a88 <TXPageFrames::$GetPageHeight( const(void))>
        2414b0:	e1a07000 	mov	r7, r0
        2414b4:	e1a00004 	mov	r0, r4
        2414b8:	e5941000 	ldr	r1, [r4]
        2414bc:	e1a0e00f 	mov	lr, pc
        2414c0:	e281f040 	add	pc, r1, #64	; 0x40
        2414c4:	e0870000 	add	r0, r7, r0
        2414c8:	e5951000 	ldr	r1, [r5]
        2414cc:	eb65c51b 	bl	1bb2940 <$__rt_sdiv>
        2414d0:	e5d41030 	ldrb	r1, [r4, #48]	; fField48
        2414d4:	e0256190 	mla	r5, r0, r1, r6
        2414d8:	e1a00004 	mov	r0, r4
        2414dc:	e5941000 	ldr	r1, [r4]
        2414e0:	e1a0e00f 	mov	lr, pc
        2414e4:	e281f03c 	add	pc, r1, #60	; 0x3c
        2414e8:	e2400001 	sub	r0, r0, #1	; 0x1
        2414ec:	e1550000 	cmp	r5, r0
        2414f0:	b1a00005 	movlt	r0, r5
        2414f4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXPageFrames::SectFrames( const(Rect const &, TXSectFrames *))
 * Address: 002414f8
 */
TXPageFrames::SectFrames( const(Rect const &, TXSectFrames *)) {
    /*
        2414f8:	e1a0c00d 	mov	ip, sp
        2414fc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        241500:	e24cb004 	sub	fp, ip, #4	; 0x4
        241504:	e1a04000 	mov	r4, r0
        241508:	e1a05002 	mov	r5, r2
        24150c:	e24dd010 	sub	sp, sp, #16	; 0x10
        241510:	e1a0200d 	mov	r2, sp
        241514:	ebffe2ca 	bl	23a044 <TXFrames::DrawToAbs( const(Rect const &, TXLongRect *))>
        241518:	e24dd008 	sub	sp, sp, #8	; 0x8
        24151c:	e59d000c 	ldr	r0, [sp, #12]
        241520:	e59d1008 	ldr	r1, [sp, #8]
        241524:	e58d0004 	str	r0, [sp, #4]	; fField4
        241528:	e58d1000 	str	r1, [sp]
        24152c:	e1a0100d 	mov	r1, sp
        241530:	e1a00004 	mov	r0, r4
        241534:	e5942000 	ldr	r2, [r4]
        241538:	e1a0e00f 	mov	lr, pc
        24153c:	e282f038 	add	pc, r2, #56	; 0x38
        241540:	e1a06000 	mov	r6, r0
        241544:	e59d0014 	ldr	r0, [sp, #20]
        241548:	e59d1008 	ldr	r1, [sp, #8]
        24154c:	e58d0004 	str	r0, [sp, #4]	; fField4
        241550:	e58d1000 	str	r1, [sp]
        241554:	e1a0100d 	mov	r1, sp
        241558:	e1a00004 	mov	r0, r4
        24155c:	e5942000 	ldr	r2, [r4]
        241560:	e1a0e00f 	mov	lr, pc
        241564:	e282f038 	add	pc, r2, #56	; 0x38
        241568:	e0400006 	sub	r0, r0, r6
        24156c:	e2807001 	add	r7, r0, #1	; 0x1
        241570:	e28d1010 	add	r1, sp, #16	; 0x10
        241574:	e8910003 	ldmia	r1, {r0, r1}
        241578:	e88d0003 	stmia	sp, {r0, r1}
        24157c:	e1a0100d 	mov	r1, sp
        241580:	e1a00004 	mov	r0, r4
        241584:	e5942000 	ldr	r2, [r4]
        241588:	e1a0e00f 	mov	lr, pc
        24158c:	e282f038 	add	pc, r2, #56	; 0x38
        241590:	e5d43030 	ldrb	r3, [r4, #48]	; fField48
        241594:	e92d0008 	stmdb	sp!, {r3}
        241598:	e1a03000 	mov	r3, r0
        24159c:	e1a02007 	mov	r2, r7
        2415a0:	e1a01006 	mov	r1, r6
        2415a4:	e1a00005 	mov	r0, r5
        2415a8:	eb65346d 	bl	1b8e764 <TXSectFrames::$SetUniform(long, long, long, long)>
        2415ac:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXPageFrames::GetPageGutter( const(void))
 * Address: 00241774
 */
TXPageFrames::GetPageGutter( const(void)) {
    /*
        241774:	e3a00005 	mov	r0, #5	; 0x5
        241778:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXPageFrames::GetPageHeight( const(void))
 * Address: 0024282c
 */
TXPageFrames::GetPageHeight( const(void)) {
    /*
        24282c:	e1a0c00d 	mov	ip, sp
        242830:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        242834:	e24cb004 	sub	fp, ip, #4	; 0x4
        242838:	e1a04000 	mov	r4, r0
        24283c:	e24dd008 	sub	sp, sp, #8	; 0x8
        242840:	e1a0100d 	mov	r1, sp
        242844:	e5902000 	ldr	r2, [r0]
        242848:	e1a0e00f 	mov	lr, pc
        24284c:	e282f018 	add	pc, r2, #24	; 0x18
        242850:	e5b41028 	ldr	r1, [r4, #40]!	; fField40
        242854:	e59d0000 	ldr	r0, [sp]
        242858:	e0811840 	add	r1, r1, r0, asr #16
        24285c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        242860:	e0810840 	add	r0, r1, r0, asr #16
        242864:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TXPageFrames::GetPageWidth( const(void))
 * Address: 00242868
 */
TXPageFrames::GetPageWidth( const(void)) {
    /*
        242868:	e1a0c00d 	mov	ip, sp
        24286c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        242870:	e24cb004 	sub	fp, ip, #4	; 0x4
        242874:	e1a04000 	mov	r4, r0
        242878:	e24dd008 	sub	sp, sp, #8	; 0x8
        24287c:	e1a0100d 	mov	r1, sp
        242880:	e5902000 	ldr	r2, [r0]
        242884:	e1a0e00f 	mov	lr, pc
        242888:	e282f018 	add	pc, r2, #24	; 0x18
        24288c:	e5b4102c 	ldr	r1, [r4, #44]!	; fField44
        242890:	e59d0002 	ldr	r0, [sp, #2]
        242894:	e0811840 	add	r1, r1, r0, asr #16
        242898:	e59d0006 	ldr	r0, [sp, #6]
        24289c:	e0810840 	add	r0, r1, r0, asr #16
        2428a0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TXPageFrames::GetTotalHeight( const(void))
 * Address: 002428a4
 */
TXPageFrames::GetTotalHeight( const(void)) {
    /*
        2428a4:	e1a0c00d 	mov	ip, sp
        2428a8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2428ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        2428b0:	e1a04000 	mov	r4, r0
        2428b4:	e5901000 	ldr	r1, [r0]
        2428b8:	e1a0e00f 	mov	lr, pc
        2428bc:	e281f03c 	add	pc, r1, #60	; 0x3c
        2428c0:	e1a01000 	mov	r1, r0
        2428c4:	e5d40030 	ldrb	r0, [r4, #48]	; fField48
        2428c8:	e0811000 	add	r1, r1, r0
        2428cc:	e2411001 	sub	r1, r1, #1	; 0x1
        2428d0:	eb65c01a 	bl	1bb2940 <$__rt_sdiv>
        2428d4:	e1a06000 	mov	r6, r0
        2428d8:	e1a00004 	mov	r0, r4
        2428dc:	e5941000 	ldr	r1, [r4]
        2428e0:	e1a0e00f 	mov	lr, pc
        2428e4:	e281f040 	add	pc, r1, #64	; 0x40
        2428e8:	e1a05000 	mov	r5, r0
        2428ec:	e1a00004 	mov	r0, r4
        2428f0:	eb654c64 	bl	1b95a88 <TXPageFrames::$GetPageHeight( const(void))>
        2428f4:	e0800005 	add	r0, r0, r5
        2428f8:	e0000096 	mul	r0, r6, r0
        2428fc:	e0400005 	sub	r0, r0, r5
        242900:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXPageFrames::GetTotalWidth( const(void))
 * Address: 00242904
 */
TXPageFrames::GetTotalWidth( const(void)) {
    /*
        242904:	e1a0c00d 	mov	ip, sp
        242908:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        24290c:	e24cb004 	sub	fp, ip, #4	; 0x4
        242910:	e1a04000 	mov	r4, r0
        242914:	e5d05030 	ldrb	r5, [r0, #48]	; fField48
        242918:	e5901000 	ldr	r1, [r0]
        24291c:	e1a0e00f 	mov	lr, pc
        242920:	e281f03c 	add	pc, r1, #60	; 0x3c
        242924:	e1550000 	cmp	r5, r0
        242928:	b1a00005 	movlt	r0, r5
        24292c:	e1a06000 	mov	r6, r0
        242930:	e1a00004 	mov	r0, r4
        242934:	e5941000 	ldr	r1, [r4]
        242938:	e1a0e00f 	mov	lr, pc
        24293c:	e281f040 	add	pc, r1, #64	; 0x40
        242940:	e1a05000 	mov	r5, r0
        242944:	e1a00004 	mov	r0, r4
        242948:	eb654c4f 	bl	1b95a8c <TXPageFrames::$GetPageWidth( const(void))>
        24294c:	e0800005 	add	r0, r0, r5
        242950:	e0000096 	mul	r0, r6, r0
        242954:	e0400005 	sub	r0, r0, r5
        242958:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXPageFrames::PageNoToCell( const(long, TXPageCell *))
 * Address: 0024295c
 */
TXPageFrames::PageNoToCell( const(long, TXPageCell *)) {
    /*
        24295c:	e1a0c00d 	mov	ip, sp
        242960:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        242964:	e24cb004 	sub	fp, ip, #4	; 0x4
        242968:	e1a06000 	mov	r6, r0
        24296c:	e1b05001 	movs	r5, r1
        242970:	e1a04002 	mov	r4, r2
        242974:	e3a01000 	mov	r1, #0	; 0x0
        242978:	05841000 	streq	r1, [r4]
        24297c:	0a000009 	beq	2429a8 <TXPageFrames::PageNoToCell( const(long, TXPageCell *))+0x4c>
        242980:	e5d60030 	ldrb	r0, [r6, #48]	; fField48
        242984:	e3300001 	teq	r0, #1	; 0x1
        242988:	05845000 	streq	r5, [r4]
        24298c:	0a000005 	beq	2429a8 <TXPageFrames::PageNoToCell( const(long, TXPageCell *))+0x4c>
        242990:	e1a01005 	mov	r1, r5
        242994:	eb65bfe9 	bl	1bb2940 <$__rt_sdiv>
        242998:	e5840000 	str	r0, [r4]
        24299c:	e5d60030 	ldrb	r0, [r6, #48]	; fField48
        2429a0:	e1a01005 	mov	r1, r5
        2429a4:	eb65bfe5 	bl	1bb2940 <$__rt_sdiv>
        2429a8:	e5a41004 	str	r1, [r4, #4]!	; fField4
        2429ac:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXPageFrames::GetAbsTextBounds( const(long, TXLongRect *))
 * Address: 002429b0
 */
TXPageFrames::GetAbsTextBounds( const(long, TXLongRect *)) {
    /*
        2429b0:	e1a0c00d 	mov	ip, sp
        2429b4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2429b8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2429bc:	e1a04000 	mov	r4, r0
        2429c0:	e1a06001 	mov	r6, r1
        2429c4:	e1a05002 	mov	r5, r2
        2429c8:	eb65336f 	bl	1b8f78c <TXFrames::$GetAbsTextBounds( const(long, TXLongRect *))>
        2429cc:	e24dd008 	sub	sp, sp, #8	; 0x8
        2429d0:	e1a0200d 	mov	r2, sp
        2429d4:	e1a01006 	mov	r1, r6
        2429d8:	e1a00004 	mov	r0, r4
        2429dc:	eb654c2d 	bl	1b95a98 <TXPageFrames::$PageNoToCell( const(long, TXPageCell *))>
        2429e0:	e1a00004 	mov	r0, r4
        2429e4:	e5941000 	ldr	r1, [r4]
        2429e8:	e1a0e00f 	mov	lr, pc
        2429ec:	e281f040 	add	pc, r1, #64	; 0x40
        2429f0:	e1a06000 	mov	r6, r0
        2429f4:	e1a00004 	mov	r0, r4
        2429f8:	eb654c23 	bl	1b95a8c <TXPageFrames::$GetPageWidth( const(void))>
        2429fc:	e0801006 	add	r1, r0, r6
        242a00:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        242a04:	e0070190 	mul	r7, r0, r1
        242a08:	e1a00004 	mov	r0, r4
        242a0c:	eb654c1d 	bl	1b95a88 <TXPageFrames::$GetPageHeight( const(void))>
        242a10:	e0801006 	add	r1, r0, r6
        242a14:	e59d0000 	ldr	r0, [sp]
        242a18:	e0020190 	mul	r2, r0, r1
        242a1c:	e1a01007 	mov	r1, r7
        242a20:	e1a00005 	mov	r0, r5
        242a24:	ebffc53e 	bl	233f24 <TXLongRect::Offset(long, long)>
        242a28:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

