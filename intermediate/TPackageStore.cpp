#include "include/TPackageStore.h"

/**
 * Symbol: TPackageStore::Format(void)
 * Address: 00160364
 */
TPackageStore::Format(void) {
    /*
        160364:	e59f0000 	ldr	r0, [pc, #0]	; 16036c <TPackageStore::Format(void)+0x8>
        160368:	e1a0f00e 	mov	pc, lr
        16036c:	ffffd693 	swinv	0x00ffd693
    */
}

/**
 * Symbol: TPackageStore::NewObject(long, unsigned long *)
 * Address: 00160370
 */
TPackageStore::NewObject(long, unsigned long *) {
    /*
        160370:	e59f0000 	ldr	r0, [pc, #0]	; 160378 <TPackageStore::NewObject(long, unsigned long *)+0x8>
        160374:	e1a0f00e 	mov	pc, lr
        160378:	ffffd693 	swinv	0x00ffd693
    */
}

/**
 * Symbol: TPackageStore::EraseObject(unsigned long)
 * Address: 0016037c
 */
TPackageStore::EraseObject(unsigned long) {
    /*
        16037c:	e59f0000 	ldr	r0, [pc, #0]	; 160384 <TPackageStore::EraseObject(unsigned long)+0x8>
        160380:	e1a0f00e 	mov	pc, lr
        160384:	ffffd693 	swinv	0x00ffd693
    */
}

/**
 * Symbol: TPackageStore::DeleteObject(unsigned long)
 * Address: 00160388
 */
TPackageStore::DeleteObject(unsigned long) {
    /*
        160388:	e59f0000 	ldr	r0, [pc, #0]	; 160390 <TPackageStore::DeleteObject(unsigned long)+0x8>
        16038c:	e1a0f00e 	mov	pc, lr
        160390:	ffffd693 	swinv	0x00ffd693
    */
}

/**
 * Symbol: TPackageStore::SetObjectSize(unsigned long, long)
 * Address: 00160394
 */
TPackageStore::SetObjectSize(unsigned long, long) {
    /*
        160394:	e59f0000 	ldr	r0, [pc, #0]	; 16039c <TPackageStore::SetObjectSize(unsigned long, long)+0x8>
        160398:	e1a0f00e 	mov	pc, lr
        16039c:	ffffd693 	swinv	0x00ffd693
    */
}

/**
 * Symbol: TPackageStore::Write(unsigned long, long, char *, long)
 * Address: 001603a0
 */
TPackageStore::Write(unsigned long, long, char *, long) {
    /*
        1603a0:	e59f0000 	ldr	r0, [pc, #0]	; 1603a8 <TPackageStore::Write(unsigned long, long, char *, long)+0x8>
        1603a4:	e1a0f00e 	mov	pc, lr
        1603a8:	ffffd693 	swinv	0x00ffd693
    */
}

/**
 * Symbol: TPackageStore::IsReadOnly(unsigned char *)
 * Address: 001603ac
 */
