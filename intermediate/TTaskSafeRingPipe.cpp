#include "include/TTaskSafeRingPipe.h"

/**
 * Symbol: TTaskSafeRingPipe::__ct(void)
 * Address: 00251ddc
 */
TTaskSafeRingPipe::TTaskSafeRingPipe(void) {
    /*
        251ddc:	e1a0c00d 	mov	ip, sp
        251de0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        251de4:	e24cb004 	sub	fp, ip, #4	; 0x4
        251de8:	e1b04000 	movs	r4, r0
        251dec:	1a000003 	bne	251e00 <TTaskSafeRingPipe::__ct(void)+0x24>
        251df0:	e3a00014 	mov	r0, #20	; 0x14
        251df4:	eb65f24f 	bl	1bce738 <$__nw(unsigned int)>
        251df8:	e1b04000 	movs	r4, r0
        251dfc:	0a000009 	beq	251e28 <TTaskSafeRingPipe::__ct(void)+0x4c>
        251e00:	e1a00004 	mov	r0, r4
        251e04:	eb664909 	bl	1be4230 <CPipe::$__ct(void)>
        251e08:	e59f0020 	ldr	r0, [pc, #20]	; 251e30 <TTaskSafeRingPipe::__ct(void)+0x54>
        251e0c:	e5840000 	str	r0, [r4]
        251e10:	e3a00000 	mov	r0, #0	; 0x0
        251e14:	e5840004 	str	r0, [r4, #4]	; fField4
        251e18:	e5c40010 	strb	r0, [r4, #16]	; fField16
        251e1c:	e59f1010 	ldr	r1, [pc, #10]	; 251e34 <TTaskSafeRingPipe::__ct(void)+0x58>
        251e20:	e584000c 	str	r0, [r4, #12]	; fField12
        251e24:	e5841008 	str	r1, [r4, #8]	; fField8
        251e28:	e1a00004 	mov	r0, r4
        251e2c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        251e30:	0001e980 	andeq	lr, r1, r0, lsl #19
        251e34:	000e0f9c 	muleq	lr, ip, pc
    */
}

/**
 * Symbol: TTaskSafeRingPipe::__dt(void)
 * Address: 00251e38
 */
TTaskSafeRingPipe::~TTaskSafeRingPipe(void) {
    /*
        251e38:	e1a0c00d 	mov	ip, sp
        251e3c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        251e40:	e24cb004 	sub	fp, ip, #4	; 0x4
        251e44:	e1a04000 	mov	r4, r0
        251e48:	e1a05001 	mov	r5, r1
        251e4c:	e59f0040 	ldr	r0, [pc, #40]	; 251e94 <TTaskSafeRingPipe::__dt(void)+0x5c>
        251e50:	e5840000 	str	r0, [r4]
        251e54:	e5d40010 	ldrb	r0, [r4, #16]	; fField16
        251e58:	e3300000 	teq	r0, #0	; 0x0
        251e5c:	15940004 	ldrne	r0, [r4, #4]	; fField4
        251e60:	13300000 	teqne	r0, #0	; 0x0
        251e64:	0a000002 	beq	251e74 <TTaskSafeRingPipe::__dt(void)+0x3c>
        251e68:	e3a01001 	mov	r1, #1	; 0x1
        251e6c:	e1a0e00f 	mov	lr, pc
        251e70:	e590f000 	ldr	pc, [r0]
        251e74:	e1a00004 	mov	r0, r4
        251e78:	e3a01000 	mov	r1, #0	; 0x0
        251e7c:	eb664d01 	bl	1be5288 <CPipe::$__dt(void)>
        251e80:	e3150001 	tst	r5, #1	; 0x1
        251e84:	11a00004 	movne	r0, r4
        251e88:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        251e8c:	1a65ee13 	bne	1bcd6e0 <$__dl(void *)>
        251e90:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        251e94:	0001e980 	andeq	lr, r1, r0, lsl #19
    */
}

/**
 * Symbol: TTaskSafeRingPipe::WritePosition( const(void))
 * Address: 00251e98
 */
