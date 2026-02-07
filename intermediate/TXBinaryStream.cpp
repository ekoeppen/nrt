#include "include/TXBinaryStream.h"

/**
 * Symbol: TXBinaryStream::__ct(RefVar const &, unsigned char, int, unsigned char)
 * Address: 0023e174
 */
TXBinaryStream::TXBinaryStream(RefVar const &, unsigned char, int, unsigned char) {
    /*
        23e174:	e1a0c00d 	mov	ip, sp
        23e178:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        23e17c:	e24cb004 	sub	fp, ip, #4	; 0x4
        23e180:	e1b04000 	movs	r4, r0
        23e184:	e1a05001 	mov	r5, r1
        23e188:	e1a06003 	mov	r6, r3
        23e18c:	e20270ff 	and	r7, r2, #255	; 0xff
        23e190:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        23e194:	e20080ff 	and	r8, r0, #255	; 0xff
        23e198:	1a000005 	bne	23e1b4 <TXBinaryStream::__ct(RefVar const &, unsigned char, int, unsigned char)+0x40>
        23e19c:	e3a00018 	mov	r0, #24	; 0x18
        23e1a0:	eb664164 	bl	1bce738 <$__nw(unsigned int)>
        23e1a4:	e1b04000 	movs	r4, r0
        23e1a8:	1a000001 	bne	23e1b4 <TXBinaryStream::__ct(RefVar const &, unsigned char, int, unsigned char)+0x40>
        23e1ac:	e1a00004 	mov	r0, r4
        23e1b0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        23e1b4:	e1a00004 	mov	r0, r4
        23e1b8:	eb656ec6 	bl	1b99cd8 <TXStream::$__ct(void)>
        23e1bc:	e3a00002 	mov	r0, #2	; 0x2
        23e1c0:	eb660fe1 	bl	1bc214c <$AllocateRefHandle(long)>
        23e1c4:	e3a01000 	mov	r1, #0	; 0x0
        23e1c8:	e5840008 	str	r0, [r4, #8]
        23e1cc:	e5a01004 	str	r1, [r0, #4]!	; fField4
        23e1d0:	e59f0028 	ldr	r0, [pc, #28]	; 23e200 <TXBinaryStream::__ct(RefVar const &, unsigned char, int, unsigned char)+0x8c>
        23e1d4:	e5840000 	str	r0, [r4]
        23e1d8:	e5951000 	ldr	r1, [r5]
        23e1dc:	e5911000 	ldr	r1, [r1]
        23e1e0:	e5940008 	ldr	r0, [r4, #8]
        23e1e4:	e3370000 	teq	r7, #0	; 0x0
        23e1e8:	e5801000 	str	r1, [r0]
        23e1ec:	0a000004 	beq	23e204 <TXBinaryStream::__ct(RefVar const &, unsigned char, int, unsigned char)+0x90>
        23e1f0:	e5950000 	ldr	r0, [r5]
        23e1f4:	e5900000 	ldr	r0, [r0]
        23e1f8:	eb661c2b 	bl	1bc52ac <$Length(long)>
        23e1fc:	ea000001 	b	23e208 <TXBinaryStream::__ct(RefVar const &, unsigned char, int, unsigned char)+0x94>
        23e200:	0001dd90 	muleq	r1, r0, sp
        23e204:	e3a00000 	mov	r0, #0	; 0x0
        23e208:	e284400c 	add	r4, r4, #12	; 0xc
        23e20c:	e8840041 	stmia	r4, {r0, r6}
        23e210:	e244400c 	sub	r4, r4, #12	; 0xc
        23e214:	e5c48014 	strb	r8, [r4, #20]	; fField20
        23e218:	eaffffe3 	b	23e1ac <TXBinaryStream::__ct(RefVar const &, unsigned char, int, unsigned char)+0x38>
    */
}

/**
 * Symbol: TXBinaryStream::__dt(void)
 * Address: 0023e21c
 */
