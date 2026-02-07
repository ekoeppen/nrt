#include "include/TObjTextDecompressor.h"

/**
 * Symbol: TObjTextDecompressor::__ct(void)
 * Address: 002dfbe0
 */
TObjTextDecompressor::TObjTextDecompressor(void) {
    /*
        2dfbe0:	e1a0c00d 	mov	ip, sp
        2dfbe4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2dfbe8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dfbec:	e1b04000 	movs	r4, r0
        2dfbf0:	1a000004 	bne	2dfc08 <TObjTextDecompressor::__ct(void)+0x28>
        2dfbf4:	e3a00ff2 	mov	r0, #968	; 0x3c8
        2dfbf8:	e2800b02 	add	r0, r0, #2048	; 0x800
        2dfbfc:	eb63bacd 	bl	1bce738 <$__nw(unsigned int)>
        2dfc00:	e1b04000 	movs	r4, r0
        2dfc04:	0a000006 	beq	2dfc24 <TObjTextDecompressor::__ct(void)+0x44>
        2dfc08:	e1a02004 	mov	r2, r4
        2dfc0c:	e59f1018 	ldr	r1, [pc, #18]	; 2dfc2c <TObjTextDecompressor::__ct(void)+0x4c>
        2dfc10:	e3a00002 	mov	r0, #2	; 0x2
        2dfc14:	eb5da629 	bl	1a494c0 <$NewDecompressor(CompressionType, long (*)(unsigned long, void *, long *, unsigned char *), unsigned long)>
        2dfc18:	e5840bb8 	str	r0, [r4, #3000]	; fField3000
        2dfc1c:	e2840ffa 	add	r0, r4, #1000	; 0x3e8
        2dfc20:	e5840bbc 	str	r0, [r4, #3004]	; fField3004
        2dfc24:	e1a00004 	mov	r0, r4
        2dfc28:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2dfc2c:	002dfbdc 	ldreqd	pc, [sp], -ip
    */
}

/**
 * Symbol: TObjTextDecompressor::__dt(void)
 * Address: 002dfc30
 */
