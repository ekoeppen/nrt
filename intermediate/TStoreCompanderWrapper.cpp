#include "include/TStoreCompanderWrapper.h"

/**
 * Symbol: Sizeof__22TStoreCompanderWrapperSFv
 * Address: 001fa5c4
 */
void TStoreCompanderWrapper::Sizeof() {
    /*
        1fa5c4:	e3a00024 	mov	r0, #36	; 0x24
        1fa5c8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TStoreCompanderWrapper::New(void)
 * Address: 001fa5cc
 */
TStoreCompanderWrapper::New(void) {
    /*
        1fa5cc:	e3a01000 	mov	r1, #0	; 0x0
        1fa5d0:	e5801010 	str	r1, [r0, #16]	; fField16
        1fa5d4:	e580101c 	str	r1, [r0, #28]	; fField28
        1fa5d8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TStoreCompanderWrapper::Delete(void)
 * Address: 001fa6ac
 */
TStoreCompanderWrapper::Delete(void) {
    /*
        1fa6ac:	e1a0c00d 	mov	ip, sp
        1fa6b0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1fa6b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1fa6b8:	e1a04000 	mov	r4, r0
        1fa6bc:	e24dd080 	sub	sp, sp, #128	; 0x80
        1fa6c0:	e590001c 	ldr	r0, [r0, #28]	; fField28
        1fa6c4:	e3300000 	teq	r0, #0	; 0x0
        1fa6c8:	0a00000c 	beq	1fa700 <TStoreCompanderWrapper::Delete(void)+0x54>
        1fa6cc:	e1a0000d 	mov	r0, sp
        1fa6d0:	e5942020 	ldr	r2, [r4, #32]	; fField32
        1fa6d4:	e28f1f0a 	add	r1, pc, #40	; 0x28
        1fa6d8:	eb66eced 	bl	1bb5a94 <$sprintf>
        1fa6dc:	e1a0100d 	mov	r1, sp
        1fa6e0:	e28f0f0a 	add	r0, pc, #40	; 0x28
        1fa6e4:	e3a02000 	mov	r2, #0	; 0x0
        1fa6e8:	eb675443 	bl	1bcf7fc <$ClassInfoByName__FPCcT1Ul>
        1fa6ec:	e1b01000 	movs	r1, r0
        1fa6f0:	1594001c 	ldrne	r0, [r4, #28]	; fField28
        1fa6f4:	1b6789c4 	blne	1bdce0c <TProtocol::$SetType(TClassInfo const *)>
        1fa6f8:	e5b4001c 	ldr	r0, [r4, #28]!	; fField28
        1fa6fc:	eb063303 	bl	387310 <TStoreDecompressor::Delete(void)>
        1fa700:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1fa704:	2573436c 	ldrcsb	r4, [r3, -#876]!
        1fa708:	65616e75 	strvsb	r6, [r1, -#3701]!
        1fa70c:	70000000 	andvc	r0, r0, r0
        1fa710:	5453746f 	ldrplb	r7, [r3], -#1135
        1fa714:	72654465 	rsbvc	r4, r5, #1694498816	; 0x65000000
        1fa718:	636f6d70 	cmnvs	pc, #7168	; 0x1c00
        1fa71c:	72657373 	rsbvc	r7, r5, #-872415231	; 0xcc000001
        1fa720:	6f720000 	swivs	0x00720000
    */
}

/**
 * Symbol: TStoreCompanderWrapper::Init(TStore *, unsigned long, unsigned long, unsigned char, unsigned char)
 * Address: 001fa724
 */
TStoreCompanderWrapper::Init(TStore *, unsigned long, unsigned long, unsigned char, unsigned char) {
    /*
        1fa724:	e59f0000 	ldr	r0, [pc, #0]	; 1fa72c <TStoreCompanderWrapper::Init(TStore *, unsigned long, unsigned long, unsigned char, unsigned char)+0x8>
        1fa728:	e1a0f00e 	mov	pc, lr
        1fa72c:	ffffd8eb 	swinv	0x00ffd8eb
    */
}

/**
 * Symbol: TStoreCompanderWrapper::Init(TStore *, char *, unsigned long, unsigned long)
 * Address: 001fa730
 */
TStoreCompanderWrapper::Init(TStore *, char *, unsigned long, unsigned long) {
    /*
        1fa730:	e1a0c00d 	mov	ip, sp
        1fa734:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1fa738:	e24cb004 	sub	fp, ip, #4	; 0x4
        1fa73c:	e1a04000 	mov	r4, r0
        1fa740:	e1a05001 	mov	r5, r1
        1fa744:	e3a060ea 	mov	r6, #234	; 0xea
        1fa748:	e2466b0a 	sub	r6, r6, #10240	; 0x2800
        1fa74c:	e59b7004 	ldr	r7, [fp, #4]
        1fa750:	e2800010 	add	r0, r0, #16	; 0x10
        1fa754:	e880000a 	stmia	r0, {r1, r3}
        1fa758:	e5802010 	str	r2, [r0, #16]	; fField16
        1fa75c:	e2400010 	sub	r0, r0, #16	; 0x10
        1fa760:	e1a01002 	mov	r1, r2
        1fa764:	e28f0f1a 	add	r0, pc, #104	; 0x68
        1fa768:	eb677507 	bl	1bd7b8c <$NewByName__FPCcT1>
        1fa76c:	e584001c 	str	r0, [r4, #28]	; fField28
        1fa770:	e3300000 	teq	r0, #0	; 0x0
        1fa774:	0a000014 	beq	1fa7cc <TStoreCompanderWrapper::Init(TStore *, char *, unsigned long, unsigned long)+0x9c>
        1fa778:	e1a02007 	mov	r2, r7
        1fa77c:	e1a01005 	mov	r1, r5
        1fa780:	eb0632e9 	bl	38732c <TStoreDecompressor::Init(TStore *, unsigned long)>
        1fa784:	e1b06000 	movs	r6, r0
        1fa788:	1a00000f 	bne	1fa7cc <TStoreCompanderWrapper::Init(TStore *, char *, unsigned long, unsigned long)+0x9c>
        1fa78c:	e2846018 	add	r6, r4, #24	; 0x18
        1fa790:	e5944014 	ldr	r4, [r4, #20]	; fField20
        1fa794:	e24dd014 	sub	sp, sp, #20	; 0x14
        1fa798:	e1a0000d 	mov	r0, sp
        1fa79c:	eb63d409 	bl	1aef7c8 <PackageRoot::$__ct(void)>
        1fa7a0:	e3a03014 	mov	r3, #20	; 0x14
        1fa7a4:	e92d0008 	stmdb	sp!, {r3}
        1fa7a8:	e28d3004 	add	r3, sp, #4	; 0x4
        1fa7ac:	e1a01004 	mov	r1, r4
        1fa7b0:	e1a00005 	mov	r0, r5
        1fa7b4:	e3a02000 	mov	r2, #0	; 0x0
        1fa7b8:	eb641e60 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        1fa7bc:	e5bd1004 	ldr	r1, [sp, #4]!
        1fa7c0:	e5861000 	str	r1, [r6]
        1fa7c4:	e28dd014 	add	sp, sp, #20	; 0x14
        1fa7c8:	e1a06000 	mov	r6, r0
        1fa7cc:	e1a00006 	mov	r0, r6
        1fa7d0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1fa7d4:	5453746f 	ldrplb	r7, [r3], -#1135
        1fa7d8:	72654465 	rsbvc	r4, r5, #1694498816	; 0x65000000
        1fa7dc:	636f6d70 	cmnvs	pc, #7168	; 0x1c00
        1fa7e0:	72657373 	rsbvc	r7, r5, #-872415231	; 0xcc000001
        1fa7e4:	6f720000 	swivs	0x00720000
    */
}

/**
 * Symbol: TStoreCompanderWrapper::BlockSize(void)
 * Address: 001fa7e8
 */
TStoreCompanderWrapper::BlockSize(void) {
    /*
        1fa7e8:	e3a00b01 	mov	r0, #1024	; 0x400
        1fa7ec:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TStoreCompanderWrapper::Read(unsigned long, char *, long, unsigned long)
 * Address: 001fa7f0
 */
TStoreCompanderWrapper::Read(unsigned long, char *, long, unsigned long) {
    /*
        1fa7f0:	e1a0c00d 	mov	ip, sp
        1fa7f4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1fa7f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1fa7fc:	e1a04000 	mov	r4, r0
        1fa800:	e1a0c001 	mov	ip, r1
        1fa804:	e1a06002 	mov	r6, r2
        1fa808:	e1a05003 	mov	r5, r3
        1fa80c:	e59b7004 	ldr	r7, [fp, #4]
        1fa810:	e24dd004 	sub	sp, sp, #4	; 0x4
        1fa814:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1fa818:	e3a03004 	mov	r3, #4	; 0x4
        1fa81c:	e5941018 	ldr	r1, [r4, #24]	; fField24
        1fa820:	e92d0008 	stmdb	sp!, {r3}
        1fa824:	e1a0252c 	mov	r2, ip, lsr #10
        1fa828:	e1a02102 	mov	r2, r2, lsl #2
        1fa82c:	e08d3003 	add	r3, sp, r3
        1fa830:	eb641e42 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        1fa834:	e28dd004 	add	sp, sp, #4	; 0x4
        1fa838:	e3300000 	teq	r0, #0	; 0x0
        1fa83c:	1a000007 	bne	1fa860 <TStoreCompanderWrapper::Read(unsigned long, char *, long, unsigned long)+0x70>
        1fa840:	e1a03007 	mov	r3, r7
        1fa844:	e92d0008 	stmdb	sp!, {r3}
        1fa848:	e1a03005 	mov	r3, r5
        1fa84c:	e1a02006 	mov	r2, r6
        1fa850:	e5b4001c 	ldr	r0, [r4, #28]!	; fField28
        1fa854:	e59d1004 	ldr	r1, [sp, #4]
        1fa858:	eb0632b6 	bl	387338 <TStoreDecompressor::Read(unsigned long, char *, long, unsigned long)>
        1fa85c:	e28dd004 	add	sp, sp, #4	; 0x4
        1fa860:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TStoreCompanderWrapper::Write(unsigned long, char *, long, unsigned long)
 * Address: 001fa864
 */
TStoreCompanderWrapper::Write(unsigned long, char *, long, unsigned long) {
    /*
        1fa864:	e59f0000 	ldr	r0, [pc, #0]	; 1fa86c <TStoreCompanderWrapper::Write(unsigned long, char *, long, unsigned long)+0x8>
        1fa868:	e1a0f00e 	mov	pc, lr
        1fa86c:	ffffd8eb 	swinv	0x00ffd8eb
    */
}

/**
 * Symbol: TStoreCompanderWrapper::DoTransactionAgainst(long, unsigned long)
 * Address: 001fa870
 */
TStoreCompanderWrapper::DoTransactionAgainst(long, unsigned long) {
    /*
        1fa870:	e1a0c00d 	mov	ip, sp
        1fa874:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1fa878:	e24cb004 	sub	fp, ip, #4	; 0x4
        1fa87c:	e1a0c001 	mov	ip, r1
        1fa880:	e3a03000 	mov	r3, #0	; 0x0
        1fa884:	e92d0008 	stmdb	sp!, {r3}
        1fa888:	e2802010 	add	r2, r0, #16	; 0x10
        1fa88c:	e8920007 	ldmia	r2, {r0, r1, r2}
        1fa890:	e1a0300c 	mov	r3, ip
        1fa894:	eb644777 	bl	1b0c678 <$LODefaultDoTransaction__FP6TStoreUlT2lUc>
        1fa898:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TStoreCompanderWrapper::IsReadOnly(void)
 * Address: 001fa89c
 */
TStoreCompanderWrapper::IsReadOnly(void) {
    /*
        1fa89c:	e3a00001 	mov	r0, #1	; 0x1
        1fa8a0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ClassInfo__22TStoreCompanderWrapperSFv
 * Address: 0038786c
 */
void TStoreCompanderWrapper::ClassInfo() {
    /*
        38786c:	e24f0044 	sub	r0, pc, #68	; 0x44
        387870:	e1a0f00e 	mov	pc, lr
        387874:	e3a00000 	mov	r0, #0	; 0x0
        387878:	e1a0f00e 	mov	pc, lr
        38787c:	5453746f 	ldrplb	r7, [r3], -#1135
        387880:	7265436f 	rsbvc	r4, r5, #-1140850687	; 0xbc000001
        387884:	6d70616e 	ldfvse	f6, [r0, -#440]!
        387888:	64657257 	strvsbt	r7, [r5], -#599
        38788c:	72617070 	rsbvc	r7, r1, #112	; 0x70
        387890:	65720054 	ldrvsb	r0, [r2, -#84]!
        387894:	53746f72 	cmnpl	r4, #456	; 0x1c8
        387898:	65436f6d 	strvsb	r6, [r3, -#3949]
        38789c:	70616e64 	rsbvc	r6, r1, r4, ror #28
        3878a0:	65720000 	ldrvsb	r0, [r2]!
        3878a4:	00000000 	andeq	r0, r0, r0
        3878a8:	eaffffef 	b	38786c <ClassInfo__22TStoreCompanderWrapperSFv>
        3878ac:	ea5e27fa 	b	1b1189c <TStoreCompanderWrapper::$New(void)>
        3878b0:	ea5e136f 	b	1b0c674 <TStoreCompanderWrapper::$Delete(void)>
        3878b4:	ea5e23d7 	b	1b10818 <TStoreCompanderWrapper::$Init(TStore *, unsigned long, unsigned long, unsigned char, unsigned char)>
        3878b8:	ea5e1788 	b	1b0d6e0 <TStoreCompanderWrapper::$BlockSize(void)>
        3878bc:	ea5e2800 	b	1b118c4 <TStoreCompanderWrapper::$Read(unsigned long, char *, long, unsigned long)>
        3878c0:	ea5e2c1d 	b	1b1293c <TStoreCompanderWrapper::$Write(unsigned long, char *, long, unsigned long)>
        3878c4:	ea5e1fb0 	b	1b0f78c <TStoreCompanderWrapper::$DoTransactionAgainst(long, unsigned long)>
        3878c8:	ea5e23da 	b	1b10838 <TStoreCompanderWrapper::$IsReadOnly(void)>
        3878cc:	00000000 	andeq	r0, r0, r0
        3878d0:	00000048 	andeq	r0, r0, r8, asr #32
        3878d4:	0000005a 	andeq	r0, r0, sl, asr r0
        3878d8:	00000066 	andeq	r0, r0, r6, rrx
        3878dc:	00000064 	andeq	r0, r0, r4, rrx
        3878e0:	00000088 	andeq	r0, r0, r8, lsl #1
        3878e4:	ea5e2c09 	b	1b12910 <$Sizeof__21TSimpleStoreCompanderSFv>
        3878f0:	ea5e27e8 	b	1b11898 <TSimpleStoreCompander::$New(void)>
        3878f4:	ea5e1b9c 	b	1b0e76c <TSimpleStoreCompander::$Delete(void)>
        387904:	ea000001 	b	387910 <ClassInfo__21TSimpleStoreCompanderSFv+0x8>
    */
}

