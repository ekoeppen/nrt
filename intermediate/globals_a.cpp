#include "Newton.h"

/**
 * Symbol: ArcTurnsOK__FP8low_type9_ARC_TYPEiT3
 * Address: 0002620c
 */
void globals::ArcTurnsOK() {
    /*
         2620c:	e1a0c00d 	mov	ip, sp
         26210:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         26214:	e24cb004 	sub	fp, ip, #4	; 0x4
         26218:	e1a04000 	mov	r4, r0
         2621c:	e1a06002 	mov	r6, r2
         26220:	e1a05003 	mov	r5, r3
         26224:	e24dd008 	sub	sp, sp, #8	; 0x8
         26228:	e3310006 	teq	r1, #6	; 0x6
         2622c:	e590a038 	ldr	sl, [r0, #56]
         26230:	03e08000 	mvneq	r8, #0	; 0x0
         26234:	0a000002 	beq	26244 <ArcTurnsOK__FP8low_type9_ARC_TYPEiT3+0x38>
         26238:	e3310007 	teq	r1, #7	; 0x7
         2623c:	13a08000 	movne	r8, #0	; 0x0
         26240:	03a08001 	moveq	r8, #1	; 0x1
         26244:	e1a03005 	mov	r3, r5
         26248:	e1a02006 	mov	r2, r6
         2624c:	e1a0100d 	mov	r1, sp
         26250:	e1a00004 	mov	r0, r4
         26254:	eb6c044e 	bl	1b27394 <$CrookCalc__FP8low_typePsiT3>
         26258:	e1a01000 	mov	r1, r0
         2625c:	e0000891 	mul	r0, r1, r8
         26260:	e3a07001 	mov	r7, #1	; 0x1
         26264:	e2477902 	sub	r7, r7, #32768	; 0x8000
         26268:	e1500007 	cmp	r0, r7
         2626c:	c1a07000 	movgt	r7, r0
         26270:	e08a0086 	add	r0, sl, r6, lsl #1
         26274:	e58d0004 	str	r0, [sp, #4]
         26278:	e5100002 	ldr	r0, [r0, -#2]
         2627c:	e1a00840 	mov	r0, r0, asr #16
         26280:	e2469001 	sub	r9, r6, #1	; 0x1
         26284:	e3700001 	cmn	r0, #1	; 0x1
         26288:	0a000007 	beq	262ac <ArcTurnsOK__FP8low_type9_ARC_TYPEiT3+0xa0>
         2628c:	e1a02009 	mov	r2, r9
         26290:	e1a03005 	mov	r3, r5
         26294:	e1a0100d 	mov	r1, sp
         26298:	e1a00004 	mov	r0, r4
         2629c:	eb6c043c 	bl	1b27394 <$CrookCalc__FP8low_typePsiT3>
         262a0:	e0010890 	mul	r1, r0, r8
         262a4:	e1510007 	cmp	r1, r7
         262a8:	c1a07001 	movgt	r7, r1
         262ac:	e08aa085 	add	sl, sl, r5, lsl #1
         262b0:	e59a0002 	ldr	r0, [sl, #2]
         262b4:	e1a00840 	mov	r0, r0, asr #16
         262b8:	e2855001 	add	r5, r5, #1	; 0x1
         262bc:	e3700001 	cmn	r0, #1	; 0x1
         262c0:	0a000008 	beq	262e8 <ArcTurnsOK__FP8low_type9_ARC_TYPEiT3+0xdc>
         262c4:	e1a03005 	mov	r3, r5
         262c8:	e1a02006 	mov	r2, r6
         262cc:	e1a0100d 	mov	r1, sp
         262d0:	e1a00004 	mov	r0, r4
         262d4:	eb6c042e 	bl	1b27394 <$CrookCalc__FP8low_typePsiT3>
         262d8:	e1a01000 	mov	r1, r0
         262dc:	e0000891 	mul	r0, r1, r8
         262e0:	e1500007 	cmp	r0, r7
         262e4:	c1a07000 	movgt	r7, r0
         262e8:	e59d0004 	ldr	r0, [sp, #4]
         262ec:	e5100002 	ldr	r0, [r0, -#2]
         262f0:	e1a00840 	mov	r0, r0, asr #16
         262f4:	e3700001 	cmn	r0, #1	; 0x1
         262f8:	159a0002 	ldrne	r0, [sl, #2]
         262fc:	11a00840 	movne	r0, r0, asr #16
         26300:	13700001 	cmnne	r0, #1	; 0x1
         26304:	0a000007 	beq	26328 <ArcTurnsOK__FP8low_type9_ARC_TYPEiT3+0x11c>
         26308:	e1a03005 	mov	r3, r5
         2630c:	e1a02009 	mov	r2, r9
         26310:	e1a0100d 	mov	r1, sp
         26314:	e1a00004 	mov	r0, r4
         26318:	eb6c041d 	bl	1b27394 <$CrookCalc__FP8low_typePsiT3>
         2631c:	e0010890 	mul	r1, r0, r8
         26320:	e1510007 	cmp	r1, r7
         26324:	c1a07001 	movgt	r7, r1
         26328:	e3570008 	cmp	r7, #8	; 0x8
         2632c:	a3a00001 	movge	r0, #1	; 0x1
         26330:	b3a00000 	movlt	r0, #0	; 0x0
         26334:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: AEnum_AddWord(AirusAParmBlock *)
 * Address: 00029b10
 */
AEnum_AddWord(AirusAParmBlock *) {
    /*
         29b10:	e1a0c00d 	mov	ip, sp
         29b14:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         29b18:	e24cb004 	sub	fp, ip, #4	; 0x4
         29b1c:	e24ddf82 	sub	sp, sp, #520	; 0x208
         29b20:	e3a06000 	mov	r6, #0	; 0x0
         29b24:	eb675d73 	bl	1a010f8 <$CheckDictPtrs(AirusAParmBlock *)>
         29b28:	e59f4074 	ldr	r4, [pc, #74]	; 29ba4 <AEnum_AddWord(AirusAParmBlock *)+0x94>
         29b2c:	e5940000 	ldr	r0, [r4]
         29b30:	e590001c 	ldr	r0, [r0, #28]
         29b34:	e28d1004 	add	r1, sp, #4	; 0x4
         29b38:	e3a02000 	mov	r2, #0	; 0x0
         29b3c:	eb676171 	bl	1a02108 <$CopyBufferHack(unsigned char *, unsigned short *, int)>
         29b40:	e28d0004 	add	r0, sp, #4	; 0x4
         29b44:	e58d0204 	str	r0, [sp, #516]
         29b48:	eb675944 	bl	1a00060 <$Ashortstrlen(unsigned short *)>
         29b4c:	e0800fa0 	add	r0, r0, r0, lsr #31
         29b50:	e1a000c0 	mov	r0, r0, asr #1
         29b54:	e5941000 	ldr	r1, [r4]
         29b58:	e5912008 	ldr	r2, [r1, #8]
         29b5c:	e5922000 	ldr	r2, [r2]
         29b60:	e5d22001 	ldrb	r2, [r2, #1]
         29b64:	e2022007 	and	r2, r2, #7	; 0x7
         29b68:	e3320005 	teq	r2, #5	; 0x5
         29b6c:	13320002 	teqne	r2, #2	; 0x2
         29b70:	03a02002 	moveq	r2, #2	; 0x2
         29b74:	13a02001 	movne	r2, #1	; 0x1
         29b78:	e2822001 	add	r2, r2, #1	; 0x1
         29b7c:	e0000092 	mul	r0, r2, r0
         29b80:	e5911034 	ldr	r1, [r1, #52]
         29b84:	e0800001 	add	r0, r0, r1
         29b88:	e2800064 	add	r0, r0, #100	; 0x64
         29b8c:	eb67615e 	bl	1a0210c <$ExpandDict(unsigned long)>
         29b90:	e3300000 	teq	r0, #0	; 0x0
         29b94:	0a000003 	beq	29ba8 <AEnum_AddWord(AirusAParmBlock *)+0x98>
         29b98:	e5941000 	ldr	r1, [r4]
         29b9c:	e5a1002c 	str	r0, [r1, #44]!
         29ba0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         29ba4:	0c10082c 	ldceq	8, cr0, [r0], -#176
         29ba8:	e3a0003f 	mov	r0, #63	; 0x3f
         29bac:	e1a0100d 	mov	r1, sp
         29bb0:	e5840004 	str	r0, [r4, #4]
         29bb4:	e28d0f81 	add	r0, sp, #516	; 0x204
         29bb8:	eb676154 	bl	1a02110 <$FindInsertionPoint(unsigned short **, unsigned long *)>
         29bbc:	e1a05000 	mov	r5, r0
         29bc0:	e59d1204 	ldr	r1, [sp, #516]
         29bc4:	e5910000 	ldr	r0, [r1]
         29bc8:	e1b00820 	movs	r0, r0, lsr #16
         29bcc:	1a000023 	bne	29c60 <AEnum_AddWord(AirusAParmBlock *)+0x150>
         29bd0:	e59d2000 	ldr	r2, [sp]
         29bd4:	e1a03002 	mov	r3, r2
         29bd8:	e5941000 	ldr	r1, [r4]
         29bdc:	e5910008 	ldr	r0, [r1, #8]
         29be0:	e5900000 	ldr	r0, [r0]
         29be4:	e5d00001 	ldrb	r0, [r0, #1]
         29be8:	e2000007 	and	r0, r0, #7	; 0x7
         29bec:	e3300005 	teq	r0, #5	; 0x5
         29bf0:	13300002 	teqne	r0, #2	; 0x2
         29bf4:	03a0c002 	moveq	ip, #2	; 0x2
         29bf8:	13a0c001 	movne	ip, #1	; 0x1
         29bfc:	e591100c 	ldr	r1, [r1, #12]
         29c00:	e0811003 	add	r1, r1, r3
         29c04:	e7d1300c 	ldrb	r3, [r1, ip]
         29c08:	e3130010 	tst	r3, #16	; 0x10
         29c0c:	0a000007 	beq	29c30 <AEnum_AddWord(AirusAParmBlock *)+0x120>
         29c10:	e1a00002 	mov	r0, r2
         29c14:	eb676155 	bl	1a02170 <$SkipNode(unsigned long)>
         29c18:	e58d0000 	str	r0, [sp]
         29c1c:	eb67613f 	bl	1a02120 <$GetAttr(unsigned long)>
         29c20:	e5941000 	ldr	r1, [r4]
         29c24:	e3a06001 	mov	r6, #1	; 0x1
         29c28:	e5a10024 	str	r0, [r1, #36]!
         29c2c:	ea00000e 	b	29c6c <AEnum_AddWord(AirusAParmBlock *)+0x15c>
         29c30:	e3300005 	teq	r0, #5	; 0x5
         29c34:	13300002 	teqne	r0, #2	; 0x2
         29c38:	03a00002 	moveq	r0, #2	; 0x2
         29c3c:	13a00001 	movne	r0, #1	; 0x1
         29c40:	e7f01001 	ldrb	r1, [r0, r1]!
         29c44:	e3811010 	orr	r1, r1, #16	; 0x10
         29c48:	e5c01000 	strb	r1, [r0]
         29c4c:	e59d0000 	ldr	r0, [sp]
         29c50:	eb676146 	bl	1a02170 <$SkipNode(unsigned long)>
         29c54:	e58d0000 	str	r0, [sp]
         29c58:	eb67613b 	bl	1a0214c <$PutAttr(unsigned long)>
         29c5c:	ea000001 	b	29c68 <AEnum_AddWord(AirusAParmBlock *)+0x158>
         29c60:	e59d0000 	ldr	r0, [sp]
         29c64:	eb67613b 	bl	1a02158 <$PutWord(unsigned long, unsigned short *)>
         29c68:	e0805005 	add	r5, r0, r5
         29c6c:	e5940004 	ldr	r0, [r4, #4]
         29c70:	e330003f 	teq	r0, #63	; 0x3f
         29c74:	11a00005 	movne	r0, r5
         29c78:	13a01000 	movne	r1, #0	; 0x0
         29c7c:	1b676124 	blne	1a02114 <$FixupPointers(unsigned long, Operation)>
         29c80:	e1a00006 	mov	r0, r6
         29c84:	eaffffc3 	b	29b98 <AEnum_AddWord(AirusAParmBlock *)+0x88>
         29c88:	e1a0c00d 	mov	ip, sp
         29c8c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         29c90:	e24cb004 	sub	fp, ip, #4	; 0x4
         29c94:	e1a04000 	mov	r4, r0
         29c98:	e1a07001 	mov	r7, r1
         29c9c:	e1a06002 	mov	r6, r2
         29ca0:	e1a05003 	mov	r5, r3
         29ca4:	e3a08002 	mov	r8, #2	; 0x2
         29ca8:	e5828000 	str	r8, [r2]
         29cac:	e5818000 	str	r8, [r1]
         29cb0:	e59f90fc 	ldr	r9, [pc, #fc]	; 29db4 <AEnum_AddWord(AirusAParmBlock *)+0x2a4>
         29cb4:	e5990000 	ldr	r0, [r9]
         29cb8:	e280100c 	add	r1, r0, #12	; 0xc
         29cbc:	e8910003 	ldmia	r1, {r0, r1}
         29cc0:	e0410000 	sub	r0, r1, r0
         29cc4:	e5830000 	str	r0, [r3]
         29cc8:	e5940000 	ldr	r0, [r4]
         29ccc:	e1b00820 	movs	r0, r0, lsr #16
         29cd0:	0a000057 	beq	29e34 <AEnum_AddWord(AirusAParmBlock *)+0x324>
         29cd4:	e59fa0dc 	ldr	sl, [pc, #dc]	; 29db8 <AEnum_AddWord(AirusAParmBlock *)+0x2a8>
         29cd8:	e1a00008 	mov	r0, r8
         29cdc:	eb676113 	bl	1a02130 <$GetSymbol(unsigned long)>
         29ce0:	e5941000 	ldr	r1, [r4]
         29ce4:	e1300821 	teq	r0, r1, lsr #16
         29ce8:	0a000017 	beq	29d4c <AEnum_AddWord(AirusAParmBlock *)+0x23c>
         29cec:	e5990000 	ldr	r0, [r9]
         29cf0:	e5901008 	ldr	r1, [r0, #8]
         29cf4:	e5911000 	ldr	r1, [r1]
         29cf8:	e5d11001 	ldrb	r1, [r1, #1]
         29cfc:	e2011007 	and	r1, r1, #7	; 0x7
         29d00:	e3310005 	teq	r1, #5	; 0x5
         29d04:	13310002 	teqne	r1, #2	; 0x2
         29d08:	03a01002 	moveq	r1, #2	; 0x2
         29d0c:	13a01001 	movne	r1, #1	; 0x1
         29d10:	e590000c 	ldr	r0, [r0, #12]
         29d14:	e0800008 	add	r0, r0, r8
         29d18:	e7d00001 	ldrb	r0, [r0, r1]
         29d1c:	e20000c0 	and	r0, r0, #192	; 0xc0
         29d20:	e1b00320 	movs	r0, r0, lsr #6
         29d24:	0a000037 	beq	29e08 <AEnum_AddWord(AirusAParmBlock *)+0x2f8>
         29d28:	e5878000 	str	r8, [r7]
         29d2c:	e1a00008 	mov	r0, r8
         29d30:	eb6760f9 	bl	1a0211c <$FollowRight(unsigned long)>
         29d34:	e1a08000 	mov	r8, r0
         29d38:	e5860000 	str	r0, [r6]
         29d3c:	eb6760fb 	bl	1a02130 <$GetSymbol(unsigned long)>
         29d40:	e5941000 	ldr	r1, [r4]
         29d44:	e1300821 	teq	r0, r1, lsr #16
         29d48:	1affffe7 	bne	29cec <AEnum_AddWord(AirusAParmBlock *)+0x1dc>
         29d4c:	e5990004 	ldr	r0, [r9, #4]
         29d50:	e2400001 	sub	r0, r0, #1	; 0x1
         29d54:	e5890004 	str	r0, [r9, #4]
         29d58:	e78a8100 	str	r8, [sl, r0, lsl #2]
         29d5c:	e2844002 	add	r4, r4, #2	; 0x2
         29d60:	e5990000 	ldr	r0, [r9]
         29d64:	e590102c 	ldr	r1, [r0, #44]
         29d68:	e3310000 	teq	r1, #0	; 0x0
         29d6c:	0a000027 	beq	29e10 <AEnum_AddWord(AirusAParmBlock *)+0x300>
         29d70:	e5901008 	ldr	r1, [r0, #8]
         29d74:	e5911000 	ldr	r1, [r1]
         29d78:	e5d11001 	ldrb	r1, [r1, #1]
         29d7c:	e2011007 	and	r1, r1, #7	; 0x7
         29d80:	e3310005 	teq	r1, #5	; 0x5
         29d84:	13310002 	teqne	r1, #2	; 0x2
         29d88:	03a01002 	moveq	r1, #2	; 0x2
         29d8c:	13a01001 	movne	r1, #1	; 0x1
         29d90:	e590000c 	ldr	r0, [r0, #12]
         29d94:	e0800008 	add	r0, r0, r8
         29d98:	e7d00001 	ldrb	r0, [r0, r1]
         29d9c:	e20000c0 	and	r0, r0, #192	; 0xc0
         29da0:	e1b00320 	movs	r0, r0, lsr #6
         29da4:	0a000004 	beq	29dbc <AEnum_AddWord(AirusAParmBlock *)+0x2ac>
         29da8:	e1a00008 	mov	r0, r8
         29dac:	eb6760da 	bl	1a0211c <$FollowRight(unsigned long)>
         29db0:	ea000002 	b	29dc0 <AEnum_AddWord(AirusAParmBlock *)+0x2b0>
         29db4:	0c10082c 	ldceq	8, cr0, [r0], -#176
         29db8:	0c105df4 	ldceq	13, cr5, [r0], -#976
         29dbc:	e5950000 	ldr	r0, [r5]
         29dc0:	e5850000 	str	r0, [r5]
         29dc4:	e5991000 	ldr	r1, [r9]
         29dc8:	e5910008 	ldr	r0, [r1, #8]
         29dcc:	e5900000 	ldr	r0, [r0]
         29dd0:	e5d00001 	ldrb	r0, [r0, #1]
         29dd4:	e2000007 	and	r0, r0, #7	; 0x7
         29dd8:	e3300005 	teq	r0, #5	; 0x5
         29ddc:	13300002 	teqne	r0, #2	; 0x2
         29de0:	03a00002 	moveq	r0, #2	; 0x2
         29de4:	13a00001 	movne	r0, #1	; 0x1
         29de8:	e591100c 	ldr	r1, [r1, #12]
         29dec:	e0811008 	add	r1, r1, r8
         29df0:	e7d10000 	ldrb	r0, [r1, r0]
         29df4:	e3100020 	tst	r0, #32	; 0x20
         29df8:	15940000 	ldrne	r0, [r4]
         29dfc:	11a00820 	movne	r0, r0, lsr #16
         29e00:	13300000 	teqne	r0, #0	; 0x0
         29e04:	0a000004 	beq	29e1c <AEnum_AddWord(AirusAParmBlock *)+0x30c>
         29e08:	e3a00001 	mov	r0, #1	; 0x1
         29e0c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         29e10:	e1a00008 	mov	r0, r8
         29e14:	eb6760bf 	bl	1a02118 <$FollowLeft(unsigned long)>
         29e18:	eaffffe8 	b	29dc0 <AEnum_AddWord(AirusAParmBlock *)+0x2b0>
         29e1c:	e1a00008 	mov	r0, r8
         29e20:	eb6760bc 	bl	1a02118 <$FollowLeft(unsigned long)>
         29e24:	e1a08000 	mov	r8, r0
         29e28:	e5940000 	ldr	r0, [r4]
         29e2c:	e1b00820 	movs	r0, r0, lsr #16
         29e30:	1affffa8 	bne	29cd8 <AEnum_AddWord(AirusAParmBlock *)+0x1c8>
         29e34:	e3a00000 	mov	r0, #0	; 0x0
         29e38:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: AEnum_DeleteWord(AirusAParmBlock *)
 * Address: 00029e3c
 */
AEnum_DeleteWord(AirusAParmBlock *) {
    /*
         29e3c:	e1a0c00d 	mov	ip, sp
         29e40:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         29e44:	e24cb004 	sub	fp, ip, #4	; 0x4
         29e48:	e24ddf83 	sub	sp, sp, #524	; 0x20c
         29e4c:	eb675ca9 	bl	1a010f8 <$CheckDictPtrs(AirusAParmBlock *)>
         29e50:	e59f410c 	ldr	r4, [pc, #10c]	; 29f64 <AEnum_DeleteWord(AirusAParmBlock *)+0x128>
         29e54:	e5940000 	ldr	r0, [r4]
         29e58:	e1a01000 	mov	r1, r0
         29e5c:	e280200c 	add	r2, r0, #12	; 0xc
         29e60:	e8920005 	ldmia	r2, {r0, r2}
         29e64:	e0420000 	sub	r0, r2, r0
         29e68:	e3a06001 	mov	r6, #1	; 0x1
         29e6c:	e3300002 	teq	r0, #2	; 0x2
         29e70:	01a00006 	moveq	r0, r6
         29e74:	0a0000b1 	beq	2a140 <AEnum_DeleteWord(AirusAParmBlock *)+0x304>
         29e78:	e5b1001c 	ldr	r0, [r1, #28]!
         29e7c:	e1a0100d 	mov	r1, sp
         29e80:	e3a02000 	mov	r2, #0	; 0x0
         29e84:	eb67609f 	bl	1a02108 <$CopyBufferHack(unsigned char *, unsigned short *, int)>
         29e88:	e1a0000d 	mov	r0, sp
         29e8c:	e3a0103f 	mov	r1, #63	; 0x3f
         29e90:	e28d3c02 	add	r3, sp, #512	; 0x200
         29e94:	e28d2f81 	add	r2, sp, #516	; 0x204
         29e98:	e5841004 	str	r1, [r4, #4]
         29e9c:	e28d1f82 	add	r1, sp, #520	; 0x208
         29ea0:	ebffff78 	bl	29c88 <AEnum_AddWord(AirusAParmBlock *)+0x178>
         29ea4:	e3300000 	teq	r0, #0	; 0x0
         29ea8:	1a0000a3 	bne	2a13c <AEnum_DeleteWord(AirusAParmBlock *)+0x300>
         29eac:	e5940004 	ldr	r0, [r4, #4]
         29eb0:	e59f70b0 	ldr	r7, [pc, #b0]	; 29f68 <AEnum_DeleteWord(AirusAParmBlock *)+0x12c>
         29eb4:	e3a09000 	mov	r9, #0	; 0x0
         29eb8:	e350003f 	cmp	r0, #63	; 0x3f
         29ebc:	a1a05009 	movge	r5, r9
         29ec0:	b2801001 	addlt	r1, r0, #1	; 0x1
         29ec4:	b5841004 	strlt	r1, [r4, #4]
         29ec8:	b7975100 	ldrlt	r5, [r7, r0, lsl #2]
         29ecc:	e5940000 	ldr	r0, [r4]
         29ed0:	e590102c 	ldr	r1, [r0, #44]
         29ed4:	e3310000 	teq	r1, #0	; 0x0
         29ed8:	1a000023 	bne	29f6c <AEnum_DeleteWord(AirusAParmBlock *)+0x130>
         29edc:	e5901008 	ldr	r1, [r0, #8]
         29ee0:	e5911000 	ldr	r1, [r1]
         29ee4:	e5d11001 	ldrb	r1, [r1, #1]
         29ee8:	e2011007 	and	r1, r1, #7	; 0x7
         29eec:	e3310005 	teq	r1, #5	; 0x5
         29ef0:	13310002 	teqne	r1, #2	; 0x2
         29ef4:	03a03002 	moveq	r3, #2	; 0x2
         29ef8:	13a03001 	movne	r3, #1	; 0x1
         29efc:	e590200c 	ldr	r2, [r0, #12]
         29f00:	e0822005 	add	r2, r2, r5
         29f04:	e7d23003 	ldrb	r3, [r2, r3]
         29f08:	e3130010 	tst	r3, #16	; 0x10
         29f0c:	01a00006 	moveq	r0, r6
         29f10:	0a00008b 	beq	2a144 <AEnum_DeleteWord(AirusAParmBlock *)+0x308>
         29f14:	e3310005 	teq	r1, #5	; 0x5
         29f18:	13310002 	teqne	r1, #2	; 0x2
         29f1c:	03a03002 	moveq	r3, #2	; 0x2
         29f20:	13a03001 	movne	r3, #1	; 0x1
         29f24:	e7d23003 	ldrb	r3, [r2, r3]
         29f28:	e3130020 	tst	r3, #32	; 0x20
         29f2c:	1a00000e 	bne	29f6c <AEnum_DeleteWord(AirusAParmBlock *)+0x130>
         29f30:	e3310005 	teq	r1, #5	; 0x5
         29f34:	13310002 	teqne	r1, #2	; 0x2
         29f38:	03a00002 	moveq	r0, #2	; 0x2
         29f3c:	13a00001 	movne	r0, #1	; 0x1
         29f40:	e7f01002 	ldrb	r1, [r0, r2]!
         29f44:	e20110ef 	and	r1, r1, #239	; 0xef
         29f48:	e5c01000 	strb	r1, [r0]
         29f4c:	e1a00005 	mov	r0, r5
         29f50:	eb676086 	bl	1a02170 <$SkipNode(unsigned long)>
         29f54:	eb675c68 	bl	1a010fc <$ClearAttr(unsigned long)>
         29f58:	e3a01001 	mov	r1, #1	; 0x1
         29f5c:	eb67606c 	bl	1a02114 <$FixupPointers(unsigned long, Operation)>
         29f60:	ea000074 	b	2a138 <AEnum_DeleteWord(AirusAParmBlock *)+0x2fc>
         29f64:	0c10082c 	ldceq	8, cr0, [r0], -#176
         29f68:	0c105df4 	ldceq	13, cr5, [r0], -#976
         29f6c:	e3a08000 	mov	r8, #0	; 0x0
         29f70:	e59d1204 	ldr	r1, [sp, #516]
         29f74:	e5902008 	ldr	r2, [r0, #8]
         29f78:	e5922000 	ldr	r2, [r2]
         29f7c:	e5d22001 	ldrb	r2, [r2, #1]
         29f80:	e2022007 	and	r2, r2, #7	; 0x7
         29f84:	e3320005 	teq	r2, #5	; 0x5
         29f88:	13320002 	teqne	r2, #2	; 0x2
         29f8c:	03a02002 	moveq	r2, #2	; 0x2
         29f90:	13a02001 	movne	r2, #1	; 0x1
         29f94:	e590300c 	ldr	r3, [r0, #12]
         29f98:	e0833005 	add	r3, r3, r5
         29f9c:	e7d32002 	ldrb	r2, [r3, r2]
         29fa0:	e20220c0 	and	r2, r2, #192	; 0xc0
         29fa4:	e1b02322 	movs	r2, r2, lsr #6
         29fa8:	159d0200 	ldrne	r0, [sp, #512]
         29fac:	10406005 	subne	r6, r0, r5
         29fb0:	1a000036 	bne	2a090 <AEnum_DeleteWord(AirusAParmBlock *)+0x254>
         29fb4:	e5942004 	ldr	r2, [r4, #4]
         29fb8:	e332003f 	teq	r2, #63	; 0x3f
         29fbc:	17973102 	ldrne	r3, [r7, r2, lsl #2]
         29fc0:	03a03000 	moveq	r3, #0	; 0x0
         29fc4:	e1530001 	cmp	r3, r1
         29fc8:	3a000005 	bcc	29fe4 <AEnum_DeleteWord(AirusAParmBlock *)+0x1a8>
         29fcc:	e352003f 	cmp	r2, #63	; 0x3f
         29fd0:	a1a05009 	movge	r5, r9
         29fd4:	b2823001 	addlt	r3, r2, #1	; 0x1
         29fd8:	b5843004 	strlt	r3, [r4, #4]
         29fdc:	b7975102 	ldrlt	r5, [r7, r2, lsl #2]
         29fe0:	ea000000 	b	29fe8 <AEnum_DeleteWord(AirusAParmBlock *)+0x1ac>
         29fe4:	e3a05000 	mov	r5, #0	; 0x0
         29fe8:	e3350000 	teq	r5, #0	; 0x0
         29fec:	0a000024 	beq	2a084 <AEnum_DeleteWord(AirusAParmBlock *)+0x248>
         29ff0:	e5902008 	ldr	r2, [r0, #8]
         29ff4:	e5922000 	ldr	r2, [r2]
         29ff8:	e5d22001 	ldrb	r2, [r2, #1]
         29ffc:	e2022007 	and	r2, r2, #7	; 0x7
         2a000:	e3320005 	teq	r2, #5	; 0x5
         2a004:	13320002 	teqne	r2, #2	; 0x2
         2a008:	03a02002 	moveq	r2, #2	; 0x2
         2a00c:	13a02001 	movne	r2, #1	; 0x1
         2a010:	e590300c 	ldr	r3, [r0, #12]
         2a014:	e0833005 	add	r3, r3, r5
         2a018:	e7d32002 	ldrb	r2, [r3, r2]
         2a01c:	e3120010 	tst	r2, #16	; 0x10
         2a020:	0affffd3 	beq	29f74 <AEnum_DeleteWord(AirusAParmBlock *)+0x138>
         2a024:	e1a00005 	mov	r0, r5
         2a028:	eb67603a 	bl	1a02118 <$FollowLeft(unsigned long)>
         2a02c:	e59d1200 	ldr	r1, [sp, #512]
         2a030:	e0416000 	sub	r6, r1, r0
         2a034:	e5940000 	ldr	r0, [r4]
         2a038:	e5901008 	ldr	r1, [r0, #8]
         2a03c:	e5911000 	ldr	r1, [r1]
         2a040:	e5d11001 	ldrb	r1, [r1, #1]
         2a044:	e2011007 	and	r1, r1, #7	; 0x7
         2a048:	e3310005 	teq	r1, #5	; 0x5
         2a04c:	13310002 	teqne	r1, #2	; 0x2
         2a050:	03a01002 	moveq	r1, #2	; 0x2
         2a054:	13a01001 	movne	r1, #1	; 0x1
         2a058:	e590000c 	ldr	r0, [r0, #12]
         2a05c:	e0800005 	add	r0, r0, r5
         2a060:	e0810000 	add	r0, r1, r0
         2a064:	e5d01000 	ldrb	r1, [r0]
         2a068:	e3811020 	orr	r1, r1, #32	; 0x20
         2a06c:	e5c01000 	strb	r1, [r0]
         2a070:	e5940004 	ldr	r0, [r4, #4]
         2a074:	e2400001 	sub	r0, r0, #1	; 0x1
         2a078:	e5840004 	str	r0, [r4, #4]
         2a07c:	e7875100 	str	r5, [r7, r0, lsl #2]
         2a080:	ea000002 	b	2a090 <AEnum_DeleteWord(AirusAParmBlock *)+0x254>
         2a084:	e59d0200 	ldr	r0, [sp, #512]
         2a088:	e0406001 	sub	r6, r0, r1
         2a08c:	e3a08001 	mov	r8, #1	; 0x1
         2a090:	e1a01006 	mov	r1, r6
         2a094:	e59d0200 	ldr	r0, [sp, #512]
         2a098:	eb676036 	bl	1a02178 <$SlideUp__FUlT1>
         2a09c:	e5940000 	ldr	r0, [r4]
         2a0a0:	e280100c 	add	r1, r0, #12	; 0xc
         2a0a4:	e8910003 	ldmia	r1, {r0, r1}
         2a0a8:	e0410000 	sub	r0, r1, r0
         2a0ac:	e3300002 	teq	r0, #2	; 0x2
         2a0b0:	0a000015 	beq	2a10c <AEnum_DeleteWord(AirusAParmBlock *)+0x2d0>
         2a0b4:	e3380000 	teq	r8, #0	; 0x0
         2a0b8:	0a000002 	beq	2a0c8 <AEnum_DeleteWord(AirusAParmBlock *)+0x28c>
         2a0bc:	e59d0208 	ldr	r0, [sp, #520]
         2a0c0:	eb67600e 	bl	1a02100 <$ClearRP(unsigned long)>
         2a0c4:	e0806006 	add	r6, r0, r6
         2a0c8:	e1a00006 	mov	r0, r6
         2a0cc:	e3a01001 	mov	r1, #1	; 0x1
         2a0d0:	eb67600f 	bl	1a02114 <$FixupPointers(unsigned long, Operation)>
         2a0d4:	ea00000c 	b	2a10c <AEnum_DeleteWord(AirusAParmBlock *)+0x2d0>
         2a0d8:	e5900008 	ldr	r0, [r0, #8]
         2a0dc:	eb6ee026 	bl	1be217c <$SetHandleSize>
         2a0e0:	eb6ee00e 	bl	1be2120 <$MemError>
         2a0e4:	e3300000 	teq	r0, #0	; 0x0
         2a0e8:	13a00002 	movne	r0, #2	; 0x2
         2a0ec:	1a000012 	bne	2a13c <AEnum_DeleteWord(AirusAParmBlock *)+0x300>
         2a0f0:	e5940000 	ldr	r0, [r4]
         2a0f4:	eb675bff 	bl	1a010f8 <$CheckDictPtrs(AirusAParmBlock *)>
         2a0f8:	e5940000 	ldr	r0, [r4]
         2a0fc:	e2802014 	add	r2, r0, #20	; 0x14
         2a100:	e8920006 	ldmia	r2, {r1, r2}
         2a104:	e0411002 	sub	r1, r1, r2
         2a108:	e5a01014 	str	r1, [r0, #20]!
         2a10c:	e5940000 	ldr	r0, [r4]
         2a110:	e5901018 	ldr	r1, [r0, #24]
         2a114:	e5902014 	ldr	r2, [r0, #20]
         2a118:	e1520001 	cmp	r2, r1
         2a11c:	9a000005 	bls	2a138 <AEnum_DeleteWord(AirusAParmBlock *)+0x2fc>
         2a120:	e280c00c 	add	ip, r0, #12	; 0xc
         2a124:	e89c1008 	ldmia	ip, {r3, ip}
         2a128:	e04c3003 	sub	r3, ip, r3
         2a12c:	e0421001 	sub	r1, r2, r1
         2a130:	e1530001 	cmp	r3, r1
         2a134:	9affffe7 	bls	2a0d8 <AEnum_DeleteWord(AirusAParmBlock *)+0x29c>
         2a138:	e1a00009 	mov	r0, r9
         2a13c:	e5941000 	ldr	r1, [r4]
         2a140:	e5a1002c 	str	r0, [r1, #44]!
         2a144:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: AEnum_StartA(AirusAParmBlock *)
 * Address: 0002a148
 */
AEnum_StartA(AirusAParmBlock *) {
    /*
         2a148:	e3a00000 	mov	r0, #0	; 0x0
         2a14c:	e59f1008 	ldr	r1, [pc, #8]	; 2a15c <AEnum_StartA(AirusAParmBlock *)+0x14>
         2a150:	e5911000 	ldr	r1, [r1]
         2a154:	e5a1002c 	str	r0, [r1, #44]!
         2a158:	e1a0f00e 	mov	pc, lr
         2a15c:	0c10082c 	ldceq	8, cr0, [r0], -#176
    */
}

/**
 * Symbol: AEnum_ExitA(AirusAParmBlock *)
 * Address: 0002a160
 */
AEnum_ExitA(AirusAParmBlock *) {
    /*
         2a160:	e3a00000 	mov	r0, #0	; 0x0
         2a164:	e59f1008 	ldr	r1, [pc, #8]	; 2a174 <AEnum_ExitA(AirusAParmBlock *)+0x14>
         2a168:	e5911000 	ldr	r1, [r1]
         2a16c:	e5a1002c 	str	r0, [r1, #44]!
         2a170:	e1a0f00e 	mov	pc, lr
         2a174:	0c10082c 	ldceq	8, cr0, [r0], -#176
    */
}

/**
 * Symbol: AEnum_FirstLast(AirusAParmBlock *)
 * Address: 0002a1f4
 */
AEnum_FirstLast(AirusAParmBlock *) {
    /*
         2a1f4:	e1a0c00d 	mov	ip, sp
         2a1f8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         2a1fc:	e24cb004 	sub	fp, ip, #4	; 0x4
         2a200:	e5901028 	ldr	r1, [r0, #40]
         2a204:	e59f4034 	ldr	r4, [pc, #34]	; 2a240 <AEnum_FirstLast(AirusAParmBlock *)+0x4c>
         2a208:	e3310000 	teq	r1, #0	; 0x0
         2a20c:	05901010 	ldreq	r1, [r0, #16]
         2a210:	0590200c 	ldreq	r2, [r0, #12]
         2a214:	00411002 	subeq	r1, r1, r2
         2a218:	03310002 	teqeq	r1, #2	; 0x2
         2a21c:	03a00001 	moveq	r0, #1	; 0x1
         2a220:	0a000003 	beq	2a234 <AEnum_FirstLast(AirusAParmBlock *)+0x40>
         2a224:	e590102c 	ldr	r1, [r0, #44]
         2a228:	e2811002 	add	r1, r1, #2	; 0x2
         2a22c:	e580102c 	str	r1, [r0, #44]
         2a230:	eb675ba2 	bl	1a010c0 <$AEnum_NextPrevious(AirusAParmBlock *)>
         2a234:	e5941000 	ldr	r1, [r4]
         2a238:	e5a1002c 	str	r0, [r1, #44]!
         2a23c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         2a240:	0c10082c 	ldceq	8, cr0, [r0], -#176
    */
}

/**
 * Symbol: AEnum_NextPrevious(AirusAParmBlock *)
 * Address: 0002a244
 */
AEnum_NextPrevious(AirusAParmBlock *) {
    /*
         2a244:	e1a0c00d 	mov	ip, sp
         2a248:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         2a24c:	e24cb004 	sub	fp, ip, #4	; 0x4
         2a250:	eb675ba8 	bl	1a010f8 <$CheckDictPtrs(AirusAParmBlock *)>
         2a254:	e3a08000 	mov	r8, #0	; 0x0
         2a258:	e3a09000 	mov	r9, #0	; 0x0
         2a25c:	e59f5054 	ldr	r5, [pc, #54]	; 2a2b8 <AEnum_NextPrevious(AirusAParmBlock *)+0x74>
         2a260:	e5950000 	ldr	r0, [r5]
         2a264:	e1a02000 	mov	r2, r0
         2a268:	e280301c 	add	r3, r0, #28	; 0x1c
         2a26c:	e893000a 	ldmia	r3, {r1, r3}
         2a270:	e0816003 	add	r6, r1, r3
         2a274:	e2461001 	sub	r1, r6, #1	; 0x1
         2a278:	e5900028 	ldr	r0, [r0, #40]
         2a27c:	e3300000 	teq	r0, #0	; 0x0
         2a280:	03a04002 	moveq	r4, #2	; 0x2
         2a284:	11a04000 	movne	r4, r0
         2a288:	e592202c 	ldr	r2, [r2, #44]
         2a28c:	e3320000 	teq	r2, #0	; 0x0
         2a290:	0a000030 	beq	2a358 <AEnum_NextPrevious(AirusAParmBlock *)+0x114>
         2a294:	e3320001 	teq	r2, #1	; 0x1
         2a298:	0a000095 	beq	2a4f4 <AEnum_NextPrevious(AirusAParmBlock *)+0x2b0>
         2a29c:	e3320002 	teq	r2, #2	; 0x2
         2a2a0:	0a000005 	beq	2a2bc <AEnum_NextPrevious(AirusAParmBlock *)+0x78>
         2a2a4:	e3320003 	teq	r2, #3	; 0x3
         2a2a8:	1a000109 	bne	2a6d4 <AEnum_NextPrevious(AirusAParmBlock *)+0x490>
         2a2ac:	e3300000 	teq	r0, #0	; 0x0
         2a2b0:	0a0000d4 	beq	2a608 <AEnum_NextPrevious(AirusAParmBlock *)+0x3c4>
         2a2b4:	ea0000c2 	b	2a5c4 <AEnum_NextPrevious(AirusAParmBlock *)+0x380>
         2a2b8:	0c10082c 	ldceq	8, cr0, [r0], -#176
         2a2bc:	e3300000 	teq	r0, #0	; 0x0
         2a2c0:	1a000002 	bne	2a2d0 <AEnum_NextPrevious(AirusAParmBlock *)+0x8c>
         2a2c4:	e1a00004 	mov	r0, r4
         2a2c8:	eb675f98 	bl	1a02130 <$GetSymbol(unsigned long)>
         2a2cc:	e4c60001 	strb	r0, [r6], #1
         2a2d0:	e5950000 	ldr	r0, [r5]
         2a2d4:	e5901008 	ldr	r1, [r0, #8]
         2a2d8:	e5911000 	ldr	r1, [r1]
         2a2dc:	e5d11001 	ldrb	r1, [r1, #1]
         2a2e0:	e2011007 	and	r1, r1, #7	; 0x7
         2a2e4:	e3310005 	teq	r1, #5	; 0x5
         2a2e8:	13310002 	teqne	r1, #2	; 0x2
         2a2ec:	03a01002 	moveq	r1, #2	; 0x2
         2a2f0:	13a01001 	movne	r1, #1	; 0x1
         2a2f4:	e590000c 	ldr	r0, [r0, #12]
         2a2f8:	e0800004 	add	r0, r0, r4
         2a2fc:	e7d00001 	ldrb	r0, [r0, r1]
         2a300:	e3100010 	tst	r0, #16	; 0x10
         2a304:	1a00005d 	bne	2a480 <AEnum_NextPrevious(AirusAParmBlock *)+0x23c>
         2a308:	e1a00004 	mov	r0, r4
         2a30c:	eb675f97 	bl	1a02170 <$SkipNode(unsigned long)>
         2a310:	e1a04000 	mov	r4, r0
         2a314:	eb675f85 	bl	1a02130 <$GetSymbol(unsigned long)>
         2a318:	e4c60001 	strb	r0, [r6], #1
         2a31c:	e5950000 	ldr	r0, [r5]
         2a320:	e5901008 	ldr	r1, [r0, #8]
         2a324:	e5911000 	ldr	r1, [r1]
         2a328:	e5d11001 	ldrb	r1, [r1, #1]
         2a32c:	e2011007 	and	r1, r1, #7	; 0x7
         2a330:	e3310005 	teq	r1, #5	; 0x5
         2a334:	13310002 	teqne	r1, #2	; 0x2
         2a338:	03a01002 	moveq	r1, #2	; 0x2
         2a33c:	13a01001 	movne	r1, #1	; 0x1
         2a340:	e590000c 	ldr	r0, [r0, #12]
         2a344:	e0800004 	add	r0, r0, r4
         2a348:	e7d00001 	ldrb	r0, [r0, r1]
         2a34c:	e3100010 	tst	r0, #16	; 0x10
         2a350:	0affffec 	beq	2a308 <AEnum_NextPrevious(AirusAParmBlock *)+0xc4>
         2a354:	ea000049 	b	2a480 <AEnum_NextPrevious(AirusAParmBlock *)+0x23c>
         2a358:	e3300000 	teq	r0, #0	; 0x0
         2a35c:	e2817001 	add	r7, r1, #1	; 0x1
         2a360:	0a000005 	beq	2a37c <AEnum_NextPrevious(AirusAParmBlock *)+0x138>
         2a364:	e5d70000 	ldrb	r0, [r7]
         2a368:	e3300000 	teq	r0, #0	; 0x0
         2a36c:	0a000021 	beq	2a3f8 <AEnum_NextPrevious(AirusAParmBlock *)+0x1b4>
         2a370:	e1a00004 	mov	r0, r4
         2a374:	eb675f67 	bl	1a02118 <$FollowLeft(unsigned long)>
         2a378:	e1a04000 	mov	r4, r0
         2a37c:	e1a00004 	mov	r0, r4
         2a380:	eb675f6a 	bl	1a02130 <$GetSymbol(unsigned long)>
         2a384:	e5d71000 	ldrb	r1, [r7]
         2a388:	e1300001 	teq	r0, r1
         2a38c:	0a000006 	beq	2a3ac <AEnum_NextPrevious(AirusAParmBlock *)+0x168>
         2a390:	e1a00004 	mov	r0, r4
         2a394:	eb675f60 	bl	1a0211c <$FollowRight(unsigned long)>
         2a398:	e1a04000 	mov	r4, r0
         2a39c:	eb675f63 	bl	1a02130 <$GetSymbol(unsigned long)>
         2a3a0:	e5d71000 	ldrb	r1, [r7]
         2a3a4:	e1300001 	teq	r0, r1
         2a3a8:	1afffff8 	bne	2a390 <AEnum_NextPrevious(AirusAParmBlock *)+0x14c>
         2a3ac:	e5950000 	ldr	r0, [r5]
         2a3b0:	e5901008 	ldr	r1, [r0, #8]
         2a3b4:	e5911000 	ldr	r1, [r1]
         2a3b8:	e5d11001 	ldrb	r1, [r1, #1]
         2a3bc:	e2011007 	and	r1, r1, #7	; 0x7
         2a3c0:	e3310005 	teq	r1, #5	; 0x5
         2a3c4:	13310002 	teqne	r1, #2	; 0x2
         2a3c8:	03a01002 	moveq	r1, #2	; 0x2
         2a3cc:	13a01001 	movne	r1, #1	; 0x1
         2a3d0:	e590000c 	ldr	r0, [r0, #12]
         2a3d4:	e0800004 	add	r0, r0, r4
         2a3d8:	e7d00001 	ldrb	r0, [r0, r1]
         2a3dc:	e20000c0 	and	r0, r0, #192	; 0xc0
         2a3e0:	e1b00320 	movs	r0, r0, lsr #6
         2a3e4:	11a08004 	movne	r8, r4
         2a3e8:	11a06007 	movne	r6, r7
         2a3ec:	e5f70001 	ldrb	r0, [r7, #1]!
         2a3f0:	e3300000 	teq	r0, #0	; 0x0
         2a3f4:	1affffdd 	bne	2a370 <AEnum_NextPrevious(AirusAParmBlock *)+0x12c>
         2a3f8:	e5951000 	ldr	r1, [r5]
         2a3fc:	e5910008 	ldr	r0, [r1, #8]
         2a400:	e5900000 	ldr	r0, [r0]
         2a404:	e5d00001 	ldrb	r0, [r0, #1]
         2a408:	e2000007 	and	r0, r0, #7	; 0x7
         2a40c:	e3300005 	teq	r0, #5	; 0x5
         2a410:	13300002 	teqne	r0, #2	; 0x2
         2a414:	03a00002 	moveq	r0, #2	; 0x2
         2a418:	13a00001 	movne	r0, #1	; 0x1
         2a41c:	e591200c 	ldr	r2, [r1, #12]
         2a420:	e0822004 	add	r2, r2, r4
         2a424:	e7d20000 	ldrb	r0, [r2, r0]
         2a428:	e3100020 	tst	r0, #32	; 0x20
         2a42c:	1a000016 	bne	2a48c <AEnum_NextPrevious(AirusAParmBlock *)+0x248>
         2a430:	e1a06007 	mov	r6, r7
         2a434:	e1a00004 	mov	r0, r4
         2a438:	eb675f36 	bl	1a02118 <$FollowLeft(unsigned long)>
         2a43c:	e1a04000 	mov	r4, r0
         2a440:	eb675f3a 	bl	1a02130 <$GetSymbol(unsigned long)>
         2a444:	e4c60001 	strb	r0, [r6], #1
         2a448:	e5950000 	ldr	r0, [r5]
         2a44c:	e5901008 	ldr	r1, [r0, #8]
         2a450:	e5911000 	ldr	r1, [r1]
         2a454:	e5d11001 	ldrb	r1, [r1, #1]
         2a458:	e2011007 	and	r1, r1, #7	; 0x7
         2a45c:	e3310005 	teq	r1, #5	; 0x5
         2a460:	13310002 	teqne	r1, #2	; 0x2
         2a464:	03a01002 	moveq	r1, #2	; 0x2
         2a468:	13a01001 	movne	r1, #1	; 0x1
         2a46c:	e590000c 	ldr	r0, [r0, #12]
         2a470:	e0800004 	add	r0, r0, r4
         2a474:	e7d00001 	ldrb	r0, [r0, r1]
         2a478:	e3100010 	tst	r0, #16	; 0x10
         2a47c:	0affffec 	beq	2a434 <AEnum_NextPrevious(AirusAParmBlock *)+0x1f0>
         2a480:	e3a00000 	mov	r0, #0	; 0x0
         2a484:	e5c60000 	strb	r0, [r6]
         2a488:	ea000094 	b	2a6e0 <AEnum_NextPrevious(AirusAParmBlock *)+0x49c>
         2a48c:	e3380000 	teq	r8, #0	; 0x0
         2a490:	03a00001 	moveq	r0, #1	; 0x1
         2a494:	0a0000ca 	beq	2a7c4 <AEnum_NextPrevious(AirusAParmBlock *)+0x580>
         2a498:	e1a00008 	mov	r0, r8
         2a49c:	eb675f1e 	bl	1a0211c <$FollowRight(unsigned long)>
         2a4a0:	ea000001 	b	2a4ac <AEnum_NextPrevious(AirusAParmBlock *)+0x268>
         2a4a4:	e1a00004 	mov	r0, r4
         2a4a8:	eb675f30 	bl	1a02170 <$SkipNode(unsigned long)>
         2a4ac:	e1a04000 	mov	r4, r0
         2a4b0:	eb675f1e 	bl	1a02130 <$GetSymbol(unsigned long)>
         2a4b4:	e4c60001 	strb	r0, [r6], #1
         2a4b8:	e5950000 	ldr	r0, [r5]
         2a4bc:	e5901008 	ldr	r1, [r0, #8]
         2a4c0:	e5911000 	ldr	r1, [r1]
         2a4c4:	e5d11001 	ldrb	r1, [r1, #1]
         2a4c8:	e2011007 	and	r1, r1, #7	; 0x7
         2a4cc:	e3310005 	teq	r1, #5	; 0x5
         2a4d0:	13310002 	teqne	r1, #2	; 0x2
         2a4d4:	03a01002 	moveq	r1, #2	; 0x2
         2a4d8:	13a01001 	movne	r1, #1	; 0x1
         2a4dc:	e590000c 	ldr	r0, [r0, #12]
         2a4e0:	e0800004 	add	r0, r0, r4
         2a4e4:	e7d00001 	ldrb	r0, [r0, r1]
         2a4e8:	e3100010 	tst	r0, #16	; 0x10
         2a4ec:	0affffec 	beq	2a4a4 <AEnum_NextPrevious(AirusAParmBlock *)+0x260>
         2a4f0:	eaffffe2 	b	2a480 <AEnum_NextPrevious(AirusAParmBlock *)+0x23c>
         2a4f4:	e3300000 	teq	r0, #0	; 0x0
         2a4f8:	e2817001 	add	r7, r1, #1	; 0x1
         2a4fc:	0a000014 	beq	2a554 <AEnum_NextPrevious(AirusAParmBlock *)+0x310>
         2a500:	e5d70000 	ldrb	r0, [r7]
         2a504:	e3300000 	teq	r0, #0	; 0x0
         2a508:	0a000025 	beq	2a5a4 <AEnum_NextPrevious(AirusAParmBlock *)+0x360>
         2a50c:	e5950000 	ldr	r0, [r5]
         2a510:	e5901008 	ldr	r1, [r0, #8]
         2a514:	e5911000 	ldr	r1, [r1]
         2a518:	e5d11001 	ldrb	r1, [r1, #1]
         2a51c:	e2011007 	and	r1, r1, #7	; 0x7
         2a520:	e3310005 	teq	r1, #5	; 0x5
         2a524:	13310002 	teqne	r1, #2	; 0x2
         2a528:	03a01002 	moveq	r1, #2	; 0x2
         2a52c:	13a01001 	movne	r1, #1	; 0x1
         2a530:	e590000c 	ldr	r0, [r0, #12]
         2a534:	e0800004 	add	r0, r0, r4
         2a538:	e7d00001 	ldrb	r0, [r0, r1]
         2a53c:	e3100010 	tst	r0, #16	; 0x10
         2a540:	11a09004 	movne	r9, r4
         2a544:	11a0a007 	movne	sl, r7
         2a548:	e1a00004 	mov	r0, r4
         2a54c:	eb675ef1 	bl	1a02118 <$FollowLeft(unsigned long)>
         2a550:	e1a04000 	mov	r4, r0
         2a554:	e1a00004 	mov	r0, r4
         2a558:	eb675ef4 	bl	1a02130 <$GetSymbol(unsigned long)>
         2a55c:	e5d71000 	ldrb	r1, [r7]
         2a560:	e1300001 	teq	r0, r1
         2a564:	0a000008 	beq	2a58c <AEnum_NextPrevious(AirusAParmBlock *)+0x348>
         2a568:	e1a08004 	mov	r8, r4
         2a56c:	e1a06007 	mov	r6, r7
         2a570:	e1a00004 	mov	r0, r4
         2a574:	eb675ee8 	bl	1a0211c <$FollowRight(unsigned long)>
         2a578:	e1a04000 	mov	r4, r0
         2a57c:	eb675eeb 	bl	1a02130 <$GetSymbol(unsigned long)>
         2a580:	e5d71000 	ldrb	r1, [r7]
         2a584:	e1300001 	teq	r0, r1
         2a588:	1afffff6 	bne	2a568 <AEnum_NextPrevious(AirusAParmBlock *)+0x324>
         2a58c:	e5f70001 	ldrb	r0, [r7, #1]!
         2a590:	e3300000 	teq	r0, #0	; 0x0
         2a594:	1affffdc 	bne	2a50c <AEnum_NextPrevious(AirusAParmBlock *)+0x2c8>
         2a598:	e3380000 	teq	r8, #0	; 0x0
         2a59c:	03390000 	teqeq	r9, #0	; 0x0
         2a5a0:	1a000001 	bne	2a5ac <AEnum_NextPrevious(AirusAParmBlock *)+0x368>
         2a5a4:	e3a00001 	mov	r0, #1	; 0x1
         2a5a8:	ea000084 	b	2a7c0 <AEnum_NextPrevious(AirusAParmBlock *)+0x57c>
         2a5ac:	e1590008 	cmp	r9, r8
         2a5b0:	8a000047 	bhi	2a6d4 <AEnum_NextPrevious(AirusAParmBlock *)+0x490>
         2a5b4:	e1a00008 	mov	r0, r8
         2a5b8:	e1a04008 	mov	r4, r8
         2a5bc:	eb675edb 	bl	1a02130 <$GetSymbol(unsigned long)>
         2a5c0:	e4c60001 	strb	r0, [r6], #1
         2a5c4:	e5951000 	ldr	r1, [r5]
         2a5c8:	e5910008 	ldr	r0, [r1, #8]
         2a5cc:	e5900000 	ldr	r0, [r0]
         2a5d0:	e5d00001 	ldrb	r0, [r0, #1]
         2a5d4:	e2000007 	and	r0, r0, #7	; 0x7
         2a5d8:	e3300005 	teq	r0, #5	; 0x5
         2a5dc:	13300002 	teqne	r0, #2	; 0x2
         2a5e0:	03a00002 	moveq	r0, #2	; 0x2
         2a5e4:	13a00001 	movne	r0, #1	; 0x1
         2a5e8:	e591100c 	ldr	r1, [r1, #12]
         2a5ec:	e0811004 	add	r1, r1, r4
         2a5f0:	e7d10000 	ldrb	r0, [r1, r0]
         2a5f4:	e3100020 	tst	r0, #32	; 0x20
         2a5f8:	1affffa0 	bne	2a480 <AEnum_NextPrevious(AirusAParmBlock *)+0x23c>
         2a5fc:	e1a00004 	mov	r0, r4
         2a600:	eb675ec4 	bl	1a02118 <$FollowLeft(unsigned long)>
         2a604:	e1a04000 	mov	r4, r0
         2a608:	e5950000 	ldr	r0, [r5]
         2a60c:	e5901008 	ldr	r1, [r0, #8]
         2a610:	e5911000 	ldr	r1, [r1]
         2a614:	e5d11001 	ldrb	r1, [r1, #1]
         2a618:	e2011007 	and	r1, r1, #7	; 0x7
         2a61c:	e3310005 	teq	r1, #5	; 0x5
         2a620:	13310002 	teqne	r1, #2	; 0x2
         2a624:	03a01002 	moveq	r1, #2	; 0x2
         2a628:	13a01001 	movne	r1, #1	; 0x1
         2a62c:	e590000c 	ldr	r0, [r0, #12]
         2a630:	e0800004 	add	r0, r0, r4
         2a634:	e7d00001 	ldrb	r0, [r0, r1]
         2a638:	e20000c0 	and	r0, r0, #192	; 0xc0
         2a63c:	e1b00320 	movs	r0, r0, lsr #6
         2a640:	0a000011 	beq	2a68c <AEnum_NextPrevious(AirusAParmBlock *)+0x448>
         2a644:	e1a00004 	mov	r0, r4
         2a648:	eb675eb3 	bl	1a0211c <$FollowRight(unsigned long)>
         2a64c:	e1a04000 	mov	r4, r0
         2a650:	e5950000 	ldr	r0, [r5]
         2a654:	e5901008 	ldr	r1, [r0, #8]
         2a658:	e5911000 	ldr	r1, [r1]
         2a65c:	e5d11001 	ldrb	r1, [r1, #1]
         2a660:	e2011007 	and	r1, r1, #7	; 0x7
         2a664:	e3310005 	teq	r1, #5	; 0x5
         2a668:	13310002 	teqne	r1, #2	; 0x2
         2a66c:	03a01002 	moveq	r1, #2	; 0x2
         2a670:	13a01001 	movne	r1, #1	; 0x1
         2a674:	e590000c 	ldr	r0, [r0, #12]
         2a678:	e0800004 	add	r0, r0, r4
         2a67c:	e7d00001 	ldrb	r0, [r0, r1]
         2a680:	e20000c0 	and	r0, r0, #192	; 0xc0
         2a684:	e1b00320 	movs	r0, r0, lsr #6
         2a688:	1affffed 	bne	2a644 <AEnum_NextPrevious(AirusAParmBlock *)+0x400>
         2a68c:	e1a00004 	mov	r0, r4
         2a690:	eb675ea6 	bl	1a02130 <$GetSymbol(unsigned long)>
         2a694:	e4c60001 	strb	r0, [r6], #1
         2a698:	e5951000 	ldr	r1, [r5]
         2a69c:	e5910008 	ldr	r0, [r1, #8]
         2a6a0:	e5900000 	ldr	r0, [r0]
         2a6a4:	e5d00001 	ldrb	r0, [r0, #1]
         2a6a8:	e2000007 	and	r0, r0, #7	; 0x7
         2a6ac:	e3300005 	teq	r0, #5	; 0x5
         2a6b0:	13300002 	teqne	r0, #2	; 0x2
         2a6b4:	03a00002 	moveq	r0, #2	; 0x2
         2a6b8:	13a00001 	movne	r0, #1	; 0x1
         2a6bc:	e591100c 	ldr	r1, [r1, #12]
         2a6c0:	e0811004 	add	r1, r1, r4
         2a6c4:	e7d10000 	ldrb	r0, [r1, r0]
         2a6c8:	e3100020 	tst	r0, #32	; 0x20
         2a6cc:	0affffca 	beq	2a5fc <AEnum_NextPrevious(AirusAParmBlock *)+0x3b8>
         2a6d0:	eaffff6a 	b	2a480 <AEnum_NextPrevious(AirusAParmBlock *)+0x23c>
         2a6d4:	e3a00000 	mov	r0, #0	; 0x0
         2a6d8:	e5ca0000 	strb	r0, [sl]
         2a6dc:	e1a04009 	mov	r4, r9
         2a6e0:	e5950000 	ldr	r0, [r5]
         2a6e4:	e5900034 	ldr	r0, [r0, #52]
         2a6e8:	e3300000 	teq	r0, #0	; 0x0
         2a6ec:	0a000002 	beq	2a6fc <AEnum_NextPrevious(AirusAParmBlock *)+0x4b8>
         2a6f0:	e1a00004 	mov	r0, r4
         2a6f4:	eb675e9d 	bl	1a02170 <$SkipNode(unsigned long)>
         2a6f8:	e1a04000 	mov	r4, r0
         2a6fc:	e5950000 	ldr	r0, [r5]
         2a700:	e5901034 	ldr	r1, [r0, #52]
         2a704:	e3310000 	teq	r1, #0	; 0x0
         2a708:	0a00001b 	beq	2a77c <AEnum_NextPrevious(AirusAParmBlock *)+0x538>
         2a70c:	e3310001 	teq	r1, #1	; 0x1
         2a710:	0590100c 	ldreq	r1, [r0, #12]
         2a714:	07d11004 	ldreqb	r1, [r1, r4]
         2a718:	0a000026 	beq	2a7b8 <AEnum_NextPrevious(AirusAParmBlock *)+0x574>
         2a71c:	e3310002 	teq	r1, #2	; 0x2
         2a720:	0a00001c 	beq	2a798 <AEnum_NextPrevious(AirusAParmBlock *)+0x554>
         2a724:	e3310004 	teq	r1, #4	; 0x4
         2a728:	1a000023 	bne	2a7bc <AEnum_NextPrevious(AirusAParmBlock *)+0x578>
         2a72c:	e590100c 	ldr	r1, [r0, #12]
         2a730:	e7d11004 	ldrb	r1, [r1, r4]
         2a734:	e5a01024 	str	r1, [r0, #36]!
         2a738:	e5950000 	ldr	r0, [r5]
         2a73c:	e590200c 	ldr	r2, [r0, #12]
         2a740:	e0822004 	add	r2, r2, r4
         2a744:	e5d22001 	ldrb	r2, [r2, #1]
         2a748:	e1821401 	orr	r1, r2, r1, lsl #8
         2a74c:	e5a01024 	str	r1, [r0, #36]!
         2a750:	e5950000 	ldr	r0, [r5]
         2a754:	e590200c 	ldr	r2, [r0, #12]
         2a758:	e0822004 	add	r2, r2, r4
         2a75c:	e5d22002 	ldrb	r2, [r2, #2]
         2a760:	e1821401 	orr	r1, r2, r1, lsl #8
         2a764:	e5a01024 	str	r1, [r0, #36]!
         2a768:	e5950000 	ldr	r0, [r5]
         2a76c:	e590200c 	ldr	r2, [r0, #12]
         2a770:	e0822004 	add	r2, r2, r4
         2a774:	e5d22003 	ldrb	r2, [r2, #3]
         2a778:	ea00000d 	b	2a7b4 <AEnum_NextPrevious(AirusAParmBlock *)+0x570>
         2a77c:	e590100c 	ldr	r1, [r0, #12]
         2a780:	e5d11001 	ldrb	r1, [r1, #1]
         2a784:	e2011007 	and	r1, r1, #7	; 0x7
         2a788:	e3310003 	teq	r1, #3	; 0x3
         2a78c:	03a01080 	moveq	r1, #128	; 0x80
         2a790:	0a000008 	beq	2a7b8 <AEnum_NextPrevious(AirusAParmBlock *)+0x574>
         2a794:	ea000008 	b	2a7bc <AEnum_NextPrevious(AirusAParmBlock *)+0x578>
         2a798:	e590100c 	ldr	r1, [r0, #12]
         2a79c:	e7d11004 	ldrb	r1, [r1, r4]
         2a7a0:	e5a01024 	str	r1, [r0, #36]!
         2a7a4:	e5950000 	ldr	r0, [r5]
         2a7a8:	e590200c 	ldr	r2, [r0, #12]
         2a7ac:	e0822004 	add	r2, r2, r4
         2a7b0:	e5d22001 	ldrb	r2, [r2, #1]
         2a7b4:	e1821401 	orr	r1, r2, r1, lsl #8
         2a7b8:	e5a01024 	str	r1, [r0, #36]!
         2a7bc:	e3a00000 	mov	r0, #0	; 0x0
         2a7c0:	e5951000 	ldr	r1, [r5]
         2a7c4:	e5a1002c 	str	r0, [r1, #44]!
         2a7c8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: AEnum_ChangeAttribute(AirusAParmBlock *)
 * Address: 0002a7cc
 */
AEnum_ChangeAttribute(AirusAParmBlock *) {
    /*
         2a7cc:	e1a0c00d 	mov	ip, sp
         2a7d0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         2a7d4:	e24cb004 	sub	fp, ip, #4	; 0x4
         2a7d8:	eb675a46 	bl	1a010f8 <$CheckDictPtrs(AirusAParmBlock *)>
         2a7dc:	e59f4030 	ldr	r4, [pc, #30]	; 2a814 <AEnum_ChangeAttribute(AirusAParmBlock *)+0x48>
         2a7e0:	e5941000 	ldr	r1, [r4]
         2a7e4:	e5910034 	ldr	r0, [r1, #52]
         2a7e8:	e3300000 	teq	r0, #0	; 0x0
         2a7ec:	03a00001 	moveq	r0, #1	; 0x1
         2a7f0:	0a000061 	beq	2a97c <AEnum_ChangeAttribute(AirusAParmBlock *)+0x1b0>
         2a7f4:	e5910010 	ldr	r0, [r1, #16]
         2a7f8:	e591200c 	ldr	r2, [r1, #12]
         2a7fc:	e0400002 	sub	r0, r0, r2
         2a800:	e3a07002 	mov	r7, #2	; 0x2
         2a804:	e3300002 	teq	r0, #2	; 0x2
         2a808:	1a000002 	bne	2a818 <AEnum_ChangeAttribute(AirusAParmBlock *)+0x4c>
         2a80c:	e1a00007 	mov	r0, r7
         2a810:	ea000059 	b	2a97c <AEnum_ChangeAttribute(AirusAParmBlock *)+0x1b0>
         2a814:	0c10082c 	ldceq	8, cr0, [r0], -#176
         2a818:	e591601c 	ldr	r6, [r1, #28]
         2a81c:	e5d60000 	ldrb	r0, [r6]
         2a820:	e3300000 	teq	r0, #0	; 0x0
         2a824:	13a05002 	movne	r5, #2	; 0x2
         2a828:	1a000001 	bne	2a834 <AEnum_ChangeAttribute(AirusAParmBlock *)+0x68>
         2a82c:	e5b15028 	ldr	r5, [r1, #40]!
         2a830:	ea00001f 	b	2a8b4 <AEnum_ChangeAttribute(AirusAParmBlock *)+0xe8>
         2a834:	e1a00005 	mov	r0, r5
         2a838:	eb675e3c 	bl	1a02130 <$GetSymbol(unsigned long)>
         2a83c:	e5d61000 	ldrb	r1, [r6]
         2a840:	e1300001 	teq	r0, r1
         2a844:	0a000017 	beq	2a8a8 <AEnum_ChangeAttribute(AirusAParmBlock *)+0xdc>
         2a848:	e5940000 	ldr	r0, [r4]
         2a84c:	e5901008 	ldr	r1, [r0, #8]
         2a850:	e5911000 	ldr	r1, [r1]
         2a854:	e5d11001 	ldrb	r1, [r1, #1]
         2a858:	e2011007 	and	r1, r1, #7	; 0x7
         2a85c:	e3310005 	teq	r1, #5	; 0x5
         2a860:	13310002 	teqne	r1, #2	; 0x2
         2a864:	03a01002 	moveq	r1, #2	; 0x2
         2a868:	13a01001 	movne	r1, #1	; 0x1
         2a86c:	e590000c 	ldr	r0, [r0, #12]
         2a870:	e0800005 	add	r0, r0, r5
         2a874:	e7d00001 	ldrb	r0, [r0, r1]
         2a878:	e20000c0 	and	r0, r0, #192	; 0xc0
         2a87c:	e1b00320 	movs	r0, r0, lsr #6
         2a880:	1a000001 	bne	2a88c <AEnum_ChangeAttribute(AirusAParmBlock *)+0xc0>
         2a884:	e1a00007 	mov	r0, r7
         2a888:	ea00003a 	b	2a978 <AEnum_ChangeAttribute(AirusAParmBlock *)+0x1ac>
         2a88c:	e1a00005 	mov	r0, r5
         2a890:	eb675e21 	bl	1a0211c <$FollowRight(unsigned long)>
         2a894:	e1a05000 	mov	r5, r0
         2a898:	eb675e24 	bl	1a02130 <$GetSymbol(unsigned long)>
         2a89c:	e5d61000 	ldrb	r1, [r6]
         2a8a0:	e1300001 	teq	r0, r1
         2a8a4:	1affffe7 	bne	2a848 <AEnum_ChangeAttribute(AirusAParmBlock *)+0x7c>
         2a8a8:	e5f60001 	ldrb	r0, [r6, #1]!
         2a8ac:	e3300000 	teq	r0, #0	; 0x0
         2a8b0:	1a00003d 	bne	2a9ac <AEnum_ChangeAttribute(AirusAParmBlock *)+0x1e0>
         2a8b4:	e5941000 	ldr	r1, [r4]
         2a8b8:	e5910008 	ldr	r0, [r1, #8]
         2a8bc:	e5900000 	ldr	r0, [r0]
         2a8c0:	e5d00001 	ldrb	r0, [r0, #1]
         2a8c4:	e2000007 	and	r0, r0, #7	; 0x7
         2a8c8:	e3300005 	teq	r0, #5	; 0x5
         2a8cc:	13300002 	teqne	r0, #2	; 0x2
         2a8d0:	03a00002 	moveq	r0, #2	; 0x2
         2a8d4:	13a00001 	movne	r0, #1	; 0x1
         2a8d8:	e591200c 	ldr	r2, [r1, #12]
         2a8dc:	e0822005 	add	r2, r2, r5
         2a8e0:	e7d20000 	ldrb	r0, [r2, r0]
         2a8e4:	e3100010 	tst	r0, #16	; 0x10
         2a8e8:	0affffc7 	beq	2a80c <AEnum_ChangeAttribute(AirusAParmBlock *)+0x40>
         2a8ec:	e1a00005 	mov	r0, r5
         2a8f0:	eb675e1e 	bl	1a02170 <$SkipNode(unsigned long)>
         2a8f4:	e5941000 	ldr	r1, [r4]
         2a8f8:	e5912034 	ldr	r2, [r1, #52]
         2a8fc:	e3320001 	teq	r2, #1	; 0x1
         2a900:	05912024 	ldreq	r2, [r1, #36]
         2a904:	0591100c 	ldreq	r1, [r1, #12]
         2a908:	07c12000 	streqb	r2, [r1, r0]
         2a90c:	0a000018 	beq	2a974 <AEnum_ChangeAttribute(AirusAParmBlock *)+0x1a8>
         2a910:	e3320002 	teq	r2, #2	; 0x2
         2a914:	0a00001a 	beq	2a984 <AEnum_ChangeAttribute(AirusAParmBlock *)+0x1b8>
         2a918:	e3320004 	teq	r2, #4	; 0x4
         2a91c:	1a000014 	bne	2a974 <AEnum_ChangeAttribute(AirusAParmBlock *)+0x1a8>
         2a920:	e5912024 	ldr	r2, [r1, #36]
         2a924:	e1a02c22 	mov	r2, r2, lsr #24
         2a928:	e591100c 	ldr	r1, [r1, #12]
         2a92c:	e7c12000 	strb	r2, [r1, r0]
         2a930:	e5941000 	ldr	r1, [r4]
         2a934:	e5912024 	ldr	r2, [r1, #36]
         2a938:	e1a02822 	mov	r2, r2, lsr #16
         2a93c:	e591100c 	ldr	r1, [r1, #12]
         2a940:	e0811000 	add	r1, r1, r0
         2a944:	e5c12001 	strb	r2, [r1, #1]
         2a948:	e5941000 	ldr	r1, [r4]
         2a94c:	e5912024 	ldr	r2, [r1, #36]
         2a950:	e1a02422 	mov	r2, r2, lsr #8
         2a954:	e591100c 	ldr	r1, [r1, #12]
         2a958:	e0811000 	add	r1, r1, r0
         2a95c:	e5c12002 	strb	r2, [r1, #2]
         2a960:	e5941000 	ldr	r1, [r4]
         2a964:	e5912024 	ldr	r2, [r1, #36]
         2a968:	e591100c 	ldr	r1, [r1, #12]
         2a96c:	e0810000 	add	r0, r1, r0
         2a970:	e5c02003 	strb	r2, [r0, #3]
         2a974:	e3a00000 	mov	r0, #0	; 0x0
         2a978:	e5941000 	ldr	r1, [r4]
         2a97c:	e5a1002c 	str	r0, [r1, #44]!
         2a980:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         2a984:	e5912024 	ldr	r2, [r1, #36]
         2a988:	e1a02422 	mov	r2, r2, lsr #8
         2a98c:	e591100c 	ldr	r1, [r1, #12]
         2a990:	e7c12000 	strb	r2, [r1, r0]
         2a994:	e5941000 	ldr	r1, [r4]
         2a998:	e5912024 	ldr	r2, [r1, #36]
         2a99c:	e591100c 	ldr	r1, [r1, #12]
         2a9a0:	e0810000 	add	r0, r1, r0
         2a9a4:	e5c02001 	strb	r2, [r0, #1]
         2a9a8:	eafffff1 	b	2a974 <AEnum_ChangeAttribute(AirusAParmBlock *)+0x1a8>
         2a9ac:	e5941000 	ldr	r1, [r4]
         2a9b0:	e5910008 	ldr	r0, [r1, #8]
         2a9b4:	e5900000 	ldr	r0, [r0]
         2a9b8:	e5d00001 	ldrb	r0, [r0, #1]
         2a9bc:	e2000007 	and	r0, r0, #7	; 0x7
         2a9c0:	e3300005 	teq	r0, #5	; 0x5
         2a9c4:	13300002 	teqne	r0, #2	; 0x2
         2a9c8:	03a00002 	moveq	r0, #2	; 0x2
         2a9cc:	13a00001 	movne	r0, #1	; 0x1
         2a9d0:	e591100c 	ldr	r1, [r1, #12]
         2a9d4:	e0811005 	add	r1, r1, r5
         2a9d8:	e7d10000 	ldrb	r0, [r1, r0]
         2a9dc:	e3100020 	tst	r0, #32	; 0x20
         2a9e0:	1affffa7 	bne	2a884 <AEnum_ChangeAttribute(AirusAParmBlock *)+0xb8>
         2a9e4:	e1a00005 	mov	r0, r5
         2a9e8:	eb675dca 	bl	1a02118 <$FollowLeft(unsigned long)>
         2a9ec:	e1a05000 	mov	r5, r0
         2a9f0:	eaffff8f 	b	2a834 <AEnum_ChangeAttribute(AirusAParmBlock *)+0x68>
    */
}

/**
 * Symbol: AE8_NextSet9(AirusAParmBlock *)
 * Address: 0002a9f4
 */
AE8_NextSet9(AirusAParmBlock *) {
    /*
         2a9f4:	e1a0c00d 	mov	ip, sp
         2a9f8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         2a9fc:	e24cb004 	sub	fp, ip, #4	; 0x4
         2aa00:	e1a06000 	mov	r6, r0
         2aa04:	e24dd010 	sub	sp, sp, #16	; 0x10
         2aa08:	eb6759ba 	bl	1a010f8 <$CheckDictPtrs(AirusAParmBlock *)>
         2aa0c:	e596c028 	ldr	ip, [r6, #40]
         2aa10:	e33c0000 	teq	ip, #0	; 0x0
         2aa14:	03a00002 	moveq	r0, #2	; 0x2
         2aa18:	11a0000c 	movne	r0, ip
         2aa1c:	e596100c 	ldr	r1, [r6, #12]
         2aa20:	e0815000 	add	r5, r1, r0
         2aa24:	e5d54001 	ldrb	r4, [r5, #1]
         2aa28:	e3a00001 	mov	r0, #1	; 0x1
         2aa2c:	e596a054 	ldr	sl, [r6, #84]
         2aa30:	e59f2018 	ldr	r2, [pc, #18]	; 2aa50 <AE8_NextSet9(AirusAParmBlock *)+0x5c>
         2aa34:	e33a0000 	teq	sl, #0	; 0x0
         2aa38:	e58d200c 	str	r2, [sp, #12]
         2aa3c:	1a000004 	bne	2aa54 <AE8_NextSet9(AirusAParmBlock *)+0x60>
         2aa40:	e59d200c 	ldr	r2, [sp, #12]
         2aa44:	e5921000 	ldr	r1, [r2]
         2aa48:	e5a1002c 	str	r0, [r1, #44]!
         2aa4c:	ea00000b 	b	2aa80 <AE8_NextSet9(AirusAParmBlock *)+0x8c>
         2aa50:	0c10082c 	ldceq	8, cr0, [r0], -#176
         2aa54:	e1a08001 	mov	r8, r1
         2aa58:	e5b67034 	ldr	r7, [r6, #52]!
         2aa5c:	e5b6901c 	ldr	r9, [r6, #28]!
         2aa60:	e59d200c 	ldr	r2, [sp, #12]
         2aa64:	e5922000 	ldr	r2, [r2]
         2aa68:	e282e00c 	add	lr, r2, #12	; 0xc
         2aa6c:	e89e4008 	ldmia	lr, {r3, lr}
         2aa70:	e04e3003 	sub	r3, lr, r3
         2aa74:	e3330002 	teq	r3, #2	; 0x2
         2aa78:	1a000001 	bne	2aa84 <AE8_NextSet9(AirusAParmBlock *)+0x90>
         2aa7c:	e5a2002c 	str	r0, [r2, #44]!
         2aa80:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         2aa84:	e59f30d0 	ldr	r3, [pc, #d0]	; 2ab5c <AE8_NextSet9(AirusAParmBlock *)+0x168>
         2aa88:	e58d3008 	str	r3, [sp, #8]
         2aa8c:	e3e03000 	mvn	r3, #0	; 0x0
         2aa90:	e33c0000 	teq	ip, #0	; 0x0
         2aa94:	0a00000b 	beq	2aac8 <AE8_NextSet9(AirusAParmBlock *)+0xd4>
         2aa98:	e3140020 	tst	r4, #32	; 0x20
         2aa9c:	1afffff6 	bne	2aa7c <AE8_NextSet9(AirusAParmBlock *)+0x88>
         2aaa0:	e20400c0 	and	r0, r4, #192	; 0xc0
         2aaa4:	e1a00320 	mov	r0, r0, lsr #6
         2aaa8:	e59d2008 	ldr	r2, [sp, #8]
         2aaac:	e7920100 	ldr	r0, [r2, r0, lsl #2]
         2aab0:	e0800005 	add	r0, r0, r5
         2aab4:	e2042010 	and	r2, r4, #16	; 0x10
         2aab8:	e0832242 	add	r2, r3, r2, asr #4
         2aabc:	e1c72002 	bic	r2, r7, r2
         2aac0:	e0805002 	add	r5, r0, r2
         2aac4:	e5d54001 	ldrb	r4, [r5, #1]
         2aac8:	e5d10001 	ldrb	r0, [r1, #1]
         2aacc:	e2000007 	and	r0, r0, #7	; 0x7
         2aad0:	e3300003 	teq	r0, #3	; 0x3
         2aad4:	13a06000 	movne	r6, #0	; 0x0
         2aad8:	03a06080 	moveq	r6, #128	; 0x80
         2aadc:	e3a00003 	mov	r0, #3	; 0x3
         2aae0:	e59f1078 	ldr	r1, [pc, #78]	; 2ab60 <AE8_NextSet9(AirusAParmBlock *)+0x16c>
         2aae4:	e3370000 	teq	r7, #0	; 0x0
         2aae8:	e58d1004 	str	r1, [sp, #4]
         2aaec:	03360000 	teqeq	r6, #0	; 0x0
         2aaf0:	1a000023 	bne	2ab84 <AE8_NextSet9(AirusAParmBlock *)+0x190>
         2aaf4:	e1a06000 	mov	r6, r0
         2aaf8:	e0060244 	and	r0, r6, r4, asr #4
         2aafc:	e0451008 	sub	r1, r5, r8
         2ab00:	e1812f00 	orr	r2, r1, r0, lsl #30
         2ab04:	e5d51000 	ldrb	r1, [r5]
         2ab08:	e1a00009 	mov	r0, r9
         2ab0c:	e3a03000 	mov	r3, #0	; 0x0
         2ab10:	e1a0e00f 	mov	lr, pc
         2ab14:	e1a0f00a 	mov	pc, sl
         2ab18:	e21400c0 	ands	r0, r4, #192	; 0xc0
         2ab1c:	0a000053 	beq	2ac70 <AE8_NextSet9(AirusAParmBlock *)+0x27c>
         2ab20:	e1a00320 	mov	r0, r0, lsr #6
         2ab24:	e59d2008 	ldr	r2, [sp, #8]
         2ab28:	e7921100 	ldr	r1, [r2, r0, lsl #2]
         2ab2c:	e0811005 	add	r1, r1, r5
         2ab30:	e3300003 	teq	r0, #3	; 0x3
         2ab34:	1a00000a 	bne	2ab64 <AE8_NextSet9(AirusAParmBlock *)+0x170>
         2ab38:	e2850002 	add	r0, r5, #2	; 0x2
         2ab3c:	e4d02001 	ldrb	r2, [r0], #1
         2ab40:	e204300f 	and	r3, r4, #15	; 0xf
         2ab44:	e1822403 	orr	r2, r2, r3, lsl #8
         2ab48:	e4d03001 	ldrb	r3, [r0], #1
         2ab4c:	e1832402 	orr	r2, r3, r2, lsl #8
         2ab50:	e5d00000 	ldrb	r0, [r0]
         2ab54:	e1800402 	orr	r0, r0, r2, lsl #8
         2ab58:	ea000006 	b	2ab78 <AE8_NextSet9(AirusAParmBlock *)+0x184>
         2ab5c:	0c100844 	ldceq	8, cr0, [r0], -#272
         2ab60:	0c100834 	ldceq	8, cr0, [r0], -#208
         2ab64:	e7d52000 	ldrb	r2, [r5, r0]
         2ab68:	e1822404 	orr	r2, r2, r4, lsl #8
         2ab6c:	e59d3004 	ldr	r3, [sp, #4]
         2ab70:	e7930100 	ldr	r0, [r3, r0, lsl #2]
         2ab74:	e0020000 	and	r0, r2, r0
         2ab78:	e0815000 	add	r5, r1, r0
         2ab7c:	e5d54001 	ldrb	r4, [r5, #1]
         2ab80:	eaffffdc 	b	2aaf8 <AE8_NextSet9(AirusAParmBlock *)+0x104>
         2ab84:	e2142010 	ands	r2, r4, #16	; 0x10
         2ab88:	e58d2000 	str	r2, [sp]
         2ab8c:	0a000010 	beq	2abd4 <AE8_NextSet9(AirusAParmBlock *)+0x1e0>
         2ab90:	e3570000 	cmp	r7, #0	; 0x0
         2ab94:	da00000e 	ble	2abd4 <AE8_NextSet9(AirusAParmBlock *)+0x1e0>
         2ab98:	e20400c0 	and	r0, r4, #192	; 0xc0
         2ab9c:	e1a00320 	mov	r0, r0, lsr #6
         2aba0:	e59d2008 	ldr	r2, [sp, #8]
         2aba4:	e7920100 	ldr	r0, [r2, r0, lsl #2]
         2aba8:	e7d56000 	ldrb	r6, [r5, r0]
         2abac:	e3570001 	cmp	r7, #1	; 0x1
         2abb0:	c0800005 	addgt	r0, r0, r5
         2abb4:	c5d01001 	ldrgtb	r1, [r0, #1]
         2abb8:	c1866401 	orrgt	r6, r6, r1, lsl #8
         2abbc:	c3570002 	cmpgt	r7, #2	; 0x2
         2abc0:	c5d01002 	ldrgtb	r1, [r0, #2]
         2abc4:	c1866801 	orrgt	r6, r6, r1, lsl #16
         2abc8:	c3570003 	cmpgt	r7, #3	; 0x3
         2abcc:	c5d00003 	ldrgtb	r0, [r0, #3]
         2abd0:	c1866c00 	orrgt	r6, r6, r0, lsl #24
         2abd4:	e3a00003 	mov	r0, #3	; 0x3
         2abd8:	e0000244 	and	r0, r0, r4, asr #4
         2abdc:	e0451008 	sub	r1, r5, r8
         2abe0:	e1812f00 	orr	r2, r1, r0, lsl #30
         2abe4:	e1a03006 	mov	r3, r6
         2abe8:	e5d51000 	ldrb	r1, [r5]
         2abec:	e1a00009 	mov	r0, r9
         2abf0:	e1a0e00f 	mov	lr, pc
         2abf4:	e1a0f00a 	mov	pc, sl
         2abf8:	e21400c0 	ands	r0, r4, #192	; 0xc0
         2abfc:	0a00001b 	beq	2ac70 <AE8_NextSet9(AirusAParmBlock *)+0x27c>
         2ac00:	e1a00320 	mov	r0, r0, lsr #6
         2ac04:	e59d2008 	ldr	r2, [sp, #8]
         2ac08:	e7921100 	ldr	r1, [r2, r0, lsl #2]
         2ac0c:	e0811005 	add	r1, r1, r5
         2ac10:	e3e03000 	mvn	r3, #0	; 0x0
         2ac14:	e59d2000 	ldr	r2, [sp]
         2ac18:	e0832242 	add	r2, r3, r2, asr #4
         2ac1c:	e1c72002 	bic	r2, r7, r2
         2ac20:	e0811002 	add	r1, r1, r2
         2ac24:	e3300003 	teq	r0, #3	; 0x3
         2ac28:	1a000008 	bne	2ac50 <AE8_NextSet9(AirusAParmBlock *)+0x25c>
         2ac2c:	e2850002 	add	r0, r5, #2	; 0x2
         2ac30:	e4d02001 	ldrb	r2, [r0], #1
         2ac34:	e204300f 	and	r3, r4, #15	; 0xf
         2ac38:	e1822403 	orr	r2, r2, r3, lsl #8
         2ac3c:	e4d03001 	ldrb	r3, [r0], #1
         2ac40:	e1832402 	orr	r2, r3, r2, lsl #8
         2ac44:	e5d00000 	ldrb	r0, [r0]
         2ac48:	e1800402 	orr	r0, r0, r2, lsl #8
         2ac4c:	ea000004 	b	2ac64 <AE8_NextSet9(AirusAParmBlock *)+0x270>
         2ac50:	e7d52000 	ldrb	r2, [r5, r0]
         2ac54:	e1822404 	orr	r2, r2, r4, lsl #8
         2ac58:	e59d3004 	ldr	r3, [sp, #4]
         2ac5c:	e7930100 	ldr	r0, [r3, r0, lsl #2]
         2ac60:	e0020000 	and	r0, r2, r0
         2ac64:	e0815000 	add	r5, r1, r0
         2ac68:	e5d54001 	ldrb	r4, [r5, #1]
         2ac6c:	eaffffc4 	b	2ab84 <AE8_NextSet9(AirusAParmBlock *)+0x190>
         2ac70:	e3a00000 	mov	r0, #0	; 0x0
         2ac74:	eaffff71 	b	2aa40 <AE8_NextSet9(AirusAParmBlock *)+0x4c>
    */
}

/**
 * Symbol: AE16_NextSet9(AirusAParmBlock *)
 * Address: 0002ac78
 */
AE16_NextSet9(AirusAParmBlock *) {
    /*
         2ac78:	e1a0c00d 	mov	ip, sp
         2ac7c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         2ac80:	e24cb004 	sub	fp, ip, #4	; 0x4
         2ac84:	e1a06000 	mov	r6, r0
         2ac88:	e24dd010 	sub	sp, sp, #16	; 0x10
         2ac8c:	eb675919 	bl	1a010f8 <$CheckDictPtrs(AirusAParmBlock *)>
         2ac90:	e5963028 	ldr	r3, [r6, #40]
         2ac94:	e3330000 	teq	r3, #0	; 0x0
         2ac98:	03a00002 	moveq	r0, #2	; 0x2
         2ac9c:	11a00003 	movne	r0, r3
         2aca0:	e596100c 	ldr	r1, [r6, #12]
         2aca4:	e0814000 	add	r4, r1, r0
         2aca8:	e5d45002 	ldrb	r5, [r4, #2]
         2acac:	e3a00001 	mov	r0, #1	; 0x1
         2acb0:	e596a054 	ldr	sl, [r6, #84]
         2acb4:	e59f2018 	ldr	r2, [pc, #18]	; 2acd4 <AE16_NextSet9(AirusAParmBlock *)+0x5c>
         2acb8:	e33a0000 	teq	sl, #0	; 0x0
         2acbc:	e58d200c 	str	r2, [sp, #12]
         2acc0:	1a000004 	bne	2acd8 <AE16_NextSet9(AirusAParmBlock *)+0x60>
         2acc4:	e59d200c 	ldr	r2, [sp, #12]
         2acc8:	e5921000 	ldr	r1, [r2]
         2accc:	e5a1002c 	str	r0, [r1, #44]!
         2acd0:	ea00000b 	b	2ad04 <AE16_NextSet9(AirusAParmBlock *)+0x8c>
         2acd4:	0c10082c 	ldceq	8, cr0, [r0], -#176
         2acd8:	e1a08001 	mov	r8, r1
         2acdc:	e5b67034 	ldr	r7, [r6, #52]!
         2ace0:	e5b6901c 	ldr	r9, [r6, #28]!
         2ace4:	e59d200c 	ldr	r2, [sp, #12]
         2ace8:	e5922000 	ldr	r2, [r2]
         2acec:	e282e00c 	add	lr, r2, #12	; 0xc
         2acf0:	e89e5000 	ldmia	lr, {ip, lr}
         2acf4:	e04ec00c 	sub	ip, lr, ip
         2acf8:	e33c0002 	teq	ip, #2	; 0x2
         2acfc:	1a000001 	bne	2ad08 <AE16_NextSet9(AirusAParmBlock *)+0x90>
         2ad00:	e5a2002c 	str	r0, [r2, #44]!
         2ad04:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         2ad08:	e1b0c003 	movs	ip, r3
         2ad0c:	e59f30dc 	ldr	r3, [pc, #dc]	; 2adf0 <AE16_NextSet9(AirusAParmBlock *)+0x178>
         2ad10:	e58d3008 	str	r3, [sp, #8]
         2ad14:	e3e03000 	mvn	r3, #0	; 0x0
         2ad18:	0a00000c 	beq	2ad50 <AE16_NextSet9(AirusAParmBlock *)+0xd8>
         2ad1c:	e3150020 	tst	r5, #32	; 0x20
         2ad20:	1afffff6 	bne	2ad00 <AE16_NextSet9(AirusAParmBlock *)+0x88>
         2ad24:	e20500c0 	and	r0, r5, #192	; 0xc0
         2ad28:	e1a00320 	mov	r0, r0, lsr #6
         2ad2c:	e59d2008 	ldr	r2, [sp, #8]
         2ad30:	e7920100 	ldr	r0, [r2, r0, lsl #2]
         2ad34:	e0800004 	add	r0, r0, r4
         2ad38:	e2800001 	add	r0, r0, #1	; 0x1
         2ad3c:	e2052010 	and	r2, r5, #16	; 0x10
         2ad40:	e0832242 	add	r2, r3, r2, asr #4
         2ad44:	e1c72002 	bic	r2, r7, r2
         2ad48:	e0804002 	add	r4, r0, r2
         2ad4c:	e5d45002 	ldrb	r5, [r4, #2]
         2ad50:	e5d10001 	ldrb	r0, [r1, #1]
         2ad54:	e2000007 	and	r0, r0, #7	; 0x7
         2ad58:	e3300003 	teq	r0, #3	; 0x3
         2ad5c:	13a06000 	movne	r6, #0	; 0x0
         2ad60:	03a06080 	moveq	r6, #128	; 0x80
         2ad64:	e3a00003 	mov	r0, #3	; 0x3
         2ad68:	e59f1084 	ldr	r1, [pc, #84]	; 2adf4 <AE16_NextSet9(AirusAParmBlock *)+0x17c>
         2ad6c:	e3370000 	teq	r7, #0	; 0x0
         2ad70:	e58d1004 	str	r1, [sp, #4]
         2ad74:	03360000 	teqeq	r6, #0	; 0x0
         2ad78:	1a000026 	bne	2ae18 <AE16_NextSet9(AirusAParmBlock *)+0x1a0>
         2ad7c:	e1a06000 	mov	r6, r0
         2ad80:	e0060245 	and	r0, r6, r5, asr #4
         2ad84:	e0441008 	sub	r1, r4, r8
         2ad88:	e1812f00 	orr	r2, r1, r0, lsl #30
         2ad8c:	e5d41001 	ldrb	r1, [r4, #1]
         2ad90:	e5d40000 	ldrb	r0, [r4]
         2ad94:	e1801401 	orr	r1, r0, r1, lsl #8
         2ad98:	e1a00009 	mov	r0, r9
         2ad9c:	e3a03000 	mov	r3, #0	; 0x0
         2ada0:	e1a0e00f 	mov	lr, pc
         2ada4:	e1a0f00a 	mov	pc, sl
         2ada8:	e21500c0 	ands	r0, r5, #192	; 0xc0
         2adac:	0a000057 	beq	2af10 <AE16_NextSet9(AirusAParmBlock *)+0x298>
         2adb0:	e1a00320 	mov	r0, r0, lsr #6
         2adb4:	e59d2008 	ldr	r2, [sp, #8]
         2adb8:	e7921100 	ldr	r1, [r2, r0, lsl #2]
         2adbc:	e0811004 	add	r1, r1, r4
         2adc0:	e2811001 	add	r1, r1, #1	; 0x1
         2adc4:	e3300003 	teq	r0, #3	; 0x3
         2adc8:	1a00000a 	bne	2adf8 <AE16_NextSet9(AirusAParmBlock *)+0x180>
         2adcc:	e2840003 	add	r0, r4, #3	; 0x3
         2add0:	e4d02001 	ldrb	r2, [r0], #1
         2add4:	e205300f 	and	r3, r5, #15	; 0xf
         2add8:	e1822403 	orr	r2, r2, r3, lsl #8
         2addc:	e4d03001 	ldrb	r3, [r0], #1
         2ade0:	e1832402 	orr	r2, r3, r2, lsl #8
         2ade4:	e5d00000 	ldrb	r0, [r0]
         2ade8:	e1800402 	orr	r0, r0, r2, lsl #8
         2adec:	ea000006 	b	2ae0c <AE16_NextSet9(AirusAParmBlock *)+0x194>
         2adf0:	0c100844 	ldceq	8, cr0, [r0], -#272
         2adf4:	0c100834 	ldceq	8, cr0, [r0], -#208
         2adf8:	e7d42000 	ldrb	r2, [r4, r0]
         2adfc:	e1822405 	orr	r2, r2, r5, lsl #8
         2ae00:	e59d3004 	ldr	r3, [sp, #4]
         2ae04:	e7930100 	ldr	r0, [r3, r0, lsl #2]
         2ae08:	e0020000 	and	r0, r2, r0
         2ae0c:	e0814000 	add	r4, r1, r0
         2ae10:	e5d45001 	ldrb	r5, [r4, #1]
         2ae14:	eaffffd9 	b	2ad80 <AE16_NextSet9(AirusAParmBlock *)+0x108>
         2ae18:	e2152010 	ands	r2, r5, #16	; 0x10
         2ae1c:	e58d2000 	str	r2, [sp]
         2ae20:	0a000010 	beq	2ae68 <AE16_NextSet9(AirusAParmBlock *)+0x1f0>
         2ae24:	e3570000 	cmp	r7, #0	; 0x0
         2ae28:	da00000e 	ble	2ae68 <AE16_NextSet9(AirusAParmBlock *)+0x1f0>
         2ae2c:	e20500c0 	and	r0, r5, #192	; 0xc0
         2ae30:	e1a00320 	mov	r0, r0, lsr #6
         2ae34:	e59d2008 	ldr	r2, [sp, #8]
         2ae38:	e7920100 	ldr	r0, [r2, r0, lsl #2]
         2ae3c:	e0800004 	add	r0, r0, r4
         2ae40:	e5d06001 	ldrb	r6, [r0, #1]
         2ae44:	e3570001 	cmp	r7, #1	; 0x1
         2ae48:	c5d01002 	ldrgtb	r1, [r0, #2]
         2ae4c:	c1866401 	orrgt	r6, r6, r1, lsl #8
         2ae50:	c3570002 	cmpgt	r7, #2	; 0x2
         2ae54:	c5d01003 	ldrgtb	r1, [r0, #3]
         2ae58:	c1866801 	orrgt	r6, r6, r1, lsl #16
         2ae5c:	c3570003 	cmpgt	r7, #3	; 0x3
         2ae60:	c5d00004 	ldrgtb	r0, [r0, #4]
         2ae64:	c1866c00 	orrgt	r6, r6, r0, lsl #24
         2ae68:	e3a00003 	mov	r0, #3	; 0x3
         2ae6c:	e0000245 	and	r0, r0, r5, asr #4
         2ae70:	e0441008 	sub	r1, r4, r8
         2ae74:	e1812f00 	orr	r2, r1, r0, lsl #30
         2ae78:	e5d40001 	ldrb	r0, [r4, #1]
         2ae7c:	e5d41000 	ldrb	r1, [r4]
         2ae80:	e1811400 	orr	r1, r1, r0, lsl #8
         2ae84:	e1a03006 	mov	r3, r6
         2ae88:	e1a00009 	mov	r0, r9
         2ae8c:	e1a0e00f 	mov	lr, pc
         2ae90:	e1a0f00a 	mov	pc, sl
         2ae94:	e21500c0 	ands	r0, r5, #192	; 0xc0
         2ae98:	0a00001c 	beq	2af10 <AE16_NextSet9(AirusAParmBlock *)+0x298>
         2ae9c:	e1a00320 	mov	r0, r0, lsr #6
         2aea0:	e59d2008 	ldr	r2, [sp, #8]
         2aea4:	e7921100 	ldr	r1, [r2, r0, lsl #2]
         2aea8:	e0811004 	add	r1, r1, r4
         2aeac:	e2811001 	add	r1, r1, #1	; 0x1
         2aeb0:	e3e03000 	mvn	r3, #0	; 0x0
         2aeb4:	e59d2000 	ldr	r2, [sp]
         2aeb8:	e0832242 	add	r2, r3, r2, asr #4
         2aebc:	e1c72002 	bic	r2, r7, r2
         2aec0:	e0811002 	add	r1, r1, r2
         2aec4:	e3300003 	teq	r0, #3	; 0x3
         2aec8:	1a000008 	bne	2aef0 <AE16_NextSet9(AirusAParmBlock *)+0x278>
         2aecc:	e2842003 	add	r2, r4, #3	; 0x3
         2aed0:	e4d20001 	ldrb	r0, [r2], #1
         2aed4:	e205300f 	and	r3, r5, #15	; 0xf
         2aed8:	e1800403 	orr	r0, r0, r3, lsl #8
         2aedc:	e4d23001 	ldrb	r3, [r2], #1
         2aee0:	e1830400 	orr	r0, r3, r0, lsl #8
         2aee4:	e5d22000 	ldrb	r2, [r2]
         2aee8:	e1820400 	orr	r0, r2, r0, lsl #8
         2aeec:	ea000004 	b	2af04 <AE16_NextSet9(AirusAParmBlock *)+0x28c>
         2aef0:	e7d42000 	ldrb	r2, [r4, r0]
         2aef4:	e1822405 	orr	r2, r2, r5, lsl #8
         2aef8:	e59d3004 	ldr	r3, [sp, #4]
         2aefc:	e7930100 	ldr	r0, [r3, r0, lsl #2]
         2af00:	e0020000 	and	r0, r2, r0
         2af04:	e0814000 	add	r4, r1, r0
         2af08:	e5d45002 	ldrb	r5, [r4, #2]
         2af0c:	eaffffc1 	b	2ae18 <AE16_NextSet9(AirusAParmBlock *)+0x1a0>
         2af10:	e3a00000 	mov	r0, #0	; 0x0
         2af14:	eaffff6a 	b	2acc4 <AE16_NextSet9(AirusAParmBlock *)+0x4c>
    */
}

/**
 * Symbol: AEnum_NextSet9(AirusAParmBlock *)
 * Address: 0002af18
 */
AEnum_NextSet9(AirusAParmBlock *) {
    /*
         2af18:	e5901008 	ldr	r1, [r0, #8]
         2af1c:	e5911000 	ldr	r1, [r1]
         2af20:	e5d11001 	ldrb	r1, [r1, #1]
         2af24:	e2011007 	and	r1, r1, #7	; 0x7
         2af28:	e3310005 	teq	r1, #5	; 0x5
         2af2c:	13310002 	teqne	r1, #2	; 0x2
         2af30:	0a67609f 	beq	1a031b4 <$AE16_NextSet9(AirusAParmBlock *)>
         2af34:	1a67609d 	bne	1a031b0 <$AE8_NextSet9(AirusAParmBlock *)>
    */
}

/**
 * Symbol: AE8_NextSetCB__FUlN31
 * Address: 0002af38
 */
void globals::AE8_NextSetCB() {
    /*
         2af38:	e5902000 	ldr	r2, [r0]
         2af3c:	e4c21001 	strb	r1, [r2], #1
         2af40:	e5802000 	str	r2, [r0]
         2af44:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: AE16_NextSetCB__FUlN31
 * Address: 0002af48
 */
void globals::AE16_NextSetCB() {
    /*
         2af48:	e5902000 	ldr	r2, [r0]
         2af4c:	e4c21001 	strb	r1, [r2], #1
         2af50:	e1a01421 	mov	r1, r1, lsr #8
         2af54:	e5802000 	str	r2, [r0]
         2af58:	e4c21001 	strb	r1, [r2], #1
         2af5c:	e5802000 	str	r2, [r0]
         2af60:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: AEnum_NextSet(AirusAParmBlock *)
 * Address: 0002afd0
 */
AEnum_NextSet(AirusAParmBlock *) {
    /*
         2afd0:	e1a0c00d 	mov	ip, sp
         2afd4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         2afd8:	e24cb004 	sub	fp, ip, #4	; 0x4
         2afdc:	e24dd004 	sub	sp, sp, #4	; 0x4
         2afe0:	e590101c 	ldr	r1, [r0, #28]
         2afe4:	e58d1000 	str	r1, [sp]
         2afe8:	e580d050 	str	sp, [r0, #80]
         2afec:	e5901008 	ldr	r1, [r0, #8]
         2aff0:	e5911000 	ldr	r1, [r1]
         2aff4:	e5d11001 	ldrb	r1, [r1, #1]
         2aff8:	e2011007 	and	r1, r1, #7	; 0x7
         2affc:	e3a04000 	mov	r4, #0	; 0x0
         2b000:	e3310005 	teq	r1, #5	; 0x5
         2b004:	13310002 	teqne	r1, #2	; 0x2
         2b008:	1a000007 	bne	2b02c <AEnum_NextSet(AirusAParmBlock *)+0x5c>
         2b00c:	e59f1014 	ldr	r1, [pc, #14]	; 2b028 <AEnum_NextSet(AirusAParmBlock *)+0x58>
         2b010:	e5801054 	str	r1, [r0, #84]
         2b014:	eb676066 	bl	1a031b4 <$AE16_NextSet9(AirusAParmBlock *)>
         2b018:	e59d1000 	ldr	r1, [sp]
         2b01c:	e4c14001 	strb	r4, [r1], #1
         2b020:	e58d1000 	str	r1, [sp]
         2b024:	ea000003 	b	2b038 <AEnum_NextSet(AirusAParmBlock *)+0x68>
         2b028:	01a031bc 	streqh	r3, [r0, ip]!
         2b02c:	e59f1010 	ldr	r1, [pc, #10]	; 2b044 <AEnum_NextSet(AirusAParmBlock *)+0x74>
         2b030:	e5801054 	str	r1, [r0, #84]
         2b034:	eb67605d 	bl	1a031b0 <$AE8_NextSet9(AirusAParmBlock *)>
         2b038:	e59d1000 	ldr	r1, [sp]
         2b03c:	e5c14000 	strb	r4, [r1]
         2b040:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         2b044:	01a031b8 	streqh	r3, [r0, r8]!
    */
}

/**
 * Symbol: AE8_Verify(AirusAParmBlock *)
 * Address: 0002b048
 */
AE8_Verify(AirusAParmBlock *) {
    /*
         2b048:	e1a0c00d 	mov	ip, sp
         2b04c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         2b050:	e24cb004 	sub	fp, ip, #4	; 0x4
         2b054:	e1a05000 	mov	r5, r0
         2b058:	e24dd004 	sub	sp, sp, #4	; 0x4
         2b05c:	eb675825 	bl	1a010f8 <$CheckDictPtrs(AirusAParmBlock *)>
         2b060:	e59f4088 	ldr	r4, [pc, #88]	; 2b0f0 <AE8_Verify(AirusAParmBlock *)+0xa8>
         2b064:	e5940000 	ldr	r0, [r4]
         2b068:	e5901028 	ldr	r1, [r0, #40]
         2b06c:	e3310000 	teq	r1, #0	; 0x0
         2b070:	03a01002 	moveq	r1, #2	; 0x2
         2b074:	e595200c 	ldr	r2, [r5, #12]
         2b078:	e0822001 	add	r2, r2, r1
         2b07c:	e5d21001 	ldrb	r1, [r2, #1]
         2b080:	e5b5601c 	ldr	r6, [r5, #28]!
         2b084:	e5b5c018 	ldr	ip, [r5, #24]!
         2b088:	e3e0a000 	mvn	sl, #0	; 0x0
         2b08c:	e590e020 	ldr	lr, [r0, #32]
         2b090:	e5a0a030 	str	sl, [r0, #48]!
         2b094:	e5943000 	ldr	r3, [r4]
         2b098:	e5937028 	ldr	r7, [r3, #40]
         2b09c:	e59f0050 	ldr	r0, [pc, #50]	; 2b0f4 <AE8_Verify(AirusAParmBlock *)+0xac>
         2b0a0:	e3a05000 	mov	r5, #0	; 0x0
         2b0a4:	e3370000 	teq	r7, #0	; 0x0
         2b0a8:	1a000013 	bne	2b0fc <AE8_Verify(AirusAParmBlock *)+0xb4>
         2b0ac:	e5a35020 	str	r5, [r3, #32]!
         2b0b0:	e5943000 	ldr	r3, [r4]
         2b0b4:	e1a05003 	mov	r5, r3
         2b0b8:	e283700c 	add	r7, r3, #12	; 0xc
         2b0bc:	e8970088 	ldmia	r7, {r3, r7}
         2b0c0:	e0473003 	sub	r3, r7, r3
         2b0c4:	e3330002 	teq	r3, #2	; 0x2
         2b0c8:	03a00003 	moveq	r0, #3	; 0x3
         2b0cc:	05a5002c 	streq	r0, [r5, #44]!
         2b0d0:	0a00007c 	beq	2b2c8 <AE8_Verify(AirusAParmBlock *)+0x280>
         2b0d4:	e59f301c 	ldr	r3, [pc, #1c]	; 2b0f8 <AE8_Verify(AirusAParmBlock *)+0xb0>
         2b0d8:	e58d3000 	str	r3, [sp]
         2b0dc:	e59f300c 	ldr	r3, [pc, #c]	; 2b0f0 <AE8_Verify(AirusAParmBlock *)+0xa8>
         2b0e0:	e5933000 	ldr	r3, [r3]
         2b0e4:	e5935020 	ldr	r5, [r3, #32]
         2b0e8:	e7d65005 	ldrb	r5, [r6, r5]
         2b0ec:	ea000027 	b	2b190 <AE8_Verify(AirusAParmBlock *)+0x148>
         2b0f0:	0c10082c 	ldceq	8, cr0, [r0], -#176
         2b0f4:	0c100844 	ldceq	8, cr0, [r0], -#272
         2b0f8:	0c100834 	ldceq	8, cr0, [r0], -#208
         2b0fc:	e3110020 	tst	r1, #32	; 0x20
         2b100:	13a00003 	movne	r0, #3	; 0x3
         2b104:	1a00006d 	bne	2b2c0 <AE8_Verify(AirusAParmBlock *)+0x278>
         2b108:	e20130c0 	and	r3, r1, #192	; 0xc0
         2b10c:	e1a03323 	mov	r3, r3, lsr #6
         2b110:	e7903103 	ldr	r3, [r0, r3, lsl #2]
         2b114:	e0832002 	add	r2, r3, r2
         2b118:	e2011010 	and	r1, r1, #16	; 0x10
         2b11c:	e08a1241 	add	r1, sl, r1, asr #4
         2b120:	e1cc1001 	bic	r1, ip, r1
         2b124:	e0822001 	add	r2, r2, r1
         2b128:	e5d21001 	ldrb	r1, [r2, #1]
         2b12c:	eaffffe8 	b	2b0d4 <AE8_Verify(AirusAParmBlock *)+0x8c>
         2b130:	e1a07327 	mov	r7, r7, lsr #6
         2b134:	e7908107 	ldr	r8, [r0, r7, lsl #2]
         2b138:	e0889002 	add	r9, r8, r2
         2b13c:	e2018010 	and	r8, r1, #16	; 0x10
         2b140:	e08a8248 	add	r8, sl, r8, asr #4
         2b144:	e1cc8008 	bic	r8, ip, r8
         2b148:	e0898008 	add	r8, r9, r8
         2b14c:	e3370003 	teq	r7, #3	; 0x3
         2b150:	1a000007 	bne	2b174 <AE8_Verify(AirusAParmBlock *)+0x12c>
         2b154:	e5f27002 	ldrb	r7, [r2, #2]!
         2b158:	e201100f 	and	r1, r1, #15	; 0xf
         2b15c:	e1871401 	orr	r1, r7, r1, lsl #8
         2b160:	e5f27001 	ldrb	r7, [r2, #1]!
         2b164:	e1871401 	orr	r1, r7, r1, lsl #8
         2b168:	e5d22001 	ldrb	r2, [r2, #1]
         2b16c:	e1821401 	orr	r1, r2, r1, lsl #8
         2b170:	ea000004 	b	2b188 <AE8_Verify(AirusAParmBlock *)+0x140>
         2b174:	e7d22007 	ldrb	r2, [r2, r7]
         2b178:	e1821401 	orr	r1, r2, r1, lsl #8
         2b17c:	e59d2000 	ldr	r2, [sp]
         2b180:	e7922107 	ldr	r2, [r2, r7, lsl #2]
         2b184:	e0011002 	and	r1, r1, r2
         2b188:	e0882001 	add	r2, r8, r1
         2b18c:	e5d21001 	ldrb	r1, [r2, #1]
         2b190:	e5d27000 	ldrb	r7, [r2]
         2b194:	e1550007 	cmp	r5, r7
         2b198:	da000001 	ble	2b1a4 <AE8_Verify(AirusAParmBlock *)+0x15c>
         2b19c:	e21170c0 	ands	r7, r1, #192	; 0xc0
         2b1a0:	1affffe2 	bne	2b130 <AE8_Verify(AirusAParmBlock *)+0xe8>
         2b1a4:	e5d27000 	ldrb	r7, [r2]
         2b1a8:	e1350007 	teq	r5, r7
         2b1ac:	13a00003 	movne	r0, #3	; 0x3
         2b1b0:	15a3002c 	strne	r0, [r3, #44]!
         2b1b4:	1a000043 	bne	2b2c8 <AE8_Verify(AirusAParmBlock *)+0x280>
         2b1b8:	e593500c 	ldr	r5, [r3, #12]
         2b1bc:	e0425005 	sub	r5, r2, r5
         2b1c0:	e5a35028 	str	r5, [r3, #40]!
         2b1c4:	e5943000 	ldr	r3, [r4]
         2b1c8:	e5938020 	ldr	r8, [r3, #32]
         2b1cc:	e2887001 	add	r7, r8, #1	; 0x1
         2b1d0:	e158000e 	cmp	r8, lr
         2b1d4:	e5a37020 	str	r7, [r3, #32]!
         2b1d8:	3affffc7 	bcc	2b0fc <AE8_Verify(AirusAParmBlock *)+0xb4>
         2b1dc:	e5940000 	ldr	r0, [r4]
         2b1e0:	e5901008 	ldr	r1, [r0, #8]
         2b1e4:	e5911000 	ldr	r1, [r1]
         2b1e8:	e5d11001 	ldrb	r1, [r1, #1]
         2b1ec:	e2011007 	and	r1, r1, #7	; 0x7
         2b1f0:	e3310005 	teq	r1, #5	; 0x5
         2b1f4:	13310002 	teqne	r1, #2	; 0x2
         2b1f8:	03a01002 	moveq	r1, #2	; 0x2
         2b1fc:	13a01001 	movne	r1, #1	; 0x1
         2b200:	e590000c 	ldr	r0, [r0, #12]
         2b204:	e0800005 	add	r0, r0, r5
         2b208:	e7d00001 	ldrb	r0, [r0, r1]
         2b20c:	e2106010 	ands	r6, r0, #16	; 0x10
         2b210:	13a06001 	movne	r6, #1	; 0x1
         2b214:	e3360000 	teq	r6, #0	; 0x0
         2b218:	0a000004 	beq	2b230 <AE8_Verify(AirusAParmBlock *)+0x1e8>
         2b21c:	e1a00005 	mov	r0, r5
         2b220:	eb675bd2 	bl	1a02170 <$SkipNode(unsigned long)>
         2b224:	eb675bbd 	bl	1a02120 <$GetAttr(unsigned long)>
         2b228:	e5941000 	ldr	r1, [r4]
         2b22c:	e5a10024 	str	r0, [r1, #36]!
         2b230:	e5941000 	ldr	r1, [r4]
         2b234:	e5910008 	ldr	r0, [r1, #8]
         2b238:	e5900000 	ldr	r0, [r0]
         2b23c:	e5d00001 	ldrb	r0, [r0, #1]
         2b240:	e2000007 	and	r0, r0, #7	; 0x7
         2b244:	e3300005 	teq	r0, #5	; 0x5
         2b248:	13300002 	teqne	r0, #2	; 0x2
         2b24c:	03a00002 	moveq	r0, #2	; 0x2
         2b250:	13a00001 	movne	r0, #1	; 0x1
         2b254:	e591200c 	ldr	r2, [r1, #12]
         2b258:	e0822005 	add	r2, r2, r5
         2b25c:	e7d20000 	ldrb	r0, [r2, r0]
         2b260:	e3100020 	tst	r0, #32	; 0x20
         2b264:	13a00002 	movne	r0, #2	; 0x2
         2b268:	1a000015 	bne	2b2c4 <AE8_Verify(AirusAParmBlock *)+0x27c>
         2b26c:	e1a00005 	mov	r0, r5
         2b270:	eb675ba8 	bl	1a02118 <$FollowLeft(unsigned long)>
         2b274:	e5941000 	ldr	r1, [r4]
         2b278:	e5912008 	ldr	r2, [r1, #8]
         2b27c:	e5922000 	ldr	r2, [r2]
         2b280:	e5d22001 	ldrb	r2, [r2, #1]
         2b284:	e2022007 	and	r2, r2, #7	; 0x7
         2b288:	e3320005 	teq	r2, #5	; 0x5
         2b28c:	13320002 	teqne	r2, #2	; 0x2
         2b290:	03a02002 	moveq	r2, #2	; 0x2
         2b294:	13a02001 	movne	r2, #1	; 0x1
         2b298:	e591100c 	ldr	r1, [r1, #12]
         2b29c:	e0811000 	add	r1, r1, r0
         2b2a0:	e7d11002 	ldrb	r1, [r1, r2]
         2b2a4:	e20110c0 	and	r1, r1, #192	; 0xc0
         2b2a8:	e1b01321 	movs	r1, r1, lsr #6
         2b2ac:	1a000002 	bne	2b2bc <AE8_Verify(AirusAParmBlock *)+0x274>
         2b2b0:	eb675b9e 	bl	1a02130 <$GetSymbol(unsigned long)>
         2b2b4:	e5941000 	ldr	r1, [r4]
         2b2b8:	e5a10030 	str	r0, [r1, #48]!
         2b2bc:	e1a00006 	mov	r0, r6
         2b2c0:	e5941000 	ldr	r1, [r4]
         2b2c4:	e5a1002c 	str	r0, [r1, #44]!
         2b2c8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: AE16_Verify(AirusAParmBlock *)
 * Address: 0002b2cc
 */
AE16_Verify(AirusAParmBlock *) {
    /*
         2b2cc:	e1a0c00d 	mov	ip, sp
         2b2d0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         2b2d4:	e24cb004 	sub	fp, ip, #4	; 0x4
         2b2d8:	e1a05000 	mov	r5, r0
         2b2dc:	e24dd004 	sub	sp, sp, #4	; 0x4
         2b2e0:	eb675784 	bl	1a010f8 <$CheckDictPtrs(AirusAParmBlock *)>
         2b2e4:	e59f409c 	ldr	r4, [pc, #9c]	; 2b388 <AE16_Verify(AirusAParmBlock *)+0xbc>
         2b2e8:	e5940000 	ldr	r0, [r4]
         2b2ec:	e5901028 	ldr	r1, [r0, #40]
         2b2f0:	e3310000 	teq	r1, #0	; 0x0
         2b2f4:	03a01002 	moveq	r1, #2	; 0x2
         2b2f8:	e595200c 	ldr	r2, [r5, #12]
         2b2fc:	e0821001 	add	r1, r2, r1
         2b300:	e5d12002 	ldrb	r2, [r1, #2]
         2b304:	e5b5601c 	ldr	r6, [r5, #28]!
         2b308:	e5b5c018 	ldr	ip, [r5, #24]!
         2b30c:	e3e0a000 	mvn	sl, #0	; 0x0
         2b310:	e590e020 	ldr	lr, [r0, #32]
         2b314:	e5a0a030 	str	sl, [r0, #48]!
         2b318:	e5943000 	ldr	r3, [r4]
         2b31c:	e5935028 	ldr	r5, [r3, #40]
         2b320:	e59f0064 	ldr	r0, [pc, #64]	; 2b38c <AE16_Verify(AirusAParmBlock *)+0xc0>
         2b324:	e3350000 	teq	r5, #0	; 0x0
         2b328:	1a000019 	bne	2b394 <AE16_Verify(AirusAParmBlock *)+0xc8>
         2b32c:	e3a05000 	mov	r5, #0	; 0x0
         2b330:	e5a35020 	str	r5, [r3, #32]!
         2b334:	e5943000 	ldr	r3, [r4]
         2b338:	e1a05003 	mov	r5, r3
         2b33c:	e283700c 	add	r7, r3, #12	; 0xc
         2b340:	e8970088 	ldmia	r7, {r3, r7}
         2b344:	e0473003 	sub	r3, r7, r3
         2b348:	e3330002 	teq	r3, #2	; 0x2
         2b34c:	03a00003 	moveq	r0, #3	; 0x3
         2b350:	05a5002c 	streq	r0, [r5, #44]!
         2b354:	0a000089 	beq	2b580 <AE16_Verify(AirusAParmBlock *)+0x2b4>
         2b358:	e59f3030 	ldr	r3, [pc, #30]	; 2b390 <AE16_Verify(AirusAParmBlock *)+0xc4>
         2b35c:	e58d3000 	str	r3, [sp]
         2b360:	e59f3020 	ldr	r3, [pc, #20]	; 2b388 <AE16_Verify(AirusAParmBlock *)+0xbc>
         2b364:	e5933000 	ldr	r3, [r3]
         2b368:	e5935020 	ldr	r5, [r3, #32]
         2b36c:	e0865085 	add	r5, r6, r5, lsl #1
         2b370:	e5d57001 	ldrb	r7, [r5, #1]
         2b374:	e5d55000 	ldrb	r5, [r5]
         2b378:	e1875405 	orr	r5, r7, r5, lsl #8
         2b37c:	e1a05805 	mov	r5, r5, lsl #16
         2b380:	e1a05825 	mov	r5, r5, lsr #16
         2b384:	ea000029 	b	2b430 <AE16_Verify(AirusAParmBlock *)+0x164>
         2b388:	0c10082c 	ldceq	8, cr0, [r0], -#176
         2b38c:	0c100844 	ldceq	8, cr0, [r0], -#272
         2b390:	0c100834 	ldceq	8, cr0, [r0], -#208
         2b394:	e3120020 	tst	r2, #32	; 0x20
         2b398:	13a00003 	movne	r0, #3	; 0x3
         2b39c:	1a000075 	bne	2b578 <AE16_Verify(AirusAParmBlock *)+0x2ac>
         2b3a0:	e20230c0 	and	r3, r2, #192	; 0xc0
         2b3a4:	e1a03323 	mov	r3, r3, lsr #6
         2b3a8:	e7903103 	ldr	r3, [r0, r3, lsl #2]
         2b3ac:	e0831001 	add	r1, r3, r1
         2b3b0:	e2811001 	add	r1, r1, #1	; 0x1
         2b3b4:	e2022010 	and	r2, r2, #16	; 0x10
         2b3b8:	e08a2242 	add	r2, sl, r2, asr #4
         2b3bc:	e1cc2002 	bic	r2, ip, r2
         2b3c0:	e0811002 	add	r1, r1, r2
         2b3c4:	e5d12002 	ldrb	r2, [r1, #2]
         2b3c8:	eaffffe2 	b	2b358 <AE16_Verify(AirusAParmBlock *)+0x8c>
         2b3cc:	e1a07327 	mov	r7, r7, lsr #6
         2b3d0:	e7908107 	ldr	r8, [r0, r7, lsl #2]
         2b3d4:	e0888001 	add	r8, r8, r1
         2b3d8:	e2889001 	add	r9, r8, #1	; 0x1
         2b3dc:	e2028010 	and	r8, r2, #16	; 0x10
         2b3e0:	e08a8248 	add	r8, sl, r8, asr #4
         2b3e4:	e1cc8008 	bic	r8, ip, r8
         2b3e8:	e0898008 	add	r8, r9, r8
         2b3ec:	e3370003 	teq	r7, #3	; 0x3
         2b3f0:	1a000007 	bne	2b414 <AE16_Verify(AirusAParmBlock *)+0x148>
         2b3f4:	e5f17003 	ldrb	r7, [r1, #3]!
         2b3f8:	e202200f 	and	r2, r2, #15	; 0xf
         2b3fc:	e1872402 	orr	r2, r7, r2, lsl #8
         2b400:	e5f17001 	ldrb	r7, [r1, #1]!
         2b404:	e1872402 	orr	r2, r7, r2, lsl #8
         2b408:	e5d11001 	ldrb	r1, [r1, #1]
         2b40c:	e1811402 	orr	r1, r1, r2, lsl #8
         2b410:	ea000004 	b	2b428 <AE16_Verify(AirusAParmBlock *)+0x15c>
         2b414:	e7d11007 	ldrb	r1, [r1, r7]
         2b418:	e1811402 	orr	r1, r1, r2, lsl #8
         2b41c:	e59d2000 	ldr	r2, [sp]
         2b420:	e7922107 	ldr	r2, [r2, r7, lsl #2]
         2b424:	e0011002 	and	r1, r1, r2
         2b428:	e0881001 	add	r1, r8, r1
         2b42c:	e5d12002 	ldrb	r2, [r1, #2]
         2b430:	e5d18001 	ldrb	r8, [r1, #1]
         2b434:	e5d19000 	ldrb	r9, [r1]
         2b438:	e1888409 	orr	r8, r8, r9, lsl #8
         2b43c:	e1a08808 	mov	r8, r8, lsl #16
         2b440:	e1550828 	cmp	r5, r8, lsr #16
         2b444:	da000001 	ble	2b450 <AE16_Verify(AirusAParmBlock *)+0x184>
         2b448:	e21270c0 	ands	r7, r2, #192	; 0xc0
         2b44c:	1affffde 	bne	2b3cc <AE16_Verify(AirusAParmBlock *)+0x100>
         2b450:	e5d17001 	ldrb	r7, [r1, #1]
         2b454:	e5d18000 	ldrb	r8, [r1]
         2b458:	e1877408 	orr	r7, r7, r8, lsl #8
         2b45c:	e1a07807 	mov	r7, r7, lsl #16
         2b460:	e1350827 	teq	r5, r7, lsr #16
         2b464:	13a00003 	movne	r0, #3	; 0x3
         2b468:	15a3002c 	strne	r0, [r3, #44]!
         2b46c:	1a000043 	bne	2b580 <AE16_Verify(AirusAParmBlock *)+0x2b4>
         2b470:	e593500c 	ldr	r5, [r3, #12]
         2b474:	e0415005 	sub	r5, r1, r5
         2b478:	e5a35028 	str	r5, [r3, #40]!
         2b47c:	e5943000 	ldr	r3, [r4]
         2b480:	e5938020 	ldr	r8, [r3, #32]
         2b484:	e2887001 	add	r7, r8, #1	; 0x1
         2b488:	e158000e 	cmp	r8, lr
         2b48c:	e5a37020 	str	r7, [r3, #32]!
         2b490:	3affffbf 	bcc	2b394 <AE16_Verify(AirusAParmBlock *)+0xc8>
         2b494:	e5940000 	ldr	r0, [r4]
         2b498:	e5901008 	ldr	r1, [r0, #8]
         2b49c:	e5911000 	ldr	r1, [r1]
         2b4a0:	e5d11001 	ldrb	r1, [r1, #1]
         2b4a4:	e2011007 	and	r1, r1, #7	; 0x7
         2b4a8:	e3310005 	teq	r1, #5	; 0x5
         2b4ac:	13310002 	teqne	r1, #2	; 0x2
         2b4b0:	03a01002 	moveq	r1, #2	; 0x2
         2b4b4:	13a01001 	movne	r1, #1	; 0x1
         2b4b8:	e590000c 	ldr	r0, [r0, #12]
         2b4bc:	e0800005 	add	r0, r0, r5
         2b4c0:	e7d00001 	ldrb	r0, [r0, r1]
         2b4c4:	e2106010 	ands	r6, r0, #16	; 0x10
         2b4c8:	13a06001 	movne	r6, #1	; 0x1
         2b4cc:	e3360000 	teq	r6, #0	; 0x0
         2b4d0:	0a000004 	beq	2b4e8 <AE16_Verify(AirusAParmBlock *)+0x21c>
         2b4d4:	e1a00005 	mov	r0, r5
         2b4d8:	eb675b24 	bl	1a02170 <$SkipNode(unsigned long)>
         2b4dc:	eb675b0f 	bl	1a02120 <$GetAttr(unsigned long)>
         2b4e0:	e5941000 	ldr	r1, [r4]
         2b4e4:	e5a10024 	str	r0, [r1, #36]!
         2b4e8:	e5941000 	ldr	r1, [r4]
         2b4ec:	e5910008 	ldr	r0, [r1, #8]
         2b4f0:	e5900000 	ldr	r0, [r0]
         2b4f4:	e5d00001 	ldrb	r0, [r0, #1]
         2b4f8:	e2000007 	and	r0, r0, #7	; 0x7
         2b4fc:	e3300005 	teq	r0, #5	; 0x5
         2b500:	13300002 	teqne	r0, #2	; 0x2
         2b504:	03a00002 	moveq	r0, #2	; 0x2
         2b508:	13a00001 	movne	r0, #1	; 0x1
         2b50c:	e591200c 	ldr	r2, [r1, #12]
         2b510:	e0822005 	add	r2, r2, r5
         2b514:	e7d20000 	ldrb	r0, [r2, r0]
         2b518:	e3100020 	tst	r0, #32	; 0x20
         2b51c:	13a00002 	movne	r0, #2	; 0x2
         2b520:	1a000015 	bne	2b57c <AE16_Verify(AirusAParmBlock *)+0x2b0>
         2b524:	e1a00005 	mov	r0, r5
         2b528:	eb675afa 	bl	1a02118 <$FollowLeft(unsigned long)>
         2b52c:	e5941000 	ldr	r1, [r4]
         2b530:	e5912008 	ldr	r2, [r1, #8]
         2b534:	e5922000 	ldr	r2, [r2]
         2b538:	e5d22001 	ldrb	r2, [r2, #1]
         2b53c:	e2022007 	and	r2, r2, #7	; 0x7
         2b540:	e3320005 	teq	r2, #5	; 0x5
         2b544:	13320002 	teqne	r2, #2	; 0x2
         2b548:	03a02002 	moveq	r2, #2	; 0x2
         2b54c:	13a02001 	movne	r2, #1	; 0x1
         2b550:	e591100c 	ldr	r1, [r1, #12]
         2b554:	e0811000 	add	r1, r1, r0
         2b558:	e7d11002 	ldrb	r1, [r1, r2]
         2b55c:	e20110c0 	and	r1, r1, #192	; 0xc0
         2b560:	e1b01321 	movs	r1, r1, lsr #6
         2b564:	1a000002 	bne	2b574 <AE16_Verify(AirusAParmBlock *)+0x2a8>
         2b568:	eb675af0 	bl	1a02130 <$GetSymbol(unsigned long)>
         2b56c:	e5941000 	ldr	r1, [r4]
         2b570:	e5a10030 	str	r0, [r1, #48]!
         2b574:	e1a00006 	mov	r0, r6
         2b578:	e5941000 	ldr	r1, [r4]
         2b57c:	e5a1002c 	str	r0, [r1, #44]!
         2b580:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: AEnum_Verify(AirusAParmBlock *)
 * Address: 0002b584
 */
AEnum_Verify(AirusAParmBlock *) {
    /*
         2b584:	e5901008 	ldr	r1, [r0, #8]
         2b588:	e5911000 	ldr	r1, [r1]
         2b58c:	e5d11001 	ldrb	r1, [r1, #1]
         2b590:	e2011007 	and	r1, r1, #7	; 0x7
         2b594:	e3310005 	teq	r1, #5	; 0x5
         2b598:	13310002 	teqne	r1, #2	; 0x2
         2b59c:	0a6756c0 	beq	1a010a4 <$AE16_Verify(AirusAParmBlock *)>
         2b5a0:	1a6756c0 	bne	1a010a8 <$AE8_Verify(AirusAParmBlock *)>
    */
}

/**
 * Symbol: AL_Shell(unsigned long, AirusAParmBlock *)
 * Address: 0002b758
 */
AL_Shell(unsigned long, AirusAParmBlock *) {
    /*
         2b758:	e1a0c00d 	mov	ip, sp
         2b75c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         2b760:	e24cb004 	sub	fp, ip, #4	; 0x4
         2b764:	e1a04001 	mov	r4, r1
         2b768:	eb67522f 	bl	1a0002c <$AirusAL(unsigned long, AirusAParmBlock *)>
         2b76c:	e5b4002c 	ldr	r0, [r4, #44]!
         2b770:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: AL16_Shell(int, AirusAParmBlock *)
 * Address: 0002b774
 */
AL16_Shell(int, AirusAParmBlock *) {
    /*
         2b774:	e1a0c00d 	mov	ip, sp
         2b778:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         2b77c:	e24cb004 	sub	fp, ip, #4	; 0x4
         2b780:	e1a04001 	mov	r4, r1
         2b784:	eb675227 	bl	1a00028 <$AirusAL16(unsigned long, AirusAParmBlock *)>
         2b788:	e5b4002c 	ldr	r0, [r4, #44]!
         2b78c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: AirusAL16(unsigned long, AirusAParmBlock *)
 * Address: 0002b790
 */
AirusAL16(unsigned long, AirusAParmBlock *) {
    /*
         2b790:	e1a0c00d 	mov	ip, sp
         2b794:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         2b798:	e24cb004 	sub	fp, ip, #4	; 0x4
         2b79c:	e1a04001 	mov	r4, r1
         2b7a0:	e3300002 	teq	r0, #2	; 0x2
         2b7a4:	0a000005 	beq	2b7c0 <AirusAL16(unsigned long, AirusAParmBlock *)+0x30>
         2b7a8:	e3300008 	teq	r0, #8	; 0x8
         2b7ac:	0a000006 	beq	2b7cc <AirusAL16(unsigned long, AirusAParmBlock *)+0x3c>
         2b7b0:	e3300009 	teq	r0, #9	; 0x9
         2b7b4:	01a00004 	moveq	r0, r4
         2b7b8:	0b675e82 	bleq	1a031c8 <$AL16_NextSet9(AirusAParmBlock *)>
         2b7bc:	ea000004 	b	2b7d4 <AirusAL16(unsigned long, AirusAParmBlock *)+0x44>
         2b7c0:	e1a00004 	mov	r0, r4
         2b7c4:	eb67521d 	bl	1a00040 <$AL16_Verify(AirusAParmBlock *)>
         2b7c8:	ea000001 	b	2b7d4 <AirusAL16(unsigned long, AirusAParmBlock *)+0x44>
         2b7cc:	e1a00004 	mov	r0, r4
         2b7d0:	eb675218 	bl	1a00038 <$AL16_NextSet(AirusAParmBlock *)>
         2b7d4:	e5b4002c 	ldr	r0, [r4, #44]!
         2b7d8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: AL16_GetAttribute(unsigned long)
 * Address: 0002b7dc
 */
AL16_GetAttribute(unsigned long) {
    /*
         2b7dc:	e92d4000 	stmdb	sp!, {lr}
         2b7e0:	e3a02000 	mov	r2, #0	; 0x0
         2b7e4:	e59f10b0 	ldr	r1, [pc, #b0]	; 2b89c <AL16_GetAttribute(unsigned long)+0xc0>
         2b7e8:	e5913000 	ldr	r3, [r1]
         2b7ec:	e5a32024 	str	r2, [r3, #36]!
         2b7f0:	e5912000 	ldr	r2, [r1]
         2b7f4:	e1a03002 	mov	r3, r2
         2b7f8:	e592c034 	ldr	ip, [r2, #52]
         2b7fc:	e08ce000 	add	lr, ip, r0
         2b800:	e592200c 	ldr	r2, [r2, #12]
         2b804:	e0820000 	add	r0, r2, r0
         2b808:	e5d00002 	ldrb	r0, [r0, #2]
         2b80c:	e3100002 	tst	r0, #2	; 0x2
         2b810:	03a00005 	moveq	r0, #5	; 0x5
         2b814:	13a00003 	movne	r0, #3	; 0x3
         2b818:	e08e0000 	add	r0, lr, r0
         2b81c:	e040000c 	sub	r0, r0, ip
         2b820:	e33c0000 	teq	ip, #0	; 0x0
         2b824:	08bd8000 	ldmeqia	sp!, {pc}
         2b828:	e33c0001 	teq	ip, #1	; 0x1
         2b82c:	07d20000 	ldreqb	r0, [r2, r0]
         2b830:	05a30024 	streq	r0, [r3, #36]!
         2b834:	08bd8000 	ldmeqia	sp!, {pc}
         2b838:	e33c0002 	teq	ip, #2	; 0x2
         2b83c:	0a000017 	beq	2b8a0 <AL16_GetAttribute(unsigned long)+0xc4>
         2b840:	e33c0004 	teq	ip, #4	; 0x4
         2b844:	18bd8000 	ldmneia	sp!, {pc}
         2b848:	e7d22000 	ldrb	r2, [r2, r0]
         2b84c:	e5a32024 	str	r2, [r3, #36]!
         2b850:	e1a03002 	mov	r3, r2
         2b854:	e5912000 	ldr	r2, [r1]
         2b858:	e592c00c 	ldr	ip, [r2, #12]
         2b85c:	e08cc000 	add	ip, ip, r0
         2b860:	e5dcc001 	ldrb	ip, [ip, #1]
         2b864:	e18c3403 	orr	r3, ip, r3, lsl #8
         2b868:	e5a23024 	str	r3, [r2, #36]!
         2b86c:	e5912000 	ldr	r2, [r1]
         2b870:	e592c00c 	ldr	ip, [r2, #12]
         2b874:	e08cc000 	add	ip, ip, r0
         2b878:	e5dcc002 	ldrb	ip, [ip, #2]
         2b87c:	e18c3403 	orr	r3, ip, r3, lsl #8
         2b880:	e5a23024 	str	r3, [r2, #36]!
         2b884:	e5911000 	ldr	r1, [r1]
         2b888:	e591200c 	ldr	r2, [r1, #12]
         2b88c:	e0820000 	add	r0, r2, r0
         2b890:	e5d00003 	ldrb	r0, [r0, #3]
         2b894:	e1800403 	orr	r0, r0, r3, lsl #8
         2b898:	ea000007 	b	2b8bc <AL16_GetAttribute(unsigned long)+0xe0>
         2b89c:	0c100858 	ldceq	8, cr0, [r0], -#352
         2b8a0:	e7d22000 	ldrb	r2, [r2, r0]
         2b8a4:	e5a32024 	str	r2, [r3, #36]!
         2b8a8:	e5911000 	ldr	r1, [r1]
         2b8ac:	e591300c 	ldr	r3, [r1, #12]
         2b8b0:	e0830000 	add	r0, r3, r0
         2b8b4:	e5d00001 	ldrb	r0, [r0, #1]
         2b8b8:	e1800402 	orr	r0, r0, r2, lsl #8
         2b8bc:	e5a10024 	str	r0, [r1, #36]!
         2b8c0:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: AL16_GetAttribute2(unsigned long)
 * Address: 0002b8c4
 */
AL16_GetAttribute2(unsigned long) {
    /*
         2b8c4:	e1a0c00d 	mov	ip, sp
         2b8c8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         2b8cc:	e24cb004 	sub	fp, ip, #4	; 0x4
         2b8d0:	eb6755fe 	bl	1a010d0 <$AL16_ClassOffset(unsigned long)>
         2b8d4:	e59f1010 	ldr	r1, [pc, #10]	; 2b8ec <AL16_GetAttribute2(unsigned long)+0x28>
         2b8d8:	e5912000 	ldr	r2, [r1]
         2b8dc:	e592100c 	ldr	r1, [r2, #12]
         2b8e0:	e0800001 	add	r0, r0, r1
         2b8e4:	e1a01000 	mov	r1, r0
         2b8e8:	ea000002 	b	2b8f8 <AL16_GetAttribute2(unsigned long)+0x34>
         2b8ec:	0c100858 	ldceq	8, cr0, [r0], -#352
         2b8f0:	e2800002 	add	r0, r0, #2	; 0x2
         2b8f4:	e2811002 	add	r1, r1, #2	; 0x2
         2b8f8:	e5d03001 	ldrb	r3, [r0, #1]
         2b8fc:	e5d0c000 	ldrb	ip, [r0]
         2b900:	e183340c 	orr	r3, r3, ip, lsl #8
         2b904:	e1b03803 	movs	r3, r3, lsl #16
         2b908:	1afffff8 	bne	2b8f0 <AL16_GetAttribute2(unsigned long)+0x2c>
         2b90c:	e2810002 	add	r0, r1, #2	; 0x2
         2b910:	e5a20048 	str	r0, [r2, #72]!
         2b914:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: AL16_Verify(AirusAParmBlock *)
 * Address: 0002b918
 */
AL16_Verify(AirusAParmBlock *) {
    /*
         2b918:	e1a0c00d 	mov	ip, sp
         2b91c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         2b920:	e24cb004 	sub	fp, ip, #4	; 0x4
         2b924:	e3a06000 	mov	r6, #0	; 0x0
         2b928:	eb6755ea 	bl	1a010d8 <$AL16_Prep(AirusAParmBlock *)>
         2b92c:	e59f405c 	ldr	r4, [pc, #5c]	; 2b990 <AL16_Verify(AirusAParmBlock *)+0x78>
         2b930:	e5940000 	ldr	r0, [r4]
         2b934:	e5901028 	ldr	r1, [r0, #40]
         2b938:	e3310000 	teq	r1, #0	; 0x0
         2b93c:	03a05002 	moveq	r5, #2	; 0x2
         2b940:	11a05001 	movne	r5, r1
         2b944:	e3e01000 	mvn	r1, #0	; 0x0
         2b948:	e5908020 	ldr	r8, [r0, #32]
         2b94c:	e5a01030 	str	r1, [r0, #48]!
         2b950:	e5940000 	ldr	r0, [r4]
         2b954:	e3a07003 	mov	r7, #3	; 0x3
         2b958:	e5901028 	ldr	r1, [r0, #40]
         2b95c:	e3310000 	teq	r1, #0	; 0x0
         2b960:	1a00000b 	bne	2b994 <AL16_Verify(AirusAParmBlock *)+0x7c>
         2b964:	e3a01000 	mov	r1, #0	; 0x0
         2b968:	e5a01020 	str	r1, [r0, #32]!
         2b96c:	e5940000 	ldr	r0, [r4]
         2b970:	e1a01000 	mov	r1, r0
         2b974:	e280200c 	add	r2, r0, #12	; 0xc
         2b978:	e8920005 	ldmia	r2, {r0, r2}
         2b97c:	e0420000 	sub	r0, r2, r0
         2b980:	e3300002 	teq	r0, #2	; 0x2
         2b984:	1a00000b 	bne	2b9b8 <AL16_Verify(AirusAParmBlock *)+0xa0>
         2b988:	e1a00007 	mov	r0, r7
         2b98c:	ea00006e 	b	2bb4c <AL16_Verify(AirusAParmBlock *)+0x234>
         2b990:	0c100858 	ldceq	8, cr0, [r0], -#352
         2b994:	e5941000 	ldr	r1, [r4]
         2b998:	e591000c 	ldr	r0, [r1, #12]
         2b99c:	e0800005 	add	r0, r0, r5
         2b9a0:	e5d00002 	ldrb	r0, [r0, #2]
         2b9a4:	e3100002 	tst	r0, #2	; 0x2
         2b9a8:	1afffff6 	bne	2b988 <AL16_Verify(AirusAParmBlock *)+0x70>
         2b9ac:	e1a00005 	mov	r0, r5
         2b9b0:	eb6755c7 	bl	1a010d4 <$AL16_LBNode(unsigned long)>
         2b9b4:	e1a05000 	mov	r5, r0
         2b9b8:	e5940000 	ldr	r0, [r4]
         2b9bc:	e590101c 	ldr	r1, [r0, #28]
         2b9c0:	e5900020 	ldr	r0, [r0, #32]
         2b9c4:	e7919080 	ldr	r9, [r1, r0, lsl #1]
         2b9c8:	e1a09829 	mov	r9, r9, lsr #16
         2b9cc:	e1a00005 	mov	r0, r5
         2b9d0:	eb6755be 	bl	1a010d0 <$AL16_ClassOffset(unsigned long)>
         2b9d4:	e5943000 	ldr	r3, [r4]
         2b9d8:	e593200c 	ldr	r2, [r3, #12]
         2b9dc:	e0800002 	add	r0, r0, r2
         2b9e0:	e5d01001 	ldrb	r1, [r0, #1]
         2b9e4:	e201c0ff 	and	ip, r1, #255	; 0xff
         2b9e8:	e5d01000 	ldrb	r1, [r0]
         2b9ec:	e18c1401 	orr	r1, ip, r1, lsl #8
         2b9f0:	e1a01801 	mov	r1, r1, lsl #16
         2b9f4:	e1b01821 	movs	r1, r1, lsr #16
         2b9f8:	0a000009 	beq	2ba24 <AL16_Verify(AirusAParmBlock *)+0x10c>
         2b9fc:	e1390001 	teq	r9, r1
         2ba00:	0a000013 	beq	2ba54 <AL16_Verify(AirusAParmBlock *)+0x13c>
         2ba04:	e2800002 	add	r0, r0, #2	; 0x2
         2ba08:	e5d01001 	ldrb	r1, [r0, #1]
         2ba0c:	e201c0ff 	and	ip, r1, #255	; 0xff
         2ba10:	e5d01000 	ldrb	r1, [r0]
         2ba14:	e18c1401 	orr	r1, ip, r1, lsl #8
         2ba18:	e1a01801 	mov	r1, r1, lsl #16
         2ba1c:	e1b01821 	movs	r1, r1, lsr #16
         2ba20:	1afffff5 	bne	2b9fc <AL16_Verify(AirusAParmBlock *)+0xe4>
         2ba24:	e0820005 	add	r0, r2, r5
         2ba28:	e5d00002 	ldrb	r0, [r0, #2]
         2ba2c:	e3100004 	tst	r0, #4	; 0x4
         2ba30:	11a00007 	movne	r0, r7
         2ba34:	1a000043 	bne	2bb48 <AL16_Verify(AirusAParmBlock *)+0x230>
         2ba38:	e5b31034 	ldr	r1, [r3, #52]!
         2ba3c:	e0811005 	add	r1, r1, r5
         2ba40:	e3100002 	tst	r0, #2	; 0x2
         2ba44:	03a00005 	moveq	r0, #5	; 0x5
         2ba48:	13a00003 	movne	r0, #3	; 0x3
         2ba4c:	e0815000 	add	r5, r1, r0
         2ba50:	eaffffdd 	b	2b9cc <AL16_Verify(AirusAParmBlock *)+0xb4>
         2ba54:	e5940000 	ldr	r0, [r4]
         2ba58:	e5a05028 	str	r5, [r0, #40]!
         2ba5c:	e1a00005 	mov	r0, r5
         2ba60:	eb675173 	bl	1a00034 <$AL16_GetAttribute(unsigned long)>
         2ba64:	e1a00005 	mov	r0, r5
         2ba68:	eb675170 	bl	1a00030 <$AL16_GetAttribute2(unsigned long)>
         2ba6c:	e5941000 	ldr	r1, [r4]
         2ba70:	e5910020 	ldr	r0, [r1, #32]
         2ba74:	e2800001 	add	r0, r0, #1	; 0x1
         2ba78:	e5a10020 	str	r0, [r1, #32]!
         2ba7c:	e1500008 	cmp	r0, r8
         2ba80:	e5941000 	ldr	r1, [r4]
         2ba84:	9affffc2 	bls	2b994 <AL16_Verify(AirusAParmBlock *)+0x7c>
         2ba88:	e591000c 	ldr	r0, [r1, #12]
         2ba8c:	e0800005 	add	r0, r0, r5
         2ba90:	e5d00002 	ldrb	r0, [r0, #2]
         2ba94:	e2107001 	ands	r7, r0, #1	; 0x1
         2ba98:	13a07001 	movne	r7, #1	; 0x1
         2ba9c:	e3100002 	tst	r0, #2	; 0x2
         2baa0:	13a00002 	movne	r0, #2	; 0x2
         2baa4:	1a000028 	bne	2bb4c <AL16_Verify(AirusAParmBlock *)+0x234>
         2baa8:	e1a00005 	mov	r0, r5
         2baac:	eb675588 	bl	1a010d4 <$AL16_LBNode(unsigned long)>
         2bab0:	e1a05000 	mov	r5, r0
         2bab4:	e1a00005 	mov	r0, r5
         2bab8:	eb675584 	bl	1a010d0 <$AL16_ClassOffset(unsigned long)>
         2babc:	e5941000 	ldr	r1, [r4]
         2bac0:	e591100c 	ldr	r1, [r1, #12]
         2bac4:	e0800001 	add	r0, r0, r1
         2bac8:	e5d00002 	ldrb	r0, [r0, #2]
         2bacc:	e3300000 	teq	r0, #0	; 0x0
         2bad0:	1a00001b 	bne	2bb44 <AL16_Verify(AirusAParmBlock *)+0x22c>
         2bad4:	e1a00005 	mov	r0, r5
         2bad8:	eb67557c 	bl	1a010d0 <$AL16_ClassOffset(unsigned long)>
         2badc:	e5942000 	ldr	r2, [r4]
         2bae0:	e592100c 	ldr	r1, [r2, #12]
         2bae4:	e0800001 	add	r0, r0, r1
         2bae8:	e5d03001 	ldrb	r3, [r0, #1]
         2baec:	e5d00000 	ldrb	r0, [r0]
         2baf0:	e1830400 	orr	r0, r3, r0, lsl #8
         2baf4:	e1a00800 	mov	r0, r0, lsl #16
         2baf8:	e1a00820 	mov	r0, r0, lsr #16
         2bafc:	e3360000 	teq	r6, #0	; 0x0
         2bb00:	01a06000 	moveq	r6, r0
         2bb04:	0a000001 	beq	2bb10 <AL16_Verify(AirusAParmBlock *)+0x1f8>
         2bb08:	e1300006 	teq	r0, r6
         2bb0c:	1a00000c 	bne	2bb44 <AL16_Verify(AirusAParmBlock *)+0x22c>
         2bb10:	e0810005 	add	r0, r1, r5
         2bb14:	e5d00002 	ldrb	r0, [r0, #2]
         2bb18:	e3100004 	tst	r0, #4	; 0x4
         2bb1c:	0a000006 	beq	2bb3c <AL16_Verify(AirusAParmBlock *)+0x224>
         2bb20:	e5b21034 	ldr	r1, [r2, #52]!
         2bb24:	e0811005 	add	r1, r1, r5
         2bb28:	e3100002 	tst	r0, #2	; 0x2
         2bb2c:	03a00005 	moveq	r0, #5	; 0x5
         2bb30:	13a00003 	movne	r0, #3	; 0x3
         2bb34:	e0815000 	add	r5, r1, r0
         2bb38:	eaffffdd 	b	2bab4 <AL16_Verify(AirusAParmBlock *)+0x19c>
         2bb3c:	e5940000 	ldr	r0, [r4]
         2bb40:	e5a06030 	str	r6, [r0, #48]!
         2bb44:	e1a00007 	mov	r0, r7
         2bb48:	e5941000 	ldr	r1, [r4]
         2bb4c:	e5a1002c 	str	r0, [r1, #44]!
         2bb50:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: AL16_NextSetCB__FUlN31
 * Address: 0002bb54
 */
void globals::AL16_NextSetCB() {
    /*
         2bb54:	e5902000 	ldr	r2, [r0]
         2bb58:	e5d13001 	ldrb	r3, [r1, #1]
         2bb5c:	e5d1c000 	ldrb	ip, [r1]
         2bb60:	e183340c 	orr	r3, r3, ip, lsl #8
         2bb64:	e1a03803 	mov	r3, r3, lsl #16
         2bb68:	e1b03823 	movs	r3, r3, lsr #16
         2bb6c:	0a00000a 	beq	2bb9c <AL16_NextSetCB__FUlN31+0x48>
         2bb70:	e5c23001 	strb	r3, [r2, #1]
         2bb74:	e1a03443 	mov	r3, r3, asr #8
         2bb78:	e4c23002 	strb	r3, [r2], #2
         2bb7c:	e2811002 	add	r1, r1, #2	; 0x2
         2bb80:	e5d13001 	ldrb	r3, [r1, #1]
         2bb84:	e203c0ff 	and	ip, r3, #255	; 0xff
         2bb88:	e5d13000 	ldrb	r3, [r1]
         2bb8c:	e18c3403 	orr	r3, ip, r3, lsl #8
         2bb90:	e1a03803 	mov	r3, r3, lsl #16
         2bb94:	e1b03823 	movs	r3, r3, lsr #16
         2bb98:	1afffff4 	bne	2bb70 <AL16_NextSetCB__FUlN31+0x1c>
         2bb9c:	e5802000 	str	r2, [r0]
         2bba0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: AL16_NextSet(AirusAParmBlock *)
 * Address: 0002bba4
 */
AL16_NextSet(AirusAParmBlock *) {
    /*
         2bba4:	e1a0c00d 	mov	ip, sp
         2bba8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         2bbac:	e24cb004 	sub	fp, ip, #4	; 0x4
         2bbb0:	e24dd004 	sub	sp, sp, #4	; 0x4
         2bbb4:	e590101c 	ldr	r1, [r0, #28]
         2bbb8:	e58d1000 	str	r1, [sp]
         2bbbc:	e580d050 	str	sp, [r0, #80]
         2bbc0:	e59f1018 	ldr	r1, [pc, #18]	; 2bbe0 <AL16_NextSet(AirusAParmBlock *)+0x3c>
         2bbc4:	e5801054 	str	r1, [r0, #84]
         2bbc8:	eb675d7e 	bl	1a031c8 <$AL16_NextSet9(AirusAParmBlock *)>
         2bbcc:	e3a01000 	mov	r1, #0	; 0x0
         2bbd0:	e59d2000 	ldr	r2, [sp]
         2bbd4:	e5c21001 	strb	r1, [r2, #1]
         2bbd8:	e5c21000 	strb	r1, [r2]
         2bbdc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         2bbe0:	01a031cc 	moveq	r3, ip, asr #3
    */
}

/**
 * Symbol: AL16_NextSet9(AirusAParmBlock *)
 * Address: 0002bbe4
 */
AL16_NextSet9(AirusAParmBlock *) {
    /*
         2bbe4:	e1a0c00d 	mov	ip, sp
         2bbe8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         2bbec:	e24cb004 	sub	fp, ip, #4	; 0x4
         2bbf0:	eb675538 	bl	1a010d8 <$AL16_Prep(AirusAParmBlock *)>
         2bbf4:	e59f6160 	ldr	r6, [pc, #160]	; 2bd5c <AL16_NextSet9(AirusAParmBlock *)+0x178>
         2bbf8:	e5960000 	ldr	r0, [r6]
         2bbfc:	e5905028 	ldr	r5, [r0, #40]
         2bc00:	e3350000 	teq	r5, #0	; 0x0
         2bc04:	03a05002 	moveq	r5, #2	; 0x2
         2bc08:	e3a07000 	mov	r7, #0	; 0x0
         2bc0c:	e5a0702c 	str	r7, [r0, #44]!
         2bc10:	e5960000 	ldr	r0, [r6]
         2bc14:	e1a01000 	mov	r1, r0
         2bc18:	e280200c 	add	r2, r0, #12	; 0xc
         2bc1c:	e8920005 	ldmia	r2, {r0, r2}
         2bc20:	e2800002 	add	r0, r0, #2	; 0x2
         2bc24:	e1320000 	teq	r2, r0
         2bc28:	03a00001 	moveq	r0, #1	; 0x1
         2bc2c:	05a1002c 	streq	r0, [r1, #44]!
         2bc30:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         2bc34:	e5b10028 	ldr	r0, [r1, #40]!
         2bc38:	e3300000 	teq	r0, #0	; 0x0
         2bc3c:	0a000002 	beq	2bc4c <AL16_NextSet9(AirusAParmBlock *)+0x68>
         2bc40:	e1a00005 	mov	r0, r5
         2bc44:	eb675522 	bl	1a010d4 <$AL16_LBNode(unsigned long)>
         2bc48:	e1a05000 	mov	r5, r0
         2bc4c:	e5960000 	ldr	r0, [r6]
         2bc50:	e590000c 	ldr	r0, [r0, #12]
         2bc54:	e0800005 	add	r0, r0, r5
         2bc58:	e5d00002 	ldrb	r0, [r0, #2]
         2bc5c:	e3100001 	tst	r0, #1	; 0x1
         2bc60:	03a04000 	moveq	r4, #0	; 0x0
         2bc64:	0a000003 	beq	2bc78 <AL16_NextSet9(AirusAParmBlock *)+0x94>
         2bc68:	e1a00005 	mov	r0, r5
         2bc6c:	eb6750f0 	bl	1a00034 <$AL16_GetAttribute(unsigned long)>
         2bc70:	e5960000 	ldr	r0, [r6]
         2bc74:	e5b04024 	ldr	r4, [r0, #36]!
         2bc78:	e1a00005 	mov	r0, r5
         2bc7c:	eb675513 	bl	1a010d0 <$AL16_ClassOffset(unsigned long)>
         2bc80:	e596c000 	ldr	ip, [r6]
         2bc84:	e59c200c 	ldr	r2, [ip, #12]
         2bc88:	e0801002 	add	r1, r0, r2
         2bc8c:	e0820005 	add	r0, r2, r5
         2bc90:	e5d00002 	ldrb	r0, [r0, #2]
         2bc94:	e1852f00 	orr	r2, r5, r0, lsl #30
         2bc98:	e1a03004 	mov	r3, r4
         2bc9c:	e59c0050 	ldr	r0, [ip, #80]
         2bca0:	e1a0e00f 	mov	lr, pc
         2bca4:	e59cf054 	ldr	pc, [ip, #84]
         2bca8:	e5960000 	ldr	r0, [r6]
         2bcac:	e590000c 	ldr	r0, [r0, #12]
         2bcb0:	e0800005 	add	r0, r0, r5
         2bcb4:	e5d00002 	ldrb	r0, [r0, #2]
         2bcb8:	e3100004 	tst	r0, #4	; 0x4
         2bcbc:	1a000024 	bne	2bd54 <AL16_NextSet9(AirusAParmBlock *)+0x170>
         2bcc0:	e5960000 	ldr	r0, [r6]
         2bcc4:	e5901034 	ldr	r1, [r0, #52]
         2bcc8:	e0811005 	add	r1, r1, r5
         2bccc:	e590000c 	ldr	r0, [r0, #12]
         2bcd0:	e0802005 	add	r2, r0, r5
         2bcd4:	e5d22002 	ldrb	r2, [r2, #2]
         2bcd8:	e3120002 	tst	r2, #2	; 0x2
         2bcdc:	03a02005 	moveq	r2, #5	; 0x5
         2bce0:	13a02003 	movne	r2, #3	; 0x3
         2bce4:	e0815002 	add	r5, r1, r2
         2bce8:	e0800005 	add	r0, r0, r5
         2bcec:	e5d00002 	ldrb	r0, [r0, #2]
         2bcf0:	e3100001 	tst	r0, #1	; 0x1
         2bcf4:	03a04000 	moveq	r4, #0	; 0x0
         2bcf8:	0a000003 	beq	2bd0c <AL16_NextSet9(AirusAParmBlock *)+0x128>
         2bcfc:	e1a00005 	mov	r0, r5
         2bd00:	eb6750cb 	bl	1a00034 <$AL16_GetAttribute(unsigned long)>
         2bd04:	e5960000 	ldr	r0, [r6]
         2bd08:	e5b04024 	ldr	r4, [r0, #36]!
         2bd0c:	e1a00005 	mov	r0, r5
         2bd10:	eb6754ee 	bl	1a010d0 <$AL16_ClassOffset(unsigned long)>
         2bd14:	e596c000 	ldr	ip, [r6]
         2bd18:	e59c200c 	ldr	r2, [ip, #12]
         2bd1c:	e0801002 	add	r1, r0, r2
         2bd20:	e0820005 	add	r0, r2, r5
         2bd24:	e5d00002 	ldrb	r0, [r0, #2]
         2bd28:	e1852f00 	orr	r2, r5, r0, lsl #30
         2bd2c:	e1a03004 	mov	r3, r4
         2bd30:	e59c0050 	ldr	r0, [ip, #80]
         2bd34:	e1a0e00f 	mov	lr, pc
         2bd38:	e59cf054 	ldr	pc, [ip, #84]
         2bd3c:	e5960000 	ldr	r0, [r6]
         2bd40:	e590000c 	ldr	r0, [r0, #12]
         2bd44:	e0800005 	add	r0, r0, r5
         2bd48:	e5d00002 	ldrb	r0, [r0, #2]
         2bd4c:	e3100004 	tst	r0, #4	; 0x4
         2bd50:	0affffda 	beq	2bcc0 <AL16_NextSet9(AirusAParmBlock *)+0xdc>
         2bd54:	e1a00007 	mov	r0, r7
         2bd58:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         2bd5c:	0c100858 	ldceq	8, cr0, [r0], -#352
    */
}

/**
 * Symbol: AL16_ClassOffset(unsigned long)
 * Address: 0002bd60
 */
AL16_ClassOffset(unsigned long) {
    /*
         2bd60:	e59f1018 	ldr	r1, [pc, #18]	; 2bd80 <AL16_ClassOffset(unsigned long)+0x20>
         2bd64:	e5911000 	ldr	r1, [r1]
         2bd68:	e5b1200c 	ldr	r2, [r1, #12]!
         2bd6c:	e7d21000 	ldrb	r1, [r2, r0]
         2bd70:	e0820000 	add	r0, r2, r0
         2bd74:	e5d00001 	ldrb	r0, [r0, #1]
         2bd78:	e1800401 	orr	r0, r0, r1, lsl #8
         2bd7c:	e1a0f00e 	mov	pc, lr
         2bd80:	0c100858 	ldceq	8, cr0, [r0], -#352
    */
}

/**
 * Symbol: AL16_LBNode(unsigned long)
 * Address: 0002bd84
 */
AL16_LBNode(unsigned long) {
    /*
         2bd84:	e59f1018 	ldr	r1, [pc, #18]	; 2bda4 <AL16_LBNode(unsigned long)+0x20>
         2bd88:	e5911000 	ldr	r1, [r1]
         2bd8c:	e591100c 	ldr	r1, [r1, #12]
         2bd90:	e0811000 	add	r1, r1, r0
         2bd94:	e5d10003 	ldrb	r0, [r1, #3]
         2bd98:	e5d11004 	ldrb	r1, [r1, #4]
         2bd9c:	e1810400 	orr	r0, r1, r0, lsl #8
         2bda0:	e1a0f00e 	mov	pc, lr
         2bda4:	0c100858 	ldceq	8, cr0, [r0], -#352
    */
}

/**
 * Symbol: AL16_Prep(AirusAParmBlock *)
 * Address: 0002bda8
 */
AL16_Prep(AirusAParmBlock *) {
    /*
         2bda8:	e59f3040 	ldr	r3, [pc, #40]	; 2bdf0 <AL16_Prep(AirusAParmBlock *)+0x48>
         2bdac:	e5830000 	str	r0, [r3]
         2bdb0:	e5902008 	ldr	r2, [r0, #8]
         2bdb4:	e5922000 	ldr	r2, [r2]
         2bdb8:	e590100c 	ldr	r1, [r0, #12]
         2bdbc:	e1520001 	cmp	r2, r1
         2bdc0:	90411002 	subls	r1, r1, r2
         2bdc4:	95902010 	ldrls	r2, [r0, #16]
         2bdc8:	90421001 	subls	r1, r2, r1
         2bdcc:	80422001 	subhi	r2, r2, r1
         2bdd0:	85901010 	ldrhi	r1, [r0, #16]
         2bdd4:	80821001 	addhi	r1, r2, r1
         2bdd8:	e5a01010 	str	r1, [r0, #16]!
         2bddc:	e5930000 	ldr	r0, [r3]
         2bde0:	e5901008 	ldr	r1, [r0, #8]
         2bde4:	e5911000 	ldr	r1, [r1]
         2bde8:	e5a0100c 	str	r1, [r0, #12]!
         2bdec:	e1a0f00e 	mov	pc, lr
         2bdf0:	0c100858 	ldceq	8, cr0, [r0], -#352
    */
}

/**
 * Symbol: AirusAL(unsigned long, AirusAParmBlock *)
 * Address: 0002bdf4
 */
AirusAL(unsigned long, AirusAParmBlock *) {
    /*
         2bdf4:	e1a0c00d 	mov	ip, sp
         2bdf8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         2bdfc:	e24cb004 	sub	fp, ip, #4	; 0x4
         2be00:	e1a04001 	mov	r4, r1
         2be04:	e3300002 	teq	r0, #2	; 0x2
         2be08:	0a000005 	beq	2be24 <AirusAL(unsigned long, AirusAParmBlock *)+0x30>
         2be0c:	e3300008 	teq	r0, #8	; 0x8
         2be10:	0a000006 	beq	2be30 <AirusAL(unsigned long, AirusAParmBlock *)+0x3c>
         2be14:	e3300009 	teq	r0, #9	; 0x9
         2be18:	01a00004 	moveq	r0, r4
         2be1c:	0b675ce7 	bleq	1a031c0 <$AL_NextSet9(AirusAParmBlock *)>
         2be20:	ea000004 	b	2be38 <AirusAL(unsigned long, AirusAParmBlock *)+0x44>
         2be24:	e1a00004 	mov	r0, r4
         2be28:	eb67508a 	bl	1a00058 <$AL_Verify(AirusAParmBlock *)>
         2be2c:	ea000001 	b	2be38 <AirusAL(unsigned long, AirusAParmBlock *)+0x44>
         2be30:	e1a00004 	mov	r0, r4
         2be34:	eb675085 	bl	1a00050 <$AL_NextSet(AirusAParmBlock *)>
         2be38:	e5b4002c 	ldr	r0, [r4, #44]!
         2be3c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: AL_GetAttribute(unsigned long)
 * Address: 0002be40
 */
AL_GetAttribute(unsigned long) {
    /*
         2be40:	e92d4000 	stmdb	sp!, {lr}
         2be44:	e3a02000 	mov	r2, #0	; 0x0
         2be48:	e59f10b0 	ldr	r1, [pc, #b0]	; 2bf00 <AL_GetAttribute(unsigned long)+0xc0>
         2be4c:	e5913000 	ldr	r3, [r1]
         2be50:	e5a32024 	str	r2, [r3, #36]!
         2be54:	e5912000 	ldr	r2, [r1]
         2be58:	e1a03002 	mov	r3, r2
         2be5c:	e592c034 	ldr	ip, [r2, #52]
         2be60:	e08ce000 	add	lr, ip, r0
         2be64:	e592200c 	ldr	r2, [r2, #12]
         2be68:	e0820000 	add	r0, r2, r0
         2be6c:	e5d00002 	ldrb	r0, [r0, #2]
         2be70:	e3100002 	tst	r0, #2	; 0x2
         2be74:	03a00005 	moveq	r0, #5	; 0x5
         2be78:	13a00003 	movne	r0, #3	; 0x3
         2be7c:	e08e0000 	add	r0, lr, r0
         2be80:	e040000c 	sub	r0, r0, ip
         2be84:	e33c0000 	teq	ip, #0	; 0x0
         2be88:	08bd8000 	ldmeqia	sp!, {pc}
         2be8c:	e33c0001 	teq	ip, #1	; 0x1
         2be90:	07d20000 	ldreqb	r0, [r2, r0]
         2be94:	05a30024 	streq	r0, [r3, #36]!
         2be98:	08bd8000 	ldmeqia	sp!, {pc}
         2be9c:	e33c0002 	teq	ip, #2	; 0x2
         2bea0:	0a000017 	beq	2bf04 <AL_GetAttribute(unsigned long)+0xc4>
         2bea4:	e33c0004 	teq	ip, #4	; 0x4
         2bea8:	18bd8000 	ldmneia	sp!, {pc}
         2beac:	e7d22000 	ldrb	r2, [r2, r0]
         2beb0:	e5a32024 	str	r2, [r3, #36]!
         2beb4:	e1a03002 	mov	r3, r2
         2beb8:	e5912000 	ldr	r2, [r1]
         2bebc:	e592c00c 	ldr	ip, [r2, #12]
         2bec0:	e08cc000 	add	ip, ip, r0
         2bec4:	e5dcc001 	ldrb	ip, [ip, #1]
         2bec8:	e18c3403 	orr	r3, ip, r3, lsl #8
         2becc:	e5a23024 	str	r3, [r2, #36]!
         2bed0:	e5912000 	ldr	r2, [r1]
         2bed4:	e592c00c 	ldr	ip, [r2, #12]
         2bed8:	e08cc000 	add	ip, ip, r0
         2bedc:	e5dcc002 	ldrb	ip, [ip, #2]
         2bee0:	e18c3403 	orr	r3, ip, r3, lsl #8
         2bee4:	e5a23024 	str	r3, [r2, #36]!
         2bee8:	e5911000 	ldr	r1, [r1]
         2beec:	e591200c 	ldr	r2, [r1, #12]
         2bef0:	e0820000 	add	r0, r2, r0
         2bef4:	e5d00003 	ldrb	r0, [r0, #3]
         2bef8:	e1800403 	orr	r0, r0, r3, lsl #8
         2befc:	ea000007 	b	2bf20 <AL_GetAttribute(unsigned long)+0xe0>
         2bf00:	0c100854 	ldceq	8, cr0, [r0], -#336
         2bf04:	e7d22000 	ldrb	r2, [r2, r0]
         2bf08:	e5a32024 	str	r2, [r3, #36]!
         2bf0c:	e5911000 	ldr	r1, [r1]
         2bf10:	e591300c 	ldr	r3, [r1, #12]
         2bf14:	e0830000 	add	r0, r3, r0
         2bf18:	e5d00001 	ldrb	r0, [r0, #1]
         2bf1c:	e1800402 	orr	r0, r0, r2, lsl #8
         2bf20:	e5a10024 	str	r0, [r1, #36]!
         2bf24:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: AL_GetAttribute2(unsigned long)
 * Address: 0002bf28
 */
AL_GetAttribute2(unsigned long) {
    /*
         2bf28:	e1a0c00d 	mov	ip, sp
         2bf2c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         2bf30:	e24cb004 	sub	fp, ip, #4	; 0x4
         2bf34:	e59f4038 	ldr	r4, [pc, #38]	; 2bf74 <AL_GetAttribute2(unsigned long)+0x4c>
         2bf38:	e5941000 	ldr	r1, [r4]
         2bf3c:	e591100c 	ldr	r1, [r1, #12]
         2bf40:	e0810000 	add	r0, r1, r0
         2bf44:	e5d02001 	ldrb	r2, [r0, #1]
         2bf48:	e5d00000 	ldrb	r0, [r0]
         2bf4c:	e1820400 	orr	r0, r2, r0, lsl #8
         2bf50:	e1a00800 	mov	r0, r0, lsl #16
         2bf54:	e0810820 	add	r0, r1, r0, lsr #16
         2bf58:	e1a05000 	mov	r5, r0
         2bf5c:	eb675042 	bl	1a0006c <$Astrlen(char *)>
         2bf60:	e0800005 	add	r0, r0, r5
         2bf64:	e2800001 	add	r0, r0, #1	; 0x1
         2bf68:	e5941000 	ldr	r1, [r4]
         2bf6c:	e5a10048 	str	r0, [r1, #72]!
         2bf70:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         2bf74:	0c100854 	ldceq	8, cr0, [r0], -#336
    */
}

/**
 * Symbol: AL_Verify(AirusAParmBlock *)
 * Address: 0002bf78
 */
AL_Verify(AirusAParmBlock *) {
    /*
         2bf78:	e1a0c00d 	mov	ip, sp
         2bf7c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         2bf80:	e24cb004 	sub	fp, ip, #4	; 0x4
         2bf84:	e3a06000 	mov	r6, #0	; 0x0
         2bf88:	eb00012c 	bl	2c440 <AL_NextSet9(AirusAParmBlock *)+0x1d8>
         2bf8c:	e59f4058 	ldr	r4, [pc, #58]	; 2bfec <AL_Verify(AirusAParmBlock *)+0x74>
         2bf90:	e5940000 	ldr	r0, [r4]
         2bf94:	e5905028 	ldr	r5, [r0, #40]
         2bf98:	e3350000 	teq	r5, #0	; 0x0
         2bf9c:	03a05002 	moveq	r5, #2	; 0x2
         2bfa0:	e3e01000 	mvn	r1, #0	; 0x0
         2bfa4:	e5908020 	ldr	r8, [r0, #32]
         2bfa8:	e5a01030 	str	r1, [r0, #48]!
         2bfac:	e5940000 	ldr	r0, [r4]
         2bfb0:	e3a07003 	mov	r7, #3	; 0x3
         2bfb4:	e5901028 	ldr	r1, [r0, #40]
         2bfb8:	e3310000 	teq	r1, #0	; 0x0
         2bfbc:	1a00000b 	bne	2bff0 <AL_Verify(AirusAParmBlock *)+0x78>
         2bfc0:	e3a01000 	mov	r1, #0	; 0x0
         2bfc4:	e5a01020 	str	r1, [r0, #32]!
         2bfc8:	e5940000 	ldr	r0, [r4]
         2bfcc:	e1a01000 	mov	r1, r0
         2bfd0:	e280200c 	add	r2, r0, #12	; 0xc
         2bfd4:	e8920005 	ldmia	r2, {r0, r2}
         2bfd8:	e0420000 	sub	r0, r2, r0
         2bfdc:	e3300002 	teq	r0, #2	; 0x2
         2bfe0:	1a00000b 	bne	2c014 <AL_Verify(AirusAParmBlock *)+0x9c>
         2bfe4:	e1a00007 	mov	r0, r7
         2bfe8:	ea00005e 	b	2c168 <AL_Verify(AirusAParmBlock *)+0x1f0>
         2bfec:	0c100854 	ldceq	8, cr0, [r0], -#336
         2bff0:	e5941000 	ldr	r1, [r4]
         2bff4:	e591000c 	ldr	r0, [r1, #12]
         2bff8:	e0800005 	add	r0, r0, r5
         2bffc:	e5d00002 	ldrb	r0, [r0, #2]
         2c000:	e3100002 	tst	r0, #2	; 0x2
         2c004:	1afffff6 	bne	2bfe4 <AL_Verify(AirusAParmBlock *)+0x6c>
         2c008:	e1a00005 	mov	r0, r5
         2c00c:	eb000102 	bl	2c41c <AL_NextSet9(AirusAParmBlock *)+0x1b4>
         2c010:	e1a05000 	mov	r5, r0
         2c014:	e5940000 	ldr	r0, [r4]
         2c018:	e590101c 	ldr	r1, [r0, #28]
         2c01c:	e5900020 	ldr	r0, [r0, #32]
         2c020:	e7d19000 	ldrb	r9, [r1, r0]
         2c024:	e1a00005 	mov	r0, r5
         2c028:	eb0000f2 	bl	2c3f8 <AL_NextSet9(AirusAParmBlock *)+0x190>
         2c02c:	e5943000 	ldr	r3, [r4]
         2c030:	e593200c 	ldr	r2, [r3, #12]
         2c034:	e7f01002 	ldrb	r1, [r0, r2]!
         2c038:	e3310000 	teq	r1, #0	; 0x0
         2c03c:	0a000004 	beq	2c054 <AL_Verify(AirusAParmBlock *)+0xdc>
         2c040:	e1390001 	teq	r9, r1
         2c044:	0a00000e 	beq	2c084 <AL_Verify(AirusAParmBlock *)+0x10c>
         2c048:	e5f01001 	ldrb	r1, [r0, #1]!
         2c04c:	e3310000 	teq	r1, #0	; 0x0
         2c050:	1afffffa 	bne	2c040 <AL_Verify(AirusAParmBlock *)+0xc8>
         2c054:	e0820005 	add	r0, r2, r5
         2c058:	e5d00002 	ldrb	r0, [r0, #2]
         2c05c:	e3100004 	tst	r0, #4	; 0x4
         2c060:	11a00007 	movne	r0, r7
         2c064:	1a00003e 	bne	2c164 <AL_Verify(AirusAParmBlock *)+0x1ec>
         2c068:	e5b31034 	ldr	r1, [r3, #52]!
         2c06c:	e0811005 	add	r1, r1, r5
         2c070:	e3100002 	tst	r0, #2	; 0x2
         2c074:	03a00005 	moveq	r0, #5	; 0x5
         2c078:	13a00003 	movne	r0, #3	; 0x3
         2c07c:	e0815000 	add	r5, r1, r0
         2c080:	eaffffe7 	b	2c024 <AL_Verify(AirusAParmBlock *)+0xac>
         2c084:	e5940000 	ldr	r0, [r4]
         2c088:	e5a05028 	str	r5, [r0, #40]!
         2c08c:	e1a00005 	mov	r0, r5
         2c090:	eb674fed 	bl	1a0004c <$AL_GetAttribute(unsigned long)>
         2c094:	e1a00005 	mov	r0, r5
         2c098:	eb674fea 	bl	1a00048 <$AL_GetAttribute2(unsigned long)>
         2c09c:	e5940000 	ldr	r0, [r4]
         2c0a0:	e5902020 	ldr	r2, [r0, #32]
         2c0a4:	e2821001 	add	r1, r2, #1	; 0x1
         2c0a8:	e1520008 	cmp	r2, r8
         2c0ac:	e5a01020 	str	r1, [r0, #32]!
         2c0b0:	3affffce 	bcc	2bff0 <AL_Verify(AirusAParmBlock *)+0x78>
         2c0b4:	e5941000 	ldr	r1, [r4]
         2c0b8:	e591000c 	ldr	r0, [r1, #12]
         2c0bc:	e0800005 	add	r0, r0, r5
         2c0c0:	e5d00002 	ldrb	r0, [r0, #2]
         2c0c4:	e2107001 	ands	r7, r0, #1	; 0x1
         2c0c8:	13a07001 	movne	r7, #1	; 0x1
         2c0cc:	e3100002 	tst	r0, #2	; 0x2
         2c0d0:	13a00002 	movne	r0, #2	; 0x2
         2c0d4:	1a000023 	bne	2c168 <AL_Verify(AirusAParmBlock *)+0x1f0>
         2c0d8:	e1a00005 	mov	r0, r5
         2c0dc:	eb0000ce 	bl	2c41c <AL_NextSet9(AirusAParmBlock *)+0x1b4>
         2c0e0:	e1a05000 	mov	r5, r0
         2c0e4:	e1a00005 	mov	r0, r5
         2c0e8:	eb0000c2 	bl	2c3f8 <AL_NextSet9(AirusAParmBlock *)+0x190>
         2c0ec:	e5941000 	ldr	r1, [r4]
         2c0f0:	e591100c 	ldr	r1, [r1, #12]
         2c0f4:	e0800001 	add	r0, r0, r1
         2c0f8:	e5d00001 	ldrb	r0, [r0, #1]
         2c0fc:	e3300000 	teq	r0, #0	; 0x0
         2c100:	1a000016 	bne	2c160 <AL_Verify(AirusAParmBlock *)+0x1e8>
         2c104:	e1a00005 	mov	r0, r5
         2c108:	eb0000ba 	bl	2c3f8 <AL_NextSet9(AirusAParmBlock *)+0x190>
         2c10c:	e5942000 	ldr	r2, [r4]
         2c110:	e592100c 	ldr	r1, [r2, #12]
         2c114:	e7d10000 	ldrb	r0, [r1, r0]
         2c118:	e3360000 	teq	r6, #0	; 0x0
         2c11c:	01a06000 	moveq	r6, r0
         2c120:	0a000001 	beq	2c12c <AL_Verify(AirusAParmBlock *)+0x1b4>
         2c124:	e1300006 	teq	r0, r6
         2c128:	1a00000c 	bne	2c160 <AL_Verify(AirusAParmBlock *)+0x1e8>
         2c12c:	e0810005 	add	r0, r1, r5
         2c130:	e5d00002 	ldrb	r0, [r0, #2]
         2c134:	e3100004 	tst	r0, #4	; 0x4
         2c138:	1a000006 	bne	2c158 <AL_Verify(AirusAParmBlock *)+0x1e0>
         2c13c:	e5b21034 	ldr	r1, [r2, #52]!
         2c140:	e0811005 	add	r1, r1, r5
         2c144:	e3100002 	tst	r0, #2	; 0x2
         2c148:	03a00005 	moveq	r0, #5	; 0x5
         2c14c:	13a00003 	movne	r0, #3	; 0x3
         2c150:	e0815000 	add	r5, r1, r0
         2c154:	eaffffe2 	b	2c0e4 <AL_Verify(AirusAParmBlock *)+0x16c>
         2c158:	e5940000 	ldr	r0, [r4]
         2c15c:	e5a06030 	str	r6, [r0, #48]!
         2c160:	e1a00007 	mov	r0, r7
         2c164:	e5941000 	ldr	r1, [r4]
         2c168:	e5a1002c 	str	r0, [r1, #44]!
         2c16c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: AL_FilterString(char *)
 * Address: 0002c170
 */
AL_FilterString(char *) {
    /*
         2c170:	e1a0c00d 	mov	ip, sp
         2c174:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         2c178:	e24cb004 	sub	fp, ip, #4	; 0x4
         2c17c:	e1a04000 	mov	r4, r0
         2c180:	e24ddc01 	sub	sp, sp, #256	; 0x100
         2c184:	e3a05000 	mov	r5, #0	; 0x0
         2c188:	e3a06000 	mov	r6, #0	; 0x0
         2c18c:	eb674fb6 	bl	1a0006c <$Astrlen(char *)>
         2c190:	e1a07000 	mov	r7, r0
         2c194:	e3a08000 	mov	r8, #0	; 0x0
         2c198:	e5cd8000 	strb	r8, [sp]
         2c19c:	e3500000 	cmp	r0, #0	; 0x0
         2c1a0:	da00000c 	ble	2c1d8 <AL_FilterString(char *)+0x68>
         2c1a4:	e7d41005 	ldrb	r1, [r4, r5]
         2c1a8:	e1a0000d 	mov	r0, sp
         2c1ac:	eb674fac 	bl	1a00064 <$Astrchr(char *, char)>
         2c1b0:	e3300000 	teq	r0, #0	; 0x0
         2c1b4:	1a000004 	bne	2c1cc <AL_FilterString(char *)+0x5c>
         2c1b8:	e7d41005 	ldrb	r1, [r4, r5]
         2c1bc:	e1a00006 	mov	r0, r6
         2c1c0:	e2866001 	add	r6, r6, #1	; 0x1
         2c1c4:	e7cd1000 	strb	r1, [sp, r0]
         2c1c8:	e7cd8006 	strb	r8, [sp, r6]
         2c1cc:	e2855001 	add	r5, r5, #1	; 0x1
         2c1d0:	e1550007 	cmp	r5, r7
         2c1d4:	bafffff2 	blt	2c1a4 <AL_FilterString(char *)+0x34>
         2c1d8:	e1a0100d 	mov	r1, sp
         2c1dc:	e1a00004 	mov	r0, r4
         2c1e0:	eb674fa0 	bl	1a00068 <$Astrcpy__FPcT1>
         2c1e4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: AL_NextSetCB__FUlN31
 * Address: 0002c1e8
 */
void globals::AL_NextSetCB() {
    /*
         2c1e8:	e5902000 	ldr	r2, [r0]
         2c1ec:	e5d13000 	ldrb	r3, [r1]
         2c1f0:	e3330000 	teq	r3, #0	; 0x0
         2c1f4:	0a000004 	beq	2c20c <AL_NextSetCB__FUlN31+0x24>
         2c1f8:	e4d13001 	ldrb	r3, [r1], #1
         2c1fc:	e4c23001 	strb	r3, [r2], #1
         2c200:	e5d13000 	ldrb	r3, [r1]
         2c204:	e3330000 	teq	r3, #0	; 0x0
         2c208:	1afffffa 	bne	2c1f8 <AL_NextSetCB__FUlN31+0x10>
         2c20c:	e5802000 	str	r2, [r0]
         2c210:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: AL_NextSet(AirusAParmBlock *)
 * Address: 0002c214
 */
AL_NextSet(AirusAParmBlock *) {
    /*
         2c214:	e1a0c00d 	mov	ip, sp
         2c218:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         2c21c:	e24cb004 	sub	fp, ip, #4	; 0x4
         2c220:	e1a04000 	mov	r4, r0
         2c224:	e24dd004 	sub	sp, sp, #4	; 0x4
         2c228:	e590001c 	ldr	r0, [r0, #28]
         2c22c:	e58d0000 	str	r0, [sp]
         2c230:	e584d050 	str	sp, [r4, #80]
         2c234:	e59f0028 	ldr	r0, [pc, #28]	; 2c264 <AL_NextSet(AirusAParmBlock *)+0x50>
         2c238:	e5840054 	str	r0, [r4, #84]
         2c23c:	e1a00004 	mov	r0, r4
         2c240:	eb675bde 	bl	1a031c0 <$AL_NextSet9(AirusAParmBlock *)>
         2c244:	e1a05000 	mov	r5, r0
         2c248:	e3a01000 	mov	r1, #0	; 0x0
         2c24c:	e59d0000 	ldr	r0, [sp]
         2c250:	e5c01000 	strb	r1, [r0]
         2c254:	e5b4001c 	ldr	r0, [r4, #28]!
         2c258:	eb674f79 	bl	1a00044 <$AL_FilterString(char *)>
         2c25c:	e1a00005 	mov	r0, r5
         2c260:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         2c264:	01a031c4 	moveq	r3, r4, asr #3
    */
}

/**
 * Symbol: AL_NextSet9(AirusAParmBlock *)
 * Address: 0002c268
 */
AL_NextSet9(AirusAParmBlock *) {
    /*
         2c268:	e1a0c00d 	mov	ip, sp
         2c26c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         2c270:	e24cb004 	sub	fp, ip, #4	; 0x4
         2c274:	eb000071 	bl	2c440 <AL_NextSet9(AirusAParmBlock *)+0x1d8>
         2c278:	e59f604c 	ldr	r6, [pc, #4c]	; 2c2cc <AL_NextSet9(AirusAParmBlock *)+0x64>
         2c27c:	e5960000 	ldr	r0, [r6]
         2c280:	e5905028 	ldr	r5, [r0, #40]
         2c284:	e3350000 	teq	r5, #0	; 0x0
         2c288:	03a05002 	moveq	r5, #2	; 0x2
         2c28c:	e3a07000 	mov	r7, #0	; 0x0
         2c290:	e5a0702c 	str	r7, [r0, #44]!
         2c294:	e5960000 	ldr	r0, [r6]
         2c298:	e1a01000 	mov	r1, r0
         2c29c:	e2800008 	add	r0, r0, #8	; 0x8
         2c2a0:	e9b01004 	ldmib	r0!, {r2, ip}
         2c2a4:	e2823002 	add	r3, r2, #2	; 0x2
         2c2a8:	e3a00001 	mov	r0, #1	; 0x1
         2c2ac:	e13c0003 	teq	ip, r3
         2c2b0:	0a000003 	beq	2c2c4 <AL_NextSet9(AirusAParmBlock *)+0x5c>
         2c2b4:	e0822005 	add	r2, r2, r5
         2c2b8:	e5d22002 	ldrb	r2, [r2, #2]
         2c2bc:	e3120002 	tst	r2, #2	; 0x2
         2c2c0:	0a000002 	beq	2c2d0 <AL_NextSet9(AirusAParmBlock *)+0x68>
         2c2c4:	e5a1002c 	str	r0, [r1, #44]!
         2c2c8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         2c2cc:	0c100854 	ldceq	8, cr0, [r0], -#336
         2c2d0:	e5b10028 	ldr	r0, [r1, #40]!
         2c2d4:	e3300000 	teq	r0, #0	; 0x0
         2c2d8:	0a000002 	beq	2c2e8 <AL_NextSet9(AirusAParmBlock *)+0x80>
         2c2dc:	e1a00005 	mov	r0, r5
         2c2e0:	eb00004d 	bl	2c41c <AL_NextSet9(AirusAParmBlock *)+0x1b4>
         2c2e4:	e1a05000 	mov	r5, r0
         2c2e8:	e5960000 	ldr	r0, [r6]
         2c2ec:	e590000c 	ldr	r0, [r0, #12]
         2c2f0:	e0800005 	add	r0, r0, r5
         2c2f4:	e5d00002 	ldrb	r0, [r0, #2]
         2c2f8:	e3100001 	tst	r0, #1	; 0x1
         2c2fc:	03a04000 	moveq	r4, #0	; 0x0
         2c300:	0a000003 	beq	2c314 <AL_NextSet9(AirusAParmBlock *)+0xac>
         2c304:	e1a00005 	mov	r0, r5
         2c308:	eb674f4f 	bl	1a0004c <$AL_GetAttribute(unsigned long)>
         2c30c:	e5960000 	ldr	r0, [r6]
         2c310:	e5b04024 	ldr	r4, [r0, #36]!
         2c314:	e1a00005 	mov	r0, r5
         2c318:	eb000036 	bl	2c3f8 <AL_NextSet9(AirusAParmBlock *)+0x190>
         2c31c:	e596c000 	ldr	ip, [r6]
         2c320:	e59c200c 	ldr	r2, [ip, #12]
         2c324:	e0801002 	add	r1, r0, r2
         2c328:	e0820005 	add	r0, r2, r5
         2c32c:	e5d00002 	ldrb	r0, [r0, #2]
         2c330:	e1852f00 	orr	r2, r5, r0, lsl #30
         2c334:	e1a03004 	mov	r3, r4
         2c338:	e59c0050 	ldr	r0, [ip, #80]
         2c33c:	e1a0e00f 	mov	lr, pc
         2c340:	e59cf054 	ldr	pc, [ip, #84]
         2c344:	e5960000 	ldr	r0, [r6]
         2c348:	e590000c 	ldr	r0, [r0, #12]
         2c34c:	e0800005 	add	r0, r0, r5
         2c350:	e5d00002 	ldrb	r0, [r0, #2]
         2c354:	e3100004 	tst	r0, #4	; 0x4
         2c358:	1a000024 	bne	2c3f0 <AL_NextSet9(AirusAParmBlock *)+0x188>
         2c35c:	e5960000 	ldr	r0, [r6]
         2c360:	e5901034 	ldr	r1, [r0, #52]
         2c364:	e0811005 	add	r1, r1, r5
         2c368:	e590000c 	ldr	r0, [r0, #12]
         2c36c:	e0802005 	add	r2, r0, r5
         2c370:	e5d22002 	ldrb	r2, [r2, #2]
         2c374:	e3120002 	tst	r2, #2	; 0x2
         2c378:	03a02005 	moveq	r2, #5	; 0x5
         2c37c:	13a02003 	movne	r2, #3	; 0x3
         2c380:	e0815002 	add	r5, r1, r2
         2c384:	e0800005 	add	r0, r0, r5
         2c388:	e5d00002 	ldrb	r0, [r0, #2]
         2c38c:	e3100001 	tst	r0, #1	; 0x1
         2c390:	03a04000 	moveq	r4, #0	; 0x0
         2c394:	0a000003 	beq	2c3a8 <AL_NextSet9(AirusAParmBlock *)+0x140>
         2c398:	e1a00005 	mov	r0, r5
         2c39c:	eb674f2a 	bl	1a0004c <$AL_GetAttribute(unsigned long)>
         2c3a0:	e5960000 	ldr	r0, [r6]
         2c3a4:	e5b04024 	ldr	r4, [r0, #36]!
         2c3a8:	e1a00005 	mov	r0, r5
         2c3ac:	eb000011 	bl	2c3f8 <AL_NextSet9(AirusAParmBlock *)+0x190>
         2c3b0:	e596c000 	ldr	ip, [r6]
         2c3b4:	e59c200c 	ldr	r2, [ip, #12]
         2c3b8:	e0801002 	add	r1, r0, r2
         2c3bc:	e0820005 	add	r0, r2, r5
         2c3c0:	e5d00002 	ldrb	r0, [r0, #2]
         2c3c4:	e1852f00 	orr	r2, r5, r0, lsl #30
         2c3c8:	e1a03004 	mov	r3, r4
         2c3cc:	e59c0050 	ldr	r0, [ip, #80]
         2c3d0:	e1a0e00f 	mov	lr, pc
         2c3d4:	e59cf054 	ldr	pc, [ip, #84]
         2c3d8:	e5960000 	ldr	r0, [r6]
         2c3dc:	e590000c 	ldr	r0, [r0, #12]
         2c3e0:	e0800005 	add	r0, r0, r5
         2c3e4:	e5d00002 	ldrb	r0, [r0, #2]
         2c3e8:	e3100004 	tst	r0, #4	; 0x4
         2c3ec:	0affffda 	beq	2c35c <AL_NextSet9(AirusAParmBlock *)+0xf4>
         2c3f0:	e1a00007 	mov	r0, r7
         2c3f4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         2c3f8:	e59f1018 	ldr	r1, [pc, #18]	; 2c418 <AL_NextSet9(AirusAParmBlock *)+0x1b0>
         2c3fc:	e5911000 	ldr	r1, [r1]
         2c400:	e5b1200c 	ldr	r2, [r1, #12]!
         2c404:	e7d21000 	ldrb	r1, [r2, r0]
         2c408:	e0820000 	add	r0, r2, r0
         2c40c:	e5d00001 	ldrb	r0, [r0, #1]
         2c410:	e1800401 	orr	r0, r0, r1, lsl #8
         2c414:	e1a0f00e 	mov	pc, lr
         2c418:	0c100854 	ldceq	8, cr0, [r0], -#336
         2c41c:	e59f1018 	ldr	r1, [pc, #18]	; 2c43c <AL_NextSet9(AirusAParmBlock *)+0x1d4>
         2c420:	e5911000 	ldr	r1, [r1]
         2c424:	e591100c 	ldr	r1, [r1, #12]
         2c428:	e0811000 	add	r1, r1, r0
         2c42c:	e5d10003 	ldrb	r0, [r1, #3]
         2c430:	e5d11004 	ldrb	r1, [r1, #4]
         2c434:	e1810400 	orr	r0, r1, r0, lsl #8
         2c438:	e1a0f00e 	mov	pc, lr
         2c43c:	0c100854 	ldceq	8, cr0, [r0], -#336
         2c440:	e59f3040 	ldr	r3, [pc, #40]	; 2c488 <AL_NextSet9(AirusAParmBlock *)+0x220>
         2c444:	e5830000 	str	r0, [r3]
         2c448:	e5902008 	ldr	r2, [r0, #8]
         2c44c:	e5922000 	ldr	r2, [r2]
         2c450:	e590100c 	ldr	r1, [r0, #12]
         2c454:	e1520001 	cmp	r2, r1
         2c458:	90411002 	subls	r1, r1, r2
         2c45c:	95902010 	ldrls	r2, [r0, #16]
         2c460:	90421001 	subls	r1, r2, r1
         2c464:	80422001 	subhi	r2, r2, r1
         2c468:	85901010 	ldrhi	r1, [r0, #16]
         2c46c:	80821001 	addhi	r1, r2, r1
         2c470:	e5a01010 	str	r1, [r0, #16]!
         2c474:	e5930000 	ldr	r0, [r3]
         2c478:	e5901008 	ldr	r1, [r0, #8]
         2c47c:	e5911000 	ldr	r1, [r1]
         2c480:	e5a0100c 	str	r1, [r0, #12]!
         2c484:	e1a0f00e 	mov	pc, lr
         2c488:	0c100854 	ldceq	8, cr0, [r0], -#336
    */
}

/**
 * Symbol: AddWord(AirusAParmBlock **, unsigned long, unsigned char *, unsigned char *)
 * Address: 0002c48c
 */
AddWord(AirusAParmBlock **, unsigned long, unsigned char *, unsigned char *) {
    /*
         2c48c:	e1a0c00d 	mov	ip, sp
         2c490:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         2c494:	e24cb004 	sub	fp, ip, #4	; 0x4
         2c498:	e1a05002 	mov	r5, r2
         2c49c:	e1a04003 	mov	r4, r3
         2c4a0:	eb6752fa 	bl	1a01090 <$PositionToHandle>
         2c4a4:	e1a07000 	mov	r7, r0
         2c4a8:	e59f6044 	ldr	r6, [pc, #44]	; 2c4f4 <AddWord(AirusAParmBlock **, unsigned long, unsigned char *, unsigned char *)+0x68>
         2c4ac:	e5960000 	ldr	r0, [r6]
         2c4b0:	e3300000 	teq	r0, #0	; 0x0
         2c4b4:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
         2c4b8:	e5970000 	ldr	r0, [r7]
         2c4bc:	e5a0501c 	str	r5, [r0, #28]!
         2c4c0:	e5970000 	ldr	r0, [r7]
         2c4c4:	e5901008 	ldr	r1, [r0, #8]
         2c4c8:	e5911000 	ldr	r1, [r1]
         2c4cc:	e5d11001 	ldrb	r1, [r1, #1]
         2c4d0:	e2012007 	and	r2, r1, #7	; 0x7
         2c4d4:	e3a01005 	mov	r1, #5	; 0x5
         2c4d8:	e3320005 	teq	r2, #5	; 0x5
         2c4dc:	13320002 	teqne	r2, #2	; 0x2
         2c4e0:	1a000004 	bne	2c4f8 <AddWord(AirusAParmBlock **, unsigned long, unsigned char *, unsigned char *)+0x6c>
         2c4e4:	e5952000 	ldr	r2, [r5]
         2c4e8:	e1b02822 	movs	r2, r2, lsr #16
         2c4ec:	1a000006 	bne	2c50c <AddWord(AirusAParmBlock **, unsigned long, unsigned char *, unsigned char *)+0x80>
         2c4f0:	ea000003 	b	2c504 <AddWord(AirusAParmBlock **, unsigned long, unsigned char *, unsigned char *)+0x78>
         2c4f4:	0c100810 	ldceq	8, cr0, [r0], -#64
         2c4f8:	e5d52000 	ldrb	r2, [r5]
         2c4fc:	e3320000 	teq	r2, #0	; 0x0
         2c500:	1a000001 	bne	2c50c <AddWord(AirusAParmBlock **, unsigned long, unsigned char *, unsigned char *)+0x80>
         2c504:	e5861000 	str	r1, [r6]
         2c508:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         2c50c:	e5901034 	ldr	r1, [r0, #52]
         2c510:	e3310001 	teq	r1, #1	; 0x1
         2c514:	020410ff 	andeq	r1, r4, #255	; 0xff
         2c518:	05a01024 	streq	r1, [r0, #36]!
         2c51c:	0a000002 	beq	2c52c <AddWord(AirusAParmBlock **, unsigned long, unsigned char *, unsigned char *)+0xa0>
         2c520:	e3310002 	teq	r1, #2	; 0x2
         2c524:	13310004 	teqne	r1, #4	; 0x4
         2c528:	05a04024 	streq	r4, [r0, #36]!
         2c52c:	e3a04000 	mov	r4, #0	; 0x0
         2c530:	e5970000 	ldr	r0, [r7]
         2c534:	e5a04048 	str	r4, [r0, #72]!
         2c538:	e1a00007 	mov	r0, r7
         2c53c:	e3a01003 	mov	r1, #3	; 0x3
         2c540:	eb674eca 	bl	1a00070 <$CallAirusA>
         2c544:	e5970000 	ldr	r0, [r7]
         2c548:	e590002c 	ldr	r0, [r0, #44]
         2c54c:	e3300000 	teq	r0, #0	; 0x0
         2c550:	05864000 	streq	r4, [r6]
         2c554:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         2c558:	e3300001 	teq	r0, #1	; 0x1
         2c55c:	03a00004 	moveq	r0, #4	; 0x4
         2c560:	13e00001 	mvnne	r0, #1	; 0x1
         2c564:	e5860000 	str	r0, [r6]
         2c568:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: AttributeLength
 * Address: 0002d37c
 */
void globals::AttributeLength() {
    /*
         2d37c:	e3a02000 	mov	r2, #0	; 0x0
         2d380:	e59f102c 	ldr	r1, [pc, #2c]	; 2d3b4 <AttributeLength+0x38>
         2d384:	e5812000 	str	r2, [r1]
         2d388:	e5901000 	ldr	r1, [r0]
         2d38c:	e5910034 	ldr	r0, [r1, #52]
         2d390:	e3300000 	teq	r0, #0	; 0x0
         2d394:	11a0f00e 	movne	pc, lr
         2d398:	e5911008 	ldr	r1, [r1, #8]
         2d39c:	e5911000 	ldr	r1, [r1]
         2d3a0:	e5d11001 	ldrb	r1, [r1, #1]
         2d3a4:	e2011007 	and	r1, r1, #7	; 0x7
         2d3a8:	e3310003 	teq	r1, #3	; 0x3
         2d3ac:	03a00001 	moveq	r0, #1	; 0x1
         2d3b0:	e1a0f00e 	mov	pc, lr
         2d3b4:	0c100810 	ldceq	8, cr0, [r0], -#64
    */
}

/**
 * Symbol: A8_PrefixCompletions(DictWalkBlock *)
 * Address: 0002d73c
 */
A8_PrefixCompletions(DictWalkBlock *) {
    /*
         2d73c:	e1a0c00d 	mov	ip, sp
         2d740:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         2d744:	e24cb004 	sub	fp, ip, #4	; 0x4
         2d748:	e1a04000 	mov	r4, r0
         2d74c:	e8900060 	ldmia	r0, {r5, r6}
         2d750:	e2807010 	add	r7, r0, #16	; 0x10
         2d754:	e5950000 	ldr	r0, [r5]
         2d758:	e5a0701c 	str	r7, [r0, #28]!
         2d75c:	e1a00005 	mov	r0, r5
         2d760:	e3a01002 	mov	r1, #2	; 0x2
         2d764:	eb674a41 	bl	1a00070 <$CallAirusA>
         2d768:	e5950000 	ldr	r0, [r5]
         2d76c:	e3a08000 	mov	r8, #0	; 0x0
         2d770:	e590102c 	ldr	r1, [r0, #44]
         2d774:	e3310000 	teq	r1, #0	; 0x0
         2d778:	0a00001e 	beq	2d7f8 <A8_PrefixCompletions(DictWalkBlock *)+0xbc>
         2d77c:	e3310001 	teq	r1, #1	; 0x1
         2d780:	0a000022 	beq	2d810 <A8_PrefixCompletions(DictWalkBlock *)+0xd4>
         2d784:	e3310002 	teq	r1, #2	; 0x2
         2d788:	1a00003e 	bne	2d888 <A8_PrefixCompletions(DictWalkBlock *)+0x14c>
         2d78c:	e2861001 	add	r1, r6, #1	; 0x1
         2d790:	e5841004 	str	r1, [r4, #4]
         2d794:	e5950000 	ldr	r0, [r5]
         2d798:	e5902048 	ldr	r2, [r0, #72]
         2d79c:	e3320000 	teq	r2, #0	; 0x0
         2d7a0:	e590e024 	ldr	lr, [r0, #36]
         2d7a4:	03a02000 	moveq	r2, #0	; 0x0
         2d7a8:	15d22000 	ldrneb	r2, [r2]
         2d7ac:	e20220ff 	and	r2, r2, #255	; 0xff
         2d7b0:	e5900020 	ldr	r0, [r0, #32]
         2d7b4:	e0800004 	add	r0, r0, r4
         2d7b8:	e5c08010 	strb	r8, [r0, #16]
         2d7bc:	e594c008 	ldr	ip, [r4, #8]
         2d7c0:	e33c0000 	teq	ip, #0	; 0x0
         2d7c4:	0a00002f 	beq	2d888 <A8_PrefixCompletions(DictWalkBlock *)+0x14c>
         2d7c8:	e5b4300c 	ldr	r3, [r4, #12]!
         2d7cc:	e92d0008 	stmdb	sp!, {r3}
         2d7d0:	e1a00007 	mov	r0, r7
         2d7d4:	e1a03001 	mov	r3, r1
         2d7d8:	e1a0100e 	mov	r1, lr
         2d7dc:	e1a0e00f 	mov	lr, pc
         2d7e0:	e1a0f00c 	mov	pc, ip
         2d7e4:	e28dd004 	add	sp, sp, #4	; 0x4
         2d7e8:	e3300000 	teq	r0, #0	; 0x0
         2d7ec:	1a000025 	bne	2d888 <A8_PrefixCompletions(DictWalkBlock *)+0x14c>
         2d7f0:	e1a00008 	mov	r0, r8
         2d7f4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         2d7f8:	e5b01020 	ldr	r1, [r0, #32]!
         2d7fc:	e1a00004 	mov	r0, r4
         2d800:	eb674e26 	bl	1a010a0 <$A8_WalkNextChars(DictWalkBlock *, unsigned long)>
         2d804:	e3300000 	teq	r0, #0	; 0x0
         2d808:	0afffff8 	beq	2d7f0 <A8_PrefixCompletions(DictWalkBlock *)+0xb4>
         2d80c:	ea00001d 	b	2d888 <A8_PrefixCompletions(DictWalkBlock *)+0x14c>
         2d810:	e286e001 	add	lr, r6, #1	; 0x1
         2d814:	e584e004 	str	lr, [r4, #4]
         2d818:	e5950000 	ldr	r0, [r5]
         2d81c:	e5902048 	ldr	r2, [r0, #72]
         2d820:	e3320000 	teq	r2, #0	; 0x0
         2d824:	e5901024 	ldr	r1, [r0, #36]
         2d828:	03a02000 	moveq	r2, #0	; 0x0
         2d82c:	15d22000 	ldrneb	r2, [r2]
         2d830:	e20220ff 	and	r2, r2, #255	; 0xff
         2d834:	e5900020 	ldr	r0, [r0, #32]
         2d838:	e0800004 	add	r0, r0, r4
         2d83c:	e5c08010 	strb	r8, [r0, #16]
         2d840:	e594c008 	ldr	ip, [r4, #8]
         2d844:	e33c0000 	teq	ip, #0	; 0x0
         2d848:	0a000008 	beq	2d870 <A8_PrefixCompletions(DictWalkBlock *)+0x134>
         2d84c:	e594300c 	ldr	r3, [r4, #12]
         2d850:	e92d0008 	stmdb	sp!, {r3}
         2d854:	e1a00007 	mov	r0, r7
         2d858:	e1a0300e 	mov	r3, lr
         2d85c:	e1a0e00f 	mov	lr, pc
         2d860:	e1a0f00c 	mov	pc, ip
         2d864:	e28dd004 	add	sp, sp, #4	; 0x4
         2d868:	e3300000 	teq	r0, #0	; 0x0
         2d86c:	0affffdf 	beq	2d7f0 <A8_PrefixCompletions(DictWalkBlock *)+0xb4>
         2d870:	e5950000 	ldr	r0, [r5]
         2d874:	e5b01020 	ldr	r1, [r0, #32]!
         2d878:	e1a00004 	mov	r0, r4
         2d87c:	eb674e07 	bl	1a010a0 <$A8_WalkNextChars(DictWalkBlock *, unsigned long)>
         2d880:	e3300000 	teq	r0, #0	; 0x0
         2d884:	0affffd9 	beq	2d7f0 <A8_PrefixCompletions(DictWalkBlock *)+0xb4>
         2d888:	e3a00001 	mov	r0, #1	; 0x1
         2d88c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: A8_WalkNextChars(DictWalkBlock *, unsigned long)
 * Address: 0002d890
 */
A8_WalkNextChars(DictWalkBlock *, unsigned long) {
    /*
         2d890:	e1a0c00d 	mov	ip, sp
         2d894:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         2d898:	e24cb004 	sub	fp, ip, #4	; 0x4
         2d89c:	e1a05000 	mov	r5, r0
         2d8a0:	e1a04001 	mov	r4, r1
         2d8a4:	e5906000 	ldr	r6, [r0]
         2d8a8:	e2807010 	add	r7, r0, #16	; 0x10
         2d8ac:	e5960000 	ldr	r0, [r6]
         2d8b0:	e5901030 	ldr	r1, [r0, #48]
         2d8b4:	e3710001 	cmn	r1, #1	; 0x1
         2d8b8:	0a00000b 	beq	2d8ec <A8_WalkNextChars(DictWalkBlock *, unsigned long)+0x5c>
         2d8bc:	e7c71004 	strb	r1, [r7, r4]
         2d8c0:	e3a08000 	mov	r8, #0	; 0x0
         2d8c4:	e0870004 	add	r0, r7, r4
         2d8c8:	e5c08001 	strb	r8, [r0, #1]
         2d8cc:	e5960000 	ldr	r0, [r6]
         2d8d0:	e5a04020 	str	r4, [r0, #32]!
         2d8d4:	e1a00005 	mov	r0, r5
         2d8d8:	eb674def 	bl	1a0109c <$A8_PrefixCompletions(DictWalkBlock *)>
         2d8dc:	e3300000 	teq	r0, #0	; 0x0
         2d8e0:	01a00008 	moveq	r0, r8
         2d8e4:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         2d8e8:	ea000027 	b	2d98c <A8_WalkNextChars(DictWalkBlock *, unsigned long)+0xfc>
         2d8ec:	e24ddc01 	sub	sp, sp, #256	; 0x100
         2d8f0:	e1a02004 	mov	r2, r4
         2d8f4:	e1a01007 	mov	r1, r7
         2d8f8:	e5b0a028 	ldr	sl, [r0, #40]!
         2d8fc:	e1a0000d 	mov	r0, sp
         2d900:	eb6e206d 	bl	1bb5abc <$strncpy>
         2d904:	e2441001 	sub	r1, r4, #1	; 0x1
         2d908:	e5960000 	ldr	r0, [r6]
         2d90c:	e5a01020 	str	r1, [r0, #32]!
         2d910:	e5960000 	ldr	r0, [r6]
         2d914:	e5a0d01c 	str	sp, [r0, #28]!
         2d918:	e1a00006 	mov	r0, r6
         2d91c:	e3a01008 	mov	r1, #8	; 0x8
         2d920:	eb6749d2 	bl	1a00070 <$CallAirusA>
         2d924:	e5960000 	ldr	r0, [r6]
         2d928:	e590002c 	ldr	r0, [r0, #44]
         2d92c:	e3300000 	teq	r0, #0	; 0x0
         2d930:	1a000014 	bne	2d988 <A8_WalkNextChars(DictWalkBlock *, unsigned long)+0xf8>
         2d934:	e3a08000 	mov	r8, #0	; 0x0
         2d938:	e5dd0000 	ldrb	r0, [sp]
         2d93c:	e3300000 	teq	r0, #0	; 0x0
         2d940:	0a000010 	beq	2d988 <A8_WalkNextChars(DictWalkBlock *, unsigned long)+0xf8>
         2d944:	e0879004 	add	r9, r7, r4
         2d948:	e7dd0008 	ldrb	r0, [sp, r8]
         2d94c:	e7c70004 	strb	r0, [r7, r4]
         2d950:	e3a00000 	mov	r0, #0	; 0x0
         2d954:	e5c90001 	strb	r0, [r9, #1]
         2d958:	e5960000 	ldr	r0, [r6]
         2d95c:	e5a0a028 	str	sl, [r0, #40]!
         2d960:	e5960000 	ldr	r0, [r6]
         2d964:	e5a04020 	str	r4, [r0, #32]!
         2d968:	e1a00005 	mov	r0, r5
         2d96c:	eb674dca 	bl	1a0109c <$A8_PrefixCompletions(DictWalkBlock *)>
         2d970:	e3300000 	teq	r0, #0	; 0x0
         2d974:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         2d978:	e2888001 	add	r8, r8, #1	; 0x1
         2d97c:	e7dd0008 	ldrb	r0, [sp, r8]
         2d980:	e3300000 	teq	r0, #0	; 0x0
         2d984:	1affffef 	bne	2d948 <A8_WalkNextChars(DictWalkBlock *, unsigned long)+0xb8>
         2d988:	e28ddc01 	add	sp, sp, #256	; 0x100
         2d98c:	e3a00001 	mov	r0, #1	; 0x1
         2d990:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: Astrlen(char *)
 * Address: 0002e6e0
 */
Astrlen(char *) {
    /*
         2e6e0:	e1a01000 	mov	r1, r0
         2e6e4:	e4d02001 	ldrb	r2, [r0], #1
         2e6e8:	e3320000 	teq	r2, #0	; 0x0
         2e6ec:	1afffffc 	bne	2e6e4 <Astrlen(char *)+0x4>
         2e6f0:	e0400001 	sub	r0, r0, r1
         2e6f4:	e2400001 	sub	r0, r0, #1	; 0x1
         2e6f8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: Ashortstrlen(unsigned short *)
 * Address: 0002e6fc
 */
Ashortstrlen(unsigned short *) {
    /*
         2e6fc:	e1a01000 	mov	r1, r0
         2e700:	e5902000 	ldr	r2, [r0]
         2e704:	e1b02822 	movs	r2, r2, lsr #16
         2e708:	e2800002 	add	r0, r0, #2	; 0x2
         2e70c:	0a000003 	beq	2e720 <Ashortstrlen(unsigned short *)+0x24>
         2e710:	e5902000 	ldr	r2, [r0]
         2e714:	e1b02822 	movs	r2, r2, lsr #16
         2e718:	e2800002 	add	r0, r0, #2	; 0x2
         2e71c:	1afffffb 	bne	2e710 <Ashortstrlen(unsigned short *)+0x14>
         2e720:	e0401001 	sub	r1, r0, r1
         2e724:	e0811fa1 	add	r1, r1, r1, lsr #31
         2e728:	e1a010c1 	mov	r1, r1, asr #1
         2e72c:	e3e00001 	mvn	r0, #1	; 0x1
         2e730:	e0800081 	add	r0, r0, r1, lsl #1
         2e734:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: Astrcpy__FPcT1
 * Address: 0002e738
 */
void globals::Astrcpy() {
    /*
         2e738:	e1a02000 	mov	r2, r0
         2e73c:	e4d13001 	ldrb	r3, [r1], #1
         2e740:	e4c03001 	strb	r3, [r0], #1
         2e744:	e3330000 	teq	r3, #0	; 0x0
         2e748:	0a000003 	beq	2e75c <Astrcpy__FPcT1+0x24>
         2e74c:	e4d13001 	ldrb	r3, [r1], #1
         2e750:	e4c03001 	strb	r3, [r0], #1
         2e754:	e3330000 	teq	r3, #0	; 0x0
         2e758:	1afffffb 	bne	2e74c <Astrcpy__FPcT1+0x14>
         2e75c:	e1a00002 	mov	r0, r2
         2e760:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: Ashortstrcpy__FPUsT1
 * Address: 0002e764
 */
void globals::Ashortstrcpy() {
    /*
         2e764:	e1a02000 	mov	r2, r0
         2e768:	e5913000 	ldr	r3, [r1]
         2e76c:	e1b03823 	movs	r3, r3, lsr #16
         2e770:	e2811002 	add	r1, r1, #2	; 0x2
         2e774:	e5c03001 	strb	r3, [r0, #1]
         2e778:	e1a0c443 	mov	ip, r3, asr #8
         2e77c:	e4c0c002 	strb	ip, [r0], #2
         2e780:	0a000006 	beq	2e7a0 <Ashortstrcpy__FPUsT1+0x3c>
         2e784:	e5913000 	ldr	r3, [r1]
         2e788:	e1b03823 	movs	r3, r3, lsr #16
         2e78c:	e2811002 	add	r1, r1, #2	; 0x2
         2e790:	e5c03001 	strb	r3, [r0, #1]
         2e794:	e1a0c443 	mov	ip, r3, asr #8
         2e798:	e4c0c002 	strb	ip, [r0], #2
         2e79c:	1afffff8 	bne	2e784 <Ashortstrcpy__FPUsT1+0x20>
         2e7a0:	e1a00002 	mov	r0, r2
         2e7a4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: Astrchr(char *, char)
 * Address: 0002e7a8
 */
Astrchr(char *, char) {
    /*
         2e7a8:	e20110ff 	and	r1, r1, #255	; 0xff
         2e7ac:	ea000000 	b	2e7b4 <Astrchr(char *, char)+0xc>
         2e7b0:	e2800001 	add	r0, r0, #1	; 0x1
         2e7b4:	e5d02000 	ldrb	r2, [r0]
         2e7b8:	e1320001 	teq	r2, r1
         2e7bc:	13320000 	teqne	r2, #0	; 0x0
         2e7c0:	1afffffa 	bne	2e7b0 <Astrchr(char *, char)+0x8>
         2e7c4:	e5d02000 	ldrb	r2, [r0]
         2e7c8:	e1320001 	teq	r2, r1
         2e7cc:	13a00000 	movne	r0, #0	; 0x0
         2e7d0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: AlertFastLine__F5PointT1l
 * Address: 0002f4dc
 */
void globals::AlertFastLine() {
    /*
         2f4dc:	e1a0c00d 	mov	ip, sp
         2f4e0:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         2f4e4:	e24cb004 	sub	fp, ip, #4	; 0x4
         2f4e8:	e24dd008 	sub	sp, sp, #8	; 0x8
         2f4ec:	e3a07001 	mov	r7, #1	; 0x1
         2f4f0:	e51b1032 	ldr	r1, [fp, -#50]
         2f4f4:	e1a01841 	mov	r1, r1, asr #16
         2f4f8:	e51b002e 	ldr	r0, [fp, -#46]
         2f4fc:	e1510840 	cmp	r1, r0, asr #16
         2f500:	a51b102e 	ldrge	r1, [fp, -#46]
         2f504:	a1a01841 	movge	r1, r1, asr #16
         2f508:	b51b1032 	ldrlt	r1, [fp, -#50]
         2f50c:	b1a01841 	movlt	r1, r1, asr #16
         2f510:	e59f0030 	ldr	r0, [pc, #30]	; 2f548 <AlertFastLine__F5PointT1l+0x6c>
         2f514:	e590400e 	ldr	r4, [r0, #14]
         2f518:	e1a04844 	mov	r4, r4, asr #16
         2f51c:	e0412004 	sub	r2, r1, r4
         2f520:	e5901014 	ldr	r1, [r0, #20]
         2f524:	e201e0ff 	and	lr, r1, #255	; 0xff
         2f528:	e3a03003 	mov	r3, #3	; 0x3
         2f52c:	e3a01007 	mov	r1, #7	; 0x7
         2f530:	e33e0001 	teq	lr, #1	; 0x1
         2f534:	0a000004 	beq	2f54c <AlertFastLine__F5PointT1l+0x70>
         2f538:	e33e0002 	teq	lr, #2	; 0x2
         2f53c:	03a03004 	moveq	r3, #4	; 0x4
         2f540:	03a0100f 	moveq	r1, #15	; 0xf
         2f544:	ea000002 	b	2f554 <AlertFastLine__F5PointT1l+0x78>
         2f548:	0c105ef0 	ldceq	14, cr5, [r0], -#960
         2f54c:	e3a03005 	mov	r3, #5	; 0x5
         2f550:	e3a0101f 	mov	r1, #31	; 0x1f
         2f554:	e1a0c352 	mov	ip, r2, asr r3
         2f558:	e5908008 	ldr	r8, [r0, #8]
         2f55c:	e1a08848 	mov	r8, r8, asr #16
         2f560:	e1a06148 	mov	r6, r8, asr #2
         2f564:	e51b9034 	ldr	r9, [fp, -#52]
         2f568:	e1a09849 	mov	r9, r9, asr #16
         2f56c:	e51b5030 	ldr	r5, [fp, -#48]
         2f570:	e1590845 	cmp	r9, r5, asr #16
         2f574:	a51b5030 	ldrge	r5, [fp, -#48]
         2f578:	a1a05845 	movge	r5, r5, asr #16
         2f57c:	b51b5034 	ldrlt	r5, [fp, -#52]
         2f580:	b1a05845 	movlt	r5, r5, asr #16
         2f584:	e590900c 	ldr	r9, [r0, #12]
         2f588:	e0455849 	sub	r5, r5, r9, asr #16
         2f58c:	e0050598 	mul	r5, r8, r5
         2f590:	e5900004 	ldr	r0, [r0, #4]
         2f594:	e0850000 	add	r0, r5, r0
         2f598:	e080510c 	add	r5, r0, ip, lsl #2
         2f59c:	e3e00000 	mvn	r0, #0	; 0x0
         2f5a0:	e3a09020 	mov	r9, #32	; 0x20
         2f5a4:	1a000053 	bne	2f6f8 <AlertFastLine__F5PointT1l+0x21c>
         2f5a8:	e51b7032 	ldr	r7, [fp, -#50]
         2f5ac:	e1a07847 	mov	r7, r7, asr #16
         2f5b0:	e51b802e 	ldr	r8, [fp, -#46]
         2f5b4:	e1570848 	cmp	r7, r8, asr #16
         2f5b8:	a51b7032 	ldrge	r7, [fp, -#50]
         2f5bc:	a1a07847 	movge	r7, r7, asr #16
         2f5c0:	b51b702e 	ldrlt	r7, [fp, -#46]
         2f5c4:	b1a07847 	movlt	r7, r7, asr #16
         2f5c8:	e0474004 	sub	r4, r7, r4
         2f5cc:	e2844001 	add	r4, r4, #1	; 0x1
         2f5d0:	e0022001 	and	r2, r2, r1
         2f5d4:	e1a0700e 	mov	r7, lr
         2f5d8:	e0020297 	mul	r2, r7, r2
         2f5dc:	e1a02230 	mov	r2, r0, lsr r2
         2f5e0:	e0041001 	and	r1, r4, r1
         2f5e4:	e001019e 	mul	r1, lr, r1
         2f5e8:	e0491001 	sub	r1, r9, r1
         2f5ec:	e1a01110 	mov	r1, r0, lsl r1
         2f5f0:	e06ce354 	rsb	lr, ip, r4, asr r3
         2f5f4:	e3a0c000 	mov	ip, #0	; 0x0
         2f5f8:	e0024001 	and	r4, r2, r1
         2f5fc:	e24e3001 	sub	r3, lr, #1	; 0x1
         2f600:	e3a07000 	mov	r7, #0	; 0x0
         2f604:	e1a08002 	mov	r8, r2
         2f608:	e1a09001 	mov	r9, r1
         2f60c:	e1a00005 	mov	r0, r5
         2f610:	e33e0000 	teq	lr, #0	; 0x0
         2f614:	01a08004 	moveq	r8, r4
         2f618:	e51ba02c 	ldr	sl, [fp, -#44]
         2f61c:	e33a0000 	teq	sl, #0	; 0x0
         2f620:	1a00000e 	bne	2f660 <AlertFastLine__F5PointT1l+0x184>
         2f624:	e590a000 	ldr	sl, [r0]
         2f628:	e18a8008 	orr	r8, sl, r8
         2f62c:	e4808004 	str	r8, [r0], #4
         2f630:	e1a08003 	mov	r8, r3
         2f634:	e3530000 	cmp	r3, #0	; 0x0
         2f638:	ba00002a 	blt	2f6e8 <AlertFastLine__F5PointT1l+0x20c>
         2f63c:	e3e0a000 	mvn	sl, #0	; 0x0
         2f640:	da000003 	ble	2f654 <AlertFastLine__F5PointT1l+0x178>
         2f644:	e2488001 	sub	r8, r8, #1	; 0x1
         2f648:	e3580000 	cmp	r8, #0	; 0x0
         2f64c:	e480a004 	str	sl, [r0], #4
         2f650:	cafffffb 	bgt	2f644 <AlertFastLine__F5PointT1l+0x168>
         2f654:	e5908000 	ldr	r8, [r0]
         2f658:	e1888009 	orr	r8, r8, r9
         2f65c:	ea000020 	b	2f6e4 <AlertFastLine__F5PointT1l+0x208>
         2f660:	e51ba02c 	ldr	sl, [fp, -#44]
         2f664:	e33a0001 	teq	sl, #1	; 0x1
         2f668:	e590a000 	ldr	sl, [r0]
         2f66c:	1a000010 	bne	2f6b4 <AlertFastLine__F5PointT1l+0x1d8>
         2f670:	e02a8008 	eor	r8, sl, r8
         2f674:	e5808000 	str	r8, [r0]
         2f678:	e2808004 	add	r8, r0, #4	; 0x4
         2f67c:	e1a0a003 	mov	sl, r3
         2f680:	e3530000 	cmp	r3, #0	; 0x0
         2f684:	ba000017 	blt	2f6e8 <AlertFastLine__F5PointT1l+0x20c>
         2f688:	da000005 	ble	2f6a4 <AlertFastLine__F5PointT1l+0x1c8>
         2f68c:	e5980000 	ldr	r0, [r8]
         2f690:	e1e00000 	mvn	r0, r0
         2f694:	e24aa001 	sub	sl, sl, #1	; 0x1
         2f698:	e35a0000 	cmp	sl, #0	; 0x0
         2f69c:	e4880004 	str	r0, [r8], #4
         2f6a0:	cafffff9 	bgt	2f68c <AlertFastLine__F5PointT1l+0x1b0>
         2f6a4:	e5980000 	ldr	r0, [r8]
         2f6a8:	e0200009 	eor	r0, r0, r9
         2f6ac:	e5880000 	str	r0, [r8]
         2f6b0:	ea00000c 	b	2f6e8 <AlertFastLine__F5PointT1l+0x20c>
         2f6b4:	e1ca8008 	bic	r8, sl, r8
         2f6b8:	e4808004 	str	r8, [r0], #4
         2f6bc:	e1a08003 	mov	r8, r3
         2f6c0:	e3530000 	cmp	r3, #0	; 0x0
         2f6c4:	ba000007 	blt	2f6e8 <AlertFastLine__F5PointT1l+0x20c>
         2f6c8:	da000003 	ble	2f6dc <AlertFastLine__F5PointT1l+0x200>
         2f6cc:	e2488001 	sub	r8, r8, #1	; 0x1
         2f6d0:	e3580000 	cmp	r8, #0	; 0x0
         2f6d4:	e4807004 	str	r7, [r0], #4
         2f6d8:	cafffffb 	bgt	2f6cc <AlertFastLine__F5PointT1l+0x1f0>
         2f6dc:	e5908000 	ldr	r8, [r0]
         2f6e0:	e1c88009 	bic	r8, r8, r9
         2f6e4:	e5808000 	str	r8, [r0]
         2f6e8:	e0855106 	add	r5, r5, r6, lsl #2
         2f6ec:	e25cc001 	subs	ip, ip, #1	; 0x1
         2f6f0:	5affffc3 	bpl	2f604 <AlertFastLine__F5PointT1l+0x128>
         2f6f4:	ea00004c 	b	2f82c <AlertFastLine__F5PointT1l+0x350>
         2f6f8:	d51b4030 	ldrle	r4, [fp, -#48]
         2f6fc:	d1a04844 	movle	r4, r4, asr #16
         2f700:	d51bc034 	ldrle	ip, [fp, -#52]
         2f704:	d1a0c84c 	movle	ip, ip, asr #16
         2f708:	c51b4034 	ldrgt	r4, [fp, -#52]
         2f70c:	c1a04844 	movgt	r4, r4, asr #16
         2f710:	c51bc030 	ldrgt	ip, [fp, -#48]
         2f714:	c1a0c84c 	movgt	ip, ip, asr #16
         2f718:	e044c00c 	sub	ip, r4, ip
         2f71c:	e28c8001 	add	r8, ip, #1	; 0x1
         2f720:	e2814001 	add	r4, r1, #1	; 0x1
         2f724:	e1e0c001 	mvn	ip, r1
         2f728:	e58d4004 	str	r4, [sp, #4]
         2f72c:	e58dc000 	str	ip, [sp]
         2f730:	e1a04008 	mov	r4, r8
         2f734:	e1a00005 	mov	r0, r5
         2f738:	e1a09352 	mov	r9, r2, asr r3
         2f73c:	e082c007 	add	ip, r2, r7
         2f740:	e1a0a00c 	mov	sl, ip
         2f744:	e24cc001 	sub	ip, ip, #1	; 0x1
         2f748:	e139035c 	teq	r9, ip, asr r3
         2f74c:	0a00000b 	beq	2f780 <AlertFastLine__F5PointT1l+0x2a4>
         2f750:	e1a0c00e 	mov	ip, lr
         2f754:	e009029c 	mul	r9, ip, r2
         2f758:	e3e0c000 	mvn	ip, #0	; 0x0
         2f75c:	e1a0c93c 	mov	ip, ip, lsr r9
         2f760:	e002a001 	and	sl, r2, r1
         2f764:	e59d9004 	ldr	r9, [sp, #4]
         2f768:	e049900a 	sub	r9, r9, sl
         2f76c:	e0477009 	sub	r7, r7, r9
         2f770:	e0822001 	add	r2, r2, r1
         2f774:	e59d9000 	ldr	r9, [sp]
         2f778:	e0022009 	and	r2, r2, r9
         2f77c:	ea00000b 	b	2f7b0 <AlertFastLine__F5PointT1l+0x2d4>
         2f780:	e01a7001 	ands	r7, sl, r1
         2f784:	e002c001 	and	ip, r2, r1
         2f788:	e1a0900e 	mov	r9, lr
         2f78c:	e00c0c99 	mul	ip, r9, ip
         2f790:	e3e0a000 	mvn	sl, #0	; 0x0
         2f794:	e1a0cc3a 	mov	ip, sl, lsr ip
         2f798:	0a000003 	beq	2f7ac <AlertFastLine__F5PointT1l+0x2d0>
         2f79c:	e1a0900e 	mov	r9, lr
         2f7a0:	e0070799 	mul	r7, r9, r7
         2f7a4:	e2677020 	rsb	r7, r7, #32	; 0x20
         2f7a8:	e00cc71a 	and	ip, ip, sl, lsl r7
         2f7ac:	e3a07000 	mov	r7, #0	; 0x0
         2f7b0:	e51b902c 	ldr	r9, [fp, -#44]
         2f7b4:	e3590001 	cmp	r9, #1	; 0x1
         2f7b8:	da000008 	ble	2f7e0 <AlertFastLine__F5PointT1l+0x304>
         2f7bc:	e1e0c00c 	mvn	ip, ip
         2f7c0:	e5909000 	ldr	r9, [r0]
         2f7c4:	e009900c 	and	r9, r9, ip
         2f7c8:	e5809000 	str	r9, [r0]
         2f7cc:	e0800106 	add	r0, r0, r6, lsl #2
         2f7d0:	e2444001 	sub	r4, r4, #1	; 0x1
         2f7d4:	e3540000 	cmp	r4, #0	; 0x0
         2f7d8:	cafffff8 	bgt	2f7c0 <AlertFastLine__F5PointT1l+0x2e4>
         2f7dc:	ea00000f 	b	2f820 <AlertFastLine__F5PointT1l+0x344>
         2f7e0:	1a000007 	bne	2f804 <AlertFastLine__F5PointT1l+0x328>
         2f7e4:	e5909000 	ldr	r9, [r0]
         2f7e8:	e029900c 	eor	r9, r9, ip
         2f7ec:	e5809000 	str	r9, [r0]
         2f7f0:	e0800106 	add	r0, r0, r6, lsl #2
         2f7f4:	e2444001 	sub	r4, r4, #1	; 0x1
         2f7f8:	e3540000 	cmp	r4, #0	; 0x0
         2f7fc:	cafffff8 	bgt	2f7e4 <AlertFastLine__F5PointT1l+0x308>
         2f800:	ea000006 	b	2f820 <AlertFastLine__F5PointT1l+0x344>
         2f804:	e5909000 	ldr	r9, [r0]
         2f808:	e189900c 	orr	r9, r9, ip
         2f80c:	e5809000 	str	r9, [r0]
         2f810:	e0800106 	add	r0, r0, r6, lsl #2
         2f814:	e2444001 	sub	r4, r4, #1	; 0x1
         2f818:	e3540000 	cmp	r4, #0	; 0x0
         2f81c:	cafffff8 	bgt	2f804 <AlertFastLine__F5PointT1l+0x328>
         2f820:	e2855004 	add	r5, r5, #4	; 0x4
         2f824:	e3370000 	teq	r7, #0	; 0x0
         2f828:	1affffc0 	bne	2f730 <AlertFastLine__F5PointT1l+0x254>
         2f82c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: AlertGetPoint(long *)
 * Address: 0002f830
 */
AlertGetPoint(long *) {
    /*
         2f830:	e1a0c00d 	mov	ip, sp
         2f834:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         2f838:	e24cb004 	sub	fp, ip, #4	; 0x4
         2f83c:	e1a04000 	mov	r4, r0
         2f840:	e24dd010 	sub	sp, sp, #16	; 0x10
         2f844:	e3a00000 	mov	r0, #0	; 0x0
         2f848:	e5cd000c 	strb	r0, [sp, #12]
         2f84c:	e28d300c 	add	r3, sp, #12	; 0xc
         2f850:	e1a0200d 	mov	r2, sp
         2f854:	e28d1004 	add	r1, sp, #4	; 0x4
         2f858:	e28d0008 	add	r0, sp, #8	; 0x8
         2f85c:	eb6aef5f 	bl	1aeb5e0 <$PollTablet__FPlT1PUlPUc>
         2f860:	e3300000 	teq	r0, #0	; 0x0
         2f864:	1a00000f 	bne	2f8a8 <AlertGetPoint(long *)+0x78>
         2f868:	e59d0000 	ldr	r0, [sp]
         2f86c:	e3500007 	cmp	r0, #7	; 0x7
         2f870:	8a00000c 	bhi	2f8a8 <AlertGetPoint(long *)+0x78>
         2f874:	e59d0004 	ldr	r0, [sp, #4]
         2f878:	e2800902 	add	r0, r0, #32768	; 0x8000
         2f87c:	e1a00840 	mov	r0, r0, asr #16
         2f880:	e1a00800 	mov	r0, r0, lsl #16
         2f884:	e1a00840 	mov	r0, r0, asr #16
         2f888:	e4840004 	str	r0, [r4], #4
         2f88c:	e59d0008 	ldr	r0, [sp, #8]
         2f890:	e2800902 	add	r0, r0, #32768	; 0x8000
         2f894:	e1a00840 	mov	r0, r0, asr #16
         2f898:	e1a00800 	mov	r0, r0, lsl #16
         2f89c:	e1a00840 	mov	r0, r0, asr #16
         2f8a0:	e5840000 	str	r0, [r4]
         2f8a4:	ea000002 	b	2f8b4 <AlertGetPoint(long *)+0x84>
         2f8a8:	e5dd000c 	ldrb	r0, [sp, #12]
         2f8ac:	e3300000 	teq	r0, #0	; 0x0
         2f8b0:	0affffe5 	beq	2f84c <AlertGetPoint(long *)+0x1c>
         2f8b4:	e5dd000c 	ldrb	r0, [sp, #12]
         2f8b8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: AddAngle
 * Address: 00030c94
 */
void globals::AddAngle() {
    /*
         30c94:	e0800001 	add	r0, r0, r1
         30c98:	ea6cc104 	b	1b610b0 <$MapDegrees>
    */
}

/**
 * Symbol: AppleTalkPort(TUPort *)
 * Address: 0003362c
 */
AppleTalkPort(TUPort *) {
    /*
         3362c:	e1a0c00d 	mov	ip, sp
         33630:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         33634:	e24cb004 	sub	fp, ip, #4	; 0x4
         33638:	e1a04000 	mov	r4, r0
         3363c:	e24dd020 	sub	sp, sp, #32	; 0x20
         33640:	e28d0010 	add	r0, sp, #16	; 0x10
         33644:	eb6e680f 	bl	1bcd688 <TUNameServer::$__ct(void)>
         33648:	e59f004c 	ldr	r0, [pc, #4c]	; 3369c <AppleTalkPort(TUPort *)+0x70>
         3364c:	e58d0000 	str	r0, [sp]
         33650:	e3a00000 	mov	r0, #0	; 0x0
         33654:	e5cd0004 	strb	r0, [sp, #4]
         33658:	e28d3008 	add	r3, sp, #8	; 0x8
         3365c:	e92d0008 	stmdb	sp!, {r3}
         33660:	e28d3010 	add	r3, sp, #16	; 0x10
         33664:	e28d1004 	add	r1, sp, #4	; 0x4
         33668:	e28d0014 	add	r0, sp, #20	; 0x14
         3366c:	e28f2f0b 	add	r2, pc, #44	; 0x2c
         33670:	eb6e8d39 	bl	1bd6b5c <TUNameServer::$Lookup(char *, char *, unsigned long *, unsigned long *)>
         33674:	e28dd004 	add	sp, sp, #4	; 0x4
         33678:	e1a05000 	mov	r5, r0
         3367c:	e1a00004 	mov	r0, r4
         33680:	e59d100c 	ldr	r1, [sp, #12]
         33684:	eb6e746f 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
         33688:	e28d0010 	add	r0, sp, #16	; 0x10
         3368c:	e3a01000 	mov	r1, #0	; 0x0
         33690:	eb6e6c1b 	bl	1bce704 <TUNameServer::$__dt(void)>
         33694:	e1a00005 	mov	r0, r5
         33698:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         3369c:	61746c6b 	cmnvs	r4, fp, ror #24
         336a0:	5455506f 	ldrplb	r5, [r5], -#111
         336a4:	72740000 	rsbvcs	r0, r4, #0	; 0x0
    */
}

/**
 * Symbol: ATSendRPCSync__FP17TAppleTalkMessageUlT1T2UcT5
 * Address: 000336a8
 */
void globals::ATSendRPCSync() {
    /*
         336a8:	e1a0c00d 	mov	ip, sp
         336ac:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         336b0:	e24cb004 	sub	fp, ip, #4	; 0x4
         336b4:	e1a07000 	mov	r7, r0
         336b8:	e1a06001 	mov	r6, r1
         336bc:	e1a05002 	mov	r5, r2
         336c0:	e1a04003 	mov	r4, r3
         336c4:	e59b1004 	ldr	r1, [fp, #4]
         336c8:	e201a0ff 	and	sl, r1, #255	; 0xff
         336cc:	e59b0008 	ldr	r0, [fp, #8]
         336d0:	e20090ff 	and	r9, r0, #255	; 0xff
         336d4:	e24dd008 	sub	sp, sp, #8	; 0x8
         336d8:	e3a00000 	mov	r0, #0	; 0x0
         336dc:	e5cd0004 	strb	r0, [sp, #4]
         336e0:	e58d0000 	str	r0, [sp]
         336e4:	e1a0000d 	mov	r0, sp
         336e8:	eb6904da 	bl	1a74a58 <$AppleTalkPort(TUPort *)>
         336ec:	e1b08000 	movs	r8, r0
         336f0:	1a000006 	bne	33710 <ATSendRPCSync__FP17TAppleTalkMessageUlT1T2UcT5+0x68>
         336f4:	e3390000 	teq	r9, #0	; 0x0
         336f8:	0a00000b 	beq	3372c <ATSendRPCSync__FP17TAppleTalkMessageUlT1T2UcT5+0x84>
         336fc:	eb6e80b4 	bl	1bd39d4 <$GetGlobals>
         33700:	e3a01000 	mov	r1, #0	; 0x0
         33704:	eb6de7e9 	bl	1bad6b0 <TForkWorld::$Fork(TForkWorld *)>
         33708:	e1b08000 	movs	r8, r0
         3370c:	0a000004 	beq	33724 <ATSendRPCSync__FP17TAppleTalkMessageUlT1T2UcT5+0x7c>
         33710:	e1a0000d 	mov	r0, sp
         33714:	e3a01000 	mov	r1, #0	; 0x0
         33718:	eb6e6c01 	bl	1bce724 <TUObject::$__dt(void)>
         3371c:	e1a00008 	mov	r0, r8
         33720:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         33724:	eb6e80aa 	bl	1bd39d4 <$GetGlobals>
         33728:	eb6dec0c 	bl	1bae760 <TForkWorld::$ReleaseMutex(void)>
         3372c:	e24dd004 	sub	sp, sp, #4	; 0x4
         33730:	e1a00005 	mov	r0, r5
         33734:	e1a01004 	mov	r1, r4
         33738:	e3a02000 	mov	r2, #0	; 0x0
         3373c:	e3a0c000 	mov	ip, #0	; 0x0
         33740:	e1a0e00a 	mov	lr, sl
         33744:	e3a03000 	mov	r3, #0	; 0x0
         33748:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         3374c:	e1a0300a 	mov	r3, sl
         33750:	e1a0100c 	mov	r1, ip
         33754:	e1a00006 	mov	r0, r6
         33758:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         3375c:	e1a03007 	mov	r3, r7
         33760:	e92d0008 	stmdb	sp!, {r3}
         33764:	e28d3024 	add	r3, sp, #36	; 0x24
         33768:	e28d0028 	add	r0, sp, #40	; 0x28
         3376c:	e3a02002 	mov	r2, #2	; 0x2
         33770:	e3a01001 	mov	r1, #1	; 0x1
         33774:	eb6e9d74 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         33778:	e28dd024 	add	sp, sp, #36	; 0x24
         3377c:	e1a08000 	mov	r8, r0
         33780:	e3390000 	teq	r9, #0	; 0x0
         33784:	0a000001 	beq	33790 <ATSendRPCSync__FP17TAppleTalkMessageUlT1T2UcT5+0xe8>
         33788:	eb6e8091 	bl	1bd39d4 <$GetGlobals>
         3378c:	eb6ddf98 	bl	1bab5f4 <TForkWorld::$AcquireMutex(void)>
         33790:	e28dd004 	add	sp, sp, #4	; 0x4
         33794:	eaffffdd 	b	33710 <ATSendRPCSync__FP17TAppleTalkMessageUlT1T2UcT5+0x68>
    */
}

/**
 * Symbol: AppleTalkOpenCount(void)
 * Address: 00033798
 */
AppleTalkOpenCount(void) {
    /*
         33798:	e59f0004 	ldr	r0, [pc, #4]	; 337a4 <AppleTalkOpenCount(void)+0xc>
         3379c:	e5900000 	ldr	r0, [r0]
         337a0:	e1a0f00e 	mov	pc, lr
         337a4:	0c10088c 	ldceq	8, cr0, [r0], -#560
    */
}

/**
 * Symbol: AddTestConfig(unsigned long)
 * Address: 00034a1c
 */
AddTestConfig(unsigned long) {
    /*
         34a1c:	e1a0c00d 	mov	ip, sp
         34a20:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         34a24:	e24cb004 	sub	fp, ip, #4	; 0x4
         34a28:	e1a04000 	mov	r4, r0
         34a2c:	e24dd00c 	sub	sp, sp, #12	; 0xc
         34a30:	e59f0088 	ldr	r0, [pc, #88]	; 34ac0 <AddTestConfig(unsigned long)+0xa4>
         34a34:	e5900000 	ldr	r0, [r0]
         34a38:	eb6e35c3 	bl	1bc214c <$AllocateRefHandle(long)>
         34a3c:	e1a05000 	mov	r5, r0
         34a40:	e59f007c 	ldr	r0, [pc, #7c]	; 34ac4 <AddTestConfig(unsigned long)+0xa8>
         34a44:	e5900000 	ldr	r0, [r0]
         34a48:	e5901000 	ldr	r1, [r0]
         34a4c:	e5950000 	ldr	r0, [r5]
         34a50:	eb6e3e02 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         34a54:	eb6e35bc 	bl	1bc214c <$AllocateRefHandle(long)>
         34a58:	e58d0008 	str	r0, [sp, #8]
         34a5c:	e1a00005 	mov	r0, r5
         34a60:	eb6e39d5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         34a64:	e1a01004 	mov	r1, r4
         34a68:	e59f0058 	ldr	r0, [pc, #58]	; 34ac8 <AddTestConfig(unsigned long)+0xac>
         34a6c:	e5900000 	ldr	r0, [r0]
         34a70:	e5900000 	ldr	r0, [r0]
         34a74:	eb6e3df6 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         34a78:	eb6e35b3 	bl	1bc214c <$AllocateRefHandle(long)>
         34a7c:	e58d0004 	str	r0, [sp, #4]
         34a80:	e28d2004 	add	r2, sp, #4	; 0x4
         34a84:	e59f1040 	ldr	r1, [pc, #40]	; 34acc <AddTestConfig(unsigned long)+0xb0>
         34a88:	e28d0008 	add	r0, sp, #8	; 0x8
         34a8c:	eb6e4635 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         34a90:	e3a00002 	mov	r0, #2	; 0x2
         34a94:	eb6e35ac 	bl	1bc214c <$AllocateRefHandle(long)>
         34a98:	e58d0000 	str	r0, [sp]
         34a9c:	e1a0000d 	mov	r0, sp
         34aa0:	eb697ff1 	bl	1a94a6c <$FReadCursiveOptions(RefVar const &)>
         34aa4:	e59d0000 	ldr	r0, [sp]
         34aa8:	eb6e39c3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         34aac:	e59d0004 	ldr	r0, [sp, #4]
         34ab0:	eb6e39c1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         34ab4:	e59d0008 	ldr	r0, [sp, #8]
         34ab8:	eb6e39bf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         34abc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         34ac0:	0c10180c 	ldceq	8, cr1, [r0], -#48
         34ac4:	00684e28 	rsbeq	r4, r8, r8, lsr #28
         34ac8:	0067fcb0 	streqh	pc, [r7], -#192
         34acc:	00684ab8 	streqh	r4, [r8], -#168
    */
}

/**
 * Symbol: AdjustRealTimeClock
 * Address: 000452fc
 */
void globals::AdjustRealTimeClock() {
    /*
         452fc:	e3a00a81 	mov	r0, #528384	; 0x81000
         45300:	e28006f1 	add	r0, r0, #252706816	; 0xf100000
         45304:	e5902000 	ldr	r2, [r0]
         45308:	e59f101c 	ldr	r1, [pc, #1c]	; 4532c <AdjustRealTimeClock+0x30>
         4530c:	e1520001 	cmp	r2, r1
         45310:	3a000003 	bcc	45324 <AdjustRealTimeClock+0x28>
         45314:	e292c5e2 	adds	ip, r2, #947912704	; 0x38800000
         45318:	929cc972 	addlss	ip, ip, #1867776	; 0x1c8000
         4531c:	937c0b09 	cmnls	ip, #9216	; 0x2400
         45320:	91a0f00e 	movls	pc, lr
         45324:	e5801000 	str	r1, [r0]
         45328:	e1a0f00e 	mov	pc, lr
         4532c:	ae070b30 	mcrge	11, 0, r0, cr7, cr0, {1}
    */
}

/**
 * Symbol: AnyVppOn(void)
 * Address: 00050958
 */
AnyVppOn(void) {
    /*
         50958:	e59f0044 	ldr	r0, [pc, #44]	; 509a4 <AnyVppOn(void)+0x4c>
         5095c:	e5b01014 	ldr	r1, [r0, #20]!
         50960:	e3a00001 	mov	r0, #1	; 0x1
         50964:	e3310001 	teq	r1, #1	; 0x1
         50968:	01a0f00e 	moveq	pc, lr
         5096c:	e3a01000 	mov	r1, #0	; 0x0
         50970:	e59f2030 	ldr	r2, [pc, #30]	; 509a8 <AnyVppOn(void)+0x50>
         50974:	e5923000 	ldr	r3, [r2]
         50978:	e3530000 	cmp	r3, #0	; 0x0
         5097c:	9a000006 	bls	5099c <AnyVppOn(void)+0x44>
         50980:	e59f2024 	ldr	r2, [pc, #24]	; 509ac <AnyVppOn(void)+0x54>
         50984:	e7d2c001 	ldrb	ip, [r2, r1]
         50988:	e33c0001 	teq	ip, #1	; 0x1
         5098c:	01a0f00e 	moveq	pc, lr
         50990:	e2811001 	add	r1, r1, #1	; 0x1
         50994:	e1510003 	cmp	r1, r3
         50998:	3afffff9 	bcc	50984 <AnyVppOn(void)+0x2c>
         5099c:	e3a00000 	mov	r0, #0	; 0x0
         509a0:	e1a0f00e 	mov	pc, lr
         509a4:	0c100980 	ldceq	9, cr0, [r0], -#512
         509a8:	0c100ab4 	ldceq	10, cr0, [r0], -#720
         509ac:	0c100988 	ldceq	9, cr0, [r0], -#544
    */
}

/**
 * Symbol: AllocInstanceByName__FPCcT1
 * Address: 0005c938
 */
void globals::AllocInstanceByName() {
    /*
         5c938:	e1a0c00d 	mov	ip, sp
         5c93c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         5c940:	e24cb004 	sub	fp, ip, #4	; 0x4
         5c944:	e3a04000 	mov	r4, #0	; 0x0
         5c948:	e1a02001 	mov	r2, r1
         5c94c:	e1a01000 	mov	r1, r0
         5c950:	e59f602c 	ldr	r6, [pc, #2c]	; 5c984 <AllocInstanceByName__FPCcT1+0x4c>
         5c954:	e3a03000 	mov	r3, #0	; 0x0
         5c958:	e5960000 	ldr	r0, [r6]
         5c95c:	eb6df8ed 	bl	1bdad18 <$Satisfy__18TClassInfoRegistryCFPCcT1Ul>
         5c960:	e1b05000 	movs	r5, r0
         5c964:	0a000014 	beq	5c9bc <AllocInstanceByName__FPCcT1+0x84>
         5c968:	e1a00005 	mov	r0, r5
         5c96c:	eb6dcb8d 	bl	1bcf7a8 <TClassInfo::$AllocProc( const(void))>
         5c970:	e3300000 	teq	r0, #0	; 0x0
         5c974:	0a000003 	beq	5c988 <AllocInstanceByName__FPCcT1+0x50>
         5c978:	e1a0e00f 	mov	lr, pc
         5c97c:	e1a0f000 	mov	pc, r0
         5c980:	ea000003 	b	5c994 <AllocInstanceByName__FPCcT1+0x5c>
         5c984:	0c100b58 	ldceq	11, cr0, [r0], -#352
         5c988:	e1a00005 	mov	r0, r5
         5c98c:	eb6e0122 	bl	1bdce1c <TClassInfo::$Size( const(void))>
         5c990:	eb6de874 	bl	1bd6b68 <$malloc>
         5c994:	e1b04000 	movs	r4, r0
         5c998:	0a000007 	beq	5c9bc <AllocInstanceByName__FPCcT1+0x84>
         5c99c:	e1a01004 	mov	r1, r4
         5c9a0:	e1a00005 	mov	r0, r5
         5c9a4:	eb6de86d 	bl	1bd6b60 <TClassInfo::$MakeAt( const(void const *))>
         5c9a8:	e5960000 	ldr	r0, [r6]
         5c9ac:	e3300000 	teq	r0, #0	; 0x0
         5c9b0:	11a01005 	movne	r1, r5
         5c9b4:	13a02001 	movne	r2, #1	; 0x1
         5c9b8:	1b0ca59a 	blne	386028 <TClassInfoRegistry::UpdateInstanceCount(TClassInfo const *, long)>
         5c9bc:	e1a00004 	mov	r0, r4
         5c9c0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: AddWordInfo__FRC6RefVarP5TViewlT3P11TUnitPublic
 * Address: 00076b64
 */
void globals::AddWordInfo() {
    /*
         76b64:	e1a0c00d 	mov	ip, sp
         76b68:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         76b6c:	e24cb004 	sub	fp, ip, #4	; 0x4
         76b70:	e1a07000 	mov	r7, r0
         76b74:	e1a06001 	mov	r6, r1
         76b78:	e1a05002 	mov	r5, r2
         76b7c:	e1a04003 	mov	r4, r3
         76b80:	e59b9004 	ldr	r9, [fp, #4]
         76b84:	e24dd004 	sub	sp, sp, #4	; 0x4
         76b88:	e3a00002 	mov	r0, #2	; 0x2
         76b8c:	eb6d2d6e 	bl	1bc214c <$AllocateRefHandle(long)>
         76b90:	e1a08000 	mov	r8, r0
         76b94:	e1a00009 	mov	r0, r9
         76b98:	eb691494 	bl	1abbdf0 <TUnitPublic::$WordInfo(void)>
         76b9c:	eb6d2d6a 	bl	1bc214c <$AllocateRefHandle(long)>
         76ba0:	e3a03003 	mov	r3, #3	; 0x3
         76ba4:	e58d0000 	str	r0, [sp]
         76ba8:	e92d0008 	stmdb	sp!, {r3}
         76bac:	e1a03004 	mov	r3, r4
         76bb0:	e1a02005 	mov	r2, r5
         76bb4:	e1a01006 	mov	r1, r6
         76bb8:	e28d0004 	add	r0, sp, #4	; 0x4
         76bbc:	eb690c4d 	bl	1ab9cf8 <$SetOffsetInfo__FRC6RefVarP5TViewlN23>
         76bc0:	e28dd004 	add	sp, sp, #4	; 0x4
         76bc4:	e1a0100d 	mov	r1, sp
         76bc8:	e1a00007 	mov	r0, r7
         76bcc:	eb68c623 	bl	1aa8460 <$AddWordInfo__FRC6RefVarT1>
         76bd0:	e5880000 	str	r0, [r8]
         76bd4:	e1a04000 	mov	r4, r0
         76bd8:	e59d0000 	ldr	r0, [sp]
         76bdc:	eb6d3176 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         76be0:	e1a00008 	mov	r0, r8
         76be4:	eb6d3174 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         76be8:	e1a00004 	mov	r0, r4
         76bec:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: AddWordInfo__FRC6RefVarT1
 * Address: 000770cc
 */
void globals::AddWordInfo() {
    /*
         770cc:	e1a0c00d 	mov	ip, sp
         770d0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         770d4:	e24cb004 	sub	fp, ip, #4	; 0x4
         770d8:	e1a05000 	mov	r5, r0
         770dc:	e1a04001 	mov	r4, r1
         770e0:	e24dd004 	sub	sp, sp, #4	; 0x4
         770e4:	e1a00001 	mov	r0, r1
         770e8:	e3a01000 	mov	r1, #0	; 0x0
         770ec:	eb68ee15 	bl	1ab2948 <$GetNthWord(RefVar const &, long)>
         770f0:	eb6d2c15 	bl	1bc214c <$AllocateRefHandle(long)>
         770f4:	e58d0000 	str	r0, [sp]
         770f8:	e5900000 	ldr	r0, [r0]
         770fc:	e3300002 	teq	r0, #2	; 0x2
         77100:	0a00001b 	beq	77174 <AddWordInfo__FRC6RefVarT1+0xa8>
         77104:	e1a0000d 	mov	r0, sp
         77108:	eb6d301d 	bl	1bc3184 <$GetCString(RefVar const &)>
         7710c:	e1a06000 	mov	r6, r0
         77110:	eb6ddd92 	bl	1bee760 <$Ustrlen>
         77114:	e1a02000 	mov	r2, r0
         77118:	e1a00006 	mov	r0, r6
         7711c:	e3a01000 	mov	r1, #0	; 0x0
         77120:	eb690aea 	bl	1ab9cd0 <$ScanWordEnd__FPUslT2>
         77124:	e1a07000 	mov	r7, r0
         77128:	e1a00006 	mov	r0, r6
         7712c:	eb6ddd8b 	bl	1bee760 <$Ustrlen>
         77130:	e1300007 	teq	r0, r7
         77134:	1a00000e 	bne	77174 <AddWordInfo__FRC6RefVarT1+0xa8>
         77138:	e24dd004 	sub	sp, sp, #4	; 0x4
         7713c:	e59f0048 	ldr	r0, [pc, #48]	; 7718c <AddWordInfo__FRC6RefVarT1+0xc0>
         77140:	e5900000 	ldr	r0, [r0]
         77144:	e5901000 	ldr	r1, [r0]
         77148:	e5950000 	ldr	r0, [r5]
         7714c:	e5900000 	ldr	r0, [r0]
         77150:	eb6d3442 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         77154:	eb6d2bfc 	bl	1bc214c <$AllocateRefHandle(long)>
         77158:	e1a01004 	mov	r1, r4
         7715c:	e58d0000 	str	r0, [sp]
         77160:	e1a0000d 	mov	r0, sp
         77164:	eb6d2bef 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
         77168:	e59d0000 	ldr	r0, [sp]
         7716c:	eb6d3012 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         77170:	e28dd004 	add	sp, sp, #4	; 0x4
         77174:	e5940000 	ldr	r0, [r4]
         77178:	e5904000 	ldr	r4, [r0]
         7717c:	e59d0000 	ldr	r0, [sp]
         77180:	eb6d300d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         77184:	e1a00004 	mov	r0, r4
         77188:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         7718c:	006831f8 	streqd	r3, [r8], -#24
    */
}

/**
 * Symbol: AddCapitalizedEntry(RefVar const &)
 * Address: 00077988
 */
AddCapitalizedEntry(RefVar const &) {
    /*
         77988:	e1a0c00d 	mov	ip, sp
         7798c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         77990:	e24cb004 	sub	fp, ip, #4	; 0x4
         77994:	e1a04000 	mov	r4, r0
         77998:	e24dd004 	sub	sp, sp, #4	; 0x4
         7799c:	e3a00002 	mov	r0, #2	; 0x2
         779a0:	eb6d29e9 	bl	1bc214c <$AllocateRefHandle(long)>
         779a4:	e1a06000 	mov	r6, r0
         779a8:	e3a00002 	mov	r0, #2	; 0x2
         779ac:	eb6d29e6 	bl	1bc214c <$AllocateRefHandle(long)>
         779b0:	e1a05000 	mov	r5, r0
         779b4:	e3a00002 	mov	r0, #2	; 0x2
         779b8:	eb6d29e3 	bl	1bc214c <$AllocateRefHandle(long)>
         779bc:	e58d0000 	str	r0, [sp]
         779c0:	e59f00d0 	ldr	r0, [pc, #d0]	; 77a98 <AddCapitalizedEntry(RefVar const &)+0x110>
         779c4:	e5900000 	ldr	r0, [r0]
         779c8:	e5901000 	ldr	r1, [r0]
         779cc:	e5940000 	ldr	r0, [r4]
         779d0:	e5900000 	ldr	r0, [r0]
         779d4:	eb6d3221 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         779d8:	e3a07000 	mov	r7, #0	; 0x0
         779dc:	e5860000 	str	r0, [r6]
         779e0:	e3300002 	teq	r0, #2	; 0x2
         779e4:	0a000006 	beq	77a04 <AddCapitalizedEntry(RefVar const &)+0x7c>
         779e8:	eb6d362f 	bl	1bc52ac <$Length(long)>
         779ec:	e3500000 	cmp	r0, #0	; 0x0
         779f0:	da000003 	ble	77a04 <AddCapitalizedEntry(RefVar const &)+0x7c>
         779f4:	e1a01007 	mov	r1, r7
         779f8:	e5960000 	ldr	r0, [r6]
         779fc:	eb6d3214 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         77a00:	e5850000 	str	r0, [r5]
         77a04:	e5950000 	ldr	r0, [r5]
         77a08:	e3300002 	teq	r0, #2	; 0x2
         77a0c:	0a000005 	beq	77a28 <AddCapitalizedEntry(RefVar const &)+0xa0>
         77a10:	e59f1084 	ldr	r1, [pc, #84]	; 77a9c <AddCapitalizedEntry(RefVar const &)+0x114>
         77a14:	e5911000 	ldr	r1, [r1]
         77a18:	e5911000 	ldr	r1, [r1]
         77a1c:	eb6d320f 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         77a20:	e59d1000 	ldr	r1, [sp]
         77a24:	e5810000 	str	r0, [r1]
         77a28:	e59d0000 	ldr	r0, [sp]
         77a2c:	e5900000 	ldr	r0, [r0]
         77a30:	e3300002 	teq	r0, #2	; 0x2
         77a34:	0a000010 	beq	77a7c <AddCapitalizedEntry(RefVar const &)+0xf4>
         77a38:	e24dd004 	sub	sp, sp, #4	; 0x4
         77a3c:	e28d0004 	add	r0, sp, #4	; 0x4
         77a40:	eb68efd9 	bl	1ab39ac <$GetToggledWord(RefVar const &)>
         77a44:	eb6d29c0 	bl	1bc214c <$AllocateRefHandle(long)>
         77a48:	e58d0000 	str	r0, [sp]
         77a4c:	e5900000 	ldr	r0, [r0]
         77a50:	e3300002 	teq	r0, #2	; 0x2
         77a54:	0a000005 	beq	77a70 <AddCapitalizedEntry(RefVar const &)+0xe8>
         77a58:	e1a0100d 	mov	r1, sp
         77a5c:	e1a00004 	mov	r0, r4
         77a60:	eb68fc35 	bl	1ab6b3c <$MoveWordFirst__FRC6RefVarT1>
         77a64:	e28d1004 	add	r1, sp, #4	; 0x4
         77a68:	e1a00004 	mov	r0, r4
         77a6c:	eb68fc32 	bl	1ab6b3c <$MoveWordFirst__FRC6RefVarT1>
         77a70:	e59d0000 	ldr	r0, [sp]
         77a74:	eb6d2dd0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         77a78:	e28dd004 	add	sp, sp, #4	; 0x4
         77a7c:	e59d0000 	ldr	r0, [sp]
         77a80:	eb6d2dcd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         77a84:	e1a00005 	mov	r0, r5
         77a88:	eb6d2dcb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         77a8c:	e1a00006 	mov	r0, r6
         77a90:	eb6d2dc9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         77a94:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         77a98:	00685208 	rsbeq	r5, r8, r8, lsl #4
         77a9c:	006851d8 	ldreqd	r5, [r8], -#24
    */
}

/**
 * Symbol: AutoAdd(RefVar const &)
 * Address: 000794ec
 */
AutoAdd(RefVar const &) {
    /*
         794ec:	e1a0c00d 	mov	ip, sp
         794f0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         794f4:	e24cb004 	sub	fp, ip, #4	; 0x4
         794f8:	e1a04000 	mov	r4, r0
         794fc:	e59f0090 	ldr	r0, [pc, #90]	; 79594 <AutoAdd(RefVar const &)+0xa8>
         79500:	e5900000 	ldr	r0, [r0]
         79504:	e5901000 	ldr	r1, [r0]
         79508:	e5940000 	ldr	r0, [r4]
         7950c:	e5900000 	ldr	r0, [r0]
         79510:	eb6d2b52 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         79514:	e3300002 	teq	r0, #2	; 0x2
         79518:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         7951c:	e24dd004 	sub	sp, sp, #4	; 0x4
         79520:	e1a00004 	mov	r0, r4
         79524:	e3a01000 	mov	r1, #0	; 0x0
         79528:	eb68e506 	bl	1ab2948 <$GetNthWord(RefVar const &, long)>
         7952c:	eb6d2306 	bl	1bc214c <$AllocateRefHandle(long)>
         79530:	e58d0000 	str	r0, [sp]
         79534:	e5900000 	ldr	r0, [r0]
         79538:	e3300002 	teq	r0, #2	; 0x2
         7953c:	0a000011 	beq	79588 <AutoAdd(RefVar const &)+0x9c>
         79540:	eb6d2f59 	bl	1bc52ac <$Length(long)>
         79544:	e2400002 	sub	r0, r0, #2	; 0x2
         79548:	e1a000a0 	mov	r0, r0, lsr #1
         7954c:	e3500000 	cmp	r0, #0	; 0x0
         79550:	da00000c 	ble	79588 <AutoAdd(RefVar const &)+0x9c>
         79554:	e59f103c 	ldr	r1, [pc, #3c]	; 79598 <AutoAdd(RefVar const &)+0xac>
         79558:	e1a00004 	mov	r0, r4
         7955c:	e3a02000 	mov	r2, #0	; 0x0
         79560:	eb6d2b40 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         79564:	e3300002 	teq	r0, #2	; 0x2
         79568:	1a000006 	bne	79588 <AutoAdd(RefVar const &)+0x9c>
         7956c:	e1a0000d 	mov	r0, sp
         79570:	eb6d2703 	bl	1bc3184 <$GetCString(RefVar const &)>
         79574:	eb68bba5 	bl	1aa8410 <$AddAutoAdd(unsigned short *)>
         79578:	e3300000 	teq	r0, #0	; 0x0
         7957c:	11a00004 	movne	r0, r4
         79580:	13a01004 	movne	r1, #4	; 0x4
         79584:	1b6905e7 	blne	1abad28 <$SetWordInfoFlags(RefVar const &, long)>
         79588:	e59d0000 	ldr	r0, [sp]
         7958c:	eb6d270a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         79590:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         79594:	00685208 	rsbeq	r5, r8, r8, lsl #4
         79598:	00685378 	rsbeq	r5, r8, r8, ror r3
    */
}

/**
 * Symbol: AutoRemove(RefVar const &)
 * Address: 0007959c
 */
AutoRemove(RefVar const &) {
    /*
         7959c:	e1a0c00d 	mov	ip, sp
         795a0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         795a4:	e24cb004 	sub	fp, ip, #4	; 0x4
         795a8:	e1a04000 	mov	r4, r0
         795ac:	e3a01004 	mov	r1, #4	; 0x4
         795b0:	eb6905ef 	bl	1abad74 <$TestWordInfoFlags(RefVar const &, long)>
         795b4:	e3300000 	teq	r0, #0	; 0x0
         795b8:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         795bc:	e24dd004 	sub	sp, sp, #4	; 0x4
         795c0:	e1a00004 	mov	r0, r4
         795c4:	e3a01000 	mov	r1, #0	; 0x0
         795c8:	eb68e4de 	bl	1ab2948 <$GetNthWord(RefVar const &, long)>
         795cc:	eb6d22de 	bl	1bc214c <$AllocateRefHandle(long)>
         795d0:	e58d0000 	str	r0, [sp]
         795d4:	e5900000 	ldr	r0, [r0]
         795d8:	e3300002 	teq	r0, #2	; 0x2
         795dc:	0a000007 	beq	79600 <AutoRemove(RefVar const &)+0x64>
         795e0:	eb6d2f31 	bl	1bc52ac <$Length(long)>
         795e4:	e2400002 	sub	r0, r0, #2	; 0x2
         795e8:	e1a000a0 	mov	r0, r0, lsr #1
         795ec:	e3500000 	cmp	r0, #0	; 0x0
         795f0:	da000002 	ble	79600 <AutoRemove(RefVar const &)+0x64>
         795f4:	e1a0000d 	mov	r0, sp
         795f8:	eb6d26e1 	bl	1bc3184 <$GetCString(RefVar const &)>
         795fc:	eb68fd98 	bl	1ab8c64 <$RemoveAutoAdd(unsigned short *)>
         79600:	e1a00004 	mov	r0, r4
         79604:	e3a01004 	mov	r1, #4	; 0x4
         79608:	eb68c7de 	bl	1aab588 <$ClearWordInfoFlags(RefVar const &, long)>
         7960c:	e59d0000 	ldr	r0, [sp]
         79610:	eb6d26e9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         79614:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: AddWordInfo__FP5TViewlT2P11TUnitPublic
 * Address: 00079790
 */
void globals::AddWordInfo() {
    /*
         79790:	e1a0c00d 	mov	ip, sp
         79794:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         79798:	e24cb004 	sub	fp, ip, #4	; 0x4
         7979c:	e1a04000 	mov	r4, r0
         797a0:	e1a06001 	mov	r6, r1
         797a4:	e1a07002 	mov	r7, r2
         797a8:	e1a05003 	mov	r5, r3
         797ac:	e24dd004 	sub	sp, sp, #4	; 0x4
         797b0:	eb68c789 	bl	1aab5dc <$CorrectInfo(void)>
         797b4:	eb6d2264 	bl	1bc214c <$AllocateRefHandle(long)>
         797b8:	e58d0000 	str	r0, [sp]
         797bc:	e1a0000d 	mov	r0, sp
         797c0:	eb68cbaa 	bl	1aac670 <$DoOverflowLearning(RefVar const &)>
         797c4:	e24dd004 	sub	sp, sp, #4	; 0x4
         797c8:	e1a03005 	mov	r3, r5
         797cc:	e92d0008 	stmdb	sp!, {r3}
         797d0:	e1a03007 	mov	r3, r7
         797d4:	e1a02006 	mov	r2, r6
         797d8:	e1a01004 	mov	r1, r4
         797dc:	e28d0008 	add	r0, sp, #8	; 0x8
         797e0:	eb68bb1d 	bl	1aa845c <$AddWordInfo__FRC6RefVarP5TViewlT3P11TUnitPublic>
         797e4:	e28dd004 	add	sp, sp, #4	; 0x4
         797e8:	eb6d2257 	bl	1bc214c <$AllocateRefHandle(long)>
         797ec:	e58d0000 	str	r0, [sp]
         797f0:	e59f102c 	ldr	r1, [pc, #2c]	; 79824 <AddWordInfo__FP5TViewlT2P11TUnitPublic+0x94>
         797f4:	e1a00004 	mov	r0, r4
         797f8:	eb6d4352 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
         797fc:	e3300002 	teq	r0, #2	; 0x2
         79800:	01a0000d 	moveq	r0, sp
         79804:	0b68bb1b 	bleq	1aa8478 <$AutoAdd(RefVar const &)>
         79808:	e59d0000 	ldr	r0, [sp]
         7980c:	e5904000 	ldr	r4, [r0]
         79810:	eb6d2669 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         79814:	e59d0004 	ldr	r0, [sp, #4]
         79818:	eb6d2667 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7981c:	e1a00004 	mov	r0, r4
         79820:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         79824:	00685378 	rsbeq	r5, r8, r8, ror r3
    */
}

/**
 * Symbol: AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3
 * Address: 0007c130
 */
void globals::AnalyseDiacriticsDirection() {
    /*
         7c130:	e1a0c00d 	mov	ip, sp
         7c134:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         7c138:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         7c13c:	e24cb014 	sub	fp, ip, #20	; 0x14
         7c140:	e1a0a000 	mov	sl, r0
         7c144:	e1a04001 	mov	r4, r1
         7c148:	e1a05003 	mov	r5, r3
         7c14c:	e28b6030 	add	r6, fp, #48	; 0x30
         7c150:	e8960041 	ldmia	r6, {r0, r6}
         7c154:	e59b102c 	ldr	r1, [fp, #44]
         7c158:	e59b9014 	ldr	r9, [fp, #20]
         7c15c:	e24dd00c 	sub	sp, sp, #12	; 0xc
         7c160:	e59b2028 	ldr	r2, [fp, #40]
         7c164:	e1a0c802 	mov	ip, r2, lsl #16
         7c168:	e1a0c84c 	mov	ip, ip, asr #16
         7c16c:	e1a02801 	mov	r2, r1, lsl #16
         7c170:	e1a02842 	mov	r2, r2, asr #16
         7c174:	e58d2004 	str	r2, [sp, #4]
         7c178:	e40dc028 	str	ip, [sp], -#40
         7c17c:	e1a02800 	mov	r2, r0, lsl #16
         7c180:	e1a02842 	mov	r2, r2, asr #16
         7c184:	e3a00000 	mov	r0, #0	; 0x0
         7c188:	e33a0000 	teq	sl, #0	; 0x0
         7c18c:	e58d0024 	str	r0, [sp, #36]
         7c190:	e58d2030 	str	r2, [sp, #48]
         7c194:	13340000 	teqne	r4, #0	; 0x0
         7c198:	0a0001fe 	beq	7c998 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x868>
         7c19c:	e794e085 	ldr	lr, [r4, r5, lsl #1]
         7c1a0:	e1a0e84e 	mov	lr, lr, asr #16
         7c1a4:	e794c089 	ldr	ip, [r4, r9, lsl #1]
         7c1a8:	e1a0c84c 	mov	ip, ip, asr #16
         7c1ac:	e15e000c 	cmp	lr, ip
         7c1b0:	da00000b 	ble	7c1e4 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0xb4>
         7c1b4:	e1a0300e 	mov	r3, lr
         7c1b8:	e79a7085 	ldr	r7, [sl, r5, lsl #1]
         7c1bc:	e1a07847 	mov	r7, r7, asr #16
         7c1c0:	e2872064 	add	r2, r7, #100	; 0x64
         7c1c4:	e1a0100e 	mov	r1, lr
         7c1c8:	e1a00007 	mov	r0, r7
         7c1cc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         7c1d0:	e1a0300c 	mov	r3, ip
         7c1d4:	e79a2089 	ldr	r2, [sl, r9, lsl #1]
         7c1d8:	e1a02842 	mov	r2, r2, asr #16
         7c1dc:	e1a0100e 	mov	r1, lr
         7c1e0:	ea00000a 	b	7c210 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0xe0>
         7c1e4:	e1a0300c 	mov	r3, ip
         7c1e8:	e79a7089 	ldr	r7, [sl, r9, lsl #1]
         7c1ec:	e1a07847 	mov	r7, r7, asr #16
         7c1f0:	e2872064 	add	r2, r7, #100	; 0x64
         7c1f4:	e1a0100c 	mov	r1, ip
         7c1f8:	e1a00007 	mov	r0, r7
         7c1fc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         7c200:	e1a0300e 	mov	r3, lr
         7c204:	e79a2085 	ldr	r2, [sl, r5, lsl #1]
         7c208:	e1a02842 	mov	r2, r2, asr #16
         7c20c:	e1a0100c 	mov	r1, ip
         7c210:	e1a00007 	mov	r0, r7
         7c214:	eb6aa00b 	bl	1b24248 <$cos_pointvect__FiN71>
         7c218:	e28dd010 	add	sp, sp, #16	; 0x10
         7c21c:	e1a07000 	mov	r7, r0
         7c220:	e28d3004 	add	r3, sp, #4	; 0x4
         7c224:	e92d0008 	stmdb	sp!, {r3}
         7c228:	e1a03009 	mov	r3, r9
         7c22c:	e1a02005 	mov	r2, r5
         7c230:	e1a01004 	mov	r1, r4
         7c234:	e1a0000a 	mov	r0, sl
         7c238:	eb6a8725 	bl	1b1ded4 <$ClosedSquare__FPsT1iT3T1>
         7c23c:	e28dd004 	add	sp, sp, #4	; 0x4
         7c240:	e58d0020 	str	r0, [sp, #32]
         7c244:	e1a0300d 	mov	r3, sp
         7c248:	e28d201c 	add	r2, sp, #28	; 0x1c
         7c24c:	e92d000c 	stmdb	sp!, {r2, r3}
         7c250:	e1a03009 	mov	r3, r9
         7c254:	e1a02005 	mov	r2, r5
         7c258:	e1a01004 	mov	r1, r4
         7c25c:	e1a0000a 	mov	r0, sl
         7c260:	eb6a939d 	bl	1b210dc <$LengthOfTraj__FPsT1iT3PlT1>
         7c264:	e28dd008 	add	sp, sp, #8	; 0x8
         7c268:	e1a08000 	mov	r8, r0
         7c26c:	e2852001 	add	r2, r5, #1	; 0x1
         7c270:	e1a03009 	mov	r3, r9
         7c274:	e1a01004 	mov	r1, r4
         7c278:	e1a0000a 	mov	r0, sl
         7c27c:	eb6a8718 	bl	1b1dee4 <$CurvFromSquare__FPsT1iT3>
         7c280:	eb67cd4f 	bl	1a6f7c4 <$HWRAbs(int)>
         7c284:	e1a00800 	mov	r0, r0, lsl #16
         7c288:	e1a00840 	mov	r0, r0, asr #16
         7c28c:	e1a03009 	mov	r3, r9
         7c290:	e1a02005 	mov	r2, r5
         7c294:	e1a01004 	mov	r1, r4
         7c298:	e58d0008 	str	r0, [sp, #8]
         7c29c:	e1a0000a 	mov	r0, sl
         7c2a0:	eb6aa401 	bl	1b252ac <$iMostFarFromChord__FPsT1iT3>
         7c2a4:	e1a03800 	mov	r3, r0, lsl #16
         7c2a8:	e1a03843 	mov	r3, r3, asr #16
         7c2ac:	e58d3018 	str	r3, [sp, #24]
         7c2b0:	e92d0008 	stmdb	sp!, {r3}
         7c2b4:	e1a03009 	mov	r3, r9
         7c2b8:	e1a02005 	mov	r2, r5
         7c2bc:	e1a01004 	mov	r1, r4
         7c2c0:	e1a0000a 	mov	r0, sl
         7c2c4:	eb6a8708 	bl	1b1deec <$CurvMeasure__FPsT1iN23>
         7c2c8:	e28dd004 	add	sp, sp, #4	; 0x4
         7c2cc:	e3e03000 	mvn	r3, #0	; 0x0
         7c2d0:	e58d0014 	str	r0, [sp, #20]
         7c2d4:	e92d0008 	stmdb	sp!, {r3}
         7c2d8:	e1a02005 	mov	r2, r5
         7c2dc:	e1a01004 	mov	r1, r4
         7c2e0:	e1a0000a 	mov	r0, sl
         7c2e4:	e59d301c 	ldr	r3, [sp, #28]
         7c2e8:	eb6a86ff 	bl	1b1deec <$CurvMeasure__FPsT1iN23>
         7c2ec:	e28dd004 	add	sp, sp, #4	; 0x4
         7c2f0:	e3e03000 	mvn	r3, #0	; 0x0
         7c2f4:	e58d0010 	str	r0, [sp, #16]
         7c2f8:	e92d0008 	stmdb	sp!, {r3}
         7c2fc:	e1a03009 	mov	r3, r9
         7c300:	e1a01004 	mov	r1, r4
         7c304:	e1a0000a 	mov	r0, sl
         7c308:	e59d201c 	ldr	r2, [sp, #28]
         7c30c:	eb6a86f6 	bl	1b1deec <$CurvMeasure__FPsT1iN23>
         7c310:	e28dd004 	add	sp, sp, #4	; 0x4
         7c314:	e58d000c 	str	r0, [sp, #12]
         7c318:	e59b0024 	ldr	r0, [fp, #36]
         7c31c:	e5900000 	ldr	r0, [r0]
         7c320:	e3300000 	teq	r0, #0	; 0x0
         7c324:	1a00019b 	bne	7c998 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x868>
         7c328:	e0490005 	sub	r0, r9, r5
         7c32c:	e2800001 	add	r0, r0, #1	; 0x1
         7c330:	e3a0a005 	mov	sl, #5	; 0x5
         7c334:	e59b1028 	ldr	r1, [fp, #40]
         7c338:	e1a01801 	mov	r1, r1, lsl #16
         7c33c:	e1a01841 	mov	r1, r1, asr #16
         7c340:	e2811003 	add	r1, r1, #3	; 0x3
         7c344:	e3500005 	cmp	r0, #5	; 0x5
         7c348:	aa000003 	bge	7c35c <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x22c>
         7c34c:	e28d202c 	add	r2, sp, #44	; 0x2c
         7c350:	e8920005 	ldmia	r2, {r0, r2}
         7c354:	e1500082 	cmp	r0, r2, lsl #1
         7c358:	da00000b 	ble	7c38c <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x25c>
         7c35c:	e59d0028 	ldr	r0, [sp, #40]
         7c360:	e3500000 	cmp	r0, #0	; 0x0
         7c364:	b1a00001 	movlt	r0, r1
         7c368:	e59d202c 	ldr	r2, [sp, #44]
         7c36c:	e1520140 	cmp	r2, r0, asr #2
         7c370:	ca00002a 	bgt	7c420 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x2f0>
         7c374:	e59d0028 	ldr	r0, [sp, #40]
         7c378:	e3500000 	cmp	r0, #0	; 0x0
         7c37c:	b1a00001 	movlt	r0, r1
         7c380:	e59d2030 	ldr	r2, [sp, #48]
         7c384:	e1520140 	cmp	r2, r0, asr #2
         7c388:	ca000024 	bgt	7c420 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x2f0>
         7c38c:	e59d0028 	ldr	r0, [sp, #40]
         7c390:	e3500000 	cmp	r0, #0	; 0x0
         7c394:	b1a00001 	movlt	r0, r1
         7c398:	e59d202c 	ldr	r2, [sp, #44]
         7c39c:	e1520140 	cmp	r2, r0, asr #2
         7c3a0:	ca00000e 	bgt	7c3e0 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x2b0>
         7c3a4:	e59d0028 	ldr	r0, [sp, #40]
         7c3a8:	e3500000 	cmp	r0, #0	; 0x0
         7c3ac:	b1a00001 	movlt	r0, r1
         7c3b0:	e59d2030 	ldr	r2, [sp, #48]
         7c3b4:	e1520140 	cmp	r2, r0, asr #2
         7c3b8:	ca000008 	bgt	7c3e0 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x2b0>
         7c3bc:	e3a00000 	mov	r0, #0	; 0x0
         7c3c0:	e5c60000 	strb	r0, [r6]
         7c3c4:	e3570000 	cmp	r7, #0	; 0x0
         7c3c8:	a3a00004 	movge	r0, #4	; 0x4
         7c3cc:	a5c60001 	strgeb	r0, [r6, #1]
         7c3d0:	e1a0000a 	mov	r0, sl
         7c3d4:	b5c60001 	strltb	r0, [r6, #1]
         7c3d8:	b3a00004 	movlt	r0, #4	; 0x4
         7c3dc:	ea000007 	b	7c400 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x2d0>
         7c3e0:	e3570000 	cmp	r7, #0	; 0x0
         7c3e4:	a3a00004 	movge	r0, #4	; 0x4
         7c3e8:	a5c60000 	strgeb	r0, [r6]
         7c3ec:	e1a0000a 	mov	r0, sl
         7c3f0:	b5c60000 	strltb	r0, [r6]
         7c3f4:	b3a00004 	movlt	r0, #4	; 0x4
         7c3f8:	e5c60001 	strb	r0, [r6, #1]
         7c3fc:	e3a00000 	mov	r0, #0	; 0x0
         7c400:	e5c60002 	strb	r0, [r6, #2]
         7c404:	e3a00003 	mov	r0, #3	; 0x3
         7c408:	e5c60003 	strb	r0, [r6, #3]
         7c40c:	e3a04001 	mov	r4, #1	; 0x1
         7c410:	e5c64004 	strb	r4, [r6, #4]
         7c414:	e3a00007 	mov	r0, #7	; 0x7
         7c418:	e5c60005 	strb	r0, [r6, #5]
         7c41c:	ea000151 	b	7c968 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x838>
         7c420:	e59d0004 	ldr	r0, [sp, #4]
         7c424:	e1b00840 	movs	r0, r0, asr #16
         7c428:	059d0000 	ldreq	r0, [sp]
         7c42c:	01a00840 	moveq	r0, r0, asr #16
         7c430:	03300000 	teqeq	r0, #0	; 0x0
         7c434:	1a00014b 	bne	7c968 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x838>
         7c438:	e59d0008 	ldr	r0, [sp, #8]
         7c43c:	e3500064 	cmp	r0, #100	; 0x64
         7c440:	da00000d 	ble	7c47c <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x34c>
         7c444:	e3a00001 	mov	r0, #1	; 0x1
         7c448:	e0801108 	add	r1, r0, r8, lsl #2
         7c44c:	e3a00003 	mov	r0, #3	; 0x3
         7c450:	eb6cd93a 	bl	1bb2940 <$__rt_sdiv>
         7c454:	e59d101c 	ldr	r1, [sp, #28]
         7c458:	e1500081 	cmp	r0, r1, lsl #1
         7c45c:	da000006 	ble	7c47c <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x34c>
         7c460:	e59d0020 	ldr	r0, [sp, #32]
         7c464:	eb67d100 	bl	1a7086c <$HWRLAbs(long)>
         7c468:	e1500108 	cmp	r0, r8, lsl #2
         7c46c:	c3a00001 	movgt	r0, #1	; 0x1
         7c470:	c59b1024 	ldrgt	r1, [fp, #36]
         7c474:	c5810000 	strgt	r0, [r1]
         7c478:	ca000088 	bgt	7c6a0 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x570>
         7c47c:	e59d0014 	ldr	r0, [sp, #20]
         7c480:	eb67cccf 	bl	1a6f7c4 <$HWRAbs(int)>
         7c484:	e3500001 	cmp	r0, #1	; 0x1
         7c488:	ca00001c 	bgt	7c500 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x3d0>
         7c48c:	e1a00007 	mov	r0, r7
         7c490:	eb67cccb 	bl	1a6f7c4 <$HWRAbs(int)>
         7c494:	e350005a 	cmp	r0, #90	; 0x5a
         7c498:	da00000c 	ble	7c4d0 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x3a0>
         7c49c:	e3a04001 	mov	r4, #1	; 0x1
         7c4a0:	e5c64000 	strb	r4, [r6]
         7c4a4:	e3a00002 	mov	r0, #2	; 0x2
         7c4a8:	e5c60003 	strb	r0, [r6, #3]
         7c4ac:	e3570000 	cmp	r7, #0	; 0x0
         7c4b0:	a3a00004 	movge	r0, #4	; 0x4
         7c4b4:	a5c60001 	strgeb	r0, [r6, #1]
         7c4b8:	e1a0000a 	mov	r0, sl
         7c4bc:	b5c60001 	strltb	r0, [r6, #1]
         7c4c0:	b3a00004 	movlt	r0, #4	; 0x4
         7c4c4:	e5c60002 	strb	r0, [r6, #2]
         7c4c8:	e3a00007 	mov	r0, #7	; 0x7
         7c4cc:	ea000124 	b	7c964 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x834>
         7c4d0:	e3570000 	cmp	r7, #0	; 0x0
         7c4d4:	ba000003 	blt	7c4e8 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x3b8>
         7c4d8:	e3a00004 	mov	r0, #4	; 0x4
         7c4dc:	e5c60000 	strb	r0, [r6]
         7c4e0:	e1a0000a 	mov	r0, sl
         7c4e4:	ea000001 	b	7c4f0 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x3c0>
         7c4e8:	e5c6a000 	strb	sl, [r6]
         7c4ec:	e3a00004 	mov	r0, #4	; 0x4
         7c4f0:	e5c60001 	strb	r0, [r6, #1]
         7c4f4:	e3a00000 	mov	r0, #0	; 0x0
         7c4f8:	e5c60002 	strb	r0, [r6, #2]
         7c4fc:	ea000038 	b	7c5e4 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x4b4>
         7c500:	e59d0010 	ldr	r0, [sp, #16]
         7c504:	eb67ccae 	bl	1a6f7c4 <$HWRAbs(int)>
         7c508:	e3500001 	cmp	r0, #1	; 0x1
         7c50c:	ca00004b 	bgt	7c640 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x510>
         7c510:	e59d000c 	ldr	r0, [sp, #12]
         7c514:	eb67ccaa 	bl	1a6f7c4 <$HWRAbs(int)>
         7c518:	e3500001 	cmp	r0, #1	; 0x1
         7c51c:	ca000047 	bgt	7c640 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x510>
         7c520:	e7940085 	ldr	r0, [r4, r5, lsl #1]
         7c524:	e1a00840 	mov	r0, r0, asr #16
         7c528:	e7941089 	ldr	r1, [r4, r9, lsl #1]
         7c52c:	e1a01841 	mov	r1, r1, asr #16
         7c530:	e1500001 	cmp	r0, r1
         7c534:	a1a00001 	movge	r0, r1
         7c538:	e59d2018 	ldr	r2, [sp, #24]
         7c53c:	e7941082 	ldr	r1, [r4, r2, lsl #1]
         7c540:	e1a01841 	mov	r1, r1, asr #16
         7c544:	e1500001 	cmp	r0, r1
         7c548:	da00001b 	ble	7c5bc <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x48c>
         7c54c:	e1a00007 	mov	r0, r7
         7c550:	eb67cc9b 	bl	1a6f7c4 <$HWRAbs(int)>
         7c554:	e350005a 	cmp	r0, #90	; 0x5a
         7c558:	c59d0020 	ldrgt	r0, [sp, #32]
         7c55c:	c3a0c0c2 	movgt	ip, #194	; 0xc2
         7c560:	c28ccc01 	addgt	ip, ip, #256	; 0x100
         7c564:	c150000c 	cmpgt	r0, ip
         7c568:	c3a04001 	movgt	r4, #1	; 0x1
         7c56c:	c59b0024 	ldrgt	r0, [fp, #36]
         7c570:	c5804000 	strgt	r4, [r0]
         7c574:	e3a00002 	mov	r0, #2	; 0x2
         7c578:	e5c60000 	strb	r0, [r6]
         7c57c:	e3a00000 	mov	r0, #0	; 0x0
         7c580:	e5c60001 	strb	r0, [r6, #1]
         7c584:	e59d001c 	ldr	r0, [sp, #28]
         7c588:	e0800100 	add	r0, r0, r0, lsl #2
         7c58c:	e1500088 	cmp	r0, r8, lsl #1
         7c590:	a3a04001 	movge	r4, #1	; 0x1
         7c594:	a5c64002 	strgeb	r4, [r6, #2]
         7c598:	b3a00003 	movlt	r0, #3	; 0x3
         7c59c:	b5c60002 	strltb	r0, [r6, #2]
         7c5a0:	e3570000 	cmp	r7, #0	; 0x0
         7c5a4:	a3a00004 	movge	r0, #4	; 0x4
         7c5a8:	a5c60003 	strgeb	r0, [r6, #3]
         7c5ac:	e1a0000a 	mov	r0, sl
         7c5b0:	b5c60003 	strltb	r0, [r6, #3]
         7c5b4:	b3a00004 	movlt	r0, #4	; 0x4
         7c5b8:	ea0000e9 	b	7c964 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x834>
         7c5bc:	e59d001c 	ldr	r0, [sp, #28]
         7c5c0:	e0800100 	add	r0, r0, r0, lsl #2
         7c5c4:	e1500088 	cmp	r0, r8, lsl #1
         7c5c8:	aa000008 	bge	7c5f0 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x4c0>
         7c5cc:	e3a00003 	mov	r0, #3	; 0x3
         7c5d0:	e5c60000 	strb	r0, [r6]
         7c5d4:	e3a00000 	mov	r0, #0	; 0x0
         7c5d8:	e5c60001 	strb	r0, [r6, #1]
         7c5dc:	e3a04001 	mov	r4, #1	; 0x1
         7c5e0:	e5c64002 	strb	r4, [r6, #2]
         7c5e4:	e3a00007 	mov	r0, #7	; 0x7
         7c5e8:	e5c60003 	strb	r0, [r6, #3]
         7c5ec:	ea0000dd 	b	7c968 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x838>
         7c5f0:	e1a00007 	mov	r0, r7
         7c5f4:	eb67cc72 	bl	1a6f7c4 <$HWRAbs(int)>
         7c5f8:	e3500050 	cmp	r0, #80	; 0x50
         7c5fc:	ca000002 	bgt	7c60c <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x4dc>
         7c600:	e3570000 	cmp	r7, #0	; 0x0
         7c604:	baffffb7 	blt	7c4e8 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x3b8>
         7c608:	eaffffb2 	b	7c4d8 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x3a8>
         7c60c:	e3a04001 	mov	r4, #1	; 0x1
         7c610:	e5c64000 	strb	r4, [r6]
         7c614:	e3a00003 	mov	r0, #3	; 0x3
         7c618:	e5c60001 	strb	r0, [r6, #1]
         7c61c:	e3570000 	cmp	r7, #0	; 0x0
         7c620:	ba000003 	blt	7c634 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x504>
         7c624:	e3a00004 	mov	r0, #4	; 0x4
         7c628:	e5c60002 	strb	r0, [r6, #2]
         7c62c:	e1a0000a 	mov	r0, sl
         7c630:	ea000054 	b	7c788 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x658>
         7c634:	e5c6a002 	strb	sl, [r6, #2]
         7c638:	e3a00004 	mov	r0, #4	; 0x4
         7c63c:	ea000051 	b	7c788 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x658>
         7c640:	e59d0014 	ldr	r0, [sp, #20]
         7c644:	e3500000 	cmp	r0, #0	; 0x0
         7c648:	b3a00000 	movlt	r0, #0	; 0x0
         7c64c:	a3a00001 	movge	r0, #1	; 0x1
         7c650:	e59d1010 	ldr	r1, [sp, #16]
         7c654:	e3510000 	cmp	r1, #0	; 0x0
         7c658:	b3a01000 	movlt	r1, #0	; 0x0
         7c65c:	a3a01001 	movge	r1, #1	; 0x1
         7c660:	e1300001 	teq	r0, r1
         7c664:	1a000063 	bne	7c7f8 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x6c8>
         7c668:	e59d0014 	ldr	r0, [sp, #20]
         7c66c:	e3500000 	cmp	r0, #0	; 0x0
         7c670:	b3a00000 	movlt	r0, #0	; 0x0
         7c674:	a3a00001 	movge	r0, #1	; 0x1
         7c678:	e59d100c 	ldr	r1, [sp, #12]
         7c67c:	e3510000 	cmp	r1, #0	; 0x0
         7c680:	b3a01000 	movlt	r1, #0	; 0x0
         7c684:	a3a01001 	movge	r1, #1	; 0x1
         7c688:	e1300001 	teq	r0, r1
         7c68c:	1a000059 	bne	7c7f8 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x6c8>
         7c690:	e59d001c 	ldr	r0, [sp, #28]
         7c694:	e0800100 	add	r0, r0, r0, lsl #2
         7c698:	e1500088 	cmp	r0, r8, lsl #1
         7c69c:	aa000004 	bge	7c6b4 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x584>
         7c6a0:	e3a00003 	mov	r0, #3	; 0x3
         7c6a4:	e5c60000 	strb	r0, [r6]
         7c6a8:	e3a00000 	mov	r0, #0	; 0x0
         7c6ac:	e5c60001 	strb	r0, [r6, #1]
         7c6b0:	ea000046 	b	7c7d0 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x6a0>
         7c6b4:	e7940085 	ldr	r0, [r4, r5, lsl #1]
         7c6b8:	e1a00840 	mov	r0, r0, asr #16
         7c6bc:	e7941089 	ldr	r1, [r4, r9, lsl #1]
         7c6c0:	e1a01841 	mov	r1, r1, asr #16
         7c6c4:	e1500001 	cmp	r0, r1
         7c6c8:	a1a00001 	movge	r0, r1
         7c6cc:	e59d2018 	ldr	r2, [sp, #24]
         7c6d0:	e7941082 	ldr	r1, [r4, r2, lsl #1]
         7c6d4:	e1a01841 	mov	r1, r1, asr #16
         7c6d8:	e1500001 	cmp	r0, r1
         7c6dc:	da00001b 	ble	7c750 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x620>
         7c6e0:	e3a00002 	mov	r0, #2	; 0x2
         7c6e4:	e5c60000 	strb	r0, [r6]
         7c6e8:	e3570000 	cmp	r7, #0	; 0x0
         7c6ec:	a3a00004 	movge	r0, #4	; 0x4
         7c6f0:	a5c60001 	strgeb	r0, [r6, #1]
         7c6f4:	e1a0000a 	mov	r0, sl
         7c6f8:	b5c60001 	strltb	r0, [r6, #1]
         7c6fc:	b3a00004 	movlt	r0, #4	; 0x4
         7c700:	e5c60002 	strb	r0, [r6, #2]
         7c704:	e3a00000 	mov	r0, #0	; 0x0
         7c708:	e5c60003 	strb	r0, [r6, #3]
         7c70c:	e59d0020 	ldr	r0, [sp, #32]
         7c710:	eb67d055 	bl	1a7086c <$HWRLAbs(long)>
         7c714:	e1500088 	cmp	r0, r8, lsl #1
         7c718:	da000009 	ble	7c744 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x614>
         7c71c:	e3a04001 	mov	r4, #1	; 0x1
         7c720:	e0841108 	add	r1, r4, r8, lsl #2
         7c724:	e3a00003 	mov	r0, #3	; 0x3
         7c728:	eb6cd884 	bl	1bb2940 <$__rt_sdiv>
         7c72c:	e59d101c 	ldr	r1, [sp, #28]
         7c730:	e1500081 	cmp	r0, r1, lsl #1
         7c734:	c59d0008 	ldrgt	r0, [sp, #8]
         7c738:	c3500019 	cmpgt	r0, #25	; 0x19
         7c73c:	c3a00003 	movgt	r0, #3	; 0x3
         7c740:	ca000087 	bgt	7c964 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x834>
         7c744:	e3a04001 	mov	r4, #1	; 0x1
         7c748:	e5c64004 	strb	r4, [r6, #4]
         7c74c:	ea000085 	b	7c968 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x838>
         7c750:	e1a00007 	mov	r0, r7
         7c754:	eb67cc1a 	bl	1a6f7c4 <$HWRAbs(int)>
         7c758:	e3500050 	cmp	r0, #80	; 0x50
         7c75c:	ca00000b 	bgt	7c790 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x660>
         7c760:	e3570000 	cmp	r7, #0	; 0x0
         7c764:	a3a00004 	movge	r0, #4	; 0x4
         7c768:	a5c60000 	strgeb	r0, [r6]
         7c76c:	e1a0000a 	mov	r0, sl
         7c770:	b5c60000 	strltb	r0, [r6]
         7c774:	b3a00004 	movlt	r0, #4	; 0x4
         7c778:	e5c60001 	strb	r0, [r6, #1]
         7c77c:	e3a00000 	mov	r0, #0	; 0x0
         7c780:	e5c60002 	strb	r0, [r6, #2]
         7c784:	e3a00003 	mov	r0, #3	; 0x3
         7c788:	e5c60003 	strb	r0, [r6, #3]
         7c78c:	eaffff4d 	b	7c4c8 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x398>
         7c790:	e59d0020 	ldr	r0, [sp, #32]
         7c794:	eb67d034 	bl	1a7086c <$HWRLAbs(long)>
         7c798:	e1500088 	cmp	r0, r8, lsl #1
         7c79c:	da00000e 	ble	7c7dc <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x6ac>
         7c7a0:	e3a04001 	mov	r4, #1	; 0x1
         7c7a4:	e0841108 	add	r1, r4, r8, lsl #2
         7c7a8:	e3a00003 	mov	r0, #3	; 0x3
         7c7ac:	eb6cd863 	bl	1bb2940 <$__rt_sdiv>
         7c7b0:	e59d101c 	ldr	r1, [sp, #28]
         7c7b4:	e1500081 	cmp	r0, r1, lsl #1
         7c7b8:	c59d0008 	ldrgt	r0, [sp, #8]
         7c7bc:	c3500019 	cmpgt	r0, #25	; 0x19
         7c7c0:	da000005 	ble	7c7dc <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x6ac>
         7c7c4:	e3a00003 	mov	r0, #3	; 0x3
         7c7c8:	e5c60000 	strb	r0, [r6]
         7c7cc:	e5c64001 	strb	r4, [r6, #1]
         7c7d0:	e3a00007 	mov	r0, #7	; 0x7
         7c7d4:	e5c60002 	strb	r0, [r6, #2]
         7c7d8:	ea000062 	b	7c968 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x838>
         7c7dc:	e3a04001 	mov	r4, #1	; 0x1
         7c7e0:	e5c64000 	strb	r4, [r6]
         7c7e4:	e3a00003 	mov	r0, #3	; 0x3
         7c7e8:	e5c60001 	strb	r0, [r6, #1]
         7c7ec:	e3570000 	cmp	r7, #0	; 0x0
         7c7f0:	baffff8f 	blt	7c634 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x504>
         7c7f4:	eaffff8a 	b	7c624 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x4f4>
         7c7f8:	e7940085 	ldr	r0, [r4, r5, lsl #1]
         7c7fc:	e1a00840 	mov	r0, r0, asr #16
         7c800:	e59d2018 	ldr	r2, [sp, #24]
         7c804:	e7942082 	ldr	r2, [r4, r2, lsl #1]
         7c808:	e1a02842 	mov	r2, r2, asr #16
         7c80c:	e0401002 	sub	r1, r0, r2
         7c810:	e3a05006 	mov	r5, #6	; 0x6
         7c814:	e3510000 	cmp	r1, #0	; 0x0
         7c818:	c7943089 	ldrgt	r3, [r4, r9, lsl #1]
         7c81c:	c1a03843 	movgt	r3, r3, asr #16
         7c820:	c0433002 	subgt	r3, r3, r2
         7c824:	c3530000 	cmpgt	r3, #0	; 0x0
         7c828:	c59dc028 	ldrgt	ip, [sp, #40]
         7c82c:	c35c0000 	cmpgt	ip, #0	; 0x0
         7c830:	da00000c 	ble	7c868 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x738>
         7c834:	e59dc028 	ldr	ip, [sp, #40]
         7c838:	e15c0101 	cmp	ip, r1, lsl #2
         7c83c:	b59dc028 	ldrlt	ip, [sp, #40]
         7c840:	b15c0103 	cmplt	ip, r3, lsl #2
         7c844:	aa000007 	bge	7c868 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x738>
         7c848:	e3a00002 	mov	r0, #2	; 0x2
         7c84c:	e5c60000 	strb	r0, [r6]
         7c850:	e3a04001 	mov	r4, #1	; 0x1
         7c854:	e5c64001 	strb	r4, [r6, #1]
         7c858:	e3a00003 	mov	r0, #3	; 0x3
         7c85c:	e5c60002 	strb	r0, [r6, #2]
         7c860:	e5c65003 	strb	r5, [r6, #3]
         7c864:	eaffff17 	b	7c4c8 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x398>
         7c868:	e7943089 	ldr	r3, [r4, r9, lsl #1]
         7c86c:	e1a03843 	mov	r3, r3, asr #16
         7c870:	e0400003 	sub	r0, r0, r3
         7c874:	e3500000 	cmp	r0, #0	; 0x0
         7c878:	c59d0028 	ldrgt	r0, [sp, #40]
         7c87c:	c3500000 	cmpgt	r0, #0	; 0x0
         7c880:	da00000b 	ble	7c8b4 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x784>
         7c884:	e59d0028 	ldr	r0, [sp, #40]
         7c888:	e1500181 	cmp	r0, r1, lsl #3
         7c88c:	a0420003 	subge	r0, r2, r3
         7c890:	a59dc028 	ldrge	ip, [sp, #40]
         7c894:	a15c0180 	cmpge	ip, r0, lsl #3
         7c898:	aa000005 	bge	7c8b4 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x784>
         7c89c:	e5c65000 	strb	r5, [r6]
         7c8a0:	e3a04001 	mov	r4, #1	; 0x1
         7c8a4:	e5c64001 	strb	r4, [r6, #1]
         7c8a8:	e3a00003 	mov	r0, #3	; 0x3
         7c8ac:	e5c60002 	strb	r0, [r6, #2]
         7c8b0:	ea000028 	b	7c958 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x828>
         7c8b4:	e59d0020 	ldr	r0, [sp, #32]
         7c8b8:	eb67cfeb 	bl	1a7086c <$HWRLAbs(long)>
         7c8bc:	e1500088 	cmp	r0, r8, lsl #1
         7c8c0:	da00000b 	ble	7c8f4 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x7c4>
         7c8c4:	e3a04001 	mov	r4, #1	; 0x1
         7c8c8:	e0841108 	add	r1, r4, r8, lsl #2
         7c8cc:	e3a00003 	mov	r0, #3	; 0x3
         7c8d0:	eb6cd81a 	bl	1bb2940 <$__rt_sdiv>
         7c8d4:	e59d101c 	ldr	r1, [sp, #28]
         7c8d8:	e1500081 	cmp	r0, r1, lsl #1
         7c8dc:	c59d0008 	ldrgt	r0, [sp, #8]
         7c8e0:	c3500019 	cmpgt	r0, #25	; 0x19
         7c8e4:	c3a00003 	movgt	r0, #3	; 0x3
         7c8e8:	c5c60000 	strgtb	r0, [r6]
         7c8ec:	c5c64001 	strgtb	r4, [r6, #1]
         7c8f0:	ca000017 	bgt	7c954 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x824>
         7c8f4:	e59d0020 	ldr	r0, [sp, #32]
         7c8f8:	eb67cfdb 	bl	1a7086c <$HWRLAbs(long)>
         7c8fc:	e1500088 	cmp	r0, r8, lsl #1
         7c900:	da00000f 	ble	7c944 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x814>
         7c904:	e3a04001 	mov	r4, #1	; 0x1
         7c908:	e0841108 	add	r1, r4, r8, lsl #2
         7c90c:	e3a00003 	mov	r0, #3	; 0x3
         7c910:	eb6cd80a 	bl	1bb2940 <$__rt_sdiv>
         7c914:	e59d101c 	ldr	r1, [sp, #28]
         7c918:	e1500081 	cmp	r0, r1, lsl #1
         7c91c:	aa000008 	bge	7c944 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x814>
         7c920:	e3570000 	cmp	r7, #0	; 0x0
         7c924:	a3a00004 	movge	r0, #4	; 0x4
         7c928:	a5c60000 	strgeb	r0, [r6]
         7c92c:	e1a0000a 	mov	r0, sl
         7c930:	b5c60000 	strltb	r0, [r6]
         7c934:	b3a00004 	movlt	r0, #4	; 0x4
         7c938:	e5c60001 	strb	r0, [r6, #1]
         7c93c:	e5c64002 	strb	r4, [r6, #2]
         7c940:	ea000004 	b	7c958 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x828>
         7c944:	e3a04001 	mov	r4, #1	; 0x1
         7c948:	e5c64000 	strb	r4, [r6]
         7c94c:	e3a00003 	mov	r0, #3	; 0x3
         7c950:	e5c60001 	strb	r0, [r6, #1]
         7c954:	e5c65002 	strb	r5, [r6, #2]
         7c958:	e3a00007 	mov	r0, #7	; 0x7
         7c95c:	e5c60003 	strb	r0, [r6, #3]
         7c960:	e3a00002 	mov	r0, #2	; 0x2
         7c964:	e5c60004 	strb	r0, [r6, #4]
         7c968:	e59b0020 	ldr	r0, [fp, #32]
         7c96c:	e5900000 	ldr	r0, [r0]
         7c970:	e1b00840 	movs	r0, r0, asr #16
         7c974:	0a000007 	beq	7c998 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x868>
         7c978:	e59b0024 	ldr	r0, [fp, #36]
         7c97c:	e5900000 	ldr	r0, [r0]
         7c980:	e3300000 	teq	r0, #0	; 0x0
         7c984:	1a000003 	bne	7c998 <AnalyseDiacriticsDirection__FPsT1PUciT4UcT6T1PUisssT3+0x868>
         7c988:	e3a04001 	mov	r4, #1	; 0x1
         7c98c:	e5c64000 	strb	r4, [r6]
         7c990:	e3a00007 	mov	r0, #7	; 0x7
         7c994:	e5c60001 	strb	r0, [r6, #1]
         7c998:	e59d0024 	ldr	r0, [sp, #36]
         7c99c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: AddHistory__FRC6RefVarT1
 * Address: 0007fd20
 */
void globals::AddHistory() {
    /*
         7fd20:	e1a00001 	mov	r0, r1
         7fd24:	ea66ec0a 	b	1a3ad54 <$RecordHistory(RefVar const &)>
    */
}

/**
 * Symbol: Append__FRC6RefVarN21
 * Address: 0008449c
 */
void globals::Append() {
    /*
         8449c:	e1a0c00d 	mov	ip, sp
         844a0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         844a4:	e24cb004 	sub	fp, ip, #4	; 0x4
         844a8:	e1a04001 	mov	r4, r1
         844ac:	e1a05002 	mov	r5, r2
         844b0:	e5910000 	ldr	r0, [r1]
         844b4:	e5900000 	ldr	r0, [r0]
         844b8:	e3300002 	teq	r0, #2	; 0x2
         844bc:	1a00000f 	bne	84500 <Append__FRC6RefVarN21+0x64>
         844c0:	e59f0034 	ldr	r0, [pc, #34]	; 844fc <Append__FRC6RefVarN21+0x60>
         844c4:	e3a01001 	mov	r1, #1	; 0x1
         844c8:	eb6cf71a 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
         844cc:	eb6cf71e 	bl	1bc214c <$AllocateRefHandle(long)>
         844d0:	e1a04000 	mov	r4, r0
         844d4:	e5950000 	ldr	r0, [r5]
         844d8:	e5902000 	ldr	r2, [r0]
         844dc:	e3a01000 	mov	r1, #0	; 0x0
         844e0:	e5940000 	ldr	r0, [r4]
         844e4:	eb6d079b 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         844e8:	e5945000 	ldr	r5, [r4]
         844ec:	e1a00004 	mov	r0, r4
         844f0:	eb6cfb31 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         844f4:	e1a00005 	mov	r0, r5
         844f8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         844fc:	00681f10 	rsbeq	r1, r8, r0, lsl pc
         84500:	e1a01005 	mov	r1, r5
         84504:	e1a00004 	mov	r0, r4
         84508:	eb6cf706 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
         8450c:	e5940000 	ldr	r0, [r4]
         84510:	e5900000 	ldr	r0, [r0]
         84514:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: AddEntry__FRC6RefVarN41
 * Address: 00085510
 */
void globals::AddEntry() {
    /*
         85510:	e1a0c00d 	mov	ip, sp
         85514:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         85518:	e24cb004 	sub	fp, ip, #4	; 0x4
         8551c:	e1a05001 	mov	r5, r1
         85520:	e1a04002 	mov	r4, r2
         85524:	e1a07003 	mov	r7, r3
         85528:	e59b8004 	ldr	r8, [fp, #4]
         8552c:	e24dd008 	sub	sp, sp, #8	; 0x8
         85530:	e3a00002 	mov	r0, #2	; 0x2
         85534:	eb6cf304 	bl	1bc214c <$AllocateRefHandle(long)>
         85538:	e58d0004 	str	r0, [sp, #4]
         8553c:	e3a00002 	mov	r0, #2	; 0x2
         85540:	eb6cf301 	bl	1bc214c <$AllocateRefHandle(long)>
         85544:	e40d0008 	str	r0, [sp], -#8
         85548:	e59f9094 	ldr	r9, [pc, #94]	; 855e4 <AddEntry__FRC6RefVarN41+0xd4>
         8554c:	e5990000 	ldr	r0, [r9]
         85550:	e5900000 	ldr	r0, [r0]
         85554:	eb6cf2fc 	bl	1bc214c <$AllocateRefHandle(long)>
         85558:	e58d0000 	str	r0, [sp]
         8555c:	e1a0600d 	mov	r6, sp
         85560:	e3a0a002 	mov	sl, #2	; 0x2
         85564:	e1a0000a 	mov	r0, sl
         85568:	eb6cf2f7 	bl	1bc214c <$AllocateRefHandle(long)>
         8556c:	e58d0004 	str	r0, [sp, #4]
         85570:	e28d0004 	add	r0, sp, #4	; 0x4
         85574:	e1a01005 	mov	r1, r5
         85578:	e1a02006 	mov	r2, r6
         8557c:	eb66d1d7 	bl	1a39ce0 <$ISATest__FRC6RefVarN21>
         85580:	e2506002 	subs	r6, r0, #2	; 0x2
         85584:	13a06001 	movne	r6, #1	; 0x1
         85588:	e59d0000 	ldr	r0, [sp]
         8558c:	eb6cf70a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         85590:	e59d0004 	ldr	r0, [sp, #4]
         85594:	eb6cf708 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         85598:	e3360000 	teq	r6, #0	; 0x0
         8559c:	0a000012 	beq	855ec <AddEntry__FRC6RefVarN41+0xdc>
         855a0:	e59f6040 	ldr	r6, [pc, #40]	; 855e8 <AddEntry__FRC6RefVarN41+0xd8>
         855a4:	e5960000 	ldr	r0, [r6]
         855a8:	e5901000 	ldr	r1, [r0]
         855ac:	e5980000 	ldr	r0, [r8]
         855b0:	e5900000 	ldr	r0, [r0]
         855b4:	eb6cfb29 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         855b8:	e3300002 	teq	r0, #2	; 0x2
         855bc:	1a00006d 	bne	85778 <AddEntry__FRC6RefVarN41+0x268>
         855c0:	e5990000 	ldr	r0, [r9]
         855c4:	e5901000 	ldr	r1, [r0]
         855c8:	e59d000c 	ldr	r0, [sp, #12]
         855cc:	e5801000 	str	r1, [r0]
         855d0:	e5960000 	ldr	r0, [r6]
         855d4:	e5900000 	ldr	r0, [r0]
         855d8:	e59d1008 	ldr	r1, [sp, #8]
         855dc:	e5810000 	str	r0, [r1]
         855e0:	ea000012 	b	85630 <AddEntry__FRC6RefVarN41+0x120>
         855e4:	00683db8 	streqh	r3, [r8], -#216
         855e8:	00683dc0 	rsbeq	r3, r8, r0, asr #27
         855ec:	e59f619c 	ldr	r6, [pc, #19c]	; 85790 <AddEntry__FRC6RefVarN41+0x280>
         855f0:	e5960000 	ldr	r0, [r6]
         855f4:	e5901000 	ldr	r1, [r0]
         855f8:	e5980000 	ldr	r0, [r8]
         855fc:	e5900000 	ldr	r0, [r0]
         85600:	eb6cfb16 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         85604:	e3300002 	teq	r0, #2	; 0x2
         85608:	1a00005a 	bne	85778 <AddEntry__FRC6RefVarN41+0x268>
         8560c:	e59f0180 	ldr	r0, [pc, #180]	; 85794 <AddEntry__FRC6RefVarN41+0x284>
         85610:	e5900000 	ldr	r0, [r0]
         85614:	e5901000 	ldr	r1, [r0]
         85618:	e59d000c 	ldr	r0, [sp, #12]
         8561c:	e5801000 	str	r1, [r0]
         85620:	e5960000 	ldr	r0, [r6]
         85624:	e5901000 	ldr	r1, [r0]
         85628:	e59d0008 	ldr	r0, [sp, #8]
         8562c:	e5801000 	str	r1, [r0]
         85630:	e59d000c 	ldr	r0, [sp, #12]
         85634:	e5901000 	ldr	r1, [r0]
         85638:	e5980000 	ldr	r0, [r8]
         8563c:	e5900000 	ldr	r0, [r0]
         85640:	eb6cfb06 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         85644:	eb6cf2c0 	bl	1bc214c <$AllocateRefHandle(long)>
         85648:	e1a06000 	mov	r6, r0
         8564c:	e24dd004 	sub	sp, sp, #4	; 0x4
         85650:	e5900000 	ldr	r0, [r0]
         85654:	e3300002 	teq	r0, #2	; 0x2
         85658:	1a00000a 	bne	85688 <AddEntry__FRC6RefVarN41+0x178>
         8565c:	e59f0134 	ldr	r0, [pc, #134]	; 85798 <AddEntry__FRC6RefVarN41+0x288>
         85660:	e3a01000 	mov	r1, #0	; 0x0
         85664:	eb6cf2b3 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
         85668:	eb6cf2b7 	bl	1bc214c <$AllocateRefHandle(long)>
         8566c:	e58d0000 	str	r0, [sp]
         85670:	e1a0200d 	mov	r2, sp
         85674:	e28d1010 	add	r1, sp, #16	; 0x10
         85678:	e1a00008 	mov	r0, r8
         8567c:	eb6d0339 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         85680:	e59d0000 	ldr	r0, [sp]
         85684:	eb6cf6cc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         85688:	e24dd008 	sub	sp, sp, #8	; 0x8
         8568c:	e59f0108 	ldr	r0, [pc, #108]	; 8579c <AddEntry__FRC6RefVarN41+0x28c>
         85690:	e5900000 	ldr	r0, [r0]
         85694:	e5901000 	ldr	r1, [r0]
         85698:	e59f0100 	ldr	r0, [pc, #100]	; 857a0 <AddEntry__FRC6RefVarN41+0x290>
         8569c:	e5900000 	ldr	r0, [r0]
         856a0:	e5900000 	ldr	r0, [r0]
         856a4:	eb6cfaed 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         856a8:	eb6cf2a7 	bl	1bc214c <$AllocateRefHandle(long)>
         856ac:	e58d0000 	str	r0, [sp]
         856b0:	e1a0000d 	mov	r0, sp
         856b4:	eb6cf2ac 	bl	1bc216c <$Clone(RefVar const &)>
         856b8:	eb6cf2a3 	bl	1bc214c <$AllocateRefHandle(long)>
         856bc:	e58d0004 	str	r0, [sp, #4]
         856c0:	e59d0000 	ldr	r0, [sp]
         856c4:	eb6cf6bc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         856c8:	e1a02007 	mov	r2, r7
         856cc:	e59f10d0 	ldr	r1, [pc, #d0]	; 857a4 <AddEntry__FRC6RefVarN41+0x294>
         856d0:	e28d0004 	add	r0, sp, #4	; 0x4
         856d4:	eb6d0323 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         856d8:	e1a02005 	mov	r2, r5
         856dc:	e59f10c4 	ldr	r1, [pc, #c4]	; 857a8 <AddEntry__FRC6RefVarN41+0x298>
         856e0:	e28d0004 	add	r0, sp, #4	; 0x4
         856e4:	eb6d031f 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         856e8:	e24dd008 	sub	sp, sp, #8	; 0x8
         856ec:	e5940000 	ldr	r0, [r4]
         856f0:	e5900000 	ldr	r0, [r0]
         856f4:	e3300002 	teq	r0, #2	; 0x2
         856f8:	0a000003 	beq	8570c <AddEntry__FRC6RefVarN41+0x1fc>
         856fc:	e1a02004 	mov	r2, r4
         85700:	e59f10a4 	ldr	r1, [pc, #a4]	; 857ac <AddEntry__FRC6RefVarN41+0x29c>
         85704:	e28d000c 	add	r0, sp, #12	; 0xc
         85708:	eb6d0316 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         8570c:	e59d0020 	ldr	r0, [sp, #32]
         85710:	e5901000 	ldr	r1, [r0]
         85714:	e5980000 	ldr	r0, [r8]
         85718:	e5900000 	ldr	r0, [r0]
         8571c:	eb6cfacf 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         85720:	eb6cf289 	bl	1bc214c <$AllocateRefHandle(long)>
         85724:	e58d0000 	str	r0, [sp]
         85728:	e1a0000d 	mov	r0, sp
         8572c:	e28d100c 	add	r1, sp, #12	; 0xc
         85730:	eb6cf27c 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
         85734:	e59d0000 	ldr	r0, [sp]
         85738:	eb6cf69f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8573c:	e3a00004 	mov	r0, #4	; 0x4
         85740:	eb6cf281 	bl	1bc214c <$AllocateRefHandle(long)>
         85744:	e58d0004 	str	r0, [sp, #4]
         85748:	e28d2004 	add	r2, sp, #4	; 0x4
         8574c:	e28d101c 	add	r1, sp, #28	; 0x1c
         85750:	e1a00008 	mov	r0, r8
         85754:	eb6d0303 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         85758:	e59d0004 	ldr	r0, [sp, #4]
         8575c:	eb6cf696 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         85760:	e28dd008 	add	sp, sp, #8	; 0x8
         85764:	e59d0004 	ldr	r0, [sp, #4]
         85768:	eb6cf693 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8576c:	e28dd00c 	add	sp, sp, #12	; 0xc
         85770:	e1a00006 	mov	r0, r6
         85774:	eb6cf690 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         85778:	e59d0008 	ldr	r0, [sp, #8]
         8577c:	eb6cf68e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         85780:	e59d000c 	ldr	r0, [sp, #12]
         85784:	eb6cf68c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         85788:	e1a0000a 	mov	r0, sl
         8578c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         85790:	00683ee8 	rsbeq	r3, r8, r8, ror #29
         85794:	00683ef0 	streqd	r3, [r8], -#224
         85798:	00681f10 	rsbeq	r1, r8, r0, lsl pc
         8579c:	00683148 	rsbeq	r3, r8, r8, asr #2
         857a0:	00681348 	rsbeq	r1, r8, r8, asr #6
         857a4:	00681df8 	streqd	r1, [r8], -#216
         857a8:	00682450 	rsbeq	r2, r8, r0, asr r4
         857ac:	00683d70 	rsbeq	r3, r8, r0, ror sp
    */
}

/**
 * Symbol: AddException__FRC6RefVarT1lT3
 * Address: 0008ae5c
 */
void globals::AddException() {
    /*
         8ae5c:	e1a0c00d 	mov	ip, sp
         8ae60:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         8ae64:	e24cb004 	sub	fp, ip, #4	; 0x4
         8ae68:	e1a05000 	mov	r5, r0
         8ae6c:	e1a06002 	mov	r6, r2
         8ae70:	e1a04003 	mov	r4, r3
         8ae74:	e24dd004 	sub	sp, sp, #4	; 0x4
         8ae78:	e5910000 	ldr	r0, [r1]
         8ae7c:	e5900000 	ldr	r0, [r0]
         8ae80:	e3a01001 	mov	r1, #1	; 0x1
         8ae84:	eb6ce4f2 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         8ae88:	eb6cdcaf 	bl	1bc214c <$AllocateRefHandle(long)>
         8ae8c:	e58d0000 	str	r0, [sp]
         8ae90:	e5900000 	ldr	r0, [r0]
         8ae94:	e3300002 	teq	r0, #2	; 0x2
         8ae98:	0a000020 	beq	8af20 <AddException__FRC6RefVarT1lT3+0xc4>
         8ae9c:	e59f1088 	ldr	r1, [pc, #88]	; 8af2c <AddException__FRC6RefVarT1lT3+0xd0>
         8aea0:	e5911000 	ldr	r1, [r1]
         8aea4:	e5911000 	ldr	r1, [r1]
         8aea8:	eb6ce4ec 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         8aeac:	e3100003 	tst	r0, #3	; 0x3
         8aeb0:	01a00140 	moveq	r0, r0, asr #2
         8aeb4:	0a000000 	beq	8aebc <AddException__FRC6RefVarT1lT3+0x60>
         8aeb8:	eb6cdc97 	bl	1bc211c <$_RINTError(long)>
         8aebc:	e1500004 	cmp	r0, r4
         8aec0:	aa000016 	bge	8af20 <AddException__FRC6RefVarT1lT3+0xc4>
         8aec4:	e1500006 	cmp	r0, r6
         8aec8:	ba000014 	blt	8af20 <AddException__FRC6RefVarT1lT3+0xc4>
         8aecc:	e24dd008 	sub	sp, sp, #8	; 0x8
         8aed0:	e3a04002 	mov	r4, #2	; 0x2
         8aed4:	e1a00004 	mov	r0, r4
         8aed8:	eb6cdc9b 	bl	1bc214c <$AllocateRefHandle(long)>
         8aedc:	e58d0000 	str	r0, [sp]
         8aee0:	e1a0300d 	mov	r3, sp
         8aee4:	e59f2040 	ldr	r2, [pc, #40]	; 8af2c <AddException__FRC6RefVarT1lT3+0xd0>
         8aee8:	e92d000c 	stmdb	sp!, {r2, r3}
         8aeec:	e1a00004 	mov	r0, r4
         8aef0:	eb6cdc95 	bl	1bc214c <$AllocateRefHandle(long)>
         8aef4:	e58d000c 	str	r0, [sp, #12]
         8aef8:	e28d000c 	add	r0, sp, #12	; 0xc
         8aefc:	e59f302c 	ldr	r3, [pc, #2c]	; 8af30 <AddException__FRC6RefVarT1lT3+0xd4>
         8af00:	e28d2010 	add	r2, sp, #16	; 0x10
         8af04:	e1a01005 	mov	r1, r5
         8af08:	eb0a3277 	bl	3178ec <FBInsert>
         8af0c:	e5bd0008 	ldr	r0, [sp, #8]!
         8af10:	eb6ce0a9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8af14:	e59d0004 	ldr	r0, [sp, #4]
         8af18:	eb6ce0a7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8af1c:	e28dd008 	add	sp, sp, #8	; 0x8
         8af20:	e59d0000 	ldr	r0, [sp]
         8af24:	eb6ce0a4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8af28:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         8af2c:	00683978 	rsbeq	r3, r8, r8, ror r9
         8af30:	00681cc8 	rsbeq	r1, r8, r8, asr #25
    */
}

/**
 * Symbol: AddClientToDCR(unsigned long, long)
 * Address: 0009c57c
 */
AddClientToDCR(unsigned long, long) {
    /*
         9c57c:	e3510000 	cmp	r1, #0	; 0x0
         9c580:	b1a0f00e 	movlt	pc, lr
         9c584:	e1a01081 	mov	r1, r1, lsl #1
         9c588:	e3a02001 	mov	r2, #1	; 0x1
         9c58c:	e1800112 	orr	r0, r0, r2, lsl r1
         9c590:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: AddManagerToDCR(unsigned long, long)
 * Address: 0009c594
 */
AddManagerToDCR(unsigned long, long) {
    /*
         9c594:	e3510000 	cmp	r1, #0	; 0x0
         9c598:	b1a0f00e 	movlt	pc, lr
         9c59c:	e1a01081 	mov	r1, r1, lsl #1
         9c5a0:	e3a02003 	mov	r2, #3	; 0x3
         9c5a4:	e1800112 	orr	r0, r0, r2, lsl r1
         9c5a8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: AtEndOfLine__FP5TRectT1
 * Address: 000a1aa4
 */
void globals::AtEndOfLine() {
    /*
         a1aa4:	e1a0c00d 	mov	ip, sp
         a1aa8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         a1aac:	e24cb004 	sub	fp, ip, #4	; 0x4
         a1ab0:	e1a04001 	mov	r4, r1
         a1ab4:	e5912002 	ldr	r2, [r1, #2]
         a1ab8:	e1a02842 	mov	r2, r2, asr #16
         a1abc:	e5911006 	ldr	r1, [r1, #6]
         a1ac0:	e0821841 	add	r1, r2, r1, asr #16
         a1ac4:	e5902006 	ldr	r2, [r0, #6]
         a1ac8:	e1a02842 	mov	r2, r2, asr #16
         a1acc:	e3a05000 	mov	r5, #0	; 0x0
         a1ad0:	e15200c1 	cmp	r2, r1, asr #1
         a1ad4:	ca000012 	bgt	a1b24 <AtEndOfLine__FP5TRectT1+0x80>
         a1ad8:	e1a06000 	mov	r6, r0
         a1adc:	e5941004 	ldr	r1, [r4, #4]
         a1ae0:	e1a01821 	mov	r1, r1, lsr #16
         a1ae4:	e5940000 	ldr	r0, [r4]
         a1ae8:	e1a00820 	mov	r0, r0, lsr #16
         a1aec:	e0410000 	sub	r0, r1, r0
         a1af0:	e1a00800 	mov	r0, r0, lsl #16
         a1af4:	e1a00840 	mov	r0, r0, asr #16
         a1af8:	e1a000c0 	mov	r0, r0, asr #1
         a1afc:	e2602000 	rsb	r2, r0, #0	; 0x0
         a1b00:	e1a00006 	mov	r0, r6
         a1b04:	e1a01005 	mov	r1, r5
         a1b08:	eb6abb4c 	bl	1b50840 <$InsetRect__FP4RectlT2>
         a1b0c:	e1a01004 	mov	r1, r4
         a1b10:	e1a00006 	mov	r0, r6
         a1b14:	eb68cbc1 	bl	1ad4a20 <$TestLineOverlap__FP5TRectT1>
         a1b18:	e3300001 	teq	r0, #1	; 0x1
         a1b1c:	03a00001 	moveq	r0, #1	; 0x1
         a1b20:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         a1b24:	e1a00005 	mov	r0, r5
         a1b28:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: AddToLine(RefVar const &, long, SortStuff *)
 * Address: 000a3a4c
 */
AddToLine(RefVar const &, long, SortStuff *) {
    /*
         a3a4c:	e1a0c00d 	mov	ip, sp
         a3a50:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         a3a54:	e24cb004 	sub	fp, ip, #4	; 0x4
         a3a58:	e1a05000 	mov	r5, r0
         a3a5c:	e1a06001 	mov	r6, r1
         a3a60:	e1a04002 	mov	r4, r2
         a3a64:	e24dd014 	sub	sp, sp, #20	; 0x14
         a3a68:	eb68af54 	bl	1acf7c0 <$FindInsertPosition(RefVar const &, long, SortStuff *)>
         a3a6c:	e58d0010 	str	r0, [sp, #16]
         a3a70:	e24dd008 	sub	sp, sp, #8	; 0x8
         a3a74:	e2840008 	add	r0, r4, #8	; 0x8
         a3a78:	e1a08000 	mov	r8, r0
         a3a7c:	e5900000 	ldr	r0, [r0]
         a3a80:	e5900000 	ldr	r0, [r0]
         a3a84:	e1a01006 	mov	r1, r6
         a3a88:	eb6c81f1 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         a3a8c:	eb6c79ae 	bl	1bc214c <$AllocateRefHandle(long)>
         a3a90:	e58d0000 	str	r0, [sp]
         a3a94:	e1a0000d 	mov	r0, sp
         a3a98:	e28d1008 	add	r1, sp, #8	; 0x8
         a3a9c:	eb67c3f5 	bl	1a94a78 <$FromObject(RefVar const &, TRect &)>
         a3aa0:	e59d0000 	ldr	r0, [sp]
         a3aa4:	eb6c7dc4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a3aa8:	e1a00005 	mov	r0, r5
         a3aac:	eb68b368 	bl	1ad0854 <$GetKidBounds(RefVar const &)>
         a3ab0:	eb6c79a5 	bl	1bc214c <$AllocateRefHandle(long)>
         a3ab4:	e58d0004 	str	r0, [sp, #4]
         a3ab8:	e28d0004 	add	r0, sp, #4	; 0x4
         a3abc:	e28d1010 	add	r1, sp, #16	; 0x10
         a3ac0:	eb67c3ec 	bl	1a94a78 <$FromObject(RefVar const &, TRect &)>
         a3ac4:	e59d0004 	ldr	r0, [sp, #4]
         a3ac8:	eb6c7dbb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a3acc:	e28d1010 	add	r1, sp, #16	; 0x10
         a3ad0:	e28d0008 	add	r0, sp, #8	; 0x8
         a3ad4:	eb68c3d9 	bl	1ad4a40 <$UpdateLineRect__FP5TRectT1>
         a3ad8:	e28d0008 	add	r0, sp, #8	; 0x8
         a3adc:	eb6d2f2e 	bl	1bef79c <$ToObject(TRect const &)>
         a3ae0:	eb6c7999 	bl	1bc214c <$AllocateRefHandle(long)>
         a3ae4:	e1a07000 	mov	r7, r0
         a3ae8:	e5902000 	ldr	r2, [r0]
         a3aec:	e5980000 	ldr	r0, [r8]
         a3af0:	e5900000 	ldr	r0, [r0]
         a3af4:	e1a01006 	mov	r1, r6
         a3af8:	eb6c8a16 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         a3afc:	e1a00007 	mov	r0, r7
         a3b00:	eb6c7dad 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a3b04:	e2840004 	add	r0, r4, #4	; 0x4
         a3b08:	e1a08000 	mov	r8, r0
         a3b0c:	e5900000 	ldr	r0, [r0]
         a3b10:	e5900000 	ldr	r0, [r0]
         a3b14:	eb6c85e4 	bl	1bc52ac <$Length(long)>
         a3b18:	e1a09000 	mov	r9, r0
         a3b1c:	e2866001 	add	r6, r6, #1	; 0x1
         a3b20:	e1560000 	cmp	r6, r0
         a3b24:	aa000016 	bge	a3b84 <AddToLine(RefVar const &, long, SortStuff *)+0x138>
         a3b28:	e1a0a008 	mov	sl, r8
         a3b2c:	e5980000 	ldr	r0, [r8]
         a3b30:	e5900000 	ldr	r0, [r0]
         a3b34:	e1a01006 	mov	r1, r6
         a3b38:	eb6c81c5 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         a3b3c:	e3100003 	tst	r0, #3	; 0x3
         a3b40:	01a00140 	moveq	r0, r0, asr #2
         a3b44:	0a000000 	beq	a3b4c <AddToLine(RefVar const &, long, SortStuff *)+0x100>
         a3b48:	eb6c7973 	bl	1bc211c <$_RINTError(long)>
         a3b4c:	e2800001 	add	r0, r0, #1	; 0x1
         a3b50:	e1a00100 	mov	r0, r0, lsl #2
         a3b54:	eb6c797c 	bl	1bc214c <$AllocateRefHandle(long)>
         a3b58:	e1a07000 	mov	r7, r0
         a3b5c:	e5902000 	ldr	r2, [r0]
         a3b60:	e59a0000 	ldr	r0, [sl]
         a3b64:	e5900000 	ldr	r0, [r0]
         a3b68:	e1a01006 	mov	r1, r6
         a3b6c:	eb6c89f9 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         a3b70:	e1a00007 	mov	r0, r7
         a3b74:	eb6c7d90 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a3b78:	e2866001 	add	r6, r6, #1	; 0x1
         a3b7c:	e1560009 	cmp	r6, r9
         a3b80:	baffffe8 	blt	a3b28 <AddToLine(RefVar const &, long, SortStuff *)+0xdc>
         a3b84:	e1a02005 	mov	r2, r5
         a3b88:	e1a00004 	mov	r0, r4
         a3b8c:	e59d1018 	ldr	r1, [sp, #24]
         a3b90:	eb0214c2 	bl	128ea0 <ArrayInsertAt(RefVar const &, long, long)>
         a3b94:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: AtEndOfLine(RefVar const &, long, SortStuff *)
 * Address: 000ab218
 */
AtEndOfLine(RefVar const &, long, SortStuff *) {
    /*
         ab218:	e1a0c00d 	mov	ip, sp
         ab21c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         ab220:	e24cb004 	sub	fp, ip, #4	; 0x4
         ab224:	e1a05001 	mov	r5, r1
         ab228:	e1a04002 	mov	r4, r2
         ab22c:	e24dd018 	sub	sp, sp, #24	; 0x18
         ab230:	eb689587 	bl	1ad0854 <$GetKidBounds(RefVar const &)>
         ab234:	eb6c5bc4 	bl	1bc214c <$AllocateRefHandle(long)>
         ab238:	e58d0000 	str	r0, [sp]
         ab23c:	e1a0000d 	mov	r0, sp
         ab240:	e28d1010 	add	r1, sp, #16	; 0x10
         ab244:	eb67a60b 	bl	1a94a78 <$FromObject(RefVar const &, TRect &)>
         ab248:	e59d0000 	ldr	r0, [sp]
         ab24c:	eb6c5fda 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ab250:	e5940008 	ldr	r0, [r4, #8]
         ab254:	e5900000 	ldr	r0, [r0]
         ab258:	e1a01005 	mov	r1, r5
         ab25c:	eb6c63fc 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         ab260:	eb6c5bb9 	bl	1bc214c <$AllocateRefHandle(long)>
         ab264:	e58d0004 	str	r0, [sp, #4]
         ab268:	e28d0004 	add	r0, sp, #4	; 0x4
         ab26c:	e28d1008 	add	r1, sp, #8	; 0x8
         ab270:	eb67a600 	bl	1a94a78 <$FromObject(RefVar const &, TRect &)>
         ab274:	e59d0004 	ldr	r0, [sp, #4]
         ab278:	eb6c5fcf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ab27c:	e28d1010 	add	r1, sp, #16	; 0x10
         ab280:	e28d0008 	add	r0, sp, #8	; 0x8
         ab284:	eb6888ff 	bl	1acd688 <$AtEndOfLine__FP5TRectT1>
         ab288:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: AddExceptionHandler
 * Address: 000b01a8
 */
void globals::AddExceptionHandler() {
    /*
         b01a8:	e1a0c00d 	mov	ip, sp
         b01ac:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b01b0:	e24cb004 	sub	fp, ip, #4	; 0x4
         b01b4:	e1a04000 	mov	r4, r0
         b01b8:	eb6cc3c9 	bl	1be10e4 <$GetExceptionHandler(void)>
         b01bc:	e5840004 	str	r0, [r4, #4]
         b01c0:	e1a00004 	mov	r0, r4
         b01c4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         b01c8:	ea6cc7ea 	b	1be2178 <$SetExceptionHandler(CatchHeader *)>
    */
}

/**
 * Symbol: AllocPCSpyTimer__FPvT1
 * Address: 000b1a6c
 */
void globals::AllocPCSpyTimer() {
    /*
         b1a6c:	e1a0c00d 	mov	ip, sp
         b1a70:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         b1a74:	e24cb004 	sub	fp, ip, #4	; 0x4
         b1a78:	e59f4040 	ldr	r4, [pc, #40]	; b1ac0 <AllocPCSpyTimer__FPvT1+0x54>
         b1a7c:	e3a06000 	mov	r6, #0	; 0x0
         b1a80:	e5942004 	ldr	r2, [r4, #4]
         b1a84:	e3320000 	teq	r2, #0	; 0x0
         b1a88:	1a00000d 	bne	b1ac4 <AllocPCSpyTimer__FPvT1+0x58>
         b1a8c:	e3e05000 	mvn	r5, #0	; 0x0
         b1a90:	e5943000 	ldr	r3, [r4]
         b1a94:	e3330000 	teq	r3, #0	; 0x0
         b1a98:	0a000006 	beq	b1ab8 <AllocPCSpyTimer__FPvT1+0x4c>
         b1a9c:	e1a02001 	mov	r2, r1
         b1aa0:	e1a01000 	mov	r1, r0
         b1aa4:	e1a00003 	mov	r0, r3
         b1aa8:	eb6562ab 	bl	1a0a55c <TFIQTimer::$AcquireFIQTimer(void (*)(void *, unsigned long), void *)>
         b1aac:	e5a40004 	str	r0, [r4, #4]!
         b1ab0:	e3300000 	teq	r0, #0	; 0x0
         b1ab4:	1a000002 	bne	b1ac4 <AllocPCSpyTimer__FPvT1+0x58>
         b1ab8:	e1a00005 	mov	r0, r5
         b1abc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         b1ac0:	0c100d28 	ldceq	13, cr0, [r0], -#160
         b1ac4:	e1a00006 	mov	r0, r6
         b1ac8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: AggregateSize(RefVar const &, unsigned long *)
 * Address: 000ce38c
 */
AggregateSize(RefVar const &, unsigned long *) {
    /*
         ce38c:	e1a0c00d 	mov	ip, sp
         ce390:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         ce394:	e24cb004 	sub	fp, ip, #4	; 0x4
         ce398:	e1a04000 	mov	r4, r0
         ce39c:	e1a05001 	mov	r5, r1
         ce3a0:	e3a07000 	mov	r7, #0	; 0x0
         ce3a4:	eb6c9578 	bl	1bf398c <$IsArray(RefVar const &)>
         ce3a8:	e3300000 	teq	r0, #0	; 0x0
         ce3ac:	0a000031 	beq	ce478 <AggregateSize(RefVar const &, unsigned long *)+0xec>
         ce3b0:	e24dd004 	sub	sp, sp, #4	; 0x4
         ce3b4:	e3a01000 	mov	r1, #0	; 0x0
         ce3b8:	e5940000 	ldr	r0, [r4]
         ce3bc:	e5900000 	ldr	r0, [r0]
         ce3c0:	eb6bd7a3 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         ce3c4:	eb6bcf60 	bl	1bc214c <$AllocateRefHandle(long)>
         ce3c8:	e58d0000 	str	r0, [sp]
         ce3cc:	e5900000 	ldr	r0, [r0]
         ce3d0:	e2001003 	and	r1, r0, #3	; 0x3
         ce3d4:	e3510000 	cmp	r1, #0	; 0x0
         ce3d8:	1a000003 	bne	ce3ec <AggregateSize(RefVar const &, unsigned long *)+0x60>
         ce3dc:	01a00140 	moveq	r0, r0, asr #2
         ce3e0:	0a000003 	beq	ce3f4 <AggregateSize(RefVar const &, unsigned long *)+0x68>
         ce3e4:	eb6bcf4c 	bl	1bc211c <$_RINTError(long)>
         ce3e8:	ea000001 	b	ce3f4 <AggregateSize(RefVar const &, unsigned long *)+0x68>
         ce3ec:	e1a0000d 	mov	r0, sp
         ce3f0:	eb6b6804 	bl	1ba8408 <$TranslateTypeMarshalingSymbol(RefVar const &)>
         ce3f4:	e1a06000 	mov	r6, r0
         ce3f8:	e59d0000 	ldr	r0, [sp]
         ce3fc:	eb6bd36e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ce400:	e336000a 	teq	r6, #10	; 0xa
         ce404:	1336000b 	teqne	r6, #11	; 0xb
         ce408:	1a000019 	bne	ce474 <AggregateSize(RefVar const &, unsigned long *)+0xe8>
         ce40c:	e24dd008 	sub	sp, sp, #8	; 0x8
         ce410:	e3a06002 	mov	r6, #2	; 0x2
         ce414:	e1a00006 	mov	r0, r6
         ce418:	eb6bcf4b 	bl	1bc214c <$AllocateRefHandle(long)>
         ce41c:	e58d0000 	str	r0, [sp]
         ce420:	e1a0300d 	mov	r3, sp
         ce424:	e3a02002 	mov	r2, #2	; 0x2
         ce428:	e3a01001 	mov	r1, #1	; 0x1
         ce42c:	e3a00000 	mov	r0, #0	; 0x0
         ce430:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         ce434:	e1a03005 	mov	r3, r5
         ce438:	e92d0008 	stmdb	sp!, {r3}
         ce43c:	e1a00006 	mov	r0, r6
         ce440:	eb6bcf41 	bl	1bc214c <$AllocateRefHandle(long)>
         ce444:	e58d0018 	str	r0, [sp, #24]
         ce448:	e28d0018 	add	r0, sp, #24	; 0x18
         ce44c:	e1a01004 	mov	r1, r4
         ce450:	e3a03000 	mov	r3, #0	; 0x0
         ce454:	e3a02000 	mov	r2, #0	; 0x0
         ce458:	eb6b63cc 	bl	1ba7390 <$MarshalAggregrate__FRC6RefVarT1PPvT3PUlT5liT1>
         ce45c:	e1a07000 	mov	r7, r0
         ce460:	e5bd0014 	ldr	r0, [sp, #20]!
         ce464:	eb6bd354 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ce468:	e59d0004 	ldr	r0, [sp, #4]
         ce46c:	eb6bd352 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ce470:	e28dd008 	add	sp, sp, #8	; 0x8
         ce474:	e28dd004 	add	sp, sp, #4	; 0x4
         ce478:	e1a00007 	mov	r0, r7
         ce47c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: AlignBuffer(void **, unsigned long *, unsigned long)
 * Address: 000ce968
 */
AlignBuffer(void **, unsigned long *, unsigned long) {
    /*
         ce968:	e2423001 	sub	r3, r2, #1	; 0x1
         ce96c:	e1e03003 	mvn	r3, r3
         ce970:	e3300000 	teq	r0, #0	; 0x0
         ce974:	0a000004 	beq	ce98c <AlignBuffer(void **, unsigned long *, unsigned long)+0x24>
         ce978:	e590c000 	ldr	ip, [r0]
         ce97c:	e08cc002 	add	ip, ip, r2
         ce980:	e24cc001 	sub	ip, ip, #1	; 0x1
         ce984:	e00cc003 	and	ip, ip, r3
         ce988:	e580c000 	str	ip, [r0]
         ce98c:	e3310000 	teq	r1, #0	; 0x0
         ce990:	01a0f00e 	moveq	pc, lr
         ce994:	e5910000 	ldr	r0, [r1]
         ce998:	e0800002 	add	r0, r0, r2
         ce99c:	e2400001 	sub	r0, r0, #1	; 0x1
         ce9a0:	e0000003 	and	r0, r0, r3
         ce9a4:	e5810000 	str	r0, [r1]
         ce9a8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: AlignForType(void **, unsigned long *, RefVar const &)
 * Address: 000ce9b0
 */
AlignForType(void **, unsigned long *, RefVar const &) {
    /*
         ce9b0:	e1a0c00d 	mov	ip, sp
         ce9b4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         ce9b8:	e24cb004 	sub	fp, ip, #4	; 0x4
         ce9bc:	e1a06000 	mov	r6, r0
         ce9c0:	e1a05001 	mov	r5, r1
         ce9c4:	e1a04002 	mov	r4, r2
         ce9c8:	e1a00002 	mov	r0, r2
         ce9cc:	eb6c93ee 	bl	1bf398c <$IsArray(RefVar const &)>
         ce9d0:	e3300000 	teq	r0, #0	; 0x0
         ce9d4:	0a00002c 	beq	cea8c <AlignForType(void **, unsigned long *, RefVar const &)+0xdc>
         ce9d8:	e24dd004 	sub	sp, sp, #4	; 0x4
         ce9dc:	e3a01000 	mov	r1, #0	; 0x0
         ce9e0:	e5940000 	ldr	r0, [r4]
         ce9e4:	e5900000 	ldr	r0, [r0]
         ce9e8:	eb6bd619 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         ce9ec:	eb6bcdd6 	bl	1bc214c <$AllocateRefHandle(long)>
         ce9f0:	e58d0000 	str	r0, [sp]
         ce9f4:	e5900000 	ldr	r0, [r0]
         ce9f8:	e2001003 	and	r1, r0, #3	; 0x3
         ce9fc:	e3510000 	cmp	r1, #0	; 0x0
         cea00:	1a000003 	bne	cea14 <AlignForType(void **, unsigned long *, RefVar const &)+0x64>
         cea04:	01a00140 	moveq	r0, r0, asr #2
         cea08:	0a000003 	beq	cea1c <AlignForType(void **, unsigned long *, RefVar const &)+0x6c>
         cea0c:	eb6bcdc2 	bl	1bc211c <$_RINTError(long)>
         cea10:	ea000001 	b	cea1c <AlignForType(void **, unsigned long *, RefVar const &)+0x6c>
         cea14:	e1a0000d 	mov	r0, sp
         cea18:	eb6b667a 	bl	1ba8408 <$TranslateTypeMarshalingSymbol(RefVar const &)>
         cea1c:	e1a07000 	mov	r7, r0
         cea20:	e59d0000 	ldr	r0, [sp]
         cea24:	eb6bd1e4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         cea28:	e337000a 	teq	r7, #10	; 0xa
         cea2c:	0a00000f 	beq	cea70 <AlignForType(void **, unsigned long *, RefVar const &)+0xc0>
         cea30:	e337000b 	teq	r7, #11	; 0xb
         cea34:	e24dd004 	sub	sp, sp, #4	; 0x4
         cea38:	1a000012 	bne	cea88 <AlignForType(void **, unsigned long *, RefVar const &)+0xd8>
         cea3c:	e3a01001 	mov	r1, #1	; 0x1
         cea40:	e5940000 	ldr	r0, [r4]
         cea44:	e5900000 	ldr	r0, [r0]
         cea48:	eb6bd601 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         cea4c:	eb6bcdbe 	bl	1bc214c <$AllocateRefHandle(long)>
         cea50:	e58d0000 	str	r0, [sp]
         cea54:	e1a0200d 	mov	r2, sp
         cea58:	e1a01005 	mov	r1, r5
         cea5c:	e1a00006 	mov	r0, r6
         cea60:	eb6b5e2f 	bl	1ba6324 <$AlignForType(void **, unsigned long *, RefVar const &)>
         cea64:	e59d0000 	ldr	r0, [sp]
         cea68:	eb6bd1d3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         cea6c:	ea000005 	b	cea88 <AlignForType(void **, unsigned long *, RefVar const &)+0xd8>
         cea70:	e24dd004 	sub	sp, sp, #4	; 0x4
         cea74:	e1a01005 	mov	r1, r5
         cea78:	e1a00006 	mov	r0, r6
         cea7c:	e3a02004 	mov	r2, #4	; 0x4
         cea80:	eb6b5e26 	bl	1ba6320 <$AlignBuffer(void **, unsigned long *, unsigned long)>
         cea84:	eaffffff 	b	cea88 <AlignForType(void **, unsigned long *, RefVar const &)+0xd8>
         cea88:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         cea8c:	e5940000 	ldr	r0, [r4]
         cea90:	e5900000 	ldr	r0, [r0]
         cea94:	e2001003 	and	r1, r0, #3	; 0x3
         cea98:	e3510000 	cmp	r1, #0	; 0x0
         cea9c:	1a000003 	bne	ceab0 <AlignForType(void **, unsigned long *, RefVar const &)+0x100>
         ceaa0:	01a00140 	moveq	r0, r0, asr #2
         ceaa4:	0a000003 	beq	ceab8 <AlignForType(void **, unsigned long *, RefVar const &)+0x108>
         ceaa8:	eb6bcd9b 	bl	1bc211c <$_RINTError(long)>
         ceaac:	ea000001 	b	ceab8 <AlignForType(void **, unsigned long *, RefVar const &)+0x108>
         ceab0:	e1a00004 	mov	r0, r4
         ceab4:	eb6b6653 	bl	1ba8408 <$TranslateTypeMarshalingSymbol(RefVar const &)>
         ceab8:	e3300003 	teq	r0, #3	; 0x3
         ceabc:	01a01005 	moveq	r1, r5
         ceac0:	01a00006 	moveq	r0, r6
         ceac4:	03a02002 	moveq	r2, #2	; 0x2
         ceac8:	0a000006 	beq	ceae8 <AlignForType(void **, unsigned long *, RefVar const &)+0x138>
         ceacc:	e3300004 	teq	r0, #4	; 0x4
         cead0:	13300005 	teqne	r0, #5	; 0x5
         cead4:	1330000d 	teqne	r0, #13	; 0xd
         cead8:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         ceadc:	e1a01005 	mov	r1, r5
         ceae0:	e1a00006 	mov	r0, r6
         ceae4:	e3a02004 	mov	r2, #4	; 0x4
         ceae8:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         ceaec:	ea6b5e0b 	b	1ba6320 <$AlignBuffer(void **, unsigned long *, unsigned long)>
    */
}

/**
 * Symbol: AllocateExportTable(MPExportItem *)
 * Address: 000cfc1c
 */
AllocateExportTable(MPExportItem *) {
    /*
         cfc1c:	e1a0c00d 	mov	ip, sp
         cfc20:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         cfc24:	e24cb004 	sub	fp, ip, #4	; 0x4
         cfc28:	e1a04000 	mov	r4, r0
         cfc2c:	e5d0000c 	ldrb	r0, [r0, #12]
         cfc30:	e3300000 	teq	r0, #0	; 0x0
         cfc34:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         cfc38:	e5940010 	ldr	r0, [r4, #16]
         cfc3c:	eb6617a1 	bl	1a55ac8 <$IsInRDMSpace(unsigned long)>
         cfc40:	e3300000 	teq	r0, #0	; 0x0
         cfc44:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         cfc48:	e5940004 	ldr	r0, [r4, #4]
         cfc4c:	e1a00100 	mov	r0, r0, lsl #2
         cfc50:	eb6c1bc4 	bl	1bd6b68 <$malloc>
         cfc54:	e1b05000 	movs	r5, r0
         cfc58:	1a000005 	bne	cfc74 <AllocateExportTable(MPExportItem *)+0x58>
         cfc5c:	e59f0034 	ldr	r0, [pc, #34]	; cfc98 <AllocateExportTable(MPExportItem *)+0x7c>
         cfc60:	e5900000 	ldr	r0, [r0]
         cfc64:	e3a02000 	mov	r2, #0	; 0x0
         cfc68:	e3a010e9 	mov	r1, #233	; 0xe9
         cfc6c:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
         cfc70:	eb6c4d49 	bl	1be319c <$Throw>
         cfc74:	e5940004 	ldr	r0, [r4, #4]
         cfc78:	e1a02100 	mov	r2, r0, lsl #2
         cfc7c:	e1a01005 	mov	r1, r5
         cfc80:	e5940010 	ldr	r0, [r4, #16]
         cfc84:	eb6c3cb2 	bl	1bdef54 <$BlockMove>
         cfc88:	e3a00001 	mov	r0, #1	; 0x1
         cfc8c:	e5845008 	str	r5, [r4, #8]
         cfc90:	e5c4000c 	strb	r0, [r4, #12]
         cfc94:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         cfc98:	00371318 	eoreqs	r1, r7, r8, lsl r3
    */
}

/**
 * Symbol: AddDomainToEnvironment__FUlN21
 * Address: 000d933c
 */
void globals::AddDomainToEnvironment() {
    /*
         d933c:	e1a0c00d 	mov	ip, sp
         d9340:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         d9344:	e24cb004 	sub	fp, ip, #4	; 0x4
         d9348:	e1a06000 	mov	r6, r0
         d934c:	e1a05001 	mov	r5, r1
         d9350:	e1a04002 	mov	r4, r2
         d9354:	eb0aec2d 	bl	394410 <IsSuperMode>
         d9358:	e3300000 	teq	r0, #0	; 0x0
         d935c:	0a000032 	beq	d942c <AddDomainToEnvironment__FUlN21+0xf0>
         d9360:	e59f902c 	ldr	r9, [pc, #2c]	; d9394 <AddDomainToEnvironment__FUlN21+0x58>
         d9364:	e206100f 	and	r1, r6, #15	; 0xf
         d9368:	e3a08001 	mov	r8, #1	; 0x1
         d936c:	e3a07000 	mov	r7, #0	; 0x0
         d9370:	e3310004 	teq	r1, #4	; 0x4
         d9374:	e5990000 	ldr	r0, [r9]
         d9378:	11a01007 	movne	r1, r7
         d937c:	01a01008 	moveq	r1, r8
         d9380:	e3310000 	teq	r1, #0	; 0x0
         d9384:	0a000003 	beq	d9398 <AddDomainToEnvironment__FUlN21+0x5c>
         d9388:	e1a01006 	mov	r1, r6
         d938c:	eb0902e0 	bl	319f14 <TObjectTable::Get(unsigned long)>
         d9390:	ea000001 	b	d939c <AddDomainToEnvironment__FUlN21+0x60>
         d9394:	0c100fc8 	ldceq	15, cr0, [r0], -#800
         d9398:	e1a00007 	mov	r0, r7
         d939c:	e1a06000 	mov	r6, r0
         d93a0:	e205100f 	and	r1, r5, #15	; 0xf
         d93a4:	e3310005 	teq	r1, #5	; 0x5
         d93a8:	e5990000 	ldr	r0, [r9]
         d93ac:	11a08007 	movne	r8, r7
         d93b0:	e3380000 	teq	r8, #0	; 0x0
         d93b4:	0a000002 	beq	d93c4 <AddDomainToEnvironment__FUlN21+0x88>
         d93b8:	e1a01005 	mov	r1, r5
         d93bc:	eb0902d4 	bl	319f14 <TObjectTable::Get(unsigned long)>
         d93c0:	ea000000 	b	d93c8 <AddDomainToEnvironment__FUlN21+0x8c>
         d93c4:	e1a00007 	mov	r0, r7
         d93c8:	e1a01000 	mov	r1, r0
         d93cc:	e3360000 	teq	r6, #0	; 0x0
         d93d0:	13310000 	teqne	r1, #0	; 0x0
         d93d4:	03a000ea 	moveq	r0, #234	; 0xea
         d93d8:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
         d93dc:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         d93e0:	e2040001 	and	r0, r4, #1	; 0x1
         d93e4:	e3300001 	teq	r0, #1	; 0x1
         d93e8:	13a00000 	movne	r0, #0	; 0x0
         d93ec:	03a00001 	moveq	r0, #1	; 0x1
         d93f0:	e20030ff 	and	r3, r0, #255	; 0xff
         d93f4:	e92d0008 	stmdb	sp!, {r3}
         d93f8:	e2040002 	and	r0, r4, #2	; 0x2
         d93fc:	e3300002 	teq	r0, #2	; 0x2
         d9400:	13a00000 	movne	r0, #0	; 0x0
         d9404:	03a00001 	moveq	r0, #1	; 0x1
         d9408:	e20030ff 	and	r3, r0, #255	; 0xff
         d940c:	e2040004 	and	r0, r4, #4	; 0x4
         d9410:	e3300004 	teq	r0, #4	; 0x4
         d9414:	13a00000 	movne	r0, #0	; 0x0
         d9418:	03a00001 	moveq	r0, #1	; 0x1
         d941c:	e20020ff 	and	r2, r0, #255	; 0xff
         d9420:	e1a00006 	mov	r0, r6
         d9424:	eb686126 	bl	1af18c4 <TEnvironment::$Add(TKDomain *, unsigned char, unsigned char, unsigned char)>
         d9428:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         d942c:	e1a03004 	mov	r3, r4
         d9430:	e1a02005 	mov	r2, r5
         d9434:	e1a01006 	mov	r1, r6
         d9438:	e3a00025 	mov	r0, #37	; 0x25
         d943c:	e91b6bf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
         d9440:	ea0b534b 	b	3ae174 <GenericSWI>
    */
}

/**
 * Symbol: addInterrupt(InterruptObject **, InterruptObject *)
 * Address: 000e5d78
 */
addInterrupt(InterruptObject **, InterruptObject *) {
    /*
         e5d78:	e92d4000 	stmdb	sp!, {lr}
         e5d7c:	e3a03000 	mov	r3, #0	; 0x0
         e5d80:	e581300c 	str	r3, [r1, #12]
         e5d84:	e5902000 	ldr	r2, [r0]
         e5d88:	e3320000 	teq	r2, #0	; 0x0
         e5d8c:	1a000001 	bne	e5d98 <addInterrupt(InterruptObject **, InterruptObject *)+0x20>
         e5d90:	e5801000 	str	r1, [r0]
         e5d94:	ea000011 	b	e5de0 <addInterrupt(InterruptObject **, InterruptObject *)+0x68>
         e5d98:	e592e01e 	ldr	lr, [r2, #30]
         e5d9c:	e591c01e 	ldr	ip, [r1, #30]
         e5da0:	e1a0c82c 	mov	ip, ip, lsr #16
         e5da4:	e15c082e 	cmp	ip, lr, lsr #16
         e5da8:	a581200c 	strge	r2, [r1, #12]
         e5dac:	aafffff7 	bge	e5d90 <addInterrupt(InterruptObject **, InterruptObject *)+0x18>
         e5db0:	e592000c 	ldr	r0, [r2, #12]
         e5db4:	e3300000 	teq	r0, #0	; 0x0
         e5db8:	05a2100c 	streq	r1, [r2, #12]!
         e5dbc:	05a1300c 	streq	r3, [r1, #12]!
         e5dc0:	0a000006 	beq	e5de0 <addInterrupt(InterruptObject **, InterruptObject *)+0x68>
         e5dc4:	e590e01e 	ldr	lr, [r0, #30]
         e5dc8:	e15c082e 	cmp	ip, lr, lsr #16
         e5dcc:	b1a02000 	movlt	r2, r0
         e5dd0:	bafffff6 	blt	e5db0 <addInterrupt(InterruptObject **, InterruptObject *)+0x38>
         e5dd4:	e592000c 	ldr	r0, [r2, #12]
         e5dd8:	e581000c 	str	r0, [r1, #12]
         e5ddc:	e5a2100c 	str	r1, [r2, #12]!
         e5de0:	e1a00003 	mov	r0, r3
         e5de4:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: AD_InterruptHandler(void *)
 * Address: 000e6c84
 */
AD_InterruptHandler(void *) {
    /*
         e6c84:	e1a0c00d 	mov	ip, sp
         e6c88:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         e6c8c:	e24cb004 	sub	fp, ip, #4	; 0x4
         e6c90:	eb05a6d8 	bl	2507f8 <TabADCEntry>
         e6c94:	e3a00000 	mov	r0, #0	; 0x0
         e6c98:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: AbortLargeBinaries(RefVar const &)
 * Address: 001008a4
 */
AbortLargeBinaries(RefVar const &) {
    /*
        1008a4:	e1a0c00d 	mov	ip, sp
        1008a8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1008ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        1008b0:	e1a04000 	mov	r4, r0
        1008b4:	e3a07000 	mov	r7, #0	; 0x0
        1008b8:	e59f80ac 	ldr	r8, [pc, #ac]	; 10096c <AbortLargeBinaries(RefVar const &)+0xc8>
        1008bc:	e5980020 	ldr	r0, [r8, #32]
        1008c0:	eb6b1279 	bl	1bc52ac <$Length(long)>
        1008c4:	e2506001 	subs	r6, r0, #1	; 0x1
        1008c8:	491babf0 	ldmmidb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1008cc:	e3a09000 	mov	r9, #0	; 0x0
        1008d0:	e1a01006 	mov	r1, r6
        1008d4:	e5980020 	ldr	r0, [r8, #32]
        1008d8:	eb6b0e5d 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1008dc:	e3300002 	teq	r0, #2	; 0x2
        1008e0:	0a00001b 	beq	100954 <AbortLargeBinaries(RefVar const &)+0xb0>
        1008e4:	eb6b1282 	bl	1bc52f4 <$ObjectPtr(long)>
        1008e8:	e2805010 	add	r5, r0, #16	; 0x10
        1008ec:	e5950010 	ldr	r0, [r5, #16]
        1008f0:	e3300000 	teq	r0, #0	; 0x0
        1008f4:	0a000016 	beq	100954 <AbortLargeBinaries(RefVar const &)+0xb0>
        1008f8:	e5940000 	ldr	r0, [r4]
        1008fc:	e5901000 	ldr	r1, [r0]
        100900:	e1a00005 	mov	r0, r5
        100904:	eb65167e 	bl	1a46304 <LBData::$IsSameEntry(long)>
        100908:	e3300000 	teq	r0, #0	; 0x0
        10090c:	0a000010 	beq	100954 <AbortLargeBinaries(RefVar const &)+0xb0>
        100910:	e1a00005 	mov	r0, r5
        100914:	eb651278 	bl	1a452fc <LBData::$GetStore( const(void))>
        100918:	e3300000 	teq	r0, #0	; 0x0
        10091c:	0a00000c 	beq	100954 <AbortLargeBinaries(RefVar const &)+0xb0>
        100920:	e5951004 	ldr	r1, [r5, #4]
        100924:	e590007c 	ldr	r0, [r0, #124]
        100928:	eb682b2b 	bl	1b0b5dc <$AbortObject(TStore *, unsigned long)>
        10092c:	e3300000 	teq	r0, #0	; 0x0
        100930:	1b64f13c 	blne	1a3ce28 <$_OSErr(long)>
        100934:	e1a00005 	mov	r0, r5
        100938:	eb6581d8 	bl	1a610a0 <$RegisterLargeBinaryForDeclawing(LBData const *)>
        10093c:	e3300000 	teq	r0, #0	; 0x0
        100940:	03370000 	teqeq	r7, #0	; 0x0
        100944:	13a00001 	movne	r0, #1	; 0x1
        100948:	03a00000 	moveq	r0, #0	; 0x0
        10094c:	e20070ff 	and	r7, r0, #255	; 0xff
        100950:	e5a59010 	str	r9, [r5, #16]!
        100954:	e2566001 	subs	r6, r6, #1	; 0x1
        100958:	5affffdc 	bpl	1008d0 <AbortLargeBinaries(RefVar const &)+0x2c>
        10095c:	e3370000 	teq	r7, #0	; 0x0
        100960:	191b6bf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
        100964:	1a6581d9 	bne	1a610d0 <$DeclawRefsInRegisteredRanges(void)>
        100968:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        10096c:	0c1010a0 	ldceq	0, cr1, [r0], -#640
    */
}

/**
 * Symbol: AllocateLargeBinary__FRC6RefVarlT2P13TStoreWrapper
 * Address: 00100dbc
 */
void globals::AllocateLargeBinary() {
    /*
        100dbc:	e1a0c00d 	mov	ip, sp
        100dc0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        100dc4:	e24cb004 	sub	fp, ip, #4	; 0x4
        100dc8:	e1a06001 	mov	r6, r1
        100dcc:	e1a05002 	mov	r5, r2
        100dd0:	e1a04003 	mov	r4, r3
        100dd4:	e1a01000 	mov	r1, r0
        100dd8:	e59f0050 	ldr	r0, [pc, #50]	; 100e30 <AllocateLargeBinary__FRC6RefVarlT2P13TStoreWrapper+0x74>
        100ddc:	e5900000 	ldr	r0, [r0]
        100de0:	e3a02018 	mov	r2, #24	; 0x18
        100de4:	eb6c29f5 	bl	1c0b5c0 <TObjectHeap::$AllocateIndirectBinary(RefVar const &, long)>
        100de8:	e1a08000 	mov	r8, r0
        100dec:	eb6b1140 	bl	1bc52f4 <$ObjectPtr(long)>
        100df0:	e59f103c 	ldr	r1, [pc, #3c]	; 100e34 <AllocateLargeBinary__FRC6RefVarlT2P13TStoreWrapper+0x78>
        100df4:	e580100c 	str	r1, [r0, #12]
        100df8:	e2807010 	add	r7, r0, #16	; 0x10
        100dfc:	e3e00000 	mvn	r0, #0	; 0x0
        100e00:	e1a01004 	mov	r1, r4
        100e04:	e5870014 	str	r0, [r7, #20]
        100e08:	e1a00007 	mov	r0, r7
        100e0c:	eb65153b 	bl	1a46300 <LBData::$SetStore(TStoreWrapper *)>
        100e10:	e3a00000 	mov	r0, #0	; 0x0
        100e14:	e3a01002 	mov	r1, #2	; 0x2
        100e18:	e9870003 	stmib	r7, {r0, r1}
        100e1c:	e5875000 	str	r5, [r7]
        100e20:	e5a7600c 	str	r6, [r7, #12]!
        100e24:	e5870004 	str	r0, [r7, #4]
        100e28:	e1a00008 	mov	r0, r8
        100e2c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        100e30:	0c105548 	ldceq	5, cr5, [r0], -#288
        100e34:	0c1010a0 	ldceq	0, cr1, [r0], -#640
    */
}

/**
 * Symbol: AbortObject(TStore *, unsigned long)
 * Address: 00103028
 */
AbortObject(TStore *, unsigned long) {
    /*
        103028:	e1a0c00d 	mov	ip, sp
        10302c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        103030:	e24cb004 	sub	fp, ip, #4	; 0x4
        103034:	e1a05000 	mov	r5, r0
        103038:	e1a04001 	mov	r4, r1
        10303c:	e24dd004 	sub	sp, sp, #4	; 0x4
        103040:	e1a02001 	mov	r2, r1
        103044:	e1a01000 	mov	r1, r0
        103048:	e1a0000d 	mov	r0, sp
        10304c:	eb684670 	bl	1b14a14 <$StoreToVAddr(unsigned long *, TStore *, unsigned long)>
        103050:	e1b06000 	movs	r6, r0
        103054:	1a000013 	bne	1030a8 <AbortObject(TStore *, unsigned long)+0x80>
        103058:	e24dd024 	sub	sp, sp, #36	; 0x24
        10305c:	eb684eb7 	bl	1b16b40 <$GetROMDomainUserMonitor(void)>
        103060:	e3a01000 	mov	r1, #0	; 0x0
        103064:	e5cd1020 	strb	r1, [sp, #32]
        103068:	e5900000 	ldr	r0, [r0]
        10306c:	e58d001c 	str	r0, [sp, #28]
        103070:	e1a0000d 	mov	r0, sp
        103074:	eb684eac 	bl	1b16b2c <RDMParams::$__ct(void)>
        103078:	e59d0024 	ldr	r0, [sp, #36]
        10307c:	e58d0008 	str	r0, [sp, #8]
        103080:	e1a0200d 	mov	r2, sp
        103084:	e3a0100b 	mov	r1, #11	; 0xb
        103088:	e59d001c 	ldr	r0, [sp, #28]
        10308c:	eb0aaca3 	bl	3ae320 <MonitorDispatchSWI>
        103090:	e1a06000 	mov	r6, r0
        103094:	e28d001c 	add	r0, sp, #28	; 0x1c
        103098:	e3a01000 	mov	r1, #0	; 0x0
        10309c:	eb6b2da3 	bl	1bce730 <TUMonitor::$__dt(void)>
        1030a0:	e28dd024 	add	sp, sp, #36	; 0x24
        1030a4:	ea00000c 	b	1030dc <AbortObject(TStore *, unsigned long)+0xb4>
        1030a8:	e1a01004 	mov	r1, r4
        1030ac:	e1a00005 	mov	r0, r5
        1030b0:	eb0a0ec9 	bl	386bdc <TStore::InSeparateTransaction(unsigned long)>
        1030b4:	e3300000 	teq	r0, #0	; 0x0
        1030b8:	0a000007 	beq	1030dc <AbortObject(TStore *, unsigned long)+0xb4>
        1030bc:	e3a03001 	mov	r3, #1	; 0x1
        1030c0:	e92d0008 	stmdb	sp!, {r3}
        1030c4:	e1a01004 	mov	r1, r4
        1030c8:	e1a00005 	mov	r0, r5
        1030cc:	e3a02000 	mov	r2, #0	; 0x0
        1030d0:	eb682568 	bl	1b0c678 <$LODefaultDoTransaction__FP6TStoreUlT2lUc>
        1030d4:	e28dd004 	add	sp, sp, #4	; 0x4
        1030d8:	e1a06000 	mov	r6, r0
        1030dc:	e1a00006 	mov	r0, r6
        1030e0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: AbortObjects(TStore *)
 * Address: 001030e4
 */
AbortObjects(TStore *) {
    /*
        1030e4:	e1a0c00d 	mov	ip, sp
        1030e8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1030ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        1030f0:	e1a04000 	mov	r4, r0
        1030f4:	e24dd024 	sub	sp, sp, #36	; 0x24
        1030f8:	e28d0008 	add	r0, sp, #8	; 0x8
        1030fc:	eb684e8a 	bl	1b16b2c <RDMParams::$__ct(void)>
        103100:	eb684e8e 	bl	1b16b40 <$GetROMDomainUserMonitor(void)>
        103104:	e3a01000 	mov	r1, #0	; 0x0
        103108:	e5cd1004 	strb	r1, [sp, #4]
        10310c:	e5900000 	ldr	r0, [r0]
        103110:	e58d0000 	str	r0, [sp]
        103114:	e58d4008 	str	r4, [sp, #8]
        103118:	e28d2008 	add	r2, sp, #8	; 0x8
        10311c:	e3a0100b 	mov	r1, #11	; 0xb
        103120:	eb0aac7e 	bl	3ae320 <MonitorDispatchSWI>
        103124:	e1a04000 	mov	r4, r0
        103128:	e1a0000d 	mov	r0, sp
        10312c:	e3a01000 	mov	r1, #0	; 0x0
        103130:	eb6b2d7e 	bl	1bce730 <TUMonitor::$__dt(void)>
        103134:	e1a00004 	mov	r0, r4
        103138:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: AddBookmark
 * Address: 00108ecc
 */
void globals::AddBookmark() {
    /*
        108ecc:	e1a0c00d 	mov	ip, sp
        108ed0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        108ed4:	e24cb004 	sub	fp, ip, #4	; 0x4
        108ed8:	e1a05000 	mov	r5, r0
        108edc:	e1a04001 	mov	r4, r1
        108ee0:	e24dd00c 	sub	sp, sp, #12	; 0xc
        108ee4:	e3a00002 	mov	r0, #2	; 0x2
        108ee8:	eb6ae497 	bl	1bc214c <$AllocateRefHandle(long)>
        108eec:	e58d0008 	str	r0, [sp, #8]
        108ef0:	e3a00002 	mov	r0, #2	; 0x2
        108ef4:	eb6ae494 	bl	1bc214c <$AllocateRefHandle(long)>
        108ef8:	e58d0004 	str	r0, [sp, #4]
        108efc:	e3a00002 	mov	r0, #2	; 0x2
        108f00:	eb6ae491 	bl	1bc214c <$AllocateRefHandle(long)>
        108f04:	e58d0000 	str	r0, [sp]
        108f08:	e59f10f8 	ldr	r1, [pc, #f8]	; 109008 <AddBookmark+0x13c>
        108f0c:	e1a00005 	mov	r0, r5
        108f10:	e3a03000 	mov	r3, #0	; 0x0
        108f14:	e3a02000 	mov	r2, #0	; 0x0
        108f18:	eb6aecd5 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        108f1c:	e59d1008 	ldr	r1, [sp, #8]
        108f20:	e5810000 	str	r0, [r1]
        108f24:	e59f10e0 	ldr	r1, [pc, #e0]	; 10900c <AddBookmark+0x140>
        108f28:	e1a00005 	mov	r0, r5
        108f2c:	e3a03000 	mov	r3, #0	; 0x0
        108f30:	e3a02000 	mov	r2, #0	; 0x0
        108f34:	eb6aecce 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        108f38:	e3100003 	tst	r0, #3	; 0x3
        108f3c:	01a00140 	moveq	r0, r0, asr #2
        108f40:	0a000000 	beq	108f48 <AddBookmark+0x7c>
        108f44:	eb6ae474 	bl	1bc211c <$_RINTError(long)>
        108f48:	e1a05000 	mov	r5, r0
        108f4c:	e28d1008 	add	r1, sp, #8	; 0x8
        108f50:	e59f00b8 	ldr	r0, [pc, #b8]	; 109010 <AddBookmark+0x144>
        108f54:	e5900000 	ldr	r0, [r0]
        108f58:	eb670999 	bl	1acb5c4 <TLibrarian::$GetLibraryEntry(RefVar const &)>
        108f5c:	e59d1004 	ldr	r1, [sp, #4]
        108f60:	e5810000 	str	r0, [r1]
        108f64:	e59f10a8 	ldr	r1, [pc, #a8]	; 109014 <AddBookmark+0x148>
        108f68:	e5911000 	ldr	r1, [r1]
        108f6c:	e5911000 	ldr	r1, [r1]
        108f70:	eb6aecba 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        108f74:	e59d1000 	ldr	r1, [sp]
        108f78:	e5810000 	str	r0, [r1]
        108f7c:	e1a01005 	mov	r1, r5
        108f80:	eb6aecb3 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        108f84:	e59d1000 	ldr	r1, [sp]
        108f88:	e5810000 	str	r0, [r1]
        108f8c:	eb6af0c6 	bl	1bc52ac <$Length(long)>
        108f90:	e1a06000 	mov	r6, r0
        108f94:	e3500000 	cmp	r0, #0	; 0x0
        108f98:	0a000027 	beq	10903c <AddBookmark+0x170>
        108f9c:	e3a05000 	mov	r5, #0	; 0x0
        108fa0:	da00001f 	ble	109024 <AddBookmark+0x158>
        108fa4:	e1a01005 	mov	r1, r5
        108fa8:	e59d0000 	ldr	r0, [sp]
        108fac:	e5900000 	ldr	r0, [r0]
        108fb0:	eb6aeca7 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        108fb4:	e3100003 	tst	r0, #3	; 0x3
        108fb8:	01a00140 	moveq	r0, r0, asr #2
        108fbc:	0a000000 	beq	108fc4 <AddBookmark+0xf8>
        108fc0:	eb6ae455 	bl	1bc211c <$_RINTError(long)>
        108fc4:	e1a07000 	mov	r7, r0
        108fc8:	e5940000 	ldr	r0, [r4]
        108fcc:	e5900000 	ldr	r0, [r0]
        108fd0:	e3100003 	tst	r0, #3	; 0x3
        108fd4:	01a00140 	moveq	r0, r0, asr #2
        108fd8:	0a000000 	beq	108fe0 <AddBookmark+0x114>
        108fdc:	eb6ae44e 	bl	1bc211c <$_RINTError(long)>
        108fe0:	e1370000 	teq	r7, r0
        108fe4:	1a00000b 	bne	109018 <AddBookmark+0x14c>
        108fe8:	e59d0000 	ldr	r0, [sp]
        108fec:	eb6ae872 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        108ff0:	e59d0004 	ldr	r0, [sp, #4]
        108ff4:	eb6ae870 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        108ff8:	e59d0008 	ldr	r0, [sp, #8]
        108ffc:	eb6ae86e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        109000:	e3a00002 	mov	r0, #2	; 0x2
        109004:	ea000019 	b	109070 <AddBookmark+0x1a4>
        109008:	00683308 	rsbeq	r3, r8, r8, lsl #6
        10900c:	00682728 	rsbeq	r2, r8, r8, lsr #14
        109010:	0c1010d0 	ldceq	0, cr1, [r0], -#832
        109014:	00683788 	rsbeq	r3, r8, r8, lsl #15
        109018:	e2855001 	add	r5, r5, #1	; 0x1
        10901c:	e1550006 	cmp	r5, r6
        109020:	baffffdf 	blt	108fa4 <AddBookmark+0xd8>
        109024:	e3360006 	teq	r6, #6	; 0x6
        109028:	1a000003 	bne	10903c <AddBookmark+0x170>
        10902c:	e1a0000d 	mov	r0, sp
        109030:	e3a02001 	mov	r2, #1	; 0x1
        109034:	e3a01000 	mov	r1, #0	; 0x0
        109038:	eb6bfd04 	bl	1c08450 <$ArrayRemoveCount__FRC6RefVarlT2>
        10903c:	e1a01004 	mov	r1, r4
        109040:	e1a0000d 	mov	r0, sp
        109044:	eb6ae437 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        109048:	e28d0004 	add	r0, sp, #4	; 0x4
        10904c:	eb6ae867 	bl	1bc31f0 <$EntryChange(RefVar const &)>
        109050:	e59d0000 	ldr	r0, [sp]
        109054:	e5904000 	ldr	r4, [r0]
        109058:	eb6ae857 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10905c:	e59d0004 	ldr	r0, [sp, #4]
        109060:	eb6ae855 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        109064:	e59d0008 	ldr	r0, [sp, #8]
        109068:	eb6ae853 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10906c:	e1a00004 	mov	r0, r4
        109070:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: AddInkMarks
 * Address: 0010a78c
 */
void globals::AddInkMarks() {
    /*
        10a78c:	e1a0c00d 	mov	ip, sp
        10a790:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        10a794:	e24cb004 	sub	fp, ip, #4	; 0x4
        10a798:	e1a06000 	mov	r6, r0
        10a79c:	e1a05001 	mov	r5, r1
        10a7a0:	e1a04002 	mov	r4, r2
        10a7a4:	e24dd00c 	sub	sp, sp, #12	; 0xc
        10a7a8:	e3a00002 	mov	r0, #2	; 0x2
        10a7ac:	eb6ade66 	bl	1bc214c <$AllocateRefHandle(long)>
        10a7b0:	e58d0008 	str	r0, [sp, #8]
        10a7b4:	e3a00002 	mov	r0, #2	; 0x2
        10a7b8:	eb6ade63 	bl	1bc214c <$AllocateRefHandle(long)>
        10a7bc:	e58d0004 	str	r0, [sp, #4]
        10a7c0:	e3a00002 	mov	r0, #2	; 0x2
        10a7c4:	eb6ade60 	bl	1bc214c <$AllocateRefHandle(long)>
        10a7c8:	e58d0000 	str	r0, [sp]
        10a7cc:	e3a00002 	mov	r0, #2	; 0x2
        10a7d0:	eb6ade5d 	bl	1bc214c <$AllocateRefHandle(long)>
        10a7d4:	e1a07000 	mov	r7, r0
        10a7d8:	e59f1104 	ldr	r1, [pc, #104]	; 10a8e4 <AddInkMarks+0x158>
        10a7dc:	e1a00006 	mov	r0, r6
        10a7e0:	e3a03000 	mov	r3, #0	; 0x0
        10a7e4:	e3a02000 	mov	r2, #0	; 0x0
        10a7e8:	eb6ae6a1 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        10a7ec:	e59d1008 	ldr	r1, [sp, #8]
        10a7f0:	e5810000 	str	r0, [r1]
        10a7f4:	e59f10ec 	ldr	r1, [pc, #ec]	; 10a8e8 <AddInkMarks+0x15c>
        10a7f8:	e1a00006 	mov	r0, r6
        10a7fc:	e3a03000 	mov	r3, #0	; 0x0
        10a800:	e3a02000 	mov	r2, #0	; 0x0
        10a804:	eb6ae69a 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        10a808:	e3100003 	tst	r0, #3	; 0x3
        10a80c:	01a00140 	moveq	r0, r0, asr #2
        10a810:	0a000000 	beq	10a818 <AddInkMarks+0x8c>
        10a814:	eb6ade40 	bl	1bc211c <$_RINTError(long)>
        10a818:	e1a06000 	mov	r6, r0
        10a81c:	e28d1008 	add	r1, sp, #8	; 0x8
        10a820:	e59f00c4 	ldr	r0, [pc, #c4]	; 10a8ec <AddInkMarks+0x160>
        10a824:	e5900000 	ldr	r0, [r0]
        10a828:	eb670365 	bl	1acb5c4 <TLibrarian::$GetLibraryEntry(RefVar const &)>
        10a82c:	e59d1004 	ldr	r1, [sp, #4]
        10a830:	e5810000 	str	r0, [r1]
        10a834:	e59f10b4 	ldr	r1, [pc, #b4]	; 10a8f0 <AddInkMarks+0x164>
        10a838:	e5911000 	ldr	r1, [r1]
        10a83c:	e5911000 	ldr	r1, [r1]
        10a840:	eb6ae686 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10a844:	e59d1000 	ldr	r1, [sp]
        10a848:	e5810000 	str	r0, [r1]
        10a84c:	e1a01006 	mov	r1, r6
        10a850:	eb6ae67f 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        10a854:	e59d1000 	ldr	r1, [sp]
        10a858:	e5810000 	str	r0, [r1]
        10a85c:	eb6aea92 	bl	1bc52ac <$Length(long)>
        10a860:	e1b09000 	movs	r9, r0
        10a864:	e3a0801a 	mov	r8, #26	; 0x1a
        10a868:	0a000035 	beq	10a944 <AddInkMarks+0x1b8>
        10a86c:	e5950000 	ldr	r0, [r5]
        10a870:	e5900000 	ldr	r0, [r0]
        10a874:	e3100003 	tst	r0, #3	; 0x3
        10a878:	01a00140 	moveq	r0, r0, asr #2
        10a87c:	0a000000 	beq	10a884 <AddInkMarks+0xf8>
        10a880:	eb6ade25 	bl	1bc211c <$_RINTError(long)>
        10a884:	e1a0a000 	mov	sl, r0
        10a888:	e3a06000 	mov	r6, #0	; 0x0
        10a88c:	e3590000 	cmp	r9, #0	; 0x0
        10a890:	da00002b 	ble	10a944 <AddInkMarks+0x1b8>
        10a894:	e1a01006 	mov	r1, r6
        10a898:	e59d0000 	ldr	r0, [sp]
        10a89c:	e5900000 	ldr	r0, [r0]
        10a8a0:	eb6ae66b 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        10a8a4:	e3100003 	tst	r0, #3	; 0x3
        10a8a8:	01a00140 	moveq	r0, r0, asr #2
        10a8ac:	0a000000 	beq	10a8b4 <AddInkMarks+0x128>
        10a8b0:	eb6ade19 	bl	1bc211c <$_RINTError(long)>
        10a8b4:	e130000a 	teq	r0, sl
        10a8b8:	1a00001e 	bne	10a938 <AddInkMarks+0x1ac>
        10a8bc:	e5940000 	ldr	r0, [r4]
        10a8c0:	e5900000 	ldr	r0, [r0]
        10a8c4:	eb6aea78 	bl	1bc52ac <$Length(long)>
        10a8c8:	e3300000 	teq	r0, #0	; 0x0
        10a8cc:	1a000008 	bne	10a8f4 <AddInkMarks+0x168>
        10a8d0:	e1a01006 	mov	r1, r6
        10a8d4:	e1a0000d 	mov	r0, sp
        10a8d8:	e3a02002 	mov	r2, #2	; 0x2
        10a8dc:	eb6bf6db 	bl	1c08450 <$ArrayRemoveCount__FRC6RefVarlT2>
        10a8e0:	ea000009 	b	10a90c <AddInkMarks+0x180>
        10a8e4:	00683308 	rsbeq	r3, r8, r8, lsl #6
        10a8e8:	00682728 	rsbeq	r2, r8, r8, lsr #14
        10a8ec:	0c1010d0 	ldceq	0, cr1, [r0], -#832
        10a8f0:	00683230 	rsbeq	r3, r8, r0, lsr r2
        10a8f4:	e2861001 	add	r1, r6, #1	; 0x1
        10a8f8:	e5940000 	ldr	r0, [r4]
        10a8fc:	e5902000 	ldr	r2, [r0]
        10a900:	e59d0000 	ldr	r0, [sp]
        10a904:	e5900000 	ldr	r0, [r0]
        10a908:	eb6aee92 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        10a90c:	e28d0004 	add	r0, sp, #4	; 0x4
        10a910:	eb6ae236 	bl	1bc31f0 <$EntryChange(RefVar const &)>
        10a914:	ea00000f 	b	10a958 <AddInkMarks+0x1cc>
        10a918:	e59d0000 	ldr	r0, [sp]
        10a91c:	eb6ae226 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10a920:	e59d0004 	ldr	r0, [sp, #4]
        10a924:	eb6ae224 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10a928:	e59d0008 	ldr	r0, [sp, #8]
        10a92c:	eb6ae222 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10a930:	e1a00008 	mov	r0, r8
        10a934:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        10a938:	e2866002 	add	r6, r6, #2	; 0x2
        10a93c:	e1560009 	cmp	r6, r9
        10a940:	baffffd3 	blt	10a894 <AddInkMarks+0x108>
        10a944:	e5940000 	ldr	r0, [r4]
        10a948:	e5900000 	ldr	r0, [r0]
        10a94c:	eb6aea56 	bl	1bc52ac <$Length(long)>
        10a950:	e3300000 	teq	r0, #0	; 0x0
        10a954:	1a000002 	bne	10a964 <AddInkMarks+0x1d8>
        10a958:	e1a00007 	mov	r0, r7
        10a95c:	eb6ae216 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10a960:	eaffffec 	b	10a918 <AddInkMarks+0x18c>
        10a964:	e1a01005 	mov	r1, r5
        10a968:	e1a0000d 	mov	r0, sp
        10a96c:	eb6added 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        10a970:	e1a01004 	mov	r1, r4
        10a974:	e1a0000d 	mov	r0, sp
        10a978:	eb6addea 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        10a97c:	eaffffe2 	b	10a90c <AddInkMarks+0x180>
    */
}

/**
 * Symbol: AuthorData
 * Address: 0010b6e4
 */
void globals::AuthorData() {
    /*
        10b6e4:	e1a0c00d 	mov	ip, sp
        10b6e8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        10b6ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        10b6f0:	e1a04000 	mov	r4, r0
        10b6f4:	e24dd004 	sub	sp, sp, #4	; 0x4
        10b6f8:	e3a00002 	mov	r0, #2	; 0x2
        10b6fc:	eb6ada92 	bl	1bc214c <$AllocateRefHandle(long)>
        10b700:	e58d0000 	str	r0, [sp]
        10b704:	e3a00002 	mov	r0, #2	; 0x2
        10b708:	eb6ada8f 	bl	1bc214c <$AllocateRefHandle(long)>
        10b70c:	e1a05000 	mov	r5, r0
        10b710:	e59f1054 	ldr	r1, [pc, #54]	; 10b76c <AuthorData+0x88>
        10b714:	e1a00004 	mov	r0, r4
        10b718:	e3a03000 	mov	r3, #0	; 0x0
        10b71c:	e3a02000 	mov	r2, #0	; 0x0
        10b720:	eb6ae2d3 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        10b724:	e59d1000 	ldr	r1, [sp]
        10b728:	e5810000 	str	r0, [r1]
        10b72c:	e1a0100d 	mov	r1, sp
        10b730:	e59f0038 	ldr	r0, [pc, #38]	; 10b770 <AuthorData+0x8c>
        10b734:	e5900000 	ldr	r0, [r0]
        10b738:	eb66ffa1 	bl	1acb5c4 <TLibrarian::$GetLibraryEntry(RefVar const &)>
        10b73c:	e5850000 	str	r0, [r5]
        10b740:	e59f102c 	ldr	r1, [pc, #2c]	; 10b774 <AuthorData+0x90>
        10b744:	e5911000 	ldr	r1, [r1]
        10b748:	e5911000 	ldr	r1, [r1]
        10b74c:	eb6ae2c3 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10b750:	e1a04000 	mov	r4, r0
        10b754:	e1a00005 	mov	r0, r5
        10b758:	eb6ade97 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10b75c:	e59d0000 	ldr	r0, [sp]
        10b760:	eb6ade95 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10b764:	e1a00004 	mov	r0, r4
        10b768:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        10b76c:	00683308 	rsbeq	r3, r8, r8, lsl #6
        10b770:	0c1010d0 	ldceq	0, cr1, [r0], -#832
        10b774:	006827a0 	rsbeq	r2, r8, r0, lsr #15
    */
}

/**
 * Symbol: AdjustParagraph__FRC6RefVarP14TParagraphViewT2lT4
 * Address: 00111208
 */
void globals::AdjustParagraph() {
    /*
        111208:	e1a0c00d 	mov	ip, sp
        11120c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        111210:	e24cb004 	sub	fp, ip, #4	; 0x4
        111214:	e1a07000 	mov	r7, r0
        111218:	e1a05001 	mov	r5, r1
        11121c:	e1a04002 	mov	r4, r2
        111220:	e1a06003 	mov	r6, r3
        111224:	e59b9004 	ldr	r9, [fp, #4]
        111228:	e24dd00c 	sub	sp, sp, #12	; 0xc
        11122c:	eb6ae4ca 	bl	1bca55c <$GetView(RefVar const &)>
        111230:	e5900010 	ldr	r0, [r0, #16]
        111234:	e58d0008 	str	r0, [sp, #8]
        111238:	e2840010 	add	r0, r4, #16	; 0x10
        11123c:	e1a08000 	mov	r8, r0
        111240:	e8905000 	ldmia	r0, {ip, lr}
        111244:	e88d5000 	stmia	sp, {ip, lr}
        111248:	e3350000 	teq	r5, #0	; 0x0
        11124c:	0a00000a 	beq	11127c <AdjustParagraph__FRC6RefVarP14TParagraphViewT2lT4+0x74>
        111250:	e1a00005 	mov	r0, r5
        111254:	eb66fd81 	bl	1ad0860 <TParagraphView::$GetLastBaseline(void)>
        111258:	e1a07000 	mov	r7, r0
        11125c:	e1a01004 	mov	r1, r4
        111260:	e1a00005 	mov	r0, r5
        111264:	eb66fd80 	bl	1ad086c <TParagraphView::$GetNextBaseline(TParagraphView *)>
        111268:	e2871010 	add	r1, r7, #16	; 0x10
        11126c:	e1500001 	cmp	r0, r1
        111270:	d1a00001 	movle	r0, r1
        111274:	e1a01000 	mov	r1, r0
        111278:	ea00000e 	b	1112b8 <AdjustParagraph__FRC6RefVarP14TParagraphViewT2lT4+0xb0>
        11127c:	e1a00004 	mov	r0, r4
        111280:	eb66fd60 	bl	1ad0808 <TParagraphView::$GetFirstBaseline(void)>
        111284:	e5981000 	ldr	r1, [r8]
        111288:	e040a841 	sub	sl, r0, r1, asr #16
        11128c:	e59f1054 	ldr	r1, [pc, #54]	; 1112e8 <AdjustParagraph__FRC6RefVarP14TParagraphViewT2lT4+0xe0>
        111290:	e1a00007 	mov	r0, r7
        111294:	e3a02000 	mov	r2, #0	; 0x0
        111298:	eb6acbf2 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        11129c:	e3100003 	tst	r0, #3	; 0x3
        1112a0:	01a00140 	moveq	r0, r0, asr #2
        1112a4:	0a000000 	beq	1112ac <AdjustParagraph__FRC6RefVarP14TParagraphViewT2lT4+0xa4>
        1112a8:	eb6ac39b 	bl	1bc211c <$_RINTError(long)>
        1112ac:	e080100a 	add	r1, r0, sl
        1112b0:	e59d0008 	ldr	r0, [sp, #8]
        1112b4:	e0811840 	add	r1, r1, r0, asr #16
        1112b8:	e1a00004 	mov	r0, r4
        1112bc:	eb66ece8 	bl	1acc664 <TParagraphView::$AdjustBoundsForFirstBaseline(long)>
        1112c0:	e24dd008 	sub	sp, sp, #8	; 0x8
        1112c4:	e8985000 	ldmia	r8, {ip, lr}
        1112c8:	e88d5000 	stmia	sp, {ip, lr}
        1112cc:	e3350000 	teq	r5, #0	; 0x0
        1112d0:	0a000005 	beq	1112ec <AdjustParagraph__FRC6RefVarP14TParagraphViewT2lT4+0xe4>
        1112d4:	e5950010 	ldr	r0, [r5, #16]
        1112d8:	e59d1000 	ldr	r1, [sp]
        1112dc:	e1a01841 	mov	r1, r1, asr #16
        1112e0:	e0410840 	sub	r0, r1, r0, asr #16
        1112e4:	ea000001 	b	1112f0 <AdjustParagraph__FRC6RefVarP14TParagraphViewT2lT4+0xe8>
        1112e8:	00684c08 	rsbeq	r4, r8, r8, lsl #24
        1112ec:	e3a00010 	mov	r0, #16	; 0x10
        1112f0:	e3560000 	cmp	r6, #0	; 0x0
        1112f4:	b3590000 	cmplt	r9, #0	; 0x0
        1112f8:	ba00000d 	blt	111334 <AdjustParagraph__FRC6RefVarP14TParagraphViewT2lT4+0x12c>
        1112fc:	e3560000 	cmp	r6, #0	; 0x0
        111300:	ba000004 	blt	111318 <AdjustParagraph__FRC6RefVarP14TParagraphViewT2lT4+0x110>
        111304:	e59d1010 	ldr	r1, [sp, #16]
        111308:	e0811006 	add	r1, r1, r6
        11130c:	e5cd1003 	strb	r1, [sp, #3]
        111310:	e1a01441 	mov	r1, r1, asr #8
        111314:	e5cd1002 	strb	r1, [sp, #2]
        111318:	e3590000 	cmp	r9, #0	; 0x0
        11131c:	ba000004 	blt	111334 <AdjustParagraph__FRC6RefVarP14TParagraphViewT2lT4+0x12c>
        111320:	e59d1012 	ldr	r1, [sp, #18]
        111324:	e0891001 	add	r1, r9, r1
        111328:	e5cd1007 	strb	r1, [sp, #7]
        11132c:	e1a01441 	mov	r1, r1, asr #8
        111330:	e5cd1006 	strb	r1, [sp, #6]
        111334:	e3500010 	cmp	r0, #16	; 0x10
        111338:	aa000003 	bge	11134c <AdjustParagraph__FRC6RefVarP14TParagraphViewT2lT4+0x144>
        11133c:	e2602010 	rsb	r2, r0, #16	; 0x10
        111340:	e1a0000d 	mov	r0, sp
        111344:	e3a01000 	mov	r1, #0	; 0x0
        111348:	eb690166 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        11134c:	e24dd004 	sub	sp, sp, #4	; 0x4
        111350:	e59d0014 	ldr	r0, [sp, #20]
        111354:	e2600000 	rsb	r0, r0, #0	; 0x0
        111358:	e1a01800 	mov	r1, r0, lsl #16
        11135c:	e1a01841 	mov	r1, r1, asr #16
        111360:	e59d0016 	ldr	r0, [sp, #22]
        111364:	e2600000 	rsb	r0, r0, #0	; 0x0
        111368:	e1a00800 	mov	r0, r0, lsl #16
        11136c:	e1a00840 	mov	r0, r0, asr #16
        111370:	e24dd004 	sub	sp, sp, #4	; 0x4
        111374:	e5cd1003 	strb	r1, [sp, #3]
        111378:	e1a01441 	mov	r1, r1, asr #8
        11137c:	e5cd1002 	strb	r1, [sp, #2]
        111380:	e5cd0001 	strb	r0, [sp, #1]
        111384:	e1a00440 	mov	r0, r0, asr #8
        111388:	e5cd0000 	strb	r0, [sp]
        11138c:	e49d0004 	ldr	r0, [sp], #4
        111390:	e58d0000 	str	r0, [sp]
        111394:	e28d0004 	add	r0, sp, #4	; 0x4
        111398:	e59d1002 	ldr	r1, [sp, #2]
        11139c:	e1a01841 	mov	r1, r1, asr #16
        1113a0:	e59d2000 	ldr	r2, [sp]
        1113a4:	e1a02842 	mov	r2, r2, asr #16
        1113a8:	eb69014e 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        1113ac:	e28dd004 	add	sp, sp, #4	; 0x4
        1113b0:	e1a0100d 	mov	r1, sp
        1113b4:	e1a00004 	mov	r0, r4
        1113b8:	e5942000 	ldr	r2, [r4]
        1113bc:	e1a0e00f 	mov	lr, pc
        1113c0:	e282f02c 	add	pc, r2, #44	; 0x2c
        1113c4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: ad_frq_tx_init(TMNPClass5Vars *)
 * Address: 00116b14
 */
ad_frq_tx_init(TMNPClass5Vars *) {
    /*
        116b14:	e92d4000 	stmdb	sp!, {lr}
        116b18:	e3a01000 	mov	r1, #0	; 0x0
        116b1c:	e3a02000 	mov	r2, #0	; 0x0
        116b20:	e3a0c000 	mov	ip, #0	; 0x0
        116b24:	e20230ff 	and	r3, r2, #255	; 0xff
        116b28:	e080e002 	add	lr, r0, r2
        116b2c:	e5ce3200 	strb	r3, [lr, #512]
        116b30:	e080e001 	add	lr, r0, r1
        116b34:	e5cec300 	strb	ip, [lr, #768]
        116b38:	e7c0c001 	strb	ip, [r0, r1]
        116b3c:	e2811001 	add	r1, r1, #1	; 0x1
        116b40:	e080e001 	add	lr, r0, r1
        116b44:	e5ce3300 	strb	r3, [lr, #768]
        116b48:	e7c03001 	strb	r3, [r0, r1]
        116b4c:	e2811001 	add	r1, r1, #1	; 0x1
        116b50:	e2822001 	add	r2, r2, #1	; 0x1
        116b54:	e3520c01 	cmp	r2, #256	; 0x100
        116b58:	3afffff1 	bcc	116b24 <ad_frq_tx_init(TMNPClass5Vars *)+0x10>
        116b5c:	e5c0c500 	strb	ip, [r0, #1280]
        116b60:	e3a01003 	mov	r1, #3	; 0x3
        116b64:	e5c01501 	strb	r1, [r0, #1281]
        116b68:	e5c0c502 	strb	ip, [r0, #1282]
        116b6c:	e5c0c503 	strb	ip, [r0, #1283]
        116b70:	e5c0c51c 	strb	ip, [r0, #1308]
        116b74:	e3a01080 	mov	r1, #128	; 0x80
        116b78:	e5c0151d 	strb	r1, [r0, #1309]
        116b7c:	e5c0c519 	strb	ip, [r0, #1305]
        116b80:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: ad_frq_rx_init(TMNPClass5Vars *)
 * Address: 00116b84
 */
ad_frq_rx_init(TMNPClass5Vars *) {
    /*
        116b84:	e3a01000 	mov	r1, #0	; 0x0
        116b88:	e5c01506 	strb	r1, [r0, #1286]
        116b8c:	e5c01507 	strb	r1, [r0, #1287]
        116b90:	e3a02003 	mov	r2, #3	; 0x3
        116b94:	e5c02505 	strb	r2, [r0, #1285]
        116b98:	e3a02080 	mov	r2, #128	; 0x80
        116b9c:	e5c0251a 	strb	r2, [r0, #1306]
        116ba0:	e5c01508 	strb	r1, [r0, #1288]
        116ba4:	e5c0150e 	strb	r1, [r0, #1294]
        116ba8:	e3a01004 	mov	r1, #4	; 0x4
        116bac:	e5c01509 	strb	r1, [r0, #1289]
        116bb0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ad_frq_xmt(TMNPClass5Vars *)
 * Address: 00116d20
 */
ad_frq_xmt(TMNPClass5Vars *) {
    /*
        116d20:	e1a0c00d 	mov	ip, sp
        116d24:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        116d28:	e24cb004 	sub	fp, ip, #4	; 0x4
        116d2c:	e1a04000 	mov	r4, r0
        116d30:	eb63ce0b 	bl	1a0a564 <$ad_frq_encode(TMNPClass5Vars *)>
        116d34:	e5d40530 	ldrb	r0, [r4, #1328]
        116d38:	e5c40529 	strb	r0, [r4, #1321]
        116d3c:	e3300000 	teq	r0, #0	; 0x0
        116d40:	03a01001 	moveq	r1, #1	; 0x1
        116d44:	0a000004 	beq	116d5c <ad_frq_xmt(TMNPClass5Vars *)+0x3c>
        116d48:	e3300007 	teq	r0, #7	; 0x7
        116d4c:	05d41531 	ldreqb	r1, [r4, #1329]
        116d50:	033100fe 	teqeq	r1, #254	; 0xfe
        116d54:	1a000001 	bne	116d60 <ad_frq_xmt(TMNPClass5Vars *)+0x40>
        116d58:	e3a01008 	mov	r1, #8	; 0x8
        116d5c:	e5c41529 	strb	r1, [r4, #1321]
        116d60:	e5d41529 	ldrb	r1, [r4, #1321]
        116d64:	e2811003 	add	r1, r1, #3	; 0x3
        116d68:	e5c41529 	strb	r1, [r4, #1321]
        116d6c:	e1a01000 	mov	r1, r0
        116d70:	e5d40531 	ldrb	r0, [r4, #1329]
        116d74:	e1a01681 	mov	r1, r1, lsl #13
        116d78:	e0810280 	add	r0, r1, r0, lsl #5
        116d7c:	e584052c 	str	r0, [r4, #1324]
        116d80:	e1a00004 	mov	r0, r4
        116d84:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        116d88:	ea63cdfb 	b	1a0a57c <$ad_token_store(TMNPClass5Vars *)>
    */
}

/**
 * Symbol: ad_frq_rcv(TMNPClass5Vars *)
 * Address: 00116d8c
 */
ad_frq_rcv(TMNPClass5Vars *) {
    /*
        116d8c:	e1a0c00d 	mov	ip, sp
        116d90:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        116d94:	e24cb004 	sub	fp, ip, #4	; 0x4
        116d98:	e1a04000 	mov	r4, r0
        116d9c:	e5d00509 	ldrb	r0, [r0, #1289]
        116da0:	e3a05000 	mov	r5, #0	; 0x0
        116da4:	e3a06001 	mov	r6, #1	; 0x1
        116da8:	e3a01080 	mov	r1, #128	; 0x80
        116dac:	e3300000 	teq	r0, #0	; 0x0
        116db0:	1a000001 	bne	116dbc <ad_frq_rcv(TMNPClass5Vars *)+0x30>
        116db4:	e3a0c007 	mov	ip, #7	; 0x7
        116db8:	ea000032 	b	116e88 <ad_frq_rcv(TMNPClass5Vars *)+0xfc>
        116dbc:	e1a00005 	mov	r0, r5
        116dc0:	e3a0c008 	mov	ip, #8	; 0x8
        116dc4:	e5d4250a 	ldrb	r2, [r4, #1290]
        116dc8:	e5d4351a 	ldrb	r3, [r4, #1306]
        116dcc:	e1120003 	tst	r2, r3
        116dd0:	0a000003 	beq	116de4 <ad_frq_rcv(TMNPClass5Vars *)+0x58>
        116dd4:	e5d47508 	ldrb	r7, [r4, #1288]
        116dd8:	e5d4e509 	ldrb	lr, [r4, #1289]
        116ddc:	e087e00e 	add	lr, r7, lr
        116de0:	e5c4e508 	strb	lr, [r4, #1288]
        116de4:	e1a030a3 	mov	r3, r3, lsr #1
        116de8:	e5c4351a 	strb	r3, [r4, #1306]
        116dec:	e5d43509 	ldrb	r3, [r4, #1289]
        116df0:	e1a030a3 	mov	r3, r3, lsr #1
        116df4:	e5c43509 	strb	r3, [r4, #1289]
        116df8:	e213e0ff 	ands	lr, r3, #255	; 0xff
        116dfc:	1a000009 	bne	116e28 <ad_frq_rcv(TMNPClass5Vars *)+0x9c>
        116e00:	e5c4050b 	strb	r0, [r4, #1291]
        116e04:	e5c4050e 	strb	r0, [r4, #1294]
        116e08:	e5c4150d 	strb	r1, [r4, #1293]
        116e0c:	e5d43508 	ldrb	r3, [r4, #1288]
        116e10:	e5c4350c 	strb	r3, [r4, #1292]
        116e14:	e3330000 	teq	r3, #0	; 0x0
        116e18:	05c4650c 	streqb	r6, [r4, #1292]
        116e1c:	0a000001 	beq	116e28 <ad_frq_rcv(TMNPClass5Vars *)+0x9c>
        116e20:	e3330007 	teq	r3, #7	; 0x7
        116e24:	05c4c50c 	streqb	ip, [r4, #1292]
        116e28:	e5d4351a 	ldrb	r3, [r4, #1306]
        116e2c:	e3330000 	teq	r3, #0	; 0x0
        116e30:	05c4151a 	streqb	r1, [r4, #1306]
        116e34:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        116e38:	e33e0000 	teq	lr, #0	; 0x0
        116e3c:	1affffe1 	bne	116dc8 <ad_frq_rcv(TMNPClass5Vars *)+0x3c>
        116e40:	eaffffdb 	b	116db4 <ad_frq_rcv(TMNPClass5Vars *)+0x28>
        116e44:	e5d4e50a 	ldrb	lr, [r4, #1290]
        116e48:	e11e0000 	tst	lr, r0
        116e4c:	0a000004 	beq	116e64 <ad_frq_rcv(TMNPClass5Vars *)+0xd8>
        116e50:	e5d4e50e 	ldrb	lr, [r4, #1294]
        116e54:	e5d4250d 	ldrb	r2, [r4, #1293]
        116e58:	e08e2002 	add	r2, lr, r2
        116e5c:	e5c4250e 	strb	r2, [r4, #1294]
        116e60:	ea000001 	b	116e6c <ad_frq_rcv(TMNPClass5Vars *)+0xe0>
        116e64:	e3320008 	teq	r2, #8	; 0x8
        116e68:	05c4c50c 	streqb	ip, [r4, #1292]
        116e6c:	e5d4250d 	ldrb	r2, [r4, #1293]
        116e70:	e1a020a2 	mov	r2, r2, lsr #1
        116e74:	e5c4250d 	strb	r2, [r4, #1293]
        116e78:	e1a000a0 	mov	r0, r0, lsr #1
        116e7c:	e5c4051a 	strb	r0, [r4, #1306]
        116e80:	e2830001 	add	r0, r3, #1	; 0x1
        116e84:	e5c4050b 	strb	r0, [r4, #1291]
        116e88:	e5d4350b 	ldrb	r3, [r4, #1291]
        116e8c:	e5d4250c 	ldrb	r2, [r4, #1292]
        116e90:	e1530002 	cmp	r3, r2
        116e94:	e5d4051a 	ldrb	r0, [r4, #1306]
        116e98:	aa000002 	bge	116ea8 <ad_frq_rcv(TMNPClass5Vars *)+0x11c>
        116e9c:	e3300000 	teq	r0, #0	; 0x0
        116ea0:	1affffe7 	bne	116e44 <ad_frq_rcv(TMNPClass5Vars *)+0xb8>
        116ea4:	ea000001 	b	116eb0 <ad_frq_rcv(TMNPClass5Vars *)+0x124>
        116ea8:	e3300000 	teq	r0, #0	; 0x0
        116eac:	1a000005 	bne	116ec8 <ad_frq_rcv(TMNPClass5Vars *)+0x13c>
        116eb0:	e5c4151a 	strb	r1, [r4, #1306]
        116eb4:	e5d4050b 	ldrb	r0, [r4, #1291]
        116eb8:	e5d4250c 	ldrb	r2, [r4, #1292]
        116ebc:	e1500002 	cmp	r0, r2
        116ec0:	b1a00005 	movlt	r0, r5
        116ec4:	b91ba8f0 	ldmltdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        116ec8:	e5d4050e 	ldrb	r0, [r4, #1294]
        116ecc:	e3a07004 	mov	r7, #4	; 0x4
        116ed0:	e33000ff 	teq	r0, #255	; 0xff
        116ed4:	1a000006 	bne	116ef4 <ad_frq_rcv(TMNPClass5Vars *)+0x168>
        116ed8:	e1a00005 	mov	r0, r5
        116edc:	e5c45508 	strb	r5, [r4, #1288]
        116ee0:	e5c47509 	strb	r7, [r4, #1289]
        116ee4:	e5c4151a 	strb	r1, [r4, #1306]
        116ee8:	e3a01003 	mov	r1, #3	; 0x3
        116eec:	e5c41505 	strb	r1, [r4, #1285]
        116ef0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        116ef4:	e1a00004 	mov	r0, r4
        116ef8:	eb63cd98 	bl	1a0a560 <$ad_frq_decode(TMNPClass5Vars *)>
        116efc:	e5c45508 	strb	r5, [r4, #1288]
        116f00:	e5c47509 	strb	r7, [r4, #1289]
        116f04:	e1a00006 	mov	r0, r6
        116f08:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: ad_frq_encode(TMNPClass5Vars *)
 * Address: 0011721c
 */
ad_frq_encode(TMNPClass5Vars *) {
    /*
        11721c:	e1a0c00d 	mov	ip, sp
        117220:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        117224:	e24cb004 	sub	fp, ip, #4	; 0x4
        117228:	e1a04000 	mov	r4, r0
        11722c:	e5d0151c 	ldrb	r1, [r0, #1308]
        117230:	e59f0028 	ldr	r0, [pc, #28]	; 117260 <ad_frq_encode(TMNPClass5Vars *)+0x44>
        117234:	e3310000 	teq	r1, #0	; 0x0
        117238:	e5d41532 	ldrb	r1, [r4, #1330]
        11723c:	0a000008 	beq	117264 <ad_frq_encode(TMNPClass5Vars *)+0x48>
        117240:	e7d02081 	ldrb	r2, [r0, r1, lsl #1]
        117244:	e5c42530 	strb	r2, [r4, #1328]
        117248:	e0800081 	add	r0, r0, r1, lsl #1
        11724c:	e5d00001 	ldrb	r0, [r0, #1]
        117250:	e5c40531 	strb	r0, [r4, #1329]
        117254:	e3a00000 	mov	r0, #0	; 0x0
        117258:	e5c4051c 	strb	r0, [r4, #1308]
        11725c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        117260:	00371f98 	mlaeqs	r7, r8, pc, r1
        117264:	e0811004 	add	r1, r1, r4
        117268:	e5d11200 	ldrb	r1, [r1, #512]
        11726c:	e5c41528 	strb	r1, [r4, #1320]
        117270:	e7d02081 	ldrb	r2, [r0, r1, lsl #1]
        117274:	e5c42530 	strb	r2, [r4, #1328]
        117278:	e0800081 	add	r0, r0, r1, lsl #1
        11727c:	e5d00001 	ldrb	r0, [r0, #1]
        117280:	e5c40531 	strb	r0, [r4, #1329]
        117284:	e0840081 	add	r0, r4, r1, lsl #1
        117288:	e5840520 	str	r0, [r4, #1312]
        11728c:	e5d01000 	ldrb	r1, [r0]
        117290:	e2811001 	add	r1, r1, #1	; 0x1
        117294:	e5c01000 	strb	r1, [r0]
        117298:	e5d40528 	ldrb	r0, [r4, #1320]
        11729c:	e3300000 	teq	r0, #0	; 0x0
        1172a0:	11a00004 	movne	r0, r4
        1172a4:	1b640e97 	blne	1a1ad08 <$sort_freq_table(TMNPClass5Vars *)>
        1172a8:	e5d40000 	ldrb	r0, [r4]
        1172ac:	e33000ff 	teq	r0, #255	; 0xff
        1172b0:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        1172b4:	e5844520 	str	r4, [r4, #1312]
        1172b8:	e1a00004 	mov	r0, r4
        1172bc:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1172c0:	ea63e137 	b	1a0f7a4 <$div_freq_table(TMNPClass5Vars *)>
    */
}

/**
 * Symbol: ad_token_store(TMNPClass5Vars *)
 * Address: 001172c4
 */
ad_token_store(TMNPClass5Vars *) {
    /*
        1172c4:	e1a0c00d 	mov	ip, sp
        1172c8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1172cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1172d0:	e1a04000 	mov	r4, r0
        1172d4:	e5d00529 	ldrb	r0, [r0, #1321]
        1172d8:	e3300000 	teq	r0, #0	; 0x0
        1172dc:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        1172e0:	e3a06000 	mov	r6, #0	; 0x0
        1172e4:	e3a05080 	mov	r5, #128	; 0x80
        1172e8:	e5d40529 	ldrb	r0, [r4, #1321]
        1172ec:	e2400001 	sub	r0, r0, #1	; 0x1
        1172f0:	e5c40529 	strb	r0, [r4, #1321]
        1172f4:	e594052c 	ldr	r0, [r4, #1324]
        1172f8:	e3100902 	tst	r0, #32768	; 0x8000
        1172fc:	0a000003 	beq	117310 <ad_token_store(TMNPClass5Vars *)+0x4c>
        117300:	e5d42519 	ldrb	r2, [r4, #1305]
        117304:	e5d4151d 	ldrb	r1, [r4, #1309]
        117308:	e0821001 	add	r1, r2, r1
        11730c:	e5c41519 	strb	r1, [r4, #1305]
        117310:	e5d4151d 	ldrb	r1, [r4, #1309]
        117314:	e1a010a1 	mov	r1, r1, lsr #1
        117318:	e5c4151d 	strb	r1, [r4, #1309]
        11731c:	e1a00080 	mov	r0, r0, lsl #1
        117320:	e584052c 	str	r0, [r4, #1324]
        117324:	e31100ff 	tst	r1, #255	; 0xff
        117328:	1a000005 	bne	117344 <ad_token_store(TMNPClass5Vars *)+0x80>
        11732c:	e5d41519 	ldrb	r1, [r4, #1305]
        117330:	e594053c 	ldr	r0, [r4, #1340]
        117334:	e1a0e00f 	mov	lr, pc
        117338:	e594f534 	ldr	pc, [r4, #1332]
        11733c:	e5c46519 	strb	r6, [r4, #1305]
        117340:	e5c4551d 	strb	r5, [r4, #1309]
        117344:	e5d40529 	ldrb	r0, [r4, #1321]
        117348:	e3300000 	teq	r0, #0	; 0x0
        11734c:	1affffe5 	bne	1172e8 <ad_token_store(TMNPClass5Vars *)+0x24>
        117350:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: ad_token_flush(TMNPClass5Vars *)
 * Address: 00117354
 */
ad_token_flush(TMNPClass5Vars *) {
    /*
        117354:	e1a0c00d 	mov	ip, sp
        117358:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11735c:	e24cb004 	sub	fp, ip, #4	; 0x4
        117360:	e1a04000 	mov	r4, r0
        117364:	e5d0051d 	ldrb	r0, [r0, #1309]
        117368:	e3300080 	teq	r0, #128	; 0x80
        11736c:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        117370:	e3a0000b 	mov	r0, #11	; 0xb
        117374:	e5c40529 	strb	r0, [r4, #1321]
        117378:	e3a00801 	mov	r0, #65536	; 0x10000
        11737c:	e2400001 	sub	r0, r0, #1	; 0x1
        117380:	e584052c 	str	r0, [r4, #1324]
        117384:	e1a00004 	mov	r0, r4
        117388:	eb63cc7b 	bl	1a0a57c <$ad_token_store(TMNPClass5Vars *)>
        11738c:	e5d4051d 	ldrb	r0, [r4, #1309]
        117390:	e3300080 	teq	r0, #128	; 0x80
        117394:	0a000007 	beq	1173b8 <ad_token_flush(TMNPClass5Vars *)+0x64>
        117398:	e3a010ff 	mov	r1, #255	; 0xff
        11739c:	e594053c 	ldr	r0, [r4, #1340]
        1173a0:	e1a0e00f 	mov	lr, pc
        1173a4:	e594f534 	ldr	pc, [r4, #1332]
        1173a8:	e3a00000 	mov	r0, #0	; 0x0
        1173ac:	e5c40519 	strb	r0, [r4, #1305]
        1173b0:	e3a00080 	mov	r0, #128	; 0x80
        1173b4:	e5c4051d 	strb	r0, [r4, #1309]
        1173b8:	e3a00003 	mov	r0, #3	; 0x3
        1173bc:	e5c40501 	strb	r0, [r4, #1281]
        1173c0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: ad_frq_decode(TMNPClass5Vars *)
 * Address: 001173c4
 */
ad_frq_decode(TMNPClass5Vars *) {
    /*
        1173c4:	e1a0c00d 	mov	ip, sp
        1173c8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1173cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1173d0:	e1a04000 	mov	r4, r0
        1173d4:	e5d00508 	ldrb	r0, [r0, #1288]
        1173d8:	e3500007 	cmp	r0, #7	; 0x7
        1173dc:	908ff100 	addls	pc, pc, r0, lsl #2
        1173e0:	ea000025 	b	11747c <ad_frq_decode(TMNPClass5Vars *)+0xb8>
        1173e4:	ea000009 	b	117410 <ad_frq_decode(TMNPClass5Vars *)+0x4c>
        1173e8:	ea00000b 	b	11741c <ad_frq_decode(TMNPClass5Vars *)+0x58>
        1173ec:	ea00000e 	b	11742c <ad_frq_decode(TMNPClass5Vars *)+0x68>
        1173f0:	ea000011 	b	11743c <ad_frq_decode(TMNPClass5Vars *)+0x78>
        1173f4:	ea000014 	b	11744c <ad_frq_decode(TMNPClass5Vars *)+0x88>
        1173f8:	ea000017 	b	11745c <ad_frq_decode(TMNPClass5Vars *)+0x98>
        1173fc:	ea00001a 	b	11746c <ad_frq_decode(TMNPClass5Vars *)+0xa8>
        117400:	e5d4050e 	ldrb	r0, [r4, #1294]
        117404:	e3a01080 	mov	r1, #128	; 0x80
        117408:	e08100c0 	add	r0, r1, r0, asr #1
        11740c:	ea000019 	b	117478 <ad_frq_decode(TMNPClass5Vars *)+0xb4>
        117410:	e5d4050e 	ldrb	r0, [r4, #1294]
        117414:	e1a003a0 	mov	r0, r0, lsr #7
        117418:	ea000016 	b	117478 <ad_frq_decode(TMNPClass5Vars *)+0xb4>
        11741c:	e5d4050e 	ldrb	r0, [r4, #1294]
        117420:	e3a01002 	mov	r1, #2	; 0x2
        117424:	e08103c0 	add	r0, r1, r0, asr #7
        117428:	ea000012 	b	117478 <ad_frq_decode(TMNPClass5Vars *)+0xb4>
        11742c:	e5d4150e 	ldrb	r1, [r4, #1294]
        117430:	e3a00004 	mov	r0, #4	; 0x4
        117434:	e0800341 	add	r0, r0, r1, asr #6
        117438:	ea00000e 	b	117478 <ad_frq_decode(TMNPClass5Vars *)+0xb4>
        11743c:	e5d4050e 	ldrb	r0, [r4, #1294]
        117440:	e3a01008 	mov	r1, #8	; 0x8
        117444:	e08102c0 	add	r0, r1, r0, asr #5
        117448:	ea00000a 	b	117478 <ad_frq_decode(TMNPClass5Vars *)+0xb4>
        11744c:	e5d4150e 	ldrb	r1, [r4, #1294]
        117450:	e3a00010 	mov	r0, #16	; 0x10
        117454:	e0800241 	add	r0, r0, r1, asr #4
        117458:	ea000006 	b	117478 <ad_frq_decode(TMNPClass5Vars *)+0xb4>
        11745c:	e5d4150e 	ldrb	r1, [r4, #1294]
        117460:	e3a00020 	mov	r0, #32	; 0x20
        117464:	e08001c1 	add	r0, r0, r1, asr #3
        117468:	ea000002 	b	117478 <ad_frq_decode(TMNPClass5Vars *)+0xb4>
        11746c:	e5d4150e 	ldrb	r1, [r4, #1294]
        117470:	e3a00040 	mov	r0, #64	; 0x40
        117474:	e0800141 	add	r0, r0, r1, asr #2
        117478:	e5c4050f 	strb	r0, [r4, #1295]
        11747c:	e5d40505 	ldrb	r0, [r4, #1285]
        117480:	e3300000 	teq	r0, #0	; 0x0
        117484:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        117488:	e5d4050f 	ldrb	r0, [r4, #1295]
        11748c:	e0840080 	add	r0, r4, r0, lsl #1
        117490:	e24000ff 	sub	r0, r0, #255	; 0xff
        117494:	e2800b01 	add	r0, r0, #1024	; 0x400
        117498:	e5840520 	str	r0, [r4, #1312]
        11749c:	e4501001 	ldrb	r1, [r0], -#1
        1174a0:	e5c4150f 	strb	r1, [r4, #1295]
        1174a4:	e5840520 	str	r0, [r4, #1312]
        1174a8:	e5d01000 	ldrb	r1, [r0]
        1174ac:	e2811001 	add	r1, r1, #1	; 0x1
        1174b0:	e5c01000 	strb	r1, [r0]
        1174b4:	e5940520 	ldr	r0, [r4, #1312]
        1174b8:	e5d00000 	ldrb	r0, [r0]
        1174bc:	e3300000 	teq	r0, #0	; 0x0
        1174c0:	11a00004 	movne	r0, r4
        1174c4:	1b63e0b1 	blne	1a0f790 <$desort_freq_table(TMNPClass5Vars *)>
        1174c8:	e5d40300 	ldrb	r0, [r4, #768]
        1174cc:	e33000ff 	teq	r0, #255	; 0xff
        1174d0:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        1174d4:	e2840c03 	add	r0, r4, #768	; 0x300
        1174d8:	e5840520 	str	r0, [r4, #1312]
        1174dc:	e1a00004 	mov	r0, r4
        1174e0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1174e4:	ea63e0ae 	b	1a0f7a4 <$div_freq_table(TMNPClass5Vars *)>
    */
}

/**
 * Symbol: AddPageTable__FUlN21
 * Address: 0011c2e8
 */
void globals::AddPageTable() {
    /*
        11c2e8:	e3a00000 	mov	r0, #0	; 0x0
        11c2ec:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: AreGlobalsInitialized
 * Address: 0011ed60
 */
void globals::AreGlobalsInitialized() {
    /*
        11ed60:	e3a00303 	mov	r0, #201326592	; 0xc000000
        11ed64:	e5900004 	ldr	r0, [r0, #4]
        11ed68:	e59fc010 	ldr	ip, [pc, #10]	; 11ed80 <AreGlobalsInitialized+0x20>
        11ed6c:	e130000c 	teq	r0, ip
        11ed70:	13a00000 	movne	r0, #0	; 0x0
        11ed74:	03a00001 	moveq	r0, #1	; 0x1
        11ed78:	e20000ff 	and	r0, r0, #255	; 0xff
        11ed7c:	e1a0f00e 	mov	pc, lr
        11ed80:	74727565 	ldrvcbt	r7, [r2], -#1381
    */
}

/**
 * Symbol: ArrayRemove__FRC6RefVarN21
 * Address: 00128c3c
 */
void globals::ArrayRemove() {
    /*
        128c3c:	e1a0c00d 	mov	ip, sp
        128c40:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        128c44:	e24cb004 	sub	fp, ip, #4	; 0x4
        128c48:	e1a05000 	mov	r5, r0
        128c4c:	e1a04001 	mov	r4, r1
        128c50:	e1a06002 	mov	r6, r2
        128c54:	e24dd004 	sub	sp, sp, #4	; 0x4
        128c58:	e3a07000 	mov	r7, #0	; 0x0
        128c5c:	e5910000 	ldr	r0, [r1]
        128c60:	e5901000 	ldr	r1, [r0]
        128c64:	e5950000 	ldr	r0, [r5]
        128c68:	e5900000 	ldr	r0, [r0]
        128c6c:	eb6a6d7b 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        128c70:	eb6a6535 	bl	1bc214c <$AllocateRefHandle(long)>
        128c74:	e58d0000 	str	r0, [sp]
        128c78:	e5900000 	ldr	r0, [r0]
        128c7c:	e3300002 	teq	r0, #2	; 0x2
        128c80:	0a000015 	beq	128cdc <ArrayRemove__FRC6RefVarN21+0xa0>
        128c84:	e1a01006 	mov	r1, r6
        128c88:	e1a0000d 	mov	r0, sp
        128c8c:	eb6b7df0 	bl	1c08454 <$ArrayRemove__FRC6RefVarT1>
        128c90:	e3300000 	teq	r0, #0	; 0x0
        128c94:	0a000010 	beq	128cdc <ArrayRemove__FRC6RefVarN21+0xa0>
        128c98:	e24dd004 	sub	sp, sp, #4	; 0x4
        128c9c:	e59d0004 	ldr	r0, [sp, #4]
        128ca0:	e5900000 	ldr	r0, [r0]
        128ca4:	eb6a7180 	bl	1bc52ac <$Length(long)>
        128ca8:	e3300000 	teq	r0, #0	; 0x0
        128cac:	1a000008 	bne	128cd4 <ArrayRemove__FRC6RefVarN21+0x98>
        128cb0:	e3a00002 	mov	r0, #2	; 0x2
        128cb4:	eb6a6524 	bl	1bc214c <$AllocateRefHandle(long)>
        128cb8:	e58d0000 	str	r0, [sp]
        128cbc:	e1a0200d 	mov	r2, sp
        128cc0:	e1a01004 	mov	r1, r4
        128cc4:	e1a00005 	mov	r0, r5
        128cc8:	eb6a75a6 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        128ccc:	e59d0000 	ldr	r0, [sp]
        128cd0:	eb6a6939 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        128cd4:	e3a07001 	mov	r7, #1	; 0x1
        128cd8:	e28dd004 	add	sp, sp, #4	; 0x4
        128cdc:	e59d0000 	ldr	r0, [sp]
        128ce0:	eb6a6935 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        128ce4:	e1a00007 	mov	r0, r7
        128ce8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: ArrayAppend__FRC6RefVarN21
 * Address: 00128cec
 */
void globals::ArrayAppend() {
    /*
        128cec:	e1a0c00d 	mov	ip, sp
        128cf0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        128cf4:	e24cb004 	sub	fp, ip, #4	; 0x4
        128cf8:	e1a06000 	mov	r6, r0
        128cfc:	e1a05001 	mov	r5, r1
        128d00:	e1a04002 	mov	r4, r2
        128d04:	e24dd004 	sub	sp, sp, #4	; 0x4
        128d08:	e5910000 	ldr	r0, [r1]
        128d0c:	e5901000 	ldr	r1, [r0]
        128d10:	e5960000 	ldr	r0, [r6]
        128d14:	e5900000 	ldr	r0, [r0]
        128d18:	eb6a6d50 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        128d1c:	eb6a650a 	bl	1bc214c <$AllocateRefHandle(long)>
        128d20:	e58d0000 	str	r0, [sp]
        128d24:	e5900000 	ldr	r0, [r0]
        128d28:	e3a07000 	mov	r7, #0	; 0x0
        128d2c:	e3300002 	teq	r0, #2	; 0x2
        128d30:	1a00000c 	bne	128d68 <ArrayAppend__FRC6RefVarN21+0x7c>
        128d34:	e3a00001 	mov	r0, #1	; 0x1
        128d38:	eb65cc17 	bl	1a9bd9c <$MakeArray(long)>
        128d3c:	e59d1000 	ldr	r1, [sp]
        128d40:	e5810000 	str	r0, [r1]
        128d44:	e5941000 	ldr	r1, [r4]
        128d48:	e5912000 	ldr	r2, [r1]
        128d4c:	e1a01007 	mov	r1, r7
        128d50:	eb6a7580 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        128d54:	e1a0200d 	mov	r2, sp
        128d58:	e1a01005 	mov	r1, r5
        128d5c:	e1a00006 	mov	r0, r6
        128d60:	eb6a7580 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        128d64:	ea000002 	b	128d74 <ArrayAppend__FRC6RefVarN21+0x88>
        128d68:	e1a01004 	mov	r1, r4
        128d6c:	e1a0000d 	mov	r0, sp
        128d70:	eb6a64ec 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        128d74:	e59d0000 	ldr	r0, [sp]
        128d78:	eb6a690f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        128d7c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: ArrayPop(RefVar const &)
 * Address: 00128d80
 */
ArrayPop(RefVar const &) {
    /*
        128d80:	e1a0c00d 	mov	ip, sp
        128d84:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        128d88:	e24cb004 	sub	fp, ip, #4	; 0x4
        128d8c:	e1a04000 	mov	r4, r0
        128d90:	e5900000 	ldr	r0, [r0]
        128d94:	e5900000 	ldr	r0, [r0]
        128d98:	eb6a7143 	bl	1bc52ac <$Length(long)>
        128d9c:	e2406001 	sub	r6, r0, #1	; 0x1
        128da0:	e5940000 	ldr	r0, [r4]
        128da4:	e5900000 	ldr	r0, [r0]
        128da8:	e1a01006 	mov	r1, r6
        128dac:	eb6a6d28 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        128db0:	eb6a64e5 	bl	1bc214c <$AllocateRefHandle(long)>
        128db4:	e1a05000 	mov	r5, r0
        128db8:	e1a01006 	mov	r1, r6
        128dbc:	e1a00004 	mov	r0, r4
        128dc0:	eb6a7569 	bl	1bc636c <$SetLength(RefVar const &, long)>
        128dc4:	e5954000 	ldr	r4, [r5]
        128dc8:	e1a00005 	mov	r0, r5
        128dcc:	eb6a68fa 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        128dd0:	e1a00004 	mov	r0, r4
        128dd4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: ArrayIsEmpty(RefVar const &)
 * Address: 00128dd8
 */
ArrayIsEmpty(RefVar const &) {
    /*
        128dd8:	e1a0c00d 	mov	ip, sp
        128ddc:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        128de0:	e24cb004 	sub	fp, ip, #4	; 0x4
        128de4:	e5900000 	ldr	r0, [r0]
        128de8:	e5900000 	ldr	r0, [r0]
        128dec:	eb6a712e 	bl	1bc52ac <$Length(long)>
        128df0:	e3300000 	teq	r0, #0	; 0x0
        128df4:	13a00000 	movne	r0, #0	; 0x0
        128df8:	03a00001 	moveq	r0, #1	; 0x1
        128dfc:	e20000ff 	and	r0, r0, #255	; 0xff
        128e00:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: ArrayGrowAt__FRC6RefVarlT2
 * Address: 00128e04
 */
void globals::ArrayGrowAt() {
    /*
        128e04:	e1a0c00d 	mov	ip, sp
        128e08:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        128e0c:	e24cb004 	sub	fp, ip, #4	; 0x4
        128e10:	e1a05000 	mov	r5, r0
        128e14:	e1a04001 	mov	r4, r1
        128e18:	e1a06002 	mov	r6, r2
        128e1c:	e5900000 	ldr	r0, [r0]
        128e20:	e5900000 	ldr	r0, [r0]
        128e24:	eb6a7120 	bl	1bc52ac <$Length(long)>
        128e28:	e1a07000 	mov	r7, r0
        128e2c:	e3540000 	cmp	r4, #0	; 0x0
        128e30:	ba000001 	blt	128e3c <ArrayGrowAt__FRC6RefVarlT2+0x38>
        128e34:	e1540007 	cmp	r4, r7
        128e38:	da000000 	ble	128e40 <ArrayGrowAt__FRC6RefVarlT2+0x3c>
        128e3c:	e1a04007 	mov	r4, r7
        128e40:	e0871006 	add	r1, r7, r6
        128e44:	e1a00005 	mov	r0, r5
        128e48:	eb6a7547 	bl	1bc636c <$SetLength(RefVar const &, long)>
        128e4c:	e2477001 	sub	r7, r7, #1	; 0x1
        128e50:	e1570004 	cmp	r7, r4
        128e54:	b91babf0 	ldmltdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        128e58:	e0879006 	add	r9, r7, r6
        128e5c:	e1a01007 	mov	r1, r7
        128e60:	e5950000 	ldr	r0, [r5]
        128e64:	e5900000 	ldr	r0, [r0]
        128e68:	eb6a6cf9 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        128e6c:	eb6a64b6 	bl	1bc214c <$AllocateRefHandle(long)>
        128e70:	e1a08000 	mov	r8, r0
        128e74:	e1a01009 	mov	r1, r9
        128e78:	e5902000 	ldr	r2, [r0]
        128e7c:	e5950000 	ldr	r0, [r5]
        128e80:	e5900000 	ldr	r0, [r0]
        128e84:	eb6a7533 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        128e88:	e1a00008 	mov	r0, r8
        128e8c:	eb6a68ca 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        128e90:	e2477001 	sub	r7, r7, #1	; 0x1
        128e94:	e1570004 	cmp	r7, r4
        128e98:	aaffffee 	bge	128e58 <ArrayGrowAt__FRC6RefVarlT2+0x54>
        128e9c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: ArrayInsertAt(RefVar const &, long, long)
 * Address: 00128ea0
 */
ArrayInsertAt(RefVar const &, long, long) {
    /*
        128ea0:	e1a0c00d 	mov	ip, sp
        128ea4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        128ea8:	e24cb004 	sub	fp, ip, #4	; 0x4
        128eac:	e1a05000 	mov	r5, r0
        128eb0:	e1a04001 	mov	r4, r1
        128eb4:	e1a06002 	mov	r6, r2
        128eb8:	e3a02001 	mov	r2, #1	; 0x1
        128ebc:	eb6585a1 	bl	1a8a548 <$ArrayGrowAt__FRC6RefVarlT2>
        128ec0:	e5960000 	ldr	r0, [r6]
        128ec4:	e1a01004 	mov	r1, r4
        128ec8:	e5902000 	ldr	r2, [r0]
        128ecc:	e5950000 	ldr	r0, [r5]
        128ed0:	e5900000 	ldr	r0, [r0]
        128ed4:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        128ed8:	ea6a751e 	b	1bc6358 <$SetArraySlotRef__FlN21>
    */
}

/**
 * Symbol: AddressToRef(void *)
 * Address: 001292e0
 */
AddressToRef(void *) {
    /*
        1292e0:	e1a00120 	mov	r0, r0, lsr #2
        1292e4:	e1a00100 	mov	r0, r0, lsl #2
        1292e8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: AddToDataBase(void *, _NWTSAMPLE *, unsigned short)
 * Address: 0012d918
 */
AddToDataBase(void *, _NWTSAMPLE *, unsigned short) {
    /*
        12d918:	e1a0c00d 	mov	ip, sp
        12d91c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        12d920:	e24cb004 	sub	fp, ip, #4	; 0x4
        12d924:	e1a05000 	mov	r5, r0
        12d928:	e1b04001 	movs	r4, r1
        12d92c:	e1a09802 	mov	r9, r2, lsl #16
        12d930:	e1a09829 	mov	r9, r9, lsr #16
        12d934:	13390000 	teqne	r9, #0	; 0x0
        12d938:	13350000 	teqne	r5, #0	; 0x0
        12d93c:	0a00009a 	beq	12dbac <AddToDataBase(void *, _NWTSAMPLE *, unsigned short)+0x294>
        12d940:	e1a07005 	mov	r7, r5
        12d944:	e2856010 	add	r6, r5, #16	; 0x10
        12d948:	e3a08000 	mov	r8, #0	; 0x0
        12d94c:	e5950006 	ldr	r0, [r5, #6]
        12d950:	e1a00820 	mov	r0, r0, lsr #16
        12d954:	e3500000 	cmp	r0, #0	; 0x0
        12d958:	da00000a 	ble	12d988 <AddToDataBase(void *, _NWTSAMPLE *, unsigned short)+0x70>
        12d95c:	e5961000 	ldr	r1, [r6]
        12d960:	e1390821 	teq	r9, r1, lsr #16
        12d964:	05941002 	ldreq	r1, [r4, #2]
        12d968:	01a01821 	moveq	r1, r1, lsr #16
        12d96c:	05962002 	ldreq	r2, [r6, #2]
        12d970:	01310822 	teqeq	r1, r2, lsr #16
        12d974:	0a000003 	beq	12d988 <AddToDataBase(void *, _NWTSAMPLE *, unsigned short)+0x70>
        12d978:	e2888001 	add	r8, r8, #1	; 0x1
        12d97c:	e286600c 	add	r6, r6, #12	; 0xc
        12d980:	e1500008 	cmp	r0, r8
        12d984:	cafffff4 	bgt	12d95c <AddToDataBase(void *, _NWTSAMPLE *, unsigned short)+0x44>
        12d988:	e1300008 	teq	r0, r8
        12d98c:	1a00003e 	bne	12da8c <AddToDataBase(void *, _NWTSAMPLE *, unsigned short)+0x174>
        12d990:	e597000c 	ldr	r0, [r7, #12]
        12d994:	e2801020 	add	r1, r0, #32	; 0x20
        12d998:	e5972008 	ldr	r2, [r7, #8]
        12d99c:	e1510002 	cmp	r1, r2
        12d9a0:	8a000081 	bhi	12dbac <AddToDataBase(void *, _NWTSAMPLE *, unsigned short)+0x294>
        12d9a4:	e0461005 	sub	r1, r6, r5
        12d9a8:	e0402001 	sub	r2, r0, r1
        12d9ac:	e286000c 	add	r0, r6, #12	; 0xc
        12d9b0:	e1a01006 	mov	r1, r6
        12d9b4:	eb6a1c26 	bl	1bb4a54 <$memmove>
        12d9b8:	e597000c 	ldr	r0, [r7, #12]
        12d9bc:	e280000c 	add	r0, r0, #12	; 0xc
        12d9c0:	e587000c 	str	r0, [r7, #12]
        12d9c4:	e5970006 	ldr	r0, [r7, #6]
        12d9c8:	e1a00820 	mov	r0, r0, lsr #16
        12d9cc:	e2800001 	add	r0, r0, #1	; 0x1
        12d9d0:	e5c70007 	strb	r0, [r7, #7]
        12d9d4:	e1a00440 	mov	r0, r0, asr #8
        12d9d8:	e5c70006 	strb	r0, [r7, #6]
        12d9dc:	e5c69001 	strb	r9, [r6, #1]
        12d9e0:	e1a0a449 	mov	sl, r9, asr #8
        12d9e4:	e5c6a000 	strb	sl, [r6]
        12d9e8:	e5940002 	ldr	r0, [r4, #2]
        12d9ec:	e1a00820 	mov	r0, r0, lsr #16
        12d9f0:	e5c60003 	strb	r0, [r6, #3]
        12d9f4:	e1a00440 	mov	r0, r0, asr #8
        12d9f8:	e5c60002 	strb	r0, [r6, #2]
        12d9fc:	e3a00000 	mov	r0, #0	; 0x0
        12da00:	e5c60005 	strb	r0, [r6, #5]
        12da04:	e5c60004 	strb	r0, [r6, #4]
        12da08:	e597000c 	ldr	r0, [r7, #12]
        12da0c:	e5860008 	str	r0, [r6, #8]
        12da10:	e597000c 	ldr	r0, [r7, #12]
        12da14:	e0805005 	add	r5, r0, r5
        12da18:	e1a01004 	mov	r1, r4
        12da1c:	e1a00005 	mov	r0, r5
        12da20:	e3a02014 	mov	r2, #20	; 0x14
        12da24:	eb6a1c0a 	bl	1bb4a54 <$memmove>
        12da28:	e5c59001 	strb	r9, [r5, #1]
        12da2c:	e5c5a000 	strb	sl, [r5]
        12da30:	e5c58003 	strb	r8, [r5, #3]
        12da34:	e1a00428 	mov	r0, r8, lsr #8
        12da38:	e5c50002 	strb	r0, [r5, #2]
        12da3c:	e3a00000 	mov	r0, #0	; 0x0
        12da40:	e5c50005 	strb	r0, [r5, #5]
        12da44:	e5c50004 	strb	r0, [r5, #4]
        12da48:	e3a00001 	mov	r0, #1	; 0x1
        12da4c:	e5c60007 	strb	r0, [r6, #7]
        12da50:	e3a00000 	mov	r0, #0	; 0x0
        12da54:	e5c60006 	strb	r0, [r6, #6]
        12da58:	e597000c 	ldr	r0, [r7, #12]
        12da5c:	e2800014 	add	r0, r0, #20	; 0x14
        12da60:	e5a7000c 	str	r0, [r7, #12]!
        12da64:	e2580001 	subs	r0, r8, #1	; 0x1
        12da68:	e246100c 	sub	r1, r6, #12	; 0xc
        12da6c:	4a00004c 	bmi	12dba4 <AddToDataBase(void *, _NWTSAMPLE *, unsigned short)+0x28c>
        12da70:	e5912008 	ldr	r2, [r1, #8]
        12da74:	e282200c 	add	r2, r2, #12	; 0xc
        12da78:	e2500001 	subs	r0, r0, #1	; 0x1
        12da7c:	e5812008 	str	r2, [r1, #8]
        12da80:	e241100c 	sub	r1, r1, #12	; 0xc
        12da84:	5afffff9 	bpl	12da70 <AddToDataBase(void *, _NWTSAMPLE *, unsigned short)+0x158>
        12da88:	ea000045 	b	12dba4 <AddToDataBase(void *, _NWTSAMPLE *, unsigned short)+0x28c>
        12da8c:	e5960008 	ldr	r0, [r6, #8]
        12da90:	e0805005 	add	r5, r0, r5
        12da94:	e5962006 	ldr	r2, [r6, #6]
        12da98:	e1a02822 	mov	r2, r2, lsr #16
        12da9c:	e3520020 	cmp	r2, #32	; 0x20
        12daa0:	aa000004 	bge	12dab8 <AddToDataBase(void *, _NWTSAMPLE *, unsigned short)+0x1a0>
        12daa4:	e597100c 	ldr	r1, [r7, #12]
        12daa8:	e2813014 	add	r3, r1, #20	; 0x14
        12daac:	e597c008 	ldr	ip, [r7, #8]
        12dab0:	e153000c 	cmp	r3, ip
        12dab4:	9a000013 	bls	12db08 <AddToDataBase(void *, _NWTSAMPLE *, unsigned short)+0x1f0>
        12dab8:	e2420001 	sub	r0, r2, #1	; 0x1
        12dabc:	e0802100 	add	r2, r0, r0, lsl #2
        12dac0:	e1a02102 	mov	r2, r2, lsl #2
        12dac4:	e2850014 	add	r0, r5, #20	; 0x14
        12dac8:	e1a01005 	mov	r1, r5
        12dacc:	eb6a1be0 	bl	1bb4a54 <$memmove>
        12dad0:	e1a01004 	mov	r1, r4
        12dad4:	e1a00005 	mov	r0, r5
        12dad8:	e3a02014 	mov	r2, #20	; 0x14
        12dadc:	eb6a1bdc 	bl	1bb4a54 <$memmove>
        12dae0:	e5c59001 	strb	r9, [r5, #1]
        12dae4:	e1a00449 	mov	r0, r9, asr #8
        12dae8:	e5c50000 	strb	r0, [r5]
        12daec:	e5c58003 	strb	r8, [r5, #3]
        12daf0:	e1a00428 	mov	r0, r8, lsr #8
        12daf4:	e5c50002 	strb	r0, [r5, #2]
        12daf8:	e3a00000 	mov	r0, #0	; 0x0
        12dafc:	e5c50005 	strb	r0, [r5, #5]
        12db00:	e5c50004 	strb	r0, [r5, #4]
        12db04:	ea000026 	b	12dba4 <AddToDataBase(void *, _NWTSAMPLE *, unsigned short)+0x28c>
        12db08:	e0412000 	sub	r2, r1, r0
        12db0c:	e2850014 	add	r0, r5, #20	; 0x14
        12db10:	e1a01005 	mov	r1, r5
        12db14:	eb6a1bce 	bl	1bb4a54 <$memmove>
        12db18:	e1a01004 	mov	r1, r4
        12db1c:	e1a00005 	mov	r0, r5
        12db20:	e3a02014 	mov	r2, #20	; 0x14
        12db24:	eb6a1bca 	bl	1bb4a54 <$memmove>
        12db28:	e5c59001 	strb	r9, [r5, #1]
        12db2c:	e1a00449 	mov	r0, r9, asr #8
        12db30:	e5c50000 	strb	r0, [r5]
        12db34:	e5c58003 	strb	r8, [r5, #3]
        12db38:	e1a00428 	mov	r0, r8, lsr #8
        12db3c:	e5c50002 	strb	r0, [r5, #2]
        12db40:	e3a00000 	mov	r0, #0	; 0x0
        12db44:	e5c50005 	strb	r0, [r5, #5]
        12db48:	e5c50004 	strb	r0, [r5, #4]
        12db4c:	e5960006 	ldr	r0, [r6, #6]
        12db50:	e1a00820 	mov	r0, r0, lsr #16
        12db54:	e2800001 	add	r0, r0, #1	; 0x1
        12db58:	e5c60007 	strb	r0, [r6, #7]
        12db5c:	e1a00440 	mov	r0, r0, asr #8
        12db60:	e5c60006 	strb	r0, [r6, #6]
        12db64:	e597000c 	ldr	r0, [r7, #12]
        12db68:	e2800014 	add	r0, r0, #20	; 0x14
        12db6c:	e587000c 	str	r0, [r7, #12]
        12db70:	e2880001 	add	r0, r8, #1	; 0x1
        12db74:	e286100c 	add	r1, r6, #12	; 0xc
        12db78:	e5972006 	ldr	r2, [r7, #6]
        12db7c:	e1500822 	cmp	r0, r2, lsr #16
        12db80:	aa000007 	bge	12dba4 <AddToDataBase(void *, _NWTSAMPLE *, unsigned short)+0x28c>
        12db84:	e5912008 	ldr	r2, [r1, #8]
        12db88:	e2822014 	add	r2, r2, #20	; 0x14
        12db8c:	e2800001 	add	r0, r0, #1	; 0x1
        12db90:	e5a12008 	str	r2, [r1, #8]!
        12db94:	e2811004 	add	r1, r1, #4	; 0x4
        12db98:	e5972006 	ldr	r2, [r7, #6]
        12db9c:	e1500822 	cmp	r0, r2, lsr #16
        12dba0:	bafffff7 	blt	12db84 <AddToDataBase(void *, _NWTSAMPLE *, unsigned short)+0x26c>
        12dba4:	e3a00001 	mov	r0, #1	; 0x1
        12dba8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        12dbac:	e3a00000 	mov	r0, #0	; 0x0
        12dbb0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: ApproxFixATan2Cycles
 * Address: 001337d8
 */
void globals::ApproxFixATan2Cycles() {
    /*
        1337d8:	e1a0c00d 	mov	ip, sp
        1337dc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1337e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1337e4:	e1b04000 	movs	r4, r0
        1337e8:	e1a06001 	mov	r6, r1
        1337ec:	1a000004 	bne	133804 <ApproxFixATan2Cycles+0x2c>
        1337f0:	e3560000 	cmp	r6, #0	; 0x0
        1337f4:	a3a00000 	movge	r0, #0	; 0x0
        1337f8:	b3a009fe 	movlt	r0, #4161536	; 0x3f8000
        1337fc:	b2400501 	sublt	r0, r0, #4194304	; 0x400000
        133800:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        133804:	e3560000 	cmp	r6, #0	; 0x0
        133808:	b2661000 	rsblt	r1, r6, #0	; 0x0
        13380c:	a1a01006 	movge	r1, r6
        133810:	e3540000 	cmp	r4, #0	; 0x0
        133814:	b2640000 	rsblt	r0, r4, #0	; 0x0
        133818:	a1a00004 	movge	r0, r4
        13381c:	e3a050be 	mov	r5, #190	; 0xbe
        133820:	e2855b0a 	add	r5, r5, #10240	; 0x2800
        133824:	e1510000 	cmp	r1, r0
        133828:	da000012 	ble	133878 <ApproxFixATan2Cycles+0xa0>
        13382c:	e1a01006 	mov	r1, r6
        133830:	e1a00004 	mov	r0, r4
        133834:	eb6ab621 	bl	1be10c0 <$FixedDivide>
        133838:	e1a01000 	mov	r1, r0
        13383c:	e1a07000 	mov	r7, r0
        133840:	eb6ab61f 	bl	1be10c4 <$FixedMultiply>
        133844:	e1a01007 	mov	r1, r7
        133848:	eb6ab61d 	bl	1be10c4 <$FixedMultiply>
        13384c:	e1a04000 	mov	r4, r0
        133850:	e0471000 	sub	r1, r7, r0
        133854:	e1a00005 	mov	r0, r5
        133858:	eb6ab619 	bl	1be10c4 <$FixedMultiply>
        13385c:	e08001c4 	add	r0, r0, r4, asr #3
        133860:	e3560000 	cmp	r6, #0	; 0x0
        133864:	a91ba8f0 	ldmgedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        133868:	e3500000 	cmp	r0, #0	; 0x0
        13386c:	a2400902 	subge	r0, r0, #32768	; 0x8000
        133870:	b2800902 	addlt	r0, r0, #32768	; 0x8000
        133874:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        133878:	e1a01004 	mov	r1, r4
        13387c:	e1a00006 	mov	r0, r6
        133880:	eb6ab60e 	bl	1be10c0 <$FixedDivide>
        133884:	e2600000 	rsb	r0, r0, #0	; 0x0
        133888:	e1a07000 	mov	r7, r0
        13388c:	e1a01000 	mov	r1, r0
        133890:	eb6ab60b 	bl	1be10c4 <$FixedMultiply>
        133894:	e1a01007 	mov	r1, r7
        133898:	eb6ab609 	bl	1be10c4 <$FixedMultiply>
        13389c:	e1a06000 	mov	r6, r0
        1338a0:	e0471000 	sub	r1, r7, r0
        1338a4:	e1a00005 	mov	r0, r5
        1338a8:	eb6ab605 	bl	1be10c4 <$FixedMultiply>
        1338ac:	e08001c6 	add	r0, r0, r6, asr #3
        1338b0:	e3540000 	cmp	r4, #0	; 0x0
        1338b4:	a2800901 	addge	r0, r0, #16384	; 0x4000
        1338b8:	b2400901 	sublt	r0, r0, #16384	; 0x4000
        1338bc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: AddToChain(TDictChain **, dictListEntry *)
 * Address: 0013d628
 */
AddToChain(TDictChain **, dictListEntry *) {
    /*
        13d628:	e1a0c00d 	mov	ip, sp
        13d62c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        13d630:	e24cb004 	sub	fp, ip, #4	; 0x4
        13d634:	e1a04000 	mov	r4, r0
        13d638:	e1a05001 	mov	r5, r1
        13d63c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        13d640:	e3a00002 	mov	r0, #2	; 0x2
        13d644:	eb6a12c0 	bl	1bc214c <$AllocateRefHandle(long)>
        13d648:	e58d0000 	str	r0, [sp]
        13d64c:	e5d5a004 	ldrb	sl, [r5, #4]
        13d650:	e3a09000 	mov	r9, #0	; 0x0
        13d654:	e59f10c8 	ldr	r1, [pc, #c8]	; 13d724 <AddToChain(TDictChain **, dictListEntry *)+0xfc>
        13d658:	e58d1008 	str	r1, [sp, #8]
        13d65c:	e59f10c4 	ldr	r1, [pc, #c4]	; 13d728 <AddToChain(TDictChain **, dictListEntry *)+0x100>
        13d660:	e58d1004 	str	r1, [sp, #4]
        13d664:	e24dd008 	sub	sp, sp, #8	; 0x8
        13d668:	e1a01005 	mov	r1, r5
        13d66c:	e1a0000d 	mov	r0, sp
        13d670:	e3a02007 	mov	r2, #7	; 0x7
        13d674:	eb69dcf5 	bl	1bb4a50 <$memcpy>
        13d678:	eb654c6b 	bl	1a9082c <$Dictionaries(void)>
        13d67c:	eb6a12b2 	bl	1bc214c <$AllocateRefHandle(long)>
        13d680:	e1a05000 	mov	r5, r0
        13d684:	e5dd1004 	ldrb	r1, [sp, #4]
        13d688:	e5900000 	ldr	r0, [r0]
        13d68c:	eb6a1af0 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        13d690:	e59d1008 	ldr	r1, [sp, #8]
        13d694:	e5810000 	str	r0, [r1]
        13d698:	e1a00005 	mov	r0, r5
        13d69c:	eb6a16c6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        13d6a0:	e59d1010 	ldr	r1, [sp, #16]
        13d6a4:	e28d0008 	add	r0, sp, #8	; 0x8
        13d6a8:	e3a02000 	mov	r2, #0	; 0x0
        13d6ac:	eb6a1aed 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        13d6b0:	e3100003 	tst	r0, #3	; 0x3
        13d6b4:	01a00140 	moveq	r0, r0, asr #2
        13d6b8:	0a000000 	beq	13d6c0 <AddToChain(TDictChain **, dictListEntry *)+0x98>
        13d6bc:	eb6a1296 	bl	1bc211c <$_RINTError(long)>
        13d6c0:	e3300000 	teq	r0, #0	; 0x0
        13d6c4:	03a06000 	moveq	r6, #0	; 0x0
        13d6c8:	0a000005 	beq	13d6e4 <AddToChain(TDictChain **, dictListEntry *)+0xbc>
        13d6cc:	e3300001 	teq	r0, #1	; 0x1
        13d6d0:	03a06001 	moveq	r6, #1	; 0x1
        13d6d4:	0a000002 	beq	13d6e4 <AddToChain(TDictChain **, dictListEntry *)+0xbc>
        13d6d8:	e3300004 	teq	r0, #4	; 0x4
        13d6dc:	1a00000d 	bne	13d718 <AddToChain(TDictChain **, dictListEntry *)+0xf0>
        13d6e0:	e3a06002 	mov	r6, #2	; 0x2
        13d6e4:	e59d8000 	ldr	r8, [sp]
        13d6e8:	e3380000 	teq	r8, #0	; 0x0
        13d6ec:	0a000026 	beq	13d78c <AddToChain(TDictChain **, dictListEntry *)+0x164>
        13d6f0:	e3a07000 	mov	r7, #0	; 0x0
        13d6f4:	e7945106 	ldr	r5, [r4, r6, lsl #2]
        13d6f8:	e3350000 	teq	r5, #0	; 0x0
        13d6fc:	1a00000a 	bne	13d72c <AddToChain(TDictChain **, dictListEntry *)+0x104>
        13d700:	e3e01000 	mvn	r1, #0	; 0x0
        13d704:	e3a00000 	mov	r0, #0	; 0x0
        13d708:	eb689ef3 	bl	1b652dc <$Make__10TDictChainSFUlT1>
        13d70c:	e1b05000 	movs	r5, r0
        13d710:	17845106 	strne	r5, [r4, r6, lsl #2]
        13d714:	1a000017 	bne	13d778 <AddToChain(TDictChain **, dictListEntry *)+0x150>
        13d718:	e59d0008 	ldr	r0, [sp, #8]
        13d71c:	eb6a16a6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        13d720:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        13d724:	00682970 	rsbeq	r2, r8, r0, ror r9
        13d728:	006835c0 	rsbeq	r3, r8, r0, asr #11
        13d72c:	e3a06000 	mov	r6, #0	; 0x0
        13d730:	e595000c 	ldr	r0, [r5, #12]
        13d734:	e3500000 	cmp	r0, #0	; 0x0
        13d738:	9a00000c 	bls	13d770 <AddToChain(TDictChain **, dictListEntry *)+0x148>
        13d73c:	e1a01006 	mov	r1, r6
        13d740:	e1a00005 	mov	r0, r5
        13d744:	e5952000 	ldr	r2, [r5]
        13d748:	e1a0e00f 	mov	lr, pc
        13d74c:	e282f01c 	add	pc, r2, #28	; 0x1c
        13d750:	e5900000 	ldr	r0, [r0]
        13d754:	e1300008 	teq	r0, r8
        13d758:	03a07001 	moveq	r7, #1	; 0x1
        13d75c:	0a000003 	beq	13d770 <AddToChain(TDictChain **, dictListEntry *)+0x148>
        13d760:	e2866001 	add	r6, r6, #1	; 0x1
        13d764:	e595000c 	ldr	r0, [r5, #12]
        13d768:	e1500006 	cmp	r0, r6
        13d76c:	8afffff2 	bhi	13d73c <AddToChain(TDictChain **, dictListEntry *)+0x114>
        13d770:	e3370000 	teq	r7, #0	; 0x0
        13d774:	1a000004 	bne	13d78c <AddToChain(TDictChain **, dictListEntry *)+0x164>
        13d778:	e1a00005 	mov	r0, r5
        13d77c:	e5951000 	ldr	r1, [r5]
        13d780:	e1a0e00f 	mov	lr, pc
        13d784:	e281f018 	add	pc, r1, #24	; 0x18
        13d788:	e5808000 	str	r8, [r0]
        13d78c:	e59d100c 	ldr	r1, [sp, #12]
        13d790:	e28d0008 	add	r0, sp, #8	; 0x8
        13d794:	e3a02000 	mov	r2, #0	; 0x0
        13d798:	eb6a1ab2 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        13d79c:	eb6a126a 	bl	1bc214c <$AllocateRefHandle(long)>
        13d7a0:	e1a06000 	mov	r6, r0
        13d7a4:	e5900000 	ldr	r0, [r0]
        13d7a8:	e3300002 	teq	r0, #2	; 0x2
        13d7ac:	1a000003 	bne	13d7c0 <AddToChain(TDictChain **, dictListEntry *)+0x198>
        13d7b0:	e1a00006 	mov	r0, r6
        13d7b4:	eb6a1680 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        13d7b8:	e28dd008 	add	sp, sp, #8	; 0x8
        13d7bc:	ea00000e 	b	13d7fc <AddToChain(TDictChain **, dictListEntry *)+0x1d4>
        13d7c0:	e3100003 	tst	r0, #3	; 0x3
        13d7c4:	01a00140 	moveq	r0, r0, asr #2
        13d7c8:	0a000000 	beq	13d7d0 <AddToChain(TDictChain **, dictListEntry *)+0x1a8>
        13d7cc:	eb6a1252 	bl	1bc211c <$_RINTError(long)>
        13d7d0:	eb655882 	bl	1a939e0 <$FindDictionaryEntry(unsigned long)>
        13d7d4:	e1b05000 	movs	r5, r0
        13d7d8:	15d50004 	ldrneb	r0, [r5, #4]
        13d7dc:	1130000a 	teqne	r0, sl
        13d7e0:	0afffff2 	beq	13d7b0 <AddToChain(TDictChain **, dictListEntry *)+0x188>
        13d7e4:	e1a00006 	mov	r0, r6
        13d7e8:	eb6a1673 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        13d7ec:	e28dd008 	add	sp, sp, #8	; 0x8
        13d7f0:	e2899001 	add	r9, r9, #1	; 0x1
        13d7f4:	e3590064 	cmp	r9, #100	; 0x64
        13d7f8:	baffff99 	blt	13d664 <AddToChain(TDictChain **, dictListEntry *)+0x3c>
        13d7fc:	e59d0000 	ldr	r0, [sp]
        13d800:	eb6a166d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        13d804:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: AddLetterPairScore(char *)
 * Address: 0013ea88
 */
AddLetterPairScore(char *) {
    /*
        13ea88:	e1a0c00d 	mov	ip, sp
        13ea8c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        13ea90:	e24cb004 	sub	fp, ip, #4	; 0x4
        13ea94:	e1a04000 	mov	r4, r0
        13ea98:	eb6891c8 	bl	1b631c0 <$StringLength(char *)>
        13ea9c:	e1a08000 	mov	r8, r0
        13eaa0:	e3500002 	cmp	r0, #2	; 0x2
        13eaa4:	391babf0 	ldmccdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        13eaa8:	e5d40000 	ldrb	r0, [r4]
        13eaac:	eb6591b6 	bl	1aa318c <$ShiftLetter(char)>
        13eab0:	e1a07000 	mov	r7, r0
        13eab4:	e3a06001 	mov	r6, #1	; 0x1
        13eab8:	e3580001 	cmp	r8, #1	; 0x1
        13eabc:	991babf0 	ldmlsdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        13eac0:	e59f9050 	ldr	r9, [pc, #50]	; 13eb18 <AddLetterPairScore(char *)+0x90>
        13eac4:	e7d40006 	ldrb	r0, [r4, r6]
        13eac8:	eb6591af 	bl	1aa318c <$ShiftLetter(char)>
        13eacc:	e1a05000 	mov	r5, r0
        13ead0:	e337001a 	teq	r7, #26	; 0x1a
        13ead4:	1335001a 	teqne	r5, #26	; 0x1a
        13ead8:	0a00000a 	beq	13eb08 <AddLetterPairScore(char *)+0x80>
        13eadc:	e0870107 	add	r0, r7, r7, lsl #2
        13eae0:	e0800187 	add	r0, r0, r7, lsl #3
        13eae4:	e0890080 	add	r0, r9, r0, lsl #1
        13eae8:	e0801005 	add	r1, r0, r5
        13eaec:	e5d12000 	ldrb	r2, [r1]
        13eaf0:	e2822001 	add	r2, r2, #1	; 0x1
        13eaf4:	e5c12000 	strb	r2, [r1]
        13eaf8:	e7d00005 	ldrb	r0, [r0, r5]
        13eafc:	e33000ff 	teq	r0, #255	; 0xff
        13eb00:	0b65641e 	bleq	1a97b80 <$HalveLetterPairs(void)>
        13eb04:	e1a07005 	mov	r7, r5
        13eb08:	e2866001 	add	r6, r6, #1	; 0x1
        13eb0c:	e1560008 	cmp	r6, r8
        13eb10:	3affffeb 	bcc	13eac4 <AddLetterPairScore(char *)+0x3c>
        13eb14:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        13eb18:	0c106528 	ldceq	5, cr6, [r0], -#160
    */
}

/**
 * Symbol: AdjustInkWordXHeight(RefVar const &, unsigned char)
 * Address: 00140940
 */
AdjustInkWordXHeight(RefVar const &, unsigned char) {
    /*
        140940:	e1a0c00d 	mov	ip, sp
        140944:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        140948:	e24cb004 	sub	fp, ip, #4	; 0x4
        14094c:	e1a04000 	mov	r4, r0
        140950:	e20190ff 	and	r9, r1, #255	; 0xff
        140954:	e24dd008 	sub	sp, sp, #8	; 0x8
        140958:	e1a0100d 	mov	r1, sp
        14095c:	eb65c7fb 	bl	1ab2950 <$GetPackedInkWordInfo(RefVar const &, PackedInkWordInfo *)>
        140960:	e3a00b01 	mov	r0, #1024	; 0x400
        140964:	e2400001 	sub	r0, r0, #1	; 0x1
        140968:	e59d1000 	ldr	r1, [sp]
        14096c:	e0006621 	and	r6, r0, r1, lsr #12
        140970:	e0007121 	and	r7, r0, r1, lsr #2
        140974:	e59d0004 	ldr	r0, [sp, #4]
        140978:	e1a05b20 	mov	r5, r0, lsr #22
        14097c:	e1a08005 	mov	r8, r5
        140980:	e3390000 	teq	r9, #0	; 0x0
        140984:	0a000012 	beq	1409d4 <AdjustInkWordXHeight(RefVar const &, unsigned char)+0x94>
        140988:	e1a01806 	mov	r1, r6, lsl #16
        14098c:	e1a09001 	mov	r9, r1
        140990:	e1a00808 	mov	r0, r8, lsl #16
        140994:	eb6a81c9 	bl	1be10c0 <$FixedDivide>
        140998:	e1a0a000 	mov	sl, r0
        14099c:	e0860007 	add	r0, r6, r7
        1409a0:	e1a01800 	mov	r1, r0, lsl #16
        1409a4:	e1a00807 	mov	r0, r7, lsl #16
        1409a8:	eb6a81c4 	bl	1be10c0 <$FixedDivide>
        1409ac:	e25acc99 	subs	ip, sl, #39168	; 0x9900
        1409b0:	a35c009a 	cmpge	ip, #154	; 0x9a
        1409b4:	da000018 	ble	140a1c <AdjustInkWordXHeight(RefVar const &, unsigned char)+0xdc>
        1409b8:	e250cc33 	subs	ip, r0, #13056	; 0x3300
        1409bc:	a35c0033 	cmpge	ip, #51	; 0x33
        1409c0:	b1a01009 	movlt	r1, r9
        1409c4:	b3a000cd 	movlt	r0, #205	; 0xcd
        1409c8:	b2800b23 	addlt	r0, r0, #35840	; 0x8c00
        1409cc:	ba00000d 	blt	140a08 <AdjustInkWordXHeight(RefVar const &, unsigned char)+0xc8>
        1409d0:	ea000011 	b	140a1c <AdjustInkWordXHeight(RefVar const &, unsigned char)+0xdc>
        1409d4:	e59d0000 	ldr	r0, [sp]
        1409d8:	e1a00b20 	mov	r0, r0, lsr #22
        1409dc:	e3500000 	cmp	r0, #0	; 0x0
        1409e0:	9a00000d 	bls	140a1c <AdjustInkWordXHeight(RefVar const &, unsigned char)+0xdc>
        1409e4:	e1a01800 	mov	r1, r0, lsl #16
        1409e8:	e0860007 	add	r0, r6, r7
        1409ec:	e1a00800 	mov	r0, r0, lsl #16
        1409f0:	eb6a81b2 	bl	1be10c0 <$FixedDivide>
        1409f4:	e3500701 	cmp	r0, #262144	; 0x40000
        1409f8:	9a000007 	bls	140a1c <AdjustInkWordXHeight(RefVar const &, unsigned char)+0xdc>
        1409fc:	e1a01806 	mov	r1, r6, lsl #16
        140a00:	e3a00066 	mov	r0, #102	; 0x66
        140a04:	e2800c66 	add	r0, r0, #26112	; 0x6600
        140a08:	eb6a81ad 	bl	1be10c4 <$FixedMultiply>
        140a0c:	e2800902 	add	r0, r0, #32768	; 0x8000
        140a10:	e1a00840 	mov	r0, r0, asr #16
        140a14:	e1a05800 	mov	r5, r0, lsl #16
        140a18:	e1a05845 	mov	r5, r5, asr #16
        140a1c:	e1350008 	teq	r5, r8
        140a20:	0a000008 	beq	140a48 <AdjustInkWordXHeight(RefVar const &, unsigned char)+0x108>
        140a24:	e59d0004 	ldr	r0, [sp, #4]
        140a28:	e1a00500 	mov	r0, r0, lsl #10
        140a2c:	e1a00520 	mov	r0, r0, lsr #10
        140a30:	e58d0004 	str	r0, [sp, #4]
        140a34:	e1800b05 	orr	r0, r0, r5, lsl #22
        140a38:	e58d0004 	str	r0, [sp, #4]
        140a3c:	e1a0100d 	mov	r1, sp
        140a40:	e1a00004 	mov	r0, r4
        140a44:	eb65e4ac 	bl	1ab9cfc <$SetPackedInkWordInfo(RefVar const &, PackedInkWordInfo *)>
        140a48:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: AddSemaphoreToHeap
 * Address: 001429f8
 */
void globals::AddSemaphoreToHeap() {
    /*
        1429f8:	e1a0c00d 	mov	ip, sp
        1429fc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        142a00:	e24cb004 	sub	fp, ip, #4	; 0x4
        142a04:	e1a04000 	mov	r4, r0
        142a08:	e3a0000c 	mov	r0, #12	; 0xc
        142a0c:	eb6a2f49 	bl	1bce738 <$__nw(unsigned int)>
        142a10:	e1b05000 	movs	r5, r0
        142a14:	0a000005 	beq	142a30 <AddSemaphoreToHeap+0x38>
        142a18:	e3a00000 	mov	r0, #0	; 0x0
        142a1c:	e5c50004 	strb	r0, [r5, #4]
        142a20:	e5850000 	str	r0, [r5]
        142a24:	e2851008 	add	r1, r5, #8	; 0x8
        142a28:	e1a00005 	mov	r0, r5
        142a2c:	eb6a47fc 	bl	1bd4a24 <TUSemaphoreGroup::$GetRefCon(void **)>
        142a30:	e3350000 	teq	r5, #0	; 0x0
        142a34:	0a000010 	beq	142a7c <AddSemaphoreToHeap+0x84>
        142a38:	e1a00005 	mov	r0, r5
        142a3c:	eb6a4c1d 	bl	1bd5ab8 <TULockingSemaphore::$Init(void)>
        142a40:	e1b06000 	movs	r6, r0
        142a44:	1a000008 	bne	142a6c <AddSemaphoreToHeap+0x74>
        142a48:	e1a00004 	mov	r0, r4
        142a4c:	eb6a5035 	bl	1bd6b28 <$IsSafeHeap(void *)>
        142a50:	e3300000 	teq	r0, #0	; 0x0
        142a54:	15a45024 	strne	r5, [r4, #36]!
        142a58:	1a000009 	bne	142a84 <AddSemaphoreToHeap+0x8c>
        142a5c:	e1a01005 	mov	r1, r5
        142a60:	e1a00004 	mov	r0, r4
        142a64:	eb6a7564 	bl	1bdfffc <$SetSkiaHeapSemaphore>
        142a68:	ea000005 	b	142a84 <AddSemaphoreToHeap+0x8c>
        142a6c:	e1a00005 	mov	r0, r5
        142a70:	e3a01001 	mov	r1, #1	; 0x1
        142a74:	eb6a2f29 	bl	1bce720 <TULockingSemaphore::$__dt(void)>
        142a78:	ea000001 	b	142a84 <AddSemaphoreToHeap+0x8c>
        142a7c:	eb6a7da7 	bl	1be2120 <$MemError>
        142a80:	e1a06000 	mov	r6, r0
        142a84:	e1a00006 	mov	r0, r6
        142a88:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: Append(TUnitList *, TUnit *)
 * Address: 00145df8
 */
Append(TUnitList *, TUnit *) {
    /*
        145df8:	ea6857e8 	b	1b5bda0 <TUnitList::$AddUnit(TUnit *)>
    */
}

/**
 * Symbol: AsPolygon(TStroke *)
 * Address: 00145e38
 */
AsPolygon(TStroke *) {
    /*
        145e38:	e1a0c00d 	mov	ip, sp
        145e3c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        145e40:	e24cb004 	sub	fp, ip, #4	; 0x4
        145e44:	e1a05000 	mov	r5, r0
        145e48:	e590900c 	ldr	r9, [r0, #12]
        145e4c:	e3a0000c 	mov	r0, #12	; 0xc
        145e50:	e0800109 	add	r0, r0, r9, lsl #2
        145e54:	e1a06000 	mov	r6, r0
        145e58:	eb6a70b3 	bl	1be212c <$NewHandle>
        145e5c:	e1b07000 	movs	r7, r0
        145e60:	03a00000 	moveq	r0, #0	; 0x0
        145e64:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        145e68:	e1a00007 	mov	r0, r7
        145e6c:	e59f109c 	ldr	r1, [pc, #9c]	; 145f10 <AsPolygon(TStroke *)+0xd8>
        145e70:	eb6a6858 	bl	1bdffd8 <$SetHandleName>
        145e74:	e5974000 	ldr	r4, [r7]
        145e78:	e5c46001 	strb	r6, [r4, #1]
        145e7c:	e1a00446 	mov	r0, r6, asr #8
        145e80:	e5c40000 	strb	r0, [r4]
        145e84:	e2841004 	add	r1, r4, #4	; 0x4
        145e88:	e1a00005 	mov	r0, r5
        145e8c:	eb65b6bf 	bl	1ab3990 <$GetStrokeRect(TStroke *, TRect *)>
        145e90:	e284600c 	add	r6, r4, #12	; 0xc
        145e94:	e1a00005 	mov	r0, r5
        145e98:	e3a01000 	mov	r1, #0	; 0x0
        145e9c:	eb6895d1 	bl	1b6b5e8 <TStroke::$GetPoint(long)>
        145ea0:	e1a05000 	mov	r5, r0
        145ea4:	e3a08000 	mov	r8, #0	; 0x0
        145ea8:	e3590000 	cmp	r9, #0	; 0x0
        145eac:	9a000015 	bls	145f08 <AsPolygon(TStroke *)+0xd0>
        145eb0:	e1a00005 	mov	r0, r5
        145eb4:	eb689e00 	bl	1b6d6bc <$SampleX(SamplePt *)>
        145eb8:	e2800902 	add	r0, r0, #32768	; 0x8000
        145ebc:	e5941006 	ldr	r1, [r4, #6]
        145ec0:	e1a01821 	mov	r1, r1, lsr #16
        145ec4:	e0610840 	rsb	r0, r1, r0, asr #16
        145ec8:	e5c60003 	strb	r0, [r6, #3]
        145ecc:	e1a00440 	mov	r0, r0, asr #8
        145ed0:	e5c60002 	strb	r0, [r6, #2]
        145ed4:	e1a00005 	mov	r0, r5
        145ed8:	eb689df8 	bl	1b6d6c0 <$SampleY(SamplePt *)>
        145edc:	e2800902 	add	r0, r0, #32768	; 0x8000
        145ee0:	e5941004 	ldr	r1, [r4, #4]
        145ee4:	e1a01821 	mov	r1, r1, lsr #16
        145ee8:	e0610840 	rsb	r0, r1, r0, asr #16
        145eec:	e5c60001 	strb	r0, [r6, #1]
        145ef0:	e1a00440 	mov	r0, r0, asr #8
        145ef4:	e4c60004 	strb	r0, [r6], #4
        145ef8:	e2888001 	add	r8, r8, #1	; 0x1
        145efc:	e2855004 	add	r5, r5, #4	; 0x4
        145f00:	e1580009 	cmp	r8, r9
        145f04:	3affffe9 	bcc	145eb0 <AsPolygon(TStroke *)+0x78>
        145f08:	e1a00007 	mov	r0, r7
        145f0c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        145f10:	4173506c 	cmnmi	r3, ip, rrx
    */
}

/**
 * Symbol: ActionErrorNotify__FlT1
 * Address: 00146648
 */
void globals::ActionErrorNotify() {
    /*
        146648:	e1a0c00d 	mov	ip, sp
        14664c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        146650:	e24cb004 	sub	fp, ip, #4	; 0x4
        146654:	e1a04000 	mov	r4, r0
        146658:	e1a05001 	mov	r5, r1
        14665c:	e24dd004 	sub	sp, sp, #4	; 0x4
        146660:	e3a00003 	mov	r0, #3	; 0x3
        146664:	eb6555cc 	bl	1a9bd9c <$MakeArray(long)>
        146668:	eb69eeb7 	bl	1bc214c <$AllocateRefHandle(long)>
        14666c:	e58d0000 	str	r0, [sp]
        146670:	e1a00105 	mov	r0, r5, lsl #2
        146674:	eb69eeb4 	bl	1bc214c <$AllocateRefHandle(long)>
        146678:	e1a05000 	mov	r5, r0
        14667c:	e3a01000 	mov	r1, #0	; 0x0
        146680:	e5902000 	ldr	r2, [r0]
        146684:	e59d0000 	ldr	r0, [sp]
        146688:	e5900000 	ldr	r0, [r0]
        14668c:	eb69ff31 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        146690:	e1a00005 	mov	r0, r5
        146694:	eb69f2c8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        146698:	e1a00104 	mov	r0, r4, lsl #2
        14669c:	eb69eeaa 	bl	1bc214c <$AllocateRefHandle(long)>
        1466a0:	e1a04000 	mov	r4, r0
        1466a4:	e3a01001 	mov	r1, #1	; 0x1
        1466a8:	e5902000 	ldr	r2, [r0]
        1466ac:	e59d0000 	ldr	r0, [sp]
        1466b0:	e5900000 	ldr	r0, [r0]
        1466b4:	eb69ff27 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        1466b8:	e1a00004 	mov	r0, r4
        1466bc:	eb69f2be 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1466c0:	e59f001c 	ldr	r0, [pc, #1c]	; 1466e4 <ActionErrorNotify__FlT1+0x9c>
        1466c4:	e5900000 	ldr	r0, [r0]
        1466c8:	e2800024 	add	r0, r0, #36	; 0x24
        1466cc:	e1a0200d 	mov	r2, sp
        1466d0:	e59f1010 	ldr	r1, [pc, #10]	; 1466e8 <ActionErrorNotify__FlT1+0xa0>
        1466d4:	eb69f2be 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
        1466d8:	e59d0000 	ldr	r0, [sp]
        1466dc:	eb69f2b6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1466e0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1466e4:	0c101934 	ldceq	9, cr1, [r0], -#208
        1466e8:	00681d50 	rsbeq	r1, r8, r0, asr sp
    */
}

/**
 * Symbol: AcceptObject(unsigned long)
 * Address: 001496c4
 */
AcceptObject(unsigned long) {
    /*
        1496c4:	e1a0c00d 	mov	ip, sp
        1496c8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1496cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1496d0:	e3a04000 	mov	r4, #0	; 0x0
        1496d4:	e1a01000 	mov	r1, r0
        1496d8:	e59f003c 	ldr	r0, [pc, #3c]	; 14971c <AcceptObject(unsigned long)+0x58>
        1496dc:	e5900000 	ldr	r0, [r0]
        1496e0:	eb07420b 	bl	319f14 <TObjectTable::Get(unsigned long)>
        1496e4:	e3300000 	teq	r0, #0	; 0x0
        1496e8:	03a040e1 	moveq	r4, #225	; 0xe1
        1496ec:	02444b0a 	subeq	r4, r4, #10240	; 0x2800
        1496f0:	0a000007 	beq	149714 <AcceptObject(unsigned long)+0x50>
        1496f4:	e590200c 	ldr	r2, [r0, #12]
        1496f8:	e59f1020 	ldr	r1, [pc, #20]	; 149720 <AcceptObject(unsigned long)+0x5c>
        1496fc:	e5911000 	ldr	r1, [r1]
        149700:	e5911000 	ldr	r1, [r1]
        149704:	e1320001 	teq	r2, r1
        149708:	05a01008 	streq	r1, [r0, #8]!
        14970c:	13a040cc 	movne	r4, #204	; 0xcc
        149710:	12444b0a 	subne	r4, r4, #10240	; 0x2800
        149714:	e1a00004 	mov	r0, r4
        149718:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        14971c:	0c100fc8 	ldceq	15, cr0, [r0], -#800
        149720:	0c100ff8 	ldceq	15, cr0, [r0], -#992
    */
}

/**
 * Symbol: AddStrokePoint__FP14_EXPAND_PARAMSlT2
 * Address: 00153e10
 */
void globals::AddStrokePoint() {
    /*
        153e10:	e1a0c00d 	mov	ip, sp
        153e14:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        153e18:	e24cb004 	sub	fp, ip, #4	; 0x4
        153e1c:	e1a04000 	mov	r4, r0
        153e20:	e1a06001 	mov	r6, r1
        153e24:	e1a05002 	mov	r5, r2
        153e28:	e5d00020 	ldrb	r0, [r0, #32]
        153e2c:	e3300000 	teq	r0, #0	; 0x0
        153e30:	0a00000a 	beq	153e60 <AddStrokePoint__FP14_EXPAND_PARAMSlT2+0x50>
        153e34:	e594001c 	ldr	r0, [r4, #28]
        153e38:	e3300000 	teq	r0, #0	; 0x0
        153e3c:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        153e40:	e3a00000 	mov	r0, #0	; 0x0
        153e44:	e52d0004 	str	r0, [sp, -#4]!
        153e48:	e52d5004 	str	r5, [sp, -#4]!
        153e4c:	e52d6004 	str	r6, [sp, -#4]!
        153e50:	e1a0100d 	mov	r1, sp
        153e54:	e5b4001c 	ldr	r0, [r4, #28]!
        153e58:	eb6859c4 	bl	1b6a570 <TStroke::$AddPoint(TabPt *)>
        153e5c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        153e60:	e5940010 	ldr	r0, [r4, #16]
        153e64:	e3300000 	teq	r0, #0	; 0x0
        153e68:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        153e6c:	e5941018 	ldr	r1, [r4, #24]
        153e70:	e2812008 	add	r2, r1, #8	; 0x8
        153e74:	e5941014 	ldr	r1, [r4, #20]
        153e78:	e1520001 	cmp	r2, r1
        153e7c:	da000006 	ble	153e9c <AddStrokePoint__FP14_EXPAND_PARAMSlT2+0x8c>
        153e80:	e2811040 	add	r1, r1, #64	; 0x40
        153e84:	eb6a38bc 	bl	1be217c <$SetHandleSize>
        153e88:	e3300000 	teq	r0, #0	; 0x0
        153e8c:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        153e90:	e5940014 	ldr	r0, [r4, #20]
        153e94:	e2800040 	add	r0, r0, #64	; 0x40
        153e98:	e5840014 	str	r0, [r4, #20]
        153e9c:	e5940010 	ldr	r0, [r4, #16]
        153ea0:	e5901000 	ldr	r1, [r0]
        153ea4:	e5940018 	ldr	r0, [r4, #24]
        153ea8:	e0810000 	add	r0, r1, r0
        153eac:	e4806004 	str	r6, [r0], #4
        153eb0:	e5805000 	str	r5, [r0]
        153eb4:	e5940018 	ldr	r0, [r4, #24]
        153eb8:	e2800008 	add	r0, r0, #8	; 0x8
        153ebc:	e5a40018 	str	r0, [r4, #24]!
        153ec0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: AddPTable__FUlT1Uc
 * Address: 0015a484
 */
void globals::AddPTable() {
    /*
        15a484:	e1a0c00d 	mov	ip, sp
        15a488:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        15a48c:	e24cb004 	sub	fp, ip, #4	; 0x4
        15a490:	e1a05000 	mov	r5, r0
        15a494:	e1a04001 	mov	r4, r1
        15a498:	e20260ff 	and	r6, r2, #255	; 0xff
        15a49c:	eb08e1bb 	bl	392b90 <EnterFIQAtomic>
        15a4a0:	e3360000 	teq	r6, #0	; 0x0
        15a4a4:	11a00004 	movne	r0, r4
        15a4a8:	1bfafa39 	blne	18d94 <ZeroPhysSubPage>
        15a4ac:	e1a00a25 	mov	r0, r5, lsr #20
        15a4b0:	e59f1030 	ldr	r1, [pc, #30]	; 15a4e8 <AddPTable__FUlT1Uc+0x64>
        15a4b4:	e5911000 	ldr	r1, [r1]
        15a4b8:	e0810100 	add	r0, r1, r0, lsl #2
        15a4bc:	e1a05000 	mov	r5, r0
        15a4c0:	ebfaf9f7 	bl	18ca4 <LoadFromPhysAddress>
        15a4c4:	e1a01524 	mov	r1, r4, lsr #10
        15a4c8:	e2000e1f 	and	r0, r0, #496	; 0x1f0
        15a4cc:	e1800501 	orr	r0, r0, r1, lsl #10
        15a4d0:	e3801001 	orr	r1, r0, #1	; 0x1
        15a4d4:	e1a00005 	mov	r0, r5
        15a4d8:	ebfafa00 	bl	18ce0 <StoreToPhysAddress>
        15a4dc:	eb08e1b3 	bl	392bb0 <ExitFIQAtomic>
        15a4e0:	e3a00000 	mov	r0, #0	; 0x0
        15a4e4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        15a4e8:	0c1016d8 	ldceq	6, cr1, [r0], -#864
    */
}

/**
 * Symbol: AddPTableWithPageTable__FUlN21
 * Address: 0015a4ec
 */
void globals::AddPTableWithPageTable() {
    /*
        15a4ec:	e1a0c00d 	mov	ip, sp
        15a4f0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        15a4f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        15a4f8:	e1a04002 	mov	r4, r2
        15a4fc:	e1a01a21 	mov	r1, r1, lsr #20
        15a500:	e0800101 	add	r0, r0, r1, lsl #2
        15a504:	e1a05000 	mov	r5, r0
        15a508:	ebfaf9e5 	bl	18ca4 <LoadFromPhysAddress>
        15a50c:	e1a01524 	mov	r1, r4, lsr #10
        15a510:	e2000e1f 	and	r0, r0, #496	; 0x1f0
        15a514:	e1800501 	orr	r0, r0, r1, lsl #10
        15a518:	e3801001 	orr	r1, r0, #1	; 0x1
        15a51c:	e1a00005 	mov	r0, r5
        15a520:	ebfaf9ee 	bl	18ce0 <StoreToPhysAddress>
        15a524:	e3a00000 	mov	r0, #0	; 0x0
        15a528:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: AddNewSecPNJTMMUWithOff__FUlN214PermUcP28SGlobalsThatLiveAcrossReboot
 * Address: 0015a574
 */
void globals::AddNewSecPNJTMMUWithOff() {
    /*
        15a574:	e1a0c00d 	mov	ip, sp
        15a578:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        15a57c:	e24cb004 	sub	fp, ip, #4	; 0x4
        15a580:	e1a05000 	mov	r5, r0
        15a584:	e1a04001 	mov	r4, r1
        15a588:	e59b1004 	ldr	r1, [fp, #4]
        15a58c:	e20160ff 	and	r6, r1, #255	; 0xff
        15a590:	e202100f 	and	r1, r2, #15	; 0xf
        15a594:	e3a02010 	mov	r2, #16	; 0x10
        15a598:	e1821281 	orr	r1, r2, r1, lsl #5
        15a59c:	e3c11b03 	bic	r1, r1, #3072	; 0xc00
        15a5a0:	e1817503 	orr	r7, r1, r3, lsl #10
        15a5a4:	e59b0008 	ldr	r0, [fp, #8]
        15a5a8:	ebff127e 	bl	11efa8 <GetPrimaryTablePhysBaseMMUOff>
        15a5ac:	e1a01a25 	mov	r1, r5, lsr #20
        15a5b0:	e0800101 	add	r0, r0, r1, lsl #2
        15a5b4:	e1a01a24 	mov	r1, r4, lsr #20
        15a5b8:	e2072efe 	and	r2, r7, #4064	; 0xfe0
        15a5bc:	e1821a01 	orr	r1, r2, r1, lsl #20
        15a5c0:	e1b02006 	movs	r2, r6
        15a5c4:	13a0201c 	movne	r2, #28	; 0x1c
        15a5c8:	e1811002 	orr	r1, r1, r2
        15a5cc:	e3811002 	orr	r1, r1, #2	; 0x2
        15a5d0:	e5801000 	str	r1, [r0]
        15a5d4:	e3a00000 	mov	r0, #0	; 0x0
        15a5d8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: AddNewSecPNJT__FUlN214PermUc
 * Address: 0015a5dc
 */
void globals::AddNewSecPNJT() {
    /*
        15a5dc:	e1a0c00d 	mov	ip, sp
        15a5e0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        15a5e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        15a5e8:	e1a05000 	mov	r5, r0
        15a5ec:	e1a04001 	mov	r4, r1
        15a5f0:	e59b0004 	ldr	r0, [fp, #4]
        15a5f4:	e20060ff 	and	r6, r0, #255	; 0xff
        15a5f8:	e202000f 	and	r0, r2, #15	; 0xf
        15a5fc:	e3a01010 	mov	r1, #16	; 0x10
        15a600:	e1810280 	orr	r0, r1, r0, lsl #5
        15a604:	e3c00b03 	bic	r0, r0, #3072	; 0xc00
        15a608:	e1807503 	orr	r7, r0, r3, lsl #10
        15a60c:	ebff11dc 	bl	11ed84 <GetPrimaryTablePhysBase>
        15a610:	e1a01a25 	mov	r1, r5, lsr #20
        15a614:	e0800101 	add	r0, r0, r1, lsl #2
        15a618:	e1a02a24 	mov	r2, r4, lsr #20
        15a61c:	e2073efe 	and	r3, r7, #4064	; 0xfe0
        15a620:	e1832a02 	orr	r2, r3, r2, lsl #20
        15a624:	e1b01006 	movs	r1, r6
        15a628:	13a0101c 	movne	r1, #28	; 0x1c
        15a62c:	e1821001 	orr	r1, r2, r1
        15a630:	e3811002 	orr	r1, r1, #2	; 0x2
        15a634:	ebfaf9a9 	bl	18ce0 <StoreToPhysAddress>
        15a638:	e3a00000 	mov	r0, #0	; 0x0
        15a63c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: AddSecP__FUlT1Uc
 * Address: 0015a640
 */
void globals::AddSecP() {
    /*
        15a640:	e1a0c00d 	mov	ip, sp
        15a644:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        15a648:	e24cb004 	sub	fp, ip, #4	; 0x4
        15a64c:	e1a04001 	mov	r4, r1
        15a650:	e20260ff 	and	r6, r2, #255	; 0xff
        15a654:	e1a00a20 	mov	r0, r0, lsr #20
        15a658:	e59f1054 	ldr	r1, [pc, #54]	; 15a6b4 <AddSecP__FUlT1Uc+0x74>
        15a65c:	e5911000 	ldr	r1, [r1]
        15a660:	e0815100 	add	r5, r1, r0, lsl #2
        15a664:	eb08e149 	bl	392b90 <EnterFIQAtomic>
        15a668:	e1a00005 	mov	r0, r5
        15a66c:	ebfaf98c 	bl	18ca4 <LoadFromPhysAddress>
        15a670:	e1a07000 	mov	r7, r0
        15a674:	e1a00a20 	mov	r0, r0, lsr #20
        15a678:	e1a00a00 	mov	r0, r0, lsl #20
        15a67c:	e1300004 	teq	r0, r4
        15a680:	1bfaf8c3 	blne	18994 <FlushDCache>
        15a684:	e1a00a24 	mov	r0, r4, lsr #20
        15a688:	e2071efe 	and	r1, r7, #4064	; 0xfe0
        15a68c:	e1810a00 	orr	r0, r1, r0, lsl #20
        15a690:	e1b01006 	movs	r1, r6
        15a694:	13a0101c 	movne	r1, #28	; 0x1c
        15a698:	e1800001 	orr	r0, r0, r1
        15a69c:	e3801002 	orr	r1, r0, #2	; 0x2
        15a6a0:	e1a00005 	mov	r0, r5
        15a6a4:	ebfaf98d 	bl	18ce0 <StoreToPhysAddress>
        15a6a8:	eb08e140 	bl	392bb0 <ExitFIQAtomic>
        15a6ac:	e3a00000 	mov	r0, #0	; 0x0
        15a6b0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        15a6b4:	0c1016d8 	ldceq	6, cr1, [r0], -#864
    */
}

/**
 * Symbol: AddBigPgP__FUlT1Uc
 * Address: 0015a6b8
 */
void globals::AddBigPgP() {
    /*
        15a6b8:	e1a0c00d 	mov	ip, sp
        15a6bc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        15a6c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        15a6c4:	e1a05000 	mov	r5, r0
        15a6c8:	e1a04001 	mov	r4, r1
        15a6cc:	e20270ff 	and	r7, r2, #255	; 0xff
        15a6d0:	e1a00a20 	mov	r0, r0, lsr #20
        15a6d4:	e59f10a0 	ldr	r1, [pc, #a0]	; 15a77c <AddBigPgP__FUlT1Uc+0xc4>
        15a6d8:	e5911000 	ldr	r1, [r1]
        15a6dc:	e0816100 	add	r6, r1, r0, lsl #2
        15a6e0:	eb08e12a 	bl	392b90 <EnterFIQAtomic>
        15a6e4:	e1a00006 	mov	r0, r6
        15a6e8:	ebfaf96d 	bl	18ca4 <LoadFromPhysAddress>
        15a6ec:	e1a00520 	mov	r0, r0, lsr #10
        15a6f0:	e1a00500 	mov	r0, r0, lsl #10
        15a6f4:	e1a01825 	mov	r1, r5, lsr #16
        15a6f8:	e1a01801 	mov	r1, r1, lsl #16
        15a6fc:	e3a020ff 	mov	r2, #255	; 0xff
        15a700:	e0021621 	and	r1, r2, r1, lsr #12
        15a704:	e0805101 	add	r5, r0, r1, lsl #2
        15a708:	e3a08001 	mov	r8, #1	; 0x1
        15a70c:	e3a06000 	mov	r6, #0	; 0x0
        15a710:	e0079002 	and	r9, r7, r2
        15a714:	e1a0a824 	mov	sl, r4, lsr #16
        15a718:	e1a0a80a 	mov	sl, sl, lsl #16
        15a71c:	e1a00005 	mov	r0, r5
        15a720:	ebfaf95f 	bl	18ca4 <LoadFromPhysAddress>
        15a724:	e1a07000 	mov	r7, r0
        15a728:	e3380000 	teq	r8, #0	; 0x0
        15a72c:	11a00827 	movne	r0, r7, lsr #16
        15a730:	11340800 	teqne	r4, r0, lsl #16
        15a734:	0a000001 	beq	15a740 <AddBigPgP__FUlT1Uc+0x88>
        15a738:	ebfaf895 	bl	18994 <FlushDCache>
        15a73c:	e3a08000 	mov	r8, #0	; 0x0
        15a740:	e2071eff 	and	r1, r7, #4080	; 0xff0
        15a744:	e18a1001 	orr	r1, sl, r1
        15a748:	e1b00009 	movs	r0, r9
        15a74c:	13a0000c 	movne	r0, #12	; 0xc
        15a750:	e1810000 	orr	r0, r1, r0
        15a754:	e3801001 	orr	r1, r0, #1	; 0x1
        15a758:	e1a00005 	mov	r0, r5
        15a75c:	ebfaf95f 	bl	18ce0 <StoreToPhysAddress>
        15a760:	e2866001 	add	r6, r6, #1	; 0x1
        15a764:	e2855004 	add	r5, r5, #4	; 0x4
        15a768:	e3560010 	cmp	r6, #16	; 0x10
        15a76c:	3affffea 	bcc	15a71c <AddBigPgP__FUlT1Uc+0x64>
        15a770:	eb08e10e 	bl	392bb0 <ExitFIQAtomic>
        15a774:	e3a00000 	mov	r0, #0	; 0x0
        15a778:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        15a77c:	0c1016d8 	ldceq	6, cr1, [r0], -#864
    */
}

/**
 * Symbol: AddPgP__FUlT1Uc
 * Address: 0015a780
 */
void globals::AddPgP() {
    /*
        15a780:	e1a0c00d 	mov	ip, sp
        15a784:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        15a788:	e24cb004 	sub	fp, ip, #4	; 0x4
        15a78c:	e1a04000 	mov	r4, r0
        15a790:	e1a05001 	mov	r5, r1
        15a794:	e20270ff 	and	r7, r2, #255	; 0xff
        15a798:	e1a00a20 	mov	r0, r0, lsr #20
        15a79c:	e59f1074 	ldr	r1, [pc, #74]	; 15a818 <AddPgP__FUlT1Uc+0x98>
        15a7a0:	e5911000 	ldr	r1, [r1]
        15a7a4:	e0816100 	add	r6, r1, r0, lsl #2
        15a7a8:	eb08e0f8 	bl	392b90 <EnterFIQAtomic>
        15a7ac:	e1a00006 	mov	r0, r6
        15a7b0:	ebfaf93b 	bl	18ca4 <LoadFromPhysAddress>
        15a7b4:	e1a00520 	mov	r0, r0, lsr #10
        15a7b8:	e1a00500 	mov	r0, r0, lsl #10
        15a7bc:	e3a010ff 	mov	r1, #255	; 0xff
        15a7c0:	e0011624 	and	r1, r1, r4, lsr #12
        15a7c4:	e0800101 	add	r0, r0, r1, lsl #2
        15a7c8:	e1a08000 	mov	r8, r0
        15a7cc:	ebfaf934 	bl	18ca4 <LoadFromPhysAddress>
        15a7d0:	e1a06000 	mov	r6, r0
        15a7d4:	e1a00620 	mov	r0, r0, lsr #12
        15a7d8:	e1a00600 	mov	r0, r0, lsl #12
        15a7dc:	e1300005 	teq	r0, r5
        15a7e0:	11a00004 	movne	r0, r4
        15a7e4:	1bfaf858 	blne	1894c <CleanPageInDcache>
        15a7e8:	e1a01625 	mov	r1, r5, lsr #12
        15a7ec:	e2062eff 	and	r2, r6, #4080	; 0xff0
        15a7f0:	e1821601 	orr	r1, r2, r1, lsl #12
        15a7f4:	e1b00007 	movs	r0, r7
        15a7f8:	13a0000c 	movne	r0, #12	; 0xc
        15a7fc:	e1810000 	orr	r0, r1, r0
        15a800:	e3801002 	orr	r1, r0, #2	; 0x2
        15a804:	e1a00008 	mov	r0, r8
        15a808:	ebfaf934 	bl	18ce0 <StoreToPhysAddress>
        15a80c:	eb08e0e7 	bl	392bb0 <ExitFIQAtomic>
        15a810:	e3a00000 	mov	r0, #0	; 0x0
        15a814:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        15a818:	0c1016d8 	ldceq	6, cr1, [r0], -#864
    */
}

/**
 * Symbol: AddPgPAndPermWithPageTable__FUlN31Uc
 * Address: 0015a81c
 */
void globals::AddPgPAndPermWithPageTable() {
    /*
        15a81c:	e1a0c00d 	mov	ip, sp
        15a820:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        15a824:	e24cb004 	sub	fp, ip, #4	; 0x4
        15a828:	e1a07000 	mov	r7, r0
        15a82c:	e1a04001 	mov	r4, r1
        15a830:	e1a06002 	mov	r6, r2
        15a834:	e1a05003 	mov	r5, r3
        15a838:	e59b0004 	ldr	r0, [fp, #4]
        15a83c:	e20080ff 	and	r8, r0, #255	; 0xff
        15a840:	e1a00001 	mov	r0, r1
        15a844:	ebfaf840 	bl	1894c <CleanPageInDcache>
        15a848:	e1a00a24 	mov	r0, r4, lsr #20
        15a84c:	e0870100 	add	r0, r7, r0, lsl #2
        15a850:	ebfaf913 	bl	18ca4 <LoadFromPhysAddress>
        15a854:	e1a01520 	mov	r1, r0, lsr #10
        15a858:	e1a01501 	mov	r1, r1, lsl #10
        15a85c:	e3a020ff 	mov	r2, #255	; 0xff
        15a860:	e0022624 	and	r2, r2, r4, lsr #12
        15a864:	e0812102 	add	r2, r1, r2, lsl #2
        15a868:	e1a03625 	mov	r3, r5, lsr #12
        15a86c:	e2000eff 	and	r0, r0, #4080	; 0xff0
        15a870:	e1800603 	orr	r0, r0, r3, lsl #12
        15a874:	e1b01008 	movs	r1, r8
        15a878:	13a0100c 	movne	r1, #12	; 0xc
        15a87c:	e1800001 	orr	r0, r0, r1
        15a880:	e3c00eff 	bic	r0, r0, #4080	; 0xff0
        15a884:	e3800002 	orr	r0, r0, #2	; 0x2
        15a888:	e20610ff 	and	r1, r6, #255	; 0xff
        15a88c:	e1801201 	orr	r1, r0, r1, lsl #4
        15a890:	e1a00002 	mov	r0, r2
        15a894:	ebfaf911 	bl	18ce0 <StoreToPhysAddress>
        15a898:	e1a00004 	mov	r0, r4
        15a89c:	eb094b20 	bl	3ad524 <PurgePageFromTLB>
        15a8a0:	e3a00000 	mov	r0, #0	; 0x0
        15a8a4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: AddPgPAndPerm__FUlN21Uc
 * Address: 0015a8f0
 */
void globals::AddPgPAndPerm() {
    /*
        15a8f0:	e1a0c00d 	mov	ip, sp
        15a8f4:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        15a8f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        15a8fc:	e1a04000 	mov	r4, r0
        15a900:	e1a06001 	mov	r6, r1
        15a904:	e1a05002 	mov	r5, r2
        15a908:	e20370ff 	and	r7, r3, #255	; 0xff
        15a90c:	e1a00a20 	mov	r0, r0, lsr #20
        15a910:	e59f1070 	ldr	r1, [pc, #70]	; 15a988 <AddPgPAndPerm__FUlN21Uc+0x98>
        15a914:	e5911000 	ldr	r1, [r1]
        15a918:	e0818100 	add	r8, r1, r0, lsl #2
        15a91c:	eb08e09b 	bl	392b90 <EnterFIQAtomic>
        15a920:	e1a00004 	mov	r0, r4
        15a924:	ebfaf808 	bl	1894c <CleanPageInDcache>
        15a928:	e1a00008 	mov	r0, r8
        15a92c:	ebfaf8dc 	bl	18ca4 <LoadFromPhysAddress>
        15a930:	e1a01520 	mov	r1, r0, lsr #10
        15a934:	e1a01501 	mov	r1, r1, lsl #10
        15a938:	e3a020ff 	mov	r2, #255	; 0xff
        15a93c:	e0022624 	and	r2, r2, r4, lsr #12
        15a940:	e0812102 	add	r2, r1, r2, lsl #2
        15a944:	e1a03625 	mov	r3, r5, lsr #12
        15a948:	e2000eff 	and	r0, r0, #4080	; 0xff0
        15a94c:	e1800603 	orr	r0, r0, r3, lsl #12
        15a950:	e1b01007 	movs	r1, r7
        15a954:	13a0100c 	movne	r1, #12	; 0xc
        15a958:	e1800001 	orr	r0, r0, r1
        15a95c:	e3c00eff 	bic	r0, r0, #4080	; 0xff0
        15a960:	e3800002 	orr	r0, r0, #2	; 0x2
        15a964:	e20610ff 	and	r1, r6, #255	; 0xff
        15a968:	e1801201 	orr	r1, r0, r1, lsl #4
        15a96c:	e1a00002 	mov	r0, r2
        15a970:	ebfaf8da 	bl	18ce0 <StoreToPhysAddress>
        15a974:	e1a00004 	mov	r0, r4
        15a978:	eb094ae9 	bl	3ad524 <PurgePageFromTLB>
        15a97c:	eb08e08b 	bl	392bb0 <ExitFIQAtomic>
        15a980:	e3a00000 	mov	r0, #0	; 0x0
        15a984:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        15a988:	0c1016d8 	ldceq	6, cr1, [r0], -#864
    */
}

/**
 * Symbol: AddSecPerm(unsigned long, Perm)
 * Address: 0015ab3c
 */
AddSecPerm(unsigned long, Perm) {
    /*
        15ab3c:	e1a0c00d 	mov	ip, sp
        15ab40:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        15ab44:	e24cb004 	sub	fp, ip, #4	; 0x4
        15ab48:	e1a04001 	mov	r4, r1
        15ab4c:	e1a00a20 	mov	r0, r0, lsr #20
        15ab50:	e59f1030 	ldr	r1, [pc, #30]	; 15ab88 <AddSecPerm(unsigned long, Perm)+0x4c>
        15ab54:	e5911000 	ldr	r1, [r1]
        15ab58:	e0815100 	add	r5, r1, r0, lsl #2
        15ab5c:	eb08e00b 	bl	392b90 <EnterFIQAtomic>
        15ab60:	ebfaf78b 	bl	18994 <FlushDCache>
        15ab64:	e1a00005 	mov	r0, r5
        15ab68:	ebfaf84d 	bl	18ca4 <LoadFromPhysAddress>
        15ab6c:	e3c00b03 	bic	r0, r0, #3072	; 0xc00
        15ab70:	e1801504 	orr	r1, r0, r4, lsl #10
        15ab74:	e1a00005 	mov	r0, r5
        15ab78:	ebfaf858 	bl	18ce0 <StoreToPhysAddress>
        15ab7c:	eb08e00b 	bl	392bb0 <ExitFIQAtomic>
        15ab80:	e3a00000 	mov	r0, #0	; 0x0
        15ab84:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        15ab88:	0c1016d8 	ldceq	6, cr1, [r0], -#864
    */
}

/**
 * Symbol: AddSubPgPerm(unsigned long, Perm)
 * Address: 0015ab8c
 */
AddSubPgPerm(unsigned long, Perm) {
    /*
        15ab8c:	e1a0c00d 	mov	ip, sp
        15ab90:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        15ab94:	e24cb004 	sub	fp, ip, #4	; 0x4
        15ab98:	e1a04000 	mov	r4, r0
        15ab9c:	e1a05001 	mov	r5, r1
        15aba0:	e1a01a20 	mov	r1, r0, lsr #20
        15aba4:	e59f0060 	ldr	r0, [pc, #60]	; 15ac0c <AddSubPgPerm(unsigned long, Perm)+0x80>
        15aba8:	e5900000 	ldr	r0, [r0]
        15abac:	e0806101 	add	r6, r0, r1, lsl #2
        15abb0:	eb08dff6 	bl	392b90 <EnterFIQAtomic>
        15abb4:	e1a00004 	mov	r0, r4
        15abb8:	ebfaf763 	bl	1894c <CleanPageInDcache>
        15abbc:	e1a00006 	mov	r0, r6
        15abc0:	ebfaf837 	bl	18ca4 <LoadFromPhysAddress>
        15abc4:	e1a00520 	mov	r0, r0, lsr #10
        15abc8:	e1a00500 	mov	r0, r0, lsl #10
        15abcc:	e3a010ff 	mov	r1, #255	; 0xff
        15abd0:	e0011624 	and	r1, r1, r4, lsr #12
        15abd4:	e0800101 	add	r0, r0, r1, lsl #2
        15abd8:	e1a06000 	mov	r6, r0
        15abdc:	ebfaf830 	bl	18ca4 <LoadFromPhysAddress>
        15abe0:	e3a02003 	mov	r2, #3	; 0x3
        15abe4:	e0021524 	and	r1, r2, r4, lsr #10
        15abe8:	e3a03004 	mov	r3, #4	; 0x4
        15abec:	e0831081 	add	r1, r3, r1, lsl #1
        15abf0:	e1c00112 	bic	r0, r0, r2, lsl r1
        15abf4:	e1801115 	orr	r1, r0, r5, lsl r1
        15abf8:	e1a00006 	mov	r0, r6
        15abfc:	ebfaf837 	bl	18ce0 <StoreToPhysAddress>
        15ac00:	eb08dfea 	bl	392bb0 <ExitFIQAtomic>
        15ac04:	e3a00000 	mov	r0, #0	; 0x0
        15ac08:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        15ac0c:	0c1016d8 	ldceq	6, cr1, [r0], -#864
    */
}

/**
 * Symbol: AddPgPerm(unsigned long, Perm)
 * Address: 0015ac10
 */
AddPgPerm(unsigned long, Perm) {
    /*
        15ac10:	e1a0c00d 	mov	ip, sp
        15ac14:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        15ac18:	e24cb004 	sub	fp, ip, #4	; 0x4
        15ac1c:	e1a04000 	mov	r4, r0
        15ac20:	e1a05001 	mov	r5, r1
        15ac24:	e1a01a20 	mov	r1, r0, lsr #20
        15ac28:	e59f0058 	ldr	r0, [pc, #58]	; 15ac88 <AddPgPerm(unsigned long, Perm)+0x78>
        15ac2c:	e5900000 	ldr	r0, [r0]
        15ac30:	e0806101 	add	r6, r0, r1, lsl #2
        15ac34:	eb08dfd5 	bl	392b90 <EnterFIQAtomic>
        15ac38:	e1a00004 	mov	r0, r4
        15ac3c:	ebfaf742 	bl	1894c <CleanPageInDcache>
        15ac40:	e1a00006 	mov	r0, r6
        15ac44:	ebfaf816 	bl	18ca4 <LoadFromPhysAddress>
        15ac48:	e1a00520 	mov	r0, r0, lsr #10
        15ac4c:	e1a00500 	mov	r0, r0, lsl #10
        15ac50:	e3a010ff 	mov	r1, #255	; 0xff
        15ac54:	e0011624 	and	r1, r1, r4, lsr #12
        15ac58:	e0800101 	add	r0, r0, r1, lsl #2
        15ac5c:	e1a04000 	mov	r4, r0
        15ac60:	ebfaf80f 	bl	18ca4 <LoadFromPhysAddress>
        15ac64:	e3c00eff 	bic	r0, r0, #4080	; 0xff0
        15ac68:	e59f101c 	ldr	r1, [pc, #1c]	; 15ac8c <AddPgPerm(unsigned long, Perm)+0x7c>
        15ac6c:	e7911105 	ldr	r1, [r1, r5, lsl #2]
        15ac70:	e1801001 	orr	r1, r0, r1
        15ac74:	e1a00004 	mov	r0, r4
        15ac78:	ebfaf818 	bl	18ce0 <StoreToPhysAddress>
        15ac7c:	eb08dfcb 	bl	392bb0 <ExitFIQAtomic>
        15ac80:	e3a00000 	mov	r0, #0	; 0x0
        15ac84:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        15ac88:	0c1016d8 	ldceq	6, cr1, [r0], -#864
        15ac8c:	0c106830 	ldceq	8, cr6, [r0], -#192
    */
}

/**
 * Symbol: AddBigSubPgPerm(unsigned long, Perm)
 * Address: 0015ac90
 */
AddBigSubPgPerm(unsigned long, Perm) {
    /*
        15ac90:	e1a0c00d 	mov	ip, sp
        15ac94:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        15ac98:	e24cb004 	sub	fp, ip, #4	; 0x4
        15ac9c:	e1a04000 	mov	r4, r0
        15aca0:	e1a05001 	mov	r5, r1
        15aca4:	e1a01a20 	mov	r1, r0, lsr #20
        15aca8:	e59f0080 	ldr	r0, [pc, #80]	; 15ad30 <AddBigSubPgPerm(unsigned long, Perm)+0xa0>
        15acac:	e5900000 	ldr	r0, [r0]
        15acb0:	e0806101 	add	r6, r0, r1, lsl #2
        15acb4:	eb08dfb5 	bl	392b90 <EnterFIQAtomic>
        15acb8:	ebfaf735 	bl	18994 <FlushDCache>
        15acbc:	e1a00006 	mov	r0, r6
        15acc0:	ebfaf7f7 	bl	18ca4 <LoadFromPhysAddress>
        15acc4:	e1a00520 	mov	r0, r0, lsr #10
        15acc8:	e1a00500 	mov	r0, r0, lsl #10
        15accc:	e1a01824 	mov	r1, r4, lsr #16
        15acd0:	e1a01801 	mov	r1, r1, lsl #16
        15acd4:	e3a020ff 	mov	r2, #255	; 0xff
        15acd8:	e0021621 	and	r1, r2, r1, lsr #12
        15acdc:	e0806101 	add	r6, r0, r1, lsl #2
        15ace0:	e3a07000 	mov	r7, #0	; 0x0
        15ace4:	e3a01003 	mov	r1, #3	; 0x3
        15ace8:	e0010724 	and	r0, r1, r4, lsr #14
        15acec:	e3a02004 	mov	r2, #4	; 0x4
        15acf0:	e0820080 	add	r0, r2, r0, lsl #1
        15acf4:	e1e04011 	mvn	r4, r1, lsl r0
        15acf8:	e1a05015 	mov	r5, r5, lsl r0
        15acfc:	e1a00006 	mov	r0, r6
        15ad00:	ebfaf7e7 	bl	18ca4 <LoadFromPhysAddress>
        15ad04:	e0040000 	and	r0, r4, r0
        15ad08:	e1801005 	orr	r1, r0, r5
        15ad0c:	e1a00006 	mov	r0, r6
        15ad10:	ebfaf7f2 	bl	18ce0 <StoreToPhysAddress>
        15ad14:	e2877001 	add	r7, r7, #1	; 0x1
        15ad18:	e2866004 	add	r6, r6, #4	; 0x4
        15ad1c:	e3570010 	cmp	r7, #16	; 0x10
        15ad20:	3afffff5 	bcc	15acfc <AddBigSubPgPerm(unsigned long, Perm)+0x6c>
        15ad24:	eb08dfa1 	bl	392bb0 <ExitFIQAtomic>
        15ad28:	e3a00000 	mov	r0, #0	; 0x0
        15ad2c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        15ad30:	0c1016d8 	ldceq	6, cr1, [r0], -#864
    */
}

/**
 * Symbol: AddBigPgPerm(unsigned long, Perm)
 * Address: 0015ad34
 */
AddBigPgPerm(unsigned long, Perm) {
    /*
        15ad34:	e1a0c00d 	mov	ip, sp
        15ad38:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        15ad3c:	e24cb004 	sub	fp, ip, #4	; 0x4
        15ad40:	e1a05000 	mov	r5, r0
        15ad44:	e1a04001 	mov	r4, r1
        15ad48:	e1a01a20 	mov	r1, r0, lsr #20
        15ad4c:	e59f0070 	ldr	r0, [pc, #70]	; 15adc4 <AddBigPgPerm(unsigned long, Perm)+0x90>
        15ad50:	e5900000 	ldr	r0, [r0]
        15ad54:	e0806101 	add	r6, r0, r1, lsl #2
        15ad58:	eb08df8c 	bl	392b90 <EnterFIQAtomic>
        15ad5c:	ebfaf70c 	bl	18994 <FlushDCache>
        15ad60:	e1a00006 	mov	r0, r6
        15ad64:	ebfaf7ce 	bl	18ca4 <LoadFromPhysAddress>
        15ad68:	e1a00520 	mov	r0, r0, lsr #10
        15ad6c:	e1a00500 	mov	r0, r0, lsl #10
        15ad70:	e1a01825 	mov	r1, r5, lsr #16
        15ad74:	e1a01801 	mov	r1, r1, lsl #16
        15ad78:	e3a020ff 	mov	r2, #255	; 0xff
        15ad7c:	e0021621 	and	r1, r2, r1, lsr #12
        15ad80:	e0805101 	add	r5, r0, r1, lsl #2
        15ad84:	e3a06000 	mov	r6, #0	; 0x0
        15ad88:	e59f7038 	ldr	r7, [pc, #38]	; 15adc8 <AddBigPgPerm(unsigned long, Perm)+0x94>
        15ad8c:	e1a00005 	mov	r0, r5
        15ad90:	ebfaf7c3 	bl	18ca4 <LoadFromPhysAddress>
        15ad94:	e3c00eff 	bic	r0, r0, #4080	; 0xff0
        15ad98:	e7971104 	ldr	r1, [r7, r4, lsl #2]
        15ad9c:	e1801001 	orr	r1, r0, r1
        15ada0:	e1a00005 	mov	r0, r5
        15ada4:	ebfaf7cd 	bl	18ce0 <StoreToPhysAddress>
        15ada8:	e2866001 	add	r6, r6, #1	; 0x1
        15adac:	e2855004 	add	r5, r5, #4	; 0x4
        15adb0:	e3560010 	cmp	r6, #16	; 0x10
        15adb4:	3afffff4 	bcc	15ad8c <AddBigPgPerm(unsigned long, Perm)+0x58>
        15adb8:	eb08df7c 	bl	392bb0 <ExitFIQAtomic>
        15adbc:	e3a00000 	mov	r0, #0	; 0x0
        15adc0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        15adc4:	0c1016d8 	ldceq	6, cr1, [r0], -#864
        15adc8:	0c106830 	ldceq	8, cr6, [r0], -#192
    */
}

/**
 * Symbol: AllocatePackage(CPipe *, TStore *, unsigned long, char *, void *, long, TCallbackCompressor *, TLOCallback *)
 * Address: 00161360
 */
AllocatePackage(CPipe *, TStore *, unsigned long, char *, void *, long, TCallbackCompressor *, TLOCallback *) {
    /*
        161360:	e1a0c00d 	mov	ip, sp
        161364:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        161368:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        16136c:	e24cb014 	sub	fp, ip, #20	; 0x14
        161370:	e1a06000 	mov	r6, r0
        161374:	e1a04001 	mov	r4, r1
        161378:	e1a05003 	mov	r5, r3
        16137c:	e28b9018 	add	r9, fp, #24	; 0x18
        161380:	e8990300 	ldmia	r9, {r8, r9}
        161384:	e59ba014 	ldr	sl, [fp, #20]
        161388:	e24dd014 	sub	sp, sp, #20	; 0x14
        16138c:	e1a0000d 	mov	r0, sp
        161390:	eb66390c 	bl	1aef7c8 <PackageRoot::$__ct(void)>
        161394:	e24dd028 	sub	sp, sp, #40	; 0x28
        161398:	e1a01006 	mov	r1, r6
        16139c:	e1a0000d 	mov	r0, sp
        1613a0:	eb69b0c3 	bl	1bcd6b4 <TPackageIterator::$__ct(CPipe *)>
        1613a4:	e1a0000d 	mov	r0, sp
        1613a8:	eb69d1bd 	bl	1bd5aa4 <TPackageIterator::$Init(void)>
        1613ac:	e1a07000 	mov	r7, r0
        1613b0:	e3500000 	cmp	r0, #0	; 0x0
        1613b4:	1a000083 	bne	1615c8 <AllocatePackage(CPipe *, TStore *, unsigned long, char *, void *, long, TCallbackCompressor *, TLOCallback *)+0x268>
        1613b8:	e1a0000d 	mov	r0, sp
        1613bc:	eb69da04 	bl	1bd7bd4 <TPackageIterator::$PackageName(void)>
        1613c0:	e59f1150 	ldr	r1, [pc, #150]	; 161518 <AllocatePackage(CPipe *, TStore *, unsigned long, char *, void *, long, TCallbackCompressor *, TLOCallback *)+0x1b8>
        1613c4:	e5911000 	ldr	r1, [r1]
        1613c8:	eb6a34e2 	bl	1bee758 <$Ustrcmp>
        1613cc:	e3300000 	teq	r0, #0	; 0x0
        1613d0:	1a00007d 	bne	1615cc <AllocatePackage(CPipe *, TStore *, unsigned long, char *, void *, long, TCallbackCompressor *, TLOCallback *)+0x26c>
        1613d4:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        1613d8:	e3a00002 	mov	r0, #2	; 0x2
        1613dc:	eb69835a 	bl	1bc214c <$AllocateRefHandle(long)>
        1613e0:	e58d0008 	str	r0, [sp, #8]
        1613e4:	e28d001c 	add	r0, sp, #28	; 0x1c
        1613e8:	eb69d9fb 	bl	1bd7bdc <TPackageIterator::$PackageSize(void)>
        1613ec:	e1a05000 	mov	r5, r0
        1613f0:	e28f0f49 	add	r0, pc, #292	; 0x124
        1613f4:	eb698fa1 	bl	1bc5280 <$Intern(char *)>
        1613f8:	eb698353 	bl	1bc214c <$AllocateRefHandle(long)>
        1613fc:	e58d0000 	str	r0, [sp]
        161400:	e1a0000d 	mov	r0, sp
        161404:	e1a01005 	mov	r1, r5
        161408:	eb69834b 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
        16140c:	e59d1008 	ldr	r1, [sp, #8]
        161410:	e5810000 	str	r0, [r1]
        161414:	e59d0000 	ldr	r0, [sp]
        161418:	eb698767 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        16141c:	e3a09000 	mov	r9, #0	; 0x0
        161420:	e28d1008 	add	r1, sp, #8	; 0x8
        161424:	e28d0004 	add	r0, sp, #4	; 0x4
        161428:	eb697f2a 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        16142c:	e28d0004 	add	r0, sp, #4	; 0x4
        161430:	eb698337 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        161434:	e1a05000 	mov	r5, r0
        161438:	e28d0004 	add	r0, sp, #4	; 0x4
        16143c:	e3a01000 	mov	r1, #0	; 0x0
        161440:	eb69832e 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        161444:	e1a01005 	mov	r1, r5
        161448:	e3a02034 	mov	r2, #52	; 0x34
        16144c:	e59d0024 	ldr	r0, [sp, #36]
        161450:	eb69f6bf 	bl	1bdef54 <$BlockMove>
        161454:	e3a08034 	mov	r8, #52	; 0x34
        161458:	e28d001c 	add	r0, sp, #28	; 0x1c
        16145c:	eb69d9d3 	bl	1bd7bb0 <TPackageIterator::$NumberOfParts(void)>
        161460:	e1a02280 	mov	r2, r0, lsl #5
        161464:	e2851034 	add	r1, r5, #52	; 0x34
        161468:	e59d0028 	ldr	r0, [sp, #40]
        16146c:	eb69f6b8 	bl	1bdef54 <$BlockMove>
        161470:	e28d001c 	add	r0, sp, #28	; 0x1c
        161474:	eb69d9cd 	bl	1bd7bb0 <TPackageIterator::$NumberOfParts(void)>
        161478:	e0888280 	add	r8, r8, r0, lsl #5
        16147c:	e28d001c 	add	r0, sp, #28	; 0x1c
        161480:	eb69c108 	bl	1bd18a8 <TPackageIterator::$DirectorySize(void)>
        161484:	e1a0a000 	mov	sl, r0
        161488:	e28d001c 	add	r0, sp, #28	; 0x1c
        16148c:	eb69d9c7 	bl	1bd7bb0 <TPackageIterator::$NumberOfParts(void)>
        161490:	e3a01034 	mov	r1, #52	; 0x34
        161494:	e0810280 	add	r0, r1, r0, lsl #5
        161498:	e04a2000 	sub	r2, sl, r0
        16149c:	e0851008 	add	r1, r5, r8
        1614a0:	e59d0034 	ldr	r0, [sp, #52]
        1614a4:	eb69f6aa 	bl	1bdef54 <$BlockMove>
        1614a8:	e28d001c 	add	r0, sp, #28	; 0x1c
        1614ac:	eb69c0fd 	bl	1bd18a8 <TPackageIterator::$DirectorySize(void)>
        1614b0:	e1a08000 	mov	r8, r0
        1614b4:	e52d906c 	str	r9, [sp, -#108]!
        1614b8:	e28d0008 	add	r0, sp, #8	; 0x8
        1614bc:	eb69452c 	bl	1bb2974 <$setjmp>
        1614c0:	e3a0a001 	mov	sl, #1	; 0x1
        1614c4:	e3300000 	teq	r0, #0	; 0x0
        1614c8:	1a000015 	bne	161524 <AllocatePackage(CPipe *, TStore *, unsigned long, char *, void *, long, TCallbackCompressor *, TLOCallback *)+0x1c4>
        1614cc:	e1a0000d 	mov	r0, sp
        1614d0:	eb69fae9 	bl	1be007c <$AddExceptionHandler>
        1614d4:	e24dd004 	sub	sp, sp, #4	; 0x4
        1614d8:	e28d008c 	add	r0, sp, #140	; 0x8c
        1614dc:	eb69d9be 	bl	1bd7bdc <TPackageIterator::$PackageSize(void)>
        1614e0:	e1a09000 	mov	r9, r0
        1614e4:	e28d008c 	add	r0, sp, #140	; 0x8c
        1614e8:	eb69c0ee 	bl	1bd18a8 <TPackageIterator::$DirectorySize(void)>
        1614ec:	e0490000 	sub	r0, r9, r0
        1614f0:	e0851008 	add	r1, r5, r8
        1614f4:	e58d0000 	str	r0, [sp]
        1614f8:	e28d3088 	add	r3, sp, #136	; 0x88
        1614fc:	e1a0200d 	mov	r2, sp
        161500:	e1a00006 	mov	r0, r6
        161504:	e596c000 	ldr	ip, [r6]
        161508:	e1a0e00f 	mov	lr, pc
        16150c:	e28cf014 	add	pc, ip, #20	; 0x14
        161510:	e28dd004 	add	sp, sp, #4	; 0x4
        161514:	ea00000b 	b	161548 <AllocatePackage(CPipe *, TStore *, unsigned long, char *, void *, long, TCallbackCompressor *, TLOCallback *)+0x1e8>
        161518:	0c1016e4 	ldceq	6, cr1, [r0], -#912
        16151c:	62696e61 	rsbvs	r6, r9, #1552	; 0x610
        161520:	72790000 	rsbvcs	r0, r9, #0	; 0x0
        161524:	e59d0060 	ldr	r0, [sp, #96]
        161528:	e59f1078 	ldr	r1, [pc, #78]	; 1615a8 <AllocatePackage(CPipe *, TStore *, unsigned long, char *, void *, long, TCallbackCompressor *, TLOCallback *)+0x248>
        16152c:	e5911000 	ldr	r1, [r1]
        161530:	eb6a0717 	bl	1be3194 <$Subexception>
        161534:	e3300000 	teq	r0, #0	; 0x0
        161538:	159d7064 	ldrne	r7, [sp, #100]
        16153c:	1a000001 	bne	161548 <AllocatePackage(CPipe *, TStore *, unsigned long, char *, void *, long, TCallbackCompressor *, TLOCallback *)+0x1e8>
        161540:	e1a0000d 	mov	r0, sp
        161544:	eb6a0302 	bl	1be2154 <$NextHandler>
        161548:	e1a0000d 	mov	r0, sp
        16154c:	eb69fed9 	bl	1be10b8 <$ExitHandler>
        161550:	e28dd06c 	add	sp, sp, #108	; 0x6c
        161554:	e3370000 	teq	r7, #0	; 0x0
        161558:	1a000006 	bne	161578 <AllocatePackage(CPipe *, TStore *, unsigned long, char *, void *, long, TCallbackCompressor *, TLOCallback *)+0x218>
        16155c:	e5cda00c 	strb	sl, [sp, #12]
        161560:	e28d3014 	add	r3, sp, #20	; 0x14
        161564:	e1a00005 	mov	r0, r5
        161568:	e28d200c 	add	r2, sp, #12	; 0xc
        16156c:	e8920006 	ldmia	r2, {r1, r2}
        161570:	eb69d575 	bl	1bd6b4c <$LoadPackage(char *, SourceType, unsigned long *)>
        161574:	e1a07000 	mov	r7, r0
        161578:	e1a00004 	mov	r0, r4
        16157c:	eb6640ca 	bl	1af18ac <TStore::$Abort(void)>
        161580:	e3370000 	teq	r7, #0	; 0x0
        161584:	1a000008 	bne	1615ac <AllocatePackage(CPipe *, TStore *, unsigned long, char *, void *, long, TCallbackCompressor *, TLOCallback *)+0x24c>
        161588:	e3a04001 	mov	r4, #1	; 0x1
        16158c:	e59d0008 	ldr	r0, [sp, #8]
        161590:	eb698709 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        161594:	e28d001c 	add	r0, sp, #28	; 0x1c
        161598:	e3a01000 	mov	r1, #0	; 0x0
        16159c:	eb69b45d 	bl	1bce718 <TPackageIterator::$__dt(void)>
        1615a0:	e1a00004 	mov	r0, r4
        1615a4:	ea000006 	b	1615c4 <AllocatePackage(CPipe *, TStore *, unsigned long, char *, void *, long, TCallbackCompressor *, TLOCallback *)+0x264>
        1615a8:	00371324 	eoreqs	r1, r7, r4, lsr #6
        1615ac:	e59d0008 	ldr	r0, [sp, #8]
        1615b0:	eb698701 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1615b4:	e28d001c 	add	r0, sp, #28	; 0x1c
        1615b8:	e3a01000 	mov	r1, #0	; 0x0
        1615bc:	eb69b455 	bl	1bce718 <TPackageIterator::$__dt(void)>
        1615c0:	e1a00007 	mov	r0, r7
        1615c4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1615c8:	1a000052 	bne	161718 <AllocatePackage(CPipe *, TStore *, unsigned long, char *, void *, long, TCallbackCompressor *, TLOCallback *)+0x3b8>
        1615cc:	e1a00004 	mov	r0, r4
        1615d0:	e3a02014 	mov	r2, #20	; 0x14
        1615d4:	e59b100c 	ldr	r1, [fp, #12]
        1615d8:	eb669350 	bl	1b06320 <TStore::$SetObjectSize(unsigned long, long)>
        1615dc:	e1b07000 	movs	r7, r0
        1615e0:	1a00004c 	bne	161718 <AllocatePackage(CPipe *, TStore *, unsigned long, char *, void *, long, TCallbackCompressor *, TLOCallback *)+0x3b8>
        1615e4:	e28d2028 	add	r2, sp, #40	; 0x28
        1615e8:	e1a00004 	mov	r0, r4
        1615ec:	e3a01000 	mov	r1, #0	; 0x0
        1615f0:	eb08956d 	bl	386bac <TStore::NewWithinTransaction(long, unsigned long *)>
        1615f4:	e1b07000 	movs	r7, r0
        1615f8:	1a000046 	bne	161718 <AllocatePackage(CPipe *, TStore *, unsigned long, char *, void *, long, TCallbackCompressor *, TLOCallback *)+0x3b8>
        1615fc:	e1a0000d 	mov	r0, sp
        161600:	eb69d96f 	bl	1bd7bc4 <TPackageIterator::$PackageFlags(void)>
        161604:	e3100201 	tst	r0, #268435456	; 0x10000000
        161608:	0a000007 	beq	16162c <AllocatePackage(CPipe *, TStore *, unsigned long, char *, void *, long, TCallbackCompressor *, TLOCallback *)+0x2cc>
        16160c:	e1a0000d 	mov	r0, sp
        161610:	eb69d96b 	bl	1bd7bc4 <TPackageIterator::$PackageFlags(void)>
        161614:	e3100301 	tst	r0, #67108864	; 0x4000000
        161618:	028f5f55 	addeq	r5, pc, #340	; 0x154
        16161c:	128f5f5b 	addne	r5, pc, #364	; 0x16c
        161620:	e3a0a000 	mov	sl, #0	; 0x0
        161624:	e3a08000 	mov	r8, #0	; 0x0
        161628:	e3a09000 	mov	r9, #0	; 0x0
        16162c:	e1a00005 	mov	r0, r5
        161630:	eb69511e 	bl	1bb5ab0 <$strlen>
        161634:	e1a01000 	mov	r1, r0
        161638:	e28d202c 	add	r2, sp, #44	; 0x2c
        16163c:	e1a00004 	mov	r0, r4
        161640:	eb089559 	bl	386bac <TStore::NewWithinTransaction(long, unsigned long *)>
        161644:	e1b07000 	movs	r7, r0
        161648:	1a000032 	bne	161718 <AllocatePackage(CPipe *, TStore *, unsigned long, char *, void *, long, TCallbackCompressor *, TLOCallback *)+0x3b8>
        16164c:	e1a00005 	mov	r0, r5
        161650:	eb695116 	bl	1bb5ab0 <$strlen>
        161654:	e1a03000 	mov	r3, r0
        161658:	e92d0008 	stmdb	sp!, {r3}
        16165c:	e1a03005 	mov	r3, r5
        161660:	e1a00004 	mov	r0, r4
        161664:	e3a02000 	mov	r2, #0	; 0x0
        161668:	e59d1030 	ldr	r1, [sp, #48]
        16166c:	eb66a3a3 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        161670:	e28dd004 	add	sp, sp, #4	; 0x4
        161674:	e1b07000 	movs	r7, r0
        161678:	1a000026 	bne	161718 <AllocatePackage(CPipe *, TStore *, unsigned long, char *, void *, long, TCallbackCompressor *, TLOCallback *)+0x3b8>
        16167c:	e28d2030 	add	r2, sp, #48	; 0x30
        161680:	e1a01008 	mov	r1, r8
        161684:	e1a00004 	mov	r0, r4
        161688:	eb089547 	bl	386bac <TStore::NewWithinTransaction(long, unsigned long *)>
        16168c:	e1b07000 	movs	r7, r0
        161690:	1a000020 	bne	161718 <AllocatePackage(CPipe *, TStore *, unsigned long, char *, void *, long, TCallbackCompressor *, TLOCallback *)+0x3b8>
        161694:	e3380000 	teq	r8, #0	; 0x0
        161698:	0a000009 	beq	1616c4 <AllocatePackage(CPipe *, TStore *, unsigned long, char *, void *, long, TCallbackCompressor *, TLOCallback *)+0x364>
        16169c:	e1a03008 	mov	r3, r8
        1616a0:	e92d0008 	stmdb	sp!, {r3}
        1616a4:	e1a0300a 	mov	r3, sl
        1616a8:	e1a00004 	mov	r0, r4
        1616ac:	e3a02000 	mov	r2, #0	; 0x0
        1616b0:	e59d1034 	ldr	r1, [sp, #52]
        1616b4:	eb66a391 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        1616b8:	e28dd004 	add	sp, sp, #4	; 0x4
        1616bc:	e1b07000 	movs	r7, r0
        1616c0:	1a000014 	bne	161718 <AllocatePackage(CPipe *, TStore *, unsigned long, char *, void *, long, TCallbackCompressor *, TLOCallback *)+0x3b8>
        1616c4:	e59b3020 	ldr	r3, [fp, #32]
        1616c8:	e92d0008 	stmdb	sp!, {r3}
        1616cc:	e1a03009 	mov	r3, r9
        1616d0:	e1a01004 	mov	r1, r4
        1616d4:	e59d202c 	ldr	r2, [sp, #44]
        1616d8:	e28d0004 	add	r0, sp, #4	; 0x4
        1616dc:	ebffec73 	bl	15c8b0 <TPackageIterator::Store(TStore *, unsigned long, TCallbackCompressor *, TLOCallback *)>
        1616e0:	e28dd004 	add	sp, sp, #4	; 0x4
        1616e4:	e1b07000 	movs	r7, r0
        1616e8:	1a00000a 	bne	161718 <AllocatePackage(CPipe *, TStore *, unsigned long, char *, void *, long, TCallbackCompressor *, TLOCallback *)+0x3b8>
        1616ec:	e59f00bc 	ldr	r0, [pc, #bc]	; 1617b0 <AllocatePackage(CPipe *, TStore *, unsigned long, char *, void *, long, TCallbackCompressor *, TLOCallback *)+0x450>
        1616f0:	e3a03014 	mov	r3, #20	; 0x14
        1616f4:	e58d0038 	str	r0, [sp, #56]
        1616f8:	e92d0008 	stmdb	sp!, {r3}
        1616fc:	e28d302c 	add	r3, sp, #44	; 0x2c
        161700:	e1a00004 	mov	r0, r4
        161704:	e3a02000 	mov	r2, #0	; 0x0
        161708:	e59b100c 	ldr	r1, [fp, #12]
        16170c:	eb66a37b 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        161710:	e28dd004 	add	sp, sp, #4	; 0x4
        161714:	e1a07000 	mov	r7, r0
        161718:	e1a0000d 	mov	r0, sp
        16171c:	e3a01000 	mov	r1, #0	; 0x0
        161720:	eb69b3fc 	bl	1bce718 <TPackageIterator::$__dt(void)>
        161724:	e28dd028 	add	sp, sp, #40	; 0x28
        161728:	e3370000 	teq	r7, #0	; 0x0
        16172c:	0a00000e 	beq	16176c <AllocatePackage(CPipe *, TStore *, unsigned long, char *, void *, long, TCallbackCompressor *, TLOCallback *)+0x40c>
        161730:	e59d0008 	ldr	r0, [sp, #8]
        161734:	e3300000 	teq	r0, #0	; 0x0
        161738:	11a00004 	movne	r0, r4
        16173c:	159d1008 	ldrne	r1, [sp, #8]
        161740:	1b08951f 	blne	386bc4 <TStore::SeparatelyAbort(unsigned long)>
        161744:	e59d0004 	ldr	r0, [sp, #4]
        161748:	e3300000 	teq	r0, #0	; 0x0
        16174c:	11a00004 	movne	r0, r4
        161750:	159d1004 	ldrne	r1, [sp, #4]
        161754:	1b08951a 	blne	386bc4 <TStore::SeparatelyAbort(unsigned long)>
        161758:	e59d0000 	ldr	r0, [sp]
        16175c:	e3300000 	teq	r0, #0	; 0x0
        161760:	11a00004 	movne	r0, r4
        161764:	159d1000 	ldrne	r1, [sp]
        161768:	1b089515 	blne	386bc4 <TStore::SeparatelyAbort(unsigned long)>
        16176c:	e1a00007 	mov	r0, r7
        161770:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        161774:	5453696d 	ldrplb	r6, [r3], -#2413
        161778:	706c6553 	rsbvc	r6, ip, r3, asr r5
        16177c:	746f7265 	strvcbt	r7, [pc], #265	; 161784 <AllocatePackage(CPipe *, TStore *, unsigned long, char *, void *, long, TCallbackCompressor *, TLOCallback *)+0x424>
        161780:	4465636f 	strmibt	r6, [r5], -#879
        161784:	6d707265 	lfmvs	f7, 2, [r0, -#404]!
        161788:	73736f72 	cmnvc	r3, #456	; 0x1c8
        16178c:	00000000 	andeq	r0, r0, r0
        161790:	5453696d 	ldrplb	r6, [r3], -#2413
        161794:	706c6552 	rsbvc	r6, ip, r2, asr r5
        161798:	656c6f63 	strvsb	r6, [ip, -#3939]!
        16179c:	53746f72 	cmnpl	r4, #456	; 0x1c8
        1617a0:	65446563 	strvsb	r6, [r4, -#1379]
        1617a4:	6f6d7072 	swivs	0x006d7072
        1617a8:	6573736f 	ldrvsb	r7, [r3, -#879]!
        1617ac:	72000000 	andvc	r0, r0, #0	; 0x0
        1617b0:	70616f6b 	rsbvc	r6, r1, fp, ror #30
    */
}

/**
 * Symbol: AllocatePackage(CPipe *, TStore *, unsigned long, char *, void *, long, TCallbackCompressor *)
 * Address: 001617b4
 */
AllocatePackage(CPipe *, TStore *, unsigned long, char *, void *, long, TCallbackCompressor *) {
    /*
        1617b4:	e1a0c00d 	mov	ip, sp
        1617b8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1617bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1617c0:	e1a05000 	mov	r5, r0
        1617c4:	e1a04001 	mov	r4, r1
        1617c8:	e1a0e002 	mov	lr, r2
        1617cc:	e1a0c003 	mov	ip, r3
        1617d0:	e3a03000 	mov	r3, #0	; 0x0
        1617d4:	e99b0007 	ldmib	fp, {r0, r1, r2}
        1617d8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1617dc:	e1a0300c 	mov	r3, ip
        1617e0:	e1a0200e 	mov	r2, lr
        1617e4:	e1a01004 	mov	r1, r4
        1617e8:	e1a00005 	mov	r0, r5
        1617ec:	eb66afb4 	bl	1b0d6c4 <$AllocatePackage(CPipe *, TStore *, unsigned long, char *, void *, long, TCallbackCompressor *, TLOCallback *)>
        1617f0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: AddToContentArea
 * Address: 00162860
 */
void globals::AddToContentArea() {
    /*
        162860:	e1a0c00d 	mov	ip, sp
        162864:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        162868:	e24cb004 	sub	fp, ip, #4	; 0x4
        16286c:	e1a04001 	mov	r4, r1
        162870:	eb64afa2 	bl	1a8e700 <$ContentView(RefVar const &)>
        162874:	e1a01004 	mov	r1, r4
        162878:	eb649b1f 	bl	1a894fc <TView::$AddView(RefVar const &)>
        16287c:	e1a04000 	mov	r4, r0
        162880:	e3a01001 	mov	r1, #1	; 0x1
        162884:	eb699b10 	bl	1bc94cc <TView::$ClearFlags(unsigned long)>
        162888:	e5940024 	ldr	r0, [r4, #36]
        16288c:	e5900000 	ldr	r0, [r0]
        162890:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        162894:	e1a0c00d 	mov	ip, sp
        162898:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        16289c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1628a0:	e59f4024 	ldr	r4, [pc, #24]	; 1628cc <AddToContentArea+0x6c>
        1628a4:	e5940000 	ldr	r0, [r4]
        1628a8:	eb69dd07 	bl	1bd9ccc <TDoubleQContainer::$Remove(void)>
        1628ac:	e3300000 	teq	r0, #0	; 0x0
        1628b0:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        1628b4:	eb668a7a 	bl	1b052a4 <$ScheduleTask(TTask *)>
        1628b8:	e5940000 	ldr	r0, [r4]
        1628bc:	eb69dd02 	bl	1bd9ccc <TDoubleQContainer::$Remove(void)>
        1628c0:	e3300000 	teq	r0, #0	; 0x0
        1628c4:	1afffffa 	bne	1628b4 <AddToContentArea+0x54>
        1628c8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1628cc:	0c101038 	ldceq	0, cr1, [r0], -#224
    */
}

/**
 * Symbol: AllocatePageTable(unsigned long)
 * Address: 00163538
 */
AllocatePageTable(unsigned long) {
    /*
        163538:	e1a0c00d 	mov	ip, sp
        16353c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        163540:	e24cb004 	sub	fp, ip, #4	; 0x4
        163544:	e1a04000 	mov	r4, r0
        163548:	e24dd004 	sub	sp, sp, #4	; 0x4
        16354c:	e1a0200d 	mov	r2, sp
        163550:	e1a01000 	mov	r1, r0
        163554:	e59f0024 	ldr	r0, [pc, #24]	; 163580 <AllocatePageTable(unsigned long)+0x48>
        163558:	e5900000 	ldr	r0, [r0]
        16355c:	eb66410b 	bl	1af3990 <TPageTableManager::$AllocatePageTable(unsigned long, unsigned long &)>
        163560:	e3300000 	teq	r0, #0	; 0x0
        163564:	1a000004 	bne	16357c <AllocatePageTable(unsigned long)+0x44>
        163568:	e1a00004 	mov	r0, r4
        16356c:	e3a02001 	mov	r2, #1	; 0x1
        163570:	e59d1000 	ldr	r1, [sp]
        163574:	eb66a851 	bl	1b0d6c0 <$AddPTable__FUlT1Uc>
        163578:	e3a00000 	mov	r0, #0	; 0x0
        16357c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        163580:	0c1016fc 	ldceq	6, cr1, [r0], -#1008
    */
}

/**
 * Symbol: AdjustParaSize(unsigned long)
 * Address: 0016783c
 */
AdjustParaSize(unsigned long) {
    /*
        16783c:	e2400004 	sub	r0, r0, #4	; 0x4
        167840:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: AssignDictionaries__FiT1P13lex_data_typeP7rc_type
 * Address: 00168c98
 */
void globals::AssignDictionaries() {
    /*
        168c98:	e3100001 	tst	r0, #1	; 0x1
        168c9c:	e0831101 	add	r1, r3, r1, lsl #2
        168ca0:	e5b10034 	ldr	r0, [r1, #52]!
        168ca4:	1590003c 	ldrne	r0, [r0, #60]
        168ca8:	05900000 	ldreq	r0, [r0]
        168cac:	e5820054 	str	r0, [r2, #84]
        168cb0:	e5b20054 	ldr	r0, [r2, #84]!
        168cb4:	e3300000 	teq	r0, #0	; 0x0
        168cb8:	13a00000 	movne	r0, #0	; 0x0
        168cbc:	03a00001 	moveq	r0, #1	; 0x1
        168cc0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: AddMarginsToBounds(TRect *)
 * Address: 00172048
 */
AddMarginsToBounds(TRect *) {
    /*
        172048:	e5901002 	ldr	r1, [r0, #2]
        17204c:	e1a01821 	mov	r1, r1, lsr #16
        172050:	e241100a 	sub	r1, r1, #10	; 0xa
        172054:	e5c01003 	strb	r1, [r0, #3]
        172058:	e1a01441 	mov	r1, r1, asr #8
        17205c:	e5c01002 	strb	r1, [r0, #2]
        172060:	e5901006 	ldr	r1, [r0, #6]
        172064:	e1a01821 	mov	r1, r1, lsr #16
        172068:	e281101e 	add	r1, r1, #30	; 0x1e
        17206c:	e5c01007 	strb	r1, [r0, #7]
        172070:	e1a01441 	mov	r1, r1, asr #8
        172074:	e5c01006 	strb	r1, [r0, #6]
        172078:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: AdjacentBoxes__FRC5TRectT1RC6TPointT3l
 * Address: 0017b010
 */
void globals::AdjacentBoxes() {
    /*
        17b010:	e92d4000 	stmdb	sp!, {lr}
        17b014:	e59dc004 	ldr	ip, [sp, #4]
        17b018:	e590e000 	ldr	lr, [r0]
        17b01c:	e1a0e84e 	mov	lr, lr, asr #16
        17b020:	e37e0902 	cmn	lr, #32768	; 0x8000
        17b024:	1591e000 	ldrne	lr, [r1]
        17b028:	11a0e84e 	movne	lr, lr, asr #16
        17b02c:	137e0902 	cmnne	lr, #32768	; 0x8000
        17b030:	03a00000 	moveq	r0, #0	; 0x0
        17b034:	08bd8000 	ldmeqia	sp!, {pc}
        17b038:	e5911002 	ldr	r1, [r1, #2]
        17b03c:	e1a01841 	mov	r1, r1, asr #16
        17b040:	e5900006 	ldr	r0, [r0, #6]
        17b044:	e1a00840 	mov	r0, r0, asr #16
        17b048:	e240e005 	sub	lr, r0, #5	; 0x5
        17b04c:	e151000e 	cmp	r1, lr
        17b050:	da00000a 	ble	17b080 <AdjacentBoxes__FRC5TRectT1RC6TPointT3l+0x70>
        17b054:	e0410000 	sub	r0, r1, r0
        17b058:	e150000c 	cmp	r0, ip
        17b05c:	ca000007 	bgt	17b080 <AdjacentBoxes__FRC5TRectT1RC6TPointT3l+0x70>
        17b060:	e5920000 	ldr	r0, [r2]
        17b064:	e1a00840 	mov	r0, r0, asr #16
        17b068:	e5931000 	ldr	r1, [r3]
        17b06c:	e0500841 	subs	r0, r0, r1, asr #16
        17b070:	42600000 	rsbmi	r0, r0, #0	; 0x0
        17b074:	e3500012 	cmp	r0, #18	; 0x12
        17b078:	d3a00001 	movle	r0, #1	; 0x1
        17b07c:	da000000 	ble	17b084 <AdjacentBoxes__FRC5TRectT1RC6TPointT3l+0x74>
        17b080:	e3a00000 	mov	r0, #0	; 0x0
        17b084:	e20000ff 	and	r0, r0, #255	; 0xff
        17b088:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: AllocatePatchRAM__FUlT1
 * Address: 00182fe0
 */
void globals::AllocatePatchRAM() {
    /*
        182fe0:	e1a0c00d 	mov	ip, sp
        182fe4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        182fe8:	e24cb004 	sub	fp, ip, #4	; 0x4
        182fec:	e1a04000 	mov	r4, r0
        182ff0:	e1a05001 	mov	r5, r1
        182ff4:	e1a00600 	mov	r0, r0, lsl #12
        182ff8:	e3a03000 	mov	r3, #0	; 0x0
        182ffc:	e3a02000 	mov	r2, #0	; 0x0
        183000:	e59f1058 	ldr	r1, [pc, #58]	; 183060 <AllocatePatchRAM__FUlT1+0x80>
        183004:	eb664aa3 	bl	1b15a98 <$Remove__9TRAMTableSFUlT116EBankDesignationT1>
        183008:	e59f0050 	ldr	r0, [pc, #50]	; 183060 <AllocatePatchRAM__FUlT1+0x80>
        18300c:	ebfe6f0a 	bl	11ec3c <GetPPageWithTag__9TRAMTableSFUl>
        183010:	e1a07000 	mov	r7, r0
        183014:	e3700601 	cmn	r0, #1048576	; 0x100000
        183018:	0a00000e 	beq	183058 <AllocatePatchRAM__FUlT1+0x78>
        18301c:	e3a06000 	mov	r6, #0	; 0x0
        183020:	e3540000 	cmp	r4, #0	; 0x0
        183024:	9a000009 	bls	183050 <AllocatePatchRAM__FUlT1+0x70>
        183028:	e0872606 	add	r2, r7, r6, lsl #12
        18302c:	e0850606 	add	r0, r5, r6, lsl #12
        183030:	e3a03001 	mov	r3, #1	; 0x1
        183034:	e3a010ff 	mov	r1, #255	; 0xff
        183038:	ebfe6ffc 	bl	11f030 <RememberMappingUsingPAddr>
        18303c:	e2860001 	add	r0, r6, #1	; 0x1
        183040:	e1a06800 	mov	r6, r0, lsl #16
        183044:	e1a06826 	mov	r6, r6, lsr #16
        183048:	e1560004 	cmp	r6, r4
        18304c:	3afffff5 	bcc	183028 <AllocatePatchRAM__FUlT1+0x48>
        183050:	ebfa5628 	bl	188f8 <FlushTheCache>
        183054:	ebfa5634 	bl	1892c <FlushTheMMU>
        183058:	e1a00007 	mov	r0, r7
        18305c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        183060:	50447430 	subpl	r7, r4, r0, lsr r4
    */
}

/**
 * Symbol: AdjustPopupInRect__FR5TRectlT2RC5TRects
 * Address: 00184e54
 */
void globals::AdjustPopupInRect() {
    /*
        184e54:	e92d4070 	stmdb	sp!, {r4, r5, r6, lr}
        184e58:	e59dc010 	ldr	ip, [sp, #16]
        184e5c:	e1a0e80c 	mov	lr, ip, lsl #16
        184e60:	e1a0e84e 	mov	lr, lr, asr #16
        184e64:	e5904006 	ldr	r4, [r0, #6]
        184e68:	e1a04844 	mov	r4, r4, asr #16
        184e6c:	e0846001 	add	r6, r4, r1
        184e70:	e5935006 	ldr	r5, [r3, #6]
        184e74:	e1a0c801 	mov	ip, r1, lsl #16
        184e78:	e1a0c84c 	mov	ip, ip, asr #16
        184e7c:	e1560845 	cmp	r6, r5, asr #16
        184e80:	da00003e 	ble	184f80 <AdjustPopupInRect__FR5TRectlT2RC5TRects+0x12c>
        184e84:	e5904002 	ldr	r4, [r0, #2]
        184e88:	e1a04844 	mov	r4, r4, asr #16
        184e8c:	e0441001 	sub	r1, r4, r1
        184e90:	e5935002 	ldr	r5, [r3, #2]
        184e94:	e1510845 	cmp	r1, r5, asr #16
        184e98:	aa000030 	bge	184f60 <AdjustPopupInRect__FR5TRectlT2RC5TRects+0x10c>
        184e9c:	e5934004 	ldr	r4, [r3, #4]
        184ea0:	e1a04844 	mov	r4, r4, asr #16
        184ea4:	e5931000 	ldr	r1, [r3]
        184ea8:	e1a01821 	mov	r1, r1, lsr #16
        184eac:	e0441001 	sub	r1, r4, r1
        184eb0:	e1a06801 	mov	r6, r1, lsl #16
        184eb4:	e1a06846 	mov	r6, r6, asr #16
        184eb8:	e5901004 	ldr	r1, [r0, #4]
        184ebc:	e1a01841 	mov	r1, r1, asr #16
        184ec0:	e5903000 	ldr	r3, [r0]
        184ec4:	e1a03843 	mov	r3, r3, asr #16
        184ec8:	e0415003 	sub	r5, r1, r3
        184ecc:	e1a05805 	mov	r5, r5, lsl #16
        184ed0:	e0465845 	sub	r5, r6, r5, asr #16
        184ed4:	e1520005 	cmp	r2, r5
        184ed8:	a1a02005 	movge	r2, r5
        184edc:	e0815002 	add	r5, r1, r2
        184ee0:	e1550004 	cmp	r5, r4
        184ee4:	d3a04000 	movle	r4, #0	; 0x0
        184ee8:	c3a04001 	movgt	r4, #1	; 0x1
        184eec:	e3340000 	teq	r4, #0	; 0x0
        184ef0:	0a000007 	beq	184f14 <AdjustPopupInRect__FR5TRectlT2RC5TRects+0xc0>
        184ef4:	e5c03005 	strb	r3, [r0, #5]
        184ef8:	e1a01443 	mov	r1, r3, asr #8
        184efc:	e5c01004 	strb	r1, [r0, #4]
        184f00:	e0431002 	sub	r1, r3, r2
        184f04:	e5c01001 	strb	r1, [r0, #1]
        184f08:	e1a01441 	mov	r1, r1, asr #8
        184f0c:	e5c01000 	strb	r1, [r0]
        184f10:	ea000006 	b	184f30 <AdjustPopupInRect__FR5TRectlT2RC5TRects+0xdc>
        184f14:	e5c01001 	strb	r1, [r0, #1]
        184f18:	e1a03441 	mov	r3, r1, asr #8
        184f1c:	e5c03000 	strb	r3, [r0]
        184f20:	e0811002 	add	r1, r1, r2
        184f24:	e5c01005 	strb	r1, [r0, #5]
        184f28:	e1a01441 	mov	r1, r1, asr #8
        184f2c:	e5c01004 	strb	r1, [r0, #4]
        184f30:	e2801002 	add	r1, r0, #2	; 0x2
        184f34:	e5912000 	ldr	r2, [r1]
        184f38:	e1a02822 	mov	r2, r2, lsr #16
        184f3c:	e082200e 	add	r2, r2, lr
        184f40:	e5c12001 	strb	r2, [r1, #1]
        184f44:	e1a03442 	mov	r3, r2, asr #8
        184f48:	e5c13000 	strb	r3, [r1]
        184f4c:	e082100c 	add	r1, r2, ip
        184f50:	e5c01007 	strb	r1, [r0, #7]
        184f54:	e1a01441 	mov	r1, r1, asr #8
        184f58:	e5c01006 	strb	r1, [r0, #6]
        184f5c:	ea000036 	b	18503c <AdjustPopupInRect__FR5TRectlT2RC5TRects+0x1e8>
        184f60:	e5c04007 	strb	r4, [r0, #7]
        184f64:	e1a01444 	mov	r1, r4, asr #8
        184f68:	e5c01006 	strb	r1, [r0, #6]
        184f6c:	e044100c 	sub	r1, r4, ip
        184f70:	e5c01003 	strb	r1, [r0, #3]
        184f74:	e1a01441 	mov	r1, r1, asr #8
        184f78:	e5c01002 	strb	r1, [r0, #2]
        184f7c:	ea000006 	b	184f9c <AdjustPopupInRect__FR5TRectlT2RC5TRects+0x148>
        184f80:	e5c04003 	strb	r4, [r0, #3]
        184f84:	e1a01444 	mov	r1, r4, asr #8
        184f88:	e5c01002 	strb	r1, [r0, #2]
        184f8c:	e084100c 	add	r1, r4, ip
        184f90:	e5c01007 	strb	r1, [r0, #7]
        184f94:	e1a01441 	mov	r1, r1, asr #8
        184f98:	e5c01006 	strb	r1, [r0, #6]
        184f9c:	e5901000 	ldr	r1, [r0]
        184fa0:	e1a01841 	mov	r1, r1, asr #16
        184fa4:	e0814002 	add	r4, r1, r2
        184fa8:	e593c004 	ldr	ip, [r3, #4]
        184fac:	e1a0c84c 	mov	ip, ip, asr #16
        184fb0:	e154000c 	cmp	r4, ip
        184fb4:	da000009 	ble	184fe0 <AdjustPopupInRect__FR5TRectlT2RC5TRects+0x18c>
        184fb8:	e5933000 	ldr	r3, [r3]
        184fbc:	e1a03843 	mov	r3, r3, asr #16
        184fc0:	e04cc003 	sub	ip, ip, r3
        184fc4:	e1a0c80c 	mov	ip, ip, lsl #16
        184fc8:	e1a0c84c 	mov	ip, ip, asr #16
        184fcc:	e08ccfac 	add	ip, ip, ip, lsr #31
        184fd0:	e0413003 	sub	r3, r1, r3
        184fd4:	e15300cc 	cmp	r3, ip, asr #1
        184fd8:	c3a04001 	movgt	r4, #1	; 0x1
        184fdc:	ca000000 	bgt	184fe4 <AdjustPopupInRect__FR5TRectlT2RC5TRects+0x190>
        184fe0:	e3a04000 	mov	r4, #0	; 0x0
        184fe4:	e3340000 	teq	r4, #0	; 0x0
        184fe8:	0a00000b 	beq	18501c <AdjustPopupInRect__FR5TRectlT2RC5TRects+0x1c8>
        184fec:	e2801004 	add	r1, r0, #4	; 0x4
        184ff0:	e5913000 	ldr	r3, [r1]
        184ff4:	e1a03823 	mov	r3, r3, lsr #16
        184ff8:	e043300e 	sub	r3, r3, lr
        184ffc:	e5c13001 	strb	r3, [r1, #1]
        185000:	e1a0c443 	mov	ip, r3, asr #8
        185004:	e5c1c000 	strb	ip, [r1]
        185008:	e0431002 	sub	r1, r3, r2
        18500c:	e5c01001 	strb	r1, [r0, #1]
        185010:	e1a01441 	mov	r1, r1, asr #8
        185014:	e5c01000 	strb	r1, [r0]
        185018:	ea000007 	b	18503c <AdjustPopupInRect__FR5TRectlT2RC5TRects+0x1e8>
        18501c:	e081100e 	add	r1, r1, lr
        185020:	e5c01001 	strb	r1, [r0, #1]
        185024:	e1a0c441 	mov	ip, r1, asr #8
        185028:	e5c0c000 	strb	ip, [r0]
        18502c:	e0811002 	add	r1, r1, r2
        185030:	e5c01005 	strb	r1, [r0, #5]
        185034:	e1a01441 	mov	r1, r1, asr #8
        185038:	e5c01004 	strb	r1, [r0, #4]
        18503c:	e1a00004 	mov	r0, r4
        185040:	e8bd8070 	ldmia	sp!, {r4, r5, r6, pc}
    */
}

/**
 * Symbol: AddInterval__FlT1PlT3
 * Address: 0018ebb8
 */
void globals::AddInterval() {
    /*
        18ebb8:	e1a0c00d 	mov	ip, sp
        18ebbc:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        18ebc0:	e24cb004 	sub	fp, ip, #4	; 0x4
        18ebc4:	e1a06000 	mov	r6, r0
        18ebc8:	e1a05001 	mov	r5, r1
        18ebcc:	e1a04002 	mov	r4, r2
        18ebd0:	e1a07003 	mov	r7, r3
        18ebd4:	e5930000 	ldr	r0, [r3]
        18ebd8:	e1a09080 	mov	r9, r0, lsl #1
        18ebdc:	e1360001 	teq	r6, r1
        18ebe0:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        18ebe4:	e1550006 	cmp	r5, r6
        18ebe8:	b1a00006 	movlt	r0, r6
        18ebec:	b1a06005 	movlt	r6, r5
        18ebf0:	b1a05000 	movlt	r5, r0
        18ebf4:	e1a02009 	mov	r2, r9
        18ebf8:	e1a01004 	mov	r1, r4
        18ebfc:	e1a00006 	mov	r0, r6
        18ec00:	eb6461f3 	bl	1aa73d4 <$IntervalIndex(long, long *, long *)>
        18ec04:	e1a08000 	mov	r8, r0
        18ec08:	e1a02009 	mov	r2, r9
        18ec0c:	e1a01004 	mov	r1, r4
        18ec10:	e1a00005 	mov	r0, r5
        18ec14:	eb6461ee 	bl	1aa73d4 <$IntervalIndex(long, long *, long *)>
        18ec18:	e1380000 	teq	r8, r0
        18ec1c:	1a000010 	bne	18ec64 <AddInterval__FlT1PlT3+0xac>
        18ec20:	e3180001 	tst	r8, #1	; 0x1
        18ec24:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        18ec28:	e359000b 	cmp	r9, #11	; 0xb
        18ec2c:	a91babf0 	ldmgedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        18ec30:	e1580009 	cmp	r8, r9
        18ec34:	aa000004 	bge	18ec4c <AddInterval__FlT1PlT3+0x94>
        18ec38:	e0490008 	sub	r0, r9, r8
        18ec3c:	e1a02100 	mov	r2, r0, lsl #2
        18ec40:	e0841108 	add	r1, r4, r8, lsl #2
        18ec44:	e2810008 	add	r0, r1, #8	; 0x8
        18ec48:	eb689781 	bl	1bb4a54 <$memmove>
        18ec4c:	e7846108 	str	r6, [r4, r8, lsl #2]
        18ec50:	e0840108 	add	r0, r4, r8, lsl #2
        18ec54:	e5a05004 	str	r5, [r0, #4]!
        18ec58:	e5970000 	ldr	r0, [r7]
        18ec5c:	e2800001 	add	r0, r0, #1	; 0x1
        18ec60:	ea000011 	b	18ecac <AddInterval__FlT1PlT3+0xf4>
        18ec64:	e3180001 	tst	r8, #1	; 0x1
        18ec68:	07846108 	streq	r6, [r4, r8, lsl #2]
        18ec6c:	12488001 	subne	r8, r8, #1	; 0x1
        18ec70:	e3100001 	tst	r0, #1	; 0x1
        18ec74:	02400001 	subeq	r0, r0, #1	; 0x1
        18ec78:	07845100 	streq	r5, [r4, r0, lsl #2]
        18ec7c:	e2881001 	add	r1, r8, #1	; 0x1
        18ec80:	e0415000 	sub	r5, r1, r0
        18ec84:	e3550000 	cmp	r5, #0	; 0x0
        18ec88:	d91babf0 	ldmledb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        18ec8c:	e1a02105 	mov	r2, r5, lsl #2
        18ec90:	e0841100 	add	r1, r4, r0, lsl #2
        18ec94:	e0840108 	add	r0, r4, r8, lsl #2
        18ec98:	e2800004 	add	r0, r0, #4	; 0x4
        18ec9c:	eb68976c 	bl	1bb4a54 <$memmove>
        18eca0:	e0855fa5 	add	r5, r5, r5, lsr #31
        18eca4:	e5970000 	ldr	r0, [r7]
        18eca8:	e04000c5 	sub	r0, r0, r5, asr #1
        18ecac:	e5870000 	str	r0, [r7]
        18ecb0:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: AddStrokesOfSymbol__FiN31P7rc_typeP20RecwordSplitInfoType
 * Address: 0019ed6c
 */
void globals::AddStrokesOfSymbol() {
    /*
        19ed6c:	e1a0c00d 	mov	ip, sp
        19ed70:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        19ed74:	e24cb004 	sub	fp, ip, #4	; 0x4
        19ed78:	e1a04002 	mov	r4, r2
        19ed7c:	e59b8008 	ldr	r8, [fp, #8]
        19ed80:	e59ba004 	ldr	sl, [fp, #4]
        19ed84:	e24dd008 	sub	sp, sp, #8	; 0x8
        19ed88:	e0883003 	add	r3, r8, r3
        19ed8c:	e59a90f8 	ldr	r9, [sl, #248]
        19ed90:	e58d3004 	str	r3, [sp, #4]
        19ed94:	e5d3604c 	ldrb	r6, [r3, #76]
        19ed98:	e3a02000 	mov	r2, #0	; 0x0
        19ed9c:	e1a05000 	mov	r5, r0
        19eda0:	e2817001 	add	r7, r1, #1	; 0x1
        19eda4:	e1570000 	cmp	r7, r0
        19eda8:	e58d2000 	str	r2, [sp]
        19edac:	ba000024 	blt	19ee44 <AddStrokesOfSymbol__FiN31P7rc_typeP20RecwordSplitInfoType+0xd8>
        19edb0:	e0890105 	add	r0, r9, r5, lsl #2
        19edb4:	e5900002 	ldr	r0, [r0, #2]
        19edb8:	e1b00840 	movs	r0, r0, asr #16
        19edbc:	4a000001 	bmi	19edc8 <AddStrokesOfSymbol__FiN31P7rc_typeP20RecwordSplitInfoType+0x5c>
        19edc0:	e1370005 	teq	r7, r5
        19edc4:	1a00001b 	bne	19ee38 <AddStrokesOfSymbol__FiN31P7rc_typeP20RecwordSplitInfoType+0xcc>
        19edc8:	e2450001 	sub	r0, r5, #1	; 0x1
        19edcc:	e1a0100a 	mov	r1, sl
        19edd0:	eb6652f9 	bl	1b339bc <$GetStrokeNumber(int, rc_type *)>
        19edd4:	e1b01000 	movs	r1, r0
        19edd8:	e3a02000 	mov	r2, #0	; 0x0
        19eddc:	0a000015 	beq	19ee38 <AddStrokesOfSymbol__FiN31P7rc_typeP20RecwordSplitInfoType+0xcc>
        19ede0:	e3a00000 	mov	r0, #0	; 0x0
        19ede4:	e0843006 	add	r3, r4, r6
        19ede8:	e3530000 	cmp	r3, #0	; 0x0
        19edec:	da00000b 	ble	19ee20 <AddStrokesOfSymbol__FiN31P7rc_typeP20RecwordSplitInfoType+0xb4>
        19edf0:	e088c000 	add	ip, r8, r0
        19edf4:	e5dcc058 	ldrb	ip, [ip, #88]
        19edf8:	e13c0001 	teq	ip, r1
        19edfc:	1a000002 	bne	19ee0c <AddStrokesOfSymbol__FiN31P7rc_typeP20RecwordSplitInfoType+0xa0>
        19ee00:	e1500004 	cmp	r0, r4
        19ee04:	ba000010 	blt	19ee4c <AddStrokesOfSymbol__FiN31P7rc_typeP20RecwordSplitInfoType+0xe0>
        19ee08:	ea00000a 	b	19ee38 <AddStrokesOfSymbol__FiN31P7rc_typeP20RecwordSplitInfoType+0xcc>
        19ee0c:	e2800001 	add	r0, r0, #1	; 0x1
        19ee10:	e1530000 	cmp	r3, r0
        19ee14:	cafffff5 	bgt	19edf0 <AddStrokesOfSymbol__FiN31P7rc_typeP20RecwordSplitInfoType+0x84>
        19ee18:	e3320000 	teq	r2, #0	; 0x0
        19ee1c:	1a000005 	bne	19ee38 <AddStrokesOfSymbol__FiN31P7rc_typeP20RecwordSplitInfoType+0xcc>
        19ee20:	e2862001 	add	r2, r6, #1	; 0x1
        19ee24:	e1a06002 	mov	r6, r2
        19ee28:	e59d3004 	ldr	r3, [sp, #4]
        19ee2c:	e5c3204c 	strb	r2, [r3, #76]
        19ee30:	e0880000 	add	r0, r8, r0
        19ee34:	e5c01058 	strb	r1, [r0, #88]
        19ee38:	e2855001 	add	r5, r5, #1	; 0x1
        19ee3c:	e1570005 	cmp	r7, r5
        19ee40:	aaffffda 	bge	19edb0 <AddStrokesOfSymbol__FiN31P7rc_typeP20RecwordSplitInfoType+0x44>
        19ee44:	e3a00001 	mov	r0, #1	; 0x1
        19ee48:	e58d0000 	str	r0, [sp]
        19ee4c:	e49d0008 	ldr	r0, [sp], #8
        19ee50:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: AttachLostStrokeToWord(int, rc_type *, RecwordSplitInfoType *)
 * Address: 0019eeb4
 */
AttachLostStrokeToWord(int, rc_type *, RecwordSplitInfoType *) {
    /*
        19eeb4:	e1a0c00d 	mov	ip, sp
        19eeb8:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        19eebc:	e24cb004 	sub	fp, ip, #4	; 0x4
        19eec0:	e1a05001 	mov	r5, r1
        19eec4:	e1a04002 	mov	r4, r2
        19eec8:	e24dd020 	sub	sp, sp, #32	; 0x20
        19eecc:	e3a06000 	mov	r6, #0	; 0x0
        19eed0:	e3a07902 	mov	r7, #32768	; 0x8000
        19eed4:	e2477001 	sub	r7, r7, #1	; 0x1
        19eed8:	e591a0f8 	ldr	sl, [r1, #248]
        19eedc:	e3e01000 	mvn	r1, #0	; 0x0
        19eee0:	e58d1000 	str	r1, [sp]
        19eee4:	e58d7008 	str	r7, [sp, #8]
        19eee8:	e28d3010 	add	r3, sp, #16	; 0x10
        19eeec:	e28d2014 	add	r2, sp, #20	; 0x14
        19eef0:	e1a01005 	mov	r1, r5
        19eef4:	e51b0034 	ldr	r0, [fp, -#52]
        19eef8:	eb6652aa 	bl	1b339a8 <$GetBegEndOfStroke__FiP7rc_typePiT3>
        19eefc:	e28d3018 	add	r3, sp, #24	; 0x18
        19ef00:	e1a0000a 	mov	r0, sl
        19ef04:	e59d1014 	ldr	r1, [sp, #20]
        19ef08:	e59d2010 	ldr	r2, [sp, #16]
        19ef0c:	eb66043e 	bl	1b2000c <$GetBoxFromTrace__FP13PS_point_typeiT2P5_RECT>
        19ef10:	e59d101c 	ldr	r1, [sp, #28]
        19ef14:	e1a01841 	mov	r1, r1, asr #16
        19ef18:	e59d0018 	ldr	r0, [sp, #24]
        19ef1c:	e0810840 	add	r0, r1, r0, asr #16
        19ef20:	e1a010c0 	mov	r1, r0, asr #1
        19ef24:	e3a08000 	mov	r8, #0	; 0x0
        19ef28:	e58d100c 	str	r1, [sp, #12]
        19ef2c:	e5d4000f 	ldrb	r0, [r4, #15]
        19ef30:	e3500000 	cmp	r0, #0	; 0x0
        19ef34:	da00006b 	ble	19f0e8 <AttachLostStrokeToWord(int, rc_type *, RecwordSplitInfoType *)+0x234>
        19ef38:	e24dd008 	sub	sp, sp, #8	; 0x8
        19ef3c:	e3a07902 	mov	r7, #32768	; 0x8000
        19ef40:	e2477001 	sub	r7, r7, #1	; 0x1
        19ef44:	e5cd7003 	strb	r7, [sp, #3]
        19ef48:	e3a0007f 	mov	r0, #127	; 0x7f
        19ef4c:	e5cd0002 	strb	r0, [sp, #2]
        19ef50:	e5cd7001 	strb	r7, [sp, #1]
        19ef54:	e5cd0000 	strb	r0, [sp]
        19ef58:	e3a00000 	mov	r0, #0	; 0x0
        19ef5c:	e1a07006 	mov	r7, r6
        19ef60:	e0849008 	add	r9, r4, r8
        19ef64:	e58d0004 	str	r0, [sp, #4]
        19ef68:	e5d9004c 	ldrb	r0, [r9, #76]
        19ef6c:	e0800006 	add	r0, r0, r6
        19ef70:	e1500006 	cmp	r0, r6
        19ef74:	da000035 	ble	19f050 <AttachLostStrokeToWord(int, rc_type *, RecwordSplitInfoType *)+0x19c>
        19ef78:	e24dd010 	sub	sp, sp, #16	; 0x10
        19ef7c:	e0840007 	add	r0, r4, r7
        19ef80:	e5d00058 	ldrb	r0, [r0, #88]
        19ef84:	e28d3008 	add	r3, sp, #8	; 0x8
        19ef88:	e28d200c 	add	r2, sp, #12	; 0xc
        19ef8c:	e1a01005 	mov	r1, r5
        19ef90:	eb665284 	bl	1b339a8 <$GetBegEndOfStroke__FiP7rc_typePiT3>
        19ef94:	e1a0300d 	mov	r3, sp
        19ef98:	e1a0000a 	mov	r0, sl
        19ef9c:	e59d100c 	ldr	r1, [sp, #12]
        19efa0:	e59d2008 	ldr	r2, [sp, #8]
        19efa4:	eb660418 	bl	1b2000c <$GetBoxFromTrace__FP13PS_point_typeiT2P5_RECT>
        19efa8:	e59d1010 	ldr	r1, [sp, #16]
        19efac:	e1a01841 	mov	r1, r1, asr #16
        19efb0:	e59d0000 	ldr	r0, [sp]
        19efb4:	e1510840 	cmp	r1, r0, asr #16
        19efb8:	da000003 	ble	19efcc <AttachLostStrokeToWord(int, rc_type *, RecwordSplitInfoType *)+0x118>
        19efbc:	e59d0002 	ldr	r0, [sp, #2]
        19efc0:	e5cd0011 	strb	r0, [sp, #17]
        19efc4:	e1a00440 	mov	r0, r0, asr #8
        19efc8:	e5cd0010 	strb	r0, [sp, #16]
        19efcc:	e59d0014 	ldr	r0, [sp, #20]
        19efd0:	e1a00840 	mov	r0, r0, asr #16
        19efd4:	e59d1004 	ldr	r1, [sp, #4]
        19efd8:	e1500841 	cmp	r0, r1, asr #16
        19efdc:	aa000003 	bge	19eff0 <AttachLostStrokeToWord(int, rc_type *, RecwordSplitInfoType *)+0x13c>
        19efe0:	e59d0006 	ldr	r0, [sp, #6]
        19efe4:	e5cd0015 	strb	r0, [sp, #21]
        19efe8:	e1a00440 	mov	r0, r0, asr #8
        19efec:	e5cd0014 	strb	r0, [sp, #20]
        19eff0:	e59d0012 	ldr	r0, [sp, #18]
        19eff4:	e1a00840 	mov	r0, r0, asr #16
        19eff8:	e59d1002 	ldr	r1, [sp, #2]
        19effc:	e1500841 	cmp	r0, r1, asr #16
        19f000:	da000003 	ble	19f014 <AttachLostStrokeToWord(int, rc_type *, RecwordSplitInfoType *)+0x160>
        19f004:	e59d0000 	ldr	r0, [sp]
        19f008:	e5cd0013 	strb	r0, [sp, #19]
        19f00c:	e1a00440 	mov	r0, r0, asr #8
        19f010:	e5cd0012 	strb	r0, [sp, #18]
        19f014:	e59d1016 	ldr	r1, [sp, #22]
        19f018:	e1a01841 	mov	r1, r1, asr #16
        19f01c:	e59d0006 	ldr	r0, [sp, #6]
        19f020:	e1510840 	cmp	r1, r0, asr #16
        19f024:	aa000003 	bge	19f038 <AttachLostStrokeToWord(int, rc_type *, RecwordSplitInfoType *)+0x184>
        19f028:	e59d0004 	ldr	r0, [sp, #4]
        19f02c:	e5cd0017 	strb	r0, [sp, #23]
        19f030:	e1a00440 	mov	r0, r0, asr #8
        19f034:	e5cd0016 	strb	r0, [sp, #22]
        19f038:	e28dd010 	add	sp, sp, #16	; 0x10
        19f03c:	e2877001 	add	r7, r7, #1	; 0x1
        19f040:	e5d9004c 	ldrb	r0, [r9, #76]
        19f044:	e0800006 	add	r0, r0, r6
        19f048:	e1500007 	cmp	r0, r7
        19f04c:	caffffc9 	bgt	19ef78 <AttachLostStrokeToWord(int, rc_type *, RecwordSplitInfoType *)+0xc4>
        19f050:	e59d1004 	ldr	r1, [sp, #4]
        19f054:	e1a01841 	mov	r1, r1, asr #16
        19f058:	e59d0000 	ldr	r0, [sp]
        19f05c:	e0810840 	add	r0, r1, r0, asr #16
        19f060:	e59d1014 	ldr	r1, [sp, #20]
        19f064:	e06100c0 	rsb	r0, r1, r0, asr #1
        19f068:	eb6341d5 	bl	1a6f7c4 <$HWRAbs(int)>
        19f06c:	e59d1010 	ldr	r1, [sp, #16]
        19f070:	e1500001 	cmp	r0, r1
        19f074:	aa000004 	bge	19f08c <AttachLostStrokeToWord(int, rc_type *, RecwordSplitInfoType *)+0x1d8>
        19f078:	e58d800c 	str	r8, [sp, #12]
        19f07c:	e5d9104c 	ldrb	r1, [r9, #76]
        19f080:	e0811006 	add	r1, r1, r6
        19f084:	e58d0010 	str	r0, [sp, #16]
        19f088:	e58d1008 	str	r1, [sp, #8]
        19f08c:	e5d9004c 	ldrb	r0, [r9, #76]
        19f090:	e0806006 	add	r6, r0, r6
        19f094:	e28dd008 	add	sp, sp, #8	; 0x8
        19f098:	e2888001 	add	r8, r8, #1	; 0x1
        19f09c:	e5d4000f 	ldrb	r0, [r4, #15]
        19f0a0:	e1500008 	cmp	r0, r8
        19f0a4:	caffffa3 	bgt	19ef38 <AttachLostStrokeToWord(int, rc_type *, RecwordSplitInfoType *)+0x84>
        19f0a8:	e59d1000 	ldr	r1, [sp]
        19f0ac:	e3710001 	cmn	r1, #1	; 0x1
        19f0b0:	0a00000c 	beq	19f0e8 <AttachLostStrokeToWord(int, rc_type *, RecwordSplitInfoType *)+0x234>
        19f0b4:	e59d1000 	ldr	r1, [sp]
        19f0b8:	e0462001 	sub	r2, r6, r1
        19f0bc:	e0845001 	add	r5, r4, r1
        19f0c0:	e2851058 	add	r1, r5, #88	; 0x58
        19f0c4:	e2850059 	add	r0, r5, #89	; 0x59
        19f0c8:	eb685661 	bl	1bb4a54 <$memmove>
        19f0cc:	e51b0034 	ldr	r0, [fp, -#52]
        19f0d0:	e5c50058 	strb	r0, [r5, #88]
        19f0d4:	e59d8004 	ldr	r8, [sp, #4]
        19f0d8:	e0840008 	add	r0, r4, r8
        19f0dc:	e5d0104c 	ldrb	r1, [r0, #76]
        19f0e0:	e2811001 	add	r1, r1, #1	; 0x1
        19f0e4:	e5c0104c 	strb	r1, [r0, #76]
        19f0e8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: AllocXrdata(xrdata_type *, int)
 * Address: 0019f878
 */
AllocXrdata(xrdata_type *, int) {
    /*
        19f878:	e1a0c00d 	mov	ip, sp
        19f87c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        19f880:	e24cb004 	sub	fp, ip, #4	; 0x4
        19f884:	e1b05000 	movs	r5, r0
        19f888:	e1a04001 	mov	r4, r1
        19f88c:	13340000 	teqne	r4, #0	; 0x0
        19f890:	0a000010 	beq	19f8d8 <AllocXrdata(xrdata_type *, int)+0x60>
        19f894:	e3540078 	cmp	r4, #120	; 0x78
        19f898:	ca00000e 	bgt	19f8d8 <AllocXrdata(xrdata_type *, int)+0x60>
        19f89c:	e0840084 	add	r0, r4, r4, lsl #1
        19f8a0:	e1a00180 	mov	r0, r0, lsl #3
        19f8a4:	e1a06000 	mov	r6, r0
        19f8a8:	eb633fc3 	bl	1a6f7bc <$HWRMemoryAlloc(unsigned long)>
        19f8ac:	e5850008 	str	r0, [r5, #8]
        19f8b0:	e3300000 	teq	r0, #0	; 0x0
        19f8b4:	0a000007 	beq	19f8d8 <AllocXrdata(xrdata_type *, int)+0x60>
        19f8b8:	e5854004 	str	r4, [r5, #4]
        19f8bc:	e3a04000 	mov	r4, #0	; 0x0
        19f8c0:	e1a02006 	mov	r2, r6
        19f8c4:	e3a01000 	mov	r1, #0	; 0x0
        19f8c8:	e5854000 	str	r4, [r5]
        19f8cc:	eb685461 	bl	1bb4a58 <$memset>
        19f8d0:	e1a00004 	mov	r0, r4
        19f8d4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        19f8d8:	e3a00001 	mov	r0, #1	; 0x1
        19f8dc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: AsPolygon(RefVar const &)
 * Address: 001a04bc
 */
AsPolygon(RefVar const &) {
    /*
        1a04bc:	e1a0c00d 	mov	ip, sp
        1a04c0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1a04c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a04c8:	e1a04000 	mov	r4, r0
        1a04cc:	e24dd008 	sub	sp, sp, #8	; 0x8
        1a04d0:	eb642c44 	bl	1aab5e8 <$CountPoints(RefVar const &)>
        1a04d4:	e1a08000 	mov	r8, r0
        1a04d8:	e1a0100d 	mov	r1, sp
        1a04dc:	e1a00004 	mov	r0, r4
        1a04e0:	eb644d27 	bl	1ab3984 <$GetStrokeBounds(RefVar const &, TRect *)>
        1a04e4:	e3a0000c 	mov	r0, #12	; 0xc
        1a04e8:	e0800108 	add	r0, r0, r8, lsl #2
        1a04ec:	e1a05000 	mov	r5, r0
        1a04f0:	eb69070d 	bl	1be212c <$NewHandle>
        1a04f4:	e1a07000 	mov	r7, r0
        1a04f8:	e59f10fc 	ldr	r1, [pc, #fc]	; 1a05fc <AsPolygon(RefVar const &)+0x140>
        1a04fc:	eb68feb5 	bl	1bdffd8 <$SetHandleName>
        1a0500:	e3a09000 	mov	r9, #0	; 0x0
        1a0504:	e3370000 	teq	r7, #0	; 0x0
        1a0508:	01a00009 	moveq	r0, r9
        1a050c:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1a0510:	e5976000 	ldr	r6, [r7]
        1a0514:	e5c65001 	strb	r5, [r6, #1]
        1a0518:	e1a00445 	mov	r0, r5, asr #8
        1a051c:	e5c60000 	strb	r0, [r6]
        1a0520:	e2860004 	add	r0, r6, #4	; 0x4
        1a0524:	e89d5000 	ldmia	sp, {ip, lr}
        1a0528:	e8805000 	stmia	r0, {ip, lr}
        1a052c:	e24dd008 	sub	sp, sp, #8	; 0x8
        1a0530:	e286500c 	add	r5, r6, #12	; 0xc
        1a0534:	e1a01004 	mov	r1, r4
        1a0538:	e1a0000d 	mov	r0, sp
        1a053c:	eb6882e5 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        1a0540:	e1a0100d 	mov	r1, sp
        1a0544:	e28d0004 	add	r0, sp, #4	; 0x4
        1a0548:	eb6882e1 	bl	1bc10d4 <TObjectPtr::$__ct(TObjectPtr const &)>
        1a054c:	e1a0000d 	mov	r0, sp
        1a0550:	e3a01000 	mov	r1, #0	; 0x0
        1a0554:	eb6886e9 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        1a0558:	e28d0004 	add	r0, sp, #4	; 0x4
        1a055c:	eb6886ec 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        1a0560:	e3a01000 	mov	r1, #0	; 0x0
        1a0564:	e3580000 	cmp	r8, #0	; 0x0
        1a0568:	9a00001e 	bls	1a05e8 <AsPolygon(RefVar const &)+0x12c>
        1a056c:	e5902002 	ldr	r2, [r0, #2]
        1a0570:	e1a02842 	mov	r2, r2, asr #16
        1a0574:	e2822004 	add	r2, r2, #4	; 0x4
        1a0578:	e5963006 	ldr	r3, [r6, #6]
        1a057c:	e1a03823 	mov	r3, r3, lsr #16
        1a0580:	e06321c2 	rsb	r2, r3, r2, asr #3
        1a0584:	e5c52003 	strb	r2, [r5, #3]
        1a0588:	e1a02442 	mov	r2, r2, asr #8
        1a058c:	e5c52002 	strb	r2, [r5, #2]
        1a0590:	e5952002 	ldr	r2, [r5, #2]
        1a0594:	e1b02842 	movs	r2, r2, asr #16
        1a0598:	45c59003 	strmib	r9, [r5, #3]
        1a059c:	45c59002 	strmib	r9, [r5, #2]
        1a05a0:	e5902000 	ldr	r2, [r0]
        1a05a4:	e1a02842 	mov	r2, r2, asr #16
        1a05a8:	e2822004 	add	r2, r2, #4	; 0x4
        1a05ac:	e5963004 	ldr	r3, [r6, #4]
        1a05b0:	e1a03823 	mov	r3, r3, lsr #16
        1a05b4:	e06321c2 	rsb	r2, r3, r2, asr #3
        1a05b8:	e5c52001 	strb	r2, [r5, #1]
        1a05bc:	e1a02442 	mov	r2, r2, asr #8
        1a05c0:	e5c52000 	strb	r2, [r5]
        1a05c4:	e5952000 	ldr	r2, [r5]
        1a05c8:	e1b02842 	movs	r2, r2, asr #16
        1a05cc:	45c59001 	strmib	r9, [r5, #1]
        1a05d0:	45c59000 	strmib	r9, [r5]
        1a05d4:	e2811001 	add	r1, r1, #1	; 0x1
        1a05d8:	e2800004 	add	r0, r0, #4	; 0x4
        1a05dc:	e2855004 	add	r5, r5, #4	; 0x4
        1a05e0:	e1510008 	cmp	r1, r8
        1a05e4:	3affffe0 	bcc	1a056c <AsPolygon(RefVar const &)+0xb0>
        1a05e8:	e28d0004 	add	r0, sp, #4	; 0x4
        1a05ec:	e3a01000 	mov	r1, #0	; 0x0
        1a05f0:	eb6886c2 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        1a05f4:	e1a00007 	mov	r0, r7
        1a05f8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1a05fc:	4173506c 	cmnmi	r3, ip, rrx
    */
}

/**
 * Symbol: AddInk(TView *, RefVar const &)
 * Address: 001a2b70
 */
AddInk(TView *, RefVar const &) {
    /*
        1a2b70:	e1a0c00d 	mov	ip, sp
        1a2b74:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1a2b78:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a2b7c:	e1a05000 	mov	r5, r0
        1a2b80:	e1a04001 	mov	r4, r1
        1a2b84:	e3a0104d 	mov	r1, #77	; 0x4d
        1a2b88:	e5902000 	ldr	r2, [r0]
        1a2b8c:	e1a0e00f 	mov	lr, pc
        1a2b90:	e282f004 	add	pc, r2, #4	; 0x4
        1a2b94:	e3300000 	teq	r0, #0	; 0x0
        1a2b98:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1a2b9c:	e24dd048 	sub	sp, sp, #72	; 0x48
        1a2ba0:	e59f10b0 	ldr	r1, [pc, #b0]	; 1a2c58 <AddInk(TView *, RefVar const &)+0xe8>
        1a2ba4:	e1a06001 	mov	r6, r1
        1a2ba8:	e1a00004 	mov	r0, r4
        1a2bac:	e3a02000 	mov	r2, #0	; 0x0
        1a2bb0:	eb6885ac 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        1a2bb4:	eb687d64 	bl	1bc214c <$AllocateRefHandle(long)>
        1a2bb8:	e58d0000 	str	r0, [sp]
        1a2bbc:	e28d100c 	add	r1, sp, #12	; 0xc
        1a2bc0:	e1a0000d 	mov	r0, sp
        1a2bc4:	eb643f59 	bl	1ab2930 <$GetInkWordInfo(RefVar const &, InkWordInfo *)>
        1a2bc8:	e24dd004 	sub	sp, sp, #4	; 0x4
        1a2bcc:	e59d7028 	ldr	r7, [sp, #40]
        1a2bd0:	e59f1084 	ldr	r1, [pc, #84]	; 1a2c5c <AddInk(TView *, RefVar const &)+0xec>
        1a2bd4:	e1a00004 	mov	r0, r4
        1a2bd8:	e3a02000 	mov	r2, #0	; 0x0
        1a2bdc:	eb6885a1 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        1a2be0:	eb687d59 	bl	1bc214c <$AllocateRefHandle(long)>
        1a2be4:	e58d0000 	str	r0, [sp]
        1a2be8:	e28d1008 	add	r1, sp, #8	; 0x8
        1a2bec:	e1a0000d 	mov	r0, sp
        1a2bf0:	eb63c7a0 	bl	1a94a78 <$FromObject(RefVar const &, TRect &)>
        1a2bf4:	e24dd004 	sub	sp, sp, #4	; 0x4
        1a2bf8:	e1a03007 	mov	r3, r7
        1a2bfc:	e92d0008 	stmdb	sp!, {r3}
        1a2c00:	e28d3010 	add	r3, sp, #16	; 0x10
        1a2c04:	e3a0200e 	mov	r2, #14	; 0xe
        1a2c08:	e3a01000 	mov	r1, #0	; 0x0
        1a2c0c:	e3a00000 	mov	r0, #0	; 0x0
        1a2c10:	eb63e469 	bl	1a9bdbc <$MakePolygonForm__FP6TPointlT2RC5TRectT2>
        1a2c14:	e28dd004 	add	sp, sp, #4	; 0x4
        1a2c18:	eb687d4b 	bl	1bc214c <$AllocateRefHandle(long)>
        1a2c1c:	e58d0000 	str	r0, [sp]
        1a2c20:	e28d2008 	add	r2, sp, #8	; 0x8
        1a2c24:	e1a01006 	mov	r1, r6
        1a2c28:	e1a0000d 	mov	r0, sp
        1a2c2c:	eb688dcd 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1a2c30:	e1a0100d 	mov	r1, sp
        1a2c34:	e1a00005 	mov	r0, r5
        1a2c38:	eb639a20 	bl	1a894c0 <TEditView::$AddForm(RefVar const &)>
        1a2c3c:	e59d0000 	ldr	r0, [sp]
        1a2c40:	eb68815d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a2c44:	e5bd0004 	ldr	r0, [sp, #4]!
        1a2c48:	eb68815b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a2c4c:	e5bd0004 	ldr	r0, [sp, #4]!
        1a2c50:	eb688159 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a2c54:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1a2c58:	00683220 	rsbeq	r3, r8, r0, lsr #4
        1a2c5c:	00684f08 	rsbeq	r4, r8, r8, lsl #30
    */
}

/**
 * Symbol: AddPtToRect
 * Address: 001a4174
 */
void globals::AddPtToRect() {
    /*
        1a4174:	e31200ff 	tst	r2, #255	; 0xff
        1a4178:	0a000003 	beq	1a418c <AddPtToRect+0x18>
        1a417c:	e1a02000 	mov	r2, r0
        1a4180:	e1a00001 	mov	r0, r1
        1a4184:	e1a01002 	mov	r1, r2
        1a4188:	ea66fc00 	b	1b63190 <$SetRectanglePoint>
        1a418c:	e5902004 	ldr	r2, [r0, #4]
        1a4190:	e5913004 	ldr	r3, [r1, #4]
        1a4194:	e1520003 	cmp	r2, r3
        1a4198:	b5812004 	strlt	r2, [r1, #4]
        1a419c:	ba000002 	blt	1a41ac <AddPtToRect+0x38>
        1a41a0:	e591300c 	ldr	r3, [r1, #12]
        1a41a4:	e1520003 	cmp	r2, r3
        1a41a8:	c581200c 	strgt	r2, [r1, #12]
        1a41ac:	e5900000 	ldr	r0, [r0]
        1a41b0:	e5912000 	ldr	r2, [r1]
        1a41b4:	e1500002 	cmp	r0, r2
        1a41b8:	b5810000 	strlt	r0, [r1]
        1a41bc:	b1a0f00e 	movlt	pc, lr
        1a41c0:	e5912008 	ldr	r2, [r1, #8]
        1a41c4:	e1520000 	cmp	r2, r0
        1a41c8:	b5a10008 	strlt	r0, [r1, #8]!
        1a41cc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: AddRect
 * Address: 001a41d0
 */
void globals::AddRect() {
    /*
        1a41d0:	e31200ff 	tst	r2, #255	; 0xff
        1a41d4:	1890100d 	ldmneia	r0, {r0, r2, r3, ip}
        1a41d8:	1881100d 	stmneia	r1, {r0, r2, r3, ip}
        1a41dc:	11a0f00e 	movne	pc, lr
        1a41e0:	e5902004 	ldr	r2, [r0, #4]
        1a41e4:	e5913004 	ldr	r3, [r1, #4]
        1a41e8:	e1520003 	cmp	r2, r3
        1a41ec:	b5812004 	strlt	r2, [r1, #4]
        1a41f0:	e590200c 	ldr	r2, [r0, #12]
        1a41f4:	e591300c 	ldr	r3, [r1, #12]
        1a41f8:	e1520003 	cmp	r2, r3
        1a41fc:	c581200c 	strgt	r2, [r1, #12]
        1a4200:	e5902000 	ldr	r2, [r0]
        1a4204:	e5913000 	ldr	r3, [r1]
        1a4208:	e1520003 	cmp	r2, r3
        1a420c:	b5812000 	strlt	r2, [r1]
        1a4210:	e5900008 	ldr	r0, [r0, #8]
        1a4214:	e5912008 	ldr	r2, [r1, #8]
        1a4218:	e1500002 	cmp	r0, r2
        1a421c:	c5a10008 	strgt	r0, [r1, #8]!
        1a4220:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: AddWordWithCount(long, unsigned char *, unsigned long)
 * Address: 001aab74
 */
AddWordWithCount(long, unsigned char *, unsigned long) {
    /*
        1aab74:	e1a0c00d 	mov	ip, sp
        1aab78:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1aab7c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1aab80:	e1a04001 	mov	r4, r1
        1aab84:	e24dd004 	sub	sp, sp, #4	; 0x4
        1aab88:	e3a09000 	mov	r9, #0	; 0x0
        1aab8c:	e3a05000 	mov	r5, #0	; 0x0
        1aab90:	eb63a392 	bl	1a939e0 <$FindDictionaryEntry(unsigned long)>
        1aab94:	e1a08000 	mov	r8, r0
        1aab98:	eb639723 	bl	1a9082c <$Dictionaries(void)>
        1aab9c:	eb685d6a 	bl	1bc214c <$AllocateRefHandle(long)>
        1aaba0:	e1a06000 	mov	r6, r0
        1aaba4:	e5d81004 	ldrb	r1, [r8, #4]
        1aaba8:	e5900000 	ldr	r0, [r0]
        1aabac:	eb6865a8 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1aabb0:	eb685d65 	bl	1bc214c <$AllocateRefHandle(long)>
        1aabb4:	e58d0000 	str	r0, [sp]
        1aabb8:	e1a00006 	mov	r0, r6
        1aabbc:	eb68617e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1aabc0:	e59f1108 	ldr	r1, [pc, #108]	; 1aacd0 <AddWordWithCount(long, unsigned char *, unsigned long)+0x15c>
        1aabc4:	e1a0a001 	mov	sl, r1
        1aabc8:	e1a0000d 	mov	r0, sp
        1aabcc:	e3a02000 	mov	r2, #0	; 0x0
        1aabd0:	eb6865a4 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        1aabd4:	eb685d5c 	bl	1bc214c <$AllocateRefHandle(long)>
        1aabd8:	e1a06000 	mov	r6, r0
        1aabdc:	e5900000 	ldr	r0, [r0]
        1aabe0:	e59f70ec 	ldr	r7, [pc, #ec]	; 1aacd4 <AddWordWithCount(long, unsigned char *, unsigned long)+0x160>
        1aabe4:	e3300002 	teq	r0, #2	; 0x2
        1aabe8:	0a000014 	beq	1aac40 <AddWordWithCount(long, unsigned char *, unsigned long)+0xcc>
        1aabec:	e3a09001 	mov	r9, #1	; 0x1
        1aabf0:	e3100003 	tst	r0, #3	; 0x3
        1aabf4:	01a00140 	moveq	r0, r0, asr #2
        1aabf8:	0a000000 	beq	1aac00 <AddWordWithCount(long, unsigned char *, unsigned long)+0x8c>
        1aabfc:	eb685d46 	bl	1bc211c <$_RINTError(long)>
        1aac00:	e1a05000 	mov	r5, r0
        1aac04:	e59f10cc 	ldr	r1, [pc, #cc]	; 1aacd8 <AddWordWithCount(long, unsigned char *, unsigned long)+0x164>
        1aac08:	e1a0000d 	mov	r0, sp
        1aac0c:	e3a02000 	mov	r2, #0	; 0x0
        1aac10:	eb686594 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        1aac14:	e5860000 	str	r0, [r6]
        1aac18:	e3300002 	teq	r0, #2	; 0x2
        1aac1c:	0a000007 	beq	1aac40 <AddWordWithCount(long, unsigned char *, unsigned long)+0xcc>
        1aac20:	e3100003 	tst	r0, #3	; 0x3
        1aac24:	01a00140 	moveq	r0, r0, asr #2
        1aac28:	0a000000 	beq	1aac30 <AddWordWithCount(long, unsigned char *, unsigned long)+0xbc>
        1aac2c:	eb685d3a 	bl	1bc211c <$_RINTError(long)>
        1aac30:	e1550000 	cmp	r5, r0
        1aac34:	a3e0000e 	mvnge	r0, #14	; 0xe
        1aac38:	a5870000 	strge	r0, [r7]
        1aac3c:	aa00001d 	bge	1aacb8 <AddWordWithCount(long, unsigned char *, unsigned long)+0x144>
        1aac40:	e5980000 	ldr	r0, [r8]
        1aac44:	e1a02004 	mov	r2, r4
        1aac48:	e3a01000 	mov	r1, #0	; 0x0
        1aac4c:	e51b302c 	ldr	r3, [fp, -#44]
        1aac50:	eb615922 	bl	1a010e0 <$AddWord(AirusAParmBlock **, unsigned long, unsigned char *, unsigned char *)>
        1aac54:	e5970000 	ldr	r0, [r7]
        1aac58:	e3300000 	teq	r0, #0	; 0x0
        1aac5c:	1a000015 	bne	1aacb8 <AddWordWithCount(long, unsigned char *, unsigned long)+0x144>
        1aac60:	e3390000 	teq	r9, #0	; 0x0
        1aac64:	0a000013 	beq	1aacb8 <AddWordWithCount(long, unsigned char *, unsigned long)+0x144>
        1aac68:	e24dd004 	sub	sp, sp, #4	; 0x4
        1aac6c:	e1a0100a 	mov	r1, sl
        1aac70:	e28d0004 	add	r0, sp, #4	; 0x4
        1aac74:	e3a02000 	mov	r2, #0	; 0x0
        1aac78:	eb68657a 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        1aac7c:	e3100003 	tst	r0, #3	; 0x3
        1aac80:	01a00140 	moveq	r0, r0, asr #2
        1aac84:	0a000000 	beq	1aac8c <AddWordWithCount(long, unsigned char *, unsigned long)+0x118>
        1aac88:	eb685d23 	bl	1bc211c <$_RINTError(long)>
        1aac8c:	e2805001 	add	r5, r0, #1	; 0x1
        1aac90:	e1a00105 	mov	r0, r5, lsl #2
        1aac94:	eb685d2c 	bl	1bc214c <$AllocateRefHandle(long)>
        1aac98:	e58d0000 	str	r0, [sp]
        1aac9c:	e1a0200d 	mov	r2, sp
        1aaca0:	e1a0100a 	mov	r1, sl
        1aaca4:	e28d0004 	add	r0, sp, #4	; 0x4
        1aaca8:	eb686dae 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1aacac:	e59d0000 	ldr	r0, [sp]
        1aacb0:	eb686141 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1aacb4:	e28dd004 	add	sp, sp, #4	; 0x4
        1aacb8:	e1a00006 	mov	r0, r6
        1aacbc:	eb68613e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1aacc0:	e59d0000 	ldr	r0, [sp]
        1aacc4:	eb68613c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1aacc8:	e1a00005 	mov	r0, r5
        1aaccc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1aacd0:	00682668 	rsbeq	r2, r8, r8, ror #12
        1aacd4:	0c100810 	ldceq	8, cr0, [r0], -#64
        1aacd8:	00683568 	rsbeq	r3, r8, r8, ror #10
    */
}

/**
 * Symbol: AddAutoAdd(unsigned short *)
 * Address: 001aaee4
 */
AddAutoAdd(unsigned short *) {
    /*
        1aaee4:	e1a0c00d 	mov	ip, sp
        1aaee8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1aaeec:	e24cb004 	sub	fp, ip, #4	; 0x4
        1aaef0:	e1a04000 	mov	r4, r0
        1aaef4:	e3a08000 	mov	r8, #0	; 0x0
        1aaef8:	e59f0054 	ldr	r0, [pc, #54]	; 1aaf54 <AddAutoAdd(unsigned short *)+0x70>
        1aaefc:	eb63af00 	bl	1a96b04 <$GetPreference(RefVar const &)>
        1aaf00:	e3300002 	teq	r0, #2	; 0x2
        1aaf04:	159f004c 	ldrne	r0, [pc, #4c]	; 1aaf58 <AddAutoAdd(unsigned short *)+0x74>
        1aaf08:	15900000 	ldrne	r0, [r0]
        1aaf0c:	159fc048 	ldrne	ip, [pc, #48]	; 1aaf5c <AddAutoAdd(unsigned short *)+0x78>
        1aaf10:	1130000c 	teqne	r0, ip
        1aaf14:	01a00008 	moveq	r0, r8
        1aaf18:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1aaf1c:	e24dd004 	sub	sp, sp, #4	; 0x4
        1aaf20:	e1a00004 	mov	r0, r4
        1aaf24:	eb6868ea 	bl	1bc52d4 <$MakeString(unsigned short const *)>
        1aaf28:	eb685c87 	bl	1bc214c <$AllocateRefHandle(long)>
        1aaf2c:	e40d0004 	str	r0, [sp], -#4
        1aaf30:	e28d0004 	add	r0, sp, #4	; 0x4
        1aaf34:	eb64d854 	bl	1ae108c <$LastWordSame(RefVar const &)>
        1aaf38:	e3a04000 	mov	r4, #0	; 0x0
        1aaf3c:	e3300000 	teq	r0, #0	; 0x0
        1aaf40:	0a000006 	beq	1aaf60 <AddAutoAdd(unsigned short *)+0x7c>
        1aaf44:	e59d0004 	ldr	r0, [sp, #4]
        1aaf48:	eb68609b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1aaf4c:	e1a00004 	mov	r0, r4
        1aaf50:	ea000063 	b	1ab0e4 <AddAutoAdd(unsigned short *)+0x200>
        1aaf54:	00682a00 	rsbeq	r2, r8, r0, lsl #20
        1aaf58:	0c101844 	ldceq	8, cr1, [r0], -#272
        1aaf5c:	57524543 	ldrplb	r4, [r2, -r3, asr #10]
        1aaf60:	e3a00002 	mov	r0, #2	; 0x2
        1aaf64:	eb685c78 	bl	1bc214c <$AllocateRefHandle(long)>
        1aaf68:	e58d0000 	str	r0, [sp]
        1aaf6c:	e1a0000d 	mov	r0, sp
        1aaf70:	e28d1004 	add	r1, sp, #4	; 0x4
        1aaf74:	eb63a6b4 	bl	1a94a4c <$FLookupWord__FRC6RefVarT1>
        1aaf78:	e59d1004 	ldr	r1, [sp, #4]
        1aaf7c:	e5810000 	str	r0, [r1]
        1aaf80:	e59d0000 	ldr	r0, [sp]
        1aaf84:	eb68608c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1aaf88:	e59d0004 	ldr	r0, [sp, #4]
        1aaf8c:	e5900000 	ldr	r0, [r0]
        1aaf90:	e3300002 	teq	r0, #2	; 0x2
        1aaf94:	0a00004f 	beq	1ab0d8 <AddAutoAdd(unsigned short *)+0x1f4>
        1aaf98:	e28d0004 	add	r0, sp, #4	; 0x4
        1aaf9c:	eb686078 	bl	1bc3184 <$GetCString(RefVar const &)>
        1aafa0:	e1a04000 	mov	r4, r0
        1aafa4:	eb690ded 	bl	1bee760 <$Ustrlen>
        1aafa8:	e2806001 	add	r6, r0, #1	; 0x1
        1aafac:	e356001f 	cmp	r6, #31	; 0x1f
        1aafb0:	ca000048 	bgt	1ab0d8 <AddAutoAdd(unsigned short *)+0x1f4>
        1aafb4:	e1a00006 	mov	r0, r6
        1aafb8:	eb68dc60 	bl	1be2140 <$NewPtr>
        1aafbc:	e1b05000 	movs	r5, r0
        1aafc0:	0a000044 	beq	1ab0d8 <AddAutoAdd(unsigned short *)+0x1f4>
        1aafc4:	e1a03006 	mov	r3, r6
        1aafc8:	e1a01005 	mov	r1, r5
        1aafcc:	e1a00004 	mov	r0, r4
        1aafd0:	e3a02001 	mov	r2, #1	; 0x1
        1aafd4:	eb68f0e9 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
        1aafd8:	e1a01005 	mov	r1, r5
        1aafdc:	e3a02000 	mov	r2, #0	; 0x0
        1aafe0:	e3a00024 	mov	r0, #36	; 0x24
        1aafe4:	eb63f51e 	bl	1aa8464 <$AddWordWithCount(long, unsigned char *, unsigned long)>
        1aafe8:	e1a0a000 	mov	sl, r0
        1aafec:	e59f90f4 	ldr	r9, [pc, #f4]	; 1ab0e8 <AddAutoAdd(unsigned short *)+0x204>
        1aaff0:	e5990000 	ldr	r0, [r9]
        1aaff4:	e3300000 	teq	r0, #0	; 0x0
        1aaff8:	1a000034 	bne	1ab0d0 <AddAutoAdd(unsigned short *)+0x1ec>
        1aaffc:	e1a00086 	mov	r0, r6, lsl #1
        1ab000:	eb68dc4e 	bl	1be2140 <$NewPtr>
        1ab004:	e1b07000 	movs	r7, r0
        1ab008:	0a000028 	beq	1ab0b0 <AddAutoAdd(unsigned short *)+0x1cc>
        1ab00c:	e1a01004 	mov	r1, r4
        1ab010:	e1a00007 	mov	r0, r7
        1ab014:	eb690dd0 	bl	1bee75c <$Ustrcpy>
        1ab018:	e1a00007 	mov	r0, r7
        1ab01c:	eb640dc0 	bl	1aae724 <$EncodeRecognitionWord(unsigned short *)>
        1ab020:	e1a08000 	mov	r8, r0
        1ab024:	e1a03006 	mov	r3, r6
        1ab028:	e1a01005 	mov	r1, r5
        1ab02c:	e1a00007 	mov	r0, r7
        1ab030:	e3a02001 	mov	r2, #1	; 0x1
        1ab034:	eb68f0d1 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
        1ab038:	e1a02008 	mov	r2, r8
        1ab03c:	e1a01005 	mov	r1, r5
        1ab040:	e3a0001f 	mov	r0, #31	; 0x1f
        1ab044:	eb63f506 	bl	1aa8464 <$AddWordWithCount(long, unsigned char *, unsigned long)>
        1ab048:	e1a0100a 	mov	r1, sl
        1ab04c:	e3a00014 	mov	r0, #20	; 0x14
        1ab050:	eb681e3a 	bl	1bb2940 <$__rt_sdiv>
        1ab054:	e3310000 	teq	r1, #0	; 0x0
        1ab058:	1a00000c 	bne	1ab090 <AddAutoAdd(unsigned short *)+0x1ac>
        1ab05c:	e24dd004 	sub	sp, sp, #4	; 0x4
        1ab060:	e59f1084 	ldr	r1, [pc, #84]	; 1ab0ec <AddAutoAdd(unsigned short *)+0x208>
        1ab064:	e59f0084 	ldr	r0, [pc, #84]	; 1ab0f0 <AddAutoAdd(unsigned short *)+0x20c>
        1ab068:	e5900000 	ldr	r0, [r0]
        1ab06c:	eb687d39 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        1ab070:	eb685c35 	bl	1bc214c <$AllocateRefHandle(long)>
        1ab074:	e58d0000 	str	r0, [sp]
        1ab078:	e59f1074 	ldr	r1, [pc, #74]	; 1ab0f4 <AddAutoAdd(unsigned short *)+0x210>
        1ab07c:	e1a0000d 	mov	r0, sp
        1ab080:	eb6953ee 	bl	1c00040 <$NSSend__FRC6RefVarT1>
        1ab084:	e59d0000 	ldr	r0, [sp]
        1ab088:	eb68604b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1ab08c:	e28dd004 	add	sp, sp, #4	; 0x4
        1ab090:	e3a08001 	mov	r8, #1	; 0x1
        1ab094:	e1a00007 	mov	r0, r7
        1ab098:	eb68d805 	bl	1be10b4 <$DisposPtr>
        1ab09c:	e3370000 	teq	r7, #0	; 0x0
        1ab0a0:	0a000002 	beq	1ab0b0 <AddAutoAdd(unsigned short *)+0x1cc>
        1ab0a4:	e5990000 	ldr	r0, [r9]
        1ab0a8:	e3300000 	teq	r0, #0	; 0x0
        1ab0ac:	0a000007 	beq	1ab0d0 <AddAutoAdd(unsigned short *)+0x1ec>
        1ab0b0:	e1a03006 	mov	r3, r6
        1ab0b4:	e1a01005 	mov	r1, r5
        1ab0b8:	e1a00004 	mov	r0, r4
        1ab0bc:	e3a02001 	mov	r2, #1	; 0x1
        1ab0c0:	eb68f0ae 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
        1ab0c4:	e1a01005 	mov	r1, r5
        1ab0c8:	e3a00024 	mov	r0, #36	; 0x24
        1ab0cc:	eb64054b 	bl	1aac600 <$DeleteWordWithCount(long, unsigned char *)>
        1ab0d0:	e1a00005 	mov	r0, r5
        1ab0d4:	eb68d7f6 	bl	1be10b4 <$DisposPtr>
        1ab0d8:	e59d0004 	ldr	r0, [sp, #4]
        1ab0dc:	eb686036 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1ab0e0:	e1a00008 	mov	r0, r8
        1ab0e4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1ab0e8:	0c100810 	ldceq	8, cr0, [r0], -#64
        1ab0ec:	00681f68 	rsbeq	r1, r8, r8, ror #30
        1ab0f0:	0c101934 	ldceq	9, cr1, [r0], -#208
        1ab0f4:	00681da8 	rsbeq	r1, r8, r8, lsr #27
    */
}

/**
 * Symbol: all_susp_extr__FP4EXTRiT2UcPsN32T5T2
 * Address: 001c0844
 */
void globals::all_susp_extr() {
    /*
        1c0844:	e1a0c00d 	mov	ip, sp
        1c0848:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1c084c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1c0850:	e24cb014 	sub	fp, ip, #20	; 0x14
        1c0854:	e1a04000 	mov	r4, r0
        1c0858:	e1a05001 	mov	r5, r1
        1c085c:	e20380ff 	and	r8, r3, #255	; 0xff
        1c0860:	e3a00008 	mov	r0, #8	; 0x8
        1c0864:	e3380001 	teq	r8, #1	; 0x1
        1c0868:	e52d000c 	str	r0, [sp, -#12]!
        1c086c:	03a0a066 	moveq	sl, #102	; 0x66
        1c0870:	0a000001 	beq	1c087c <all_susp_extr__FP4EXTRiT2UcPsN32T5T2+0x38>
        1c0874:	e3380003 	teq	r8, #3	; 0x3
        1c0878:	03a0a065 	moveq	sl, #101	; 0x65
        1c087c:	e3a06001 	mov	r6, #1	; 0x1
        1c0880:	e3a07000 	mov	r7, #0	; 0x0
        1c0884:	e3550001 	cmp	r5, #1	; 0x1
        1c0888:	da000087 	ble	1c0aac <all_susp_extr__FP4EXTRiT2UcPsN32T5T2+0x268>
        1c088c:	e59b1018 	ldr	r1, [fp, #24]
        1c0890:	e08110c1 	add	r1, r1, r1, asr #1
        1c0894:	e58d1008 	str	r1, [sp, #8]
        1c0898:	e7940206 	ldr	r0, [r4, r6, lsl #4]
        1c089c:	e1a00840 	mov	r0, r0, asr #16
        1c08a0:	e130000a 	teq	r0, sl
        1c08a4:	00841206 	addeq	r1, r4, r6, lsl #4
        1c08a8:	05111010 	ldreq	r1, [r1, -#16]
        1c08ac:	01a01841 	moveq	r1, r1, asr #16
        1c08b0:	03310067 	teqeq	r1, #103	; 0x67
        1c08b4:	0a000005 	beq	1c08d0 <all_susp_extr__FP4EXTRiT2UcPsN32T5T2+0x8c>
        1c08b8:	e3300067 	teq	r0, #103	; 0x67
        1c08bc:	00841206 	addeq	r1, r4, r6, lsl #4
        1c08c0:	05111010 	ldreq	r1, [r1, -#16]
        1c08c4:	013a0841 	teqeq	sl, r1, asr #16
        1c08c8:	1a000073 	bne	1c0a9c <all_susp_extr__FP4EXTRiT2UcPsN32T5T2+0x258>
        1c08cc:	ea000001 	b	1c08d8 <all_susp_extr__FP4EXTRiT2UcPsN32T5T2+0x94>
        1c08d0:	e3300067 	teq	r0, #103	; 0x67
        1c08d4:	1a000003 	bne	1c08e8 <all_susp_extr__FP4EXTRiT2UcPsN32T5T2+0xa4>
        1c08d8:	e1a01006 	mov	r1, r6
        1c08dc:	e2463001 	sub	r3, r6, #1	; 0x1
        1c08e0:	e58d3004 	str	r3, [sp, #4]
        1c08e4:	ea000001 	b	1c08f0 <all_susp_extr__FP4EXTRiT2UcPsN32T5T2+0xac>
        1c08e8:	e2461001 	sub	r1, r6, #1	; 0x1
        1c08ec:	e58d6004 	str	r6, [sp, #4]
        1c08f0:	e0841201 	add	r1, r4, r1, lsl #4
        1c08f4:	e591100c 	ldr	r1, [r1, #12]
        1c08f8:	e3580003 	cmp	r8, #3	; 0x3
        1c08fc:	1a000010 	bne	1c0944 <all_susp_extr__FP4EXTRiT2UcPsN32T5T2+0x100>
        1c0900:	e5b10010 	ldr	r0, [r1, #16]!
        1c0904:	e5d00000 	ldrb	r0, [r0]
        1c0908:	e3300010 	teq	r0, #16	; 0x10
        1c090c:	1a00000d 	bne	1c0948 <all_susp_extr__FP4EXTRiT2UcPsN32T5T2+0x104>
        1c0910:	e1a03008 	mov	r3, r8
        1c0914:	e59b2014 	ldr	r2, [fp, #20]
        1c0918:	e92d000c 	stmdb	sp!, {r2, r3}
        1c091c:	e59d300c 	ldr	r3, [sp, #12]
        1c0920:	e0843203 	add	r3, r4, r3, lsl #4
        1c0924:	e893000f 	ldmia	r3, {r0, r1, r2, r3}
        1c0928:	eb658e3c 	bl	1b24220 <$calc_ampl(EXTR, short *, unsigned char)>
        1c092c:	e28dd008 	add	sp, sp, #8	; 0x8
        1c0930:	e59d1008 	ldr	r1, [sp, #8]
        1c0934:	e1510000 	cmp	r1, r0
        1c0938:	c59d3004 	ldrgt	r3, [sp, #4]
        1c093c:	ca000041 	bgt	1c0a48 <all_susp_extr__FP4EXTRiT2UcPsN32T5T2+0x204>
        1c0940:	ea000000 	b	1c0948 <all_susp_extr__FP4EXTRiT2UcPsN32T5T2+0x104>
        1c0944:	1a000014 	bne	1c099c <all_susp_extr__FP4EXTRiT2UcPsN32T5T2+0x158>
        1c0948:	e3370000 	teq	r7, #0	; 0x0
        1c094c:	11a09007 	movne	r9, r7
        1c0950:	1a000008 	bne	1c0978 <all_susp_extr__FP4EXTRiT2UcPsN32T5T2+0x134>
        1c0954:	e1a03008 	mov	r3, r8
        1c0958:	e59b2014 	ldr	r2, [fp, #20]
        1c095c:	e92d000c 	stmdb	sp!, {r2, r3}
        1c0960:	e0840206 	add	r0, r4, r6, lsl #4
        1c0964:	e2403010 	sub	r3, r0, #16	; 0x10
        1c0968:	e893000f 	ldmia	r3, {r0, r1, r2, r3}
        1c096c:	eb658e2b 	bl	1b24220 <$calc_ampl(EXTR, short *, unsigned char)>
        1c0970:	e28dd008 	add	sp, sp, #8	; 0x8
        1c0974:	e1a09000 	mov	r9, r0
        1c0978:	e1a03008 	mov	r3, r8
        1c097c:	e59b2014 	ldr	r2, [fp, #20]
        1c0980:	e92d000c 	stmdb	sp!, {r2, r3}
        1c0984:	e0843206 	add	r3, r4, r6, lsl #4
        1c0988:	e893000f 	ldmia	r3, {r0, r1, r2, r3}
        1c098c:	eb658e23 	bl	1b24220 <$calc_ampl(EXTR, short *, unsigned char)>
        1c0990:	e28dd008 	add	sp, sp, #8	; 0x8
        1c0994:	e1a07000 	mov	r7, r0
        1c0998:	ea000024 	b	1c0a30 <all_susp_extr__FP4EXTRiT2UcPsN32T5T2+0x1ec>
        1c099c:	e3380001 	teq	r8, #1	; 0x1
        1c09a0:	1a000022 	bne	1c0a30 <all_susp_extr__FP4EXTRiT2UcPsN32T5T2+0x1ec>
        1c09a4:	e0841206 	add	r1, r4, r6, lsl #4
        1c09a8:	e1a02001 	mov	r2, r1
        1c09ac:	e511300a 	ldr	r3, [r1, -#10]
        1c09b0:	e1a03843 	mov	r3, r3, asr #16
        1c09b4:	e59bc024 	ldr	ip, [fp, #36]
        1c09b8:	e79cc083 	ldr	ip, [ip, r3, lsl #1]
        1c09bc:	e1a0c84c 	mov	ip, ip, asr #16
        1c09c0:	e511300c 	ldr	r3, [r1, -#12]
        1c09c4:	e04c9843 	sub	r9, ip, r3, asr #16
        1c09c8:	e5913006 	ldr	r3, [r1, #6]
        1c09cc:	e1a03843 	mov	r3, r3, asr #16
        1c09d0:	e59bc024 	ldr	ip, [fp, #36]
        1c09d4:	e79c3083 	ldr	r3, [ip, r3, lsl #1]
        1c09d8:	e1a03843 	mov	r3, r3, asr #16
        1c09dc:	e5922004 	ldr	r2, [r2, #4]
        1c09e0:	e0437842 	sub	r7, r3, r2, asr #16
        1c09e4:	e59b2028 	ldr	r2, [fp, #40]
        1c09e8:	e3520000 	cmp	r2, #0	; 0x0
        1c09ec:	da000006 	ble	1c0a0c <all_susp_extr__FP4EXTRiT2UcPsN32T5T2+0x1c8>
        1c09f0:	e130000a 	teq	r0, sl
        1c09f4:	1a000004 	bne	1c0a0c <all_susp_extr__FP4EXTRiT2UcPsN32T5T2+0x1c8>
        1c09f8:	e59b2028 	ldr	r2, [fp, #40]
        1c09fc:	e1570002 	cmp	r7, r2
        1c0a00:	ba000001 	blt	1c0a0c <all_susp_extr__FP4EXTRiT2UcPsN32T5T2+0x1c8>
        1c0a04:	e2463001 	sub	r3, r6, #1	; 0x1
        1c0a08:	ea00000e 	b	1c0a48 <all_susp_extr__FP4EXTRiT2UcPsN32T5T2+0x204>
        1c0a0c:	e59b2028 	ldr	r2, [fp, #40]
        1c0a10:	e3520000 	cmp	r2, #0	; 0x0
        1c0a14:	da000005 	ble	1c0a30 <all_susp_extr__FP4EXTRiT2UcPsN32T5T2+0x1ec>
        1c0a18:	e5110010 	ldr	r0, [r1, -#16]
        1c0a1c:	e13a0840 	teq	sl, r0, asr #16
        1c0a20:	1a000002 	bne	1c0a30 <all_susp_extr__FP4EXTRiT2UcPsN32T5T2+0x1ec>
        1c0a24:	e59b2028 	ldr	r2, [fp, #40]
        1c0a28:	e1590002 	cmp	r9, r2
        1c0a2c:	aa000004 	bge	1c0a44 <all_susp_extr__FP4EXTRiT2UcPsN32T5T2+0x200>
        1c0a30:	e59d0000 	ldr	r0, [sp]
        1c0a34:	e0000099 	mul	r0, r9, r0
        1c0a38:	e59b1020 	ldr	r1, [fp, #32]
        1c0a3c:	e1500001 	cmp	r0, r1
        1c0a40:	ca000005 	bgt	1c0a5c <all_susp_extr__FP4EXTRiT2UcPsN32T5T2+0x218>
        1c0a44:	e1a03006 	mov	r3, r6
        1c0a48:	e1a02006 	mov	r2, r6
        1c0a4c:	e1a01005 	mov	r1, r5
        1c0a50:	e1a00004 	mov	r0, r4
        1c0a54:	eb659634 	bl	1b2632c <$ret_to_line__FP4EXTRiN22>
        1c0a58:	ea000010 	b	1c0aa0 <all_susp_extr__FP4EXTRiT2UcPsN32T5T2+0x25c>
        1c0a5c:	e59d0000 	ldr	r0, [sp]
        1c0a60:	e0000097 	mul	r0, r7, r0
        1c0a64:	e59b1020 	ldr	r1, [fp, #32]
        1c0a68:	e1500001 	cmp	r0, r1
        1c0a6c:	daffffe4 	ble	1c0a04 <all_susp_extr__FP4EXTRiT2UcPsN32T5T2+0x1c0>
        1c0a70:	e59b0018 	ldr	r0, [fp, #24]
        1c0a74:	e0470000 	sub	r0, r7, r0
        1c0a78:	eb62bb51 	bl	1a6f7c4 <$HWRAbs(int)>
        1c0a7c:	e52d0004 	str	r0, [sp, -#4]!
        1c0a80:	e59b0018 	ldr	r0, [fp, #24]
        1c0a84:	e0490000 	sub	r0, r9, r0
        1c0a88:	eb62bb4d 	bl	1a6f7c4 <$HWRAbs(int)>
        1c0a8c:	e49d1004 	ldr	r1, [sp], #4
        1c0a90:	e1510000 	cmp	r1, r0
        1c0a94:	aaffffda 	bge	1c0a04 <all_susp_extr__FP4EXTRiT2UcPsN32T5T2+0x1c0>
        1c0a98:	eaffffe9 	b	1c0a44 <all_susp_extr__FP4EXTRiT2UcPsN32T5T2+0x200>
        1c0a9c:	e3a07000 	mov	r7, #0	; 0x0
        1c0aa0:	e2866001 	add	r6, r6, #1	; 0x1
        1c0aa4:	e1560005 	cmp	r6, r5
        1c0aa8:	baffff7a 	blt	1c0898 <all_susp_extr__FP4EXTRiT2UcPsN32T5T2+0x54>
        1c0aac:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: AddPartialPageToSafeHeap(void *, SSafeHeapPage *)
 * Address: 001c5f14
 */
AddPartialPageToSafeHeap(void *, SSafeHeapPage *) {
    /*
        1c5f14:	e3300000 	teq	r0, #0	; 0x0
        1c5f18:	01a0f00e 	moveq	pc, lr
        1c5f1c:	e1a02a00 	mov	r2, r0, lsl #20
        1c5f20:	e1a02a22 	mov	r2, r2, lsr #20
        1c5f24:	e2622a01 	rsb	r2, r2, #4096	; 0x1000
        1c5f28:	e352002c 	cmp	r2, #44	; 0x2c
        1c5f2c:	31a0f00e 	movcc	pc, lr
        1c5f30:	e59f3010 	ldr	r3, [pc, #10]	; 1c5f48 <AddPartialPageToSafeHeap(void *, SSafeHeapPage *)+0x34>
        1c5f34:	e5803000 	str	r3, [r0]
        1c5f38:	e1a03001 	mov	r3, r1
        1c5f3c:	e3a02000 	mov	r2, #0	; 0x0
        1c5f40:	e3a01000 	mov	r1, #0	; 0x0
        1c5f44:	ea64d7a6 	b	1afbde4 <SSafeHeapPage::$Init(unsigned long, TPhys *, SSafeHeapPage *)>
        1c5f48:	0001c874 	andeq	ip, r1, r4, ror r8
    */
}

/**
 * Symbol: AllowSchedule(void)
 * Address: 001cc838
 */
AllowSchedule(void) {
    /*
        1cc838:	e1a0c00d 	mov	ip, sp
        1cc83c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1cc840:	e24cb004 	sub	fp, ip, #4	; 0x4
        1cc844:	eb07189d 	bl	392ac0 <EnterAtomic>
        1cc848:	e59f0038 	ldr	r0, [pc, #38]	; 1cc888 <AllowSchedule(void)+0x50>
        1cc84c:	e5901000 	ldr	r1, [r0]
        1cc850:	e2511001 	subs	r1, r1, #1	; 0x1
        1cc854:	e5801000 	str	r1, [r0]
        1cc858:	1a000008 	bne	1cc880 <AllowSchedule(void)+0x48>
        1cc85c:	e59f0028 	ldr	r0, [pc, #28]	; 1cc88c <AllowSchedule(void)+0x54>
        1cc860:	e5901000 	ldr	r1, [r0]
        1cc864:	e3310000 	teq	r1, #0	; 0x0
        1cc868:	0a000004 	beq	1cc880 <AllowSchedule(void)+0x48>
        1cc86c:	e3a01000 	mov	r1, #0	; 0x0
        1cc870:	e5801000 	str	r1, [r0]
        1cc874:	e3a01001 	mov	r1, #1	; 0x1
        1cc878:	e59f0010 	ldr	r0, [pc, #10]	; 1cc890 <AllowSchedule(void)+0x58>
        1cc87c:	e5801000 	str	r1, [r0]
        1cc880:	e91b6800 	ldmdb	fp, {fp, sp, lr}
        1cc884:	ea0718a4 	b	392b1c <ExitAtomic>
        1cc888:	0c100fd8 	ldceq	15, cr0, [r0], -#864
        1cc88c:	0c100fd4 	ldceq	15, cr0, [r0], -#848
        1cc890:	0c100fe4 	ldceq	15, cr0, [r0], -#912
    */
}

/**
 * Symbol: add_first_child1__FUcP6TTNodeT2lUlP13TLZCompressor
 * Address: 001ce514
 */
void globals::add_first_child1() {
    /*
        1ce514:	e92d4000 	stmdb	sp!, {lr}
        1ce518:	e20000ff 	and	r0, r0, #255	; 0xff
        1ce51c:	e59dc008 	ldr	ip, [sp, #8]
        1ce520:	e59de004 	ldr	lr, [sp, #4]
        1ce524:	e5812008 	str	r2, [r1, #8]
        1ce528:	e582100c 	str	r1, [r2, #12]
        1ce52c:	e3a01000 	mov	r1, #0	; 0x0
        1ce530:	e5821010 	str	r1, [r2, #16]
        1ce534:	e1a0e80e 	mov	lr, lr, lsl #16
        1ce538:	e1a0e82e 	mov	lr, lr, lsr #16
        1ce53c:	e5821008 	str	r1, [r2, #8]
        1ce540:	e5c2e003 	strb	lr, [r2, #3]
        1ce544:	e1a0142e 	mov	r1, lr, lsr #8
        1ce548:	e5c21002 	strb	r1, [r2, #2]
        1ce54c:	e5c2e005 	strb	lr, [r2, #5]
        1ce550:	e5c21004 	strb	r1, [r2, #4]
        1ce554:	e5c23001 	strb	r3, [r2, #1]
        1ce558:	e1a01423 	mov	r1, r3, lsr #8
        1ce55c:	e5c21000 	strb	r1, [r2]
        1ce560:	e08c0100 	add	r0, ip, r0, lsl #2
        1ce564:	e5a02018 	str	r2, [r0, #24]!
        1ce568:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: add_a_sibling1__FP6TTNodeT1lT3
 * Address: 001ce5a8
 */
void globals::add_a_sibling1() {
    /*
        1ce5a8:	e92d4000 	stmdb	sp!, {lr}
        1ce5ac:	e590c00c 	ldr	ip, [r0, #12]
        1ce5b0:	e59ce002 	ldr	lr, [ip, #2]
        1ce5b4:	e153082e 	cmp	r3, lr, lsr #16
        1ce5b8:	d8bd8000 	ldmleia	sp!, {pc}
        1ce5bc:	e5a01010 	str	r1, [r0, #16]!
        1ce5c0:	e3a00000 	mov	r0, #0	; 0x0
        1ce5c4:	e5810010 	str	r0, [r1, #16]
        1ce5c8:	e581c00c 	str	ip, [r1, #12]
        1ce5cc:	e5810008 	str	r0, [r1, #8]
        1ce5d0:	e5c13003 	strb	r3, [r1, #3]
        1ce5d4:	e1a00423 	mov	r0, r3, lsr #8
        1ce5d8:	e5c10002 	strb	r0, [r1, #2]
        1ce5dc:	e59c0002 	ldr	r0, [ip, #2]
        1ce5e0:	e1a00820 	mov	r0, r0, lsr #16
        1ce5e4:	e0430000 	sub	r0, r3, r0
        1ce5e8:	e5c10005 	strb	r0, [r1, #5]
        1ce5ec:	e1a00440 	mov	r0, r0, asr #8
        1ce5f0:	e5c10004 	strb	r0, [r1, #4]
        1ce5f4:	e5c12001 	strb	r2, [r1, #1]
        1ce5f8:	e1a00422 	mov	r0, r2, lsr #8
        1ce5fc:	e5c10000 	strb	r0, [r1]
        1ce600:	e1a00001 	mov	r0, r1
        1ce604:	e8bd4000 	ldmia	sp!, {lr}
        1ce608:	ea675b3b 	b	1ba52fc <$update_a_node1(TTNode *)>
    */
}

/**
 * Symbol: address_a_node__FUcP6TTNodeN22lT5P13TLZCompressor
 * Address: 001ce60c
 */
void globals::address_a_node() {
    /*
        1ce60c:	e92d4010 	stmdb	sp!, {r4, lr}
        1ce610:	e20000ff 	and	r0, r0, #255	; 0xff
        1ce614:	e28de008 	add	lr, sp, #8	; 0x8
        1ce618:	e89e5010 	ldmia	lr, {r4, ip, lr}
        1ce61c:	e592200c 	ldr	r2, [r2, #12]
        1ce620:	e5922002 	ldr	r2, [r2, #2]
        1ce624:	e15c0822 	cmp	ip, r2, lsr #16
        1ce628:	d8bd8010 	ldmleia	sp!, {r4, pc}
        1ce62c:	e08e0100 	add	r0, lr, r0, lsl #2
        1ce630:	e5a03018 	str	r3, [r0, #24]!
        1ce634:	e3a00000 	mov	r0, #0	; 0x0
        1ce638:	e5830010 	str	r0, [r3, #16]
        1ce63c:	e583100c 	str	r1, [r3, #12]
        1ce640:	e5830008 	str	r0, [r3, #8]
        1ce644:	e1a0080c 	mov	r0, ip, lsl #16
        1ce648:	e1a00820 	mov	r0, r0, lsr #16
        1ce64c:	e5c30003 	strb	r0, [r3, #3]
        1ce650:	e1a02420 	mov	r2, r0, lsr #8
        1ce654:	e5c32002 	strb	r2, [r3, #2]
        1ce658:	e5911002 	ldr	r1, [r1, #2]
        1ce65c:	e1a01821 	mov	r1, r1, lsr #16
        1ce660:	e0400001 	sub	r0, r0, r1
        1ce664:	e5c30005 	strb	r0, [r3, #5]
        1ce668:	e1a00440 	mov	r0, r0, asr #8
        1ce66c:	e5c30004 	strb	r0, [r3, #4]
        1ce670:	e5c34001 	strb	r4, [r3, #1]
        1ce674:	e1a00424 	mov	r0, r4, lsr #8
        1ce678:	e5c30000 	strb	r0, [r3]
        1ce67c:	e1a00003 	mov	r0, r3
        1ce680:	e8bd4010 	ldmia	sp!, {r4, lr}
        1ce684:	ea675b1c 	b	1ba52fc <$update_a_node1(TTNode *)>
    */
}

/**
 * Symbol: AddPageMappingToDomain
 * Address: 001f8c38
 */
void globals::AddPageMappingToDomain() {
    /*
        1f8c38:	e1a0c00d 	mov	ip, sp
        1f8c3c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1f8c40:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f8c44:	e92d0007 	stmdb	sp!, {r0, r1, r2}
        1f8c48:	e59f0014 	ldr	r0, [pc, #14]	; 1f8c64 <AddPageMappingToDomain+0x2c>
        1f8c4c:	e5900004 	ldr	r0, [r0, #4]
        1f8c50:	e1a0200d 	mov	r2, sp
        1f8c54:	e3a01009 	mov	r1, #9	; 0x9
        1f8c58:	e59000b8 	ldr	r0, [r0, #184]
        1f8c5c:	eb06d5af 	bl	3ae320 <MonitorDispatchSWI>
        1f8c60:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        1f8c64:	0c104c08 	ldceq	12, cr4, [r0], -#32
    */
}

/**
 * Symbol: AcquireStroke(TStroke *)
 * Address: 001ff5a0
 */
AcquireStroke(TStroke *) {
    /*
        1ff5a0:	e1a0c00d 	mov	ip, sp
        1ff5a4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1ff5a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ff5ac:	eb65affd 	bl	1b6b5a8 <TStroke::$Done(void)>
        1ff5b0:	e3300000 	teq	r0, #0	; 0x0
        1ff5b4:	13a00000 	movne	r0, #0	; 0x0
        1ff5b8:	191ba800 	ldmnedb	fp, {fp, sp, pc}
        1ff5bc:	e59f0010 	ldr	r0, [pc, #10]	; 1ff5d4 <AcquireStroke(TStroke *)+0x34>
        1ff5c0:	e5900008 	ldr	r0, [r0, #8]
        1ff5c4:	e3a01000 	mov	r1, #0	; 0x0
        1ff5c8:	eb673c61 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        1ff5cc:	e3a00001 	mov	r0, #1	; 0x1
        1ff5d0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        1ff5d4:	0c104c24 	ldceq	12, cr4, [r0], -#144
    */
}

/**
 * Symbol: AbandonedStroke(TStroke *, unsigned long)
 * Address: 001ffe10
 */
AbandonedStroke(TStroke *, unsigned long) {
    /*
        1ffe10:	e1a0c00d 	mov	ip, sp
        1ffe14:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1ffe18:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ffe1c:	e1b04000 	movs	r4, r0
        1ffe20:	e1a05001 	mov	r5, r1
        1ffe24:	0a00000f 	beq	1ffe68 <AbandonedStroke(TStroke *, unsigned long)+0x58>
        1ffe28:	e1a00004 	mov	r0, r4
        1ffe2c:	e3a01102 	mov	r1, #-2147483648	; 0x80000000
        1ffe30:	eb658cec 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        1ffe34:	e3300000 	teq	r0, #0	; 0x0
        1ffe38:	1a00000a 	bne	1ffe68 <AbandonedStroke(TStroke *, unsigned long)+0x58>
        1ffe3c:	e594000c 	ldr	r0, [r4, #12]
        1ffe40:	e3300000 	teq	r0, #0	; 0x0
        1ffe44:	0a000007 	beq	1ffe68 <AbandonedStroke(TStroke *, unsigned long)+0x58>
        1ffe48:	e1a00004 	mov	r0, r4
        1ffe4c:	eb65add5 	bl	1b6b5a8 <TStroke::$Done(void)>
        1ffe50:	e3300000 	teq	r0, #0	; 0x0
        1ffe54:	0a000003 	beq	1ffe68 <AbandonedStroke(TStroke *, unsigned long)+0x58>
        1ffe58:	e5b40038 	ldr	r0, [r4, #56]!
        1ffe5c:	e1500005 	cmp	r0, r5
        1ffe60:	33a00001 	movcc	r0, #1	; 0x1
        1ffe64:	391ba830 	ldmccdb	fp, {r4, r5, fp, sp, pc}
        1ffe68:	e3a00000 	mov	r0, #0	; 0x0
        1ffe6c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: ArbitrateWithScrubs__FP6TArrayT1
 * Address: 002074ac
 */
void globals::ArbitrateWithScrubs() {
    /*
        2074ac:	e1a0c00d 	mov	ip, sp
        2074b0:	e92ddff3 	stmdb	sp!, {r0, r1, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2074b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2074b8:	e1a04000 	mov	r4, r0
        2074bc:	e24dd020 	sub	sp, sp, #32	; 0x20
        2074c0:	e3a09000 	mov	r9, #0	; 0x0
        2074c4:	eb6562e8 	bl	1b6006c <TArray::$Lock(void)>
        2074c8:	e1a0100d 	mov	r1, sp
        2074cc:	e1a00004 	mov	r0, r4
        2074d0:	eb655ea7 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        2074d4:	e1a08000 	mov	r8, r0
        2074d8:	e3a06000 	mov	r6, #0	; 0x0
        2074dc:	e59d0014 	ldr	r0, [sp, #20]
        2074e0:	e3500000 	cmp	r0, #0	; 0x0
        2074e4:	9a00003c 	bls	2075dc <ArbitrateWithScrubs__FP6TArrayT1+0x130>
        2074e8:	e59f70fc 	ldr	r7, [pc, #fc]	; 2075ec <ArbitrateWithScrubs__FP6TArrayT1+0x140>
        2074ec:	e598a000 	ldr	sl, [r8]
        2074f0:	e59a5008 	ldr	r5, [sl, #8]
        2074f4:	e1a00005 	mov	r0, r5
        2074f8:	e59f10f0 	ldr	r1, [pc, #f0]	; 2075f0 <ArbitrateWithScrubs__FP6TArrayT1+0x144>
        2074fc:	eb060db5 	bl	38abd8 <C$$dtorvec$$Limit+0x264>
        207500:	e3300000 	teq	r0, #0	; 0x0
        207504:	1a00002c 	bne	2075bc <ArbitrateWithScrubs__FP6TArrayT1+0x110>
        207508:	e1a00005 	mov	r0, r5
        20750c:	e59f10e0 	ldr	r1, [pc, #e0]	; 2075f4 <ArbitrateWithScrubs__FP6TArrayT1+0x148>
        207510:	eb060db0 	bl	38abd8 <C$$dtorvec$$Limit+0x264>
        207514:	e3300000 	teq	r0, #0	; 0x0
        207518:	1a000027 	bne	2075bc <ArbitrateWithScrubs__FP6TArrayT1+0x110>
        20751c:	e1a0000a 	mov	r0, sl
        207520:	e3a01501 	mov	r1, #4194304	; 0x400000
        207524:	eb656f2f 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        207528:	e3300000 	teq	r0, #0	; 0x0
        20752c:	1a000022 	bne	2075bc <ArbitrateWithScrubs__FP6TArrayT1+0x110>
        207530:	e51b002c 	ldr	r0, [fp, -#44]
        207534:	e5901000 	ldr	r1, [r0]
        207538:	e1a0e00f 	mov	lr, pc
        20753c:	e281f018 	add	pc, r1, #24	; 0x18
        207540:	e3300000 	teq	r0, #0	; 0x0
        207544:	03a09001 	moveq	r9, #1	; 0x1
        207548:	0a000023 	beq	2075dc <ArbitrateWithScrubs__FP6TArrayT1+0x130>
        20754c:	e8b8500e 	ldmia	r8!, {r1, r2, r3, ip, lr}
        207550:	e8a0500e 	stmia	r0!, {r1, r2, r3, ip, lr}
        207554:	e898500e 	ldmia	r8, {r1, r2, r3, ip, lr}
        207558:	e880500e 	stmia	r0, {r1, r2, r3, ip, lr}
        20755c:	e1a00005 	mov	r0, r5
        207560:	e59f1090 	ldr	r1, [pc, #90]	; 2075f8 <ArbitrateWithScrubs__FP6TArrayT1+0x14c>
        207564:	eb060d9b 	bl	38abd8 <C$$dtorvec$$Limit+0x264>
        207568:	e3300000 	teq	r0, #0	; 0x0
        20756c:	13a00002 	movne	r0, #2	; 0x2
        207570:	1a000010 	bne	2075b8 <ArbitrateWithScrubs__FP6TArrayT1+0x10c>
        207574:	e1a00005 	mov	r0, r5
        207578:	e59f107c 	ldr	r1, [pc, #7c]	; 2075fc <ArbitrateWithScrubs__FP6TArrayT1+0x150>
        20757c:	eb060d95 	bl	38abd8 <C$$dtorvec$$Limit+0x264>
        207580:	e3300000 	teq	r0, #0	; 0x0
        207584:	13a00001 	movne	r0, #1	; 0x1
        207588:	1a00000a 	bne	2075b8 <ArbitrateWithScrubs__FP6TArrayT1+0x10c>
        20758c:	e1a00005 	mov	r0, r5
        207590:	e59f1068 	ldr	r1, [pc, #68]	; 207600 <ArbitrateWithScrubs__FP6TArrayT1+0x154>
        207594:	eb060d8f 	bl	38abd8 <C$$dtorvec$$Limit+0x264>
        207598:	e3300000 	teq	r0, #0	; 0x0
        20759c:	1a000004 	bne	2075b4 <ArbitrateWithScrubs__FP6TArrayT1+0x108>
        2075a0:	e1a00005 	mov	r0, r5
        2075a4:	e59f1058 	ldr	r1, [pc, #58]	; 207604 <ArbitrateWithScrubs__FP6TArrayT1+0x158>
        2075a8:	eb060d8a 	bl	38abd8 <C$$dtorvec$$Limit+0x264>
        2075ac:	e3300000 	teq	r0, #0	; 0x0
        2075b0:	0a000001 	beq	2075bc <ArbitrateWithScrubs__FP6TArrayT1+0x110>
        2075b4:	e3a00003 	mov	r0, #3	; 0x3
        2075b8:	e5870000 	str	r0, [r7]
        2075bc:	e1a0000d 	mov	r0, sp
        2075c0:	e1a0e00f 	mov	lr, pc
        2075c4:	e59df018 	ldr	pc, [sp, #24]
        2075c8:	e1a08000 	mov	r8, r0
        2075cc:	e2866001 	add	r6, r6, #1	; 0x1
        2075d0:	e59d0014 	ldr	r0, [sp, #20]
        2075d4:	e1500006 	cmp	r0, r6
        2075d8:	8affffc3 	bhi	2074ec <ArbitrateWithScrubs__FP6TArrayT1+0x40>
        2075dc:	e1a00004 	mov	r0, r4
        2075e0:	eb657307 	bl	1b64204 <TArray::$Unlock(void)>
        2075e4:	e1a00009 	mov	r0, r9
        2075e8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2075ec:	0c104c64 	ldceq	12, cr4, [r0], -#400
        2075f0:	53435242 	cmppl	r3, #536870916	; 0x20000004
        2075f4:	5752504c 	ldrplb	r5, [r2, -ip, asr #32]
        2075f8:	574f5244 	strplb	r5, [pc, -r4, asr #4]
        2075fc:	47534850 	undefined
        207600:	43414c43 	cmpmi	r1, #17152	; 0x4300
        207604:	434c4d4e 	cmpmi	ip, #4992	; 0x1380
    */
}

/**
 * Symbol: ArbitrateByRules__FP6TArrayT1UlN33
 * Address: 002079f0
 */
void globals::ArbitrateByRules() {
    /*
        2079f0:	e1a0c00d 	mov	ip, sp
        2079f4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2079f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2079fc:	e1a04001 	mov	r4, r1
        207a00:	e59b1008 	ldr	r1, [fp, #8]
        207a04:	e24dd098 	sub	sp, sp, #152	; 0x98
        207a08:	e3a0a000 	mov	sl, #0	; 0x0
        207a0c:	e3a09000 	mov	r9, #0	; 0x0
        207a10:	e58d9048 	str	r9, [sp, #72]
        207a14:	e3330001 	teq	r3, #1	; 0x1
        207a18:	e58d9020 	str	r9, [sp, #32]
        207a1c:	03310001 	teqeq	r1, #1	; 0x1
        207a20:	1a000093 	bne	207c74 <ArbitrateByRules__FP6TArrayT1UlN33+0x284>
        207a24:	e1a0100d 	mov	r1, sp
        207a28:	eb655d51 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        207a2c:	e3a07000 	mov	r7, #0	; 0x0
        207a30:	e59d1014 	ldr	r1, [sp, #20]
        207a34:	e3510000 	cmp	r1, #0	; 0x0
        207a38:	9a000024 	bls	207ad0 <ArbitrateByRules__FP6TArrayT1UlN33+0xe0>
        207a3c:	e59f60c4 	ldr	r6, [pc, #c4]	; 207b08 <ArbitrateByRules__FP6TArrayT1UlN33+0x118>
        207a40:	e59f50c4 	ldr	r5, [pc, #c4]	; 207b0c <ArbitrateByRules__FP6TArrayT1UlN33+0x11c>
        207a44:	e28de070 	add	lr, sp, #112	; 0x70
        207a48:	e8b0100e 	ldmia	r0!, {r1, r2, r3, ip}
        207a4c:	e8ae100e 	stmia	lr!, {r1, r2, r3, ip}
        207a50:	e8b0100e 	ldmia	r0!, {r1, r2, r3, ip}
        207a54:	e8ae100e 	stmia	lr!, {r1, r2, r3, ip}
        207a58:	e8901008 	ldmia	r0, {r3, ip}
        207a5c:	e88e1008 	stmia	lr, {r3, ip}
        207a60:	e59d0070 	ldr	r0, [sp, #112]
        207a64:	e5b08008 	ldr	r8, [r0, #8]!
        207a68:	e1a00008 	mov	r0, r8
        207a6c:	e1a01006 	mov	r1, r6
        207a70:	eb060c58 	bl	38abd8 <C$$dtorvec$$Limit+0x264>
        207a74:	e3300000 	teq	r0, #0	; 0x0
        207a78:	128d0020 	addne	r0, sp, #32	; 0x20
        207a7c:	1a000005 	bne	207a98 <ArbitrateByRules__FP6TArrayT1UlN33+0xa8>
        207a80:	e1a00008 	mov	r0, r8
        207a84:	e1a01005 	mov	r1, r5
        207a88:	eb060c52 	bl	38abd8 <C$$dtorvec$$Limit+0x264>
        207a8c:	e3300000 	teq	r0, #0	; 0x0
        207a90:	0a000007 	beq	207ab4 <ArbitrateByRules__FP6TArrayT1UlN33+0xc4>
        207a94:	e28d0048 	add	r0, sp, #72	; 0x48
        207a98:	e28de070 	add	lr, sp, #112	; 0x70
        207a9c:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        207aa0:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        207aa4:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        207aa8:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        207aac:	e89e1008 	ldmia	lr, {r3, ip}
        207ab0:	e8801008 	stmia	r0, {r3, ip}
        207ab4:	e1a0000d 	mov	r0, sp
        207ab8:	e1a0e00f 	mov	lr, pc
        207abc:	e59df018 	ldr	pc, [sp, #24]
        207ac0:	e2877001 	add	r7, r7, #1	; 0x1
        207ac4:	e59d1014 	ldr	r1, [sp, #20]
        207ac8:	e1510007 	cmp	r1, r7
        207acc:	8affffdc 	bhi	207a44 <ArbitrateByRules__FP6TArrayT1UlN33+0x54>
        207ad0:	e59d5048 	ldr	r5, [sp, #72]
        207ad4:	e1a00005 	mov	r0, r5
        207ad8:	e3a01501 	mov	r1, #4194304	; 0x400000
        207adc:	e59d6020 	ldr	r6, [sp, #32]
        207ae0:	eb656dc0 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        207ae4:	e3300000 	teq	r0, #0	; 0x0
        207ae8:	1a000004 	bne	207b00 <ArbitrateByRules__FP6TArrayT1UlN33+0x110>
        207aec:	e1a00006 	mov	r0, r6
        207af0:	e3a01501 	mov	r1, #4194304	; 0x400000
        207af4:	eb656dbb 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        207af8:	e3300000 	teq	r0, #0	; 0x0
        207afc:	0a000003 	beq	207b10 <ArbitrateByRules__FP6TArrayT1UlN33+0x120>
        207b00:	e1a00009 	mov	r0, r9
        207b04:	ea00006e 	b	207cc4 <ArbitrateByRules__FP6TArrayT1UlN33+0x2d4>
        207b08:	47534850 	undefined
        207b0c:	574f5244 	strplb	r5, [pc, -r4, asr #4]
        207b10:	e5960074 	ldr	r0, [r6, #116]
        207b14:	e3300001 	teq	r0, #1	; 0x1
        207b18:	0a000057 	beq	207c7c <ArbitrateByRules__FP6TArrayT1UlN33+0x28c>
        207b1c:	e1a00006 	mov	r0, r6
        207b20:	e3a01000 	mov	r1, #0	; 0x0
        207b24:	e5962000 	ldr	r2, [r6]
        207b28:	e1a0e00f 	mov	lr, pc
        207b2c:	e282f08c 	add	pc, r2, #140	; 0x8c
        207b30:	e350000a 	cmp	r0, #10	; 0xa
        207b34:	0a000003 	beq	207b48 <ArbitrateByRules__FP6TArrayT1UlN33+0x158>
        207b38:	da000006 	ble	207b58 <ArbitrateByRules__FP6TArrayT1UlN33+0x168>
        207b3c:	e330000b 	teq	r0, #11	; 0xb
        207b40:	1330000c 	teqne	r0, #12	; 0xc
        207b44:	1a000003 	bne	207b58 <ArbitrateByRules__FP6TArrayT1UlN33+0x168>
        207b48:	e59f0044 	ldr	r0, [pc, #44]	; 207b94 <ArbitrateByRules__FP6TArrayT1UlN33+0x1a4>
        207b4c:	e5d00000 	ldrb	r0, [r0]
        207b50:	e3300000 	teq	r0, #0	; 0x0
        207b54:	1a000048 	bne	207c7c <ArbitrateByRules__FP6TArrayT1UlN33+0x28c>
        207b58:	e1a00005 	mov	r0, r5
        207b5c:	e5951000 	ldr	r1, [r5]
        207b60:	e1a0e00f 	mov	lr, pc
        207b64:	e281f020 	add	pc, r1, #32	; 0x20
        207b68:	e3300000 	teq	r0, #0	; 0x0
        207b6c:	0a000040 	beq	207c74 <ArbitrateByRules__FP6TArrayT1UlN33+0x284>
        207b70:	e1a00005 	mov	r0, r5
        207b74:	eb655cf9 	bl	1b5ef60 <$GetFirstWordIndex(TStdWordUnit *)>
        207b78:	e1b01000 	movs	r1, r0
        207b7c:	4a000005 	bmi	207b98 <ArbitrateByRules__FP6TArrayT1UlN33+0x1a8>
        207b80:	e1a00005 	mov	r0, r5
        207b84:	e5952000 	ldr	r2, [r5]
        207b88:	e1a0e00f 	mov	lr, pc
        207b8c:	e282f0bc 	add	pc, r2, #188	; 0xbc
        207b90:	ea000001 	b	207b9c <ArbitrateByRules__FP6TArrayT1UlN33+0x1ac>
        207b94:	0c1018b8 	ldceq	8, cr1, [r0], -#736
        207b98:	e3a00000 	mov	r0, #0	; 0x0
        207b9c:	e1a08000 	mov	r8, r0
        207ba0:	e1a00005 	mov	r0, r5
        207ba4:	e3a01000 	mov	r1, #0	; 0x0
        207ba8:	e5952000 	ldr	r2, [r5]
        207bac:	e1a0e00f 	mov	lr, pc
        207bb0:	e282f0bc 	add	pc, r2, #188	; 0xbc
        207bb4:	e3300000 	teq	r0, #0	; 0x0
        207bb8:	0a000026 	beq	207c58 <ArbitrateByRules__FP6TArrayT1UlN33+0x268>
        207bbc:	e5900000 	ldr	r0, [r0]
        207bc0:	eb679ae6 	bl	1bee760 <$Ustrlen>
        207bc4:	e3300001 	teq	r0, #1	; 0x1
        207bc8:	1a000022 	bne	207c58 <ArbitrateByRules__FP6TArrayT1UlN33+0x268>
        207bcc:	e24dd010 	sub	sp, sp, #16	; 0x10
        207bd0:	e3a0781e 	mov	r7, #1966080	; 0x1e0000
        207bd4:	e3380000 	teq	r8, #0	; 0x0
        207bd8:	0a000010 	beq	207c20 <ArbitrateByRules__FP6TArrayT1UlN33+0x230>
        207bdc:	e5980000 	ldr	r0, [r8]
        207be0:	e5908000 	ldr	r8, [r0]
        207be4:	e1a08828 	mov	r8, r8, lsr #16
        207be8:	e1a00006 	mov	r0, r6
        207bec:	e3a01000 	mov	r1, #0	; 0x0
        207bf0:	e5962000 	ldr	r2, [r6]
        207bf4:	e1a0e00f 	mov	lr, pc
        207bf8:	e282f08c 	add	pc, r2, #140	; 0x8c
        207bfc:	e3380049 	teq	r8, #73	; 0x49
        207c00:	13380061 	teqne	r8, #97	; 0x61
        207c04:	13380041 	teqne	r8, #65	; 0x41
        207c08:	1a000004 	bne	207c20 <ArbitrateByRules__FP6TArrayT1UlN33+0x230>
        207c0c:	e3300007 	teq	r0, #7	; 0x7
        207c10:	13300006 	teqne	r0, #6	; 0x6
        207c14:	13300005 	teqne	r0, #5	; 0x5
        207c18:	13300004 	teqne	r0, #4	; 0x4
        207c1c:	03a07823 	moveq	r7, #2293760	; 0x230000
        207c20:	e1a0100d 	mov	r1, sp
        207c24:	e1a00005 	mov	r0, r5
        207c28:	eb657596 	bl	1b65288 <TUnit::$GetBBox(FRect *)>
        207c2c:	e1a0000d 	mov	r0, sp
        207c30:	eb656944 	bl	1b62148 <$rHeight>
        207c34:	e1500007 	cmp	r0, r7
        207c38:	ca000004 	bgt	207c50 <ArbitrateByRules__FP6TArrayT1UlN33+0x260>
        207c3c:	e1a0000d 	mov	r0, sp
        207c40:	eb656941 	bl	1b6214c <$rWidth>
        207c44:	e1500007 	cmp	r0, r7
        207c48:	d28dd010 	addle	sp, sp, #16	; 0x10
        207c4c:	da000008 	ble	207c74 <ArbitrateByRules__FP6TArrayT1UlN33+0x284>
        207c50:	e28dd010 	add	sp, sp, #16	; 0x10
        207c54:	ea000008 	b	207c7c <ArbitrateByRules__FP6TArrayT1UlN33+0x28c>
        207c58:	e1a00006 	mov	r0, r6
        207c5c:	e3a01000 	mov	r1, #0	; 0x0
        207c60:	e5962000 	ldr	r2, [r6]
        207c64:	e1a0e00f 	mov	lr, pc
        207c68:	e282f08c 	add	pc, r2, #140	; 0x8c
        207c6c:	e3300008 	teq	r0, #8	; 0x8
        207c70:	0a000001 	beq	207c7c <ArbitrateByRules__FP6TArrayT1UlN33+0x28c>
        207c74:	e1a0000a 	mov	r0, sl
        207c78:	ea000011 	b	207cc4 <ArbitrateByRules__FP6TArrayT1UlN33+0x2d4>
        207c7c:	e1a00004 	mov	r0, r4
        207c80:	e5941000 	ldr	r1, [r4]
        207c84:	e1a0e00f 	mov	lr, pc
        207c88:	e281f018 	add	pc, r1, #24	; 0x18
        207c8c:	e3300000 	teq	r0, #0	; 0x0
        207c90:	03e00000 	mvneq	r0, #0	; 0x0
        207c94:	0a00000a 	beq	207cc4 <ArbitrateByRules__FP6TArrayT1UlN33+0x2d4>
        207c98:	e28de020 	add	lr, sp, #32	; 0x20
        207c9c:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        207ca0:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        207ca4:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        207ca8:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        207cac:	e89e1008 	ldmia	lr, {r3, ip}
        207cb0:	e8801008 	stmia	r0, {r3, ip}
        207cb4:	e3a01001 	mov	r1, #1	; 0x1
        207cb8:	e59f0008 	ldr	r0, [pc, #8]	; 207cc8 <ArbitrateByRules__FP6TArrayT1UlN33+0x2d8>
        207cbc:	e5801000 	str	r1, [r0]
        207cc0:	e3a00001 	mov	r0, #1	; 0x1
        207cc4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        207cc8:	0c104c64 	ldceq	12, cr4, [r0], -#400
    */
}

/**
 * Symbol: ArbiterGetUnitStrokes(TSIUnit *, TDArray *)
 * Address: 00208104
 */
ArbiterGetUnitStrokes(TSIUnit *, TDArray *) {
    /*
        208104:	e1a0c00d 	mov	ip, sp
        208108:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        20810c:	e24cb004 	sub	fp, ip, #4	; 0x4
        208110:	e1b05000 	movs	r5, r0
        208114:	e1a04001 	mov	r4, r1
        208118:	e24dd004 	sub	sp, sp, #4	; 0x4
        20811c:	e3a08001 	mov	r8, #1	; 0x1
        208120:	13340000 	teqne	r4, #0	; 0x0
        208124:	1a000001 	bne	208130 <ArbiterGetUnitStrokes(TSIUnit *, TDArray *)+0x2c>
        208128:	e1a00008 	mov	r0, r8
        20812c:	ea000038 	b	208214 <ArbiterGetUnitStrokes(TSIUnit *, TDArray *)+0x110>
        208130:	e5950008 	ldr	r0, [r5, #8]
        208134:	e59fc080 	ldr	ip, [pc, #80]	; 2081bc <ArbiterGetUnitStrokes(TSIUnit *, TDArray *)+0xb8>
        208138:	e130000c 	teq	r0, ip
        20813c:	1a00001f 	bne	2081c0 <ArbiterGetUnitStrokes(TSIUnit *, TDArray *)+0xbc>
        208140:	e595002a 	ldr	r0, [r5, #42]
        208144:	e1a00820 	mov	r0, r0, lsr #16
        208148:	e58d0000 	str	r0, [sp]
        20814c:	e2800001 	add	r0, r0, #1	; 0x1
        208150:	e594500c 	ldr	r5, [r4, #12]
        208154:	e3550000 	cmp	r5, #0	; 0x0
        208158:	9a00000b 	bls	20818c <ArbiterGetUnitStrokes(TSIUnit *, TDArray *)+0x88>
        20815c:	e2451001 	sub	r1, r5, #1	; 0x1
        208160:	e1a06001 	mov	r6, r1
        208164:	e1a00004 	mov	r0, r4
        208168:	e5942000 	ldr	r2, [r4]
        20816c:	e1a0e00f 	mov	lr, pc
        208170:	e282f01c 	add	pc, r2, #28	; 0x1c
        208174:	e5900000 	ldr	r0, [r0]
        208178:	e59d1000 	ldr	r1, [sp]
        20817c:	e1500001 	cmp	r0, r1
        208180:	81a05006 	movhi	r5, r6
        208184:	83560000 	cmphi	r6, #0	; 0x0
        208188:	8afffff3 	bhi	20815c <ArbiterGetUnitStrokes(TSIUnit *, TDArray *)+0x58>
        20818c:	e59d1000 	ldr	r1, [sp]
        208190:	e1300001 	teq	r0, r1
        208194:	0a00001d 	beq	208210 <ArbiterGetUnitStrokes(TSIUnit *, TDArray *)+0x10c>
        208198:	e1a0200d 	mov	r2, sp
        20819c:	e1a01005 	mov	r1, r5
        2081a0:	e1a00004 	mov	r0, r4
        2081a4:	e5943000 	ldr	r3, [r4]
        2081a8:	e1a0e00f 	mov	lr, pc
        2081ac:	e283f04c 	add	pc, r3, #76	; 0x4c
        2081b0:	e3700001 	cmn	r0, #1	; 0x1
        2081b4:	0affffdb 	beq	208128 <ArbiterGetUnitStrokes(TSIUnit *, TDArray *)+0x24>
        2081b8:	ea000014 	b	208210 <ArbiterGetUnitStrokes(TSIUnit *, TDArray *)+0x10c>
        2081bc:	5354524b 	cmppl	r4, #-1342177276	; 0xb0000004
        2081c0:	e1a00005 	mov	r0, r5
        2081c4:	e5951000 	ldr	r1, [r5]
        2081c8:	e1a0e00f 	mov	lr, pc
        2081cc:	e281f01c 	add	pc, r1, #28	; 0x1c
        2081d0:	e1a07000 	mov	r7, r0
        2081d4:	e3a06000 	mov	r6, #0	; 0x0
        2081d8:	e3500000 	cmp	r0, #0	; 0x0
        2081dc:	9a00000b 	bls	208210 <ArbiterGetUnitStrokes(TSIUnit *, TDArray *)+0x10c>
        2081e0:	e1a01006 	mov	r1, r6
        2081e4:	e1a00005 	mov	r0, r5
        2081e8:	e5952000 	ldr	r2, [r5]
        2081ec:	e1a0e00f 	mov	lr, pc
        2081f0:	e282f058 	add	pc, r2, #88	; 0x58
        2081f4:	e1a01004 	mov	r1, r4
        2081f8:	eb654eea 	bl	1b5bda8 <$ArbiterGetUnitStrokes(TSIUnit *, TDArray *)>
        2081fc:	e3300000 	teq	r0, #0	; 0x0
        208200:	1affffc8 	bne	208128 <ArbiterGetUnitStrokes(TSIUnit *, TDArray *)+0x24>
        208204:	e2866001 	add	r6, r6, #1	; 0x1
        208208:	e1560007 	cmp	r6, r7
        20820c:	3afffff3 	bcc	2081e0 <ArbiterGetUnitStrokes(TSIUnit *, TDArray *)+0xdc>
        208210:	e3a00000 	mov	r0, #0	; 0x0
        208214:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: ArbitrateEarly(BestMatch *)
 * Address: 00208adc
 */
ArbitrateEarly(BestMatch *) {
    /*
        208adc:	e1a0c00d 	mov	ip, sp
        208ae0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        208ae4:	e24cb004 	sub	fp, ip, #4	; 0x4
        208ae8:	e5905000 	ldr	r5, [r0]
        208aec:	e5954008 	ldr	r4, [r5, #8]
        208af0:	e1a00004 	mov	r0, r4
        208af4:	e59f1108 	ldr	r1, [pc, #108]	; 208c04 <ArbitrateEarly(BestMatch *)+0x128>
        208af8:	eb060836 	bl	38abd8 <C$$dtorvec$$Limit+0x264>
        208afc:	e3300000 	teq	r0, #0	; 0x0
        208b00:	0a000008 	beq	208b28 <ArbitrateEarly(BestMatch *)+0x4c>
        208b04:	e1a00005 	mov	r0, r5
        208b08:	e3a01000 	mov	r1, #0	; 0x0
        208b0c:	e5952000 	ldr	r2, [r5]
        208b10:	e1a0e00f 	mov	lr, pc
        208b14:	e282f058 	add	pc, r2, #88	; 0x58
        208b18:	eb656174 	bl	1b610f0 <$OnlyStrokeWritten(TStrokeUnit *)>
        208b1c:	e3300000 	teq	r0, #0	; 0x0
        208b20:	13a00001 	movne	r0, #1	; 0x1
        208b24:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        208b28:	e59fc0d8 	ldr	ip, [pc, #d8]	; 208c08 <ArbitrateEarly(BestMatch *)+0x12c>
        208b2c:	e134000c 	teq	r4, ip
        208b30:	1a00005a 	bne	208ca0 <ArbitrateEarly(BestMatch *)+0x1c4>
        208b34:	e1a04005 	mov	r4, r5
        208b38:	e5950074 	ldr	r0, [r5, #116]
        208b3c:	e3300001 	teq	r0, #1	; 0x1
        208b40:	1a00000a 	bne	208b70 <ArbitrateEarly(BestMatch *)+0x94>
        208b44:	e5940078 	ldr	r0, [r4, #120]
        208b48:	e3500805 	cmp	r0, #327680	; 0x50000
        208b4c:	aa000007 	bge	208b70 <ArbitrateEarly(BestMatch *)+0x94>
        208b50:	e1a00004 	mov	r0, r4
        208b54:	e3a01000 	mov	r1, #0	; 0x0
        208b58:	e5942000 	ldr	r2, [r4]
        208b5c:	e1a0e00f 	mov	lr, pc
        208b60:	e282f058 	add	pc, r2, #88	; 0x58
        208b64:	eb656161 	bl	1b610f0 <$OnlyStrokeWritten(TStrokeUnit *)>
        208b68:	e3300000 	teq	r0, #0	; 0x0
        208b6c:	1a000045 	bne	208c88 <ArbitrateEarly(BestMatch *)+0x1ac>
        208b70:	e1a00004 	mov	r0, r4
        208b74:	eb657a14 	bl	1b673cc <TGeneralShapeUnit::$GetGeneralShape(void)>
        208b78:	e1a09000 	mov	r9, r0
        208b7c:	e3a07000 	mov	r7, #0	; 0x0
        208b80:	e1a00005 	mov	r0, r5
        208b84:	e3a01601 	mov	r1, #1048576	; 0x100000
        208b88:	eb656996 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        208b8c:	e1a0a000 	mov	sl, r0
        208b90:	e3a08001 	mov	r8, #1	; 0x1
        208b94:	e3a06000 	mov	r6, #0	; 0x0
        208b98:	e1a00004 	mov	r0, r4
        208b9c:	e5941000 	ldr	r1, [r4]
        208ba0:	e1a0e00f 	mov	lr, pc
        208ba4:	e281f020 	add	pc, r1, #32	; 0x20
        208ba8:	e3300000 	teq	r0, #0	; 0x0
        208bac:	0a00003b 	beq	208ca0 <ArbitrateEarly(BestMatch *)+0x1c4>
        208bb0:	e1a00004 	mov	r0, r4
        208bb4:	e3a01000 	mov	r1, #0	; 0x0
        208bb8:	e5942000 	ldr	r2, [r4]
        208bbc:	e1a0e00f 	mov	lr, pc
        208bc0:	e282f08c 	add	pc, r2, #140	; 0x8c
        208bc4:	e350000c 	cmp	r0, #12	; 0xc
        208bc8:	908ff100 	addls	pc, pc, r0, lsl #2
        208bcc:	ea000012 	b	208c1c <ArbitrateEarly(BestMatch *)+0x140>
        208bd0:	ea00000d 	b	208c0c <ArbitrateEarly(BestMatch *)+0x130>
        208bd4:	ea00000c 	b	208c0c <ArbitrateEarly(BestMatch *)+0x130>
        208bd8:	ea00000f 	b	208c1c <ArbitrateEarly(BestMatch *)+0x140>
        208bdc:	ea00000e 	b	208c1c <ArbitrateEarly(BestMatch *)+0x140>
        208be0:	ea00000b 	b	208c14 <ArbitrateEarly(BestMatch *)+0x138>
        208be4:	ea00000c 	b	208c1c <ArbitrateEarly(BestMatch *)+0x140>
        208be8:	ea000009 	b	208c14 <ArbitrateEarly(BestMatch *)+0x138>
        208bec:	ea00000a 	b	208c1c <ArbitrateEarly(BestMatch *)+0x140>
        208bf0:	ea000009 	b	208c1c <ArbitrateEarly(BestMatch *)+0x140>
        208bf4:	ea000009 	b	208c20 <ArbitrateEarly(BestMatch *)+0x144>
        208bf8:	ea000008 	b	208c20 <ArbitrateEarly(BestMatch *)+0x144>
        208bfc:	ea000007 	b	208c20 <ArbitrateEarly(BestMatch *)+0x144>
        208c00:	ea000006 	b	208c20 <ArbitrateEarly(BestMatch *)+0x144>
        208c04:	53435242 	cmppl	r3, #536870916	; 0x20000004
        208c08:	47534850 	undefined
        208c0c:	e3a07004 	mov	r7, #4	; 0x4
        208c10:	ea000002 	b	208c20 <ArbitrateEarly(BestMatch *)+0x144>
        208c14:	e3a06005 	mov	r6, #5	; 0x5
        208c18:	ea000000 	b	208c20 <ArbitrateEarly(BestMatch *)+0x144>
        208c1c:	e3a08000 	mov	r8, #0	; 0x0
        208c20:	e33a0000 	teq	sl, #0	; 0x0
        208c24:	13a06014 	movne	r6, #20	; 0x14
        208c28:	13a08001 	movne	r8, #1	; 0x1
        208c2c:	e3390000 	teq	r9, #0	; 0x0
        208c30:	0a000001 	beq	208c3c <ArbitrateEarly(BestMatch *)+0x160>
        208c34:	e3370000 	teq	r7, #0	; 0x0
        208c38:	05b9700c 	ldreq	r7, [r9, #12]!
        208c3c:	e3380000 	teq	r8, #0	; 0x0
        208c40:	0a000016 	beq	208ca0 <ArbitrateEarly(BestMatch *)+0x1c4>
        208c44:	e3360000 	teq	r6, #0	; 0x0
        208c48:	0a000001 	beq	208c54 <ArbitrateEarly(BestMatch *)+0x178>
        208c4c:	e1570006 	cmp	r7, r6
        208c50:	8a000012 	bhi	208ca0 <ArbitrateEarly(BestMatch *)+0x1c4>
        208c54:	e24dd010 	sub	sp, sp, #16	; 0x10
        208c58:	e1a0100d 	mov	r1, sp
        208c5c:	e1a00005 	mov	r0, r5
        208c60:	eb657188 	bl	1b65288 <TUnit::$GetBBox(FRect *)>
        208c64:	e1a0000d 	mov	r0, sp
        208c68:	eb656536 	bl	1b62148 <$rHeight>
        208c6c:	e3500819 	cmp	r0, #1638400	; 0x190000
        208c70:	ba000009 	blt	208c9c <ArbitrateEarly(BestMatch *)+0x1c0>
        208c74:	e1a0000d 	mov	r0, sp
        208c78:	eb656533 	bl	1b6214c <$rWidth>
        208c7c:	e3500819 	cmp	r0, #1638400	; 0x190000
        208c80:	ba000005 	blt	208c9c <ArbitrateEarly(BestMatch *)+0x1c0>
        208c84:	e28dd010 	add	sp, sp, #16	; 0x10
        208c88:	e3a00001 	mov	r0, #1	; 0x1
        208c8c:	e59f1004 	ldr	r1, [pc, #4]	; 208c98 <ArbitrateEarly(BestMatch *)+0x1bc>
        208c90:	e5810000 	str	r0, [r1]
        208c94:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        208c98:	0c104c64 	ldceq	12, cr4, [r0], -#400
        208c9c:	e28dd010 	add	sp, sp, #16	; 0x10
        208ca0:	e3a00000 	mov	r0, #0	; 0x0
        208ca4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: AreStrokesAfterUnit(TUnit *)
 * Address: 0020c018
 */
AreStrokesAfterUnit(TUnit *) {
    /*
        20c018:	e1a0c00d 	mov	ip, sp
        20c01c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        20c020:	e24cb004 	sub	fp, ip, #4	; 0x4
        20c024:	e24dd020 	sub	sp, sp, #32	; 0x20
        20c028:	e590502c 	ldr	r5, [r0, #44]
        20c02c:	e1a05825 	mov	r5, r5, lsr #16
        20c030:	e59f0054 	ldr	r0, [pc, #54]	; 20c08c <AreStrokesAfterUnit(TUnit *)+0x74>
        20c034:	e5900000 	ldr	r0, [r0]
        20c038:	e5900008 	ldr	r0, [r0, #8]
        20c03c:	e1a0100d 	mov	r1, sp
        20c040:	eb654bcb 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        20c044:	e3a04000 	mov	r4, #0	; 0x0
        20c048:	e59d1014 	ldr	r1, [sp, #20]
        20c04c:	e3510000 	cmp	r1, #0	; 0x0
        20c050:	9a00000b 	bls	20c084 <AreStrokesAfterUnit(TUnit *)+0x6c>
        20c054:	e5900000 	ldr	r0, [r0]
        20c058:	e590002c 	ldr	r0, [r0, #44]
        20c05c:	e1550820 	cmp	r5, r0, lsr #16
        20c060:	b3a00001 	movlt	r0, #1	; 0x1
        20c064:	ba000007 	blt	20c088 <AreStrokesAfterUnit(TUnit *)+0x70>
        20c068:	e1a0000d 	mov	r0, sp
        20c06c:	e1a0e00f 	mov	lr, pc
        20c070:	e59df018 	ldr	pc, [sp, #24]
        20c074:	e2844001 	add	r4, r4, #1	; 0x1
        20c078:	e59d1014 	ldr	r1, [sp, #20]
        20c07c:	e1510004 	cmp	r1, r4
        20c080:	8afffff3 	bhi	20c054 <AreStrokesAfterUnit(TUnit *)+0x3c>
        20c084:	e3a00000 	mov	r0, #0	; 0x0
        20c088:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        20c08c:	0c10187c 	ldceq	8, cr1, [r0], -#496
    */
}

/**
 * Symbol: AddBilinears__FP8BilinearN21
 * Address: 002102cc
 */
void globals::AddBilinears() {
    /*
        2102cc:	e92d41f0 	stmdb	sp!, {r4, r5, r6, r7, r8, lr}
        2102d0:	e5903000 	ldr	r3, [r0]
        2102d4:	e591c000 	ldr	ip, [r1]
        2102d8:	e133000c 	teq	r3, ip
        2102dc:	18bd81f0 	ldmneia	sp!, {r4, r5, r6, r7, r8, pc}
        2102e0:	e3a0e000 	mov	lr, #0	; 0x0
        2102e4:	e5823000 	str	r3, [r2]
        2102e8:	e3530000 	cmp	r3, #0	; 0x0
        2102ec:	b8bd81f0 	ldmltia	sp!, {r4, r5, r6, r7, r8, pc}
        2102f0:	e1a0c00e 	mov	ip, lr
        2102f4:	e080610e 	add	r6, r0, lr, lsl #2
        2102f8:	e081510e 	add	r5, r1, lr, lsl #2
        2102fc:	e082410e 	add	r4, r2, lr, lsl #2
        210300:	e15e0003 	cmp	lr, r3
        210304:	ca00000c 	bgt	21033c <AddBilinears__FP8BilinearN21+0x70>
        210308:	e5967004 	ldr	r7, [r6, #4]
        21030c:	e5977000 	ldr	r7, [r7]
        210310:	e797810c 	ldr	r8, [r7, ip, lsl #2]
        210314:	e5957004 	ldr	r7, [r5, #4]
        210318:	e5977000 	ldr	r7, [r7]
        21031c:	e797710c 	ldr	r7, [r7, ip, lsl #2]
        210320:	e0888007 	add	r8, r8, r7
        210324:	e5947004 	ldr	r7, [r4, #4]
        210328:	e5977000 	ldr	r7, [r7]
        21032c:	e787810c 	str	r8, [r7, ip, lsl #2]
        210330:	e28cc001 	add	ip, ip, #1	; 0x1
        210334:	e15c0003 	cmp	ip, r3
        210338:	dafffff2 	ble	210308 <AddBilinears__FP8BilinearN21+0x3c>
        21033c:	e28ee001 	add	lr, lr, #1	; 0x1
        210340:	e15e0003 	cmp	lr, r3
        210344:	daffffe9 	ble	2102f0 <AddBilinears__FP8BilinearN21+0x24>
        210348:	e8bd81f0 	ldmia	sp!, {r4, r5, r6, r7, r8, pc}
    */
}

/**
 * Symbol: AccessPoint(long, TDArray *, GeneralPt *)
 * Address: 00216e54
 */
AccessPoint(long, TDArray *, GeneralPt *) {
    /*
        216e54:	e1a0c00d 	mov	ip, sp
        216e58:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        216e5c:	e24cb004 	sub	fp, ip, #4	; 0x4
        216e60:	e1a04002 	mov	r4, r2
        216e64:	e1a02001 	mov	r2, r1
        216e68:	e1a01000 	mov	r1, r0
        216e6c:	e1a00002 	mov	r0, r2
        216e70:	e5922000 	ldr	r2, [r2]
        216e74:	e1a0e00f 	mov	lr, pc
        216e78:	e282f01c 	add	pc, r2, #28	; 0x1c
        216e7c:	e1a01000 	mov	r1, r0
        216e80:	e1a00004 	mov	r0, r4
        216e84:	e3a0200c 	mov	r2, #12	; 0xc
        216e88:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        216e8c:	ea6676ef 	b	1bb4a50 <$memcpy>
    */
}

/**
 * Symbol: AxisAngle(long, long *)
 * Address: 00225c8c
 */
AxisAngle(long, long *) {
    /*
        225c8c:	e3a02000 	mov	r2, #0	; 0x0
        225c90:	e3300001 	teq	r0, #1	; 0x1
        225c94:	1a00000c 	bne	225ccc <AxisAngle(long, long *)+0x40>
        225c98:	e5910000 	ldr	r0, [r1]
        225c9c:	e35000ac 	cmp	r0, #172	; 0xac
        225ca0:	a3a000b4 	movge	r0, #180	; 0xb4
        225ca4:	aa000011 	bge	225cf0 <AxisAngle(long, long *)+0x64>
        225ca8:	e37000ac 	cmn	r0, #172	; 0xac
        225cac:	d3e000b3 	mvnle	r0, #179	; 0xb3
        225cb0:	da00000e 	ble	225cf0 <AxisAngle(long, long *)+0x64>
        225cb4:	e3500000 	cmp	r0, #0	; 0x0
        225cb8:	b2600000 	rsblt	r0, r0, #0	; 0x0
        225cbc:	e3500008 	cmp	r0, #8	; 0x8
        225cc0:	d5812000 	strle	r2, [r1]
        225cc4:	da00000a 	ble	225cf4 <AxisAngle(long, long *)+0x68>
        225cc8:	ea00000b 	b	225cfc <AxisAngle(long, long *)+0x70>
        225ccc:	e3300002 	teq	r0, #2	; 0x2
        225cd0:	1a000009 	bne	225cfc <AxisAngle(long, long *)+0x70>
        225cd4:	e5910000 	ldr	r0, [r1]
        225cd8:	e3500052 	cmp	r0, #82	; 0x52
        225cdc:	a3a0005a 	movge	r0, #90	; 0x5a
        225ce0:	aa000002 	bge	225cf0 <AxisAngle(long, long *)+0x64>
        225ce4:	e3700052 	cmn	r0, #82	; 0x52
        225ce8:	ca000003 	bgt	225cfc <AxisAngle(long, long *)+0x70>
        225cec:	e3e00059 	mvn	r0, #89	; 0x59
        225cf0:	e5810000 	str	r0, [r1]
        225cf4:	e3a00001 	mov	r0, #1	; 0x1
        225cf8:	e1a0f00e 	mov	pc, lr
        225cfc:	e1a00002 	mov	r0, r2
        225d00:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: AlignRotEqs(AngCluster *, long, TDArray *, SideMap *, EqSystem *)
 * Address: 00226584
 */
AlignRotEqs(AngCluster *, long, TDArray *, SideMap *, EqSystem *) {
    /*
        226584:	e1a0c00d 	mov	ip, sp
        226588:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        22658c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        226590:	e24cb014 	sub	fp, ip, #20	; 0x14
        226594:	e59b6014 	ldr	r6, [fp, #20]
        226598:	e24dd034 	sub	sp, sp, #52	; 0x34
        22659c:	e3a00000 	mov	r0, #0	; 0x0
        2265a0:	e58d002c 	str	r0, [sp, #44]
        2265a4:	e59d102c 	ldr	r1, [sp, #44]
        2265a8:	e0811101 	add	r1, r1, r1, lsl #2
        2265ac:	e59b2004 	ldr	r2, [fp, #4]
        2265b0:	e0825301 	add	r5, r2, r1, lsl #6
        2265b4:	e3a02000 	mov	r2, #0	; 0x0
        2265b8:	e58d2028 	str	r2, [sp, #40]
        2265bc:	e5951014 	ldr	r1, [r5, #20]
        2265c0:	e3510000 	cmp	r1, #0	; 0x0
        2265c4:	da000109 	ble	2269f0 <AlignRotEqs(AngCluster *, long, TDArray *, SideMap *, EqSystem *)+0x46c>
        2265c8:	e59d0028 	ldr	r0, [sp, #40]
        2265cc:	e085a200 	add	sl, r5, r0, lsl #4
        2265d0:	e59a00d0 	ldr	r0, [sl, #208]
        2265d4:	e0800180 	add	r0, r0, r0, lsl #3
        2265d8:	e0858100 	add	r8, r5, r0, lsl #2
        2265dc:	e28d3014 	add	r3, sp, #20	; 0x14
        2265e0:	e28d2018 	add	r2, sp, #24	; 0x18
        2265e4:	e598701c 	ldr	r7, [r8, #28]
        2265e8:	e92d000c 	stmdb	sp!, {r2, r3}
        2265ec:	e1a00007 	mov	r0, r7
        2265f0:	e3a01001 	mov	r1, #1	; 0x1
        2265f4:	e28b3008 	add	r3, fp, #8	; 0x8
        2265f8:	e893000c 	ldmia	r3, {r2, r3}
        2265fc:	eb650790 	bl	1b68444 <$FindCoords__FlUcT1P7TDArrayPlT5>
        226600:	e28dd008 	add	sp, sp, #8	; 0x8
        226604:	e3a01000 	mov	r1, #0	; 0x0
        226608:	e0870107 	add	r0, r7, r7, lsl #2
        22660c:	e59b3010 	ldr	r3, [fp, #16]
        226610:	e0830100 	add	r0, r3, r0, lsl #2
        226614:	e1a09000 	mov	r9, r0
        226618:	e5801010 	str	r1, [r0, #16]
        22661c:	e5a0100c 	str	r1, [r0, #12]!
        226620:	e595400c 	ldr	r4, [r5, #12]
        226624:	e3340001 	teq	r4, #1	; 0x1
        226628:	1a000004 	bne	226640 <AlignRotEqs(AngCluster *, long, TDArray *, SideMap *, EqSystem *)+0xbc>
        22662c:	e59d0014 	ldr	r0, [sp, #20]
        226630:	eb64f2d9 	bl	1b6319c <$Signum(long)>
        226634:	e58d0008 	str	r0, [sp, #8]
        226638:	e5a90010 	str	r0, [r9, #16]!
        22663c:	ea000005 	b	226658 <AlignRotEqs(AngCluster *, long, TDArray *, SideMap *, EqSystem *)+0xd4>
        226640:	e3340002 	teq	r4, #2	; 0x2
        226644:	1a0000ef 	bne	226a08 <AlignRotEqs(AngCluster *, long, TDArray *, SideMap *, EqSystem *)+0x484>
        226648:	e59d0018 	ldr	r0, [sp, #24]
        22664c:	eb64f2d2 	bl	1b6319c <$Signum(long)>
        226650:	e58d0008 	str	r0, [sp, #8]
        226654:	e5a9000c 	str	r0, [r9, #12]!
        226658:	e59d0028 	ldr	r0, [sp, #40]
        22665c:	e3300000 	teq	r0, #0	; 0x0
        226660:	1a000052 	bne	2267b0 <AlignRotEqs(AngCluster *, long, TDArray *, SideMap *, EqSystem *)+0x22c>
        226664:	e59d0008 	ldr	r0, [sp, #8]
        226668:	e58d000c 	str	r0, [sp, #12]
        22666c:	e58d7020 	str	r7, [sp, #32]
        226670:	e59500cc 	ldr	r0, [r5, #204]
        226674:	e58d0000 	str	r0, [sp]
        226678:	e59d102c 	ldr	r1, [sp, #44]
        22667c:	e3310000 	teq	r1, #0	; 0x0
        226680:	1a00000d 	bne	2266bc <AlignRotEqs(AngCluster *, long, TDArray *, SideMap *, EqSystem *)+0x138>
        226684:	e59d000c 	ldr	r0, [sp, #12]
        226688:	e58d0010 	str	r0, [sp, #16]
        22668c:	e59d0020 	ldr	r0, [sp, #32]
        226690:	e58d0024 	str	r0, [sp, #36]
        226694:	e59d0000 	ldr	r0, [sp]
        226698:	e58d0004 	str	r0, [sp, #4]
        22669c:	e58d001c 	str	r0, [sp, #28]
        2266a0:	e1a02006 	mov	r2, r6
        2266a4:	e595100c 	ldr	r1, [r5, #12]
        2266a8:	e59d0024 	ldr	r0, [sp, #36]
        2266ac:	eb650765 	bl	1b68448 <$GenAlignEqs__FlT1P8EqSystem>
        2266b0:	e3300000 	teq	r0, #0	; 0x0
        2266b4:	1a0000d2 	bne	226a04 <AlignRotEqs(AngCluster *, long, TDArray *, SideMap *, EqSystem *)+0x480>
        2266b8:	ea000085 	b	2268d4 <AlignRotEqs(AngCluster *, long, TDArray *, SideMap *, EqSystem *)+0x350>
        2266bc:	e89d000c 	ldmia	sp, {r2, r3}
        2266c0:	e1520003 	cmp	r2, r3
        2266c4:	b59d0004 	ldrlt	r0, [sp, #4]
        2266c8:	b59d2000 	ldrlt	r2, [sp]
        2266cc:	b58d201c 	strlt	r2, [sp, #28]
        2266d0:	e59dc01c 	ldr	ip, [sp, #28]
        2266d4:	e1a0180c 	mov	r1, ip, lsl #16
        2266d8:	e1a00800 	mov	r0, r0, lsl #16
        2266dc:	eb66ea77 	bl	1be10c0 <$FixedDivide>
        2266e0:	e2801902 	add	r1, r0, #32768	; 0x8000
        2266e4:	e1a01841 	mov	r1, r1, asr #16
        2266e8:	e1a09801 	mov	r9, r1, lsl #16
        2266ec:	e1500009 	cmp	r0, r9
        2266f0:	d1a01000 	movle	r1, r0
        2266f4:	d1a00009 	movle	r0, r9
        2266f8:	c1a01009 	movgt	r1, r9
        2266fc:	eb66ea6f 	bl	1be10c0 <$FixedDivide>
        226700:	e2400801 	sub	r0, r0, #65536	; 0x10000
        226704:	e250cd66 	subs	ip, r0, #6528	; 0x1980
        226708:	a35c001a 	cmpge	ip, #26	; 0x1a
        22670c:	d3590802 	cmple	r9, #131072	; 0x20000
        226710:	ca00001f 	bgt	226794 <AlignRotEqs(AngCluster *, long, TDArray *, SideMap *, EqSystem *)+0x210>
        226714:	e59d0010 	ldr	r0, [sp, #16]
        226718:	e59d100c 	ldr	r1, [sp, #12]
        22671c:	e1300001 	teq	r0, r1
        226720:	13e02000 	mvnne	r2, #0	; 0x0
        226724:	03a02001 	moveq	r2, #1	; 0x1
        226728:	e1a00009 	mov	r0, r9
        22672c:	e3a01801 	mov	r1, #65536	; 0x10000
        226730:	e59d3004 	ldr	r3, [sp, #4]
        226734:	e59dc01c 	ldr	ip, [sp, #28]
        226738:	e13c0003 	teq	ip, r3
        22673c:	13a00801 	movne	r0, #65536	; 0x10000
        226740:	11a01009 	movne	r1, r9
        226744:	e1a03006 	mov	r3, r6
        226748:	e2622000 	rsb	r2, r2, #0	; 0x0
        22674c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        226750:	e3340001 	teq	r4, #1	; 0x1
        226754:	13a02001 	movne	r2, #1	; 0x1
        226758:	03a02002 	moveq	r2, #2	; 0x2
        22675c:	e3a03001 	mov	r3, #1	; 0x1
        226760:	e59d0034 	ldr	r0, [sp, #52]
        226764:	e59d1030 	ldr	r1, [sp, #48]
        226768:	eb650738 	bl	1b68450 <$GenEqEqs__FlN21UcN31P8EqSystem>
        22676c:	e28dd010 	add	sp, sp, #16	; 0x10
        226770:	e3300000 	teq	r0, #0	; 0x0
        226774:	1a0000a2 	bne	226a04 <AlignRotEqs(AngCluster *, long, TDArray *, SideMap *, EqSystem *)+0x480>
        226778:	e1a02006 	mov	r2, r6
        22677c:	e1a01004 	mov	r1, r4
        226780:	e59d0020 	ldr	r0, [sp, #32]
        226784:	eb65072f 	bl	1b68448 <$GenAlignEqs__FlT1P8EqSystem>
        226788:	e3300000 	teq	r0, #0	; 0x0
        22678c:	1a00009c 	bne	226a04 <AlignRotEqs(AngCluster *, long, TDArray *, SideMap *, EqSystem *)+0x480>
        226790:	ea00004f 	b	2268d4 <AlignRotEqs(AngCluster *, long, TDArray *, SideMap *, EqSystem *)+0x350>
        226794:	e1a02006 	mov	r2, r6
        226798:	e1a01004 	mov	r1, r4
        22679c:	e59d0020 	ldr	r0, [sp, #32]
        2267a0:	eb650728 	bl	1b68448 <$GenAlignEqs__FlT1P8EqSystem>
        2267a4:	e3300000 	teq	r0, #0	; 0x0
        2267a8:	1a000095 	bne	226a04 <AlignRotEqs(AngCluster *, long, TDArray *, SideMap *, EqSystem *)+0x480>
        2267ac:	ea000048 	b	2268d4 <AlignRotEqs(AngCluster *, long, TDArray *, SideMap *, EqSystem *)+0x350>
        2267b0:	e59a00cc 	ldr	r0, [sl, #204]
        2267b4:	e59d2000 	ldr	r2, [sp]
        2267b8:	e1a01802 	mov	r1, r2, lsl #16
        2267bc:	e1a00800 	mov	r0, r0, lsl #16
        2267c0:	eb66ea3e 	bl	1be10c0 <$FixedDivide>
        2267c4:	e2801902 	add	r1, r0, #32768	; 0x8000
        2267c8:	e1a01841 	mov	r1, r1, asr #16
        2267cc:	e1a09801 	mov	r9, r1, lsl #16
        2267d0:	e1500009 	cmp	r0, r9
        2267d4:	d1a01000 	movle	r1, r0
        2267d8:	d1a00009 	movle	r0, r9
        2267dc:	c1a01009 	movgt	r1, r9
        2267e0:	eb66ea36 	bl	1be10c0 <$FixedDivide>
        2267e4:	e2400801 	sub	r0, r0, #65536	; 0x10000
        2267e8:	e250cd66 	subs	ip, r0, #6528	; 0x1980
        2267ec:	a35c001a 	cmpge	ip, #26	; 0x1a
        2267f0:	d3590802 	cmple	r9, #131072	; 0x20000
        2267f4:	ca000030 	bgt	2268bc <AlignRotEqs(AngCluster *, long, TDArray *, SideMap *, EqSystem *)+0x338>
        2267f8:	e28d1008 	add	r1, sp, #8	; 0x8
        2267fc:	e8910003 	ldmia	r1, {r0, r1}
        226800:	e1300001 	teq	r0, r1
        226804:	13e00000 	mvnne	r0, #0	; 0x0
        226808:	03a00001 	moveq	r0, #1	; 0x1
        22680c:	e1a03006 	mov	r3, r6
        226810:	e2602000 	rsb	r2, r0, #0	; 0x0
        226814:	e3a01801 	mov	r1, #65536	; 0x10000
        226818:	e1a00009 	mov	r0, r9
        22681c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        226820:	e3340001 	teq	r4, #1	; 0x1
        226824:	13a02001 	movne	r2, #1	; 0x1
        226828:	03a02002 	moveq	r2, #2	; 0x2
        22682c:	e1a01007 	mov	r1, r7
        226830:	e3a03000 	mov	r3, #0	; 0x0
        226834:	e59d0030 	ldr	r0, [sp, #48]
        226838:	eb650704 	bl	1b68450 <$GenEqEqs__FlN21UcN31P8EqSystem>
        22683c:	e28dd010 	add	sp, sp, #16	; 0x10
        226840:	e3300000 	teq	r0, #0	; 0x0
        226844:	1a00006e 	bne	226a04 <AlignRotEqs(AngCluster *, long, TDArray *, SideMap *, EqSystem *)+0x480>
        226848:	e1a02006 	mov	r2, r6
        22684c:	e1a01004 	mov	r1, r4
        226850:	e1a00007 	mov	r0, r7
        226854:	eb6506fb 	bl	1b68448 <$GenAlignEqs__FlT1P8EqSystem>
        226858:	e3300000 	teq	r0, #0	; 0x0
        22685c:	1a000068 	bne	226a04 <AlignRotEqs(AngCluster *, long, TDArray *, SideMap *, EqSystem *)+0x480>
        226860:	e3a01000 	mov	r1, #0	; 0x0
        226864:	e58a10d4 	str	r1, [sl, #212]
        226868:	e1a01849 	mov	r1, r9, asr #16
        22686c:	e58a10d8 	str	r1, [sl, #216]
        226870:	e59d2000 	ldr	r2, [sp]
        226874:	e0010192 	mul	r1, r2, r1
        226878:	e58a10cc 	str	r1, [sl, #204]
        22687c:	e3a01000 	mov	r1, #0	; 0x0
        226880:	e5982018 	ldr	r2, [r8, #24]
        226884:	e3520000 	cmp	r2, #0	; 0x0
        226888:	da000011 	ble	2268d4 <AlignRotEqs(AngCluster *, long, TDArray *, SideMap *, EqSystem *)+0x350>
        22688c:	e0882101 	add	r2, r8, r1, lsl #2
        226890:	e592201c 	ldr	r2, [r2, #28]
        226894:	e0822102 	add	r2, r2, r2, lsl #2
        226898:	e59a30cc 	ldr	r3, [sl, #204]
        22689c:	e59bc010 	ldr	ip, [fp, #16]
        2268a0:	e08c2102 	add	r2, ip, r2, lsl #2
        2268a4:	e2811001 	add	r1, r1, #1	; 0x1
        2268a8:	e5a23008 	str	r3, [r2, #8]!
        2268ac:	e5982018 	ldr	r2, [r8, #24]
        2268b0:	e1520001 	cmp	r2, r1
        2268b4:	cafffff4 	bgt	22688c <AlignRotEqs(AngCluster *, long, TDArray *, SideMap *, EqSystem *)+0x308>
        2268b8:	ea000005 	b	2268d4 <AlignRotEqs(AngCluster *, long, TDArray *, SideMap *, EqSystem *)+0x350>
        2268bc:	e1a02006 	mov	r2, r6
        2268c0:	e1a01004 	mov	r1, r4
        2268c4:	e1a00007 	mov	r0, r7
        2268c8:	eb6506de 	bl	1b68448 <$GenAlignEqs__FlT1P8EqSystem>
        2268cc:	e3300000 	teq	r0, #0	; 0x0
        2268d0:	1a00004b 	bne	226a04 <AlignRotEqs(AngCluster *, long, TDArray *, SideMap *, EqSystem *)+0x480>
        2268d4:	e3a0a001 	mov	sl, #1	; 0x1
        2268d8:	e5981018 	ldr	r1, [r8, #24]
        2268dc:	e3510001 	cmp	r1, #1	; 0x1
        2268e0:	da00003c 	ble	2269d8 <AlignRotEqs(AngCluster *, long, TDArray *, SideMap *, EqSystem *)+0x454>
        2268e4:	e088010a 	add	r0, r8, sl, lsl #2
        2268e8:	e28d3014 	add	r3, sp, #20	; 0x14
        2268ec:	e28d2018 	add	r2, sp, #24	; 0x18
        2268f0:	e5b0901c 	ldr	r9, [r0, #28]!
        2268f4:	e92d000c 	stmdb	sp!, {r2, r3}
        2268f8:	e1a00009 	mov	r0, r9
        2268fc:	e3a01001 	mov	r1, #1	; 0x1
        226900:	e28b3008 	add	r3, fp, #8	; 0x8
        226904:	e893000c 	ldmia	r3, {r2, r3}
        226908:	eb6506cd 	bl	1b68444 <$FindCoords__FlUcT1P7TDArrayPlT5>
        22690c:	e28dd008 	add	sp, sp, #8	; 0x8
        226910:	e3a01000 	mov	r1, #0	; 0x0
        226914:	e0890109 	add	r0, r9, r9, lsl #2
        226918:	e59b3010 	ldr	r3, [fp, #16]
        22691c:	e0830100 	add	r0, r3, r0, lsl #2
        226920:	e58d0030 	str	r0, [sp, #48]
        226924:	e5801010 	str	r1, [r0, #16]
        226928:	e5a0100c 	str	r1, [r0, #12]!
        22692c:	e595000c 	ldr	r0, [r5, #12]
        226930:	e3300001 	teq	r0, #1	; 0x1
        226934:	1a000004 	bne	22694c <AlignRotEqs(AngCluster *, long, TDArray *, SideMap *, EqSystem *)+0x3c8>
        226938:	e59d0014 	ldr	r0, [sp, #20]
        22693c:	eb64f216 	bl	1b6319c <$Signum(long)>
        226940:	e59d1030 	ldr	r1, [sp, #48]
        226944:	e5a10010 	str	r0, [r1, #16]!
        226948:	ea000005 	b	226964 <AlignRotEqs(AngCluster *, long, TDArray *, SideMap *, EqSystem *)+0x3e0>
        22694c:	e3300002 	teq	r0, #2	; 0x2
        226950:	1a00002c 	bne	226a08 <AlignRotEqs(AngCluster *, long, TDArray *, SideMap *, EqSystem *)+0x484>
        226954:	e59d0018 	ldr	r0, [sp, #24]
        226958:	eb64f20f 	bl	1b6319c <$Signum(long)>
        22695c:	e59d1030 	ldr	r1, [sp, #48]
        226960:	e5a1000c 	str	r0, [r1, #12]!
        226964:	e59d1008 	ldr	r1, [sp, #8]
        226968:	e1300001 	teq	r0, r1
        22696c:	13e00000 	mvnne	r0, #0	; 0x0
        226970:	03a00001 	moveq	r0, #1	; 0x1
        226974:	e1a03006 	mov	r3, r6
        226978:	e2602000 	rsb	r2, r0, #0	; 0x0
        22697c:	e3a01801 	mov	r1, #65536	; 0x10000
        226980:	e3a00801 	mov	r0, #65536	; 0x10000
        226984:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        226988:	e3340001 	teq	r4, #1	; 0x1
        22698c:	13a02001 	movne	r2, #1	; 0x1
        226990:	03a02002 	moveq	r2, #2	; 0x2
        226994:	e1a01009 	mov	r1, r9
        226998:	e1a00007 	mov	r0, r7
        22699c:	e3a03000 	mov	r3, #0	; 0x0
        2269a0:	eb6506aa 	bl	1b68450 <$GenEqEqs__FlN21UcN31P8EqSystem>
        2269a4:	e28dd010 	add	sp, sp, #16	; 0x10
        2269a8:	e3300000 	teq	r0, #0	; 0x0
        2269ac:	1a000014 	bne	226a04 <AlignRotEqs(AngCluster *, long, TDArray *, SideMap *, EqSystem *)+0x480>
        2269b0:	e1a02006 	mov	r2, r6
        2269b4:	e1a01004 	mov	r1, r4
        2269b8:	e1a00009 	mov	r0, r9
        2269bc:	eb6506a1 	bl	1b68448 <$GenAlignEqs__FlT1P8EqSystem>
        2269c0:	e3300000 	teq	r0, #0	; 0x0
        2269c4:	1a00000e 	bne	226a04 <AlignRotEqs(AngCluster *, long, TDArray *, SideMap *, EqSystem *)+0x480>
        2269c8:	e28aa001 	add	sl, sl, #1	; 0x1
        2269cc:	e5981018 	ldr	r1, [r8, #24]
        2269d0:	e151000a 	cmp	r1, sl
        2269d4:	caffffc2 	bgt	2268e4 <AlignRotEqs(AngCluster *, long, TDArray *, SideMap *, EqSystem *)+0x360>
        2269d8:	e59d2028 	ldr	r2, [sp, #40]
        2269dc:	e2822001 	add	r2, r2, #1	; 0x1
        2269e0:	e58d2028 	str	r2, [sp, #40]
        2269e4:	e5951014 	ldr	r1, [r5, #20]
        2269e8:	e1510002 	cmp	r1, r2
        2269ec:	cafffef5 	bgt	2265c8 <AlignRotEqs(AngCluster *, long, TDArray *, SideMap *, EqSystem *)+0x44>
        2269f0:	e59d102c 	ldr	r1, [sp, #44]
        2269f4:	e2811001 	add	r1, r1, #1	; 0x1
        2269f8:	e58d102c 	str	r1, [sp, #44]
        2269fc:	e3510002 	cmp	r1, #2	; 0x2
        226a00:	bafffee7 	blt	2265a4 <AlignRotEqs(AngCluster *, long, TDArray *, SideMap *, EqSystem *)+0x20>
        226a04:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        226a08:	e3a00001 	mov	r0, #1	; 0x1
        226a0c:	eafffffc 	b	226a04 <AlignRotEqs(AngCluster *, long, TDArray *, SideMap *, EqSystem *)+0x480>
    */
}

/**
 * Symbol: AdjustForInk(TRect *)
 * Address: 0022de2c
 */
AdjustForInk(TRect *) {
    /*
        22de2c:	e1a0c00d 	mov	ip, sp
        22de30:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        22de34:	e24cb004 	sub	fp, ip, #4	; 0x4
        22de38:	e1a04000 	mov	r4, r0
        22de3c:	e59f005c 	ldr	r0, [pc, #5c]	; 22dea0 <AdjustForInk(TRect *)+0x74>
        22de40:	eb61a32f 	bl	1a96b04 <$GetPreference(RefVar const &)>
        22de44:	e3100003 	tst	r0, #3	; 0x3
        22de48:	01a00140 	moveq	r0, r0, asr #2
        22de4c:	0a000000 	beq	22de54 <AdjustForInk(TRect *)+0x28>
        22de50:	eb6650b1 	bl	1bc211c <$_RINTError(long)>
        22de54:	e1a05800 	mov	r5, r0, lsl #16
        22de58:	e1a05845 	mov	r5, r5, asr #16
        22de5c:	e1a00004 	mov	r0, r4
        22de60:	e3e01000 	mvn	r1, #0	; 0x0
        22de64:	e1a02001 	mov	r2, r1
        22de68:	eb648a74 	bl	1b50840 <$InsetRect__FP4RectlT2>
        22de6c:	e5940006 	ldr	r0, [r4, #6]
        22de70:	e1a00820 	mov	r0, r0, lsr #16
        22de74:	e0800005 	add	r0, r0, r5
        22de78:	e5c40007 	strb	r0, [r4, #7]
        22de7c:	e1a00440 	mov	r0, r0, asr #8
        22de80:	e5c40006 	strb	r0, [r4, #6]
        22de84:	e5940004 	ldr	r0, [r4, #4]
        22de88:	e1a00820 	mov	r0, r0, lsr #16
        22de8c:	e0800005 	add	r0, r0, r5
        22de90:	e5c40005 	strb	r0, [r4, #5]
        22de94:	e1a00440 	mov	r0, r0, asr #8
        22de98:	e5c40004 	strb	r0, [r4, #4]
        22de9c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        22dea0:	00684e50 	rsbeq	r4, r8, r0, asr lr
    */
}

/**
 * Symbol: AddTryString(unsigned short)
 * Address: 0022ee38
 */
AddTryString(unsigned short) {
    /*
        22ee38:	e1a0c00d 	mov	ip, sp
        22ee3c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        22ee40:	e24cb004 	sub	fp, ip, #4	; 0x4
        22ee44:	e1a04000 	mov	r4, r0
        22ee48:	e1a00800 	mov	r0, r0, lsl #16
        22ee4c:	e1a00820 	mov	r0, r0, lsr #16
        22ee50:	e1a06000 	mov	r6, r0
        22ee54:	eb00001f 	bl	22eed8 <InTryString(unsigned short)>
        22ee58:	e3300000 	teq	r0, #0	; 0x0
        22ee5c:	1bffffec 	blne	22ee14 <ClearTryString(void)>
        22ee60:	e59f004c 	ldr	r0, [pc, #4c]	; 22eeb4 <AddTryString(unsigned short)+0x7c>
        22ee64:	e1a05000 	mov	r5, r0
        22ee68:	eb66fe3c 	bl	1bee760 <$Ustrlen>
        22ee6c:	e3a01000 	mov	r1, #0	; 0x0
        22ee70:	e1a02804 	mov	r2, r4, lsl #16
        22ee74:	e1a02822 	mov	r2, r2, lsr #16
        22ee78:	e1a03422 	mov	r3, r2, lsr #8
        22ee7c:	e59f2034 	ldr	r2, [pc, #34]	; 22eeb8 <AddTryString(unsigned short)+0x80>
        22ee80:	e3500002 	cmp	r0, #2	; 0x2
        22ee84:	e592c008 	ldr	ip, [r2, #8]
        22ee88:	e28c0001 	add	r0, ip, #1	; 0x1
        22ee8c:	e5820008 	str	r0, [r2, #8]
        22ee90:	2a000009 	bcs	22eebc <AddTryString(unsigned short)+0x84>
        22ee94:	e085008c 	add	r0, r5, ip, lsl #1
        22ee98:	e5c06001 	strb	r6, [r0, #1]
        22ee9c:	e5c03000 	strb	r3, [r0]
        22eea0:	e5b20008 	ldr	r0, [r2, #8]!
        22eea4:	e0850080 	add	r0, r5, r0, lsl #1
        22eea8:	e5c01001 	strb	r1, [r0, #1]
        22eeac:	e5c01000 	strb	r1, [r0]
        22eeb0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        22eeb4:	0c104d64 	ldceq	13, cr4, [r0], -#400
        22eeb8:	0c104d64 	ldceq	13, cr4, [r0], -#400
        22eebc:	e085008c 	add	r0, r5, ip, lsl #1
        22eec0:	e5c06001 	strb	r6, [r0, #1]
        22eec4:	e5c03000 	strb	r3, [r0]
        22eec8:	e5920008 	ldr	r0, [r2, #8]
        22eecc:	e3500002 	cmp	r0, #2	; 0x2
        22eed0:	a5a21008 	strge	r1, [r2, #8]!
        22eed4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: AdjustRecParmStruct(TXrWordDomain *, rc_type *)
 * Address: 0024e77c
 */
AdjustRecParmStruct(TXrWordDomain *, rc_type *) {
    /*
        24e77c:	e5d03134 	ldrb	r3, [r0, #308]
        24e780:	e3a02000 	mov	r2, #0	; 0x0
        24e784:	e3330000 	teq	r3, #0	; 0x0
        24e788:	05c120af 	streqb	r2, [r1, #175]
        24e78c:	13a03001 	movne	r3, #1	; 0x1
        24e790:	15c130af 	strneb	r3, [r1, #175]
        24e794:	e5913008 	ldr	r3, [r1, #8]
        24e798:	e1a03843 	mov	r3, r3, asr #16
        24e79c:	e3130001 	tst	r3, #1	; 0x1
        24e7a0:	0a000008 	beq	24e7c8 <AdjustRecParmStruct(TXrWordDomain *, rc_type *)+0x4c>
        24e7a4:	e590c140 	ldr	ip, [r0, #320]
        24e7a8:	e33c0000 	teq	ip, #0	; 0x0
        24e7ac:	0590c144 	ldreq	ip, [r0, #324]
        24e7b0:	033c0000 	teqeq	ip, #0	; 0x0
        24e7b4:	1a000003 	bne	24e7c8 <AdjustRecParmStruct(TXrWordDomain *, rc_type *)+0x4c>
        24e7b8:	e3c33001 	bic	r3, r3, #1	; 0x1
        24e7bc:	e5c13009 	strb	r3, [r1, #9]
        24e7c0:	e1a03443 	mov	r3, r3, asr #8
        24e7c4:	e5c13008 	strb	r3, [r1, #8]
        24e7c8:	e5d0315c 	ldrb	r3, [r0, #348]
        24e7cc:	e3330000 	teq	r3, #0	; 0x0
        24e7d0:	11a0f00e 	movne	pc, lr
        24e7d4:	e5913074 	ldr	r3, [r1, #116]
        24e7d8:	e3330000 	teq	r3, #0	; 0x0
        24e7dc:	0a00001c 	beq	24e854 <AdjustRecParmStruct(TXrWordDomain *, rc_type *)+0xd8>
        24e7e0:	e5913000 	ldr	r3, [r1]
        24e7e4:	e1a03843 	mov	r3, r3, asr #16
        24e7e8:	e3330001 	teq	r3, #1	; 0x1
        24e7ec:	1a000018 	bne	24e854 <AdjustRecParmStruct(TXrWordDomain *, rc_type *)+0xd8>
        24e7f0:	e5903138 	ldr	r3, [r0, #312]
        24e7f4:	e3130001 	tst	r3, #1	; 0x1
        24e7f8:	0203c004 	andeq	ip, r3, #4	; 0x4
        24e7fc:	033c0000 	teqeq	ip, #0	; 0x0
        24e800:	02033040 	andeq	r3, r3, #64	; 0x40
        24e804:	03330000 	teqeq	r3, #0	; 0x0
        24e808:	05c12003 	streqb	r2, [r1, #3]
        24e80c:	05c12002 	streqb	r2, [r1, #2]
        24e810:	e5902138 	ldr	r2, [r0, #312]
        24e814:	e3120001 	tst	r2, #1	; 0x1
        24e818:	02023004 	andeq	r3, r2, #4	; 0x4
        24e81c:	03330000 	teqeq	r3, #0	; 0x0
        24e820:	02022040 	andeq	r2, r2, #64	; 0x40
        24e824:	03320000 	teqeq	r2, #0	; 0x0
        24e828:	0a000002 	beq	24e838 <AdjustRecParmStruct(TXrWordDomain *, rc_type *)+0xbc>
        24e82c:	e5900144 	ldr	r0, [r0, #324]
        24e830:	e3300000 	teq	r0, #0	; 0x0
        24e834:	11a0f00e 	movne	pc, lr
        24e838:	e5910002 	ldr	r0, [r1, #2]
        24e83c:	e1a00820 	mov	r0, r0, lsr #16
        24e840:	e3c00026 	bic	r0, r0, #38	; 0x26
        24e844:	e5c10003 	strb	r0, [r1, #3]
        24e848:	e1a00440 	mov	r0, r0, asr #8
        24e84c:	e5c10002 	strb	r0, [r1, #2]
        24e850:	e1a0f00e 	mov	pc, lr
        24e854:	e5912000 	ldr	r2, [r1]
        24e858:	e1a02842 	mov	r2, r2, asr #16
        24e85c:	e3320005 	teq	r2, #5	; 0x5
        24e860:	13320004 	teqne	r2, #4	; 0x4
        24e864:	11a0f00e 	movne	pc, lr
        24e868:	e5900138 	ldr	r0, [r0, #312]
        24e86c:	e3100001 	tst	r0, #1	; 0x1
        24e870:	01a0f00e 	moveq	pc, lr
        24e874:	e5910002 	ldr	r0, [r1, #2]
        24e878:	e1a00820 	mov	r0, r0, lsr #16
        24e87c:	e3800001 	orr	r0, r0, #1	; 0x1
        24e880:	e5c10003 	strb	r0, [r1, #3]
        24e884:	e1a00440 	mov	r0, r0, asr #8
        24e888:	e5c10002 	strb	r0, [r1, #2]
        24e88c:	e5910008 	ldr	r0, [r1, #8]
        24e890:	e1a00820 	mov	r0, r0, lsr #16
        24e894:	e3800004 	orr	r0, r0, #4	; 0x4
        24e898:	e5c10009 	strb	r0, [r1, #9]
        24e89c:	e1a00440 	mov	r0, r0, asr #8
        24e8a0:	e5c10008 	strb	r0, [r1, #8]
        24e8a4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: AllWhiteScan(long, char *)
 * Address: 0024fdc8
 */
AllWhiteScan(long, char *) {
    /*
        24fdc8:	e3110003 	tst	r1, #3	; 0x3
        24fdcc:	e3a02000 	mov	r2, #0	; 0x0
        24fdd0:	1a000007 	bne	24fdf4 <AllWhiteScan(long, char *)+0x2c>
        24fdd4:	e3500004 	cmp	r0, #4	; 0x4
        24fdd8:	ba000005 	blt	24fdf4 <AllWhiteScan(long, char *)+0x2c>
        24fddc:	e4913004 	ldr	r3, [r1], #4
        24fde0:	e3330000 	teq	r3, #0	; 0x0
        24fde4:	1a000007 	bne	24fe08 <AllWhiteScan(long, char *)+0x40>
        24fde8:	e2400004 	sub	r0, r0, #4	; 0x4
        24fdec:	e3500004 	cmp	r0, #4	; 0x4
        24fdf0:	aafffff9 	bge	24fddc <AllWhiteScan(long, char *)+0x14>
        24fdf4:	e3500000 	cmp	r0, #0	; 0x0
        24fdf8:	da000007 	ble	24fe1c <AllWhiteScan(long, char *)+0x54>
        24fdfc:	e4d13001 	ldrb	r3, [r1], #1
        24fe00:	e3330000 	teq	r3, #0	; 0x0
        24fe04:	0a000001 	beq	24fe10 <AllWhiteScan(long, char *)+0x48>
        24fe08:	e1a00002 	mov	r0, r2
        24fe0c:	e1a0f00e 	mov	pc, lr
        24fe10:	e2400001 	sub	r0, r0, #1	; 0x1
        24fe14:	e3500000 	cmp	r0, #0	; 0x0
        24fe18:	cafffff7 	bgt	24fdfc <AllWhiteScan(long, char *)+0x34>
        24fe1c:	e3a00001 	mov	r0, #1	; 0x1
        24fe20:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: A_CONST_CHAR
 * Address: 0025733c
 */
void globals::A_CONST_CHAR() {
    /*
        25733c:	e1a0c00d 	mov	ip, sp
        257340:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        257344:	e24cb004 	sub	fp, ip, #4	; 0x4
        257348:	e24dd004 	sub	sp, sp, #4	; 0x4
        25734c:	e5cd0001 	strb	r0, [sp, #1]
        257350:	e1a00420 	mov	r0, r0, lsr #8
        257354:	e44d0004 	strb	r0, [sp], -#4
        257358:	e1a0100d 	mov	r1, sp
        25735c:	e28d0004 	add	r0, sp, #4	; 0x4
        257360:	e3a03001 	mov	r3, #1	; 0x1
        257364:	e3a02001 	mov	r2, #1	; 0x1
        257368:	eb664004 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
        25736c:	e4dd0008 	ldrb	r0, [sp], #8
        257370:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: AlignToGrid__FlT1
 * Address: 002628c8
 */
void globals::AlignToGrid() {
    /*
        2628c8:	e1a0c00d 	mov	ip, sp
        2628cc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2628d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2628d4:	e1b04001 	movs	r4, r1
        2628d8:	0a000003 	beq	2628ec <AlignToGrid__FlT1+0x24>
        2628dc:	e08010c4 	add	r1, r0, r4, asr #1
        2628e0:	e1a00004 	mov	r0, r4
        2628e4:	eb654015 	bl	1bb2940 <$__rt_sdiv>
        2628e8:	e0000094 	mul	r0, r4, r0
        2628ec:	e1a00800 	mov	r0, r0, lsl #16
        2628f0:	e1a00840 	mov	r0, r0, asr #16
        2628f4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: AlignPtToGrid(TPoint *, TPoint &)
 * Address: 002628f8
 */
AlignPtToGrid(TPoint *, TPoint &) {
    /*
        2628f8:	e1a0c00d 	mov	ip, sp
        2628fc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        262900:	e24cb004 	sub	fp, ip, #4	; 0x4
        262904:	e1a04000 	mov	r4, r0
        262908:	e1a05001 	mov	r5, r1
        26290c:	e5911002 	ldr	r1, [r1, #2]
        262910:	e1a01841 	mov	r1, r1, asr #16
        262914:	e5900002 	ldr	r0, [r0, #2]
        262918:	e1a00840 	mov	r0, r0, asr #16
        26291c:	eb61ab57 	bl	1acd680 <$AlignToGrid__FlT1>
        262920:	e5c40003 	strb	r0, [r4, #3]
        262924:	e1a00440 	mov	r0, r0, asr #8
        262928:	e5c40002 	strb	r0, [r4, #2]
        26292c:	e5951000 	ldr	r1, [r5]
        262930:	e1a01841 	mov	r1, r1, asr #16
        262934:	e5940000 	ldr	r0, [r4]
        262938:	e1a00840 	mov	r0, r0, asr #16
        26293c:	eb61ab4f 	bl	1acd680 <$AlignToGrid__FlT1>
        262940:	e5c40001 	strb	r0, [r4, #1]
        262944:	e1a00440 	mov	r0, r0, asr #8
        262948:	e5c40000 	strb	r0, [r4]
        26294c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: AlignRectToGrid(TRect *, TPoint &)
 * Address: 00262988
 */
AlignRectToGrid(TRect *, TPoint &) {
    /*
        262988:	e1a0c00d 	mov	ip, sp
        26298c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        262990:	e24cb004 	sub	fp, ip, #4	; 0x4
        262994:	e1a04000 	mov	r4, r0
        262998:	e1a05001 	mov	r5, r1
        26299c:	e5911002 	ldr	r1, [r1, #2]
        2629a0:	e1a01841 	mov	r1, r1, asr #16
        2629a4:	e5900002 	ldr	r0, [r0, #2]
        2629a8:	e1a00840 	mov	r0, r0, asr #16
        2629ac:	eb61ab33 	bl	1acd680 <$AlignToGrid__FlT1>
        2629b0:	e5c40003 	strb	r0, [r4, #3]
        2629b4:	e1a00440 	mov	r0, r0, asr #8
        2629b8:	e5c40002 	strb	r0, [r4, #2]
        2629bc:	e5951000 	ldr	r1, [r5]
        2629c0:	e1a01841 	mov	r1, r1, asr #16
        2629c4:	e5940000 	ldr	r0, [r4]
        2629c8:	e1a00840 	mov	r0, r0, asr #16
        2629cc:	eb61ab2b 	bl	1acd680 <$AlignToGrid__FlT1>
        2629d0:	e5c40001 	strb	r0, [r4, #1]
        2629d4:	e1a00440 	mov	r0, r0, asr #8
        2629d8:	e5c40000 	strb	r0, [r4]
        2629dc:	e5951002 	ldr	r1, [r5, #2]
        2629e0:	e1a01841 	mov	r1, r1, asr #16
        2629e4:	e5940006 	ldr	r0, [r4, #6]
        2629e8:	e1a00840 	mov	r0, r0, asr #16
        2629ec:	eb61ab23 	bl	1acd680 <$AlignToGrid__FlT1>
        2629f0:	e5c40007 	strb	r0, [r4, #7]
        2629f4:	e1a00440 	mov	r0, r0, asr #8
        2629f8:	e5c40006 	strb	r0, [r4, #6]
        2629fc:	e5940004 	ldr	r0, [r4, #4]
        262a00:	e1a00840 	mov	r0, r0, asr #16
        262a04:	e5951000 	ldr	r1, [r5]
        262a08:	e1a01841 	mov	r1, r1, asr #16
        262a0c:	eb61ab1b 	bl	1acd680 <$AlignToGrid__FlT1>
        262a10:	e5c40005 	strb	r0, [r4, #5]
        262a14:	e1a00440 	mov	r0, r0, asr #8
        262a18:	e5c40004 	strb	r0, [r4, #4]
        262a1c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: AddPointToOdata(_CDC *, _POINT *)
 * Address: 002802c4
 */
AddPointToOdata(_CDC *, _POINT *) {
    /*
        2802c4:	e1a0c00d 	mov	ip, sp
        2802c8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2802cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2802d0:	e1a04000 	mov	r4, r0
        2802d4:	e1a06001 	mov	r6, r1
        2802d8:	e2800d07 	add	r0, r0, #448	; 0x1c0
        2802dc:	e5941dc0 	ldr	r1, [r4, #3520]
        2802e0:	e1a01821 	mov	r1, r1, lsr #16
        2802e4:	e0811081 	add	r1, r1, r1, lsl #1
        2802e8:	e0805181 	add	r5, r0, r1, lsl #3
        2802ec:	e5961000 	ldr	r1, [r6]
        2802f0:	e1a01841 	mov	r1, r1, asr #16
        2802f4:	e5940e10 	ldr	r0, [r4, #3600]
        2802f8:	e1a00820 	mov	r0, r0, lsr #16
        2802fc:	e0010190 	mul	r1, r0, r1
        280300:	e5940e12 	ldr	r0, [r4, #3602]
        280304:	e1a00820 	mov	r0, r0, lsr #16
        280308:	eb64c98c 	bl	1bb2940 <$__rt_sdiv>
        28030c:	e5850000 	str	r0, [r5]
        280310:	e5961002 	ldr	r1, [r6, #2]
        280314:	e1a01841 	mov	r1, r1, asr #16
        280318:	e5940e10 	ldr	r0, [r4, #3600]
        28031c:	e1a00820 	mov	r0, r0, lsr #16
        280320:	e0010190 	mul	r1, r0, r1
        280324:	e5940e12 	ldr	r0, [r4, #3602]
        280328:	e1a00820 	mov	r0, r0, lsr #16
        28032c:	eb64c983 	bl	1bb2940 <$__rt_sdiv>
        280330:	e5850004 	str	r0, [r5, #4]
        280334:	e1a01000 	mov	r1, r0
        280338:	e5940dc0 	ldr	r0, [r4, #3520]
        28033c:	e1b00820 	movs	r0, r0, lsr #16
        280340:	1a000005 	bne	28035c <AddPointToOdata(_CDC *, _POINT *)+0x98>
        280344:	e3a00000 	mov	r0, #0	; 0x0
        280348:	e5850008 	str	r0, [r5, #8]
        28034c:	e585000c 	str	r0, [r5, #12]
        280350:	e5850010 	str	r0, [r5, #16]
        280354:	e5850014 	str	r0, [r5, #20]
        280358:	ea000026 	b	2803f8 <AddPointToOdata(_CDC *, _POINT *)+0x134>
        28035c:	e2450018 	sub	r0, r5, #24	; 0x18
        280360:	e1a07000 	mov	r7, r0
        280364:	e5902000 	ldr	r2, [r0]
        280368:	e5953000 	ldr	r3, [r5]
        28036c:	e0432002 	sub	r2, r3, r2
        280370:	e5852008 	str	r2, [r5, #8]
        280374:	e5900004 	ldr	r0, [r0, #4]
        280378:	e0411000 	sub	r1, r1, r0
        28037c:	e585100c 	str	r1, [r5, #12]
        280380:	e3520000 	cmp	r2, #0	; 0x0
        280384:	b2622000 	rsblt	r2, r2, #0	; 0x0
        280388:	e3510000 	cmp	r1, #0	; 0x0
        28038c:	b2611000 	rsblt	r1, r1, #0	; 0x0
        280390:	e1520001 	cmp	r2, r1
        280394:	d1a00001 	movle	r0, r1
        280398:	c1a00002 	movgt	r0, r2
        28039c:	e0823001 	add	r3, r2, r1
        2803a0:	e0830000 	add	r0, r3, r0
        2803a4:	e1a000a0 	mov	r0, r0, lsr #1
        2803a8:	e3a06000 	mov	r6, #0	; 0x0
        2803ac:	e3a03801 	mov	r3, #65536	; 0x10000
        2803b0:	e2433001 	sub	r3, r3, #1	; 0x1
        2803b4:	ea000003 	b	2803c8 <AddPointToOdata(_CDC *, _POINT *)+0x104>
        2803b8:	e1a000a0 	mov	r0, r0, lsr #1
        2803bc:	e1a020c2 	mov	r2, r2, asr #1
        2803c0:	e1a010c1 	mov	r1, r1, asr #1
        2803c4:	e2866001 	add	r6, r6, #1	; 0x1
        2803c8:	e1500003 	cmp	r0, r3
        2803cc:	8afffff9 	bhi	2803b8 <AddPointToOdata(_CDC *, _POINT *)+0xf4>
        2803d0:	e0000292 	mul	r0, r2, r2
        2803d4:	e0200191 	mla	r0, r1, r1, r0
        2803d8:	eb5fbcea 	bl	1a6f788 <$SQRT32(unsigned long)>
        2803dc:	e1a00610 	mov	r0, r0, lsl r6
        2803e0:	e5850010 	str	r0, [r5, #16]
        2803e4:	e5b71014 	ldr	r1, [r7, #20]!
        2803e8:	e0811000 	add	r1, r1, r0
        2803ec:	e5851014 	str	r1, [r5, #20]
        2803f0:	e3500b01 	cmp	r0, #1024	; 0x400
        2803f4:	9a000005 	bls	280410 <AddPointToOdata(_CDC *, _POINT *)+0x14c>
        2803f8:	e5940dc0 	ldr	r0, [r4, #3520]
        2803fc:	e1b00820 	movs	r0, r0, lsr #16
        280400:	0a000004 	beq	280418 <AddPointToOdata(_CDC *, _POINT *)+0x154>
        280404:	e5b51010 	ldr	r1, [r5, #16]!
        280408:	e3510b01 	cmp	r1, #1024	; 0x400
        28040c:	8a000001 	bhi	280418 <AddPointToOdata(_CDC *, _POINT *)+0x154>
        280410:	e3a00000 	mov	r0, #0	; 0x0
        280414:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        280418:	e2800001 	add	r0, r0, #1	; 0x1
        28041c:	e5c40dc1 	strb	r0, [r4, #3521]
        280420:	e1a00440 	mov	r0, r0, asr #8
        280424:	e5c40dc0 	strb	r0, [r4, #3520]
        280428:	e5940dc0 	ldr	r0, [r4, #3520]
        28042c:	e1a00820 	mov	r0, r0, lsr #16
        280430:	e350007f 	cmp	r0, #127	; 0x7f
        280434:	13a00001 	movne	r0, #1	; 0x1
        280438:	03e00000 	mvneq	r0, #0	; 0x0
        28043c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: ApxToBrackets(tag_wapx_type *, tag_CHUNK *, int, brack_type **)
 * Address: 00286a54
 */
ApxToBrackets(tag_wapx_type *, tag_CHUNK *, int, brack_type **) {
    /*
        286a54:	e1a0c00d 	mov	ip, sp
        286a58:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        286a5c:	e24cb004 	sub	fp, ip, #4	; 0x4
        286a60:	e1a07000 	mov	r7, r0
        286a64:	e1a05001 	mov	r5, r1
        286a68:	e1a06002 	mov	r6, r2
        286a6c:	e1a04003 	mov	r4, r3
        286a70:	e24dd004 	sub	sp, sp, #4	; 0x4
        286a74:	e3a09000 	mov	r9, #0	; 0x0
        286a78:	e0820102 	add	r0, r2, r2, lsl #2
        286a7c:	e0800282 	add	r0, r0, r2, lsl #5
        286a80:	e0810100 	add	r0, r1, r0, lsl #2
        286a84:	e5100090 	ldr	r0, [r0, -#144]
        286a88:	e0600180 	rsb	r0, r0, r0, lsl #3
        286a8c:	e1a00100 	mov	r0, r0, lsl #2
        286a90:	eb5fa349 	bl	1a6f7bc <$HWRMemoryAlloc(unsigned long)>
        286a94:	e1b08000 	movs	r8, r0
        286a98:	1a000001 	bne	286aa4 <ApxToBrackets(tag_wapx_type *, tag_CHUNK *, int, brack_type **)+0x50>
        286a9c:	e3a00000 	mov	r0, #0	; 0x0
        286aa0:	ea00008f 	b	286ce4 <ApxToBrackets(tag_wapx_type *, tag_CHUNK *, int, brack_type **)+0x290>
        286aa4:	e1a01006 	mov	r1, r6
        286aa8:	e1a00005 	mov	r0, r5
        286aac:	eb62af95 	bl	1b32908 <$midL2Chunks(tag_CHUNK *, int)>
        286ab0:	e58d0000 	str	r0, [sp]
        286ab4:	e3a00000 	mov	r0, #0	; 0x0
        286ab8:	e3560000 	cmp	r6, #0	; 0x0
        286abc:	da000008 	ble	286ae4 <ApxToBrackets(tag_wapx_type *, tag_CHUNK *, int, brack_type **)+0x90>
        286ac0:	e3e01000 	mvn	r1, #0	; 0x0
        286ac4:	e0802100 	add	r2, r0, r0, lsl #2
        286ac8:	e0822280 	add	r2, r2, r0, lsl #5
        286acc:	e0852102 	add	r2, r5, r2, lsl #2
        286ad0:	e5821088 	str	r1, [r2, #136]
        286ad4:	e2800001 	add	r0, r0, #1	; 0x1
        286ad8:	e1500006 	cmp	r0, r6
        286adc:	e5a21084 	str	r1, [r2, #132]!
        286ae0:	bafffff7 	blt	286ac4 <ApxToBrackets(tag_wapx_type *, tag_CHUNK *, int, brack_type **)+0x70>
        286ae4:	e3a0a000 	mov	sl, #0	; 0x0
        286ae8:	e3560000 	cmp	r6, #0	; 0x0
        286aec:	da000012 	ble	286b3c <ApxToBrackets(tag_wapx_type *, tag_CHUNK *, int, brack_type **)+0xe8>
        286af0:	e08a010a 	add	r0, sl, sl, lsl #2
        286af4:	e080028a 	add	r0, r0, sl, lsl #5
        286af8:	e0851100 	add	r1, r5, r0, lsl #2
        286afc:	e5912008 	ldr	r2, [r1, #8]
        286b00:	e3320003 	teq	r2, #3	; 0x3
        286b04:	0a000009 	beq	286b30 <ApxToBrackets(tag_wapx_type *, tag_CHUNK *, int, brack_type **)+0xdc>
        286b08:	e1a03009 	mov	r3, r9
        286b0c:	e1a02008 	mov	r2, r8
        286b10:	e92d000c 	stmdb	sp!, {r2, r3}
        286b14:	e5b12004 	ldr	r2, [r1, #4]!
        286b18:	e7951100 	ldr	r1, [r5, r0, lsl #2]
        286b1c:	e1a0300a 	mov	r3, sl
        286b20:	e1a00007 	mov	r0, r7
        286b24:	eb000367 	bl	2878c8 <ChunkDestroyData(tag_CHUNK_STAFF *)+0xa10>
        286b28:	e28dd008 	add	sp, sp, #8	; 0x8
        286b2c:	e0809009 	add	r9, r0, r9
        286b30:	e28aa001 	add	sl, sl, #1	; 0x1
        286b34:	e15a0006 	cmp	sl, r6
        286b38:	baffffec 	blt	286af0 <ApxToBrackets(tag_wapx_type *, tag_CHUNK *, int, brack_type **)+0x9c>
        286b3c:	e1a02009 	mov	r2, r9
        286b40:	e1a01008 	mov	r1, r8
        286b44:	e1a00007 	mov	r0, r7
        286b48:	e59d3000 	ldr	r3, [sp]
        286b4c:	eb000118 	bl	286fb4 <ChunkDestroyData(tag_CHUNK_STAFF *)+0xfc>
        286b50:	e1a03000 	mov	r3, r0
        286b54:	e1a06000 	mov	r6, r0
        286b58:	e1a02008 	mov	r2, r8
        286b5c:	e1a01005 	mov	r1, r5
        286b60:	e1a00007 	mov	r0, r7
        286b64:	eb00007a 	bl	286d54 <ApxToBrackets(tag_wapx_type *, tag_CHUNK *, int, brack_type **)+0x300>
        286b68:	e2860028 	add	r0, r6, #40	; 0x28
        286b6c:	e0600180 	rsb	r0, r0, r0, lsl #3
        286b70:	e1a00100 	mov	r0, r0, lsl #2
        286b74:	e1a07000 	mov	r7, r0
        286b78:	eb5fa30f 	bl	1a6f7bc <$HWRMemoryAlloc(unsigned long)>
        286b7c:	e5840000 	str	r0, [r4]
        286b80:	e3300000 	teq	r0, #0	; 0x0
        286b84:	1a000002 	bne	286b94 <ApxToBrackets(tag_wapx_type *, tag_CHUNK *, int, brack_type **)+0x140>
        286b88:	e1a00008 	mov	r0, r8
        286b8c:	eb5fa30b 	bl	1a6f7c0 <$HWRMemoryFree(void *)>
        286b90:	eaffffc1 	b	286a9c <ApxToBrackets(tag_wapx_type *, tag_CHUNK *, int, brack_type **)+0x48>
        286b94:	e1a02007 	mov	r2, r7
        286b98:	e3a01000 	mov	r1, #0	; 0x0
        286b9c:	eb64b7ad 	bl	1bb4a58 <$memset>
        286ba0:	e3a02000 	mov	r2, #0	; 0x0
        286ba4:	e3a01000 	mov	r1, #0	; 0x0
        286ba8:	e3560000 	cmp	r6, #0	; 0x0
        286bac:	da000023 	ble	286c40 <ApxToBrackets(tag_wapx_type *, tag_CHUNK *, int, brack_type **)+0x1ec>
        286bb0:	e0623182 	rsb	r3, r2, r2, lsl #3
        286bb4:	e798c103 	ldr	ip, [r8, r3, lsl #2]
        286bb8:	e37c0001 	cmn	ip, #1	; 0x1
        286bbc:	0a00001c 	beq	286c34 <ApxToBrackets(tag_wapx_type *, tag_CHUNK *, int, brack_type **)+0x1e0>
        286bc0:	e0610181 	rsb	r0, r1, r1, lsl #3
        286bc4:	e594e000 	ldr	lr, [r4]
        286bc8:	e78ec100 	str	ip, [lr, r0, lsl #2]
        286bcc:	e0883103 	add	r3, r8, r3, lsl #2
        286bd0:	e593e004 	ldr	lr, [r3, #4]
        286bd4:	e594c000 	ldr	ip, [r4]
        286bd8:	e08cc100 	add	ip, ip, r0, lsl #2
        286bdc:	e5ace004 	str	lr, [ip, #4]!
        286be0:	e593e008 	ldr	lr, [r3, #8]
        286be4:	e594c000 	ldr	ip, [r4]
        286be8:	e08cc100 	add	ip, ip, r0, lsl #2
        286bec:	e5ace008 	str	lr, [ip, #8]!
        286bf0:	e593e00c 	ldr	lr, [r3, #12]
        286bf4:	e594c000 	ldr	ip, [r4]
        286bf8:	e08cc100 	add	ip, ip, r0, lsl #2
        286bfc:	e5ace00c 	str	lr, [ip, #12]!
        286c00:	e593e010 	ldr	lr, [r3, #16]
        286c04:	e594c000 	ldr	ip, [r4]
        286c08:	e08cc100 	add	ip, ip, r0, lsl #2
        286c0c:	e5ace010 	str	lr, [ip, #16]!
        286c10:	e593e014 	ldr	lr, [r3, #20]
        286c14:	e594c000 	ldr	ip, [r4]
        286c18:	e08cc100 	add	ip, ip, r0, lsl #2
        286c1c:	e5ace014 	str	lr, [ip, #20]!
        286c20:	e5933018 	ldr	r3, [r3, #24]
        286c24:	e594c000 	ldr	ip, [r4]
        286c28:	e08c0100 	add	r0, ip, r0, lsl #2
        286c2c:	e2811001 	add	r1, r1, #1	; 0x1
        286c30:	e5a03018 	str	r3, [r0, #24]!
        286c34:	e2822001 	add	r2, r2, #1	; 0x1
        286c38:	e1520006 	cmp	r2, r6
        286c3c:	baffffdb 	blt	286bb0 <ApxToBrackets(tag_wapx_type *, tag_CHUNK *, int, brack_type **)+0x15c>
        286c40:	e1a06001 	mov	r6, r1
        286c44:	e3a00000 	mov	r0, #0	; 0x0
        286c48:	e3e01000 	mvn	r1, #0	; 0x0
        286c4c:	e3560000 	cmp	r6, #0	; 0x0
        286c50:	da000017 	ble	286cb4 <ApxToBrackets(tag_wapx_type *, tag_CHUNK *, int, brack_type **)+0x260>
        286c54:	e2463001 	sub	r3, r6, #1	; 0x1
        286c58:	e0602180 	rsb	r2, r0, r0, lsl #3
        286c5c:	e594c000 	ldr	ip, [r4]
        286c60:	e79cc102 	ldr	ip, [ip, r2, lsl #2]
        286c64:	e13c0001 	teq	ip, r1
        286c68:	0a000004 	beq	286c80 <ApxToBrackets(tag_wapx_type *, tag_CHUNK *, int, brack_type **)+0x22c>
        286c6c:	e1a0100c 	mov	r1, ip
        286c70:	e081e101 	add	lr, r1, r1, lsl #2
        286c74:	e08ee281 	add	lr, lr, r1, lsl #5
        286c78:	e085c10e 	add	ip, r5, lr, lsl #2
        286c7c:	e5ac0084 	str	r0, [ip, #132]!
        286c80:	e1530000 	cmp	r3, r0
        286c84:	da000007 	ble	286ca8 <ApxToBrackets(tag_wapx_type *, tag_CHUNK *, int, brack_type **)+0x254>
        286c88:	e594c000 	ldr	ip, [r4]
        286c8c:	e08c2102 	add	r2, ip, r2, lsl #2
        286c90:	e592201c 	ldr	r2, [r2, #28]
        286c94:	e1320001 	teq	r2, r1
        286c98:	10812101 	addne	r2, r1, r1, lsl #2
        286c9c:	10822281 	addne	r2, r2, r1, lsl #5
        286ca0:	10852102 	addne	r2, r5, r2, lsl #2
        286ca4:	15a20088 	strne	r0, [r2, #136]!
        286ca8:	e2800001 	add	r0, r0, #1	; 0x1
        286cac:	e1500006 	cmp	r0, r6
        286cb0:	baffffe8 	blt	286c58 <ApxToBrackets(tag_wapx_type *, tag_CHUNK *, int, brack_type **)+0x204>
        286cb4:	e2460001 	sub	r0, r6, #1	; 0x1
        286cb8:	e0661186 	rsb	r1, r6, r6, lsl #3
        286cbc:	e5942000 	ldr	r2, [r4]
        286cc0:	e0821101 	add	r1, r2, r1, lsl #2
        286cc4:	e511101c 	ldr	r1, [r1, -#28]
        286cc8:	e081c101 	add	ip, r1, r1, lsl #2
        286ccc:	e08c1281 	add	r1, ip, r1, lsl #5
        286cd0:	e0851101 	add	r1, r5, r1, lsl #2
        286cd4:	e5a10088 	str	r0, [r1, #136]!
        286cd8:	e1a00008 	mov	r0, r8
        286cdc:	eb5fa2b7 	bl	1a6f7c0 <$HWRMemoryFree(void *)>
        286ce0:	e1a00006 	mov	r0, r6
        286ce4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        286ce8:	e1a0c00d 	mov	ip, sp
        286cec:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        286cf0:	e24cb004 	sub	fp, ip, #4	; 0x4
        286cf4:	e1a04001 	mov	r4, r1
        286cf8:	e59bc008 	ldr	ip, [fp, #8]
        286cfc:	e0625182 	rsb	r5, r2, r2, lsl #3
        286d00:	e0800105 	add	r0, r0, r5, lsl #2
        286d04:	e59b100c 	ldr	r1, [fp, #12]
        286d08:	e59be004 	ldr	lr, [fp, #4]
        286d0c:	e5905024 	ldr	r5, [r0, #36]
        286d10:	e2800014 	add	r0, r0, #20	; 0x14
        286d14:	e8801002 	stmia	r0, {r1, ip}
        286d18:	e2821002 	add	r1, r2, #2	; 0x2
        286d1c:	e1510004 	cmp	r1, r4
        286d20:	e9204008 	stmdb	r0!, {r3, lr}
        286d24:	e5205004 	str	r5, [r0, -#4]!
        286d28:	e2400008 	sub	r0, r0, #8	; 0x8
        286d2c:	aa000006 	bge	286d4c <ApxToBrackets(tag_wapx_type *, tag_CHUNK *, int, brack_type **)+0x2f8>
        286d30:	e0441002 	sub	r1, r4, r2
        286d34:	e2411002 	sub	r1, r1, #2	; 0x2
        286d38:	e0612181 	rsb	r2, r1, r1, lsl #3
        286d3c:	e1a02102 	mov	r2, r2, lsl #2
        286d40:	e2801038 	add	r1, r0, #56	; 0x38
        286d44:	e280001c 	add	r0, r0, #28	; 0x1c
        286d48:	eb64b741 	bl	1bb4a54 <$memmove>
        286d4c:	e2440001 	sub	r0, r4, #1	; 0x1
        286d50:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        286d54:	e1a0c00d 	mov	ip, sp
        286d58:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        286d5c:	e24cb004 	sub	fp, ip, #4	; 0x4
        286d60:	e1a07000 	mov	r7, r0
        286d64:	e1a06001 	mov	r6, r1
        286d68:	e1a04002 	mov	r4, r2
        286d6c:	e1a05003 	mov	r5, r3
        286d70:	e3e00000 	mvn	r0, #0	; 0x0
        286d74:	e3a0a000 	mov	sl, #0	; 0x0
        286d78:	e3530000 	cmp	r3, #0	; 0x0
        286d7c:	da000026 	ble	286e1c <ApxToBrackets(tag_wapx_type *, tag_CHUNK *, int, brack_type **)+0x3c8>
        286d80:	e06a818a 	rsb	r8, sl, sl, lsl #3
        286d84:	e7949108 	ldr	r9, [r4, r8, lsl #2]
        286d88:	e1390000 	teq	r9, r0
        286d8c:	0a00000b 	beq	286dc0 <ApxToBrackets(tag_wapx_type *, tag_CHUNK *, int, brack_type **)+0x36c>
        286d90:	e0890109 	add	r0, r9, r9, lsl #2
        286d94:	e0800289 	add	r0, r0, r9, lsl #5
        286d98:	e0861100 	add	r1, r6, r0, lsl #2
        286d9c:	e5910064 	ldr	r0, [r1, #100]
        286da0:	e3700001 	cmn	r0, #1	; 0x1
        286da4:	1a000005 	bne	286dc0 <ApxToBrackets(tag_wapx_type *, tag_CHUNK *, int, brack_type **)+0x36c>
        286da8:	e0842108 	add	r2, r4, r8, lsl #2
        286dac:	e1a00007 	mov	r0, r7
        286db0:	eb00001b 	bl	286e24 <ApxToBrackets(tag_wapx_type *, tag_CHUNK *, int, brack_type **)+0x3d0>
        286db4:	e3300000 	teq	r0, #0	; 0x0
        286db8:	13e00000 	mvnne	r0, #0	; 0x0
        286dbc:	17840108 	strne	r0, [r4, r8, lsl #2]
        286dc0:	e0890109 	add	r0, r9, r9, lsl #2
        286dc4:	e0800289 	add	r0, r0, r9, lsl #5
        286dc8:	e0861100 	add	r1, r6, r0, lsl #2
        286dcc:	e5910068 	ldr	r0, [r1, #104]
        286dd0:	e3700001 	cmn	r0, #1	; 0x1
        286dd4:	1a00000c 	bne	286e0c <ApxToBrackets(tag_wapx_type *, tag_CHUNK *, int, brack_type **)+0x3b8>
        286dd8:	e28a0001 	add	r0, sl, #1	; 0x1
        286ddc:	e1500005 	cmp	r0, r5
        286de0:	aa000003 	bge	286df4 <ApxToBrackets(tag_wapx_type *, tag_CHUNK *, int, brack_type **)+0x3a0>
        286de4:	e0840108 	add	r0, r4, r8, lsl #2
        286de8:	e590001c 	ldr	r0, [r0, #28]
        286dec:	e1300009 	teq	r0, r9
        286df0:	0a000005 	beq	286e0c <ApxToBrackets(tag_wapx_type *, tag_CHUNK *, int, brack_type **)+0x3b8>
        286df4:	e0842108 	add	r2, r4, r8, lsl #2
        286df8:	e1a00007 	mov	r0, r7
        286dfc:	eb000047 	bl	286f20 <ChunkDestroyData(tag_CHUNK_STAFF *)+0x68>
        286e00:	e3300000 	teq	r0, #0	; 0x0
        286e04:	13e00000 	mvnne	r0, #0	; 0x0
        286e08:	17840108 	strne	r0, [r4, r8, lsl #2]
        286e0c:	e1a00009 	mov	r0, r9
        286e10:	e28aa001 	add	sl, sl, #1	; 0x1
        286e14:	e15a0005 	cmp	sl, r5
        286e18:	baffffd8 	blt	286d80 <ApxToBrackets(tag_wapx_type *, tag_CHUNK *, int, brack_type **)+0x32c>
        286e1c:	e3a00001 	mov	r0, #1	; 0x1
        286e20:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        286e24:	e1a0c00d 	mov	ip, sp
        286e28:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        286e2c:	e24cb004 	sub	fp, ip, #4	; 0x4
        286e30:	e1a05000 	mov	r5, r0
        286e34:	e1a04002 	mov	r4, r2
        286e38:	e24dd010 	sub	sp, sp, #16	; 0x10
        286e3c:	e5b16038 	ldr	r6, [r1, #56]!
        286e40:	e5922008 	ldr	r2, [r2, #8]
        286e44:	e1a0300d 	mov	r3, sp
        286e48:	e5941004 	ldr	r1, [r4, #4]
        286e4c:	eb629e32 	bl	1b2e71c <$GetBox__FP13tag_wapx_typeiT2P7tag_BOX>
        286e50:	e59d000c 	ldr	r0, [sp, #12]
        286e54:	e59d1004 	ldr	r1, [sp, #4]
        286e58:	e0403001 	sub	r3, r0, r1
        286e5c:	e59d0008 	ldr	r0, [sp, #8]
        286e60:	e59d1000 	ldr	r1, [sp]
        286e64:	e0401001 	sub	r1, r0, r1
        286e68:	e0832083 	add	r2, r3, r3, lsl #1
        286e6c:	e3a00000 	mov	r0, #0	; 0x0
        286e70:	e1560082 	cmp	r6, r2, lsl #1
        286e74:	ba00000e 	blt	286eb4 <ApxToBrackets(tag_wapx_type *, tag_CHUNK *, int, brack_type **)+0x460>
        286e78:	e3a02001 	mov	r2, #1	; 0x1
        286e7c:	e1560183 	cmp	r6, r3, lsl #3
        286e80:	c1560181 	cmpgt	r6, r1, lsl #3
        286e84:	da000001 	ble	286e90 <ApxToBrackets(tag_wapx_type *, tag_CHUNK *, int, brack_type **)+0x43c>
        286e88:	e1a00002 	mov	r0, r2
        286e8c:	ea000008 	b	286eb4 <ApxToBrackets(tag_wapx_type *, tag_CHUNK *, int, brack_type **)+0x460>
        286e90:	e5b43008 	ldr	r3, [r4, #8]!
        286e94:	e0633183 	rsb	r3, r3, r3, lsl #3
        286e98:	e0853103 	add	r3, r5, r3, lsl #2
        286e9c:	e5933008 	ldr	r3, [r3, #8]
        286ea0:	e3130cff 	tst	r3, #65280	; 0xff00
        286ea4:	0a000002 	beq	286eb4 <ApxToBrackets(tag_wapx_type *, tag_CHUNK *, int, brack_type **)+0x460>
        286ea8:	e0811081 	add	r1, r1, r1, lsl #1
        286eac:	e1560081 	cmp	r6, r1, lsl #1
        286eb0:	cafffff4 	bgt	286e88 <ApxToBrackets(tag_wapx_type *, tag_CHUNK *, int, brack_type **)+0x434>
        286eb4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: ApxToCLine(tag_wapx_type *, brack_type *, int, tag_CHUNK *, tag_CHUNK *)
 * Address: 00287aa8
 */
ApxToCLine(tag_wapx_type *, brack_type *, int, tag_CHUNK *, tag_CHUNK *) {
    /*
        287aa8:	e1a0c00d 	mov	ip, sp
        287aac:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        287ab0:	e24cb004 	sub	fp, ip, #4	; 0x4
        287ab4:	eb000057 	bl	287c18 <ApxToCLine(tag_wapx_type *, brack_type *, int, tag_CHUNK *, tag_CHUNK *)+0x170>
        287ab8:	e3a00001 	mov	r0, #1	; 0x1
        287abc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        287ac0:	e5903008 	ldr	r3, [r0, #8]
        287ac4:	e3330002 	teq	r3, #2	; 0x2
        287ac8:	05903068 	ldreq	r3, [r0, #104]
        287acc:	03730001 	cmneq	r3, #1	; 0x1
        287ad0:	1a000009 	bne	287afc <ApxToCLine(tag_wapx_type *, brack_type *, int, tag_CHUNK *, tag_CHUNK *)+0x54>
        287ad4:	e5903060 	ldr	r3, [r0, #96]
        287ad8:	e083c183 	add	ip, r3, r3, lsl #3
        287adc:	e08c3203 	add	r3, ip, r3, lsl #4
        287ae0:	e590005c 	ldr	r0, [r0, #92]
        287ae4:	e1530000 	cmp	r3, r0
        287ae8:	b3a00f4b 	movlt	r0, #300	; 0x12c
        287aec:	b5810000 	strlt	r0, [r1]
        287af0:	b3a0002d 	movlt	r0, #45	; 0x2d
        287af4:	b2800c01 	addlt	r0, r0, #256	; 0x100
        287af8:	ba000003 	blt	287b0c <ApxToCLine(tag_wapx_type *, brack_type *, int, tag_CHUNK *, tag_CHUNK *)+0x64>
        287afc:	e3a00f7d 	mov	r0, #500	; 0x1f4
        287b00:	e5810000 	str	r0, [r1]
        287b04:	e3a000f6 	mov	r0, #246	; 0xf6
        287b08:	e2800c01 	add	r0, r0, #256	; 0x100
        287b0c:	e5820000 	str	r0, [r2]
        287b10:	e1a0f00e 	mov	pc, lr
        287b14:	e1a0c00d 	mov	ip, sp
        287b18:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        287b1c:	e24cb004 	sub	fp, ip, #4	; 0x4
        287b20:	e24dd008 	sub	sp, sp, #8	; 0x8
        287b24:	e083c103 	add	ip, r3, r3, lsl #2
        287b28:	e08c3283 	add	r3, ip, r3, lsl #5
        287b2c:	e0824103 	add	r4, r2, r3, lsl #2
        287b30:	e3510005 	cmp	r1, #5	; 0x5
        287b34:	908ff101 	addls	pc, pc, r1, lsl #2
        287b38:	ea00002c 	b	287bf0 <ApxToCLine(tag_wapx_type *, brack_type *, int, tag_CHUNK *, tag_CHUNK *)+0x148>
        287b3c:	ea00002b 	b	287bf0 <ApxToCLine(tag_wapx_type *, brack_type *, int, tag_CHUNK *, tag_CHUNK *)+0x148>
        287b40:	ea00000d 	b	287b7c <ApxToCLine(tag_wapx_type *, brack_type *, int, tag_CHUNK *, tag_CHUNK *)+0xd4>
        287b44:	ea000011 	b	287b90 <ApxToCLine(tag_wapx_type *, brack_type *, int, tag_CHUNK *, tag_CHUNK *)+0xe8>
        287b48:	ea000020 	b	287bd0 <ApxToCLine(tag_wapx_type *, brack_type *, int, tag_CHUNK *, tag_CHUNK *)+0x128>
        287b4c:	ea000017 	b	287bb0 <ApxToCLine(tag_wapx_type *, brack_type *, int, tag_CHUNK *, tag_CHUNK *)+0x108>
        287b50:	e3a01f7d 	mov	r1, #500	; 0x1f4
        287b54:	e3700001 	cmn	r0, #1	; 0x1
        287b58:	e58d1004 	str	r1, [sp, #4]
        287b5c:	03a000f5 	moveq	r0, #245	; 0xf5
        287b60:	02800c01 	addeq	r0, r0, #256	; 0x100
        287b64:	0a000025 	beq	287c00 <ApxToCLine(tag_wapx_type *, brack_type *, int, tag_CHUNK *, tag_CHUNK *)+0x158>
        287b68:	e1a00004 	mov	r0, r4
        287b6c:	e1a0200d 	mov	r2, sp
        287b70:	e28d1004 	add	r1, sp, #4	; 0x4
        287b74:	ebffffd1 	bl	287ac0 <ApxToCLine(tag_wapx_type *, brack_type *, int, tag_CHUNK *, tag_CHUNK *)+0x18>
        287b78:	ea000021 	b	287c04 <ApxToCLine(tag_wapx_type *, brack_type *, int, tag_CHUNK *, tag_CHUNK *)+0x15c>
        287b7c:	e3a00f4b 	mov	r0, #300	; 0x12c
        287b80:	e58d0004 	str	r0, [sp, #4]
        287b84:	e3a0002d 	mov	r0, #45	; 0x2d
        287b88:	e2800c01 	add	r0, r0, #256	; 0x100
        287b8c:	ea00001b 	b	287c00 <ApxToCLine(tag_wapx_type *, brack_type *, int, tag_CHUNK *, tag_CHUNK *)+0x158>
        287b90:	e3a01e19 	mov	r1, #400	; 0x190
        287b94:	e3700001 	cmn	r0, #1	; 0x1
        287b98:	e58d1004 	str	r1, [sp, #4]
        287b9c:	13a00091 	movne	r0, #145	; 0x91
        287ba0:	12800c01 	addne	r0, r0, #256	; 0x100
        287ba4:	03a00092 	moveq	r0, #146	; 0x92
        287ba8:	02800c01 	addeq	r0, r0, #256	; 0x100
        287bac:	ea000013 	b	287c00 <ApxToCLine(tag_wapx_type *, brack_type *, int, tag_CHUNK *, tag_CHUNK *)+0x158>
        287bb0:	e3a01faf 	mov	r1, #700	; 0x2bc
        287bb4:	e3700001 	cmn	r0, #1	; 0x1
        287bb8:	e58d1004 	str	r1, [sp, #4]
        287bbc:	13a000be 	movne	r0, #190	; 0xbe
        287bc0:	12800c02 	addne	r0, r0, #512	; 0x200
        287bc4:	03a000bd 	moveq	r0, #189	; 0xbd
        287bc8:	02800c02 	addeq	r0, r0, #512	; 0x200
        287bcc:	ea00000b 	b	287c00 <ApxToCLine(tag_wapx_type *, brack_type *, int, tag_CHUNK *, tag_CHUNK *)+0x158>
        287bd0:	e3a01f96 	mov	r1, #600	; 0x258
        287bd4:	e3700001 	cmn	r0, #1	; 0x1
        287bd8:	e58d1004 	str	r1, [sp, #4]
        287bdc:	13a0005a 	movne	r0, #90	; 0x5a
        287be0:	12800c02 	addne	r0, r0, #512	; 0x200
        287be4:	03a00059 	moveq	r0, #89	; 0x59
        287be8:	02800c02 	addeq	r0, r0, #512	; 0x200
        287bec:	ea000003 	b	287c00 <ApxToCLine(tag_wapx_type *, brack_type *, int, tag_CHUNK *, tag_CHUNK *)+0x158>
        287bf0:	e3a00f5e 	mov	r0, #376	; 0x178
        287bf4:	e2800b01 	add	r0, r0, #1024	; 0x400
        287bf8:	e58d0004 	str	r0, [sp, #4]
        287bfc:	e3a00000 	mov	r0, #0	; 0x0
        287c00:	e58d0000 	str	r0, [sp]
        287c04:	e59d0004 	ldr	r0, [sp, #4]
        287c08:	e5840074 	str	r0, [r4, #116]
        287c0c:	e59d0000 	ldr	r0, [sp]
        287c10:	e5a40078 	str	r0, [r4, #120]!
        287c14:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        287c18:	e1a0c00d 	mov	ip, sp
        287c1c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        287c20:	e24cb004 	sub	fp, ip, #4	; 0x4
        287c24:	e1a06000 	mov	r6, r0
        287c28:	e1a05001 	mov	r5, r1
        287c2c:	e1a04003 	mov	r4, r3
        287c30:	e1a09002 	mov	r9, r2
        287c34:	e3a00000 	mov	r0, #0	; 0x0
        287c38:	e3520000 	cmp	r2, #0	; 0x0
        287c3c:	da00003f 	ble	287d40 <ApxToCLine(tag_wapx_type *, brack_type *, int, tag_CHUNK *, tag_CHUNK *)+0x298>
        287c40:	e0601180 	rsb	r1, r0, r0, lsl #3
        287c44:	e7957101 	ldr	r7, [r5, r1, lsl #2]
        287c48:	e2808001 	add	r8, r0, #1	; 0x1
        287c4c:	e1580009 	cmp	r8, r9
        287c50:	aa000006 	bge	287c70 <ApxToCLine(tag_wapx_type *, brack_type *, int, tag_CHUNK *, tag_CHUNK *)+0x1c8>
        287c54:	e0682188 	rsb	r2, r8, r8, lsl #3
        287c58:	e7952102 	ldr	r2, [r5, r2, lsl #2]
        287c5c:	e1320007 	teq	r2, r7
        287c60:	1a000002 	bne	287c70 <ApxToCLine(tag_wapx_type *, brack_type *, int, tag_CHUNK *, tag_CHUNK *)+0x1c8>
        287c64:	e2888001 	add	r8, r8, #1	; 0x1
        287c68:	e1580009 	cmp	r8, r9
        287c6c:	bafffff8 	blt	287c54 <ApxToCLine(tag_wapx_type *, brack_type *, int, tag_CHUNK *, tag_CHUNK *)+0x1ac>
        287c70:	e0480000 	sub	r0, r8, r0
        287c74:	e3300001 	teq	r0, #1	; 0x1
        287c78:	0a000012 	beq	287cc8 <ApxToCLine(tag_wapx_type *, brack_type *, int, tag_CHUNK *, tag_CHUNK *)+0x220>
        287c7c:	e3300002 	teq	r0, #2	; 0x2
        287c80:	e0850101 	add	r0, r5, r1, lsl #2
        287c84:	1a000025 	bne	287d20 <ApxToCLine(tag_wapx_type *, brack_type *, int, tag_CHUNK *, tag_CHUNK *)+0x278>
        287c88:	e0681188 	rsb	r1, r8, r8, lsl #3
        287c8c:	e0851101 	add	r1, r5, r1, lsl #2
        287c90:	e590200c 	ldr	r2, [r0, #12]
        287c94:	e5113010 	ldr	r3, [r1, -#16]
        287c98:	e1320003 	teq	r2, r3
        287c9c:	1a00001a 	bne	287d0c <ApxToCLine(tag_wapx_type *, brack_type *, int, tag_CHUNK *, tag_CHUNK *)+0x264>
        287ca0:	e3320001 	teq	r2, #1	; 0x1
        287ca4:	1a00000d 	bne	287ce0 <ApxToCLine(tag_wapx_type *, brack_type *, int, tag_CHUNK *, tag_CHUNK *)+0x238>
        287ca8:	e5313014 	ldr	r3, [r1, -#20]!
        287cac:	e9b00006 	ldmib	r0!, {r1, r2}
        287cb0:	e1a00006 	mov	r0, r6
        287cb4:	eb62a6f7 	bl	1b31898 <$SgnArc__FP13tag_wapx_typeiN22>
        287cb8:	e1a03007 	mov	r3, r7
        287cbc:	e1a02004 	mov	r2, r4
        287cc0:	e3a01003 	mov	r1, #3	; 0x3
        287cc4:	ea000019 	b	287d30 <ApxToCLine(tag_wapx_type *, brack_type *, int, tag_CHUNK *, tag_CHUNK *)+0x288>
        287cc8:	e0850101 	add	r0, r5, r1, lsl #2
        287ccc:	e590100c 	ldr	r1, [r0, #12]
        287cd0:	e5900010 	ldr	r0, [r0, #16]
        287cd4:	e1a03007 	mov	r3, r7
        287cd8:	e1a02004 	mov	r2, r4
        287cdc:	ea000013 	b	287d30 <ApxToCLine(tag_wapx_type *, brack_type *, int, tag_CHUNK *, tag_CHUNK *)+0x288>
        287ce0:	e5900010 	ldr	r0, [r0, #16]
        287ce4:	e511100c 	ldr	r1, [r1, -#12]
        287ce8:	e1300001 	teq	r0, r1
        287cec:	01a03007 	moveq	r3, r7
        287cf0:	01a02004 	moveq	r2, r4
        287cf4:	03a01004 	moveq	r1, #4	; 0x4
        287cf8:	0a00000c 	beq	287d30 <ApxToCLine(tag_wapx_type *, brack_type *, int, tag_CHUNK *, tag_CHUNK *)+0x288>
        287cfc:	e1a03007 	mov	r3, r7
        287d00:	e1a02004 	mov	r2, r4
        287d04:	e3a01005 	mov	r1, #5	; 0x5
        287d08:	ea000008 	b	287d30 <ApxToCLine(tag_wapx_type *, brack_type *, int, tag_CHUNK *, tag_CHUNK *)+0x288>
        287d0c:	e3320001 	teq	r2, #1	; 0x1
        287d10:	15900010 	ldrne	r0, [r0, #16]
        287d14:	0531000c 	ldreq	r0, [r1, -#12]!
        287d18:	02600000 	rsbeq	r0, r0, #0	; 0x0
        287d1c:	eafffff6 	b	287cfc <ApxToCLine(tag_wapx_type *, brack_type *, int, tag_CHUNK *, tag_CHUNK *)+0x254>
        287d20:	e5900010 	ldr	r0, [r0, #16]
        287d24:	e1a03007 	mov	r3, r7
        287d28:	e1a02004 	mov	r2, r4
        287d2c:	e3a01008 	mov	r1, #8	; 0x8
        287d30:	ebffff77 	bl	287b14 <ApxToCLine(tag_wapx_type *, brack_type *, int, tag_CHUNK *, tag_CHUNK *)+0x6c>
        287d34:	e1a00008 	mov	r0, r8
        287d38:	e1580009 	cmp	r8, r9
        287d3c:	baffffbf 	blt	287c40 <ApxToCLine(tag_wapx_type *, brack_type *, int, tag_CHUNK *, tag_CHUNK *)+0x198>
        287d40:	e3a00000 	mov	r0, #0	; 0x0
        287d44:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: angl(low_type *)
 * Address: 002a9f7c
 */
angl(low_type *) {
    /*
        2a9f7c:	e1a0c00d 	mov	ip, sp
        2a9f80:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2a9f84:	e24cb004 	sub	fp, ip, #4	; 0x4
        2a9f88:	e1a04000 	mov	r4, r0
        2a9f8c:	e3a08000 	mov	r8, #0	; 0x0
        2a9f90:	e52d8008 	str	r8, [sp, -#8]!
        2a9f94:	e590003c 	ldr	r0, [r0, #60]
        2a9f98:	e1a00840 	mov	r0, r0, asr #16
        2a9f9c:	e3500016 	cmp	r0, #22	; 0x16
        2a9fa0:	aa000001 	bge	2a9fac <angl(low_type *)+0x30>
        2a9fa4:	e3a00000 	mov	r0, #0	; 0x0
        2a9fa8:	ea00009c 	b	2aa220 <angl(low_type *)+0x2a4>
        2a9fac:	e594601c 	ldr	r6, [r4, #28]
        2a9fb0:	e5940020 	ldr	r0, [r4, #32]
        2a9fb4:	e1a00840 	mov	r0, r0, asr #16
        2a9fb8:	e1a02080 	mov	r2, r0, lsl #1
        2a9fbc:	e1a00006 	mov	r0, r6
        2a9fc0:	e3a01000 	mov	r1, #0	; 0x0
        2a9fc4:	eb642aa3 	bl	1bb4a58 <$memset>
        2a9fc8:	e3a0307f 	mov	r3, #127	; 0x7f
        2a9fcc:	e3a02902 	mov	r2, #32768	; 0x8000
        2a9fd0:	e2422001 	sub	r2, r2, #1	; 0x1
        2a9fd4:	e5940040 	ldr	r0, [r4, #64]
        2a9fd8:	e3300000 	teq	r0, #0	; 0x0
        2a9fdc:	0a000014 	beq	2aa034 <angl(low_type *)+0xb8>
        2a9fe0:	e5d01000 	ldrb	r1, [r0]
        2a9fe4:	e3310007 	teq	r1, #7	; 0x7
        2a9fe8:	13310008 	teqne	r1, #8	; 0x8
        2a9fec:	1a00000d 	bne	2aa028 <angl(low_type *)+0xac>
        2a9ff0:	e5901004 	ldr	r1, [r0, #4]
        2a9ff4:	e1a01841 	mov	r1, r1, asr #16
        2a9ff8:	e590c006 	ldr	ip, [r0, #6]
        2a9ffc:	e151084c 	cmp	r1, ip, asr #16
        2aa000:	ca000008 	bgt	2aa028 <angl(low_type *)+0xac>
        2aa004:	e086c081 	add	ip, r6, r1, lsl #1
        2aa008:	e5cc2001 	strb	r2, [ip, #1]
        2aa00c:	e5cc3000 	strb	r3, [ip]
        2aa010:	e2811001 	add	r1, r1, #1	; 0x1
        2aa014:	e1a01801 	mov	r1, r1, lsl #16
        2aa018:	e1a01841 	mov	r1, r1, asr #16
        2aa01c:	e590c006 	ldr	ip, [r0, #6]
        2aa020:	e151084c 	cmp	r1, ip, asr #16
        2aa024:	dafffff6 	ble	2aa004 <angl(low_type *)+0x88>
        2aa028:	e590000c 	ldr	r0, [r0, #12]
        2aa02c:	e3300000 	teq	r0, #0	; 0x0
        2aa030:	1affffea 	bne	2a9fe0 <angl(low_type *)+0x64>
        2aa034:	e1a01006 	mov	r1, r6
        2aa038:	e594003c 	ldr	r0, [r4, #60]
        2aa03c:	e1a00840 	mov	r0, r0, asr #16
        2aa040:	e086c080 	add	ip, r6, r0, lsl #1
        2aa044:	e3a00000 	mov	r0, #0	; 0x0
        2aa048:	e5cc2001 	strb	r2, [ip, #1]
        2aa04c:	e44c3002 	strb	r3, [ip], -#2
        2aa050:	e2800001 	add	r0, r0, #1	; 0x1
        2aa054:	e1a00800 	mov	r0, r0, lsl #16
        2aa058:	e1a00840 	mov	r0, r0, asr #16
        2aa05c:	e350000c 	cmp	r0, #12	; 0xc
        2aa060:	dafffff8 	ble	2aa048 <angl(low_type *)+0xcc>
        2aa064:	e3a0e000 	mov	lr, #0	; 0x0
        2aa068:	e1a00002 	mov	r0, r2
        2aa06c:	e5c10001 	strb	r0, [r1, #1]
        2aa070:	e1a0c003 	mov	ip, r3
        2aa074:	e4c13002 	strb	r3, [r1], #2
        2aa078:	e28e2001 	add	r2, lr, #1	; 0x1
        2aa07c:	e1a0e802 	mov	lr, r2, lsl #16
        2aa080:	e1a0e84e 	mov	lr, lr, asr #16
        2aa084:	e35e000c 	cmp	lr, #12	; 0xc
        2aa088:	dafffff7 	ble	2aa06c <angl(low_type *)+0xf0>
        2aa08c:	e286100c 	add	r1, r6, #12	; 0xc
        2aa090:	e594203c 	ldr	r2, [r4, #60]
        2aa094:	e1a02842 	mov	r2, r2, asr #16
        2aa098:	e0862082 	add	r2, r6, r2, lsl #1
        2aa09c:	e242200c 	sub	r2, r2, #12	; 0xc
        2aa0a0:	e3a03006 	mov	r3, #6	; 0x6
        2aa0a4:	e58d2004 	str	r2, [sp, #4]
        2aa0a8:	e1510002 	cmp	r1, r2
        2aa0ac:	8a000019 	bhi	2aa118 <angl(low_type *)+0x19c>
        2aa0b0:	e5942038 	ldr	r2, [r4, #56]
        2aa0b4:	e7922083 	ldr	r2, [r2, r3, lsl #1]
        2aa0b8:	e1a02842 	mov	r2, r2, asr #16
        2aa0bc:	e3720001 	cmn	r2, #1	; 0x1
        2aa0c0:	1a00000d 	bne	2aa0fc <angl(low_type *)+0x180>
        2aa0c4:	e5c10001 	strb	r0, [r1, #1]
        2aa0c8:	e5c1c000 	strb	ip, [r1]
        2aa0cc:	e3a02001 	mov	r2, #1	; 0x1
        2aa0d0:	e081e082 	add	lr, r1, r2, lsl #1
        2aa0d4:	e5ce0001 	strb	r0, [lr, #1]
        2aa0d8:	e5cec000 	strb	ip, [lr]
        2aa0dc:	e041e082 	sub	lr, r1, r2, lsl #1
        2aa0e0:	e5ce0001 	strb	r0, [lr, #1]
        2aa0e4:	e5cec000 	strb	ip, [lr]
        2aa0e8:	e2822001 	add	r2, r2, #1	; 0x1
        2aa0ec:	e1a02802 	mov	r2, r2, lsl #16
        2aa0f0:	e1a02842 	mov	r2, r2, asr #16
        2aa0f4:	e3520006 	cmp	r2, #6	; 0x6
        2aa0f8:	dafffff4 	ble	2aa0d0 <angl(low_type *)+0x154>
        2aa0fc:	e2811002 	add	r1, r1, #2	; 0x2
        2aa100:	e2832001 	add	r2, r3, #1	; 0x1
        2aa104:	e1a03802 	mov	r3, r2, lsl #16
        2aa108:	e1a03843 	mov	r3, r3, asr #16
        2aa10c:	e59d2004 	ldr	r2, [sp, #4]
        2aa110:	e1510002 	cmp	r1, r2
        2aa114:	9affffe5 	bls	2aa0b0 <angl(low_type *)+0x134>
        2aa118:	e3a07000 	mov	r7, #0	; 0x0
        2aa11c:	e3a0a000 	mov	sl, #0	; 0x0
        2aa120:	e3a09000 	mov	r9, #0	; 0x0
        2aa124:	e3a05000 	mov	r5, #0	; 0x0
        2aa128:	e59d1004 	ldr	r1, [sp, #4]
        2aa12c:	e1560001 	cmp	r6, r1
        2aa130:	8affff9b 	bhi	2a9fa4 <angl(low_type *)+0x28>
        2aa134:	e5960000 	ldr	r0, [r6]
        2aa138:	e1a00840 	mov	r0, r0, asr #16
        2aa13c:	e240cc7f 	sub	ip, r0, #32512	; 0x7f00
        2aa140:	e33c00ff 	teq	ip, #255	; 0xff
        2aa144:	0a000019 	beq	2aa1b0 <angl(low_type *)+0x234>
        2aa148:	e5940034 	ldr	r0, [r4, #52]
        2aa14c:	e0800085 	add	r0, r0, r5, lsl #1
        2aa150:	e590100c 	ldr	r1, [r0, #12]
        2aa154:	e1a01821 	mov	r1, r1, lsr #16
        2aa158:	e510000c 	ldr	r0, [r0, -#12]
        2aa15c:	e1a00820 	mov	r0, r0, lsr #16
        2aa160:	e0410000 	sub	r0, r1, r0
        2aa164:	e1a01800 	mov	r1, r0, lsl #16
        2aa168:	e1a01841 	mov	r1, r1, asr #16
        2aa16c:	e5940038 	ldr	r0, [r4, #56]
        2aa170:	e0800085 	add	r0, r0, r5, lsl #1
        2aa174:	e590200c 	ldr	r2, [r0, #12]
        2aa178:	e1a02822 	mov	r2, r2, lsr #16
        2aa17c:	e510000c 	ldr	r0, [r0, -#12]
        2aa180:	e1a00820 	mov	r0, r0, lsr #16
        2aa184:	e0420000 	sub	r0, r2, r0
        2aa188:	e1a00800 	mov	r0, r0, lsl #16
        2aa18c:	e1a00840 	mov	r0, r0, asr #16
        2aa190:	e0020191 	mul	r2, r1, r1
        2aa194:	e0010090 	mul	r1, r0, r0
        2aa198:	e0820001 	add	r0, r2, r1
        2aa19c:	e1a00800 	mov	r0, r0, lsl #16
        2aa1a0:	e1a00840 	mov	r0, r0, asr #16
        2aa1a4:	e5c60001 	strb	r0, [r6, #1]
        2aa1a8:	e1a01440 	mov	r1, r0, asr #8
        2aa1ac:	e5c61000 	strb	r1, [r6]
        2aa1b0:	e33a0000 	teq	sl, #0	; 0x0
        2aa1b4:	1a000003 	bne	2aa1c8 <angl(low_type *)+0x24c>
        2aa1b8:	e3500ffa 	cmp	r0, #1000	; 0x3e8
        2aa1bc:	d3a0a001 	movle	sl, #1	; 0x1
        2aa1c0:	da000002 	ble	2aa1d0 <angl(low_type *)+0x254>
        2aa1c4:	ea000041 	b	2aa2d0 <angl(low_type *)+0x354>
        2aa1c8:	e33a0001 	teq	sl, #1	; 0x1
        2aa1cc:	1a00003f 	bne	2aa2d0 <angl(low_type *)+0x354>
        2aa1d0:	e3500ffa 	cmp	r0, #1000	; 0x3e8
        2aa1d4:	da000012 	ble	2aa224 <angl(low_type *)+0x2a8>
        2aa1d8:	e3a0a000 	mov	sl, #0	; 0x0
        2aa1dc:	e1a00007 	mov	r0, r7
        2aa1e0:	e3a07000 	mov	r7, #0	; 0x0
        2aa1e4:	e3390000 	teq	r9, #0	; 0x0
        2aa1e8:	0a000038 	beq	2aa2d0 <angl(low_type *)+0x354>
        2aa1ec:	e1a03008 	mov	r3, r8
        2aa1f0:	e2452001 	sub	r2, r5, #1	; 0x1
        2aa1f4:	e92d000c 	stmdb	sp!, {r2, r3}
        2aa1f8:	e1a03000 	mov	r3, r0
        2aa1fc:	e1a00004 	mov	r0, r4
        2aa200:	e3a02004 	mov	r2, #4	; 0x4
        2aa204:	e59d1008 	ldr	r1, [sp, #8]
        2aa208:	eb61f04d 	bl	1b26344 <$store_angle__FP8low_typesN42>
        2aa20c:	e28dd008 	add	sp, sp, #8	; 0x8
        2aa210:	e3300000 	teq	r0, #0	; 0x0
        2aa214:	03a09000 	moveq	r9, #0	; 0x0
        2aa218:	0a00002c 	beq	2aa2d0 <angl(low_type *)+0x354>
        2aa21c:	e3a00001 	mov	r0, #1	; 0x1
        2aa220:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2aa224:	e2843034 	add	r3, r4, #52	; 0x34
        2aa228:	e893000c 	ldmia	r3, {r2, r3}
        2aa22c:	e92d000c 	stmdb	sp!, {r2, r3}
        2aa230:	e2853004 	add	r3, r5, #4	; 0x4
        2aa234:	e2451004 	sub	r1, r5, #4	; 0x4
        2aa238:	e1a02005 	mov	r2, r5
        2aa23c:	e1a00005 	mov	r0, r5
        2aa240:	eb61e801 	bl	1b2424c <$cos_vect__FiN31PsT5>
        2aa244:	e28dd008 	add	sp, sp, #8	; 0x8
        2aa248:	e1a00800 	mov	r0, r0, lsl #16
        2aa24c:	e1a00840 	mov	r0, r0, asr #16
        2aa250:	e2401064 	sub	r1, r0, #100	; 0x64
        2aa254:	e5c61001 	strb	r1, [r6, #1]
        2aa258:	e1a01441 	mov	r1, r1, asr #8
        2aa25c:	e5c61000 	strb	r1, [r6]
        2aa260:	e3390000 	teq	r9, #0	; 0x0
        2aa264:	1a000007 	bne	2aa288 <angl(low_type *)+0x30c>
        2aa268:	e370003c 	cmn	r0, #60	; 0x3c
        2aa26c:	ba000017 	blt	2aa2d0 <angl(low_type *)+0x354>
        2aa270:	e3a09001 	mov	r9, #1	; 0x1
        2aa274:	e3370000 	teq	r7, #0	; 0x0
        2aa278:	01a07005 	moveq	r7, r5
        2aa27c:	e1a08000 	mov	r8, r0
        2aa280:	e58d5000 	str	r5, [sp]
        2aa284:	ea000011 	b	2aa2d0 <angl(low_type *)+0x354>
        2aa288:	e1500008 	cmp	r0, r8
        2aa28c:	c1a08000 	movgt	r8, r0
        2aa290:	c58d5000 	strgt	r5, [sp]
        2aa294:	e370003c 	cmn	r0, #60	; 0x3c
        2aa298:	aa00000c 	bge	2aa2d0 <angl(low_type *)+0x354>
        2aa29c:	e3a09000 	mov	r9, #0	; 0x0
        2aa2a0:	e1a03008 	mov	r3, r8
        2aa2a4:	e2452001 	sub	r2, r5, #1	; 0x1
        2aa2a8:	e92d000c 	stmdb	sp!, {r2, r3}
        2aa2ac:	e1a03007 	mov	r3, r7
        2aa2b0:	e1a00004 	mov	r0, r4
        2aa2b4:	e3a02004 	mov	r2, #4	; 0x4
        2aa2b8:	e59d1008 	ldr	r1, [sp, #8]
        2aa2bc:	eb61f020 	bl	1b26344 <$store_angle__FP8low_typesN42>
        2aa2c0:	e28dd008 	add	sp, sp, #8	; 0x8
        2aa2c4:	e3300000 	teq	r0, #0	; 0x0
        2aa2c8:	1affffd3 	bne	2aa21c <angl(low_type *)+0x2a0>
        2aa2cc:	e3a07000 	mov	r7, #0	; 0x0
        2aa2d0:	e2866002 	add	r6, r6, #2	; 0x2
        2aa2d4:	e2850001 	add	r0, r5, #1	; 0x1
        2aa2d8:	e1a05800 	mov	r5, r0, lsl #16
        2aa2dc:	e1a05845 	mov	r5, r5, asr #16
        2aa2e0:	e59d0004 	ldr	r0, [sp, #4]
        2aa2e4:	e1560000 	cmp	r6, r0
        2aa2e8:	9affff91 	bls	2aa134 <angl(low_type *)+0x1b8>
        2aa2ec:	eaffff2c 	b	2a9fa4 <angl(low_type *)+0x28>
    */
}

/**
 * Symbol: angle_direction__FsN21
 * Address: 002aa418
 */
void globals::angle_direction() {
    /*
        2aa418:	e1a0c00d 	mov	ip, sp
        2aa41c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2aa420:	e24cb004 	sub	fp, ip, #4	; 0x4
        2aa424:	e1a00800 	mov	r0, r0, lsl #16
        2aa428:	e1a00840 	mov	r0, r0, asr #16
        2aa42c:	e1a04801 	mov	r4, r1, lsl #16
        2aa430:	e1a04844 	mov	r4, r4, asr #16
        2aa434:	e0601280 	rsb	r1, r0, r0, lsl #5
        2aa438:	e0811081 	add	r1, r1, r1, lsl #1
        2aa43c:	e0801101 	add	r1, r0, r1, lsl #2
        2aa440:	e3a00064 	mov	r0, #100	; 0x64
        2aa444:	eb64213d 	bl	1bb2940 <$__rt_sdiv>
        2aa448:	e0801004 	add	r1, r0, r4
        2aa44c:	e0400004 	sub	r0, r0, r4
        2aa450:	e3510000 	cmp	r1, #0	; 0x0
        2aa454:	da000003 	ble	2aa468 <angle_direction__FsN21+0x50>
        2aa458:	e3500000 	cmp	r0, #0	; 0x0
        2aa45c:	d3a00010 	movle	r0, #16	; 0x10
        2aa460:	c3a00040 	movgt	r0, #64	; 0x40
        2aa464:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2aa468:	e3500000 	cmp	r0, #0	; 0x0
        2aa46c:	d3a00080 	movle	r0, #128	; 0x80
        2aa470:	c3a00020 	movgt	r0, #32	; 0x20
        2aa474:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: AngleFromSlope(long)
 * Address: 002aa530
 */
AngleFromSlope(long) {
    /*
        2aa530:	e3a03000 	mov	r3, #0	; 0x0
        2aa534:	e3500000 	cmp	r0, #0	; 0x0
        2aa538:	b3a03001 	movlt	r3, #1	; 0x1
        2aa53c:	b2600000 	rsblt	r0, r0, #0	; 0x0
        2aa540:	e1b0c820 	movs	ip, r0, lsr #16
        2aa544:	e1a02800 	mov	r2, r0, lsl #16
        2aa548:	e1a02822 	mov	r2, r2, lsr #16
        2aa54c:	e59f101c 	ldr	r1, [pc, #1c]	; 2aa570 <AngleFromSlope(long)+0x40>
        2aa550:	1a000007 	bne	2aa574 <AngleFromSlope(long)+0x44>
        2aa554:	e0810522 	add	r0, r1, r2, lsr #10
        2aa558:	e5d0c1c2 	ldrb	ip, [r0, #450]
        2aa55c:	e081010c 	add	r0, r1, ip, lsl #2
        2aa560:	e5900204 	ldr	r0, [r0, #516]
        2aa564:	e1500002 	cmp	r0, r2
        2aa568:	328cc001 	addcc	ip, ip, #1	; 0x1
        2aa56c:	ea00000d 	b	2aa5a8 <AngleFromSlope(long)+0x78>
        2aa570:	00380bcc 	eoreqs	r0, r8, ip, asr #23
        2aa574:	e35c0008 	cmp	ip, #8	; 0x8
        2aa578:	23a0c053 	movcs	ip, #83	; 0x53
        2aa57c:	308126c0 	addcc	r2, r1, r0, asr #13
        2aa580:	35d2c2b4 	ldrccb	ip, [r2, #692]
        2aa584:	e081210c 	add	r2, r1, ip, lsl #2
        2aa588:	e5922240 	ldr	r2, [r2, #576]
        2aa58c:	e1520000 	cmp	r2, r0
        2aa590:	2a000004 	bcs	2aa5a8 <AngleFromSlope(long)+0x78>
        2aa594:	e28cc001 	add	ip, ip, #1	; 0x1
        2aa598:	e081210c 	add	r2, r1, ip, lsl #2
        2aa59c:	e5922240 	ldr	r2, [r2, #576]
        2aa5a0:	e1520000 	cmp	r2, r0
        2aa5a4:	3afffffa 	bcc	2aa594 <AngleFromSlope(long)+0x64>
        2aa5a8:	e3330001 	teq	r3, #1	; 0x1
        2aa5ac:	126c00b4 	rsbne	r0, ip, #180	; 0xb4
        2aa5b0:	01a0000c 	moveq	r0, ip
        2aa5b4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: annuity
 * Address: 002aa688
 */
void globals::annuity() {
    /*
        2aa688:	e1a0c00d 	mov	ip, sp
        2aa68c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2aa690:	e24cb004 	sub	fp, ip, #4	; 0x4
        2aa694:	ed2d420c 	sfm	f4, 4, [sp, -#48]!
        2aa698:	e92d0003 	stmdb	sp!, {r0, r1}
        2aa69c:	ecbde102 	ldfd	f6, [sp], #8
        2aa6a0:	e92d000c 	stmdb	sp!, {r2, r3}
        2aa6a4:	ecbdd102 	ldfd	f5, [sp], #8
        2aa6a8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2aa6ac:	ee00c188 	mvfd	f4, #0.0
        2aa6b0:	ee00f184 	mvfd	f7, f4
        2aa6b4:	e1a0000d 	mov	r0, sp
        2aa6b8:	eb6424cd 	bl	1bb39f4 <$feholdexcept>
        2aa6bc:	ed2de102 	stfd	f6, [sp, -#8]!
        2aa6c0:	e8bd0003 	ldmia	sp!, {r0, r1}
        2aa6c4:	eb6562c5 	bl	1c031e0 <$__fpclassifyd>
        2aa6c8:	e1a05000 	mov	r5, r0
        2aa6cc:	ed2dd102 	stfd	f5, [sp, -#8]!
        2aa6d0:	e8bd0003 	ldmia	sp!, {r0, r1}
        2aa6d4:	eb6562c1 	bl	1c031e0 <$__fpclassifyd>
        2aa6d8:	e1a04000 	mov	r4, r0
        2aa6dc:	e3350063 	teq	r5, #99	; 0x63
        2aa6e0:	13350000 	teqne	r5, #0	; 0x0
        2aa6e4:	13340063 	teqne	r4, #99	; 0x63
        2aa6e8:	13340000 	teqne	r4, #0	; 0x0
        2aa6ec:	0e064185 	adfeqd	f4, f6, f5
        2aa6f0:	0a00007f 	beq	2aa8f4 <annuity+0x26c>
        2aa6f4:	ee108189 	mnfd	f0, #1.0
        2aa6f8:	eed6f110 	cmfe	f6, f0
        2aa6fc:	da00006e 	ble	2aa8bc <annuity+0x234>
        2aa700:	eed5f118 	cmfe	f5, #0.0
        2aa704:	ba000000 	blt	2aa70c <annuity+0x84>
        2aa708:	da000067 	ble	2aa8ac <annuity+0x224>
        2aa70c:	e3350001 	teq	r5, #1	; 0x1
        2aa710:	0a00005d 	beq	2aa88c <annuity+0x204>
        2aa714:	e3350002 	teq	r5, #2	; 0x2
        2aa718:	0e00c185 	mvfeqd	f4, f5
        2aa71c:	0a000062 	beq	2aa8ac <annuity+0x224>
        2aa720:	e3350003 	teq	r5, #3	; 0x3
        2aa724:	13350004 	teqne	r5, #4	; 0x4
        2aa728:	1a00005f 	bne	2aa8ac <annuity+0x224>
        2aa72c:	e3340001 	teq	r4, #1	; 0x1
        2aa730:	1a00000b 	bne	2aa764 <annuity+0xdc>
        2aa734:	ed2dd102 	stfd	f5, [sp, -#8]!
        2aa738:	e8bd0003 	ldmia	sp!, {r0, r1}
        2aa73c:	eb6562ad 	bl	1c031f8 <$__signbitd>
        2aa740:	e1a04000 	mov	r4, r0
        2aa744:	ed2de102 	stfd	f6, [sp, -#8]!
        2aa748:	e8bd0003 	ldmia	sp!, {r0, r1}
        2aa74c:	eb6562a9 	bl	1c031f8 <$__signbitd>
        2aa750:	e1340000 	teq	r4, r0
        2aa754:	1e00c185 	mvfned	f4, f5
        2aa758:	0e008189 	mvfeqd	f0, #1.0
        2aa75c:	0e404186 	dvfeqd	f4, f0, f6
        2aa760:	ea000063 	b	2aa8f4 <annuity+0x26c>
        2aa764:	ee10c185 	mnfd	f4, f5
        2aa768:	e3350004 	teq	r5, #4	; 0x4
        2aa76c:	1a000006 	bne	2aa78c <annuity+0x104>
        2aa770:	ee140186 	mufd	f0, f4, f6
        2aa774:	ed2d8102 	stfd	f0, [sp, -#8]!
        2aa778:	e8bd0003 	ldmia	sp!, {r0, r1}
        2aa77c:	eb642495 	bl	1bb39d8 <$expm1>
        2aa780:	ee108180 	mnfd	f0, f0
        2aa784:	ee404186 	dvfd	f4, f0, f6
        2aa788:	ea000034 	b	2aa860 <annuity+0x1d8>
        2aa78c:	ed2de102 	stfd	f6, [sp, -#8]!
        2aa790:	e8bd0003 	ldmia	sp!, {r0, r1}
        2aa794:	eb6428a8 	bl	1bb4a3c <$log1p>
        2aa798:	ee104184 	mufd	f4, f0, f4
        2aa79c:	ed2dc102 	stfd	f4, [sp, -#8]!
        2aa7a0:	e8bd0003 	ldmia	sp!, {r0, r1}
        2aa7a4:	eb6428a6 	bl	1bb4a44 <$logb>
        2aa7a8:	ed9f9114 	ldfd	f1, [pc, #80]
        2aa7ac:	eed0f111 	cmfe	f0, f1
        2aa7b0:	ba000016 	blt	2aa810 <annuity+0x188>
        2aa7b4:	ed2de102 	stfd	f6, [sp, -#8]!
        2aa7b8:	e8bd0003 	ldmia	sp!, {r0, r1}
        2aa7bc:	eb6428a0 	bl	1bb4a44 <$logb>
        2aa7c0:	ed9f9110 	ldfd	f1, [pc, #64]
        2aa7c4:	eed0f111 	cmfe	f0, f1
        2aa7c8:	ba000010 	blt	2aa810 <annuity+0x188>
        2aa7cc:	eed5f118 	cmfe	f5, #0.0
        2aa7d0:	aa00000e 	bge	2aa810 <annuity+0x188>
        2aa7d4:	ed2de102 	stfd	f6, [sp, -#8]!
        2aa7d8:	e8bd0003 	ldmia	sp!, {r0, r1}
        2aa7dc:	eb642894 	bl	1bb4a34 <$log>
        2aa7e0:	ee051189 	adfd	f1, f5, #1.0
        2aa7e4:	ee109181 	mnfd	f1, f1
        2aa7e8:	ee100181 	mufd	f0, f0, f1
        2aa7ec:	ed2d8102 	stfd	f0, [sp, -#8]!
        2aa7f0:	e8bd0003 	ldmia	sp!, {r0, r1}
        2aa7f4:	eb642475 	bl	1bb39d0 <$exp>
        2aa7f8:	ee10c180 	mnfd	f4, f0
        2aa7fc:	ea000008 	b	2aa824 <annuity+0x19c>
        2aa800:	40200000 	eormi	r0, r0, r0
        2aa804:	00000000 	andeq	r0, r0, r0
        2aa808:	40600000 	rsbmi	r0, r0, r0
        2aa80c:	00000000 	andeq	r0, r0, r0
        2aa810:	ed2dc102 	stfd	f4, [sp, -#8]!
        2aa814:	e8bd0003 	ldmia	sp!, {r0, r1}
        2aa818:	eb64246e 	bl	1bb39d8 <$expm1>
        2aa81c:	ee108180 	mnfd	f0, f0
        2aa820:	ee404186 	dvfd	f4, f0, f6
        2aa824:	e3a0000c 	mov	r0, #12	; 0xc
        2aa828:	eb64246d 	bl	1bb39e4 <$feclearexcept>
        2aa82c:	ed2dc102 	stfd	f4, [sp, -#8]!
        2aa830:	e8bd0003 	ldmia	sp!, {r0, r1}
        2aa834:	eb656269 	bl	1c031e0 <$__fpclassifyd>
        2aa838:	e3300001 	teq	r0, #1	; 0x1
        2aa83c:	0a000009 	beq	2aa868 <annuity+0x1e0>
        2aa840:	e3300002 	teq	r0, #2	; 0x2
        2aa844:	13300004 	teqne	r0, #4	; 0x4
        2aa848:	1a000017 	bne	2aa8ac <annuity+0x224>
        2aa84c:	e3a00010 	mov	r0, #16	; 0x10
        2aa850:	eb64286c 	bl	1bb4a08 <$fetestexcept>
        2aa854:	e3300000 	teq	r0, #0	; 0x0
        2aa858:	13a00008 	movne	r0, #8	; 0x8
        2aa85c:	1a000006 	bne	2aa87c <annuity+0x1f4>
        2aa860:	e3a00008 	mov	r0, #8	; 0x8
        2aa864:	ea000006 	b	2aa884 <annuity+0x1fc>
        2aa868:	e3a00010 	mov	r0, #16	; 0x10
        2aa86c:	eb642865 	bl	1bb4a08 <$fetestexcept>
        2aa870:	e3300000 	teq	r0, #0	; 0x0
        2aa874:	e3a00004 	mov	r0, #4	; 0x4
        2aa878:	0a000001 	beq	2aa884 <annuity+0x1fc>
        2aa87c:	eb64245d 	bl	1bb39f8 <$feraiseexcept>
        2aa880:	ea000009 	b	2aa8ac <annuity+0x224>
        2aa884:	eb642456 	bl	1bb39e4 <$feclearexcept>
        2aa888:	ea000007 	b	2aa8ac <annuity+0x224>
        2aa88c:	eed5f118 	cmfe	f5, #0.0
        2aa890:	ca000005 	bgt	2aa8ac <annuity+0x224>
        2aa894:	eed5f110 	cmfe	f5, f0
        2aa898:	ce10c188 	mnfgtd	f4, #0.0
        2aa89c:	ca000002 	bgt	2aa8ac <annuity+0x224>
        2aa8a0:	ae00c180 	mvfged	f4, f0
        2aa8a4:	b59f000c 	ldrlt	r0, [pc, #c]	; 2aa8b8 <annuity+0x230>
        2aa8a8:	bd90c100 	ldfltd	f4, [r0]
        2aa8ac:	e3340002 	teq	r4, #2	; 0x2
        2aa8b0:	0e00c187 	mvfeqd	f4, f7
        2aa8b4:	ea00000e 	b	2aa8f4 <annuity+0x26c>
        2aa8b8:	0037ae34 	eoreqs	sl, r7, r4, lsr lr
        2aa8bc:	159f0024 	ldrne	r0, [pc, #24]	; 2aa8e8 <annuity+0x260>
        2aa8c0:	1d90c100 	ldfned	f4, [r0]
        2aa8c4:	13a00001 	movne	r0, #1	; 0x1
        2aa8c8:	1a000004 	bne	2aa8e0 <annuity+0x258>
        2aa8cc:	eed5f118 	cmfe	f5, #0.0
        2aa8d0:	da000006 	ble	2aa8f0 <annuity+0x268>
        2aa8d4:	e59f0010 	ldr	r0, [pc, #10]	; 2aa8ec <annuity+0x264>
        2aa8d8:	ed90c100 	ldfd	f4, [r0]
        2aa8dc:	e3a00002 	mov	r0, #2	; 0x2
        2aa8e0:	eb642444 	bl	1bb39f8 <$feraiseexcept>
        2aa8e4:	ea000002 	b	2aa8f4 <annuity+0x26c>
        2aa8e8:	0037ae3c 	eoreqs	sl, r7, ip, lsr lr
        2aa8ec:	0037ae2c 	eoreqs	sl, r7, ip, lsr #28
        2aa8f0:	1e00c180 	mvfned	f4, f0
        2aa8f4:	e1a0000d 	mov	r0, sp
        2aa8f8:	eb642843 	bl	1bb4a0c <$feupdateenv>
        2aa8fc:	ee008184 	mvfd	f0, f4
        2aa900:	ed1b4211 	lfm	f4, 4, [fp, -#68]
        2aa904:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: atan
 * Address: 002ab83c
 */
void globals::atan() {
    /*
        2ab83c:	e1a0c00d 	mov	ip, sp
        2ab840:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2ab844:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ab848:	ed6dc209 	sfm	f4, 3, [sp, -#36]!
        2ab84c:	e92d0003 	stmdb	sp!, {r0, r1}
        2ab850:	ecbdc102 	ldfd	f4, [sp], #8
        2ab854:	e24dd004 	sub	sp, sp, #4	; 0x4
        2ab858:	e3a05000 	mov	r5, #0	; 0x0
        2ab85c:	e1a0000d 	mov	r0, sp
        2ab860:	eb642063 	bl	1bb39f4 <$feholdexcept>
        2ab864:	ed2dc102 	stfd	f4, [sp, -#8]!
        2ab868:	e8bd0003 	ldmia	sp!, {r0, r1}
        2ab86c:	eb655e5b 	bl	1c031e0 <$__fpclassifyd>
        2ab870:	e3300000 	teq	r0, #0	; 0x0
        2ab874:	0a000006 	beq	2ab894 <atan+0x58>
        2ab878:	e59f401c 	ldr	r4, [pc, #1c]	; 2ab89c <atan+0x60>
        2ab87c:	e3300001 	teq	r0, #1	; 0x1
        2ab880:	0a000006 	beq	2ab8a0 <atan+0x64>
        2ab884:	e3300002 	teq	r0, #2	; 0x2
        2ab888:	0a00003a 	beq	2ab978 <atan+0x13c>
        2ab88c:	e3300063 	teq	r0, #99	; 0x63
        2ab890:	1a000007 	bne	2ab8b4 <atan+0x78>
        2ab894:	ee14418a 	mufd	f4, f4, #2.0
        2ab898:	ea000036 	b	2ab978 <atan+0x13c>
        2ab89c:	0037aeac 	eoreqs	sl, r7, ip, lsr #29
        2ab8a0:	eed4f118 	cmfe	f4, #0.0
        2ab8a4:	dd948100 	ldfled	f0, [r4]
        2ab8a8:	de10c180 	mnfled	f4, f0
        2ab8ac:	cd94c100 	ldfgtd	f4, [r4]
        2ab8b0:	ea000030 	b	2ab978 <atan+0x13c>
        2ab8b4:	eed4f118 	cmfe	f4, #0.0
        2ab8b8:	b3a05001 	movlt	r5, #1	; 0x1
        2ab8bc:	be10c184 	mnfltd	f4, f4
        2ab8c0:	ee008189 	mvfd	f0, #1.0
        2ab8c4:	eed4f119 	cmfe	f4, #1.0
        2ab8c8:	c3a06001 	movgt	r6, #1	; 0x1
        2ab8cc:	ce404184 	dvfgtd	f4, f0, f4
        2ab8d0:	d3a06000 	movle	r6, #0	; 0x0
        2ab8d4:	e59f001c 	ldr	r0, [pc, #1c]	; 2ab8f8 <atan+0xbc>
        2ab8d8:	ed909100 	ldfd	f1, [r0]
        2ab8dc:	eed4f111 	cmfe	f4, f1
        2ab8e0:	ca000005 	bgt	2ab8fc <atan+0xc0>
        2ab8e4:	ed2dc102 	stfd	f4, [sp, -#8]!
        2ab8e8:	e8bd0003 	ldmia	sp!, {r0, r1}
        2ab8ec:	ebffffaf 	bl	2ab7b0 <FATn>
        2ab8f0:	ee100184 	mufd	f0, f0, f4
        2ab8f4:	ea000011 	b	2ab940 <atan+0x104>
        2ab8f8:	0037aea4 	eoreqs	sl, r7, r4, lsr #29
        2ab8fc:	e59f0088 	ldr	r0, [pc, #88]	; 2ab98c <atan+0x150>
        2ab900:	ed90a100 	ldfd	f2, [r0]
        2ab904:	ee141182 	mufd	f1, f4, f2
        2ab908:	ee242182 	sufd	f2, f4, f2
        2ab90c:	ee013189 	adfd	f3, f1, #1.0
        2ab910:	ee425183 	dvfd	f5, f2, f3
        2ab914:	ee400181 	dvfd	f0, f0, f1
        2ab918:	ee000189 	adfd	f0, f0, #1.0
        2ab91c:	ee426180 	dvfd	f6, f2, f0
        2ab920:	ed2dd102 	stfd	f5, [sp, -#8]!
        2ab924:	e8bd0003 	ldmia	sp!, {r0, r1}
        2ab928:	ebffffa0 	bl	2ab7b0 <FATn>
        2ab92c:	ee101185 	mufd	f1, f0, f5
        2ab930:	e59f0058 	ldr	r0, [pc, #58]	; 2ab990 <atan+0x154>
        2ab934:	ed908100 	ldfd	f0, [r0]
        2ab938:	ee010180 	adfd	f0, f1, f0
        2ab93c:	ee060180 	adfd	f0, f6, f0
        2ab940:	ee244180 	sufd	f4, f4, f0
        2ab944:	e3360000 	teq	r6, #0	; 0x0
        2ab948:	1d948100 	ldfned	f0, [r4]
        2ab94c:	1e204184 	sufned	f4, f0, f4
        2ab950:	e3350000 	teq	r5, #0	; 0x0
        2ab954:	1e10c184 	mnfned	f4, f4
        2ab958:	e3a00010 	mov	r0, #16	; 0x10
        2ab95c:	eb642025 	bl	1bb39f8 <$feraiseexcept>
        2ab960:	ed2dc102 	stfd	f4, [sp, -#8]!
        2ab964:	e8bd0003 	ldmia	sp!, {r0, r1}
        2ab968:	eb655e1c 	bl	1c031e0 <$__fpclassifyd>
        2ab96c:	e3300004 	teq	r0, #4	; 0x4
        2ab970:	03a00008 	moveq	r0, #8	; 0x8
        2ab974:	0b64201f 	bleq	1bb39f8 <$feraiseexcept>
        2ab978:	e1a0000d 	mov	r0, sp
        2ab97c:	eb642422 	bl	1bb4a0c <$feupdateenv>
        2ab980:	ee008184 	mvfd	f0, f4
        2ab984:	ed5bc20f 	lfm	f4, 3, [fp, -#60]
        2ab988:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2ab98c:	0037ae94 	mlaeqs	r7, r4, lr, sl
        2ab990:	0037ae9c 	mlaeqs	r7, ip, lr, sl
    */
}

/**
 * Symbol: atanh
 * Address: 002ab994
 */
void globals::atanh() {
    /*
        2ab994:	e1a0c00d 	mov	ip, sp
        2ab998:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2ab99c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ab9a0:	ed2dc203 	sfm	f4, 1, [sp, -#12]!
        2ab9a4:	e92d0003 	stmdb	sp!, {r0, r1}
        2ab9a8:	ecbdc102 	ldfd	f4, [sp], #8
        2ab9ac:	e24dd004 	sub	sp, sp, #4	; 0x4
        2ab9b0:	e1a0000d 	mov	r0, sp
        2ab9b4:	eb64200e 	bl	1bb39f4 <$feholdexcept>
        2ab9b8:	ee108189 	mnfd	f0, #1.0
        2ab9bc:	eed4f110 	cmfe	f4, f0
        2ab9c0:	ba000012 	blt	2aba10 <atanh+0x7c>
        2ab9c4:	eed4f119 	cmfe	f4, #1.0
        2ab9c8:	ca000010 	bgt	2aba10 <atanh+0x7c>
        2ab9cc:	ed2dc102 	stfd	f4, [sp, -#8]!
        2ab9d0:	e8bd0003 	ldmia	sp!, {r0, r1}
        2ab9d4:	eb642000 	bl	1bb39dc <$fabs>
        2ab9d8:	e59f002c 	ldr	r0, [pc, #2c]	; 2aba0c <atanh+0x78>
        2ab9dc:	ed909100 	ldfd	f1, [r0]
        2ab9e0:	eed0f111 	cmfe	f0, f1
        2ab9e4:	ba00000e 	blt	2aba24 <atanh+0x90>
        2ab9e8:	ee14018a 	mufd	f0, f4, #2.0
        2ab9ec:	ee009189 	mvfd	f1, #1.0
        2ab9f0:	ee211184 	sufd	f1, f1, f4
        2ab9f4:	ee400181 	dvfd	f0, f0, f1
        2ab9f8:	ed2d8102 	stfd	f0, [sp, -#8]!
        2ab9fc:	e8bd0003 	ldmia	sp!, {r0, r1}
        2aba00:	eb64240d 	bl	1bb4a3c <$log1p>
        2aba04:	ee10418e 	mufd	f4, f0, #0.5
        2aba08:	ea000005 	b	2aba24 <atanh+0x90>
        2aba0c:	0037aeb4 	ldreqh	sl, [r7], -r4
        2aba10:	e3a00001 	mov	r0, #1	; 0x1
        2aba14:	eb641ff7 	bl	1bb39f8 <$feraiseexcept>
        2aba18:	e3a00028 	mov	r0, #40	; 0x28
        2aba1c:	eb01b525 	bl	318eb8 <NANsane>
        2aba20:	ee00c180 	mvfd	f4, f0
        2aba24:	ed2dc102 	stfd	f4, [sp, -#8]!
        2aba28:	e8bd0003 	ldmia	sp!, {r0, r1}
        2aba2c:	eb655deb 	bl	1c031e0 <$__fpclassifyd>
        2aba30:	e3300003 	teq	r0, #3	; 0x3
        2aba34:	0a000003 	beq	2aba48 <atanh+0xb4>
        2aba38:	e3300004 	teq	r0, #4	; 0x4
        2aba3c:	1a000003 	bne	2aba50 <atanh+0xbc>
        2aba40:	e3a00008 	mov	r0, #8	; 0x8
        2aba44:	eb641feb 	bl	1bb39f8 <$feraiseexcept>
        2aba48:	e3a00010 	mov	r0, #16	; 0x10
        2aba4c:	eb641fe9 	bl	1bb39f8 <$feraiseexcept>
        2aba50:	e1a0000d 	mov	r0, sp
        2aba54:	eb6423ec 	bl	1bb4a0c <$feupdateenv>
        2aba58:	ee008184 	mvfd	f0, f4
        2aba5c:	ed1bc206 	lfm	f4, 1, [fp, -#24]
        2aba60:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: asinh
 * Address: 002aba64
 */
void globals::asinh() {
    /*
        2aba64:	e1a0c00d 	mov	ip, sp
        2aba68:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2aba6c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2aba70:	ed6dc209 	sfm	f4, 3, [sp, -#36]!
        2aba74:	e92d0003 	stmdb	sp!, {r0, r1}
        2aba78:	ecbde102 	ldfd	f6, [sp], #8
        2aba7c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2aba80:	e1a0000d 	mov	r0, sp
        2aba84:	eb641fda 	bl	1bb39f4 <$feholdexcept>
        2aba88:	ed2de102 	stfd	f6, [sp, -#8]!
        2aba8c:	e8bd0003 	ldmia	sp!, {r0, r1}
        2aba90:	eb641fd1 	bl	1bb39dc <$fabs>
        2aba94:	ee00c180 	mvfd	f4, f0
        2aba98:	e59f004c 	ldr	r0, [pc, #4c]	; 2abaec <asinh+0x88>
        2aba9c:	ed909100 	ldfd	f1, [r0]
        2abaa0:	eed0f111 	cmfe	f0, f1
        2abaa4:	ba00002a 	blt	2abb54 <asinh+0xf0>
        2abaa8:	ed9f8110 	ldfd	f0, [pc, #64]
        2abaac:	ee00d189 	mvfd	f5, #1.0
        2abab0:	eed4f110 	cmfe	f4, f0
        2abab4:	ca00000f 	bgt	2abaf8 <asinh+0x94>
        2abab8:	ee455184 	dvfd	f5, f5, f4
        2ababc:	ee150185 	mufd	f0, f5, f5
        2abac0:	ee000189 	adfd	f0, f0, #1.0
        2abac4:	ed2d8102 	stfd	f0, [sp, -#8]!
        2abac8:	e8bd0003 	ldmia	sp!, {r0, r1}
        2abacc:	eb6427f1 	bl	1bb5a98 <$sqrt>
        2abad0:	ee000185 	adfd	f0, f0, f5
        2abad4:	ee440180 	dvfd	f0, f4, f0
        2abad8:	ee000184 	adfd	f0, f0, f4
        2abadc:	ed2d8102 	stfd	f0, [sp, -#8]!
        2abae0:	e8bd0003 	ldmia	sp!, {r0, r1}
        2abae4:	eb6423d4 	bl	1bb4a3c <$log1p>
        2abae8:	ea000011 	b	2abb34 <asinh+0xd0>
        2abaec:	0037aeb4 	ldreqh	sl, [r7], -r4
        2abaf0:	3ff55555 	swicc	0x00f55555
        2abaf4:	55555555 	ldrplb	r5, [r5, -#1365]
        2abaf8:	ee450181 	dvfd	f0, f5, f1
        2abafc:	eed0f114 	cmfe	f0, f4
        2abb00:	ba00000d 	blt	2abb3c <asinh+0xd8>
        2abb04:	ee140184 	mufd	f0, f4, f4
        2abb08:	ee000189 	adfd	f0, f0, #1.0
        2abb0c:	ed2d8102 	stfd	f0, [sp, -#8]!
        2abb10:	e8bd0003 	ldmia	sp!, {r0, r1}
        2abb14:	eb6427df 	bl	1bb5a98 <$sqrt>
        2abb18:	ee000184 	adfd	f0, f0, f4
        2abb1c:	ee450180 	dvfd	f0, f5, f0
        2abb20:	ee14118a 	mufd	f1, f4, #2.0
        2abb24:	ee000181 	adfd	f0, f0, f1
        2abb28:	ed2d8102 	stfd	f0, [sp, -#8]!
        2abb2c:	e8bd0003 	ldmia	sp!, {r0, r1}
        2abb30:	eb6423bf 	bl	1bb4a34 <$log>
        2abb34:	ee00c180 	mvfd	f4, f0
        2abb38:	ea000005 	b	2abb54 <asinh+0xf0>
        2abb3c:	ed2dc102 	stfd	f4, [sp, -#8]!
        2abb40:	e8bd0003 	ldmia	sp!, {r0, r1}
        2abb44:	eb6423ba 	bl	1bb4a34 <$log>
        2abb48:	e59f0050 	ldr	r0, [pc, #50]	; 2abba0 <asinh+0x13c>
        2abb4c:	ed909100 	ldfd	f1, [r0]
        2abb50:	ee004181 	adfd	f4, f0, f1
        2abb54:	ed2de102 	stfd	f6, [sp, -#8]!
        2abb58:	e8bd0003 	ldmia	sp!, {r0, r1}
        2abb5c:	eb655d9f 	bl	1c031e0 <$__fpclassifyd>
        2abb60:	e3300003 	teq	r0, #3	; 0x3
        2abb64:	0a000003 	beq	2abb78 <asinh+0x114>
        2abb68:	e3300004 	teq	r0, #4	; 0x4
        2abb6c:	1a000003 	bne	2abb80 <asinh+0x11c>
        2abb70:	e3a00008 	mov	r0, #8	; 0x8
        2abb74:	eb641f9f 	bl	1bb39f8 <$feraiseexcept>
        2abb78:	e3a00010 	mov	r0, #16	; 0x10
        2abb7c:	eb641f9d 	bl	1bb39f8 <$feraiseexcept>
        2abb80:	e1a0000d 	mov	r0, sp
        2abb84:	eb6423a0 	bl	1bb4a0c <$feupdateenv>
        2abb88:	ed2de102 	stfd	f6, [sp, -#8]!
        2abb8c:	ed2dc102 	stfd	f4, [sp, -#8]!
        2abb90:	e8bd000f 	ldmia	sp!, {r0, r1, r2, r3}
        2abb94:	eb641f88 	bl	1bb39bc <$copysign>
        2abb98:	ed5bc20c 	lfm	f4, 3, [fp, -#48]
        2abb9c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        2abba0:	0037aebc 	ldreqh	sl, [r7], -ip
    */
}

/**
 * Symbol: acosh
 * Address: 002abba4
 */
void globals::acosh() {
    /*
        2abba4:	e1a0c00d 	mov	ip, sp
        2abba8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2abbac:	e24cb004 	sub	fp, ip, #4	; 0x4
        2abbb0:	ed6d4206 	sfm	f4, 2, [sp, -#24]!
        2abbb4:	e92d0003 	stmdb	sp!, {r0, r1}
        2abbb8:	ecbdc102 	ldfd	f4, [sp], #8
        2abbbc:	e24dd004 	sub	sp, sp, #4	; 0x4
        2abbc0:	e1a0000d 	mov	r0, sp
        2abbc4:	eb641f8a 	bl	1bb39f4 <$feholdexcept>
        2abbc8:	eed4f119 	cmfe	f4, #1.0
        2abbcc:	ba00002f 	blt	2abc90 <acosh+0xec>
        2abbd0:	e59f003c 	ldr	r0, [pc, #3c]	; 2abc14 <acosh+0x70>
        2abbd4:	ed908100 	ldfd	f0, [r0]
        2abbd8:	eed4f110 	cmfe	f4, f0
        2abbdc:	ca00000d 	bgt	2abc18 <acosh+0x74>
        2abbe0:	ee244189 	sufd	f4, f4, #1.0
        2abbe4:	ee008184 	mvfd	f0, f4
        2abbe8:	ee140180 	mufd	f0, f4, f0
        2abbec:	ee14118a 	mufd	f1, f4, #2.0
        2abbf0:	ee000181 	adfd	f0, f0, f1
        2abbf4:	ed2d8102 	stfd	f0, [sp, -#8]!
        2abbf8:	e8bd0003 	ldmia	sp!, {r0, r1}
        2abbfc:	eb6427a5 	bl	1bb5a98 <$sqrt>
        2abc00:	ee000184 	adfd	f0, f0, f4
        2abc04:	ed2d8102 	stfd	f0, [sp, -#8]!
        2abc08:	e8bd0003 	ldmia	sp!, {r0, r1}
        2abc0c:	eb64238a 	bl	1bb4a3c <$log1p>
        2abc10:	ea000022 	b	2abca0 <acosh+0xfc>
        2abc14:	0037aec4 	eoreqs	sl, r7, r4, asr #29
        2abc18:	eed0f114 	cmfe	f0, f4
        2abc1c:	aa000013 	bge	2abc70 <acosh+0xcc>
        2abc20:	e59f0044 	ldr	r0, [pc, #44]	; 2abc6c <acosh+0xc8>
        2abc24:	ed908100 	ldfd	f0, [r0]
        2abc28:	ee00d189 	mvfd	f5, #1.0
        2abc2c:	ee450180 	dvfd	f0, f5, f0
        2abc30:	eed0f114 	cmfe	f0, f4
        2abc34:	ba00000d 	blt	2abc70 <acosh+0xcc>
        2abc38:	ee140184 	mufd	f0, f4, f4
        2abc3c:	ee200189 	sufd	f0, f0, #1.0
        2abc40:	ed2d8102 	stfd	f0, [sp, -#8]!
        2abc44:	e8bd0003 	ldmia	sp!, {r0, r1}
        2abc48:	eb642792 	bl	1bb5a98 <$sqrt>
        2abc4c:	ee000184 	adfd	f0, f0, f4
        2abc50:	ee450180 	dvfd	f0, f5, f0
        2abc54:	ee14118a 	mufd	f1, f4, #2.0
        2abc58:	ee210180 	sufd	f0, f1, f0
        2abc5c:	ed2d8102 	stfd	f0, [sp, -#8]!
        2abc60:	e8bd0003 	ldmia	sp!, {r0, r1}
        2abc64:	eb642372 	bl	1bb4a34 <$log>
        2abc68:	ea00000c 	b	2abca0 <acosh+0xfc>
        2abc6c:	0037aeb4 	ldreqh	sl, [r7], -r4
        2abc70:	ed2dc102 	stfd	f4, [sp, -#8]!
        2abc74:	e8bd0003 	ldmia	sp!, {r0, r1}
        2abc78:	eb64236d 	bl	1bb4a34 <$log>
        2abc7c:	e59f0008 	ldr	r0, [pc, #8]	; 2abc8c <acosh+0xe8>
        2abc80:	ed909100 	ldfd	f1, [r0]
        2abc84:	ee004181 	adfd	f4, f0, f1
        2abc88:	ea000005 	b	2abca4 <acosh+0x100>
        2abc8c:	0037aebc 	ldreqh	sl, [r7], -ip
        2abc90:	e3a00001 	mov	r0, #1	; 0x1
        2abc94:	eb641f57 	bl	1bb39f8 <$feraiseexcept>
        2abc98:	e3a00028 	mov	r0, #40	; 0x28
        2abc9c:	eb01b485 	bl	318eb8 <NANsane>
        2abca0:	ee00c180 	mvfd	f4, f0
        2abca4:	ed2dc102 	stfd	f4, [sp, -#8]!
        2abca8:	e8bd0003 	ldmia	sp!, {r0, r1}
        2abcac:	eb655d4b 	bl	1c031e0 <$__fpclassifyd>
        2abcb0:	e3300003 	teq	r0, #3	; 0x3
        2abcb4:	0a000003 	beq	2abcc8 <acosh+0x124>
        2abcb8:	e3300004 	teq	r0, #4	; 0x4
        2abcbc:	1a000003 	bne	2abcd0 <acosh+0x12c>
        2abcc0:	e3a00008 	mov	r0, #8	; 0x8
        2abcc4:	eb641f4b 	bl	1bb39f8 <$feraiseexcept>
        2abcc8:	e3a00010 	mov	r0, #16	; 0x10
        2abccc:	eb641f49 	bl	1bb39f8 <$feraiseexcept>
        2abcd0:	e1a0000d 	mov	r0, sp
        2abcd4:	eb64234c 	bl	1bb4a0c <$feupdateenv>
        2abcd8:	ee008184 	mvfd	f0, f4
        2abcdc:	ed5b4209 	lfm	f4, 2, [fp, -#36]
        2abce0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: asin
 * Address: 002abce4
 */
void globals::asin() {
    /*
        2abce4:	e1a0c00d 	mov	ip, sp
        2abce8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2abcec:	e24cb004 	sub	fp, ip, #4	; 0x4
        2abcf0:	ed6d4206 	sfm	f4, 2, [sp, -#24]!
        2abcf4:	e92d0003 	stmdb	sp!, {r0, r1}
        2abcf8:	ecbdc102 	ldfd	f4, [sp], #8
        2abcfc:	e24dd004 	sub	sp, sp, #4	; 0x4
        2abd00:	ee108189 	mnfd	f0, #1.0
        2abd04:	eed4f110 	cmfe	f4, f0
        2abd08:	ba000001 	blt	2abd14 <asin+0x30>
        2abd0c:	eed4f119 	cmfe	f4, #1.0
        2abd10:	da000004 	ble	2abd28 <asin+0x44>
        2abd14:	e3a00001 	mov	r0, #1	; 0x1
        2abd18:	eb641f36 	bl	1bb39f8 <$feraiseexcept>
        2abd1c:	e3a00022 	mov	r0, #34	; 0x22
        2abd20:	eb01b464 	bl	318eb8 <NANsane>
        2abd24:	ea00002b 	b	2abdd8 <asin+0xf4>
        2abd28:	e1a0000d 	mov	r0, sp
        2abd2c:	eb641f30 	bl	1bb39f4 <$feholdexcept>
        2abd30:	ed2dc102 	stfd	f4, [sp, -#8]!
        2abd34:	e8bd0003 	ldmia	sp!, {r0, r1}
        2abd38:	eb641f27 	bl	1bb39dc <$fabs>
        2abd3c:	ee009189 	mvfd	f1, #1.0
        2abd40:	eed0f11e 	cmfe	f0, #0.5
        2abd44:	ce210180 	sufgtd	f0, f1, f0
        2abd48:	ce10118a 	mufgtd	f1, f0, #2.0
        2abd4c:	ee100180 	mufd	f0, f0, f0
        2abd50:	ee215180 	sufd	f5, f1, f0
        2abd54:	e3a00005 	mov	r0, #5	; 0x5
        2abd58:	eb641f21 	bl	1bb39e4 <$feclearexcept>
        2abd5c:	ed2dd102 	stfd	f5, [sp, -#8]!
        2abd60:	e8bd0003 	ldmia	sp!, {r0, r1}
        2abd64:	eb64274b 	bl	1bb5a98 <$sqrt>
        2abd68:	ee440180 	dvfd	f0, f4, f0
        2abd6c:	ed2d8102 	stfd	f0, [sp, -#8]!
        2abd70:	e8bd0003 	ldmia	sp!, {r0, r1}
        2abd74:	eb641f07 	bl	1bb3998 <$atan>
        2abd78:	ee00c180 	mvfd	f4, f0
        2abd7c:	e3a00001 	mov	r0, #1	; 0x1
        2abd80:	eb642320 	bl	1bb4a08 <$fetestexcept>
        2abd84:	e3300000 	teq	r0, #0	; 0x0
        2abd88:	0a000002 	beq	2abd98 <asin+0xb4>
        2abd8c:	e3a00022 	mov	r0, #34	; 0x22
        2abd90:	eb01b448 	bl	318eb8 <NANsane>
        2abd94:	ee00c180 	mvfd	f4, f0
        2abd98:	e3a0001a 	mov	r0, #26	; 0x1a
        2abd9c:	eb641f10 	bl	1bb39e4 <$feclearexcept>
        2abda0:	ed2dc102 	stfd	f4, [sp, -#8]!
        2abda4:	e8bd0003 	ldmia	sp!, {r0, r1}
        2abda8:	eb655d0c 	bl	1c031e0 <$__fpclassifyd>
        2abdac:	e3300003 	teq	r0, #3	; 0x3
        2abdb0:	0a000003 	beq	2abdc4 <asin+0xe0>
        2abdb4:	e3300004 	teq	r0, #4	; 0x4
        2abdb8:	1a000003 	bne	2abdcc <asin+0xe8>
        2abdbc:	e3a00008 	mov	r0, #8	; 0x8
        2abdc0:	eb641f0c 	bl	1bb39f8 <$feraiseexcept>
        2abdc4:	e3a00010 	mov	r0, #16	; 0x10
        2abdc8:	eb641f0a 	bl	1bb39f8 <$feraiseexcept>
        2abdcc:	e1a0000d 	mov	r0, sp
        2abdd0:	eb64230d 	bl	1bb4a0c <$feupdateenv>
        2abdd4:	ee008184 	mvfd	f0, f4
        2abdd8:	ed5b4209 	lfm	f4, 2, [fp, -#36]
        2abddc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: acos
 * Address: 002abde0
 */
void globals::acos() {
    /*
        2abde0:	e1a0c00d 	mov	ip, sp
        2abde4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2abde8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2abdec:	ed2dc203 	sfm	f4, 1, [sp, -#12]!
        2abdf0:	e92d0003 	stmdb	sp!, {r0, r1}
        2abdf4:	ecbdc102 	ldfd	f4, [sp], #8
        2abdf8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2abdfc:	ee108189 	mnfd	f0, #1.0
        2abe00:	eed4f110 	cmfe	f4, f0
        2abe04:	ba000001 	blt	2abe10 <acos+0x30>
        2abe08:	eed4f119 	cmfe	f4, #1.0
        2abe0c:	da000004 	ble	2abe24 <acos+0x44>
        2abe10:	e3a00001 	mov	r0, #1	; 0x1
        2abe14:	eb641ef7 	bl	1bb39f8 <$feraiseexcept>
        2abe18:	e3a00022 	mov	r0, #34	; 0x22
        2abe1c:	eb01b425 	bl	318eb8 <NANsane>
        2abe20:	ea000023 	b	2abeb4 <acos+0xd4>
        2abe24:	e1a0000d 	mov	r0, sp
        2abe28:	eb641ef1 	bl	1bb39f4 <$feholdexcept>
        2abe2c:	ee008189 	mvfd	f0, #1.0
        2abe30:	ee200184 	sufd	f0, f0, f4
        2abe34:	ee041189 	adfd	f1, f4, #1.0
        2abe38:	ee400181 	dvfd	f0, f0, f1
        2abe3c:	ed2d8102 	stfd	f0, [sp, -#8]!
        2abe40:	e8bd0003 	ldmia	sp!, {r0, r1}
        2abe44:	eb642713 	bl	1bb5a98 <$sqrt>
        2abe48:	ed2d8102 	stfd	f0, [sp, -#8]!
        2abe4c:	e8bd0003 	ldmia	sp!, {r0, r1}
        2abe50:	eb641ed0 	bl	1bb3998 <$atan>
        2abe54:	ee10418a 	mufd	f4, f0, #2.0
        2abe58:	e3a00001 	mov	r0, #1	; 0x1
        2abe5c:	eb6422e9 	bl	1bb4a08 <$fetestexcept>
        2abe60:	e3300000 	teq	r0, #0	; 0x0
        2abe64:	0a000002 	beq	2abe74 <acos+0x94>
        2abe68:	e3a00022 	mov	r0, #34	; 0x22
        2abe6c:	eb01b411 	bl	318eb8 <NANsane>
        2abe70:	ee00c180 	mvfd	f4, f0
        2abe74:	e3a0001a 	mov	r0, #26	; 0x1a
        2abe78:	eb641ed9 	bl	1bb39e4 <$feclearexcept>
        2abe7c:	ed2dc102 	stfd	f4, [sp, -#8]!
        2abe80:	e8bd0003 	ldmia	sp!, {r0, r1}
        2abe84:	eb655cd5 	bl	1c031e0 <$__fpclassifyd>
        2abe88:	e3300003 	teq	r0, #3	; 0x3
        2abe8c:	0a000003 	beq	2abea0 <acos+0xc0>
        2abe90:	e3300004 	teq	r0, #4	; 0x4
        2abe94:	1a000003 	bne	2abea8 <acos+0xc8>
        2abe98:	e3a00008 	mov	r0, #8	; 0x8
        2abe9c:	eb641ed5 	bl	1bb39f8 <$feraiseexcept>
        2abea0:	e3a00010 	mov	r0, #16	; 0x10
        2abea4:	eb641ed3 	bl	1bb39f8 <$feraiseexcept>
        2abea8:	e1a0000d 	mov	r0, sp
        2abeac:	eb6422d6 	bl	1bb4a0c <$feupdateenv>
        2abeb0:	ee008184 	mvfd	f0, f4
        2abeb4:	ed1bc206 	lfm	f4, 1, [fp, -#24]
        2abeb8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: atan2
 * Address: 002abebc
 */
void globals::atan2() {
    /*
        2abebc:	e1a0c00d 	mov	ip, sp
        2abec0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2abec4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2abec8:	ed6dc209 	sfm	f4, 3, [sp, -#36]!
        2abecc:	e92d0003 	stmdb	sp!, {r0, r1}
        2abed0:	ecbde102 	ldfd	f6, [sp], #8
        2abed4:	e92d000c 	stmdb	sp!, {r2, r3}
        2abed8:	ecbdd102 	ldfd	f5, [sp], #8
        2abedc:	e24dd004 	sub	sp, sp, #4	; 0x4
        2abee0:	e1a0000d 	mov	r0, sp
        2abee4:	eb641ec2 	bl	1bb39f4 <$feholdexcept>
        2abee8:	e59f4018 	ldr	r4, [pc, #18]	; 2abf08 <atan2+0x4c>
        2abeec:	ee95f118 	cmf	f5, #0.0
        2abef0:	1a000005 	bne	2abf0c <atan2+0x50>
        2abef4:	ee96f118 	cmf	f6, #0.0
        2abef8:	1d948100 	ldfned	f0, [r4]
        2abefc:	1e10418e 	mufned	f4, f0, #0.5
        2abf00:	0e00c188 	mvfeqd	f4, #0.0
        2abf04:	ea000017 	b	2abf68 <atan2+0xac>
        2abf08:	00380798 	mlaeqs	r8, r8, r7, r0
        2abf0c:	ee460185 	dvfd	f0, f6, f5
        2abf10:	ed2d8102 	stfd	f0, [sp, -#8]!
        2abf14:	e8bd0003 	ldmia	sp!, {r0, r1}
        2abf18:	eb641eaf 	bl	1bb39dc <$fabs>
        2abf1c:	ed2d8102 	stfd	f0, [sp, -#8]!
        2abf20:	e8bd0003 	ldmia	sp!, {r0, r1}
        2abf24:	eb641e9b 	bl	1bb3998 <$atan>
        2abf28:	ee00c180 	mvfd	f4, f0
        2abf2c:	e3a00001 	mov	r0, #1	; 0x1
        2abf30:	eb6422b4 	bl	1bb4a08 <$fetestexcept>
        2abf34:	e3300000 	teq	r0, #0	; 0x0
        2abf38:	0a000002 	beq	2abf48 <atan2+0x8c>
        2abf3c:	e3a00022 	mov	r0, #34	; 0x22
        2abf40:	eb01b3dc 	bl	318eb8 <NANsane>
        2abf44:	ee00c180 	mvfd	f4, f0
        2abf48:	e3a00004 	mov	r0, #4	; 0x4
        2abf4c:	eb641ea4 	bl	1bb39e4 <$feclearexcept>
        2abf50:	ed2dd102 	stfd	f5, [sp, -#8]!
        2abf54:	e8bd0003 	ldmia	sp!, {r0, r1}
        2abf58:	eb655ca6 	bl	1c031f8 <$__signbitd>
        2abf5c:	e3300000 	teq	r0, #0	; 0x0
        2abf60:	1d948100 	ldfned	f0, [r4]
        2abf64:	1e204184 	sufned	f4, f0, f4
        2abf68:	ed2dd102 	stfd	f5, [sp, -#8]!
        2abf6c:	e8bd0003 	ldmia	sp!, {r0, r1}
        2abf70:	eb655c9a 	bl	1c031e0 <$__fpclassifyd>
        2abf74:	e3300003 	teq	r0, #3	; 0x3
        2abf78:	0a000003 	beq	2abf8c <atan2+0xd0>
        2abf7c:	e3300004 	teq	r0, #4	; 0x4
        2abf80:	1a000003 	bne	2abf94 <atan2+0xd8>
        2abf84:	e3a00008 	mov	r0, #8	; 0x8
        2abf88:	eb641e9a 	bl	1bb39f8 <$feraiseexcept>
        2abf8c:	e3a00010 	mov	r0, #16	; 0x10
        2abf90:	eb641e98 	bl	1bb39f8 <$feraiseexcept>
        2abf94:	e1a0000d 	mov	r0, sp
        2abf98:	eb64229b 	bl	1bb4a0c <$feupdateenv>
        2abf9c:	ed2de102 	stfd	f6, [sp, -#8]!
        2abfa0:	ed2dc102 	stfd	f4, [sp, -#8]!
        2abfa4:	e8bd000f 	ldmia	sp!, {r0, r1, r2, r3}
        2abfa8:	eb641e83 	bl	1bb39bc <$copysign>
        2abfac:	ed5bc20d 	lfm	f4, 3, [fp, -#52]
        2abfb0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: AllocateCObjectBinary__FPvPFPv_vN22
 * Address: 002abfb4
 */
void globals::AllocateCObjectBinary() {
    /*
        2abfb4:	e1a0c00d 	mov	ip, sp
        2abfb8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2abfbc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2abfc0:	e1a07000 	mov	r7, r0
        2abfc4:	e1a06001 	mov	r6, r1
        2abfc8:	e1a05002 	mov	r5, r2
        2abfcc:	e1a04003 	mov	r4, r3
        2abfd0:	e59f1034 	ldr	r1, [pc, #34]	; 2ac00c <AllocateCObjectBinary__FPvPFPv_vN22+0x58>
        2abfd4:	e59f0034 	ldr	r0, [pc, #34]	; 2ac010 <AllocateCObjectBinary__FPvPFPv_vN22+0x5c>
        2abfd8:	e5900000 	ldr	r0, [r0]
        2abfdc:	e3a02010 	mov	r2, #16	; 0x10
        2abfe0:	eb657d76 	bl	1c0b5c0 <TObjectHeap::$AllocateIndirectBinary(RefVar const &, long)>
        2abfe4:	e1a08000 	mov	r8, r0
        2abfe8:	eb6464c1 	bl	1bc52f4 <$ObjectPtr(long)>
        2abfec:	e59f1020 	ldr	r1, [pc, #20]	; 2ac014 <AllocateCObjectBinary__FPvPFPv_vN22+0x60>
        2abff0:	e2800008 	add	r0, r0, #8	; 0x8
        2abff4:	e9a00082 	stmib	r0!, {r1, r7}
        2abff8:	e5806004 	str	r6, [r0, #4]
        2abffc:	e5805008 	str	r5, [r0, #8]
        2ac000:	e580400c 	str	r4, [r0, #12]
        2ac004:	e1a00008 	mov	r0, r8
        2ac008:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2ac00c:	006824b8 	streqh	r2, [r8], -#72
        2ac010:	0c105548 	ldceq	5, cr5, [r0], -#288
        2ac014:	0c105158 	ldfeqs	f5, [r0], -#352
    */
}

/**
 * Symbol: AllocateFramesCObject__FlPFPv_vN22
 * Address: 002ac018
 */
void globals::AllocateFramesCObject() {
    /*
        2ac018:	e1a0c00d 	mov	ip, sp
        2ac01c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2ac020:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ac024:	e1a06001 	mov	r6, r1
        2ac028:	e1a05002 	mov	r5, r2
        2ac02c:	e1a04003 	mov	r4, r3
        2ac030:	e2802010 	add	r2, r0, #16	; 0x10
        2ac034:	e59f103c 	ldr	r1, [pc, #3c]	; 2ac078 <AllocateFramesCObject__FlPFPv_vN22+0x60>
        2ac038:	e59f003c 	ldr	r0, [pc, #3c]	; 2ac07c <AllocateFramesCObject__FlPFPv_vN22+0x64>
        2ac03c:	e5900000 	ldr	r0, [r0]
        2ac040:	eb657d5e 	bl	1c0b5c0 <TObjectHeap::$AllocateIndirectBinary(RefVar const &, long)>
        2ac044:	e1a07000 	mov	r7, r0
        2ac048:	eb646499 	bl	1bc52b4 <$LockRef(long)>
        2ac04c:	e1a00007 	mov	r0, r7
        2ac050:	eb6464a7 	bl	1bc52f4 <$ObjectPtr(long)>
        2ac054:	e59f1024 	ldr	r1, [pc, #24]	; 2ac080 <AllocateFramesCObject__FlPFPv_vN22+0x68>
        2ac058:	e5a0100c 	str	r1, [r0, #12]!
        2ac05c:	e2800004 	add	r0, r0, #4	; 0x4
        2ac060:	e2801010 	add	r1, r0, #16	; 0x10
        2ac064:	e8800042 	stmia	r0, {r1, r6}
        2ac068:	e5805008 	str	r5, [r0, #8]
        2ac06c:	e580400c 	str	r4, [r0, #12]
        2ac070:	e1a00007 	mov	r0, r7
        2ac074:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2ac078:	006824b8 	streqh	r2, [r8], -#72
        2ac07c:	0c105548 	ldceq	5, cr5, [r0], -#288
        2ac080:	0c105158 	ldfeqs	f5, [r0], -#352
    */
}

/**
 * Symbol: AdjustZZ_BegEnd(low_type *)
 * Address: 002b377c
 */
AdjustZZ_BegEnd(low_type *) {
    /*
        2b377c:	e92d40f0 	stmdb	sp!, {r4, r5, r6, r7, lr}
        2b3780:	e5904038 	ldr	r4, [r0, #56]
        2b3784:	e590e040 	ldr	lr, [r0, #64]
        2b3788:	e59e100c 	ldr	r1, [lr, #12]
        2b378c:	e3310000 	teq	r1, #0	; 0x0
        2b3790:	08bd80f0 	ldmeqia	sp!, {r4, r5, r6, r7, pc}
        2b3794:	e5915010 	ldr	r5, [r1, #16]
        2b3798:	e135000e 	teq	r5, lr
        2b379c:	1591c00c 	ldrne	ip, [r1, #12]
        2b37a0:	133c0000 	teqne	ip, #0	; 0x0
        2b37a4:	0a000051 	beq	2b38f0 <AdjustZZ_BegEnd(low_type *)+0x174>
        2b37a8:	e5d12001 	ldrb	r2, [r1, #1]
        2b37ac:	e3320012 	teq	r2, #18	; 0x12
        2b37b0:	13320001 	teqne	r2, #1	; 0x1
        2b37b4:	13320013 	teqne	r2, #19	; 0x13
        2b37b8:	13320014 	teqne	r2, #20	; 0x14
        2b37bc:	1a00004b 	bne	2b38f0 <AdjustZZ_BegEnd(low_type *)+0x174>
        2b37c0:	ea00000d 	b	2b37fc <AdjustZZ_BegEnd(low_type *)+0x80>
        2b37c4:	e5d52001 	ldrb	r2, [r5, #1]
        2b37c8:	e332000d 	teq	r2, #13	; 0xd
        2b37cc:	13320010 	teqne	r2, #16	; 0x10
        2b37d0:	1a00000c 	bne	2b3808 <AdjustZZ_BegEnd(low_type *)+0x8c>
        2b37d4:	e5953010 	ldr	r3, [r5, #16]
        2b37d8:	e3330000 	teq	r3, #0	; 0x0
        2b37dc:	1133000e 	teqne	r3, lr
        2b37e0:	15d32001 	ldrneb	r2, [r3, #1]
        2b37e4:	13320012 	teqne	r2, #18	; 0x12
        2b37e8:	13320001 	teqne	r2, #1	; 0x1
        2b37ec:	13320013 	teqne	r2, #19	; 0x13
        2b37f0:	13320014 	teqne	r2, #20	; 0x14
        2b37f4:	0a000003 	beq	2b3808 <AdjustZZ_BegEnd(low_type *)+0x8c>
        2b37f8:	e1a05003 	mov	r5, r3
        2b37fc:	e3350000 	teq	r5, #0	; 0x0
        2b3800:	1135000e 	teqne	r5, lr
        2b3804:	1affffee 	bne	2b37c4 <AdjustZZ_BegEnd(low_type *)+0x48>
        2b3808:	e33c0000 	teq	ip, #0	; 0x0
        2b380c:	0a00000c 	beq	2b3844 <AdjustZZ_BegEnd(low_type *)+0xc8>
        2b3810:	e5dc2001 	ldrb	r2, [ip, #1]
        2b3814:	e332000d 	teq	r2, #13	; 0xd
        2b3818:	13320010 	teqne	r2, #16	; 0x10
        2b381c:	1a000008 	bne	2b3844 <AdjustZZ_BegEnd(low_type *)+0xc8>
        2b3820:	e59c300c 	ldr	r3, [ip, #12]
        2b3824:	e3330000 	teq	r3, #0	; 0x0
        2b3828:	15d32001 	ldrneb	r2, [r3, #1]
        2b382c:	13320012 	teqne	r2, #18	; 0x12
        2b3830:	13320001 	teqne	r2, #1	; 0x1
        2b3834:	13320013 	teqne	r2, #19	; 0x13
        2b3838:	13320014 	teqne	r2, #20	; 0x14
        2b383c:	11a0c003 	movne	ip, r3
        2b3840:	1afffff2 	bne	2b3810 <AdjustZZ_BegEnd(low_type *)+0x94>
        2b3844:	e5913004 	ldr	r3, [r1, #4]
        2b3848:	e1a03843 	mov	r3, r3, asr #16
        2b384c:	e5912006 	ldr	r2, [r1, #6]
        2b3850:	e1a02842 	mov	r2, r2, asr #16
        2b3854:	e3350000 	teq	r5, #0	; 0x0
        2b3858:	1135000e 	teqne	r5, lr
        2b385c:	0a00000e 	beq	2b389c <AdjustZZ_BegEnd(low_type *)+0x120>
        2b3860:	e5953006 	ldr	r3, [r5, #6]
        2b3864:	e1a03843 	mov	r3, r3, asr #16
        2b3868:	e590603c 	ldr	r6, [r0, #60]
        2b386c:	e1a06846 	mov	r6, r6, asr #16
        2b3870:	ea000001 	b	2b387c <AdjustZZ_BegEnd(low_type *)+0x100>
        2b3874:	e1a03805 	mov	r3, r5, lsl #16
        2b3878:	e1a03843 	mov	r3, r3, asr #16
        2b387c:	e2835001 	add	r5, r3, #1	; 0x1
        2b3880:	e1550006 	cmp	r5, r6
        2b3884:	aa000004 	bge	2b389c <AdjustZZ_BegEnd(low_type *)+0x120>
        2b3888:	e0847083 	add	r7, r4, r3, lsl #1
        2b388c:	e5977002 	ldr	r7, [r7, #2]
        2b3890:	e1a07847 	mov	r7, r7, asr #16
        2b3894:	e3770001 	cmn	r7, #1	; 0x1
        2b3898:	1afffff5 	bne	2b3874 <AdjustZZ_BegEnd(low_type *)+0xf8>
        2b389c:	e33c0000 	teq	ip, #0	; 0x0
        2b38a0:	159c2004 	ldrne	r2, [ip, #4]
        2b38a4:	11a02842 	movne	r2, r2, asr #16
        2b38a8:	1a000003 	bne	2b38bc <AdjustZZ_BegEnd(low_type *)+0x140>
        2b38ac:	ea000009 	b	2b38d8 <AdjustZZ_BegEnd(low_type *)+0x15c>
        2b38b0:	e2422001 	sub	r2, r2, #1	; 0x1
        2b38b4:	e1a02802 	mov	r2, r2, lsl #16
        2b38b8:	e1a02842 	mov	r2, r2, asr #16
        2b38bc:	e3520000 	cmp	r2, #0	; 0x0
        2b38c0:	da000004 	ble	2b38d8 <AdjustZZ_BegEnd(low_type *)+0x15c>
        2b38c4:	e084c082 	add	ip, r4, r2, lsl #1
        2b38c8:	e51cc002 	ldr	ip, [ip, -#2]
        2b38cc:	e1a0c84c 	mov	ip, ip, asr #16
        2b38d0:	e37c0001 	cmn	ip, #1	; 0x1
        2b38d4:	1afffff5 	bne	2b38b0 <AdjustZZ_BegEnd(low_type *)+0x134>
        2b38d8:	e5c13005 	strb	r3, [r1, #5]
        2b38dc:	e1a03443 	mov	r3, r3, asr #8
        2b38e0:	e5c13004 	strb	r3, [r1, #4]
        2b38e4:	e5c12007 	strb	r2, [r1, #7]
        2b38e8:	e1a02442 	mov	r2, r2, asr #8
        2b38ec:	e5c12006 	strb	r2, [r1, #6]
        2b38f0:	e591100c 	ldr	r1, [r1, #12]
        2b38f4:	e3310000 	teq	r1, #0	; 0x0
        2b38f8:	1affffa5 	bne	2b3794 <AdjustZZ_BegEnd(low_type *)+0x18>
        2b38fc:	e8bd80f0 	ldmia	sp!, {r4, r5, r6, r7, pc}
    */
}

/**
 * Symbol: AllocatePT1(int, RefVar const &)
 * Address: 002bf984
 */
AllocatePT1(int, RefVar const &) {
    /*
        2bf984:	e1a0c00d 	mov	ip, sp
        2bf988:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2bf98c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2bf990:	e1a05000 	mov	r5, r0
        2bf994:	e1a04001 	mov	r4, r1
        2bf998:	e59f0058 	ldr	r0, [pc, #58]	; 2bf9f8 <AllocatePT1(int, RefVar const &)+0x74>
        2bf99c:	e3a01002 	mov	r1, #2	; 0x2
        2bf9a0:	eb6409e4 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        2bf9a4:	eb6409e8 	bl	1bc214c <$AllocateRefHandle(long)>
        2bf9a8:	e1a06000 	mov	r6, r0
        2bf9ac:	e1a00105 	mov	r0, r5, lsl #2
        2bf9b0:	eb6409e5 	bl	1bc214c <$AllocateRefHandle(long)>
        2bf9b4:	e1a05000 	mov	r5, r0
        2bf9b8:	e5902000 	ldr	r2, [r0]
        2bf9bc:	e3a01000 	mov	r1, #0	; 0x0
        2bf9c0:	e5960000 	ldr	r0, [r6]
        2bf9c4:	eb641a63 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2bf9c8:	e1a00005 	mov	r0, r5
        2bf9cc:	eb640dfa 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2bf9d0:	e5940000 	ldr	r0, [r4]
        2bf9d4:	e5902000 	ldr	r2, [r0]
        2bf9d8:	e3a01001 	mov	r1, #1	; 0x1
        2bf9dc:	e5960000 	ldr	r0, [r6]
        2bf9e0:	eb641a5c 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2bf9e4:	e5964000 	ldr	r4, [r6]
        2bf9e8:	e1a00006 	mov	r0, r6
        2bf9ec:	eb640df2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2bf9f0:	e1a00004 	mov	r0, r4
        2bf9f4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2bf9f8:	00681f10 	rsbeq	r1, r8, r0, lsl pc
    */
}

/**
 * Symbol: AllocatePT2__FiRC6RefVarT2
 * Address: 002c010c
 */
void globals::AllocatePT2() {
    /*
        2c010c:	e1a0c00d 	mov	ip, sp
        2c0110:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2c0114:	e24cb004 	sub	fp, ip, #4	; 0x4
        2c0118:	e1a06000 	mov	r6, r0
        2c011c:	e1a05001 	mov	r5, r1
        2c0120:	e1a04002 	mov	r4, r2
        2c0124:	e59f006c 	ldr	r0, [pc, #6c]	; 2c0198 <AllocatePT2__FiRC6RefVarT2+0x8c>
        2c0128:	e3a01003 	mov	r1, #3	; 0x3
        2c012c:	eb640801 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        2c0130:	eb640805 	bl	1bc214c <$AllocateRefHandle(long)>
        2c0134:	e1a07000 	mov	r7, r0
        2c0138:	e1a00106 	mov	r0, r6, lsl #2
        2c013c:	eb640802 	bl	1bc214c <$AllocateRefHandle(long)>
        2c0140:	e1a06000 	mov	r6, r0
        2c0144:	e5902000 	ldr	r2, [r0]
        2c0148:	e3a01000 	mov	r1, #0	; 0x0
        2c014c:	e5970000 	ldr	r0, [r7]
        2c0150:	eb641880 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c0154:	e1a00006 	mov	r0, r6
        2c0158:	eb640c17 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c015c:	e5950000 	ldr	r0, [r5]
        2c0160:	e5902000 	ldr	r2, [r0]
        2c0164:	e3a01001 	mov	r1, #1	; 0x1
        2c0168:	e5970000 	ldr	r0, [r7]
        2c016c:	eb641879 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c0170:	e5940000 	ldr	r0, [r4]
        2c0174:	e5902000 	ldr	r2, [r0]
        2c0178:	e3a01002 	mov	r1, #2	; 0x2
        2c017c:	e5970000 	ldr	r0, [r7]
        2c0180:	eb641874 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c0184:	e5974000 	ldr	r4, [r7]
        2c0188:	e1a00007 	mov	r0, r7
        2c018c:	eb640c0a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c0190:	e1a00004 	mov	r0, r4
        2c0194:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2c0198:	00681f10 	rsbeq	r1, r8, r0, lsl pc
    */
}

/**
 * Symbol: AllocatePT3__FiRC6RefVarN22
 * Address: 002c0a5c
 */
void globals::AllocatePT3() {
    /*
        2c0a5c:	e1a0c00d 	mov	ip, sp
        2c0a60:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2c0a64:	e24cb004 	sub	fp, ip, #4	; 0x4
        2c0a68:	e1a07000 	mov	r7, r0
        2c0a6c:	e1a06001 	mov	r6, r1
        2c0a70:	e1a05002 	mov	r5, r2
        2c0a74:	e1a04003 	mov	r4, r3
        2c0a78:	e59f0080 	ldr	r0, [pc, #80]	; 2c0b00 <AllocatePT3__FiRC6RefVarN22+0xa4>
        2c0a7c:	e3a01004 	mov	r1, #4	; 0x4
        2c0a80:	eb6405ac 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        2c0a84:	eb6405b0 	bl	1bc214c <$AllocateRefHandle(long)>
        2c0a88:	e1a08000 	mov	r8, r0
        2c0a8c:	e1a00107 	mov	r0, r7, lsl #2
        2c0a90:	eb6405ad 	bl	1bc214c <$AllocateRefHandle(long)>
        2c0a94:	e1a07000 	mov	r7, r0
        2c0a98:	e5902000 	ldr	r2, [r0]
        2c0a9c:	e3a01000 	mov	r1, #0	; 0x0
        2c0aa0:	e5980000 	ldr	r0, [r8]
        2c0aa4:	eb64162b 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c0aa8:	e1a00007 	mov	r0, r7
        2c0aac:	eb6409c2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c0ab0:	e5960000 	ldr	r0, [r6]
        2c0ab4:	e5902000 	ldr	r2, [r0]
        2c0ab8:	e3a01001 	mov	r1, #1	; 0x1
        2c0abc:	e5980000 	ldr	r0, [r8]
        2c0ac0:	eb641624 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c0ac4:	e5950000 	ldr	r0, [r5]
        2c0ac8:	e5902000 	ldr	r2, [r0]
        2c0acc:	e3a01002 	mov	r1, #2	; 0x2
        2c0ad0:	e5980000 	ldr	r0, [r8]
        2c0ad4:	eb64161f 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c0ad8:	e5940000 	ldr	r0, [r4]
        2c0adc:	e5902000 	ldr	r2, [r0]
        2c0ae0:	e3a01003 	mov	r1, #3	; 0x3
        2c0ae4:	e5980000 	ldr	r0, [r8]
        2c0ae8:	eb64161a 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c0aec:	e5984000 	ldr	r4, [r8]
        2c0af0:	e1a00008 	mov	r0, r8
        2c0af4:	eb6409b0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c0af8:	e1a00004 	mov	r0, r4
        2c0afc:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2c0b00:	00681f10 	rsbeq	r1, r8, r0, lsl pc
    */
}

/**
 * Symbol: AllocatePT5__FiRC6RefVarN42
 * Address: 002c1d90
 */
void globals::AllocatePT5() {
    /*
        2c1d90:	e1a0c00d 	mov	ip, sp
        2c1d94:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2c1d98:	e24cb004 	sub	fp, ip, #4	; 0x4
        2c1d9c:	e1a07000 	mov	r7, r0
        2c1da0:	e1a06001 	mov	r6, r1
        2c1da4:	e1a05002 	mov	r5, r2
        2c1da8:	e1a04003 	mov	r4, r3
        2c1dac:	e59b9008 	ldr	r9, [fp, #8]
        2c1db0:	e59ba004 	ldr	sl, [fp, #4]
        2c1db4:	e59f00a8 	ldr	r0, [pc, #a8]	; 2c1e64 <AllocatePT5__FiRC6RefVarN42+0xd4>
        2c1db8:	e3a01006 	mov	r1, #6	; 0x6
        2c1dbc:	eb6400dd 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        2c1dc0:	eb6400e1 	bl	1bc214c <$AllocateRefHandle(long)>
        2c1dc4:	e1a08000 	mov	r8, r0
        2c1dc8:	e1a00107 	mov	r0, r7, lsl #2
        2c1dcc:	eb6400de 	bl	1bc214c <$AllocateRefHandle(long)>
        2c1dd0:	e1a07000 	mov	r7, r0
        2c1dd4:	e5902000 	ldr	r2, [r0]
        2c1dd8:	e3a01000 	mov	r1, #0	; 0x0
        2c1ddc:	e5980000 	ldr	r0, [r8]
        2c1de0:	eb64115c 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c1de4:	e1a00007 	mov	r0, r7
        2c1de8:	eb6404f3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c1dec:	e5960000 	ldr	r0, [r6]
        2c1df0:	e5902000 	ldr	r2, [r0]
        2c1df4:	e3a01001 	mov	r1, #1	; 0x1
        2c1df8:	e5980000 	ldr	r0, [r8]
        2c1dfc:	eb641155 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c1e00:	e5950000 	ldr	r0, [r5]
        2c1e04:	e5902000 	ldr	r2, [r0]
        2c1e08:	e3a01002 	mov	r1, #2	; 0x2
        2c1e0c:	e5980000 	ldr	r0, [r8]
        2c1e10:	eb641150 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c1e14:	e5940000 	ldr	r0, [r4]
        2c1e18:	e5902000 	ldr	r2, [r0]
        2c1e1c:	e3a01003 	mov	r1, #3	; 0x3
        2c1e20:	e5980000 	ldr	r0, [r8]
        2c1e24:	eb64114b 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c1e28:	e59a0000 	ldr	r0, [sl]
        2c1e2c:	e5902000 	ldr	r2, [r0]
        2c1e30:	e3a01004 	mov	r1, #4	; 0x4
        2c1e34:	e5980000 	ldr	r0, [r8]
        2c1e38:	eb641146 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c1e3c:	e5990000 	ldr	r0, [r9]
        2c1e40:	e5902000 	ldr	r2, [r0]
        2c1e44:	e3a01005 	mov	r1, #5	; 0x5
        2c1e48:	e5980000 	ldr	r0, [r8]
        2c1e4c:	eb641141 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2c1e50:	e5984000 	ldr	r4, [r8]
        2c1e54:	e1a00008 	mov	r0, r8
        2c1e58:	eb6404d7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c1e5c:	e1a00004 	mov	r0, r4
        2c1e60:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2c1e64:	00681f10 	rsbeq	r1, r8, r0, lsl pc
    */
}

/**
 * Symbol: AssignInputPenaltyAndStrict(SPEC_TYPE *, xrd_el_type *)
 * Address: 002c854c
 */
AssignInputPenaltyAndStrict(SPEC_TYPE *, xrd_el_type *) {
    /*
        2c854c:	e1a0c00d 	mov	ip, sp
        2c8550:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2c8554:	e24cb004 	sub	fp, ip, #4	; 0x4
        2c8558:	e1a05000 	mov	r5, r0
        2c855c:	e1a04001 	mov	r4, r1
        2c8560:	e5d11003 	ldrb	r1, [r1, #3]
        2c8564:	e5d02001 	ldrb	r2, [r0, #1]
        2c8568:	e3320028 	teq	r2, #40	; 0x28
        2c856c:	13320029 	teqne	r2, #41	; 0x29
        2c8570:	1a000001 	bne	2c857c <AssignInputPenaltyAndStrict(SPEC_TYPE *, xrd_el_type *)+0x30>
        2c8574:	e5d50003 	ldrb	r0, [r5, #3]
        2c8578:	ea000023 	b	2c860c <AssignInputPenaltyAndStrict(SPEC_TYPE *, xrd_el_type *)+0xc0>
        2c857c:	e332000e 	teq	r2, #14	; 0xe
        2c8580:	13320011 	teqne	r2, #17	; 0x11
        2c8584:	1a000003 	bne	2c8598 <AssignInputPenaltyAndStrict(SPEC_TYPE *, xrd_el_type *)+0x4c>
        2c8588:	e595000a 	ldr	r0, [r5, #10]
        2c858c:	e1a00840 	mov	r0, r0, asr #16
        2c8590:	e3700002 	cmn	r0, #2	; 0x2
        2c8594:	1a00001c 	bne	2c860c <AssignInputPenaltyAndStrict(SPEC_TYPE *, xrd_el_type *)+0xc0>
        2c8598:	e3320023 	teq	r2, #35	; 0x23
        2c859c:	13320024 	teqne	r2, #36	; 0x24
        2c85a0:	0afffff3 	beq	2c8574 <AssignInputPenaltyAndStrict(SPEC_TYPE *, xrd_el_type *)+0x28>
        2c85a4:	e3a00000 	mov	r0, #0	; 0x0
        2c85a8:	e3320014 	teq	r2, #20	; 0x14
        2c85ac:	1a000005 	bne	2c85c8 <AssignInputPenaltyAndStrict(SPEC_TYPE *, xrd_el_type *)+0x7c>
        2c85b0:	e5d52003 	ldrb	r2, [r5, #3]
        2c85b4:	e3120008 	tst	r2, #8	; 0x8
        2c85b8:	02022002 	andeq	r2, r2, #2	; 0x2
        2c85bc:	03320000 	teqeq	r2, #0	; 0x0
        2c85c0:	0a000013 	beq	2c8614 <AssignInputPenaltyAndStrict(SPEC_TYPE *, xrd_el_type *)+0xc8>
        2c85c4:	ea000010 	b	2c860c <AssignInputPenaltyAndStrict(SPEC_TYPE *, xrd_el_type *)+0xc0>
        2c85c8:	e332000d 	teq	r2, #13	; 0xd
        2c85cc:	1a000004 	bne	2c85e4 <AssignInputPenaltyAndStrict(SPEC_TYPE *, xrd_el_type *)+0x98>
        2c85d0:	e5d52003 	ldrb	r2, [r5, #3]
        2c85d4:	e3120008 	tst	r2, #8	; 0x8
        2c85d8:	13a00002 	movne	r0, #2	; 0x2
        2c85dc:	1a00000a 	bne	2c860c <AssignInputPenaltyAndStrict(SPEC_TYPE *, xrd_el_type *)+0xc0>
        2c85e0:	ea00000b 	b	2c8614 <AssignInputPenaltyAndStrict(SPEC_TYPE *, xrd_el_type *)+0xc8>
        2c85e4:	e3320003 	teq	r2, #3	; 0x3
        2c85e8:	13320007 	teqne	r2, #7	; 0x7
        2c85ec:	1332000a 	teqne	r2, #10	; 0xa
        2c85f0:	13320009 	teqne	r2, #9	; 0x9
        2c85f4:	1332000c 	teqne	r2, #12	; 0xc
        2c85f8:	1332000b 	teqne	r2, #11	; 0xb
        2c85fc:	1a000004 	bne	2c8614 <AssignInputPenaltyAndStrict(SPEC_TYPE *, xrd_el_type *)+0xc8>
        2c8600:	e5d52003 	ldrb	r2, [r5, #3]
        2c8604:	e3120008 	tst	r2, #8	; 0x8
        2c8608:	0a000001 	beq	2c8614 <AssignInputPenaltyAndStrict(SPEC_TYPE *, xrd_el_type *)+0xc8>
        2c860c:	e5c40002 	strb	r0, [r4, #2]
        2c8610:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2c8614:	e5d42000 	ldrb	r2, [r4]
        2c8618:	e3520040 	cmp	r2, #64	; 0x40
        2c861c:	b3510010 	cmplt	r1, #16	; 0x10
        2c8620:	aa00000e 	bge	2c8660 <AssignInputPenaltyAndStrict(SPEC_TYPE *, xrd_el_type *)+0x114>
        2c8624:	e59f0074 	ldr	r0, [pc, #74]	; 2c86a0 <AssignInputPenaltyAndStrict(SPEC_TYPE *, xrd_el_type *)+0x154>
        2c8628:	e7d00002 	ldrb	r0, [r0, r2]
        2c862c:	e5c40002 	strb	r0, [r4, #2]
        2c8630:	e5d50001 	ldrb	r0, [r5, #1]
        2c8634:	e3300010 	teq	r0, #16	; 0x10
        2c8638:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2c863c:	e330000e 	teq	r0, #14	; 0xe
        2c8640:	13300011 	teqne	r0, #17	; 0x11
        2c8644:	13300028 	teqne	r0, #40	; 0x28
        2c8648:	13300029 	teqne	r0, #41	; 0x29
        2c864c:	0a00002d 	beq	2c8708 <AssignInputPenaltyAndStrict(SPEC_TYPE *, xrd_el_type *)+0x1bc>
        2c8650:	e5d42002 	ldrb	r2, [r4, #2]
        2c8654:	e59f0048 	ldr	r0, [pc, #48]	; 2c86a4 <AssignInputPenaltyAndStrict(SPEC_TYPE *, xrd_el_type *)+0x158>
        2c8658:	e7d00001 	ldrb	r0, [r0, r1]
        2c865c:	e0820000 	add	r0, r2, r0
        2c8660:	e5c40002 	strb	r0, [r4, #2]
        2c8664:	e5d50001 	ldrb	r0, [r5, #1]
        2c8668:	e330000d 	teq	r0, #13	; 0xd
        2c866c:	1a00000d 	bne	2c86a8 <AssignInputPenaltyAndStrict(SPEC_TYPE *, xrd_el_type *)+0x15c>
        2c8670:	e5d50003 	ldrb	r0, [r5, #3]
        2c8674:	e3100002 	tst	r0, #2	; 0x2
        2c8678:	1a000017 	bne	2c86dc <AssignInputPenaltyAndStrict(SPEC_TYPE *, xrd_el_type *)+0x190>
        2c867c:	e3100004 	tst	r0, #4	; 0x4
        2c8680:	15950008 	ldrne	r0, [r5, #8]
        2c8684:	11a00840 	movne	r0, r0, asr #16
        2c8688:	13300000 	teqne	r0, #0	; 0x0
        2c868c:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2c8690:	e595000a 	ldr	r0, [r5, #10]
        2c8694:	e1b00840 	movs	r0, r0, asr #16
        2c8698:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2c869c:	ea00000e 	b	2c86dc <AssignInputPenaltyAndStrict(SPEC_TYPE *, xrd_el_type *)+0x190>
        2c86a0:	0037679c 	mlaeqs	r7, ip, r7, r6
        2c86a4:	003767dc 	ldreqsb	r6, [r7], -ip
        2c86a8:	e3300004 	teq	r0, #4	; 0x4
        2c86ac:	1a000004 	bne	2c86c4 <AssignInputPenaltyAndStrict(SPEC_TYPE *, xrd_el_type *)+0x178>
        2c86b0:	e5d50002 	ldrb	r0, [r5, #2]
        2c86b4:	e200000f 	and	r0, r0, #15	; 0xf
        2c86b8:	e3500002 	cmp	r0, #2	; 0x2
        2c86bc:	ca000011 	bgt	2c8708 <AssignInputPenaltyAndStrict(SPEC_TYPE *, xrd_el_type *)+0x1bc>
        2c86c0:	ea000005 	b	2c86dc <AssignInputPenaltyAndStrict(SPEC_TYPE *, xrd_el_type *)+0x190>
        2c86c4:	e3300006 	teq	r0, #6	; 0x6
        2c86c8:	1a000006 	bne	2c86e8 <AssignInputPenaltyAndStrict(SPEC_TYPE *, xrd_el_type *)+0x19c>
        2c86cc:	e5d50002 	ldrb	r0, [r5, #2]
        2c86d0:	e200000f 	and	r0, r0, #15	; 0xf
        2c86d4:	e350000c 	cmp	r0, #12	; 0xc
        2c86d8:	ba00000a 	blt	2c8708 <AssignInputPenaltyAndStrict(SPEC_TYPE *, xrd_el_type *)+0x1bc>
        2c86dc:	e5d40002 	ldrb	r0, [r4, #2]
        2c86e0:	e2800006 	add	r0, r0, #6	; 0x6
        2c86e4:	e5c40002 	strb	r0, [r4, #2]
        2c86e8:	e5d50001 	ldrb	r0, [r5, #1]
        2c86ec:	e3300012 	teq	r0, #18	; 0x12
        2c86f0:	13300001 	teqne	r0, #1	; 0x1
        2c86f4:	13300013 	teqne	r0, #19	; 0x13
        2c86f8:	13300014 	teqne	r0, #20	; 0x14
        2c86fc:	1330000d 	teqne	r0, #13	; 0xd
        2c8700:	13300010 	teqne	r0, #16	; 0x10
        2c8704:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2c8708:	e5951010 	ldr	r1, [r5, #16]
        2c870c:	e5d10001 	ldrb	r0, [r1, #1]
        2c8710:	e3300000 	teq	r0, #0	; 0x0
        2c8714:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2c8718:	ea000003 	b	2c872c <AssignInputPenaltyAndStrict(SPEC_TYPE *, xrd_el_type *)+0x1e0>
        2c871c:	e330000d 	teq	r0, #13	; 0xd
        2c8720:	13300010 	teqne	r0, #16	; 0x10
        2c8724:	1a000004 	bne	2c873c <AssignInputPenaltyAndStrict(SPEC_TYPE *, xrd_el_type *)+0x1f0>
        2c8728:	e5911010 	ldr	r1, [r1, #16]
        2c872c:	e3310000 	teq	r1, #0	; 0x0
        2c8730:	15d10001 	ldrneb	r0, [r1, #1]
        2c8734:	13300000 	teqne	r0, #0	; 0x0
        2c8738:	1afffff7 	bne	2c871c <AssignInputPenaltyAndStrict(SPEC_TYPE *, xrd_el_type *)+0x1d0>
        2c873c:	e595600c 	ldr	r6, [r5, #12]
        2c8740:	e3360000 	teq	r6, #0	; 0x0
        2c8744:	0a000006 	beq	2c8764 <AssignInputPenaltyAndStrict(SPEC_TYPE *, xrd_el_type *)+0x218>
        2c8748:	e5d60001 	ldrb	r0, [r6, #1]
        2c874c:	e330000d 	teq	r0, #13	; 0xd
        2c8750:	13300010 	teqne	r0, #16	; 0x10
        2c8754:	1a000002 	bne	2c8764 <AssignInputPenaltyAndStrict(SPEC_TYPE *, xrd_el_type *)+0x218>
        2c8758:	e596600c 	ldr	r6, [r6, #12]
        2c875c:	e3360000 	teq	r6, #0	; 0x0
        2c8760:	1afffff8 	bne	2c8748 <AssignInputPenaltyAndStrict(SPEC_TYPE *, xrd_el_type *)+0x1fc>
        2c8764:	e3310000 	teq	r1, #0	; 0x0
        2c8768:	13360000 	teqne	r6, #0	; 0x0
        2c876c:	15d10001 	ldrneb	r0, [r1, #1]
        2c8770:	13300000 	teqne	r0, #0	; 0x0
        2c8774:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2c8778:	e3300012 	teq	r0, #18	; 0x12
        2c877c:	13300001 	teqne	r0, #1	; 0x1
        2c8780:	13300013 	teqne	r0, #19	; 0x13
        2c8784:	13300014 	teqne	r0, #20	; 0x14
        2c8788:	1a000005 	bne	2c87a4 <AssignInputPenaltyAndStrict(SPEC_TYPE *, xrd_el_type *)+0x258>
        2c878c:	e5d62001 	ldrb	r2, [r6, #1]
        2c8790:	e3320012 	teq	r2, #18	; 0x12
        2c8794:	13320001 	teqne	r2, #1	; 0x1
        2c8798:	13320013 	teqne	r2, #19	; 0x13
        2c879c:	13320014 	teqne	r2, #20	; 0x14
        2c87a0:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2c87a4:	e3a08000 	mov	r8, #0	; 0x0
        2c87a8:	e3a07000 	mov	r7, #0	; 0x0
        2c87ac:	e3300012 	teq	r0, #18	; 0x12
        2c87b0:	13300001 	teqne	r0, #1	; 0x1
        2c87b4:	13300013 	teqne	r0, #19	; 0x13
        2c87b8:	13300014 	teqne	r0, #20	; 0x14
        2c87bc:	0a000007 	beq	2c87e0 <AssignInputPenaltyAndStrict(SPEC_TYPE *, xrd_el_type *)+0x294>
        2c87c0:	e5d50002 	ldrb	r0, [r5, #2]
        2c87c4:	e200000f 	and	r0, r0, #15	; 0xf
        2c87c8:	e5d11002 	ldrb	r1, [r1, #2]
        2c87cc:	e201100f 	and	r1, r1, #15	; 0xf
        2c87d0:	e0400001 	sub	r0, r0, r1
        2c87d4:	eb5e9bfa 	bl	1a6f7c4 <$HWRAbs(int)>
        2c87d8:	e1a08800 	mov	r8, r0, lsl #16
        2c87dc:	e1a08848 	mov	r8, r8, asr #16
        2c87e0:	e5d60001 	ldrb	r0, [r6, #1]
        2c87e4:	e3300012 	teq	r0, #18	; 0x12
        2c87e8:	13300001 	teqne	r0, #1	; 0x1
        2c87ec:	13300013 	teqne	r0, #19	; 0x13
        2c87f0:	13300014 	teqne	r0, #20	; 0x14
        2c87f4:	0a000008 	beq	2c881c <AssignInputPenaltyAndStrict(SPEC_TYPE *, xrd_el_type *)+0x2d0>
        2c87f8:	e5d50002 	ldrb	r0, [r5, #2]
        2c87fc:	e200000f 	and	r0, r0, #15	; 0xf
        2c8800:	e5d61002 	ldrb	r1, [r6, #2]
        2c8804:	e201100f 	and	r1, r1, #15	; 0xf
        2c8808:	e0400001 	sub	r0, r0, r1
        2c880c:	eb5e9bec 	bl	1a6f7c4 <$HWRAbs(int)>
        2c8810:	e0800008 	add	r0, r0, r8
        2c8814:	e1a08800 	mov	r8, r0, lsl #16
        2c8818:	e1a08848 	mov	r8, r8, asr #16
        2c881c:	e358000c 	cmp	r8, #12	; 0xc
        2c8820:	a3a07008 	movge	r7, #8	; 0x8
        2c8824:	aa000001 	bge	2c8830 <AssignInputPenaltyAndStrict(SPEC_TYPE *, xrd_el_type *)+0x2e4>
        2c8828:	e3580006 	cmp	r8, #6	; 0x6
        2c882c:	a3a07004 	movge	r7, #4	; 0x4
        2c8830:	e5d50001 	ldrb	r0, [r5, #1]
        2c8834:	e330000e 	teq	r0, #14	; 0xe
        2c8838:	13300011 	teqne	r0, #17	; 0x11
        2c883c:	13300028 	teqne	r0, #40	; 0x28
        2c8840:	13300029 	teqne	r0, #41	; 0x29
        2c8844:	1a000002 	bne	2c8854 <AssignInputPenaltyAndStrict(SPEC_TYPE *, xrd_el_type *)+0x308>
        2c8848:	e3570001 	cmp	r7, #1	; 0x1
        2c884c:	a3a07001 	movge	r7, #1	; 0x1
        2c8850:	e20770ff 	and	r7, r7, #255	; 0xff
        2c8854:	e5d40002 	ldrb	r0, [r4, #2]
        2c8858:	e0800007 	add	r0, r0, r7
        2c885c:	e5c40002 	strb	r0, [r4, #2]
        2c8860:	e20000ff 	and	r0, r0, #255	; 0xff
        2c8864:	e3500012 	cmp	r0, #18	; 0x12
        2c8868:	c3a00012 	movgt	r0, #18	; 0x12
        2c886c:	caffff66 	bgt	2c860c <AssignInputPenaltyAndStrict(SPEC_TYPE *, xrd_el_type *)+0xc0>
        2c8870:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: AnyCrosCont__FP8low_typeiT2Pi
 * Address: 002c930c
 */
void globals::AnyCrosCont() {
    /*
        2c930c:	e92d41f0 	stmdb	sp!, {r4, r5, r6, r7, r8, lr}
        2c9310:	e590e046 	ldr	lr, [r0, #70]
        2c9314:	e1a0e84e 	mov	lr, lr, asr #16
        2c9318:	e590c040 	ldr	ip, [r0, #64]
        2c931c:	e08e410e 	add	r4, lr, lr, lsl #2
        2c9320:	e08cc104 	add	ip, ip, r4, lsl #2
        2c9324:	e24c5014 	sub	r5, ip, #20	; 0x14
        2c9328:	e3a0c000 	mov	ip, #0	; 0x0
        2c932c:	e3e04001 	mvn	r4, #1	; 0x1
        2c9330:	e3510000 	cmp	r1, #0	; 0x0
        2c9334:	e5906038 	ldr	r6, [r0, #56]
        2c9338:	ba00000f 	blt	2c937c <AnyCrosCont__FP8low_typeiT2Pi+0x70>
        2c933c:	e590003c 	ldr	r0, [r0, #60]
        2c9340:	e1a00840 	mov	r0, r0, asr #16
        2c9344:	e1500001 	cmp	r0, r1
        2c9348:	da00000b 	ble	2c937c <AnyCrosCont__FP8low_typeiT2Pi+0x70>
        2c934c:	e7967081 	ldr	r7, [r6, r1, lsl #1]
        2c9350:	e1a07847 	mov	r7, r7, asr #16
        2c9354:	e3770001 	cmn	r7, #1	; 0x1
        2c9358:	0a000007 	beq	2c937c <AnyCrosCont__FP8low_typeiT2Pi+0x70>
        2c935c:	e3520000 	cmp	r2, #0	; 0x0
        2c9360:	ba000005 	blt	2c937c <AnyCrosCont__FP8low_typeiT2Pi+0x70>
        2c9364:	e1500002 	cmp	r0, r2
        2c9368:	da000003 	ble	2c937c <AnyCrosCont__FP8low_typeiT2Pi+0x70>
        2c936c:	e7960082 	ldr	r0, [r6, r2, lsl #1]
        2c9370:	e1a00840 	mov	r0, r0, asr #16
        2c9374:	e3700001 	cmn	r0, #1	; 0x1
        2c9378:	1a000001 	bne	2c9384 <AnyCrosCont__FP8low_typeiT2Pi+0x78>
        2c937c:	e3a0c001 	mov	ip, #1	; 0x1
        2c9380:	ea000019 	b	2c93ec <AnyCrosCont__FP8low_typeiT2Pi+0xe0>
        2c9384:	e3a06000 	mov	r6, #0	; 0x0
        2c9388:	e35e0000 	cmp	lr, #0	; 0x0
        2c938c:	da000016 	ble	2c93ec <AnyCrosCont__FP8low_typeiT2Pi+0xe0>
        2c9390:	e0860106 	add	r0, r6, r6, lsl #2
        2c9394:	e0450100 	sub	r0, r5, r0, lsl #2
        2c9398:	e5d07000 	ldrb	r7, [r0]
        2c939c:	e3370006 	teq	r7, #6	; 0x6
        2c93a0:	1337000a 	teqne	r7, #10	; 0xa
        2c93a4:	13370009 	teqne	r7, #9	; 0x9
        2c93a8:	1a00000f 	bne	2c93ec <AnyCrosCont__FP8low_typeiT2Pi+0xe0>
        2c93ac:	e5907004 	ldr	r7, [r0, #4]
        2c93b0:	e1a07847 	mov	r7, r7, asr #16
        2c93b4:	e1570002 	cmp	r7, r2
        2c93b8:	ca000008 	bgt	2c93e0 <AnyCrosCont__FP8low_typeiT2Pi+0xd4>
        2c93bc:	e5908006 	ldr	r8, [r0, #6]
        2c93c0:	e1520848 	cmp	r2, r8, asr #16
        2c93c4:	ca000005 	bgt	2c93e0 <AnyCrosCont__FP8low_typeiT2Pi+0xd4>
        2c93c8:	e5108010 	ldr	r8, [r0, -#16]
        2c93cc:	e1510848 	cmp	r1, r8, asr #16
        2c93d0:	ba000002 	blt	2c93e0 <AnyCrosCont__FP8low_typeiT2Pi+0xd4>
        2c93d4:	e510000e 	ldr	r0, [r0, -#14]
        2c93d8:	e1510840 	cmp	r1, r0, asr #16
        2c93dc:	d1a04007 	movle	r4, r7
        2c93e0:	e2866002 	add	r6, r6, #2	; 0x2
        2c93e4:	e156000e 	cmp	r6, lr
        2c93e8:	baffffe8 	blt	2c9390 <AnyCrosCont__FP8low_typeiT2Pi+0x84>
        2c93ec:	e1a0000c 	mov	r0, ip
        2c93f0:	e5834000 	str	r4, [r3]
        2c93f4:	e8bd81f0 	ldmia	sp!, {r4, r5, r6, r7, r8, pc}
    */
}

/**
 * Symbol: analize_sticks(low_type *)
 * Address: 002cbe54
 */
analize_sticks(low_type *) {
    /*
        2cbe54:	e1a0c00d 	mov	ip, sp
        2cbe58:	e92ddff1 	stmdb	sp!, {r0, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2cbe5c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2cbe60:	e24dd024 	sub	sp, sp, #36	; 0x24
        2cbe64:	e51b002c 	ldr	r0, [fp, -#44]
        2cbe68:	e5b01040 	ldr	r1, [r0, #64]!
        2cbe6c:	e58d1020 	str	r1, [sp, #32]
        2cbe70:	e51b002c 	ldr	r0, [fp, -#44]
        2cbe74:	e5b05034 	ldr	r5, [r0, #52]!
        2cbe78:	e51b002c 	ldr	r0, [fp, -#44]
        2cbe7c:	e5b02038 	ldr	r2, [r0, #56]!
        2cbe80:	e58d201c 	str	r2, [sp, #28]
        2cbe84:	e51b002c 	ldr	r0, [fp, -#44]
        2cbe88:	e590206e 	ldr	r2, [r0, #110]
        2cbe8c:	e1a02842 	mov	r2, r2, asr #16
        2cbe90:	e58d1018 	str	r1, [sp, #24]
        2cbe94:	e3310000 	teq	r1, #0	; 0x0
        2cbe98:	e58d2000 	str	r2, [sp]
        2cbe9c:	0a0002d3 	beq	2cc9f0 <analize_sticks(low_type *)+0xb9c>
        2cbea0:	e59d0018 	ldr	r0, [sp, #24]
        2cbea4:	e5d01000 	ldrb	r1, [r0]
        2cbea8:	e3310009 	teq	r1, #9	; 0x9
        2cbeac:	1a0002ca 	bne	2cc9dc <analize_sticks(low_type *)+0xb88>
        2cbeb0:	e280600c 	add	r6, r0, #12	; 0xc
        2cbeb4:	e8960042 	ldmia	r6, {r1, r6}
        2cbeb8:	e3a08000 	mov	r8, #0	; 0x0
        2cbebc:	e3a09000 	mov	r9, #0	; 0x0
        2cbec0:	e3a0a000 	mov	sl, #0	; 0x0
        2cbec4:	e58d1014 	str	r1, [sp, #20]
        2cbec8:	e58d900c 	str	r9, [sp, #12]
        2cbecc:	e5901004 	ldr	r1, [r0, #4]
        2cbed0:	e1a01841 	mov	r1, r1, asr #16
        2cbed4:	e58d1004 	str	r1, [sp, #4]
        2cbed8:	e3a01020 	mov	r1, #32	; 0x20
        2cbedc:	eb613786 	bl	1b19cfc <$FindMarkRight(SPEC_TYPE *, unsigned char)>
        2cbee0:	e58d0010 	str	r0, [sp, #16]
        2cbee4:	e3300000 	teq	r0, #0	; 0x0
        2cbee8:	0a000027 	beq	2cbf8c <analize_sticks(low_type *)+0x138>
        2cbeec:	e59d0010 	ldr	r0, [sp, #16]
        2cbef0:	e5d00001 	ldrb	r0, [r0, #1]
        2cbef4:	e3300003 	teq	r0, #3	; 0x3
        2cbef8:	13300007 	teqne	r0, #7	; 0x7
        2cbefc:	1a000009 	bne	2cbf28 <analize_sticks(low_type *)+0xd4>
        2cbf00:	e1a02005 	mov	r2, r5
        2cbf04:	e28d1010 	add	r1, sp, #16	; 0x10
        2cbf08:	e8910003 	ldmia	r1, {r0, r1}
        2cbf0c:	e59d301c 	ldr	r3, [sp, #28]
        2cbf10:	eb616d22 	bl	1b273a0 <$EndIUIDNearStick__FP9SPEC_TYPET1PsT3>
        2cbf14:	e3300000 	teq	r0, #0	; 0x0
        2cbf18:	159d0018 	ldrne	r0, [sp, #24]
        2cbf1c:	15900004 	ldrne	r0, [r0, #4]
        2cbf20:	11a00840 	movne	r0, r0, asr #16
        2cbf24:	1a0001b6 	bne	2cc604 <analize_sticks(low_type *)+0x7b0>
        2cbf28:	e59d0010 	ldr	r0, [sp, #16]
        2cbf2c:	e3300000 	teq	r0, #0	; 0x0
        2cbf30:	0a000015 	beq	2cbf8c <analize_sticks(low_type *)+0x138>
        2cbf34:	e59d0018 	ldr	r0, [sp, #24]
        2cbf38:	e5900006 	ldr	r0, [r0, #6]
        2cbf3c:	e59d1010 	ldr	r1, [sp, #16]
        2cbf40:	e5911006 	ldr	r1, [r1, #6]
        2cbf44:	e1a01841 	mov	r1, r1, asr #16
        2cbf48:	e1310840 	teq	r1, r0, asr #16
        2cbf4c:	1a00000e 	bne	2cbf8c <analize_sticks(low_type *)+0x138>
        2cbf50:	e1a02005 	mov	r2, r5
        2cbf54:	e59d0004 	ldr	r0, [sp, #4]
        2cbf58:	e59d301c 	ldr	r3, [sp, #28]
        2cbf5c:	eb614bea 	bl	1b1ef0c <$DistanceSquare__FiT1PsT3>
        2cbf60:	e3500e32 	cmp	r0, #800	; 0x320
        2cbf64:	aa000008 	bge	2cbf8c <analize_sticks(low_type *)+0x138>
        2cbf68:	e59d0018 	ldr	r0, [sp, #24]
        2cbf6c:	eb6160b7 	bl	1b24250 <$cross_little(SPEC_TYPE *)>
        2cbf70:	e58d0018 	str	r0, [sp, #24]
        2cbf74:	e59d0010 	ldr	r0, [sp, #16]
        2cbf78:	e5d00003 	ldrb	r0, [r0, #3]
        2cbf7c:	e3800002 	orr	r0, r0, #2	; 0x2
        2cbf80:	e59d1010 	ldr	r1, [sp, #16]
        2cbf84:	e5c10003 	strb	r0, [r1, #3]
        2cbf88:	ea000293 	b	2cc9dc <analize_sticks(low_type *)+0xb88>
        2cbf8c:	e5d60000 	ldrb	r0, [r6]
        2cbf90:	e3300006 	teq	r0, #6	; 0x6
        2cbf94:	05966010 	ldreq	r6, [r6, #16]
        2cbf98:	e59d1014 	ldr	r1, [sp, #20]
        2cbf9c:	e5910004 	ldr	r0, [r1, #4]
        2cbfa0:	e1a00840 	mov	r0, r0, asr #16
        2cbfa4:	ea000047 	b	2cc0c8 <analize_sticks(low_type *)+0x274>
        2cbfa8:	e5d61000 	ldrb	r1, [r6]
        2cbfac:	e3310001 	teq	r1, #1	; 0x1
        2cbfb0:	0a00002a 	beq	2cc060 <analize_sticks(low_type *)+0x20c>
        2cbfb4:	e3310003 	teq	r1, #3	; 0x3
        2cbfb8:	0a000035 	beq	2cc094 <analize_sticks(low_type *)+0x240>
        2cbfbc:	e3310010 	teq	r1, #16	; 0x10
        2cbfc0:	1a00003c 	bne	2cc0b8 <analize_sticks(low_type *)+0x264>
        2cbfc4:	e5961004 	ldr	r1, [r6, #4]
        2cbfc8:	e1a01841 	mov	r1, r1, asr #16
        2cbfcc:	e1300001 	teq	r0, r1
        2cbfd0:	1a000042 	bne	2cc0e0 <analize_sticks(low_type *)+0x28c>
        2cbfd4:	e59d2014 	ldr	r2, [sp, #20]
        2cbfd8:	e5920006 	ldr	r0, [r2, #6]
        2cbfdc:	e1a00840 	mov	r0, r0, asr #16
        2cbfe0:	e1a02005 	mov	r2, r5
        2cbfe4:	e59d301c 	ldr	r3, [sp, #28]
        2cbfe8:	eb614bc7 	bl	1b1ef0c <$DistanceSquare__FiT1PsT3>
        2cbfec:	e3500e32 	cmp	r0, #800	; 0x320
        2cbff0:	aa00003a 	bge	2cc0e0 <analize_sticks(low_type *)+0x28c>
        2cbff4:	e59d0018 	ldr	r0, [sp, #24]
        2cbff8:	eb616094 	bl	1b24250 <$cross_little(SPEC_TYPE *)>
        2cbffc:	e33a0001 	teq	sl, #1	; 0x1
        2cc000:	e58d0018 	str	r0, [sp, #24]
        2cc004:	13390001 	teqne	r9, #1	; 0x1
        2cc008:	05d70003 	ldreqb	r0, [r7, #3]
        2cc00c:	03800002 	orreq	r0, r0, #2	; 0x2
        2cc010:	05c70003 	streqb	r0, [r7, #3]
        2cc014:	e59d100c 	ldr	r1, [sp, #12]
        2cc018:	e3310001 	teq	r1, #1	; 0x1
        2cc01c:	13380001 	teqne	r8, #1	; 0x1
        2cc020:	05d40003 	ldreqb	r0, [r4, #3]
        2cc024:	03800002 	orreq	r0, r0, #2	; 0x2
        2cc028:	05c40003 	streqb	r0, [r4, #3]
        2cc02c:	e59d100c 	ldr	r1, [sp, #12]
        2cc030:	e3310000 	teq	r1, #0	; 0x0
        2cc034:	03380000 	teqeq	r8, #0	; 0x0
        2cc038:	033a0000 	teqeq	sl, #0	; 0x0
        2cc03c:	03390000 	teqeq	r9, #0	; 0x0
        2cc040:	1a000265 	bne	2cc9dc <analize_sticks(low_type *)+0xb88>
        2cc044:	e5d60001 	ldrb	r0, [r6, #1]
        2cc048:	e3300003 	teq	r0, #3	; 0x3
        2cc04c:	13300007 	teqne	r0, #7	; 0x7
        2cc050:	05d60003 	ldreqb	r0, [r6, #3]
        2cc054:	03800002 	orreq	r0, r0, #2	; 0x2
        2cc058:	05c60003 	streqb	r0, [r6, #3]
        2cc05c:	ea00025e 	b	2cc9dc <analize_sticks(low_type *)+0xb88>
        2cc060:	e1a04006 	mov	r4, r6
        2cc064:	e5d61001 	ldrb	r1, [r6, #1]
        2cc068:	e3310003 	teq	r1, #3	; 0x3
        2cc06c:	12881001 	addne	r1, r8, #1	; 0x1
        2cc070:	11a08801 	movne	r8, r1, lsl #16
        2cc074:	11a08848 	movne	r8, r8, asr #16
        2cc078:	1a00000e 	bne	2cc0b8 <analize_sticks(low_type *)+0x264>
        2cc07c:	e59d100c 	ldr	r1, [sp, #12]
        2cc080:	e2811001 	add	r1, r1, #1	; 0x1
        2cc084:	e1a01801 	mov	r1, r1, lsl #16
        2cc088:	e1a01841 	mov	r1, r1, asr #16
        2cc08c:	e58d100c 	str	r1, [sp, #12]
        2cc090:	ea000008 	b	2cc0b8 <analize_sticks(low_type *)+0x264>
        2cc094:	e1a07006 	mov	r7, r6
        2cc098:	e5d61001 	ldrb	r1, [r6, #1]
        2cc09c:	e3310007 	teq	r1, #7	; 0x7
        2cc0a0:	12891001 	addne	r1, r9, #1	; 0x1
        2cc0a4:	11a09801 	movne	r9, r1, lsl #16
        2cc0a8:	11a09849 	movne	r9, r9, asr #16
        2cc0ac:	028a1001 	addeq	r1, sl, #1	; 0x1
        2cc0b0:	01a0a801 	moveq	sl, r1, lsl #16
        2cc0b4:	01a0a84a 	moveq	sl, sl, asr #16
        2cc0b8:	e5966010 	ldr	r6, [r6, #16]
        2cc0bc:	e5d61000 	ldrb	r1, [r6]
        2cc0c0:	e3310006 	teq	r1, #6	; 0x6
        2cc0c4:	05966010 	ldreq	r6, [r6, #16]
        2cc0c8:	e5961004 	ldr	r1, [r6, #4]
        2cc0cc:	e1500841 	cmp	r0, r1, asr #16
        2cc0d0:	ca000002 	bgt	2cc0e0 <analize_sticks(low_type *)+0x28c>
        2cc0d4:	e59d1020 	ldr	r1, [sp, #32]
        2cc0d8:	e1360001 	teq	r6, r1
        2cc0dc:	1affffb1 	bne	2cbfa8 <analize_sticks(low_type *)+0x154>
        2cc0e0:	e59d100c 	ldr	r1, [sp, #12]
        2cc0e4:	e3310001 	teq	r1, #1	; 0x1
        2cc0e8:	1a000018 	bne	2cc150 <analize_sticks(low_type *)+0x2fc>
        2cc0ec:	e33a0001 	teq	sl, #1	; 0x1
        2cc0f0:	1a000042 	bne	2cc200 <analize_sticks(low_type *)+0x3ac>
        2cc0f4:	e3380000 	teq	r8, #0	; 0x0
        2cc0f8:	1a0000ca 	bne	2cc428 <analize_sticks(low_type *)+0x5d4>
        2cc0fc:	e3390000 	teq	r9, #0	; 0x0
        2cc100:	1a000145 	bne	2cc61c <analize_sticks(low_type *)+0x7c8>
        2cc104:	e1a02007 	mov	r2, r7
        2cc108:	e1a01004 	mov	r1, r4
        2cc10c:	e51b302c 	ldr	r3, [fp, -#44]
        2cc110:	e59d0018 	ldr	r0, [sp, #24]
        2cc114:	eb6153de 	bl	1b21094 <$IsDUR__FP9SPEC_TYPEN21P8low_type>
        2cc118:	e3300000 	teq	r0, #0	; 0x0
        2cc11c:	1a000167 	bne	2cc6c0 <analize_sticks(low_type *)+0x86c>
        2cc120:	e5d40002 	ldrb	r0, [r4, #2]
        2cc124:	e3c00030 	bic	r0, r0, #48	; 0x30
        2cc128:	e3800010 	orr	r0, r0, #16	; 0x10
        2cc12c:	e5c40002 	strb	r0, [r4, #2]
        2cc130:	e5d70002 	ldrb	r0, [r7, #2]
        2cc134:	e3c00030 	bic	r0, r0, #48	; 0x30
        2cc138:	e3800020 	orr	r0, r0, #32	; 0x20
        2cc13c:	e5c70002 	strb	r0, [r7, #2]
        2cc140:	e59d0018 	ldr	r0, [sp, #24]
        2cc144:	eb616041 	bl	1b24250 <$cross_little(SPEC_TYPE *)>
        2cc148:	e58d0018 	str	r0, [sp, #24]
        2cc14c:	ea000222 	b	2cc9dc <analize_sticks(low_type *)+0xb88>
        2cc150:	e59d100c 	ldr	r1, [sp, #12]
        2cc154:	e3310000 	teq	r1, #0	; 0x0
        2cc158:	1a000023 	bne	2cc1ec <analize_sticks(low_type *)+0x398>
        2cc15c:	e33a0000 	teq	sl, #0	; 0x0
        2cc160:	03380000 	teqeq	r8, #0	; 0x0
        2cc164:	1a000023 	bne	2cc1f8 <analize_sticks(low_type *)+0x3a4>
        2cc168:	e3390000 	teq	r9, #0	; 0x0
        2cc16c:	1a000076 	bne	2cc34c <analize_sticks(low_type *)+0x4f8>
        2cc170:	e51b302c 	ldr	r3, [fp, -#44]
        2cc174:	e3a02000 	mov	r2, #0	; 0x0
        2cc178:	e3a01000 	mov	r1, #0	; 0x0
        2cc17c:	e59d0018 	ldr	r0, [sp, #24]
        2cc180:	eb6153c3 	bl	1b21094 <$IsDUR__FP9SPEC_TYPEN21P8low_type>
        2cc184:	e3300000 	teq	r0, #0	; 0x0
        2cc188:	1a00014c 	bne	2cc6c0 <analize_sticks(low_type *)+0x86c>
        2cc18c:	e59d0018 	ldr	r0, [sp, #24]
        2cc190:	e5902004 	ldr	r2, [r0, #4]
        2cc194:	e1a02842 	mov	r2, r2, asr #16
        2cc198:	e7952082 	ldr	r2, [r5, r2, lsl #1]
        2cc19c:	e1a02842 	mov	r2, r2, asr #16
        2cc1a0:	e5901006 	ldr	r1, [r0, #6]
        2cc1a4:	e1a01841 	mov	r1, r1, asr #16
        2cc1a8:	e7951081 	ldr	r1, [r5, r1, lsl #1]
        2cc1ac:	e1a01841 	mov	r1, r1, asr #16
        2cc1b0:	e1520001 	cmp	r2, r1
        2cc1b4:	d3a0101f 	movle	r1, #31	; 0x1f
        2cc1b8:	c3a01020 	movgt	r1, #32	; 0x20
        2cc1bc:	e5c01001 	strb	r1, [r0, #1]
        2cc1c0:	e59d0018 	ldr	r0, [sp, #24]
        2cc1c4:	e5900004 	ldr	r0, [r0, #4]
        2cc1c8:	e1a00840 	mov	r0, r0, asr #16
        2cc1cc:	e59d301c 	ldr	r3, [sp, #28]
        2cc1d0:	e7930080 	ldr	r0, [r3, r0, lsl #1]
        2cc1d4:	e1a00840 	mov	r0, r0, asr #16
        2cc1d8:	e51b102c 	ldr	r1, [fp, -#44]
        2cc1dc:	eb613ad1 	bl	1b1ad28 <$HeightInLine(short, low_type *)>
        2cc1e0:	e59d1018 	ldr	r1, [sp, #24]
        2cc1e4:	e5c10002 	strb	r0, [r1, #2]
        2cc1e8:	ea000134 	b	2cc6c0 <analize_sticks(low_type *)+0x86c>
        2cc1ec:	e59d100c 	ldr	r1, [sp, #12]
        2cc1f0:	e3310001 	teq	r1, #1	; 0x1
        2cc1f4:	0a000001 	beq	2cc200 <analize_sticks(low_type *)+0x3ac>
        2cc1f8:	e3380001 	teq	r8, #1	; 0x1
        2cc1fc:	1a000050 	bne	2cc344 <analize_sticks(low_type *)+0x4f0>
        2cc200:	e33a0000 	teq	sl, #0	; 0x0
        2cc204:	1a00004e 	bne	2cc344 <analize_sticks(low_type *)+0x4f0>
        2cc208:	e3390000 	teq	r9, #0	; 0x0
        2cc20c:	1a00004e 	bne	2cc34c <analize_sticks(low_type *)+0x4f8>
        2cc210:	e1a01004 	mov	r1, r4
        2cc214:	e51b202c 	ldr	r2, [fp, -#44]
        2cc218:	e59d0018 	ldr	r0, [sp, #24]
        2cc21c:	eb61642b 	bl	1b252d0 <$is_DDL__FP9SPEC_TYPET1P8low_type>
        2cc220:	e3300000 	teq	r0, #0	; 0x0
        2cc224:	1a000125 	bne	2cc6c0 <analize_sticks(low_type *)+0x86c>
        2cc228:	e5942006 	ldr	r2, [r4, #6]
        2cc22c:	e1a02842 	mov	r2, r2, asr #16
        2cc230:	e5941004 	ldr	r1, [r4, #4]
        2cc234:	e1a01841 	mov	r1, r1, asr #16
        2cc238:	e59d301c 	ldr	r3, [sp, #28]
        2cc23c:	e5d40000 	ldrb	r0, [r4]
        2cc240:	eb6136a5 	bl	1b19cdc <$extremum__FUcsT2Ps>
        2cc244:	e58d0008 	str	r0, [sp, #8]
        2cc248:	e59d301c 	ldr	r3, [sp, #28]
        2cc24c:	e92d0008 	stmdb	sp!, {r3}
        2cc250:	e59d101c 	ldr	r1, [sp, #28]
        2cc254:	e5910006 	ldr	r0, [r1, #6]
        2cc258:	e5916004 	ldr	r6, [r1, #4]
        2cc25c:	e1a06846 	mov	r6, r6, asr #16
        2cc260:	e0660840 	rsb	r0, r6, r0, asr #16
        2cc264:	e2801001 	add	r1, r0, #1	; 0x1
        2cc268:	e3a00003 	mov	r0, #3	; 0x3
        2cc26c:	eb6399b3 	bl	1bb2940 <$__rt_sdiv>
        2cc270:	e0801006 	add	r1, r0, r6
        2cc274:	e1a00006 	mov	r0, r6
        2cc278:	e1a03005 	mov	r3, r5
        2cc27c:	e59d2004 	ldr	r2, [sp, #4]
        2cc280:	eb615fef 	bl	1b24244 <$cos_normalslope__FiN21PsT4>
        2cc284:	e28dd004 	add	sp, sp, #4	; 0x4
        2cc288:	e3a0604b 	mov	r6, #75	; 0x4b
        2cc28c:	e5d41002 	ldrb	r1, [r4, #2]
        2cc290:	e201100f 	and	r1, r1, #15	; 0xf
        2cc294:	e3510004 	cmp	r1, #4	; 0x4
        2cc298:	d3a06055 	movle	r6, #85	; 0x55
        2cc29c:	e1a00800 	mov	r0, r0, lsl #16
        2cc2a0:	e1a00840 	mov	r0, r0, asr #16
        2cc2a4:	eb5e8d46 	bl	1a6f7c4 <$HWRAbs(int)>
        2cc2a8:	e1500006 	cmp	r0, r6
        2cc2ac:	b5d40002 	ldrltb	r0, [r4, #2]
        2cc2b0:	b2006030 	andlt	r6, r0, #48	; 0x30
        2cc2b4:	b3a01003 	movlt	r1, #3	; 0x3
        2cc2b8:	ba000057 	blt	2cc41c <analize_sticks(low_type *)+0x5c8>
        2cc2bc:	e3a06000 	mov	r6, #0	; 0x0
        2cc2c0:	e3380001 	teq	r8, #1	; 0x1
        2cc2c4:	1a000006 	bne	2cc2e4 <analize_sticks(low_type *)+0x490>
        2cc2c8:	e5941006 	ldr	r1, [r4, #6]
        2cc2cc:	e1a01841 	mov	r1, r1, asr #16
        2cc2d0:	e59d0018 	ldr	r0, [sp, #24]
        2cc2d4:	e5902006 	ldr	r2, [r0, #6]
        2cc2d8:	e1510842 	cmp	r1, r2, asr #16
        2cc2dc:	c3a01018 	movgt	r1, #24	; 0x18
        2cc2e0:	ca00004e 	bgt	2cc420 <analize_sticks(low_type *)+0x5cc>
        2cc2e4:	e59d0008 	ldr	r0, [sp, #8]
        2cc2e8:	e7951080 	ldr	r1, [r5, r0, lsl #1]
        2cc2ec:	e1a01841 	mov	r1, r1, asr #16
        2cc2f0:	e59d2014 	ldr	r2, [sp, #20]
        2cc2f4:	e5920004 	ldr	r0, [r2, #4]
        2cc2f8:	e1a00840 	mov	r0, r0, asr #16
        2cc2fc:	e7950080 	ldr	r0, [r5, r0, lsl #1]
        2cc300:	e1a00840 	mov	r0, r0, asr #16
        2cc304:	e1510000 	cmp	r1, r0
        2cc308:	b3a01018 	movlt	r1, #24	; 0x18
        2cc30c:	a3a01015 	movge	r1, #21	; 0x15
        2cc310:	ea000041 	b	2cc41c <analize_sticks(low_type *)+0x5c8>
        2cc314:	e59d0018 	ldr	r0, [sp, #24]
        2cc318:	e5900004 	ldr	r0, [r0, #4]
        2cc31c:	e1a00840 	mov	r0, r0, asr #16
        2cc320:	e59d301c 	ldr	r3, [sp, #28]
        2cc324:	e7930080 	ldr	r0, [r3, r0, lsl #1]
        2cc328:	e1a00840 	mov	r0, r0, asr #16
        2cc32c:	e51b102c 	ldr	r1, [fp, -#44]
        2cc330:	eb613a7c 	bl	1b1ad28 <$HeightInLine(short, low_type *)>
        2cc334:	e200000f 	and	r0, r0, #15	; 0xf
        2cc338:	e2061030 	and	r1, r6, #48	; 0x30
        2cc33c:	e1801001 	orr	r1, r0, r1
        2cc340:	ea0000dc 	b	2cc6b8 <analize_sticks(low_type *)+0x864>
        2cc344:	e33a0001 	teq	sl, #1	; 0x1
        2cc348:	0a000001 	beq	2cc354 <analize_sticks(low_type *)+0x500>
        2cc34c:	e3390001 	teq	r9, #1	; 0x1
        2cc350:	1a000034 	bne	2cc428 <analize_sticks(low_type *)+0x5d4>
        2cc354:	e59d100c 	ldr	r1, [sp, #12]
        2cc358:	e3310000 	teq	r1, #0	; 0x0
        2cc35c:	03380000 	teqeq	r8, #0	; 0x0
        2cc360:	1a000030 	bne	2cc428 <analize_sticks(low_type *)+0x5d4>
        2cc364:	e1a02007 	mov	r2, r7
        2cc368:	e51b302c 	ldr	r3, [fp, -#44]
        2cc36c:	e3a01000 	mov	r1, #0	; 0x0
        2cc370:	e59d0018 	ldr	r0, [sp, #24]
        2cc374:	eb615346 	bl	1b21094 <$IsDUR__FP9SPEC_TYPEN21P8low_type>
        2cc378:	e3300000 	teq	r0, #0	; 0x0
        2cc37c:	1a0000cf 	bne	2cc6c0 <analize_sticks(low_type *)+0x86c>
        2cc380:	e59d301c 	ldr	r3, [sp, #28]
        2cc384:	e92d0008 	stmdb	sp!, {r3}
        2cc388:	e59d101c 	ldr	r1, [sp, #28]
        2cc38c:	e5910006 	ldr	r0, [r1, #6]
        2cc390:	e5916004 	ldr	r6, [r1, #4]
        2cc394:	e1a06846 	mov	r6, r6, asr #16
        2cc398:	e0660840 	rsb	r0, r6, r0, asr #16
        2cc39c:	e2801001 	add	r1, r0, #1	; 0x1
        2cc3a0:	e3a00003 	mov	r0, #3	; 0x3
        2cc3a4:	eb639965 	bl	1bb2940 <$__rt_sdiv>
        2cc3a8:	e0801006 	add	r1, r0, r6
        2cc3ac:	e1a00006 	mov	r0, r6
        2cc3b0:	e1a03005 	mov	r3, r5
        2cc3b4:	e59d2004 	ldr	r2, [sp, #4]
        2cc3b8:	eb615fa1 	bl	1b24244 <$cos_normalslope__FiN21PsT4>
        2cc3bc:	e28dd004 	add	sp, sp, #4	; 0x4
        2cc3c0:	e1a00800 	mov	r0, r0, lsl #16
        2cc3c4:	e1a00840 	mov	r0, r0, asr #16
        2cc3c8:	eb5e8cfd 	bl	1a6f7c4 <$HWRAbs(int)>
        2cc3cc:	e3500046 	cmp	r0, #70	; 0x46
        2cc3d0:	ba00000e 	blt	2cc410 <analize_sticks(low_type *)+0x5bc>
        2cc3d4:	e3a06000 	mov	r6, #0	; 0x0
        2cc3d8:	e59d0018 	ldr	r0, [sp, #24]
        2cc3dc:	e5901004 	ldr	r1, [r0, #4]
        2cc3e0:	e1a01841 	mov	r1, r1, asr #16
        2cc3e4:	e7952081 	ldr	r2, [r5, r1, lsl #1]
        2cc3e8:	e1a02842 	mov	r2, r2, asr #16
        2cc3ec:	e59d1014 	ldr	r1, [sp, #20]
        2cc3f0:	e5911004 	ldr	r1, [r1, #4]
        2cc3f4:	e1a01841 	mov	r1, r1, asr #16
        2cc3f8:	e7951081 	ldr	r1, [r5, r1, lsl #1]
        2cc3fc:	e1a01841 	mov	r1, r1, asr #16
        2cc400:	e1520001 	cmp	r2, r1
        2cc404:	c3a01019 	movgt	r1, #25	; 0x19
        2cc408:	d3a0101c 	movle	r1, #28	; 0x1c
        2cc40c:	ea000003 	b	2cc420 <analize_sticks(low_type *)+0x5cc>
        2cc410:	e5d70002 	ldrb	r0, [r7, #2]
        2cc414:	e2006030 	and	r6, r0, #48	; 0x30
        2cc418:	e3a01007 	mov	r1, #7	; 0x7
        2cc41c:	e59d0018 	ldr	r0, [sp, #24]
        2cc420:	e5c01001 	strb	r1, [r0, #1]
        2cc424:	eaffffba 	b	2cc314 <analize_sticks(low_type *)+0x4c0>
        2cc428:	e3380001 	teq	r8, #1	; 0x1
        2cc42c:	1a00002a 	bne	2cc4dc <analize_sticks(low_type *)+0x688>
        2cc430:	e3390001 	teq	r9, #1	; 0x1
        2cc434:	1a000030 	bne	2cc4fc <analize_sticks(low_type *)+0x6a8>
        2cc438:	e24dd004 	sub	sp, sp, #4	; 0x4
        2cc43c:	e5940004 	ldr	r0, [r4, #4]
        2cc440:	e1a00840 	mov	r0, r0, asr #16
        2cc444:	e7951080 	ldr	r1, [r5, r0, lsl #1]
        2cc448:	e1a01841 	mov	r1, r1, asr #16
        2cc44c:	e5940006 	ldr	r0, [r4, #6]
        2cc450:	e1a00840 	mov	r0, r0, asr #16
        2cc454:	e7950080 	ldr	r0, [r5, r0, lsl #1]
        2cc458:	e1a00840 	mov	r0, r0, asr #16
        2cc45c:	e0410000 	sub	r0, r1, r0
        2cc460:	eb5e8cd7 	bl	1a6f7c4 <$HWRAbs(int)>
        2cc464:	e1a06000 	mov	r6, r0
        2cc468:	e5970004 	ldr	r0, [r7, #4]
        2cc46c:	e1a00840 	mov	r0, r0, asr #16
        2cc470:	e7951080 	ldr	r1, [r5, r0, lsl #1]
        2cc474:	e1a01841 	mov	r1, r1, asr #16
        2cc478:	e5970006 	ldr	r0, [r7, #6]
        2cc47c:	e1a00840 	mov	r0, r0, asr #16
        2cc480:	e7950080 	ldr	r0, [r5, r0, lsl #1]
        2cc484:	e1a00840 	mov	r0, r0, asr #16
        2cc488:	e0410000 	sub	r0, r1, r0
        2cc48c:	eb5e8ccc 	bl	1a6f7c4 <$HWRAbs(int)>
        2cc490:	e58d0000 	str	r0, [sp]
        2cc494:	e1560000 	cmp	r6, r0
        2cc498:	da000006 	ble	2cc4b8 <analize_sticks(low_type *)+0x664>
        2cc49c:	e1a02007 	mov	r2, r7
        2cc4a0:	e1a01004 	mov	r1, r4
        2cc4a4:	e51b302c 	ldr	r3, [fp, -#44]
        2cc4a8:	e59d001c 	ldr	r0, [sp, #28]
        2cc4ac:	eb6152f8 	bl	1b21094 <$IsDUR__FP9SPEC_TYPEN21P8low_type>
        2cc4b0:	e3300000 	teq	r0, #0	; 0x0
        2cc4b4:	1a000006 	bne	2cc4d4 <analize_sticks(low_type *)+0x680>
        2cc4b8:	e59d0000 	ldr	r0, [sp]
        2cc4bc:	e1560000 	cmp	r6, r0
        2cc4c0:	aa000003 	bge	2cc4d4 <analize_sticks(low_type *)+0x680>
        2cc4c4:	e1a01004 	mov	r1, r4
        2cc4c8:	e51b202c 	ldr	r2, [fp, -#44]
        2cc4cc:	e59d001c 	ldr	r0, [sp, #28]
        2cc4d0:	eb61637e 	bl	1b252d0 <$is_DDL__FP9SPEC_TYPET1P8low_type>
        2cc4d4:	e28dd004 	add	sp, sp, #4	; 0x4
        2cc4d8:	ea000078 	b	2cc6c0 <analize_sticks(low_type *)+0x86c>
        2cc4dc:	e3380002 	teq	r8, #2	; 0x2
        2cc4e0:	1a000003 	bne	2cc4f4 <analize_sticks(low_type *)+0x6a0>
        2cc4e4:	e08a0009 	add	r0, sl, r9
        2cc4e8:	e3300001 	teq	r0, #1	; 0x1
        2cc4ec:	1a00004a 	bne	2cc61c <analize_sticks(low_type *)+0x7c8>
        2cc4f0:	ea000003 	b	2cc504 <analize_sticks(low_type *)+0x6b0>
        2cc4f4:	e3380001 	teq	r8, #1	; 0x1
        2cc4f8:	1a000047 	bne	2cc61c <analize_sticks(low_type *)+0x7c8>
        2cc4fc:	e33a0001 	teq	sl, #1	; 0x1
        2cc500:	1a000045 	bne	2cc61c <analize_sticks(low_type *)+0x7c8>
        2cc504:	e1a02007 	mov	r2, r7
        2cc508:	e1a01004 	mov	r1, r4
        2cc50c:	e51b302c 	ldr	r3, [fp, -#44]
        2cc510:	e59d0018 	ldr	r0, [sp, #24]
        2cc514:	eb6152de 	bl	1b21094 <$IsDUR__FP9SPEC_TYPEN21P8low_type>
        2cc518:	e3300000 	teq	r0, #0	; 0x0
        2cc51c:	1a000067 	bne	2cc6c0 <analize_sticks(low_type *)+0x86c>
        2cc520:	e5d40002 	ldrb	r0, [r4, #2]
        2cc524:	e2000030 	and	r0, r0, #48	; 0x30
        2cc528:	e3300010 	teq	r0, #16	; 0x10
        2cc52c:	0a000063 	beq	2cc6c0 <analize_sticks(low_type *)+0x86c>
        2cc530:	e5941004 	ldr	r1, [r4, #4]
        2cc534:	e1a01841 	mov	r1, r1, asr #16
        2cc538:	e5940006 	ldr	r0, [r4, #6]
        2cc53c:	e0810840 	add	r0, r1, r0, asr #16
        2cc540:	e1a000c0 	mov	r0, r0, asr #1
        2cc544:	e59d301c 	ldr	r3, [sp, #28]
        2cc548:	e7931080 	ldr	r1, [r3, r0, lsl #1]
        2cc54c:	e1a01841 	mov	r1, r1, asr #16
        2cc550:	e5972004 	ldr	r2, [r7, #4]
        2cc554:	e1a02842 	mov	r2, r2, asr #16
        2cc558:	e5970006 	ldr	r0, [r7, #6]
        2cc55c:	e0820840 	add	r0, r2, r0, asr #16
        2cc560:	e1a000c0 	mov	r0, r0, asr #1
        2cc564:	e7930080 	ldr	r0, [r3, r0, lsl #1]
        2cc568:	e1a00840 	mov	r0, r0, asr #16
        2cc56c:	e0410000 	sub	r0, r1, r0
        2cc570:	eb5e8c93 	bl	1a6f7c4 <$HWRAbs(int)>
        2cc574:	e350003c 	cmp	r0, #60	; 0x3c
        2cc578:	da00001c 	ble	2cc5f0 <analize_sticks(low_type *)+0x79c>
        2cc57c:	e3a01007 	mov	r1, #7	; 0x7
        2cc580:	e59d0018 	ldr	r0, [sp, #24]
        2cc584:	e5c01001 	strb	r1, [r0, #1]
        2cc588:	e5970008 	ldr	r0, [r7, #8]
        2cc58c:	e1a00840 	mov	r0, r0, asr #16
        2cc590:	e59d301c 	ldr	r3, [sp, #28]
        2cc594:	e7930080 	ldr	r0, [r3, r0, lsl #1]
        2cc598:	e1a00840 	mov	r0, r0, asr #16
        2cc59c:	e51b102c 	ldr	r1, [fp, -#44]
        2cc5a0:	eb6139e0 	bl	1b1ad28 <$HeightInLine(short, low_type *)>
        2cc5a4:	e200000f 	and	r0, r0, #15	; 0xf
        2cc5a8:	e5d71002 	ldrb	r1, [r7, #2]
        2cc5ac:	e2011030 	and	r1, r1, #48	; 0x30
        2cc5b0:	e1801001 	orr	r1, r0, r1
        2cc5b4:	e59d0018 	ldr	r0, [sp, #24]
        2cc5b8:	e5c01002 	strb	r1, [r0, #2]
        2cc5bc:	e59d1014 	ldr	r1, [sp, #20]
        2cc5c0:	e5b1000c 	ldr	r0, [r1, #12]!
        2cc5c4:	e5d01001 	ldrb	r1, [r0, #1]
        2cc5c8:	e3310002 	teq	r1, #2	; 0x2
        2cc5cc:	1a00003b 	bne	2cc6c0 <analize_sticks(low_type *)+0x86c>
        2cc5d0:	e5d41002 	ldrb	r1, [r4, #2]
        2cc5d4:	e2011030 	and	r1, r1, #48	; 0x30
        2cc5d8:	e5d00002 	ldrb	r0, [r0, #2]
        2cc5dc:	e2000030 	and	r0, r0, #48	; 0x30
        2cc5e0:	e1310000 	teq	r1, r0
        2cc5e4:	03a01003 	moveq	r1, #3	; 0x3
        2cc5e8:	05c41001 	streqb	r1, [r4, #1]
        2cc5ec:	ea000033 	b	2cc6c0 <analize_sticks(low_type *)+0x86c>
        2cc5f0:	e3a01018 	mov	r1, #24	; 0x18
        2cc5f4:	e59d0018 	ldr	r0, [sp, #24]
        2cc5f8:	e5c01001 	strb	r1, [r0, #1]
        2cc5fc:	e5940008 	ldr	r0, [r4, #8]
        2cc600:	e1a00840 	mov	r0, r0, asr #16
        2cc604:	e59d301c 	ldr	r3, [sp, #28]
        2cc608:	e7930080 	ldr	r0, [r3, r0, lsl #1]
        2cc60c:	e1a00840 	mov	r0, r0, asr #16
        2cc610:	e51b102c 	ldr	r1, [fp, -#44]
        2cc614:	eb6139c3 	bl	1b1ad28 <$HeightInLine(short, low_type *)>
        2cc618:	ea000025 	b	2cc6b4 <analize_sticks(low_type *)+0x860>
        2cc61c:	e3390001 	teq	r9, #1	; 0x1
        2cc620:	059d100c 	ldreq	r1, [sp, #12]
        2cc624:	03310001 	teqeq	r1, #1	; 0x1
        2cc628:	1a000024 	bne	2cc6c0 <analize_sticks(low_type *)+0x86c>
        2cc62c:	e1a01004 	mov	r1, r4
        2cc630:	e51b202c 	ldr	r2, [fp, -#44]
        2cc634:	e59d0018 	ldr	r0, [sp, #24]
        2cc638:	eb616324 	bl	1b252d0 <$is_DDL__FP9SPEC_TYPET1P8low_type>
        2cc63c:	e3300000 	teq	r0, #0	; 0x0
        2cc640:	1a00001e 	bne	2cc6c0 <analize_sticks(low_type *)+0x86c>
        2cc644:	e59d301c 	ldr	r3, [sp, #28]
        2cc648:	e92d0008 	stmdb	sp!, {r3}
        2cc64c:	e59d001c 	ldr	r0, [sp, #28]
        2cc650:	e5901006 	ldr	r1, [r0, #6]
        2cc654:	e1a01841 	mov	r1, r1, asr #16
        2cc658:	e5900004 	ldr	r0, [r0, #4]
        2cc65c:	e1a00840 	mov	r0, r0, asr #16
        2cc660:	e1a03005 	mov	r3, r5
        2cc664:	e59d2004 	ldr	r2, [sp, #4]
        2cc668:	eb615ef5 	bl	1b24244 <$cos_normalslope__FiN21PsT4>
        2cc66c:	e28dd004 	add	sp, sp, #4	; 0x4
        2cc670:	eb5e8c53 	bl	1a6f7c4 <$HWRAbs(int)>
        2cc674:	e3500046 	cmp	r0, #70	; 0x46
        2cc678:	da000010 	ble	2cc6c0 <analize_sticks(low_type *)+0x86c>
        2cc67c:	e59d0018 	ldr	r0, [sp, #24]
        2cc680:	e5902006 	ldr	r2, [r0, #6]
        2cc684:	e1a02842 	mov	r2, r2, asr #16
        2cc688:	e7952082 	ldr	r2, [r5, r2, lsl #1]
        2cc68c:	e1a02842 	mov	r2, r2, asr #16
        2cc690:	e5901004 	ldr	r1, [r0, #4]
        2cc694:	e1a01841 	mov	r1, r1, asr #16
        2cc698:	e7951081 	ldr	r1, [r5, r1, lsl #1]
        2cc69c:	e1a01841 	mov	r1, r1, asr #16
        2cc6a0:	e1520001 	cmp	r2, r1
        2cc6a4:	d3a01020 	movle	r1, #32	; 0x20
        2cc6a8:	c3a0101f 	movgt	r1, #31	; 0x1f
        2cc6ac:	e5c01001 	strb	r1, [r0, #1]
        2cc6b0:	e5d40002 	ldrb	r0, [r4, #2]
        2cc6b4:	e200100f 	and	r1, r0, #15	; 0xf
        2cc6b8:	e59d0018 	ldr	r0, [sp, #24]
        2cc6bc:	e5c01002 	strb	r1, [r0, #2]
        2cc6c0:	e59d0018 	ldr	r0, [sp, #24]
        2cc6c4:	e5906010 	ldr	r6, [r0, #16]
        2cc6c8:	e5d01001 	ldrb	r1, [r0, #1]
        2cc6cc:	e3310000 	teq	r1, #0	; 0x0
        2cc6d0:	1a000002 	bne	2cc6e0 <analize_sticks(low_type *)+0x88c>
        2cc6d4:	eb613574 	bl	1b19cac <$DelCrossingFromSPECLList(SPEC_TYPE *)>
        2cc6d8:	e58d6018 	str	r6, [sp, #24]
        2cc6dc:	ea0000be 	b	2cc9dc <analize_sticks(low_type *)+0xb88>
        2cc6e0:	e5d60000 	ldrb	r0, [r6]
        2cc6e4:	e3300006 	teq	r0, #6	; 0x6
        2cc6e8:	1a000018 	bne	2cc750 <analize_sticks(low_type *)+0x8fc>
        2cc6ec:	ea000016 	b	2cc74c <analize_sticks(low_type *)+0x8f8>
        2cc6f0:	e3300006 	teq	r0, #6	; 0x6
        2cc6f4:	0a000010 	beq	2cc73c <analize_sticks(low_type *)+0x8e8>
        2cc6f8:	e59d0018 	ldr	r0, [sp, #24]
        2cc6fc:	e5d00001 	ldrb	r0, [r0, #1]
        2cc700:	e3300003 	teq	r0, #3	; 0x3
        2cc704:	1a000004 	bne	2cc71c <analize_sticks(low_type *)+0x8c8>
        2cc708:	e5d60001 	ldrb	r0, [r6, #1]
        2cc70c:	e3300007 	teq	r0, #7	; 0x7
        2cc710:	13300008 	teqne	r0, #8	; 0x8
        2cc714:	0a000008 	beq	2cc73c <analize_sticks(low_type *)+0x8e8>
        2cc718:	ea000005 	b	2cc734 <analize_sticks(low_type *)+0x8e0>
        2cc71c:	e3300007 	teq	r0, #7	; 0x7
        2cc720:	1a000003 	bne	2cc734 <analize_sticks(low_type *)+0x8e0>
        2cc724:	e5d60001 	ldrb	r0, [r6, #1]
        2cc728:	e3300003 	teq	r0, #3	; 0x3
        2cc72c:	13300002 	teqne	r0, #2	; 0x2
        2cc730:	0a000001 	beq	2cc73c <analize_sticks(low_type *)+0x8e8>
        2cc734:	e1a00006 	mov	r0, r6
        2cc738:	eb61355e 	bl	1b19cb8 <$DelFromSPECLList(SPEC_TYPE *)>
        2cc73c:	e5966010 	ldr	r6, [r6, #16]
        2cc740:	e5d60000 	ldrb	r0, [r6]
        2cc744:	e3300006 	teq	r0, #6	; 0x6
        2cc748:	1a000000 	bne	2cc750 <analize_sticks(low_type *)+0x8fc>
        2cc74c:	e5966010 	ldr	r6, [r6, #16]
        2cc750:	e5960004 	ldr	r0, [r6, #4]
        2cc754:	e1a00840 	mov	r0, r0, asr #16
        2cc758:	e59d1014 	ldr	r1, [sp, #20]
        2cc75c:	e5911004 	ldr	r1, [r1, #4]
        2cc760:	e1500841 	cmp	r0, r1, asr #16
        2cc764:	ba000003 	blt	2cc778 <analize_sticks(low_type *)+0x924>
        2cc768:	e5d60000 	ldrb	r0, [r6]
        2cc76c:	e3300010 	teq	r0, #16	; 0x10
        2cc770:	13360000 	teqne	r6, #0	; 0x0
        2cc774:	1affffdd 	bne	2cc6f0 <analize_sticks(low_type *)+0x89c>
        2cc778:	e596000c 	ldr	r0, [r6, #12]
        2cc77c:	e59d1018 	ldr	r1, [sp, #24]
        2cc780:	e5d11001 	ldrb	r1, [r1, #1]
        2cc784:	e3310015 	teq	r1, #21	; 0x15
        2cc788:	1a000016 	bne	2cc7e8 <analize_sticks(low_type *)+0x994>
        2cc78c:	e5d61001 	ldrb	r1, [r6, #1]
        2cc790:	e3310002 	teq	r1, #2	; 0x2
        2cc794:	1a000005 	bne	2cc7b0 <analize_sticks(low_type *)+0x95c>
        2cc798:	e5961006 	ldr	r1, [r6, #6]
        2cc79c:	e1a01841 	mov	r1, r1, asr #16
        2cc7a0:	e59d2014 	ldr	r2, [sp, #20]
        2cc7a4:	e5922004 	ldr	r2, [r2, #4]
        2cc7a8:	e1510842 	cmp	r1, r2, asr #16
        2cc7ac:	a5966010 	ldrge	r6, [r6, #16]
        2cc7b0:	e5d61000 	ldrb	r1, [r6]
        2cc7b4:	e3310010 	teq	r1, #16	; 0x10
        2cc7b8:	05d61001 	ldreqb	r1, [r6, #1]
        2cc7bc:	03310007 	teqeq	r1, #7	; 0x7
        2cc7c0:	1a000005 	bne	2cc7dc <analize_sticks(low_type *)+0x988>
        2cc7c4:	e5962006 	ldr	r2, [r6, #6]
        2cc7c8:	e1a02842 	mov	r2, r2, asr #16
        2cc7cc:	e59d1014 	ldr	r1, [sp, #20]
        2cc7d0:	e5911004 	ldr	r1, [r1, #4]
        2cc7d4:	e1520841 	cmp	r2, r1, asr #16
        2cc7d8:	a5966010 	ldrge	r6, [r6, #16]
        2cc7dc:	e586000c 	str	r0, [r6, #12]
        2cc7e0:	e3300000 	teq	r0, #0	; 0x0
        2cc7e4:	15806010 	strne	r6, [r0, #16]
        2cc7e8:	e59d1018 	ldr	r1, [sp, #24]
        2cc7ec:	e5d11001 	ldrb	r1, [r1, #1]
        2cc7f0:	e331001c 	teq	r1, #28	; 0x1c
        2cc7f4:	1a00000d 	bne	2cc830 <analize_sticks(low_type *)+0x9dc>
        2cc7f8:	e5d61001 	ldrb	r1, [r6, #1]
        2cc7fc:	e3310008 	teq	r1, #8	; 0x8
        2cc800:	1a000013 	bne	2cc854 <analize_sticks(low_type *)+0xa00>
        2cc804:	e5961006 	ldr	r1, [r6, #6]
        2cc808:	e59d2014 	ldr	r2, [sp, #20]
        2cc80c:	e5922004 	ldr	r2, [r2, #4]
        2cc810:	e1a02842 	mov	r2, r2, asr #16
        2cc814:	e2422002 	sub	r2, r2, #2	; 0x2
        2cc818:	e1520841 	cmp	r2, r1, asr #16
        2cc81c:	ca00000c 	bgt	2cc854 <analize_sticks(low_type *)+0xa00>
        2cc820:	e5b61010 	ldr	r1, [r6, #16]!
        2cc824:	e581000c 	str	r0, [r1, #12]
        2cc828:	e3300000 	teq	r0, #0	; 0x0
        2cc82c:	15a01010 	strne	r1, [r0, #16]!
        2cc830:	e59d1018 	ldr	r1, [sp, #24]
        2cc834:	e5d10001 	ldrb	r0, [r1, #1]
        2cc838:	e3300003 	teq	r0, #3	; 0x3
        2cc83c:	13300015 	teqne	r0, #21	; 0x15
        2cc840:	1a000003 	bne	2cc854 <analize_sticks(low_type *)+0xa00>
        2cc844:	e3a03002 	mov	r3, #2	; 0x2
        2cc848:	e3a02005 	mov	r2, #5	; 0x5
        2cc84c:	e51b002c 	ldr	r0, [fp, -#44]
        2cc850:	eb615a4b 	bl	1b23184 <$Restore_AN(low_type *, SPEC_TYPE *, unsigned char, short)>
        2cc854:	e59d1018 	ldr	r1, [sp, #24]
        2cc858:	e591000c 	ldr	r0, [r1, #12]
        2cc85c:	e5912004 	ldr	r2, [r1, #4]
        2cc860:	e1a02822 	mov	r2, r2, lsr #16
        2cc864:	e5c12009 	strb	r2, [r1, #9]
        2cc868:	e1a02442 	mov	r2, r2, asr #8
        2cc86c:	e5c12008 	strb	r2, [r1, #8]
        2cc870:	e59d1018 	ldr	r1, [sp, #24]
        2cc874:	e5d12001 	ldrb	r2, [r1, #1]
        2cc878:	e1a02802 	mov	r2, r2, lsl #16
        2cc87c:	e1a02842 	mov	r2, r2, asr #16
        2cc880:	e3520015 	cmp	r2, #21	; 0x15
        2cc884:	0a00000f 	beq	2cc8c8 <analize_sticks(low_type *)+0xa74>
        2cc888:	ca00000b 	bgt	2cc8bc <analize_sticks(low_type *)+0xa68>
        2cc88c:	e3320003 	teq	r2, #3	; 0x3
        2cc890:	0a000058 	beq	2cc9f8 <analize_sticks(low_type *)+0xba4>
        2cc894:	e3320007 	teq	r2, #7	; 0x7
        2cc898:	033a0001 	teqeq	sl, #1	; 0x1
        2cc89c:	059d200c 	ldreq	r2, [sp, #12]
        2cc8a0:	03320000 	teqeq	r2, #0	; 0x0
        2cc8a4:	03380000 	teqeq	r8, #0	; 0x0
        2cc8a8:	03390000 	teqeq	r9, #0	; 0x0
        2cc8ac:	05972008 	ldreq	r2, [r7, #8]
        2cc8b0:	01a02822 	moveq	r2, r2, lsr #16
        2cc8b4:	0a000057 	beq	2cca18 <analize_sticks(low_type *)+0xbc4>
        2cc8b8:	ea000007 	b	2cc8dc <analize_sticks(low_type *)+0xa88>
        2cc8bc:	e3320018 	teq	r2, #24	; 0x18
        2cc8c0:	1332001c 	teqne	r2, #28	; 0x1c
        2cc8c4:	1a000004 	bne	2cc8dc <analize_sticks(low_type *)+0xa88>
        2cc8c8:	e5902006 	ldr	r2, [r0, #6]
        2cc8cc:	e1a02822 	mov	r2, r2, lsr #16
        2cc8d0:	e5c1200b 	strb	r2, [r1, #11]
        2cc8d4:	e1a02442 	mov	r2, r2, asr #8
        2cc8d8:	e5c1200a 	strb	r2, [r1, #10]
        2cc8dc:	e5902004 	ldr	r2, [r0, #4]
        2cc8e0:	e1a02822 	mov	r2, r2, lsr #16
        2cc8e4:	e59d1018 	ldr	r1, [sp, #24]
        2cc8e8:	e5c12005 	strb	r2, [r1, #5]
        2cc8ec:	e1a02442 	mov	r2, r2, asr #8
        2cc8f0:	e5c12004 	strb	r2, [r1, #4]
        2cc8f4:	e590000c 	ldr	r0, [r0, #12]
        2cc8f8:	e59d1018 	ldr	r1, [sp, #24]
        2cc8fc:	e5a1000c 	str	r0, [r1, #12]!
        2cc900:	e3300000 	teq	r0, #0	; 0x0
        2cc904:	159d1018 	ldrne	r1, [sp, #24]
        2cc908:	15801010 	strne	r1, [r0, #16]
        2cc90c:	e59d1018 	ldr	r1, [sp, #24]
        2cc910:	e5d12001 	ldrb	r2, [r1, #1]
        2cc914:	e3320015 	teq	r2, #21	; 0x15
        2cc918:	1a000010 	bne	2cc960 <analize_sticks(low_type *)+0xb0c>
        2cc91c:	e5d02001 	ldrb	r2, [r0, #1]
        2cc920:	e3320002 	teq	r2, #2	; 0x2
        2cc924:	1a00002c 	bne	2cc9dc <analize_sticks(low_type *)+0xb88>
        2cc928:	e5913006 	ldr	r3, [r1, #6]
        2cc92c:	e1a03843 	mov	r3, r3, asr #16
        2cc930:	e5902004 	ldr	r2, [r0, #4]
        2cc934:	e1530842 	cmp	r3, r2, asr #16
        2cc938:	a5903006 	ldrge	r3, [r0, #6]
        2cc93c:	a1a03843 	movge	r3, r3, asr #16
        2cc940:	a5912004 	ldrge	r2, [r1, #4]
        2cc944:	a1530842 	cmpge	r3, r2, asr #16
        2cc948:	ba000023 	blt	2cc9dc <analize_sticks(low_type *)+0xb88>
        2cc94c:	e590000c 	ldr	r0, [r0, #12]
        2cc950:	e5a1000c 	str	r0, [r1, #12]!
        2cc954:	e3300000 	teq	r0, #0	; 0x0
        2cc958:	159d1018 	ldrne	r1, [sp, #24]
        2cc95c:	15801010 	strne	r1, [r0, #16]
        2cc960:	e59d1018 	ldr	r1, [sp, #24]
        2cc964:	e5d12001 	ldrb	r2, [r1, #1]
        2cc968:	e332001c 	teq	r2, #28	; 0x1c
        2cc96c:	1a000011 	bne	2cc9b8 <analize_sticks(low_type *)+0xb64>
        2cc970:	e5d02001 	ldrb	r2, [r0, #1]
        2cc974:	e3320003 	teq	r2, #3	; 0x3
        2cc978:	13320007 	teqne	r2, #7	; 0x7
        2cc97c:	1a000016 	bne	2cc9dc <analize_sticks(low_type *)+0xb88>
        2cc980:	e5d02000 	ldrb	r2, [r0]
        2cc984:	e3320020 	teq	r2, #32	; 0x20
        2cc988:	1a000013 	bne	2cc9dc <analize_sticks(low_type *)+0xb88>
        2cc98c:	e5912006 	ldr	r2, [r1, #6]
        2cc990:	e1a02842 	mov	r2, r2, asr #16
        2cc994:	e5903004 	ldr	r3, [r0, #4]
        2cc998:	e1520843 	cmp	r2, r3, asr #16
        2cc99c:	a5903006 	ldrge	r3, [r0, #6]
        2cc9a0:	a1a03843 	movge	r3, r3, asr #16
        2cc9a4:	a5911004 	ldrge	r1, [r1, #4]
        2cc9a8:	a1530841 	cmpge	r3, r1, asr #16
        2cc9ac:	a1520003 	cmpge	r2, r3
        2cc9b0:	ba000009 	blt	2cc9dc <analize_sticks(low_type *)+0xb88>
        2cc9b4:	eb6134bf 	bl	1b19cb8 <$DelFromSPECLList(SPEC_TYPE *)>
        2cc9b8:	e59d0018 	ldr	r0, [sp, #24]
        2cc9bc:	e5d00001 	ldrb	r0, [r0, #1]
        2cc9c0:	e3300003 	teq	r0, #3	; 0x3
        2cc9c4:	13300007 	teqne	r0, #7	; 0x7
        2cc9c8:	1a000003 	bne	2cc9dc <analize_sticks(low_type *)+0xb88>
        2cc9cc:	e1a01005 	mov	r1, r5
        2cc9d0:	e59d201c 	ldr	r2, [sp, #28]
        2cc9d4:	e28d0018 	add	r0, sp, #24	; 0x18
        2cc9d8:	eb613098 	bl	1b18c40 <$check_IU_ID_in_crossing__FPP9SPEC_TYPEPsT2>
        2cc9dc:	e59d0018 	ldr	r0, [sp, #24]
        2cc9e0:	e590000c 	ldr	r0, [r0, #12]
        2cc9e4:	e58d0018 	str	r0, [sp, #24]
        2cc9e8:	e3300000 	teq	r0, #0	; 0x0
        2cc9ec:	1afffd2b 	bne	2cbea0 <analize_sticks(low_type *)+0x4c>
        2cc9f0:	e3a00000 	mov	r0, #0	; 0x0
        2cc9f4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2cc9f8:	e59d200c 	ldr	r2, [sp, #12]
        2cc9fc:	e3320001 	teq	r2, #1	; 0x1
        2cca00:	033a0000 	teqeq	sl, #0	; 0x0
        2cca04:	03380000 	teqeq	r8, #0	; 0x0
        2cca08:	03390000 	teqeq	r9, #0	; 0x0
        2cca0c:	1affffb2 	bne	2cc8dc <analize_sticks(low_type *)+0xa88>
        2cca10:	e5942008 	ldr	r2, [r4, #8]
        2cca14:	e1a02822 	mov	r2, r2, lsr #16
        2cca18:	e5c12009 	strb	r2, [r1, #9]
        2cca1c:	e1a02442 	mov	r2, r2, asr #8
        2cca20:	e5c12008 	strb	r2, [r1, #8]
        2cca24:	eaffffac 	b	2cc8dc <analize_sticks(low_type *)+0xa88>
    */
}

/**
 * Symbol: analize_circles(low_type *)
 * Address: 002cca44
 */
analize_circles(low_type *) {
    /*
        2cca44:	e1a0c00d 	mov	ip, sp
        2cca48:	e92ddff1 	stmdb	sp!, {r0, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2cca4c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2cca50:	e24dd078 	sub	sp, sp, #120	; 0x78
        2cca54:	e51b002c 	ldr	r0, [fp, -#44]
        2cca58:	e5b03040 	ldr	r3, [r0, #64]!
        2cca5c:	e58d3074 	str	r3, [sp, #116]
        2cca60:	e51b002c 	ldr	r0, [fp, -#44]
        2cca64:	e5b02034 	ldr	r2, [r0, #52]!
        2cca68:	e58d2070 	str	r2, [sp, #112]
        2cca6c:	e51b002c 	ldr	r0, [fp, -#44]
        2cca70:	e5900038 	ldr	r0, [r0, #56]
        2cca74:	e1b04003 	movs	r4, r3
        2cca78:	e58d006c 	str	r0, [sp, #108]
        2cca7c:	0a0002ec 	beq	2cd634 <analize_circles(low_type *)+0xbf0>
        2cca80:	e5d40000 	ldrb	r0, [r4]
        2cca84:	e3300006 	teq	r0, #6	; 0x6
        2cca88:	05d40001 	ldreqb	r0, [r4, #1]
        2cca8c:	03300000 	teqeq	r0, #0	; 0x0
        2cca90:	1a0002e4 	bne	2cd628 <analize_circles(low_type *)+0xbe4>
        2cca94:	e3a01000 	mov	r1, #0	; 0x0
        2cca98:	e5940010 	ldr	r0, [r4, #16]
        2cca9c:	e594500c 	ldr	r5, [r4, #12]
        2ccaa0:	e58d1060 	str	r1, [sp, #96]
        2ccaa4:	e58d1064 	str	r1, [sp, #100]
        2ccaa8:	e3a0a000 	mov	sl, #0	; 0x0
        2ccaac:	e3a08000 	mov	r8, #0	; 0x0
        2ccab0:	e3a09000 	mov	r9, #0	; 0x0
        2ccab4:	e3a07000 	mov	r7, #0	; 0x0
        2ccab8:	e3a02000 	mov	r2, #0	; 0x0
        2ccabc:	e58d1068 	str	r1, [sp, #104]
        2ccac0:	e58d2058 	str	r2, [sp, #88]
        2ccac4:	e58d705c 	str	r7, [sp, #92]
        2ccac8:	e58d2054 	str	r2, [sp, #84]
        2ccacc:	e3a06000 	mov	r6, #0	; 0x0
        2ccad0:	e58d2050 	str	r2, [sp, #80]
        2ccad4:	e3a01000 	mov	r1, #0	; 0x0
        2ccad8:	e58d203c 	str	r2, [sp, #60]
        2ccadc:	e5c41003 	strb	r1, [r4, #3]
        2ccae0:	e5d01000 	ldrb	r1, [r0]
        2ccae4:	e3310006 	teq	r1, #6	; 0x6
        2ccae8:	1a00000e 	bne	2ccb28 <analize_circles(low_type *)+0xe4>
        2ccaec:	e5d01001 	ldrb	r1, [r0, #1]
        2ccaf0:	e3310000 	teq	r1, #0	; 0x0
        2ccaf4:	0a00002f 	beq	2ccbb8 <analize_circles(low_type *)+0x174>
        2ccaf8:	e5951004 	ldr	r1, [r5, #4]
        2ccafc:	e1a01841 	mov	r1, r1, asr #16
        2ccb00:	e5902006 	ldr	r2, [r0, #6]
        2ccb04:	e1510842 	cmp	r1, r2, asr #16
        2ccb08:	ca00002a 	bgt	2ccbb8 <analize_circles(low_type *)+0x174>
        2ccb0c:	e5942006 	ldr	r2, [r4, #6]
        2ccb10:	e1a02842 	mov	r2, r2, asr #16
        2ccb14:	e5901010 	ldr	r1, [r0, #16]
        2ccb18:	e5911006 	ldr	r1, [r1, #6]
        2ccb1c:	e1520841 	cmp	r2, r1, asr #16
        2ccb20:	aa0002bf 	bge	2cd624 <analize_circles(low_type *)+0xbe0>
        2ccb24:	ea000023 	b	2ccbb8 <analize_circles(low_type *)+0x174>
        2ccb28:	e3310009 	teq	r1, #9	; 0x9
        2ccb2c:	1a00000d 	bne	2ccb68 <analize_circles(low_type *)+0x124>
        2ccb30:	e5951004 	ldr	r1, [r5, #4]
        2ccb34:	e1a01841 	mov	r1, r1, asr #16
        2ccb38:	e5902004 	ldr	r2, [r0, #4]
        2ccb3c:	e1510842 	cmp	r1, r2, asr #16
        2ccb40:	ca000004 	bgt	2ccb58 <analize_circles(low_type *)+0x114>
        2ccb44:	e5943006 	ldr	r3, [r4, #6]
        2ccb48:	e1a03843 	mov	r3, r3, asr #16
        2ccb4c:	e5902006 	ldr	r2, [r0, #6]
        2ccb50:	e1530842 	cmp	r3, r2, asr #16
        2ccb54:	aa0002b2 	bge	2cd624 <analize_circles(low_type *)+0xbe0>
        2ccb58:	e5900010 	ldr	r0, [r0, #16]
        2ccb5c:	e5d02000 	ldrb	r2, [r0]
        2ccb60:	e3320009 	teq	r2, #9	; 0x9
        2ccb64:	0afffff3 	beq	2ccb38 <analize_circles(low_type *)+0xf4>
        2ccb68:	e5d01000 	ldrb	r1, [r0]
        2ccb6c:	e3310006 	teq	r1, #6	; 0x6
        2ccb70:	0a000002 	beq	2ccb80 <analize_circles(low_type *)+0x13c>
        2ccb74:	e5951004 	ldr	r1, [r5, #4]
        2ccb78:	e1a01841 	mov	r1, r1, asr #16
        2ccb7c:	ea000082 	b	2ccd8c <analize_circles(low_type *)+0x348>
        2ccb80:	e5d01001 	ldrb	r1, [r0, #1]
        2ccb84:	e3310000 	teq	r1, #0	; 0x0
        2ccb88:	0a00000a 	beq	2ccbb8 <analize_circles(low_type *)+0x174>
        2ccb8c:	e5951004 	ldr	r1, [r5, #4]
        2ccb90:	e1a01841 	mov	r1, r1, asr #16
        2ccb94:	e5902006 	ldr	r2, [r0, #6]
        2ccb98:	e1510842 	cmp	r1, r2, asr #16
        2ccb9c:	ca000005 	bgt	2ccbb8 <analize_circles(low_type *)+0x174>
        2ccba0:	e5942006 	ldr	r2, [r4, #6]
        2ccba4:	e1a02842 	mov	r2, r2, asr #16
        2ccba8:	e5901010 	ldr	r1, [r0, #16]
        2ccbac:	e5911006 	ldr	r1, [r1, #6]
        2ccbb0:	e1520841 	cmp	r2, r1, asr #16
        2ccbb4:	aa00029a 	bge	2cd624 <analize_circles(low_type *)+0xbe0>
        2ccbb8:	e5900010 	ldr	r0, [r0, #16]
        2ccbbc:	eaffffec 	b	2ccb74 <analize_circles(low_type *)+0x130>
        2ccbc0:	e5d03000 	ldrb	r3, [r0]
        2ccbc4:	e3330001 	teq	r3, #1	; 0x1
        2ccbc8:	0a000006 	beq	2ccbe8 <analize_circles(low_type *)+0x1a4>
        2ccbcc:	e3330003 	teq	r3, #3	; 0x3
        2ccbd0:	0a000020 	beq	2ccc58 <analize_circles(low_type *)+0x214>
        2ccbd4:	e3330010 	teq	r3, #16	; 0x10
        2ccbd8:	0a00003d 	beq	2cccd4 <analize_circles(low_type *)+0x290>
        2ccbdc:	e3330044 	teq	r3, #68	; 0x44
        2ccbe0:	0a00028f 	beq	2cd624 <analize_circles(low_type *)+0xbe0>
        2ccbe4:	ea00004e 	b	2ccd24 <analize_circles(low_type *)+0x2e0>
        2ccbe8:	e590c006 	ldr	ip, [r0, #6]
        2ccbec:	e1a0c84c 	mov	ip, ip, asr #16
        2ccbf0:	e5943004 	ldr	r3, [r4, #4]
        2ccbf4:	e15c0843 	cmp	ip, r3, asr #16
        2ccbf8:	aa000002 	bge	2ccc08 <analize_circles(low_type *)+0x1c4>
        2ccbfc:	e5953006 	ldr	r3, [r5, #6]
        2ccc00:	e1520843 	cmp	r2, r3, asr #16
        2ccc04:	ca000007 	bgt	2ccc28 <analize_circles(low_type *)+0x1e4>
        2ccc08:	e5d02001 	ldrb	r2, [r0, #1]
        2ccc0c:	e3320003 	teq	r2, #3	; 0x3
        2ccc10:	159d205c 	ldrne	r2, [sp, #92]
        2ccc14:	059d2054 	ldreq	r2, [sp, #84]
        2ccc18:	e2822001 	add	r2, r2, #1	; 0x1
        2ccc1c:	158d205c 	strne	r2, [sp, #92]
        2ccc20:	058d2054 	streq	r2, [sp, #84]
        2ccc24:	ea00003e 	b	2ccd24 <analize_circles(low_type *)+0x2e0>
        2ccc28:	e58d0068 	str	r0, [sp, #104]
        2ccc2c:	e5d02001 	ldrb	r2, [r0, #1]
        2ccc30:	e3320003 	teq	r2, #3	; 0x3
        2ccc34:	02899001 	addeq	r9, r9, #1	; 0x1
        2ccc38:	0a000039 	beq	2ccd24 <analize_circles(low_type *)+0x2e0>
        2ccc3c:	e28aa001 	add	sl, sl, #1	; 0x1
        2ccc40:	e3360000 	teq	r6, #0	; 0x0
        2ccc44:	15d02002 	ldrneb	r2, [r0, #2]
        2ccc48:	12022030 	andne	r2, r2, #48	; 0x30
        2ccc4c:	11320006 	teqne	r2, r6
        2ccc50:	1a000273 	bne	2cd624 <analize_circles(low_type *)+0xbe0>
        2ccc54:	ea00001b 	b	2cccc8 <analize_circles(low_type *)+0x284>
        2ccc58:	e590c006 	ldr	ip, [r0, #6]
        2ccc5c:	e1a0c84c 	mov	ip, ip, asr #16
        2ccc60:	e5943004 	ldr	r3, [r4, #4]
        2ccc64:	e15c0843 	cmp	ip, r3, asr #16
        2ccc68:	aa000002 	bge	2ccc78 <analize_circles(low_type *)+0x234>
        2ccc6c:	e5953006 	ldr	r3, [r5, #6]
        2ccc70:	e1520843 	cmp	r2, r3, asr #16
        2ccc74:	ca000008 	bgt	2ccc9c <analize_circles(low_type *)+0x258>
        2ccc78:	e5d02001 	ldrb	r2, [r0, #1]
        2ccc7c:	e3320007 	teq	r2, #7	; 0x7
        2ccc80:	159d2058 	ldrne	r2, [sp, #88]
        2ccc84:	059d2050 	ldreq	r2, [sp, #80]
        2ccc88:	e2822001 	add	r2, r2, #1	; 0x1
        2ccc8c:	158d2058 	strne	r2, [sp, #88]
        2ccc90:	058d2050 	streq	r2, [sp, #80]
        2ccc94:	e58d0060 	str	r0, [sp, #96]
        2ccc98:	ea000021 	b	2ccd24 <analize_circles(low_type *)+0x2e0>
        2ccc9c:	e58d0064 	str	r0, [sp, #100]
        2ccca0:	e5d02001 	ldrb	r2, [r0, #1]
        2ccca4:	e3320007 	teq	r2, #7	; 0x7
        2ccca8:	02877001 	addeq	r7, r7, #1	; 0x1
        2cccac:	0a00001c 	beq	2ccd24 <analize_circles(low_type *)+0x2e0>
        2cccb0:	e2888001 	add	r8, r8, #1	; 0x1
        2cccb4:	e3360000 	teq	r6, #0	; 0x0
        2cccb8:	15d02002 	ldrneb	r2, [r0, #2]
        2cccbc:	12022030 	andne	r2, r2, #48	; 0x30
        2cccc0:	11320006 	teqne	r2, r6
        2cccc4:	1a000256 	bne	2cd624 <analize_circles(low_type *)+0xbe0>
        2cccc8:	e5d02002 	ldrb	r2, [r0, #2]
        2ccccc:	e2026030 	and	r6, r2, #48	; 0x30
        2cccd0:	ea000013 	b	2ccd24 <analize_circles(low_type *)+0x2e0>
        2cccd4:	e5d02014 	ldrb	r2, [r0, #20]
        2cccd8:	e3320009 	teq	r2, #9	; 0x9
        2cccdc:	0a000010 	beq	2ccd24 <analize_circles(low_type *)+0x2e0>
        2ccce0:	e5900010 	ldr	r0, [r0, #16]
        2ccce4:	e5d02000 	ldrb	r2, [r0]
        2ccce8:	e332000a 	teq	r2, #10	; 0xa
        2cccec:	13320010 	teqne	r2, #16	; 0x10
        2cccf0:	0afffffa 	beq	2ccce0 <analize_circles(low_type *)+0x29c>
        2cccf4:	e5d02001 	ldrb	r2, [r0, #1]
        2cccf8:	e3320012 	teq	r2, #18	; 0x12
        2cccfc:	13320001 	teqne	r2, #1	; 0x1
        2ccd00:	13320013 	teqne	r2, #19	; 0x13
        2ccd04:	13320014 	teqne	r2, #20	; 0x14
        2ccd08:	1332000d 	teqne	r2, #13	; 0xd
        2ccd0c:	13320010 	teqne	r2, #16	; 0x10
        2ccd10:	1a000024 	bne	2ccda8 <analize_circles(low_type *)+0x364>
        2ccd14:	e5900004 	ldr	r0, [r0, #4]
        2ccd18:	e1510840 	cmp	r1, r0, asr #16
        2ccd1c:	da000240 	ble	2cd624 <analize_circles(low_type *)+0xbe0>
        2ccd20:	ea000020 	b	2ccda8 <analize_circles(low_type *)+0x364>
        2ccd24:	e5900010 	ldr	r0, [r0, #16]
        2ccd28:	e5d02000 	ldrb	r2, [r0]
        2ccd2c:	e3320006 	teq	r2, #6	; 0x6
        2ccd30:	1a000003 	bne	2ccd44 <analize_circles(low_type *)+0x300>
        2ccd34:	e5d03001 	ldrb	r3, [r0, #1]
        2ccd38:	e3330000 	teq	r3, #0	; 0x0
        2ccd3c:	0a000011 	beq	2ccd88 <analize_circles(low_type *)+0x344>
        2ccd40:	ea000001 	b	2ccd4c <analize_circles(low_type *)+0x308>
        2ccd44:	e3320009 	teq	r2, #9	; 0x9
        2ccd48:	1a000009 	bne	2ccd74 <analize_circles(low_type *)+0x330>
        2ccd4c:	e5903004 	ldr	r3, [r0, #4]
        2ccd50:	e1510843 	cmp	r1, r3, asr #16
        2ccd54:	ca000005 	bgt	2ccd70 <analize_circles(low_type *)+0x32c>
        2ccd58:	e3320009 	teq	r2, #9	; 0x9
        2ccd5c:	05d02001 	ldreqb	r2, [r0, #1]
        2ccd60:	03320003 	teqeq	r2, #3	; 0x3
        2ccd64:	1a00022e 	bne	2cd624 <analize_circles(low_type *)+0xbe0>
        2ccd68:	e3a02001 	mov	r2, #1	; 0x1
        2ccd6c:	e58d203c 	str	r2, [sp, #60]
        2ccd70:	e5900010 	ldr	r0, [r0, #16]
        2ccd74:	e5d02000 	ldrb	r2, [r0]
        2ccd78:	e3320006 	teq	r2, #6	; 0x6
        2ccd7c:	05d02001 	ldreqb	r2, [r0, #1]
        2ccd80:	03320000 	teqeq	r2, #0	; 0x0
        2ccd84:	1a000000 	bne	2ccd8c <analize_circles(low_type *)+0x348>
        2ccd88:	e5900010 	ldr	r0, [r0, #16]
        2ccd8c:	e5902004 	ldr	r2, [r0, #4]
        2ccd90:	e1a02842 	mov	r2, r2, asr #16
        2ccd94:	e1520001 	cmp	r2, r1
        2ccd98:	ba000002 	blt	2ccda8 <analize_circles(low_type *)+0x364>
        2ccd9c:	e59d3074 	ldr	r3, [sp, #116]
        2ccda0:	e1300003 	teq	r0, r3
        2ccda4:	1affff85 	bne	2ccbc0 <analize_circles(low_type *)+0x17c>
        2ccda8:	e33a0000 	teq	sl, #0	; 0x0
        2ccdac:	03380000 	teqeq	r8, #0	; 0x0
        2ccdb0:	03390000 	teqeq	r9, #0	; 0x0
        2ccdb4:	03370000 	teqeq	r7, #0	; 0x0
        2ccdb8:	e59d203c 	ldr	r2, [sp, #60]
        2ccdbc:	1a00006d 	bne	2ccf78 <analize_circles(low_type *)+0x534>
        2ccdc0:	e3320000 	teq	r2, #0	; 0x0
        2ccdc4:	1a000216 	bne	2cd624 <analize_circles(low_type *)+0xbe0>
        2ccdc8:	e59d205c 	ldr	r2, [sp, #92]
        2ccdcc:	e3320000 	teq	r2, #0	; 0x0
        2ccdd0:	059d0058 	ldreq	r0, [sp, #88]
        2ccdd4:	03300000 	teqeq	r0, #0	; 0x0
        2ccdd8:	059d2054 	ldreq	r2, [sp, #84]
        2ccddc:	03320000 	teqeq	r2, #0	; 0x0
        2ccde0:	059d2050 	ldreq	r2, [sp, #80]
        2ccde4:	03320000 	teqeq	r2, #0	; 0x0
        2ccde8:	0a00020d 	beq	2cd624 <analize_circles(low_type *)+0xbe0>
        2ccdec:	e5d50003 	ldrb	r0, [r5, #3]
        2ccdf0:	e3300064 	teq	r0, #100	; 0x64
        2ccdf4:	0a00020a 	beq	2cd624 <analize_circles(low_type *)+0xbe0>
        2ccdf8:	e1a0200d 	mov	r2, sp
        2ccdfc:	e1a01004 	mov	r1, r4
        2cce00:	e51b002c 	ldr	r0, [fp, -#44]
        2cce04:	eb61484b 	bl	1b1ef38 <$FillCrossInfo(low_type *, SPEC_TYPE *, CrossInfoType *)>
        2cce08:	e59d6018 	ldr	r6, [sp, #24]
        2cce0c:	e1a06846 	mov	r6, r6, asr #16
        2cce10:	e59d701a 	ldr	r7, [sp, #26]
        2cce14:	e1a07847 	mov	r7, r7, asr #16
        2cce18:	e59d1012 	ldr	r1, [sp, #18]
        2cce1c:	e1a01841 	mov	r1, r1, asr #16
        2cce20:	e59d0016 	ldr	r0, [sp, #22]
        2cce24:	e0810840 	add	r0, r1, r0, asr #16
        2cce28:	e1a000c0 	mov	r0, r0, asr #1
        2cce2c:	e51b102c 	ldr	r1, [fp, -#44]
        2cce30:	eb6137bc 	bl	1b1ad28 <$HeightInLine(short, low_type *)>
        2cce34:	e5c40002 	strb	r0, [r4, #2]
        2cce38:	e51b002c 	ldr	r0, [fp, -#44]
        2cce3c:	e5900098 	ldr	r0, [r0, #152]
        2cce40:	e1a00840 	mov	r0, r0, asr #16
        2cce44:	e1500006 	cmp	r0, r6
        2cce48:	b1560087 	cmplt	r6, r7, lsl #1
        2cce4c:	ba000001 	blt	2cce58 <analize_circles(low_type *)+0x414>
        2cce50:	e1500007 	cmp	r0, r7
        2cce54:	aa000042 	bge	2ccf64 <analize_circles(low_type *)+0x520>
        2cce58:	e28d2058 	add	r2, sp, #88	; 0x58
        2cce5c:	e8920005 	ldmia	r2, {r0, r2}
        2cce60:	e0928000 	adds	r8, r2, r0
        2cce64:	1a000016 	bne	2ccec4 <analize_circles(low_type *)+0x480>
        2cce68:	e59d2054 	ldr	r2, [sp, #84]
        2cce6c:	e3320001 	teq	r2, #1	; 0x1
        2cce70:	1a000007 	bne	2cce94 <analize_circles(low_type *)+0x450>
        2cce74:	e3a0001d 	mov	r0, #29	; 0x1d
        2cce78:	e5c50001 	strb	r0, [r5, #1]
        2cce7c:	e5c40001 	strb	r0, [r4, #1]
        2cce80:	e59d0012 	ldr	r0, [sp, #18]
        2cce84:	e1a00840 	mov	r0, r0, asr #16
        2cce88:	e51b102c 	ldr	r1, [fp, -#44]
        2cce8c:	eb6137a5 	bl	1b1ad28 <$HeightInLine(short, low_type *)>
        2cce90:	e5c40002 	strb	r0, [r4, #2]
        2cce94:	e59d2050 	ldr	r2, [sp, #80]
        2cce98:	e3320001 	teq	r2, #1	; 0x1
        2cce9c:	1a000030 	bne	2ccf64 <analize_circles(low_type *)+0x520>
        2ccea0:	e3a0001e 	mov	r0, #30	; 0x1e
        2ccea4:	e5c50001 	strb	r0, [r5, #1]
        2ccea8:	e5c40001 	strb	r0, [r4, #1]
        2cceac:	e59d0016 	ldr	r0, [sp, #22]
        2cceb0:	e1a00840 	mov	r0, r0, asr #16
        2cceb4:	e51b102c 	ldr	r1, [fp, -#44]
        2cceb8:	eb61379a 	bl	1b1ad28 <$HeightInLine(short, low_type *)>
        2ccebc:	e5c40002 	strb	r0, [r4, #2]
        2ccec0:	ea000027 	b	2ccf64 <analize_circles(low_type *)+0x520>
        2ccec4:	e3580003 	cmp	r8, #3	; 0x3
        2ccec8:	ca000025 	bgt	2ccf64 <analize_circles(low_type *)+0x520>
        2ccecc:	e59d0060 	ldr	r0, [sp, #96]
        2cced0:	e3300000 	teq	r0, #0	; 0x0
        2cced4:	0a000006 	beq	2ccef4 <analize_circles(low_type *)+0x4b0>
        2cced8:	e51b302c 	ldr	r3, [fp, -#44]
        2ccedc:	e1a00004 	mov	r0, r4
        2ccee0:	e3a01000 	mov	r1, #0	; 0x0
        2ccee4:	e59d2060 	ldr	r2, [sp, #96]
        2ccee8:	eb615069 	bl	1b21094 <$IsDUR__FP9SPEC_TYPEN21P8low_type>
        2cceec:	e3300000 	teq	r0, #0	; 0x0
        2ccef0:	1a0001cb 	bne	2cd624 <analize_circles(low_type *)+0xbe0>
        2ccef4:	e5940010 	ldr	r0, [r4, #16]
        2ccef8:	ea000000 	b	2ccf00 <analize_circles(low_type *)+0x4bc>
        2ccefc:	e5900010 	ldr	r0, [r0, #16]
        2ccf00:	e3300000 	teq	r0, #0	; 0x0
        2ccf04:	0a000016 	beq	2ccf64 <analize_circles(low_type *)+0x520>
        2ccf08:	e5d01001 	ldrb	r1, [r0, #1]
        2ccf0c:	e3310002 	teq	r1, #2	; 0x2
        2ccf10:	13310008 	teqne	r1, #8	; 0x8
        2ccf14:	1afffff8 	bne	2ccefc <analize_circles(low_type *)+0x4b8>
        2ccf18:	e3300000 	teq	r0, #0	; 0x0
        2ccf1c:	0a000010 	beq	2ccf64 <analize_circles(low_type *)+0x520>
        2ccf20:	e3380002 	teq	r8, #2	; 0x2
        2ccf24:	0a000004 	beq	2ccf3c <analize_circles(low_type *)+0x4f8>
        2ccf28:	e1570006 	cmp	r7, r6
        2ccf2c:	ca000002 	bgt	2ccf3c <analize_circles(low_type *)+0x4f8>
        2ccf30:	e357003c 	cmp	r7, #60	; 0x3c
        2ccf34:	a356003c 	cmpge	r6, #60	; 0x3c
        2ccf38:	ba000009 	blt	2ccf64 <analize_circles(low_type *)+0x520>
        2ccf3c:	e3a01005 	mov	r1, #5	; 0x5
        2ccf40:	e5c51001 	strb	r1, [r5, #1]
        2ccf44:	e5c41001 	strb	r1, [r4, #1]
        2ccf48:	e5d41002 	ldrb	r1, [r4, #2]
        2ccf4c:	e3c11030 	bic	r1, r1, #48	; 0x30
        2ccf50:	e5d00002 	ldrb	r0, [r0, #2]
        2ccf54:	e2000030 	and	r0, r0, #48	; 0x30
        2ccf58:	e1810000 	orr	r0, r1, r0
        2ccf5c:	e5c40002 	strb	r0, [r4, #2]
        2ccf60:	ea0001af 	b	2cd624 <analize_circles(low_type *)+0xbe0>
        2ccf64:	e5d40001 	ldrb	r0, [r4, #1]
        2ccf68:	e3300000 	teq	r0, #0	; 0x0
        2ccf6c:	01a0000d 	moveq	r0, sp
        2ccf70:	0b6143d3 	bleq	1b1dec4 <$CheckSmallGamma(CrossInfoType *)>
        2ccf74:	ea0001aa 	b	2cd624 <analize_circles(low_type *)+0xbe0>
        2ccf78:	e3320000 	teq	r2, #0	; 0x0
        2ccf7c:	0a000002 	beq	2ccf8c <analize_circles(low_type *)+0x548>
        2ccf80:	e3360000 	teq	r6, #0	; 0x0
        2ccf84:	13360010 	teqne	r6, #16	; 0x10
        2ccf88:	0a0001a5 	beq	2cd624 <analize_circles(low_type *)+0xbe0>
        2ccf8c:	e3a00000 	mov	r0, #0	; 0x0
        2ccf90:	e33a0001 	teq	sl, #1	; 0x1
        2ccf94:	03380001 	teqeq	r8, #1	; 0x1
        2ccf98:	1a000004 	bne	2ccfb0 <analize_circles(low_type *)+0x56c>
        2ccf9c:	e59d1068 	ldr	r1, [sp, #104]
        2ccfa0:	e5d11002 	ldrb	r1, [r1, #2]
        2ccfa4:	e201100f 	and	r1, r1, #15	; 0xf
        2ccfa8:	e3510005 	cmp	r1, #5	; 0x5
        2ccfac:	d3a00001 	movle	r0, #1	; 0x1
        2ccfb0:	e089100a 	add	r1, r9, sl
        2ccfb4:	e3310001 	teq	r1, #1	; 0x1
        2ccfb8:	03300000 	teqeq	r0, #0	; 0x0
        2ccfbc:	1a000005 	bne	2ccfd8 <analize_circles(low_type *)+0x594>
        2ccfc0:	e51b202c 	ldr	r2, [fp, -#44]
        2ccfc4:	e1a00004 	mov	r0, r4
        2ccfc8:	e59d1068 	ldr	r1, [sp, #104]
        2ccfcc:	eb6160bf 	bl	1b252d0 <$is_DDL__FP9SPEC_TYPET1P8low_type>
        2ccfd0:	e3300000 	teq	r0, #0	; 0x0
        2ccfd4:	1a000190 	bne	2cd61c <analize_circles(low_type *)+0xbd8>
        2ccfd8:	e3370001 	teq	r7, #1	; 0x1
        2ccfdc:	059d2050 	ldreq	r2, [sp, #80]
        2ccfe0:	03320000 	teqeq	r2, #0	; 0x0
        2ccfe4:	0a000003 	beq	2ccff8 <analize_circles(low_type *)+0x5b4>
        2ccfe8:	e3380001 	teq	r8, #1	; 0x1
        2ccfec:	059d2058 	ldreq	r2, [sp, #88]
        2ccff0:	03320000 	teqeq	r2, #0	; 0x0
        2ccff4:	1a000001 	bne	2cd000 <analize_circles(low_type *)+0x5bc>
        2ccff8:	e59d2064 	ldr	r2, [sp, #100]
        2ccffc:	ea000008 	b	2cd024 <analize_circles(low_type *)+0x5e0>
        2cd000:	e3370000 	teq	r7, #0	; 0x0
        2cd004:	059d2050 	ldreq	r2, [sp, #80]
        2cd008:	03320001 	teqeq	r2, #1	; 0x1
        2cd00c:	0a000003 	beq	2cd020 <analize_circles(low_type *)+0x5dc>
        2cd010:	e3380000 	teq	r8, #0	; 0x0
        2cd014:	059d2058 	ldreq	r2, [sp, #88]
        2cd018:	03320001 	teqeq	r2, #1	; 0x1
        2cd01c:	1a00000c 	bne	2cd054 <analize_circles(low_type *)+0x610>
        2cd020:	e59d2060 	ldr	r2, [sp, #96]
        2cd024:	e3320000 	teq	r2, #0	; 0x0
        2cd028:	0a000009 	beq	2cd054 <analize_circles(low_type *)+0x610>
        2cd02c:	e5d20002 	ldrb	r0, [r2, #2]
        2cd030:	e200000f 	and	r0, r0, #15	; 0xf
        2cd034:	e3500009 	cmp	r0, #9	; 0x9
        2cd038:	ca000005 	bgt	2cd054 <analize_circles(low_type *)+0x610>
        2cd03c:	e51b302c 	ldr	r3, [fp, -#44]
        2cd040:	e1a00004 	mov	r0, r4
        2cd044:	e59d1068 	ldr	r1, [sp, #104]
        2cd048:	eb615011 	bl	1b21094 <$IsDUR__FP9SPEC_TYPEN21P8low_type>
        2cd04c:	e3300000 	teq	r0, #0	; 0x0
        2cd050:	1a000171 	bne	2cd61c <analize_circles(low_type *)+0xbd8>
        2cd054:	e08a0008 	add	r0, sl, r8
        2cd058:	e3300001 	teq	r0, #1	; 0x1
        2cd05c:	00891007 	addeq	r1, r9, r7
        2cd060:	03310000 	teqeq	r1, #0	; 0x0
        2cd064:	0a000003 	beq	2cd078 <analize_circles(low_type *)+0x634>
        2cd068:	e3300000 	teq	r0, #0	; 0x0
        2cd06c:	00890007 	addeq	r0, r9, r7
        2cd070:	03300001 	teqeq	r0, #1	; 0x1
        2cd074:	1a000106 	bne	2cd494 <analize_circles(low_type *)+0xa50>
        2cd078:	e3380001 	teq	r8, #1	; 0x1
        2cd07c:	0a000003 	beq	2cd090 <analize_circles(low_type *)+0x64c>
        2cd080:	e3370001 	teq	r7, #1	; 0x1
        2cd084:	059d203c 	ldreq	r2, [sp, #60]
        2cd088:	03320000 	teqeq	r2, #0	; 0x0
        2cd08c:	1a000002 	bne	2cd09c <analize_circles(low_type *)+0x658>
        2cd090:	e3a00006 	mov	r0, #6	; 0x6
        2cd094:	e5c40001 	strb	r0, [r4, #1]
        2cd098:	ea000002 	b	2cd0a8 <analize_circles(low_type *)+0x664>
        2cd09c:	e59d203c 	ldr	r2, [sp, #60]
        2cd0a0:	e3320000 	teq	r2, #0	; 0x0
        2cd0a4:	1a00015e 	bne	2cd624 <analize_circles(low_type *)+0xbe0>
        2cd0a8:	e33a0001 	teq	sl, #1	; 0x1
        2cd0ac:	13390001 	teqne	r9, #1	; 0x1
        2cd0b0:	03a00004 	moveq	r0, #4	; 0x4
        2cd0b4:	05c40001 	streqb	r0, [r4, #1]
        2cd0b8:	e5947006 	ldr	r7, [r4, #6]
        2cd0bc:	e1a07847 	mov	r7, r7, asr #16
        2cd0c0:	e5940004 	ldr	r0, [r4, #4]
        2cd0c4:	e1a00840 	mov	r0, r0, asr #16
        2cd0c8:	e0471000 	sub	r1, r7, r0
        2cd0cc:	e3310001 	teq	r1, #1	; 0x1
        2cd0d0:	10800007 	addne	r0, r0, r7
        2cd0d4:	11a070c0 	movne	r7, r0, asr #1
        2cd0d8:	e5950006 	ldr	r0, [r5, #6]
        2cd0dc:	e1a00840 	mov	r0, r0, asr #16
        2cd0e0:	e5958004 	ldr	r8, [r5, #4]
        2cd0e4:	e1a08848 	mov	r8, r8, asr #16
        2cd0e8:	e0401008 	sub	r1, r0, r8
        2cd0ec:	e3310001 	teq	r1, #1	; 0x1
        2cd0f0:	10880000 	addne	r0, r8, r0
        2cd0f4:	11a080c0 	movne	r8, r0, asr #1
        2cd0f8:	e1a0200d 	mov	r2, sp
        2cd0fc:	e1a01004 	mov	r1, r4
        2cd100:	e51b002c 	ldr	r0, [fp, -#44]
        2cd104:	eb61478b 	bl	1b1ef38 <$FillCrossInfo(low_type *, SPEC_TYPE *, CrossInfoType *)>
        2cd108:	e59d0060 	ldr	r0, [sp, #96]
        2cd10c:	e58d0008 	str	r0, [sp, #8]
        2cd110:	e59d9018 	ldr	r9, [sp, #24]
        2cd114:	e1a09849 	mov	r9, r9, asr #16
        2cd118:	e59da01a 	ldr	sl, [sp, #26]
        2cd11c:	e1a0a84a 	mov	sl, sl, asr #16
        2cd120:	e59d2070 	ldr	r2, [sp, #112]
        2cd124:	e59d306c 	ldr	r3, [sp, #108]
        2cd128:	e92d000c 	stmdb	sp!, {r2, r3}
        2cd12c:	e5953006 	ldr	r3, [r5, #6]
        2cd130:	e1a03843 	mov	r3, r3, asr #16
        2cd134:	e5940004 	ldr	r0, [r4, #4]
        2cd138:	e1a00840 	mov	r0, r0, asr #16
        2cd13c:	e1a02008 	mov	r2, r8
        2cd140:	e1a01007 	mov	r1, r7
        2cd144:	eb615c40 	bl	1b2424c <$cos_vect__FiN31PsT5>
        2cd148:	e28dd008 	add	sp, sp, #8	; 0x8
        2cd14c:	e58d004c 	str	r0, [sp, #76]
        2cd150:	e58d000c 	str	r0, [sp, #12]
        2cd154:	e5d40001 	ldrb	r0, [r4, #1]
        2cd158:	e3300004 	teq	r0, #4	; 0x4
        2cd15c:	159d7064 	ldrne	r7, [sp, #100]
        2cd160:	059d7068 	ldreq	r7, [sp, #104]
        2cd164:	e5970008 	ldr	r0, [r7, #8]
        2cd168:	e1a00820 	mov	r0, r0, lsr #16
        2cd16c:	e5c40009 	strb	r0, [r4, #9]
        2cd170:	e1a00440 	mov	r0, r0, asr #8
        2cd174:	e5c40008 	strb	r0, [r4, #8]
        2cd178:	e5971004 	ldr	r1, [r7, #4]
        2cd17c:	e1a01841 	mov	r1, r1, asr #16
        2cd180:	e5970006 	ldr	r0, [r7, #6]
        2cd184:	e0810840 	add	r0, r1, r0, asr #16
        2cd188:	e1a080c0 	mov	r8, r0, asr #1
        2cd18c:	e59d006c 	ldr	r0, [sp, #108]
        2cd190:	e7900088 	ldr	r0, [r0, r8, lsl #1]
        2cd194:	e1a00840 	mov	r0, r0, asr #16
        2cd198:	e51b102c 	ldr	r1, [fp, -#44]
        2cd19c:	eb6136e1 	bl	1b1ad28 <$HeightInLine(short, low_type *)>
        2cd1a0:	e5c40002 	strb	r0, [r4, #2]
        2cd1a4:	e59d203c 	ldr	r2, [sp, #60]
        2cd1a8:	e3320000 	teq	r2, #0	; 0x0
        2cd1ac:	0a000003 	beq	2cd1c0 <analize_circles(low_type *)+0x77c>
        2cd1b0:	e5d40002 	ldrb	r0, [r4, #2]
        2cd1b4:	e200000f 	and	r0, r0, #15	; 0xf
        2cd1b8:	e3500009 	cmp	r0, #9	; 0x9
        2cd1bc:	ca00002d 	bgt	2cd278 <analize_circles(low_type *)+0x834>
        2cd1c0:	e5950004 	ldr	r0, [r5, #4]
        2cd1c4:	e1a00840 	mov	r0, r0, asr #16
        2cd1c8:	e5951006 	ldr	r1, [r5, #6]
        2cd1cc:	e0800841 	add	r0, r0, r1, asr #16
        2cd1d0:	e1a0c0c0 	mov	ip, r0, asr #1
        2cd1d4:	e5940004 	ldr	r0, [r4, #4]
        2cd1d8:	e1a00840 	mov	r0, r0, asr #16
        2cd1dc:	e5941006 	ldr	r1, [r4, #6]
        2cd1e0:	e0800841 	add	r0, r0, r1, asr #16
        2cd1e4:	e1a0e0c0 	mov	lr, r0, asr #1
        2cd1e8:	e28d3040 	add	r3, sp, #64	; 0x40
        2cd1ec:	e28d2044 	add	r2, sp, #68	; 0x44
        2cd1f0:	e5d41001 	ldrb	r1, [r4, #1]
        2cd1f4:	e59d006c 	ldr	r0, [sp, #108]
        2cd1f8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2cd1fc:	e1a02008 	mov	r2, r8
        2cd200:	e1a0100e 	mov	r1, lr
        2cd204:	e1a0000c 	mov	r0, ip
        2cd208:	e59d3080 	ldr	r3, [sp, #128]
        2cd20c:	eb614b81 	bl	1b20018 <$GetMaxDxInGamma__FiN21PsT4UcPiT7>
        2cd210:	e28dd010 	add	sp, sp, #16	; 0x10
        2cd214:	e1a08000 	mov	r8, r0
        2cd218:	e58d001c 	str	r0, [sp, #28]
        2cd21c:	e5951004 	ldr	r1, [r5, #4]
        2cd220:	e1a01821 	mov	r1, r1, lsr #16
        2cd224:	e59d0044 	ldr	r0, [sp, #68]
        2cd228:	e0401001 	sub	r1, r0, r1
        2cd22c:	e5940006 	ldr	r0, [r4, #6]
        2cd230:	e1a00820 	mov	r0, r0, lsr #16
        2cd234:	e59d2040 	ldr	r2, [sp, #64]
        2cd238:	e0400002 	sub	r0, r0, r2
        2cd23c:	e0810400 	add	r0, r1, r0, lsl #8
        2cd240:	e5c50009 	strb	r0, [r5, #9]
        2cd244:	e1a00440 	mov	r0, r0, asr #8
        2cd248:	e5c50008 	strb	r0, [r5, #8]
        2cd24c:	e5c5800b 	strb	r8, [r5, #11]
        2cd250:	e1a00448 	mov	r0, r8, asr #8
        2cd254:	e5c5000a 	strb	r0, [r5, #10]
        2cd258:	e1a01007 	mov	r1, r7
        2cd25c:	e1a0000d 	mov	r0, sp
        2cd260:	eb614f95 	bl	1b210bc <$Isgammathin(CrossInfoType *, SPEC_TYPE *)>
        2cd264:	e3300000 	teq	r0, #0	; 0x0
        2cd268:	0a000006 	beq	2cd288 <analize_circles(low_type *)+0x844>
        2cd26c:	e59d203c 	ldr	r2, [sp, #60]
        2cd270:	e3320000 	teq	r2, #0	; 0x0
        2cd274:	0a0000ea 	beq	2cd624 <analize_circles(low_type *)+0xbe0>
        2cd278:	e3a01000 	mov	r1, #0	; 0x0
        2cd27c:	e5c51001 	strb	r1, [r5, #1]
        2cd280:	e5c41001 	strb	r1, [r4, #1]
        2cd284:	ea0000e6 	b	2cd624 <analize_circles(low_type *)+0xbe0>
        2cd288:	e5d40001 	ldrb	r0, [r4, #1]
        2cd28c:	e3300004 	teq	r0, #4	; 0x4
        2cd290:	1a00001b 	bne	2cd304 <analize_circles(low_type *)+0x8c0>
        2cd294:	e59d0068 	ldr	r0, [sp, #104]
        2cd298:	e5d00001 	ldrb	r0, [r0, #1]
        2cd29c:	e3300003 	teq	r0, #3	; 0x3
        2cd2a0:	1a00004c 	bne	2cd3d8 <analize_circles(low_type *)+0x994>
        2cd2a4:	e5d40003 	ldrb	r0, [r4, #3]
        2cd2a8:	e3800008 	orr	r0, r0, #8	; 0x8
        2cd2ac:	e5c40003 	strb	r0, [r4, #3]
        2cd2b0:	e3a01002 	mov	r1, #2	; 0x2
        2cd2b4:	e59d0068 	ldr	r0, [sp, #104]
        2cd2b8:	e5c01001 	strb	r1, [r0, #1]
        2cd2bc:	e59d0040 	ldr	r0, [sp, #64]
        2cd2c0:	e59d2070 	ldr	r2, [sp, #112]
        2cd2c4:	e7921080 	ldr	r1, [r2, r0, lsl #1]
        2cd2c8:	e1a01841 	mov	r1, r1, asr #16
        2cd2cc:	e59d0044 	ldr	r0, [sp, #68]
        2cd2d0:	e7920080 	ldr	r0, [r2, r0, lsl #1]
        2cd2d4:	e1a00840 	mov	r0, r0, asr #16
        2cd2d8:	e1510000 	cmp	r1, r0
        2cd2dc:	d3a06020 	movle	r6, #32	; 0x20
        2cd2e0:	c3a06010 	movgt	r6, #16	; 0x10
        2cd2e4:	e59d0068 	ldr	r0, [sp, #104]
        2cd2e8:	e5d00002 	ldrb	r0, [r0, #2]
        2cd2ec:	e3c01030 	bic	r1, r0, #48	; 0x30
        2cd2f0:	e2060030 	and	r0, r6, #48	; 0x30
        2cd2f4:	e1810000 	orr	r0, r1, r0
        2cd2f8:	e59d1068 	ldr	r1, [sp, #104]
        2cd2fc:	e5c10002 	strb	r0, [r1, #2]
        2cd300:	ea00001c 	b	2cd378 <analize_circles(low_type *)+0x934>
        2cd304:	e3300006 	teq	r0, #6	; 0x6
        2cd308:	1a00001a 	bne	2cd378 <analize_circles(low_type *)+0x934>
        2cd30c:	e59d0064 	ldr	r0, [sp, #100]
        2cd310:	e5d00001 	ldrb	r0, [r0, #1]
        2cd314:	e3300007 	teq	r0, #7	; 0x7
        2cd318:	1a000019 	bne	2cd384 <analize_circles(low_type *)+0x940>
        2cd31c:	e5d40003 	ldrb	r0, [r4, #3]
        2cd320:	e3800008 	orr	r0, r0, #8	; 0x8
        2cd324:	e5c40003 	strb	r0, [r4, #3]
        2cd328:	e3a01008 	mov	r1, #8	; 0x8
        2cd32c:	e59d0064 	ldr	r0, [sp, #100]
        2cd330:	e5c01001 	strb	r1, [r0, #1]
        2cd334:	e59d0040 	ldr	r0, [sp, #64]
        2cd338:	e59d2070 	ldr	r2, [sp, #112]
        2cd33c:	e7921080 	ldr	r1, [r2, r0, lsl #1]
        2cd340:	e1a01841 	mov	r1, r1, asr #16
        2cd344:	e59d0044 	ldr	r0, [sp, #68]
        2cd348:	e7920080 	ldr	r0, [r2, r0, lsl #1]
        2cd34c:	e1a00840 	mov	r0, r0, asr #16
        2cd350:	e1510000 	cmp	r1, r0
        2cd354:	d3a06010 	movle	r6, #16	; 0x10
        2cd358:	c3a06020 	movgt	r6, #32	; 0x20
        2cd35c:	e59d0064 	ldr	r0, [sp, #100]
        2cd360:	e5d00002 	ldrb	r0, [r0, #2]
        2cd364:	e3c01030 	bic	r1, r0, #48	; 0x30
        2cd368:	e2060030 	and	r0, r6, #48	; 0x30
        2cd36c:	e1810000 	orr	r0, r1, r0
        2cd370:	e59d2064 	ldr	r2, [sp, #100]
        2cd374:	e5c20002 	strb	r0, [r2, #2]
        2cd378:	e5d40001 	ldrb	r0, [r4, #1]
        2cd37c:	e3300006 	teq	r0, #6	; 0x6
        2cd380:	1a000014 	bne	2cd3d8 <analize_circles(low_type *)+0x994>
        2cd384:	e5d40002 	ldrb	r0, [r4, #2]
        2cd388:	e200000f 	and	r0, r0, #15	; 0xf
        2cd38c:	e350000c 	cmp	r0, #12	; 0xc
        2cd390:	aa000010 	bge	2cd3d8 <analize_circles(low_type *)+0x994>
        2cd394:	e3360010 	teq	r6, #16	; 0x10
        2cd398:	1a000003 	bne	2cd3ac <analize_circles(low_type *)+0x968>
        2cd39c:	e59d004c 	ldr	r0, [sp, #76]
        2cd3a0:	e3700001 	cmn	r0, #1	; 0x1
        2cd3a4:	da00000b 	ble	2cd3d8 <analize_circles(low_type *)+0x994>
        2cd3a8:	ea000008 	b	2cd3d0 <analize_circles(low_type *)+0x98c>
        2cd3ac:	e3360020 	teq	r6, #32	; 0x20
        2cd3b0:	1a000008 	bne	2cd3d8 <analize_circles(low_type *)+0x994>
        2cd3b4:	e3500007 	cmp	r0, #7	; 0x7
        2cd3b8:	da000002 	ble	2cd3c8 <analize_circles(low_type *)+0x984>
        2cd3bc:	e5d40003 	ldrb	r0, [r4, #3]
        2cd3c0:	e3100008 	tst	r0, #8	; 0x8
        2cd3c4:	0a000001 	beq	2cd3d0 <analize_circles(low_type *)+0x98c>
        2cd3c8:	e358001e 	cmp	r8, #30	; 0x1e
        2cd3cc:	da000001 	ble	2cd3d8 <analize_circles(low_type *)+0x994>
        2cd3d0:	e3a00001 	mov	r0, #1	; 0x1
        2cd3d4:	ea000000 	b	2cd3dc <analize_circles(low_type *)+0x998>
        2cd3d8:	e3a00000 	mov	r0, #0	; 0x0
        2cd3dc:	e58d0048 	str	r0, [sp, #72]
        2cd3e0:	e5d40001 	ldrb	r0, [r4, #1]
        2cd3e4:	e3300004 	teq	r0, #4	; 0x4
        2cd3e8:	1a00000f 	bne	2cd42c <analize_circles(low_type *)+0x9e8>
        2cd3ec:	e5d70002 	ldrb	r0, [r7, #2]
        2cd3f0:	e2001030 	and	r1, r0, #48	; 0x30
        2cd3f4:	e3310020 	teq	r1, #32	; 0x20
        2cd3f8:	1a00000f 	bne	2cd43c <analize_circles(low_type *)+0x9f8>
        2cd3fc:	e200000f 	and	r0, r0, #15	; 0xf
        2cd400:	e3500008 	cmp	r0, #8	; 0x8
        2cd404:	aa00000c 	bge	2cd43c <analize_circles(low_type *)+0x9f8>
        2cd408:	e3500002 	cmp	r0, #2	; 0x2
        2cd40c:	da00000a 	ble	2cd43c <analize_circles(low_type *)+0x9f8>
        2cd410:	e5d40003 	ldrb	r0, [r4, #3]
        2cd414:	e3100008 	tst	r0, #8	; 0x8
        2cd418:	1a000007 	bne	2cd43c <analize_circles(low_type *)+0x9f8>
        2cd41c:	e3580015 	cmp	r8, #21	; 0x15
        2cd420:	da000005 	ble	2cd43c <analize_circles(low_type *)+0x9f8>
        2cd424:	e1a0000d 	mov	r0, sp
        2cd428:	eb6142b2 	bl	1b1def8 <$Decision_GU_or_O_(CrossInfoType *)>
        2cd42c:	e5d40001 	ldrb	r0, [r4, #1]
        2cd430:	e3300005 	teq	r0, #5	; 0x5
        2cd434:	03a00001 	moveq	r0, #1	; 0x1
        2cd438:	0a000000 	beq	2cd440 <analize_circles(low_type *)+0x9fc>
        2cd43c:	e3a00000 	mov	r0, #0	; 0x0
        2cd440:	e3300000 	teq	r0, #0	; 0x0
        2cd444:	15d41003 	ldrneb	r1, [r4, #3]
        2cd448:	13811001 	orrne	r1, r1, #1	; 0x1
        2cd44c:	15c41003 	strneb	r1, [r4, #3]
        2cd450:	e59d1048 	ldr	r1, [sp, #72]
        2cd454:	e3310000 	teq	r1, #0	; 0x0
        2cd458:	03300000 	teqeq	r0, #0	; 0x0
        2cd45c:	0a000027 	beq	2cd500 <analize_circles(low_type *)+0xabc>
        2cd460:	e3a00005 	mov	r0, #5	; 0x5
        2cd464:	e5c40001 	strb	r0, [r4, #1]
        2cd468:	e59d0012 	ldr	r0, [sp, #18]
        2cd46c:	e1a00840 	mov	r0, r0, asr #16
        2cd470:	e59d1016 	ldr	r1, [sp, #22]
        2cd474:	e0800841 	add	r0, r0, r1, asr #16
        2cd478:	e1a000c0 	mov	r0, r0, asr #1
        2cd47c:	e51b102c 	ldr	r1, [fp, -#44]
        2cd480:	eb613628 	bl	1b1ad28 <$HeightInLine(short, low_type *)>
        2cd484:	e200000f 	and	r0, r0, #15	; 0xf
        2cd488:	e2061030 	and	r1, r6, #48	; 0x30
        2cd48c:	e1800001 	orr	r0, r0, r1
        2cd490:	ea000019 	b	2cd4fc <analize_circles(low_type *)+0xab8>
        2cd494:	e33a0001 	teq	sl, #1	; 0x1
        2cd498:	03380001 	teqeq	r8, #1	; 0x1
        2cd49c:	00890007 	addeq	r0, r9, r7
        2cd4a0:	03300000 	teqeq	r0, #0	; 0x0
        2cd4a4:	1a00005e 	bne	2cd624 <analize_circles(low_type *)+0xbe0>
        2cd4a8:	e3a00005 	mov	r0, #5	; 0x5
        2cd4ac:	e5c50001 	strb	r0, [r5, #1]
        2cd4b0:	e5c40001 	strb	r0, [r4, #1]
        2cd4b4:	e1a0200d 	mov	r2, sp
        2cd4b8:	e1a01004 	mov	r1, r4
        2cd4bc:	e51b002c 	ldr	r0, [fp, -#44]
        2cd4c0:	eb61469c 	bl	1b1ef38 <$FillCrossInfo(low_type *, SPEC_TYPE *, CrossInfoType *)>
        2cd4c4:	e59d9018 	ldr	r9, [sp, #24]
        2cd4c8:	e1a09849 	mov	r9, r9, asr #16
        2cd4cc:	e59da01a 	ldr	sl, [sp, #26]
        2cd4d0:	e1a0a84a 	mov	sl, sl, asr #16
        2cd4d4:	e59d0012 	ldr	r0, [sp, #18]
        2cd4d8:	e1a00840 	mov	r0, r0, asr #16
        2cd4dc:	e59d1016 	ldr	r1, [sp, #22]
        2cd4e0:	e0800841 	add	r0, r0, r1, asr #16
        2cd4e4:	e1a000c0 	mov	r0, r0, asr #1
        2cd4e8:	e51b102c 	ldr	r1, [fp, -#44]
        2cd4ec:	eb61360d 	bl	1b1ad28 <$HeightInLine(short, low_type *)>
        2cd4f0:	e200100f 	and	r1, r0, #15	; 0xf
        2cd4f4:	e2060030 	and	r0, r6, #48	; 0x30
        2cd4f8:	e1810000 	orr	r0, r1, r0
        2cd4fc:	e5c40002 	strb	r0, [r4, #2]
        2cd500:	e51b002c 	ldr	r0, [fp, -#44]
        2cd504:	e5900098 	ldr	r0, [r0, #152]
        2cd508:	e1a00840 	mov	r0, r0, asr #16
        2cd50c:	e1500009 	cmp	r0, r9
        2cd510:	aa000004 	bge	2cd528 <analize_circles(low_type *)+0xae4>
        2cd514:	e159008a 	cmp	r9, sl, lsl #1
        2cd518:	ba000002 	blt	2cd528 <analize_circles(low_type *)+0xae4>
        2cd51c:	e150000a 	cmp	r0, sl
        2cd520:	c3a01001 	movgt	r1, #1	; 0x1
        2cd524:	ca000000 	bgt	2cd52c <analize_circles(low_type *)+0xae8>
        2cd528:	e3a01000 	mov	r1, #0	; 0x0
        2cd52c:	e3310000 	teq	r1, #0	; 0x0
        2cd530:	0a000011 	beq	2cd57c <analize_circles(low_type *)+0xb38>
        2cd534:	e5940004 	ldr	r0, [r4, #4]
        2cd538:	e1a00840 	mov	r0, r0, asr #16
        2cd53c:	e5951006 	ldr	r1, [r5, #6]
        2cd540:	e0800841 	add	r0, r0, r1, asr #16
        2cd544:	e0800fa0 	add	r0, r0, r0, lsr #31
        2cd548:	e1a000c0 	mov	r0, r0, asr #1
        2cd54c:	e59d2070 	ldr	r2, [sp, #112]
        2cd550:	e7921080 	ldr	r1, [r2, r0, lsl #1]
        2cd554:	e1a01841 	mov	r1, r1, asr #16
        2cd558:	e5940006 	ldr	r0, [r4, #6]
        2cd55c:	e1a00840 	mov	r0, r0, asr #16
        2cd560:	e7920080 	ldr	r0, [r2, r0, lsl #1]
        2cd564:	e1a00840 	mov	r0, r0, asr #16
        2cd568:	e1510000 	cmp	r1, r0
        2cd56c:	a3a00020 	movge	r0, #32	; 0x20
        2cd570:	b3a0001f 	movlt	r0, #31	; 0x1f
        2cd574:	e5c40001 	strb	r0, [r4, #1]
        2cd578:	ea000027 	b	2cd61c <analize_circles(low_type *)+0xbd8>
        2cd57c:	e1500009 	cmp	r0, r9
        2cd580:	c150000a 	cmpgt	r0, sl
        2cd584:	e5d40001 	ldrb	r0, [r4, #1]
        2cd588:	da000015 	ble	2cd5e4 <analize_circles(low_type *)+0xba0>
        2cd58c:	e3300004 	teq	r0, #4	; 0x4
        2cd590:	03a0001d 	moveq	r0, #29	; 0x1d
        2cd594:	05c40001 	streqb	r0, [r4, #1]
        2cd598:	059d0012 	ldreq	r0, [sp, #18]
        2cd59c:	01a00840 	moveq	r0, r0, asr #16
        2cd5a0:	0a000005 	beq	2cd5bc <analize_circles(low_type *)+0xb78>
        2cd5a4:	e3300006 	teq	r0, #6	; 0x6
        2cd5a8:	1a00001b 	bne	2cd61c <analize_circles(low_type *)+0xbd8>
        2cd5ac:	e3a0001e 	mov	r0, #30	; 0x1e
        2cd5b0:	e5c40001 	strb	r0, [r4, #1]
        2cd5b4:	e59d0016 	ldr	r0, [sp, #22]
        2cd5b8:	e1a00840 	mov	r0, r0, asr #16
        2cd5bc:	e51b102c 	ldr	r1, [fp, -#44]
        2cd5c0:	eb6135d8 	bl	1b1ad28 <$HeightInLine(short, low_type *)>
        2cd5c4:	e200000f 	and	r0, r0, #15	; 0xf
        2cd5c8:	e2061030 	and	r1, r6, #48	; 0x30
        2cd5cc:	e1800001 	orr	r0, r0, r1
        2cd5d0:	e5c40002 	strb	r0, [r4, #2]
        2cd5d4:	e5d40003 	ldrb	r0, [r4, #3]
        2cd5d8:	e3800004 	orr	r0, r0, #4	; 0x4
        2cd5dc:	e5c40003 	strb	r0, [r4, #3]
        2cd5e0:	ea00000d 	b	2cd61c <analize_circles(low_type *)+0xbd8>
        2cd5e4:	e3300004 	teq	r0, #4	; 0x4
        2cd5e8:	059d0012 	ldreq	r0, [sp, #18]
        2cd5ec:	01a00840 	moveq	r0, r0, asr #16
        2cd5f0:	0a000003 	beq	2cd604 <analize_circles(low_type *)+0xbc0>
        2cd5f4:	e3300006 	teq	r0, #6	; 0x6
        2cd5f8:	1a000007 	bne	2cd61c <analize_circles(low_type *)+0xbd8>
        2cd5fc:	e59d0016 	ldr	r0, [sp, #22]
        2cd600:	e1a00840 	mov	r0, r0, asr #16
        2cd604:	e51b102c 	ldr	r1, [fp, -#44]
        2cd608:	eb6135c6 	bl	1b1ad28 <$HeightInLine(short, low_type *)>
        2cd60c:	e200000f 	and	r0, r0, #15	; 0xf
        2cd610:	e2061030 	and	r1, r6, #48	; 0x30
        2cd614:	e1800001 	orr	r0, r0, r1
        2cd618:	e5c40002 	strb	r0, [r4, #2]
        2cd61c:	e5d40001 	ldrb	r0, [r4, #1]
        2cd620:	e5c50001 	strb	r0, [r5, #1]
        2cd624:	e594400c 	ldr	r4, [r4, #12]
        2cd628:	e594400c 	ldr	r4, [r4, #12]
        2cd62c:	e3340000 	teq	r4, #0	; 0x0
        2cd630:	1afffd12 	bne	2cca80 <analize_circles(low_type *)+0x3c>
        2cd634:	e3a00000 	mov	r0, #0	; 0x0
        2cd638:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: ARM_MAC_PDFUnloadFile(unsigned long *, unsigned char **)
 * Address: 002d4e9c
 */
ARM_MAC_PDFUnloadFile(unsigned long *, unsigned char **) {
    /*
        2d4e9c:	e1a0c00d 	mov	ip, sp
        2d4ea0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2d4ea4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d4ea8:	e1a05000 	mov	r5, r0
        2d4eac:	e1a04001 	mov	r4, r1
        2d4eb0:	e5911000 	ldr	r1, [r1]
        2d4eb4:	e5900000 	ldr	r0, [r0]
        2d4eb8:	e3a06000 	mov	r6, #0	; 0x0
        2d4ebc:	e3a07001 	mov	r7, #1	; 0x1
        2d4ec0:	e3300000 	teq	r0, #0	; 0x0
        2d4ec4:	05846000 	streq	r6, [r4]
        2d4ec8:	0a000005 	beq	2d4ee4 <ARM_MAC_PDFUnloadFile(unsigned long *, unsigned char **)+0x48>
        2d4ecc:	e3310000 	teq	r1, #0	; 0x0
        2d4ed0:	1b5e6a37 	blne	1a6f7b4 <$HWRMemoryUnlockHandle(unsigned long)>
        2d4ed4:	e5846000 	str	r6, [r4]
        2d4ed8:	e5950000 	ldr	r0, [r5]
        2d4edc:	eb5e6a35 	bl	1a6f7b8 <$HWRMemoryFreeHandle(unsigned long)>
        2d4ee0:	e5856000 	str	r6, [r5]
        2d4ee4:	e1a00007 	mov	r0, r7
        2d4ee8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: AddGCRoot(long &)
 * Address: 002e40b4
 */
AddGCRoot(long &) {
    /*
        2e40b4:	e1a0c00d 	mov	ip, sp
        2e40b8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2e40bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e40c0:	e1a04000 	mov	r4, r0
        2e40c4:	e59f6048 	ldr	r6, [pc, #48]	; 2e4114 <AddGCRoot(long &)+0x60>
        2e40c8:	e5960004 	ldr	r0, [r6, #4]
        2e40cc:	e59f7044 	ldr	r7, [pc, #44]	; 2e4118 <AddGCRoot(long &)+0x64>
        2e40d0:	e3a050e9 	mov	r5, #233	; 0xe9
        2e40d4:	e2455b0a 	sub	r5, r5, #10240	; 0x2800
        2e40d8:	e3300000 	teq	r0, #0	; 0x0
        2e40dc:	1a00000e 	bne	2e411c <AddGCRoot(long &)+0x68>
        2e40e0:	e3a00004 	mov	r0, #4	; 0x4
        2e40e4:	eb63f810 	bl	1be212c <$NewHandle>
        2e40e8:	e5860004 	str	r0, [r6, #4]
        2e40ec:	e3300000 	teq	r0, #0	; 0x0
        2e40f0:	1a000003 	bne	2e4104 <AddGCRoot(long &)+0x50>
        2e40f4:	e3a02000 	mov	r2, #0	; 0x0
        2e40f8:	e1a01005 	mov	r1, r5
        2e40fc:	e5970000 	ldr	r0, [r7]
        2e4100:	eb63fc25 	bl	1be319c <$Throw>
        2e4104:	e5b60004 	ldr	r0, [r6, #4]!
        2e4108:	e5900000 	ldr	r0, [r0]
        2e410c:	e5804000 	str	r4, [r0]
        2e4110:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2e4114:	0c105400 	ldceq	4, cr5, [r0]
        2e4118:	00371318 	eoreqs	r1, r7, r8, lsl r3
        2e411c:	eb63f3f1 	bl	1be10e8 <$GetHandleSize>
        2e4120:	e1a08000 	mov	r8, r0
        2e4124:	e2801004 	add	r1, r0, #4	; 0x4
        2e4128:	e5960004 	ldr	r0, [r6, #4]
        2e412c:	eb63f812 	bl	1be217c <$SetHandleSize>
        2e4130:	eb63f7fa 	bl	1be2120 <$MemError>
        2e4134:	e3300000 	teq	r0, #0	; 0x0
        2e4138:	0a000003 	beq	2e414c <AddGCRoot(long &)+0x98>
        2e413c:	e3a02000 	mov	r2, #0	; 0x0
        2e4140:	e1a01005 	mov	r1, r5
        2e4144:	e5970000 	ldr	r0, [r7]
        2e4148:	eb63fc13 	bl	1be319c <$Throw>
        2e414c:	e1a00128 	mov	r0, r8, lsr #2
        2e4150:	e5b61004 	ldr	r1, [r6, #4]!
        2e4154:	e5911000 	ldr	r1, [r1]
        2e4158:	e7814100 	str	r4, [r1, r0, lsl #2]
        2e415c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: arcs_processing(low_type *)
 * Address: 002fa358
 */
arcs_processing(low_type *) {
    /*
        2fa358:	e1a0c00d 	mov	ip, sp
        2fa35c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2fa360:	e24cb004 	sub	fp, ip, #4	; 0x4
        2fa364:	e1a04000 	mov	r4, r0
        2fa368:	e3a0a01b 	mov	sl, #27	; 0x1b
        2fa36c:	e5905040 	ldr	r5, [r0, #64]
        2fa370:	e3350000 	teq	r5, #0	; 0x0
        2fa374:	e5908038 	ldr	r8, [r0, #56]
        2fa378:	e5909034 	ldr	r9, [r0, #52]
        2fa37c:	0a0001dd 	beq	2faaf8 <arcs_processing(low_type *)+0x7a0>
        2fa380:	e285700c 	add	r7, r5, #12	; 0xc
        2fa384:	e89700c0 	ldmia	r7, {r6, r7}
        2fa388:	e5d50001 	ldrb	r0, [r5, #1]
        2fa38c:	e3500008 	cmp	r0, #8	; 0x8
        2fa390:	0a00016f 	beq	2fa954 <arcs_processing(low_type *)+0x5fc>
        2fa394:	ca00002c 	bgt	2fa44c <arcs_processing(low_type *)+0xf4>
        2fa398:	e3300002 	teq	r0, #2	; 0x2
        2fa39c:	0a000036 	beq	2fa47c <arcs_processing(low_type *)+0x124>
        2fa3a0:	e3300003 	teq	r0, #3	; 0x3
        2fa3a4:	0a0000e1 	beq	2fa730 <arcs_processing(low_type *)+0x3d8>
        2fa3a8:	e3300007 	teq	r0, #7	; 0x7
        2fa3ac:	1a0001ce 	bne	2faaec <arcs_processing(low_type *)+0x794>
        2fa3b0:	e24dd008 	sub	sp, sp, #8	; 0x8
        2fa3b4:	e5d70000 	ldrb	r0, [r7]
        2fa3b8:	e3300010 	teq	r0, #16	; 0x10
        2fa3bc:	05d70001 	ldreqb	r0, [r7, #1]
        2fa3c0:	03300003 	teqeq	r0, #3	; 0x3
        2fa3c4:	13a00000 	movne	r0, #0	; 0x0
        2fa3c8:	03a00001 	moveq	r0, #1	; 0x1
        2fa3cc:	e3360000 	teq	r6, #0	; 0x0
        2fa3d0:	e58d0004 	str	r0, [sp, #4]
        2fa3d4:	0a000005 	beq	2fa3f0 <arcs_processing(low_type *)+0x98>
        2fa3d8:	e5d60000 	ldrb	r0, [r6]
        2fa3dc:	e3300020 	teq	r0, #32	; 0x20
        2fa3e0:	05d60001 	ldreqb	r0, [r6, #1]
        2fa3e4:	03300003 	teqeq	r0, #3	; 0x3
        2fa3e8:	03a00001 	moveq	r0, #1	; 0x1
        2fa3ec:	0a000000 	beq	2fa3f4 <arcs_processing(low_type *)+0x9c>
        2fa3f0:	e3a00000 	mov	r0, #0	; 0x0
        2fa3f4:	e58d0000 	str	r0, [sp]
        2fa3f8:	e59d0004 	ldr	r0, [sp, #4]
        2fa3fc:	e3300000 	teq	r0, #0	; 0x0
        2fa400:	0a000091 	beq	2fa64c <arcs_processing(low_type *)+0x2f4>
        2fa404:	e59d0000 	ldr	r0, [sp]
        2fa408:	e3300000 	teq	r0, #0	; 0x0
        2fa40c:	0a00006a 	beq	2fa5bc <arcs_processing(low_type *)+0x264>
        2fa410:	e5d50000 	ldrb	r0, [r5]
        2fa414:	e3300010 	teq	r0, #16	; 0x10
        2fa418:	1a000067 	bne	2fa5bc <arcs_processing(low_type *)+0x264>
        2fa41c:	e5950008 	ldr	r0, [r5, #8]
        2fa420:	e1a00840 	mov	r0, r0, asr #16
        2fa424:	e7981080 	ldr	r1, [r8, r0, lsl #1]
        2fa428:	e1a01841 	mov	r1, r1, asr #16
        2fa42c:	e5970008 	ldr	r0, [r7, #8]
        2fa430:	e1a00840 	mov	r0, r0, asr #16
        2fa434:	e7980080 	ldr	r0, [r8, r0, lsl #1]
        2fa438:	e1a00840 	mov	r0, r0, asr #16
        2fa43c:	e0410000 	sub	r0, r1, r0
        2fa440:	e3500028 	cmp	r0, #40	; 0x28
        2fa444:	ba000074 	blt	2fa61c <arcs_processing(low_type *)+0x2c4>
        2fa448:	ea00005e 	b	2fa5c8 <arcs_processing(low_type *)+0x270>
        2fa44c:	e3300015 	teq	r0, #21	; 0x15
        2fa450:	0a00019f 	beq	2faad4 <arcs_processing(low_type *)+0x77c>
        2fa454:	e3300018 	teq	r0, #24	; 0x18
        2fa458:	1330001c 	teqne	r0, #28	; 0x1c
        2fa45c:	1a0001a2 	bne	2faaec <arcs_processing(low_type *)+0x794>
        2fa460:	e595000a 	ldr	r0, [r5, #10]
        2fa464:	e1a00840 	mov	r0, r0, asr #16
        2fa468:	e3700002 	cmn	r0, #2	; 0x2
        2fa46c:	15c50007 	strneb	r0, [r5, #7]
        2fa470:	11a00440 	movne	r0, r0, asr #8
        2fa474:	15c50006 	strneb	r0, [r5, #6]
        2fa478:	ea00019b 	b	2faaec <arcs_processing(low_type *)+0x794>
        2fa47c:	e5d70000 	ldrb	r0, [r7]
        2fa480:	e3300010 	teq	r0, #16	; 0x10
        2fa484:	05d70001 	ldreqb	r0, [r7, #1]
        2fa488:	03300007 	teqeq	r0, #7	; 0x7
        2fa48c:	1a000024 	bne	2fa524 <arcs_processing(low_type *)+0x1cc>
        2fa490:	e1a0300a 	mov	r3, sl
        2fa494:	e1a02006 	mov	r2, r6
        2fa498:	e92d000c 	stmdb	sp!, {r2, r3}
        2fa49c:	e1a02007 	mov	r2, r7
        2fa4a0:	e1a01005 	mov	r1, r5
        2fa4a4:	e1a00004 	mov	r0, r4
        2fa4a8:	e3a03000 	mov	r3, #0	; 0x0
        2fa4ac:	eb60929c 	bl	1b1ef24 <$DyLimit__FP8low_typeP9SPEC_TYPEN32i>
        2fa4b0:	e28dd008 	add	sp, sp, #8	; 0x8
        2fa4b4:	e1a02000 	mov	r2, r0
        2fa4b8:	e3700001 	cmn	r0, #1	; 0x1
        2fa4bc:	0a000018 	beq	2fa524 <arcs_processing(low_type *)+0x1cc>
        2fa4c0:	e1a03008 	mov	r3, r8
        2fa4c4:	e92d0008 	stmdb	sp!, {r3}
        2fa4c8:	e1a03009 	mov	r3, r9
        2fa4cc:	e1a01007 	mov	r1, r7
        2fa4d0:	e1a00005 	mov	r0, r5
        2fa4d4:	eb609aef 	bl	1b21098 <$IsDx_Dy_in_arcs_OK__FP9SPEC_TYPET1iPsT4>
        2fa4d8:	e28dd004 	add	sp, sp, #4	; 0x4
        2fa4dc:	e3300000 	teq	r0, #0	; 0x0
        2fa4e0:	0a00000f 	beq	2fa524 <arcs_processing(low_type *)+0x1cc>
        2fa4e4:	e1a02009 	mov	r2, r9
        2fa4e8:	e1a01007 	mov	r1, r7
        2fa4ec:	e1a00005 	mov	r0, r5
        2fa4f0:	eb60b3c1 	bl	1b273fc <$IsTipOK__FP9SPEC_TYPET1Ps>
        2fa4f4:	e3300000 	teq	r0, #0	; 0x0
        2fa4f8:	0a000009 	beq	2fa524 <arcs_processing(low_type *)+0x1cc>
        2fa4fc:	e1a00005 	mov	r0, r5
        2fa500:	eb607dec 	bl	1b19cb8 <$DelFromSPECLList(SPEC_TYPE *)>
        2fa504:	e5d50002 	ldrb	r0, [r5, #2]
        2fa508:	e5c70002 	strb	r0, [r7, #2]
        2fa50c:	e5d50002 	ldrb	r0, [r5, #2]
        2fa510:	e2000030 	and	r0, r0, #48	; 0x30
        2fa514:	e3300010 	teq	r0, #16	; 0x10
        2fa518:	13a0000a 	movne	r0, #10	; 0xa
        2fa51c:	03a00009 	moveq	r0, #9	; 0x9
        2fa520:	ea00012e 	b	2fa9e0 <arcs_processing(low_type *)+0x688>
        2fa524:	e3360000 	teq	r6, #0	; 0x0
        2fa528:	0a00016f 	beq	2faaec <arcs_processing(low_type *)+0x794>
        2fa52c:	e5d60000 	ldrb	r0, [r6]
        2fa530:	e3300020 	teq	r0, #32	; 0x20
        2fa534:	05d60001 	ldreqb	r0, [r6, #1]
        2fa538:	03300007 	teqeq	r0, #7	; 0x7
        2fa53c:	1a00016a 	bne	2faaec <arcs_processing(low_type *)+0x794>
        2fa540:	e1a0300a 	mov	r3, sl
        2fa544:	e3a02000 	mov	r2, #0	; 0x0
        2fa548:	e92d000c 	stmdb	sp!, {r2, r3}
        2fa54c:	e1a03007 	mov	r3, r7
        2fa550:	e1a02006 	mov	r2, r6
        2fa554:	e1a01005 	mov	r1, r5
        2fa558:	e1a00004 	mov	r0, r4
        2fa55c:	eb609270 	bl	1b1ef24 <$DyLimit__FP8low_typeP9SPEC_TYPEN32i>
        2fa560:	e28dd008 	add	sp, sp, #8	; 0x8
        2fa564:	e1a02000 	mov	r2, r0
        2fa568:	e3700001 	cmn	r0, #1	; 0x1
        2fa56c:	0a00015e 	beq	2faaec <arcs_processing(low_type *)+0x794>
        2fa570:	e1a03008 	mov	r3, r8
        2fa574:	e92d0008 	stmdb	sp!, {r3}
        2fa578:	e1a03009 	mov	r3, r9
        2fa57c:	e1a01006 	mov	r1, r6
        2fa580:	e1a00005 	mov	r0, r5
        2fa584:	eb609ac3 	bl	1b21098 <$IsDx_Dy_in_arcs_OK__FP9SPEC_TYPET1iPsT4>
        2fa588:	e28dd004 	add	sp, sp, #4	; 0x4
        2fa58c:	e3300000 	teq	r0, #0	; 0x0
        2fa590:	0a000155 	beq	2faaec <arcs_processing(low_type *)+0x794>
        2fa594:	e1a00005 	mov	r0, r5
        2fa598:	eb607dc6 	bl	1b19cb8 <$DelFromSPECLList(SPEC_TYPE *)>
        2fa59c:	e5d50002 	ldrb	r0, [r5, #2]
        2fa5a0:	e5c60002 	strb	r0, [r6, #2]
        2fa5a4:	e5d50002 	ldrb	r0, [r5, #2]
        2fa5a8:	e2000030 	and	r0, r0, #48	; 0x30
        2fa5ac:	e3300020 	teq	r0, #32	; 0x20
        2fa5b0:	13a0000a 	movne	r0, #10	; 0xa
        2fa5b4:	03a00009 	moveq	r0, #9	; 0x9
        2fa5b8:	ea000139 	b	2faaa4 <arcs_processing(low_type *)+0x74c>
        2fa5bc:	e5d50000 	ldrb	r0, [r5]
        2fa5c0:	e3300020 	teq	r0, #32	; 0x20
        2fa5c4:	0a000020 	beq	2fa64c <arcs_processing(low_type *)+0x2f4>
        2fa5c8:	e1a0300a 	mov	r3, sl
        2fa5cc:	e1a02006 	mov	r2, r6
        2fa5d0:	e92d000c 	stmdb	sp!, {r2, r3}
        2fa5d4:	e1a02007 	mov	r2, r7
        2fa5d8:	e1a01005 	mov	r1, r5
        2fa5dc:	e1a00004 	mov	r0, r4
        2fa5e0:	e3a03000 	mov	r3, #0	; 0x0
        2fa5e4:	eb60924e 	bl	1b1ef24 <$DyLimit__FP8low_typeP9SPEC_TYPEN32i>
        2fa5e8:	e28dd008 	add	sp, sp, #8	; 0x8
        2fa5ec:	e1a02000 	mov	r2, r0
        2fa5f0:	e3700001 	cmn	r0, #1	; 0x1
        2fa5f4:	0a000014 	beq	2fa64c <arcs_processing(low_type *)+0x2f4>
        2fa5f8:	e1a03008 	mov	r3, r8
        2fa5fc:	e92d0008 	stmdb	sp!, {r3}
        2fa600:	e1a03009 	mov	r3, r9
        2fa604:	e1a01007 	mov	r1, r7
        2fa608:	e1a00005 	mov	r0, r5
        2fa60c:	eb609aa2 	bl	1b2109c <$IsDx_Dy_in_tips_OK__FP9SPEC_TYPET1iPsT4>
        2fa610:	e28dd004 	add	sp, sp, #4	; 0x4
        2fa614:	e3300000 	teq	r0, #0	; 0x0
        2fa618:	0a00000b 	beq	2fa64c <arcs_processing(low_type *)+0x2f4>
        2fa61c:	e1a00007 	mov	r0, r7
        2fa620:	eb607da4 	bl	1b19cb8 <$DelFromSPECLList(SPEC_TYPE *)>
        2fa624:	e5d70000 	ldrb	r0, [r7]
        2fa628:	e5c50000 	strb	r0, [r5]
        2fa62c:	e5950008 	ldr	r0, [r5, #8]
        2fa630:	e1a00840 	mov	r0, r0, asr #16
        2fa634:	e3700002 	cmn	r0, #2	; 0x2
        2fa638:	0a000083 	beq	2fa84c <arcs_processing(low_type *)+0x4f4>
        2fa63c:	e5c50005 	strb	r0, [r5, #5]
        2fa640:	e1a00440 	mov	r0, r0, asr #8
        2fa644:	e5c50004 	strb	r0, [r5, #4]
        2fa648:	ea00007f 	b	2fa84c <arcs_processing(low_type *)+0x4f4>
        2fa64c:	e59d0000 	ldr	r0, [sp]
        2fa650:	e3300000 	teq	r0, #0	; 0x0
        2fa654:	0a0000bc 	beq	2fa94c <arcs_processing(low_type *)+0x5f4>
        2fa658:	e59d0004 	ldr	r0, [sp, #4]
        2fa65c:	e3300000 	teq	r0, #0	; 0x0
        2fa660:	0a00000e 	beq	2fa6a0 <arcs_processing(low_type *)+0x348>
        2fa664:	e5d50000 	ldrb	r0, [r5]
        2fa668:	e3300020 	teq	r0, #32	; 0x20
        2fa66c:	1a00000b 	bne	2fa6a0 <arcs_processing(low_type *)+0x348>
        2fa670:	e5950008 	ldr	r0, [r5, #8]
        2fa674:	e1a00840 	mov	r0, r0, asr #16
        2fa678:	e7981080 	ldr	r1, [r8, r0, lsl #1]
        2fa67c:	e1a01841 	mov	r1, r1, asr #16
        2fa680:	e5960008 	ldr	r0, [r6, #8]
        2fa684:	e1a00840 	mov	r0, r0, asr #16
        2fa688:	e7980080 	ldr	r0, [r8, r0, lsl #1]
        2fa68c:	e1a00840 	mov	r0, r0, asr #16
        2fa690:	e0410000 	sub	r0, r1, r0
        2fa694:	e3500028 	cmp	r0, #40	; 0x28
        2fa698:	ba000018 	blt	2fa700 <arcs_processing(low_type *)+0x3a8>
        2fa69c:	ea000002 	b	2fa6ac <arcs_processing(low_type *)+0x354>
        2fa6a0:	e5d50000 	ldrb	r0, [r5]
        2fa6a4:	e3300010 	teq	r0, #16	; 0x10
        2fa6a8:	0a0000a7 	beq	2fa94c <arcs_processing(low_type *)+0x5f4>
        2fa6ac:	e1a0300a 	mov	r3, sl
        2fa6b0:	e3a02000 	mov	r2, #0	; 0x0
        2fa6b4:	e92d000c 	stmdb	sp!, {r2, r3}
        2fa6b8:	e1a03007 	mov	r3, r7
        2fa6bc:	e1a02006 	mov	r2, r6
        2fa6c0:	e1a01005 	mov	r1, r5
        2fa6c4:	e1a00004 	mov	r0, r4
        2fa6c8:	eb609215 	bl	1b1ef24 <$DyLimit__FP8low_typeP9SPEC_TYPEN32i>
        2fa6cc:	e28dd008 	add	sp, sp, #8	; 0x8
        2fa6d0:	e1a02000 	mov	r2, r0
        2fa6d4:	e3700001 	cmn	r0, #1	; 0x1
        2fa6d8:	0a00009b 	beq	2fa94c <arcs_processing(low_type *)+0x5f4>
        2fa6dc:	e1a03008 	mov	r3, r8
        2fa6e0:	e92d0008 	stmdb	sp!, {r3}
        2fa6e4:	e1a03009 	mov	r3, r9
        2fa6e8:	e1a01006 	mov	r1, r6
        2fa6ec:	e1a00005 	mov	r0, r5
        2fa6f0:	eb609a69 	bl	1b2109c <$IsDx_Dy_in_tips_OK__FP9SPEC_TYPET1iPsT4>
        2fa6f4:	e28dd004 	add	sp, sp, #4	; 0x4
        2fa6f8:	e3300000 	teq	r0, #0	; 0x0
        2fa6fc:	0a000092 	beq	2fa94c <arcs_processing(low_type *)+0x5f4>
        2fa700:	e1a00006 	mov	r0, r6
        2fa704:	eb607d6b 	bl	1b19cb8 <$DelFromSPECLList(SPEC_TYPE *)>
        2fa708:	e5d60000 	ldrb	r0, [r6]
        2fa70c:	e5c50000 	strb	r0, [r5]
        2fa710:	e5950008 	ldr	r0, [r5, #8]
        2fa714:	e1a00840 	mov	r0, r0, asr #16
        2fa718:	e3700002 	cmn	r0, #2	; 0x2
        2fa71c:	0a000082 	beq	2fa92c <arcs_processing(low_type *)+0x5d4>
        2fa720:	e5c50007 	strb	r0, [r5, #7]
        2fa724:	e1a00440 	mov	r0, r0, asr #8
        2fa728:	e5c50006 	strb	r0, [r5, #6]
        2fa72c:	ea00007e 	b	2fa92c <arcs_processing(low_type *)+0x5d4>
        2fa730:	e24dd008 	sub	sp, sp, #8	; 0x8
        2fa734:	e5d70000 	ldrb	r0, [r7]
        2fa738:	e3300010 	teq	r0, #16	; 0x10
        2fa73c:	05d70001 	ldreqb	r0, [r7, #1]
        2fa740:	03300007 	teqeq	r0, #7	; 0x7
        2fa744:	13a00000 	movne	r0, #0	; 0x0
        2fa748:	03a00001 	moveq	r0, #1	; 0x1
        2fa74c:	e3360000 	teq	r6, #0	; 0x0
        2fa750:	e58d0004 	str	r0, [sp, #4]
        2fa754:	0a000005 	beq	2fa770 <arcs_processing(low_type *)+0x418>
        2fa758:	e5d60000 	ldrb	r0, [r6]
        2fa75c:	e3300020 	teq	r0, #32	; 0x20
        2fa760:	05d60001 	ldreqb	r0, [r6, #1]
        2fa764:	03300007 	teqeq	r0, #7	; 0x7
        2fa768:	03a00001 	moveq	r0, #1	; 0x1
        2fa76c:	0a000000 	beq	2fa774 <arcs_processing(low_type *)+0x41c>
        2fa770:	e3a00000 	mov	r0, #0	; 0x0
        2fa774:	e58d0000 	str	r0, [sp]
        2fa778:	e59d0004 	ldr	r0, [sp, #4]
        2fa77c:	e3300000 	teq	r0, #0	; 0x0
        2fa780:	0a000034 	beq	2fa858 <arcs_processing(low_type *)+0x500>
        2fa784:	e59d0000 	ldr	r0, [sp]
        2fa788:	e3300000 	teq	r0, #0	; 0x0
        2fa78c:	0a00000e 	beq	2fa7cc <arcs_processing(low_type *)+0x474>
        2fa790:	e5d50000 	ldrb	r0, [r5]
        2fa794:	e3300010 	teq	r0, #16	; 0x10
        2fa798:	1a00000b 	bne	2fa7cc <arcs_processing(low_type *)+0x474>
        2fa79c:	e5970008 	ldr	r0, [r7, #8]
        2fa7a0:	e1a00840 	mov	r0, r0, asr #16
        2fa7a4:	e7981080 	ldr	r1, [r8, r0, lsl #1]
        2fa7a8:	e1a01841 	mov	r1, r1, asr #16
        2fa7ac:	e5950008 	ldr	r0, [r5, #8]
        2fa7b0:	e1a00840 	mov	r0, r0, asr #16
        2fa7b4:	e7980080 	ldr	r0, [r8, r0, lsl #1]
        2fa7b8:	e1a00840 	mov	r0, r0, asr #16
        2fa7bc:	e0410000 	sub	r0, r1, r0
        2fa7c0:	e3500028 	cmp	r0, #40	; 0x28
        2fa7c4:	ba000018 	blt	2fa82c <arcs_processing(low_type *)+0x4d4>
        2fa7c8:	ea000002 	b	2fa7d8 <arcs_processing(low_type *)+0x480>
        2fa7cc:	e5d50000 	ldrb	r0, [r5]
        2fa7d0:	e3300020 	teq	r0, #32	; 0x20
        2fa7d4:	0a00001f 	beq	2fa858 <arcs_processing(low_type *)+0x500>
        2fa7d8:	e1a0300a 	mov	r3, sl
        2fa7dc:	e1a02006 	mov	r2, r6
        2fa7e0:	e92d000c 	stmdb	sp!, {r2, r3}
        2fa7e4:	e1a02007 	mov	r2, r7
        2fa7e8:	e1a01005 	mov	r1, r5
        2fa7ec:	e1a00004 	mov	r0, r4
        2fa7f0:	e3a03000 	mov	r3, #0	; 0x0
        2fa7f4:	eb6091ca 	bl	1b1ef24 <$DyLimit__FP8low_typeP9SPEC_TYPEN32i>
        2fa7f8:	e28dd008 	add	sp, sp, #8	; 0x8
        2fa7fc:	e1a02000 	mov	r2, r0
        2fa800:	e3700001 	cmn	r0, #1	; 0x1
        2fa804:	0a000013 	beq	2fa858 <arcs_processing(low_type *)+0x500>
        2fa808:	e1a03008 	mov	r3, r8
        2fa80c:	e92d0008 	stmdb	sp!, {r3}
        2fa810:	e1a03009 	mov	r3, r9
        2fa814:	e1a01007 	mov	r1, r7
        2fa818:	e1a00005 	mov	r0, r5
        2fa81c:	eb609a1e 	bl	1b2109c <$IsDx_Dy_in_tips_OK__FP9SPEC_TYPET1iPsT4>
        2fa820:	e28dd004 	add	sp, sp, #4	; 0x4
        2fa824:	e3300000 	teq	r0, #0	; 0x0
        2fa828:	0a00000a 	beq	2fa858 <arcs_processing(low_type *)+0x500>
        2fa82c:	e1a00007 	mov	r0, r7
        2fa830:	eb607d20 	bl	1b19cb8 <$DelFromSPECLList(SPEC_TYPE *)>
        2fa834:	e5d70000 	ldrb	r0, [r7]
        2fa838:	e5c50000 	strb	r0, [r5]
        2fa83c:	e5950008 	ldr	r0, [r5, #8]
        2fa840:	e1a00840 	mov	r0, r0, asr #16
        2fa844:	e3700002 	cmn	r0, #2	; 0x2
        2fa848:	1affff7b 	bne	2fa63c <arcs_processing(low_type *)+0x2e4>
        2fa84c:	e5d50003 	ldrb	r0, [r5, #3]
        2fa850:	e5d71003 	ldrb	r1, [r7, #3]
        2fa854:	ea000036 	b	2fa934 <arcs_processing(low_type *)+0x5dc>
        2fa858:	e59d0000 	ldr	r0, [sp]
        2fa85c:	e3300000 	teq	r0, #0	; 0x0
        2fa860:	0a000039 	beq	2fa94c <arcs_processing(low_type *)+0x5f4>
        2fa864:	e59d0004 	ldr	r0, [sp, #4]
        2fa868:	e3300000 	teq	r0, #0	; 0x0
        2fa86c:	0a00000e 	beq	2fa8ac <arcs_processing(low_type *)+0x554>
        2fa870:	e5d50000 	ldrb	r0, [r5]
        2fa874:	e3300020 	teq	r0, #32	; 0x20
        2fa878:	1a00000b 	bne	2fa8ac <arcs_processing(low_type *)+0x554>
        2fa87c:	e5960008 	ldr	r0, [r6, #8]
        2fa880:	e1a00840 	mov	r0, r0, asr #16
        2fa884:	e7981080 	ldr	r1, [r8, r0, lsl #1]
        2fa888:	e1a01841 	mov	r1, r1, asr #16
        2fa88c:	e5950008 	ldr	r0, [r5, #8]
        2fa890:	e1a00840 	mov	r0, r0, asr #16
        2fa894:	e7980080 	ldr	r0, [r8, r0, lsl #1]
        2fa898:	e1a00840 	mov	r0, r0, asr #16
        2fa89c:	e0410000 	sub	r0, r1, r0
        2fa8a0:	e3500028 	cmp	r0, #40	; 0x28
        2fa8a4:	ba000018 	blt	2fa90c <arcs_processing(low_type *)+0x5b4>
        2fa8a8:	ea000002 	b	2fa8b8 <arcs_processing(low_type *)+0x560>
        2fa8ac:	e5d50000 	ldrb	r0, [r5]
        2fa8b0:	e3300010 	teq	r0, #16	; 0x10
        2fa8b4:	0a000024 	beq	2fa94c <arcs_processing(low_type *)+0x5f4>
        2fa8b8:	e1a0300a 	mov	r3, sl
        2fa8bc:	e3a02000 	mov	r2, #0	; 0x0
        2fa8c0:	e92d000c 	stmdb	sp!, {r2, r3}
        2fa8c4:	e1a03007 	mov	r3, r7
        2fa8c8:	e1a02006 	mov	r2, r6
        2fa8cc:	e1a01005 	mov	r1, r5
        2fa8d0:	e1a00004 	mov	r0, r4
        2fa8d4:	eb609192 	bl	1b1ef24 <$DyLimit__FP8low_typeP9SPEC_TYPEN32i>
        2fa8d8:	e28dd008 	add	sp, sp, #8	; 0x8
        2fa8dc:	e1a02000 	mov	r2, r0
        2fa8e0:	e3700001 	cmn	r0, #1	; 0x1
        2fa8e4:	0a000018 	beq	2fa94c <arcs_processing(low_type *)+0x5f4>
        2fa8e8:	e1a03008 	mov	r3, r8
        2fa8ec:	e92d0008 	stmdb	sp!, {r3}
        2fa8f0:	e1a03009 	mov	r3, r9
        2fa8f4:	e1a01006 	mov	r1, r6
        2fa8f8:	e1a00005 	mov	r0, r5
        2fa8fc:	eb6099e6 	bl	1b2109c <$IsDx_Dy_in_tips_OK__FP9SPEC_TYPET1iPsT4>
        2fa900:	e28dd004 	add	sp, sp, #4	; 0x4
        2fa904:	e3300000 	teq	r0, #0	; 0x0
        2fa908:	0a00000f 	beq	2fa94c <arcs_processing(low_type *)+0x5f4>
        2fa90c:	e1a00006 	mov	r0, r6
        2fa910:	eb607ce8 	bl	1b19cb8 <$DelFromSPECLList(SPEC_TYPE *)>
        2fa914:	e5d60000 	ldrb	r0, [r6]
        2fa918:	e5c50000 	strb	r0, [r5]
        2fa91c:	e5950008 	ldr	r0, [r5, #8]
        2fa920:	e1a00840 	mov	r0, r0, asr #16
        2fa924:	e3700002 	cmn	r0, #2	; 0x2
        2fa928:	1affff7c 	bne	2fa720 <arcs_processing(low_type *)+0x3c8>
        2fa92c:	e5d50003 	ldrb	r0, [r5, #3]
        2fa930:	e5d61003 	ldrb	r1, [r6, #3]
        2fa934:	e1800001 	orr	r0, r0, r1
        2fa938:	e3800010 	orr	r0, r0, #16	; 0x10
        2fa93c:	e5c50003 	strb	r0, [r5, #3]
        2fa940:	e5d50003 	ldrb	r0, [r5, #3]
        2fa944:	e3c00040 	bic	r0, r0, #64	; 0x40
        2fa948:	e5c50003 	strb	r0, [r5, #3]
        2fa94c:	e28dd008 	add	sp, sp, #8	; 0x8
        2fa950:	ea000065 	b	2faaec <arcs_processing(low_type *)+0x794>
        2fa954:	e5d70000 	ldrb	r0, [r7]
        2fa958:	e3300010 	teq	r0, #16	; 0x10
        2fa95c:	05d70001 	ldreqb	r0, [r7, #1]
        2fa960:	03300003 	teqeq	r0, #3	; 0x3
        2fa964:	1a000029 	bne	2faa10 <arcs_processing(low_type *)+0x6b8>
        2fa968:	e1a0300a 	mov	r3, sl
        2fa96c:	e1a02006 	mov	r2, r6
        2fa970:	e92d000c 	stmdb	sp!, {r2, r3}
        2fa974:	e1a02007 	mov	r2, r7
        2fa978:	e1a01005 	mov	r1, r5
        2fa97c:	e1a00004 	mov	r0, r4
        2fa980:	e3a03000 	mov	r3, #0	; 0x0
        2fa984:	eb609166 	bl	1b1ef24 <$DyLimit__FP8low_typeP9SPEC_TYPEN32i>
        2fa988:	e28dd008 	add	sp, sp, #8	; 0x8
        2fa98c:	e1a02000 	mov	r2, r0
        2fa990:	e3700001 	cmn	r0, #1	; 0x1
        2fa994:	0a00001d 	beq	2faa10 <arcs_processing(low_type *)+0x6b8>
        2fa998:	e1a03008 	mov	r3, r8
        2fa99c:	e92d0008 	stmdb	sp!, {r3}
        2fa9a0:	e1a03009 	mov	r3, r9
        2fa9a4:	e1a01007 	mov	r1, r7
        2fa9a8:	e1a00005 	mov	r0, r5
        2fa9ac:	eb6099b9 	bl	1b21098 <$IsDx_Dy_in_arcs_OK__FP9SPEC_TYPET1iPsT4>
        2fa9b0:	e28dd004 	add	sp, sp, #4	; 0x4
        2fa9b4:	e3300000 	teq	r0, #0	; 0x0
        2fa9b8:	0a000014 	beq	2faa10 <arcs_processing(low_type *)+0x6b8>
        2fa9bc:	e1a00005 	mov	r0, r5
        2fa9c0:	eb607cbc 	bl	1b19cb8 <$DelFromSPECLList(SPEC_TYPE *)>
        2fa9c4:	e5d50002 	ldrb	r0, [r5, #2]
        2fa9c8:	e5c70002 	strb	r0, [r7, #2]
        2fa9cc:	e5d50002 	ldrb	r0, [r5, #2]
        2fa9d0:	e2000030 	and	r0, r0, #48	; 0x30
        2fa9d4:	e3300020 	teq	r0, #32	; 0x20
        2fa9d8:	13a0000c 	movne	r0, #12	; 0xc
        2fa9dc:	03a0000b 	moveq	r0, #11	; 0xb
        2fa9e0:	e5c70001 	strb	r0, [r7, #1]
        2fa9e4:	e5950006 	ldr	r0, [r5, #6]
        2fa9e8:	e1a00820 	mov	r0, r0, lsr #16
        2fa9ec:	e5c70007 	strb	r0, [r7, #7]
        2fa9f0:	e1a00440 	mov	r0, r0, asr #8
        2fa9f4:	e5c70006 	strb	r0, [r7, #6]
        2fa9f8:	e5950008 	ldr	r0, [r5, #8]
        2fa9fc:	e1a00820 	mov	r0, r0, lsr #16
        2faa00:	e5c70009 	strb	r0, [r7, #9]
        2faa04:	e1a00440 	mov	r0, r0, asr #8
        2faa08:	e5c70008 	strb	r0, [r7, #8]
        2faa0c:	ea000036 	b	2faaec <arcs_processing(low_type *)+0x794>
        2faa10:	e3360000 	teq	r6, #0	; 0x0
        2faa14:	0a000034 	beq	2faaec <arcs_processing(low_type *)+0x794>
        2faa18:	e5d60000 	ldrb	r0, [r6]
        2faa1c:	e3300020 	teq	r0, #32	; 0x20
        2faa20:	05d60001 	ldreqb	r0, [r6, #1]
        2faa24:	03300003 	teqeq	r0, #3	; 0x3
        2faa28:	1a00002f 	bne	2faaec <arcs_processing(low_type *)+0x794>
        2faa2c:	e1a0300a 	mov	r3, sl
        2faa30:	e3a02000 	mov	r2, #0	; 0x0
        2faa34:	e92d000c 	stmdb	sp!, {r2, r3}
        2faa38:	e1a03007 	mov	r3, r7
        2faa3c:	e1a02006 	mov	r2, r6
        2faa40:	e1a01005 	mov	r1, r5
        2faa44:	e1a00004 	mov	r0, r4
        2faa48:	eb609135 	bl	1b1ef24 <$DyLimit__FP8low_typeP9SPEC_TYPEN32i>
        2faa4c:	e28dd008 	add	sp, sp, #8	; 0x8
        2faa50:	e1a02000 	mov	r2, r0
        2faa54:	e3700001 	cmn	r0, #1	; 0x1
        2faa58:	0a000023 	beq	2faaec <arcs_processing(low_type *)+0x794>
        2faa5c:	e1a03008 	mov	r3, r8
        2faa60:	e92d0008 	stmdb	sp!, {r3}
        2faa64:	e1a03009 	mov	r3, r9
        2faa68:	e1a01006 	mov	r1, r6
        2faa6c:	e1a00005 	mov	r0, r5
        2faa70:	eb609988 	bl	1b21098 <$IsDx_Dy_in_arcs_OK__FP9SPEC_TYPET1iPsT4>
        2faa74:	e28dd004 	add	sp, sp, #4	; 0x4
        2faa78:	e3300000 	teq	r0, #0	; 0x0
        2faa7c:	0a00001a 	beq	2faaec <arcs_processing(low_type *)+0x794>
        2faa80:	e1a00005 	mov	r0, r5
        2faa84:	eb607c8b 	bl	1b19cb8 <$DelFromSPECLList(SPEC_TYPE *)>
        2faa88:	e5d50002 	ldrb	r0, [r5, #2]
        2faa8c:	e5c60002 	strb	r0, [r6, #2]
        2faa90:	e5d50002 	ldrb	r0, [r5, #2]
        2faa94:	e2000030 	and	r0, r0, #48	; 0x30
        2faa98:	e3300010 	teq	r0, #16	; 0x10
        2faa9c:	13a0000c 	movne	r0, #12	; 0xc
        2faaa0:	03a0000b 	moveq	r0, #11	; 0xb
        2faaa4:	e5c60001 	strb	r0, [r6, #1]
        2faaa8:	e5950004 	ldr	r0, [r5, #4]
        2faaac:	e1a00820 	mov	r0, r0, lsr #16
        2faab0:	e5c60005 	strb	r0, [r6, #5]
        2faab4:	e1a00440 	mov	r0, r0, asr #8
        2faab8:	e5c60004 	strb	r0, [r6, #4]
        2faabc:	e5950008 	ldr	r0, [r5, #8]
        2faac0:	e1a00820 	mov	r0, r0, lsr #16
        2faac4:	e5c60009 	strb	r0, [r6, #9]
        2faac8:	e1a00440 	mov	r0, r0, asr #8
        2faacc:	e5c60008 	strb	r0, [r6, #8]
        2faad0:	ea000005 	b	2faaec <arcs_processing(low_type *)+0x794>
        2faad4:	e595000a 	ldr	r0, [r5, #10]
        2faad8:	e1a00840 	mov	r0, r0, asr #16
        2faadc:	e3700002 	cmn	r0, #2	; 0x2
        2faae0:	15c50005 	strneb	r0, [r5, #5]
        2faae4:	11a00440 	movne	r0, r0, asr #8
        2faae8:	15c50004 	strneb	r0, [r5, #4]
        2faaec:	e595500c 	ldr	r5, [r5, #12]
        2faaf0:	e3350000 	teq	r5, #0	; 0x0
        2faaf4:	1afffe21 	bne	2fa380 <arcs_processing(low_type *)+0x28>
        2faaf8:	e3a00000 	mov	r0, #0	; 0x0
        2faafc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: AllocLearnInfo(void **, unsigned long)
 * Address: 002fe90c
 */
AllocLearnInfo(void **, unsigned long) {
    /*
        2fe90c:	e1a0c00d 	mov	ip, sp
        2fe910:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2fe914:	e24cb004 	sub	fp, ip, #4	; 0x4
        2fe918:	e1a05000 	mov	r5, r0
        2fe91c:	e1a04001 	mov	r4, r1
        2fe920:	e3510000 	cmp	r1, #0	; 0x0
        2fe924:	3a00000b 	bcc	2fe958 <AllocLearnInfo(void **, unsigned long)+0x4c>
        2fe928:	e3540005 	cmp	r4, #5	; 0x5
        2fe92c:	2a000009 	bcs	2fe958 <AllocLearnInfo(void **, unsigned long)+0x4c>
        2fe930:	e59f7028 	ldr	r7, [pc, #28]	; 2fe960 <AllocLearnInfo(void **, unsigned long)+0x54>
        2fe934:	e3340004 	teq	r4, #4	; 0x4
        2fe938:	1a000002 	bne	2fe948 <AllocLearnInfo(void **, unsigned long)+0x3c>
        2fe93c:	e5970010 	ldr	r0, [r7, #16]
        2fe940:	e3300000 	teq	r0, #0	; 0x0
        2fe944:	1a000003 	bne	2fe958 <AllocLearnInfo(void **, unsigned long)+0x4c>
        2fe948:	e5950000 	ldr	r0, [r5]
        2fe94c:	eb5dc397 	bl	1a6f7b0 <$HWRMemoryLockHandle(unsigned long)>
        2fe950:	e1b06000 	movs	r6, r0
        2fe954:	1a000002 	bne	2fe964 <AllocLearnInfo(void **, unsigned long)+0x58>
        2fe958:	e3a04001 	mov	r4, #1	; 0x1
        2fe95c:	ea000029 	b	2fea08 <AllocLearnInfo(void **, unsigned long)+0xfc>
        2fe960:	0c105480 	ldceq	4, cr5, [r0], -#512
        2fe964:	e7971104 	ldr	r1, [r7, r4, lsl #2]
        2fe968:	e3310000 	teq	r1, #0	; 0x0
        2fe96c:	1a00001f 	bne	2fe9f0 <AllocLearnInfo(void **, unsigned long)+0xe4>
        2fe970:	e3340004 	teq	r4, #4	; 0x4
        2fe974:	0a00001d 	beq	2fe9f0 <AllocLearnInfo(void **, unsigned long)+0xe4>
        2fe978:	e1a00006 	mov	r0, r6
        2fe97c:	eb60aeef 	bl	1b2a540 <$GetDTELearnInfoSize(void *)>
        2fe980:	e1a08000 	mov	r8, r0
        2fe984:	eb5dc388 	bl	1a6f7ac <$HWRMemoryAllocHandle(unsigned long)>
        2fe988:	e7870104 	str	r0, [r7, r4, lsl #2]
        2fe98c:	e3300000 	teq	r0, #0	; 0x0
        2fe990:	0a000014 	beq	2fe9e8 <AllocLearnInfo(void **, unsigned long)+0xdc>
        2fe994:	eb5dc385 	bl	1a6f7b0 <$HWRMemoryLockHandle(unsigned long)>
        2fe998:	e3300000 	teq	r0, #0	; 0x0
        2fe99c:	0a000011 	beq	2fe9e8 <AllocLearnInfo(void **, unsigned long)+0xdc>
        2fe9a0:	e1a02008 	mov	r2, r8
        2fe9a4:	e3a01000 	mov	r1, #0	; 0x0
        2fe9a8:	eb62d82a 	bl	1bb4a58 <$memset>
        2fe9ac:	e7970104 	ldr	r0, [r7, r4, lsl #2]
        2fe9b0:	eb5dc37f 	bl	1a6f7b4 <$HWRMemoryUnlockHandle(unsigned long)>
        2fe9b4:	e7971104 	ldr	r1, [r7, r4, lsl #2]
        2fe9b8:	e1a00006 	mov	r0, r6
        2fe9bc:	eb60aeec 	bl	1b2a574 <$SetLearnInfoAddress(void *, unsigned long)>
        2fe9c0:	e1a00006 	mov	r0, r6
        2fe9c4:	eb60cbc8 	bl	1b318ec <$dti_lock(void *)>
        2fe9c8:	e3300000 	teq	r0, #0	; 0x0
        2fe9cc:	1a000005 	bne	2fe9e8 <AllocLearnInfo(void **, unsigned long)+0xdc>
        2fe9d0:	e1a00006 	mov	r0, r6
        2fe9d4:	eb60d80d 	bl	1b34a10 <$SetDefaultsWeights(void *)>
        2fe9d8:	e1a00006 	mov	r0, r6
        2fe9dc:	eb60cbc4 	bl	1b318f4 <$dti_unlock(void *)>
        2fe9e0:	e3300000 	teq	r0, #0	; 0x0
        2fe9e4:	0a000003 	beq	2fe9f8 <AllocLearnInfo(void **, unsigned long)+0xec>
        2fe9e8:	e3a04001 	mov	r4, #1	; 0x1
        2fe9ec:	ea000002 	b	2fe9fc <AllocLearnInfo(void **, unsigned long)+0xf0>
        2fe9f0:	e1a00006 	mov	r0, r6
        2fe9f4:	eb60aede 	bl	1b2a574 <$SetLearnInfoAddress(void *, unsigned long)>
        2fe9f8:	e3a04000 	mov	r4, #0	; 0x0
        2fe9fc:	e3360000 	teq	r6, #0	; 0x0
        2fea00:	15950000 	ldrne	r0, [r5]
        2fea04:	1b5dc36a 	blne	1a6f7b4 <$HWRMemoryUnlockHandle(unsigned long)>
        2fea08:	e1a00004 	mov	r0, r4
        2fea0c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: AllocOrtographLearnInfo(void)
 * Address: 002fea10
 */
AllocOrtographLearnInfo(void) {
    /*
        2fea10:	e1a0c00d 	mov	ip, sp
        2fea14:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2fea18:	e24cb004 	sub	fp, ip, #4	; 0x4
        2fea1c:	e59f4044 	ldr	r4, [pc, #44]	; 2fea68 <AllocOrtographLearnInfo(void)+0x58>
        2fea20:	e5940020 	ldr	r0, [r4, #32]
        2fea24:	e3300000 	teq	r0, #0	; 0x0
        2fea28:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        2fea2c:	eb60c36e 	bl	1b2f7ec <$ORGetDBSize(void)>
        2fea30:	eb5dc35d 	bl	1a6f7ac <$HWRMemoryAllocHandle(unsigned long)>
        2fea34:	e3a06000 	mov	r6, #0	; 0x0
        2fea38:	e5840020 	str	r0, [r4, #32]
        2fea3c:	e3300000 	teq	r0, #0	; 0x0
        2fea40:	01a00006 	moveq	r0, r6
        2fea44:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        2fea48:	eb5dc358 	bl	1a6f7b0 <$HWRMemoryLockHandle(unsigned long)>
        2fea4c:	e1b05000 	movs	r5, r0
        2fea50:	1a000005 	bne	2fea6c <AllocOrtographLearnInfo(void)+0x5c>
        2fea54:	e5940020 	ldr	r0, [r4, #32]
        2fea58:	eb5dc356 	bl	1a6f7b8 <$HWRMemoryFreeHandle(unsigned long)>
        2fea5c:	e1a00006 	mov	r0, r6
        2fea60:	e5a46020 	str	r6, [r4, #32]!
        2fea64:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2fea68:	0c105474 	ldceq	4, cr5, [r0], -#464
        2fea6c:	eb60c35e 	bl	1b2f7ec <$ORGetDBSize(void)>
        2fea70:	e1a01000 	mov	r1, r0
        2fea74:	e1a00005 	mov	r0, r5
        2fea78:	eb60c35c 	bl	1b2f7f0 <$ORInitDB(void *, unsigned long)>
        2fea7c:	e5940020 	ldr	r0, [r4, #32]
        2fea80:	eb5dc34b 	bl	1a6f7b4 <$HWRMemoryUnlockHandle(unsigned long)>
        2fea84:	e5b40020 	ldr	r0, [r4, #32]!
        2fea88:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: ArrangeAnglesNearNew(SZD_FEATURES *)
 * Address: 00302d74
 */
ArrangeAnglesNearNew(SZD_FEATURES *) {
    /*
        302d74:	e1a0c00d 	mov	ip, sp
        302d78:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        302d7c:	e24cb004 	sub	fp, ip, #4	; 0x4
        302d80:	e1a04000 	mov	r4, r0
        302d84:	e590600c 	ldr	r6, [r0, #12]
        302d88:	e3360000 	teq	r6, #0	; 0x0
        302d8c:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        302d90:	e5961004 	ldr	r1, [r6, #4]
        302d94:	e1a01841 	mov	r1, r1, asr #16
        302d98:	e0812081 	add	r2, r1, r1, lsl #1
        302d9c:	e5960006 	ldr	r0, [r6, #6]
        302da0:	e1a00840 	mov	r0, r0, asr #16
        302da4:	e0822000 	add	r2, r2, r0
        302da8:	e2822002 	add	r2, r2, #2	; 0x2
        302dac:	e1a09142 	mov	r9, r2, asr #2
        302db0:	e0800080 	add	r0, r0, r0, lsl #1
        302db4:	e0800001 	add	r0, r0, r1
        302db8:	e2800002 	add	r0, r0, #2	; 0x2
        302dbc:	e1a08140 	mov	r8, r0, asr #2
        302dc0:	e596500c 	ldr	r5, [r6, #12]
        302dc4:	ea000038 	b	302eac <ArrangeAnglesNearNew(SZD_FEATURES *)+0x138>
        302dc8:	e5950006 	ldr	r0, [r5, #6]
        302dcc:	e1580840 	cmp	r8, r0, asr #16
        302dd0:	ba000034 	blt	302ea8 <ArrangeAnglesNearNew(SZD_FEATURES *)+0x134>
        302dd4:	e1a07005 	mov	r7, r5
        302dd8:	e5951004 	ldr	r1, [r5, #4]
        302ddc:	e1a01841 	mov	r1, r1, asr #16
        302de0:	e1510009 	cmp	r1, r9
        302de4:	da00002a 	ble	302e94 <ArrangeAnglesNearNew(SZD_FEATURES *)+0x120>
        302de8:	e5d60001 	ldrb	r0, [r6, #1]
        302dec:	e3300024 	teq	r0, #36	; 0x24
        302df0:	13300023 	teqne	r0, #35	; 0x23
        302df4:	1a000006 	bne	302e14 <ArrangeAnglesNearNew(SZD_FEATURES *)+0xa0>
        302df8:	e5942030 	ldr	r2, [r4, #48]
        302dfc:	e1510842 	cmp	r1, r2, asr #16
        302e00:	da000023 	ble	302e94 <ArrangeAnglesNearNew(SZD_FEATURES *)+0x120>
        302e04:	e5d51000 	ldrb	r1, [r5]
        302e08:	e331000b 	teq	r1, #11	; 0xb
        302e0c:	1a000020 	bne	302e94 <ArrangeAnglesNearNew(SZD_FEATURES *)+0x120>
        302e10:	ea000002 	b	302e20 <ArrangeAnglesNearNew(SZD_FEATURES *)+0xac>
        302e14:	e5d51000 	ldrb	r1, [r5]
        302e18:	e331000b 	teq	r1, #11	; 0xb
        302e1c:	1a000020 	bne	302ea4 <ArrangeAnglesNearNew(SZD_FEATURES *)+0x130>
        302e20:	e3300025 	teq	r0, #37	; 0x25
        302e24:	13300026 	teqne	r0, #38	; 0x26
        302e28:	0a000010 	beq	302e70 <ArrangeAnglesNearNew(SZD_FEATURES *)+0xfc>
        302e2c:	e5950008 	ldr	r0, [r5, #8]
        302e30:	e1a00840 	mov	r0, r0, asr #16
        302e34:	e5941030 	ldr	r1, [r4, #48]
        302e38:	e1a01841 	mov	r1, r1, asr #16
        302e3c:	e1500001 	cmp	r0, r1
        302e40:	e2843010 	add	r3, r4, #16	; 0x10
        302e44:	e893000c 	ldmia	r3, {r2, r3}
        302e48:	e92d000c 	stmdb	sp!, {r2, r3}
        302e4c:	d5963004 	ldrle	r3, [r6, #4]
        302e50:	d1a03843 	movle	r3, r3, asr #16
        302e54:	c5963006 	ldrgt	r3, [r6, #6]
        302e58:	c1a03843 	movgt	r3, r3, asr #16
        302e5c:	e1a02000 	mov	r2, r0
        302e60:	eb6084f9 	bl	1b2424c <$cos_vect__FiN31PsT5>
        302e64:	e28dd008 	add	sp, sp, #8	; 0x8
        302e68:	e350003c 	cmp	r0, #60	; 0x3c
        302e6c:	aa000003 	bge	302e80 <ArrangeAnglesNearNew(SZD_FEATURES *)+0x10c>
        302e70:	e5957010 	ldr	r7, [r5, #16]
        302e74:	e1a00005 	mov	r0, r5
        302e78:	eb605b8e 	bl	1b19cb8 <$DelFromSPECLList(SPEC_TYPE *)>
        302e7c:	ea000008 	b	302ea4 <ArrangeAnglesNearNew(SZD_FEATURES *)+0x130>
        302e80:	e5951004 	ldr	r1, [r5, #4]
        302e84:	e1a01841 	mov	r1, r1, asr #16
        302e88:	e5940030 	ldr	r0, [r4, #48]
        302e8c:	e1510840 	cmp	r1, r0, asr #16
        302e90:	ca000003 	bgt	302ea4 <ArrangeAnglesNearNew(SZD_FEATURES *)+0x130>
        302e94:	e5957010 	ldr	r7, [r5, #16]
        302e98:	e1a01005 	mov	r1, r5
        302e9c:	e5960010 	ldr	r0, [r6, #16]
        302ea0:	eb6063cb 	bl	1b1bdd4 <$Move2ndAfter1st__FP9SPEC_TYPET1>
        302ea4:	e1a05007 	mov	r5, r7
        302ea8:	e595500c 	ldr	r5, [r5, #12]
        302eac:	e3350000 	teq	r5, #0	; 0x0
        302eb0:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        302eb4:	e5d50001 	ldrb	r0, [r5, #1]
        302eb8:	e330000e 	teq	r0, #14	; 0xe
        302ebc:	13300011 	teqne	r0, #17	; 0x11
        302ec0:	13300028 	teqne	r0, #40	; 0x28
        302ec4:	13300029 	teqne	r0, #41	; 0x29
        302ec8:	0affffbe 	beq	302dc8 <ArrangeAnglesNearNew(SZD_FEATURES *)+0x54>
        302ecc:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: Adjust_I_U(low_type *)
 * Address: 00303038
 */
Adjust_I_U(low_type *) {
    /*
        303038:	e1a0c00d 	mov	ip, sp
        30303c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        303040:	e24cb004 	sub	fp, ip, #4	; 0x4
        303044:	e24dd00c 	sub	sp, sp, #12	; 0xc
        303048:	e2800030 	add	r0, r0, #48	; 0x30
        30304c:	e9b00180 	ldmib	r0!, {r7, r8}
        303050:	e5901008 	ldr	r1, [r0, #8]
        303054:	e5b1400c 	ldr	r4, [r1, #12]!
        303058:	ea000111 	b	3034a4 <Adjust_I_U(low_type *)+0x46c>
        30305c:	e5949010 	ldr	r9, [r4, #16]
        303060:	e5d93001 	ldrb	r3, [r9, #1]
        303064:	e3330000 	teq	r3, #0	; 0x0
        303068:	15d40000 	ldrneb	r0, [r4]
        30306c:	13300010 	teqne	r0, #16	; 0x10
        303070:	13300020 	teqne	r0, #32	; 0x20
        303074:	0a000109 	beq	3034a0 <Adjust_I_U(low_type *)+0x468>
        303078:	e5991006 	ldr	r1, [r9, #6]
        30307c:	e1a01841 	mov	r1, r1, asr #16
        303080:	e5942004 	ldr	r2, [r4, #4]
        303084:	e1a02842 	mov	r2, r2, asr #16
        303088:	e1510002 	cmp	r1, r2
        30308c:	aa000103 	bge	3034a0 <Adjust_I_U(low_type *)+0x468>
        303090:	e595e004 	ldr	lr, [r5, #4]
        303094:	e1a0e84e 	mov	lr, lr, asr #16
        303098:	e594c006 	ldr	ip, [r4, #6]
        30309c:	e1a0c84c 	mov	ip, ip, asr #16
        3030a0:	e15e000c 	cmp	lr, ip
        3030a4:	da0000fd 	ble	3034a0 <Adjust_I_U(low_type *)+0x468>
        3030a8:	e3a0a000 	mov	sl, #0	; 0x0
        3030ac:	e5d40001 	ldrb	r0, [r4, #1]
        3030b0:	e3300002 	teq	r0, #2	; 0x2
        3030b4:	13300003 	teqne	r0, #3	; 0x3
        3030b8:	13300009 	teqne	r0, #9	; 0x9
        3030bc:	1330000a 	teqne	r0, #10	; 0xa
        3030c0:	1a00000b 	bne	3030f4 <Adjust_I_U(low_type *)+0xbc>
        3030c4:	e3330008 	teq	r3, #8	; 0x8
        3030c8:	13330007 	teqne	r3, #7	; 0x7
        3030cc:	1333000b 	teqne	r3, #11	; 0xb
        3030d0:	1333000c 	teqne	r3, #12	; 0xc
        3030d4:	1a000016 	bne	303134 <Adjust_I_U(low_type *)+0xfc>
        3030d8:	e5d50001 	ldrb	r0, [r5, #1]
        3030dc:	e3300008 	teq	r0, #8	; 0x8
        3030e0:	13300007 	teqne	r0, #7	; 0x7
        3030e4:	1330000b 	teqne	r0, #11	; 0xb
        3030e8:	1330000c 	teqne	r0, #12	; 0xc
        3030ec:	0a0000eb 	beq	3034a0 <Adjust_I_U(low_type *)+0x468>
        3030f0:	ea00000f 	b	303134 <Adjust_I_U(low_type *)+0xfc>
        3030f4:	e3300008 	teq	r0, #8	; 0x8
        3030f8:	13300007 	teqne	r0, #7	; 0x7
        3030fc:	1330000b 	teqne	r0, #11	; 0xb
        303100:	1330000c 	teqne	r0, #12	; 0xc
        303104:	1a00000a 	bne	303134 <Adjust_I_U(low_type *)+0xfc>
        303108:	e3330002 	teq	r3, #2	; 0x2
        30310c:	13330003 	teqne	r3, #3	; 0x3
        303110:	13330009 	teqne	r3, #9	; 0x9
        303114:	1333000a 	teqne	r3, #10	; 0xa
        303118:	1a000005 	bne	303134 <Adjust_I_U(low_type *)+0xfc>
        30311c:	e5d50001 	ldrb	r0, [r5, #1]
        303120:	e3300002 	teq	r0, #2	; 0x2
        303124:	13300003 	teqne	r0, #3	; 0x3
        303128:	13300009 	teqne	r0, #9	; 0x9
        30312c:	1330000a 	teqne	r0, #10	; 0xa
        303130:	03a0a002 	moveq	sl, #2	; 0x2
        303134:	e797008c 	ldr	r0, [r7, ip, lsl #1]
        303138:	e1a00820 	mov	r0, r0, lsr #16
        30313c:	e7973082 	ldr	r3, [r7, r2, lsl #1]
        303140:	e1a03823 	mov	r3, r3, lsr #16
        303144:	e0400003 	sub	r0, r0, r3
        303148:	e1a00800 	mov	r0, r0, lsl #16
        30314c:	e1b00840 	movs	r0, r0, asr #16
        303150:	42600000 	rsbmi	r0, r0, #0	; 0x0
        303154:	41a00800 	movmi	r0, r0, lsl #16
        303158:	41a00840 	movmi	r0, r0, asr #16
        30315c:	e5953006 	ldr	r3, [r5, #6]
        303160:	e08e3843 	add	r3, lr, r3, asr #16
        303164:	e1a030c3 	mov	r3, r3, asr #1
        303168:	e797c083 	ldr	ip, [r7, r3, lsl #1]
        30316c:	e1a0c82c 	mov	ip, ip, lsr #16
        303170:	e5993004 	ldr	r3, [r9, #4]
        303174:	e0813843 	add	r3, r1, r3, asr #16
        303178:	e1a030c3 	mov	r3, r3, asr #1
        30317c:	e7973083 	ldr	r3, [r7, r3, lsl #1]
        303180:	e1a03823 	mov	r3, r3, lsr #16
        303184:	e04c3003 	sub	r3, ip, r3
        303188:	e1a03803 	mov	r3, r3, lsl #16
        30318c:	e1b03843 	movs	r3, r3, asr #16
        303190:	42633000 	rsbmi	r3, r3, #0	; 0x0
        303194:	41a03803 	movmi	r3, r3, lsl #16
        303198:	41a03843 	movmi	r3, r3, asr #16
        30319c:	e3500014 	cmp	r0, #20	; 0x14
        3031a0:	ca0000be 	bgt	3034a0 <Adjust_I_U(low_type *)+0x468>
        3031a4:	e350000f 	cmp	r0, #15	; 0xf
        3031a8:	c2833002 	addgt	r3, r3, #2	; 0x2
        3031ac:	c1500143 	cmpgt	r0, r3, asr #2
        3031b0:	ca0000ba 	bgt	3034a0 <Adjust_I_U(low_type *)+0x468>
        3031b4:	e33a0000 	teq	sl, #0	; 0x0
        3031b8:	0a0000b8 	beq	3034a0 <Adjust_I_U(low_type *)+0x468>
        3031bc:	e5d90002 	ldrb	r0, [r9, #2]
        3031c0:	e200300f 	and	r3, r0, #15	; 0xf
        3031c4:	e5d50002 	ldrb	r0, [r5, #2]
        3031c8:	e200c00f 	and	ip, r0, #15	; 0xf
        3031cc:	e5d40002 	ldrb	r0, [r4, #2]
        3031d0:	e200000f 	and	r0, r0, #15	; 0xf
        3031d4:	e1330000 	teq	r3, r0
        3031d8:	113c0000 	teqne	ip, r0
        3031dc:	133a0000 	teqne	sl, #0	; 0x0
        3031e0:	0a0000ae 	beq	3034a0 <Adjust_I_U(low_type *)+0x468>
        3031e4:	e1a00008 	mov	r0, r8
        3031e8:	eb60840b 	bl	1b2421c <$brk_right__FPsiT2>
        3031ec:	e5941004 	ldr	r1, [r4, #4]
        3031f0:	e1500841 	cmp	r0, r1, asr #16
        3031f4:	aa000008 	bge	30321c <Adjust_I_U(low_type *)+0x1e4>
        3031f8:	e5952004 	ldr	r2, [r5, #4]
        3031fc:	e1a02842 	mov	r2, r2, asr #16
        303200:	e5941006 	ldr	r1, [r4, #6]
        303204:	e1a01841 	mov	r1, r1, asr #16
        303208:	e1a00008 	mov	r0, r8
        30320c:	eb608402 	bl	1b2421c <$brk_right__FPsiT2>
        303210:	e5951004 	ldr	r1, [r5, #4]
        303214:	e1500841 	cmp	r0, r1, asr #16
        303218:	ba0000a0 	blt	3034a0 <Adjust_I_U(low_type *)+0x468>
        30321c:	e33a0000 	teq	sl, #0	; 0x0
        303220:	0a00009e 	beq	3034a0 <Adjust_I_U(low_type *)+0x468>
        303224:	e24dd018 	sub	sp, sp, #24	; 0x18
        303228:	e5940004 	ldr	r0, [r4, #4]
        30322c:	e1a00840 	mov	r0, r0, asr #16
        303230:	e5941006 	ldr	r1, [r4, #6]
        303234:	e0800841 	add	r0, r0, r1, asr #16
        303238:	e1a020c0 	mov	r2, r0, asr #1
        30323c:	e58d2014 	str	r2, [sp, #20]
        303240:	e5990004 	ldr	r0, [r9, #4]
        303244:	e1a00840 	mov	r0, r0, asr #16
        303248:	e5991006 	ldr	r1, [r9, #6]
        30324c:	e0800841 	add	r0, r0, r1, asr #16
        303250:	e1a000c0 	mov	r0, r0, asr #1
        303254:	e58d0020 	str	r0, [sp, #32]
        303258:	e0820080 	add	r0, r2, r0, lsl #1
        30325c:	e2801001 	add	r1, r0, #1	; 0x1
        303260:	e3a00003 	mov	r0, #3	; 0x3
        303264:	eb62bdb5 	bl	1bb2940 <$__rt_sdiv>
        303268:	e1a06000 	mov	r6, r0
        30326c:	e5951004 	ldr	r1, [r5, #4]
        303270:	e1a01841 	mov	r1, r1, asr #16
        303274:	e5950006 	ldr	r0, [r5, #6]
        303278:	e0810840 	add	r0, r1, r0, asr #16
        30327c:	e1a000c0 	mov	r0, r0, asr #1
        303280:	e59d2014 	ldr	r2, [sp, #20]
        303284:	e0820080 	add	r0, r2, r0, lsl #1
        303288:	e2801001 	add	r1, r0, #1	; 0x1
        30328c:	e3a00003 	mov	r0, #3	; 0x3
        303290:	eb62bdaa 	bl	1bb2940 <$__rt_sdiv>
        303294:	e1a03006 	mov	r3, r6
        303298:	e58d0010 	str	r0, [sp, #16]
        30329c:	e92d0008 	stmdb	sp!, {r3}
        3032a0:	e1a01008 	mov	r1, r8
        3032a4:	e1a00007 	mov	r0, r7
        3032a8:	e59d2024 	ldr	r2, [sp, #36]
        3032ac:	e59d3018 	ldr	r3, [sp, #24]
        3032b0:	eb606b0d 	bl	1b1deec <$CurvMeasure__FPsT1iN23>
        3032b4:	e28dd004 	add	sp, sp, #4	; 0x4
        3032b8:	e58d000c 	str	r0, [sp, #12]
        3032bc:	e59d3010 	ldr	r3, [sp, #16]
        3032c0:	e92d0008 	stmdb	sp!, {r3}
        3032c4:	e5951004 	ldr	r1, [r5, #4]
        3032c8:	e1a01841 	mov	r1, r1, asr #16
        3032cc:	e5950006 	ldr	r0, [r5, #6]
        3032d0:	e0810840 	add	r0, r1, r0, asr #16
        3032d4:	e1a030c0 	mov	r3, r0, asr #1
        3032d8:	e1a01008 	mov	r1, r8
        3032dc:	e1a00007 	mov	r0, r7
        3032e0:	e59d2018 	ldr	r2, [sp, #24]
        3032e4:	eb606b00 	bl	1b1deec <$CurvMeasure__FPsT1iN23>
        3032e8:	e28dd004 	add	sp, sp, #4	; 0x4
        3032ec:	e58d0008 	str	r0, [sp, #8]
        3032f0:	e59d3014 	ldr	r3, [sp, #20]
        3032f4:	e92d0008 	stmdb	sp!, {r3}
        3032f8:	e5953004 	ldr	r3, [r5, #4]
        3032fc:	e1a03843 	mov	r3, r3, asr #16
        303300:	e5992006 	ldr	r2, [r9, #6]
        303304:	e1a02842 	mov	r2, r2, asr #16
        303308:	e1a01008 	mov	r1, r8
        30330c:	e1a00007 	mov	r0, r7
        303310:	eb606af5 	bl	1b1deec <$CurvMeasure__FPsT1iN23>
        303314:	e28dd004 	add	sp, sp, #4	; 0x4
        303318:	e58d0004 	str	r0, [sp, #4]
        30331c:	e59d000c 	ldr	r0, [sp, #12]
        303320:	eb5db127 	bl	1a6f7c4 <$HWRAbs(int)>
        303324:	e3500001 	cmp	r0, #1	; 0x1
        303328:	b3a01000 	movlt	r1, #0	; 0x0
        30332c:	a3a01001 	movge	r1, #1	; 0x1
        303330:	e58d1000 	str	r1, [sp]
        303334:	e59d0008 	ldr	r0, [sp, #8]
        303338:	eb5db121 	bl	1a6f7c4 <$HWRAbs(int)>
        30333c:	e3500001 	cmp	r0, #1	; 0x1
        303340:	b3a00000 	movlt	r0, #0	; 0x0
        303344:	a3a00001 	movge	r0, #1	; 0x1
        303348:	e3a06000 	mov	r6, #0	; 0x0
        30334c:	e59d1000 	ldr	r1, [sp]
        303350:	e3510000 	cmp	r1, #0	; 0x0
        303354:	1a000057 	bne	3034b8 <Adjust_I_U(low_type *)+0x480>
        303358:	e3300000 	teq	r0, #0	; 0x0
        30335c:	1a00007c 	bne	303554 <Adjust_I_U(low_type *)+0x51c>
        303360:	e3e03000 	mvn	r3, #0	; 0x0
        303364:	e92d0008 	stmdb	sp!, {r3}
        303368:	e5943006 	ldr	r3, [r4, #6]
        30336c:	e1a03843 	mov	r3, r3, asr #16
        303370:	e5942004 	ldr	r2, [r4, #4]
        303374:	e1a02842 	mov	r2, r2, asr #16
        303378:	e1a01008 	mov	r1, r8
        30337c:	e1a00007 	mov	r0, r7
        303380:	eb606ad9 	bl	1b1deec <$CurvMeasure__FPsT1iN23>
        303384:	e28dd004 	add	sp, sp, #4	; 0x4
        303388:	eb5db10d 	bl	1a6f7c4 <$HWRAbs(int)>
        30338c:	e3500011 	cmp	r0, #17	; 0x11
        303390:	a3a06003 	movge	r6, #3	; 0x3
        303394:	e3360003 	teq	r6, #3	; 0x3
        303398:	1a000036 	bne	303478 <Adjust_I_U(low_type *)+0x440>
        30339c:	e5990006 	ldr	r0, [r9, #6]
        3033a0:	e1a00840 	mov	r0, r0, asr #16
        3033a4:	e5941004 	ldr	r1, [r4, #4]
        3033a8:	e1a01841 	mov	r1, r1, asr #16
        3033ac:	e58d101c 	str	r1, [sp, #28]
        3033b0:	e58d1018 	str	r1, [sp, #24]
        3033b4:	e0800081 	add	r0, r0, r1, lsl #1
        3033b8:	e2801001 	add	r1, r0, #1	; 0x1
        3033bc:	e3a00003 	mov	r0, #3	; 0x3
        3033c0:	eb62bd5e 	bl	1bb2940 <$__rt_sdiv>
        3033c4:	e1a09000 	mov	r9, r0
        3033c8:	e5950004 	ldr	r0, [r5, #4]
        3033cc:	e1a00840 	mov	r0, r0, asr #16
        3033d0:	e5945006 	ldr	r5, [r4, #6]
        3033d4:	e1a05845 	mov	r5, r5, asr #16
        3033d8:	e0800085 	add	r0, r0, r5, lsl #1
        3033dc:	e2801001 	add	r1, r0, #1	; 0x1
        3033e0:	e3a00003 	mov	r0, #3	; 0x3
        3033e4:	eb62bd55 	bl	1bb2940 <$__rt_sdiv>
        3033e8:	e59d1018 	ldr	r1, [sp, #24]
        3033ec:	e1510009 	cmp	r1, r9
        3033f0:	b59d901c 	ldrlt	r9, [sp, #28]
        3033f4:	e1550000 	cmp	r5, r0
        3033f8:	c1a00005 	movgt	r0, r5
        3033fc:	e7981089 	ldr	r1, [r8, r9, lsl #1]
        303400:	e1a01841 	mov	r1, r1, asr #16
        303404:	e7982080 	ldr	r2, [r8, r0, lsl #1]
        303408:	e1a02842 	mov	r2, r2, asr #16
        30340c:	e0811002 	add	r1, r1, r2
        303410:	e59d2014 	ldr	r2, [sp, #20]
        303414:	e7982082 	ldr	r2, [r8, r2, lsl #1]
        303418:	e1a02822 	mov	r2, r2, lsr #16
        30341c:	e04210c1 	sub	r1, r2, r1, asr #1
        303420:	e1a01801 	mov	r1, r1, lsl #16
        303424:	e1b01841 	movs	r1, r1, asr #16
        303428:	42611000 	rsbmi	r1, r1, #0	; 0x0
        30342c:	41a01801 	movmi	r1, r1, lsl #16
        303430:	41a01841 	movmi	r1, r1, asr #16
        303434:	e7970080 	ldr	r0, [r7, r0, lsl #1]
        303438:	e1a00820 	mov	r0, r0, lsr #16
        30343c:	e7972089 	ldr	r2, [r7, r9, lsl #1]
        303440:	e1a02822 	mov	r2, r2, lsr #16
        303444:	e0400002 	sub	r0, r0, r2
        303448:	e1a00800 	mov	r0, r0, lsl #16
        30344c:	e1b00840 	movs	r0, r0, asr #16
        303450:	42600000 	rsbmi	r0, r0, #0	; 0x0
        303454:	41a00800 	movmi	r0, r0, lsl #16
        303458:	41a00840 	movmi	r0, r0, asr #16
        30345c:	e33a0001 	teq	sl, #1	; 0x1
        303460:	1a000001 	bne	30346c <Adjust_I_U(low_type *)+0x434>
        303464:	e1500001 	cmp	r0, r1
        303468:	ca000001 	bgt	303474 <Adjust_I_U(low_type *)+0x43c>
        30346c:	e1500081 	cmp	r0, r1, lsl #1
        303470:	da000000 	ble	303478 <Adjust_I_U(low_type *)+0x440>
        303474:	e3a06000 	mov	r6, #0	; 0x0
        303478:	e3360000 	teq	r6, #0	; 0x0
        30347c:	0a000006 	beq	30349c <Adjust_I_U(low_type *)+0x464>
        303480:	e33a0001 	teq	sl, #1	; 0x1
        303484:	05c46001 	streqb	r6, [r4, #1]
        303488:	0a000003 	beq	30349c <Adjust_I_U(low_type *)+0x464>
        30348c:	e3360002 	teq	r6, #2	; 0x2
        303490:	13a00007 	movne	r0, #7	; 0x7
        303494:	03a00008 	moveq	r0, #8	; 0x8
        303498:	e5c40001 	strb	r0, [r4, #1]
        30349c:	e28dd018 	add	sp, sp, #24	; 0x18
        3034a0:	e594400c 	ldr	r4, [r4, #12]
        3034a4:	e3340000 	teq	r4, #0	; 0x0
        3034a8:	1594500c 	ldrne	r5, [r4, #12]
        3034ac:	13350000 	teqne	r5, #0	; 0x0
        3034b0:	1afffee9 	bne	30305c <Adjust_I_U(low_type *)+0x24>
        3034b4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        3034b8:	0a000025 	beq	303554 <Adjust_I_U(low_type *)+0x51c>
        3034bc:	e3300000 	teq	r0, #0	; 0x0
        3034c0:	0a000015 	beq	30351c <Adjust_I_U(low_type *)+0x4e4>
        3034c4:	e59d000c 	ldr	r0, [sp, #12]
        3034c8:	e3500000 	cmp	r0, #0	; 0x0
        3034cc:	b3a00000 	movlt	r0, #0	; 0x0
        3034d0:	a3a00001 	movge	r0, #1	; 0x1
        3034d4:	e59d1008 	ldr	r1, [sp, #8]
        3034d8:	e3510000 	cmp	r1, #0	; 0x0
        3034dc:	b3a01000 	movlt	r1, #0	; 0x0
        3034e0:	a3a01001 	movge	r1, #1	; 0x1
        3034e4:	e1300001 	teq	r0, r1
        3034e8:	1affffeb 	bne	30349c <Adjust_I_U(low_type *)+0x464>
        3034ec:	e59d000c 	ldr	r0, [sp, #12]
        3034f0:	e3500000 	cmp	r0, #0	; 0x0
        3034f4:	b3a00000 	movlt	r0, #0	; 0x0
        3034f8:	a3a00001 	movge	r0, #1	; 0x1
        3034fc:	e59d1004 	ldr	r1, [sp, #4]
        303500:	e3510000 	cmp	r1, #0	; 0x0
        303504:	b3a01000 	movlt	r1, #0	; 0x0
        303508:	a3a01001 	movge	r1, #1	; 0x1
        30350c:	e1300001 	teq	r0, r1
        303510:	03a06002 	moveq	r6, #2	; 0x2
        303514:	0affffd9 	beq	303480 <Adjust_I_U(low_type *)+0x448>
        303518:	ea000017 	b	30357c <Adjust_I_U(low_type *)+0x544>
        30351c:	e59d1000 	ldr	r1, [sp]
        303520:	e3310000 	teq	r1, #0	; 0x0
        303524:	0a00000a 	beq	303554 <Adjust_I_U(low_type *)+0x51c>
        303528:	e59d000c 	ldr	r0, [sp, #12]
        30352c:	e3500000 	cmp	r0, #0	; 0x0
        303530:	b3a00000 	movlt	r0, #0	; 0x0
        303534:	a3a00001 	movge	r0, #1	; 0x1
        303538:	e59d1004 	ldr	r1, [sp, #4]
        30353c:	e3510000 	cmp	r1, #0	; 0x0
        303540:	b3a01000 	movlt	r1, #0	; 0x0
        303544:	a3a01001 	movge	r1, #1	; 0x1
        303548:	e1300001 	teq	r0, r1
        30354c:	0affffd2 	beq	30349c <Adjust_I_U(low_type *)+0x464>
        303550:	ea000009 	b	30357c <Adjust_I_U(low_type *)+0x544>
        303554:	e59d0008 	ldr	r0, [sp, #8]
        303558:	e3500000 	cmp	r0, #0	; 0x0
        30355c:	b3a00000 	movlt	r0, #0	; 0x0
        303560:	a3a00001 	movge	r0, #1	; 0x1
        303564:	e59d1004 	ldr	r1, [sp, #4]
        303568:	e3510000 	cmp	r1, #0	; 0x0
        30356c:	b3a01000 	movlt	r1, #0	; 0x0
        303570:	a3a01001 	movge	r1, #1	; 0x1
        303574:	e1300001 	teq	r0, r1
        303578:	0affffc7 	beq	30349c <Adjust_I_U(low_type *)+0x464>
        30357c:	e3a06003 	mov	r6, #3	; 0x3
        303580:	eaffff85 	b	30339c <Adjust_I_U(low_type *)+0x364>
    */
}

/**
 * Symbol: AdjustBegEndWithoutPoint(SPEC_TYPE *)
 * Address: 00305044
 */
AdjustBegEndWithoutPoint(SPEC_TYPE *) {
    /*
        305044:	e5902010 	ldr	r2, [r0, #16]
        305048:	e3320000 	teq	r2, #0	; 0x0
        30504c:	1590100c 	ldrne	r1, [r0, #12]
        305050:	13310000 	teqne	r1, #0	; 0x0
        305054:	01a0f00e 	moveq	pc, lr
        305058:	e5d23001 	ldrb	r3, [r2, #1]
        30505c:	e3330012 	teq	r3, #18	; 0x12
        305060:	13330001 	teqne	r3, #1	; 0x1
        305064:	13330013 	teqne	r3, #19	; 0x13
        305068:	13330014 	teqne	r3, #20	; 0x14
        30506c:	1a000009 	bne	305098 <AdjustBegEndWithoutPoint(SPEC_TYPE *)+0x54>
        305070:	e5923006 	ldr	r3, [r2, #6]
        305074:	e1a03843 	mov	r3, r3, asr #16
        305078:	e590c004 	ldr	ip, [r0, #4]
        30507c:	e133084c 	teq	r3, ip, asr #16
        305080:	1a000004 	bne	305098 <AdjustBegEndWithoutPoint(SPEC_TYPE *)+0x54>
        305084:	e5913004 	ldr	r3, [r1, #4]
        305088:	e1a03823 	mov	r3, r3, lsr #16
        30508c:	e5c23007 	strb	r3, [r2, #7]
        305090:	e1a03443 	mov	r3, r3, asr #8
        305094:	e5c23006 	strb	r3, [r2, #6]
        305098:	e5d13001 	ldrb	r3, [r1, #1]
        30509c:	e3330012 	teq	r3, #18	; 0x12
        3050a0:	13330001 	teqne	r3, #1	; 0x1
        3050a4:	13330013 	teqne	r3, #19	; 0x13
        3050a8:	13330014 	teqne	r3, #20	; 0x14
        3050ac:	11a0f00e 	movne	pc, lr
        3050b0:	e5913004 	ldr	r3, [r1, #4]
        3050b4:	e1a03843 	mov	r3, r3, asr #16
        3050b8:	e5900006 	ldr	r0, [r0, #6]
        3050bc:	e1330840 	teq	r3, r0, asr #16
        3050c0:	11a0f00e 	movne	pc, lr
        3050c4:	e5920006 	ldr	r0, [r2, #6]
        3050c8:	e1a00820 	mov	r0, r0, lsr #16
        3050cc:	e5c10005 	strb	r0, [r1, #5]
        3050d0:	e1a00440 	mov	r0, r0, asr #8
        3050d4:	e5c10004 	strb	r0, [r1, #4]
        3050d8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: AllocSpecl(SPEC_TYPE **, short)
 * Address: 00306410
 */
AllocSpecl(SPEC_TYPE **, short) {
    /*
        306410:	e1a0c00d 	mov	ip, sp
        306414:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        306418:	e24cb004 	sub	fp, ip, #4	; 0x4
        30641c:	e1a04000 	mov	r4, r0
        306420:	e1a00801 	mov	r0, r1, lsl #16
        306424:	e1a00840 	mov	r0, r0, asr #16
        306428:	e0800100 	add	r0, r0, r0, lsl #2
        30642c:	e1a00100 	mov	r0, r0, lsl #2
        306430:	eb5da4e1 	bl	1a6f7bc <$HWRMemoryAlloc(unsigned long)>
        306434:	e5840000 	str	r0, [r4]
        306438:	e3300000 	teq	r0, #0	; 0x0
        30643c:	13a00001 	movne	r0, #1	; 0x1
        306440:	03a00000 	moveq	r0, #0	; 0x0
        306444:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: AddKeyCommand__FRC6RefVarT1
 * Address: 0030b1c4
 */
void globals::AddKeyCommand() {
    /*
        30b1c4:	e1a0c00d 	mov	ip, sp
        30b1c8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        30b1cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        30b1d0:	e1a04000 	mov	r4, r0
        30b1d4:	e1a05001 	mov	r5, r1
        30b1d8:	e24dd004 	sub	sp, sp, #4	; 0x4
        30b1dc:	e59f1058 	ldr	r1, [pc, #58]	; 30b23c <AddKeyCommand__FRC6RefVarT1+0x78>
        30b1e0:	e1a06001 	mov	r6, r1
        30b1e4:	e3a02000 	mov	r2, #0	; 0x0
        30b1e8:	eb62e41e 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        30b1ec:	eb62dbd6 	bl	1bc214c <$AllocateRefHandle(long)>
        30b1f0:	e58d0000 	str	r0, [sp]
        30b1f4:	e5900000 	ldr	r0, [r0]
        30b1f8:	e3a07000 	mov	r7, #0	; 0x0
        30b1fc:	e3300002 	teq	r0, #2	; 0x2
        30b200:	1a00000f 	bne	30b244 <AddKeyCommand__FRC6RefVarT1+0x80>
        30b204:	e59f0034 	ldr	r0, [pc, #34]	; 30b240 <AddKeyCommand__FRC6RefVarT1+0x7c>
        30b208:	e3a01001 	mov	r1, #1	; 0x1
        30b20c:	eb62dbc9 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        30b210:	e59d1000 	ldr	r1, [sp]
        30b214:	e5810000 	str	r0, [r1]
        30b218:	e5951000 	ldr	r1, [r5]
        30b21c:	e5912000 	ldr	r2, [r1]
        30b220:	e1a01007 	mov	r1, r7
        30b224:	eb62ec4b 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        30b228:	e1a0200d 	mov	r2, sp
        30b22c:	e1a01006 	mov	r1, r6
        30b230:	e1a00004 	mov	r0, r4
        30b234:	eb62ec4b 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        30b238:	ea000010 	b	30b280 <AddKeyCommand__FRC6RefVarT1+0xbc>
        30b23c:	00685348 	rsbeq	r5, r8, r8, asr #6
        30b240:	00681f10 	rsbeq	r1, r8, r0, lsl pc
        30b244:	eb62e829 	bl	1bc52f0 <$ObjectFlags(long)>
        30b248:	e3100040 	tst	r0, #64	; 0x40
        30b24c:	0a000007 	beq	30b270 <AddKeyCommand__FRC6RefVarT1+0xac>
        30b250:	e1a0000d 	mov	r0, sp
        30b254:	eb62dbc4 	bl	1bc216c <$Clone(RefVar const &)>
        30b258:	e59d1000 	ldr	r1, [sp]
        30b25c:	e1a0200d 	mov	r2, sp
        30b260:	e5810000 	str	r0, [r1]
        30b264:	e1a01006 	mov	r1, r6
        30b268:	e1a00004 	mov	r0, r4
        30b26c:	eb62ec3d 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        30b270:	e1a01005 	mov	r1, r5
        30b274:	e1a0000d 	mov	r0, sp
        30b278:	e3a02000 	mov	r2, #0	; 0x0
        30b27c:	eb63f896 	bl	1c094dc <$ArrayInsert__FRC6RefVarT1l>
        30b280:	e59d0000 	ldr	r0, [sp]
        30b284:	eb62dfcc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30b288:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: AddKeyCommands__FRC6RefVarT1
 * Address: 0030b2a4
 */
void globals::AddKeyCommands() {
    /*
        30b2a4:	e1a0c00d 	mov	ip, sp
        30b2a8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        30b2ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        30b2b0:	e1a04000 	mov	r4, r0
        30b2b4:	e1a05001 	mov	r5, r1
        30b2b8:	e24dd004 	sub	sp, sp, #4	; 0x4
        30b2bc:	e59f1030 	ldr	r1, [pc, #30]	; 30b2f4 <AddKeyCommands__FRC6RefVarT1+0x50>
        30b2c0:	e1a06001 	mov	r6, r1
        30b2c4:	e3a02000 	mov	r2, #0	; 0x0
        30b2c8:	eb62e3e6 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        30b2cc:	eb62db9e 	bl	1bc214c <$AllocateRefHandle(long)>
        30b2d0:	e58d0000 	str	r0, [sp]
        30b2d4:	e5900000 	ldr	r0, [r0]
        30b2d8:	e3300002 	teq	r0, #2	; 0x2
        30b2dc:	1a000005 	bne	30b2f8 <AddKeyCommands__FRC6RefVarT1+0x54>
        30b2e0:	e1a02005 	mov	r2, r5
        30b2e4:	e1a01006 	mov	r1, r6
        30b2e8:	e1a00004 	mov	r0, r4
        30b2ec:	eb62ec1d 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        30b2f0:	ea000028 	b	30b398 <AddKeyCommands__FRC6RefVarT1+0xf4>
        30b2f4:	00685348 	rsbeq	r5, r8, r8, asr #6
        30b2f8:	e24dd004 	sub	sp, sp, #4	; 0x4
        30b2fc:	e51f0010 	ldr	r0, [pc, #fffffff0]	; 30b2f4 <AddKeyCommands__FRC6RefVarT1+0x50>
        30b300:	e5900000 	ldr	r0, [r0]
        30b304:	e5901000 	ldr	r1, [r0]
        30b308:	e5940000 	ldr	r0, [r4]
        30b30c:	e5900000 	ldr	r0, [r0]
        30b310:	eb62e3d2 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        30b314:	eb62db8c 	bl	1bc214c <$AllocateRefHandle(long)>
        30b318:	e58d0000 	str	r0, [sp]
        30b31c:	e5900000 	ldr	r0, [r0]
        30b320:	e3300002 	teq	r0, #2	; 0x2
        30b324:	0a000005 	beq	30b340 <AddKeyCommands__FRC6RefVarT1+0x9c>
        30b328:	e59d0004 	ldr	r0, [sp, #4]
        30b32c:	e5900000 	ldr	r0, [r0]
        30b330:	eb62e7ee 	bl	1bc52f0 <$ObjectFlags(long)>
        30b334:	e3100040 	tst	r0, #64	; 0x40
        30b338:	11a0000d 	movne	r0, sp
        30b33c:	1a000000 	bne	30b344 <AddKeyCommands__FRC6RefVarT1+0xa0>
        30b340:	e28d0004 	add	r0, sp, #4	; 0x4
        30b344:	eb62db88 	bl	1bc216c <$Clone(RefVar const &)>
        30b348:	e59d1000 	ldr	r1, [sp]
        30b34c:	e5810000 	str	r0, [r1]
        30b350:	e5950000 	ldr	r0, [r5]
        30b354:	e5900000 	ldr	r0, [r0]
        30b358:	eb62e7d3 	bl	1bc52ac <$Length(long)>
        30b35c:	e1a03000 	mov	r3, r0
        30b360:	e3a02000 	mov	r2, #0	; 0x0
        30b364:	e92d000c 	stmdb	sp!, {r2, r3}
        30b368:	e1a03005 	mov	r3, r5
        30b36c:	e28d0008 	add	r0, sp, #8	; 0x8
        30b370:	e3a01000 	mov	r1, #0	; 0x0
        30b374:	eb62db75 	bl	1bc2150 <$ArrayMunger__FRC6RefVarlT2T1N22>
        30b378:	e28dd008 	add	sp, sp, #8	; 0x8
        30b37c:	e1a0200d 	mov	r2, sp
        30b380:	e1a01006 	mov	r1, r6
        30b384:	e1a00004 	mov	r0, r4
        30b388:	eb62ebf6 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        30b38c:	e59d0000 	ldr	r0, [sp]
        30b390:	eb62df89 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30b394:	e28dd004 	add	sp, sp, #4	; 0x4
        30b398:	e59d0000 	ldr	r0, [sp]
        30b39c:	eb62df86 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30b3a0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: AllocateEarlyStuff(void)
 * Address: 0030d19c
 */
AllocateEarlyStuff(void) {
    /*
        30d19c:	e1a0c00d 	mov	ip, sp
        30d1a0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        30d1a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        30d1a8:	e24dd004 	sub	sp, sp, #4	; 0x4
        30d1ac:	eb5e223e 	bl	1a95aac <$GetCurrentLocale(void)>
        30d1b0:	eb62d3e5 	bl	1bc214c <$AllocateRefHandle(long)>
        30d1b4:	e58d0000 	str	r0, [sp]
        30d1b8:	e59f1044 	ldr	r1, [pc, #44]	; 30d204 <AllocateEarlyStuff(void)+0x68>
        30d1bc:	e1a0000d 	mov	r0, sp
        30d1c0:	e3a02000 	mov	r2, #0	; 0x0
        30d1c4:	eb62dc27 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        30d1c8:	e59d1000 	ldr	r1, [sp]
        30d1cc:	e5810000 	str	r0, [r1]
        30d1d0:	e3300002 	teq	r0, #2	; 0x2
        30d1d4:	0a000007 	beq	30d1f8 <AllocateEarlyStuff(void)+0x5c>
        30d1d8:	e3100003 	tst	r0, #3	; 0x3
        30d1dc:	01a00140 	moveq	r0, r0, asr #2
        30d1e0:	0a000000 	beq	30d1e8 <AllocateEarlyStuff(void)+0x4c>
        30d1e4:	eb62d3cc 	bl	1bc211c <$_RINTError(long)>
        30d1e8:	e3300000 	teq	r0, #0	; 0x0
        30d1ec:	11a01000 	movne	r1, r0
        30d1f0:	159f0010 	ldrne	r0, [pc, #10]	; 30d208 <AllocateEarlyStuff(void)+0x6c>
        30d1f4:	1b6270a5 	blne	1ba9490 <TSortTables::$SetDefaultTableId(long)>
        30d1f8:	e59d0000 	ldr	r0, [sp]
        30d1fc:	eb62d7ee 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30d200:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        30d204:	00684708 	rsbeq	r4, r8, r8, lsl #14
        30d208:	0c107800 	ldceq	8, cr7, [r0]
    */
}

/**
 * Symbol: AlreadyInCommandArray__FRC6RefVarT1
 * Address: 0030fa70
 */
void globals::AlreadyInCommandArray() {
    /*
        30fa70:	e1a0c00d 	mov	ip, sp
        30fa74:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        30fa78:	e24cb004 	sub	fp, ip, #4	; 0x4
        30fa7c:	e1a04000 	mov	r4, r0
        30fa80:	e1a05001 	mov	r5, r1
        30fa84:	e24dd004 	sub	sp, sp, #4	; 0x4
        30fa88:	e3a07000 	mov	r7, #0	; 0x0
        30fa8c:	e5900000 	ldr	r0, [r0]
        30fa90:	e5900000 	ldr	r0, [r0]
        30fa94:	eb62d604 	bl	1bc52ac <$Length(long)>
        30fa98:	e1a06000 	mov	r6, r0
        30fa9c:	e3a00002 	mov	r0, #2	; 0x2
        30faa0:	eb62c9a9 	bl	1bc214c <$AllocateRefHandle(long)>
        30faa4:	e58d0000 	str	r0, [sp]
        30faa8:	e59fa0f8 	ldr	sl, [pc, #f8]	; 30fba8 <AlreadyInCommandArray__FRC6RefVarT1+0x138>
        30faac:	e59a0000 	ldr	r0, [sl]
        30fab0:	e5901000 	ldr	r1, [r0]
        30fab4:	e5950000 	ldr	r0, [r5]
        30fab8:	e5900000 	ldr	r0, [r0]
        30fabc:	eb62d1e7 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        30fac0:	e2001003 	and	r1, r0, #3	; 0x3
        30fac4:	e3310002 	teq	r1, #2	; 0x2
        30fac8:	03a01003 	moveq	r1, #3	; 0x3
        30facc:	00011140 	andeq	r1, r1, r0, asr #2
        30fad0:	03310001 	teqeq	r1, #1	; 0x1
        30fad4:	01a00140 	moveq	r0, r0, asr #2
        30fad8:	01a00140 	moveq	r0, r0, asr #2
        30fadc:	01a00800 	moveq	r0, r0, lsl #16
        30fae0:	01a00820 	moveq	r0, r0, lsr #16
        30fae4:	0a000000 	beq	30faec <AlreadyInCommandArray__FRC6RefVarT1+0x7c>
        30fae8:	eb62c98a 	bl	1bc2118 <$_RCHARError(long)>
        30faec:	e1a09800 	mov	r9, r0, lsl #16
        30faf0:	e1a09829 	mov	r9, r9, lsr #16
        30faf4:	e1a00005 	mov	r0, r5
        30faf8:	eb5f6241 	bl	1ae8404 <$KeyCommandModifiers(RefVar const &)>
        30fafc:	e1a08000 	mov	r8, r0
        30fb00:	e3a05000 	mov	r5, #0	; 0x0
        30fb04:	e3560000 	cmp	r6, #0	; 0x0
        30fb08:	9a000022 	bls	30fb98 <AlreadyInCommandArray__FRC6RefVarT1+0x128>
        30fb0c:	e1a01005 	mov	r1, r5
        30fb10:	e5940000 	ldr	r0, [r4]
        30fb14:	e5900000 	ldr	r0, [r0]
        30fb18:	eb62d1cd 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        30fb1c:	e59d1000 	ldr	r1, [sp]
        30fb20:	e5810000 	str	r0, [r1]
        30fb24:	e1a0000d 	mov	r0, sp
        30fb28:	eb5f6235 	bl	1ae8404 <$KeyCommandModifiers(RefVar const &)>
        30fb2c:	e1a0a000 	mov	sl, r0
        30fb30:	e59f0070 	ldr	r0, [pc, #70]	; 30fba8 <AlreadyInCommandArray__FRC6RefVarT1+0x138>
        30fb34:	e5900000 	ldr	r0, [r0]
        30fb38:	e5901000 	ldr	r1, [r0]
        30fb3c:	e59d0000 	ldr	r0, [sp]
        30fb40:	e5900000 	ldr	r0, [r0]
        30fb44:	eb62d1c5 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        30fb48:	e2001003 	and	r1, r0, #3	; 0x3
        30fb4c:	e3310002 	teq	r1, #2	; 0x2
        30fb50:	03a01003 	moveq	r1, #3	; 0x3
        30fb54:	00011140 	andeq	r1, r1, r0, asr #2
        30fb58:	03310001 	teqeq	r1, #1	; 0x1
        30fb5c:	01a00140 	moveq	r0, r0, asr #2
        30fb60:	01a00140 	moveq	r0, r0, asr #2
        30fb64:	01a00800 	moveq	r0, r0, lsl #16
        30fb68:	01a00820 	moveq	r0, r0, lsr #16
        30fb6c:	0a000000 	beq	30fb74 <AlreadyInCommandArray__FRC6RefVarT1+0x104>
        30fb70:	eb62c968 	bl	1bc2118 <$_RCHARError(long)>
        30fb74:	e1a00800 	mov	r0, r0, lsl #16
        30fb78:	e1a00820 	mov	r0, r0, lsr #16
        30fb7c:	e138000a 	teq	r8, sl
        30fb80:	01390000 	teqeq	r9, r0
        30fb84:	03a07001 	moveq	r7, #1	; 0x1
        30fb88:	0a000002 	beq	30fb98 <AlreadyInCommandArray__FRC6RefVarT1+0x128>
        30fb8c:	e2855001 	add	r5, r5, #1	; 0x1
        30fb90:	e1550006 	cmp	r5, r6
        30fb94:	3affffdc 	bcc	30fb0c <AlreadyInCommandArray__FRC6RefVarT1+0x9c>
        30fb98:	e59d0000 	ldr	r0, [sp]
        30fb9c:	eb62cd86 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30fba0:	e1a00007 	mov	r0, r7
        30fba4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        30fba8:	00682390 	streqb	r2, [r8], -#48
    */
}

/**
 * Symbol: AllocateMoreMasters
 * Address: 00311f68
 */
void globals::AllocateMoreMasters() {
    /*
        311f68:	e1a0c00d 	mov	ip, sp
        311f6c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        311f70:	e24cb004 	sub	fp, ip, #4	; 0x4
        311f74:	eb633c59 	bl	1be10e0 <$GetCurrentHeap>
        311f78:	e1a04000 	mov	r4, r0
        311f7c:	e1a06000 	mov	r6, r0
        311f80:	e5900098 	ldr	r0, [r0, #152]
        311f84:	e1300004 	teq	r0, r4
        311f88:	11a04000 	movne	r4, r0
        311f8c:	1b634078 	blne	1be2174 <$SetCurrentHeap>
        311f90:	e5940040 	ldr	r0, [r4, #64]
        311f94:	e1a00180 	mov	r0, r0, lsl #3
        311f98:	eb619b30 	bl	1b78c60 <$NewBlock>
        311f9c:	e1a05000 	mov	r5, r0
        311fa0:	e1340006 	teq	r4, r6
        311fa4:	0a000002 	beq	311fb4 <AllocateMoreMasters+0x4c>
        311fa8:	e1a00006 	mov	r0, r6
        311fac:	eb634070 	bl	1be2174 <$SetCurrentHeap>
        311fb0:	e1a04006 	mov	r4, r6
        311fb4:	e3350000 	teq	r5, #0	; 0x0
        311fb8:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        311fbc:	e5940040 	ldr	r0, [r4, #64]
        311fc0:	e59410b4 	ldr	r1, [r4, #180]
        311fc4:	e0810000 	add	r0, r1, r0
        311fc8:	e58400b4 	str	r0, [r4, #180]
        311fcc:	e1a00005 	mov	r0, r5
        311fd0:	e3a01005 	mov	r1, #5	; 0x5
        311fd4:	eb619702 	bl	1b77be4 <$CreatePrivateBlock>
        311fd8:	e3a00000 	mov	r0, #0	; 0x0
        311fdc:	e3a01000 	mov	r1, #0	; 0x0
        311fe0:	e5942040 	ldr	r2, [r4, #64]
        311fe4:	e3520000 	cmp	r2, #0	; 0x0
        311fe8:	da000008 	ble	312010 <AllocateMoreMasters+0xa8>
        311fec:	e3a02103 	mov	r2, #-1073741824	; 0xc0000000
        311ff0:	e0853181 	add	r3, r5, r1, lsl #3
        311ff4:	e5830014 	str	r0, [r3, #20]
        311ff8:	e5832010 	str	r2, [r3, #16]
        311ffc:	e2830010 	add	r0, r3, #16	; 0x10
        312000:	e2811001 	add	r1, r1, #1	; 0x1
        312004:	e5943040 	ldr	r3, [r4, #64]
        312008:	e1530001 	cmp	r3, r1
        31200c:	cafffff7 	bgt	311ff0 <AllocateMoreMasters+0x88>
        312010:	e5941044 	ldr	r1, [r4, #68]
        312014:	e3310000 	teq	r1, #0	; 0x0
        312018:	0a000006 	beq	312038 <AllocateMoreMasters+0xd0>
        31201c:	e5912004 	ldr	r2, [r1, #4]
        312020:	e3320000 	teq	r2, #0	; 0x0
        312024:	11a01002 	movne	r1, r2
        312028:	1afffffb 	bne	31201c <AllocateMoreMasters+0xb4>
        31202c:	e3310000 	teq	r1, #0	; 0x0
        312030:	15a10004 	strne	r0, [r1, #4]!
        312034:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        312038:	e5a40044 	str	r0, [r4, #68]!
        31203c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: AllocateMasterPointer
 * Address: 00312040
 */
void globals::AllocateMasterPointer() {
    /*
        312040:	e1a0c00d 	mov	ip, sp
        312044:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        312048:	e24cb004 	sub	fp, ip, #4	; 0x4
        31204c:	e1a04000 	mov	r4, r0
        312050:	e5900044 	ldr	r0, [r0, #68]
        312054:	e3300000 	teq	r0, #0	; 0x0
        312058:	1a000001 	bne	312064 <AllocateMasterPointer+0x24>
        31205c:	eb6196dc 	bl	1b77bd4 <$AllocateMoreMasters>
        312060:	e5940044 	ldr	r0, [r4, #68]
        312064:	e3300000 	teq	r0, #0	; 0x0
        312068:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        31206c:	e59410b4 	ldr	r1, [r4, #180]
        312070:	e2411001 	sub	r1, r1, #1	; 0x1
        312074:	e58410b4 	str	r1, [r4, #180]
        312078:	e5901004 	ldr	r1, [r0, #4]
        31207c:	e5a41044 	str	r1, [r4, #68]!
        312080:	e3a01000 	mov	r1, #0	; 0x0
        312084:	e5801004 	str	r1, [r0, #4]
        312088:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: ArrayRemoveCount__FRC6RefVarlT2
 * Address: 00313a60
 */
void globals::ArrayRemoveCount() {
    /*
        313a60:	e1a0c00d 	mov	ip, sp
        313a64:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        313a68:	e24cb004 	sub	fp, ip, #4	; 0x4
        313a6c:	e1a06000 	mov	r6, r0
        313a70:	e1a05001 	mov	r5, r1
        313a74:	e1a04002 	mov	r4, r2
        313a78:	e24dd004 	sub	sp, sp, #4	; 0x4
        313a7c:	e3a03000 	mov	r3, #0	; 0x0
        313a80:	e3a02000 	mov	r2, #0	; 0x0
        313a84:	e92d000c 	stmdb	sp!, {r2, r3}
        313a88:	e3a00002 	mov	r0, #2	; 0x2
        313a8c:	eb62b9ae 	bl	1bc214c <$AllocateRefHandle(long)>
        313a90:	e58d0008 	str	r0, [sp, #8]
        313a94:	e28d3008 	add	r3, sp, #8	; 0x8
        313a98:	e1a02004 	mov	r2, r4
        313a9c:	e1a01005 	mov	r1, r5
        313aa0:	e1a00006 	mov	r0, r6
        313aa4:	eb62b9a9 	bl	1bc2150 <$ArrayMunger__FRC6RefVarlT2T1N22>
        313aa8:	e5bd0008 	ldr	r0, [sp, #8]!
        313aac:	eb62bdc2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        313ab0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: ArrayRemove__FRC6RefVarT1
 * Address: 00313ab4
 */
void globals::ArrayRemove() {
    /*
        313ab4:	e1a0c00d 	mov	ip, sp
        313ab8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        313abc:	e24cb004 	sub	fp, ip, #4	; 0x4
        313ac0:	e1a04000 	mov	r4, r0
        313ac4:	e1a05001 	mov	r5, r1
        313ac8:	e3a08000 	mov	r8, #0	; 0x0
        313acc:	eb637fae 	bl	1bf398c <$IsArray(RefVar const &)>
        313ad0:	e3300000 	teq	r0, #0	; 0x0
        313ad4:	01a01004 	moveq	r1, r4
        313ad8:	059f0060 	ldreq	r0, [pc, #60]	; 313b40 <ArrayRemove__FRC6RefVarT1+0x8c>
        313adc:	0b63d25e 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        313ae0:	e5940000 	ldr	r0, [r4]
        313ae4:	e5900000 	ldr	r0, [r0]
        313ae8:	eb62c5ef 	bl	1bc52ac <$Length(long)>
        313aec:	e1a07000 	mov	r7, r0
        313af0:	e3a06000 	mov	r6, #0	; 0x0
        313af4:	e3500000 	cmp	r0, #0	; 0x0
        313af8:	da000014 	ble	313b50 <ArrayRemove__FRC6RefVarT1+0x9c>
        313afc:	e5950000 	ldr	r0, [r5]
        313b00:	e1a01006 	mov	r1, r6
        313b04:	e5909000 	ldr	r9, [r0]
        313b08:	e5940000 	ldr	r0, [r4]
        313b0c:	e5900000 	ldr	r0, [r0]
        313b10:	eb62c1cf 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        313b14:	e1a01000 	mov	r1, r0
        313b18:	e1a00009 	mov	r0, r9
        313b1c:	eb62c1c3 	bl	1bc4230 <$EQRef__FlT1>
        313b20:	e3300000 	teq	r0, #0	; 0x0
        313b24:	0a000006 	beq	313b44 <ArrayRemove__FRC6RefVarT1+0x90>
        313b28:	e1a01006 	mov	r1, r6
        313b2c:	e1a00004 	mov	r0, r4
        313b30:	e3a02001 	mov	r2, #1	; 0x1
        313b34:	eb63d245 	bl	1c08450 <$ArrayRemoveCount__FRC6RefVarlT2>
        313b38:	e3a08001 	mov	r8, #1	; 0x1
        313b3c:	ea000003 	b	313b50 <ArrayRemove__FRC6RefVarT1+0x9c>
        313b40:	ffff42ef 	swinv	0x00ff42ef
        313b44:	e2866001 	add	r6, r6, #1	; 0x1
        313b48:	e1560007 	cmp	r6, r7
        313b4c:	baffffea 	blt	313afc <ArrayRemove__FRC6RefVarT1+0x48>
        313b50:	e1a00008 	mov	r0, r8
        313b54:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: ArrayPosition__FRC6RefVarT1lT1
 * Address: 003143d4
 */
void globals::ArrayPosition() {
    /*
        3143d4:	e1a0c00d 	mov	ip, sp
        3143d8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        3143dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        3143e0:	e1a05000 	mov	r5, r0
        3143e4:	e1a07001 	mov	r7, r1
        3143e8:	e1a04002 	mov	r4, r2
        3143ec:	e1a06003 	mov	r6, r3
        3143f0:	e5930000 	ldr	r0, [r3]
        3143f4:	e5900000 	ldr	r0, [r0]
        3143f8:	e3300002 	teq	r0, #2	; 0x2
        3143fc:	13a0a000 	movne	sl, #0	; 0x0
        314400:	03a0a001 	moveq	sl, #1	; 0x1
        314404:	e5950000 	ldr	r0, [r5]
        314408:	e5900000 	ldr	r0, [r0]
        31440c:	eb62c3a6 	bl	1bc52ac <$Length(long)>
        314410:	e1b08000 	movs	r8, r0
        314414:	e3e09000 	mvn	r9, #0	; 0x0
        314418:	0a00003e 	beq	314518 <ArrayPosition__FRC6RefVarT1lT1+0x144>
        31441c:	e2480001 	sub	r0, r8, #1	; 0x1
        314420:	e3540000 	cmp	r4, #0	; 0x0
        314424:	b3a04000 	movlt	r4, #0	; 0x0
        314428:	ba000001 	blt	314434 <ArrayPosition__FRC6RefVarT1lT1+0x60>
        31442c:	e1540000 	cmp	r4, r0
        314430:	c1a04000 	movgt	r4, r0
        314434:	e33a0000 	teq	sl, #0	; 0x0
        314438:	0a000010 	beq	314480 <ArrayPosition__FRC6RefVarT1lT1+0xac>
        31443c:	e1540008 	cmp	r4, r8
        314440:	aa000031 	bge	31450c <ArrayPosition__FRC6RefVarT1lT1+0x138>
        314444:	e5970000 	ldr	r0, [r7]
        314448:	e5906000 	ldr	r6, [r0]
        31444c:	e5950000 	ldr	r0, [r5]
        314450:	e5900000 	ldr	r0, [r0]
        314454:	e1a01004 	mov	r1, r4
        314458:	eb62bf7d 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        31445c:	e1a01000 	mov	r1, r0
        314460:	e1a00006 	mov	r0, r6
        314464:	eb62bf71 	bl	1bc4230 <$EQRef__FlT1>
        314468:	e3300000 	teq	r0, #0	; 0x0
        31446c:	1a000026 	bne	31450c <ArrayPosition__FRC6RefVarT1lT1+0x138>
        314470:	e2844001 	add	r4, r4, #1	; 0x1
        314474:	e1540008 	cmp	r4, r8
        314478:	bafffff1 	blt	314444 <ArrayPosition__FRC6RefVarT1lT1+0x70>
        31447c:	ea000022 	b	31450c <ArrayPosition__FRC6RefVarT1lT1+0x138>
        314480:	e24dd004 	sub	sp, sp, #4	; 0x4
        314484:	e59f0094 	ldr	r0, [pc, #94]	; 314520 <ArrayPosition__FRC6RefVarT1lT1+0x14c>
        314488:	e3a01002 	mov	r1, #2	; 0x2
        31448c:	eb62b729 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        314490:	eb62b72d 	bl	1bc214c <$AllocateRefHandle(long)>
        314494:	e58d0000 	str	r0, [sp]
        314498:	e5900000 	ldr	r0, [r0]
        31449c:	e5971000 	ldr	r1, [r7]
        3144a0:	e5912000 	ldr	r2, [r1]
        3144a4:	e3a01000 	mov	r1, #0	; 0x0
        3144a8:	eb62c7aa 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        3144ac:	e1540008 	cmp	r4, r8
        3144b0:	aa000012 	bge	314500 <ArrayPosition__FRC6RefVarT1lT1+0x12c>
        3144b4:	e3a0a001 	mov	sl, #1	; 0x1
        3144b8:	e59d0000 	ldr	r0, [sp]
        3144bc:	e5907000 	ldr	r7, [r0]
        3144c0:	e5950000 	ldr	r0, [r5]
        3144c4:	e5900000 	ldr	r0, [r0]
        3144c8:	e1a01004 	mov	r1, r4
        3144cc:	eb62bf60 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        3144d0:	e1a02000 	mov	r2, r0
        3144d4:	e1a0100a 	mov	r1, sl
        3144d8:	e1a00007 	mov	r0, r7
        3144dc:	eb62c79d 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        3144e0:	e1a0100d 	mov	r1, sp
        3144e4:	e1a00006 	mov	r0, r6
        3144e8:	eb62bb38 	bl	1bc31d0 <$DoBlock__FRC6RefVarT1>
        3144ec:	e3300002 	teq	r0, #2	; 0x2
        3144f0:	1a000002 	bne	314500 <ArrayPosition__FRC6RefVarT1lT1+0x12c>
        3144f4:	e2844001 	add	r4, r4, #1	; 0x1
        3144f8:	e1540008 	cmp	r4, r8
        3144fc:	baffffed 	blt	3144b8 <ArrayPosition__FRC6RefVarT1lT1+0xe4>
        314500:	e59d0000 	ldr	r0, [sp]
        314504:	eb62bb2c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        314508:	e28dd004 	add	sp, sp, #4	; 0x4
        31450c:	e1340008 	teq	r4, r8
        314510:	11a00004 	movne	r0, r4
        314514:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        314518:	e1a00009 	mov	r0, r9
        31451c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        314520:	00681f10 	rsbeq	r1, r8, r0, lsl pc
    */
}

/**
 * Symbol: ArrayMunger__FRC6RefVarlT2T1N22
 * Address: 0031513c
 */
void globals::ArrayMunger() {
    /*
        31513c:	e1a0c00d 	mov	ip, sp
        315140:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        315144:	e24cb004 	sub	fp, ip, #4	; 0x4
        315148:	e1a04000 	mov	r4, r0
        31514c:	e1a06001 	mov	r6, r1
        315150:	e1a05002 	mov	r5, r2
        315154:	e1a07003 	mov	r7, r3
        315158:	e59b8008 	ldr	r8, [fp, #8]
        31515c:	e59b9004 	ldr	r9, [fp, #4]
        315160:	e24dd004 	sub	sp, sp, #4	; 0x4
        315164:	e5900000 	ldr	r0, [r0]
        315168:	e5900000 	ldr	r0, [r0]
        31516c:	eb62c05f 	bl	1bc52f0 <$ObjectFlags(long)>
        315170:	e2000003 	and	r0, r0, #3	; 0x3
        315174:	e3300001 	teq	r0, #1	; 0x1
        315178:	11a01004 	movne	r1, r4
        31517c:	159f01c8 	ldrne	r0, [pc, #1c8]	; 31534c <ArrayMunger__FRC6RefVarlT2T1N22+0x210>
        315180:	1b63ccb5 	blne	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        315184:	e5970000 	ldr	r0, [r7]
        315188:	e5900000 	ldr	r0, [r0]
        31518c:	e3300002 	teq	r0, #2	; 0x2
        315190:	0a000005 	beq	3151ac <ArrayMunger__FRC6RefVarlT2T1N22+0x70>
        315194:	eb62c055 	bl	1bc52f0 <$ObjectFlags(long)>
        315198:	e2000003 	and	r0, r0, #3	; 0x3
        31519c:	e3300001 	teq	r0, #1	; 0x1
        3151a0:	11a01007 	movne	r1, r7
        3151a4:	159f01a4 	ldrne	r0, [pc, #1a4]	; 315350 <ArrayMunger__FRC6RefVarlT2T1N22+0x214>
        3151a8:	1b63ccab 	blne	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        3151ac:	e5940000 	ldr	r0, [r4]
        3151b0:	e5900000 	ldr	r0, [r0]
        3151b4:	e5971000 	ldr	r1, [r7]
        3151b8:	e5911000 	ldr	r1, [r1]
        3151bc:	eb62bc1b 	bl	1bc4230 <$EQRef__FlT1>
        3151c0:	e3300000 	teq	r0, #0	; 0x0
        3151c4:	11a01004 	movne	r1, r4
        3151c8:	13a000b2 	movne	r0, #178	; 0xb2
        3151cc:	12400cbd 	subne	r0, r0, #48384	; 0xbd00
        3151d0:	1b5cbc17 	blne	1a44234 <$ThrowExFramesWithBadValue(long, RefVar const &)>
        3151d4:	e5940000 	ldr	r0, [r4]
        3151d8:	e5900000 	ldr	r0, [r0]
        3151dc:	eb62c043 	bl	1bc52f0 <$ObjectFlags(long)>
        3151e0:	e3100040 	tst	r0, #64	; 0x40
        3151e4:	11a01004 	movne	r1, r4
        3151e8:	13a000aa 	movne	r0, #170	; 0xaa
        3151ec:	12400cbd 	subne	r0, r0, #48384	; 0xbd00
        3151f0:	1b5cbc0f 	blne	1a44234 <$ThrowExFramesWithBadValue(long, RefVar const &)>
        3151f4:	e5940000 	ldr	r0, [r4]
        3151f8:	e5900000 	ldr	r0, [r0]
        3151fc:	eb62c02a 	bl	1bc52ac <$Length(long)>
        315200:	e1a0a000 	mov	sl, r0
        315204:	e3750001 	cmn	r5, #1	; 0x1
        315208:	004a5006 	subeq	r5, sl, r6
        31520c:	e3a00000 	mov	r0, #0	; 0x0
        315210:	e5971000 	ldr	r1, [r7]
        315214:	e5911000 	ldr	r1, [r1]
        315218:	e3310002 	teq	r1, #2	; 0x2
        31521c:	03a09000 	moveq	r9, #0	; 0x0
        315220:	03a08000 	moveq	r8, #0	; 0x0
        315224:	0a000003 	beq	315238 <ArrayMunger__FRC6RefVarlT2T1N22+0xfc>
        315228:	e1a00001 	mov	r0, r1
        31522c:	eb62c01e 	bl	1bc52ac <$Length(long)>
        315230:	e3780001 	cmn	r8, #1	; 0x1
        315234:	00408009 	subeq	r8, r0, r9
        315238:	e3560000 	cmp	r6, #0	; 0x0
        31523c:	b3a06000 	movlt	r6, #0	; 0x0
        315240:	ba000001 	blt	31524c <ArrayMunger__FRC6RefVarlT2T1N22+0x110>
        315244:	e156000a 	cmp	r6, sl
        315248:	c1a0600a 	movgt	r6, sl
        31524c:	e04a1006 	sub	r1, sl, r6
        315250:	e3550000 	cmp	r5, #0	; 0x0
        315254:	e58d1000 	str	r1, [sp]
        315258:	b3a05000 	movlt	r5, #0	; 0x0
        31525c:	ba000001 	blt	315268 <ArrayMunger__FRC6RefVarlT2T1N22+0x12c>
        315260:	e1550001 	cmp	r5, r1
        315264:	c1a05001 	movgt	r5, r1
        315268:	e3590000 	cmp	r9, #0	; 0x0
        31526c:	b3a09000 	movlt	r9, #0	; 0x0
        315270:	ba000001 	blt	31527c <ArrayMunger__FRC6RefVarlT2T1N22+0x140>
        315274:	e1590000 	cmp	r9, r0
        315278:	c1a09000 	movgt	r9, r0
        31527c:	e0400009 	sub	r0, r0, r9
        315280:	e3580000 	cmp	r8, #0	; 0x0
        315284:	b3a08000 	movlt	r8, #0	; 0x0
        315288:	ba000001 	blt	315294 <ArrayMunger__FRC6RefVarlT2T1N22+0x158>
        31528c:	e1580000 	cmp	r8, r0
        315290:	c1a08000 	movgt	r8, r0
        315294:	e0480005 	sub	r0, r8, r5
        315298:	e52d0004 	str	r0, [sp, -#4]!
        31529c:	e3500000 	cmp	r0, #0	; 0x0
        3152a0:	da000003 	ble	3152b4 <ArrayMunger__FRC6RefVarlT2T1N22+0x178>
        3152a4:	e59d0000 	ldr	r0, [sp]
        3152a8:	e08a1000 	add	r1, sl, r0
        3152ac:	e1a00004 	mov	r0, r4
        3152b0:	eb62c42d 	bl	1bc636c <$SetLength(RefVar const &, long)>
        3152b4:	e24dd004 	sub	sp, sp, #4	; 0x4
        3152b8:	e5940000 	ldr	r0, [r4]
        3152bc:	e5900000 	ldr	r0, [r0]
        3152c0:	eb62c42c 	bl	1bc6378 <$Slots(long)>
        3152c4:	e58d0000 	str	r0, [sp]
        3152c8:	e5970000 	ldr	r0, [r7]
        3152cc:	e5900000 	ldr	r0, [r0]
        3152d0:	e3300002 	teq	r0, #2	; 0x2
        3152d4:	03a00000 	moveq	r0, #0	; 0x0
        3152d8:	0a000000 	beq	3152e0 <ArrayMunger__FRC6RefVarlT2T1N22+0x1a4>
        3152dc:	eb62c425 	bl	1bc6378 <$Slots(long)>
        3152e0:	e1a07000 	mov	r7, r0
        3152e4:	e59d0004 	ldr	r0, [sp, #4]
        3152e8:	e3300000 	teq	r0, #0	; 0x0
        3152ec:	0a000007 	beq	315310 <ArrayMunger__FRC6RefVarlT2T1N22+0x1d4>
        3152f0:	e59d0000 	ldr	r0, [sp]
        3152f4:	e0800106 	add	r0, r0, r6, lsl #2
        3152f8:	e0801105 	add	r1, r0, r5, lsl #2
        3152fc:	e0800108 	add	r0, r0, r8, lsl #2
        315300:	e59d2008 	ldr	r2, [sp, #8]
        315304:	e0422005 	sub	r2, r2, r5
        315308:	e1a02102 	mov	r2, r2, lsl #2
        31530c:	eb627dd0 	bl	1bb4a54 <$memmove>
        315310:	e3380000 	teq	r8, #0	; 0x0
        315314:	0a000004 	beq	31532c <ArrayMunger__FRC6RefVarlT2T1N22+0x1f0>
        315318:	e1a02108 	mov	r2, r8, lsl #2
        31531c:	e0871109 	add	r1, r7, r9, lsl #2
        315320:	e59d0000 	ldr	r0, [sp]
        315324:	e0800106 	add	r0, r0, r6, lsl #2
        315328:	eb627dc8 	bl	1bb4a50 <$memcpy>
        31532c:	e59d0004 	ldr	r0, [sp, #4]
        315330:	e3500000 	cmp	r0, #0	; 0x0
        315334:	aa000003 	bge	315348 <ArrayMunger__FRC6RefVarlT2T1N22+0x20c>
        315338:	e59d0004 	ldr	r0, [sp, #4]
        31533c:	e08a1000 	add	r1, sl, r0
        315340:	e1a00004 	mov	r0, r4
        315344:	eb62c408 	bl	1bc636c <$SetLength(RefVar const &, long)>
        315348:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        31534c:	ffff42ef 	swinv	0x00ff42ef
        315350:	ffff42e3 	swinv	0x00ff42e3
    */
}

/**
 * Symbol: ArrayInsert__FRC6RefVarT1l
 * Address: 0031651c
 */
void globals::ArrayInsert() {
    /*
        31651c:	e1a0c00d 	mov	ip, sp
        316520:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        316524:	e24cb004 	sub	fp, ip, #4	; 0x4
        316528:	e1a05000 	mov	r5, r0
        31652c:	e1a06001 	mov	r6, r1
        316530:	e1a04002 	mov	r4, r2
        316534:	eb637514 	bl	1bf398c <$IsArray(RefVar const &)>
        316538:	e3300000 	teq	r0, #0	; 0x0
        31653c:	01a01005 	moveq	r1, r5
        316540:	059f0084 	ldreq	r0, [pc, #84]	; 3165cc <ArrayInsert__FRC6RefVarT1l+0xb0>
        316544:	0b63c7c4 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        316548:	e5950000 	ldr	r0, [r5]
        31654c:	e5900000 	ldr	r0, [r0]
        316550:	eb62bb55 	bl	1bc52ac <$Length(long)>
        316554:	e1a07000 	mov	r7, r0
        316558:	e24dd004 	sub	sp, sp, #4	; 0x4
        31655c:	e3540000 	cmp	r4, #0	; 0x0
        316560:	ba000001 	blt	31656c <ArrayInsert__FRC6RefVarT1l+0x50>
        316564:	e1540007 	cmp	r4, r7
        316568:	da000007 	ble	31658c <ArrayInsert__FRC6RefVarT1l+0x70>
        31656c:	e1a00004 	mov	r0, r4
        316570:	eb62aef5 	bl	1bc214c <$AllocateRefHandle(long)>
        316574:	e58d0000 	str	r0, [sp]
        316578:	e1a0100d 	mov	r1, sp
        31657c:	e59f004c 	ldr	r0, [pc, #4c]	; 3165d0 <ArrayInsert__FRC6RefVarT1l+0xb4>
        316580:	eb5cb72b 	bl	1a44234 <$ThrowExFramesWithBadValue(long, RefVar const &)>
        316584:	e59d0000 	ldr	r0, [sp]
        316588:	eb62b30b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31658c:	e2871001 	add	r1, r7, #1	; 0x1
        316590:	e1a00005 	mov	r0, r5
        316594:	eb62bf74 	bl	1bc636c <$SetLength(RefVar const &, long)>
        316598:	e5950000 	ldr	r0, [r5]
        31659c:	e5900000 	ldr	r0, [r0]
        3165a0:	eb62bf74 	bl	1bc6378 <$Slots(long)>
        3165a4:	e1a05000 	mov	r5, r0
        3165a8:	e0470004 	sub	r0, r7, r4
        3165ac:	e1a02100 	mov	r2, r0, lsl #2
        3165b0:	e0851104 	add	r1, r5, r4, lsl #2
        3165b4:	e2810004 	add	r0, r1, #4	; 0x4
        3165b8:	eb627925 	bl	1bb4a54 <$memmove>
        3165bc:	e5960000 	ldr	r0, [r6]
        3165c0:	e5900000 	ldr	r0, [r0]
        3165c4:	e7850104 	str	r0, [r5, r4, lsl #2]
        3165c8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        3165cc:	ffff42ef 	swinv	0x00ff42ef
        3165d0:	ffff43b3 	swinv	0x00ff43b3
    */
}

/**
 * Symbol: AllocateStdioMutex
 * Address: 0031932c
 */
void globals::AllocateStdioMutex() {
    /*
        31932c:	e1a0c00d 	mov	ip, sp
        319330:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        319334:	e24cb004 	sub	fp, ip, #4	; 0x4
        319338:	e3a0000c 	mov	r0, #12	; 0xc
        31933c:	eb62d4fd 	bl	1bce738 <$__nw(unsigned int)>
        319340:	e1b04000 	movs	r4, r0
        319344:	e3a05000 	mov	r5, #0	; 0x0
        319348:	0a000004 	beq	319360 <AllocateStdioMutex+0x34>
        31934c:	e5c45004 	strb	r5, [r4, #4]
        319350:	e5845000 	str	r5, [r4]
        319354:	e2841008 	add	r1, r4, #8	; 0x8
        319358:	e1a00004 	mov	r0, r4
        31935c:	eb62edb0 	bl	1bd4a24 <TUSemaphoreGroup::$GetRefCon(void **)>
        319360:	e3340000 	teq	r4, #0	; 0x0
        319364:	0a000006 	beq	319384 <AllocateStdioMutex+0x58>
        319368:	e1a00004 	mov	r0, r4
        31936c:	eb62f1d1 	bl	1bd5ab8 <TULockingSemaphore::$Init(void)>
        319370:	e3300000 	teq	r0, #0	; 0x0
        319374:	e1a00004 	mov	r0, r4
        319378:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        31937c:	e3a01001 	mov	r1, #1	; 0x1
        319380:	eb62d4e6 	bl	1bce720 <TULockingSemaphore::$__dt(void)>
        319384:	e1a00005 	mov	r0, r5
        319388:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: AcquireStdioMutex
 * Address: 0031938c
 */
void globals::AcquireStdioMutex() {
    /*
        31938c:	e3a01000 	mov	r1, #0	; 0x0
        319390:	ea62d4ef 	b	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
    */
}

/**
 * Symbol: AddSlot__FRC6RefVarT1
 * Address: 0031a3b4
 */
void globals::AddSlot() {
    /*
        31a3b4:	e1a0c00d 	mov	ip, sp
        31a3b8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        31a3bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        31a3c0:	e1a05000 	mov	r5, r0
        31a3c4:	e1a04001 	mov	r4, r1
        31a3c8:	e5900000 	ldr	r0, [r0]
        31a3cc:	e5900000 	ldr	r0, [r0]
        31a3d0:	eb62abb5 	bl	1bc52ac <$Length(long)>
        31a3d4:	e1a06000 	mov	r6, r0
        31a3d8:	e2802001 	add	r2, r0, #1	; 0x1
        31a3dc:	e1a01005 	mov	r1, r5
        31a3e0:	e59fa084 	ldr	sl, [pc, #84]	; 31a46c <AddSlot__FRC6RefVarT1+0xb8>
        31a3e4:	e59a0000 	ldr	r0, [sl]
        31a3e8:	eb5cfa1a 	bl	1a58c58 <TObjectHeap::$UnsafeSetArrayLength(RefVar const &, long)>
        31a3ec:	e24dd004 	sub	sp, sp, #4	; 0x4
        31a3f0:	e5950000 	ldr	r0, [r5]
        31a3f4:	e5900000 	ldr	r0, [r0]
        31a3f8:	eb62abbd 	bl	1bc52f4 <$ObjectPtr(long)>
        31a3fc:	e5900008 	ldr	r0, [r0, #8]
        31a400:	eb629f51 	bl	1bc214c <$AllocateRefHandle(long)>
        31a404:	e58d0000 	str	r0, [sp]
        31a408:	e5900000 	ldr	r0, [r0]
        31a40c:	eb62abb8 	bl	1bc52f4 <$ObjectPtr(long)>
        31a410:	e5901008 	ldr	r1, [r0, #8]
        31a414:	e3110008 	tst	r1, #8	; 0x8
        31a418:	05900000 	ldreq	r0, [r0]
        31a41c:	02000040 	andeq	r0, r0, #64	; 0x40
        31a420:	03300000 	teqeq	r0, #0	; 0x0
        31a424:	0a000011 	beq	31a470 <AddSlot__FRC6RefVarT1+0xbc>
        31a428:	e1a0000d 	mov	r0, sp
        31a42c:	e3a01001 	mov	r1, #1	; 0x1
        31a430:	eb5c92bb 	bl	1a3ef24 <$ExtendSharedMap(RefVar const &, int)>
        31a434:	e59d1000 	ldr	r1, [sp]
        31a438:	e5810000 	str	r0, [r1]
        31a43c:	e1a07000 	mov	r7, r0
        31a440:	e5950000 	ldr	r0, [r5]
        31a444:	e5900000 	ldr	r0, [r0]
        31a448:	eb62aba9 	bl	1bc52f4 <$ObjectPtr(long)>
        31a44c:	e5a07008 	str	r7, [r0, #8]!
        31a450:	e59d0000 	ldr	r0, [sp]
        31a454:	e5900000 	ldr	r0, [r0]
        31a458:	e5941000 	ldr	r1, [r4]
        31a45c:	e5912000 	ldr	r2, [r1]
        31a460:	e3a01001 	mov	r1, #1	; 0x1
        31a464:	eb62afbb 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        31a468:	ea00003d 	b	31a564 <AddSlot__FRC6RefVarT1+0x1b0>
        31a46c:	0c105548 	ldceq	5, cr5, [r0], -#288
        31a470:	e59d0000 	ldr	r0, [sp]
        31a474:	e5900000 	ldr	r0, [r0]
        31a478:	eb62ab8b 	bl	1bc52ac <$Length(long)>
        31a47c:	e1a08000 	mov	r8, r0
        31a480:	e2801001 	add	r1, r0, #1	; 0x1
        31a484:	e1a0000d 	mov	r0, sp
        31a488:	eb62afb7 	bl	1bc636c <$SetLength(RefVar const &, long)>
        31a48c:	e59d0000 	ldr	r0, [sp]
        31a490:	e5900000 	ldr	r0, [r0]
        31a494:	eb62ab96 	bl	1bc52f4 <$ObjectPtr(long)>
        31a498:	e1a09000 	mov	r9, r0
        31a49c:	e2487001 	sub	r7, r8, #1	; 0x1
        31a4a0:	e5900008 	ldr	r0, [r0, #8]
        31a4a4:	e3100004 	tst	r0, #4	; 0x4
        31a4a8:	0a00001d 	beq	31a524 <AddSlot__FRC6RefVarT1+0x170>
        31a4ac:	eb5c92a9 	bl	1a3ef58 <$FindOffsetCacheClear(void)>
        31a4b0:	e5950000 	ldr	r0, [r5]
        31a4b4:	e5900000 	ldr	r0, [r0]
        31a4b8:	eb5ced74 	bl	1a55a90 <$ICacheClearFrame(long)>
        31a4bc:	e5950000 	ldr	r0, [r5]
        31a4c0:	e5900000 	ldr	r0, [r0]
        31a4c4:	eb62ab8a 	bl	1bc52f4 <$ObjectPtr(long)>
        31a4c8:	e1a08000 	mov	r8, r0
        31a4cc:	ea000006 	b	31a4ec <AddSlot__FRC6RefVarT1+0x138>
        31a4d0:	e595000c 	ldr	r0, [r5, #12]
        31a4d4:	e5a50010 	str	r0, [r5, #16]!
        31a4d8:	e0880106 	add	r0, r8, r6, lsl #2
        31a4dc:	e5901008 	ldr	r1, [r0, #8]
        31a4e0:	e2477001 	sub	r7, r7, #1	; 0x1
        31a4e4:	e2466001 	sub	r6, r6, #1	; 0x1
        31a4e8:	e5a0100c 	str	r1, [r0, #12]!
        31a4ec:	e3570000 	cmp	r7, #0	; 0x0
        31a4f0:	da000006 	ble	31a510 <AddSlot__FRC6RefVarT1+0x15c>
        31a4f4:	e5940000 	ldr	r0, [r4]
        31a4f8:	e0895107 	add	r5, r9, r7, lsl #2
        31a4fc:	e5901000 	ldr	r1, [r0]
        31a500:	e595000c 	ldr	r0, [r5, #12]
        31a504:	eb62b7d1 	bl	1bc8450 <$SymbolCompare__FlT1>
        31a508:	e3500000 	cmp	r0, #0	; 0x0
        31a50c:	caffffef 	bgt	31a4d0 <AddSlot__FRC6RefVarT1+0x11c>
        31a510:	e5940000 	ldr	r0, [r4]
        31a514:	e5900000 	ldr	r0, [r0]
        31a518:	e0891107 	add	r1, r9, r7, lsl #2
        31a51c:	e5a10010 	str	r0, [r1, #16]!
        31a520:	ea00000f 	b	31a564 <AddSlot__FRC6RefVarT1+0x1b0>
        31a524:	e59d0000 	ldr	r0, [sp]
        31a528:	e5900000 	ldr	r0, [r0]
        31a52c:	e5941000 	ldr	r1, [r4]
        31a530:	e5912000 	ldr	r2, [r1]
        31a534:	e1a01008 	mov	r1, r8
        31a538:	eb62af86 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        31a53c:	e3580014 	cmp	r8, #20	; 0x14
        31a540:	da000007 	ble	31a564 <AddSlot__FRC6RefVarT1+0x1b0>
        31a544:	e1a01007 	mov	r1, r7
        31a548:	e1a00005 	mov	r0, r5
        31a54c:	eb5c8e59 	bl	1a3deb8 <$ConvertToSortedMap(RefVar const &, long)>
        31a550:	e0400007 	sub	r0, r0, r7
        31a554:	e0806006 	add	r6, r0, r6
        31a558:	e5950000 	ldr	r0, [r5]
        31a55c:	e5900000 	ldr	r0, [r0]
        31a560:	eb5ced4a 	bl	1a55a90 <$ICacheClearFrame(long)>
        31a564:	e5940000 	ldr	r0, [r4]
        31a568:	e5900000 	ldr	r0, [r0]
        31a56c:	eb62b7b8 	bl	1bc8454 <$SymbolHash(long)>
        31a570:	e1a01000 	mov	r1, r0
        31a574:	e5940000 	ldr	r0, [r4]
        31a578:	e5900000 	ldr	r0, [r0]
        31a57c:	eb5ced44 	bl	1a55a94 <$ICacheClearSymbol__FlT1>
        31a580:	e5940000 	ldr	r0, [r4]
        31a584:	e5900000 	ldr	r0, [r0]
        31a588:	e59f107c 	ldr	r1, [pc, #7c]	; 31a60c <AddSlot__FRC6RefVarT1+0x258>
        31a58c:	e5911000 	ldr	r1, [r1]
        31a590:	e5911000 	ldr	r1, [r1]
        31a594:	eb62a725 	bl	1bc4230 <$EQRef__FlT1>
        31a598:	e3300000 	teq	r0, #0	; 0x0
        31a59c:	0a000005 	beq	31a5b8 <AddSlot__FRC6RefVarT1+0x204>
        31a5a0:	e59d0000 	ldr	r0, [sp]
        31a5a4:	e5900000 	ldr	r0, [r0]
        31a5a8:	eb62ab51 	bl	1bc52f4 <$ObjectPtr(long)>
        31a5ac:	e5b01008 	ldr	r1, [r0, #8]!
        31a5b0:	e3811010 	orr	r1, r1, #16	; 0x10
        31a5b4:	e5801000 	str	r1, [r0]
        31a5b8:	e59d0000 	ldr	r0, [sp]
        31a5bc:	e5900000 	ldr	r0, [r0]
        31a5c0:	e5941000 	ldr	r1, [r4]
        31a5c4:	e5912000 	ldr	r2, [r1]
        31a5c8:	e592100b 	ldr	r1, [r2, #11]
        31a5cc:	e0813000 	add	r3, r1, r0
        31a5d0:	e3a0101f 	mov	r1, #31	; 0x1f
        31a5d4:	e0011323 	and	r1, r1, r3, lsr #6
        31a5d8:	e0813081 	add	r3, r1, r1, lsl #1
        31a5dc:	e59f102c 	ldr	r1, [pc, #2c]	; 31a610 <AddSlot__FRC6RefVarT1+0x25c>
        31a5e0:	e0811103 	add	r1, r1, r3, lsl #2
        31a5e4:	e5913000 	ldr	r3, [r1]
        31a5e8:	e1330000 	teq	r3, r0
        31a5ec:	05910004 	ldreq	r0, [r1, #4]
        31a5f0:	01300002 	teqeq	r0, r2
        31a5f4:	05816008 	streq	r6, [r1, #8]
        31a5f8:	05aa1014 	streq	r1, [sl, #20]!
        31a5fc:	e59d0000 	ldr	r0, [sp]
        31a600:	eb62a2ed 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31a604:	e1a00006 	mov	r0, r6
        31a608:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        31a60c:	00685390 	streqb	r5, [r8], -#48
        31a610:	0c107bf4 	ldceq	11, cr7, [r0], -#976
    */
}

/**
 * Symbol: AllocateBinary(RefVar const &, long)
 * Address: 0031be7c
 */
AllocateBinary(RefVar const &, long) {
    /*
        31be7c:	e1a02001 	mov	r2, r1
        31be80:	e1a01000 	mov	r1, r0
        31be84:	e59f0004 	ldr	r0, [pc, #4]	; 31be90 <AllocateBinary(RefVar const &, long)+0x14>
        31be88:	e5900000 	ldr	r0, [r0]
        31be8c:	ea5c83eb 	b	1a3ce40 <TObjectHeap::$AllocateBinary(RefVar const &, long)>
        31be90:	0c105548 	ldceq	5, cr5, [r0], -#288
    */
}

/**
 * Symbol: AllocateArray(RefVar const &, long)
 * Address: 0031be94
 */
AllocateArray(RefVar const &, long) {
    /*
        31be94:	e1a02001 	mov	r2, r1
        31be98:	e1a01000 	mov	r1, r0
        31be9c:	e59f0004 	ldr	r0, [pc, #4]	; 31bea8 <AllocateArray(RefVar const &, long)+0x14>
        31bea0:	e5900000 	ldr	r0, [r0]
        31bea4:	ea5c83e4 	b	1a3ce3c <TObjectHeap::$AllocateArray(RefVar const &, long)>
        31bea8:	0c105548 	ldceq	5, cr5, [r0], -#288
    */
}

/**
 * Symbol: AllocateFrame(void)
 * Address: 0031beac
 */
AllocateFrame(void) {
    /*
        31beac:	e59f0004 	ldr	r0, [pc, #4]	; 31beb8 <AllocateFrame(void)+0xc>
        31beb0:	e5900000 	ldr	r0, [r0]
        31beb4:	ea5c83e3 	b	1a3ce48 <TObjectHeap::$AllocateFrame(void)>
        31beb8:	0c105548 	ldceq	5, cr5, [r0], -#288
    */
}

/**
 * Symbol: AllocateFrameWithMap(RefVar const &)
 * Address: 0031bebc
 */
AllocateFrameWithMap(RefVar const &) {
    /*
        31bebc:	e1a01000 	mov	r1, r0
        31bec0:	e59f0004 	ldr	r0, [pc, #4]	; 31becc <AllocateFrameWithMap(RefVar const &)+0x10>
        31bec4:	e5900000 	ldr	r0, [r0]
        31bec8:	ea5c83df 	b	1a3ce4c <TObjectHeap::$AllocateFrameWithMap(RefVar const &)>
        31becc:	0c105548 	ldceq	5, cr5, [r0], -#288
    */
}

/**
 * Symbol: AddArraySlot__FRC6RefVarT1
 * Address: 0031bee8
 */
void globals::AddArraySlot() {
    /*
        31bee8:	e1a0c00d 	mov	ip, sp
        31beec:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        31bef0:	e24cb004 	sub	fp, ip, #4	; 0x4
        31bef4:	e1a04000 	mov	r4, r0
        31bef8:	e1a05001 	mov	r5, r1
        31befc:	eb635ea2 	bl	1bf398c <$IsArray(RefVar const &)>
        31bf00:	e3300000 	teq	r0, #0	; 0x0
        31bf04:	01a01004 	moveq	r1, r4
        31bf08:	059f0060 	ldreq	r0, [pc, #60]	; 31bf70 <AddArraySlot__FRC6RefVarT1+0x88>
        31bf0c:	0b63b152 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        31bf10:	e5940000 	ldr	r0, [r4]
        31bf14:	e5900000 	ldr	r0, [r0]
        31bf18:	eb62a4f4 	bl	1bc52f0 <$ObjectFlags(long)>
        31bf1c:	e3100040 	tst	r0, #64	; 0x40
        31bf20:	11a01004 	movne	r1, r4
        31bf24:	13a000aa 	movne	r0, #170	; 0xaa
        31bf28:	12400cbd 	subne	r0, r0, #48384	; 0xbd00
        31bf2c:	1b5ca0c0 	blne	1a44234 <$ThrowExFramesWithBadValue(long, RefVar const &)>
        31bf30:	e5940000 	ldr	r0, [r4]
        31bf34:	e5900000 	ldr	r0, [r0]
        31bf38:	eb62a4db 	bl	1bc52ac <$Length(long)>
        31bf3c:	e1a06000 	mov	r6, r0
        31bf40:	e2802001 	add	r2, r0, #1	; 0x1
        31bf44:	e1a01004 	mov	r1, r4
        31bf48:	e59f0024 	ldr	r0, [pc, #24]	; 31bf74 <AddArraySlot__FRC6RefVarT1+0x8c>
        31bf4c:	e5900000 	ldr	r0, [r0]
        31bf50:	eb5cf340 	bl	1a58c58 <TObjectHeap::$UnsafeSetArrayLength(RefVar const &, long)>
        31bf54:	e5940000 	ldr	r0, [r4]
        31bf58:	e5900000 	ldr	r0, [r0]
        31bf5c:	e5951000 	ldr	r1, [r5]
        31bf60:	e5912000 	ldr	r2, [r1]
        31bf64:	e1a01006 	mov	r1, r6
        31bf68:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        31bf6c:	ea62a8f9 	b	1bc6358 <$SetArraySlotRef__FlN21>
        31bf70:	ffff42ef 	swinv	0x00ff42ef
        31bf74:	0c105548 	ldceq	5, cr5, [r0], -#288
    */
}

/**
 * Symbol: ASCIIString(RefVar const &)
 * Address: 0031c2e4
 */
ASCIIString(RefVar const &) {
    /*
        31c2e4:	e1a0c00d 	mov	ip, sp
        31c2e8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        31c2ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        31c2f0:	e1a04000 	mov	r4, r0
        31c2f4:	e5900000 	ldr	r0, [r0]
        31c2f8:	e5900000 	ldr	r0, [r0]
        31c2fc:	eb62a3ea 	bl	1bc52ac <$Length(long)>
        31c300:	e0801fa0 	add	r1, r0, r0, lsr #31
        31c304:	e1a010c1 	mov	r1, r1, asr #1
        31c308:	e59f0044 	ldr	r0, [pc, #44]	; 31c354 <ASCIIString(RefVar const &)+0x70>
        31c30c:	eb62978a 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
        31c310:	eb62978d 	bl	1bc214c <$AllocateRefHandle(long)>
        31c314:	e1a06000 	mov	r6, r0
        31c318:	e5900000 	ldr	r0, [r0]
        31c31c:	eb62978e 	bl	1bc215c <$BinaryData(long)>
        31c320:	e1a05000 	mov	r5, r0
        31c324:	e5940000 	ldr	r0, [r4]
        31c328:	e5900000 	ldr	r0, [r0]
        31c32c:	eb62978a 	bl	1bc215c <$BinaryData(long)>
        31c330:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
        31c334:	e3a02001 	mov	r2, #1	; 0x1
        31c338:	e1a01005 	mov	r1, r5
        31c33c:	eb632c0f 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
        31c340:	e5964000 	ldr	r4, [r6]
        31c344:	e1a00006 	mov	r0, r6
        31c348:	eb629b9b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31c34c:	e1a00004 	mov	r0, r4
        31c350:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        31c354:	00681f20 	rsbeq	r1, r8, r0, lsr #30
    */
}

/**
 * Symbol: AllocateRefHandle(long)
 * Address: 0031d26c
 */
AllocateRefHandle(long) {
    /*
        31d26c:	e59f3038 	ldr	r3, [pc, #38]	; 31d2ac <AllocateRefHandle(long)+0x40>
        31d270:	e5932000 	ldr	r2, [r3]
        31d274:	e282c014 	add	ip, r2, #20	; 0x14
        31d278:	e89c1002 	ldmia	ip, {r1, ip}
        31d27c:	e081118c 	add	r1, r1, ip, lsl #3
        31d280:	e5b1c008 	ldr	ip, [r1, #8]!
        31d284:	e1a0c14c 	mov	ip, ip, asr #2
        31d288:	e5a2c018 	str	ip, [r2, #24]!
        31d28c:	e5810000 	str	r0, [r1]
        31d290:	e5b30018 	ldr	r0, [r3, #24]!
        31d294:	e1a00100 	mov	r0, r0, lsl #2
        31d298:	e37c0001 	cmn	ip, #1	; 0x1
        31d29c:	e5810004 	str	r0, [r1, #4]
        31d2a0:	e1a00001 	mov	r0, r1
        31d2a4:	0a5cd9c0 	beq	1a539ac <$ExpandObjectTable(RefHandle *)>
        31d2a8:	e1a0f00e 	mov	pc, lr
        31d2ac:	0c105548 	ldceq	5, cr5, [r0], -#288
    */
}

/**
 * Symbol: AllocateMapWithTags__FRC6RefVarT1
 * Address: 0031d900
 */
void globals::AllocateMapWithTags() {
    /*
        31d900:	e1a0c00d 	mov	ip, sp
        31d904:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        31d908:	e24cb004 	sub	fp, ip, #4	; 0x4
        31d90c:	e1a05000 	mov	r5, r0
        31d910:	e1a04001 	mov	r4, r1
        31d914:	e5910000 	ldr	r0, [r1]
        31d918:	e5900000 	ldr	r0, [r0]
        31d91c:	eb629e62 	bl	1bc52ac <$Length(long)>
        31d920:	e1a02000 	mov	r2, r0
        31d924:	e1a01005 	mov	r1, r5
        31d928:	e59f0098 	ldr	r0, [pc, #98]	; 31d9c8 <AllocateMapWithTags__FRC6RefVarT1+0xc8>
        31d92c:	e5900000 	ldr	r0, [r0]
        31d930:	eb5c7d46 	bl	1a3ce50 <TObjectHeap::$AllocateMap(RefVar const &, long)>
        31d934:	e1a09000 	mov	r9, r0
        31d938:	e2405001 	sub	r5, r0, #1	; 0x1
        31d93c:	e5940000 	ldr	r0, [r4]
        31d940:	e5900000 	ldr	r0, [r0]
        31d944:	eb629e6a 	bl	1bc52f4 <$ObjectPtr(long)>
        31d948:	e1a08000 	mov	r8, r0
        31d94c:	e3a00008 	mov	r0, #8	; 0x8
        31d950:	e5850008 	str	r0, [r5, #8]
        31d954:	e5940000 	ldr	r0, [r4]
        31d958:	e5900000 	ldr	r0, [r0]
        31d95c:	eb629e52 	bl	1bc52ac <$Length(long)>
        31d960:	e1a07000 	mov	r7, r0
        31d964:	e3a06000 	mov	r6, #0	; 0x0
        31d968:	e3a04000 	mov	r4, #0	; 0x0
        31d96c:	e3500000 	cmp	r0, #0	; 0x0
        31d970:	da000012 	ble	31d9c0 <AllocateMapWithTags__FRC6RefVarT1+0xc0>
        31d974:	e59fa050 	ldr	sl, [pc, #50]	; 31d9cc <AllocateMapWithTags__FRC6RefVarT1+0xcc>
        31d978:	e0880104 	add	r0, r8, r4, lsl #2
        31d97c:	e590000c 	ldr	r0, [r0, #12]
        31d980:	e0851104 	add	r1, r5, r4, lsl #2
        31d984:	e3360000 	teq	r6, #0	; 0x0
        31d988:	e5a10010 	str	r0, [r1, #16]!
        31d98c:	1a000008 	bne	31d9b4 <AllocateMapWithTags__FRC6RefVarT1+0xb4>
        31d990:	e59a1000 	ldr	r1, [sl]
        31d994:	e5911000 	ldr	r1, [r1]
        31d998:	eb62aaac 	bl	1bc8450 <$SymbolCompare__FlT1>
        31d99c:	e3300000 	teq	r0, #0	; 0x0
        31d9a0:	1a000003 	bne	31d9b4 <AllocateMapWithTags__FRC6RefVarT1+0xb4>
        31d9a4:	e5950008 	ldr	r0, [r5, #8]
        31d9a8:	e3800010 	orr	r0, r0, #16	; 0x10
        31d9ac:	e3a06001 	mov	r6, #1	; 0x1
        31d9b0:	e5850008 	str	r0, [r5, #8]
        31d9b4:	e2844001 	add	r4, r4, #1	; 0x1
        31d9b8:	e1540007 	cmp	r4, r7
        31d9bc:	baffffed 	blt	31d978 <AllocateMapWithTags__FRC6RefVarT1+0x78>
        31d9c0:	e1a00009 	mov	r0, r9
        31d9c4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        31d9c8:	0c105548 	ldceq	5, cr5, [r0], -#288
        31d9cc:	00685390 	streqb	r5, [r8], -#48
    */
}

/**
 * Symbol: AllocatePackage__FP5CPipeRC6RefVarT2Uli
 * Address: 003218f4
 */
void globals::AllocatePackage() {
    /*
        3218f4:	e1a0c00d 	mov	ip, sp
        3218f8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        3218fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        321900:	e1a07000 	mov	r7, r0
        321904:	e1a04001 	mov	r4, r1
        321908:	e1a06002 	mov	r6, r2
        32190c:	e1a05003 	mov	r5, r3
        321910:	e59b9004 	ldr	r9, [fp, #4]
        321914:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        321918:	e3a00002 	mov	r0, #2	; 0x2
        32191c:	eb62820a 	bl	1bc214c <$AllocateRefHandle(long)>
        321920:	e3a08000 	mov	r8, #0	; 0x0
        321924:	e58d000c 	str	r0, [sp, #12]
        321928:	e5a08004 	str	r8, [r0, #4]!
        32192c:	e3a00002 	mov	r0, #2	; 0x2
        321930:	eb628205 	bl	1bc214c <$AllocateRefHandle(long)>
        321934:	e58d0010 	str	r0, [sp, #16]
        321938:	e5a08004 	str	r8, [r0, #4]!
        32193c:	e59f0114 	ldr	r0, [pc, #114]	; 321a58 <AllocatePackage__FP5CPipeRC6RefVarT2Uli+0x164>
        321940:	e58d0008 	str	r0, [sp, #8]
        321944:	e5960000 	ldr	r0, [r6]
        321948:	e5901000 	ldr	r1, [r0]
        32194c:	e59d000c 	ldr	r0, [sp, #12]
        321950:	e5801000 	str	r1, [r0]
        321954:	e3a00002 	mov	r0, #2	; 0x2
        321958:	e58d5014 	str	r5, [sp, #20]
        32195c:	e59d1010 	ldr	r1, [sp, #16]
        321960:	e5810000 	str	r0, [r1]
        321964:	eb6281f8 	bl	1bc214c <$AllocateRefHandle(long)>
        321968:	e58d0004 	str	r0, [sp, #4]
        32196c:	e3a00002 	mov	r0, #2	; 0x2
        321970:	eb6281f5 	bl	1bc214c <$AllocateRefHandle(long)>
        321974:	e58d0000 	str	r0, [sp]
        321978:	e5940000 	ldr	r0, [r4]
        32197c:	e5900000 	ldr	r0, [r0]
        321980:	e3300002 	teq	r0, #2	; 0x2
        321984:	059f00d0 	ldreq	r0, [pc, #d0]	; 321a5c <AllocatePackage__FP5CPipeRC6RefVarT2Uli+0x168>
        321988:	0b6379a3 	bleq	1c0001c <$NSCallGlobalFn(RefVar const &)>
        32198c:	e59d1000 	ldr	r1, [sp]
        321990:	e5810000 	str	r0, [r1]
        321994:	e5940000 	ldr	r0, [r4]
        321998:	e5900000 	ldr	r0, [r0]
        32199c:	e59f10bc 	ldr	r1, [pc, #bc]	; 321a60 <AllocatePackage__FP5CPipeRC6RefVarT2Uli+0x16c>
        3219a0:	e5911000 	ldr	r1, [r1]
        3219a4:	e5911000 	ldr	r1, [r1]
        3219a8:	eb628a2c 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        3219ac:	e1a04000 	mov	r4, r0
        3219b0:	eb628a25 	bl	1bc424c <$GC(void)>
        3219b4:	e28d3018 	add	r3, sp, #24	; 0x18
        3219b8:	e28d2008 	add	r2, sp, #8	; 0x8
        3219bc:	e1a00007 	mov	r0, r7
        3219c0:	e594107c 	ldr	r1, [r4, #124]
        3219c4:	eb5cd882 	bl	1a57bd4 <$StorePackage(CPipe *, TStore *, TLOCallback *, unsigned long *)>
        3219c8:	e24dd004 	sub	sp, sp, #4	; 0x4
        3219cc:	e3300000 	teq	r0, #0	; 0x0
        3219d0:	0a000004 	beq	3219e8 <AllocatePackage__FP5CPipeRC6RefVarT2Uli+0xf4>
        3219d4:	e1a01000 	mov	r1, r0
        3219d8:	e59f0084 	ldr	r0, [pc, #84]	; 321a64 <AllocatePackage__FP5CPipeRC6RefVarT2Uli+0x170>
        3219dc:	e5900000 	ldr	r0, [r0]
        3219e0:	e3a02000 	mov	r2, #0	; 0x0
        3219e4:	eb6305ec 	bl	1be319c <$Throw>
        3219e8:	e5b4107c 	ldr	r1, [r4, #124]!
        3219ec:	e59d001c 	ldr	r0, [sp, #28]
        3219f0:	eb5ce0a5 	bl	1a59c8c <$WrapPackage(unsigned long, TStore *)>
        3219f4:	e59d1008 	ldr	r1, [sp, #8]
        3219f8:	e3390000 	teq	r9, #0	; 0x0
        3219fc:	e5810000 	str	r0, [r1]
        321a00:	03a00002 	moveq	r0, #2	; 0x2
        321a04:	13a0001a 	movne	r0, #26	; 0x1a
        321a08:	eb6281cf 	bl	1bc214c <$AllocateRefHandle(long)>
        321a0c:	e58d0000 	str	r0, [sp]
        321a10:	e1a0300d 	mov	r3, sp
        321a14:	e28d2004 	add	r2, sp, #4	; 0x4
        321a18:	e28d1008 	add	r1, sp, #8	; 0x8
        321a1c:	e59f0044 	ldr	r0, [pc, #44]	; 321a68 <AllocatePackage__FP5CPipeRC6RefVarT2Uli+0x174>
        321a20:	eb637980 	bl	1c00028 <$NSCallGlobalFn__FRC6RefVarN31>
        321a24:	e1a04000 	mov	r4, r0
        321a28:	e59d0000 	ldr	r0, [sp]
        321a2c:	eb6285e2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        321a30:	e59d0004 	ldr	r0, [sp, #4]
        321a34:	eb6285e0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        321a38:	e59d0008 	ldr	r0, [sp, #8]
        321a3c:	eb6285de 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        321a40:	e59d0014 	ldr	r0, [sp, #20]
        321a44:	eb6285dc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        321a48:	e59d0010 	ldr	r0, [sp, #16]
        321a4c:	eb6285da 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        321a50:	e1a00004 	mov	r0, r4
        321a54:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        321a58:	0001b1f0 	streqd	fp, [r1], -r0
        321a5c:	00682f90 	streqb	r2, [r8], -#240
        321a60:	00684868 	rsbeq	r4, r8, r8, ror #16
        321a64:	00371308 	eoreqs	r1, r7, r8, lsl #6
        321a68:	00684238 	rsbeq	r4, r8, r8, lsr r2
    */
}

/**
 * Symbol: AllocatePackage__FP5CPipeRC6RefVarT2
 * Address: 00321a6c
 */
void globals::AllocatePackage() {
    /*
        321a6c:	e1a0c00d 	mov	ip, sp
        321a70:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        321a74:	e24cb004 	sub	fp, ip, #4	; 0x4
        321a78:	e1a06000 	mov	r6, r0
        321a7c:	e1a05001 	mov	r5, r1
        321a80:	e1a04002 	mov	r4, r2
        321a84:	e24dd004 	sub	sp, sp, #4	; 0x4
        321a88:	e3a00002 	mov	r0, #2	; 0x2
        321a8c:	eb6281ae 	bl	1bc214c <$AllocateRefHandle(long)>
        321a90:	e3a08a01 	mov	r8, #4096	; 0x1000
        321a94:	e3a07001 	mov	r7, #1	; 0x1
        321a98:	e58d0000 	str	r0, [sp]
        321a9c:	e5940000 	ldr	r0, [r4]
        321aa0:	e5900000 	ldr	r0, [r0]
        321aa4:	e3300002 	teq	r0, #2	; 0x2
        321aa8:	0a000020 	beq	321b30 <AllocatePackage__FP5CPipeRC6RefVarT2+0xc4>
        321aac:	e59f10ac 	ldr	r1, [pc, #ac]	; 321b60 <AllocatePackage__FP5CPipeRC6RefVarT2+0xf4>
        321ab0:	e5911000 	ldr	r1, [r1]
        321ab4:	e5911000 	ldr	r1, [r1]
        321ab8:	eb6289e8 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        321abc:	e59d1000 	ldr	r1, [sp]
        321ac0:	e5810000 	str	r0, [r1]
        321ac4:	e5940000 	ldr	r0, [r4]
        321ac8:	e5900000 	ldr	r0, [r0]
        321acc:	e59f1090 	ldr	r1, [pc, #90]	; 321b64 <AllocatePackage__FP5CPipeRC6RefVarT2+0xf8>
        321ad0:	e5911000 	ldr	r1, [r1]
        321ad4:	e5911000 	ldr	r1, [r1]
        321ad8:	eb6289e0 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        321adc:	e3300002 	teq	r0, #2	; 0x2
        321ae0:	13a07000 	movne	r7, #0	; 0x0
        321ae4:	03a07001 	moveq	r7, #1	; 0x1
        321ae8:	e5940000 	ldr	r0, [r4]
        321aec:	e5900000 	ldr	r0, [r0]
        321af0:	e59f1070 	ldr	r1, [pc, #70]	; 321b68 <AllocatePackage__FP5CPipeRC6RefVarT2+0xfc>
        321af4:	e5911000 	ldr	r1, [r1]
        321af8:	e5911000 	ldr	r1, [r1]
        321afc:	eb6289d7 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        321b00:	eb628191 	bl	1bc214c <$AllocateRefHandle(long)>
        321b04:	e1a04000 	mov	r4, r0
        321b08:	e5900000 	ldr	r0, [r0]
        321b0c:	e3300002 	teq	r0, #2	; 0x2
        321b10:	0a000004 	beq	321b28 <AllocatePackage__FP5CPipeRC6RefVarT2+0xbc>
        321b14:	e3100003 	tst	r0, #3	; 0x3
        321b18:	01a00140 	moveq	r0, r0, asr #2
        321b1c:	0a000000 	beq	321b24 <AllocatePackage__FP5CPipeRC6RefVarT2+0xb8>
        321b20:	eb62817d 	bl	1bc211c <$_RINTError(long)>
        321b24:	e1a08000 	mov	r8, r0
        321b28:	e1a00004 	mov	r0, r4
        321b2c:	eb6285a2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        321b30:	e1a03007 	mov	r3, r7
        321b34:	e92d0008 	stmdb	sp!, {r3}
        321b38:	e1a03008 	mov	r3, r8
        321b3c:	e28d2004 	add	r2, sp, #4	; 0x4
        321b40:	e1a01005 	mov	r1, r5
        321b44:	e1a00006 	mov	r0, r6
        321b48:	eb5cb713 	bl	1a4f79c <$AllocatePackage__FP5CPipeRC6RefVarT2Uli>
        321b4c:	e1a04000 	mov	r4, r0
        321b50:	e5bd0004 	ldr	r0, [sp, #4]!
        321b54:	eb628598 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        321b58:	e1a00004 	mov	r0, r4
        321b5c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        321b60:	00682288 	rsbeq	r2, r8, r8, lsl #5
        321b64:	00682a48 	rsbeq	r2, r8, r8, asr #20
        321b68:	00682298 	streqb	r2, [r8], -#40
    */
}

/**
 * Symbol: ApprHorStroke(low_type *)
 * Address: 0032c8a4
 */
ApprHorStroke(low_type *) {
    /*
        32c8a4:	e1a0c00d 	mov	ip, sp
        32c8a8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        32c8ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        32c8b0:	e5902060 	ldr	r2, [r0, #96]
        32c8b4:	e5921008 	ldr	r1, [r2, #8]
        32c8b8:	e5922002 	ldr	r2, [r2, #2]
        32c8bc:	e1a02842 	mov	r2, r2, asr #16
        32c8c0:	e082c082 	add	ip, r2, r2, lsl #1
        32c8c4:	e08c2182 	add	r2, ip, r2, lsl #3
        32c8c8:	e0814102 	add	r4, r1, r2, lsl #2
        32c8cc:	e2800030 	add	r0, r0, #48	; 0x30
        32c8d0:	e9b00180 	ldmib	r0!, {r7, r8}
        32c8d4:	e3e00001 	mvn	r0, #1	; 0x1
        32c8d8:	e3a09018 	mov	r9, #24	; 0x18
        32c8dc:	e5941000 	ldr	r1, [r4]
        32c8e0:	e1a01841 	mov	r1, r1, asr #16
        32c8e4:	e3310010 	teq	r1, #16	; 0x10
        32c8e8:	03a06001 	moveq	r6, #1	; 0x1
        32c8ec:	0a000003 	beq	32c900 <ApprHorStroke(low_type *)+0x5c>
        32c8f0:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        32c8f4:	e2860001 	add	r0, r6, #1	; 0x1
        32c8f8:	e1a06800 	mov	r6, r0, lsl #16
        32c8fc:	e1a06846 	mov	r6, r6, asr #16
        32c900:	e0865086 	add	r5, r6, r6, lsl #1
        32c904:	e0855186 	add	r5, r5, r6, lsl #3
        32c908:	e0840105 	add	r0, r4, r5, lsl #2
        32c90c:	e5901004 	ldr	r1, [r0, #4]
        32c910:	e1a01841 	mov	r1, r1, asr #16
        32c914:	e5940002 	ldr	r0, [r4, #2]
        32c918:	e1a00840 	mov	r0, r0, asr #16
        32c91c:	e1a03008 	mov	r3, r8
        32c920:	e1a02007 	mov	r2, r7
        32c924:	eb5fc55f 	bl	1b1dea8 <$BoxSmallOK__FsT1PsT3>
        32c928:	e3300000 	teq	r0, #0	; 0x0
        32c92c:	17940105 	ldrne	r0, [r4, r5, lsl #2]
        32c930:	11a00840 	movne	r0, r0, asr #16
        32c934:	13300020 	teqne	r0, #32	; 0x20
        32c938:	1affffed 	bne	32c8f4 <ApprHorStroke(low_type *)+0x50>
        32c93c:	e0860086 	add	r0, r6, r6, lsl #1
        32c940:	e0800186 	add	r0, r0, r6, lsl #3
        32c944:	e0844100 	add	r4, r4, r0, lsl #2
        32c948:	e284502c 	add	r5, r4, #44	; 0x2c
        32c94c:	e5940000 	ldr	r0, [r4]
        32c950:	e1a00840 	mov	r0, r0, asr #16
        32c954:	e3300020 	teq	r0, #32	; 0x20
        32c958:	0a000016 	beq	32c9b8 <ApprHorStroke(low_type *)+0x114>
        32c95c:	e5940010 	ldr	r0, [r4, #16]
        32c960:	e1590840 	cmp	r9, r0, asr #16
        32c964:	aa000013 	bge	32c9b8 <ApprHorStroke(low_type *)+0x114>
        32c968:	e5940024 	ldr	r0, [r4, #36]
        32c96c:	e1a00840 	mov	r0, r0, asr #16
        32c970:	e3500041 	cmp	r0, #65	; 0x41
        32c974:	aa00000f 	bge	32c9b8 <ApprHorStroke(low_type *)+0x114>
        32c978:	e5940002 	ldr	r0, [r4, #2]
        32c97c:	e1a00840 	mov	r0, r0, asr #16
        32c980:	e7971080 	ldr	r1, [r7, r0, lsl #1]
        32c984:	e1a01841 	mov	r1, r1, asr #16
        32c988:	e5940004 	ldr	r0, [r4, #4]
        32c98c:	e1a00840 	mov	r0, r0, asr #16
        32c990:	e7970080 	ldr	r0, [r7, r0, lsl #1]
        32c994:	e1a00840 	mov	r0, r0, asr #16
        32c998:	e1510000 	cmp	r1, r0
        32c99c:	aa000005 	bge	32c9b8 <ApprHorStroke(low_type *)+0x114>
        32c9a0:	e5940012 	ldr	r0, [r4, #18]
        32c9a4:	e1a00840 	mov	r0, r0, asr #16
        32c9a8:	eb5d0b85 	bl	1a6f7c4 <$HWRAbs(int)>
        32c9ac:	e3500064 	cmp	r0, #100	; 0x64
        32c9b0:	b3a08001 	movlt	r8, #1	; 0x1
        32c9b4:	ba000000 	blt	32c9bc <ApprHorStroke(low_type *)+0x118>
        32c9b8:	e3a08000 	mov	r8, #0	; 0x0
        32c9bc:	e5940000 	ldr	r0, [r4]
        32c9c0:	e1a00840 	mov	r0, r0, asr #16
        32c9c4:	e3300020 	teq	r0, #32	; 0x20
        32c9c8:	15950000 	ldrne	r0, [r5]
        32c9cc:	11a00840 	movne	r0, r0, asr #16
        32c9d0:	13300020 	teqne	r0, #32	; 0x20
        32c9d4:	0a000016 	beq	32ca34 <ApprHorStroke(low_type *)+0x190>
        32c9d8:	e5950010 	ldr	r0, [r5, #16]
        32c9dc:	e1590840 	cmp	r9, r0, asr #16
        32c9e0:	aa000013 	bge	32ca34 <ApprHorStroke(low_type *)+0x190>
        32c9e4:	e5950024 	ldr	r0, [r5, #36]
        32c9e8:	e1a00840 	mov	r0, r0, asr #16
        32c9ec:	e3500014 	cmp	r0, #20	; 0x14
        32c9f0:	aa00000f 	bge	32ca34 <ApprHorStroke(low_type *)+0x190>
        32c9f4:	e5950002 	ldr	r0, [r5, #2]
        32c9f8:	e1a00840 	mov	r0, r0, asr #16
        32c9fc:	e7971080 	ldr	r1, [r7, r0, lsl #1]
        32ca00:	e1a01841 	mov	r1, r1, asr #16
        32ca04:	e5950004 	ldr	r0, [r5, #4]
        32ca08:	e1a00840 	mov	r0, r0, asr #16
        32ca0c:	e7970080 	ldr	r0, [r7, r0, lsl #1]
        32ca10:	e1a00840 	mov	r0, r0, asr #16
        32ca14:	e1510000 	cmp	r1, r0
        32ca18:	aa000005 	bge	32ca34 <ApprHorStroke(low_type *)+0x190>
        32ca1c:	e5950012 	ldr	r0, [r5, #18]
        32ca20:	e1a00840 	mov	r0, r0, asr #16
        32ca24:	eb5d0b66 	bl	1a6f7c4 <$HWRAbs(int)>
        32ca28:	e3500064 	cmp	r0, #100	; 0x64
        32ca2c:	b3a00001 	movlt	r0, #1	; 0x1
        32ca30:	ba000000 	blt	32ca38 <ApprHorStroke(low_type *)+0x194>
        32ca34:	e3a00000 	mov	r0, #0	; 0x0
        32ca38:	e3380001 	teq	r8, #1	; 0x1
        32ca3c:	1a000002 	bne	32ca4c <ApprHorStroke(low_type *)+0x1a8>
        32ca40:	e3300000 	teq	r0, #0	; 0x0
        32ca44:	0a00001e 	beq	32cac4 <ApprHorStroke(low_type *)+0x220>
        32ca48:	ea00000b 	b	32ca7c <ApprHorStroke(low_type *)+0x1d8>
        32ca4c:	e3380000 	teq	r8, #0	; 0x0
        32ca50:	1a000007 	bne	32ca74 <ApprHorStroke(low_type *)+0x1d0>
        32ca54:	e3300001 	teq	r0, #1	; 0x1
        32ca58:	1a00001b 	bne	32cacc <ApprHorStroke(low_type *)+0x228>
        32ca5c:	e5950006 	ldr	r0, [r5, #6]
        32ca60:	e1a00840 	mov	r0, r0, asr #16
        32ca64:	e5941006 	ldr	r1, [r4, #6]
        32ca68:	e1500841 	cmp	r0, r1, asr #16
        32ca6c:	da000016 	ble	32cacc <ApprHorStroke(low_type *)+0x228>
        32ca70:	ea00000f 	b	32cab4 <ApprHorStroke(low_type *)+0x210>
        32ca74:	e3380001 	teq	r8, #1	; 0x1
        32ca78:	1a000013 	bne	32cacc <ApprHorStroke(low_type *)+0x228>
        32ca7c:	e3300001 	teq	r0, #1	; 0x1
        32ca80:	1a000011 	bne	32cacc <ApprHorStroke(low_type *)+0x228>
        32ca84:	e5950008 	ldr	r0, [r5, #8]
        32ca88:	e5941008 	ldr	r1, [r4, #8]
        32ca8c:	e1a01841 	mov	r1, r1, asr #16
        32ca90:	e281100a 	add	r1, r1, #10	; 0xa
        32ca94:	e1510840 	cmp	r1, r0, asr #16
        32ca98:	ba000009 	blt	32cac4 <ApprHorStroke(low_type *)+0x220>
        32ca9c:	e5950006 	ldr	r0, [r5, #6]
        32caa0:	e5941006 	ldr	r1, [r4, #6]
        32caa4:	e1a01841 	mov	r1, r1, asr #16
        32caa8:	e281100a 	add	r1, r1, #10	; 0xa
        32caac:	e1510840 	cmp	r1, r0, asr #16
        32cab0:	aa000003 	bge	32cac4 <ApprHorStroke(low_type *)+0x220>
        32cab4:	e2860001 	add	r0, r6, #1	; 0x1
        32cab8:	e1a00800 	mov	r0, r0, lsl #16
        32cabc:	e1a00840 	mov	r0, r0, asr #16
        32cac0:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        32cac4:	e1a00006 	mov	r0, r6
        32cac8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        32cacc:	e3e00001 	mvn	r0, #1	; 0x1
        32cad0:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: ArcPicCodes(long, PicPlay *, GrafPort *)
 * Address: 00330658
 */
ArcPicCodes(long, PicPlay *, GrafPort *) {
    /*
        330658:	e1a0c00d 	mov	ip, sp
        33065c:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        330660:	e24cb004 	sub	fp, ip, #4	; 0x4
        330664:	e1a04001 	mov	r4, r1
        330668:	e1a05002 	mov	r5, r2
        33066c:	e1a00002 	mov	r0, r2
        330670:	eb60a58b 	bl	1b59ca4 <$ImpossibleToDraw(GrafPort *)>
        330674:	e3300000 	teq	r0, #0	; 0x0
        330678:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        33067c:	e24dd020 	sub	sp, sp, #32	; 0x20
        330680:	e59490fe 	ldr	r9, [r4, #254]
        330684:	e1a09849 	mov	r9, r9, asr #16
        330688:	e59470fc 	ldr	r7, [r4, #252]
        33068c:	e1a07847 	mov	r7, r7, asr #16
        330690:	e5948102 	ldr	r8, [r4, #258]
        330694:	e1a08848 	mov	r8, r8, asr #16
        330698:	e5946100 	ldr	r6, [r4, #256]
        33069c:	e1a06846 	mov	r6, r6, asr #16
        3306a0:	e5940108 	ldr	r0, [r4, #264]
        3306a4:	e1a00100 	mov	r0, r0, lsl #2
        3306a8:	e594a104 	ldr	sl, [r4, #260]
        3306ac:	eb6246a6 	bl	1bc214c <$AllocateRefHandle(long)>
        3306b0:	e58d0004 	str	r0, [sp, #4]
        3306b4:	e28d3004 	add	r3, sp, #4	; 0x4
        3306b8:	e92d0008 	stmdb	sp!, {r3}
        3306bc:	e1a0010a 	mov	r0, sl, lsl #2
        3306c0:	eb6246a1 	bl	1bc214c <$AllocateRefHandle(long)>
        3306c4:	e58d000c 	str	r0, [sp, #12]
        3306c8:	e28d300c 	add	r3, sp, #12	; 0xc
        3306cc:	e92d0008 	stmdb	sp!, {r3}
        3306d0:	e1a00106 	mov	r0, r6, lsl #2
        3306d4:	eb62469c 	bl	1bc214c <$AllocateRefHandle(long)>
        3306d8:	e58d0014 	str	r0, [sp, #20]
        3306dc:	e28d3014 	add	r3, sp, #20	; 0x14
        3306e0:	e92d0008 	stmdb	sp!, {r3}
        3306e4:	e1a00108 	mov	r0, r8, lsl #2
        3306e8:	eb624697 	bl	1bc214c <$AllocateRefHandle(long)>
        3306ec:	e58d001c 	str	r0, [sp, #28]
        3306f0:	e28d601c 	add	r6, sp, #28	; 0x1c
        3306f4:	e1a00107 	mov	r0, r7, lsl #2
        3306f8:	eb624693 	bl	1bc214c <$AllocateRefHandle(long)>
        3306fc:	e58d0020 	str	r0, [sp, #32]
        330700:	e28d7020 	add	r7, sp, #32	; 0x20
        330704:	e1a00109 	mov	r0, r9, lsl #2
        330708:	eb62468f 	bl	1bc214c <$AllocateRefHandle(long)>
        33070c:	e58d0024 	str	r0, [sp, #36]
        330710:	e28d8024 	add	r8, sp, #36	; 0x24
        330714:	e3a00002 	mov	r0, #2	; 0x2
        330718:	eb62468b 	bl	1bc214c <$AllocateRefHandle(long)>
        33071c:	e58d0028 	str	r0, [sp, #40]
        330720:	e28d0028 	add	r0, sp, #40	; 0x28
        330724:	e1a01008 	mov	r1, r8
        330728:	e1a02007 	mov	r2, r7
        33072c:	e1a03006 	mov	r3, r6
        330730:	eb5ea13c 	bl	1ad8c28 <$FMakeWedge>
        330734:	e28dd00c 	add	sp, sp, #12	; 0xc
        330738:	eb624683 	bl	1bc214c <$AllocateRefHandle(long)>
        33073c:	e58d0000 	str	r0, [sp]
        330740:	e1a0100d 	mov	r1, sp
        330744:	e1a03005 	mov	r3, r5
        330748:	e1a02004 	mov	r2, r4
        33074c:	e51b0034 	ldr	r0, [fp, -#52]
        330750:	eb60a55a 	bl	1b59cc0 <$storeShape(long, RefVar const &, PicPlay *, GrafPort *)>
        330754:	e59d0000 	ldr	r0, [sp]
        330758:	eb624a97 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        33075c:	e59d0004 	ldr	r0, [sp, #4]
        330760:	eb624a95 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        330764:	e59d0008 	ldr	r0, [sp, #8]
        330768:	eb624a93 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        33076c:	e59d000c 	ldr	r0, [sp, #12]
        330770:	eb624a91 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        330774:	e59d0010 	ldr	r0, [sp, #16]
        330778:	eb624a8f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        33077c:	e59d0014 	ldr	r0, [sp, #20]
        330780:	eb624a8d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        330784:	e59d0018 	ldr	r0, [sp, #24]
        330788:	eb624a8b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        33078c:	e59d001c 	ldr	r0, [sp, #28]
        330790:	eb624a89 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        330794:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: ApplyChangePPDLetterInfo(_POST_PARAMS *)
 * Address: 0033c100
 */
ApplyChangePPDLetterInfo(_POST_PARAMS *) {
    /*
        33c100:	e5d01074 	ldrb	r1, [r0, #116]
        33c104:	e3310000 	teq	r1, #0	; 0x0
        33c108:	01a0f00e 	moveq	pc, lr
        33c10c:	e590201c 	ldr	r2, [r0, #28]
        33c110:	e5900040 	ldr	r0, [r0, #64]
        33c114:	e1a00840 	mov	r0, r0, asr #16
        33c118:	e7c21200 	strb	r1, [r2, r0, lsl #4]
        33c11c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: AllocNewTempBuf(void)
 * Address: 0033f684
 */
AllocNewTempBuf(void) {
    /*
        33f684:	e3a00b01 	mov	r0, #1024	; 0x400
        33f688:	ea628aac 	b	1be2140 <$NewPtr>
    */
}

/**
 * Symbol: atoi
 * Address: 0034570c
 */
void globals::atoi() {
    /*
        34570c:	e1a0c00d 	mov	ip, sp
        345710:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        345714:	e24cb004 	sub	fp, ip, #4	; 0x4
        345718:	e1a04000 	mov	r4, r0
        34571c:	eb622404 	bl	1bce734 <$__GetErrNo(void)>
        345720:	e5905000 	ldr	r5, [r0]
        345724:	e1a00004 	mov	r0, r4
        345728:	e3a0200a 	mov	r2, #10	; 0xa
        34572c:	e3a01000 	mov	r1, #0	; 0x0
        345730:	eb61c0e4 	bl	1bb5ac8 <$strtol>
        345734:	e1a04000 	mov	r4, r0
        345738:	eb6223fd 	bl	1bce734 <$__GetErrNo(void)>
        34573c:	e5805000 	str	r5, [r0]
        345740:	e1a00004 	mov	r0, r4
        345744:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: atol
 * Address: 00345748
 */
void globals::atol() {
    /*
        345748:	e1a0c00d 	mov	ip, sp
        34574c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        345750:	e24cb004 	sub	fp, ip, #4	; 0x4
        345754:	e1a04000 	mov	r4, r0
        345758:	eb6223f5 	bl	1bce734 <$__GetErrNo(void)>
        34575c:	e5905000 	ldr	r5, [r0]
        345760:	e1a00004 	mov	r0, r4
        345764:	e3a0200a 	mov	r2, #10	; 0xa
        345768:	e3a01000 	mov	r1, #0	; 0x0
        34576c:	eb61c0d5 	bl	1bb5ac8 <$strtol>
        345770:	e1a04000 	mov	r4, r0
        345774:	eb6223ee 	bl	1bce734 <$__GetErrNo(void)>
        345778:	e5805000 	str	r5, [r0]
        34577c:	e1a00004 	mov	r0, r4
        345780:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: atof
 * Address: 00345784
 */
void globals::atof() {
    /*
        345784:	e1a0c00d 	mov	ip, sp
        345788:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        34578c:	e24cb004 	sub	fp, ip, #4	; 0x4
        345790:	ed2dc203 	sfm	f4, 1, [sp, -#12]!
        345794:	e1a04000 	mov	r4, r0
        345798:	eb6223e5 	bl	1bce734 <$__GetErrNo(void)>
        34579c:	e5905000 	ldr	r5, [r0]
        3457a0:	e1a00004 	mov	r0, r4
        3457a4:	e3a01000 	mov	r1, #0	; 0x0
        3457a8:	eb61c0c5 	bl	1bb5ac4 <$strtod>
        3457ac:	ee00c180 	mvfd	f4, f0
        3457b0:	eb6223df 	bl	1bce734 <$__GetErrNo(void)>
        3457b4:	e5805000 	str	r5, [r0]
        3457b8:	ee008184 	mvfd	f0, f4
        3457bc:	ed1bc208 	lfm	f4, 1, [fp, -#32]
        3457c0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        3457c4:	e1a0c00d 	mov	ip, sp
        3457c8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        3457cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        3457d0:	ed2dc203 	sfm	f4, 1, [sp, -#12]!
        3457d4:	e92d0003 	stmdb	sp!, {r0, r1}
        3457d8:	ecbdc102 	ldfd	f4, [sp], #8
        3457dc:	e24dd004 	sub	sp, sp, #4	; 0x4
        3457e0:	e1a0200d 	mov	r2, sp
        3457e4:	ed2dc102 	stfd	f4, [sp, -#8]!
        3457e8:	e8bd0003 	ldmia	sp!, {r0, r1}
        3457ec:	eb61bc8b 	bl	1bb4a20 <$frexp>
        3457f0:	e59d0000 	ldr	r0, [sp]
        3457f4:	e280007e 	add	r0, r0, #126	; 0x7e
        3457f8:	e3a04002 	mov	r4, #2	; 0x2
        3457fc:	e58d0000 	str	r0, [sp]
        345800:	e3500000 	cmp	r0, #0	; 0x0
        345804:	ca000005 	bgt	345820 <atof+0x9c>
        345808:	ee94f118 	cmf	f4, #0.0
        34580c:	0a000003 	beq	345820 <atof+0x9c>
        345810:	eb6223c7 	bl	1bce734 <$__GetErrNo(void)>
        345814:	e5804000 	str	r4, [r0]
        345818:	ee008108 	mvfs	f0, #0.0
        34581c:	ea000008 	b	345844 <atof+0xc0>
        345820:	e35000ff 	cmp	r0, #255	; 0xff
        345824:	be008104 	mvflts	f0, f4
        345828:	ba000005 	blt	345844 <atof+0xc0>
        34582c:	eb6223c0 	bl	1bce734 <$__GetErrNo(void)>
        345830:	e5804000 	str	r4, [r0]
        345834:	eed4f118 	cmfe	f4, #0.0
        345838:	b59f000c 	ldrlt	r0, [pc, #c]	; 34584c <atof+0xc8>
        34583c:	a59f000c 	ldrge	r0, [pc, #c]	; 345850 <atof+0xcc>
        345840:	ed900100 	ldfs	f0, [r0]
        345844:	ed1bc207 	lfm	f4, 1, [fp, -#28]
        345848:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        34584c:	0c1056fc 	ldceq	6, cr5, [r0], -#1008
        345850:	0c1056f8 	ldceq	6, cr5, [r0], -#992
        345854:	e1a0c00d 	mov	ip, sp
        345858:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        34585c:	e24cb004 	sub	fp, ip, #4	; 0x4
        345860:	ed2dc203 	sfm	f4, 1, [sp, -#12]!
        345864:	e1a06000 	mov	r6, r0
        345868:	e1a04002 	mov	r4, r2
        34586c:	e1a05003 	mov	r5, r3
        345870:	e24dd00c 	sub	sp, sp, #12	; 0xc
        345874:	e3e08000 	mvn	r8, #0	; 0x0
        345878:	e3a07000 	mov	r7, #0	; 0x0
        34587c:	ee00c188 	mvfd	f4, #0.0
        345880:	e3a00000 	mov	r0, #0	; 0x0
        345884:	e58d0008 	str	r0, [sp, #8]
        345888:	e58d0004 	str	r0, [sp, #4]
        34588c:	e58d0000 	str	r0, [sp]
        345890:	e59fa0d0 	ldr	sl, [pc, #d0]	; 345968 <atof+0x1e4>
        345894:	e2888001 	add	r8, r8, #1	; 0x1
        345898:	e1a00006 	mov	r0, r6
        34589c:	eb62abf6 	bl	1bf087c <$getc>
        3458a0:	e7da1000 	ldrb	r1, [sl, r0]
        3458a4:	e3110001 	tst	r1, #1	; 0x1
        3458a8:	1afffff9 	bne	345894 <atof+0x110>
        3458ac:	e3700001 	cmn	r0, #1	; 0x1
        3458b0:	03e00000 	mvneq	r0, #0	; 0x0
        3458b4:	0a0000d3 	beq	345c08 <atof+0x484>
        3458b8:	e3c44d0d 	bic	r4, r4, #832	; 0x340
        3458bc:	e3550000 	cmp	r5, #0	; 0x0
        3458c0:	da000008 	ble	3458e8 <atof+0x164>
        3458c4:	e330002b 	teq	r0, #43	; 0x2b
        3458c8:	0a000002 	beq	3458d8 <atof+0x154>
        3458cc:	e330002d 	teq	r0, #45	; 0x2d
        3458d0:	1a000004 	bne	3458e8 <atof+0x164>
        3458d4:	e3844c02 	orr	r4, r4, #512	; 0x200
        3458d8:	e2888001 	add	r8, r8, #1	; 0x1
        3458dc:	e1a00006 	mov	r0, r6
        3458e0:	eb62abe5 	bl	1bf087c <$getc>
        3458e4:	e2455001 	sub	r5, r5, #1	; 0x1
        3458e8:	e3550000 	cmp	r5, #0	; 0x0
        3458ec:	da000025 	ble	345988 <atof+0x204>
        3458f0:	e330002e 	teq	r0, #46	; 0x2e
        3458f4:	02041040 	andeq	r1, r4, #64	; 0x40
        3458f8:	03310000 	teqeq	r1, #0	; 0x0
        3458fc:	03844040 	orreq	r4, r4, #64	; 0x40
        345900:	02455001 	subeq	r5, r5, #1	; 0x1
        345904:	0a00001a 	beq	345974 <atof+0x1f0>
        345908:	e7da1000 	ldrb	r1, [sl, r0]
        34590c:	e3110020 	tst	r1, #32	; 0x20
        345910:	0a00001c 	beq	345988 <atof+0x204>
        345914:	e3844c01 	orr	r4, r4, #256	; 0x100
        345918:	e2455001 	sub	r5, r5, #1	; 0x1
        34591c:	e59d1000 	ldr	r1, [sp]
        345920:	e3110c0f 	tst	r1, #3840	; 0xf00
        345924:	1a000010 	bne	34596c <atof+0x1e8>
        345928:	e59d1000 	ldr	r1, [sp]
        34592c:	e1a02201 	mov	r2, r1, lsl #4
        345930:	e59d1004 	ldr	r1, [sp, #4]
        345934:	e1821e21 	orr	r1, r2, r1, lsr #28
        345938:	e58d1000 	str	r1, [sp]
        34593c:	e59d1004 	ldr	r1, [sp, #4]
        345940:	e1a01201 	mov	r1, r1, lsl #4
        345944:	e59d2008 	ldr	r2, [sp, #8]
        345948:	e1811e22 	orr	r1, r1, r2, lsr #28
        34594c:	e2400030 	sub	r0, r0, #48	; 0x30
        345950:	e1800202 	orr	r0, r0, r2, lsl #4
        345954:	e58d0008 	str	r0, [sp, #8]
        345958:	e3140040 	tst	r4, #64	; 0x40
        34595c:	e58d1004 	str	r1, [sp, #4]
        345960:	12477001 	subne	r7, r7, #1	; 0x1
        345964:	ea000002 	b	345974 <atof+0x1f0>
        345968:	0038053c 	eoreqs	r0, r8, ip, lsr r5
        34596c:	e3140040 	tst	r4, #64	; 0x40
        345970:	02877001 	addeq	r7, r7, #1	; 0x1
        345974:	e2888001 	add	r8, r8, #1	; 0x1
        345978:	e1a00006 	mov	r0, r6
        34597c:	eb62abbe 	bl	1bf087c <$getc>
        345980:	e3550000 	cmp	r5, #0	; 0x0
        345984:	caffffd9 	bgt	3458f0 <atof+0x16c>
        345988:	e3550000 	cmp	r5, #0	; 0x0
        34598c:	da000024 	ble	345a24 <atof+0x2a0>
        345990:	e3300065 	teq	r0, #101	; 0x65
        345994:	13300045 	teqne	r0, #69	; 0x45
        345998:	1a000021 	bne	345a24 <atof+0x2a0>
        34599c:	e3140c01 	tst	r4, #256	; 0x100
        3459a0:	0a00001f 	beq	345a24 <atof+0x2a0>
        3459a4:	e3a09000 	mov	r9, #0	; 0x0
        3459a8:	e3c44d06 	bic	r4, r4, #384	; 0x180
        3459ac:	e2455001 	sub	r5, r5, #1	; 0x1
        3459b0:	e2888001 	add	r8, r8, #1	; 0x1
        3459b4:	e1a00006 	mov	r0, r6
        3459b8:	eb62abaf 	bl	1bf087c <$getc>
        3459bc:	e330002b 	teq	r0, #43	; 0x2b
        3459c0:	0a000002 	beq	3459d0 <atof+0x24c>
        3459c4:	e330002d 	teq	r0, #45	; 0x2d
        3459c8:	1a00000d 	bne	345a04 <atof+0x280>
        3459cc:	e3844080 	orr	r4, r4, #128	; 0x80
        3459d0:	e2888001 	add	r8, r8, #1	; 0x1
        3459d4:	e1a00006 	mov	r0, r6
        3459d8:	eb62aba7 	bl	1bf087c <$getc>
        3459dc:	e2455001 	sub	r5, r5, #1	; 0x1
        3459e0:	ea000007 	b	345a04 <atof+0x280>
        3459e4:	e3844c01 	orr	r4, r4, #256	; 0x100
        3459e8:	e2455001 	sub	r5, r5, #1	; 0x1
        3459ec:	e0891109 	add	r1, r9, r9, lsl #2
        3459f0:	e0800081 	add	r0, r0, r1, lsl #1
        3459f4:	e2409030 	sub	r9, r0, #48	; 0x30
        3459f8:	e2888001 	add	r8, r8, #1	; 0x1
        3459fc:	e1a00006 	mov	r0, r6
        345a00:	eb62ab9d 	bl	1bf087c <$getc>
        345a04:	e3550000 	cmp	r5, #0	; 0x0
        345a08:	da000002 	ble	345a18 <atof+0x294>
        345a0c:	e7da1000 	ldrb	r1, [sl, r0]
        345a10:	e3110020 	tst	r1, #32	; 0x20
        345a14:	1afffff2 	bne	3459e4 <atof+0x260>
        345a18:	e3140080 	tst	r4, #128	; 0x80
        345a1c:	00877009 	addeq	r7, r7, r9
        345a20:	10477009 	subne	r7, r7, r9
        345a24:	e1a00006 	mov	r0, r6
        345a28:	eb00273f 	bl	34f72c <__backspace>
        345a2c:	e59d0000 	ldr	r0, [sp]
        345a30:	e3500000 	cmp	r0, #0	; 0x0
        345a34:	1a000006 	bne	345a54 <atof+0x2d0>
        345a38:	e59d0004 	ldr	r0, [sp, #4]
        345a3c:	e3300000 	teq	r0, #0	; 0x0
        345a40:	1a000004 	bne	345a58 <atof+0x2d4>
        345a44:	e59d0008 	ldr	r0, [sp, #8]
        345a48:	e3300000 	teq	r0, #0	; 0x0
        345a4c:	0a00004d 	beq	345b88 <atof+0x404>
        345a50:	ea000003 	b	345a64 <atof+0x2e0>
        345a54:	1a000007 	bne	345a78 <atof+0x2f4>
        345a58:	e59d0004 	ldr	r0, [sp, #4]
        345a5c:	e3300000 	teq	r0, #0	; 0x0
        345a60:	1a000004 	bne	345a78 <atof+0x2f4>
        345a64:	e59d0008 	ldr	r0, [sp, #8]
        345a68:	e58d0004 	str	r0, [sp, #4]
        345a6c:	e3a00000 	mov	r0, #0	; 0x0
        345a70:	e2477008 	sub	r7, r7, #8	; 0x8
        345a74:	e58d0008 	str	r0, [sp, #8]
        345a78:	e59d0000 	ldr	r0, [sp]
        345a7c:	e3100c0f 	tst	r0, #3840	; 0xf00
        345a80:	1a00000f 	bne	345ac4 <atof+0x340>
        345a84:	e59d0000 	ldr	r0, [sp]
        345a88:	e1a01200 	mov	r1, r0, lsl #4
        345a8c:	e59d0004 	ldr	r0, [sp, #4]
        345a90:	e1810e20 	orr	r0, r1, r0, lsr #28
        345a94:	e58d0000 	str	r0, [sp]
        345a98:	e59d0004 	ldr	r0, [sp, #4]
        345a9c:	e1a00200 	mov	r0, r0, lsl #4
        345aa0:	e59d1008 	ldr	r1, [sp, #8]
        345aa4:	e1800e21 	orr	r0, r0, r1, lsr #28
        345aa8:	e58d0004 	str	r0, [sp, #4]
        345aac:	e1a00201 	mov	r0, r1, lsl #4
        345ab0:	e2477001 	sub	r7, r7, #1	; 0x1
        345ab4:	e58d0008 	str	r0, [sp, #8]
        345ab8:	e59d0000 	ldr	r0, [sp]
        345abc:	e3100c0f 	tst	r0, #3840	; 0xf00
        345ac0:	0affffef 	beq	345a84 <atof+0x300>
        345ac4:	e2875012 	add	r5, r7, #18	; 0x12
        345ac8:	e3a06002 	mov	r6, #2	; 0x2
        345acc:	e295cff9 	adds	ip, r5, #996	; 0x3e4
        345ad0:	d37c0003 	cmnle	ip, #3	; 0x3
        345ad4:	ba000009 	blt	345b00 <atof+0x37c>
        345ad8:	e255cff9 	subs	ip, r5, #996	; 0x3e4
        345adc:	a35c0003 	cmpge	ip, #3	; 0x3
        345ae0:	da000009 	ble	345b0c <atof+0x388>
        345ae4:	e3140c02 	tst	r4, #512	; 0x200
        345ae8:	0a000002 	beq	345af8 <atof+0x374>
        345aec:	eb62f5bc 	bl	1c031e4 <$__inf>
        345af0:	ee10c180 	mnfd	f4, f0
        345af4:	ea000001 	b	345b00 <atof+0x37c>
        345af8:	eb62f5b9 	bl	1c031e4 <$__inf>
        345afc:	ee00c180 	mvfd	f4, f0
        345b00:	eb62230b 	bl	1bce734 <$__GetErrNo(void)>
        345b04:	e5806000 	str	r6, [r0]
        345b08:	ea00001e 	b	345b88 <atof+0x404>
        345b0c:	e3550000 	cmp	r5, #0	; 0x0
        345b10:	aa000003 	bge	345b24 <atof+0x3a0>
        345b14:	e59d0000 	ldr	r0, [sp]
        345b18:	e3800101 	orr	r0, r0, #1073741824	; 0x40000000
        345b1c:	e2655000 	rsb	r5, r5, #0	; 0x0
        345b20:	e58d0000 	str	r0, [sp]
        345b24:	e1a00005 	mov	r0, r5
        345b28:	eb61b385 	bl	1bb2944 <$__rt_sdiv10>
        345b2c:	e0801100 	add	r1, r0, r0, lsl #2
        345b30:	e0452081 	sub	r2, r5, r1, lsl #1
        345b34:	e59d1000 	ldr	r1, [sp]
        345b38:	e1811602 	orr	r1, r1, r2, lsl #12
        345b3c:	e1a05000 	mov	r5, r0
        345b40:	e58d1000 	str	r1, [sp]
        345b44:	eb61b37e 	bl	1bb2944 <$__rt_sdiv10>
        345b48:	e0801100 	add	r1, r0, r0, lsl #2
        345b4c:	e0452081 	sub	r2, r5, r1, lsl #1
        345b50:	e59d1000 	ldr	r1, [sp]
        345b54:	e1811802 	orr	r1, r1, r2, lsl #16
        345b58:	e58d1000 	str	r1, [sp]
        345b5c:	eb61b378 	bl	1bb2944 <$__rt_sdiv10>
        345b60:	e59d0000 	ldr	r0, [sp]
        345b64:	e1800a01 	orr	r0, r0, r1, lsl #20
        345b68:	e58d0000 	str	r0, [sp]
        345b6c:	e3140c02 	tst	r4, #512	; 0x200
        345b70:	159d0000 	ldrne	r0, [sp]
        345b74:	13800102 	orrne	r0, r0, #-2147483648	; 0x80000000
        345b78:	158d0000 	strne	r0, [sp]
        345b7c:	e1a0000d 	mov	r0, sp
        345b80:	eb00f21a 	bl	3823f0 <_ldfp>
        345b84:	ee00c180 	mvfd	f4, f0
        345b88:	e3140c01 	tst	r4, #256	; 0x100
        345b8c:	03e00001 	mvneq	r0, #1	; 0x1
        345b90:	0a00001c 	beq	345c08 <atof+0x484>
        345b94:	e3140002 	tst	r4, #2	; 0x2
        345b98:	0a00000b 	beq	345bcc <atof+0x448>
        345b9c:	e3140001 	tst	r4, #1	; 0x1
        345ba0:	1a000017 	bne	345c04 <atof+0x480>
        345ba4:	e51b1034 	ldr	r1, [fp, -#52]
        345ba8:	e5910000 	ldr	r0, [r1]
        345bac:	e2800003 	add	r0, r0, #3	; 0x3
        345bb0:	e3c00003 	bic	r0, r0, #3	; 0x3
        345bb4:	e2800004 	add	r0, r0, #4	; 0x4
        345bb8:	e51b1034 	ldr	r1, [fp, -#52]
        345bbc:	e5810000 	str	r0, [r1]
        345bc0:	e5100004 	ldr	r0, [r0, -#4]
        345bc4:	ed80c100 	stfd	f4, [r0]
        345bc8:	ea00000d 	b	345c04 <atof+0x480>
        345bcc:	ed2dc102 	stfd	f4, [sp, -#8]!
        345bd0:	e8bd0003 	ldmia	sp!, {r0, r1}
        345bd4:	ebfffefa 	bl	3457c4 <atof+0x40>
        345bd8:	e3140001 	tst	r4, #1	; 0x1
        345bdc:	1a000008 	bne	345c04 <atof+0x480>
        345be0:	e51b1034 	ldr	r1, [fp, -#52]
        345be4:	e5910000 	ldr	r0, [r1]
        345be8:	e2800003 	add	r0, r0, #3	; 0x3
        345bec:	e3c00003 	bic	r0, r0, #3	; 0x3
        345bf0:	e2800004 	add	r0, r0, #4	; 0x4
        345bf4:	e51b1034 	ldr	r1, [fp, -#52]
        345bf8:	e5810000 	str	r0, [r1]
        345bfc:	e5100004 	ldr	r0, [r0, -#4]
        345c00:	ed800100 	stfs	f0, [r0]
        345c04:	e1a00008 	mov	r0, r8
        345c08:	ed1bc211 	lfm	f4, 1, [fp, -#68]
        345c0c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        345c10:	e1a0c00d 	mov	ip, sp
        345c14:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        345c18:	e24cb004 	sub	fp, ip, #4	; 0x4
        345c1c:	e1a05000 	mov	r5, r0
        345c20:	e1a06001 	mov	r6, r1
        345c24:	e1a07002 	mov	r7, r2
        345c28:	e1a04003 	mov	r4, r3
        345c2c:	e3e08000 	mvn	r8, #0	; 0x0
        345c30:	e3a09000 	mov	r9, #0	; 0x0
        345c34:	e59fa044 	ldr	sl, [pc, #44]	; 345c80 <atof+0x4fc>
        345c38:	e2888001 	add	r8, r8, #1	; 0x1
        345c3c:	e1a00005 	mov	r0, r5
        345c40:	eb62ab0d 	bl	1bf087c <$getc>
        345c44:	e7da1000 	ldrb	r1, [sl, r0]
        345c48:	e3110001 	tst	r1, #1	; 0x1
        345c4c:	1afffff9 	bne	345c38 <atof+0x4b4>
        345c50:	e3700001 	cmn	r0, #1	; 0x1
        345c54:	03e00000 	mvneq	r0, #0	; 0x0
        345c58:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        345c5c:	e2177001 	ands	r7, r7, #1	; 0x1
        345c60:	1a00000d 	bne	345c9c <atof+0x518>
        345c64:	e5961000 	ldr	r1, [r6]
        345c68:	e2811003 	add	r1, r1, #3	; 0x3
        345c6c:	e3c11003 	bic	r1, r1, #3	; 0x3
        345c70:	e2811004 	add	r1, r1, #4	; 0x4
        345c74:	e5861000 	str	r1, [r6]
        345c78:	e5319004 	ldr	r9, [r1, -#4]!
        345c7c:	ea000006 	b	345c9c <atof+0x518>
        345c80:	0038053c 	eoreqs	r0, r8, ip, lsr r5
        345c84:	e2444001 	sub	r4, r4, #1	; 0x1
        345c88:	e3370000 	teq	r7, #0	; 0x0
        345c8c:	04c90001 	streqb	r0, [r9], #1
        345c90:	e2888001 	add	r8, r8, #1	; 0x1
        345c94:	e1a00005 	mov	r0, r5
        345c98:	eb62aaf7 	bl	1bf087c <$getc>
        345c9c:	e3540000 	cmp	r4, #0	; 0x0
        345ca0:	da000004 	ble	345cb8 <atof+0x534>
        345ca4:	e3700001 	cmn	r0, #1	; 0x1
        345ca8:	0a000002 	beq	345cb8 <atof+0x534>
        345cac:	e7da1000 	ldrb	r1, [sl, r0]
        345cb0:	e3110001 	tst	r1, #1	; 0x1
        345cb4:	0afffff2 	beq	345c84 <atof+0x500>
        345cb8:	e1a00005 	mov	r0, r5
        345cbc:	eb00269a 	bl	34f72c <__backspace>
        345cc0:	e3370000 	teq	r7, #0	; 0x0
        345cc4:	03a00000 	moveq	r0, #0	; 0x0
        345cc8:	05c90000 	streqb	r0, [r9]
        345ccc:	e1a00008 	mov	r0, r8
        345cd0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        345cd4:	e1a0c00d 	mov	ip, sp
        345cd8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        345cdc:	e24cb004 	sub	fp, ip, #4	; 0x4
        345ce0:	e1a05000 	mov	r5, r0
        345ce4:	e1a04003 	mov	r4, r3
        345ce8:	e3a07000 	mov	r7, #0	; 0x0
        345cec:	e2128001 	ands	r8, r2, #1	; 0x1
        345cf0:	e59ba004 	ldr	sl, [fp, #4]
        345cf4:	1a000005 	bne	345d10 <atof+0x58c>
        345cf8:	e5910000 	ldr	r0, [r1]
        345cfc:	e2800003 	add	r0, r0, #3	; 0x3
        345d00:	e3c00003 	bic	r0, r0, #3	; 0x3
        345d04:	e2800004 	add	r0, r0, #4	; 0x4
        345d08:	e5810000 	str	r0, [r1]
        345d0c:	e5307004 	ldr	r7, [r0, -#4]!
        345d10:	e3a06000 	mov	r6, #0	; 0x0
        345d14:	e1a00005 	mov	r0, r5
        345d18:	eb62aad7 	bl	1bf087c <$getc>
        345d1c:	e3700001 	cmn	r0, #1	; 0x1
        345d20:	03e00000 	mvneq	r0, #0	; 0x0
        345d24:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        345d28:	e3a09001 	mov	r9, #1	; 0x1
        345d2c:	ea000005 	b	345d48 <atof+0x5c4>
        345d30:	e2444001 	sub	r4, r4, #1	; 0x1
        345d34:	e3380000 	teq	r8, #0	; 0x0
        345d38:	04c70001 	streqb	r0, [r7], #1
        345d3c:	e2866001 	add	r6, r6, #1	; 0x1
        345d40:	e1a00005 	mov	r0, r5
        345d44:	eb62aacc 	bl	1bf087c <$getc>
        345d48:	e3540000 	cmp	r4, #0	; 0x0
        345d4c:	da00000c 	ble	345d84 <atof+0x600>
        345d50:	e3700001 	cmn	r0, #1	; 0x1
        345d54:	0a00000a 	beq	345d84 <atof+0x600>
        345d58:	e1a01000 	mov	r1, r0
        345d5c:	e3500000 	cmp	r0, #0	; 0x0
        345d60:	b281101f 	addlt	r1, r1, #31	; 0x1f
        345d64:	e1a012c1 	mov	r1, r1, asr #5
        345d68:	e79a2101 	ldr	r2, [sl, r1, lsl #2]
        345d6c:	e1a01000 	mov	r1, r0
        345d70:	b2611000 	rsblt	r1, r1, #0	; 0x0
        345d74:	e201101f 	and	r1, r1, #31	; 0x1f
        345d78:	b2611000 	rsblt	r1, r1, #0	; 0x0
        345d7c:	e1120119 	tst	r2, r9, lsl r1
        345d80:	1affffea 	bne	345d30 <atof+0x5ac>
        345d84:	e1a00005 	mov	r0, r5
        345d88:	eb002667 	bl	34f72c <__backspace>
        345d8c:	e3380000 	teq	r8, #0	; 0x0
        345d90:	03a00000 	moveq	r0, #0	; 0x0
        345d94:	05c70000 	streqb	r0, [r7]
        345d98:	e1a00006 	mov	r0, r6
        345d9c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: AlterIndexes__FUcRC6RefVarT2Ul
 * Address: 00347ba0
 */
void globals::AlterIndexes() {
    /*
        347ba0:	e1a0c00d 	mov	ip, sp
        347ba4:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        347ba8:	e24cb004 	sub	fp, ip, #4	; 0x4
        347bac:	e51b0038 	ldr	r0, [fp, -#56]
        347bb0:	e20080ff 	and	r8, r0, #255	; 0xff
        347bb4:	e51b0034 	ldr	r0, [fp, -#52]
        347bb8:	e5900000 	ldr	r0, [r0]
        347bbc:	e5900000 	ldr	r0, [r0]
        347bc0:	e59f1168 	ldr	r1, [pc, #168]	; 347d30 <AlterIndexes__FUcRC6RefVarT2Ul+0x190>
        347bc4:	e5911000 	ldr	r1, [r1]
        347bc8:	e5911000 	ldr	r1, [r1]
        347bcc:	eb61f1a3 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        347bd0:	e59f115c 	ldr	r1, [pc, #15c]	; 347d34 <AlterIndexes__FUcRC6RefVarT2Ul+0x194>
        347bd4:	e5911000 	ldr	r1, [r1]
        347bd8:	e5911000 	ldr	r1, [r1]
        347bdc:	eb61f19f 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        347be0:	eb61e959 	bl	1bc214c <$AllocateRefHandle(long)>
        347be4:	e1a05000 	mov	r5, r0
        347be8:	e24dd004 	sub	sp, sp, #4	; 0x4
        347bec:	e3a00002 	mov	r0, #2	; 0x2
        347bf0:	eb61e955 	bl	1bc214c <$AllocateRefHandle(long)>
        347bf4:	e58d0000 	str	r0, [sp]
        347bf8:	e5950000 	ldr	r0, [r5]
        347bfc:	eb61f5aa 	bl	1bc52ac <$Length(long)>
        347c00:	e2506001 	subs	r6, r0, #1	; 0x1
        347c04:	e3a00000 	mov	r0, #0	; 0x0
        347c08:	4a00006d 	bmi	347dc4 <AlterIndexes__FUcRC6RefVarT2Ul+0x224>
        347c0c:	e59fa124 	ldr	sl, [pc, #124]	; 347d38 <AlterIndexes__FUcRC6RefVarT2Ul+0x198>
        347c10:	e59f7124 	ldr	r7, [pc, #124]	; 347d3c <AlterIndexes__FUcRC6RefVarT2Ul+0x19c>
        347c14:	e59f9124 	ldr	r9, [pc, #124]	; 347d40 <AlterIndexes__FUcRC6RefVarT2Ul+0x1a0>
        347c18:	e1a01006 	mov	r1, r6
        347c1c:	e5950000 	ldr	r0, [r5]
        347c20:	eb61f18b 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        347c24:	e59d1000 	ldr	r1, [sp]
        347c28:	e5810000 	str	r0, [r1]
        347c2c:	e59a1000 	ldr	r1, [sl]
        347c30:	e5911000 	ldr	r1, [r1]
        347c34:	eb61f189 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        347c38:	e3100003 	tst	r0, #3	; 0x3
        347c3c:	01a00140 	moveq	r0, r0, asr #2
        347c40:	0a000000 	beq	347c48 <AlterIndexes__FUcRC6RefVarT2Ul+0xa8>
        347c44:	eb61e934 	bl	1bc211c <$_RINTError(long)>
        347c48:	e1a01000 	mov	r1, r0
        347c4c:	e51b0034 	ldr	r0, [fp, -#52]
        347c50:	eb5c1277 	bl	1a4c634 <$GetSoupIndexObject(RefVar const &, unsigned long)>
        347c54:	e1a04000 	mov	r4, r0
        347c58:	e59d0000 	ldr	r0, [sp]
        347c5c:	e5900000 	ldr	r0, [r0]
        347c60:	e59f10dc 	ldr	r1, [pc, #dc]	; 347d44 <AlterIndexes__FUcRC6RefVarT2Ul+0x1a4>
        347c64:	e5911000 	ldr	r1, [r1]
        347c68:	e5911000 	ldr	r1, [r1]
        347c6c:	eb61f17b 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        347c70:	e5971000 	ldr	r1, [r7]
        347c74:	e5911000 	ldr	r1, [r1]
        347c78:	eb61f16c 	bl	1bc4230 <$EQRef__FlT1>
        347c7c:	e3300000 	teq	r0, #0	; 0x0
        347c80:	0a000031 	beq	347d4c <AlterIndexes__FUcRC6RefVarT2Ul+0x1ac>
        347c84:	e24dd008 	sub	sp, sp, #8	; 0x8
        347c88:	e59d0008 	ldr	r0, [sp, #8]
        347c8c:	e5900000 	ldr	r0, [r0]
        347c90:	e59f10b0 	ldr	r1, [pc, #b0]	; 347d48 <AlterIndexes__FUcRC6RefVarT2Ul+0x1a8>
        347c94:	e5911000 	ldr	r1, [r1]
        347c98:	e5911000 	ldr	r1, [r1]
        347c9c:	eb61f16f 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        347ca0:	eb61e929 	bl	1bc214c <$AllocateRefHandle(long)>
        347ca4:	e58d0000 	str	r0, [sp]
        347ca8:	e1a0100d 	mov	r1, sp
        347cac:	e51b0030 	ldr	r0, [fp, -#48]
        347cb0:	eb5be0c2 	bl	1a3ffc0 <$GetEntryKey__FRC6RefVarT1>
        347cb4:	eb61e924 	bl	1bc214c <$AllocateRefHandle(long)>
        347cb8:	e58d0004 	str	r0, [sp, #4]
        347cbc:	e59d0000 	ldr	r0, [sp]
        347cc0:	eb61ed3d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        347cc4:	e24dd004 	sub	sp, sp, #4	; 0x4
        347cc8:	e59d0008 	ldr	r0, [sp, #8]
        347ccc:	e5900000 	ldr	r0, [r0]
        347cd0:	e3300002 	teq	r0, #2	; 0x2
        347cd4:	0a000010 	beq	347d1c <AlterIndexes__FUcRC6RefVarT2Ul+0x17c>
        347cd8:	e59d000c 	ldr	r0, [sp, #12]
        347cdc:	e5900000 	ldr	r0, [r0]
        347ce0:	e5971000 	ldr	r1, [r7]
        347ce4:	e5911000 	ldr	r1, [r1]
        347ce8:	eb61f15c 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        347cec:	eb61e916 	bl	1bc214c <$AllocateRefHandle(long)>
        347cf0:	e58d0000 	str	r0, [sp]
        347cf4:	e1a0300d 	mov	r3, sp
        347cf8:	e51b2034 	ldr	r2, [fp, -#52]
        347cfc:	e92d000c 	stmdb	sp!, {r2, r3}
        347d00:	e28d3010 	add	r3, sp, #16	; 0x10
        347d04:	e1a01004 	mov	r1, r4
        347d08:	e1a00008 	mov	r0, r8
        347d0c:	e51b202c 	ldr	r2, [fp, -#44]
        347d10:	eb5c0e39 	bl	1a4b5fc <$AlterTagsIndex__FUcR10TSoupIndexUlRC6RefVarN24>
        347d14:	e5bd0008 	ldr	r0, [sp, #8]!
        347d18:	eb61ed27 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        347d1c:	e28dd004 	add	sp, sp, #4	; 0x4
        347d20:	e59d0004 	ldr	r0, [sp, #4]
        347d24:	eb61ed24 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        347d28:	e28dd008 	add	sp, sp, #8	; 0x8
        347d2c:	ea000022 	b	347dbc <AlterIndexes__FUcRC6RefVarT2Ul+0x21c>
        347d30:	00685390 	streqb	r5, [r8], -#48
        347d34:	006831c8 	rsbeq	r3, r8, r8, asr #3
        347d38:	006831c0 	rsbeq	r3, r8, r0, asr #3
        347d3c:	00684a48 	rsbeq	r4, r8, r8, asr #20
        347d40:	003712fc 	ldreqsh	r1, [r7], -ip
        347d44:	00684cb0 	streqh	r4, [r8], -#192
        347d48:	00683d70 	rsbeq	r3, r8, r0, ror sp
        347d4c:	e24dd050 	sub	sp, sp, #80	; 0x50
        347d50:	e3a00000 	mov	r0, #0	; 0x0
        347d54:	e5cd0001 	strb	r0, [sp, #1]
        347d58:	e5cd0000 	strb	r0, [sp]
        347d5c:	e1a0200d 	mov	r2, sp
        347d60:	e28d1050 	add	r1, sp, #80	; 0x50
        347d64:	e3a03000 	mov	r3, #0	; 0x0
        347d68:	e51b0030 	ldr	r0, [fp, -#48]
        347d6c:	eb5c1653 	bl	1a4d6c0 <$GetEntrySKey__FRC6RefVarT1P4SKeyPUc>
        347d70:	e3300000 	teq	r0, #0	; 0x0
        347d74:	0a00000f 	beq	347db8 <AlterIndexes__FUcRC6RefVarT2Ul+0x218>
        347d78:	e3380000 	teq	r8, #0	; 0x0
        347d7c:	e24b202c 	sub	r2, fp, #44	; 0x2c
        347d80:	e1a0100d 	mov	r1, sp
        347d84:	e1a00004 	mov	r0, r4
        347d88:	0a000001 	beq	347d94 <AlterIndexes__FUcRC6RefVarT2Ul+0x1f4>
        347d8c:	eb61e8e4 	bl	1bc2124 <TSoupIndex::$Add(SKey *, SKey *)>
        347d90:	ea000000 	b	347d98 <AlterIndexes__FUcRC6RefVarT2Ul+0x1f8>
        347d94:	eb61ed04 	bl	1bc31ac <TSoupIndex::$Delete(SKey *, SKey *)>
        347d98:	e1a01000 	mov	r1, r0
        347d9c:	e3500000 	cmp	r0, #0	; 0x0
        347da0:	0a000004 	beq	347db8 <AlterIndexes__FUcRC6RefVarT2Ul+0x218>
        347da4:	c3a0106a 	movgt	r1, #106	; 0x6a
        347da8:	c2411b2f 	subgt	r1, r1, #48128	; 0xbc00
        347dac:	e3a02000 	mov	r2, #0	; 0x0
        347db0:	e5990000 	ldr	r0, [r9]
        347db4:	eb626cf8 	bl	1be319c <$Throw>
        347db8:	e28dd050 	add	sp, sp, #80	; 0x50
        347dbc:	e2566001 	subs	r6, r6, #1	; 0x1
        347dc0:	5affff94 	bpl	347c18 <AlterIndexes__FUcRC6RefVarT2Ul+0x78>
        347dc4:	e59d0000 	ldr	r0, [sp]
        347dc8:	eb61ecfb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        347dcc:	e28dd004 	add	sp, sp, #4	; 0x4
        347dd0:	e1a00005 	mov	r0, r5
        347dd4:	eb61ecf8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        347dd8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: AbortSoupIndexes(RefVar const &)
 * Address: 003485a4
 */
AbortSoupIndexes(RefVar const &) {
    /*
        3485a4:	e1a0c00d 	mov	ip, sp
        3485a8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        3485ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        3485b0:	e1a04000 	mov	r4, r0
        3485b4:	e5900000 	ldr	r0, [r0]
        3485b8:	e5900000 	ldr	r0, [r0]
        3485bc:	e59f1094 	ldr	r1, [pc, #94]	; 348658 <AbortSoupIndexes(RefVar const &)+0xb4>
        3485c0:	e5911000 	ldr	r1, [r1]
        3485c4:	e5911000 	ldr	r1, [r1]
        3485c8:	eb61ef24 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        3485cc:	eb61e6de 	bl	1bc214c <$AllocateRefHandle(long)>
        3485d0:	e1a07000 	mov	r7, r0
        3485d4:	e5900000 	ldr	r0, [r0]
        3485d8:	e59f107c 	ldr	r1, [pc, #7c]	; 34865c <AbortSoupIndexes(RefVar const &)+0xb8>
        3485dc:	e5911000 	ldr	r1, [r1]
        3485e0:	e5911000 	ldr	r1, [r1]
        3485e4:	eb61ef1d 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        3485e8:	eb61e6d7 	bl	1bc214c <$AllocateRefHandle(long)>
        3485ec:	e1a05000 	mov	r5, r0
        3485f0:	e5900000 	ldr	r0, [r0]
        3485f4:	eb61f32c 	bl	1bc52ac <$Length(long)>
        3485f8:	e2506001 	subs	r6, r0, #1	; 0x1
        3485fc:	4a000010 	bmi	348644 <AbortSoupIndexes(RefVar const &)+0xa0>
        348600:	e59f8058 	ldr	r8, [pc, #58]	; 348660 <AbortSoupIndexes(RefVar const &)+0xbc>
        348604:	e1a01006 	mov	r1, r6
        348608:	e5950000 	ldr	r0, [r5]
        34860c:	eb61ef10 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        348610:	e5981000 	ldr	r1, [r8]
        348614:	e5911000 	ldr	r1, [r1]
        348618:	eb61ef10 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        34861c:	e3100003 	tst	r0, #3	; 0x3
        348620:	01a00140 	moveq	r0, r0, asr #2
        348624:	0a000000 	beq	34862c <AbortSoupIndexes(RefVar const &)+0x88>
        348628:	eb61e6bb 	bl	1bc211c <$_RINTError(long)>
        34862c:	e1a01000 	mov	r1, r0
        348630:	e1a00004 	mov	r0, r4
        348634:	eb5c0ffe 	bl	1a4c634 <$GetSoupIndexObject(RefVar const &, unsigned long)>
        348638:	eb5c07c7 	bl	1a4a55c <TSoupIndex::$StoreAborted(void)>
        34863c:	e2566001 	subs	r6, r6, #1	; 0x1
        348640:	5affffef 	bpl	348604 <AbortSoupIndexes(RefVar const &)+0x60>
        348644:	e1a00005 	mov	r0, r5
        348648:	eb61eadb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        34864c:	e1a00007 	mov	r0, r7
        348650:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        348654:	ea61ead8 	b	1bc31bc <$DisposeRefHandle(RefHandle *)>
        348658:	00685390 	streqb	r5, [r8], -#48
        34865c:	006831c8 	rsbeq	r3, r8, r8, asr #3
        348660:	006831c0 	rsbeq	r3, r8, r0, asr #3
    */
}

/**
 * Symbol: AddNewSoupIndexes__FRC6RefVarN21
 * Address: 00349cd8
 */
void globals::AddNewSoupIndexes() {
    /*
        349cd8:	e1a0c00d 	mov	ip, sp
        349cdc:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        349ce0:	e24cb004 	sub	fp, ip, #4	; 0x4
        349ce4:	e1a04000 	mov	r4, r0
        349ce8:	e1a06001 	mov	r6, r1
        349cec:	e1a05002 	mov	r5, r2
        349cf0:	e24dd004 	sub	sp, sp, #4	; 0x4
        349cf4:	e59f00e0 	ldr	r0, [pc, #e0]	; 349ddc <AddNewSoupIndexes__FRC6RefVarN21+0x104>
        349cf8:	e3a01000 	mov	r1, #0	; 0x0
        349cfc:	eb61e10d 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        349d00:	eb61e111 	bl	1bc214c <$AllocateRefHandle(long)>
        349d04:	e58d0000 	str	r0, [sp]
        349d08:	e1a0200d 	mov	r2, sp
        349d0c:	e59f10cc 	ldr	r1, [pc, #cc]	; 349de0 <AddNewSoupIndexes__FRC6RefVarN21+0x108>
        349d10:	e1a00004 	mov	r0, r4
        349d14:	eb61f193 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        349d18:	e24dd004 	sub	sp, sp, #4	; 0x4
        349d1c:	e59f20c0 	ldr	r2, [pc, #c0]	; 349de4 <AddNewSoupIndexes__FRC6RefVarN21+0x10c>
        349d20:	e1a01006 	mov	r1, r6
        349d24:	e1a00004 	mov	r0, r4
        349d28:	eb5c0a43 	bl	1a4c63c <$NewIndexDesc__FRC6RefVarN21>
        349d2c:	eb61e106 	bl	1bc214c <$AllocateRefHandle(long)>
        349d30:	e58d0000 	str	r0, [sp]
        349d34:	e1a0100d 	mov	r1, sp
        349d38:	e28d0004 	add	r0, sp, #4	; 0x4
        349d3c:	eb61e0f9 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        349d40:	e5950000 	ldr	r0, [r5]
        349d44:	e5900000 	ldr	r0, [r0]
        349d48:	e3300002 	teq	r0, #2	; 0x2
        349d4c:	0a00001a 	beq	349dbc <AddNewSoupIndexes__FRC6RefVarN21+0xe4>
        349d50:	eb61ed55 	bl	1bc52ac <$Length(long)>
        349d54:	e1a08000 	mov	r8, r0
        349d58:	e3a07000 	mov	r7, #0	; 0x0
        349d5c:	e3500000 	cmp	r0, #0	; 0x0
        349d60:	da000015 	ble	349dbc <AddNewSoupIndexes__FRC6RefVarN21+0xe4>
        349d64:	e24dd004 	sub	sp, sp, #4	; 0x4
        349d68:	e5950000 	ldr	r0, [r5]
        349d6c:	e5900000 	ldr	r0, [r0]
        349d70:	e1a01007 	mov	r1, r7
        349d74:	eb61e936 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        349d78:	eb61e0f3 	bl	1bc214c <$AllocateRefHandle(long)>
        349d7c:	e58d0000 	str	r0, [sp]
        349d80:	e1a0200d 	mov	r2, sp
        349d84:	e1a01006 	mov	r1, r6
        349d88:	e1a00004 	mov	r0, r4
        349d8c:	eb5c0a2a 	bl	1a4c63c <$NewIndexDesc__FRC6RefVarN21>
        349d90:	e59d1004 	ldr	r1, [sp, #4]
        349d94:	e5810000 	str	r0, [r1]
        349d98:	e59d0000 	ldr	r0, [sp]
        349d9c:	eb61e506 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        349da0:	e28d1004 	add	r1, sp, #4	; 0x4
        349da4:	e28d0008 	add	r0, sp, #8	; 0x8
        349da8:	eb61e0de 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        349dac:	e28dd004 	add	sp, sp, #4	; 0x4
        349db0:	e2877001 	add	r7, r7, #1	; 0x1
        349db4:	e1570008 	cmp	r7, r8
        349db8:	baffffe9 	blt	349d64 <AddNewSoupIndexes__FRC6RefVarN21+0x8c>
        349dbc:	e59d0004 	ldr	r0, [sp, #4]
        349dc0:	e5904000 	ldr	r4, [r0]
        349dc4:	e59d0000 	ldr	r0, [sp]
        349dc8:	eb61e4fb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        349dcc:	e59d0004 	ldr	r0, [sp, #4]
        349dd0:	eb61e4f9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        349dd4:	e1a00004 	mov	r0, r4
        349dd8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        349ddc:	00681f10 	rsbeq	r1, r8, r0, lsl pc
        349de0:	006831c8 	rsbeq	r3, r8, r8, asr #3
        349de4:	00680938 	rsbeq	r0, r8, r8, lsr r9
    */
}

/**
 * Symbol: AddTag__FRC6RefVarT1
 * Address: 0034a154
 */
void globals::AddTag() {
    /*
        34a154:	e1a0c00d 	mov	ip, sp
        34a158:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        34a15c:	e24cb004 	sub	fp, ip, #4	; 0x4
        34a160:	e1a04000 	mov	r4, r0
        34a164:	e1a05001 	mov	r5, r1
        34a168:	e3a00002 	mov	r0, #2	; 0x2
        34a16c:	eb61dff6 	bl	1bc214c <$AllocateRefHandle(long)>
        34a170:	e1a07000 	mov	r7, r0
        34a174:	e3e08000 	mvn	r8, #0	; 0x0
        34a178:	e5940000 	ldr	r0, [r4]
        34a17c:	e5900000 	ldr	r0, [r0]
        34a180:	eb61ec49 	bl	1bc52ac <$Length(long)>
        34a184:	e2506001 	subs	r6, r0, #1	; 0x1
        34a188:	e3a09000 	mov	r9, #0	; 0x0
        34a18c:	4a000012 	bmi	34a1dc <AddTag__FRC6RefVarT1+0x88>
        34a190:	e5940000 	ldr	r0, [r4]
        34a194:	e5900000 	ldr	r0, [r0]
        34a198:	e1a01006 	mov	r1, r6
        34a19c:	eb61e82c 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        34a1a0:	e5870000 	str	r0, [r7]
        34a1a4:	e3300002 	teq	r0, #2	; 0x2
        34a1a8:	0a000008 	beq	34a1d0 <AddTag__FRC6RefVarT1+0x7c>
        34a1ac:	e5951000 	ldr	r1, [r5]
        34a1b0:	e5911000 	ldr	r1, [r1]
        34a1b4:	eb61e81d 	bl	1bc4230 <$EQRef__FlT1>
        34a1b8:	e3300000 	teq	r0, #0	; 0x0
        34a1bc:	0a000004 	beq	34a1d4 <AddTag__FRC6RefVarT1+0x80>
        34a1c0:	e1a00007 	mov	r0, r7
        34a1c4:	eb61e3fc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        34a1c8:	e1a00009 	mov	r0, r9
        34a1cc:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        34a1d0:	e1a08006 	mov	r8, r6
        34a1d4:	e2566001 	subs	r6, r6, #1	; 0x1
        34a1d8:	5affffec 	bpl	34a190 <AddTag__FRC6RefVarT1+0x3c>
        34a1dc:	e24dd004 	sub	sp, sp, #4	; 0x4
        34a1e0:	e1a00005 	mov	r0, r5
        34a1e4:	eb61e400 	bl	1bc31ec <$EnsureInternal(RefVar const &)>
        34a1e8:	eb61dfd7 	bl	1bc214c <$AllocateRefHandle(long)>
        34a1ec:	e3580000 	cmp	r8, #0	; 0x0
        34a1f0:	e58d0000 	str	r0, [sp]
        34a1f4:	ba000006 	blt	34a214 <AddTag__FRC6RefVarT1+0xc0>
        34a1f8:	e5940000 	ldr	r0, [r4]
        34a1fc:	e5900000 	ldr	r0, [r0]
        34a200:	e59d1000 	ldr	r1, [sp]
        34a204:	e5912000 	ldr	r2, [r1]
        34a208:	e1a01008 	mov	r1, r8
        34a20c:	eb61f051 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        34a210:	ea000002 	b	34a220 <AddTag__FRC6RefVarT1+0xcc>
        34a214:	e1a0100d 	mov	r1, sp
        34a218:	e1a00004 	mov	r0, r4
        34a21c:	eb61dfc1 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        34a220:	e3a04001 	mov	r4, #1	; 0x1
        34a224:	e59d0000 	ldr	r0, [sp]
        34a228:	eb61e3e3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        34a22c:	e1a00007 	mov	r0, r7
        34a230:	eb61e3e1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        34a234:	e1a00004 	mov	r0, r4
        34a238:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: AlterTagsIndex__FUcR10TSoupIndexUlRC6RefVarN24
 * Address: 0034e7f0
 */
void globals::AlterTagsIndex() {
    /*
        34e7f0:	e1a0c00d 	mov	ip, sp
        34e7f4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        34e7f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        34e7fc:	e1a05001 	mov	r5, r1
        34e800:	e1a06002 	mov	r6, r2
        34e804:	e1a04003 	mov	r4, r3
        34e808:	e20080ff 	and	r8, r0, #255	; 0xff
        34e80c:	e59b9008 	ldr	r9, [fp, #8]
        34e810:	e59ba004 	ldr	sl, [fp, #4]
        34e814:	e5930000 	ldr	r0, [r3]
        34e818:	e5900000 	ldr	r0, [r0]
        34e81c:	eb61daa0 	bl	1bc52a4 <$IsSymbol(long)>
        34e820:	e3300000 	teq	r0, #0	; 0x0
        34e824:	1a000008 	bne	34e84c <AlterTagsIndex__FUcR10TSoupIndexUlRC6RefVarN24+0x5c>
        34e828:	e1a00004 	mov	r0, r4
        34e82c:	eb629456 	bl	1bf398c <$IsArray(RefVar const &)>
        34e830:	e3300000 	teq	r0, #0	; 0x0
        34e834:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        34e838:	e5940000 	ldr	r0, [r4]
        34e83c:	e5900000 	ldr	r0, [r0]
        34e840:	eb61da99 	bl	1bc52ac <$Length(long)>
        34e844:	e3500000 	cmp	r0, #0	; 0x0
        34e848:	d91baff0 	ldmledb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        34e84c:	e24dd050 	sub	sp, sp, #80	; 0x50
        34e850:	e3a07000 	mov	r7, #0	; 0x0
        34e854:	e5cd7001 	strb	r7, [sp, #1]
        34e858:	e5cd7000 	strb	r7, [sp]
        34e85c:	e1a01006 	mov	r1, r6
        34e860:	e1a0000d 	mov	r0, sp
        34e864:	ebfe6b95 	bl	2e96c0 <SKey::operator=(long)>
        34e868:	e24dd050 	sub	sp, sp, #80	; 0x50
        34e86c:	e5cd7001 	strb	r7, [sp, #1]
        34e870:	e5cd7000 	strb	r7, [sp]
        34e874:	e1a0200d 	mov	r2, sp
        34e878:	e1a01004 	mov	r1, r4
        34e87c:	e1a00009 	mov	r0, r9
        34e880:	eb5be6e0 	bl	1a48408 <$EncodeTags__FRC6RefVarT1P8TagsBits>
        34e884:	e3300000 	teq	r0, #0	; 0x0
        34e888:	1a000006 	bne	34e8a8 <AlterTagsIndex__FUcR10TSoupIndexUlRC6RefVarN24+0xb8>
        34e88c:	e1a01004 	mov	r1, r4
        34e890:	e1a0000a 	mov	r0, sl
        34e894:	eb5bf76d 	bl	1a4c650 <$PlainSoupAddTags>
        34e898:	e1a0200d 	mov	r2, sp
        34e89c:	e1a01004 	mov	r1, r4
        34e8a0:	e1a00009 	mov	r0, r9
        34e8a4:	eb5be6d7 	bl	1a48408 <$EncodeTags__FRC6RefVarT1P8TagsBits>
        34e8a8:	e3380000 	teq	r8, #0	; 0x0
        34e8ac:	e1a0200d 	mov	r2, sp
        34e8b0:	e28d1050 	add	r1, sp, #80	; 0x50
        34e8b4:	e1a00005 	mov	r0, r5
        34e8b8:	0a000001 	beq	34e8c4 <AlterTagsIndex__FUcR10TSoupIndexUlRC6RefVarN24+0xd4>
        34e8bc:	eb61ce18 	bl	1bc2124 <TSoupIndex::$Add(SKey *, SKey *)>
        34e8c0:	ea000000 	b	34e8c8 <AlterTagsIndex__FUcR10TSoupIndexUlRC6RefVarN24+0xd8>
        34e8c4:	eb61d238 	bl	1bc31ac <TSoupIndex::$Delete(SKey *, SKey *)>
        34e8c8:	e3500000 	cmp	r0, #0	; 0x0
        34e8cc:	c3a0006a 	movgt	r0, #106	; 0x6a
        34e8d0:	c2400b2f 	subgt	r0, r0, #48128	; 0xbc00
        34e8d4:	ca000000 	bgt	34e8dc <AlterTagsIndex__FUcR10TSoupIndexUlRC6RefVarN24+0xec>
        34e8d8:	0a000004 	beq	34e8f0 <AlterTagsIndex__FUcR10TSoupIndexUlRC6RefVarN24+0x100>
        34e8dc:	e1a01000 	mov	r1, r0
        34e8e0:	e59f000c 	ldr	r0, [pc, #c]	; 34e8f4 <AlterTagsIndex__FUcR10TSoupIndexUlRC6RefVarN24+0x104>
        34e8e4:	e5900000 	ldr	r0, [r0]
        34e8e8:	e3a02000 	mov	r2, #0	; 0x0
        34e8ec:	eb62522a 	bl	1be319c <$Throw>
        34e8f0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        34e8f4:	003712fc 	ldreqsh	r1, [r7], -ip
    */
}

/**
 * Symbol: AnalyzeLowData(low_type *, PS_point_type *)
 * Address: 0034ed54
 */
AnalyzeLowData(low_type *, PS_point_type *) {
    /*
        34ed54:	e1a0c00d 	mov	ip, sp
        34ed58:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        34ed5c:	e24cb004 	sub	fp, ip, #4	; 0x4
        34ed60:	e1a04000 	mov	r4, r0
        34ed64:	e1a05001 	mov	r5, r1
        34ed68:	e3a07001 	mov	r7, #1	; 0x1
        34ed6c:	eb5f2fe4 	bl	1b1ad04 <$GetLowDataRect(low_type *)>
        34ed70:	e1a00004 	mov	r0, r4
        34ed74:	eb5f2bd7 	bl	1b19cd8 <$Errorprov(low_type *)>
        34ed78:	e1a01004 	mov	r1, r4
        34ed7c:	e59f6168 	ldr	r6, [pc, #168]	; 34eeec <AnalyzeLowData(low_type *, PS_point_type *)+0x198>
        34ed80:	e5960000 	ldr	r0, [r6]
        34ed84:	e1a00840 	mov	r0, r0, asr #16
        34ed88:	eb5f3418 	bl	1b1bdf0 <$PreFilt(short, low_type *)>
        34ed8c:	e3300000 	teq	r0, #0	; 0x0
        34ed90:	1a000087 	bne	34efb4 <AnalyzeLowData(low_type *, PS_point_type *)+0x260>
        34ed94:	e1a00004 	mov	r0, r4
        34ed98:	e3a01001 	mov	r1, #1	; 0x1
        34ed9c:	eb5f618d 	bl	1b273d8 <$InitGroupsBorder(low_type *, short)>
        34eda0:	e3300000 	teq	r0, #0	; 0x0
        34eda4:	1a000082 	bne	34efb4 <AnalyzeLowData(low_type *, PS_point_type *)+0x260>
        34eda8:	e1a00004 	mov	r0, r4
        34edac:	eb5f2bb8 	bl	1b19c94 <$DefLineThresholds(low_type *)>
        34edb0:	e1a00004 	mov	r0, r4
        34edb4:	e3a01e19 	mov	r1, #400	; 0x190
        34edb8:	eb5f48b1 	bl	1b21084 <$InitSpecl(low_type *, short)>
        34edbc:	e3a03007 	mov	r3, #7	; 0x7
        34edc0:	e3a02000 	mov	r2, #0	; 0x0
        34edc4:	e596000a 	ldr	r0, [r6, #10]
        34edc8:	e1a00840 	mov	r0, r0, asr #16
        34edcc:	e1a010c0 	mov	r1, r0, asr #1
        34edd0:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        34edd4:	e596300c 	ldr	r3, [r6, #12]
        34edd8:	e1a03843 	mov	r3, r3, asr #16
        34eddc:	e1a02003 	mov	r2, r3
        34ede0:	e1a01000 	mov	r1, r0
        34ede4:	e1a00004 	mov	r0, r4
        34ede8:	eb5f404e 	bl	1b1ef28 <$Extr__FP8low_typesN52>
        34edec:	e28dd00c 	add	sp, sp, #12	; 0xc
        34edf0:	e1a00004 	mov	r0, r4
        34edf4:	eb5f4cc5 	bl	1b22110 <$OperateSpeclArray(low_type *)>
        34edf8:	e5941046 	ldr	r1, [r4, #70]
        34edfc:	e1a01841 	mov	r1, r1, asr #16
        34ee00:	e5940040 	ldr	r0, [r4, #64]
        34ee04:	eb5f380d 	bl	1b1ce40 <$Sort_specl(SPEC_TYPE *, short)>
        34ee08:	e3300000 	teq	r0, #0	; 0x0
        34ee0c:	1a000068 	bne	34efb4 <AnalyzeLowData(low_type *, PS_point_type *)+0x260>
        34ee10:	e1a00004 	mov	r0, r4
        34ee14:	e3a01001 	mov	r1, #1	; 0x1
        34ee18:	eb5f616e 	bl	1b273d8 <$InitGroupsBorder(low_type *, short)>
        34ee1c:	e3300000 	teq	r0, #0	; 0x0
        34ee20:	1a000063 	bne	34efb4 <AnalyzeLowData(low_type *, PS_point_type *)+0x260>
        34ee24:	e1a00004 	mov	r0, r4
        34ee28:	eb5f4cbd 	bl	1b22124 <$Pict(low_type *)>
        34ee2c:	e3300000 	teq	r0, #0	; 0x0
        34ee30:	1a00005f 	bne	34efb4 <AnalyzeLowData(low_type *, PS_point_type *)+0x260>
        34ee34:	e1a00004 	mov	r0, r4
        34ee38:	eb5f50e2 	bl	1b231c8 <$Surgeon(low_type *)>
        34ee3c:	e5961000 	ldr	r1, [r6]
        34ee40:	e1a01841 	mov	r1, r1, asr #16
        34ee44:	e1a00004 	mov	r0, r4
        34ee48:	e3a02001 	mov	r2, #1	; 0x1
        34ee4c:	eb5f403c 	bl	1b1ef44 <$Filt__FP8low_typesT2>
        34ee50:	e3300000 	teq	r0, #0	; 0x0
        34ee54:	1a000056 	bne	34efb4 <AnalyzeLowData(low_type *, PS_point_type *)+0x260>
        34ee58:	e1a00004 	mov	r0, r4
        34ee5c:	e3a01001 	mov	r1, #1	; 0x1
        34ee60:	eb5f615c 	bl	1b273d8 <$InitGroupsBorder(low_type *, short)>
        34ee64:	e3300000 	teq	r0, #0	; 0x0
        34ee68:	1a000051 	bne	34efb4 <AnalyzeLowData(low_type *, PS_point_type *)+0x260>
        34ee6c:	e5940000 	ldr	r0, [r4]
        34ee70:	e5902096 	ldr	r2, [r0, #150]
        34ee74:	e1a02842 	mov	r2, r2, asr #16
        34ee78:	e1a03005 	mov	r3, r5
        34ee7c:	e284102c 	add	r1, r4, #44	; 0x2c
        34ee80:	e8910003 	ldmia	r1, {r0, r1}
        34ee84:	eb5f5d33 	bl	1b26358 <$trace_to_xy__FPsT1iP13PS_point_type>
        34ee88:	e3a03002 	mov	r3, #2	; 0x2
        34ee8c:	e3a02005 	mov	r2, #5	; 0x5
        34ee90:	e3e01001 	mvn	r1, #1	; 0x1
        34ee94:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        34ee98:	e596100a 	ldr	r1, [r6, #10]
        34ee9c:	e1a01841 	mov	r1, r1, asr #16
        34eea0:	e1a00004 	mov	r0, r4
        34eea4:	e3e03001 	mvn	r3, #1	; 0x1
        34eea8:	e3e02001 	mvn	r2, #1	; 0x1
        34eeac:	eb5f401d 	bl	1b1ef28 <$Extr__FP8low_typesN52>
        34eeb0:	e28dd00c 	add	sp, sp, #12	; 0xc
        34eeb4:	e3300000 	teq	r0, #0	; 0x0
        34eeb8:	1a00003d 	bne	34efb4 <AnalyzeLowData(low_type *, PS_point_type *)+0x260>
        34eebc:	e5940000 	ldr	r0, [r4]
        34eec0:	e5901090 	ldr	r1, [r0, #144]
        34eec4:	e1a01781 	mov	r1, r1, lsl #15
        34eec8:	e1b01fa1 	movs	r1, r1, lsr #31
        34eecc:	1a000003 	bne	34eee0 <AnalyzeLowData(low_type *, PS_point_type *)+0x18c>
        34eed0:	e5900092 	ldr	r0, [r0, #146]
        34eed4:	e1a00820 	mov	r0, r0, lsr #16
        34eed8:	e3300002 	teq	r0, #2	; 0x2
        34eedc:	1a000003 	bne	34eef0 <AnalyzeLowData(low_type *, PS_point_type *)+0x19c>
        34eee0:	e3a00000 	mov	r0, #0	; 0x0
        34eee4:	e5c4006f 	strb	r0, [r4, #111]
        34eee8:	ea000004 	b	34ef00 <AnalyzeLowData(low_type *, PS_point_type *)+0x1ac>
        34eeec:	003745fc 	ldreqsh	r4, [r7], -ip
        34eef0:	e1a00004 	mov	r0, r4
        34eef4:	eb5f33b4 	bl	1b1bdcc <$measure_slope(low_type *)>
        34eef8:	e5c4006f 	strb	r0, [r4, #111]
        34eefc:	e1a00440 	mov	r0, r0, asr #8
        34ef00:	e5c4006e 	strb	r0, [r4, #110]
        34ef04:	e1a00004 	mov	r0, r4
        34ef08:	eb5f2754 	bl	1b18c60 <$Circle(low_type *)>
        34ef0c:	e3300000 	teq	r0, #0	; 0x0
        34ef10:	1a000027 	bne	34efb4 <AnalyzeLowData(low_type *, PS_point_type *)+0x260>
        34ef14:	e1a00004 	mov	r0, r4
        34ef18:	eb5f273b 	bl	1b18c0c <$angl(low_type *)>
        34ef1c:	e3300000 	teq	r0, #0	; 0x0
        34ef20:	1a000023 	bne	34efb4 <AnalyzeLowData(low_type *, PS_point_type *)+0x260>
        34ef24:	e1a00004 	mov	r0, r4
        34ef28:	eb5f2f74 	bl	1b1ad00 <$FindSideExtr(low_type *)>
        34ef2c:	e3300000 	teq	r0, #0	; 0x0
        34ef30:	0a00001f 	beq	34efb4 <AnalyzeLowData(low_type *, PS_point_type *)+0x260>
        34ef34:	e1a00004 	mov	r0, r4
        34ef38:	eb5f6116 	bl	1b27398 <$Cross(low_type *)>
        34ef3c:	e3300000 	teq	r0, #0	; 0x0
        34ef40:	1a00001b 	bne	34efb4 <AnalyzeLowData(low_type *, PS_point_type *)+0x260>
        34ef44:	e5941046 	ldr	r1, [r4, #70]
        34ef48:	e1a01841 	mov	r1, r1, asr #16
        34ef4c:	e5940040 	ldr	r0, [r4, #64]
        34ef50:	eb5f2748 	bl	1b18c78 <$Clear_specl(SPEC_TYPE *, short)>
        34ef54:	e3300000 	teq	r0, #0	; 0x0
        34ef58:	1a000015 	bne	34efb4 <AnalyzeLowData(low_type *, PS_point_type *)+0x260>
        34ef5c:	e1a00004 	mov	r0, r4
        34ef60:	eb5f338a 	bl	1b1bd90 <$lk_begin(low_type *)>
        34ef64:	e3300000 	teq	r0, #0	; 0x0
        34ef68:	1a000011 	bne	34efb4 <AnalyzeLowData(low_type *, PS_point_type *)+0x260>
        34ef6c:	e1a00004 	mov	r0, r4
        34ef70:	eb5f3387 	bl	1b1bd94 <$lk_cross(low_type *)>
        34ef74:	e1a00004 	mov	r0, r4
        34ef78:	eb5f3386 	bl	1b1bd98 <$lk_duga(low_type *)>
        34ef7c:	e1a00004 	mov	r0, r4
        34ef80:	eb5f231c 	bl	1b17bf8 <$Adjust_I_U(low_type *)>
        34ef84:	e1a00004 	mov	r0, r4
        34ef88:	eb5f37b9 	bl	1b1ce74 <$xt_st_zz(low_type *)>
        34ef8c:	e3300000 	teq	r0, #0	; 0x0
        34ef90:	1a000007 	bne	34efb4 <AnalyzeLowData(low_type *, PS_point_type *)+0x260>
        34ef94:	e1a00004 	mov	r0, r4
        34ef98:	eb5f5078 	bl	1b23180 <$RestoreColons(low_type *)>
        34ef9c:	e3300000 	teq	r0, #0	; 0x0
        34efa0:	1a000003 	bne	34efb4 <AnalyzeLowData(low_type *, PS_point_type *)+0x260>
        34efa4:	e1a00004 	mov	r0, r4
        34efa8:	eb5f4c61 	bl	1b22134 <$PostFindSideExtr(low_type *)>
        34efac:	e3300000 	teq	r0, #0	; 0x0
        34efb0:	13a07000 	movne	r7, #0	; 0x0
        34efb4:	e1a00007 	mov	r0, r7
        34efb8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        34efbc:	e59f0004 	ldr	r0, [pc, #4]	; 34efc8 <AnalyzeLowData(low_type *, PS_point_type *)+0x274>
        34efc0:	e5900200 	ldr	r0, [r0, #512]
        34efc4:	eaff28f0 	b	31938c <AcquireStdioMutex>
        34efc8:	0c105704 	ldceq	7, cr5, [r0], -#16
        34efcc:	e59f0004 	ldr	r0, [pc, #4]	; 34efd8 <AnalyzeLowData(low_type *, PS_point_type *)+0x284>
        34efd0:	e5900200 	ldr	r0, [r0, #512]
        34efd4:	eaff28ee 	b	319394 <ReleaseStdioMutex>
        34efd8:	0c105704 	ldceq	7, cr5, [r0], -#16
    */
}

/**
 * Symbol: AskForFlush(unsigned char)
 * Address: 00353ba0
 */
AskForFlush(unsigned char) {
    /*
        353ba0:	e59f1004 	ldr	r1, [pc, #4]	; 353bac <AskForFlush(unsigned char)+0xc>
        353ba4:	e5c1000c 	strb	r0, [r1, #12]
        353ba8:	e1a0f00e 	mov	pc, lr
        353bac:	0c10596c 	ldceq	9, cr5, [r0], -#432
    */
}

/**
 * Symbol: AdjustSoupsSignatures(void)
 * Address: 0035570c
 */
AdjustSoupsSignatures(void) {
    /*
        35570c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: AdjustSymbolTableSize(void)
 * Address: 003587d0
 */
AdjustSymbolTableSize(void) {
    /*
        3587d0:	e3a0101b 	mov	r1, #27	; 0x1b
        3587d4:	e3a00020 	mov	r0, #32	; 0x20
        3587d8:	e59f302c 	ldr	r3, [pc, #2c]	; 35880c <AdjustSymbolTableSize(void)+0x3c>
        3587dc:	e5932018 	ldr	r2, [r3, #24]
        3587e0:	e1a02082 	mov	r2, r2, lsl #1
        3587e4:	e3520020 	cmp	r2, #32	; 0x20
        3587e8:	da000003 	ble	3587fc <AdjustSymbolTableSize(void)+0x2c>
        3587ec:	e1a00080 	mov	r0, r0, lsl #1
        3587f0:	e2411001 	sub	r1, r1, #1	; 0x1
        3587f4:	e1500002 	cmp	r0, r2
        3587f8:	bafffffb 	blt	3587ec <AdjustSymbolTableSize(void)+0x1c>
        3587fc:	e5b32004 	ldr	r2, [r3, #4]!
        358800:	e1300002 	teq	r0, r2
        358804:	1a5bfcde 	bne	1a57b84 <$ResizeSymbolTable__FlT1>
        358808:	e1a0f00e 	mov	pc, lr
        35880c:	0c10599c 	ldceq	9, cr5, [r0], -#624
    */
}

/**
 * Symbol: AddToUnionSoup__FRC6RefVarT1
 * Address: 003602c4
 */
void globals::AddToUnionSoup() {
    /*
        3602c4:	e1a0c00d 	mov	ip, sp
        3602c8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        3602cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        3602d0:	e1a04000 	mov	r4, r0
        3602d4:	e1a05001 	mov	r5, r1
        3602d8:	e24dd004 	sub	sp, sp, #4	; 0x4
        3602dc:	e3a00002 	mov	r0, #2	; 0x2
        3602e0:	eb618799 	bl	1bc214c <$AllocateRefHandle(long)>
        3602e4:	e40d0004 	str	r0, [sp], -#4
        3602e8:	e1a00004 	mov	r0, r4
        3602ec:	eb6193ea 	bl	1bc529c <$IsString(RefVar const &)>
        3602f0:	e3300000 	teq	r0, #0	; 0x0
        3602f4:	0a000014 	beq	36034c <AddToUnionSoup__FRC6RefVarT1+0x88>
        3602f8:	e24dd004 	sub	sp, sp, #4	; 0x4
        3602fc:	e59f0044 	ldr	r0, [pc, #44]	; 360348 <AddToUnionSoup__FRC6RefVarT1+0x84>
        360300:	e5900000 	ldr	r0, [r0]
        360304:	eb618790 	bl	1bc214c <$AllocateRefHandle(long)>
        360308:	e58d0000 	str	r0, [sp]
        36030c:	e1a0000d 	mov	r0, sp
        360310:	e1a01004 	mov	r1, r4
        360314:	eb5b7b11 	bl	1a3ef60 <$FindSoupInCache__FRC6RefVarT1>
        360318:	e59d1008 	ldr	r1, [sp, #8]
        36031c:	e5810000 	str	r0, [r1]
        360320:	e59d0000 	ldr	r0, [sp]
        360324:	eb618ba4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        360328:	e59d0008 	ldr	r0, [sp, #8]
        36032c:	e5900000 	ldr	r0, [r0]
        360330:	e3300002 	teq	r0, #2	; 0x2
        360334:	128dd004 	addne	sp, sp, #4	; 0x4
        360338:	1a000007 	bne	36035c <AddToUnionSoup__FRC6RefVarT1+0x98>
        36033c:	e59d0008 	ldr	r0, [sp, #8]
        360340:	eb618b9d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        360344:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        360348:	0c105700 	ldceq	7, cr5, [r0]
        36034c:	e5940000 	ldr	r0, [r4]
        360350:	e5900000 	ldr	r0, [r0]
        360354:	e59d1004 	ldr	r1, [sp, #4]
        360358:	e5810000 	str	r0, [r1]
        36035c:	e59d0004 	ldr	r0, [sp, #4]
        360360:	e5900000 	ldr	r0, [r0]
        360364:	e59f1084 	ldr	r1, [pc, #84]	; 3603f0 <AddToUnionSoup__FRC6RefVarT1+0x12c>
        360368:	e5911000 	ldr	r1, [r1]
        36036c:	e5911000 	ldr	r1, [r1]
        360370:	eb618fba 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        360374:	eb618774 	bl	1bc214c <$AllocateRefHandle(long)>
        360378:	e58d0000 	str	r0, [sp]
        36037c:	e1a0000d 	mov	r0, sp
        360380:	e1a01005 	mov	r1, r5
        360384:	eb618767 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        360388:	e59d0000 	ldr	r0, [sp]
        36038c:	eb618b8a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        360390:	e28d0004 	add	r0, sp, #4	; 0x4
        360394:	ebfffeb1 	bl	35fe60 <StoreConvertSoupSortTables+0x1c4>
        360398:	e1b04000 	movs	r4, r0
        36039c:	e24dd004 	sub	sp, sp, #4	; 0x4
        3603a0:	0a00000b 	beq	3603d4 <AddToUnionSoup__FRC6RefVarT1+0x110>
        3603a4:	e1a00104 	mov	r0, r4, lsl #2
        3603a8:	eb618767 	bl	1bc214c <$AllocateRefHandle(long)>
        3603ac:	e58d0000 	str	r0, [sp]
        3603b0:	e1a0200d 	mov	r2, sp
        3603b4:	e59f1038 	ldr	r1, [pc, #38]	; 3603f4 <AddToUnionSoup__FRC6RefVarT1+0x130>
        3603b8:	e28d0008 	add	r0, sp, #8	; 0x8
        3603bc:	eb6197e9 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        3603c0:	e59d0000 	ldr	r0, [sp]
        3603c4:	eb618b7c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3603c8:	e3340000 	teq	r4, #0	; 0x0
        3603cc:	13a01003 	movne	r1, #3	; 0x3
        3603d0:	1a000000 	bne	3603d8 <AddToUnionSoup__FRC6RefVarT1+0x114>
        3603d4:	e3a01000 	mov	r1, #0	; 0x0
        3603d8:	e1a02005 	mov	r2, r5
        3603dc:	e28d0008 	add	r0, sp, #8	; 0x8
        3603e0:	ebfdb6d0 	bl	2cdf28 <EachSoupCursorDo(RefVar const &, long, long)>
        3603e4:	e5bd0008 	ldr	r0, [sp, #8]!
        3603e8:	eb618b73 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3603ec:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        3603f0:	00684780 	rsbeq	r4, r8, r0, lsl #15
        3603f4:	00682c90 	streqb	r2, [r8], -#192
    */
}

/**
 * Symbol: ArProbEncodeLu1
 * Address: 0036340c
 */
void globals::ArProbEncodeLu1() {
    /*
        36340c:	7ffe0c2f 	swivc	0x00fe0c2f
        363410:	0ad40a09 	beq	ff865c3c <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfdc553e4>
        363414:	097a090a 	ldmeqdb	sl!, {r1, r3, r8, fp}^
        363418:	08af0862 	stmeqia	pc!, {r1, r5, r6, fp}
        36341c:	081f07e4 	ldmeqda	pc, {r2, r5, r6, r7, r8, r9, sl}
        363420:	07af0780 	streq	r0, [pc, r0, lsl #15]!
        363424:	0754072c 	ldreqb	r0, [r4, -ip, lsr #14]
        363428:	070706e5 	streq	r0, [r7, -r5, ror #13]
        36342c:	06c406a6 	streqb	r0, [r4], r6, lsr #13
        363430:	0689066e 	streq	r0, [r9], lr, ror #12
        363434:	0655063c 	undefined
        363438:	0625060f 	streqt	r0, [r5], -pc, lsl #12
        36343c:	05fa05e5 	ldreqb	r0, [sl, #1509]!
        363440:	05d205bf 	ldreqb	r0, [r2, #1471]
        363444:	05ad059b 	streq	r0, [sp, #1435]!
        363448:	058a057a 	streq	r0, [sl, #1402]
        36344c:	056a055a 	streqb	r0, [sl, -#1370]!
        363450:	054b053d 	streqb	r0, [fp, -#1341]
        363454:	052f0521 	streq	r0, [pc, #fffffadf]!	; 362f3b <xrw_algs(xrdata_type *,  (*)[1])(RWG_type *, rc_type *)+0x33>
        363458:	05140507 	ldreq	r0, [r4, -#1287]
        36345c:	04fa04ee 	ldreqbt	r0, [sl], #1262
        363460:	04e204d6 	streqbt	r0, [r2], #1238
        363464:	04cb04bf 	streqb	r0, [fp], #1215
        363468:	04b404aa 	ldreqt	r0, [r4], #1194
        36346c:	049f0495 	ldreq	r0, [pc], #495	; 363474 <ArProbEncodeLu1+0x68>
        363470:	048b0481 	streq	r0, [fp], #1153
        363474:	0477046e 	ldreqbt	r0, [r7], -#1134
        363478:	0464045b 	streqbt	r0, [r4], -#1115
        36347c:	04520449 	ldreqb	r0, [r2], -#1097
        363480:	04400438 	streqb	r0, [r0], -#1080
        363484:	042f0427 	streqt	r0, [pc], #427	; 36348c <ArProbEncodeLu1+0x80>
        363488:	041f0417 	ldreq	r0, [pc], #417	; 363490 <ArProbEncodeLu1+0x84>
        36348c:	040f0407 	streq	r0, [pc], #407	; 363494 <ArProbEncodeLu1+0x88>
        363490:	040003f8 	streq	r0, [r0], -#1016
        363494:	03f103ea 	mvneqs	r0, #-1476395005	; 0xa8000003
        363498:	03e203db 	mvneq	r0, #1811939331	; 0x6c000003
        36349c:	03d403cd 	biceqs	r0, r4, #872415235	; 0x34000003
        3634a0:	03c703c0 	biceq	r0, r7, #3	; 0x3
        3634a4:	03b903b3 	moveqs	r0, #-872415230	; 0xcc000002
        3634a8:	03ac03a6 	moveq	r0, #-1744830462	; 0x98000002
        3634ac:	03a00399 	moveq	r0, #1677721602	; 0x64000002
        3634b0:	0393038d 	orreqs	r0, r3, #872415234	; 0x34000002
        3634b4:	03870381 	orreq	r0, r7, #67108866	; 0x4000002
        3634b8:	037b0376 	cmneq	fp, #-671088639	; 0xd8000001
        3634bc:	0370036a 	cmneq	r0, #-1476395007	; 0xa8000001
        3634c0:	0365035f 	cmneq	r5, #2080374785	; 0x7c000001
        3634c4:	035a0354 	cmpeq	sl, #1342177281	; 0x50000001
        3634c8:	034f034a 	cmpeq	pc, #671088641	; 0x28000001
        3634cc:	0344033f 	cmpeq	r4, #-67108864	; 0xfc000000
        3634d0:	033a0335 	teqeq	sl, #-738197504	; 0xd4000000
        3634d4:	0330032b 	teqeq	r0, #-1409286144	; 0xac000000
        3634d8:	03260321 	teqeq	r6, #-2080374784	; 0x84000000
        3634dc:	031c0318 	tsteq	ip, #1610612736	; 0x60000000
        3634e0:	0313030e 	tsteq	r3, #939524096	; 0x38000000
        3634e4:	030a0305 	tsteq	sl, #335544320	; 0x14000000
        3634e8:	030002fc 	tsteq	r0, #-1073741809	; 0xc000000f
        3634ec:	02f702f3 	rsceqs	r0, r7, #805306383	; 0x3000000f
        3634f0:	02ef02ea 	rsceq	r0, pc, #-1610612722	; 0xa000000e
        3634f4:	02e602e2 	rsceq	r0, r6, #536870926	; 0x2000000e
        3634f8:	02dd02d9 	sbceqs	r0, sp, #-1879048179	; 0x9000000d
        3634fc:	02d502d1 	sbceqs	r0, r5, #268435469	; 0x1000000d
        363500:	02cd02c9 	sbceq	r0, sp, #-1879048180	; 0x9000000c
        363504:	02c502c1 	sbceq	r0, r5, #268435468	; 0x1000000c
        363508:	02bd02b9 	adceqs	r0, sp, #-1879048181	; 0x9000000b
        36350c:	02b502b1 	adceqs	r0, r5, #268435467	; 0x1000000b
        363510:	02ad02a9 	adceq	r0, sp, #-1879048182	; 0x9000000a
        363514:	02a502a1 	adceq	r0, r5, #268435466	; 0x1000000a
        363518:	029e029a 	addeqs	r0, lr, #-1610612727	; 0xa0000009
        36351c:	02960293 	addeqs	r0, r6, #805306377	; 0x30000009
        363520:	028f028b 	addeq	r0, pc, #-1342177272	; 0xb0000008
        363524:	02880284 	addeq	r0, r8, #1073741832	; 0x40000008
        363528:	0281027d 	addeq	r0, r1, #-805306361	; 0xd0000007
        36352c:	027a0276 	rsbeqs	r0, sl, #1610612743	; 0x60000007
        363530:	0273026f 	rsbeqs	r0, r3, #-268435450	; 0xf0000006
        363534:	026c0269 	rsbeq	r0, ip, #-1879048186	; 0x90000006
        363538:	02650262 	rsbeq	r0, r5, #536870918	; 0x20000006
        36353c:	025f025b 	subeqs	r0, pc, #-1342177275	; 0xb0000005
        363540:	02580255 	subeqs	r0, r8, #1342177285	; 0x50000005
        363544:	0252024f 	subeqs	r0, r2, #-268435452	; 0xf0000004
        363548:	024b0248 	subeq	r0, fp, #-2147483644	; 0x80000004
        36354c:	02450242 	subeq	r0, r5, #536870916	; 0x20000004
        363550:	023f023c 	eoreqs	r0, pc, #-1073741821	; 0xc0000003
        363554:	02390236 	eoreqs	r0, r9, #1610612739	; 0x60000003
        363558:	02330230 	eoreqs	r0, r3, #3	; 0x3
        36355c:	022d022a 	eoreq	r0, sp, #-1610612734	; 0xa0000002
        363560:	02270224 	eoreq	r0, r7, #1073741826	; 0x40000002
        363564:	0221021e 	eoreq	r0, r1, #-536870911	; 0xe0000001
        363568:	021b0218 	andeqs	r0, fp, #-2147483647	; 0x80000001
        36356c:	02150213 	andeqs	r0, r5, #805306369	; 0x30000001
        363570:	0210020d 	andeqs	r0, r0, #-805306368	; 0xd0000000
        363574:	020a0207 	andeq	r0, sl, #1879048192	; 0x70000000
        363578:	02050202 	andeq	r0, r5, #536870912	; 0x20000000
        36357c:	01ff01fc 	ldreqsh	r0, [pc, #1c]	; 3635a0 <ArProbEncodeLu1+0x194>
        363580:	01fa01f7 	ldreqsh	r0, [sl, #23]!
        363584:	01f401f2 	ldreqsh	r0, [r4, #18]!
        363588:	01ef01ed 	mvneq	r0, sp, ror #3
        36358c:	01ea01e7 	mvneq	r0, r7, ror #3
        363590:	01e501e2 	mvneq	r0, r2, ror #3
        363594:	01e001dd 	ldreqd	r0, [r0, #29]!
        363598:	01db01d8 	ldreqsb	r0, [fp, #24]
        36359c:	01d601d3 	ldreqsb	r0, [r6, #19]
        3635a0:	01d101ce 	biceqs	r0, r1, lr, asr #3
        3635a4:	01cc01c9 	biceq	r0, ip, r9, asr #3
        3635a8:	01c701c4 	biceq	r0, r7, r4, asr #3
        3635ac:	01c201bf 	streqh	r0, [r2, #31]
        3635b0:	01bd01bb 	ldreqh	r0, [sp, fp]!
        3635b4:	01b801b6 	ldreqh	r0, [r8, r6]!
        3635b8:	01b401b1 	ldreqh	r0, [r4, r1]!
        3635bc:	01af01ad 	moveq	r0, sp, lsr #3
        3635c0:	01aa01a8 	moveq	r0, r8, lsr #3
        3635c4:	01a601a4 	moveq	r0, r4, lsr #3
        3635c8:	01a1019f 	streqb	r0, [r1, pc]!
        3635cc:	019d019b 	ldreqb	r0, [sp, fp]
        3635d0:	01980196 	ldreqb	r0, [r8, r6]
        3635d4:	01940192 	ldreqb	r0, [r4, r2]
        3635d8:	0190018d 	orreqs	r0, r0, sp, lsl #3
        3635dc:	018b0189 	orreq	r0, fp, r9, lsl #3
        3635e0:	01870185 	orreq	r0, r7, r5, lsl #3
        3635e4:	01830181 	orreq	r0, r3, r1, lsl #3
        3635e8:	017f017c 	cmneq	pc, ip, ror r1
        3635ec:	017a0178 	cmneq	sl, r8, ror r1
        3635f0:	01760174 	cmneq	r6, r4, ror r1
        3635f4:	01720170 	cmneq	r2, r0, ror r1
        3635f8:	016e016c 	cmneq	lr, ip, ror #2
        3635fc:	016a0168 	cmneq	sl, r8, ror #2
        363600:	01660164 	cmneq	r6, r4, ror #2
        363604:	01620160 	cmneq	r2, r0, ror #2
        363608:	015e015c 	cmpeq	lr, ip, asr r1
        36360c:	015a0158 	cmpeq	sl, r8, asr r1
        363610:	01560154 	cmpeq	r6, r4, asr r1
        363614:	01520150 	cmpeq	r2, r0, asr r1
        363618:	014e014d 	cmpeq	lr, sp, asr #2
        36361c:	014b0149 	cmpeq	fp, r9, asr #2
        363620:	01470145 	cmpeq	r7, r5, asr #2
        363624:	01430141 	cmpeq	r3, r1, asr #2
        363628:	013f013e 	teqeq	pc, lr, lsr r1
        36362c:	013c013a 	teqeq	ip, sl, lsr r1
        363630:	01380136 	teqeq	r8, r6, lsr r1
        363634:	01340133 	teqeq	r4, r3, lsr r1
        363638:	0131012f 	teqeq	r1, pc, lsr #2
        36363c:	012d012b 	teqeq	sp, fp, lsr #2
        363640:	012a0128 	teqeq	sl, r8, lsr #2
        363644:	01260124 	teqeq	r6, r4, lsr #2
        363648:	01230121 	teqeq	r3, r1, lsr #2
        36364c:	011f011d 	tsteq	pc, sp, lsl r1
        363650:	011c011a 	tsteq	ip, sl, lsl r1
        363654:	01180117 	tsteq	r8, r7, lsl r1
        363658:	01150113 	tsteq	r5, r3, lsl r1
        36365c:	01110110 	tsteq	r1, r0, lsl r1
        363660:	010e010c 	tsteq	lr, ip, lsl #2
        363664:	010b0109 	tsteq	fp, r9, lsl #2
        363668:	01070106 	tsteq	r7, r6, lsl #2
        36366c:	01040103 	tsteq	r4, r3, lsl #2
        363670:	010100ff 	streqd	r0, [r1, -pc]
        363674:	00fe00fc 	ldreqsh	r0, [lr], #12
        363678:	00fa00f9 	ldreqsh	r0, [sl], #9
        36367c:	00f700f6 	ldreqsh	r0, [r7], #6
        363680:	00f400f2 	ldreqsh	r0, [r4], #2
        363684:	00f100ef 	rsceqs	r0, r1, pc, ror #1
        363688:	00ee00ec 	rsceq	r0, lr, ip, ror #1
        36368c:	00eb00e9 	rsceq	r0, fp, r9, ror #1
        363690:	00e700e6 	rsceq	r0, r7, r6, ror #1
        363694:	00e400e3 	rsceq	r0, r4, r3, ror #1
        363698:	00e100e0 	rsceq	r0, r1, r0, ror #1
        36369c:	00de00dd 	ldreqsb	r0, [lr], #13
        3636a0:	00db00da 	ldreqsb	r0, [fp], #10
        3636a4:	00d800d7 	ldreqsb	r0, [r8], #7
        3636a8:	00d500d4 	ldreqsb	r0, [r5], #4
        3636ac:	00d200d1 	ldreqsb	r0, [r2], #1
        3636b0:	00cf00ce 	sbceq	r0, pc, lr, asr #1
        3636b4:	00cc00cb 	sbceq	r0, ip, fp, asr #1
        3636b8:	00c900c8 	sbceq	r0, r9, r8, asr #1
        3636bc:	00c600c5 	sbceq	r0, r6, r5, asr #1
        3636c0:	00c300c2 	sbceq	r0, r3, r2, asr #1
        3636c4:	00c100bf 	streqh	r0, [r1], #15
        3636c8:	00be00bc 	ldreqh	r0, [lr], ip
        3636cc:	00bb00b9 	ldreqh	r0, [fp], r9
        3636d0:	00b800b7 	ldreqh	r0, [r8], r7
        3636d4:	00b500b4 	ldreqh	r0, [r5], r4
        3636d8:	00b200b1 	ldreqh	r0, [r2], r1
        3636dc:	00b000ae 	adceqs	r0, r0, lr, lsr #1
        3636e0:	00ad00ab 	adceq	r0, sp, fp, lsr #1
        3636e4:	00aa00a9 	adceq	r0, sl, r9, lsr #1
        3636e8:	00a700a6 	adceq	r0, r7, r6, lsr #1
        3636ec:	00a500a3 	adceq	r0, r5, r3, lsr #1
        3636f0:	00a200a1 	adceq	r0, r2, r1, lsr #1
        3636f4:	009f009e 	umulleqs	r0, pc, lr, r0
        3636f8:	009d009b 	umulleqs	r0, sp, fp, r0
        3636fc:	009a0099 	umulleqs	r0, sl, r9, r0
        363700:	00970096 	umulleqs	r0, r7, r6, r0
        363704:	00950093 	umulleqs	r0, r5, r3, r0
        363708:	00920091 	umulleqs	r0, r2, r1, r0
        36370c:	008f008e 	addeq	r0, pc, lr, lsl #1
        363710:	008d008b 	addeq	r0, sp, fp, lsl #1
        363714:	008a0089 	addeq	r0, sl, r9, lsl #1
        363718:	00880086 	addeq	r0, r8, r6, lsl #1
        36371c:	00850084 	addeq	r0, r5, r4, lsl #1
        363720:	00820081 	addeq	r0, r2, r1, lsl #1
        363724:	0080007f 	addeq	r0, r0, pc, ror r0
        363728:	007d007c 	rsbeqs	r0, sp, ip, ror r0
        36372c:	007b007a 	rsbeqs	r0, fp, sl, ror r0
        363730:	00780077 	rsbeqs	r0, r8, r7, ror r0
        363734:	00760075 	rsbeqs	r0, r6, r5, ror r0
        363738:	00730072 	rsbeqs	r0, r3, r2, ror r0
        36373c:	00710070 	rsbeqs	r0, r1, r0, ror r0
        363740:	006f006d 	rsbeq	r0, pc, sp, rrx
        363744:	006c006b 	rsbeq	r0, ip, fp, rrx
        363748:	006a0069 	rsbeq	r0, sl, r9, rrx
        36374c:	00670066 	rsbeq	r0, r7, r6, rrx
        363750:	00650064 	rsbeq	r0, r5, r4, rrx
        363754:	00630061 	rsbeq	r0, r3, r1, rrx
        363758:	0060005f 	rsbeq	r0, r0, pc, asr r0
        36375c:	005e005d 	subeqs	r0, lr, sp, asr r0
        363760:	005b005a 	subeqs	r0, fp, sl, asr r0
        363764:	00590058 	subeqs	r0, r9, r8, asr r0
        363768:	00570056 	subeqs	r0, r7, r6, asr r0
        36376c:	00540053 	subeqs	r0, r4, r3, asr r0
        363770:	00520051 	subeqs	r0, r2, r1, asr r0
        363774:	0050004f 	subeqs	r0, r0, pc, asr #32
        363778:	004e004c 	subeq	r0, lr, ip, asr #32
        36377c:	004b004a 	subeq	r0, fp, sl, asr #32
        363780:	00490048 	subeq	r0, r9, r8, asr #32
        363784:	00470046 	subeq	r0, r7, r6, asr #32
        363788:	00450043 	subeq	r0, r5, r3, asr #32
        36378c:	00420041 	subeq	r0, r2, r1, asr #32
        363790:	0040003f 	subeq	r0, r0, pc, lsr r0
        363794:	003e003d 	eoreqs	r0, lr, sp, lsr r0
        363798:	003c003b 	eoreqs	r0, ip, fp, lsr r0
        36379c:	00390038 	eoreqs	r0, r9, r8, lsr r0
        3637a0:	00370036 	eoreqs	r0, r7, r6, lsr r0
        3637a4:	00350034 	eoreqs	r0, r5, r4, lsr r0
        3637a8:	00330032 	eoreqs	r0, r3, r2, lsr r0
        3637ac:	00310030 	eoreqs	r0, r1, r0, lsr r0
        3637b0:	002f002d 	eoreq	r0, pc, sp, lsr #32
        3637b4:	002c002b 	eoreq	r0, ip, fp, lsr #32
        3637b8:	002a0029 	eoreq	r0, sl, r9, lsr #32
        3637bc:	00280027 	eoreq	r0, r8, r7, lsr #32
        3637c0:	00260025 	eoreq	r0, r6, r5, lsr #32
        3637c4:	00240023 	eoreq	r0, r4, r3, lsr #32
        3637c8:	00220021 	eoreq	r0, r2, r1, lsr #32
        3637cc:	0020001f 	eoreq	r0, r0, pc, lsl r0
        3637d0:	001e001d 	andeqs	r0, lr, sp, lsl r0
        3637d4:	001c001b 	andeqs	r0, ip, fp, lsl r0
        3637d8:	001a0019 	andeqs	r0, sl, r9, lsl r0
        3637dc:	00180016 	andeqs	r0, r8, r6, lsl r0
        3637e0:	00150014 	andeqs	r0, r5, r4, lsl r0
        3637e4:	00130012 	andeqs	r0, r3, r2, lsl r0
        3637e8:	00110010 	andeqs	r0, r1, r0, lsl r0
        3637ec:	000f000e 	andeq	r0, pc, lr
        3637f0:	000d000c 	andeq	r0, sp, ip
        3637f4:	000b000a 	andeq	r0, fp, sl
        3637f8:	00090008 	andeq	r0, r9, r8
        3637fc:	00070006 	andeq	r0, r7, r6
        363800:	00050004 	andeq	r0, r5, r4
        363804:	00030002 	andeq	r0, r3, r2
        363808:	00010000 	andeq	r0, r1, r0
    */
}

/**
 * Symbol: ArProbEncodeLu2
 * Address: 0036380c
 */
void globals::ArProbEncodeLu2() {
    /*
        36380c:	7ffe15a9 	swivc	0x00fe15a9
        363810:	144e1383 	strneb	r1, [lr], -#899
        363814:	12f41284 	rscnes	r1, r4, #1073741832	; 0x40000008
        363818:	122911dc 	eorne	r1, r9, #55	; 0x37
        36381c:	1199115e 	orrnes	r1, r9, lr, asr r1
        363820:	112910fa 	strned	r1, [r9, -sl]!
        363824:	10ce10a6 	sbcne	r1, lr, r6, lsr #1
        363828:	1081105f 	addne	r1, r1, pc, asr r0
        36382c:	103e1020 	eornes	r1, lr, r0, lsr #32
        363830:	10030fe8 	andne	r0, r3, r8, ror #31
        363834:	0fcf0fb6 	swieq	0x00cf0fb6
        363838:	0f9f0f89 	swieq	0x009f0f89
        36383c:	0f740f5f 	swieq	0x00740f5f
        363840:	0f4c0f39 	swieq	0x004c0f39
        363844:	0f270f15 	swieq	0x00270f15
        363848:	0f040ef4 	swieq	0x00040ef4
        36384c:	0ee40ed4 	mcreq	14, 7, r0, cr4, cr4, {6}
        363850:	0ec50eb7 	mcreq	14, 6, r0, cr5, cr7, {5}
        363854:	0ea90e9b 	mcreq	14, 5, r0, cr9, cr11, {4}
        363858:	0e8e0e81 	cdpeq	14, 8, cr0, cr14, cr1, {4}
        36385c:	0e740e68 	cdpeq	14, 7, cr0, cr4, cr8, {3}
        363860:	0e5c0e50 	mrceq	14, 2, r0, cr12, cr0, {2}
        363864:	0e450e39 	mcreq	14, 2, r0, cr5, cr9, {1}
        363868:	0e2e0e24 	cdpeq	14, 2, cr0, cr14, cr4, {1}
        36386c:	0e190e0f 	cdpeq	14, 1, cr0, cr9, cr15, {0}
        363870:	0e050dfb 	mcreq	13, 0, r0, cr5, cr11, {7}
        363874:	0df10de8 	ldceql	13, cr0, [r1, #928]!
        363878:	0dde0dd5 	ldceql	13, cr0, [lr, #852]
        36387c:	0dcc0dc3 	stceql	13, cr0, [ip, #780]
        363880:	0dba0db2 	ldceq	13, cr0, [sl, #712]!
        363884:	0daa0da1 	stceq	13, cr0, [sl, #644]!
        363888:	0d990d91 	ldceq	13, cr0, [r9, #580]
        36388c:	0d890d81 	stceq	13, cr0, [r9, #516]
        363890:	0d7a0d72 	ldceql	13, cr0, [sl, -#456]!
        363894:	0d6b0d64 	stceql	13, cr0, [fp, -#400]!
        363898:	0d5c0d55 	ldceql	13, cr0, [ip, -#340]
        36389c:	0d4e0d47 	stceql	13, cr0, [lr, -#284]
        3638a0:	0d410d3a 	stceql	13, cr0, [r1, -#232]
        3638a4:	0d330d2d 	ldceq	13, cr0, [r3, -#180]!
        3638a8:	0d260d20 	stceq	13, cr0, [r6, -#128]!
        3638ac:	0d1a0d13 	ldceq	13, cr0, [sl, -#76]
        3638b0:	0d0d0d07 	stceq	13, cr0, [sp, -#28]
        3638b4:	0d010cfb 	stceq	12, cr0, [r1, -#1004]
        3638b8:	0cf60cf0 	ldceql	12, cr0, [r6], #960
        3638bc:	0cea0ce4 	stceql	12, cr0, [sl], #912
        3638c0:	0cdf0cd9 	ldceql	12, cr0, [pc], #868
        3638c4:	0cd40cce 	ldceql	12, cr0, [r4], #824
        3638c8:	0cc90cc4 	stceql	12, cr0, [r9], #784
        3638cc:	0cbf0cb9 	ldceq	12, cr0, [pc], #740
        3638d0:	0cb40caf 	ldceq	12, cr0, [r4], #700
        3638d4:	0caa0ca5 	stceq	12, cr0, [sl], #660
        3638d8:	0ca00c9b 	stceq	12, cr0, [r0], #620
        3638dc:	0c960c92 	ldceq	12, cr0, [r6], #584
        3638e0:	0c8d0c88 	stceq	12, cr0, [sp], #544
        3638e4:	0c840c7f 	stceq	12, cr0, [r4], #508
        3638e8:	0c7a0c76 	ldceql	12, cr0, [sl], -#472
        3638ec:	0c710c6d 	ldceql	12, cr0, [r1], -#436
        3638f0:	0c690c64 	stceql	12, cr0, [r9], -#400
        3638f4:	0c600c5c 	stceql	12, cr0, [r0], -#368
        3638f8:	0c570c53 	mrrceq	12, 5, r0, r7, cr3
        3638fc:	0c4f0c4b 	mcrreq	12, 4, r0, pc, cr11
        363900:	0c470c43 	mcrreq	12, 4, r0, r7, cr3
        363904:	0c3f0c3b 	ldceq	12, cr0, [pc], -#236
        363908:	0c370c33 	ldceq	12, cr0, [r7], -#204
        36390c:	0c2f0c2b 	stceq	12, cr0, [pc], -#172
        363910:	0c270c23 	stceq	12, cr0, [r7], -#140
        363914:	0c1f0c1c 	ldceq	12, cr0, [pc], -#112
        363918:	0c180c14 	ldceq	12, cr0, [r8], -#80
        36391c:	0c100c0d 	ldceq	12, cr0, [r0], -#52
        363920:	0c090c05 	stceq	12, cr0, [r9], -#20
        363924:	0c020bfe 	stceq	11, cr0, [r2], -#1016
        363928:	0bfb0bf7 	bleq	22690c <AlignRotEqs(AngCluster *, long, TDArray *, SideMap *, EqSystem *)+0x388>
        36392c:	0bf40bf0 	bleq	668f4 <FNBPLookupCount(RefVar const &)+0x24>
        363930:	0bed0be9 	bleq	ffea68dc <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfe296084>
        363934:	0be60be3 	bleq	ffce68c8 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfe0d6070>
        363938:	0bdf0bdc 	bleq	ffb268b0 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfdf16058>
        36393c:	0bd90bd5 	bleq	ff9a6898 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfdd96040>
        363940:	0bd20bcf 	bleq	ff7e6884 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfdbd602c>
        363944:	0bcc0bc9 	bleq	ff666870 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfda56018>
        363948:	0bc50bc2 	bleq	ff4a6858 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd896000>
        36394c:	0bbf0bbc 	bleq	ff326844 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd715fec>
        363950:	0bb90bb6 	bleq	ff1a6830 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd595fd8>
        363954:	0bb30bb0 	bleq	ff02681c <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd415fc4>
        363958:	0bad0baa 	bleq	feea6808 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd295fb0>
        36395c:	0ba70ba4 	bleq	fed267f4 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd115f9c>
        363960:	0ba10b9e 	bleq	feba67e0 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfcf95f88>
        363964:	0b9b0b98 	bleq	fea267cc <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfce15f74>
        363968:	0b950b92 	bleq	fe8a67b8 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfcc95f60>
        36396c:	0b8f0b8d 	bleq	fe7267a8 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfcb15f50>
        363970:	0b8a0b87 	bleq	fe5e6794 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfc9d5f3c>
        363974:	0b840b81 	bleq	fe466780 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfc855f28>
        363978:	0b7f0b7c 	bleq	2326770 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x715f18>
        36397c:	0b790b76 	bleq	21a675c <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x595f04>
        363980:	0b740b71 	bleq	206674c <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x455ef4>
        363984:	0b6e0b6c 	bleq	1ee673c <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x2d5ee4>
        363988:	0b690b67 	bleq	1da672c <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x195ed4>
        36398c:	0b640b61 	bleq	1c66718 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x55ec0>
        363990:	0b5f0b5c 	bleq	1b26708 <$CalculateLinkLikeSZ(SDB_TYPE *, int)+0x38c>
        363994:	0b5a0b57 	bleq	19e66f8 <ROM$$Size+0x12c6aac>
        363998:	0b550b52 	bleq	18a66e8 <ROM$$Size+0x1186a9c>
        36399c:	0b500b4d 	bleq	17666d8 <ROM$$Size+0x1046a8c>
        3639a0:	0b4b0b48 	bleq	16266c8 <ROM$$Size+0xf06a7c>
        3639a4:	0b460b43 	bleq	14e66b8 <ROM$$Size+0xdc6a6c>
        3639a8:	0b410b3e 	bleq	13a66a8 <ROM$$Size+0xc86a5c>
        3639ac:	0b3c0b3a 	bleq	126669c <ROM$$Size+0xb46a50>
        3639b0:	0b370b35 	bleq	112668c <ROM$$Size+0xa06a40>
        3639b4:	0b320b30 	bleq	fe667c <ROM$$Size+0x8c6a30>
        3639b8:	0b2e0b2b 	bleq	ee666c <ROM$$Size+0x7c6a20>
        3639bc:	0b290b27 	bleq	da6660 <ROM$$Size+0x686a14>
        3639c0:	0b240b22 	bleq	c66650 <ROM$$Size+0x546a04>
        3639c4:	0b200b1e 	bleq	b66644 <ROM$$Size+0x4469f8>
        3639c8:	0b1b0b19 	bleq	a26634 <ROM$$Size+0x3069e8>
        3639cc:	0b170b15 	bleq	926628 <ROM$$Size+0x2069dc>
        3639d0:	0b120b10 	bleq	7e6618 <ROM$$Size+0xc69cc>
        3639d4:	0b0e0b0c 	bleq	6e660c <gEnum80sh_words+0x4d1d0>
        3639d8:	0b0a0b07 	bleq	5e65fc <SYMdtem+0x1f268>
        3639dc:	0b050b03 	bleq	4a65f0 <SYMupdatelocalefromuserconfig+0x50>
        3639e0:	0b010aff 	bleq	3a65e4 <bpWeight+0x11cf4>
        3639e4:	0afd0afb 	beq	2a65d8 <IsChunkNumbers(void *)+0xc>
        3639e8:	0af90af6 	beq	1a65c8 <ReFlow+0x760>
        3639ec:	0af40af2 	beq	665bc <InternalStartNBPLookup(TLookupNames **, RefVar const &)+0x4c>
        3639f0:	0af00aee 	beq	fff665b0 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfe355d58>
        3639f4:	0aec0aea 	beq	ffe665a4 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfe255d4c>
        3639f8:	0ae80ae6 	beq	ffd66598 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfe155d40>
        3639fc:	0ae40ae2 	beq	ffc6658c <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfe055d34>
        363a00:	0ae00ade 	beq	ffb66580 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfdf55d28>
        363a04:	0adc0ada 	beq	ffa66574 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfde55d1c>
        363a08:	0ad80ad6 	beq	ff966568 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfdd55d10>
        363a0c:	0ad40ad2 	beq	ff86655c <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfdc55d04>
        363a10:	0ad00ace 	beq	ff766550 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfdb55cf8>
        363a14:	0acc0aca 	beq	ff666544 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfda55cec>
        363a18:	0ac90ac7 	beq	ff5a653c <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd995ce4>
        363a1c:	0ac50ac3 	beq	ff4a6530 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd895cd8>
        363a20:	0ac10abf 	beq	ff3a6524 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd795ccc>
        363a24:	0abd0abb 	beq	ff2a6518 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd695cc0>
        363a28:	0ab90ab8 	beq	ff1a6510 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd595cb8>
        363a2c:	0ab60ab4 	beq	ff0e6504 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd4d5cac>
        363a30:	0ab20ab0 	beq	fefe64f8 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd3d5ca0>
        363a34:	0aae0aad 	beq	feee64f0 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd2d5c98>
        363a38:	0aab0aa9 	beq	fee264e4 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd215c8c>
        363a3c:	0aa70aa6 	beq	fed264dc <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd115c84>
        363a40:	0aa40aa2 	beq	fec664d0 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd055c78>
        363a44:	0aa00a9e 	beq	feb664c4 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfcf55c6c>
        363a48:	0a9d0a9b 	beq	feaa64bc <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfce95c64>
        363a4c:	0a990a97 	beq	fe9a64b0 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfcd95c58>
        363a50:	0a960a94 	beq	fe8e64a8 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfccd5c50>
        363a54:	0a920a91 	beq	fe7e64a0 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfcbd5c48>
        363a58:	0a8f0a8d 	beq	fe726494 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfcb15c3c>
        363a5c:	0a8b0a8a 	beq	fe62648c <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfca15c34>
        363a60:	0a880a86 	beq	fe566480 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfc955c28>
        363a64:	0a850a83 	beq	fe4a6478 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfc895c20>
        363a68:	0a810a80 	beq	fe3a6470 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfc795c18>
        363a6c:	0a7e0a7d 	beq	22e6468 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x6d5c10>
        363a70:	0a7b0a79 	beq	222645c <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x615c04>
        363a74:	0a780a76 	beq	2166454 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x555bfc>
        363a78:	0a740a73 	beq	206644c <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x455bf4>
        363a7c:	0a710a70 	beq	1fa6444 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x395bec>
        363a80:	0a6e0a6c 	beq	1ee6438 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x2d5be0>
        363a84:	0a6b0a69 	beq	1e26430 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x215bd8>
        363a88:	0a680a66 	beq	1d66428 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x155bd0>
        363a8c:	0a650a63 	beq	1ca6420 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x95bc8>
        363a90:	0a610a60 	beq	1ba6418 <$InitTranslators(void)+0x9c>
        363a94:	0a5e0a5d 	beq	1ae6410 <$FRecognizeInkWord+0x94>
        363a98:	0a5b0a5a 	beq	1a26408 <TMuxTool::$GetSizeOf(void)+0x8c>
        363a9c:	0a580a57 	beq	1966400 <ROM$$Size+0x12467b4>
        363aa0:	0a550a54 	beq	18a63f8 <ROM$$Size+0x11867ac>
        363aa4:	0a520a51 	beq	17e63f0 <ROM$$Size+0x10c67a4>
        363aa8:	0a4f0a4e 	beq	17263e8 <ROM$$Size+0x100679c>
        363aac:	0a4c0a4b 	beq	16663e0 <ROM$$Size+0xf46794>
        363ab0:	0a490a48 	beq	15a63d8 <ROM$$Size+0xe8678c>
        363ab4:	0a460a45 	beq	14e63d0 <ROM$$Size+0xdc6784>
        363ab8:	0a430a42 	beq	14263c8 <ROM$$Size+0xd0677c>
        363abc:	0a400a3f 	beq	13663c0 <ROM$$Size+0xc46774>
        363ac0:	0a3d0a3c 	beq	12a63b8 <ROM$$Size+0xb8676c>
        363ac4:	0a3b0a39 	beq	12263b0 <ROM$$Size+0xb06764>
        363ac8:	0a380a36 	beq	11663a8 <ROM$$Size+0xa4675c>
        363acc:	0a350a33 	beq	10a63a0 <ROM$$Size+0x986754>
        363ad0:	0a320a31 	beq	fe639c <ROM$$Size+0x8c6750>
        363ad4:	0a2f0a2e 	beq	f26394 <ROM$$Size+0x806748>
        363ad8:	0a2c0a2b 	beq	e6638c <ROM$$Size+0x746740>
        363adc:	0a2a0a28 	beq	de6384 <ROM$$Size+0x6c6738>
        363ae0:	0a270a25 	beq	d2637c <ROM$$Size+0x606730>
        363ae4:	0a240a23 	beq	c66378 <ROM$$Size+0x54672c>
        363ae8:	0a210a20 	beq	ba6370 <ROM$$Size+0x486724>
        363aec:	0a1f0a1d 	beq	b26368 <ROM$$Size+0x40671c>
        363af0:	0a1c0a1b 	beq	a66364 <ROM$$Size+0x346718>
        363af4:	0a190a18 	beq	9a635c <ROM$$Size+0x286710>
        363af8:	0a170a15 	beq	926354 <ROM$$Size+0x206708>
        363afc:	0a140a13 	beq	866350 <ROM$$Size+0x146704>
        363b00:	0a110a10 	beq	7a6348 <ROM$$Size+0x866fc>
        363b04:	0a0f0a0d 	beq	726340 <ROM$$Size+0x66f4>
        363b08:	0a0c0a0b 	beq	66633c <MP0872+0x1b993>
        363b0c:	0a090a08 	beq	5a6334 <SYMconfigpath+0x69c>
        363b10:	0a070a05 	beq	52632c <SYMphonetag+0x3f4>
        363b14:	0a040a03 	beq	466328 <SYMedgex+0x23c>
        363b18:	0a020a00 	beq	3e6320 <SYMusable+0xab38>
        363b1c:	09ff09fe 	ldmeqib	pc!, {r1, r2, r3, r4, r5, r6, r7, r8, fp}^
        363b20:	09fd09fb 	ldmeqib	sp!, {r0, r1, r3, r4, r5, r6, r7, r8, fp}^
        363b24:	09fa09f9 	ldmeqib	sl!, {r0, r3, r4, r5, r6, r7, r8, fp}^
        363b28:	09f709f6 	ldmeqib	r7!, {r1, r2, r4, r5, r6, r7, r8, fp}^
        363b2c:	09f509f4 	ldmeqib	r5!, {r2, r4, r5, r6, r7, r8, fp}^
        363b30:	09f209f1 	ldmeqib	r2!, {r0, r4, r5, r6, r7, r8, fp}^
        363b34:	09f009ef 	ldmeqib	r0!, {r0, r1, r2, r3, r5, r6, r7, r8, fp}^
        363b38:	09ee09ec 	stmeqib	lr!, {r2, r3, r5, r6, r7, r8, fp}^
        363b3c:	09eb09ea 	stmeqib	fp!, {r1, r3, r5, r6, r7, r8, fp}^
        363b40:	09e909e7 	stmeqib	r9!, {r0, r1, r2, r5, r6, r7, r8, fp}^
        363b44:	09e609e5 	stmeqib	r6!, {r0, r2, r5, r6, r7, r8, fp}^
        363b48:	09e409e3 	stmeqib	r4!, {r0, r1, r5, r6, r7, r8, fp}^
        363b4c:	09e109e0 	stmeqib	r1!, {r5, r6, r7, r8, fp}^
        363b50:	09df09de 	ldmeqib	pc, {r1, r2, r3, r4, r6, r7, r8, fp}^
        363b54:	09dd09db 	ldmeqib	sp, {r0, r1, r3, r4, r6, r7, r8, fp}^
        363b58:	09da09d9 	ldmeqib	sl, {r0, r3, r4, r6, r7, r8, fp}^
        363b5c:	09d809d7 	ldmeqib	r8, {r0, r1, r2, r4, r6, r7, r8, fp}^
        363b60:	09d509d4 	ldmeqib	r5, {r2, r4, r6, r7, r8, fp}^
        363b64:	09d309d2 	ldmeqib	r3, {r1, r4, r6, r7, r8, fp}^
        363b68:	09d109d0 	ldmeqib	r1, {r4, r6, r7, r8, fp}^
        363b6c:	09ce09cd 	stmeqib	lr, {r0, r2, r3, r6, r7, r8, fp}^
        363b70:	09cc09cb 	stmeqib	ip, {r0, r1, r3, r6, r7, r8, fp}^
        363b74:	09ca09c9 	stmeqib	sl, {r0, r3, r6, r7, r8, fp}^
        363b78:	09c809c6 	stmeqib	r8, {r1, r2, r6, r7, r8, fp}^
        363b7c:	09c509c4 	stmeqib	r5, {r2, r6, r7, r8, fp}^
        363b80:	09c309c2 	stmeqib	r3, {r1, r6, r7, r8, fp}^
        363b84:	09c109c0 	stmeqib	r1, {r6, r7, r8, fp}^
        363b88:	09bf09bd 	ldmeqib	pc!, {r0, r2, r3, r4, r5, r7, r8, fp}
        363b8c:	09bc09bb 	ldmeqib	ip!, {r0, r1, r3, r4, r5, r7, r8, fp}
        363b90:	09ba09b9 	ldmeqib	sl!, {r0, r3, r4, r5, r7, r8, fp}
        363b94:	09b809b7 	ldmeqib	r8!, {r0, r1, r2, r4, r5, r7, r8, fp}
        363b98:	09b609b5 	ldmeqib	r6!, {r0, r2, r4, r5, r7, r8, fp}
        363b9c:	09b309b2 	ldmeqib	r3!, {r1, r4, r5, r7, r8, fp}
        363ba0:	09b109b0 	ldmeqib	r1!, {r4, r5, r7, r8, fp}
        363ba4:	09af09ae 	stmeqib	pc!, {r1, r2, r3, r5, r7, r8, fp}
        363ba8:	09ad09ac 	stmeqib	sp!, {r2, r3, r5, r7, r8, fp}
        363bac:	09ab09aa 	stmeqib	fp!, {r1, r3, r5, r7, r8, fp}
        363bb0:	09a909a8 	stmeqib	r9!, {r3, r5, r7, r8, fp}
        363bb4:	09a609a5 	stmeqib	r6!, {r0, r2, r5, r7, r8, fp}
        363bb8:	09a409a3 	stmeqib	r4!, {r0, r1, r5, r7, r8, fp}
        363bbc:	09a209a1 	stmeqib	r2!, {r0, r5, r7, r8, fp}
        363bc0:	09a0099f 	stmeqib	r0!, {r0, r1, r2, r3, r4, r7, r8, fp}
        363bc4:	099e099d 	ldmeqib	lr, {r0, r2, r3, r4, r7, r8, fp}
        363bc8:	099c099b 	ldmeqib	ip, {r0, r1, r3, r4, r7, r8, fp}
        363bcc:	099a0999 	ldmeqib	sl, {r0, r3, r4, r7, r8, fp}
        363bd0:	09980997 	ldmeqib	r8, {r0, r1, r2, r4, r7, r8, fp}
        363bd4:	09960995 	ldmeqib	r6, {r0, r2, r4, r7, r8, fp}
        363bd8:	09940993 	ldmeqib	r4, {r0, r1, r4, r7, r8, fp}
        363bdc:	09920990 	ldmeqib	r2, {r4, r7, r8, fp}
        363be0:	098f098e 	stmeqib	pc, {r1, r2, r3, r7, r8, fp}
        363be4:	098d098c 	stmeqib	sp, {r2, r3, r7, r8, fp}
        363be8:	098b098a 	stmeqib	fp, {r1, r3, r7, r8, fp}
        363bec:	09890988 	stmeqib	r9, {r3, r7, r8, fp}
        363bf0:	09870986 	stmeqib	r7, {r1, r2, r7, r8, fp}
        363bf4:	09850984 	stmeqib	r5, {r2, r7, r8, fp}
        363bf8:	09830982 	stmeqib	r3, {r1, r7, r8, fp}
        363bfc:	09810980 	stmeqib	r1, {r7, r8, fp}
        363c00:	097f097e 	ldmeqdb	pc!, {r1, r2, r3, r4, r5, r6, r8, fp}^
        363c04:	097d097c 	ldmeqdb	sp!, {r2, r3, r4, r5, r6, r8, fp}^
        363c08:	097b097a 	ldmeqdb	fp!, {r1, r3, r4, r5, r6, r8, fp}^
        363c0c:	097a0979 	ldmeqdb	sl!, {r0, r3, r4, r5, r6, r8, fp}^
        363c10:	09780977 	ldmeqdb	r8!, {r0, r1, r2, r4, r5, r6, r8, fp}^
        363c14:	09760975 	ldmeqdb	r6!, {r0, r2, r4, r5, r6, r8, fp}^
        363c18:	09740973 	ldmeqdb	r4!, {r0, r1, r4, r5, r6, r8, fp}^
        363c1c:	09720971 	ldmeqdb	r2!, {r0, r4, r5, r6, r8, fp}^
        363c20:	0970096f 	ldmeqdb	r0!, {r0, r1, r2, r3, r5, r6, r8, fp}^
        363c24:	096e096d 	stmeqdb	lr!, {r0, r2, r3, r5, r6, r8, fp}^
        363c28:	096c096b 	stmeqdb	ip!, {r0, r1, r3, r5, r6, r8, fp}^
        363c2c:	096a0969 	stmeqdb	sl!, {r0, r3, r5, r6, r8, fp}^
        363c30:	09680967 	stmeqdb	r8!, {r0, r1, r2, r5, r6, r8, fp}^
        363c34:	09660965 	stmeqdb	r6!, {r0, r2, r5, r6, r8, fp}^
        363c38:	09640964 	stmeqdb	r4!, {r2, r5, r6, r8, fp}^
        363c3c:	09630962 	stmeqdb	r3!, {r1, r5, r6, r8, fp}^
        363c40:	09610960 	stmeqdb	r1!, {r5, r6, r8, fp}^
        363c44:	095f095e 	ldmeqdb	pc, {r1, r2, r3, r4, r6, r8, fp}^
        363c48:	095d095c 	ldmeqdb	sp, {r2, r3, r4, r6, r8, fp}^
        363c4c:	095b095a 	ldmeqdb	fp, {r1, r3, r4, r6, r8, fp}^
        363c50:	09590958 	ldmeqdb	r9, {r3, r4, r6, r8, fp}^
        363c54:	09580957 	ldmeqdb	r8, {r0, r1, r2, r4, r6, r8, fp}^
        363c58:	09560955 	ldmeqdb	r6, {r0, r2, r4, r6, r8, fp}^
        363c5c:	09540953 	ldmeqdb	r4, {r0, r1, r4, r6, r8, fp}^
        363c60:	09520951 	ldmeqdb	r2, {r0, r4, r6, r8, fp}^
        363c64:	0950094f 	ldmeqdb	r0, {r0, r1, r2, r3, r6, r8, fp}^
        363c68:	094e094e 	stmeqdb	lr, {r1, r2, r3, r6, r8, fp}^
        363c6c:	094d094c 	stmeqdb	sp, {r2, r3, r6, r8, fp}^
        363c70:	094b094a 	stmeqdb	fp, {r1, r3, r6, r8, fp}^
        363c74:	09490948 	stmeqdb	r9, {r3, r6, r8, fp}^
        363c78:	09470946 	stmeqdb	r7, {r1, r2, r6, r8, fp}^
        363c7c:	09460945 	stmeqdb	r6, {r0, r2, r6, r8, fp}^
        363c80:	09440943 	stmeqdb	r4, {r0, r1, r6, r8, fp}^
        363c84:	09420941 	stmeqdb	r2, {r0, r6, r8, fp}^
        363c88:	0940093f 	stmeqdb	r0, {r0, r1, r2, r3, r4, r5, r8, fp}^
        363c8c:	093f093e 	ldmeqdb	pc!, {r1, r2, r3, r4, r5, r8, fp}
        363c90:	093d093c 	ldmeqdb	sp!, {r2, r3, r4, r5, r8, fp}
        363c94:	093b093a 	ldmeqdb	fp!, {r1, r3, r4, r5, r8, fp}
        363c98:	09390939 	ldmeqdb	r9!, {r0, r3, r4, r5, r8, fp}
        363c9c:	09380937 	ldmeqdb	r8!, {r0, r1, r2, r4, r5, r8, fp}
        363ca0:	09360935 	ldmeqdb	r6!, {r0, r2, r4, r5, r8, fp}
        363ca4:	09340933 	ldmeqdb	r4!, {r0, r1, r4, r5, r8, fp}
        363ca8:	09330932 	ldmeqdb	r3!, {r1, r4, r5, r8, fp}
        363cac:	09310930 	ldmeqdb	r1!, {r4, r5, r8, fp}
        363cb0:	092f092e 	stmeqdb	pc!, {r1, r2, r3, r5, r8, fp}
        363cb4:	092e092d 	stmeqdb	lr!, {r0, r2, r3, r5, r8, fp}
        363cb8:	092c092b 	stmeqdb	ip!, {r0, r1, r3, r5, r8, fp}
        363cbc:	092a0929 	stmeqdb	sl!, {r0, r3, r5, r8, fp}
        363cc0:	09290928 	stmeqdb	r9!, {r3, r5, r8, fp}
        363cc4:	09270926 	stmeqdb	r7!, {r1, r2, r5, r8, fp}
        363cc8:	09250924 	stmeqdb	r5!, {r2, r5, r8, fp}
        363ccc:	09240923 	stmeqdb	r4!, {r0, r1, r5, r8, fp}
        363cd0:	09220921 	stmeqdb	r2!, {r0, r5, r8, fp}
        363cd4:	0920091f 	stmeqdb	r0!, {r0, r1, r2, r3, r4, r8, fp}
        363cd8:	091f091e 	ldmeqdb	pc, {r1, r2, r3, r4, r8, fp}
        363cdc:	091d091c 	ldmeqdb	sp, {r2, r3, r4, r8, fp}
        363ce0:	091b091b 	ldmeqdb	fp, {r0, r1, r3, r4, r8, fp}
        363ce4:	091a0919 	ldmeqdb	sl, {r0, r3, r4, r8, fp}
        363ce8:	09180917 	ldmeqdb	r8, {r0, r1, r2, r4, r8, fp}
        363cec:	09170916 	ldmeqdb	r7, {r1, r2, r4, r8, fp}
        363cf0:	09150914 	ldmeqdb	r5, {r2, r4, r8, fp}
        363cf4:	09130913 	ldmeqdb	r3, {r0, r1, r4, r8, fp}
        363cf8:	09120911 	ldmeqdb	r2, {r0, r4, r8, fp}
        363cfc:	0910090f 	ldmeqdb	r0, {r0, r1, r2, r3, r8, fp}
        363d00:	090f090e 	stmeqdb	pc, {r1, r2, r3, r8, fp}
        363d04:	090d090c 	stmeqdb	sp, {r2, r3, r8, fp}
        363d08:	090c090b 	stmeqdb	ip, {r0, r1, r3, r8, fp}
        363d0c:	090a0909 	stmeqdb	sl, {r0, r3, r8, fp}
        363d10:	09080908 	stmeqdb	r8, {r3, r8, fp}
        363d14:	09070906 	stmeqdb	r7, {r1, r2, r8, fp}
        363d18:	09050905 	stmeqdb	r5, {r0, r2, r8, fp}
        363d1c:	09040903 	stmeqdb	r4, {r0, r1, r8, fp}
        363d20:	09020901 	stmeqdb	r2, {r0, r8, fp}
        363d24:	09010900 	stmeqdb	r1, {r8, fp}
        363d28:	08ff08fe 	ldmeqia	pc!, {r1, r2, r3, r4, r5, r6, r7, fp}^
        363d2c:	08fe08fd 	ldmeqia	lr!, {r0, r2, r3, r4, r5, r6, r7, fp}^
        363d30:	08fc08fb 	ldmeqia	ip!, {r0, r1, r3, r4, r5, r6, r7, fp}^
        363d34:	08fb08fa 	ldmeqia	fp!, {r1, r3, r4, r5, r6, r7, fp}^
        363d38:	08f908f8 	ldmeqia	r9!, {r3, r4, r5, r6, r7, fp}^
        363d3c:	08f808f7 	ldmeqia	r8!, {r0, r1, r2, r4, r5, r6, r7, fp}^
        363d40:	08f608f5 	ldmeqia	r6!, {r0, r2, r4, r5, r6, r7, fp}^
        363d44:	08f508f4 	ldmeqia	r5!, {r2, r4, r5, r6, r7, fp}^
        363d48:	08f308f2 	ldmeqia	r3!, {r1, r4, r5, r6, r7, fp}^
        363d4c:	08f208f1 	ldmeqia	r2!, {r0, r4, r5, r6, r7, fp}^
        363d50:	08f008ef 	ldmeqia	r0!, {r0, r1, r2, r3, r5, r6, r7, fp}^
        363d54:	08ef08ee 	stmeqia	pc!, {r1, r2, r3, r5, r6, r7, fp}^
        363d58:	08ed08ec 	stmeqia	sp!, {r2, r3, r5, r6, r7, fp}^
        363d5c:	08ec08eb 	stmeqia	ip!, {r0, r1, r3, r5, r6, r7, fp}^
        363d60:	08ea08e9 	stmeqia	sl!, {r0, r3, r5, r6, r7, fp}^
        363d64:	08e908e8 	stmeqia	r9!, {r3, r5, r6, r7, fp}^
        363d68:	08e708e7 	stmeqia	r7!, {r0, r1, r2, r5, r6, r7, fp}^
        363d6c:	08e608e5 	stmeqia	r6!, {r0, r2, r5, r6, r7, fp}^
        363d70:	08e408e4 	stmeqia	r4!, {r2, r5, r6, r7, fp}^
        363d74:	08e308e2 	stmeqia	r3!, {r1, r5, r6, r7, fp}^
        363d78:	08e108e1 	stmeqia	r1!, {r0, r5, r6, r7, fp}^
        363d7c:	08e008df 	stmeqia	r0!, {r0, r1, r2, r3, r4, r6, r7, fp}^
        363d80:	08df08de 	ldmeqia	pc, {r1, r2, r3, r4, r6, r7, fp}^
        363d84:	08dd08dc 	ldmeqia	sp, {r2, r3, r4, r6, r7, fp}^
        363d88:	08dc08db 	ldmeqia	ip, {r0, r1, r3, r4, r6, r7, fp}^
        363d8c:	08da08da 	ldmeqia	sl, {r1, r3, r4, r6, r7, fp}^
        363d90:	08d908d8 	ldmeqia	r9, {r3, r4, r6, r7, fp}^
        363d94:	08d708d7 	ldmeqia	r7, {r0, r1, r2, r4, r6, r7, fp}^
        363d98:	08d608d5 	ldmeqia	r6, {r0, r2, r4, r6, r7, fp}^
        363d9c:	08d508d4 	ldmeqia	r5, {r2, r4, r6, r7, fp}^
        363da0:	08d308d3 	ldmeqia	r3, {r0, r1, r4, r6, r7, fp}^
        363da4:	08d208d1 	ldmeqia	r2, {r0, r4, r6, r7, fp}^
        363da8:	08d008d0 	ldmeqia	r0, {r4, r6, r7, fp}^
        363dac:	08cf08ce 	stmeqia	pc, {r1, r2, r3, r6, r7, fp}^
        363db0:	08ce08cd 	stmeqia	lr, {r0, r2, r3, r6, r7, fp}^
        363db4:	08cc08cc 	stmeqia	ip, {r2, r3, r6, r7, fp}^
        363db8:	08cb08ca 	stmeqia	fp, {r1, r3, r6, r7, fp}^
        363dbc:	08ca08c9 	stmeqia	sl, {r0, r3, r6, r7, fp}^
        363dc0:	08c808c7 	stmeqia	r8, {r0, r1, r2, r6, r7, fp}^
        363dc4:	08c708c6 	stmeqia	r7, {r1, r2, r6, r7, fp}^
        363dc8:	08c508c5 	stmeqia	r5, {r0, r2, r6, r7, fp}^
        363dcc:	08c408c3 	stmeqia	r4, {r0, r1, r6, r7, fp}^
        363dd0:	08c308c2 	stmeqia	r3, {r1, r6, r7, fp}^
        363dd4:	08c108c1 	stmeqia	r1, {r0, r6, r7, fp}^
        363dd8:	08c008bf 	stmeqia	r0, {r0, r1, r2, r3, r4, r5, r7, fp}^
        363ddc:	08bf08be 	ldmeqia	pc!, {r1, r2, r3, r4, r5, r7, fp}
        363de0:	08bd08bd 	ldmeqia	sp!, {r0, r2, r3, r4, r5, r7, fp}
        363de4:	08bc08bb 	ldmeqia	ip!, {r0, r1, r3, r4, r5, r7, fp}
        363de8:	08bb08ba 	ldmeqia	fp!, {r1, r3, r4, r5, r7, fp}
        363dec:	08b908b9 	ldmeqia	r9!, {r0, r3, r4, r5, r7, fp}
        363df0:	08b808b7 	ldmeqia	r8!, {r0, r1, r2, r4, r5, r7, fp}
        363df4:	08b708b6 	ldmeqia	r7!, {r1, r2, r4, r5, r7, fp}
        363df8:	08b508b5 	ldmeqia	r5!, {r0, r2, r4, r5, r7, fp}
        363dfc:	08b408b3 	ldmeqia	r4!, {r0, r1, r4, r5, r7, fp}
        363e00:	08b308b2 	ldmeqia	r3!, {r1, r4, r5, r7, fp}
        363e04:	08b108b1 	ldmeqia	r1!, {r0, r4, r5, r7, fp}
        363e08:	08b008af 	ldmeqia	r0!, {r0, r1, r2, r3, r5, r7, fp}
        363e0c:	08af08ae 	stmeqia	pc!, {r1, r2, r3, r5, r7, fp}
        363e10:	08ad08ad 	stmeqia	sp!, {r0, r2, r3, r5, r7, fp}
        363e14:	08ac08ac 	stmeqia	ip!, {r2, r3, r5, r7, fp}
        363e18:	08ab08aa 	stmeqia	fp!, {r1, r3, r5, r7, fp}
        363e1c:	08aa08a9 	stmeqia	sl!, {r0, r3, r5, r7, fp}
        363e20:	08a808a8 	stmeqia	r8!, {r3, r5, r7, fp}
        363e24:	08a708a6 	stmeqia	r7!, {r1, r2, r5, r7, fp}
        363e28:	08a608a5 	stmeqia	r6!, {r0, r2, r5, r7, fp}
        363e2c:	08a408a4 	stmeqia	r4!, {r2, r5, r7, fp}
        363e30:	08a308a3 	stmeqia	r3!, {r0, r1, r5, r7, fp}
        363e34:	08a208a1 	stmeqia	r2!, {r0, r5, r7, fp}
        363e38:	08a108a0 	stmeqia	r1!, {r5, r7, fp}
        363e3c:	089f089f 	ldmeqia	pc, {r0, r1, r2, r3, r4, r7, fp}
        363e40:	089e089e 	ldmeqia	lr, {r1, r2, r3, r4, r7, fp}
        363e44:	089d089c 	ldmeqia	sp, {r2, r3, r4, r7, fp}
        363e48:	089c089b 	ldmeqia	ip, {r0, r1, r3, r4, r7, fp}
        363e4c:	089a089a 	ldmeqia	sl, {r1, r3, r4, r7, fp}
        363e50:	08990899 	ldmeqia	r9, {r0, r3, r4, r7, fp}
        363e54:	08980897 	ldmeqia	r8, {r0, r1, r2, r4, r7, fp}
        363e58:	08970896 	ldmeqia	r7, {r1, r2, r4, r7, fp}
        363e5c:	08950895 	ldmeqia	r5, {r0, r2, r4, r7, fp}
        363e60:	08940894 	ldmeqia	r4, {r2, r4, r7, fp}
        363e64:	08930892 	ldmeqia	r3, {r1, r4, r7, fp}
        363e68:	08920891 	ldmeqia	r2, {r0, r4, r7, fp}
        363e6c:	08900890 	ldmeqia	r0, {r4, r7, fp}
        363e70:	088f088f 	stmeqia	pc, {r0, r1, r2, r3, r7, fp}
        363e74:	088e088d 	stmeqia	lr, {r0, r2, r3, r7, fp}
        363e78:	088d088c 	stmeqia	sp, {r2, r3, r7, fp}
        363e7c:	088c088b 	stmeqia	ip, {r0, r1, r3, r7, fp}
        363e80:	088a088a 	stmeqia	sl, {r1, r3, r7, fp}
        363e84:	08890889 	stmeqia	r9, {r0, r3, r7, fp}
        363e88:	08880887 	stmeqia	r8, {r0, r1, r2, r7, fp}
        363e8c:	08870886 	stmeqia	r7, {r1, r2, r7, fp}
        363e90:	08860885 	stmeqia	r6, {r0, r2, r7, fp}
        363e94:	08840884 	stmeqia	r4, {r2, r7, fp}
        363e98:	08830883 	stmeqia	r3, {r0, r1, r7, fp}
        363e9c:	08820881 	stmeqia	r2, {r0, r7, fp}
        363ea0:	08810880 	stmeqia	r1, {r7, fp}
        363ea4:	0880087f 	stmeqia	r0, {r0, r1, r2, r3, r4, r5, r6, fp}
        363ea8:	087e087e 	ldmeqda	lr!, {r1, r2, r3, r4, r5, r6, fp}^
        363eac:	087d087d 	ldmeqda	sp!, {r0, r2, r3, r4, r5, r6, fp}^
        363eb0:	087c087b 	ldmeqda	ip!, {r0, r1, r3, r4, r5, r6, fp}^
        363eb4:	087b087a 	ldmeqda	fp!, {r1, r3, r4, r5, r6, fp}^
        363eb8:	087a0879 	ldmeqda	sl!, {r0, r3, r4, r5, r6, fp}^
        363ebc:	08790878 	ldmeqda	r9!, {r3, r4, r5, r6, fp}^
        363ec0:	08770877 	ldmeqda	r7!, {r0, r1, r2, r4, r5, r6, fp}^
        363ec4:	08760876 	ldmeqda	r6!, {r1, r2, r4, r5, r6, fp}^
        363ec8:	08750874 	ldmeqda	r5!, {r2, r4, r5, r6, fp}^
        363ecc:	08740873 	ldmeqda	r4!, {r0, r1, r4, r5, r6, fp}^
        363ed0:	08730872 	ldmeqda	r3!, {r1, r4, r5, r6, fp}^
        363ed4:	08720871 	ldmeqda	r2!, {r0, r4, r5, r6, fp}^
        363ed8:	08700870 	ldmeqda	r0!, {r4, r5, r6, fp}^
        363edc:	086f086f 	stmeqda	pc!, {r0, r1, r2, r3, r5, r6, fp}^
        363ee0:	086e086e 	stmeqda	lr!, {r1, r2, r3, r5, r6, fp}^
        363ee4:	086d086c 	stmeqda	sp!, {r2, r3, r5, r6, fp}^
        363ee8:	086c086b 	stmeqda	ip!, {r0, r1, r3, r5, r6, fp}^
        363eec:	086b086a 	stmeqda	fp!, {r1, r3, r5, r6, fp}^
        363ef0:	086a0869 	stmeqda	sl!, {r0, r3, r5, r6, fp}^
        363ef4:	08680868 	stmeqda	r8!, {r3, r5, r6, fp}^
        363ef8:	08670867 	stmeqda	r7!, {r0, r1, r2, r5, r6, fp}^
        363efc:	08660866 	stmeqda	r6!, {r1, r2, r5, r6, fp}^
        363f00:	08650865 	stmeqda	r5!, {r0, r2, r5, r6, fp}^
        363f04:	08640863 	stmeqda	r4!, {r0, r1, r5, r6, fp}^
        363f08:	08630862 	stmeqda	r3!, {r1, r5, r6, fp}^
        363f0c:	08620861 	stmeqda	r2!, {r0, r5, r6, fp}^
        363f10:	08610860 	stmeqda	r1!, {r5, r6, fp}^
        363f14:	085f085f 	ldmeqda	pc, {r0, r1, r2, r3, r4, r6, fp}^
        363f18:	085e085e 	ldmeqda	lr, {r1, r2, r3, r4, r6, fp}^
        363f1c:	085d085d 	ldmeqda	sp, {r0, r2, r3, r4, r6, fp}^
        363f20:	085c085c 	ldmeqda	ip, {r2, r3, r4, r6, fp}^
        363f24:	085b085b 	ldmeqda	fp, {r0, r1, r3, r4, r6, fp}^
        363f28:	085a0859 	ldmeqda	sl, {r0, r3, r4, r6, fp}^
        363f2c:	08590858 	ldmeqda	r9, {r3, r4, r6, fp}^
        363f30:	08580857 	ldmeqda	r8, {r0, r1, r2, r4, r6, fp}^
        363f34:	08570856 	ldmeqda	r7, {r1, r2, r4, r6, fp}^
        363f38:	08560855 	ldmeqda	r6, {r0, r2, r4, r6, fp}^
        363f3c:	08540854 	ldmeqda	r4, {r2, r4, r6, fp}^
        363f40:	08530853 	ldmeqda	r3, {r0, r1, r4, r6, fp}^
        363f44:	08520852 	ldmeqda	r2, {r1, r4, r6, fp}^
        363f48:	08510851 	ldmeqda	r1, {r0, r4, r6, fp}^
        363f4c:	08500850 	ldmeqda	r0, {r4, r6, fp}^
        363f50:	084f084f 	stmeqda	pc, {r0, r1, r2, r3, r6, fp}^
        363f54:	084e084d 	stmeqda	lr, {r0, r2, r3, r6, fp}^
        363f58:	084d084c 	stmeqda	sp, {r2, r3, r6, fp}^
        363f5c:	084c084b 	stmeqda	ip, {r0, r1, r3, r6, fp}^
        363f60:	084b084a 	stmeqda	fp, {r1, r3, r6, fp}^
        363f64:	084a0849 	stmeqda	sl, {r0, r3, r6, fp}^
        363f68:	08490848 	stmeqda	r9, {r3, r6, fp}^
        363f6c:	08480847 	stmeqda	r8, {r0, r1, r2, r6, fp}^
        363f70:	08470846 	stmeqda	r7, {r1, r2, r6, fp}^
        363f74:	08460845 	stmeqda	r6, {r0, r2, r6, fp}^
        363f78:	08440844 	stmeqda	r4, {r2, r6, fp}^
        363f7c:	08430843 	stmeqda	r3, {r0, r1, r6, fp}^
        363f80:	08420842 	stmeqda	r2, {r1, r6, fp}^
        363f84:	08410841 	stmeqda	r1, {r0, r6, fp}^
        363f88:	08400840 	stmeqda	r0, {r6, fp}^
        363f8c:	083f083f 	ldmeqda	pc!, {r0, r1, r2, r3, r4, r5, fp}
        363f90:	083e083e 	ldmeqda	lr!, {r1, r2, r3, r4, r5, fp}
        363f94:	083d083d 	ldmeqda	sp!, {r0, r2, r3, r4, r5, fp}
        363f98:	083c083c 	ldmeqda	ip!, {r2, r3, r4, r5, fp}
        363f9c:	083b083b 	ldmeqda	fp!, {r0, r1, r3, r4, r5, fp}
        363fa0:	083a083a 	ldmeqda	sl!, {r1, r3, r4, r5, fp}
        363fa4:	08390838 	ldmeqda	r9!, {r3, r4, r5, fp}
        363fa8:	08380837 	ldmeqda	r8!, {r0, r1, r2, r4, r5, fp}
        363fac:	08370836 	ldmeqda	r7!, {r1, r2, r4, r5, fp}
        363fb0:	08360835 	ldmeqda	r6!, {r0, r2, r4, r5, fp}
        363fb4:	08350834 	ldmeqda	r5!, {r2, r4, r5, fp}
        363fb8:	08340833 	ldmeqda	r4!, {r0, r1, r4, r5, fp}
        363fbc:	08330832 	ldmeqda	r3!, {r1, r4, r5, fp}
        363fc0:	08320831 	ldmeqda	r2!, {r0, r4, r5, fp}
        363fc4:	08310830 	ldmeqda	r1!, {r4, r5, fp}
        363fc8:	0830082f 	ldmeqda	r0!, {r0, r1, r2, r3, r5, fp}
        363fcc:	082f082e 	stmeqda	pc!, {r1, r2, r3, r5, fp}
        363fd0:	082e082d 	stmeqda	lr!, {r0, r2, r3, r5, fp}
        363fd4:	082d082c 	stmeqda	sp!, {r2, r3, r5, fp}
        363fd8:	082c082b 	stmeqda	ip!, {r0, r1, r3, r5, fp}
        363fdc:	082b082a 	stmeqda	fp!, {r1, r3, r5, fp}
        363fe0:	082a0829 	stmeqda	sl!, {r0, r3, r5, fp}
        363fe4:	08290828 	stmeqda	r9!, {r3, r5, fp}
        363fe8:	08280827 	stmeqda	r8!, {r0, r1, r2, r5, fp}
        363fec:	08270826 	stmeqda	r7!, {r1, r2, r5, fp}
        363ff0:	08260825 	stmeqda	r6!, {r0, r2, r5, fp}
        363ff4:	08250824 	stmeqda	r5!, {r2, r5, fp}
        363ff8:	08240823 	stmeqda	r4!, {r0, r1, r5, fp}
        363ffc:	08230822 	stmeqda	r3!, {r1, r5, fp}
        364000:	08220821 	stmeqda	r2!, {r0, r5, fp}
        364004:	08210820 	stmeqda	r1!, {r5, fp}
        364008:	0820081f 	stmeqda	r0!, {r0, r1, r2, r3, r4, fp}
    */
}

/**
 * Symbol: ArProbDecodeLu
 * Address: 0036400c
 */
void globals::ArProbDecodeLu() {
    /*
        36400c:	00010000 	andeq	r0, r1, r0
        364010:	0000fbef 	andeq	pc, r0, pc, ror #23
        364014:	0000f7f0 	streqd	pc, [r0], -r0
        364018:	0000f400 	andeq	pc, r0, r0, lsl #8
        36401c:	0000f021 	andeq	pc, r0, r1, lsr #32
        364020:	0000ec51 	andeq	lr, r0, r1, asr ip
        364024:	0000e891 	muleq	r0, r1, r8
        364028:	0000e4e0 	andeq	lr, r0, r0, ror #9
        36402c:	0000e13e 	andeq	lr, r0, lr, lsr r1
        364030:	0000ddaa 	andeq	sp, r0, sl, lsr #27
        364034:	0000da26 	andeq	sp, r0, r6, lsr #20
        364038:	0000d6af 	andeq	sp, r0, pc, lsr #13
        36403c:	0000d347 	andeq	sp, r0, r7, asr #6
        364040:	0000cfec 	andeq	ip, r0, ip, ror #31
        364044:	0000cc9f 	muleq	r0, pc, ip
        364048:	0000c960 	andeq	ip, r0, r0, ror #18
        36404c:	0000c62e 	andeq	ip, r0, lr, lsr #12
        364050:	0000c308 	andeq	ip, r0, r8, lsl #6
        364054:	0000bff0 	streqd	fp, [r0], -r0
        364058:	0000bce4 	andeq	fp, r0, r4, ror #25
        36405c:	0000b9e4 	andeq	fp, r0, r4, ror #19
        364060:	0000b6f1 	streqd	fp, [r0], -r1
        364064:	0000b40a 	andeq	fp, r0, sl, lsl #8
        364068:	0000b12e 	andeq	fp, r0, lr, lsr #2
        36406c:	0000ae5e 	andeq	sl, r0, lr, asr lr
        364070:	0000ab9a 	muleq	r0, sl, fp
        364074:	0000a8e0 	andeq	sl, r0, r0, ror #17
        364078:	0000a632 	andeq	sl, r0, r2, lsr r6
        36407c:	0000a38f 	andeq	sl, r0, pc, lsl #7
        364080:	0000a0f6 	streqd	sl, [r0], -r6
        364084:	00009e68 	andeq	r9, r0, r8, ror #28
        364088:	00009be4 	andeq	r9, r0, r4, ror #23
        36408c:	0000996b 	andeq	r9, r0, fp, ror #18
        364090:	000096fc 	streqd	r9, [r0], -ip
        364094:	00009496 	muleq	r0, r6, r4
        364098:	0000923a 	andeq	r9, r0, sl, lsr r2
        36409c:	00008fe8 	andeq	r8, r0, r8, ror #31
        3640a0:	00008d9f 	muleq	r0, pc, sp
        3640a4:	00008b60 	andeq	r8, r0, r0, ror #22
        3640a8:	00008929 	andeq	r8, r0, r9, lsr #18
        3640ac:	000086fc 	streqd	r8, [r0], -ip
        3640b0:	000084d8 	ldreqd	r8, [r0], -r8
        3640b4:	000082bc 	streqh	r8, [r0], -ip
        3640b8:	000080a9 	andeq	r8, r0, r9, lsr #1
        3640bc:	00007e9e 	muleq	r0, lr, lr
        3640c0:	00007c9b 	muleq	r0, fp, ip
        3640c4:	00007aa1 	andeq	r7, r0, r1, lsr #21
        3640c8:	000078af 	andeq	r7, r0, pc, lsr #17
        3640cc:	000076c4 	andeq	r7, r0, r4, asr #13
        3640d0:	000074e2 	andeq	r7, r0, r2, ror #9
        3640d4:	00007307 	andeq	r7, r0, r7, lsl #6
        3640d8:	00007133 	andeq	r7, r0, r3, lsr r1
        3640dc:	00006f67 	andeq	r6, r0, r7, ror #30
        3640e0:	00006da3 	andeq	r6, r0, r3, lsr #27
        3640e4:	00006be5 	andeq	r6, r0, r5, ror #23
        3640e8:	00006a2f 	andeq	r6, r0, pc, lsr #20
        3640ec:	0000687f 	andeq	r6, r0, pc, ror r8
        3640f0:	000066d7 	ldreqd	r6, [r0], -r7
        3640f4:	00006535 	andeq	r6, r0, r5, lsr r5
        3640f8:	00006399 	muleq	r0, r9, r3
        3640fc:	00006205 	andeq	r6, r0, r5, lsl #4
        364100:	00006076 	andeq	r6, r0, r6, ror r0
        364104:	00005eee 	andeq	r5, r0, lr, ror #29
        364108:	00005d6d 	andeq	r5, r0, sp, ror #26
        36410c:	00005bf1 	streqd	r5, [r0], -r1
        364110:	00005a7c 	andeq	r5, r0, ip, ror sl
        364114:	0000590c 	andeq	r5, r0, ip, lsl #18
        364118:	000057a2 	andeq	r5, r0, r2, lsr #15
        36411c:	0000563e 	andeq	r5, r0, lr, lsr r6
        364120:	000054df 	ldreqd	r5, [r0], -pc
        364124:	00005387 	andeq	r5, r0, r7, lsl #7
        364128:	00005233 	andeq	r5, r0, r3, lsr r2
        36412c:	000050e5 	andeq	r5, r0, r5, ror #1
        364130:	00004f9c 	muleq	r0, ip, pc
        364134:	00004e59 	andeq	r4, r0, r9, asr lr
        364138:	00004d1b 	andeq	r4, r0, fp, lsl sp
        36413c:	00004be1 	andeq	r4, r0, r1, ror #23
        364140:	00004aad 	andeq	r4, r0, sp, lsr #21
        364144:	0000497d 	andeq	r4, r0, sp, ror r9
        364148:	00004853 	andeq	r4, r0, r3, asr r8
        36414c:	0000472d 	andeq	r4, r0, sp, lsr #14
        364150:	0000460c 	andeq	r4, r0, ip, lsl #12
        364154:	000044ef 	andeq	r4, r0, pc, ror #9
        364158:	000043d7 	ldreqd	r4, [r0], -r7
        36415c:	000042c3 	andeq	r4, r0, r3, asr #5
        364160:	000041b4 	streqh	r4, [r0], -r4
        364164:	000040a9 	andeq	r4, r0, r9, lsr #1
        364168:	00003fa2 	andeq	r3, r0, r2, lsr #31
        36416c:	00003ea0 	andeq	r3, r0, r0, lsr #29
        364170:	00003da1 	andeq	r3, r0, r1, lsr #27
        364174:	00003ca7 	andeq	r3, r0, r7, lsr #25
        364178:	00003bb0 	streqh	r3, [r0], -r0
        36417c:	00003abe 	streqh	r3, [r0], -lr
        364180:	000039cf 	andeq	r3, r0, pc, asr #19
        364184:	000038e4 	andeq	r3, r0, r4, ror #17
        364188:	000037fd 	streqd	r3, [r0], -sp
        36418c:	00003719 	andeq	r3, r0, r9, lsl r7
        364190:	0000363a 	andeq	r3, r0, sl, lsr r6
        364194:	0000355d 	andeq	r3, r0, sp, asr r5
        364198:	00003484 	andeq	r3, r0, r4, lsl #9
        36419c:	000033af 	andeq	r3, r0, pc, lsr #7
        3641a0:	000032dd 	ldreqd	r3, [r0], -sp
        3641a4:	0000320e 	andeq	r3, r0, lr, lsl #4
        3641a8:	00003143 	andeq	r3, r0, r3, asr #2
        3641ac:	0000307b 	andeq	r3, r0, fp, ror r0
        3641b0:	00002fb6 	streqh	r2, [r0], -r6
        3641b4:	00002ef4 	streqd	r2, [r0], -r4
        3641b8:	00002e35 	andeq	r2, r0, r5, lsr lr
        3641bc:	00002d79 	andeq	r2, r0, r9, ror sp
        3641c0:	00002cc0 	andeq	r2, r0, r0, asr #25
        3641c4:	00002c0b 	andeq	r2, r0, fp, lsl #24
        3641c8:	00002b58 	andeq	r2, r0, r8, asr fp
        3641cc:	00002aa8 	andeq	r2, r0, r8, lsr #21
        3641d0:	000029fa 	streqd	r2, [r0], -sl
        3641d4:	00002950 	andeq	r2, r0, r0, asr r9
        3641d8:	000028a8 	andeq	r2, r0, r8, lsr #17
        3641dc:	00002803 	andeq	r2, r0, r3, lsl #16
        3641e0:	00002760 	andeq	r2, r0, r0, ror #14
        3641e4:	000026c0 	andeq	r2, r0, r0, asr #13
        3641e8:	00002622 	andeq	r2, r0, r2, lsr #12
        3641ec:	00002588 	andeq	r2, r0, r8, lsl #11
        3641f0:	000024ef 	andeq	r2, r0, pc, ror #9
        3641f4:	00002459 	andeq	r2, r0, r9, asr r4
        3641f8:	000023c5 	andeq	r2, r0, r5, asr #7
        3641fc:	00002334 	andeq	r2, r0, r4, lsr r3
        364200:	000022a5 	andeq	r2, r0, r5, lsr #5
        364204:	00002218 	andeq	r2, r0, r8, lsl r2
        364208:	0000218e 	andeq	r2, r0, lr, lsl #3
        36420c:	00002105 	andeq	r2, r0, r5, lsl #2
        364210:	0000207f 	andeq	r2, r0, pc, ror r0
        364214:	00001ffb 	streqd	r1, [r0], -fp
        364218:	00001f79 	andeq	r1, r0, r9, ror pc
        36421c:	00001ef9 	streqd	r1, [r0], -r9
        364220:	00001e7b 	andeq	r1, r0, fp, ror lr
        364224:	00001dff 	streqd	r1, [r0], -pc
        364228:	00001d85 	andeq	r1, r0, r5, lsl #27
        36422c:	00001d0d 	andeq	r1, r0, sp, lsl #26
        364230:	00001c97 	muleq	r0, r7, ip
        364234:	00001c23 	andeq	r1, r0, r3, lsr #24
        364238:	00001bb1 	streqh	r1, [r0], -r1
        36423c:	00001b40 	andeq	r1, r0, r0, asr #22
        364240:	00001ad2 	ldreqd	r1, [r0], -r2
        364244:	00001a65 	andeq	r1, r0, r5, ror #20
        364248:	000019f9 	streqd	r1, [r0], -r9
        36424c:	00001990 	muleq	r0, r0, r9
        364250:	00001928 	andeq	r1, r0, r8, lsr #18
        364254:	000018c2 	andeq	r1, r0, r2, asr #17
        364258:	0000185d 	andeq	r1, r0, sp, asr r8
        36425c:	000017fa 	streqd	r1, [r0], -sl
        364260:	00001799 	muleq	r0, r9, r7
        364264:	00001739 	andeq	r1, r0, r9, lsr r7
        364268:	000016da 	ldreqd	r1, [r0], -sl
        36426c:	0000167e 	andeq	r1, r0, lr, ror r6
        364270:	00001622 	andeq	r1, r0, r2, lsr #12
        364274:	000015c8 	andeq	r1, r0, r8, asr #11
        364278:	00001570 	andeq	r1, r0, r0, ror r5
        36427c:	00001519 	andeq	r1, r0, r9, lsl r5
        364280:	000014c3 	andeq	r1, r0, r3, asr #9
        364284:	0000146e 	andeq	r1, r0, lr, ror #8
        364288:	0000141b 	andeq	r1, r0, fp, lsl r4
        36428c:	000013ca 	andeq	r1, r0, sl, asr #7
        364290:	00001379 	andeq	r1, r0, r9, ror r3
        364294:	0000132a 	andeq	r1, r0, sl, lsr #6
        364298:	000012dc 	ldreqd	r1, [r0], -ip
        36429c:	00001290 	muleq	r0, r0, r2
        3642a0:	00001244 	andeq	r1, r0, r4, asr #4
        3642a4:	000011fa 	streqd	r1, [r0], -sl
        3642a8:	000011b1 	streqh	r1, [r0], -r1
        3642ac:	00001169 	andeq	r1, r0, r9, ror #2
        3642b0:	00001122 	andeq	r1, r0, r2, lsr #2
        3642b4:	000010dd 	ldreqd	r1, [r0], -sp
        3642b8:	00001098 	muleq	r0, r8, r0
        3642bc:	00001055 	andeq	r1, r0, r5, asr r0
        3642c0:	00001012 	andeq	r1, r0, r2, lsl r0
        3642c4:	00000fd1 	ldreqd	r0, [r0], -r1
        3642c8:	00000f91 	muleq	r0, r1, pc
        3642cc:	00000f51 	andeq	r0, r0, r1, asr pc
        3642d0:	00000f13 	andeq	r0, r0, r3, lsl pc
        3642d4:	00000ed6 	ldreqd	r0, [r0], -r6
        3642d8:	00000e9a 	muleq	r0, sl, lr
        3642dc:	00000e5e 	andeq	r0, r0, lr, asr lr
        3642e0:	00000e24 	andeq	r0, r0, r4, lsr #28
        3642e4:	00000dea 	andeq	r0, r0, sl, ror #27
        3642e8:	00000db2 	streqh	r0, [r0], -r2
        3642ec:	00000d7a 	andeq	r0, r0, sl, ror sp
        3642f0:	00000d44 	andeq	r0, r0, r4, asr #26
        3642f4:	00000d0e 	andeq	r0, r0, lr, lsl #26
        3642f8:	00000cd9 	ldreqd	r0, [r0], -r9
        3642fc:	00000ca4 	andeq	r0, r0, r4, lsr #25
        364300:	00000c71 	andeq	r0, r0, r1, ror ip
        364304:	00000c3e 	andeq	r0, r0, lr, lsr ip
        364308:	00000c0d 	andeq	r0, r0, sp, lsl #24
        36430c:	00000bdc 	ldreqd	r0, [r0], -ip
        364310:	00000bab 	andeq	r0, r0, fp, lsr #23
        364314:	00000b7c 	andeq	r0, r0, ip, ror fp
        364318:	00000b4d 	andeq	r0, r0, sp, asr #22
        36431c:	00000b1f 	andeq	r0, r0, pc, lsl fp
        364320:	00000af2 	streqd	r0, [r0], -r2
        364324:	00000ac6 	andeq	r0, r0, r6, asr #21
        364328:	00000a9a 	muleq	r0, sl, sl
        36432c:	00000a6f 	andeq	r0, r0, pc, ror #20
        364330:	00000a44 	andeq	r0, r0, r4, asr #20
        364334:	00000a1b 	andeq	r0, r0, fp, lsl sl
        364338:	000009f2 	streqd	r0, [r0], -r2
        36433c:	000009c9 	andeq	r0, r0, r9, asr #19
        364340:	000009a2 	andeq	r0, r0, r2, lsr #19
        364344:	0000097a 	andeq	r0, r0, sl, ror r9
        364348:	00000954 	andeq	r0, r0, r4, asr r9
        36434c:	0000092e 	andeq	r0, r0, lr, lsr #18
        364350:	00000909 	andeq	r0, r0, r9, lsl #18
        364354:	000008e4 	andeq	r0, r0, r4, ror #17
        364358:	000008c0 	andeq	r0, r0, r0, asr #17
        36435c:	0000089c 	muleq	r0, ip, r8
        364360:	00000879 	andeq	r0, r0, r9, ror r8
        364364:	00000857 	andeq	r0, r0, r7, asr r8
        364368:	00000835 	andeq	r0, r0, r5, lsr r8
        36436c:	00000814 	andeq	r0, r0, r4, lsl r8
        364370:	000007f3 	streqd	r0, [r0], -r3
        364374:	000007d2 	ldreqd	r0, [r0], -r2
        364378:	000007b3 	streqh	r0, [r0], -r3
        36437c:	00000793 	muleq	r0, r3, r7
        364380:	00000775 	andeq	r0, r0, r5, ror r7
        364384:	00000756 	andeq	r0, r0, r6, asr r7
        364388:	00000738 	andeq	r0, r0, r8, lsr r7
        36438c:	0000071b 	andeq	r0, r0, fp, lsl r7
        364390:	000006fe 	streqd	r0, [r0], -lr
        364394:	000006e2 	andeq	r0, r0, r2, ror #13
        364398:	000006c6 	andeq	r0, r0, r6, asr #13
        36439c:	000006aa 	andeq	r0, r0, sl, lsr #13
        3643a0:	0000068f 	andeq	r0, r0, pc, lsl #13
        3643a4:	00000675 	andeq	r0, r0, r5, ror r6
        3643a8:	0000065a 	andeq	r0, r0, sl, asr r6
        3643ac:	00000640 	andeq	r0, r0, r0, asr #12
        3643b0:	00000627 	andeq	r0, r0, r7, lsr #12
        3643b4:	0000060e 	andeq	r0, r0, lr, lsl #12
        3643b8:	000005f5 	streqd	r0, [r0], -r5
        3643bc:	000005dd 	ldreqd	r0, [r0], -sp
        3643c0:	000005c5 	andeq	r0, r0, r5, asr #11
        3643c4:	000005ae 	andeq	r0, r0, lr, lsr #11
        3643c8:	00000597 	muleq	r0, r7, r5
        3643cc:	00000580 	andeq	r0, r0, r0, lsl #11
        3643d0:	0000056a 	andeq	r0, r0, sl, ror #10
        3643d4:	00000554 	andeq	r0, r0, r4, asr r5
        3643d8:	0000053e 	andeq	r0, r0, lr, lsr r5
        3643dc:	00000529 	andeq	r0, r0, r9, lsr #10
        3643e0:	00000514 	andeq	r0, r0, r4, lsl r5
        3643e4:	000004ff 	streqd	r0, [r0], -pc
        3643e8:	000004eb 	andeq	r0, r0, fp, ror #9
        3643ec:	000004d7 	ldreqd	r0, [r0], -r7
        3643f0:	000004c3 	andeq	r0, r0, r3, asr #9
        3643f4:	000004b0 	streqh	r0, [r0], -r0
        3643f8:	0000049d 	muleq	r0, sp, r4
        3643fc:	0000048a 	andeq	r0, r0, sl, lsl #9
        364400:	00000478 	andeq	r0, r0, r8, ror r4
        364404:	00000465 	andeq	r0, r0, r5, ror #8
        364408:	00000454 	andeq	r0, r0, r4, asr r4
        36440c:	00000442 	andeq	r0, r0, r2, asr #8
        364410:	00000431 	andeq	r0, r0, r1, lsr r4
        364414:	00000420 	andeq	r0, r0, r0, lsr #8
        364418:	0000040f 	andeq	r0, r0, pc, lsl #8
        36441c:	000003fe 	streqd	r0, [r0], -lr
        364420:	000003ee 	andeq	r0, r0, lr, ror #7
        364424:	000003de 	ldreqd	r0, [r0], -lr
        364428:	000003ce 	andeq	r0, r0, lr, asr #7
        36442c:	000003bf 	streqh	r0, [r0], -pc
        364430:	000003b0 	streqh	r0, [r0], -r0
        364434:	000003a1 	andeq	r0, r0, r1, lsr #7
        364438:	00000392 	muleq	r0, r2, r3
        36443c:	00000383 	andeq	r0, r0, r3, lsl #7
        364440:	00000375 	andeq	r0, r0, r5, ror r3
        364444:	00000367 	andeq	r0, r0, r7, ror #6
        364448:	00000359 	andeq	r0, r0, r9, asr r3
        36444c:	0000034c 	andeq	r0, r0, ip, asr #6
        364450:	0000033e 	andeq	r0, r0, lr, lsr r3
        364454:	00000331 	andeq	r0, r0, r1, lsr r3
        364458:	00000324 	andeq	r0, r0, r4, lsr #6
        36445c:	00000317 	andeq	r0, r0, r7, lsl r3
        364460:	0000030b 	andeq	r0, r0, fp, lsl #6
        364464:	000002fe 	streqd	r0, [r0], -lr
        364468:	000002f2 	streqd	r0, [r0], -r2
        36446c:	000002e6 	andeq	r0, r0, r6, ror #5
        364470:	000002da 	ldreqd	r0, [r0], -sl
        364474:	000002cf 	andeq	r0, r0, pc, asr #5
        364478:	000002c3 	andeq	r0, r0, r3, asr #5
        36447c:	000002b8 	streqh	r0, [r0], -r8
        364480:	000002ad 	andeq	r0, r0, sp, lsr #5
        364484:	000002a2 	andeq	r0, r0, r2, lsr #5
        364488:	00000298 	muleq	r0, r8, r2
        36448c:	0000028d 	andeq	r0, r0, sp, lsl #5
        364490:	00000283 	andeq	r0, r0, r3, lsl #5
        364494:	00000278 	andeq	r0, r0, r8, ror r2
        364498:	0000026e 	andeq	r0, r0, lr, ror #4
        36449c:	00000264 	andeq	r0, r0, r4, ror #4
        3644a0:	0000025b 	andeq	r0, r0, fp, asr r2
        3644a4:	00000251 	andeq	r0, r0, r1, asr r2
        3644a8:	00000248 	andeq	r0, r0, r8, asr #4
        3644ac:	0000023e 	andeq	r0, r0, lr, lsr r2
        3644b0:	00000235 	andeq	r0, r0, r5, lsr r2
        3644b4:	0000022c 	andeq	r0, r0, ip, lsr #4
        3644b8:	00000224 	andeq	r0, r0, r4, lsr #4
        3644bc:	0000021b 	andeq	r0, r0, fp, lsl r2
        3644c0:	00000212 	andeq	r0, r0, r2, lsl r2
        3644c4:	0000020a 	andeq	r0, r0, sl, lsl #4
        3644c8:	00000202 	andeq	r0, r0, r2, lsl #4
        3644cc:	000001f9 	streqd	r0, [r0], -r9
        3644d0:	000001f1 	streqd	r0, [r0], -r1
        3644d4:	000001e9 	andeq	r0, r0, r9, ror #3
        3644d8:	000001e2 	andeq	r0, r0, r2, ror #3
        3644dc:	000001da 	ldreqd	r0, [r0], -sl
        3644e0:	000001d3 	ldreqd	r0, [r0], -r3
        3644e4:	000001cb 	andeq	r0, r0, fp, asr #3
        3644e8:	000001c4 	andeq	r0, r0, r4, asr #3
        3644ec:	000001bd 	streqh	r0, [r0], -sp
        3644f0:	000001b6 	streqh	r0, [r0], -r6
        3644f4:	000001af 	andeq	r0, r0, pc, lsr #3
        3644f8:	000001a8 	andeq	r0, r0, r8, lsr #3
        3644fc:	000001a1 	andeq	r0, r0, r1, lsr #3
        364500:	0000019a 	muleq	r0, sl, r1
        364504:	00000194 	muleq	r0, r4, r1
        364508:	0000018d 	andeq	r0, r0, sp, lsl #3
        36450c:	00000187 	andeq	r0, r0, r7, lsl #3
        364510:	00000181 	andeq	r0, r0, r1, lsl #3
        364514:	0000017b 	andeq	r0, r0, fp, ror r1
        364518:	00000175 	andeq	r0, r0, r5, ror r1
        36451c:	0000016f 	andeq	r0, r0, pc, ror #2
        364520:	00000169 	andeq	r0, r0, r9, ror #2
        364524:	00000163 	andeq	r0, r0, r3, ror #2
        364528:	0000015e 	andeq	r0, r0, lr, asr r1
        36452c:	00000158 	andeq	r0, r0, r8, asr r1
        364530:	00000153 	andeq	r0, r0, r3, asr r1
        364534:	0000014d 	andeq	r0, r0, sp, asr #2
        364538:	00000148 	andeq	r0, r0, r8, asr #2
        36453c:	00000143 	andeq	r0, r0, r3, asr #2
        364540:	0000013e 	andeq	r0, r0, lr, lsr r1
        364544:	00000139 	andeq	r0, r0, r9, lsr r1
        364548:	00000134 	andeq	r0, r0, r4, lsr r1
        36454c:	0000012f 	andeq	r0, r0, pc, lsr #2
        364550:	0000012a 	andeq	r0, r0, sl, lsr #2
        364554:	00000125 	andeq	r0, r0, r5, lsr #2
        364558:	00000120 	andeq	r0, r0, r0, lsr #2
        36455c:	0000011c 	andeq	r0, r0, ip, lsl r1
        364560:	00000117 	andeq	r0, r0, r7, lsl r1
        364564:	00000113 	andeq	r0, r0, r3, lsl r1
        364568:	0000010f 	andeq	r0, r0, pc, lsl #2
        36456c:	0000010a 	andeq	r0, r0, sl, lsl #2
        364570:	00000106 	andeq	r0, r0, r6, lsl #2
        364574:	00000102 	andeq	r0, r0, r2, lsl #2
        364578:	000000fe 	streqd	r0, [r0], -lr
        36457c:	000000fa 	streqd	r0, [r0], -sl
        364580:	000000f6 	streqd	r0, [r0], -r6
        364584:	000000f2 	streqd	r0, [r0], -r2
        364588:	000000ee 	andeq	r0, r0, lr, ror #1
        36458c:	000000ea 	andeq	r0, r0, sl, ror #1
        364590:	000000e6 	andeq	r0, r0, r6, ror #1
        364594:	000000e3 	andeq	r0, r0, r3, ror #1
        364598:	000000df 	ldreqd	r0, [r0], -pc
        36459c:	000000dc 	ldreqd	r0, [r0], -ip
        3645a0:	000000d8 	ldreqd	r0, [r0], -r8
        3645a4:	000000d5 	ldreqd	r0, [r0], -r5
        3645a8:	000000d1 	ldreqd	r0, [r0], -r1
        3645ac:	000000ce 	andeq	r0, r0, lr, asr #1
        3645b0:	000000cb 	andeq	r0, r0, fp, asr #1
        3645b4:	000000c8 	andeq	r0, r0, r8, asr #1
        3645b8:	000000c4 	andeq	r0, r0, r4, asr #1
        3645bc:	000000c1 	andeq	r0, r0, r1, asr #1
        3645c0:	000000be 	streqh	r0, [r0], -lr
        3645c4:	000000bb 	streqh	r0, [r0], -fp
        3645c8:	000000b8 	streqh	r0, [r0], -r8
        3645cc:	000000b5 	streqh	r0, [r0], -r5
        3645d0:	000000b2 	streqh	r0, [r0], -r2
        3645d4:	000000af 	andeq	r0, r0, pc, lsr #1
        3645d8:	000000ad 	andeq	r0, r0, sp, lsr #1
        3645dc:	000000aa 	andeq	r0, r0, sl, lsr #1
        3645e0:	000000a7 	andeq	r0, r0, r7, lsr #1
        3645e4:	000000a5 	andeq	r0, r0, r5, lsr #1
        3645e8:	000000a2 	andeq	r0, r0, r2, lsr #1
        3645ec:	0000009f 	muleq	r0, pc, r0
        3645f0:	0000009d 	muleq	r0, sp, r0
        3645f4:	0000009a 	muleq	r0, sl, r0
        3645f8:	00000098 	muleq	r0, r8, r0
        3645fc:	00000095 	muleq	r0, r5, r0
        364600:	00000093 	muleq	r0, r3, r0
        364604:	00000091 	muleq	r0, r1, r0
        364608:	0000008e 	andeq	r0, r0, lr, lsl #1
        36460c:	0000008c 	andeq	r0, r0, ip, lsl #1
        364610:	0000008a 	andeq	r0, r0, sl, lsl #1
        364614:	00000088 	andeq	r0, r0, r8, lsl #1
        364618:	00000086 	andeq	r0, r0, r6, lsl #1
        36461c:	00000083 	andeq	r0, r0, r3, lsl #1
        364620:	00000081 	andeq	r0, r0, r1, lsl #1
        364624:	0000007f 	andeq	r0, r0, pc, ror r0
        364628:	0000007d 	andeq	r0, r0, sp, ror r0
        36462c:	0000007b 	andeq	r0, r0, fp, ror r0
        364630:	00000079 	andeq	r0, r0, r9, ror r0
        364634:	00000077 	andeq	r0, r0, r7, ror r0
        364638:	00000075 	andeq	r0, r0, r5, ror r0
        36463c:	00000074 	andeq	r0, r0, r4, ror r0
        364640:	00000072 	andeq	r0, r0, r2, ror r0
        364644:	00000070 	andeq	r0, r0, r0, ror r0
        364648:	0000006e 	andeq	r0, r0, lr, rrx
        36464c:	0000006c 	andeq	r0, r0, ip, rrx
        364650:	0000006b 	andeq	r0, r0, fp, rrx
        364654:	00000069 	andeq	r0, r0, r9, rrx
        364658:	00000067 	andeq	r0, r0, r7, rrx
        36465c:	00000066 	andeq	r0, r0, r6, rrx
        364660:	00000064 	andeq	r0, r0, r4, rrx
        364664:	00000062 	andeq	r0, r0, r2, rrx
        364668:	00000061 	andeq	r0, r0, r1, rrx
        36466c:	0000005f 	andeq	r0, r0, pc, asr r0
        364670:	0000005e 	andeq	r0, r0, lr, asr r0
        364674:	0000005c 	andeq	r0, r0, ip, asr r0
        364678:	0000005b 	andeq	r0, r0, fp, asr r0
        36467c:	00000059 	andeq	r0, r0, r9, asr r0
        364680:	00000058 	andeq	r0, r0, r8, asr r0
        364684:	00000057 	andeq	r0, r0, r7, asr r0
        364688:	00000055 	andeq	r0, r0, r5, asr r0
        36468c:	00000054 	andeq	r0, r0, r4, asr r0
        364690:	00000052 	andeq	r0, r0, r2, asr r0
        364694:	00000051 	andeq	r0, r0, r1, asr r0
        364698:	00000050 	andeq	r0, r0, r0, asr r0
        36469c:	0000004f 	andeq	r0, r0, pc, asr #32
        3646a0:	0000004d 	andeq	r0, r0, sp, asr #32
        3646a4:	0000004c 	andeq	r0, r0, ip, asr #32
        3646a8:	0000004b 	andeq	r0, r0, fp, asr #32
        3646ac:	0000004a 	andeq	r0, r0, sl, asr #32
        3646b0:	00000048 	andeq	r0, r0, r8, asr #32
        3646b4:	00000047 	andeq	r0, r0, r7, asr #32
        3646b8:	00000046 	andeq	r0, r0, r6, asr #32
        3646bc:	00000045 	andeq	r0, r0, r5, asr #32
        3646c0:	00000044 	andeq	r0, r0, r4, asr #32
        3646c4:	00000043 	andeq	r0, r0, r3, asr #32
        3646c8:	00000042 	andeq	r0, r0, r2, asr #32
        3646cc:	00000041 	andeq	r0, r0, r1, asr #32
        3646d0:	00000040 	andeq	r0, r0, r0, asr #32
        3646d4:	0000003f 	andeq	r0, r0, pc, lsr r0
        3646d8:	0000003e 	andeq	r0, r0, lr, lsr r0
        3646dc:	0000003d 	andeq	r0, r0, sp, lsr r0
        3646e0:	0000003c 	andeq	r0, r0, ip, lsr r0
        3646e4:	0000003b 	andeq	r0, r0, fp, lsr r0
        3646e8:	0000003a 	andeq	r0, r0, sl, lsr r0
        3646ec:	00000039 	andeq	r0, r0, r9, lsr r0
        3646f0:	00000038 	andeq	r0, r0, r8, lsr r0
        3646f4:	00000037 	andeq	r0, r0, r7, lsr r0
        3646f8:	00000036 	andeq	r0, r0, r6, lsr r0
        3646fc:	00000035 	andeq	r0, r0, r5, lsr r0
        364700:	00000035 	andeq	r0, r0, r5, lsr r0
        364704:	00000034 	andeq	r0, r0, r4, lsr r0
        364708:	00000033 	andeq	r0, r0, r3, lsr r0
        36470c:	00000032 	andeq	r0, r0, r2, lsr r0
        364710:	00000031 	andeq	r0, r0, r1, lsr r0
        364714:	00000030 	andeq	r0, r0, r0, lsr r0
        364718:	00000030 	andeq	r0, r0, r0, lsr r0
        36471c:	0000002f 	andeq	r0, r0, pc, lsr #32
        364720:	0000002e 	andeq	r0, r0, lr, lsr #32
        364724:	0000002d 	andeq	r0, r0, sp, lsr #32
        364728:	0000002d 	andeq	r0, r0, sp, lsr #32
        36472c:	0000002c 	andeq	r0, r0, ip, lsr #32
        364730:	0000002b 	andeq	r0, r0, fp, lsr #32
        364734:	0000002b 	andeq	r0, r0, fp, lsr #32
        364738:	0000002a 	andeq	r0, r0, sl, lsr #32
        36473c:	00000029 	andeq	r0, r0, r9, lsr #32
        364740:	00000029 	andeq	r0, r0, r9, lsr #32
        364744:	00000028 	andeq	r0, r0, r8, lsr #32
        364748:	00000027 	andeq	r0, r0, r7, lsr #32
        36474c:	00000027 	andeq	r0, r0, r7, lsr #32
        364750:	00000026 	andeq	r0, r0, r6, lsr #32
        364754:	00000025 	andeq	r0, r0, r5, lsr #32
        364758:	00000025 	andeq	r0, r0, r5, lsr #32
        36475c:	00000024 	andeq	r0, r0, r4, lsr #32
        364760:	00000024 	andeq	r0, r0, r4, lsr #32
        364764:	00000023 	andeq	r0, r0, r3, lsr #32
        364768:	00000022 	andeq	r0, r0, r2, lsr #32
        36476c:	00000022 	andeq	r0, r0, r2, lsr #32
        364770:	00000021 	andeq	r0, r0, r1, lsr #32
        364774:	00000021 	andeq	r0, r0, r1, lsr #32
        364778:	00000020 	andeq	r0, r0, r0, lsr #32
        36477c:	00000020 	andeq	r0, r0, r0, lsr #32
        364780:	0000001f 	andeq	r0, r0, pc, lsl r0
        364784:	0000001f 	andeq	r0, r0, pc, lsl r0
        364788:	0000001e 	andeq	r0, r0, lr, lsl r0
        36478c:	0000001e 	andeq	r0, r0, lr, lsl r0
        364790:	0000001d 	andeq	r0, r0, sp, lsl r0
        364794:	0000001d 	andeq	r0, r0, sp, lsl r0
        364798:	0000001c 	andeq	r0, r0, ip, lsl r0
        36479c:	0000001c 	andeq	r0, r0, ip, lsl r0
        3647a0:	0000001b 	andeq	r0, r0, fp, lsl r0
        3647a4:	0000001b 	andeq	r0, r0, fp, lsl r0
        3647a8:	0000001b 	andeq	r0, r0, fp, lsl r0
        3647ac:	0000001a 	andeq	r0, r0, sl, lsl r0
        3647b0:	0000001a 	andeq	r0, r0, sl, lsl r0
        3647b4:	00000019 	andeq	r0, r0, r9, lsl r0
        3647b8:	00000019 	andeq	r0, r0, r9, lsl r0
        3647bc:	00000018 	andeq	r0, r0, r8, lsl r0
        3647c0:	00000018 	andeq	r0, r0, r8, lsl r0
        3647c4:	00000018 	andeq	r0, r0, r8, lsl r0
        3647c8:	00000017 	andeq	r0, r0, r7, lsl r0
        3647cc:	00000017 	andeq	r0, r0, r7, lsl r0
        3647d0:	00000017 	andeq	r0, r0, r7, lsl r0
        3647d4:	00000016 	andeq	r0, r0, r6, lsl r0
        3647d8:	00000016 	andeq	r0, r0, r6, lsl r0
        3647dc:	00000015 	andeq	r0, r0, r5, lsl r0
        3647e0:	00000015 	andeq	r0, r0, r5, lsl r0
        3647e4:	00000015 	andeq	r0, r0, r5, lsl r0
        3647e8:	00000014 	andeq	r0, r0, r4, lsl r0
        3647ec:	00000014 	andeq	r0, r0, r4, lsl r0
        3647f0:	00000014 	andeq	r0, r0, r4, lsl r0
        3647f4:	00000013 	andeq	r0, r0, r3, lsl r0
        3647f8:	00000013 	andeq	r0, r0, r3, lsl r0
        3647fc:	00000013 	andeq	r0, r0, r3, lsl r0
        364800:	00000013 	andeq	r0, r0, r3, lsl r0
        364804:	00000012 	andeq	r0, r0, r2, lsl r0
        364808:	00000012 	andeq	r0, r0, r2, lsl r0
        36480c:	00000012 	andeq	r0, r0, r2, lsl r0
        364810:	00000011 	andeq	r0, r0, r1, lsl r0
        364814:	00000011 	andeq	r0, r0, r1, lsl r0
        364818:	00000011 	andeq	r0, r0, r1, lsl r0
        36481c:	00000011 	andeq	r0, r0, r1, lsl r0
        364820:	00000010 	andeq	r0, r0, r0, lsl r0
        364824:	00000010 	andeq	r0, r0, r0, lsl r0
        364828:	00000010 	andeq	r0, r0, r0, lsl r0
        36482c:	0000000f 	andeq	r0, r0, pc
        364830:	0000000f 	andeq	r0, r0, pc
        364834:	0000000f 	andeq	r0, r0, pc
        364838:	0000000f 	andeq	r0, r0, pc
        36483c:	0000000e 	andeq	r0, r0, lr
        364840:	0000000e 	andeq	r0, r0, lr
        364844:	0000000e 	andeq	r0, r0, lr
        364848:	0000000e 	andeq	r0, r0, lr
        36484c:	0000000e 	andeq	r0, r0, lr
        364850:	0000000d 	andeq	r0, r0, sp
        364854:	0000000d 	andeq	r0, r0, sp
        364858:	0000000d 	andeq	r0, r0, sp
        36485c:	0000000d 	andeq	r0, r0, sp
        364860:	0000000c 	andeq	r0, r0, ip
        364864:	0000000c 	andeq	r0, r0, ip
        364868:	0000000c 	andeq	r0, r0, ip
        36486c:	0000000c 	andeq	r0, r0, ip
        364870:	0000000c 	andeq	r0, r0, ip
        364874:	0000000b 	andeq	r0, r0, fp
        364878:	0000000b 	andeq	r0, r0, fp
        36487c:	0000000b 	andeq	r0, r0, fp
        364880:	0000000b 	andeq	r0, r0, fp
        364884:	0000000b 	andeq	r0, r0, fp
        364888:	0000000b 	andeq	r0, r0, fp
        36488c:	0000000a 	andeq	r0, r0, sl
        364890:	0000000a 	andeq	r0, r0, sl
        364894:	0000000a 	andeq	r0, r0, sl
        364898:	0000000a 	andeq	r0, r0, sl
        36489c:	0000000a 	andeq	r0, r0, sl
        3648a0:	0000000a 	andeq	r0, r0, sl
        3648a4:	00000009 	andeq	r0, r0, r9
        3648a8:	00000009 	andeq	r0, r0, r9
        3648ac:	00000009 	andeq	r0, r0, r9
        3648b0:	00000009 	andeq	r0, r0, r9
        3648b4:	00000009 	andeq	r0, r0, r9
        3648b8:	00000009 	andeq	r0, r0, r9
        3648bc:	00000008 	andeq	r0, r0, r8
        3648c0:	00000008 	andeq	r0, r0, r8
        3648c4:	00000008 	andeq	r0, r0, r8
        3648c8:	00000008 	andeq	r0, r0, r8
        3648cc:	00000008 	andeq	r0, r0, r8
        3648d0:	00000008 	andeq	r0, r0, r8
        3648d4:	00000008 	andeq	r0, r0, r8
        3648d8:	00000008 	andeq	r0, r0, r8
        3648dc:	00000007 	andeq	r0, r0, r7
        3648e0:	00000007 	andeq	r0, r0, r7
        3648e4:	00000007 	andeq	r0, r0, r7
        3648e8:	00000007 	andeq	r0, r0, r7
        3648ec:	00000007 	andeq	r0, r0, r7
        3648f0:	00000007 	andeq	r0, r0, r7
        3648f4:	00000007 	andeq	r0, r0, r7
        3648f8:	00000007 	andeq	r0, r0, r7
        3648fc:	00000006 	andeq	r0, r0, r6
        364900:	00000006 	andeq	r0, r0, r6
        364904:	00000006 	andeq	r0, r0, r6
        364908:	00000006 	andeq	r0, r0, r6
        36490c:	00000006 	andeq	r0, r0, r6
        364910:	00000006 	andeq	r0, r0, r6
        364914:	00000006 	andeq	r0, r0, r6
        364918:	00000006 	andeq	r0, r0, r6
        36491c:	00000006 	andeq	r0, r0, r6
        364920:	00000006 	andeq	r0, r0, r6
        364924:	00000005 	andeq	r0, r0, r5
        364928:	00000005 	andeq	r0, r0, r5
        36492c:	00000005 	andeq	r0, r0, r5
        364930:	00000005 	andeq	r0, r0, r5
        364934:	00000005 	andeq	r0, r0, r5
        364938:	00000005 	andeq	r0, r0, r5
        36493c:	00000005 	andeq	r0, r0, r5
        364940:	00000005 	andeq	r0, r0, r5
        364944:	00000005 	andeq	r0, r0, r5
        364948:	00000005 	andeq	r0, r0, r5
        36494c:	00000005 	andeq	r0, r0, r5
        364950:	00000004 	andeq	r0, r0, r4
        364954:	00000004 	andeq	r0, r0, r4
        364958:	00000004 	andeq	r0, r0, r4
        36495c:	00000004 	andeq	r0, r0, r4
        364960:	00000004 	andeq	r0, r0, r4
        364964:	00000004 	andeq	r0, r0, r4
        364968:	00000004 	andeq	r0, r0, r4
        36496c:	00000004 	andeq	r0, r0, r4
        364970:	00000004 	andeq	r0, r0, r4
        364974:	00000004 	andeq	r0, r0, r4
        364978:	00000004 	andeq	r0, r0, r4
        36497c:	00000004 	andeq	r0, r0, r4
        364980:	00000004 	andeq	r0, r0, r4
        364984:	00000004 	andeq	r0, r0, r4
        364988:	00000003 	andeq	r0, r0, r3
        36498c:	00000003 	andeq	r0, r0, r3
        364990:	00000003 	andeq	r0, r0, r3
        364994:	00000003 	andeq	r0, r0, r3
        364998:	00000003 	andeq	r0, r0, r3
        36499c:	00000003 	andeq	r0, r0, r3
        3649a0:	00000003 	andeq	r0, r0, r3
        3649a4:	00000003 	andeq	r0, r0, r3
        3649a8:	00000003 	andeq	r0, r0, r3
        3649ac:	00000003 	andeq	r0, r0, r3
        3649b0:	00000003 	andeq	r0, r0, r3
        3649b4:	00000003 	andeq	r0, r0, r3
        3649b8:	00000003 	andeq	r0, r0, r3
        3649bc:	00000003 	andeq	r0, r0, r3
        3649c0:	00000003 	andeq	r0, r0, r3
        3649c4:	00000003 	andeq	r0, r0, r3
        3649c8:	00000003 	andeq	r0, r0, r3
        3649cc:	00000003 	andeq	r0, r0, r3
        3649d0:	00000002 	andeq	r0, r0, r2
        3649d4:	00000002 	andeq	r0, r0, r2
        3649d8:	00000002 	andeq	r0, r0, r2
        3649dc:	00000002 	andeq	r0, r0, r2
        3649e0:	00000002 	andeq	r0, r0, r2
        3649e4:	00000002 	andeq	r0, r0, r2
        3649e8:	00000002 	andeq	r0, r0, r2
        3649ec:	00000002 	andeq	r0, r0, r2
        3649f0:	00000002 	andeq	r0, r0, r2
        3649f4:	00000002 	andeq	r0, r0, r2
        3649f8:	00000002 	andeq	r0, r0, r2
        3649fc:	00000002 	andeq	r0, r0, r2
        364a00:	00000002 	andeq	r0, r0, r2
        364a04:	00000002 	andeq	r0, r0, r2
        364a08:	00000002 	andeq	r0, r0, r2
        364a0c:	00000002 	andeq	r0, r0, r2
        364a10:	00000002 	andeq	r0, r0, r2
        364a14:	00000002 	andeq	r0, r0, r2
        364a18:	00000002 	andeq	r0, r0, r2
        364a1c:	00000002 	andeq	r0, r0, r2
        364a20:	00000002 	andeq	r0, r0, r2
        364a24:	00000002 	andeq	r0, r0, r2
        364a28:	00000002 	andeq	r0, r0, r2
        364a2c:	00000002 	andeq	r0, r0, r2
        364a30:	00000002 	andeq	r0, r0, r2
        364a34:	00000001 	andeq	r0, r0, r1
        364a38:	00000001 	andeq	r0, r0, r1
        364a3c:	00000001 	andeq	r0, r0, r1
        364a40:	00000001 	andeq	r0, r0, r1
        364a44:	00000001 	andeq	r0, r0, r1
        364a48:	00000001 	andeq	r0, r0, r1
        364a4c:	00000001 	andeq	r0, r0, r1
        364a50:	00000001 	andeq	r0, r0, r1
        364a54:	00000001 	andeq	r0, r0, r1
        364a58:	00000001 	andeq	r0, r0, r1
        364a5c:	00000001 	andeq	r0, r0, r1
        364a60:	00000001 	andeq	r0, r0, r1
        364a64:	00000001 	andeq	r0, r0, r1
        364a68:	00000001 	andeq	r0, r0, r1
        364a6c:	00000001 	andeq	r0, r0, r1
        364a70:	00000001 	andeq	r0, r0, r1
        364a74:	00000001 	andeq	r0, r0, r1
        364a78:	00000001 	andeq	r0, r0, r1
        364a7c:	00000001 	andeq	r0, r0, r1
        364a80:	00000001 	andeq	r0, r0, r1
        364a84:	00000001 	andeq	r0, r0, r1
        364a88:	00000001 	andeq	r0, r0, r1
        364a8c:	00000001 	andeq	r0, r0, r1
        364a90:	00000001 	andeq	r0, r0, r1
        364a94:	00000001 	andeq	r0, r0, r1
        364a98:	00000001 	andeq	r0, r0, r1
        364a9c:	00000001 	andeq	r0, r0, r1
        364aa0:	00000001 	andeq	r0, r0, r1
        364aa4:	00000001 	andeq	r0, r0, r1
        364aa8:	00000001 	andeq	r0, r0, r1
        364aac:	00000001 	andeq	r0, r0, r1
        364ab0:	00000001 	andeq	r0, r0, r1
        364ab4:	00000001 	andeq	r0, r0, r1
        364ab8:	00000001 	andeq	r0, r0, r1
        364abc:	00000001 	andeq	r0, r0, r1
        364ac0:	00000001 	andeq	r0, r0, r1
        364ac4:	00000001 	andeq	r0, r0, r1
        364ac8:	00000001 	andeq	r0, r0, r1
        364acc:	00000001 	andeq	r0, r0, r1
        364ad0:	00000001 	andeq	r0, r0, r1
        364ad4:	00000001 	andeq	r0, r0, r1
        364ad8:	00000001 	andeq	r0, r0, r1
        364adc:	00000001 	andeq	r0, r0, r1
        364ae0:	00000001 	andeq	r0, r0, r1
    */
}

/**
 * Symbol: ArSigLu
 * Address: 00365174
 */
void globals::ArSigLu() {
    /*
        365174:	00008000 	andeq	r8, r0, r0
        365178:	000081ff 	streqd	r8, [r0], -pc
        36517c:	000083ff 	streqd	r8, [r0], -pc
        365180:	000085fe 	streqd	r8, [r0], -lr
        365184:	000087fd 	streqd	r8, [r0], -sp
        365188:	000089fa 	streqd	r8, [r0], -sl
        36518c:	00008bf7 	streqd	r8, [r0], -r7
        365190:	00008df1 	streqd	r8, [r0], -r1
        365194:	00008fea 	andeq	r8, r0, sl, ror #31
        365198:	000091e1 	andeq	r9, r0, r1, ror #3
        36519c:	000093d6 	ldreqd	r9, [r0], -r6
        3651a0:	000095c9 	andeq	r9, r0, r9, asr #11
        3651a4:	000097b8 	streqh	r9, [r0], -r8
        3651a8:	000099a5 	andeq	r9, r0, r5, lsr #19
        3651ac:	00009b8f 	andeq	r9, r0, pc, lsl #23
        3651b0:	00009d76 	andeq	r9, r0, r6, ror sp
        3651b4:	00009f59 	andeq	r9, r0, r9, asr pc
        3651b8:	0000a138 	andeq	sl, r0, r8, lsr r1
        3651bc:	0000a314 	andeq	sl, r0, r4, lsl r3
        3651c0:	0000a4eb 	andeq	sl, r0, fp, ror #9
        3651c4:	0000a6bf 	streqh	sl, [r0], -pc
        3651c8:	0000a88e 	andeq	sl, r0, lr, lsl #17
        3651cc:	0000aa58 	andeq	sl, r0, r8, asr sl
        3651d0:	0000ac1d 	andeq	sl, r0, sp, lsl ip
        3651d4:	0000adde 	ldreqd	sl, [r0], -lr
        3651d8:	0000af9a 	muleq	r0, sl, pc
        3651dc:	0000b150 	andeq	fp, r0, r0, asr r1
        3651e0:	0000b302 	andeq	fp, r0, r2, lsl #6
        3651e4:	0000b4ae 	andeq	fp, r0, lr, lsr #9
        3651e8:	0000b654 	andeq	fp, r0, r4, asr r6
        3651ec:	0000b7f5 	streqd	fp, [r0], -r5
        3651f0:	0000b991 	muleq	r0, r1, r9
        3651f4:	0000bb26 	andeq	fp, r0, r6, lsr #22
        3651f8:	0000bcb6 	streqh	fp, [r0], -r6
        3651fc:	0000be40 	andeq	fp, r0, r0, asr #28
        365200:	0000bfc4 	andeq	fp, r0, r4, asr #31
        365204:	0000c142 	andeq	ip, r0, r2, asr #2
        365208:	0000c2ba 	streqh	ip, [r0], -sl
        36520c:	0000c42b 	andeq	ip, r0, fp, lsr #8
        365210:	0000c597 	muleq	r0, r7, r5
        365214:	0000c6fd 	streqd	ip, [r0], -sp
        365218:	0000c85c 	andeq	ip, r0, ip, asr r8
        36521c:	0000c9b5 	streqh	ip, [r0], -r5
        365220:	0000cb08 	andeq	ip, r0, r8, lsl #22
        365224:	0000cc55 	andeq	ip, r0, r5, asr ip
        365228:	0000cd9c 	muleq	r0, ip, sp
        36522c:	0000cedd 	ldreqd	ip, [r0], -sp
        365230:	0000d018 	andeq	sp, r0, r8, lsl r0
        365234:	0000d14c 	andeq	sp, r0, ip, asr #2
        365238:	0000d27a 	andeq	sp, r0, sl, ror r2
        36523c:	0000d3a3 	andeq	sp, r0, r3, lsr #7
        365240:	0000d4c5 	andeq	sp, r0, r5, asr #9
        365244:	0000d5e2 	andeq	sp, r0, r2, ror #11
        365248:	0000d6f8 	streqd	sp, [r0], -r8
        36524c:	0000d809 	andeq	sp, r0, r9, lsl #16
        365250:	0000d914 	andeq	sp, r0, r4, lsl r9
        365254:	0000da19 	andeq	sp, r0, r9, lsl sl
        365258:	0000db19 	andeq	sp, r0, r9, lsl fp
        36525c:	0000dc12 	andeq	sp, r0, r2, lsl ip
        365260:	0000dd07 	andeq	sp, r0, r7, lsl #26
        365264:	0000ddf6 	streqd	sp, [r0], -r6
        365268:	0000dedf 	ldreqd	sp, [r0], -pc
        36526c:	0000dfc3 	andeq	sp, r0, r3, asr #31
        365270:	0000e0a2 	andeq	lr, r0, r2, lsr #1
        365274:	0000e17b 	andeq	lr, r0, fp, ror r1
        365278:	0000e250 	andeq	lr, r0, r0, asr r2
        36527c:	0000e31f 	andeq	lr, r0, pc, lsl r3
        365280:	0000e3ea 	andeq	lr, r0, sl, ror #7
        365284:	0000e4af 	andeq	lr, r0, pc, lsr #9
        365288:	0000e570 	andeq	lr, r0, r0, ror r5
        36528c:	0000e62c 	andeq	lr, r0, ip, lsr #12
        365290:	0000e6e4 	andeq	lr, r0, r4, ror #13
        365294:	0000e797 	muleq	r0, r7, r7
        365298:	0000e845 	andeq	lr, r0, r5, asr #16
        36529c:	0000e8ef 	andeq	lr, r0, pc, ror #17
        3652a0:	0000e995 	muleq	r0, r5, r9
        3652a4:	0000ea36 	andeq	lr, r0, r6, lsr sl
        3652a8:	0000ead4 	ldreqd	lr, [r0], -r4
        3652ac:	0000eb6d 	andeq	lr, r0, sp, ror #22
        3652b0:	0000ec03 	andeq	lr, r0, r3, lsl #24
        3652b4:	0000ec94 	muleq	r0, r4, ip
        3652b8:	0000ed22 	andeq	lr, r0, r2, lsr #26
        3652bc:	0000edac 	andeq	lr, r0, ip, lsr #27
        3652c0:	0000ee32 	andeq	lr, r0, r2, lsr lr
        3652c4:	0000eeb5 	streqh	lr, [r0], -r5
        3652c8:	0000ef34 	andeq	lr, r0, r4, lsr pc
        3652cc:	0000efb0 	streqh	lr, [r0], -r0
        3652d0:	0000f028 	andeq	pc, r0, r8, lsr #32
        3652d4:	0000f09e 	muleq	r0, lr, r0
        3652d8:	0000f110 	andeq	pc, r0, r0, lsl r1
        3652dc:	0000f17f 	andeq	pc, r0, pc, ror r1
        3652e0:	0000f1eb 	andeq	pc, r0, fp, ror #3
        3652e4:	0000f254 	andeq	pc, r0, r4, asr r2
        3652e8:	0000f2ba 	streqh	pc, [r0], -sl
        3652ec:	0000f31d 	andeq	pc, r0, sp, lsl r3
        3652f0:	0000f37e 	andeq	pc, r0, lr, ror r3
        3652f4:	0000f3db 	ldreqd	pc, [r0], -fp
        3652f8:	0000f437 	andeq	pc, r0, r7, lsr r4
        3652fc:	0000f48f 	andeq	pc, r0, pc, lsl #9
        365300:	0000f4e5 	andeq	pc, r0, r5, ror #9
        365304:	0000f539 	andeq	pc, r0, r9, lsr r5
        365308:	0000f58b 	andeq	pc, r0, fp, lsl #11
        36530c:	0000f5da 	ldreqd	pc, [r0], -sl
        365310:	0000f627 	andeq	pc, r0, r7, lsr #12
        365314:	0000f671 	andeq	pc, r0, r1, ror r6
        365318:	0000f6ba 	streqh	pc, [r0], -sl
        36531c:	0000f700 	andeq	pc, r0, r0, lsl #14
        365320:	0000f745 	andeq	pc, r0, r5, asr #14
        365324:	0000f787 	andeq	pc, r0, r7, lsl #15
        365328:	0000f7c8 	andeq	pc, r0, r8, asr #15
        36532c:	0000f806 	andeq	pc, r0, r6, lsl #16
        365330:	0000f843 	andeq	pc, r0, r3, asr #16
        365334:	0000f87e 	andeq	pc, r0, lr, ror r8
        365338:	0000f8b8 	streqh	pc, [r0], -r8
        36533c:	0000f8f0 	streqd	pc, [r0], -r0
        365340:	0000f926 	andeq	pc, r0, r6, lsr #18
        365344:	0000f95a 	andeq	pc, r0, sl, asr r9
        365348:	0000f98d 	andeq	pc, r0, sp, lsl #19
        36534c:	0000f9bf 	streqh	pc, [r0], -pc
        365350:	0000f9ef 	andeq	pc, r0, pc, ror #19
        365354:	0000fa1e 	andeq	pc, r0, lr, lsl sl
        365358:	0000fa4b 	andeq	pc, r0, fp, asr #20
        36535c:	0000fa77 	andeq	pc, r0, r7, ror sl
        365360:	0000faa2 	andeq	pc, r0, r2, lsr #21
        365364:	0000facb 	andeq	pc, r0, fp, asr #21
        365368:	0000faf3 	streqd	pc, [r0], -r3
        36536c:	0000fb1a 	andeq	pc, r0, sl, lsl fp
        365370:	0000fb40 	andeq	pc, r0, r0, asr #22
        365374:	0000fb65 	andeq	pc, r0, r5, ror #22
        365378:	0000fb88 	andeq	pc, r0, r8, lsl #23
        36537c:	0000fbab 	andeq	pc, r0, fp, lsr #23
        365380:	0000fbcd 	andeq	pc, r0, sp, asr #23
        365384:	0000fbed 	andeq	pc, r0, sp, ror #23
        365388:	0000fc0d 	andeq	pc, r0, sp, lsl #24
        36538c:	0000fc2b 	andeq	pc, r0, fp, lsr #24
        365390:	0000fc49 	andeq	pc, r0, r9, asr #24
        365394:	0000fc66 	andeq	pc, r0, r6, ror #24
        365398:	0000fc82 	andeq	pc, r0, r2, lsl #25
        36539c:	0000fc9d 	muleq	r0, sp, ip
        3653a0:	0000fcb7 	streqh	pc, [r0], -r7
        3653a4:	0000fcd1 	ldreqd	pc, [r0], -r1
        3653a8:	0000fcea 	andeq	pc, r0, sl, ror #25
        3653ac:	0000fd02 	andeq	pc, r0, r2, lsl #26
        3653b0:	0000fd19 	andeq	pc, r0, r9, lsl sp
        3653b4:	0000fd2f 	andeq	pc, r0, pc, lsr #26
        3653b8:	0000fd45 	andeq	pc, r0, r5, asr #26
        3653bc:	0000fd5b 	andeq	pc, r0, fp, asr sp
        3653c0:	0000fd6f 	andeq	pc, r0, pc, ror #26
        3653c4:	0000fd83 	andeq	pc, r0, r3, lsl #27
        3653c8:	0000fd97 	muleq	r0, r7, sp
        3653cc:	0000fda9 	andeq	pc, r0, r9, lsr #27
        3653d0:	0000fdbc 	streqh	pc, [r0], -ip
        3653d4:	0000fdcd 	andeq	pc, r0, sp, asr #27
        3653d8:	0000fddf 	ldreqd	pc, [r0], -pc
        3653dc:	0000fdef 	andeq	pc, r0, pc, ror #27
        3653e0:	0000fdff 	streqd	pc, [r0], -pc
        3653e4:	0000fe0f 	andeq	pc, r0, pc, lsl #28
        3653e8:	0000fe1e 	andeq	pc, r0, lr, lsl lr
        3653ec:	0000fe2d 	andeq	pc, r0, sp, lsr #28
        3653f0:	0000fe3b 	andeq	pc, r0, fp, lsr lr
        3653f4:	0000fe49 	andeq	pc, r0, r9, asr #28
        3653f8:	0000fe56 	andeq	pc, r0, r6, asr lr
        3653fc:	0000fe63 	andeq	pc, r0, r3, ror #28
        365400:	0000fe70 	andeq	pc, r0, r0, ror lr
        365404:	0000fe7c 	andeq	pc, r0, ip, ror lr
        365408:	0000fe88 	andeq	pc, r0, r8, lsl #29
        36540c:	0000fe93 	muleq	r0, r3, lr
        365410:	0000fe9f 	muleq	r0, pc, lr
        365414:	0000fea9 	andeq	pc, r0, r9, lsr #29
        365418:	0000feb4 	streqh	pc, [r0], -r4
        36541c:	0000febe 	streqh	pc, [r0], -lr
        365420:	0000fec8 	andeq	pc, r0, r8, asr #29
        365424:	0000fed1 	ldreqd	pc, [r0], -r1
        365428:	0000fedb 	ldreqd	pc, [r0], -fp
        36542c:	0000fee4 	andeq	pc, r0, r4, ror #29
        365430:	0000feec 	andeq	pc, r0, ip, ror #29
        365434:	0000fef5 	streqd	pc, [r0], -r5
        365438:	0000fefd 	streqd	pc, [r0], -sp
        36543c:	0000ff05 	andeq	pc, r0, r5, lsl #30
        365440:	0000ff0d 	andeq	pc, r0, sp, lsl #30
        365444:	0000ff14 	andeq	pc, r0, r4, lsl pc
        365448:	0000ff1b 	andeq	pc, r0, fp, lsl pc
        36544c:	0000ff22 	andeq	pc, r0, r2, lsr #30
        365450:	0000ff29 	andeq	pc, r0, r9, lsr #30
        365454:	0000ff30 	andeq	pc, r0, r0, lsr pc
        365458:	0000ff36 	andeq	pc, r0, r6, lsr pc
        36545c:	0000ff3c 	andeq	pc, r0, ip, lsr pc
        365460:	0000ff42 	andeq	pc, r0, r2, asr #30
        365464:	0000ff48 	andeq	pc, r0, r8, asr #30
        365468:	0000ff4e 	andeq	pc, r0, lr, asr #30
        36546c:	0000ff53 	andeq	pc, r0, r3, asr pc
        365470:	0000ff58 	andeq	pc, r0, r8, asr pc
        365474:	0000ff5d 	andeq	pc, r0, sp, asr pc
        365478:	0000ff62 	andeq	pc, r0, r2, ror #30
        36547c:	0000ff67 	andeq	pc, r0, r7, ror #30
        365480:	0000ff6c 	andeq	pc, r0, ip, ror #30
        365484:	0000ff70 	andeq	pc, r0, r0, ror pc
        365488:	0000ff75 	andeq	pc, r0, r5, ror pc
        36548c:	0000ff79 	andeq	pc, r0, r9, ror pc
        365490:	0000ff7d 	andeq	pc, r0, sp, ror pc
        365494:	0000ff81 	andeq	pc, r0, r1, lsl #31
        365498:	0000ff85 	andeq	pc, r0, r5, lsl #31
        36549c:	0000ff89 	andeq	pc, r0, r9, lsl #31
        3654a0:	0000ff8d 	andeq	pc, r0, sp, lsl #31
        3654a4:	0000ff90 	muleq	r0, r0, pc
        3654a8:	0000ff93 	muleq	r0, r3, pc
        3654ac:	0000ff97 	muleq	r0, r7, pc
        3654b0:	0000ff9a 	muleq	r0, sl, pc
        3654b4:	0000ff9d 	muleq	r0, sp, pc
        3654b8:	0000ffa0 	andeq	pc, r0, r0, lsr #31
        3654bc:	0000ffa3 	andeq	pc, r0, r3, lsr #31
        3654c0:	0000ffa6 	andeq	pc, r0, r6, lsr #31
        3654c4:	0000ffa9 	andeq	pc, r0, r9, lsr #31
        3654c8:	0000ffab 	andeq	pc, r0, fp, lsr #31
        3654cc:	0000ffae 	andeq	pc, r0, lr, lsr #31
        3654d0:	0000ffb0 	streqh	pc, [r0], -r0
        3654d4:	0000ffb3 	streqh	pc, [r0], -r3
        3654d8:	0000ffb5 	streqh	pc, [r0], -r5
        3654dc:	0000ffb7 	streqh	pc, [r0], -r7
        3654e0:	0000ffba 	streqh	pc, [r0], -sl
        3654e4:	0000ffbc 	streqh	pc, [r0], -ip
        3654e8:	0000ffbe 	streqh	pc, [r0], -lr
        3654ec:	0000ffc0 	andeq	pc, r0, r0, asr #31
        3654f0:	0000ffc2 	andeq	pc, r0, r2, asr #31
        3654f4:	0000ffc4 	andeq	pc, r0, r4, asr #31
        3654f8:	0000ffc6 	andeq	pc, r0, r6, asr #31
        3654fc:	0000ffc7 	andeq	pc, r0, r7, asr #31
        365500:	0000ffc9 	andeq	pc, r0, r9, asr #31
        365504:	0000ffcb 	andeq	pc, r0, fp, asr #31
        365508:	0000ffcc 	andeq	pc, r0, ip, asr #31
        36550c:	0000ffce 	andeq	pc, r0, lr, asr #31
        365510:	0000ffd0 	ldreqd	pc, [r0], -r0
        365514:	0000ffd1 	ldreqd	pc, [r0], -r1
        365518:	0000ffd2 	ldreqd	pc, [r0], -r2
        36551c:	0000ffd4 	ldreqd	pc, [r0], -r4
        365520:	0000ffd5 	ldreqd	pc, [r0], -r5
        365524:	0000ffd6 	ldreqd	pc, [r0], -r6
        365528:	0000ffd8 	ldreqd	pc, [r0], -r8
        36552c:	0000ffd9 	ldreqd	pc, [r0], -r9
        365530:	0000ffda 	ldreqd	pc, [r0], -sl
        365534:	0000ffdb 	ldreqd	pc, [r0], -fp
        365538:	0000ffdc 	ldreqd	pc, [r0], -ip
        36553c:	0000ffdd 	ldreqd	pc, [r0], -sp
        365540:	0000ffdf 	ldreqd	pc, [r0], -pc
        365544:	0000ffe0 	andeq	pc, r0, r0, ror #31
        365548:	0000ffe1 	andeq	pc, r0, r1, ror #31
        36554c:	0000ffe1 	andeq	pc, r0, r1, ror #31
        365550:	0000ffe2 	andeq	pc, r0, r2, ror #31
        365554:	0000ffe3 	andeq	pc, r0, r3, ror #31
        365558:	0000ffe4 	andeq	pc, r0, r4, ror #31
        36555c:	0000ffe5 	andeq	pc, r0, r5, ror #31
        365560:	0000ffe6 	andeq	pc, r0, r6, ror #31
        365564:	0000ffe7 	andeq	pc, r0, r7, ror #31
        365568:	0000ffe7 	andeq	pc, r0, r7, ror #31
        36556c:	0000ffe8 	andeq	pc, r0, r8, ror #31
        365570:	0000ffe9 	andeq	pc, r0, r9, ror #31
        365574:	0000ffea 	andeq	pc, r0, sl, ror #31
        365578:	0000ffea 	andeq	pc, r0, sl, ror #31
        36557c:	0000ffeb 	andeq	pc, r0, fp, ror #31
        365580:	0000ffeb 	andeq	pc, r0, fp, ror #31
        365584:	0000ffec 	andeq	pc, r0, ip, ror #31
        365588:	0000ffed 	andeq	pc, r0, sp, ror #31
        36558c:	0000ffed 	andeq	pc, r0, sp, ror #31
        365590:	0000ffee 	andeq	pc, r0, lr, ror #31
        365594:	0000ffee 	andeq	pc, r0, lr, ror #31
        365598:	0000ffef 	andeq	pc, r0, pc, ror #31
        36559c:	0000ffef 	andeq	pc, r0, pc, ror #31
        3655a0:	0000fff0 	streqd	pc, [r0], -r0
        3655a4:	0000fff0 	streqd	pc, [r0], -r0
        3655a8:	0000fff1 	streqd	pc, [r0], -r1
        3655ac:	0000fff1 	streqd	pc, [r0], -r1
        3655b0:	0000fff2 	streqd	pc, [r0], -r2
        3655b4:	0000fff2 	streqd	pc, [r0], -r2
        3655b8:	0000fff3 	streqd	pc, [r0], -r3
        3655bc:	0000fff3 	streqd	pc, [r0], -r3
        3655c0:	0000fff3 	streqd	pc, [r0], -r3
        3655c4:	0000fff4 	streqd	pc, [r0], -r4
        3655c8:	0000fff4 	streqd	pc, [r0], -r4
        3655cc:	0000fff4 	streqd	pc, [r0], -r4
        3655d0:	0000fff5 	streqd	pc, [r0], -r5
        3655d4:	0000fff5 	streqd	pc, [r0], -r5
        3655d8:	0000fff5 	streqd	pc, [r0], -r5
        3655dc:	0000fff6 	streqd	pc, [r0], -r6
        3655e0:	0000fff6 	streqd	pc, [r0], -r6
        3655e4:	0000fff6 	streqd	pc, [r0], -r6
        3655e8:	0000fff7 	streqd	pc, [r0], -r7
        3655ec:	0000fff7 	streqd	pc, [r0], -r7
        3655f0:	0000fff7 	streqd	pc, [r0], -r7
        3655f4:	0000fff7 	streqd	pc, [r0], -r7
        3655f8:	0000fff8 	streqd	pc, [r0], -r8
        3655fc:	0000fff8 	streqd	pc, [r0], -r8
        365600:	0000fff8 	streqd	pc, [r0], -r8
        365604:	0000fff8 	streqd	pc, [r0], -r8
        365608:	0000fff9 	streqd	pc, [r0], -r9
        36560c:	0000fff9 	streqd	pc, [r0], -r9
        365610:	0000fff9 	streqd	pc, [r0], -r9
        365614:	0000fff9 	streqd	pc, [r0], -r9
        365618:	0000fff9 	streqd	pc, [r0], -r9
        36561c:	0000fffa 	streqd	pc, [r0], -sl
        365620:	0000fffa 	streqd	pc, [r0], -sl
        365624:	0000fffa 	streqd	pc, [r0], -sl
        365628:	0000fffa 	streqd	pc, [r0], -sl
        36562c:	0000fffa 	streqd	pc, [r0], -sl
        365630:	0000fffa 	streqd	pc, [r0], -sl
        365634:	0000fffb 	streqd	pc, [r0], -fp
        365638:	0000fffb 	streqd	pc, [r0], -fp
        36563c:	0000fffb 	streqd	pc, [r0], -fp
        365640:	0000fffb 	streqd	pc, [r0], -fp
        365644:	0000fffb 	streqd	pc, [r0], -fp
        365648:	0000fffb 	streqd	pc, [r0], -fp
        36564c:	0000fffb 	streqd	pc, [r0], -fp
        365650:	0000fffc 	streqd	pc, [r0], -ip
        365654:	0000fffc 	streqd	pc, [r0], -ip
        365658:	0000fffc 	streqd	pc, [r0], -ip
        36565c:	0000fffc 	streqd	pc, [r0], -ip
        365660:	0000fffc 	streqd	pc, [r0], -ip
        365664:	0000fffc 	streqd	pc, [r0], -ip
        365668:	0000fffc 	streqd	pc, [r0], -ip
        36566c:	0000fffc 	streqd	pc, [r0], -ip
        365670:	0000fffc 	streqd	pc, [r0], -ip
        365674:	0000fffd 	streqd	pc, [r0], -sp
        365678:	0000fffd 	streqd	pc, [r0], -sp
        36567c:	0000fffd 	streqd	pc, [r0], -sp
        365680:	0000fffd 	streqd	pc, [r0], -sp
        365684:	0000fffd 	streqd	pc, [r0], -sp
        365688:	0000fffd 	streqd	pc, [r0], -sp
        36568c:	0000fffd 	streqd	pc, [r0], -sp
        365690:	0000fffd 	streqd	pc, [r0], -sp
        365694:	0000fffd 	streqd	pc, [r0], -sp
        365698:	0000fffd 	streqd	pc, [r0], -sp
        36569c:	0000fffd 	streqd	pc, [r0], -sp
        3656a0:	0000fffd 	streqd	pc, [r0], -sp
        3656a4:	0000fffd 	streqd	pc, [r0], -sp
        3656a8:	0000fffe 	streqd	pc, [r0], -lr
        3656ac:	0000fffe 	streqd	pc, [r0], -lr
        3656b0:	0000fffe 	streqd	pc, [r0], -lr
        3656b4:	0000fffe 	streqd	pc, [r0], -lr
        3656b8:	0000fffe 	streqd	pc, [r0], -lr
        3656bc:	0000fffe 	streqd	pc, [r0], -lr
        3656c0:	0000fffe 	streqd	pc, [r0], -lr
        3656c4:	0000fffe 	streqd	pc, [r0], -lr
        3656c8:	0000fffe 	streqd	pc, [r0], -lr
        3656cc:	0000fffe 	streqd	pc, [r0], -lr
        3656d0:	0000fffe 	streqd	pc, [r0], -lr
        3656d4:	0000fffe 	streqd	pc, [r0], -lr
        3656d8:	0000fffe 	streqd	pc, [r0], -lr
        3656dc:	0000fffe 	streqd	pc, [r0], -lr
        3656e0:	0000fffe 	streqd	pc, [r0], -lr
        3656e4:	0000fffe 	streqd	pc, [r0], -lr
        3656e8:	0000fffe 	streqd	pc, [r0], -lr
        3656ec:	0000fffe 	streqd	pc, [r0], -lr
        3656f0:	0000fffe 	streqd	pc, [r0], -lr
        3656f4:	0000fffe 	streqd	pc, [r0], -lr
        3656f8:	0000fffe 	streqd	pc, [r0], -lr
        3656fc:	0000fffe 	streqd	pc, [r0], -lr
    */
}

/**
 * Symbol: ArSigSlopeLu
 * Address: 00365700
 */
void globals::ArSigSlopeLu() {
    /*
        365700:	000001ff 	streqd	r0, [r0], -pc
        365704:	00000200 	andeq	r0, r0, r0, lsl #4
        365708:	000001ff 	streqd	r0, [r0], -pc
        36570c:	000001ff 	streqd	r0, [r0], -pc
        365710:	000001fd 	streqd	r0, [r0], -sp
        365714:	000001fd 	streqd	r0, [r0], -sp
        365718:	000001fa 	streqd	r0, [r0], -sl
        36571c:	000001f9 	streqd	r0, [r0], -r9
        365720:	000001f7 	streqd	r0, [r0], -r7
        365724:	000001f5 	streqd	r0, [r0], -r5
        365728:	000001f3 	streqd	r0, [r0], -r3
        36572c:	000001ef 	andeq	r0, r0, pc, ror #3
        365730:	000001ed 	andeq	r0, r0, sp, ror #3
        365734:	000001ea 	andeq	r0, r0, sl, ror #3
        365738:	000001e7 	andeq	r0, r0, r7, ror #3
        36573c:	000001e3 	andeq	r0, r0, r3, ror #3
        365740:	000001df 	ldreqd	r0, [r0], -pc
        365744:	000001dc 	ldreqd	r0, [r0], -ip
        365748:	000001d7 	ldreqd	r0, [r0], -r7
        36574c:	000001d4 	ldreqd	r0, [r0], -r4
        365750:	000001cf 	andeq	r0, r0, pc, asr #3
        365754:	000001ca 	andeq	r0, r0, sl, asr #3
        365758:	000001c5 	andeq	r0, r0, r5, asr #3
        36575c:	000001c1 	andeq	r0, r0, r1, asr #3
        365760:	000001bc 	streqh	r0, [r0], -ip
        365764:	000001b6 	streqh	r0, [r0], -r6
        365768:	000001b2 	streqh	r0, [r0], -r2
        36576c:	000001ac 	andeq	r0, r0, ip, lsr #3
        365770:	000001a6 	andeq	r0, r0, r6, lsr #3
        365774:	000001a1 	andeq	r0, r0, r1, lsr #3
        365778:	0000019c 	muleq	r0, ip, r1
        36577c:	00000195 	muleq	r0, r5, r1
        365780:	00000190 	muleq	r0, r0, r1
        365784:	0000018a 	andeq	r0, r0, sl, lsl #3
        365788:	00000184 	andeq	r0, r0, r4, lsl #3
        36578c:	0000017e 	andeq	r0, r0, lr, ror r1
        365790:	00000178 	andeq	r0, r0, r8, ror r1
        365794:	00000171 	andeq	r0, r0, r1, ror r1
        365798:	0000016c 	andeq	r0, r0, ip, ror #2
        36579c:	00000166 	andeq	r0, r0, r6, ror #2
        3657a0:	0000015f 	andeq	r0, r0, pc, asr r1
        3657a4:	00000159 	andeq	r0, r0, r9, asr r1
        3657a8:	00000153 	andeq	r0, r0, r3, asr r1
        3657ac:	0000014d 	andeq	r0, r0, sp, asr #2
        3657b0:	00000147 	andeq	r0, r0, r7, asr #2
        3657b4:	00000141 	andeq	r0, r0, r1, asr #2
        3657b8:	0000013b 	andeq	r0, r0, fp, lsr r1
        3657bc:	00000134 	andeq	r0, r0, r4, lsr r1
        3657c0:	0000012e 	andeq	r0, r0, lr, lsr #2
        3657c4:	00000129 	andeq	r0, r0, r9, lsr #2
        3657c8:	00000122 	andeq	r0, r0, r2, lsr #2
        3657cc:	0000011d 	andeq	r0, r0, sp, lsl r1
        3657d0:	00000116 	andeq	r0, r0, r6, lsl r1
        3657d4:	00000111 	andeq	r0, r0, r1, lsl r1
        3657d8:	0000010b 	andeq	r0, r0, fp, lsl #2
        3657dc:	00000105 	andeq	r0, r0, r5, lsl #2
        3657e0:	00000100 	andeq	r0, r0, r0, lsl #2
        3657e4:	000000f9 	streqd	r0, [r0], -r9
        3657e8:	000000f5 	streqd	r0, [r0], -r5
        3657ec:	000000ef 	andeq	r0, r0, pc, ror #1
        3657f0:	000000e9 	andeq	r0, r0, r9, ror #1
        3657f4:	000000e4 	andeq	r0, r0, r4, ror #1
        3657f8:	000000df 	ldreqd	r0, [r0], -pc
        3657fc:	000000d9 	ldreqd	r0, [r0], -r9
        365800:	000000d5 	ldreqd	r0, [r0], -r5
        365804:	000000cf 	andeq	r0, r0, pc, asr #1
        365808:	000000cb 	andeq	r0, r0, fp, asr #1
        36580c:	000000c5 	andeq	r0, r0, r5, asr #1
        365810:	000000c1 	andeq	r0, r0, r1, asr #1
        365814:	000000bc 	streqh	r0, [r0], -ip
        365818:	000000b8 	streqh	r0, [r0], -r8
        36581c:	000000b3 	streqh	r0, [r0], -r3
        365820:	000000ae 	andeq	r0, r0, lr, lsr #1
        365824:	000000aa 	andeq	r0, r0, sl, lsr #1
        365828:	000000a6 	andeq	r0, r0, r6, lsr #1
        36582c:	000000a1 	andeq	r0, r0, r1, lsr #1
        365830:	0000009e 	muleq	r0, lr, r0
        365834:	00000099 	muleq	r0, r9, r0
        365838:	00000096 	muleq	r0, r6, r0
        36583c:	00000091 	muleq	r0, r1, r0
        365840:	0000008e 	andeq	r0, r0, lr, lsl #1
        365844:	0000008a 	andeq	r0, r0, sl, lsl #1
        365848:	00000086 	andeq	r0, r0, r6, lsl #1
        36584c:	00000083 	andeq	r0, r0, r3, lsl #1
        365850:	0000007f 	andeq	r0, r0, pc, ror r0
        365854:	0000007c 	andeq	r0, r0, ip, ror r0
        365858:	00000078 	andeq	r0, r0, r8, ror r0
        36585c:	00000076 	andeq	r0, r0, r6, ror r0
        365860:	00000072 	andeq	r0, r0, r2, ror r0
        365864:	0000006f 	andeq	r0, r0, pc, rrx
        365868:	0000006c 	andeq	r0, r0, ip, rrx
        36586c:	00000069 	andeq	r0, r0, r9, rrx
        365870:	00000066 	andeq	r0, r0, r6, rrx
        365874:	00000063 	andeq	r0, r0, r3, rrx
        365878:	00000061 	andeq	r0, r0, r1, rrx
        36587c:	0000005d 	andeq	r0, r0, sp, asr r0
        365880:	0000005c 	andeq	r0, r0, ip, asr r0
        365884:	00000058 	andeq	r0, r0, r8, asr r0
        365888:	00000056 	andeq	r0, r0, r6, asr r0
        36588c:	00000054 	andeq	r0, r0, r4, asr r0
        365890:	00000052 	andeq	r0, r0, r2, asr r0
        365894:	0000004f 	andeq	r0, r0, pc, asr #32
        365898:	0000004d 	andeq	r0, r0, sp, asr #32
        36589c:	0000004a 	andeq	r0, r0, sl, asr #32
        3658a0:	00000049 	andeq	r0, r0, r9, asr #32
        3658a4:	00000046 	andeq	r0, r0, r6, asr #32
        3658a8:	00000045 	andeq	r0, r0, r5, asr #32
        3658ac:	00000042 	andeq	r0, r0, r2, asr #32
        3658b0:	00000041 	andeq	r0, r0, r1, asr #32
        3658b4:	0000003e 	andeq	r0, r0, lr, lsr r0
        3658b8:	0000003d 	andeq	r0, r0, sp, lsr r0
        3658bc:	0000003b 	andeq	r0, r0, fp, lsr r0
        3658c0:	0000003a 	andeq	r0, r0, sl, lsr r0
        3658c4:	00000038 	andeq	r0, r0, r8, lsr r0
        3658c8:	00000036 	andeq	r0, r0, r6, lsr r0
        3658cc:	00000034 	andeq	r0, r0, r4, lsr r0
        3658d0:	00000033 	andeq	r0, r0, r3, lsr r0
        3658d4:	00000032 	andeq	r0, r0, r2, lsr r0
        3658d8:	00000030 	andeq	r0, r0, r0, lsr r0
        3658dc:	0000002f 	andeq	r0, r0, pc, lsr #32
        3658e0:	0000002d 	andeq	r0, r0, sp, lsr #32
        3658e4:	0000002c 	andeq	r0, r0, ip, lsr #32
        3658e8:	0000002b 	andeq	r0, r0, fp, lsr #32
        3658ec:	00000029 	andeq	r0, r0, r9, lsr #32
        3658f0:	00000028 	andeq	r0, r0, r8, lsr #32
        3658f4:	00000027 	andeq	r0, r0, r7, lsr #32
        3658f8:	00000026 	andeq	r0, r0, r6, lsr #32
        3658fc:	00000025 	andeq	r0, r0, r5, lsr #32
        365900:	00000023 	andeq	r0, r0, r3, lsr #32
        365904:	00000023 	andeq	r0, r0, r3, lsr #32
        365908:	00000022 	andeq	r0, r0, r2, lsr #32
        36590c:	00000020 	andeq	r0, r0, r0, lsr #32
        365910:	00000020 	andeq	r0, r0, r0, lsr #32
        365914:	0000001e 	andeq	r0, r0, lr, lsl r0
        365918:	0000001e 	andeq	r0, r0, lr, lsl r0
        36591c:	0000001d 	andeq	r0, r0, sp, lsl r0
        365920:	0000001c 	andeq	r0, r0, ip, lsl r0
        365924:	0000001b 	andeq	r0, r0, fp, lsl r0
        365928:	0000001a 	andeq	r0, r0, sl, lsl r0
        36592c:	0000001a 	andeq	r0, r0, sl, lsl r0
        365930:	00000019 	andeq	r0, r0, r9, lsl r0
        365934:	00000018 	andeq	r0, r0, r8, lsl r0
        365938:	00000017 	andeq	r0, r0, r7, lsl r0
        36593c:	00000016 	andeq	r0, r0, r6, lsl r0
        365940:	00000016 	andeq	r0, r0, r6, lsl r0
        365944:	00000016 	andeq	r0, r0, r6, lsl r0
        365948:	00000014 	andeq	r0, r0, r4, lsl r0
        36594c:	00000014 	andeq	r0, r0, r4, lsl r0
        365950:	00000014 	andeq	r0, r0, r4, lsl r0
        365954:	00000012 	andeq	r0, r0, r2, lsl r0
        365958:	00000013 	andeq	r0, r0, r3, lsl r0
        36595c:	00000011 	andeq	r0, r0, r1, lsl r0
        365960:	00000012 	andeq	r0, r0, r2, lsl r0
        365964:	00000010 	andeq	r0, r0, r0, lsl r0
        365968:	00000010 	andeq	r0, r0, r0, lsl r0
        36596c:	00000010 	andeq	r0, r0, r0, lsl r0
        365970:	0000000f 	andeq	r0, r0, pc
        365974:	0000000f 	andeq	r0, r0, pc
        365978:	0000000e 	andeq	r0, r0, lr
        36597c:	0000000e 	andeq	r0, r0, lr
        365980:	0000000d 	andeq	r0, r0, sp
        365984:	0000000d 	andeq	r0, r0, sp
        365988:	0000000d 	andeq	r0, r0, sp
        36598c:	0000000c 	andeq	r0, r0, ip
        365990:	0000000c 	andeq	r0, r0, ip
        365994:	0000000b 	andeq	r0, r0, fp
        365998:	0000000c 	andeq	r0, r0, ip
        36599c:	0000000a 	andeq	r0, r0, sl
        3659a0:	0000000b 	andeq	r0, r0, fp
        3659a4:	0000000a 	andeq	r0, r0, sl
        3659a8:	0000000a 	andeq	r0, r0, sl
        3659ac:	00000009 	andeq	r0, r0, r9
        3659b0:	0000000a 	andeq	r0, r0, sl
        3659b4:	00000009 	andeq	r0, r0, r9
        3659b8:	00000008 	andeq	r0, r0, r8
        3659bc:	00000009 	andeq	r0, r0, r9
        3659c0:	00000008 	andeq	r0, r0, r8
        3659c4:	00000008 	andeq	r0, r0, r8
        3659c8:	00000008 	andeq	r0, r0, r8
        3659cc:	00000007 	andeq	r0, r0, r7
        3659d0:	00000007 	andeq	r0, r0, r7
        3659d4:	00000007 	andeq	r0, r0, r7
        3659d8:	00000007 	andeq	r0, r0, r7
        3659dc:	00000007 	andeq	r0, r0, r7
        3659e0:	00000006 	andeq	r0, r0, r6
        3659e4:	00000006 	andeq	r0, r0, r6
        3659e8:	00000006 	andeq	r0, r0, r6
        3659ec:	00000006 	andeq	r0, r0, r6
        3659f0:	00000006 	andeq	r0, r0, r6
        3659f4:	00000005 	andeq	r0, r0, r5
        3659f8:	00000005 	andeq	r0, r0, r5
        3659fc:	00000005 	andeq	r0, r0, r5
        365a00:	00000005 	andeq	r0, r0, r5
        365a04:	00000005 	andeq	r0, r0, r5
        365a08:	00000005 	andeq	r0, r0, r5
        365a0c:	00000004 	andeq	r0, r0, r4
        365a10:	00000005 	andeq	r0, r0, r5
        365a14:	00000004 	andeq	r0, r0, r4
        365a18:	00000004 	andeq	r0, r0, r4
        365a1c:	00000004 	andeq	r0, r0, r4
        365a20:	00000004 	andeq	r0, r0, r4
        365a24:	00000004 	andeq	r0, r0, r4
        365a28:	00000004 	andeq	r0, r0, r4
        365a2c:	00000003 	andeq	r0, r0, r3
        365a30:	00000003 	andeq	r0, r0, r3
        365a34:	00000004 	andeq	r0, r0, r4
        365a38:	00000003 	andeq	r0, r0, r3
        365a3c:	00000003 	andeq	r0, r0, r3
        365a40:	00000003 	andeq	r0, r0, r3
        365a44:	00000003 	andeq	r0, r0, r3
        365a48:	00000003 	andeq	r0, r0, r3
        365a4c:	00000003 	andeq	r0, r0, r3
        365a50:	00000002 	andeq	r0, r0, r2
        365a54:	00000003 	andeq	r0, r0, r3
        365a58:	00000002 	andeq	r0, r0, r2
        365a5c:	00000003 	andeq	r0, r0, r3
        365a60:	00000002 	andeq	r0, r0, r2
        365a64:	00000002 	andeq	r0, r0, r2
        365a68:	00000003 	andeq	r0, r0, r3
        365a6c:	00000002 	andeq	r0, r0, r2
        365a70:	00000002 	andeq	r0, r0, r2
        365a74:	00000002 	andeq	r0, r0, r2
        365a78:	00000002 	andeq	r0, r0, r2
        365a7c:	00000002 	andeq	r0, r0, r2
        365a80:	00000002 	andeq	r0, r0, r2
        365a84:	00000001 	andeq	r0, r0, r1
        365a88:	00000002 	andeq	r0, r0, r2
        365a8c:	00000002 	andeq	r0, r0, r2
        365a90:	00000001 	andeq	r0, r0, r1
        365a94:	00000002 	andeq	r0, r0, r2
        365a98:	00000002 	andeq	r0, r0, r2
        365a9c:	00000001 	andeq	r0, r0, r1
        365aa0:	00000001 	andeq	r0, r0, r1
        365aa4:	00000002 	andeq	r0, r0, r2
        365aa8:	00000001 	andeq	r0, r0, r1
        365aac:	00000001 	andeq	r0, r0, r1
        365ab0:	00000002 	andeq	r0, r0, r2
        365ab4:	00000001 	andeq	r0, r0, r1
        365ab8:	00000001 	andeq	r0, r0, r1
        365abc:	00000001 	andeq	r0, r0, r1
        365ac0:	00000001 	andeq	r0, r0, r1
        365ac4:	00000001 	andeq	r0, r0, r1
        365ac8:	00000002 	andeq	r0, r0, r2
        365acc:	00000001 	andeq	r0, r0, r1
        365ad0:	00000001 	andeq	r0, r0, r1
        365ad4:	00000000 	andeq	r0, r0, r0
        365ad8:	00000001 	andeq	r0, r0, r1
        365adc:	00000001 	andeq	r0, r0, r1
        365ae0:	00000001 	andeq	r0, r0, r1
        365ae4:	00000001 	andeq	r0, r0, r1
        365ae8:	00000001 	andeq	r0, r0, r1
        365aec:	00000001 	andeq	r0, r0, r1
        365af0:	00000000 	andeq	r0, r0, r0
        365af4:	00000001 	andeq	r0, r0, r1
        365af8:	00000001 	andeq	r0, r0, r1
        365afc:	00000001 	andeq	r0, r0, r1
        365b00:	00000000 	andeq	r0, r0, r0
        365b04:	00000001 	andeq	r0, r0, r1
        365b08:	00000000 	andeq	r0, r0, r0
        365b0c:	00000001 	andeq	r0, r0, r1
        365b10:	00000001 	andeq	r0, r0, r1
        365b14:	00000000 	andeq	r0, r0, r0
        365b18:	00000001 	andeq	r0, r0, r1
        365b1c:	00000000 	andeq	r0, r0, r0
        365b20:	00000001 	andeq	r0, r0, r1
        365b24:	00000000 	andeq	r0, r0, r0
        365b28:	00000001 	andeq	r0, r0, r1
        365b2c:	00000000 	andeq	r0, r0, r0
        365b30:	00000001 	andeq	r0, r0, r1
        365b34:	00000000 	andeq	r0, r0, r0
        365b38:	00000001 	andeq	r0, r0, r1
        365b3c:	00000000 	andeq	r0, r0, r0
        365b40:	00000001 	andeq	r0, r0, r1
        365b4c:	00000001 	andeq	r0, r0, r1
        365b58:	00000001 	andeq	r0, r0, r1
        365b64:	00000001 	andeq	r0, r0, r1
        365b70:	00000001 	andeq	r0, r0, r1
        365b80:	00000001 	andeq	r0, r0, r1
        365b90:	00000001 	andeq	r0, r0, r1
        365ba4:	00000001 	andeq	r0, r0, r1
        365bbc:	00000001 	andeq	r0, r0, r1
        365bd8:	00000001 	andeq	r0, r0, r1
        365bfc:	00000001 	andeq	r0, r0, r1
        365c30:	00000001 	andeq	r0, r0, r1
        365c88:	00000001 	andeq	r0, r0, r1
    */
}

/**
 * Symbol: AAtables
 * Address: 0036dbdc
 */
void globals::AAtables() {
    /*
        36dbdc:	0036bfcc 	eoreqs	fp, r6, ip, asr #31
        36dbe0:	0036c7d0 	ldreqsb	ip, [r6], -r0
        36dbe4:	0036cfd4 	ldreqsb	ip, [r6], -r4
        36dbe8:	0036d7d8 	ldreqsb	sp, [r6], -r8
    */
}

/**
 * Symbol: arBPParam
 * Address: 0036e1a4
 */
void globals::arBPParam() {
    /*
        36e1a4:	00003333 	andeq	r3, r0, r3, lsr r3
        36e1a8:	00000050 	andeq	r0, r0, r0, asr r0
        36e1bc:	000000ff 	streqd	r0, [r0], -pc
        36e1c0:	00000001 	andeq	r0, r0, r1
        36e1c4:	00000000 	andeq	r0, r0, r0
        36e1c8:	000000ff 	streqd	r0, [r0], -pc
        36e1cc:	00000001 	andeq	r0, r0, r1
        36e1d0:	0000002a 	andeq	r0, r0, sl, lsr #32
        36e1d4:	000000fa 	streqd	r0, [r0], -sl
        36e1d8:	00000000 	andeq	r0, r0, r0
        36e1dc:	00001999 	muleq	r0, r9, r9
        36e1e0:	00000001 	andeq	r0, r0, r1
        36e1ec:	0000cccc 	andeq	ip, r0, ip, asr #25
        36e1f0:	00010000 	andeq	r0, r1, r0
        36e1f4:	00000000 	andeq	r0, r0, r0
        36e1f8:	00028000 	andeq	r8, r2, r0
        36e1fc:	00019999 	muleq	r1, r9, r9
        36e200:	00000000 	andeq	r0, r0, r0
        36e204:	00009999 	muleq	r0, r9, r9
        36e208:	00009999 	muleq	r0, r9, r9
        36e20c:	00000001 	andeq	r0, r0, r1
        36e220:	00010000 	andeq	r0, r1, r0
        36e224:	00000000 	andeq	r0, r0, r0
        36e228:	00010000 	andeq	r0, r1, r0
        36e22c:	00004ccc 	andeq	r4, r0, ip, asr #25
        36e238:	00010000 	andeq	r0, r1, r0
        36e23c:	00010000 	andeq	r0, r1, r0
        36e240:	00010000 	andeq	r0, r1, r0
        36e244:	00000000 	andeq	r0, r0, r0
        36e248:	00010000 	andeq	r0, r1, r0
        36e24c:	00010000 	andeq	r0, r1, r0
        36e250:	00010000 	andeq	r0, r1, r0
        36e254:	00000064 	andeq	r0, r0, r4, rrx
        36e274:	00010000 	andeq	r0, r1, r0
        36e278:	00000002 	andeq	r0, r0, r2
        36e27c:	00000002 	andeq	r0, r0, r2
        36e280:	00004ccc 	andeq	r4, r0, ip, asr #25
        36e284:	00000032 	andeq	r0, r0, r2, lsr r0
    */
}

/**
 * Symbol: AckNodeSizeTab
 * Address: 00371e94
 */
void globals::AckNodeSizeTab() {
    /*
        371e94:	00000103 	andeq	r0, r0, r3, lsl #2
    */
}

/**
 * Symbol: alpha_charset_eng
 * Address: 00375008
 */
void globals::alpha_charset_eng() {
    /*
        375008:	61626364 	cmnvs	r2, r4, ror #6
        37500c:	65666768 	strvsb	r6, [r6, -#1896]!
        375010:	696a6b6c 	stmvsdb	sl!, {r2, r3, r5, r6, r8, r9, fp, sp, lr}^
        375014:	6d6e6f70 	stcvsl	15, cr6, [lr, -#448]!
        375018:	71727374 	cmnvc	r2, r4, ror r3
        37501c:	75767778 	ldrvcb	r7, [r6, -#1912]!
        375020:	797a2700 	ldmvcdb	sl!, {r8, r9, sl, sp}^
    */
}

/**
 * Symbol: alpha_charset_swe
 * Address: 00375024
 */
void globals::alpha_charset_swe() {
    /*
        375024:	61626364 	cmnvs	r2, r4, ror #6
        375028:	65666768 	strvsb	r6, [r6, -#1896]!
        37502c:	696a6b6c 	stmvsdb	sl!, {r2, r3, r5, r6, r8, r9, fp, sp, lr}^
        375030:	6d6e6f70 	stcvsl	15, cr6, [lr, -#448]!
        375034:	71727374 	cmnvc	r2, r4, ror r3
        375038:	75767778 	ldrvcb	r7, [r6, -#1912]!
        37503c:	797a8a8c 	ldmvcdb	sl!, {r2, r3, r7, r9, fp, pc}^
        375040:	9a270000 	bls	d35048 <ROM$$Size+0x6153fc>
    */
}

/**
 * Symbol: alpha_charset_swe_nodiacr
 * Address: 00375044
 */
void globals::alpha_charset_swe_nodiacr() {
    /*
        375044:	61626364 	cmnvs	r2, r4, ror #6
        375048:	65666768 	strvsb	r6, [r6, -#1896]!
        37504c:	696a6b6c 	stmvsdb	sl!, {r2, r3, r5, r6, r8, r9, fp, sp, lr}^
        375050:	6d6e6f70 	stcvsl	15, cr6, [lr, -#448]!
        375054:	71727374 	cmnvc	r2, r4, ror r3
        375058:	75767778 	ldrvcb	r7, [r6, -#1912]!
        37505c:	797aa78d 	ldmvcdb	sl!, {r0, r2, r3, r7, r8, r9, sl, sp, pc}^
        375060:	27000000 	strcs	r0, [r0, -r0]
    */
}

/**
 * Symbol: ascentedList
 * Address: 003767ec
 */
void globals::ascentedList() {
    /*
        3767ec:	6264686c 	rsbvs	r6, r4, #7077888	; 0x6c0000
        3767f0:	74000000 	strvc	r0, [r0]
    */
}

/**
 * Symbol: adList
 * Address: 003767fc
 */
void globals::adList() {
    /*
        3767fc:	66000000 	strvs	r0, [r0], -r0
    */
}

/**
 * Symbol: AsmSendDebugLine
 * Address: 0038d3e8
 */
void globals::AsmSendDebugLine() {
    /*
        38d3e8:	e52dd004 	str	sp, [sp, -#4]!
        38d3ec:	e92d0003 	stmdb	sp!, {r0, r1}
        38d3f0:	e3a00000 	mov	r0, #0	; 0x0
        38d3f4:	e3a0100c 	mov	r1, #12	; 0xc
        38d3f8:	e52d0004 	str	r0, [sp, -#4]!
        38d3fc:	e1a02007 	mov	r2, r7
        38d400:	e3a07303 	mov	r7, #201326592	; 0xc000000
        38d404:	e2877b21 	add	r7, r7, #33792	; 0x8400
        38d408:	e587d280 	str	sp, [r7, #640]
        38d40c:	e92d4006 	stmdb	sp!, {r1, r2, lr}
        38d410:	e3a0000a 	mov	r0, #10	; 0xa
        38d414:	e5c70116 	strb	r0, [r7, #278]
        38d418:	eaffff55 	b	38d174 <StopImage>
        38d41c:	e8bd000f 	ldmia	sp!, {r0, r1, r2, r3}
        38d420:	e08dd000 	add	sp, sp, r0
        38d424:	e1a00003 	mov	r0, r3
        38d428:	e1a07001 	mov	r7, r1
        38d42c:	e1a0f002 	mov	pc, r2
    */
}

