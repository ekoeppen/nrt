#include "include/TEdgeListUnit.h"

/**
 * Symbol: Make__13TEdgeListUnitSFP7TDomainUlP6TArray
 * Address: 0020ed90
 */
void TEdgeListUnit::Make() {
    /*
        20ed90:	e1a0c00d 	mov	ip, sp
        20ed94:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        20ed98:	e24cb004 	sub	fp, ip, #4	; 0x4
        20ed9c:	e1a06000 	mov	r6, r0
        20eda0:	e1a05001 	mov	r5, r1
        20eda4:	e1a04002 	mov	r4, r2
        20eda8:	e3a00054 	mov	r0, #84	; 0x54
        20edac:	eb66fe61 	bl	1bce738 <$__nw(unsigned int)>
        20edb0:	e1b07000 	movs	r7, r0
        20edb4:	0a000003 	beq	20edc8 <Make__13TEdgeListUnitSFP7TDomainUlP6TArray+0x38>
        20edb8:	e1a00007 	mov	r0, r7
        20edbc:	eb652fe2 	bl	1b5ad4c <TSIUnit::$__ct(void)>
        20edc0:	e59f003c 	ldr	r0, [pc, #3c]	; 20ee04 <Make__13TEdgeListUnitSFP7TDomainUlP6TArray+0x74>
        20edc4:	e5870000 	str	r0, [r7]
        20edc8:	e3370000 	teq	r7, #0	; 0x0
        20edcc:	0a00000a 	beq	20edfc <Make__13TEdgeListUnitSFP7TDomainUlP6TArray+0x6c>
        20edd0:	e1a03004 	mov	r3, r4
        20edd4:	e1a02005 	mov	r2, r5
        20edd8:	e1a01006 	mov	r1, r6
        20eddc:	e1a00007 	mov	r0, r7
        20ede0:	eb654486 	bl	1b60000 <TEdgeListUnit::$IEdgeListUnit(TDomain *, unsigned long, TArray *)>
        20ede4:	e3300000 	teq	r0, #0	; 0x0
        20ede8:	0a000003 	beq	20edfc <Make__13TEdgeListUnitSFP7TDomainUlP6TArray+0x6c>
        20edec:	e1a00007 	mov	r0, r7
        20edf0:	e1a0e00f 	mov	lr, pc
        20edf4:	e597f000 	ldr	pc, [r7]
        20edf8:	e3a07000 	mov	r7, #0	; 0x0
        20edfc:	e1a00007 	mov	r0, r7
        20ee00:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        20ee04:	0001cb04 	andeq	ip, r1, r4, lsl #22
    */
}

/**
 * Symbol: TEdgeListUnit::IEdgeListUnit(TDomain *, unsigned long, TArray *)
 * Address: 0020ee08
 */
TEdgeListUnit::IEdgeListUnit(TDomain *, unsigned long, TArray *) {
    /*
        20ee08:	e1a0c00d 	mov	ip, sp
        20ee0c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        20ee10:	e24cb004 	sub	fp, ip, #4	; 0x4
        20ee14:	e1a04000 	mov	r4, r0
        20ee18:	e1a07001 	mov	r7, r1
        20ee1c:	e1a06002 	mov	r6, r2
        20ee20:	e1a05003 	mov	r5, r3
        20ee24:	e59f8040 	ldr	r8, [pc, #40]	; 20ee6c <TEdgeListUnit::IEdgeListUnit(TDomain *, unsigned long, TArray *)+0x64>
        20ee28:	e2800044 	add	r0, r0, #68	; 0x44
        20ee2c:	e3a02000 	mov	r2, #0	; 0x0
        20ee30:	e3a01000 	mov	r1, #0	; 0x0
        20ee34:	eb654476 	bl	1b60014 <$InitInterpretation__FP18UnitInterpretationUlT2>
        20ee38:	e3a00001 	mov	r0, #1	; 0x1
        20ee3c:	e3a03010 	mov	r3, #16	; 0x10
        20ee40:	e1a02005 	mov	r2, r5
        20ee44:	e5840040 	str	r0, [r4, #64]	; fField64
        20ee48:	e92d000c 	stmdb	sp!, {r2, r3}
        20ee4c:	e1a03006 	mov	r3, r6
        20ee50:	e1a02008 	mov	r2, r8
        20ee54:	e1a01007 	mov	r1, r7
        20ee58:	e1a00004 	mov	r0, r4
        20ee5c:	eb65447a 	bl	1b6004c <TSIUnit::$ISIUnit(TDomain *, unsigned long, unsigned long, TArray *, unsigned long)>
        20ee60:	e3a01000 	mov	r1, #0	; 0x0
        20ee64:	e5a4103c 	str	r1, [r4, #60]!	; fField60
        20ee68:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        20ee6c:	53435242 	cmppl	r3, #536870916	; 0x20000004
    */
}