TXBinaryStream::~TXBinaryStream(void) {
    /*
        23e21c:	e1a0c00d 	mov	ip, sp
        23e220:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        23e224:	e24cb004 	sub	fp, ip, #4	; 0x4
        23e228:	e1a04000 	mov	r4, r0
        23e22c:	e1a05001 	mov	r5, r1
        23e230:	e59f0054 	ldr	r0, [pc, #54]	; 23e28c <TXBinaryStream::__dt(void)+0x70>
        23e234:	e5840000 	str	r0, [r4]
        23e238:	e5d40014 	ldrb	r0, [r4, #20]	; fField20
        23e23c:	e2846008 	add	r6, r4, #8	; 0x8
        23e240:	e3300000 	teq	r0, #0	; 0x0
        23e244:	0a000006 	beq	23e264 <TXBinaryStream::__dt(void)+0x48>
        23e248:	e5960000 	ldr	r0, [r6]
        23e24c:	e5900000 	ldr	r0, [r0]
        23e250:	eb661c15 	bl	1bc52ac <$Length(long)>
        23e254:	e594100c 	ldr	r1, [r4, #12]	; fField12
        23e258:	e1300001 	teq	r0, r1
        23e25c:	11a00006 	movne	r0, r6
        23e260:	1b662041 	blne	1bc636c <$SetLength(RefVar const &, long)>
        23e264:	e5960000 	ldr	r0, [r6]
        23e268:	eb6613d3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23e26c:	e1a00004 	mov	r0, r4
        23e270:	e3a01000 	mov	r1, #0	; 0x0
        23e274:	eb656e98 	bl	1b99cdc <TXStream::$__dt(void)>
        23e278:	e3150001 	tst	r5, #1	; 0x1
        23e27c:	11a00004 	movne	r0, r4
        23e280:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
        23e284:	1a663d15 	bne	1bcd6e0 <$__dl(void *)>
        23e288:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        23e28c:	0001dd90 	muleq	r1, r0, sp
    */
}

/**
 * Symbol: TXBinaryStream::GetSize(long *)
 * Address: 0023e9b4
 */
