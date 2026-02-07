#include "include/TWRecognizer.h"

/**
 * Symbol: TWRecognizer::MakeNewGroupFromStroke(TStrokeUnit *)
 * Address: 0026ddbc
 */
TWRecognizer::MakeNewGroupFromStroke(TStrokeUnit *) {
    /*
        26ddbc:	e1a0c00d 	mov	ip, sp
        26ddc0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        26ddc4:	e24cb004 	sub	fp, ip, #4	; 0x4
        26ddc8:	e1a05000 	mov	r5, r0
        26ddcc:	e1a04001 	mov	r4, r1
        26ddd0:	e59f8090 	ldr	r8, [pc, #90]	; 26de68 <TWRecognizer::MakeNewGroupFromStroke(TStrokeUnit *)+0xac>
        26ddd4:	e5980008 	ldr	r0, [r8, #8]	; fField8
        26ddd8:	eb65d4e8 	bl	1be3180 <$SetHeap>
        26dddc:	e1a00004 	mov	r0, r4
        26dde0:	eb63dd27 	bl	1b65284 <TUnit::$GetAreas(void)>
        26dde4:	e1a07000 	mov	r7, r0
        26dde8:	e5d40024 	ldrb	r0, [r4, #36]
        26ddec:	e2801001 	add	r1, r0, #1	; 0x1
        26ddf0:	e1a02007 	mov	r2, r7
        26ddf4:	e5950010 	ldr	r0, [r5, #16]	; fField16
        26ddf8:	eb63dd39 	bl	1b652e4 <$Make__9TWRecUnitSFP7TDomainUlP6TArray>
        26ddfc:	e1a06000 	mov	r6, r0
        26de00:	e3370000 	teq	r7, #0	; 0x0
        26de04:	11a00007 	movne	r0, r7
        26de08:	11a0e00f 	movne	lr, pc
        26de0c:	1597f000 	ldrne	pc, [r7]
        26de10:	e3360000 	teq	r6, #0	; 0x0
        26de14:	1a000006 	bne	26de34 <TWRecognizer::MakeNewGroupFromStroke(TStrokeUnit *)+0x78>
        26de18:	e5980004 	ldr	r0, [r8, #4]	; fField4
        26de1c:	eb65d4d7 	bl	1be3180 <$SetHeap>
        26de20:	e59f0044 	ldr	r0, [pc, #44]	; 26de6c <TWRecognizer::MakeNewGroupFromStroke(TStrokeUnit *)+0xb0>
        26de24:	e5900000 	ldr	r0, [r0]
        26de28:	e3a02000 	mov	r2, #0	; 0x0
        26de2c:	e3a01000 	mov	r1, #0	; 0x0
        26de30:	eb65d4d9 	bl	1be319c <$Throw>
        26de34:	e1a01004 	mov	r1, r4
        26de38:	e1a00006 	mov	r0, r6
        26de3c:	e5962000 	ldr	r2, [r6]
        26de40:	e1a0e00f 	mov	lr, pc
        26de44:	e282f054 	add	pc, r2, #84	; 0x54
        26de48:	e5b50010 	ldr	r0, [r5, #16]!	; fField16
        26de4c:	e5900008 	ldr	r0, [r0, #8]	; fField8
        26de50:	e1a01006 	mov	r1, r6
        26de54:	eb63cca1 	bl	1b610e0 <TController::$NewGroup(TUnit *)>
        26de58:	e5b80004 	ldr	r0, [r8, #4]!	; fField4
        26de5c:	eb65d4c7 	bl	1be3180 <$SetHeap>
        26de60:	e1a00006 	mov	r0, r6
        26de64:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        26de68:	0c104f78 	ldceq	15, cr4, [r0], -#480
        26de6c:	003712b4 	ldreqh	r1, [r7], -r4
    */
}

/**
 * Symbol: TWRecognizer::GetPartialGroup(unsigned char *)
 * Address: 0026de70
 */
