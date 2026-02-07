#include "include/TLZCallbackCompressor.h"

/**
 * Symbol: Sizeof__21TLZCallbackCompressorSFv
 * Address: 000ff200
 */
void TLZCallbackCompressor::Sizeof() {
    /*
         ff200:	e3a00028 	mov	r0, #40	; 0x28
         ff204:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLZCallbackCompressor::New(void)
 * Address: 000ff208
 */
TLZCallbackCompressor::New(void) {
    /*
         ff208:	e3a01000 	mov	r1, #0	; 0x0
         ff20c:	e580101c 	str	r1, [r0, #28]	; fField28
         ff210:	e5801020 	str	r1, [r0, #32]	; fField32
         ff214:	e5801024 	str	r1, [r0, #36]	; fField36
         ff218:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLZCallbackCompressor::Delete(void)
 * Address: 000ff21c
 */
TLZCallbackCompressor::Delete(void) {
    /*
         ff21c:	e1a0c00d 	mov	ip, sp
         ff220:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         ff224:	e24cb004 	sub	fp, ip, #4	; 0x4
         ff228:	e1a04000 	mov	r4, r0
         ff22c:	e590001c 	ldr	r0, [r0, #28]	; fField28
         ff230:	eb6b392a 	bl	1bcd6e0 <$__dl(void *)>
         ff234:	e5940020 	ldr	r0, [r4, #32]	; fField32
         ff238:	eb6b3928 	bl	1bcd6e0 <$__dl(void *)>
         ff23c:	e5b40024 	ldr	r0, [r4, #36]!	; fField36
         ff240:	e3300000 	teq	r0, #0	; 0x0
         ff244:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         ff248:	1a0a28ce 	bne	389588 <TCompressor::Delete(void)>
         ff24c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TLZCallbackCompressor::Init(void *)
 * Address: 000ff250
 */
TLZCallbackCompressor::Init(void *) {
    /*
         ff250:	e1a0c00d 	mov	ip, sp
         ff254:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         ff258:	e24cb004 	sub	fp, ip, #4	; 0x4
         ff25c:	e1a04000 	mov	r4, r0
         ff260:	e3a05000 	mov	r5, #0	; 0x0
         ff264:	e28f1f13 	add	r1, pc, #76	; 0x4c
         ff268:	e28f0f16 	add	r0, pc, #88	; 0x58
         ff26c:	eb6b6246 	bl	1bd7b8c <$NewByName__FPCcT1>
         ff270:	e3a060e9 	mov	r6, #233	; 0xe9
         ff274:	e2466b0a 	sub	r6, r6, #10240	; 0x2800
         ff278:	e5840024 	str	r0, [r4, #36]	; fField36
         ff27c:	e3300000 	teq	r0, #0	; 0x0
         ff280:	0a00000a 	beq	ff2b0 <TLZCallbackCompressor::Init(void *)+0x60>
         ff284:	e3a00b01 	mov	r0, #1024	; 0x400
         ff288:	eb6b3d2a 	bl	1bce738 <$__nw(unsigned int)>
         ff28c:	e584001c 	str	r0, [r4, #28]	; fField28
         ff290:	e3a00f77 	mov	r0, #476	; 0x1dc
         ff294:	e2800b01 	add	r0, r0, #1024	; 0x400
         ff298:	eb6b3d26 	bl	1bce738 <$__nw(unsigned int)>
         ff29c:	e5840020 	str	r0, [r4, #32]	; fField32
         ff2a0:	e594101c 	ldr	r1, [r4, #28]	; fField28
         ff2a4:	e3310000 	teq	r1, #0	; 0x0
         ff2a8:	13300000 	teqne	r0, #0	; 0x0
         ff2ac:	1a000008 	bne	ff2d4 <TLZCallbackCompressor::Init(void *)+0x84>
         ff2b0:	e1a05006 	mov	r5, r6
         ff2b4:	ea000008 	b	ff2dc <TLZCallbackCompressor::Init(void *)+0x8c>
         ff2b8:	544c5a43 	strplb	r5, [ip], -#2627
         ff2bc:	6f6d7072 	swivs	0x006d7072
         ff2c0:	6573736f 	ldrvsb	r7, [r3, -#879]!
         ff2c4:	72000000 	andvc	r0, r0, #0	; 0x0
         ff2c8:	54436f6d 	strplb	r6, [r3], -#3949
         ff2cc:	70726573 	rsbvcs	r6, r2, r3, ror r5
         ff2d0:	736f7200 	cmnvc	pc, #0	; 0x0
         ff2d4:	e1a00004 	mov	r0, r4
         ff2d8:	eb6a97ee 	bl	1ba5298 <TLZCallbackCompressor::$Reset(void)>
         ff2dc:	e1a00005 	mov	r0, r5
         ff2e0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TLZCallbackCompressor::Reset(void)
 * Address: 000ff314
 */
TLZCallbackCompressor::Reset(void) {
    /*
         ff314:	e3a01000 	mov	r1, #0	; 0x0
         ff318:	e5a01018 	str	r1, [r0, #24]!	; fField24
         ff31c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLZCallbackCompressor::WriteChunk(void *, long)
 * Address: 000ff320
 */
TLZCallbackCompressor::WriteChunk(void *, long) {
    /*
         ff320:	e1a0c00d 	mov	ip, sp
         ff324:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         ff328:	e24cb004 	sub	fp, ip, #4	; 0x4
         ff32c:	e1a04000 	mov	r4, r0
         ff330:	e1a06001 	mov	r6, r1
         ff334:	e1b05002 	movs	r5, r2
         ff338:	e24dd004 	sub	sp, sp, #4	; 0x4
         ff33c:	e3a08000 	mov	r8, #0	; 0x0
         ff340:	e3a09000 	mov	r9, #0	; 0x0
         ff344:	0a000029 	beq	ff3f0 <TLZCallbackCompressor::WriteChunk(void *, long)+0xd0>
         ff348:	e3a0ab01 	mov	sl, #1024	; 0x400
         ff34c:	e5940018 	ldr	r0, [r4, #24]	; fField24
         ff350:	e04a1000 	sub	r1, sl, r0
         ff354:	e1550001 	cmp	r5, r1
         ff358:	b1a01005 	movlt	r1, r5
         ff35c:	e1a07001 	mov	r7, r1
         ff360:	e594101c 	ldr	r1, [r4, #28]	; fField28
         ff364:	e0811000 	add	r1, r1, r0
         ff368:	e0860009 	add	r0, r6, r9
         ff36c:	e1a02007 	mov	r2, r7
         ff370:	eb6b7ef7 	bl	1bdef54 <$BlockMove>
         ff374:	e5940018 	ldr	r0, [r4, #24]	; fField24
         ff378:	e0800007 	add	r0, r0, r7
         ff37c:	e5840018 	str	r0, [r4, #24]	; fField24
         ff380:	e3300b01 	teq	r0, #1024	; 0x400
         ff384:	1a000016 	bne	ff3e4 <TLZCallbackCompressor::WriteChunk(void *, long)+0xc4>
         ff388:	e3a03b01 	mov	r3, #1024	; 0x400
         ff38c:	e594201c 	ldr	r2, [r4, #28]	; fField28
         ff390:	e92d000c 	stmdb	sp!, {r2, r3}
         ff394:	e28d1008 	add	r1, sp, #8	; 0x8
         ff398:	e3a03f77 	mov	r3, #476	; 0x1dc
         ff39c:	e2833b01 	add	r3, r3, #1024	; 0x400
         ff3a0:	e5940024 	ldr	r0, [r4, #36]	; fField36
         ff3a4:	e5942020 	ldr	r2, [r4, #32]	; fField32
         ff3a8:	eb0a2880 	bl	3895b0 <TCompressor::Compress(unsigned long *, void *, unsigned long, void *, unsigned long)>
         ff3ac:	e28dd008 	add	sp, sp, #8	; 0x8
         ff3b0:	e1b08000 	movs	r8, r0
         ff3b4:	1a000006 	bne	ff3d4 <TLZCallbackCompressor::WriteChunk(void *, long)+0xb4>
         ff3b8:	e5941020 	ldr	r1, [r4, #32]	; fField32
         ff3bc:	e3a03000 	mov	r3, #0	; 0x0
         ff3c0:	e59d2000 	ldr	r2, [sp]
         ff3c4:	e5940014 	ldr	r0, [r4, #20]	; fField20
         ff3c8:	e1a0e00f 	mov	lr, pc
         ff3cc:	e594f010 	ldr	pc, [r4, #16]	; fField16
         ff3d0:	e1a08000 	mov	r8, r0
         ff3d4:	e3380000 	teq	r8, #0	; 0x0
         ff3d8:	1a000004 	bne	ff3f0 <TLZCallbackCompressor::WriteChunk(void *, long)+0xd0>
         ff3dc:	e3a03000 	mov	r3, #0	; 0x0
         ff3e0:	e5843018 	str	r3, [r4, #24]	; fField24
         ff3e4:	e0555007 	subs	r5, r5, r7
         ff3e8:	e0899007 	add	r9, r9, r7
         ff3ec:	1affffd6 	bne	ff34c <TLZCallbackCompressor::WriteChunk(void *, long)+0x2c>
         ff3f0:	e1a00008 	mov	r0, r8
         ff3f4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TLZCallbackCompressor::Flush(void)
 * Address: 000ff3f8
 */
TLZCallbackCompressor::Flush(void) {
    /*
         ff3f8:	e1a0c00d 	mov	ip, sp
         ff3fc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         ff400:	e24cb004 	sub	fp, ip, #4	; 0x4
         ff404:	e1a04000 	mov	r4, r0
         ff408:	e3a00000 	mov	r0, #0	; 0x0
         ff40c:	e5943018 	ldr	r3, [r4, #24]	; fField24
         ff410:	e3330000 	teq	r3, #0	; 0x0
         ff414:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         ff418:	e24dd004 	sub	sp, sp, #4	; 0x4
         ff41c:	e594201c 	ldr	r2, [r4, #28]	; fField28
         ff420:	e92d000c 	stmdb	sp!, {r2, r3}
         ff424:	e28d1008 	add	r1, sp, #8	; 0x8
         ff428:	e3a03f77 	mov	r3, #476	; 0x1dc
         ff42c:	e2833b01 	add	r3, r3, #1024	; 0x400
         ff430:	e5940024 	ldr	r0, [r4, #36]	; fField36
         ff434:	e5942020 	ldr	r2, [r4, #32]	; fField32
         ff438:	eb0a285c 	bl	3895b0 <TCompressor::Compress(unsigned long *, void *, unsigned long, void *, unsigned long)>
         ff43c:	e28dd008 	add	sp, sp, #8	; 0x8
         ff440:	e3300000 	teq	r0, #0	; 0x0
         ff444:	1a000005 	bne	ff460 <TLZCallbackCompressor::Flush(void)+0x68>
         ff448:	e5941020 	ldr	r1, [r4, #32]	; fField32
         ff44c:	e3a03001 	mov	r3, #1	; 0x1
         ff450:	e59d2000 	ldr	r2, [sp]
         ff454:	e5940014 	ldr	r0, [r4, #20]	; fField20
         ff458:	e1a0e00f 	mov	lr, pc
         ff45c:	e594f010 	ldr	pc, [r4, #16]	; fField16
         ff460:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: ClassInfo__21TLZCallbackCompressorSFv
 * Address: 00389820
 */
void TLZCallbackCompressor::ClassInfo() {
    /*
        389820:	e24f0044 	sub	r0, pc, #68	; 0x44
        389824:	e1a0f00e 	mov	pc, lr
        389828:	e3a00000 	mov	r0, #0	; 0x0
        38982c:	e1a0f00e 	mov	pc, lr
        389830:	544c5a43 	strplb	r5, [ip], -#2627
        389834:	616c6c62 	cmnvs	ip, r2, ror #24
        389838:	61636b43 	cmnvs	r3, r3, asr #22
        38983c:	6f6d7072 	swivs	0x006d7072
        389840:	6573736f 	ldrvsb	r7, [r3, -#879]!
        389844:	72005443 	andvc	r5, r0, #1124073472	; 0x43000000
        389848:	616c6c62 	cmnvs	ip, r2, ror #24
        38984c:	61636b43 	cmnvs	r3, r3, asr #22
        389850:	6f6d7072 	swivs	0x006d7072
        389854:	6573736f 	ldrvsb	r7, [r3, -#879]!
        389858:	7200544c 	andvc	r5, r0, #1275068416	; 0x4c000000
        38985c:	5a52656c 	bpl	1822e14 <ROM$$Size+0x11031c8>
        389860:	6f635374 	swivs	0x00635374
        389864:	6f726544 	swivs	0x00726544
        389868:	65636f6d 	strvsb	r6, [r3, -#3949]!
        38986c:	70726573 	rsbvcs	r6, r2, r3, ror r5
        389870:	736f7200 	cmnvc	pc, #0	; 0x0
        389874:	00544c5a 	subeqs	r4, r4, sl, asr ip
        389878:	53746f72 	cmnpl	r4, #456	; 0x1c8
        38987c:	65446563 	strvsb	r6, [r4, -#1379]
        389880:	6f6d7072 	swivs	0x006d7072
        389884:	6573736f 	ldrvsb	r7, [r3, -#879]!
        389888:	72000000 	andvc	r0, r0, #0	; 0x0
        38988c:	00000000 	andeq	r0, r0, r0
        389890:	eaffffe2 	b	389820 <ClassInfo__21TLZCallbackCompressorSFv>
        389894:	ea606a6f 	b	1ba4258 <TLZCallbackCompressor::$New(void)>
        389898:	ea60622f 	b	1ba215c <TLZCallbackCompressor::$Delete(void)>
        38989c:	ea606a5c 	b	1ba4214 <TLZCallbackCompressor::$Init(void *)>
        3898a0:	ea606e7c 	b	1ba5298 <TLZCallbackCompressor::$Reset(void)>
        3898a4:	ea60729a 	b	1ba6314 <TLZCallbackCompressor::$WriteChunk(void *, long)>
        3898a8:	ea606642 	b	1ba31b8 <TLZCallbackCompressor::$Flush(void)>
        3898ac:	00000000 	andeq	r0, r0, r0
        3898b0:	00000048 	andeq	r0, r0, r8, asr #32
        3898b4:	00000054 	andeq	r0, r0, r4, asr r0
        3898b8:	0000005e 	andeq	r0, r0, lr, asr r0
        3898bc:	0000005c 	andeq	r0, r0, ip, asr r0
        3898c0:	00000070 	andeq	r0, r0, r0, ror r0
        3898c4:	ea606e7c 	b	1ba52bc <$Sizeof__15TLZDecompressorSFv>
        3898d0:	ea606a5c 	b	1ba4248 <TLZDecompressor::$New(void)>
        3898d4:	ea60621c 	b	1ba214c <TLZDecompressor::$Delete(void)>
        3898e4:	ea000001 	b	3898f0 <ClassInfo__15TLZDecompressorSFv+0x8>
    */
}

