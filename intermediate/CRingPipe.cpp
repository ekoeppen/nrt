#include "include/CRingPipe.h"

/**
 * Symbol: CRingPipe::__ct(void)
 * Address: 001ad870
 */
CRingPipe::CRingPipe(void) {
    /*
        1ad870:	e1a0c00d 	mov	ip, sp
        1ad874:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1ad878:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ad87c:	e1b04000 	movs	r4, r0
        1ad880:	1a000003 	bne	1ad894 <CRingPipe::__ct(void)+0x24>
        1ad884:	e3a0000c 	mov	r0, #12	; 0xc
        1ad888:	eb6883aa 	bl	1bce738 <$__nw(unsigned int)>
        1ad88c:	e1b04000 	movs	r4, r0
        1ad890:	0a000006 	beq	1ad8b0 <CRingPipe::__ct(void)+0x40>
        1ad894:	e1a00004 	mov	r0, r4
        1ad898:	eb68da64 	bl	1be4230 <CPipe::$__ct(void)>
        1ad89c:	e59f0014 	ldr	r0, [pc, #14]	; 1ad8b8 <CRingPipe::__ct(void)+0x48>
        1ad8a0:	e5840000 	str	r0, [r4]
        1ad8a4:	e3a00000 	mov	r0, #0	; 0x0
        1ad8a8:	e5840004 	str	r0, [r4, #4]	; fField4
        1ad8ac:	e5c40008 	strb	r0, [r4, #8]	; fField8
        1ad8b0:	e1a00004 	mov	r0, r4
        1ad8b4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1ad8b8:	000206c0 	andeq	r0, r2, r0, asr #13
    */
}

/**
 * Symbol: CRingPipe::__dt(void)
 * Address: 001ad8bc
 */
CRingPipe::~CRingPipe(void) {
    /*
        1ad8bc:	e1a0c00d 	mov	ip, sp
        1ad8c0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1ad8c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ad8c8:	e1a04000 	mov	r4, r0
        1ad8cc:	e1a05001 	mov	r5, r1
        1ad8d0:	e59f0040 	ldr	r0, [pc, #40]	; 1ad918 <CRingPipe::__dt(void)+0x5c>
        1ad8d4:	e5840000 	str	r0, [r4]
        1ad8d8:	e5d40008 	ldrb	r0, [r4, #8]	; fField8
        1ad8dc:	e3300000 	teq	r0, #0	; 0x0
        1ad8e0:	15940004 	ldrne	r0, [r4, #4]	; fField4
        1ad8e4:	13300000 	teqne	r0, #0	; 0x0
        1ad8e8:	0a000002 	beq	1ad8f8 <CRingPipe::__dt(void)+0x3c>
        1ad8ec:	e3a01001 	mov	r1, #1	; 0x1
        1ad8f0:	e1a0e00f 	mov	lr, pc
        1ad8f4:	e590f000 	ldr	pc, [r0]
        1ad8f8:	e1a00004 	mov	r0, r4
        1ad8fc:	e3a01000 	mov	r1, #0	; 0x0
        1ad900:	eb68de60 	bl	1be5288 <CPipe::$__dt(void)>
        1ad904:	e3150001 	tst	r5, #1	; 0x1
        1ad908:	11a00004 	movne	r0, r4
        1ad90c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1ad910:	1a687f72 	bne	1bcd6e0 <$__dl(void *)>
        1ad914:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1ad918:	000206c0 	andeq	r0, r2, r0, asr #13
    */
}

/**
 * Symbol: CRingPipe::WritePosition( const(void))
 * Address: 001ad91c
 */