TTaskSafeRingPipe::WritePosition( const(void)) {
    /*
        251e98:	e3a00000 	mov	r0, #0	; 0x0
        251e9c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TTaskSafeRingPipe::Overflow(void)
 * Address: 00251ea0
 */
TTaskSafeRingPipe::Overflow(void) {
    /*
        251ea0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TTaskSafeRingPipe::Underflow(long, unsigned char &)
 * Address: 00251ea4
 */
TTaskSafeRingPipe::Underflow(long, unsigned char &) {
    /*
        251ea4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TTaskSafeRingPipe::FlushRead(void)
 * Address: 00251ea8
 */
TTaskSafeRingPipe::FlushRead(void) {
    /*
        251ea8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TTaskSafeRingPipe::FlushWrite(void)
 * Address: 00251eac
 */
TTaskSafeRingPipe::FlushWrite(void) {
    /*
        251eac:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TTaskSafeRingPipe::Init(long, unsigned long, unsigned long, unsigned char)
 * Address: 00251eb0
 */
TTaskSafeRingPipe::Init(long, unsigned long, unsigned long, unsigned char) {
    /*
        251eb0:	e1a0c00d 	mov	ip, sp
        251eb4:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        251eb8:	e24cb004 	sub	fp, ip, #4	; 0x4
        251ebc:	e1a04000 	mov	r4, r0
        251ec0:	e1a05001 	mov	r5, r1
        251ec4:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        251ec8:	e20080ff 	and	r8, r0, #255	; 0xff
        251ecc:	e3a00001 	mov	r0, #1	; 0x1
        251ed0:	e5c40010 	strb	r0, [r4, #16]	; fField16
        251ed4:	e3a00000 	mov	r0, #0	; 0x0
        251ed8:	e2844008 	add	r4, r4, #8	; 0x8
        251edc:	e884000c 	stmia	r4, {r2, r3}
        251ee0:	e2444008 	sub	r4, r4, #8	; 0x8
        251ee4:	eb657a54 	bl	1bb083c <TTaskSafeRingBuffer::$__ct(void)>
        251ee8:	e1b06000 	movs	r6, r0
        251eec:	e59f7044 	ldr	r7, [pc, #44]	; 251f38 <TTaskSafeRingPipe::Init(long, unsigned long, unsigned long, unsigned char)+0x88>
        251ef0:	1a000004 	bne	251f08 <TTaskSafeRingPipe::Init(long, unsigned long, unsigned long, unsigned char)+0x58>
        251ef4:	eb664089 	bl	1be2120 <$MemError>
        251ef8:	e1a01000 	mov	r1, r0
        251efc:	e3a02000 	mov	r2, #0	; 0x0
        251f00:	e5970000 	ldr	r0, [r7]
        251f04:	eb6644a4 	bl	1be319c <$Throw>
        251f08:	e1a02008 	mov	r2, r8
        251f0c:	e1a01005 	mov	r1, r5
        251f10:	e1a00006 	mov	r0, r6
        251f14:	eb656df4 	bl	1bad6ec <TTaskSafeRingBuffer::$Init(long, unsigned char)>
        251f18:	e3300000 	teq	r0, #0	; 0x0
        251f1c:	0a000003 	beq	251f30 <TTaskSafeRingPipe::Init(long, unsigned long, unsigned long, unsigned char)+0x80>
        251f20:	e1a01000 	mov	r1, r0
        251f24:	e3a02000 	mov	r2, #0	; 0x0
        251f28:	e5970000 	ldr	r0, [r7]
        251f2c:	eb66449a 	bl	1be319c <$Throw>
        251f30:	e5a46004 	str	r6, [r4, #4]!	; fField4
        251f34:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        251f38:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: TTaskSafeRingPipe::Init(TTaskSafeRingBuffer *, unsigned char, unsigned long, unsigned long)
 * Address: 00251f3c
 */
TTaskSafeRingPipe::Init(TTaskSafeRingBuffer *, unsigned char, unsigned long, unsigned long) {
    /*
        251f3c:	e1a0c000 	mov	ip, r0
        251f40:	e59d0000 	ldr	r0, [sp]
        251f44:	e58c1004 	str	r1, [ip, #4]	; fField4
        251f48:	e5cc2010 	strb	r2, [ip, #16]	; fField16
        251f4c:	e58c000c 	str	r0, [ip, #12]	; fField12
        251f50:	e58c3008 	str	r3, [ip, #8]	; fField8
        251f54:	e1a0000c 	mov	r0, ip
        251f58:	e59c1000 	ldr	r1, [ip]
        251f5c:	e281f024 	add	pc, r1, #36	; 0x24
    */
}

/**
 * Symbol: TTaskSafeRingPipe::Reset(void)
 * Address: 00251f60
 */
TTaskSafeRingPipe::Reset(void) {
    /*
        251f60:	e5900004 	ldr	r0, [r0, #4]	; fField4
        251f64:	e3300000 	teq	r0, #0	; 0x0
        251f68:	15901000 	ldrne	r1, [r0]
        251f6c:	1281f028 	addne	pc, r1, #40	; 0x28
        251f70:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TTaskSafeRingPipe::ReadChunk(void *, long &, unsigned char &)
 * Address: 00251f74
 */
TTaskSafeRingPipe::ReadChunk(void *, long &, unsigned char &) {
    /*
        251f74:	e1a0c00d 	mov	ip, sp
        251f78:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        251f7c:	e24cb004 	sub	fp, ip, #4	; 0x4
        251f80:	e1a04001 	mov	r4, r1
        251f84:	e5922000 	ldr	r2, [r2]
        251f88:	e3320001 	teq	r2, #1	; 0x1
        251f8c:	1a000007 	bne	251fb0 <TTaskSafeRingPipe::ReadChunk(void *, long &, unsigned char &)+0x3c>
        251f90:	e5b03004 	ldr	r3, [r0, #4]!	; fField4
        251f94:	e9900006 	ldmib	r0, {r1, r2}
        251f98:	e1a00003 	mov	r0, r3
        251f9c:	e5933000 	ldr	r3, [r3]
        251fa0:	e1a0e00f 	mov	lr, pc
        251fa4:	e283f054 	add	pc, r3, #84	; 0x54
        251fa8:	e5c40000 	strb	r0, [r4]
        251fac:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        251fb0:	e3520000 	cmp	r2, #0	; 0x0
        251fb4:	d91ba810 	ldmledb	fp, {r4, fp, sp, pc}
        251fb8:	e590300c 	ldr	r3, [r0, #12]	; fField12
        251fbc:	e590c004 	ldr	ip, [r0, #4]	; fField4
        251fc0:	e92d0008 	stmdb	sp!, {r3}
        251fc4:	e1a01004 	mov	r1, r4
        251fc8:	e5b03008 	ldr	r3, [r0, #8]!	; fField8
        251fcc:	e1a0000c 	mov	r0, ip
        251fd0:	e59cc000 	ldr	ip, [ip]
        251fd4:	e1a0e00f 	mov	lr, pc
        251fd8:	e28cf058 	add	pc, ip, #88	; 0x58
        251fdc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TTaskSafeRingPipe::WriteChunk(void *, long, unsigned char)
 * Address: 00251fe0
 */
TTaskSafeRingPipe::WriteChunk(void *, long, unsigned char) {
    /*
        251fe0:	e1a0c00d 	mov	ip, sp
        251fe4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        251fe8:	e24cb004 	sub	fp, ip, #4	; 0x4
        251fec:	e3320001 	teq	r2, #1	; 0x1
        251ff0:	1a000006 	bne	252010 <TTaskSafeRingPipe::WriteChunk(void *, long, unsigned char)+0x30>
        251ff4:	e5b0c004 	ldr	ip, [r0, #4]!	; fField4
        251ff8:	e990000c 	ldmib	r0, {r2, r3}
        251ffc:	e5d11000 	ldrb	r1, [r1]
        252000:	e1a0000c 	mov	r0, ip
        252004:	e59cc000 	ldr	ip, [ip]
        252008:	e91b6800 	ldmdb	fp, {fp, sp, lr}
        25200c:	e28cf05c 	add	pc, ip, #92	; 0x5c
        252010:	e3520000 	cmp	r2, #0	; 0x0
        252014:	d91ba800 	ldmledb	fp, {fp, sp, pc}
        252018:	e590300c 	ldr	r3, [r0, #12]	; fField12
        25201c:	e590c004 	ldr	ip, [r0, #4]	; fField4
        252020:	e92d0008 	stmdb	sp!, {r3}
        252024:	e5b03008 	ldr	r3, [r0, #8]!	; fField8
        252028:	e1a0000c 	mov	r0, ip
        25202c:	e59cc000 	ldr	ip, [ip]
        252030:	e1a0e00f 	mov	lr, pc
        252034:	e28cf060 	add	pc, ip, #96	; 0x60
        252038:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TTaskSafeRingPipe::ReadSeek(long, int)
 * Address: 0025203c
 */
TTaskSafeRingPipe::ReadSeek(long, int) {
    /*
        25203c:	e3a00000 	mov	r0, #0	; 0x0
        252040:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TTaskSafeRingPipe::WriteSeek(long, int)
 * Address: 00252044
 */
TTaskSafeRingPipe::WriteSeek(long, int) {
    /*
        252044:	e3a00000 	mov	r0, #0	; 0x0
        252048:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TTaskSafeRingPipe::ReadPosition( const(void))
 * Address: 0025204c
 */
TTaskSafeRingPipe::ReadPosition( const(void)) {
    /*
        25204c:	e3a00000 	mov	r0, #0	; 0x0
        252050:	e1a0f00e 	mov	pc, lr
    */
}

