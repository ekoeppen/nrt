#include "include/PSerialOutTranslator.h"

/**
 * Symbol: Sizeof__20PSerialOutTranslatorSFv
 * Address: 001de770
 */
void PSerialOutTranslator::Sizeof() {
    /*
        1de770:	e3a0001c 	mov	r0, #28	; 0x1c
        1de774:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PSerialOutTranslator::New(void)
 * Address: 001de778
 */
PSerialOutTranslator::New(void) {
    /*
        1de778:	e3a01000 	mov	r1, #0	; 0x0
        1de77c:	e5801010 	str	r1, [r0, #16]	; fField16
        1de780:	e5801014 	str	r1, [r0, #20]	; fField20
        1de784:	e5801018 	str	r1, [r0, #24]	; fField24
        1de788:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PSerialOutTranslator::EnterBreakLoop(int)
 * Address: 001de78c
 */
PSerialOutTranslator::EnterBreakLoop(int) {
    /*
        1de78c:	e1a0c00d 	mov	ip, sp
        1de790:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1de794:	e24cb004 	sub	fp, ip, #4	; 0x4
        1de798:	e1a04000 	mov	r4, r0
        1de79c:	e1a05001 	mov	r5, r1
        1de7a0:	e28f1f06 	add	r1, pc, #24	; 0x18
        1de7a4:	eb641ee7 	bl	1ae6348 <PSerialOutTranslator::$Print(char const *,...)>
        1de7a8:	e1a01005 	mov	r1, r5
        1de7ac:	e1a00004 	mov	r0, r4
        1de7b0:	eb63a72d 	bl	1ac846c <PSerialOutTranslator::$Prompt(int)>
        1de7b4:	e1a00004 	mov	r0, r4
        1de7b8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1de7bc:	ea63a2f2 	b	1ac738c <PSerialOutTranslator::$Flush(void)>
        1de7c0:	456e7465 	strmib	r7, [lr, -#1125]!
        1de7c4:	72696e67 	rsbvc	r6, r9, #1648	; 0x670
        1de7c8:	20627265 	rsbcs	r7, r2, r5, ror #4
        1de7cc:	616b206c 	cmnvs	fp, ip, rrx
        1de7d0:	6f6f700d 	swivs	0x006f700d
        1de7d4:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: PSerialOutTranslator::ExitBreakLoop(void)
 * Address: 001de7d8
 */
PSerialOutTranslator::ExitBreakLoop(void) {
    /*
        1de7d8:	e28f1f00 	add	r1, pc, #0	; 0x0
        1de7dc:	ea641ed9 	b	1ae6348 <PSerialOutTranslator::$Print(char const *,...)>
        1de7e0:	45786974 	ldrmib	r6, [r8, -#2420]!
        1de7e4:	696e6720 	stmvsdb	lr!, {r5, r8, r9, sl, sp, lr}^
        1de7e8:	62726561 	rsbvss	r6, r2, #406847488	; 0x18400000
        1de7ec:	6b206c6f 	blvs	9f99b0 <ROM$$Size+0x2d9d64>
        1de7f0:	6f700d00 	swivs	0x00700d00
    */
}

/**
 * Symbol: PSerialOutTranslator::StackTrace(void *)
 * Address: 001de7f4
 */
PSerialOutTranslator::StackTrace(void *) {
    /*
        1de7f4:	e1a00001 	mov	r0, r1
        1de7f8:	ea61e0d6 	b	1a56b58 <$REPStackTrace(void *)>
    */
}

/**
 * Symbol: PSerialOutTranslator::ExceptionNotify(Exception *)
 * Address: 001de7fc
 */
PSerialOutTranslator::ExceptionNotify(Exception *) {
    /*
        1de7fc:	e1a00001 	mov	r0, r1
        1de800:	ea61e0d3 	b	1a56b54 <$REPExceptionNotify(Exception *)>
    */
}

/**
 * Symbol: PSerialOutTranslator::Delete(void)
 * Address: 001de804
 */
PSerialOutTranslator::Delete(void) {
    /*
        1de804:	e5900014 	ldr	r0, [r0, #20]	; fField20
        1de808:	e3300000 	teq	r0, #0	; 0x0
        1de80c:	1a67d051 	bne	1bd2958 <$free>
        1de810:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PSerialOutTranslator::Init(void *)
 * Address: 001de814
 */
PSerialOutTranslator::Init(void *) {
    /*
        1de814:	e1a0c00d 	mov	ip, sp
        1de818:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1de81c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1de820:	e1a04000 	mov	r4, r0
        1de824:	e3a05000 	mov	r5, #0	; 0x0
        1de828:	e1b00001 	movs	r0, r1
        1de82c:	0a00000e 	beq	1de86c <PSerialOutTranslator::Init(void *)+0x58>
        1de830:	e5901000 	ldr	r1, [r0]
        1de834:	e5841010 	str	r1, [r4, #16]	; fField16
        1de838:	e5900004 	ldr	r0, [r0, #4]
        1de83c:	e5840018 	str	r0, [r4, #24]	; fField24
        1de840:	eb67e0c8 	bl	1bd6b68 <$malloc>
        1de844:	e5a40014 	str	r0, [r4, #20]!	; fField20
        1de848:	e3300000 	teq	r0, #0	; 0x0
        1de84c:	0a000003 	beq	1de860 <PSerialOutTranslator::Init(void *)+0x4c>
        1de850:	e59f1004 	ldr	r1, [pc, #4]	; 1de85c <PSerialOutTranslator::Init(void *)+0x48>
        1de854:	eb6805e3 	bl	1bdffe8 <$SetPtrName>
        1de858:	ea000004 	b	1de870 <PSerialOutTranslator::Init(void *)+0x5c>
        1de85c:	72657062 	rsbvc	r7, r5, #98	; 0x62
        1de860:	eb680e2e 	bl	1be2120 <$MemError>
        1de864:	e1a05000 	mov	r5, r0
        1de868:	ea000000 	b	1de870 <PSerialOutTranslator::Init(void *)+0x5c>
        1de86c:	e3e05000 	mvn	r5, #0	; 0x0
        1de870:	e1a00005 	mov	r0, r5
        1de874:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: PSerialOutTranslator::Idle(void)
 * Address: 001de878
 */
PSerialOutTranslator::Idle(void) {
    /*
        1de878:	e3a009e1 	mov	r0, #3686400	; 0x384000
        1de87c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PSerialOutTranslator::ConsumeFrame(RefVar const &, int, int)
 * Address: 001de880
 */
PSerialOutTranslator::ConsumeFrame(RefVar const &, int, int) {
    /*
        1de880:	e1a00001 	mov	r0, r1
        1de884:	e1a01003 	mov	r1, r3
        1de888:	ea618e2e 	b	1a42148 <$PrintObjectAux__FRC6RefVarlT2>
    */
}

/**
 * Symbol: PSerialOutTranslator::Prompt(int)
 * Address: 001de88c
 */
PSerialOutTranslator::Prompt(int) {
    /*
        1de88c:	e1a02001 	mov	r2, r1
        1de890:	e28f1f00 	add	r1, pc, #0	; 0x0
        1de894:	ea641eab 	b	1ae6348 <PSerialOutTranslator::$Print(char const *,...)>
        1de898:	25376420 	ldrcs	r6, [r7, -#1056]!
        1de89c:	3e200000 	cdpcc	0, 2, cr0, cr0, cr0, {0}
    */
}

/**
 * Symbol: PSerialOutTranslator::Flush(void)
 * Address: 001de8a0
 */
PSerialOutTranslator::Flush(void) {
    /*
        1de8a0:	e1a0c00d 	mov	ip, sp
        1de8a4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1de8a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1de8ac:	e1a04000 	mov	r4, r0
        1de8b0:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1de8b4:	e5901000 	ldr	r1, [r0]
        1de8b8:	e1a0e00f 	mov	lr, pc
        1de8bc:	e281f040 	add	pc, r1, #64	; 0x40
        1de8c0:	e59f5028 	ldr	r5, [pc, #28]	; 1de8f0 <PSerialOutTranslator::Flush(void)+0x50>
        1de8c4:	e3500000 	cmp	r0, #0	; 0x0
        1de8c8:	d91ba830 	ldmledb	fp, {r4, r5, fp, sp, pc}
        1de8cc:	e1a00005 	mov	r0, r5
        1de8d0:	eb67f955 	bl	1bdce2c <$Sleep(unsigned long)>
        1de8d4:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1de8d8:	e5901000 	ldr	r1, [r0]
        1de8dc:	e1a0e00f 	mov	lr, pc
        1de8e0:	e281f040 	add	pc, r1, #64	; 0x40
        1de8e4:	e3500000 	cmp	r0, #0	; 0x0
        1de8e8:	cafffff7 	bgt	1de8cc <PSerialOutTranslator::Flush(void)+0x2c>
        1de8ec:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1de8f0:	000e0f9c 	muleq	lr, ip, pc
    */
}

/**
 * Symbol: PSerialOutTranslator::Print(char const *,...)
 * Address: 001de8f4
 */
PSerialOutTranslator::Print(char const *,...) {
    /*
        1de8f4:	e1a0c00d 	mov	ip, sp
        1de8f8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1de8fc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1de900:	e24cb014 	sub	fp, ip, #20	; 0x14
        1de904:	e28b000c 	add	r0, fp, #12	; 0xc
        1de908:	e52d0004 	str	r0, [sp, -#4]!
        1de90c:	e59b0004 	ldr	r0, [fp, #4]
        1de910:	e5900014 	ldr	r0, [r0, #20]	; fField20
        1de914:	e1a0200d 	mov	r2, sp
        1de918:	e59b1008 	ldr	r1, [fp, #8]
        1de91c:	eb675c6f 	bl	1bb5ae0 <$vsprintf>
        1de920:	e1a04000 	mov	r4, r0
        1de924:	e3e000ff 	mvn	r0, #255	; 0xff
        1de928:	e58d0000 	str	r0, [sp]
        1de92c:	e59b0004 	ldr	r0, [fp, #4]
        1de930:	e5901018 	ldr	r1, [r0, #24]	; fField24
        1de934:	e1510004 	cmp	r1, r4
        1de938:	aa000007 	bge	1de95c <PSerialOutTranslator::Print(char const *,...)+0x68>
        1de93c:	e59f0014 	ldr	r0, [pc, #14]	; 1de958 <PSerialOutTranslator::Print(char const *,...)+0x64>
        1de940:	e5900000 	ldr	r0, [r0]
        1de944:	e3a02000 	mov	r2, #0	; 0x0
        1de948:	e3a010ad 	mov	r1, #173	; 0xad
        1de94c:	e2411cbd 	sub	r1, r1, #48384	; 0xbd00
        1de950:	eb681211 	bl	1be319c <$Throw>
        1de954:	ea00000b 	b	1de988 <PSerialOutTranslator::Print(char const *,...)+0x94>
        1de958:	00371328 	eoreqs	r1, r7, r8, lsr #6
        1de95c:	e3540000 	cmp	r4, #0	; 0x0
        1de960:	da000008 	ble	1de988 <PSerialOutTranslator::Print(char const *,...)+0x94>
        1de964:	e5b05014 	ldr	r5, [r0, #20]!	; fField20
        1de968:	e4d51001 	ldrb	r1, [r5], #1
        1de96c:	e3310000 	teq	r1, #0	; 0x0
        1de970:	0a000004 	beq	1de988 <PSerialOutTranslator::Print(char const *,...)+0x94>
        1de974:	e59b0004 	ldr	r0, [fp, #4]
        1de978:	eb63a6bd 	bl	1ac8474 <PSerialOutTranslator::$Putc(int)>
        1de97c:	e4d51001 	ldrb	r1, [r5], #1
        1de980:	e3310000 	teq	r1, #0	; 0x0
        1de984:	1afffffa 	bne	1de974 <PSerialOutTranslator::Print(char const *,...)+0x80>
        1de988:	e1a00004 	mov	r0, r4
        1de98c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: PSerialOutTranslator::Putc(int)
 * Address: 001de990
 */
PSerialOutTranslator::Putc(int) {
    /*
        1de990:	e1a0c00d 	mov	ip, sp
        1de994:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1de998:	e24cb004 	sub	fp, ip, #4	; 0x4
        1de99c:	e1a05000 	mov	r5, r0
        1de9a0:	e1a04001 	mov	r4, r1
        1de9a4:	e590c010 	ldr	ip, [r0, #16]	; fField16
        1de9a8:	e1a0000c 	mov	r0, ip
        1de9ac:	e3a03000 	mov	r3, #0	; 0x0
        1de9b0:	e59f6038 	ldr	r6, [pc, #38]	; 1de9f0 <PSerialOutTranslator::Putc(int)+0x60>
        1de9b4:	e1a02006 	mov	r2, r6
        1de9b8:	e59cc000 	ldr	ip, [ip]
        1de9bc:	e1a0e00f 	mov	lr, pc
        1de9c0:	e28cf05c 	add	pc, ip, #92	; 0x5c
        1de9c4:	e334000d 	teq	r4, #13	; 0xd
        1de9c8:	1a000006 	bne	1de9e8 <PSerialOutTranslator::Putc(int)+0x58>
        1de9cc:	e3a03000 	mov	r3, #0	; 0x0
        1de9d0:	e1a02006 	mov	r2, r6
        1de9d4:	e3a0100a 	mov	r1, #10	; 0xa
        1de9d8:	e5b50010 	ldr	r0, [r5, #16]!	; fField16
        1de9dc:	e590c000 	ldr	ip, [r0]
        1de9e0:	e1a0e00f 	mov	lr, pc
        1de9e4:	e28cf05c 	add	pc, ip, #92	; 0x5c
        1de9e8:	e1a00004 	mov	r0, r4
        1de9ec:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1de9f0:	000e0f9c 	muleq	lr, ip, pc
    */
}

/**
 * Symbol: ClassInfo__20PSerialOutTranslatorSFv
 * Address: 00385a88
 */
void PSerialOutTranslator::ClassInfo() {
    /*
        385a88:	e24f0044 	sub	r0, pc, #68	; 0x44
        385a8c:	e1a0f00e 	mov	pc, lr
        385a90:	e3a00000 	mov	r0, #0	; 0x0
        385a94:	e1a0f00e 	mov	pc, lr
        385a98:	50536572 	subpls	r6, r3, r2, ror r5
        385a9c:	69616c4f 	stmvsdb	r1!, {r0, r1, r2, r3, r6, sl, fp, sp, lr}^
        385aa0:	75745472 	ldrvcb	r5, [r4, -#1138]!
        385aa4:	616e736c 	cmnvs	lr, ip, ror #6
        385aa8:	61746f72 	cmnvs	r4, r2, ror pc
        385aac:	00504f75 	subeqs	r4, r0, r5, ror pc
        385ab0:	74547261 	ldrvcb	r7, [r4], -#609
        385ab4:	6e736c61 	cdpvs	12, 7, cr6, cr3, cr1, {3}
        385ab8:	746f7200 	strvcbt	r7, [pc], #200	; 385ac0 <ClassInfo__20PSerialOutTranslatorSFv+0x38>
        385ac4:	eaffffef 	b	385a88 <ClassInfo__20PSerialOutTranslatorSFv>
        385ac8:	ea5d0a5b 	b	1ac843c <PSerialOutTranslator::$New(void)>
        385acc:	ea5cf9e9 	b	1ac4278 <PSerialOutTranslator::$Delete(void)>
        385ad0:	ea5d0646 	b	1ac73f0 <PSerialOutTranslator::$Init(void *)>
        385ad4:	ea5d063c 	b	1ac73cc <PSerialOutTranslator::$Idle(void)>
        385ad8:	ea5cf9d8 	b	1ac4240 <PSerialOutTranslator::$ConsumeFrame(RefVar const &, int, int)>
        385adc:	ea5d062a 	b	1ac738c <PSerialOutTranslator::$Flush(void)>
        385ae0:	ea5d0a61 	b	1ac846c <PSerialOutTranslator::$Prompt(int)>
        385ae4:	ea5d8217 	b	1ae6348 <PSerialOutTranslator::$Print(char const *,...)>
        385ae8:	ea5d0a61 	b	1ac8474 <PSerialOutTranslator::$Putc(int)>
        385aec:	ea5cfde6 	b	1ac528c <PSerialOutTranslator::$EnterBreakLoop(int)>
        385af0:	ea5cfdeb 	b	1ac52a4 <PSerialOutTranslator::$ExitBreakLoop(void)>
        385af4:	ea5d1282 	b	1aca504 <PSerialOutTranslator::$StackTrace(void *)>
        385af8:	ea5cfde6 	b	1ac5298 <PSerialOutTranslator::$ExceptionNotify(Exception *)>
        385afc:	e1a0000f 	mov	r0, pc
        385b00:	e1a0f00e 	mov	pc, lr
        385b04:	54457874 	strplb	r7, [r5], -#2164
        385b08:	65726e61 	ldrvsb	r6, [r2, -#3681]!
        385b0c:	6c4e6577 	mcrrvs	5, 7, r6, lr, cr7
        385b10:	74457665 	strvcb	r7, [r5], -#1637
        385b14:	6e744861 	cdpvs	8, 7, cr4, cr4, cr1, {3}
        385b18:	6e646c65 	cdpvs	12, 6, cr6, cr4, cr5, {3}
        385b1c:	72000000 	andvc	r0, r0, #0	; 0x0
    */
}

