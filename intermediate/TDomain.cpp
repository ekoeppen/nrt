#include "DDKIncludes/OS600/UserDomain.h"

/**
 * Symbol: TDomain::__ct(void)
 * Address: 0020cd24
 */
TDomain::TDomain(void) {
    /*
        20cd24:	e1a0c00d 	mov	ip, sp
        20cd28:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        20cd2c:	e24cb004 	sub	fp, ip, #4	; 0x4
        20cd30:	e1b04000 	movs	r4, r0
        20cd34:	1a000003 	bne	20cd48 <TDomain::__ct(void)+0x24>
        20cd38:	e3a00024 	mov	r0, #36	; 0x24
        20cd3c:	eb67067d 	bl	1bce738 <$__nw(unsigned int)>
        20cd40:	e1b04000 	movs	r4, r0
        20cd44:	0a000003 	beq	20cd58 <TDomain::__ct(void)+0x34>
        20cd48:	e1a00004 	mov	r0, r4
        20cd4c:	eb003f0c 	bl	21c984 <TRecObject::__ct(void)>
        20cd50:	e59f0008 	ldr	r0, [pc, #8]	; 20cd60 <TDomain::__ct(void)+0x3c>
        20cd54:	e5840000 	str	r0, [r4]
        20cd58:	e1a00004 	mov	r0, r4
        20cd5c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        20cd60:	0001fbe0 	andeq	pc, r1, r0, ror #23
    */
}

/**
 * Symbol: TDomain::__dt(void)
 * Address: 0020cd64
 */
TDomain::~TDomain(void) {
    /*
        20cd64:	e1a0c00d 	mov	ip, sp
        20cd68:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        20cd6c:	e24cb004 	sub	fp, ip, #4	; 0x4
        20cd70:	e1a04000 	mov	r4, r0
        20cd74:	e1a05001 	mov	r5, r1
        20cd78:	e59f0020 	ldr	r0, [pc, #20]	; 20cda0 <TDomain::__dt(void)+0x3c>
        20cd7c:	e5840000 	str	r0, [r4]
        20cd80:	e1a00004 	mov	r0, r4
        20cd84:	e3a01000 	mov	r1, #0	; 0x0
        20cd88:	eb003f0a 	bl	21c9b8 <TRecObject::__dt(void)>
        20cd8c:	e3150001 	tst	r5, #1	; 0x1
        20cd90:	11a00004 	movne	r0, r4
        20cd94:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        20cd98:	1a670250 	bne	1bcd6e0 <$__dl(void *)>
        20cd9c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        20cda0:	0001fbe0 	andeq	pc, r1, r0, ror #23
    */
}

/**
 * Symbol: TDomain::PreGroup(TUnit *)
 * Address: 0020cda4
 */
