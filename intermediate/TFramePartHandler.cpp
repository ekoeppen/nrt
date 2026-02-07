#include "include/TFramePartHandler.h"

/**
 * Symbol: TFramePartHandler::Install(PartId const &, SourceType, PartInfo *)
 * Address: 000d118c
 */
TFramePartHandler::Install(PartId const &, SourceType, PartInfo *) {
    /*
         d118c:	e1a0c00d 	mov	ip, sp
         d1190:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         d1194:	e24cb004 	sub	fp, ip, #4	; 0x4
         d1198:	e1a06002 	mov	r6, r2
         d119c:	e1a05003 	mov	r5, r3
         d11a0:	e1a04000 	mov	r4, r0
         d11a4:	e1a07001 	mov	r7, r1
         d11a8:	e59ba004 	ldr	sl, [fp, #4]
         d11ac:	e24dd004 	sub	sp, sp, #4	; 0x4
         d11b0:	e3a00002 	mov	r0, #2	; 0x2
         d11b4:	eb6bc3e4 	bl	1bc214c <$AllocateRefHandle(long)>
         d11b8:	e3a09000 	mov	r9, #0	; 0x0
         d11bc:	e3a08000 	mov	r8, #0	; 0x0
         d11c0:	e40d0004 	str	r0, [sp], -#4
         d11c4:	e40d5004 	str	r5, [sp], -#4
         d11c8:	e58d6000 	str	r6, [sp]
         d11cc:	e4dd0008 	ldrb	r0, [sp], #8
         d11d0:	e3100001 	tst	r0, #1	; 0x1
         d11d4:	1a000007 	bne	d11f8 <TFramePartHandler::Install(PartId const &, SourceType, PartInfo *)+0x6c>
         d11d8:	e24dd004 	sub	sp, sp, #4	; 0x4
         d11dc:	e1a0100d 	mov	r1, sp
         d11e0:	e1a00004 	mov	r0, r4
         d11e4:	eb6bfd93 	bl	1bd0838 <TPartHandler::$Copy(void *)>
         d11e8:	e1a09000 	mov	r9, r0
         d11ec:	e89d0003 	ldmia	sp, {r0, r1}
         d11f0:	e5810000 	str	r0, [r1]
         d11f4:	ea000072 	b	d13c4 <TFramePartHandler::Install(PartId const &, SourceType, PartInfo *)+0x238>
         d11f8:	e1a00004 	mov	r0, r4
         d11fc:	eb6c0e0f 	bl	1bd4a40 <TPartHandler::$GetSourcePtr(void)>
         d1200:	e1a08000 	mov	r8, r0
         d1204:	e5da0022 	ldrb	r0, [sl, #34]
         d1208:	e3300000 	teq	r0, #0	; 0x0
         d120c:	0a000032 	beq	d12dc <TFramePartHandler::Install(PartId const &, SourceType, PartInfo *)+0x150>
         d1210:	e59a0018 	ldr	r0, [sl, #24]
         d1214:	e28f1f2d 	add	r1, pc, #180	; 0xb4
         d1218:	eb6b9222 	bl	1bb5aa8 <$strcmp>
         d121c:	e3300000 	teq	r0, #0	; 0x0
         d1220:	1a00002d 	bne	d12dc <TFramePartHandler::Install(PartId const &, SourceType, PartInfo *)+0x150>
         d1224:	e24dd02c 	sub	sp, sp, #44	; 0x2c
         d1228:	e28d0004 	add	r0, sp, #4	; 0x4
         d122c:	eb6c4bf4 	bl	1be4204 <CBufferSegment::$__ct(void)>
         d1230:	e3e03000 	mvn	r3, #0	; 0x0
         d1234:	e3a02000 	mov	r2, #0	; 0x0
         d1238:	e92d000c 	stmdb	sp!, {r2, r3}
         d123c:	e1a00004 	mov	r0, r4
         d1240:	eb6c0dfe 	bl	1bd4a40 <TPartHandler::$GetSourcePtr(void)>
         d1244:	e1a01000 	mov	r1, r0
         d1248:	e28d000c 	add	r0, sp, #12	; 0xc
         d124c:	e3a03000 	mov	r3, #0	; 0x0
         d1250:	e59a2008 	ldr	r2, [sl, #8]
         d1254:	eb6c6094 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
         d1258:	e24dd008 	sub	sp, sp, #8	; 0x8
         d125c:	e1a0000d 	mov	r0, sp
         d1260:	eb65aad6 	bl	1a3bdc0 <MemoryPipe::$__ct(void)>
         d1264:	e28d1014 	add	r1, sp, #20	; 0x14
         d1268:	e1a0000d 	mov	r0, sp
         d126c:	e3a03000 	mov	r3, #0	; 0x0
         d1270:	e3a02000 	mov	r2, #0	; 0x0
         d1274:	eb6c6086 	bl	1be9494 <CBufferPipe::$Init(CBufferSegment *, CBufferSegment *, unsigned char)>
         d1278:	e1a0300a 	mov	r3, sl
         d127c:	e1a0200d 	mov	r2, sp
         d1280:	e28d1010 	add	r1, sp, #16	; 0x10
         d1284:	e1a00004 	mov	r0, r4
         d1288:	e594c000 	ldr	ip, [r4]
         d128c:	e1a0e00f 	mov	lr, pc
         d1290:	e28cf014 	add	pc, ip, #20	; 0x14
         d1294:	e1a09000 	mov	r9, r0
         d1298:	e59d0010 	ldr	r0, [sp, #16]
         d129c:	e59d103c 	ldr	r1, [sp, #60]
         d12a0:	e5810000 	str	r0, [r1]
         d12a4:	e1a0000d 	mov	r0, sp
         d12a8:	e3a01000 	mov	r1, #0	; 0x0
         d12ac:	e1a0e00f 	mov	lr, pc
         d12b0:	e59df000 	ldr	pc, [sp]
         d12b4:	e28dd010 	add	sp, sp, #16	; 0x10
         d12b8:	e28d0004 	add	r0, sp, #4	; 0x4
         d12bc:	e3a01000 	mov	r1, #0	; 0x0
         d12c0:	e1a0e00f 	mov	lr, pc
         d12c4:	e59df004 	ldr	pc, [sp, #4]
         d12c8:	e28dd02c 	add	sp, sp, #44	; 0x2c
         d12cc:	ea00003d 	b	d13c8 <TFramePartHandler::Install(PartId const &, SourceType, PartInfo *)+0x23c>
         d12d0:	73747265 	cmnvc	r4, #1342177286	; 0x50000006
         d12d4:	616d6564 	cmnvs	sp, r4, ror #10
         d12d8:	00000000 	andeq	r0, r0, r0
         d12dc:	e1a00008 	mov	r0, r8
         d12e0:	eb660dd8 	bl	1a54a48 <$FramePartToplevelFrame(void *)>
         d12e4:	e59d1000 	ldr	r1, [sp]
         d12e8:	e5810000 	str	r0, [r1]
         d12ec:	e3300002 	teq	r0, #2	; 0x2
         d12f0:	0a00003c 	beq	d13e8 <TFramePartHandler::Install(PartId const &, SourceType, PartInfo *)+0x25c>
         d12f4:	e24dd004 	sub	sp, sp, #4	; 0x4
         d12f8:	e59f1080 	ldr	r1, [pc, #80]	; d1380 <TFramePartHandler::Install(PartId const &, SourceType, PartInfo *)+0x1f4>
         d12fc:	e5911000 	ldr	r1, [r1]
         d1300:	e5911000 	ldr	r1, [r1]
         d1304:	eb6bcbd5 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         d1308:	eb6bc38f 	bl	1bc214c <$AllocateRefHandle(long)>
         d130c:	e58d0000 	str	r0, [sp]
         d1310:	e5900000 	ldr	r0, [r0]
         d1314:	e3300002 	teq	r0, #2	; 0x2
         d1318:	11a01008 	movne	r1, r8
         d131c:	11a0000d 	movne	r0, sp
         d1320:	1b6611e3 	blne	1a55ab4 <$InstallExportTables(RefVar const &, void *)>
         d1324:	e358050e 	cmp	r8, #58720256	; 0x3800000
         d1328:	3a000023 	bcc	d13bc <TFramePartHandler::Install(PartId const &, SourceType, PartInfo *)+0x230>
         d132c:	e24dd004 	sub	sp, sp, #4	; 0x4
         d1330:	e59d0008 	ldr	r0, [sp, #8]
         d1334:	e5900000 	ldr	r0, [r0]
         d1338:	e59f1044 	ldr	r1, [pc, #44]	; d1384 <TFramePartHandler::Install(PartId const &, SourceType, PartInfo *)+0x1f8>
         d133c:	e5911000 	ldr	r1, [r1]
         d1340:	e5911000 	ldr	r1, [r1]
         d1344:	eb6bcbc5 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         d1348:	eb6bc37f 	bl	1bc214c <$AllocateRefHandle(long)>
         d134c:	e58d0000 	str	r0, [sp]
         d1350:	e5900000 	ldr	r0, [r0]
         d1354:	e3300002 	teq	r0, #2	; 0x2
         d1358:	0a000014 	beq	d13b0 <TFramePartHandler::Install(PartId const &, SourceType, PartInfo *)+0x224>
         d135c:	e24dd004 	sub	sp, sp, #4	; 0x4
         d1360:	e1a00008 	mov	r0, r8
         d1364:	eb6611d7 	bl	1a55ac8 <$IsInRDMSpace(unsigned long)>
         d1368:	e3300000 	teq	r0, #0	; 0x0
         d136c:	0a000005 	beq	d1388 <TFramePartHandler::Install(PartId const &, SourceType, PartInfo *)+0x1fc>
         d1370:	e1a01008 	mov	r1, r8
         d1374:	e1a0000d 	mov	r0, sp
         d1378:	eb690da8 	bl	1b14a20 <$VAddrToBase(unsigned long *, unsigned long)>
         d137c:	ea000003 	b	d1390 <TFramePartHandler::Install(PartId const &, SourceType, PartInfo *)+0x204>
         d1380:	00685308 	rsbeq	r5, r8, r8, lsl #6
         d1384:	00685330 	rsbeq	r5, r8, r0, lsr r3
         d1388:	e3a00000 	mov	r0, #0	; 0x0
         d138c:	e58d0000 	str	r0, [sp]
         d1390:	e1a02008 	mov	r2, r8
         d1394:	e28d1004 	add	r1, sp, #4	; 0x4
         d1398:	e59a300c 	ldr	r3, [sl, #12]
         d139c:	e59d0000 	ldr	r0, [sp]
         d13a0:	eb6611c4 	bl	1a55ab8 <$InstallImportTable(unsigned long, RefVar const &, void *, long)>
         d13a4:	e59d0000 	ldr	r0, [sp]
         d13a8:	eb660da3 	bl	1a54a3c <$FlushPackageCache(unsigned long)>
         d13ac:	e28dd004 	add	sp, sp, #4	; 0x4
         d13b0:	e59d0000 	ldr	r0, [sp]
         d13b4:	eb6bc780 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         d13b8:	e28dd004 	add	sp, sp, #4	; 0x4
         d13bc:	e59d0000 	ldr	r0, [sp]
         d13c0:	eb6bc77d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         d13c4:	e28dd004 	add	sp, sp, #4	; 0x4
         d13c8:	e59d0000 	ldr	r0, [sp]
         d13cc:	e5900000 	ldr	r0, [r0]
         d13d0:	e3300002 	teq	r0, #2	; 0x2
         d13d4:	0a000003 	beq	d13e8 <TFramePartHandler::Install(PartId const &, SourceType, PartInfo *)+0x25c>
         d13d8:	e1a0000d 	mov	r0, sp
         d13dc:	eb6c896b 	bl	1bf3990 <$IsFrame(RefVar const &)>
         d13e0:	e3300000 	teq	r0, #0	; 0x0
         d13e4:	1a000002 	bne	d13f4 <TFramePartHandler::Install(PartId const &, SourceType, PartInfo *)+0x268>
         d13e8:	e3e09e8a 	mvn	r9, #2208	; 0x8a0
         d13ec:	e2499a02 	sub	r9, r9, #8192	; 0x2000
         d13f0:	ea000030 	b	d14b8 <TFramePartHandler::Install(PartId const &, SourceType, PartInfo *)+0x32c>
         d13f4:	e3390000 	teq	r9, #0	; 0x0
         d13f8:	1a00002e 	bne	d14b8 <TFramePartHandler::Install(PartId const &, SourceType, PartInfo *)+0x32c>
         d13fc:	e3a00008 	mov	r0, #8	; 0x8
         d1400:	eb6bf4cc 	bl	1bce738 <$__nw(unsigned int)>
         d1404:	e1b09000 	movs	r9, r0
         d1408:	0a000004 	beq	d1420 <TFramePartHandler::Install(PartId const &, SourceType, PartInfo *)+0x294>
         d140c:	e3a00002 	mov	r0, #2	; 0x2
         d1410:	eb6bc34d 	bl	1bc214c <$AllocateRefHandle(long)>
         d1414:	e3a01000 	mov	r1, #0	; 0x0
         d1418:	e5890000 	str	r0, [r9]
         d141c:	e5a01004 	str	r1, [r0, #4]!
         d1420:	e1b00009 	movs	r0, r9
         d1424:	e5849038 	str	r9, [r4, #56]	; fField56
         d1428:	1a000005 	bne	d1444 <TFramePartHandler::Install(PartId const &, SourceType, PartInfo *)+0x2b8>
         d142c:	eb6c433b 	bl	1be2120 <$MemError>
         d1430:	e1a04000 	mov	r4, r0
         d1434:	e59d0000 	ldr	r0, [sp]
         d1438:	eb6bc75f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         d143c:	e1a00004 	mov	r0, r4
         d1440:	ea00001f 	b	d14c4 <TFramePartHandler::Install(PartId const &, SourceType, PartInfo *)+0x338>
         d1444:	e1a0300a 	mov	r3, sl
         d1448:	e5a08004 	str	r8, [r0, #4]!
         d144c:	e92d0008 	stmdb	sp!, {r3}
         d1450:	e24dd008 	sub	sp, sp, #8	; 0x8
         d1454:	e1a02007 	mov	r2, r7
         d1458:	e48d6004 	str	r6, [sp], #4
         d145c:	e58d5000 	str	r5, [sp]
         d1460:	e28d1008 	add	r1, sp, #8	; 0x8
         d1464:	e1a00004 	mov	r0, r4
         d1468:	e1a03006 	mov	r3, r6
         d146c:	e594c000 	ldr	ip, [r4]
         d1470:	e1a0e00f 	mov	lr, pc
         d1474:	e28cf018 	add	pc, ip, #24	; 0x18
         d1478:	e28dd008 	add	sp, sp, #8	; 0x8
         d147c:	e1b09000 	movs	r9, r0
         d1480:	0a000009 	beq	d14ac <TFramePartHandler::Install(PartId const &, SourceType, PartInfo *)+0x320>
         d1484:	e5945038 	ldr	r5, [r4, #56]	; fField56
         d1488:	e3350000 	teq	r5, #0	; 0x0
         d148c:	0a000003 	beq	d14a0 <TFramePartHandler::Install(PartId const &, SourceType, PartInfo *)+0x314>
         d1490:	e5950000 	ldr	r0, [r5]
         d1494:	eb6bc748 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         d1498:	e1a00005 	mov	r0, r5
         d149c:	eb6bf08f 	bl	1bcd6e0 <$__dl(void *)>
         d14a0:	e3a01000 	mov	r1, #0	; 0x0
         d14a4:	e5a41038 	str	r1, [r4, #56]!	; fField56
         d14a8:	ea000002 	b	d14b8 <TFramePartHandler::Install(PartId const &, SourceType, PartInfo *)+0x32c>
         d14ac:	e5941038 	ldr	r1, [r4, #56]	; fField56
         d14b0:	e1a00004 	mov	r0, r4
         d14b4:	eb6c2a4d 	bl	1bdbdf0 <TPartHandler::$SetRemoveObjPtr(long)>
         d14b8:	e59d0000 	ldr	r0, [sp]
         d14bc:	eb6bc73e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         d14c0:	e1a00009 	mov	r0, r9
         d14c4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TFramePartHandler::Remove(PartId const &, unsigned long, long)
 * Address: 000d14c8
 */
TFramePartHandler::Remove(PartId const &, unsigned long, long) {
    /*
         d14c8:	e1a0c00d 	mov	ip, sp
         d14cc:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         d14d0:	e24cb004 	sub	fp, ip, #4	; 0x4
         d14d4:	e1a04000 	mov	r4, r0
         d14d8:	e1a06001 	mov	r6, r1
         d14dc:	e1a05002 	mov	r5, r2
         d14e0:	e1a07003 	mov	r7, r3
         d14e4:	e24dd008 	sub	sp, sp, #8	; 0x8
         d14e8:	e3a00002 	mov	r0, #2	; 0x2
         d14ec:	eb6bc316 	bl	1bc214c <$AllocateRefHandle(long)>
         d14f0:	e58d0004 	str	r0, [sp, #4]
         d14f4:	e3a00002 	mov	r0, #2	; 0x2
         d14f8:	eb6bc313 	bl	1bc214c <$AllocateRefHandle(long)>
         d14fc:	e58d0000 	str	r0, [sp]
         d1500:	e5970004 	ldr	r0, [r7, #4]
         d1504:	e3300000 	teq	r0, #0	; 0x0
         d1508:	0a000004 	beq	d1520 <TFramePartHandler::Remove(PartId const &, unsigned long, long)+0x58>
         d150c:	eb661598 	bl	1a56b74 <$RemoveExportTables(void *)>
         d1510:	e59d1000 	ldr	r1, [sp]
         d1514:	e5810000 	str	r0, [r1]
         d1518:	e5970004 	ldr	r0, [r7, #4]
         d151c:	eb661595 	bl	1a56b78 <$RemoveImportTable(void *)>
         d1520:	e5970000 	ldr	r0, [r7]
         d1524:	e5900000 	ldr	r0, [r0]
         d1528:	e59d1004 	ldr	r1, [sp, #4]
         d152c:	e3a08000 	mov	r8, #0	; 0x0
         d1530:	e3370000 	teq	r7, #0	; 0x0
         d1534:	e5810000 	str	r0, [r1]
         d1538:	0a000003 	beq	d154c <TFramePartHandler::Remove(PartId const &, unsigned long, long)+0x84>
         d153c:	e5970000 	ldr	r0, [r7]
         d1540:	eb6bc71d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         d1544:	e1a00007 	mov	r0, r7
         d1548:	eb6bf064 	bl	1bcd6e0 <$__dl(void *)>
         d154c:	e1a03005 	mov	r3, r5
         d1550:	e1a02006 	mov	r2, r6
         d1554:	e28d1004 	add	r1, sp, #4	; 0x4
         d1558:	e1a00004 	mov	r0, r4
         d155c:	e594c000 	ldr	ip, [r4]
         d1560:	e1a0e00f 	mov	lr, pc
         d1564:	e28cf01c 	add	pc, ip, #28	; 0x1c
         d1568:	e1a04000 	mov	r4, r0
         d156c:	eb6bcb36 	bl	1bc424c <$GC(void)>
         d1570:	eb661148 	bl	1a55a98 <$ICacheClear(void)>
         d1574:	e59d0000 	ldr	r0, [sp]
         d1578:	e5900000 	ldr	r0, [r0]
         d157c:	eb6bcf4a 	bl	1bc52ac <$Length(long)>
         d1580:	e3500000 	cmp	r0, #0	; 0x0
         d1584:	da000013 	ble	d15d8 <TFramePartHandler::Remove(PartId const &, unsigned long, long)+0x110>
         d1588:	e52d806c 	str	r8, [sp, -#108]!
         d158c:	e28d0008 	add	r0, sp, #8	; 0x8
         d1590:	eb6b84f7 	bl	1bb2974 <$setjmp>
         d1594:	e3300000 	teq	r0, #0	; 0x0
         d1598:	1a00000b 	bne	d15cc <TFramePartHandler::Remove(PartId const &, unsigned long, long)+0x104>
         d159c:	e1a0000d 	mov	r0, sp
         d15a0:	eb6c3ab5 	bl	1be007c <$AddExceptionHandler>
         d15a4:	e59f0044 	ldr	r0, [pc, #44]	; d15f0 <TFramePartHandler::Remove(PartId const &, unsigned long, long)+0x128>
         d15a8:	e5900000 	ldr	r0, [r0]
         d15ac:	e59f1040 	ldr	r1, [pc, #40]	; d15f4 <TFramePartHandler::Remove(PartId const &, unsigned long, long)+0x12c>
         d15b0:	e5911000 	ldr	r1, [r1]
         d15b4:	e5911000 	ldr	r1, [r1]
         d15b8:	eb6bcb22 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
         d15bc:	e3300000 	teq	r0, #0	; 0x0
         d15c0:	128d106c 	addne	r1, sp, #108	; 0x6c
         d15c4:	159f0028 	ldrne	r0, [pc, #28]	; d15f4 <TFramePartHandler::Remove(PartId const &, unsigned long, long)+0x12c>
         d15c8:	1b6cba94 	blne	1c00020 <$NSCallGlobalFn__FRC6RefVarT1>
         d15cc:	e1a0000d 	mov	r0, sp
         d15d0:	eb6c3eb8 	bl	1be10b8 <$ExitHandler>
         d15d4:	e28dd06c 	add	sp, sp, #108	; 0x6c
         d15d8:	e59d0000 	ldr	r0, [sp]
         d15dc:	eb6bc6f6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         d15e0:	e59d0004 	ldr	r0, [sp, #4]
         d15e4:	eb6bc6f4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         d15e8:	e1a00004 	mov	r0, r4
         d15ec:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         d15f0:	0c10544c 	ldceq	4, cr5, [r0], -#304
         d15f4:	00684308 	rsbeq	r4, r8, r8, lsl #6
    */
}

/**
 * Symbol: TFramePartHandler::SetFrameRemoveObject(RefVar const &)
 * Address: 000d15f8
 */
TFramePartHandler::SetFrameRemoveObject(RefVar const &) {
    /*
         d15f8:	e5900038 	ldr	r0, [r0, #56]	; fField56
         d15fc:	e5911000 	ldr	r1, [r1]
         d1600:	e5911000 	ldr	r1, [r1]
         d1604:	e5900000 	ldr	r0, [r0]
         d1608:	e5801000 	str	r1, [r0]
         d160c:	e3a00000 	mov	r0, #0	; 0x0
         d1610:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFramePartHandler::Expand(void *, CPipe *, PartInfo *)
 * Address: 000d1628
 */
TFramePartHandler::Expand(void *, CPipe *, PartInfo *) {
    /*
         d1628:	e1a0c00d 	mov	ip, sp
         d162c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         d1630:	e24cb004 	sub	fp, ip, #4	; 0x4
         d1634:	e1a04001 	mov	r4, r1
         d1638:	e1a01002 	mov	r1, r2
         d163c:	e24dd010 	sub	sp, sp, #16	; 0x10
         d1640:	e3a05000 	mov	r5, #0	; 0x0
         d1644:	e1a0000d 	mov	r0, sp
         d1648:	eb6bbea6 	bl	1bc10e8 <TObjectReader::$__ct(CPipe &)>
         d164c:	e3a00000 	mov	r0, #0	; 0x0
         d1650:	e52d006c 	str	r0, [sp, -#108]!
         d1654:	e28d0008 	add	r0, sp, #8	; 0x8
         d1658:	eb6b84c5 	bl	1bb2974 <$setjmp>
         d165c:	e3300000 	teq	r0, #0	; 0x0
         d1660:	1a000005 	bne	d167c <TFramePartHandler::Expand(void *, CPipe *, PartInfo *)+0x54>
         d1664:	e1a0000d 	mov	r0, sp
         d1668:	eb6c3a83 	bl	1be007c <$AddExceptionHandler>
         d166c:	e28d006c 	add	r0, sp, #108	; 0x6c
         d1670:	eb6bd325 	bl	1bc630c <TObjectReader::$Read(void)>
         d1674:	e5840000 	str	r0, [r4]
         d1678:	ea000008 	b	d16a0 <TFramePartHandler::Expand(void *, CPipe *, PartInfo *)+0x78>
         d167c:	e59d0060 	ldr	r0, [sp, #96]
         d1680:	e59f1038 	ldr	r1, [pc, #38]	; d16c0 <TFramePartHandler::Expand(void *, CPipe *, PartInfo *)+0x98>
         d1684:	e5911000 	ldr	r1, [r1]
         d1688:	eb6c46c1 	bl	1be3194 <$Subexception>
         d168c:	e3300000 	teq	r0, #0	; 0x0
         d1690:	159d5064 	ldrne	r5, [sp, #100]
         d1694:	1a000001 	bne	d16a0 <TFramePartHandler::Expand(void *, CPipe *, PartInfo *)+0x78>
         d1698:	e1a0000d 	mov	r0, sp
         d169c:	eb6c42ac 	bl	1be2154 <$NextHandler>
         d16a0:	e1a0000d 	mov	r0, sp
         d16a4:	eb6c3e83 	bl	1be10b8 <$ExitHandler>
         d16a8:	e28dd06c 	add	sp, sp, #108	; 0x6c
         d16ac:	e1a0000d 	mov	r0, sp
         d16b0:	e3a01000 	mov	r1, #0	; 0x0
         d16b4:	eb65f42d 	bl	1a4e770 <TObjectReader::$__dt(void)>
         d16b8:	e1a00005 	mov	r0, r5
         d16bc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         d16c0:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

