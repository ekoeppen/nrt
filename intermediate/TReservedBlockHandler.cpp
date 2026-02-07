#include "include/TReservedBlockHandler.h"

/**
 * Symbol: TReservedBlockHandler::__ct(TStore *)
 * Address: 001a7100
 */
TReservedBlockHandler::TReservedBlockHandler(TStore *) {
    /*
        1a7100:	e1a0c00d 	mov	ip, sp
        1a7104:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1a7108:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a710c:	e1b04000 	movs	r4, r0
        1a7110:	e1a05001 	mov	r5, r1
        1a7114:	1a000003 	bne	1a7128 <TReservedBlockHandler::__ct(TStore *)+0x28>
        1a7118:	e3a0000c 	mov	r0, #12	; 0xc
        1a711c:	eb689d85 	bl	1bce738 <$__nw(unsigned int)>
        1a7120:	e1b04000 	movs	r4, r0
        1a7124:	0a000007 	beq	1a7148 <TReservedBlockHandler::__ct(TStore *)+0x48>
        1a7128:	e5845000 	str	r5, [r4]
        1a712c:	e1a00005 	mov	r0, r5
        1a7130:	ebfdf438 	bl	124218 <TMuxStore::GetStore(void)>
        1a7134:	e5840004 	str	r0, [r4, #4]	; fField4
        1a7138:	e5900054 	ldr	r0, [r0, #84]	; fField84
        1a713c:	eb653632 	bl	1af4a0c <$CeilLog2(unsigned long)>
        1a7140:	e2600020 	rsb	r0, r0, #32	; 0x20
        1a7144:	e5840008 	str	r0, [r4, #8]	; fField8
        1a7148:	e1a00004 	mov	r0, r4
        1a714c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TReservedBlockHandler::AddObject(unsigned long, unsigned long, unsigned long *)
 * Address: 001a8208
 */
TReservedBlockHandler::AddObject(unsigned long, unsigned long, unsigned long *) {
    /*
        1a8208:	e1a0c00d 	mov	ip, sp
        1a820c:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1a8210:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a8214:	e1a04000 	mov	r4, r0
        1a8218:	e24dd008 	sub	sp, sp, #8	; 0x8
        1a821c:	e3a06000 	mov	r6, #0	; 0x0
        1a8220:	e3a0a000 	mov	sl, #0	; 0x0
        1a8224:	e3e00000 	mvn	r0, #0	; 0x0
        1a8228:	e58d0004 	str	r0, [sp, #4]	; fField4
        1a822c:	e3a07000 	mov	r7, #0	; 0x0
        1a8230:	e58d0000 	str	r0, [sp]
        1a8234:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a8238:	e5901050 	ldr	r1, [r0, #80]
        1a823c:	e5d0003d 	ldrb	r0, [r0, #61]
        1a8240:	e3300000 	teq	r0, #0	; 0x0
        1a8244:	03a00b01 	moveq	r0, #1024	; 0x400
        1a8248:	13a00c01 	movne	r0, #256	; 0x100
        1a824c:	e0419000 	sub	r9, r1, r0
        1a8250:	e2490008 	sub	r0, r9, #8	; 0x8
        1a8254:	e51b1034 	ldr	r1, [fp, -#52]
        1a8258:	e1500001 	cmp	r0, r1
        1a825c:	33a00082 	movcc	r0, #130	; 0x82
        1a8260:	32400c2a 	subcc	r0, r0, #10752	; 0x2a00
        1a8264:	3a000099 	bcc	1a84d0 <TReservedBlockHandler::AddObject(unsigned long, unsigned long, unsigned long *)+0x2c8>
        1a8268:	e5940000 	ldr	r0, [r4]
        1a826c:	ebfdefeb 	bl	124220 <TMuxStore::Acquire(void)>
        1a8270:	e3a00000 	mov	r0, #0	; 0x0
        1a8274:	e52d006c 	str	r0, [sp, -#108]!
        1a8278:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        1a827c:	e28d000c 	add	r0, sp, #12	; 0xc
        1a8280:	eb6829bb 	bl	1bb2974 <$setjmp>
        1a8284:	e3300000 	teq	r0, #0	; 0x0
        1a8288:	1a000084 	bne	1a84a0 <TReservedBlockHandler::AddObject(unsigned long, unsigned long, unsigned long *)+0x298>
        1a828c:	e28d0004 	add	r0, sp, #4	; 0x4
        1a8290:	eb68df79 	bl	1be007c <$AddExceptionHandler>
        1a8294:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a8298:	eb65848d 	bl	1b094d4 <TFlashStore::$VppOn(void)>
        1a829c:	e3a05000 	mov	r5, #0	; 0x0
        1a82a0:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a82a4:	eb657c52 	bl	1b073f4 <TFlashStore::$StoreCapacity(void)>
        1a82a8:	e51b1034 	ldr	r1, [fp, -#52]
        1a82ac:	e2818014 	add	r8, r1, #20	; 0x14
        1a82b0:	e3500000 	cmp	r0, #0	; 0x0
        1a82b4:	9a000033 	bls	1a8388 <TReservedBlockHandler::AddObject(unsigned long, unsigned long, unsigned long *)+0x180>
        1a82b8:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a82bc:	e590102c 	ldr	r1, [r0, #44]
        1a82c0:	e5900058 	ldr	r0, [r0, #88]
        1a82c4:	e1a00035 	mov	r0, r5, lsr r0
        1a82c8:	e7910100 	ldr	r0, [r1, r0, lsl #2]
        1a82cc:	eb668471 	bl	1b49498 <TFlashBlock::$IsReserved(void)>
        1a82d0:	e3300000 	teq	r0, #0	; 0x0
        1a82d4:	0a000023 	beq	1a8368 <TReservedBlockHandler::AddObject(unsigned long, unsigned long, unsigned long *)+0x160>
        1a82d8:	e24dd00c 	sub	sp, sp, #12	; 0xc
        1a82dc:	e1a0300d 	mov	r3, sp
        1a82e0:	e92d0008 	stmdb	sp!, {r3}
        1a82e4:	e28d3008 	add	r3, sp, #8	; 0x8
        1a82e8:	e28d200c 	add	r2, sp, #12	; 0xc
        1a82ec:	e1a01005 	mov	r1, r5
        1a82f0:	e1a00004 	mov	r0, r4
        1a82f4:	eb668054 	bl	1b4844c <TReservedBlockHandler::$GetBlockUsage(unsigned long, unsigned long *, unsigned long *, unsigned long *)>
        1a82f8:	e28dd004 	add	sp, sp, #4	; 0x4
        1a82fc:	e1b06000 	movs	r6, r0
        1a8300:	128dd00c 	addne	sp, sp, #12	; 0xc
        1a8304:	1a00001d 	bne	1a8380 <TReservedBlockHandler::AddObject(unsigned long, unsigned long, unsigned long *)+0x178>
        1a8308:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1a830c:	e0400005 	sub	r0, r0, r5
        1a8310:	e0490000 	sub	r0, r9, r0
        1a8314:	e1500008 	cmp	r0, r8
        1a8318:	3a000004 	bcc	1a8330 <TReservedBlockHandler::AddObject(unsigned long, unsigned long, unsigned long *)+0x128>
        1a831c:	e58d5080 	str	r5, [sp, #128]
        1a8320:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1a8324:	e58d007c 	str	r0, [sp, #124]
        1a8328:	e49d700c 	ldr	r7, [sp], #12
        1a832c:	ea000015 	b	1a8388 <TReservedBlockHandler::AddObject(unsigned long, unsigned long, unsigned long *)+0x180>
        1a8330:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        1a8334:	e1580001 	cmp	r8, r1
        1a8338:	8a000009 	bhi	1a8364 <TReservedBlockHandler::AddObject(unsigned long, unsigned long, unsigned long *)+0x15c>
        1a833c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a8340:	e590202c 	ldr	r2, [r0, #44]
        1a8344:	e5900058 	ldr	r0, [r0, #88]
        1a8348:	e1a00035 	mov	r0, r5, lsr r0
        1a834c:	e7920100 	ldr	r0, [r2, r0, lsl #2]
        1a8350:	eb653e1b 	bl	1af7bc4 <TFlashBlock::$EraseHeuristic(unsigned long)>
        1a8354:	e150000a 	cmp	r0, sl
        1a8358:	c1a0a000 	movgt	sl, r0
        1a835c:	c58d5080 	strgt	r5, [sp, #128]
        1a8360:	c59d7000 	ldrgt	r7, [sp]
        1a8364:	e28dd00c 	add	sp, sp, #12	; 0xc
        1a8368:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a836c:	e5901050 	ldr	r1, [r0, #80]
        1a8370:	e0815005 	add	r5, r1, r5
        1a8374:	eb657c1e 	bl	1b073f4 <TFlashStore::$StoreCapacity(void)>
        1a8378:	e1500005 	cmp	r0, r5
        1a837c:	8affffcd 	bhi	1a82b8 <TReservedBlockHandler::AddObject(unsigned long, unsigned long, unsigned long *)+0xb0>
        1a8380:	e3360000 	teq	r6, #0	; 0x0
        1a8384:	1a000042 	bne	1a8494 <TReservedBlockHandler::AddObject(unsigned long, unsigned long, unsigned long *)+0x28c>
        1a8388:	e59d1074 	ldr	r1, [sp, #116]
        1a838c:	e59f5044 	ldr	r5, [pc, #44]	; 1a83d8 <TReservedBlockHandler::AddObject(unsigned long, unsigned long, unsigned long *)+0x1d0>
        1a8390:	e3710001 	cmn	r1, #1	; 0x1
        1a8394:	0a000010 	beq	1a83dc <TReservedBlockHandler::AddObject(unsigned long, unsigned long, unsigned long *)+0x1d4>
        1a8398:	e59d0070 	ldr	r0, [sp, #112]
        1a839c:	e3700001 	cmn	r0, #1	; 0x1
        1a83a0:	1a000022 	bne	1a8430 <TReservedBlockHandler::AddObject(unsigned long, unsigned long, unsigned long *)+0x228>
        1a83a4:	e28d2070 	add	r2, sp, #112	; 0x70
        1a83a8:	e1a00004 	mov	r0, r4
        1a83ac:	eb668027 	bl	1b48450 <TReservedBlockHandler::$Compact(unsigned long, unsigned long *)>
        1a83b0:	e1b06000 	movs	r6, r0
        1a83b4:	1a00001b 	bne	1a8428 <TReservedBlockHandler::AddObject(unsigned long, unsigned long, unsigned long *)+0x220>
        1a83b8:	e59d0074 	ldr	r0, [sp, #116]
        1a83bc:	e59d1070 	ldr	r1, [sp, #112]
        1a83c0:	e0410000 	sub	r0, r1, r0
        1a83c4:	e0490000 	sub	r0, r9, r0
        1a83c8:	e1500008 	cmp	r0, r8
        1a83cc:	31a06005 	movcc	r6, r5
        1a83d0:	3a00002f 	bcc	1a8494 <TReservedBlockHandler::AddObject(unsigned long, unsigned long, unsigned long *)+0x28c>
        1a83d4:	ea000015 	b	1a8430 <TReservedBlockHandler::AddObject(unsigned long, unsigned long, unsigned long *)+0x228>
        1a83d8:	ffffd687 	swinv	0x00ffd687
        1a83dc:	e24dd004 	sub	sp, sp, #4	; 0x4
        1a83e0:	e1a0200d 	mov	r2, sp
        1a83e4:	e28d1078 	add	r1, sp, #120	; 0x78
        1a83e8:	e1a00004 	mov	r0, r4
        1a83ec:	eb668018 	bl	1b48454 <TReservedBlockHandler::$FindFreeBlock(unsigned long *, unsigned long *)>
        1a83f0:	e3300000 	teq	r0, #0	; 0x0
        1a83f4:	01a06005 	moveq	r6, r5
        1a83f8:	0a000005 	beq	1a8414 <TReservedBlockHandler::AddObject(unsigned long, unsigned long, unsigned long *)+0x20c>
        1a83fc:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a8400:	e3a03001 	mov	r3, #1	; 0x1
        1a8404:	e59d1078 	ldr	r1, [sp, #120]
        1a8408:	e59d2000 	ldr	r2, [sp]
        1a840c:	eb000150 	bl	1a8954 <NewReservedBlock__FP11TFlashStoreUlN22>
        1a8410:	e1a06000 	mov	r6, r0
        1a8414:	e59d0078 	ldr	r0, [sp, #120]
        1a8418:	e2800008 	add	r0, r0, #8	; 0x8
        1a841c:	e3a07001 	mov	r7, #1	; 0x1
        1a8420:	e58d0074 	str	r0, [sp, #116]
        1a8424:	e28dd004 	add	sp, sp, #4	; 0x4
        1a8428:	e3360000 	teq	r6, #0	; 0x0
        1a842c:	1a000018 	bne	1a8494 <TReservedBlockHandler::AddObject(unsigned long, unsigned long, unsigned long *)+0x28c>
        1a8430:	e24dd014 	sub	sp, sp, #20	; 0x14
        1a8434:	e1a03007 	mov	r3, r7
        1a8438:	e1a0000d 	mov	r0, sp
        1a843c:	e24b2034 	sub	r2, fp, #52	; 0x34
        1a8440:	e8920006 	ldmia	r2, {r1, r2}
        1a8444:	eb000187 	bl	1a8a68 <SReservedObjectHeader::__ct(unsigned long, unsigned long, unsigned long)>
        1a8448:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a844c:	e59d1084 	ldr	r1, [sp, #132]
        1a8450:	eb657ffd 	bl	1b0844c <TFlashStore::$Translate(unsigned long)>
        1a8454:	e1a01000 	mov	r1, r0
        1a8458:	e1a0200d 	mov	r2, sp
        1a845c:	e3a03014 	mov	r3, #20	; 0x14
        1a8460:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a8464:	eb652d55 	bl	1af39c0 <TFlashStore::$BasicWrite(unsigned long, void *, unsigned long)>
        1a8468:	e1a06000 	mov	r6, r0
        1a846c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a8470:	e5b01058 	ldr	r1, [r0, #88]!
        1a8474:	e59d0088 	ldr	r0, [sp, #136]
        1a8478:	e1a01130 	mov	r1, r0, lsr r1
        1a847c:	e1a02007 	mov	r2, r7
        1a8480:	e1a00004 	mov	r0, r4
        1a8484:	eb667ff3 	bl	1b48458 <TReservedBlockHandler::$GetReservedId(unsigned long, unsigned long)>
        1a8488:	e51b302c 	ldr	r3, [fp, -#44]
        1a848c:	e5830000 	str	r0, [r3]
        1a8490:	e28dd014 	add	sp, sp, #20	; 0x14
        1a8494:	e28d0004 	add	r0, sp, #4	; 0x4
        1a8498:	eb68e306 	bl	1be10b8 <$ExitHandler>
        1a849c:	ea000001 	b	1a84a8 <TReservedBlockHandler::AddObject(unsigned long, unsigned long, unsigned long *)+0x2a0>
        1a84a0:	e3a00001 	mov	r0, #1	; 0x1
        1a84a4:	e58d0000 	str	r0, [sp]
        1a84a8:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a84ac:	eb658405 	bl	1b094c8 <TFlashStore::$VppOff(void)>
        1a84b0:	e5940000 	ldr	r0, [r4]
        1a84b4:	ebfdef5c 	bl	12422c <TMuxStore::Release(void)>
        1a84b8:	e59d0000 	ldr	r0, [sp]
        1a84bc:	e3300000 	teq	r0, #0	; 0x0
        1a84c0:	128d0004 	addne	r0, sp, #4	; 0x4
        1a84c4:	1b68e722 	blne	1be2154 <$NextHandler>
        1a84c8:	e28dd070 	add	sp, sp, #112	; 0x70
        1a84cc:	e1a00006 	mov	r0, r6
        1a84d0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TReservedBlockHandler::FindObject(unsigned long, SReservedObjectHeader *, unsigned long *, unsigned char)
 * Address: 001a84d4
 */
TReservedBlockHandler::FindObject(unsigned long, SReservedObjectHeader *, unsigned long *, unsigned char) {
    /*
        1a84d4:	e1a0c00d 	mov	ip, sp
        1a84d8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1a84dc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1a84e0:	e24cb014 	sub	fp, ip, #20	; 0x14
        1a84e4:	e1a04000 	mov	r4, r0
        1a84e8:	e1a07001 	mov	r7, r1
        1a84ec:	e1a05002 	mov	r5, r2
        1a84f0:	e59b0014 	ldr	r0, [fp, #20]
        1a84f4:	e200a0ff 	and	sl, r0, #255	; 0xff
        1a84f8:	e1a00004 	mov	r0, r4
        1a84fc:	eb6683df 	bl	1b49480 <TReservedBlockHandler::$GetObjectBlockNumber(unsigned long)>
        1a8500:	e1a06000 	mov	r6, r0
        1a8504:	e1a01007 	mov	r1, r7
        1a8508:	e1a00004 	mov	r0, r4
        1a850c:	eb6683dc 	bl	1b49484 <TReservedBlockHandler::$GetObjectNumber(unsigned long)>
        1a8510:	e1a09000 	mov	r9, r0
        1a8514:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a8518:	e590002c 	ldr	r0, [r0, #44]
        1a851c:	e7900106 	ldr	r0, [r0, r6, lsl #2]
        1a8520:	eb6683dc 	bl	1b49498 <TFlashBlock::$IsReserved(void)>
        1a8524:	e3300000 	teq	r0, #0	; 0x0
        1a8528:	0a00002f 	beq	1a85ec <TReservedBlockHandler::FindObject(unsigned long, SReservedObjectHeader *, unsigned long *, unsigned char)+0x118>
        1a852c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a8530:	e5901050 	ldr	r1, [r0, #80]
        1a8534:	e0070196 	mul	r7, r6, r1
        1a8538:	e1a01007 	mov	r1, r7
        1a853c:	eb657fc2 	bl	1b0844c <TFlashStore::$Translate(unsigned long)>
        1a8540:	e5941004 	ldr	r1, [r4, #4]	; fField4
        1a8544:	e5912050 	ldr	r2, [r1, #80]
        1a8548:	e0822000 	add	r2, r2, r0
        1a854c:	e5d1103d 	ldrb	r1, [r1, #61]
        1a8550:	e3310000 	teq	r1, #0	; 0x0
        1a8554:	03a01b01 	moveq	r1, #1024	; 0x400
        1a8558:	13a01c01 	movne	r1, #256	; 0x100
        1a855c:	e0428001 	sub	r8, r2, r1
        1a8560:	e2806008 	add	r6, r0, #8	; 0x8
        1a8564:	e1560008 	cmp	r6, r8
        1a8568:	2a00001f 	bcs	1a85ec <TReservedBlockHandler::FindObject(unsigned long, SReservedObjectHeader *, unsigned long *, unsigned char)+0x118>
        1a856c:	e1a02005 	mov	r2, r5
        1a8570:	e1a01006 	mov	r1, r6
        1a8574:	e3a03014 	mov	r3, #20	; 0x14
        1a8578:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a857c:	eb652d0d 	bl	1af39b8 <TFlashStore::$BasicRead(unsigned long, void *, unsigned long)>
        1a8580:	e3300000 	teq	r0, #0	; 0x0
        1a8584:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1a8588:	e5950000 	ldr	r0, [r5]
        1a858c:	e3700001 	cmn	r0, #1	; 0x1
        1a8590:	0a000015 	beq	1a85ec <TReservedBlockHandler::FindObject(unsigned long, SReservedObjectHeader *, unsigned long *, unsigned char)+0x118>
        1a8594:	e595100c 	ldr	r1, [r5, #12]
        1a8598:	e1310009 	teq	r1, r9
        1a859c:	1a00000e 	bne	1a85dc <TReservedBlockHandler::FindObject(unsigned long, SReservedObjectHeader *, unsigned long *, unsigned char)+0x108>
        1a85a0:	e5b50008 	ldr	r0, [r5, #8]!	; fField8
        1a85a4:	e3100101 	tst	r0, #1073741824	; 0x40000000
        1a85a8:	0a00000f 	beq	1a85ec <TReservedBlockHandler::FindObject(unsigned long, SReservedObjectHeader *, unsigned long *, unsigned char)+0x118>
        1a85ac:	e33a0000 	teq	sl, #0	; 0x0
        1a85b0:	12000102 	andne	r0, r0, #-2147483648	; 0x80000000
        1a85b4:	13300000 	teqne	r0, #0	; 0x0
        1a85b8:	1a00000b 	bne	1a85ec <TReservedBlockHandler::FindObject(unsigned long, SReservedObjectHeader *, unsigned long *, unsigned char)+0x118>
        1a85bc:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        1a85c0:	e590005c 	ldr	r0, [r0, #92]
        1a85c4:	e0000006 	and	r0, r0, r6
        1a85c8:	e0800007 	add	r0, r0, r7
        1a85cc:	e59b3010 	ldr	r3, [fp, #16]
        1a85d0:	e5830000 	str	r0, [r3]
        1a85d4:	e3a00000 	mov	r0, #0	; 0x0
        1a85d8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1a85dc:	e0860000 	add	r0, r6, r0
        1a85e0:	e2806014 	add	r6, r0, #20	; 0x14
        1a85e4:	e1560008 	cmp	r6, r8
        1a85e8:	3affffdf 	bcc	1a856c <TReservedBlockHandler::FindObject(unsigned long, SReservedObjectHeader *, unsigned long *, unsigned char)+0x98>
        1a85ec:	e3a00092 	mov	r0, #146	; 0x92
        1a85f0:	e2400c2a 	sub	r0, r0, #10752	; 0x2a00
        1a85f4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TReservedBlockHandler::GetBlockUsage(unsigned long, unsigned long *, unsigned long *, unsigned long *)
 * Address: 001a85f8
 */
TReservedBlockHandler::GetBlockUsage(unsigned long, unsigned long *, unsigned long *, unsigned long *) {
    /*
        1a85f8:	e1a0c00d 	mov	ip, sp
        1a85fc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1a8600:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1a8604:	e24cb014 	sub	fp, ip, #20	; 0x14
        1a8608:	e1a04000 	mov	r4, r0
        1a860c:	e1a05001 	mov	r5, r1
        1a8610:	e1a06002 	mov	r6, r2
        1a8614:	e3a00000 	mov	r0, #0	; 0x0
        1a8618:	e59b8014 	ldr	r8, [fp, #20]
        1a861c:	e3a09000 	mov	r9, #0	; 0x0
        1a8620:	e5880000 	str	r0, [r8]
        1a8624:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a8628:	eb657f87 	bl	1b0844c <TFlashStore::$Translate(unsigned long)>
        1a862c:	e5941004 	ldr	r1, [r4, #4]	; fField4
        1a8630:	e5912050 	ldr	r2, [r1, #80]
        1a8634:	e0822000 	add	r2, r2, r0
        1a8638:	e5d1103d 	ldrb	r1, [r1, #61]
        1a863c:	e3310000 	teq	r1, #0	; 0x0
        1a8640:	03a01b01 	moveq	r1, #1024	; 0x400
        1a8644:	13a01c01 	movne	r1, #256	; 0x100
        1a8648:	e042a001 	sub	sl, r2, r1
        1a864c:	e2807008 	add	r7, r0, #8	; 0x8
        1a8650:	e157000a 	cmp	r7, sl
        1a8654:	2a00001d 	bcs	1a86d0 <TReservedBlockHandler::GetBlockUsage(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0xd8>
        1a8658:	e24dd014 	sub	sp, sp, #20	; 0x14
        1a865c:	e1a0200d 	mov	r2, sp
        1a8660:	e1a01007 	mov	r1, r7
        1a8664:	e3a03014 	mov	r3, #20	; 0x14
        1a8668:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a866c:	eb652cd1 	bl	1af39b8 <TFlashStore::$BasicRead(unsigned long, void *, unsigned long)>
        1a8670:	e3300000 	teq	r0, #0	; 0x0
        1a8674:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1a8678:	e59d0000 	ldr	r0, [sp]
        1a867c:	e3700001 	cmn	r0, #1	; 0x1
        1a8680:	028dd014 	addeq	sp, sp, #20	; 0x14
        1a8684:	0a000011 	beq	1a86d0 <TReservedBlockHandler::GetBlockUsage(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0xd8>
        1a8688:	e59d100c 	ldr	r1, [sp, #12]
        1a868c:	e5980000 	ldr	r0, [r8]
        1a8690:	e1510000 	cmp	r1, r0
        1a8694:	859d000c 	ldrhi	r0, [sp, #12]
        1a8698:	85880000 	strhi	r0, [r8]
        1a869c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        1a86a0:	e3100102 	tst	r0, #-2147483648	; 0x80000000
        1a86a4:	1a000004 	bne	1a86bc <TReservedBlockHandler::GetBlockUsage(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0xc4>
        1a86a8:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        1a86ac:	e3100101 	tst	r0, #1073741824	; 0x40000000
        1a86b0:	159d0000 	ldrne	r0, [sp]
        1a86b4:	10890000 	addne	r0, r9, r0
        1a86b8:	12809014 	addne	r9, r0, #20	; 0x14
        1a86bc:	e49d0014 	ldr	r0, [sp], #20
        1a86c0:	e0870000 	add	r0, r7, r0
        1a86c4:	e2807014 	add	r7, r0, #20	; 0x14
        1a86c8:	e157000a 	cmp	r7, sl
        1a86cc:	3affffe1 	bcc	1a8658 <TReservedBlockHandler::GetBlockUsage(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0x60>
        1a86d0:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a86d4:	e590005c 	ldr	r0, [r0, #92]
        1a86d8:	e0000007 	and	r0, r0, r7
        1a86dc:	e0800005 	add	r0, r0, r5
        1a86e0:	e59b3010 	ldr	r3, [fp, #16]
        1a86e4:	e5830000 	str	r0, [r3]
        1a86e8:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        1a86ec:	e5901050 	ldr	r1, [r0, #80]
        1a86f0:	e5d0003d 	ldrb	r0, [r0, #61]
        1a86f4:	e3300000 	teq	r0, #0	; 0x0
        1a86f8:	03a00b01 	moveq	r0, #1024	; 0x400
        1a86fc:	13a00c01 	movne	r0, #256	; 0x100
        1a8700:	e0410000 	sub	r0, r1, r0
        1a8704:	e2400008 	sub	r0, r0, #8	; 0x8
        1a8708:	e0400009 	sub	r0, r0, r9
        1a870c:	e5860000 	str	r0, [r6]
        1a8710:	e5980000 	ldr	r0, [r8]
        1a8714:	e2800001 	add	r0, r0, #1	; 0x1
        1a8718:	e5880000 	str	r0, [r8]
        1a871c:	e3a00000 	mov	r0, #0	; 0x0
        1a8720:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TReservedBlockHandler::Compact(unsigned long, unsigned long *)
 * Address: 001a8724
 */
TReservedBlockHandler::Compact(unsigned long, unsigned long *) {
    /*
        1a8724:	e1a0c00d 	mov	ip, sp
        1a8728:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1a872c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a8730:	e1a04000 	mov	r4, r0
        1a8734:	e1a05002 	mov	r5, r2
        1a8738:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1a873c:	eb654135 	bl	1af8c18 <TFlashStore::$FindUnusedPhysicalBlock(void)>
        1a8740:	e1a08000 	mov	r8, r0
        1a8744:	e1a01008 	mov	r1, r8
        1a8748:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a874c:	eb6555e3 	bl	1afdee0 <TFlashStore::$IsErased(unsigned long)>
        1a8750:	e3300000 	teq	r0, #0	; 0x0
        1a8754:	1a000005 	bne	1a8770 <TReservedBlockHandler::Compact(unsigned long, unsigned long *)+0x4c>
        1a8758:	e1a01008 	mov	r1, r8
        1a875c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a8760:	eb657f2c 	bl	1b08418 <TFlashStore::$SyncErase(unsigned long)>
        1a8764:	e1b06000 	movs	r6, r0
        1a8768:	11a00006 	movne	r0, r6
        1a876c:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1a8770:	e51b1030 	ldr	r1, [fp, -#48]
        1a8774:	e2810008 	add	r0, r1, #8	; 0x8
        1a8778:	e5850000 	str	r0, [r5]
        1a877c:	e24dd004 	sub	sp, sp, #4	; 0x4
        1a8780:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a8784:	e51b1030 	ldr	r1, [fp, -#48]
        1a8788:	eb657f2f 	bl	1b0844c <TFlashStore::$Translate(unsigned long)>
        1a878c:	e5941004 	ldr	r1, [r4, #4]	; fField4
        1a8790:	e5912050 	ldr	r2, [r1, #80]
        1a8794:	e0822000 	add	r2, r2, r0
        1a8798:	e5d1103d 	ldrb	r1, [r1, #61]
        1a879c:	e3310000 	teq	r1, #0	; 0x0
        1a87a0:	03a01b01 	moveq	r1, #1024	; 0x400
        1a87a4:	13a01c01 	movne	r1, #256	; 0x100
        1a87a8:	e0421001 	sub	r1, r2, r1
        1a87ac:	e2807008 	add	r7, r0, #8	; 0x8
        1a87b0:	e288a008 	add	sl, r8, #8	; 0x8
        1a87b4:	e58d1000 	str	r1, [sp]
        1a87b8:	e1570001 	cmp	r7, r1
        1a87bc:	2a00001b 	bcs	1a8830 <TReservedBlockHandler::Compact(unsigned long, unsigned long *)+0x10c>
        1a87c0:	e24dd014 	sub	sp, sp, #20	; 0x14
        1a87c4:	e1a0200d 	mov	r2, sp
        1a87c8:	e1a01007 	mov	r1, r7
        1a87cc:	e3a03014 	mov	r3, #20	; 0x14
        1a87d0:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a87d4:	eb652c77 	bl	1af39b8 <TFlashStore::$BasicRead(unsigned long, void *, unsigned long)>
        1a87d8:	e1b06000 	movs	r6, r0
        1a87dc:	1a000012 	bne	1a882c <TReservedBlockHandler::Compact(unsigned long, unsigned long *)+0x108>
        1a87e0:	e59d0000 	ldr	r0, [sp]
        1a87e4:	e3700001 	cmn	r0, #1	; 0x1
        1a87e8:	028dd014 	addeq	sp, sp, #20	; 0x14
        1a87ec:	0a000011 	beq	1a8838 <TReservedBlockHandler::Compact(unsigned long, unsigned long *)+0x114>
        1a87f0:	e59d0000 	ldr	r0, [sp]
        1a87f4:	e2809014 	add	r9, r0, #20	; 0x14
        1a87f8:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        1a87fc:	e3100102 	tst	r0, #-2147483648	; 0x80000000
        1a8800:	1a00002d 	bne	1a88bc <TReservedBlockHandler::Compact(unsigned long, unsigned long *)+0x198>
        1a8804:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        1a8808:	e3100101 	tst	r0, #1073741824	; 0x40000000
        1a880c:	0a00002a 	beq	1a88bc <TReservedBlockHandler::Compact(unsigned long, unsigned long *)+0x198>
        1a8810:	e1a03009 	mov	r3, r9
        1a8814:	e1a0200a 	mov	r2, sl
        1a8818:	e1a01007 	mov	r1, r7
        1a881c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a8820:	eb652c63 	bl	1af39b4 <TFlashStore::$BasicCopy(unsigned long, unsigned long, unsigned long)>
        1a8824:	e1b06000 	movs	r6, r0
        1a8828:	0a00001f 	beq	1a88ac <TReservedBlockHandler::Compact(unsigned long, unsigned long *)+0x188>
        1a882c:	e28dd014 	add	sp, sp, #20	; 0x14
        1a8830:	e3360000 	teq	r6, #0	; 0x0
        1a8834:	1a000019 	bne	1a88a0 <TReservedBlockHandler::Compact(unsigned long, unsigned long *)+0x17c>
        1a8838:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a883c:	e1a01000 	mov	r1, r0
        1a8840:	e5902024 	ldr	r2, [r0, #36]
        1a8844:	e5900058 	ldr	r0, [r0, #88]
        1a8848:	e1a03038 	mov	r3, r8, lsr r0
        1a884c:	e0833083 	add	r3, r3, r3, lsl #1
        1a8850:	e0825183 	add	r5, r2, r3, lsl #3
        1a8854:	e591102c 	ldr	r1, [r1, #44]
        1a8858:	e51b2030 	ldr	r2, [fp, -#48]
        1a885c:	e1a00032 	mov	r0, r2, lsr r0
        1a8860:	e7910100 	ldr	r0, [r1, r0, lsl #2]
        1a8864:	eb65620f 	bl	1b010a8 <TFlashBlock::$PhysBlock(void)>
        1a8868:	e3e02000 	mvn	r2, #0	; 0x0
        1a886c:	e1a01005 	mov	r1, r5
        1a8870:	eb6576b1 	bl	1b0633c <TFlashPhysBlock::$SetSpare(TFlashPhysBlock *, unsigned long)>
        1a8874:	e1b06000 	movs	r6, r0
        1a8878:	1a000008 	bne	1a88a0 <TReservedBlockHandler::Compact(unsigned long, unsigned long *)+0x17c>
        1a887c:	e59f0024 	ldr	r0, [pc, #24]	; 1a88a8 <TReservedBlockHandler::Compact(unsigned long, unsigned long *)+0x184>
        1a8880:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        1a8884:	e1a0200d 	mov	r2, sp
        1a8888:	e1a01008 	mov	r1, r8
        1a888c:	e3a03004 	mov	r3, #4	; 0x4
        1a8890:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        1a8894:	eb652c49 	bl	1af39c0 <TFlashStore::$BasicWrite(unsigned long, void *, unsigned long)>
        1a8898:	e1a06000 	mov	r6, r0
        1a889c:	e28dd004 	add	sp, sp, #4	; 0x4
        1a88a0:	e1a00006 	mov	r0, r6
        1a88a4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1a88a8:	72626c6b 	rsbvc	r6, r2, #27392	; 0x6b00
        1a88ac:	e5950000 	ldr	r0, [r5]
        1a88b0:	e0800009 	add	r0, r0, r9
        1a88b4:	e08aa009 	add	sl, sl, r9
        1a88b8:	e5850000 	str	r0, [r5]
        1a88bc:	e0877009 	add	r7, r7, r9
        1a88c0:	e5bd0014 	ldr	r0, [sp, #20]!
        1a88c4:	e1570000 	cmp	r7, r0
        1a88c8:	3affffbc 	bcc	1a87c0 <TReservedBlockHandler::Compact(unsigned long, unsigned long *)+0x9c>
        1a88cc:	eaffffd9 	b	1a8838 <TReservedBlockHandler::Compact(unsigned long, unsigned long *)+0x114>
    */
}

/**
 * Symbol: TReservedBlockHandler::FindFreeBlock(unsigned long *, unsigned long *)
 * Address: 001a88d0
 */
TReservedBlockHandler::FindFreeBlock(unsigned long *, unsigned long *) {
    /*
        1a88d0:	e1a0c00d 	mov	ip, sp
        1a88d4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1a88d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a88dc:	e1a04000 	mov	r4, r0
        1a88e0:	e1a06001 	mov	r6, r1
        1a88e4:	e1a05002 	mov	r5, r2
        1a88e8:	e3a07000 	mov	r7, #0	; 0x0
        1a88ec:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1a88f0:	eb657abf 	bl	1b073f4 <TFlashStore::$StoreCapacity(void)>
        1a88f4:	e3500000 	cmp	r0, #0	; 0x0
        1a88f8:	9a000013 	bls	1a894c <TReservedBlockHandler::FindFreeBlock(unsigned long *, unsigned long *)+0x7c>
        1a88fc:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a8900:	e590102c 	ldr	r1, [r0, #44]
        1a8904:	e5900058 	ldr	r0, [r0, #88]
        1a8908:	e1a00037 	mov	r0, r7, lsr r0
        1a890c:	e7910100 	ldr	r0, [r1, r0, lsl #2]
        1a8910:	eb65598c 	bl	1afef48 <TFlashBlock::$IsVirgin(void)>
        1a8914:	e3300000 	teq	r0, #0	; 0x0
        1a8918:	0a000005 	beq	1a8934 <TReservedBlockHandler::FindFreeBlock(unsigned long *, unsigned long *)+0x64>
        1a891c:	e5867000 	str	r7, [r6]
        1a8920:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        1a8924:	eb6540bb 	bl	1af8c18 <TFlashStore::$FindUnusedPhysicalBlock(void)>
        1a8928:	e5850000 	str	r0, [r5]
        1a892c:	e3a00001 	mov	r0, #1	; 0x1
        1a8930:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1a8934:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a8938:	e5901050 	ldr	r1, [r0, #80]
        1a893c:	e0817007 	add	r7, r1, r7
        1a8940:	eb657aab 	bl	1b073f4 <TFlashStore::$StoreCapacity(void)>
        1a8944:	e1500007 	cmp	r0, r7
        1a8948:	8affffeb 	bhi	1a88fc <TReservedBlockHandler::FindFreeBlock(unsigned long *, unsigned long *)+0x2c>
        1a894c:	e3a00000 	mov	r0, #0	; 0x0
        1a8950:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TReservedBlockHandler::GetReservedId(unsigned long, unsigned long)
 * Address: 001a8a40
 */
TReservedBlockHandler::GetReservedId(unsigned long, unsigned long) {
    /*
        1a8a40:	e5900008 	ldr	r0, [r0, #8]	; fField8
        1a8a44:	e1820011 	orr	r0, r2, r1, lsl r0
        1a8a48:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TReservedBlockHandler::GetObjectBlockNumber(unsigned long)
 * Address: 001a8a4c
 */
TReservedBlockHandler::GetObjectBlockNumber(unsigned long) {
    /*
        1a8a4c:	e5900008 	ldr	r0, [r0, #8]	; fField8
        1a8a50:	e1a00031 	mov	r0, r1, lsr r0
        1a8a54:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TReservedBlockHandler::GetObjectNumber(unsigned long)
 * Address: 001a8a58
 */
TReservedBlockHandler::GetObjectNumber(unsigned long) {
    /*
        1a8a58:	e5b02008 	ldr	r2, [r0, #8]!	; fField8
        1a8a5c:	e3e00000 	mvn	r0, #0	; 0x0
        1a8a60:	e1c10210 	bic	r0, r1, r0, lsl r2
        1a8a64:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TReservedBlockHandler::Write(unsigned long, unsigned long, void *, unsigned long)
 * Address: 001a8ab8
 */
TReservedBlockHandler::Write(unsigned long, unsigned long, void *, unsigned long) {
    /*
        1a8ab8:	e1a0c00d 	mov	ip, sp
        1a8abc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1a8ac0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a8ac4:	e1a04000 	mov	r4, r0
        1a8ac8:	e1a07001 	mov	r7, r1
        1a8acc:	e1a05002 	mov	r5, r2
        1a8ad0:	e1a06003 	mov	r6, r3
        1a8ad4:	e3a08000 	mov	r8, #0	; 0x0
        1a8ad8:	e59ba004 	ldr	sl, [fp, #4]	; fField4
        1a8adc:	e5900000 	ldr	r0, [r0]
        1a8ae0:	ebfdedce 	bl	124220 <TMuxStore::Acquire(void)>
        1a8ae4:	e3a00000 	mov	r0, #0	; 0x0
        1a8ae8:	e3a09000 	mov	r9, #0	; 0x0
        1a8aec:	e52d006c 	str	r0, [sp, -#108]!
        1a8af0:	e28d0008 	add	r0, sp, #8	; 0x8
        1a8af4:	eb68279e 	bl	1bb2974 <$setjmp>
        1a8af8:	e3300000 	teq	r0, #0	; 0x0
        1a8afc:	1a000027 	bne	1a8ba0 <TReservedBlockHandler::Write(unsigned long, unsigned long, void *, unsigned long)+0xe8>
        1a8b00:	e1a0000d 	mov	r0, sp
        1a8b04:	eb68dd5c 	bl	1be007c <$AddExceptionHandler>
        1a8b08:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a8b0c:	eb658270 	bl	1b094d4 <TFlashStore::$VppOn(void)>
        1a8b10:	e24dd018 	sub	sp, sp, #24	; 0x18
        1a8b14:	e3a03000 	mov	r3, #0	; 0x0
        1a8b18:	e92d0008 	stmdb	sp!, {r3}
        1a8b1c:	e28d3018 	add	r3, sp, #24	; 0x18
        1a8b20:	e28d2004 	add	r2, sp, #4	; 0x4
        1a8b24:	e1a01007 	mov	r1, r7
        1a8b28:	e1a00004 	mov	r0, r4
        1a8b2c:	eb667e4b 	bl	1b48460 <TReservedBlockHandler::$FindObject(unsigned long, SReservedObjectHeader *, unsigned long *, unsigned char)>
        1a8b30:	e28dd004 	add	sp, sp, #4	; 0x4
        1a8b34:	e1b08000 	movs	r8, r0
        1a8b38:	1a000014 	bne	1a8b90 <TReservedBlockHandler::Write(unsigned long, unsigned long, void *, unsigned long)+0xd8>
        1a8b3c:	e59d0000 	ldr	r0, [sp]
        1a8b40:	e1550000 	cmp	r5, r0
        1a8b44:	959d0000 	ldrls	r0, [sp]
        1a8b48:	915a0000 	cmpls	sl, r0
        1a8b4c:	9085100a 	addls	r1, r5, sl
        1a8b50:	959d0000 	ldrls	r0, [sp]
        1a8b54:	91510000 	cmpls	r1, r0
        1a8b58:	83a08fa6 	movhi	r8, #664	; 0x298
        1a8b5c:	82488b0b 	subhi	r8, r8, #11264	; 0x2c00
        1a8b60:	8a00000a 	bhi	1a8b90 <TReservedBlockHandler::Write(unsigned long, unsigned long, void *, unsigned long)+0xd8>
        1a8b64:	e59d0014 	ldr	r0, [sp, #20]
        1a8b68:	e0800005 	add	r0, r0, r5
        1a8b6c:	e2801014 	add	r1, r0, #20	; 0x14
        1a8b70:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a8b74:	eb657e34 	bl	1b0844c <TFlashStore::$Translate(unsigned long)>
        1a8b78:	e1a01000 	mov	r1, r0
        1a8b7c:	e1a0300a 	mov	r3, sl
        1a8b80:	e1a02006 	mov	r2, r6
        1a8b84:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a8b88:	eb652b8c 	bl	1af39c0 <TFlashStore::$BasicWrite(unsigned long, void *, unsigned long)>
        1a8b8c:	e1a08000 	mov	r8, r0
        1a8b90:	e28dd018 	add	sp, sp, #24	; 0x18
        1a8b94:	e1a0000d 	mov	r0, sp
        1a8b98:	eb68e146 	bl	1be10b8 <$ExitHandler>
        1a8b9c:	ea000000 	b	1a8ba4 <TReservedBlockHandler::Write(unsigned long, unsigned long, void *, unsigned long)+0xec>
        1a8ba0:	e3a09001 	mov	r9, #1	; 0x1
        1a8ba4:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a8ba8:	eb658246 	bl	1b094c8 <TFlashStore::$VppOff(void)>
        1a8bac:	e5940000 	ldr	r0, [r4]
        1a8bb0:	ebfded9d 	bl	12422c <TMuxStore::Release(void)>
        1a8bb4:	e3390000 	teq	r9, #0	; 0x0
        1a8bb8:	11a0000d 	movne	r0, sp
        1a8bbc:	1b68e564 	blne	1be2154 <$NextHandler>
        1a8bc0:	e1a00008 	mov	r0, r8
        1a8bc4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TReservedBlockHandler::Read(unsigned long, unsigned long, void *, unsigned long)
 * Address: 001a8bc8
 */
TReservedBlockHandler::Read(unsigned long, unsigned long, void *, unsigned long) {
    /*
        1a8bc8:	e1a0c00d 	mov	ip, sp
        1a8bcc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1a8bd0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a8bd4:	e1a04000 	mov	r4, r0
        1a8bd8:	e1a07001 	mov	r7, r1
        1a8bdc:	e1a05002 	mov	r5, r2
        1a8be0:	e1a06003 	mov	r6, r3
        1a8be4:	e3a08000 	mov	r8, #0	; 0x0
        1a8be8:	e59ba004 	ldr	sl, [fp, #4]	; fField4
        1a8bec:	e5900000 	ldr	r0, [r0]
        1a8bf0:	ebfded8a 	bl	124220 <TMuxStore::Acquire(void)>
        1a8bf4:	e3a00000 	mov	r0, #0	; 0x0
        1a8bf8:	e3a09000 	mov	r9, #0	; 0x0
        1a8bfc:	e52d006c 	str	r0, [sp, -#108]!
        1a8c00:	e28d0008 	add	r0, sp, #8	; 0x8
        1a8c04:	eb68275a 	bl	1bb2974 <$setjmp>
        1a8c08:	e3300000 	teq	r0, #0	; 0x0
        1a8c0c:	1a000027 	bne	1a8cb0 <TReservedBlockHandler::Read(unsigned long, unsigned long, void *, unsigned long)+0xe8>
        1a8c10:	e1a0000d 	mov	r0, sp
        1a8c14:	eb68dd18 	bl	1be007c <$AddExceptionHandler>
        1a8c18:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a8c1c:	eb658227 	bl	1b094c0 <TFlashStore::$VccOn(void)>
        1a8c20:	e24dd018 	sub	sp, sp, #24	; 0x18
        1a8c24:	e3a03001 	mov	r3, #1	; 0x1
        1a8c28:	e92d0008 	stmdb	sp!, {r3}
        1a8c2c:	e28d3018 	add	r3, sp, #24	; 0x18
        1a8c30:	e28d2004 	add	r2, sp, #4	; 0x4
        1a8c34:	e1a01007 	mov	r1, r7
        1a8c38:	e1a00004 	mov	r0, r4
        1a8c3c:	eb667e07 	bl	1b48460 <TReservedBlockHandler::$FindObject(unsigned long, SReservedObjectHeader *, unsigned long *, unsigned char)>
        1a8c40:	e28dd004 	add	sp, sp, #4	; 0x4
        1a8c44:	e1b08000 	movs	r8, r0
        1a8c48:	1a000014 	bne	1a8ca0 <TReservedBlockHandler::Read(unsigned long, unsigned long, void *, unsigned long)+0xd8>
        1a8c4c:	e59d0000 	ldr	r0, [sp]
        1a8c50:	e1550000 	cmp	r5, r0
        1a8c54:	959d0000 	ldrls	r0, [sp]
        1a8c58:	915a0000 	cmpls	sl, r0
        1a8c5c:	9085100a 	addls	r1, r5, sl
        1a8c60:	959d0000 	ldrls	r0, [sp]
        1a8c64:	91510000 	cmpls	r1, r0
        1a8c68:	83a08fa6 	movhi	r8, #664	; 0x298
        1a8c6c:	82488b0b 	subhi	r8, r8, #11264	; 0x2c00
        1a8c70:	8a00000a 	bhi	1a8ca0 <TReservedBlockHandler::Read(unsigned long, unsigned long, void *, unsigned long)+0xd8>
        1a8c74:	e59d0014 	ldr	r0, [sp, #20]
        1a8c78:	e0800005 	add	r0, r0, r5
        1a8c7c:	e2801014 	add	r1, r0, #20	; 0x14
        1a8c80:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a8c84:	eb657df0 	bl	1b0844c <TFlashStore::$Translate(unsigned long)>
        1a8c88:	e1a01000 	mov	r1, r0
        1a8c8c:	e1a0300a 	mov	r3, sl
        1a8c90:	e1a02006 	mov	r2, r6
        1a8c94:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a8c98:	eb652b46 	bl	1af39b8 <TFlashStore::$BasicRead(unsigned long, void *, unsigned long)>
        1a8c9c:	e1a08000 	mov	r8, r0
        1a8ca0:	e28dd018 	add	sp, sp, #24	; 0x18
        1a8ca4:	e1a0000d 	mov	r0, sp
        1a8ca8:	eb68e102 	bl	1be10b8 <$ExitHandler>
        1a8cac:	ea000000 	b	1a8cb4 <TReservedBlockHandler::Read(unsigned long, unsigned long, void *, unsigned long)+0xec>
        1a8cb0:	e3a09001 	mov	r9, #1	; 0x1
        1a8cb4:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a8cb8:	eb6581ff 	bl	1b094bc <TFlashStore::$VccOff(void)>
        1a8cbc:	e5940000 	ldr	r0, [r4]
        1a8cc0:	ebfded59 	bl	12422c <TMuxStore::Release(void)>
        1a8cc4:	e3390000 	teq	r9, #0	; 0x0
        1a8cc8:	11a0000d 	movne	r0, sp
        1a8ccc:	1b68e520 	blne	1be2154 <$NextHandler>
        1a8cd0:	e1a00008 	mov	r0, r8
        1a8cd4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TReservedBlockHandler::GetObjectSize(unsigned long, unsigned long *)
 * Address: 001a8cd8
 */
TReservedBlockHandler::GetObjectSize(unsigned long, unsigned long *) {
    /*
        1a8cd8:	e1a0c00d 	mov	ip, sp
        1a8cdc:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1a8ce0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a8ce4:	e1a04000 	mov	r4, r0
        1a8ce8:	e1a06001 	mov	r6, r1
        1a8cec:	e1a05002 	mov	r5, r2
        1a8cf0:	e3a08000 	mov	r8, #0	; 0x0
        1a8cf4:	e5900000 	ldr	r0, [r0]
        1a8cf8:	ebfded48 	bl	124220 <TMuxStore::Acquire(void)>
        1a8cfc:	e3a00000 	mov	r0, #0	; 0x0
        1a8d00:	e3a07000 	mov	r7, #0	; 0x0
        1a8d04:	e52d006c 	str	r0, [sp, -#108]!
        1a8d08:	e28d0008 	add	r0, sp, #8	; 0x8
        1a8d0c:	eb682718 	bl	1bb2974 <$setjmp>
        1a8d10:	e3300000 	teq	r0, #0	; 0x0
        1a8d14:	1a000012 	bne	1a8d64 <TReservedBlockHandler::GetObjectSize(unsigned long, unsigned long *)+0x8c>
        1a8d18:	e1a0000d 	mov	r0, sp
        1a8d1c:	eb68dcd6 	bl	1be007c <$AddExceptionHandler>
        1a8d20:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a8d24:	eb6581e5 	bl	1b094c0 <TFlashStore::$VccOn(void)>
        1a8d28:	e24dd018 	sub	sp, sp, #24	; 0x18
        1a8d2c:	e3a03001 	mov	r3, #1	; 0x1
        1a8d30:	e92d0008 	stmdb	sp!, {r3}
        1a8d34:	e28d3018 	add	r3, sp, #24	; 0x18
        1a8d38:	e28d2004 	add	r2, sp, #4	; 0x4
        1a8d3c:	e1a01006 	mov	r1, r6
        1a8d40:	e1a00004 	mov	r0, r4
        1a8d44:	eb667dc5 	bl	1b48460 <TReservedBlockHandler::$FindObject(unsigned long, SReservedObjectHeader *, unsigned long *, unsigned char)>
        1a8d48:	e1a08000 	mov	r8, r0
        1a8d4c:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        1a8d50:	e5850000 	str	r0, [r5]
        1a8d54:	e28dd018 	add	sp, sp, #24	; 0x18
        1a8d58:	e1a0000d 	mov	r0, sp
        1a8d5c:	eb68e0d5 	bl	1be10b8 <$ExitHandler>
        1a8d60:	ea000000 	b	1a8d68 <TReservedBlockHandler::GetObjectSize(unsigned long, unsigned long *)+0x90>
        1a8d64:	e3a07001 	mov	r7, #1	; 0x1
        1a8d68:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a8d6c:	eb6581d2 	bl	1b094bc <TFlashStore::$VccOff(void)>
        1a8d70:	e5940000 	ldr	r0, [r4]
        1a8d74:	ebfded2c 	bl	12422c <TMuxStore::Release(void)>
        1a8d78:	e3370000 	teq	r7, #0	; 0x0
        1a8d7c:	11a0000d 	movne	r0, sp
        1a8d80:	1b68e4f3 	blne	1be2154 <$NextHandler>
        1a8d84:	e1a00008 	mov	r0, r8
        1a8d88:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TReservedBlockHandler::GetObjectType(unsigned long, unsigned long *)
 * Address: 001a8d8c
 */
TReservedBlockHandler::GetObjectType(unsigned long, unsigned long *) {
    /*
        1a8d8c:	e1a0c00d 	mov	ip, sp
        1a8d90:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1a8d94:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a8d98:	e1a04000 	mov	r4, r0
        1a8d9c:	e1a06001 	mov	r6, r1
        1a8da0:	e1a05002 	mov	r5, r2
        1a8da4:	e3a08000 	mov	r8, #0	; 0x0
        1a8da8:	e5900000 	ldr	r0, [r0]
        1a8dac:	ebfded1b 	bl	124220 <TMuxStore::Acquire(void)>
        1a8db0:	e3a00000 	mov	r0, #0	; 0x0
        1a8db4:	e3a07000 	mov	r7, #0	; 0x0
        1a8db8:	e52d006c 	str	r0, [sp, -#108]!
        1a8dbc:	e28d0008 	add	r0, sp, #8	; 0x8
        1a8dc0:	eb6826eb 	bl	1bb2974 <$setjmp>
        1a8dc4:	e3300000 	teq	r0, #0	; 0x0
        1a8dc8:	1a000013 	bne	1a8e1c <TReservedBlockHandler::GetObjectType(unsigned long, unsigned long *)+0x90>
        1a8dcc:	e1a0000d 	mov	r0, sp
        1a8dd0:	eb68dca9 	bl	1be007c <$AddExceptionHandler>
        1a8dd4:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a8dd8:	eb6581b8 	bl	1b094c0 <TFlashStore::$VccOn(void)>
        1a8ddc:	e24dd018 	sub	sp, sp, #24	; 0x18
        1a8de0:	e3a03001 	mov	r3, #1	; 0x1
        1a8de4:	e92d0008 	stmdb	sp!, {r3}
        1a8de8:	e28d3018 	add	r3, sp, #24	; 0x18
        1a8dec:	e28d2004 	add	r2, sp, #4	; 0x4
        1a8df0:	e1a01006 	mov	r1, r6
        1a8df4:	e1a00004 	mov	r0, r4
        1a8df8:	eb667d98 	bl	1b48460 <TReservedBlockHandler::$FindObject(unsigned long, SReservedObjectHeader *, unsigned long *, unsigned char)>
        1a8dfc:	e28dd004 	add	sp, sp, #4	; 0x4
        1a8e00:	e1a08000 	mov	r8, r0
        1a8e04:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1a8e08:	e5850000 	str	r0, [r5]
        1a8e0c:	e28dd018 	add	sp, sp, #24	; 0x18
        1a8e10:	e1a0000d 	mov	r0, sp
        1a8e14:	eb68e0a7 	bl	1be10b8 <$ExitHandler>
        1a8e18:	ea000000 	b	1a8e20 <TReservedBlockHandler::GetObjectType(unsigned long, unsigned long *)+0x94>
        1a8e1c:	e3a07001 	mov	r7, #1	; 0x1
        1a8e20:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a8e24:	eb6581a4 	bl	1b094bc <TFlashStore::$VccOff(void)>
        1a8e28:	e5940000 	ldr	r0, [r4]
        1a8e2c:	ebfdecfe 	bl	12422c <TMuxStore::Release(void)>
        1a8e30:	e3370000 	teq	r7, #0	; 0x0
        1a8e34:	11a0000d 	movne	r0, sp
        1a8e38:	1b68e4c5 	blne	1be2154 <$NextHandler>
        1a8e3c:	e1a00008 	mov	r0, r8
        1a8e40:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TReservedBlockHandler::CommitObject(unsigned long)
 * Address: 001a8e44
 */
TReservedBlockHandler::CommitObject(unsigned long) {
    /*
        1a8e44:	e1a0c00d 	mov	ip, sp
        1a8e48:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1a8e4c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a8e50:	e1a04000 	mov	r4, r0
        1a8e54:	e1a05001 	mov	r5, r1
        1a8e58:	e3a06000 	mov	r6, #0	; 0x0
        1a8e5c:	e5900000 	ldr	r0, [r0]
        1a8e60:	ebfdecee 	bl	124220 <TMuxStore::Acquire(void)>
        1a8e64:	e3a00000 	mov	r0, #0	; 0x0
        1a8e68:	e3a07000 	mov	r7, #0	; 0x0
        1a8e6c:	e52d006c 	str	r0, [sp, -#108]!
        1a8e70:	e28d0008 	add	r0, sp, #8	; 0x8
        1a8e74:	eb6826be 	bl	1bb2974 <$setjmp>
        1a8e78:	e3300000 	teq	r0, #0	; 0x0
        1a8e7c:	1a000022 	bne	1a8f0c <TReservedBlockHandler::CommitObject(unsigned long)+0xc8>
        1a8e80:	e1a0000d 	mov	r0, sp
        1a8e84:	eb68dc7c 	bl	1be007c <$AddExceptionHandler>
        1a8e88:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a8e8c:	eb658190 	bl	1b094d4 <TFlashStore::$VppOn(void)>
        1a8e90:	e24dd018 	sub	sp, sp, #24	; 0x18
        1a8e94:	e3a03000 	mov	r3, #0	; 0x0
        1a8e98:	e92d0008 	stmdb	sp!, {r3}
        1a8e9c:	e28d3018 	add	r3, sp, #24	; 0x18
        1a8ea0:	e28d2004 	add	r2, sp, #4	; 0x4
        1a8ea4:	e1a01005 	mov	r1, r5
        1a8ea8:	e1a00004 	mov	r0, r4
        1a8eac:	eb667d6b 	bl	1b48460 <TReservedBlockHandler::$FindObject(unsigned long, SReservedObjectHeader *, unsigned long *, unsigned char)>
        1a8eb0:	e28dd004 	add	sp, sp, #4	; 0x4
        1a8eb4:	e1b06000 	movs	r6, r0
        1a8eb8:	1a00000f 	bne	1a8efc <TReservedBlockHandler::CommitObject(unsigned long)+0xb8>
        1a8ebc:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a8ec0:	e5900048 	ldr	r0, [r0, #72]
        1a8ec4:	e2000001 	and	r0, r0, #1	; 0x1
        1a8ec8:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        1a8ecc:	e3c11102 	bic	r1, r1, #-2147483648	; 0x80000000
        1a8ed0:	e1810f80 	orr	r0, r1, r0, lsl #31
        1a8ed4:	e58d0008 	str	r0, [sp, #8]	; fField8
        1a8ed8:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a8edc:	e59d1014 	ldr	r1, [sp, #20]
        1a8ee0:	eb657d59 	bl	1b0844c <TFlashStore::$Translate(unsigned long)>
        1a8ee4:	e1a01000 	mov	r1, r0
        1a8ee8:	e1a0200d 	mov	r2, sp
        1a8eec:	e3a03014 	mov	r3, #20	; 0x14
        1a8ef0:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a8ef4:	eb652ab1 	bl	1af39c0 <TFlashStore::$BasicWrite(unsigned long, void *, unsigned long)>
        1a8ef8:	e1a06000 	mov	r6, r0
        1a8efc:	e28dd018 	add	sp, sp, #24	; 0x18
        1a8f00:	e1a0000d 	mov	r0, sp
        1a8f04:	eb68e06b 	bl	1be10b8 <$ExitHandler>
        1a8f08:	ea000000 	b	1a8f10 <TReservedBlockHandler::CommitObject(unsigned long)+0xcc>
        1a8f0c:	e3a07001 	mov	r7, #1	; 0x1
        1a8f10:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a8f14:	eb65816b 	bl	1b094c8 <TFlashStore::$VppOff(void)>
        1a8f18:	e5940000 	ldr	r0, [r4]
        1a8f1c:	ebfdecc2 	bl	12422c <TMuxStore::Release(void)>
        1a8f20:	e3370000 	teq	r7, #0	; 0x0
        1a8f24:	11a0000d 	movne	r0, sp
        1a8f28:	1b68e489 	blne	1be2154 <$NextHandler>
        1a8f2c:	e1a00006 	mov	r0, r6
        1a8f30:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TReservedBlockHandler::ReplaceObject(unsigned long, unsigned long)
 * Address: 001a8f34
 */
TReservedBlockHandler::ReplaceObject(unsigned long, unsigned long) {
    /*
        1a8f34:	e1a0c00d 	mov	ip, sp
        1a8f38:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1a8f3c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a8f40:	e1a04000 	mov	r4, r0
        1a8f44:	e1a06001 	mov	r6, r1
        1a8f48:	e1a05002 	mov	r5, r2
        1a8f4c:	e3a07000 	mov	r7, #0	; 0x0
        1a8f50:	e5900000 	ldr	r0, [r0]
        1a8f54:	ebfdecb1 	bl	124220 <TMuxStore::Acquire(void)>
        1a8f58:	e3a00000 	mov	r0, #0	; 0x0
        1a8f5c:	e3a08000 	mov	r8, #0	; 0x0
        1a8f60:	e52d006c 	str	r0, [sp, -#108]!
        1a8f64:	e28d0008 	add	r0, sp, #8	; 0x8
        1a8f68:	eb682681 	bl	1bb2974 <$setjmp>
        1a8f6c:	e3300000 	teq	r0, #0	; 0x0
        1a8f70:	1a00003d 	bne	1a906c <TReservedBlockHandler::ReplaceObject(unsigned long, unsigned long)+0x138>
        1a8f74:	e1a0000d 	mov	r0, sp
        1a8f78:	eb68dc3f 	bl	1be007c <$AddExceptionHandler>
        1a8f7c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a8f80:	eb658153 	bl	1b094d4 <TFlashStore::$VppOn(void)>
        1a8f84:	e24dd030 	sub	sp, sp, #48	; 0x30
        1a8f88:	e3a03001 	mov	r3, #1	; 0x1
        1a8f8c:	e92d0008 	stmdb	sp!, {r3}
        1a8f90:	e28d3030 	add	r3, sp, #48	; 0x30
        1a8f94:	e28d2018 	add	r2, sp, #24	; 0x18
        1a8f98:	e1a01006 	mov	r1, r6
        1a8f9c:	e1a00004 	mov	r0, r4
        1a8fa0:	eb667d2e 	bl	1b48460 <TReservedBlockHandler::$FindObject(unsigned long, SReservedObjectHeader *, unsigned long *, unsigned char)>
        1a8fa4:	e28dd004 	add	sp, sp, #4	; 0x4
        1a8fa8:	e1b07000 	movs	r7, r0
        1a8fac:	1a00002a 	bne	1a905c <TReservedBlockHandler::ReplaceObject(unsigned long, unsigned long)+0x128>
        1a8fb0:	e3a03000 	mov	r3, #0	; 0x0
        1a8fb4:	e92d0008 	stmdb	sp!, {r3}
        1a8fb8:	e28d302c 	add	r3, sp, #44	; 0x2c
        1a8fbc:	e28d2004 	add	r2, sp, #4	; 0x4
        1a8fc0:	e1a01005 	mov	r1, r5
        1a8fc4:	e1a00004 	mov	r0, r4
        1a8fc8:	eb667d24 	bl	1b48460 <TReservedBlockHandler::$FindObject(unsigned long, SReservedObjectHeader *, unsigned long *, unsigned char)>
        1a8fcc:	e28dd004 	add	sp, sp, #4	; 0x4
        1a8fd0:	e1b07000 	movs	r7, r0
        1a8fd4:	1a000020 	bne	1a905c <TReservedBlockHandler::ReplaceObject(unsigned long, unsigned long)+0x128>
        1a8fd8:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a8fdc:	e5900048 	ldr	r0, [r0, #72]
        1a8fe0:	e2000001 	and	r0, r0, #1	; 0x1
        1a8fe4:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        1a8fe8:	e3c11102 	bic	r1, r1, #-2147483648	; 0x80000000
        1a8fec:	e1810f80 	orr	r0, r1, r0, lsl #31
        1a8ff0:	e58d0008 	str	r0, [sp, #8]	; fField8
        1a8ff4:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a8ff8:	e59d1028 	ldr	r1, [sp, #40]
        1a8ffc:	eb657d12 	bl	1b0844c <TFlashStore::$Translate(unsigned long)>
        1a9000:	e1a01000 	mov	r1, r0
        1a9004:	e1a0200d 	mov	r2, sp
        1a9008:	e3a03014 	mov	r3, #20	; 0x14
        1a900c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a9010:	eb652a6a 	bl	1af39c0 <TFlashStore::$BasicWrite(unsigned long, void *, unsigned long)>
        1a9014:	e1b07000 	movs	r7, r0
        1a9018:	1a00000f 	bne	1a905c <TReservedBlockHandler::ReplaceObject(unsigned long, unsigned long)+0x128>
        1a901c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a9020:	e5900048 	ldr	r0, [r0, #72]
        1a9024:	e2000001 	and	r0, r0, #1	; 0x1
        1a9028:	e59d101c 	ldr	r1, [sp, #28]
        1a902c:	e3c11101 	bic	r1, r1, #1073741824	; 0x40000000
        1a9030:	e1810f00 	orr	r0, r1, r0, lsl #30
        1a9034:	e58d001c 	str	r0, [sp, #28]
        1a9038:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a903c:	e59d102c 	ldr	r1, [sp, #44]
        1a9040:	eb657d01 	bl	1b0844c <TFlashStore::$Translate(unsigned long)>
        1a9044:	e1a01000 	mov	r1, r0
        1a9048:	e28d2014 	add	r2, sp, #20	; 0x14
        1a904c:	e3a03014 	mov	r3, #20	; 0x14
        1a9050:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a9054:	eb652a59 	bl	1af39c0 <TFlashStore::$BasicWrite(unsigned long, void *, unsigned long)>
        1a9058:	e1a07000 	mov	r7, r0
        1a905c:	e28dd030 	add	sp, sp, #48	; 0x30
        1a9060:	e1a0000d 	mov	r0, sp
        1a9064:	eb68e013 	bl	1be10b8 <$ExitHandler>
        1a9068:	ea000000 	b	1a9070 <TReservedBlockHandler::ReplaceObject(unsigned long, unsigned long)+0x13c>
        1a906c:	e3a08001 	mov	r8, #1	; 0x1
        1a9070:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a9074:	eb658113 	bl	1b094c8 <TFlashStore::$VppOff(void)>
        1a9078:	e5940000 	ldr	r0, [r4]
        1a907c:	ebfdec6a 	bl	12422c <TMuxStore::Release(void)>
        1a9080:	e3380000 	teq	r8, #0	; 0x0
        1a9084:	11a0000d 	movne	r0, sp
        1a9088:	1b68e431 	blne	1be2154 <$NextHandler>
        1a908c:	e1a00007 	mov	r0, r7
        1a9090:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TReservedBlockHandler::DeleteObject(unsigned long)
 * Address: 001a9094
 */
TReservedBlockHandler::DeleteObject(unsigned long) {
    /*
        1a9094:	e1a0c00d 	mov	ip, sp
        1a9098:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1a909c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a90a0:	e1a04000 	mov	r4, r0
        1a90a4:	e1a05001 	mov	r5, r1
        1a90a8:	e3a06000 	mov	r6, #0	; 0x0
        1a90ac:	e5900000 	ldr	r0, [r0]
        1a90b0:	ebfdec5a 	bl	124220 <TMuxStore::Acquire(void)>
        1a90b4:	e3a00000 	mov	r0, #0	; 0x0
        1a90b8:	e3a07000 	mov	r7, #0	; 0x0
        1a90bc:	e52d006c 	str	r0, [sp, -#108]!
        1a90c0:	e28d0008 	add	r0, sp, #8	; 0x8
        1a90c4:	eb68262a 	bl	1bb2974 <$setjmp>
        1a90c8:	e3300000 	teq	r0, #0	; 0x0
        1a90cc:	1a000022 	bne	1a915c <TReservedBlockHandler::DeleteObject(unsigned long)+0xc8>
        1a90d0:	e1a0000d 	mov	r0, sp
        1a90d4:	eb68dbe8 	bl	1be007c <$AddExceptionHandler>
        1a90d8:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a90dc:	eb6580fc 	bl	1b094d4 <TFlashStore::$VppOn(void)>
        1a90e0:	e24dd018 	sub	sp, sp, #24	; 0x18
        1a90e4:	e3a03001 	mov	r3, #1	; 0x1
        1a90e8:	e92d0008 	stmdb	sp!, {r3}
        1a90ec:	e28d3018 	add	r3, sp, #24	; 0x18
        1a90f0:	e28d2004 	add	r2, sp, #4	; 0x4
        1a90f4:	e1a01005 	mov	r1, r5
        1a90f8:	e1a00004 	mov	r0, r4
        1a90fc:	eb667cd7 	bl	1b48460 <TReservedBlockHandler::$FindObject(unsigned long, SReservedObjectHeader *, unsigned long *, unsigned char)>
        1a9100:	e28dd004 	add	sp, sp, #4	; 0x4
        1a9104:	e1b06000 	movs	r6, r0
        1a9108:	1a00000f 	bne	1a914c <TReservedBlockHandler::DeleteObject(unsigned long)+0xb8>
        1a910c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a9110:	e5900048 	ldr	r0, [r0, #72]
        1a9114:	e2000001 	and	r0, r0, #1	; 0x1
        1a9118:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        1a911c:	e3c11101 	bic	r1, r1, #1073741824	; 0x40000000
        1a9120:	e1810f00 	orr	r0, r1, r0, lsl #30
        1a9124:	e58d0008 	str	r0, [sp, #8]	; fField8
        1a9128:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a912c:	e59d1014 	ldr	r1, [sp, #20]
        1a9130:	eb657cc5 	bl	1b0844c <TFlashStore::$Translate(unsigned long)>
        1a9134:	e1a01000 	mov	r1, r0
        1a9138:	e1a0200d 	mov	r2, sp
        1a913c:	e3a03014 	mov	r3, #20	; 0x14
        1a9140:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a9144:	eb652a1d 	bl	1af39c0 <TFlashStore::$BasicWrite(unsigned long, void *, unsigned long)>
        1a9148:	e1a06000 	mov	r6, r0
        1a914c:	e28dd018 	add	sp, sp, #24	; 0x18
        1a9150:	e1a0000d 	mov	r0, sp
        1a9154:	eb68dfd7 	bl	1be10b8 <$ExitHandler>
        1a9158:	ea000000 	b	1a9160 <TReservedBlockHandler::DeleteObject(unsigned long)+0xcc>
        1a915c:	e3a07001 	mov	r7, #1	; 0x1
        1a9160:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a9164:	eb6580d7 	bl	1b094c8 <TFlashStore::$VppOff(void)>
        1a9168:	e5940000 	ldr	r0, [r4]
        1a916c:	ebfdec2e 	bl	12422c <TMuxStore::Release(void)>
        1a9170:	e3370000 	teq	r7, #0	; 0x0
        1a9174:	11a0000d 	movne	r0, sp
        1a9178:	1b68e3f5 	blne	1be2154 <$NextHandler>
        1a917c:	e1a00006 	mov	r0, r6
        1a9180:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TReservedBlockHandler::FindObject(unsigned long, unsigned long *)
 * Address: 001a9184
 */
TReservedBlockHandler::FindObject(unsigned long, unsigned long *) {
    /*
        1a9184:	e1a0c00d 	mov	ip, sp
        1a9188:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1a918c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a9190:	e1a04000 	mov	r4, r0
        1a9194:	e1a05001 	mov	r5, r1
        1a9198:	e3a07000 	mov	r7, #0	; 0x0
        1a919c:	e3a09000 	mov	r9, #0	; 0x0
        1a91a0:	e5900000 	ldr	r0, [r0]
        1a91a4:	ebfdec1d 	bl	124220 <TMuxStore::Acquire(void)>
        1a91a8:	e3a00000 	mov	r0, #0	; 0x0
        1a91ac:	e52d006c 	str	r0, [sp, -#108]!
        1a91b0:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        1a91b4:	e28d000c 	add	r0, sp, #12	; 0xc
        1a91b8:	eb6825ed 	bl	1bb2974 <$setjmp>
        1a91bc:	e3300000 	teq	r0, #0	; 0x0
        1a91c0:	1a000052 	bne	1a9310 <TReservedBlockHandler::FindObject(unsigned long, unsigned long *)+0x18c>
        1a91c4:	e28d0004 	add	r0, sp, #4	; 0x4
        1a91c8:	eb68dbab 	bl	1be007c <$AddExceptionHandler>
        1a91cc:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a91d0:	eb6580ba 	bl	1b094c0 <TFlashStore::$VccOn(void)>
        1a91d4:	e24dd004 	sub	sp, sp, #4	; 0x4
        1a91d8:	e3a06000 	mov	r6, #0	; 0x0
        1a91dc:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a91e0:	eb657883 	bl	1b073f4 <TFlashStore::$StoreCapacity(void)>
        1a91e4:	e58d0000 	str	r0, [sp]
        1a91e8:	ea00003f 	b	1a92ec <TReservedBlockHandler::FindObject(unsigned long, unsigned long *)+0x168>
        1a91ec:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a91f0:	e590102c 	ldr	r1, [r0, #44]
        1a91f4:	e5900058 	ldr	r0, [r0, #88]
        1a91f8:	e1a00036 	mov	r0, r6, lsr r0
        1a91fc:	e7910100 	ldr	r0, [r1, r0, lsl #2]
        1a9200:	eb6680a4 	bl	1b49498 <TFlashBlock::$IsReserved(void)>
        1a9204:	e3300000 	teq	r0, #0	; 0x0
        1a9208:	0a000032 	beq	1a92d8 <TReservedBlockHandler::FindObject(unsigned long, unsigned long *)+0x154>
        1a920c:	e1a01006 	mov	r1, r6
        1a9210:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a9214:	eb657c8c 	bl	1b0844c <TFlashStore::$Translate(unsigned long)>
        1a9218:	e5941004 	ldr	r1, [r4, #4]	; fField4
        1a921c:	e5912050 	ldr	r2, [r1, #80]
        1a9220:	e0822000 	add	r2, r2, r0
        1a9224:	e5d1103d 	ldrb	r1, [r1, #61]
        1a9228:	e3310000 	teq	r1, #0	; 0x0
        1a922c:	03a01b01 	moveq	r1, #1024	; 0x400
        1a9230:	13a01c01 	movne	r1, #256	; 0x100
        1a9234:	e042a001 	sub	sl, r2, r1
        1a9238:	e2808008 	add	r8, r0, #8	; 0x8
        1a923c:	e158000a 	cmp	r8, sl
        1a9240:	2a000024 	bcs	1a92d8 <TReservedBlockHandler::FindObject(unsigned long, unsigned long *)+0x154>
        1a9244:	e24dd014 	sub	sp, sp, #20	; 0x14
        1a9248:	e1a0200d 	mov	r2, sp
        1a924c:	e1a01008 	mov	r1, r8
        1a9250:	e3a03014 	mov	r3, #20	; 0x14
        1a9254:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a9258:	eb6529d6 	bl	1af39b8 <TFlashStore::$BasicRead(unsigned long, void *, unsigned long)>
        1a925c:	e1b07000 	movs	r7, r0
        1a9260:	1a000002 	bne	1a9270 <TReservedBlockHandler::FindObject(unsigned long, unsigned long *)+0xec>
        1a9264:	e59d0000 	ldr	r0, [sp]
        1a9268:	e3700001 	cmn	r0, #1	; 0x1
        1a926c:	1a000001 	bne	1a9278 <TReservedBlockHandler::FindObject(unsigned long, unsigned long *)+0xf4>
        1a9270:	e28dd014 	add	sp, sp, #20	; 0x14
        1a9274:	ea000017 	b	1a92d8 <TReservedBlockHandler::FindObject(unsigned long, unsigned long *)+0x154>
        1a9278:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1a927c:	e1300005 	teq	r0, r5
        1a9280:	059d0008 	ldreq	r0, [sp, #8]	; fField8
        1a9284:	02000102 	andeq	r0, r0, #-2147483648	; 0x80000000
        1a9288:	03300000 	teqeq	r0, #0	; 0x0
        1a928c:	1a00000c 	bne	1a92c4 <TReservedBlockHandler::FindObject(unsigned long, unsigned long *)+0x140>
        1a9290:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        1a9294:	e3100101 	tst	r0, #1073741824	; 0x40000000
        1a9298:	0a000009 	beq	1a92c4 <TReservedBlockHandler::FindObject(unsigned long, unsigned long *)+0x140>
        1a929c:	e3a09001 	mov	r9, #1	; 0x1
        1a92a0:	e59d200c 	ldr	r2, [sp, #12]
        1a92a4:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a92a8:	e5900058 	ldr	r0, [r0, #88]
        1a92ac:	e1a01036 	mov	r1, r6, lsr r0
        1a92b0:	e1a00004 	mov	r0, r4
        1a92b4:	eb667c67 	bl	1b48458 <TReservedBlockHandler::$GetReservedId(unsigned long, unsigned long)>
        1a92b8:	e51b202c 	ldr	r2, [fp, -#44]
        1a92bc:	e5820000 	str	r0, [r2]
        1a92c0:	eaffffea 	b	1a9270 <TReservedBlockHandler::FindObject(unsigned long, unsigned long *)+0xec>
        1a92c4:	e49d0014 	ldr	r0, [sp], #20
        1a92c8:	e0880000 	add	r0, r8, r0
        1a92cc:	e2808014 	add	r8, r0, #20	; 0x14
        1a92d0:	e158000a 	cmp	r8, sl
        1a92d4:	3affffda 	bcc	1a9244 <TReservedBlockHandler::FindObject(unsigned long, unsigned long *)+0xc0>
        1a92d8:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a92dc:	e5900050 	ldr	r0, [r0, #80]
        1a92e0:	e0806006 	add	r6, r0, r6
        1a92e4:	e3390000 	teq	r9, #0	; 0x0
        1a92e8:	1a000004 	bne	1a9300 <TReservedBlockHandler::FindObject(unsigned long, unsigned long *)+0x17c>
        1a92ec:	e59d0000 	ldr	r0, [sp]
        1a92f0:	e1560000 	cmp	r6, r0
        1a92f4:	2a000001 	bcs	1a9300 <TReservedBlockHandler::FindObject(unsigned long, unsigned long *)+0x17c>
        1a92f8:	e3370000 	teq	r7, #0	; 0x0
        1a92fc:	0affffba 	beq	1a91ec <TReservedBlockHandler::FindObject(unsigned long, unsigned long *)+0x68>
        1a9300:	e28dd004 	add	sp, sp, #4	; 0x4
        1a9304:	e28d0004 	add	r0, sp, #4	; 0x4
        1a9308:	eb68df6a 	bl	1be10b8 <$ExitHandler>
        1a930c:	ea000001 	b	1a9318 <TReservedBlockHandler::FindObject(unsigned long, unsigned long *)+0x194>
        1a9310:	e3a00001 	mov	r0, #1	; 0x1
        1a9314:	e58d0000 	str	r0, [sp]
        1a9318:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a931c:	eb658066 	bl	1b094bc <TFlashStore::$VccOff(void)>
        1a9320:	e5940000 	ldr	r0, [r4]
        1a9324:	ebfdebc0 	bl	12422c <TMuxStore::Release(void)>
        1a9328:	e59d0000 	ldr	r0, [sp]
        1a932c:	e3300000 	teq	r0, #0	; 0x0
        1a9330:	128d0004 	addne	r0, sp, #4	; 0x4
        1a9334:	1b68e386 	blne	1be2154 <$NextHandler>
        1a9338:	e28dd070 	add	sp, sp, #112	; 0x70
        1a933c:	e3370000 	teq	r7, #0	; 0x0
        1a9340:	03390000 	teqeq	r9, #0	; 0x0
        1a9344:	03a07092 	moveq	r7, #146	; 0x92
        1a9348:	02477c2a 	subeq	r7, r7, #10752	; 0x2a00
        1a934c:	e1a00007 	mov	r0, r7
        1a9350:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

