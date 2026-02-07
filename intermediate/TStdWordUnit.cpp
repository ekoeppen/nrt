#include "include/TStdWordUnit.h"

/**
 * Symbol: TStdWordUnit::IStdWordUnit(TDomain *, unsigned long, TArray *, unsigned long)
 * Address: 0021f67c
 */
TStdWordUnit::IStdWordUnit(TDomain *, unsigned long, TArray *, unsigned long) {
    /*
        21f67c:	e1a0c00d 	mov	ip, sp
        21f680:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        21f684:	e24cb004 	sub	fp, ip, #4	; 0x4
        21f688:	e1a0c002 	mov	ip, r2
        21f68c:	e1a02003 	mov	r2, r3
        21f690:	e59b3004 	ldr	r3, [fp, #4]
        21f694:	e92d000c 	stmdb	sp!, {r2, r3}
        21f698:	e1a0300c 	mov	r3, ip
        21f69c:	e5912010 	ldr	r2, [r1, #16]
        21f6a0:	eb650269 	bl	1b6004c <TSIUnit::$ISIUnit(TDomain *, unsigned long, unsigned long, TArray *, unsigned long)>
        21f6a4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TStdWordUnit::GetParam(unsigned long)
 * Address: 0021f93c
 */
TStdWordUnit::GetParam(unsigned long) {
    /*
        21f93c:	e3a00000 	mov	r0, #0	; 0x0
        21f940:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TStdWordUnit::SetParam(UnitInterpretation *, unsigned long, char *)
 * Address: 0021f944
 */
TStdWordUnit::SetParam(UnitInterpretation *, unsigned long, char *) {
    /*
        21f944:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TStdWordUnit::GetWordBase(FPoint *, FPoint *, unsigned long)
 * Address: 0021f948
 */
TStdWordUnit::GetWordBase(FPoint *, FPoint *, unsigned long) {
    /*
        21f948:	e1a0c00d 	mov	ip, sp
        21f94c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        21f950:	e24cb004 	sub	fp, ip, #4	; 0x4
        21f954:	e1a05001 	mov	r5, r1
        21f958:	e1a04002 	mov	r4, r2
        21f95c:	e24dd010 	sub	sp, sp, #16	; 0x10
        21f960:	e1a0100d 	mov	r1, sp
        21f964:	eb651647 	bl	1b65288 <TUnit::$GetBBox(FRect *)>
        21f968:	e59d0000 	ldr	r0, [sp]
        21f96c:	e5850000 	str	r0, [r5]
        21f970:	e59d0008 	ldr	r0, [sp, #8]
        21f974:	e5840000 	str	r0, [r4]
        21f978:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        21f97c:	e5a40004 	str	r0, [r4, #4]!
        21f980:	e5a50004 	str	r0, [r5, #4]!
        21f984:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TStdWordUnit::GetWordSlant(unsigned long)
 * Address: 0021f988
 */
TStdWordUnit::GetWordSlant(unsigned long) {
    /*
        21f988:	e3a00000 	mov	r0, #0	; 0x0
        21f98c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TStdWordUnit::GetWordSize(unsigned long)
 * Address: 0021f990
 */
TStdWordUnit::GetWordSize(unsigned long) {
    /*
        21f990:	e3a00000 	mov	r0, #0	; 0x0
        21f994:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TStdWordUnit::EndUnit(void)
 * Address: 0021f998
 */
TStdWordUnit::EndUnit(void) {
    /*
        21f998:	e1a0c00d 	mov	ip, sp
        21f99c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        21f9a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        21f9a4:	e1a04000 	mov	r4, r0
        21f9a8:	e5901000 	ldr	r1, [r0]
        21f9ac:	e1a0e00f 	mov	lr, pc
        21f9b0:	e281f060 	add	pc, r1, #96	; 0x60
        21f9b4:	e1a00004 	mov	r0, r4
        21f9b8:	e5941000 	ldr	r1, [r4]
        21f9bc:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        21f9c0:	e281f080 	add	pc, r1, #128	; 0x80
    */
}

/**
 * Symbol: TStdWordUnit::ReinforceWordChoice(long)
 * Address: 0021f9c4
 */
TStdWordUnit::ReinforceWordChoice(long) {
    /*
        21f9c4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TStdWordUnit::SizeInBytes(void)
 * Address: 0021f9c8
 */
TStdWordUnit::SizeInBytes(void) {
    /*
        21f9c8:	e1a0c00d 	mov	ip, sp
        21f9cc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        21f9d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        21f9d4:	e1a04000 	mov	r4, r0
        21f9d8:	e3a06000 	mov	r6, #0	; 0x0
        21f9dc:	e5901000 	ldr	r1, [r0]
        21f9e0:	e1a0e00f 	mov	lr, pc
        21f9e4:	e281f020 	add	pc, r1, #32	; 0x20
        21f9e8:	e1a07000 	mov	r7, r0
        21f9ec:	e3a05000 	mov	r5, #0	; 0x0
        21f9f0:	e3500000 	cmp	r0, #0	; 0x0
        21f9f4:	9a00000b 	bls	21fa28 <TStdWordUnit::SizeInBytes(void)+0x60>
        21f9f8:	e1a01005 	mov	r1, r5
        21f9fc:	e1a00004 	mov	r0, r4
        21fa00:	e5942000 	ldr	r2, [r4]
        21fa04:	e1a0e00f 	mov	lr, pc
        21fa08:	e282f0bc 	add	pc, r2, #188	; 0xbc
        21fa0c:	e3300000 	teq	r0, #0	; 0x0
        21fa10:	0a000001 	beq	21fa1c <TStdWordUnit::SizeInBytes(void)+0x54>
        21fa14:	eb653737 	bl	1b6d6f8 <$SizeOfHandle(char **)>
        21fa18:	e0806006 	add	r6, r0, r6
        21fa1c:	e2855001 	add	r5, r5, #1	; 0x1
        21fa20:	e1550007 	cmp	r5, r7
        21fa24:	3afffff3 	bcc	21f9f8 <TStdWordUnit::SizeInBytes(void)+0x30>
        21fa28:	e1a00004 	mov	r0, r4
        21fa2c:	eb650de0 	bl	1b631b4 <TSIUnit::$SizeInBytes(void)>
        21fa30:	e0800006 	add	r0, r0, r6
        21fa34:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TStdWordUnit::GetTrainingData(long)
 * Address: 0021fa38
 */
TStdWordUnit::GetTrainingData(long) {
    /*
        21fa38:	e3a00000 	mov	r0, #0	; 0x0
        21fa3c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TStdWordUnit::DisposeTrainingData(char **)
 * Address: 0021fa40
 */
TStdWordUnit::DisposeTrainingData(char **) {
    /*
        21fa40:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TStdWordUnit::GetString(unsigned long)
 * Address: 0021fa44
 */
TStdWordUnit::GetString(unsigned long) {
    /*
        21fa44:	e1a0c00d 	mov	ip, sp
        21fa48:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        21fa4c:	e24cb004 	sub	fp, ip, #4	; 0x4
        21fa50:	e5902000 	ldr	r2, [r0]
        21fa54:	e1a0e00f 	mov	lr, pc
        21fa58:	e282f068 	add	pc, r2, #104	; 0x68
        21fa5c:	e3300000 	teq	r0, #0	; 0x0
        21fa60:	03a00000 	moveq	r0, #0	; 0x0
        21fa64:	1590000c 	ldrne	r0, [r0, #12]	; fField12
        21fa68:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TStdWordUnit::SetWordString(unsigned long, unsigned short *)
 * Address: 0021fa6c
 */
TStdWordUnit::SetWordString(unsigned long, unsigned short *) {
    /*
        21fa6c:	e1a0c00d 	mov	ip, sp
        21fa70:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        21fa74:	e24cb004 	sub	fp, ip, #4	; 0x4
        21fa78:	e1a04002 	mov	r4, r2
        21fa7c:	e5902000 	ldr	r2, [r0]
        21fa80:	e1a0e00f 	mov	lr, pc
        21fa84:	e282f0bc 	add	pc, r2, #188	; 0xbc
        21fa88:	e1b05000 	movs	r5, r0
        21fa8c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        21fa90:	e1a00004 	mov	r0, r4
        21fa94:	eb673b31 	bl	1bee760 <$Ustrlen>
        21fa98:	e3a01002 	mov	r1, #2	; 0x2
        21fa9c:	e0811080 	add	r1, r1, r0, lsl #1
        21faa0:	e1a00005 	mov	r0, r5
        21faa4:	eb653702 	bl	1b6d6b4 <$ResizeHandle(char **, long)>
        21faa8:	e3300000 	teq	r0, #0	; 0x0
        21faac:	01a01004 	moveq	r1, r4
        21fab0:	05950000 	ldreq	r0, [r5]
        21fab4:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
        21fab8:	0a673b27 	beq	1bee75c <$Ustrcpy>
        21fabc:	e3a00000 	mov	r0, #0	; 0x0
        21fac0:	e5951000 	ldr	r1, [r5]
        21fac4:	e5c10001 	strb	r0, [r1, #1]
        21fac8:	e5c10000 	strb	r0, [r1]
        21facc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TStdWordUnit::SetCharWordString(unsigned long, char *)
 * Address: 0021fad0
 */
TStdWordUnit::SetCharWordString(unsigned long, char *) {
    /*
        21fad0:	e1a0c00d 	mov	ip, sp
        21fad4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        21fad8:	e24cb004 	sub	fp, ip, #4	; 0x4
        21fadc:	e1a04002 	mov	r4, r2
        21fae0:	e5902000 	ldr	r2, [r0]
        21fae4:	e1a0e00f 	mov	lr, pc
        21fae8:	e282f0bc 	add	pc, r2, #188	; 0xbc
        21faec:	e1b05000 	movs	r5, r0
        21faf0:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        21faf4:	e1a00004 	mov	r0, r4
        21faf8:	eb650db0 	bl	1b631c0 <$StringLength(char *)>
        21fafc:	e2800001 	add	r0, r0, #1	; 0x1
        21fb00:	e1a01080 	mov	r1, r0, lsl #1
        21fb04:	e1a00005 	mov	r0, r5
        21fb08:	eb6536e9 	bl	1b6d6b4 <$ResizeHandle(char **, long)>
        21fb0c:	e3300000 	teq	r0, #0	; 0x0
        21fb10:	0a000004 	beq	21fb28 <TStdWordUnit::SetCharWordString(unsigned long, char *)+0x58>
        21fb14:	e3a00000 	mov	r0, #0	; 0x0
        21fb18:	e5951000 	ldr	r1, [r5]
        21fb1c:	e5c10001 	strb	r0, [r1, #1]
        21fb20:	e5c10000 	strb	r0, [r1]
        21fb24:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        21fb28:	e1a00004 	mov	r0, r4
        21fb2c:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
        21fb30:	e3a02001 	mov	r2, #1	; 0x1
        21fb34:	e5951000 	ldr	r1, [r5]
        21fb38:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        21fb3c:	ea671e10 	b	1be7384 <$ConvertToUnicode__FPCvPUslT3>
    */
}

/**
 * Symbol: TStdWordUnit::Dump(TMsg *)
 * Address: 0021fb40
 */
TStdWordUnit::Dump(TMsg *) {
    /*
        21fb40:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TStdWordUnit::AddWordInterpretation(void)
 * Address: 0021fb44
 */
TStdWordUnit::AddWordInterpretation(void) {
    /*
        21fb44:	e3a01902 	mov	r1, #32768	; 0x8000
        21fb48:	e2411001 	sub	r1, r1, #1	; 0x1
        21fb4c:	e5902000 	ldr	r2, [r0]
        21fb50:	e282f0b0 	add	pc, r2, #176	; 0xb0
    */
}

/**
 * Symbol: TStdWordUnit::InsertWordInterpretation(unsigned long)
 * Address: 0021fb54
 */
TStdWordUnit::InsertWordInterpretation(unsigned long) {
    /*
        21fb54:	e1a0c00d 	mov	ip, sp
        21fb58:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        21fb5c:	e24cb004 	sub	fp, ip, #4	; 0x4
        21fb60:	e1a05000 	mov	r5, r0
        21fb64:	e1a04001 	mov	r4, r1
        21fb68:	e3a00014 	mov	r0, #20	; 0x14
        21fb6c:	eb6532ba 	bl	1b6c65c <$MakeHandle(long)>
        21fb70:	e1a06000 	mov	r6, r0
        21fb74:	e59f10a0 	ldr	r1, [pc, #a0]	; 21fc1c <TStdWordUnit::InsertWordInterpretation(unsigned long)+0xc8>
        21fb78:	eb6536c3 	bl	1b6d68c <$NameHandle(char **, unsigned long)>
        21fb7c:	e3e07000 	mvn	r7, #0	; 0x0
        21fb80:	e3360000 	teq	r6, #0	; 0x0
        21fb84:	0a000025 	beq	21fc20 <TStdWordUnit::InsertWordInterpretation(unsigned long)+0xcc>
        21fb88:	e1a01004 	mov	r1, r4
        21fb8c:	e1a00005 	mov	r0, r5
        21fb90:	e5952000 	ldr	r2, [r5]
        21fb94:	e1a0e00f 	mov	lr, pc
        21fb98:	e282f074 	add	pc, r2, #116	; 0x74
        21fb9c:	e1a04000 	mov	r4, r0
        21fba0:	e1a01000 	mov	r1, r0
        21fba4:	e1a00005 	mov	r0, r5
        21fba8:	e5952000 	ldr	r2, [r5]
        21fbac:	e1a0e00f 	mov	lr, pc
        21fbb0:	e282f068 	add	pc, r2, #104	; 0x68
        21fbb4:	e1b08000 	movs	r8, r0
        21fbb8:	0a000018 	beq	21fc20 <TStdWordUnit::InsertWordInterpretation(unsigned long)+0xcc>
        21fbbc:	e1a00005 	mov	r0, r5
        21fbc0:	e5951000 	ldr	r1, [r5]
        21fbc4:	e1a0e00f 	mov	lr, pc
        21fbc8:	e281f078 	add	pc, r1, #120	; 0x78
        21fbcc:	e1a00008 	mov	r0, r8
        21fbd0:	e3a02000 	mov	r2, #0	; 0x0
        21fbd4:	e3a01000 	mov	r1, #0	; 0x0
        21fbd8:	eb65010d 	bl	1b60014 <$InitInterpretation__FP18UnitInterpretationUlT2>
        21fbdc:	e3a00000 	mov	r0, #0	; 0x0
        21fbe0:	e5961000 	ldr	r1, [r6]
        21fbe4:	e5c10001 	strb	r0, [r1, #1]
        21fbe8:	e5c10000 	strb	r0, [r1]
        21fbec:	e1a01004 	mov	r1, r4
        21fbf0:	e1a00005 	mov	r0, r5
        21fbf4:	e5952000 	ldr	r2, [r5]
        21fbf8:	e1a0e00f 	mov	lr, pc
        21fbfc:	e282f068 	add	pc, r2, #104	; 0x68
        21fc00:	e5a0600c 	str	r6, [r0, #12]!	; fField12
        21fc04:	e1a00005 	mov	r0, r5
        21fc08:	e5951000 	ldr	r1, [r5]
        21fc0c:	e1a0e00f 	mov	lr, pc
        21fc10:	e281f07c 	add	pc, r1, #124	; 0x7c
        21fc14:	e1a00004 	mov	r0, r4
        21fc18:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        21fc1c:	69737472 	ldmvsdb	r3!, {r1, r4, r5, r6, sl, ip, sp, lr}^
        21fc20:	e1a00007 	mov	r0, r7
        21fc24:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TStdWordUnit::DeleteInterpretation(unsigned long)
 * Address: 0021fc28
 */
TStdWordUnit::DeleteInterpretation(unsigned long) {
    /*
        21fc28:	e1a0c00d 	mov	ip, sp
        21fc2c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        21fc30:	e24cb004 	sub	fp, ip, #4	; 0x4
        21fc34:	e1a05000 	mov	r5, r0
        21fc38:	e1a04001 	mov	r4, r1
        21fc3c:	e5902000 	ldr	r2, [r0]
        21fc40:	e1a0e00f 	mov	lr, pc
        21fc44:	e282f068 	add	pc, r2, #104	; 0x68
        21fc48:	e1b06000 	movs	r6, r0
        21fc4c:	03a00000 	moveq	r0, #0	; 0x0
        21fc50:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        21fc54:	e596000c 	ldr	r0, [r6, #12]	; fField12
        21fc58:	e3300000 	teq	r0, #0	; 0x0
        21fc5c:	1b652e4d 	blne	1b6b598 <$DeleteHandle(char **)>
        21fc60:	e3e00000 	mvn	r0, #0	; 0x0
        21fc64:	e1a01004 	mov	r1, r4
        21fc68:	e5860000 	str	r0, [r6]
        21fc6c:	e1a00005 	mov	r0, r5
        21fc70:	eb64f47e 	bl	1b5ce70 <TSIUnit::$DeleteInterpretation(unsigned long)>
        21fc74:	e3a00001 	mov	r0, #1	; 0x1
        21fc78:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