TWRecognizer::GetPartialGroup(unsigned char *) {
    /*
        26de70:	e1a0c00d 	mov	ip, sp
        26de74:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        26de78:	e24cb004 	sub	fp, ip, #4	; 0x4
        26de7c:	e1a05000 	mov	r5, r0
        26de80:	e1a04001 	mov	r4, r1
        26de84:	e59f6088 	ldr	r6, [pc, #88]	; 26df14 <TWRecognizer::GetPartialGroup(unsigned char *)+0xa4>
        26de88:	e59f7088 	ldr	r7, [pc, #88]	; 26df18 <TWRecognizer::GetPartialGroup(unsigned char *)+0xa8>
        26de8c:	e5970008 	ldr	r0, [r7, #8]	; fField8
        26de90:	eb65d4ba 	bl	1be3180 <$SetHeap>
        26de94:	e5b50010 	ldr	r0, [r5, #16]!	; fField16
        26de98:	e5902010 	ldr	r2, [r0, #16]	; fField16
        26de9c:	e1a01000 	mov	r1, r0
        26dea0:	e5900008 	ldr	r0, [r0, #8]	; fField8
        26dea4:	eb63c42b 	bl	1b5ef58 <TController::$GetDelayList(TDomain *, unsigned long)>
        26dea8:	e1b05000 	movs	r5, r0
        26deac:	1a000006 	bne	26decc <TWRecognizer::GetPartialGroup(unsigned char *)+0x5c>
        26deb0:	e5970004 	ldr	r0, [r7, #4]	; fField4
        26deb4:	eb65d4b1 	bl	1be3180 <$SetHeap>
        26deb8:	e59f005c 	ldr	r0, [pc, #5c]	; 26df1c <TWRecognizer::GetPartialGroup(unsigned char *)+0xac>
        26debc:	e5900000 	ldr	r0, [r0]
        26dec0:	e3a02000 	mov	r2, #0	; 0x0
        26dec4:	e3a01000 	mov	r1, #0	; 0x0
        26dec8:	eb65d4b3 	bl	1be319c <$Throw>
        26decc:	e595000c 	ldr	r0, [r5, #12]	; fField12
        26ded0:	e3300000 	teq	r0, #0	; 0x0
        26ded4:	03a00000 	moveq	r0, #0	; 0x0
        26ded8:	05c40000 	streqb	r0, [r4]
        26dedc:	0a000005 	beq	26def8 <TWRecognizer::GetPartialGroup(unsigned char *)+0x88>
        26dee0:	e2401001 	sub	r1, r0, #1	; 0x1
        26dee4:	e1a00005 	mov	r0, r5
        26dee8:	eb63c82f 	bl	1b5ffac <TUnitList::$GetUnit(unsigned long)>
        26deec:	e3a01001 	mov	r1, #1	; 0x1
        26def0:	e5c41000 	strb	r1, [r4]
        26def4:	e1a06000 	mov	r6, r0
        26def8:	e1a00005 	mov	r0, r5
        26defc:	e1a0e00f 	mov	lr, pc
        26df00:	e595f000 	ldr	pc, [r5]
        26df04:	e5b70004 	ldr	r0, [r7, #4]!	; fField4
        26df08:	eb65d49c 	bl	1be3180 <$SetHeap>
        26df0c:	e1a00006 	mov	r0, r6
        26df10:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        26df14:	deadbeef 	cdple	14, 10, cr11, cr13, cr15, {7}
        26df18:	0c104f78 	ldceq	15, cr4, [r0], -#480
        26df1c:	003712b4 	ldreqh	r1, [r7], -r4
    */
}

/**
 * Symbol: TWRecognizer::InvalidateUnit(TWRecUnit *)
 * Address: 0026df20
 */
TWRecognizer::InvalidateUnit(TWRecUnit *) {
    /*
        26df20:	e1a00001 	mov	r0, r1
        26df24:	e5911000 	ldr	r1, [r1]
        26df28:	e281f034 	add	pc, r1, #52	; 0x34
    */
}

/**
 * Symbol: TWRecognizer::TestInvalidUnit(TWRecUnit *)
 * Address: 0026df64
 */
TWRecognizer::TestInvalidUnit(TWRecUnit *) {
    /*
        26df64:	e1a00001 	mov	r0, r1
        26df68:	e3a01302 	mov	r1, #134217728	; 0x8000000
        26df6c:	ea63d49d 	b	1b631e8 <TRecObject::$TestFlags(unsigned long)>
    */
}

/**
 * Symbol: TWRecognizer::RejectUnit(TWRecUnit *)
 * Address: 0026df70
 */
TWRecognizer::RejectUnit(TWRecUnit *) {
    /*
        26df70:	e1a00001 	mov	r0, r1
        26df74:	e3a01501 	mov	r1, #4194304	; 0x400000
        26df78:	ea63d07d 	b	1b62174 <TRecObject::$SetFlags(unsigned long)>
    */
}

/**
 * Symbol: TWRecognizer::TestRejectedUnit(TWRecUnit *)
 * Address: 0026df7c
 */
TWRecognizer::TestRejectedUnit(TWRecUnit *) {
    /*
        26df7c:	e1a00001 	mov	r0, r1
        26df80:	e3a01501 	mov	r1, #4194304	; 0x400000
        26df84:	ea63d497 	b	1b631e8 <TRecObject::$TestFlags(unsigned long)>
    */
}

/**
 * Symbol: TWRecognizer::NewClassification(TWRecUnit *)
 * Address: 0026df88
 */
