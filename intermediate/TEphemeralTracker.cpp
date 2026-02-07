#include "include/TEphemeralTracker.h"

/**
 * Symbol: TEphemeralTracker::__ct(void)
 * Address: 002db4c0
 */
TEphemeralTracker::TEphemeralTracker(void) {
    /*
        2db4c0:	e1a0c00d 	mov	ip, sp
        2db4c4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2db4c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2db4cc:	e3300000 	teq	r0, #0	; 0x0
        2db4d0:	1a000003 	bne	2db4e4 <TEphemeralTracker::__ct(void)+0x24>
        2db4d4:	e3a0001c 	mov	r0, #28	; 0x1c
        2db4d8:	eb63cc96 	bl	1bce738 <$__nw(unsigned int)>
        2db4dc:	e3300000 	teq	r0, #0	; 0x0
        2db4e0:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        2db4e4:	e3a01000 	mov	r1, #0	; 0x0
        2db4e8:	e580100c 	str	r1, [r0, #12]	; fField12
        2db4ec:	e5801014 	str	r1, [r0, #20]	; fField20
        2db4f0:	e5801018 	str	r1, [r0, #24]	; fField24
        2db4f4:	e5801010 	str	r1, [r0, #16]	; fField16
        2db4f8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TEphemeralTracker::DeleteEphemeral(unsigned long)
 * Address: 002db4fc
 */
TEphemeralTracker::DeleteEphemeral(unsigned long) {
    /*
        2db4fc:	ea5db3d9 	b	1a48468 <TEphemeralTracker::$DeleteEphemeral1(unsigned long)>
    */
}

/**
 * Symbol: TEphemeralTracker::DeleteEphemeral1(unsigned long)
 * Address: 002db500
 */
TEphemeralTracker::DeleteEphemeral1(unsigned long) {
    /*
        2db500:	e1a0c00d 	mov	ip, sp
        2db504:	e92dd813 	stmdb	sp!, {r0, r1, r4, fp, ip, lr, pc}
        2db508:	e24cb004 	sub	fp, ip, #4	; 0x4
        2db50c:	e3a04000 	mov	r4, #0	; 0x0
        2db510:	e51b0018 	ldr	r0, [fp, -#24]	; fField24
        2db514:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2db518:	eb02adb8 	bl	386c00 <TStore::InTransaction(void)>
        2db51c:	e3300000 	teq	r0, #0	; 0x0
        2db520:	1a000004 	bne	2db538 <TEphemeralTracker::DeleteEphemeral1(unsigned long)+0x38>
        2db524:	e51b0018 	ldr	r0, [fp, -#24]	; fField24
        2db528:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2db52c:	eb00015c 	bl	2dbaa4 <StoreWritable(TStore *)>
        2db530:	e3300000 	teq	r0, #0	; 0x0
        2db534:	1a000010 	bne	2db57c <TEphemeralTracker::DeleteEphemeral1(unsigned long)+0x7c>
        2db538:	e51b0018 	ldr	r0, [fp, -#24]	; fField24
        2db53c:	e5900018 	ldr	r0, [r0, #24]	; fField24
        2db540:	e24b2014 	sub	r2, fp, #20	; 0x14
        2db544:	e3a03001 	mov	r3, #1	; 0x1
        2db548:	e5901000 	ldr	r1, [r0]
        2db54c:	eb6437e9 	bl	1be94f8 <CDynamicArray::$InsertElementsBefore(long, void *, long)>
        2db550:	e51b0018 	ldr	r0, [fp, -#24]	; fField24
        2db554:	e5b0100c 	ldr	r1, [r0, #12]!	; fField12
        2db558:	e51b0014 	ldr	r0, [fp, -#20]	; fField20
        2db55c:	eb5db7c7 	bl	1a49480 <$FindAndRemove__17TEphemeralTrackerSFUlP13CDynamicArray>
        2db560:	e3300000 	teq	r0, #0	; 0x0
        2db564:	1a000028 	bne	2db60c <TEphemeralTracker::DeleteEphemeral1(unsigned long)+0x10c>
        2db568:	e51b0018 	ldr	r0, [fp, -#24]	; fField24
        2db56c:	e5b01014 	ldr	r1, [r0, #20]!	; fField20
        2db570:	e51b0014 	ldr	r0, [fp, -#20]	; fField20
        2db574:	eb5db7c1 	bl	1a49480 <$FindAndRemove__17TEphemeralTrackerSFUlP13CDynamicArray>
        2db578:	ea000023 	b	2db60c <TEphemeralTracker::DeleteEphemeral1(unsigned long)+0x10c>
        2db57c:	e51b0018 	ldr	r0, [fp, -#24]	; fField24
        2db580:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2db584:	eb608e74 	bl	1afef5c <TStore::$LockStore(void)>
        2db588:	e51b0018 	ldr	r0, [fp, -#24]	; fField24
        2db58c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2db590:	e51b1014 	ldr	r1, [fp, -#20]	; fField20
        2db594:	eb60c41c 	bl	1b0c60c <$DeleteLargeObject(TStore *, unsigned long)>
        2db598:	e1b04000 	movs	r4, r0
        2db59c:	1284cda5 	addne	ip, r4, #10560	; 0x2940
        2db5a0:	137c002e 	cmnne	ip, #46	; 0x2e
        2db5a4:	e51b0018 	ldr	r0, [fp, -#24]	; fField24
        2db5a8:	1a000015 	bne	2db604 <TEphemeralTracker::DeleteEphemeral1(unsigned long)+0x104>
        2db5ac:	e5b0100c 	ldr	r1, [r0, #12]!	; fField12
        2db5b0:	e51b0014 	ldr	r0, [fp, -#20]	; fField20
        2db5b4:	eb5db7b1 	bl	1a49480 <$FindAndRemove__17TEphemeralTrackerSFUlP13CDynamicArray>
        2db5b8:	e3300000 	teq	r0, #0	; 0x0
        2db5bc:	1a000003 	bne	2db5d0 <TEphemeralTracker::DeleteEphemeral1(unsigned long)+0xd0>
        2db5c0:	e51b0018 	ldr	r0, [fp, -#24]	; fField24
        2db5c4:	e5b01014 	ldr	r1, [r0, #20]!	; fField20
        2db5c8:	e51b0014 	ldr	r0, [fp, -#20]	; fField20
        2db5cc:	eb5db7ab 	bl	1a49480 <$FindAndRemove__17TEphemeralTrackerSFUlP13CDynamicArray>
        2db5d0:	e3300000 	teq	r0, #0	; 0x0
        2db5d4:	1a000003 	bne	2db5e8 <TEphemeralTracker::DeleteEphemeral1(unsigned long)+0xe8>
        2db5d8:	e51b0018 	ldr	r0, [fp, -#24]	; fField24
        2db5dc:	e5b01018 	ldr	r1, [r0, #24]!	; fField24
        2db5e0:	e51b0014 	ldr	r0, [fp, -#20]	; fField20
        2db5e4:	eb5db7a5 	bl	1a49480 <$FindAndRemove__17TEphemeralTrackerSFUlP13CDynamicArray>
        2db5e8:	e51b0018 	ldr	r0, [fp, -#24]	; fField24
        2db5ec:	eb5db3a1 	bl	1a48478 <TEphemeralTracker::$WriteEphemeralList(void)>
        2db5f0:	e1a04000 	mov	r4, r0
        2db5f4:	e51b0018 	ldr	r0, [fp, -#24]	; fField24
        2db5f8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2db5fc:	eb60b39c 	bl	1b08474 <TStore::$UnlockStore(void)>
        2db600:	ea000001 	b	2db60c <TEphemeralTracker::DeleteEphemeral1(unsigned long)+0x10c>
        2db604:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2db608:	eb6058a7 	bl	1af18ac <TStore::$Abort(void)>
        2db60c:	e1a00004 	mov	r0, r4
        2db610:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TEphemeralTracker::DeleteAllEphemerals(void)
 * Address: 002db614
 */
TEphemeralTracker::DeleteAllEphemerals(void) {
    /*
        2db614:	e1a0c00d 	mov	ip, sp
        2db618:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2db61c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2db620:	e1a04000 	mov	r4, r0
        2db624:	e3a00000 	mov	r0, #0	; 0x0
        2db628:	e5941014 	ldr	r1, [r4, #20]	; fField20
        2db62c:	e5911000 	ldr	r1, [r1]
        2db630:	e3510000 	cmp	r1, #0	; 0x0
        2db634:	d91ba810 	ldmledb	fp, {r4, fp, sp, pc}
        2db638:	e3a01000 	mov	r1, #0	; 0x0
        2db63c:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2db640:	eb644813 	bl	1bed694 <CDynamicArray::$SafeElementPtrAt(long)>
        2db644:	e5901000 	ldr	r1, [r0]
        2db648:	e1a00004 	mov	r0, r4
        2db64c:	eb5db385 	bl	1a48468 <TEphemeralTracker::$DeleteEphemeral1(unsigned long)>
        2db650:	e3300000 	teq	r0, #0	; 0x0
        2db654:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        2db658:	e5941014 	ldr	r1, [r4, #20]	; fField20
        2db65c:	e5911000 	ldr	r1, [r1]
        2db660:	e3510000 	cmp	r1, #0	; 0x0
        2db664:	cafffff3 	bgt	2db638 <TEphemeralTracker::DeleteAllEphemerals(void)+0x24>
        2db668:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TEphemeralTracker::DeletePendingEphemerals(void)
 * Address: 002db66c
 */
TEphemeralTracker::DeletePendingEphemerals(void) {
    /*
        2db66c:	e1a0c00d 	mov	ip, sp
        2db670:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2db674:	e24cb004 	sub	fp, ip, #4	; 0x4
        2db678:	e1a04000 	mov	r4, r0
        2db67c:	e3a05000 	mov	r5, #0	; 0x0
        2db680:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2db684:	eb000106 	bl	2dbaa4 <StoreWritable(TStore *)>
        2db688:	e3300000 	teq	r0, #0	; 0x0
        2db68c:	0a00000e 	beq	2db6cc <TEphemeralTracker::DeletePendingEphemerals(void)+0x60>
        2db690:	e5940018 	ldr	r0, [r4, #24]	; fField24
        2db694:	e5900000 	ldr	r0, [r0]
        2db698:	e3500000 	cmp	r0, #0	; 0x0
        2db69c:	da00000a 	ble	2db6cc <TEphemeralTracker::DeletePendingEphemerals(void)+0x60>
        2db6a0:	e3a01000 	mov	r1, #0	; 0x0
        2db6a4:	e5940018 	ldr	r0, [r4, #24]	; fField24
        2db6a8:	eb6447f9 	bl	1bed694 <CDynamicArray::$SafeElementPtrAt(long)>
        2db6ac:	e5901000 	ldr	r1, [r0]
        2db6b0:	e1a00004 	mov	r0, r4
        2db6b4:	eb5db36b 	bl	1a48468 <TEphemeralTracker::$DeleteEphemeral1(unsigned long)>
        2db6b8:	e1a05000 	mov	r5, r0
        2db6bc:	e5940018 	ldr	r0, [r4, #24]	; fField24
        2db6c0:	e5900000 	ldr	r0, [r0]
        2db6c4:	e3500000 	cmp	r0, #0	; 0x0
        2db6c8:	cafffff4 	bgt	2db6a0 <TEphemeralTracker::DeletePendingEphemerals(void)+0x34>
        2db6cc:	e1a00005 	mov	r0, r5
        2db6d0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TEphemeralTracker::ReadEphemeralList(void)
 * Address: 002db6d4
 */
TEphemeralTracker::ReadEphemeralList(void) {
    /*
        2db6d4:	e1a0c00d 	mov	ip, sp
        2db6d8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2db6dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2db6e0:	e1a04000 	mov	r4, r0
        2db6e4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2db6e8:	e9900003 	ldmib	r0, {r0, r1}
        2db6ec:	e1a0200d 	mov	r2, sp
        2db6f0:	eb607d82 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        2db6f4:	e59d0000 	ldr	r0, [sp]
        2db6f8:	e1a01120 	mov	r1, r0, lsr #2
        2db6fc:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2db700:	eb635024 	bl	1baf798 <CDynamicArray::$SetElementCount(long)>
        2db704:	e59d3000 	ldr	r3, [sp]
        2db708:	e92d0008 	stmdb	sp!, {r3}
        2db70c:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2db710:	e5901010 	ldr	r1, [r0, #16]	; fField16
        2db714:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2db718:	e3a00000 	mov	r0, #0	; 0x0
        2db71c:	e0813000 	add	r3, r1, r0
        2db720:	e3a02000 	mov	r2, #0	; 0x0
        2db724:	e9b40003 	ldmib	r4!, {r0, r1}
        2db728:	eb609a84 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        2db72c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TEphemeralTracker::WriteEphemeralList(void)
 * Address: 002db730
 */
TEphemeralTracker::WriteEphemeralList(void) {
    /*
        2db730:	e5901014 	ldr	r1, [r0, #20]	; fField20
        2db734:	e5912000 	ldr	r2, [r1]
        2db738:	e1a03102 	mov	r3, r2, lsl #2
        2db73c:	e5912010 	ldr	r2, [r1, #16]	; fField16
        2db740:	e5911004 	ldr	r1, [r1, #4]	; fField4
        2db744:	e3a01000 	mov	r1, #0	; 0x0
        2db748:	e0822001 	add	r2, r2, r1
        2db74c:	e9900003 	ldmib	r0, {r0, r1}
        2db750:	ea02ad30 	b	386c18 <TStore::ReplaceObject(unsigned long, char *, long)>
    */
}

/**
 * Symbol: Find__17TEphemeralTrackerSFUlP13CDynamicArray
 * Address: 002db754
 */
void TEphemeralTracker::Find() {
    /*
        2db754:	e1a0c00d 	mov	ip, sp
        2db758:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2db75c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2db760:	e1a05000 	mov	r5, r0
        2db764:	e1a04001 	mov	r4, r1
        2db768:	e3a06000 	mov	r6, #0	; 0x0
        2db76c:	e5910000 	ldr	r0, [r1]
        2db770:	e3500000 	cmp	r0, #0	; 0x0
        2db774:	da00000a 	ble	2db7a4 <Find__17TEphemeralTrackerSFUlP13CDynamicArray+0x50>
        2db778:	e1a01006 	mov	r1, r6
        2db77c:	e1a00004 	mov	r0, r4
        2db780:	eb6447c3 	bl	1bed694 <CDynamicArray::$SafeElementPtrAt(long)>
        2db784:	e5900000 	ldr	r0, [r0]
        2db788:	e1300005 	teq	r0, r5
        2db78c:	01a00006 	moveq	r0, r6
        2db790:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        2db794:	e2866001 	add	r6, r6, #1	; 0x1
        2db798:	e5940000 	ldr	r0, [r4]
        2db79c:	e1500006 	cmp	r0, r6
        2db7a0:	cafffff4 	bgt	2db778 <Find__17TEphemeralTrackerSFUlP13CDynamicArray+0x24>
        2db7a4:	e3e00000 	mvn	r0, #0	; 0x0
        2db7a8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: FindAndRemove__17TEphemeralTrackerSFUlP13CDynamicArray
 * Address: 002db7ac
 */
void TEphemeralTracker::FindAndRemove() {
    /*
        2db7ac:	e1a0c00d 	mov	ip, sp
        2db7b0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2db7b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2db7b8:	e1a04001 	mov	r4, r1
        2db7bc:	eb5db32e 	bl	1a4847c <$Find__17TEphemeralTrackerSFUlP13CDynamicArray>
        2db7c0:	e1a05000 	mov	r5, r0
        2db7c4:	e3700001 	cmn	r0, #1	; 0x1
        2db7c8:	0a000006 	beq	2db7e8 <FindAndRemove__17TEphemeralTrackerSFUlP13CDynamicArray+0x3c>
        2db7cc:	e1a01005 	mov	r1, r5
        2db7d0:	e1a00004 	mov	r0, r4
        2db7d4:	e3a02001 	mov	r2, #1	; 0x1
        2db7d8:	eb644395 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
        2db7dc:	e3750001 	cmn	r5, #1	; 0x1
        2db7e0:	13a00001 	movne	r0, #1	; 0x1
        2db7e4:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        2db7e8:	e3a00000 	mov	r0, #0	; 0x0
        2db7ec:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TEphemeralTracker::__dt(void)
 * Address: 002dba3c
 */
TEphemeralTracker::~TEphemeralTracker(void) {
    /*
        2dba3c:	e1a0c00d 	mov	ip, sp
        2dba40:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2dba44:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dba48:	e1a04000 	mov	r4, r0
        2dba4c:	e1a05001 	mov	r5, r1
        2dba50:	e590000c 	ldr	r0, [r0, #12]	; fField12
        2dba54:	e3300000 	teq	r0, #0	; 0x0
        2dba58:	13a01001 	movne	r1, #1	; 0x1
        2dba5c:	1b642200 	blne	1be4264 <CDynamicArray::$__dt(void)>
        2dba60:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2dba64:	e3300000 	teq	r0, #0	; 0x0
        2dba68:	13a01001 	movne	r1, #1	; 0x1
        2dba6c:	1b6421fc 	blne	1be4264 <CDynamicArray::$__dt(void)>
        2dba70:	e5940018 	ldr	r0, [r4, #24]	; fField24
        2dba74:	e3300000 	teq	r0, #0	; 0x0
        2dba78:	13a01001 	movne	r1, #1	; 0x1
        2dba7c:	1b6421f8 	blne	1be4264 <CDynamicArray::$__dt(void)>
        2dba80:	e5940010 	ldr	r0, [r4, #16]	; fField16
        2dba84:	e3300000 	teq	r0, #0	; 0x0
        2dba88:	13a01001 	movne	r1, #1	; 0x1
        2dba8c:	1b6421f4 	blne	1be4264 <CDynamicArray::$__dt(void)>
        2dba90:	e3150001 	tst	r5, #1	; 0x1
        2dba94:	11a00004 	movne	r0, r4
        2dba98:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        2dba9c:	1a63c70f 	bne	1bcd6e0 <$__dl(void *)>
        2dbaa0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TEphemeralTracker::Init(TStoreWrapper *, unsigned long)
 * Address: 002dbae4
 */
TEphemeralTracker::Init(TStoreWrapper *, unsigned long) {
    /*
        2dbae4:	e1a0c00d 	mov	ip, sp
        2dbae8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2dbaec:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dbaf0:	e1a04000 	mov	r4, r0
        2dbaf4:	e5801000 	str	r1, [r0]
        2dbaf8:	e5b1007c 	ldr	r0, [r1, #124]!
        2dbafc:	e9840005 	stmib	r4, {r0, r2}
        2dbb00:	e3a00000 	mov	r0, #0	; 0x0
        2dbb04:	eb641db3 	bl	1be31d8 <CDynamicArray::$__ct(void)>
        2dbb08:	e584000c 	str	r0, [r4, #12]	; fField12
        2dbb0c:	e3a00000 	mov	r0, #0	; 0x0
        2dbb10:	eb641db0 	bl	1be31d8 <CDynamicArray::$__ct(void)>
        2dbb14:	e5840014 	str	r0, [r4, #20]	; fField20
        2dbb18:	e3a00000 	mov	r0, #0	; 0x0
        2dbb1c:	eb641dad 	bl	1be31d8 <CDynamicArray::$__ct(void)>
        2dbb20:	e5840018 	str	r0, [r4, #24]	; fField24
        2dbb24:	e3a00000 	mov	r0, #0	; 0x0
        2dbb28:	eb641daa 	bl	1be31d8 <CDynamicArray::$__ct(void)>
        2dbb2c:	e5840010 	str	r0, [r4, #16]	; fField16
        2dbb30:	e1a00004 	mov	r0, r4
        2dbb34:	eb5db24e 	bl	1a48474 <TEphemeralTracker::$ReadEphemeralList(void)>
        2dbb38:	e3a00000 	mov	r0, #0	; 0x0
        2dbb3c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TEphemeralTracker::LockEphemerals(void)
 * Address: 002dbb40
 */
TEphemeralTracker::LockEphemerals(void) {
    /*
        2dbb40:	e1a0c00d 	mov	ip, sp
        2dbb44:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2dbb48:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dbb4c:	e1a04000 	mov	r4, r0
        2dbb50:	e5900000 	ldr	r0, [r0]
        2dbb54:	e590007c 	ldr	r0, [r0, #124]
        2dbb58:	eb6088e3 	bl	1afdeec <TStore::$IsLocked(void)>
        2dbb5c:	e3300000 	teq	r0, #0	; 0x0
        2dbb60:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        2dbb64:	e5940018 	ldr	r0, [r4, #24]	; fField24
        2dbb68:	e5900000 	ldr	r0, [r0]
        2dbb6c:	e3300000 	teq	r0, #0	; 0x0
        2dbb70:	11a00004 	movne	r0, r4
        2dbb74:	1b5db23d 	blne	1a48470 <TEphemeralTracker::$DeletePendingEphemerals(void)>
        2dbb78:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2dbb7c:	e3a01000 	mov	r1, #0	; 0x0
        2dbb80:	e5902000 	ldr	r2, [r0]
        2dbb84:	eb6442aa 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
        2dbb88:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
        2dbb8c:	e3a01000 	mov	r1, #0	; 0x0
        2dbb90:	e5902000 	ldr	r2, [r0]
        2dbb94:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        2dbb98:	ea6442a5 	b	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
    */
}

/**
 * Symbol: TEphemeralTracker::FlushEphemerals(void)
 * Address: 002dbb9c
 */
TEphemeralTracker::FlushEphemerals(void) {
    /*
        2dbb9c:	e1a0c00d 	mov	ip, sp
        2dbba0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2dbba4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dbba8:	e1a04000 	mov	r4, r0
        2dbbac:	e590000c 	ldr	r0, [r0, #12]	; fField12
        2dbbb0:	e1a01000 	mov	r1, r0
        2dbbb4:	e5900000 	ldr	r0, [r0]
        2dbbb8:	e3500000 	cmp	r0, #0	; 0x0
        2dbbbc:	d5940010 	ldrle	r0, [r4, #16]	; fField16
        2dbbc0:	d5900000 	ldrle	r0, [r0]
        2dbbc4:	d3500000 	cmple	r0, #0	; 0x0
        2dbbc8:	d91ba830 	ldmledb	fp, {r4, r5, fp, sp, pc}
        2dbbcc:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2dbbd0:	eb643a66 	bl	1bea570 <CDynamicArray::$Merge(CDynamicArray *)>
        2dbbd4:	e1a00004 	mov	r0, r4
        2dbbd8:	eb5db226 	bl	1a48478 <TEphemeralTracker::$WriteEphemeralList(void)>
        2dbbdc:	e1a05000 	mov	r5, r0
        2dbbe0:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2dbbe4:	e3a01000 	mov	r1, #0	; 0x0
        2dbbe8:	e5902000 	ldr	r2, [r0]
        2dbbec:	eb644290 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
        2dbbf0:	e3350000 	teq	r5, #0	; 0x0
        2dbbf4:	0a000003 	beq	2dbc08 <TEphemeralTracker::FlushEphemerals(void)+0x6c>
        2dbbf8:	e1a00004 	mov	r0, r4
        2dbbfc:	eb5db627 	bl	1a494a0 <TEphemeralTracker::$AbortEphemerals(void)>
        2dbc00:	e1a00005 	mov	r0, r5
        2dbc04:	eb5d8487 	bl	1a3ce28 <$_OSErr(long)>
        2dbc08:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
        2dbc0c:	e3a01000 	mov	r1, #0	; 0x0
        2dbc10:	e5902000 	ldr	r2, [r0]
        2dbc14:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        2dbc18:	ea644285 	b	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
    */
}

/**
 * Symbol: TEphemeralTracker::AbortEphemerals(void)
 * Address: 002dbc1c
 */
TEphemeralTracker::AbortEphemerals(void) {
    /*
        2dbc1c:	e1a0c00d 	mov	ip, sp
        2dbc20:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2dbc24:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dbc28:	e1a04000 	mov	r4, r0
        2dbc2c:	e590000c 	ldr	r0, [r0, #12]	; fField12
        2dbc30:	e3a01000 	mov	r1, #0	; 0x0
        2dbc34:	e5902000 	ldr	r2, [r0]
        2dbc38:	eb64427d 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
        2dbc3c:	e1a00004 	mov	r0, r4
        2dbc40:	eb5db20b 	bl	1a48474 <TEphemeralTracker::$ReadEphemeralList(void)>
        2dbc44:	e3a05000 	mov	r5, #0	; 0x0
        2dbc48:	e5940010 	ldr	r0, [r4, #16]	; fField16
        2dbc4c:	e5900000 	ldr	r0, [r0]
        2dbc50:	e3500000 	cmp	r0, #0	; 0x0
        2dbc54:	da00000a 	ble	2dbc84 <TEphemeralTracker::AbortEphemerals(void)+0x68>
        2dbc58:	e1a01005 	mov	r1, r5
        2dbc5c:	e5940010 	ldr	r0, [r4, #16]	; fField16
        2dbc60:	eb64468b 	bl	1bed694 <CDynamicArray::$SafeElementPtrAt(long)>
        2dbc64:	e5900000 	ldr	r0, [r0]
        2dbc68:	e5941000 	ldr	r1, [r4]
        2dbc6c:	eb5da59c 	bl	1a452e4 <$BreakLargeObjectToEntryLink(unsigned long, TStoreWrapper *)>
        2dbc70:	e2855001 	add	r5, r5, #1	; 0x1
        2dbc74:	e5940010 	ldr	r0, [r4, #16]	; fField16
        2dbc78:	e5900000 	ldr	r0, [r0]
        2dbc7c:	e1500005 	cmp	r0, r5
        2dbc80:	cafffff4 	bgt	2dbc58 <TEphemeralTracker::AbortEphemerals(void)+0x3c>
        2dbc84:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
        2dbc88:	e3a01000 	mov	r1, #0	; 0x0
        2dbc8c:	e5902000 	ldr	r2, [r0]
        2dbc90:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        2dbc94:	ea644266 	b	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
    */
}

/**
 * Symbol: TEphemeralTracker::AddEphemeral(unsigned long)
 * Address: 002dbc98
 */
TEphemeralTracker::AddEphemeral(unsigned long) {
    /*
        2dbc98:	e1a0c00d 	mov	ip, sp
        2dbc9c:	e92dd803 	stmdb	sp!, {r0, r1, fp, ip, lr, pc}
        2dbca0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dbca4:	e51b0014 	ldr	r0, [fp, -#20]	; fField20
        2dbca8:	e5b0100c 	ldr	r1, [r0, #12]!	; fField12
        2dbcac:	e51b0010 	ldr	r0, [fp, -#16]	; fField16
        2dbcb0:	eb5db1f1 	bl	1a4847c <$Find__17TEphemeralTrackerSFUlP13CDynamicArray>
        2dbcb4:	e3700001 	cmn	r0, #1	; 0x1
        2dbcb8:	191ba800 	ldmnedb	fp, {fp, sp, pc}
        2dbcbc:	e51b0014 	ldr	r0, [fp, -#20]	; fField20
        2dbcc0:	e590000c 	ldr	r0, [r0, #12]	; fField12
        2dbcc4:	e24b2010 	sub	r2, fp, #16	; 0x10
        2dbcc8:	e3a03001 	mov	r3, #1	; 0x1
        2dbccc:	e5901000 	ldr	r1, [r0]
        2dbcd0:	eb643608 	bl	1be94f8 <CDynamicArray::$InsertElementsBefore(long, void *, long)>
        2dbcd4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TEphemeralTracker::IsEphemeral(unsigned long)
 * Address: 002dbcd8
 */
TEphemeralTracker::IsEphemeral(unsigned long) {
    /*
        2dbcd8:	e1a0c00d 	mov	ip, sp
        2dbcdc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2dbce0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dbce4:	e1a05000 	mov	r5, r0
        2dbce8:	e1a04001 	mov	r4, r1
        2dbcec:	e590100c 	ldr	r1, [r0, #12]	; fField12
        2dbcf0:	e1a00004 	mov	r0, r4
        2dbcf4:	eb5db1e0 	bl	1a4847c <$Find__17TEphemeralTrackerSFUlP13CDynamicArray>
        2dbcf8:	e3700001 	cmn	r0, #1	; 0x1
        2dbcfc:	1a00000a 	bne	2dbd2c <TEphemeralTracker::IsEphemeral(unsigned long)+0x54>
        2dbd00:	e1a00004 	mov	r0, r4
        2dbd04:	e5951014 	ldr	r1, [r5, #20]	; fField20
        2dbd08:	eb5db1db 	bl	1a4847c <$Find__17TEphemeralTrackerSFUlP13CDynamicArray>
        2dbd0c:	e3700001 	cmn	r0, #1	; 0x1
        2dbd10:	1a000005 	bne	2dbd2c <TEphemeralTracker::IsEphemeral(unsigned long)+0x54>
        2dbd14:	e1a00004 	mov	r0, r4
        2dbd18:	e5b51018 	ldr	r1, [r5, #24]!	; fField24
        2dbd1c:	eb5db1d6 	bl	1a4847c <$Find__17TEphemeralTrackerSFUlP13CDynamicArray>
        2dbd20:	e3700001 	cmn	r0, #1	; 0x1
        2dbd24:	03a00000 	moveq	r0, #0	; 0x0
        2dbd28:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        2dbd2c:	e3a00001 	mov	r0, #1	; 0x1
        2dbd30:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TEphemeralTracker::RemoveEphemeral(unsigned long)
 * Address: 002dbd34
 */
TEphemeralTracker::RemoveEphemeral(unsigned long) {
    /*
        2dbd34:	e1a0c00d 	mov	ip, sp
        2dbd38:	e92dd803 	stmdb	sp!, {r0, r1, fp, ip, lr, pc}
        2dbd3c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dbd40:	e51b0014 	ldr	r0, [fp, -#20]	; fField20
        2dbd44:	e5b0100c 	ldr	r1, [r0, #12]!	; fField12
        2dbd48:	e51b0010 	ldr	r0, [fp, -#16]	; fField16
        2dbd4c:	eb5db5cb 	bl	1a49480 <$FindAndRemove__17TEphemeralTrackerSFUlP13CDynamicArray>
        2dbd50:	e3300000 	teq	r0, #0	; 0x0
        2dbd54:	1a000003 	bne	2dbd68 <TEphemeralTracker::RemoveEphemeral(unsigned long)+0x34>
        2dbd58:	e51b0014 	ldr	r0, [fp, -#20]	; fField20
        2dbd5c:	e5b01014 	ldr	r1, [r0, #20]!	; fField20
        2dbd60:	e51b0010 	ldr	r0, [fp, -#16]	; fField16
        2dbd64:	eb5db5c5 	bl	1a49480 <$FindAndRemove__17TEphemeralTrackerSFUlP13CDynamicArray>
        2dbd68:	e3300000 	teq	r0, #0	; 0x0
        2dbd6c:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        2dbd70:	e51b0014 	ldr	r0, [fp, -#20]	; fField20
        2dbd74:	e5900010 	ldr	r0, [r0, #16]	; fField16
        2dbd78:	e24b2010 	sub	r2, fp, #16	; 0x10
        2dbd7c:	e3a03001 	mov	r3, #1	; 0x1
        2dbd80:	e5901000 	ldr	r1, [r0]
        2dbd84:	eb6435db 	bl	1be94f8 <CDynamicArray::$InsertElementsBefore(long, void *, long)>
        2dbd88:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

