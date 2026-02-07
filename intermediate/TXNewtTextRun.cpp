#include "include/TXNewtTextRun.h"

/**
 * Symbol: TXNewtTextRun::__ct(void)
 * Address: 0023f648
 */
TXNewtTextRun::TXNewtTextRun(void) {
    /*
        23f648:	e1a0c00d 	mov	ip, sp
        23f64c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        23f650:	e24cb004 	sub	fp, ip, #4	; 0x4
        23f654:	e1b04000 	movs	r4, r0
        23f658:	1a000005 	bne	23f674 <TXNewtTextRun::__ct(void)+0x2c>
        23f65c:	e3a00020 	mov	r0, #32	; 0x20
        23f660:	eb663c34 	bl	1bce738 <$__nw(unsigned int)>
        23f664:	e1b04000 	movs	r4, r0
        23f668:	1a000001 	bne	23f674 <TXNewtTextRun::__ct(void)+0x2c>
        23f66c:	e1a00004 	mov	r0, r4
        23f670:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        23f674:	e1a00004 	mov	r0, r4
        23f678:	eb656989 	bl	1b99ca4 <TXRun::$__ct(void)>
        23f67c:	e3a00002 	mov	r0, #2	; 0x2
        23f680:	eb660ab1 	bl	1bc214c <$AllocateRefHandle(long)>
        23f684:	e3a01000 	mov	r1, #0	; 0x0
        23f688:	e5840008 	str	r0, [r4, #8]	; fField8
        23f68c:	e5a01004 	str	r1, [r0, #4]!	; fField4
        23f690:	e59f0054 	ldr	r0, [pc, #54]	; 23f6ec <TXNewtTextRun::__ct(void)+0xa4>
        23f694:	e5840000 	str	r0, [r4]
        23f698:	e24dd004 	sub	sp, sp, #4	; 0x4
        23f69c:	e59f504c 	ldr	r5, [pc, #4c]	; 23f6f0 <TXNewtTextRun::__ct(void)+0xa8>	; fField4
        23f6a0:	e5950000 	ldr	r0, [r5]
        23f6a4:	e3300000 	teq	r0, #0	; 0x0
        23f6a8:	1a000002 	bne	23f6b8 <TXNewtTextRun::__ct(void)+0x70>
        23f6ac:	e59f0040 	ldr	r0, [pc, #40]	; 23f6f4 <TXNewtTextRun::__ct(void)+0xac>
        23f6b0:	eb61590c 	bl	1a95ae8 <$GetLocaleSlot(RefVar const &)>
        23f6b4:	e5850000 	str	r0, [r5]
        23f6b8:	e59f0038 	ldr	r0, [pc, #38]	; 23f6f8 <TXNewtTextRun::__ct(void)+0xb0>
        23f6bc:	eb615d10 	bl	1a96b04 <$GetPreference(RefVar const &)>
        23f6c0:	eb660aa1 	bl	1bc214c <$AllocateRefHandle(long)>
        23f6c4:	e58d0000 	str	r0, [sp]
        23f6c8:	e1a0100d 	mov	r1, sp
        23f6cc:	e1a00004 	mov	r0, r4
        23f6d0:	eb6554cf 	bl	1b94a14 <TXNewtTextRun::$SetNSObject(RefVar const &)>
        23f6d4:	e59d0000 	ldr	r0, [sp]
        23f6d8:	eb660eb7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23f6dc:	e3e00000 	mvn	r0, #0	; 0x0
        23f6e0:	e5840014 	str	r0, [r4, #20]	; fField20
        23f6e4:	e28dd004 	add	sp, sp, #4	; 0x4
        23f6e8:	eaffffdf 	b	23f66c <TXNewtTextRun::__ct(void)+0x24>
        23f6ec:	0001d2bc 	streqh	sp, [r1], -ip
        23f6f0:	0c104ddc 	ldceq	13, cr4, [r0], -#880
        23f6f4:	00683588 	rsbeq	r3, r8, r8, lsl #11
        23f6f8:	00684e48 	rsbeq	r4, r8, r8, asr #28
    */
}

/**
 * Symbol: TXNewtTextRun::CreateNew( const(void))
 * Address: 0023f6fc
 */
TXNewtTextRun::CreateNew( const(void)) {
    /*
        23f6fc:	e3a00000 	mov	r0, #0	; 0x0
        23f700:	ea6550ab 	b	1b939b4 <TXNewtTextRun::$__ct(void)>
    */
}

/**
 * Symbol: TXNewtTextRun::UpdateAttribute(unsigned long, void const *, long)
 * Address: 0023f704
 */
TXNewtTextRun::UpdateAttribute(unsigned long, void const *, long) {
    /*
        23f704:	e1a0c00d 	mov	ip, sp
        23f708:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        23f70c:	e24cb004 	sub	fp, ip, #4	; 0x4
        23f710:	e1a04000 	mov	r4, r0
        23f714:	e1a07001 	mov	r7, r1
        23f718:	e1a06002 	mov	r6, r2
        23f71c:	e1a05003 	mov	r5, r3
        23f720:	e3e00000 	mvn	r0, #0	; 0x0
        23f724:	e5840014 	str	r0, [r4, #20]	; fField20
        23f728:	e3a00001 	mov	r0, #1	; 0x1
        23f72c:	e59fc034 	ldr	ip, [pc, #34]	; 23f768 <TXNewtTextRun::UpdateAttribute(unsigned long, void const *, long)+0x64>
        23f730:	e131000c 	teq	r1, ip
        23f734:	1a000017 	bne	23f798 <TXNewtTextRun::UpdateAttribute(unsigned long, void const *, long)+0x94>
        23f738:	e24dd004 	sub	sp, sp, #4	; 0x4
        23f73c:	e5941010 	ldr	r1, [r4, #16]	; fField16
        23f740:	e58d1000 	str	r1, [sp]
        23f744:	e3150004 	tst	r5, #4	; 0x4
        23f748:	e5961000 	ldr	r1, [r6]
        23f74c:	0a000006 	beq	23f76c <TXNewtTextRun::UpdateAttribute(unsigned long, void const *, long)+0x68>
        23f750:	e1a0200d 	mov	r2, sp
        23f754:	e1a00004 	mov	r0, r4
        23f758:	e5943000 	ldr	r3, [r4]
        23f75c:	e1a0e00f 	mov	lr, pc
        23f760:	e283f084 	add	pc, r3, #132	; 0x84
        23f764:	ea000005 	b	23f780 <TXNewtTextRun::UpdateAttribute(unsigned long, void const *, long)+0x7c>
        23f768:	66616365 	strvsbt	r6, [r1], -r5, ror #6
        23f76c:	e3150008 	tst	r5, #8	; 0x8
        23f770:	0a000005 	beq	23f78c <TXNewtTextRun::UpdateAttribute(unsigned long, void const *, long)+0x88>
        23f774:	e1a0200d 	mov	r2, sp
        23f778:	e1a00004 	mov	r0, r4
        23f77c:	eb655095 	bl	1b939d8 <TXNewtTextRun::$RemoveFace( const(long, long *))>
        23f780:	e3a00000 	mov	r0, #0	; 0x0
        23f784:	e59d1000 	ldr	r1, [sp]
        23f788:	e5841010 	str	r1, [r4, #16]	; fField16
        23f78c:	e28dd004 	add	sp, sp, #4	; 0x4
        23f790:	e3300000 	teq	r0, #0	; 0x0
        23f794:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        23f798:	e1a03005 	mov	r3, r5
        23f79c:	e1a02006 	mov	r2, r6
        23f7a0:	e1a01007 	mov	r1, r7
        23f7a4:	e1a00004 	mov	r0, r4
        23f7a8:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        23f7ac:	ea651aea 	b	1b8635c <TXAttrObject::$UpdateAttribute(unsigned long, void const *, long)>
    */
}

/**
 * Symbol: TXNewtTextRun::GetCommonAttrValue( const(unsigned long, void *))
 * Address: 0023f7b0
 */
