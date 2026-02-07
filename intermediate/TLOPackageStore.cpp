#include "include/TLOPackageStore.h"

/**
 * Symbol: TLOPackageStore::Init(void)
 * Address: 001015c4
 */
TLOPackageStore::Init(void) {
    /*
        1015c4:	e3a00000 	mov	r0, #0	; 0x0
        1015c8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLOPackageStore::Create(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, long, TLOCallback *)
 * Address: 001015cc
 */
TLOPackageStore::Create(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, long, TLOCallback *) {
    /*
        1015cc:	e1a0c00d 	mov	ip, sp
        1015d0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1015d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1015d8:	e1a04001 	mov	r4, r1
        1015dc:	e1a05002 	mov	r5, r2
        1015e0:	e1a06003 	mov	r6, r3
        1015e4:	e3a00000 	mov	r0, #0	; 0x0
        1015e8:	e59b900c 	ldr	r9, [fp, #12]
        1015ec:	e59ba018 	ldr	sl, [fp, #24]
        1015f0:	e5810000 	str	r0, [r1]
        1015f4:	e1a02001 	mov	r2, r1
        1015f8:	e1a00005 	mov	r0, r5
        1015fc:	e3a01000 	mov	r1, #0	; 0x0
        101600:	eb0a1569 	bl	386bac <TStore::NewWithinTransaction(long, unsigned long *)>
        101604:	e1b07000 	movs	r7, r0
        101608:	1a000026 	bne	1016a8 <TLOPackageStore::Create(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, long, TLOCallback *)+0xdc>
        10160c:	e1a02009 	mov	r2, r9
        101610:	e28f0f09 	add	r0, pc, #36	; 0x24
        101614:	e3a01000 	mov	r1, #0	; 0x0
        101618:	eb6b595a 	bl	1bd7b88 <$NewByName__FPCcN21>
        10161c:	e1b08000 	movs	r8, r0
        101620:	1a00000a 	bne	101650 <TLOPackageStore::Create(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, long, TLOCallback *)+0x84>
        101624:	eb6b82bd 	bl	1be2120 <$MemError>
        101628:	e3300000 	teq	r0, #0	; 0x0
        10162c:	13a070a8 	movne	r7, #168	; 0xa8
        101630:	12477b07 	subne	r7, r7, #7168	; 0x1c00
        101634:	1a00001b 	bne	1016a8 <TLOPackageStore::Create(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, long, TLOCallback *)+0xdc>
        101638:	ea00000b 	b	10166c <TLOPackageStore::Create(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, long, TLOCallback *)+0xa0>
        10163c:	5443616c 	strplb	r6, [r3], -#364
        101640:	6c626163 	stfvse	f6, [r2], -#396
        101644:	6b436f6d 	blvs	11dd400 <ROM$$Size+0xabd7b4>
        101648:	70726573 	rsbvcs	r6, r2, r3, ror r5
        10164c:	736f7200 	cmnvc	pc, #0	; 0x0
        101650:	e3380000 	teq	r8, #0	; 0x0
        101654:	0a000004 	beq	10166c <TLOPackageStore::Create(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, long, TLOCallback *)+0xa0>
        101658:	e1a00008 	mov	r0, r8
        10165c:	e3a01000 	mov	r1, #0	; 0x0
        101660:	eb0a1ff1 	bl	38962c <TCallbackCompressor::Init(void *)>
        101664:	e1b07000 	movs	r7, r0
        101668:	1a00000b 	bne	10169c <TLOPackageStore::Create(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, long, TLOCallback *)+0xd0>
        10166c:	e1a0300a 	mov	r3, sl
        101670:	e1a02008 	mov	r2, r8
        101674:	e3a01000 	mov	r1, #0	; 0x0
        101678:	e3a00000 	mov	r0, #0	; 0x0
        10167c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        101680:	e1a03009 	mov	r3, r9
        101684:	e1a01005 	mov	r1, r5
        101688:	e1a00006 	mov	r0, r6
        10168c:	e5942000 	ldr	r2, [r4]
        101690:	eb68300b 	bl	1b0d6c4 <$AllocatePackage(CPipe *, TStore *, unsigned long, char *, void *, long, TCallbackCompressor *, TLOCallback *)>
        101694:	e28dd010 	add	sp, sp, #16	; 0x10
        101698:	e1a07000 	mov	r7, r0
        10169c:	e3380000 	teq	r8, #0	; 0x0
        1016a0:	11a00008 	movne	r0, r8
        1016a4:	1b0a1fd9 	blne	389610 <TCallbackCompressor::Delete(void)>
        1016a8:	e3370000 	teq	r7, #0	; 0x0
        1016ac:	15941000 	ldrne	r1, [r4]
        1016b0:	13310000 	teqne	r1, #0	; 0x0
        1016b4:	11a00005 	movne	r0, r5
        1016b8:	1b0a1541 	blne	386bc4 <TStore::SeparatelyAbort(unsigned long)>
        1016bc:	e1a00007 	mov	r0, r7
        1016c0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TLOPackageStore::CreateFromCompressed(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, long, TLOCallback *)
 * Address: 001016c4
 */
TLOPackageStore::CreateFromCompressed(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, long, TLOCallback *) {
    /*
        1016c4:	e1a0c00d 	mov	ip, sp
        1016c8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1016cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1016d0:	e1a04001 	mov	r4, r1
        1016d4:	e1a0e002 	mov	lr, r2
        1016d8:	e1a0c003 	mov	ip, r3
        1016dc:	e59b5008 	ldr	r5, [fp, #8]
        1016e0:	e20550ff 	and	r5, r5, #255	; 0xff
        1016e4:	e28b300c 	add	r3, fp, #12	; 0xc
        1016e8:	e893000f 	ldmia	r3, {r0, r1, r2, r3}
        1016ec:	e59b6004 	ldr	r6, [fp, #4]
        1016f0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1016f4:	e1a03005 	mov	r3, r5
        1016f8:	e92d0008 	stmdb	sp!, {r3}
        1016fc:	e1a03006 	mov	r3, r6
        101700:	e1a0200c 	mov	r2, ip
        101704:	e1a0100e 	mov	r1, lr
        101708:	e1a00004 	mov	r0, r4
        10170c:	eb6827ab 	bl	1b0b5c0 <$LODefCreateFromComp(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, unsigned char, TLOCallback *)>
        101710:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TLOPackageStore::DeleteObject(TStore *, unsigned long)
 * Address: 00101714
 */
TLOPackageStore::DeleteObject(TStore *, unsigned long) {
    /*
        101714:	e1a00001 	mov	r0, r1
        101718:	e1a01002 	mov	r1, r2
        10171c:	ea683c4b 	b	1b10850 <$LODefaultDelete(TStore *, unsigned long)>
    */
}

/**
 * Symbol: TLOPackageStore::Duplicate(unsigned long *, TStore *, unsigned long, TStore *)
 * Address: 00101720
 */
TLOPackageStore::Duplicate(unsigned long *, TStore *, unsigned long, TStore *) {
    /*
        101720:	e1a00002 	mov	r0, r2
        101724:	e1a02003 	mov	r2, r3
        101728:	e1a0c000 	mov	ip, r0
        10172c:	e1a00001 	mov	r0, r1
        101730:	e1a0100c 	mov	r1, ip
        101734:	e59d3000 	ldr	r3, [sp]
        101738:	ea683c45 	b	1b10854 <$LODefaultDuplicate(unsigned long *, TStore *, unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TLOPackageStore::Resize(TStore *, unsigned long, unsigned long)
 * Address: 0010173c
 */
TLOPackageStore::Resize(TStore *, unsigned long, unsigned long) {
    /*
        10173c:	e59f0000 	ldr	r0, [pc, #0]	; 101744 <TLOPackageStore::Resize(TStore *, unsigned long, unsigned long)+0x8>
        101740:	e1a0f00e 	mov	pc, lr
        101744:	ffffd693 	swinv	0x00ffd693
    */
}

/**
 * Symbol: TLOPackageStore::StorageSize(TStore *, unsigned long)
 * Address: 00101748
 */
TLOPackageStore::StorageSize(TStore *, unsigned long) {
    /*
        101748:	e1a00001 	mov	r0, r1
        10174c:	e1a01002 	mov	r1, r2
        101750:	ea68279b 	b	1b0b5c4 <$LODefaultStorageSize(TStore *, unsigned long)>
    */
}

/**
 * Symbol: TLOPackageStore::SizeOfStream(TStore *, unsigned long, unsigned char)
 * Address: 00101754
 */
TLOPackageStore::SizeOfStream(TStore *, unsigned long, unsigned char) {
    /*
        101754:	e1a00002 	mov	r0, r2
        101758:	e20320ff 	and	r2, r3, #255	; 0xff
        10175c:	e1a03000 	mov	r3, r0
        101760:	e1a00001 	mov	r0, r1
        101764:	e1a01003 	mov	r1, r3
        101768:	ea682796 	b	1b0b5c8 <$LODefaultStreamSize(TStore *, unsigned long, unsigned char)>
    */
}

/**
 * Symbol: TLOPackageStore::Backup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)
 * Address: 0010176c
 */
TLOPackageStore::Backup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *) {
    /*
        10176c:	e1a0c00d 	mov	ip, sp
        101770:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        101774:	e24cb004 	sub	fp, ip, #4	; 0x4
        101778:	e1a00001 	mov	r0, r1
        10177c:	e1a01002 	mov	r1, r2
        101780:	e1a02003 	mov	r2, r3
        101784:	e59bc004 	ldr	ip, [fp, #4]
        101788:	e21cc0ff 	ands	ip, ip, #255	; 0xff
        10178c:	e59b3008 	ldr	r3, [fp, #8]
        101790:	091b6800 	ldmeqdb	fp, {fp, sp, lr}
        101794:	0a685911 	beq	1b17be0 <$BackupPackage(CPipe *, TStore *, unsigned long, TLOCallback *)>
        101798:	e92d0008 	stmdb	sp!, {r3}
        10179c:	e1a0300c 	mov	r3, ip
        1017a0:	eb683c29 	bl	1b1084c <$LODefaultBackup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)>
        1017a4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: Sizeof__15TLOPackageStoreSFv
 * Address: 00102f60
 */
void TLOPackageStore::Sizeof() {
    /*
        102f60:	e3a00010 	mov	r0, #16	; 0x10
        102f64:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLOPackageStore::New(void)
 * Address: 00102f68
 */
TLOPackageStore::New(void) {
    /*
        102f68:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLOPackageStore::Delete(void)
 * Address: 00102f6c
 */
TLOPackageStore::Delete(void) {
    /*
        102f6c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ClassInfo__15TLOPackageStoreSFv
 * Address: 00387b7c
 */
void TLOPackageStore::ClassInfo() {
    /*
        387b7c:	e24f0044 	sub	r0, pc, #68	; 0x44
        387b80:	e1a0f00e 	mov	pc, lr
        387b84:	e3a00000 	mov	r0, #0	; 0x0
        387b88:	e1a0f00e 	mov	pc, lr
        387b8c:	544c4f50 	strplb	r4, [ip], -#3920
        387b90:	61636b61 	cmnvs	r3, r1, ror #22
        387b94:	67655374 	undefined
        387b98:	6f726500 	swivs	0x00726500
        387b9c:	544c7267 	strplb	r7, [ip], -#615
        387ba0:	4f626a53 	swimi	0x00626a53
        387ba4:	746f7265 	strvcbt	r7, [pc], #265	; 387bac <ClassInfo__15TLOPackageStoreSFv+0x30>
        387ba8:	00545a69 	subeqs	r5, r4, r9, ror #20
        387bac:	70707952 	rsbvcs	r7, r0, r2, asr r9
        387bb0:	656c6f63 	strvsb	r6, [ip, -#3939]!
        387bb4:	53746f72 	cmnpl	r4, #456	; 0x1c8
        387bb8:	65446563 	strvsb	r6, [r4, -#1379]
        387bbc:	6f6d7072 	swivs	0x006d7072
        387bc0:	6573736f 	ldrvsb	r7, [r3, -#879]!
        387bc4:	72000054 	andvc	r0, r0, #84	; 0x54
        387bc8:	5a697070 	bpl	1de3d90 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x1d3538>
        387bcc:	7953746f 	ldmvcdb	r3, {r0, r1, r2, r3, r5, r6, sl, ip, sp, lr}^
        387bd0:	72654465 	rsbvc	r4, r5, #1694498816	; 0x65000000
        387bd4:	636f6d70 	cmnvs	pc, #7168	; 0x1c00
        387bd8:	72657373 	rsbvc	r7, r5, #-872415231	; 0xcc000001
        387bdc:	6f720000 	swivs	0x00720000
        387be0:	5453696d 	ldrplb	r6, [r3], -#2413
        387be4:	706c6552 	rsbvc	r6, ip, r2, asr r5
        387be8:	656c6f63 	strvsb	r6, [ip, -#3939]!
        387bec:	53746f72 	cmnpl	r4, #456	; 0x1c8
        387bf0:	65446563 	strvsb	r6, [r4, -#1379]
        387bf4:	6f6d7072 	swivs	0x006d7072
        387bf8:	6573736f 	ldrvsb	r7, [r3, -#879]!
        387bfc:	72000054 	andvc	r0, r0, #84	; 0x54
        387c00:	4c5a5265 	mrrcmi	2, 6, r5, sl, cr5
        387c04:	6c6f6353 	stcvsl	3, cr6, [pc], -#332
        387c08:	746f7265 	strvcbt	r7, [pc], #265	; 387c10 <ClassInfo__15TLOPackageStoreSFv+0x94>
        387c0c:	4465636f 	strmibt	r6, [r5], -#879
        387c10:	6d707265 	lfmvs	f7, 2, [r0, -#404]!
        387c14:	73736f72 	cmnvc	r3, #456	; 0x1c8
        387c18:	0000544c 	andeq	r5, r0, ip, asr #8
        387c1c:	5a53746f 	bpl	1864de0 <ROM$$Size+0x1145194>
        387c20:	72654465 	rsbvc	r4, r5, #1694498816	; 0x65000000
        387c24:	636f6d70 	cmnvs	pc, #7168	; 0x1c00
        387c28:	72657373 	rsbvc	r7, r5, #-872415231	; 0xcc000001
        387c2c:	6f720000 	swivs	0x00720000
        387c30:	5453696d 	ldrplb	r6, [r3], -#2413
        387c34:	706c6553 	rsbvc	r6, ip, r3, asr r5
        387c38:	746f7265 	strvcbt	r7, [pc], #265	; 387c40 <ClassInfo__15TLOPackageStoreSFv+0xc4>
        387c3c:	4465636f 	strmibt	r6, [r5], -#879
        387c40:	6d707265 	lfmvs	f7, 2, [r0, -#404]!
        387c44:	73736f72 	cmnvc	r3, #456	; 0x1c8
        387c50:	eaffffc9 	b	387b7c <ClassInfo__15TLOPackageStoreSFv>
        387c54:	ea5e270b 	b	1b11888 <TLOPackageStore::$New(void)>
        387c58:	ea5e1ac0 	b	1b0e760 <TLOPackageStore::$Delete(void)>
        387c5c:	ea5e1ee6 	b	1b0f7fc <TLOPackageStore::$Init(void)>
        387c60:	ea5e0e50 	b	1b0b5a8 <TLOPackageStore::$Create(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, long, TLOCallback *)>
        387c64:	ea5e1ab5 	b	1b0e740 <TLOPackageStore::$CreateFromCompressed(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, long, TLOCallback *)>
        387c68:	ea5e1aba 	b	1b0e758 <TLOPackageStore::$DeleteObject(TStore *, unsigned long)>
        387c6c:	ea5e1ec8 	b	1b0f794 <TLOPackageStore::$Duplicate(unsigned long *, TStore *, unsigned long, TStore *)>
        387c70:	ea5e271b 	b	1b118e4 <TLOPackageStore::$Resize(TStore *, unsigned long, unsigned long)>
        387c74:	ea5e2b2c 	b	1b1292c <TLOPackageStore::$StorageSize(TStore *, unsigned long)>
        387c78:	ea5e271e 	b	1b118f8 <TLOPackageStore::$SizeOfStream(TStore *, unsigned long, unsigned char)>
        387c7c:	ea5e1691 	b	1b0d6c8 <TLOPackageStore::$Backup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)>
        387c80:	00000000 	andeq	r0, r0, r0
        387c84:	00000048 	andeq	r0, r0, r8, asr #32
        387c88:	00000057 	andeq	r0, r0, r7, asr r0
        387c8c:	00000063 	andeq	r0, r0, r3, rrx
        387c90:	00000060 	andeq	r0, r0, r0, rrx
        387c94:	00000084 	andeq	r0, r0, r4, lsl #1
        387c98:	ea5e2b1b 	b	1b1290c <$Sizeof__18TXIPStoreCompanderSFv>
        387ca4:	ea5e26fa 	b	1b11894 <TXIPStoreCompander::$New(void)>
        387ca8:	ea5e1aae 	b	1b0e768 <TXIPStoreCompander::$Delete(void)>
        387cb8:	ea000001 	b	387cc4 <ClassInfo__18TXIPStoreCompanderSFv+0x8>
    */
}