TWRecognizer::NewClassification(TWRecUnit *) {
    /*
        26df88:	e1a0c00d 	mov	ip, sp
        26df8c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        26df90:	e24cb004 	sub	fp, ip, #4	; 0x4
        26df94:	e1a05000 	mov	r5, r0
        26df98:	e1a04001 	mov	r4, r1
        26df9c:	e59f6020 	ldr	r6, [pc, #20]	; 26dfc4 <TWRecognizer::NewClassification(TWRecUnit *)+0x3c>
        26dfa0:	e5960008 	ldr	r0, [r6, #8]	; fField8
        26dfa4:	eb65d475 	bl	1be3180 <$SetHeap>
        26dfa8:	e5b50010 	ldr	r0, [r5, #16]!	; fField16
        26dfac:	e5900008 	ldr	r0, [r0, #8]	; fField8
        26dfb0:	e1a01004 	mov	r1, r4
        26dfb4:	eb63cc47 	bl	1b610d8 <TController::$NewClassification(TUnit *)>
        26dfb8:	e5b60004 	ldr	r0, [r6, #4]!	; fField4
        26dfbc:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        26dfc0:	ea65d46e 	b	1be3180 <$SetHeap>
        26dfc4:	0c104f78 	ldceq	15, cr4, [r0], -#480
    */
}

/**
 * Symbol: TWRecognizer::TestClassifiedUnit(TWRecUnit *)
 * Address: 0026dfc8
 */
TWRecognizer::TestClassifiedUnit(TWRecUnit *) {
    /*
        26dfc8:	e1a00001 	mov	r0, r1
        26dfcc:	e3a01602 	mov	r1, #2097152	; 0x200000
        26dfd0:	ea63d484 	b	1b631e8 <TRecObject::$TestFlags(unsigned long)>
    */
}

/**
 * Symbol: TWRecognizer::SubCount(TWRecUnit *)
 * Address: 0026dfd4
 */
TWRecognizer::SubCount(TWRecUnit *) {
    /*
        26dfd4:	e1a00001 	mov	r0, r1
        26dfd8:	e5911000 	ldr	r1, [r1]
        26dfdc:	e281f01c 	add	pc, r1, #28	; 0x1c
    */
}

/**
 * Symbol: TWRecognizer::GetSub(TWRecUnit *, unsigned long)
 * Address: 0026dfe0
 */
TWRecognizer::GetSub(TWRecUnit *, unsigned long) {
    /*
        26dfe0:	e1a03001 	mov	r3, r1
        26dfe4:	e1a01002 	mov	r1, r2
        26dfe8:	e1a00003 	mov	r0, r3
        26dfec:	e5932000 	ldr	r2, [r3]
        26dff0:	e282f058 	add	pc, r2, #88	; 0x58
    */
}

/**
 * Symbol: TWRecognizer::AddSub(TWRecUnit *, TStrokeUnit *)
 * Address: 0026dff4
 */
TWRecognizer::AddSub(TWRecUnit *, TStrokeUnit *) {
    /*
        26dff4:	e1a0c00d 	mov	ip, sp
        26dff8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        26dffc:	e24cb004 	sub	fp, ip, #4	; 0x4
        26e000:	e1a05001 	mov	r5, r1
        26e004:	e1a04002 	mov	r4, r2
        26e008:	e59f6024 	ldr	r6, [pc, #24]	; 26e034 <TWRecognizer::AddSub(TWRecUnit *, TStrokeUnit *)+0x40>
        26e00c:	e5960008 	ldr	r0, [r6, #8]	; fField8
        26e010:	eb65d45a 	bl	1be3180 <$SetHeap>
        26e014:	e1a01004 	mov	r1, r4
        26e018:	e1a00005 	mov	r0, r5
        26e01c:	e5952000 	ldr	r2, [r5]
        26e020:	e1a0e00f 	mov	lr, pc
        26e024:	e282f054 	add	pc, r2, #84	; 0x54
        26e028:	e5b60004 	ldr	r0, [r6, #4]!	; fField4
        26e02c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        26e030:	ea65d452 	b	1be3180 <$SetHeap>
        26e034:	0c104f78 	ldceq	15, cr4, [r0], -#480
    */
}

/**
 * Symbol: TWRecognizer::EndSubs(TWRecUnit *)
 * Address: 0026e038
 */
TWRecognizer::EndSubs(TWRecUnit *) {
    /*
        26e038:	e1a0c00d 	mov	ip, sp
        26e03c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        26e040:	e24cb004 	sub	fp, ip, #4	; 0x4
        26e044:	e1a04001 	mov	r4, r1
        26e048:	e59f5020 	ldr	r5, [pc, #20]	; 26e070 <TWRecognizer::EndSubs(TWRecUnit *)+0x38>
        26e04c:	e5950008 	ldr	r0, [r5, #8]	; fField8
        26e050:	eb65d44a 	bl	1be3180 <$SetHeap>
        26e054:	e1a00004 	mov	r0, r4
        26e058:	e5941000 	ldr	r1, [r4]
        26e05c:	e1a0e00f 	mov	lr, pc
        26e060:	e281f060 	add	pc, r1, #96	; 0x60
        26e064:	e5b50004 	ldr	r0, [r5, #4]!	; fField4
        26e068:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        26e06c:	ea65d443 	b	1be3180 <$SetHeap>
        26e070:	0c104f78 	ldceq	15, cr4, [r0], -#480
    */
}

