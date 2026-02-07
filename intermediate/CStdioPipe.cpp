#include "include/CStdioPipe.h"

/**
 * Symbol: CStdioPipe::__ct(char *, char *)
 * Address: 001f99e0
 */
CStdioPipe::CStdioPipe(char *, char *) {
    /*
        1f99e0:	e1a0c00d 	mov	ip, sp
        1f99e4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1f99e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f99ec:	e1b04000 	movs	r4, r0
        1f99f0:	e1a05001 	mov	r5, r1
        1f99f4:	e1a06002 	mov	r6, r2
        1f99f8:	1a000005 	bne	1f9a14 <CStdioPipe::__ct(char *, char *)+0x34>
        1f99fc:	e3a0000c 	mov	r0, #12	; 0xc
        1f9a00:	eb67534c 	bl	1bce738 <$__nw(unsigned int)>
        1f9a04:	e1b04000 	movs	r4, r0
        1f9a08:	1a000001 	bne	1f9a14 <CStdioPipe::__ct(char *, char *)+0x34>
        1f9a0c:	e1a00004 	mov	r0, r4
        1f9a10:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1f9a14:	e1a00004 	mov	r0, r4
        1f9a18:	eb67aa04 	bl	1be4230 <CPipe::$__ct(void)>
        1f9a1c:	e59f0038 	ldr	r0, [pc, #38]	; 1f9a5c <CStdioPipe::__ct(char *, char *)+0x7c>
        1f9a20:	e1a01006 	mov	r1, r6
        1f9a24:	e5840000 	str	r0, [r4]
        1f9a28:	e1a00005 	mov	r0, r5
        1f9a2c:	eb67db8c 	bl	1bf0864 <$fopen>
        1f9a30:	e5840004 	str	r0, [r4, #4]	; fField4
        1f9a34:	e3300000 	teq	r0, #0	; 0x0
        1f9a38:	1a000004 	bne	1f9a50 <CStdioPipe::__ct(char *, char *)+0x70>
        1f9a3c:	e59f001c 	ldr	r0, [pc, #1c]	; 1f9a60 <CStdioPipe::__ct(char *, char *)+0x80>
        1f9a40:	e5900000 	ldr	r0, [r0]
        1f9a44:	e3a02000 	mov	r2, #0	; 0x0
        1f9a48:	e3e01000 	mvn	r1, #0	; 0x0
        1f9a4c:	eb67a5d2 	bl	1be319c <$Throw>
        1f9a50:	e3a00000 	mov	r0, #0	; 0x0
        1f9a54:	e5840008 	str	r0, [r4, #8]	; fField8
        1f9a58:	eaffffeb 	b	1f9a0c <CStdioPipe::__ct(char *, char *)+0x2c>
        1f9a5c:	0001a64c 	andeq	sl, r1, ip, asr #12
        1f9a60:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: CStdioPipe::__dt(void)
 * Address: 001f9a64
 */
CStdioPipe::~CStdioPipe(void) {
    /*
        1f9a64:	e1a0c00d 	mov	ip, sp
        1f9a68:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1f9a6c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f9a70:	e1a04000 	mov	r4, r0
        1f9a74:	e1a05001 	mov	r5, r1
        1f9a78:	e59f0064 	ldr	r0, [pc, #64]	; 1f9ae4 <CStdioPipe::__dt(void)+0x80>
        1f9a7c:	e5840000 	str	r0, [r4]
        1f9a80:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1f9a84:	eb67db75 	bl	1bf0860 <$fflush>
        1f9a88:	e59f6058 	ldr	r6, [pc, #58]	; 1f9ae8 <CStdioPipe::__dt(void)+0x84>
        1f9a8c:	e3300000 	teq	r0, #0	; 0x0
        1f9a90:	0a000003 	beq	1f9aa4 <CStdioPipe::__dt(void)+0x40>
        1f9a94:	e3a02000 	mov	r2, #0	; 0x0
        1f9a98:	e3e01004 	mvn	r1, #4	; 0x4
        1f9a9c:	e5960000 	ldr	r0, [r6]
        1f9aa0:	eb67a5bd 	bl	1be319c <$Throw>
        1f9aa4:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1f9aa8:	eb67db69 	bl	1bf0854 <$fclose>
        1f9aac:	e3300000 	teq	r0, #0	; 0x0
        1f9ab0:	0a000003 	beq	1f9ac4 <CStdioPipe::__dt(void)+0x60>
        1f9ab4:	e3a02000 	mov	r2, #0	; 0x0
        1f9ab8:	e3e01001 	mvn	r1, #1	; 0x1
        1f9abc:	e5960000 	ldr	r0, [r6]
        1f9ac0:	eb67a5b5 	bl	1be319c <$Throw>
        1f9ac4:	e1a00004 	mov	r0, r4
        1f9ac8:	e3a01000 	mov	r1, #0	; 0x0
        1f9acc:	eb67aded 	bl	1be5288 <CPipe::$__dt(void)>
        1f9ad0:	e3150001 	tst	r5, #1	; 0x1
        1f9ad4:	11a00004 	movne	r0, r4
        1f9ad8:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
        1f9adc:	1a674eff 	bne	1bcd6e0 <$__dl(void *)>
        1f9ae0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1f9ae4:	0001a64c 	andeq	sl, r1, ip, asr #12
        1f9ae8:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: CStdioPipe::WriteSeek(long, int)
 * Address: 001f9aec
 */
CStdioPipe::WriteSeek(long, int) {
    /*
        1f9aec:	e1a0c00d 	mov	ip, sp
        1f9af0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1f9af4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f9af8:	e1a04000 	mov	r4, r0
        1f9afc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1f9b00:	eb05583d 	bl	34fbfc <fseek>
        1f9b04:	e3300000 	teq	r0, #0	; 0x0
        1f9b08:	0a000004 	beq	1f9b20 <CStdioPipe::WriteSeek(long, int)+0x34>
        1f9b0c:	e59f0018 	ldr	r0, [pc, #18]	; 1f9b2c <CStdioPipe::WriteSeek(long, int)+0x40>
        1f9b10:	e5900000 	ldr	r0, [r0]
        1f9b14:	e3a02000 	mov	r2, #0	; 0x0
        1f9b18:	e3e01005 	mvn	r1, #5	; 0x5
        1f9b1c:	eb67a59e 	bl	1be319c <$Throw>
        1f9b20:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        1f9b24:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1f9b28:	ea0558c9 	b	34fe54 <ftell>
        1f9b2c:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: CStdioPipe::WritePosition( const(void))
 * Address: 001f9b30
 */
CStdioPipe::WritePosition( const(void)) {
    /*
        1f9b30:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1f9b34:	ea0558c6 	b	34fe54 <ftell>
    */
}

/**
 * Symbol: CStdioPipe::FlushRead(void)
 * Address: 001f9b38
 */
CStdioPipe::FlushRead(void) {
    /*
        1f9b38:	ea63fc3a 	b	1af8c28 <CStdioPipe::$Flush(void)>
    */
}

/**
 * Symbol: CStdioPipe::FlushWrite(void)
 * Address: 001f9b3c
 */
CStdioPipe::FlushWrite(void) {
    /*
        1f9b3c:	ea63fc39 	b	1af8c28 <CStdioPipe::$Flush(void)>
    */
}

/**
 * Symbol: CStdioPipe::ReadChunk(void *, long &, unsigned char &)
 * Address: 001f9b40
 */
CStdioPipe::ReadChunk(void *, long &, unsigned char &) {
    /*
        1f9b40:	e1a0c00d 	mov	ip, sp
        1f9b44:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1f9b48:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f9b4c:	e1a04000 	mov	r4, r0
        1f9b50:	e1a07001 	mov	r7, r1
        1f9b54:	e1a05002 	mov	r5, r2
        1f9b58:	e1a06003 	mov	r6, r3
        1f9b5c:	e5900008 	ldr	r0, [r0, #8]	; fField8
        1f9b60:	e3300002 	teq	r0, #2	; 0x2
        1f9b64:	05940004 	ldreq	r0, [r4, #4]	; fField4
        1f9b68:	0b67db3c 	bleq	1bf0860 <$fflush>
        1f9b6c:	e3a08001 	mov	r8, #1	; 0x1
        1f9b70:	e5848008 	str	r8, [r4, #8]	; fField8
        1f9b74:	e5943004 	ldr	r3, [r4, #4]	; fField4
        1f9b78:	e1a00007 	mov	r0, r7
        1f9b7c:	e3a01001 	mov	r1, #1	; 0x1
        1f9b80:	e5952000 	ldr	r2, [r5]
        1f9b84:	eb67db3a 	bl	1bf0874 <$fread>
        1f9b88:	e1a07000 	mov	r7, r0
        1f9b8c:	e5951000 	ldr	r1, [r5]
        1f9b90:	e1500001 	cmp	r0, r1
        1f9b94:	2a00000d 	bcs	1f9bd0 <CStdioPipe::ReadChunk(void *, long &, unsigned char &)+0x90>
        1f9b98:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1f9b9c:	eb67db2e 	bl	1bf085c <$ferror>
        1f9ba0:	e59f1040 	ldr	r1, [pc, #40]	; 1f9be8 <CStdioPipe::ReadChunk(void *, long &, unsigned char &)+0xa8>
        1f9ba4:	e3300000 	teq	r0, #0	; 0x0
        1f9ba8:	13a02000 	movne	r2, #0	; 0x0
        1f9bac:	15910000 	ldrne	r0, [r1]
        1f9bb0:	13e01003 	mvnne	r1, #3	; 0x3
        1f9bb4:	1a000004 	bne	1f9bcc <CStdioPipe::ReadChunk(void *, long &, unsigned char &)+0x8c>
        1f9bb8:	e5857000 	str	r7, [r5]
        1f9bbc:	e5c68000 	strb	r8, [r6]
        1f9bc0:	e3a02000 	mov	r2, #0	; 0x0
        1f9bc4:	e5910000 	ldr	r0, [r1]
        1f9bc8:	e3e01002 	mvn	r1, #2	; 0x2
        1f9bcc:	eb67a572 	bl	1be319c <$Throw>
        1f9bd0:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        1f9bd4:	eb67db1f 	bl	1bf0858 <$feof>
        1f9bd8:	e3300000 	teq	r0, #0	; 0x0
        1f9bdc:	13a00001 	movne	r0, #1	; 0x1
        1f9be0:	e5c60000 	strb	r0, [r6]
        1f9be4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1f9be8:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: CStdioPipe::WriteChunk(void *, long, unsigned char)
 * Address: 001f9bec
 */
CStdioPipe::WriteChunk(void *, long, unsigned char) {
    /*
        1f9bec:	e1a0c00d 	mov	ip, sp
        1f9bf0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1f9bf4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f9bf8:	e1a04000 	mov	r4, r0
        1f9bfc:	e1a05002 	mov	r5, r2
        1f9c00:	e20360ff 	and	r6, r3, #255	; 0xff
        1f9c04:	e3a00002 	mov	r0, #2	; 0x2
        1f9c08:	e5840008 	str	r0, [r4, #8]	; fField8
        1f9c0c:	e1a00001 	mov	r0, r1
        1f9c10:	e3a01001 	mov	r1, #1	; 0x1
        1f9c14:	e5943004 	ldr	r3, [r4, #4]	; fField4
        1f9c18:	eb67db16 	bl	1bf0878 <$fwrite>
        1f9c1c:	e1500005 	cmp	r0, r5
        1f9c20:	2a000004 	bcs	1f9c38 <CStdioPipe::WriteChunk(void *, long, unsigned char)+0x4c>
        1f9c24:	e59f0020 	ldr	r0, [pc, #20]	; 1f9c4c <CStdioPipe::WriteChunk(void *, long, unsigned char)+0x60>
        1f9c28:	e5900000 	ldr	r0, [r0]
        1f9c2c:	e3a02000 	mov	r2, #0	; 0x0
        1f9c30:	e3e01004 	mvn	r1, #4	; 0x4
        1f9c34:	eb67a558 	bl	1be319c <$Throw>
        1f9c38:	e3360000 	teq	r6, #0	; 0x0
        1f9c3c:	11a00004 	movne	r0, r4
        1f9c40:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
        1f9c44:	1a63fbf7 	bne	1af8c28 <CStdioPipe::$Flush(void)>
        1f9c48:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1f9c4c:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: CStdioPipe::Flush(void)
 * Address: 001f9c50
 */
CStdioPipe::Flush(void) {
    /*
        1f9c50:	e1a0c00d 	mov	ip, sp
        1f9c54:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1f9c58:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f9c5c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1f9c60:	eb67dafe 	bl	1bf0860 <$fflush>
        1f9c64:	e3300000 	teq	r0, #0	; 0x0
        1f9c68:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        1f9c6c:	e59f0010 	ldr	r0, [pc, #10]	; 1f9c84 <CStdioPipe::Flush(void)+0x34>
        1f9c70:	e5900000 	ldr	r0, [r0]
        1f9c74:	e3a02000 	mov	r2, #0	; 0x0
        1f9c78:	e3e01004 	mvn	r1, #4	; 0x4
        1f9c7c:	e91b6800 	ldmdb	fp, {fp, sp, lr}
        1f9c80:	ea67a545 	b	1be319c <$Throw>
        1f9c84:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: CStdioPipe::Reset(void)
 * Address: 001f9c88
 */
CStdioPipe::Reset(void) {
    /*
        1f9c88:	e1a0c00d 	mov	ip, sp
        1f9c8c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1f9c90:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f9c94:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1f9c98:	e3a02000 	mov	r2, #0	; 0x0
        1f9c9c:	e3a01000 	mov	r1, #0	; 0x0
        1f9ca0:	eb0557d5 	bl	34fbfc <fseek>
        1f9ca4:	e3300000 	teq	r0, #0	; 0x0
        1f9ca8:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        1f9cac:	e59f0010 	ldr	r0, [pc, #10]	; 1f9cc4 <CStdioPipe::Reset(void)+0x3c>
        1f9cb0:	e5900000 	ldr	r0, [r0]
        1f9cb4:	e3a02000 	mov	r2, #0	; 0x0
        1f9cb8:	e3e01005 	mvn	r1, #5	; 0x5
        1f9cbc:	e91b6800 	ldmdb	fp, {fp, sp, lr}
        1f9cc0:	ea67a535 	b	1be319c <$Throw>
        1f9cc4:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: CStdioPipe::Overflow(void)
 * Address: 001f9cc8
 */
CStdioPipe::Overflow(void) {
    /*
        1f9cc8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CStdioPipe::Underflow(long, unsigned char &)
 * Address: 001f9ccc
 */
CStdioPipe::Underflow(long, unsigned char &) {
    /*
        1f9ccc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CStdioPipe::ReadSeek(long, int)
 * Address: 001f9cd0
 */
CStdioPipe::ReadSeek(long, int) {
    /*
        1f9cd0:	e1a0c00d 	mov	ip, sp
        1f9cd4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1f9cd8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f9cdc:	e1a04000 	mov	r4, r0
        1f9ce0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1f9ce4:	eb0557c4 	bl	34fbfc <fseek>
        1f9ce8:	e3300000 	teq	r0, #0	; 0x0
        1f9cec:	0a000004 	beq	1f9d04 <CStdioPipe::ReadSeek(long, int)+0x34>
        1f9cf0:	e59f0018 	ldr	r0, [pc, #18]	; 1f9d10 <CStdioPipe::ReadSeek(long, int)+0x40>
        1f9cf4:	e5900000 	ldr	r0, [r0]
        1f9cf8:	e3a02000 	mov	r2, #0	; 0x0
        1f9cfc:	e3e01005 	mvn	r1, #5	; 0x5
        1f9d00:	eb67a525 	bl	1be319c <$Throw>
        1f9d04:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        1f9d08:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1f9d0c:	ea055850 	b	34fe54 <ftell>
        1f9d10:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: CStdioPipe::ReadPosition( const(void))
 * Address: 001f9d14
 */
CStdioPipe::ReadPosition( const(void)) {
    /*
        1f9d14:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1f9d18:	ea05584d 	b	34fe54 <ftell>
    */
}

