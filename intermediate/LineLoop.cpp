#include "include/LineLoop.h"

/**
 * Symbol: LineLoop::__ct(TParagraphView *, long **, StyleRecord **, short *)
 * Address: 0010d8d4
 */
LineLoop::LineLoop(TParagraphView *, long **, StyleRecord **, short *) {
    /*
        10d8d4:	e1a0c00d 	mov	ip, sp
        10d8d8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        10d8dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        10d8e0:	e1b04000 	movs	r4, r0
        10d8e4:	e1a05001 	mov	r5, r1
        10d8e8:	e1a09002 	mov	r9, r2
        10d8ec:	e1a07003 	mov	r7, r3
        10d8f0:	e59ba004 	ldr	sl, [fp, #4]	; fField4
        10d8f4:	1a000005 	bne	10d910 <LineLoop::__ct(TParagraphView *, long **, StyleRecord **, short *)+0x3c>
        10d8f8:	e3a00054 	mov	r0, #84	; 0x54
        10d8fc:	eb6b038d 	bl	1bce738 <$__nw(unsigned int)>
        10d900:	e1b04000 	movs	r4, r0
        10d904:	1a000001 	bne	10d910 <LineLoop::__ct(TParagraphView *, long **, StyleRecord **, short *)+0x3c>
        10d908:	e1a00004 	mov	r0, r4
        10d90c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        10d910:	e284001c 	add	r0, r4, #28	; 0x1c
        10d914:	e1a08000 	mov	r8, r0
        10d918:	e1a06000 	mov	r6, r0
        10d91c:	eb6acdef 	bl	1bc10e0 <TObjectPtr::$__ct(void)>
        10d920:	e3a00002 	mov	r0, #2	; 0x2
        10d924:	eb6ad208 	bl	1bc214c <$AllocateRefHandle(long)>
        10d928:	e3a01000 	mov	r1, #0	; 0x0
        10d92c:	e584004c 	str	r0, [r4, #76]
        10d930:	e5a01004 	str	r1, [r0, #4]!	; fField4
        10d934:	e24dd004 	sub	sp, sp, #4	; 0x4
        10d938:	e284400c 	add	r4, r4, #12	; 0xc
        10d93c:	e8840220 	stmia	r4, {r5, r9}
        10d940:	e1a00005 	mov	r0, r5
        10d944:	e2844008 	add	r4, r4, #8	; 0x8
        10d948:	e8840480 	stmia	r4, {r7, sl}
        10d94c:	e2444014 	sub	r4, r4, #20	; 0x14
        10d950:	eb665a30 	bl	1aa4218 <TParagraphView::$Text(void)>
        10d954:	e1a01000 	mov	r1, r0
        10d958:	e1a0000d 	mov	r0, sp
        10d95c:	eb6acddb 	bl	1bc10d0 <TObjectPtr::$__ct(long)>
        10d960:	e1a0100d 	mov	r1, sp
        10d964:	e1a00006 	mov	r0, r6
        10d968:	eb6acdd7 	bl	1bc10cc <DataPtr::$__as(DataPtr const &)>
        10d96c:	e1a0000d 	mov	r0, sp
        10d970:	e3a01000 	mov	r1, #0	; 0x0
        10d974:	eb6ad1e1 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        10d978:	e3a06000 	mov	r6, #0	; 0x0
        10d97c:	e1a00008 	mov	r0, r8
        10d980:	eb6ad1e3 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        10d984:	e5840000 	str	r0, [r4]
        10d988:	eb6b8374 	bl	1bee760 <$Ustrlen>
        10d98c:	e1a01000 	mov	r1, r0
        10d990:	e5940000 	ldr	r0, [r4]
        10d994:	e0801081 	add	r1, r0, r1, lsl #1
        10d998:	e5840004 	str	r0, [r4, #4]	; fField4
        10d99c:	e3e00000 	mvn	r0, #0	; 0x0
        10d9a0:	e5840008 	str	r0, [r4, #8]	; fField8
        10d9a4:	e5841024 	str	r1, [r4, #36]	; fField36
        10d9a8:	e5940014 	ldr	r0, [r4, #20]
        10d9ac:	e5840028 	str	r0, [r4, #40]	; fField40
        10d9b0:	e595801c 	ldr	r8, [r5, #28]
        10d9b4:	e2850010 	add	r0, r5, #16	; 0x10
        10d9b8:	e1a07000 	mov	r7, r0
        10d9bc:	e5900002 	ldr	r0, [r0, #2]	; fField2
        10d9c0:	e1a00820 	mov	r0, r0, lsr #16
        10d9c4:	e5c4002d 	strb	r0, [r4, #45]
        10d9c8:	e1a00440 	mov	r0, r0, asr #8
        10d9cc:	e5c4002c 	strb	r0, [r4, #44]	; fField44
        10d9d0:	e1a00005 	mov	r0, r5
        10d9d4:	e5951000 	ldr	r1, [r5]
        10d9d8:	e1a0e00f 	mov	lr, pc
        10d9dc:	e281f020 	add	pc, r1, #32	; 0x20
        10d9e0:	e3100004 	tst	r0, #4	; 0x4
        10d9e4:	01a00007 	moveq	r0, r7
        10d9e8:	12880010 	addne	r0, r8, #16	; 0x10
        10d9ec:	e5900006 	ldr	r0, [r0, #6]	; fField6
        10d9f0:	e1a00840 	mov	r0, r0, asr #16
        10d9f4:	e5c4002f 	strb	r0, [r4, #47]
        10d9f8:	e1a00440 	mov	r0, r0, asr #8
        10d9fc:	e5c4002e 	strb	r0, [r4, #46]	; fField46
        10da00:	e24dd010 	sub	sp, sp, #16	; 0x10
        10da04:	e5940014 	ldr	r0, [r4, #20]
        10da08:	e5900000 	ldr	r0, [r0]
        10da0c:	e1a0100d 	mov	r1, sp
        10da10:	eb690773 	bl	1b4f7e4 <$GetStyleFontInfo(StyleRecord *, FontInfo *)>
        10da14:	e2840030 	add	r0, r4, #48	; 0x30
        10da18:	e5972000 	ldr	r2, [r7]
        10da1c:	e5802000 	str	r2, [r0]
        10da20:	e5941030 	ldr	r1, [r4, #48]	; fField48
        10da24:	e1a01841 	mov	r1, r1, asr #16
        10da28:	e5841048 	str	r1, [r4, #72]	; fField72
        10da2c:	e594100c 	ldr	r1, [r4, #12]	; fField12
        10da30:	e5911038 	ldr	r1, [r1, #56]	; fField56
        10da34:	e2842034 	add	r2, r4, #52	; 0x34
        10da38:	e5900000 	ldr	r0, [r0]
        10da3c:	e3510000 	cmp	r1, #0	; 0x0
        10da40:	e5820000 	str	r0, [r2]
        10da44:	da000006 	ble	10da64 <LineLoop::__ct(TParagraphView *, long **, StyleRecord **, short *)+0x190>
        10da48:	e3510014 	cmp	r1, #20	; 0x14
        10da4c:	d3a00003 	movle	r0, #3	; 0x3
        10da50:	c3a00004 	movgt	r0, #4	; 0x4
        10da54:	e0410000 	sub	r0, r1, r0
        10da58:	e5941034 	ldr	r1, [r4, #52]	; fField52
        10da5c:	e1a01821 	mov	r1, r1, lsr #16
        10da60:	ea000010 	b	10daa8 <LineLoop::__ct(TParagraphView *, long **, StyleRecord **, short *)+0x1d4>
        10da64:	e24dd004 	sub	sp, sp, #4	; 0x4
        10da68:	e594000c 	ldr	r0, [r4, #12]	; fField12
        10da6c:	e58d6000 	str	r6, [sp]
        10da70:	e590007c 	ldr	r0, [r0, #124]	; fField124
        10da74:	e3300000 	teq	r0, #0	; 0x0
        10da78:	e28dd004 	add	sp, sp, #4	; 0x4
        10da7c:	1a000004 	bne	10da94 <LineLoop::__ct(TParagraphView *, long **, StyleRecord **, short *)+0x1c0>
        10da80:	e5941034 	ldr	r1, [r4, #52]	; fField52
        10da84:	e1a01821 	mov	r1, r1, lsr #16
        10da88:	e59d0000 	ldr	r0, [sp]
        10da8c:	e0810000 	add	r0, r1, r0
        10da90:	ea000005 	b	10daac <LineLoop::__ct(TParagraphView *, long **, StyleRecord **, short *)+0x1d8>
        10da94:	e5940034 	ldr	r0, [r4, #52]	; fField52
        10da98:	e1a00820 	mov	r0, r0, lsr #16
        10da9c:	e594100c 	ldr	r1, [r4, #12]	; fField12
        10daa0:	e591107c 	ldr	r1, [r1, #124]	; fField124
        10daa4:	e1a01821 	mov	r1, r1, lsr #16
        10daa8:	e0800001 	add	r0, r0, r1
        10daac:	e5c40035 	strb	r0, [r4, #53]	; fField53
        10dab0:	e1a00440 	mov	r0, r0, asr #8
        10dab4:	e5c40034 	strb	r0, [r4, #52]	; fField52
        10dab8:	e1a00005 	mov	r0, r5
        10dabc:	eb016e67 	bl	169460 <TParagraphView::GetInterLineSpacing(void)>
        10dac0:	e584003c 	str	r0, [r4, #60]	; fField60
        10dac4:	e1a00005 	mov	r0, r5
        10dac8:	eb6738bd 	bl	1adbdc4 <TParagraphView::$GetRequestedLineSpacing(void)>
        10dacc:	e5840040 	str	r0, [r4, #64]	; fField64
        10dad0:	e5c46038 	strb	r6, [r4, #56]	; fField56
        10dad4:	e5846050 	str	r6, [r4, #80]	; fField80
        10dad8:	e284604c 	add	r6, r4, #76	; 0x4c
        10dadc:	e1a07006 	mov	r7, r6
        10dae0:	e1a00005 	mov	r0, r5
        10dae4:	eb6659c9 	bl	1aa4210 <TParagraphView::$Tabs(void)>
        10dae8:	e5971000 	ldr	r1, [r7]
        10daec:	e5810000 	str	r0, [r1]
        10daf0:	e5960000 	ldr	r0, [r6]
        10daf4:	e5900000 	ldr	r0, [r0]
        10daf8:	e3300002 	teq	r0, #2	; 0x2
        10dafc:	0a000001 	beq	10db08 <LineLoop::__ct(TParagraphView *, long **, StyleRecord **, short *)+0x234>
        10db00:	eb6adde9 	bl	1bc52ac <$Length(long)>
        10db04:	e5840050 	str	r0, [r4, #80]	; fField80
        10db08:	e5950028 	ldr	r0, [r5, #40]	; fField40
        10db0c:	e3c06103 	bic	r6, r0, #-1073741824	; 0xc0000000
        10db10:	e3160003 	tst	r6, #3	; 0x3
        10db14:	0a000004 	beq	10db2c <LineLoop::__ct(TParagraphView *, long **, StyleRecord **, short *)+0x258>
        10db18:	e3a01009 	mov	r1, #9	; 0x9
        10db1c:	e5940000 	ldr	r0, [r4]
        10db20:	eb6b830b 	bl	1bee754 <$Ustrchr>
        10db24:	e3300000 	teq	r0, #0	; 0x0
        10db28:	13c66003 	bicne	r6, r6, #3	; 0x3
        10db2c:	e5953034 	ldr	r3, [r5, #52]	; fField52
        10db30:	e594002e 	ldr	r0, [r4, #46]	; fField46
        10db34:	e1a00840 	mov	r0, r0, asr #16
        10db38:	e594102c 	ldr	r1, [r4, #44]	; fField44
        10db3c:	e0402841 	sub	r2, r0, r1, asr #16
        10db40:	e2850084 	add	r0, r5, #132	; 0x84
        10db44:	e1a05000 	mov	r5, r0
        10db48:	e1a01006 	mov	r1, r6
        10db4c:	ebffff4a 	bl	10d87c <InitializeTextOptions(TextOptions *, unsigned long, short, short)>
        10db50:	e5845020 	str	r5, [r4, #32]	; fField32
        10db54:	e28dd014 	add	sp, sp, #20	; 0x14
        10db58:	eaffff6a 	b	10d908 <LineLoop::__ct(TParagraphView *, long **, StyleRecord **, short *)+0x34>
    */
}

