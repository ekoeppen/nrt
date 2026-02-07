#include "include/TLocalTalkTool.h"

/**
 * Symbol: TLocalTalkTool::__ct(unsigned long)
 * Address: 001141e0
 */
TLocalTalkTool::TLocalTalkTool(unsigned long) {
    /*
        1141e0:	e1a0c00d 	mov	ip, sp
        1141e4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1141e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1141ec:	e1b04000 	movs	r4, r0
        1141f0:	e1a05001 	mov	r5, r1
        1141f4:	1a000004 	bne	11420c <TLocalTalkTool::__ct(unsigned long)+0x2c>
        1141f8:	e3a00038 	mov	r0, #56	; 0x38
        1141fc:	e2800b01 	add	r0, r0, #1024	; 0x400
        114200:	eb6ae94c 	bl	1bce738 <$__nw(unsigned int)>
        114204:	e1b04000 	movs	r4, r0
        114208:	0a00000f 	beq	11424c <TLocalTalkTool::__ct(unsigned long)+0x6c>
        11420c:	e1a01005 	mov	r1, r5
        114210:	e1a00004 	mov	r0, r4
        114214:	eb63d8b9 	bl	1a0a500 <TSerTool::$__ct(unsigned long)>
        114218:	e2840fe2 	add	r0, r4, #904	; 0x388
        11421c:	eb6aa2f8 	bl	1bbce04 <TCMOLocalTalkStats::$__ct(void)>
        114220:	e2840e3a 	add	r0, r4, #928	; 0x3a0
        114224:	eb6bd094 	bl	1c0847c <TCircleBuf::$__ct(void)>
        114228:	e2840ff2 	add	r0, r4, #968	; 0x3c8
        11422c:	eb6bd092 	bl	1c0847c <TCircleBuf::$__ct(void)>
        114230:	e2840e3f 	add	r0, r4, #1008	; 0x3f0
        114234:	eb6a9eeb 	bl	1bbbde8 <TCMOSerialBuffers::$__ct(void)>
        114238:	e2840024 	add	r0, r4, #36	; 0x24
        11423c:	e2800b01 	add	r0, r0, #1024	; 0x400
        114240:	eb6aa2fb 	bl	1bbce34 <TCMOLocalTalkMiscConfig::$__ct(void)>
        114244:	e59f0008 	ldr	r0, [pc, #8]	; 114254 <TLocalTalkTool::__ct(unsigned long)+0x74>
        114248:	e5840000 	str	r0, [r4]
        11424c:	e1a00004 	mov	r0, r4
        114250:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        114254:	0001d868 	andeq	sp, r1, r8, ror #16
    */
}

/**
 * Symbol: TLocalTalkTool::__dt(void)
 * Address: 00114724
 */
TLocalTalkTool::~TLocalTalkTool(void) {
    /*
        114724:	e1a0c00d 	mov	ip, sp
        114728:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        11472c:	e24cb004 	sub	fp, ip, #4	; 0x4
        114730:	e1a04000 	mov	r4, r0
        114734:	e1a05001 	mov	r5, r1
        114738:	e59f0038 	ldr	r0, [pc, #38]	; 114778 <TLocalTalkTool::__dt(void)+0x54>
        11473c:	e5840000 	str	r0, [r4]
        114740:	e2840ff2 	add	r0, r4, #968	; 0x3c8
        114744:	e3a01000 	mov	r1, #0	; 0x0
        114748:	eb6bd34c 	bl	1c09480 <TCircleBuf::$__dt(void)>
        11474c:	e2840e3a 	add	r0, r4, #928	; 0x3a0
        114750:	e3a01000 	mov	r1, #0	; 0x0
        114754:	eb6bd349 	bl	1c09480 <TCircleBuf::$__dt(void)>
        114758:	e1a00004 	mov	r0, r4
        11475c:	e3a01000 	mov	r1, #0	; 0x0
        114760:	eb63d772 	bl	1a0a530 <TSerTool::$__dt(void)>
        114764:	e3150001 	tst	r5, #1	; 0x1
        114768:	11a00004 	movne	r0, r4
        11476c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        114770:	1a6ae3da 	bne	1bcd6e0 <$__dl(void *)>
        114774:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        114778:	0001d868 	andeq	sp, r1, r8, ror #16
    */
}

/**
 * Symbol: TLocalTalkTool::DoOutput(void)
 * Address: 0011477c
 */
TLocalTalkTool::DoOutput(void) {
    /*
        11477c:	e1a0c00d 	mov	ip, sp
        114780:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        114784:	e24cb004 	sub	fp, ip, #4	; 0x4
        114788:	e1a04000 	mov	r4, r0
        11478c:	e3e01f97 	mvn	r1, #604	; 0x25c
        114790:	e2411b11 	sub	r1, r1, #17408	; 0x4400
        114794:	e5d0041f 	ldrb	r0, [r0, #1055]	; fField1055
        114798:	e3300000 	teq	r0, #0	; 0x0
        11479c:	0a000019 	beq	114808 <TLocalTalkTool::DoOutput(void)+0x8c>
        1147a0:	e3e01055 	mvn	r1, #85	; 0x55
        1147a4:	e2411c46 	sub	r1, r1, #17920	; 0x4600
        1147a8:	e5940274 	ldr	r0, [r4, #628]	; fField628
        1147ac:	e3500003 	cmp	r0, #3	; 0x3
        1147b0:	3a000014 	bcc	114808 <TLocalTalkTool::DoOutput(void)+0x8c>
        1147b4:	e3500f97 	cmp	r0, #604	; 0x25c
        1147b8:	8a000012 	bhi	114808 <TLocalTalkTool::DoOutput(void)+0x8c>
        1147bc:	e2840e3a 	add	r0, r4, #928	; 0x3a0
        1147c0:	e1a05000 	mov	r5, r0
        1147c4:	eb6bcf2b 	bl	1c08478 <TCircleBuf::$Reset(void)>
        1147c8:	e2842f9d 	add	r2, r4, #628	; 0x274
        1147cc:	e1a00005 	mov	r0, r5
        1147d0:	e5941270 	ldr	r1, [r4, #624]	; fField624
        1147d4:	eb6bc6d7 	bl	1c06338 <TCircleBuf::$CopyIn(CBufferList *, unsigned long *)>
        1147d8:	e1a01000 	mov	r1, r0
        1147dc:	e3300005 	teq	r0, #5	; 0x5
        1147e0:	0a000008 	beq	114808 <TLocalTalkTool::DoOutput(void)+0x8c>
        1147e4:	eb09f8e9 	bl	392b90 <EnterFIQAtomic>
        1147e8:	e5940384 	ldr	r0, [r4, #900]	; fField900
        1147ec:	e3800202 	orr	r0, r0, #536870912	; 0x20000000
        1147f0:	e5840384 	str	r0, [r4, #900]	; fField900
        1147f4:	e1a00004 	mov	r0, r4
        1147f8:	e3a01001 	mov	r1, #1	; 0x1
        1147fc:	eb643649 	bl	1a22128 <TLocalTalkTool::$TransmitStateMachine(TLocalTalkTool::TransmitEvent)>
        114800:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        114804:	ea09f8e9 	b	392bb0 <ExitFIQAtomic>
        114808:	e1a00004 	mov	r0, r4
        11480c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        114810:	ea642ddf 	b	1a1ff94 <TLocalTalkTool::$DoPutComplete(long)>
    */
}

/**
 * Symbol: TLocalTalkTool::DoPutComplete(long)
 * Address: 00114814
 */
TLocalTalkTool::DoPutComplete(long) {
    /*
        114814:	e1a0c00d 	mov	ip, sp
        114818:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        11481c:	e24cb004 	sub	fp, ip, #4	; 0x4
        114820:	e1a04000 	mov	r4, r0
        114824:	e1a05001 	mov	r5, r1
        114828:	e5900270 	ldr	r0, [r0, #624]	; fField624
        11482c:	e5901000 	ldr	r1, [r0]
        114830:	e1a0e00f 	mov	lr, pc
        114834:	e281f03c 	add	pc, r1, #60	; 0x3c
        114838:	e1a02000 	mov	r2, r0
        11483c:	e1a01005 	mov	r1, r5
        114840:	e1a00004 	mov	r0, r4
        114844:	e5943000 	ldr	r3, [r4]
        114848:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        11484c:	e283f0d4 	add	pc, r3, #212	; 0xd4
    */
}

/**
 * Symbol: TLocalTalkTool::KillPut(void)
 * Address: 00114850
 */
TLocalTalkTool::KillPut(void) {
    /*
        114850:	e1a0c00d 	mov	ip, sp
        114854:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        114858:	e24cb004 	sub	fp, ip, #4	; 0x4
        11485c:	e1a04000 	mov	r4, r0
        114860:	e5900270 	ldr	r0, [r0, #624]	; fField624
        114864:	e3300000 	teq	r0, #0	; 0x0
        114868:	0a000009 	beq	114894 <TLocalTalkTool::KillPut(void)+0x44>
        11486c:	eb09f8c7 	bl	392b90 <EnterFIQAtomic>
        114870:	e1a00004 	mov	r0, r4
        114874:	e3a01003 	mov	r1, #3	; 0x3
        114878:	eb64362a 	bl	1a22128 <TLocalTalkTool::$TransmitStateMachine(TLocalTalkTool::TransmitEvent)>
        11487c:	e2840e3a 	add	r0, r4, #928	; 0x3a0
        114880:	eb6bcefc 	bl	1c08478 <TCircleBuf::$Reset(void)>
        114884:	eb09f8c9 	bl	392bb0 <ExitFIQAtomic>
        114888:	e1a00004 	mov	r0, r4
        11488c:	e59f1014 	ldr	r1, [pc, #14]	; 1148a8 <TLocalTalkTool::KillPut(void)+0x58>
        114890:	eb642dbf 	bl	1a1ff94 <TLocalTalkTool::$DoPutComplete(long)>
        114894:	e1a00004 	mov	r0, r4
        114898:	e3a01000 	mov	r1, #0	; 0x0
        11489c:	e5942000 	ldr	r2, [r4]
        1148a0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1148a4:	e282f0dc 	add	pc, r2, #220	; 0xdc
        1148a8:	ffffc17b 	swinv	0x00ffc17b
    */
}

/**
 * Symbol: TLocalTalkTool::DoInput(void)
 * Address: 001148ac
 */
