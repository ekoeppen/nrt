#include "include/TStrXrDomain.h"

/**
 * Symbol: Make__12TStrXrDomainSFP11TController
 * Address: 0021fc7c
 */
void TStrXrDomain::Make() {
    /*
        21fc7c:	e1a0c00d 	mov	ip, sp
        21fc80:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        21fc84:	e24cb004 	sub	fp, ip, #4	; 0x4
        21fc88:	e1a04000 	mov	r4, r0
        21fc8c:	e3a00080 	mov	r0, #128	; 0x80
        21fc90:	eb66baa8 	bl	1bce738 <$__nw(unsigned int)>
        21fc94:	e1b05000 	movs	r5, r0
        21fc98:	0a000003 	beq	21fcac <Make__12TStrXrDomainSFP11TController+0x30>
        21fc9c:	e1a00005 	mov	r0, r5
        21fca0:	eb64ec28 	bl	1b5ad48 <TDomain::$__ct(void)>
        21fca4:	e59f0014 	ldr	r0, [pc, #14]	; 21fcc0 <Make__12TStrXrDomainSFP11TController+0x44>
        21fca8:	e5850000 	str	r0, [r5]
        21fcac:	e1a01004 	mov	r1, r4
        21fcb0:	e1a00005 	mov	r0, r5
        21fcb4:	eb63ec30 	bl	1b1ad7c <TStrXrDomain::$IStrXrDomain(TController *)>
        21fcb8:	e1a00005 	mov	r0, r5
        21fcbc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        21fcc0:	0001c674 	andeq	ip, r1, r4, ror r6
    */
}

/**
 * Symbol: TStrXrDomain::IStrXrDomain(TController *)
 * Address: 0021fcc4
 */
TStrXrDomain::IStrXrDomain(TController *) {
    /*
        21fcc4:	e1a0c00d 	mov	ip, sp
        21fcc8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        21fccc:	e24cb004 	sub	fp, ip, #4	; 0x4
        21fcd0:	e1a04000 	mov	r4, r0
        21fcd4:	e1a05001 	mov	r5, r1
        21fcd8:	e28f3f1c 	add	r3, pc, #112	; 0x70
        21fcdc:	e59f2084 	ldr	r2, [pc, #84]	; 21fd68 <TStrXrDomain::IStrXrDomain(TController *)+0xa4>
        21fce0:	eb6500c4 	bl	1b5fff8 <TDomain::$IDomain(TController *, unsigned long, char *)>
        21fce4:	e59f0080 	ldr	r0, [pc, #80]	; 21fd6c <TStrXrDomain::IStrXrDomain(TController *)+0xa8>
        21fce8:	e5900000 	ldr	r0, [r0]
        21fcec:	e5840018 	str	r0, [r4, #24]	; fField24
        21fcf0:	e1a00004 	mov	r0, r4
        21fcf4:	e59f1074 	ldr	r1, [pc, #74]	; 21fd70 <TStrXrDomain::IStrXrDomain(TController *)+0xac>
        21fcf8:	eb64ec1f 	bl	1b5ad7c <TDomain::$AddPieceType(unsigned long)>
        21fcfc:	e1a01004 	mov	r1, r4
        21fd00:	e1a00005 	mov	r0, r5
        21fd04:	eb650906 	bl	1b62124 <TController::$RegisterDomain(TDomain *)>
        21fd08:	e2840038 	add	r0, r4, #56	; 0x38
        21fd0c:	e3a0201c 	mov	r2, #28	; 0x1c
        21fd10:	e3a01000 	mov	r1, #0	; 0x0
        21fd14:	eb66534f 	bl	1bb4a58 <$memset>
        21fd18:	e3a00000 	mov	r0, #0	; 0x0
        21fd1c:	e5c40079 	strb	r0, [r4, #121]	; fField121
        21fd20:	e5c40078 	strb	r0, [r4, #120]	; fField120
        21fd24:	e5c4007b 	strb	r0, [r4, #123]	; fField123
        21fd28:	e5c4007a 	strb	r0, [r4, #122]	; fField122
        21fd2c:	e5c4007d 	strb	r0, [r4, #125]	; fField125
        21fd30:	e5c4007c 	strb	r0, [r4, #124]	; fField124
        21fd34:	e5c4007f 	strb	r0, [r4, #127]	; fField127
        21fd38:	e5c4007e 	strb	r0, [r4, #126]	; fField126
        21fd3c:	e2840054 	add	r0, r4, #84	; 0x54
        21fd40:	e3a02010 	mov	r2, #16	; 0x10
        21fd44:	e3a01000 	mov	r1, #0	; 0x0
        21fd48:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        21fd4c:	ea665341 	b	1bb4a58 <$memset>
        21fd50:	5374726f 	cmnpl	r4, #-268435450	; 0xf0000006
        21fd54:	6b657320 	blvs	1b7c9dc <TGSMCodec::$Delete(void)+0xbe0>
        21fd58:	746f2058 	strvcbt	r2, [pc], #58	; 21fd60 <TStrXrDomain::IStrXrDomain(TController *)+0x9c>
        21fd5c:	72732044 	rsbvcs	r2, r3, #68	; 0x44
        21fd60:	6f6d6169 	swivs	0x006d6169
        21fd64:	6e000000 	cdpvs	0, 0, cr0, cr0, cr0, {0}
        21fd68:	53545852 	cmppl	r4, #5373952	; 0x520000
        21fd6c:	0c101850 	ldceq	8, cr1, [r0], -#320
        21fd70:	5354524b 	cmppl	r4, #-1342177276	; 0xb0000004
    */
}

/**
 * Symbol: TStrXrDomain::ReclassifyStrXr(TStrXrUnit *)
 * Address: 0021fd74
 */