/**
 * Symbol: LineLoop::__dt(void)
 * Address: 0010db5c
 */
LineLoop::~LineLoop(void) {
    /*
        10db5c:	e1a0c00d 	mov	ip, sp
        10db60:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        10db64:	e24cb004 	sub	fp, ip, #4	; 0x4
        10db68:	e1a04000 	mov	r4, r0
        10db6c:	e1a05001 	mov	r5, r1
        10db70:	e590004c 	ldr	r0, [r0, #76]
        10db74:	eb6ad590 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10db78:	e284001c 	add	r0, r4, #28	; 0x1c
        10db7c:	e3a01000 	mov	r1, #0	; 0x0
        10db80:	eb6ad15e 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        10db84:	e3150001 	tst	r5, #1	; 0x1
        10db88:	11a00004 	movne	r0, r4
        10db8c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        10db90:	1a6afed2 	bne	1bcd6e0 <$__dl(void *)>
        10db94:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: LineLoop::AddNextLine(long *, long *, long *, long *, long *, TRect *)
 * Address: 0010db98
 */
LineLoop::AddNextLine(long *, long *, long *, long *, long *, TRect *) {
    /*
        10db98:	e1a0c00d 	mov	ip, sp
        10db9c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        10dba0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        10dba4:	e24cb014 	sub	fp, ip, #20	; 0x14
        10dba8:	e1a04000 	mov	r4, r0
        10dbac:	e59b701c 	ldr	r7, [fp, #28]
        10dbb0:	e59b8018 	ldr	r8, [fp, #24]	; fField24
        10dbb4:	e59b9014 	ldr	r9, [fp, #20]
        10dbb8:	e24dd00c 	sub	sp, sp, #12	; 0xc
        10dbbc:	e5900008 	ldr	r0, [r0, #8]	; fField8
        10dbc0:	e2806001 	add	r6, r0, #1	; 0x1
        10dbc4:	e8940003 	ldmia	r4, {r0, r1}
        10dbc8:	e1310000 	teq	r1, r0
        10dbcc:	e594a028 	ldr	sl, [r4, #40]	; fField40
        10dbd0:	13a00000 	movne	r0, #0	; 0x0
        10dbd4:	03a00001 	moveq	r0, #1	; 0x1
        10dbd8:	e20010ff 	and	r1, r0, #255	; 0xff
        10dbdc:	e58d1000 	str	r1, [sp]
        10dbe0:	e28d2004 	add	r2, sp, #4	; 0x4
        10dbe4:	e28d1008 	add	r1, sp, #8	; 0x8
        10dbe8:	e1a00004 	mov	r0, r4
        10dbec:	eb65ee3d 	bl	1a894e8 <LineLoop::$AddNextTextRun(unsigned char *, StyleRecord ***)>
        10dbf0:	e3300000 	teq	r0, #0	; 0x0
        10dbf4:	0a00006f 	beq	10ddb8 <LineLoop::AddNextLine(long *, long *, long *, long *, long *, TRect *)+0x220>
        10dbf8:	e5dd0008 	ldrb	r0, [sp, #8]	; fField8
        10dbfc:	e3300000 	teq	r0, #0	; 0x0
        10dc00:	0a000066 	beq	10dda0 <LineLoop::AddNextLine(long *, long *, long *, long *, long *, TRect *)+0x208>
        10dc04:	e24dd014 	sub	sp, sp, #20	; 0x14
        10dc08:	e5940008 	ldr	r0, [r4, #8]	; fField8
        10dc0c:	e0400006 	sub	r0, r0, r6
        10dc10:	e2805001 	add	r5, r0, #1	; 0x1
        10dc14:	e28d3008 	add	r3, sp, #8	; 0x8
        10dc18:	e92d0008 	stmdb	sp!, {r3}
        10dc1c:	e28d3010 	add	r3, sp, #16	; 0x10
        10dc20:	e28d2014 	add	r2, sp, #20	; 0x14
        10dc24:	e1a0000a 	mov	r0, sl
        10dc28:	e59d101c 	ldr	r1, [sp, #28]
        10dc2c:	eb670b0c 	bl	1ad0864 <$GetMaxAscent__FPP11StyleRecordT1PlN23>
        10dc30:	e28dd004 	add	sp, sp, #4	; 0x4
        10dc34:	e1a0c000 	mov	ip, r0
        10dc38:	e5942034 	ldr	r2, [r4, #52]	; fField52
        10dc3c:	e1a0a842 	mov	sl, r2, asr #16
        10dc40:	e1a0300d 	mov	r3, sp
        10dc44:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        10dc48:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        10dc4c:	e59d2008 	ldr	r2, [sp, #8]	; fField8
        10dc50:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        10dc54:	e1a0300c 	mov	r3, ip
        10dc58:	e1a02005 	mov	r2, r5
        10dc5c:	e1a01006 	mov	r1, r6
        10dc60:	e1a00004 	mov	r0, r4
        10dc64:	eb66fe9f 	bl	1acd6e8 <LineLoop::$ComputeLineBounds(long, long, long, long, long, long, TRect *)>
        10dc68:	e28dd010 	add	sp, sp, #16	; 0x10
        10dc6c:	e5940034 	ldr	r0, [r4, #52]	; fField52
        10dc70:	e1a00840 	mov	r0, r0, asr #16
        10dc74:	e040600a 	sub	r6, r0, sl
        10dc78:	e59d2008 	ldr	r2, [sp, #8]	; fField8
        10dc7c:	e0801002 	add	r1, r0, r2
        10dc80:	e5841048 	str	r1, [r4, #72]	; fField72
        10dc84:	e59d1014 	ldr	r1, [sp, #20]
        10dc88:	e3310000 	teq	r1, #0	; 0x0
        10dc8c:	0a000006 	beq	10dcac <LineLoop::AddNextLine(long *, long *, long *, long *, long *, TRect *)+0x114>
        10dc90:	e594100c 	ldr	r1, [r4, #12]	; fField12
        10dc94:	e5912010 	ldr	r2, [r1, #16]	; fField16
        10dc98:	e1a02822 	mov	r2, r2, lsr #16
        10dc9c:	e0400002 	sub	r0, r0, r2
        10dca0:	e5c1007d 	strb	r0, [r1, #125]
        10dca4:	e1a00440 	mov	r0, r0, asr #8
        10dca8:	e5c1007c 	strb	r0, [r1, #124]	; fField124
        10dcac:	e594002c 	ldr	r0, [r4, #44]	; fField44
        10dcb0:	e1a00820 	mov	r0, r0, lsr #16
        10dcb4:	e5c40033 	strb	r0, [r4, #51]	; fField51
        10dcb8:	e1a00440 	mov	r0, r0, asr #8
        10dcbc:	e5c40032 	strb	r0, [r4, #50]	; fField50
        10dcc0:	e59d0006 	ldr	r0, [sp, #6]	; fField6
        10dcc4:	e5c40031 	strb	r0, [r4, #49]	; fField49
        10dcc8:	e1a00440 	mov	r0, r0, asr #8
        10dccc:	e5c40030 	strb	r0, [r4, #48]	; fField48
        10dcd0:	e5940040 	ldr	r0, [r4, #64]	; fField64
        10dcd4:	e3500000 	cmp	r0, #0	; 0x0
        10dcd8:	c1a00800 	movgt	r0, r0, lsl #16
        10dcdc:	c1a00840 	movgt	r0, r0, asr #16
        10dce0:	ca00000e 	bgt	10dd20 <LineLoop::AddNextLine(long *, long *, long *, long *, long *, TRect *)+0x188>
        10dce4:	e24dd010 	sub	sp, sp, #16	; 0x10
        10dce8:	e1a0300d 	mov	r3, sp
        10dcec:	e92d0008 	stmdb	sp!, {r3}
        10dcf0:	e28d3008 	add	r3, sp, #8	; 0x8
        10dcf4:	e28d200c 	add	r2, sp, #12	; 0xc
        10dcf8:	e28d1010 	add	r1, sp, #16	; 0x10
        10dcfc:	e59d002c 	ldr	r0, [sp, #44]	; fField44
        10dd00:	e5900000 	ldr	r0, [r0]
        10dd04:	eb670ad9 	bl	1ad0870 <$GetParagraphStyleRecordMetrics__FP11StyleRecordPlN32>
        10dd08:	e28dd004 	add	sp, sp, #4	; 0x4
        10dd0c:	e8bd0003 	ldmia	sp!, {r0, r1}
        10dd10:	e28dd008 	add	sp, sp, #8	; 0x8
        10dd14:	e0810000 	add	r0, r1, r0
        10dd18:	e1a00800 	mov	r0, r0, lsl #16
        10dd1c:	e1a00840 	mov	r0, r0, asr #16
        10dd20:	e5840044 	str	r0, [r4, #68]	; fField68
        10dd24:	e5941034 	ldr	r1, [r4, #52]	; fField52
        10dd28:	e1a01841 	mov	r1, r1, asr #16
        10dd2c:	e1a02001 	mov	r2, r1
        10dd30:	e5943032 	ldr	r3, [r4, #50]	; fField50
        10dd34:	e1a03823 	mov	r3, r3, lsr #16
        10dd38:	e5c43037 	strb	r3, [r4, #55]	; fField55
        10dd3c:	e1a03443 	mov	r3, r3, asr #8
        10dd40:	e5c43036 	strb	r3, [r4, #54]	; fField54
        10dd44:	e0811000 	add	r1, r1, r0
        10dd48:	e5c41035 	strb	r1, [r4, #53]	; fField53
        10dd4c:	e1a01441 	mov	r1, r1, asr #8
        10dd50:	e5c41034 	strb	r1, [r4, #52]	; fField52
        10dd54:	e0800006 	add	r0, r0, r6
        10dd58:	e1a00800 	mov	r0, r0, lsl #16
        10dd5c:	e59b1008 	ldr	r1, [fp, #8]	; fField8
        10dd60:	e5815000 	str	r5, [r1]
        10dd64:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        10dd68:	e0621841 	rsb	r1, r2, r1, asr #16
        10dd6c:	e59b3010 	ldr	r3, [fp, #16]	; fField16
        10dd70:	e5831000 	str	r1, [r3]
        10dd74:	e0610840 	rsb	r0, r1, r0, asr #16
        10dd78:	e59b200c 	ldr	r2, [fp, #12]	; fField12
        10dd7c:	e5820000 	str	r0, [r2]
        10dd80:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        10dd84:	e5890000 	str	r0, [r9]
        10dd88:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        10dd8c:	e5880000 	str	r0, [r8]
        10dd90:	e89d1008 	ldmia	sp, {r3, ip}
        10dd94:	e8871008 	stmia	r7, {r3, ip}
        10dd98:	e3a00001 	mov	r0, #1	; 0x1
        10dd9c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        10dda0:	e28d2004 	add	r2, sp, #4	; 0x4
        10dda4:	e28d1008 	add	r1, sp, #8	; 0x8
        10dda8:	e1a00004 	mov	r0, r4
        10ddac:	eb65edcd 	bl	1a894e8 <LineLoop::$AddNextTextRun(unsigned char *, StyleRecord ***)>
        10ddb0:	e3300000 	teq	r0, #0	; 0x0
        10ddb4:	1affff8f 	bne	10dbf8 <LineLoop::AddNextLine(long *, long *, long *, long *, long *, TRect *)+0x60>
        10ddb8:	e3a00000 	mov	r0, #0	; 0x0
        10ddbc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: LineLoop::ComputeLineBounds(long, long, long, long, long, long, TRect *)
 * Address: 0010ddc0
 */
LineLoop::ComputeLineBounds(long, long, long, long, long, long, TRect *) {
    /*
        10ddc0:	e1a0c00d 	mov	ip, sp
        10ddc4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        10ddc8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        10ddcc:	e24cb014 	sub	fp, ip, #20	; 0x14
        10ddd0:	e1a04000 	mov	r4, r0
        10ddd4:	e1a06002 	mov	r6, r2
        10ddd8:	e1a05003 	mov	r5, r3
        10dddc:	e28b9014 	add	r9, fp, #20	; 0x14
        10dde0:	e8990201 	ldmia	r9, {r0, r9}
        10dde4:	e59b201c 	ldr	r2, [fp, #28]
        10dde8:	e24dd014 	sub	sp, sp, #20	; 0x14
        10ddec:	e1530009 	cmp	r3, r9
        10ddf0:	d1a0a009 	movle	sl, r9
        10ddf4:	c1a0a005 	movgt	sl, r5
        10ddf8:	e1500002 	cmp	r0, r2
        10ddfc:	d1a00002 	movle	r0, r2
        10de00:	e58d0004 	str	r0, [sp, #4]	; fField4
        10de04:	e08a7000 	add	r7, sl, r0
        10de08:	e1a01009 	mov	r1, r9
        10de0c:	e1a00004 	mov	r0, r4
        10de10:	eb6737ea 	bl	1adbdc0 <LineLoop::$GetPseudoSpacing(long, long)>
        10de14:	e58d0000 	str	r0, [sp]
        10de18:	e5940020 	ldr	r0, [r4, #32]	; fField32
        10de1c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        10de20:	e3300000 	teq	r0, #0	; 0x0
        10de24:	1a000007 	bne	10de48 <LineLoop::ComputeLineBounds(long, long, long, long, long, long, TRect *)+0x88>
        10de28:	e594002c 	ldr	r0, [r4, #44]	; fField44
        10de2c:	e1a00820 	mov	r0, r0, lsr #16
        10de30:	e5cd000b 	strb	r0, [sp, #11]
        10de34:	e1a00440 	mov	r0, r0, asr #8
        10de38:	e5cd000a 	strb	r0, [sp, #10]
        10de3c:	e5940032 	ldr	r0, [r4, #50]	; fField50
        10de40:	e1a00820 	mov	r0, r0, lsr #16
        10de44:	ea000014 	b	10de9c <LineLoop::ComputeLineBounds(long, long, long, long, long, long, TRect *)+0xdc>
        10de48:	e3360000 	teq	r6, #0	; 0x0
        10de4c:	1a000016 	bne	10deac <LineLoop::ComputeLineBounds(long, long, long, long, long, long, TRect *)+0xec>
        10de50:	e3300801 	teq	r0, #65536	; 0x10000
        10de54:	e594000c 	ldr	r0, [r4, #12]	; fField12
        10de58:	e2800010 	add	r0, r0, #16	; 0x10
        10de5c:	05900006 	ldreq	r0, [r0, #6]	; fField6
        10de60:	01a00820 	moveq	r0, r0, lsr #16
        10de64:	02400001 	subeq	r0, r0, #1	; 0x1
        10de68:	0a000007 	beq	10de8c <LineLoop::ComputeLineBounds(long, long, long, long, long, long, TRect *)+0xcc>
        10de6c:	e1a01000 	mov	r1, r0
        10de70:	e5900002 	ldr	r0, [r0, #2]	; fField2
        10de74:	e1a00840 	mov	r0, r0, asr #16
        10de78:	e5911006 	ldr	r1, [r1, #6]	; fField6
        10de7c:	e1a01821 	mov	r1, r1, lsr #16
        10de80:	e0411000 	sub	r1, r1, r0
        10de84:	e1a01801 	mov	r1, r1, lsl #16
        10de88:	e08008c1 	add	r0, r0, r1, asr #17
        10de8c:	e5cd000b 	strb	r0, [sp, #11]
        10de90:	e1a00440 	mov	r0, r0, asr #8
        10de94:	e5cd000a 	strb	r0, [sp, #10]
        10de98:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        10de9c:	e5cd000f 	strb	r0, [sp, #15]
        10dea0:	e1a00440 	mov	r0, r0, asr #8
        10dea4:	e5cd000e 	strb	r0, [sp, #14]
        10dea8:	ea000010 	b	10def0 <LineLoop::ComputeLineBounds(long, long, long, long, long, long, TRect *)+0x130>
        10deac:	e24dd008 	sub	sp, sp, #8	; 0x8
        10deb0:	e5940010 	ldr	r0, [r4, #16]	; fField16
        10deb4:	e5900000 	ldr	r0, [r0]
        10deb8:	e59b1008 	ldr	r1, [fp, #8]	; fField8
        10debc:	e7900101 	ldr	r0, [r0, r1, lsl #2]	; fField2
        10dec0:	e1a0100d 	mov	r1, sp
        10dec4:	eb66231c 	bl	1a96b3c <$GetTextObjBounds(long, TRect *)>
        10dec8:	e59d0000 	ldr	r0, [sp]
        10decc:	e5cd0013 	strb	r0, [sp, #19]
        10ded0:	e1a00440 	mov	r0, r0, asr #8
        10ded4:	e5cd0012 	strb	r0, [sp, #18]
        10ded8:	e5940032 	ldr	r0, [r4, #50]	; fField50
        10dedc:	e1a00820 	mov	r0, r0, lsr #16
        10dee0:	e5cd0017 	strb	r0, [sp, #23]
        10dee4:	e1a00440 	mov	r0, r0, asr #8
        10dee8:	e5cd0016 	strb	r0, [sp, #22]
        10deec:	e28dd008 	add	sp, sp, #8	; 0x8
        10def0:	e59d000e 	ldr	r0, [sp, #14]
        10def4:	e1a00840 	mov	r0, r0, asr #16
        10def8:	e59d100a 	ldr	r1, [sp, #10]
        10defc:	e1300841 	teq	r0, r1, asr #16
        10df00:	1a000004 	bne	10df18 <LineLoop::ComputeLineBounds(long, long, long, long, long, long, TRect *)+0x158>
        10df04:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        10df08:	e2800001 	add	r0, r0, #1	; 0x1
        10df0c:	e5cd000f 	strb	r0, [sp, #15]
        10df10:	e1a00440 	mov	r0, r0, asr #8
        10df14:	e5cd000e 	strb	r0, [sp, #14]
        10df18:	e59d000e 	ldr	r0, [sp, #14]
        10df1c:	e1a00840 	mov	r0, r0, asr #16
        10df20:	e594102e 	ldr	r1, [r4, #46]	; fField46
        10df24:	e1a01841 	mov	r1, r1, asr #16
        10df28:	e1500001 	cmp	r0, r1
        10df2c:	a1a00001 	movge	r0, r1
        10df30:	e5cd000f 	strb	r0, [sp, #15]
        10df34:	e1a00440 	mov	r0, r0, asr #8
        10df38:	e5cd000e 	strb	r0, [sp, #14]
        10df3c:	e5940030 	ldr	r0, [r4, #48]	; fField48
        10df40:	e1a00820 	mov	r0, r0, lsr #16
        10df44:	e5cd0009 	strb	r0, [sp, #9]
        10df48:	e1a00440 	mov	r0, r0, asr #8
        10df4c:	e5cd0008 	strb	r0, [sp, #8]	; fField8
        10df50:	e594000c 	ldr	r0, [r4, #12]	; fField12
        10df54:	e1a0c000 	mov	ip, r0
        10df58:	e5901028 	ldr	r1, [r0, #40]	; fField40
        10df5c:	e3c11103 	bic	r1, r1, #-1073741824	; 0xc0000000
        10df60:	e5902038 	ldr	r2, [r0, #56]	; fField56
        10df64:	e5b03010 	ldr	r3, [r0, #16]!	; fField16
        10df68:	e1a03843 	mov	r3, r3, asr #16
        10df6c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        10df70:	e1330840 	teq	r3, r0, asr #16
        10df74:	13a00000 	movne	r0, #0	; 0x0
        10df78:	03a00001 	moveq	r0, #1	; 0x1
        10df7c:	e21080ff 	ands	r8, r0, #255	; 0xff
        10df80:	e5940034 	ldr	r0, [r4, #52]	; fField52
        10df84:	e1a00820 	mov	r0, r0, lsr #16
        10df88:	e1a0380a 	mov	r3, sl, lsl #16
        10df8c:	e1a03843 	mov	r3, r3, asr #16
        10df90:	e0400003 	sub	r0, r0, r3
        10df94:	e1a00800 	mov	r0, r0, lsl #16
        10df98:	e1a00840 	mov	r0, r0, asr #16
        10df9c:	e24dd004 	sub	sp, sp, #4	; 0x4
        10dfa0:	0a000008 	beq	10dfc8 <LineLoop::ComputeLineBounds(long, long, long, long, long, long, TRect *)+0x208>
        10dfa4:	e3a0a001 	mov	sl, #1	; 0x1
        10dfa8:	e3520000 	cmp	r2, #0	; 0x0
        10dfac:	ca000023 	bgt	10e040 <LineLoop::ComputeLineBounds(long, long, long, long, long, long, TRect *)+0x280>
        10dfb0:	e28ce07c 	add	lr, ip, #124	; 0x7c
        10dfb4:	e3a0c000 	mov	ip, #0	; 0x0
        10dfb8:	e58dc000 	str	ip, [sp]
        10dfbc:	e59ec000 	ldr	ip, [lr]
        10dfc0:	e33c0000 	teq	ip, #0	; 0x0
        10dfc4:	1a00001d 	bne	10e040 <LineLoop::ComputeLineBounds(long, long, long, long, long, long, TRect *)+0x280>
        10dfc8:	e5942044 	ldr	r2, [r4, #68]	; fField68
        10dfcc:	e5bdc004 	ldr	ip, [sp, #4]!	; fField4
        10dfd0:	e132000c 	teq	r2, ip
        10dfd4:	03380000 	teqeq	r8, #0	; 0x0
        10dfd8:	1a00006b 	bne	10e18c <LineLoop::ComputeLineBounds(long, long, long, long, long, long, TRect *)+0x3cc>
        10dfdc:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        10dfe0:	e1a01841 	mov	r1, r1, asr #16
        10dfe4:	e1510000 	cmp	r1, r0
        10dfe8:	b1a00001 	movlt	r0, r1
        10dfec:	e5cd0009 	strb	r0, [sp, #9]
        10dff0:	e1a00440 	mov	r0, r0, asr #8
        10dff4:	e5cd0008 	strb	r0, [sp, #8]	; fField8
        10dff8:	e5941030 	ldr	r1, [r4, #48]	; fField48
        10dffc:	e1a01821 	mov	r1, r1, lsr #16
        10e000:	e5940044 	ldr	r0, [r4, #68]	; fField68
        10e004:	e0810000 	add	r0, r1, r0
        10e008:	e1a00800 	mov	r0, r0, lsl #16
        10e00c:	e1a00840 	mov	r0, r0, asr #16
        10e010:	e5941034 	ldr	r1, [r4, #52]	; fField52
        10e014:	e1a01821 	mov	r1, r1, lsr #16
        10e018:	e59d2004 	ldr	r2, [sp, #4]	; fField4
        10e01c:	e0811002 	add	r1, r1, r2
        10e020:	e1a01801 	mov	r1, r1, lsl #16
        10e024:	e1a01841 	mov	r1, r1, asr #16
        10e028:	e1500001 	cmp	r0, r1
        10e02c:	d1a00001 	movle	r0, r1
        10e030:	e5cd000d 	strb	r0, [sp, #13]
        10e034:	e1a00440 	mov	r0, r0, asr #8
        10e038:	e5cd000c 	strb	r0, [sp, #12]	; fField12
        10e03c:	ea0000cf 	b	10e380 <LineLoop::ComputeLineBounds(long, long, long, long, long, long, TRect *)+0x5c0>
        10e040:	e28dd004 	add	sp, sp, #4	; 0x4
        10e044:	e5cd0009 	strb	r0, [sp, #9]
        10e048:	e1a01440 	mov	r1, r0, asr #8
        10e04c:	e5cd1008 	strb	r1, [sp, #8]	; fField8
        10e050:	e59d300a 	ldr	r3, [sp, #10]
        10e054:	e0833007 	add	r3, r3, r7
        10e058:	e5cd300d 	strb	r3, [sp, #13]
        10e05c:	e1a03443 	mov	r3, r3, asr #8
        10e060:	e5cd300c 	strb	r3, [sp, #12]	; fField12
        10e064:	e594300c 	ldr	r3, [r4, #12]	; fField12
        10e068:	e1a0c003 	mov	ip, r3
        10e06c:	e5b35010 	ldr	r5, [r3, #16]!	; fField16
        10e070:	e1a05845 	mov	r5, r5, asr #16
        10e074:	e59de008 	ldr	lr, [sp, #8]	; fField8
        10e078:	e135084e 	teq	r5, lr, asr #16
        10e07c:	159cc008 	ldrne	ip, [ip, #8]	; fField8
        10e080:	120cc008 	andne	ip, ip, #8	; 0x8
        10e084:	133c0000 	teqne	ip, #0	; 0x0
        10e088:	0a0000bc 	beq	10e380 <LineLoop::ComputeLineBounds(long, long, long, long, long, long, TRect *)+0x5c0>
        10e08c:	e3320000 	teq	r2, #0	; 0x0
        10e090:	1a0000ba 	bne	10e380 <LineLoop::ComputeLineBounds(long, long, long, long, long, long, TRect *)+0x5c0>
        10e094:	e24dd008 	sub	sp, sp, #8	; 0x8
        10e098:	e1a02003 	mov	r2, r3
        10e09c:	e8925000 	ldmia	r2, {ip, lr}
        10e0a0:	e88d5000 	stmia	sp, {ip, lr}
        10e0a4:	e5cd0001 	strb	r0, [sp, #1]
        10e0a8:	e44d1008 	strb	r1, [sp], -#8	; fField8
        10e0ac:	e594000c 	ldr	r0, [r4, #12]	; fField12
        10e0b0:	e5b0101c 	ldr	r1, [r0, #28]!
        10e0b4:	e28d0004 	add	r0, sp, #4	; 0x4
        10e0b8:	eb056511 	bl	267504 <TView::ContentsOrigin(void)>
        10e0bc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        10e0c0:	e2600000 	rsb	r0, r0, #0	; 0x0
        10e0c4:	e1a01800 	mov	r1, r0, lsl #16
        10e0c8:	e1a01841 	mov	r1, r1, asr #16
        10e0cc:	e59d0006 	ldr	r0, [sp, #6]	; fField6
        10e0d0:	e2600000 	rsb	r0, r0, #0	; 0x0
        10e0d4:	e1a00800 	mov	r0, r0, lsl #16
        10e0d8:	e1a00840 	mov	r0, r0, asr #16
        10e0dc:	e24dd004 	sub	sp, sp, #4	; 0x4
        10e0e0:	e5cd1003 	strb	r1, [sp, #3]
        10e0e4:	e1a01441 	mov	r1, r1, asr #8
        10e0e8:	e5cd1002 	strb	r1, [sp, #2]	; fField2
        10e0ec:	e5cd0001 	strb	r0, [sp, #1]
        10e0f0:	e1a00440 	mov	r0, r0, asr #8
        10e0f4:	e5cd0000 	strb	r0, [sp]
        10e0f8:	e49d0004 	ldr	r0, [sp], #4	; fField4
        10e0fc:	e58d0000 	str	r0, [sp]
        10e100:	e28d0008 	add	r0, sp, #8	; 0x8
        10e104:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        10e108:	e1a01841 	mov	r1, r1, asr #16
        10e10c:	e59d2000 	ldr	r2, [sp]
        10e110:	e1a02842 	mov	r2, r2, asr #16
        10e114:	eb690df3 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        10e118:	e3a00000 	mov	r0, #0	; 0x0
        10e11c:	e594100c 	ldr	r1, [r4, #12]	; fField12
        10e120:	e5c10078 	strb	r0, [r1, #120]
        10e124:	e28dd004 	add	sp, sp, #4	; 0x4
        10e128:	e594000c 	ldr	r0, [r4, #12]	; fField12
        10e12c:	e5900008 	ldr	r0, [r0, #8]	; fField8
        10e130:	e3100082 	tst	r0, #130	; 0x82
        10e134:	1a000009 	bne	10e160 <LineLoop::ComputeLineBounds(long, long, long, long, long, long, TRect *)+0x3a0>
        10e138:	e28d0004 	add	r0, sp, #4	; 0x4
        10e13c:	eb6b8596 	bl	1bef79c <$ToObject(TRect const &)>
        10e140:	eb6ad001 	bl	1bc214c <$AllocateRefHandle(long)>
        10e144:	e58d0000 	str	r0, [sp]
        10e148:	e1a0200d 	mov	r2, sp
        10e14c:	e594000c 	ldr	r0, [r4, #12]	; fField12
        10e150:	e59f1030 	ldr	r1, [pc, #30]	; 10e188 <LineLoop::ComputeLineBounds(long, long, long, long, long, long, TRect *)+0x3c8>
        10e154:	eb673b31 	bl	1adce20 <TView::$SetDataSlot(RefVar const &, RefVar const &)>
        10e158:	e59d0000 	ldr	r0, [sp]
        10e15c:	eb6ad416 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10e160:	e28d1004 	add	r1, sp, #4	; 0x4
        10e164:	e594200c 	ldr	r2, [r4, #12]	; fField12
        10e168:	e1a00002 	mov	r0, r2
        10e16c:	e5922000 	ldr	r2, [r2]
        10e170:	e1a0e00f 	mov	lr, pc
        10e174:	e282f02c 	add	pc, r2, #44	; 0x2c
        10e178:	e5b4000c 	ldr	r0, [r4, #12]!	; fField12
        10e17c:	e5c0a078 	strb	sl, [r0, #120]
        10e180:	e28dd00c 	add	sp, sp, #12	; 0xc
        10e184:	ea00007d 	b	10e380 <LineLoop::ComputeLineBounds(long, long, long, long, long, long, TRect *)+0x5c0>
        10e188:	00684f08 	rsbeq	r4, r8, r8, lsl #30
        10e18c:	e3a0a000 	mov	sl, #0	; 0x0
        10e190:	e3110502 	tst	r1, #8388608	; 0x800000
        10e194:	1201000c 	andne	r0, r1, #12	; 0xc
        10e198:	13300000 	teqne	r0, #0	; 0x0
        10e19c:	0a000017 	beq	10e200 <LineLoop::ComputeLineBounds(long, long, long, long, long, long, TRect *)+0x440>
        10e1a0:	e594100c 	ldr	r1, [r4, #12]	; fField12
        10e1a4:	e2811010 	add	r1, r1, #16	; 0x10
        10e1a8:	e5912004 	ldr	r2, [r1, #4]	; fField4
        10e1ac:	e1a02822 	mov	r2, r2, lsr #16
        10e1b0:	e5911000 	ldr	r1, [r1]
        10e1b4:	e1a01821 	mov	r1, r1, lsr #16
        10e1b8:	e0421001 	sub	r1, r2, r1
        10e1bc:	e1a01801 	mov	r1, r1, lsl #16
        10e1c0:	e1a01841 	mov	r1, r1, asr #16
        10e1c4:	e3300004 	teq	r0, #4	; 0x4
        10e1c8:	00410007 	subeq	r0, r1, r7
        10e1cc:	00800fa0 	addeq	r0, r0, r0, lsr #31
        10e1d0:	01a000c0 	moveq	r0, r0, asr #1
        10e1d4:	0a000002 	beq	10e1e4 <LineLoop::ComputeLineBounds(long, long, long, long, long, long, TRect *)+0x424>
        10e1d8:	e3300008 	teq	r0, #8	; 0x8
        10e1dc:	1a00001e 	bne	10e25c <LineLoop::ComputeLineBounds(long, long, long, long, long, long, TRect *)+0x49c>
        10e1e0:	e0410007 	sub	r0, r1, r7
        10e1e4:	e1a0a800 	mov	sl, r0, lsl #16
        10e1e8:	e1b0a84a 	movs	sl, sl, asr #16
        10e1ec:	15940030 	ldrne	r0, [r4, #48]	; fField48
        10e1f0:	11a00820 	movne	r0, r0, lsr #16
        10e1f4:	1080000a 	addne	r0, r0, sl
        10e1f8:	1a000014 	bne	10e250 <LineLoop::ComputeLineBounds(long, long, long, long, long, long, TRect *)+0x490>
        10e1fc:	ea000016 	b	10e25c <LineLoop::ComputeLineBounds(long, long, long, long, long, long, TRect *)+0x49c>
        10e200:	e3380000 	teq	r8, #0	; 0x0
        10e204:	0a000008 	beq	10e22c <LineLoop::ComputeLineBounds(long, long, long, long, long, long, TRect *)+0x46c>
        10e208:	e5941030 	ldr	r1, [r4, #48]	; fField48
        10e20c:	e1a01821 	mov	r1, r1, lsr #16
        10e210:	e5940034 	ldr	r0, [r4, #52]	; fField52
        10e214:	e1a00820 	mov	r0, r0, lsr #16
        10e218:	e0400005 	sub	r0, r0, r5
        10e21c:	e0410000 	sub	r0, r1, r0
        10e220:	e1a0a800 	mov	sl, r0, lsl #16
        10e224:	e1a0a84a 	mov	sl, sl, asr #16
        10e228:	ea00000b 	b	10e25c <LineLoop::ComputeLineBounds(long, long, long, long, long, long, TRect *)+0x49c>
        10e22c:	e5940048 	ldr	r0, [r4, #72]	; fField72
        10e230:	e0801009 	add	r1, r0, r9
        10e234:	e5940034 	ldr	r0, [r4, #52]	; fField52
        10e238:	e1a00840 	mov	r0, r0, asr #16
        10e23c:	e0411000 	sub	r1, r1, r0
        10e240:	e1a0a801 	mov	sl, r1, lsl #16
        10e244:	e1a0a84a 	mov	sl, sl, asr #16
        10e248:	e080000a 	add	r0, r0, sl
        10e24c:	e0400003 	sub	r0, r0, r3
        10e250:	e5cd0009 	strb	r0, [sp, #9]
        10e254:	e1a00440 	mov	r0, r0, asr #8
        10e258:	e5cd0008 	strb	r0, [sp, #8]	; fField8
        10e25c:	e33a0000 	teq	sl, #0	; 0x0
        10e260:	0a000036 	beq	10e340 <LineLoop::ComputeLineBounds(long, long, long, long, long, long, TRect *)+0x580>
        10e264:	e5940010 	ldr	r0, [r4, #16]	; fField16
        10e268:	e5900000 	ldr	r0, [r0]
        10e26c:	e59b1008 	ldr	r1, [fp, #8]	; fField8
        10e270:	e0805101 	add	r5, r0, r1, lsl #2
        10e274:	e3a09000 	mov	r9, #0	; 0x0
        10e278:	e3560000 	cmp	r6, #0	; 0x0
        10e27c:	da000029 	ble	10e328 <LineLoop::ComputeLineBounds(long, long, long, long, long, long, TRect *)+0x568>
        10e280:	e1a0044a 	mov	r0, sl, asr #8
        10e284:	e58d0010 	str	r0, [sp, #16]	; fField16
        10e288:	e24dd004 	sub	sp, sp, #4	; 0x4
        10e28c:	e1a0100d 	mov	r1, sp
        10e290:	e5950000 	ldr	r0, [r5]
        10e294:	eb662227 	bl	1a96b38 <$GetTextObjBaseline(long, TPoint *)>
        10e298:	e3a00000 	mov	r0, #0	; 0x0
        10e29c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        10e2a0:	e5cd0003 	strb	r0, [sp, #3]
        10e2a4:	e5cd0002 	strb	r0, [sp, #2]	; fField2
        10e2a8:	e5cda001 	strb	sl, [sp, #1]
        10e2ac:	e59d0020 	ldr	r0, [sp, #32]	; fField32
        10e2b0:	e5cd0000 	strb	r0, [sp]
        10e2b4:	e49d0004 	ldr	r0, [sp], #4	; fField4
        10e2b8:	e58d0000 	str	r0, [sp]
        10e2bc:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        10e2c0:	e59d1000 	ldr	r1, [sp]
        10e2c4:	e0800001 	add	r0, r0, r1
        10e2c8:	e1a00800 	mov	r0, r0, lsl #16
        10e2cc:	e1a00840 	mov	r0, r0, asr #16
        10e2d0:	e59d100a 	ldr	r1, [sp, #10]
        10e2d4:	e41d2004 	ldr	r2, [sp], -#4	; fField4
        10e2d8:	e1a02822 	mov	r2, r2, lsr #16
        10e2dc:	e0811002 	add	r1, r1, r2
        10e2e0:	e1a01801 	mov	r1, r1, lsl #16
        10e2e4:	e1a01841 	mov	r1, r1, asr #16
        10e2e8:	e5cd0003 	strb	r0, [sp, #3]
        10e2ec:	e1a00440 	mov	r0, r0, asr #8
        10e2f0:	e5cd0002 	strb	r0, [sp, #2]	; fField2
        10e2f4:	e5cd1001 	strb	r1, [sp, #1]
        10e2f8:	e1a00441 	mov	r0, r1, asr #8
        10e2fc:	e5cd0000 	strb	r0, [sp]
        10e300:	e49d0008 	ldr	r0, [sp], #8	; fField8
        10e304:	e58d0000 	str	r0, [sp]
        10e308:	e1a0100d 	mov	r1, sp
        10e30c:	e5950000 	ldr	r0, [r5]
        10e310:	eb664f90 	bl	1aa2158 <$SetTextObjBaseline(long, TPoint &)>
        10e314:	e2855004 	add	r5, r5, #4	; 0x4
        10e318:	e28dd008 	add	sp, sp, #8	; 0x8
        10e31c:	e2899001 	add	r9, r9, #1	; 0x1
        10e320:	e1590006 	cmp	r9, r6
        10e324:	baffffd7 	blt	10e288 <LineLoop::ComputeLineBounds(long, long, long, long, long, long, TRect *)+0x4c8>
        10e328:	e5940034 	ldr	r0, [r4, #52]	; fField52
        10e32c:	e1a00820 	mov	r0, r0, lsr #16
        10e330:	e080000a 	add	r0, r0, sl
        10e334:	e5c40035 	strb	r0, [r4, #53]	; fField53
        10e338:	e1a00440 	mov	r0, r0, asr #8
        10e33c:	e5c40034 	strb	r0, [r4, #52]	; fField52
        10e340:	e59d000a 	ldr	r0, [sp, #10]
        10e344:	e0800007 	add	r0, r0, r7
        10e348:	e5cd000d 	strb	r0, [sp, #13]
        10e34c:	e1a00440 	mov	r0, r0, asr #8
        10e350:	e5cd000c 	strb	r0, [sp, #12]	; fField12
        10e354:	e3380000 	teq	r8, #0	; 0x0
        10e358:	1a000008 	bne	10e380 <LineLoop::ComputeLineBounds(long, long, long, long, long, long, TRect *)+0x5c0>
        10e35c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        10e360:	e1a00840 	mov	r0, r0, asr #16
        10e364:	e5941030 	ldr	r1, [r4, #48]	; fField48
        10e368:	e1a01841 	mov	r1, r1, asr #16
        10e36c:	e1500001 	cmp	r0, r1
        10e370:	a1a00001 	movge	r0, r1
        10e374:	e5cd0009 	strb	r0, [sp, #9]
        10e378:	e1a00440 	mov	r0, r0, asr #8
        10e37c:	e5cd0008 	strb	r0, [sp, #8]	; fField8
        10e380:	e28d1008 	add	r1, sp, #8	; 0x8
        10e384:	e59b0020 	ldr	r0, [fp, #32]	; fField32
        10e388:	e8911008 	ldmia	r1, {r3, ip}
        10e38c:	e8801008 	stmia	r0, {r3, ip}
        10e390:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)
 * Address: 0010e394
 */
LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***) {
    /*
        10e394:	e1a0c00d 	mov	ip, sp
        10e398:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        10e39c:	e24cb004 	sub	fp, ip, #4	; 0x4
        10e3a0:	e1a04000 	mov	r4, r0
        10e3a4:	e1a06001 	mov	r6, r1
        10e3a8:	e1a05002 	mov	r5, r2
        10e3ac:	e24dd00c 	sub	sp, sp, #12	; 0xc
        10e3b0:	e5901004 	ldr	r1, [r0, #4]	; fField4
        10e3b4:	e5900024 	ldr	r0, [r0, #36]	; fField36
        10e3b8:	e3a07000 	mov	r7, #0	; 0x0
        10e3bc:	e1510000 	cmp	r1, r0
        10e3c0:	21a00007 	movcs	r0, r7
        10e3c4:	291baff0 	ldmcsdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        10e3c8:	e24dd004 	sub	sp, sp, #4	; 0x4
        10e3cc:	e5940020 	ldr	r0, [r4, #32]	; fField32
        10e3d0:	e5b09008 	ldr	r9, [r0, #8]!	; fField8
        10e3d4:	e5940028 	ldr	r0, [r4, #40]	; fField40
        10e3d8:	e5903000 	ldr	r3, [r0]
        10e3dc:	e92d0008 	stmdb	sp!, {r3}
        10e3e0:	e594303c 	ldr	r3, [r4, #60]	; fField60
        10e3e4:	e5942034 	ldr	r2, [r4, #52]	; fField52
        10e3e8:	e1a02842 	mov	r2, r2, asr #16
        10e3ec:	e5941030 	ldr	r1, [r4, #48]	; fField48
        10e3f0:	e1a01841 	mov	r1, r1, asr #16
        10e3f4:	e594000c 	ldr	r0, [r4, #12]	; fField12
        10e3f8:	eb66325b 	bl	1a9ad6c <TParagraphView::$LineFitsInBounds(long, long, long, StyleRecord *)>
        10e3fc:	e5ad0004 	str	r0, [sp, #4]!	; fField4
        10e400:	e3300002 	teq	r0, #2	; 0x2
        10e404:	01a00007 	moveq	r0, r7
        10e408:	0a00003f 	beq	10e50c <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0x178>
        10e40c:	e3a07000 	mov	r7, #0	; 0x0
        10e410:	e5c67000 	strb	r7, [r6]
        10e414:	e3a0a001 	mov	sl, #1	; 0x1
        10e418:	e5948004 	ldr	r8, [r4, #4]	; fField4
        10e41c:	e1a00004 	mov	r0, r4
        10e420:	eb66535f 	bl	1aa31a4 <LineLoop::$SkipLeadingTabs(void)>
        10e424:	e5941004 	ldr	r1, [r4, #4]	; fField4
        10e428:	e5942024 	ldr	r2, [r4, #36]	; fField36
        10e42c:	e1510002 	cmp	r1, r2
        10e430:	2a000004 	bcs	10e448 <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0xb4>
        10e434:	e5912000 	ldr	r2, [r1]
        10e438:	e1a02822 	mov	r2, r2, lsr #16
        10e43c:	e332000d 	teq	r2, #13	; 0xd
        10e440:	03a02001 	moveq	r2, #1	; 0x1
        10e444:	0a000000 	beq	10e44c <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0xb8>
        10e448:	e3a02000 	mov	r2, #0	; 0x0
        10e44c:	e20270ff 	and	r7, r2, #255	; 0xff
        10e450:	e2843028 	add	r3, r4, #40	; 0x28
        10e454:	e2842018 	add	r2, r4, #24	; 0x18
        10e458:	e3500000 	cmp	r0, #0	; 0x0
        10e45c:	e58d2008 	str	r2, [sp, #8]	; fField8
        10e460:	e58d300c 	str	r3, [sp, #12]	; fField12
        10e464:	ca000001 	bgt	10e470 <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0xdc>
        10e468:	e3370000 	teq	r7, #0	; 0x0
        10e46c:	0a000027 	beq	10e510 <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0x17c>
        10e470:	e3500000 	cmp	r0, #0	; 0x0
        10e474:	da000009 	ble	10e4a0 <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0x10c>
        10e478:	e5c40033 	strb	r0, [r4, #51]	; fField51
        10e47c:	e1a02440 	mov	r2, r0, asr #8
        10e480:	e5c42032 	strb	r2, [r4, #50]	; fField50
        10e484:	e5c40037 	strb	r0, [r4, #55]	; fField55
        10e488:	e5c42036 	strb	r2, [r4, #54]	; fField54
        10e48c:	e594202e 	ldr	r2, [r4, #46]	; fField46
        10e490:	e1a02822 	mov	r2, r2, lsr #16
        10e494:	e0420000 	sub	r0, r2, r0
        10e498:	e1a09800 	mov	r9, r0, lsl #16
        10e49c:	e3a0a000 	mov	sl, #0	; 0x0
        10e4a0:	e3370000 	teq	r7, #0	; 0x0
        10e4a4:	12810002 	addne	r0, r1, #2	; 0x2
        10e4a8:	15840004 	strne	r0, [r4, #4]	; fField4
        10e4ac:	e3a03000 	mov	r3, #0	; 0x0
        10e4b0:	e92d0008 	stmdb	sp!, {r3}
        10e4b4:	e5940004 	ldr	r0, [r4, #4]	; fField4
        10e4b8:	e0403008 	sub	r3, r0, r8
        10e4bc:	e0833fa3 	add	r3, r3, r3, lsr #31
        10e4c0:	e1a030c3 	mov	r3, r3, asr #1
        10e4c4:	e1a02005 	mov	r2, r5
        10e4c8:	e28d100c 	add	r1, sp, #12	; 0xc
        10e4cc:	e8910003 	ldmia	r1, {r0, r1}
        10e4d0:	eb665b7f 	bl	1aa52d4 <$UpdateStyleRunLengths__FPPsPPP11StyleRecordT2UlUc>
        10e4d4:	e28dd004 	add	sp, sp, #4	; 0x4
        10e4d8:	e5940032 	ldr	r0, [r4, #50]	; fField50
        10e4dc:	e1a00840 	mov	r0, r0, asr #16
        10e4e0:	e594102e 	ldr	r1, [r4, #46]	; fField46
        10e4e4:	e1500841 	cmp	r0, r1, asr #16
        10e4e8:	aa000005 	bge	10e504 <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0x170>
        10e4ec:	e3370000 	teq	r7, #0	; 0x0
        10e4f0:	1a000003 	bne	10e504 <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0x170>
        10e4f4:	e5940024 	ldr	r0, [r4, #36]	; fField36
        10e4f8:	e5941004 	ldr	r1, [r4, #4]	; fField4
        10e4fc:	e1510000 	cmp	r1, r0
        10e500:	3a000002 	bcc	10e510 <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0x17c>
        10e504:	e3a00001 	mov	r0, #1	; 0x1
        10e508:	e5c60000 	strb	r0, [r6]
        10e50c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        10e510:	e24dd00c 	sub	sp, sp, #12	; 0xc
        10e514:	e5940004 	ldr	r0, [r4, #4]	; fField4
        10e518:	eb6b8090 	bl	1bee760 <$Ustrlen>
        10e51c:	e58d0008 	str	r0, [sp, #8]	; fField8
        10e520:	e3a01000 	mov	r1, #0	; 0x0
        10e524:	e58d0004 	str	r0, [sp, #4]	; fField4
        10e528:	e5cd1000 	strb	r1, [sp]
        10e52c:	e5d40038 	ldrb	r0, [r4, #56]	; fField56
        10e530:	e3300000 	teq	r0, #0	; 0x0
        10e534:	1a000006 	bne	10e554 <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0x1c0>
        10e538:	e1a0100d 	mov	r1, sp
        10e53c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        10e540:	eb663a38 	bl	1a9ce28 <$NextTabOrCRCharOffset(unsigned short *, unsigned char *)>
        10e544:	e3500000 	cmp	r0, #0	; 0x0
        10e548:	a58d0004 	strge	r0, [sp, #4]	; fField4
        10e54c:	b3a00001 	movlt	r0, #1	; 0x1
        10e550:	b5c40038 	strltb	r0, [r4, #56]	; fField56
        10e554:	e24dd008 	sub	sp, sp, #8	; 0x8
        10e558:	e2840034 	add	r0, r4, #52	; 0x34
        10e55c:	e1a0100d 	mov	r1, sp
        10e560:	eb66573e 	bl	1aa4260 <$TPoint2FPoint(TPoint &, FPoint *)>
        10e564:	e3a0000c 	mov	r0, #12	; 0xc
        10e568:	eb6b0072 	bl	1bce738 <$__nw(unsigned int)>
        10e56c:	e1b07000 	movs	r7, r0
        10e570:	0a000004 	beq	10e588 <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0x1f4>
        10e574:	e3a00002 	mov	r0, #2	; 0x2
        10e578:	eb6acef3 	bl	1bc214c <$AllocateRefHandle(long)>
        10e57c:	e3a01000 	mov	r1, #0	; 0x0
        10e580:	e5870008 	str	r0, [r7, #8]	; fField8
        10e584:	e5a01004 	str	r1, [r0, #4]!	; fField4
        10e588:	e1b08007 	movs	r8, r7
        10e58c:	e59f019c 	ldr	r0, [pc, #19c]	; 10e730 <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0x39c>
        10e590:	e58d0018 	str	r0, [sp, #24]	; fField24
        10e594:	1a000005 	bne	10e5b0 <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0x21c>
        10e598:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        10e59c:	e5900000 	ldr	r0, [r0]
        10e5a0:	e3a02000 	mov	r2, #0	; 0x0
        10e5a4:	e3a010e9 	mov	r1, #233	; 0xe9
        10e5a8:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        10e5ac:	eb6b52fa 	bl	1be319c <$Throw>
        10e5b0:	e594000c 	ldr	r0, [r4, #12]	; fField12
        10e5b4:	e5880000 	str	r0, [r8]
        10e5b8:	e5940004 	ldr	r0, [r4, #4]	; fField4
        10e5bc:	e5941000 	ldr	r1, [r4]
        10e5c0:	e0400001 	sub	r0, r0, r1
        10e5c4:	e0800fa0 	add	r0, r0, r0, lsr #31
        10e5c8:	e1a000c0 	mov	r0, r0, asr #1
        10e5cc:	e5880004 	str	r0, [r8, #4]	; fField4
        10e5d0:	e5947020 	ldr	r7, [r4, #32]	; fField32
        10e5d4:	e5970008 	ldr	r0, [r7, #8]	; fField8
        10e5d8:	e1300009 	teq	r0, r9
        10e5dc:	0a000019 	beq	10e648 <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0x2b4>
        10e5e0:	e3a0001c 	mov	r0, #28	; 0x1c
        10e5e4:	eb6b0053 	bl	1bce738 <$__nw(unsigned int)>
        10e5e8:	e1b07000 	movs	r7, r0
        10e5ec:	1a00000e 	bne	10e62c <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0x298>
        10e5f0:	e52d8004 	str	r8, [sp, -#4]!	; fField4
        10e5f4:	e3380000 	teq	r8, #0	; 0x0
        10e5f8:	0a000004 	beq	10e610 <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0x27c>
        10e5fc:	e59d0000 	ldr	r0, [sp]
        10e600:	e5900008 	ldr	r0, [r0, #8]	; fField8
        10e604:	eb6ad2ec 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10e608:	e59d0000 	ldr	r0, [sp]
        10e60c:	eb6afc33 	bl	1bcd6e0 <$__dl(void *)>
        10e610:	e28dd004 	add	sp, sp, #4	; 0x4
        10e614:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        10e618:	e5900000 	ldr	r0, [r0]
        10e61c:	e3a02000 	mov	r2, #0	; 0x0
        10e620:	e3a010e9 	mov	r1, #233	; 0xe9
        10e624:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        10e628:	eb6b52db 	bl	1be319c <$Throw>
        10e62c:	e1a00007 	mov	r0, r7
        10e630:	e594e020 	ldr	lr, [r4, #32]	; fField32
        10e634:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        10e638:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        10e63c:	e89e100c 	ldmia	lr, {r2, r3, ip}
        10e640:	e880100c 	stmia	r0, {r2, r3, ip}
        10e644:	e5879008 	str	r9, [r7, #8]	; fField8
        10e648:	e1a03007 	mov	r3, r7
        10e64c:	e92d0008 	stmdb	sp!, {r3}
        10e650:	e24dd008 	sub	sp, sp, #8	; 0x8
        10e654:	e28d000c 	add	r0, sp, #12	; 0xc
        10e658:	e8905000 	ldmia	r0, {ip, lr}
        10e65c:	e88d5000 	stmia	sp, {ip, lr}
        10e660:	e5942028 	ldr	r2, [r4, #40]	; fField40
        10e664:	e5943018 	ldr	r3, [r4, #24]	; fField24
        10e668:	e1a00008 	mov	r0, r8
        10e66c:	e59d1018 	ldr	r1, [sp, #24]	; fField24
        10e670:	eb690c95 	bl	1b518cc <$NewText(void *, long, StyleRecord **, short *, FPoint, TextOptions *)>
        10e674:	e28dd00c 	add	sp, sp, #12	; 0xc
        10e678:	e1b09000 	movs	r9, r0
        10e67c:	1a000012 	bne	10e6cc <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0x338>
        10e680:	e52d8004 	str	r8, [sp, -#4]!	; fField4
        10e684:	e3380000 	teq	r8, #0	; 0x0
        10e688:	0a000004 	beq	10e6a0 <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0x30c>
        10e68c:	e59d0000 	ldr	r0, [sp]
        10e690:	e5900008 	ldr	r0, [r0, #8]	; fField8
        10e694:	eb6ad2c8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10e698:	e59d0000 	ldr	r0, [sp]
        10e69c:	eb6afc0f 	bl	1bcd6e0 <$__dl(void *)>
        10e6a0:	e28dd004 	add	sp, sp, #4	; 0x4
        10e6a4:	e5940020 	ldr	r0, [r4, #32]	; fField32
        10e6a8:	e1300007 	teq	r0, r7
        10e6ac:	11a00007 	movne	r0, r7
        10e6b0:	1b6afc0a 	blne	1bcd6e0 <$__dl(void *)>
        10e6b4:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        10e6b8:	e5900000 	ldr	r0, [r0]
        10e6bc:	e3a02000 	mov	r2, #0	; 0x0
        10e6c0:	e3a010e9 	mov	r1, #233	; 0xe9
        10e6c4:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        10e6c8:	eb6b52b3 	bl	1be319c <$Throw>
        10e6cc:	e24dd004 	sub	sp, sp, #4	; 0x4
        10e6d0:	e1a0200d 	mov	r2, sp
        10e6d4:	e1a00009 	mov	r0, r9
        10e6d8:	e3a01001 	mov	r1, #1	; 0x1
        10e6dc:	eb690441 	bl	1b4f7e8 <$GetTextObjField(long, TextObjectField, void *)>
        10e6e0:	e59d0000 	ldr	r0, [sp]
        10e6e4:	e3300000 	teq	r0, #0	; 0x0
        10e6e8:	1a000026 	bne	10e788 <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0x3f4>
        10e6ec:	e33a0000 	teq	sl, #0	; 0x0
        10e6f0:	1a00000f 	bne	10e734 <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0x3a0>
        10e6f4:	e3380000 	teq	r8, #0	; 0x0
        10e6f8:	0a000003 	beq	10e70c <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0x378>
        10e6fc:	e5980008 	ldr	r0, [r8, #8]	; fField8
        10e700:	eb6ad2ad 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10e704:	e1a00008 	mov	r0, r8
        10e708:	eb6afbf4 	bl	1bcd6e0 <$__dl(void *)>
        10e70c:	e5b40020 	ldr	r0, [r4, #32]!	; fField32
        10e710:	e1300007 	teq	r0, r7
        10e714:	11a00007 	movne	r0, r7
        10e718:	1b6afbf0 	blne	1bcd6e0 <$__dl(void *)>
        10e71c:	e1a00009 	mov	r0, r9
        10e720:	eb68fbf0 	bl	1b4d6e8 <$DisposeText(long)>
        10e724:	e3a00001 	mov	r0, #1	; 0x1
        10e728:	e5c60000 	strb	r0, [r6]
        10e72c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        10e730:	00371318 	eoreqs	r1, r7, r8, lsl r3
        10e734:	e5970008 	ldr	r0, [r7, #8]	; fField8
        10e738:	e2800902 	add	r0, r0, #32768	; 0x8000
        10e73c:	e1a00840 	mov	r0, r0, asr #16
        10e740:	e2800003 	add	r0, r0, #3	; 0x3
        10e744:	e1a00800 	mov	r0, r0, lsl #16
        10e748:	e5870008 	str	r0, [r7, #8]	; fField8
        10e74c:	e1a02007 	mov	r2, r7
        10e750:	e1a00009 	mov	r0, r9
        10e754:	e3a01005 	mov	r1, #5	; 0x5
        10e758:	eb6918ae 	bl	1b54a18 <$SetTextObjField(long, TextObjectField, void *)>
        10e75c:	e28d2010 	add	r2, sp, #16	; 0x10
        10e760:	e1a00009 	mov	r0, r9
        10e764:	e3a01001 	mov	r1, #1	; 0x1
        10e768:	eb6918aa 	bl	1b54a18 <$SetTextObjField(long, TextObjectField, void *)>
        10e76c:	e1a0200d 	mov	r2, sp
        10e770:	e1a00009 	mov	r0, r9
        10e774:	e3a01001 	mov	r1, #1	; 0x1
        10e778:	eb69041a 	bl	1b4f7e8 <$GetTextObjField(long, TextObjectField, void *)>
        10e77c:	e59d0000 	ldr	r0, [sp]
        10e780:	e3300000 	teq	r0, #0	; 0x0
        10e784:	0affffea 	beq	10e734 <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0x3a0>
        10e788:	e59d0000 	ldr	r0, [sp]
        10e78c:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        10e790:	e1500001 	cmp	r0, r1
        10e794:	ba000005 	blt	10e7b0 <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0x41c>
        10e798:	e5dd100c 	ldrb	r1, [sp, #12]	; fField12
        10e79c:	e3310000 	teq	r1, #0	; 0x0
        10e7a0:	1a000002 	bne	10e7b0 <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0x41c>
        10e7a4:	e59d1014 	ldr	r1, [sp, #20]
        10e7a8:	e1300001 	teq	r0, r1
        10e7ac:	1a000001 	bne	10e7b8 <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0x424>
        10e7b0:	e3a00001 	mov	r0, #1	; 0x1
        10e7b4:	e5c60000 	strb	r0, [r6]
        10e7b8:	e24dd004 	sub	sp, sp, #4	; 0x4
        10e7bc:	e59d2004 	ldr	r2, [sp, #4]	; fField4
        10e7c0:	e58d2000 	str	r2, [sp]
        10e7c4:	e5940004 	ldr	r0, [r4, #4]	; fField4
        10e7c8:	e0801082 	add	r1, r0, r2, lsl #1
        10e7cc:	e2411002 	sub	r1, r1, #2	; 0x2
        10e7d0:	e59dc014 	ldr	ip, [sp, #20]
        10e7d4:	e152000c 	cmp	r2, ip
        10e7d8:	aa000024 	bge	10e870 <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0x4dc>
        10e7dc:	e5913000 	ldr	r3, [r1]
        10e7e0:	e1a03823 	mov	r3, r3, lsr #16
        10e7e4:	e3330020 	teq	r3, #32	; 0x20
        10e7e8:	15911002 	ldrne	r1, [r1, #2]	; fField2
        10e7ec:	11a01821 	movne	r1, r1, lsr #16
        10e7f0:	13310020 	teqne	r1, #32	; 0x20
        10e7f4:	0a00001d 	beq	10e870 <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0x4dc>
        10e7f8:	e59d101c 	ldr	r1, [sp, #28]
        10e7fc:	e3310001 	teq	r1, #1	; 0x1
        10e800:	1a000005 	bne	10e81c <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0x488>
        10e804:	e2420002 	sub	r0, r2, #2	; 0x2
        10e808:	e58d0000 	str	r0, [sp]
        10e80c:	e3500001 	cmp	r0, #1	; 0x1
        10e810:	b3a00001 	movlt	r0, #1	; 0x1
        10e814:	b58d0000 	strlt	r0, [sp]
        10e818:	ea000014 	b	10e870 <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0x4dc>
        10e81c:	e24dd004 	sub	sp, sp, #4	; 0x4
        10e820:	e1a0300d 	mov	r3, sp
        10e824:	e28d2004 	add	r2, sp, #4	; 0x4
        10e828:	e594100c 	ldr	r1, [r4, #12]	; fField12
        10e82c:	e2811068 	add	r1, r1, #104	; 0x68
        10e830:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        10e834:	eb6b7fc9 	bl	1bee760 <$Ustrlen>
        10e838:	e1a01000 	mov	r1, r0
        10e83c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        10e840:	e3a03001 	mov	r3, #1	; 0x1
        10e844:	e59d2014 	ldr	r2, [sp, #20]
        10e848:	eb661878 	bl	1a94a30 <$FindWordBreaks__FPUsUlT2Uc6RefVarPUlT6>
        10e84c:	e28dd00c 	add	sp, sp, #12	; 0xc
        10e850:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        10e854:	e3300000 	teq	r0, #0	; 0x0
        10e858:	1a000003 	bne	10e86c <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0x4d8>
        10e85c:	e33a0000 	teq	sl, #0	; 0x0
        10e860:	0a00008d 	beq	10ea9c <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0x708>
        10e864:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        10e868:	e58d0004 	str	r0, [sp, #4]	; fField4
        10e86c:	e28dd004 	add	sp, sp, #4	; 0x4
        10e870:	e5940020 	ldr	r0, [r4, #32]	; fField32
        10e874:	e5900004 	ldr	r0, [r0, #4]	; fField4
        10e878:	e3300000 	teq	r0, #0	; 0x0
        10e87c:	0a000009 	beq	10e8a8 <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0x514>
        10e880:	e5941004 	ldr	r1, [r4, #4]	; fField4
        10e884:	e59d0000 	ldr	r0, [sp]
        10e888:	e0811080 	add	r1, r1, r0, lsl #1
        10e88c:	e5111002 	ldr	r1, [r1, -#2]	; fField2
        10e890:	e1a01821 	mov	r1, r1, lsr #16
        10e894:	e3310020 	teq	r1, #32	; 0x20
        10e898:	1a000002 	bne	10e8a8 <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0x514>
        10e89c:	e3500001 	cmp	r0, #1	; 0x1
        10e8a0:	c3a00001 	movgt	r0, #1	; 0x1
        10e8a4:	ca000000 	bgt	10e8ac <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0x518>
        10e8a8:	e3a00000 	mov	r0, #0	; 0x0
        10e8ac:	e21060ff 	ands	r6, r0, #255	; 0xff
        10e8b0:	159d0000 	ldrne	r0, [sp]
        10e8b4:	12400001 	subne	r0, r0, #1	; 0x1
        10e8b8:	158d0000 	strne	r0, [sp]
        10e8bc:	e89d0003 	ldmia	sp, {r0, r1}
        10e8c0:	e1300001 	teq	r0, r1
        10e8c4:	0a000003 	beq	10e8d8 <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0x544>
        10e8c8:	e1a0200d 	mov	r2, sp
        10e8cc:	e1a00009 	mov	r0, r9
        10e8d0:	e3a01001 	mov	r1, #1	; 0x1
        10e8d4:	eb69184f 	bl	1b54a18 <$SetTextObjField(long, TextObjectField, void *)>
        10e8d8:	e3360000 	teq	r6, #0	; 0x0
        10e8dc:	159d0000 	ldrne	r0, [sp]
        10e8e0:	12800001 	addne	r0, r0, #1	; 0x1
        10e8e4:	158d0000 	strne	r0, [sp]
        10e8e8:	e5940004 	ldr	r0, [r4, #4]	; fField4
        10e8ec:	e59d1000 	ldr	r1, [sp]
        10e8f0:	e0800081 	add	r0, r0, r1, lsl #1
        10e8f4:	e5840004 	str	r0, [r4, #4]	; fField4
        10e8f8:	e5940018 	ldr	r0, [r4, #24]	; fField24
        10e8fc:	e3300000 	teq	r0, #0	; 0x0
        10e900:	05940028 	ldreq	r0, [r4, #40]	; fField40
        10e904:	05850000 	streq	r0, [r5]
        10e908:	0a000019 	beq	10e974 <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0x5e0>
        10e90c:	e3a03001 	mov	r3, #1	; 0x1
        10e910:	e594a028 	ldr	sl, [r4, #40]	; fField40
        10e914:	e92d0008 	stmdb	sp!, {r3}
        10e918:	e1a02005 	mov	r2, r5
        10e91c:	e28d1028 	add	r1, sp, #40	; 0x28
        10e920:	e8910003 	ldmia	r1, {r0, r1}
        10e924:	e59d3004 	ldr	r3, [sp, #4]	; fField4
        10e928:	eb665a69 	bl	1aa52d4 <$UpdateStyleRunLengths__FPPsPPP11StyleRecordT2UlUc>
        10e92c:	e28dd004 	add	sp, sp, #4	; 0x4
        10e930:	e3360000 	teq	r6, #0	; 0x0
        10e934:	0a00000a 	beq	10e964 <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0x5d0>
        10e938:	e5951000 	ldr	r1, [r5]
        10e93c:	e051100a 	subs	r1, r1, sl
        10e940:	42811003 	addmi	r1, r1, #3	; 0x3
        10e944:	e1a01141 	mov	r1, r1, asr #2
        10e948:	e7902081 	ldr	r2, [r0, r1, lsl #1]
        10e94c:	e1a02822 	mov	r2, r2, lsr #16
        10e950:	e2422001 	sub	r2, r2, #1	; 0x1
        10e954:	e0801081 	add	r1, r0, r1, lsl #1
        10e958:	e5c12001 	strb	r2, [r1, #1]
        10e95c:	e1a02442 	mov	r2, r2, asr #8
        10e960:	e5c12000 	strb	r2, [r1]
        10e964:	e1a02000 	mov	r2, r0
        10e968:	e1a00009 	mov	r0, r9
        10e96c:	e3a01003 	mov	r1, #3	; 0x3
        10e970:	eb691828 	bl	1b54a18 <$SetTextObjField(long, TextObjectField, void *)>
        10e974:	e5940004 	ldr	r0, [r4, #4]	; fField4
        10e978:	e5941024 	ldr	r1, [r4, #36]	; fField36
        10e97c:	eb66520a 	bl	1aa31ac <$SkipUpToTwoSpacesAndCR__FPUsT1>
        10e980:	e5941004 	ldr	r1, [r4, #4]	; fField4
        10e984:	e1510000 	cmp	r1, r0
        10e988:	2a000017 	bcs	10e9ec <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0x658>
        10e98c:	e0406001 	sub	r6, r0, r1
        10e990:	e0866fa6 	add	r6, r6, r6, lsr #31
        10e994:	e1a060c6 	mov	r6, r6, asr #1
        10e998:	e3a01000 	mov	r1, #0	; 0x0
        10e99c:	e5840004 	str	r0, [r4, #4]	; fField4
        10e9a0:	e52d106c 	str	r1, [sp, -#108]!
        10e9a4:	e28d0008 	add	r0, sp, #8	; 0x8
        10e9a8:	eb6a8ff1 	bl	1bb2974 <$setjmp>
        10e9ac:	e3300000 	teq	r0, #0	; 0x0
        10e9b0:	12885008 	addne	r5, r8, #8	; 0x8
        10e9b4:	1a000047 	bne	10ead8 <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0x744>
        10e9b8:	e1a0000d 	mov	r0, sp
        10e9bc:	eb6b45ae 	bl	1be007c <$AddExceptionHandler>
        10e9c0:	e3a03000 	mov	r3, #0	; 0x0
        10e9c4:	e92d0008 	stmdb	sp!, {r3}
        10e9c8:	e1a03006 	mov	r3, r6
        10e9cc:	e1a02005 	mov	r2, r5
        10e9d0:	e28d1094 	add	r1, sp, #148	; 0x94
        10e9d4:	e8910003 	ldmia	r1, {r0, r1}
        10e9d8:	eb665a3d 	bl	1aa52d4 <$UpdateStyleRunLengths__FPPsPPP11StyleRecordT2UlUc>
        10e9dc:	e28dd004 	add	sp, sp, #4	; 0x4
        10e9e0:	e1a0000d 	mov	r0, sp
        10e9e4:	eb6b49b3 	bl	1be10b8 <$ExitHandler>
        10e9e8:	e28dd06c 	add	sp, sp, #108	; 0x6c
        10e9ec:	e5940008 	ldr	r0, [r4, #8]	; fField8
        10e9f0:	e2800001 	add	r0, r0, #1	; 0x1
        10e9f4:	e5840008 	str	r0, [r4, #8]	; fField8
        10e9f8:	e5940010 	ldr	r0, [r4, #16]	; fField16
        10e9fc:	e5900000 	ldr	r0, [r0]
        10ea00:	eb65f2e5 	bl	1a8b59c <$CacheMaxLength(void *)>
        10ea04:	e5941008 	ldr	r1, [r4, #8]	; fField8
        10ea08:	e2811001 	add	r1, r1, #1	; 0x1
        10ea0c:	e1500001 	cmp	r0, r1
        10ea10:	aa00000e 	bge	10ea50 <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0x6bc>
        10ea14:	e3a01000 	mov	r1, #0	; 0x0
        10ea18:	e52d106c 	str	r1, [sp, -#108]!
        10ea1c:	e28d0008 	add	r0, sp, #8	; 0x8
        10ea20:	eb6a8fd3 	bl	1bb2974 <$setjmp>
        10ea24:	e3300000 	teq	r0, #0	; 0x0
        10ea28:	12886008 	addne	r6, r8, #8	; 0x8
        10ea2c:	1a000038 	bne	10eb14 <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0x780>
        10ea30:	e1a0000d 	mov	r0, sp
        10ea34:	eb6b4590 	bl	1be007c <$AddExceptionHandler>
        10ea38:	e3a01005 	mov	r1, #5	; 0x5
        10ea3c:	e5940010 	ldr	r0, [r4, #16]	; fField16
        10ea40:	eb66204d 	bl	1a96b7c <$GrowTextObjectCache(long **, long)>
        10ea44:	e1a0000d 	mov	r0, sp
        10ea48:	eb6b499a 	bl	1be10b8 <$ExitHandler>
        10ea4c:	e28dd06c 	add	sp, sp, #108	; 0x6c
        10ea50:	e5940010 	ldr	r0, [r4, #16]	; fField16
        10ea54:	e5901000 	ldr	r1, [r0]
        10ea58:	e5940008 	ldr	r0, [r4, #8]	; fField8
        10ea5c:	e7819100 	str	r9, [r1, r0, lsl #2]	; fField2
        10ea60:	e24dd008 	sub	sp, sp, #8	; 0x8
        10ea64:	e1a0100d 	mov	r1, sp
        10ea68:	e1a00009 	mov	r0, r9
        10ea6c:	eb662032 	bl	1a96b3c <$GetTextObjBounds(long, TRect *)>
        10ea70:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        10ea74:	e5c40033 	strb	r0, [r4, #51]	; fField51
        10ea78:	e1a00440 	mov	r0, r0, asr #8
        10ea7c:	e5c40032 	strb	r0, [r4, #50]	; fField50
        10ea80:	e5940032 	ldr	r0, [r4, #50]	; fField50
        10ea84:	e1a00820 	mov	r0, r0, lsr #16
        10ea88:	e5c40037 	strb	r0, [r4, #55]	; fField55
        10ea8c:	e1a00440 	mov	r0, r0, asr #8
        10ea90:	e5c40036 	strb	r0, [r4, #54]	; fField54
        10ea94:	e3a00001 	mov	r0, #1	; 0x1
        10ea98:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        10ea9c:	e3380000 	teq	r8, #0	; 0x0
        10eaa0:	0a000003 	beq	10eab4 <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0x720>
        10eaa4:	e5980008 	ldr	r0, [r8, #8]	; fField8
        10eaa8:	eb6ad1c3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10eaac:	e1a00008 	mov	r0, r8
        10eab0:	eb6afb0a 	bl	1bcd6e0 <$__dl(void *)>
        10eab4:	e5b40020 	ldr	r0, [r4, #32]!	; fField32
        10eab8:	e1300007 	teq	r0, r7
        10eabc:	11a00007 	movne	r0, r7
        10eac0:	1b6afb06 	blne	1bcd6e0 <$__dl(void *)>
        10eac4:	e1a00009 	mov	r0, r9
        10eac8:	eb68fb06 	bl	1b4d6e8 <$DisposeText(long)>
        10eacc:	e3a00001 	mov	r0, #1	; 0x1
        10ead0:	e5c60000 	strb	r0, [r6]
        10ead4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        10ead8:	e1b06008 	movs	r6, r8
        10eadc:	0a000003 	beq	10eaf0 <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0x75c>
        10eae0:	e5950000 	ldr	r0, [r5]
        10eae4:	eb6ad1b4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10eae8:	e1a00006 	mov	r0, r6
        10eaec:	eb6afafb 	bl	1bcd6e0 <$__dl(void *)>
        10eaf0:	e5940020 	ldr	r0, [r4, #32]	; fField32
        10eaf4:	e1300007 	teq	r0, r7
        10eaf8:	11a00007 	movne	r0, r7
        10eafc:	1b6afaf7 	blne	1bcd6e0 <$__dl(void *)>
        10eb00:	e1a00009 	mov	r0, r9
        10eb04:	eb68faf7 	bl	1b4d6e8 <$DisposeText(long)>
        10eb08:	e1a0000d 	mov	r0, sp
        10eb0c:	eb6b4d90 	bl	1be2154 <$NextHandler>
        10eb10:	eafffff0 	b	10ead8 <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0x744>
        10eb14:	e1b05008 	movs	r5, r8
        10eb18:	0a000003 	beq	10eb2c <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0x798>
        10eb1c:	e5960000 	ldr	r0, [r6]
        10eb20:	eb6ad1a5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10eb24:	e1a00005 	mov	r0, r5
        10eb28:	eb6afaec 	bl	1bcd6e0 <$__dl(void *)>
        10eb2c:	e5940020 	ldr	r0, [r4, #32]	; fField32
        10eb30:	e1300007 	teq	r0, r7
        10eb34:	11a00007 	movne	r0, r7
        10eb38:	1b6afae8 	blne	1bcd6e0 <$__dl(void *)>
        10eb3c:	e1a00009 	mov	r0, r9
        10eb40:	eb68fae8 	bl	1b4d6e8 <$DisposeText(long)>
        10eb44:	e1a0000d 	mov	r0, sp
        10eb48:	eb6b4d81 	bl	1be2154 <$NextHandler>
        10eb4c:	eafffff0 	b	10eb14 <LineLoop::AddNextTextRun(unsigned char *, StyleRecord ***)+0x780>
    */
}

/**
 * Symbol: LineLoop::SkipLeadingTabs(void)
 * Address: 0010eb50
 */
LineLoop::SkipLeadingTabs(void) {
    /*
        10eb50:	e1a0c00d 	mov	ip, sp
        10eb54:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        10eb58:	e24cb004 	sub	fp, ip, #4	; 0x4
        10eb5c:	e1a04000 	mov	r4, r0
        10eb60:	e24dd004 	sub	sp, sp, #4	; 0x4
        10eb64:	e5909004 	ldr	r9, [r0, #4]	; fField4
        10eb68:	e3a00000 	mov	r0, #0	; 0x0
        10eb6c:	e58d0000 	str	r0, [sp]
        10eb70:	e594702c 	ldr	r7, [r4, #44]	; fField44
        10eb74:	e1a07847 	mov	r7, r7, asr #16
        10eb78:	e3a08001 	mov	r8, #1	; 0x1
        10eb7c:	e5941050 	ldr	r1, [r4, #80]	; fField80
        10eb80:	e284604c 	add	r6, r4, #76	; 0x4c
        10eb84:	e3510000 	cmp	r1, #0	; 0x0
        10eb88:	da000008 	ble	10ebb0 <LineLoop::SkipLeadingTabs(void)+0x60>
        10eb8c:	e2411001 	sub	r1, r1, #1	; 0x1
        10eb90:	e5960000 	ldr	r0, [r6]
        10eb94:	e5900000 	ldr	r0, [r0]
        10eb98:	eb6ad5ad 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        10eb9c:	e3100003 	tst	r0, #3	; 0x3
        10eba0:	01a00140 	moveq	r0, r0, asr #2
        10eba4:	0a000000 	beq	10ebac <LineLoop::SkipLeadingTabs(void)+0x5c>
        10eba8:	eb6acd5b 	bl	1bc211c <$_RINTError(long)>
        10ebac:	e0807007 	add	r7, r0, r7
        10ebb0:	e5940004 	ldr	r0, [r4, #4]	; fField4
        10ebb4:	e5900000 	ldr	r0, [r0]
        10ebb8:	e1a00820 	mov	r0, r0, lsr #16
        10ebbc:	e3300009 	teq	r0, #9	; 0x9
        10ebc0:	1a00002c 	bne	10ec78 <LineLoop::SkipLeadingTabs(void)+0x128>
        10ebc4:	e5940004 	ldr	r0, [r4, #4]	; fField4
        10ebc8:	e2800002 	add	r0, r0, #2	; 0x2
        10ebcc:	e5840004 	str	r0, [r4, #4]	; fField4
        10ebd0:	e59d0000 	ldr	r0, [sp]
        10ebd4:	e2801001 	add	r1, r0, #1	; 0x1
        10ebd8:	e3380000 	teq	r8, #0	; 0x0
        10ebdc:	e58d1000 	str	r1, [sp]
        10ebe0:	0a00000b 	beq	10ec14 <LineLoop::SkipLeadingTabs(void)+0xc4>
        10ebe4:	e3a00000 	mov	r0, #0	; 0x0
        10ebe8:	e58d0000 	str	r0, [sp]
        10ebec:	e5942032 	ldr	r2, [r4, #50]	; fField50
        10ebf0:	e1a02842 	mov	r2, r2, asr #16
        10ebf4:	e594102c 	ldr	r1, [r4, #44]	; fField44
        10ebf8:	e1a01841 	mov	r1, r1, asr #16
        10ebfc:	e1a00006 	mov	r0, r6
        10ec00:	e1a0300d 	mov	r3, sp
        10ec04:	eb66177e 	bl	1a94a04 <$FindNextTabStop__FRC6RefVarlT2Pl>
        10ec08:	e1a05000 	mov	r5, r0
        10ec0c:	e3a08000 	mov	r8, #0	; 0x0
        10ec10:	ea000010 	b	10ec58 <LineLoop::SkipLeadingTabs(void)+0x108>
        10ec14:	e5940050 	ldr	r0, [r4, #80]	; fField80
        10ec18:	e1500001 	cmp	r0, r1
        10ec1c:	da000009 	ble	10ec48 <LineLoop::SkipLeadingTabs(void)+0xf8>
        10ec20:	e5960000 	ldr	r0, [r6]
        10ec24:	e5900000 	ldr	r0, [r0]
        10ec28:	eb6ad589 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        10ec2c:	e3100003 	tst	r0, #3	; 0x3
        10ec30:	01a00140 	moveq	r0, r0, asr #2
        10ec34:	0a000000 	beq	10ec3c <LineLoop::SkipLeadingTabs(void)+0xec>
        10ec38:	eb6acd37 	bl	1bc211c <$_RINTError(long)>
        10ec3c:	e594102c 	ldr	r1, [r4, #44]	; fField44
        10ec40:	e0805841 	add	r5, r0, r1, asr #16
        10ec44:	ea000003 	b	10ec58 <LineLoop::SkipLeadingTabs(void)+0x108>
        10ec48:	e0410000 	sub	r0, r1, r0
        10ec4c:	e0800080 	add	r0, r0, r0, lsl #1
        10ec50:	e0870200 	add	r0, r7, r0, lsl #4
        10ec54:	e2805030 	add	r5, r0, #48	; 0x30
        10ec58:	e594002e 	ldr	r0, [r4, #46]	; fField46
        10ec5c:	e1550840 	cmp	r5, r0, asr #16
        10ec60:	aa000004 	bge	10ec78 <LineLoop::SkipLeadingTabs(void)+0x128>
        10ec64:	e5940004 	ldr	r0, [r4, #4]	; fField4
        10ec68:	e5900000 	ldr	r0, [r0]
        10ec6c:	e1a00820 	mov	r0, r0, lsr #16
        10ec70:	e3300009 	teq	r0, #9	; 0x9
        10ec74:	0affffd2 	beq	10ebc4 <LineLoop::SkipLeadingTabs(void)+0x74>
        10ec78:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        10ec7c:	e1300009 	teq	r0, r9
        10ec80:	11a00805 	movne	r0, r5, lsl #16
        10ec84:	11a00840 	movne	r0, r0, asr #16
        10ec88:	03a00000 	moveq	r0, #0	; 0x0
        10ec8c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: LineLoop::CurrentLineFitsInBounds(void)
 * Address: 0010ec90
 */
LineLoop::CurrentLineFitsInBounds(void) {
    /*
        10ec90:	e1a0c00d 	mov	ip, sp
        10ec94:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        10ec98:	e24cb004 	sub	fp, ip, #4	; 0x4
        10ec9c:	e5901028 	ldr	r1, [r0, #40]	; fField40
        10eca0:	e5912000 	ldr	r2, [r1]
        10eca4:	e3320000 	teq	r2, #0	; 0x0
        10eca8:	02411004 	subeq	r1, r1, #4	; 0x4
        10ecac:	e5913000 	ldr	r3, [r1]
        10ecb0:	e92d0008 	stmdb	sp!, {r3}
        10ecb4:	e590303c 	ldr	r3, [r0, #60]	; fField60
        10ecb8:	e5902034 	ldr	r2, [r0, #52]	; fField52
        10ecbc:	e1a02842 	mov	r2, r2, asr #16
        10ecc0:	e5901030 	ldr	r1, [r0, #48]	; fField48
        10ecc4:	e1a01841 	mov	r1, r1, asr #16
        10ecc8:	e590000c 	ldr	r0, [r0, #12]	; fField12
        10eccc:	eb663026 	bl	1a9ad6c <TParagraphView::$LineFitsInBounds(long, long, long, StyleRecord *)>
        10ecd0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: LineLoop::GetPseudoSpacing(long, long)
 * Address: 0010ecd4
 */
LineLoop::GetPseudoSpacing(long, long) {
    /*
        10ecd4:	e1a0c00d 	mov	ip, sp
        10ecd8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        10ecdc:	e24cb004 	sub	fp, ip, #4	; 0x4
        10ece0:	e590300c 	ldr	r3, [r0, #12]	; fField12
        10ece4:	e5933038 	ldr	r3, [r3, #56]	; fField56
        10ece8:	e3330000 	teq	r3, #0	; 0x0
        10ecec:	11a00003 	movne	r0, r3
        10ecf0:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        10ecf4:	e0814002 	add	r4, r1, r2
        10ecf8:	e5b05040 	ldr	r5, [r0, #64]!	; fField64
        10ecfc:	e3350000 	teq	r5, #0	; 0x0
        10ed00:	0a000007 	beq	10ed24 <LineLoop::GetPseudoSpacing(long, long)+0x50>
        10ed04:	e2840003 	add	r0, r4, #3	; 0x3
        10ed08:	e1500005 	cmp	r0, r5
        10ed0c:	ca000004 	bgt	10ed24 <LineLoop::GetPseudoSpacing(long, long)+0x50>
        10ed10:	e1a00185 	mov	r0, r5, lsl #3
        10ed14:	eb6a8f0a 	bl	1bb2944 <$__rt_sdiv10>
        10ed18:	e1500004 	cmp	r0, r4
        10ed1c:	d1a00005 	movle	r0, r5
        10ed20:	d91ba830 	ldmledb	fp, {r4, r5, fp, sp, pc}
        10ed24:	e1a00004 	mov	r0, r4
        10ed28:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