TLocalTalkTool::DoInput(void) {
    /*
        1148ac:	e1a0c00d 	mov	ip, sp
        1148b0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1148b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1148b8:	e1a04000 	mov	r4, r0
        1148bc:	e3a00000 	mov	r0, #0	; 0x0
        1148c0:	e52d0004 	str	r0, [sp, -#4]!
        1148c4:	e5940384 	ldr	r0, [r4, #900]	; fField900
        1148c8:	e3800101 	orr	r0, r0, #1073741824	; 0x40000000
        1148cc:	e5840384 	str	r0, [r4, #900]	; fField900
        1148d0:	e2842d0a 	add	r2, r4, #640	; 0x280
        1148d4:	e594127c 	ldr	r1, [r4, #636]	; fField636
        1148d8:	e2840ff2 	add	r0, r4, #968	; 0x3c8
        1148dc:	e1a0300d 	mov	r3, sp
        1148e0:	eb6bc696 	bl	1c06340 <TCircleBuf::$CopyOut(CBufferList *, unsigned long *, unsigned long *)>
        1148e4:	e1b05000 	movs	r5, r0
        1148e8:	0a00000f 	beq	11492c <TLocalTalkTool::DoInput(void)+0x80>
        1148ec:	e3350001 	teq	r5, #1	; 0x1
        1148f0:	03a05000 	moveq	r5, #0	; 0x0
        1148f4:	e5940384 	ldr	r0, [r4, #900]	; fField900
        1148f8:	e3c00101 	bic	r0, r0, #1073741824	; 0x40000000
        1148fc:	e5840384 	str	r0, [r4, #900]	; fField900
        114900:	e594027c 	ldr	r0, [r4, #636]	; fField636
        114904:	e5901000 	ldr	r1, [r0]
        114908:	e1a0e00f 	mov	lr, pc
        11490c:	e281f03c 	add	pc, r1, #60	; 0x3c
        114910:	e1a03000 	mov	r3, r0
        114914:	e1a01005 	mov	r1, r5
        114918:	e1a00004 	mov	r0, r4
        11491c:	e3a02001 	mov	r2, #1	; 0x1
        114920:	e594c000 	ldr	ip, [r4]
        114924:	e1a0e00f 	mov	lr, pc
        114928:	e28cf0ec 	add	pc, ip, #236	; 0xec
        11492c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TLocalTalkTool::KillGet(void)
 * Address: 00114930
 */
TLocalTalkTool::KillGet(void) {
    /*
        114930:	e1a0c00d 	mov	ip, sp
        114934:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        114938:	e24cb004 	sub	fp, ip, #4	; 0x4
        11493c:	e1a04000 	mov	r4, r0
        114940:	e590027c 	ldr	r0, [r0, #636]	; fField636
        114944:	e3300000 	teq	r0, #0	; 0x0
        114948:	0a000006 	beq	114968 <TLocalTalkTool::KillGet(void)+0x38>
        11494c:	e1a00004 	mov	r0, r4
        114950:	e3a03000 	mov	r3, #0	; 0x0
        114954:	e3a02000 	mov	r2, #0	; 0x0
        114958:	e59f1028 	ldr	r1, [pc, #28]	; 114988 <TLocalTalkTool::KillGet(void)+0x58>
        11495c:	e594c000 	ldr	ip, [r4]
        114960:	e1a0e00f 	mov	lr, pc
        114964:	e28cf0ec 	add	pc, ip, #236	; 0xec
        114968:	e5940384 	ldr	r0, [r4, #900]	; fField900
        11496c:	e3c00101 	bic	r0, r0, #1073741824	; 0x40000000
        114970:	e5840384 	str	r0, [r4, #900]	; fField900
        114974:	e1a00004 	mov	r0, r4
        114978:	e3a01000 	mov	r1, #0	; 0x0
        11497c:	e5942000 	ldr	r2, [r4]
        114980:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        114984:	e282f0f4 	add	pc, r2, #244	; 0xf4
        114988:	ffffc17b 	swinv	0x00ffc17b
    */
}

/**
 * Symbol: TLocalTalkTool::Close(void)
 * Address: 0011498c
 */
TLocalTalkTool::Close(void) {
    /*
        11498c:	e1a0c00d 	mov	ip, sp
        114990:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        114994:	e24cb004 	sub	fp, ip, #4	; 0x4
        114998:	e1a04000 	mov	r4, r0
        11499c:	e5901000 	ldr	r1, [r0]
        1149a0:	e1a0e00f 	mov	lr, pc
        1149a4:	e281ff55 	add	pc, r1, #340	; 0x154
        1149a8:	e5940018 	ldr	r0, [r4, #24]	; fField24
        1149ac:	e3c00002 	bic	r0, r0, #2	; 0x2
        1149b0:	e5840018 	str	r0, [r4, #24]	; fField24
        1149b4:	e1a00004 	mov	r0, r4
        1149b8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1149bc:	ea6aa129 	b	1bbce68 <TCommTool::$Close(void)>
    */
}

/**
 * Symbol: TLocalTalkTool::ConnectStart(void)
 * Address: 001149c0
 */
TLocalTalkTool::ConnectStart(void) {
    /*
        1149c0:	e1a0c00d 	mov	ip, sp
        1149c4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1149c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1149cc:	e1a04000 	mov	r4, r0
        1149d0:	e5901000 	ldr	r1, [r0]
        1149d4:	e1a0e00f 	mov	lr, pc
        1149d8:	e281fe15 	add	pc, r1, #336	; 0x150
        1149dc:	e5d40430 	ldrb	r0, [r4, #1072]	; fField1072
        1149e0:	e3300000 	teq	r0, #0	; 0x0
        1149e4:	0a00000b 	beq	114a18 <TLocalTalkTool::ConnectStart(void)+0x58>
        1149e8:	eb09f868 	bl	392b90 <EnterFIQAtomic>
        1149ec:	e5d4141c 	ldrb	r1, [r4, #1052]	; fField1052
        1149f0:	e5940304 	ldr	r0, [r4, #772]	; fField772
        1149f4:	eb09c0c8 	bl	384d1c <TSerialChip::SetSDLCAddress(unsigned char)>
        1149f8:	e5d40433 	ldrb	r0, [r4, #1075]	; fField1075
        1149fc:	e5c4041c 	strb	r0, [r4, #1052]	; fField1052
        114a00:	eb09f86a 	bl	392bb0 <ExitFIQAtomic>
        114a04:	e1a00004 	mov	r0, r4
        114a08:	e3a01000 	mov	r1, #0	; 0x0
        114a0c:	e5942000 	ldr	r2, [r4]
        114a10:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        114a14:	e282f054 	add	pc, r2, #84	; 0x54
        114a18:	eb09f85c 	bl	392b90 <EnterFIQAtomic>
        114a1c:	e3a00000 	mov	r0, #0	; 0x0
        114a20:	e5c4041f 	strb	r0, [r4, #1055]	; fField1055
        114a24:	e5940384 	ldr	r0, [r4, #900]	; fField900
        114a28:	e3800201 	orr	r0, r0, #268435456	; 0x10000000
        114a2c:	e5840384 	str	r0, [r4, #900]	; fField900
        114a30:	e1a00004 	mov	r0, r4
        114a34:	e3a01002 	mov	r1, #2	; 0x2
        114a38:	eb6435ba 	bl	1a22128 <TLocalTalkTool::$TransmitStateMachine(TLocalTalkTool::TransmitEvent)>
        114a3c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        114a40:	ea09f85a 	b	392bb0 <ExitFIQAtomic>
    */
}

/**
 * Symbol: TLocalTalkTool::DoControl(unsigned long, unsigned long)
 * Address: 00114a44
 */
TLocalTalkTool::DoControl(unsigned long, unsigned long) {
    /*
        114a44:	e1a0c00d 	mov	ip, sp
        114a48:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        114a4c:	e24cb004 	sub	fp, ip, #4	; 0x4
        114a50:	e1a04000 	mov	r4, r0
        114a54:	e3a00000 	mov	r0, #0	; 0x0
        114a58:	e241cf43 	sub	ip, r1, #268	; 0x10c
        114a5c:	e33c0002 	teq	ip, #2	; 0x2
        114a60:	0a000007 	beq	114a84 <TLocalTalkTool::DoControl(unsigned long, unsigned long)+0x40>
        114a64:	e241cf43 	sub	ip, r1, #268	; 0x10c
        114a68:	e33c0003 	teq	ip, #3	; 0x3
        114a6c:	11a00004 	movne	r0, r4
        114a70:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        114a74:	1a63eb50 	bne	1a0f7bc <TSerTool::$DoControl(unsigned long, unsigned long)>
        114a78:	e5d4141c 	ldrb	r1, [r4, #1052]	; fField1052
        114a7c:	e5c412a4 	strb	r1, [r4, #676]	; fField676
        114a80:	ea000018 	b	114ae8 <TLocalTalkTool::DoControl(unsigned long, unsigned long)+0xa4>
        114a84:	e5d40058 	ldrb	r0, [r4, #88]	; fField88
        114a88:	e5c4041c 	strb	r0, [r4, #1052]	; fField1052
        114a8c:	e1a00004 	mov	r0, r4
        114a90:	e5941000 	ldr	r1, [r4]
        114a94:	e1a0e00f 	mov	lr, pc
        114a98:	e281fe13 	add	pc, r1, #304	; 0x130
        114a9c:	e3300000 	teq	r0, #0	; 0x0
        114aa0:	1a000010 	bne	114ae8 <TLocalTalkTool::DoControl(unsigned long, unsigned long)+0xa4>
        114aa4:	e1a00004 	mov	r0, r4
        114aa8:	e5941000 	ldr	r1, [r4]
        114aac:	e1a0e00f 	mov	lr, pc
        114ab0:	e281fe15 	add	pc, r1, #336	; 0x150
        114ab4:	e3300000 	teq	r0, #0	; 0x0
        114ab8:	1a00000a 	bne	114ae8 <TLocalTalkTool::DoControl(unsigned long, unsigned long)+0xa4>
        114abc:	eb09f833 	bl	392b90 <EnterFIQAtomic>
        114ac0:	e3a00000 	mov	r0, #0	; 0x0
        114ac4:	e5c4041f 	strb	r0, [r4, #1055]	; fField1055
        114ac8:	e5940384 	ldr	r0, [r4, #900]	; fField900
        114acc:	e3800201 	orr	r0, r0, #268435456	; 0x10000000
        114ad0:	e5840384 	str	r0, [r4, #900]	; fField900
        114ad4:	e1a00004 	mov	r0, r4
        114ad8:	e3a01002 	mov	r1, #2	; 0x2
        114adc:	eb643591 	bl	1a22128 <TLocalTalkTool::$TransmitStateMachine(TLocalTalkTool::TransmitEvent)>
        114ae0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        114ae4:	ea09f831 	b	392bb0 <ExitFIQAtomic>
        114ae8:	e584029c 	str	r0, [r4, #668]	; fField668
        114aec:	e2841fa5 	add	r1, r4, #660	; 0x294
        114af0:	e1a00004 	mov	r0, r4
        114af4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        114af8:	ea63e716 	b	1a0e758 <TSerTool::$ControlComplete(TCommToolReply &)>
    */
}

/**
 * Symbol: TLocalTalkTool::SetDefaultBufferSizes(TCMOSerialBuffers *)
 * Address: 00114afc
 */
TLocalTalkTool::SetDefaultBufferSizes(TCMOSerialBuffers *) {
    /*
        114afc:	e3a00b02 	mov	r0, #2048	; 0x800
        114b00:	e5810010 	str	r0, [r1, #16]
        114b04:	e3a00028 	mov	r0, #40	; 0x28
        114b08:	e5810014 	str	r0, [r1, #20]
        114b0c:	e3a00f97 	mov	r0, #604	; 0x25c
        114b10:	e5a1000c 	str	r0, [r1, #12]!
        114b14:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLocalTalkTool::AllocateBuffers(void)
 * Address: 00114b18
 */
TLocalTalkTool::AllocateBuffers(void) {
    /*
        114b18:	e1a0c00d 	mov	ip, sp
        114b1c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        114b20:	e24cb004 	sub	fp, ip, #4	; 0x4
        114b24:	e1a04000 	mov	r4, r0
        114b28:	e5900304 	ldr	r0, [r0, #772]	; fField772
        114b2c:	e3a01002 	mov	r1, #2	; 0x2
        114b30:	eb09c058 	bl	384c98 <TSerialChip::SetSerialMode(unsigned long)>
        114b34:	e1b05000 	movs	r5, r0
        114b38:	1a000030 	bne	114c00 <TLocalTalkTool::AllocateBuffers(void)+0xe8>
        114b3c:	e3a00001 	mov	r0, #1	; 0x1
        114b40:	e5c4028c 	strb	r0, [r4, #652]	; fField652
        114b44:	e3a03001 	mov	r3, #1	; 0x1
        114b48:	e92d0008 	stmdb	sp!, {r3}
        114b4c:	e2842b01 	add	r2, r4, #1024	; 0x400
        114b50:	e8920006 	ldmia	r2, {r1, r2}
        114b54:	e2840ff2 	add	r0, r4, #968	; 0x3c8
        114b58:	e1a07000 	mov	r7, r0
        114b5c:	e3a03002 	mov	r3, #2	; 0x2
        114b60:	eb6bc5ef 	bl	1c06324 <TCircleBuf::$Allocate(unsigned long, int, unsigned char, unsigned char)>
        114b64:	e28dd004 	add	sp, sp, #4	; 0x4
        114b68:	e1b05000 	movs	r5, r0
        114b6c:	e2846e3a 	add	r6, r4, #928	; 0x3a0
        114b70:	1a000008 	bne	114b98 <TLocalTalkTool::AllocateBuffers(void)+0x80>
        114b74:	e3a03000 	mov	r3, #0	; 0x0
        114b78:	e92d0008 	stmdb	sp!, {r3}
        114b7c:	e1a00006 	mov	r0, r6
        114b80:	e3a03002 	mov	r3, #2	; 0x2
        114b84:	e3a02000 	mov	r2, #0	; 0x0
        114b88:	e59413fc 	ldr	r1, [r4, #1020]	; fField1020
        114b8c:	eb6bc5e4 	bl	1c06324 <TCircleBuf::$Allocate(unsigned long, int, unsigned char, unsigned char)>
        114b90:	e28dd004 	add	sp, sp, #4	; 0x4
        114b94:	e1a05000 	mov	r5, r0
        114b98:	e3350000 	teq	r5, #0	; 0x0
        114b9c:	1a000017 	bne	114c00 <TLocalTalkTool::AllocateBuffers(void)+0xe8>
        114ba0:	e1a01007 	mov	r1, r7
        114ba4:	e5940304 	ldr	r0, [r4, #772]	; fField772
        114ba8:	e59f3058 	ldr	r3, [pc, #58]	; 114c08 <TLocalTalkTool::AllocateBuffers(void)+0xf0>
        114bac:	e3a02000 	mov	r2, #0	; 0x0
        114bb0:	eb09c050 	bl	384cf8 <TSerialChip::InitRxDMA(TCircleBuf *, unsigned long, void (*)(void *, unsigned long))>
        114bb4:	e1b05000 	movs	r5, r0
        114bb8:	1a000004 	bne	114bd0 <TLocalTalkTool::AllocateBuffers(void)+0xb8>
        114bbc:	e1a01006 	mov	r1, r6
        114bc0:	e5940304 	ldr	r0, [r4, #772]	; fField772
        114bc4:	e59f2040 	ldr	r2, [pc, #40]	; 114c0c <TLocalTalkTool::AllocateBuffers(void)+0xf4>
        114bc8:	eb09c047 	bl	384cec <TSerialChip::InitTxDMA(TCircleBuf *, void (*)(void *))>
        114bcc:	e1a05000 	mov	r5, r0
        114bd0:	e3350000 	teq	r5, #0	; 0x0
        114bd4:	1a000009 	bne	114c00 <TLocalTalkTool::AllocateBuffers(void)+0xe8>
        114bd8:	eb09f7ec 	bl	392b90 <EnterFIQAtomic>
        114bdc:	e5940434 	ldr	r0, [r4, #1076]	; fField1076
        114be0:	e3300000 	teq	r0, #0	; 0x0
        114be4:	1a000004 	bne	114bfc <TLocalTalkTool::AllocateBuffers(void)+0xe4>
        114be8:	e5940330 	ldr	r0, [r4, #816]	; fField816
        114bec:	e1a02004 	mov	r2, r4
        114bf0:	e59f1018 	ldr	r1, [pc, #18]	; 114c10 <TLocalTalkTool::AllocateBuffers(void)+0xf8>
        114bf4:	eb63d658 	bl	1a0a55c <TFIQTimer::$AcquireFIQTimer(void (*)(void *, unsigned long), void *)>
        114bf8:	e5a40434 	str	r0, [r4, #1076]!	; fField1076
        114bfc:	eb09f7eb 	bl	392bb0 <ExitFIQAtomic>
        114c00:	e1a00005 	mov	r0, r5
        114c04:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        114c08:	01a21088 	moveq	r1, r8, lsl #1
        114c0c:	00115964 	andeqs	r5, r1, r4, ror #18
        114c10:	0011596c 	andeqs	r5, r1, ip, ror #18
    */
}

/**
 * Symbol: TLocalTalkTool::TaskConstructor(void)
 * Address: 00114c14
 */
TLocalTalkTool::TaskConstructor(void) {
    /*
        114c14:	e1a0c00d 	mov	ip, sp
        114c18:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        114c1c:	e24cb004 	sub	fp, ip, #4	; 0x4
        114c20:	e1a04000 	mov	r4, r0
        114c24:	eb641c56 	bl	1a1bd84 <TSerTool::$TaskConstructor(void)>
        114c28:	e1b06000 	movs	r6, r0
        114c2c:	1a000018 	bne	114c94 <TLocalTalkTool::TaskConstructor(void)+0x80>
        114c30:	e3a05000 	mov	r5, #0	; 0x0
        114c34:	e5845380 	str	r5, [r4, #896]	; fField896
        114c38:	e5845384 	str	r5, [r4, #900]	; fField900
        114c3c:	e1a00004 	mov	r0, r4
        114c40:	eb000062 	bl	114dd0 <TLocalTalkTool::ResetStats(void)>
        114c44:	e5c45408 	strb	r5, [r4, #1032]	; fField1032
        114c48:	e5c45409 	strb	r5, [r4, #1033]	; fField1033
        114c4c:	e5c4540a 	strb	r5, [r4, #1034]	; fField1034
        114c50:	e5c4540b 	strb	r5, [r4, #1035]	; fField1035
        114c54:	e5c4540c 	strb	r5, [r4, #1036]	; fField1036
        114c58:	e5c4540d 	strb	r5, [r4, #1037]	; fField1037
        114c5c:	e5845410 	str	r5, [r4, #1040]	; fField1040
        114c60:	e5845414 	str	r5, [r4, #1044]	; fField1044
        114c64:	e5845418 	str	r5, [r4, #1048]	; fField1048
        114c68:	e5c45421 	strb	r5, [r4, #1057]	; fField1057
        114c6c:	e5c45422 	strb	r5, [r4, #1058]	; fField1058
        114c70:	e5c4541c 	strb	r5, [r4, #1052]	; fField1052
        114c74:	e5c4541d 	strb	r5, [r4, #1053]	; fField1053
        114c78:	e5c4541e 	strb	r5, [r4, #1054]	; fField1054
        114c7c:	e5c4541f 	strb	r5, [r4, #1055]	; fField1055
        114c80:	e5c45420 	strb	r5, [r4, #1056]	; fField1056
        114c84:	e5845434 	str	r5, [r4, #1076]	; fField1076
        114c88:	e2841e3f 	add	r1, r4, #1008	; 0x3f0
        114c8c:	e1a00004 	mov	r0, r4
        114c90:	eb643107 	bl	1a210b4 <TLocalTalkTool::$SetDefaultBufferSizes(TCMOSerialBuffers *)>
        114c94:	e1a00006 	mov	r0, r6
        114c98:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TLocalTalkTool::DeallocateBuffers(void)
 * Address: 00114c9c
 */
TLocalTalkTool::DeallocateBuffers(void) {
    /*
        114c9c:	e1a0c00d 	mov	ip, sp
        114ca0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        114ca4:	e24cb004 	sub	fp, ip, #4	; 0x4
        114ca8:	e1a04000 	mov	r4, r0
        114cac:	eb09f7b7 	bl	392b90 <EnterFIQAtomic>
        114cb0:	e5940330 	ldr	r0, [r4, #816]	; fField816
        114cb4:	e1a01004 	mov	r1, r4
        114cb8:	eb640fd2 	bl	1a18c08 <TFIQTimer::$ReleaseFIQTimers(void *)>
        114cbc:	e3a05000 	mov	r5, #0	; 0x0
        114cc0:	e5845434 	str	r5, [r4, #1076]	; fField1076
        114cc4:	eb09f7b9 	bl	392bb0 <ExitFIQAtomic>
        114cc8:	e5c4528c 	strb	r5, [r4, #652]	; fField652
        114ccc:	e2840ff2 	add	r0, r4, #968	; 0x3c8
        114cd0:	eb6bc5a1 	bl	1c0635c <TCircleBuf::$Deallocate(void)>
        114cd4:	e2840e3a 	add	r0, r4, #928	; 0x3a0
        114cd8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        114cdc:	ea6bc59e 	b	1c0635c <TCircleBuf::$Deallocate(void)>
    */
}

/**
 * Symbol: TLocalTalkTool::TurnOnSerChip(void)
 * Address: 00114ce0
 */
TLocalTalkTool::TurnOnSerChip(void) {
    /*
        114ce0:	e1a0c00d 	mov	ip, sp
        114ce4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        114ce8:	e24cb004 	sub	fp, ip, #4	; 0x4
        114cec:	e1a04000 	mov	r4, r0
        114cf0:	e3a05000 	mov	r5, #0	; 0x0
        114cf4:	e3a00000 	mov	r0, #0	; 0x0
        114cf8:	e5c4028e 	strb	r0, [r4, #654]	; fField654
        114cfc:	e52d006c 	str	r0, [sp, -#108]!
        114d00:	e28d0008 	add	r0, sp, #8	; 0x8
        114d04:	eb6a771a 	bl	1bb2974 <$setjmp>
        114d08:	e3a06001 	mov	r6, #1	; 0x1
        114d0c:	e3300000 	teq	r0, #0	; 0x0
        114d10:	1a000004 	bne	114d28 <TLocalTalkTool::TurnOnSerChip(void)+0x48>
        114d14:	e1a0000d 	mov	r0, sp
        114d18:	eb6b2cd7 	bl	1be007c <$AddExceptionHandler>
        114d1c:	e5940304 	ldr	r0, [r4, #772]	; fField772
        114d20:	eb09bfb5 	bl	384bfc <TSerialChip::PowerOn(void)>
        114d24:	ea000009 	b	114d50 <TLocalTalkTool::TurnOnSerChip(void)+0x70>
        114d28:	e59d0060 	ldr	r0, [sp, #96]
        114d2c:	e59f1064 	ldr	r1, [pc, #64]	; 114d98 <TLocalTalkTool::TurnOnSerChip(void)+0xb8>
        114d30:	e5911000 	ldr	r1, [r1]
        114d34:	eb6b3916 	bl	1be3194 <$Subexception>
        114d38:	e3300000 	teq	r0, #0	; 0x0
        114d3c:	13a050b5 	movne	r5, #181	; 0xb5
        114d40:	12455b0a 	subne	r5, r5, #10240	; 0x2800
        114d44:	1a000001 	bne	114d50 <TLocalTalkTool::TurnOnSerChip(void)+0x70>
        114d48:	e1a0000d 	mov	r0, sp
        114d4c:	eb6b3500 	bl	1be2154 <$NextHandler>
        114d50:	e1a0000d 	mov	r0, sp
        114d54:	eb6b30d7 	bl	1be10b8 <$ExitHandler>
        114d58:	e28dd06c 	add	sp, sp, #108	; 0x6c
        114d5c:	e3350000 	teq	r5, #0	; 0x0
        114d60:	1a00000a 	bne	114d90 <TLocalTalkTool::TurnOnSerChip(void)+0xb0>
        114d64:	eb09f789 	bl	392b90 <EnterFIQAtomic>
        114d68:	e3a01000 	mov	r1, #0	; 0x0
        114d6c:	e5940304 	ldr	r0, [r4, #772]	; fField772
        114d70:	eb09bfce 	bl	384cb0 <TSerialChip::SetTxDTransceiverEnable(unsigned char)>
        114d74:	e5940304 	ldr	r0, [r4, #772]	; fField772
        114d78:	eb09bfb4 	bl	384c50 <TSerialChip::Reconfigure(void)>
        114d7c:	e3a01011 	mov	r1, #17	; 0x11
        114d80:	e5940304 	ldr	r0, [r4, #772]	; fField772
        114d84:	eb09bfe1 	bl	384d10 <TSerialChip::RxDMAControl(unsigned char)>
        114d88:	e5c4628e 	strb	r6, [r4, #654]	; fField654
        114d8c:	eb09f787 	bl	392bb0 <ExitFIQAtomic>
        114d90:	e1a00005 	mov	r0, r5
        114d94:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        114d98:	003712a4 	eoreqs	r1, r7, r4, lsr #5
    */
}

/**
 * Symbol: TLocalTalkTool::TurnOffSerChip(void)
 * Address: 00114d9c
 */
TLocalTalkTool::TurnOffSerChip(void) {
    /*
        114d9c:	e1a0c00d 	mov	ip, sp
        114da0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        114da4:	e24cb004 	sub	fp, ip, #4	; 0x4
        114da8:	e1a04000 	mov	r4, r0
        114dac:	e5d0028e 	ldrb	r0, [r0, #654]	; fField654
        114db0:	e3300000 	teq	r0, #0	; 0x0
        114db4:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        114db8:	e5940304 	ldr	r0, [r4, #772]	; fField772
        114dbc:	e3300000 	teq	r0, #0	; 0x0
        114dc0:	1b09bf8a 	blne	384bf0 <TSerialChip::PowerOff(void)>
        114dc4:	e3a00000 	mov	r0, #0	; 0x0
        114dc8:	e5c4028e 	strb	r0, [r4, #654]	; fField654
        114dcc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TLocalTalkTool::ResetStats(void)
 * Address: 00114dd0
 */
TLocalTalkTool::ResetStats(void) {
    /*
        114dd0:	e3a01000 	mov	r1, #0	; 0x0
        114dd4:	e5c01394 	strb	r1, [r0, #916]	; fField916
        114dd8:	e5c01395 	strb	r1, [r0, #917]	; fField917
        114ddc:	e5c01396 	strb	r1, [r0, #918]	; fField918
        114de0:	e5c01397 	strb	r1, [r0, #919]	; fField919
        114de4:	e5c01398 	strb	r1, [r0, #920]	; fField920
        114de8:	e5c01399 	strb	r1, [r0, #921]	; fField921
        114dec:	e5c0139a 	strb	r1, [r0, #922]	; fField922
        114df0:	e5c0139b 	strb	r1, [r0, #923]	; fField923
        114df4:	e5c0139d 	strb	r1, [r0, #925]	; fField925
        114df8:	e5c0139c 	strb	r1, [r0, #924]	; fField924
        114dfc:	e5c0139e 	strb	r1, [r0, #926]	; fField926
        114e00:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLocalTalkTool::GetRandomNodeID(void)
 * Address: 00114e04
 */
TLocalTalkTool::GetRandomNodeID(void) {
    /*
        114e04:	e1a0c00d 	mov	ip, sp
        114e08:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        114e0c:	e24cb004 	sub	fp, ip, #4	; 0x4
        114e10:	eb6a7f14 	bl	1bb4a68 <$rand>
        114e14:	e1a01000 	mov	r1, r0
        114e18:	e3a0007f 	mov	r0, #127	; 0x7f
        114e1c:	eb6a76c7 	bl	1bb2940 <$__rt_sdiv>
        114e20:	e2810001 	add	r0, r1, #1	; 0x1
        114e24:	e20000ff 	and	r0, r0, #255	; 0xff
        114e28:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TLocalTalkTool::BitCount(long)
 * Address: 00114e2c
 */
TLocalTalkTool::BitCount(long) {
    /*
        114e2c:	e3a02001 	mov	r2, #1	; 0x1
        114e30:	e3a00000 	mov	r0, #0	; 0x0
        114e34:	e1110002 	tst	r1, r2
        114e38:	12800001 	addne	r0, r0, #1	; 0x1
        114e3c:	e1a02082 	mov	r2, r2, lsl #1
        114e40:	e3520c01 	cmp	r2, #256	; 0x100
        114e44:	bafffffa 	blt	114e34 <TLocalTalkTool::BitCount(long)+0x8>
        114e48:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLocalTalkTool::IHReqHandler(void)
 * Address: 00114e4c
 */
TLocalTalkTool::IHReqHandler(void) {
    /*
        114e4c:	e1a0c00d 	mov	ip, sp
        114e50:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        114e54:	e24cb004 	sub	fp, ip, #4	; 0x4
        114e58:	e1a04000 	mov	r4, r0
        114e5c:	e2800d0e 	add	r0, r0, #896	; 0x380
        114e60:	e3a01000 	mov	r1, #0	; 0x0
        114e64:	eb0a64e6 	bl	3ae204 <Swap>
        114e68:	e5941384 	ldr	r1, [r4, #900]	; fField900
        114e6c:	e0015000 	and	r5, r1, r0
        114e70:	e3150101 	tst	r5, #1073741824	; 0x40000000
        114e74:	1594027c 	ldrne	r0, [r4, #636]	; fField636
        114e78:	13300000 	teqne	r0, #0	; 0x0
        114e7c:	0a000003 	beq	114e90 <TLocalTalkTool::IHReqHandler(void)+0x44>
        114e80:	e1a00004 	mov	r0, r4
        114e84:	e5941000 	ldr	r1, [r4]
        114e88:	e1a0e00f 	mov	lr, pc
        114e8c:	e281ff5e 	add	pc, r1, #376	; 0x178
        114e90:	e3150202 	tst	r5, #536870912	; 0x20000000
        114e94:	0a000007 	beq	114eb8 <TLocalTalkTool::IHReqHandler(void)+0x6c>
        114e98:	e5940384 	ldr	r0, [r4, #900]	; fField900
        114e9c:	e3c00202 	bic	r0, r0, #536870912	; 0x20000000
        114ea0:	e5840384 	str	r0, [r4, #900]	; fField900
        114ea4:	e5940270 	ldr	r0, [r4, #624]	; fField624
        114ea8:	e3300000 	teq	r0, #0	; 0x0
        114eac:	15941418 	ldrne	r1, [r4, #1048]	; fField1048
        114eb0:	11a00004 	movne	r0, r4
        114eb4:	1b642c36 	blne	1a1ff94 <TLocalTalkTool::$DoPutComplete(long)>
        114eb8:	e3150201 	tst	r5, #268435456	; 0x10000000
        114ebc:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        114ec0:	e5940384 	ldr	r0, [r4, #900]	; fField900
        114ec4:	e3c00201 	bic	r0, r0, #268435456	; 0x10000000
        114ec8:	e5840384 	str	r0, [r4, #900]	; fField900
        114ecc:	e5940018 	ldr	r0, [r4, #24]	; fField24
        114ed0:	e3100001 	tst	r0, #1	; 0x1
        114ed4:	0a000004 	beq	114eec <TLocalTalkTool::IHReqHandler(void)+0xa0>
        114ed8:	e1a00004 	mov	r0, r4
        114edc:	e3a01000 	mov	r1, #0	; 0x0
        114ee0:	e5942000 	ldr	r2, [r4]
        114ee4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        114ee8:	e282f054 	add	pc, r2, #84	; 0x54
        114eec:	e3800002 	orr	r0, r0, #2	; 0x2
        114ef0:	e5840018 	str	r0, [r4, #24]	; fField24
        114ef4:	e3a00000 	mov	r0, #0	; 0x0
        114ef8:	e584029c 	str	r0, [r4, #668]	; fField668
        114efc:	e5d4041c 	ldrb	r0, [r4, #1052]	; fField1052
        114f00:	e5c402a4 	strb	r0, [r4, #676]	; fField676
        114f04:	e2841fa5 	add	r1, r4, #660	; 0x294
        114f08:	e1a00004 	mov	r0, r4
        114f0c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        114f10:	ea63e610 	b	1a0e758 <TSerTool::$ControlComplete(TCommToolReply &)>
    */
}

/**
 * Symbol: TLocalTalkTool::IHRequest(unsigned long)
 * Address: 00114f14
 */
TLocalTalkTool::IHRequest(unsigned long) {
    /*
        114f14:	e5902380 	ldr	r2, [r0, #896]	; fField896
        114f18:	e3120102 	tst	r2, #-2147483648	; 0x80000000
        114f1c:	03822102 	orreq	r2, r2, #-2147483648	; 0x80000000
        114f20:	05802380 	streq	r2, [r0, #896]	; fField896
        114f24:	0a63fa95 	beq	1a13980 <TSerTool::$IHRequest(unsigned long)>
        114f28:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)
 * Address: 00114f2c
 */
TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent) {
    /*
        114f2c:	e1a0c00d 	mov	ip, sp
        114f30:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        114f34:	e24cb004 	sub	fp, ip, #4	; 0x4
        114f38:	e1a04000 	mov	r4, r0
        114f3c:	e3a05000 	mov	r5, #0	; 0x0
        114f40:	e3a06000 	mov	r6, #0	; 0x0
        114f44:	e3a0a000 	mov	sl, #0	; 0x0
        114f48:	e3a07009 	mov	r7, #9	; 0x9
        114f4c:	e351000a 	cmp	r1, #10	; 0xa
        114f50:	908ff101 	addls	pc, pc, r1, lsl #2
        114f54:	ea000049 	b	115080 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x154>
        114f58:	ea000048 	b	115080 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x154>
        114f5c:	ea00000e 	b	114f9c <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x70>
        114f60:	ea00000d 	b	114f9c <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x70>
        114f64:	ea000015 	b	114fc0 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x94>
        114f68:	ea00001b 	b	114fdc <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0xb0>
        114f6c:	ea000027 	b	115010 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0xe4>
        114f70:	ea00003a 	b	115060 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x134>
        114f74:	ea00003d 	b	115070 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x144>
        114f78:	ea000020 	b	115000 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0xd4>
        114f7c:	eaffffff 	b	114f80 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x54>
        114f80:	e5940410 	ldr	r0, [r4, #1040]	; fField1040
        114f84:	e3300000 	teq	r0, #0	; 0x0
        114f88:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        114f8c:	e2849e3a 	add	r9, r4, #928	; 0x3a0
        114f90:	e2848fce 	add	r8, r4, #824	; 0x338
        114f94:	e3a0a001 	mov	sl, #1	; 0x1
        114f98:	ea00003b 	b	11508c <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x160>
        114f9c:	e3a00002 	mov	r0, #2	; 0x2
        114fa0:	e2844e41 	add	r4, r4, #1040	; 0x410
        114fa4:	e8840003 	stmia	r4, {r0, r1}
        114fa8:	e2444e41 	sub	r4, r4, #1040	; 0x410
        114fac:	e3310002 	teq	r1, #2	; 0x2
        114fb0:	1afffff5 	bne	114f8c <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x60>
        114fb4:	e3a00001 	mov	r0, #1	; 0x1
        114fb8:	e5840410 	str	r0, [r4, #1040]	; fField1040
        114fbc:	eafffff2 	b	114f8c <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x60>
        114fc0:	e584a410 	str	sl, [r4, #1040]	; fField1040
        114fc4:	e1a00004 	mov	r0, r4
        114fc8:	eb64302c 	bl	1a21080 <TLocalTalkTool::$ResetTransmitTimer(void)>
        114fcc:	e1a00004 	mov	r0, r4
        114fd0:	e3a01000 	mov	r1, #0	; 0x0
        114fd4:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        114fd8:	ea000193 	b	11562c <TLocalTalkTool::SetAbortIntEnable(unsigned char)>
        114fdc:	e5940410 	ldr	r0, [r4, #1040]	; fField1040
        114fe0:	e330000c 	teq	r0, #12	; 0xc
        114fe4:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        114fe8:	e1a00004 	mov	r0, r4
        114fec:	eb643023 	bl	1a21080 <TLocalTalkTool::$ResetTransmitTimer(void)>
        114ff0:	e5d4039b 	ldrb	r0, [r4, #923]	; fField923
        114ff4:	e2800001 	add	r0, r0, #1	; 0x1
        114ff8:	e5c4039b 	strb	r0, [r4, #923]	; fField923
        114ffc:	eaffffe2 	b	114f8c <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x60>
        115000:	e5940410 	ldr	r0, [r4, #1040]	; fField1040
        115004:	e3300006 	teq	r0, #6	; 0x6
        115008:	0affffdf 	beq	114f8c <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x60>
        11500c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        115010:	e5940410 	ldr	r0, [r4, #1040]	; fField1040
        115014:	e330000c 	teq	r0, #12	; 0xc
        115018:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        11501c:	e1a00004 	mov	r0, r4
        115020:	e3a01000 	mov	r1, #0	; 0x0
        115024:	eb000180 	bl	11562c <TLocalTalkTool::SetAbortIntEnable(unsigned char)>
        115028:	e5d4039c 	ldrb	r0, [r4, #924]	; fField924
        11502c:	e2800001 	add	r0, r0, #1	; 0x1
        115030:	e5c4039c 	strb	r0, [r4, #924]	; fField924
        115034:	e5d4040e 	ldrb	r0, [r4, #1038]	; fField1038
        115038:	e2400001 	sub	r0, r0, #1	; 0x1
        11503c:	e5c4040e 	strb	r0, [r4, #1038]	; fField1038
        115040:	e31000ff 	tst	r0, #255	; 0xff
        115044:	03e0605a 	mvneq	r6, #90	; 0x5a
        115048:	02466c46 	subeq	r6, r6, #17920	; 0x4600
        11504c:	05847410 	streq	r7, [r4, #1040]	; fField1040
        115050:	0affffcd 	beq	114f8c <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x60>
        115054:	e1a00004 	mov	r0, r4
        115058:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        11505c:	ea642c00 	b	1a20064 <TLocalTalkTool::$ReceiverErrorReset(void)>
        115060:	e5940410 	ldr	r0, [r4, #1040]	; fField1040
        115064:	e3300004 	teq	r0, #4	; 0x4
        115068:	0affffc7 	beq	114f8c <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x60>
        11506c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        115070:	e5940410 	ldr	r0, [r4, #1040]	; fField1040
        115074:	e3300005 	teq	r0, #5	; 0x5
        115078:	0affffc3 	beq	114f8c <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x60>
        11507c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        115080:	e3350000 	teq	r5, #0	; 0x0
        115084:	0affffc0 	beq	114f8c <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x60>
        115088:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        11508c:	e5940410 	ldr	r0, [r4, #1040]	; fField1040
        115090:	e350000c 	cmp	r0, #12	; 0xc
        115094:	908ff100 	addls	pc, pc, r0, lsl #2
        115098:	ea000126 	b	115538 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x60c>
        11509c:	ea000125 	b	115538 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x60c>
        1150a0:	ea00000a 	b	1150d0 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x1a4>
        1150a4:	ea000016 	b	115104 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x1d8>
        1150a8:	ea000038 	b	115190 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x264>
        1150ac:	ea000056 	b	11520c <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x2e0>
        1150b0:	ea000066 	b	115250 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x324>
        1150b4:	ea0000c0 	b	1153bc <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x490>
        1150b8:	ea0000c1 	b	1153c4 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x498>
        1150bc:	ea0000d3 	b	115410 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x4e4>
        1150c0:	ea0000e5 	b	11545c <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x530>
        1150c4:	ea0000f0 	b	11548c <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x560>
        1150c8:	ea000105 	b	1154e4 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x5b8>
        1150cc:	ea000117 	b	115530 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x604>
        1150d0:	e5d4041c 	ldrb	r0, [r4, #1052]	; fField1052
        1150d4:	e3300000 	teq	r0, #0	; 0x0
        1150d8:	1a000002 	bne	1150e8 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x1bc>
        1150dc:	e1a00004 	mov	r0, r4
        1150e0:	eb642bb2 	bl	1a1ffb0 <TLocalTalkTool::$GetRandomNodeID(void)>
        1150e4:	e5c4041c 	strb	r0, [r4, #1052]	; fField1052
        1150e8:	e5d4141c 	ldrb	r1, [r4, #1052]	; fField1052
        1150ec:	e5940304 	ldr	r0, [r4, #772]	; fField772
        1150f0:	eb09bf09 	bl	384d1c <TSerialChip::SetSDLCAddress(unsigned char)>
        1150f4:	e3a07000 	mov	r7, #0	; 0x0
        1150f8:	e5c4741d 	strb	r7, [r4, #1053]	; fField1053
        1150fc:	e5c47420 	strb	r7, [r4, #1056]	; fField1056
        115100:	ea0000df 	b	115484 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x558>
        115104:	e5d4140a 	ldrb	r1, [r4, #1034]	; fField1034
        115108:	e1a00004 	mov	r0, r4
        11510c:	eb64278b 	bl	1a1ef40 <TLocalTalkTool::$BitCount(long)>
        115110:	e3500002 	cmp	r0, #2	; 0x2
        115114:	da000006 	ble	115134 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x208>
        115118:	e5d40408 	ldrb	r0, [r4, #1032]	; fField1032
        11511c:	e08a0080 	add	r0, sl, r0, lsl #1
        115120:	e200000f 	and	r0, r0, #15	; 0xf
        115124:	e5c40408 	strb	r0, [r4, #1032]	; fField1032
        115128:	e3a07000 	mov	r7, #0	; 0x0
        11512c:	e5c4740a 	strb	r7, [r4, #1034]	; fField1034
        115130:	ea000009 	b	11515c <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x230>
        115134:	e5d4140b 	ldrb	r1, [r4, #1035]	; fField1035
        115138:	e1a00004 	mov	r0, r4
        11513c:	eb64277f 	bl	1a1ef40 <TLocalTalkTool::$BitCount(long)>
        115140:	e3500002 	cmp	r0, #2	; 0x2
        115144:	aa000004 	bge	11515c <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x230>
        115148:	e5d40408 	ldrb	r0, [r4, #1032]	; fField1032
        11514c:	e1a000a0 	mov	r0, r0, lsr #1
        115150:	e5c40408 	strb	r0, [r4, #1032]	; fField1032
        115154:	e3a000ff 	mov	r0, #255	; 0xff
        115158:	e5c4040b 	strb	r0, [r4, #1035]	; fField1035
        11515c:	e5d4040b 	ldrb	r0, [r4, #1035]	; fField1035
        115160:	e1a00080 	mov	r0, r0, lsl #1
        115164:	e5c4040b 	strb	r0, [r4, #1035]	; fField1035
        115168:	e5d4040a 	ldrb	r0, [r4, #1034]	; fField1034
        11516c:	e1a00080 	mov	r0, r0, lsl #1
        115170:	e5c4040a 	strb	r0, [r4, #1034]	; fField1034
        115174:	e5d40408 	ldrb	r0, [r4, #1032]	; fField1032
        115178:	e5c40409 	strb	r0, [r4, #1033]	; fField1033
        11517c:	e3a00020 	mov	r0, #32	; 0x20
        115180:	e5c4040d 	strb	r0, [r4, #1037]	; fField1037
        115184:	e5c4040e 	strb	r0, [r4, #1038]	; fField1038
        115188:	e5c4040c 	strb	r0, [r4, #1036]	; fField1036
        11518c:	ea0000e7 	b	115530 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x604>
        115190:	e5d40422 	ldrb	r0, [r4, #1058]	; fField1058
        115194:	e3300000 	teq	r0, #0	; 0x0
        115198:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        11519c:	e3a01000 	mov	r1, #0	; 0x0
        1151a0:	e5940304 	ldr	r0, [r4, #772]	; fField772
        1151a4:	eb09bee2 	bl	384d34 <TSerialChip::LinkIsFree(unsigned char)>
        1151a8:	e3300000 	teq	r0, #0	; 0x0
        1151ac:	1a000008 	bne	1151d4 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x2a8>
        1151b0:	e3a0000b 	mov	r0, #11	; 0xb
        1151b4:	e5840410 	str	r0, [r4, #1040]	; fField1040
        1151b8:	e5d40409 	ldrb	r0, [r4, #1033]	; fField1033
        1151bc:	e3800001 	orr	r0, r0, #1	; 0x1
        1151c0:	e5c40409 	strb	r0, [r4, #1033]	; fField1033
        1151c4:	e5d4040b 	ldrb	r0, [r4, #1035]	; fField1035
        1151c8:	e3800001 	orr	r0, r0, #1	; 0x1
        1151cc:	e5c4040b 	strb	r0, [r4, #1035]	; fField1035
        1151d0:	ea0000d8 	b	115538 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x60c>
        1151d4:	eb6a7e23 	bl	1bb4a68 <$rand>
        1151d8:	e5d41409 	ldrb	r1, [r4, #1033]	; fField1033
        1151dc:	e0100001 	ands	r0, r0, r1
        1151e0:	e3a01004 	mov	r1, #4	; 0x4
        1151e4:	e5841410 	str	r1, [r4, #1040]	; fField1040
        1151e8:	0a0000d2 	beq	115538 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x60c>
        1151ec:	e0801180 	add	r1, r0, r0, lsl #3
        1151f0:	e0811200 	add	r1, r1, r0, lsl #4
        1151f4:	e1a01201 	mov	r1, r1, lsl #4
        1151f8:	e1a00004 	mov	r0, r4
        1151fc:	e3a02006 	mov	r2, #6	; 0x6
        115200:	eb642fb3 	bl	1a210d4 <TLocalTalkTool::$SetTransmitTimer(unsigned long, TLocalTalkTool::TransmitEvent)>
        115204:	e3a05001 	mov	r5, #1	; 0x1
        115208:	ea0000ca 	b	115538 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x60c>
        11520c:	e5d40422 	ldrb	r0, [r4, #1058]	; fField1058
        115210:	e3300000 	teq	r0, #0	; 0x0
        115214:	1a000004 	bne	11522c <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x300>
        115218:	e3a01001 	mov	r1, #1	; 0x1
        11521c:	e5940304 	ldr	r0, [r4, #772]	; fField772
        115220:	eb09bec3 	bl	384d34 <TSerialChip::LinkIsFree(unsigned char)>
        115224:	e3300000 	teq	r0, #0	; 0x0
        115228:	1a000001 	bne	115234 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x308>
        11522c:	e3a00008 	mov	r0, #8	; 0x8
        115230:	ea0000bf 	b	115534 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x608>
        115234:	e3a00005 	mov	r0, #5	; 0x5
        115238:	e5840410 	str	r0, [r4, #1040]	; fField1040
        11523c:	e1a00004 	mov	r0, r4
        115240:	e3a02007 	mov	r2, #7	; 0x7
        115244:	e3a01d19 	mov	r1, #1600	; 0x640
        115248:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        11524c:	ea642fa0 	b	1a210d4 <TLocalTalkTool::$SetTransmitTimer(unsigned long, TLocalTalkTool::TransmitEvent)>
        115250:	e5d40422 	ldrb	r0, [r4, #1058]	; fField1058
        115254:	e3300000 	teq	r0, #0	; 0x0
        115258:	1afffff3 	bne	11522c <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x300>
        11525c:	e3a01000 	mov	r1, #0	; 0x0
        115260:	e5940304 	ldr	r0, [r4, #772]	; fField772
        115264:	eb09beb2 	bl	384d34 <TSerialChip::LinkIsFree(unsigned char)>
        115268:	e3300000 	teq	r0, #0	; 0x0
        11526c:	0affffee 	beq	11522c <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x300>
        115270:	e24dd004 	sub	sp, sp, #4	; 0x4
        115274:	e5940414 	ldr	r0, [r4, #1044]	; fField1044
        115278:	e3300002 	teq	r0, #2	; 0x2
        11527c:	1a000008 	bne	1152a4 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x378>
        115280:	e5d4041c 	ldrb	r0, [r4, #1052]	; fField1052
        115284:	e5cd0000 	strb	r0, [sp]
        115288:	e5940304 	ldr	r0, [r4, #772]	; fField772
        11528c:	e5dd2000 	ldrb	r2, [sp]
        115290:	e3a03001 	mov	r3, #1	; 0x1
        115294:	e3a01081 	mov	r1, #129	; 0x81
        115298:	eb09bea8 	bl	384d40 <TSerialChip::SendControlPacket(unsigned char, unsigned char, unsigned char)>
        11529c:	e1a07000 	mov	r7, r0
        1152a0:	ea00000b 	b	1152d4 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x3a8>
        1152a4:	e1a00009 	mov	r0, r9
        1152a8:	e1a0100d 	mov	r1, sp
        1152ac:	eb6bc432 	bl	1c0637c <TCircleBuf::$PeekNextByte(unsigned char *)>
        1152b0:	e5940304 	ldr	r0, [r4, #772]	; fField772
        1152b4:	e5dd2000 	ldrb	r2, [sp]
        1152b8:	e3a03001 	mov	r3, #1	; 0x1
        1152bc:	e3a01084 	mov	r1, #132	; 0x84
        1152c0:	eb09be9e 	bl	384d40 <TSerialChip::SendControlPacket(unsigned char, unsigned char, unsigned char)>
        1152c4:	e1a07000 	mov	r7, r0
        1152c8:	e1a00008 	mov	r0, r8
        1152cc:	e3a01000 	mov	r1, #0	; 0x0
        1152d0:	eb6ba302 	bl	1bfdee0 <TDelayTimer::$ResetTimeOut(unsigned long)>
        1152d4:	e3370000 	teq	r7, #0	; 0x0
        1152d8:	03a00008 	moveq	r0, #8	; 0x8
        1152dc:	0a000033 	beq	1153b0 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x484>
        1152e0:	e5dd0000 	ldrb	r0, [sp]
        1152e4:	e33000ff 	teq	r0, #255	; 0xff
        1152e8:	1a00000d 	bne	115324 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x3f8>
        1152ec:	e1a00004 	mov	r0, r4
        1152f0:	e3a01f96 	mov	r1, #600	; 0x258
        1152f4:	eb64271e 	bl	1a1ef74 <TLocalTalkTool::$DelayLinkIsFree(unsigned long)>
        1152f8:	e3300000 	teq	r0, #0	; 0x0
        1152fc:	0a00002a 	beq	1153ac <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x480>
        115300:	e3a00006 	mov	r0, #6	; 0x6
        115304:	e5840410 	str	r0, [r4, #1040]	; fField1040
        115308:	e3a01001 	mov	r1, #1	; 0x1
        11530c:	e5940304 	ldr	r0, [r4, #772]	; fField772
        115310:	eb09be7b 	bl	384d04 <TSerialChip::TxDMAControl(unsigned char)>
        115314:	e3300000 	teq	r0, #0	; 0x0
        115318:	13a05000 	movne	r5, #0	; 0x0
        11531c:	03a05001 	moveq	r5, #1	; 0x1
        115320:	ea000023 	b	1153b4 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x488>
        115324:	e5d4041e 	ldrb	r0, [r4, #1054]	; fField1054
        115328:	e3300000 	teq	r0, #0	; 0x0
        11532c:	15d40398 	ldrneb	r0, [r4, #920]	; fField920
        115330:	12800001 	addne	r0, r0, #1	; 0x1
        115334:	15c40398 	strneb	r0, [r4, #920]	; fField920
        115338:	e3a07000 	mov	r7, #0	; 0x0
        11533c:	e5c4741e 	strb	r7, [r4, #1054]	; fField1054
        115340:	e1a00004 	mov	r0, r4
        115344:	eb642b16 	bl	1a1ffa4 <TLocalTalkTool::$GetControlPacket(void)>
        115348:	e5d40422 	ldrb	r0, [r4, #1058]	; fField1058
        11534c:	e3300000 	teq	r0, #0	; 0x0
        115350:	1a000015 	bne	1153ac <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x480>
        115354:	e5940414 	ldr	r0, [r4, #1044]	; fField1044
        115358:	e3300002 	teq	r0, #2	; 0x2
        11535c:	1a000005 	bne	115378 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x44c>
        115360:	e5d40420 	ldrb	r0, [r4, #1056]	; fField1056
        115364:	e3300000 	teq	r0, #0	; 0x0
        115368:	15c4741c 	strneb	r7, [r4, #1052]	; fField1052
        11536c:	1584a410 	strne	sl, [r4, #1040]	; fField1040
        115370:	1a00000f 	bne	1153b4 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x488>
        115374:	ea00000c 	b	1153ac <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x480>
        115378:	e5d4041e 	ldrb	r0, [r4, #1054]	; fField1054
        11537c:	e3300000 	teq	r0, #0	; 0x0
        115380:	0a000009 	beq	1153ac <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x480>
        115384:	e3a00006 	mov	r0, #6	; 0x6
        115388:	e5840410 	str	r0, [r4, #1040]	; fField1040
        11538c:	e3a01001 	mov	r1, #1	; 0x1
        115390:	e5940304 	ldr	r0, [r4, #772]	; fField772
        115394:	eb09be5a 	bl	384d04 <TSerialChip::TxDMAControl(unsigned char)>
        115398:	e3300000 	teq	r0, #0	; 0x0
        11539c:	13a05000 	movne	r5, #0	; 0x0
        1153a0:	03a05001 	moveq	r5, #1	; 0x1
        1153a4:	e5c4741e 	strb	r7, [r4, #1054]	; fField1054
        1153a8:	ea000001 	b	1153b4 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x488>
        1153ac:	e3a00007 	mov	r0, #7	; 0x7
        1153b0:	e5840410 	str	r0, [r4, #1040]	; fField1040
        1153b4:	e28dd004 	add	sp, sp, #4	; 0x4
        1153b8:	ea00005e 	b	115538 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x60c>
        1153bc:	e3a0000a 	mov	r0, #10	; 0xa
        1153c0:	ea00005b 	b	115534 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x608>
        1153c4:	e5d40399 	ldrb	r0, [r4, #921]	; fField921
        1153c8:	e2800001 	add	r0, r0, #1	; 0x1
        1153cc:	e5c40399 	strb	r0, [r4, #921]	; fField921
        1153d0:	e5d4040a 	ldrb	r0, [r4, #1034]	; fField1034
        1153d4:	e3800001 	orr	r0, r0, #1	; 0x1
        1153d8:	e5c4040a 	strb	r0, [r4, #1034]	; fField1034
        1153dc:	e5d40409 	ldrb	r0, [r4, #1033]	; fField1033
        1153e0:	e08a0080 	add	r0, sl, r0, lsl #1
        1153e4:	e200000f 	and	r0, r0, #15	; 0xf
        1153e8:	e5c40409 	strb	r0, [r4, #1033]	; fField1033
        1153ec:	e5d4040c 	ldrb	r0, [r4, #1036]	; fField1036
        1153f0:	e2400001 	sub	r0, r0, #1	; 0x1
        1153f4:	e5c4040c 	strb	r0, [r4, #1036]	; fField1036
        1153f8:	e31000ff 	tst	r0, #255	; 0xff
        1153fc:	03e06059 	mvneq	r6, #89	; 0x59
        115400:	02466c46 	subeq	r6, r6, #17920	; 0x4600
        115404:	0a000011 	beq	115450 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x524>
        115408:	e3a0000b 	mov	r0, #11	; 0xb
        11540c:	ea000048 	b	115534 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x608>
        115410:	e5d4039a 	ldrb	r0, [r4, #922]	; fField922
        115414:	e2800001 	add	r0, r0, #1	; 0x1
        115418:	e5c4039a 	strb	r0, [r4, #922]	; fField922
        11541c:	e5d4040b 	ldrb	r0, [r4, #1035]	; fField1035
        115420:	e3800001 	orr	r0, r0, #1	; 0x1
        115424:	e5c4040b 	strb	r0, [r4, #1035]	; fField1035
        115428:	e5d40409 	ldrb	r0, [r4, #1033]	; fField1033
        11542c:	e3800001 	orr	r0, r0, #1	; 0x1
        115430:	e5c40409 	strb	r0, [r4, #1033]	; fField1033
        115434:	e5d4040d 	ldrb	r0, [r4, #1037]	; fField1037
        115438:	e2400001 	sub	r0, r0, #1	; 0x1
        11543c:	e5c4040d 	strb	r0, [r4, #1037]	; fField1037
        115440:	e31000ff 	tst	r0, #255	; 0xff
        115444:	1affffef 	bne	115408 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x4dc>
        115448:	e3e0605a 	mvn	r6, #90	; 0x5a
        11544c:	e2466c46 	sub	r6, r6, #17920	; 0x4600
        115450:	e3a07009 	mov	r7, #9	; 0x9
        115454:	e5847410 	str	r7, [r4, #1040]	; fField1040
        115458:	ea000036 	b	115538 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x60c>
        11545c:	e5940414 	ldr	r0, [r4, #1044]	; fField1044
        115460:	e3300002 	teq	r0, #2	; 0x2
        115464:	1affffd4 	bne	1153bc <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x490>
        115468:	e5d4041d 	ldrb	r0, [r4, #1053]	; fField1053
        11546c:	e2800001 	add	r0, r0, #1	; 0x1
        115470:	e5c4041d 	strb	r0, [r4, #1053]	; fField1053
        115474:	e20000ff 	and	r0, r0, #255	; 0xff
        115478:	e3500014 	cmp	r0, #20	; 0x14
        11547c:	c5c4a41f 	strgtb	sl, [r4, #1055]	; fField1055
        115480:	caffffcd 	bgt	1153bc <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x490>
        115484:	e3a00002 	mov	r0, #2	; 0x2
        115488:	ea000029 	b	115534 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x608>
        11548c:	e3a07000 	mov	r7, #0	; 0x0
        115490:	e5846418 	str	r6, [r4, #1048]	; fField1048
        115494:	e5847410 	str	r7, [r4, #1040]	; fField1040
        115498:	e5940414 	ldr	r0, [r4, #1044]	; fField1044
        11549c:	e3300001 	teq	r0, #1	; 0x1
        1154a0:	e5940384 	ldr	r0, [r4, #900]	; fField900
        1154a4:	1a000004 	bne	1154bc <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x590>
        1154a8:	e3100202 	tst	r0, #536870912	; 0x20000000
        1154ac:	15940380 	ldrne	r0, [r4, #896]	; fField896
        1154b0:	13800202 	orrne	r0, r0, #536870912	; 0x20000000
        1154b4:	1a000004 	bne	1154cc <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x5a0>
        1154b8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1154bc:	e3100201 	tst	r0, #268435456	; 0x10000000
        1154c0:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1154c4:	e5940380 	ldr	r0, [r4, #896]	; fField896
        1154c8:	e3800201 	orr	r0, r0, #268435456	; 0x10000000
        1154cc:	e5840380 	str	r0, [r4, #896]	; fField896
        1154d0:	e1a00004 	mov	r0, r4
        1154d4:	e3a01000 	mov	r1, #0	; 0x0
        1154d8:	e5942000 	ldr	r2, [r4]
        1154dc:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        1154e0:	e282fd06 	add	pc, r2, #384	; 0x180
        1154e4:	e5d40422 	ldrb	r0, [r4, #1058]	; fField1058
        1154e8:	e3300000 	teq	r0, #0	; 0x0
        1154ec:	1a00000f 	bne	115530 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x604>
        1154f0:	e3a01000 	mov	r1, #0	; 0x0
        1154f4:	e5940304 	ldr	r0, [r4, #772]	; fField772
        1154f8:	eb09be0d 	bl	384d34 <TSerialChip::LinkIsFree(unsigned char)>
        1154fc:	e3300000 	teq	r0, #0	; 0x0
        115500:	1a00000a 	bne	115530 <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x604>
        115504:	e1a00004 	mov	r0, r4
        115508:	e3a01001 	mov	r1, #1	; 0x1
        11550c:	eb000046 	bl	11562c <TLocalTalkTool::SetAbortIntEnable(unsigned char)>
        115510:	e1a00004 	mov	r0, r4
        115514:	e3a02005 	mov	r2, #5	; 0x5
        115518:	e59f100c 	ldr	r1, [pc, #c]	; 11552c <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x600>
        11551c:	eb642eec 	bl	1a210d4 <TLocalTalkTool::$SetTransmitTimer(unsigned long, TLocalTalkTool::TransmitEvent)>
        115520:	e3a0000c 	mov	r0, #12	; 0xc
        115524:	e5a40410 	str	r0, [r4, #1040]!	; fField1040
        115528:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        11552c:	000179f5 	streqd	r7, [r1], -r5
        115530:	e3a00003 	mov	r0, #3	; 0x3
        115534:	e5840410 	str	r0, [r4, #1040]	; fField1040
        115538:	e3350000 	teq	r5, #0	; 0x0
        11553c:	0afffed2 	beq	11508c <TLocalTalkTool::TransmitStateMachine(TLocalTalkTool::TransmitEvent)+0x160>
        115540:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TLocalTalkTool::DelayLinkIsFree(unsigned long)
 * Address: 00115544
 */
TLocalTalkTool::DelayLinkIsFree(unsigned long) {
    /*
        115544:	e1a0c00d 	mov	ip, sp
        115548:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        11554c:	e24cb004 	sub	fp, ip, #4	; 0x4
        115550:	e1a05000 	mov	r5, r0
        115554:	e1a04001 	mov	r4, r1
        115558:	e2800fce 	add	r0, r0, #824	; 0x338
        11555c:	e1a06000 	mov	r6, r0
        115560:	eb6ba261 	bl	1bfdeec <TDelayTimer::$TimedOut(unsigned long)>
        115564:	e3300000 	teq	r0, #0	; 0x0
        115568:	1a000009 	bne	115594 <TLocalTalkTool::DelayLinkIsFree(unsigned long)+0x50>
        11556c:	e3a01000 	mov	r1, #0	; 0x0
        115570:	e5950304 	ldr	r0, [r5, #772]	; fField772
        115574:	eb09bdee 	bl	384d34 <TSerialChip::LinkIsFree(unsigned char)>
        115578:	e1b07000 	movs	r7, r0
        11557c:	0a000004 	beq	115594 <TLocalTalkTool::DelayLinkIsFree(unsigned long)+0x50>
        115580:	e1a00006 	mov	r0, r6
        115584:	e1a01004 	mov	r1, r4
        115588:	eb6ba257 	bl	1bfdeec <TDelayTimer::$TimedOut(unsigned long)>
        11558c:	e3300000 	teq	r0, #0	; 0x0
        115590:	0afffff5 	beq	11556c <TLocalTalkTool::DelayLinkIsFree(unsigned long)+0x28>
        115594:	e1a00007 	mov	r0, r7
        115598:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TLocalTalkTool::TaskDestructor(void)
 * Address: 0011559c
 */
TLocalTalkTool::TaskDestructor(void) {
    /*
        11559c:	ea641a00 	b	1a1bda4 <TSerTool::$TaskDestructor(void)>
    */
}

/**
 * Symbol: TLocalTalkTool::GetControlPacket(void)
 * Address: 001155a0
 */
TLocalTalkTool::GetControlPacket(void) {
    /*
        1155a0:	e5900304 	ldr	r0, [r0, #772]	; fField772
        1155a4:	e3a010f4 	mov	r1, #244	; 0xf4
        1155a8:	e2811b01 	add	r1, r1, #1024	; 0x400
        1155ac:	ea09bde6 	b	384d4c <TSerialChip::WaitForPacket(unsigned long)>
    */
}

/**
 * Symbol: TLocalTalkTool::ReceiverErrorReset(void)
 * Address: 001155b0
 */
TLocalTalkTool::ReceiverErrorReset(void) {
    /*
        1155b0:	e1a0c00d 	mov	ip, sp
        1155b4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1155b8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1155bc:	e1a04000 	mov	r4, r0
        1155c0:	e5900304 	ldr	r0, [r0, #772]	; fField772
        1155c4:	e3a01001 	mov	r1, #1	; 0x1
        1155c8:	eb09bdd6 	bl	384d28 <TSerialChip::ReEnableReceiver(unsigned char)>
        1155cc:	e3a00001 	mov	r0, #1	; 0x1
        1155d0:	e5c40422 	strb	r0, [r4, #1058]	; fField1058
        1155d4:	e1a00004 	mov	r0, r4
        1155d8:	e3a01001 	mov	r1, #1	; 0x1
        1155dc:	eb000012 	bl	11562c <TLocalTalkTool::SetAbortIntEnable(unsigned char)>
        1155e0:	e1a00004 	mov	r0, r4
        1155e4:	e3a0200a 	mov	r2, #10	; 0xa
        1155e8:	e59f1004 	ldr	r1, [pc, #4]	; 1155f4 <TLocalTalkTool::ReceiverErrorReset(void)+0x44>
        1155ec:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1155f0:	ea642eb7 	b	1a210d4 <TLocalTalkTool::$SetTransmitTimer(unsigned long, TLocalTalkTool::TransmitEvent)>
        1155f4:	00012e5e 	andeq	r2, r1, lr, asr lr
    */
}

/**
 * Symbol: TLocalTalkTool::StopReadDataPacket(void)
 * Address: 001155f8
 */
TLocalTalkTool::StopReadDataPacket(void) {
    /*
        1155f8:	e1a0c00d 	mov	ip, sp
        1155fc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        115600:	e24cb004 	sub	fp, ip, #4	; 0x4
        115604:	e1a04000 	mov	r4, r0
        115608:	e3a00000 	mov	r0, #0	; 0x0
        11560c:	e5c40422 	strb	r0, [r4, #1058]	; fField1058
        115610:	e1a00004 	mov	r0, r4
        115614:	e3a01000 	mov	r1, #0	; 0x0
        115618:	eb000003 	bl	11562c <TLocalTalkTool::SetAbortIntEnable(unsigned char)>
        11561c:	e1a00004 	mov	r0, r4
        115620:	e3a01009 	mov	r1, #9	; 0x9
        115624:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        115628:	ea6432be 	b	1a22128 <TLocalTalkTool::$TransmitStateMachine(TLocalTalkTool::TransmitEvent)>
    */
}

/**
 * Symbol: TLocalTalkTool::SetAbortIntEnable(unsigned char)
 * Address: 0011562c
 */
TLocalTalkTool::SetAbortIntEnable(unsigned char) {
    /*
        11562c:	e20120ff 	and	r2, r1, #255	; 0xff
        115630:	e5900304 	ldr	r0, [r0, #772]	; fField772
        115634:	e3a01001 	mov	r1, #1	; 0x1
        115638:	ea09bda2 	b	384cc8 <TSerialChip::SetIntSourceEnable(unsigned long, unsigned char)>
    */
}

/**
 * Symbol: TLocalTalkTool::TxBEmptyInt(void)
 * Address: 0011563c
 */
TLocalTalkTool::TxBEmptyInt(void) {
    /*
        11563c:	e5900304 	ldr	r0, [r0, #772]	; fField772
        115640:	ea09bd4c 	b	384b78 <TSerialChip::ResetTxBEmpty(void)>
    */
}

/**
 * Symbol: TLocalTalkTool::ExtStatusInt(void)
 * Address: 00115644
 */
TLocalTalkTool::ExtStatusInt(void) {
    /*
        115644:	e1a0c00d 	mov	ip, sp
        115648:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        11564c:	e24cb004 	sub	fp, ip, #4	; 0x4
        115650:	e1a04000 	mov	r4, r0
        115654:	e5900304 	ldr	r0, [r0, #772]	; fField772
        115658:	eb09bd55 	bl	384bb4 <TSerialChip::GetSerialStatus(void)>
        11565c:	e1a05000 	mov	r5, r0
        115660:	e5940304 	ldr	r0, [r4, #772]	; fField772
        115664:	eb09bd55 	bl	384bc0 <TSerialChip::ResetSerialStatus(void)>
        115668:	e3150080 	tst	r5, #128	; 0x80
        11566c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        115670:	e1a00004 	mov	r0, r4
        115674:	e3a01000 	mov	r1, #0	; 0x0
        115678:	ebffffeb 	bl	11562c <TLocalTalkTool::SetAbortIntEnable(unsigned char)>
        11567c:	e5d40422 	ldrb	r0, [r4, #1058]	; fField1058
        115680:	e3300000 	teq	r0, #0	; 0x0
        115684:	e1a00004 	mov	r0, r4
        115688:	03a01004 	moveq	r1, #4	; 0x4
        11568c:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
        115690:	0a6432a4 	beq	1a22128 <TLocalTalkTool::$TransmitStateMachine(TLocalTalkTool::TransmitEvent)>
        115694:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        115698:	1a64329a 	bne	1a22108 <TLocalTalkTool::$StopReadDataPacket(void)>
    */
}

/**
 * Symbol: TLocalTalkTool::RxCSpecialInt(void)
 * Address: 0011569c
 */
TLocalTalkTool::RxCSpecialInt(void) {
    /*
        11569c:	ea642a70 	b	1a20064 <TLocalTalkTool::$ReceiverErrorReset(void)>
    */
}

/**
 * Symbol: TLocalTalkTool::RxCAvailableInt(void)
 * Address: 001156a0
 */
TLocalTalkTool::RxCAvailableInt(void) {
    /*
        1156a0:	e5900304 	ldr	r0, [r0, #772]	; fField772
        1156a4:	ea09bd36 	b	384b84 <TSerialChip::GetByte(void)>
    */
}

/**
 * Symbol: TLocalTalkTool::GetChannelIntHandlers(SCCChannelInts *)
 * Address: 001156a8
 */
TLocalTalkTool::GetChannelIntHandlers(SCCChannelInts *) {
    /*
        1156a8:	e59f001c 	ldr	r0, [pc, #1c]	; 1156cc <TLocalTalkTool::GetChannelIntHandlers(SCCChannelInts *)+0x24>
        1156ac:	e5810000 	str	r0, [r1]
        1156b0:	e59f0018 	ldr	r0, [pc, #18]	; 1156d0 <TLocalTalkTool::GetChannelIntHandlers(SCCChannelInts *)+0x28>
        1156b4:	e5810004 	str	r0, [r1, #4]
        1156b8:	e59f0014 	ldr	r0, [pc, #14]	; 1156d4 <TLocalTalkTool::GetChannelIntHandlers(SCCChannelInts *)+0x2c>
        1156bc:	e5810008 	str	r0, [r1, #8]
        1156c0:	e59f0010 	ldr	r0, [pc, #10]	; 1156d8 <TLocalTalkTool::GetChannelIntHandlers(SCCChannelInts *)+0x30>
        1156c4:	e5a1000c 	str	r0, [r1, #12]!
        1156c8:	e1a0f00e 	mov	pc, lr
        1156cc:	0011563c 	andeqs	r5, r1, ip, lsr r6
        1156d0:	01a1ff9c 	streqb	pc, [r1, ip]!
        1156d4:	001156a0 	andeqs	r5, r1, r0, lsr #13
        1156d8:	0011569c 	muleqs	r1, ip, r6
    */
}

/**
 * Symbol: TLocalTalkTool::RxDMAPacketInterrupt(unsigned long)
 * Address: 001156dc
 */
TLocalTalkTool::RxDMAPacketInterrupt(unsigned long) {
    /*
        1156dc:	e1a0c00d 	mov	ip, sp
        1156e0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1156e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1156e8:	e1a04000 	mov	r4, r0
        1156ec:	e1a05001 	mov	r5, r1
        1156f0:	e2806ff2 	add	r6, r0, #968	; 0x3c8
        1156f4:	e3310080 	teq	r1, #128	; 0x80
        1156f8:	0a00001c 	beq	115770 <TLocalTalkTool::RxDMAPacketInterrupt(unsigned long)+0x94>
        1156fc:	e1a00004 	mov	r0, r4
        115700:	eb642a57 	bl	1a20064 <TLocalTalkTool::$ReceiverErrorReset(void)>
        115704:	e3150040 	tst	r5, #64	; 0x40
        115708:	15d40396 	ldrneb	r0, [r4, #918]	; fField918
        11570c:	12800001 	addne	r0, r0, #1	; 0x1
        115710:	15c40396 	strneb	r0, [r4, #918]	; fField918
        115714:	e3150020 	tst	r5, #32	; 0x20
        115718:	15d40394 	ldrneb	r0, [r4, #916]	; fField916
        11571c:	12800001 	addne	r0, r0, #1	; 0x1
        115720:	15c40394 	strneb	r0, [r4, #916]	; fField916
        115724:	e3350000 	teq	r5, #0	; 0x0
        115728:	13350c02 	teqne	r5, #512	; 0x200
        11572c:	13350b01 	teqne	r5, #1024	; 0x400
        115730:	05d40397 	ldreqb	r0, [r4, #919]	; fField919
        115734:	02800001 	addeq	r0, r0, #1	; 0x1
        115738:	05c40397 	streqb	r0, [r4, #919]	; fField919
        11573c:	e3350c01 	teq	r5, #256	; 0x100
        115740:	05d40395 	ldreqb	r0, [r4, #917]	; fField917
        115744:	02800001 	addeq	r0, r0, #1	; 0x1
        115748:	05c40395 	streqb	r0, [r4, #917]	; fField917
        11574c:	e5d40430 	ldrb	r0, [r4, #1072]	; fField1072
        115750:	e3300000 	teq	r0, #0	; 0x0
        115754:	15d40432 	ldrneb	r0, [r4, #1074]	; fField1074
        115758:	13300000 	teqne	r0, #0	; 0x0
        11575c:	11a00006 	movne	r0, r6
        115760:	11a01005 	movne	r1, r5
        115764:	191b6ff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        115768:	1a6bc706 	bne	1c07388 <TCircleBuf::$PutNextEOM(unsigned long)>
        11576c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        115770:	e24dd004 	sub	sp, sp, #4	; 0x4
        115774:	e1a00006 	mov	r0, r6
        115778:	e1a0100d 	mov	r1, sp
        11577c:	eb6bc2fd 	bl	1c06378 <TCircleBuf::$PeekFirstLong(unsigned long *)>
        115780:	e59d0000 	ldr	r0, [sp]
        115784:	e1a09c20 	mov	r9, r0, lsr #24
        115788:	e1a01820 	mov	r1, r0, lsr #16
        11578c:	e20180ff 	and	r8, r1, #255	; 0xff
        115790:	e1a00420 	mov	r0, r0, lsr #8
        115794:	e200a0ff 	and	sl, r0, #255	; 0xff
        115798:	e31a0080 	tst	sl, #128	; 0x80
        11579c:	e3a07001 	mov	r7, #1	; 0x1
        1157a0:	0a00004f 	beq	1158e4 <TLocalTalkTool::RxDMAPacketInterrupt(unsigned long)+0x208>
        1157a4:	e5d40430 	ldrb	r0, [r4, #1072]	; fField1072
        1157a8:	e3300000 	teq	r0, #0	; 0x0
        1157ac:	0a000019 	beq	115818 <TLocalTalkTool::RxDMAPacketInterrupt(unsigned long)+0x13c>
        1157b0:	e5d40431 	ldrb	r0, [r4, #1073]	; fField1073
        1157b4:	e3300000 	teq	r0, #0	; 0x0
        1157b8:	11a00006 	movne	r0, r6
        1157bc:	11a01005 	movne	r1, r5
        1157c0:	1b6bc6f0 	blne	1c07388 <TCircleBuf::$PutNextEOM(unsigned long)>
        1157c4:	e3a01000 	mov	r1, #0	; 0x0
        1157c8:	e5940304 	ldr	r0, [r4, #772]	; fField772
        1157cc:	eb09bd55 	bl	384d28 <TSerialChip::ReEnableReceiver(unsigned char)>
        1157d0:	e5d40431 	ldrb	r0, [r4, #1073]	; fField1073
        1157d4:	e3300000 	teq	r0, #0	; 0x0
        1157d8:	0a00005a 	beq	115948 <TLocalTalkTool::RxDMAPacketInterrupt(unsigned long)+0x26c>
        1157dc:	e5940384 	ldr	r0, [r4, #900]	; fField900
        1157e0:	e1a00080 	mov	r0, r0, lsl #1
        1157e4:	e1370fa0 	teq	r7, r0, lsr #31
        1157e8:	05940380 	ldreq	r0, [r4, #896]	; fField896
        1157ec:	02001101 	andeq	r1, r0, #1073741824	; 0x40000000
        1157f0:	03310000 	teqeq	r1, #0	; 0x0
        1157f4:	1a000053 	bne	115948 <TLocalTalkTool::RxDMAPacketInterrupt(unsigned long)+0x26c>
        1157f8:	e3800101 	orr	r0, r0, #1073741824	; 0x40000000
        1157fc:	e5840380 	str	r0, [r4, #896]	; fField896
        115800:	e1a00004 	mov	r0, r4
        115804:	e3a01000 	mov	r1, #0	; 0x0
        115808:	e5942000 	ldr	r2, [r4]
        11580c:	e1a0e00f 	mov	lr, pc
        115810:	e282fd06 	add	pc, r2, #384	; 0x180
        115814:	ea00004b 	b	115948 <TLocalTalkTool::RxDMAPacketInterrupt(unsigned long)+0x26c>
        115818:	e3a01000 	mov	r1, #0	; 0x0
        11581c:	e5940304 	ldr	r0, [r4, #772]	; fField772
        115820:	eb09bd40 	bl	384d28 <TSerialChip::ReEnableReceiver(unsigned char)>
        115824:	e5d4041f 	ldrb	r0, [r4, #1055]	; fField1055
        115828:	e3300000 	teq	r0, #0	; 0x0
        11582c:	1a000002 	bne	11583c <TLocalTalkTool::RxDMAPacketInterrupt(unsigned long)+0x160>
        115830:	e33900ff 	teq	r9, #255	; 0xff
        115834:	15c47420 	strneb	r7, [r4, #1056]	; fField1056
        115838:	1a000042 	bne	115948 <TLocalTalkTool::RxDMAPacketInterrupt(unsigned long)+0x26c>
        11583c:	e33a0081 	teq	sl, #129	; 0x81
        115840:	0a00000f 	beq	115884 <TLocalTalkTool::RxDMAPacketInterrupt(unsigned long)+0x1a8>
        115844:	e33a0082 	teq	sl, #130	; 0x82
        115848:	05d4039d 	ldreqb	r0, [r4, #925]	; fField925
        11584c:	02800001 	addeq	r0, r0, #1	; 0x1
        115850:	05c4039d 	streqb	r0, [r4, #925]	; fField925
        115854:	0a00003b 	beq	115948 <TLocalTalkTool::RxDMAPacketInterrupt(unsigned long)+0x26c>
        115858:	e33a0084 	teq	sl, #132	; 0x84
        11585c:	0a00000e 	beq	11589c <TLocalTalkTool::RxDMAPacketInterrupt(unsigned long)+0x1c0>
        115860:	e33a0085 	teq	sl, #133	; 0x85
        115864:	1a000037 	bne	115948 <TLocalTalkTool::RxDMAPacketInterrupt(unsigned long)+0x26c>
        115868:	e5d4041e 	ldrb	r0, [r4, #1054]	; fField1054
        11586c:	e3300000 	teq	r0, #0	; 0x0
        115870:	15d40398 	ldrneb	r0, [r4, #920]	; fField920
        115874:	12800001 	addne	r0, r0, #1	; 0x1
        115878:	15c40398 	strneb	r0, [r4, #920]	; fField920
        11587c:	e5c4741e 	strb	r7, [r4, #1054]	; fField1054
        115880:	ea000030 	b	115948 <TLocalTalkTool::RxDMAPacketInterrupt(unsigned long)+0x26c>
        115884:	e1a02008 	mov	r2, r8
        115888:	e3a03000 	mov	r3, #0	; 0x0
        11588c:	e3a01082 	mov	r1, #130	; 0x82
        115890:	e5b40304 	ldr	r0, [r4, #772]!	; fField772
        115894:	eb09bd29 	bl	384d40 <TSerialChip::SendControlPacket(unsigned char, unsigned char, unsigned char)>
        115898:	ea00002a 	b	115948 <TLocalTalkTool::RxDMAPacketInterrupt(unsigned long)+0x26c>
        11589c:	e33900ff 	teq	r9, #255	; 0xff
        1158a0:	0a00000c 	beq	1158d8 <TLocalTalkTool::RxDMAPacketInterrupt(unsigned long)+0x1fc>
        1158a4:	e1a00006 	mov	r0, r6
        1158a8:	e3a01f97 	mov	r1, #604	; 0x25c
        1158ac:	eb6bc29f 	bl	1c06330 <TCircleBuf::$BufferSpace(unsigned long)>
        1158b0:	e3300000 	teq	r0, #0	; 0x0
        1158b4:	15d4039e 	ldrneb	r0, [r4, #926]	; fField926
        1158b8:	12800001 	addne	r0, r0, #1	; 0x1
        1158bc:	15c4039e 	strneb	r0, [r4, #926]	; fField926
        1158c0:	1a000020 	bne	115948 <TLocalTalkTool::RxDMAPacketInterrupt(unsigned long)+0x26c>
        1158c4:	e1a02008 	mov	r2, r8
        1158c8:	e3a03000 	mov	r3, #0	; 0x0
        1158cc:	e3a01085 	mov	r1, #133	; 0x85
        1158d0:	e5940304 	ldr	r0, [r4, #772]	; fField772
        1158d4:	eb09bd19 	bl	384d40 <TSerialChip::SendControlPacket(unsigned char, unsigned char, unsigned char)>
        1158d8:	e1a00004 	mov	r0, r4
        1158dc:	eb6429b0 	bl	1a1ffa4 <TLocalTalkTool::$GetControlPacket(void)>
        1158e0:	ea000018 	b	115948 <TLocalTalkTool::RxDMAPacketInterrupt(unsigned long)+0x26c>
        1158e4:	e1a00006 	mov	r0, r6
        1158e8:	e3a01ffa 	mov	r1, #1000	; 0x3e8
        1158ec:	eb6bc6a5 	bl	1c07388 <TCircleBuf::$PutNextEOM(unsigned long)>
        1158f0:	e3a01000 	mov	r1, #0	; 0x0
        1158f4:	e5940304 	ldr	r0, [r4, #772]	; fField772
        1158f8:	eb09bd0a 	bl	384d28 <TSerialChip::ReEnableReceiver(unsigned char)>
        1158fc:	e5940384 	ldr	r0, [r4, #900]	; fField900
        115900:	e1a00080 	mov	r0, r0, lsl #1
        115904:	e1370fa0 	teq	r7, r0, lsr #31
        115908:	05940380 	ldreq	r0, [r4, #896]	; fField896
        11590c:	02001101 	andeq	r1, r0, #1073741824	; 0x40000000
        115910:	03310000 	teqeq	r1, #0	; 0x0
        115914:	1a000006 	bne	115934 <TLocalTalkTool::RxDMAPacketInterrupt(unsigned long)+0x258>
        115918:	e3800101 	orr	r0, r0, #1073741824	; 0x40000000
        11591c:	e5840380 	str	r0, [r4, #896]	; fField896
        115920:	e1a00004 	mov	r0, r4
        115924:	e3a01000 	mov	r1, #0	; 0x0
        115928:	e5942000 	ldr	r2, [r4]
        11592c:	e1a0e00f 	mov	lr, pc
        115930:	e282fd06 	add	pc, r2, #384	; 0x180
        115934:	e3a00000 	mov	r0, #0	; 0x0
        115938:	e5c40422 	strb	r0, [r4, #1058]	; fField1058
        11593c:	e1a00004 	mov	r0, r4
        115940:	e3a01009 	mov	r1, #9	; 0x9
        115944:	eb6431f7 	bl	1a22128 <TLocalTalkTool::$TransmitStateMachine(TLocalTalkTool::TransmitEvent)>
        115948:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TLocalTalkTool::GetToolName(void)
 * Address: 0011594c
 */
TLocalTalkTool::GetToolName(void) {
    /*
        11594c:	e28f0f00 	add	r0, pc, #0	; 0x0
        115950:	e1a0f00e 	mov	pc, lr
        115954:	4c6f6361 	stcmil	3, cr6, [pc], -#388
        115958:	6c54616c 	mrrcvs	1, 6, r6, r4, cr12
        11595c:	6b20546f 	blvs	92ab20 <ROM$$Size+0x20aed4>
        115960:	6f6c0000 	swivs	0x006c0000
    */
}

/**
 * Symbol: TLocalTalkTool::TxDMAPacketInterrupt(void)
 * Address: 00115964
 */
TLocalTalkTool::TxDMAPacketInterrupt(void) {
    /*
        115964:	e3a01008 	mov	r1, #8	; 0x8
        115968:	ea6431ee 	b	1a22128 <TLocalTalkTool::$TransmitStateMachine(TLocalTalkTool::TransmitEvent)>
    */
}

/**
 * Symbol: TLocalTalkTool::TransmitTimerInterrupt(unsigned long)
 * Address: 0011596c
 */
TLocalTalkTool::TransmitTimerInterrupt(unsigned long) {
    /*
        11596c:	e5d02422 	ldrb	r2, [r0, #1058]	; fField1058
        115970:	e3320000 	teq	r2, #0	; 0x0
        115974:	0a6431eb 	beq	1a22128 <TLocalTalkTool::$TransmitStateMachine(TLocalTalkTool::TransmitEvent)>
        115978:	1a6431e2 	bne	1a22108 <TLocalTalkTool::$StopReadDataPacket(void)>
    */
}

/**
 * Symbol: TLocalTalkTool::SetTransmitTimer(unsigned long, TLocalTalkTool::TransmitEvent)
 * Address: 0011597c
 */
TLocalTalkTool::SetTransmitTimer(unsigned long, TLocalTalkTool::TransmitEvent) {
    /*
        11597c:	e1a0c001 	mov	ip, r1
        115980:	e5901434 	ldr	r1, [r0, #1076]	; fField1076
        115984:	e5900330 	ldr	r0, [r0, #816]	; fField816
        115988:	e1a03002 	mov	r3, r2
        11598c:	e1a0200c 	mov	r2, ip
        115990:	ea6410c1 	b	1a19c9c <TFIQTimer::$SetFIQTimer(FIQTimer *, unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TLocalTalkTool::ResetTransmitTimer(void)
 * Address: 00115994
 */
TLocalTalkTool::ResetTransmitTimer(void) {
    /*
        115994:	e5901434 	ldr	r1, [r0, #1076]	; fField1076
        115998:	e5900330 	ldr	r0, [r0, #816]	; fField816
        11599c:	ea640c9e 	b	1a18c1c <TFIQTimer::$ResetFIQTimer(FIQTimer *)>
    */
}

/**
 * Symbol: TLocalTalkTool::GetSizeOf(void)
 * Address: 001159a0
 */
TLocalTalkTool::GetSizeOf(void) {
    /*
        1159a0:	e3a00038 	mov	r0, #56	; 0x38
        1159a4:	e2800b01 	add	r0, r0, #1024	; 0x400
        1159a8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLocalTalkTool::AddDefaultOptions(TOptionArray *)
 * Address: 001159ac
 */
TLocalTalkTool::AddDefaultOptions(TOptionArray *) {
    /*
        1159ac:	e1a0c00d 	mov	ip, sp
        1159b0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1159b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1159b8:	e1a05000 	mov	r5, r0
        1159bc:	e1a04001 	mov	r4, r1
        1159c0:	e24dd030 	sub	sp, sp, #48	; 0x30
        1159c4:	e28d0018 	add	r0, sp, #24	; 0x18
        1159c8:	eb6a9d0f 	bl	1bbce0c <TCMOSerialHardware::$__ct(void)>
        1159cc:	e1a0000d 	mov	r0, sp
        1159d0:	eb6a9904 	bl	1bbbde8 <TCMOSerialBuffers::$__ct(void)>
        1159d4:	e1a0100d 	mov	r1, sp
        1159d8:	e1a00005 	mov	r0, r5
        1159dc:	eb642db4 	bl	1a210b4 <TLocalTalkTool::$SetDefaultBufferSizes(TCMOSerialBuffers *)>
        1159e0:	e28d2018 	add	r2, sp, #24	; 0x18
        1159e4:	e5941000 	ldr	r1, [r4]
        1159e8:	e1a00004 	mov	r0, r4
        1159ec:	eb6a90ac 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        1159f0:	e3300000 	teq	r0, #0	; 0x0
        1159f4:	1a000003 	bne	115a08 <TLocalTalkTool::AddDefaultOptions(TOptionArray *)+0x5c>
        1159f8:	e1a0200d 	mov	r2, sp
        1159fc:	e5941000 	ldr	r1, [r4]
        115a00:	e1a00004 	mov	r0, r4
        115a04:	eb6a90a6 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        115a08:	e3300000 	teq	r0, #0	; 0x0
        115a0c:	01a01004 	moveq	r1, r4
        115a10:	01a00005 	moveq	r0, r5
        115a14:	0b6a9d10 	bleq	1bbce5c <TCommTool::$AddDefaultOptions(TOptionArray *)>
        115a18:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TLocalTalkTool::AddCurrentOptions(TOptionArray *)
 * Address: 00115a1c
 */
TLocalTalkTool::AddCurrentOptions(TOptionArray *) {
    /*
        115a1c:	e1a0c00d 	mov	ip, sp
        115a20:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        115a24:	e24cb004 	sub	fp, ip, #4	; 0x4
        115a28:	e1a05000 	mov	r5, r0
        115a2c:	e1a04001 	mov	r4, r1
        115a30:	e24dd028 	sub	sp, sp, #40	; 0x28
        115a34:	e28d0010 	add	r0, sp, #16	; 0x10
        115a38:	eb6a9cf3 	bl	1bbce0c <TCMOSerialHardware::$__ct(void)>
        115a3c:	e1a0000d 	mov	r0, sp
        115a40:	eb6a9cf2 	bl	1bbce10 <TCMOLocalTalkNodeID::$__ct(void)>
        115a44:	e59502fc 	ldr	r0, [r5, #764]	; fField764
        115a48:	e58d0020 	str	r0, [sp, #32]
        115a4c:	e59502f8 	ldr	r0, [r5, #760]	; fField760
        115a50:	e58d001c 	str	r0, [sp, #28]
        115a54:	e5d5041c 	ldrb	r0, [r5, #1052]	; fField1052
        115a58:	e5cd000c 	strb	r0, [sp, #12]
        115a5c:	e28d2010 	add	r2, sp, #16	; 0x10
        115a60:	e5941000 	ldr	r1, [r4]
        115a64:	e1a00004 	mov	r0, r4
        115a68:	eb6a908d 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        115a6c:	e3300000 	teq	r0, #0	; 0x0
        115a70:	1a000003 	bne	115a84 <TLocalTalkTool::AddCurrentOptions(TOptionArray *)+0x68>
        115a74:	e1a0200d 	mov	r2, sp
        115a78:	e5941000 	ldr	r1, [r4]
        115a7c:	e1a00004 	mov	r0, r4
        115a80:	eb6a9087 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        115a84:	e3300000 	teq	r0, #0	; 0x0
        115a88:	1a000003 	bne	115a9c <TLocalTalkTool::AddCurrentOptions(TOptionArray *)+0x80>
        115a8c:	e2852fe2 	add	r2, r5, #904	; 0x388
        115a90:	e5941000 	ldr	r1, [r4]
        115a94:	e1a00004 	mov	r0, r4
        115a98:	eb6a9081 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        115a9c:	e3300000 	teq	r0, #0	; 0x0
        115aa0:	1a000003 	bne	115ab4 <TLocalTalkTool::AddCurrentOptions(TOptionArray *)+0x98>
        115aa4:	e2852e3f 	add	r2, r5, #1008	; 0x3f0
        115aa8:	e5941000 	ldr	r1, [r4]
        115aac:	e1a00004 	mov	r0, r4
        115ab0:	eb6a907b 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        115ab4:	e3300000 	teq	r0, #0	; 0x0
        115ab8:	01a01004 	moveq	r1, r4
        115abc:	01a00005 	moveq	r0, r5
        115ac0:	0b6a9ce4 	bleq	1bbce58 <TCommTool::$AddCurrentOptions(TOptionArray *)>
        115ac4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TLocalTalkTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)
 * Address: 00115ac8
 */
TLocalTalkTool::ProcessOptionStart(TOption *, unsigned long, unsigned long) {
    /*
        115ac8:	e1a0c00d 	mov	ip, sp
        115acc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        115ad0:	e24cb004 	sub	fp, ip, #4	; 0x4
        115ad4:	e1a04000 	mov	r4, r0
        115ad8:	e1a05001 	mov	r5, r1
        115adc:	e3a06000 	mov	r6, #0	; 0x0
        115ae0:	e59fc03c 	ldr	ip, [pc, #3c]	; 115b24 <TLocalTalkTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x5c>
        115ae4:	e152000c 	cmp	r2, ip
        115ae8:	0a000063 	beq	115c7c <TLocalTalkTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x1b4>
        115aec:	ca000010 	bgt	115b34 <TLocalTalkTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x6c>
        115af0:	e59fc030 	ldr	ip, [pc, #30]	; 115b28 <TLocalTalkTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x60>
        115af4:	e132000c 	teq	r2, ip
        115af8:	0a000016 	beq	115b58 <TLocalTalkTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x90>
        115afc:	e59fc028 	ldr	ip, [pc, #28]	; 115b2c <TLocalTalkTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x64>
        115b00:	e132000c 	teq	r2, ip
        115b04:	0a000045 	beq	115c20 <TLocalTalkTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x158>
        115b08:	e59fc020 	ldr	ip, [pc, #20]	; 115b30 <TLocalTalkTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x68>
        115b0c:	e132000c 	teq	r2, ip
        115b10:	1a00005c 	bne	115c88 <TLocalTalkTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x1c0>
        115b14:	e3330c01 	teq	r3, #256	; 0x100
        115b18:	13330c02 	teqne	r3, #512	; 0x200
        115b1c:	1a00004c 	bne	115c54 <TLocalTalkTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x18c>
        115b20:	ea000049 	b	115c4c <TLocalTalkTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x184>
        115b24:	73627073 	cmnvc	r2, #115	; 0x73
        115b28:	6c746964 	ldcvsl	9, cr6, [r4], -#400
        115b2c:	6c746d73 	ldcvsl	13, cr6, [r4], -#460
        115b30:	6c747374 	ldcvsl	3, cr7, [r4], -#464
        115b34:	e59fc014 	ldr	ip, [pc, #14]	; 115b50 <TLocalTalkTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x88>
        115b38:	e132000c 	teq	r2, ip
        115b3c:	0a00001c 	beq	115bb4 <TLocalTalkTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xec>
        115b40:	e59fc00c 	ldr	ip, [pc, #c]	; 115b54 <TLocalTalkTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x8c>
        115b44:	e132000c 	teq	r2, ip
        115b48:	1a00004e 	bne	115c88 <TLocalTalkTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x1c0>
        115b4c:	ea00004a 	b	115c7c <TLocalTalkTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x1b4>
        115b50:	73627566 	cmnvc	r2, #427819008	; 0x19800000
        115b54:	73696f70 	cmnvc	r9, #448	; 0x1c0
        115b58:	e3330c01 	teq	r3, #256	; 0x100
        115b5c:	13330c02 	teqne	r3, #512	; 0x200
        115b60:	1a00000e 	bne	115ba0 <TLocalTalkTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xd8>
        115b64:	e5d4041f 	ldrb	r0, [r4, #1055]	; fField1055
        115b68:	e3300000 	teq	r0, #0	; 0x0
        115b6c:	0a000002 	beq	115b7c <TLocalTalkTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xb4>
        115b70:	e5d41430 	ldrb	r1, [r4, #1072]	; fField1072
        115b74:	e3310000 	teq	r1, #0	; 0x0
        115b78:	0a000033 	beq	115c4c <TLocalTalkTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x184>
        115b7c:	e5d5100c 	ldrb	r1, [r5, #12]
        115b80:	e5c4141c 	strb	r1, [r4, #1052]	; fField1052
        115b84:	e3300000 	teq	r0, #0	; 0x0
        115b88:	0a00003c 	beq	115c80 <TLocalTalkTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x1b8>
        115b8c:	eb09f3ff 	bl	392b90 <EnterFIQAtomic>
        115b90:	e5d4141c 	ldrb	r1, [r4, #1052]	; fField1052
        115b94:	e5b40304 	ldr	r0, [r4, #772]!	; fField772
        115b98:	eb09bc5f 	bl	384d1c <TSerialChip::SetSDLCAddress(unsigned char)>
        115b9c:	ea000034 	b	115c74 <TLocalTalkTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x1ac>
        115ba0:	e3330b01 	teq	r3, #1024	; 0x400
        115ba4:	05d4041c 	ldreqb	r0, [r4, #1052]	; fField1052
        115ba8:	05c5000c 	streqb	r0, [r5, #12]
        115bac:	0a000033 	beq	115c80 <TLocalTalkTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x1b8>
        115bb0:	ea000031 	b	115c7c <TLocalTalkTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x1b4>
        115bb4:	e2840e3f 	add	r0, r4, #1008	; 0x3f0
        115bb8:	e3330c01 	teq	r3, #256	; 0x100
        115bbc:	13330c02 	teqne	r3, #512	; 0x200
        115bc0:	1a000007 	bne	115be4 <TLocalTalkTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x11c>
        115bc4:	e5d4128c 	ldrb	r1, [r4, #652]	; fField652
        115bc8:	e3310000 	teq	r1, #0	; 0x0
        115bcc:	1a00002a 	bne	115c7c <TLocalTalkTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x1b4>
        115bd0:	e1a01005 	mov	r1, r5
        115bd4:	eb6a87fd 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
        115bd8:	e3a00f97 	mov	r0, #604	; 0x25c
        115bdc:	e5a403fc 	str	r0, [r4, #1020]!	; fField1020
        115be0:	ea000026 	b	115c80 <TLocalTalkTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x1b8>
        115be4:	e3330c03 	teq	r3, #768	; 0x300
        115be8:	11a01000 	movne	r1, r0
        115bec:	11a00005 	movne	r0, r5
        115bf0:	1a000013 	bne	115c44 <TLocalTalkTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x17c>
        115bf4:	e24dd018 	sub	sp, sp, #24	; 0x18
        115bf8:	e1a0000d 	mov	r0, sp
        115bfc:	eb6a9879 	bl	1bbbde8 <TCMOSerialBuffers::$__ct(void)>
        115c00:	e1a0100d 	mov	r1, sp
        115c04:	e1a00004 	mov	r0, r4
        115c08:	eb642d29 	bl	1a210b4 <TLocalTalkTool::$SetDefaultBufferSizes(TCMOSerialBuffers *)>
        115c0c:	e1a0100d 	mov	r1, sp
        115c10:	e1a00005 	mov	r0, r5
        115c14:	eb6a87ed 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
        115c18:	e28dd018 	add	sp, sp, #24	; 0x18
        115c1c:	ea000017 	b	115c80 <TLocalTalkTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x1b8>
        115c20:	e3330c01 	teq	r3, #256	; 0x100
        115c24:	13330c02 	teqne	r3, #512	; 0x200
        115c28:	1a000013 	bne	115c7c <TLocalTalkTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x1b4>
        115c2c:	e5d4028c 	ldrb	r0, [r4, #652]	; fField652
        115c30:	e3300000 	teq	r0, #0	; 0x0
        115c34:	1a000010 	bne	115c7c <TLocalTalkTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x1b4>
        115c38:	e2840024 	add	r0, r4, #36	; 0x24
        115c3c:	e2800b01 	add	r0, r0, #1024	; 0x400
        115c40:	e1a01005 	mov	r1, r5
        115c44:	eb6a87e1 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
        115c48:	ea00000c 	b	115c80 <TLocalTalkTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x1b8>
        115c4c:	e3e06002 	mvn	r6, #2	; 0x2
        115c50:	ea00000a 	b	115c80 <TLocalTalkTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x1b8>
        115c54:	e3330b01 	teq	r3, #1024	; 0x400
        115c58:	1a000007 	bne	115c7c <TLocalTalkTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x1b4>
        115c5c:	eb09f3cb 	bl	392b90 <EnterFIQAtomic>
        115c60:	e2841fe2 	add	r1, r4, #904	; 0x388
        115c64:	e1a00005 	mov	r0, r5
        115c68:	eb6a87d8 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
        115c6c:	e1a00004 	mov	r0, r4
        115c70:	ebfffc56 	bl	114dd0 <TLocalTalkTool::ResetStats(void)>
        115c74:	eb09f3cd 	bl	392bb0 <ExitFIQAtomic>
        115c78:	ea000000 	b	115c80 <TLocalTalkTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x1b8>
        115c7c:	e3e06000 	mvn	r6, #0	; 0x0
        115c80:	e1a00006 	mov	r0, r6
        115c84:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        115c88:	e1a01005 	mov	r1, r5
        115c8c:	e1a00004 	mov	r0, r4
        115c90:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        115c94:	ea6428f1 	b	1a20060 <TSerTool::$ProcessOptionStart(TOption *, unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TLocalTalkTool::BytesAvailable(unsigned long &)
 * Address: 00115c98
 */
TLocalTalkTool::BytesAvailable(unsigned long &) {
    /*
        115c98:	e1a0c00d 	mov	ip, sp
        115c9c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        115ca0:	e24cb004 	sub	fp, ip, #4	; 0x4
        115ca4:	e1a04001 	mov	r4, r1
        115ca8:	e2800ff2 	add	r0, r0, #968	; 0x3c8
        115cac:	eb6bc19e 	bl	1c0632c <TCircleBuf::$BufferCount(void)>
        115cb0:	e5840000 	str	r0, [r4]
        115cb4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

