#include "include/PHammerOutTranslator.h"

/**
 * Symbol: Sizeof__20PHammerOutTranslatorSFv
 * Address: 000e68d4
 */
void PHammerOutTranslator::Sizeof() {
    /*
         e68d4:	e3a00018 	mov	r0, #24	; 0x18
         e68d8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PHammerOutTranslator::New(void)
 * Address: 000e68dc
 */
PHammerOutTranslator::New(void) {
    /*
         e68dc:	e3a01000 	mov	r1, #0	; 0x0
         e68e0:	e5801010 	str	r1, [r0, #16]	; fField16
         e68e4:	e5801014 	str	r1, [r0, #20]	; fField20
         e68e8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PHammerOutTranslator::EnterBreakLoop(int)
 * Address: 000e68ec
 */
PHammerOutTranslator::EnterBreakLoop(int) {
    /*
         e68ec:	e1a0c00d 	mov	ip, sp
         e68f0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         e68f4:	e24cb004 	sub	fp, ip, #4	; 0x4
         e68f8:	e1a04000 	mov	r4, r0
         e68fc:	e1a05001 	mov	r5, r1
         e6900:	e28f1f06 	add	r1, pc, #24	; 0x18
         e6904:	eb000061 	bl	e6a90 <PHammerOutTranslator::Print(char const *,...)>
         e6908:	e1a01005 	mov	r1, r5
         e690c:	e1a00004 	mov	r0, r4
         e6910:	eb000046 	bl	e6a30 <PHammerOutTranslator::Prompt(int)>
         e6914:	e1a00004 	mov	r0, r4
         e6918:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         e691c:	ea00004b 	b	e6a50 <PHammerOutTranslator::Flush(void)>
         e6920:	456e7465 	strmib	r7, [lr, -#1125]!
         e6924:	72696e67 	rsbvc	r6, r9, #1648	; 0x670
         e6928:	20627265 	rsbcs	r7, r2, r5, ror #4
         e692c:	616b206c 	cmnvs	fp, ip, rrx
         e6930:	6f6f700d 	swivs	0x006f700d
         e6934:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: PHammerOutTranslator::ExitBreakLoop(void)
 * Address: 000e6938
 */
PHammerOutTranslator::ExitBreakLoop(void) {
    /*
         e6938:	e28f1f00 	add	r1, pc, #0	; 0x0
         e693c:	ea000053 	b	e6a90 <PHammerOutTranslator::Print(char const *,...)>
         e6940:	45786974 	ldrmib	r6, [r8, -#2420]!
         e6944:	696e6720 	stmvsdb	lr!, {r5, r8, r9, sl, sp, lr}^
         e6948:	62726561 	rsbvss	r6, r2, #406847488	; 0x18400000
         e694c:	6b206c6f 	blvs	901b10 <ROM$$Size+0x1e1ec4>
         e6950:	6f700d00 	swivs	0x00700d00
    */
}

/**
 * Symbol: PHammerOutTranslator::StackTrace(void *)
 * Address: 000e6954
 */
PHammerOutTranslator::StackTrace(void *) {
    /*
         e6954:	e1a00001 	mov	r0, r1
         e6958:	ea65c07e 	b	1a56b58 <$REPStackTrace(void *)>
    */
}

/**
 * Symbol: PHammerOutTranslator::ExceptionNotify(Exception *)
 * Address: 000e695c
 */
PHammerOutTranslator::ExceptionNotify(Exception *) {
    /*
         e695c:	e1a00001 	mov	r0, r1
         e6960:	ea65c07b 	b	1a56b54 <$REPExceptionNotify(Exception *)>
    */
}

/**
 * Symbol: PHammerOutTranslator::Delete(void)
 * Address: 000e6964
 */
PHammerOutTranslator::Delete(void) {
    /*
         e6964:	e1a0c00d 	mov	ip, sp
         e6968:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         e696c:	e24cb004 	sub	fp, ip, #4	; 0x4
         e6970:	e1a04000 	mov	r4, r0
         e6974:	e5900010 	ldr	r0, [r0, #16]	; fField16
         e6978:	e3300000 	teq	r0, #0	; 0x0
         e697c:	1b6c27b4 	blne	1bf0854 <$fclose>
         e6980:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
         e6984:	e3300000 	teq	r0, #0	; 0x0
         e6988:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         e698c:	1a6baff1 	bne	1bd2958 <$free>
         e6990:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: PHammerOutTranslator::Init(void *)
 * Address: 000e6994
 */
PHammerOutTranslator::Init(void *) {
    /*
         e6994:	e1a0c00d 	mov	ip, sp
         e6998:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         e699c:	e24cb004 	sub	fp, ip, #4	; 0x4
         e69a0:	e1a04000 	mov	r4, r0
         e69a4:	e3a05000 	mov	r5, #0	; 0x0
         e69a8:	e1a06001 	mov	r6, r1
         e69ac:	e5b10004 	ldr	r0, [r1, #4]!
         e69b0:	eb6bc06c 	bl	1bd6b68 <$malloc>
         e69b4:	e5840014 	str	r0, [r4, #20]	; fField20
         e69b8:	e3300000 	teq	r0, #0	; 0x0
         e69bc:	0a00000e 	beq	e69fc <PHammerOutTranslator::Init(void *)+0x68>
         e69c0:	e59f102c 	ldr	r1, [pc, #2c]	; e69f4 <PHammerOutTranslator::Init(void *)+0x60>
         e69c4:	eb6be587 	bl	1bdffe8 <$SetPtrName>
         e69c8:	e5960000 	ldr	r0, [r6]
         e69cc:	e28f1f09 	add	r1, pc, #36	; 0x24
         e69d0:	eb6c27a3 	bl	1bf0864 <$fopen>
         e69d4:	e5840010 	str	r0, [r4, #16]	; fField16
         e69d8:	e3300000 	teq	r0, #0	; 0x0
         e69dc:	0a000008 	beq	e6a04 <PHammerOutTranslator::Init(void *)+0x70>
         e69e0:	e5b63004 	ldr	r3, [r6, #4]!
         e69e4:	e3a02c02 	mov	r2, #512	; 0x200
         e69e8:	e5b41014 	ldr	r1, [r4, #20]!	; fField20
         e69ec:	eb6c2ba5 	bl	1bf1888 <$setvbuf>
         e69f0:	ea000003 	b	e6a04 <PHammerOutTranslator::Init(void *)+0x70>
         e69f4:	52455062 	subpl	r5, r5, #98	; 0x62
         e69f8:	77000000 	strvc	r0, [r0, -r0]
         e69fc:	eb6bedc7 	bl	1be2120 <$MemError>
         e6a00:	e1a05000 	mov	r5, r0
         e6a04:	e1a00005 	mov	r0, r5
         e6a08:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: PHammerOutTranslator::Idle(void)
 * Address: 000e6a0c
 */
PHammerOutTranslator::Idle(void) {
    /*
         e6a0c:	e59f0000 	ldr	r0, [pc, #0]	; e6a14 <PHammerOutTranslator::Idle(void)+0x8>
         e6a10:	e1a0f00e 	mov	pc, lr
         e6a14:	000e0f9c 	muleq	lr, ip, pc
    */
}

/**
 * Symbol: PHammerOutTranslator::ConsumeFrame(RefVar const &, int, int)
 * Address: 000e6a18
 */
PHammerOutTranslator::ConsumeFrame(RefVar const &, int, int) {
    /*
         e6a18:	e5900010 	ldr	r0, [r0, #16]	; fField16
         e6a1c:	e3300000 	teq	r0, #0	; 0x0
         e6a20:	11a00001 	movne	r0, r1
         e6a24:	11a01003 	movne	r1, r3
         e6a28:	1a656dc6 	bne	1a42148 <$PrintObjectAux__FRC6RefVarlT2>
         e6a2c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PHammerOutTranslator::Prompt(int)
 * Address: 000e6a30
 */
PHammerOutTranslator::Prompt(int) {
    /*
         e6a30:	e5902010 	ldr	r2, [r0, #16]	; fField16
         e6a34:	e3320000 	teq	r2, #0	; 0x0
         e6a38:	11a02001 	movne	r2, r1
         e6a3c:	128f1f01 	addne	r1, pc, #4	; 0x4
         e6a40:	1a000012 	bne	e6a90 <PHammerOutTranslator::Print(char const *,...)>
         e6a44:	e1a0f00e 	mov	pc, lr
         e6a48:	25376420 	ldrcs	r6, [r7, -#1056]!
         e6a4c:	3e200000 	cdpcc	0, 2, cr0, cr0, cr0, {0}
    */
}

/**
 * Symbol: PHammerOutTranslator::Flush(void)
 * Address: 000e6a50
 */
PHammerOutTranslator::Flush(void) {
    /*
         e6a50:	e1a0c00d 	mov	ip, sp
         e6a54:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         e6a58:	e24cb004 	sub	fp, ip, #4	; 0x4
         e6a5c:	e5900010 	ldr	r0, [r0, #16]	; fField16
         e6a60:	e3300000 	teq	r0, #0	; 0x0
         e6a64:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         e6a68:	eb6c277c 	bl	1bf0860 <$fflush>
         e6a6c:	e3300000 	teq	r0, #0	; 0x0
         e6a70:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         e6a74:	e1a01000 	mov	r1, r0
         e6a78:	e59f000c 	ldr	r0, [pc, #c]	; e6a8c <PHammerOutTranslator::Flush(void)+0x3c>
         e6a7c:	e5900000 	ldr	r0, [r0]
         e6a80:	e3a02000 	mov	r2, #0	; 0x0
         e6a84:	e91b6800 	ldmdb	fp, {fp, sp, lr}
         e6a88:	ea6bf1c3 	b	1be319c <$Throw>
         e6a8c:	00371328 	eoreqs	r1, r7, r8, lsr #6
    */
}

/**
 * Symbol: PHammerOutTranslator::Print(char const *,...)
 * Address: 000e6a90
 */
PHammerOutTranslator::Print(char const *,...) {
    /*
         e6a90:	e1a0c00d 	mov	ip, sp
         e6a94:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         e6a98:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         e6a9c:	e24cb014 	sub	fp, ip, #20	; 0x14
         e6aa0:	e59b0004 	ldr	r0, [fp, #4]
         e6aa4:	e5901010 	ldr	r1, [r0, #16]	; fField16
         e6aa8:	e3310000 	teq	r1, #0	; 0x0
         e6aac:	03a00000 	moveq	r0, #0	; 0x0
         e6ab0:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         e6ab4:	e28b100c 	add	r1, fp, #12	; 0xc
         e6ab8:	e52d1004 	str	r1, [sp, -#4]!
         e6abc:	e5900010 	ldr	r0, [r0, #16]	; fField16
         e6ac0:	e1a0200d 	mov	r2, sp
         e6ac4:	e59b1008 	ldr	r1, [fp, #8]
         e6ac8:	eb6c2b70 	bl	1bf1890 <$vfprintf>
         e6acc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: PHammerOutTranslator::Putc(int)
 * Address: 000e6ad0
 */
PHammerOutTranslator::Putc(int) {
    /*
         e6ad0:	e1a0c00d 	mov	ip, sp
         e6ad4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         e6ad8:	e24cb004 	sub	fp, ip, #4	; 0x4
         e6adc:	e3a03000 	mov	r3, #0	; 0x0
         e6ae0:	e5b02010 	ldr	r2, [r0, #16]!	; fField16
         e6ae4:	e3320000 	teq	r2, #0	; 0x0
         e6ae8:	0a000003 	beq	e6afc <PHammerOutTranslator::Putc(int)+0x2c>
         e6aec:	e1a00001 	mov	r0, r1
         e6af0:	e1a01002 	mov	r1, r2
         e6af4:	eb6c275c 	bl	1bf086c <$fputc>
         e6af8:	e1a03000 	mov	r3, r0
         e6afc:	e1a00003 	mov	r0, r3
         e6b00:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: ClassInfo__20PHammerOutTranslatorSFv
 * Address: 0038432c
 */
void PHammerOutTranslator::ClassInfo() {
    /*
        38432c:	e24f0044 	sub	r0, pc, #68	; 0x44
        384330:	e1a0f00e 	mov	pc, lr
        384334:	e3a00000 	mov	r0, #0	; 0x0
        384338:	e1a0f00e 	mov	pc, lr
        38433c:	5048616d 	subpl	r6, r8, sp, ror #2
        384340:	6d65724f 	sfmvs	f7, 2, [r5, -#316]!
        384344:	75745472 	ldrvcb	r5, [r4, -#1138]!
        384348:	616e736c 	cmnvs	lr, ip, ror #6
        38434c:	61746f72 	cmnvs	r4, r2, ror pc
        384350:	00504f75 	subeqs	r4, r0, r5, ror pc
        384354:	74547261 	ldrvcb	r7, [r4], -#609
        384358:	6e736c61 	cdpvs	12, 7, cr6, cr3, cr1, {3}
        38435c:	746f7200 	strvcbt	r7, [pc], #200	; 384364 <ClassInfo__20PHammerOutTranslatorSFv+0x38>
        384368:	eaffffef 	b	38432c <ClassInfo__20PHammerOutTranslatorSFv>
        38436c:	eaf5895a 	b	e68dc <PHammerOutTranslator::New(void)>
        384370:	eaf5897b 	b	e6964 <PHammerOutTranslator::Delete(void)>
        384374:	eaf58986 	b	e6994 <PHammerOutTranslator::Init(void *)>
        384378:	eaf589a3 	b	e6a0c <PHammerOutTranslator::Idle(void)>
        38437c:	eaf589a5 	b	e6a18 <PHammerOutTranslator::ConsumeFrame(RefVar const &, int, int)>
        384380:	eaf589b2 	b	e6a50 <PHammerOutTranslator::Flush(void)>
        384384:	eaf589a9 	b	e6a30 <PHammerOutTranslator::Prompt(int)>
        384388:	eaf589c0 	b	e6a90 <PHammerOutTranslator::Print(char const *,...)>
        38438c:	eaf589cf 	b	e6ad0 <PHammerOutTranslator::Putc(int)>
        384390:	eaf58955 	b	e68ec <PHammerOutTranslator::EnterBreakLoop(int)>
        384394:	eaf58967 	b	e6938 <PHammerOutTranslator::ExitBreakLoop(void)>
        384398:	eaf5896d 	b	e6954 <PHammerOutTranslator::StackTrace(void *)>
        38439c:	eaf5896e 	b	e695c <PHammerOutTranslator::ExceptionNotify(Exception *)>
        3843a0:	00000000 	andeq	r0, r0, r0
        3843a4:	00000048 	andeq	r0, r0, r8, asr #32
        3843a8:	00000056 	andeq	r0, r0, r6, asr r0
        3843ac:	00000060 	andeq	r0, r0, r0, rrx
        3843b0:	00000060 	andeq	r0, r0, r0, rrx
        3843b4:	0000007c 	andeq	r0, r0, ip, ror r0
        3843b8:	eaf70b44 	b	1470d0 <Sizeof__17PNullInTranslatorSFv>
        3843c4:	eaf70b43 	b	1470d8 <PNullInTranslator::New(void)>
        3843c8:	eaf70b43 	b	1470dc <PNullInTranslator::Delete(void)>
        3843d8:	ea000001 	b	3843e4 <ClassInfo__17PNullInTranslatorSFv+0x8>
    */
}