TPackageStore::IsReadOnly(unsigned char *) {
    /*
        1603ac:	e3a00001 	mov	r0, #1	; 0x1
        1603b0:	e5c10000 	strb	r0, [r1]
        1603b4:	e3a00000 	mov	r0, #0	; 0x0
        1603b8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageStore::Idle(unsigned char *, unsigned char *)
 * Address: 001603bc
 */
TPackageStore::Idle(unsigned char *, unsigned char *) {
    /*
        1603bc:	e3a00000 	mov	r0, #0	; 0x0
        1603c0:	e5c10000 	strb	r0, [r1]
        1603c4:	e5c20000 	strb	r0, [r2]
        1603c8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageStore::NextObject(unsigned long, unsigned long *)
 * Address: 001603cc
 */
TPackageStore::NextObject(unsigned long, unsigned long *) {
    /*
        1603cc:	e3a00000 	mov	r0, #0	; 0x0
        1603d0:	e5820000 	str	r0, [r2]
        1603d4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageStore::CheckIntegrity(unsigned long *)
 * Address: 001603d8
 */
TPackageStore::CheckIntegrity(unsigned long *) {
    /*
        1603d8:	e3a00000 	mov	r0, #0	; 0x0
        1603dc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageStore::SetBuddy(TStore *)
 * Address: 00160518
 */
TPackageStore::SetBuddy(TStore *) {
    /*
        160518:	e3a00000 	mov	r0, #0	; 0x0
        16051c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageStore::OwnsObject(unsigned long)
 * Address: 00160520
 */
TPackageStore::OwnsObject(unsigned long) {
    /*
        160520:	e3a00001 	mov	r0, #1	; 0x1
        160524:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageStore::LockStore(void)
 * Address: 00160528
 */
TPackageStore::LockStore(void) {
    /*
        160528:	e5901018 	ldr	r1, [r0, #24]	; fField24
        16052c:	e2811001 	add	r1, r1, #1	; 0x1
        160530:	e5a01018 	str	r1, [r0, #24]!	; fField24
        160534:	e3a00000 	mov	r0, #0	; 0x0
        160538:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageStore::UnlockStore(void)
 * Address: 0016053c
 */
TPackageStore::UnlockStore(void) {
    /*
        16053c:	e5901018 	ldr	r1, [r0, #24]	; fField24
        160540:	e2411001 	sub	r1, r1, #1	; 0x1
        160544:	e5a01018 	str	r1, [r0, #24]!	; fField24
        160548:	e3a00000 	mov	r0, #0	; 0x0
        16054c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageStore::Abort(void)
 * Address: 00160550
 */
TPackageStore::Abort(void) {
    /*
        160550:	e3a01000 	mov	r1, #0	; 0x0
        160554:	e5a01018 	str	r1, [r0, #24]!	; fField24
        160558:	e1a00001 	mov	r0, r1
        16055c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageStore::IsLocked(void)
 * Address: 00160560
 */
TPackageStore::IsLocked(void) {
    /*
        160560:	e5900018 	ldr	r0, [r0, #24]	; fField24
        160564:	e3300000 	teq	r0, #0	; 0x0
        160568:	13a00001 	movne	r0, #1	; 0x1
        16056c:	e20000ff 	and	r0, r0, #255	; 0xff
        160570:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageStore::IsSameStore(void *, unsigned long)
 * Address: 00160574
 */
TPackageStore::IsSameStore(void *, unsigned long) {
    /*
        160574:	e3a00000 	mov	r0, #0	; 0x0
        160578:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageStore::SetStore(TStore *, unsigned long)
 * Address: 0016057c
 */
TPackageStore::SetStore(TStore *, unsigned long) {
    /*
        16057c:	e3a00000 	mov	r0, #0	; 0x0
        160580:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageStore::Address(unsigned long)
 * Address: 00160584
 */
TPackageStore::Address(unsigned long) {
    /*
        160584:	e3a00000 	mov	r0, #0	; 0x0
        160588:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageStore::StoreKind(void)
 * Address: 0016058c
 */
TPackageStore::StoreKind(void) {
    /*
        16058c:	e28f0f00 	add	r0, pc, #0	; 0x0
        160590:	e1a0f00e 	mov	pc, lr
        160594:	5061636b 	rsbpl	r6, r1, fp, ror #6
        160598:	61676500 	cmnvs	r7, r0, lsl #10
    */
}

/**
 * Symbol: TPackageStore::VppOff(void)
 * Address: 00160684
 */
TPackageStore::VppOff(void) {
    /*
        160684:	e3a00000 	mov	r0, #0	; 0x0
        160688:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageStore::Sleep(void)
 * Address: 0016068c
 */
TPackageStore::Sleep(void) {
    /*
        16068c:	e3a00000 	mov	r0, #0	; 0x0
        160690:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageStore::IsROM(void)
 * Address: 00160694
 */
TPackageStore::IsROM(void) {
    /*
        160694:	e3a00001 	mov	r0, #1	; 0x1
        160698:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageStore::GetRootId(unsigned long *)
 * Address: 0016069c
 */
TPackageStore::GetRootId(unsigned long *) {
    /*
        16069c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1606a0:	e5900000 	ldr	r0, [r0]
        1606a4:	e5810000 	str	r0, [r1]
        1606a8:	e3a00000 	mov	r0, #0	; 0x0
        1606ac:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageStore::GetObjectSize(unsigned long, long *)
 * Address: 001606b0
 */
TPackageStore::GetObjectSize(unsigned long, long *) {
    /*
        1606b0:	e3510000 	cmp	r1, #0	; 0x0
        1606b4:	3a00000a 	bcc	1606e4 <TPackageStore::GetObjectSize(unsigned long, long *)+0x34>
        1606b8:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1606bc:	e5903004 	ldr	r3, [r0, #4]	; fField4
        1606c0:	e1530001 	cmp	r3, r1
        1606c4:	9a000006 	bls	1606e4 <TPackageStore::GetObjectSize(unsigned long, long *)+0x34>
        1606c8:	e0800101 	add	r0, r0, r1, lsl #2
        1606cc:	e2801008 	add	r1, r0, #8	; 0x8
        1606d0:	e8910003 	ldmia	r1, {r0, r1}
        1606d4:	e0410000 	sub	r0, r1, r0
        1606d8:	e5820000 	str	r0, [r2]
        1606dc:	e3a00000 	mov	r0, #0	; 0x0
        1606e0:	e1a0f00e 	mov	pc, lr
        1606e4:	e3a00fa2 	mov	r0, #648	; 0x288
        1606e8:	e2400b0b 	sub	r0, r0, #11264	; 0x2c00
        1606ec:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageStore::Read(unsigned long, long, char *, long)
 * Address: 001606f0
 */
TPackageStore::Read(unsigned long, long, char *, long) {
    /*
        1606f0:	e1a0c00d 	mov	ip, sp
        1606f4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1606f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1606fc:	e59bc004 	ldr	ip, [fp, #4]	; fField4
        160700:	e3510000 	cmp	r1, #0	; 0x0
        160704:	3a000003 	bcc	160718 <TPackageStore::Read(unsigned long, long, char *, long)+0x28>
        160708:	e5b0e010 	ldr	lr, [r0, #16]!	; fField16
        16070c:	e59e0004 	ldr	r0, [lr, #4]	; fField4
        160710:	e1500001 	cmp	r0, r1
        160714:	8a000002 	bhi	160724 <TPackageStore::Read(unsigned long, long, char *, long)+0x34>
        160718:	e3a00fa2 	mov	r0, #648	; 0x288
        16071c:	e2400b0b 	sub	r0, r0, #11264	; 0x2c00
        160720:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        160724:	e08e1101 	add	r1, lr, r1, lsl #2
        160728:	e591000c 	ldr	r0, [r1, #12]
        16072c:	e5911008 	ldr	r1, [r1, #8]
        160730:	e0404001 	sub	r4, r0, r1
        160734:	e3a00fa6 	mov	r0, #664	; 0x298
        160738:	e2400b0b 	sub	r0, r0, #11264	; 0x2c00
        16073c:	e3520000 	cmp	r2, #0	; 0x0
        160740:	b91ba830 	ldmltdb	fp, {r4, r5, fp, sp, pc}
        160744:	e1520004 	cmp	r2, r4
        160748:	a91ba830 	ldmgedb	fp, {r4, r5, fp, sp, pc}
        16074c:	e082500c 	add	r5, r2, ip
        160750:	e1550004 	cmp	r5, r4
        160754:	d3a04000 	movle	r4, #0	; 0x0
        160758:	c044c002 	subgt	ip, r4, r2
        16075c:	c1a04000 	movgt	r4, r0
        160760:	e081000e 	add	r0, r1, lr
        160764:	e0800002 	add	r0, r0, r2
        160768:	e1a0200c 	mov	r2, ip
        16076c:	e1a01003 	mov	r1, r3
        160770:	eb69f9f7 	bl	1bdef54 <$BlockMove>
        160774:	e1a00004 	mov	r0, r4
        160778:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TPackageStore::GetStoreSizes(long *, long *)
 * Address: 0016077c
 */
TPackageStore::GetStoreSizes(long *, long *) {
    /*
        16077c:	e5903014 	ldr	r3, [r0, #20]	; fField20
        160780:	e5813000 	str	r3, [r1]
        160784:	e5900014 	ldr	r0, [r0, #20]	; fField20
        160788:	e5820000 	str	r0, [r2]
        16078c:	e3a00000 	mov	r0, #0	; 0x0
        160790:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageStore::NewWithinTransaction(long, unsigned long *)
 * Address: 001607e8
 */
TPackageStore::NewWithinTransaction(long, unsigned long *) {
    /*
        1607e8:	ea638242 	b	1a410f8 <TPackageStore::$NewObject(long, unsigned long *)>
    */
}

/**
 * Symbol: TPackageStore::StartTransactionAgainst(unsigned long)
 * Address: 001607ec
 */
TPackageStore::StartTransactionAgainst(unsigned long) {
    /*
        1607ec:	e3a00000 	mov	r0, #0	; 0x0
        1607f0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageStore::SeparatelyAbort(unsigned long)
 * Address: 00160804
 */
TPackageStore::SeparatelyAbort(unsigned long) {
    /*
        160804:	e3a00000 	mov	r0, #0	; 0x0
        160808:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageStore::AddToCurrentTransaction(unsigned long)
 * Address: 0016080c
 */
TPackageStore::AddToCurrentTransaction(unsigned long) {
    /*
        16080c:	e3a00000 	mov	r0, #0	; 0x0
        160810:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageStore::InSeparateTransaction(unsigned long)
 * Address: 00160814
 */
TPackageStore::InSeparateTransaction(unsigned long) {
    /*
        160814:	e3a00000 	mov	r0, #0	; 0x0
        160818:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageStore::LockReadOnly(void)
 * Address: 0016081c
 */
TPackageStore::LockReadOnly(void) {
    /*
        16081c:	e3a00000 	mov	r0, #0	; 0x0
        160820:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageStore::UnlockReadOnly(unsigned char)
 * Address: 00160824
 */
TPackageStore::UnlockReadOnly(unsigned char) {
    /*
        160824:	e3a00000 	mov	r0, #0	; 0x0
        160828:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageStore::InTransaction(void)
 * Address: 0016082c
 */
TPackageStore::InTransaction(void) {
    /*
        16082c:	ea637e02 	b	1a4003c <TPackageStore::$IsLocked(void)>
    */
}

/**
 * Symbol: TPackageStore::CalcXIPObjectSize(long, long, long *)
 * Address: 00160830
 */
TPackageStore::CalcXIPObjectSize(long, long, long *) {
    /*
        160830:	e3e000ab 	mvn	r0, #171	; 0xab
        160834:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        160838:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageStore::NewXIPObject(long, unsigned long *)
 * Address: 0016083c
 */
TPackageStore::NewXIPObject(long, unsigned long *) {
    /*
        16083c:	e3e000ab 	mvn	r0, #171	; 0xab
        160840:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        160844:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageStore::NewObject(char *, long, unsigned long *)
 * Address: 00160848
 */
TPackageStore::NewObject(char *, long, unsigned long *) {
    /*
        160848:	e59f0000 	ldr	r0, [pc, #0]	; 160850 <TPackageStore::NewObject(char *, long, unsigned long *)+0x8>
        16084c:	e1a0f00e 	mov	pc, lr
        160850:	ffffd693 	swinv	0x00ffd693
    */
}

/**
 * Symbol: TPackageStore::ReplaceObject(unsigned long, char *, long)
 * Address: 00160854
 */
TPackageStore::ReplaceObject(unsigned long, char *, long) {
    /*
        160854:	e59f0000 	ldr	r0, [pc, #0]	; 16085c <TPackageStore::ReplaceObject(unsigned long, char *, long)+0x8>
        160858:	e1a0f00e 	mov	pc, lr
        16085c:	ffffd693 	swinv	0x00ffd693
    */
}

/**
 * Symbol: Sizeof__13TPackageStoreSFv
 * Address: 00160860
 */
void TPackageStore::Sizeof() {
    /*
        160860:	e3a0001c 	mov	r0, #28	; 0x1c
        160864:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)
 * Address: 00160868
 */
TPackageStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *) {
    /*
        160868:	e3e000ab 	mvn	r0, #171	; 0xab
        16086c:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        160870:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageStore::New(void)
 * Address: 00160874
 */
TPackageStore::New(void) {
    /*
        160874:	e3a01000 	mov	r1, #0	; 0x0
        160878:	e5801010 	str	r1, [r0, #16]	; fField16
        16087c:	e5801014 	str	r1, [r0, #20]	; fField20
        160880:	e5801018 	str	r1, [r0, #24]	; fField24
        160884:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageStore::Delete(void)
 * Address: 00160888
 */
TPackageStore::Delete(void) {
    /*
        160888:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)
 * Address: 0016088c
 */
TPackageStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *) {
    /*
        16088c:	e280000c 	add	r0, r0, #12	; 0xc
        160890:	e9a00006 	stmib	r0!, {r1, r2}
        160894:	e3a00000 	mov	r0, #0	; 0x0
        160898:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageStore::NeedsFormat(unsigned char *)
 * Address: 0016089c
 */
TPackageStore::NeedsFormat(unsigned char *) {
    /*
        16089c:	e3a00000 	mov	r0, #0	; 0x0
        1608a0:	e5c10000 	strb	r0, [r1]
        1608a4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ClassInfo__13TPackageStoreSFv
 * Address: 00384180
 */
void TPackageStore::ClassInfo() {
    /*
        384180:	e24f0044 	sub	r0, pc, #68	; 0x44
        384184:	e1a0f00e 	mov	pc, lr
        384188:	e3a00000 	mov	r0, #0	; 0x0
        38418c:	e1a0f00e 	mov	pc, lr
        384190:	54506163 	ldrplb	r6, [r0], -#355	; fField355
        384194:	6b616765 	blvs	1bddf30 <TCardSocket::$Vpp2On(void)+0x34>
        384198:	53746f72 	cmnpl	r4, #456	; 0x1c8
        38419c:	65005453 	strvs	r5, [r0, -#1107]	; fField1107
        3841a0:	746f7265 	strvcbt	r7, [pc], #265	; 3841a8 <ClassInfo__13TPackageStoreSFv+0x28>
        3841ac:	eafffff3 	b	384180 <ClassInfo__13TPackageStoreSFv>
        3841b0:	ea5af3cd 	b	1a410ec <TPackageStore::$New(void)>
        3841b4:	ea5ae745 	b	1a3ded0 <TPackageStore::$Delete(void)>
        3841b8:	ea5aef8b 	b	1a3ffec <TPackageStore::$Init(void *, unsigned long, unsigned long, int, unsigned long, void *)>
        3841bc:	ea5af3c9 	b	1a410e8 <TPackageStore::$NeedsFormat(unsigned char *)>
        3841c0:	ea5aef72 	b	1a3ff90 <TPackageStore::$Format(void)>
        3841c4:	ea5aef80 	b	1a3ffcc <TPackageStore::$GetRootId(unsigned long *)>
        3841c8:	ea5af3ca 	b	1a410f8 <TPackageStore::$NewObject(long, unsigned long *)>
        3841cc:	ea5aeb53 	b	1a3ef20 <TPackageStore::$EraseObject(unsigned long)>
        3841d0:	ea5ae745 	b	1a3deec <TPackageStore::$DeleteObject(unsigned long)>
        3841d4:	ea5afbff 	b	1a431d8 <TPackageStore::$SetObjectSize(unsigned long, long)>
        3841d8:	ea5aef7a 	b	1a3ffc8 <TPackageStore::$GetObjectSize(unsigned long, long *)>
        3841dc:	ea5b042c 	b	1a45294 <TPackageStore::$Write(unsigned long, long, char *, long)>
        3841e0:	ea5af7dc 	b	1a42158 <TPackageStore::$Read(unsigned long, long, char *, long)>
        3841e4:	ea5aef7a 	b	1a3ffd4 <TPackageStore::$GetStoreSizes(long *, long *)>
        3841e8:	ea5aef94 	b	1a40040 <TPackageStore::$IsReadOnly(unsigned char *)>
        3841ec:	ea5af3b0 	b	1a410b4 <TPackageStore::$LockStore(void)>
        3841f0:	ea5b001d 	b	1a4426c <TPackageStore::$UnlockStore(void)>
        3841f4:	ea5ae30d 	b	1a3ce30 <TPackageStore::$Abort(void)>
        3841f8:	ea5aef79 	b	1a3ffe4 <TPackageStore::$Idle(unsigned char *, unsigned char *)>
        3841fc:	ea5af7c0 	b	1a42104 <TPackageStore::$NextObject(unsigned long, unsigned long *)>
        384200:	ea5ae71e 	b	1a3de80 <TPackageStore::$CheckIntegrity(unsigned long *)>
        384204:	ea5afbef 	b	1a431c8 <TPackageStore::$SetBuddy(TStore *)>
        384208:	ea5af7c6 	b	1a42128 <TPackageStore::$OwnsObject(unsigned long)>
        38420c:	ea5ae308 	b	1a3ce34 <TPackageStore::$Address(unsigned long)>
        384210:	ea5b0000 	b	1a44218 <TPackageStore::$StoreKind(void)>
        384214:	ea5afbf3 	b	1a431e8 <TPackageStore::$SetStore(TStore *, unsigned long)>
        384218:	ea5aef8a 	b	1a40048 <TPackageStore::$IsSameStore(void *, unsigned long)>
        38421c:	ea5aef86 	b	1a4003c <TPackageStore::$IsLocked(void)>
        384220:	ea5b041a 	b	1a45290 <TPackageStore::$VppOff(void)>
        384224:	ea5afbf4 	b	1a431fc <TPackageStore::$Sleep(void)>
        384228:	ea5aef85 	b	1a40044 <TPackageStore::$IsROM(void)>
        38422c:	ea5b2d62 	b	1a4f7bc <TPackageStore::$NewWithinTransaction(long, unsigned long *)>
        384230:	ea5b2d65 	b	1a4f7cc <TPackageStore::$StartTransactionAgainst(unsigned long)>
        384234:	ea5b2d63 	b	1a4f7c8 <TPackageStore::$SeparatelyAbort(unsigned long)>
        384238:	ea5b2d55 	b	1a4f794 <TPackageStore::$AddToCurrentTransaction(unsigned long)>
        38423c:	ea5b2d5a 	b	1a4f7ac <TPackageStore::$InSeparateTransaction(unsigned long)>
        384240:	ea5b2d5b 	b	1a4f7b4 <TPackageStore::$LockReadOnly(void)>
        384244:	ea5b2d61 	b	1a4f7d0 <TPackageStore::$UnlockReadOnly(unsigned char)>
        384248:	ea5b2d58 	b	1a4f7b0 <TPackageStore::$InTransaction(void)>
        38424c:	ea5b2d59 	b	1a4f7b8 <TPackageStore::$NewObject(char *, long, unsigned long *)>
        384250:	ea5b2d5b 	b	1a4f7c4 <TPackageStore::$ReplaceObject(unsigned long, char *, long)>
        384254:	ea5b2d51 	b	1a4f7a0 <TPackageStore::$CalcXIPObjectSize(long, long, long *)>
        384258:	ea5b2d58 	b	1a4f7c0 <TPackageStore::$NewXIPObject(long, unsigned long *)>
        38425c:	ea5b2d51 	b	1a4f7a8 <TPackageStore::$GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)>
        384260:	00000000 	andeq	r0, r0, r0
        384264:	00000048 	andeq	r0, r0, r8, asr #32
        384268:	00000058 	andeq	r0, r0, r8, asr r0
        38426c:	00000062 	andeq	r0, r0, r2, rrx
        384270:	00000060 	andeq	r0, r0, r0, rrx
        384274:	0000007c 	andeq	r0, r0, ip, ror r0
        384278:	eaf58935 	b	e6754 <Sizeof__19PHammerInTranslatorSFv>
        384284:	eaf58934 	b	e675c <PHammerInTranslator::New(void)>
        384288:	eaf5893a 	b	e6778 <PHammerInTranslator::Delete(void)>
        384298:	ea000001 	b	3842a4 <ClassInfo__19PHammerInTranslatorSFv+0x8>
    */
}