/**
 * Symbol: TWRecognizer::EndInkStrokeGroup(TStrokeUnit **)
 * Address: 0026e074
 */
TWRecognizer::EndInkStrokeGroup(TStrokeUnit **) {
    /*
        26e074:	e1a0c00d 	mov	ip, sp
        26e078:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        26e07c:	e24cb004 	sub	fp, ip, #4	; 0x4
        26e080:	e1a04001 	mov	r4, r1
        26e084:	e59f5018 	ldr	r5, [pc, #18]	; 26e0a4 <TWRecognizer::EndInkStrokeGroup(TStrokeUnit **)+0x30>
        26e088:	e5950008 	ldr	r0, [r5, #8]	; fField8
        26e08c:	eb65d43b 	bl	1be3180 <$SetHeap>
        26e090:	e1a00004 	mov	r0, r4
        26e094:	eb61cbf9 	bl	1ae1080 <$WRecEndInkStrokeGroup(TStrokeUnit **)>
        26e098:	e5b50004 	ldr	r0, [r5, #4]!	; fField4
        26e09c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        26e0a0:	ea65d436 	b	1be3180 <$SetHeap>
        26e0a4:	0c104f78 	ldceq	15, cr4, [r0], -#480
    */
}

/**
 * Symbol: TWRecognizer::AddWordInterpretation(TWRecUnit *)
 * Address: 0026e1a4
 */
TWRecognizer::AddWordInterpretation(TWRecUnit *) {
    /*
        26e1a4:	e1a0c00d 	mov	ip, sp
        26e1a8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        26e1ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        26e1b0:	e1a04001 	mov	r4, r1
        26e1b4:	e59f5028 	ldr	r5, [pc, #28]	; 26e1e4 <TWRecognizer::AddWordInterpretation(TWRecUnit *)+0x40>
        26e1b8:	e5950008 	ldr	r0, [r5, #8]	; fField8
        26e1bc:	eb65d3ef 	bl	1be3180 <$SetHeap>
        26e1c0:	e1a00004 	mov	r0, r4
        26e1c4:	e5941000 	ldr	r1, [r4]
        26e1c8:	e1a0e00f 	mov	lr, pc
        26e1cc:	e281f0ac 	add	pc, r1, #172	; 0xac
        26e1d0:	e1a04000 	mov	r4, r0
        26e1d4:	e5b50004 	ldr	r0, [r5, #4]!	; fField4
        26e1d8:	eb65d3e8 	bl	1be3180 <$SetHeap>
        26e1dc:	e1a00004 	mov	r0, r4
        26e1e0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        26e1e4:	0c104f78 	ldceq	15, cr4, [r0], -#480
    */
}

/**
 * Symbol: TWRecognizer::SetCharWordString(TWRecUnit *, unsigned long, char *)
 * Address: 0026e1e8
 */
TWRecognizer::SetCharWordString(TWRecUnit *, unsigned long, char *) {
    /*
        26e1e8:	e1a0c00d 	mov	ip, sp
        26e1ec:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        26e1f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        26e1f4:	e1a06001 	mov	r6, r1
        26e1f8:	e1a05002 	mov	r5, r2
        26e1fc:	e1a04003 	mov	r4, r3
        26e200:	e59f7028 	ldr	r7, [pc, #28]	; 26e230 <TWRecognizer::SetCharWordString(TWRecUnit *, unsigned long, char *)+0x48>
        26e204:	e5970008 	ldr	r0, [r7, #8]	; fField8
        26e208:	eb65d3dc 	bl	1be3180 <$SetHeap>
        26e20c:	e1a02004 	mov	r2, r4
        26e210:	e1a01005 	mov	r1, r5
        26e214:	e1a00006 	mov	r0, r6
        26e218:	e5963000 	ldr	r3, [r6]
        26e21c:	e1a0e00f 	mov	lr, pc
        26e220:	e283f0b4 	add	pc, r3, #180	; 0xb4
        26e224:	e5b70004 	ldr	r0, [r7, #4]!	; fField4
        26e228:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        26e22c:	ea65d3d3 	b	1be3180 <$SetHeap>
        26e230:	0c104f78 	ldceq	15, cr4, [r0], -#480
    */
}

/**
 * Symbol: TWRecognizer::SetWordString(TWRecUnit *, unsigned long, unsigned short *)
 * Address: 0026e234
 */