/**
 * Symbol: TEdgeListUnit::SetInterpretation(TDArray *)
 * Address: 0020ee70
 */
TEdgeListUnit::SetInterpretation(TDArray *) {
    /*
        20ee70:	e1a0c00d 	mov	ip, sp
        20ee74:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        20ee78:	e24cb004 	sub	fp, ip, #4	; 0x4
        20ee7c:	e1a04000 	mov	r4, r0
        20ee80:	e1a05001 	mov	r5, r1
        20ee84:	e1a00001 	mov	r0, r1
        20ee88:	eb6537e5 	bl	1b5ce24 <TArray::$Clone(void)>
        20ee8c:	e584503c 	str	r5, [r4, #60]	; fField60
        20ee90:	e1a00004 	mov	r0, r4
        20ee94:	e5941000 	ldr	r1, [r4]
        20ee98:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        20ee9c:	e281f0a8 	add	pc, r1, #168	; 0xa8
    */
}

/**
 * Symbol: TEdgeListUnit::EndUnit(void)
 * Address: 0020eea0
 */
TEdgeListUnit::EndUnit(void) {
    /*
        20eea0:	e1a0c00d 	mov	ip, sp
        20eea4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        20eea8:	e24cb004 	sub	fp, ip, #4	; 0x4
        20eeac:	e1a04000 	mov	r4, r0
        20eeb0:	eb654026 	bl	1b5ef50 <TEdgeListUnit::$GetCorners(void)>
        20eeb4:	e3300000 	teq	r0, #0	; 0x0
        20eeb8:	15901000 	ldrne	r1, [r0]
        20eebc:	11a0e00f 	movne	lr, pc
        20eec0:	1281f024 	addne	pc, r1, #36	; 0x24
        20eec4:	e1a00004 	mov	r0, r4
        20eec8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        20eecc:	ea65400d 	b	1b5ef08 <TSIUnit::$EndUnit(void)>
    */
}

/**
 * Symbol: TEdgeListUnit::Dump(TMsg *)
 * Address: 0020eed0
 */