CRingPipe::WritePosition( const(void)) {
    /*
        1ad91c:	e3a00000 	mov	r0, #0	; 0x0
        1ad920:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CRingPipe::Init(long)
 * Address: 001ad924
 */
CRingPipe::Init(long) {
    /*
        1ad924:	e1a0c00d 	mov	ip, sp
        1ad928:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1ad92c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ad930:	e1a04000 	mov	r4, r0
        1ad934:	e1a05001 	mov	r5, r1
        1ad938:	e3a00001 	mov	r0, #1	; 0x1
        1ad93c:	e5c40008 	strb	r0, [r4, #8]	; fField8
        1ad940:	e3a00000 	mov	r0, #0	; 0x0
        1ad944:	e5c40009 	strb	r0, [r4, #9]	; fField9
        1ad948:	eb68d61e 	bl	1be31c8 <CRingBuffer::$__ct(void)>
        1ad94c:	e1b06000 	movs	r6, r0
        1ad950:	e59f7040 	ldr	r7, [pc, #40]	; 1ad998 <CRingPipe::Init(long)+0x74>
        1ad954:	1a000004 	bne	1ad96c <CRingPipe::Init(long)+0x48>
        1ad958:	eb68d1f0 	bl	1be2120 <$MemError>
        1ad95c:	e1a01000 	mov	r1, r0
        1ad960:	e3a02000 	mov	r2, #0	; 0x0
        1ad964:	e5970000 	ldr	r0, [r7]
        1ad968:	eb68d60b 	bl	1be319c <$Throw>
        1ad96c:	e1a01005 	mov	r1, r5
        1ad970:	e1a00006 	mov	r0, r6
        1ad974:	eb68eec7 	bl	1be9498 <CRingBuffer::$Init(long)>
        1ad978:	e3300000 	teq	r0, #0	; 0x0
        1ad97c:	0a000003 	beq	1ad990 <CRingPipe::Init(long)+0x6c>
        1ad980:	e1a01000 	mov	r1, r0
        1ad984:	e3a02000 	mov	r2, #0	; 0x0
        1ad988:	e5970000 	ldr	r0, [r7]
        1ad98c:	eb68d602 	bl	1be319c <$Throw>
        1ad990:	e5a46004 	str	r6, [r4, #4]!	; fField4
        1ad994:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1ad998:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: CRingPipe::Init(CBaseRingBuffer *, unsigned char)
 * Address: 001ad99c
 */
CRingPipe::Init(CBaseRingBuffer *, unsigned char) {
    /*
        1ad99c:	e1a03000 	mov	r3, r0
        1ad9a0:	e5831004 	str	r1, [r3, #4]	; fField4
        1ad9a4:	e5c02008 	strb	r2, [r0, #8]	; fField8
        1ad9a8:	e5901000 	ldr	r1, [r0]
        1ad9ac:	e281f024 	add	pc, r1, #36	; 0x24
    */
}

/**
 * Symbol: CRingPipe::Reset(void)
 * Address: 001ad9b0
 */
CRingPipe::Reset(void) {
    /*
        1ad9b0:	e3a01000 	mov	r1, #0	; 0x0
        1ad9b4:	e5c01009 	strb	r1, [r0, #9]	; fField9
        1ad9b8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1ad9bc:	e3300000 	teq	r0, #0	; 0x0
        1ad9c0:	15901000 	ldrne	r1, [r0]
        1ad9c4:	1281f028 	addne	pc, r1, #40	; 0x28
        1ad9c8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CRingPipe::ReadChunk(void *, long &, unsigned char &)
 * Address: 001ad9cc
 */
CRingPipe::ReadChunk(void *, long &, unsigned char &) {
    /*
        1ad9cc:	e1a0c00d 	mov	ip, sp
        1ad9d0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1ad9d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ad9d8:	e1a04000 	mov	r4, r0
        1ad9dc:	e1a07001 	mov	r7, r1
        1ad9e0:	e1a05002 	mov	r5, r2
        1ad9e4:	e1a06003 	mov	r6, r3
        1ad9e8:	e24dd004 	sub	sp, sp, #4	; 0x4
        1ad9ec:	e5920000 	ldr	r0, [r2]
        1ad9f0:	e58d0000 	str	r0, [sp]
        1ad9f4:	e5920000 	ldr	r0, [r2]
        1ad9f8:	e3500000 	cmp	r0, #0	; 0x0
        1ad9fc:	da00002c 	ble	1adab4 <CRingPipe::ReadChunk(void *, long &, unsigned char &)+0xe8>
        1ada00:	e1a0200d 	mov	r2, sp
        1ada04:	e1a01007 	mov	r1, r7
        1ada08:	e5943004 	ldr	r3, [r4, #4]	; fField4
        1ada0c:	e1a00003 	mov	r0, r3
        1ada10:	e5933000 	ldr	r3, [r3]
        1ada14:	e1a0e00f 	mov	lr, pc
        1ada18:	e283f018 	add	pc, r3, #24	; 0x18
        1ada1c:	e59f80bc 	ldr	r8, [pc, #bc]	; 1adae0 <CRingPipe::ReadChunk(void *, long &, unsigned char &)+0x114>
        1ada20:	e3700001 	cmn	r0, #1	; 0x1
        1ada24:	13300000 	teqne	r0, #0	; 0x0
        1ada28:	0a000003 	beq	1ada3c <CRingPipe::ReadChunk(void *, long &, unsigned char &)+0x70>
        1ada2c:	e1a01000 	mov	r1, r0
        1ada30:	e3a02000 	mov	r2, #0	; 0x0
        1ada34:	e5980000 	ldr	r0, [r8]
        1ada38:	eb68d5d7 	bl	1be319c <$Throw>
        1ada3c:	e59d0000 	ldr	r0, [sp]
        1ada40:	e3500000 	cmp	r0, #0	; 0x0
        1ada44:	da00001a 	ble	1adab4 <CRingPipe::ReadChunk(void *, long &, unsigned char &)+0xe8>
        1ada48:	e2849009 	add	r9, r4, #9	; 0x9
        1ada4c:	e1a02009 	mov	r2, r9
        1ada50:	e1a00004 	mov	r0, r4
        1ada54:	e59d1000 	ldr	r1, [sp]
        1ada58:	e5943000 	ldr	r3, [r4]
        1ada5c:	e1a0e00f 	mov	lr, pc
        1ada60:	e283f034 	add	pc, r3, #52	; 0x34
        1ada64:	e5943004 	ldr	r3, [r4, #4]	; fField4
        1ada68:	e5950000 	ldr	r0, [r5]
        1ada6c:	e0870000 	add	r0, r7, r0
        1ada70:	e59d1000 	ldr	r1, [sp]
        1ada74:	e0401001 	sub	r1, r0, r1
        1ada78:	e1a0200d 	mov	r2, sp
        1ada7c:	e1a00003 	mov	r0, r3
        1ada80:	e5933000 	ldr	r3, [r3]
        1ada84:	e1a0e00f 	mov	lr, pc
        1ada88:	e283f018 	add	pc, r3, #24	; 0x18
        1ada8c:	e3700001 	cmn	r0, #1	; 0x1
        1ada90:	13300000 	teqne	r0, #0	; 0x0
        1ada94:	0a000003 	beq	1adaa8 <CRingPipe::ReadChunk(void *, long &, unsigned char &)+0xdc>
        1ada98:	e1a01000 	mov	r1, r0
        1ada9c:	e3a02000 	mov	r2, #0	; 0x0
        1adaa0:	e5980000 	ldr	r0, [r8]
        1adaa4:	eb68d5bc 	bl	1be319c <$Throw>
        1adaa8:	e59d0000 	ldr	r0, [sp]
        1adaac:	e3500000 	cmp	r0, #0	; 0x0
        1adab0:	caffffe5 	bgt	1ada4c <CRingPipe::ReadChunk(void *, long &, unsigned char &)+0x80>
        1adab4:	e5d41009 	ldrb	r1, [r4, #9]	; fField9
        1adab8:	e3a00000 	mov	r0, #0	; 0x0
        1adabc:	e3310000 	teq	r1, #0	; 0x0
        1adac0:	15c40009 	strneb	r0, [r4, #9]	; fField9
        1adac4:	13a00001 	movne	r0, #1	; 0x1
        1adac8:	e5c60000 	strb	r0, [r6]
        1adacc:	e5951000 	ldr	r1, [r5]
        1adad0:	e59d0000 	ldr	r0, [sp]
        1adad4:	e0410000 	sub	r0, r1, r0
        1adad8:	e5850000 	str	r0, [r5]
        1adadc:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1adae0:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: CRingPipe::WriteChunk(void *, long, unsigned char)
 * Address: 001adae4
 */
CRingPipe::WriteChunk(void *, long, unsigned char) {
    /*
        1adae4:	e1a0c00d 	mov	ip, sp
        1adae8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1adaec:	e24cb004 	sub	fp, ip, #4	; 0x4
        1adaf0:	e1a04000 	mov	r4, r0
        1adaf4:	e1a06001 	mov	r6, r1
        1adaf8:	e1a05002 	mov	r5, r2
        1adafc:	e20380ff 	and	r8, r3, #255	; 0xff
        1adb00:	e52d2004 	str	r2, [sp, -#4]!	; fField4
        1adb04:	e3520000 	cmp	r2, #0	; 0x0
        1adb08:	da000028 	ble	1adbb0 <CRingPipe::WriteChunk(void *, long, unsigned char)+0xcc>
        1adb0c:	e1a0200d 	mov	r2, sp
        1adb10:	e1a01006 	mov	r1, r6
        1adb14:	e5943004 	ldr	r3, [r4, #4]	; fField4
        1adb18:	e1a00003 	mov	r0, r3
        1adb1c:	e5933000 	ldr	r3, [r3]
        1adb20:	e1a0e00f 	mov	lr, pc
        1adb24:	e283f024 	add	pc, r3, #36	; 0x24
        1adb28:	e59f709c 	ldr	r7, [pc, #9c]	; 1adbcc <CRingPipe::WriteChunk(void *, long, unsigned char)+0xe8>	; fField9
        1adb2c:	e3700001 	cmn	r0, #1	; 0x1
        1adb30:	13300000 	teqne	r0, #0	; 0x0
        1adb34:	0a000003 	beq	1adb48 <CRingPipe::WriteChunk(void *, long, unsigned char)+0x64>
        1adb38:	e1a01000 	mov	r1, r0
        1adb3c:	e3a02000 	mov	r2, #0	; 0x0
        1adb40:	e5970000 	ldr	r0, [r7]
        1adb44:	eb68d594 	bl	1be319c <$Throw>
        1adb48:	e59d0000 	ldr	r0, [sp]
        1adb4c:	e3500000 	cmp	r0, #0	; 0x0
        1adb50:	da000016 	ble	1adbb0 <CRingPipe::WriteChunk(void *, long, unsigned char)+0xcc>
        1adb54:	e0865005 	add	r5, r6, r5
        1adb58:	e1a00004 	mov	r0, r4
        1adb5c:	e5941000 	ldr	r1, [r4]
        1adb60:	e1a0e00f 	mov	lr, pc
        1adb64:	e281f030 	add	pc, r1, #48	; 0x30
        1adb68:	e5943004 	ldr	r3, [r4, #4]	; fField4
        1adb6c:	e59d0000 	ldr	r0, [sp]
        1adb70:	e0451000 	sub	r1, r5, r0
        1adb74:	e1a0200d 	mov	r2, sp
        1adb78:	e1a00003 	mov	r0, r3
        1adb7c:	e5933000 	ldr	r3, [r3]
        1adb80:	e1a0e00f 	mov	lr, pc
        1adb84:	e283f024 	add	pc, r3, #36	; 0x24
        1adb88:	e3700001 	cmn	r0, #1	; 0x1
        1adb8c:	13300000 	teqne	r0, #0	; 0x0
        1adb90:	0a000003 	beq	1adba4 <CRingPipe::WriteChunk(void *, long, unsigned char)+0xc0>
        1adb94:	e1a01000 	mov	r1, r0
        1adb98:	e3a02000 	mov	r2, #0	; 0x0
        1adb9c:	e5970000 	ldr	r0, [r7]
        1adba0:	eb68d57d 	bl	1be319c <$Throw>
        1adba4:	e59d0000 	ldr	r0, [sp]
        1adba8:	e3500000 	cmp	r0, #0	; 0x0
        1adbac:	caffffe9 	bgt	1adb58 <CRingPipe::WriteChunk(void *, long, unsigned char)+0x74>
        1adbb0:	e3380000 	teq	r8, #0	; 0x0
        1adbb4:	0a000003 	beq	1adbc8 <CRingPipe::WriteChunk(void *, long, unsigned char)+0xe4>
        1adbb8:	e1a00004 	mov	r0, r4
        1adbbc:	e5941000 	ldr	r1, [r4]
        1adbc0:	e1a0e00f 	mov	lr, pc
        1adbc4:	e281f020 	add	pc, r1, #32	; 0x20
        1adbc8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1adbcc:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: CRingPipe::ReadSeek(long, int)
 * Address: 001adbd0
 */
CRingPipe::ReadSeek(long, int) {
    /*
        1adbd0:	e3a00000 	mov	r0, #0	; 0x0
        1adbd4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CRingPipe::WriteSeek(long, int)
 * Address: 001adbd8
 */
CRingPipe::WriteSeek(long, int) {
    /*
        1adbd8:	e3a00000 	mov	r0, #0	; 0x0
        1adbdc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CRingPipe::ReadPosition( const(void))
 * Address: 001adbe0
 */
CRingPipe::ReadPosition( const(void)) {
    /*
        1adbe0:	e3a00000 	mov	r0, #0	; 0x0
        1adbe4:	e1a0f00e 	mov	pc, lr
    */
}