TStrXrDomain::ReclassifyStrXr(TStrXrUnit *) {
    /*
        21fd74:	e1a0c00d 	mov	ip, sp
        21fd78:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        21fd7c:	e24cb004 	sub	fp, ip, #4	; 0x4
        21fd80:	e3a03001 	mov	r3, #1	; 0x1
        21fd84:	e3a02000 	mov	r2, #0	; 0x0
        21fd88:	e92d000c 	stmdb	sp!, {r2, r3}
        21fd8c:	eb63f848 	bl	1b1deb4 <$CallGroupAndClassify__FP12TStrXrDomainP10TStrXrUnitP11TStrokeUnitUiN24>
        21fd90:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TStrXrDomain::StartWord(TStrokeUnit *)
 * Address: 0021fd94
 */
TStrXrDomain::StartWord(TStrokeUnit *) {
    /*
        21fd94:	e1a0c00d 	mov	ip, sp
        21fd98:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        21fd9c:	e24cb004 	sub	fp, ip, #4	; 0x4
        21fda0:	e1a05000 	mov	r5, r0
        21fda4:	e1a04001 	mov	r4, r1
        21fda8:	e1a00001 	mov	r0, r1
        21fdac:	eb651534 	bl	1b65284 <TUnit::$GetAreas(void)>
        21fdb0:	e1a07000 	mov	r7, r0
        21fdb4:	e5d40024 	ldrb	r0, [r4, #36]	; fField36
        21fdb8:	e2801001 	add	r1, r0, #1	; 0x1
        21fdbc:	e1a02007 	mov	r2, r7
        21fdc0:	e1a00005 	mov	r0, r5
        21fdc4:	eb63eff9 	bl	1b1bdb0 <$Make__10TStrXrUnitSFP7TDomainUlP6TArray>
        21fdc8:	e1a06000 	mov	r6, r0
        21fdcc:	e3370000 	teq	r7, #0	; 0x0
        21fdd0:	11a00007 	movne	r0, r7
        21fdd4:	11a0e00f 	movne	lr, pc
        21fdd8:	1597f000 	ldrne	pc, [r7]
        21fddc:	e3360000 	teq	r6, #0	; 0x0
        21fde0:	05b50008 	ldreq	r0, [r5, #8]!	; fField8
        21fde4:	091b68f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        21fde8:	0a650cea 	beq	1b63198 <TController::$SignalMemoryError(void)>
        21fdec:	e1a01004 	mov	r1, r4
        21fdf0:	e1a00006 	mov	r0, r6
        21fdf4:	e5962000 	ldr	r2, [r6]
        21fdf8:	e1a0e00f 	mov	lr, pc
        21fdfc:	e282f054 	add	pc, r2, #84	; 0x54
        21fe00:	e1a01006 	mov	r1, r6
        21fe04:	e5b50008 	ldr	r0, [r5, #8]!	; fField8
        21fe08:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        21fe0c:	ea6504b3 	b	1b610e0 <TController::$NewGroup(TUnit *)>
    */
}

/**
 * Symbol: TStrXrDomain::GroupOnLineSegmentation(TUnit *)
 * Address: 0021fe10
 */
TStrXrDomain::GroupOnLineSegmentation(TUnit *) {
    /*
        21fe10:	e3a02000 	mov	r2, #0	; 0x0
        21fe14:	ea64006a 	b	1b1ffc4 <$GCPregroupAndGroup(TStrXrDomain *, TStrokeUnit *, unsigned int)>
    */
}

/**
 * Symbol: TStrXrDomain::GroupBoxedSegmentation(TUnit *)
 * Address: 0021fe18
 */
TStrXrDomain::GroupBoxedSegmentation(TUnit *) {
    /*
        21fe18:	e1a0c00d 	mov	ip, sp
        21fe1c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        21fe20:	e24cb004 	sub	fp, ip, #4	; 0x4
        21fe24:	e1a04000 	mov	r4, r0
        21fe28:	e1a05001 	mov	r5, r1
        21fe2c:	eb63f412 	bl	1b1ce7c <TStrXrDomain::$AddStrokeToBoxedWord(TStrokeUnit *)>
        21fe30:	e1b06000 	movs	r6, r0
        21fe34:	01a01005 	moveq	r1, r5
        21fe38:	01a00004 	moveq	r0, r4
        21fe3c:	0b63f400 	bleq	1b1ce44 <TStrXrDomain::$StartWord(TStrokeUnit *)>
        21fe40:	e5940020 	ldr	r0, [r4, #32]	; fField32
        21fe44:	e3300000 	teq	r0, #0	; 0x0
        21fe48:	0a000002 	beq	21fe58 <TStrXrDomain::GroupBoxedSegmentation(TUnit *)+0x40>
        21fe4c:	e5900000 	ldr	r0, [r0]
        21fe50:	e5941064 	ldr	r1, [r4, #100]	; fField100
        21fe54:	e5a0103c 	str	r1, [r0, #60]!
        21fe58:	e1a00006 	mov	r0, r6
        21fe5c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TStrXrDomain::AddStrokeToBoxedWord(TStrokeUnit *)
 * Address: 0021fe60
 */
TStrXrDomain::AddStrokeToBoxedWord(TStrokeUnit *) {
    /*
        21fe60:	e1a0c00d 	mov	ip, sp
        21fe64:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        21fe68:	e24cb004 	sub	fp, ip, #4	; 0x4
        21fe6c:	e1a04000 	mov	r4, r0
        21fe70:	e24dd004 	sub	sp, sp, #4	; 0x4
        21fe74:	e3a07000 	mov	r7, #0	; 0x0
        21fe78:	e1a02001 	mov	r2, r1
        21fe7c:	e1a01000 	mov	r1, r0
        21fe80:	e1a0000d 	mov	r0, sp
        21fe84:	eb63f806 	bl	1b1dea4 <TStrXrDomain::$BoxHit(TStrokeUnit *)>
        21fe88:	e5940008 	ldr	r0, [r4, #8]	; fField8
        21fe8c:	e5942010 	ldr	r2, [r4, #16]	; fField16
        21fe90:	e1a01004 	mov	r1, r4
        21fe94:	eb64fc2f 	bl	1b5ef58 <TController::$GetDelayList(TDomain *, unsigned long)>
        21fe98:	e1b05000 	movs	r5, r0
        21fe9c:	0a00001c 	beq	21ff14 <TStrXrDomain::AddStrokeToBoxedWord(TStrokeUnit *)+0xb4>
        21fea0:	e3a06000 	mov	r6, #0	; 0x0
        21fea4:	e595000c 	ldr	r0, [r5, #12]
        21fea8:	e3500000 	cmp	r0, #0	; 0x0
        21feac:	9a000014 	bls	21ff04 <TStrXrDomain::AddStrokeToBoxedWord(TStrokeUnit *)+0xa4>
        21feb0:	e1a01006 	mov	r1, r6
        21feb4:	e1a00005 	mov	r0, r5
        21feb8:	eb65003b 	bl	1b5ffac <TUnitList::$GetUnit(unsigned long)>
        21febc:	e59d2002 	ldr	r2, [sp, #2]
        21fec0:	e1a02842 	mov	r2, r2, asr #16
        21fec4:	e5941066 	ldr	r1, [r4, #102]	; fField102
        21fec8:	e1320841 	teq	r2, r1, asr #16
        21fecc:	05942064 	ldreq	r2, [r4, #100]	; fField100
        21fed0:	01a02842 	moveq	r2, r2, asr #16
        21fed4:	059d1000 	ldreq	r1, [sp]
        21fed8:	01320841 	teqeq	r2, r1, asr #16
        21fedc:	13a01000 	movne	r1, #0	; 0x0
        21fee0:	03a01001 	moveq	r1, #1	; 0x1
        21fee4:	e21170ff 	ands	r7, r1, #255	; 0xff
        21fee8:	05901000 	ldreq	r1, [r0]
        21feec:	01a0e00f 	moveq	lr, pc
        21fef0:	0281f060 	addeq	pc, r1, #96	; 0x60
        21fef4:	e2866001 	add	r6, r6, #1	; 0x1
        21fef8:	e595000c 	ldr	r0, [r5, #12]
        21fefc:	e1500006 	cmp	r0, r6
        21ff00:	8affffea 	bhi	21feb0 <TStrXrDomain::AddStrokeToBoxedWord(TStrokeUnit *)+0x50>
        21ff04:	e1a00005 	mov	r0, r5
        21ff08:	e1a0e00f 	mov	lr, pc
        21ff0c:	e595f000 	ldr	pc, [r5]
        21ff10:	ea000001 	b	21ff1c <TStrXrDomain::AddStrokeToBoxedWord(TStrokeUnit *)+0xbc>
        21ff14:	e5940008 	ldr	r0, [r4, #8]	; fField8
        21ff18:	eb650c9e 	bl	1b63198 <TController::$SignalMemoryError(void)>
        21ff1c:	e2841064 	add	r1, r4, #100	; 0x64
        21ff20:	e59d0000 	ldr	r0, [sp]
        21ff24:	e5810000 	str	r0, [r1]
        21ff28:	e1a00007 	mov	r0, r7
        21ff2c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TStrXrDomain::BoxHit(TStrokeUnit *)
 * Address: 0021ff30
 */
TStrXrDomain::BoxHit(TStrokeUnit *) {
    /*
        21ff30:	e1a0c00d 	mov	ip, sp
        21ff34:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        21ff38:	e24cb004 	sub	fp, ip, #4	; 0x4
        21ff3c:	e1a05000 	mov	r5, r0
        21ff40:	e1a04001 	mov	r4, r1
        21ff44:	e24dd014 	sub	sp, sp, #20	; 0x14
        21ff48:	e3e00000 	mvn	r0, #0	; 0x0
        21ff4c:	e5cd0013 	strb	r0, [sp, #19]
        21ff50:	e5cd0012 	strb	r0, [sp, #18]
        21ff54:	e5cd0011 	strb	r0, [sp, #17]
        21ff58:	e5cd0010 	strb	r0, [sp, #16]	; fField16
        21ff5c:	e1a0100d 	mov	r1, sp
        21ff60:	e1a00002 	mov	r0, r2
        21ff64:	eb6514c7 	bl	1b65288 <TUnit::$GetBBox(FRect *)>
        21ff68:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        21ff6c:	e2800902 	add	r0, r0, #32768	; 0x8000
        21ff70:	e1a00840 	mov	r0, r0, asr #16
        21ff74:	e1a00800 	mov	r0, r0, lsl #16
        21ff78:	e1a00840 	mov	r0, r0, asr #16
        21ff7c:	e59d1000 	ldr	r1, [sp]
        21ff80:	e2811902 	add	r1, r1, #32768	; 0x8000
        21ff84:	e1a01841 	mov	r1, r1, asr #16
        21ff88:	e1a01801 	mov	r1, r1, lsl #16
        21ff8c:	e0800841 	add	r0, r0, r1, asr #16
        21ff90:	e1a010c0 	mov	r1, r0, asr #1
        21ff94:	e5940054 	ldr	r0, [r4, #84]
        21ff98:	e2800902 	add	r0, r0, #32768	; 0x8000
        21ff9c:	e1a00840 	mov	r0, r0, asr #16
        21ffa0:	e1a00800 	mov	r0, r0, lsl #16
        21ffa4:	e1a00840 	mov	r0, r0, asr #16
        21ffa8:	e594205c 	ldr	r2, [r4, #92]	; fField92
        21ffac:	e2822902 	add	r2, r2, #32768	; 0x8000
        21ffb0:	e1a02842 	mov	r2, r2, asr #16
        21ffb4:	e1a02802 	mov	r2, r2, lsl #16
        21ffb8:	e0702842 	rsbs	r2, r0, r2, asr #16
        21ffbc:	e3a06000 	mov	r6, #0	; 0x0
        21ffc0:	0a00000a 	beq	21fff0 <TStrXrDomain::BoxHit(TStrokeUnit *)+0xc0>
        21ffc4:	e1510000 	cmp	r1, r0
        21ffc8:	9a000006 	bls	21ffe8 <TStrXrDomain::BoxHit(TStrokeUnit *)+0xb8>
        21ffcc:	e0411000 	sub	r1, r1, r0
        21ffd0:	e1a00002 	mov	r0, r2
        21ffd4:	eb664a5b 	bl	1bb2948 <$__rt_udiv>
        21ffd8:	e5cd0013 	strb	r0, [sp, #19]
        21ffdc:	e1a00440 	mov	r0, r0, asr #8
        21ffe0:	e5cd0012 	strb	r0, [sp, #18]
        21ffe4:	ea000001 	b	21fff0 <TStrXrDomain::BoxHit(TStrokeUnit *)+0xc0>
        21ffe8:	e5cd6013 	strb	r6, [sp, #19]
        21ffec:	e5cd6012 	strb	r6, [sp, #18]
        21fff0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        21fff4:	e2800902 	add	r0, r0, #32768	; 0x8000
        21fff8:	e1a00840 	mov	r0, r0, asr #16
        21fffc:	e1a01800 	mov	r1, r0, lsl #16
        220000:	e1a01841 	mov	r1, r1, asr #16
        220004:	e59d000c 	ldr	r0, [sp, #12]
        220008:	e2800902 	add	r0, r0, #32768	; 0x8000
        22000c:	e1a00840 	mov	r0, r0, asr #16
        220010:	e1a00800 	mov	r0, r0, lsl #16
        220014:	e0810840 	add	r0, r1, r0, asr #16
        220018:	e1a010c0 	mov	r1, r0, asr #1
        22001c:	e5940058 	ldr	r0, [r4, #88]	; fField88
        220020:	e2800902 	add	r0, r0, #32768	; 0x8000
        220024:	e1a00840 	mov	r0, r0, asr #16
        220028:	e1a00800 	mov	r0, r0, lsl #16
        22002c:	e1a00840 	mov	r0, r0, asr #16
        220030:	e5b42060 	ldr	r2, [r4, #96]!	; fField96
        220034:	e2822902 	add	r2, r2, #32768	; 0x8000
        220038:	e1a02842 	mov	r2, r2, asr #16
        22003c:	e1a02802 	mov	r2, r2, lsl #16
        220040:	e0702842 	rsbs	r2, r0, r2, asr #16
        220044:	0a00000a 	beq	220074 <TStrXrDomain::BoxHit(TStrokeUnit *)+0x144>
        220048:	e1510000 	cmp	r1, r0
        22004c:	9a000006 	bls	22006c <TStrXrDomain::BoxHit(TStrokeUnit *)+0x13c>
        220050:	e0411000 	sub	r1, r1, r0
        220054:	e1a00002 	mov	r0, r2
        220058:	eb664a3a 	bl	1bb2948 <$__rt_udiv>
        22005c:	e5cd0011 	strb	r0, [sp, #17]
        220060:	e1a00440 	mov	r0, r0, asr #8
        220064:	e5cd0010 	strb	r0, [sp, #16]	; fField16
        220068:	ea000001 	b	220074 <TStrXrDomain::BoxHit(TStrokeUnit *)+0x144>
        22006c:	e5cd6011 	strb	r6, [sp, #17]
        220070:	e5cd6010 	strb	r6, [sp, #16]	; fField16
        220074:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        220078:	e5850000 	str	r0, [r5]
        22007c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TStrXrDomain::Dispose(void)
 * Address: 00220210
 */
TStrXrDomain::Dispose(void) {
    /*
        220210:	ea64f721 	b	1b5de9c <TDomain::$Dispose(void)>
    */
}

/**
 * Symbol: TStrXrDomain::Classify(TUnit *)
 * Address: 00220214
 */
TStrXrDomain::Classify(TUnit *) {
    /*
        220214:	e1a0c00d 	mov	ip, sp
        220218:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        22021c:	e24cb004 	sub	fp, ip, #4	; 0x4
        220220:	e1a05000 	mov	r5, r0
        220224:	e1a04001 	mov	r4, r1
        220228:	e1a00001 	mov	r0, r1
        22022c:	e3a01302 	mov	r1, #134217728	; 0x8000000
        220230:	eb650bec 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        220234:	e3300000 	teq	r0, #0	; 0x0
        220238:	01a01004 	moveq	r1, r4
        22023c:	01a00005 	moveq	r0, r5
        220240:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
        220244:	0a63e289 	beq	1b18c70 <TStrXrDomain::$ClassifyStrXr(TStrXrUnit *)>
        220248:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TStrXrDomain::Reclassify(TUnit *)
 * Address: 0022024c
 */
TStrXrDomain::Reclassify(TUnit *) {
    /*
        22024c:	e1a0c00d 	mov	ip, sp
        220250:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        220254:	e24cb004 	sub	fp, ip, #4	; 0x4
        220258:	e1a04000 	mov	r4, r0
        22025c:	e1a05001 	mov	r5, r1
        220260:	e5b10078 	ldr	r0, [r1, #120]!	; fField120
        220264:	e3300000 	teq	r0, #0	; 0x0
        220268:	1b613d52 	blne	1a6f7b8 <$HWRMemoryFreeHandle(unsigned long)>
        22026c:	e3a06000 	mov	r6, #0	; 0x0
        220270:	e5856078 	str	r6, [r5, #120]	; fField120
        220274:	e595007c 	ldr	r0, [r5, #124]	; fField124
        220278:	e3300000 	teq	r0, #0	; 0x0
        22027c:	1b613d4d 	blne	1a6f7b8 <$HWRMemoryFreeHandle(unsigned long)>
        220280:	e585607c 	str	r6, [r5, #124]	; fField124
        220284:	e5950074 	ldr	r0, [r5, #116]	; fField116
        220288:	e3300000 	teq	r0, #0	; 0x0
        22028c:	1b613d4b 	blne	1a6f7c0 <$HWRMemoryFree(void *)>
        220290:	e5856074 	str	r6, [r5, #116]	; fField116
        220294:	e5c56073 	strb	r6, [r5, #115]
        220298:	e5c56072 	strb	r6, [r5, #114]
        22029c:	e2850080 	add	r0, r5, #128	; 0x80
        2202a0:	eb63fb34 	bl	1b1ef78 <$GCDisposeGResHandle(unsigned long *)>
        2202a4:	e5c56085 	strb	r6, [r5, #133]
        2202a8:	e5c56084 	strb	r6, [r5, #132]
        2202ac:	e5c56087 	strb	r6, [r5, #135]
        2202b0:	e5c56086 	strb	r6, [r5, #134]
        2202b4:	e2850088 	add	r0, r5, #136	; 0x88
        2202b8:	e3a02020 	mov	r2, #32	; 0x20
        2202bc:	e3a01000 	mov	r1, #0	; 0x0
        2202c0:	eb6651e4 	bl	1bb4a58 <$memset>
        2202c4:	e3a00001 	mov	r0, #1	; 0x1
        2202c8:	e5c500ad 	strb	r0, [r5, #173]
        2202cc:	e5c500ae 	strb	r0, [r5, #174]
        2202d0:	e1a01005 	mov	r1, r5
        2202d4:	e1a00004 	mov	r0, r4
        2202d8:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        2202dc:	ea64204b 	b	1b28410 <TStrXrDomain::$ReclassifyStrXr(TStrXrUnit *)>
    */
}

/**
 * Symbol: TStrXrDomain::Group(TUnit *, dInfoRec *)
 * Address: 002202e0
 */
TStrXrDomain::Group(TUnit *, dInfoRec *) {
    /*
        2202e0:	e1a0c00d 	mov	ip, sp
        2202e4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2202e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2202ec:	e1a04000 	mov	r4, r0
        2202f0:	e1a05001 	mov	r5, r1
        2202f4:	e5900054 	ldr	r0, [r0, #84]
        2202f8:	e3300000 	teq	r0, #0	; 0x0
        2202fc:	1594005c 	ldrne	r0, [r4, #92]	; fField92
        220300:	13300000 	teqne	r0, #0	; 0x0
        220304:	1a000004 	bne	22031c <TStrXrDomain::Group(TUnit *, dInfoRec *)+0x3c>
        220308:	e5940058 	ldr	r0, [r4, #88]	; fField88
        22030c:	e3300000 	teq	r0, #0	; 0x0
        220310:	15940060 	ldrne	r0, [r4, #96]	; fField96
        220314:	13300000 	teqne	r0, #0	; 0x0
        220318:	0a000004 	beq	220330 <TStrXrDomain::Group(TUnit *, dInfoRec *)+0x50>
        22031c:	e1a01005 	mov	r1, r5
        220320:	e1a00004 	mov	r0, r4
        220324:	eb63ff42 	bl	1b20034 <TStrXrDomain::$GroupBoxedSegmentation(TUnit *)>
        220328:	e3300000 	teq	r0, #0	; 0x0
        22032c:	0a000002 	beq	22033c <TStrXrDomain::Group(TUnit *, dInfoRec *)+0x5c>
        220330:	e1a01005 	mov	r1, r5
        220334:	e1a00004 	mov	r0, r4
        220338:	eb63ea79 	bl	1b1ad24 <TStrXrDomain::$GroupOnLineSegmentation(TUnit *)>
        22033c:	e3a00001 	mov	r0, #1	; 0x1
        220340:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TStrXrDomain::PreGroup(TUnit *)
 * Address: 00220344
 */
TStrXrDomain::PreGroup(TUnit *) {
    /*
        220344:	e3310000 	teq	r1, #0	; 0x0
        220348:	03a00001 	moveq	r0, #1	; 0x1
        22034c:	01a0f00e 	moveq	pc, lr
        220350:	e5902034 	ldr	r2, [r0, #52]	; fField52
        220354:	e3120801 	tst	r2, #65536	; 0x10000
        220358:	13a00000 	movne	r0, #0	; 0x0
        22035c:	11a0f00e 	movne	pc, lr
        220360:	e1a0c00d 	mov	ip, sp
        220364:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        220368:	e24cb004 	sub	fp, ip, #4	; 0x4
        22036c:	e3a02001 	mov	r2, #1	; 0x1
        220370:	eb63ff13 	bl	1b1ffc4 <$GCPregroupAndGroup(TStrXrDomain *, TStrokeUnit *, unsigned int)>
        220374:	e20000ff 	and	r0, r0, #255	; 0xff
        220378:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)
 * Address: 0022037c
 */
TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long) {
    /*
        22037c:	e1a0c00d 	mov	ip, sp
        220380:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        220384:	e24cb004 	sub	fp, ip, #4	; 0x4
        220388:	e1a08001 	mov	r8, r1
        22038c:	e1a04002 	mov	r4, r2
        220390:	e1b05003 	movs	r5, r3
        220394:	e24dd004 	sub	sp, sp, #4	; 0x4
        220398:	e3a06000 	mov	r6, #0	; 0x0
        22039c:	0a000002 	beq	2203ac <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x30>
        2203a0:	e1a00005 	mov	r0, r5
        2203a4:	eb6530a4 	bl	1b6c63c <$LockHandle(char **)>
        2203a8:	e5956000 	ldr	r6, [r5]
        2203ac:	e1a01008 	mov	r1, r8
        2203b0:	e3a0a025 	mov	sl, #37	; 0x25
        2203b4:	e28aa802 	add	sl, sl, #131072	; 0x20000
        2203b8:	e28a901d 	add	r9, sl, #29	; 0x1d
        2203bc:	e28a8003 	add	r8, sl, #3	; 0x3
        2203c0:	e28ae001 	add	lr, sl, #1	; 0x1
        2203c4:	e28a3002 	add	r3, sl, #2	; 0x2
        2203c8:	e28a200d 	add	r2, sl, #13	; 0xd
        2203cc:	e28a001c 	add	r0, sl, #28	; 0x1c
        2203d0:	e151000a 	cmp	r1, sl
        2203d4:	0a000109 	beq	220800 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x484>
        2203d8:	ca000042 	bgt	2204e8 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x16c>
        2203dc:	e251c802 	subs	ip, r1, #131072	; 0x20000
        2203e0:	a35c0006 	cmpge	ip, #6	; 0x6
        2203e4:	0a0000cf 	beq	220728 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x3ac>
        2203e8:	ca00001b 	bgt	22045c <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xe0>
        2203ec:	e3510002 	cmp	r1, #2	; 0x2
        2203f0:	0a000153 	beq	220944 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x5c8>
        2203f4:	ca000011 	bgt	220440 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xc4>
        2203f8:	e3310000 	teq	r1, #0	; 0x0
        2203fc:	03a00058 	moveq	r0, #88	; 0x58
        220400:	0a000073 	beq	2205d4 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x258>
        220404:	e3310001 	teq	r1, #1	; 0x1
        220408:	1a00018a 	bne	220a38 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6bc>
        22040c:	e59f4028 	ldr	r4, [pc, #28]	; 22043c <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xc0>
        220410:	e5940000 	ldr	r0, [r4]
        220414:	e3500004 	cmp	r0, #4	; 0x4
        220418:	908ff100 	addls	pc, pc, r0, lsl #2
        22041c:	ea00006e 	b	2205dc <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x260>
        220420:	ea00006d 	b	2205dc <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x260>
        220424:	ea00006e 	b	2205e4 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x268>
        220428:	ea00006f 	b	2205ec <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x270>
        22042c:	ea000073 	b	220600 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x284>
        220430:	e3a07001 	mov	r7, #1	; 0x1
        220434:	e5c67041 	strb	r7, [r6, #65]
        220438:	ea00006d 	b	2205f4 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x278>
        22043c:	0c10184c 	ldceq	8, cr1, [r0], -#304
        220440:	e3310003 	teq	r1, #3	; 0x3
        220444:	0a0000bd 	beq	220740 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x3c4>
        220448:	e241c802 	sub	ip, r1, #131072	; 0x20000
        22044c:	e33c0005 	teq	ip, #5	; 0x5
        220450:	05b60008 	ldreq	r0, [r6, #8]!	; fField8
        220454:	0a00005e 	beq	2205d4 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x258>
        220458:	ea000176 	b	220a38 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6bc>
        22045c:	e251c802 	subs	ip, r1, #131072	; 0x20000
        220460:	a35c000d 	cmpge	ip, #13	; 0xd
        220464:	0286102c 	addeq	r1, r6, #44	; 0x2c
        220468:	01a00004 	moveq	r0, r4
        22046c:	0a0000ba 	beq	22075c <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x3e0>
        220470:	ca00000c 	bgt	2204a8 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x12c>
        220474:	e241c802 	sub	ip, r1, #131072	; 0x20000
        220478:	e33c000b 	teq	ip, #11	; 0xb
        22047c:	02861010 	addeq	r1, r6, #16	; 0x10
        220480:	01a00004 	moveq	r0, r4
        220484:	0a000004 	beq	22049c <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x120>
        220488:	e241c802 	sub	ip, r1, #131072	; 0x20000
        22048c:	e33c000c 	teq	ip, #12	; 0xc
        220490:	1a000168 	bne	220a38 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6bc>
        220494:	e2860010 	add	r0, r6, #16	; 0x10
        220498:	e1a01004 	mov	r1, r4
        22049c:	e3a0201c 	mov	r2, #28	; 0x1c
        2204a0:	eb66516a 	bl	1bb4a50 <$memcpy>
        2204a4:	ea000160 	b	220a2c <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6b0>
        2204a8:	e241c802 	sub	ip, r1, #131072	; 0x20000
        2204ac:	e33c000e 	teq	ip, #14	; 0xe
        2204b0:	0a0000a7 	beq	220754 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x3d8>
        2204b4:	e241c802 	sub	ip, r1, #131072	; 0x20000
        2204b8:	e33c0014 	teq	ip, #20	; 0x14
        2204bc:	1a00015d 	bne	220a38 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6bc>
        2204c0:	e3a02000 	mov	r2, #0	; 0x0
        2204c4:	e3a01000 	mov	r1, #0	; 0x0
        2204c8:	e3a03000 	mov	r3, #0	; 0x0
        2204cc:	e3a00000 	mov	r0, #0	; 0x0
        2204d0:	e5d4c000 	ldrb	ip, [r4]
        2204d4:	e33c0000 	teq	ip, #0	; 0x0
        2204d8:	0a000155 	beq	220a34 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6b8>
        2204dc:	e59fe000 	ldr	lr, [pc, #0]	; 2204e4 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x168>
        2204e0:	ea00009f 	b	220764 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x3e8>
        2204e4:	0038053c 	eoreqs	r0, r8, ip, lsr r5
        2204e8:	e1510009 	cmp	r1, r9
        2204ec:	0a0000e0 	beq	220874 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x4f8>
        2204f0:	ca000021 	bgt	22057c <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x200>
        2204f4:	e1510008 	cmp	r1, r8
        2204f8:	0596000c 	ldreq	r0, [r6, #12]
        2204fc:	03c00801 	biceq	r0, r0, #65536	; 0x10000
        220500:	0a0000c3 	beq	220814 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x498>
        220504:	ca000009 	bgt	220530 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x1b4>
        220508:	e131000e 	teq	r1, lr
        22050c:	05b6000c 	ldreq	r0, [r6, #12]!
        220510:	01a00800 	moveq	r0, r0, lsl #16
        220514:	01a00820 	moveq	r0, r0, lsr #16
        220518:	0a00002d 	beq	2205d4 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x258>
        22051c:	e1310003 	teq	r1, r3
        220520:	0596000c 	ldreq	r0, [r6, #12]
        220524:	03800801 	orreq	r0, r0, #65536	; 0x10000
        220528:	0a0000b9 	beq	220814 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x498>
        22052c:	ea000141 	b	220a38 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6bc>
        220530:	e1310002 	teq	r1, r2
        220534:	0a0000b8 	beq	22081c <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x4a0>
        220538:	e1310000 	teq	r1, r0
        22053c:	1a00013d 	bne	220a38 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6bc>
        220540:	e2860004 	add	r0, r6, #4	; 0x4
        220544:	e1a01004 	mov	r1, r4
        220548:	eb63f64e 	bl	1b1de88 <$AllocLearnInfo(void **, unsigned long)>
        22054c:	e3300000 	teq	r0, #0	; 0x0
        220550:	1a000137 	bne	220a34 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6b8>
        220554:	e3540004 	cmp	r4, #4	; 0x4
        220558:	908ff104 	addls	pc, pc, r4, lsl #2
        22055c:	ea0000b2 	b	22082c <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x4b0>
        220560:	ea0000b1 	b	22082c <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x4b0>
        220564:	ea0000b2 	b	220834 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x4b8>
        220568:	ea0000b3 	b	22083c <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x4c0>
        22056c:	ea0000b7 	b	220850 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x4d4>
        220570:	e3a07001 	mov	r7, #1	; 0x1
        220574:	e5c67041 	strb	r7, [r6, #65]
        220578:	ea0000b1 	b	220844 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x4c8>
        22057c:	e2410043 	sub	r0, r1, #67	; 0x43
        220580:	e2400802 	sub	r0, r0, #131072	; 0x20000
        220584:	e3500004 	cmp	r0, #4	; 0x4
        220588:	908ff100 	addls	pc, pc, r0, lsl #2
        22058c:	ea000129 	b	220a38 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6bc>
        220590:	ea000125 	b	220a2c <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6b0>
        220594:	ea000124 	b	220a2c <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6b0>
        220598:	ea0000c8 	b	2208c0 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x544>
        22059c:	ea0000d0 	b	2208e4 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x568>
        2205a0:	e3a08000 	mov	r8, #0	; 0x0
        2205a4:	e5848000 	str	r8, [r4]
        2205a8:	e5960042 	ldr	r0, [r6, #66]
        2205ac:	e1a00780 	mov	r0, r0, lsl #15
        2205b0:	e1b00fa0 	movs	r0, r0, lsr #31
        2205b4:	13a07001 	movne	r7, #1	; 0x1
        2205b8:	15847000 	strne	r7, [r4]
        2205bc:	e5960042 	ldr	r0, [r6, #66]
        2205c0:	e1a00820 	mov	r0, r0, lsr #16
        2205c4:	e3100008 	tst	r0, #8	; 0x8
        2205c8:	0a000117 	beq	220a2c <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6b0>
        2205cc:	e5940000 	ldr	r0, [r4]
        2205d0:	e3800008 	orr	r0, r0, #8	; 0x8
        2205d4:	e5840000 	str	r0, [r4]
        2205d8:	ea000113 	b	220a2c <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6b0>
        2205dc:	e3a00002 	mov	r0, #2	; 0x2
        2205e0:	ea000002 	b	2205f0 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x274>
        2205e4:	e3a00008 	mov	r0, #8	; 0x8
        2205e8:	ea000000 	b	2205f0 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x274>
        2205ec:	e3a00004 	mov	r0, #4	; 0x4
        2205f0:	e5c60041 	strb	r0, [r6, #65]
        2205f4:	e3a08000 	mov	r8, #0	; 0x0
        2205f8:	e5c68040 	strb	r8, [r6, #64]
        2205fc:	ea000007 	b	220620 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x2a4>
        220600:	e3a00004 	mov	r0, #4	; 0x4
        220604:	e5c60041 	strb	r0, [r6, #65]
        220608:	e3a08000 	mov	r8, #0	; 0x0
        22060c:	e5c68040 	strb	r8, [r6, #64]
        220610:	e3a00000 	mov	r0, #0	; 0x0
        220614:	e5c60001 	strb	r0, [r6, #1]
        220618:	e3a00008 	mov	r0, #8	; 0x8
        22061c:	e5c60000 	strb	r0, [r6]
        220620:	e3a07001 	mov	r7, #1	; 0x1
        220624:	e5c67043 	strb	r7, [r6, #67]
        220628:	e3a08000 	mov	r8, #0	; 0x0
        22062c:	e5c68042 	strb	r8, [r6, #66]
        220630:	e5c68045 	strb	r8, [r6, #69]
        220634:	e5c68044 	strb	r8, [r6, #68]
        220638:	e596000c 	ldr	r0, [r6, #12]
        22063c:	e1a008a0 	mov	r0, r0, lsr #17
        220640:	e1a00880 	mov	r0, r0, lsl #17
        220644:	e3800005 	orr	r0, r0, #5	; 0x5
        220648:	e586000c 	str	r0, [r6, #12]
        22064c:	e1a01780 	mov	r1, r0, lsl #15
        220650:	e1a017a1 	mov	r1, r1, lsr #15
        220654:	e59f00c0 	ldr	r0, [pc, #c0]	; 22071c <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x3a0>
        220658:	e5d00004 	ldrb	r0, [r0, #4]	; fField4
        22065c:	e3300000 	teq	r0, #0	; 0x0
        220660:	13a00004 	movne	r0, #4	; 0x4
        220664:	e3a028fe 	mov	r2, #16646144	; 0xfe0000
        220668:	e28224ff 	add	r2, r2, #-16777216	; 0xff000000
        22066c:	e0020880 	and	r0, r2, r0, lsl #17
        220670:	e1810000 	orr	r0, r1, r0
        220674:	e3a03000 	mov	r3, #0	; 0x0
        220678:	e586000c 	str	r0, [r6, #12]
        22067c:	e92d0008 	stmdb	sp!, {r3}
        220680:	e2862004 	add	r2, r6, #4	; 0x4
        220684:	e1a09002 	mov	r9, r2
        220688:	e28d3004 	add	r3, sp, #4	; 0x4
        22068c:	e28f0f23 	add	r0, pc, #140	; 0x8c
        220690:	e3a01001 	mov	r1, #1	; 0x1
        220694:	eb6406b6 	bl	1b22174 <$ReadDteResource__FPcsPPvT3Ui>
        220698:	e28dd004 	add	sp, sp, #4	; 0x4
        22069c:	e3300000 	teq	r0, #0	; 0x0
        2206a0:	1a0000e3 	bne	220a34 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6b8>
        2206a4:	e1a00009 	mov	r0, r9
        2206a8:	e5941000 	ldr	r1, [r4]
        2206ac:	eb63f5f5 	bl	1b1de88 <$AllocLearnInfo(void **, unsigned long)>
        2206b0:	e3300000 	teq	r0, #0	; 0x0
        2206b4:	1a0000de 	bne	220a34 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6b8>
        2206b8:	e2860010 	add	r0, r6, #16	; 0x10
        2206bc:	e3a0201c 	mov	r2, #28	; 0x1c
        2206c0:	e3a01000 	mov	r1, #0	; 0x0
        2206c4:	eb6650e3 	bl	1bb4a58 <$memset>
        2206c8:	e5c68051 	strb	r8, [r6, #81]
        2206cc:	e5c68050 	strb	r8, [r6, #80]
        2206d0:	e5c68053 	strb	r8, [r6, #83]
        2206d4:	e5c68052 	strb	r8, [r6, #82]
        2206d8:	e5c68055 	strb	r8, [r6, #85]
        2206dc:	e5c68054 	strb	r8, [r6, #84]
        2206e0:	e5c68057 	strb	r8, [r6, #87]
        2206e4:	e5c68056 	strb	r8, [r6, #86]
        2206e8:	e286002c 	add	r0, r6, #44	; 0x2c
        2206ec:	e3a02010 	mov	r2, #16	; 0x10
        2206f0:	e3a01000 	mov	r1, #0	; 0x0
        2206f4:	eb6650d7 	bl	1bb4a58 <$memset>
        2206f8:	e3e00000 	mvn	r0, #0	; 0x0
        2206fc:	e5c6003f 	strb	r0, [r6, #63]
        220700:	e5c6003e 	strb	r0, [r6, #62]
        220704:	e5c6003d 	strb	r0, [r6, #61]
        220708:	e5c6003c 	strb	r0, [r6, #60]
        22070c:	e586704c 	str	r7, [r6, #76]
        220710:	e5867008 	str	r7, [r6, #8]	; fField8
        220714:	e1a00007 	mov	r0, r7
        220718:	ea000085 	b	220934 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x5b8>
        22071c:	0c104d3c 	ldceq	13, cr4, [r0], -#240
        220720:	6176702e 	cmnvs	r6, lr, lsr #32
        220724:	64746500 	ldrvsbt	r6, [r4], -#1280
        220728:	e1a01006 	mov	r1, r6
        22072c:	e1a00004 	mov	r0, r4
        220730:	eb640a98 	bl	1b23198 <$SetStrXrFieldType(unsigned long, STRXRPARAM *)>
        220734:	e1b07000 	movs	r7, r0
        220738:	05a64008 	streq	r4, [r6, #8]!	; fField8
        22073c:	ea0000bd 	b	220a38 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6bc>
        220740:	e5960004 	ldr	r0, [r6, #4]	; fField4
        220744:	e3300000 	teq	r0, #0	; 0x0
        220748:	12860004 	addne	r0, r6, #4	; 0x4
        22074c:	1b642b8b 	blne	1b2b580 <$UnloadData(void **)>
        220750:	ea0000b5 	b	220a2c <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6b0>
        220754:	e286002c 	add	r0, r6, #44	; 0x2c
        220758:	e1a01004 	mov	r1, r4
        22075c:	e3a02010 	mov	r2, #16	; 0x10
        220760:	eaffff4e 	b	2204a0 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x124>
        220764:	e7d4c000 	ldrb	ip, [r4, r0]
        220768:	e7dec00c 	ldrb	ip, [lr, ip]
        22076c:	e31c0002 	tst	ip, #2	; 0x2
        220770:	13a02001 	movne	r2, #1	; 0x1
        220774:	1a000002 	bne	220784 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x408>
        220778:	e31c0020 	tst	ip, #32	; 0x20
        22077c:	03a01001 	moveq	r1, #1	; 0x1
        220780:	13a03001 	movne	r3, #1	; 0x1
        220784:	e2800001 	add	r0, r0, #1	; 0x1
        220788:	e1a00800 	mov	r0, r0, lsl #16
        22078c:	e1a00840 	mov	r0, r0, asr #16
        220790:	e7d4c000 	ldrb	ip, [r4, r0]
        220794:	e33c0000 	teq	ip, #0	; 0x0
        220798:	1afffff1 	bne	220764 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x3e8>
        22079c:	e3310000 	teq	r1, #0	; 0x0
        2207a0:	03320000 	teqeq	r2, #0	; 0x0
        2207a4:	03330000 	teqeq	r3, #0	; 0x0
        2207a8:	0a0000a1 	beq	220a34 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6b8>
        2207ac:	e3a00002 	mov	r0, #2	; 0x2
        2207b0:	e5c60001 	strb	r0, [r6, #1]
        2207b4:	e3a08000 	mov	r8, #0	; 0x0
        2207b8:	e5c68000 	strb	r8, [r6]
        2207bc:	e3310000 	teq	r1, #0	; 0x0
        2207c0:	e5960000 	ldr	r0, [r6]
        2207c4:	e1a00820 	mov	r0, r0, lsr #16
        2207c8:	03800020 	orreq	r0, r0, #32	; 0x20
        2207cc:	13800030 	orrne	r0, r0, #48	; 0x30
        2207d0:	e5c60001 	strb	r0, [r6, #1]
        2207d4:	e1a00440 	mov	r0, r0, asr #8
        2207d8:	e5c60000 	strb	r0, [r6]
        2207dc:	e3320000 	teq	r2, #0	; 0x0
        2207e0:	0a000091 	beq	220a2c <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6b0>
        2207e4:	e5960000 	ldr	r0, [r6]
        2207e8:	e1a00820 	mov	r0, r0, lsr #16
        2207ec:	e3800902 	orr	r0, r0, #32768	; 0x8000
        2207f0:	e5c60001 	strb	r0, [r6, #1]
        2207f4:	e1a00440 	mov	r0, r0, asr #8
        2207f8:	e5c60000 	strb	r0, [r6]
        2207fc:	ea00008a 	b	220a2c <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6b0>
        220800:	e3540009 	cmp	r4, #9	; 0x9
        220804:	8a00008a 	bhi	220a34 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6b8>
        220808:	e596000c 	ldr	r0, [r6, #12]
        22080c:	e1a00820 	mov	r0, r0, lsr #16
        220810:	e1840800 	orr	r0, r4, r0, lsl #16
        220814:	e5a6000c 	str	r0, [r6, #12]!
        220818:	ea000083 	b	220a2c <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6b0>
        22081c:	e1a01006 	mov	r1, r6
        220820:	e1a00004 	mov	r0, r4
        220824:	eb640a5c 	bl	1b2319c <$SetStrXrRC(unsigned long, STRXRPARAM *)>
        220828:	ea00007f 	b	220a2c <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6b0>
        22082c:	e3a00002 	mov	r0, #2	; 0x2
        220830:	ea000002 	b	220840 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x4c4>
        220834:	e3a00008 	mov	r0, #8	; 0x8
        220838:	ea000000 	b	220840 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x4c4>
        22083c:	e3a00004 	mov	r0, #4	; 0x4
        220840:	e5c60041 	strb	r0, [r6, #65]
        220844:	e3a08000 	mov	r8, #0	; 0x0
        220848:	e5c68040 	strb	r8, [r6, #64]
        22084c:	ea000037 	b	220930 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x5b4>
        220850:	e3a00004 	mov	r0, #4	; 0x4
        220854:	e5c60041 	strb	r0, [r6, #65]
        220858:	e3a08000 	mov	r8, #0	; 0x0
        22085c:	e5c68040 	strb	r8, [r6, #64]
        220860:	e3a00000 	mov	r0, #0	; 0x0
        220864:	e5c60001 	strb	r0, [r6, #1]
        220868:	e3a00008 	mov	r0, #8	; 0x8
        22086c:	e5c60000 	strb	r0, [r6]
        220870:	ea00002e 	b	220930 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x5b4>
        220874:	e5940008 	ldr	r0, [r4, #8]	; fField8
        220878:	e5941010 	ldr	r1, [r4, #16]	; fField16
        22087c:	e0400001 	sub	r0, r0, r1
        220880:	e5c60051 	strb	r0, [r6, #81]
        220884:	e1a00440 	mov	r0, r0, asr #8
        220888:	e5c60050 	strb	r0, [r6, #80]
        22088c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        220890:	e5c60053 	strb	r0, [r6, #83]
        220894:	e1a00440 	mov	r0, r0, asr #8
        220898:	e5c60052 	strb	r0, [r6, #82]
        22089c:	e594001c 	ldr	r0, [r4, #28]
        2208a0:	e5c60055 	strb	r0, [r6, #85]
        2208a4:	e1a00440 	mov	r0, r0, asr #8
        2208a8:	e5c60054 	strb	r0, [r6, #84]
        2208ac:	e5b40020 	ldr	r0, [r4, #32]!	; fField32
        2208b0:	e5c60057 	strb	r0, [r6, #87]
        2208b4:	e1a00440 	mov	r0, r0, asr #8
        2208b8:	e5c60056 	strb	r0, [r6, #86]
        2208bc:	ea00005a 	b	220a2c <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6b0>
        2208c0:	e3340000 	teq	r4, #0	; 0x0
        2208c4:	03a08000 	moveq	r8, #0	; 0x0
        2208c8:	0586804c 	streq	r8, [r6, #76]
        2208cc:	13a07001 	movne	r7, #1	; 0x1
        2208d0:	1586704c 	strne	r7, [r6, #76]
        2208d4:	e5960008 	ldr	r0, [r6, #8]	; fField8
        2208d8:	e1a01006 	mov	r1, r6
        2208dc:	eb640a2d 	bl	1b23198 <$SetStrXrFieldType(unsigned long, STRXRPARAM *)>
        2208e0:	ea000051 	b	220a2c <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6b0>
        2208e4:	e3a08000 	mov	r8, #0	; 0x0
        2208e8:	e5c68043 	strb	r8, [r6, #67]
        2208ec:	e5c68042 	strb	r8, [r6, #66]
        2208f0:	e3140001 	tst	r4, #1	; 0x1
        2208f4:	0a000005 	beq	220910 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x594>
        2208f8:	e5960042 	ldr	r0, [r6, #66]
        2208fc:	e1a00820 	mov	r0, r0, lsr #16
        220900:	e3800001 	orr	r0, r0, #1	; 0x1
        220904:	e5c60043 	strb	r0, [r6, #67]
        220908:	e1a00440 	mov	r0, r0, asr #8
        22090c:	e5c60042 	strb	r0, [r6, #66]
        220910:	e3140008 	tst	r4, #8	; 0x8
        220914:	0a000005 	beq	220930 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x5b4>
        220918:	e5960042 	ldr	r0, [r6, #66]
        22091c:	e1a00820 	mov	r0, r0, lsr #16
        220920:	e3800008 	orr	r0, r0, #8	; 0x8
        220924:	e5c60043 	strb	r0, [r6, #67]
        220928:	e1a00440 	mov	r0, r0, asr #8
        22092c:	e5c60042 	strb	r0, [r6, #66]
        220930:	e5960008 	ldr	r0, [r6, #8]	; fField8
        220934:	e1a01006 	mov	r1, r6
        220938:	eb640a16 	bl	1b23198 <$SetStrXrFieldType(unsigned long, STRXRPARAM *)>
        22093c:	e1a07000 	mov	r7, r0
        220940:	ea00003c 	b	220a38 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6bc>
        220944:	e154000a 	cmp	r4, sl
        220948:	0a000037 	beq	220a2c <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6b0>
        22094c:	ca00001f 	bgt	2209d0 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x654>
        220950:	e254c802 	subs	ip, r4, #131072	; 0x20000
        220954:	a35c0006 	cmpge	ip, #6	; 0x6
        220958:	0a000033 	beq	220a2c <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6b0>
        22095c:	ca00000b 	bgt	220990 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x614>
        220960:	e3540002 	cmp	r4, #2	; 0x2
        220964:	0a000030 	beq	220a2c <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6b0>
        220968:	ca000003 	bgt	22097c <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x600>
        22096c:	e3340000 	teq	r4, #0	; 0x0
        220970:	13340001 	teqne	r4, #1	; 0x1
        220974:	1a00002e 	bne	220a34 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6b8>
        220978:	ea00002b 	b	220a2c <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6b0>
        22097c:	e3340003 	teq	r4, #3	; 0x3
        220980:	1244c802 	subne	ip, r4, #131072	; 0x20000
        220984:	133c0005 	teqne	ip, #5	; 0x5
        220988:	1a000029 	bne	220a34 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6b8>
        22098c:	ea000026 	b	220a2c <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6b0>
        220990:	e254c802 	subs	ip, r4, #131072	; 0x20000
        220994:	a35c000d 	cmpge	ip, #13	; 0xd
        220998:	0a000023 	beq	220a2c <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6b0>
        22099c:	ca000005 	bgt	2209b8 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x63c>
        2209a0:	e244c802 	sub	ip, r4, #131072	; 0x20000
        2209a4:	e33c000b 	teq	ip, #11	; 0xb
        2209a8:	1244c802 	subne	ip, r4, #131072	; 0x20000
        2209ac:	133c000c 	teqne	ip, #12	; 0xc
        2209b0:	1a00001f 	bne	220a34 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6b8>
        2209b4:	ea00001c 	b	220a2c <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6b0>
        2209b8:	e244c802 	sub	ip, r4, #131072	; 0x20000
        2209bc:	e33c000e 	teq	ip, #14	; 0xe
        2209c0:	1244c802 	subne	ip, r4, #131072	; 0x20000
        2209c4:	133c0014 	teqne	ip, #20	; 0x14
        2209c8:	1a000019 	bne	220a34 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6b8>
        2209cc:	ea000016 	b	220a2c <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6b0>
        2209d0:	e1540009 	cmp	r4, r9
        2209d4:	0a000014 	beq	220a2c <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6b0>
        2209d8:	ca00000a 	bgt	220a08 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x68c>
        2209dc:	e1540008 	cmp	r4, r8
        2209e0:	0a000011 	beq	220a2c <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6b0>
        2209e4:	ca000003 	bgt	2209f8 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x67c>
        2209e8:	e134000e 	teq	r4, lr
        2209ec:	11340003 	teqne	r4, r3
        2209f0:	1a00000f 	bne	220a34 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6b8>
        2209f4:	ea00000c 	b	220a2c <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6b0>
        2209f8:	e1340002 	teq	r4, r2
        2209fc:	11340000 	teqne	r4, r0
        220a00:	1a00000b 	bne	220a34 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6b8>
        220a04:	ea000008 	b	220a2c <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6b0>
        220a08:	e2440043 	sub	r0, r4, #67	; 0x43
        220a0c:	e2400802 	sub	r0, r0, #131072	; 0x20000
        220a10:	e3500004 	cmp	r0, #4	; 0x4
        220a14:	908ff100 	addls	pc, pc, r0, lsl #2
        220a18:	ea000005 	b	220a34 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6b8>
        220a1c:	ea000002 	b	220a2c <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6b0>
        220a20:	ea000001 	b	220a2c <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6b0>
        220a24:	ea000000 	b	220a2c <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6b0>
        220a28:	eaffffff 	b	220a2c <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6b0>
        220a2c:	e3a07000 	mov	r7, #0	; 0x0
        220a30:	ea000000 	b	220a38 <TStrXrDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6bc>
        220a34:	e3e07000 	mvn	r7, #0	; 0x0
        220a38:	e3350000 	teq	r5, #0	; 0x0
        220a3c:	11a00005 	movne	r0, r5
        220a40:	1b653732 	blne	1b6e710 <$UnlockHandle(char **)>
        220a44:	e1a00007 	mov	r0, r7
        220a48:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TStrXrDomain::SetParameters(char **)
 * Address: 00220a4c
 */
TStrXrDomain::SetParameters(char **) {
    /*
        220a4c:	e1a0c00d 	mov	ip, sp
        220a50:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        220a54:	e24cb004 	sub	fp, ip, #4	; 0x4
        220a58:	e24ddf43 	sub	sp, sp, #268	; 0x10c
        220a5c:	e591e000 	ldr	lr, [r1]
        220a60:	e59e1000 	ldr	r1, [lr]
        220a64:	e1a01821 	mov	r1, r1, lsr #16
        220a68:	e5c01025 	strb	r1, [r0, #37]	; fField37
        220a6c:	e1a01441 	mov	r1, r1, asr #8
        220a70:	e5c01024 	strb	r1, [r0, #36]	; fField36
        220a74:	e59e1002 	ldr	r1, [lr, #2]
        220a78:	e1a01821 	mov	r1, r1, lsr #16
        220a7c:	e5c01027 	strb	r1, [r0, #39]	; fField39
        220a80:	e1a01441 	mov	r1, r1, asr #8
        220a84:	e5c01026 	strb	r1, [r0, #38]	; fField38
        220a88:	e59e1004 	ldr	r1, [lr, #4]	; fField4
        220a8c:	e5801028 	str	r1, [r0, #40]	; fField40
        220a90:	e59e1008 	ldr	r1, [lr, #8]	; fField8
        220a94:	e5801030 	str	r1, [r0, #48]	; fField48
        220a98:	e59e100c 	ldr	r1, [lr, #12]
        220a9c:	e5801034 	str	r1, [r0, #52]	; fField52
        220aa0:	e2804038 	add	r4, r0, #56	; 0x38
        220aa4:	e28e5010 	add	r5, lr, #16	; 0x10
        220aa8:	e8b5100e 	ldmia	r5!, {r1, r2, r3, ip}
        220aac:	e8a4100e 	stmia	r4!, {r1, r2, r3, ip}
        220ab0:	e895100c 	ldmia	r5, {r2, r3, ip}
        220ab4:	e884100c 	stmia	r4, {r2, r3, ip}
        220ab8:	e2801054 	add	r1, r0, #84	; 0x54
        220abc:	e28e202c 	add	r2, lr, #44	; 0x2c
        220ac0:	e8b21008 	ldmia	r2!, {r3, ip}
        220ac4:	e8a11008 	stmia	r1!, {r3, ip}
        220ac8:	e8921008 	ldmia	r2, {r3, ip}
        220acc:	e8811008 	stmia	r1, {r3, ip}
        220ad0:	e2801064 	add	r1, r0, #100	; 0x64
        220ad4:	e59e203c 	ldr	r2, [lr, #60]
        220ad8:	e5812000 	str	r2, [r1]
        220adc:	e59e1040 	ldr	r1, [lr, #64]
        220ae0:	e1a01821 	mov	r1, r1, lsr #16
        220ae4:	e5c01069 	strb	r1, [r0, #105]	; fField105
        220ae8:	e1a01441 	mov	r1, r1, asr #8
        220aec:	e5c01068 	strb	r1, [r0, #104]	; fField104
        220af0:	e59e1042 	ldr	r1, [lr, #66]
        220af4:	e1a01821 	mov	r1, r1, lsr #16
        220af8:	e5c0106b 	strb	r1, [r0, #107]	; fField107
        220afc:	e1a01441 	mov	r1, r1, asr #8
        220b00:	e5c0106a 	strb	r1, [r0, #106]	; fField106
        220b04:	e59e1044 	ldr	r1, [lr, #68]
        220b08:	e1a01821 	mov	r1, r1, lsr #16
        220b0c:	e5c0106d 	strb	r1, [r0, #109]	; fField109
        220b10:	e1a01441 	mov	r1, r1, asr #8
        220b14:	e5c0106c 	strb	r1, [r0, #108]	; fField108
        220b18:	e59e1048 	ldr	r1, [lr, #72]
        220b1c:	e5801070 	str	r1, [r0, #112]	; fField112
        220b20:	e59e104c 	ldr	r1, [lr, #76]
        220b24:	e5801074 	str	r1, [r0, #116]	; fField116
        220b28:	e59e1050 	ldr	r1, [lr, #80]
        220b2c:	e1a01821 	mov	r1, r1, lsr #16
        220b30:	e5c01079 	strb	r1, [r0, #121]	; fField121
        220b34:	e1a01441 	mov	r1, r1, asr #8
        220b38:	e5c01078 	strb	r1, [r0, #120]	; fField120
        220b3c:	e59e1052 	ldr	r1, [lr, #82]
        220b40:	e1a01821 	mov	r1, r1, lsr #16
        220b44:	e5c0107b 	strb	r1, [r0, #123]	; fField123
        220b48:	e1a01441 	mov	r1, r1, asr #8
        220b4c:	e5c0107a 	strb	r1, [r0, #122]	; fField122
        220b50:	e59e1054 	ldr	r1, [lr, #84]
        220b54:	e1a01821 	mov	r1, r1, lsr #16
        220b58:	e5c0107d 	strb	r1, [r0, #125]	; fField125
        220b5c:	e1a01441 	mov	r1, r1, asr #8
        220b60:	e5c0107c 	strb	r1, [r0, #124]	; fField124
        220b64:	e59e1056 	ldr	r1, [lr, #86]
        220b68:	e1a01821 	mov	r1, r1, lsr #16
        220b6c:	e5c0107f 	strb	r1, [r0, #127]	; fField127
        220b70:	e1a01441 	mov	r1, r1, asr #8
        220b74:	e5c0107e 	strb	r1, [r0, #126]	; fField126
        220b78:	e59e0042 	ldr	r0, [lr, #66]
        220b7c:	e1a00820 	mov	r0, r0, lsr #16
        220b80:	e5cd0007 	strb	r0, [sp, #7]
        220b84:	e1a00440 	mov	r0, r0, asr #8
        220b88:	e5cd0006 	strb	r0, [sp, #6]
        220b8c:	e1a0000d 	mov	r0, sp
        220b90:	e3a01000 	mov	r1, #0	; 0x0
        220b94:	eb644767 	bl	1b32938 <$GCSetUpRecTableAndCharset(rc_type *, unsigned int)>
        220b98:	e3a00001 	mov	r0, #1	; 0x1
        220b9c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TStrXrDomain::ClassifyStrXr(TStrXrUnit *)
 * Address: 00220ba0
 */
TStrXrDomain::ClassifyStrXr(TStrXrUnit *) {
    /*
        220ba0:	e1a0c00d 	mov	ip, sp
        220ba4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        220ba8:	e24cb004 	sub	fp, ip, #4	; 0x4
        220bac:	e5902034 	ldr	r2, [r0, #52]	; fField52
        220bb0:	e2123801 	ands	r3, r2, #65536	; 0x10000
        220bb4:	13a03001 	movne	r3, #1	; 0x1
        220bb8:	e3a02000 	mov	r2, #0	; 0x0
        220bbc:	e92d000c 	stmdb	sp!, {r2, r3}
        220bc0:	e3a03001 	mov	r3, #1	; 0x1
        220bc4:	eb63f4ba 	bl	1b1deb4 <$CallGroupAndClassify__FP12TStrXrDomainP10TStrXrUnitP11TStrokeUnitUiN24>
        220bc8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

