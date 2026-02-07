#include "include/TPCMCIA20Parser.h"

/**
 * Symbol: TPCMCIA20Parser::__ct(void)
 * Address: 0004bd40
 */
TPCMCIA20Parser::TPCMCIA20Parser(void) {
    /*
         4bd40:	e1a0c00d 	mov	ip, sp
         4bd44:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         4bd48:	e24cb004 	sub	fp, ip, #4	; 0x4
         4bd4c:	e1b04000 	movs	r4, r0
         4bd50:	1a000003 	bne	4bd64 <TPCMCIA20Parser::__ct(void)+0x24>
         4bd54:	e3a0002c 	mov	r0, #44	; 0x2c
         4bd58:	eb6e0a76 	bl	1bce738 <$__nw(unsigned int)>
         4bd5c:	e1b04000 	movs	r4, r0
         4bd60:	0a000007 	beq	4bd84 <TPCMCIA20Parser::__ct(void)+0x44>
         4bd64:	e284000c 	add	r0, r4, #12	; 0xc
         4bd68:	eb6e0647 	bl	1bcd68c <TCardLongLink::$__ct(void)>
         4bd6c:	e3a00000 	mov	r0, #0	; 0x0
         4bd70:	e5840014 	str	r0, [r4, #20]	; fField20
         4bd74:	e5840004 	str	r0, [r4, #4]	; fField4
         4bd78:	e5840008 	str	r0, [r4, #8]	; fField8
         4bd7c:	e1a00004 	mov	r0, r4
         4bd80:	eb6bb3a1 	bl	1b38c0c <TPCMCIA20Parser::$Reset(void)>
         4bd84:	e1a00004 	mov	r0, r4
         4bd88:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TPCMCIA20Parser::__dt(void)
 * Address: 0004bd8c
 */
TPCMCIA20Parser::~TPCMCIA20Parser(void) {
    /*
         4bd8c:	e1a0c00d 	mov	ip, sp
         4bd90:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         4bd94:	e24cb004 	sub	fp, ip, #4	; 0x4
         4bd98:	e1a04000 	mov	r4, r0
         4bd9c:	e1a05001 	mov	r5, r1
         4bda0:	e5900014 	ldr	r0, [r0, #20]	; fField20
         4bda4:	e3300000 	teq	r0, #0	; 0x0
         4bda8:	13a01001 	movne	r1, #1	; 0x1
         4bdac:	1b6e0a5a 	blne	1bce71c <TCardConfiguration::$__dt(void)>
         4bdb0:	e284000c 	add	r0, r4, #12	; 0xc
         4bdb4:	e3a01000 	mov	r1, #0	; 0x0
         4bdb8:	eb6e0a52 	bl	1bce708 <TCardLongLink::$__dt(void)>
         4bdbc:	e3150001 	tst	r5, #1	; 0x1
         4bdc0:	11a00004 	movne	r0, r4
         4bdc4:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         4bdc8:	1a6e0644 	bne	1bcd6e0 <$__dl(void *)>
         4bdcc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TPCMCIA20Parser::GetPowerValue(unsigned char *, unsigned char, void *, unsigned long *)
 * Address: 0004bdd0
 */
TPCMCIA20Parser::GetPowerValue(unsigned char *, unsigned char, void *, unsigned long *) {
    /*
         4bdd0:	e1a0c00d 	mov	ip, sp
         4bdd4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         4bdd8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         4bddc:	e24cb014 	sub	fp, ip, #20	; 0x14
         4bde0:	e59b000c 	ldr	r0, [fp, #12]
         4bde4:	e20070ff 	and	r7, r0, #255	; 0xff
         4bde8:	e28b1008 	add	r1, fp, #8	; 0x8
         4bdec:	e3a02001 	mov	r2, #1	; 0x1
         4bdf0:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         4bdf4:	eb6baf65 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4bdf8:	e5d01000 	ldrb	r1, [r0]
         4bdfc:	e1a05001 	mov	r5, r1
         4be00:	e3a03003 	mov	r3, #3	; 0x3
         4be04:	e3a02002 	mov	r2, #2	; 0x2
         4be08:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         4be0c:	eb6bab57 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4be10:	e1a04000 	mov	r4, r0
         4be14:	e1a01005 	mov	r1, r5
         4be18:	e3a03004 	mov	r3, #4	; 0x4
         4be1c:	e3a02006 	mov	r2, #6	; 0x6
         4be20:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         4be24:	eb6bab51 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4be28:	e59f1038 	ldr	r1, [pc, #38]	; 4be68 <TPCMCIA20Parser::GetPowerValue(unsigned char *, unsigned char, void *, unsigned long *)+0x98>
         4be2c:	e7916104 	ldr	r6, [r1, r4, lsl #2]
         4be30:	e59f1034 	ldr	r1, [pc, #34]	; 4be6c <TPCMCIA20Parser::GetPowerValue(unsigned char *, unsigned char, void *, unsigned long *)+0x9c>
         4be34:	e7d10000 	ldrb	r0, [r1, r0]
         4be38:	e0040096 	mul	r4, r6, r0
         4be3c:	e3a00000 	mov	r0, #0	; 0x0
         4be40:	e59b1014 	ldr	r1, [fp, #20]	; fField20
         4be44:	e5810000 	str	r0, [r1]
         4be48:	e1a01005 	mov	r1, r5
         4be4c:	e3a03001 	mov	r3, #1	; 0x1
         4be50:	e3a02007 	mov	r2, #7	; 0x7
         4be54:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         4be58:	eb6bab44 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4be5c:	e0866106 	add	r6, r6, r6, lsl #2
         4be60:	e1a06086 	mov	r6, r6, lsl #1
         4be64:	ea00001a 	b	4bed4 <TPCMCIA20Parser::GetPowerValue(unsigned char *, unsigned char, void *, unsigned long *)+0x104>
         4be68:	00366e68 	eoreqs	r6, r6, r8, ror #28
         4be6c:	00366e58 	eoreqs	r6, r6, r8, asr lr
         4be70:	e28b1008 	add	r1, fp, #8	; 0x8
         4be74:	e1a00002 	mov	r0, r2
         4be78:	e3a02001 	mov	r2, #1	; 0x1
         4be7c:	eb6baf43 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4be80:	e5d01000 	ldrb	r1, [r0]
         4be84:	e1a08001 	mov	r8, r1
         4be88:	e3a03007 	mov	r3, #7	; 0x7
         4be8c:	e3a02006 	mov	r2, #6	; 0x6
         4be90:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         4be94:	eb6bab35 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4be98:	e1a05000 	mov	r5, r0
         4be9c:	e1a01006 	mov	r1, r6
         4bea0:	e3a00064 	mov	r0, #100	; 0x64
         4bea4:	eb6d9aa7 	bl	1bb2948 <$__rt_udiv>
         4bea8:	e1a06000 	mov	r6, r0
         4beac:	e3550064 	cmp	r5, #100	; 0x64
         4beb0:	b0244596 	mlalt	r4, r6, r5, r4
         4beb4:	e355007d 	cmp	r5, #125	; 0x7d
         4beb8:	a59b0014 	ldrge	r0, [fp, #20]	; fField20
         4bebc:	a5805000 	strge	r5, [r0]
         4bec0:	e1a01008 	mov	r1, r8
         4bec4:	e3a03001 	mov	r3, #1	; 0x1
         4bec8:	e3a02007 	mov	r2, #7	; 0x7
         4becc:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         4bed0:	eb6bab26 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4bed4:	e59b1008 	ldr	r1, [fp, #8]	; fField8
         4bed8:	e59b2004 	ldr	r2, [fp, #4]	; fField4
         4bedc:	e5923018 	ldr	r3, [r2, #24]	; fField24
         4bee0:	e1530001 	cmp	r3, r1
         4bee4:	9a000001 	bls	4bef0 <TPCMCIA20Parser::GetPowerValue(unsigned char *, unsigned char, void *, unsigned long *)+0x120>
         4bee8:	e3300000 	teq	r0, #0	; 0x0
         4beec:	1affffdf 	bne	4be70 <TPCMCIA20Parser::GetPowerValue(unsigned char *, unsigned char, void *, unsigned long *)+0xa0>
         4bef0:	e3370000 	teq	r7, #0	; 0x0
         4bef4:	00844104 	addeq	r4, r4, r4, lsl #2
         4bef8:	01a04084 	moveq	r4, r4, lsl #1
         4befc:	e59b0010 	ldr	r0, [fp, #16]	; fField16
         4bf00:	e5804000 	str	r4, [r0]
         4bf04:	e59b0008 	ldr	r0, [fp, #8]	; fField8
         4bf08:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TPCMCIA20Parser::ChecksumOK(unsigned long, unsigned char *, unsigned long, unsigned long)
 * Address: 0004bf0c
 */
TPCMCIA20Parser::ChecksumOK(unsigned long, unsigned char *, unsigned long, unsigned long) {
    /*
         4bf0c:	e1a0c00d 	mov	ip, sp
         4bf10:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         4bf14:	e24cb004 	sub	fp, ip, #4	; 0x4
         4bf18:	e1a06001 	mov	r6, r1
         4bf1c:	e1a04002 	mov	r4, r2
         4bf20:	e1a05003 	mov	r5, r3
         4bf24:	e3a00000 	mov	r0, #0	; 0x0
         4bf28:	e59b8004 	ldr	r8, [fp, #4]	; fField4
         4bf2c:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         4bf30:	e52d006c 	str	r0, [sp, -#108]!
         4bf34:	e28d0008 	add	r0, sp, #8	; 0x8
         4bf38:	eb6d9a8d 	bl	1bb2974 <$setjmp>
         4bf3c:	e3300000 	teq	r0, #0	; 0x0
         4bf40:	1a000013 	bne	4bf94 <TPCMCIA20Parser::ChecksumOK(unsigned long, unsigned char *, unsigned long, unsigned long)+0x88>
         4bf44:	e1a0000d 	mov	r0, sp
         4bf48:	eb6e504b 	bl	1be007c <$AddExceptionHandler>
         4bf4c:	e3a07000 	mov	r7, #0	; 0x0
         4bf50:	e3550000 	cmp	r5, #0	; 0x0
         4bf54:	9a000028 	bls	4bffc <TPCMCIA20Parser::ChecksumOK(unsigned long, unsigned char *, unsigned long, unsigned long)+0xf0>
         4bf58:	e3380002 	teq	r8, #2	; 0x2
         4bf5c:	159d106c 	ldrne	r1, [sp, #108]
         4bf60:	15d40000 	ldrneb	r0, [r4]
         4bf64:	10810000 	addne	r0, r1, r0
         4bf68:	1a000003 	bne	4bf7c <TPCMCIA20Parser::ChecksumOK(unsigned long, unsigned char *, unsigned long, unsigned long)+0x70>
         4bf6c:	e2240003 	eor	r0, r4, #3	; 0x3
         4bf70:	eb6e0e17 	bl	1bcf7d4 <$CardAttrMemReadByte(void *)>
         4bf74:	e59d106c 	ldr	r1, [sp, #108]
         4bf78:	e0800001 	add	r0, r0, r1
         4bf7c:	e0844008 	add	r4, r4, r8
         4bf80:	e2877001 	add	r7, r7, #1	; 0x1
         4bf84:	e1570005 	cmp	r7, r5
         4bf88:	e58d006c 	str	r0, [sp, #108]
         4bf8c:	3afffff1 	bcc	4bf58 <TPCMCIA20Parser::ChecksumOK(unsigned long, unsigned char *, unsigned long, unsigned long)+0x4c>
         4bf90:	ea000019 	b	4bffc <TPCMCIA20Parser::ChecksumOK(unsigned long, unsigned char *, unsigned long, unsigned long)+0xf0>
         4bf94:	e59d0060 	ldr	r0, [sp, #96]
         4bf98:	e59f1048 	ldr	r1, [pc, #48]	; 4bfe8 <TPCMCIA20Parser::ChecksumOK(unsigned long, unsigned char *, unsigned long, unsigned long)+0xdc>
         4bf9c:	e5911000 	ldr	r1, [r1]
         4bfa0:	eb6e5c7b 	bl	1be3194 <$Subexception>
         4bfa4:	e1e04006 	mvn	r4, r6
         4bfa8:	e3300000 	teq	r0, #0	; 0x0
         4bfac:	1a00000b 	bne	4bfe0 <TPCMCIA20Parser::ChecksumOK(unsigned long, unsigned char *, unsigned long, unsigned long)+0xd4>
         4bfb0:	e59d0060 	ldr	r0, [sp, #96]
         4bfb4:	e59f1030 	ldr	r1, [pc, #30]	; 4bfec <TPCMCIA20Parser::ChecksumOK(unsigned long, unsigned char *, unsigned long, unsigned long)+0xe0>	; fField30
         4bfb8:	e5911000 	ldr	r1, [r1]
         4bfbc:	eb6e5c74 	bl	1be3194 <$Subexception>
         4bfc0:	e3300000 	teq	r0, #0	; 0x0
         4bfc4:	1a000005 	bne	4bfe0 <TPCMCIA20Parser::ChecksumOK(unsigned long, unsigned char *, unsigned long, unsigned long)+0xd4>
         4bfc8:	e59d0060 	ldr	r0, [sp, #96]
         4bfcc:	e59f101c 	ldr	r1, [pc, #1c]	; 4bff0 <TPCMCIA20Parser::ChecksumOK(unsigned long, unsigned char *, unsigned long, unsigned long)+0xe4>
         4bfd0:	e5911000 	ldr	r1, [r1]
         4bfd4:	eb6e5c6e 	bl	1be3194 <$Subexception>
         4bfd8:	e3300000 	teq	r0, #0	; 0x0
         4bfdc:	0a000004 	beq	4bff4 <TPCMCIA20Parser::ChecksumOK(unsigned long, unsigned char *, unsigned long, unsigned long)+0xe8>
         4bfe0:	e58d406c 	str	r4, [sp, #108]
         4bfe4:	ea000004 	b	4bffc <TPCMCIA20Parser::ChecksumOK(unsigned long, unsigned char *, unsigned long, unsigned long)+0xf0>
         4bfe8:	003712c4 	eoreqs	r1, r7, r4, asr #5
         4bfec:	003712b8 	ldreqh	r1, [r7], -r8
         4bff0:	003712c8 	eoreqs	r1, r7, r8, asr #5
         4bff4:	e1a0000d 	mov	r0, sp
         4bff8:	eb6e5855 	bl	1be2154 <$NextHandler>
         4bffc:	e1a0000d 	mov	r0, sp
         4c000:	eb6e542c 	bl	1be10b8 <$ExitHandler>
         4c004:	e5bd006c 	ldr	r0, [sp, #108]!
         4c008:	e20000ff 	and	r0, r0, #255	; 0xff
         4c00c:	e1300006 	teq	r0, r6
         4c010:	13a00000 	movne	r0, #0	; 0x0
         4c014:	03a00001 	moveq	r0, #1	; 0x1
         4c018:	e20000ff 	and	r0, r0, #255	; 0xff
         4c01c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TPCMCIA20Parser::GetExtendedDeviceSpeed(unsigned char *&)
 * Address: 0004c020
 */
TPCMCIA20Parser::GetExtendedDeviceSpeed(unsigned char *&) {
    /*
         4c020:	e1a0c00d 	mov	ip, sp
         4c024:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         4c028:	e24cb004 	sub	fp, ip, #4	; 0x4
         4c02c:	e1a04000 	mov	r4, r0
         4c030:	e1a05001 	mov	r5, r1
         4c034:	e3a02001 	mov	r2, #1	; 0x1
         4c038:	eb6baed4 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4c03c:	e5d01000 	ldrb	r1, [r0]
         4c040:	e1a06001 	mov	r6, r1
         4c044:	e1a00004 	mov	r0, r4
         4c048:	e3a03004 	mov	r3, #4	; 0x4
         4c04c:	e3a02006 	mov	r2, #6	; 0x6
         4c050:	eb6baac6 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4c054:	e1a07000 	mov	r7, r0
         4c058:	e1a01006 	mov	r1, r6
         4c05c:	e1a00004 	mov	r0, r4
         4c060:	e3a03003 	mov	r3, #3	; 0x3
         4c064:	e3a02002 	mov	r2, #2	; 0x2
         4c068:	eb6baac0 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4c06c:	e59f1018 	ldr	r1, [pc, #18]	; 4c08c <TPCMCIA20Parser::GetExtendedDeviceSpeed(unsigned char *&)+0x6c>
         4c070:	e7d12007 	ldrb	r2, [r1, r7]
         4c074:	e59f1014 	ldr	r1, [pc, #14]	; 4c090 <TPCMCIA20Parser::GetExtendedDeviceSpeed(unsigned char *&)+0x70>
         4c078:	e7911100 	ldr	r1, [r1, r0, lsl #2]
         4c07c:	e0000291 	mul	r0, r1, r2
         4c080:	eb6d9a31 	bl	1bb294c <$__rt_udiv10>
         4c084:	e1a07000 	mov	r7, r0
         4c088:	ea000006 	b	4c0a8 <TPCMCIA20Parser::GetExtendedDeviceSpeed(unsigned char *&)+0x88>
         4c08c:	0c100918 	ldceq	9, cr0, [r0], -#96
         4c090:	0c100928 	ldceq	9, cr0, [r0], -#160
         4c094:	e1a01005 	mov	r1, r5
         4c098:	e1a00004 	mov	r0, r4
         4c09c:	e3a02001 	mov	r2, #1	; 0x1
         4c0a0:	eb6baeba 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4c0a4:	e5d06000 	ldrb	r6, [r0]
         4c0a8:	e5950000 	ldr	r0, [r5]
         4c0ac:	e5941018 	ldr	r1, [r4, #24]	; fField24
         4c0b0:	e1510000 	cmp	r1, r0
         4c0b4:	9a000006 	bls	4c0d4 <TPCMCIA20Parser::GetExtendedDeviceSpeed(unsigned char *&)+0xb4>
         4c0b8:	e1a01006 	mov	r1, r6
         4c0bc:	e1a00004 	mov	r0, r4
         4c0c0:	e3a03001 	mov	r3, #1	; 0x1
         4c0c4:	e3a02007 	mov	r2, #7	; 0x7
         4c0c8:	eb6baaa8 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4c0cc:	e3300000 	teq	r0, #0	; 0x0
         4c0d0:	1affffef 	bne	4c094 <TPCMCIA20Parser::GetExtendedDeviceSpeed(unsigned char *&)+0x74>
         4c0d4:	e1a00007 	mov	r0, r7
         4c0d8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TPCMCIA20Parser::CisTpl_CE(unsigned char *)
 * Address: 0004c0dc
 */
TPCMCIA20Parser::CisTpl_CE(unsigned char *) {
    /*
         4c0dc:	e1a0c00d 	mov	ip, sp
         4c0e0:	e92ddff3 	stmdb	sp!, {r0, r1, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         4c0e4:	e24cb004 	sub	fp, ip, #4	; 0x4
         4c0e8:	e24b102c 	sub	r1, fp, #44	; 0x2c
         4c0ec:	e51b0030 	ldr	r0, [fp, -#48]
         4c0f0:	eb6bb2cf 	bl	1b38c34 <TPCMCIA20Parser::$StartTuple(unsigned char *&)>
         4c0f4:	e3a00000 	mov	r0, #0	; 0x0
         4c0f8:	eb6e0571 	bl	1bcd6c4 <TCardConfiguration::$__ct(void)>
         4c0fc:	e1b04000 	movs	r4, r0
         4c100:	e3a060e9 	mov	r6, #233	; 0xe9
         4c104:	e2466b0a 	sub	r6, r6, #10240	; 0x2800
         4c108:	051b0030 	ldreq	r0, [fp, -#48]
         4c10c:	05806000 	streq	r6, [r0]
         4c110:	03a00000 	moveq	r0, #0	; 0x0
         4c114:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         4c118:	e24dd004 	sub	sp, sp, #4	; 0x4
         4c11c:	e24b102c 	sub	r1, fp, #44	; 0x2c
         4c120:	e3a02001 	mov	r2, #1	; 0x1
         4c124:	e51b0030 	ldr	r0, [fp, -#48]
         4c128:	eb6bae98 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4c12c:	e5d01000 	ldrb	r1, [r0]
         4c130:	e1a05001 	mov	r5, r1
         4c134:	e3a03001 	mov	r3, #1	; 0x1
         4c138:	e3a02007 	mov	r2, #7	; 0x7
         4c13c:	e51b0030 	ldr	r0, [fp, -#48]
         4c140:	eb6baa8a 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4c144:	e1a07000 	mov	r7, r0
         4c148:	e1a01005 	mov	r1, r5
         4c14c:	e3a03001 	mov	r3, #1	; 0x1
         4c150:	e3a02006 	mov	r2, #6	; 0x6
         4c154:	e51b0030 	ldr	r0, [fp, -#48]
         4c158:	eb6baa84 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4c15c:	e58d0000 	str	r0, [sp]
         4c160:	e51b0030 	ldr	r0, [fp, -#48]
         4c164:	e5900014 	ldr	r0, [r0, #20]	; fField20
         4c168:	e3300000 	teq	r0, #0	; 0x0
         4c16c:	1a000008 	bne	4c194 <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0xb8>
         4c170:	e3a00000 	mov	r0, #0	; 0x0
         4c174:	eb6e0552 	bl	1bcd6c4 <TCardConfiguration::$__ct(void)>
         4c178:	e51b1030 	ldr	r1, [fp, -#48]
         4c17c:	e5a10014 	str	r0, [r1, #20]!	; fField20
         4c180:	e1b01000 	movs	r1, r0
         4c184:	e51b0030 	ldr	r0, [fp, -#48]
         4c188:	05806000 	streq	r6, [r0]
         4c18c:	03a00000 	moveq	r0, #0	; 0x0
         4c190:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         4c194:	e59d0000 	ldr	r0, [sp]
         4c198:	e3300000 	teq	r0, #0	; 0x0
         4c19c:	e51b0030 	ldr	r0, [fp, -#48]
         4c1a0:	0a000002 	beq	4c1b0 <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0xd4>
         4c1a4:	e5900014 	ldr	r0, [r0, #20]	; fField20
         4c1a8:	eb6e1199 	bl	1bd0814 <TCardConfiguration::$Clear(void)>
         4c1ac:	ea000002 	b	4c1bc <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0xe0>
         4c1b0:	e5b01014 	ldr	r1, [r0, #20]!	; fField20
         4c1b4:	e1a00004 	mov	r0, r4
         4c1b8:	eb6e0124 	bl	1bcc650 <TCardConfiguration::$__as(TCardConfiguration const &)>
         4c1bc:	e1a01005 	mov	r1, r5
         4c1c0:	e3a03006 	mov	r3, #6	; 0x6
         4c1c4:	e3a02005 	mov	r2, #5	; 0x5
         4c1c8:	e51b0030 	ldr	r0, [fp, -#48]
         4c1cc:	eb6baa67 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4c1d0:	e5c40155 	strb	r0, [r4, #341]
         4c1d4:	e51b0030 	ldr	r0, [fp, -#48]
         4c1d8:	e5900004 	ldr	r0, [r0, #4]	; fField4
         4c1dc:	e1a01004 	mov	r1, r4
         4c1e0:	eb6e0962 	bl	1bce770 <TCardPCMCIA::$AddCardConfiguration(TCardConfiguration *)>
         4c1e4:	e51b0030 	ldr	r0, [fp, -#48]
         4c1e8:	e5900004 	ldr	r0, [r0, #4]	; fField4
         4c1ec:	e5f01028 	ldrb	r1, [r0, #40]!	; fField40
         4c1f0:	e2811001 	add	r1, r1, #1	; 0x1
         4c1f4:	e5c01000 	strb	r1, [r0]
         4c1f8:	e3370000 	teq	r7, #0	; 0x0
         4c1fc:	0a000010 	beq	4c244 <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x168>
         4c200:	e24b102c 	sub	r1, fp, #44	; 0x2c
         4c204:	e3a02001 	mov	r2, #1	; 0x1
         4c208:	e51b0030 	ldr	r0, [fp, -#48]
         4c20c:	eb6bae5f 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4c210:	e5d01000 	ldrb	r1, [r0]
         4c214:	e1a05001 	mov	r5, r1
         4c218:	e3a03004 	mov	r3, #4	; 0x4
         4c21c:	e3a02003 	mov	r2, #3	; 0x3
         4c220:	e51b0030 	ldr	r0, [fp, -#48]
         4c224:	eb6baa51 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4c228:	e5c40156 	strb	r0, [r4, #342]
         4c22c:	e1a01005 	mov	r1, r5
         4c230:	e3a03004 	mov	r3, #4	; 0x4
         4c234:	e3a02007 	mov	r2, #7	; 0x7
         4c238:	e51b0030 	ldr	r0, [fp, -#48]
         4c23c:	eb6baa4b 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4c240:	e5c40157 	strb	r0, [r4, #343]
         4c244:	e24b102c 	sub	r1, fp, #44	; 0x2c
         4c248:	e3a02001 	mov	r2, #1	; 0x1
         4c24c:	e51b0030 	ldr	r0, [fp, -#48]
         4c250:	eb6bae4e 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4c254:	e5d05000 	ldrb	r5, [r0]
         4c258:	e5d40150 	ldrb	r0, [r4, #336]
         4c25c:	e1800005 	orr	r0, r0, r5
         4c260:	e5c40150 	strb	r0, [r4, #336]
         4c264:	e24dd00c 	sub	sp, sp, #12	; 0xc
         4c268:	e1a01005 	mov	r1, r5
         4c26c:	e3a03002 	mov	r3, #2	; 0x2
         4c270:	e3a02001 	mov	r2, #1	; 0x1
         4c274:	e51b0030 	ldr	r0, [fp, -#48]
         4c278:	eb6baa3c 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4c27c:	e1a06000 	mov	r6, r0
         4c280:	e1a01005 	mov	r1, r5
         4c284:	e3a03001 	mov	r3, #1	; 0x1
         4c288:	e3a02002 	mov	r2, #2	; 0x2
         4c28c:	e51b0030 	ldr	r0, [fp, -#48]
         4c290:	eb6baa36 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4c294:	e1a08000 	mov	r8, r0
         4c298:	e1a01005 	mov	r1, r5
         4c29c:	e3a03001 	mov	r3, #1	; 0x1
         4c2a0:	e3a02003 	mov	r2, #3	; 0x3
         4c2a4:	e51b0030 	ldr	r0, [fp, -#48]
         4c2a8:	eb6baa30 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4c2ac:	e1a07000 	mov	r7, r0
         4c2b0:	e1a01005 	mov	r1, r5
         4c2b4:	e3a03001 	mov	r3, #1	; 0x1
         4c2b8:	e3a02004 	mov	r2, #4	; 0x4
         4c2bc:	e51b0030 	ldr	r0, [fp, -#48]
         4c2c0:	eb6baa2a 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4c2c4:	e1a01005 	mov	r1, r5
         4c2c8:	e58d0008 	str	r0, [sp, #8]	; fField8
         4c2cc:	e3a03002 	mov	r3, #2	; 0x2
         4c2d0:	e3a02006 	mov	r2, #6	; 0x6
         4c2d4:	e51b0030 	ldr	r0, [fp, -#48]
         4c2d8:	eb6baa24 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4c2dc:	e1a01005 	mov	r1, r5
         4c2e0:	e58d0004 	str	r0, [sp, #4]	; fField4
         4c2e4:	e3a03001 	mov	r3, #1	; 0x1
         4c2e8:	e3a02007 	mov	r2, #7	; 0x7
         4c2ec:	e51b0030 	ldr	r0, [fp, -#48]
         4c2f0:	eb6baa1e 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4c2f4:	e3560000 	cmp	r6, #0	; 0x0
         4c2f8:	e58d0000 	str	r0, [sp]
         4c2fc:	da00001c 	ble	4c374 <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x298>
         4c300:	e24b102c 	sub	r1, fp, #44	; 0x2c
         4c304:	e3a02001 	mov	r2, #1	; 0x1
         4c308:	e51b0030 	ldr	r0, [fp, -#48]
         4c30c:	eb6bae1f 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4c310:	e5d09000 	ldrb	r9, [r0]
         4c314:	e3a05000 	mov	r5, #0	; 0x0
         4c318:	e1a02005 	mov	r2, r5
         4c31c:	e1a01009 	mov	r1, r9
         4c320:	e3a03001 	mov	r3, #1	; 0x1
         4c324:	e51b0030 	ldr	r0, [fp, -#48]
         4c328:	eb6baa10 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4c32c:	e3300000 	teq	r0, #0	; 0x0
         4c330:	0a00000b 	beq	4c364 <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x288>
         4c334:	e0840105 	add	r0, r4, r5, lsl #2
         4c338:	e2803054 	add	r3, r0, #84	; 0x54
         4c33c:	e92d0008 	stmdb	sp!, {r3}
         4c340:	e1a03000 	mov	r3, r0
         4c344:	e3550003 	cmp	r5, #3	; 0x3
         4c348:	a3a02000 	movge	r2, #0	; 0x0
         4c34c:	b3a02001 	movlt	r2, #1	; 0x1
         4c350:	e24b1030 	sub	r1, fp, #48	; 0x30
         4c354:	e8910003 	ldmia	r1, {r0, r1}
         4c358:	eb6baa07 	bl	1b36b7c <TPCMCIA20Parser::$GetPowerValue(unsigned char *, unsigned char, void *, unsigned long *)>
         4c35c:	e28dd004 	add	sp, sp, #4	; 0x4
         4c360:	e50b002c 	str	r0, [fp, -#44]
         4c364:	e2850001 	add	r0, r5, #1	; 0x1
         4c368:	e20050ff 	and	r5, r0, #255	; 0xff
         4c36c:	e3550007 	cmp	r5, #7	; 0x7
         4c370:	baffffe8 	blt	4c318 <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x23c>
         4c374:	e3560001 	cmp	r6, #1	; 0x1
         4c378:	da000020 	ble	4c400 <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x324>
         4c37c:	e24b102c 	sub	r1, fp, #44	; 0x2c
         4c380:	e3a02001 	mov	r2, #1	; 0x1
         4c384:	e51b0030 	ldr	r0, [fp, -#48]
         4c388:	eb6bae00 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4c38c:	e5d09000 	ldrb	r9, [r0]
         4c390:	e3a05000 	mov	r5, #0	; 0x0
         4c394:	e1a02005 	mov	r2, r5
         4c398:	e1a01009 	mov	r1, r9
         4c39c:	e3a03001 	mov	r3, #1	; 0x1
         4c3a0:	e51b0030 	ldr	r0, [fp, -#48]
         4c3a4:	eb6ba9f1 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4c3a8:	e3300000 	teq	r0, #0	; 0x0
         4c3ac:	0a00000b 	beq	4c3e0 <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x304>
         4c3b0:	e0840105 	add	r0, r4, r5, lsl #2
         4c3b4:	e2803070 	add	r3, r0, #112	; 0x70
         4c3b8:	e92d0008 	stmdb	sp!, {r3}
         4c3bc:	e280301c 	add	r3, r0, #28	; 0x1c
         4c3c0:	e3550003 	cmp	r5, #3	; 0x3
         4c3c4:	a3a02000 	movge	r2, #0	; 0x0
         4c3c8:	b3a02001 	movlt	r2, #1	; 0x1
         4c3cc:	e24b1030 	sub	r1, fp, #48	; 0x30
         4c3d0:	e8910003 	ldmia	r1, {r0, r1}
         4c3d4:	eb6ba9e8 	bl	1b36b7c <TPCMCIA20Parser::$GetPowerValue(unsigned char *, unsigned char, void *, unsigned long *)>
         4c3d8:	e28dd004 	add	sp, sp, #4	; 0x4
         4c3dc:	e50b002c 	str	r0, [fp, -#44]
         4c3e0:	e3360002 	teq	r6, #2	; 0x2
         4c3e4:	00840105 	addeq	r0, r4, r5, lsl #2
         4c3e8:	0590101c 	ldreq	r1, [r0, #28]	; fField28
         4c3ec:	05a01038 	streq	r1, [r0, #56]!	; fField56
         4c3f0:	e2850001 	add	r0, r5, #1	; 0x1
         4c3f4:	e20050ff 	and	r5, r0, #255	; 0xff
         4c3f8:	e3550007 	cmp	r5, #7	; 0x7
         4c3fc:	baffffe4 	blt	4c394 <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x2b8>
         4c400:	e3560002 	cmp	r6, #2	; 0x2
         4c404:	da00001c 	ble	4c47c <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x3a0>
         4c408:	e24b102c 	sub	r1, fp, #44	; 0x2c
         4c40c:	e3a02001 	mov	r2, #1	; 0x1
         4c410:	e51b0030 	ldr	r0, [fp, -#48]
         4c414:	eb6baddd 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4c418:	e5d06000 	ldrb	r6, [r0]
         4c41c:	e3a05000 	mov	r5, #0	; 0x0
         4c420:	e1a02005 	mov	r2, r5
         4c424:	e1a01006 	mov	r1, r6
         4c428:	e3a03001 	mov	r3, #1	; 0x1
         4c42c:	e51b0030 	ldr	r0, [fp, -#48]
         4c430:	eb6ba9ce 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4c434:	e3300000 	teq	r0, #0	; 0x0
         4c438:	0a00000b 	beq	4c46c <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x390>
         4c43c:	e0840105 	add	r0, r4, r5, lsl #2
         4c440:	e280308c 	add	r3, r0, #140	; 0x8c
         4c444:	e92d0008 	stmdb	sp!, {r3}
         4c448:	e2803038 	add	r3, r0, #56	; 0x38
         4c44c:	e3550003 	cmp	r5, #3	; 0x3
         4c450:	a3a02000 	movge	r2, #0	; 0x0
         4c454:	b3a02001 	movlt	r2, #1	; 0x1
         4c458:	e24b1030 	sub	r1, fp, #48	; 0x30
         4c45c:	e8910003 	ldmia	r1, {r0, r1}
         4c460:	eb6ba9c5 	bl	1b36b7c <TPCMCIA20Parser::$GetPowerValue(unsigned char *, unsigned char, void *, unsigned long *)>
         4c464:	e28dd004 	add	sp, sp, #4	; 0x4
         4c468:	e50b002c 	str	r0, [fp, -#44]
         4c46c:	e2850001 	add	r0, r5, #1	; 0x1
         4c470:	e20050ff 	and	r5, r0, #255	; 0xff
         4c474:	e3550007 	cmp	r5, #7	; 0x7
         4c478:	baffffe8 	blt	4c420 <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x344>
         4c47c:	e24dd004 	sub	sp, sp, #4	; 0x4
         4c480:	e3380000 	teq	r8, #0	; 0x0
         4c484:	0a000038 	beq	4c56c <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x490>
         4c488:	e24b102c 	sub	r1, fp, #44	; 0x2c
         4c48c:	e3a02001 	mov	r2, #1	; 0x1
         4c490:	e51b0030 	ldr	r0, [fp, -#48]
         4c494:	eb6badbd 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4c498:	e5d01000 	ldrb	r1, [r0]
         4c49c:	e1a08001 	mov	r8, r1
         4c4a0:	e3a03002 	mov	r3, #2	; 0x2
         4c4a4:	e3a02001 	mov	r2, #1	; 0x1
         4c4a8:	e51b0030 	ldr	r0, [fp, -#48]
         4c4ac:	eb6ba9af 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4c4b0:	e1a06000 	mov	r6, r0
         4c4b4:	e1a01008 	mov	r1, r8
         4c4b8:	e3a03003 	mov	r3, #3	; 0x3
         4c4bc:	e3a02004 	mov	r2, #4	; 0x4
         4c4c0:	e51b0030 	ldr	r0, [fp, -#48]
         4c4c4:	eb6ba9a9 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4c4c8:	e1a05000 	mov	r5, r0
         4c4cc:	e1a01008 	mov	r1, r8
         4c4d0:	e3a03003 	mov	r3, #3	; 0x3
         4c4d4:	e3a02007 	mov	r2, #7	; 0x7
         4c4d8:	e51b0030 	ldr	r0, [fp, -#48]
         4c4dc:	eb6ba9a3 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4c4e0:	e1a08000 	mov	r8, r0
         4c4e4:	e3560003 	cmp	r6, #3	; 0x3
         4c4e8:	a3a00000 	movge	r0, #0	; 0x0
         4c4ec:	aa00000a 	bge	4c51c <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x440>
         4c4f0:	e24b102c 	sub	r1, fp, #44	; 0x2c
         4c4f4:	e51b0030 	ldr	r0, [fp, -#48]
         4c4f8:	eb6ba99d 	bl	1b36b74 <TPCMCIA20Parser::$GetExtendedDeviceSpeed(unsigned char *&)>
         4c4fc:	e1a09000 	mov	r9, r0
         4c500:	e1a02006 	mov	r2, r6
         4c504:	e3a0100a 	mov	r1, #10	; 0xa
         4c508:	e51b0030 	ldr	r0, [fp, -#48]
         4c50c:	eb6badb3 	bl	1b37be0 <TPCMCIA20Parser::$pow(unsigned long, unsigned long)>
         4c510:	e1a01000 	mov	r1, r0
         4c514:	e1a00009 	mov	r0, r9
         4c518:	e0000091 	mul	r0, r1, r0
         4c51c:	e3550007 	cmp	r5, #7	; 0x7
         4c520:	e5840148 	str	r0, [r4, #328]
         4c524:	a3a00000 	movge	r0, #0	; 0x0
         4c528:	aa00000a 	bge	4c558 <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x47c>
         4c52c:	e24b102c 	sub	r1, fp, #44	; 0x2c
         4c530:	e51b0030 	ldr	r0, [fp, -#48]
         4c534:	eb6ba98e 	bl	1b36b74 <TPCMCIA20Parser::$GetExtendedDeviceSpeed(unsigned char *&)>
         4c538:	e1a06000 	mov	r6, r0
         4c53c:	e1a02005 	mov	r2, r5
         4c540:	e3a0100a 	mov	r1, #10	; 0xa
         4c544:	e51b0030 	ldr	r0, [fp, -#48]
         4c548:	eb6bada4 	bl	1b37be0 <TPCMCIA20Parser::$pow(unsigned long, unsigned long)>
         4c54c:	e1a01000 	mov	r1, r0
         4c550:	e1a00006 	mov	r0, r6
         4c554:	e0000091 	mul	r0, r1, r0
         4c558:	e3580007 	cmp	r8, #7	; 0x7
         4c55c:	e584014c 	str	r0, [r4, #332]
         4c560:	b24b102c 	sublt	r1, fp, #44	; 0x2c
         4c564:	b51b0030 	ldrlt	r0, [fp, -#48]
         4c568:	bb6ba981 	bllt	1b36b74 <TPCMCIA20Parser::$GetExtendedDeviceSpeed(unsigned char *&)>
         4c56c:	e3370000 	teq	r7, #0	; 0x0
         4c570:	0a00006b 	beq	4c724 <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x648>
         4c574:	e24b102c 	sub	r1, fp, #44	; 0x2c
         4c578:	e3a02001 	mov	r2, #1	; 0x1
         4c57c:	e51b0030 	ldr	r0, [fp, -#48]
         4c580:	eb6bad82 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4c584:	e5d01000 	ldrb	r1, [r0]
         4c588:	e1a05001 	mov	r5, r1
         4c58c:	e3a03005 	mov	r3, #5	; 0x5
         4c590:	e3a02004 	mov	r2, #4	; 0x4
         4c594:	e51b0030 	ldr	r0, [fp, -#48]
         4c598:	eb6ba974 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4c59c:	e5c40152 	strb	r0, [r4, #338]
         4c5a0:	e1a01005 	mov	r1, r5
         4c5a4:	e3a03001 	mov	r3, #1	; 0x1
         4c5a8:	e3a02005 	mov	r2, #5	; 0x5
         4c5ac:	e51b0030 	ldr	r0, [fp, -#48]
         4c5b0:	eb6ba96e 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4c5b4:	e5c40153 	strb	r0, [r4, #339]
         4c5b8:	e1a01005 	mov	r1, r5
         4c5bc:	e3a03001 	mov	r3, #1	; 0x1
         4c5c0:	e3a02006 	mov	r2, #6	; 0x6
         4c5c4:	e51b0030 	ldr	r0, [fp, -#48]
         4c5c8:	eb6ba968 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4c5cc:	e5c40154 	strb	r0, [r4, #340]
         4c5d0:	e1a01005 	mov	r1, r5
         4c5d4:	e3a03001 	mov	r3, #1	; 0x1
         4c5d8:	e3a02007 	mov	r2, #7	; 0x7
         4c5dc:	e51b0030 	ldr	r0, [fp, -#48]
         4c5e0:	eb6ba962 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4c5e4:	e3300000 	teq	r0, #0	; 0x0
         4c5e8:	0a00004d 	beq	4c724 <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x648>
         4c5ec:	e24b102c 	sub	r1, fp, #44	; 0x2c
         4c5f0:	e3a02001 	mov	r2, #1	; 0x1
         4c5f4:	e51b0030 	ldr	r0, [fp, -#48]
         4c5f8:	eb6bad64 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4c5fc:	e5d01000 	ldrb	r1, [r0]
         4c600:	e1a06001 	mov	r6, r1
         4c604:	e3a03004 	mov	r3, #4	; 0x4
         4c608:	e3a02003 	mov	r2, #3	; 0x3
         4c60c:	e51b0030 	ldr	r0, [fp, -#48]
         4c610:	eb6ba956 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4c614:	e2800001 	add	r0, r0, #1	; 0x1
         4c618:	e20050ff 	and	r5, r0, #255	; 0xff
         4c61c:	e51b0030 	ldr	r0, [fp, -#48]
         4c620:	e5d0102b 	ldrb	r1, [r0, #43]	; fField43
         4c624:	e1510005 	cmp	r1, r5
         4c628:	b5c0502b 	strltb	r5, [r0, #43]	; fField43
         4c62c:	e5c45151 	strb	r5, [r4, #337]
         4c630:	e1a01006 	mov	r1, r6
         4c634:	e3a03002 	mov	r3, #2	; 0x2
         4c638:	e3a02007 	mov	r2, #7	; 0x7
         4c63c:	e51b0030 	ldr	r0, [fp, -#48]
         4c640:	eb6ba94a 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4c644:	e1a07000 	mov	r7, r0
         4c648:	e1a01006 	mov	r1, r6
         4c64c:	e3a03002 	mov	r3, #2	; 0x2
         4c650:	e3a02005 	mov	r2, #5	; 0x5
         4c654:	e51b0030 	ldr	r0, [fp, -#48]
         4c658:	eb6ba944 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4c65c:	e1a06000 	mov	r6, r0
         4c660:	e3370003 	teq	r7, #3	; 0x3
         4c664:	03a07004 	moveq	r7, #4	; 0x4
         4c668:	e3360003 	teq	r6, #3	; 0x3
         4c66c:	03a06004 	moveq	r6, #4	; 0x4
         4c670:	e3a00000 	mov	r0, #0	; 0x0
         4c674:	e3550000 	cmp	r5, #0	; 0x0
         4c678:	e58d0000 	str	r0, [sp]
         4c67c:	da000028 	ble	4c724 <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x648>
         4c680:	e3a0a000 	mov	sl, #0	; 0x0
         4c684:	e3a09000 	mov	r9, #0	; 0x0
         4c688:	e3a08000 	mov	r8, #0	; 0x0
         4c68c:	e3560000 	cmp	r6, #0	; 0x0
         4c690:	da00000a 	ble	4c6c0 <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x5e4>
         4c694:	e24b102c 	sub	r1, fp, #44	; 0x2c
         4c698:	e3a02001 	mov	r2, #1	; 0x1
         4c69c:	e51b0030 	ldr	r0, [fp, -#48]
         4c6a0:	eb6bad3a 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4c6a4:	e5d00000 	ldrb	r0, [r0]
         4c6a8:	e1a01188 	mov	r1, r8, lsl #3
         4c6ac:	e08aa110 	add	sl, sl, r0, lsl r1
         4c6b0:	e2880001 	add	r0, r8, #1	; 0x1
         4c6b4:	e20080ff 	and	r8, r0, #255	; 0xff
         4c6b8:	e1580006 	cmp	r8, r6
         4c6bc:	bafffff4 	blt	4c694 <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x5b8>
         4c6c0:	e3a08000 	mov	r8, #0	; 0x0
         4c6c4:	e3570000 	cmp	r7, #0	; 0x0
         4c6c8:	da00000a 	ble	4c6f8 <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x61c>
         4c6cc:	e24b102c 	sub	r1, fp, #44	; 0x2c
         4c6d0:	e3a02001 	mov	r2, #1	; 0x1
         4c6d4:	e51b0030 	ldr	r0, [fp, -#48]
         4c6d8:	eb6bad2c 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4c6dc:	e5d01000 	ldrb	r1, [r0]
         4c6e0:	e1a00188 	mov	r0, r8, lsl #3
         4c6e4:	e0899011 	add	r9, r9, r1, lsl r0
         4c6e8:	e2880001 	add	r0, r8, #1	; 0x1
         4c6ec:	e20080ff 	and	r8, r0, #255	; 0xff
         4c6f0:	e1580007 	cmp	r8, r7
         4c6f4:	bafffff4 	blt	4c6cc <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x5f0>
         4c6f8:	e59d0000 	ldr	r0, [sp]
         4c6fc:	e0840100 	add	r0, r4, r0, lsl #2
         4c700:	e2891001 	add	r1, r9, #1	; 0x1
         4c704:	e5a0a0a8 	str	sl, [r0, #168]!
         4c708:	e5801020 	str	r1, [r0, #32]	; fField32
         4c70c:	e59d0000 	ldr	r0, [sp]
         4c710:	e2800001 	add	r0, r0, #1	; 0x1
         4c714:	e20000ff 	and	r0, r0, #255	; 0xff
         4c718:	e58d0000 	str	r0, [sp]
         4c71c:	e1500005 	cmp	r0, r5
         4c720:	baffffd6 	blt	4c680 <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x5a4>
         4c724:	e59d000c 	ldr	r0, [sp, #12]
         4c728:	e3300000 	teq	r0, #0	; 0x0
         4c72c:	0a000019 	beq	4c798 <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x6bc>
         4c730:	e24b102c 	sub	r1, fp, #44	; 0x2c
         4c734:	e3a02001 	mov	r2, #1	; 0x1
         4c738:	e51b0030 	ldr	r0, [fp, -#48]
         4c73c:	eb6bad13 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4c740:	e5d05000 	ldrb	r5, [r0]
         4c744:	e5c45158 	strb	r5, [r4, #344]
         4c748:	e1a01005 	mov	r1, r5
         4c74c:	e3a03001 	mov	r3, #1	; 0x1
         4c750:	e3a02007 	mov	r2, #7	; 0x7
         4c754:	e51b0030 	ldr	r0, [fp, -#48]
         4c758:	eb6ba904 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4c75c:	e5c40159 	strb	r0, [r4, #345]
         4c760:	e1a01005 	mov	r1, r5
         4c764:	e3a03001 	mov	r3, #1	; 0x1
         4c768:	e3a02004 	mov	r2, #4	; 0x4
         4c76c:	e51b0030 	ldr	r0, [fp, -#48]
         4c770:	eb6ba8fe 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4c774:	e3300000 	teq	r0, #0	; 0x0
         4c778:	0a000006 	beq	4c798 <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x6bc>
         4c77c:	e24b102c 	sub	r1, fp, #44	; 0x2c
         4c780:	e3a02001 	mov	r2, #1	; 0x1
         4c784:	e51b0030 	ldr	r0, [fp, -#48]
         4c788:	eb6bad00 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4c78c:	e51b002c 	ldr	r0, [fp, -#44]
         4c790:	e2800001 	add	r0, r0, #1	; 0x1
         4c794:	e50b002c 	str	r0, [fp, -#44]
         4c798:	e3a00001 	mov	r0, #1	; 0x1
         4c79c:	e59d1008 	ldr	r1, [sp, #8]	; fField8
         4c7a0:	e3310000 	teq	r1, #0	; 0x0
         4c7a4:	03a00000 	moveq	r0, #0	; 0x0
         4c7a8:	05c4015a 	streqb	r0, [r4, #346]
         4c7ac:	0a00006b 	beq	4c960 <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x884>
         4c7b0:	e3310001 	teq	r1, #1	; 0x1
         4c7b4:	0a000073 	beq	4c988 <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x8ac>
         4c7b8:	e3310002 	teq	r1, #2	; 0x2
         4c7bc:	0a00007a 	beq	4c9ac <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x8d0>
         4c7c0:	e3310003 	teq	r1, #3	; 0x3
         4c7c4:	1a000065 	bne	4c960 <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x884>
         4c7c8:	e24dd004 	sub	sp, sp, #4	; 0x4
         4c7cc:	e24b102c 	sub	r1, fp, #44	; 0x2c
         4c7d0:	e3a02001 	mov	r2, #1	; 0x1
         4c7d4:	e51b0030 	ldr	r0, [fp, -#48]
         4c7d8:	eb6bacec 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4c7dc:	e5d01000 	ldrb	r1, [r0]
         4c7e0:	e1a06001 	mov	r6, r1
         4c7e4:	e3a03002 	mov	r3, #2	; 0x2
         4c7e8:	e3a02004 	mov	r2, #4	; 0x4
         4c7ec:	e51b0030 	ldr	r0, [fp, -#48]
         4c7f0:	eb6ba8de 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4c7f4:	e1a0a000 	mov	sl, r0
         4c7f8:	e1a01006 	mov	r1, r6
         4c7fc:	e3a03002 	mov	r3, #2	; 0x2
         4c800:	e3a02006 	mov	r2, #6	; 0x6
         4c804:	e51b0030 	ldr	r0, [fp, -#48]
         4c808:	eb6ba8d8 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4c80c:	e1a05000 	mov	r5, r0
         4c810:	e1a01006 	mov	r1, r6
         4c814:	e3a03003 	mov	r3, #3	; 0x3
         4c818:	e3a02002 	mov	r2, #2	; 0x2
         4c81c:	e51b0030 	ldr	r0, [fp, -#48]
         4c820:	eb6ba8d2 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4c824:	e2800001 	add	r0, r0, #1	; 0x1
         4c828:	e20000ff 	and	r0, r0, #255	; 0xff
         4c82c:	e40d0004 	str	r0, [sp], -#4	; fField4
         4c830:	e5c4015a 	strb	r0, [r4, #346]
         4c834:	e1a01006 	mov	r1, r6
         4c838:	e3a03001 	mov	r3, #1	; 0x1
         4c83c:	e3a02007 	mov	r2, #7	; 0x7
         4c840:	e51b0030 	ldr	r0, [fp, -#48]
         4c844:	eb6ba8c9 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4c848:	e40d0004 	str	r0, [sp], -#4	; fField4
         4c84c:	e3a00000 	mov	r0, #0	; 0x0
         4c850:	e58d0000 	str	r0, [sp]
         4c854:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         4c858:	e3500000 	cmp	r0, #0	; 0x0
         4c85c:	da00003e 	ble	4c95c <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x880>
         4c860:	e3a08000 	mov	r8, #0	; 0x0
         4c864:	e3a07000 	mov	r7, #0	; 0x0
         4c868:	e3a06000 	mov	r6, #0	; 0x0
         4c86c:	e3a09000 	mov	r9, #0	; 0x0
         4c870:	e35a0000 	cmp	sl, #0	; 0x0
         4c874:	da00000a 	ble	4c8a4 <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x7c8>
         4c878:	e24b102c 	sub	r1, fp, #44	; 0x2c
         4c87c:	e3a02001 	mov	r2, #1	; 0x1
         4c880:	e51b0030 	ldr	r0, [fp, -#48]
         4c884:	eb6bacc1 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4c888:	e5d00000 	ldrb	r0, [r0]
         4c88c:	e1a01189 	mov	r1, r9, lsl #3
         4c890:	e0877110 	add	r7, r7, r0, lsl r1
         4c894:	e2890001 	add	r0, r9, #1	; 0x1
         4c898:	e20090ff 	and	r9, r0, #255	; 0xff
         4c89c:	e159000a 	cmp	r9, sl
         4c8a0:	bafffff4 	blt	4c878 <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x79c>
         4c8a4:	e3a09000 	mov	r9, #0	; 0x0
         4c8a8:	e3550000 	cmp	r5, #0	; 0x0
         4c8ac:	da00000a 	ble	4c8dc <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x800>
         4c8b0:	e24b102c 	sub	r1, fp, #44	; 0x2c
         4c8b4:	e3a02001 	mov	r2, #1	; 0x1
         4c8b8:	e51b0030 	ldr	r0, [fp, -#48]
         4c8bc:	eb6bacb3 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4c8c0:	e5d00000 	ldrb	r0, [r0]
         4c8c4:	e1a01189 	mov	r1, r9, lsl #3
         4c8c8:	e0888110 	add	r8, r8, r0, lsl r1
         4c8cc:	e2890001 	add	r0, r9, #1	; 0x1
         4c8d0:	e20090ff 	and	r9, r0, #255	; 0xff
         4c8d4:	e1590005 	cmp	r9, r5
         4c8d8:	bafffff4 	blt	4c8b0 <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x7d4>
         4c8dc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         4c8e0:	e3300000 	teq	r0, #0	; 0x0
         4c8e4:	0a00000d 	beq	4c920 <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x844>
         4c8e8:	e3a09000 	mov	r9, #0	; 0x0
         4c8ec:	e3550000 	cmp	r5, #0	; 0x0
         4c8f0:	da00000a 	ble	4c920 <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x844>
         4c8f4:	e24b102c 	sub	r1, fp, #44	; 0x2c
         4c8f8:	e3a02001 	mov	r2, #1	; 0x1
         4c8fc:	e51b0030 	ldr	r0, [fp, -#48]
         4c900:	eb6baca2 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4c904:	e5d00000 	ldrb	r0, [r0]
         4c908:	e1a01189 	mov	r1, r9, lsl #3
         4c90c:	e0866110 	add	r6, r6, r0, lsl r1
         4c910:	e2890001 	add	r0, r9, #1	; 0x1
         4c914:	e20090ff 	and	r9, r0, #255	; 0xff
         4c918:	e1590005 	cmp	r9, r5
         4c91c:	bafffff4 	blt	4c8f4 <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x818>
         4c920:	e1a01408 	mov	r1, r8, lsl #8
         4c924:	e59d0000 	ldr	r0, [sp]
         4c928:	e0840100 	add	r0, r4, r0, lsl #2
         4c92c:	e58010e8 	str	r1, [r0, #232]
         4c930:	e1a01407 	mov	r1, r7, lsl #8
         4c934:	e5801108 	str	r1, [r0, #264]
         4c938:	e1a01406 	mov	r1, r6, lsl #8
         4c93c:	e5a01128 	str	r1, [r0, #296]!
         4c940:	e59d0000 	ldr	r0, [sp]
         4c944:	e2800001 	add	r0, r0, #1	; 0x1
         4c948:	e20010ff 	and	r1, r0, #255	; 0xff
         4c94c:	e58d1000 	str	r1, [sp]
         4c950:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         4c954:	e1510000 	cmp	r1, r0
         4c958:	baffffc0 	blt	4c860 <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x784>
         4c95c:	e28dd00c 	add	sp, sp, #12	; 0xc
         4c960:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         4c964:	e3300000 	teq	r0, #0	; 0x0
         4c968:	0a00002a 	beq	4ca18 <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x93c>
         4c96c:	e24b102c 	sub	r1, fp, #44	; 0x2c
         4c970:	e3a02001 	mov	r2, #1	; 0x1
         4c974:	e51b0030 	ldr	r0, [fp, -#48]
         4c978:	eb6bac84 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4c97c:	e5d01000 	ldrb	r1, [r0]
         4c980:	e5c4115b 	strb	r1, [r4, #347]
         4c984:	ea000019 	b	4c9f0 <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x914>
         4c988:	e5c4015a 	strb	r0, [r4, #346]
         4c98c:	e3a00000 	mov	r0, #0	; 0x0
         4c990:	e24b102c 	sub	r1, fp, #44	; 0x2c
         4c994:	e58400e8 	str	r0, [r4, #232]
         4c998:	e51b0030 	ldr	r0, [fp, -#48]
         4c99c:	eb6bac77 	bl	1b37b80 <TPCMCIA20Parser::$GetShort(unsigned char *&)>
         4c9a0:	e1a00400 	mov	r0, r0, lsl #8
         4c9a4:	e5840108 	str	r0, [r4, #264]
         4c9a8:	eaffffec 	b	4c960 <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x884>
         4c9ac:	e5c4015a 	strb	r0, [r4, #346]
         4c9b0:	e24b102c 	sub	r1, fp, #44	; 0x2c
         4c9b4:	e51b0030 	ldr	r0, [fp, -#48]
         4c9b8:	eb6bac70 	bl	1b37b80 <TPCMCIA20Parser::$GetShort(unsigned char *&)>
         4c9bc:	e1a00400 	mov	r0, r0, lsl #8
         4c9c0:	e24b102c 	sub	r1, fp, #44	; 0x2c
         4c9c4:	e5840108 	str	r0, [r4, #264]
         4c9c8:	e51b0030 	ldr	r0, [fp, -#48]
         4c9cc:	eb6bac6b 	bl	1b37b80 <TPCMCIA20Parser::$GetShort(unsigned char *&)>
         4c9d0:	e1a00400 	mov	r0, r0, lsl #8
         4c9d4:	e58400e8 	str	r0, [r4, #232]
         4c9d8:	eaffffe0 	b	4c960 <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x884>
         4c9dc:	e24b102c 	sub	r1, fp, #44	; 0x2c
         4c9e0:	e3a02001 	mov	r2, #1	; 0x1
         4c9e4:	e51b0030 	ldr	r0, [fp, -#48]
         4c9e8:	eb6bac68 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4c9ec:	e5d01000 	ldrb	r1, [r0]
         4c9f0:	e24b2030 	sub	r2, fp, #48	; 0x30
         4c9f4:	e8920005 	ldmia	r2, {r0, r2}
         4c9f8:	e5903018 	ldr	r3, [r0, #24]	; fField24
         4c9fc:	e1530002 	cmp	r3, r2
         4ca00:	9a000004 	bls	4ca18 <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x93c>
         4ca04:	e3a03001 	mov	r3, #1	; 0x1
         4ca08:	e3a02007 	mov	r2, #7	; 0x7
         4ca0c:	eb6ba857 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4ca10:	e3300000 	teq	r0, #0	; 0x0
         4ca14:	1afffff0 	bne	4c9dc <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x900>
         4ca18:	e59d0010 	ldr	r0, [sp, #16]	; fField16
         4ca1c:	e3300000 	teq	r0, #0	; 0x0
         4ca20:	0a000003 	beq	4ca34 <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x958>
         4ca24:	e51b0030 	ldr	r0, [fp, -#48]
         4ca28:	e5900014 	ldr	r0, [r0, #20]	; fField20
         4ca2c:	e1a01004 	mov	r1, r4
         4ca30:	eb6dff06 	bl	1bcc650 <TCardConfiguration::$__as(TCardConfiguration const &)>
         4ca34:	e51b0030 	ldr	r0, [fp, -#48]
         4ca38:	e5900004 	ldr	r0, [r0, #4]	; fField4
         4ca3c:	eb6f072f 	bl	1c0e700 <TCardPCMCIA::$GetNumOfCardFunctions(void)>
         4ca40:	e1a04000 	mov	r4, r0
         4ca44:	e51b0030 	ldr	r0, [fp, -#48]
         4ca48:	e5901004 	ldr	r1, [r0, #4]	; fField4
         4ca4c:	e5d11028 	ldrb	r1, [r1, #40]	; fField40
         4ca50:	e2411001 	sub	r1, r1, #1	; 0x1
         4ca54:	e20160ff 	and	r6, r1, #255	; 0xff
         4ca58:	e5c06029 	strb	r6, [r0, #41]	; fField41
         4ca5c:	e51b0030 	ldr	r0, [fp, -#48]
         4ca60:	e5d0102a 	ldrb	r1, [r0, #42]	; fField42
         4ca64:	e3310000 	teq	r1, #0	; 0x0
         4ca68:	13340001 	teqne	r4, #1	; 0x1
         4ca6c:	15c06028 	strneb	r6, [r0, #40]	; fField40
         4ca70:	e3a05000 	mov	r5, #0	; 0x0
         4ca74:	e51b0030 	ldr	r0, [fp, -#48]
         4ca78:	e5d0002b 	ldrb	r0, [r0, #43]	; fField43
         4ca7c:	e3500000 	cmp	r0, #0	; 0x0
         4ca80:	da000013 	ble	4cad4 <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x9f8>
         4ca84:	e2444001 	sub	r4, r4, #1	; 0x1
         4ca88:	e51b0030 	ldr	r0, [fp, -#48]
         4ca8c:	e5900004 	ldr	r0, [r0, #4]	; fField4
         4ca90:	e1a01004 	mov	r1, r4
         4ca94:	eb6f071a 	bl	1c0e704 <TCardPCMCIA::$GetCardFunction(unsigned long const)>
         4ca98:	e3300000 	teq	r0, #0	; 0x0
         4ca9c:	0a000006 	beq	4cabc <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x9e0>
         4caa0:	e51b1030 	ldr	r1, [fp, -#48]
         4caa4:	e5911024 	ldr	r1, [r1, #36]	; fField36
         4caa8:	e5801004 	str	r1, [r0, #4]	; fField4
         4caac:	e51b1030 	ldr	r1, [fp, -#48]
         4cab0:	e5d11028 	ldrb	r1, [r1, #40]	; fField40
         4cab4:	e5c01002 	strb	r1, [r0, #2]
         4cab8:	e5c06003 	strb	r6, [r0, #3]
         4cabc:	e2850001 	add	r0, r5, #1	; 0x1
         4cac0:	e20050ff 	and	r5, r0, #255	; 0xff
         4cac4:	e51b0030 	ldr	r0, [fp, -#48]
         4cac8:	e5d0002b 	ldrb	r0, [r0, #43]	; fField43
         4cacc:	e1500005 	cmp	r0, r5
         4cad0:	caffffeb 	bgt	4ca84 <TPCMCIA20Parser::CisTpl_CE(unsigned char *)+0x9a8>
         4cad4:	e3a00000 	mov	r0, #0	; 0x0
         4cad8:	e51b1030 	ldr	r1, [fp, -#48]
         4cadc:	e5c1002a 	strb	r0, [r1, #42]	; fField42
         4cae0:	e51b002c 	ldr	r0, [fp, -#44]
         4cae4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TPCMCIA20Parser::CisTpl_Checksum(unsigned char *, unsigned char *, unsigned long, unsigned char)
 * Address: 0004cae8
 */
TPCMCIA20Parser::CisTpl_Checksum(unsigned char *, unsigned char *, unsigned long, unsigned char) {
    /*
         4cae8:	e1a0c00d 	mov	ip, sp
         4caec:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         4caf0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         4caf4:	e24cb014 	sub	fp, ip, #20	; 0x14
         4caf8:	e59b0014 	ldr	r0, [fp, #20]	; fField20
         4cafc:	e20040ff 	and	r4, r0, #255	; 0xff
         4cb00:	e28b1008 	add	r1, fp, #8	; 0x8
         4cb04:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         4cb08:	eb6bb049 	bl	1b38c34 <TPCMCIA20Parser::$StartTuple(unsigned char *&)>
         4cb0c:	e28b1008 	add	r1, fp, #8	; 0x8
         4cb10:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         4cb14:	eb6bac19 	bl	1b37b80 <TPCMCIA20Parser::$GetShort(unsigned char *&)>
         4cb18:	e1a07000 	mov	r7, r0
         4cb1c:	e28b1008 	add	r1, fp, #8	; 0x8
         4cb20:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         4cb24:	eb6bac15 	bl	1b37b80 <TPCMCIA20Parser::$GetShort(unsigned char *&)>
         4cb28:	e1a06000 	mov	r6, r0
         4cb2c:	e28b1008 	add	r1, fp, #8	; 0x8
         4cb30:	e3a02001 	mov	r2, #1	; 0x1
         4cb34:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         4cb38:	eb6bac14 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4cb3c:	e5d05000 	ldrb	r5, [r0]
         4cb40:	e3340000 	teq	r4, #0	; 0x0
         4cb44:	03a04001 	moveq	r4, #1	; 0x1
         4cb48:	13a04002 	movne	r4, #2	; 0x2
         4cb4c:	e0000794 	mul	r0, r4, r7
         4cb50:	e59b1010 	ldr	r1, [fp, #16]	; fField16
         4cb54:	e0800001 	add	r0, r0, r1
         4cb58:	e3c0233f 	bic	r2, r0, #-67108864	; 0xfc000000
         4cb5c:	e59b000c 	ldr	r0, [fp, #12]
         4cb60:	e0822000 	add	r2, r2, r0
         4cb64:	e0811007 	add	r1, r1, r7
         4cb68:	e3c1133f 	bic	r1, r1, #-67108864	; 0xfc000000
         4cb6c:	e0817000 	add	r7, r1, r0
         4cb70:	e1a03004 	mov	r3, r4
         4cb74:	e92d0008 	stmdb	sp!, {r3}
         4cb78:	e1a03006 	mov	r3, r6
         4cb7c:	e1a01005 	mov	r1, r5
         4cb80:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         4cb84:	eb6ba3d6 	bl	1b35ae4 <TPCMCIA20Parser::$ChecksumOK(unsigned long, unsigned char *, unsigned long, unsigned long)>
         4cb88:	e28dd004 	add	sp, sp, #4	; 0x4
         4cb8c:	e3300000 	teq	r0, #0	; 0x0
         4cb90:	1a00000c 	bne	4cbc8 <TPCMCIA20Parser::CisTpl_Checksum(unsigned char *, unsigned char *, unsigned long, unsigned char)+0xe0>
         4cb94:	e1a03004 	mov	r3, r4
         4cb98:	e92d0008 	stmdb	sp!, {r3}
         4cb9c:	e1a03006 	mov	r3, r6
         4cba0:	e1a02007 	mov	r2, r7
         4cba4:	e1a01005 	mov	r1, r5
         4cba8:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         4cbac:	eb6ba3cc 	bl	1b35ae4 <TPCMCIA20Parser::$ChecksumOK(unsigned long, unsigned char *, unsigned long, unsigned long)>
         4cbb0:	e28dd004 	add	sp, sp, #4	; 0x4
         4cbb4:	e3300000 	teq	r0, #0	; 0x0
         4cbb8:	03e01022 	mvneq	r1, #34	; 0x22
         4cbbc:	02411c29 	subeq	r1, r1, #10496	; 0x2900
         4cbc0:	059b0004 	ldreq	r0, [fp, #4]	; fField4
         4cbc4:	05801000 	streq	r1, [r0]
         4cbc8:	e59b0008 	ldr	r0, [fp, #8]	; fField8
         4cbcc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TPCMCIA20Parser::CisTpl_Conf(unsigned char *)
 * Address: 0004cbd0
 */
TPCMCIA20Parser::CisTpl_Conf(unsigned char *) {
    /*
         4cbd0:	e1a0c00d 	mov	ip, sp
         4cbd4:	e92dd9f3 	stmdb	sp!, {r0, r1, r4, r5, r6, r7, r8, fp, ip, lr, pc}
         4cbd8:	e24cb004 	sub	fp, ip, #4	; 0x4
         4cbdc:	e24b1024 	sub	r1, fp, #36	; 0x24
         4cbe0:	e51b0028 	ldr	r0, [fp, -#40]	; fField40
         4cbe4:	eb6bb012 	bl	1b38c34 <TPCMCIA20Parser::$StartTuple(unsigned char *&)>
         4cbe8:	e24b1024 	sub	r1, fp, #36	; 0x24
         4cbec:	e3a02001 	mov	r2, #1	; 0x1
         4cbf0:	e51b0028 	ldr	r0, [fp, -#40]	; fField40
         4cbf4:	eb6babe5 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4cbf8:	e5d01000 	ldrb	r1, [r0]
         4cbfc:	e1a04001 	mov	r4, r1
         4cc00:	e3a03002 	mov	r3, #2	; 0x2
         4cc04:	e3a02007 	mov	r2, #7	; 0x7
         4cc08:	e51b0028 	ldr	r0, [fp, -#40]	; fField40
         4cc0c:	eb6ba7d7 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4cc10:	e1a07000 	mov	r7, r0
         4cc14:	e1a01004 	mov	r1, r4
         4cc18:	e3a03004 	mov	r3, #4	; 0x4
         4cc1c:	e3a02005 	mov	r2, #5	; 0x5
         4cc20:	e51b0028 	ldr	r0, [fp, -#40]	; fField40
         4cc24:	eb6ba7d1 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4cc28:	e2800001 	add	r0, r0, #1	; 0x1
         4cc2c:	e20060ff 	and	r6, r0, #255	; 0xff
         4cc30:	e1a01004 	mov	r1, r4
         4cc34:	e3a03002 	mov	r3, #2	; 0x2
         4cc38:	e3a02001 	mov	r2, #1	; 0x1
         4cc3c:	e51b0028 	ldr	r0, [fp, -#40]	; fField40
         4cc40:	eb6ba7ca 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4cc44:	e2800001 	add	r0, r0, #1	; 0x1
         4cc48:	e20080ff 	and	r8, r0, #255	; 0xff
         4cc4c:	e24b1024 	sub	r1, fp, #36	; 0x24
         4cc50:	e3a02001 	mov	r2, #1	; 0x1
         4cc54:	e51b0028 	ldr	r0, [fp, -#40]	; fField40
         4cc58:	eb6babcc 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4cc5c:	e5d01000 	ldrb	r1, [r0]
         4cc60:	e3a03006 	mov	r3, #6	; 0x6
         4cc64:	e3a02005 	mov	r2, #5	; 0x5
         4cc68:	e51b0028 	ldr	r0, [fp, -#40]	; fField40
         4cc6c:	eb6ba7bf 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4cc70:	e51b1028 	ldr	r1, [fp, -#40]	; fField40
         4cc74:	e5911004 	ldr	r1, [r1, #4]	; fField4
         4cc78:	e5c1002b 	strb	r0, [r1, #43]	; fField43
         4cc7c:	e24b1024 	sub	r1, fp, #36	; 0x24
         4cc80:	e3a02001 	mov	r2, #1	; 0x1
         4cc84:	e51b0028 	ldr	r0, [fp, -#40]	; fField40
         4cc88:	eb6babc0 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4cc8c:	e5d04000 	ldrb	r4, [r0]
         4cc90:	e3a05001 	mov	r5, #1	; 0x1
         4cc94:	e3580001 	cmp	r8, #1	; 0x1
         4cc98:	da00000a 	ble	4ccc8 <TPCMCIA20Parser::CisTpl_Conf(unsigned char *)+0xf8>
         4cc9c:	e24b1024 	sub	r1, fp, #36	; 0x24
         4cca0:	e3a02001 	mov	r2, #1	; 0x1
         4cca4:	e51b0028 	ldr	r0, [fp, -#40]	; fField40
         4cca8:	eb6babb8 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4ccac:	e5d01000 	ldrb	r1, [r0]
         4ccb0:	e1a00185 	mov	r0, r5, lsl #3
         4ccb4:	e0844011 	add	r4, r4, r1, lsl r0
         4ccb8:	e2850001 	add	r0, r5, #1	; 0x1
         4ccbc:	e20050ff 	and	r5, r0, #255	; 0xff
         4ccc0:	e1550008 	cmp	r5, r8
         4ccc4:	bafffff4 	blt	4cc9c <TPCMCIA20Parser::CisTpl_Conf(unsigned char *)+0xcc>
         4ccc8:	e51b0028 	ldr	r0, [fp, -#40]	; fField40
         4cccc:	e5900004 	ldr	r0, [r0, #4]	; fField4
         4ccd0:	e5a04010 	str	r4, [r0, #16]!	; fField16
         4ccd4:	e51b0028 	ldr	r0, [fp, -#40]	; fField40
         4ccd8:	e5a04024 	str	r4, [r0, #36]!	; fField36
         4ccdc:	e51b0028 	ldr	r0, [fp, -#40]	; fField40
         4cce0:	e5900020 	ldr	r0, [r0, #32]	; fField32
         4cce4:	e3300000 	teq	r0, #0	; 0x0
         4cce8:	15a04004 	strne	r4, [r0, #4]!	; fField4
         4ccec:	e3a04000 	mov	r4, #0	; 0x0
         4ccf0:	e3560000 	cmp	r6, #0	; 0x0
         4ccf4:	da00000f 	ble	4cd38 <TPCMCIA20Parser::CisTpl_Conf(unsigned char *)+0x168>
         4ccf8:	e51b0028 	ldr	r0, [fp, -#40]	; fField40
         4ccfc:	e5901004 	ldr	r1, [r0, #4]	; fField4
         4cd00:	e2815014 	add	r5, r1, #20	; 0x14
         4cd04:	e24b1024 	sub	r1, fp, #36	; 0x24
         4cd08:	e3a02001 	mov	r2, #1	; 0x1
         4cd0c:	eb6bab9f 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4cd10:	e5d00000 	ldrb	r0, [r0]
         4cd14:	e1a01184 	mov	r1, r4, lsl #3
         4cd18:	e1a01110 	mov	r1, r0, lsl r1
         4cd1c:	e5950000 	ldr	r0, [r5]
         4cd20:	e0810000 	add	r0, r1, r0
         4cd24:	e5850000 	str	r0, [r5]
         4cd28:	e2840001 	add	r0, r4, #1	; 0x1
         4cd2c:	e20040ff 	and	r4, r0, #255	; 0xff
         4cd30:	e1540006 	cmp	r4, r6
         4cd34:	baffffef 	blt	4ccf8 <TPCMCIA20Parser::CisTpl_Conf(unsigned char *)+0x128>
         4cd38:	e3a04000 	mov	r4, #0	; 0x0
         4cd3c:	e3570000 	cmp	r7, #0	; 0x0
         4cd40:	da000007 	ble	4cd64 <TPCMCIA20Parser::CisTpl_Conf(unsigned char *)+0x194>
         4cd44:	e24b1024 	sub	r1, fp, #36	; 0x24
         4cd48:	e3a02001 	mov	r2, #1	; 0x1
         4cd4c:	e51b0028 	ldr	r0, [fp, -#40]	; fField40
         4cd50:	eb6bab8e 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4cd54:	e2840001 	add	r0, r4, #1	; 0x1
         4cd58:	e20040ff 	and	r4, r0, #255	; 0xff
         4cd5c:	e1540007 	cmp	r4, r7
         4cd60:	bafffff7 	blt	4cd44 <TPCMCIA20Parser::CisTpl_Conf(unsigned char *)+0x174>
         4cd64:	e51b0024 	ldr	r0, [fp, -#36]	; fField36
         4cd68:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TPCMCIA20Parser::DeviceParser(unsigned char *, unsigned char, unsigned char)
 * Address: 0004cd6c
 */
TPCMCIA20Parser::DeviceParser(unsigned char *, unsigned char, unsigned char) {
    /*
         4cd6c:	e1a0c00d 	mov	ip, sp
         4cd70:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         4cd74:	e24cb004 	sub	fp, ip, #4	; 0x4
         4cd78:	e24dd004 	sub	sp, sp, #4	; 0x4
         4cd7c:	e51b0030 	ldr	r0, [fp, -#48]
         4cd80:	e20060ff 	and	r6, r0, #255	; 0xff
         4cd84:	e51b002c 	ldr	r0, [fp, -#44]
         4cd88:	e20000ff 	and	r0, r0, #255	; 0xff
         4cd8c:	e24b1034 	sub	r1, fp, #52	; 0x34
         4cd90:	e58d0000 	str	r0, [sp]
         4cd94:	e51b0038 	ldr	r0, [fp, -#56]	; fField56
         4cd98:	eb6bafa5 	bl	1b38c34 <TPCMCIA20Parser::$StartTuple(unsigned char *&)>
         4cd9c:	e24dd008 	sub	sp, sp, #8	; 0x8
         4cda0:	e3a03000 	mov	r3, #0	; 0x0
         4cda4:	e58d3004 	str	r3, [sp, #4]	; fField4
         4cda8:	e59f4100 	ldr	r4, [pc, #100]	; 4ceb0 <TPCMCIA20Parser::DeviceParser(unsigned char *, unsigned char, unsigned char)+0x144>
         4cdac:	e3a02000 	mov	r2, #0	; 0x0
         4cdb0:	e58d2000 	str	r2, [sp]
         4cdb4:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         4cdb8:	e3300000 	teq	r0, #0	; 0x0
         4cdbc:	0a000038 	beq	4cea4 <TPCMCIA20Parser::DeviceParser(unsigned char *, unsigned char, unsigned char)+0x138>
         4cdc0:	e51b0038 	ldr	r0, [fp, -#56]	; fField56
         4cdc4:	e5900004 	ldr	r0, [r0, #4]	; fField4
         4cdc8:	e1a01006 	mov	r1, r6
         4cdcc:	eb6f0249 	bl	1c0d6f8 <TCardPCMCIA::$AddCardOtherCondDeviceList(unsigned long const)>
         4cdd0:	e58d0000 	str	r0, [sp]
         4cdd4:	e3500000 	cmp	r0, #0	; 0x0
         4cdd8:	b51b0038 	ldrlt	r0, [fp, -#56]	; fField56
         4cddc:	b59d2000 	ldrlt	r2, [sp]
         4cde0:	b5802000 	strlt	r2, [r0]
         4cde4:	ba0000bf 	blt	4d0e8 <TPCMCIA20Parser::DeviceParser(unsigned char *, unsigned char, unsigned char)+0x37c>
         4cde8:	e24b1034 	sub	r1, fp, #52	; 0x34
         4cdec:	e3a02001 	mov	r2, #1	; 0x1
         4cdf0:	e51b0038 	ldr	r0, [fp, -#56]	; fField56
         4cdf4:	eb6bab65 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4cdf8:	e5d01000 	ldrb	r1, [r0]
         4cdfc:	e1a05001 	mov	r5, r1
         4ce00:	e3a03001 	mov	r3, #1	; 0x1
         4ce04:	e3a02000 	mov	r2, #0	; 0x0
         4ce08:	e51b0038 	ldr	r0, [fp, -#56]	; fField56
         4ce0c:	eb6ba757 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4ce10:	e3300000 	teq	r0, #0	; 0x0
         4ce14:	13a00001 	movne	r0, #1	; 0x1
         4ce18:	e20030ff 	and	r3, r0, #255	; 0xff
         4ce1c:	e1a01005 	mov	r1, r5
         4ce20:	e58d3004 	str	r3, [sp, #4]	; fField4
         4ce24:	e3a03002 	mov	r3, #2	; 0x2
         4ce28:	e3a02002 	mov	r2, #2	; 0x2
         4ce2c:	e51b0038 	ldr	r0, [fp, -#56]	; fField56
         4ce30:	eb6ba74e 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4ce34:	e3300001 	teq	r0, #1	; 0x1
         4ce38:	059f4074 	ldreq	r4, [pc, #74]	; 4ceb4 <TPCMCIA20Parser::DeviceParser(unsigned char *, unsigned char, unsigned char)+0x148>
         4ce3c:	0a000006 	beq	4ce5c <TPCMCIA20Parser::DeviceParser(unsigned char *, unsigned char, unsigned char)+0xf0>
         4ce40:	e3300002 	teq	r0, #2	; 0x2
         4ce44:	03a04d47 	moveq	r4, #4544	; 0x11c0
         4ce48:	02844986 	addeq	r4, r4, #2195456	; 0x218000
         4ce4c:	0a000002 	beq	4ce5c <TPCMCIA20Parser::DeviceParser(unsigned char *, unsigned char, unsigned char)+0xf0>
         4ce50:	e3300003 	teq	r0, #3	; 0x3
         4ce54:	03a04e8e 	moveq	r4, #2272	; 0x8e0
         4ce58:	02844943 	addeq	r4, r4, #1097728	; 0x10c000
         4ce5c:	e1a01005 	mov	r1, r5
         4ce60:	e3a03001 	mov	r3, #1	; 0x1
         4ce64:	e3a02007 	mov	r2, #7	; 0x7
         4ce68:	e51b0038 	ldr	r0, [fp, -#56]	; fField56
         4ce6c:	eb6ba73f 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4ce70:	e3300000 	teq	r0, #0	; 0x0
         4ce74:	0a00000a 	beq	4cea4 <TPCMCIA20Parser::DeviceParser(unsigned char *, unsigned char, unsigned char)+0x138>
         4ce78:	e24b1034 	sub	r1, fp, #52	; 0x34
         4ce7c:	e3a02001 	mov	r2, #1	; 0x1
         4ce80:	e51b0038 	ldr	r0, [fp, -#56]	; fField56
         4ce84:	eb6bab41 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4ce88:	e5d01000 	ldrb	r1, [r0]
         4ce8c:	e3a03001 	mov	r3, #1	; 0x1
         4ce90:	e3a02007 	mov	r2, #7	; 0x7
         4ce94:	e51b0038 	ldr	r0, [fp, -#56]	; fField56
         4ce98:	eb6ba734 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4ce9c:	e3300000 	teq	r0, #0	; 0x0
         4cea0:	1afffff4 	bne	4ce78 <TPCMCIA20Parser::DeviceParser(unsigned char *, unsigned char, unsigned char)+0x10c>
         4cea4:	e3a05000 	mov	r5, #0	; 0x0
         4cea8:	e3a07000 	mov	r7, #0	; 0x0
         4ceac:	ea00007c 	b	4d0a4 <TPCMCIA20Parser::DeviceParser(unsigned char *, unsigned char, unsigned char)+0x338>
         4ceb0:	004c4b40 	subeq	r4, ip, r0, asr #22
         4ceb4:	00325aa0 	eoreqs	r5, r2, r0, lsr #21
         4ceb8:	e24dd004 	sub	sp, sp, #4	; 0x4
         4cebc:	e1a01008 	mov	r1, r8
         4cec0:	e3a03004 	mov	r3, #4	; 0x4
         4cec4:	e3a02007 	mov	r2, #7	; 0x7
         4cec8:	e51b0038 	ldr	r0, [fp, -#56]	; fField56
         4cecc:	eb6ba727 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4ced0:	e1a09000 	mov	r9, r0
         4ced4:	e1a01008 	mov	r1, r8
         4ced8:	e3a03001 	mov	r3, #1	; 0x1
         4cedc:	e3a02003 	mov	r2, #3	; 0x3
         4cee0:	e51b0038 	ldr	r0, [fp, -#56]	; fField56
         4cee4:	eb6ba721 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4cee8:	e1a01008 	mov	r1, r8
         4ceec:	e58d0000 	str	r0, [sp]
         4cef0:	e3a03003 	mov	r3, #3	; 0x3
         4cef4:	e3a02002 	mov	r2, #2	; 0x2
         4cef8:	e51b0038 	ldr	r0, [fp, -#56]	; fField56
         4cefc:	eb6ba71b 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4cf00:	e3a08000 	mov	r8, #0	; 0x0
         4cf04:	e3500005 	cmp	r0, #5	; 0x5
         4cf08:	aa000004 	bge	4cf20 <TPCMCIA20Parser::DeviceParser(unsigned char *, unsigned char, unsigned char)+0x1b4>
         4cf0c:	e3500000 	cmp	r0, #0	; 0x0
         4cf10:	c0801180 	addgt	r1, r0, r0, lsl #3
         4cf14:	c0811200 	addgt	r1, r1, r0, lsl #4
         4cf18:	c3a02f4b 	movgt	r2, #300	; 0x12c
         4cf1c:	c0428081 	subgt	r8, r2, r1, lsl #1
         4cf20:	e3300007 	teq	r0, #7	; 0x7
         4cf24:	1a000003 	bne	4cf38 <TPCMCIA20Parser::DeviceParser(unsigned char *, unsigned char, unsigned char)+0x1cc>
         4cf28:	e24b1034 	sub	r1, fp, #52	; 0x34
         4cf2c:	e51b0038 	ldr	r0, [fp, -#56]	; fField56
         4cf30:	eb6ba70f 	bl	1b36b74 <TPCMCIA20Parser::$GetExtendedDeviceSpeed(unsigned char *&)>
         4cf34:	e1a08000 	mov	r8, r0
         4cf38:	e339000e 	teq	r9, #14	; 0xe
         4cf3c:	1a00000b 	bne	4cf70 <TPCMCIA20Parser::DeviceParser(unsigned char *, unsigned char, unsigned char)+0x204>
         4cf40:	e3a09000 	mov	r9, #0	; 0x0
         4cf44:	e24b1034 	sub	r1, fp, #52	; 0x34
         4cf48:	e3a02001 	mov	r2, #1	; 0x1
         4cf4c:	e51b0038 	ldr	r0, [fp, -#56]	; fField56
         4cf50:	eb6bab0e 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4cf54:	e5d01000 	ldrb	r1, [r0]
         4cf58:	e3a03001 	mov	r3, #1	; 0x1
         4cf5c:	e3a02007 	mov	r2, #7	; 0x7
         4cf60:	e51b0038 	ldr	r0, [fp, -#56]	; fField56
         4cf64:	eb6ba701 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4cf68:	e3300000 	teq	r0, #0	; 0x0
         4cf6c:	1afffff4 	bne	4cf44 <TPCMCIA20Parser::DeviceParser(unsigned char *, unsigned char, unsigned char)+0x1d8>
         4cf70:	e24b2038 	sub	r2, fp, #56	; 0x38
         4cf74:	e8920005 	ldmia	r2, {r0, r2}
         4cf78:	e5901018 	ldr	r1, [r0, #24]	; fField24
         4cf7c:	e1510002 	cmp	r1, r2
         4cf80:	9a000004 	bls	4cf98 <TPCMCIA20Parser::DeviceParser(unsigned char *, unsigned char, unsigned char)+0x22c>
         4cf84:	e24b1034 	sub	r1, fp, #52	; 0x34
         4cf88:	e3a02001 	mov	r2, #1	; 0x1
         4cf8c:	eb6baaff 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4cf90:	e5d00000 	ldrb	r0, [r0]
         4cf94:	ea000000 	b	4cf9c <TPCMCIA20Parser::DeviceParser(unsigned char *, unsigned char, unsigned char)+0x230>
         4cf98:	e3a000fe 	mov	r0, #254	; 0xfe
         4cf9c:	e200a0ff 	and	sl, r0, #255	; 0xff
         4cfa0:	e33a00ff 	teq	sl, #255	; 0xff
         4cfa4:	0a00003a 	beq	4d094 <TPCMCIA20Parser::DeviceParser(unsigned char *, unsigned char, unsigned char)+0x328>
         4cfa8:	e24dd004 	sub	sp, sp, #4	; 0x4
         4cfac:	e1a0100a 	mov	r1, sl
         4cfb0:	e3a03005 	mov	r3, #5	; 0x5
         4cfb4:	e3a02007 	mov	r2, #7	; 0x7
         4cfb8:	e51b0038 	ldr	r0, [fp, -#56]	; fField56
         4cfbc:	eb6ba6eb 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4cfc0:	e2800001 	add	r0, r0, #1	; 0x1
         4cfc4:	e20010ff 	and	r1, r0, #255	; 0xff
         4cfc8:	e58d1000 	str	r1, [sp]
         4cfcc:	e1a0100a 	mov	r1, sl
         4cfd0:	e3a03003 	mov	r3, #3	; 0x3
         4cfd4:	e3a02002 	mov	r2, #2	; 0x2
         4cfd8:	e51b0038 	ldr	r0, [fp, -#56]	; fField56
         4cfdc:	eb6ba6e3 	bl	1b36b70 <TPCMCIA20Parser::$GetBits(unsigned long, unsigned long, unsigned long)>
         4cfe0:	e1a00080 	mov	r0, r0, lsl #1
         4cfe4:	e3a01c02 	mov	r1, #512	; 0x200
         4cfe8:	e1a00011 	mov	r0, r1, lsl r0
         4cfec:	e59d1000 	ldr	r1, [sp]
         4cff0:	e00a0190 	mul	sl, r0, r1
         4cff4:	e1a03005 	mov	r3, r5
         4cff8:	e1a02009 	mov	r2, r9
         4cffc:	e1a00006 	mov	r0, r6
         4d000:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         4d004:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         4d008:	e59d301c 	ldr	r3, [sp, #28]	; fField28
         4d00c:	e92d0008 	stmdb	sp!, {r3}
         4d010:	e1a03004 	mov	r3, r4
         4d014:	e1a0200a 	mov	r2, sl
         4d018:	e1a01008 	mov	r1, r8
         4d01c:	e3a00000 	mov	r0, #0	; 0x0
         4d020:	eb6dfd8d 	bl	1bcc65c <TCardDevice::$__ct(unsigned long, unsigned long, unsigned long, unsigned char, unsigned char, unsigned char, unsigned char, unsigned long)>
         4d024:	e28dd014 	add	sp, sp, #20	; 0x14
         4d028:	e1b03000 	movs	r3, r0
         4d02c:	e085500a 	add	r5, r5, sl
         4d030:	0a000010 	beq	4d078 <TPCMCIA20Parser::DeviceParser(unsigned char *, unsigned char, unsigned char)+0x30c>
         4d034:	e59d0010 	ldr	r0, [sp, #16]	; fField16
         4d038:	e3300000 	teq	r0, #0	; 0x0
         4d03c:	e51b0038 	ldr	r0, [fp, -#56]	; fField56
         4d040:	e5900004 	ldr	r0, [r0, #4]	; fField4
         4d044:	1a000007 	bne	4d068 <TPCMCIA20Parser::DeviceParser(unsigned char *, unsigned char, unsigned char)+0x2fc>
         4d048:	e1a01003 	mov	r1, r3
         4d04c:	eb6e05c8 	bl	1bce774 <TCardPCMCIA::$AddCardDevice(TCardDevice *)>
         4d050:	e51b0038 	ldr	r0, [fp, -#56]	; fField56
         4d054:	e5900004 	ldr	r0, [r0, #4]	; fField4
         4d058:	e5f01027 	ldrb	r1, [r0, #39]!	; fField39
         4d05c:	e2811001 	add	r1, r1, #1	; 0x1
         4d060:	e5c01000 	strb	r1, [r0]
         4d064:	ea000008 	b	4d08c <TPCMCIA20Parser::DeviceParser(unsigned char *, unsigned char, unsigned char)+0x320>
         4d068:	e1a01006 	mov	r1, r6
         4d06c:	e59d2008 	ldr	r2, [sp, #8]	; fField8
         4d070:	eb6f01a1 	bl	1c0d6fc <TCardPCMCIA::$AddCardOtherCondDevice(unsigned long const, unsigned long const, TCardDevice *)>
         4d074:	ea000004 	b	4d08c <TPCMCIA20Parser::DeviceParser(unsigned char *, unsigned char, unsigned char)+0x320>
         4d078:	e3a010e9 	mov	r1, #233	; 0xe9
         4d07c:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
         4d080:	e51b0038 	ldr	r0, [fp, -#56]	; fField56
         4d084:	e3a07001 	mov	r7, #1	; 0x1
         4d088:	e5801000 	str	r1, [r0]
         4d08c:	e28dd004 	add	sp, sp, #4	; 0x4
         4d090:	ea000000 	b	4d098 <TPCMCIA20Parser::DeviceParser(unsigned char *, unsigned char, unsigned char)+0x32c>
         4d094:	e3a07001 	mov	r7, #1	; 0x1
         4d098:	e28dd004 	add	sp, sp, #4	; 0x4
         4d09c:	e3370000 	teq	r7, #0	; 0x0
         4d0a0:	1a00000a 	bne	4d0d0 <TPCMCIA20Parser::DeviceParser(unsigned char *, unsigned char, unsigned char)+0x364>
         4d0a4:	e24b1038 	sub	r1, fp, #56	; 0x38
         4d0a8:	e8910003 	ldmia	r1, {r0, r1}
         4d0ac:	e5902018 	ldr	r2, [r0, #24]	; fField24
         4d0b0:	e1520001 	cmp	r2, r1
         4d0b4:	9a000005 	bls	4d0d0 <TPCMCIA20Parser::DeviceParser(unsigned char *, unsigned char, unsigned char)+0x364>
         4d0b8:	e24b1034 	sub	r1, fp, #52	; 0x34
         4d0bc:	e3a02001 	mov	r2, #1	; 0x1
         4d0c0:	eb6baab2 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4d0c4:	e5d08000 	ldrb	r8, [r0]
         4d0c8:	e33800ff 	teq	r8, #255	; 0xff
         4d0cc:	1affff79 	bne	4ceb8 <TPCMCIA20Parser::DeviceParser(unsigned char *, unsigned char, unsigned char)+0x14c>
         4d0d0:	e3360000 	teq	r6, #0	; 0x0
         4d0d4:	059d0008 	ldreq	r0, [sp, #8]	; fField8
         4d0d8:	03300000 	teqeq	r0, #0	; 0x0
         4d0dc:	051b0038 	ldreq	r0, [fp, -#56]	; fField56
         4d0e0:	05900004 	ldreq	r0, [r0, #4]	; fField4
         4d0e4:	05a05008 	streq	r5, [r0, #8]!	; fField8
         4d0e8:	e51b0034 	ldr	r0, [fp, -#52]
         4d0ec:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TPCMCIA20Parser::CisTpl_Device(unsigned char *)
 * Address: 0004d0f0
 */
TPCMCIA20Parser::CisTpl_Device(unsigned char *) {
    /*
         4d0f0:	e5d0201d 	ldrb	r2, [r0, #29]	; fField29
         4d0f4:	e2822001 	add	r2, r2, #1	; 0x1
         4d0f8:	e5c0201d 	strb	r2, [r0, #29]	; fField29
         4d0fc:	e20220ff 	and	r2, r2, #255	; 0xff
         4d100:	e3520001 	cmp	r2, #1	; 0x1
         4d104:	d3a03000 	movle	r3, #0	; 0x0
         4d108:	d3a02000 	movle	r2, #0	; 0x0
         4d10c:	da6ba68d 	ble	1b36b48 <TPCMCIA20Parser::$DeviceParser(unsigned char *, unsigned char, unsigned char)>
         4d110:	c3a00000 	movgt	r0, #0	; 0x0
         4d114:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPCMCIA20Parser::CisTpl_Device_A(unsigned char *)
 * Address: 0004d118
 */
TPCMCIA20Parser::CisTpl_Device_A(unsigned char *) {
    /*
         4d118:	e3a03000 	mov	r3, #0	; 0x0
         4d11c:	e3a02001 	mov	r2, #1	; 0x1
         4d120:	ea6ba688 	b	1b36b48 <TPCMCIA20Parser::$DeviceParser(unsigned char *, unsigned char, unsigned char)>
    */
}

/**
 * Symbol: TPCMCIA20Parser::CisTpl_Device_GEO(unsigned char *)
 * Address: 0004d124
 */
TPCMCIA20Parser::CisTpl_Device_GEO(unsigned char *) {
    /*
         4d124:	e1a0c00d 	mov	ip, sp
         4d128:	e92dd873 	stmdb	sp!, {r0, r1, r4, r5, r6, fp, ip, lr, pc}
         4d12c:	e24cb004 	sub	fp, ip, #4	; 0x4
         4d130:	e24b101c 	sub	r1, fp, #28	; 0x1c
         4d134:	e51b0020 	ldr	r0, [fp, -#32]	; fField32
         4d138:	eb6baebd 	bl	1b38c34 <TPCMCIA20Parser::$StartTuple(unsigned char *&)>
         4d13c:	e51b001c 	ldr	r0, [fp, -#28]	; fField28
         4d140:	e5d01000 	ldrb	r1, [r0]
         4d144:	e3a00006 	mov	r0, #6	; 0x6
         4d148:	eb6d95fe 	bl	1bb2948 <$__rt_udiv>
         4d14c:	e1a06000 	mov	r6, r0
         4d150:	e3a05000 	mov	r5, #0	; 0x0
         4d154:	e3500000 	cmp	r0, #0	; 0x0
         4d158:	9a00002c 	bls	4d210 <TPCMCIA20Parser::CisTpl_Device_GEO(unsigned char *)+0xec>
         4d15c:	e51b0020 	ldr	r0, [fp, -#32]	; fField32
         4d160:	e5900004 	ldr	r0, [r0, #4]	; fField4
         4d164:	e1a01005 	mov	r1, r5
         4d168:	eb6e1a06 	bl	1bd3988 <TCardPCMCIA::$GetCardDevice(unsigned long const)>
         4d16c:	e1a04000 	mov	r4, r0
         4d170:	e24b101c 	sub	r1, fp, #28	; 0x1c
         4d174:	e3a02001 	mov	r2, #1	; 0x1
         4d178:	e51b0020 	ldr	r0, [fp, -#32]	; fField32
         4d17c:	eb6baa83 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4d180:	e5d00000 	ldrb	r0, [r0]
         4d184:	e5c40017 	strb	r0, [r4, #23]	; fField23
         4d188:	e24b101c 	sub	r1, fp, #28	; 0x1c
         4d18c:	e3a02001 	mov	r2, #1	; 0x1
         4d190:	e51b0020 	ldr	r0, [fp, -#32]	; fField32
         4d194:	eb6baa7d 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4d198:	e5d00000 	ldrb	r0, [r0]
         4d19c:	e5c40018 	strb	r0, [r4, #24]	; fField24
         4d1a0:	e24b101c 	sub	r1, fp, #28	; 0x1c
         4d1a4:	e3a02001 	mov	r2, #1	; 0x1
         4d1a8:	e51b0020 	ldr	r0, [fp, -#32]	; fField32
         4d1ac:	eb6baa77 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4d1b0:	e5d00000 	ldrb	r0, [r0]
         4d1b4:	e5c40019 	strb	r0, [r4, #25]	; fField25
         4d1b8:	e24b101c 	sub	r1, fp, #28	; 0x1c
         4d1bc:	e3a02001 	mov	r2, #1	; 0x1
         4d1c0:	e51b0020 	ldr	r0, [fp, -#32]	; fField32
         4d1c4:	eb6baa71 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4d1c8:	e5d00000 	ldrb	r0, [r0]
         4d1cc:	e5c4001a 	strb	r0, [r4, #26]	; fField26
         4d1d0:	e24b101c 	sub	r1, fp, #28	; 0x1c
         4d1d4:	e3a02001 	mov	r2, #1	; 0x1
         4d1d8:	e51b0020 	ldr	r0, [fp, -#32]	; fField32
         4d1dc:	eb6baa6b 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4d1e0:	e5d00000 	ldrb	r0, [r0]
         4d1e4:	e5c4001b 	strb	r0, [r4, #27]	; fField27
         4d1e8:	e24b101c 	sub	r1, fp, #28	; 0x1c
         4d1ec:	e3a02001 	mov	r2, #1	; 0x1
         4d1f0:	e51b0020 	ldr	r0, [fp, -#32]	; fField32
         4d1f4:	eb6baa65 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4d1f8:	e5d00000 	ldrb	r0, [r0]
         4d1fc:	e5c4001c 	strb	r0, [r4, #28]	; fField28
         4d200:	e2855001 	add	r5, r5, #1	; 0x1
         4d204:	e2466001 	sub	r6, r6, #1	; 0x1
         4d208:	e3560000 	cmp	r6, #0	; 0x0
         4d20c:	8affffd2 	bhi	4d15c <TPCMCIA20Parser::CisTpl_Device_GEO(unsigned char *)+0x38>
         4d210:	e51b001c 	ldr	r0, [fp, -#28]	; fField28
         4d214:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TPCMCIA20Parser::Reset(void)
 * Address: 0004d218
 */
TPCMCIA20Parser::Reset(void) {
    /*
         4d218:	e1a0c00d 	mov	ip, sp
         4d21c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         4d220:	e24cb004 	sub	fp, ip, #4	; 0x4
         4d224:	e1a04000 	mov	r4, r0
         4d228:	e3a05000 	mov	r5, #0	; 0x0
         4d22c:	e5805000 	str	r5, [r0]
         4d230:	e5805018 	str	r5, [r0, #24]	; fField24
         4d234:	e5c0501e 	strb	r5, [r0, #30]	; fField30
         4d238:	e5c0501d 	strb	r5, [r0, #29]	; fField29
         4d23c:	e5c0501c 	strb	r5, [r0, #28]	; fField28
         4d240:	e5805020 	str	r5, [r0, #32]	; fField32
         4d244:	e5805024 	str	r5, [r0, #36]	; fField36
         4d248:	e5c05028 	strb	r5, [r0, #40]	; fField40
         4d24c:	e5c05029 	strb	r5, [r0, #41]	; fField41
         4d250:	e5c4502a 	strb	r5, [r4, #42]	; fField42
         4d254:	e3a00001 	mov	r0, #1	; 0x1
         4d258:	e5c4002b 	strb	r0, [r4, #43]	; fField43
         4d25c:	e284000c 	add	r0, r4, #12	; 0xc
         4d260:	eb6e0d6a 	bl	1bd0810 <TCardLongLink::$Clear(void)>
         4d264:	e5940014 	ldr	r0, [r4, #20]	; fField20
         4d268:	e3300000 	teq	r0, #0	; 0x0
         4d26c:	13a01001 	movne	r1, #1	; 0x1
         4d270:	1b6e0529 	blne	1bce71c <TCardConfiguration::$__dt(void)>
         4d274:	e1a00005 	mov	r0, r5
         4d278:	e5a45014 	str	r5, [r4, #20]!	; fField20
         4d27c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TPCMCIA20Parser::CisTpl_End(unsigned char *)
 * Address: 0004d280
 */
TPCMCIA20Parser::CisTpl_End(unsigned char *) {
    /*
         4d280:	e1a00001 	mov	r0, r1
         4d284:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPCMCIA20Parser::CisTpl_Manuf_Id(unsigned char *)
 * Address: 0004d288
 */
TPCMCIA20Parser::CisTpl_Manuf_Id(unsigned char *) {
    /*
         4d288:	e1a0c00d 	mov	ip, sp
         4d28c:	e92dd803 	stmdb	sp!, {r0, r1, fp, ip, lr, pc}
         4d290:	e24cb004 	sub	fp, ip, #4	; 0x4
         4d294:	e24b1010 	sub	r1, fp, #16	; 0x10
         4d298:	e51b0014 	ldr	r0, [fp, -#20]	; fField20
         4d29c:	eb6bae64 	bl	1b38c34 <TPCMCIA20Parser::$StartTuple(unsigned char *&)>
         4d2a0:	e24b1010 	sub	r1, fp, #16	; 0x10
         4d2a4:	e51b0014 	ldr	r0, [fp, -#20]	; fField20
         4d2a8:	eb6baa34 	bl	1b37b80 <TPCMCIA20Parser::$GetShort(unsigned char *&)>
         4d2ac:	e51b1014 	ldr	r1, [fp, -#20]	; fField20
         4d2b0:	e5911004 	ldr	r1, [r1, #4]	; fField4
         4d2b4:	e5c10019 	strb	r0, [r1, #25]	; fField25
         4d2b8:	e1a00420 	mov	r0, r0, lsr #8
         4d2bc:	e5c10018 	strb	r0, [r1, #24]	; fField24
         4d2c0:	e24b1010 	sub	r1, fp, #16	; 0x10
         4d2c4:	e51b0014 	ldr	r0, [fp, -#20]	; fField20
         4d2c8:	eb6baa2c 	bl	1b37b80 <TPCMCIA20Parser::$GetShort(unsigned char *&)>
         4d2cc:	e51b1014 	ldr	r1, [fp, -#20]	; fField20
         4d2d0:	e5911004 	ldr	r1, [r1, #4]	; fField4
         4d2d4:	e5c1001b 	strb	r0, [r1, #27]	; fField27
         4d2d8:	e1a00420 	mov	r0, r0, lsr #8
         4d2dc:	e5c1001a 	strb	r0, [r1, #26]	; fField26
         4d2e0:	e51b0010 	ldr	r0, [fp, -#16]	; fField16
         4d2e4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TPCMCIA20Parser::CisTpl_Func_Id(unsigned char *)
 * Address: 0004d2e8
 */
TPCMCIA20Parser::CisTpl_Func_Id(unsigned char *) {
    /*
         4d2e8:	e1a0c00d 	mov	ip, sp
         4d2ec:	e92dd8f3 	stmdb	sp!, {r0, r1, r4, r5, r6, r7, fp, ip, lr, pc}
         4d2f0:	e24cb004 	sub	fp, ip, #4	; 0x4
         4d2f4:	e24b1020 	sub	r1, fp, #32	; 0x20
         4d2f8:	e51b0024 	ldr	r0, [fp, -#36]	; fField36
         4d2fc:	eb6bae4c 	bl	1b38c34 <TPCMCIA20Parser::$StartTuple(unsigned char *&)>
         4d300:	e24b1020 	sub	r1, fp, #32	; 0x20
         4d304:	e3a02001 	mov	r2, #1	; 0x1
         4d308:	e51b0024 	ldr	r0, [fp, -#36]	; fField36
         4d30c:	eb6baa1f 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4d310:	e5d07000 	ldrb	r7, [r0]
         4d314:	e24b1020 	sub	r1, fp, #32	; 0x20
         4d318:	e3a02001 	mov	r2, #1	; 0x1
         4d31c:	e51b0024 	ldr	r0, [fp, -#36]	; fField36
         4d320:	eb6baa1a 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4d324:	e5d06000 	ldrb	r6, [r0]
         4d328:	e51b0024 	ldr	r0, [fp, -#36]	; fField36
         4d32c:	e5b05004 	ldr	r5, [r0, #4]!	; fField4
         4d330:	e5950000 	ldr	r0, [r5]
         4d334:	e3800302 	orr	r0, r0, #134217728	; 0x8000000
         4d338:	e5850000 	str	r0, [r5]
         4d33c:	e5c5701c 	strb	r7, [r5, #28]	; fField28
         4d340:	e5c5601d 	strb	r6, [r5, #29]	; fField29
         4d344:	e3a00000 	mov	r0, #0	; 0x0
         4d348:	eb6f00e3 	bl	1c0d6dc <TCardFunction::$__ct(void)>
         4d34c:	e1b04000 	movs	r4, r0
         4d350:	03a010e9 	moveq	r1, #233	; 0xe9
         4d354:	02411b0a 	subeq	r1, r1, #10240	; 0x2800
         4d358:	051b0024 	ldreq	r0, [fp, -#36]	; fField36
         4d35c:	05801000 	streq	r1, [r0]
         4d360:	0a000014 	beq	4d3b8 <TPCMCIA20Parser::CisTpl_Func_Id(unsigned char *)+0xd0>
         4d364:	e5c47000 	strb	r7, [r4]
         4d368:	e5c46001 	strb	r6, [r4, #1]
         4d36c:	e51b0024 	ldr	r0, [fp, -#36]	; fField36
         4d370:	e5d00028 	ldrb	r0, [r0, #40]	; fField40
         4d374:	e5c40002 	strb	r0, [r4, #2]
         4d378:	e51b0024 	ldr	r0, [fp, -#36]	; fField36
         4d37c:	e5d00029 	ldrb	r0, [r0, #41]	; fField41
         4d380:	e5c40003 	strb	r0, [r4, #3]
         4d384:	e51b0024 	ldr	r0, [fp, -#36]	; fField36
         4d388:	e5900024 	ldr	r0, [r0, #36]	; fField36
         4d38c:	e5840004 	str	r0, [r4, #4]	; fField4
         4d390:	e1a01004 	mov	r1, r4
         4d394:	e1a00005 	mov	r0, r5
         4d398:	eb6f04da 	bl	1c0e708 <TCardPCMCIA::$AddCardFunction(TCardFunction *)>
         4d39c:	e51b0024 	ldr	r0, [fp, -#36]	; fField36
         4d3a0:	e5a04020 	str	r4, [r0, #32]!	; fField32
         4d3a4:	e3a00001 	mov	r0, #1	; 0x1
         4d3a8:	e51b1024 	ldr	r1, [fp, -#36]	; fField36
         4d3ac:	e5c1002a 	strb	r0, [r1, #42]	; fField42
         4d3b0:	e51b1024 	ldr	r1, [fp, -#36]	; fField36
         4d3b4:	e5c1002b 	strb	r0, [r1, #43]	; fField43
         4d3b8:	e51b0020 	ldr	r0, [fp, -#32]	; fField32
         4d3bc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TPCMCIA20Parser::CisTpl_Func_Ext(unsigned char *)
 * Address: 0004d3c0
 */
TPCMCIA20Parser::CisTpl_Func_Ext(unsigned char *) {
    /*
         4d3c0:	e1a0c00d 	mov	ip, sp
         4d3c4:	e92dd873 	stmdb	sp!, {r0, r1, r4, r5, r6, fp, ip, lr, pc}
         4d3c8:	e24cb004 	sub	fp, ip, #4	; 0x4
         4d3cc:	e24b101c 	sub	r1, fp, #28	; 0x1c
         4d3d0:	e51b0020 	ldr	r0, [fp, -#32]	; fField32
         4d3d4:	eb6bae16 	bl	1b38c34 <TPCMCIA20Parser::$StartTuple(unsigned char *&)>
         4d3d8:	e51b001c 	ldr	r0, [fp, -#28]	; fField28
         4d3dc:	e5d05000 	ldrb	r5, [r0]
         4d3e0:	e2802001 	add	r2, r0, #1	; 0x1
         4d3e4:	e51b0020 	ldr	r0, [fp, -#32]	; fField32
         4d3e8:	e5904004 	ldr	r4, [r0, #4]	; fField4
         4d3ec:	e5900020 	ldr	r0, [r0, #32]	; fField32
         4d3f0:	e3300000 	teq	r0, #0	; 0x0
         4d3f4:	11a01005 	movne	r1, r5
         4d3f8:	1b6f00bb 	blne	1c0d6ec <TCardFunction::$AddFuncExt(unsigned long const, unsigned char const *)>
         4d3fc:	e5d40026 	ldrb	r0, [r4, #38]
         4d400:	e3500002 	cmp	r0, #2	; 0x2
         4d404:	aa000014 	bge	4d45c <TPCMCIA20Parser::CisTpl_Func_Ext(unsigned char *)+0x9c>
         4d408:	e3550004 	cmp	r5, #4	; 0x4
         4d40c:	83a05004 	movhi	r5, #4	; 0x4
         4d410:	e1a06005 	mov	r6, r5
         4d414:	e3a05000 	mov	r5, #0	; 0x0
         4d418:	e3560000 	cmp	r6, #0	; 0x0
         4d41c:	9a00000b 	bls	4d450 <TPCMCIA20Parser::CisTpl_Func_Ext(unsigned char *)+0x90>
         4d420:	e24b101c 	sub	r1, fp, #28	; 0x1c
         4d424:	e3a02001 	mov	r2, #1	; 0x1
         4d428:	e51b0020 	ldr	r0, [fp, -#32]	; fField32
         4d42c:	eb6ba9d7 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4d430:	e5d01000 	ldrb	r1, [r0]
         4d434:	e5d40026 	ldrb	r0, [r4, #38]
         4d438:	e0840100 	add	r0, r4, r0, lsl #2
         4d43c:	e0800005 	add	r0, r0, r5
         4d440:	e5c0101e 	strb	r1, [r0, #30]	; fField30
         4d444:	e2855001 	add	r5, r5, #1	; 0x1
         4d448:	e1550006 	cmp	r5, r6
         4d44c:	3afffff3 	bcc	4d420 <TPCMCIA20Parser::CisTpl_Func_Ext(unsigned char *)+0x60>
         4d450:	e5d40026 	ldrb	r0, [r4, #38]
         4d454:	e2800001 	add	r0, r0, #1	; 0x1
         4d458:	e5c40026 	strb	r0, [r4, #38]
         4d45c:	e51b001c 	ldr	r0, [fp, -#28]	; fField28
         4d460:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TPCMCIA20Parser::JedecInfoParser(unsigned char *, unsigned char)
 * Address: 0004d464
 */
TPCMCIA20Parser::JedecInfoParser(unsigned char *, unsigned char) {
    /*
         4d464:	e1a0c00d 	mov	ip, sp
         4d468:	e92dd9f7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, fp, ip, lr, pc}
         4d46c:	e24cb004 	sub	fp, ip, #4	; 0x4
         4d470:	e51b0024 	ldr	r0, [fp, -#36]	; fField36
         4d474:	e20070ff 	and	r7, r0, #255	; 0xff
         4d478:	e24b1028 	sub	r1, fp, #40	; 0x28
         4d47c:	e51b002c 	ldr	r0, [fp, -#44]
         4d480:	eb6badeb 	bl	1b38c34 <TPCMCIA20Parser::$StartTuple(unsigned char *&)>
         4d484:	e51b002c 	ldr	r0, [fp, -#44]
         4d488:	e5900004 	ldr	r0, [r0, #4]	; fField4
         4d48c:	e5d08027 	ldrb	r8, [r0, #39]	; fField39
         4d490:	e3a05000 	mov	r5, #0	; 0x0
         4d494:	e3a06000 	mov	r6, #0	; 0x0
         4d498:	e3a04000 	mov	r4, #0	; 0x0
         4d49c:	ea00000b 	b	4d4d0 <TPCMCIA20Parser::JedecInfoParser(unsigned char *, unsigned char)+0x6c>
         4d4a0:	e51b002c 	ldr	r0, [fp, -#44]
         4d4a4:	e5900004 	ldr	r0, [r0, #4]	; fField4
         4d4a8:	e1a01004 	mov	r1, r4
         4d4ac:	eb6e1935 	bl	1bd3988 <TCardPCMCIA::$GetCardDevice(unsigned long const)>
         4d4b0:	e3300000 	teq	r0, #0	; 0x0
         4d4b4:	0a000004 	beq	4d4cc <TPCMCIA20Parser::JedecInfoParser(unsigned char *, unsigned char)+0x68>
         4d4b8:	e5900010 	ldr	r0, [r0, #16]	; fField16
         4d4bc:	e1a00080 	mov	r0, r0, lsl #1
         4d4c0:	e1370fa0 	teq	r7, r0, lsr #31
         4d4c4:	01a05004 	moveq	r5, r4
         4d4c8:	03a06001 	moveq	r6, #1	; 0x1
         4d4cc:	e2844001 	add	r4, r4, #1	; 0x1
         4d4d0:	e1540008 	cmp	r4, r8
         4d4d4:	2a000001 	bcs	4d4e0 <TPCMCIA20Parser::JedecInfoParser(unsigned char *, unsigned char)+0x7c>
         4d4d8:	e3360000 	teq	r6, #0	; 0x0
         4d4dc:	0affffef 	beq	4d4a0 <TPCMCIA20Parser::JedecInfoParser(unsigned char *, unsigned char)+0x3c>
         4d4e0:	e3360000 	teq	r6, #0	; 0x0
         4d4e4:	0a00001a 	beq	4d554 <TPCMCIA20Parser::JedecInfoParser(unsigned char *, unsigned char)+0xf0>
         4d4e8:	ea00000d 	b	4d524 <TPCMCIA20Parser::JedecInfoParser(unsigned char *, unsigned char)+0xc0>
         4d4ec:	e51b002c 	ldr	r0, [fp, -#44]
         4d4f0:	e5900004 	ldr	r0, [r0, #4]	; fField4
         4d4f4:	e1a01005 	mov	r1, r5
         4d4f8:	eb6e1922 	bl	1bd3988 <TCardPCMCIA::$GetCardDevice(unsigned long const)>
         4d4fc:	e1b04000 	movs	r4, r0
         4d500:	0a000007 	beq	4d524 <TPCMCIA20Parser::JedecInfoParser(unsigned char *, unsigned char)+0xc0>
         4d504:	e5c46015 	strb	r6, [r4, #21]
         4d508:	e24b1028 	sub	r1, fp, #40	; 0x28
         4d50c:	e3a02001 	mov	r2, #1	; 0x1
         4d510:	e51b002c 	ldr	r0, [fp, -#44]
         4d514:	eb6ba99d 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4d518:	e5d00000 	ldrb	r0, [r0]
         4d51c:	e5c40016 	strb	r0, [r4, #22]
         4d520:	e2855001 	add	r5, r5, #1	; 0x1
         4d524:	e24b102c 	sub	r1, fp, #44	; 0x2c
         4d528:	e8910003 	ldmia	r1, {r0, r1}
         4d52c:	e5902018 	ldr	r2, [r0, #24]	; fField24
         4d530:	e1520001 	cmp	r2, r1
         4d534:	9a00000a 	bls	4d564 <TPCMCIA20Parser::JedecInfoParser(unsigned char *, unsigned char)+0x100>
         4d538:	e24b1028 	sub	r1, fp, #40	; 0x28
         4d53c:	e3a02001 	mov	r2, #1	; 0x1
         4d540:	eb6ba992 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4d544:	e5d06000 	ldrb	r6, [r0]
         4d548:	e33600ff 	teq	r6, #255	; 0xff
         4d54c:	1affffe6 	bne	4d4ec <TPCMCIA20Parser::JedecInfoParser(unsigned char *, unsigned char)+0x88>
         4d550:	ea000003 	b	4d564 <TPCMCIA20Parser::JedecInfoParser(unsigned char *, unsigned char)+0x100>
         4d554:	e3e01021 	mvn	r1, #33	; 0x21
         4d558:	e2411c29 	sub	r1, r1, #10496	; 0x2900
         4d55c:	e51b002c 	ldr	r0, [fp, -#44]
         4d560:	e5801000 	str	r1, [r0]
         4d564:	e51b0028 	ldr	r0, [fp, -#40]	; fField40
         4d568:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TPCMCIA20Parser::CisTpl_Jedec_A(unsigned char *)
 * Address: 0004d56c
 */
TPCMCIA20Parser::CisTpl_Jedec_A(unsigned char *) {
    /*
         4d56c:	e3a02001 	mov	r2, #1	; 0x1
         4d570:	ea6ba995 	b	1b37bcc <TPCMCIA20Parser::$JedecInfoParser(unsigned char *, unsigned char)>
    */
}

/**
 * Symbol: TPCMCIA20Parser::CisTpl_Jedec_C(unsigned char *)
 * Address: 0004d574
 */
TPCMCIA20Parser::CisTpl_Jedec_C(unsigned char *) {
    /*
         4d574:	e3a02000 	mov	r2, #0	; 0x0
         4d578:	ea6ba993 	b	1b37bcc <TPCMCIA20Parser::$JedecInfoParser(unsigned char *, unsigned char)>
    */
}

/**
 * Symbol: TPCMCIA20Parser::CisTpl_LinkTarget(unsigned char *, unsigned char *)
 * Address: 0004d57c
 */
TPCMCIA20Parser::CisTpl_LinkTarget(unsigned char *, unsigned char *) {
    /*
         4d57c:	e5d12000 	ldrb	r2, [r1]
         4d580:	e3320013 	teq	r2, #19	; 0x13
         4d584:	05d12002 	ldreqb	r2, [r1, #2]
         4d588:	03320043 	teqeq	r2, #67	; 0x43
         4d58c:	05d12003 	ldreqb	r2, [r1, #3]
         4d590:	03320049 	teqeq	r2, #73	; 0x49
         4d594:	05d12004 	ldreqb	r2, [r1, #4]	; fField4
         4d598:	03320053 	teqeq	r2, #83	; 0x53
         4d59c:	13e0201e 	mvnne	r2, #30	; 0x1e
         4d5a0:	12422c29 	subne	r2, r2, #10496	; 0x2900
         4d5a4:	15802000 	strne	r2, [r0]
         4d5a8:	e1a00001 	mov	r0, r1
         4d5ac:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPCMCIA20Parser::SetLongLink(unsigned char *, unsigned char)
 * Address: 0004d5b0
 */
TPCMCIA20Parser::SetLongLink(unsigned char *, unsigned char) {
    /*
         4d5b0:	e1a0c00d 	mov	ip, sp
         4d5b4:	e92dd817 	stmdb	sp!, {r0, r1, r2, r4, fp, ip, lr, pc}
         4d5b8:	e24cb004 	sub	fp, ip, #4	; 0x4
         4d5bc:	e51b0014 	ldr	r0, [fp, -#20]	; fField20
         4d5c0:	e20040ff 	and	r4, r0, #255	; 0xff
         4d5c4:	e51b001c 	ldr	r0, [fp, -#28]	; fField28
         4d5c8:	e5901010 	ldr	r1, [r0, #16]	; fField16
         4d5cc:	e3110201 	tst	r1, #268435456	; 0x10000000
         4d5d0:	1a00000d 	bne	4d60c <TPCMCIA20Parser::SetLongLink(unsigned char *, unsigned char)+0x5c>
         4d5d4:	e3811202 	orr	r1, r1, #536870912	; 0x20000000
         4d5d8:	e5a01010 	str	r1, [r0, #16]!	; fField16
         4d5dc:	e3c12102 	bic	r2, r1, #-2147483648	; 0x80000000
         4d5e0:	e1821f84 	orr	r1, r2, r4, lsl #31
         4d5e4:	e51b001c 	ldr	r0, [fp, -#28]	; fField28
         4d5e8:	e5a01010 	str	r1, [r0, #16]!	; fField16
         4d5ec:	e24b1018 	sub	r1, fp, #24	; 0x18
         4d5f0:	e51b001c 	ldr	r0, [fp, -#28]	; fField28
         4d5f4:	eb6ba963 	bl	1b37b88 <TPCMCIA20Parser::$GetWord(unsigned char *&)>
         4d5f8:	e3340000 	teq	r4, #0	; 0x0
         4d5fc:	11a00080 	movne	r0, r0, lsl #1
         4d600:	e51b101c 	ldr	r1, [fp, -#28]	; fField28
         4d604:	e5a1000c 	str	r0, [r1, #12]!
         4d608:	ea000002 	b	4d618 <TPCMCIA20Parser::SetLongLink(unsigned char *, unsigned char)+0x68>
         4d60c:	e3e01f47 	mvn	r1, #284	; 0x11c
         4d610:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
         4d614:	e5801000 	str	r1, [r0]
         4d618:	e51b0018 	ldr	r0, [fp, -#24]	; fField24
         4d61c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TPCMCIA20Parser::CisTpl_LongLink_A(unsigned char *)
 * Address: 0004d620
 */
TPCMCIA20Parser::CisTpl_LongLink_A(unsigned char *) {
    /*
         4d620:	e1a0c00d 	mov	ip, sp
         4d624:	e92dd803 	stmdb	sp!, {r0, r1, fp, ip, lr, pc}
         4d628:	e24cb004 	sub	fp, ip, #4	; 0x4
         4d62c:	e24b1010 	sub	r1, fp, #16	; 0x10
         4d630:	e51b0014 	ldr	r0, [fp, -#20]	; fField20
         4d634:	eb6bad7e 	bl	1b38c34 <TPCMCIA20Parser::$StartTuple(unsigned char *&)>
         4d638:	e3a02001 	mov	r2, #1	; 0x1
         4d63c:	e24b1014 	sub	r1, fp, #20	; 0x14
         4d640:	e8910003 	ldmia	r1, {r0, r1}
         4d644:	eb6bad79 	bl	1b38c30 <TPCMCIA20Parser::$SetLongLink(unsigned char *, unsigned char)>
         4d648:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TPCMCIA20Parser::pow(unsigned long, unsigned long)
 * Address: 0004d64c
 */
TPCMCIA20Parser::pow(unsigned long, unsigned long) {
    /*
         4d64c:	e3a00001 	mov	r0, #1	; 0x1
         4d650:	e3a03000 	mov	r3, #0	; 0x0
         4d654:	e3520000 	cmp	r2, #0	; 0x0
         4d658:	91a0f00e 	movls	pc, lr
         4d65c:	e0000091 	mul	r0, r1, r0
         4d660:	e2833001 	add	r3, r3, #1	; 0x1
         4d664:	e1530002 	cmp	r3, r2
         4d668:	3afffffb 	bcc	4d65c <TPCMCIA20Parser::pow(unsigned long, unsigned long)+0x10>
         4d66c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPCMCIA20Parser::CisTpl_LongLink_C(unsigned char *)
 * Address: 0004d670
 */
TPCMCIA20Parser::CisTpl_LongLink_C(unsigned char *) {
    /*
         4d670:	e1a0c00d 	mov	ip, sp
         4d674:	e92dd803 	stmdb	sp!, {r0, r1, fp, ip, lr, pc}
         4d678:	e24cb004 	sub	fp, ip, #4	; 0x4
         4d67c:	e24b1010 	sub	r1, fp, #16	; 0x10
         4d680:	e51b0014 	ldr	r0, [fp, -#20]	; fField20
         4d684:	eb6bad6a 	bl	1b38c34 <TPCMCIA20Parser::$StartTuple(unsigned char *&)>
         4d688:	e3a02000 	mov	r2, #0	; 0x0
         4d68c:	e24b1014 	sub	r1, fp, #20	; 0x14
         4d690:	e8910003 	ldmia	r1, {r0, r1}
         4d694:	eb6bad65 	bl	1b38c30 <TPCMCIA20Parser::$SetLongLink(unsigned char *, unsigned char)>
         4d698:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TPCMCIA20Parser::CisTpl_No_Link(unsigned char *)
 * Address: 0004d69c
 */
TPCMCIA20Parser::CisTpl_No_Link(unsigned char *) {
    /*
         4d69c:	e1a0c00d 	mov	ip, sp
         4d6a0:	e92dd803 	stmdb	sp!, {r0, r1, fp, ip, lr, pc}
         4d6a4:	e24cb004 	sub	fp, ip, #4	; 0x4
         4d6a8:	e24b1010 	sub	r1, fp, #16	; 0x10
         4d6ac:	e51b0014 	ldr	r0, [fp, -#20]	; fField20
         4d6b0:	eb6bad5f 	bl	1b38c34 <TPCMCIA20Parser::$StartTuple(unsigned char *&)>
         4d6b4:	e51b0014 	ldr	r0, [fp, -#20]	; fField20
         4d6b8:	e5901010 	ldr	r1, [r0, #16]	; fField16
         4d6bc:	e3110202 	tst	r1, #536870912	; 0x20000000
         4d6c0:	13e0101d 	mvnne	r1, #29	; 0x1d
         4d6c4:	12411c29 	subne	r1, r1, #10496	; 0x2900
         4d6c8:	15801000 	strne	r1, [r0]
         4d6cc:	03811201 	orreq	r1, r1, #268435456	; 0x10000000
         4d6d0:	05a01010 	streq	r1, [r0, #16]!	; fField16
         4d6d4:	e51b0010 	ldr	r0, [fp, -#16]	; fField16
         4d6d8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TPCMCIA20Parser::CisTpl_Null(unsigned char *)
 * Address: 0004d6dc
 */
TPCMCIA20Parser::CisTpl_Null(unsigned char *) {
    /*
         4d6dc:	e5d0201c 	ldrb	r2, [r0, #28]	; fField28
         4d6e0:	e2422001 	sub	r2, r2, #1	; 0x1
         4d6e4:	e5c0201c 	strb	r2, [r0, #28]	; fField28
         4d6e8:	e5d0201e 	ldrb	r2, [r0, #30]	; fField30
         4d6ec:	e2822001 	add	r2, r2, #1	; 0x1
         4d6f0:	e5c0201e 	strb	r2, [r0, #30]	; fField30
         4d6f4:	e1a00001 	mov	r0, r1
         4d6f8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPCMCIA20Parser::CisTpl_Vendor_Unique(unsigned char *)
 * Address: 0004d6fc
 */
TPCMCIA20Parser::CisTpl_Vendor_Unique(unsigned char *) {
    /*
         4d6fc:	e1a0c00d 	mov	ip, sp
         4d700:	e92dd8f3 	stmdb	sp!, {r0, r1, r4, r5, r6, r7, fp, ip, lr, pc}
         4d704:	e24cb004 	sub	fp, ip, #4	; 0x4
         4d708:	e24b1020 	sub	r1, fp, #32	; 0x20
         4d70c:	e51b0024 	ldr	r0, [fp, -#36]	; fField36
         4d710:	eb6bad47 	bl	1b38c34 <TPCMCIA20Parser::$StartTuple(unsigned char *&)>
         4d714:	e24b1020 	sub	r1, fp, #32	; 0x20
         4d718:	e51b0024 	ldr	r0, [fp, -#36]	; fField36
         4d71c:	eb6ba917 	bl	1b37b80 <TPCMCIA20Parser::$GetShort(unsigned char *&)>
         4d720:	e33000c8 	teq	r0, #200	; 0xc8
         4d724:	1a000065 	bne	4d8c0 <TPCMCIA20Parser::CisTpl_Vendor_Unique(unsigned char *)+0x1c4>
         4d728:	e24b1020 	sub	r1, fp, #32	; 0x20
         4d72c:	e51b0024 	ldr	r0, [fp, -#36]	; fField36
         4d730:	eb6ba912 	bl	1b37b80 <TPCMCIA20Parser::$GetShort(unsigned char *&)>
         4d734:	e3300a02 	teq	r0, #8192	; 0x2000
         4d738:	1a000060 	bne	4d8c0 <TPCMCIA20Parser::CisTpl_Vendor_Unique(unsigned char *)+0x1c4>
         4d73c:	e3a00000 	mov	r0, #0	; 0x0
         4d740:	eb6dfbcc 	bl	1bcc678 <TCardPackage::$__ct(void)>
         4d744:	e1b04000 	movs	r4, r0
         4d748:	03a010e9 	moveq	r1, #233	; 0xe9
         4d74c:	02411b0a 	subeq	r1, r1, #10240	; 0x2800
         4d750:	051b0024 	ldreq	r0, [fp, -#36]	; fField36
         4d754:	05801000 	streq	r1, [r0]
         4d758:	0a000058 	beq	4d8c0 <TPCMCIA20Parser::CisTpl_Vendor_Unique(unsigned char *)+0x1c4>
         4d75c:	e24b1020 	sub	r1, fp, #32	; 0x20
         4d760:	e3a02001 	mov	r2, #1	; 0x1
         4d764:	e51b0024 	ldr	r0, [fp, -#36]	; fField36
         4d768:	eb6ba908 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4d76c:	e5d00000 	ldrb	r0, [r0]
         4d770:	e5c4000c 	strb	r0, [r4, #12]
         4d774:	e24b1020 	sub	r1, fp, #32	; 0x20
         4d778:	e3a02001 	mov	r2, #1	; 0x1
         4d77c:	e51b0024 	ldr	r0, [fp, -#36]	; fField36
         4d780:	eb6ba902 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4d784:	e5d00000 	ldrb	r0, [r0]
         4d788:	e5c4000d 	strb	r0, [r4, #13]
         4d78c:	e24b1020 	sub	r1, fp, #32	; 0x20
         4d790:	e51b0024 	ldr	r0, [fp, -#36]	; fField36
         4d794:	eb6ba8fb 	bl	1b37b88 <TPCMCIA20Parser::$GetWord(unsigned char *&)>
         4d798:	e24b1020 	sub	r1, fp, #32	; 0x20
         4d79c:	e5840000 	str	r0, [r4]
         4d7a0:	e51b0024 	ldr	r0, [fp, -#36]	; fField36
         4d7a4:	eb6ba8f7 	bl	1b37b88 <TPCMCIA20Parser::$GetWord(unsigned char *&)>
         4d7a8:	e24b1020 	sub	r1, fp, #32	; 0x20
         4d7ac:	e5840004 	str	r0, [r4, #4]	; fField4
         4d7b0:	e51b0024 	ldr	r0, [fp, -#36]	; fField36
         4d7b4:	eb6ba8f3 	bl	1b37b88 <TPCMCIA20Parser::$GetWord(unsigned char *&)>
         4d7b8:	e24b1020 	sub	r1, fp, #32	; 0x20
         4d7bc:	e5840008 	str	r0, [r4, #8]	; fField8
         4d7c0:	e3a02001 	mov	r2, #1	; 0x1
         4d7c4:	e51b0024 	ldr	r0, [fp, -#36]	; fField36
         4d7c8:	eb6ba8f0 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4d7cc:	e5d00000 	ldrb	r0, [r0]
         4d7d0:	e5c4000e 	strb	r0, [r4, #14]
         4d7d4:	e24b1020 	sub	r1, fp, #32	; 0x20
         4d7d8:	e3a02001 	mov	r2, #1	; 0x1
         4d7dc:	e51b0024 	ldr	r0, [fp, -#36]	; fField36
         4d7e0:	eb6ba8ea 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4d7e4:	e5d00000 	ldrb	r0, [r0]
         4d7e8:	e5c4000f 	strb	r0, [r4, #15]
         4d7ec:	e24b1020 	sub	r1, fp, #32	; 0x20
         4d7f0:	e3a02001 	mov	r2, #1	; 0x1
         4d7f4:	e51b0024 	ldr	r0, [fp, -#36]	; fField36
         4d7f8:	eb6ba8e4 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4d7fc:	e1a07000 	mov	r7, r0
         4d800:	e51b0020 	ldr	r0, [fp, -#32]	; fField32
         4d804:	eb6da0a9 	bl	1bb5ab0 <$strlen>
         4d808:	e51b1020 	ldr	r1, [fp, -#32]	; fField32
         4d80c:	e0800001 	add	r0, r0, r1
         4d810:	e2800001 	add	r0, r0, #1	; 0x1
         4d814:	e50b0020 	str	r0, [fp, -#32]	; fField32
         4d818:	e1a06000 	mov	r6, r0
         4d81c:	eb6da0a3 	bl	1bb5ab0 <$strlen>
         4d820:	e51b1020 	ldr	r1, [fp, -#32]	; fField32
         4d824:	e0800001 	add	r0, r0, r1
         4d828:	e2805001 	add	r5, r0, #1	; 0x1
         4d82c:	e50b5020 	str	r5, [fp, -#32]	; fField32
         4d830:	e59f0074 	ldr	r0, [pc, #74]	; 4d8ac <TPCMCIA20Parser::CisTpl_Vendor_Unique(unsigned char *)+0x1b0>
         4d834:	e5901000 	ldr	r1, [r0]
         4d838:	e1a00005 	mov	r0, r5
         4d83c:	eb6da099 	bl	1bb5aa8 <$strcmp>
         4d840:	e3300000 	teq	r0, #0	; 0x0
         4d844:	1a00001a 	bne	4d8b4 <TPCMCIA20Parser::CisTpl_Vendor_Unique(unsigned char *)+0x1b8>
         4d848:	e59f0060 	ldr	r0, [pc, #60]	; 4d8b0 <TPCMCIA20Parser::CisTpl_Vendor_Unique(unsigned char *)+0x1b4>
         4d84c:	e5901000 	ldr	r1, [r0]
         4d850:	e1a00006 	mov	r0, r6
         4d854:	eb6da093 	bl	1bb5aa8 <$strcmp>
         4d858:	e3300000 	teq	r0, #0	; 0x0
         4d85c:	1a000014 	bne	4d8b4 <TPCMCIA20Parser::CisTpl_Vendor_Unique(unsigned char *)+0x1b8>
         4d860:	e1a01007 	mov	r1, r7
         4d864:	e1a00004 	mov	r0, r4
         4d868:	eb6e3958 	bl	1bdbdd0 <TCardPackage::$SetName(char *)>
         4d86c:	e1a01006 	mov	r1, r6
         4d870:	e1a00004 	mov	r0, r4
         4d874:	eb6e3948 	bl	1bdbd9c <TCardPackage::$SetCPUType(char *)>
         4d878:	e1a01005 	mov	r1, r5
         4d87c:	e1a00004 	mov	r0, r4
         4d880:	eb6e3954 	bl	1bdbdd8 <TCardPackage::$SetOSType(char *)>
         4d884:	e51b0024 	ldr	r0, [fp, -#36]	; fField36
         4d888:	e5900004 	ldr	r0, [r0, #4]	; fField4
         4d88c:	e1a01004 	mov	r1, r4
         4d890:	eb6e03b8 	bl	1bce778 <TCardPCMCIA::$AddCardPackage(TCardPackage *)>
         4d894:	e51b0024 	ldr	r0, [fp, -#36]	; fField36
         4d898:	e5900004 	ldr	r0, [r0, #4]	; fField4
         4d89c:	e5f01029 	ldrb	r1, [r0, #41]!	; fField41
         4d8a0:	e2811001 	add	r1, r1, #1	; 0x1
         4d8a4:	e5c01000 	strb	r1, [r0]
         4d8a8:	ea000004 	b	4d8c0 <TPCMCIA20Parser::CisTpl_Vendor_Unique(unsigned char *)+0x1c4>
         4d8ac:	0c100974 	ldceq	9, cr0, [r0], -#464
         4d8b0:	0c100978 	ldceq	9, cr0, [r0], -#480
         4d8b4:	e1a00004 	mov	r0, r4
         4d8b8:	e3a01001 	mov	r1, #1	; 0x1
         4d8bc:	eb6dff8e 	bl	1bcd6fc <TCardPackage::$__dt(void)>
         4d8c0:	e3a00000 	mov	r0, #0	; 0x0
         4d8c4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TPCMCIA20Parser::CisTpl_Vers_1(unsigned char *&)
 * Address: 0004d8c8
 */
TPCMCIA20Parser::CisTpl_Vers_1(unsigned char *&) {
    /*
         4d8c8:	e1a0c00d 	mov	ip, sp
         4d8cc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         4d8d0:	e24cb004 	sub	fp, ip, #4	; 0x4
         4d8d4:	e1a05000 	mov	r5, r0
         4d8d8:	e1a04001 	mov	r4, r1
         4d8dc:	eb6bacd4 	bl	1b38c34 <TPCMCIA20Parser::$StartTuple(unsigned char *&)>
         4d8e0:	e1a01004 	mov	r1, r4
         4d8e4:	e1a00005 	mov	r0, r5
         4d8e8:	e3a02001 	mov	r2, #1	; 0x1
         4d8ec:	eb6ba8a7 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4d8f0:	e5d01000 	ldrb	r1, [r0]
         4d8f4:	e5950004 	ldr	r0, [r5, #4]	; fField4
         4d8f8:	e5c010dd 	strb	r1, [r0, #221]
         4d8fc:	e1a01004 	mov	r1, r4
         4d900:	e1a00005 	mov	r0, r5
         4d904:	e3a02001 	mov	r2, #1	; 0x1
         4d908:	eb6ba8a0 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4d90c:	e5d00000 	ldrb	r0, [r0]
         4d910:	e5951004 	ldr	r1, [r5, #4]	; fField4
         4d914:	e5c100de 	strb	r0, [r1, #222]
         4d918:	e5940000 	ldr	r0, [r4]
         4d91c:	e2800001 	add	r0, r0, #1	; 0x1
         4d920:	e5840000 	str	r0, [r4]
         4d924:	e1a01000 	mov	r1, r0
         4d928:	e5952018 	ldr	r2, [r5, #24]	; fField24
         4d92c:	e1520000 	cmp	r2, r0
         4d930:	9a000039 	bls	4da1c <TPCMCIA20Parser::CisTpl_Vers_1(unsigned char *&)+0x154>
         4d934:	e5d10000 	ldrb	r0, [r1]
         4d938:	e33000ff 	teq	r0, #255	; 0xff
         4d93c:	0a000036 	beq	4da1c <TPCMCIA20Parser::CisTpl_Vers_1(unsigned char *&)+0x154>
         4d940:	e5950004 	ldr	r0, [r5, #4]	; fField4
         4d944:	eb6e350a 	bl	1bdad74 <TCardPCMCIA::$SetCardManufacturer(char *)>
         4d948:	e1a06004 	mov	r6, r4
         4d94c:	e5940000 	ldr	r0, [r4]
         4d950:	eb6da056 	bl	1bb5ab0 <$strlen>
         4d954:	e5961000 	ldr	r1, [r6]
         4d958:	e0800001 	add	r0, r0, r1
         4d95c:	e2801001 	add	r1, r0, #1	; 0x1
         4d960:	e5861000 	str	r1, [r6]
         4d964:	e5952018 	ldr	r2, [r5, #24]	; fField24
         4d968:	e1520001 	cmp	r2, r1
         4d96c:	9a00002a 	bls	4da1c <TPCMCIA20Parser::CisTpl_Vers_1(unsigned char *&)+0x154>
         4d970:	e5d10000 	ldrb	r0, [r1]
         4d974:	e33000ff 	teq	r0, #255	; 0xff
         4d978:	0a000027 	beq	4da1c <TPCMCIA20Parser::CisTpl_Vers_1(unsigned char *&)+0x154>
         4d97c:	e5950004 	ldr	r0, [r5, #4]	; fField4
         4d980:	eb6e34fc 	bl	1bdad78 <TCardPCMCIA::$SetCardProduct(char *)>
         4d984:	e1a06004 	mov	r6, r4
         4d988:	e5940000 	ldr	r0, [r4]
         4d98c:	eb6da047 	bl	1bb5ab0 <$strlen>
         4d990:	e5961000 	ldr	r1, [r6]
         4d994:	e0800001 	add	r0, r0, r1
         4d998:	e2800001 	add	r0, r0, #1	; 0x1
         4d99c:	e5860000 	str	r0, [r6]
         4d9a0:	e1a01000 	mov	r1, r0
         4d9a4:	e5952018 	ldr	r2, [r5, #24]	; fField24
         4d9a8:	e1520000 	cmp	r2, r0
         4d9ac:	9a00001a 	bls	4da1c <TPCMCIA20Parser::CisTpl_Vers_1(unsigned char *&)+0x154>
         4d9b0:	e5d10000 	ldrb	r0, [r1]
         4d9b4:	e33000ff 	teq	r0, #255	; 0xff
         4d9b8:	0a000017 	beq	4da1c <TPCMCIA20Parser::CisTpl_Vers_1(unsigned char *&)+0x154>
         4d9bc:	e5950004 	ldr	r0, [r5, #4]	; fField4
         4d9c0:	eb6e38ee 	bl	1bdbd80 <TCardPCMCIA::$SetCardV1String3(char *)>
         4d9c4:	e1a06004 	mov	r6, r4
         4d9c8:	e5940000 	ldr	r0, [r4]
         4d9cc:	eb6da037 	bl	1bb5ab0 <$strlen>
         4d9d0:	e5961000 	ldr	r1, [r6]
         4d9d4:	e0800001 	add	r0, r0, r1
         4d9d8:	e2801001 	add	r1, r0, #1	; 0x1
         4d9dc:	e5861000 	str	r1, [r6]
         4d9e0:	e5952018 	ldr	r2, [r5, #24]	; fField24
         4d9e4:	e1520001 	cmp	r2, r1
         4d9e8:	9a00000b 	bls	4da1c <TPCMCIA20Parser::CisTpl_Vers_1(unsigned char *&)+0x154>
         4d9ec:	e5d10000 	ldrb	r0, [r1]
         4d9f0:	e33000ff 	teq	r0, #255	; 0xff
         4d9f4:	0a000008 	beq	4da1c <TPCMCIA20Parser::CisTpl_Vers_1(unsigned char *&)+0x154>
         4d9f8:	e5b50004 	ldr	r0, [r5, #4]!	; fField4
         4d9fc:	eb6e38e0 	bl	1bdbd84 <TCardPCMCIA::$SetCardV1String4(char *)>
         4da00:	e1a05004 	mov	r5, r4
         4da04:	e5940000 	ldr	r0, [r4]
         4da08:	eb6da028 	bl	1bb5ab0 <$strlen>
         4da0c:	e5951000 	ldr	r1, [r5]
         4da10:	e0800001 	add	r0, r0, r1
         4da14:	e2800001 	add	r0, r0, #1	; 0x1
         4da18:	e5850000 	str	r0, [r5]
         4da1c:	e5940000 	ldr	r0, [r4]
         4da20:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TPCMCIA20Parser::CisTpl_Vers_2(unsigned char *)
 * Address: 0004da24
 */
TPCMCIA20Parser::CisTpl_Vers_2(unsigned char *) {
    /*
         4da24:	e1a0c00d 	mov	ip, sp
         4da28:	e92dd803 	stmdb	sp!, {r0, r1, fp, ip, lr, pc}
         4da2c:	e24cb004 	sub	fp, ip, #4	; 0x4
         4da30:	e24b1010 	sub	r1, fp, #16	; 0x10
         4da34:	e51b0014 	ldr	r0, [fp, -#20]	; fField20
         4da38:	eb6bac7d 	bl	1b38c34 <TPCMCIA20Parser::$StartTuple(unsigned char *&)>
         4da3c:	e24b1010 	sub	r1, fp, #16	; 0x10
         4da40:	e3a02001 	mov	r2, #1	; 0x1
         4da44:	e51b0014 	ldr	r0, [fp, -#20]	; fField20
         4da48:	eb6ba850 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4da4c:	e24b1010 	sub	r1, fp, #16	; 0x10
         4da50:	e3a02001 	mov	r2, #1	; 0x1
         4da54:	e51b0014 	ldr	r0, [fp, -#20]	; fField20
         4da58:	eb6ba84c 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4da5c:	e24b1010 	sub	r1, fp, #16	; 0x10
         4da60:	e51b0014 	ldr	r0, [fp, -#20]	; fField20
         4da64:	eb6ba845 	bl	1b37b80 <TPCMCIA20Parser::$GetShort(unsigned char *&)>
         4da68:	e51b1014 	ldr	r1, [fp, -#20]	; fField20
         4da6c:	e5911004 	ldr	r1, [r1, #4]	; fField4
         4da70:	e5a1000c 	str	r0, [r1, #12]!
         4da74:	e24b1010 	sub	r1, fp, #16	; 0x10
         4da78:	e51b0014 	ldr	r0, [fp, -#20]	; fField20
         4da7c:	eb6ba83f 	bl	1b37b80 <TPCMCIA20Parser::$GetShort(unsigned char *&)>
         4da80:	e24b1010 	sub	r1, fp, #16	; 0x10
         4da84:	e3a02001 	mov	r2, #1	; 0x1
         4da88:	e51b0014 	ldr	r0, [fp, -#20]	; fField20
         4da8c:	eb6ba83f 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4da90:	e5d00000 	ldrb	r0, [r0]
         4da94:	e51b1014 	ldr	r1, [fp, -#20]	; fField20
         4da98:	e5911004 	ldr	r1, [r1, #4]	; fField4
         4da9c:	e5c1002c 	strb	r0, [r1, #44]
         4daa0:	e24b1010 	sub	r1, fp, #16	; 0x10
         4daa4:	e3a02001 	mov	r2, #1	; 0x1
         4daa8:	e51b0014 	ldr	r0, [fp, -#20]	; fField20
         4daac:	eb6ba837 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4dab0:	e5d00000 	ldrb	r0, [r0]
         4dab4:	e51b1014 	ldr	r1, [fp, -#20]	; fField20
         4dab8:	e5911004 	ldr	r1, [r1, #4]	; fField4
         4dabc:	e5c1002d 	strb	r0, [r1, #45]
         4dac0:	e24b1010 	sub	r1, fp, #16	; 0x10
         4dac4:	e3a02001 	mov	r2, #1	; 0x1
         4dac8:	e51b0014 	ldr	r0, [fp, -#20]	; fField20
         4dacc:	eb6ba82f 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4dad0:	e24b1010 	sub	r1, fp, #16	; 0x10
         4dad4:	e3a02001 	mov	r2, #1	; 0x1
         4dad8:	e51b0014 	ldr	r0, [fp, -#20]	; fField20
         4dadc:	eb6ba82b 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4dae0:	e1a01000 	mov	r1, r0
         4dae4:	e51b0014 	ldr	r0, [fp, -#20]	; fField20
         4dae8:	e5900004 	ldr	r0, [r0, #4]	; fField4
         4daec:	eb6e38a6 	bl	1bdbd8c <TCardPCMCIA::$SetCardV2Vendor(char *)>
         4daf0:	e51b0010 	ldr	r0, [fp, -#16]	; fField16
         4daf4:	eb6d9fed 	bl	1bb5ab0 <$strlen>
         4daf8:	e51b1010 	ldr	r1, [fp, -#16]	; fField16
         4dafc:	e0800001 	add	r0, r0, r1
         4db00:	e50b0010 	str	r0, [fp, -#16]	; fField16
         4db04:	e24b1010 	sub	r1, fp, #16	; 0x10
         4db08:	e3a02001 	mov	r2, #1	; 0x1
         4db0c:	e51b0014 	ldr	r0, [fp, -#20]	; fField20
         4db10:	eb6ba81e 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4db14:	e1a01000 	mov	r1, r0
         4db18:	e51b0014 	ldr	r0, [fp, -#20]	; fField20
         4db1c:	e5900004 	ldr	r0, [r0, #4]	; fField4
         4db20:	eb6e3898 	bl	1bdbd88 <TCardPCMCIA::$SetCardV2Info(char *)>
         4db24:	e51b0010 	ldr	r0, [fp, -#16]	; fField16
         4db28:	eb6d9fe0 	bl	1bb5ab0 <$strlen>
         4db2c:	e51b1010 	ldr	r1, [fp, -#16]	; fField16
         4db30:	e0800001 	add	r0, r0, r1
         4db34:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)
 * Address: 0004db38
 */
TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char) {
    /*
         4db38:	e1a0c00d 	mov	ip, sp
         4db3c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         4db40:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         4db44:	e24cb014 	sub	fp, ip, #20	; 0x14
         4db48:	e59b0014 	ldr	r0, [fp, #20]	; fField20
         4db4c:	e20030ff 	and	r3, r0, #255	; 0xff
         4db50:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         4db54:	e5d0101c 	ldrb	r1, [r0, #28]	; fField28
         4db58:	e2811001 	add	r1, r1, #1	; 0x1
         4db5c:	e5c0101c 	strb	r1, [r0, #28]	; fField28
         4db60:	e59b1008 	ldr	r1, [fp, #8]	; fField8
         4db64:	e5d12000 	ldrb	r2, [r1]
         4db68:	e352001d 	cmp	r2, #29	; 0x1d
         4db6c:	0a000041 	beq	4dc78 <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x140>
         4db70:	e3a00000 	mov	r0, #0	; 0x0
         4db74:	ca000022 	bgt	4dc04 <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0xcc>
         4db78:	e352001c 	cmp	r2, #28	; 0x1c
         4db7c:	908ff102 	addls	pc, pc, r2, lsl #2
         4db80:	ea000084 	b	4dd98 <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x260>
         4db84:	ea000076 	b	4dd64 <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x22c>
         4db88:	ea000053 	b	4dcdc <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x1a4>
         4db8c:	ea000081 	b	4dd98 <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x260>
         4db90:	ea000080 	b	4dd98 <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x260>
         4db94:	ea00007f 	b	4dd98 <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x260>
         4db98:	ea00007e 	b	4dd98 <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x260>
         4db9c:	ea00007d 	b	4dd98 <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x260>
         4dba0:	ea00007c 	b	4dd98 <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x260>
         4dba4:	ea00007b 	b	4dd98 <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x260>
         4dba8:	ea00007a 	b	4dd98 <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x260>
         4dbac:	ea000079 	b	4dd98 <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x260>
         4dbb0:	ea000078 	b	4dd98 <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x260>
         4dbb4:	ea000077 	b	4dd98 <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x260>
         4dbb8:	ea000076 	b	4dd98 <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x260>
         4dbbc:	ea000075 	b	4dd98 <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x260>
         4dbc0:	ea000074 	b	4dd98 <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x260>
         4dbc4:	ea00003a 	b	4dcb4 <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x17c>
         4dbc8:	ea00005c 	b	4dd40 <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x208>
         4dbcc:	ea00005e 	b	4dd4c <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x214>
         4dbd0:	ea000056 	b	4dd30 <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x1f8>
         4dbd4:	ea00005f 	b	4dd58 <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x220>
         4dbd8:	ea000067 	b	4dd7c <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x244>
         4dbdc:	ea000025 	b	4dc78 <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x140>
         4dbe0:	ea000040 	b	4dce8 <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x1b0>
         4dbe4:	ea00004e 	b	4dd24 <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x1ec>
         4dbe8:	ea00004a 	b	4dd18 <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x1e0>
         4dbec:	ea000037 	b	4dcd0 <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x198>
         4dbf0:	ea00002c 	b	4dca8 <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x170>
         4dbf4:	e3a03001 	mov	r3, #1	; 0x1
         4dbf8:	e3a02000 	mov	r2, #0	; 0x0
         4dbfc:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         4dc00:	ea00001f 	b	4dc84 <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x14c>
         4dc04:	e3520042 	cmp	r2, #66	; 0x42
         4dc08:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         4dc0c:	ca000012 	bgt	4dc5c <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x124>
         4dc10:	e3520021 	cmp	r2, #33	; 0x21
         4dc14:	0a000039 	beq	4dd00 <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x1c8>
         4dc18:	ca000008 	bgt	4dc40 <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x108>
         4dc1c:	e332001e 	teq	r2, #30	; 0x1e
         4dc20:	0a000033 	beq	4dcf4 <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x1bc>
         4dc24:	e332001f 	teq	r2, #31	; 0x1f
         4dc28:	0a000012 	beq	4dc78 <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x140>
         4dc2c:	e3320020 	teq	r2, #32	; 0x20
         4dc30:	1a000058 	bne	4dd98 <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x260>
         4dc34:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         4dc38:	eb6ba3b8 	bl	1b36b20 <TPCMCIA20Parser::$CisTpl_Manuf_Id(unsigned char *)>
         4dc3c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         4dc40:	e3320022 	teq	r2, #34	; 0x22
         4dc44:	0a000030 	beq	4dd0c <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x1d4>
         4dc48:	e3320040 	teq	r2, #64	; 0x40
         4dc4c:	0a00004e 	beq	4dd8c <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x254>
         4dc50:	e3320041 	teq	r2, #65	; 0x41
         4dc54:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         4dc58:	ea00004e 	b	4dd98 <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x260>
         4dc5c:	e3520046 	cmp	r2, #70	; 0x46
         4dc60:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         4dc64:	ca000008 	bgt	4dc8c <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x154>
         4dc68:	e3320043 	teq	r2, #67	; 0x43
         4dc6c:	13320044 	teqne	r2, #68	; 0x44
         4dc70:	13320045 	teqne	r2, #69	; 0x45
         4dc74:	1a000047 	bne	4dd98 <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x260>
         4dc78:	e3a03001 	mov	r3, #1	; 0x1
         4dc7c:	e3a02001 	mov	r2, #1	; 0x1
         4dc80:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         4dc84:	eb6ba3af 	bl	1b36b48 <TPCMCIA20Parser::$DeviceParser(unsigned char *, unsigned char, unsigned char)>
         4dc88:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         4dc8c:	e332008e 	teq	r2, #142	; 0x8e
         4dc90:	0a000036 	beq	4dd70 <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x238>
         4dc94:	e33200ff 	teq	r2, #255	; 0xff
         4dc98:	1a00003e 	bne	4dd98 <TPCMCIA20Parser::ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)+0x260>
         4dc9c:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         4dca0:	eb6ba396 	bl	1b36b00 <TPCMCIA20Parser::$CisTpl_End(unsigned char *)>
         4dca4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         4dca8:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         4dcac:	eb6b9f8d 	bl	1b35ae8 <TPCMCIA20Parser::$CisTpl_CE(unsigned char *)>
         4dcb0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         4dcb4:	e92d0008 	stmdb	sp!, {r3}
         4dcb8:	e59b0010 	ldr	r0, [fp, #16]	; fField16
         4dcbc:	e59b200c 	ldr	r2, [fp, #12]
         4dcc0:	e0403002 	sub	r3, r0, r2
         4dcc4:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         4dcc8:	eb6b9f87 	bl	1b35aec <TPCMCIA20Parser::$CisTpl_Checksum(unsigned char *, unsigned char *, unsigned long, unsigned char)>
         4dccc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         4dcd0:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         4dcd4:	eb6b9f85 	bl	1b35af0 <TPCMCIA20Parser::$CisTpl_Conf(unsigned char *)>
         4dcd8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         4dcdc:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         4dce0:	eb6b9f83 	bl	1b35af4 <TPCMCIA20Parser::$CisTpl_Device(unsigned char *)>
         4dce4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         4dce8:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         4dcec:	eb6b9f81 	bl	1b35af8 <TPCMCIA20Parser::$CisTpl_Device_A(unsigned char *)>
         4dcf0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         4dcf4:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         4dcf8:	eb6b9f7f 	bl	1b35afc <TPCMCIA20Parser::$CisTpl_Device_GEO(unsigned char *)>
         4dcfc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         4dd00:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         4dd04:	eb6ba37f 	bl	1b36b08 <TPCMCIA20Parser::$CisTpl_Func_Id(unsigned char *)>
         4dd08:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         4dd0c:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         4dd10:	eb6ba37b 	bl	1b36b04 <TPCMCIA20Parser::$CisTpl_Func_Ext(unsigned char *)>
         4dd14:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         4dd18:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         4dd1c:	eb6ba37a 	bl	1b36b0c <TPCMCIA20Parser::$CisTpl_Jedec_A(unsigned char *)>
         4dd20:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         4dd24:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         4dd28:	eb6ba378 	bl	1b36b10 <TPCMCIA20Parser::$CisTpl_Jedec_C(unsigned char *)>
         4dd2c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         4dd30:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         4dd34:	e59b2010 	ldr	r2, [fp, #16]	; fField16
         4dd38:	eb6ba375 	bl	1b36b14 <TPCMCIA20Parser::$CisTpl_LinkTarget(unsigned char *, unsigned char *)>
         4dd3c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         4dd40:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         4dd44:	eb6ba373 	bl	1b36b18 <TPCMCIA20Parser::$CisTpl_LongLink_A(unsigned char *)>
         4dd48:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         4dd4c:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         4dd50:	eb6ba371 	bl	1b36b1c <TPCMCIA20Parser::$CisTpl_LongLink_C(unsigned char *)>
         4dd54:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         4dd58:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         4dd5c:	eb6ba370 	bl	1b36b24 <TPCMCIA20Parser::$CisTpl_No_Link(unsigned char *)>
         4dd60:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         4dd64:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         4dd68:	eb6ba36e 	bl	1b36b28 <TPCMCIA20Parser::$CisTpl_Null(unsigned char *)>
         4dd6c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         4dd70:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         4dd74:	eb6ba36c 	bl	1b36b2c <TPCMCIA20Parser::$CisTpl_Vendor_Unique(unsigned char *)>
         4dd78:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         4dd7c:	e28b1008 	add	r1, fp, #8	; 0x8
         4dd80:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         4dd84:	eb6ba369 	bl	1b36b30 <TPCMCIA20Parser::$CisTpl_Vers_1(unsigned char *&)>
         4dd88:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         4dd8c:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         4dd90:	eb6ba367 	bl	1b36b34 <TPCMCIA20Parser::$CisTpl_Vers_2(unsigned char *)>
         4dd94:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         4dd98:	e3e02f46 	mvn	r2, #280	; 0x118
         4dd9c:	e2422b0a 	sub	r2, r2, #10240	; 0x2800
         4dda0:	e59b1004 	ldr	r1, [fp, #4]	; fField4
         4dda4:	e5812000 	str	r2, [r1]
         4dda8:	e59b1004 	ldr	r1, [fp, #4]	; fField4
         4ddac:	e5911004 	ldr	r1, [r1, #4]	; fField4
         4ddb0:	e5f1202a 	ldrb	r2, [r1, #42]!	; fField42
         4ddb4:	e2822001 	add	r2, r2, #1	; 0x1
         4ddb8:	e5c12000 	strb	r2, [r1]
         4ddbc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TPCMCIA20Parser::ProcessCIS(unsigned char *, unsigned char *)
 * Address: 0004ddc0
 */
TPCMCIA20Parser::ProcessCIS(unsigned char *, unsigned char *) {
    /*
         4ddc0:	e1a0c00d 	mov	ip, sp
         4ddc4:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         4ddc8:	e24cb004 	sub	fp, ip, #4	; 0x4
         4ddcc:	e1a04000 	mov	r4, r0
         4ddd0:	e1a05001 	mov	r5, r1
         4ddd4:	e24ddf52 	sub	sp, sp, #328	; 0x148
         4ddd8:	e1a0000d 	mov	r0, sp
         4dddc:	eb6ebc0e 	bl	1bfce1c <TCardCISIterator::$__ct(void)>
         4dde0:	e1a0000d 	mov	r0, sp
         4dde4:	e5941008 	ldr	r1, [r4, #8]	; fField8
         4dde8:	eb6ebc0e 	bl	1bfce28 <TCardCISIterator::$Init(TCardSocket *)>
         4ddec:	e1b06000 	movs	r6, r0
         4ddf0:	0a000004 	beq	4de08 <TPCMCIA20Parser::ProcessCIS(unsigned char *, unsigned char *)+0x48>
         4ddf4:	e5846000 	str	r6, [r4]
         4ddf8:	e5940004 	ldr	r0, [r4, #4]	; fField4
         4ddfc:	e5901000 	ldr	r1, [r0]
         4de00:	e3811101 	orr	r1, r1, #1073741824	; 0x40000000
         4de04:	e5801000 	str	r1, [r0]
         4de08:	e3a07000 	mov	r7, #0	; 0x0
         4de0c:	ea000053 	b	4df60 <TPCMCIA20Parser::ProcessCIS(unsigned char *, unsigned char *)+0x1a0>
         4de10:	e3570000 	cmp	r7, #0	; 0x0
         4de14:	9a00000f 	bls	4de58 <TPCMCIA20Parser::ProcessCIS(unsigned char *, unsigned char *)+0x98>
         4de18:	e1a01007 	mov	r1, r7
         4de1c:	e1a0000d 	mov	r0, sp
         4de20:	eb6efe2b 	bl	1c0d6d4 <TCardCISIterator::$SelectCIS(unsigned long)>
         4de24:	e5940004 	ldr	r0, [r4, #4]	; fField4
         4de28:	eb6f0237 	bl	1c0e70c <TCardPCMCIA::$AddFuncSpecificCIS(void)>
         4de2c:	e1a06000 	mov	r6, r0
         4de30:	e1a01007 	mov	r1, r7
         4de34:	e5940004 	ldr	r0, [r4, #4]	; fField4
         4de38:	eb6efe2d 	bl	1c0d6f4 <TCardPCMCIA::$GetCardCIS(unsigned long const)>
         4de3c:	e3360000 	teq	r6, #0	; 0x0
         4de40:	e5840004 	str	r0, [r4, #4]	; fField4
         4de44:	1a00004a 	bne	4df74 <TPCMCIA20Parser::ProcessCIS(unsigned char *, unsigned char *)+0x1b4>
         4de48:	e3300000 	teq	r0, #0	; 0x0
         4de4c:	0a000048 	beq	4df74 <TPCMCIA20Parser::ProcessCIS(unsigned char *, unsigned char *)+0x1b4>
         4de50:	e1a00004 	mov	r0, r4
         4de54:	eb6bab6c 	bl	1b38c0c <TPCMCIA20Parser::$Reset(void)>
         4de58:	e3a09001 	mov	r9, #1	; 0x1
         4de5c:	e3a08000 	mov	r8, #0	; 0x0
         4de60:	ea00003a 	b	4df50 <TPCMCIA20Parser::ProcessCIS(unsigned char *, unsigned char *)+0x190>
         4de64:	e1a01009 	mov	r1, r9
         4de68:	e1a0000d 	mov	r0, sp
         4de6c:	eb6ebbef 	bl	1bfce30 <TCardCISIterator::$GetTuple(unsigned char)>
         4de70:	e1b06000 	movs	r6, r0
         4de74:	1a00002f 	bne	4df38 <TPCMCIA20Parser::ProcessCIS(unsigned char *, unsigned char *)+0x178>
         4de78:	e3a09000 	mov	r9, #0	; 0x0
         4de7c:	e28d1048 	add	r1, sp, #72	; 0x48
         4de80:	e1a0000d 	mov	r0, sp
         4de84:	e3a02c01 	mov	r2, #256	; 0x100
         4de88:	eb6ebbea 	bl	1bfce38 <TCardCISIterator::$GetTupleData(unsigned char *, unsigned long)>
         4de8c:	e1b06000 	movs	r6, r0
         4de90:	1a00002e 	bne	4df50 <TPCMCIA20Parser::ProcessCIS(unsigned char *, unsigned char *)+0x190>
         4de94:	e1a0000d 	mov	r0, sp
         4de98:	eb6efe0c 	bl	1c0d6d0 <TCardCISIterator::$GetStatus(void)>
         4de9c:	e3100010 	tst	r0, #16	; 0x10
         4dea0:	051ba02c 	ldreq	sl, [fp, -#44]
         4dea4:	11a0a005 	movne	sl, r5
         4dea8:	e1a0000d 	mov	r0, sp
         4deac:	eb6efe07 	bl	1c0d6d0 <TCardCISIterator::$GetStatus(void)>
         4deb0:	e2003010 	and	r3, r0, #16	; 0x10
         4deb4:	e92d0008 	stmdb	sp!, {r3}
         4deb8:	e1a0200a 	mov	r2, sl
         4debc:	e59d3010 	ldr	r3, [sp, #16]	; fField16
         4dec0:	e28d104c 	add	r1, sp, #76	; 0x4c
         4dec4:	e1a00004 	mov	r0, r4
         4dec8:	eb6ba748 	bl	1b37bf0 <TPCMCIA20Parser::$ProcessTuple(unsigned char *, unsigned char *, unsigned char *, unsigned char)>
         4decc:	e28dd004 	add	sp, sp, #4	; 0x4
         4ded0:	e5940000 	ldr	r0, [r4]
         4ded4:	e3300000 	teq	r0, #0	; 0x0
         4ded8:	1a000005 	bne	4def4 <TPCMCIA20Parser::ProcessCIS(unsigned char *, unsigned char *)+0x134>
         4dedc:	e5d4001e 	ldrb	r0, [r4, #30]	; fField30
         4dee0:	e3500080 	cmp	r0, #128	; 0x80
         4dee4:	d5d4001c 	ldrleb	r0, [r4, #28]	; fField28
         4dee8:	d3500028 	cmple	r0, #40	; 0x28
         4deec:	da000017 	ble	4df50 <TPCMCIA20Parser::ProcessCIS(unsigned char *, unsigned char *)+0x190>
         4def0:	ea00000e 	b	4df30 <TPCMCIA20Parser::ProcessCIS(unsigned char *, unsigned char *)+0x170>
         4def4:	e280cc29 	add	ip, r0, #10496	; 0x2900
         4def8:	e37c0019 	cmn	ip, #25	; 0x19
         4defc:	1a000007 	bne	4df20 <TPCMCIA20Parser::ProcessCIS(unsigned char *, unsigned char *)+0x160>
         4df00:	e5940004 	ldr	r0, [r4, #4]	; fField4
         4df04:	e5d0102a 	ldrb	r1, [r0, #42]	; fField42
         4df08:	e3510010 	cmp	r1, #16	; 0x10
         4df0c:	a5901000 	ldrge	r1, [r0]
         4df10:	a3811201 	orrge	r1, r1, #268435456	; 0x10000000
         4df14:	a5801000 	strge	r1, [r0]
         4df18:	aa000004 	bge	4df30 <TPCMCIA20Parser::ProcessCIS(unsigned char *, unsigned char *)+0x170>
         4df1c:	ea00000b 	b	4df50 <TPCMCIA20Parser::ProcessCIS(unsigned char *, unsigned char *)+0x190>
         4df20:	e280cc29 	add	ip, r0, #10496	; 0x2900
         4df24:	e37c001c 	cmn	ip, #28	; 0x1c
         4df28:	0a000008 	beq	4df50 <TPCMCIA20Parser::ProcessCIS(unsigned char *, unsigned char *)+0x190>
         4df2c:	e1a06000 	mov	r6, r0
         4df30:	e3a08001 	mov	r8, #1	; 0x1
         4df34:	ea000005 	b	4df50 <TPCMCIA20Parser::ProcessCIS(unsigned char *, unsigned char *)+0x190>
         4df38:	e286cc29 	add	ip, r6, #10496	; 0x2900
         4df3c:	e37c0024 	cmn	ip, #36	; 0x24
         4df40:	1a000002 	bne	4df50 <TPCMCIA20Parser::ProcessCIS(unsigned char *, unsigned char *)+0x190>
         4df44:	e3390000 	teq	r9, #0	; 0x0
         4df48:	03a06000 	moveq	r6, #0	; 0x0
         4df4c:	ea000002 	b	4df5c <TPCMCIA20Parser::ProcessCIS(unsigned char *, unsigned char *)+0x19c>
         4df50:	e3360000 	teq	r6, #0	; 0x0
         4df54:	03380000 	teqeq	r8, #0	; 0x0
         4df58:	0affffc1 	beq	4de64 <TPCMCIA20Parser::ProcessCIS(unsigned char *, unsigned char *)+0xa4>
         4df5c:	e2877001 	add	r7, r7, #1	; 0x1
         4df60:	e3360000 	teq	r6, #0	; 0x0
         4df64:	1a000002 	bne	4df74 <TPCMCIA20Parser::ProcessCIS(unsigned char *, unsigned char *)+0x1b4>
         4df68:	e5dd0010 	ldrb	r0, [sp, #16]	; fField16
         4df6c:	e1500007 	cmp	r0, r7
         4df70:	8affffa6 	bhi	4de10 <TPCMCIA20Parser::ProcessCIS(unsigned char *, unsigned char *)+0x50>
         4df74:	e1a0000d 	mov	r0, sp
         4df78:	e3a01000 	mov	r1, #0	; 0x0
         4df7c:	eb6ebba7 	bl	1bfce20 <TCardCISIterator::$__dt(void)>
         4df80:	e1a00006 	mov	r0, r6
         4df84:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TPCMCIA20Parser::ValidateCIS(unsigned char *, unsigned char *, TCardPCMCIA *, TCardSocket *)
 * Address: 0004df88
 */
TPCMCIA20Parser::ValidateCIS(unsigned char *, unsigned char *, TCardPCMCIA *, TCardSocket *) {
    /*
         4df88:	e1a0c00d 	mov	ip, sp
         4df8c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         4df90:	e24cb004 	sub	fp, ip, #4	; 0x4
         4df94:	e1a04000 	mov	r4, r0
         4df98:	e1a07001 	mov	r7, r1
         4df9c:	e1a05002 	mov	r5, r2
         4dfa0:	e1a06003 	mov	r6, r3
         4dfa4:	e3a08000 	mov	r8, #0	; 0x0
         4dfa8:	e5d20000 	ldrb	r0, [r2]
         4dfac:	e3300003 	teq	r0, #3	; 0x3
         4dfb0:	05d50001 	ldreqb	r0, [r5, #1]
         4dfb4:	03300003 	teqeq	r0, #3	; 0x3
         4dfb8:	05d50002 	ldreqb	r0, [r5, #2]
         4dfbc:	03300001 	teqeq	r0, #1	; 0x1
         4dfc0:	05d50003 	ldreqb	r0, [r5, #3]
         4dfc4:	03300001 	teqeq	r0, #1	; 0x1
         4dfc8:	05d70001 	ldreqb	r0, [r7, #1]
         4dfcc:	03300003 	teqeq	r0, #3	; 0x3
         4dfd0:	05d70003 	ldreqb	r0, [r7, #3]
         4dfd4:	03300001 	teqeq	r0, #1	; 0x1
         4dfd8:	13a01000 	movne	r1, #0	; 0x0
         4dfdc:	03a01001 	moveq	r1, #1	; 0x1
         4dfe0:	e5940004 	ldr	r0, [r4, #4]	; fField4
         4dfe4:	e5902000 	ldr	r2, [r0]
         4dfe8:	e3c22301 	bic	r2, r2, #67108864	; 0x4000000
         4dfec:	e2011001 	and	r1, r1, #1	; 0x1
         4dff0:	e1821d01 	orr	r1, r2, r1, lsl #26
         4dff4:	e5801000 	str	r1, [r0]
         4dff8:	e3110301 	tst	r1, #67108864	; 0x4000000
         4dffc:	0a000004 	beq	4e014 <TPCMCIA20Parser::ValidateCIS(unsigned char *, unsigned char *, TCardPCMCIA *, TCardSocket *)+0x8c>
         4e000:	e5940008 	ldr	r0, [r4, #8]	; fField8
         4e004:	eb6e1668 	bl	1bd39ac <TCardSocket::$GetControl(void)>
         4e008:	e3c01010 	bic	r1, r0, #16	; 0x10
         4e00c:	e5940008 	ldr	r0, [r4, #8]	; fField8
         4e010:	eb6e3760 	bl	1bdbd98 <TCardSocket::$SetControl(unsigned long)>
         4e014:	e0870008 	add	r0, r7, r8
         4e018:	e2200003 	eor	r0, r0, #3	; 0x3
         4e01c:	eb6e05ec 	bl	1bcf7d4 <$CardAttrMemReadByte(void *)>
         4e020:	e1a01000 	mov	r1, r0
         4e024:	e2888002 	add	r8, r8, #2	; 0x2
         4e028:	e3580010 	cmp	r8, #16	; 0x10
         4e02c:	2a000001 	bcs	4e038 <TPCMCIA20Parser::ValidateCIS(unsigned char *, unsigned char *, TCardPCMCIA *, TCardSocket *)+0xb0>
         4e030:	e3310000 	teq	r1, #0	; 0x0
         4e034:	0afffff6 	beq	4e014 <TPCMCIA20Parser::ValidateCIS(unsigned char *, unsigned char *, TCardPCMCIA *, TCardSocket *)+0x8c>
         4e038:	e2480002 	sub	r0, r8, #2	; 0x2
         4e03c:	e3310000 	teq	r1, #0	; 0x0
         4e040:	03e00f49 	mvneq	r0, #292	; 0x124
         4e044:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
         4e048:	05840000 	streq	r0, [r4]
         4e04c:	0a000025 	beq	4e0e8 <TPCMCIA20Parser::ValidateCIS(unsigned char *, unsigned char *, TCardPCMCIA *, TCardSocket *)+0x160>
         4e050:	e3a09000 	mov	r9, #0	; 0x0
         4e054:	e3e08025 	mvn	r8, #37	; 0x25
         4e058:	e2488c29 	sub	r8, r8, #10496	; 0x2900
         4e05c:	e3310001 	teq	r1, #1	; 0x1
         4e060:	0a000016 	beq	4e0c0 <TPCMCIA20Parser::ValidateCIS(unsigned char *, unsigned char *, TCardPCMCIA *, TCardSocket *)+0x138>
         4e064:	e33100ff 	teq	r1, #255	; 0xff
         4e068:	15848000 	strne	r8, [r4]
         4e06c:	1a00001d 	bne	4e0e8 <TPCMCIA20Parser::ValidateCIS(unsigned char *, unsigned char *, TCardPCMCIA *, TCardSocket *)+0x160>
         4e070:	e5960000 	ldr	r0, [r6]
         4e074:	e3800102 	orr	r0, r0, #-2147483648	; 0x80000000
         4e078:	e5860000 	str	r0, [r6]
         4e07c:	e24ddc01 	sub	sp, sp, #256	; 0x100
         4e080:	e1a0200d 	mov	r2, sp
         4e084:	e1a01005 	mov	r1, r5
         4e088:	e1a00004 	mov	r0, r4
         4e08c:	e3a03000 	mov	r3, #0	; 0x0
         4e090:	eb6ba6bb 	bl	1b37b84 <TPCMCIA20Parser::$GetTuple(unsigned char *, unsigned char *, unsigned char)>
         4e094:	e1a02005 	mov	r2, r5
         4e098:	e1a0100d 	mov	r1, sp
         4e09c:	e1a00004 	mov	r0, r4
         4e0a0:	eb6ba29b 	bl	1b36b14 <TPCMCIA20Parser::$CisTpl_LinkTarget(unsigned char *, unsigned char *)>
         4e0a4:	e5940000 	ldr	r0, [r4]
         4e0a8:	e3300000 	teq	r0, #0	; 0x0
         4e0ac:	13e00023 	mvnne	r0, #35	; 0x23
         4e0b0:	12400c29 	subne	r0, r0, #10496	; 0x2900
         4e0b4:	15840000 	strne	r0, [r4]
         4e0b8:	e28ddc01 	add	sp, sp, #256	; 0x100
         4e0bc:	ea000006 	b	4e0dc <TPCMCIA20Parser::ValidateCIS(unsigned char *, unsigned char *, TCardPCMCIA *, TCardSocket *)+0x154>
         4e0c0:	e0870000 	add	r0, r7, r0
         4e0c4:	e2800002 	add	r0, r0, #2	; 0x2
         4e0c8:	e2200003 	eor	r0, r0, #3	; 0x3
         4e0cc:	eb6e05c0 	bl	1bcf7d4 <$CardAttrMemReadByte(void *)>
         4e0d0:	e3300000 	teq	r0, #0	; 0x0
         4e0d4:	15849000 	strne	r9, [r4]
         4e0d8:	05848000 	streq	r8, [r4]
         4e0dc:	e5940000 	ldr	r0, [r4]
         4e0e0:	e3300000 	teq	r0, #0	; 0x0
         4e0e4:	0a000002 	beq	4e0f4 <TPCMCIA20Parser::ValidateCIS(unsigned char *, unsigned char *, TCardPCMCIA *, TCardSocket *)+0x16c>
         4e0e8:	e5960000 	ldr	r0, [r6]
         4e0ec:	e3800101 	orr	r0, r0, #1073741824	; 0x40000000
         4e0f0:	e5860000 	str	r0, [r6]
         4e0f4:	e5940000 	ldr	r0, [r4]
         4e0f8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TPCMCIA20Parser::GetBits(unsigned long, unsigned long, unsigned long)
 * Address: 0004e0fc
 */
TPCMCIA20Parser::GetBits(unsigned long, unsigned long, unsigned long) {
    /*
         4e0fc:	e262001f 	rsb	r0, r2, #31	; 0x1f
         4e100:	e1a00011 	mov	r0, r1, lsl r0
         4e104:	e2631020 	rsb	r1, r3, #32	; 0x20
         4e108:	e1a00130 	mov	r0, r0, lsr r1
         4e10c:	e20000ff 	and	r0, r0, #255	; 0xff
         4e110:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPCMCIA20Parser::ParsePCCardCIS(unsigned char *, unsigned char *, TCardPCMCIA *, TCardSocket *)
 * Address: 0004e114
 */
TPCMCIA20Parser::ParsePCCardCIS(unsigned char *, unsigned char *, TCardPCMCIA *, TCardSocket *) {
    /*
         4e114:	e1a0c00d 	mov	ip, sp
         4e118:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         4e11c:	e24cb004 	sub	fp, ip, #4	; 0x4
         4e120:	e1a04000 	mov	r4, r0
         4e124:	e1a07001 	mov	r7, r1
         4e128:	e1a06002 	mov	r6, r2
         4e12c:	e1a05003 	mov	r5, r3
         4e130:	e3a00000 	mov	r0, #0	; 0x0
         4e134:	e59b8004 	ldr	r8, [fp, #4]	; fField4
         4e138:	e52d0070 	str	r0, [sp, -#112]!
         4e13c:	e28d0008 	add	r0, sp, #8	; 0x8
         4e140:	eb6d920b 	bl	1bb2974 <$setjmp>
         4e144:	e3300000 	teq	r0, #0	; 0x0
         4e148:	1a000019 	bne	4e1b4 <TPCMCIA20Parser::ParsePCCardCIS(unsigned char *, unsigned char *, TCardPCMCIA *, TCardSocket *)+0xa0>
         4e14c:	e1a0000d 	mov	r0, sp
         4e150:	eb6e47c9 	bl	1be007c <$AddExceptionHandler>
         4e154:	e1a00005 	mov	r0, r5
         4e158:	e9840120 	stmib	r4, {r5, r8}
         4e15c:	eb6e09a9 	bl	1bd0808 <TCardPCMCIA::$Clear(void)>
         4e160:	e1a00004 	mov	r0, r4
         4e164:	eb6baaa8 	bl	1b38c0c <TPCMCIA20Parser::$Reset(void)>
         4e168:	e58d006c 	str	r0, [sp, #108]
         4e16c:	e3300000 	teq	r0, #0	; 0x0
         4e170:	1a00002d 	bne	4e22c <TPCMCIA20Parser::ParsePCCardCIS(unsigned char *, unsigned char *, TCardPCMCIA *, TCardSocket *)+0x118>
         4e174:	e1a03008 	mov	r3, r8
         4e178:	e92d0008 	stmdb	sp!, {r3}
         4e17c:	e1a03005 	mov	r3, r5
         4e180:	e1a02006 	mov	r2, r6
         4e184:	e1a01007 	mov	r1, r7
         4e188:	e1a00004 	mov	r0, r4
         4e18c:	eb6baaaa 	bl	1b38c3c <TPCMCIA20Parser::$ValidateCIS(unsigned char *, unsigned char *, TCardPCMCIA *, TCardSocket *)>
         4e190:	e28dd004 	add	sp, sp, #4	; 0x4
         4e194:	e58d006c 	str	r0, [sp, #108]
         4e198:	e3300000 	teq	r0, #0	; 0x0
         4e19c:	1a000022 	bne	4e22c <TPCMCIA20Parser::ParsePCCardCIS(unsigned char *, unsigned char *, TCardPCMCIA *, TCardSocket *)+0x118>
         4e1a0:	e1a02006 	mov	r2, r6
         4e1a4:	e1a01007 	mov	r1, r7
         4e1a8:	e1a00004 	mov	r0, r4
         4e1ac:	eb6ba68e 	bl	1b37bec <TPCMCIA20Parser::$ProcessCIS(unsigned char *, unsigned char *)>
         4e1b0:	ea000015 	b	4e20c <TPCMCIA20Parser::ParsePCCardCIS(unsigned char *, unsigned char *, TCardPCMCIA *, TCardSocket *)+0xf8>
         4e1b4:	e59d0060 	ldr	r0, [sp, #96]
         4e1b8:	e59f1054 	ldr	r1, [pc, #54]	; 4e214 <TPCMCIA20Parser::ParsePCCardCIS(unsigned char *, unsigned char *, TCardPCMCIA *, TCardSocket *)+0x100>
         4e1bc:	e5911000 	ldr	r1, [r1]
         4e1c0:	eb6e53f3 	bl	1be3194 <$Subexception>
         4e1c4:	e3300000 	teq	r0, #0	; 0x0
         4e1c8:	13a000b4 	movne	r0, #180	; 0xb4
         4e1cc:	12400b0a 	subne	r0, r0, #10240	; 0x2800
         4e1d0:	1a00000d 	bne	4e20c <TPCMCIA20Parser::ParsePCCardCIS(unsigned char *, unsigned char *, TCardPCMCIA *, TCardSocket *)+0xf8>
         4e1d4:	e59d0060 	ldr	r0, [sp, #96]
         4e1d8:	e59f1038 	ldr	r1, [pc, #38]	; 4e218 <TPCMCIA20Parser::ParsePCCardCIS(unsigned char *, unsigned char *, TCardPCMCIA *, TCardSocket *)+0x104>
         4e1dc:	e5911000 	ldr	r1, [r1]
         4e1e0:	eb6e53eb 	bl	1be3194 <$Subexception>
         4e1e4:	e3300000 	teq	r0, #0	; 0x0
         4e1e8:	159f002c 	ldrne	r0, [pc, #2c]	; 4e21c <TPCMCIA20Parser::ParsePCCardCIS(unsigned char *, unsigned char *, TCardPCMCIA *, TCardSocket *)+0x108>
         4e1ec:	1a000006 	bne	4e20c <TPCMCIA20Parser::ParsePCCardCIS(unsigned char *, unsigned char *, TCardPCMCIA *, TCardSocket *)+0xf8>
         4e1f0:	e59d0060 	ldr	r0, [sp, #96]
         4e1f4:	e28f1f09 	add	r1, pc, #36	; 0x24
         4e1f8:	eb6e53e5 	bl	1be3194 <$Subexception>
         4e1fc:	e3300000 	teq	r0, #0	; 0x0
         4e200:	0a000007 	beq	4e224 <TPCMCIA20Parser::ParsePCCardCIS(unsigned char *, unsigned char *, TCardPCMCIA *, TCardSocket *)+0x110>
         4e204:	e3a000b5 	mov	r0, #181	; 0xb5
         4e208:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
         4e20c:	e58d006c 	str	r0, [sp, #108]
         4e210:	ea000005 	b	4e22c <TPCMCIA20Parser::ParsePCCardCIS(unsigned char *, unsigned char *, TCardPCMCIA *, TCardSocket *)+0x118>
         4e214:	003712c4 	eoreqs	r1, r7, r4, asr #5
         4e218:	003712c8 	eoreqs	r1, r7, r8, asr #5
         4e21c:	ffffd8af 	swinv	0x00ffd8af
         4e220:	00000000 	andeq	r0, r0, r0
         4e224:	e1a0000d 	mov	r0, sp
         4e228:	eb6e4fc9 	bl	1be2154 <$NextHandler>
         4e22c:	e1a0000d 	mov	r0, sp
         4e230:	eb6e4ba0 	bl	1be10b8 <$ExitHandler>
         4e234:	e5bd006c 	ldr	r0, [sp, #108]!
         4e238:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TPCMCIA20Parser::ParsePCCardCIS(TCardPCMCIA *, TCardSocket *)
 * Address: 0004e23c
 */
TPCMCIA20Parser::ParsePCCardCIS(TCardPCMCIA *, TCardSocket *) {
    /*
         4e23c:	e1a0c00d 	mov	ip, sp
         4e240:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         4e244:	e24cb004 	sub	fp, ip, #4	; 0x4
         4e248:	e1a06000 	mov	r6, r0
         4e24c:	e1a07001 	mov	r7, r1
         4e250:	e1a04002 	mov	r4, r2
         4e254:	e1a03002 	mov	r3, r2
         4e258:	e92d0008 	stmdb	sp!, {r3}
         4e25c:	e1a00002 	mov	r0, r2
         4e260:	eb6e0972 	bl	1bd0830 <TCardSocket::$CommonMemBaseAddr(void)>
         4e264:	e1a05000 	mov	r5, r0
         4e268:	e1a00004 	mov	r0, r4
         4e26c:	eb6e054f 	bl	1bcf7b0 <TCardSocket::$AttributeMemBaseAddr(void)>
         4e270:	e1a01000 	mov	r1, r0
         4e274:	e1a03007 	mov	r3, r7
         4e278:	e1a00006 	mov	r0, r6
         4e27c:	e1a02005 	mov	r2, r5
         4e280:	eb6ebf0f 	bl	1bfdec4 <TPCMCIA20Parser::$ParsePCCardCIS(unsigned char *, unsigned char *, TCardPCMCIA *, TCardSocket *)>
         4e284:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TPCMCIA20Parser::Version(void)
 * Address: 0004e288
 */
TPCMCIA20Parser::Version(void) {
    /*
         4e288:	e3a00c02 	mov	r0, #512	; 0x200
         4e28c:	e2800802 	add	r0, r0, #131072	; 0x20000
         4e290:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPCMCIA20Parser::GetShort(unsigned char *&)
 * Address: 0004e294
 */
TPCMCIA20Parser::GetShort(unsigned char *&) {
    /*
         4e294:	e1a0c00d 	mov	ip, sp
         4e298:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         4e29c:	e24cb004 	sub	fp, ip, #4	; 0x4
         4e2a0:	e5912000 	ldr	r2, [r1]
         4e2a4:	e5d23001 	ldrb	r3, [r2, #1]
         4e2a8:	e5d22002 	ldrb	r2, [r2, #2]
         4e2ac:	e0832402 	add	r2, r3, r2, lsl #8
         4e2b0:	e1a04802 	mov	r4, r2, lsl #16
         4e2b4:	e1a04844 	mov	r4, r4, asr #16
         4e2b8:	e3a02002 	mov	r2, #2	; 0x2
         4e2bc:	eb6ba633 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4e2c0:	e1a00004 	mov	r0, r4
         4e2c4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TPCMCIA20Parser::GetWord(unsigned char *&)
 * Address: 0004e2c8
 */
TPCMCIA20Parser::GetWord(unsigned char *&) {
    /*
         4e2c8:	e1a0c00d 	mov	ip, sp
         4e2cc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         4e2d0:	e24cb004 	sub	fp, ip, #4	; 0x4
         4e2d4:	e5912000 	ldr	r2, [r1]
         4e2d8:	e5d23001 	ldrb	r3, [r2, #1]
         4e2dc:	e5d2c002 	ldrb	ip, [r2, #2]
         4e2e0:	e083c40c 	add	ip, r3, ip, lsl #8
         4e2e4:	e5d23003 	ldrb	r3, [r2, #3]
         4e2e8:	e08c3803 	add	r3, ip, r3, lsl #16
         4e2ec:	e5d22004 	ldrb	r2, [r2, #4]	; fField4
         4e2f0:	e0834c02 	add	r4, r3, r2, lsl #24
         4e2f4:	e3a02004 	mov	r2, #4	; 0x4
         4e2f8:	eb6ba624 	bl	1b37b90 <TPCMCIA20Parser::$IncrAddr(unsigned char *&, unsigned long)>
         4e2fc:	e1a00004 	mov	r0, r4
         4e300:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TPCMCIA20Parser::GetTuple(unsigned char *, unsigned char *, unsigned char)
 * Address: 0004e304
 */
TPCMCIA20Parser::GetTuple(unsigned char *, unsigned char *, unsigned char) {
    /*
         4e304:	e1a0c00d 	mov	ip, sp
         4e308:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         4e30c:	e24cb004 	sub	fp, ip, #4	; 0x4
         4e310:	e1a04001 	mov	r4, r1
         4e314:	e1a05002 	mov	r5, r2
         4e318:	e20310ff 	and	r1, r3, #255	; 0xff
         4e31c:	e3510000 	cmp	r1, #0	; 0x0
         4e320:	03a07001 	moveq	r7, #1	; 0x1
         4e324:	13a07002 	movne	r7, #2	; 0x2
         4e328:	1a00000f 	bne	4e36c <TPCMCIA20Parser::GetTuple(unsigned char *, unsigned char *, unsigned char)+0x68>
         4e32c:	e5900004 	ldr	r0, [r0, #4]	; fField4
         4e330:	e5900000 	ldr	r0, [r0]
         4e334:	e3100301 	tst	r0, #67108864	; 0x4000000
         4e338:	0a00000b 	beq	4e36c <TPCMCIA20Parser::GetTuple(unsigned char *, unsigned char *, unsigned char)+0x68>
         4e33c:	e3a00000 	mov	r0, #0	; 0x0
         4e340:	e0842000 	add	r2, r4, r0
         4e344:	e3c21003 	bic	r1, r2, #3	; 0x3
         4e348:	e5911000 	ldr	r1, [r1]
         4e34c:	e2022003 	and	r2, r2, #3	; 0x3
         4e350:	e1a02182 	mov	r2, r2, lsl #3
         4e354:	e1a01231 	mov	r1, r1, lsr r2
         4e358:	e7c51000 	strb	r1, [r5, r0]
         4e35c:	e2800001 	add	r0, r0, #1	; 0x1
         4e360:	e3500c01 	cmp	r0, #256	; 0x100
         4e364:	3afffff5 	bcc	4e340 <TPCMCIA20Parser::GetTuple(unsigned char *, unsigned char *, unsigned char)+0x3c>
         4e368:	ea000007 	b	4e38c <TPCMCIA20Parser::GetTuple(unsigned char *, unsigned char *, unsigned char)+0x88>
         4e36c:	e3a06000 	mov	r6, #0	; 0x0
         4e370:	e0204697 	mla	r0, r7, r6, r4
         4e374:	e2200003 	eor	r0, r0, #3	; 0x3
         4e378:	eb6e0515 	bl	1bcf7d4 <$CardAttrMemReadByte(void *)>
         4e37c:	e7c50006 	strb	r0, [r5, r6]
         4e380:	e2866001 	add	r6, r6, #1	; 0x1
         4e384:	e3560c01 	cmp	r6, #256	; 0x100
         4e388:	3afffff8 	bcc	4e370 <TPCMCIA20Parser::GetTuple(unsigned char *, unsigned char *, unsigned char)+0x6c>
         4e38c:	e5d50000 	ldrb	r0, [r5]
         4e390:	e3300000 	teq	r0, #0	; 0x0
         4e394:	00844007 	addeq	r4, r4, r7
         4e398:	0a000005 	beq	4e3b4 <TPCMCIA20Parser::GetTuple(unsigned char *, unsigned char *, unsigned char)+0xb0>
         4e39c:	e5d51001 	ldrb	r1, [r5, #1]
         4e3a0:	e33100ff 	teq	r1, #255	; 0xff
         4e3a4:	133000ff 	teqne	r0, #255	; 0xff
         4e3a8:	03a04000 	moveq	r4, #0	; 0x0
         4e3ac:	12810002 	addne	r0, r1, #2	; 0x2
         4e3b0:	10244097 	mlane	r4, r7, r0, r4
         4e3b4:	e1a00004 	mov	r0, r4
         4e3b8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TPCMCIA20Parser::IncrAddr(unsigned char *&, unsigned long)
 * Address: 0004e3bc
 */
TPCMCIA20Parser::IncrAddr(unsigned char *&, unsigned long) {
    /*
         4e3bc:	e591c000 	ldr	ip, [r1]
         4e3c0:	e08c2002 	add	r2, ip, r2
         4e3c4:	e5812000 	str	r2, [r1]
         4e3c8:	e5903018 	ldr	r3, [r0, #24]	; fField24
         4e3cc:	e1530002 	cmp	r3, r2
         4e3d0:	33e0201b 	mvncc	r2, #27	; 0x1b
         4e3d4:	32422c29 	subcc	r2, r2, #10496	; 0x2900
         4e3d8:	35802000 	strcc	r2, [r0]
         4e3dc:	e5910000 	ldr	r0, [r1]
         4e3e0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPCMCIA20Parser::StartTuple(unsigned char *&)
 * Address: 0004e3e4
 */
TPCMCIA20Parser::StartTuple(unsigned char *&) {
    /*
         4e3e4:	e5912000 	ldr	r2, [r1]
         4e3e8:	e2822001 	add	r2, r2, #1	; 0x1
         4e3ec:	e5812000 	str	r2, [r1]
         4e3f0:	e5d23000 	ldrb	r3, [r2]
         4e3f4:	e33300ff 	teq	r3, #255	; 0xff
         4e3f8:	03a030fe 	moveq	r3, #254	; 0xfe
         4e3fc:	e0832002 	add	r2, r3, r2
         4e400:	e5a02018 	str	r2, [r0, #24]!	; fField24
         4e404:	e5910000 	ldr	r0, [r1]
         4e408:	e1a0f00e 	mov	pc, lr
    */
}