TXNewtTextRun::GetCommonAttrValue( const(unsigned long, void *)) {
    /*
        23f7b0:	e1a0c00d 	mov	ip, sp
        23f7b4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        23f7b8:	e24cb004 	sub	fp, ip, #4	; 0x4
        23f7bc:	e59fc038 	ldr	ip, [pc, #38]	; 23f7fc <TXNewtTextRun::GetCommonAttrValue( const(unsigned long, void *))+0x4c>
        23f7c0:	e131000c 	teq	r1, ip
        23f7c4:	0a000017 	beq	23f828 <TXNewtTextRun::GetCommonAttrValue( const(unsigned long, void *))+0x78>
        23f7c8:	e59fc030 	ldr	ip, [pc, #30]	; 23f800 <TXNewtTextRun::GetCommonAttrValue( const(unsigned long, void *))+0x50>
        23f7cc:	e131000c 	teq	r1, ip
        23f7d0:	0a00000c 	beq	23f808 <TXNewtTextRun::GetCommonAttrValue( const(unsigned long, void *))+0x58>
        23f7d4:	e59fc028 	ldr	ip, [pc, #28]	; 23f804 <TXNewtTextRun::GetCommonAttrValue( const(unsigned long, void *))+0x54>	; fField28
        23f7d8:	e131000c 	teq	r1, ip
        23f7dc:	191b6800 	ldmnedb	fp, {fp, sp, lr}
        23f7e0:	1a651adf 	bne	1b86364 <TXAttrObject::$GetCommonAttrValue( const(unsigned long, void *))>
        23f7e4:	e590000c 	ldr	r0, [r0, #12]	; fField12
        23f7e8:	e5921000 	ldr	r1, [r2]
        23f7ec:	e1300001 	teq	r0, r1
        23f7f0:	13a00000 	movne	r0, #0	; 0x0
        23f7f4:	03a00001 	moveq	r0, #1	; 0x1
        23f7f8:	ea000008 	b	23f820 <TXNewtTextRun::GetCommonAttrValue( const(unsigned long, void *))+0x70>
        23f7fc:	66616365 	strvsbt	r6, [r1], -r5, ror #6
        23f800:	666f6e74 	undefined
        23f804:	73697a65 	cmnvc	r9, #413696	; 0x65000
        23f808:	e5921000 	ldr	r1, [r2]
        23f80c:	e5911004 	ldr	r1, [r1, #4]	; fField4
        23f810:	e5911000 	ldr	r1, [r1]
        23f814:	e5900008 	ldr	r0, [r0, #8]	; fField8
        23f818:	e5900000 	ldr	r0, [r0]
        23f81c:	eb661283 	bl	1bc4230 <$EQRef__FlT1>
        23f820:	e20000ff 	and	r0, r0, #255	; 0xff
        23f824:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        23f828:	e5921000 	ldr	r1, [r2]
        23f82c:	e5b03010 	ldr	r3, [r0, #16]!	; fField16
        23f830:	e3a00001 	mov	r0, #1	; 0x1
        23f834:	e3330000 	teq	r3, #0	; 0x0
        23f838:	03310000 	teqeq	r1, #0	; 0x0
        23f83c:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        23f840:	e0131001 	ands	r1, r3, r1
        23f844:	03a00000 	moveq	r0, #0	; 0x0
        23f848:	15821000 	strne	r1, [r2]
        23f84c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TXNewtTextRun::IsEqual( const(TXAttrObject const *))
 * Address: 0023f850
 */
TXNewtTextRun::IsEqual( const(TXAttrObject const *)) {
    /*
        23f850:	e1a0c00d 	mov	ip, sp
        23f854:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        23f858:	e24cb004 	sub	fp, ip, #4	; 0x4
        23f85c:	e1a04000 	mov	r4, r0
        23f860:	e1a05001 	mov	r5, r1
        23f864:	eb651ac1 	bl	1b86370 <TXAttrObject::$IsEqual( const(TXAttrObject const *))>
        23f868:	e3300000 	teq	r0, #0	; 0x0
        23f86c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        23f870:	e1350004 	teq	r5, r4
        23f874:	03a00001 	moveq	r0, #1	; 0x1
        23f878:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        23f87c:	e5951008 	ldr	r1, [r5, #8]	; fField8
        23f880:	e5911000 	ldr	r1, [r1]
        23f884:	e5940008 	ldr	r0, [r4, #8]	; fField8
        23f888:	e5900000 	ldr	r0, [r0]
        23f88c:	eb661267 	bl	1bc4230 <$EQRef__FlT1>
        23f890:	e31000ff 	tst	r0, #255	; 0xff
        23f894:	0a000007 	beq	23f8b8 <TXNewtTextRun::IsEqual( const(TXAttrObject const *))+0x68>
        23f898:	e594000c 	ldr	r0, [r4, #12]	; fField12
        23f89c:	e595100c 	ldr	r1, [r5, #12]	; fField12
        23f8a0:	e1300001 	teq	r0, r1
        23f8a4:	05b40010 	ldreq	r0, [r4, #16]!	; fField16
        23f8a8:	05b51010 	ldreq	r1, [r5, #16]!	; fField16
        23f8ac:	01300001 	teqeq	r0, r1
        23f8b0:	03a00001 	moveq	r0, #1	; 0x1
        23f8b4:	0a000000 	beq	23f8bc <TXNewtTextRun::IsEqual( const(TXAttrObject const *))+0x6c>
        23f8b8:	e3a00000 	mov	r0, #0	; 0x0
        23f8bc:	e20000ff 	and	r0, r0, #255	; 0xff
        23f8c0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXNewtTextRun::GetAttributeFlags( const(unsigned long))
 * Address: 0023f8c4
 */
TXNewtTextRun::GetAttributeFlags( const(unsigned long)) {
    /*
        23f8c4:	e1a0c00d 	mov	ip, sp
        23f8c8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        23f8cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        23f8d0:	e3a04000 	mov	r4, #0	; 0x0
        23f8d4:	e59fc020 	ldr	ip, [pc, #20]	; 23f8fc <TXNewtTextRun::GetAttributeFlags( const(unsigned long))+0x38>	; fField20
        23f8d8:	e131000c 	teq	r1, ip
        23f8dc:	159fc01c 	ldrne	ip, [pc, #1c]	; 23f900 <TXNewtTextRun::GetAttributeFlags( const(unsigned long))+0x3c>
        23f8e0:	1131000c 	teqne	r1, ip
        23f8e4:	159fc018 	ldrne	ip, [pc, #18]	; 23f904 <TXNewtTextRun::GetAttributeFlags( const(unsigned long))+0x40>
        23f8e8:	1131000c 	teqne	r1, ip
        23f8ec:	03a04003 	moveq	r4, #3	; 0x3
        23f8f0:	eb651a98 	bl	1b86358 <TXAttrObject::$GetAttributeFlags( const(unsigned long))>
        23f8f4:	e1800004 	orr	r0, r0, r4
        23f8f8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        23f8fc:	666f6e74 	undefined
        23f900:	73697a65 	cmnvc	r9, #413696	; 0x65000
        23f904:	66616365 	strvsbt	r6, [r1], -r5, ror #6
    */
}

/**
 * Symbol: TXNewtTextRun::GetNewtStyleRecord(StyleRecord *)
 * Address: 0023f908
 */
TXNewtTextRun::GetNewtStyleRecord(StyleRecord *) {
    /*
        23f908:	e1a0c00d 	mov	ip, sp
        23f90c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        23f910:	e24cb004 	sub	fp, ip, #4	; 0x4
        23f914:	e1a05000 	mov	r5, r0
        23f918:	e1a04001 	mov	r4, r1
        23f91c:	e24dd004 	sub	sp, sp, #4	; 0x4
        23f920:	e2800008 	add	r0, r0, #8	; 0x8
        23f924:	e1a07000 	mov	r7, r0
        23f928:	e5900000 	ldr	r0, [r0]
        23f92c:	e5900000 	ldr	r0, [r0]
        23f930:	e2001003 	and	r1, r0, #3	; 0x3
        23f934:	e3a08000 	mov	r8, #0	; 0x0
        23f938:	e3510000 	cmp	r1, #0	; 0x0
        23f93c:	1a00000b 	bne	23f970 <TXNewtTextRun::GetNewtStyleRecord(StyleRecord *)+0x68>
        23f940:	01a00140 	moveq	r0, r0, asr #2
        23f944:	0a000000 	beq	23f94c <TXNewtTextRun::GetNewtStyleRecord(StyleRecord *)+0x44>
        23f948:	eb6609f3 	bl	1bc211c <$_RINTError(long)>
        23f94c:	e1a01000 	mov	r1, r0
        23f950:	e59f0014 	ldr	r0, [pc, #14]	; 23f96c <TXNewtTextRun::GetNewtStyleRecord(StyleRecord *)+0x64>
        23f954:	e5900000 	ldr	r0, [r0]
        23f958:	e5900000 	ldr	r0, [r0]
        23f95c:	eb66123c 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        23f960:	e5941000 	ldr	r1, [r4]
        23f964:	e5810000 	str	r0, [r1]
        23f968:	ea000015 	b	23f9c4 <TXNewtTextRun::GetNewtStyleRecord(StyleRecord *)+0xbc>
        23f96c:	00680ee0 	rsbeq	r0, r8, r0, ror #29
        23f970:	e59f0074 	ldr	r0, [pc, #74]	; 23f9ec <TXNewtTextRun::GetNewtStyleRecord(StyleRecord *)+0xe4>
        23f974:	e5900000 	ldr	r0, [r0]
        23f978:	eb6609f3 	bl	1bc214c <$AllocateRefHandle(long)>
        23f97c:	e1a06000 	mov	r6, r0
        23f980:	e59f0068 	ldr	r0, [pc, #68]	; 23f9f0 <TXNewtTextRun::GetNewtStyleRecord(StyleRecord *)+0xe8>
        23f984:	e5900000 	ldr	r0, [r0]
        23f988:	e5901000 	ldr	r1, [r0]
        23f98c:	e5960000 	ldr	r0, [r6]
        23f990:	eb661232 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        23f994:	eb6609ec 	bl	1bc214c <$AllocateRefHandle(long)>
        23f998:	e58d0000 	str	r0, [sp]
        23f99c:	e1a0000d 	mov	r0, sp
        23f9a0:	e1a01007 	mov	r1, r7
        23f9a4:	e3a02000 	mov	r2, #0	; 0x0
        23f9a8:	eb66122e 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        23f9ac:	e5941000 	ldr	r1, [r4]
        23f9b0:	e5810000 	str	r0, [r1]
        23f9b4:	e59d0000 	ldr	r0, [sp]
        23f9b8:	eb660dff 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23f9bc:	e1a00006 	mov	r0, r6
        23f9c0:	eb660dfd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23f9c4:	e595000c 	ldr	r0, [r5, #12]	; fField12
        23f9c8:	e1a00800 	mov	r0, r0, lsl #16
        23f9cc:	e5840004 	str	r0, [r4, #4]	; fField4
        23f9d0:	e5b50010 	ldr	r0, [r5, #16]!	; fField16
        23f9d4:	e2844008 	add	r4, r4, #8	; 0x8
        23f9d8:	e8840101 	stmia	r4, {r0, r8}
        23f9dc:	e5848008 	str	r8, [r4, #8]	; fField8
        23f9e0:	e584800c 	str	r8, [r4, #12]	; fField12
        23f9e4:	e5848010 	str	r8, [r4, #16]	; fField16
        23f9e8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        23f9ec:	0c10180c 	ldceq	8, cr1, [r0], -#48
        23f9f0:	00682e48 	rsbeq	r2, r8, r8, asr #28
    */
}

/**
 * Symbol: TXNewtTextRun::GetHeightInfo(int *, int *, int *)
 * Address: 0023f9f4
 */
TXNewtTextRun::GetHeightInfo(int *, int *, int *) {
    /*
        23f9f4:	e1a0c00d 	mov	ip, sp
        23f9f8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        23f9fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        23fa00:	e1a04000 	mov	r4, r0
        23fa04:	e1a07001 	mov	r7, r1
        23fa08:	e1a06002 	mov	r6, r2
        23fa0c:	e1a05003 	mov	r5, r3
        23fa10:	e5900014 	ldr	r0, [r0, #20]	; fField20
        23fa14:	e3700001 	cmn	r0, #1	; 0x1
        23fa18:	1a00001a 	bne	23fa88 <TXNewtTextRun::GetHeightInfo(int *, int *, int *)+0x94>
        23fa1c:	e24dd030 	sub	sp, sp, #48	; 0x30
        23fa20:	e3a00002 	mov	r0, #2	; 0x2
        23fa24:	eb6609c8 	bl	1bc214c <$AllocateRefHandle(long)>
        23fa28:	e58d0000 	str	r0, [sp]
        23fa2c:	e3a00000 	mov	r0, #0	; 0x0
        23fa30:	e59d1000 	ldr	r1, [sp]
        23fa34:	e5a10004 	str	r0, [r1, #4]!	; fField4
        23fa38:	e58d001c 	str	r0, [sp, #28]	; fField28
        23fa3c:	e1a0100d 	mov	r1, sp
        23fa40:	e1a00004 	mov	r0, r4
        23fa44:	eb654fe8 	bl	1b939ec <TXNewtTextRun::$GetNewtStyleRecord(StyleRecord *)>
        23fa48:	e28d1020 	add	r1, sp, #32	; 0x20
        23fa4c:	e1a0000d 	mov	r0, sp
        23fa50:	eb643f63 	bl	1b4f7e4 <$GetStyleFontInfo(StyleRecord *, FontInfo *)>
        23fa54:	e59d0020 	ldr	r0, [sp, #32]
        23fa58:	e5840014 	str	r0, [r4, #20]	; fField20
        23fa5c:	e59d0024 	ldr	r0, [sp, #36]
        23fa60:	e5840018 	str	r0, [r4, #24]	; fField24
        23fa64:	e59d002c 	ldr	r0, [sp, #44]
        23fa68:	e584001c 	str	r0, [r4, #28]	; fField28
        23fa6c:	e59d001c 	ldr	r0, [sp, #28]	; fField28
        23fa70:	e3300000 	teq	r0, #0	; 0x0
        23fa74:	159d001c 	ldrne	r0, [sp, #28]	; fField28
        23fa78:	1b643717 	blne	1b4d6dc <$DisposePattern(PixelMap **)>
        23fa7c:	e59d0000 	ldr	r0, [sp]
        23fa80:	eb660dcd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23fa84:	e28dd030 	add	sp, sp, #48	; 0x30
        23fa88:	e5940014 	ldr	r0, [r4, #20]	; fField20
        23fa8c:	e5870000 	str	r0, [r7]
        23fa90:	e5940018 	ldr	r0, [r4, #24]	; fField24
        23fa94:	e5860000 	str	r0, [r6]
        23fa98:	e5b4001c 	ldr	r0, [r4, #28]!	; fField28
        23fa9c:	e5850000 	str	r0, [r5]
        23faa0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXNewtTextRun::Draw(TXLineRunDisplayInfo const &, long, Rect const &, int)
 * Address: 0023faa4
 */
TXNewtTextRun::Draw(TXLineRunDisplayInfo const &, long, Rect const &, int) {
    /*
        23faa4:	e1a0c00d 	mov	ip, sp
        23faa8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        23faac:	e24cb004 	sub	fp, ip, #4	; 0x4
        23fab0:	e1a07000 	mov	r7, r0
        23fab4:	e1a04001 	mov	r4, r1
        23fab8:	e1a06002 	mov	r6, r2
        23fabc:	e1a05003 	mov	r5, r3
        23fac0:	e59b9004 	ldr	r9, [fp, #4]	; fField4
        23fac4:	e24dd020 	sub	sp, sp, #32	; 0x20
        23fac8:	e3a00002 	mov	r0, #2	; 0x2
        23facc:	eb66099e 	bl	1bc214c <$AllocateRefHandle(long)>
        23fad0:	e3a08000 	mov	r8, #0	; 0x0
        23fad4:	e58d0000 	str	r0, [sp]
        23fad8:	e5a08004 	str	r8, [r0, #4]!	; fField4
        23fadc:	e58d801c 	str	r8, [sp, #28]	; fField28
        23fae0:	e1a0100d 	mov	r1, sp
        23fae4:	e1a00007 	mov	r0, r7
        23fae8:	eb654fbf 	bl	1b939ec <TXNewtTextRun::$GetNewtStyleRecord(StyleRecord *)>
        23faec:	e5950000 	ldr	r0, [r5]
        23faf0:	e1a00820 	mov	r0, r0, lsr #16
        23faf4:	e0800009 	add	r0, r0, r9
        23faf8:	e1a00800 	mov	r0, r0, lsl #16
        23fafc:	e24dd004 	sub	sp, sp, #4	; 0x4
        23fb00:	e28d1004 	add	r1, sp, #4	; 0x4
        23fb04:	e40d101c 	str	r1, [sp], -#28	; fField28
        23fb08:	e1a0200d 	mov	r2, sp
        23fb0c:	e58d8004 	str	r8, [sp, #4]	; fField4
        23fb10:	e3a01001 	mov	r1, #1	; 0x1
        23fb14:	e58d1010 	str	r1, [sp, #16]	; fField16
        23fb18:	e3a01009 	mov	r1, #9	; 0x9
        23fb1c:	e58d1014 	str	r1, [sp, #20]	; fField20
        23fb20:	e58d800c 	str	r8, [sp, #12]	; fField12
        23fb24:	e58d8018 	str	r8, [sp, #24]	; fField24
        23fb28:	e594100c 	ldr	r1, [r4, #12]	; fField12
        23fb2c:	e3310000 	teq	r1, #0	; 0x0
        23fb30:	058d8000 	streq	r8, [sp]
        23fb34:	05941008 	ldreq	r1, [r4, #8]	; fField8
        23fb38:	0a000004 	beq	23fb50 <TXNewtTextRun::Draw(TXLineRunDisplayInfo const &, long, Rect const &, int)+0xac>
        23fb3c:	e3a01801 	mov	r1, #65536	; 0x10000
        23fb40:	e58d1000 	str	r1, [sp]
        23fb44:	e594100c 	ldr	r1, [r4, #12]	; fField12
        23fb48:	e5943008 	ldr	r3, [r4, #8]	; fField8
        23fb4c:	e0831001 	add	r1, r3, r1
        23fb50:	e3a03000 	mov	r3, #0	; 0x0
        23fb54:	e58d1008 	str	r1, [sp, #8]	; fField8
        23fb58:	e92d000c 	stmdb	sp!, {r2, r3}
        23fb5c:	e24dd008 	sub	sp, sp, #8	; 0x8
        23fb60:	e58d0004 	str	r0, [sp, #4]	; fField4
        23fb64:	e58d6000 	str	r6, [sp]
        23fb68:	e28d202c 	add	r2, sp, #44	; 0x2c
        23fb6c:	e8940003 	ldmia	r4, {r0, r1}
        23fb70:	eb643ae7 	bl	1b4e714 <$DrawTextOnce(void *, long, StyleRecord **, short *, FPoint, TextOptions *, TextBoundsInfo *)>
        23fb74:	e28dd030 	add	sp, sp, #48	; 0x30
        23fb78:	e59d001c 	ldr	r0, [sp, #28]	; fField28
        23fb7c:	e3300000 	teq	r0, #0	; 0x0
        23fb80:	159d001c 	ldrne	r0, [sp, #28]	; fField28
        23fb84:	1b6436d4 	blne	1b4d6dc <$DisposePattern(PixelMap **)>
        23fb88:	e59d0000 	ldr	r0, [sp]
        23fb8c:	eb660d8a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23fb90:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TXNewtTextRun::MeasureWidth(TXLineRunDisplayInfo const &)
 * Address: 0023fb94
 */
TXNewtTextRun::MeasureWidth(TXLineRunDisplayInfo const &) {
    /*
        23fb94:	e1a0c00d 	mov	ip, sp
        23fb98:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        23fb9c:	e24cb004 	sub	fp, ip, #4	; 0x4
        23fba0:	e1a05000 	mov	r5, r0
        23fba4:	e1a04001 	mov	r4, r1
        23fba8:	e24dd020 	sub	sp, sp, #32	; 0x20
        23fbac:	e3a00002 	mov	r0, #2	; 0x2
        23fbb0:	eb660965 	bl	1bc214c <$AllocateRefHandle(long)>
        23fbb4:	e3a06000 	mov	r6, #0	; 0x0
        23fbb8:	e58d0000 	str	r0, [sp]
        23fbbc:	e5a06004 	str	r6, [r0, #4]!	; fField4
        23fbc0:	e58d601c 	str	r6, [sp, #28]	; fField28
        23fbc4:	e1a0100d 	mov	r1, sp
        23fbc8:	e1a00005 	mov	r0, r5
        23fbcc:	eb654f86 	bl	1b939ec <TXNewtTextRun::$GetNewtStyleRecord(StyleRecord *)>
        23fbd0:	e24dd004 	sub	sp, sp, #4	; 0x4
        23fbd4:	e28d0004 	add	r0, sp, #4	; 0x4
        23fbd8:	e3a0100a 	mov	r1, #10	; 0xa
        23fbdc:	e40d0024 	str	r0, [sp], -#36
        23fbe0:	e40d1014 	str	r1, [sp], -#20	; fField20
        23fbe4:	e28d301c 	add	r3, sp, #28	; 0x1c
        23fbe8:	e1a0200d 	mov	r2, sp
        23fbec:	e92d000c 	stmdb	sp!, {r2, r3}
        23fbf0:	e24dd008 	sub	sp, sp, #8	; 0x8
        23fbf4:	e58d6004 	str	r6, [sp, #4]	; fField4
        23fbf8:	e58d6000 	str	r6, [sp]
        23fbfc:	e28d2048 	add	r2, sp, #72	; 0x48
        23fc00:	e3a03000 	mov	r3, #0	; 0x0
        23fc04:	e8940003 	ldmia	r4, {r0, r1}
        23fc08:	eb64472b 	bl	1b518bc <$MeasureTextOnce(void *, long, StyleRecord **, short *, FPoint, TextOptions *, TextBoundsInfo *)>
        23fc0c:	e28dd010 	add	sp, sp, #16	; 0x10
        23fc10:	e59d0058 	ldr	r0, [sp, #88]
        23fc14:	e3300000 	teq	r0, #0	; 0x0
        23fc18:	e59d4030 	ldr	r4, [sp, #48]
        23fc1c:	159d0058 	ldrne	r0, [sp, #88]
        23fc20:	1b6436ad 	blne	1b4d6dc <$DisposePattern(PixelMap **)>
        23fc24:	e59d003c 	ldr	r0, [sp, #60]
        23fc28:	eb660d63 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23fc2c:	e1a00004 	mov	r0, r4
        23fc30:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXNewtTextRun::PixelToChar(TXLineRunDisplayInfo const &, long, TXOffsetRange *)
 * Address: 0023fc34
 */
TXNewtTextRun::PixelToChar(TXLineRunDisplayInfo const &, long, TXOffsetRange *) {
    /*
        23fc34:	e1a0c00d 	mov	ip, sp
        23fc38:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        23fc3c:	e24cb004 	sub	fp, ip, #4	; 0x4
        23fc40:	e1a07000 	mov	r7, r0
        23fc44:	e1a04001 	mov	r4, r1
        23fc48:	e1a06002 	mov	r6, r2
        23fc4c:	e1a05003 	mov	r5, r3
        23fc50:	e24dd020 	sub	sp, sp, #32	; 0x20
        23fc54:	e3a00002 	mov	r0, #2	; 0x2
        23fc58:	eb66093b 	bl	1bc214c <$AllocateRefHandle(long)>
        23fc5c:	e3a08000 	mov	r8, #0	; 0x0
        23fc60:	e58d0000 	str	r0, [sp]
        23fc64:	e5a08004 	str	r8, [r0, #4]!	; fField4
        23fc68:	e58d801c 	str	r8, [sp, #28]	; fField28
        23fc6c:	e1a0100d 	mov	r1, sp
        23fc70:	e1a00007 	mov	r0, r7
        23fc74:	eb654f5c 	bl	1b939ec <TXNewtTextRun::$GetNewtStyleRecord(StyleRecord *)>
        23fc78:	e24dd004 	sub	sp, sp, #4	; 0x4
        23fc7c:	e28d0004 	add	r0, sp, #4	; 0x4
        23fc80:	e40d001c 	str	r0, [sp], -#28	; fField28
        23fc84:	e1a00008 	mov	r0, r8
        23fc88:	e1a01008 	mov	r1, r8
        23fc8c:	e594200c 	ldr	r2, [r4, #12]	; fField12
        23fc90:	e3320000 	teq	r2, #0	; 0x0
        23fc94:	0a00000c 	beq	23fccc <TXNewtTextRun::PixelToChar(TXLineRunDisplayInfo const &, long, TXOffsetRange *)+0x98>
        23fc98:	e1a0300d 	mov	r3, sp
        23fc9c:	e3a02801 	mov	r2, #65536	; 0x10000
        23fca0:	e58d2000 	str	r2, [sp]
        23fca4:	e284c008 	add	ip, r4, #8	; 0x8
        23fca8:	e89c1004 	ldmia	ip, {r2, ip}
        23fcac:	e082200c 	add	r2, r2, ip
        23fcb0:	e58d2008 	str	r2, [sp, #8]	; fField8
        23fcb4:	e58d8004 	str	r8, [sp, #4]	; fField4
        23fcb8:	e58d800c 	str	r8, [sp, #12]	; fField12
        23fcbc:	e58d8010 	str	r8, [sp, #16]	; fField16
        23fcc0:	e58d8014 	str	r8, [sp, #20]	; fField20
        23fcc4:	e58d8018 	str	r8, [sp, #24]	; fField24
        23fcc8:	ea000000 	b	23fcd0 <TXNewtTextRun::PixelToChar(TXLineRunDisplayInfo const &, long, TXOffsetRange *)+0x9c>
        23fccc:	e3a03000 	mov	r3, #0	; 0x0
        23fcd0:	e92d0008 	stmdb	sp!, {r3}
        23fcd4:	e24dd008 	sub	sp, sp, #8	; 0x8
        23fcd8:	e88d0003 	stmia	sp, {r0, r1}
        23fcdc:	e28d2028 	add	r2, sp, #40	; 0x28
        23fce0:	e3a03000 	mov	r3, #0	; 0x0
        23fce4:	e8940003 	ldmia	r4, {r0, r1}
        23fce8:	eb6446f7 	bl	1b518cc <$NewText(void *, long, StyleRecord **, short *, FPoint, TextOptions *)>
        23fcec:	e28dd00c 	add	sp, sp, #12	; 0xc
        23fcf0:	e1a04000 	mov	r4, r0
        23fcf4:	e1a01006 	mov	r1, r6
        23fcf8:	e1a02008 	mov	r2, r8
        23fcfc:	eb644b0b 	bl	1b52930 <$PointToChar(long, FPoint)>
        23fd00:	e1a06000 	mov	r6, r0
        23fd04:	e1a00004 	mov	r0, r4
        23fd08:	eb643676 	bl	1b4d6e8 <$DisposeText(long)>
        23fd0c:	e3360000 	teq	r6, #0	; 0x0
        23fd10:	13a00001 	movne	r0, #1	; 0x1
        23fd14:	03a00000 	moveq	r0, #0	; 0x0
        23fd18:	e20000ff 	and	r0, r0, #255	; 0xff
        23fd1c:	e1a03000 	mov	r3, r0
        23fd20:	e92d0008 	stmdb	sp!, {r3}
        23fd24:	e1a03000 	mov	r3, r0
        23fd28:	e1a02006 	mov	r2, r6
        23fd2c:	e1a01006 	mov	r1, r6
        23fd30:	e1a00005 	mov	r0, r5
        23fd34:	ebffd0d4 	bl	23408c <TXOffsetRange::Set(long, long, unsigned char, unsigned char)>
        23fd38:	e28dd024 	add	sp, sp, #36	; 0x24
        23fd3c:	e59d001c 	ldr	r0, [sp, #28]	; fField28
        23fd40:	e3300000 	teq	r0, #0	; 0x0
        23fd44:	159d001c 	ldrne	r0, [sp, #28]	; fField28
        23fd48:	1b643663 	blne	1b4d6dc <$DisposePattern(PixelMap **)>
        23fd4c:	e59d0000 	ldr	r0, [sp]
        23fd50:	eb660d19 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23fd54:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TXNewtTextRun::CharToPixel(TXLineRunDisplayInfo const &, long)
 * Address: 0023fd58
 */
TXNewtTextRun::CharToPixel(TXLineRunDisplayInfo const &, long) {
    /*
        23fd58:	e1a0c00d 	mov	ip, sp
        23fd5c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        23fd60:	e24cb004 	sub	fp, ip, #4	; 0x4
        23fd64:	e1a06000 	mov	r6, r0
        23fd68:	e1a04001 	mov	r4, r1
        23fd6c:	e1a05002 	mov	r5, r2
        23fd70:	e24dd020 	sub	sp, sp, #32	; 0x20
        23fd74:	e3a00002 	mov	r0, #2	; 0x2
        23fd78:	eb6608f3 	bl	1bc214c <$AllocateRefHandle(long)>
        23fd7c:	e3a07000 	mov	r7, #0	; 0x0
        23fd80:	e58d0000 	str	r0, [sp]
        23fd84:	e5a07004 	str	r7, [r0, #4]!	; fField4
        23fd88:	e58d701c 	str	r7, [sp, #28]	; fField28
        23fd8c:	e1a0100d 	mov	r1, sp
        23fd90:	e1a00006 	mov	r0, r6
        23fd94:	eb654f14 	bl	1b939ec <TXNewtTextRun::$GetNewtStyleRecord(StyleRecord *)>
        23fd98:	e24dd004 	sub	sp, sp, #4	; 0x4
        23fd9c:	e28d0004 	add	r0, sp, #4	; 0x4
        23fda0:	e40d001c 	str	r0, [sp], -#28	; fField28
        23fda4:	e1a00007 	mov	r0, r7
        23fda8:	e1a01007 	mov	r1, r7
        23fdac:	e594200c 	ldr	r2, [r4, #12]	; fField12
        23fdb0:	e3320000 	teq	r2, #0	; 0x0
        23fdb4:	0a00000c 	beq	23fdec <TXNewtTextRun::CharToPixel(TXLineRunDisplayInfo const &, long)+0x94>
        23fdb8:	e1a0300d 	mov	r3, sp
        23fdbc:	e3a02801 	mov	r2, #65536	; 0x10000
        23fdc0:	e58d2000 	str	r2, [sp]
        23fdc4:	e284c008 	add	ip, r4, #8	; 0x8
        23fdc8:	e89c1004 	ldmia	ip, {r2, ip}
        23fdcc:	e082200c 	add	r2, r2, ip
        23fdd0:	e58d2008 	str	r2, [sp, #8]	; fField8
        23fdd4:	e58d7004 	str	r7, [sp, #4]	; fField4
        23fdd8:	e58d700c 	str	r7, [sp, #12]	; fField12
        23fddc:	e58d7010 	str	r7, [sp, #16]	; fField16
        23fde0:	e58d7014 	str	r7, [sp, #20]	; fField20
        23fde4:	e58d7018 	str	r7, [sp, #24]	; fField24
        23fde8:	ea000000 	b	23fdf0 <TXNewtTextRun::CharToPixel(TXLineRunDisplayInfo const &, long)+0x98>
        23fdec:	e3a03000 	mov	r3, #0	; 0x0
        23fdf0:	e24dd008 	sub	sp, sp, #8	; 0x8
        23fdf4:	e92d0008 	stmdb	sp!, {r3}
        23fdf8:	e24dd008 	sub	sp, sp, #8	; 0x8
        23fdfc:	e88d0003 	stmia	sp, {r0, r1}
        23fe00:	e28d2030 	add	r2, sp, #48	; 0x30
        23fe04:	e3a03000 	mov	r3, #0	; 0x0
        23fe08:	e8940003 	ldmia	r4, {r0, r1}
        23fe0c:	eb6446ae 	bl	1b518cc <$NewText(void *, long, StyleRecord **, short *, FPoint, TextOptions *)>
        23fe10:	e28dd00c 	add	sp, sp, #12	; 0xc
        23fe14:	e1a04000 	mov	r4, r0
        23fe18:	e1a0200d 	mov	r2, sp
        23fe1c:	e1a01005 	mov	r1, r5
        23fe20:	eb643619 	bl	1b4d68c <$CharToPoint__FlT1P6FPoint>
        23fe24:	e1a00004 	mov	r0, r4
        23fe28:	eb64362e 	bl	1b4d6e8 <$DisposeText(long)>
        23fe2c:	e59d0044 	ldr	r0, [sp, #68]
        23fe30:	e3300000 	teq	r0, #0	; 0x0
        23fe34:	e59d4000 	ldr	r4, [sp]
        23fe38:	159d0044 	ldrne	r0, [sp, #68]
        23fe3c:	1b643626 	blne	1b4d6dc <$DisposePattern(PixelMap **)>
        23fe40:	e59d0028 	ldr	r0, [sp, #40]
        23fe44:	eb660cdc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23fe48:	e1a00004 	mov	r0, r4
        23fe4c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXNewtTextRun::GetClassId( const(void))
 * Address: 0023fe50
 */
TXNewtTextRun::GetClassId( const(void)) {
    /*
        23fe50:	e59f0000 	ldr	r0, [pc, #0]	; 23fe58 <TXNewtTextRun::GetClassId( const(void))+0x8>
        23fe54:	e1a0f00e 	mov	pc, lr
        23fe58:	74657874 	strvcbt	r7, [r5], -#2164
    */
}

/**
 * Symbol: TXNewtTextRun::FullJustifPortion(TXLineRunDisplayInfo const &)
 * Address: 0023fe5c
 */
TXNewtTextRun::FullJustifPortion(TXLineRunDisplayInfo const &) {
    /*
        23fe5c:	e92d4010 	stmdb	sp!, {r4, lr}
        23fe60:	e3a0ea01 	mov	lr, #4096	; 0x1000
        23fe64:	e3a02000 	mov	r2, #0	; 0x0
        23fe68:	e3a0c020 	mov	ip, #32	; 0x20
        23fe6c:	e5913000 	ldr	r3, [r1]
        23fe70:	e5911004 	ldr	r1, [r1, #4]	; fField4
        23fe74:	e2511001 	subs	r1, r1, #1	; 0x1
        23fe78:	4a000005 	bmi	23fe94 <TXNewtTextRun::FullJustifPortion(TXLineRunDisplayInfo const &)+0x38>
        23fe7c:	e5934000 	ldr	r4, [r3]
        23fe80:	e2833002 	add	r3, r3, #2	; 0x2
        23fe84:	e13c0824 	teq	ip, r4, lsr #16
        23fe88:	0082200e 	addeq	r2, r2, lr
        23fe8c:	e2511001 	subs	r1, r1, #1	; 0x1
        23fe90:	5afffff9 	bpl	23fe7c <TXNewtTextRun::FullJustifPortion(TXLineRunDisplayInfo const &)+0x20>
        23fe94:	e1a01082 	mov	r1, r2, lsl #1
        23fe98:	e1a01181 	mov	r1, r1, lsl #3
        23fe9c:	e1a012c1 	mov	r1, r1, asr #5
        23fea0:	e590000c 	ldr	r0, [r0, #12]	; fField12
        23fea4:	e1a00800 	mov	r0, r0, lsl #16
        23fea8:	e8bd4010 	ldmia	sp!, {r4, lr}
        23feac:	ea668484 	b	1be10c4 <$FixedMultiply>
    */
}

/**
 * Symbol: TXNewtTextRun::VisibleLen(unsigned short const *, long)
 * Address: 0023feb0
 */
TXNewtTextRun::VisibleLen(unsigned short const *, long) {
    /*
        23feb0:	e3a00000 	mov	r0, #0	; 0x0
        23feb4:	e3320000 	teq	r2, #0	; 0x0
        23feb8:	01a0f00e 	moveq	pc, lr
        23febc:	e1a00002 	mov	r0, r2
        23fec0:	e0811082 	add	r1, r1, r2, lsl #1
        23fec4:	e5312002 	ldr	r2, [r1, -#2]!
        23fec8:	e1a02822 	mov	r2, r2, lsr #16
        23fecc:	e3320020 	teq	r2, #32	; 0x20
        23fed0:	11a02802 	movne	r2, r2, lsl #16
        23fed4:	11a02822 	movne	r2, r2, lsr #16
        23fed8:	1332000a 	teqne	r2, #10	; 0xa
        23fedc:	1332000d 	teqne	r2, #13	; 0xd
        23fee0:	11a0f00e 	movne	pc, lr
        23fee4:	e2400001 	sub	r0, r0, #1	; 0x1
        23fee8:	e3500000 	cmp	r0, #0	; 0x0
        23feec:	cafffff4 	bgt	23fec4 <TXNewtTextRun::VisibleLen(unsigned short const *, long)+0x14>
        23fef0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXNewtTextRun::LineBreak(unsigned short const *, long, long, long *, unsigned char, long *)
 * Address: 0023fef4
 */
TXNewtTextRun::LineBreak(unsigned short const *, long, long, long *, unsigned char, long *) {
    /*
        23fef4:	e1a0c00d 	mov	ip, sp
        23fef8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        23fefc:	e24cb004 	sub	fp, ip, #4	; 0x4
        23ff00:	e1a0a000 	mov	sl, r0
        23ff04:	e1a05001 	mov	r5, r1
        23ff08:	e1a06002 	mov	r6, r2
        23ff0c:	e1a04003 	mov	r4, r3
        23ff10:	e28b7008 	add	r7, fp, #8	; 0x8
        23ff14:	e8970081 	ldmia	r7, {r0, r7}
        23ff18:	e20000ff 	and	r0, r0, #255	; 0xff
        23ff1c:	e59b8004 	ldr	r8, [fp, #4]	; fField4
        23ff20:	e0429003 	sub	r9, r2, r3
        23ff24:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        23ff28:	e24dd020 	sub	sp, sp, #32	; 0x20
        23ff2c:	e3a00002 	mov	r0, #2	; 0x2
        23ff30:	eb660885 	bl	1bc214c <$AllocateRefHandle(long)>
        23ff34:	e3a01000 	mov	r1, #0	; 0x0
        23ff38:	e58d0000 	str	r0, [sp]
        23ff3c:	e5a01004 	str	r1, [r0, #4]!	; fField4
        23ff40:	e58d101c 	str	r1, [sp, #28]	; fField28
        23ff44:	e1a0100d 	mov	r1, sp
        23ff48:	e1a0000a 	mov	r0, sl
        23ff4c:	eb654ea6 	bl	1b939ec <TXNewtTextRun::$GetNewtStyleRecord(StyleRecord *)>
        23ff50:	e24dd004 	sub	sp, sp, #4	; 0x4
        23ff54:	e28d0004 	add	r0, sp, #4	; 0x4
        23ff58:	e40d001c 	str	r0, [sp], -#28	; fField28
        23ff5c:	e3a00000 	mov	r0, #0	; 0x0
        23ff60:	e3a01000 	mov	r1, #0	; 0x0
        23ff64:	e3a02000 	mov	r2, #0	; 0x0
        23ff68:	e88d0006 	stmia	sp, {r1, r2}
        23ff6c:	e58d200c 	str	r2, [sp, #12]	; fField12
        23ff70:	e58d2010 	str	r2, [sp, #16]	; fField16
        23ff74:	e58d2014 	str	r2, [sp, #20]	; fField20
        23ff78:	e58d2018 	str	r2, [sp, #24]	; fField24
        23ff7c:	e5982000 	ldr	r2, [r8]
        23ff80:	e58d2008 	str	r2, [sp, #8]	; fField8
        23ff84:	e1a0300d 	mov	r3, sp
        23ff88:	e92d0008 	stmdb	sp!, {r3}
        23ff8c:	e24dd008 	sub	sp, sp, #8	; 0x8
        23ff90:	e88d0003 	stmia	sp, {r0, r1}
        23ff94:	e0850084 	add	r0, r5, r4, lsl #1
        23ff98:	e28d2028 	add	r2, sp, #40	; 0x28
        23ff9c:	e1a01009 	mov	r1, r9
        23ffa0:	e3a03000 	mov	r3, #0	; 0x0
        23ffa4:	eb644648 	bl	1b518cc <$NewText(void *, long, StyleRecord **, short *, FPoint, TextOptions *)>
        23ffa8:	e28dd00c 	add	sp, sp, #12	; 0xc
        23ffac:	e1a0a000 	mov	sl, r0
        23ffb0:	e1a02007 	mov	r2, r7
        23ffb4:	e3a01001 	mov	r1, #1	; 0x1
        23ffb8:	eb643e0a 	bl	1b4f7e8 <$GetTextObjField(long, TextObjectField, void *)>
        23ffbc:	e1a0000a 	mov	r0, sl
        23ffc0:	eb6435c8 	bl	1b4d6e8 <$DisposeText(long)>
        23ffc4:	e5970000 	ldr	r0, [r7]
        23ffc8:	e1300009 	teq	r0, r9
        23ffcc:	1a00000c 	bne	240004 <TXNewtTextRun::LineBreak(unsigned short const *, long, long, long *, unsigned char, long *)+0x110>
        23ffd0:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        23ffd4:	e5980000 	ldr	r0, [r8]
        23ffd8:	e0400001 	sub	r0, r0, r1
        23ffdc:	e3a04002 	mov	r4, #2	; 0x2
        23ffe0:	e5880000 	str	r0, [r8]
        23ffe4:	e59d003c 	ldr	r0, [sp, #60]
        23ffe8:	e3300000 	teq	r0, #0	; 0x0
        23ffec:	159d003c 	ldrne	r0, [sp, #60]
        23fff0:	1b6435b9 	blne	1b4d6dc <$DisposePattern(PixelMap **)>
        23fff4:	e59d0020 	ldr	r0, [sp, #32]
        23fff8:	eb660c6f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23fffc:	e1a00004 	mov	r0, r4
        240000:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        240004:	e3a09000 	mov	r9, #0	; 0x0
        240008:	e5889000 	str	r9, [r8]
        24000c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        240010:	e28d3004 	add	r3, sp, #4	; 0x4
        240014:	e28d2008 	add	r2, sp, #8	; 0x8
        240018:	e92d000c 	stmdb	sp!, {r2, r3}
        24001c:	e59f0068 	ldr	r0, [pc, #68]	; 24008c <TXNewtTextRun::LineBreak(unsigned short const *, long, long, long *, unsigned char, long *)+0x198>
        240020:	e5900000 	ldr	r0, [r0]
        240024:	eb660848 	bl	1bc214c <$AllocateRefHandle(long)>
        240028:	e58d0008 	str	r0, [sp, #8]	; fField8
        24002c:	e28d3008 	add	r3, sp, #8	; 0x8
        240030:	e92d0008 	stmdb	sp!, {r3}
        240034:	e5970000 	ldr	r0, [r7]
        240038:	e0802004 	add	r2, r0, r4
        24003c:	e1a01006 	mov	r1, r6
        240040:	e1a00005 	mov	r0, r5
        240044:	e3a03001 	mov	r3, #1	; 0x1
        240048:	eb615278 	bl	1a94a30 <$FindWordBreaks__FPUsUlT2Uc6RefVarPUlT6>
        24004c:	e5bd000c 	ldr	r0, [sp, #12]!	; fField12
        240050:	eb660c59 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        240054:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        240058:	e7951080 	ldr	r1, [r5, r0, lsl #1]
        24005c:	e1a01821 	mov	r1, r1, lsr #16
        240060:	e3310020 	teq	r1, #32	; 0x20
        240064:	1a00000b 	bne	240098 <TXNewtTextRun::LineBreak(unsigned short const *, long, long, long *, unsigned char, long *)+0x1a4>
        240068:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        24006c:	e0400004 	sub	r0, r0, r4
        240070:	e5870000 	str	r0, [r7]
        240074:	e59d0048 	ldr	r0, [sp, #72]
        240078:	e3300000 	teq	r0, #0	; 0x0
        24007c:	0a00000f 	beq	2400c0 <TXNewtTextRun::LineBreak(unsigned short const *, long, long, long *, unsigned char, long *)+0x1cc>
        240080:	e59d0048 	ldr	r0, [sp, #72]
        240084:	eb643594 	bl	1b4d6dc <$DisposePattern(PixelMap **)>
        240088:	ea00000c 	b	2400c0 <TXNewtTextRun::LineBreak(unsigned short const *, long, long, long *, unsigned char, long *)+0x1cc>
        24008c:	0c104ddc 	ldceq	13, cr4, [r0], -#880
        240090:	e1a00009 	mov	r0, r9
        240094:	ea000019 	b	240100 <TXNewtTextRun::LineBreak(unsigned short const *, long, long, long *, unsigned char, long *)+0x20c>
        240098:	e3300000 	teq	r0, #0	; 0x0
        24009c:	1a000002 	bne	2400ac <TXNewtTextRun::LineBreak(unsigned short const *, long, long, long *, unsigned char, long *)+0x1b8>
        2400a0:	e59d104c 	ldr	r1, [sp, #76]
        2400a4:	e3310000 	teq	r1, #0	; 0x0
        2400a8:	1a000007 	bne	2400cc <TXNewtTextRun::LineBreak(unsigned short const *, long, long, long *, unsigned char, long *)+0x1d8>
        2400ac:	e0400004 	sub	r0, r0, r4
        2400b0:	e5870000 	str	r0, [r7]
        2400b4:	e59d0048 	ldr	r0, [sp, #72]
        2400b8:	e3300000 	teq	r0, #0	; 0x0
        2400bc:	1affffef 	bne	240080 <TXNewtTextRun::LineBreak(unsigned short const *, long, long, long *, unsigned char, long *)+0x18c>
        2400c0:	e59d002c 	ldr	r0, [sp, #44]
        2400c4:	eb660c3c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2400c8:	eafffff0 	b	240090 <TXNewtTextRun::LineBreak(unsigned short const *, long, long, long *, unsigned char, long *)+0x19c>
        2400cc:	e3340000 	teq	r4, #0	; 0x0
        2400d0:	05970000 	ldreq	r0, [r7]
        2400d4:	03300000 	teqeq	r0, #0	; 0x0
        2400d8:	03a00001 	moveq	r0, #1	; 0x1
        2400dc:	05870000 	streq	r0, [r7]
        2400e0:	e3a04001 	mov	r4, #1	; 0x1
        2400e4:	e59d0048 	ldr	r0, [sp, #72]
        2400e8:	e3300000 	teq	r0, #0	; 0x0
        2400ec:	159d0048 	ldrne	r0, [sp, #72]
        2400f0:	1b643579 	blne	1b4d6dc <$DisposePattern(PixelMap **)>
        2400f4:	e59d002c 	ldr	r0, [sp, #44]
        2400f8:	eb660c2f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2400fc:	e1a00004 	mov	r0, r4
        240100:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXNewtTextRun::GetNSObject( const(void))
 * Address: 00240104
 */
TXNewtTextRun::GetNSObject( const(void)) {
    /*
        240104:	e280200c 	add	r2, r0, #12	; 0xc
        240108:	e8920006 	ldmia	r2, {r1, r2}
        24010c:	e2800008 	add	r0, r0, #8	; 0x8
        240110:	ea6249ff 	b	1ad2914 <$MakeCompactFont__FRC6RefVarlT2>
    */
}

/**
 * Symbol: TXNewtTextRun::SetNSObject(RefVar const &)
 * Address: 00240114
 */
TXNewtTextRun::SetNSObject(RefVar const &) {
    /*
        240114:	e1a0c00d 	mov	ip, sp
        240118:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        24011c:	e24cb004 	sub	fp, ip, #4	; 0x4
        240120:	e1a05000 	mov	r5, r0
        240124:	e1a04001 	mov	r4, r1
        240128:	e2806008 	add	r6, r0, #8	; 0x8
        24012c:	e1a00001 	mov	r0, r1
        240130:	eb6241b7 	bl	1ad0814 <$GetFontFamilySym(RefVar const &)>
        240134:	e5961000 	ldr	r1, [r6]
        240138:	e5810000 	str	r0, [r1]
        24013c:	e1a00004 	mov	r0, r4
        240140:	ebfcead8 	bl	17aca8 <GetFontSize(RefVar const &)>
        240144:	e585000c 	str	r0, [r5, #12]	; fField12
        240148:	e1a00004 	mov	r0, r4
        24014c:	eb6241ae 	bl	1ad080c <$GetFontFace(RefVar const &)>
        240150:	e5a50010 	str	r0, [r5, #16]!	; fField16
        240154:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXNewtTextRun::IsTextRun( const(void))
 * Address: 0024037c
 */
TXNewtTextRun::IsTextRun( const(void)) {
    /*
        24037c:	e3a00001 	mov	r0, #1	; 0x1
        240380:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXNewtTextRun::Assign(TXAttrObject const *)
 * Address: 00240384
 */
TXNewtTextRun::Assign(TXAttrObject const *) {
    /*
        240384:	e1a0c00d 	mov	ip, sp
        240388:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        24038c:	e24cb004 	sub	fp, ip, #4	; 0x4
        240390:	e1a04000 	mov	r4, r0
        240394:	e1a05001 	mov	r5, r1
        240398:	eb656643 	bl	1b99cac <TXRun::$Assign(TXAttrObject const *)>
        24039c:	e5951008 	ldr	r1, [r5, #8]	; fField8
        2403a0:	e5911000 	ldr	r1, [r1]
        2403a4:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2403a8:	e5801000 	str	r1, [r0]
        2403ac:	e595000c 	ldr	r0, [r5, #12]	; fField12
        2403b0:	e584000c 	str	r0, [r4, #12]	; fField12
        2403b4:	e5950010 	ldr	r0, [r5, #16]	; fField16
        2403b8:	e5840010 	str	r0, [r4, #16]	; fField16
        2403bc:	e5950014 	ldr	r0, [r5, #20]	; fField20
        2403c0:	e5840014 	str	r0, [r4, #20]	; fField20
        2403c4:	e5950018 	ldr	r0, [r5, #24]	; fField24
        2403c8:	e5840018 	str	r0, [r4, #24]	; fField24
        2403cc:	e5b5001c 	ldr	r0, [r5, #28]!	; fField28
        2403d0:	e5a4001c 	str	r0, [r4, #28]!	; fField28
        2403d4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXNewtTextRun::GetAttributeValue( const(unsigned long, void *))
 * Address: 002403d8
 */
TXNewtTextRun::GetAttributeValue( const(unsigned long, void *)) {
    /*
        2403d8:	e59fc02c 	ldr	ip, [pc, #2c]	; 24040c <TXNewtTextRun::GetAttributeValue( const(unsigned long, void *))+0x34>
        2403dc:	e131000c 	teq	r1, ip
        2403e0:	05900010 	ldreq	r0, [r0, #16]	; fField16
        2403e4:	0a000006 	beq	240404 <TXNewtTextRun::GetAttributeValue( const(unsigned long, void *))+0x2c>
        2403e8:	e59fc020 	ldr	ip, [pc, #20]	; 240410 <TXNewtTextRun::GetAttributeValue( const(unsigned long, void *))+0x38>	; fField20
        2403ec:	e131000c 	teq	r1, ip
        2403f0:	0a000008 	beq	240418 <TXNewtTextRun::GetAttributeValue( const(unsigned long, void *))+0x40>
        2403f4:	e59fc018 	ldr	ip, [pc, #18]	; 240414 <TXNewtTextRun::GetAttributeValue( const(unsigned long, void *))+0x3c>
        2403f8:	e131000c 	teq	r1, ip
        2403fc:	1a6517d3 	bne	1b86350 <TXAttrObject::$GetAttributeValue( const(unsigned long, void *))>
        240400:	e590000c 	ldr	r0, [r0, #12]	; fField12
        240404:	e5820000 	str	r0, [r2]
        240408:	ea000007 	b	24042c <TXNewtTextRun::GetAttributeValue( const(unsigned long, void *))+0x54>
        24040c:	66616365 	strvsbt	r6, [r1], -r5, ror #6
        240410:	666f6e74 	undefined
        240414:	73697a65 	cmnvc	r9, #413696	; 0x65000
        240418:	e5921000 	ldr	r1, [r2]
        24041c:	e5900008 	ldr	r0, [r0, #8]	; fField8
        240420:	e5900000 	ldr	r0, [r0]
        240424:	e5911004 	ldr	r1, [r1, #4]	; fField4
        240428:	e5810000 	str	r0, [r1]
        24042c:	e3a00001 	mov	r0, #1	; 0x1
        240430:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXNewtTextRun::GetAttributesValues(TXAttrValues *)
 * Address: 00240434
 */
TXNewtTextRun::GetAttributesValues(TXAttrValues *) {
    /*
        240434:	e1a0c00d 	mov	ip, sp
        240438:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        24043c:	e24cb004 	sub	fp, ip, #4	; 0x4
        240440:	e1a05000 	mov	r5, r0
        240444:	e1a04001 	mov	r4, r1
        240448:	e24dd004 	sub	sp, sp, #4	; 0x4
        24044c:	e2801008 	add	r1, r0, #8	; 0x8
        240450:	e3a00000 	mov	r0, #0	; 0x0
        240454:	eb65516f 	bl	1b94a18 <TXNewtFontFamilyInfo::$__ct(RefVar const &)>
        240458:	e3a03001 	mov	r3, #1	; 0x1
        24045c:	e58d0000 	str	r0, [sp]
        240460:	e92d0008 	stmdb	sp!, {r3}
        240464:	e28d2004 	add	r2, sp, #4	; 0x4
        240468:	e1a00004 	mov	r0, r4
        24046c:	e3a03004 	mov	r3, #4	; 0x4
        240470:	e59f1054 	ldr	r1, [pc, #54]	; 2404cc <TXNewtTextRun::GetAttributesValues(TXAttrValues *)+0x98>
        240474:	eb651bc2 	bl	1b87384 <TXAttrValues::$Add(unsigned long, void const *, int, unsigned char)>
        240478:	e28dd004 	add	sp, sp, #4	; 0x4
        24047c:	e3a03000 	mov	r3, #0	; 0x0
        240480:	e92d0008 	stmdb	sp!, {r3}
        240484:	e285200c 	add	r2, r5, #12	; 0xc
        240488:	e1a00004 	mov	r0, r4
        24048c:	e3a03004 	mov	r3, #4	; 0x4
        240490:	e59f1038 	ldr	r1, [pc, #38]	; 2404d0 <TXNewtTextRun::GetAttributesValues(TXAttrValues *)+0x9c>
        240494:	eb651bba 	bl	1b87384 <TXAttrValues::$Add(unsigned long, void const *, int, unsigned char)>
        240498:	e28dd004 	add	sp, sp, #4	; 0x4
        24049c:	e3a03000 	mov	r3, #0	; 0x0
        2404a0:	e92d0008 	stmdb	sp!, {r3}
        2404a4:	e2852010 	add	r2, r5, #16	; 0x10
        2404a8:	e1a00004 	mov	r0, r4
        2404ac:	e3a03004 	mov	r3, #4	; 0x4
        2404b0:	e59f101c 	ldr	r1, [pc, #1c]	; 2404d4 <TXNewtTextRun::GetAttributesValues(TXAttrValues *)+0xa0>
        2404b4:	eb651bb2 	bl	1b87384 <TXAttrValues::$Add(unsigned long, void const *, int, unsigned char)>
        2404b8:	e28dd004 	add	sp, sp, #4	; 0x4
        2404bc:	e1a01004 	mov	r1, r4
        2404c0:	e1a00005 	mov	r0, r5
        2404c4:	eb6517a8 	bl	1b8636c <TXAttrObject::$GetAttributesValues(TXAttrValues *)>
        2404c8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2404cc:	666f6e74 	undefined
        2404d0:	73697a65 	cmnvc	r9, #413696	; 0x65000
        2404d4:	66616365 	strvsbt	r6, [r1], -r5, ror #6
    */
}

/**
 * Symbol: TXNewtTextRun::SetAttributeValue(unsigned long, void const *)
 * Address: 002404d8
 */
TXNewtTextRun::SetAttributeValue(unsigned long, void const *) {
    /*
        2404d8:	e3e03000 	mvn	r3, #0	; 0x0
        2404dc:	e5803014 	str	r3, [r0, #20]	; fField20
        2404e0:	e59fc030 	ldr	ip, [pc, #30]	; 240518 <TXNewtTextRun::SetAttributeValue(unsigned long, void const *)+0x40>
        2404e4:	e131000c 	teq	r1, ip
        2404e8:	05921000 	ldreq	r1, [r2]
        2404ec:	05a01010 	streq	r1, [r0, #16]!	; fField16
        2404f0:	01a0f00e 	moveq	pc, lr
        2404f4:	e59fc020 	ldr	ip, [pc, #20]	; 24051c <TXNewtTextRun::SetAttributeValue(unsigned long, void const *)+0x44>	; fField20
        2404f8:	e131000c 	teq	r1, ip
        2404fc:	0a000008 	beq	240524 <TXNewtTextRun::SetAttributeValue(unsigned long, void const *)+0x4c>
        240500:	e59fc018 	ldr	ip, [pc, #18]	; 240520 <TXNewtTextRun::SetAttributeValue(unsigned long, void const *)+0x48>
        240504:	e131000c 	teq	r1, ip
        240508:	05921000 	ldreq	r1, [r2]
        24050c:	05a0100c 	streq	r1, [r0, #12]!	; fField12
        240510:	1a65178f 	bne	1b86354 <TXAttrObject::$SetAttributeValue(unsigned long, void const *)>
        240514:	e1a0f00e 	mov	pc, lr
        240518:	66616365 	strvsbt	r6, [r1], -r5, ror #6
        24051c:	666f6e74 	undefined
        240520:	73697a65 	cmnvc	r9, #413696	; 0x65000
        240524:	e5921000 	ldr	r1, [r2]
        240528:	e5911004 	ldr	r1, [r1, #4]	; fField4
        24052c:	e5911000 	ldr	r1, [r1]
        240530:	e5900008 	ldr	r0, [r0, #8]	; fField8
        240534:	e5801000 	str	r1, [r0]
        240538:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXNewtTextRun::AddFace(long, long *)
 * Address: 0024053c
 */
TXNewtTextRun::AddFace(long, long *) {
    /*
        24053c:	e5920000 	ldr	r0, [r2]
        240540:	e1800001 	orr	r0, r0, r1
        240544:	e5820000 	str	r0, [r2]
        240548:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXNewtTextRun::RemoveFace( const(long, long *))
 * Address: 0024054c
 */
TXNewtTextRun::RemoveFace( const(long, long *)) {
    /*
        24054c:	e5920000 	ldr	r0, [r2]
        240550:	e1c00001 	bic	r0, r0, r1
        240554:	e5820000 	str	r0, [r2]
        240558:	e1a0f00e 	mov	pc, lr
    */
}

