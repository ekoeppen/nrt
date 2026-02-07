#include "include/TRosRecognizer.h"

/**
 * Symbol: Sizeof__14TRosRecognizerSFv
 * Address: 001b5bac
 */
void TRosRecognizer::Sizeof() {
    /*
        1b5bac:	e3a00f59 	mov	r0, #356	; 0x164
        1b5bb0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRosRecognizer::AllocateAndConvertStrokeForRosetta(TStroke *, FPoint **)
 * Address: 001b5bb8
 */
TRosRecognizer::AllocateAndConvertStrokeForRosetta(TStroke *, FPoint **) {
    /*
        1b5bb8:	e1a0c00d 	mov	ip, sp
        1b5bbc:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1b5bc0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b5bc4:	e1a04000 	mov	r4, r0
        1b5bc8:	e1a05001 	mov	r5, r1
        1b5bcc:	e1a06002 	mov	r6, r2
        1b5bd0:	eb695eb2 	bl	1c0d6a0 <TWRecognizer::$StrokeSize(TStroke *)>
        1b5bd4:	e1a08000 	mov	r8, r0
        1b5bd8:	e1a00180 	mov	r0, r0, lsl #3
        1b5bdc:	eb68b157 	bl	1be2140 <$NewPtr>
        1b5be0:	e1b07000 	movs	r7, r0
        1b5be4:	e5860000 	str	r0, [r6]
        1b5be8:	1a000004 	bne	1b5c00 <TRosRecognizer::AllocateAndConvertStrokeForRosetta(TStroke *, FPoint **)+0x48>
        1b5bec:	e59f0068 	ldr	r0, [pc, #68]	; 1b5c5c <TRosRecognizer::AllocateAndConvertStrokeForRosetta(TStroke *, FPoint **)+0xa4>	; fField68
        1b5bf0:	e5900000 	ldr	r0, [r0]
        1b5bf4:	e3a02000 	mov	r2, #0	; 0x0
        1b5bf8:	e3a01000 	mov	r1, #0	; 0x0
        1b5bfc:	eb68b566 	bl	1be319c <$Throw>
        1b5c00:	e1a01005 	mov	r1, r5
        1b5c04:	e1a00004 	mov	r0, r4
        1b5c08:	e3a02000 	mov	r2, #0	; 0x0
        1b5c0c:	eb695a8e 	bl	1c0c64c <TWRecognizer::$GetSamplePtAddress(TStroke *, unsigned long)>
        1b5c10:	e1a05000 	mov	r5, r0
        1b5c14:	e3a06000 	mov	r6, #0	; 0x0
        1b5c18:	e3580000 	cmp	r8, #0	; 0x0
        1b5c1c:	9a00000c 	bls	1b5c54 <TRosRecognizer::AllocateAndConvertStrokeForRosetta(TStroke *, FPoint **)+0x9c>
        1b5c20:	e1a01005 	mov	r1, r5
        1b5c24:	e1a00004 	mov	r0, r4
        1b5c28:	eb695e99 	bl	1c0d694 <TWRecognizer::$StrokeSampleX(WrecSamplePt *)>
        1b5c2c:	e1a01005 	mov	r1, r5
        1b5c30:	e5870000 	str	r0, [r7]
        1b5c34:	e1a00004 	mov	r0, r4
        1b5c38:	eb695e96 	bl	1c0d698 <TWRecognizer::$StrokeSampleY(WrecSamplePt *)>
        1b5c3c:	e2855004 	add	r5, r5, #4	; 0x4
        1b5c40:	e2866001 	add	r6, r6, #1	; 0x1
        1b5c44:	e1560008 	cmp	r6, r8
        1b5c48:	e5a70004 	str	r0, [r7, #4]!	; fField4
        1b5c4c:	e2877004 	add	r7, r7, #4	; 0x4
        1b5c50:	3afffff2 	bcc	1b5c20 <TRosRecognizer::AllocateAndConvertStrokeForRosetta(TStroke *, FPoint **)+0x68>
        1b5c54:	e1a00008 	mov	r0, r8
        1b5c58:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1b5c5c:	003712b4 	ldreqh	r1, [r7], -r4
    */
}

/**
 * Symbol: TRosRecognizer::Classify(TWRecUnit *)
 * Address: 001b5c60
 */
TRosRecognizer::Classify(TWRecUnit *) {
    /*
        1b5c60:	e1a0c00d 	mov	ip, sp
        1b5c64:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1b5c68:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b5c6c:	eb695a7f 	bl	1c0c670 <TWRecognizer::$InterpretationCount(TWRecUnit *)>
        1b5c70:	e3500000 	cmp	r0, #0	; 0x0
        1b5c74:	891ba810 	ldmhidb	fp, {r4, fp, sp, pc}
        1b5c78:	e3a00000 	mov	r0, #0	; 0x0
        1b5c7c:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        1b5c80:	e52d006c 	str	r0, [sp, -#108]!
        1b5c84:	e28d0008 	add	r0, sp, #8	; 0x8
        1b5c88:	eb67f339 	bl	1bb2974 <$setjmp>
        1b5c8c:	e3300000 	teq	r0, #0	; 0x0
        1b5c90:	e1a0000d 	mov	r0, sp
        1b5c94:	1a000009 	bne	1b5cc0 <TRosRecognizer::Classify(TWRecUnit *)+0x60>
        1b5c98:	eb68a8f7 	bl	1be007c <$AddExceptionHandler>
        1b5c9c:	e3a03000 	mov	r3, #0	; 0x0
        1b5ca0:	e3a02000 	mov	r2, #0	; 0x0
        1b5ca4:	e3a01000 	mov	r1, #0	; 0x0
        1b5ca8:	e3a00000 	mov	r0, #0	; 0x0
        1b5cac:	eb66f31f 	bl	1b72930 <$RosettaClassify>
        1b5cb0:	e58d006c 	str	r0, [sp, #108]
        1b5cb4:	e1a0000d 	mov	r0, sp
        1b5cb8:	eb68acfe 	bl	1be10b8 <$ExitHandler>
        1b5cbc:	ea000000 	b	1b5cc4 <TRosRecognizer::Classify(TWRecUnit *)+0x64>
        1b5cc0:	eb68b123 	bl	1be2154 <$NextHandler>
        1b5cc4:	e5bd006c 	ldr	r0, [sp, #108]!
        1b5cc8:	e59f4038 	ldr	r4, [pc, #38]	; 1b5d08 <TRosRecognizer::Classify(TWRecUnit *)+0xa8>
        1b5ccc:	e3300000 	teq	r0, #0	; 0x0
        1b5cd0:	0a000003 	beq	1b5ce4 <TRosRecognizer::Classify(TWRecUnit *)+0x84>
        1b5cd4:	e3a02000 	mov	r2, #0	; 0x0
        1b5cd8:	e3a01000 	mov	r1, #0	; 0x0
        1b5cdc:	e5940000 	ldr	r0, [r4]
        1b5ce0:	eb68b52d 	bl	1be319c <$Throw>
        1b5ce4:	eb66f315 	bl	1b72940 <$RosettaInitializeValues>
        1b5ce8:	e58d0000 	str	r0, [sp]
        1b5cec:	e3300000 	teq	r0, #0	; 0x0
        1b5cf0:	0a000003 	beq	1b5d04 <TRosRecognizer::Classify(TWRecUnit *)+0xa4>
        1b5cf4:	e3a02000 	mov	r2, #0	; 0x0
        1b5cf8:	e3a01000 	mov	r1, #0	; 0x0
        1b5cfc:	e5940000 	ldr	r0, [r4]
        1b5d00:	eb68b525 	bl	1be319c <$Throw>
        1b5d04:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1b5d08:	003712b4 	ldreqh	r1, [r7], -r4
    */
}

/**
 * Symbol: TRosRecognizer::Reclassify(TWRecUnit *)
 * Address: 001b5d0c
 */
TRosRecognizer::Reclassify(TWRecUnit *) {
    /*
        1b5d0c:	e1a0c00d 	mov	ip, sp
        1b5d10:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1b5d14:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b5d18:	e1a04000 	mov	r4, r0
        1b5d1c:	e1a05001 	mov	r5, r1
        1b5d20:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b5d24:	eb66f305 	bl	1b72940 <$RosettaInitializeValues>
        1b5d28:	e59f10dc 	ldr	r1, [pc, #dc]	; 1b5e0c <TRosRecognizer::Reclassify(TWRecUnit *)+0x100>
        1b5d2c:	e3300000 	teq	r0, #0	; 0x0
        1b5d30:	e58d1004 	str	r1, [sp, #4]	; fField4
        1b5d34:	0a000004 	beq	1b5d4c <TRosRecognizer::Reclassify(TWRecUnit *)+0x40>
        1b5d38:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1b5d3c:	e5900000 	ldr	r0, [r0]
        1b5d40:	e3a02000 	mov	r2, #0	; 0x0
        1b5d44:	e3a01000 	mov	r1, #0	; 0x0
        1b5d48:	eb68b513 	bl	1be319c <$Throw>
        1b5d4c:	e5845014 	str	r5, [r4, #20]	; fField20
        1b5d50:	e1a01005 	mov	r1, r5
        1b5d54:	e1a00004 	mov	r0, r4
        1b5d58:	eb695e52 	bl	1c0d6a8 <TWRecognizer::$SubCount(TWRecUnit *)>
        1b5d5c:	e1a09000 	mov	r9, r0
        1b5d60:	e3a07000 	mov	r7, #0	; 0x0
        1b5d64:	e3500000 	cmp	r0, #0	; 0x0
        1b5d68:	9a000021 	bls	1b5df4 <TRosRecognizer::Reclassify(TWRecUnit *)+0xe8>
        1b5d6c:	e1a02007 	mov	r2, r7
        1b5d70:	e1a01005 	mov	r1, r5
        1b5d74:	e1a00004 	mov	r0, r4
        1b5d78:	eb695a3a 	bl	1c0c668 <TWRecognizer::$GetSub(TWRecUnit *, unsigned long)>
        1b5d7c:	e1a08000 	mov	r8, r0
        1b5d80:	e1a0200d 	mov	r2, sp
        1b5d84:	e1a01000 	mov	r1, r0
        1b5d88:	e1a00004 	mov	r0, r4
        1b5d8c:	eb670377 	bl	1b76b70 <TRosRecognizer::$AllocateAndConvertStrokeForRosetta(TStrokeUnit *, FPoint **)>
        1b5d90:	e1a0a000 	mov	sl, r0
        1b5d94:	e1a01008 	mov	r1, r8
        1b5d98:	e1a00004 	mov	r0, r4
        1b5d9c:	eb695a22 	bl	1c0c62c <TWRecognizer::$GetEndTime(TStrokeUnit *)>
        1b5da0:	e1a06000 	mov	r6, r0
        1b5da4:	e1a01008 	mov	r1, r8
        1b5da8:	e1a00004 	mov	r0, r4
        1b5dac:	eb695a28 	bl	1c0c654 <TWRecognizer::$GetStartTime(TStrokeUnit *)>
        1b5db0:	e1a02000 	mov	r2, r0
        1b5db4:	e1a0000a 	mov	r0, sl
        1b5db8:	e1a03006 	mov	r3, r6
        1b5dbc:	e59d1000 	ldr	r1, [sp]
        1b5dc0:	eb66f2da 	bl	1b72930 <$RosettaClassify>
        1b5dc4:	e3300000 	teq	r0, #0	; 0x0
        1b5dc8:	0a000006 	beq	1b5de8 <TRosRecognizer::Reclassify(TWRecUnit *)+0xdc>
        1b5dcc:	e3a00000 	mov	r0, #0	; 0x0
        1b5dd0:	e5840014 	str	r0, [r4, #20]	; fField20
        1b5dd4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1b5dd8:	e5900000 	ldr	r0, [r0]
        1b5ddc:	e3a02000 	mov	r2, #0	; 0x0
        1b5de0:	e3a01000 	mov	r1, #0	; 0x0
        1b5de4:	eb68b4ec 	bl	1be319c <$Throw>
        1b5de8:	e2877001 	add	r7, r7, #1	; 0x1
        1b5dec:	e1570009 	cmp	r7, r9
        1b5df0:	3affffdd 	bcc	1b5d6c <TRosRecognizer::Reclassify(TWRecUnit *)+0x60>
        1b5df4:	e1a01005 	mov	r1, r5
        1b5df8:	e1a00004 	mov	r0, r4
        1b5dfc:	eb670762 	bl	1b77b8c <TRosRecognizer::$Classify(TWRecUnit *)>
        1b5e00:	e3a00000 	mov	r0, #0	; 0x0
        1b5e04:	e5a40014 	str	r0, [r4, #20]!	; fField20
        1b5e08:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1b5e0c:	003712b4 	ldreqh	r1, [r7], -r4
    */
}

/**
 * Symbol: TRosRecognizer::GroupInkStroke(TStrokeUnit *, unsigned long, unsigned long, unsigned char)
 * Address: 001b5e10
 */
TRosRecognizer::GroupInkStroke(TStrokeUnit *, unsigned long, unsigned long, unsigned char) {
    /*
        1b5e10:	e1a0c00d 	mov	ip, sp
        1b5e14:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1b5e18:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b5e1c:	e1a04000 	mov	r4, r0
        1b5e20:	e1a05001 	mov	r5, r1
        1b5e24:	e1a07002 	mov	r7, r2
        1b5e28:	e1a06003 	mov	r6, r3
        1b5e2c:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        1b5e30:	e200a0ff 	and	sl, r0, #255	; 0xff
        1b5e34:	e24dd074 	sub	sp, sp, #116	; 0x74
        1b5e38:	e3a08000 	mov	r8, #0	; 0x0
        1b5e3c:	e28d1070 	add	r1, sp, #112	; 0x70
        1b5e40:	e1a00004 	mov	r0, r4
        1b5e44:	eb6959fe 	bl	1c0c644 <TWRecognizer::$GetPartialGroup(unsigned char *)>
        1b5e48:	e3a00000 	mov	r0, #0	; 0x0
        1b5e4c:	e52d006c 	str	r0, [sp, -#108]!
        1b5e50:	e28d0008 	add	r0, sp, #8	; 0x8
        1b5e54:	eb67f2c6 	bl	1bb2974 <$setjmp>
        1b5e58:	e3300000 	teq	r0, #0	; 0x0
        1b5e5c:	1a000068 	bne	1b6004 <TRosRecognizer::GroupInkStroke(TStrokeUnit *, unsigned long, unsigned long, unsigned char)+0x1f4>
        1b5e60:	e1a0000d 	mov	r0, sp
        1b5e64:	eb68a884 	bl	1be007c <$AddExceptionHandler>
        1b5e68:	e5dd00dc 	ldrb	r0, [sp, #220]
        1b5e6c:	e59f9170 	ldr	r9, [pc, #170]	; 1b5fe4 <TRosRecognizer::GroupInkStroke(TStrokeUnit *, unsigned long, unsigned long, unsigned char)+0x1d4>
        1b5e70:	e3300000 	teq	r0, #0	; 0x0
        1b5e74:	0a00000c 	beq	1b5eac <TRosRecognizer::GroupInkStroke(TStrokeUnit *, unsigned long, unsigned long, unsigned char)+0x9c>
        1b5e78:	e3a03000 	mov	r3, #0	; 0x0
        1b5e7c:	e3a02000 	mov	r2, #0	; 0x0
        1b5e80:	e3a01000 	mov	r1, #0	; 0x0
        1b5e84:	e3a00000 	mov	r0, #0	; 0x0
        1b5e88:	eb66f2a8 	bl	1b72930 <$RosettaClassify>
        1b5e8c:	e1b08000 	movs	r8, r0
        1b5e90:	e3a00000 	mov	r0, #0	; 0x0
        1b5e94:	e5840020 	str	r0, [r4, #32]	; fField32
        1b5e98:	0a000003 	beq	1b5eac <TRosRecognizer::GroupInkStroke(TStrokeUnit *, unsigned long, unsigned long, unsigned char)+0x9c>
        1b5e9c:	e3a02000 	mov	r2, #0	; 0x0
        1b5ea0:	e3a01000 	mov	r1, #0	; 0x0
        1b5ea4:	e5990000 	ldr	r0, [r9]
        1b5ea8:	eb68b4bb 	bl	1be319c <$Throw>
        1b5eac:	e5940020 	ldr	r0, [r4, #32]	; fField32
        1b5eb0:	e3300000 	teq	r0, #0	; 0x0
        1b5eb4:	1a000001 	bne	1b5ec0 <TRosRecognizer::GroupInkStroke(TStrokeUnit *, unsigned long, unsigned long, unsigned char)+0xb0>
        1b5eb8:	eb66f2a0 	bl	1b72940 <$RosettaInitializeValues>
        1b5ebc:	e1a08000 	mov	r8, r0
        1b5ec0:	e3380000 	teq	r8, #0	; 0x0
        1b5ec4:	0a000003 	beq	1b5ed8 <TRosRecognizer::GroupInkStroke(TStrokeUnit *, unsigned long, unsigned long, unsigned char)+0xc8>
        1b5ec8:	e3a02000 	mov	r2, #0	; 0x0
        1b5ecc:	e3a01000 	mov	r1, #0	; 0x0
        1b5ed0:	e5990000 	ldr	r0, [r9]
        1b5ed4:	eb68b4b0 	bl	1be319c <$Throw>
        1b5ed8:	e3a00001 	mov	r0, #1	; 0x1
        1b5edc:	eb000965 	bl	1b8478 <RosettaDontClassify>
        1b5ee0:	e28d0070 	add	r0, sp, #112	; 0x70
        1b5ee4:	e58d006c 	str	r0, [sp, #108]
        1b5ee8:	e28d106c 	add	r1, sp, #108	; 0x6c
        1b5eec:	e1a00004 	mov	r0, r4
        1b5ef0:	eb670321 	bl	1b76b7c <TRosRecognizer::$AreaInfoFillDefaults(char **)>
        1b5ef4:	e2671009 	rsb	r1, r7, #9	; 0x9
        1b5ef8:	e59d006c 	ldr	r0, [sp, #108]
        1b5efc:	e5c01065 	strb	r1, [r0, #101]	; fField101
        1b5f00:	e59d006c 	ldr	r0, [sp, #108]
        1b5f04:	eb66f28f 	bl	1b72948 <$RosettaSetArea>
        1b5f08:	e3350000 	teq	r5, #0	; 0x0
        1b5f0c:	0a00001d 	beq	1b5f88 <TRosRecognizer::GroupInkStroke(TStrokeUnit *, unsigned long, unsigned long, unsigned char)+0x178>
        1b5f10:	e3a00001 	mov	r0, #1	; 0x1
        1b5f14:	e5c4001c 	strb	r0, [r4, #28]	; fField28
        1b5f18:	e28d20d8 	add	r2, sp, #216	; 0xd8
        1b5f1c:	e1a01005 	mov	r1, r5
        1b5f20:	e1a00004 	mov	r0, r4
        1b5f24:	eb670311 	bl	1b76b70 <TRosRecognizer::$AllocateAndConvertStrokeForRosetta(TStrokeUnit *, FPoint **)>
        1b5f28:	e1a08000 	mov	r8, r0
        1b5f2c:	e1a01005 	mov	r1, r5
        1b5f30:	e1a00004 	mov	r0, r4
        1b5f34:	eb6959bc 	bl	1c0c62c <TWRecognizer::$GetEndTime(TStrokeUnit *)>
        1b5f38:	e1a07000 	mov	r7, r0
        1b5f3c:	e1a01005 	mov	r1, r5
        1b5f40:	e1a00004 	mov	r0, r4
        1b5f44:	eb6959c2 	bl	1c0c654 <TWRecognizer::$GetStartTime(TStrokeUnit *)>
        1b5f48:	e1a02000 	mov	r2, r0
        1b5f4c:	e1a00008 	mov	r0, r8
        1b5f50:	e1a03007 	mov	r3, r7
        1b5f54:	e59d10d8 	ldr	r1, [sp, #216]
        1b5f58:	eb66f274 	bl	1b72930 <$RosettaClassify>
        1b5f5c:	e3300000 	teq	r0, #0	; 0x0
        1b5f60:	0a000003 	beq	1b5f74 <TRosRecognizer::GroupInkStroke(TStrokeUnit *, unsigned long, unsigned long, unsigned char)+0x164>
        1b5f64:	e3a02000 	mov	r2, #0	; 0x0
        1b5f68:	e3a01000 	mov	r1, #0	; 0x0
        1b5f6c:	e5990000 	ldr	r0, [r9]
        1b5f70:	eb68b489 	bl	1be319c <$Throw>
        1b5f74:	e5941020 	ldr	r1, [r4, #32]	; fField32
        1b5f78:	e2810001 	add	r0, r1, #1	; 0x1
        1b5f7c:	e5840020 	str	r0, [r4, #32]	; fField32
        1b5f80:	e0840101 	add	r0, r4, r1, lsl #2
        1b5f84:	e5a05024 	str	r5, [r0, #36]!	; fField36
        1b5f88:	e5d4001c 	ldrb	r0, [r4, #28]	; fField28
        1b5f8c:	e3300000 	teq	r0, #0	; 0x0
        1b5f90:	0a000016 	beq	1b5ff0 <TRosRecognizer::GroupInkStroke(TStrokeUnit *, unsigned long, unsigned long, unsigned char)+0x1e0>
        1b5f94:	e33a0000 	teq	sl, #0	; 0x0
        1b5f98:	1a000003 	bne	1b5fac <TRosRecognizer::GroupInkStroke(TStrokeUnit *, unsigned long, unsigned long, unsigned char)+0x19c>
        1b5f9c:	e5941020 	ldr	r1, [r4, #32]	; fField32
        1b5fa0:	e3510050 	cmp	r1, #80	; 0x50
        1b5fa4:	31510006 	cmpcc	r1, r6
        1b5fa8:	3a00000e 	bcc	1b5fe8 <TRosRecognizer::GroupInkStroke(TStrokeUnit *, unsigned long, unsigned long, unsigned char)+0x1d8>
        1b5fac:	e3a03000 	mov	r3, #0	; 0x0
        1b5fb0:	e3a02000 	mov	r2, #0	; 0x0
        1b5fb4:	e3a01000 	mov	r1, #0	; 0x0
        1b5fb8:	e3a00000 	mov	r0, #0	; 0x0
        1b5fbc:	eb66f25b 	bl	1b72930 <$RosettaClassify>
        1b5fc0:	e3300000 	teq	r0, #0	; 0x0
        1b5fc4:	0a000003 	beq	1b5fd8 <TRosRecognizer::GroupInkStroke(TStrokeUnit *, unsigned long, unsigned long, unsigned char)+0x1c8>
        1b5fc8:	e3a02000 	mov	r2, #0	; 0x0
        1b5fcc:	e3a01000 	mov	r1, #0	; 0x0
        1b5fd0:	e5990000 	ldr	r0, [r9]
        1b5fd4:	eb68b470 	bl	1be319c <$Throw>
        1b5fd8:	e3a00000 	mov	r0, #0	; 0x0
        1b5fdc:	e5c4001c 	strb	r0, [r4, #28]	; fField28
        1b5fe0:	ea000002 	b	1b5ff0 <TRosRecognizer::GroupInkStroke(TStrokeUnit *, unsigned long, unsigned long, unsigned char)+0x1e0>
        1b5fe4:	003712b4 	ldreqh	r1, [r7], -r4
        1b5fe8:	e3300000 	teq	r0, #0	; 0x0
        1b5fec:	1a000001 	bne	1b5ff8 <TRosRecognizer::GroupInkStroke(TStrokeUnit *, unsigned long, unsigned long, unsigned char)+0x1e8>
        1b5ff0:	e3a00000 	mov	r0, #0	; 0x0
        1b5ff4:	e5a40020 	str	r0, [r4, #32]!	; fField32
        1b5ff8:	e3a00000 	mov	r0, #0	; 0x0
        1b5ffc:	eb00091d 	bl	1b8478 <RosettaDontClassify>
        1b6000:	ea000004 	b	1b6018 <TRosRecognizer::GroupInkStroke(TStrokeUnit *, unsigned long, unsigned long, unsigned char)+0x208>
        1b6004:	e3a00000 	mov	r0, #0	; 0x0
        1b6008:	e5a40020 	str	r0, [r4, #32]!	; fField32
        1b600c:	eb000919 	bl	1b8478 <RosettaDontClassify>
        1b6010:	e1a0000d 	mov	r0, sp
        1b6014:	eb68b04e 	bl	1be2154 <$NextHandler>
        1b6018:	e1a0000d 	mov	r0, sp
        1b601c:	eb68ac25 	bl	1be10b8 <$ExitHandler>
        1b6020:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TRosRecognizer::FindBaseline(TStroke **, Point *)
 * Address: 001b6024
 */
TRosRecognizer::FindBaseline(TStroke **, Point *) {
    /*
        1b6024:	e1a0c00d 	mov	ip, sp
        1b6028:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1b602c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b6030:	e1a05000 	mov	r5, r0
        1b6034:	e1a04002 	mov	r4, r2
        1b6038:	e24dd070 	sub	sp, sp, #112	; 0x70
        1b603c:	e5d0001c 	ldrb	r0, [r0, #28]	; fField28
        1b6040:	e59f91b4 	ldr	r9, [pc, #1b4]	; 1b61fc <TRosRecognizer::FindBaseline(TStroke **, Point *)+0x1d8>	; fField1
        1b6044:	e3300000 	teq	r0, #0	; 0x0
        1b6048:	1a000039 	bne	1b6134 <TRosRecognizer::FindBaseline(TStroke **, Point *)+0x110>
        1b604c:	eb66f23b 	bl	1b72940 <$RosettaInitializeValues>
        1b6050:	e3300000 	teq	r0, #0	; 0x0
        1b6054:	0a000003 	beq	1b6068 <TRosRecognizer::FindBaseline(TStroke **, Point *)+0x44>
        1b6058:	e3a02000 	mov	r2, #0	; 0x0
        1b605c:	e3a01000 	mov	r1, #0	; 0x0
        1b6060:	e5990000 	ldr	r0, [r9]
        1b6064:	eb68b44c 	bl	1be319c <$Throw>
        1b6068:	e3a00002 	mov	r0, #2	; 0x2
        1b606c:	eb000901 	bl	1b8478 <RosettaDontClassify>
        1b6070:	e28d0004 	add	r0, sp, #4	; 0x4
        1b6074:	e58d0000 	str	r0, [sp]
        1b6078:	e1a0100d 	mov	r1, sp
        1b607c:	e1a00005 	mov	r0, r5
        1b6080:	eb6702bd 	bl	1b76b7c <TRosRecognizer::$AreaInfoFillDefaults(char **)>
        1b6084:	e59d0000 	ldr	r0, [sp]
        1b6088:	e5901008 	ldr	r1, [r0, #8]	; fField8
        1b608c:	e3811a02 	orr	r1, r1, #8192	; 0x2000
        1b6090:	e3a08000 	mov	r8, #0	; 0x0
        1b6094:	e5a01008 	str	r1, [r0, #8]!	; fField8
        1b6098:	e51b1030 	ldr	r1, [fp, -#48]	; fField48
        1b609c:	e5917000 	ldr	r7, [r1]
        1b60a0:	e3370000 	teq	r7, #0	; 0x0
        1b60a4:	0a00001b 	beq	1b6118 <TRosRecognizer::FindBaseline(TStroke **, Point *)+0xf4>
        1b60a8:	e28d206c 	add	r2, sp, #108	; 0x6c
        1b60ac:	e1a01007 	mov	r1, r7
        1b60b0:	e1a00005 	mov	r0, r5
        1b60b4:	eb6702ae 	bl	1b76b74 <TRosRecognizer::$AllocateAndConvertStrokeForRosetta(TStroke *, FPoint **)>
        1b60b8:	e1a0a000 	mov	sl, r0
        1b60bc:	e1a01007 	mov	r1, r7
        1b60c0:	e1a00005 	mov	r0, r5
        1b60c4:	eb69595b 	bl	1c0c638 <TWRecognizer::$GetEndTime(TStroke *)>
        1b60c8:	e1a06000 	mov	r6, r0
        1b60cc:	e1a01007 	mov	r1, r7
        1b60d0:	e1a00005 	mov	r0, r5
        1b60d4:	eb695961 	bl	1c0c660 <TWRecognizer::$GetStartTime(TStroke *)>
        1b60d8:	e1a02000 	mov	r2, r0
        1b60dc:	e1a0000a 	mov	r0, sl
        1b60e0:	e1a03006 	mov	r3, r6
        1b60e4:	e59d106c 	ldr	r1, [sp, #108]
        1b60e8:	eb66f210 	bl	1b72930 <$RosettaClassify>
        1b60ec:	e3300000 	teq	r0, #0	; 0x0
        1b60f0:	0a000003 	beq	1b6104 <TRosRecognizer::FindBaseline(TStroke **, Point *)+0xe0>
        1b60f4:	e3a02000 	mov	r2, #0	; 0x0
        1b60f8:	e3a01000 	mov	r1, #0	; 0x0
        1b60fc:	e5990000 	ldr	r0, [r9]
        1b6100:	eb68b425 	bl	1be319c <$Throw>
        1b6104:	e2888001 	add	r8, r8, #1	; 0x1
        1b6108:	e51b1030 	ldr	r1, [fp, -#48]	; fField48
        1b610c:	e7917108 	ldr	r7, [r1, r8, lsl #2]
        1b6110:	e3370000 	teq	r7, #0	; 0x0
        1b6114:	1affffe3 	bne	1b60a8 <TRosRecognizer::FindBaseline(TStroke **, Point *)+0x84>
        1b6118:	e3a03000 	mov	r3, #0	; 0x0
        1b611c:	e3a02000 	mov	r2, #0	; 0x0
        1b6120:	e3a01000 	mov	r1, #0	; 0x0
        1b6124:	e3a00000 	mov	r0, #0	; 0x0
        1b6128:	eb66f200 	bl	1b72930 <$RosettaClassify>
        1b612c:	e1b06000 	movs	r6, r0
        1b6130:	1a000025 	bne	1b61cc <TRosRecognizer::FindBaseline(TStroke **, Point *)+0x1a8>
        1b6134:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b6138:	e1a0000d 	mov	r0, sp
        1b613c:	eb0008e0 	bl	1b84c4 <RosettaGetBaseLine>
        1b6140:	e1b06000 	movs	r6, r0
        1b6144:	1a00001f 	bne	1b61c8 <TRosRecognizer::FindBaseline(TStroke **, Point *)+0x1a4>
        1b6148:	e59d0002 	ldr	r0, [sp, #2]
        1b614c:	e5c40001 	strb	r0, [r4, #1]	; fField1
        1b6150:	e1a00440 	mov	r0, r0, asr #8
        1b6154:	e5c40000 	strb	r0, [r4]
        1b6158:	e59d0000 	ldr	r0, [sp]
        1b615c:	e5c40003 	strb	r0, [r4, #3]
        1b6160:	e1a00440 	mov	r0, r0, asr #8
        1b6164:	e5c40002 	strb	r0, [r4, #2]
        1b6168:	e59d0002 	ldr	r0, [sp, #2]
        1b616c:	e5c40005 	strb	r0, [r4, #5]
        1b6170:	e1a00440 	mov	r0, r0, asr #8
        1b6174:	e5c40004 	strb	r0, [r4, #4]	; fField4
        1b6178:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1b617c:	e5c40007 	strb	r0, [r4, #7]
        1b6180:	e1a00440 	mov	r0, r0, asr #8
        1b6184:	e5c40006 	strb	r0, [r4, #6]
        1b6188:	e59d0006 	ldr	r0, [sp, #6]
        1b618c:	e5c40009 	strb	r0, [r4, #9]
        1b6190:	e1a00440 	mov	r0, r0, asr #8
        1b6194:	e5c40008 	strb	r0, [r4, #8]	; fField8
        1b6198:	e59d0000 	ldr	r0, [sp]
        1b619c:	e5c4000b 	strb	r0, [r4, #11]
        1b61a0:	e1a00440 	mov	r0, r0, asr #8
        1b61a4:	e5c4000a 	strb	r0, [r4, #10]
        1b61a8:	e59d0006 	ldr	r0, [sp, #6]
        1b61ac:	e5c4000d 	strb	r0, [r4, #13]
        1b61b0:	e1a00440 	mov	r0, r0, asr #8
        1b61b4:	e5c4000c 	strb	r0, [r4, #12]	; fField12
        1b61b8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1b61bc:	e5c4000f 	strb	r0, [r4, #15]
        1b61c0:	e1a00440 	mov	r0, r0, asr #8
        1b61c4:	e5c4000e 	strb	r0, [r4, #14]
        1b61c8:	e28dd008 	add	sp, sp, #8	; 0x8
        1b61cc:	e5d5001c 	ldrb	r0, [r5, #28]	; fField28
        1b61d0:	e3300000 	teq	r0, #0	; 0x0
        1b61d4:	1a000006 	bne	1b61f4 <TRosRecognizer::FindBaseline(TStroke **, Point *)+0x1d0>
        1b61d8:	eb66f1d8 	bl	1b72940 <$RosettaInitializeValues>
        1b61dc:	e1900006 	orrs	r0, r0, r6
        1b61e0:	0a000003 	beq	1b61f4 <TRosRecognizer::FindBaseline(TStroke **, Point *)+0x1d0>
        1b61e4:	e3a02000 	mov	r2, #0	; 0x0
        1b61e8:	e3a01000 	mov	r1, #0	; 0x0
        1b61ec:	e5990000 	ldr	r0, [r9]
        1b61f0:	eb68b3e9 	bl	1be319c <$Throw>
        1b61f4:	e3a00000 	mov	r0, #0	; 0x0
        1b61f8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1b61fc:	003712b4 	ldreqh	r1, [r7], -r4
    */
}

/**
 * Symbol: TRosRecognizer::AreaInfoGetSize(void)
 * Address: 001b6200
 */
TRosRecognizer::AreaInfoGetSize(void) {
    /*
        1b6200:	e3a00068 	mov	r0, #104	; 0x68
        1b6204:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRosRecognizer::AreaInfoFillDefaults(char **)
 * Address: 001b6208
 */
TRosRecognizer::AreaInfoFillDefaults(char **) {
    /*
        1b6208:	e5910000 	ldr	r0, [r1]
        1b620c:	e3a01000 	mov	r1, #0	; 0x0
        1b6210:	e5801008 	str	r1, [r0, #8]	; fField8
        1b6214:	e5c01060 	strb	r1, [r0, #96]	; fField96
        1b6218:	e5c01001 	strb	r1, [r0, #1]	; fField1
        1b621c:	e5c01000 	strb	r1, [r0]
        1b6220:	e5801004 	str	r1, [r0, #4]	; fField4
        1b6224:	e5c01061 	strb	r1, [r0, #97]	; fField97
        1b6228:	e5c0102d 	strb	r1, [r0, #45]	; fField45
        1b622c:	e5c0102c 	strb	r1, [r0, #44]	; fField44
        1b6230:	e5c0102f 	strb	r1, [r0, #47]	; fField47
        1b6234:	e5c0102e 	strb	r1, [r0, #46]	; fField46
        1b6238:	e5c01031 	strb	r1, [r0, #49]	; fField49
        1b623c:	e5c01030 	strb	r1, [r0, #48]	; fField48
        1b6240:	e5c01062 	strb	r1, [r0, #98]	; fField98
        1b6244:	e5c01063 	strb	r1, [r0, #99]	; fField99
        1b6248:	e5801038 	str	r1, [r0, #56]	; fField56
        1b624c:	e580103c 	str	r1, [r0, #60]	; fField60
        1b6250:	e5801040 	str	r1, [r0, #64]	; fField64
        1b6254:	e5801044 	str	r1, [r0, #68]	; fField68
        1b6258:	e3e02000 	mvn	r2, #0	; 0x0
        1b625c:	e5801048 	str	r1, [r0, #72]	; fField72
        1b6260:	e580200c 	str	r2, [r0, #12]	; fField12
        1b6264:	e5802010 	str	r2, [r0, #16]	; fField16
        1b6268:	e5802014 	str	r2, [r0, #20]	; fField20
        1b626c:	e5802018 	str	r2, [r0, #24]	; fField24
        1b6270:	e580201c 	str	r2, [r0, #28]	; fField28
        1b6274:	e5802020 	str	r2, [r0, #32]	; fField32
        1b6278:	e5802024 	str	r2, [r0, #36]	; fField36
        1b627c:	e3a01005 	mov	r1, #5	; 0x5
        1b6280:	e5802028 	str	r2, [r0, #40]	; fField40
        1b6284:	e5c01065 	strb	r1, [r0, #101]	; fField101
        1b6288:	e3a01000 	mov	r1, #0	; 0x0
        1b628c:	e0803101 	add	r3, r0, r1, lsl #2
        1b6290:	e5c3204d 	strb	r2, [r3, #77]
        1b6294:	e5c3204c 	strb	r2, [r3, #76]
        1b6298:	e2811001 	add	r1, r1, #1	; 0x1
        1b629c:	e3510005 	cmp	r1, #5	; 0x5
        1b62a0:	bafffff9 	blt	1b628c <TRosRecognizer::AreaInfoFillDefaults(char **)+0x84>
        1b62a4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)
 * Address: 001b62a8
 */
TRosRecognizer::AreaInfoConfigure(char **, RefVar const &) {
    /*
        1b62a8:	e1a0c00d 	mov	ip, sp
        1b62ac:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1b62b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b62b4:	e1a04002 	mov	r4, r2
        1b62b8:	e24ddf43 	sub	sp, sp, #268	; 0x10c
        1b62bc:	e3a00002 	mov	r0, #2	; 0x2
        1b62c0:	eb682fa1 	bl	1bc214c <$AllocateRefHandle(long)>
        1b62c4:	e58d0008 	str	r0, [sp, #8]	; fField8
        1b62c8:	e59f1144 	ldr	r1, [pc, #144]	; 1b6414 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x16c>
        1b62cc:	e1a00004 	mov	r0, r4
        1b62d0:	e3a03000 	mov	r3, #0	; 0x0
        1b62d4:	e3a02000 	mov	r2, #0	; 0x0
        1b62d8:	eb6837e5 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        1b62dc:	e3100003 	tst	r0, #3	; 0x3
        1b62e0:	01a00140 	moveq	r0, r0, asr #2
        1b62e4:	0a000000 	beq	1b62ec <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x44>
        1b62e8:	eb682f8b 	bl	1bc211c <$_RINTError(long)>
        1b62ec:	e1a06000 	mov	r6, r0
        1b62f0:	e1a00004 	mov	r0, r4
        1b62f4:	eb63d4ba 	bl	1aab5e4 <$CountCustomDictionaries(RefVar const &)>
        1b62f8:	e3a07000 	mov	r7, #0	; 0x0
        1b62fc:	e58d0004 	str	r0, [sp, #4]	; fField4
        1b6300:	e51b0030 	ldr	r0, [fp, -#48]	; fField48
        1b6304:	eb68af80 	bl	1be210c <$HLock>
        1b6308:	e51b0030 	ldr	r0, [fp, -#48]	; fField48
        1b630c:	e5905000 	ldr	r5, [r0]
        1b6310:	eb637de5 	bl	1a95aac <$GetCurrentLocale(void)>
        1b6314:	eb682f8c 	bl	1bc214c <$AllocateRefHandle(long)>
        1b6318:	e58d0000 	str	r0, [sp]
        1b631c:	e1a0000d 	mov	r0, sp
        1b6320:	e59f10f0 	ldr	r1, [pc, #f0]	; 1b6418 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x170>
        1b6324:	e3a02000 	mov	r2, #0	; 0x0
        1b6328:	eb6837ce 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        1b632c:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        1b6330:	e5810000 	str	r0, [r1]
        1b6334:	e59d0000 	ldr	r0, [sp]
        1b6338:	eb68339f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b633c:	e28d0008 	add	r0, sp, #8	; 0x8
        1b6340:	eb68f591 	bl	1bf398c <$IsArray(RefVar const &)>
        1b6344:	e3300000 	teq	r0, #0	; 0x0
        1b6348:	0a000002 	beq	1b6358 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0xb0>
        1b634c:	e28d0008 	add	r0, sp, #8	; 0x8
        1b6350:	eb683be1 	bl	1bc52dc <$NewIterator(RefVar const &)>
        1b6354:	e1a07000 	mov	r7, r0
        1b6358:	e3a08000 	mov	r8, #0	; 0x0
        1b635c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1b6360:	e3500000 	cmp	r0, #0	; 0x0
        1b6364:	9a0000a5 	bls	1b6600 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x358>
        1b6368:	e1a01008 	mov	r1, r8
        1b636c:	e1a00004 	mov	r0, r4
        1b6370:	eb63ed60 	bl	1ab18f8 <$GetCustomDictionary(RefVar const &, unsigned long)>
        1b6374:	e1a09000 	mov	r9, r0
        1b6378:	eb637598 	bl	1a939e0 <$FindDictionaryEntry(unsigned long)>
        1b637c:	e1a0a000 	mov	sl, r0
        1b6380:	e3380000 	teq	r8, #0	; 0x0
        1b6384:	05c59060 	streqb	r9, [r5, #96]	; fField96
        1b6388:	e359001d 	cmp	r9, #29	; 0x1d
        1b638c:	0a00005d 	beq	1b6508 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x260>
        1b6390:	ca000021 	bgt	1b641c <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x174>
        1b6394:	e359001c 	cmp	r9, #28	; 0x1c
        1b6398:	908ff109 	addls	pc, pc, r9, lsl #2
        1b639c:	ea000069 	b	1b6548 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x2a0>
        1b63a0:	ea000058 	b	1b6508 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x260>
        1b63a4:	ea000054 	b	1b64fc <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x254>
        1b63a8:	ea000066 	b	1b6548 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x2a0>
        1b63ac:	ea000055 	b	1b6508 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x260>
        1b63b0:	ea000064 	b	1b6548 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x2a0>
        1b63b4:	ea000063 	b	1b6548 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x2a0>
        1b63b8:	ea000052 	b	1b6508 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x260>
        1b63bc:	ea000051 	b	1b6508 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x260>
        1b63c0:	ea000026 	b	1b6460 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x1b8>
        1b63c4:	ea00004f 	b	1b6508 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x260>
        1b63c8:	ea00004e 	b	1b6508 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x260>
        1b63cc:	ea000023 	b	1b6460 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x1b8>
        1b63d0:	ea000022 	b	1b6460 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x1b8>
        1b63d4:	ea000021 	b	1b6460 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x1b8>
        1b63d8:	ea000020 	b	1b6460 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x1b8>
        1b63dc:	ea000059 	b	1b6548 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x2a0>
        1b63e0:	ea000058 	b	1b6548 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x2a0>
        1b63e4:	ea000057 	b	1b6548 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x2a0>
        1b63e8:	ea000056 	b	1b6548 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x2a0>
        1b63ec:	ea00001b 	b	1b6460 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x1b8>
        1b63f0:	ea000044 	b	1b6508 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x260>
        1b63f4:	ea000053 	b	1b6548 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x2a0>
        1b63f8:	ea000018 	b	1b6460 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x1b8>
        1b63fc:	ea000017 	b	1b6460 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x1b8>
        1b6400:	ea000016 	b	1b6460 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x1b8>
        1b6404:	ea00003f 	b	1b6508 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x260>
        1b6408:	ea000014 	b	1b6460 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x1b8>
        1b640c:	ea00003d 	b	1b6508 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x260>
        1b6410:	ea00003c 	b	1b6508 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x260>
        1b6414:	00683270 	rsbeq	r3, r8, r0, ror r2
        1b6418:	006843c0 	rsbeq	r4, r8, r0, asr #7
        1b641c:	e3590066 	cmp	r9, #102	; 0x66
        1b6420:	0a000041 	beq	1b652c <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x284>
        1b6424:	ca000018 	bgt	1b648c <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x1e4>
        1b6428:	e359002d 	cmp	r9, #45	; 0x2d
        1b642c:	0a000035 	beq	1b6508 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x260>
        1b6430:	ca00000d 	bgt	1b646c <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x1c4>
        1b6434:	e359002a 	cmp	r9, #42	; 0x2a
        1b6438:	0a000032 	beq	1b6508 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x260>
        1b643c:	ca000004 	bgt	1b6454 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x1ac>
        1b6440:	e3390022 	teq	r9, #34	; 0x22
        1b6444:	0a000035 	beq	1b6520 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x278>
        1b6448:	e3390029 	teq	r9, #41	; 0x29
        1b644c:	1a00003d 	bne	1b6548 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x2a0>
        1b6450:	ea000002 	b	1b6460 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x1b8>
        1b6454:	e339002b 	teq	r9, #43	; 0x2b
        1b6458:	1339002c 	teqne	r9, #44	; 0x2c
        1b645c:	1a000039 	bne	1b6548 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x2a0>
        1b6460:	e5950008 	ldr	r0, [r5, #8]	; fField8
        1b6464:	e3800b01 	orr	r0, r0, #1024	; 0x400
        1b6468:	ea000034 	b	1b6540 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x298>
        1b646c:	e3390030 	teq	r9, #48	; 0x30
        1b6470:	13390031 	teqne	r9, #49	; 0x31
        1b6474:	0a000023 	beq	1b6508 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x260>
        1b6478:	e3390064 	teq	r9, #100	; 0x64
        1b647c:	0a000024 	beq	1b6514 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x26c>
        1b6480:	e3390065 	teq	r9, #101	; 0x65
        1b6484:	1a00002f 	bne	1b6548 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x2a0>
        1b6488:	ea000024 	b	1b6520 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x278>
        1b648c:	e2490067 	sub	r0, r9, #103	; 0x67
        1b6490:	e350000f 	cmp	r0, #15	; 0xf
        1b6494:	908ff100 	addls	pc, pc, r0, lsl #2
        1b6498:	ea00002a 	b	1b6548 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x2a0>
        1b649c:	ea000025 	b	1b6538 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x290>
        1b64a0:	ea000028 	b	1b6548 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x2a0>
        1b64a4:	ea000027 	b	1b6548 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x2a0>
        1b64a8:	ea000026 	b	1b6548 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x2a0>
        1b64ac:	ea000025 	b	1b6548 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x2a0>
        1b64b0:	ea000024 	b	1b6548 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x2a0>
        1b64b4:	ea000023 	b	1b6548 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x2a0>
        1b64b8:	ea000018 	b	1b6520 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x278>
        1b64bc:	ea000014 	b	1b6514 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x26c>
        1b64c0:	ea000019 	b	1b652c <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x284>
        1b64c4:	ea00001b 	b	1b6538 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x290>
        1b64c8:	ea000017 	b	1b652c <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x284>
        1b64cc:	ea000016 	b	1b652c <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x284>
        1b64d0:	ea000003 	b	1b64e4 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x23c>
        1b64d4:	ea000005 	b	1b64f0 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x248>
        1b64d8:	e5950008 	ldr	r0, [r5, #8]	; fField8
        1b64dc:	e3800902 	orr	r0, r0, #32768	; 0x8000
        1b64e0:	ea000016 	b	1b6540 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x298>
        1b64e4:	e5950008 	ldr	r0, [r5, #8]	; fField8
        1b64e8:	e3800801 	orr	r0, r0, #65536	; 0x10000
        1b64ec:	ea000013 	b	1b6540 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x298>
        1b64f0:	e5950008 	ldr	r0, [r5, #8]	; fField8
        1b64f4:	e3800802 	orr	r0, r0, #131072	; 0x20000
        1b64f8:	ea000010 	b	1b6540 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x298>
        1b64fc:	e5950008 	ldr	r0, [r5, #8]	; fField8
        1b6500:	e3800020 	orr	r0, r0, #32	; 0x20
        1b6504:	ea00000d 	b	1b6540 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x298>
        1b6508:	e5950008 	ldr	r0, [r5, #8]	; fField8
        1b650c:	e3800080 	orr	r0, r0, #128	; 0x80
        1b6510:	ea00000a 	b	1b6540 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x298>
        1b6514:	e5950008 	ldr	r0, [r5, #8]	; fField8
        1b6518:	e3800010 	orr	r0, r0, #16	; 0x10
        1b651c:	ea000007 	b	1b6540 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x298>
        1b6520:	e5950008 	ldr	r0, [r5, #8]	; fField8
        1b6524:	e3800008 	orr	r0, r0, #8	; 0x8
        1b6528:	ea000004 	b	1b6540 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x298>
        1b652c:	e5950008 	ldr	r0, [r5, #8]	; fField8
        1b6530:	e3800004 	orr	r0, r0, #4	; 0x4
        1b6534:	ea000001 	b	1b6540 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x298>
        1b6538:	e5950008 	ldr	r0, [r5, #8]	; fField8
        1b653c:	e3800002 	orr	r0, r0, #2	; 0x2
        1b6540:	e5850008 	str	r0, [r5, #8]	; fField8
        1b6544:	ea000029 	b	1b65f0 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x348>
        1b6548:	e3370000 	teq	r7, #0	; 0x0
        1b654c:	0a000015 	beq	1b65a8 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x300>
        1b6550:	e1a00007 	mov	r0, r7
        1b6554:	eb0592b6 	bl	31b034 <TObjectIterator::Reset(void)>
        1b6558:	e1a00007 	mov	r0, r7
        1b655c:	eb69541c 	bl	1c0b5d4 <TObjectIterator::$Value(void)>
        1b6560:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        1b6564:	e5810000 	str	r0, [r1]
        1b6568:	e2001003 	and	r1, r0, #3	; 0x3
        1b656c:	e3510000 	cmp	r1, #0	; 0x0
        1b6570:	1a000004 	bne	1b6588 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x2e0>
        1b6574:	01a00140 	moveq	r0, r0, asr #2
        1b6578:	0a000000 	beq	1b6580 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x2d8>
        1b657c:	eb682ee6 	bl	1bc211c <$_RINTError(long)>
        1b6580:	e1300009 	teq	r0, r9
        1b6584:	0a000003 	beq	1b6598 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x2f0>
        1b6588:	e1a00007 	mov	r0, r7
        1b658c:	eb683b55 	bl	1bc52e8 <TObjectIterator::$Next(void)>
        1b6590:	e3300000 	teq	r0, #0	; 0x0
        1b6594:	1affffef 	bne	1b6558 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x2b0>
        1b6598:	e1a00007 	mov	r0, r7
        1b659c:	eb68330e 	bl	1bc31dc <TObjectIterator::$Done(void)>
        1b65a0:	e3300000 	teq	r0, #0	; 0x0
        1b65a4:	0a000011 	beq	1b65f0 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x348>
        1b65a8:	e33a0000 	teq	sl, #0	; 0x0
        1b65ac:	0a00000f 	beq	1b65f0 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x348>
        1b65b0:	e5d50061 	ldrb	r0, [r5, #97]	; fField97
        1b65b4:	e3500005 	cmp	r0, #5	; 0x5
        1b65b8:	aa00000c 	bge	1b65f0 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x348>
        1b65bc:	e59a1000 	ldr	r1, [sl]
        1b65c0:	e5911000 	ldr	r1, [r1]
        1b65c4:	e5b12008 	ldr	r2, [r1, #8]!	; fField8
        1b65c8:	e5921000 	ldr	r1, [r2]
        1b65cc:	e5d11001 	ldrb	r1, [r1, #1]	; fField1
        1b65d0:	e2011007 	and	r1, r1, #7	; 0x7
        1b65d4:	e3310005 	teq	r1, #5	; 0x5
        1b65d8:	13310002 	teqne	r1, #2	; 0x2
        1b65dc:	0a000003 	beq	1b65f0 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x348>
        1b65e0:	e2801001 	add	r1, r0, #1	; 0x1
        1b65e4:	e5c51061 	strb	r1, [r5, #97]	; fField97
        1b65e8:	e0850100 	add	r0, r5, r0, lsl #2
        1b65ec:	e5a02038 	str	r2, [r0, #56]!	; fField56
        1b65f0:	e2888001 	add	r8, r8, #1	; 0x1
        1b65f4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1b65f8:	e1580000 	cmp	r8, r0
        1b65fc:	3affff59 	bcc	1b6368 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0xc0>
        1b6600:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b6604:	e3370000 	teq	r7, #0	; 0x0
        1b6608:	0a000003 	beq	1b661c <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x374>
        1b660c:	e1a00007 	mov	r0, r7
        1b6610:	e3a01001 	mov	r1, #1	; 0x1
        1b6614:	e1a0e00f 	mov	lr, pc
        1b6618:	e597f000 	ldr	pc, [r7]
        1b661c:	eb637d22 	bl	1a95aac <$GetCurrentLocale(void)>
        1b6620:	eb682ec9 	bl	1bc214c <$AllocateRefHandle(long)>
        1b6624:	e58d0000 	str	r0, [sp]
        1b6628:	e1a0000d 	mov	r0, sp
        1b662c:	e59f1158 	ldr	r1, [pc, #158]	; 1b678c <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x4e4>
        1b6630:	e3a02000 	mov	r2, #0	; 0x0
        1b6634:	eb68370b 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        1b6638:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        1b663c:	e5810000 	str	r0, [r1]
        1b6640:	e59d0000 	ldr	r0, [sp]
        1b6644:	eb6832dc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b6648:	e3a0a000 	mov	sl, #0	; 0x0
        1b664c:	e28d000c 	add	r0, sp, #12	; 0xc
        1b6650:	eb68f4cd 	bl	1bf398c <$IsArray(RefVar const &)>
        1b6654:	e3300000 	teq	r0, #0	; 0x0
        1b6658:	0a000023 	beq	1b66ec <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x444>
        1b665c:	e28d000c 	add	r0, sp, #12	; 0xc
        1b6660:	eb683b1d 	bl	1bc52dc <$NewIterator(RefVar const &)>
        1b6664:	e1a07000 	mov	r7, r0
        1b6668:	eb059271 	bl	31b034 <TObjectIterator::Reset(void)>
        1b666c:	e3a08000 	mov	r8, #0	; 0x0
        1b6670:	e1a00007 	mov	r0, r7
        1b6674:	eb6953d6 	bl	1c0b5d4 <TObjectIterator::$Value(void)>
        1b6678:	e3100003 	tst	r0, #3	; 0x3
        1b667c:	01a00140 	moveq	r0, r0, asr #2
        1b6680:	0a000000 	beq	1b6688 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x3e0>
        1b6684:	eb682ea4 	bl	1bc211c <$_RINTError(long)>
        1b6688:	e0859108 	add	r9, r5, r8, lsl #2
        1b668c:	e5c9004d 	strb	r0, [r9, #77]
        1b6690:	e1a00440 	mov	r0, r0, asr #8
        1b6694:	e5c9004c 	strb	r0, [r9, #76]
        1b6698:	e1a00007 	mov	r0, r7
        1b669c:	eb683b11 	bl	1bc52e8 <TObjectIterator::$Next(void)>
        1b66a0:	e1a00007 	mov	r0, r7
        1b66a4:	eb6953ca 	bl	1c0b5d4 <TObjectIterator::$Value(void)>
        1b66a8:	e3100003 	tst	r0, #3	; 0x3
        1b66ac:	01a00140 	moveq	r0, r0, asr #2
        1b66b0:	0a000000 	beq	1b66b8 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x410>
        1b66b4:	eb682e98 	bl	1bc211c <$_RINTError(long)>
        1b66b8:	e5c9004f 	strb	r0, [r9, #79]
        1b66bc:	e1a00440 	mov	r0, r0, asr #8
        1b66c0:	e5c9004e 	strb	r0, [r9, #78]
        1b66c4:	e2888001 	add	r8, r8, #1	; 0x1
        1b66c8:	e1a00007 	mov	r0, r7
        1b66cc:	eb683b05 	bl	1bc52e8 <TObjectIterator::$Next(void)>
        1b66d0:	e3300000 	teq	r0, #0	; 0x0
        1b66d4:	1affffe5 	bne	1b6670 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x3c8>
        1b66d8:	e1b00007 	movs	r0, r7
        1b66dc:	0a000002 	beq	1b66ec <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x444>
        1b66e0:	e3a01001 	mov	r1, #1	; 0x1
        1b66e4:	e1a0e00f 	mov	lr, pc
        1b66e8:	e590f000 	ldr	pc, [r0]
        1b66ec:	e59f109c 	ldr	r1, [pc, #9c]	; 1b6790 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x4e8>
        1b66f0:	e1a00004 	mov	r0, r4
        1b66f4:	e3a03000 	mov	r3, #0	; 0x0
        1b66f8:	e3a02000 	mov	r2, #0	; 0x0
        1b66fc:	eb6836dc 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        1b6700:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        1b6704:	e5810000 	str	r0, [r1]
        1b6708:	e3300002 	teq	r0, #2	; 0x2
        1b670c:	0a000001 	beq	1b6718 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x470>
        1b6710:	e3160c01 	tst	r6, #256	; 0x100
        1b6714:	0a000002 	beq	1b6724 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x47c>
        1b6718:	e5950008 	ldr	r0, [r5, #8]	; fField8
        1b671c:	e3800a02 	orr	r0, r0, #8192	; 0x2000
        1b6720:	e5850008 	str	r0, [r5, #8]	; fField8
        1b6724:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        1b6728:	e5900000 	ldr	r0, [r0]
        1b672c:	e3300002 	teq	r0, #2	; 0x2
        1b6730:	0a000004 	beq	1b6748 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x4a0>
        1b6734:	e3100003 	tst	r0, #3	; 0x3
        1b6738:	01a00140 	moveq	r0, r0, asr #2
        1b673c:	0a000000 	beq	1b6744 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x49c>
        1b6740:	eb682e75 	bl	1bc211c <$_RINTError(long)>
        1b6744:	e5c50065 	strb	r0, [r5, #101]	; fField101
        1b6748:	e59f1044 	ldr	r1, [pc, #44]	; 1b6794 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x4ec>	; fField44
        1b674c:	e1a00004 	mov	r0, r4
        1b6750:	e3a03000 	mov	r3, #0	; 0x0
        1b6754:	e3a02000 	mov	r2, #0	; 0x0
        1b6758:	eb6836c5 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        1b675c:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        1b6760:	e5810000 	str	r0, [r1]
        1b6764:	e3300002 	teq	r0, #2	; 0x2
        1b6768:	0a00000a 	beq	1b6798 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x4f0>
        1b676c:	e5d50060 	ldrb	r0, [r5, #96]	; fField96
        1b6770:	e3300000 	teq	r0, #0	; 0x0
        1b6774:	03a00028 	moveq	r0, #40	; 0x28
        1b6778:	05c50060 	streqb	r0, [r5, #96]	; fField96
        1b677c:	e5950008 	ldr	r0, [r5, #8]	; fField8
        1b6780:	e3800001 	orr	r0, r0, #1	; 0x1
        1b6784:	e5850008 	str	r0, [r5, #8]	; fField8
        1b6788:	ea000034 	b	1b6860 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x5b8>
        1b678c:	006843c8 	rsbeq	r4, r8, r8, asr #7
        1b6790:	00683530 	rsbeq	r3, r8, r0, lsr r5
        1b6794:	006840f8 	streqd	r4, [r8], -#8	; fField8
        1b6798:	e3160a02 	tst	r6, #8192	; 0x2000
        1b679c:	15950008 	ldrne	r0, [r5, #8]	; fField8
        1b67a0:	13800002 	orrne	r0, r0, #2	; 0x2
        1b67a4:	15850008 	strne	r0, [r5, #8]	; fField8
        1b67a8:	e3160701 	tst	r6, #262144	; 0x40000
        1b67ac:	15950008 	ldrne	r0, [r5, #8]	; fField8
        1b67b0:	13800004 	orrne	r0, r0, #4	; 0x4
        1b67b4:	15850008 	strne	r0, [r5, #8]	; fField8
        1b67b8:	e3160702 	tst	r6, #524288	; 0x80000
        1b67bc:	15950008 	ldrne	r0, [r5, #8]	; fField8
        1b67c0:	13800008 	orrne	r0, r0, #8	; 0x8
        1b67c4:	15850008 	strne	r0, [r5, #8]	; fField8
        1b67c8:	e3160601 	tst	r6, #1048576	; 0x100000
        1b67cc:	15950008 	ldrne	r0, [r5, #8]	; fField8
        1b67d0:	13800010 	orrne	r0, r0, #16	; 0x10
        1b67d4:	15850008 	strne	r0, [r5, #8]	; fField8
        1b67d8:	e3160502 	tst	r6, #8388608	; 0x800000
        1b67dc:	15950008 	ldrne	r0, [r5, #8]	; fField8
        1b67e0:	13800901 	orrne	r0, r0, #16384	; 0x4000
        1b67e4:	15850008 	strne	r0, [r5, #8]	; fField8
        1b67e8:	e3160a01 	tst	r6, #4096	; 0x1000
        1b67ec:	15950008 	ldrne	r0, [r5, #8]	; fField8
        1b67f0:	13800020 	orrne	r0, r0, #32	; 0x20
        1b67f4:	15850008 	strne	r0, [r5, #8]	; fField8
        1b67f8:	e3160901 	tst	r6, #16384	; 0x4000
        1b67fc:	15950008 	ldrne	r0, [r5, #8]	; fField8
        1b6800:	13800040 	orrne	r0, r0, #64	; 0x40
        1b6804:	15850008 	strne	r0, [r5, #8]	; fField8
        1b6808:	e3160902 	tst	r6, #32768	; 0x8000
        1b680c:	15950008 	ldrne	r0, [r5, #8]	; fField8
        1b6810:	13800c02 	orrne	r0, r0, #512	; 0x200
        1b6814:	15850008 	strne	r0, [r5, #8]	; fField8
        1b6818:	e3160802 	tst	r6, #131072	; 0x20000
        1b681c:	15950008 	ldrne	r0, [r5, #8]	; fField8
        1b6820:	13800c01 	orrne	r0, r0, #256	; 0x100
        1b6824:	15850008 	strne	r0, [r5, #8]	; fField8
        1b6828:	e3160501 	tst	r6, #4194304	; 0x400000
        1b682c:	15950008 	ldrne	r0, [r5, #8]	; fField8
        1b6830:	13800080 	orrne	r0, r0, #128	; 0x80
        1b6834:	15850008 	strne	r0, [r5, #8]	; fField8
        1b6838:	e3160602 	tst	r6, #2097152	; 0x200000
        1b683c:	15950008 	ldrne	r0, [r5, #8]	; fField8
        1b6840:	13800b01 	orrne	r0, r0, #1024	; 0x400
        1b6844:	15850008 	strne	r0, [r5, #8]	; fField8
        1b6848:	e3a0001f 	mov	r0, #31	; 0x1f
        1b684c:	eb637463 	bl	1a939e0 <$FindDictionaryEntry(unsigned long)>
        1b6850:	e5900000 	ldr	r0, [r0]
        1b6854:	e5900000 	ldr	r0, [r0]
        1b6858:	e5900008 	ldr	r0, [r0, #8]	; fField8
        1b685c:	e5850004 	str	r0, [r5, #4]	; fField4
        1b6860:	e59f1244 	ldr	r1, [pc, #244]	; 1b6aac <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x804>
        1b6864:	e1a00004 	mov	r0, r4
        1b6868:	e3a02000 	mov	r2, #0	; 0x0
        1b686c:	eb68367d 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        1b6870:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        1b6874:	e5810000 	str	r0, [r1]
        1b6878:	e3300002 	teq	r0, #2	; 0x2
        1b687c:	0a00000c 	beq	1b68b4 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x60c>
        1b6880:	e5950008 	ldr	r0, [r5, #8]	; fField8
        1b6884:	e3800b02 	orr	r0, r0, #2048	; 0x800
        1b6888:	e5850008 	str	r0, [r5, #8]	; fField8
        1b688c:	e59f121c 	ldr	r1, [pc, #21c]	; 1b6ab0 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x808>
        1b6890:	e28d000c 	add	r0, sp, #12	; 0xc
        1b6894:	eb63f029 	bl	1ab2940 <$GetNonNilInt__FRC6RefVarT1>
        1b6898:	e5c5002d 	strb	r0, [r5, #45]	; fField45
        1b689c:	e1a00420 	mov	r0, r0, lsr #8
        1b68a0:	e5c5002c 	strb	r0, [r5, #44]	; fField44
        1b68a4:	e59f1208 	ldr	r1, [pc, #208]	; 1b6ab4 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x80c>
        1b68a8:	e28d000c 	add	r0, sp, #12	; 0xc
        1b68ac:	eb63f023 	bl	1ab2940 <$GetNonNilInt__FRC6RefVarT1>
        1b68b0:	e5c50062 	strb	r0, [r5, #98]	; fField98
        1b68b4:	e59f11fc 	ldr	r1, [pc, #1fc]	; 1b6ab8 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x810>	; fField1
        1b68b8:	e1a00004 	mov	r0, r4
        1b68bc:	e3a02000 	mov	r2, #0	; 0x0
        1b68c0:	eb683668 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        1b68c4:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        1b68c8:	e5810000 	str	r0, [r1]
        1b68cc:	e3300002 	teq	r0, #2	; 0x2
        1b68d0:	0a000022 	beq	1b6960 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x6b8>
        1b68d4:	e5950008 	ldr	r0, [r5, #8]	; fField8
        1b68d8:	e3800b02 	orr	r0, r0, #2048	; 0x800
        1b68dc:	e5850008 	str	r0, [r5, #8]	; fField8
        1b68e0:	e59f11d4 	ldr	r1, [pc, #1d4]	; 1b6abc <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x814>	; fField1
        1b68e4:	e28d000c 	add	r0, sp, #12	; 0xc
        1b68e8:	eb63f014 	bl	1ab2940 <$GetNonNilInt__FRC6RefVarT1>
        1b68ec:	e5c5002f 	strb	r0, [r5, #47]	; fField47
        1b68f0:	e1a00420 	mov	r0, r0, lsr #8
        1b68f4:	e5c5002e 	strb	r0, [r5, #46]	; fField46
        1b68f8:	e59f11c0 	ldr	r1, [pc, #1c0]	; 1b6ac0 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x818>	; fField1
        1b68fc:	e28d000c 	add	r0, sp, #12	; 0xc
        1b6900:	eb63f00e 	bl	1ab2940 <$GetNonNilInt__FRC6RefVarT1>
        1b6904:	e5c50031 	strb	r0, [r5, #49]	; fField49
        1b6908:	e1a00420 	mov	r0, r0, lsr #8
        1b690c:	e5c50030 	strb	r0, [r5, #48]	; fField48
        1b6910:	e59f11ac 	ldr	r1, [pc, #1ac]	; 1b6ac4 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x81c>	; fField1
        1b6914:	e28d000c 	add	r0, sp, #12	; 0xc
        1b6918:	eb63f008 	bl	1ab2940 <$GetNonNilInt__FRC6RefVarT1>
        1b691c:	e5c50063 	strb	r0, [r5, #99]	; fField99
        1b6920:	e59f11a0 	ldr	r1, [pc, #1a0]	; 1b6ac8 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x820>	; fField1
        1b6924:	e28d000c 	add	r0, sp, #12	; 0xc
        1b6928:	eb63f004 	bl	1ab2940 <$GetNonNilInt__FRC6RefVarT1>
        1b692c:	e5c50033 	strb	r0, [r5, #51]
        1b6930:	e1a00420 	mov	r0, r0, lsr #8
        1b6934:	e5c50032 	strb	r0, [r5, #50]
        1b6938:	e59f118c 	ldr	r1, [pc, #18c]	; 1b6acc <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x824>
        1b693c:	e28d000c 	add	r0, sp, #12	; 0xc
        1b6940:	eb63effe 	bl	1ab2940 <$GetNonNilInt__FRC6RefVarT1>
        1b6944:	e5c50035 	strb	r0, [r5, #53]
        1b6948:	e1a00420 	mov	r0, r0, lsr #8
        1b694c:	e5c50034 	strb	r0, [r5, #52]
        1b6950:	e59f1178 	ldr	r1, [pc, #178]	; 1b6ad0 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x828>
        1b6954:	e28d000c 	add	r0, sp, #12	; 0xc
        1b6958:	eb63eff8 	bl	1ab2940 <$GetNonNilInt__FRC6RefVarT1>
        1b695c:	e5c50064 	strb	r0, [r5, #100]
        1b6960:	e59f116c 	ldr	r1, [pc, #16c]	; 1b6ad4 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x82c>	; fField16
        1b6964:	e1a00004 	mov	r0, r4
        1b6968:	e3a02000 	mov	r2, #0	; 0x0
        1b696c:	eb68363d 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        1b6970:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        1b6974:	e3a06001 	mov	r6, #1	; 0x1
        1b6978:	e5810000 	str	r0, [r1]
        1b697c:	e3300002 	teq	r0, #2	; 0x2
        1b6980:	0a000020 	beq	1b6a08 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x760>
        1b6984:	e5950008 	ldr	r0, [r5, #8]	; fField8
        1b6988:	e3800a01 	orr	r0, r0, #4096	; 0x1000
        1b698c:	e5850008 	str	r0, [r5, #8]	; fField8
        1b6990:	e28d000c 	add	r0, sp, #12	; 0xc
        1b6994:	eb6831fa 	bl	1bc3184 <$GetCString(RefVar const &)>
        1b6998:	e28d1010 	add	r1, sp, #16	; 0x10
        1b699c:	e3a03c01 	mov	r3, #256	; 0x100
        1b69a0:	e3a02001 	mov	r2, #1	; 0x1
        1b69a4:	eb68c275 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
        1b69a8:	e3a00000 	mov	r0, #0	; 0x0
        1b69ac:	e0851100 	add	r1, r5, r0, lsl #2
        1b69b0:	e2800001 	add	r0, r0, #1	; 0x1
        1b69b4:	e3500008 	cmp	r0, #8	; 0x8
        1b69b8:	e5a1a00c 	str	sl, [r1, #12]!	; fField12
        1b69bc:	bafffffa 	blt	1b69ac <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x704>
        1b69c0:	e28d0010 	add	r0, sp, #16	; 0x10
        1b69c4:	eb67fc39 	bl	1bb5ab0 <$strlen>
        1b69c8:	e1a01000 	mov	r1, r0
        1b69cc:	e3a00000 	mov	r0, #0	; 0x0
        1b69d0:	e3510000 	cmp	r1, #0	; 0x0
        1b69d4:	da00000b 	ble	1b6a08 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x760>
        1b69d8:	e28d2010 	add	r2, sp, #16	; 0x10
        1b69dc:	e7d23000 	ldrb	r3, [r2, r0]
        1b69e0:	e1a022a3 	mov	r2, r3, lsr #5
        1b69e4:	e0852102 	add	r2, r5, r2, lsl #2
        1b69e8:	e203301f 	and	r3, r3, #31	; 0x1f
        1b69ec:	e1a0c316 	mov	ip, r6, lsl r3
        1b69f0:	e5b2300c 	ldr	r3, [r2, #12]!	; fField12
        1b69f4:	e18c3003 	orr	r3, ip, r3
        1b69f8:	e2800001 	add	r0, r0, #1	; 0x1
        1b69fc:	e1500001 	cmp	r0, r1
        1b6a00:	e5823000 	str	r3, [r2]
        1b6a04:	bafffff3 	blt	1b69d8 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x730>
        1b6a08:	e59f10c8 	ldr	r1, [pc, #c8]	; 1b6ad8 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x830>
        1b6a0c:	e1a00004 	mov	r0, r4
        1b6a10:	e3a02000 	mov	r2, #0	; 0x0
        1b6a14:	eb683613 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        1b6a18:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        1b6a1c:	e5810000 	str	r0, [r1]
        1b6a20:	e3300002 	teq	r0, #2	; 0x2
        1b6a24:	0a00001a 	beq	1b6a94 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x7ec>
        1b6a28:	e5950008 	ldr	r0, [r5, #8]	; fField8
        1b6a2c:	e3800a01 	orr	r0, r0, #4096	; 0x1000
        1b6a30:	e5850008 	str	r0, [r5, #8]	; fField8
        1b6a34:	e28d000c 	add	r0, sp, #12	; 0xc
        1b6a38:	eb6831d1 	bl	1bc3184 <$GetCString(RefVar const &)>
        1b6a3c:	e28d1010 	add	r1, sp, #16	; 0x10
        1b6a40:	e3a03c01 	mov	r3, #256	; 0x100
        1b6a44:	e3a02001 	mov	r2, #1	; 0x1
        1b6a48:	eb68c24c 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
        1b6a4c:	e28d0010 	add	r0, sp, #16	; 0x10
        1b6a50:	eb67fc16 	bl	1bb5ab0 <$strlen>
        1b6a54:	e1a01000 	mov	r1, r0
        1b6a58:	e3a00000 	mov	r0, #0	; 0x0
        1b6a5c:	e3510000 	cmp	r1, #0	; 0x0
        1b6a60:	da00000b 	ble	1b6a94 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x7ec>
        1b6a64:	e28d2010 	add	r2, sp, #16	; 0x10
        1b6a68:	e7d23000 	ldrb	r3, [r2, r0]
        1b6a6c:	e1a022a3 	mov	r2, r3, lsr #5
        1b6a70:	e0852102 	add	r2, r5, r2, lsl #2
        1b6a74:	e203301f 	and	r3, r3, #31	; 0x1f
        1b6a78:	e1e03316 	mvn	r3, r6, lsl r3
        1b6a7c:	e5b2c00c 	ldr	ip, [r2, #12]!	; fField12
        1b6a80:	e003300c 	and	r3, r3, ip
        1b6a84:	e2800001 	add	r0, r0, #1	; 0x1
        1b6a88:	e1500001 	cmp	r0, r1
        1b6a8c:	e5823000 	str	r3, [r2]
        1b6a90:	bafffff3 	blt	1b6a64 <TRosRecognizer::AreaInfoConfigure(char **, RefVar const &)+0x7bc>
        1b6a94:	e51b0030 	ldr	r0, [fp, -#48]	; fField48
        1b6a98:	eb68ad9d 	bl	1be2114 <$HUnlock>
        1b6a9c:	e28dd004 	add	sp, sp, #4	; 0x4
        1b6aa0:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        1b6aa4:	eb6831c4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b6aa8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1b6aac:	006840e8 	rsbeq	r4, r8, r8, ror #1
        1b6ab0:	00681fd8 	ldreqd	r1, [r8], -#248
        1b6ab4:	006846d0 	ldreqd	r4, [r8], -#96	; fField96
        1b6ab8:	006840f0 	streqd	r4, [r8]
        1b6abc:	006821b0 	streqh	r2, [r8], -#16	; fField16
        1b6ac0:	006821b8 	streqh	r2, [r8], -#24	; fField24
        1b6ac4:	00685248 	rsbeq	r5, r8, r8, asr #4
        1b6ac8:	006821c0 	rsbeq	r2, r8, r0, asr #3
        1b6acc:	006821a8 	rsbeq	r2, r8, r8, lsr #3
        1b6ad0:	00685280 	rsbeq	r5, r8, r0, lsl #5
        1b6ad4:	00684978 	rsbeq	r4, r8, r8, ror r9
        1b6ad8:	006842b8 	streqh	r4, [r8], -#40	; fField40
    */
}

/**
 * Symbol: TRosRecognizer::AreaInfoFreeDependents(char **)
 * Address: 001b6adc
 */
TRosRecognizer::AreaInfoFreeDependents(char **) {
    /*
        1b6adc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRosRecognizer::AreaInfoSetParameters(char **)
 * Address: 001b6ae0
 */
TRosRecognizer::AreaInfoSetParameters(char **) {
    /*
        1b6ae0:	e1a0c00d 	mov	ip, sp
        1b6ae4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1b6ae8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b6aec:	e1a05000 	mov	r5, r0
        1b6af0:	e1a04001 	mov	r4, r1
        1b6af4:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b6af8:	e3a06000 	mov	r6, #0	; 0x0
        1b6afc:	e1a0100d 	mov	r1, sp
        1b6b00:	eb6956cf 	bl	1c0c644 <TWRecognizer::$GetPartialGroup(unsigned char *)>
        1b6b04:	e5dd0000 	ldrb	r0, [sp]
        1b6b08:	e3300000 	teq	r0, #0	; 0x0
        1b6b0c:	0a000005 	beq	1b6b28 <TRosRecognizer::AreaInfoSetParameters(char **)+0x48>
        1b6b10:	e3a03000 	mov	r3, #0	; 0x0
        1b6b14:	e3a02000 	mov	r2, #0	; 0x0
        1b6b18:	e3a01000 	mov	r1, #0	; 0x0
        1b6b1c:	e3a00000 	mov	r0, #0	; 0x0
        1b6b20:	eb66ef82 	bl	1b72930 <$RosettaClassify>
        1b6b24:	e1a06000 	mov	r6, r0
        1b6b28:	eb66ef84 	bl	1b72940 <$RosettaInitializeValues>
        1b6b2c:	e1806006 	orr	r6, r0, r6
        1b6b30:	e1a00004 	mov	r0, r4
        1b6b34:	eb68ad74 	bl	1be210c <$HLock>
        1b6b38:	e5940000 	ldr	r0, [r4]
        1b6b3c:	eb66ef81 	bl	1b72948 <$RosettaSetArea>
        1b6b40:	e1806006 	orr	r6, r0, r6
        1b6b44:	e5940000 	ldr	r0, [r4]
        1b6b48:	e5d00060 	ldrb	r0, [r0, #96]	; fField96
        1b6b4c:	e5a50018 	str	r0, [r5, #24]!	; fField24
        1b6b50:	e1a00004 	mov	r0, r4
        1b6b54:	eb68ad6e 	bl	1be2114 <$HUnlock>
        1b6b58:	e3360000 	teq	r6, #0	; 0x0
        1b6b5c:	0a000004 	beq	1b6b74 <TRosRecognizer::AreaInfoSetParameters(char **)+0x94>
        1b6b60:	e59f0010 	ldr	r0, [pc, #10]	; 1b6b78 <TRosRecognizer::AreaInfoSetParameters(char **)+0x98>
        1b6b64:	e5900000 	ldr	r0, [r0]
        1b6b68:	e3a02000 	mov	r2, #0	; 0x0
        1b6b6c:	e3a01000 	mov	r1, #0	; 0x0
        1b6b70:	eb68b189 	bl	1be319c <$Throw>
        1b6b74:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1b6b78:	003712b4 	ldreqh	r1, [r7], -r4
    */
}

/**
 * Symbol: TRosRecognizer::UnitInfoFreePtr(char *)
 * Address: 001b6b94
 */
TRosRecognizer::UnitInfoFreePtr(char *) {
    /*
        1b6b94:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRosRecognizer::VerifyWordSymbols(unsigned short *)
 * Address: 001b6b98
 */
TRosRecognizer::VerifyWordSymbols(unsigned short *) {
    /*
        1b6b98:	e1a0c00d 	mov	ip, sp
        1b6b9c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1b6ba0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b6ba4:	e1a04001 	mov	r4, r1
        1b6ba8:	e24dd054 	sub	sp, sp, #84	; 0x54
        1b6bac:	e1a00001 	mov	r0, r1
        1b6bb0:	eb68deea 	bl	1bee760 <$Ustrlen>
        1b6bb4:	e3500046 	cmp	r0, #70	; 0x46
        1b6bb8:	83a00000 	movhi	r0, #0	; 0x0
        1b6bbc:	8a000006 	bhi	1b6bdc <TRosRecognizer::VerifyWordSymbols(unsigned short *)+0x44>
        1b6bc0:	e1a0100d 	mov	r1, sp
        1b6bc4:	e1a00004 	mov	r0, r4
        1b6bc8:	e3a03050 	mov	r3, #80	; 0x50
        1b6bcc:	e3a02001 	mov	r2, #1	; 0x1
        1b6bd0:	eb68c1ea 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
        1b6bd4:	e1a0000d 	mov	r0, sp
        1b6bd8:	eb66ef5c 	bl	1b72950 <$RosettaVerifyWordSymbols>
        1b6bdc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TRosRecognizer::UnitConfidence(TWRecUnit *)
 * Address: 001b6be0
 */
TRosRecognizer::UnitConfidence(TWRecUnit *) {
    /*
        1b6be0:	e1a0c00d 	mov	ip, sp
        1b6be4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1b6be8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b6bec:	e3a02000 	mov	r2, #0	; 0x0
        1b6bf0:	eb695696 	bl	1c0c650 <TWRecognizer::$GetScore(TWRecUnit *, unsigned long)>
        1b6bf4:	e3500fe1 	cmp	r0, #900	; 0x384
        1b6bf8:	33a00000 	movcc	r0, #0	; 0x0
        1b6bfc:	23a00002 	movcs	r0, #2	; 0x2
        1b6c00:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TRosRecognizer::Sleep(void)
 * Address: 001b6c04
 */
TRosRecognizer::Sleep(void) {
    /*
        1b6c04:	e1a0c00d 	mov	ip, sp
        1b6c08:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1b6c0c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b6c10:	eb66ef4d 	bl	1b7294c <$RosettaSleep>
        1b6c14:	e3300000 	teq	r0, #0	; 0x0
        1b6c18:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        1b6c1c:	e59f0010 	ldr	r0, [pc, #10]	; 1b6c34 <TRosRecognizer::Sleep(void)+0x30>
        1b6c20:	e5900000 	ldr	r0, [r0]
        1b6c24:	e3a02000 	mov	r2, #0	; 0x0
        1b6c28:	e3a01000 	mov	r1, #0	; 0x0
        1b6c2c:	e91b6800 	ldmdb	fp, {fp, sp, lr}
        1b6c30:	ea68b159 	b	1be319c <$Throw>
        1b6c34:	003712b4 	ldreqh	r1, [r7], -r4
    */
}

/**
 * Symbol: TRosRecognizer::WakeUp(void)
 * Address: 001b6c38
 */
TRosRecognizer::WakeUp(void) {
    /*
        1b6c38:	ea66ef3a 	b	1b72928 <$RosettaAwaken>
    */
}

/**
 * Symbol: TRosRecognizer::New(void)
 * Address: 001b6c44
 */
TRosRecognizer::New(void) {
    /*
        1b6c44:	e59f1010 	ldr	r1, [pc, #10]	; 1b6c5c <TRosRecognizer::New(void)+0x18>
        1b6c48:	e5810000 	str	r0, [r1]
        1b6c4c:	e3a01000 	mov	r1, #0	; 0x0
        1b6c50:	e5c0101c 	strb	r1, [r0, #28]	; fField28
        1b6c54:	e5801020 	str	r1, [r0, #32]	; fField32
        1b6c58:	e1a0f00e 	mov	pc, lr
        1b6c5c:	0c10194c 	ldceq	9, cr1, [r0], -#304
    */
}

/**
 * Symbol: TRosRecognizer::AddRosettaWordsToInterpretation(TWRecUnit *, unsigned long, char **, unsigned short *)
 * Address: 001b6c60
 */
TRosRecognizer::AddRosettaWordsToInterpretation(TWRecUnit *, unsigned long, char **, unsigned short *) {
    /*
        1b6c60:	e1a0c00d 	mov	ip, sp
        1b6c64:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1b6c68:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1b6c6c:	e24cb014 	sub	fp, ip, #20	; 0x14
        1b6c70:	e1a04000 	mov	r4, r0
        1b6c74:	e1a05001 	mov	r5, r1
        1b6c78:	e1a06002 	mov	r6, r2
        1b6c7c:	e3a07000 	mov	r7, #0	; 0x0
        1b6c80:	e3520000 	cmp	r2, #0	; 0x0
        1b6c84:	e59ba014 	ldr	sl, [fp, #20]	; fField20
        1b6c88:	991baff0 	ldmlsdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1b6c8c:	e1a01005 	mov	r1, r5
        1b6c90:	e1a00004 	mov	r0, r4
        1b6c94:	eb695661 	bl	1c0c620 <TWRecognizer::$AddWordInterpretation(TWRecUnit *)>
        1b6c98:	e1a08000 	mov	r8, r0
        1b6c9c:	e3700001 	cmn	r0, #1	; 0x1
        1b6ca0:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1b6ca4:	e59b3010 	ldr	r3, [fp, #16]	; fField16
        1b6ca8:	e7933107 	ldr	r3, [r3, r7, lsl #2]
        1b6cac:	e79a9087 	ldr	r9, [sl, r7, lsl #1]	; fField1
        1b6cb0:	e1a09829 	mov	r9, r9, lsr #16
        1b6cb4:	e1a02008 	mov	r2, r8
        1b6cb8:	e1a01005 	mov	r1, r5
        1b6cbc:	e1a00004 	mov	r0, r4
        1b6cc0:	eb695a6f 	bl	1c0d684 <TWRecognizer::$SetCharWordString(TWRecUnit *, unsigned long, char *)>
        1b6cc4:	e1a03009 	mov	r3, r9
        1b6cc8:	e1a02008 	mov	r2, r8
        1b6ccc:	e1a01005 	mov	r1, r5
        1b6cd0:	e1a00004 	mov	r0, r4
        1b6cd4:	eb695a6c 	bl	1c0d68c <TWRecognizer::$SetScore(TWRecUnit *, unsigned long, unsigned long)>
        1b6cd8:	e1a02008 	mov	r2, r8
        1b6cdc:	e1a01005 	mov	r1, r5
        1b6ce0:	e5943018 	ldr	r3, [r4, #24]	; fField24
        1b6ce4:	e1a00004 	mov	r0, r4
        1b6ce8:	eb695a66 	bl	1c0d688 <TWRecognizer::$SetLabel(TWRecUnit *, unsigned long, unsigned long)>
        1b6cec:	e2877001 	add	r7, r7, #1	; 0x1
        1b6cf0:	e1570006 	cmp	r7, r6
        1b6cf4:	3affffe4 	bcc	1b6c8c <TRosRecognizer::AddRosettaWordsToInterpretation(TWRecUnit *, unsigned long, char **, unsigned short *)+0x2c>
        1b6cf8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TRosRecognizer::Initialize(void)
 * Address: 001b6f54
 */
TRosRecognizer::Initialize(void) {
    /*
        1b6f54:	e1a0c00d 	mov	ip, sp
        1b6f58:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1b6f5c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b6f60:	e1a04000 	mov	r4, r0
        1b6f64:	e24dd044 	sub	sp, sp, #68	; 0x44
        1b6f68:	e28d003c 	add	r0, sp, #60	; 0x3c
        1b6f6c:	eb6859d9 	bl	1bcd6d8 <TUGestalt::$__ct(void)>
        1b6f70:	e3a00000 	mov	r0, #0	; 0x0
        1b6f74:	e1a0200d 	mov	r2, sp
        1b6f78:	e5a40014 	str	r0, [r4, #20]!	; fField20
        1b6f7c:	e28d003c 	add	r0, sp, #60	; 0x3c
        1b6f80:	e3a0303c 	mov	r3, #60	; 0x3c
        1b6f84:	e3a01401 	mov	r1, #16777216	; 0x1000000
        1b6f88:	e2811003 	add	r1, r1, #3	; 0x3
        1b6f8c:	eb686e76 	bl	1bd296c <TUGestalt::$Gestalt(unsigned long, void *, unsigned long)>
        1b6f90:	e59d0022 	ldr	r0, [sp, #34]
        1b6f94:	e1a01800 	mov	r1, r0, lsl #16
        1b6f98:	e3a00055 	mov	r0, #85	; 0x55
        1b6f9c:	eb67ee67 	bl	1bb2940 <$__rt_sdiv>
        1b6fa0:	e1a04300 	mov	r4, r0, lsl #6
        1b6fa4:	e59d0020 	ldr	r0, [sp, #32]	; fField32
        1b6fa8:	e1a01800 	mov	r1, r0, lsl #16
        1b6fac:	e3a00055 	mov	r0, #85	; 0x55
        1b6fb0:	eb67ee62 	bl	1bb2940 <$__rt_sdiv>
        1b6fb4:	e1a01004 	mov	r1, r4
        1b6fb8:	e1a00300 	mov	r0, r0, lsl #6
        1b6fbc:	e59f202c 	ldr	r2, [pc, #2c]	; 1b6ff0 <TRosRecognizer::Initialize(void)+0x9c>
        1b6fc0:	eb66ee5d 	bl	1b7293c <$RosettaInitialize>
        1b6fc4:	e3300000 	teq	r0, #0	; 0x0
        1b6fc8:	0a000004 	beq	1b6fe0 <TRosRecognizer::Initialize(void)+0x8c>
        1b6fcc:	e59f0020 	ldr	r0, [pc, #20]	; 1b6ff4 <TRosRecognizer::Initialize(void)+0xa0>	; fField20
        1b6fd0:	e5900000 	ldr	r0, [r0]
        1b6fd4:	e3a02000 	mov	r2, #0	; 0x0
        1b6fd8:	e3a01000 	mov	r1, #0	; 0x0
        1b6fdc:	eb68b06e 	bl	1be319c <$Throw>
        1b6fe0:	e28d003c 	add	r0, sp, #60	; 0x3c
        1b6fe4:	e3a01000 	mov	r1, #0	; 0x0
        1b6fe8:	eb685dcd 	bl	1bce724 <TUObject::$__dt(void)>
        1b6fec:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1b6ff0:	01b77bb4 	ldreqh	r7, [r7, r4]!
        1b6ff4:	003712b4 	ldreqh	r1, [r7], -r4
    */
}

/**
 * Symbol: TRosRecognizer::Delete(void)
 * Address: 001b6ff8
 */
TRosRecognizer::Delete(void) {
    /*
        1b6ff8:	e3a00000 	mov	r0, #0	; 0x0
        1b6ffc:	e59f1004 	ldr	r1, [pc, #4]	; 1b7008 <TRosRecognizer::Delete(void)+0x10>	; fField4
        1b7000:	e5810000 	str	r0, [r1]
        1b7004:	e1a0f00e 	mov	pc, lr
        1b7008:	0c10194c 	ldceq	9, cr1, [r0], -#304
    */
}

/**
 * Symbol: TRosRecognizer::Group(TStrokeUnit *)
 * Address: 001b700c
 */
TRosRecognizer::Group(TStrokeUnit *) {
    /*
        1b700c:	e1a0c00d 	mov	ip, sp
        1b7010:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1b7014:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b7018:	e1a04000 	mov	r4, r0
        1b701c:	e1a05001 	mov	r5, r1
        1b7020:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b7024:	e28d1004 	add	r1, sp, #4	; 0x4
        1b7028:	eb695585 	bl	1c0c644 <TWRecognizer::$GetPartialGroup(unsigned char *)>
        1b702c:	e1a01000 	mov	r1, r0
        1b7030:	e3a00000 	mov	r0, #0	; 0x0
        1b7034:	e5c4001c 	strb	r0, [r4, #28]	; fField28
        1b7038:	e5dd0004 	ldrb	r0, [sp, #4]	; fField4
        1b703c:	e59f7014 	ldr	r7, [pc, #14]	; 1b7058 <TRosRecognizer::Group(TStrokeUnit *)+0x4c>
        1b7040:	e3300000 	teq	r0, #0	; 0x0
        1b7044:	0a000004 	beq	1b705c <TRosRecognizer::Group(TStrokeUnit *)+0x50>
        1b7048:	e1a02005 	mov	r2, r5
        1b704c:	e1a00004 	mov	r0, r4
        1b7050:	eb695571 	bl	1c0c61c <TWRecognizer::$AddSub(TWRecUnit *, TStrokeUnit *)>
        1b7054:	ea00000a 	b	1b7084 <TRosRecognizer::Group(TStrokeUnit *)+0x78>
        1b7058:	003712b4 	ldreqh	r1, [r7], -r4
        1b705c:	eb66ee37 	bl	1b72940 <$RosettaInitializeValues>
        1b7060:	e3300000 	teq	r0, #0	; 0x0
        1b7064:	0a000003 	beq	1b7078 <TRosRecognizer::Group(TStrokeUnit *)+0x6c>
        1b7068:	e3a02000 	mov	r2, #0	; 0x0
        1b706c:	e3a01000 	mov	r1, #0	; 0x0
        1b7070:	e5970000 	ldr	r0, [r7]
        1b7074:	eb68b048 	bl	1be319c <$Throw>
        1b7078:	e1a01005 	mov	r1, r5
        1b707c:	e1a00004 	mov	r0, r4
        1b7080:	eb69557c 	bl	1c0c678 <TWRecognizer::$MakeNewGroupFromStroke(TStrokeUnit *)>
        1b7084:	e1a0200d 	mov	r2, sp
        1b7088:	e1a01005 	mov	r1, r5
        1b708c:	e1a00004 	mov	r0, r4
        1b7090:	eb66feb6 	bl	1b76b70 <TRosRecognizer::$AllocateAndConvertStrokeForRosetta(TStrokeUnit *, FPoint **)>
        1b7094:	e1a08000 	mov	r8, r0
        1b7098:	e1a01005 	mov	r1, r5
        1b709c:	e1a00004 	mov	r0, r4
        1b70a0:	eb695561 	bl	1c0c62c <TWRecognizer::$GetEndTime(TStrokeUnit *)>
        1b70a4:	e1a06000 	mov	r6, r0
        1b70a8:	e1a01005 	mov	r1, r5
        1b70ac:	e1a00004 	mov	r0, r4
        1b70b0:	eb695567 	bl	1c0c654 <TWRecognizer::$GetStartTime(TStrokeUnit *)>
        1b70b4:	e1a02000 	mov	r2, r0
        1b70b8:	e1a00008 	mov	r0, r8
        1b70bc:	e1a03006 	mov	r3, r6
        1b70c0:	e59d1000 	ldr	r1, [sp]
        1b70c4:	eb66ee19 	bl	1b72930 <$RosettaClassify>
        1b70c8:	e3300000 	teq	r0, #0	; 0x0
        1b70cc:	0a000003 	beq	1b70e0 <TRosRecognizer::Group(TStrokeUnit *)+0xd4>
        1b70d0:	e3a02000 	mov	r2, #0	; 0x0
        1b70d4:	e3a01000 	mov	r1, #0	; 0x0
        1b70d8:	e5970000 	ldr	r0, [r7]
        1b70dc:	eb68b02e 	bl	1be319c <$Throw>
        1b70e0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TRosRecognizer::AllocateAndConvertStrokeForRosetta(TStrokeUnit *, FPoint **)
 * Address: 001b70e4
 */
TRosRecognizer::AllocateAndConvertStrokeForRosetta(TStrokeUnit *, FPoint **) {
    /*
        1b70e4:	e1a0c00d 	mov	ip, sp
        1b70e8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1b70ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b70f0:	e1a04000 	mov	r4, r0
        1b70f4:	e1a05002 	mov	r5, r2
        1b70f8:	eb695969 	bl	1c0d6a4 <TWRecognizer::$StrokeUnitStroke(TStrokeUnit *)>
        1b70fc:	e1a01000 	mov	r1, r0
        1b7100:	e1a02005 	mov	r2, r5
        1b7104:	e1a00004 	mov	r0, r4
        1b7108:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1b710c:	ea66fe98 	b	1b76b74 <TRosRecognizer::$AllocateAndConvertStrokeForRosetta(TStroke *, FPoint **)>
        1b7110:	6576742e 	ldrvsb	r7, [r6, -#1070]!
        1b7114:	65782e52 	ldrvsb	r2, [r8, -#3666]!
        1b7118:	6f736574 	swivs	0x00736574
        1b711c:	74610000 	strvcbt	r0, [r1]
    */
}

/**
 * Symbol: ClassInfo__14TRosRecognizerSFv
 * Address: 00388d14
 */
void TRosRecognizer::ClassInfo() {
    /*
        388d14:	e24f0044 	sub	r0, pc, #68	; 0x44
        388d18:	e1a0f00e 	mov	pc, lr
        388d1c:	e3a00000 	mov	r0, #0	; 0x0
        388d20:	e1a0f00e 	mov	pc, lr
        388d24:	54526f73 	ldrplb	r6, [r2], -#3955
        388d28:	5265636f 	rsbpl	r6, r5, #-1140850687	; 0xbc000001
        388d2c:	676e697a 	undefined
        388d30:	65720054 	ldrvsb	r0, [r2, -#84]!
        388d34:	57526563 	ldrplb	r6, [r2, -r3, ror #10]
        388d38:	6f676e69 	swivs	0x00676e69
        388d3c:	7a657200 	bvc	1ce5544 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xd4cec>
        388d48:	eafffff1 	b	388d14 <ClassInfo__14TRosRecognizerSFv>
        388d4c:	ea5fbb94 	b	1b77ba4 <TRosRecognizer::$New(void)>
        388d50:	ea5fbb8e 	b	1b77b90 <TRosRecognizer::$Delete(void)>
        388d54:	ea5fbb91 	b	1b77ba0 <TRosRecognizer::$Initialize(void)>
        388d58:	ea5fbb8f 	b	1b77b9c <TRosRecognizer::$Group(TStrokeUnit *)>
        388d5c:	ea5fbb8a 	b	1b77b8c <TRosRecognizer::$Classify(TWRecUnit *)>
        388d60:	ea5fbb90 	b	1b77ba8 <TRosRecognizer::$Reclassify(TWRecUnit *)>
        388d64:	ea5fbb8b 	b	1b77b98 <TRosRecognizer::$FindBaseline(TStroke **, Point *)>
        388d68:	ea5fbb97 	b	1b77bcc <TRosRecognizer::$GroupInkStroke(TStrokeUnit *, unsigned long, unsigned long, unsigned char)>
        388d6c:	ea5fbb84 	b	1b77b84 <TRosRecognizer::$AreaInfoGetSize(void)>
        388d70:	ea5fb781 	b	1b76b7c <TRosRecognizer::$AreaInfoFillDefaults(char **)>
        388d74:	ea5fb77f 	b	1b76b78 <TRosRecognizer::$AreaInfoConfigure(char **, RefVar const &)>
        388d78:	ea5fbb80 	b	1b77b80 <TRosRecognizer::$AreaInfoFreeDependents(char **)>
        388d7c:	ea5fbb81 	b	1b77b88 <TRosRecognizer::$AreaInfoSetParameters(char **)>
        388d80:	ea5fbb8e 	b	1b77bc0 <TRosRecognizer::$UnitInfoFreePtr(char *)>
        388d84:	ea5fbb8e 	b	1b77bc4 <TRosRecognizer::$VerifyWordSymbols(unsigned short *)>
        388d88:	ea5fbb8b 	b	1b77bbc <TRosRecognizer::$UnitConfidence(TWRecUnit *)>
        388d8c:	ea5fbb89 	b	1b77bb8 <TRosRecognizer::$Sleep(void)>
        388d90:	ea5fbb8c 	b	1b77bc8 <TRosRecognizer::$WakeUp(void)>
        388d94:	e1a0000f 	mov	r0, pc
        388d98:	e1a0f00e 	mov	pc, lr
        388d9c:	54536f75 	ldrplb	r6, [r3], -#3957
        388da0:	6e64436f 	cdpvs	3, 6, cr4, cr4, cr15, {3}
        388da4:	64656300 	strvsbt	r6, [r5], -#768
    */
}

