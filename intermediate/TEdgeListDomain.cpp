#include "include/TEdgeListDomain.h"

/**
 * Symbol: Make__15TEdgeListDomainSFP11TController
 * Address: 0020e83c
 */
void TEdgeListDomain::Make() {
    /*
        20e83c:	e1a0c00d 	mov	ip, sp
        20e840:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        20e844:	e24cb004 	sub	fp, ip, #4	; 0x4
        20e848:	e1a04000 	mov	r4, r0
        20e84c:	e3a00024 	mov	r0, #36	; 0x24
        20e850:	eb66ffb8 	bl	1bce738 <$__nw(unsigned int)>
        20e854:	e1b05000 	movs	r5, r0
        20e858:	0a000003 	beq	20e86c <Make__15TEdgeListDomainSFP11TController+0x30>
        20e85c:	e1a00005 	mov	r0, r5
        20e860:	eb653138 	bl	1b5ad48 <TDomain::$__ct(void)>
        20e864:	e59f0014 	ldr	r0, [pc, #14]	; 20e880 <Make__15TEdgeListDomainSFP11TController+0x44>
        20e868:	e5850000 	str	r0, [r5]
        20e86c:	e1a01004 	mov	r1, r4
        20e870:	e1a00005 	mov	r0, r5
        20e874:	eb6545e0 	bl	1b5fffc <TEdgeListDomain::$IEdgeListDomain(TController *)>
        20e878:	e1a00005 	mov	r0, r5
        20e87c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        20e880:	0001e04c 	andeq	lr, r1, ip, asr #32
    */
}

/**
 * Symbol: TEdgeListDomain::IEdgeListDomain(TController *)
 * Address: 0020e884
 */
TEdgeListDomain::IEdgeListDomain(TController *) {
    /*
        20e884:	e1a0c00d 	mov	ip, sp
        20e888:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        20e88c:	e24cb004 	sub	fp, ip, #4	; 0x4
        20e890:	e1a04000 	mov	r4, r0
        20e894:	e1a05001 	mov	r5, r1
        20e898:	e59f2020 	ldr	r2, [pc, #20]	; 20e8c0 <TEdgeListDomain::IEdgeListDomain(TController *)+0x3c>
        20e89c:	e28f3f08 	add	r3, pc, #32	; 0x20
        20e8a0:	eb6545d4 	bl	1b5fff8 <TDomain::$IDomain(TController *, unsigned long, char *)>
        20e8a4:	e1a00004 	mov	r0, r4
        20e8a8:	e59f1020 	ldr	r1, [pc, #20]	; 20e8d0 <TEdgeListDomain::IEdgeListDomain(TController *)+0x4c>
        20e8ac:	eb653132 	bl	1b5ad7c <TDomain::$AddPieceType(unsigned long)>
        20e8b0:	e1a01004 	mov	r1, r4
        20e8b4:	e1a00005 	mov	r0, r5
        20e8b8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        20e8bc:	ea654e18 	b	1b62124 <TController::$RegisterDomain(TDomain *)>
        20e8c0:	53435242 	cmppl	r3, #536870916	; 0x20000004
        20e8c4:	45646765 	strmib	r6, [r4, -#1893]!	; fField1893
        20e8c8:	4c697374 	stcmil	3, cr7, [r9], -#464
        20e8cc:	00000000 	andeq	r0, r0, r0
        20e8d0:	5354524b 	cmppl	r4, #-1342177276	; 0xb0000004
    */
}

/**
 * Symbol: TEdgeListDomain::Dispose(void)
 * Address: 0020e8d4
 */
TEdgeListDomain::Dispose(void) {
    /*
        20e8d4:	ea653d70 	b	1b5de9c <TDomain::$Dispose(void)>
    */
}

/**
 * Symbol: TEdgeListDomain::Classify(TUnit *)
 * Address: 0020e8d8
 */
