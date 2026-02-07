#include "include/TStoreHashTable.h"

/**
 * Symbol: Create__15TStoreHashTableSFP6TStore
 * Address: 003532f4
 */
void TStoreHashTable::Create() {
    /*
        3532f4:	e1a0c00d 	mov	ip, sp
        3532f8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        3532fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        353300:	e1a04000 	mov	r4, r0
        353304:	e24ddf41 	sub	sp, sp, #260	; 0x104
        353308:	e1a0000d 	mov	r0, sp
        35330c:	e3a02c01 	mov	r2, #256	; 0x100
        353310:	e3a01000 	mov	r1, #0	; 0x0
        353314:	eb6185cf 	bl	1bb4a58 <$memset>
        353318:	e28d3c01 	add	r3, sp, #256	; 0x100
        35331c:	e1a0100d 	mov	r1, sp
        353320:	e1a00004 	mov	r0, r4
        353324:	e3a02c01 	mov	r2, #256	; 0x100
        353328:	eb00ce37 	bl	386c0c <TStore::NewObject(char *, long, unsigned long *)>
        35332c:	e3300000 	teq	r0, #0	; 0x0
        353330:	1b5ba6bc 	blne	1a3ce28 <$_OSErr(long)>
        353334:	e59d0100 	ldr	r0, [sp, #256]
        353338:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TStoreHashTable::__ct(TStore *, unsigned long)
 * Address: 0035333c
 */
TStoreHashTable::TStoreHashTable(TStore *, unsigned long) {
    /*
        35333c:	e1a0c00d 	mov	ip, sp
        353340:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        353344:	e24cb004 	sub	fp, ip, #4	; 0x4
        353348:	e1b04000 	movs	r4, r0
        35334c:	e1a06001 	mov	r6, r1
        353350:	e1a05002 	mov	r5, r2
        353354:	1a000003 	bne	353368 <TStoreHashTable::__ct(TStore *, unsigned long)+0x2c>
        353358:	e3a00f42 	mov	r0, #264	; 0x108
        35335c:	eb61ecf5 	bl	1bce738 <$__nw(unsigned int)>
        353360:	e1b04000 	movs	r4, r0
        353364:	0a00000b 	beq	353398 <TStoreHashTable::__ct(TStore *, unsigned long)+0x5c>
        353368:	e3a03c01 	mov	r3, #256	; 0x100
        35336c:	e5845000 	str	r5, [r4]
        353370:	e5846104 	str	r6, [r4, #260]	; fField260
        353374:	e92d0008 	stmdb	sp!, {r3}
        353378:	e2843004 	add	r3, r4, #4	; 0x4
        35337c:	e1a01005 	mov	r1, r5
        353380:	e1a00006 	mov	r0, r6
        353384:	e3a02000 	mov	r2, #0	; 0x0
        353388:	eb5ebb6c 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        35338c:	e28dd004 	add	sp, sp, #4	; 0x4
        353390:	e3300000 	teq	r0, #0	; 0x0
        353394:	1b5ba6a3 	blne	1a3ce28 <$_OSErr(long)>
        353398:	e1a00004 	mov	r0, r4
        35339c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TStoreHashTable::Abort(void)
 * Address: 003533a0
 */
TStoreHashTable::Abort(void) {
    /*
        3533a0:	e1a0c00d 	mov	ip, sp
        3533a4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        3533a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        3533ac:	e1a01000 	mov	r1, r0
        3533b0:	e3a03c01 	mov	r3, #256	; 0x100
        3533b4:	e92d0008 	stmdb	sp!, {r3}
        3533b8:	e2803004 	add	r3, r0, #4	; 0x4
        3533bc:	e5900104 	ldr	r0, [r0, #260]	; fField260
        3533c0:	e5911000 	ldr	r1, [r1]
        3533c4:	e3a02000 	mov	r2, #0	; 0x0
        3533c8:	eb5ebb5c 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        3533cc:	e28dd004 	add	sp, sp, #4	; 0x4
        3533d0:	e3300000 	teq	r0, #0	; 0x0
        3533d4:	191b6800 	ldmnedb	fp, {fp, sp, lr}
        3533d8:	1a5ba692 	bne	1a3ce28 <$_OSErr(long)>
        3533dc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TStoreHashTable::Insert(unsigned long, char *, long)
 * Address: 003533e0
 */
TStoreHashTable::Insert(unsigned long, char *, long) {
    /*
        3533e0:	e1a0c00d 	mov	ip, sp
        3533e4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        3533e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        3533ec:	e1a04000 	mov	r4, r0
        3533f0:	e1a06002 	mov	r6, r2
        3533f4:	e1a05003 	mov	r5, r3
        3533f8:	e24dd008 	sub	sp, sp, #8	; 0x8
        3533fc:	e201a03f 	and	sl, r1, #63	; 0x3f
        353400:	e080010a 	add	r0, r0, sl, lsl #2
        353404:	e58d0004 	str	r0, [sp, #4]
        353408:	e5900004 	ldr	r0, [r0, #4]
        35340c:	e58d0000 	str	r0, [sp]
        353410:	e1b01000 	movs	r1, r0
        353414:	e2838002 	add	r8, r3, #2	; 0x2
        353418:	e3a07000 	mov	r7, #0	; 0x0
        35341c:	e3a09000 	mov	r9, #0	; 0x0
        353420:	1a000010 	bne	353468 <TStoreHashTable::Insert(unsigned long, char *, long)+0x88>
        353424:	e1a0200d 	mov	r2, sp
        353428:	e1a01008 	mov	r1, r8
        35342c:	e5940104 	ldr	r0, [r4, #260]	; fField260
        353430:	eb5eb2f6 	bl	1b00010 <TStore::$NewObject(long, unsigned long *)>
        353434:	e3300000 	teq	r0, #0	; 0x0
        353438:	1b5ba67a 	blne	1a3ce28 <$_OSErr(long)>
        35343c:	e3a03004 	mov	r3, #4	; 0x4
        353440:	e92d0008 	stmdb	sp!, {r3}
        353444:	e1a0210a 	mov	r2, sl, lsl #2
        353448:	e08d3003 	add	r3, sp, r3
        35344c:	e5940104 	ldr	r0, [r4, #260]	; fField260
        353450:	e5941000 	ldr	r1, [r4]
        353454:	eb5edc29 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        353458:	e28dd004 	add	sp, sp, #4	; 0x4
        35345c:	e3300000 	teq	r0, #0	; 0x0
        353460:	1b5ba670 	blne	1a3ce28 <$_OSErr(long)>
        353464:	ea000052 	b	3535b4 <TStoreHashTable::Insert(unsigned long, char *, long)+0x1d4>
        353468:	e24dd004 	sub	sp, sp, #4	; 0x4
        35346c:	e1a0200d 	mov	r2, sp
        353470:	e5940104 	ldr	r0, [r4, #260]	; fField260
        353474:	eb5e9e21 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        353478:	e3300000 	teq	r0, #0	; 0x0
        35347c:	1b5ba669 	blne	1a3ce28 <$_OSErr(long)>
        353480:	e59d3000 	ldr	r3, [sp]
        353484:	e1530005 	cmp	r3, r5
        353488:	da00003e 	ble	353588 <TStoreHashTable::Insert(unsigned long, char *, long)+0x1a8>
        35348c:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        353490:	e24ddb01 	sub	sp, sp, #1024	; 0x400
        353494:	e5941104 	ldr	r1, [r4, #260]	; fField260
        353498:	e59d2420 	ldr	r2, [sp, #1056]
        35349c:	e1a0000d 	mov	r0, sp
        3534a0:	eb5bf8fa 	bl	1a51890 <TCachedReadStore::$__ct(TStore *, unsigned long, long)>
        3534a4:	e59d041c 	ldr	r0, [sp, #1052]
        3534a8:	e3500000 	cmp	r0, #0	; 0x0
        3534ac:	da00002e 	ble	35356c <TStoreHashTable::Insert(unsigned long, char *, long)+0x18c>
        3534b0:	e24dd004 	sub	sp, sp, #4	; 0x4
        3534b4:	e1a0300d 	mov	r3, sp
        3534b8:	e1a01007 	mov	r1, r7
        3534bc:	e28d0004 	add	r0, sp, #4	; 0x4
        3534c0:	e3a02002 	mov	r2, #2	; 0x2
        3534c4:	eb5bec96 	bl	1a4e724 <TCachedReadStore::$GetDataPtr(long, long, void **)>
        3534c8:	e3300000 	teq	r0, #0	; 0x0
        3534cc:	1b5ba655 	blne	1a3ce28 <$_OSErr(long)>
        3534d0:	e24dd004 	sub	sp, sp, #4	; 0x4
        3534d4:	e3170001 	tst	r7, #1	; 0x1
        3534d8:	0a000004 	beq	3534f0 <TStoreHashTable::Insert(unsigned long, char *, long)+0x110>
        3534dc:	e59d1004 	ldr	r1, [sp, #4]
        3534e0:	e1a0000d 	mov	r0, sp
        3534e4:	e3a02002 	mov	r2, #2	; 0x2
        3534e8:	eb618558 	bl	1bb4a50 <$memcpy>
        3534ec:	ea000005 	b	353508 <TStoreHashTable::Insert(unsigned long, char *, long)+0x128>
        3534f0:	e59d0004 	ldr	r0, [sp, #4]
        3534f4:	e5900000 	ldr	r0, [r0]
        3534f8:	e1a00820 	mov	r0, r0, lsr #16
        3534fc:	e5cd0001 	strb	r0, [sp, #1]
        353500:	e1a00440 	mov	r0, r0, asr #8
        353504:	e5cd0000 	strb	r0, [sp]
        353508:	e59d0000 	ldr	r0, [sp]
        35350c:	e1350840 	teq	r5, r0, asr #16
        353510:	1a00000e 	bne	353550 <TStoreHashTable::Insert(unsigned long, char *, long)+0x170>
        353514:	e2871002 	add	r1, r7, #2	; 0x2
        353518:	e28d3004 	add	r3, sp, #4	; 0x4
        35351c:	e1a02005 	mov	r2, r5
        353520:	e28d0008 	add	r0, sp, #8	; 0x8
        353524:	eb5bec7e 	bl	1a4e724 <TCachedReadStore::$GetDataPtr(long, long, void **)>
        353528:	e3300000 	teq	r0, #0	; 0x0
        35352c:	1b5ba63d 	blne	1a3ce28 <$_OSErr(long)>
        353530:	e1a02005 	mov	r2, r5
        353534:	e1a01006 	mov	r1, r6
        353538:	e59d0004 	ldr	r0, [sp, #4]
        35353c:	eb618542 	bl	1bb4a4c <$memcmp>
        353540:	e3300000 	teq	r0, #0	; 0x0
        353544:	03a09001 	moveq	r9, #1	; 0x1
        353548:	028dd008 	addeq	sp, sp, #8	; 0x8
        35354c:	0a000006 	beq	35356c <TStoreHashTable::Insert(unsigned long, char *, long)+0x18c>
        353550:	e59d0000 	ldr	r0, [sp]
        353554:	e0870840 	add	r0, r7, r0, asr #16
        353558:	e2807002 	add	r7, r0, #2	; 0x2
        35355c:	e28dd008 	add	sp, sp, #8	; 0x8
        353560:	e59d041c 	ldr	r0, [sp, #1052]
        353564:	e1570000 	cmp	r7, r0
        353568:	baffffd0 	blt	3534b0 <TStoreHashTable::Insert(unsigned long, char *, long)+0xd0>
        35356c:	e1a0000d 	mov	r0, sp
        353570:	e3a01000 	mov	r1, #0	; 0x0
        353574:	eb5bec68 	bl	1a4e71c <TCachedReadStore::$__dt(void)>
        353578:	e28dd01c 	add	sp, sp, #28	; 0x1c
        35357c:	e28ddb01 	add	sp, sp, #1024	; 0x400
        353580:	e3390000 	teq	r9, #0	; 0x0
        353584:	1a000007 	bne	3535a8 <TStoreHashTable::Insert(unsigned long, char *, long)+0x1c8>
        353588:	e59d0000 	ldr	r0, [sp]
        35358c:	e0802008 	add	r2, r0, r8
        353590:	e5940104 	ldr	r0, [r4, #260]	; fField260
        353594:	e59d1004 	ldr	r1, [sp, #4]
        353598:	eb5ecb60 	bl	1b06320 <TStore::$SetObjectSize(unsigned long, long)>
        35359c:	e3300000 	teq	r0, #0	; 0x0
        3535a0:	1b5ba620 	blne	1a3ce28 <$_OSErr(long)>
        3535a4:	e59d7000 	ldr	r7, [sp]
        3535a8:	e28dd004 	add	sp, sp, #4	; 0x4
        3535ac:	e3390000 	teq	r9, #0	; 0x0
        3535b0:	1a00002f 	bne	353674 <TStoreHashTable::Insert(unsigned long, char *, long)+0x294>
        3535b4:	e1a00805 	mov	r0, r5, lsl #16
        3535b8:	e1a00840 	mov	r0, r0, asr #16
        3535bc:	e1a01440 	mov	r1, r0, asr #8
        3535c0:	e3580b01 	cmp	r8, #1024	; 0x400
        3535c4:	ca000012 	bgt	353614 <TStoreHashTable::Insert(unsigned long, char *, long)+0x234>
        3535c8:	e24ddb01 	sub	sp, sp, #1024	; 0x400
        3535cc:	e5cd0001 	strb	r0, [sp, #1]
        3535d0:	e5cd1000 	strb	r1, [sp]
        3535d4:	e28d0002 	add	r0, sp, #2	; 0x2
        3535d8:	e1a02005 	mov	r2, r5
        3535dc:	e1a01006 	mov	r1, r6
        3535e0:	eb61851a 	bl	1bb4a50 <$memcpy>
        3535e4:	e1a03008 	mov	r3, r8
        3535e8:	e92d0008 	stmdb	sp!, {r3}
        3535ec:	e28d3004 	add	r3, sp, #4	; 0x4
        3535f0:	e1a02007 	mov	r2, r7
        3535f4:	e5b40104 	ldr	r0, [r4, #260]!	; fField260
        3535f8:	e59d1404 	ldr	r1, [sp, #1028]
        3535fc:	eb5edbbf 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        353600:	e28dd004 	add	sp, sp, #4	; 0x4
        353604:	e3300000 	teq	r0, #0	; 0x0
        353608:	1b5ba606 	blne	1a3ce28 <$_OSErr(long)>
        35360c:	e28ddb01 	add	sp, sp, #1024	; 0x400
        353610:	ea000017 	b	353674 <TStoreHashTable::Insert(unsigned long, char *, long)+0x294>
        353614:	e24dd004 	sub	sp, sp, #4	; 0x4
        353618:	e5cd0001 	strb	r0, [sp, #1]
        35361c:	e5cd1000 	strb	r1, [sp]
        353620:	e3a03002 	mov	r3, #2	; 0x2
        353624:	e92d0008 	stmdb	sp!, {r3}
        353628:	e28d3004 	add	r3, sp, #4	; 0x4
        35362c:	e1a02007 	mov	r2, r7
        353630:	e5940104 	ldr	r0, [r4, #260]	; fField260
        353634:	e59d1008 	ldr	r1, [sp, #8]
        353638:	eb5edbb0 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        35363c:	e28dd004 	add	sp, sp, #4	; 0x4
        353640:	e3300000 	teq	r0, #0	; 0x0
        353644:	1b5ba5f7 	blne	1a3ce28 <$_OSErr(long)>
        353648:	e1a03005 	mov	r3, r5
        35364c:	e92d0008 	stmdb	sp!, {r3}
        353650:	e2872002 	add	r2, r7, #2	; 0x2
        353654:	e1a03006 	mov	r3, r6
        353658:	e5b40104 	ldr	r0, [r4, #260]!	; fField260
        35365c:	e59d1008 	ldr	r1, [sp, #8]
        353660:	eb5edba6 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        353664:	e28dd004 	add	sp, sp, #4	; 0x4
        353668:	e3300000 	teq	r0, #0	; 0x0
        35366c:	1b5ba5ed 	blne	1a3ce28 <$_OSErr(long)>
        353670:	e28dd004 	add	sp, sp, #4	; 0x4
        353674:	e89d0003 	ldmia	sp, {r0, r1}
        353678:	e5a10004 	str	r0, [r1, #4]!
        35367c:	e087080a 	add	r0, r7, sl, lsl #16
        353680:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TStoreHashTable::Get(long, char *, long *)
 * Address: 00353684
 */
TStoreHashTable::Get(long, char *, long *) {
    /*
        353684:	e1a0c00d 	mov	ip, sp
        353688:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        35368c:	e24cb004 	sub	fp, ip, #4	; 0x4
        353690:	e1a04000 	mov	r4, r0
        353694:	e1a06002 	mov	r6, r2
        353698:	e1a05003 	mov	r5, r3
        35369c:	e1a00841 	mov	r0, r1, asr #16
        3536a0:	e1a08801 	mov	r8, r1, lsl #16
        3536a4:	e1a08828 	mov	r8, r8, lsr #16
        3536a8:	e0840100 	add	r0, r4, r0, lsl #2
        3536ac:	e5b07004 	ldr	r7, [r0, #4]!
        3536b0:	e24dd004 	sub	sp, sp, #4	; 0x4
        3536b4:	e3a03002 	mov	r3, #2	; 0x2
        3536b8:	e92d0008 	stmdb	sp!, {r3}
        3536bc:	e28d3004 	add	r3, sp, #4	; 0x4
        3536c0:	e1a02008 	mov	r2, r8
        3536c4:	e1a01007 	mov	r1, r7
        3536c8:	e5940104 	ldr	r0, [r4, #260]	; fField260
        3536cc:	eb5eba9b 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        3536d0:	e28dd004 	add	sp, sp, #4	; 0x4
        3536d4:	e3300000 	teq	r0, #0	; 0x0
        3536d8:	1b5ba5d2 	blne	1a3ce28 <$_OSErr(long)>
        3536dc:	e59d1000 	ldr	r1, [sp]
        3536e0:	e5950000 	ldr	r0, [r5]
        3536e4:	e1500841 	cmp	r0, r1, asr #16
        3536e8:	b3a09000 	movlt	r9, #0	; 0x0
        3536ec:	a3a09001 	movge	r9, #1	; 0x1
        3536f0:	e59d0000 	ldr	r0, [sp]
        3536f4:	e1a00840 	mov	r0, r0, asr #16
        3536f8:	e3390000 	teq	r9, #0	; 0x0
        3536fc:	e5850000 	str	r0, [r5]
        353700:	0a00000a 	beq	353730 <TStoreHashTable::Get(long, char *, long *)+0xac>
        353704:	e59d3000 	ldr	r3, [sp]
        353708:	e1a03843 	mov	r3, r3, asr #16
        35370c:	e92d0008 	stmdb	sp!, {r3}
        353710:	e2882002 	add	r2, r8, #2	; 0x2
        353714:	e1a03006 	mov	r3, r6
        353718:	e1a01007 	mov	r1, r7
        35371c:	e5b40104 	ldr	r0, [r4, #260]!	; fField260
        353720:	eb5eba86 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        353724:	e28dd004 	add	sp, sp, #4	; 0x4
        353728:	e3300000 	teq	r0, #0	; 0x0
        35372c:	1b5ba5bd 	blne	1a3ce28 <$_OSErr(long)>
        353730:	e1a00009 	mov	r0, r9
        353734:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TStoreHashTable::TotalSize(void)
 * Address: 00353738
 */
TStoreHashTable::TotalSize(void) {
    /*
        353738:	e1a0c00d 	mov	ip, sp
        35373c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        353740:	e24cb004 	sub	fp, ip, #4	; 0x4
        353744:	e1a04000 	mov	r4, r0
        353748:	e3a06c01 	mov	r6, #256	; 0x100
        35374c:	e3a05000 	mov	r5, #0	; 0x0
        353750:	e0840105 	add	r0, r4, r5, lsl #2
        353754:	e5b01004 	ldr	r1, [r0, #4]!
        353758:	e3310000 	teq	r1, #0	; 0x0
        35375c:	0a000007 	beq	353780 <TStoreHashTable::TotalSize(void)+0x48>
        353760:	e24dd004 	sub	sp, sp, #4	; 0x4
        353764:	e1a0200d 	mov	r2, sp
        353768:	e5940104 	ldr	r0, [r4, #260]	; fField260
        35376c:	eb5e9d63 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        353770:	e3300000 	teq	r0, #0	; 0x0
        353774:	1b5ba5ab 	blne	1a3ce28 <$_OSErr(long)>
        353778:	e49d0004 	ldr	r0, [sp], #4
        35377c:	e0866000 	add	r6, r6, r0
        353780:	e2855001 	add	r5, r5, #1	; 0x1
        353784:	e3550040 	cmp	r5, #64	; 0x40
        353788:	bafffff0 	blt	353750 <TStoreHashTable::TotalSize(void)+0x18>
        35378c:	e1a00006 	mov	r0, r6
        353790:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

