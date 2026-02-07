#include "include/TInker.h"

/**
 * Symbol: TInker::DrawInk(Point, Point, Rect *, short)
 * Address: 0021765c
 */
TInker::DrawInk(Point, Point, Rect *, short) {
    /*
        21765c:	e1a0c00d 	mov	ip, sp
        217660:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        217664:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        217668:	e24cb014 	sub	fp, ip, #20	; 0x14
        21766c:	e1a07002 	mov	r7, r2
        217670:	e1a08001 	mov	r8, r1
        217674:	e1a04000 	mov	r4, r0
        217678:	e24ddf52 	sub	sp, sp, #328	; 0x148
        21767c:	e5d000c0 	ldrb	r0, [r0, #192]	; fField192
        217680:	e5cd0147 	strb	r0, [sp, #327]
        217684:	e1a00440 	mov	r0, r0, asr #8
        217688:	e5cd0146 	strb	r0, [sp, #326]
        21768c:	e59d0144 	ldr	r0, [sp, #324]
        217690:	e5cd0145 	strb	r0, [sp, #325]
        217694:	e1a00440 	mov	r0, r0, asr #8
        217698:	e5cd0144 	strb	r0, [sp, #324]
        21769c:	e28400dc 	add	r0, r4, #220	; 0xdc
        2176a0:	e1a05000 	mov	r5, r0
        2176a4:	eb64cfcf 	bl	1b4b5e8 <TLiveInker::$ResetAccumulator(void)>
        2176a8:	e58d8000 	str	r8, [sp]
        2176ac:	e28da004 	add	sl, sp, #4	; 0x4
        2176b0:	e3a06002 	mov	r6, #2	; 0x2
        2176b4:	e1a00005 	mov	r0, r5
        2176b8:	e1a01008 	mov	r1, r8
        2176bc:	e58d7004 	str	r7, [sp, #4]
        2176c0:	e59d2144 	ldr	r2, [sp, #324]
        2176c4:	eb64c777 	bl	1b494a8 <TLiveInker::$AddPoint(Point const, Point const)>
        2176c8:	e1a00005 	mov	r0, r5
        2176cc:	e1a01007 	mov	r1, r7
        2176d0:	e59d2144 	ldr	r2, [sp, #324]
        2176d4:	eb64c773 	bl	1b494a8 <TLiveInker::$AddPoint(Point const, Point const)>
        2176d8:	e1a08000 	mov	r8, r0
        2176dc:	ea00002a 	b	21778c <TInker::DrawInk(Point, Point, Rect *, short)+0x130>
        2176e0:	eb634ba2 	bl	1aea570 <$GetInkerData(void)>
        2176e4:	e200000f 	and	r0, r0, #15	; 0xf
        2176e8:	e3500007 	cmp	r0, #7	; 0x7
        2176ec:	8a00002d 	bhi	2177a8 <TInker::DrawInk(Point, Point, Rect *, short)+0x14c>
        2176f0:	eb634b9e 	bl	1aea570 <$GetInkerData(void)>
        2176f4:	e1a00920 	mov	r0, r0, lsr #18
        2176f8:	e1a00900 	mov	r0, r0, lsl #18
        2176fc:	e1a092a0 	mov	r9, r0, lsr #5
        217700:	eb634b9a 	bl	1aea570 <$GetInkerData(void)>
        217704:	e1a00700 	mov	r0, r0, lsl #14
        217708:	e1a00720 	mov	r0, r0, lsr #14
        21770c:	e3c0000f 	bic	r0, r0, #15	; 0xf
        217710:	e1a07480 	mov	r7, r0, lsl #9
        217714:	e2890902 	add	r0, r9, #32768	; 0x8000
        217718:	e1a00840 	mov	r0, r0, asr #16
        21771c:	e5cd0143 	strb	r0, [sp, #323]
        217720:	e1a00440 	mov	r0, r0, asr #8
        217724:	e5cd0142 	strb	r0, [sp, #322]
        217728:	e2870902 	add	r0, r7, #32768	; 0x8000
        21772c:	e1a00840 	mov	r0, r0, asr #16
        217730:	e5cd0141 	strb	r0, [sp, #321]
        217734:	e1a00440 	mov	r0, r0, asr #8
        217738:	e5cd0140 	strb	r0, [sp, #320]
        21773c:	e1a00005 	mov	r0, r5
        217740:	e28d2d05 	add	r2, sp, #320	; 0x140
        217744:	e8920006 	ldmia	r2, {r1, r2}
        217748:	eb64c756 	bl	1b494a8 <TLiveInker::$AddPoint(Point const, Point const)>
        21774c:	e1b08000 	movs	r8, r0
        217750:	0a00000d 	beq	21778c <TInker::DrawInk(Point, Point, Rect *, short)+0x130>
        217754:	e3a00001 	mov	r0, #1	; 0x1
        217758:	eb634f94 	bl	1aeb5b0 <$IncInkerIndex(unsigned long)>
        21775c:	e08d0106 	add	r0, sp, r6, lsl #2
        217760:	e5301004 	ldr	r1, [r0, -#4]!
        217764:	e59d0140 	ldr	r0, [sp, #320]
        217768:	e1310000 	teq	r1, r0
        21776c:	0a000006 	beq	21778c <TInker::DrawInk(Point, Point, Rect *, short)+0x130>
        217770:	e1a00006 	mov	r0, r6
        217774:	e2866001 	add	r6, r6, #1	; 0x1
        217778:	e08d1100 	add	r1, sp, r0, lsl #2
        21777c:	e59d0140 	ldr	r0, [sp, #320]
        217780:	e5810000 	str	r0, [r1]
        217784:	e5847094 	str	r7, [r4, #148]	; fField148
        217788:	e5849090 	str	r9, [r4, #144]	; fField144
        21778c:	e3380000 	teq	r8, #0	; 0x0
        217790:	0a000004 	beq	2177a8 <TInker::DrawInk(Point, Point, Rect *, short)+0x14c>
        217794:	eb634f89 	bl	1aeb5c0 <$InkerBufferEmpty(void)>
        217798:	e3300000 	teq	r0, #0	; 0x0
        21779c:	1a000001 	bne	2177a8 <TInker::DrawInk(Point, Point, Rect *, short)+0x14c>
        2177a0:	e3560050 	cmp	r6, #80	; 0x50
        2177a4:	3affffcd 	bcc	2176e0 <TInker::DrawInk(Point, Point, Rect *, short)+0x84>
        2177a8:	e2851020 	add	r1, r5, #32	; 0x20
        2177ac:	e59b0010 	ldr	r0, [fp, #16]
        2177b0:	e8915000 	ldmia	r1, {ip, lr}
        2177b4:	e8805000 	stmia	r0, {ip, lr}
        2177b8:	e1a00005 	mov	r0, r5
        2177bc:	eb64d396 	bl	1b4c61c <TLiveInker::$StartLiveInk(void)>
        2177c0:	e08d4106 	add	r4, sp, r6, lsl #2
        2177c4:	e154000a 	cmp	r4, sl
        2177c8:	9a000006 	bls	2177e8 <TInker::DrawInk(Point, Point, Rect *, short)+0x18c>
        2177cc:	e1a00005 	mov	r0, r5
        2177d0:	e81a0006 	ldmda	sl, {r1, r2}
        2177d4:	e59d3144 	ldr	r3, [sp, #324]
        2177d8:	eb64cf6a 	bl	1b4b588 <TLiveInker::$InkLine(Point const, Point const, Point const)>
        2177dc:	e28aa004 	add	sl, sl, #4	; 0x4
        2177e0:	e154000a 	cmp	r4, sl
        2177e4:	8afffff8 	bhi	2177cc <TInker::DrawInk(Point, Point, Rect *, short)+0x170>
        2177e8:	e1a00005 	mov	r0, r5
        2177ec:	eb64d38c 	bl	1b4c624 <TLiveInker::$StopLiveInk(void)>
        2177f0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TInker::GetCurrentPenMode(void)
 * Address: 002177f4
 */
TInker::GetCurrentPenMode(void) {
    /*
        2177f4:	e5d000c0 	ldrb	r0, [r0, #192]	; fField192
        2177f8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TInker::GetNextPenMode(void)
 * Address: 002177fc
 */
TInker::GetNextPenMode(void) {
    /*
        2177fc:	e5d000c1 	ldrb	r0, [r0, #193]	; fField193
        217800:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TInker::SetNextPenMode(unsigned char)
 * Address: 00217804
 */
TInker::SetNextPenMode(unsigned char) {
    /*
        217804:	e5c010c1 	strb	r1, [r0, #193]	; fField193
        217808:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TInker::SetCurrentPenMode(unsigned char)
 * Address: 0021780c
 */
TInker::SetCurrentPenMode(unsigned char) {
    /*
        21780c:	e5c010c0 	strb	r1, [r0, #192]	; fField192
        217810:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TInker::SetNewtPort(TUPort *)
 * Address: 00217814
 */
TInker::SetNewtPort(TUPort *) {
    /*
        217814:	e5a01080 	str	r1, [r0, #128]!	; fField128
        217818:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TInker::LCDEntry(void)
 * Address: 0021781c
 */
TInker::LCDEntry(void) {
    /*
        21781c:	e1a0c00d 	mov	ip, sp
        217820:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        217824:	e24cb004 	sub	fp, ip, #4	; 0x4
        217828:	e1a04000 	mov	r4, r0
        21782c:	eb634732 	bl	1ae94fc <TInker::$Convert(void)>
        217830:	e2847070 	add	r7, r4, #112	; 0x70
        217834:	e28450cc 	add	r5, r4, #204	; 0xcc
        217838:	e3300000 	teq	r0, #0	; 0x0
        21783c:	0a000030 	beq	217904 <TInker::LCDEntry(void)+0xe8>
        217840:	e59f8114 	ldr	r8, [pc, #114]	; 21795c <TInker::LCDEntry(void)+0x140>
        217844:	e28460c4 	add	r6, r4, #196	; 0xc4
        217848:	e24dd010 	sub	sp, sp, #16	; 0x10
        21784c:	e5d400c3 	ldrb	r0, [r4, #195]	; fField195
        217850:	e3300000 	teq	r0, #0	; 0x0
        217854:	0a000041 	beq	217960 <TInker::LCDEntry(void)+0x144>
        217858:	e3300001 	teq	r0, #1	; 0x1
        21785c:	0a000008 	beq	217884 <TInker::LCDEntry(void)+0x68>
        217860:	e3300002 	teq	r0, #2	; 0x2
        217864:	0a000047 	beq	217988 <TInker::LCDEntry(void)+0x16c>
        217868:	e3300003 	teq	r0, #3	; 0x3
        21786c:	1a000004 	bne	217884 <TInker::LCDEntry(void)+0x68>
        217870:	e3e00000 	mvn	r0, #0	; 0x0
        217874:	e3a01000 	mov	r1, #0	; 0x0
        217878:	e5840088 	str	r0, [r4, #136]	; fField136
        21787c:	e5c41085 	strb	r1, [r4, #133]	; fField133
        217880:	e5c41084 	strb	r1, [r4, #132]	; fField132
        217884:	e5d8000c 	ldrb	r0, [r8, #12]
        217888:	e3300000 	teq	r0, #0	; 0x0
        21788c:	0b634b33 	bleq	1aea560 <$FlushInkerBuffer(void)>
        217890:	e5d400c3 	ldrb	r0, [r4, #195]	; fField195
        217894:	e3300000 	teq	r0, #0	; 0x0
        217898:	0a000014 	beq	2178f0 <TInker::LCDEntry(void)+0xd4>
        21789c:	eb652a1d 	bl	1b62118 <$RealStrokeTime(void)>
        2178a0:	e3300000 	teq	r0, #0	; 0x0
        2178a4:	0a000011 	beq	2178f0 <TInker::LCDEntry(void)+0xd4>
        2178a8:	e1a0e007 	mov	lr, r7
        2178ac:	e1a09005 	mov	r9, r5
        2178b0:	e3a02000 	mov	r2, #0	; 0x0
        2178b4:	e3a03000 	mov	r3, #0	; 0x0
        2178b8:	e3a0a000 	mov	sl, #0	; 0x0
        2178bc:	e3a01000 	mov	r1, #0	; 0x0
        2178c0:	e3a00001 	mov	r0, #1	; 0x1
        2178c4:	e594c080 	ldr	ip, [r4, #128]	; fField128
        2178c8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2178cc:	e1a0300a 	mov	r3, sl
        2178d0:	e3a02010 	mov	r2, #16	; 0x10
        2178d4:	e92d000c 	stmdb	sp!, {r2, r3}
        2178d8:	e1a03009 	mov	r3, r9
        2178dc:	e1a0000c 	mov	r0, ip
        2178e0:	e3a02000 	mov	r2, #0	; 0x0
        2178e4:	e59e1000 	ldr	r1, [lr]
        2178e8:	eb670d16 	bl	1bdad48 <TUPort::$SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)>
        2178ec:	e28dd018 	add	sp, sp, #24	; 0x18
        2178f0:	e28dd010 	add	sp, sp, #16	; 0x10
        2178f4:	e1a00004 	mov	r0, r4
        2178f8:	eb6346ff 	bl	1ae94fc <TInker::$Convert(void)>
        2178fc:	e3300000 	teq	r0, #0	; 0x0
        217900:	1affffd0 	bne	217848 <TInker::LCDEntry(void)+0x2c>
        217904:	e5d400c3 	ldrb	r0, [r4, #195]	; fField195
        217908:	e3300000 	teq	r0, #0	; 0x0
        21790c:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        217910:	eb652a00 	bl	1b62118 <$RealStrokeTime(void)>
        217914:	e3300000 	teq	r0, #0	; 0x0
        217918:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        21791c:	e3a02000 	mov	r2, #0	; 0x0
        217920:	e3a03000 	mov	r3, #0	; 0x0
        217924:	e3a0e000 	mov	lr, #0	; 0x0
        217928:	e3a01000 	mov	r1, #0	; 0x0
        21792c:	e3a00001 	mov	r0, #1	; 0x1
        217930:	e5b4c080 	ldr	ip, [r4, #128]!	; fField128
        217934:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        217938:	e1a0300e 	mov	r3, lr
        21793c:	e3a02010 	mov	r2, #16	; 0x10
        217940:	e92d000c 	stmdb	sp!, {r2, r3}
        217944:	e1a03005 	mov	r3, r5
        217948:	e1a0000c 	mov	r0, ip
        21794c:	e3a02000 	mov	r2, #0	; 0x0
        217950:	e5971000 	ldr	r1, [r7]
        217954:	eb670cfb 	bl	1bdad48 <TUPort::$SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)>
        217958:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        21795c:	0c104d20 	ldceq	13, cr4, [r0], -#128	; fField128
        217960:	e3e00000 	mvn	r0, #0	; 0x0
        217964:	e3a01000 	mov	r1, #0	; 0x0
        217968:	e5840088 	str	r0, [r4, #136]	; fField136
        21796c:	e5c41085 	strb	r1, [r4, #133]	; fField133
        217970:	e5c41084 	strb	r1, [r4, #132]	; fField132
        217974:	e5c410cb 	strb	r1, [r4, #203]	; fField203
        217978:	e5c410ca 	strb	r1, [r4, #202]	; fField202
        21797c:	e5c410c7 	strb	r1, [r4, #199]	; fField199
        217980:	e5c410c6 	strb	r1, [r4, #198]	; fField198
        217984:	eaffffbe 	b	217884 <TInker::LCDEntry(void)+0x68>
        217988:	e5d400c0 	ldrb	r0, [r4, #192]	; fField192
        21798c:	e3300000 	teq	r0, #0	; 0x0
        217990:	0a00002e 	beq	217a50 <TInker::LCDEntry(void)+0x234>
        217994:	e5940090 	ldr	r0, [r4, #144]	; fField144
        217998:	e2800902 	add	r0, r0, #32768	; 0x8000
        21799c:	e1a00840 	mov	r0, r0, asr #16
        2179a0:	e5cd000b 	strb	r0, [sp, #11]
        2179a4:	e1a00440 	mov	r0, r0, asr #8
        2179a8:	e5cd000a 	strb	r0, [sp, #10]
        2179ac:	e5940094 	ldr	r0, [r4, #148]	; fField148
        2179b0:	e2800902 	add	r0, r0, #32768	; 0x8000
        2179b4:	e1a00840 	mov	r0, r0, asr #16
        2179b8:	e5cd0009 	strb	r0, [sp, #9]
        2179bc:	e1a00440 	mov	r0, r0, asr #8
        2179c0:	e5cd0008 	strb	r0, [sp, #8]
        2179c4:	e5940088 	ldr	r0, [r4, #136]	; fField136
        2179c8:	e3700001 	cmn	r0, #1	; 0x1
        2179cc:	059d0008 	ldreq	r0, [sp, #8]
        2179d0:	058d000c 	streq	r0, [sp, #12]
        2179d4:	0a00000a 	beq	217a04 <TInker::LCDEntry(void)+0x1e8>
        2179d8:	e2800902 	add	r0, r0, #32768	; 0x8000
        2179dc:	e1a00840 	mov	r0, r0, asr #16
        2179e0:	e5cd000f 	strb	r0, [sp, #15]
        2179e4:	e1a00440 	mov	r0, r0, asr #8
        2179e8:	e5cd000e 	strb	r0, [sp, #14]
        2179ec:	e594008c 	ldr	r0, [r4, #140]	; fField140
        2179f0:	e2800902 	add	r0, r0, #32768	; 0x8000
        2179f4:	e1a00840 	mov	r0, r0, asr #16
        2179f8:	e5cd000d 	strb	r0, [sp, #13]
        2179fc:	e1a00440 	mov	r0, r0, asr #8
        217a00:	e5cd000c 	strb	r0, [sp, #12]
        217a04:	e59d000c 	ldr	r0, [sp, #12]
        217a08:	e59d1008 	ldr	r1, [sp, #8]
        217a0c:	e1300001 	teq	r0, r1
        217a10:	1a000002 	bne	217a20 <TInker::LCDEntry(void)+0x204>
        217a14:	e5940088 	ldr	r0, [r4, #136]	; fField136
        217a18:	e3700001 	cmn	r0, #1	; 0x1
        217a1c:	1a00000b 	bne	217a50 <TInker::LCDEntry(void)+0x234>
        217a20:	e5d430c2 	ldrb	r3, [r4, #194]	; fField194
        217a24:	e92d0008 	stmdb	sp!, {r3}
        217a28:	e28d3004 	add	r3, sp, #4	; 0x4
        217a2c:	e1a00004 	mov	r0, r4
        217a30:	e59d1010 	ldr	r1, [sp, #16]
        217a34:	e59d200c 	ldr	r2, [sp, #12]
        217a38:	eb634ab0 	bl	1aea500 <TInker::$DrawInk(Point, Point, Rect *, short)>
        217a3c:	e28dd004 	add	sp, sp, #4	; 0x4
        217a40:	e1a02006 	mov	r2, r6
        217a44:	e1a00006 	mov	r0, r6
        217a48:	e1a0100d 	mov	r1, sp
        217a4c:	eb634ab2 	bl	1aea51c <$JoinRect__FP4RectN21>
        217a50:	e5940090 	ldr	r0, [r4, #144]	; fField144
        217a54:	e5840088 	str	r0, [r4, #136]	; fField136
        217a58:	e5940094 	ldr	r0, [r4, #148]	; fField148
        217a5c:	e584008c 	str	r0, [r4, #140]	; fField140
        217a60:	eaffff87 	b	217884 <TInker::LCDEntry(void)+0x68>
    */
}

/**
 * Symbol: TInker::Convert(void)
 * Address: 00217a64
 */
TInker::Convert(void) {
    /*
        217a64:	e1a0c00d 	mov	ip, sp
        217a68:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        217a6c:	e24cb004 	sub	fp, ip, #4	; 0x4
        217a70:	e1a04000 	mov	r4, r0
        217a74:	e59f0044 	ldr	r0, [pc, #44]	; 217ac0 <TInker::Convert(void)+0x5c>
        217a78:	e5d00000 	ldrb	r0, [r0]
        217a7c:	e3a05000 	mov	r5, #0	; 0x0
        217a80:	e3300000 	teq	r0, #0	; 0x0
        217a84:	1a00003f 	bne	217b88 <TInker::Convert(void)+0x124>
        217a88:	eb634ecc 	bl	1aeb5c0 <$InkerBufferEmpty(void)>
        217a8c:	e3300000 	teq	r0, #0	; 0x0
        217a90:	1a00003c 	bne	217b88 <TInker::Convert(void)+0x124>
        217a94:	eb634ab5 	bl	1aea570 <$GetInkerData(void)>
        217a98:	e1a01000 	mov	r1, r0
        217a9c:	e200000f 	and	r0, r0, #15	; 0xf
        217aa0:	e3a06001 	mov	r6, #1	; 0x1
        217aa4:	e330000d 	teq	r0, #13	; 0xd
        217aa8:	1a000005 	bne	217ac4 <TInker::Convert(void)+0x60>
        217aac:	e5c450c3 	strb	r5, [r4, #195]	; fField195
        217ab0:	e5d400c1 	ldrb	r0, [r4, #193]	; fField193
        217ab4:	e5c400c0 	strb	r0, [r4, #192]	; fField192
        217ab8:	e3a00001 	mov	r0, #1	; 0x1
        217abc:	ea000017 	b	217b20 <TInker::Convert(void)+0xbc>
        217ac0:	0c104d20 	ldceq	13, cr4, [r0], -#128	; fField128
        217ac4:	e330000e 	teq	r0, #14	; 0xe
        217ac8:	1a000016 	bne	217b28 <TInker::Convert(void)+0xc4>
        217acc:	e3a00003 	mov	r0, #3	; 0x3
        217ad0:	e5c400c3 	strb	r0, [r4, #195]	; fField195
        217ad4:	e5d410c0 	ldrb	r1, [r4, #192]	; fField192
        217ad8:	e3a0000e 	mov	r0, #14	; 0xe
        217adc:	e1800401 	orr	r0, r0, r1, lsl #8
        217ae0:	eb6352c8 	bl	1aec608 <$SetInkerData(unsigned long)>
        217ae4:	e59410c6 	ldr	r1, [r4, #198]	; fField198
        217ae8:	e1a01841 	mov	r1, r1, asr #16
        217aec:	e59400c4 	ldr	r0, [r4, #196]	; fField196
        217af0:	e1a00820 	mov	r0, r0, lsr #16
        217af4:	e1810800 	orr	r0, r1, r0, lsl #16
        217af8:	e3a01002 	mov	r1, #2	; 0x2
        217afc:	eb6352c2 	bl	1aec60c <$SetInkerData__FUlT1>
        217b00:	e59400ca 	ldr	r0, [r4, #202]	; fField202
        217b04:	e1a00840 	mov	r0, r0, asr #16
        217b08:	e59410c8 	ldr	r1, [r4, #200]	; fField200
        217b0c:	e1a01821 	mov	r1, r1, lsr #16
        217b10:	e1800801 	orr	r0, r0, r1, lsl #16
        217b14:	e3a01003 	mov	r1, #3	; 0x3
        217b18:	eb6352bb 	bl	1aec60c <$SetInkerData__FUlT1>
        217b1c:	e3a00003 	mov	r0, #3	; 0x3
        217b20:	eb634ea2 	bl	1aeb5b0 <$IncInkerIndex(unsigned long)>
        217b24:	ea000013 	b	217b78 <TInker::Convert(void)+0x114>
        217b28:	e3500000 	cmp	r0, #0	; 0x0
        217b2c:	3a00000e 	bcc	217b6c <TInker::Convert(void)+0x108>
        217b30:	e3500007 	cmp	r0, #7	; 0x7
        217b34:	8a00000c 	bhi	217b6c <TInker::Convert(void)+0x108>
        217b38:	e1a02921 	mov	r2, r1, lsr #18
        217b3c:	e1a02902 	mov	r2, r2, lsl #18
        217b40:	e1a022a2 	mov	r2, r2, lsr #5
        217b44:	e1a01701 	mov	r1, r1, lsl #14
        217b48:	e1a01721 	mov	r1, r1, lsr #14
        217b4c:	e3c1100f 	bic	r1, r1, #15	; 0xf
        217b50:	e1a01481 	mov	r1, r1, lsl #9
        217b54:	e5841094 	str	r1, [r4, #148]	; fField148
        217b58:	e5842090 	str	r2, [r4, #144]	; fField144
        217b5c:	e5c400c2 	strb	r0, [r4, #194]	; fField194
        217b60:	e3a00002 	mov	r0, #2	; 0x2
        217b64:	e5c400c3 	strb	r0, [r4, #195]	; fField195
        217b68:	ea000002 	b	217b78 <TInker::Convert(void)+0x114>
        217b6c:	e3a0000f 	mov	r0, #15	; 0xf
        217b70:	eb6352a4 	bl	1aec608 <$SetInkerData(unsigned long)>
        217b74:	e5c460c3 	strb	r6, [r4, #195]	; fField195
        217b78:	e3a00001 	mov	r0, #1	; 0x1
        217b7c:	eb634e8b 	bl	1aeb5b0 <$IncInkerIndex(unsigned long)>
        217b80:	e1a00006 	mov	r0, r6
        217b84:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        217b88:	e1a00005 	mov	r0, r5
        217b8c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TInker::InsertionSort(unsigned long *, unsigned long, unsigned long)
 * Address: 00217b90
 */
TInker::InsertionSort(unsigned long *, unsigned long, unsigned long) {
    /*
        217b90:	e1a00002 	mov	r0, r2
        217b94:	e3520000 	cmp	r2, #0	; 0x0
        217b98:	da000007 	ble	217bbc <TInker::InsertionSort(unsigned long *, unsigned long, unsigned long)+0x2c>
        217b9c:	e0812100 	add	r2, r1, r0, lsl #2
        217ba0:	e5122004 	ldr	r2, [r2, -#4]
        217ba4:	e7812100 	str	r2, [r1, r0, lsl #2]
        217ba8:	e1520003 	cmp	r2, r3
        217bac:	9a000002 	bls	217bbc <TInker::InsertionSort(unsigned long *, unsigned long, unsigned long)+0x2c>
        217bb0:	e2400001 	sub	r0, r0, #1	; 0x1
        217bb4:	e3500000 	cmp	r0, #0	; 0x0
        217bb8:	cafffff7 	bgt	217b9c <TInker::InsertionSort(unsigned long *, unsigned long, unsigned long)+0xc>
        217bbc:	e7813100 	str	r3, [r1, r0, lsl #2]
        217bc0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TInker::GetRawPoint(unsigned long *, unsigned long *, short, short, unsigned long)
 * Address: 00217bc4
 */
TInker::GetRawPoint(unsigned long *, unsigned long *, short, short, unsigned long) {
    /*
        217bc4:	e1a0c00d 	mov	ip, sp
        217bc8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        217bcc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        217bd0:	e24cb014 	sub	fp, ip, #20	; 0x14
        217bd4:	e1a04000 	mov	r4, r0
        217bd8:	e1a05803 	mov	r5, r3, lsl #16
        217bdc:	e1a05845 	mov	r5, r5, asr #16
        217be0:	e28b8014 	add	r8, fp, #20	; 0x14
        217be4:	e8980101 	ldmia	r8, {r0, r8}
        217be8:	e1a09800 	mov	r9, r0, lsl #16
        217bec:	e1a09849 	mov	r9, r9, asr #16
        217bf0:	e24dd0d0 	sub	sp, sp, #208	; 0xd0
        217bf4:	e3a06000 	mov	r6, #0	; 0x0
        217bf8:	e3a00001 	mov	r0, #1	; 0x1
        217bfc:	e5cd002c 	strb	r0, [sp, #44]
        217c00:	e3a0a000 	mov	sl, #0	; 0x0
        217c04:	e58da010 	str	sl, [sp, #16]
        217c08:	e58da01c 	str	sl, [sp, #28]
        217c0c:	e58da014 	str	sl, [sp, #20]
        217c10:	e3a07000 	mov	r7, #0	; 0x0
        217c14:	e3a00002 	mov	r0, #2	; 0x2
        217c18:	e58da018 	str	sl, [sp, #24]
        217c1c:	eb66a94a 	bl	1bc214c <$AllocateRefHandle(long)>
        217c20:	e58d000c 	str	r0, [sp, #12]
        217c24:	e3a00002 	mov	r0, #2	; 0x2
        217c28:	eb66a947 	bl	1bc214c <$AllocateRefHandle(long)>
        217c2c:	e3550032 	cmp	r5, #50	; 0x32
        217c30:	e58d0008 	str	r0, [sp, #8]
        217c34:	a59f0214 	ldrge	r0, [pc, #214]	; 217e50 <TInker::GetRawPoint(unsigned long *, unsigned long *, short, short, unsigned long)+0x28c>
        217c38:	b59f0214 	ldrlt	r0, [pc, #214]	; 217e54 <TInker::GetRawPoint(unsigned long *, unsigned long *, short, short, unsigned long)+0x290>
        217c3c:	e5900000 	ldr	r0, [r0]
        217c40:	e5901000 	ldr	r1, [r0]
        217c44:	e59d000c 	ldr	r0, [sp, #12]
        217c48:	e5801000 	str	r1, [r0]
        217c4c:	e59f0204 	ldr	r0, [pc, #204]	; 217e58 <TInker::GetRawPoint(unsigned long *, unsigned long *, short, short, unsigned long)+0x294>	; fField204
        217c50:	e5900000 	ldr	r0, [r0]
        217c54:	e5901000 	ldr	r1, [r0]
        217c58:	e59d000c 	ldr	r0, [sp, #12]
        217c5c:	e5900000 	ldr	r0, [r0]
        217c60:	eb66b17e 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        217c64:	e59d1008 	ldr	r1, [sp, #8]
        217c68:	e5810000 	str	r0, [r1]
        217c6c:	e1a0100d 	mov	r1, sp
        217c70:	e28d0008 	add	r0, sp, #8	; 0x8
        217c74:	eb61f37f 	bl	1a94a78 <$FromObject(RefVar const &, TRect &)>
        217c78:	e3550032 	cmp	r5, #50	; 0x32
        217c7c:	b285100e 	addlt	r1, r5, #14	; 0xe
        217c80:	b289200e 	addlt	r2, r9, #14	; 0xe
        217c84:	ba00000b 	blt	217cb8 <TInker::GetRawPoint(unsigned long *, unsigned long *, short, short, unsigned long)+0xf4>
        217c88:	e245100e 	sub	r1, r5, #14	; 0xe
        217c8c:	e59d2004 	ldr	r2, [sp, #4]
        217c90:	e1a02842 	mov	r2, r2, asr #16
        217c94:	e59d0000 	ldr	r0, [sp]
        217c98:	e0420840 	sub	r0, r2, r0, asr #16
        217c9c:	e0411000 	sub	r1, r1, r0
        217ca0:	e59d2006 	ldr	r2, [sp, #6]
        217ca4:	e1a02842 	mov	r2, r2, asr #16
        217ca8:	e59d0002 	ldr	r0, [sp, #2]
        217cac:	e0420840 	sub	r0, r2, r0, asr #16
        217cb0:	e249200e 	sub	r2, r9, #14	; 0xe
        217cb4:	e0422000 	sub	r2, r2, r0
        217cb8:	e1a0000d 	mov	r0, sp
        217cbc:	eb64e709 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        217cc0:	eb64eb17 	bl	1b52924 <$PenNormal(void)>
        217cc4:	e3a01003 	mov	r1, #3	; 0x3
        217cc8:	e3a00003 	mov	r0, #3	; 0x3
        217ccc:	eb64eb15 	bl	1b52928 <$PenSize__FlT1>
        217cd0:	e2491001 	sub	r1, r9, #1	; 0x1
        217cd4:	e2450001 	sub	r0, r5, #1	; 0x1
        217cd8:	eb64e6f8 	bl	1b518c0 <$MoveTo__FlT1>
        217cdc:	e3e01006 	mvn	r1, #6	; 0x6
        217ce0:	e3e00006 	mvn	r0, #6	; 0x6
        217ce4:	eb64e6e5 	bl	1b51880 <$Line__FlT1>
        217ce8:	e3a0100e 	mov	r1, #14	; 0xe
        217cec:	e3a0000e 	mov	r0, #14	; 0xe
        217cf0:	eb64e6e2 	bl	1b51880 <$Line__FlT1>
        217cf4:	e3e0100d 	mvn	r1, #13	; 0xd
        217cf8:	e3a00000 	mov	r0, #0	; 0x0
        217cfc:	eb64e6f0 	bl	1b518c4 <$Move__FlT1>
        217d00:	e3a0100e 	mov	r1, #14	; 0xe
        217d04:	e3e0000d 	mvn	r0, #13	; 0xd
        217d08:	eb64e6dc 	bl	1b51880 <$Line__FlT1>
        217d0c:	e3a01001 	mov	r1, #1	; 0x1
        217d10:	e3a00001 	mov	r0, #1	; 0x1
        217d14:	eb64eb03 	bl	1b52928 <$PenSize__FlT1>
        217d18:	e3a0000a 	mov	r0, #10	; 0xa
        217d1c:	eb64eaff 	bl	1b52920 <$PenMode(long)>
        217d20:	e2450002 	sub	r0, r5, #2	; 0x2
        217d24:	e1a01009 	mov	r1, r9
        217d28:	eb64e6e4 	bl	1b518c0 <$MoveTo__FlT1>
        217d2c:	e3a01000 	mov	r1, #0	; 0x0
        217d30:	e3a00004 	mov	r0, #4	; 0x4
        217d34:	eb64e6d1 	bl	1b51880 <$Line__FlT1>
        217d38:	e2491002 	sub	r1, r9, #2	; 0x2
        217d3c:	e1a00005 	mov	r0, r5
        217d40:	eb64e6de 	bl	1b518c0 <$MoveTo__FlT1>
        217d44:	e3a01004 	mov	r1, #4	; 0x4
        217d48:	e3a00000 	mov	r0, #0	; 0x0
        217d4c:	eb64e6cb 	bl	1b51880 <$Line__FlT1>
        217d50:	e3a00008 	mov	r0, #8	; 0x8
        217d54:	eb64eaf1 	bl	1b52920 <$PenMode(long)>
        217d58:	e289300a 	add	r3, r9, #10	; 0xa
        217d5c:	e92d0008 	stmdb	sp!, {r3}
        217d60:	e285300a 	add	r3, r5, #10	; 0xa
        217d64:	e2492009 	sub	r2, r9, #9	; 0x9
        217d68:	e2451009 	sub	r1, r5, #9	; 0x9
        217d6c:	e28d0028 	add	r0, sp, #40	; 0x28
        217d70:	eb64f325 	bl	1b54a0c <$SetRect__FP4RectlN32>
        217d74:	e28dd004 	add	sp, sp, #4	; 0x4
        217d78:	e59f90dc 	ldr	r9, [pc, #dc]	; 217e5c <TInker::GetRawPoint(unsigned long *, unsigned long *, short, short, unsigned long)+0x298>
        217d7c:	e3a050fe 	mov	r5, #254	; 0xfe
        217d80:	e2855c47 	add	r5, r5, #18176	; 0x4700
        217d84:	e24dd008 	sub	sp, sp, #8	; 0x8
        217d88:	e3360000 	teq	r6, #0	; 0x0
        217d8c:	1a000007 	bne	217db0 <TInker::GetRawPoint(unsigned long *, unsigned long *, short, short, unsigned long)+0x1ec>
        217d90:	e3a00000 	mov	r0, #0	; 0x0
        217d94:	e28d1038 	add	r1, sp, #56	; 0x38
        217d98:	e781a100 	str	sl, [r1, r0, lsl #2]
        217d9c:	e28d1088 	add	r1, sp, #136	; 0x88
        217da0:	e781a100 	str	sl, [r1, r0, lsl #2]
        217da4:	e2800001 	add	r0, r0, #1	; 0x1
        217da8:	e3500014 	cmp	r0, #20	; 0x14
        217dac:	3afffff8 	bcc	217d94 <TInker::GetRawPoint(unsigned long *, unsigned long *, short, short, unsigned long)+0x1d0>
        217db0:	e28d3034 	add	r3, sp, #52	; 0x34
        217db4:	e1a0100d 	mov	r1, sp
        217db8:	e28d0004 	add	r0, sp, #4	; 0x4
        217dbc:	e3a02000 	mov	r2, #0	; 0x0
        217dc0:	eb634e06 	bl	1aeb5e0 <$PollTablet__FPlT1PUlPUc>
        217dc4:	e3300000 	teq	r0, #0	; 0x0
        217dc8:	1a000027 	bne	217e6c <TInker::GetRawPoint(unsigned long *, unsigned long *, short, short, unsigned long)+0x2a8>
        217dcc:	e5dd0034 	ldrb	r0, [sp, #52]
        217dd0:	e3300000 	teq	r0, #0	; 0x0
        217dd4:	0a000001 	beq	217de0 <TInker::GetRawPoint(unsigned long *, unsigned long *, short, short, unsigned long)+0x21c>
        217dd8:	e3560014 	cmp	r6, #20	; 0x14
        217ddc:	3a000019 	bcc	217e48 <TInker::GetRawPoint(unsigned long *, unsigned long *, short, short, unsigned long)+0x284>
        217de0:	e3560014 	cmp	r6, #20	; 0x14
        217de4:	2a000053 	bcs	217f38 <TInker::GetRawPoint(unsigned long *, unsigned long *, short, short, unsigned long)+0x374>
        217de8:	e59d0004 	ldr	r0, [sp, #4]
        217dec:	e1a036c0 	mov	r3, r0, asr #13
        217df0:	e1a02006 	mov	r2, r6
        217df4:	e28d1088 	add	r1, sp, #136	; 0x88
        217df8:	e1a00004 	mov	r0, r4
        217dfc:	eb634df2 	bl	1aeb5cc <TInker::$InsertionSort(unsigned long *, unsigned long, unsigned long)>
        217e00:	e59d0000 	ldr	r0, [sp]
        217e04:	e1a036c0 	mov	r3, r0, asr #13
        217e08:	e1a02006 	mov	r2, r6
        217e0c:	e28d1038 	add	r1, sp, #56	; 0x38
        217e10:	e1a00004 	mov	r0, r4
        217e14:	eb634dec 	bl	1aeb5cc <TInker::$InsertionSort(unsigned long *, unsigned long, unsigned long)>
        217e18:	e2866001 	add	r6, r6, #1	; 0x1
        217e1c:	e3360014 	teq	r6, #20	; 0x14
        217e20:	1a000044 	bne	217f38 <TInker::GetRawPoint(unsigned long *, unsigned long *, short, short, unsigned long)+0x374>
        217e24:	e59d0088 	ldr	r0, [sp, #136]	; fField136
        217e28:	e59d10d4 	ldr	r1, [sp, #212]	; fField212
        217e2c:	e0410000 	sub	r0, r1, r0
        217e30:	e3500018 	cmp	r0, #24	; 0x18
        217e34:	959d0038 	ldrls	r0, [sp, #56]
        217e38:	959d1084 	ldrls	r1, [sp, #132]	; fField132
        217e3c:	90410000 	subls	r0, r1, r0
        217e40:	93500018 	cmpls	r0, #24	; 0x18
        217e44:	9a000005 	bls	217e60 <TInker::GetRawPoint(unsigned long *, unsigned long *, short, short, unsigned long)+0x29c>
        217e48:	e3a06000 	mov	r6, #0	; 0x0
        217e4c:	ea000039 	b	217f38 <TInker::GetRawPoint(unsigned long *, unsigned long *, short, short, unsigned long)+0x374>
        217e50:	006817a8 	rsbeq	r1, r8, r8, lsr #15
        217e54:	0067fac8 	rsbeq	pc, r7, r8, asr #21
        217e58:	00682190 	streqb	r2, [r8], -#16
        217e5c:	ffffd8db 	swinv	0x00ffd8db
        217e60:	e28d002c 	add	r0, sp, #44	; 0x2c
        217e64:	eb64e27e 	bl	1b50864 <$InvertRect(Rect *)>
        217e68:	ea000032 	b	217f38 <TInker::GetRawPoint(unsigned long *, unsigned long *, short, short, unsigned long)+0x374>
        217e6c:	eb634dcd 	bl	1aeb5a8 <$GetTabletState(void)>
        217e70:	e3300000 	teq	r0, #0	; 0x0
        217e74:	1a00002f 	bne	217f38 <TInker::GetRawPoint(unsigned long *, unsigned long *, short, short, unsigned long)+0x374>
        217e78:	e3a03000 	mov	r3, #0	; 0x0
        217e7c:	e3a02000 	mov	r2, #0	; 0x0
        217e80:	e3a01003 	mov	r1, #3	; 0x3
        217e84:	e3a009e1 	mov	r0, #3686400	; 0x384000
        217e88:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        217e8c:	e28d3038 	add	r3, sp, #56	; 0x38
        217e90:	e28d2028 	add	r2, sp, #40	; 0x28
        217e94:	e92d000c 	stmdb	sp!, {r2, r3}
        217e98:	e1a00004 	mov	r0, r4
        217e9c:	eb674166 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        217ea0:	e3a03000 	mov	r3, #0	; 0x0
        217ea4:	e3a02000 	mov	r2, #0	; 0x0
        217ea8:	e3a01000 	mov	r1, #0	; 0x0
        217eac:	eb670361 	bl	1bd8c38 <TUPort::$Receive(unsigned long *, void *, unsigned long, TUMsgToken *, unsigned long *, unsigned long, unsigned long, unsigned char, unsigned char)>
        217eb0:	e28dd018 	add	sp, sp, #24	; 0x18
        217eb4:	e1300009 	teq	r0, r9
        217eb8:	1a000010 	bne	217f00 <TInker::GetRawPoint(unsigned long *, unsigned long *, short, short, unsigned long)+0x33c>
        217ebc:	e28779e1 	add	r7, r7, #3686400	; 0x384000
        217ec0:	e3380000 	teq	r8, #0	; 0x0
        217ec4:	0a000002 	beq	217ed4 <TInker::GetRawPoint(unsigned long *, unsigned long *, short, short, unsigned long)+0x310>
        217ec8:	e1570008 	cmp	r7, r8
        217ecc:	859f4018 	ldrhi	r4, [pc, #18]	; 217eec <TInker::GetRawPoint(unsigned long *, unsigned long *, short, short, unsigned long)+0x328>
        217ed0:	8a000014 	bhi	217f28 <TInker::GetRawPoint(unsigned long *, unsigned long *, short, short, unsigned long)+0x364>
        217ed4:	e28d1008 	add	r1, sp, #8	; 0x8
        217ed8:	e28d0014 	add	r0, sp, #20	; 0x14
        217edc:	e3a03002 	mov	r3, #2	; 0x2
        217ee0:	e3a02000 	mov	r2, #0	; 0x0
        217ee4:	eb61ea8e 	bl	1a92924 <$DrawPicture(RefVar const &, TRect const &, unsigned long, long)>
        217ee8:	ea000012 	b	217f38 <TInker::GetRawPoint(unsigned long *, unsigned long *, short, short, unsigned long)+0x374>
        217eec:	ffff24db 	swinv	0x00ff24db
        217ef0:	e59d0014 	ldr	r0, [sp, #20]
        217ef4:	eb66acb0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        217ef8:	e1a00004 	mov	r0, r4
        217efc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        217f00:	e59d0028 	ldr	r0, [sp, #40]
        217f04:	e3100002 	tst	r0, #2	; 0x2
        217f08:	0a000009 	beq	217f34 <TInker::GetRawPoint(unsigned long *, unsigned long *, short, short, unsigned long)+0x370>
        217f0c:	e28d0018 	add	r0, sp, #24	; 0x18
        217f10:	e3a03000 	mov	r3, #0	; 0x0
        217f14:	e3a02000 	mov	r2, #0	; 0x0
        217f18:	e3a01000 	mov	r1, #0	; 0x0
        217f1c:	eb670772 	bl	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
        217f20:	e3a040da 	mov	r4, #218	; 0xda
        217f24:	e2444b37 	sub	r4, r4, #56320	; 0xdc00
        217f28:	e59d0010 	ldr	r0, [sp, #16]
        217f2c:	eb66aca2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        217f30:	eaffffee 	b	217ef0 <TInker::GetRawPoint(unsigned long *, unsigned long *, short, short, unsigned long)+0x32c>
        217f34:	e3a07000 	mov	r7, #0	; 0x0
        217f38:	e1a00005 	mov	r0, r5
        217f3c:	eb6713ba 	bl	1bdce2c <$Sleep(unsigned long)>
        217f40:	e28dd008 	add	sp, sp, #8	; 0x8
        217f44:	e3560014 	cmp	r6, #20	; 0x14
        217f48:	3affff8d 	bcc	217d84 <TInker::GetRawPoint(unsigned long *, unsigned long *, short, short, unsigned long)+0x1c0>
        217f4c:	e5dd002c 	ldrb	r0, [sp, #44]
        217f50:	e3300000 	teq	r0, #0	; 0x0
        217f54:	0affff8a 	beq	217d84 <TInker::GetRawPoint(unsigned long *, unsigned long *, short, short, unsigned long)+0x1c0>
        217f58:	e59d00a8 	ldr	r0, [sp, #168]
        217f5c:	e1a000a0 	mov	r0, r0, lsr #1
        217f60:	e59d10a4 	ldr	r1, [sp, #164]
        217f64:	e0800121 	add	r0, r0, r1, lsr #2
        217f68:	e59d10ac 	ldr	r1, [sp, #172]
        217f6c:	e0800121 	add	r0, r0, r1, lsr #2
        217f70:	e59b1008 	ldr	r1, [fp, #8]
        217f74:	e5810000 	str	r0, [r1]
        217f78:	e59d0058 	ldr	r0, [sp, #88]
        217f7c:	e1a010a0 	mov	r1, r0, lsr #1
        217f80:	e59d0054 	ldr	r0, [sp, #84]
        217f84:	e0811120 	add	r1, r1, r0, lsr #2
        217f88:	e59d005c 	ldr	r0, [sp, #92]
        217f8c:	e0810120 	add	r0, r1, r0, lsr #2
        217f90:	e59b200c 	ldr	r2, [fp, #12]
        217f94:	e5820000 	str	r0, [r2]
        217f98:	e59d0008 	ldr	r0, [sp, #8]
        217f9c:	eb66ac86 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        217fa0:	e59d000c 	ldr	r0, [sp, #12]
        217fa4:	eb66ac84 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        217fa8:	e1a0000a 	mov	r0, sl
        217fac:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TInker::Calibrate(unsigned long)
 * Address: 002180a0
 */
TInker::Calibrate(unsigned long) {
    /*
        2180a0:	e1a0c00d 	mov	ip, sp
        2180a4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2180a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2180ac:	e1a04000 	mov	r4, r0
        2180b0:	e1a05001 	mov	r5, r1
        2180b4:	e24dd02c 	sub	sp, sp, #44	; 0x2c
        2180b8:	e59f0540 	ldr	r0, [pc, #540]	; 218600 <TInker::Calibrate(unsigned long)+0x560>
        2180bc:	e58d0028 	str	r0, [sp, #40]
        2180c0:	e5d00008 	ldrb	r0, [r0, #8]
        2180c4:	e3300000 	teq	r0, #0	; 0x0
        2180c8:	159f0534 	ldrne	r0, [pc, #534]	; 218604 <TInker::Calibrate(unsigned long)+0x564>
        2180cc:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2180d0:	e24ddf57 	sub	sp, sp, #348	; 0x15c
        2180d4:	e28d0f46 	add	r0, sp, #280	; 0x118
        2180d8:	e59f1528 	ldr	r1, [pc, #528]	; 218608 <TInker::Calibrate(unsigned long)+0x568>
        2180dc:	eb66d568 	bl	1bcd684 <TSystemEvent::$__ct(unsigned long)>
        2180e0:	e59f0524 	ldr	r0, [pc, #524]	; 21860c <TInker::Calibrate(unsigned long)+0x56c>
        2180e4:	e5900000 	ldr	r0, [r0]
        2180e8:	e5900000 	ldr	r0, [r0]
        2180ec:	eb66a816 	bl	1bc214c <$AllocateRefHandle(long)>
        2180f0:	e3a0280a 	mov	r2, #655360	; 0xa0000
        2180f4:	e58d010c 	str	r0, [sp, #268]
        2180f8:	e28d1f43 	add	r1, sp, #268	; 0x10c
        2180fc:	e1a0000d 	mov	r0, sp
        218100:	e3a03001 	mov	r3, #1	; 0x1
        218104:	eb64e5e2 	bl	1b51894 <$MakeSimpleStyle__FRC6RefVarlT2>
        218108:	e59d0000 	ldr	r0, [sp]
        21810c:	e5900000 	ldr	r0, [r0]
        218110:	eb66a80d 	bl	1bc214c <$AllocateRefHandle(long)>
        218114:	e3a07000 	mov	r7, #0	; 0x0
        218118:	e58d00ec 	str	r0, [sp, #236]
        21811c:	e5a07004 	str	r7, [r0, #4]!
        218120:	e28d00f0 	add	r0, sp, #240	; 0xf0
        218124:	e28de004 	add	lr, sp, #4	; 0x4
        218128:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        21812c:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        218130:	e89e100c 	ldmia	lr, {r2, r3, ip}
        218134:	e880100c 	stmia	r0, {r2, r3, ip}
        218138:	e59d001c 	ldr	r0, [sp, #28]
        21813c:	e3300000 	teq	r0, #0	; 0x0
        218140:	159d001c 	ldrne	r0, [sp, #28]
        218144:	1b64d564 	blne	1b4d6dc <$DisposePattern(PixelMap **)>
        218148:	e59d0000 	ldr	r0, [sp]
        21814c:	eb66ac1a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        218150:	e28d00ec 	add	r0, sp, #236	; 0xec
        218154:	e58d00e8 	str	r0, [sp, #232]
        218158:	e1a00004 	mov	r0, r4
        21815c:	eb6740b6 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        218160:	e5901000 	ldr	r1, [r0]
        218164:	e28d0f46 	add	r0, sp, #280	; 0x118
        218168:	e3a03000 	mov	r3, #0	; 0x0
        21816c:	e3a02002 	mov	r2, #2	; 0x2
        218170:	eb6702bb 	bl	1bd8c64 <TSystemEvent::$RegisterForSystemEvent(unsigned long, unsigned long, unsigned long)>
        218174:	e28d1e11 	add	r1, sp, #272	; 0x110
        218178:	e3a00001 	mov	r0, #1	; 0x1
        21817c:	eb634d1e 	bl	1aeb5fc <$SetDoingCalibration(unsigned char, unsigned long *)>
        218180:	eb634d02 	bl	1aeb590 <$GetTabletPolling(void)>
        218184:	e58d0114 	str	r0, [sp, #276]
        218188:	e3a00001 	mov	r0, #1	; 0x1
        21818c:	eb635127 	bl	1aec630 <$SetTabletPolling(unsigned char)>
        218190:	e28d0f4e 	add	r0, sp, #312	; 0x138
        218194:	eb675d82 	bl	1bef7a4 <$GetPort(GrafPort **)>
        218198:	e24dd010 	sub	sp, sp, #16	; 0x10
        21819c:	e1a0100d 	mov	r1, sp
        2181a0:	e28d00fc 	add	r0, sp, #252	; 0xfc
        2181a4:	eb64dd8e 	bl	1b4f7e4 <$GetStyleFontInfo(StyleRecord *, FontInfo *)>
        2181a8:	e89d0003 	ldmia	sp, {r0, r1}
        2181ac:	e0811000 	add	r1, r1, r0
        2181b0:	e59d000c 	ldr	r0, [sp, #12]
        2181b4:	e0810000 	add	r0, r1, r0
        2181b8:	e1a06800 	mov	r6, r0, lsl #16
        2181bc:	eb64cd05 	bl	1b4b5d8 <$ReleaseScreenLock(void)>
        2181c0:	e59f0448 	ldr	r0, [pc, #448]	; 218610 <TInker::Calibrate(unsigned long)+0x570>
        2181c4:	e58d0190 	str	r0, [sp, #400]
        2181c8:	e59f0444 	ldr	r0, [pc, #444]	; 218614 <TInker::Calibrate(unsigned long)+0x574>
        2181cc:	e58d018c 	str	r0, [sp, #396]
        2181d0:	e59f0440 	ldr	r0, [pc, #440]	; 218618 <TInker::Calibrate(unsigned long)+0x578>
        2181d4:	e58d0188 	str	r0, [sp, #392]
        2181d8:	e59f043c 	ldr	r0, [pc, #43c]	; 21861c <TInker::Calibrate(unsigned long)+0x57c>
        2181dc:	e58d0184 	str	r0, [sp, #388]
        2181e0:	e59f0438 	ldr	r0, [pc, #438]	; 218620 <TInker::Calibrate(unsigned long)+0x580>
        2181e4:	e58d0180 	str	r0, [sp, #384]
        2181e8:	e59f0434 	ldr	r0, [pc, #434]	; 218624 <TInker::Calibrate(unsigned long)+0x584>
        2181ec:	e58d017c 	str	r0, [sp, #380]
        2181f0:	e59f0430 	ldr	r0, [pc, #430]	; 218628 <TInker::Calibrate(unsigned long)+0x588>
        2181f4:	e58d0178 	str	r0, [sp, #376]
        2181f8:	e59f942c 	ldr	r9, [pc, #42c]	; 21862c <TInker::Calibrate(unsigned long)+0x58c>
        2181fc:	e59f042c 	ldr	r0, [pc, #42c]	; 218630 <TInker::Calibrate(unsigned long)+0x590>
        218200:	e58d0174 	str	r0, [sp, #372]
        218204:	e59f0428 	ldr	r0, [pc, #428]	; 218634 <TInker::Calibrate(unsigned long)+0x594>
        218208:	e58d0170 	str	r0, [sp, #368]
        21820c:	e59f0424 	ldr	r0, [pc, #424]	; 218638 <TInker::Calibrate(unsigned long)+0x598>
        218210:	e58d016c 	str	r0, [sp, #364]
        218214:	e24dd00c 	sub	sp, sp, #12	; 0xc
        218218:	e59f041c 	ldr	r0, [pc, #41c]	; 21863c <TInker::Calibrate(unsigned long)+0x59c>
        21821c:	e5900000 	ldr	r0, [r0]
        218220:	e5901000 	ldr	r1, [r0]
        218224:	e59f0400 	ldr	r0, [pc, #400]	; 21862c <TInker::Calibrate(unsigned long)+0x58c>
        218228:	e5900000 	ldr	r0, [r0]
        21822c:	e5900000 	ldr	r0, [r0]
        218230:	eb66b00a 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        218234:	eb66a7c4 	bl	1bc214c <$AllocateRefHandle(long)>
        218238:	e58d0008 	str	r0, [sp, #8]
        21823c:	e1a0100d 	mov	r1, sp
        218240:	e28d0008 	add	r0, sp, #8	; 0x8
        218244:	eb61f20b 	bl	1a94a78 <$FromObject(RefVar const &, TRect &)>
        218248:	e59d1154 	ldr	r1, [sp, #340]
        21824c:	e591001e 	ldr	r0, [r1, #30]
        218250:	e1a00820 	mov	r0, r0, lsr #16
        218254:	e280000a 	add	r0, r0, #10	; 0xa
        218258:	e5cd0177 	strb	r0, [sp, #375]
        21825c:	e1a00440 	mov	r0, r0, asr #8
        218260:	e5cd0176 	strb	r0, [sp, #374]
        218264:	e591001c 	ldr	r0, [r1, #28]
        218268:	e1a00820 	mov	r0, r0, lsr #16
        21826c:	e280000a 	add	r0, r0, #10	; 0xa
        218270:	e5cd0175 	strb	r0, [sp, #373]
        218274:	e1a00440 	mov	r0, r0, asr #8
        218278:	e5cd0174 	strb	r0, [sp, #372]
        21827c:	e5910022 	ldr	r0, [r1, #34]
        218280:	e1a00820 	mov	r0, r0, lsr #16
        218284:	e240000a 	sub	r0, r0, #10	; 0xa
        218288:	e5cd0173 	strb	r0, [sp, #371]
        21828c:	e1a00440 	mov	r0, r0, asr #8
        218290:	e5cd0172 	strb	r0, [sp, #370]
        218294:	e5910020 	ldr	r0, [r1, #32]
        218298:	e1a00820 	mov	r0, r0, lsr #16
        21829c:	e240000a 	sub	r0, r0, #10	; 0xa
        2182a0:	e5cd0171 	strb	r0, [sp, #369]
        2182a4:	e1a00440 	mov	r0, r0, asr #8
        2182a8:	e5cd0170 	strb	r0, [sp, #368]
        2182ac:	e5910020 	ldr	r0, [r1, #32]
        2182b0:	e591701c 	ldr	r7, [r1, #28]
        2182b4:	e1a07847 	mov	r7, r7, asr #16
        2182b8:	e0670840 	rsb	r0, r7, r0, asr #16
        2182bc:	e0601200 	rsb	r1, r0, r0, lsl #4
        2182c0:	e0811081 	add	r1, r1, r1, lsl #1
        2182c4:	e3a00064 	mov	r0, #100	; 0x64
        2182c8:	eb66699c 	bl	1bb2940 <$__rt_sdiv>
        2182cc:	e0800007 	add	r0, r0, r7
        2182d0:	e5cd0169 	strb	r0, [sp, #361]
        2182d4:	e1a00440 	mov	r0, r0, asr #8
        2182d8:	e5cd0168 	strb	r0, [sp, #360]
        2182dc:	e3a00008 	mov	r0, #8	; 0x8
        2182e0:	e5cd016b 	strb	r0, [sp, #363]
        2182e4:	e3a00000 	mov	r0, #0	; 0x0
        2182e8:	e5cd016a 	strb	r0, [sp, #362]
        2182ec:	e59d016a 	ldr	r0, [sp, #362]
        2182f0:	e1a00840 	mov	r0, r0, asr #16
        2182f4:	e2401001 	sub	r1, r0, #1	; 0x1
        2182f8:	e59d2004 	ldr	r2, [sp, #4]
        2182fc:	e1a02842 	mov	r2, r2, asr #16
        218300:	e59d0000 	ldr	r0, [sp]
        218304:	e0422840 	sub	r2, r2, r0, asr #16
        218308:	e59d0168 	ldr	r0, [sp, #360]
        21830c:	e0622840 	rsb	r2, r2, r0, asr #16
        218310:	e1a0000d 	mov	r0, sp
        218314:	eb64e573 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        218318:	e59d0154 	ldr	r0, [sp, #340]
        21831c:	e280001c 	add	r0, r0, #28	; 0x1c
        218320:	eb64d909 	bl	1b4e74c <$EraseRect(Rect *)>
        218324:	e1a0100d 	mov	r1, sp
        218328:	e1a00009 	mov	r0, r9
        21832c:	e3a03001 	mov	r3, #1	; 0x1
        218330:	e3a02000 	mov	r2, #0	; 0x0
        218334:	eb61e97a 	bl	1a92924 <$DrawPicture(RefVar const &, TRect const &, unsigned long, long)>
        218338:	e59d0168 	ldr	r0, [sp, #360]
        21833c:	e1a07800 	mov	r7, r0, lsl #16
        218340:	e59d016a 	ldr	r0, [sp, #362]
        218344:	e0868800 	add	r8, r6, r0, lsl #16
        218348:	e28d103c 	add	r1, sp, #60	; 0x3c
        21834c:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
        218350:	e3a02001 	mov	r2, #1	; 0x1
        218354:	e59d019c 	ldr	r0, [sp, #412]
        218358:	eb673c09 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
        21835c:	e3a03000 	mov	r3, #0	; 0x0
        218360:	e3a02000 	mov	r2, #0	; 0x0
        218364:	e92d000c 	stmdb	sp!, {r2, r3}
        218368:	e24dd008 	sub	sp, sp, #8	; 0x8
        21836c:	e88d0180 	stmia	sp, {r7, r8}
        218370:	e28d004c 	add	r0, sp, #76	; 0x4c
        218374:	eb6758f9 	bl	1bee760 <$Ustrlen>
        218378:	e1a01000 	mov	r1, r0
        21837c:	e28d2f45 	add	r2, sp, #276	; 0x114
        218380:	e28d004c 	add	r0, sp, #76	; 0x4c
        218384:	e3a03000 	mov	r3, #0	; 0x0
        218388:	eb64d8e1 	bl	1b4e714 <$DrawTextOnce(void *, long, StyleRecord **, short *, FPoint, TextOptions *, TextBoundsInfo *)>
        21838c:	e28dd010 	add	sp, sp, #16	; 0x10
        218390:	e0888006 	add	r8, r8, r6
        218394:	e28d103c 	add	r1, sp, #60	; 0x3c
        218398:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
        21839c:	e3a02001 	mov	r2, #1	; 0x1
        2183a0:	e59d0198 	ldr	r0, [sp, #408]
        2183a4:	eb673bf6 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
        2183a8:	e3a03000 	mov	r3, #0	; 0x0
        2183ac:	e3a02000 	mov	r2, #0	; 0x0
        2183b0:	e92d000c 	stmdb	sp!, {r2, r3}
        2183b4:	e24dd008 	sub	sp, sp, #8	; 0x8
        2183b8:	e88d0180 	stmia	sp, {r7, r8}
        2183bc:	e28d004c 	add	r0, sp, #76	; 0x4c
        2183c0:	eb6758e6 	bl	1bee760 <$Ustrlen>
        2183c4:	e1a01000 	mov	r1, r0
        2183c8:	e28d2f45 	add	r2, sp, #276	; 0x114
        2183cc:	e28d004c 	add	r0, sp, #76	; 0x4c
        2183d0:	e3a03000 	mov	r3, #0	; 0x0
        2183d4:	eb64d8ce 	bl	1b4e714 <$DrawTextOnce(void *, long, StyleRecord **, short *, FPoint, TextOptions *, TextBoundsInfo *)>
        2183d8:	e28dd010 	add	sp, sp, #16	; 0x10
        2183dc:	e0888006 	add	r8, r8, r6
        2183e0:	e28d103c 	add	r1, sp, #60	; 0x3c
        2183e4:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
        2183e8:	e3a02001 	mov	r2, #1	; 0x1
        2183ec:	e59d0194 	ldr	r0, [sp, #404]
        2183f0:	eb673be3 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
        2183f4:	e3a03000 	mov	r3, #0	; 0x0
        2183f8:	e3a02000 	mov	r2, #0	; 0x0
        2183fc:	e92d000c 	stmdb	sp!, {r2, r3}
        218400:	e24dd008 	sub	sp, sp, #8	; 0x8
        218404:	e88d0180 	stmia	sp, {r7, r8}
        218408:	e28d004c 	add	r0, sp, #76	; 0x4c
        21840c:	eb6758d3 	bl	1bee760 <$Ustrlen>
        218410:	e1a01000 	mov	r1, r0
        218414:	e28d2f45 	add	r2, sp, #276	; 0x114
        218418:	e28d004c 	add	r0, sp, #76	; 0x4c
        21841c:	e3a03000 	mov	r3, #0	; 0x0
        218420:	eb64d8bb 	bl	1b4e714 <$DrawTextOnce(void *, long, StyleRecord **, short *, FPoint, TextOptions *, TextBoundsInfo *)>
        218424:	e28dd010 	add	sp, sp, #16	; 0x10
        218428:	e0888006 	add	r8, r8, r6
        21842c:	e28d103c 	add	r1, sp, #60	; 0x3c
        218430:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
        218434:	e3a02001 	mov	r2, #1	; 0x1
        218438:	e59d0190 	ldr	r0, [sp, #400]
        21843c:	eb673bd0 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
        218440:	e3a03000 	mov	r3, #0	; 0x0
        218444:	e3a02000 	mov	r2, #0	; 0x0
        218448:	e92d000c 	stmdb	sp!, {r2, r3}
        21844c:	e24dd008 	sub	sp, sp, #8	; 0x8
        218450:	e88d0180 	stmia	sp, {r7, r8}
        218454:	e28d004c 	add	r0, sp, #76	; 0x4c
        218458:	eb6758c0 	bl	1bee760 <$Ustrlen>
        21845c:	e1a01000 	mov	r1, r0
        218460:	e28d2f45 	add	r2, sp, #276	; 0x114
        218464:	e28d004c 	add	r0, sp, #76	; 0x4c
        218468:	e3a03000 	mov	r3, #0	; 0x0
        21846c:	eb64d8a8 	bl	1b4e714 <$DrawTextOnce(void *, long, StyleRecord **, short *, FPoint, TextOptions *, TextBoundsInfo *)>
        218470:	e28dd010 	add	sp, sp, #16	; 0x10
        218474:	e0888006 	add	r8, r8, r6
        218478:	e28d103c 	add	r1, sp, #60	; 0x3c
        21847c:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
        218480:	e3a02001 	mov	r2, #1	; 0x1
        218484:	e59d018c 	ldr	r0, [sp, #396]
        218488:	eb673bbd 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
        21848c:	e3a03000 	mov	r3, #0	; 0x0
        218490:	e3a02000 	mov	r2, #0	; 0x0
        218494:	e92d000c 	stmdb	sp!, {r2, r3}
        218498:	e24dd008 	sub	sp, sp, #8	; 0x8
        21849c:	e88d0180 	stmia	sp, {r7, r8}
        2184a0:	e28d004c 	add	r0, sp, #76	; 0x4c
        2184a4:	eb6758ad 	bl	1bee760 <$Ustrlen>
        2184a8:	e1a01000 	mov	r1, r0
        2184ac:	e28d2f45 	add	r2, sp, #276	; 0x114
        2184b0:	e28d004c 	add	r0, sp, #76	; 0x4c
        2184b4:	e3a03000 	mov	r3, #0	; 0x0
        2184b8:	eb64d895 	bl	1b4e714 <$DrawTextOnce(void *, long, StyleRecord **, short *, FPoint, TextOptions *, TextBoundsInfo *)>
        2184bc:	e28dd010 	add	sp, sp, #16	; 0x10
        2184c0:	e1a03005 	mov	r3, r5
        2184c4:	e59d2174 	ldr	r2, [sp, #372]
        2184c8:	e1a02842 	mov	r2, r2, asr #16
        2184cc:	e92d000c 	stmdb	sp!, {r2, r3}
        2184d0:	e59d317e 	ldr	r3, [sp, #382]
        2184d4:	e1a03843 	mov	r3, r3, asr #16
        2184d8:	e28d2f5a 	add	r2, sp, #360	; 0x168
        2184dc:	e28d1f5b 	add	r1, sp, #364	; 0x16c
        2184e0:	e1a00004 	mov	r0, r4
        2184e4:	eb634808 	bl	1aea50c <TInker::$GetRawPoint(unsigned long *, unsigned long *, short, short, unsigned long)>
        2184e8:	e28dd008 	add	sp, sp, #8	; 0x8
        2184ec:	e1b08000 	movs	r8, r0
        2184f0:	1a00003e 	bne	2185f0 <TInker::Calibrate(unsigned long)+0x550>
        2184f4:	eb63481a 	bl	1aea564 <$FlushTabletBuffer(void)>
        2184f8:	e59d0154 	ldr	r0, [sp, #340]
        2184fc:	e280001c 	add	r0, r0, #28	; 0x1c
        218500:	eb64d891 	bl	1b4e74c <$EraseRect(Rect *)>
        218504:	e1a0100d 	mov	r1, sp
        218508:	e1a00009 	mov	r0, r9
        21850c:	e3a03001 	mov	r3, #1	; 0x1
        218510:	e3a02000 	mov	r2, #0	; 0x0
        218514:	eb61e902 	bl	1a92924 <$DrawPicture(RefVar const &, TRect const &, unsigned long, long)>
        218518:	e59d0168 	ldr	r0, [sp, #360]
        21851c:	e1a07800 	mov	r7, r0, lsl #16
        218520:	e59d016a 	ldr	r0, [sp, #362]
        218524:	e0868800 	add	r8, r6, r0, lsl #16
        218528:	e28d103c 	add	r1, sp, #60	; 0x3c
        21852c:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
        218530:	e3a02001 	mov	r2, #1	; 0x1
        218534:	e59d0188 	ldr	r0, [sp, #392]
        218538:	eb673b91 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
        21853c:	e3a03000 	mov	r3, #0	; 0x0
        218540:	e3a02000 	mov	r2, #0	; 0x0
        218544:	e92d000c 	stmdb	sp!, {r2, r3}
        218548:	e24dd008 	sub	sp, sp, #8	; 0x8
        21854c:	e88d0180 	stmia	sp, {r7, r8}
        218550:	e28d004c 	add	r0, sp, #76	; 0x4c
        218554:	eb675881 	bl	1bee760 <$Ustrlen>
        218558:	e1a01000 	mov	r1, r0
        21855c:	e28d2f45 	add	r2, sp, #276	; 0x114
        218560:	e28d004c 	add	r0, sp, #76	; 0x4c
        218564:	e3a03000 	mov	r3, #0	; 0x0
        218568:	eb64d869 	bl	1b4e714 <$DrawTextOnce(void *, long, StyleRecord **, short *, FPoint, TextOptions *, TextBoundsInfo *)>
        21856c:	e28dd010 	add	sp, sp, #16	; 0x10
        218570:	e0888006 	add	r8, r8, r6
        218574:	e28d103c 	add	r1, sp, #60	; 0x3c
        218578:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
        21857c:	e3a02001 	mov	r2, #1	; 0x1
        218580:	e59d0184 	ldr	r0, [sp, #388]
        218584:	eb673b7e 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
        218588:	e3a03000 	mov	r3, #0	; 0x0
        21858c:	e3a02000 	mov	r2, #0	; 0x0
        218590:	e92d000c 	stmdb	sp!, {r2, r3}
        218594:	e24dd008 	sub	sp, sp, #8	; 0x8
        218598:	e88d0180 	stmia	sp, {r7, r8}
        21859c:	e28d004c 	add	r0, sp, #76	; 0x4c
        2185a0:	eb67586e 	bl	1bee760 <$Ustrlen>
        2185a4:	e1a01000 	mov	r1, r0
        2185a8:	e28d2f45 	add	r2, sp, #276	; 0x114
        2185ac:	e28d004c 	add	r0, sp, #76	; 0x4c
        2185b0:	e3a03000 	mov	r3, #0	; 0x0
        2185b4:	eb64d856 	bl	1b4e714 <$DrawTextOnce(void *, long, StyleRecord **, short *, FPoint, TextOptions *, TextBoundsInfo *)>
        2185b8:	e28dd010 	add	sp, sp, #16	; 0x10
        2185bc:	e1a03005 	mov	r3, r5
        2185c0:	e59d2170 	ldr	r2, [sp, #368]
        2185c4:	e1a02842 	mov	r2, r2, asr #16
        2185c8:	e92d000c 	stmdb	sp!, {r2, r3}
        2185cc:	e59d317a 	ldr	r3, [sp, #378]
        2185d0:	e1a03843 	mov	r3, r3, asr #16
        2185d4:	e28d2e16 	add	r2, sp, #352	; 0x160
        2185d8:	e28d1f59 	add	r1, sp, #356	; 0x164
        2185dc:	e1a00004 	mov	r0, r4
        2185e0:	eb6347c9 	bl	1aea50c <TInker::$GetRawPoint(unsigned long *, unsigned long *, short, short, unsigned long)>
        2185e4:	e28dd008 	add	sp, sp, #8	; 0x8
        2185e8:	e1b08000 	movs	r8, r0
        2185ec:	0a000013 	beq	218640 <TInker::Calibrate(unsigned long)+0x5a0>
        2185f0:	e59d0008 	ldr	r0, [sp, #8]
        2185f4:	eb66aaf0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2185f8:	e28dd00c 	add	sp, sp, #12	; 0xc
        2185fc:	ea000152 	b	218b4c <TInker::Calibrate(unsigned long)+0xaac>
        218600:	0c104d20 	ldceq	13, cr4, [r0], -#128	; fField128
        218604:	ffff24db 	swinv	0x00ff24db
        218608:	7070656e 	rsbvcs	r6, r0, lr, ror #10
        21860c:	00680ec8 	rsbeq	r0, r8, r8, asr #29
        218610:	0037a70c 	eoreqs	sl, r7, ip, lsl #14
        218614:	0037a738 	eoreqs	sl, r7, r8, lsr r7
        218618:	0037a760 	eoreqs	sl, r7, r0, ror #14
        21861c:	0037a784 	eoreqs	sl, r7, r4, lsl #15
        218620:	0037a7ac 	eoreqs	sl, r7, ip, lsr #15
        218624:	0037a7cc 	eoreqs	sl, r7, ip, asr #15
        218628:	0037a7f0 	ldreqsh	sl, [r7], -r0
        21862c:	0067fe48 	rsbeq	pc, r7, r8, asr #28
        218630:	0037a808 	eoreqs	sl, r7, r8, lsl #16
        218634:	0037a828 	eoreqs	sl, r7, r8, lsr #16
        218638:	0037a84c 	eoreqs	sl, r7, ip, asr #16
        21863c:	00682190 	streqb	r2, [r8], -#16
        218640:	eb6347c7 	bl	1aea564 <$FlushTabletBuffer(void)>
        218644:	e59d015c 	ldr	r0, [sp, #348]
        218648:	e59d1164 	ldr	r1, [sp, #356]
        21864c:	e1300001 	teq	r0, r1
        218650:	02800001 	addeq	r0, r0, #1	; 0x1
        218654:	058d015c 	streq	r0, [sp, #348]
        218658:	e59d0158 	ldr	r0, [sp, #344]
        21865c:	e59d1160 	ldr	r1, [sp, #352]
        218660:	e1300001 	teq	r0, r1
        218664:	02800001 	addeq	r0, r0, #1	; 0x1
        218668:	058d0158 	streq	r0, [sp, #344]
        21866c:	e24dd004 	sub	sp, sp, #4	; 0x4
        218670:	e1a0100d 	mov	r1, sp
        218674:	e3a00004 	mov	r0, #4	; 0x4
        218678:	eb676486 	bl	1bf1898 <$GetGrafInfo(long, void *)>
        21867c:	e59d0000 	ldr	r0, [sp]
        218680:	e59d1130 	ldr	r1, [sp, #304]
        218684:	e0507001 	subs	r7, r0, r1
        218688:	42877004 	addmi	r7, r7, #4	; 0x4
        21868c:	e3370002 	teq	r7, #2	; 0x2
        218690:	13370003 	teqne	r7, #3	; 0x3
        218694:	1a000003 	bne	2186a8 <TInker::Calibrate(unsigned long)+0x608>
        218698:	e59d0168 	ldr	r0, [sp, #360]
        21869c:	e59d1160 	ldr	r1, [sp, #352]
        2186a0:	e58d0160 	str	r0, [sp, #352]
        2186a4:	e58d1168 	str	r1, [sp, #360]
        2186a8:	e3370001 	teq	r7, #1	; 0x1
        2186ac:	13370002 	teqne	r7, #2	; 0x2
        2186b0:	1a000003 	bne	2186c4 <TInker::Calibrate(unsigned long)+0x624>
        2186b4:	e59d0164 	ldr	r0, [sp, #356]
        2186b8:	e59d115c 	ldr	r1, [sp, #348]
        2186bc:	e58d015c 	str	r0, [sp, #348]
        2186c0:	e58d1164 	str	r1, [sp, #356]
        2186c4:	e3370001 	teq	r7, #1	; 0x1
        2186c8:	13370003 	teqne	r7, #3	; 0x3
        2186cc:	1a00001a 	bne	21873c <TInker::Calibrate(unsigned long)+0x69c>
        2186d0:	e59d0176 	ldr	r0, [sp, #374]
        2186d4:	e59d117a 	ldr	r1, [sp, #378]
        2186d8:	e0400001 	sub	r0, r0, r1
        2186dc:	e1a01800 	mov	r1, r0, lsl #16
        2186e0:	e59d0160 	ldr	r0, [sp, #352]
        2186e4:	e59d8168 	ldr	r8, [sp, #360]
        2186e8:	e0400008 	sub	r0, r0, r8
        2186ec:	eb666893 	bl	1bb2940 <$__rt_sdiv>
        2186f0:	e58d0144 	str	r0, [sp, #324]
        2186f4:	e59d1174 	ldr	r1, [sp, #372]
        2186f8:	e59d0178 	ldr	r0, [sp, #376]
        2186fc:	e0410000 	sub	r0, r1, r0
        218700:	e1a01800 	mov	r1, r0, lsl #16
        218704:	e59d015c 	ldr	r0, [sp, #348]
        218708:	e59da164 	ldr	sl, [sp, #356]
        21870c:	e040000a 	sub	r0, r0, sl
        218710:	eb66688a 	bl	1bb2940 <$__rt_sdiv>
        218714:	e58d0148 	str	r0, [sp, #328]
        218718:	e59d0144 	ldr	r0, [sp, #324]
        21871c:	e0010890 	mul	r1, r0, r8
        218720:	e59d017a 	ldr	r0, [sp, #378]
        218724:	e0610800 	rsb	r0, r1, r0, lsl #16
        218728:	e58d014c 	str	r0, [sp, #332]
        21872c:	e59d0148 	ldr	r0, [sp, #328]
        218730:	e000009a 	mul	r0, sl, r0
        218734:	e59d1178 	ldr	r1, [sp, #376]
        218738:	ea000019 	b	2187a4 <TInker::Calibrate(unsigned long)+0x704>
        21873c:	e59d1174 	ldr	r1, [sp, #372]
        218740:	e59d0178 	ldr	r0, [sp, #376]
        218744:	e0410000 	sub	r0, r1, r0
        218748:	e1a01800 	mov	r1, r0, lsl #16
        21874c:	e59d0160 	ldr	r0, [sp, #352]
        218750:	e59d8168 	ldr	r8, [sp, #360]
        218754:	e0400008 	sub	r0, r0, r8
        218758:	eb666878 	bl	1bb2940 <$__rt_sdiv>
        21875c:	e58d0144 	str	r0, [sp, #324]
        218760:	e59d0176 	ldr	r0, [sp, #374]
        218764:	e59d117a 	ldr	r1, [sp, #378]
        218768:	e0400001 	sub	r0, r0, r1
        21876c:	e1a01800 	mov	r1, r0, lsl #16
        218770:	e59d015c 	ldr	r0, [sp, #348]
        218774:	e59da164 	ldr	sl, [sp, #356]
        218778:	e040000a 	sub	r0, r0, sl
        21877c:	eb66686f 	bl	1bb2940 <$__rt_sdiv>
        218780:	e58d0148 	str	r0, [sp, #328]
        218784:	e59d0144 	ldr	r0, [sp, #324]
        218788:	e0010890 	mul	r1, r0, r8
        21878c:	e59d0178 	ldr	r0, [sp, #376]
        218790:	e0610800 	rsb	r0, r1, r0, lsl #16
        218794:	e58d014c 	str	r0, [sp, #332]
        218798:	e59d0148 	ldr	r0, [sp, #328]
        21879c:	e000009a 	mul	r0, sl, r0
        2187a0:	e59d117a 	ldr	r1, [sp, #378]
        2187a4:	e0600801 	rsb	r0, r0, r1, lsl #16
        2187a8:	e58d0150 	str	r0, [sp, #336]
        2187ac:	e3a00001 	mov	r0, #1	; 0x1
        2187b0:	e5cd0154 	strb	r0, [sp, #340]
        2187b4:	e5cd0155 	strb	r0, [sp, #341]
        2187b8:	e59d0158 	ldr	r0, [sp, #344]
        2187bc:	e280001c 	add	r0, r0, #28	; 0x1c
        2187c0:	eb64d7e1 	bl	1b4e74c <$EraseRect(Rect *)>
        2187c4:	e28d1004 	add	r1, sp, #4	; 0x4
        2187c8:	e1a00009 	mov	r0, r9
        2187cc:	e3a03001 	mov	r3, #1	; 0x1
        2187d0:	e3a02000 	mov	r2, #0	; 0x0
        2187d4:	eb61e852 	bl	1a92924 <$DrawPicture(RefVar const &, TRect const &, unsigned long, long)>
        2187d8:	e59d016c 	ldr	r0, [sp, #364]
        2187dc:	e1a08800 	mov	r8, r0, lsl #16
        2187e0:	e59d016e 	ldr	r0, [sp, #366]
        2187e4:	e086a800 	add	sl, r6, r0, lsl #16
        2187e8:	e28d1040 	add	r1, sp, #64	; 0x40
        2187ec:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
        2187f0:	e3a02001 	mov	r2, #1	; 0x1
        2187f4:	e59d0184 	ldr	r0, [sp, #388]
        2187f8:	eb673ae1 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
        2187fc:	e3a03000 	mov	r3, #0	; 0x0
        218800:	e3a02000 	mov	r2, #0	; 0x0
        218804:	e92d000c 	stmdb	sp!, {r2, r3}
        218808:	e24dd008 	sub	sp, sp, #8	; 0x8
        21880c:	e88d0500 	stmia	sp, {r8, sl}
        218810:	e28d0050 	add	r0, sp, #80	; 0x50
        218814:	eb6757d1 	bl	1bee760 <$Ustrlen>
        218818:	e1a01000 	mov	r1, r0
        21881c:	e28d2f46 	add	r2, sp, #280	; 0x118
        218820:	e28d0050 	add	r0, sp, #80	; 0x50
        218824:	e3a03000 	mov	r3, #0	; 0x0
        218828:	eb64d7b9 	bl	1b4e714 <$DrawTextOnce(void *, long, StyleRecord **, short *, FPoint, TextOptions *, TextBoundsInfo *)>
        21882c:	e28dd010 	add	sp, sp, #16	; 0x10
        218830:	e08aa006 	add	sl, sl, r6
        218834:	e28d1040 	add	r1, sp, #64	; 0x40
        218838:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
        21883c:	e3a02001 	mov	r2, #1	; 0x1
        218840:	e59d0180 	ldr	r0, [sp, #384]
        218844:	eb673ace 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
        218848:	e3a03000 	mov	r3, #0	; 0x0
        21884c:	e3a02000 	mov	r2, #0	; 0x0
        218850:	e92d000c 	stmdb	sp!, {r2, r3}
        218854:	e24dd008 	sub	sp, sp, #8	; 0x8
        218858:	e88d0500 	stmia	sp, {r8, sl}
        21885c:	e28d0050 	add	r0, sp, #80	; 0x50
        218860:	eb6757be 	bl	1bee760 <$Ustrlen>
        218864:	e1a01000 	mov	r1, r0
        218868:	e28d2f46 	add	r2, sp, #280	; 0x118
        21886c:	e28d0050 	add	r0, sp, #80	; 0x50
        218870:	e3a03000 	mov	r3, #0	; 0x0
        218874:	eb64d7a6 	bl	1b4e714 <$DrawTextOnce(void *, long, StyleRecord **, short *, FPoint, TextOptions *, TextBoundsInfo *)>
        218878:	e28dd010 	add	sp, sp, #16	; 0x10
        21887c:	e08aa006 	add	sl, sl, r6
        218880:	e28d1040 	add	r1, sp, #64	; 0x40
        218884:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
        218888:	e3a02001 	mov	r2, #1	; 0x1
        21888c:	e59d017c 	ldr	r0, [sp, #380]
        218890:	eb673abb 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
        218894:	e3a03000 	mov	r3, #0	; 0x0
        218898:	e3a02000 	mov	r2, #0	; 0x0
        21889c:	e92d000c 	stmdb	sp!, {r2, r3}
        2188a0:	e24dd008 	sub	sp, sp, #8	; 0x8
        2188a4:	e88d0500 	stmia	sp, {r8, sl}
        2188a8:	e28d0050 	add	r0, sp, #80	; 0x50
        2188ac:	eb6757ab 	bl	1bee760 <$Ustrlen>
        2188b0:	e1a01000 	mov	r1, r0
        2188b4:	e28d2f46 	add	r2, sp, #280	; 0x118
        2188b8:	e28d0050 	add	r0, sp, #80	; 0x50
        2188bc:	e3a03000 	mov	r3, #0	; 0x0
        2188c0:	eb64d793 	bl	1b4e714 <$DrawTextOnce(void *, long, StyleRecord **, short *, FPoint, TextOptions *, TextBoundsInfo *)>
        2188c4:	e28dd010 	add	sp, sp, #16	; 0x10
        2188c8:	e59d0158 	ldr	r0, [sp, #344]
        2188cc:	e590101e 	ldr	r1, [r0, #30]
        2188d0:	e1a01821 	mov	r1, r1, lsr #16
        2188d4:	e281100a 	add	r1, r1, #10	; 0xa
        2188d8:	e5cd117b 	strb	r1, [sp, #379]
        2188dc:	e1a01441 	mov	r1, r1, asr #8
        2188e0:	e5cd117a 	strb	r1, [sp, #378]
        2188e4:	e590001c 	ldr	r0, [r0, #28]
        2188e8:	e1a00820 	mov	r0, r0, lsr #16
        2188ec:	e280000a 	add	r0, r0, #10	; 0xa
        2188f0:	e5cd0179 	strb	r0, [sp, #377]
        2188f4:	e1a00440 	mov	r0, r0, asr #8
        2188f8:	e5cd0178 	strb	r0, [sp, #376]
        2188fc:	e59d1174 	ldr	r1, [sp, #372]
        218900:	e1a01841 	mov	r1, r1, asr #16
        218904:	e59d0178 	ldr	r0, [sp, #376]
        218908:	e0510840 	subs	r0, r1, r0, asr #16
        21890c:	42800003 	addmi	r0, r0, #3	; 0x3
        218910:	e59d117a 	ldr	r1, [sp, #378]
        218914:	e0810140 	add	r0, r1, r0, asr #2
        218918:	e5cd0171 	strb	r0, [sp, #369]
        21891c:	e1a00440 	mov	r0, r0, asr #8
        218920:	e5cd0170 	strb	r0, [sp, #368]
        218924:	e59d0176 	ldr	r0, [sp, #374]
        218928:	e1a00840 	mov	r0, r0, asr #16
        21892c:	e59d117a 	ldr	r1, [sp, #378]
        218930:	e0400841 	sub	r0, r0, r1, asr #16
        218934:	e0900080 	adds	r0, r0, r0, lsl #1
        218938:	42800003 	addmi	r0, r0, #3	; 0x3
        21893c:	e59d1178 	ldr	r1, [sp, #376]
        218940:	e0810140 	add	r0, r1, r0, asr #2
        218944:	e5cd0173 	strb	r0, [sp, #371]
        218948:	e1a00440 	mov	r0, r0, asr #8
        21894c:	e5cd0172 	strb	r0, [sp, #370]
        218950:	e1a03005 	mov	r3, r5
        218954:	e59d2170 	ldr	r2, [sp, #368]
        218958:	e1a02842 	mov	r2, r2, asr #16
        21895c:	e92d000c 	stmdb	sp!, {r2, r3}
        218960:	e59d317a 	ldr	r3, [sp, #378]
        218964:	e1a03843 	mov	r3, r3, asr #16
        218968:	e28d2f5b 	add	r2, sp, #364	; 0x16c
        21896c:	e28d1e17 	add	r1, sp, #368	; 0x170
        218970:	e1a00004 	mov	r0, r4
        218974:	eb6346e4 	bl	1aea50c <TInker::$GetRawPoint(unsigned long *, unsigned long *, short, short, unsigned long)>
        218978:	e28dd008 	add	sp, sp, #8	; 0x8
        21897c:	e1b08000 	movs	r8, r0
        218980:	0a000003 	beq	218994 <TInker::Calibrate(unsigned long)+0x8f4>
        218984:	e59d000c 	ldr	r0, [sp, #12]
        218988:	eb66aa0b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        21898c:	e28dd010 	add	sp, sp, #16	; 0x10
        218990:	ea00006d 	b	218b4c <TInker::Calibrate(unsigned long)+0xaac>
        218994:	eb6346f2 	bl	1aea564 <$FlushTabletBuffer(void)>
        218998:	e59d0144 	ldr	r0, [sp, #324]
        21899c:	e59d1168 	ldr	r1, [sp, #360]
        2189a0:	e0010190 	mul	r1, r0, r1
        2189a4:	e59d014c 	ldr	r0, [sp, #332]
        2189a8:	e0810000 	add	r0, r1, r0
        2189ac:	e2800902 	add	r0, r0, #32768	; 0x8000
        2189b0:	e1a00840 	mov	r0, r0, asr #16
        2189b4:	e1a00800 	mov	r0, r0, lsl #16
        2189b8:	e1a00840 	mov	r0, r0, asr #16
        2189bc:	e58d0168 	str	r0, [sp, #360]
        2189c0:	e59d0148 	ldr	r0, [sp, #328]
        2189c4:	e59d1164 	ldr	r1, [sp, #356]
        2189c8:	e0000091 	mul	r0, r1, r0
        2189cc:	e59d1150 	ldr	r1, [sp, #336]
        2189d0:	e0800001 	add	r0, r0, r1
        2189d4:	e2800902 	add	r0, r0, #32768	; 0x8000
        2189d8:	e1a00840 	mov	r0, r0, asr #16
        2189dc:	e1a00800 	mov	r0, r0, lsl #16
        2189e0:	e1a00840 	mov	r0, r0, asr #16
        2189e4:	e3370001 	teq	r7, #1	; 0x1
        2189e8:	e58d0164 	str	r0, [sp, #356]
        2189ec:	0a000017 	beq	218a50 <TInker::Calibrate(unsigned long)+0x9b0>
        2189f0:	e3370002 	teq	r7, #2	; 0x2
        2189f4:	0a00002a 	beq	218aa4 <TInker::Calibrate(unsigned long)+0xa04>
        2189f8:	e3370003 	teq	r7, #3	; 0x3
        2189fc:	1a00003d 	bne	218af8 <TInker::Calibrate(unsigned long)+0xa58>
        218a00:	e59d1174 	ldr	r1, [sp, #372]
        218a04:	e1a01841 	mov	r1, r1, asr #16
        218a08:	e59d0178 	ldr	r0, [sp, #376]
        218a0c:	e0410840 	sub	r0, r1, r0, asr #16
        218a10:	e0900080 	adds	r0, r0, r0, lsl #1
        218a14:	42800003 	addmi	r0, r0, #3	; 0x3
        218a18:	e59d117a 	ldr	r1, [sp, #378]
        218a1c:	e0810140 	add	r0, r1, r0, asr #2
        218a20:	e5cd0173 	strb	r0, [sp, #371]
        218a24:	e1a00440 	mov	r0, r0, asr #8
        218a28:	e5cd0172 	strb	r0, [sp, #370]
        218a2c:	e59d1176 	ldr	r1, [sp, #374]
        218a30:	e1a01841 	mov	r1, r1, asr #16
        218a34:	e59d017a 	ldr	r0, [sp, #378]
        218a38:	e0410840 	sub	r0, r1, r0, asr #16
        218a3c:	e0901080 	adds	r1, r0, r0, lsl #1
        218a40:	42811003 	addmi	r1, r1, #3	; 0x3
        218a44:	e59d0178 	ldr	r0, [sp, #376]
        218a48:	e0800141 	add	r0, r0, r1, asr #2
        218a4c:	ea000010 	b	218a94 <TInker::Calibrate(unsigned long)+0x9f4>
        218a50:	e59d1174 	ldr	r1, [sp, #372]
        218a54:	e1a01841 	mov	r1, r1, asr #16
        218a58:	e59d0178 	ldr	r0, [sp, #376]
        218a5c:	e0510840 	subs	r0, r1, r0, asr #16
        218a60:	42800003 	addmi	r0, r0, #3	; 0x3
        218a64:	e59d117a 	ldr	r1, [sp, #378]
        218a68:	e0810140 	add	r0, r1, r0, asr #2
        218a6c:	e5cd0173 	strb	r0, [sp, #371]
        218a70:	e1a00440 	mov	r0, r0, asr #8
        218a74:	e5cd0172 	strb	r0, [sp, #370]
        218a78:	e59d0176 	ldr	r0, [sp, #374]
        218a7c:	e1a00840 	mov	r0, r0, asr #16
        218a80:	e59d117a 	ldr	r1, [sp, #378]
        218a84:	e0500841 	subs	r0, r0, r1, asr #16
        218a88:	42800003 	addmi	r0, r0, #3	; 0x3
        218a8c:	e59d1178 	ldr	r1, [sp, #376]
        218a90:	e0810140 	add	r0, r1, r0, asr #2
        218a94:	e5cd0171 	strb	r0, [sp, #369]
        218a98:	e1a00440 	mov	r0, r0, asr #8
        218a9c:	e5cd0170 	strb	r0, [sp, #368]
        218aa0:	ea000014 	b	218af8 <TInker::Calibrate(unsigned long)+0xa58>
        218aa4:	e59d1174 	ldr	r1, [sp, #372]
        218aa8:	e1a01841 	mov	r1, r1, asr #16
        218aac:	e59d0178 	ldr	r0, [sp, #376]
        218ab0:	e0410840 	sub	r0, r1, r0, asr #16
        218ab4:	e0900080 	adds	r0, r0, r0, lsl #1
        218ab8:	42800003 	addmi	r0, r0, #3	; 0x3
        218abc:	e59d117a 	ldr	r1, [sp, #378]
        218ac0:	e0810140 	add	r0, r1, r0, asr #2
        218ac4:	e5cd0171 	strb	r0, [sp, #369]
        218ac8:	e1a00440 	mov	r0, r0, asr #8
        218acc:	e5cd0170 	strb	r0, [sp, #368]
        218ad0:	e59d1176 	ldr	r1, [sp, #374]
        218ad4:	e1a01841 	mov	r1, r1, asr #16
        218ad8:	e59d017a 	ldr	r0, [sp, #378]
        218adc:	e0510840 	subs	r0, r1, r0, asr #16
        218ae0:	42800003 	addmi	r0, r0, #3	; 0x3
        218ae4:	e59d1178 	ldr	r1, [sp, #376]
        218ae8:	e0810140 	add	r0, r1, r0, asr #2
        218aec:	e5cd0173 	strb	r0, [sp, #371]
        218af0:	e1a00440 	mov	r0, r0, asr #8
        218af4:	e5cd0172 	strb	r0, [sp, #370]
        218af8:	e59d1172 	ldr	r1, [sp, #370]
        218afc:	e59d0168 	ldr	r0, [sp, #360]
        218b00:	e0500841 	subs	r0, r0, r1, asr #16
        218b04:	e58d0168 	str	r0, [sp, #360]
        218b08:	42600000 	rsbmi	r0, r0, #0	; 0x0
        218b0c:	458d0168 	strmi	r0, [sp, #360]
        218b10:	e59d0164 	ldr	r0, [sp, #356]
        218b14:	e59d1170 	ldr	r1, [sp, #368]
        218b18:	e0500841 	subs	r0, r0, r1, asr #16
        218b1c:	e58d0164 	str	r0, [sp, #356]
        218b20:	42600000 	rsbmi	r0, r0, #0	; 0x0
        218b24:	458d0164 	strmi	r0, [sp, #356]
        218b28:	e28dd004 	add	sp, sp, #4	; 0x4
        218b2c:	e59d0008 	ldr	r0, [sp, #8]
        218b30:	eb66a9a1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        218b34:	e28dd00c 	add	sp, sp, #12	; 0xc
        218b38:	e59d0158 	ldr	r0, [sp, #344]
        218b3c:	e350000a 	cmp	r0, #10	; 0xa
        218b40:	d59d0154 	ldrle	r0, [sp, #340]
        218b44:	d350000a 	cmple	r0, #10	; 0xa
        218b48:	cafffdb1 	bgt	218214 <TInker::Calibrate(unsigned long)+0x174>
        218b4c:	e59d0148 	ldr	r0, [sp, #328]
        218b50:	e280001c 	add	r0, r0, #28	; 0x1c
        218b54:	eb64d6fc 	bl	1b4e74c <$EraseRect(Rect *)>
        218b58:	e1a00004 	mov	r0, r4
        218b5c:	eb673e36 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        218b60:	e5901000 	ldr	r1, [r0]
        218b64:	e28d0f4a 	add	r0, sp, #296	; 0x128
        218b68:	eb6714cf 	bl	1bddeac <TSystemEvent::$UnRegisterForSystemEvent(unsigned long)>
        218b6c:	e3380000 	teq	r8, #0	; 0x0
        218b70:	028d0f4d 	addeq	r0, sp, #308	; 0x134
        218b74:	0b634eac 	bleq	1aec62c <$SetTabletCalibration(Calibration const &)>
        218b78:	e3a07000 	mov	r7, #0	; 0x0
        218b7c:	e59d0194 	ldr	r0, [sp, #404]
        218b80:	e5c07000 	strb	r7, [r0]
        218b84:	e28d1e12 	add	r1, sp, #288	; 0x120
        218b88:	e3a00000 	mov	r0, #0	; 0x0
        218b8c:	eb634a9a 	bl	1aeb5fc <$SetDoingCalibration(unsigned char, unsigned long *)>
        218b90:	e59d0124 	ldr	r0, [sp, #292]
        218b94:	eb634ea5 	bl	1aec630 <$SetTabletPolling(unsigned char)>
        218b98:	e59d0118 	ldr	r0, [sp, #280]
        218b9c:	e3300000 	teq	r0, #0	; 0x0
        218ba0:	159d0118 	ldrne	r0, [sp, #280]
        218ba4:	1b64d2cc 	blne	1b4d6dc <$DisposePattern(PixelMap **)>
        218ba8:	e59d00fc 	ldr	r0, [sp, #252]
        218bac:	eb66a982 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        218bb0:	e59d011c 	ldr	r0, [sp, #284]
        218bb4:	eb66a980 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        218bb8:	e28d0f4a 	add	r0, sp, #296	; 0x128
        218bbc:	e3a01000 	mov	r1, #0	; 0x0
        218bc0:	eb66d6d7 	bl	1bce724 <TUObject::$__dt(void)>
        218bc4:	e1a00008 	mov	r0, r8
        218bc8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TInker::PresCalibrate(void)
 * Address: 00218bcc
 */
TInker::PresCalibrate(void) {
    /*
        218bcc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TInker::TestForCalibrationNeeded(void)
 * Address: 00218bd0
 */
TInker::TestForCalibrationNeeded(void) {
    /*
        218bd0:	ea635af3 	b	1aef7a4 <$TabletNeedsRecalibration(void)>
    */
}

/**
 * Symbol: TInker::__ct(void)
 * Address: 00218df0
 */
TInker::TInker(void) {
    /*
        218df0:	e1a0c00d 	mov	ip, sp
        218df4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        218df8:	e24cb004 	sub	fp, ip, #4	; 0x4
        218dfc:	e1b04000 	movs	r4, r0
        218e00:	1a000003 	bne	218e14 <TInker::__ct(void)+0x24>
        218e04:	e3a00f46 	mov	r0, #280	; 0x118
        218e08:	eb66d64a 	bl	1bce738 <$__nw(unsigned int)>
        218e0c:	e1b04000 	movs	r4, r0
        218e10:	0a000009 	beq	218e3c <TInker::__ct(void)+0x4c>
        218e14:	e1a00004 	mov	r0, r4
        218e18:	eb672d09 	bl	1be4244 <TAppWorld::$__ct(void)>
        218e1c:	e2840070 	add	r0, r4, #112	; 0x70
        218e20:	eb66d221 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
        218e24:	e28400cc 	add	r0, r4, #204	; 0xcc
        218e28:	eb672d02 	bl	1be4238 <TAEvent::$__ct(void)>
        218e2c:	e28400dc 	add	r0, r4, #220	; 0xdc
        218e30:	eb64c19a 	bl	1b494a0 <TLiveInker::$__ct(void)>
        218e34:	e59f0008 	ldr	r0, [pc, #8]	; 218e44 <TInker::__ct(void)+0x54>
        218e38:	e5840000 	str	r0, [r4]
        218e3c:	e1a00004 	mov	r0, r4
        218e40:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        218e44:	0001f940 	andeq	pc, r1, r0, asr #18
    */
}

/**
 * Symbol: TInker::__dt(void)
 * Address: 00218e48
 */
TInker::~TInker(void) {
    /*
        218e48:	e1a0c00d 	mov	ip, sp
        218e4c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        218e50:	e24cb004 	sub	fp, ip, #4	; 0x4
        218e54:	e1a04000 	mov	r4, r0
        218e58:	e1a05001 	mov	r5, r1
        218e5c:	e59f0038 	ldr	r0, [pc, #38]	; 218e9c <TInker::__dt(void)+0x54>
        218e60:	e5840000 	str	r0, [r4]
        218e64:	e28400dc 	add	r0, r4, #220	; 0xdc
        218e68:	e3a01000 	mov	r1, #0	; 0x0
        218e6c:	eb64c18c 	bl	1b494a4 <TLiveInker::$__dt(void)>
        218e70:	e2840070 	add	r0, r4, #112	; 0x70
        218e74:	e3a01000 	mov	r1, #0	; 0x0
        218e78:	eb66d624 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        218e7c:	e1a00004 	mov	r0, r4
        218e80:	e3a01000 	mov	r1, #0	; 0x0
        218e84:	eb673103 	bl	1be5298 <TAppWorld::$__dt(void)>
        218e88:	e3150001 	tst	r5, #1	; 0x1
        218e8c:	11a00004 	movne	r0, r4
        218e90:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        218e94:	1a66d211 	bne	1bcd6e0 <$__dl(void *)>
        218e98:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        218e9c:	0001f940 	andeq	pc, r1, r0, asr #18
    */
}

/**
 * Symbol: TInker::MainConstructor(void)
 * Address: 00218f00
 */
TInker::MainConstructor(void) {
    /*
        218f00:	e1a0c00d 	mov	ip, sp
        218f04:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        218f08:	e24cb004 	sub	fp, ip, #4	; 0x4
        218f0c:	e1a04000 	mov	r4, r0
        218f10:	e24dd004 	sub	sp, sp, #4	; 0x4
        218f14:	eb6651f8 	bl	1bad6fc <TAppWorld::$MainConstructor(void)>
        218f18:	e2840070 	add	r0, r4, #112	; 0x70
        218f1c:	e3a01001 	mov	r1, #1	; 0x1
        218f20:	eb66f2db 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
        218f24:	e1a00004 	mov	r0, r4
        218f28:	eb634579 	bl	1aea514 <TInker::$IInker(void)>
        218f2c:	e3a0004c 	mov	r0, #76	; 0x4c
        218f30:	eb66d600 	bl	1bce738 <$__nw(unsigned int)>
        218f34:	e1b04000 	movs	r4, r0
        218f38:	0a000005 	beq	218f54 <TInker::MainConstructor(void)+0x54>
        218f3c:	e1a00004 	mov	r0, r4
        218f40:	eb672cb0 	bl	1be4208 <TAEventHandler::$__ct(void)>
        218f44:	e2840014 	add	r0, r4, #20	; 0x14
        218f48:	eb63457e 	bl	1aea548 <TBusyBox::$__ct(void)>
        218f4c:	e59f0094 	ldr	r0, [pc, #94]	; 218fe8 <TInker::MainConstructor(void)+0xe8>
        218f50:	e5840000 	str	r0, [r4]
        218f54:	e1a00004 	mov	r0, r4
        218f58:	e59f208c 	ldr	r2, [pc, #8c]	; 218fec <TInker::MainConstructor(void)+0xec>
        218f5c:	e59f108c 	ldr	r1, [pc, #8c]	; 218ff0 <TInker::MainConstructor(void)+0xf0>
        218f60:	eb674152 	bl	1be94b0 <TAEventHandler::$Init(unsigned long, unsigned long)>
        218f64:	e3a03001 	mov	r3, #1	; 0x1
        218f68:	e92d0008 	stmdb	sp!, {r3}
        218f6c:	e1a00004 	mov	r0, r4
        218f70:	e3a03000 	mov	r3, #0	; 0x0
        218f74:	e3a02066 	mov	r2, #102	; 0x66
        218f78:	e2822c0e 	add	r2, r2, #3584	; 0xe00
        218f7c:	e3a01032 	mov	r1, #50	; 0x32
        218f80:	eb674155 	bl	1be94dc <TAEventHandler::$InitIdler(unsigned long, TimeUnits, unsigned long, unsigned char)>
        218f84:	e28dd004 	add	sp, sp, #4	; 0x4
        218f88:	e59f5064 	ldr	r5, [pc, #64]	; 218ff4 <TInker::MainConstructor(void)+0xf4>
        218f8c:	e5d50008 	ldrb	r0, [r5, #8]
        218f90:	e3300000 	teq	r0, #0	; 0x0
        218f94:	01a00004 	moveq	r0, r4
        218f98:	0b6751d3 	bleq	1bed6ec <TAEventHandler::$StopIdle(void)>
        218f9c:	e3a03000 	mov	r3, #0	; 0x0
        218fa0:	e92d0008 	stmdb	sp!, {r3}
        218fa4:	e28d3004 	add	r3, sp, #4	; 0x4
        218fa8:	e3a02801 	mov	r2, #65536	; 0x10000
        218fac:	e3a01801 	mov	r1, #65536	; 0x10000
        218fb0:	e3a00000 	mov	r0, #0	; 0x0
        218fb4:	eb672463 	bl	1be2148 <$NewSegregatedVMHeap>
        218fb8:	e28dd004 	add	sp, sp, #4	; 0x4
        218fbc:	e3300000 	teq	r0, #0	; 0x0
        218fc0:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        218fc4:	e59d0000 	ldr	r0, [sp]
        218fc8:	e5a50004 	str	r0, [r5, #4]!
        218fcc:	eb67286b 	bl	1be3180 <$SetHeap>
        218fd0:	eb65244f 	bl	1b62114 <$RealStrokeInit(void)>
        218fd4:	e24dd008 	sub	sp, sp, #8	; 0x8
        218fd8:	e1a0000d 	mov	r0, sp
        218fdc:	e3a01c03 	mov	r1, #768	; 0x300
        218fe0:	eb66f6dc 	bl	1bd6b58 <$LockStack>
        218fe4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        218fe8:	0001eae8 	andeq	lr, r1, r8, ror #21
        218fec:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        218ff0:	696e6b72 	stmvsdb	lr!, {r1, r4, r5, r6, r8, r9, fp, sp, lr}^
        218ff4:	0c104d20 	ldceq	13, cr4, [r0], -#128	; fField128
    */
}

/**
 * Symbol: TInker::IInker(void)
 * Address: 00218ff8
 */
TInker::IInker(void) {
    /*
        218ff8:	e1a0c00d 	mov	ip, sp
        218ffc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        219000:	e24cb004 	sub	fp, ip, #4	; 0x4
        219004:	e1a04000 	mov	r4, r0
        219008:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        21900c:	e28000dc 	add	r0, r0, #220	; 0xdc
        219010:	eb64c558 	bl	1b4a578 <TLiveInker::$Init(void)>
        219014:	e1a0100d 	mov	r1, sp
        219018:	e3a00000 	mov	r0, #0	; 0x0
        21901c:	eb67621d 	bl	1bf1898 <$GetGrafInfo(long, void *)>
        219020:	e1a00004 	mov	r0, r4
        219024:	eb673d04 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        219028:	e1a01000 	mov	r1, r0
        21902c:	e28d0008 	add	r0, sp, #8	; 0x8
        219030:	eb63519a 	bl	1aed6a0 <$TabInitialize(Rect const &, TUPort *)>
        219034:	e3a00002 	mov	r0, #2	; 0x2
        219038:	e5c400c1 	strb	r0, [r4, #193]	; fField193
        21903c:	e5c400c0 	strb	r0, [r4, #192]	; fField192
        219040:	e59f0094 	ldr	r0, [pc, #94]	; 2190dc <TInker::IInker(void)+0xe4>
        219044:	e58400cc 	str	r0, [r4, #204]	; fField204
        219048:	e59f0090 	ldr	r0, [pc, #90]	; 2190e0 <TInker::IInker(void)+0xe8>
        21904c:	e58400d0 	str	r0, [r4, #208]	; fField208
        219050:	e59f008c 	ldr	r0, [pc, #8c]	; 2190e4 <TInker::IInker(void)+0xec>
        219054:	e58400d4 	str	r0, [r4, #212]	; fField212
        219058:	e3a00003 	mov	r0, #3	; 0x3
        21905c:	e5c400c3 	strb	r0, [r4, #195]	; fField195
        219060:	e59f0080 	ldr	r0, [pc, #80]	; 2190e8 <TInker::IInker(void)+0xf0>
        219064:	e5900000 	ldr	r0, [r0]
        219068:	e2100008 	ands	r0, r0, #8	; 0x8
        21906c:	13a00001 	movne	r0, #1	; 0x1
        219070:	e21010ff 	ands	r1, r0, #255	; 0xff
        219074:	e59f0070 	ldr	r0, [pc, #70]	; 2190ec <TInker::IInker(void)+0xf4>
        219078:	e5c01008 	strb	r1, [r0, #8]
        21907c:	0a000028 	beq	219124 <TInker::IInker(void)+0x12c>
        219080:	e3a04000 	mov	r4, #0	; 0x0
        219084:	e3a0a000 	mov	sl, #0	; 0x0
        219088:	e24d6064 	sub	r6, sp, #100	; 0x64
        21908c:	e3a097cf 	mov	r9, #54263808	; 0x33c0000
        219090:	e3a087cf 	mov	r8, #54263808	; 0x33c0000
        219094:	e2888010 	add	r8, r8, #16	; 0x10
        219098:	e2887c02 	add	r7, r8, #512	; 0x200
        21909c:	e59f504c 	ldr	r5, [pc, #4c]	; 2190f0 <TInker::IInker(void)+0xf8>
        2190a0:	e1a00006 	mov	r0, r6
        2190a4:	e52da06c 	str	sl, [sp, -#108]!
        2190a8:	eb666631 	bl	1bb2974 <$setjmp>
        2190ac:	e3300000 	teq	r0, #0	; 0x0
        2190b0:	1a00000f 	bne	2190f4 <TInker::IInker(void)+0xfc>
        2190b4:	e1a0000d 	mov	r0, sp
        2190b8:	eb671bef 	bl	1be007c <$AddExceptionHandler>
        2190bc:	e5898000 	str	r8, [r9]
        2190c0:	e5898004 	str	r8, [r9, #4]
        2190c4:	e3a007ce 	mov	r0, #54001664	; 0x3380000
        2190c8:	e589700c 	str	r7, [r9, #12]
        2190cc:	e5898008 	str	r8, [r9, #8]
        2190d0:	e3a04001 	mov	r4, #1	; 0x1
        2190d4:	e5a09004 	str	r9, [r0, #4]!
        2190d8:	ea00000b 	b	21910c <TInker::IInker(void)+0x114>
        2190dc:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        2190e0:	69646c65 	stmvsdb	r4!, {r0, r2, r5, r6, sl, fp, sp, lr}^
        2190e4:	696e6b72 	stmvsdb	lr!, {r1, r4, r5, r6, r8, r9, fp, sp, lr}^
        2190e8:	000013f4 	streqd	r1, [r0], -r4
        2190ec:	0c104d20 	ldceq	13, cr4, [r0], -#128	; fField128
        2190f0:	003712b4 	ldreqh	r1, [r7], -r4
        2190f4:	e59d0060 	ldr	r0, [sp, #96]
        2190f8:	e5951000 	ldr	r1, [r5]
        2190fc:	eb672824 	bl	1be3194 <$Subexception>
        219100:	e3300000 	teq	r0, #0	; 0x0
        219104:	01a0000d 	moveq	r0, sp
        219108:	0b672411 	bleq	1be2154 <$NextHandler>
        21910c:	e1a0000d 	mov	r0, sp
        219110:	eb671fe8 	bl	1be10b8 <$ExitHandler>
        219114:	e28dd06c 	add	sp, sp, #108	; 0x6c
        219118:	e3340000 	teq	r4, #0	; 0x0
        21911c:	0affffdf 	beq	2190a0 <TInker::IInker(void)+0xa8>
        219120:	eb634d48 	bl	1aec648 <$StartBypassTablet(void)>
        219124:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

