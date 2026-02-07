#include "include/CBufferPipe.h"

/**
 * Symbol: CBufferPipe::__ct(void)
 * Address: 00046abc
 */
CBufferPipe::CBufferPipe(void) {
    /*
         46abc:	e1a0c00d 	mov	ip, sp
         46ac0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         46ac4:	e24cb004 	sub	fp, ip, #4	; 0x4
         46ac8:	e1b04000 	movs	r4, r0
         46acc:	1a000003 	bne	46ae0 <CBufferPipe::__ct(void)+0x24>
         46ad0:	e3a00010 	mov	r0, #16	; 0x10
         46ad4:	eb6e1f17 	bl	1bce738 <$__nw(unsigned int)>
         46ad8:	e1b04000 	movs	r4, r0
         46adc:	0a000008 	beq	46b04 <CBufferPipe::__ct(void)+0x48>
         46ae0:	e1a00004 	mov	r0, r4
         46ae4:	eb6e75d1 	bl	1be4230 <CPipe::$__ct(void)>
         46ae8:	e59f001c 	ldr	r0, [pc, #1c]	; 46b0c <CBufferPipe::__ct(void)+0x50>
         46aec:	e5840000 	str	r0, [r4]
         46af0:	e3a00000 	mov	r0, #0	; 0x0
         46af4:	e5840004 	str	r0, [r4, #4]	; fField4
         46af8:	e5840008 	str	r0, [r4, #8]	; fField8
         46afc:	e5c4000c 	strb	r0, [r4, #12]	; fField12
         46b00:	e5c4000d 	strb	r0, [r4, #13]	; fField13
         46b04:	e1a00004 	mov	r0, r4
         46b08:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         46b0c:	0001b078 	andeq	fp, r1, r8, ror r0
    */
}

/**
 * Symbol: CBufferPipe::__dt(void)
 * Address: 00046b10
 */
CBufferPipe::~CBufferPipe(void) {
    /*
         46b10:	e1a0c00d 	mov	ip, sp
         46b14:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         46b18:	e24cb004 	sub	fp, ip, #4	; 0x4
         46b1c:	e1a04000 	mov	r4, r0
         46b20:	e1a05001 	mov	r5, r1
         46b24:	e59f005c 	ldr	r0, [pc, #5c]	; 46b88 <CBufferPipe::__dt(void)+0x78>
         46b28:	e5840000 	str	r0, [r4]
         46b2c:	e5d4000c 	ldrb	r0, [r4, #12]	; fField12
         46b30:	e3300000 	teq	r0, #0	; 0x0
         46b34:	0a00000b 	beq	46b68 <CBufferPipe::__dt(void)+0x58>
         46b38:	e5940004 	ldr	r0, [r4, #4]	; fField4
         46b3c:	e3300000 	teq	r0, #0	; 0x0
         46b40:	0a000002 	beq	46b50 <CBufferPipe::__dt(void)+0x40>
         46b44:	e3a01001 	mov	r1, #1	; 0x1
         46b48:	e1a0e00f 	mov	lr, pc
         46b4c:	e590f000 	ldr	pc, [r0]
         46b50:	e5940008 	ldr	r0, [r4, #8]	; fField8
         46b54:	e3300000 	teq	r0, #0	; 0x0
         46b58:	0a000002 	beq	46b68 <CBufferPipe::__dt(void)+0x58>
         46b5c:	e3a01001 	mov	r1, #1	; 0x1
         46b60:	e1a0e00f 	mov	lr, pc
         46b64:	e590f000 	ldr	pc, [r0]
         46b68:	e1a00004 	mov	r0, r4
         46b6c:	e3a01000 	mov	r1, #0	; 0x0
         46b70:	eb6e79c4 	bl	1be5288 <CPipe::$__dt(void)>
         46b74:	e3150001 	tst	r5, #1	; 0x1
         46b78:	11a00004 	movne	r0, r4
         46b7c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         46b80:	1a6e1ad6 	bne	1bcd6e0 <$__dl(void *)>
         46b84:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         46b88:	0001b078 	andeq	fp, r1, r8, ror r0
    */
}

/**
 * Symbol: CBufferPipe::WriteSeek(long, int)
 * Address: 00046b8c
 */
