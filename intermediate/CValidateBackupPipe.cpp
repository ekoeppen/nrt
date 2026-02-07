#include "include/CValidateBackupPipe.h"

/**
 * Symbol: CValidateBackupPipe::__ct(void)
 * Address: 0015dc14
 */
CValidateBackupPipe::CValidateBackupPipe(void) {
    /*
        15dc14:	e1a0c00d 	mov	ip, sp
        15dc18:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        15dc1c:	e24cb004 	sub	fp, ip, #4	; 0x4
        15dc20:	e1b04000 	movs	r4, r0
        15dc24:	1a000003 	bne	15dc38 <CValidateBackupPipe::__ct(void)+0x24>
        15dc28:	e3a00008 	mov	r0, #8	; 0x8
        15dc2c:	eb69c2c1 	bl	1bce738 <$__nw(unsigned int)>
        15dc30:	e1b04000 	movs	r4, r0
        15dc34:	0a000005 	beq	15dc50 <CValidateBackupPipe::__ct(void)+0x3c>
        15dc38:	e1a00004 	mov	r0, r4
        15dc3c:	eb6a197b 	bl	1be4230 <CPipe::$__ct(void)>
        15dc40:	e59f0010 	ldr	r0, [pc, #10]	; 15dc58 <CValidateBackupPipe::__ct(void)+0x44>
        15dc44:	e5840000 	str	r0, [r4]
        15dc48:	e3a00000 	mov	r0, #0	; 0x0
        15dc4c:	e5840004 	str	r0, [r4, #4]	; fField4
        15dc50:	e1a00004 	mov	r0, r4
        15dc54:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        15dc58:	0001ec18 	andeq	lr, r1, r8, lsl ip
    */
}

/**
 * Symbol: CValidateBackupPipe::__dt(void)
 * Address: 0015dc5c
 */
CValidateBackupPipe::~CValidateBackupPipe(void) {
    /*
        15dc5c:	e1a0c00d 	mov	ip, sp
        15dc60:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        15dc64:	e24cb004 	sub	fp, ip, #4	; 0x4
        15dc68:	e1a04000 	mov	r4, r0
        15dc6c:	e1a05001 	mov	r5, r1
        15dc70:	e59f0020 	ldr	r0, [pc, #20]	; 15dc98 <CValidateBackupPipe::__dt(void)+0x3c>
        15dc74:	e5840000 	str	r0, [r4]
        15dc78:	e1a00004 	mov	r0, r4
        15dc7c:	e3a01000 	mov	r1, #0	; 0x0
        15dc80:	eb6a1d80 	bl	1be5288 <CPipe::$__dt(void)>
        15dc84:	e3150001 	tst	r5, #1	; 0x1
        15dc88:	11a00004 	movne	r0, r4
        15dc8c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        15dc90:	1a69be92 	bne	1bcd6e0 <$__dl(void *)>
        15dc94:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        15dc98:	0001ec18 	andeq	lr, r1, r8, lsl ip
    */
}

/**
 * Symbol: CValidateBackupPipe::FlushWrite(void)
 * Address: 0015dc9c
 */
CValidateBackupPipe::FlushWrite(void) {
    /*
        15dc9c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CValidateBackupPipe::Reset(void)
 * Address: 0015dca0
 */
CValidateBackupPipe::Reset(void) {
    /*
        15dca0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CValidateBackupPipe::Overflow(void)
 * Address: 0015dca4
 */
CValidateBackupPipe::Overflow(void) {
    /*
        15dca4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CValidateBackupPipe::Underflow(long, unsigned char &)
 * Address: 0015dca8
 */
CValidateBackupPipe::Underflow(long, unsigned char &) {
    /*
        15dca8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CValidateBackupPipe::Init(TValidatePackageDriver *)
 * Address: 0015e06c
 */
CValidateBackupPipe::Init(TValidatePackageDriver *) {
    /*
        15e06c:	e5a01004 	str	r1, [r0, #4]!	; fField4
        15e070:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CValidateBackupPipe::ReadSeek(long, int)
 * Address: 0015e7fc
 */
CValidateBackupPipe::ReadSeek(long, int) {
    /*
        15e7fc:	e3a00000 	mov	r0, #0	; 0x0
        15e800:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CValidateBackupPipe::ReadPosition( const(void))
 * Address: 0015fa88
 */
CValidateBackupPipe::ReadPosition( const(void)) {
    /*
        15fa88:	e3a00000 	mov	r0, #0	; 0x0
        15fa8c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CValidateBackupPipe::WriteSeek(long, int)
 * Address: 0015fe28
 */
CValidateBackupPipe::WriteSeek(long, int) {
    /*
        15fe28:	e3a00000 	mov	r0, #0	; 0x0
        15fe2c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CValidateBackupPipe::WritePosition( const(void))
 * Address: 0015fe30
 */
CValidateBackupPipe::WritePosition( const(void)) {
    /*
        15fe30:	e3a00000 	mov	r0, #0	; 0x0
        15fe34:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CValidateBackupPipe::ReadChunk(void *, long &, unsigned char &)
 * Address: 0015fe38
 */
CValidateBackupPipe::ReadChunk(void *, long &, unsigned char &) {
    /*
        15fe38:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CValidateBackupPipe::WriteChunk(void *, long, unsigned char)
 * Address: 0015fe3c
 */
CValidateBackupPipe::WriteChunk(void *, long, unsigned char) {
    /*
        15fe3c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        15fe40:	ea66df59 	b	1b17bac <TValidatePackageDriver::$ValidateNextBlock(char *, unsigned long)>
    */
}

/**
 * Symbol: CValidateBackupPipe::FlushRead(void)
 * Address: 0015fe44
 */
CValidateBackupPipe::FlushRead(void) {
    /*
        15fe44:	e1a0f00e 	mov	pc, lr
    */
}

