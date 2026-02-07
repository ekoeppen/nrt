#include "include/TPrivatePackageIterator.h"

/**
 * Symbol: TPrivatePackageIterator::__ct(void)
 * Address: 001944dc
 */
TPrivatePackageIterator::TPrivatePackageIterator(void) {
    /*
        1944dc:	e1a0c00d 	mov	ip, sp
        1944e0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1944e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1944e8:	e3300000 	teq	r0, #0	; 0x0
        1944ec:	1a000003 	bne	194500 <TPrivatePackageIterator::__ct(void)+0x24>
        1944f0:	e3a00020 	mov	r0, #32	; 0x20
        1944f4:	eb68e88f 	bl	1bce738 <$__nw(unsigned int)>
        1944f8:	e3300000 	teq	r0, #0	; 0x0
        1944fc:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        194500:	e3a01000 	mov	r1, #0	; 0x0
        194504:	e5801004 	str	r1, [r0, #4]	; fField4
        194508:	e5801008 	str	r1, [r0, #8]	; fField8
        19450c:	e580100c 	str	r1, [r0, #12]	; fField12
        194510:	e5801018 	str	r1, [r0, #24]	; fField24
        194514:	e580101c 	str	r1, [r0, #28]	; fField28
        194518:	e5801010 	str	r1, [r0, #16]	; fField16
        19451c:	e5801014 	str	r1, [r0, #20]	; fField20
        194520:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TPrivatePackageIterator::PackageName(void)
 * Address: 00194524
 */
TPrivatePackageIterator::PackageName(void) {
    /*
        194524:	e5901018 	ldr	r1, [r0, #24]	; fField24
        194528:	e5900008 	ldr	r0, [r0, #8]	; fField8
        19452c:	e5900018 	ldr	r0, [r0, #24]	; fField24
        194530:	e0810820 	add	r0, r1, r0, lsr #16
        194534:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPrivatePackageIterator::GetPartDataOffset(unsigned long)
 * Address: 00194538
 */
TPrivatePackageIterator::GetPartDataOffset(unsigned long) {
    /*
        194538:	e5902008 	ldr	r2, [r0, #8]	; fField8
        19453c:	e5922030 	ldr	r2, [r2, #48]	; fField48
        194540:	e1520001 	cmp	r2, r1
        194544:	9a000002 	bls	194554 <TPrivatePackageIterator::GetPartDataOffset(unsigned long)+0x1c>
        194548:	e590200c 	ldr	r2, [r0, #12]	; fField12
        19454c:	e3320000 	teq	r2, #0	; 0x0
        194550:	1a000001 	bne	19455c <TPrivatePackageIterator::GetPartDataOffset(unsigned long)+0x24>
        194554:	e3a00000 	mov	r0, #0	; 0x0
        194558:	e1a0f00e 	mov	pc, lr
        19455c:	e7921281 	ldr	r1, [r2, r1, lsl #5]
        194560:	e590001c 	ldr	r0, [r0, #28]	; fField28
        194564:	e0800001 	add	r0, r0, r1
        194568:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPrivatePackageIterator::NumberOfParts(void)
 * Address: 0019456c
 */
TPrivatePackageIterator::NumberOfParts(void) {
    /*
        19456c:	e5900008 	ldr	r0, [r0, #8]	; fField8
        194570:	e3300000 	teq	r0, #0	; 0x0
        194574:	03a00000 	moveq	r0, #0	; 0x0
        194578:	15900030 	ldrne	r0, [r0, #48]	; fField48
        19457c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPrivatePackageIterator::PackageSize(void)
 * Address: 00194580
 */
TPrivatePackageIterator::PackageSize(void) {
    /*
        194580:	e5900008 	ldr	r0, [r0, #8]	; fField8
        194584:	e3300000 	teq	r0, #0	; 0x0
        194588:	03a00000 	moveq	r0, #0	; 0x0
        19458c:	1590001c 	ldrne	r0, [r0, #28]	; fField28
        194590:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPrivatePackageIterator::GetPartInfoDesc(unsigned long, PartInfo *const)
 * Address: 00194594
 */
TPrivatePackageIterator::GetPartInfoDesc(unsigned long, PartInfo *const) {
    /*
        194594:	e590300c 	ldr	r3, [r0, #12]	; fField12
        194598:	e0831281 	add	r1, r3, r1, lsl #5
        19459c:	e5913014 	ldr	r3, [r1, #20]	; fField20
        1945a0:	e2133010 	ands	r3, r3, #16	; 0x10
        1945a4:	13a03001 	movne	r3, #1	; 0x1
        1945a8:	e5c23020 	strb	r3, [r2, #32]
        1945ac:	e5913014 	ldr	r3, [r1, #20]	; fField20
        1945b0:	e2133020 	ands	r3, r3, #32	; 0x20
        1945b4:	13a03001 	movne	r3, #1	; 0x1
        1945b8:	e5c23021 	strb	r3, [r2, #33]
        1945bc:	e5913014 	ldr	r3, [r1, #20]	; fField20
        1945c0:	e2133040 	ands	r3, r3, #64	; 0x40
        1945c4:	13a03001 	movne	r3, #1	; 0x1
        1945c8:	e5c23022 	strb	r3, [r2, #34]
        1945cc:	e5913014 	ldr	r3, [r1, #20]	; fField20
        1945d0:	e2133080 	ands	r3, r3, #128	; 0x80
        1945d4:	13a03001 	movne	r3, #1	; 0x1
        1945d8:	e5c23023 	strb	r3, [r2, #35]
        1945dc:	e5913014 	ldr	r3, [r1, #20]	; fField20
        1945e0:	e2133c01 	ands	r3, r3, #256	; 0x100
        1945e4:	13a03001 	movne	r3, #1	; 0x1
        1945e8:	e5c23024 	strb	r3, [r2, #36]
        1945ec:	e5913014 	ldr	r3, [r1, #20]	; fField20
        1945f0:	e203300f 	and	r3, r3, #15	; 0xf
        1945f4:	e5823000 	str	r3, [r2]
        1945f8:	e591300c 	ldr	r3, [r1, #12]	; fField12
        1945fc:	e5823004 	str	r3, [r2, #4]	; fField4
        194600:	e5913004 	ldr	r3, [r1, #4]	; fField4
        194604:	e5823008 	str	r3, [r2, #8]	; fField8
        194608:	e5913008 	ldr	r3, [r1, #8]	; fField8
        19460c:	e582300c 	str	r3, [r2, #12]	; fField12
        194610:	e591301a 	ldr	r3, [r1, #26]
        194614:	e1a03823 	mov	r3, r3, lsr #16
        194618:	e5823010 	str	r3, [r2, #16]	; fField16
        19461c:	e590c018 	ldr	ip, [r0, #24]	; fField24
        194620:	e5913018 	ldr	r3, [r1, #24]	; fField24
        194624:	e08c3823 	add	r3, ip, r3, lsr #16
        194628:	e5823014 	str	r3, [r2, #20]	; fField20
        19462c:	e5900018 	ldr	r0, [r0, #24]	; fField24
        194630:	e591101c 	ldr	r1, [r1, #28]	; fField28
        194634:	e0800821 	add	r0, r0, r1, lsr #16
        194638:	e5a20018 	str	r0, [r2, #24]!	; fField24
        19463c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPrivatePackageIterator::GetPartInfo(unsigned long, PartInfo *const)
 * Address: 00194640
 */
TPrivatePackageIterator::GetPartInfo(unsigned long, PartInfo *const) {
    /*
        194640:	e1a0c00d 	mov	ip, sp
        194644:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        194648:	e24cb004 	sub	fp, ip, #4	; 0x4
        19464c:	e1a04000 	mov	r4, r0
        194650:	e1a05001 	mov	r5, r1
        194654:	e1a06002 	mov	r6, r2
        194658:	e5900008 	ldr	r0, [r0, #8]	; fField8
        19465c:	e5900030 	ldr	r0, [r0, #48]	; fField48
        194660:	e1500001 	cmp	r0, r1
        194664:	991ba870 	ldmlsdb	fp, {r4, r5, r6, fp, sp, pc}
        194668:	e1a02006 	mov	r2, r6
        19466c:	e1a01005 	mov	r1, r5
        194670:	e1a00004 	mov	r0, r4
        194674:	ebffffc6 	bl	194594 <TPrivatePackageIterator::GetPartInfoDesc(unsigned long, PartInfo *const)>
        194678:	e1a01005 	mov	r1, r5
        19467c:	e1a00004 	mov	r0, r4
        194680:	ebffffac 	bl	194538 <TPrivatePackageIterator::GetPartDataOffset(unsigned long)>
        194684:	e5b41004 	ldr	r1, [r4, #4]!	; fField4
        194688:	e0800001 	add	r0, r0, r1
        19468c:	e5a6001c 	str	r0, [r6, #28]!	; fField28
        194690:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TPrivatePackageIterator::__dt(void)
 * Address: 0019479c
 */
TPrivatePackageIterator::~TPrivatePackageIterator(void) {
    /*
        19479c:	e1a0c00d 	mov	ip, sp
        1947a0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1947a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1947a8:	e1a04000 	mov	r4, r0
        1947ac:	e1a05001 	mov	r5, r1
        1947b0:	eb000004 	bl	1947c8 <TPrivatePackageIterator::DisposeDirectory(void)>
        1947b4:	e3150001 	tst	r5, #1	; 0x1
        1947b8:	11a00004 	movne	r0, r4
        1947bc:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1947c0:	1a68e3c6 	bne	1bcd6e0 <$__dl(void *)>
        1947c4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TPrivatePackageIterator::DisposeDirectory(void)
 * Address: 001947c8
 */
TPrivatePackageIterator::DisposeDirectory(void) {
    /*
        1947c8:	e3a01000 	mov	r1, #0	; 0x0
        1947cc:	e5801008 	str	r1, [r0, #8]	; fField8
        1947d0:	e580100c 	str	r1, [r0, #12]	; fField12
        1947d4:	e5801018 	str	r1, [r0, #24]	; fField24
        1947d8:	e5801010 	str	r1, [r0, #16]	; fField16
        1947dc:	e5801014 	str	r1, [r0, #20]	; fField20
        1947e0:	e5a0101c 	str	r1, [r0, #28]!	; fField28
        1947e4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPrivatePackageIterator::CheckHeader(void)
 * Address: 001947e8
 */
TPrivatePackageIterator::CheckHeader(void) {
    /*
        1947e8:	e92d4030 	stmdb	sp!, {r4, r5, lr}
        1947ec:	e3a02000 	mov	r2, #0	; 0x0
        1947f0:	e3a01000 	mov	r1, #0	; 0x0
        1947f4:	e59fe080 	ldr	lr, [pc, #80]	; 19487c <TPrivatePackageIterator::CheckHeader(void)+0x94>
        1947f8:	e3e0ce8a 	mvn	ip, #2208	; 0x8a0
        1947fc:	e24cca02 	sub	ip, ip, #8192	; 0x2000
        194800:	e5903008 	ldr	r3, [r0, #8]	; fField8
        194804:	e7de4001 	ldrb	r4, [lr, r1]
        194808:	e1a04c04 	mov	r4, r4, lsl #24
        19480c:	e1a04c44 	mov	r4, r4, asr #24
        194810:	e7d35001 	ldrb	r5, [r3, r1]
        194814:	e1a05c05 	mov	r5, r5, lsl #24
        194818:	e1340c45 	teq	r4, r5, asr #24
        19481c:	11a0200c 	movne	r2, ip
        194820:	1a000002 	bne	194830 <TPrivatePackageIterator::CheckHeader(void)+0x48>
        194824:	e2811001 	add	r1, r1, #1	; 0x1
        194828:	e3510007 	cmp	r1, #7	; 0x7
        19482c:	3afffff4 	bcc	194804 <TPrivatePackageIterator::CheckHeader(void)+0x1c>
        194830:	e3310007 	teq	r1, #7	; 0x7
        194834:	1a00000e 	bne	194874 <TPrivatePackageIterator::CheckHeader(void)+0x8c>
        194838:	e3a03000 	mov	r3, #0	; 0x0
        19483c:	e59fe03c 	ldr	lr, [pc, #3c]	; 194880 <TPrivatePackageIterator::CheckHeader(void)+0x98>
        194840:	e5900008 	ldr	r0, [r0, #8]	; fField8
        194844:	e7d00001 	ldrb	r0, [r0, r1]
        194848:	e1a00c00 	mov	r0, r0, lsl #24
        19484c:	e1a00c40 	mov	r0, r0, asr #24
        194850:	e7de1003 	ldrb	r1, [lr, r3]
        194854:	e1a01c01 	mov	r1, r1, lsl #24
        194858:	e1300c41 	teq	r0, r1, asr #24
        19485c:	0a000002 	beq	19486c <TPrivatePackageIterator::CheckHeader(void)+0x84>
        194860:	e2833001 	add	r3, r3, #1	; 0x1
        194864:	e3530002 	cmp	r3, #2	; 0x2
        194868:	3afffff8 	bcc	194850 <TPrivatePackageIterator::CheckHeader(void)+0x68>
        19486c:	e3330002 	teq	r3, #2	; 0x2
        194870:	01a0200c 	moveq	r2, ip
        194874:	e1a00002 	mov	r0, r2
        194878:	e8bd8030 	ldmia	sp!, {r4, r5, pc}
        19487c:	003773d4 	ldreqsb	r7, [r7], -r4
        194880:	003773dc 	ldreqsb	r7, [r7], -ip
    */
}

/**
 * Symbol: TPrivatePackageIterator::ComputeSizeOfEntriesAndData(unsigned long &, unsigned long &)
 * Address: 00194884
 */
TPrivatePackageIterator::ComputeSizeOfEntriesAndData(unsigned long &, unsigned long &) {
    /*
        194884:	e5902004 	ldr	r2, [r0, #4]	; fField4
        194888:	e2823034 	add	r3, r2, #52	; 0x34
        19488c:	e580300c 	str	r3, [r0, #12]	; fField12
        194890:	e5911000 	ldr	r1, [r1]
        194894:	e0821001 	add	r1, r2, r1
        194898:	e2811034 	add	r1, r1, #52	; 0x34
        19489c:	e5a01018 	str	r1, [r0, #24]!	; fField24
        1948a0:	e3a00000 	mov	r0, #0	; 0x0
        1948a4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPrivatePackageIterator::GetRelocationChunkInfo(void)
 * Address: 001948a8
 */
TPrivatePackageIterator::GetRelocationChunkInfo(void) {
    /*
        1948a8:	e5901010 	ldr	r1, [r0, #16]	; fField16
        1948ac:	e3310000 	teq	r1, #0	; 0x0
        1948b0:	12811004 	addne	r1, r1, #4	; 0x4
        1948b4:	15a01014 	strne	r1, [r0, #20]!	; fField20
        1948b8:	e3a00000 	mov	r0, #0	; 0x0
        1948bc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPrivatePackageIterator::SetupRelocationData(unsigned long, unsigned long *)
 * Address: 001948c0
 */
TPrivatePackageIterator::SetupRelocationData(unsigned long, unsigned long *) {
    /*
        1948c0:	e5903008 	ldr	r3, [r0, #8]	; fField8
        1948c4:	e593300c 	ldr	r3, [r3, #12]	; fField12
        1948c8:	e3130301 	tst	r3, #67108864	; 0x4000000
        1948cc:	e3a03000 	mov	r3, #0	; 0x0
        1948d0:	0a00000c 	beq	194908 <TPrivatePackageIterator::SetupRelocationData(unsigned long, unsigned long *)+0x48>
        1948d4:	e590c004 	ldr	ip, [r0, #4]	; fField4
        1948d8:	e08c1001 	add	r1, ip, r1
        1948dc:	e2811034 	add	r1, r1, #52	; 0x34
        1948e0:	e5a01010 	str	r1, [r0, #16]!	; fField16
        1948e4:	e5910000 	ldr	r0, [r1]
        1948e8:	e3300000 	teq	r0, #0	; 0x0
        1948ec:	05b10004 	ldreq	r0, [r1, #4]!	; fField4
        1948f0:	05820000 	streq	r0, [r2]
        1948f4:	0a000006 	beq	194914 <TPrivatePackageIterator::SetupRelocationData(unsigned long, unsigned long *)+0x54>
        1948f8:	e3e00e8a 	mvn	r0, #2208	; 0x8a0
        1948fc:	e2400a02 	sub	r0, r0, #8192	; 0x2000
        194900:	e5823000 	str	r3, [r2]
        194904:	e1a0f00e 	mov	pc, lr
        194908:	e5803010 	str	r3, [r0, #16]	; fField16
        19490c:	e5a03014 	str	r3, [r0, #20]!	; fField20
        194910:	e5823000 	str	r3, [r2]
        194914:	e1a00003 	mov	r0, r3
        194918:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPrivatePackageIterator::Init(void *)
 * Address: 0019491c
 */
TPrivatePackageIterator::Init(void *) {
    /*
        19491c:	e1a0c00d 	mov	ip, sp
        194920:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        194924:	e24cb004 	sub	fp, ip, #4	; 0x4
        194928:	e1a04000 	mov	r4, r0
        19492c:	e5801004 	str	r1, [r0, #4]	; fField4
        194930:	e5801008 	str	r1, [r0, #8]	; fField8
        194934:	ebffffab 	bl	1947e8 <TPrivatePackageIterator::CheckHeader(void)>
        194938:	e1b05000 	movs	r5, r0
        19493c:	1a000021 	bne	1949c8 <TPrivatePackageIterator::Init(void *)+0xac>
        194940:	e24dd008 	sub	sp, sp, #8	; 0x8
        194944:	e5940008 	ldr	r0, [r4, #8]	; fField8
        194948:	e5900030 	ldr	r0, [r0, #48]	; fField48
        19494c:	e1a00280 	mov	r0, r0, lsl #5
        194950:	e58d0004 	str	r0, [sp, #4]	; fField4
        194954:	e5941008 	ldr	r1, [r4, #8]	; fField8
        194958:	e591102c 	ldr	r1, [r1, #44]
        19495c:	e2800034 	add	r0, r0, #52	; 0x34
        194960:	e0410000 	sub	r0, r1, r0
        194964:	e58d0000 	str	r0, [sp]
        194968:	e1a0200d 	mov	r2, sp
        19496c:	e28d1004 	add	r1, sp, #4	; 0x4
        194970:	e1a00004 	mov	r0, r4
        194974:	ebffffc2 	bl	194884 <TPrivatePackageIterator::ComputeSizeOfEntriesAndData(unsigned long &, unsigned long &)>
        194978:	e1b05000 	movs	r5, r0
        19497c:	1a000010 	bne	1949c4 <TPrivatePackageIterator::Init(void *)+0xa8>
        194980:	e24dd004 	sub	sp, sp, #4	; 0x4
        194984:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        194988:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        19498c:	e0801001 	add	r1, r0, r1
        194990:	e1a0200d 	mov	r2, sp
        194994:	e1a00004 	mov	r0, r4
        194998:	ebffffc8 	bl	1948c0 <TPrivatePackageIterator::SetupRelocationData(unsigned long, unsigned long *)>
        19499c:	e1b05000 	movs	r5, r0
        1949a0:	1a000006 	bne	1949c0 <TPrivatePackageIterator::Init(void *)+0xa4>
        1949a4:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        1949a8:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        1949ac:	e0800001 	add	r0, r0, r1
        1949b0:	e59d1000 	ldr	r1, [sp]
        1949b4:	e0800001 	add	r0, r0, r1
        1949b8:	e2800034 	add	r0, r0, #52	; 0x34
        1949bc:	e584001c 	str	r0, [r4, #28]	; fField28
        1949c0:	e28dd004 	add	sp, sp, #4	; 0x4
        1949c4:	e28dd008 	add	sp, sp, #8	; 0x8
        1949c8:	e3350000 	teq	r5, #0	; 0x0
        1949cc:	1a000002 	bne	1949dc <TPrivatePackageIterator::Init(void *)+0xc0>
        1949d0:	e1a00004 	mov	r0, r4
        1949d4:	eb000005 	bl	1949f0 <TPrivatePackageIterator::VerifyPackage(void)>
        1949d8:	e1a05000 	mov	r5, r0
        1949dc:	e3350000 	teq	r5, #0	; 0x0
        1949e0:	11a00004 	movne	r0, r4
        1949e4:	1bffff77 	blne	1947c8 <TPrivatePackageIterator::DisposeDirectory(void)>
        1949e8:	e1a00005 	mov	r0, r5
        1949ec:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TPrivatePackageIterator::VerifyPackage(void)
 * Address: 001949f0
 */
TPrivatePackageIterator::VerifyPackage(void) {
    /*
        1949f0:	e1a0c00d 	mov	ip, sp
        1949f4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1949f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1949fc:	e1a04000 	mov	r4, r0
        194a00:	e3a05000 	mov	r5, #0	; 0x0
        194a04:	ebfffec6 	bl	194524 <TPrivatePackageIterator::PackageName(void)>
        194a08:	ebfffea9 	bl	1944b4 <UstrlenPrivate(unsigned short const *)>
        194a0c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        194a10:	e5902018 	ldr	r2, [r0, #24]	; fField24
        194a14:	e3e06e8a 	mvn	r6, #2208	; 0x8a0
        194a18:	e2466a02 	sub	r6, r6, #8192	; 0x2000
        194a1c:	e590102c 	ldr	r1, [r0, #44]
        194a20:	e1510822 	cmp	r1, r2, lsr #16
        194a24:	3a00002d 	bcc	194ae0 <TPrivatePackageIterator::VerifyPackage(void)+0xf0>
        194a28:	e5902016 	ldr	r2, [r0, #22]
        194a2c:	e1b02822 	movs	r2, r2, lsr #16
        194a30:	0a000002 	beq	194a40 <TPrivatePackageIterator::VerifyPackage(void)+0x50>
        194a34:	e5902014 	ldr	r2, [r0, #20]	; fField20
        194a38:	e1510822 	cmp	r1, r2, lsr #16
        194a3c:	3a000027 	bcc	194ae0 <TPrivatePackageIterator::VerifyPackage(void)+0xf0>
        194a40:	e590000c 	ldr	r0, [r0, #12]	; fField12
        194a44:	e2100a0f 	ands	r0, r0, #61440	; 0xf000
        194a48:	13300a01 	teqne	r0, #4096	; 0x1000
        194a4c:	1a000023 	bne	194ae0 <TPrivatePackageIterator::VerifyPackage(void)+0xf0>
        194a50:	e3a07000 	mov	r7, #0	; 0x0
        194a54:	e1a00004 	mov	r0, r4
        194a58:	ebfffec3 	bl	19456c <TPrivatePackageIterator::NumberOfParts(void)>
        194a5c:	e3500000 	cmp	r0, #0	; 0x0
        194a60:	9a00001f 	bls	194ae4 <TPrivatePackageIterator::VerifyPackage(void)+0xf4>
        194a64:	e594100c 	ldr	r1, [r4, #12]	; fField12
        194a68:	e0810287 	add	r0, r1, r7, lsl #5
        194a6c:	e5902014 	ldr	r2, [r0, #20]	; fField20
        194a70:	e3120040 	tst	r2, #64	; 0x40
        194a74:	0a000004 	beq	194a8c <TPrivatePackageIterator::VerifyPackage(void)+0x9c>
        194a78:	e590201c 	ldr	r2, [r0, #28]	; fField28
        194a7c:	e5943008 	ldr	r3, [r4, #8]	; fField8
        194a80:	e593302c 	ldr	r3, [r3, #44]
        194a84:	e1530822 	cmp	r3, r2, lsr #16
        194a88:	3a000014 	bcc	194ae0 <TPrivatePackageIterator::VerifyPackage(void)+0xf0>
        194a8c:	e590201a 	ldr	r2, [r0, #26]
        194a90:	e1b02822 	movs	r2, r2, lsr #16
        194a94:	0a000004 	beq	194aac <TPrivatePackageIterator::VerifyPackage(void)+0xbc>
        194a98:	e5900018 	ldr	r0, [r0, #24]	; fField24
        194a9c:	e5942008 	ldr	r2, [r4, #8]	; fField8
        194aa0:	e592202c 	ldr	r2, [r2, #44]
        194aa4:	e1520820 	cmp	r2, r0, lsr #16
        194aa8:	3a00000c 	bcc	194ae0 <TPrivatePackageIterator::VerifyPackage(void)+0xf0>
        194aac:	e7912287 	ldr	r2, [r1, r7, lsl #5]
        194ab0:	e5940008 	ldr	r0, [r4, #8]	; fField8
        194ab4:	e590101c 	ldr	r1, [r0, #28]	; fField28
        194ab8:	e590002c 	ldr	r0, [r0, #44]
        194abc:	e0410000 	sub	r0, r1, r0
        194ac0:	e1520000 	cmp	r2, r0
        194ac4:	8a000005 	bhi	194ae0 <TPrivatePackageIterator::VerifyPackage(void)+0xf0>
        194ac8:	e2877001 	add	r7, r7, #1	; 0x1
        194acc:	e1a00004 	mov	r0, r4
        194ad0:	ebfffea5 	bl	19456c <TPrivatePackageIterator::NumberOfParts(void)>
        194ad4:	e1500007 	cmp	r0, r7
        194ad8:	8affffe1 	bhi	194a64 <TPrivatePackageIterator::VerifyPackage(void)+0x74>
        194adc:	ea000000 	b	194ae4 <TPrivatePackageIterator::VerifyPackage(void)+0xf4>
        194ae0:	e1a05006 	mov	r5, r6
        194ae4:	e1a00005 	mov	r0, r5
        194ae8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