CBufferPipe::WriteSeek(long, int) {
    /*
         46b8c:	e1a0c00d 	mov	ip, sp
         46b90:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         46b94:	e24cb004 	sub	fp, ip, #4	; 0x4
         46b98:	e1a04000 	mov	r4, r0
         46b9c:	e1a06001 	mov	r6, r1
         46ba0:	e1a05002 	mov	r5, r2
         46ba4:	e5900008 	ldr	r0, [r0, #8]	; fField8
         46ba8:	e3300000 	teq	r0, #0	; 0x0
         46bac:	1a000005 	bne	46bc8 <CBufferPipe::WriteSeek(long, int)+0x3c>
         46bb0:	e59f002c 	ldr	r0, [pc, #2c]	; 46be4 <CBufferPipe::WriteSeek(long, int)+0x58>
         46bb4:	e5900000 	ldr	r0, [r0]
         46bb8:	e3a02000 	mov	r2, #0	; 0x0
         46bbc:	e3a01046 	mov	r1, #70	; 0x46
         46bc0:	e2411c37 	sub	r1, r1, #14080	; 0x3700
         46bc4:	eb6e7174 	bl	1be319c <$Throw>
         46bc8:	e1a02005 	mov	r2, r5
         46bcc:	e1a01006 	mov	r1, r6
         46bd0:	e5b43008 	ldr	r3, [r4, #8]!	; fField8
         46bd4:	e1a00003 	mov	r0, r3
         46bd8:	e5933000 	ldr	r3, [r3]
         46bdc:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         46be0:	e283f038 	add	pc, r3, #56	; 0x38
         46be4:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: CBufferPipe::ReadPosition( const(void))
 * Address: 00046be8
 */
CBufferPipe::ReadPosition( const(void)) {
    /*
         46be8:	e1a0c00d 	mov	ip, sp
         46bec:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         46bf0:	e24cb004 	sub	fp, ip, #4	; 0x4
         46bf4:	e1a04000 	mov	r4, r0
         46bf8:	e5900004 	ldr	r0, [r0, #4]	; fField4
         46bfc:	e3300000 	teq	r0, #0	; 0x0
         46c00:	1a000005 	bne	46c1c <CBufferPipe::ReadPosition( const(void))+0x34>
         46c04:	e59f0020 	ldr	r0, [pc, #20]	; 46c2c <CBufferPipe::ReadPosition( const(void))+0x44>
         46c08:	e5900000 	ldr	r0, [r0]
         46c0c:	e3a02000 	mov	r2, #0	; 0x0
         46c10:	e3a01046 	mov	r1, #70	; 0x46
         46c14:	e2411c37 	sub	r1, r1, #14080	; 0x3700
         46c18:	eb6e715f 	bl	1be319c <$Throw>
         46c1c:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
         46c20:	e5901000 	ldr	r1, [r0]
         46c24:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         46c28:	e281f03c 	add	pc, r1, #60	; 0x3c
         46c2c:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: CBufferPipe::WritePosition( const(void))
 * Address: 00046c30
 */
CBufferPipe::WritePosition( const(void)) {
    /*
         46c30:	e1a0c00d 	mov	ip, sp
         46c34:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         46c38:	e24cb004 	sub	fp, ip, #4	; 0x4
         46c3c:	e1a04000 	mov	r4, r0
         46c40:	e5900008 	ldr	r0, [r0, #8]	; fField8
         46c44:	e3300000 	teq	r0, #0	; 0x0
         46c48:	1a000005 	bne	46c64 <CBufferPipe::WritePosition( const(void))+0x34>
         46c4c:	e59f0020 	ldr	r0, [pc, #20]	; 46c74 <CBufferPipe::WritePosition( const(void))+0x44>
         46c50:	e5900000 	ldr	r0, [r0]
         46c54:	e3a02000 	mov	r2, #0	; 0x0
         46c58:	e3a01046 	mov	r1, #70	; 0x46
         46c5c:	e2411c37 	sub	r1, r1, #14080	; 0x3700
         46c60:	eb6e714d 	bl	1be319c <$Throw>
         46c64:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
         46c68:	e5901000 	ldr	r1, [r0]
         46c6c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         46c70:	e281f03c 	add	pc, r1, #60	; 0x3c
         46c74:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: CBufferPipe::Peek(unsigned char)
 * Address: 00046c78
 */
CBufferPipe::Peek(unsigned char) {
    /*
         46c78:	e1a0c00d 	mov	ip, sp
         46c7c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         46c80:	e24cb004 	sub	fp, ip, #4	; 0x4
         46c84:	e1a04000 	mov	r4, r0
         46c88:	e20150ff 	and	r5, r1, #255	; 0xff
         46c8c:	e5900004 	ldr	r0, [r0, #4]	; fField4
         46c90:	e3300000 	teq	r0, #0	; 0x0
         46c94:	1a000005 	bne	46cb0 <CBufferPipe::Peek(unsigned char)+0x38>
         46c98:	e59f0060 	ldr	r0, [pc, #60]	; 46d00 <CBufferPipe::Peek(unsigned char)+0x88>
         46c9c:	e5900000 	ldr	r0, [r0]
         46ca0:	e3a02000 	mov	r2, #0	; 0x0
         46ca4:	e3a01046 	mov	r1, #70	; 0x46
         46ca8:	e2411c37 	sub	r1, r1, #14080	; 0x3700
         46cac:	eb6e713a 	bl	1be319c <$Throw>
         46cb0:	e5940004 	ldr	r0, [r4, #4]	; fField4
         46cb4:	e5901000 	ldr	r1, [r0]
         46cb8:	e1a0e00f 	mov	lr, pc
         46cbc:	e281f004 	add	pc, r1, #4	; 0x4
         46cc0:	e3350000 	teq	r5, #0	; 0x0
         46cc4:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         46cc8:	e3700001 	cmn	r0, #1	; 0x1
         46ccc:	05d4100d 	ldreqb	r1, [r4, #13]	; fField13
         46cd0:	03310000 	teqeq	r1, #0	; 0x0
         46cd4:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         46cd8:	e284200d 	add	r2, r4, #13	; 0xd
         46cdc:	e1a00004 	mov	r0, r4
         46ce0:	e3a01001 	mov	r1, #1	; 0x1
         46ce4:	e5943000 	ldr	r3, [r4]
         46ce8:	e1a0e00f 	mov	lr, pc
         46cec:	e283f034 	add	pc, r3, #52	; 0x34
         46cf0:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
         46cf4:	e5901000 	ldr	r1, [r0]
         46cf8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         46cfc:	e281f004 	add	pc, r1, #4	; 0x4
         46d00:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: CBufferPipe::Next(void)
 * Address: 00046d04
 */
CBufferPipe::Next(void) {
    /*
         46d04:	e1a0c00d 	mov	ip, sp
         46d08:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         46d0c:	e24cb004 	sub	fp, ip, #4	; 0x4
         46d10:	e1a04000 	mov	r4, r0
         46d14:	e5900004 	ldr	r0, [r0, #4]	; fField4
         46d18:	e3300000 	teq	r0, #0	; 0x0
         46d1c:	1a000005 	bne	46d38 <CBufferPipe::Next(void)+0x34>
         46d20:	e59f0064 	ldr	r0, [pc, #64]	; 46d8c <CBufferPipe::Next(void)+0x88>
         46d24:	e5900000 	ldr	r0, [r0]
         46d28:	e3a02000 	mov	r2, #0	; 0x0
         46d2c:	e3a01046 	mov	r1, #70	; 0x46
         46d30:	e2411c37 	sub	r1, r1, #14080	; 0x3700
         46d34:	eb6e7118 	bl	1be319c <$Throw>
         46d38:	e5940004 	ldr	r0, [r4, #4]	; fField4
         46d3c:	e5901000 	ldr	r1, [r0]
         46d40:	e1a0e00f 	mov	lr, pc
         46d44:	e281f008 	add	pc, r1, #8	; 0x8
         46d48:	e3700001 	cmn	r0, #1	; 0x1
         46d4c:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         46d50:	e5d4100d 	ldrb	r1, [r4, #13]	; fField13
         46d54:	e3310000 	teq	r1, #0	; 0x0
         46d58:	13a01000 	movne	r1, #0	; 0x0
         46d5c:	15c4100d 	strneb	r1, [r4, #13]	; fField13
         46d60:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         46d64:	e284200d 	add	r2, r4, #13	; 0xd
         46d68:	e1a00004 	mov	r0, r4
         46d6c:	e3a01001 	mov	r1, #1	; 0x1
         46d70:	e5943000 	ldr	r3, [r4]
         46d74:	e1a0e00f 	mov	lr, pc
         46d78:	e283f034 	add	pc, r3, #52	; 0x34
         46d7c:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
         46d80:	e5901000 	ldr	r1, [r0]
         46d84:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         46d88:	e281f008 	add	pc, r1, #8	; 0x8
         46d8c:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: CBufferPipe::Skip(void)
 * Address: 00046d90
 */
CBufferPipe::Skip(void) {
    /*
         46d90:	e1a0c00d 	mov	ip, sp
         46d94:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         46d98:	e24cb004 	sub	fp, ip, #4	; 0x4
         46d9c:	e1a04000 	mov	r4, r0
         46da0:	e5900004 	ldr	r0, [r0, #4]	; fField4
         46da4:	e3300000 	teq	r0, #0	; 0x0
         46da8:	1a000005 	bne	46dc4 <CBufferPipe::Skip(void)+0x34>
         46dac:	e59f0064 	ldr	r0, [pc, #64]	; 46e18 <CBufferPipe::Skip(void)+0x88>
         46db0:	e5900000 	ldr	r0, [r0]
         46db4:	e3a02000 	mov	r2, #0	; 0x0
         46db8:	e3a01046 	mov	r1, #70	; 0x46
         46dbc:	e2411c37 	sub	r1, r1, #14080	; 0x3700
         46dc0:	eb6e70f5 	bl	1be319c <$Throw>
         46dc4:	e5940004 	ldr	r0, [r4, #4]	; fField4
         46dc8:	e5901000 	ldr	r1, [r0]
         46dcc:	e1a0e00f 	mov	lr, pc
         46dd0:	e281f00c 	add	pc, r1, #12	; 0xc
         46dd4:	e3700001 	cmn	r0, #1	; 0x1
         46dd8:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         46ddc:	e5d4100d 	ldrb	r1, [r4, #13]	; fField13
         46de0:	e3310000 	teq	r1, #0	; 0x0
         46de4:	13a01000 	movne	r1, #0	; 0x0
         46de8:	15c4100d 	strneb	r1, [r4, #13]	; fField13
         46dec:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         46df0:	e284200d 	add	r2, r4, #13	; 0xd
         46df4:	e1a00004 	mov	r0, r4
         46df8:	e3a01001 	mov	r1, #1	; 0x1
         46dfc:	e5943000 	ldr	r3, [r4]
         46e00:	e1a0e00f 	mov	lr, pc
         46e04:	e283f034 	add	pc, r3, #52	; 0x34
         46e08:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
         46e0c:	e5901000 	ldr	r1, [r0]
         46e10:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         46e14:	e281f00c 	add	pc, r1, #12	; 0xc
         46e18:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: CBufferPipe::Get(void)
 * Address: 00046e1c
 */
CBufferPipe::Get(void) {
    /*
         46e1c:	e1a0c00d 	mov	ip, sp
         46e20:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         46e24:	e24cb004 	sub	fp, ip, #4	; 0x4
         46e28:	e1a04000 	mov	r4, r0
         46e2c:	e5900004 	ldr	r0, [r0, #4]	; fField4
         46e30:	e3300000 	teq	r0, #0	; 0x0
         46e34:	1a000005 	bne	46e50 <CBufferPipe::Get(void)+0x34>
         46e38:	e59f0064 	ldr	r0, [pc, #64]	; 46ea4 <CBufferPipe::Get(void)+0x88>
         46e3c:	e5900000 	ldr	r0, [r0]
         46e40:	e3a02000 	mov	r2, #0	; 0x0
         46e44:	e3a01046 	mov	r1, #70	; 0x46
         46e48:	e2411c37 	sub	r1, r1, #14080	; 0x3700
         46e4c:	eb6e70d2 	bl	1be319c <$Throw>
         46e50:	e5940004 	ldr	r0, [r4, #4]	; fField4
         46e54:	e5901000 	ldr	r1, [r0]
         46e58:	e1a0e00f 	mov	lr, pc
         46e5c:	e281f010 	add	pc, r1, #16	; 0x10
         46e60:	e3700001 	cmn	r0, #1	; 0x1
         46e64:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         46e68:	e5d4100d 	ldrb	r1, [r4, #13]	; fField13
         46e6c:	e3310000 	teq	r1, #0	; 0x0
         46e70:	13a01000 	movne	r1, #0	; 0x0
         46e74:	15c4100d 	strneb	r1, [r4, #13]	; fField13
         46e78:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         46e7c:	e284200d 	add	r2, r4, #13	; 0xd
         46e80:	e1a00004 	mov	r0, r4
         46e84:	e3a01001 	mov	r1, #1	; 0x1
         46e88:	e5943000 	ldr	r3, [r4]
         46e8c:	e1a0e00f 	mov	lr, pc
         46e90:	e283f034 	add	pc, r3, #52	; 0x34
         46e94:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
         46e98:	e5901000 	ldr	r1, [r0]
         46e9c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         46ea0:	e281f010 	add	pc, r1, #16	; 0x10
         46ea4:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: CBufferPipe::Put(int)
 * Address: 00046ea8
 */
CBufferPipe::Put(int) {
    /*
         46ea8:	e1a0c00d 	mov	ip, sp
         46eac:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         46eb0:	e24cb004 	sub	fp, ip, #4	; 0x4
         46eb4:	e1a04000 	mov	r4, r0
         46eb8:	e1a05001 	mov	r5, r1
         46ebc:	e5900008 	ldr	r0, [r0, #8]	; fField8
         46ec0:	e3300000 	teq	r0, #0	; 0x0
         46ec4:	1a000005 	bne	46ee0 <CBufferPipe::Put(int)+0x38>
         46ec8:	e59f0058 	ldr	r0, [pc, #58]	; 46f28 <CBufferPipe::Put(int)+0x80>
         46ecc:	e5900000 	ldr	r0, [r0]
         46ed0:	e3a02000 	mov	r2, #0	; 0x0
         46ed4:	e3a01046 	mov	r1, #70	; 0x46
         46ed8:	e2411c37 	sub	r1, r1, #14080	; 0x3700
         46edc:	eb6e70ae 	bl	1be319c <$Throw>
         46ee0:	e1a01005 	mov	r1, r5
         46ee4:	e5942008 	ldr	r2, [r4, #8]	; fField8
         46ee8:	e1a00002 	mov	r0, r2
         46eec:	e5922000 	ldr	r2, [r2]
         46ef0:	e1a0e00f 	mov	lr, pc
         46ef4:	e282f01c 	add	pc, r2, #28	; 0x1c
         46ef8:	e3700001 	cmn	r0, #1	; 0x1
         46efc:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         46f00:	e1a00004 	mov	r0, r4
         46f04:	e5941000 	ldr	r1, [r4]
         46f08:	e1a0e00f 	mov	lr, pc
         46f0c:	e281f030 	add	pc, r1, #48	; 0x30
         46f10:	e1a01005 	mov	r1, r5
         46f14:	e5b42008 	ldr	r2, [r4, #8]!	; fField8
         46f18:	e1a00002 	mov	r0, r2
         46f1c:	e5922000 	ldr	r2, [r2]
         46f20:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         46f24:	e282f01c 	add	pc, r2, #28	; 0x1c
         46f28:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: CBufferPipe::Init(long, long)
 * Address: 00046f2c
 */
CBufferPipe::Init(long, long) {
    /*
         46f2c:	e1a0c00d 	mov	ip, sp
         46f30:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         46f34:	e24cb004 	sub	fp, ip, #4	; 0x4
         46f38:	e1a04000 	mov	r4, r0
         46f3c:	e1a06001 	mov	r6, r1
         46f40:	e1a05002 	mov	r5, r2
         46f44:	e3a00001 	mov	r0, #1	; 0x1
         46f48:	e5c4000c 	strb	r0, [r4, #12]	; fField12
         46f4c:	e3a00000 	mov	r0, #0	; 0x0
         46f50:	e5c4000d 	strb	r0, [r4, #13]	; fField13
         46f54:	e59f70c0 	ldr	r7, [pc, #c0]	; 4701c <CBufferPipe::Init(long, long)+0xf0>
         46f58:	e3510000 	cmp	r1, #0	; 0x0
         46f5c:	da000018 	ble	46fc4 <CBufferPipe::Init(long, long)+0x98>
         46f60:	e3a00000 	mov	r0, #0	; 0x0
         46f64:	eb6e74a6 	bl	1be4204 <CBufferSegment::$__ct(void)>
         46f68:	e5840004 	str	r0, [r4, #4]	; fField4
         46f6c:	e3300000 	teq	r0, #0	; 0x0
         46f70:	1a000004 	bne	46f88 <CBufferPipe::Init(long, long)+0x5c>
         46f74:	eb6e6c69 	bl	1be2120 <$MemError>
         46f78:	e1a01000 	mov	r1, r0
         46f7c:	e3a02000 	mov	r2, #0	; 0x0
         46f80:	e5970000 	ldr	r0, [r7]
         46f84:	eb6e7084 	bl	1be319c <$Throw>
         46f88:	e1a01006 	mov	r1, r6
         46f8c:	e5940004 	ldr	r0, [r4, #4]	; fField4
         46f90:	eb6e8944 	bl	1be94a8 <CBufferSegment::$Init(long)>
         46f94:	e3300000 	teq	r0, #0	; 0x0
         46f98:	0a000003 	beq	46fac <CBufferPipe::Init(long, long)+0x80>
         46f9c:	e1a01000 	mov	r1, r0
         46fa0:	e3a02000 	mov	r2, #0	; 0x0
         46fa4:	e5970000 	ldr	r0, [r7]
         46fa8:	eb6e707b 	bl	1be319c <$Throw>
         46fac:	e3a02001 	mov	r2, #1	; 0x1
         46fb0:	e3a01000 	mov	r1, #0	; 0x0
         46fb4:	e5940004 	ldr	r0, [r4, #4]	; fField4
         46fb8:	e5903000 	ldr	r3, [r0]
         46fbc:	e1a0e00f 	mov	lr, pc
         46fc0:	e283f038 	add	pc, r3, #56	; 0x38
         46fc4:	e3550000 	cmp	r5, #0	; 0x0
         46fc8:	d91ba8f0 	ldmledb	fp, {r4, r5, r6, r7, fp, sp, pc}
         46fcc:	e3a00000 	mov	r0, #0	; 0x0
         46fd0:	eb6e748b 	bl	1be4204 <CBufferSegment::$__ct(void)>
         46fd4:	e5840008 	str	r0, [r4, #8]	; fField8
         46fd8:	e3300000 	teq	r0, #0	; 0x0
         46fdc:	1a000004 	bne	46ff4 <CBufferPipe::Init(long, long)+0xc8>
         46fe0:	eb6e6c4e 	bl	1be2120 <$MemError>
         46fe4:	e1a01000 	mov	r1, r0
         46fe8:	e3a02000 	mov	r2, #0	; 0x0
         46fec:	e5970000 	ldr	r0, [r7]
         46ff0:	eb6e7069 	bl	1be319c <$Throw>
         46ff4:	e1a01005 	mov	r1, r5
         46ff8:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
         46ffc:	eb6e8929 	bl	1be94a8 <CBufferSegment::$Init(long)>
         47000:	e3300000 	teq	r0, #0	; 0x0
         47004:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         47008:	e1a01000 	mov	r1, r0
         4700c:	e3a02000 	mov	r2, #0	; 0x0
         47010:	e5970000 	ldr	r0, [r7]
         47014:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         47018:	ea6e705f 	b	1be319c <$Throw>
         4701c:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: CBufferPipe::Init(CBufferSegment *, CBufferSegment *, unsigned char)
 * Address: 00047020
 */
CBufferPipe::Init(CBufferSegment *, CBufferSegment *, unsigned char) {
    /*
         47020:	e1a0c000 	mov	ip, r0
         47024:	e98c0006 	stmib	ip, {r1, r2}
         47028:	e5c0300c 	strb	r3, [r0, #12]	; fField12
         4702c:	e5901000 	ldr	r1, [r0]
         47030:	e281f024 	add	pc, r1, #36	; 0x24
    */
}

/**
 * Symbol: CBufferPipe::Reset(void)
 * Address: 00047034
 */
CBufferPipe::Reset(void) {
    /*
         47034:	e1a0c00d 	mov	ip, sp
         47038:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         4703c:	e24cb004 	sub	fp, ip, #4	; 0x4
         47040:	e1a04000 	mov	r4, r0
         47044:	e5901000 	ldr	r1, [r0]
         47048:	e1a0e00f 	mov	lr, pc
         4704c:	e281f028 	add	pc, r1, #40	; 0x28
         47050:	e1a00004 	mov	r0, r4
         47054:	e5941000 	ldr	r1, [r4]
         47058:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         4705c:	e281f02c 	add	pc, r1, #44	; 0x2c
    */
}

/**
 * Symbol: CBufferPipe::ResetRead(void)
 * Address: 00047060
 */
CBufferPipe::ResetRead(void) {
    /*
         47060:	e1a0c00d 	mov	ip, sp
         47064:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         47068:	e24cb004 	sub	fp, ip, #4	; 0x4
         4706c:	e1a04000 	mov	r4, r0
         47070:	e3a00000 	mov	r0, #0	; 0x0
         47074:	e5c4000d 	strb	r0, [r4, #13]	; fField13
         47078:	e5940004 	ldr	r0, [r4, #4]	; fField4
         4707c:	e3300000 	teq	r0, #0	; 0x0
         47080:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         47084:	e5901000 	ldr	r1, [r0]
         47088:	e1a0e00f 	mov	lr, pc
         4708c:	e281f028 	add	pc, r1, #40	; 0x28
         47090:	e3a02001 	mov	r2, #1	; 0x1
         47094:	e3a01000 	mov	r1, #0	; 0x0
         47098:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
         4709c:	e5903000 	ldr	r3, [r0]
         470a0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         470a4:	e283f038 	add	pc, r3, #56	; 0x38
    */
}

/**
 * Symbol: CBufferPipe::ResetWrite(void)
 * Address: 000470a8
 */
CBufferPipe::ResetWrite(void) {
    /*
         470a8:	e5900008 	ldr	r0, [r0, #8]	; fField8
         470ac:	e3300000 	teq	r0, #0	; 0x0
         470b0:	15901000 	ldrne	r1, [r0]
         470b4:	1281f028 	addne	pc, r1, #40	; 0x28
         470b8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CBufferPipe::ReadChunk(void *, long &, unsigned char &)
 * Address: 000470bc
 */
CBufferPipe::ReadChunk(void *, long &, unsigned char &) {
    /*
         470bc:	e1a0c00d 	mov	ip, sp
         470c0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         470c4:	e24cb004 	sub	fp, ip, #4	; 0x4
         470c8:	e1a04000 	mov	r4, r0
         470cc:	e1a07001 	mov	r7, r1
         470d0:	e1a05002 	mov	r5, r2
         470d4:	e1a06003 	mov	r6, r3
         470d8:	e5900004 	ldr	r0, [r0, #4]	; fField4
         470dc:	e59f9088 	ldr	r9, [pc, #88]	; 4716c <CBufferPipe::ReadChunk(void *, long &, unsigned char &)+0xb0>
         470e0:	e3300000 	teq	r0, #0	; 0x0
         470e4:	1a000004 	bne	470fc <CBufferPipe::ReadChunk(void *, long &, unsigned char &)+0x40>
         470e8:	e3a02000 	mov	r2, #0	; 0x0
         470ec:	e3a01046 	mov	r1, #70	; 0x46
         470f0:	e2411c37 	sub	r1, r1, #14080	; 0x3700
         470f4:	e5990000 	ldr	r0, [r9]
         470f8:	eb6e7027 	bl	1be319c <$Throw>
         470fc:	e24dd004 	sub	sp, sp, #4	; 0x4
         47100:	e5950000 	ldr	r0, [r5]
         47104:	e58d0000 	str	r0, [sp]
         47108:	e5940004 	ldr	r0, [r4, #4]	; fField4
         4710c:	e5901000 	ldr	r1, [r0]
         47110:	e1a0e00f 	mov	lr, pc
         47114:	e281f030 	add	pc, r1, #48	; 0x30
         47118:	e1a08000 	mov	r8, r0
         4711c:	e3a00000 	mov	r0, #0	; 0x0
         47120:	e5c60000 	strb	r0, [r6]
         47124:	e5950000 	ldr	r0, [r5]
         47128:	e3500000 	cmp	r0, #0	; 0x0
         4712c:	da000035 	ble	47208 <CBufferPipe::ReadChunk(void *, long &, unsigned char &)+0x14c>
         47130:	e5d4000d 	ldrb	r0, [r4, #13]	; fField13
         47134:	e3300000 	teq	r0, #0	; 0x0
         47138:	1a000032 	bne	47208 <CBufferPipe::ReadChunk(void *, long &, unsigned char &)+0x14c>
         4713c:	e1a0200d 	mov	r2, sp
         47140:	e1a01007 	mov	r1, r7
         47144:	e5943004 	ldr	r3, [r4, #4]	; fField4
         47148:	e1a00003 	mov	r0, r3
         4714c:	e5933000 	ldr	r3, [r3]
         47150:	e1a0e00f 	mov	lr, pc
         47154:	e283f018 	add	pc, r3, #24	; 0x18
         47158:	e3700001 	cmn	r0, #1	; 0x1
         4715c:	1a000003 	bne	47170 <CBufferPipe::ReadChunk(void *, long &, unsigned char &)+0xb4>
         47160:	e3a08001 	mov	r8, #1	; 0x1
         47164:	e284a00d 	add	sl, r4, #13	; 0xd
         47168:	ea000020 	b	471f0 <CBufferPipe::ReadChunk(void *, long &, unsigned char &)+0x134>
         4716c:	00371324 	eoreqs	r1, r7, r4, lsr #6
         47170:	e3300000 	teq	r0, #0	; 0x0
         47174:	0afffffa 	beq	47164 <CBufferPipe::ReadChunk(void *, long &, unsigned char &)+0xa8>
         47178:	e1a01000 	mov	r1, r0
         4717c:	e3a02000 	mov	r2, #0	; 0x0
         47180:	e5990000 	ldr	r0, [r9]
         47184:	eb6e7004 	bl	1be319c <$Throw>
         47188:	eafffff5 	b	47164 <CBufferPipe::ReadChunk(void *, long &, unsigned char &)+0xa8>
         4718c:	e1a0200a 	mov	r2, sl
         47190:	e1a00004 	mov	r0, r4
         47194:	e5943000 	ldr	r3, [r4]
         47198:	e1a0e00f 	mov	lr, pc
         4719c:	e283f034 	add	pc, r3, #52	; 0x34
         471a0:	e3a08000 	mov	r8, #0	; 0x0
         471a4:	e5943004 	ldr	r3, [r4, #4]	; fField4
         471a8:	e5950000 	ldr	r0, [r5]
         471ac:	e0870000 	add	r0, r7, r0
         471b0:	e59d1000 	ldr	r1, [sp]
         471b4:	e0401001 	sub	r1, r0, r1
         471b8:	e1a0200d 	mov	r2, sp
         471bc:	e1a00003 	mov	r0, r3
         471c0:	e5933000 	ldr	r3, [r3]
         471c4:	e1a0e00f 	mov	lr, pc
         471c8:	e283f018 	add	pc, r3, #24	; 0x18
         471cc:	e3700001 	cmn	r0, #1	; 0x1
         471d0:	03a08001 	moveq	r8, #1	; 0x1
         471d4:	0a000005 	beq	471f0 <CBufferPipe::ReadChunk(void *, long &, unsigned char &)+0x134>
         471d8:	e3300000 	teq	r0, #0	; 0x0
         471dc:	0a000003 	beq	471f0 <CBufferPipe::ReadChunk(void *, long &, unsigned char &)+0x134>
         471e0:	e1a01000 	mov	r1, r0
         471e4:	e3a02000 	mov	r2, #0	; 0x0
         471e8:	e5990000 	ldr	r0, [r9]
         471ec:	eb6e6fea 	bl	1be319c <$Throw>
         471f0:	e59d1000 	ldr	r1, [sp]
         471f4:	e3510000 	cmp	r1, #0	; 0x0
         471f8:	da000002 	ble	47208 <CBufferPipe::ReadChunk(void *, long &, unsigned char &)+0x14c>
         471fc:	e5d4000d 	ldrb	r0, [r4, #13]	; fField13
         47200:	e3300000 	teq	r0, #0	; 0x0
         47204:	0affffe0 	beq	4718c <CBufferPipe::ReadChunk(void *, long &, unsigned char &)+0xd0>
         47208:	e5d4000d 	ldrb	r0, [r4, #13]	; fField13
         4720c:	e3300000 	teq	r0, #0	; 0x0
         47210:	0a000018 	beq	47278 <CBufferPipe::ReadChunk(void *, long &, unsigned char &)+0x1bc>
         47214:	e3a0a001 	mov	sl, #1	; 0x1
         47218:	e3380000 	teq	r8, #0	; 0x0
         4721c:	1a00000b 	bne	47250 <CBufferPipe::ReadChunk(void *, long &, unsigned char &)+0x194>
         47220:	e59d0000 	ldr	r0, [sp]
         47224:	e3500000 	cmp	r0, #0	; 0x0
         47228:	da000012 	ble	47278 <CBufferPipe::ReadChunk(void *, long &, unsigned char &)+0x1bc>
         4722c:	e1a0200d 	mov	r2, sp
         47230:	e1a01007 	mov	r1, r7
         47234:	e5943004 	ldr	r3, [r4, #4]	; fField4
         47238:	e1a00003 	mov	r0, r3
         4723c:	e5933000 	ldr	r3, [r3]
         47240:	e1a0e00f 	mov	lr, pc
         47244:	e283f018 	add	pc, r3, #24	; 0x18
         47248:	e3700001 	cmn	r0, #1	; 0x1
         4724c:	1a000003 	bne	47260 <CBufferPipe::ReadChunk(void *, long &, unsigned char &)+0x1a4>
         47250:	e3a00000 	mov	r0, #0	; 0x0
         47254:	e5c4000d 	strb	r0, [r4, #13]	; fField13
         47258:	e5c6a000 	strb	sl, [r6]
         4725c:	ea000005 	b	47278 <CBufferPipe::ReadChunk(void *, long &, unsigned char &)+0x1bc>
         47260:	e3300000 	teq	r0, #0	; 0x0
         47264:	0a000003 	beq	47278 <CBufferPipe::ReadChunk(void *, long &, unsigned char &)+0x1bc>
         47268:	e1a01000 	mov	r1, r0
         4726c:	e3a02000 	mov	r2, #0	; 0x0
         47270:	e5990000 	ldr	r0, [r9]
         47274:	eb6e6fc8 	bl	1be319c <$Throw>
         47278:	e5951000 	ldr	r1, [r5]
         4727c:	e59d0000 	ldr	r0, [sp]
         47280:	e0410000 	sub	r0, r1, r0
         47284:	e5850000 	str	r0, [r5]
         47288:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: CBufferPipe::WriteChunk(void *, long, unsigned char)
 * Address: 0004728c
 */
CBufferPipe::WriteChunk(void *, long, unsigned char) {
    /*
         4728c:	e1a0c00d 	mov	ip, sp
         47290:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         47294:	e24cb004 	sub	fp, ip, #4	; 0x4
         47298:	e1a04000 	mov	r4, r0
         4729c:	e1a06001 	mov	r6, r1
         472a0:	e1a05002 	mov	r5, r2
         472a4:	e20380ff 	and	r8, r3, #255	; 0xff
         472a8:	e5900008 	ldr	r0, [r0, #8]	; fField8
         472ac:	e59f70e0 	ldr	r7, [pc, #e0]	; 47394 <CBufferPipe::WriteChunk(void *, long, unsigned char)+0x108>
         472b0:	e3300000 	teq	r0, #0	; 0x0
         472b4:	1a000004 	bne	472cc <CBufferPipe::WriteChunk(void *, long, unsigned char)+0x40>
         472b8:	e3a02000 	mov	r2, #0	; 0x0
         472bc:	e3a01046 	mov	r1, #70	; 0x46
         472c0:	e2411c37 	sub	r1, r1, #14080	; 0x3700
         472c4:	e5970000 	ldr	r0, [r7]
         472c8:	eb6e6fb3 	bl	1be319c <$Throw>
         472cc:	e52d5004 	str	r5, [sp, -#4]!	; fField4
         472d0:	e3550000 	cmp	r5, #0	; 0x0
         472d4:	da000027 	ble	47378 <CBufferPipe::WriteChunk(void *, long, unsigned char)+0xec>
         472d8:	e1a0200d 	mov	r2, sp
         472dc:	e1a01006 	mov	r1, r6
         472e0:	e5943008 	ldr	r3, [r4, #8]	; fField8
         472e4:	e1a00003 	mov	r0, r3
         472e8:	e5933000 	ldr	r3, [r3]
         472ec:	e1a0e00f 	mov	lr, pc
         472f0:	e283f024 	add	pc, r3, #36	; 0x24
         472f4:	e3700001 	cmn	r0, #1	; 0x1
         472f8:	13300000 	teqne	r0, #0	; 0x0
         472fc:	0a000003 	beq	47310 <CBufferPipe::WriteChunk(void *, long, unsigned char)+0x84>
         47300:	e1a01000 	mov	r1, r0
         47304:	e3a02000 	mov	r2, #0	; 0x0
         47308:	e5970000 	ldr	r0, [r7]
         4730c:	eb6e6fa2 	bl	1be319c <$Throw>
         47310:	e59d0000 	ldr	r0, [sp]
         47314:	e3500000 	cmp	r0, #0	; 0x0
         47318:	da000016 	ble	47378 <CBufferPipe::WriteChunk(void *, long, unsigned char)+0xec>
         4731c:	e0865005 	add	r5, r6, r5
         47320:	e1a00004 	mov	r0, r4
         47324:	e5941000 	ldr	r1, [r4]
         47328:	e1a0e00f 	mov	lr, pc
         4732c:	e281f030 	add	pc, r1, #48	; 0x30
         47330:	e5943008 	ldr	r3, [r4, #8]	; fField8
         47334:	e59d0000 	ldr	r0, [sp]
         47338:	e0451000 	sub	r1, r5, r0
         4733c:	e1a0200d 	mov	r2, sp
         47340:	e1a00003 	mov	r0, r3
         47344:	e5933000 	ldr	r3, [r3]
         47348:	e1a0e00f 	mov	lr, pc
         4734c:	e283f024 	add	pc, r3, #36	; 0x24
         47350:	e3700001 	cmn	r0, #1	; 0x1
         47354:	13300000 	teqne	r0, #0	; 0x0
         47358:	0a000003 	beq	4736c <CBufferPipe::WriteChunk(void *, long, unsigned char)+0xe0>
         4735c:	e1a01000 	mov	r1, r0
         47360:	e3a02000 	mov	r2, #0	; 0x0
         47364:	e5970000 	ldr	r0, [r7]
         47368:	eb6e6f8b 	bl	1be319c <$Throw>
         4736c:	e59d0000 	ldr	r0, [sp]
         47370:	e3500000 	cmp	r0, #0	; 0x0
         47374:	caffffe9 	bgt	47320 <CBufferPipe::WriteChunk(void *, long, unsigned char)+0x94>
         47378:	e3380000 	teq	r8, #0	; 0x0
         4737c:	0a000003 	beq	47390 <CBufferPipe::WriteChunk(void *, long, unsigned char)+0x104>
         47380:	e1a00004 	mov	r0, r4
         47384:	e5941000 	ldr	r1, [r4]
         47388:	e1a0e00f 	mov	lr, pc
         4738c:	e281f020 	add	pc, r1, #32	; 0x20
         47390:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         47394:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: CBufferPipe::ReadSeek(long, int)
 * Address: 00047398
 */
CBufferPipe::ReadSeek(long, int) {
    /*
         47398:	e1a0c00d 	mov	ip, sp
         4739c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         473a0:	e24cb004 	sub	fp, ip, #4	; 0x4
         473a4:	e1a04000 	mov	r4, r0
         473a8:	e1a06001 	mov	r6, r1
         473ac:	e1a05002 	mov	r5, r2
         473b0:	e5900004 	ldr	r0, [r0, #4]	; fField4
         473b4:	e3300000 	teq	r0, #0	; 0x0
         473b8:	1a000005 	bne	473d4 <CBufferPipe::ReadSeek(long, int)+0x3c>
         473bc:	e59f002c 	ldr	r0, [pc, #2c]	; 473f0 <CBufferPipe::ReadSeek(long, int)+0x58>
         473c0:	e5900000 	ldr	r0, [r0]
         473c4:	e3a02000 	mov	r2, #0	; 0x0
         473c8:	e3a01046 	mov	r1, #70	; 0x46
         473cc:	e2411c37 	sub	r1, r1, #14080	; 0x3700
         473d0:	eb6e6f71 	bl	1be319c <$Throw>
         473d4:	e1a02005 	mov	r2, r5
         473d8:	e1a01006 	mov	r1, r6
         473dc:	e5b43004 	ldr	r3, [r4, #4]!	; fField4
         473e0:	e1a00003 	mov	r0, r3
         473e4:	e5933000 	ldr	r3, [r3]
         473e8:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         473ec:	e283f038 	add	pc, r3, #56	; 0x38
         473f0:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