TWRecognizer::SetWordString(TWRecUnit *, unsigned long, unsigned short *) {
    /*
        26e234:	e1a0c00d 	mov	ip, sp
        26e238:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        26e23c:	e24cb004 	sub	fp, ip, #4	; 0x4
        26e240:	e1a06001 	mov	r6, r1
        26e244:	e1a05002 	mov	r5, r2
        26e248:	e1a04003 	mov	r4, r3
        26e24c:	e59f7028 	ldr	r7, [pc, #28]	; 26e27c <TWRecognizer::SetWordString(TWRecUnit *, unsigned long, unsigned short *)+0x48>
        26e250:	e5970008 	ldr	r0, [r7, #8]	; fField8
        26e254:	eb65d3c9 	bl	1be3180 <$SetHeap>
        26e258:	e1a02004 	mov	r2, r4
        26e25c:	e1a01005 	mov	r1, r5
        26e260:	e1a00006 	mov	r0, r6
        26e264:	e5963000 	ldr	r3, [r6]
        26e268:	e1a0e00f 	mov	lr, pc
        26e26c:	e283f0b8 	add	pc, r3, #184	; 0xb8
        26e270:	e5b70004 	ldr	r0, [r7, #4]!	; fField4
        26e274:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        26e278:	ea65d3c0 	b	1be3180 <$SetHeap>
        26e27c:	0c104f78 	ldceq	15, cr4, [r0], -#480
    */
}

/**
 * Symbol: TWRecognizer::GetWordString(TWRecUnit *, unsigned long)
 * Address: 0026e280
 */
TWRecognizer::GetWordString(TWRecUnit *, unsigned long) {
    /*
        26e280:	e1a03001 	mov	r3, r1
        26e284:	e1a01002 	mov	r1, r2
        26e288:	e1a00003 	mov	r0, r3
        26e28c:	e5932000 	ldr	r2, [r3]
        26e290:	e282f0bc 	add	pc, r2, #188	; 0xbc
    */
}

/**
 * Symbol: TWRecognizer::SetLabel(TWRecUnit *, unsigned long, unsigned long)
 * Address: 0026e294
 */
TWRecognizer::SetLabel(TWRecUnit *, unsigned long, unsigned long) {
    /*
        26e294:	e1a00002 	mov	r0, r2
        26e298:	e1a02003 	mov	r2, r3
        26e29c:	e1a0c001 	mov	ip, r1
        26e2a0:	e1a01000 	mov	r1, r0
        26e2a4:	e1a0000c 	mov	r0, ip
        26e2a8:	e59c3000 	ldr	r3, [ip]
        26e2ac:	e283f09c 	add	pc, r3, #156	; 0x9c
    */
}

/**
 * Symbol: TWRecognizer::GetLabel(TWRecUnit *, unsigned long)
 * Address: 0026e2b0
 */
TWRecognizer::GetLabel(TWRecUnit *, unsigned long) {
    /*
        26e2b0:	e1a03001 	mov	r3, r1
        26e2b4:	e1a01002 	mov	r1, r2
        26e2b8:	e1a00003 	mov	r0, r3
        26e2bc:	e5932000 	ldr	r2, [r3]
        26e2c0:	e282f08c 	add	pc, r2, #140	; 0x8c
    */
}

/**
 * Symbol: TWRecognizer::SetScore(TWRecUnit *, unsigned long, unsigned long)
 * Address: 0026e2c4
 */
TWRecognizer::SetScore(TWRecUnit *, unsigned long, unsigned long) {
    /*
        26e2c4:	e1a00002 	mov	r0, r2
        26e2c8:	e1a02003 	mov	r2, r3
        26e2cc:	e1a0c001 	mov	ip, r1
        26e2d0:	e1a01000 	mov	r1, r0
        26e2d4:	e1a0000c 	mov	r0, ip
        26e2d8:	e59c3000 	ldr	r3, [ip]
        26e2dc:	e283f0a0 	add	pc, r3, #160	; 0xa0
    */
}

/**
 * Symbol: TWRecognizer::GetScore(TWRecUnit *, unsigned long)
 * Address: 0026e2e0
 */
TWRecognizer::GetScore(TWRecUnit *, unsigned long) {
    /*
        26e2e0:	e1a03001 	mov	r3, r1
        26e2e4:	e1a01002 	mov	r1, r2
        26e2e8:	e1a00003 	mov	r0, r3
        26e2ec:	e5932000 	ldr	r2, [r3]
        26e2f0:	e282f090 	add	pc, r2, #144	; 0x90
    */
}

/**
 * Symbol: TWRecognizer::InterpretationCount(TWRecUnit *)
 * Address: 0026e2f4
 */
TWRecognizer::InterpretationCount(TWRecUnit *) {
    /*
        26e2f4:	e1a00001 	mov	r0, r1
        26e2f8:	e5911000 	ldr	r1, [r1]
        26e2fc:	e281f020 	add	pc, r1, #32	; 0x20
    */
}

/**
 * Symbol: TWRecognizer::StrokeUnitStroke(TStrokeUnit *)
 * Address: 0026e300
 */
