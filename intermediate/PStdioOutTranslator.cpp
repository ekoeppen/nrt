#include "include/PStdioOutTranslator.h"

/**
 * Symbol: Sizeof__19PStdioOutTranslatorSFv
 * Address: 001f9868
 */
void PStdioOutTranslator::Sizeof() {
    /*
        1f9868:	e3a00014 	mov	r0, #20	; 0x14
        1f986c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PStdioOutTranslator::New(void)
 * Address: 001f9870
 */
PStdioOutTranslator::New(void) {
    /*
        1f9870:	e3a01000 	mov	r1, #0	; 0x0
        1f9874:	e5801010 	str	r1, [r0, #16]	; fField16
        1f9878:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PStdioOutTranslator::EnterBreakLoop(int)
 * Address: 001f987c
 */
PStdioOutTranslator::EnterBreakLoop(int) {
    /*
        1f987c:	e1a0c00d 	mov	ip, sp
        1f9880:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1f9884:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f9888:	e1a04000 	mov	r4, r0
        1f988c:	e1a05001 	mov	r5, r1
        1f9890:	e28f1f06 	add	r1, pc, #24	; 0x18
        1f9894:	eb000034 	bl	1f996c <PStdioOutTranslator::Print(char const *,...)>
        1f9898:	e1a01005 	mov	r1, r5
        1f989c:	e1a00004 	mov	r0, r4
        1f98a0:	eb000020 	bl	1f9928 <PStdioOutTranslator::Prompt(int)>
        1f98a4:	e1a00004 	mov	r0, r4
        1f98a8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1f98ac:	ea00001e 	b	1f992c <PStdioOutTranslator::Flush(void)>
        1f98b0:	456e7465 	strmib	r7, [lr, -#1125]!
        1f98b4:	72696e67 	rsbvc	r6, r9, #1648	; 0x670
        1f98b8:	20627265 	rsbcs	r7, r2, r5, ror #4
        1f98bc:	616b206c 	cmnvs	fp, ip, rrx
        1f98c0:	6f6f700d 	swivs	0x006f700d
        1f98c4:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: PStdioOutTranslator::ExitBreakLoop(void)
 * Address: 001f98c8
 */
PStdioOutTranslator::ExitBreakLoop(void) {
    /*
        1f98c8:	e28f1f00 	add	r1, pc, #0	; 0x0
        1f98cc:	ea000026 	b	1f996c <PStdioOutTranslator::Print(char const *,...)>
        1f98d0:	45786974 	ldrmib	r6, [r8, -#2420]!
        1f98d4:	696e6720 	stmvsdb	lr!, {r5, r8, r9, sl, sp, lr}^
        1f98d8:	62726561 	rsbvss	r6, r2, #406847488	; 0x18400000
        1f98dc:	6b206c6f 	blvs	a14aa0 <ROM$$Size+0x2f4e54>
        1f98e0:	6f700d00 	swivs	0x00700d00
    */
}

/**
 * Symbol: PStdioOutTranslator::StackTrace(void *)
 * Address: 001f98e4
 */
PStdioOutTranslator::StackTrace(void *) {
    /*
        1f98e4:	e1a00001 	mov	r0, r1
        1f98e8:	ea61749a 	b	1a56b58 <$REPStackTrace(void *)>
    */
}

/**
 * Symbol: PStdioOutTranslator::ExceptionNotify(Exception *)
 * Address: 001f98ec
 */
PStdioOutTranslator::ExceptionNotify(Exception *) {
    /*
        1f98ec:	e1a00001 	mov	r0, r1
        1f98f0:	ea617497 	b	1a56b54 <$REPExceptionNotify(Exception *)>
    */
}

/**
 * Symbol: PStdioOutTranslator::Delete(void)
 * Address: 001f98f4
 */
PStdioOutTranslator::Delete(void) {
    /*
        1f98f4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PStdioOutTranslator::Init(void *)
 * Address: 001f98f8
 */
PStdioOutTranslator::Init(void *) {
    /*
        1f98f8:	e5911000 	ldr	r1, [r1]
        1f98fc:	e5a01010 	str	r1, [r0, #16]!	; fField16
        1f9900:	e3a00000 	mov	r0, #0	; 0x0
        1f9904:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PStdioOutTranslator::Idle(void)
 * Address: 001f9908
 */
PStdioOutTranslator::Idle(void) {
    /*
        1f9908:	e3a00000 	mov	r0, #0	; 0x0
        1f990c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PStdioOutTranslator::ConsumeFrame(RefVar const &, int, int)
 * Address: 001f9910
 */
PStdioOutTranslator::ConsumeFrame(RefVar const &, int, int) {
    /*
        1f9910:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1f9914:	e3300000 	teq	r0, #0	; 0x0
        1f9918:	11a00001 	movne	r0, r1
        1f991c:	11a01003 	movne	r1, r3
        1f9920:	1a612208 	bne	1a42148 <$PrintObjectAux__FRC6RefVarlT2>
        1f9924:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PStdioOutTranslator::Prompt(int)
 * Address: 001f9928
 */
PStdioOutTranslator::Prompt(int) {
    /*
        1f9928:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PStdioOutTranslator::Flush(void)
 * Address: 001f992c
 */
PStdioOutTranslator::Flush(void) {
    /*
        1f992c:	e1a0c00d 	mov	ip, sp
        1f9930:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1f9934:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f9938:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1f993c:	e3300000 	teq	r0, #0	; 0x0
        1f9940:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        1f9944:	eb67dbc5 	bl	1bf0860 <$fflush>
        1f9948:	e3300000 	teq	r0, #0	; 0x0
        1f994c:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        1f9950:	e59f0010 	ldr	r0, [pc, #10]	; 1f9968 <PStdioOutTranslator::Flush(void)+0x3c>
        1f9954:	e5900000 	ldr	r0, [r0]
        1f9958:	e3a02000 	mov	r2, #0	; 0x0
        1f995c:	e3e01000 	mvn	r1, #0	; 0x0
        1f9960:	e91b6800 	ldmdb	fp, {fp, sp, lr}
        1f9964:	ea67a60c 	b	1be319c <$Throw>
        1f9968:	00371328 	eoreqs	r1, r7, r8, lsr #6
    */
}

/**
 * Symbol: PStdioOutTranslator::Print(char const *,...)
 * Address: 001f996c
 */
PStdioOutTranslator::Print(char const *,...) {
    /*
        1f996c:	e1a0c00d 	mov	ip, sp
        1f9970:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1f9974:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1f9978:	e24cb014 	sub	fp, ip, #20	; 0x14
        1f997c:	e59b0004 	ldr	r0, [fp, #4]
        1f9980:	e5901010 	ldr	r1, [r0, #16]	; fField16
        1f9984:	e3310000 	teq	r1, #0	; 0x0
        1f9988:	03a00000 	moveq	r0, #0	; 0x0
        1f998c:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        1f9990:	e28b100c 	add	r1, fp, #12	; 0xc
        1f9994:	e52d1004 	str	r1, [sp, -#4]!
        1f9998:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1f999c:	e1a0200d 	mov	r2, sp
        1f99a0:	e59b1008 	ldr	r1, [fp, #8]
        1f99a4:	eb67dfb9 	bl	1bf1890 <$vfprintf>
        1f99a8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: PStdioOutTranslator::Putc(int)
 * Address: 001f99ac
 */
PStdioOutTranslator::Putc(int) {
    /*
        1f99ac:	e1a0c00d 	mov	ip, sp
        1f99b0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1f99b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f99b8:	e3a03000 	mov	r3, #0	; 0x0
        1f99bc:	e5b02010 	ldr	r2, [r0, #16]!	; fField16
        1f99c0:	e3320000 	teq	r2, #0	; 0x0
        1f99c4:	0a000003 	beq	1f99d8 <PStdioOutTranslator::Putc(int)+0x2c>
        1f99c8:	e1a00001 	mov	r0, r1
        1f99cc:	e1a01002 	mov	r1, r2
        1f99d0:	eb67dba5 	bl	1bf086c <$fputc>
        1f99d4:	e1a03000 	mov	r3, r0
        1f99d8:	e1a00003 	mov	r0, r3
        1f99dc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: ClassInfo__19PStdioOutTranslatorSFv
 * Address: 003845a8
 */
void PStdioOutTranslator::ClassInfo() {
    /*
        3845a8:	e24f0044 	sub	r0, pc, #68	; 0x44
        3845ac:	e1a0f00e 	mov	pc, lr
        3845b0:	e3a00000 	mov	r0, #0	; 0x0
        3845b4:	e1a0f00e 	mov	pc, lr
        3845b8:	50537464 	subpls	r7, r3, r4, ror #8
        3845bc:	696f4f75 	stmvsdb	pc!, {r0, r2, r4, r5, r6, r8, r9, sl, fp, lr}^
        3845c0:	74547261 	ldrvcb	r7, [r4], -#609
        3845c4:	6e736c61 	cdpvs	12, 7, cr6, cr3, cr1, {3}
        3845c8:	746f7200 	strvcbt	r7, [pc], #200	; 3845d0 <ClassInfo__19PStdioOutTranslatorSFv+0x28>
        3845cc:	504f7574 	subpl	r7, pc, r4, ror r5
        3845d0:	5472616e 	ldrplbt	r6, [r2], -#366
        3845d4:	736c6174 	cmnvc	ip, #29	; 0x1d
        3845d8:	6f720000 	swivs	0x00720000
        3845dc:	00000000 	andeq	r0, r0, r0
        3845e0:	eafffff0 	b	3845a8 <ClassInfo__19PStdioOutTranslatorSFv>
        3845e4:	eaf9d4a1 	b	1f9870 <PStdioOutTranslator::New(void)>
        3845e8:	eaf9d4c1 	b	1f98f4 <PStdioOutTranslator::Delete(void)>
        3845ec:	eaf9d4c1 	b	1f98f8 <PStdioOutTranslator::Init(void *)>
        3845f0:	eaf9d4c4 	b	1f9908 <PStdioOutTranslator::Idle(void)>
        3845f4:	eaf9d4c5 	b	1f9910 <PStdioOutTranslator::ConsumeFrame(RefVar const &, int, int)>
        3845f8:	eaf9d4cb 	b	1f992c <PStdioOutTranslator::Flush(void)>
        3845fc:	eaf9d4c9 	b	1f9928 <PStdioOutTranslator::Prompt(int)>
        384600:	eaf9d4d9 	b	1f996c <PStdioOutTranslator::Print(char const *,...)>
        384604:	eaf9d4e8 	b	1f99ac <PStdioOutTranslator::Putc(int)>
        384608:	eaf9d49b 	b	1f987c <PStdioOutTranslator::EnterBreakLoop(int)>
        38460c:	eaf9d4ad 	b	1f98c8 <PStdioOutTranslator::ExitBreakLoop(void)>
        384610:	eaf9d4b3 	b	1f98e4 <PStdioOutTranslator::StackTrace(void *)>
        384614:	eaf9d4b4 	b	1f98ec <PStdioOutTranslator::ExceptionNotify(Exception *)>
        384618:	00000000 	andeq	r0, r0, r0
        38461c:	00000048 	andeq	r0, r0, r8, asr #32
        384620:	00000056 	andeq	r0, r0, r6, asr r0
        384624:	00000059 	andeq	r0, r0, r9, asr r0
        384628:	00000058 	andeq	r0, r0, r8, asr r0
        38462c:	000000f8 	streqd	r0, [r0], -r8
        384630:	eaf6da5a 	b	13afa0 <Sizeof__17TNewInternalFlashSFv>
        38463c:	eaf6de3c 	b	13bf34 <TNewInternalFlash::New(void)>
        384640:	ea5b7f0b 	b	1a64274 <TNewInternalFlash::$Delete(void)>
        384650:	ea000001 	b	38465c <ClassInfo__17TNewInternalFlashSFv+0x8>
    */
}

