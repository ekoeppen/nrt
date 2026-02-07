#include "include/TMuxStore.h"

/**
 * Symbol: Sizeof__9TMuxStoreSFv
 * Address: 001232d0
 */
void TMuxStore::Sizeof() {
    /*
        1232d0:	e3a0001c 	mov	r0, #28	; 0x1c
        1232d4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TMuxStore::EraseObject(unsigned long)
 * Address: 001232d8
 */
TMuxStore::EraseObject(unsigned long) {
    /*
        1232d8:	e1a0c00d 	mov	ip, sp
        1232dc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1232e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1232e4:	e1a04000 	mov	r4, r0
        1232e8:	e1a05001 	mov	r5, r1
        1232ec:	e24dd004 	sub	sp, sp, #4	; 0x4
        1232f0:	e5900018 	ldr	r0, [r0, #24]	; fField24
        1232f4:	e3a01000 	mov	r1, #0	; 0x0
        1232f8:	eb6aad15 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        1232fc:	e3a00000 	mov	r0, #0	; 0x0
        123300:	e3a06000 	mov	r6, #0	; 0x0
        123304:	e52d006c 	str	r0, [sp, -#108]!
        123308:	e28d0008 	add	r0, sp, #8	; 0x8
        12330c:	eb6a3d98 	bl	1bb2974 <$setjmp>
        123310:	e3300000 	teq	r0, #0	; 0x0
        123314:	1a000008 	bne	12333c <TMuxStore::EraseObject(unsigned long)+0x64>
        123318:	e1a0000d 	mov	r0, sp
        12331c:	eb6af356 	bl	1be007c <$AddExceptionHandler>
        123320:	e1a01005 	mov	r1, r5
        123324:	e5940014 	ldr	r0, [r4, #20]	; fField20
        123328:	eb675227 	bl	1af7bcc <TStoreMonitor::$EraseObject(unsigned long)>
        12332c:	e58d006c 	str	r0, [sp, #108]
        123330:	e1a0000d 	mov	r0, sp
        123334:	eb6af75f 	bl	1be10b8 <$ExitHandler>
        123338:	ea000000 	b	123340 <TMuxStore::EraseObject(unsigned long)+0x68>
        12333c:	e3a06001 	mov	r6, #1	; 0x1
        123340:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        123344:	eb6ada53 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        123348:	e3360000 	teq	r6, #0	; 0x0
        12334c:	11a0000d 	movne	r0, sp
        123350:	1b6afb7f 	blne	1be2154 <$NextHandler>
        123354:	e5bd006c 	ldr	r0, [sp, #108]!
        123358:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxStore::DeleteObject(unsigned long)
 * Address: 0012335c
 */
TMuxStore::DeleteObject(unsigned long) {
    /*
        12335c:	e1a0c00d 	mov	ip, sp
        123360:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        123364:	e24cb004 	sub	fp, ip, #4	; 0x4
        123368:	e1a04000 	mov	r4, r0
        12336c:	e1a05001 	mov	r5, r1
        123370:	e24dd004 	sub	sp, sp, #4	; 0x4
        123374:	e5900018 	ldr	r0, [r0, #24]	; fField24
        123378:	e3a01000 	mov	r1, #0	; 0x0
        12337c:	eb6aacf4 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        123380:	e3a00000 	mov	r0, #0	; 0x0
        123384:	e3a06000 	mov	r6, #0	; 0x0
        123388:	e52d006c 	str	r0, [sp, -#108]!
        12338c:	e28d0008 	add	r0, sp, #8	; 0x8
        123390:	eb6a3d77 	bl	1bb2974 <$setjmp>
        123394:	e3300000 	teq	r0, #0	; 0x0
        123398:	1a000008 	bne	1233c0 <TMuxStore::DeleteObject(unsigned long)+0x64>
        12339c:	e1a0000d 	mov	r0, sp
        1233a0:	eb6af335 	bl	1be007c <$AddExceptionHandler>
        1233a4:	e1a01005 	mov	r1, r5
        1233a8:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1233ac:	eb674ddf 	bl	1af6b30 <TStoreMonitor::$DeleteObject(unsigned long)>
        1233b0:	e58d006c 	str	r0, [sp, #108]
        1233b4:	e1a0000d 	mov	r0, sp
        1233b8:	eb6af73e 	bl	1be10b8 <$ExitHandler>
        1233bc:	ea000000 	b	1233c4 <TMuxStore::DeleteObject(unsigned long)+0x68>
        1233c0:	e3a06001 	mov	r6, #1	; 0x1
        1233c4:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        1233c8:	eb6ada32 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1233cc:	e3360000 	teq	r6, #0	; 0x0
        1233d0:	11a0000d 	movne	r0, sp
        1233d4:	1b6afb5e 	blne	1be2154 <$NextHandler>
        1233d8:	e5bd006c 	ldr	r0, [sp, #108]!
        1233dc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxStore::SetObjectSize(unsigned long, long)
 * Address: 001233e0
 */
TMuxStore::SetObjectSize(unsigned long, long) {
    /*
        1233e0:	e1a0c00d 	mov	ip, sp
        1233e4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1233e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1233ec:	e1a04000 	mov	r4, r0
        1233f0:	e1a06001 	mov	r6, r1
        1233f4:	e1a05002 	mov	r5, r2
        1233f8:	e24dd004 	sub	sp, sp, #4	; 0x4
        1233fc:	e5900018 	ldr	r0, [r0, #24]	; fField24
        123400:	e3a01000 	mov	r1, #0	; 0x0
        123404:	eb6aacd2 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        123408:	e3a00000 	mov	r0, #0	; 0x0
        12340c:	e3a07000 	mov	r7, #0	; 0x0
        123410:	e52d006c 	str	r0, [sp, -#108]!
        123414:	e28d0008 	add	r0, sp, #8	; 0x8
        123418:	eb6a3d55 	bl	1bb2974 <$setjmp>
        12341c:	e3300000 	teq	r0, #0	; 0x0
        123420:	1a000009 	bne	12344c <TMuxStore::SetObjectSize(unsigned long, long)+0x6c>
        123424:	e1a0000d 	mov	r0, sp
        123428:	eb6af313 	bl	1be007c <$AddExceptionHandler>
        12342c:	e1a02005 	mov	r2, r5
        123430:	e1a01006 	mov	r1, r6
        123434:	e5940014 	ldr	r0, [r4, #20]	; fField20
        123438:	eb678bb6 	bl	1b06318 <TStoreMonitor::$SetObjectSize(unsigned long, long)>
        12343c:	e58d006c 	str	r0, [sp, #108]
        123440:	e1a0000d 	mov	r0, sp
        123444:	eb6af71b 	bl	1be10b8 <$ExitHandler>
        123448:	ea000000 	b	123450 <TMuxStore::SetObjectSize(unsigned long, long)+0x70>
        12344c:	e3a07001 	mov	r7, #1	; 0x1
        123450:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        123454:	eb6ada0f 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        123458:	e3370000 	teq	r7, #0	; 0x0
        12345c:	11a0000d 	movne	r0, sp
        123460:	1b6afb3b 	blne	1be2154 <$NextHandler>
        123464:	e5bd006c 	ldr	r0, [sp, #108]!
        123468:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxStore::GetObjectSize(unsigned long, long *)
 * Address: 0012346c
 */
TMuxStore::GetObjectSize(unsigned long, long *) {
    /*
        12346c:	e1a0c00d 	mov	ip, sp
        123470:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        123474:	e24cb004 	sub	fp, ip, #4	; 0x4
        123478:	e1a04000 	mov	r4, r0
        12347c:	e1a06001 	mov	r6, r1
        123480:	e1a05002 	mov	r5, r2
        123484:	e24dd004 	sub	sp, sp, #4	; 0x4
        123488:	e5900018 	ldr	r0, [r0, #24]	; fField24
        12348c:	e3a01000 	mov	r1, #0	; 0x0
        123490:	eb6aacaf 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        123494:	e3a00000 	mov	r0, #0	; 0x0
        123498:	e3a07000 	mov	r7, #0	; 0x0
        12349c:	e52d006c 	str	r0, [sp, -#108]!
        1234a0:	e28d0008 	add	r0, sp, #8	; 0x8
        1234a4:	eb6a3d32 	bl	1bb2974 <$setjmp>
        1234a8:	e3300000 	teq	r0, #0	; 0x0
        1234ac:	1a000009 	bne	1234d8 <TMuxStore::GetObjectSize(unsigned long, long *)+0x6c>
        1234b0:	e1a0000d 	mov	r0, sp
        1234b4:	eb6af2f0 	bl	1be007c <$AddExceptionHandler>
        1234b8:	e1a02005 	mov	r2, r5
        1234bc:	e1a01006 	mov	r1, r6
        1234c0:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1234c4:	eb675e0d 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        1234c8:	e58d006c 	str	r0, [sp, #108]
        1234cc:	e1a0000d 	mov	r0, sp
        1234d0:	eb6af6f8 	bl	1be10b8 <$ExitHandler>
        1234d4:	ea000000 	b	1234dc <TMuxStore::GetObjectSize(unsigned long, long *)+0x70>
        1234d8:	e3a07001 	mov	r7, #1	; 0x1
        1234dc:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        1234e0:	eb6ad9ec 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1234e4:	e3370000 	teq	r7, #0	; 0x0
        1234e8:	11a0000d 	movne	r0, sp
        1234ec:	1b6afb18 	blne	1be2154 <$NextHandler>
        1234f0:	e5bd006c 	ldr	r0, [sp, #108]!
        1234f4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxStore::Write(unsigned long, long, char *, long)
 * Address: 001234f8
 */
TMuxStore::Write(unsigned long, long, char *, long) {
    /*
        1234f8:	e1a0c00d 	mov	ip, sp
        1234fc:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        123500:	e24cb004 	sub	fp, ip, #4	; 0x4
        123504:	e1a04000 	mov	r4, r0
        123508:	e1a07001 	mov	r7, r1
        12350c:	e1a06002 	mov	r6, r2
        123510:	e1a05003 	mov	r5, r3
        123514:	e59b9004 	ldr	r9, [fp, #4]	; fField4
        123518:	e24dd004 	sub	sp, sp, #4	; 0x4
        12351c:	e5900018 	ldr	r0, [r0, #24]	; fField24
        123520:	e3a01000 	mov	r1, #0	; 0x0
        123524:	eb6aac8a 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        123528:	e3a00000 	mov	r0, #0	; 0x0
        12352c:	e3a08000 	mov	r8, #0	; 0x0
        123530:	e52d006c 	str	r0, [sp, -#108]!
        123534:	e28d0008 	add	r0, sp, #8	; 0x8
        123538:	eb6a3d0d 	bl	1bb2974 <$setjmp>
        12353c:	e3300000 	teq	r0, #0	; 0x0
        123540:	1a00000d 	bne	12357c <TMuxStore::Write(unsigned long, long, char *, long)+0x84>
        123544:	e1a0000d 	mov	r0, sp
        123548:	eb6af2cb 	bl	1be007c <$AddExceptionHandler>
        12354c:	e1a03009 	mov	r3, r9
        123550:	e92d0008 	stmdb	sp!, {r3}
        123554:	e1a03005 	mov	r3, r5
        123558:	e1a02006 	mov	r2, r6
        12355c:	e1a01007 	mov	r1, r7
        123560:	e5940014 	ldr	r0, [r4, #20]	; fField20
        123564:	eb6797e3 	bl	1b094f8 <TStoreMonitor::$Write(unsigned long, long, char *, long)>
        123568:	e28dd004 	add	sp, sp, #4	; 0x4
        12356c:	e58d006c 	str	r0, [sp, #108]
        123570:	e1a0000d 	mov	r0, sp
        123574:	eb6af6cf 	bl	1be10b8 <$ExitHandler>
        123578:	ea000000 	b	123580 <TMuxStore::Write(unsigned long, long, char *, long)+0x88>
        12357c:	e3a08001 	mov	r8, #1	; 0x1
        123580:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        123584:	eb6ad9c3 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        123588:	e3380000 	teq	r8, #0	; 0x0
        12358c:	11a0000d 	movne	r0, sp
        123590:	1b6afaef 	blne	1be2154 <$NextHandler>
        123594:	e5bd006c 	ldr	r0, [sp, #108]!
        123598:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxStore::Read(unsigned long, long, char *, long)
 * Address: 0012359c
 */
TMuxStore::Read(unsigned long, long, char *, long) {
    /*
        12359c:	e1a0c00d 	mov	ip, sp
        1235a0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1235a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1235a8:	e1a04000 	mov	r4, r0
        1235ac:	e1a07001 	mov	r7, r1
        1235b0:	e1a06002 	mov	r6, r2
        1235b4:	e1a05003 	mov	r5, r3
        1235b8:	e59b9004 	ldr	r9, [fp, #4]	; fField4
        1235bc:	e24dd004 	sub	sp, sp, #4	; 0x4
        1235c0:	e5900018 	ldr	r0, [r0, #24]	; fField24
        1235c4:	e3a01000 	mov	r1, #0	; 0x0
        1235c8:	eb6aac61 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        1235cc:	e3a00000 	mov	r0, #0	; 0x0
        1235d0:	e3a08000 	mov	r8, #0	; 0x0
        1235d4:	e52d006c 	str	r0, [sp, -#108]!
        1235d8:	e28d0008 	add	r0, sp, #8	; 0x8
        1235dc:	eb6a3ce4 	bl	1bb2974 <$setjmp>
        1235e0:	e3300000 	teq	r0, #0	; 0x0
        1235e4:	1a00000d 	bne	123620 <TMuxStore::Read(unsigned long, long, char *, long)+0x84>
        1235e8:	e1a0000d 	mov	r0, sp
        1235ec:	eb6af2a2 	bl	1be007c <$AddExceptionHandler>
        1235f0:	e1a03009 	mov	r3, r9
        1235f4:	e92d0008 	stmdb	sp!, {r3}
        1235f8:	e1a03005 	mov	r3, r5
        1235fc:	e1a02006 	mov	r2, r6
        123600:	e1a01007 	mov	r1, r7
        123604:	e5940010 	ldr	r0, [r4, #16]	; fField16
        123608:	eb677acc 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        12360c:	e28dd004 	add	sp, sp, #4	; 0x4
        123610:	e58d006c 	str	r0, [sp, #108]
        123614:	e1a0000d 	mov	r0, sp
        123618:	eb6af6a6 	bl	1be10b8 <$ExitHandler>
        12361c:	ea000000 	b	123624 <TMuxStore::Read(unsigned long, long, char *, long)+0x88>
        123620:	e3a08001 	mov	r8, #1	; 0x1
        123624:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        123628:	eb6ad99a 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        12362c:	e3380000 	teq	r8, #0	; 0x0
        123630:	11a0000d 	movne	r0, sp
        123634:	1b6afac6 	blne	1be2154 <$NextHandler>
        123638:	e5bd006c 	ldr	r0, [sp, #108]!
        12363c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxStore::GetStoreSizes(long *, long *)
 * Address: 00123640
 */
TMuxStore::GetStoreSizes(long *, long *) {
    /*
        123640:	e1a0c00d 	mov	ip, sp
        123644:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        123648:	e24cb004 	sub	fp, ip, #4	; 0x4
        12364c:	e1a04000 	mov	r4, r0
        123650:	e1a06001 	mov	r6, r1
        123654:	e1a05002 	mov	r5, r2
        123658:	e24dd004 	sub	sp, sp, #4	; 0x4
        12365c:	e5900018 	ldr	r0, [r0, #24]	; fField24
        123660:	e3a01000 	mov	r1, #0	; 0x0
        123664:	eb6aac3a 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        123668:	e3a00000 	mov	r0, #0	; 0x0
        12366c:	e3a07000 	mov	r7, #0	; 0x0
        123670:	e52d006c 	str	r0, [sp, -#108]!
        123674:	e28d0008 	add	r0, sp, #8	; 0x8
        123678:	eb6a3cbd 	bl	1bb2974 <$setjmp>
        12367c:	e3300000 	teq	r0, #0	; 0x0
        123680:	1a000009 	bne	1236ac <TMuxStore::GetStoreSizes(long *, long *)+0x6c>
        123684:	e1a0000d 	mov	r0, sp
        123688:	eb6af27b 	bl	1be007c <$AddExceptionHandler>
        12368c:	e1a02005 	mov	r2, r5
        123690:	e1a01006 	mov	r1, r6
        123694:	e5940014 	ldr	r0, [r4, #20]	; fField20
        123698:	eb675da9 	bl	1afad44 <TStoreMonitor::$GetStoreSizes(long *, long *)>
        12369c:	e58d006c 	str	r0, [sp, #108]
        1236a0:	e1a0000d 	mov	r0, sp
        1236a4:	eb6af683 	bl	1be10b8 <$ExitHandler>
        1236a8:	ea000000 	b	1236b0 <TMuxStore::GetStoreSizes(long *, long *)+0x70>
        1236ac:	e3a07001 	mov	r7, #1	; 0x1
        1236b0:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        1236b4:	eb6ad977 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1236b8:	e3370000 	teq	r7, #0	; 0x0
        1236bc:	11a0000d 	movne	r0, sp
        1236c0:	1b6afaa3 	blne	1be2154 <$NextHandler>
        1236c4:	e5bd006c 	ldr	r0, [sp, #108]!
        1236c8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxStore::IsReadOnly(unsigned char *)
 * Address: 001236cc
 */
TMuxStore::IsReadOnly(unsigned char *) {
    /*
        1236cc:	e1a0c00d 	mov	ip, sp
        1236d0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1236d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1236d8:	e1a04000 	mov	r4, r0
        1236dc:	e1a05001 	mov	r5, r1
        1236e0:	e24dd004 	sub	sp, sp, #4	; 0x4
        1236e4:	e5900018 	ldr	r0, [r0, #24]	; fField24
        1236e8:	e3a01000 	mov	r1, #0	; 0x0
        1236ec:	eb6aac18 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        1236f0:	e3a00000 	mov	r0, #0	; 0x0
        1236f4:	e3a06000 	mov	r6, #0	; 0x0
        1236f8:	e52d006c 	str	r0, [sp, -#108]!
        1236fc:	e28d0008 	add	r0, sp, #8	; 0x8
        123700:	eb6a3c9b 	bl	1bb2974 <$setjmp>
        123704:	e3300000 	teq	r0, #0	; 0x0
        123708:	1a000008 	bne	123730 <TMuxStore::IsReadOnly(unsigned char *)+0x64>
        12370c:	e1a0000d 	mov	r0, sp
        123710:	eb6af259 	bl	1be007c <$AddExceptionHandler>
        123714:	e1a01005 	mov	r1, r5
        123718:	e5940010 	ldr	r0, [r4, #16]	; fField16
        12371c:	eb676df9 	bl	1afef08 <TStore::$IsReadOnly(unsigned char *)>
        123720:	e58d006c 	str	r0, [sp, #108]
        123724:	e1a0000d 	mov	r0, sp
        123728:	eb6af662 	bl	1be10b8 <$ExitHandler>
        12372c:	ea000000 	b	123734 <TMuxStore::IsReadOnly(unsigned char *)+0x68>
        123730:	e3a06001 	mov	r6, #1	; 0x1
        123734:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        123738:	eb6ad956 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        12373c:	e3360000 	teq	r6, #0	; 0x0
        123740:	11a0000d 	movne	r0, sp
        123744:	1b6afa82 	blne	1be2154 <$NextHandler>
        123748:	e5bd006c 	ldr	r0, [sp, #108]!
        12374c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxStore::LockStore(void)
 * Address: 00123750
 */
TMuxStore::LockStore(void) {
    /*
        123750:	e1a0c00d 	mov	ip, sp
        123754:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        123758:	e24cb004 	sub	fp, ip, #4	; 0x4
        12375c:	e1a04000 	mov	r4, r0
        123760:	e24dd004 	sub	sp, sp, #4	; 0x4
        123764:	e5900018 	ldr	r0, [r0, #24]	; fField24
        123768:	e3a01000 	mov	r1, #0	; 0x0
        12376c:	eb6aabf8 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        123770:	e3a00000 	mov	r0, #0	; 0x0
        123774:	e3a05000 	mov	r5, #0	; 0x0
        123778:	e52d006c 	str	r0, [sp, -#108]!
        12377c:	e28d0008 	add	r0, sp, #8	; 0x8
        123780:	eb6a3c7b 	bl	1bb2974 <$setjmp>
        123784:	e3300000 	teq	r0, #0	; 0x0
        123788:	1a000007 	bne	1237ac <TMuxStore::LockStore(void)+0x5c>
        12378c:	e1a0000d 	mov	r0, sp
        123790:	eb6af239 	bl	1be007c <$AddExceptionHandler>
        123794:	e5940014 	ldr	r0, [r4, #20]	; fField20
        123798:	eb676ded 	bl	1afef54 <TStoreMonitor::$LockStore(void)>
        12379c:	e58d006c 	str	r0, [sp, #108]
        1237a0:	e1a0000d 	mov	r0, sp
        1237a4:	eb6af643 	bl	1be10b8 <$ExitHandler>
        1237a8:	ea000000 	b	1237b0 <TMuxStore::LockStore(void)+0x60>
        1237ac:	e3a05001 	mov	r5, #1	; 0x1
        1237b0:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        1237b4:	eb6ad937 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1237b8:	e3350000 	teq	r5, #0	; 0x0
        1237bc:	11a0000d 	movne	r0, sp
        1237c0:	1b6afa63 	blne	1be2154 <$NextHandler>
        1237c4:	e5bd006c 	ldr	r0, [sp, #108]!
        1237c8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxStore::UnlockStore(void)
 * Address: 001237cc
 */
TMuxStore::UnlockStore(void) {
    /*
        1237cc:	e1a0c00d 	mov	ip, sp
        1237d0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1237d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1237d8:	e1a04000 	mov	r4, r0
        1237dc:	e24dd004 	sub	sp, sp, #4	; 0x4
        1237e0:	e5900018 	ldr	r0, [r0, #24]	; fField24
        1237e4:	e3a01000 	mov	r1, #0	; 0x0
        1237e8:	eb6aabd9 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        1237ec:	e3a00000 	mov	r0, #0	; 0x0
        1237f0:	e3a05000 	mov	r5, #0	; 0x0
        1237f4:	e52d006c 	str	r0, [sp, -#108]!
        1237f8:	e28d0008 	add	r0, sp, #8	; 0x8
        1237fc:	eb6a3c5c 	bl	1bb2974 <$setjmp>
        123800:	e3300000 	teq	r0, #0	; 0x0
        123804:	1a000007 	bne	123828 <TMuxStore::UnlockStore(void)+0x5c>
        123808:	e1a0000d 	mov	r0, sp
        12380c:	eb6af21a 	bl	1be007c <$AddExceptionHandler>
        123810:	e5940014 	ldr	r0, [r4, #20]	; fField20
        123814:	eb679314 	bl	1b0846c <TStoreMonitor::$UnlockStore(void)>
        123818:	e58d006c 	str	r0, [sp, #108]
        12381c:	e1a0000d 	mov	r0, sp
        123820:	eb6af624 	bl	1be10b8 <$ExitHandler>
        123824:	ea000000 	b	12382c <TMuxStore::UnlockStore(void)+0x60>
        123828:	e3a05001 	mov	r5, #1	; 0x1
        12382c:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        123830:	eb6ad918 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        123834:	e3350000 	teq	r5, #0	; 0x0
        123838:	11a0000d 	movne	r0, sp
        12383c:	1b6afa44 	blne	1be2154 <$NextHandler>
        123840:	e5bd006c 	ldr	r0, [sp, #108]!
        123844:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxStore::Abort(void)
 * Address: 00123850
 */
TMuxStore::Abort(void) {
    /*
        123850:	e1a0c00d 	mov	ip, sp
        123854:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        123858:	e24cb004 	sub	fp, ip, #4	; 0x4
        12385c:	e1a04000 	mov	r4, r0
        123860:	e24dd004 	sub	sp, sp, #4	; 0x4
        123864:	e5900018 	ldr	r0, [r0, #24]	; fField24
        123868:	e3a01000 	mov	r1, #0	; 0x0
        12386c:	eb6aabb8 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        123870:	e3a00000 	mov	r0, #0	; 0x0
        123874:	e3a05000 	mov	r5, #0	; 0x0
        123878:	e52d006c 	str	r0, [sp, -#108]!
        12387c:	e28d0008 	add	r0, sp, #8	; 0x8
        123880:	eb6a3c3b 	bl	1bb2974 <$setjmp>
        123884:	e3300000 	teq	r0, #0	; 0x0
        123888:	1a000007 	bne	1238ac <TMuxStore::Abort(void)+0x5c>
        12388c:	e1a0000d 	mov	r0, sp
        123890:	eb6af1f9 	bl	1be007c <$AddExceptionHandler>
        123894:	e5940014 	ldr	r0, [r4, #20]	; fField20
        123898:	eb673801 	bl	1af18a4 <TStoreMonitor::$Abort(void)>
        12389c:	e58d006c 	str	r0, [sp, #108]
        1238a0:	e1a0000d 	mov	r0, sp
        1238a4:	eb6af603 	bl	1be10b8 <$ExitHandler>
        1238a8:	ea000000 	b	1238b0 <TMuxStore::Abort(void)+0x60>
        1238ac:	e3a05001 	mov	r5, #1	; 0x1
        1238b0:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        1238b4:	eb6ad8f7 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1238b8:	e3350000 	teq	r5, #0	; 0x0
        1238bc:	11a0000d 	movne	r0, sp
        1238c0:	1b6afa23 	blne	1be2154 <$NextHandler>
        1238c4:	e5bd006c 	ldr	r0, [sp, #108]!
        1238c8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxStore::Idle(unsigned char *, unsigned char *)
 * Address: 001238cc
 */
TMuxStore::Idle(unsigned char *, unsigned char *) {
    /*
        1238cc:	e1a0c00d 	mov	ip, sp
        1238d0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1238d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1238d8:	e1a04000 	mov	r4, r0
        1238dc:	e1a06001 	mov	r6, r1
        1238e0:	e1a05002 	mov	r5, r2
        1238e4:	e24dd004 	sub	sp, sp, #4	; 0x4
        1238e8:	e5900018 	ldr	r0, [r0, #24]	; fField24
        1238ec:	e3a01000 	mov	r1, #0	; 0x0
        1238f0:	eb6aab97 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        1238f4:	e3a00000 	mov	r0, #0	; 0x0
        1238f8:	e3a07000 	mov	r7, #0	; 0x0
        1238fc:	e52d006c 	str	r0, [sp, -#108]!
        123900:	e28d0008 	add	r0, sp, #8	; 0x8
        123904:	eb6a3c1a 	bl	1bb2974 <$setjmp>
        123908:	e3300000 	teq	r0, #0	; 0x0
        12390c:	1a000009 	bne	123938 <TMuxStore::Idle(unsigned char *, unsigned char *)+0x6c>
        123910:	e1a0000d 	mov	r0, sp
        123914:	eb6af1d8 	bl	1be007c <$AddExceptionHandler>
        123918:	e1a02005 	mov	r2, r5
        12391c:	e1a01006 	mov	r1, r6
        123920:	e5940014 	ldr	r0, [r4, #20]	; fField20
        123924:	eb67611c 	bl	1afbd9c <TStoreMonitor::$Idle(unsigned char *, unsigned char *)>
        123928:	e58d006c 	str	r0, [sp, #108]
        12392c:	e1a0000d 	mov	r0, sp
        123930:	eb6af5e0 	bl	1be10b8 <$ExitHandler>
        123934:	ea000000 	b	12393c <TMuxStore::Idle(unsigned char *, unsigned char *)+0x70>
        123938:	e3a07001 	mov	r7, #1	; 0x1
        12393c:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        123940:	eb6ad8d4 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        123944:	e3370000 	teq	r7, #0	; 0x0
        123948:	11a0000d 	movne	r0, sp
        12394c:	1b6afa00 	blne	1be2154 <$NextHandler>
        123950:	e5bd006c 	ldr	r0, [sp, #108]!
        123954:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxStore::NextObject(unsigned long, unsigned long *)
 * Address: 00123958
 */
TMuxStore::NextObject(unsigned long, unsigned long *) {
    /*
        123958:	e1a0c00d 	mov	ip, sp
        12395c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        123960:	e24cb004 	sub	fp, ip, #4	; 0x4
        123964:	e1a04000 	mov	r4, r0
        123968:	e1a06001 	mov	r6, r1
        12396c:	e1a05002 	mov	r5, r2
        123970:	e24dd004 	sub	sp, sp, #4	; 0x4
        123974:	e5900018 	ldr	r0, [r0, #24]	; fField24
        123978:	e3a01000 	mov	r1, #0	; 0x0
        12397c:	eb6aab74 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        123980:	e3a00000 	mov	r0, #0	; 0x0
        123984:	e3a07000 	mov	r7, #0	; 0x0
        123988:	e52d006c 	str	r0, [sp, -#108]!
        12398c:	e28d0008 	add	r0, sp, #8	; 0x8
        123990:	eb6a3bf7 	bl	1bb2974 <$setjmp>
        123994:	e3300000 	teq	r0, #0	; 0x0
        123998:	1a000009 	bne	1239c4 <TMuxStore::NextObject(unsigned long, unsigned long *)+0x6c>
        12399c:	e1a0000d 	mov	r0, sp
        1239a0:	eb6af1b5 	bl	1be007c <$AddExceptionHandler>
        1239a4:	e1a02005 	mov	r2, r5
        1239a8:	e1a01006 	mov	r1, r6
        1239ac:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1239b0:	eb6771a1 	bl	1b0003c <TStore::$NextObject(unsigned long, unsigned long *)>
        1239b4:	e58d006c 	str	r0, [sp, #108]
        1239b8:	e1a0000d 	mov	r0, sp
        1239bc:	eb6af5bd 	bl	1be10b8 <$ExitHandler>
        1239c0:	ea000000 	b	1239c8 <TMuxStore::NextObject(unsigned long, unsigned long *)+0x70>
        1239c4:	e3a07001 	mov	r7, #1	; 0x1
        1239c8:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        1239cc:	eb6ad8b1 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1239d0:	e3370000 	teq	r7, #0	; 0x0
        1239d4:	11a0000d 	movne	r0, sp
        1239d8:	1b6af9dd 	blne	1be2154 <$NextHandler>
        1239dc:	e5bd006c 	ldr	r0, [sp, #108]!
        1239e0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxStore::CheckIntegrity(unsigned long *)
 * Address: 001239e4
 */
TMuxStore::CheckIntegrity(unsigned long *) {
    /*
        1239e4:	e1a0c00d 	mov	ip, sp
        1239e8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1239ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        1239f0:	e1a04000 	mov	r4, r0
        1239f4:	e1a05001 	mov	r5, r1
        1239f8:	e24dd004 	sub	sp, sp, #4	; 0x4
        1239fc:	e5900018 	ldr	r0, [r0, #24]	; fField24
        123a00:	e3a01000 	mov	r1, #0	; 0x0
        123a04:	eb6aab52 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        123a08:	e3a00000 	mov	r0, #0	; 0x0
        123a0c:	e3a06000 	mov	r6, #0	; 0x0
        123a10:	e52d006c 	str	r0, [sp, -#108]!
        123a14:	e28d0008 	add	r0, sp, #8	; 0x8
        123a18:	eb6a3bd5 	bl	1bb2974 <$setjmp>
        123a1c:	e3300000 	teq	r0, #0	; 0x0
        123a20:	1a000008 	bne	123a48 <TMuxStore::CheckIntegrity(unsigned long *)+0x64>
        123a24:	e1a0000d 	mov	r0, sp
        123a28:	eb6af193 	bl	1be007c <$AddExceptionHandler>
        123a2c:	e1a01005 	mov	r1, r5
        123a30:	e5940014 	ldr	r0, [r4, #20]	; fField20
        123a34:	eb6743fd 	bl	1af4a30 <TStoreMonitor::$CheckIntegrity(unsigned long *)>
        123a38:	e58d006c 	str	r0, [sp, #108]
        123a3c:	e1a0000d 	mov	r0, sp
        123a40:	eb6af59c 	bl	1be10b8 <$ExitHandler>
        123a44:	ea000000 	b	123a4c <TMuxStore::CheckIntegrity(unsigned long *)+0x68>
        123a48:	e3a06001 	mov	r6, #1	; 0x1
        123a4c:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        123a50:	eb6ad890 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        123a54:	e3360000 	teq	r6, #0	; 0x0
        123a58:	11a0000d 	movne	r0, sp
        123a5c:	1b6af9bc 	blne	1be2154 <$NextHandler>
        123a60:	e5bd006c 	ldr	r0, [sp, #108]!
        123a64:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxStore::SetBuddy(TStore *)
 * Address: 00123a68
 */
TMuxStore::SetBuddy(TStore *) {
    /*
        123a68:	e5900010 	ldr	r0, [r0, #16]	; fField16
        123a6c:	ea67861c 	b	1b052e4 <TStore::$SetBuddy(TStore *)>
    */
}

/**
 * Symbol: TMuxStore::OwnsObject(unsigned long)
 * Address: 00123a70
 */
TMuxStore::OwnsObject(unsigned long) {
    /*
        123a70:	e1a0c00d 	mov	ip, sp
        123a74:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        123a78:	e24cb004 	sub	fp, ip, #4	; 0x4
        123a7c:	e1a04000 	mov	r4, r0
        123a80:	e1a05001 	mov	r5, r1
        123a84:	e24dd004 	sub	sp, sp, #4	; 0x4
        123a88:	e5900018 	ldr	r0, [r0, #24]	; fField24
        123a8c:	e3a01000 	mov	r1, #0	; 0x0
        123a90:	eb6aab2f 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        123a94:	e3a00000 	mov	r0, #0	; 0x0
        123a98:	e3a06000 	mov	r6, #0	; 0x0
        123a9c:	e52d006c 	str	r0, [sp, -#108]!
        123aa0:	e28d0008 	add	r0, sp, #8	; 0x8
        123aa4:	eb6a3bb2 	bl	1bb2974 <$setjmp>
        123aa8:	e3300000 	teq	r0, #0	; 0x0
        123aac:	1a000008 	bne	123ad4 <TMuxStore::OwnsObject(unsigned long)+0x64>
        123ab0:	e1a0000d 	mov	r0, sp
        123ab4:	eb6af170 	bl	1be007c <$AddExceptionHandler>
        123ab8:	e1a01005 	mov	r1, r5
        123abc:	e5940010 	ldr	r0, [r4, #16]	; fField16
        123ac0:	eb67756f 	bl	1b01084 <TStore::$OwnsObject(unsigned long)>
        123ac4:	e58d006c 	str	r0, [sp, #108]
        123ac8:	e1a0000d 	mov	r0, sp
        123acc:	eb6af579 	bl	1be10b8 <$ExitHandler>
        123ad0:	ea000000 	b	123ad8 <TMuxStore::OwnsObject(unsigned long)+0x68>
        123ad4:	e3a06001 	mov	r6, #1	; 0x1
        123ad8:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        123adc:	eb6ad86d 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        123ae0:	e3360000 	teq	r6, #0	; 0x0
        123ae4:	11a0000d 	movne	r0, sp
        123ae8:	1b6af999 	blne	1be2154 <$NextHandler>
        123aec:	e5bd006c 	ldr	r0, [sp, #108]!
        123af0:	e20000ff 	and	r0, r0, #255	; 0xff
        123af4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxStore::StoreKind(void)
 * Address: 00123af8
 */
TMuxStore::StoreKind(void) {
    /*
        123af8:	e5900010 	ldr	r0, [r0, #16]	; fField16
        123afc:	ea678e3e 	b	1b073fc <TStore::$StoreKind(void)>
    */
}

/**
 * Symbol: TMuxStore::SetStore(TStore *, unsigned long)
 * Address: 00123b00
 */
TMuxStore::SetStore(TStore *, unsigned long) {
    /*
        123b00:	e1a0c00d 	mov	ip, sp
        123b04:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        123b08:	e24cb004 	sub	fp, ip, #4	; 0x4
        123b0c:	e1a04000 	mov	r4, r0
        123b10:	e1a05002 	mov	r5, r2
        123b14:	e5801010 	str	r1, [r0, #16]	; fField16
        123b18:	e28f0f14 	add	r0, pc, #80	; 0x50
        123b1c:	eb67712f 	bl	1afffe0 <$New__13TStoreMonitorSFPc>
        123b20:	e5840014 	str	r0, [r4, #20]	; fField20
        123b24:	e3300000 	teq	r0, #0	; 0x0
        123b28:	1a000002 	bne	123b38 <TMuxStore::SetStore(TStore *, unsigned long)+0x38>
        123b2c:	eb6af97b 	bl	1be2120 <$MemError>
        123b30:	e3300000 	teq	r0, #0	; 0x0
        123b34:	1a000007 	bne	123b58 <TMuxStore::SetStore(TStore *, unsigned long)+0x58>
        123b38:	e3a03000 	mov	r3, #0	; 0x0
        123b3c:	e92d0008 	stmdb	sp!, {r3}
        123b40:	e1a02005 	mov	r2, r5
        123b44:	e5940014 	ldr	r0, [r4, #20]	; fField20
        123b48:	e59f3034 	ldr	r3, [pc, #34]	; 123b84 <TMuxStore::SetStore(TStore *, unsigned long)+0x84>
        123b4c:	e3a01b01 	mov	r1, #1024	; 0x400
        123b50:	eb6ae4bc 	bl	1bdce48 <TProtocol::$StartMonitor(unsigned long, unsigned long, unsigned long, unsigned char)>
        123b54:	e28dd004 	add	sp, sp, #4	; 0x4
        123b58:	e3300000 	teq	r0, #0	; 0x0
        123b5c:	05b41010 	ldreq	r1, [r4, #16]!	; fField16
        123b60:	05940004 	ldreq	r0, [r4, #4]	; fField4
        123b64:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
        123b68:	0a6760a2 	beq	1afbdf8 <TStoreMonitor::$Init(TStore *)>
        123b6c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        123b70:	544d7578 	strplb	r7, [sp], -#1400
        123b74:	53746f72 	cmnpl	r4, #456	; 0x1c8
        123b78:	654d6f6e 	strvsb	r6, [sp, -#3950]
        123b7c:	69746f72 	ldmvsdb	r4!, {r1, r4, r5, r6, r8, r9, sl, fp, sp, lr}^
        123b80:	00000000 	andeq	r0, r0, r0
        123b84:	546d7578 	strplbt	r7, [sp], -#1400
    */
}

/**
 * Symbol: TMuxStore::IsSameStore(void *, unsigned long)
 * Address: 00123b88
 */
TMuxStore::IsSameStore(void *, unsigned long) {
    /*
        123b88:	e5900010 	ldr	r0, [r0, #16]	; fField16
        123b8c:	ea676ce4 	b	1afef24 <TStore::$IsSameStore(void *, unsigned long)>
    */
}

/**
 * Symbol: TMuxStore::IsLocked(void)
 * Address: 00123b90
 */
TMuxStore::IsLocked(void) {
    /*
        123b90:	e5900010 	ldr	r0, [r0, #16]	; fField16
        123b94:	ea6768d4 	b	1afdeec <TStore::$IsLocked(void)>
    */
}

/**
 * Symbol: TMuxStore::New(void)
 * Address: 00123b98
 */
TMuxStore::New(void) {
    /*
        123b98:	e1a0c00d 	mov	ip, sp
        123b9c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        123ba0:	e24cb004 	sub	fp, ip, #4	; 0x4
        123ba4:	e1a04000 	mov	r4, r0
        123ba8:	e3a06000 	mov	r6, #0	; 0x0
        123bac:	e5806010 	str	r6, [r0, #16]	; fField16
        123bb0:	e5806014 	str	r6, [r0, #20]	; fField20
        123bb4:	e3a0000c 	mov	r0, #12	; 0xc
        123bb8:	eb6aaade 	bl	1bce738 <$__nw(unsigned int)>
        123bbc:	e1b05000 	movs	r5, r0
        123bc0:	0a000004 	beq	123bd8 <TMuxStore::New(void)+0x40>
        123bc4:	e5c56004 	strb	r6, [r5, #4]	; fField4
        123bc8:	e5856000 	str	r6, [r5]
        123bcc:	e2851008 	add	r1, r5, #8	; 0x8
        123bd0:	e1a00005 	mov	r0, r5
        123bd4:	eb6ac392 	bl	1bd4a24 <TUSemaphoreGroup::$GetRefCon(void **)>
        123bd8:	e1b00005 	movs	r0, r5
        123bdc:	e5845018 	str	r5, [r4, #24]	; fField24
        123be0:	0a000005 	beq	123bfc <TMuxStore::New(void)+0x64>
        123be4:	eb6ac7b3 	bl	1bd5ab8 <TULockingSemaphore::$Init(void)>
        123be8:	e3300000 	teq	r0, #0	; 0x0
        123bec:	15940018 	ldrne	r0, [r4, #24]	; fField24
        123bf0:	13300000 	teqne	r0, #0	; 0x0
        123bf4:	13a01001 	movne	r1, #1	; 0x1
        123bf8:	1b6aaac8 	blne	1bce720 <TULockingSemaphore::$__dt(void)>
        123bfc:	e1a00004 	mov	r0, r4
        123c00:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxStore::VppOff(void)
 * Address: 00123c04
 */
TMuxStore::VppOff(void) {
    /*
        123c04:	e5900010 	ldr	r0, [r0, #16]	; fField16
        123c08:	ea67962f 	b	1b094cc <TStore::$VppOff(void)>
    */
}

/**
 * Symbol: TMuxStore::Sleep(void)
 * Address: 00123c0c
 */
TMuxStore::Sleep(void) {
    /*
        123c0c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        123c10:	ea678ddd 	b	1b0738c <TStore::$Sleep(void)>
    */
}

/**
 * Symbol: TMuxStore::Address(unsigned long)
 * Address: 00123c14
 */
TMuxStore::Address(unsigned long) {
    /*
        123c14:	e5900010 	ldr	r0, [r0, #16]	; fField16
        123c18:	ea673b44 	b	1af2930 <TStore::$Address(unsigned long)>
    */
}

/**
 * Symbol: TMuxStore::IsROM(void)
 * Address: 00123c1c
 */
TMuxStore::IsROM(void) {
    /*
        123c1c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        123c20:	ea676cbc 	b	1afef18 <TStore::$IsROM(void)>
    */
}

/**
 * Symbol: TMuxStore::NewWithinTransaction(long, unsigned long *)
 * Address: 00123c24
 */
TMuxStore::NewWithinTransaction(long, unsigned long *) {
    /*
        123c24:	e1a0c00d 	mov	ip, sp
        123c28:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        123c2c:	e24cb004 	sub	fp, ip, #4	; 0x4
        123c30:	e1a04000 	mov	r4, r0
        123c34:	e1a06001 	mov	r6, r1
        123c38:	e1a05002 	mov	r5, r2
        123c3c:	e24dd004 	sub	sp, sp, #4	; 0x4
        123c40:	e5900018 	ldr	r0, [r0, #24]	; fField24
        123c44:	e3a01000 	mov	r1, #0	; 0x0
        123c48:	eb6aaac1 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        123c4c:	e3a00000 	mov	r0, #0	; 0x0
        123c50:	e3a07000 	mov	r7, #0	; 0x0
        123c54:	e52d006c 	str	r0, [sp, -#108]!
        123c58:	e28d0008 	add	r0, sp, #8	; 0x8
        123c5c:	eb6a3b44 	bl	1bb2974 <$setjmp>
        123c60:	e3300000 	teq	r0, #0	; 0x0
        123c64:	1a000009 	bne	123c90 <TMuxStore::NewWithinTransaction(long, unsigned long *)+0x6c>
        123c68:	e1a0000d 	mov	r0, sp
        123c6c:	eb6af102 	bl	1be007c <$AddExceptionHandler>
        123c70:	e1a02005 	mov	r2, r5
        123c74:	e1a01006 	mov	r1, r6
        123c78:	e5940014 	ldr	r0, [r4, #20]	; fField20
        123c7c:	eb098c51 	bl	386dc8 <TStoreMonitor::NewWithinTransaction(long, unsigned long *)>
        123c80:	e58d006c 	str	r0, [sp, #108]
        123c84:	e1a0000d 	mov	r0, sp
        123c88:	eb6af50a 	bl	1be10b8 <$ExitHandler>
        123c8c:	ea000000 	b	123c94 <TMuxStore::NewWithinTransaction(long, unsigned long *)+0x70>
        123c90:	e3a07001 	mov	r7, #1	; 0x1
        123c94:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        123c98:	eb6ad7fe 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        123c9c:	e3370000 	teq	r7, #0	; 0x0
        123ca0:	11a0000d 	movne	r0, sp
        123ca4:	1b6af92a 	blne	1be2154 <$NextHandler>
        123ca8:	e5bd006c 	ldr	r0, [sp, #108]!
        123cac:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxStore::StartTransactionAgainst(unsigned long)
 * Address: 00123cb0
 */
TMuxStore::StartTransactionAgainst(unsigned long) {
    /*
        123cb0:	e1a0c00d 	mov	ip, sp
        123cb4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        123cb8:	e24cb004 	sub	fp, ip, #4	; 0x4
        123cbc:	e1a04000 	mov	r4, r0
        123cc0:	e1a05001 	mov	r5, r1
        123cc4:	e24dd004 	sub	sp, sp, #4	; 0x4
        123cc8:	e5900018 	ldr	r0, [r0, #24]	; fField24
        123ccc:	e3a01000 	mov	r1, #0	; 0x0
        123cd0:	eb6aaa9f 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        123cd4:	e3a00000 	mov	r0, #0	; 0x0
        123cd8:	e3a06000 	mov	r6, #0	; 0x0
        123cdc:	e52d006c 	str	r0, [sp, -#108]!
        123ce0:	e28d0008 	add	r0, sp, #8	; 0x8
        123ce4:	eb6a3b22 	bl	1bb2974 <$setjmp>
        123ce8:	e3300000 	teq	r0, #0	; 0x0
        123cec:	1a000008 	bne	123d14 <TMuxStore::StartTransactionAgainst(unsigned long)+0x64>
        123cf0:	e1a0000d 	mov	r0, sp
        123cf4:	eb6af0e0 	bl	1be007c <$AddExceptionHandler>
        123cf8:	e1a01005 	mov	r1, r5
        123cfc:	e5940014 	ldr	r0, [r4, #20]	; fField20
        123d00:	eb098c33 	bl	386dd4 <TStoreMonitor::StartTransactionAgainst(unsigned long)>
        123d04:	e58d006c 	str	r0, [sp, #108]
        123d08:	e1a0000d 	mov	r0, sp
        123d0c:	eb6af4e9 	bl	1be10b8 <$ExitHandler>
        123d10:	ea000000 	b	123d18 <TMuxStore::StartTransactionAgainst(unsigned long)+0x68>
        123d14:	e3a06001 	mov	r6, #1	; 0x1
        123d18:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        123d1c:	eb6ad7dd 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        123d20:	e3360000 	teq	r6, #0	; 0x0
        123d24:	11a0000d 	movne	r0, sp
        123d28:	1b6af909 	blne	1be2154 <$NextHandler>
        123d2c:	e5bd006c 	ldr	r0, [sp, #108]!
        123d30:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxStore::SeparatelyAbort(unsigned long)
 * Address: 00123d34
 */
TMuxStore::SeparatelyAbort(unsigned long) {
    /*
        123d34:	e1a0c00d 	mov	ip, sp
        123d38:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        123d3c:	e24cb004 	sub	fp, ip, #4	; 0x4
        123d40:	e1a04000 	mov	r4, r0
        123d44:	e1a05001 	mov	r5, r1
        123d48:	e24dd004 	sub	sp, sp, #4	; 0x4
        123d4c:	e5900018 	ldr	r0, [r0, #24]	; fField24
        123d50:	e3a01000 	mov	r1, #0	; 0x0
        123d54:	eb6aaa7e 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        123d58:	e3a00000 	mov	r0, #0	; 0x0
        123d5c:	e3a06000 	mov	r6, #0	; 0x0
        123d60:	e52d006c 	str	r0, [sp, -#108]!
        123d64:	e28d0008 	add	r0, sp, #8	; 0x8
        123d68:	eb6a3b01 	bl	1bb2974 <$setjmp>
        123d6c:	e3300000 	teq	r0, #0	; 0x0
        123d70:	1a000008 	bne	123d98 <TMuxStore::SeparatelyAbort(unsigned long)+0x64>
        123d74:	e1a0000d 	mov	r0, sp
        123d78:	eb6af0bf 	bl	1be007c <$AddExceptionHandler>
        123d7c:	e1a01005 	mov	r1, r5
        123d80:	e5940014 	ldr	r0, [r4, #20]	; fField20
        123d84:	eb098c15 	bl	386de0 <TStoreMonitor::SeparatelyAbort(unsigned long)>
        123d88:	e58d006c 	str	r0, [sp, #108]
        123d8c:	e1a0000d 	mov	r0, sp
        123d90:	eb6af4c8 	bl	1be10b8 <$ExitHandler>
        123d94:	ea000000 	b	123d9c <TMuxStore::SeparatelyAbort(unsigned long)+0x68>
        123d98:	e3a06001 	mov	r6, #1	; 0x1
        123d9c:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        123da0:	eb6ad7bc 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        123da4:	e3360000 	teq	r6, #0	; 0x0
        123da8:	11a0000d 	movne	r0, sp
        123dac:	1b6af8e8 	blne	1be2154 <$NextHandler>
        123db0:	e5bd006c 	ldr	r0, [sp, #108]!
        123db4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxStore::AddToCurrentTransaction(unsigned long)
 * Address: 00123db8
 */
TMuxStore::AddToCurrentTransaction(unsigned long) {
    /*
        123db8:	e1a0c00d 	mov	ip, sp
        123dbc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        123dc0:	e24cb004 	sub	fp, ip, #4	; 0x4
        123dc4:	e1a04000 	mov	r4, r0
        123dc8:	e1a05001 	mov	r5, r1
        123dcc:	e24dd004 	sub	sp, sp, #4	; 0x4
        123dd0:	e5900018 	ldr	r0, [r0, #24]	; fField24
        123dd4:	e3a01000 	mov	r1, #0	; 0x0
        123dd8:	eb6aaa5d 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        123ddc:	e3a00000 	mov	r0, #0	; 0x0
        123de0:	e3a06000 	mov	r6, #0	; 0x0
        123de4:	e52d006c 	str	r0, [sp, -#108]!
        123de8:	e28d0008 	add	r0, sp, #8	; 0x8
        123dec:	eb6a3ae0 	bl	1bb2974 <$setjmp>
        123df0:	e3300000 	teq	r0, #0	; 0x0
        123df4:	1a000008 	bne	123e1c <TMuxStore::AddToCurrentTransaction(unsigned long)+0x64>
        123df8:	e1a0000d 	mov	r0, sp
        123dfc:	eb6af09e 	bl	1be007c <$AddExceptionHandler>
        123e00:	e1a01005 	mov	r1, r5
        123e04:	e5940014 	ldr	r0, [r4, #20]	; fField20
        123e08:	eb098bf7 	bl	386dec <TStoreMonitor::AddToCurrentTransaction(unsigned long)>
        123e0c:	e58d006c 	str	r0, [sp, #108]
        123e10:	e1a0000d 	mov	r0, sp
        123e14:	eb6af4a7 	bl	1be10b8 <$ExitHandler>
        123e18:	ea000000 	b	123e20 <TMuxStore::AddToCurrentTransaction(unsigned long)+0x68>
        123e1c:	e3a06001 	mov	r6, #1	; 0x1
        123e20:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        123e24:	eb6ad79b 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        123e28:	e3360000 	teq	r6, #0	; 0x0
        123e2c:	11a0000d 	movne	r0, sp
        123e30:	1b6af8c7 	blne	1be2154 <$NextHandler>
        123e34:	e5bd006c 	ldr	r0, [sp, #108]!
        123e38:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxStore::InSeparateTransaction(unsigned long)
 * Address: 00123e3c
 */
TMuxStore::InSeparateTransaction(unsigned long) {
    /*
        123e3c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        123e40:	ea098b65 	b	386bdc <TStore::InSeparateTransaction(unsigned long)>
    */
}

/**
 * Symbol: TMuxStore::LockReadOnly(void)
 * Address: 00123e44
 */
TMuxStore::LockReadOnly(void) {
    /*
        123e44:	e1a0c00d 	mov	ip, sp
        123e48:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        123e4c:	e24cb004 	sub	fp, ip, #4	; 0x4
        123e50:	e1a04000 	mov	r4, r0
        123e54:	e24dd004 	sub	sp, sp, #4	; 0x4
        123e58:	e5900018 	ldr	r0, [r0, #24]	; fField24
        123e5c:	e3a01000 	mov	r1, #0	; 0x0
        123e60:	eb6aaa3b 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        123e64:	e3a00000 	mov	r0, #0	; 0x0
        123e68:	e3a05000 	mov	r5, #0	; 0x0
        123e6c:	e52d006c 	str	r0, [sp, -#108]!
        123e70:	e28d0008 	add	r0, sp, #8	; 0x8
        123e74:	eb6a3abe 	bl	1bb2974 <$setjmp>
        123e78:	e3300000 	teq	r0, #0	; 0x0
        123e7c:	1a000007 	bne	123ea0 <TMuxStore::LockReadOnly(void)+0x5c>
        123e80:	e1a0000d 	mov	r0, sp
        123e84:	eb6af07c 	bl	1be007c <$AddExceptionHandler>
        123e88:	e5940014 	ldr	r0, [r4, #20]	; fField20
        123e8c:	eb098bd9 	bl	386df8 <TStoreMonitor::LockReadOnly(void)>
        123e90:	e58d006c 	str	r0, [sp, #108]
        123e94:	e1a0000d 	mov	r0, sp
        123e98:	eb6af486 	bl	1be10b8 <$ExitHandler>
        123e9c:	ea000000 	b	123ea4 <TMuxStore::LockReadOnly(void)+0x60>
        123ea0:	e3a05001 	mov	r5, #1	; 0x1
        123ea4:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        123ea8:	eb6ad77a 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        123eac:	e3350000 	teq	r5, #0	; 0x0
        123eb0:	11a0000d 	movne	r0, sp
        123eb4:	1b6af8a6 	blne	1be2154 <$NextHandler>
        123eb8:	e5bd006c 	ldr	r0, [sp, #108]!
        123ebc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxStore::Delete(void)
 * Address: 00123ec0
 */
TMuxStore::Delete(void) {
    /*
        123ec0:	e1a0c00d 	mov	ip, sp
        123ec4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        123ec8:	e24cb004 	sub	fp, ip, #4	; 0x4
        123ecc:	e1a04000 	mov	r4, r0
        123ed0:	e5900014 	ldr	r0, [r0, #20]	; fField20
        123ed4:	e3a05000 	mov	r5, #0	; 0x0
        123ed8:	e3300000 	teq	r0, #0	; 0x0
        123edc:	0a000001 	beq	123ee8 <TMuxStore::Delete(void)+0x28>
        123ee0:	eb674b07 	bl	1af6b04 <TStoreMonitor::$Delete(void)>
        123ee4:	e5845014 	str	r5, [r4, #20]	; fField20
        123ee8:	e5940010 	ldr	r0, [r4, #16]	; fField16
        123eec:	e3300000 	teq	r0, #0	; 0x0
        123ef0:	0a000001 	beq	123efc <TMuxStore::Delete(void)+0x3c>
        123ef4:	eb674b07 	bl	1af6b18 <TStore::$Delete(void)>
        123ef8:	e5845010 	str	r5, [r4, #16]	; fField16
        123efc:	e5940018 	ldr	r0, [r4, #24]	; fField24
        123f00:	e3300000 	teq	r0, #0	; 0x0
        123f04:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        123f08:	e3a01001 	mov	r1, #1	; 0x1
        123f0c:	eb6aaa03 	bl	1bce720 <TULockingSemaphore::$__dt(void)>
        123f10:	e5a45018 	str	r5, [r4, #24]!	; fField24
        123f14:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxStore::UnlockReadOnly(unsigned char)
 * Address: 00123f18
 */
TMuxStore::UnlockReadOnly(unsigned char) {
    /*
        123f18:	e20110ff 	and	r1, r1, #255	; 0xff
        123f1c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        123f20:	ea098b33 	b	386bf4 <TStore::UnlockReadOnly(unsigned char)>
    */
}

/**
 * Symbol: TMuxStore::InTransaction(void)
 * Address: 00123f24
 */
TMuxStore::InTransaction(void) {
    /*
        123f24:	e5900010 	ldr	r0, [r0, #16]	; fField16
        123f28:	ea098b34 	b	386c00 <TStore::InTransaction(void)>
    */
}

/**
 * Symbol: TMuxStore::NewObject(char *, long, unsigned long *)
 * Address: 00123f2c
 */
TMuxStore::NewObject(char *, long, unsigned long *) {
    /*
        123f2c:	e1a0c00d 	mov	ip, sp
        123f30:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        123f34:	e24cb004 	sub	fp, ip, #4	; 0x4
        123f38:	e1a04000 	mov	r4, r0
        123f3c:	e1a07001 	mov	r7, r1
        123f40:	e1a06002 	mov	r6, r2
        123f44:	e1a05003 	mov	r5, r3
        123f48:	e24dd004 	sub	sp, sp, #4	; 0x4
        123f4c:	e5900018 	ldr	r0, [r0, #24]	; fField24
        123f50:	e3a01000 	mov	r1, #0	; 0x0
        123f54:	eb6aa9fe 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        123f58:	e3a00000 	mov	r0, #0	; 0x0
        123f5c:	e3a08000 	mov	r8, #0	; 0x0
        123f60:	e52d006c 	str	r0, [sp, -#108]!
        123f64:	e28d0008 	add	r0, sp, #8	; 0x8
        123f68:	eb6a3a81 	bl	1bb2974 <$setjmp>
        123f6c:	e3300000 	teq	r0, #0	; 0x0
        123f70:	1a00000a 	bne	123fa0 <TMuxStore::NewObject(char *, long, unsigned long *)+0x74>
        123f74:	e1a0000d 	mov	r0, sp
        123f78:	eb6af03f 	bl	1be007c <$AddExceptionHandler>
        123f7c:	e1a03005 	mov	r3, r5
        123f80:	e1a02006 	mov	r2, r6
        123f84:	e1a01007 	mov	r1, r7
        123f88:	e5940014 	ldr	r0, [r4, #20]	; fField20
        123f8c:	eb098b9f 	bl	386e10 <TStoreMonitor::NewObject(char *, long, unsigned long *)>
        123f90:	e58d006c 	str	r0, [sp, #108]
        123f94:	e1a0000d 	mov	r0, sp
        123f98:	eb6af446 	bl	1be10b8 <$ExitHandler>
        123f9c:	ea000000 	b	123fa4 <TMuxStore::NewObject(char *, long, unsigned long *)+0x78>
        123fa0:	e3a08001 	mov	r8, #1	; 0x1
        123fa4:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        123fa8:	eb6ad73a 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        123fac:	e3380000 	teq	r8, #0	; 0x0
        123fb0:	11a0000d 	movne	r0, sp
        123fb4:	1b6af866 	blne	1be2154 <$NextHandler>
        123fb8:	e5bd006c 	ldr	r0, [sp, #108]!
        123fbc:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxStore::ReplaceObject(unsigned long, char *, long)
 * Address: 00123fc0
 */
TMuxStore::ReplaceObject(unsigned long, char *, long) {
    /*
        123fc0:	e1a0c00d 	mov	ip, sp
        123fc4:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        123fc8:	e24cb004 	sub	fp, ip, #4	; 0x4
        123fcc:	e1a04000 	mov	r4, r0
        123fd0:	e1a07001 	mov	r7, r1
        123fd4:	e1a06002 	mov	r6, r2
        123fd8:	e1a05003 	mov	r5, r3
        123fdc:	e24dd004 	sub	sp, sp, #4	; 0x4
        123fe0:	e5900018 	ldr	r0, [r0, #24]	; fField24
        123fe4:	e3a01000 	mov	r1, #0	; 0x0
        123fe8:	eb6aa9d9 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        123fec:	e3a00000 	mov	r0, #0	; 0x0
        123ff0:	e3a08000 	mov	r8, #0	; 0x0
        123ff4:	e52d006c 	str	r0, [sp, -#108]!
        123ff8:	e28d0008 	add	r0, sp, #8	; 0x8
        123ffc:	eb6a3a5c 	bl	1bb2974 <$setjmp>
        124000:	e3300000 	teq	r0, #0	; 0x0
        124004:	1a00000a 	bne	124034 <TMuxStore::ReplaceObject(unsigned long, char *, long)+0x74>
        124008:	e1a0000d 	mov	r0, sp
        12400c:	eb6af01a 	bl	1be007c <$AddExceptionHandler>
        124010:	e1a03005 	mov	r3, r5
        124014:	e1a02006 	mov	r2, r6
        124018:	e1a01007 	mov	r1, r7
        12401c:	e5940014 	ldr	r0, [r4, #20]	; fField20
        124020:	eb098b7d 	bl	386e1c <TStoreMonitor::ReplaceObject(unsigned long, char *, long)>
        124024:	e58d006c 	str	r0, [sp, #108]
        124028:	e1a0000d 	mov	r0, sp
        12402c:	eb6af421 	bl	1be10b8 <$ExitHandler>
        124030:	ea000000 	b	124038 <TMuxStore::ReplaceObject(unsigned long, char *, long)+0x78>
        124034:	e3a08001 	mov	r8, #1	; 0x1
        124038:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        12403c:	eb6ad715 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        124040:	e3380000 	teq	r8, #0	; 0x0
        124044:	11a0000d 	movne	r0, sp
        124048:	1b6af841 	blne	1be2154 <$NextHandler>
        12404c:	e5bd006c 	ldr	r0, [sp, #108]!
        124050:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxStore::CalcXIPObjectSize(long, long, long *)
 * Address: 00124054
 */
TMuxStore::CalcXIPObjectSize(long, long, long *) {
    /*
        124054:	e1a0c00d 	mov	ip, sp
        124058:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        12405c:	e24cb004 	sub	fp, ip, #4	; 0x4
        124060:	e1a04000 	mov	r4, r0
        124064:	e1a07001 	mov	r7, r1
        124068:	e1a06002 	mov	r6, r2
        12406c:	e1a05003 	mov	r5, r3
        124070:	e24dd004 	sub	sp, sp, #4	; 0x4
        124074:	e5900018 	ldr	r0, [r0, #24]	; fField24
        124078:	e3a01000 	mov	r1, #0	; 0x0
        12407c:	eb6aa9b4 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        124080:	e3a00000 	mov	r0, #0	; 0x0
        124084:	e3a08000 	mov	r8, #0	; 0x0
        124088:	e52d006c 	str	r0, [sp, -#108]!
        12408c:	e28d0008 	add	r0, sp, #8	; 0x8
        124090:	eb6a3a37 	bl	1bb2974 <$setjmp>
        124094:	e3300000 	teq	r0, #0	; 0x0
        124098:	1a00000a 	bne	1240c8 <TMuxStore::CalcXIPObjectSize(long, long, long *)+0x74>
        12409c:	e1a0000d 	mov	r0, sp
        1240a0:	eb6aeff5 	bl	1be007c <$AddExceptionHandler>
        1240a4:	e1a03005 	mov	r3, r5
        1240a8:	e1a02006 	mov	r2, r6
        1240ac:	e1a01007 	mov	r1, r7
        1240b0:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1240b4:	eb098ada 	bl	386c24 <TStore::CalcXIPObjectSize(long, long, long *)>
        1240b8:	e58d006c 	str	r0, [sp, #108]
        1240bc:	e1a0000d 	mov	r0, sp
        1240c0:	eb6af3fc 	bl	1be10b8 <$ExitHandler>
        1240c4:	ea000000 	b	1240cc <TMuxStore::CalcXIPObjectSize(long, long, long *)+0x78>
        1240c8:	e3a08001 	mov	r8, #1	; 0x1
        1240cc:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        1240d0:	eb6ad6f0 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1240d4:	e3380000 	teq	r8, #0	; 0x0
        1240d8:	11a0000d 	movne	r0, sp
        1240dc:	1b6af81c 	blne	1be2154 <$NextHandler>
        1240e0:	e5bd006c 	ldr	r0, [sp, #108]!
        1240e4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxStore::NewXIPObject(long, unsigned long *)
 * Address: 001240e8
 */
TMuxStore::NewXIPObject(long, unsigned long *) {
    /*
        1240e8:	e1a0c00d 	mov	ip, sp
        1240ec:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1240f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1240f4:	e1a04000 	mov	r4, r0
        1240f8:	e1a06001 	mov	r6, r1
        1240fc:	e1a05002 	mov	r5, r2
        124100:	e24dd004 	sub	sp, sp, #4	; 0x4
        124104:	e5900018 	ldr	r0, [r0, #24]	; fField24
        124108:	e3a01000 	mov	r1, #0	; 0x0
        12410c:	eb6aa990 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        124110:	e3a00000 	mov	r0, #0	; 0x0
        124114:	e3a07000 	mov	r7, #0	; 0x0
        124118:	e52d006c 	str	r0, [sp, -#108]!
        12411c:	e28d0008 	add	r0, sp, #8	; 0x8
        124120:	eb6a3a13 	bl	1bb2974 <$setjmp>
        124124:	e3300000 	teq	r0, #0	; 0x0
        124128:	1a000009 	bne	124154 <TMuxStore::NewXIPObject(long, unsigned long *)+0x6c>
        12412c:	e1a0000d 	mov	r0, sp
        124130:	eb6aefd1 	bl	1be007c <$AddExceptionHandler>
        124134:	e1a02005 	mov	r2, r5
        124138:	e1a01006 	mov	r1, r6
        12413c:	e5940014 	ldr	r0, [r4, #20]	; fField20
        124140:	eb098b38 	bl	386e28 <TStoreMonitor::NewXIPObject(long, unsigned long *)>
        124144:	e58d006c 	str	r0, [sp, #108]
        124148:	e1a0000d 	mov	r0, sp
        12414c:	eb6af3d9 	bl	1be10b8 <$ExitHandler>
        124150:	ea000000 	b	124158 <TMuxStore::NewXIPObject(long, unsigned long *)+0x70>
        124154:	e3a07001 	mov	r7, #1	; 0x1
        124158:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        12415c:	eb6ad6cd 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        124160:	e3370000 	teq	r7, #0	; 0x0
        124164:	11a0000d 	movne	r0, sp
        124168:	1b6af7f9 	blne	1be2154 <$NextHandler>
        12416c:	e5bd006c 	ldr	r0, [sp, #108]!
        124170:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)
 * Address: 00124174
 */
TMuxStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *) {
    /*
        124174:	e1a0c00d 	mov	ip, sp
        124178:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        12417c:	e24cb004 	sub	fp, ip, #4	; 0x4
        124180:	e1a04000 	mov	r4, r0
        124184:	e1a07001 	mov	r7, r1
        124188:	e1a06002 	mov	r6, r2
        12418c:	e1a05003 	mov	r5, r3
        124190:	e59b9004 	ldr	r9, [fp, #4]	; fField4
        124194:	e24dd004 	sub	sp, sp, #4	; 0x4
        124198:	e5900018 	ldr	r0, [r0, #24]	; fField24
        12419c:	e3a01000 	mov	r1, #0	; 0x0
        1241a0:	eb6aa96b 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        1241a4:	e3a00000 	mov	r0, #0	; 0x0
        1241a8:	e3a08000 	mov	r8, #0	; 0x0
        1241ac:	e52d006c 	str	r0, [sp, -#108]!
        1241b0:	e28d0008 	add	r0, sp, #8	; 0x8
        1241b4:	eb6a39ee 	bl	1bb2974 <$setjmp>
        1241b8:	e3300000 	teq	r0, #0	; 0x0
        1241bc:	1a00000d 	bne	1241f8 <TMuxStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0x84>
        1241c0:	e1a0000d 	mov	r0, sp
        1241c4:	eb6aefac 	bl	1be007c <$AddExceptionHandler>
        1241c8:	e1a03009 	mov	r3, r9
        1241cc:	e92d0008 	stmdb	sp!, {r3}
        1241d0:	e1a03005 	mov	r3, r5
        1241d4:	e1a02006 	mov	r2, r6
        1241d8:	e1a01007 	mov	r1, r7
        1241dc:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1241e0:	eb098a95 	bl	386c3c <TStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)>
        1241e4:	e28dd004 	add	sp, sp, #4	; 0x4
        1241e8:	e58d006c 	str	r0, [sp, #108]
        1241ec:	e1a0000d 	mov	r0, sp
        1241f0:	eb6af3b0 	bl	1be10b8 <$ExitHandler>
        1241f4:	ea000000 	b	1241fc <TMuxStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0x88>
        1241f8:	e3a08001 	mov	r8, #1	; 0x1
        1241fc:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        124200:	eb6ad6a4 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        124204:	e3380000 	teq	r8, #0	; 0x0
        124208:	11a0000d 	movne	r0, sp
        12420c:	1b6af7d0 	blne	1be2154 <$NextHandler>
        124210:	e5bd006c 	ldr	r0, [sp, #108]!
        124214:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxStore::GetStore(void)
 * Address: 00124218
 */
TMuxStore::GetStore(void) {
    /*
        124218:	e5900010 	ldr	r0, [r0, #16]	; fField16
        12421c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TMuxStore::Acquire(void)
 * Address: 00124220
 */
TMuxStore::Acquire(void) {
    /*
        124220:	e5900018 	ldr	r0, [r0, #24]	; fField24
        124224:	e3a01000 	mov	r1, #0	; 0x0
        124228:	ea6aa949 	b	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
    */
}

/**
 * Symbol: TMuxStore::Release(void)
 * Address: 0012422c
 */
TMuxStore::Release(void) {
    /*
        12422c:	e5900018 	ldr	r0, [r0, #24]	; fField24
        124230:	ea6ad698 	b	1bd9c98 <TULockingSemaphore::$Release(void)>
    */
}

/**
 * Symbol: TMuxStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)
 * Address: 00124234
 */
TMuxStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *) {
    /*
        124234:	e3a00000 	mov	r0, #0	; 0x0
        124238:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TMuxStore::NeedsFormat(unsigned char *)
 * Address: 001242c4
 */
TMuxStore::NeedsFormat(unsigned char *) {
    /*
        1242c4:	e1a0c00d 	mov	ip, sp
        1242c8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1242cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1242d0:	e1a04000 	mov	r4, r0
        1242d4:	e1a05001 	mov	r5, r1
        1242d8:	e24dd004 	sub	sp, sp, #4	; 0x4
        1242dc:	e5900018 	ldr	r0, [r0, #24]	; fField24
        1242e0:	e3a01000 	mov	r1, #0	; 0x0
        1242e4:	eb6aa91a 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        1242e8:	e3a00000 	mov	r0, #0	; 0x0
        1242ec:	e3a06000 	mov	r6, #0	; 0x0
        1242f0:	e52d006c 	str	r0, [sp, -#108]!
        1242f4:	e28d0008 	add	r0, sp, #8	; 0x8
        1242f8:	eb6a399d 	bl	1bb2974 <$setjmp>
        1242fc:	e3300000 	teq	r0, #0	; 0x0
        124300:	1a000008 	bne	124328 <TMuxStore::NeedsFormat(unsigned char *)+0x64>
        124304:	e1a0000d 	mov	r0, sp
        124308:	eb6aef5b 	bl	1be007c <$AddExceptionHandler>
        12430c:	e1a01005 	mov	r1, r5
        124310:	e5940014 	ldr	r0, [r4, #20]	; fField20
        124314:	eb676f2c 	bl	1afffcc <TStoreMonitor::$NeedsFormat(unsigned char *)>
        124318:	e58d006c 	str	r0, [sp, #108]
        12431c:	e1a0000d 	mov	r0, sp
        124320:	eb6af364 	bl	1be10b8 <$ExitHandler>
        124324:	ea000000 	b	12432c <TMuxStore::NeedsFormat(unsigned char *)+0x68>
        124328:	e3a06001 	mov	r6, #1	; 0x1
        12432c:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        124330:	eb6ad658 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        124334:	e3360000 	teq	r6, #0	; 0x0
        124338:	11a0000d 	movne	r0, sp
        12433c:	1b6af784 	blne	1be2154 <$NextHandler>
        124340:	e5bd006c 	ldr	r0, [sp, #108]!
        124344:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxStore::Format(void)
 * Address: 001243d8
 */
TMuxStore::Format(void) {
    /*
        1243d8:	e1a0c00d 	mov	ip, sp
        1243dc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1243e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1243e4:	e1a04000 	mov	r4, r0
        1243e8:	e24dd004 	sub	sp, sp, #4	; 0x4
        1243ec:	e5900018 	ldr	r0, [r0, #24]	; fField24
        1243f0:	e3a01000 	mov	r1, #0	; 0x0
        1243f4:	eb6aa8d6 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        1243f8:	e3a00000 	mov	r0, #0	; 0x0
        1243fc:	e3a05000 	mov	r5, #0	; 0x0
        124400:	e52d006c 	str	r0, [sp, -#108]!
        124404:	e28d0008 	add	r0, sp, #8	; 0x8
        124408:	eb6a3959 	bl	1bb2974 <$setjmp>
        12440c:	e3300000 	teq	r0, #0	; 0x0
        124410:	1a000007 	bne	124434 <TMuxStore::Format(void)+0x5c>
        124414:	e1a0000d 	mov	r0, sp
        124418:	eb6aef17 	bl	1be007c <$AddExceptionHandler>
        12441c:	e5940014 	ldr	r0, [r4, #20]	; fField20
        124420:	eb675215 	bl	1af8c7c <TStoreMonitor::$Format(void)>
        124424:	e58d006c 	str	r0, [sp, #108]
        124428:	e1a0000d 	mov	r0, sp
        12442c:	eb6af321 	bl	1be10b8 <$ExitHandler>
        124430:	ea000000 	b	124438 <TMuxStore::Format(void)+0x60>
        124434:	e3a05001 	mov	r5, #1	; 0x1
        124438:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        12443c:	eb6ad615 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        124440:	e3350000 	teq	r5, #0	; 0x0
        124444:	11a0000d 	movne	r0, sp
        124448:	1b6af741 	blne	1be2154 <$NextHandler>
        12444c:	e5bd006c 	ldr	r0, [sp, #108]!
        124450:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxStore::GetRootId(unsigned long *)
 * Address: 001244a0
 */
TMuxStore::GetRootId(unsigned long *) {
    /*
        1244a0:	e1a0c00d 	mov	ip, sp
        1244a4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1244a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1244ac:	e1a04000 	mov	r4, r0
        1244b0:	e1a05001 	mov	r5, r1
        1244b4:	e24dd004 	sub	sp, sp, #4	; 0x4
        1244b8:	e5900018 	ldr	r0, [r0, #24]	; fField24
        1244bc:	e3a01000 	mov	r1, #0	; 0x0
        1244c0:	eb6aa8a3 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        1244c4:	e3a00000 	mov	r0, #0	; 0x0
        1244c8:	e3a06000 	mov	r6, #0	; 0x0
        1244cc:	e52d006c 	str	r0, [sp, -#108]!
        1244d0:	e28d0008 	add	r0, sp, #8	; 0x8
        1244d4:	eb6a3926 	bl	1bb2974 <$setjmp>
        1244d8:	e3300000 	teq	r0, #0	; 0x0
        1244dc:	1a000008 	bne	124504 <TMuxStore::GetRootId(unsigned long *)+0x64>
        1244e0:	e1a0000d 	mov	r0, sp
        1244e4:	eb6aeee4 	bl	1be007c <$AddExceptionHandler>
        1244e8:	e1a01005 	mov	r1, r5
        1244ec:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1244f0:	eb675a0b 	bl	1afad24 <TStore::$GetRootId(unsigned long *)>
        1244f4:	e58d006c 	str	r0, [sp, #108]
        1244f8:	e1a0000d 	mov	r0, sp
        1244fc:	eb6af2ed 	bl	1be10b8 <$ExitHandler>
        124500:	ea000000 	b	124508 <TMuxStore::GetRootId(unsigned long *)+0x68>
        124504:	e3a06001 	mov	r6, #1	; 0x1
        124508:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        12450c:	eb6ad5e1 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        124510:	e3360000 	teq	r6, #0	; 0x0
        124514:	11a0000d 	movne	r0, sp
        124518:	1b6af70d 	blne	1be2154 <$NextHandler>
        12451c:	e5bd006c 	ldr	r0, [sp, #108]!
        124520:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TMuxStore::NewObject(long, unsigned long *)
 * Address: 0012452c
 */
TMuxStore::NewObject(long, unsigned long *) {
    /*
        12452c:	e1a0c00d 	mov	ip, sp
        124530:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        124534:	e24cb004 	sub	fp, ip, #4	; 0x4
        124538:	e1a04000 	mov	r4, r0
        12453c:	e1a06001 	mov	r6, r1
        124540:	e1a05002 	mov	r5, r2
        124544:	e24dd004 	sub	sp, sp, #4	; 0x4
        124548:	e5900018 	ldr	r0, [r0, #24]	; fField24
        12454c:	e3a01000 	mov	r1, #0	; 0x0
        124550:	eb6aa87f 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        124554:	e3a00000 	mov	r0, #0	; 0x0
        124558:	e3a07000 	mov	r7, #0	; 0x0
        12455c:	e52d006c 	str	r0, [sp, -#108]!
        124560:	e28d0008 	add	r0, sp, #8	; 0x8
        124564:	eb6a3902 	bl	1bb2974 <$setjmp>
        124568:	e3300000 	teq	r0, #0	; 0x0
        12456c:	1a000009 	bne	124598 <TMuxStore::NewObject(long, unsigned long *)+0x6c>
        124570:	e1a0000d 	mov	r0, sp
        124574:	eb6aeec0 	bl	1be007c <$AddExceptionHandler>
        124578:	e1a02005 	mov	r2, r5
        12457c:	e1a01006 	mov	r1, r6
        124580:	e5940014 	ldr	r0, [r4, #20]	; fField20
        124584:	eb676e9f 	bl	1b00008 <TStoreMonitor::$NewObject(long, unsigned long *)>
        124588:	e58d006c 	str	r0, [sp, #108]
        12458c:	e1a0000d 	mov	r0, sp
        124590:	eb6af2c8 	bl	1be10b8 <$ExitHandler>
        124594:	ea000000 	b	12459c <TMuxStore::NewObject(long, unsigned long *)+0x70>
        124598:	e3a07001 	mov	r7, #1	; 0x1
        12459c:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        1245a0:	eb6ad5bc 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1245a4:	e3370000 	teq	r7, #0	; 0x0
        1245a8:	11a0000d 	movne	r0, sp
        1245ac:	1b6af6e8 	blne	1be2154 <$NextHandler>
        1245b0:	e5bd006c 	ldr	r0, [sp, #108]!
        1245b4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: ClassInfo__9TMuxStoreSFv
 * Address: 00386e70
 */
void TMuxStore::ClassInfo() {
    /*
        386e70:	e24f0044 	sub	r0, pc, #68	; 0x44
        386e74:	e1a0f00e 	mov	pc, lr
        386e78:	e3a00000 	mov	r0, #0	; 0x0
        386e7c:	e1a0f00e 	mov	pc, lr
        386e80:	544d7578 	strplb	r7, [sp], -#1400
        386e84:	53746f72 	cmnpl	r4, #456	; 0x1c8
        386e88:	65005453 	strvs	r5, [r0, -#1107]	; fField1107
        386e8c:	746f7265 	strvcbt	r7, [pc], #265	; 386e94 <ClassInfo__9TMuxStoreSFv+0x24>
        386e98:	eafffff4 	b	386e70 <ClassInfo__9TMuxStoreSFv>
        386e9c:	ea5de456 	b	1affffc <TMuxStore::$New(void)>
        386ea0:	ea5dbf1e 	b	1af6b20 <TMuxStore::$Delete(void)>
        386ea4:	ea5dd7e8 	b	1afce4c <TMuxStore::$Init(void *, unsigned long, unsigned long, int, unsigned long, void *)>
        386ea8:	ea5de44a 	b	1afffd8 <TMuxStore::$NeedsFormat(unsigned char *)>
        386eac:	ea5dcb75 	b	1af9c88 <TMuxStore::$Format(void)>
        386eb0:	ea5dcf9c 	b	1afad28 <TMuxStore::$GetRootId(unsigned long *)>
        386eb4:	ea5de456 	b	1b00014 <TMuxStore::$NewObject(long, unsigned long *)>
        386eb8:	ea5dc346 	b	1af7bd8 <TMuxStore::$EraseObject(unsigned long)>
        386ebc:	ea5dbf1e 	b	1af6b3c <TMuxStore::$DeleteObject(unsigned long)>
        386ec0:	ea5dfd17 	b	1b06324 <TMuxStore::$SetObjectSize(unsigned long, long)>
        386ec4:	ea5dcf8e 	b	1afad04 <TMuxStore::$GetObjectSize(unsigned long, long *)>
        386ec8:	ea5e0d8e 	b	1b0a508 <TMuxStore::$Write(unsigned long, long, char *, long)>
        386ecc:	ea5dec9d 	b	1b02148 <TMuxStore::$Read(unsigned long, long, char *, long)>
        386ed0:	ea5dcf9e 	b	1afad50 <TMuxStore::$GetStoreSizes(long *, long *)>
        386ed4:	ea5de00c 	b	1afef0c <TMuxStore::$IsReadOnly(unsigned char *)>
        386ed8:	ea5de020 	b	1afef60 <TMuxStore::$LockStore(void)>
        386edc:	ea5e0565 	b	1b08478 <TMuxStore::$UnlockStore(void)>
        386ee0:	ea5daa72 	b	1af18b0 <TMuxStore::$Abort(void)>
        386ee4:	ea5dd3af 	b	1afbda8 <TMuxStore::$Idle(unsigned char *, unsigned char *)>
        386ee8:	ea5de454 	b	1b00040 <TMuxStore::$NextObject(unsigned long, unsigned long *)>
        386eec:	ea5db6d2 	b	1af4a3c <TMuxStore::$CheckIntegrity(unsigned long *)>
        386ef0:	ea5df8fc 	b	1b052e8 <TMuxStore::$SetBuddy(TStore *)>
        386ef4:	ea5de863 	b	1b01088 <TMuxStore::$OwnsObject(unsigned long)>
        386ef8:	ea5dae8d 	b	1af2934 <TMuxStore::$Address(unsigned long)>
        386efc:	ea5e053f 	b	1b08400 <TMuxStore::$StoreKind(void)>
        386f00:	ea5dfd11 	b	1b0634c <TMuxStore::$SetStore(TStore *, unsigned long)>
        386f04:	ea5de007 	b	1afef28 <TMuxStore::$IsSameStore(void *, unsigned long)>
        386f08:	ea5ddbf8 	b	1afdef0 <TMuxStore::$IsLocked(void)>
        386f0c:	ea5e096f 	b	1b094d0 <TMuxStore::$VppOff(void)>
        386f10:	ea5e011e 	b	1b07390 <TMuxStore::$Sleep(void)>
        386f14:	ea5de000 	b	1afef1c <TMuxStore::$IsROM(void)>
        386f18:	eaf67341 	b	123c24 <TMuxStore::NewWithinTransaction(long, unsigned long *)>
        386f1c:	eaf67363 	b	123cb0 <TMuxStore::StartTransactionAgainst(unsigned long)>
        386f20:	eaf67383 	b	123d34 <TMuxStore::SeparatelyAbort(unsigned long)>
        386f24:	eaf673a3 	b	123db8 <TMuxStore::AddToCurrentTransaction(unsigned long)>
        386f28:	eaf673c3 	b	123e3c <TMuxStore::InSeparateTransaction(unsigned long)>
        386f2c:	eaf673c4 	b	123e44 <TMuxStore::LockReadOnly(void)>
        386f30:	eaf673f8 	b	123f18 <TMuxStore::UnlockReadOnly(unsigned char)>
        386f34:	eaf673fa 	b	123f24 <TMuxStore::InTransaction(void)>
        386f38:	eaf673fb 	b	123f2c <TMuxStore::NewObject(char *, long, unsigned long *)>
        386f3c:	eaf6741f 	b	123fc0 <TMuxStore::ReplaceObject(unsigned long, char *, long)>
        386f40:	eaf67443 	b	124054 <TMuxStore::CalcXIPObjectSize(long, long, long *)>
        386f44:	eaf67467 	b	1240e8 <TMuxStore::NewXIPObject(long, unsigned long *)>
        386f48:	eaf67489 	b	124174 <TMuxStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)>
        386f4c:	00000000 	andeq	r0, r0, r0
        386f50:	00000048 	andeq	r0, r0, r8, asr #32
        386f54:	00000055 	andeq	r0, r0, r5, asr r0
        386f58:	0000005f 	andeq	r0, r0, pc, asr r0
        386f5c:	0000005c 	andeq	r0, r0, ip, asr r0
        386f60:	000000d8 	ldreqd	r0, [r0], -r8
        386f64:	ea5dfd02 	b	1b06374 <$Sizeof__16TMuxStoreMonitorSFv>
        386f70:	ea5de41c 	b	1afffe8 <TMuxStoreMonitor::$New(void)>
        386f74:	ea5dbee3 	b	1af6b08 <TMuxStoreMonitor::$Delete(void)>
        386f84:	ea000001 	b	386f90 <ClassInfo__16TMuxStoreMonitorSFv+0x8>
    */
}