TEdgeListUnit::Dump(TMsg *) {
    /*
        20eed0:	e1a0c00d 	mov	ip, sp
        20eed4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        20eed8:	e24cb004 	sub	fp, ip, #4	; 0x4
        20eedc:	e1a05000 	mov	r5, r0
        20eee0:	e1a04001 	mov	r4, r1
        20eee4:	e24ddc01 	sub	sp, sp, #256	; 0x100
        20eee8:	eb654018 	bl	1b5ef50 <TEdgeListUnit::$GetCorners(void)>
        20eeec:	e1a06000 	mov	r6, r0
        20eef0:	e1a00004 	mov	r0, r4
        20eef4:	e28f1f0f 	add	r1, pc, #60	; 0x3c
        20eef8:	eb6579e1 	bl	1b6d684 <TMsg::$MsgStr(char *)>
        20eefc:	e1a01004 	mov	r1, r4
        20ef00:	e1a00005 	mov	r0, r5
        20ef04:	eb653bf5 	bl	1b5dee0 <TSIUnit::$Dump(TMsg *)>
        20ef08:	e3360000 	teq	r6, #0	; 0x0
        20ef0c:	0a000006 	beq	20ef2c <TEdgeListUnit::Dump(TMsg *)+0x5c>
        20ef10:	e1a0000d 	mov	r0, sp
        20ef14:	e5b6200c 	ldr	r2, [r6, #12]!
        20ef18:	e28f1f09 	add	r1, pc, #36	; 0x24
        20ef1c:	eb669adc 	bl	1bb5a94 <$sprintf>
        20ef20:	e1a0100d 	mov	r1, sp
        20ef24:	e1a00004 	mov	r0, r4
        20ef28:	eb6579d5 	bl	1b6d684 <TMsg::$MsgStr(char *)>
        20ef2c:	e1a00004 	mov	r0, r4
        20ef30:	eb6575d0 	bl	1b6c678 <TMsg::$MsgLF(void)>
        20ef34:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        20ef38:	45646765 	strmib	r6, [r4, -#1893]!
        20ef3c:	4c697374 	stcmil	3, cr7, [r9], -#464
        20ef40:	3a200000 	bcc	a0ef48 <ROM$$Size+0x2ef2fc>
        20ef44:	20256c64 	eorcs	r6, r5, r4, ror #24
        20ef48:	20636f72 	rsbcs	r6, r3, r2, ror pc
        20ef4c:	6e657273 	mcrvs	2, 3, r7, cr5, cr3, {3}
        20ef50:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: TEdgeListUnit::IDispose(void)
 * Address: 0020ef54
 */
TEdgeListUnit::IDispose(void) {
    /*
        20ef54:	e1a0c00d 	mov	ip, sp
        20ef58:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        20ef5c:	e24cb004 	sub	fp, ip, #4	; 0x4
        20ef60:	e1a04000 	mov	r4, r0
        20ef64:	eb653ff9 	bl	1b5ef50 <TEdgeListUnit::$GetCorners(void)>
        20ef68:	e3300000 	teq	r0, #0	; 0x0
        20ef6c:	11a0e00f 	movne	lr, pc
        20ef70:	1590f000 	ldrne	pc, [r0]
        20ef74:	e1a00004 	mov	r0, r4
        20ef78:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        20ef7c:	ea654419 	b	1b5ffe8 <TSIUnit::$IDispose(void)>
    */
}

/**
 * Symbol: TEdgeListUnit::DoneUsingUnit(void)
 * Address: 0020ef80
 */
TEdgeListUnit::DoneUsingUnit(void) {
    /*
        20ef80:	e1a0c00d 	mov	ip, sp
        20ef84:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        20ef88:	e24cb004 	sub	fp, ip, #4	; 0x4
        20ef8c:	e1a04000 	mov	r4, r0
        20ef90:	eb653fee 	bl	1b5ef50 <TEdgeListUnit::$GetCorners(void)>
        20ef94:	e3300000 	teq	r0, #0	; 0x0
        20ef98:	11a0e00f 	movne	lr, pc
        20ef9c:	1590f000 	ldrne	pc, [r0]
        20efa0:	e3a00000 	mov	r0, #0	; 0x0
        20efa4:	e584003c 	str	r0, [r4, #60]	; fField60
        20efa8:	e1a00004 	mov	r0, r4
        20efac:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        20efb0:	ea6554ab 	b	1b64264 <TSIUnit::$DoneUsingUnit(void)>
    */
}

/**
 * Symbol: TEdgeListUnit::SizeInBytes(void)
 * Address: 0020efb4
 */
TEdgeListUnit::SizeInBytes(void) {
    /*
        20efb4:	e1a0c00d 	mov	ip, sp
        20efb8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        20efbc:	e24cb004 	sub	fp, ip, #4	; 0x4
        20efc0:	e1a04000 	mov	r4, r0
        20efc4:	eb653fe1 	bl	1b5ef50 <TEdgeListUnit::$GetCorners(void)>
        20efc8:	e1a05000 	mov	r5, r0
        20efcc:	e1a00004 	mov	r0, r4
        20efd0:	eb655077 	bl	1b631b4 <TSIUnit::$SizeInBytes(void)>
        20efd4:	e1a04000 	mov	r4, r0
        20efd8:	e3350000 	teq	r5, #0	; 0x0
        20efdc:	0a000004 	beq	20eff4 <TEdgeListUnit::SizeInBytes(void)+0x40>
        20efe0:	e1a00005 	mov	r0, r5
        20efe4:	e5951000 	ldr	r1, [r5]
        20efe8:	e1a0e00f 	mov	lr, pc
        20efec:	e281f008 	add	pc, r1, #8	; 0x8
        20eff0:	e0804004 	add	r4, r0, r4
        20eff4:	e1a00004 	mov	r0, r4
        20eff8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TEdgeListUnit::GetCorners(void)
 * Address: 0020effc
 */
TEdgeListUnit::GetCorners(void) {
    /*
        20effc:	e590003c 	ldr	r0, [r0, #60]	; fField60
        20f000:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEdgeListUnit::InterpretationCount(void)
 * Address: 0020f004
 */
TEdgeListUnit::InterpretationCount(void) {
    /*
        20f004:	e5900040 	ldr	r0, [r0, #64]	; fField64
        20f008:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEdgeListUnit::AddInterpretation(char *)
 * Address: 0020f00c
 */
TEdgeListUnit::AddInterpretation(char *) {
    /*
        20f00c:	e1a0c00d 	mov	ip, sp
        20f010:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        20f014:	e24cb004 	sub	fp, ip, #4	; 0x4
        20f018:	e1a04000 	mov	r4, r0
        20f01c:	e1a00001 	mov	r0, r1
        20f020:	e2841044 	add	r1, r4, #68	; 0x44
        20f024:	e3a02010 	mov	r2, #16	; 0x10
        20f028:	eb65758d 	bl	1b6c664 <$MoveBlock__FPcT1l>
        20f02c:	e3a00001 	mov	r0, #1	; 0x1
        20f030:	e5a40040 	str	r0, [r4, #64]!	; fField64
        20f034:	e3a00000 	mov	r0, #0	; 0x0
        20f038:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TEdgeListUnit::GetInterpretation(unsigned long)
 * Address: 0020f03c
 */
TEdgeListUnit::GetInterpretation(unsigned long) {
    /*
        20f03c:	e2800044 	add	r0, r0, #68	; 0x44
        20f040:	e1a0f00e 	mov	pc, lr
    */
}