TObjTextDecompressor::~TObjTextDecompressor(void) {
    /*
        2dfc30:	e1a0c00d 	mov	ip, sp
        2dfc34:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2dfc38:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dfc3c:	e1a04000 	mov	r4, r0
        2dfc40:	e1a05001 	mov	r5, r1
        2dfc44:	e5900bb8 	ldr	r0, [r0, #3000]	; fField3000
        2dfc48:	e3300000 	teq	r0, #0	; 0x0
        2dfc4c:	1b02a6b3 	blne	389720 <TCallbackDecompressor::Delete(void)>
        2dfc50:	e3150001 	tst	r5, #1	; 0x1
        2dfc54:	11a00004 	movne	r0, r4
        2dfc58:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        2dfc5c:	1a63b69f 	bne	1bcd6e0 <$__dl(void *)>
        2dfc60:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TObjTextDecompressor::TextDecompCallback(void *, long *, unsigned char *)
 * Address: 002dfd78
 */
TObjTextDecompressor::TextDecompCallback(void *, long *, unsigned char *) {
    /*
        2dfd78:	e1a0c00d 	mov	ip, sp
        2dfd7c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2dfd80:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dfd84:	e1a04000 	mov	r4, r0
        2dfd88:	e1a05002 	mov	r5, r2
        2dfd8c:	e5900bc0 	ldr	r0, [r0, #3008]	; fField3008
        2dfd90:	e5922000 	ldr	r2, [r2]
        2dfd94:	e3a06000 	mov	r6, #0	; 0x0
        2dfd98:	e1500002 	cmp	r0, r2
        2dfd9c:	c5c36000 	strgtb	r6, [r3]
        2dfda0:	d5850000 	strle	r0, [r5]
        2dfda4:	d3a00001 	movle	r0, #1	; 0x1
        2dfda8:	d5c30000 	strleb	r0, [r3]
        2dfdac:	e5940bc4 	ldr	r0, [r4, #3012]	; fField3012
        2dfdb0:	e0803004 	add	r3, r0, r4
        2dfdb4:	e1a00001 	mov	r0, r1
        2dfdb8:	e1a01003 	mov	r1, r3
        2dfdbc:	e5952000 	ldr	r2, [r5]
        2dfdc0:	eb635322 	bl	1bb4a50 <$memcpy>
        2dfdc4:	e5940bc0 	ldr	r0, [r4, #3008]	; fField3008
        2dfdc8:	e5951000 	ldr	r1, [r5]
        2dfdcc:	e0400001 	sub	r0, r0, r1
        2dfdd0:	e5840bc0 	str	r0, [r4, #3008]	; fField3008
        2dfdd4:	e5940bc4 	ldr	r0, [r4, #3012]	; fField3012
        2dfdd8:	e5951000 	ldr	r1, [r5]
        2dfddc:	e0800001 	add	r0, r0, r1
        2dfde0:	e5a40bc4 	str	r0, [r4, #3012]!	; fField3012
        2dfde4:	e1a00006 	mov	r0, r6
        2dfde8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TObjTextDecompressor::SlowDecompress(TStoreWrapper *, unsigned long, long *)
 * Address: 002dfdec
 */
TObjTextDecompressor::SlowDecompress(TStoreWrapper *, unsigned long, long *) {
    /*
        2dfdec:	e1a0c00d 	mov	ip, sp
        2dfdf0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2dfdf4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dfdf8:	e1a05002 	mov	r5, r2
        2dfdfc:	e1a04003 	mov	r4, r3
        2dfe00:	e24dde12 	sub	sp, sp, #288	; 0x120
        2dfe04:	e1a0000d 	mov	r0, sp
        2dfe08:	e3a02002 	mov	r2, #2	; 0x2
        2dfe0c:	eb5d6ff1 	bl	1a3bdd8 <TStoreReadPipe::$__ct(TStoreWrapper *, CompressionType)>
        2dfe10:	e1a01005 	mov	r1, r5
        2dfe14:	e1a0000d 	mov	r0, sp
        2dfe18:	eb5d8cf0 	bl	1a431e0 <TStoreReadPipe::$SetPSSID(unsigned long)>
        2dfe1c:	e5940000 	ldr	r0, [r4]
        2dfe20:	eb63ba44 	bl	1bce738 <$__nw(unsigned int)>
        2dfe24:	e1b05000 	movs	r5, r0
        2dfe28:	1a000005 	bne	2dfe44 <TObjTextDecompressor::SlowDecompress(TStoreWrapper *, unsigned long, long *)+0x58>
        2dfe2c:	e59f0038 	ldr	r0, [pc, #38]	; 2dfe6c <TObjTextDecompressor::SlowDecompress(TStoreWrapper *, unsigned long, long *)+0x80>
        2dfe30:	e5900000 	ldr	r0, [r0]
        2dfe34:	e3a02000 	mov	r2, #0	; 0x0
        2dfe38:	e3a010e9 	mov	r1, #233	; 0xe9
        2dfe3c:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        2dfe40:	eb640cd5 	bl	1be319c <$Throw>
        2dfe44:	e1a01005 	mov	r1, r5
        2dfe48:	e1a0000d 	mov	r0, sp
        2dfe4c:	e5942000 	ldr	r2, [r4]
        2dfe50:	eb5d88c5 	bl	1a4216c <TStoreReadPipe::$ReadFromStore(char *, long)>
        2dfe54:	e5840000 	str	r0, [r4]
        2dfe58:	e1a0000d 	mov	r0, sp
        2dfe5c:	e3a01000 	mov	r1, #0	; 0x0
        2dfe60:	eb5d73e7 	bl	1a3ce04 <TStoreReadPipe::$__dt(void)>
        2dfe64:	e1a00005 	mov	r0, r5
        2dfe68:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2dfe6c:	00371318 	eoreqs	r1, r7, r8, lsl r3
    */
}

/**
 * Symbol: TObjTextDecompressor::Decompress(TStoreWrapper *, unsigned long, long *)
 * Address: 002dfe70
 */
TObjTextDecompressor::Decompress(TStoreWrapper *, unsigned long, long *) {
    /*
        2dfe70:	e1a0c00d 	mov	ip, sp
        2dfe74:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2dfe78:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dfe7c:	e1a04000 	mov	r4, r0
        2dfe80:	e1a07001 	mov	r7, r1
        2dfe84:	e1a06002 	mov	r6, r2
        2dfe88:	e1a05003 	mov	r5, r3
        2dfe8c:	e2802d2f 	add	r2, r0, #3008	; 0xbc0
        2dfe90:	e591007c 	ldr	r0, [r1, #124]
        2dfe94:	e1a01006 	mov	r1, r6
        2dfe98:	eb606b98 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        2dfe9c:	e3300000 	teq	r0, #0	; 0x0
        2dfea0:	1b5d73e0 	blne	1a3ce28 <$_OSErr(long)>
        2dfea4:	e5950000 	ldr	r0, [r5]
        2dfea8:	e3500e7d 	cmp	r0, #2000	; 0x7d0
        2dfeac:	d5940bc0 	ldrle	r0, [r4, #3008]	; fField3008
        2dfeb0:	d3500ffa 	cmple	r0, #1000	; 0x3e8
        2dfeb4:	da000005 	ble	2dfed0 <TObjTextDecompressor::Decompress(TStoreWrapper *, unsigned long, long *)+0x60>
        2dfeb8:	e1a03005 	mov	r3, r5
        2dfebc:	e1a02006 	mov	r2, r6
        2dfec0:	e1a01007 	mov	r1, r7
        2dfec4:	e1a00004 	mov	r0, r4
        2dfec8:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        2dfecc:	ea5da991 	b	1a4a518 <TObjTextDecompressor::$SlowDecompress(TStoreWrapper *, unsigned long, long *)>
        2dfed0:	e1a03000 	mov	r3, r0
        2dfed4:	e92d0008 	stmdb	sp!, {r3}
        2dfed8:	e1a03004 	mov	r3, r4
        2dfedc:	e5b7007c 	ldr	r0, [r7, #124]!
        2dfee0:	e3a07000 	mov	r7, #0	; 0x0
        2dfee4:	e1a02007 	mov	r2, r7
        2dfee8:	e1a01006 	mov	r1, r6
        2dfeec:	eb608893 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        2dfef0:	e28dd004 	add	sp, sp, #4	; 0x4
        2dfef4:	e3300000 	teq	r0, #0	; 0x0
        2dfef8:	1b5d73ca 	blne	1a3ce28 <$_OSErr(long)>
        2dfefc:	e5847bc4 	str	r7, [r4, #3012]	; fField3012
        2dff00:	e5940bb8 	ldr	r0, [r4, #3000]	; fField3000
        2dff04:	eb02a60f 	bl	389748 <TCallbackDecompressor::Reset(void)>
        2dff08:	e24dd004 	sub	sp, sp, #4	; 0x4
        2dff0c:	e1a0300d 	mov	r3, sp
        2dff10:	e1a02005 	mov	r2, r5
        2dff14:	e2841d2f 	add	r1, r4, #3008	; 0xbc0
        2dff18:	e9110003 	ldmdb	r1, {r0, r1}
        2dff1c:	eb02a60c 	bl	389754 <TCallbackDecompressor::ReadChunk(void *, long *, unsigned char *)>
        2dff20:	e3300000 	teq	r0, #0	; 0x0
        2dff24:	1b5d73bf 	blne	1a3ce28 <$_OSErr(long)>
        2dff28:	e5b40bbc 	ldr	r0, [r4, #3004]!	; fField3004
        2dff2c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