TXBinaryStream::GetSize(long *) {
    /*
        23e9b4:	e590000c 	ldr	r0, [r0, #12]	; fField12
        23e9b8:	e5810000 	str	r0, [r1]
        23e9bc:	e3a00000 	mov	r0, #0	; 0x0
        23e9c0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXBinaryStream::Write(void const *, long)
 * Address: 0023ec80
 */
TXBinaryStream::Write(void const *, long) {
    /*
        23ec80:	e1a0c00d 	mov	ip, sp
        23ec84:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        23ec88:	e24cb004 	sub	fp, ip, #4	; 0x4
        23ec8c:	e1a04000 	mov	r4, r0
        23ec90:	e1a06001 	mov	r6, r1
        23ec94:	e1a05002 	mov	r5, r2
        23ec98:	e5901000 	ldr	r1, [r0]
        23ec9c:	e1a0e00f 	mov	lr, pc
        23eca0:	e281f004 	add	pc, r1, #4	; 0x4
        23eca4:	e1a0a000 	mov	sl, r0
        23eca8:	e1a00004 	mov	r0, r4
        23ecac:	e5941000 	ldr	r1, [r4]
        23ecb0:	e1a0e00f 	mov	lr, pc
        23ecb4:	e281f004 	add	pc, r1, #4	; 0x4
        23ecb8:	e594100c 	ldr	r1, [r4, #12]	; fField12
        23ecbc:	e2847008 	add	r7, r4, #8	; 0x8
        23ecc0:	e1300001 	teq	r0, r1
        23ecc4:	1a000019 	bne	23ed30 <TXBinaryStream::Write(void const *, long)+0xb0>
        23ecc8:	e1a09005 	mov	r9, r5
        23eccc:	e0818005 	add	r8, r1, r5
        23ecd0:	e5970000 	ldr	r0, [r7]
        23ecd4:	e5900000 	ldr	r0, [r0]
        23ecd8:	eb661973 	bl	1bc52ac <$Length(long)>
        23ecdc:	e1500008 	cmp	r0, r8
        23ece0:	aa000013 	bge	23ed34 <TXBinaryStream::Write(void const *, long)+0xb4>
        23ece4:	e3a00000 	mov	r0, #0	; 0x0
        23ece8:	e52d006c 	str	r0, [sp, -#108]!
        23ecec:	e28d0008 	add	r0, sp, #8	; 0x8
        23ecf0:	eb65cf1f 	bl	1bb2974 <$setjmp>
        23ecf4:	e3300000 	teq	r0, #0	; 0x0
        23ecf8:	e1a0000d 	mov	r0, sp
        23ecfc:	1a000008 	bne	23ed24 <TXBinaryStream::Write(void const *, long)+0xa4>
        23ed00:	eb6684dd 	bl	1be007c <$AddExceptionHandler>
        23ed04:	e5940010 	ldr	r0, [r4, #16]	; fField16
        23ed08:	e0801008 	add	r1, r0, r8
        23ed0c:	e1a00007 	mov	r0, r7
        23ed10:	eb661d95 	bl	1bc636c <$SetLength(RefVar const &, long)>
        23ed14:	e1a0000d 	mov	r0, sp
        23ed18:	eb6688e6 	bl	1be10b8 <$ExitHandler>
        23ed1c:	e28dd06c 	add	sp, sp, #108	; 0x6c
        23ed20:	ea000003 	b	23ed34 <TXBinaryStream::Write(void const *, long)+0xb4>
        23ed24:	e2800060 	add	r0, r0, #96	; 0x60
        23ed28:	eb629553 	bl	1ae427c <$GetExceptionErr(Exception *)>
        23ed2c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        23ed30:	e3a09000 	mov	r9, #0	; 0x0
        23ed34:	e5970000 	ldr	r0, [r7]
        23ed38:	e5900000 	ldr	r0, [r0]
        23ed3c:	eb660d06 	bl	1bc215c <$BinaryData(long)>
        23ed40:	e080100a 	add	r1, r0, sl
        23ed44:	e1a02005 	mov	r2, r5
        23ed48:	e1a00006 	mov	r0, r6
        23ed4c:	eb668080 	bl	1bdef54 <$BlockMove>
        23ed50:	e594000c 	ldr	r0, [r4, #12]	; fField12
        23ed54:	e0800009 	add	r0, r0, r9
        23ed58:	e5a4000c 	str	r0, [r4, #12]!	; fField12
        23ed5c:	e3a00000 	mov	r0, #0	; 0x0
        23ed60:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXBinaryStream::Read(void *, long)
 * Address: 0023f168
 */
TXBinaryStream::Read(void *, long) {
    /*
        23f168:	e1a0c00d 	mov	ip, sp
        23f16c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        23f170:	e24cb004 	sub	fp, ip, #4	; 0x4
        23f174:	e1a04000 	mov	r4, r0
        23f178:	e1a06001 	mov	r6, r1
        23f17c:	e1a05002 	mov	r5, r2
        23f180:	e5900008 	ldr	r0, [r0, #8]
        23f184:	e5900000 	ldr	r0, [r0]
        23f188:	eb660bf3 	bl	1bc215c <$BinaryData(long)>
        23f18c:	e1a01004 	mov	r1, r4
        23f190:	e1a04000 	mov	r4, r0
        23f194:	e1a00001 	mov	r0, r1
        23f198:	e5911000 	ldr	r1, [r1]
        23f19c:	e1a0e00f 	mov	lr, pc
        23f1a0:	e281f004 	add	pc, r1, #4	; 0x4
        23f1a4:	e0840000 	add	r0, r4, r0
        23f1a8:	e1a02005 	mov	r2, r5
        23f1ac:	e1a01006 	mov	r1, r6
        23f1b0:	eb667f67 	bl	1bdef54 <$BlockMove>
        23f1b4:	e3a00000 	mov	r0, #0	; 0x0
        23f1b8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

