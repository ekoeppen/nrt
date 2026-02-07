#include "include/TAlertItem.h"

/**
 * Symbol: TAlertItem::__ct(void)
 * Address: 0002e870
 */
TAlertItem::TAlertItem(void) {
    /*
         2e870:	e1a0c00d 	mov	ip, sp
         2e874:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         2e878:	e24cb004 	sub	fp, ip, #4	; 0x4
         2e87c:	e3300000 	teq	r0, #0	; 0x0
         2e880:	1a000003 	bne	2e894 <TAlertItem::__ct(void)+0x24>
         2e884:	e3a00014 	mov	r0, #20	; 0x14
         2e888:	eb6e7faa 	bl	1bce738 <$__nw(unsigned int)>
         2e88c:	e3300000 	teq	r0, #0	; 0x0
         2e890:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         2e894:	e3a01000 	mov	r1, #0	; 0x0
         2e898:	e5801008 	str	r1, [r0, #8]	; fField8
         2e89c:	e5c01007 	strb	r1, [r0, #7]	; fField7
         2e8a0:	e5c01006 	strb	r1, [r0, #6]	; fField6
         2e8a4:	e5c01005 	strb	r1, [r0, #5]	; fField5
         2e8a8:	e5c01004 	strb	r1, [r0, #4]	; fField4
         2e8ac:	e5c01003 	strb	r1, [r0, #3]	; fField3
         2e8b0:	e5c01002 	strb	r1, [r0, #2]	; fField2
         2e8b4:	e5c01001 	strb	r1, [r0, #1]	; fField1
         2e8b8:	e5c01000 	strb	r1, [r0]
         2e8bc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TAlertItem::DrawText(unsigned char)
 * Address: 0002f104
 */
TAlertItem::DrawText(unsigned char) {
    /*
         2f104:	e1a0c00d 	mov	ip, sp
         2f108:	e92ddff3 	stmdb	sp!, {r0, r1, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         2f10c:	e24cb004 	sub	fp, ip, #4	; 0x4
         2f110:	e24dd008 	sub	sp, sp, #8	; 0x8
         2f114:	e20190ff 	and	r9, r1, #255	; 0xff
         2f118:	e51b0030 	ldr	r0, [fp, -#48]
         2f11c:	e5900008 	ldr	r0, [r0, #8]	; fField8
         2f120:	e3300000 	teq	r0, #0	; 0x0
         2f124:	0a0000a9 	beq	2f3d0 <TAlertItem::DrawText(unsigned char)+0x2cc>
         2f128:	e24dd03c 	sub	sp, sp, #60	; 0x3c
         2f12c:	e28d000c 	add	r0, sp, #12	; 0xc
         2f130:	eb6c9a5c 	bl	1b55aa8 <TAlertGlyph::$__ct(void)>
         2f134:	e51b0030 	ldr	r0, [fp, -#48]
         2f138:	e5b04008 	ldr	r4, [r0, #8]!	; fField8
         2f13c:	e51b0030 	ldr	r0, [fp, -#48]
         2f140:	e5908000 	ldr	r8, [r0]
         2f144:	e1a08848 	mov	r8, r8, asr #16
         2f148:	e51b0030 	ldr	r0, [fp, -#48]
         2f14c:	e5900002 	ldr	r0, [r0, #2]	; fField2
         2f150:	e1a00840 	mov	r0, r0, asr #16
         2f154:	e1a07000 	mov	r7, r0
         2f158:	e51b1030 	ldr	r1, [fp, -#48]
         2f15c:	e5911006 	ldr	r1, [r1, #6]	; fField6
         2f160:	e0606841 	rsb	r6, r0, r1, asr #16
         2f164:	e28d000c 	add	r0, sp, #12	; 0xc
         2f168:	eb6c8190 	bl	1b4f7b0 <TAlertGlyph::$GetAlertHeight(void)>
         2f16c:	e58d0008 	str	r0, [sp, #8]	; fField8
         2f170:	e1a00004 	mov	r0, r4
         2f174:	e58d6004 	str	r6, [sp, #4]	; fField4
         2f178:	eb6efd78 	bl	1bee760 <$Ustrlen>
         2f17c:	e1a05000 	mov	r5, r0
         2f180:	e3a0a000 	mov	sl, #0	; 0x0
         2f184:	e59f2040 	ldr	r2, [pc, #40]	; 2f1cc <TAlertItem::DrawText(unsigned char)+0xc8>
         2f188:	e58d2040 	str	r2, [sp, #64]
         2f18c:	e59f203c 	ldr	r2, [pc, #3c]	; 2f1d0 <TAlertItem::DrawText(unsigned char)+0xcc>	; fField3
         2f190:	e3390000 	teq	r9, #0	; 0x0
         2f194:	e58d203c 	str	r2, [sp, #60]
         2f198:	052d7004 	streq	r7, [sp, -#4]!	; fField4
         2f19c:	0a000080 	beq	2f3a4 <TAlertItem::DrawText(unsigned char)+0x2a0>
         2f1a0:	e51b0030 	ldr	r0, [fp, -#48]
         2f1a4:	e5900004 	ldr	r0, [r0, #4]	; fField4
         2f1a8:	e1a00840 	mov	r0, r0, asr #16
         2f1ac:	e51b1030 	ldr	r1, [fp, -#48]
         2f1b0:	e5911000 	ldr	r1, [r1]
         2f1b4:	e0400841 	sub	r0, r0, r1, asr #16
         2f1b8:	e59d1008 	ldr	r1, [sp, #8]	; fField8
         2f1bc:	e0400001 	sub	r0, r0, r1
         2f1c0:	e08890a0 	add	r9, r8, r0, lsr #1
         2f1c4:	e3a08000 	mov	r8, #0	; 0x0
         2f1c8:	ea000007 	b	2f1ec <TAlertItem::DrawText(unsigned char)+0xe8>
         2f1cc:	0c100868 	ldceq	8, cr0, [r0], -#416
         2f1d0:	0c105f14 	ldceq	15, cr5, [r0], -#80
         2f1d4:	e7941088 	ldr	r1, [r4, r8, lsl #1]	; fField1
         2f1d8:	e1a01821 	mov	r1, r1, lsr #16
         2f1dc:	e28d000c 	add	r0, sp, #12	; 0xc
         2f1e0:	eb6c8170 	bl	1b4f7a8 <TAlertGlyph::$GetAlertGlyphWidth(long)>
         2f1e4:	e080a00a 	add	sl, r0, sl
         2f1e8:	e2888001 	add	r8, r8, #1	; 0x1
         2f1ec:	e1580005 	cmp	r8, r5
         2f1f0:	359d0004 	ldrcc	r0, [sp, #4]	; fField4
         2f1f4:	315a0000 	cmpcc	sl, r0
         2f1f8:	3afffff5 	bcc	2f1d4 <TAlertItem::DrawText(unsigned char)+0xd0>
         2f1fc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         2f200:	e15a0000 	cmp	sl, r0
         2f204:	9a000005 	bls	2f220 <TAlertItem::DrawText(unsigned char)+0x11c>
         2f208:	e2485001 	sub	r5, r8, #1	; 0x1
         2f20c:	e7941085 	ldr	r1, [r4, r5, lsl #1]	; fField1
         2f210:	e1a01821 	mov	r1, r1, lsr #16
         2f214:	e28d000c 	add	r0, sp, #12	; 0xc
         2f218:	eb6c8162 	bl	1b4f7a8 <TAlertGlyph::$GetAlertGlyphWidth(long)>
         2f21c:	e04aa000 	sub	sl, sl, r0
         2f220:	e046000a 	sub	r0, r6, sl
         2f224:	e08760a0 	add	r6, r7, r0, lsr #1
         2f228:	e3a07000 	mov	r7, #0	; 0x0
         2f22c:	e3550000 	cmp	r5, #0	; 0x0
         2f230:	9a000065 	bls	2f3cc <TAlertItem::DrawText(unsigned char)+0x2c8>
         2f234:	e7941087 	ldr	r1, [r4, r7, lsl #1]	; fField1
         2f238:	e1a01821 	mov	r1, r1, lsr #16
         2f23c:	e59d2040 	ldr	r2, [sp, #64]
         2f240:	e28d000c 	add	r0, sp, #12	; 0xc
         2f244:	eb6c8158 	bl	1b4f7ac <TAlertGlyph::$GetAlertGlyph(long, PixelMap *)>
         2f248:	e1a08000 	mov	r8, r0
         2f24c:	e1a0a006 	mov	sl, r6
         2f250:	e1a01006 	mov	r1, r6
         2f254:	e1a00009 	mov	r0, r9
         2f258:	e59d203c 	ldr	r2, [sp, #60]
         2f25c:	eb6dc37d 	bl	1ba0058 <$DrawDChar__FlT1PUc>
         2f260:	e08a6008 	add	r6, sl, r8
         2f264:	e2877001 	add	r7, r7, #1	; 0x1
         2f268:	e1570005 	cmp	r7, r5
         2f26c:	3afffff0 	bcc	2f234 <TAlertItem::DrawText(unsigned char)+0x130>
         2f270:	ea000055 	b	2f3cc <TAlertItem::DrawText(unsigned char)+0x2c8>
         2f274:	e3a09000 	mov	r9, #0	; 0x0
         2f278:	ea000005 	b	2f294 <TAlertItem::DrawText(unsigned char)+0x190>
         2f27c:	e7941089 	ldr	r1, [r4, r9, lsl #1]	; fField1
         2f280:	e1a01821 	mov	r1, r1, lsr #16
         2f284:	e28d0010 	add	r0, sp, #16	; 0x10
         2f288:	eb6c8146 	bl	1b4f7a8 <TAlertGlyph::$GetAlertGlyphWidth(long)>
         2f28c:	e080a00a 	add	sl, r0, sl
         2f290:	e2899001 	add	r9, r9, #1	; 0x1
         2f294:	e1590005 	cmp	r9, r5
         2f298:	359d0008 	ldrcc	r0, [sp, #8]	; fField8
         2f29c:	315a0000 	cmpcc	sl, r0
         2f2a0:	3afffff5 	bcc	2f27c <TAlertItem::DrawText(unsigned char)+0x178>
         2f2a4:	e1a06009 	mov	r6, r9
         2f2a8:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         2f2ac:	e15a0000 	cmp	sl, r0
         2f2b0:	3a000012 	bcc	2f300 <TAlertItem::DrawText(unsigned char)+0x1fc>
         2f2b4:	e2499001 	sub	r9, r9, #1	; 0x1
         2f2b8:	e7940089 	ldr	r0, [r4, r9, lsl #1]	; fField1
         2f2bc:	e1a00820 	mov	r0, r0, lsr #16
         2f2c0:	e2466001 	sub	r6, r6, #1	; 0x1
         2f2c4:	e3300000 	teq	r0, #0	; 0x0
         2f2c8:	13300020 	teqne	r0, #32	; 0x20
         2f2cc:	1330000d 	teqne	r0, #13	; 0xd
         2f2d0:	0a00000a 	beq	2f300 <TAlertItem::DrawText(unsigned char)+0x1fc>
         2f2d4:	e3590000 	cmp	r9, #0	; 0x0
         2f2d8:	9a000008 	bls	2f300 <TAlertItem::DrawText(unsigned char)+0x1fc>
         2f2dc:	e7940089 	ldr	r0, [r4, r9, lsl #1]	; fField1
         2f2e0:	e1a00820 	mov	r0, r0, lsr #16
         2f2e4:	e3300000 	teq	r0, #0	; 0x0
         2f2e8:	13300020 	teqne	r0, #32	; 0x20
         2f2ec:	1330000d 	teqne	r0, #13	; 0xd
         2f2f0:	0a000002 	beq	2f300 <TAlertItem::DrawText(unsigned char)+0x1fc>
         2f2f4:	e2499001 	sub	r9, r9, #1	; 0x1
         2f2f8:	e3590000 	cmp	r9, #0	; 0x0
         2f2fc:	8afffff6 	bhi	2f2dc <TAlertItem::DrawText(unsigned char)+0x1d8>
         2f300:	e3390000 	teq	r9, #0	; 0x0
         2f304:	11a06009 	movne	r6, r9
         2f308:	e5940000 	ldr	r0, [r4]
         2f30c:	e1a00820 	mov	r0, r0, lsr #16
         2f310:	e330000d 	teq	r0, #13	; 0xd
         2f314:	03a06001 	moveq	r6, #1	; 0x1
         2f318:	e3a09000 	mov	r9, #0	; 0x0
         2f31c:	e3560000 	cmp	r6, #0	; 0x0
         2f320:	9a00000f 	bls	2f364 <TAlertItem::DrawText(unsigned char)+0x260>
         2f324:	e7941089 	ldr	r1, [r4, r9, lsl #1]	; fField1
         2f328:	e1a01821 	mov	r1, r1, lsr #16
         2f32c:	e59d2044 	ldr	r2, [sp, #68]
         2f330:	e28d0010 	add	r0, sp, #16	; 0x10
         2f334:	eb6c811c 	bl	1b4f7ac <TAlertGlyph::$GetAlertGlyph(long, PixelMap *)>
         2f338:	e1a0a000 	mov	sl, r0
         2f33c:	e58d7004 	str	r7, [sp, #4]	; fField4
         2f340:	e1a01007 	mov	r1, r7
         2f344:	e1a00008 	mov	r0, r8
         2f348:	e59d2040 	ldr	r2, [sp, #64]
         2f34c:	eb6dc341 	bl	1ba0058 <$DrawDChar__FlT1PUc>
         2f350:	e59d7004 	ldr	r7, [sp, #4]	; fField4
         2f354:	e087700a 	add	r7, r7, sl
         2f358:	e2899001 	add	r9, r9, #1	; 0x1
         2f35c:	e1590006 	cmp	r9, r6
         2f360:	3affffef 	bcc	2f324 <TAlertItem::DrawText(unsigned char)+0x220>
         2f364:	e0844086 	add	r4, r4, r6, lsl #1
         2f368:	e0455006 	sub	r5, r5, r6
         2f36c:	e59d000c 	ldr	r0, [sp, #12]
         2f370:	e0880000 	add	r0, r8, r0
         2f374:	e2808002 	add	r8, r0, #2	; 0x2
         2f378:	e3a0a000 	mov	sl, #0	; 0x0
         2f37c:	e59d7000 	ldr	r7, [sp]
         2f380:	e5940000 	ldr	r0, [r4]
         2f384:	e1a00820 	mov	r0, r0, lsr #16
         2f388:	e3300020 	teq	r0, #32	; 0x20
         2f38c:	1a000004 	bne	2f3a4 <TAlertItem::DrawText(unsigned char)+0x2a0>
         2f390:	e2455001 	sub	r5, r5, #1	; 0x1
         2f394:	e5b40002 	ldr	r0, [r4, #2]!	; fField2
         2f398:	e1a00820 	mov	r0, r0, lsr #16
         2f39c:	e3300020 	teq	r0, #32	; 0x20
         2f3a0:	0afffffa 	beq	2f390 <TAlertItem::DrawText(unsigned char)+0x28c>
         2f3a4:	e5940000 	ldr	r0, [r4]
         2f3a8:	e1b00820 	movs	r0, r0, lsr #16
         2f3ac:	0a000005 	beq	2f3c8 <TAlertItem::DrawText(unsigned char)+0x2c4>
         2f3b0:	e59d000c 	ldr	r0, [sp, #12]
         2f3b4:	e0881000 	add	r1, r8, r0
         2f3b8:	e51b0030 	ldr	r0, [fp, -#48]
         2f3bc:	e5900004 	ldr	r0, [r0, #4]	; fField4
         2f3c0:	e1510840 	cmp	r1, r0, asr #16
         2f3c4:	9affffaa 	bls	2f274 <TAlertItem::DrawText(unsigned char)+0x170>
         2f3c8:	e28dd004 	add	sp, sp, #4	; 0x4
         2f3cc:	e28dd03c 	add	sp, sp, #60	; 0x3c
         2f3d0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TAlertItem::DrawButton(void)
 * Address: 0002ffe4
 */
TAlertItem::DrawButton(void) {
    /*
         2ffe4:	e1a0c00d 	mov	ip, sp
         2ffe8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         2ffec:	e24cb004 	sub	fp, ip, #4	; 0x4
         2fff0:	e1a04000 	mov	r4, r0
         2fff4:	e24dd008 	sub	sp, sp, #8	; 0x8
         2fff8:	e5900008 	ldr	r0, [r0, #8]	; fField8
         2fffc:	e5900000 	ldr	r0, [r0]
         30000:	e1b00820 	movs	r0, r0, lsr #16
         30004:	0a000043 	beq	30118 <TAlertItem::DrawButton(void)+0x134>
         30008:	e5940006 	ldr	r0, [r4, #6]	; fField6
         3000c:	e1a00840 	mov	r0, r0, asr #16
         30010:	e2403002 	sub	r3, r0, #2	; 0x2
         30014:	e5940002 	ldr	r0, [r4, #2]	; fField2
         30018:	e1a00840 	mov	r0, r0, asr #16
         3001c:	e2801002 	add	r1, r0, #2	; 0x2
         30020:	e5942000 	ldr	r2, [r4]
         30024:	e1a02842 	mov	r2, r2, asr #16
         30028:	e1a00002 	mov	r0, r2
         3002c:	eb6dc00a 	bl	1ba005c <$DrawDLine__FsN31>
         30030:	e5943002 	ldr	r3, [r4, #2]	; fField2
         30034:	e1a03843 	mov	r3, r3, asr #16
         30038:	e1a01003 	mov	r1, r3
         3003c:	e5940004 	ldr	r0, [r4, #4]	; fField4
         30040:	e1a00840 	mov	r0, r0, asr #16
         30044:	e2402002 	sub	r2, r0, #2	; 0x2
         30048:	e5940000 	ldr	r0, [r4]
         3004c:	e1a00840 	mov	r0, r0, asr #16
         30050:	e2800002 	add	r0, r0, #2	; 0x2
         30054:	eb6dc000 	bl	1ba005c <$DrawDLine__FsN31>
         30058:	e5943006 	ldr	r3, [r4, #6]	; fField6
         3005c:	e1a03843 	mov	r3, r3, asr #16
         30060:	e1a01003 	mov	r1, r3
         30064:	e5940004 	ldr	r0, [r4, #4]	; fField4
         30068:	e1a00840 	mov	r0, r0, asr #16
         3006c:	e2402002 	sub	r2, r0, #2	; 0x2
         30070:	e5940000 	ldr	r0, [r4]
         30074:	e1a00840 	mov	r0, r0, asr #16
         30078:	e2800002 	add	r0, r0, #2	; 0x2
         3007c:	eb6dbff6 	bl	1ba005c <$DrawDLine__FsN31>
         30080:	e5940006 	ldr	r0, [r4, #6]	; fField6
         30084:	e1a00840 	mov	r0, r0, asr #16
         30088:	e2403002 	sub	r3, r0, #2	; 0x2
         3008c:	e5942004 	ldr	r2, [r4, #4]	; fField4
         30090:	e1a02842 	mov	r2, r2, asr #16
         30094:	e1a00002 	mov	r0, r2
         30098:	e5941002 	ldr	r1, [r4, #2]	; fField2
         3009c:	e1a01841 	mov	r1, r1, asr #16
         300a0:	e2811002 	add	r1, r1, #2	; 0x2
         300a4:	eb6dbfec 	bl	1ba005c <$DrawDLine__FsN31>
         300a8:	e5940000 	ldr	r0, [r4]
         300ac:	e1a00820 	mov	r0, r0, lsr #16
         300b0:	e2800001 	add	r0, r0, #1	; 0x1
         300b4:	e5cd0001 	strb	r0, [sp, #1]	; fField1
         300b8:	e1a00440 	mov	r0, r0, asr #8
         300bc:	e5cd0000 	strb	r0, [sp]
         300c0:	e5940002 	ldr	r0, [r4, #2]	; fField2
         300c4:	e1a00820 	mov	r0, r0, lsr #16
         300c8:	e2800001 	add	r0, r0, #1	; 0x1
         300cc:	e5cd0003 	strb	r0, [sp, #3]	; fField3
         300d0:	e1a00440 	mov	r0, r0, asr #8
         300d4:	e5cd0002 	strb	r0, [sp, #2]	; fField2
         300d8:	e5940004 	ldr	r0, [r4, #4]	; fField4
         300dc:	e1a00820 	mov	r0, r0, lsr #16
         300e0:	e5cd0005 	strb	r0, [sp, #5]	; fField5
         300e4:	e1a00440 	mov	r0, r0, asr #8
         300e8:	e5cd0004 	strb	r0, [sp, #4]	; fField4
         300ec:	e5940006 	ldr	r0, [r4, #6]	; fField6
         300f0:	e1a00820 	mov	r0, r0, lsr #16
         300f4:	e5cd0007 	strb	r0, [sp, #7]	; fField7
         300f8:	e1a00440 	mov	r0, r0, asr #8
         300fc:	e5cd0006 	strb	r0, [sp, #6]	; fField6
         30100:	e1a0000d 	mov	r0, sp
         30104:	e3a01000 	mov	r1, #0	; 0x0
         30108:	eb6dbfd6 	bl	1ba0068 <$FrameDRect(Rect *, TDMode)>
         3010c:	e1a00004 	mov	r0, r4
         30110:	e3a01001 	mov	r1, #1	; 0x1
         30114:	eb6dbfd1 	bl	1ba0060 <TAlertItem::$DrawText(unsigned char)>
         30118:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