TWRecognizer::StrokeUnitStroke(TStrokeUnit *) {
    /*
        26e300:	e5b10040 	ldr	r0, [r1, #64]!
        26e304:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TWRecognizer::StrokeSize(TStrokeUnit *)
 * Address: 0026e41c
 */
TWRecognizer::StrokeSize(TStrokeUnit *) {
    /*
        26e41c:	e5b10040 	ldr	r0, [r1, #64]!
        26e420:	e590000c 	ldr	r0, [r0, #12]	; fField12
        26e424:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TWRecognizer::StrokeSize(TStroke *)
 * Address: 0026e428
 */
TWRecognizer::StrokeSize(TStroke *) {
    /*
        26e428:	e5b1000c 	ldr	r0, [r1, #12]!	; fField12
        26e42c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TWRecognizer::GetSamplePtAddress(TStrokeUnit *, unsigned long)
 * Address: 0026e430
 */
TWRecognizer::GetSamplePtAddress(TStrokeUnit *, unsigned long) {
    /*
        26e430:	e5b10040 	ldr	r0, [r1, #64]!
        26e434:	e1a01002 	mov	r1, r2
        26e438:	ea63f46a 	b	1b6b5e8 <TStroke::$GetPoint(long)>
    */
}

/**
 * Symbol: TWRecognizer::GetSamplePtAddress(TStroke *, unsigned long)
 * Address: 0026e43c
 */
TWRecognizer::GetSamplePtAddress(TStroke *, unsigned long) {
    /*
        26e43c:	e1a00001 	mov	r0, r1
        26e440:	e1a01002 	mov	r1, r2
        26e444:	ea63f467 	b	1b6b5e8 <TStroke::$GetPoint(long)>
    */
}

/**
 * Symbol: TWRecognizer::StrokeSampleX(WrecSamplePt *)
 * Address: 0026e448
 */
TWRecognizer::StrokeSampleX(WrecSamplePt *) {
    /*
        26e448:	e1a00001 	mov	r0, r1
        26e44c:	ea63fc9a 	b	1b6d6bc <$SampleX(SamplePt *)>
    */
}

/**
 * Symbol: TWRecognizer::StrokeSampleY(WrecSamplePt *)
 * Address: 0026e450
 */
TWRecognizer::StrokeSampleY(WrecSamplePt *) {
    /*
        26e450:	e1a00001 	mov	r0, r1
        26e454:	ea63fc99 	b	1b6d6c0 <$SampleY(SamplePt *)>
    */
}

/**
 * Symbol: TWRecognizer::GetStartTime(TUnit *)
 * Address: 0026e458
 */
TWRecognizer::GetStartTime(TUnit *) {
    /*
        26e458:	e5b1001c 	ldr	r0, [r1, #28]!
        26e45c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TWRecognizer::GetStartTime(TStroke *)
 * Address: 0026e460
 */
TWRecognizer::GetStartTime(TStroke *) {
    /*
        26e460:	e5b10034 	ldr	r0, [r1, #52]!
        26e464:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TWRecognizer::GetStartTime(TSIUnit *)
 * Address: 0026e468
 */
TWRecognizer::GetStartTime(TSIUnit *) {
    /*
        26e468:	e5b1001c 	ldr	r0, [r1, #28]!
        26e46c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TWRecognizer::GetStartTime(TStrokeUnit *)
 * Address: 0026e470
 */
TWRecognizer::GetStartTime(TStrokeUnit *) {
    /*
        26e470:	e5b1001c 	ldr	r0, [r1, #28]!
        26e474:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TWRecognizer::GetStartTime(TWRecUnit *)
 * Address: 0026e51c
 */
TWRecognizer::GetStartTime(TWRecUnit *) {
    /*
        26e51c:	e5b1001c 	ldr	r0, [r1, #28]!
        26e520:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TWRecognizer::GetEndTime(TUnit *)
 * Address: 0026e524
 */
TWRecognizer::GetEndTime(TUnit *) {
    /*
        26e524:	e591001c 	ldr	r0, [r1, #28]
        26e528:	e5911020 	ldr	r1, [r1, #32]
        26e52c:	e0800821 	add	r0, r0, r1, lsr #16
        26e530:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TWRecognizer::GetEndTime(TStroke *)
 * Address: 0026e534
 */
TWRecognizer::GetEndTime(TStroke *) {
    /*
        26e534:	e5b10038 	ldr	r0, [r1, #56]!
        26e538:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TWRecognizer::GetEndTime(TSIUnit *)
 * Address: 0026e53c
 */
TWRecognizer::GetEndTime(TSIUnit *) {
    /*
        26e53c:	e591001c 	ldr	r0, [r1, #28]
        26e540:	e5911020 	ldr	r1, [r1, #32]
        26e544:	e0800821 	add	r0, r0, r1, lsr #16
        26e548:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TWRecognizer::GetEndTime(TStrokeUnit *)
 * Address: 0026e54c
 */
TWRecognizer::GetEndTime(TStrokeUnit *) {
    /*
        26e54c:	e591001c 	ldr	r0, [r1, #28]
        26e550:	e5911020 	ldr	r1, [r1, #32]
        26e554:	e0800821 	add	r0, r0, r1, lsr #16
        26e558:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TWRecognizer::GetEndTime(TWRecUnit *)
 * Address: 0026e55c
 */
TWRecognizer::GetEndTime(TWRecUnit *) {
    /*
        26e55c:	e591001c 	ldr	r0, [r1, #28]
        26e560:	e5911020 	ldr	r1, [r1, #32]
        26e564:	e0800821 	add	r0, r0, r1, lsr #16
        26e568:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TWRecognizer::UnitInfoGetPtr(TWRecUnit *)
 * Address: 0026e56c
 */
TWRecognizer::UnitInfoGetPtr(TWRecUnit *) {
    /*
        26e56c:	e5b1003c 	ldr	r0, [r1, #60]!
        26e570:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TWRecognizer::UnitInfoSetPtr(TWRecUnit *, char *)
 * Address: 0026e574
 */
TWRecognizer::UnitInfoSetPtr(TWRecUnit *, char *) {
    /*
        26e574:	e5a1203c 	str	r2, [r1, #60]!
        26e578:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: New__12TWRecognizerSFPc
 * Address: 00388bd0
 */
void TWRecognizer::New() {
    /*
        388bd0:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        388bd4:	e1a01000 	mov	r1, r0
        388bd8:	ebfffff6 	bl	388bb8 <ClassInfo__11TGrayShrinkSFv+0x3c>
        388bdc:	eb611af0 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        388be0:	e1100000 	tst	r0, r0
        388be4:	e28dd004 	add	sp, sp, #4	; 0x4
        388be8:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        388bec:	01a0f00e 	moveq	pc, lr
        388bf0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        388bf4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        388bf8:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: TWRecognizer::Delete(void)
 * Address: 00388bfc
 */
TWRecognizer::Delete(void) {
    /*
        388bfc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        388c00:	e92d4001 	stmdb	sp!, {r0, lr}
        388c04:	e28fe004 	add	lr, pc, #4	; 0x4
        388c08:	e590c008 	ldr	ip, [r0, #8]	; fField8
        388c0c:	e28cf00c 	add	pc, ip, #12	; 0xc
        388c10:	e8bd4001 	ldmia	sp!, {r0, lr}
        388c14:	ea612750 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: TWRecognizer::Initialize(void)
 * Address: 00388c18
 */
TWRecognizer::Initialize(void) {
    /*
        388c18:	e5900004 	ldr	r0, [r0, #4]	; fField4
        388c1c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        388c20:	e28cf010 	add	pc, ip, #16	; 0x10
    */
}

/**
 * Symbol: TWRecognizer::Group(TStrokeUnit *)
 * Address: 00388c24
 */
TWRecognizer::Group(TStrokeUnit *) {
    /*
        388c24:	e5900004 	ldr	r0, [r0, #4]	; fField4
        388c28:	e590c008 	ldr	ip, [r0, #8]	; fField8
        388c2c:	e28cf014 	add	pc, ip, #20	; 0x14
    */
}

/**
 * Symbol: TWRecognizer::Classify(TWRecUnit *)
 * Address: 00388c30
 */
TWRecognizer::Classify(TWRecUnit *) {
    /*
        388c30:	e5900004 	ldr	r0, [r0, #4]	; fField4
        388c34:	e590c008 	ldr	ip, [r0, #8]	; fField8
        388c38:	e28cf018 	add	pc, ip, #24	; 0x18
    */
}

/**
 * Symbol: TWRecognizer::Reclassify(TWRecUnit *)
 * Address: 00388c3c
 */
TWRecognizer::Reclassify(TWRecUnit *) {
    /*
        388c3c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        388c40:	e590c008 	ldr	ip, [r0, #8]	; fField8
        388c44:	e28cf01c 	add	pc, ip, #28	; 0x1c
    */
}

/**
 * Symbol: TWRecognizer::FindBaseline(TStroke **, Point *)
 * Address: 00388c48
 */
TWRecognizer::FindBaseline(TStroke **, Point *) {
    /*
        388c48:	e5900004 	ldr	r0, [r0, #4]	; fField4
        388c4c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        388c50:	e28cf020 	add	pc, ip, #32	; 0x20
    */
}

/**
 * Symbol: TWRecognizer::GroupInkStroke(TStrokeUnit *, unsigned long, unsigned long, unsigned char)
 * Address: 00388c54
 */
TWRecognizer::GroupInkStroke(TStrokeUnit *, unsigned long, unsigned long, unsigned char) {
    /*
        388c54:	e5900004 	ldr	r0, [r0, #4]	; fField4
        388c58:	e590c008 	ldr	ip, [r0, #8]	; fField8
        388c5c:	e28cf024 	add	pc, ip, #36	; 0x24
    */
}

/**
 * Symbol: TWRecognizer::AreaInfoGetSize(void)
 * Address: 00388c60
 */
TWRecognizer::AreaInfoGetSize(void) {
    /*
        388c60:	e5900004 	ldr	r0, [r0, #4]	; fField4
        388c64:	e590c008 	ldr	ip, [r0, #8]	; fField8
        388c68:	e28cf028 	add	pc, ip, #40	; 0x28
    */
}

/**
 * Symbol: TWRecognizer::AreaInfoFillDefaults(char **)
 * Address: 00388c6c
 */
TWRecognizer::AreaInfoFillDefaults(char **) {
    /*
        388c6c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        388c70:	e590c008 	ldr	ip, [r0, #8]	; fField8
        388c74:	e28cf02c 	add	pc, ip, #44	; 0x2c
    */
}

/**
 * Symbol: TWRecognizer::AreaInfoConfigure(char **, RefVar const &)
 * Address: 00388c78
 */
TWRecognizer::AreaInfoConfigure(char **, RefVar const &) {
    /*
        388c78:	e5900004 	ldr	r0, [r0, #4]	; fField4
        388c7c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        388c80:	e28cf030 	add	pc, ip, #48	; 0x30
    */
}

/**
 * Symbol: TWRecognizer::AreaInfoFreeDependents(char **)
 * Address: 00388c84
 */
TWRecognizer::AreaInfoFreeDependents(char **) {
    /*
        388c84:	e5900004 	ldr	r0, [r0, #4]	; fField4
        388c88:	e590c008 	ldr	ip, [r0, #8]	; fField8
        388c8c:	e28cf034 	add	pc, ip, #52	; 0x34
    */
}

/**
 * Symbol: TWRecognizer::AreaInfoSetParameters(char **)
 * Address: 00388c90
 */
TWRecognizer::AreaInfoSetParameters(char **) {
    /*
        388c90:	e5900004 	ldr	r0, [r0, #4]	; fField4
        388c94:	e590c008 	ldr	ip, [r0, #8]	; fField8
        388c98:	e28cf038 	add	pc, ip, #56	; 0x38
    */
}

/**
 * Symbol: TWRecognizer::UnitInfoFreePtr(char *)
 * Address: 00388c9c
 */
TWRecognizer::UnitInfoFreePtr(char *) {
    /*
        388c9c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        388ca0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        388ca4:	e28cf03c 	add	pc, ip, #60	; 0x3c
    */
}

/**
 * Symbol: TWRecognizer::VerifyWordSymbols(unsigned short *)
 * Address: 00388ca8
 */
TWRecognizer::VerifyWordSymbols(unsigned short *) {
    /*
        388ca8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        388cac:	e590c008 	ldr	ip, [r0, #8]	; fField8
        388cb0:	e28cf040 	add	pc, ip, #64	; 0x40
    */
}

/**
 * Symbol: TWRecognizer::UnitConfidence(TWRecUnit *)
 * Address: 00388cb4
 */
TWRecognizer::UnitConfidence(TWRecUnit *) {
    /*
        388cb4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        388cb8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        388cbc:	e28cf044 	add	pc, ip, #68	; 0x44
    */
}

/**
 * Symbol: TWRecognizer::Sleep(void)
 * Address: 00388cc0
 */
TWRecognizer::Sleep(void) {
    /*
        388cc0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        388cc4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        388cc8:	e28cf048 	add	pc, ip, #72	; 0x48
    */
}

/**
 * Symbol: TWRecognizer::WakeUp(void)
 * Address: 00388ccc
 */
TWRecognizer::WakeUp(void) {
    /*
        388ccc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        388cd0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        388cd4:	e28cf04c 	add	pc, ip, #76	; 0x4c
        388cd8:	00000000 	andeq	r0, r0, r0
        388cdc:	00000048 	andeq	r0, r0, r8, asr #32
        388ce0:	00000053 	andeq	r0, r0, r3, asr r0
        388ce4:	0000005c 	andeq	r0, r0, ip, asr r0
        388ce8:	0000005c 	andeq	r0, r0, ip, asr r0
        388cec:	000000a8 	andeq	r0, r0, r8, lsr #1
        388cf0:	eaf8b3ad 	b	1b5bac <Sizeof__14TRosRecognizerSFv>
        388cfc:	ea5fbba8 	b	1b77ba4 <TRosRecognizer::$New(void)>
        388d00:	ea5fbba2 	b	1b77b90 <TRosRecognizer::$Delete(void)>
        388d10:	ea000001 	b	388d1c <ClassInfo__14TRosRecognizerSFv+0x8>
    */
}