TEdgeListDomain::Classify(TUnit *) {
    /*
        20e8d8:	e1a0c00d 	mov	ip, sp
        20e8dc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        20e8e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        20e8e4:	e1a05000 	mov	r5, r0
        20e8e8:	e1a04001 	mov	r4, r1
        20e8ec:	e1a06001 	mov	r6, r1
        20e8f0:	e1a00001 	mov	r0, r1
        20e8f4:	e1a02001 	mov	r2, r1
        20e8f8:	e3a01000 	mov	r1, #0	; 0x0
        20e8fc:	e5922000 	ldr	r2, [r2]
        20e900:	e1a0e00f 	mov	lr, pc
        20e904:	e282f058 	add	pc, r2, #88	; 0x58
        20e908:	eb6549f8 	bl	1b610f0 <$OnlyStrokeWritten(TStrokeUnit *)>
        20e90c:	e3300000 	teq	r0, #0	; 0x0
        20e910:	0a000032 	beq	20e9e0 <TEdgeListDomain::Classify(TUnit *)+0x108>
        20e914:	e1a01006 	mov	r1, r6
        20e918:	e1a00005 	mov	r0, r5
        20e91c:	eb65417d 	bl	1b5ef18 <TEdgeListDomain::$FindCorners(TUnit *)>
        20e920:	e24dd020 	sub	sp, sp, #32	; 0x20
        20e924:	e1a00006 	mov	r0, r6
        20e928:	eb654188 	bl	1b5ef50 <TEdgeListUnit::$GetCorners(void)>
        20e92c:	e1b07000 	movs	r7, r0
        20e930:	0a00001b 	beq	20e9a4 <TEdgeListDomain::Classify(TUnit *)+0xcc>
        20e934:	e597000c 	ldr	r0, [r7, #12]
        20e938:	e3500032 	cmp	r0, #50	; 0x32
        20e93c:	2a000018 	bcs	20e9a4 <TEdgeListDomain::Classify(TUnit *)+0xcc>
        20e940:	e28d0010 	add	r0, sp, #16	; 0x10
        20e944:	e3a02000 	mov	r2, #0	; 0x0
        20e948:	e3a01000 	mov	r1, #0	; 0x0
        20e94c:	eb6545b0 	bl	1b60014 <$InitInterpretation__FP18UnitInterpretationUlT2>
        20e950:	e1a0100d 	mov	r1, sp
        20e954:	e1a00006 	mov	r0, r6
        20e958:	eb655a4a 	bl	1b65288 <TUnit::$GetBBox(FRect *)>
        20e95c:	e1a00007 	mov	r0, r7
        20e960:	eb653933 	bl	1b5ce34 <$Collapse2(TDArray *)>
        20e964:	e28d1010 	add	r1, sp, #16	; 0x10
        20e968:	e1a00007 	mov	r0, r7
        20e96c:	eb65521e 	bl	1b631ec <$TestLine(TDArray *, UnitInterpretation *)>
        20e970:	e3300000 	teq	r0, #0	; 0x0
        20e974:	1a000012 	bne	20e9c4 <TEdgeListDomain::Classify(TUnit *)+0xec>
        20e978:	e28d1010 	add	r1, sp, #16	; 0x10
        20e97c:	e1a00007 	mov	r0, r7
        20e980:	eb655217 	bl	1b631e4 <$TestCarets(TDArray *, UnitInterpretation *)>
        20e984:	e3300000 	teq	r0, #0	; 0x0
        20e988:	1a00000d 	bne	20e9c4 <TEdgeListDomain::Classify(TUnit *)+0xec>
        20e98c:	e28d2010 	add	r2, sp, #16	; 0x10
        20e990:	e1a0100d 	mov	r1, sp
        20e994:	e1a00007 	mov	r0, r7
        20e998:	eb655214 	bl	1b631f0 <$TestScrub(TDArray *, FRect *, UnitInterpretation *)>
        20e99c:	e3300000 	teq	r0, #0	; 0x0
        20e9a0:	1a000007 	bne	20e9c4 <TEdgeListDomain::Classify(TUnit *)+0xec>
        20e9a4:	e1a00006 	mov	r0, r6
        20e9a8:	e3a01501 	mov	r1, #4194304	; 0x400000
        20e9ac:	eb654df0 	bl	1b62174 <TRecObject::$SetFlags(unsigned long)>
        20e9b0:	e1a00006 	mov	r0, r6
        20e9b4:	e5961000 	ldr	r1, [r6]
        20e9b8:	e1a0e00f 	mov	lr, pc
        20e9bc:	e281f038 	add	pc, r1, #56	; 0x38
        20e9c0:	ea000004 	b	20e9d8 <TEdgeListDomain::Classify(TUnit *)+0x100>
        20e9c4:	e28d1010 	add	r1, sp, #16	; 0x10
        20e9c8:	e1a00006 	mov	r0, r6
        20e9cc:	e5962000 	ldr	r2, [r6]
        20e9d0:	e1a0e00f 	mov	lr, pc
        20e9d4:	e282f064 	add	pc, r2, #100	; 0x64
        20e9d8:	e28dd020 	add	sp, sp, #32	; 0x20
        20e9dc:	ea000006 	b	20e9fc <TEdgeListDomain::Classify(TUnit *)+0x124>
        20e9e0:	e1a00006 	mov	r0, r6
        20e9e4:	e3a01501 	mov	r1, #4194304	; 0x400000
        20e9e8:	eb654de1 	bl	1b62174 <TRecObject::$SetFlags(unsigned long)>
        20e9ec:	e1a00006 	mov	r0, r6
        20e9f0:	e5961000 	ldr	r1, [r6]
        20e9f4:	e1a0e00f 	mov	lr, pc
        20e9f8:	e281f038 	add	pc, r1, #56	; 0x38
        20e9fc:	e1a00006 	mov	r0, r6
        20ea00:	e5961000 	ldr	r1, [r6]
        20ea04:	e1a0e00f 	mov	lr, pc
        20ea08:	e281f0a8 	add	pc, r1, #168	; 0xa8
        20ea0c:	e1a01004 	mov	r1, r4
        20ea10:	e5b50008 	ldr	r0, [r5, #8]!	; fField8
        20ea14:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        20ea18:	ea6549ae 	b	1b610d8 <TController::$NewClassification(TUnit *)>
    */
}

