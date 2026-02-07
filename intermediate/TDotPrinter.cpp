#include "include/TDotPrinter.h"

/**
 * Symbol: Sizeof__11TDotPrinterSFv
 * Address: 0020d0f0
 */
void TDotPrinter::Sizeof() {
    /*
        20d0f0:	e3a00f73 	mov	r0, #460	; 0x1cc
        20d0f4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDotPrinter::Constructor(char *)
 * Address: 0020d0f8
 */
TDotPrinter::Constructor(char *) {
    /*
        20d0f8:	e1a0c00d 	mov	ip, sp
        20d0fc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        20d100:	e24cb004 	sub	fp, ip, #4	; 0x4
        20d104:	e1a04000 	mov	r4, r0
        20d108:	e3a0001e 	mov	r0, #30	; 0x1e
        20d10c:	e2400b2b 	sub	r0, r0, #44032	; 0xac00
        20d110:	e3a06000 	mov	r6, #0	; 0x0
        20d114:	e5840010 	str	r0, [r4, #16]	; fField16
        20d118:	e5c46014 	strb	r6, [r4, #20]	; fField20
        20d11c:	e5c46015 	strb	r6, [r4, #21]	; fField21
        20d120:	e5846098 	str	r6, [r4, #152]	; fField152
        20d124:	e28f0f16 	add	r0, pc, #88	; 0x58
        20d128:	eb672a97 	bl	1bd7b8c <$NewByName__FPCcT1>
        20d12c:	e5840098 	str	r0, [r4, #152]	; fField152
        20d130:	e3300000 	teq	r0, #0	; 0x0
        20d134:	0a000010 	beq	20d17c <TDotPrinter::Constructor(char *)+0x84>
        20d138:	e3a00018 	mov	r0, #24	; 0x18
        20d13c:	e5846010 	str	r6, [r4, #16]	; fField16
        20d140:	eb67057c 	bl	1bce738 <$__nw(unsigned int)>
        20d144:	e1b05000 	movs	r5, r0
        20d148:	0a000007 	beq	20d16c <TDotPrinter::Constructor(char *)+0x74>
        20d14c:	e3a00002 	mov	r0, #2	; 0x2
        20d150:	eb66d3fd 	bl	1bc214c <$AllocateRefHandle(long)>
        20d154:	e5850004 	str	r0, [r5, #4]	; fField4
        20d158:	e5a06004 	str	r6, [r0, #4]!	; fField4
        20d15c:	e3a00002 	mov	r0, #2	; 0x2
        20d160:	eb66d3f9 	bl	1bc214c <$AllocateRefHandle(long)>
        20d164:	e5850008 	str	r0, [r5, #8]
        20d168:	e5a06004 	str	r6, [r0, #4]!	; fField4
        20d16c:	e5940098 	ldr	r0, [r4, #152]	; fField152
        20d170:	e5a05010 	str	r5, [r0, #16]!	; fField16
        20d174:	e5940098 	ldr	r0, [r4, #152]	; fField152
        20d178:	e5a04014 	str	r4, [r0, #20]!	; fField20
        20d17c:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
        20d180:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        20d184:	54446f74 	strplb	r6, [r4], -#3956	; fField3956
        20d188:	5072696e 	rsbpls	r6, r2, lr, ror #18
        20d18c:	74657244 	strvcbt	r7, [r5], -#580
        20d190:	72697665 	rsbvc	r7, r9, #105906176	; 0x6500000
        20d194:	72000000 	andvc	r0, r0, #0	; 0x0
    */
}

/**
 * Symbol: TDotPrinter::SetPortraitOrientation(unsigned char)
 * Address: 0020d198
 */
TDotPrinter::SetPortraitOrientation(unsigned char) {
    /*
        20d198:	e5900098 	ldr	r0, [r0, #152]	; fField152
        20d19c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        20d1a0:	e5c01014 	strb	r1, [r0, #20]	; fField20
        20d1a4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDotPrinter::CalcMinBounds(PixelMap const *, long, Rect *)
 * Address: 0020d1a8
 */
TDotPrinter::CalcMinBounds(PixelMap const *, long, Rect *) {
    /*
        20d1a8:	e1a0c00d 	mov	ip, sp
        20d1ac:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        20d1b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        20d1b4:	e24dd00c 	sub	sp, sp, #12	; 0xc
        20d1b8:	e5912008 	ldr	r2, [r1, #8]
        20d1bc:	e1a02842 	mov	r2, r2, asr #16
        20d1c0:	e58d2008 	str	r2, [sp, #8]
        20d1c4:	e591c00a 	ldr	ip, [r1, #10]
        20d1c8:	e1a0c84c 	mov	ip, ip, asr #16
        20d1cc:	e591e00c 	ldr	lr, [r1, #12]
        20d1d0:	e1a0e84e 	mov	lr, lr, asr #16
        20d1d4:	e591700e 	ldr	r7, [r1, #14]
        20d1d8:	e1a07847 	mov	r7, r7, asr #16
        20d1dc:	e287001f 	add	r0, r7, #31	; 0x1f
        20d1e0:	e3c0001f 	bic	r0, r0, #31	; 0x1f
        20d1e4:	e5914004 	ldr	r4, [r1, #4]	; fField4
        20d1e8:	e1a04844 	mov	r4, r4, asr #16
        20d1ec:	e1a06004 	mov	r6, r4
        20d1f0:	e1a03144 	mov	r3, r4, asr #2
        20d1f4:	e04e5002 	sub	r5, lr, r2
        20d1f8:	e0080594 	mul	r8, r4, r5
        20d1fc:	e5915000 	ldr	r5, [r1]
        20d200:	e1a09005 	mov	r9, r5
        20d204:	e1a01003 	mov	r1, r3
        20d208:	e1a04148 	mov	r4, r8, asr #2
        20d20c:	e58d4004 	str	r4, [sp, #4]	; fField4
        20d210:	e3540000 	cmp	r4, #0	; 0x0
        20d214:	da000008 	ble	20d23c <TDotPrinter::CalcMinBounds(PixelMap const *, long, Rect *)+0x94>
        20d218:	e499a004 	ldr	sl, [r9], #4	; fField4
        20d21c:	e33a0000 	teq	sl, #0	; 0x0
        20d220:	1a00000a 	bne	20d250 <TDotPrinter::CalcMinBounds(PixelMap const *, long, Rect *)+0xa8>
        20d224:	e2511001 	subs	r1, r1, #1	; 0x1
        20d228:	01a01003 	moveq	r1, r3
        20d22c:	02822001 	addeq	r2, r2, #1	; 0x1
        20d230:	e2444001 	sub	r4, r4, #1	; 0x1
        20d234:	e3540000 	cmp	r4, #0	; 0x0
        20d238:	cafffff6 	bgt	20d218 <TDotPrinter::CalcMinBounds(PixelMap const *, long, Rect *)+0x70>
        20d23c:	e3a00000 	mov	r0, #0	; 0x0
        20d240:	e1a0e000 	mov	lr, r0
        20d244:	e1a0c000 	mov	ip, r0
        20d248:	e1a02000 	mov	r2, r0
        20d24c:	ea00003d 	b	20d348 <TDotPrinter::CalcMinBounds(PixelMap const *, long, Rect *)+0x1a0>
        20d250:	e0854008 	add	r4, r5, r8
        20d254:	e1a01003 	mov	r1, r3
        20d258:	e59d8004 	ldr	r8, [sp, #4]	; fField4
        20d25c:	e3580000 	cmp	r8, #0	; 0x0
        20d260:	da000008 	ble	20d288 <TDotPrinter::CalcMinBounds(PixelMap const *, long, Rect *)+0xe0>
        20d264:	e5349004 	ldr	r9, [r4, -#4]!	; fField4
        20d268:	e3390000 	teq	r9, #0	; 0x0
        20d26c:	1a000005 	bne	20d288 <TDotPrinter::CalcMinBounds(PixelMap const *, long, Rect *)+0xe0>
        20d270:	e2511001 	subs	r1, r1, #1	; 0x1
        20d274:	01a01003 	moveq	r1, r3
        20d278:	024ee001 	subeq	lr, lr, #1	; 0x1
        20d27c:	e2488001 	sub	r8, r8, #1	; 0x1
        20d280:	e3580000 	cmp	r8, #0	; 0x0
        20d284:	cafffff6 	bgt	20d264 <TDotPrinter::CalcMinBounds(PixelMap const *, long, Rect *)+0xbc>
        20d288:	e59d1008 	ldr	r1, [sp, #8]
        20d28c:	e0421001 	sub	r1, r2, r1
        20d290:	e0285196 	mla	r8, r6, r1, r5
        20d294:	e1a04003 	mov	r4, r3
        20d298:	e3530000 	cmp	r3, #0	; 0x0
        20d29c:	e58d8000 	str	r8, [sp]
        20d2a0:	da000011 	ble	20d2ec <TDotPrinter::CalcMinBounds(PixelMap const *, long, Rect *)+0x144>
        20d2a4:	e04e9002 	sub	r9, lr, r2
        20d2a8:	e1a01008 	mov	r1, r8
        20d2ac:	e2888004 	add	r8, r8, #4	; 0x4
        20d2b0:	e1a05009 	mov	r5, r9
        20d2b4:	e3590000 	cmp	r9, #0	; 0x0
        20d2b8:	da000008 	ble	20d2e0 <TDotPrinter::CalcMinBounds(PixelMap const *, long, Rect *)+0x138>
        20d2bc:	e591a000 	ldr	sl, [r1]
        20d2c0:	e33a0000 	teq	sl, #0	; 0x0
        20d2c4:	10431004 	subne	r1, r3, r4
        20d2c8:	108cc281 	addne	ip, ip, r1, lsl #5
        20d2cc:	1a000006 	bne	20d2ec <TDotPrinter::CalcMinBounds(PixelMap const *, long, Rect *)+0x144>
        20d2d0:	e0811103 	add	r1, r1, r3, lsl #2
        20d2d4:	e2455001 	sub	r5, r5, #1	; 0x1
        20d2d8:	e3550000 	cmp	r5, #0	; 0x0
        20d2dc:	cafffff6 	bgt	20d2bc <TDotPrinter::CalcMinBounds(PixelMap const *, long, Rect *)+0x114>
        20d2e0:	e2444001 	sub	r4, r4, #1	; 0x1
        20d2e4:	e3540000 	cmp	r4, #0	; 0x0
        20d2e8:	caffffee 	bgt	20d2a8 <TDotPrinter::CalcMinBounds(PixelMap const *, long, Rect *)+0x100>
        20d2ec:	e59d8000 	ldr	r8, [sp]
        20d2f0:	e0886006 	add	r6, r8, r6
        20d2f4:	e1a04003 	mov	r4, r3
        20d2f8:	e3530000 	cmp	r3, #0	; 0x0
        20d2fc:	da000011 	ble	20d348 <TDotPrinter::CalcMinBounds(PixelMap const *, long, Rect *)+0x1a0>
        20d300:	e04e8002 	sub	r8, lr, r2
        20d304:	e2461004 	sub	r1, r6, #4	; 0x4
        20d308:	e1a06001 	mov	r6, r1
        20d30c:	e1a05008 	mov	r5, r8
        20d310:	e3580000 	cmp	r8, #0	; 0x0
        20d314:	da000008 	ble	20d33c <TDotPrinter::CalcMinBounds(PixelMap const *, long, Rect *)+0x194>
        20d318:	e5919000 	ldr	r9, [r1]
        20d31c:	e3390000 	teq	r9, #0	; 0x0
        20d320:	10431004 	subne	r1, r3, r4
        20d324:	10400281 	subne	r0, r0, r1, lsl #5
        20d328:	1a000006 	bne	20d348 <TDotPrinter::CalcMinBounds(PixelMap const *, long, Rect *)+0x1a0>
        20d32c:	e0811103 	add	r1, r1, r3, lsl #2
        20d330:	e2455001 	sub	r5, r5, #1	; 0x1
        20d334:	e3550000 	cmp	r5, #0	; 0x0
        20d338:	cafffff6 	bgt	20d318 <TDotPrinter::CalcMinBounds(PixelMap const *, long, Rect *)+0x170>
        20d33c:	e2444001 	sub	r4, r4, #1	; 0x1
        20d340:	e3540000 	cmp	r4, #0	; 0x0
        20d344:	caffffee 	bgt	20d304 <TDotPrinter::CalcMinBounds(PixelMap const *, long, Rect *)+0x15c>
        20d348:	e1570000 	cmp	r7, r0
        20d34c:	b1a00007 	movlt	r0, r7
        20d350:	e1a0300e 	mov	r3, lr
        20d354:	e92d0008 	stmdb	sp!, {r3}
        20d358:	e1a03000 	mov	r3, r0
        20d35c:	e1a0100c 	mov	r1, ip
        20d360:	e51b002c 	ldr	r0, [fp, -#44]
        20d364:	eb651da8 	bl	1b54a0c <$SetRect__FP4RectlN32>
        20d368:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TDotPrinter::TryAllocBands(char **, long, long)
 * Address: 0020d36c
 */
TDotPrinter::TryAllocBands(char **, long, long) {
    /*
        20d36c:	e1a0c00d 	mov	ip, sp
        20d370:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        20d374:	e24cb004 	sub	fp, ip, #4	; 0x4
        20d378:	e1a05001 	mov	r5, r1
        20d37c:	e1a04002 	mov	r4, r2
        20d380:	e1a06003 	mov	r6, r3
        20d384:	e3a07000 	mov	r7, #0	; 0x0
        20d388:	e3520000 	cmp	r2, #0	; 0x0
        20d38c:	da00000f 	ble	20d3d0 <TDotPrinter::TryAllocBands(char **, long, long)+0x64>
        20d390:	e1a00006 	mov	r0, r6
        20d394:	eb675369 	bl	1be2140 <$NewPtr>
        20d398:	e7850107 	str	r0, [r5, r7, lsl #2]
        20d39c:	e3300000 	teq	r0, #0	; 0x0
        20d3a0:	1a000007 	bne	20d3c4 <TDotPrinter::TryAllocBands(char **, long, long)+0x58>
        20d3a4:	e2574001 	subs	r4, r7, #1	; 0x1
        20d3a8:	4a000003 	bmi	20d3bc <TDotPrinter::TryAllocBands(char **, long, long)+0x50>
        20d3ac:	e7950104 	ldr	r0, [r5, r4, lsl #2]
        20d3b0:	eb674f3f 	bl	1be10b4 <$DisposPtr>
        20d3b4:	e2544001 	subs	r4, r4, #1	; 0x1
        20d3b8:	5afffffb 	bpl	20d3ac <TDotPrinter::TryAllocBands(char **, long, long)+0x40>
        20d3bc:	e3a00000 	mov	r0, #0	; 0x0
        20d3c0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        20d3c4:	e2877001 	add	r7, r7, #1	; 0x1
        20d3c8:	e1570004 	cmp	r7, r4
        20d3cc:	baffffef 	blt	20d390 <TDotPrinter::TryAllocBands(char **, long, long)+0x24>
        20d3d0:	e3a00001 	mov	r0, #1	; 0x1
        20d3d4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TDotPrinter::FaxEndPage(long)
 * Address: 0020d3d8
 */
TDotPrinter::FaxEndPage(long) {
    /*
        20d3d8:	e1a0c00d 	mov	ip, sp
        20d3dc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        20d3e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        20d3e4:	e1a04000 	mov	r4, r0
        20d3e8:	e1a05001 	mov	r5, r1
        20d3ec:	e5900098 	ldr	r0, [r0, #152]	; fField152
        20d3f0:	eb670900 	bl	1bcf7f8 <TProtocol::$ClassInfo( const(void))>
        20d3f4:	eb6742ba 	bl	1bddee4 <TClassInfo::$Version( const(void))>
        20d3f8:	e3500802 	cmp	r0, #131072	; 0x20000
        20d3fc:	3a000003 	bcc	20d410 <TDotPrinter::FaxEndPage(long)+0x38>
        20d400:	e1a01005 	mov	r1, r5
        20d404:	e5940098 	ldr	r0, [r4, #152]	; fField152
        20d408:	eb64e3c1 	bl	1b46314 <TDotPrinterDriver::$FaxEndPage(long)>
        20d40c:	e5840010 	str	r0, [r4, #16]	; fField16
        20d410:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
        20d414:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TDotPrinter::Delete(void)
 * Address: 0020d418
 */
TDotPrinter::Delete(void) {
    /*
        20d418:	e1a0c00d 	mov	ip, sp
        20d41c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        20d420:	e24cb004 	sub	fp, ip, #4	; 0x4
        20d424:	e1a04000 	mov	r4, r0
        20d428:	e5900098 	ldr	r0, [r0, #152]	; fField152
        20d42c:	e3a06000 	mov	r6, #0	; 0x0
        20d430:	e3300000 	teq	r0, #0	; 0x0
        20d434:	0a00000a 	beq	20d464 <TDotPrinter::Delete(void)+0x4c>
        20d438:	e5b05010 	ldr	r5, [r0, #16]!	; fField16
        20d43c:	e3350000 	teq	r5, #0	; 0x0
        20d440:	0a000005 	beq	20d45c <TDotPrinter::Delete(void)+0x44>
        20d444:	e5950008 	ldr	r0, [r5, #8]
        20d448:	eb66d75b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        20d44c:	e5950004 	ldr	r0, [r5, #4]	; fField4
        20d450:	eb66d759 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        20d454:	e1a00005 	mov	r0, r5
        20d458:	eb6700a0 	bl	1bcd6e0 <$__dl(void *)>
        20d45c:	e5b40098 	ldr	r0, [r4, #152]!	; fField152
        20d460:	eb64cadb 	bl	1b3ffd4 <TDotPrinterDriver::$Delete(void)>
        20d464:	e59f0004 	ldr	r0, [pc, #4]	; 20d470 <TDotPrinter::Delete(void)+0x58>	; fField4
        20d468:	e5c06000 	strb	r6, [r0]
        20d46c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        20d470:	0c100b64 	ldceq	11, cr0, [r0], -#400
    */
}

/**
 * Symbol: TDotPrinter::Open(RefVar const &)
 * Address: 0020d474
 */
TDotPrinter::Open(RefVar const &) {
    /*
        20d474:	e1a0c00d 	mov	ip, sp
        20d478:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        20d47c:	e24cb004 	sub	fp, ip, #4	; 0x4
        20d480:	e1a04000 	mov	r4, r0
        20d484:	e1a05001 	mov	r5, r1
        20d488:	eb64c6a5 	bl	1b3ef24 <TPrinter::$CheckUserAbort(void)>
        20d48c:	e3300000 	teq	r0, #0	; 0x0
        20d490:	1a0000b1 	bne	20d75c <TDotPrinter::Open(RefVar const &)+0x2e8>
        20d494:	e5940098 	ldr	r0, [r4, #152]	; fField152
        20d498:	e1a02005 	mov	r2, r5
        20d49c:	e5b01010 	ldr	r1, [r0, #16]!	; fField16
        20d4a0:	e1a00004 	mov	r0, r4
        20d4a4:	eb64df7d 	bl	1b452a0 <TPrinter::$SetupConnect(PrintConnect *, RefVar const &)>
        20d4a8:	e3a07001 	mov	r7, #1	; 0x1
        20d4ac:	e59f6128 	ldr	r6, [pc, #128]	; 20d5dc <TDotPrinter::Open(RefVar const &)+0x168>
        20d4b0:	e3a059ca 	mov	r5, #3309568	; 0x328000
        20d4b4:	e2855402 	add	r5, r5, #33554432	; 0x2000000
        20d4b8:	e5c67000 	strb	r7, [r6]
        20d4bc:	e5940098 	ldr	r0, [r4, #152]	; fField152
        20d4c0:	eb64d323 	bl	1b42154 <TDotPrinterDriver::$Open(void)>
        20d4c4:	e3a0801d 	mov	r8, #29	; 0x1d
        20d4c8:	e2488b2b 	sub	r8, r8, #44032	; 0xac00
        20d4cc:	e5840010 	str	r0, [r4, #16]	; fField16
        20d4d0:	e1300008 	teq	r0, r8
        20d4d4:	1a000004 	bne	20d4ec <TDotPrinter::Open(RefVar const &)+0x78>
        20d4d8:	e1a01004 	mov	r1, r4
        20d4dc:	e1a00005 	mov	r0, r5
        20d4e0:	eb67469a 	bl	1bdef50 <$PrReleaseControl(unsigned long, TPrinter *)>
        20d4e4:	e1a00004 	mov	r0, r4
        20d4e8:	eb64c68d 	bl	1b3ef24 <TPrinter::$CheckUserAbort(void)>
        20d4ec:	e5940010 	ldr	r0, [r4, #16]	; fField16
        20d4f0:	e1300008 	teq	r0, r8
        20d4f4:	0affffef 	beq	20d4b8 <TDotPrinter::Open(RefVar const &)+0x44>
        20d4f8:	e5940010 	ldr	r0, [r4, #16]	; fField16
        20d4fc:	e3300000 	teq	r0, #0	; 0x0
        20d500:	1a000095 	bne	20d75c <TDotPrinter::Open(RefVar const &)+0x2e8>
        20d504:	e24dd00c 	sub	sp, sp, #12	; 0xc
        20d508:	e1a0100d 	mov	r1, sp
        20d50c:	e5940098 	ldr	r0, [r4, #152]	; fField152
        20d510:	eb64cedf 	bl	1b41094 <TDotPrinterDriver::$GetPageInfo(PrPageInfo *)>
        20d514:	e1a0100d 	mov	r1, sp
        20d518:	e1a00004 	mov	r0, r4
        20d51c:	eb64d717 	bl	1b43180 <TPrinter::$OpenPort(PrPageInfo const &)>
        20d520:	e1a00004 	mov	r0, r4
        20d524:	eb64cede 	bl	1b410a4 <TPrinter::$GetPrinterPort(void)>
        20d528:	e5901010 	ldr	r1, [r0, #16]	; fField16
        20d52c:	e3811c01 	orr	r1, r1, #256	; 0x100
        20d530:	e5801010 	str	r1, [r0, #16]	; fField16
        20d534:	eb64df5f 	bl	1b452b8 <$SetupScalingBottlenecks(GrafPort *)>
        20d538:	e24dd010 	sub	sp, sp, #16	; 0x10
        20d53c:	e284109c 	add	r1, r4, #156	; 0x9c
        20d540:	e5940098 	ldr	r0, [r4, #152]	; fField152
        20d544:	eb64cac9 	bl	1b40070 <TDotPrinterDriver::$GetBandPrefs(DotPrinterPrefs *)>
        20d548:	e5d400a4 	ldrb	r0, [r4, #164]	; fField164
        20d54c:	e3300000 	teq	r0, #0	; 0x0
        20d550:	03a00001 	moveq	r0, #1	; 0x1
        20d554:	13a00002 	movne	r0, #2	; 0x2
        20d558:	e5840100 	str	r0, [r4, #256]	; fField256
        20d55c:	e2807002 	add	r7, r0, #2	; 0x2
        20d560:	e1a00004 	mov	r0, r4
        20d564:	eb64cecf 	bl	1b410a8 <TPrinter::$GetScalerInfo(void)>
        20d568:	e590000e 	ldr	r0, [r0, #14]
        20d56c:	e1a00840 	mov	r0, r0, asr #16
        20d570:	e280001f 	add	r0, r0, #31	; 0x1f
        20d574:	e3c0001f 	bic	r0, r0, #31	; 0x1f
        20d578:	e1a061c0 	mov	r6, r0, asr #3
        20d57c:	e284509c 	add	r5, r4, #156	; 0x9c
        20d580:	e8950021 	ldmia	r5, {r0, r5}
        20d584:	e1500005 	cmp	r0, r5
        20d588:	ca00000b 	bgt	20d5bc <TDotPrinter::Open(RefVar const &)+0x148>
        20d58c:	e0030596 	mul	r3, r6, r5
        20d590:	e1a08003 	mov	r8, r3
        20d594:	e1a02007 	mov	r2, r7
        20d598:	e1a0100d 	mov	r1, sp
        20d59c:	e1a00004 	mov	r0, r4
        20d5a0:	eb64df51 	bl	1b452ec <TDotPrinter::$TryAllocBands(char **, long, long)>
        20d5a4:	e3300000 	teq	r0, #0	; 0x0
        20d5a8:	1a000003 	bne	20d5bc <TDotPrinter::Open(RefVar const &)+0x148>
        20d5ac:	e1a050c5 	mov	r5, r5, asr #1
        20d5b0:	e594009c 	ldr	r0, [r4, #156]	; fField156
        20d5b4:	e1500005 	cmp	r0, r5
        20d5b8:	dafffff3 	ble	20d58c <TDotPrinter::Open(RefVar const &)+0x118>
        20d5bc:	e59d0000 	ldr	r0, [sp]
        20d5c0:	e3300000 	teq	r0, #0	; 0x0
        20d5c4:	1a000006 	bne	20d5e4 <TDotPrinter::Open(RefVar const &)+0x170>
        20d5c8:	e5940098 	ldr	r0, [r4, #152]	; fField152
        20d5cc:	eb64c661 	bl	1b3ef58 <TDotPrinterDriver::$Close(void)>
        20d5d0:	e59f0008 	ldr	r0, [pc, #8]	; 20d5e0 <TDotPrinter::Open(RefVar const &)+0x16c>
        20d5d4:	e5a40010 	str	r0, [r4, #16]!	; fField16
        20d5d8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        20d5dc:	0c100b64 	ldceq	11, cr0, [r0], -#400
        20d5e0:	ffff541f 	swinv	0x00ff541f
        20d5e4:	e1a03805 	mov	r3, r5, lsl #16
        20d5e8:	e1a03843 	mov	r3, r3, asr #16
        20d5ec:	e5848110 	str	r8, [r4, #272]	; fField272
        20d5f0:	e92d0008 	stmdb	sp!, {r3}
        20d5f4:	e1a00004 	mov	r0, r4
        20d5f8:	eb64ceaa 	bl	1b410a8 <TPrinter::$GetScalerInfo(void)>
        20d5fc:	e590300e 	ldr	r3, [r0, #14]
        20d600:	e1a03843 	mov	r3, r3, asr #16
        20d604:	e28400f0 	add	r0, r4, #240	; 0xf0
        20d608:	e1a07000 	mov	r7, r0
        20d60c:	e3a02000 	mov	r2, #0	; 0x0
        20d610:	e3a01000 	mov	r1, #0	; 0x0
        20d614:	eb651cfc 	bl	1b54a0c <$SetRect__FP4RectlN32>
        20d618:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        20d61c:	e58400a8 	str	r0, [r4, #168]	; fField168
        20d620:	e5c460ad 	strb	r6, [r4, #173]	; fField173
        20d624:	e1a00446 	mov	r0, r6, asr #8
        20d628:	e5c400ac 	strb	r0, [r4, #172]	; fField172
        20d62c:	e28480b0 	add	r8, r4, #176	; 0xb0
        20d630:	e8975000 	ldmia	r7, {ip, lr}
        20d634:	e8885000 	stmia	r8, {ip, lr}
        20d638:	e3a00105 	mov	r0, #1073741825	; 0x40000001
        20d63c:	e2800c01 	add	r0, r0, #256	; 0x100
        20d640:	e3a07000 	mov	r7, #0	; 0x0
        20d644:	e58400b8 	str	r0, [r4, #184]	; fField184
        20d648:	e5c470bd 	strb	r7, [r4, #189]	; fField189
        20d64c:	e5c470bc 	strb	r7, [r4, #188]	; fField188
        20d650:	e5c470bf 	strb	r7, [r4, #191]	; fField191
        20d654:	e5c470be 	strb	r7, [r4, #190]	; fField190
        20d658:	e58470c0 	str	r7, [r4, #192]	; fField192
        20d65c:	e5940100 	ldr	r0, [r4, #256]	; fField256
        20d660:	e28460a8 	add	r6, r4, #168	; 0xa8
        20d664:	e3300002 	teq	r0, #2	; 0x2
        20d668:	1a000008 	bne	20d690 <TDotPrinter::Open(RefVar const &)+0x21c>
        20d66c:	e284e0c4 	add	lr, r4, #196	; 0xc4
        20d670:	e1a00006 	mov	r0, r6
        20d674:	e8b0100e 	ldmia	r0!, {r1, r2, r3, ip}
        20d678:	e8ae100e 	stmia	lr!, {r1, r2, r3, ip}
        20d67c:	e890100c 	ldmia	r0, {r2, r3, ip}
        20d680:	e88e100c 	stmia	lr, {r2, r3, ip}
        20d684:	e59d000c 	ldr	r0, [sp, #12]
        20d688:	e58400c4 	str	r0, [r4, #196]	; fField196
        20d68c:	ea000000 	b	20d694 <TDotPrinter::Open(RefVar const &)+0x220>
        20d690:	e58470c4 	str	r7, [r4, #196]	; fField196
        20d694:	e58450e4 	str	r5, [r4, #228]	; fField228
        20d698:	e1a00004 	mov	r0, r4
        20d69c:	eb64ce81 	bl	1b410a8 <TPrinter::$GetScalerInfo(void)>
        20d6a0:	e5b01014 	ldr	r1, [r0, #20]!	; fField20
        20d6a4:	e1a00805 	mov	r0, r5, lsl #16
        20d6a8:	eb674e84 	bl	1be10c0 <$FixedDivide>
        20d6ac:	e2800902 	add	r0, r0, #32768	; 0x8000
        20d6b0:	e1a00840 	mov	r0, r0, asr #16
        20d6b4:	e1a00800 	mov	r0, r0, lsl #16
        20d6b8:	e1a00840 	mov	r0, r0, asr #16
        20d6bc:	e58400e0 	str	r0, [r4, #224]	; fField224
        20d6c0:	e5847104 	str	r7, [r4, #260]	; fField260
        20d6c4:	eb65107f 	bl	1b518c8 <$NewRgn(void)>
        20d6c8:	e5840108 	str	r0, [r4, #264]	; fField264
        20d6cc:	eb65107d 	bl	1b518c8 <$NewRgn(void)>
        20d6d0:	e584010c 	str	r0, [r4, #268]	; fField268
        20d6d4:	e2840f45 	add	r0, r4, #276	; 0x114
        20d6d8:	e1a0e006 	mov	lr, r6
        20d6dc:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        20d6e0:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        20d6e4:	e89e100c 	ldmia	lr, {r2, r3, ip}
        20d6e8:	e880100c 	stmia	r0, {r2, r3, ip}
        20d6ec:	e2840e13 	add	r0, r4, #304	; 0x130
        20d6f0:	e1a0e006 	mov	lr, r6
        20d6f4:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        20d6f8:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        20d6fc:	e89e100c 	ldmia	lr, {r2, r3, ip}
        20d700:	e880100c 	stmia	r0, {r2, r3, ip}
        20d704:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        20d708:	e5840114 	str	r0, [r4, #276]	; fField276
        20d70c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        20d710:	e5840168 	str	r0, [r4, #360]	; fField360
        20d714:	e59d0008 	ldr	r0, [sp, #8]
        20d718:	e5840130 	str	r0, [r4, #304]	; fField304
        20d71c:	e3a00004 	mov	r0, #4	; 0x4
        20d720:	eb65082e 	bl	1b4f7e0 <$GetStdPattern(unsigned char)>
        20d724:	e584016c 	str	r0, [r4, #364]	; fField364
        20d728:	e58441c8 	str	r4, [r4, #456]	; fField456
        20d72c:	e2840f5d 	add	r0, r4, #372	; 0x174
        20d730:	e1a05000 	mov	r5, r0
        20d734:	eb67881b 	bl	1bef7a8 <$OpenPort(GrafPort *)>
        20d738:	e1a00005 	mov	r0, r5
        20d73c:	e8b6500e 	ldmia	r6!, {r1, r2, r3, ip, lr}
        20d740:	e8a0500e 	stmia	r0!, {r1, r2, r3, ip, lr}
        20d744:	e8965000 	ldmia	r6, {ip, lr}
        20d748:	e8805000 	stmia	r0, {ip, lr}
        20d74c:	e285001c 	add	r0, r5, #28	; 0x1c
        20d750:	e8985000 	ldmia	r8, {ip, lr}
        20d754:	e8805000 	stmia	r0, {ip, lr}
        20d758:	e28dd01c 	add	sp, sp, #28	; 0x1c
        20d75c:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
        20d760:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TDotPrinter::Close(void)
 * Address: 0020d764
 */
TDotPrinter::Close(void) {
    /*
        20d764:	e1a0c00d 	mov	ip, sp
        20d768:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        20d76c:	e24cb004 	sub	fp, ip, #4	; 0x4
        20d770:	e1a04000 	mov	r4, r0
        20d774:	e5900098 	ldr	r0, [r0, #152]	; fField152
        20d778:	eb64c5f6 	bl	1b3ef58 <TDotPrinterDriver::$Close(void)>
        20d77c:	e5840010 	str	r0, [r4, #16]	; fField16
        20d780:	e2840f5d 	add	r0, r4, #372	; 0x174
        20d784:	eb64ffc6 	bl	1b4d6a4 <$ClosePort(GrafPort *)>
        20d788:	e59400a8 	ldr	r0, [r4, #168]	; fField168
        20d78c:	e3300000 	teq	r0, #0	; 0x0
        20d790:	0a000008 	beq	20d7b8 <TDotPrinter::Close(void)+0x54>
        20d794:	eb674e46 	bl	1be10b4 <$DisposPtr>
        20d798:	e5940100 	ldr	r0, [r4, #256]	; fField256
        20d79c:	e3500001 	cmp	r0, #1	; 0x1
        20d7a0:	c59400c4 	ldrgt	r0, [r4, #196]	; fField196
        20d7a4:	cb674e42 	blgt	1be10b4 <$DisposPtr>
        20d7a8:	e5940168 	ldr	r0, [r4, #360]	; fField360
        20d7ac:	eb674e40 	bl	1be10b4 <$DisposPtr>
        20d7b0:	e5940130 	ldr	r0, [r4, #304]	; fField304
        20d7b4:	eb674e3e 	bl	1be10b4 <$DisposPtr>
        20d7b8:	e5940108 	ldr	r0, [r4, #264]	; fField264
        20d7bc:	eb64ffc7 	bl	1b4d6e0 <$DisposeRgn(Region **)>
        20d7c0:	e594010c 	ldr	r0, [r4, #268]	; fField268
        20d7c4:	eb64ffc5 	bl	1b4d6e0 <$DisposeRgn(Region **)>
        20d7c8:	e1a00004 	mov	r0, r4
        20d7cc:	eb64ce33 	bl	1b410a0 <TPrinter::$GetPort(void)>
        20d7d0:	eb64dec0 	bl	1b452d8 <$TearDownScalingBottlenecks(GrafPort *)>
        20d7d4:	e1a00004 	mov	r0, r4
        20d7d8:	eb64c9e9 	bl	1b3ff84 <TPrinter::$ClosePort(void)>
        20d7dc:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
        20d7e0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TDotPrinter::OpenPage(void)
 * Address: 0020d7e4
 */
TDotPrinter::OpenPage(void) {
    /*
        20d7e4:	e1a0c00d 	mov	ip, sp
        20d7e8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        20d7ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        20d7f0:	e1a04000 	mov	r4, r0
        20d7f4:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        20d7f8:	e5907104 	ldr	r7, [r0, #260]	; fField260
        20d7fc:	eb64ce27 	bl	1b410a0 <TPrinter::$GetPort(void)>
        20d800:	e1a05000 	mov	r5, r0
        20d804:	e284af5d 	add	sl, r4, #372	; 0x174
        20d808:	e1a00004 	mov	r0, r4
        20d80c:	eb64c5c4 	bl	1b3ef24 <TPrinter::$CheckUserAbort(void)>
        20d810:	e3300000 	teq	r0, #0	; 0x0
        20d814:	0a000001 	beq	20d820 <TDotPrinter::OpenPage(void)+0x3c>
        20d818:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
        20d81c:	ea000004 	b	20d834 <TDotPrinter::OpenPage(void)+0x50>
        20d820:	e5940098 	ldr	r0, [r4, #152]	; fField152
        20d824:	eb64d252 	bl	1b42174 <TDotPrinterDriver::$OpenPage(void)>
        20d828:	e5840010 	str	r0, [r4, #16]	; fField16
        20d82c:	e3300000 	teq	r0, #0	; 0x0
        20d830:	0a000000 	beq	20d838 <TDotPrinter::OpenPage(void)+0x54>
        20d834:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        20d838:	e5940098 	ldr	r0, [r4, #152]	; fField152
        20d83c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        20d840:	e5d06014 	ldrb	r6, [r0, #20]	; fField20
        20d844:	e3360000 	teq	r6, #0	; 0x0
        20d848:	0a000006 	beq	20d868 <TDotPrinter::OpenPage(void)+0x84>
        20d84c:	e5951022 	ldr	r1, [r5, #34]	; fField34
        20d850:	e1a01841 	mov	r1, r1, asr #16
        20d854:	e5950020 	ldr	r0, [r5, #32]	; fField32
        20d858:	e1510840 	cmp	r1, r0, asr #16
        20d85c:	ca000006 	bgt	20d87c <TDotPrinter::OpenPage(void)+0x98>
        20d860:	e3360000 	teq	r6, #0	; 0x0
        20d864:	1a00000e 	bne	20d8a4 <TDotPrinter::OpenPage(void)+0xc0>
        20d868:	e5951020 	ldr	r1, [r5, #32]	; fField32
        20d86c:	e1a01841 	mov	r1, r1, asr #16
        20d870:	e5950022 	ldr	r0, [r5, #34]	; fField34
        20d874:	e1510840 	cmp	r1, r0, asr #16
        20d878:	da000009 	ble	20d8a4 <TDotPrinter::OpenPage(void)+0xc0>
        20d87c:	e5950022 	ldr	r0, [r5, #34]	; fField34
        20d880:	e1a00840 	mov	r0, r0, asr #16
        20d884:	e5951020 	ldr	r1, [r5, #32]	; fField32
        20d888:	e1a01821 	mov	r1, r1, lsr #16
        20d88c:	e5c51023 	strb	r1, [r5, #35]	; fField35
        20d890:	e1a01441 	mov	r1, r1, asr #8
        20d894:	e5c51022 	strb	r1, [r5, #34]	; fField34
        20d898:	e5c50021 	strb	r0, [r5, #33]	; fField33
        20d89c:	e1a00440 	mov	r0, r0, asr #8
        20d8a0:	e5c50020 	strb	r0, [r5, #32]	; fField32
        20d8a4:	e2850008 	add	r0, r5, #8	; 0x8
        20d8a8:	e285801c 	add	r8, r5, #28	; 0x1c
        20d8ac:	e58d8018 	str	r8, [sp, #24]
        20d8b0:	e8985000 	ldmia	r8, {ip, lr}
        20d8b4:	e8805000 	stmia	r0, {ip, lr}
        20d8b8:	e5950022 	ldr	r0, [r5, #34]	; fField34
        20d8bc:	e1a00840 	mov	r0, r0, asr #16
        20d8c0:	e280001f 	add	r0, r0, #31	; 0x1f
        20d8c4:	e3c0001f 	bic	r0, r0, #31	; 0x1f
        20d8c8:	e1a001c0 	mov	r0, r0, asr #3
        20d8cc:	e5c50005 	strb	r0, [r5, #5]	; fField5
        20d8d0:	e1a00440 	mov	r0, r0, asr #8
        20d8d4:	e5c50004 	strb	r0, [r5, #4]	; fField4
        20d8d8:	e1a00005 	mov	r0, r5
        20d8dc:	eb6787b2 	bl	1bef7ac <$SetPort(GrafPort *)>
        20d8e0:	e3a01000 	mov	r1, #0	; 0x0
        20d8e4:	e58d0000 	str	r0, [sp]
        20d8e8:	e3a00000 	mov	r0, #0	; 0x0
        20d8ec:	eb651840 	bl	1b539f4 <$SetOrigin__FlT1>
        20d8f0:	e28d0004 	add	r0, sp, #4	; 0x4
        20d8f4:	e8985000 	ldmia	r8, {ip, lr}
        20d8f8:	e8805000 	stmia	r0, {ip, lr}
        20d8fc:	e3360000 	teq	r6, #0	; 0x0
        20d900:	e59400e0 	ldr	r0, [r4, #224]	; fField224
        20d904:	05cd000b 	streqb	r0, [sp, #11]
        20d908:	15cd0009 	strneb	r0, [sp, #9]
        20d90c:	e1a00440 	mov	r0, r0, asr #8
        20d910:	05cd000a 	streqb	r0, [sp, #10]
        20d914:	15cd0008 	strneb	r0, [sp, #8]
        20d918:	e28410e8 	add	r1, r4, #232	; 0xe8
        20d91c:	e58d1014 	str	r1, [sp, #20]	; fField20
        20d920:	e28d0004 	add	r0, sp, #4	; 0x4
        20d924:	e8905000 	ldmia	r0, {ip, lr}
        20d928:	e8815000 	stmia	r1, {ip, lr}
        20d92c:	e28d1004 	add	r1, sp, #4	; 0x4
        20d930:	e5950024 	ldr	r0, [r5, #36]	; fField36
        20d934:	eb651818 	bl	1b5399c <$RectRgn(Region **, Rect *)>
        20d938:	e28d1004 	add	r1, sp, #4	; 0x4
        20d93c:	e5940108 	ldr	r0, [r4, #264]	; fField264
        20d940:	eb651815 	bl	1b5399c <$RectRgn(Region **, Rect *)>
        20d944:	e28d1004 	add	r1, sp, #4	; 0x4
        20d948:	e594010c 	ldr	r0, [r4, #268]	; fField268
        20d94c:	eb651812 	bl	1b5399c <$RectRgn(Region **, Rect *)>
        20d950:	eb6513f3 	bl	1b52924 <$PenNormal(void)>
        20d954:	e5d400a4 	ldrb	r0, [r4, #164]	; fField164
        20d958:	e3300000 	teq	r0, #0	; 0x0
        20d95c:	1a000001 	bne	20d968 <TDotPrinter::OpenPage(void)+0x184>
        20d960:	e3360000 	teq	r6, #0	; 0x0
        20d964:	1a000001 	bne	20d970 <TDotPrinter::OpenPage(void)+0x18c>
        20d968:	e3a01002 	mov	r1, #2	; 0x2
        20d96c:	ea000000 	b	20d974 <TDotPrinter::OpenPage(void)+0x190>
        20d970:	e3a01001 	mov	r1, #1	; 0x1
        20d974:	e3300000 	teq	r0, #0	; 0x0
        20d978:	e5841100 	str	r1, [r4, #256]	; fField256
        20d97c:	13360000 	teqne	r6, #0	; 0x0
        20d980:	03a00000 	moveq	r0, #0	; 0x0
        20d984:	12670001 	rsbne	r0, r7, #1	; 0x1
        20d988:	e58d000c 	str	r0, [sp, #12]
        20d98c:	e1a0000a 	mov	r0, sl
        20d990:	eb678785 	bl	1bef7ac <$SetPort(GrafPort *)>
        20d994:	e3a07000 	mov	r7, #0	; 0x0
        20d998:	e58d7004 	str	r7, [sp, #4]	; fField4
        20d99c:	eb64e268 	bl	1b46344 <$PrintPatchpoint(void)>
        20d9a0:	e28410b0 	add	r1, r4, #176	; 0xb0
        20d9a4:	e28480a8 	add	r8, r4, #168	; 0xa8
        20d9a8:	e3360000 	teq	r6, #0	; 0x0
        20d9ac:	e58d1010 	str	r1, [sp, #16]	; fField16
        20d9b0:	0a000008 	beq	20d9d8 <TDotPrinter::OpenPage(void)+0x1f4>
        20d9b4:	e1a00004 	mov	r0, r4
        20d9b8:	eb64cdba 	bl	1b410a8 <TPrinter::$GetScalerInfo(void)>
        20d9bc:	e5900006 	ldr	r0, [r0, #6]
        20d9c0:	e1a00840 	mov	r0, r0, asr #16
        20d9c4:	e59d100a 	ldr	r1, [sp, #10]
        20d9c8:	e1300841 	teq	r0, r1, asr #16
        20d9cc:	1a000008 	bne	20d9f4 <TDotPrinter::OpenPage(void)+0x210>
        20d9d0:	e3560000 	cmp	r6, #0	; 0x0
        20d9d4:	1a0000ed 	bne	20dd90 <TDotPrinter::OpenPage(void)+0x5ac>
        20d9d8:	e1a00004 	mov	r0, r4
        20d9dc:	eb64cdb1 	bl	1b410a8 <TPrinter::$GetScalerInfo(void)>
        20d9e0:	e5901004 	ldr	r1, [r0, #4]	; fField4
        20d9e4:	e1a01841 	mov	r1, r1, asr #16
        20d9e8:	e59d0008 	ldr	r0, [sp, #8]
        20d9ec:	e1310840 	teq	r1, r0, asr #16
        20d9f0:	0a0000f3 	beq	20ddc4 <TDotPrinter::OpenPage(void)+0x5e0>
        20d9f4:	e24dd018 	sub	sp, sp, #24	; 0x18
        20d9f8:	e59400a8 	ldr	r0, [r4, #168]	; fField168
        20d9fc:	eb674dac 	bl	1be10b4 <$DisposPtr>
        20da00:	e3a07000 	mov	r7, #0	; 0x0
        20da04:	e58470a8 	str	r7, [r4, #168]	; fField168
        20da08:	e59400c4 	ldr	r0, [r4, #196]	; fField196
        20da0c:	e3300000 	teq	r0, #0	; 0x0
        20da10:	0a000001 	beq	20da1c <TDotPrinter::OpenPage(void)+0x238>
        20da14:	eb674da6 	bl	1be10b4 <$DisposPtr>
        20da18:	e58470c4 	str	r7, [r4, #196]	; fField196
        20da1c:	e5940114 	ldr	r0, [r4, #276]	; fField276
        20da20:	eb674da3 	bl	1be10b4 <$DisposPtr>
        20da24:	e3a07000 	mov	r7, #0	; 0x0
        20da28:	e5847114 	str	r7, [r4, #276]	; fField276
        20da2c:	e5940130 	ldr	r0, [r4, #304]	; fField304
        20da30:	eb674d9f 	bl	1be10b4 <$DisposPtr>
        20da34:	e5847130 	str	r7, [r4, #304]	; fField304
        20da38:	e24dd00c 	sub	sp, sp, #12	; 0xc
        20da3c:	e1a0100d 	mov	r1, sp
        20da40:	e5940098 	ldr	r0, [r4, #152]	; fField152
        20da44:	eb64cd92 	bl	1b41094 <TDotPrinterDriver::$GetPageInfo(PrPageInfo *)>
        20da48:	e89d0003 	ldmia	sp, {r0, r1}
        20da4c:	e58d0004 	str	r0, [sp, #4]	; fField4
        20da50:	e58d1000 	str	r1, [sp]
        20da54:	e59d000a 	ldr	r0, [sp, #10]
        20da58:	e1a00840 	mov	r0, r0, asr #16
        20da5c:	e59d100a 	ldr	r1, [sp, #10]
        20da60:	e5cd100b 	strb	r1, [sp, #11]
        20da64:	e1a01441 	mov	r1, r1, asr #8
        20da68:	e5cd100a 	strb	r1, [sp, #10]
        20da6c:	e5cd0009 	strb	r0, [sp, #9]
        20da70:	e1a00440 	mov	r0, r0, asr #8
        20da74:	e5cd0008 	strb	r0, [sp, #8]
        20da78:	e1a0100d 	mov	r1, sp
        20da7c:	e1a00004 	mov	r0, r4
        20da80:	eb64e230 	bl	1b46348 <TPrinter::$SetScalerInfo(PrPageInfo const &)>
        20da84:	e3360000 	teq	r6, #0	; 0x0
        20da88:	0a000008 	beq	20dab0 <TDotPrinter::OpenPage(void)+0x2cc>
        20da8c:	e1a00004 	mov	r0, r4
        20da90:	eb64cd84 	bl	1b410a8 <TPrinter::$GetScalerInfo(void)>
        20da94:	e590000e 	ldr	r0, [r0, #14]
        20da98:	e1a00820 	mov	r0, r0, lsr #16
        20da9c:	e5cd002f 	strb	r0, [sp, #47]
        20daa0:	e1a00440 	mov	r0, r0, asr #8
        20daa4:	e5cd002e 	strb	r0, [sp, #46]
        20daa8:	e59400e4 	ldr	r0, [r4, #228]	; fField228
        20daac:	ea000007 	b	20dad0 <TDotPrinter::OpenPage(void)+0x2ec>
        20dab0:	e59400e4 	ldr	r0, [r4, #228]	; fField228
        20dab4:	e5cd002f 	strb	r0, [sp, #47]
        20dab8:	e1a00440 	mov	r0, r0, asr #8
        20dabc:	e5cd002e 	strb	r0, [sp, #46]
        20dac0:	e1a00004 	mov	r0, r4
        20dac4:	eb64cd77 	bl	1b410a8 <TPrinter::$GetScalerInfo(void)>
        20dac8:	e590000c 	ldr	r0, [r0, #12]
        20dacc:	e1a00820 	mov	r0, r0, lsr #16
        20dad0:	e5cd002d 	strb	r0, [sp, #45]
        20dad4:	e1a00440 	mov	r0, r0, asr #8
        20dad8:	e5cd002c 	strb	r0, [sp, #44]
        20dadc:	eb64e218 	bl	1b46344 <$PrintPatchpoint(void)>
        20dae0:	e5940100 	ldr	r0, [r4, #256]	; fField256
        20dae4:	e2802002 	add	r2, r0, #2	; 0x2
        20dae8:	e58d201c 	str	r2, [sp, #28]
        20daec:	e59470e4 	ldr	r7, [r4, #228]	; fField228
        20daf0:	e59d002e 	ldr	r0, [sp, #46]
        20daf4:	e1a00840 	mov	r0, r0, asr #16
        20daf8:	e280001f 	add	r0, r0, #31	; 0x1f
        20dafc:	e3c0001f 	bic	r0, r0, #31	; 0x1f
        20db00:	e1a091c0 	mov	r9, r0, asr #3
        20db04:	e59d002c 	ldr	r0, [sp, #44]
        20db08:	e1a00840 	mov	r0, r0, asr #16
        20db0c:	e0030099 	mul	r3, r9, r0
        20db10:	e58d3020 	str	r3, [sp, #32]	; fField32
        20db14:	e59d201c 	ldr	r2, [sp, #28]
        20db18:	e28d100c 	add	r1, sp, #12	; 0xc
        20db1c:	e1a00004 	mov	r0, r4
        20db20:	eb64ddf1 	bl	1b452ec <TDotPrinter::$TryAllocBands(char **, long, long)>
        20db24:	e3300000 	teq	r0, #0	; 0x0
        20db28:	1a00001b 	bne	20db9c <TDotPrinter::OpenPage(void)+0x3b8>
        20db2c:	e1a070c7 	mov	r7, r7, asr #1
        20db30:	e594009c 	ldr	r0, [r4, #156]	; fField156
        20db34:	e1500007 	cmp	r0, r7
        20db38:	c59f0080 	ldrgt	r0, [pc, #80]	; 20dbc0 <TDotPrinter::OpenPage(void)+0x3dc>
        20db3c:	c5a40010 	strgt	r0, [r4, #16]!	; fField16
        20db40:	c91baff0 	ldmgtdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        20db44:	e3360000 	teq	r6, #0	; 0x0
        20db48:	e1a00007 	mov	r0, r7
        20db4c:	15cd002d 	strneb	r0, [sp, #45]
        20db50:	11a00440 	movne	r0, r0, asr #8
        20db54:	15cd002c 	strneb	r0, [sp, #44]
        20db58:	1a000005 	bne	20db74 <TDotPrinter::OpenPage(void)+0x390>
        20db5c:	e5cd002f 	strb	r0, [sp, #47]
        20db60:	e1a00440 	mov	r0, r0, asr #8
        20db64:	e5cd002e 	strb	r0, [sp, #46]
        20db68:	e287001f 	add	r0, r7, #31	; 0x1f
        20db6c:	e3c0001f 	bic	r0, r0, #31	; 0x1f
        20db70:	e1a091c0 	mov	r9, r0, asr #3
        20db74:	e59d002c 	ldr	r0, [sp, #44]
        20db78:	e1a00840 	mov	r0, r0, asr #16
        20db7c:	e0030099 	mul	r3, r9, r0
        20db80:	e58d3020 	str	r3, [sp, #32]	; fField32
        20db84:	e59d201c 	ldr	r2, [sp, #28]
        20db88:	e28d100c 	add	r1, sp, #12	; 0xc
        20db8c:	e1a00004 	mov	r0, r4
        20db90:	eb64ddd5 	bl	1b452ec <TDotPrinter::$TryAllocBands(char **, long, long)>
        20db94:	e3300000 	teq	r0, #0	; 0x0
        20db98:	0affffe3 	beq	20db2c <TDotPrinter::OpenPage(void)+0x348>
        20db9c:	e58470e4 	str	r7, [r4, #228]	; fField228
        20dba0:	e59d3020 	ldr	r3, [sp, #32]	; fField32
        20dba4:	e3360000 	teq	r6, #0	; 0x0
        20dba8:	e5843110 	str	r3, [r4, #272]	; fField272
        20dbac:	e1a00004 	mov	r0, r4
        20dbb0:	0a000003 	beq	20dbc4 <TDotPrinter::OpenPage(void)+0x3e0>
        20dbb4:	eb64cd3b 	bl	1b410a8 <TPrinter::$GetScalerInfo(void)>
        20dbb8:	e5b01014 	ldr	r1, [r0, #20]!	; fField20
        20dbbc:	ea000002 	b	20dbcc <TDotPrinter::OpenPage(void)+0x3e8>
        20dbc0:	ffff541f 	swinv	0x00ff541f
        20dbc4:	eb64cd37 	bl	1b410a8 <TPrinter::$GetScalerInfo(void)>
        20dbc8:	e5b01010 	ldr	r1, [r0, #16]!	; fField16
        20dbcc:	e1a00807 	mov	r0, r7, lsl #16
        20dbd0:	eb674d3a 	bl	1be10c0 <$FixedDivide>
        20dbd4:	e2800902 	add	r0, r0, #32768	; 0x8000
        20dbd8:	e1a00840 	mov	r0, r0, asr #16
        20dbdc:	e1a00800 	mov	r0, r0, lsl #16
        20dbe0:	e1a00840 	mov	r0, r0, asr #16
        20dbe4:	e58400e0 	str	r0, [r4, #224]	; fField224
        20dbe8:	e5c490ad 	strb	r9, [r4, #173]	; fField173
        20dbec:	e1a00449 	mov	r0, r9, asr #8
        20dbf0:	e5c400ac 	strb	r0, [r4, #172]	; fField172
        20dbf4:	e59d1034 	ldr	r1, [sp, #52]
        20dbf8:	e28d0028 	add	r0, sp, #40	; 0x28
        20dbfc:	e8905000 	ldmia	r0, {ip, lr}
        20dc00:	e8815000 	stmia	r1, {ip, lr}
        20dc04:	e3a00105 	mov	r0, #1073741825	; 0x40000001
        20dc08:	e2800c01 	add	r0, r0, #256	; 0x100
        20dc0c:	e58400b8 	str	r0, [r4, #184]	; fField184
        20dc10:	e3a00000 	mov	r0, #0	; 0x0
        20dc14:	e5c400bd 	strb	r0, [r4, #189]	; fField189
        20dc18:	e5c400bc 	strb	r0, [r4, #188]	; fField188
        20dc1c:	e5c400bf 	strb	r0, [r4, #191]	; fField191
        20dc20:	e5c400be 	strb	r0, [r4, #190]	; fField190
        20dc24:	e58400c0 	str	r0, [r4, #192]	; fField192
        20dc28:	e2840f45 	add	r0, r4, #276	; 0x114
        20dc2c:	e1a09000 	mov	r9, r0
        20dc30:	e1a0e008 	mov	lr, r8
        20dc34:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        20dc38:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        20dc3c:	e89e100c 	ldmia	lr, {r2, r3, ip}
        20dc40:	e880100c 	stmia	r0, {r2, r3, ip}
        20dc44:	e284ee13 	add	lr, r4, #304	; 0x130
        20dc48:	e1a00008 	mov	r0, r8
        20dc4c:	e8b0100e 	ldmia	r0!, {r1, r2, r3, ip}
        20dc50:	e8ae100e 	stmia	lr!, {r1, r2, r3, ip}
        20dc54:	e890100c 	ldmia	r0, {r2, r3, ip}
        20dc58:	e88e100c 	stmia	lr, {r2, r3, ip}
        20dc5c:	e59d000c 	ldr	r0, [sp, #12]
        20dc60:	e58400a8 	str	r0, [r4, #168]	; fField168
        20dc64:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        20dc68:	e5840114 	str	r0, [r4, #276]	; fField276
        20dc6c:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        20dc70:	e5840168 	str	r0, [r4, #360]	; fField360
        20dc74:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        20dc78:	e5840130 	str	r0, [r4, #304]	; fField304
        20dc7c:	e5940100 	ldr	r0, [r4, #256]	; fField256
        20dc80:	e28470c4 	add	r7, r4, #196	; 0xc4
        20dc84:	e3300002 	teq	r0, #2	; 0x2
        20dc88:	1a000007 	bne	20dcac <TDotPrinter::OpenPage(void)+0x4c8>
        20dc8c:	e1a0e007 	mov	lr, r7
        20dc90:	e1a00008 	mov	r0, r8
        20dc94:	e8b0100e 	ldmia	r0!, {r1, r2, r3, ip}
        20dc98:	e8ae100e 	stmia	lr!, {r1, r2, r3, ip}
        20dc9c:	e890100c 	ldmia	r0, {r2, r3, ip}
        20dca0:	e88e100c 	stmia	lr, {r2, r3, ip}
        20dca4:	e59d0018 	ldr	r0, [sp, #24]
        20dca8:	e58400c4 	str	r0, [r4, #196]	; fField196
        20dcac:	e24dd008 	sub	sp, sp, #8	; 0x8
        20dcb0:	e59d1044 	ldr	r1, [sp, #68]
        20dcb4:	e8911008 	ldmia	r1, {r3, ip}
        20dcb8:	e88d1008 	stmia	sp, {r3, ip}
        20dcbc:	e3360000 	teq	r6, #0	; 0x0
        20dcc0:	e59400e0 	ldr	r0, [r4, #224]	; fField224
        20dcc4:	05cd0007 	streqb	r0, [sp, #7]
        20dcc8:	15cd0005 	strneb	r0, [sp, #5]	; fField5
        20dccc:	e1a00440 	mov	r0, r0, asr #8
        20dcd0:	05cd0006 	streqb	r0, [sp, #6]
        20dcd4:	15cd0004 	strneb	r0, [sp, #4]	; fField4
        20dcd8:	e59d0040 	ldr	r0, [sp, #64]
        20dcdc:	e89d5000 	ldmia	sp, {ip, lr}
        20dce0:	e8805000 	stmia	r0, {ip, lr}
        20dce4:	e1a0100d 	mov	r1, sp
        20dce8:	e5b50024 	ldr	r0, [r5, #36]!	; fField36
        20dcec:	eb65172a 	bl	1b5399c <$RectRgn(Region **, Rect *)>
        20dcf0:	e1a0100d 	mov	r1, sp
        20dcf4:	e5940108 	ldr	r0, [r4, #264]	; fField264
        20dcf8:	eb651727 	bl	1b5399c <$RectRgn(Region **, Rect *)>
        20dcfc:	e1a0100d 	mov	r1, sp
        20dd00:	e594010c 	ldr	r0, [r4, #268]	; fField268
        20dd04:	eb651724 	bl	1b5399c <$RectRgn(Region **, Rect *)>
        20dd08:	eb64e18d 	bl	1b46344 <$PrintPatchpoint(void)>
        20dd0c:	e3360000 	teq	r6, #0	; 0x0
        20dd10:	1a00001c 	bne	20dd88 <TDotPrinter::OpenPage(void)+0x5a4>
        20dd14:	e5d410a4 	ldrb	r1, [r4, #164]	; fField164
        20dd18:	e2840f53 	add	r0, r4, #332	; 0x14c
        20dd1c:	e3310000 	teq	r1, #0	; 0x0
        20dd20:	0a000004 	beq	20dd38 <TDotPrinter::OpenPage(void)+0x554>
        20dd24:	e8b9500e 	ldmia	r9!, {r1, r2, r3, ip, lr}
        20dd28:	e8a0500e 	stmia	r0!, {r1, r2, r3, ip, lr}
        20dd2c:	e8995000 	ldmia	r9, {ip, lr}
        20dd30:	e8805000 	stmia	r0, {ip, lr}
        20dd34:	ea000003 	b	20dd48 <TDotPrinter::OpenPage(void)+0x564>
        20dd38:	e8b7100e 	ldmia	r7!, {r1, r2, r3, ip}
        20dd3c:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        20dd40:	e897100c 	ldmia	r7, {r2, r3, ip}
        20dd44:	e880100c 	stmia	r0, {r2, r3, ip}
        20dd48:	e59d0034 	ldr	r0, [sp, #52]
        20dd4c:	e1a00840 	mov	r0, r0, asr #16
        20dd50:	e280001f 	add	r0, r0, #31	; 0x1f
        20dd54:	e3c0001f 	bic	r0, r0, #31	; 0x1f
        20dd58:	e1a001c0 	mov	r0, r0, asr #3
        20dd5c:	e5c40151 	strb	r0, [r4, #337]
        20dd60:	e1a00440 	mov	r0, r0, asr #8
        20dd64:	e5c40150 	strb	r0, [r4, #336]
        20dd68:	e59d0034 	ldr	r0, [sp, #52]
        20dd6c:	e5c40159 	strb	r0, [r4, #345]	; fField345
        20dd70:	e1a00440 	mov	r0, r0, asr #8
        20dd74:	e5c40158 	strb	r0, [r4, #344]	; fField344
        20dd78:	e59d0036 	ldr	r0, [sp, #54]
        20dd7c:	e5c4015b 	strb	r0, [r4, #347]
        20dd80:	e1a00440 	mov	r0, r0, asr #8
        20dd84:	e5c4015a 	strb	r0, [r4, #346]
        20dd88:	e28dd02c 	add	sp, sp, #44	; 0x2c
        20dd8c:	ea00001e 	b	20de0c <TDotPrinter::OpenPage(void)+0x628>
        20dd90:	0a00000b 	beq	20ddc4 <TDotPrinter::OpenPage(void)+0x5e0>
        20dd94:	e1a00004 	mov	r0, r4
        20dd98:	eb64ccc2 	bl	1b410a8 <TPrinter::$GetScalerInfo(void)>
        20dd9c:	e590000e 	ldr	r0, [r0, #14]
        20dda0:	e1a00820 	mov	r0, r0, lsr #16
        20dda4:	e5cd000b 	strb	r0, [sp, #11]
        20dda8:	e1a00440 	mov	r0, r0, asr #8
        20ddac:	e5cd000a 	strb	r0, [sp, #10]
        20ddb0:	e59400e4 	ldr	r0, [r4, #228]	; fField228
        20ddb4:	e5cd0009 	strb	r0, [sp, #9]
        20ddb8:	e1a00440 	mov	r0, r0, asr #8
        20ddbc:	e5cd0008 	strb	r0, [sp, #8]
        20ddc0:	ea000011 	b	20de0c <TDotPrinter::OpenPage(void)+0x628>
        20ddc4:	e59400e4 	ldr	r0, [r4, #228]	; fField228
        20ddc8:	e5cd000b 	strb	r0, [sp, #11]
        20ddcc:	e1a00440 	mov	r0, r0, asr #8
        20ddd0:	e5cd000a 	strb	r0, [sp, #10]
        20ddd4:	e1a00004 	mov	r0, r4
        20ddd8:	eb64ccb2 	bl	1b410a8 <TPrinter::$GetScalerInfo(void)>
        20dddc:	e590000c 	ldr	r0, [r0, #12]
        20dde0:	e1a00820 	mov	r0, r0, lsr #16
        20dde4:	e5cd0009 	strb	r0, [sp, #9]
        20dde8:	e1a00440 	mov	r0, r0, asr #8
        20ddec:	e5cd0008 	strb	r0, [sp, #8]
        20ddf0:	e3a07000 	mov	r7, #0	; 0x0
        20ddf4:	e5c47155 	strb	r7, [r4, #341]	; fField341
        20ddf8:	e5c47154 	strb	r7, [r4, #340]	; fField340
        20ddfc:	e59400e4 	ldr	r0, [r4, #228]	; fField228
        20de00:	e5c40159 	strb	r0, [r4, #345]	; fField345
        20de04:	e1a00440 	mov	r0, r0, asr #8
        20de08:	e5c40158 	strb	r0, [r4, #344]	; fField344
        20de0c:	eb64e14c 	bl	1b46344 <$PrintPatchpoint(void)>
        20de10:	e28400f0 	add	r0, r4, #240	; 0xf0
        20de14:	e28d1004 	add	r1, sp, #4	; 0x4
        20de18:	e8915000 	ldmia	r1, {ip, lr}
        20de1c:	e8805000 	stmia	r0, {ip, lr}
        20de20:	e59d000c 	ldr	r0, [sp, #12]
        20de24:	e3360000 	teq	r6, #0	; 0x0
        20de28:	e5840104 	str	r0, [r4, #260]	; fField260
        20de2c:	0a00000c 	beq	20de64 <TDotPrinter::OpenPage(void)+0x680>
        20de30:	e59d000c 	ldr	r0, [sp, #12]
        20de34:	e0600180 	rsb	r0, r0, r0, lsl #3
        20de38:	e0840100 	add	r0, r4, r0, lsl #2
        20de3c:	e28020b0 	add	r2, r0, #176	; 0xb0
        20de40:	e28d1004 	add	r1, sp, #4	; 0x4
        20de44:	e8915000 	ldmia	r1, {ip, lr}
        20de48:	e8825000 	stmia	r2, {ip, lr}
        20de4c:	e28000a8 	add	r0, r0, #168	; 0xa8
        20de50:	e1a05000 	mov	r5, r0
        20de54:	eb6516e8 	bl	1b539fc <$SetPortBits(PixelMap *)>
        20de58:	e5941110 	ldr	r1, [r4, #272]	; fField272
        20de5c:	e5950000 	ldr	r0, [r5]
        20de60:	ea000007 	b	20de84 <TDotPrinter::OpenPage(void)+0x6a0>
        20de64:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        20de68:	e28d0004 	add	r0, sp, #4	; 0x4
        20de6c:	e8905000 	ldmia	r0, {ip, lr}
        20de70:	e8815000 	stmia	r1, {ip, lr}
        20de74:	e1a00008 	mov	r0, r8
        20de78:	eb6516df 	bl	1b539fc <$SetPortBits(PixelMap *)>
        20de7c:	e5941110 	ldr	r1, [r4, #272]	; fField272
        20de80:	e5980000 	ldr	r0, [r8]
        20de84:	eb674864 	bl	1be001c <$ZeroBytes>
        20de88:	e28a101c 	add	r1, sl, #28	; 0x1c
        20de8c:	e28d0004 	add	r0, sp, #4	; 0x4
        20de90:	e8905000 	ldmia	r0, {ip, lr}
        20de94:	e8815000 	stmia	r1, {ip, lr}
        20de98:	e28d1004 	add	r1, sp, #4	; 0x4
        20de9c:	e59a0028 	ldr	r0, [sl, #40]
        20dea0:	eb6516bd 	bl	1b5399c <$RectRgn(Region **, Rect *)>
        20dea4:	e28d1004 	add	r1, sp, #4	; 0x4
        20dea8:	e5ba0024 	ldr	r0, [sl, #36]!	; fField36
        20deac:	eb6516ba 	bl	1b5399c <$RectRgn(Region **, Rect *)>
        20deb0:	eb65129b 	bl	1b52924 <$PenNormal(void)>
        20deb4:	e3a07000 	mov	r7, #0	; 0x0
        20deb8:	e58470f8 	str	r7, [r4, #248]
        20debc:	e3e00000 	mvn	r0, #0	; 0x0
        20dec0:	e58470fc 	str	r7, [r4, #252]
        20dec4:	e5c40171 	strb	r0, [r4, #369]
        20dec8:	e5c40170 	strb	r0, [r4, #368]
        20decc:	e5c40173 	strb	r0, [r4, #371]
        20ded0:	e5c40172 	strb	r0, [r4, #370]
        20ded4:	e59d0000 	ldr	r0, [sp]
        20ded8:	eb678633 	bl	1bef7ac <$SetPort(GrafPort *)>
        20dedc:	eafffe4d 	b	20d818 <TDotPrinter::OpenPage(void)+0x34>
    */
}

/**
 * Symbol: TDotPrinter::RepeatPage(void)
 * Address: 0020dee0
 */
TDotPrinter::RepeatPage(void) {
    /*
        20dee0:	e1a0c00d 	mov	ip, sp
        20dee4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        20dee8:	e24cb004 	sub	fp, ip, #4	; 0x4
        20deec:	e1a04000 	mov	r4, r0
        20def0:	eb64c40b 	bl	1b3ef24 <TPrinter::$CheckUserAbort(void)>
        20def4:	e3a06000 	mov	r6, #0	; 0x0
        20def8:	e3300000 	teq	r0, #0	; 0x0
        20defc:	05940010 	ldreq	r0, [r4, #16]	; fField16
        20df00:	03300000 	teqeq	r0, #0	; 0x0
        20df04:	11a00006 	movne	r0, r6
        20df08:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        20df0c:	e24dd008 	sub	sp, sp, #8	; 0x8
        20df10:	e5940098 	ldr	r0, [r4, #152]	; fField152
        20df14:	e5948104 	ldr	r8, [r4, #260]	; fField260
        20df18:	e5900010 	ldr	r0, [r0, #16]	; fField16
        20df1c:	e5d07014 	ldrb	r7, [r0, #20]	; fField20
        20df20:	e5d400a5 	ldrb	r0, [r4, #165]	; fField165
        20df24:	e3300000 	teq	r0, #0	; 0x0
        20df28:	13370000 	teqne	r7, #0	; 0x0
        20df2c:	0a000007 	beq	20df50 <TDotPrinter::RepeatPage(void)+0x70>
        20df30:	e0680188 	rsb	r0, r8, r8, lsl #3
        20df34:	e5942110 	ldr	r2, [r4, #272]	; fField272
        20df38:	e0840100 	add	r0, r4, r0, lsl #2
        20df3c:	e28010a8 	add	r1, r0, #168	; 0xa8
        20df40:	e1a0300d 	mov	r3, sp
        20df44:	e1a00004 	mov	r0, r4
        20df48:	eb64bfe8 	bl	1b3def0 <TDotPrinter::$CalcMinBounds(PixelMap const *, long, Rect *)>
        20df4c:	ea000004 	b	20df64 <TDotPrinter::RepeatPage(void)+0x84>
        20df50:	e0681188 	rsb	r1, r8, r8, lsl #3
        20df54:	e0841101 	add	r1, r4, r1, lsl #2
        20df58:	e28110b0 	add	r1, r1, #176	; 0xb0
        20df5c:	e8911008 	ldmia	r1, {r3, ip}
        20df60:	e88d1008 	stmia	sp, {r3, ip}
        20df64:	eb64e0f6 	bl	1b46344 <$PrintPatchpoint(void)>
        20df68:	e28490a8 	add	r9, r4, #168	; 0xa8
        20df6c:	e3370000 	teq	r7, #0	; 0x0
        20df70:	0a00002b 	beq	20e024 <TDotPrinter::RepeatPage(void)+0x144>
        20df74:	e0680188 	rsb	r0, r8, r8, lsl #3
        20df78:	e0840100 	add	r0, r4, r0, lsl #2
        20df7c:	e28010a8 	add	r1, r0, #168	; 0xa8
        20df80:	e1a0200d 	mov	r2, sp
        20df84:	e5940098 	ldr	r0, [r4, #152]	; fField152
        20df88:	eb64cc55 	bl	1b410e4 <TDotPrinterDriver::$ImageBand(PixelMap *, Rect const *)>
        20df8c:	e5840010 	str	r0, [r4, #16]	; fField16
        20df90:	e3300000 	teq	r0, #0	; 0x0
        20df94:	1a00004f 	bne	20e0d8 <TDotPrinter::RepeatPage(void)+0x1f8>
        20df98:	e59410f0 	ldr	r1, [r4, #240]	; fField240
        20df9c:	e1a01821 	mov	r1, r1, lsr #16
        20dfa0:	e59400e4 	ldr	r0, [r4, #228]	; fField228
        20dfa4:	e1a00800 	mov	r0, r0, lsl #16
        20dfa8:	e1a00840 	mov	r0, r0, asr #16
        20dfac:	e0811000 	add	r1, r1, r0
        20dfb0:	e5c410f1 	strb	r1, [r4, #241]	; fField241
        20dfb4:	e1a01441 	mov	r1, r1, asr #8
        20dfb8:	e5c410f0 	strb	r1, [r4, #240]	; fField240
        20dfbc:	e59410f4 	ldr	r1, [r4, #244]	; fField244
        20dfc0:	e1a01821 	mov	r1, r1, lsr #16
        20dfc4:	e0810000 	add	r0, r1, r0
        20dfc8:	e5c400f5 	strb	r0, [r4, #245]	; fField245
        20dfcc:	e1a00440 	mov	r0, r0, asr #8
        20dfd0:	e5c400f4 	strb	r0, [r4, #244]	; fField244
        20dfd4:	e1a00004 	mov	r0, r4
        20dfd8:	eb64cc32 	bl	1b410a8 <TPrinter::$GetScalerInfo(void)>
        20dfdc:	e590000c 	ldr	r0, [r0, #12]
        20dfe0:	e1a00840 	mov	r0, r0, asr #16
        20dfe4:	e59410f4 	ldr	r1, [r4, #244]	; fField244
        20dfe8:	e1500841 	cmp	r0, r1, asr #16
        20dfec:	aa000006 	bge	20e00c <TDotPrinter::RepeatPage(void)+0x12c>
        20dff0:	e1a00004 	mov	r0, r4
        20dff4:	eb64cc2b 	bl	1b410a8 <TPrinter::$GetScalerInfo(void)>
        20dff8:	e590000c 	ldr	r0, [r0, #12]
        20dffc:	e1a00820 	mov	r0, r0, lsr #16
        20e000:	e5c400f5 	strb	r0, [r4, #245]	; fField245
        20e004:	e1a00440 	mov	r0, r0, asr #8
        20e008:	e5c400f4 	strb	r0, [r4, #244]	; fField244
        20e00c:	e59410f0 	ldr	r1, [r4, #240]	; fField240
        20e010:	e1a01841 	mov	r1, r1, asr #16
        20e014:	e59400f4 	ldr	r0, [r4, #244]	; fField244
        20e018:	e1510840 	cmp	r1, r0, asr #16
        20e01c:	ba00002f 	blt	20e0e0 <TDotPrinter::RepeatPage(void)+0x200>
        20e020:	ea00002c 	b	20e0d8 <TDotPrinter::RepeatPage(void)+0x1f8>
        20e024:	e2841f53 	add	r1, r4, #332	; 0x14c
        20e028:	e1a05001 	mov	r5, r1
        20e02c:	e1a00009 	mov	r0, r9
        20e030:	eb64e0bb 	bl	1b46324 <$RotateBits__FP8PixelMapT1>
        20e034:	e2842f55 	add	r2, r4, #340	; 0x154
        20e038:	e1a01005 	mov	r1, r5
        20e03c:	e5940098 	ldr	r0, [r4, #152]	; fField152
        20e040:	eb64cc27 	bl	1b410e4 <TDotPrinterDriver::$ImageBand(PixelMap *, Rect const *)>
        20e044:	e5840010 	str	r0, [r4, #16]	; fField16
        20e048:	e3300000 	teq	r0, #0	; 0x0
        20e04c:	1a000021 	bne	20e0d8 <TDotPrinter::RepeatPage(void)+0x1f8>
        20e050:	e59410f2 	ldr	r1, [r4, #242]	; fField242
        20e054:	e1a01821 	mov	r1, r1, lsr #16
        20e058:	e59400e4 	ldr	r0, [r4, #228]	; fField228
        20e05c:	e1a00800 	mov	r0, r0, lsl #16
        20e060:	e1a00840 	mov	r0, r0, asr #16
        20e064:	e0811000 	add	r1, r1, r0
        20e068:	e5c410f3 	strb	r1, [r4, #243]	; fField243
        20e06c:	e1a01441 	mov	r1, r1, asr #8
        20e070:	e5c410f2 	strb	r1, [r4, #242]	; fField242
        20e074:	e59410f6 	ldr	r1, [r4, #246]	; fField246
        20e078:	e1a01821 	mov	r1, r1, lsr #16
        20e07c:	e0810000 	add	r0, r1, r0
        20e080:	e5c400f7 	strb	r0, [r4, #247]	; fField247
        20e084:	e1a00440 	mov	r0, r0, asr #8
        20e088:	e5c400f6 	strb	r0, [r4, #246]	; fField246
        20e08c:	e1a00004 	mov	r0, r4
        20e090:	eb64cc04 	bl	1b410a8 <TPrinter::$GetScalerInfo(void)>
        20e094:	e590100e 	ldr	r1, [r0, #14]
        20e098:	e1a01841 	mov	r1, r1, asr #16
        20e09c:	e59400f6 	ldr	r0, [r4, #246]	; fField246
        20e0a0:	e1510840 	cmp	r1, r0, asr #16
        20e0a4:	aa000006 	bge	20e0c4 <TDotPrinter::RepeatPage(void)+0x1e4>
        20e0a8:	e1a00004 	mov	r0, r4
        20e0ac:	eb64cbfd 	bl	1b410a8 <TPrinter::$GetScalerInfo(void)>
        20e0b0:	e590000e 	ldr	r0, [r0, #14]
        20e0b4:	e1a00820 	mov	r0, r0, lsr #16
        20e0b8:	e5c400f7 	strb	r0, [r4, #247]	; fField247
        20e0bc:	e1a00440 	mov	r0, r0, asr #8
        20e0c0:	e5c400f6 	strb	r0, [r4, #246]	; fField246
        20e0c4:	e59410f2 	ldr	r1, [r4, #242]	; fField242
        20e0c8:	e1a01841 	mov	r1, r1, asr #16
        20e0cc:	e59400f6 	ldr	r0, [r4, #246]	; fField246
        20e0d0:	e1510840 	cmp	r1, r0, asr #16
        20e0d4:	ba000001 	blt	20e0e0 <TDotPrinter::RepeatPage(void)+0x200>
        20e0d8:	e1a00006 	mov	r0, r6
        20e0dc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        20e0e0:	e24dd008 	sub	sp, sp, #8	; 0x8
        20e0e4:	e28410f0 	add	r1, r4, #240	; 0xf0
        20e0e8:	e8911008 	ldmia	r1, {r3, ip}
        20e0ec:	e88d1008 	stmia	sp, {r3, ip}
        20e0f0:	e2845f5d 	add	r5, r4, #372	; 0x174
        20e0f4:	e5d400a4 	ldrb	r0, [r4, #164]	; fField164
        20e0f8:	e3a0a001 	mov	sl, #1	; 0x1
        20e0fc:	e3300000 	teq	r0, #0	; 0x0
        20e100:	13370000 	teqne	r7, #0	; 0x0
        20e104:	03a08000 	moveq	r8, #0	; 0x0
        20e108:	104a8008 	subne	r8, sl, r8
        20e10c:	e5848104 	str	r8, [r4, #260]	; fField260
        20e110:	eb64e08b 	bl	1b46344 <$PrintPatchpoint(void)>
        20e114:	e3370000 	teq	r7, #0	; 0x0
        20e118:	0a00000e 	beq	20e158 <TDotPrinter::RepeatPage(void)+0x278>
        20e11c:	e0680188 	rsb	r0, r8, r8, lsl #3
        20e120:	e0840100 	add	r0, r4, r0, lsl #2
        20e124:	e28020b0 	add	r2, r0, #176	; 0xb0
        20e128:	e89d5000 	ldmia	sp, {ip, lr}
        20e12c:	e8825000 	stmia	r2, {ip, lr}
        20e130:	e280e0a8 	add	lr, r0, #168	; 0xa8
        20e134:	e1a0000e 	mov	r0, lr
        20e138:	e1a08005 	mov	r8, r5
        20e13c:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        20e140:	e8a8100e 	stmia	r8!, {r1, r2, r3, ip}
        20e144:	e89e100c 	ldmia	lr, {r2, r3, ip}
        20e148:	e888100c 	stmia	r8, {r2, r3, ip}
        20e14c:	e5941110 	ldr	r1, [r4, #272]	; fField272
        20e150:	e5900000 	ldr	r0, [r0]
        20e154:	ea000029 	b	20e200 <TDotPrinter::RepeatPage(void)+0x320>
        20e158:	e59d0000 	ldr	r0, [sp]
        20e15c:	e5c40155 	strb	r0, [r4, #341]	; fField341
        20e160:	e1a00440 	mov	r0, r0, asr #8
        20e164:	e5c40154 	strb	r0, [r4, #340]	; fField340
        20e168:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        20e16c:	e5c40159 	strb	r0, [r4, #345]	; fField345
        20e170:	e1a00440 	mov	r0, r0, asr #8
        20e174:	e5c40158 	strb	r0, [r4, #344]	; fField344
        20e178:	e1a00004 	mov	r0, r4
        20e17c:	eb64cbc9 	bl	1b410a8 <TPrinter::$GetScalerInfo(void)>
        20e180:	e590000e 	ldr	r0, [r0, #14]
        20e184:	e1a00840 	mov	r0, r0, asr #16
        20e188:	e5941158 	ldr	r1, [r4, #344]	; fField344
        20e18c:	e1500841 	cmp	r0, r1, asr #16
        20e190:	aa000006 	bge	20e1b0 <TDotPrinter::RepeatPage(void)+0x2d0>
        20e194:	e1a00004 	mov	r0, r4
        20e198:	eb64cbc2 	bl	1b410a8 <TPrinter::$GetScalerInfo(void)>
        20e19c:	e590000e 	ldr	r0, [r0, #14]
        20e1a0:	e1a00820 	mov	r0, r0, lsr #16
        20e1a4:	e5c40159 	strb	r0, [r4, #345]	; fField345
        20e1a8:	e1a00440 	mov	r0, r0, asr #8
        20e1ac:	e5c40158 	strb	r0, [r4, #344]	; fField344
        20e1b0:	e5d400a4 	ldrb	r0, [r4, #164]	; fField164
        20e1b4:	e3300000 	teq	r0, #0	; 0x0
        20e1b8:	0a000005 	beq	20e1d4 <TDotPrinter::RepeatPage(void)+0x2f4>
        20e1bc:	e5940168 	ldr	r0, [r4, #360]	; fField360
        20e1c0:	e5941114 	ldr	r1, [r4, #276]	; fField276
        20e1c4:	e1310000 	teq	r1, r0
        20e1c8:	059400c4 	ldreq	r0, [r4, #196]	; fField196
        20e1cc:	e5840114 	str	r0, [r4, #276]	; fField276
        20e1d0:	e584014c 	str	r0, [r4, #332]	; fField332
        20e1d4:	e28400b0 	add	r0, r4, #176	; 0xb0
        20e1d8:	e89d1008 	ldmia	sp, {r3, ip}
        20e1dc:	e8801008 	stmia	r0, {r3, ip}
        20e1e0:	e1a0e005 	mov	lr, r5
        20e1e4:	e1a00009 	mov	r0, r9
        20e1e8:	e8b0100e 	ldmia	r0!, {r1, r2, r3, ip}
        20e1ec:	e8ae100e 	stmia	lr!, {r1, r2, r3, ip}
        20e1f0:	e890100c 	ldmia	r0, {r2, r3, ip}
        20e1f4:	e88e100c 	stmia	lr, {r2, r3, ip}
        20e1f8:	e5941110 	ldr	r1, [r4, #272]	; fField272
        20e1fc:	e5990000 	ldr	r0, [r9]
        20e200:	eb674785 	bl	1be001c <$ZeroBytes>
        20e204:	e285001c 	add	r0, r5, #28	; 0x1c
        20e208:	e89d5000 	ldmia	sp, {ip, lr}
        20e20c:	e8805000 	stmia	r0, {ip, lr}
        20e210:	e1a0100d 	mov	r1, sp
        20e214:	e5950028 	ldr	r0, [r5, #40]
        20e218:	eb6515df 	bl	1b5399c <$RectRgn(Region **, Rect *)>
        20e21c:	e1a0100d 	mov	r1, sp
        20e220:	e5950024 	ldr	r0, [r5, #36]	; fField36
        20e224:	eb6515dc 	bl	1b5399c <$RectRgn(Region **, Rect *)>
        20e228:	e1a00005 	mov	r0, r5
        20e22c:	eb67855e 	bl	1bef7ac <$SetPort(GrafPort *)>
        20e230:	e1a05000 	mov	r5, r0
        20e234:	eb6511ba 	bl	1b52924 <$PenNormal(void)>
        20e238:	eb64e041 	bl	1b46344 <$PrintPatchpoint(void)>
        20e23c:	e2841f47 	add	r1, r4, #284	; 0x11c
        20e240:	e89d5000 	ldmia	sp, {ip, lr}
        20e244:	e8815000 	stmia	r1, {ip, lr}
        20e248:	e2840f4e 	add	r0, r4, #312	; 0x138
        20e24c:	e89d5000 	ldmia	sp, {ip, lr}
        20e250:	e8805000 	stmia	r0, {ip, lr}
        20e254:	e3e00000 	mvn	r0, #0	; 0x0
        20e258:	e3370000 	teq	r7, #0	; 0x0
        20e25c:	e5840170 	str	r0, [r4, #368]
        20e260:	0a00001d 	beq	20e2dc <TDotPrinter::RepeatPage(void)+0x3fc>
        20e264:	e59410e8 	ldr	r1, [r4, #232]
        20e268:	e1a01821 	mov	r1, r1, lsr #16
        20e26c:	e59400e0 	ldr	r0, [r4, #224]	; fField224
        20e270:	e1a00800 	mov	r0, r0, lsl #16
        20e274:	e1a00840 	mov	r0, r0, asr #16
        20e278:	e0811000 	add	r1, r1, r0
        20e27c:	e5c410e9 	strb	r1, [r4, #233]
        20e280:	e1a01441 	mov	r1, r1, asr #8
        20e284:	e5c410e8 	strb	r1, [r4, #232]
        20e288:	e59410ec 	ldr	r1, [r4, #236]
        20e28c:	e1a01821 	mov	r1, r1, lsr #16
        20e290:	e0810000 	add	r0, r1, r0
        20e294:	e5c400ed 	strb	r0, [r4, #237]
        20e298:	e1a00440 	mov	r0, r0, asr #8
        20e29c:	e5c400ec 	strb	r0, [r4, #236]
        20e2a0:	e1a00004 	mov	r0, r4
        20e2a4:	eb64cb7f 	bl	1b410a8 <TPrinter::$GetScalerInfo(void)>
        20e2a8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        20e2ac:	e1a00840 	mov	r0, r0, asr #16
        20e2b0:	e59410ec 	ldr	r1, [r4, #236]
        20e2b4:	e1500841 	cmp	r0, r1, asr #16
        20e2b8:	aa000024 	bge	20e350 <TDotPrinter::RepeatPage(void)+0x470>
        20e2bc:	e1a00004 	mov	r0, r4
        20e2c0:	eb64cb78 	bl	1b410a8 <TPrinter::$GetScalerInfo(void)>
        20e2c4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        20e2c8:	e1a00820 	mov	r0, r0, lsr #16
        20e2cc:	e5c400ed 	strb	r0, [r4, #237]
        20e2d0:	e1a00440 	mov	r0, r0, asr #8
        20e2d4:	e5c400ec 	strb	r0, [r4, #236]
        20e2d8:	ea00001c 	b	20e350 <TDotPrinter::RepeatPage(void)+0x470>
        20e2dc:	e59410ea 	ldr	r1, [r4, #234]
        20e2e0:	e1a01821 	mov	r1, r1, lsr #16
        20e2e4:	e59400e0 	ldr	r0, [r4, #224]	; fField224
        20e2e8:	e1a00800 	mov	r0, r0, lsl #16
        20e2ec:	e1a00840 	mov	r0, r0, asr #16
        20e2f0:	e0811000 	add	r1, r1, r0
        20e2f4:	e5c410eb 	strb	r1, [r4, #235]
        20e2f8:	e1a01441 	mov	r1, r1, asr #8
        20e2fc:	e5c410ea 	strb	r1, [r4, #234]
        20e300:	e59410ee 	ldr	r1, [r4, #238]
        20e304:	e1a01821 	mov	r1, r1, lsr #16
        20e308:	e0810000 	add	r0, r1, r0
        20e30c:	e5c400ef 	strb	r0, [r4, #239]
        20e310:	e1a00440 	mov	r0, r0, asr #8
        20e314:	e5c400ee 	strb	r0, [r4, #238]
        20e318:	e1a00004 	mov	r0, r4
        20e31c:	eb64cb61 	bl	1b410a8 <TPrinter::$GetScalerInfo(void)>
        20e320:	e5901006 	ldr	r1, [r0, #6]
        20e324:	e1a01841 	mov	r1, r1, asr #16
        20e328:	e59400ee 	ldr	r0, [r4, #238]
        20e32c:	e1510840 	cmp	r1, r0, asr #16
        20e330:	aa000006 	bge	20e350 <TDotPrinter::RepeatPage(void)+0x470>
        20e334:	e1a00004 	mov	r0, r4
        20e338:	eb64cb5a 	bl	1b410a8 <TPrinter::$GetScalerInfo(void)>
        20e33c:	e5900006 	ldr	r0, [r0, #6]
        20e340:	e1a00820 	mov	r0, r0, lsr #16
        20e344:	e5c400ef 	strb	r0, [r4, #239]
        20e348:	e1a00440 	mov	r0, r0, asr #8
        20e34c:	e5c400ee 	strb	r0, [r4, #238]
        20e350:	e28400e8 	add	r0, r4, #232	; 0xe8
        20e354:	e8905000 	ldmia	r0, {ip, lr}
        20e358:	e88d5000 	stmia	sp, {ip, lr}
        20e35c:	e1a00004 	mov	r0, r4
        20e360:	eb64cb4e 	bl	1b410a0 <TPrinter::$GetPort(void)>
        20e364:	e1a07000 	mov	r7, r0
        20e368:	eb67850f 	bl	1bef7ac <$SetPort(GrafPort *)>
        20e36c:	e3a01000 	mov	r1, #0	; 0x0
        20e370:	e3a00000 	mov	r0, #0	; 0x0
        20e374:	eb65159e 	bl	1b539f4 <$SetOrigin__FlT1>
        20e378:	e1a0100d 	mov	r1, sp
        20e37c:	e5b70024 	ldr	r0, [r7, #36]!	; fField36
        20e380:	eb651585 	bl	1b5399c <$RectRgn(Region **, Rect *)>
        20e384:	e1a0100d 	mov	r1, sp
        20e388:	e5940108 	ldr	r0, [r4, #264]	; fField264
        20e38c:	eb651582 	bl	1b5399c <$RectRgn(Region **, Rect *)>
        20e390:	e1a0100d 	mov	r1, sp
        20e394:	e594010c 	ldr	r0, [r4, #268]	; fField268
        20e398:	eb65157f 	bl	1b5399c <$RectRgn(Region **, Rect *)>
        20e39c:	eb651160 	bl	1b52924 <$PenNormal(void)>
        20e3a0:	e58460f8 	str	r6, [r4, #248]
        20e3a4:	e1a00005 	mov	r0, r5
        20e3a8:	e5a460fc 	str	r6, [r4, #252]!
        20e3ac:	eb6784fe 	bl	1bef7ac <$SetPort(GrafPort *)>
        20e3b0:	e1a0000a 	mov	r0, sl
        20e3b4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TDotPrinter::ClosePage(void)
 * Address: 0020e3b8
 */
TDotPrinter::ClosePage(void) {
    /*
        20e3b8:	e1a0c00d 	mov	ip, sp
        20e3bc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        20e3c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        20e3c4:	e1a04000 	mov	r4, r0
        20e3c8:	e5900098 	ldr	r0, [r0, #152]	; fField152
        20e3cc:	eb64c2e9 	bl	1b3ef78 <TDotPrinterDriver::$ClosePage(void)>
        20e3d0:	e5840010 	str	r0, [r4, #16]	; fField16
        20e3d4:	e1a00004 	mov	r0, r4
        20e3d8:	eb64c2d1 	bl	1b3ef24 <TPrinter::$CheckUserAbort(void)>
        20e3dc:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
        20e3e0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TDotPrinter::CancelJob(unsigned char)
 * Address: 0020e3e4
 */
TDotPrinter::CancelJob(unsigned char) {
    /*
        20e3e4:	e20110ff 	and	r1, r1, #255	; 0xff
        20e3e8:	e5900098 	ldr	r0, [r0, #152]	; fField152
        20e3ec:	ea64c2c5 	b	1b3ef08 <TDotPrinterDriver::$CancelJob(unsigned char)>
    */
}

/**
 * Symbol: TDotPrinter::IsProblemResolved(void)
 * Address: 0020e3f0
 */
TDotPrinter::IsProblemResolved(void) {
    /*
        20e3f0:	e5900098 	ldr	r0, [r0, #152]	; fField152
        20e3f4:	ea64cf47 	b	1b42118 <TDotPrinterDriver::$IsProblemResolved(void)>
        20e3f8:	e1a0c00d 	mov	ip, sp
        20e3fc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        20e400:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        20e404:	e24cb014 	sub	fp, ip, #20	; 0x14
        20e408:	e24dd014 	sub	sp, sp, #20	; 0x14
        20e40c:	e3e00000 	mvn	r0, #0	; 0x0
        20e410:	e58d0008 	str	r0, [sp, #8]
        20e414:	e28b2008 	add	r2, fp, #8	; 0x8
        20e418:	e8920005 	ldmia	r2, {r0, r2}
        20e41c:	e0420000 	sub	r0, r2, r0
        20e420:	e99b0006 	ldmib	fp, {r1, r2}
        20e424:	e0812102 	add	r2, r1, r2, lsl #2
        20e428:	e58d2010 	str	r2, [sp, #16]	; fField16
        20e42c:	e59b200c 	ldr	r2, [fp, #12]
        20e430:	e0811102 	add	r1, r1, r2, lsl #2
        20e434:	e3500001 	cmp	r0, #1	; 0x1
        20e438:	e58d100c 	str	r1, [sp, #12]
        20e43c:	da0000e3 	ble	20e7d0 <TDotPrinter::IsProblemResolved(void)+0x3e0>
        20e440:	e24dd03c 	sub	sp, sp, #60	; 0x3c
        20e444:	e59d004c 	ldr	r0, [sp, #76]
        20e448:	e28d1034 	add	r1, sp, #52	; 0x34
        20e44c:	eb657466 	bl	1b6b5ec <$GetPoint(SamplePt *, FPoint *)>
        20e450:	e59d0048 	ldr	r0, [sp, #72]
        20e454:	e28d102c 	add	r1, sp, #44	; 0x2c
        20e458:	eb657463 	bl	1b6b5ec <$GetPoint(SamplePt *, FPoint *)>
        20e45c:	e59d0030 	ldr	r0, [sp, #48]
        20e460:	e59d1038 	ldr	r1, [sp, #56]
        20e464:	e0401001 	sub	r1, r0, r1
        20e468:	e59d0034 	ldr	r0, [sp, #52]
        20e46c:	e59d202c 	ldr	r2, [sp, #44]
        20e470:	e0420000 	sub	r0, r2, r0
        20e474:	eb6542aa 	bl	1b5ef24 <$FixedLength>
        20e478:	e1a01000 	mov	r1, r0
        20e47c:	e3500801 	cmp	r0, #65536	; 0x10000
        20e480:	b3a01801 	movlt	r1, #65536	; 0x10000
        20e484:	e59d0038 	ldr	r0, [sp, #56]
        20e488:	e59d2030 	ldr	r2, [sp, #48]
        20e48c:	e0404002 	sub	r4, r0, r2
        20e490:	e3a0000c 	mov	r0, #12	; 0xc
        20e494:	eb669129 	bl	1bb2940 <$__rt_sdiv>
        20e498:	e1a05000 	mov	r5, r0
        20e49c:	e1a01000 	mov	r1, r0
        20e4a0:	e1a00004 	mov	r0, r4
        20e4a4:	eb674b05 	bl	1be10c0 <$FixedDivide>
        20e4a8:	e1a04000 	mov	r4, r0
        20e4ac:	e1a01005 	mov	r1, r5
        20e4b0:	e59d0034 	ldr	r0, [sp, #52]
        20e4b4:	e59d202c 	ldr	r2, [sp, #44]
        20e4b8:	e0420000 	sub	r0, r2, r0
        20e4bc:	eb674aff 	bl	1be10c0 <$FixedDivide>
        20e4c0:	e1a05000 	mov	r5, r0
        20e4c4:	e3540000 	cmp	r4, #0	; 0x0
        20e4c8:	a1a00004 	movge	r0, r4
        20e4cc:	b2640000 	rsblt	r0, r4, #0	; 0x0
        20e4d0:	e3500801 	cmp	r0, #65536	; 0x10000
        20e4d4:	aa000004 	bge	20e4ec <TDotPrinter::IsProblemResolved(void)+0xfc>
        20e4d8:	e3550000 	cmp	r5, #0	; 0x0
        20e4dc:	a1a00005 	movge	r0, r5
        20e4e0:	b2650000 	rsblt	r0, r5, #0	; 0x0
        20e4e4:	e3500801 	cmp	r0, #65536	; 0x10000
        20e4e8:	b3a04801 	movlt	r4, #65536	; 0x10000
        20e4ec:	e1a01005 	mov	r1, r5
        20e4f0:	e1a00004 	mov	r0, r4
        20e4f4:	eb65428a 	bl	1b5ef24 <$FixedLength>
        20e4f8:	e58d0020 	str	r0, [sp, #32]	; fField32
        20e4fc:	e1a00004 	mov	r0, r4
        20e500:	e59d1034 	ldr	r1, [sp, #52]
        20e504:	eb674aee 	bl	1be10c4 <$FixedMultiply>
        20e508:	e1a06000 	mov	r6, r0
        20e50c:	e1a00005 	mov	r0, r5
        20e510:	e59d1038 	ldr	r1, [sp, #56]
        20e514:	eb674aea 	bl	1be10c4 <$FixedMultiply>
        20e518:	e0861000 	add	r1, r6, r0
        20e51c:	e58d1028 	str	r1, [sp, #40]
        20e520:	e1a00005 	mov	r0, r5
        20e524:	e59d1034 	ldr	r1, [sp, #52]
        20e528:	eb674ae5 	bl	1be10c4 <$FixedMultiply>
        20e52c:	e1a06000 	mov	r6, r0
        20e530:	e1a00004 	mov	r0, r4
        20e534:	e59d1038 	ldr	r1, [sp, #56]
        20e538:	eb674ae1 	bl	1be10c4 <$FixedMultiply>
        20e53c:	e0461000 	sub	r1, r6, r0
        20e540:	e3a08000 	mov	r8, #0	; 0x0
        20e544:	e1a0a008 	mov	sl, r8
        20e548:	e3a07000 	mov	r7, #0	; 0x0
        20e54c:	e1a09007 	mov	r9, r7
        20e550:	e58d1024 	str	r1, [sp, #36]	; fField36
        20e554:	e3a01000 	mov	r1, #0	; 0x0
        20e558:	e58d1010 	str	r1, [sp, #16]	; fField16
        20e55c:	e58d7018 	str	r7, [sp, #24]
        20e560:	e58d801c 	str	r8, [sp, #28]
        20e564:	e58d1014 	str	r1, [sp, #20]	; fField20
        20e568:	e59b1008 	ldr	r1, [fp, #8]
        20e56c:	e58d1000 	str	r1, [sp]
        20e570:	e58d1004 	str	r1, [sp, #4]	; fField4
        20e574:	e58d1008 	str	r1, [sp, #8]
        20e578:	e58d100c 	str	r1, [sp, #12]
        20e57c:	e59b1008 	ldr	r1, [fp, #8]
        20e580:	e2816001 	add	r6, r1, #1	; 0x1
        20e584:	e59b200c 	ldr	r2, [fp, #12]
        20e588:	e1560002 	cmp	r6, r2
        20e58c:	ca00005b 	bgt	20e700 <TDotPrinter::IsProblemResolved(void)+0x310>
        20e590:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        20e594:	e0800106 	add	r0, r0, r6, lsl #2
        20e598:	e28d103c 	add	r1, sp, #60	; 0x3c
        20e59c:	eb657412 	bl	1b6b5ec <$GetPoint(SamplePt *, FPoint *)>
        20e5a0:	e1a00004 	mov	r0, r4
        20e5a4:	e59d103c 	ldr	r1, [sp, #60]
        20e5a8:	eb674ac5 	bl	1be10c4 <$FixedMultiply>
        20e5ac:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        20e5b0:	e1a00005 	mov	r0, r5
        20e5b4:	e59d1044 	ldr	r1, [sp, #68]
        20e5b8:	eb674ac1 	bl	1be10c4 <$FixedMultiply>
        20e5bc:	e49d1004 	ldr	r1, [sp], #4	; fField4
        20e5c0:	e0810000 	add	r0, r1, r0
        20e5c4:	e59d1028 	ldr	r1, [sp, #40]
        20e5c8:	e0400001 	sub	r0, r0, r1
        20e5cc:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        20e5d0:	e3310000 	teq	r1, #0	; 0x0
        20e5d4:	12600000 	rsbne	r0, r0, #0	; 0x0
        20e5d8:	e1500008 	cmp	r0, r8
        20e5dc:	da000004 	ble	20e5f4 <TDotPrinter::IsProblemResolved(void)+0x204>
        20e5e0:	e0401008 	sub	r1, r0, r8
        20e5e4:	e081a00a 	add	sl, r1, sl
        20e5e8:	e1a08000 	mov	r8, r0
        20e5ec:	e58d600c 	str	r6, [sp, #12]
        20e5f0:	ea000014 	b	20e648 <TDotPrinter::IsProblemResolved(void)+0x258>
        20e5f4:	e150000a 	cmp	r0, sl
        20e5f8:	aa000012 	bge	20e648 <TDotPrinter::IsProblemResolved(void)+0x258>
        20e5fc:	e59d100c 	ldr	r1, [sp, #12]
        20e600:	e58d1004 	str	r1, [sp, #4]	; fField4
        20e604:	e59d101c 	ldr	r1, [sp, #28]
        20e608:	e1500001 	cmp	r0, r1
        20e60c:	aa00000c 	bge	20e644 <TDotPrinter::IsProblemResolved(void)+0x254>
        20e610:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        20e614:	e3310000 	teq	r1, #0	; 0x0
        20e618:	13a01000 	movne	r1, #0	; 0x0
        20e61c:	03a01001 	moveq	r1, #1	; 0x1
        20e620:	e58d1014 	str	r1, [sp, #20]	; fField20
        20e624:	e59d101c 	ldr	r1, [sp, #28]
        20e628:	e0411008 	sub	r1, r1, r8
        20e62c:	e041a000 	sub	sl, r1, r0
        20e630:	e2681000 	rsb	r1, r8, #0	; 0x0
        20e634:	e2608000 	rsb	r8, r0, #0	; 0x0
        20e638:	e58d101c 	str	r1, [sp, #28]
        20e63c:	e58d600c 	str	r6, [sp, #12]
        20e640:	ea000000 	b	20e648 <TDotPrinter::IsProblemResolved(void)+0x258>
        20e644:	e1a0a000 	mov	sl, r0
        20e648:	e1a00005 	mov	r0, r5
        20e64c:	e59d103c 	ldr	r1, [sp, #60]
        20e650:	eb674a9b 	bl	1be10c4 <$FixedMultiply>
        20e654:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        20e658:	e1a00004 	mov	r0, r4
        20e65c:	e59d1044 	ldr	r1, [sp, #68]
        20e660:	eb674a97 	bl	1be10c4 <$FixedMultiply>
        20e664:	e49d1004 	ldr	r1, [sp], #4	; fField4
        20e668:	e0410000 	sub	r0, r1, r0
        20e66c:	e59d1024 	ldr	r1, [sp, #36]	; fField36
        20e670:	e0400001 	sub	r0, r0, r1
        20e674:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        20e678:	e3310000 	teq	r1, #0	; 0x0
        20e67c:	12600000 	rsbne	r0, r0, #0	; 0x0
        20e680:	e1500007 	cmp	r0, r7
        20e684:	da000004 	ble	20e69c <TDotPrinter::IsProblemResolved(void)+0x2ac>
        20e688:	e0401007 	sub	r1, r0, r7
        20e68c:	e0819009 	add	r9, r1, r9
        20e690:	e1a07000 	mov	r7, r0
        20e694:	e58d6008 	str	r6, [sp, #8]
        20e698:	ea000014 	b	20e6f0 <TDotPrinter::IsProblemResolved(void)+0x300>
        20e69c:	e1500009 	cmp	r0, r9
        20e6a0:	aa000012 	bge	20e6f0 <TDotPrinter::IsProblemResolved(void)+0x300>
        20e6a4:	e59d1008 	ldr	r1, [sp, #8]
        20e6a8:	e58d1000 	str	r1, [sp]
        20e6ac:	e59d1018 	ldr	r1, [sp, #24]
        20e6b0:	e1500001 	cmp	r0, r1
        20e6b4:	aa00000c 	bge	20e6ec <TDotPrinter::IsProblemResolved(void)+0x2fc>
        20e6b8:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        20e6bc:	e3310000 	teq	r1, #0	; 0x0
        20e6c0:	13a01000 	movne	r1, #0	; 0x0
        20e6c4:	03a01001 	moveq	r1, #1	; 0x1
        20e6c8:	e58d1010 	str	r1, [sp, #16]	; fField16
        20e6cc:	e59d1018 	ldr	r1, [sp, #24]
        20e6d0:	e0411007 	sub	r1, r1, r7
        20e6d4:	e0419000 	sub	r9, r1, r0
        20e6d8:	e2671000 	rsb	r1, r7, #0	; 0x0
        20e6dc:	e2607000 	rsb	r7, r0, #0	; 0x0
        20e6e0:	e58d1018 	str	r1, [sp, #24]
        20e6e4:	e58d6008 	str	r6, [sp, #8]
        20e6e8:	ea000000 	b	20e6f0 <TDotPrinter::IsProblemResolved(void)+0x300>
        20e6ec:	e1a09000 	mov	r9, r0
        20e6f0:	e2866001 	add	r6, r6, #1	; 0x1
        20e6f4:	e59b200c 	ldr	r2, [fp, #12]
        20e6f8:	e1560002 	cmp	r6, r2
        20e6fc:	daffffa3 	ble	20e590 <TDotPrinter::IsProblemResolved(void)+0x1a0>
        20e700:	e59d1020 	ldr	r1, [sp, #32]	; fField32
        20e704:	e59b0010 	ldr	r0, [fp, #16]	; fField16
        20e708:	eb674a6d 	bl	1be10c4 <$FixedMultiply>
        20e70c:	e048400a 	sub	r4, r8, sl
        20e710:	e1500004 	cmp	r0, r4
        20e714:	a59b1008 	ldrge	r1, [fp, #8]
        20e718:	a58d1004 	strge	r1, [sp, #4]	; fField4
        20e71c:	e59d1020 	ldr	r1, [sp, #32]	; fField32
        20e720:	e59b0010 	ldr	r0, [fp, #16]	; fField16
        20e724:	eb674a66 	bl	1be10c4 <$FixedMultiply>
        20e728:	e0471009 	sub	r1, r7, r9
        20e72c:	e1500001 	cmp	r0, r1
        20e730:	a59b0008 	ldrge	r0, [fp, #8]
        20e734:	a58d0000 	strge	r0, [sp]
        20e738:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        20e73c:	e59b2008 	ldr	r2, [fp, #8]
        20e740:	e1500002 	cmp	r0, r2
        20e744:	da000007 	ble	20e768 <TDotPrinter::IsProblemResolved(void)+0x378>
        20e748:	e59d0000 	ldr	r0, [sp]
        20e74c:	e59b2008 	ldr	r2, [fp, #8]
        20e750:	e1300002 	teq	r0, r2
        20e754:	0a000001 	beq	20e760 <TDotPrinter::IsProblemResolved(void)+0x370>
        20e758:	e1540001 	cmp	r4, r1
        20e75c:	da000001 	ble	20e768 <TDotPrinter::IsProblemResolved(void)+0x378>
        20e760:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        20e764:	ea000004 	b	20e77c <TDotPrinter::IsProblemResolved(void)+0x38c>
        20e768:	e59d0000 	ldr	r0, [sp]
        20e76c:	e59b1008 	ldr	r1, [fp, #8]
        20e770:	e1500001 	cmp	r0, r1
        20e774:	da000001 	ble	20e780 <TDotPrinter::IsProblemResolved(void)+0x390>
        20e778:	e59d0000 	ldr	r0, [sp]
        20e77c:	e58d0044 	str	r0, [sp, #68]
        20e780:	e28dd03c 	add	sp, sp, #60	; 0x3c
        20e784:	e59d0008 	ldr	r0, [sp, #8]
        20e788:	e3700001 	cmn	r0, #1	; 0x1
        20e78c:	0a00000f 	beq	20e7d0 <TDotPrinter::IsProblemResolved(void)+0x3e0>
        20e790:	e59b3014 	ldr	r3, [fp, #20]	; fField20
        20e794:	e92d0008 	stmdb	sp!, {r3}
        20e798:	e59b3010 	ldr	r3, [fp, #16]	; fField16
        20e79c:	e59d200c 	ldr	r2, [sp, #12]
        20e7a0:	e99b0003 	ldmib	fp, {r0, r1}
        20e7a4:	ebffff13 	bl	20e3f8 <TDotPrinter::IsProblemResolved(void)+0x8>
        20e7a8:	e28dd004 	add	sp, sp, #4	; 0x4
        20e7ac:	e59b3014 	ldr	r3, [fp, #20]	; fField20
        20e7b0:	e92d0008 	stmdb	sp!, {r3}
        20e7b4:	e28b300c 	add	r3, fp, #12	; 0xc
        20e7b8:	e893000c 	ldmia	r3, {r2, r3}
        20e7bc:	e59d100c 	ldr	r1, [sp, #12]
        20e7c0:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        20e7c4:	ebffff0b 	bl	20e3f8 <TDotPrinter::IsProblemResolved(void)+0x8>
        20e7c8:	e28dd004 	add	sp, sp, #4	; 0x4
        20e7cc:	ea000019 	b	20e838 <TDotPrinter::IsProblemResolved(void)+0x448>
        20e7d0:	e3a01002 	mov	r1, #2	; 0x2
        20e7d4:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        20e7d8:	eb657fc9 	bl	1b6e704 <$TestFlag(SamplePt *, unsigned long)>
        20e7dc:	e3300000 	teq	r0, #0	; 0x0
        20e7e0:	1a000007 	bne	20e804 <TDotPrinter::IsProblemResolved(void)+0x414>
        20e7e4:	e3a01002 	mov	r1, #2	; 0x2
        20e7e8:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        20e7ec:	eb657bb6 	bl	1b6d6cc <$SetFlag(SamplePt *, unsigned long)>
        20e7f0:	e59b3014 	ldr	r3, [fp, #20]	; fField20
        20e7f4:	e5930000 	ldr	r0, [r3]
        20e7f8:	e2800001 	add	r0, r0, #1	; 0x1
        20e7fc:	e59b3014 	ldr	r3, [fp, #20]	; fField20
        20e800:	e5830000 	str	r0, [r3]
        20e804:	e3a01002 	mov	r1, #2	; 0x2
        20e808:	e59d000c 	ldr	r0, [sp, #12]
        20e80c:	eb657fbc 	bl	1b6e704 <$TestFlag(SamplePt *, unsigned long)>
        20e810:	e3300000 	teq	r0, #0	; 0x0
        20e814:	1a000007 	bne	20e838 <TDotPrinter::IsProblemResolved(void)+0x448>
        20e818:	e3a01002 	mov	r1, #2	; 0x2
        20e81c:	e59d000c 	ldr	r0, [sp, #12]
        20e820:	eb657ba9 	bl	1b6d6cc <$SetFlag(SamplePt *, unsigned long)>
        20e824:	e59b3014 	ldr	r3, [fp, #20]	; fField20
        20e828:	e5930000 	ldr	r0, [r3]
        20e82c:	e2800001 	add	r0, r0, #1	; 0x1
        20e830:	e59b3014 	ldr	r3, [fp, #20]	; fField20
        20e834:	e5830000 	str	r0, [r3]
        20e838:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: ClassInfo__11TDotPrinterSFv
 * Address: 00387ffc
 */
void TDotPrinter::ClassInfo() {
    /*
        387ffc:	e24f0044 	sub	r0, pc, #68	; 0x44
        388000:	e1a0f00e 	mov	pc, lr
        388004:	e3a00000 	mov	r0, #0	; 0x0
        388008:	e1a0f00e 	mov	pc, lr
        38800c:	54446f74 	strplb	r6, [r4], -#3956	; fField3956
        388010:	5072696e 	rsbpls	r6, r2, lr, ror #18
        388014:	74657200 	strvcbt	r7, [r5], -#512
        388018:	54507269 	ldrplb	r7, [r0], -#617	; fField617
        38801c:	6e746572 	mrcvs	5, 3, r6, cr4, cr2, {3}
        388028:	eafffff3 	b	387ffc <ClassInfo__11TDotPrinterSFv>
        38802c:	ea5edfd8 	b	1b3ff94 <TDotPrinter::$Constructor(char *)>
        388030:	ea5edfe4 	b	1b3ffc8 <TDotPrinter::$Delete(void)>
        388034:	ea5ee843 	b	1b42148 <TDotPrinter::$Open(RefVar const &)>
        388038:	ea5edbc3 	b	1b3ef4c <TDotPrinter::$Close(void)>
        38803c:	ea5ee849 	b	1b42168 <TDotPrinter::$OpenPage(void)>
        388040:	ea5edbc9 	b	1b3ef6c <TDotPrinter::$ClosePage(void)>
        388044:	ea5eec6b 	b	1b431f8 <TDotPrinter::$RepeatPage(void)>
        388048:	ea5ed7ab 	b	1b3defc <TDotPrinter::$CancelJob(unsigned char)>
        38804c:	ea5ee82e 	b	1b4210c <TDotPrinter::$IsProblemResolved(void)>
        388050:	ea5ef8b8 	b	1b46338 <TDotPrinter::$SetPortraitOrientation(unsigned char)>
        388054:	ea5ef8ad 	b	1b46310 <TDotPrinter::$FaxEndPage(long)>
        388058:	e1a0000f 	mov	r0, pc
        38805c:	e1a0f00e 	mov	pc, lr
        388060:	54446f74 	strplb	r6, [r4], -#3956	; fField3956
        388064:	5072696e 	rsbpls	r6, r2, lr, ror #18
        388068:	74657244 	strvcbt	r7, [r5], -#580
        38806c:	72697665 	rsbvc	r7, r9, #105906176	; 0x6500000
        388070:	72000000 	andvc	r0, r0, #0	; 0x0
    */
}