TDomain::PreGroup(TUnit *) {
    /*
        20cda4:	e3a00000 	mov	r0, #0	; 0x0
        20cda8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDomain::PruneDictionary(TUnit *)
 * Address: 0020cdac
 */
TDomain::PruneDictionary(TUnit *) {
    /*
        20cdac:	e3a00000 	mov	r0, #0	; 0x0
        20cdb0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDomain::PruneConstraints(TUnit *)
 * Address: 0020cdb4
 */
TDomain::PruneConstraints(TUnit *) {
    /*
        20cdb4:	e3a00000 	mov	r0, #0	; 0x0
        20cdb8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDomain::CompleteUnit(void)
 * Address: 0020cdbc
 */
TDomain::CompleteUnit(void) {
    /*
        20cdbc:	e3a00000 	mov	r0, #0	; 0x0
        20cdc0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDomain::Dump(TMsg *)
 * Address: 0020cdc4
 */
TDomain::Dump(TMsg *) {
    /*
        20cdc4:	e1a0c00d 	mov	ip, sp
        20cdc8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        20cdcc:	e24cb004 	sub	fp, ip, #4	; 0x4
        20cdd0:	e1a04000 	mov	r4, r0
        20cdd4:	e1a05001 	mov	r5, r1
        20cdd8:	e24dd064 	sub	sp, sp, #100	; 0x64
        20cddc:	e5902000 	ldr	r2, [r0]
        20cde0:	e1a0e00f 	mov	lr, pc
        20cde4:	e282f020 	add	pc, r2, #32	; 0x20
        20cde8:	e59f009c 	ldr	r0, [pc, #9c]	; 20ce8c <TDomain::Dump(TMsg *)+0xc8>
        20cdec:	e5900000 	ldr	r0, [r0]
        20cdf0:	e3300000 	teq	r0, #0	; 0x0
        20cdf4:	0a000021 	beq	20ce80 <TDomain::Dump(TMsg *)+0xbc>
        20cdf8:	e1a0000d 	mov	r0, sp
        20cdfc:	e5942004 	ldr	r2, [r4, #4]	; fField4
        20ce00:	e28f1f22 	add	r1, pc, #136	; 0x88
        20ce04:	eb66a322 	bl	1bb5a94 <$sprintf>
        20ce08:	e1a0100d 	mov	r1, sp
        20ce0c:	e1a00005 	mov	r0, r5
        20ce10:	eb65821b 	bl	1b6d684 <TMsg::$MsgStr(char *)>
        20ce14:	e594000c 	ldr	r0, [r4, #12]	; fField12
        20ce18:	e5b0200c 	ldr	r2, [r0, #12]!	; fField12
        20ce1c:	e1a0000d 	mov	r0, sp
        20ce20:	e28f1f1e 	add	r1, pc, #120	; 0x78
        20ce24:	eb66a31a 	bl	1bb5a94 <$sprintf>
        20ce28:	e1a0100d 	mov	r1, sp
        20ce2c:	e1a00005 	mov	r0, r5
        20ce30:	eb658213 	bl	1b6d684 <TMsg::$MsgStr(char *)>
        20ce34:	e3a06000 	mov	r6, #0	; 0x0
        20ce38:	e594000c 	ldr	r0, [r4, #12]	; fField12
        20ce3c:	e590000c 	ldr	r0, [r0, #12]	; fField12
        20ce40:	e3500000 	cmp	r0, #0	; 0x0
        20ce44:	9a00000d 	bls	20ce80 <TDomain::Dump(TMsg *)+0xbc>
        20ce48:	e1a00005 	mov	r0, r5
        20ce4c:	e28f1f18 	add	r1, pc, #96	; 0x60
        20ce50:	eb65820b 	bl	1b6d684 <TMsg::$MsgStr(char *)>
        20ce54:	e1a01006 	mov	r1, r6
        20ce58:	e594000c 	ldr	r0, [r4, #12]	; fField12
        20ce5c:	eb654c4f 	bl	1b5ffa0 <TTypeList::$GetType(unsigned long)>
        20ce60:	e1a01000 	mov	r1, r0
        20ce64:	e1a00005 	mov	r0, r5
        20ce68:	eb658206 	bl	1b6d688 <TMsg::$MsgType(unsigned long)>
        20ce6c:	e2866001 	add	r6, r6, #1	; 0x1
        20ce70:	e594000c 	ldr	r0, [r4, #12]	; fField12
        20ce74:	e590000c 	ldr	r0, [r0, #12]	; fField12
        20ce78:	e1500006 	cmp	r0, r6
        20ce7c:	8afffff1 	bhi	20ce48 <TDomain::Dump(TMsg *)+0x84>
        20ce80:	e1a00005 	mov	r0, r5
        20ce84:	eb657dfb 	bl	1b6c678 <TMsg::$MsgLF(void)>
        20ce88:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        20ce8c:	0c101160 	ldfeqs	f1, [r0], -#384
        20ce90:	0d09466c 	stceq	6, cr4, [r9, -#432]
        20ce94:	6167733a 	cmnvs	r7, sl, lsr r3
        20ce98:	2020256c 	eorcs	r2, r0, ip, ror #10
        20ce9c:	64200d00 	strvst	r0, [r0], -#3328
        20cea0:	2020256c 	eorcs	r2, r0, ip, ror #10
        20cea4:	64205069 	strvst	r5, [r0], -#105
        20cea8:	65636554 	strvsb	r6, [r3, -#1364]!
        20ceac:	79706573 	ldmvcdb	r0!, {r0, r1, r4, r5, r6, r8, sl, sp, lr}^
        20ceb0:	200d0000 	andcs	r0, sp, r0
        20ceb4:	20200000 	eorcs	r0, r0, r0
    */
}

/**
 * Symbol: TDomain::DumpName(TMsg *)
 * Address: 0020ceb8
 */
TDomain::DumpName(TMsg *) {
    /*
        20ceb8:	e1a0c00d 	mov	ip, sp
        20cebc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        20cec0:	e24cb004 	sub	fp, ip, #4	; 0x4
        20cec4:	e1a05000 	mov	r5, r0
        20cec8:	e1a04001 	mov	r4, r1
        20cecc:	e24dd064 	sub	sp, sp, #100	; 0x64
        20ced0:	e5902014 	ldr	r2, [r0, #20]
        20ced4:	e1a0000d 	mov	r0, sp
        20ced8:	e28f1f0a 	add	r1, pc, #40	; 0x28
        20cedc:	eb66a2ec 	bl	1bb5a94 <$sprintf>
        20cee0:	e1a0100d 	mov	r1, sp
        20cee4:	e1a00004 	mov	r0, r4
        20cee8:	eb6581e5 	bl	1b6d684 <TMsg::$MsgStr(char *)>
        20ceec:	e1a00004 	mov	r0, r4
        20cef0:	e3a01028 	mov	r1, #40	; 0x28
        20cef4:	eb657ddc 	bl	1b6c66c <TMsg::$MsgChar(char)>
        20cef8:	e1a00004 	mov	r0, r4
        20cefc:	e5b51010 	ldr	r1, [r5, #16]!	; fField16
        20cf00:	eb6581e0 	bl	1b6d688 <TMsg::$MsgType(unsigned long)>
        20cf04:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        20cf08:	444f4d41 	strmib	r4, [pc], #d41	; 20cf10 <TDomain::DumpName(TMsg *)+0x58>
        20cf0c:	494e3a20 	stmmidb	lr, {r5, r9, fp, ip, sp}^
        20cf10:	25732000 	ldrcsb	r2, [r3]!
    */
}

/**
 * Symbol: TDomain::SetParameters(char **)
 * Address: 0020cf14
 */
TDomain::SetParameters(char **) {
    /*
        20cf14:	e5902020 	ldr	r2, [r0, #32]	; fField32
        20cf18:	e1320001 	teq	r2, r1
        20cf1c:	15a01020 	strne	r1, [r0, #32]!	; fField32
        20cf20:	13a00001 	movne	r0, #1	; 0x1
        20cf24:	03a00000 	moveq	r0, #0	; 0x0
        20cf28:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDomain::InvalParameters(void)
 * Address: 0020cf2c
 */
TDomain::InvalParameters(void) {
    /*
        20cf2c:	e3e01000 	mvn	r1, #0	; 0x0
        20cf30:	e5a01020 	str	r1, [r0, #32]!	; fField32
        20cf34:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDomain::DomainParameter(unsigned long, unsigned long, unsigned long)
 * Address: 0020cf38
 */
TDomain::DomainParameter(unsigned long, unsigned long, unsigned long) {
    /*
        20cf38:	e1a0c00d 	mov	ip, sp
        20cf3c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        20cf40:	e24cb004 	sub	fp, ip, #4	; 0x4
        20cf44:	e1a05001 	mov	r5, r1
        20cf48:	e1a04002 	mov	r4, r2
        20cf4c:	e28f0f04 	add	r0, pc, #16	; 0x10
        20cf50:	eb67924a 	bl	1bf1880 <$printf>
        20cf54:	e3a00000 	mov	r0, #0	; 0x0
        20cf58:	e3350000 	teq	r5, #0	; 0x0
        20cf5c:	05840000 	streq	r0, [r4]
        20cf60:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        20cf64:	446f6d61 	strmibt	r6, [pc], #d61	; 20cf6c <TDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x34>
        20cf68:	696e5061 	stmvsdb	lr!, {r0, r5, r6, ip, lr}^
        20cf6c:	72616d65 	rsbvc	r6, r1, #6464	; 0x1940
        20cf70:	74657228 	strvcbt	r7, [r5], -#552
        20cf74:	256c642c 	strcsb	r6, [ip, -#1068]!
        20cf78:	20256c64 	eorcs	r6, r5, r4, ror #24
        20cf7c:	2c20256c 	stccs	5, cr2, [r0], -#432
        20cf80:	64290d00 	strvst	r0, [r9], -#3328
    */
}

/**
 * Symbol: TDomain::ConfigureSubDomain(TRecArea *)
 * Address: 0020cf84
 */
TDomain::ConfigureSubDomain(TRecArea *) {
    /*
        20cf84:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: Make__7TDomainSFP11TControllerUlPc
 * Address: 0020cf88
 */
void TDomain::Make() {
    /*
        20cf88:	e1a0c00d 	mov	ip, sp
        20cf8c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        20cf90:	e24cb004 	sub	fp, ip, #4	; 0x4
        20cf94:	e1a06000 	mov	r6, r0
        20cf98:	e1a05001 	mov	r5, r1
        20cf9c:	e1a04002 	mov	r4, r2
        20cfa0:	e3a00000 	mov	r0, #0	; 0x0
        20cfa4:	eb653767 	bl	1b5ad48 <TDomain::$__ct(void)>
        20cfa8:	e1a07000 	mov	r7, r0
        20cfac:	e1a03004 	mov	r3, r4
        20cfb0:	e1a02005 	mov	r2, r5
        20cfb4:	e1a01006 	mov	r1, r6
        20cfb8:	eb654c0e 	bl	1b5fff8 <TDomain::$IDomain(TController *, unsigned long, char *)>
        20cfbc:	e1a00007 	mov	r0, r7
        20cfc0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: VUnitInClass__7TDomainSFUlT1
 * Address: 0020cfc4
 */
void TDomain::VUnitInClass() {
    /*
        20cfc4:	e59fc02c 	ldr	ip, [pc, #2c]	; 20cff8 <VUnitInClass__7TDomainSFUlT1+0x34>
        20cfc8:	e131000c 	teq	r1, ip
        20cfcc:	1a000007 	bne	20cff0 <VUnitInClass__7TDomainSFUlT1+0x2c>
        20cfd0:	e59fc024 	ldr	ip, [pc, #24]	; 20cffc <VUnitInClass__7TDomainSFUlT1+0x38>
        20cfd4:	e130000c 	teq	r0, ip
        20cfd8:	159fc020 	ldrne	ip, [pc, #20]	; 20d000 <VUnitInClass__7TDomainSFUlT1+0x3c>
        20cfdc:	1130000c 	teqne	r0, ip
        20cfe0:	159fc01c 	ldrne	ip, [pc, #1c]	; 20d004 <VUnitInClass__7TDomainSFUlT1+0x40>
        20cfe4:	1130000c 	teqne	r0, ip
        20cfe8:	03a00001 	moveq	r0, #1	; 0x1
        20cfec:	01a0f00e 	moveq	pc, lr
        20cff0:	e3a00000 	mov	r0, #0	; 0x0
        20cff4:	e1a0f00e 	mov	pc, lr
        20cff8:	574f5244 	strplb	r5, [pc, -r4, asr #4]	; fField4
        20cffc:	58525752 	ldmplda	r2, {r1, r4, r6, r8, r9, sl, ip, lr}^
        20d000:	4b414e4a 	blmi	1260930 <ROM$$Size+0xb40ce4>
        20d004:	57524543 	ldrplb	r4, [r2, -r3, asr #10]
    */
}

/**
 * Symbol: TDomain::IDomain(TController *, unsigned long, char *)
 * Address: 0020d008
 */
TDomain::IDomain(TController *, unsigned long, char *) {
    /*
        20d008:	e1a0c00d 	mov	ip, sp
        20d00c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        20d010:	e24cb004 	sub	fp, ip, #4	; 0x4
        20d014:	e1a04000 	mov	r4, r0
        20d018:	e3a05000 	mov	r5, #0	; 0x0
        20d01c:	e5805004 	str	r5, [r0, #4]	; fField4
        20d020:	e5801008 	str	r1, [r0, #8]
        20d024:	e2800010 	add	r0, r0, #16	; 0x10
        20d028:	e880002c 	stmia	r0, {r2, r3, r5}
        20d02c:	e580500c 	str	r5, [r0, #12]	; fField12
        20d030:	e2400010 	sub	r0, r0, #16	; 0x10
        20d034:	eb65501b 	bl	1b610a8 <$Make__9TTypeListSFv>
        20d038:	e584000c 	str	r0, [r4, #12]	; fField12
        20d03c:	e5845020 	str	r5, [r4, #32]	; fField32
        20d040:	e1a00004 	mov	r0, r4
        20d044:	e59f1004 	ldr	r1, [pc, #4]	; 20d050 <TDomain::IDomain(TController *, unsigned long, char *)+0x48>	; fField4
        20d048:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        20d04c:	eafc3a01 	b	11b858 <NamePtr(char *, unsigned long)>
        20d050:	54446f6d 	strplb	r6, [r4], -#3949	; fField3949
    */
}

/**
 * Symbol: TDomain::Dispose(void)
 * Address: 0020d054
 */
TDomain::Dispose(void) {
    /*
        20d054:	e1a0c00d 	mov	ip, sp
        20d058:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        20d05c:	e24cb004 	sub	fp, ip, #4	; 0x4
        20d060:	e1a04000 	mov	r4, r0
        20d064:	e590000c 	ldr	r0, [r0, #12]	; fField12
        20d068:	e1a0e00f 	mov	lr, pc
        20d06c:	e590f000 	ldr	pc, [r0]
        20d070:	e1b00004 	movs	r0, r4
        20d074:	13a01001 	movne	r1, #1	; 0x1
        20d078:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        20d07c:	1a653733 	bne	1b5ad50 <TDomain::$__dt(void)>
        20d080:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TDomain::SizeInBytes(void)
 * Address: 0020d084
 */
TDomain::SizeInBytes(void) {
    /*
        20d084:	e1a0c00d 	mov	ip, sp
        20d088:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        20d08c:	e24cb004 	sub	fp, ip, #4	; 0x4
        20d090:	e1a04000 	mov	r4, r0
        20d094:	eb655841 	bl	1b631a0 <TRecObject::$SizeInBytes(void)>
        20d098:	e5b4100c 	ldr	r1, [r4, #12]!	; fField12
        20d09c:	e1a04000 	mov	r4, r0
        20d0a0:	e1a00001 	mov	r0, r1
        20d0a4:	e5911000 	ldr	r1, [r1]
        20d0a8:	e1a0e00f 	mov	lr, pc
        20d0ac:	e281f008 	add	pc, r1, #8	; 0x8
        20d0b0:	e0840000 	add	r0, r4, r0
        20d0b4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TDomain::AddPieceType(unsigned long)
 * Address: 0020d0b8
 */
TDomain::AddPieceType(unsigned long) {
    /*
        20d0b8:	e1a0c00d 	mov	ip, sp
        20d0bc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        20d0c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        20d0c4:	e1a04000 	mov	r4, r0
        20d0c8:	e590000c 	ldr	r0, [r0, #12]	; fField12
        20d0cc:	eb653b31 	bl	1b5bd98 <TTypeList::$AddUnique(unsigned long)>
        20d0d0:	e5b4000c 	ldr	r0, [r4, #12]!	; fField12
        20d0d4:	e5901000 	ldr	r1, [r0]
        20d0d8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        20d0dc:	e281f024 	add	pc, r1, #36	; 0x24
    */
}

/**
 * Symbol: TDomain::Classify(TUnit *)
 * Address: 0020d0e0
 */
TDomain::Classify(TUnit *) {
    /*
        20d0e0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDomain::Reclassify(TUnit *)
 * Address: 0020d0e4
 */
TDomain::Reclassify(TUnit *) {
    /*
        20d0e4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDomain::Group(TUnit *, dInfoRec *)
 * Address: 0020d0e8
 */
TDomain::Group(TUnit *, dInfoRec *) {
    /*
        20d0e8:	e3a00000 	mov	r0, #0	; 0x0
        20d0ec:	e1a0f00e 	mov	pc, lr
    */
}

