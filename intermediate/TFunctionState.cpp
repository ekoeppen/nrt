#include "include/TFunctionState.h"

/**
 * Symbol: TFunctionState::__ct(TCompiler *, RefVar const &, TFunctionState *, int *)
 * Address: 002bfd1c
 */
TFunctionState::TFunctionState(TCompiler *, RefVar const &, TFunctionState *, int *) {
    /*
        2bfd1c:	e1a0c00d 	mov	ip, sp
        2bfd20:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2bfd24:	e24cb004 	sub	fp, ip, #4	; 0x4
        2bfd28:	e1b04000 	movs	r4, r0
        2bfd2c:	e1a07001 	mov	r7, r1
        2bfd30:	e1a06002 	mov	r6, r2
        2bfd34:	e1a05003 	mov	r5, r3
        2bfd38:	e59b9004 	ldr	r9, [fp, #4]	; fField4
        2bfd3c:	1a000003 	bne	2bfd50 <TFunctionState::__ct(TCompiler *, RefVar const &, TFunctionState *, int *)+0x34>
        2bfd40:	e3a0005c 	mov	r0, #92	; 0x5c
        2bfd44:	eb643a7b 	bl	1bce738 <$__nw(unsigned int)>
        2bfd48:	e1b04000 	movs	r4, r0
        2bfd4c:	0a00008e 	beq	2bff8c <TFunctionState::__ct(TCompiler *, RefVar const &, TFunctionState *, int *)+0x270>
        2bfd50:	e3a00002 	mov	r0, #2	; 0x2
        2bfd54:	eb6408fc 	bl	1bc214c <$AllocateRefHandle(long)>
        2bfd58:	e3a08000 	mov	r8, #0	; 0x0
        2bfd5c:	e5840004 	str	r0, [r4, #4]	; fField4
        2bfd60:	e5a08004 	str	r8, [r0, #4]!	; fField4
        2bfd64:	e3a00002 	mov	r0, #2	; 0x2
        2bfd68:	eb6408f7 	bl	1bc214c <$AllocateRefHandle(long)>
        2bfd6c:	e5840008 	str	r0, [r4, #8]	; fField8
        2bfd70:	e5a08004 	str	r8, [r0, #4]!	; fField4
        2bfd74:	e3a00002 	mov	r0, #2	; 0x2
        2bfd78:	eb6408f3 	bl	1bc214c <$AllocateRefHandle(long)>
        2bfd7c:	e584000c 	str	r0, [r4, #12]	; fField12
        2bfd80:	e5a08004 	str	r8, [r0, #4]!	; fField4
        2bfd84:	e3a00002 	mov	r0, #2	; 0x2
        2bfd88:	eb6408ef 	bl	1bc214c <$AllocateRefHandle(long)>
        2bfd8c:	e5840010 	str	r0, [r4, #16]	; fField16
        2bfd90:	e5a08004 	str	r8, [r0, #4]!	; fField4
        2bfd94:	e3a00002 	mov	r0, #2	; 0x2
        2bfd98:	eb6408eb 	bl	1bc214c <$AllocateRefHandle(long)>
        2bfd9c:	e5840014 	str	r0, [r4, #20]	; fField20
        2bfda0:	e5a08004 	str	r8, [r0, #4]!	; fField4
        2bfda4:	e3a00002 	mov	r0, #2	; 0x2
        2bfda8:	eb6408e7 	bl	1bc214c <$AllocateRefHandle(long)>
        2bfdac:	e5840018 	str	r0, [r4, #24]	; fField24
        2bfdb0:	e5a08004 	str	r8, [r0, #4]!	; fField4
        2bfdb4:	e3a00002 	mov	r0, #2	; 0x2
        2bfdb8:	eb6408e3 	bl	1bc214c <$AllocateRefHandle(long)>
        2bfdbc:	e584001c 	str	r0, [r4, #28]	; fField28
        2bfdc0:	e5a08004 	str	r8, [r0, #4]!	; fField4
        2bfdc4:	e3a00002 	mov	r0, #2	; 0x2
        2bfdc8:	eb6408df 	bl	1bc214c <$AllocateRefHandle(long)>
        2bfdcc:	e5840020 	str	r0, [r4, #32]	; fField32
        2bfdd0:	e5a08004 	str	r8, [r0, #4]!	; fField4
        2bfdd4:	e5847000 	str	r7, [r4]
        2bfdd8:	e5961000 	ldr	r1, [r6]
        2bfddc:	e5911000 	ldr	r1, [r1]
        2bfde0:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2bfde4:	e5801000 	str	r1, [r0]
        2bfde8:	e3a01002 	mov	r1, #2	; 0x2
        2bfdec:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2bfdf0:	e2846010 	add	r6, r4, #16	; 0x10
        2bfdf4:	e5801000 	str	r1, [r0]
        2bfdf8:	e59f00a8 	ldr	r0, [pc, #a8]	; 2bfea8 <TFunctionState::__ct(TCompiler *, RefVar const &, TFunctionState *, int *)+0x18c>
        2bfdfc:	e3a01080 	mov	r1, #128	; 0x80
        2bfe00:	eb6408cd 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
        2bfe04:	e5961000 	ldr	r1, [r6]
        2bfe08:	e2846014 	add	r6, r4, #20	; 0x14
        2bfe0c:	e5810000 	str	r0, [r1]
        2bfe10:	e59f0094 	ldr	r0, [pc, #94]	; 2bfeac <TFunctionState::__ct(TCompiler *, RefVar const &, TFunctionState *, int *)+0x190>
        2bfe14:	e3a01010 	mov	r1, #16	; 0x10
        2bfe18:	eb6408c6 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        2bfe1c:	e5961000 	ldr	r1, [r6]
        2bfe20:	e284601c 	add	r6, r4, #28	; 0x1c
        2bfe24:	e5810000 	str	r0, [r1]
        2bfe28:	eb6408c4 	bl	1bc2140 <$AllocateFrame(void)>
        2bfe2c:	e5961000 	ldr	r1, [r6]
        2bfe30:	e5810000 	str	r0, [r1]
        2bfe34:	e5848028 	str	r8, [r4, #40]	; fField40
        2bfe38:	e5845054 	str	r5, [r4, #84]	; fField84
        2bfe3c:	e584802c 	str	r8, [r4, #44]	; fField44
        2bfe40:	e3390000 	teq	r9, #0	; 0x0
        2bfe44:	e5848038 	str	r8, [r4, #56]	; fField56
        2bfe48:	15990000 	ldrne	r0, [r9]
        2bfe4c:	12801001 	addne	r1, r0, #1	; 0x1
        2bfe50:	15891000 	strne	r1, [r9]
        2bfe54:	03e00000 	mvneq	r0, #0	; 0x0
        2bfe58:	e284403c 	add	r4, r4, #60	; 0x3c
        2bfe5c:	e8840101 	stmia	r4, {r0, r8}
        2bfe60:	e5848008 	str	r8, [r4, #8]	; fField8
        2bfe64:	e584800c 	str	r8, [r4, #12]	; fField12
        2bfe68:	e3a07001 	mov	r7, #1	; 0x1
        2bfe6c:	e3350000 	teq	r5, #0	; 0x0
        2bfe70:	e5848010 	str	r8, [r4, #16]	; fField16
        2bfe74:	e244403c 	sub	r4, r4, #60	; 0x3c
        2bfe78:	0a00000d 	beq	2bfeb4 <TFunctionState::__ct(TCompiler *, RefVar const &, TFunctionState *, int *)+0x198>
        2bfe7c:	e284600c 	add	r6, r4, #12	; 0xc
        2bfe80:	e1a08006 	mov	r8, r6
        2bfe84:	eb6408ad 	bl	1bc2140 <$AllocateFrame(void)>
        2bfe88:	e5981000 	ldr	r1, [r8]
        2bfe8c:	e285200c 	add	r2, r5, #12	; 0xc
        2bfe90:	e5810000 	str	r0, [r1]
        2bfe94:	e1a00006 	mov	r0, r6
        2bfe98:	e59f1010 	ldr	r1, [pc, #10]	; 2bfeb0 <TFunctionState::__ct(TCompiler *, RefVar const &, TFunctionState *, int *)+0x194>
        2bfe9c:	eb641931 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2bfea0:	e5a57040 	str	r7, [r5, #64]!
        2bfea4:	ea000006 	b	2bfec4 <TFunctionState::__ct(TCompiler *, RefVar const &, TFunctionState *, int *)+0x1a8>
        2bfea8:	006832b0 	streqh	r3, [r8], -#32	; fField32
        2bfeac:	006835d8 	ldreqd	r3, [r8], -#88
        2bfeb0:	00685390 	streqb	r5, [r8], -#48	; fField48
        2bfeb4:	e59f1054 	ldr	r1, [pc, #54]	; 2bff10 <TFunctionState::__ct(TCompiler *, RefVar const &, TFunctionState *, int *)+0x1f4>
        2bfeb8:	e5911000 	ldr	r1, [r1]
        2bfebc:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2bfec0:	e5801000 	str	r1, [r0]
        2bfec4:	e59f5048 	ldr	r5, [pc, #48]	; 2bff14 <TFunctionState::__ct(TCompiler *, RefVar const &, TFunctionState *, int *)+0x1f8>	; fField48
        2bfec8:	e5956000 	ldr	r6, [r5]
        2bfecc:	e28f0f11 	add	r0, pc, #68	; 0x44
        2bfed0:	eb6414ea 	bl	1bc5280 <$Intern(char *)>
        2bfed4:	e1a01000 	mov	r1, r0
        2bfed8:	e1a00006 	mov	r0, r6
        2bfedc:	eb6410d9 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        2bfee0:	e3300000 	teq	r0, #0	; 0x0
        2bfee4:	0a000012 	beq	2bff34 <TFunctionState::__ct(TCompiler *, RefVar const &, TFunctionState *, int *)+0x218>
        2bfee8:	e5955000 	ldr	r5, [r5]
        2bfeec:	e28f0f09 	add	r0, pc, #36	; 0x24
        2bfef0:	eb6414e2 	bl	1bc5280 <$Intern(char *)>
        2bfef4:	e1a01000 	mov	r1, r0
        2bfef8:	e1a00005 	mov	r0, r5
        2bfefc:	eb6410d7 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2bff00:	e3300002 	teq	r0, #2	; 0x2
        2bff04:	1a000007 	bne	2bff28 <TFunctionState::__ct(TCompiler *, RefVar const &, TFunctionState *, int *)+0x20c>
        2bff08:	e3a00001 	mov	r0, #1	; 0x1
        2bff0c:	ea000006 	b	2bff2c <TFunctionState::__ct(TCompiler *, RefVar const &, TFunctionState *, int *)+0x210>
        2bff10:	0c1052c0 	lfmeq	f5, 4, [r0], -#768
        2bff14:	0c10180c 	ldceq	8, cr1, [r0], -#48	; fField48
        2bff18:	6462676e 	strvsbt	r6, [r2], -#1902
        2bff1c:	6f766172 	swivs	0x00766172
        2bff20:	6e616d65 	cdpvs	13, 6, cr6, cr1, cr5, {3}
        2bff24:	73000000 	tstvc	r0, #0	; 0x0
        2bff28:	e3a00000 	mov	r0, #0	; 0x0
        2bff2c:	e5840050 	str	r0, [r4, #80]
        2bff30:	ea000015 	b	2bff8c <TFunctionState::__ct(TCompiler *, RefVar const &, TFunctionState *, int *)+0x270>
        2bff34:	e5956000 	ldr	r6, [r5]
        2bff38:	e28f0f0e 	add	r0, pc, #56	; 0x38
        2bff3c:	eb6414cf 	bl	1bc5280 <$Intern(char *)>
        2bff40:	e1a01000 	mov	r1, r0
        2bff44:	e1a00006 	mov	r0, r6
        2bff48:	eb6410be 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        2bff4c:	e3300000 	teq	r0, #0	; 0x0
        2bff50:	0a00000c 	beq	2bff88 <TFunctionState::__ct(TCompiler *, RefVar const &, TFunctionState *, int *)+0x26c>
        2bff54:	e5955000 	ldr	r5, [r5]
        2bff58:	e28f0f06 	add	r0, pc, #24	; 0x18
        2bff5c:	eb6414c7 	bl	1bc5280 <$Intern(char *)>
        2bff60:	e1a01000 	mov	r1, r0
        2bff64:	e1a00005 	mov	r0, r5
        2bff68:	eb6410bc 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2bff6c:	e3300002 	teq	r0, #2	; 0x2
        2bff70:	0affffec 	beq	2bff28 <TFunctionState::__ct(TCompiler *, RefVar const &, TFunctionState *, int *)+0x20c>
        2bff74:	eaffffe3 	b	2bff08 <TFunctionState::__ct(TCompiler *, RefVar const &, TFunctionState *, int *)+0x1ec>
        2bff78:	6462676b 	strvsbt	r6, [r2], -#1899
        2bff7c:	65657076 	strvsb	r7, [r5, -#118]!
        2bff80:	61726e61 	cmnvs	r2, r1, ror #28
        2bff84:	6d657300 	stcvsl	3, cr7, [r5]
        2bff88:	e5847050 	str	r7, [r4, #80]
        2bff8c:	e1a00004 	mov	r0, r4
        2bff90:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TFunctionState::__dt(void)
 * Address: 002bff94
 */
TFunctionState::~TFunctionState(void) {
    /*
        2bff94:	e1a0c00d 	mov	ip, sp
        2bff98:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2bff9c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2bffa0:	e1a04000 	mov	r4, r0
        2bffa4:	e1a05001 	mov	r5, r1
        2bffa8:	e5900058 	ldr	r0, [r0, #88]
        2bffac:	e3300000 	teq	r0, #0	; 0x0
        2bffb0:	13a01001 	movne	r1, #1	; 0x1
        2bffb4:	1b5e6743 	blne	1a59cc8 <TFunctionState::$__dt(void)>
        2bffb8:	e5940038 	ldr	r0, [r4, #56]	; fField56
        2bffbc:	e3300000 	teq	r0, #0	; 0x0
        2bffc0:	13a01001 	movne	r1, #1	; 0x1
        2bffc4:	1b5e673c 	blne	1a59cbc <TLoopState::$__dt(void)>
        2bffc8:	e5940020 	ldr	r0, [r4, #32]	; fField32
        2bffcc:	eb640c7a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2bffd0:	e594001c 	ldr	r0, [r4, #28]	; fField28
        2bffd4:	eb640c78 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2bffd8:	e5940018 	ldr	r0, [r4, #24]	; fField24
        2bffdc:	eb640c76 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2bffe0:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2bffe4:	eb640c74 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2bffe8:	e5940010 	ldr	r0, [r4, #16]	; fField16
        2bffec:	eb640c72 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2bfff0:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2bfff4:	eb640c70 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2bfff8:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2bfffc:	eb640c6e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c0000:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2c0004:	eb640c6c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c0008:	e3150001 	tst	r5, #1	; 0x1
        2c000c:	11a00004 	movne	r0, r4
        2c0010:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        2c0014:	1a6435b1 	bne	1bcd6e0 <$__dl(void *)>
        2c0018:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFunctionState::CurPC(void)
 * Address: 002c001c
 */
TFunctionState::CurPC(void) {
    /*
        2c001c:	e5900028 	ldr	r0, [r0, #40]	; fField40
        2c0020:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFunctionState::LitOffset(RefVar const &)
 * Address: 002c0024
 */
TFunctionState::LitOffset(RefVar const &) {
    /*
        2c0024:	e1a0c00d 	mov	ip, sp
        2c0028:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2c002c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2c0030:	e1a04000 	mov	r4, r0
        2c0034:	e1a05001 	mov	r5, r1
        2c0038:	e3a06000 	mov	r6, #0	; 0x0
        2c003c:	e590002c 	ldr	r0, [r0, #44]	; fField44
        2c0040:	e2847014 	add	r7, r4, #20	; 0x14
        2c0044:	e3500000 	cmp	r0, #0	; 0x0
        2c0048:	da000019 	ble	2c00b4 <TFunctionState::LitOffset(RefVar const &)+0x90>
        2c004c:	e5970000 	ldr	r0, [r7]
        2c0050:	e5900000 	ldr	r0, [r0]
        2c0054:	e1a01006 	mov	r1, r6
        2c0058:	eb64107d 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c005c:	e2001003 	and	r1, r0, #3	; 0x3
        2c0060:	e3310003 	teq	r1, #3	; 0x3
        2c0064:	0a000004 	beq	2c007c <TFunctionState::LitOffset(RefVar const &)+0x58>
        2c0068:	e5951000 	ldr	r1, [r5]
        2c006c:	e5911000 	ldr	r1, [r1]
        2c0070:	e2012003 	and	r2, r1, #3	; 0x3
        2c0074:	e3320003 	teq	r2, #3	; 0x3
        2c0078:	1a000004 	bne	2c0090 <TFunctionState::LitOffset(RefVar const &)+0x6c>
        2c007c:	e5951000 	ldr	r1, [r5]
        2c0080:	e5911000 	ldr	r1, [r1]
        2c0084:	e1310000 	teq	r1, r0
        2c0088:	1a000005 	bne	2c00a4 <TFunctionState::LitOffset(RefVar const &)+0x80>
        2c008c:	ea000002 	b	2c009c <TFunctionState::LitOffset(RefVar const &)+0x78>
        2c0090:	eb641066 	bl	1bc4230 <$EQRef__FlT1>
        2c0094:	e3300000 	teq	r0, #0	; 0x0
        2c0098:	0a000001 	beq	2c00a4 <TFunctionState::LitOffset(RefVar const &)+0x80>
        2c009c:	e1a00006 	mov	r0, r6
        2c00a0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2c00a4:	e2866001 	add	r6, r6, #1	; 0x1
        2c00a8:	e594002c 	ldr	r0, [r4, #44]	; fField44
        2c00ac:	e1500006 	cmp	r0, r6
        2c00b0:	caffffe5 	bgt	2c004c <TFunctionState::LitOffset(RefVar const &)+0x28>
        2c00b4:	e5970000 	ldr	r0, [r7]
        2c00b8:	e5900000 	ldr	r0, [r0]
        2c00bc:	eb64147a 	bl	1bc52ac <$Length(long)>
        2c00c0:	e594102c 	ldr	r1, [r4, #44]	; fField44
        2c00c4:	e1500001 	cmp	r0, r1
        2c00c8:	ca000005 	bgt	2c00e4 <TFunctionState::LitOffset(RefVar const &)+0xc0>
        2c00cc:	e5970000 	ldr	r0, [r7]
        2c00d0:	e5900000 	ldr	r0, [r0]
        2c00d4:	eb641474 	bl	1bc52ac <$Length(long)>
        2c00d8:	e2801010 	add	r1, r0, #16	; 0x10
        2c00dc:	e1a00007 	mov	r0, r7
        2c00e0:	eb6418a1 	bl	1bc636c <$SetLength(RefVar const &, long)>
        2c00e4:	e5970000 	ldr	r0, [r7]
        2c00e8:	e5900000 	ldr	r0, [r0]
        2c00ec:	e594102c 	ldr	r1, [r4, #44]	; fField44
        2c00f0:	e5952000 	ldr	r2, [r5]
        2c00f4:	e5922000 	ldr	r2, [r2]
        2c00f8:	eb641896 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c00fc:	e594002c 	ldr	r0, [r4, #44]	; fField44
        2c0100:	e2801001 	add	r1, r0, #1	; 0x1
        2c0104:	e5a4102c 	str	r1, [r4, #44]!	; fField44
        2c0108:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TFunctionState::EmitOne(unsigned char)
 * Address: 002c019c
 */
TFunctionState::EmitOne(unsigned char) {
    /*
        2c019c:	e1a0c00d 	mov	ip, sp
        2c01a0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2c01a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2c01a8:	e1a04000 	mov	r4, r0
        2c01ac:	e20160ff 	and	r6, r1, #255	; 0xff
        2c01b0:	e2800010 	add	r0, r0, #16	; 0x10
        2c01b4:	e1a05000 	mov	r5, r0
        2c01b8:	e5900000 	ldr	r0, [r0]
        2c01bc:	e5900000 	ldr	r0, [r0]
        2c01c0:	eb641439 	bl	1bc52ac <$Length(long)>
        2c01c4:	e5941028 	ldr	r1, [r4, #40]	; fField40
        2c01c8:	e2811001 	add	r1, r1, #1	; 0x1
        2c01cc:	e1500001 	cmp	r0, r1
        2c01d0:	aa000005 	bge	2c01ec <TFunctionState::EmitOne(unsigned char)+0x50>
        2c01d4:	e5950000 	ldr	r0, [r5]
        2c01d8:	e5900000 	ldr	r0, [r0]
        2c01dc:	eb641432 	bl	1bc52ac <$Length(long)>
        2c01e0:	e2801080 	add	r1, r0, #128	; 0x80
        2c01e4:	e1a00005 	mov	r0, r5
        2c01e8:	eb64185f 	bl	1bc636c <$SetLength(RefVar const &, long)>
        2c01ec:	e5950000 	ldr	r0, [r5]
        2c01f0:	e5900000 	ldr	r0, [r0]
        2c01f4:	eb6407d8 	bl	1bc215c <$BinaryData(long)>
        2c01f8:	e5941028 	ldr	r1, [r4, #40]	; fField40
        2c01fc:	e7e06001 	strb	r6, [r0, r1]!
        2c0200:	e5940028 	ldr	r0, [r4, #40]	; fField40
        2c0204:	e2800001 	add	r0, r0, #1	; 0x1
        2c0208:	e5a40028 	str	r0, [r4, #40]!	; fField40
        2c020c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TFunctionState::EmitThree(unsigned char, long)
 * Address: 002c0210
 */
TFunctionState::EmitThree(unsigned char, long) {
    /*
        2c0210:	e1a0c00d 	mov	ip, sp
        2c0214:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2c0218:	e24cb004 	sub	fp, ip, #4	; 0x4
        2c021c:	e1a04000 	mov	r4, r0
        2c0220:	e1a05002 	mov	r5, r2
        2c0224:	e20170ff 	and	r7, r1, #255	; 0xff
        2c0228:	e2800010 	add	r0, r0, #16	; 0x10
        2c022c:	e1a06000 	mov	r6, r0
        2c0230:	e5900000 	ldr	r0, [r0]
        2c0234:	e5900000 	ldr	r0, [r0]
        2c0238:	eb64141b 	bl	1bc52ac <$Length(long)>
        2c023c:	e5941028 	ldr	r1, [r4, #40]	; fField40
        2c0240:	e2811003 	add	r1, r1, #3	; 0x3
        2c0244:	e1500001 	cmp	r0, r1
        2c0248:	aa000005 	bge	2c0264 <TFunctionState::EmitThree(unsigned char, long)+0x54>
        2c024c:	e5960000 	ldr	r0, [r6]
        2c0250:	e5900000 	ldr	r0, [r0]
        2c0254:	eb641414 	bl	1bc52ac <$Length(long)>
        2c0258:	e2801080 	add	r1, r0, #128	; 0x80
        2c025c:	e1a00006 	mov	r0, r6
        2c0260:	eb641841 	bl	1bc636c <$SetLength(RefVar const &, long)>
        2c0264:	e5960000 	ldr	r0, [r6]
        2c0268:	e5900000 	ldr	r0, [r0]
        2c026c:	eb6407ba 	bl	1bc215c <$BinaryData(long)>
        2c0270:	e5941028 	ldr	r1, [r4, #40]	; fField40
        2c0274:	e7e07001 	strb	r7, [r0, r1]!
        2c0278:	e1a01445 	mov	r1, r5, asr #8
        2c027c:	e5e01001 	strb	r1, [r0, #1]!	; fField1
        2c0280:	e5e05001 	strb	r5, [r0, #1]!	; fField1
        2c0284:	e5940028 	ldr	r0, [r4, #40]	; fField40
        2c0288:	e2800003 	add	r0, r0, #3	; 0x3
        2c028c:	e5a40028 	str	r0, [r4, #40]!	; fField40
        2c0290:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TFunctionState::Emit(Opcode, long)
 * Address: 002c0294
 */
TFunctionState::Emit(Opcode, long) {
    /*
        2c0294:	e3520000 	cmp	r2, #0	; 0x0
        2c0298:	ba000003 	blt	2c02ac <TFunctionState::Emit(Opcode, long)+0x18>
        2c029c:	e3520007 	cmp	r2, #7	; 0x7
        2c02a0:	b1821181 	orrlt	r1, r2, r1, lsl #3
        2c02a4:	b20110ff 	andlt	r1, r1, #255	; 0xff
        2c02a8:	ba5e49ac 	blt	1a52960 <TFunctionState::$EmitOne(unsigned char)>
        2c02ac:	e3a03007 	mov	r3, #7	; 0x7
        2c02b0:	e1831181 	orr	r1, r3, r1, lsl #3
        2c02b4:	e20110ff 	and	r1, r1, #255	; 0xff
        2c02b8:	ea5e49ae 	b	1a52978 <TFunctionState::$EmitThree(unsigned char, long)>
    */
}

/**
 * Symbol: TFunctionState::EmitPlaceholder(void)
 * Address: 002c02bc
 */
TFunctionState::EmitPlaceholder(void) {
    /*
        2c02bc:	e1a0c00d 	mov	ip, sp
        2c02c0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2c02c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2c02c8:	e1a04000 	mov	r4, r0
        2c02cc:	eb5e4994 	bl	1a52924 <TFunctionState::$CurPC(void)>
        2c02d0:	e1a05000 	mov	r5, r0
        2c02d4:	e1a00004 	mov	r0, r4
        2c02d8:	e3a02000 	mov	r2, #0	; 0x0
        2c02dc:	e3a0100b 	mov	r1, #11	; 0xb
        2c02e0:	eb5e49a4 	bl	1a52978 <TFunctionState::$EmitThree(unsigned char, long)>
        2c02e4:	e1a00005 	mov	r0, r5
        2c02e8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFunctionState::Backpatch(long, Opcode, long)
 * Address: 002c02ec
 */
TFunctionState::Backpatch(long, Opcode, long) {
    /*
        2c02ec:	e1a0c00d 	mov	ip, sp
        2c02f0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2c02f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2c02f8:	e1a06001 	mov	r6, r1
        2c02fc:	e1a05002 	mov	r5, r2
        2c0300:	e1a04003 	mov	r4, r3
        2c0304:	e5900010 	ldr	r0, [r0, #16]	; fField16
        2c0308:	e5900000 	ldr	r0, [r0]
        2c030c:	eb640792 	bl	1bc215c <$BinaryData(long)>
        2c0310:	e3a01007 	mov	r1, #7	; 0x7
        2c0314:	e1811185 	orr	r1, r1, r5, lsl #3
        2c0318:	e7e01006 	strb	r1, [r0, r6]!
        2c031c:	e1a01444 	mov	r1, r4, asr #8
        2c0320:	e5e01001 	strb	r1, [r0, #1]!	; fField1
        2c0324:	e5e04001 	strb	r4, [r0, #1]!	; fField1
        2c0328:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TFunctionState::AddLocals(RefVar const &)
 * Address: 002c032c
 */
TFunctionState::AddLocals(RefVar const &) {
    /*
        2c032c:	e1a0c00d 	mov	ip, sp
        2c0330:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2c0334:	e24cb004 	sub	fp, ip, #4	; 0x4
        2c0338:	e1a05000 	mov	r5, r0
        2c033c:	e1a04001 	mov	r4, r1
        2c0340:	e2800008 	add	r0, r0, #8	; 0x8
        2c0344:	e1a08000 	mov	r8, r0
        2c0348:	e5900000 	ldr	r0, [r0]
        2c034c:	e5901000 	ldr	r1, [r0]
        2c0350:	e3310002 	teq	r1, #2	; 0x2
        2c0354:	05941000 	ldreq	r1, [r4]
        2c0358:	05911000 	ldreq	r1, [r1]
        2c035c:	05801000 	streq	r1, [r0]
        2c0360:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2c0364:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c0368:	e3a00002 	mov	r0, #2	; 0x2
        2c036c:	eb640776 	bl	1bc214c <$AllocateRefHandle(long)>
        2c0370:	e58d0000 	str	r0, [sp]
        2c0374:	e5940000 	ldr	r0, [r4]
        2c0378:	e5900000 	ldr	r0, [r0]
        2c037c:	eb6413ca 	bl	1bc52ac <$Length(long)>
        2c0380:	e1a09000 	mov	r9, r0
        2c0384:	e3a07000 	mov	r7, #0	; 0x0
        2c0388:	e3500000 	cmp	r0, #0	; 0x0
        2c038c:	da000026 	ble	2c042c <TFunctionState::AddLocals(RefVar const &)+0x100>
        2c0390:	e3a06e22 	mov	r6, #544	; 0x220
        2c0394:	e2466903 	sub	r6, r6, #49152	; 0xc000
        2c0398:	e5940000 	ldr	r0, [r4]
        2c039c:	e5900000 	ldr	r0, [r0]
        2c03a0:	e1a01007 	mov	r1, r7
        2c03a4:	eb640faa 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c03a8:	e59d1000 	ldr	r1, [sp]
        2c03ac:	e5810000 	str	r0, [r1]
        2c03b0:	e1a0100d 	mov	r1, sp
        2c03b4:	e1a00005 	mov	r0, r5
        2c03b8:	eb5e55c1 	bl	1a55ac4 <TFunctionState::$IsConstant(RefVar const &)>
        2c03bc:	e3300000 	teq	r0, #0	; 0x0
        2c03c0:	0a000003 	beq	2c03d4 <TFunctionState::AddLocals(RefVar const &)+0xa8>
        2c03c4:	e1a0200d 	mov	r2, sp
        2c03c8:	e1a01006 	mov	r1, r6
        2c03cc:	e5950000 	ldr	r0, [r5]
        2c03d0:	eb5e4d72 	bl	1a539a0 <TCompiler::$Error(long, RefVar const &)>
        2c03d4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c03d8:	e3a00002 	mov	r0, #2	; 0x2
        2c03dc:	eb64075a 	bl	1bc214c <$AllocateRefHandle(long)>
        2c03e0:	e58d0000 	str	r0, [sp]
        2c03e4:	e1a0300d 	mov	r3, sp
        2c03e8:	e1a00008 	mov	r0, r8
        2c03ec:	e28d1004 	add	r1, sp, #4	; 0x4
        2c03f0:	e3a02000 	mov	r2, #0	; 0x0
        2c03f4:	eb640756 	bl	1bc2154 <$ArrayPosition__FRC6RefVarT1lT1>
        2c03f8:	e3700001 	cmn	r0, #1	; 0x1
        2c03fc:	13a0a000 	movne	sl, #0	; 0x0
        2c0400:	03a0a001 	moveq	sl, #1	; 0x1
        2c0404:	e59d0000 	ldr	r0, [sp]
        2c0408:	eb640b6b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c040c:	e33a0000 	teq	sl, #0	; 0x0
        2c0410:	11a00008 	movne	r0, r8
        2c0414:	128d1004 	addne	r1, sp, #4	; 0x4
        2c0418:	1b640742 	blne	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        2c041c:	e28dd004 	add	sp, sp, #4	; 0x4
        2c0420:	e2877001 	add	r7, r7, #1	; 0x1
        2c0424:	e1570009 	cmp	r7, r9
        2c0428:	baffffda 	blt	2c0398 <TFunctionState::AddLocals(RefVar const &)+0x6c>
        2c042c:	e59d0000 	ldr	r0, [sp]
        2c0430:	eb640b61 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c0434:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TFunctionState::DeclarationsFinished(void)
 * Address: 002c0438
 */
TFunctionState::DeclarationsFinished(void) {
    /*
        2c0438:	e1a0c00d 	mov	ip, sp
        2c043c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2c0440:	e24cb004 	sub	fp, ip, #4	; 0x4
        2c0444:	e1a04000 	mov	r4, r0
        2c0448:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2c044c:	e5900000 	ldr	r0, [r0]
        2c0450:	e3a05000 	mov	r5, #0	; 0x0
        2c0454:	e3300002 	teq	r0, #2	; 0x2
        2c0458:	05845030 	streq	r5, [r4, #48]	; fField48
        2c045c:	0a000001 	beq	2c0468 <TFunctionState::DeclarationsFinished(void)+0x30>
        2c0460:	eb641391 	bl	1bc52ac <$Length(long)>
        2c0464:	e5840030 	str	r0, [r4, #48]	; fField48
        2c0468:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2c046c:	e5900000 	ldr	r0, [r0]
        2c0470:	e3300002 	teq	r0, #2	; 0x2
        2c0474:	05a45034 	streq	r5, [r4, #52]!	; fField52
        2c0478:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        2c047c:	eb64138a 	bl	1bc52ac <$Length(long)>
        2c0480:	e5a40034 	str	r0, [r4, #52]!	; fField52
        2c0484:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFunctionState::ComputeInitialVarLocs(void)
 * Address: 002c0488
 */
TFunctionState::ComputeInitialVarLocs(void) {
    /*
        2c0488:	e1a0c00d 	mov	ip, sp
        2c048c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2c0490:	e24cb004 	sub	fp, ip, #4	; 0x4
        2c0494:	e1a04000 	mov	r4, r0
        2c0498:	e2805020 	add	r5, r0, #32	; 0x20
        2c049c:	e1a07005 	mov	r7, r5
        2c04a0:	eb640726 	bl	1bc2140 <$AllocateFrame(void)>
        2c04a4:	e5951000 	ldr	r1, [r5]
        2c04a8:	e5810000 	str	r0, [r1]
        2c04ac:	e24dd008 	sub	sp, sp, #8	; 0x8
        2c04b0:	e3a06000 	mov	r6, #0	; 0x0
        2c04b4:	e3a09000 	mov	r9, #0	; 0x0
        2c04b8:	e5940030 	ldr	r0, [r4, #48]	; fField48
        2c04bc:	e3500000 	cmp	r0, #0	; 0x0
        2c04c0:	da000016 	ble	2c0520 <TFunctionState::ComputeInitialVarLocs(void)+0x98>
        2c04c4:	e2848004 	add	r8, r4, #4	; 0x4
        2c04c8:	e1a00009 	mov	r0, r9
        2c04cc:	eb64071e 	bl	1bc214c <$AllocateRefHandle(long)>
        2c04d0:	e58d0000 	str	r0, [sp]
        2c04d4:	e1a0500d 	mov	r5, sp
        2c04d8:	e5980000 	ldr	r0, [r8]
        2c04dc:	e5900000 	ldr	r0, [r0]
        2c04e0:	e1a01006 	mov	r1, r6
        2c04e4:	eb640f5a 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c04e8:	eb640717 	bl	1bc214c <$AllocateRefHandle(long)>
        2c04ec:	e58d0004 	str	r0, [sp, #4]	; fField4
        2c04f0:	e28d1004 	add	r1, sp, #4	; 0x4
        2c04f4:	e1a00007 	mov	r0, r7
        2c04f8:	e1a02005 	mov	r2, r5
        2c04fc:	eb641799 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2c0500:	e59d0000 	ldr	r0, [sp]
        2c0504:	eb640b2c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c0508:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c050c:	eb640b2a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c0510:	e2866001 	add	r6, r6, #1	; 0x1
        2c0514:	e5940030 	ldr	r0, [r4, #48]	; fField48
        2c0518:	e1500006 	cmp	r0, r6
        2c051c:	caffffe9 	bgt	2c04c8 <TFunctionState::ComputeInitialVarLocs(void)+0x40>
        2c0520:	e24dd008 	sub	sp, sp, #8	; 0x8
        2c0524:	e3a05000 	mov	r5, #0	; 0x0
        2c0528:	e5940034 	ldr	r0, [r4, #52]	; fField52
        2c052c:	e3500000 	cmp	r0, #0	; 0x0
        2c0530:	da000016 	ble	2c0590 <TFunctionState::ComputeInitialVarLocs(void)+0x108>
        2c0534:	e2846008 	add	r6, r4, #8	; 0x8
        2c0538:	e1a00009 	mov	r0, r9
        2c053c:	eb640702 	bl	1bc214c <$AllocateRefHandle(long)>
        2c0540:	e58d0000 	str	r0, [sp]
        2c0544:	e1a0800d 	mov	r8, sp
        2c0548:	e5960000 	ldr	r0, [r6]
        2c054c:	e5900000 	ldr	r0, [r0]
        2c0550:	e1a01005 	mov	r1, r5
        2c0554:	eb640f3e 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c0558:	eb6406fb 	bl	1bc214c <$AllocateRefHandle(long)>
        2c055c:	e58d0004 	str	r0, [sp, #4]	; fField4
        2c0560:	e28d1004 	add	r1, sp, #4	; 0x4
        2c0564:	e1a00007 	mov	r0, r7
        2c0568:	e1a02008 	mov	r2, r8
        2c056c:	eb64177d 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2c0570:	e59d0000 	ldr	r0, [sp]
        2c0574:	eb640b10 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c0578:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c057c:	eb640b0e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c0580:	e2855001 	add	r5, r5, #1	; 0x1
        2c0584:	e5940034 	ldr	r0, [r4, #52]	; fField52
        2c0588:	e1500005 	cmp	r0, r5
        2c058c:	caffffe9 	bgt	2c0538 <TFunctionState::ComputeInitialVarLocs(void)+0xb0>
        2c0590:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TFunctionState::ComputeArgFrame(void)
 * Address: 002c0594
 */
TFunctionState::ComputeArgFrame(void) {
    /*
        2c0594:	e1a0c00d 	mov	ip, sp
        2c0598:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2c059c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2c05a0:	e1a04000 	mov	r4, r0
        2c05a4:	e59f013c 	ldr	r0, [pc, #13c]	; 2c06e8 <TFunctionState::ComputeArgFrame(void)+0x154>
        2c05a8:	e5901000 	ldr	r1, [r0]
        2c05ac:	e59f0138 	ldr	r0, [pc, #138]	; 2c06ec <TFunctionState::ComputeArgFrame(void)+0x158>
        2c05b0:	e284a004 	add	sl, r4, #4	; 0x4
        2c05b4:	e2848018 	add	r8, r4, #24	; 0x18
        2c05b8:	e3310000 	teq	r1, #0	; 0x0
        2c05bc:	1a00004e 	bne	2c06fc <TFunctionState::ComputeArgFrame(void)+0x168>
        2c05c0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c05c4:	e2842030 	add	r2, r4, #48	; 0x30
        2c05c8:	e8920006 	ldmia	r2, {r1, r2}
        2c05cc:	e0811002 	add	r1, r1, r2
        2c05d0:	e2811003 	add	r1, r1, #3	; 0x3
        2c05d4:	eb6406d7 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        2c05d8:	eb6406db 	bl	1bc214c <$AllocateRefHandle(long)>
        2c05dc:	e58d0000 	str	r0, [sp]
        2c05e0:	e5900000 	ldr	r0, [r0]
        2c05e4:	e59f1104 	ldr	r1, [pc, #104]	; 2c06f0 <TFunctionState::ComputeArgFrame(void)+0x15c>
        2c05e8:	e5911000 	ldr	r1, [r1]
        2c05ec:	e5912000 	ldr	r2, [r1]
        2c05f0:	e3a01000 	mov	r1, #0	; 0x0
        2c05f4:	eb641757 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c05f8:	e59d0000 	ldr	r0, [sp]
        2c05fc:	e5900000 	ldr	r0, [r0]
        2c0600:	e59f10ec 	ldr	r1, [pc, #ec]	; 2c06f4 <TFunctionState::ComputeArgFrame(void)+0x160>
        2c0604:	e5911000 	ldr	r1, [r1]
        2c0608:	e5912000 	ldr	r2, [r1]
        2c060c:	e3a01001 	mov	r1, #1	; 0x1
        2c0610:	eb641750 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c0614:	e59d0000 	ldr	r0, [sp]
        2c0618:	e5900000 	ldr	r0, [r0]
        2c061c:	e59f10d4 	ldr	r1, [pc, #d4]	; 2c06f8 <TFunctionState::ComputeArgFrame(void)+0x164>
        2c0620:	e5911000 	ldr	r1, [r1]
        2c0624:	e3a09002 	mov	r9, #2	; 0x2
        2c0628:	e5912000 	ldr	r2, [r1]
        2c062c:	e1a01009 	mov	r1, r9
        2c0630:	eb641748 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c0634:	e5940030 	ldr	r0, [r4, #48]	; fField48
        2c0638:	e3300000 	teq	r0, #0	; 0x0
        2c063c:	0a000008 	beq	2c0664 <TFunctionState::ComputeArgFrame(void)+0xd0>
        2c0640:	e1a03000 	mov	r3, r0
        2c0644:	e3a02000 	mov	r2, #0	; 0x0
        2c0648:	e92d000c 	stmdb	sp!, {r2, r3}
        2c064c:	e1a0300a 	mov	r3, sl
        2c0650:	e1a02000 	mov	r2, r0
        2c0654:	e28d0008 	add	r0, sp, #8	; 0x8
        2c0658:	e3a01003 	mov	r1, #3	; 0x3
        2c065c:	eb6406bb 	bl	1bc2150 <$ArrayMunger__FRC6RefVarlT2T1N22>
        2c0660:	e28dd008 	add	sp, sp, #8	; 0x8
        2c0664:	e24dd008 	sub	sp, sp, #8	; 0x8
        2c0668:	e5940034 	ldr	r0, [r4, #52]	; fField52
        2c066c:	e3300000 	teq	r0, #0	; 0x0
        2c0670:	0a000009 	beq	2c069c <TFunctionState::ComputeArgFrame(void)+0x108>
        2c0674:	e1a03000 	mov	r3, r0
        2c0678:	e3a02000 	mov	r2, #0	; 0x0
        2c067c:	e92d000c 	stmdb	sp!, {r2, r3}
        2c0680:	e2843008 	add	r3, r4, #8	; 0x8
        2c0684:	e1a02000 	mov	r2, r0
        2c0688:	e5b40030 	ldr	r0, [r4, #48]!	; fField48
        2c068c:	e2801003 	add	r1, r0, #3	; 0x3
        2c0690:	e28d0010 	add	r0, sp, #16	; 0x10
        2c0694:	eb6406ad 	bl	1bc2150 <$ArrayMunger__FRC6RefVarlT2T1N22>
        2c0698:	e28dd008 	add	sp, sp, #8	; 0x8
        2c069c:	e1a00009 	mov	r0, r9
        2c06a0:	eb6406a9 	bl	1bc214c <$AllocateRefHandle(long)>
        2c06a4:	e58d0004 	str	r0, [sp, #4]	; fField4
        2c06a8:	e28d0004 	add	r0, sp, #4	; 0x4
        2c06ac:	e28d1008 	add	r1, sp, #8	; 0x8
        2c06b0:	eb6406a4 	bl	1bc2148 <$AllocateMapWithTags__FRC6RefVarT1>
        2c06b4:	eb6406a4 	bl	1bc214c <$AllocateRefHandle(long)>
        2c06b8:	e58d0000 	str	r0, [sp]
        2c06bc:	e1a0000d 	mov	r0, sp
        2c06c0:	eb64069f 	bl	1bc2144 <$AllocateFrameWithMap(RefVar const &)>
        2c06c4:	e5981000 	ldr	r1, [r8]
        2c06c8:	e5810000 	str	r0, [r1]
        2c06cc:	e59d0000 	ldr	r0, [sp]
        2c06d0:	eb640ab9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c06d4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c06d8:	eb640ab7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c06dc:	e5bd0008 	ldr	r0, [sp, #8]!	; fField8
        2c06e0:	eb640ab5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c06e4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2c06e8:	0c1051ec 	ldfeqs	f5, [r0], -#944
        2c06ec:	00681f10 	rsbeq	r1, r8, r0, lsl pc
        2c06f0:	00685368 	rsbeq	r5, r8, r8, ror #6
        2c06f4:	00685388 	rsbeq	r5, r8, r8, lsl #7
        2c06f8:	00685328 	rsbeq	r5, r8, r8, lsr #6
        2c06fc:	e24dd008 	sub	sp, sp, #8	; 0x8
        2c0700:	e3a07003 	mov	r7, #3	; 0x3
        2c0704:	e2842030 	add	r2, r4, #48	; 0x30
        2c0708:	e8920006 	ldmia	r2, {r1, r2}
        2c070c:	e0811002 	add	r1, r1, r2
        2c0710:	e0811007 	add	r1, r1, r7
        2c0714:	eb640687 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        2c0718:	eb64068b 	bl	1bc214c <$AllocateRefHandle(long)>
        2c071c:	e3a09003 	mov	r9, #3	; 0x3
        2c0720:	e58d0004 	str	r0, [sp, #4]	; fField4
        2c0724:	e3a00002 	mov	r0, #2	; 0x2
        2c0728:	eb640687 	bl	1bc214c <$AllocateRefHandle(long)>
        2c072c:	e3a06000 	mov	r6, #0	; 0x0
        2c0730:	e58d0000 	str	r0, [sp]
        2c0734:	e5940030 	ldr	r0, [r4, #48]	; fField48
        2c0738:	e2845020 	add	r5, r4, #32	; 0x20
        2c073c:	e3500000 	cmp	r0, #0	; 0x0
        2c0740:	da00001a 	ble	2c07b0 <TFunctionState::ComputeArgFrame(void)+0x21c>
        2c0744:	e59a0000 	ldr	r0, [sl]
        2c0748:	e5900000 	ldr	r0, [r0]
        2c074c:	e1a01006 	mov	r1, r6
        2c0750:	eb640ebf 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c0754:	e1a01000 	mov	r1, r0
        2c0758:	e41d0004 	ldr	r0, [sp], -#4	; fField4
        2c075c:	e5801000 	str	r1, [r0]
        2c0760:	e5950000 	ldr	r0, [r5]
        2c0764:	e5900000 	ldr	r0, [r0]
        2c0768:	eb640ebc 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2c076c:	e3100003 	tst	r0, #3	; 0x3
        2c0770:	1a000008 	bne	2c0798 <TFunctionState::ComputeArgFrame(void)+0x204>
        2c0774:	e3a00002 	mov	r0, #2	; 0x2
        2c0778:	eb640673 	bl	1bc214c <$AllocateRefHandle(long)>
        2c077c:	e58d0000 	str	r0, [sp]
        2c0780:	e1a0200d 	mov	r2, sp
        2c0784:	e1a00005 	mov	r0, r5
        2c0788:	e28d1004 	add	r1, sp, #4	; 0x4
        2c078c:	eb6416f5 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2c0790:	e59d0000 	ldr	r0, [sp]
        2c0794:	eb640a88 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c0798:	e2877001 	add	r7, r7, #1	; 0x1
        2c079c:	e28dd004 	add	sp, sp, #4	; 0x4
        2c07a0:	e2866001 	add	r6, r6, #1	; 0x1
        2c07a4:	e5940030 	ldr	r0, [r4, #48]	; fField48
        2c07a8:	e1500006 	cmp	r0, r6
        2c07ac:	caffffe4 	bgt	2c0744 <TFunctionState::ComputeArgFrame(void)+0x1b0>
        2c07b0:	e24dd030 	sub	sp, sp, #48	; 0x30
        2c07b4:	e1a01005 	mov	r1, r5
        2c07b8:	e1a0000d 	mov	r0, sp
        2c07bc:	e3a02000 	mov	r2, #0	; 0x0
        2c07c0:	eb64024a 	bl	1bc10f0 <TObjectIterator::$__ct(RefVar const &, int)>
        2c07c4:	e1a0000d 	mov	r0, sp
        2c07c8:	eb640a83 	bl	1bc31dc <TObjectIterator::$Done(void)>
        2c07cc:	e3300000 	teq	r0, #0	; 0x0
        2c07d0:	1a000021 	bne	2c085c <TFunctionState::ComputeArgFrame(void)+0x2c8>
        2c07d4:	e28d6004 	add	r6, sp, #4	; 0x4
        2c07d8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c07dc:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        2c07e0:	e5900000 	ldr	r0, [r0]
        2c07e4:	e3100003 	tst	r0, #3	; 0x3
        2c07e8:	1a00000b 	bne	2c081c <TFunctionState::ComputeArgFrame(void)+0x288>
        2c07ec:	e1a00007 	mov	r0, r7
        2c07f0:	e2877001 	add	r7, r7, #1	; 0x1
        2c07f4:	e1a00100 	mov	r0, r0, lsl #2
        2c07f8:	eb640653 	bl	1bc214c <$AllocateRefHandle(long)>
        2c07fc:	e58d0000 	str	r0, [sp]
        2c0800:	e1a0200d 	mov	r2, sp
        2c0804:	e1a01006 	mov	r1, r6
        2c0808:	e1a00005 	mov	r0, r5
        2c080c:	eb6416d5 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2c0810:	e59d0000 	ldr	r0, [sp]
        2c0814:	eb640a68 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c0818:	ea000008 	b	2c0840 <TFunctionState::ComputeArgFrame(void)+0x2ac>
        2c081c:	e3300002 	teq	r0, #2	; 0x2
        2c0820:	0a000006 	beq	2c0840 <TFunctionState::ComputeArgFrame(void)+0x2ac>
        2c0824:	e59d0038 	ldr	r0, [sp, #56]	; fField56
        2c0828:	e5900000 	ldr	r0, [r0]
        2c082c:	e1a01009 	mov	r1, r9
        2c0830:	e2899001 	add	r9, r9, #1	; 0x1
        2c0834:	e59d2008 	ldr	r2, [sp, #8]	; fField8
        2c0838:	e5922000 	ldr	r2, [r2]
        2c083c:	eb6416c5 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c0840:	e28dd004 	add	sp, sp, #4	; 0x4
        2c0844:	e1a0000d 	mov	r0, sp
        2c0848:	eb6412a6 	bl	1bc52e8 <TObjectIterator::$Next(void)>
        2c084c:	e1a0000d 	mov	r0, sp
        2c0850:	eb640a61 	bl	1bc31dc <TObjectIterator::$Done(void)>
        2c0854:	e3300000 	teq	r0, #0	; 0x0
        2c0858:	0affffde 	beq	2c07d8 <TFunctionState::ComputeArgFrame(void)+0x244>
        2c085c:	e3a06000 	mov	r6, #0	; 0x0
        2c0860:	e5940030 	ldr	r0, [r4, #48]	; fField48
        2c0864:	e3500000 	cmp	r0, #0	; 0x0
        2c0868:	da00001b 	ble	2c08dc <TFunctionState::ComputeArgFrame(void)+0x348>
        2c086c:	e59a0000 	ldr	r0, [sl]
        2c0870:	e5900000 	ldr	r0, [r0]
        2c0874:	e1a01006 	mov	r1, r6
        2c0878:	eb640e75 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c087c:	e1a01000 	mov	r1, r0
        2c0880:	e59d0030 	ldr	r0, [sp, #48]	; fField48
        2c0884:	e5801000 	str	r1, [r0]
        2c0888:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c088c:	e5950000 	ldr	r0, [r5]
        2c0890:	e5900000 	ldr	r0, [r0]
        2c0894:	eb640e71 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2c0898:	e3300002 	teq	r0, #2	; 0x2
        2c089c:	1a000009 	bne	2c08c8 <TFunctionState::ComputeArgFrame(void)+0x334>
        2c08a0:	e2860003 	add	r0, r6, #3	; 0x3
        2c08a4:	e1a00100 	mov	r0, r0, lsl #2
        2c08a8:	eb640627 	bl	1bc214c <$AllocateRefHandle(long)>
        2c08ac:	e58d0000 	str	r0, [sp]
        2c08b0:	e1a0200d 	mov	r2, sp
        2c08b4:	e1a00005 	mov	r0, r5
        2c08b8:	e28d1034 	add	r1, sp, #52	; 0x34
        2c08bc:	eb6416a9 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2c08c0:	e59d0000 	ldr	r0, [sp]
        2c08c4:	eb640a3c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c08c8:	e28dd004 	add	sp, sp, #4	; 0x4
        2c08cc:	e2866001 	add	r6, r6, #1	; 0x1
        2c08d0:	e5940030 	ldr	r0, [r4, #48]	; fField48
        2c08d4:	e1500006 	cmp	r0, r6
        2c08d8:	caffffe3 	bgt	2c086c <TFunctionState::ComputeArgFrame(void)+0x2d8>
        2c08dc:	e3590003 	cmp	r9, #3	; 0x3
        2c08e0:	ca00000a 	bgt	2c0910 <TFunctionState::ComputeArgFrame(void)+0x37c>
        2c08e4:	e1a00004 	mov	r0, r4
        2c08e8:	eb5e43f5 	bl	1a518c4 <TFunctionState::$AtTopLevel(void)>
        2c08ec:	e3300000 	teq	r0, #0	; 0x0
        2c08f0:	1a00004c 	bne	2c0a28 <TFunctionState::ComputeArgFrame(void)+0x494>
        2c08f4:	e5940044 	ldr	r0, [r4, #68]	; fField68
        2c08f8:	e3300000 	teq	r0, #0	; 0x0
        2c08fc:	05940048 	ldreq	r0, [r4, #72]	; fField72
        2c0900:	03300000 	teqeq	r0, #0	; 0x0
        2c0904:	0594004c 	ldreq	r0, [r4, #76]	; fField76
        2c0908:	03300000 	teqeq	r0, #0	; 0x0
        2c090c:	0a000045 	beq	2c0a28 <TFunctionState::ComputeArgFrame(void)+0x494>
        2c0910:	e24dd008 	sub	sp, sp, #8	; 0x8
        2c0914:	e1a01009 	mov	r1, r9
        2c0918:	e28d003c 	add	r0, sp, #60	; 0x3c
        2c091c:	eb641692 	bl	1bc636c <$SetLength(RefVar const &, long)>
        2c0920:	e59d003c 	ldr	r0, [sp, #60]
        2c0924:	e5900000 	ldr	r0, [r0]
        2c0928:	e51f1240 	ldr	r1, [pc, #fffffdc0]	; 2c06f0 <TFunctionState::ComputeArgFrame(void)+0x15c>
        2c092c:	e5911000 	ldr	r1, [r1]
        2c0930:	e3a05000 	mov	r5, #0	; 0x0
        2c0934:	e5912000 	ldr	r2, [r1]
        2c0938:	e1a01005 	mov	r1, r5
        2c093c:	eb641685 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c0940:	e59d003c 	ldr	r0, [sp, #60]
        2c0944:	e5900000 	ldr	r0, [r0]
        2c0948:	e51f125c 	ldr	r1, [pc, #fffffda4]	; 2c06f4 <TFunctionState::ComputeArgFrame(void)+0x160>
        2c094c:	e5911000 	ldr	r1, [r1]
        2c0950:	e3a06001 	mov	r6, #1	; 0x1
        2c0954:	e5912000 	ldr	r2, [r1]
        2c0958:	e1a01006 	mov	r1, r6
        2c095c:	eb64167d 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c0960:	e59d003c 	ldr	r0, [sp, #60]
        2c0964:	e5900000 	ldr	r0, [r0]
        2c0968:	e51f1278 	ldr	r1, [pc, #fffffd88]	; 2c06f8 <TFunctionState::ComputeArgFrame(void)+0x164>
        2c096c:	e5911000 	ldr	r1, [r1]
        2c0970:	e3a09002 	mov	r9, #2	; 0x2
        2c0974:	e5912000 	ldr	r2, [r1]
        2c0978:	e1a01009 	mov	r1, r9
        2c097c:	eb641675 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c0980:	e1a0a008 	mov	sl, r8
        2c0984:	e1a00009 	mov	r0, r9
        2c0988:	eb6405ef 	bl	1bc214c <$AllocateRefHandle(long)>
        2c098c:	e58d0004 	str	r0, [sp, #4]	; fField4
        2c0990:	e28d0004 	add	r0, sp, #4	; 0x4
        2c0994:	e28d103c 	add	r1, sp, #60	; 0x3c
        2c0998:	eb6405ea 	bl	1bc2148 <$AllocateMapWithTags__FRC6RefVarT1>
        2c099c:	eb6405ea 	bl	1bc214c <$AllocateRefHandle(long)>
        2c09a0:	e58d0000 	str	r0, [sp]
        2c09a4:	e1a0000d 	mov	r0, sp
        2c09a8:	eb6405e5 	bl	1bc2144 <$AllocateFrameWithMap(RefVar const &)>
        2c09ac:	e59a1000 	ldr	r1, [sl]
        2c09b0:	e5810000 	str	r0, [r1]
        2c09b4:	e59d0000 	ldr	r0, [sp]
        2c09b8:	eb6409ff 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c09bc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c09c0:	eb6409fd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c09c4:	e5940044 	ldr	r0, [r4, #68]	; fField68
        2c09c8:	e3300000 	teq	r0, #0	; 0x0
        2c09cc:	1a000008 	bne	2c09f4 <TFunctionState::ComputeArgFrame(void)+0x460>
        2c09d0:	e1a00004 	mov	r0, r4
        2c09d4:	eb5e43ba 	bl	1a518c4 <TFunctionState::$AtTopLevel(void)>
        2c09d8:	e3300000 	teq	r0, #0	; 0x0
        2c09dc:	1a000004 	bne	2c09f4 <TFunctionState::ComputeArgFrame(void)+0x460>
        2c09e0:	e5980000 	ldr	r0, [r8]
        2c09e4:	e5900000 	ldr	r0, [r0]
        2c09e8:	e1a02005 	mov	r2, r5
        2c09ec:	e1a01006 	mov	r1, r6
        2c09f0:	eb641658 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c09f4:	e5940048 	ldr	r0, [r4, #72]	; fField72
        2c09f8:	e3300000 	teq	r0, #0	; 0x0
        2c09fc:	1a000008 	bne	2c0a24 <TFunctionState::ComputeArgFrame(void)+0x490>
        2c0a00:	e1a00004 	mov	r0, r4
        2c0a04:	eb5e43ae 	bl	1a518c4 <TFunctionState::$AtTopLevel(void)>
        2c0a08:	e3300000 	teq	r0, #0	; 0x0
        2c0a0c:	1a000004 	bne	2c0a24 <TFunctionState::ComputeArgFrame(void)+0x490>
        2c0a10:	e5980000 	ldr	r0, [r8]
        2c0a14:	e5900000 	ldr	r0, [r0]
        2c0a18:	e1a02005 	mov	r2, r5
        2c0a1c:	e1a01009 	mov	r1, r9
        2c0a20:	eb64164c 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c0a24:	e28dd008 	add	sp, sp, #8	; 0x8
        2c0a28:	e2470003 	sub	r0, r7, #3	; 0x3
        2c0a2c:	e5941030 	ldr	r1, [r4, #48]	; fField48
        2c0a30:	e0400001 	sub	r0, r0, r1
        2c0a34:	e5a40024 	str	r0, [r4, #36]!	; fField36
        2c0a38:	e1a0000d 	mov	r0, sp
        2c0a3c:	e3a01000 	mov	r1, #0	; 0x0
        2c0a40:	e1a0e00f 	mov	lr, pc
        2c0a44:	e59df000 	ldr	pc, [sp]
        2c0a48:	e5bd0030 	ldr	r0, [sp, #48]!	; fField48
        2c0a4c:	eb6409da 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c0a50:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c0a54:	eb6409d8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c0a58:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TFunctionState::CopyClosedArgs(void)
 * Address: 002c0b04
 */
TFunctionState::CopyClosedArgs(void) {
    /*
        2c0b04:	e1a0c00d 	mov	ip, sp
        2c0b08:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2c0b0c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2c0b10:	e1a04000 	mov	r4, r0
        2c0b14:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c0b18:	e2800004 	add	r0, r0, #4	; 0x4
        2c0b1c:	e1a06000 	mov	r6, r0
        2c0b20:	e5900000 	ldr	r0, [r0]
        2c0b24:	e5900000 	ldr	r0, [r0]
        2c0b28:	eb6411df 	bl	1bc52ac <$Length(long)>
        2c0b2c:	e1a07000 	mov	r7, r0
        2c0b30:	e3a00002 	mov	r0, #2	; 0x2
        2c0b34:	eb640584 	bl	1bc214c <$AllocateRefHandle(long)>
        2c0b38:	e3a05000 	mov	r5, #0	; 0x0
        2c0b3c:	e3570000 	cmp	r7, #0	; 0x0
        2c0b40:	e58d0000 	str	r0, [sp]
        2c0b44:	da000026 	ble	2c0be4 <TFunctionState::CopyClosedArgs(void)+0xe0>
        2c0b48:	e3a09002 	mov	r9, #2	; 0x2
        2c0b4c:	e5960000 	ldr	r0, [r6]
        2c0b50:	e5900000 	ldr	r0, [r0]
        2c0b54:	e1a01005 	mov	r1, r5
        2c0b58:	eb640dbd 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c0b5c:	e59d1000 	ldr	r1, [sp]
        2c0b60:	e5810000 	str	r0, [r1]
        2c0b64:	e1a0100d 	mov	r1, sp
        2c0b68:	e1a00004 	mov	r0, r4
        2c0b6c:	eb5e603d 	bl	1a58c68 <TFunctionState::$VariableIndex(RefVar const &)>
        2c0b70:	e3700001 	cmn	r0, #1	; 0x1
        2c0b74:	1a000017 	bne	2c0bd8 <TFunctionState::CopyClosedArgs(void)+0xd4>
        2c0b78:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c0b7c:	e1a00009 	mov	r0, r9
        2c0b80:	eb640571 	bl	1bc214c <$AllocateRefHandle(long)>
        2c0b84:	e58d0000 	str	r0, [sp]
        2c0b88:	e1a0300d 	mov	r3, sp
        2c0b8c:	e1a00006 	mov	r0, r6
        2c0b90:	e28d1004 	add	r1, sp, #4	; 0x4
        2c0b94:	e3a02000 	mov	r2, #0	; 0x0
        2c0b98:	eb64056d 	bl	1bc2154 <$ArrayPosition__FRC6RefVarT1lT1>
        2c0b9c:	e1a08000 	mov	r8, r0
        2c0ba0:	e59d0000 	ldr	r0, [sp]
        2c0ba4:	eb640984 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c0ba8:	e2882003 	add	r2, r8, #3	; 0x3
        2c0bac:	e1a00004 	mov	r0, r4
        2c0bb0:	e3a0100f 	mov	r1, #15	; 0xf
        2c0bb4:	eb5e4b73 	bl	1a53988 <TFunctionState::$Emit(Opcode, long)>
        2c0bb8:	e28d1004 	add	r1, sp, #4	; 0x4
        2c0bbc:	e1a00004 	mov	r0, r4
        2c0bc0:	eb5e53c8 	bl	1a55ae8 <TFunctionState::$LitOffset(RefVar const &)>
        2c0bc4:	e1a02000 	mov	r2, r0
        2c0bc8:	e1a00004 	mov	r0, r4
        2c0bcc:	e3a01015 	mov	r1, #21	; 0x15
        2c0bd0:	eb5e4b6c 	bl	1a53988 <TFunctionState::$Emit(Opcode, long)>
        2c0bd4:	e28dd004 	add	sp, sp, #4	; 0x4
        2c0bd8:	e2855001 	add	r5, r5, #1	; 0x1
        2c0bdc:	e1550007 	cmp	r5, r7
        2c0be0:	baffffd9 	blt	2c0b4c <TFunctionState::CopyClosedArgs(void)+0x48>
        2c0be4:	e59d0000 	ldr	r0, [sp]
        2c0be8:	eb640973 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c0bec:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TFunctionState::IsLocalVariable(RefVar const &)
 * Address: 002c0bf0
 */
TFunctionState::IsLocalVariable(RefVar const &) {
    /*
        2c0bf0:	e1a0c00d 	mov	ip, sp
        2c0bf4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2c0bf8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2c0bfc:	e1a05000 	mov	r5, r0
        2c0c00:	e1a04001 	mov	r4, r1
        2c0c04:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c0c08:	e3a00002 	mov	r0, #2	; 0x2
        2c0c0c:	eb64054e 	bl	1bc214c <$AllocateRefHandle(long)>
        2c0c10:	e58d0000 	str	r0, [sp]
        2c0c14:	e2850008 	add	r0, r5, #8	; 0x8
        2c0c18:	e5901000 	ldr	r1, [r0]
        2c0c1c:	e5911000 	ldr	r1, [r1]
        2c0c20:	e3310002 	teq	r1, #2	; 0x2
        2c0c24:	0a000005 	beq	2c0c40 <TFunctionState::IsLocalVariable(RefVar const &)+0x50>
        2c0c28:	e1a0300d 	mov	r3, sp
        2c0c2c:	e1a01004 	mov	r1, r4
        2c0c30:	e3a02000 	mov	r2, #0	; 0x0
        2c0c34:	eb640546 	bl	1bc2154 <$ArrayPosition__FRC6RefVarT1lT1>
        2c0c38:	e3700001 	cmn	r0, #1	; 0x1
        2c0c3c:	1a00000a 	bne	2c0c6c <TFunctionState::IsLocalVariable(RefVar const &)+0x7c>
        2c0c40:	e2850004 	add	r0, r5, #4	; 0x4
        2c0c44:	e5901000 	ldr	r1, [r0]
        2c0c48:	e5911000 	ldr	r1, [r1]
        2c0c4c:	e3310002 	teq	r1, #2	; 0x2
        2c0c50:	0a000007 	beq	2c0c74 <TFunctionState::IsLocalVariable(RefVar const &)+0x84>
        2c0c54:	e1a0300d 	mov	r3, sp
        2c0c58:	e1a01004 	mov	r1, r4
        2c0c5c:	e3a02000 	mov	r2, #0	; 0x0
        2c0c60:	eb64053b 	bl	1bc2154 <$ArrayPosition__FRC6RefVarT1lT1>
        2c0c64:	e3700001 	cmn	r0, #1	; 0x1
        2c0c68:	0a000001 	beq	2c0c74 <TFunctionState::IsLocalVariable(RefVar const &)+0x84>
        2c0c6c:	e3a00001 	mov	r0, #1	; 0x1
        2c0c70:	ea000000 	b	2c0c78 <TFunctionState::IsLocalVariable(RefVar const &)+0x88>
        2c0c74:	e3a00000 	mov	r0, #0	; 0x0
        2c0c78:	e20040ff 	and	r4, r0, #255	; 0xff
        2c0c7c:	e59d0000 	ldr	r0, [sp]
        2c0c80:	eb64094d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c0c84:	e1a00004 	mov	r0, r4
        2c0c88:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFunctionState::VariableIndex(RefVar const &)
 * Address: 002c0c8c
 */
TFunctionState::VariableIndex(RefVar const &) {
    /*
        2c0c8c:	e1a0c00d 	mov	ip, sp
        2c0c90:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2c0c94:	e24cb004 	sub	fp, ip, #4	; 0x4
        2c0c98:	e59f203c 	ldr	r2, [pc, #3c]	; 2c0cdc <TFunctionState::VariableIndex(RefVar const &)+0x50>
        2c0c9c:	e5922000 	ldr	r2, [r2]
        2c0ca0:	e3520000 	cmp	r2, #0	; 0x0
        2c0ca4:	da00000d 	ble	2c0ce0 <TFunctionState::VariableIndex(RefVar const &)+0x54>
        2c0ca8:	e5900020 	ldr	r0, [r0, #32]	; fField32
        2c0cac:	e5900000 	ldr	r0, [r0]
        2c0cb0:	e5911000 	ldr	r1, [r1]
        2c0cb4:	e5911000 	ldr	r1, [r1]
        2c0cb8:	eb640d68 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2c0cbc:	e2001003 	and	r1, r0, #3	; 0x3
        2c0cc0:	e3510000 	cmp	r1, #0	; 0x0
        2c0cc4:	13e00000 	mvnne	r0, #0	; 0x0
        2c0cc8:	191ba800 	ldmnedb	fp, {fp, sp, pc}
        2c0ccc:	191b6800 	ldmnedb	fp, {fp, sp, lr}
        2c0cd0:	1a640511 	bne	1bc211c <$_RINTError(long)>
        2c0cd4:	01a00140 	moveq	r0, r0, asr #2
        2c0cd8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        2c0cdc:	0c1051ec 	ldfeqs	f5, [r0], -#944
        2c0ce0:	e5911000 	ldr	r1, [r1]
        2c0ce4:	e5911000 	ldr	r1, [r1]
        2c0ce8:	e5900018 	ldr	r0, [r0, #24]	; fField24
        2c0cec:	e5900000 	ldr	r0, [r0]
        2c0cf0:	e91b6800 	ldmdb	fp, {fp, sp, lr}
        2c0cf4:	ea5dfca7 	b	1a3ff98 <$FrameSlotPosition__FlT1>
    */
}

/**
 * Symbol: TFunctionState::NoteVarReference(RefVar const &)
 * Address: 002c0cf8
 */
TFunctionState::NoteVarReference(RefVar const &) {
    /*
        2c0cf8:	e1a0c00d 	mov	ip, sp
        2c0cfc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2c0d00:	e24cb004 	sub	fp, ip, #4	; 0x4
        2c0d04:	e1a04000 	mov	r4, r0
        2c0d08:	e1a05001 	mov	r5, r1
        2c0d0c:	eb5e536f 	bl	1a55ad0 <TFunctionState::$IsLocalVariable(RefVar const &)>
        2c0d10:	e3a06001 	mov	r6, #1	; 0x1
        2c0d14:	e3a01000 	mov	r1, #0	; 0x0
        2c0d18:	e3300000 	teq	r0, #0	; 0x0
        2c0d1c:	0a000017 	beq	2c0d80 <TFunctionState::NoteVarReference(RefVar const &)+0x88>
        2c0d20:	e24dd008 	sub	sp, sp, #8	; 0x8
        2c0d24:	e3a0001a 	mov	r0, #26	; 0x1a
        2c0d28:	eb640507 	bl	1bc214c <$AllocateRefHandle(long)>
        2c0d2c:	e58d0000 	str	r0, [sp]
        2c0d30:	e1a0200d 	mov	r2, sp
        2c0d34:	e284001c 	add	r0, r4, #28	; 0x1c
        2c0d38:	e1a01005 	mov	r1, r5
        2c0d3c:	eb641589 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2c0d40:	e59d0000 	ldr	r0, [sp]
        2c0d44:	eb64091c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c0d48:	e28f0f0a 	add	r0, pc, #40	; 0x28
        2c0d4c:	eb64114b 	bl	1bc5280 <$Intern(char *)>
        2c0d50:	eb6404fd 	bl	1bc214c <$AllocateRefHandle(long)>
        2c0d54:	e58d0004 	str	r0, [sp, #4]	; fField4
        2c0d58:	e28d2004 	add	r2, sp, #4	; 0x4
        2c0d5c:	e2840020 	add	r0, r4, #32	; 0x20
        2c0d60:	e1a01005 	mov	r1, r5
        2c0d64:	eb64157f 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2c0d68:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c0d6c:	eb640912 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c0d70:	e1a00006 	mov	r0, r6
        2c0d74:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2c0d78:	636c6f73 	cmnvs	ip, #460	; 0x1cc
        2c0d7c:	65640000 	strvsb	r0, [r4]!
        2c0d80:	e5940054 	ldr	r0, [r4, #84]	; fField84
        2c0d84:	e3300000 	teq	r0, #0	; 0x0
        2c0d88:	01a00001 	moveq	r0, r1
        2c0d8c:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        2c0d90:	e1a01005 	mov	r1, r5
        2c0d94:	eb5e5763 	bl	1a56b28 <TFunctionState::$NoteVarReference(RefVar const &)>
        2c0d98:	e3300000 	teq	r0, #0	; 0x0
        2c0d9c:	15a4604c 	strne	r6, [r4, #76]!	; fField76
        2c0da0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TFunctionState::NoteMsgEnvReference(TFunctionState::MsgEnvComponent)
 * Address: 002c0da4
 */
TFunctionState::NoteMsgEnvReference(TFunctionState::MsgEnvComponent) {
    /*
        2c0da4:	e3300000 	teq	r0, #0	; 0x0
        2c0da8:	01a0f00e 	moveq	pc, lr
        2c0dac:	e3a02001 	mov	r2, #1	; 0x1
        2c0db0:	e3310000 	teq	r1, #0	; 0x0
        2c0db4:	05802044 	streq	r2, [r0, #68]	; fField68
        2c0db8:	0a000001 	beq	2c0dc4 <TFunctionState::NoteMsgEnvReference(TFunctionState::MsgEnvComponent)+0x20>
        2c0dbc:	e3310001 	teq	r1, #1	; 0x1
        2c0dc0:	05802048 	streq	r2, [r0, #72]	; fField72
        2c0dc4:	e5900054 	ldr	r0, [r0, #84]	; fField84
        2c0dc8:	e3300000 	teq	r0, #0	; 0x0
        2c0dcc:	1afffff7 	bne	2c0db0 <TFunctionState::NoteMsgEnvReference(TFunctionState::MsgEnvComponent)+0xc>
        2c0dd0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFunctionState::AddConstant(RefVar const &, RefVar const &)
 * Address: 002c0dd4
 */
TFunctionState::AddConstant(RefVar const &, RefVar const &) {
    /*
        2c0dd4:	e1a0c00d 	mov	ip, sp
        2c0dd8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2c0ddc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2c0de0:	e1a05000 	mov	r5, r0
        2c0de4:	e1a04001 	mov	r4, r1
        2c0de8:	e1a06002 	mov	r6, r2
        2c0dec:	eb5e5337 	bl	1a55ad0 <TFunctionState::$IsLocalVariable(RefVar const &)>
        2c0df0:	e3300000 	teq	r0, #0	; 0x0
        2c0df4:	0a000004 	beq	2c0e0c <TFunctionState::AddConstant(RefVar const &, RefVar const &)+0x38>
        2c0df8:	e1a02004 	mov	r2, r4
        2c0dfc:	e3a01e22 	mov	r1, #544	; 0x220
        2c0e00:	e2411903 	sub	r1, r1, #49152	; 0xc000
        2c0e04:	e5950000 	ldr	r0, [r5]
        2c0e08:	eb5e4ae4 	bl	1a539a0 <TCompiler::$Error(long, RefVar const &)>
        2c0e0c:	e285000c 	add	r0, r5, #12	; 0xc
        2c0e10:	e1a02006 	mov	r2, r6
        2c0e14:	e1a01004 	mov	r1, r4
        2c0e18:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        2c0e1c:	ea641551 	b	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
    */
}

/**
 * Symbol: TFunctionState::IsConstant(RefVar const &)
 * Address: 002c0e20
 */
TFunctionState::IsConstant(RefVar const &) {
    /*
        2c0e20:	e1a0c00d 	mov	ip, sp
        2c0e24:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2c0e28:	e24cb004 	sub	fp, ip, #4	; 0x4
        2c0e2c:	e1a05000 	mov	r5, r0
        2c0e30:	e1a04001 	mov	r4, r1
        2c0e34:	e5910000 	ldr	r0, [r1]
        2c0e38:	e5900000 	ldr	r0, [r0]
        2c0e3c:	e59f105c 	ldr	r1, [pc, #5c]	; 2c0ea0 <TFunctionState::IsConstant(RefVar const &)+0x80>
        2c0e40:	e5911000 	ldr	r1, [r1]
        2c0e44:	e5911000 	ldr	r1, [r1]
        2c0e48:	eb640cf8 	bl	1bc4230 <$EQRef__FlT1>
        2c0e4c:	e3a06000 	mov	r6, #0	; 0x0
        2c0e50:	e3300000 	teq	r0, #0	; 0x0
        2c0e54:	1a00000f 	bne	2c0e98 <TFunctionState::IsConstant(RefVar const &)+0x78>
        2c0e58:	e3350000 	teq	r5, #0	; 0x0
        2c0e5c:	0a00000d 	beq	2c0e98 <TFunctionState::IsConstant(RefVar const &)+0x78>
        2c0e60:	e1a01004 	mov	r1, r4
        2c0e64:	e1a00005 	mov	r0, r5
        2c0e68:	eb5e5317 	bl	1a55acc <TFunctionState::$IsLocalConstant(RefVar const &)>
        2c0e6c:	e3300000 	teq	r0, #0	; 0x0
        2c0e70:	13a00001 	movne	r0, #1	; 0x1
        2c0e74:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        2c0e78:	e1a01004 	mov	r1, r4
        2c0e7c:	e1a00005 	mov	r0, r5
        2c0e80:	eb5e5312 	bl	1a55ad0 <TFunctionState::$IsLocalVariable(RefVar const &)>
        2c0e84:	e3300000 	teq	r0, #0	; 0x0
        2c0e88:	1a000002 	bne	2c0e98 <TFunctionState::IsConstant(RefVar const &)+0x78>
        2c0e8c:	e5955054 	ldr	r5, [r5, #84]	; fField84
        2c0e90:	e3350000 	teq	r5, #0	; 0x0
        2c0e94:	1afffff1 	bne	2c0e60 <TFunctionState::IsConstant(RefVar const &)+0x40>
        2c0e98:	e1a00006 	mov	r0, r6
        2c0e9c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2c0ea0:	00685390 	streqb	r5, [r8], -#48	; fField48
    */
}

/**
 * Symbol: TFunctionState::IsLocalConstant(RefVar const &)
 * Address: 002c0ea4
 */
TFunctionState::IsLocalConstant(RefVar const &) {
    /*
        2c0ea4:	e1a0c00d 	mov	ip, sp
        2c0ea8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2c0eac:	e24cb004 	sub	fp, ip, #4	; 0x4
        2c0eb0:	e590000c 	ldr	r0, [r0, #12]	; fField12
        2c0eb4:	e5900000 	ldr	r0, [r0]
        2c0eb8:	e5911000 	ldr	r1, [r1]
        2c0ebc:	e5911000 	ldr	r1, [r1]
        2c0ec0:	eb640ce0 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        2c0ec4:	e20000ff 	and	r0, r0, #255	; 0xff
        2c0ec8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TFunctionState::GetConstantValue(RefVar const &, long *)
 * Address: 002c0ecc
 */
TFunctionState::GetConstantValue(RefVar const &, long *) {
    /*
        2c0ecc:	e280000c 	add	r0, r0, #12	; 0xc
        2c0ed0:	ea640ce4 	b	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
    */
}

/**
 * Symbol: TFunctionState::AtTopLevel(void)
 * Address: 002c0ed4
 */
TFunctionState::AtTopLevel(void) {
    /*
        2c0ed4:	e5900054 	ldr	r0, [r0, #84]	; fField84
        2c0ed8:	e3300000 	teq	r0, #0	; 0x0
        2c0edc:	13a00000 	movne	r0, #0	; 0x0
        2c0ee0:	03a00001 	moveq	r0, #1	; 0x1
        2c0ee4:	e20000ff 	and	r0, r0, #255	; 0xff
        2c0ee8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFunctionState::MakeCodeBlock(void)
 * Address: 002c0eec
 */
TFunctionState::MakeCodeBlock(void) {
    /*
        2c0eec:	e1a0c00d 	mov	ip, sp
        2c0ef0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2c0ef4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2c0ef8:	e1a04000 	mov	r4, r0
        2c0efc:	e590102c 	ldr	r1, [r0, #44]	; fField44
        2c0f00:	e2800014 	add	r0, r0, #20	; 0x14
        2c0f04:	e1a08000 	mov	r8, r0
        2c0f08:	eb641517 	bl	1bc636c <$SetLength(RefVar const &, long)>
        2c0f0c:	e5941028 	ldr	r1, [r4, #40]	; fField40
        2c0f10:	e2840010 	add	r0, r4, #16	; 0x10
        2c0f14:	e1a05000 	mov	r5, r0
        2c0f18:	eb641513 	bl	1bc636c <$SetLength(RefVar const &, long)>
        2c0f1c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c0f20:	e594003c 	ldr	r0, [r4, #60]
        2c0f24:	e3500000 	cmp	r0, #0	; 0x0
        2c0f28:	aa000002 	bge	2c0f38 <TFunctionState::MakeCodeBlock(void)+0x4c>
        2c0f2c:	e5940050 	ldr	r0, [r4, #80]
        2c0f30:	e3300000 	teq	r0, #0	; 0x0
        2c0f34:	0a000001 	beq	2c0f40 <TFunctionState::MakeCodeBlock(void)+0x54>
        2c0f38:	eb03268e 	bl	38a978 <C$$dtorvec$$Limit+0x4>
        2c0f3c:	ea000000 	b	2c0f44 <TFunctionState::MakeCodeBlock(void)+0x58>
        2c0f40:	eb0326ac 	bl	38a9f8 <C$$dtorvec$$Limit+0x84>
        2c0f44:	eb640480 	bl	1bc214c <$AllocateRefHandle(long)>
        2c0f48:	e40d0004 	str	r0, [sp], -#4	; fField4
        2c0f4c:	e594003c 	ldr	r0, [r4, #60]
        2c0f50:	e3500000 	cmp	r0, #0	; 0x0
        2c0f54:	ba000008 	blt	2c0f7c <TFunctionState::MakeCodeBlock(void)+0x90>
        2c0f58:	e1a00100 	mov	r0, r0, lsl #2
        2c0f5c:	eb64047a 	bl	1bc214c <$AllocateRefHandle(long)>
        2c0f60:	e58d0000 	str	r0, [sp]
        2c0f64:	e1a0200d 	mov	r2, sp
        2c0f68:	e59f1240 	ldr	r1, [pc, #240]	; 2c11b0 <TFunctionState::MakeCodeBlock(void)+0x2c4>
        2c0f6c:	e28d0004 	add	r0, sp, #4	; 0x4
        2c0f70:	eb6414fc 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2c0f74:	e59d0000 	ldr	r0, [sp]
        2c0f78:	eb64088f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c0f7c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c0f80:	e5900000 	ldr	r0, [r0]
        2c0f84:	e5951000 	ldr	r1, [r5]
        2c0f88:	e5912000 	ldr	r2, [r1]
        2c0f8c:	e3a01001 	mov	r1, #1	; 0x1
        2c0f90:	eb6414f0 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c0f94:	e3a0a002 	mov	sl, #2	; 0x2
        2c0f98:	e594002c 	ldr	r0, [r4, #44]	; fField44
        2c0f9c:	e3300000 	teq	r0, #0	; 0x0
        2c0fa0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c0fa4:	e5900000 	ldr	r0, [r0]
        2c0fa8:	01a0100a 	moveq	r1, sl
        2c0fac:	01a0200a 	moveq	r2, sl
        2c0fb0:	0a000002 	beq	2c0fc0 <TFunctionState::MakeCodeBlock(void)+0xd4>
        2c0fb4:	e5981000 	ldr	r1, [r8]
        2c0fb8:	e5912000 	ldr	r2, [r1]
        2c0fbc:	e1a0100a 	mov	r1, sl
        2c0fc0:	eb6414e4 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c0fc4:	e59f01e8 	ldr	r0, [pc, #1e8]	; 2c11b4 <TFunctionState::MakeCodeBlock(void)+0x2c8>	; fField1
        2c0fc8:	e5900000 	ldr	r0, [r0]
        2c0fcc:	e3a01004 	mov	r1, #4	; 0x4
        2c0fd0:	e3a06000 	mov	r6, #0	; 0x0
        2c0fd4:	e3500000 	cmp	r0, #0	; 0x0
        2c0fd8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c0fdc:	e5900000 	ldr	r0, [r0]
        2c0fe0:	e5942030 	ldr	r2, [r4, #48]	; fField48
        2c0fe4:	da0000b1 	ble	2c12b0 <TFunctionState::MakeCodeBlock(void)+0x3c4>
        2c0fe8:	e5943024 	ldr	r3, [r4, #36]	; fField36
        2c0fec:	e0822803 	add	r2, r2, r3, lsl #16
        2c0ff0:	e1a02102 	mov	r2, r2, lsl #2
        2c0ff4:	eb6414d7 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c0ff8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c0ffc:	e5900000 	ldr	r0, [r0]
        2c1000:	e3a02032 	mov	r2, #50	; 0x32
        2c1004:	e1a01006 	mov	r1, r6
        2c1008:	eb6414d2 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c100c:	e594003c 	ldr	r0, [r4, #60]
        2c1010:	e3500000 	cmp	r0, #0	; 0x0
        2c1014:	aa0000a7 	bge	2c12b8 <TFunctionState::MakeCodeBlock(void)+0x3cc>
        2c1018:	e5940050 	ldr	r0, [r4, #80]
        2c101c:	e3300000 	teq	r0, #0	; 0x0
        2c1020:	0a0000a4 	beq	2c12b8 <TFunctionState::MakeCodeBlock(void)+0x3cc>
        2c1024:	e24dd008 	sub	sp, sp, #8	; 0x8
        2c1028:	e28f0f62 	add	r0, pc, #392	; 0x188
        2c102c:	eb641093 	bl	1bc5280 <$Intern(char *)>
        2c1030:	eb640445 	bl	1bc214c <$AllocateRefHandle(long)>
        2c1034:	e58d0000 	str	r0, [sp]
        2c1038:	e1a0000d 	mov	r0, sp
        2c103c:	e3a01001 	mov	r1, #1	; 0x1
        2c1040:	eb64043c 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        2c1044:	eb640440 	bl	1bc214c <$AllocateRefHandle(long)>
        2c1048:	e58d0004 	str	r0, [sp, #4]	; fField4
        2c104c:	e59d0000 	ldr	r0, [sp]
        2c1050:	eb640859 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c1054:	e1b05004 	movs	r5, r4
        2c1058:	0a000025 	beq	2c10f4 <TFunctionState::MakeCodeBlock(void)+0x208>
        2c105c:	e24d702c 	sub	r7, sp, #44	; 0x2c
        2c1060:	e2850018 	add	r0, r5, #24	; 0x18
        2c1064:	e1a01000 	mov	r1, r0
        2c1068:	e5900000 	ldr	r0, [r0]
        2c106c:	e5900000 	ldr	r0, [r0]
        2c1070:	e3300002 	teq	r0, #2	; 0x2
        2c1074:	0a00001b 	beq	2c10e8 <TFunctionState::MakeCodeBlock(void)+0x1fc>
        2c1078:	e24dd030 	sub	sp, sp, #48	; 0x30
        2c107c:	e1a0000d 	mov	r0, sp
        2c1080:	e3a02000 	mov	r2, #0	; 0x0
        2c1084:	eb640019 	bl	1bc10f0 <TObjectIterator::$__ct(RefVar const &, int)>
        2c1088:	e1a0000d 	mov	r0, sp
        2c108c:	eb641095 	bl	1bc52e8 <TObjectIterator::$Next(void)>
        2c1090:	e1a0000d 	mov	r0, sp
        2c1094:	eb641093 	bl	1bc52e8 <TObjectIterator::$Next(void)>
        2c1098:	e1a0000d 	mov	r0, sp
        2c109c:	eb641091 	bl	1bc52e8 <TObjectIterator::$Next(void)>
        2c10a0:	e1a0000d 	mov	r0, sp
        2c10a4:	eb64084c 	bl	1bc31dc <TObjectIterator::$Done(void)>
        2c10a8:	e3300000 	teq	r0, #0	; 0x0
        2c10ac:	1a000008 	bne	2c10d4 <TFunctionState::MakeCodeBlock(void)+0x1e8>
        2c10b0:	e1a01007 	mov	r1, r7
        2c10b4:	e28d0034 	add	r0, sp, #52	; 0x34
        2c10b8:	eb64041a 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        2c10bc:	e1a0000d 	mov	r0, sp
        2c10c0:	eb641088 	bl	1bc52e8 <TObjectIterator::$Next(void)>
        2c10c4:	e1a0000d 	mov	r0, sp
        2c10c8:	eb640843 	bl	1bc31dc <TObjectIterator::$Done(void)>
        2c10cc:	e3300000 	teq	r0, #0	; 0x0
        2c10d0:	0afffff6 	beq	2c10b0 <TFunctionState::MakeCodeBlock(void)+0x1c4>
        2c10d4:	e1a0000d 	mov	r0, sp
        2c10d8:	e3a01000 	mov	r1, #0	; 0x0
        2c10dc:	e1a0e00f 	mov	lr, pc
        2c10e0:	e59df000 	ldr	pc, [sp]
        2c10e4:	e28dd030 	add	sp, sp, #48	; 0x30
        2c10e8:	e5955054 	ldr	r5, [r5, #84]	; fField84
        2c10ec:	e3350000 	teq	r5, #0	; 0x0
        2c10f0:	1affffda 	bne	2c1060 <TFunctionState::MakeCodeBlock(void)+0x174>
        2c10f4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c10f8:	e5900000 	ldr	r0, [r0]
        2c10fc:	eb64106a 	bl	1bc52ac <$Length(long)>
        2c1100:	e1a05000 	mov	r5, r0
        2c1104:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c1108:	e5900000 	ldr	r0, [r0]
        2c110c:	e2451001 	sub	r1, r5, #1	; 0x1
        2c1110:	e1a02101 	mov	r2, r1, lsl #2
        2c1114:	e1a01006 	mov	r1, r6
        2c1118:	eb64148e 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c111c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c1120:	e5900000 	ldr	r0, [r0]
        2c1124:	eb641060 	bl	1bc52ac <$Length(long)>
        2c1128:	e5941030 	ldr	r1, [r4, #48]	; fField48
        2c112c:	e0801001 	add	r1, r0, r1
        2c1130:	e5940024 	ldr	r0, [r4, #36]	; fField36
        2c1134:	e0811000 	add	r1, r1, r0
        2c1138:	e28d0004 	add	r0, sp, #4	; 0x4
        2c113c:	eb64148a 	bl	1bc636c <$SetLength(RefVar const &, long)>
        2c1140:	e24dd030 	sub	sp, sp, #48	; 0x30
        2c1144:	e2841020 	add	r1, r4, #32	; 0x20
        2c1148:	e1a0000d 	mov	r0, sp
        2c114c:	e3a02000 	mov	r2, #0	; 0x0
        2c1150:	eb63ffe6 	bl	1bc10f0 <TObjectIterator::$__ct(RefVar const &, int)>
        2c1154:	e1a0000d 	mov	r0, sp
        2c1158:	eb64081f 	bl	1bc31dc <TObjectIterator::$Done(void)>
        2c115c:	e3300000 	teq	r0, #0	; 0x0
        2c1160:	1a00003e 	bne	2c1260 <TFunctionState::MakeCodeBlock(void)+0x374>
        2c1164:	e2849004 	add	r9, r4, #4	; 0x4
        2c1168:	e28d6004 	add	r6, sp, #4	; 0x4
        2c116c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2c1170:	e5900000 	ldr	r0, [r0]
        2c1174:	e2001003 	and	r1, r0, #3	; 0x3
        2c1178:	e3510000 	cmp	r1, #0	; 0x0
        2c117c:	1a00000f 	bne	2c11c0 <TFunctionState::MakeCodeBlock(void)+0x2d4>
        2c1180:	e59d1034 	ldr	r1, [sp, #52]	; fField52
        2c1184:	e5917000 	ldr	r7, [r1]
        2c1188:	01a00140 	moveq	r0, r0, asr #2
        2c118c:	0a000000 	beq	2c1194 <TFunctionState::MakeCodeBlock(void)+0x2a8>
        2c1190:	eb6403e1 	bl	1bc211c <$_RINTError(long)>
        2c1194:	e0800005 	add	r0, r0, r5
        2c1198:	e2401003 	sub	r1, r0, #3	; 0x3
        2c119c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c11a0:	e5902000 	ldr	r2, [r0]
        2c11a4:	e1a00007 	mov	r0, r7
        2c11a8:	eb64146a 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c11ac:	ea000025 	b	2c1248 <TFunctionState::MakeCodeBlock(void)+0x35c>
        2c11b0:	00682848 	rsbeq	r2, r8, r8, asr #16
        2c11b4:	0c1051ec 	ldfeqs	f5, [r0], -#944
        2c11b8:	64626731 	strvsbt	r6, [r2], -#1841
        2c11bc:	00000000 	andeq	r0, r0, r0
        2c11c0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c11c4:	e3a0a002 	mov	sl, #2	; 0x2
        2c11c8:	e1a0000a 	mov	r0, sl
        2c11cc:	eb6403de 	bl	1bc214c <$AllocateRefHandle(long)>
        2c11d0:	e58d0000 	str	r0, [sp]
        2c11d4:	e1a0300d 	mov	r3, sp
        2c11d8:	e1a01006 	mov	r1, r6
        2c11dc:	e1a00009 	mov	r0, r9
        2c11e0:	e3a02000 	mov	r2, #0	; 0x0
        2c11e4:	eb6403da 	bl	1bc2154 <$ArrayPosition__FRC6RefVarT1lT1>
        2c11e8:	e1a07000 	mov	r7, r0
        2c11ec:	e59d0000 	ldr	r0, [sp]
        2c11f0:	eb6407f1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c11f4:	e3770001 	cmn	r7, #1	; 0x1
        2c11f8:	0a000011 	beq	2c1244 <TFunctionState::MakeCodeBlock(void)+0x358>
        2c11fc:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c1200:	e1a0000a 	mov	r0, sl
        2c1204:	eb6403d0 	bl	1bc214c <$AllocateRefHandle(long)>
        2c1208:	e58d0000 	str	r0, [sp]
        2c120c:	e1a0300d 	mov	r3, sp
        2c1210:	e1a01006 	mov	r1, r6
        2c1214:	e28d003c 	add	r0, sp, #60	; 0x3c
        2c1218:	e3a02000 	mov	r2, #0	; 0x0
        2c121c:	eb6403cc 	bl	1bc2154 <$ArrayPosition__FRC6RefVarT1lT1>
        2c1220:	e1a0a000 	mov	sl, r0
        2c1224:	e59d0000 	ldr	r0, [sp]
        2c1228:	eb6407e3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c122c:	e59d003c 	ldr	r0, [sp, #60]
        2c1230:	e5900000 	ldr	r0, [r0]
        2c1234:	e0851007 	add	r1, r5, r7
        2c1238:	e1a0210a 	mov	r2, sl, lsl #2
        2c123c:	eb641445 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c1240:	e28dd004 	add	sp, sp, #4	; 0x4
        2c1244:	e28dd004 	add	sp, sp, #4	; 0x4
        2c1248:	e1a0000d 	mov	r0, sp
        2c124c:	eb641025 	bl	1bc52e8 <TObjectIterator::$Next(void)>
        2c1250:	e1a0000d 	mov	r0, sp
        2c1254:	eb6407e0 	bl	1bc31dc <TObjectIterator::$Done(void)>
        2c1258:	e3300000 	teq	r0, #0	; 0x0
        2c125c:	0affffc2 	beq	2c116c <TFunctionState::MakeCodeBlock(void)+0x280>
        2c1260:	e59d0034 	ldr	r0, [sp, #52]	; fField52
        2c1264:	e5900000 	ldr	r0, [r0]
        2c1268:	eb64100f 	bl	1bc52ac <$Length(long)>
        2c126c:	e3500001 	cmp	r0, #1	; 0x1
        2c1270:	da000005 	ble	2c128c <TFunctionState::MakeCodeBlock(void)+0x3a0>
        2c1274:	e59d003c 	ldr	r0, [sp, #60]
        2c1278:	e5900000 	ldr	r0, [r0]
        2c127c:	e59d1034 	ldr	r1, [sp, #52]	; fField52
        2c1280:	e5912000 	ldr	r2, [r1]
        2c1284:	e3a01005 	mov	r1, #5	; 0x5
        2c1288:	eb641432 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c128c:	e1a0000d 	mov	r0, sp
        2c1290:	e3a01000 	mov	r1, #0	; 0x0
        2c1294:	e1a0e00f 	mov	lr, pc
        2c1298:	e59df000 	ldr	pc, [sp]
        2c129c:	e28dd030 	add	sp, sp, #48	; 0x30
        2c12a0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c12a4:	eb6407c4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c12a8:	e28dd008 	add	sp, sp, #8	; 0x8
        2c12ac:	ea000001 	b	2c12b8 <TFunctionState::MakeCodeBlock(void)+0x3cc>
        2c12b0:	e1a02102 	mov	r2, r2, lsl #2
        2c12b4:	eb641427 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c12b8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c12bc:	e5900000 	ldr	r0, [r0]
        2c12c0:	e5941018 	ldr	r1, [r4, #24]	; fField24
        2c12c4:	e5912000 	ldr	r2, [r1]
        2c12c8:	e3a01003 	mov	r1, #3	; 0x3
        2c12cc:	eb641421 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c12d0:	e59f0038 	ldr	r0, [pc, #38]	; 2c1310 <TFunctionState::MakeCodeBlock(void)+0x424>
        2c12d4:	e5900000 	ldr	r0, [r0]
        2c12d8:	e3300000 	teq	r0, #0	; 0x0
        2c12dc:	0a000006 	beq	2c12fc <TFunctionState::MakeCodeBlock(void)+0x410>
        2c12e0:	e1a00008 	mov	r0, r8
        2c12e4:	e3a01000 	mov	r1, #0	; 0x0
        2c12e8:	eb64c9a5 	bl	1bf3984 <$PrintObject(RefVar const &, unsigned long)>
        2c12ec:	e59f0020 	ldr	r0, [pc, #20]	; 2c1314 <TFunctionState::MakeCodeBlock(void)+0x428>	; fField20
        2c12f0:	e5900000 	ldr	r0, [r0]
        2c12f4:	e28f1f07 	add	r1, pc, #28	; 0x1c
        2c12f8:	eb0322ee 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        2c12fc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2c1300:	e5904000 	ldr	r4, [r0]
        2c1304:	eb6407ac 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c1308:	e1a00004 	mov	r0, r4
        2c130c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2c1310:	0c1052cc 	lfmeq	f5, 4, [r0], -#816
        2c1314:	0c101820 	ldceq	8, cr1, [r0], -#128
        2c1318:	0d000000 	stceq	0, cr0, [r0]
    */
}

/**
 * Symbol: TFunctionState::BeginLoop(void)
 * Address: 002c131c
 */
TFunctionState::BeginLoop(void) {
    /*
        2c131c:	e1a0c00d 	mov	ip, sp
        2c1320:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2c1324:	e24cb004 	sub	fp, ip, #4	; 0x4
        2c1328:	e1a04000 	mov	r4, r0
        2c132c:	e5902038 	ldr	r2, [r0, #56]	; fField56
        2c1330:	e1a01000 	mov	r1, r0
        2c1334:	e3a00000 	mov	r0, #0	; 0x0
        2c1338:	eb5e6257 	bl	1a59c9c <TLoopState::$__ct(TFunctionState *, TLoopState *)>
        2c133c:	e1b05000 	movs	r5, r0
        2c1340:	1a000005 	bne	2c135c <TFunctionState::BeginLoop(void)+0x40>
        2c1344:	e59f0018 	ldr	r0, [pc, #18]	; 2c1364 <TFunctionState::BeginLoop(void)+0x48>
        2c1348:	e5900000 	ldr	r0, [r0]
        2c134c:	e3a02000 	mov	r2, #0	; 0x0
        2c1350:	e3a010e9 	mov	r1, #233	; 0xe9
        2c1354:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        2c1358:	eb64878f 	bl	1be319c <$Throw>
        2c135c:	e5a45038 	str	r5, [r4, #56]!	; fField56
        2c1360:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2c1364:	00371318 	eoreqs	r1, r7, r8, lsl r3
    */
}

/**
 * Symbol: TFunctionState::AddLoopExit(void)
 * Address: 002c1368
 */
TFunctionState::AddLoopExit(void) {
    /*
        2c1368:	e1a0c00d 	mov	ip, sp
        2c136c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2c1370:	e24cb004 	sub	fp, ip, #4	; 0x4
        2c1374:	e1a04000 	mov	r4, r0
        2c1378:	e5900038 	ldr	r0, [r0, #56]	; fField56
        2c137c:	e3300000 	teq	r0, #0	; 0x0
        2c1380:	028f0f06 	addeq	r0, pc, #24	; 0x18
        2c1384:	0b648785 	bleq	1be31a0 <$ThrowMsg>
        2c1388:	e5940038 	ldr	r0, [r4, #56]	; fField56
        2c138c:	e5941028 	ldr	r1, [r4, #40]	; fField40
        2c1390:	eb5e4141 	bl	1a5189c <TLoopState::$AddExit(long)>
        2c1394:	e1a00004 	mov	r0, r4
        2c1398:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        2c139c:	ea5e4570 	b	1a52964 <TFunctionState::$EmitPlaceholder(void)>
        2c13a0:	42524541 	submis	r4, r2, #272629760	; 0x10400000
        2c13a4:	4b207374 	blmi	ade17c <ROM$$Size+0x3be530>
        2c13a8:	6174656d 	cmnvs	r4, sp, ror #10
        2c13ac:	656e7420 	strvsb	r7, [lr, -#1056]!
        2c13b0:	6f757473 	swivs	0x00757473
        2c13b4:	69646520 	stmvsdb	r4!, {r5, r8, sl, sp, lr}^
        2c13b8:	61206c6f 	teqvs	r0, pc, ror #24
        2c13bc:	6f700000 	swivs	0x00700000
    */
}

/**
 * Symbol: TFunctionState::EndLoop(void)
 * Address: 002c13c0
 */
TFunctionState::EndLoop(void) {
    /*
        2c13c0:	e1a0c00d 	mov	ip, sp
        2c13c4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2c13c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2c13cc:	e1a04000 	mov	r4, r0
        2c13d0:	e5901028 	ldr	r1, [r0, #40]	; fField40
        2c13d4:	e5900038 	ldr	r0, [r0, #56]	; fField56
        2c13d8:	eb5e55d6 	bl	1a56b38 <TLoopState::$PatchExits(long)>
        2c13dc:	e5940038 	ldr	r0, [r4, #56]	; fField56
        2c13e0:	e5901008 	ldr	r1, [r0, #8]	; fField8
        2c13e4:	e5a41038 	str	r1, [r4, #56]!	; fField56
        2c13e8:	e3a01000 	mov	r1, #0	; 0x0
        2c13ec:	e5801008 	str	r1, [r0, #8]	; fField8
        2c13f0:	e3300000 	teq	r0, #0	; 0x0
        2c13f4:	13a01001 	movne	r1, #1	; 0x1
        2c13f8:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        2c13fc:	1a5e622e 	bne	1a59cbc <TLoopState::$__dt(void)>
        2c1400:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