/**
 * Symbol: TEdgeListDomain::Group(TUnit *, dInfoRec *)
 * Address: 0020ea1c
 */
TEdgeListDomain::Group(TUnit *, dInfoRec *) {
    /*
        20ea1c:	e1a0c00d 	mov	ip, sp
        20ea20:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        20ea24:	e24cb004 	sub	fp, ip, #4	; 0x4
        20ea28:	e1a05000 	mov	r5, r0
        20ea2c:	e1a04001 	mov	r4, r1
        20ea30:	e1a00001 	mov	r0, r1
        20ea34:	eb655a12 	bl	1b65284 <TUnit::$GetAreas(void)>
        20ea38:	e1a07000 	mov	r7, r0
        20ea3c:	e5d40024 	ldrb	r0, [r4, #36]
        20ea40:	e2801001 	add	r1, r0, #1	; 0x1
        20ea44:	e1a02007 	mov	r2, r7
        20ea48:	e1a00005 	mov	r0, r5
        20ea4c:	eb65498b 	bl	1b61080 <$Make__13TEdgeListUnitSFP7TDomainUlP6TArray>
        20ea50:	e1a06000 	mov	r6, r0
        20ea54:	e3370000 	teq	r7, #0	; 0x0
        20ea58:	11a00007 	movne	r0, r7
        20ea5c:	11a0e00f 	movne	lr, pc
        20ea60:	1597f000 	ldrne	pc, [r7]
        20ea64:	e3360000 	teq	r6, #0	; 0x0
        20ea68:	03a00000 	moveq	r0, #0	; 0x0
        20ea6c:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        20ea70:	e1a01004 	mov	r1, r4
        20ea74:	e1a00006 	mov	r0, r6
        20ea78:	e5962000 	ldr	r2, [r6]
        20ea7c:	e1a0e00f 	mov	lr, pc
        20ea80:	e282f054 	add	pc, r2, #84	; 0x54
        20ea84:	e1a00006 	mov	r0, r6
        20ea88:	e5961000 	ldr	r1, [r6]
        20ea8c:	e1a0e00f 	mov	lr, pc
        20ea90:	e281f060 	add	pc, r1, #96	; 0x60
        20ea94:	e1a01006 	mov	r1, r6
        20ea98:	e5b50008 	ldr	r0, [r5, #8]!	; fField8
        20ea9c:	eb65498f 	bl	1b610e0 <TController::$NewGroup(TUnit *)>
        20eaa0:	e3a00001 	mov	r0, #1	; 0x1
        20eaa4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TEdgeListDomain::FindCorners(TUnit *)
 * Address: 0020eaa8
 */
TEdgeListDomain::FindCorners(TUnit *) {
    /*
        20eaa8:	e1a0c00d 	mov	ip, sp
        20eaac:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        20eab0:	e24cb004 	sub	fp, ip, #4	; 0x4
        20eab4:	e1a00001 	mov	r0, r1
        20eab8:	e24dd004 	sub	sp, sp, #4	; 0x4
        20eabc:	e1a08001 	mov	r8, r1
        20eac0:	e1a02001 	mov	r2, r1
        20eac4:	e3a01000 	mov	r1, #0	; 0x0
        20eac8:	e5922000 	ldr	r2, [r2]
        20eacc:	e1a0e00f 	mov	lr, pc
        20ead0:	e282f058 	add	pc, r2, #88	; 0x58
        20ead4:	e5b05040 	ldr	r5, [r0, #64]!	; fField64
        20ead8:	e595400c 	ldr	r4, [r5, #12]
        20eadc:	e1a00005 	mov	r0, r5
        20eae0:	e3a01000 	mov	r1, #0	; 0x0
        20eae4:	eb6572bf 	bl	1b6b5e8 <TStroke::$GetPoint(long)>
        20eae8:	e1a06000 	mov	r6, r0
        20eaec:	e3a07000 	mov	r7, #0	; 0x0
        20eaf0:	e3540000 	cmp	r4, #0	; 0x0
        20eaf4:	9a000006 	bls	20eb14 <TEdgeListDomain::FindCorners(TUnit *)+0x6c>
        20eaf8:	e1a00006 	mov	r0, r6
        20eafc:	e3a01002 	mov	r1, #2	; 0x2
        20eb00:	eb657f03 	bl	1b6e714 <$UnsetFlag(SamplePt *, unsigned long)>
        20eb04:	e2877001 	add	r7, r7, #1	; 0x1
        20eb08:	e2866004 	add	r6, r6, #4	; 0x4
        20eb0c:	e1570004 	cmp	r7, r4
        20eb10:	3afffff8 	bcc	20eaf8 <TEdgeListDomain::FindCorners(TUnit *)+0x50>
        20eb14:	e1a00005 	mov	r0, r5
        20eb18:	e3a01000 	mov	r1, #0	; 0x0
        20eb1c:	eb6572b1 	bl	1b6b5e8 <TStroke::$GetPoint(long)>
        20eb20:	e3a01000 	mov	r1, #0	; 0x0
        20eb24:	e58d1000 	str	r1, [sp]
        20eb28:	e1a0300d 	mov	r3, sp
        20eb2c:	e92d0008 	stmdb	sp!, {r3}
        20eb30:	e2442001 	sub	r2, r4, #1	; 0x1
        20eb34:	e3a03701 	mov	r3, #262144	; 0x40000
        20eb38:	ebfffe2e 	bl	20e3f8 <TDotPrinter::IsProblemResolved(void)+0x8>
        20eb3c:	e3a00008 	mov	r0, #8	; 0x8
        20eb40:	e5bd1004 	ldr	r1, [sp, #4]!
        20eb44:	eb654952 	bl	1b61094 <$Make__7TDArraySFUlT1>
        20eb48:	e1b07000 	movs	r7, r0
        20eb4c:	0a000023 	beq	20ebe0 <TEdgeListDomain::FindCorners(TUnit *)+0x138>
        20eb50:	e1a00005 	mov	r0, r5
        20eb54:	e3a01000 	mov	r1, #0	; 0x0
        20eb58:	eb6572a2 	bl	1b6b5e8 <TStroke::$GetPoint(long)>
        20eb5c:	e1a05000 	mov	r5, r0
        20eb60:	e3a06000 	mov	r6, #0	; 0x0
        20eb64:	e3540000 	cmp	r4, #0	; 0x0
        20eb68:	e58d6000 	str	r6, [sp]
        20eb6c:	9a000015 	bls	20ebc8 <TEdgeListDomain::FindCorners(TUnit *)+0x120>
        20eb70:	e1a00005 	mov	r0, r5
        20eb74:	e3a01002 	mov	r1, #2	; 0x2
        20eb78:	eb657ee1 	bl	1b6e704 <$TestFlag(SamplePt *, unsigned long)>
        20eb7c:	e3300000 	teq	r0, #0	; 0x0
        20eb80:	0a00000c 	beq	20ebb8 <TEdgeListDomain::FindCorners(TUnit *)+0x110>
        20eb84:	e24dd008 	sub	sp, sp, #8	; 0x8
        20eb88:	e1a0100d 	mov	r1, sp
        20eb8c:	e1a00005 	mov	r0, r5
        20eb90:	eb657295 	bl	1b6b5ec <$GetPoint(SamplePt *, FPoint *)>
        20eb94:	e1a0200d 	mov	r2, sp
        20eb98:	e1a00007 	mov	r0, r7
        20eb9c:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        20eba0:	e5973000 	ldr	r3, [r7]
        20eba4:	e1a0e00f 	mov	lr, pc
        20eba8:	e283f020 	add	pc, r3, #32	; 0x20
        20ebac:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        20ebb0:	e2800001 	add	r0, r0, #1	; 0x1
        20ebb4:	e5ad0008 	str	r0, [sp, #8]!	; fField8
        20ebb8:	e2866001 	add	r6, r6, #1	; 0x1
        20ebbc:	e2855004 	add	r5, r5, #4	; 0x4
        20ebc0:	e1560004 	cmp	r6, r4
        20ebc4:	3affffe9 	bcc	20eb70 <TEdgeListDomain::FindCorners(TUnit *)+0xc8>
        20ebc8:	e1a01007 	mov	r1, r7
        20ebcc:	e1a00008 	mov	r0, r8
        20ebd0:	eb654d69 	bl	1b6217c <TEdgeListUnit::$SetInterpretation(TDArray *)>
        20ebd4:	e1a00007 	mov	r0, r7
        20ebd8:	e1a0e00f 	mov	lr, pc
        20ebdc:	e597f000 	ldr	pc, [r7]
        20ebe0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

