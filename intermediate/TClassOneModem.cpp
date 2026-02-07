#include "include/TClassOneModem.h"

/**
 * Symbol: TClassOneModem::C2ParsePhoneNum(unsigned char *, unsigned char *)
 * Address: 0005cd1c
 */
TClassOneModem::C2ParsePhoneNum(unsigned char *, unsigned char *) {
    /*
         5cd1c:	e1a03001 	mov	r3, r1
         5cd20:	ea000000 	b	5cd28 <TClassOneModem::C2ParsePhoneNum(unsigned char *, unsigned char *)+0xc>
         5cd24:	e2822001 	add	r2, r2, #1	; 0x1
         5cd28:	e5d20000 	ldrb	r0, [r2]
         5cd2c:	e3300000 	teq	r0, #0	; 0x0
         5cd30:	0a000002 	beq	5cd40 <TClassOneModem::C2ParsePhoneNum(unsigned char *, unsigned char *)+0x24>
         5cd34:	e3300022 	teq	r0, #34	; 0x22
         5cd38:	1afffff9 	bne	5cd24 <TClassOneModem::C2ParsePhoneNum(unsigned char *, unsigned char *)+0x8>
         5cd3c:	e2822001 	add	r2, r2, #1	; 0x1
         5cd40:	e3a00015 	mov	r0, #21	; 0x15
         5cd44:	ea000000 	b	5cd4c <TClassOneModem::C2ParsePhoneNum(unsigned char *, unsigned char *)+0x30>
         5cd48:	e2822001 	add	r2, r2, #1	; 0x1
         5cd4c:	e5d2c000 	ldrb	ip, [r2]
         5cd50:	e33c0000 	teq	ip, #0	; 0x0
         5cd54:	0a000010 	beq	5cd9c <TClassOneModem::C2ParsePhoneNum(unsigned char *, unsigned char *)+0x80>
         5cd58:	e33c0020 	teq	ip, #32	; 0x20
         5cd5c:	1a000006 	bne	5cd7c <TClassOneModem::C2ParsePhoneNum(unsigned char *, unsigned char *)+0x60>
         5cd60:	e2400001 	sub	r0, r0, #1	; 0x1
         5cd64:	e1a00800 	mov	r0, r0, lsl #16
         5cd68:	e1b00820 	movs	r0, r0, lsr #16
         5cd6c:	1afffff5 	bne	5cd48 <TClassOneModem::C2ParsePhoneNum(unsigned char *, unsigned char *)+0x2c>
         5cd70:	ea000005 	b	5cd8c <TClassOneModem::C2ParsePhoneNum(unsigned char *, unsigned char *)+0x70>
         5cd74:	e4d2c001 	ldrb	ip, [r2], #1
         5cd78:	e4c1c001 	strb	ip, [r1], #1
         5cd7c:	e5d2c000 	ldrb	ip, [r2]
         5cd80:	e33c0000 	teq	ip, #0	; 0x0
         5cd84:	133c0022 	teqne	ip, #34	; 0x22
         5cd88:	0a000003 	beq	5cd9c <TClassOneModem::C2ParsePhoneNum(unsigned char *, unsigned char *)+0x80>
         5cd8c:	e2400001 	sub	r0, r0, #1	; 0x1
         5cd90:	e1a00800 	mov	r0, r0, lsl #16
         5cd94:	e1b00820 	movs	r0, r0, lsr #16
         5cd98:	1afffff5 	bne	5cd74 <TClassOneModem::C2ParsePhoneNum(unsigned char *, unsigned char *)+0x58>
         5cd9c:	e3a00000 	mov	r0, #0	; 0x0
         5cda0:	e4410001 	strb	r0, [r1], -#1
         5cda4:	e5d12000 	ldrb	r2, [r1]
         5cda8:	e3320020 	teq	r2, #32	; 0x20
         5cdac:	11a0f00e 	movne	pc, lr
         5cdb0:	e1510003 	cmp	r1, r3
         5cdb4:	2afffff9 	bcs	5cda0 <TClassOneModem::C2ParsePhoneNum(unsigned char *, unsigned char *)+0x84>
         5cdb8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TClassOneModem::C2ParseDIS(unsigned char *, FaxClass2FDIS *)
 * Address: 0005cdbc
 */
TClassOneModem::C2ParseDIS(unsigned char *, FaxClass2FDIS *) {
    /*
         5cdbc:	e1a0c00d 	mov	ip, sp
         5cdc0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         5cdc4:	e24cb004 	sub	fp, ip, #4	; 0x4
         5cdc8:	e1a04001 	mov	r4, r1
         5cdcc:	e1a05002 	mov	r5, r2
         5cdd0:	e3a06000 	mov	r6, #0	; 0x0
         5cdd4:	e5d10000 	ldrb	r0, [r1]
         5cdd8:	e3300020 	teq	r0, #32	; 0x20
         5cddc:	1a000000 	bne	5cde4 <TClassOneModem::C2ParseDIS(unsigned char *, FaxClass2FDIS *)+0x28>
         5cde0:	e2844001 	add	r4, r4, #1	; 0x1
         5cde4:	e5d40000 	ldrb	r0, [r4]
         5cde8:	e3300000 	teq	r0, #0	; 0x0
         5cdec:	0a000004 	beq	5ce04 <TClassOneModem::C2ParseDIS(unsigned char *, FaxClass2FDIS *)+0x48>
         5cdf0:	e330003a 	teq	r0, #58	; 0x3a
         5cdf4:	1afffff9 	bne	5cde0 <TClassOneModem::C2ParseDIS(unsigned char *, FaxClass2FDIS *)+0x24>
         5cdf8:	e5f40001 	ldrb	r0, [r4, #1]!
         5cdfc:	e3300020 	teq	r0, #32	; 0x20
         5ce00:	02844001 	addeq	r4, r4, #1	; 0x1
         5ce04:	e1a00004 	mov	r0, r4
         5ce08:	eb6d6328 	bl	1bb5ab0 <$strlen>
         5ce0c:	e330000f 	teq	r0, #15	; 0xf
         5ce10:	159f6048 	ldrne	r6, [pc, #48]	; 5ce60 <TClassOneModem::C2ParseDIS(unsigned char *, FaxClass2FDIS *)+0xa4>
         5ce14:	1a00000f 	bne	5ce58 <TClassOneModem::C2ParseDIS(unsigned char *, FaxClass2FDIS *)+0x9c>
         5ce18:	e4d40002 	ldrb	r0, [r4], #2
         5ce1c:	e5c50000 	strb	r0, [r5]
         5ce20:	e4d40002 	ldrb	r0, [r4], #2
         5ce24:	e5c50001 	strb	r0, [r5, #1]
         5ce28:	e4d40002 	ldrb	r0, [r4], #2
         5ce2c:	e5c50002 	strb	r0, [r5, #2]
         5ce30:	e4d40002 	ldrb	r0, [r4], #2
         5ce34:	e5c50003 	strb	r0, [r5, #3]
         5ce38:	e4d40002 	ldrb	r0, [r4], #2
         5ce3c:	e5c50004 	strb	r0, [r5, #4]	; fField4
         5ce40:	e4d40002 	ldrb	r0, [r4], #2
         5ce44:	e5c50005 	strb	r0, [r5, #5]
         5ce48:	e5d40000 	ldrb	r0, [r4]
         5ce4c:	e5c50006 	strb	r0, [r5, #6]
         5ce50:	e5d40002 	ldrb	r0, [r4, #2]
         5ce54:	e5c50007 	strb	r0, [r5, #7]
         5ce58:	e1a00006 	mov	r0, r6
         5ce5c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         5ce60:	ffffa23b 	swinv	0x00ffa23b
    */
}

/**
 * Symbol: TClassOneModem::C2ParsePTS(unsigned char *, FaxClass2FPTS *)
 * Address: 0005ce64
 */
TClassOneModem::C2ParsePTS(unsigned char *, FaxClass2FPTS *) {
    /*
         5ce64:	e3a00000 	mov	r0, #0	; 0x0
         5ce68:	e5820004 	str	r0, [r2, #4]	; fField4
         5ce6c:	e5820008 	str	r0, [r2, #8]	; fField8
         5ce70:	e582000c 	str	r0, [r2, #12]	; fField12
         5ce74:	e5820010 	str	r0, [r2, #16]	; fField16
         5ce78:	ea000000 	b	5ce80 <TClassOneModem::C2ParsePTS(unsigned char *, FaxClass2FPTS *)+0x1c>
         5ce7c:	e2811001 	add	r1, r1, #1	; 0x1
         5ce80:	e5d10000 	ldrb	r0, [r1]
         5ce84:	e3300000 	teq	r0, #0	; 0x0
         5ce88:	0a000009 	beq	5ceb4 <TClassOneModem::C2ParsePTS(unsigned char *, FaxClass2FPTS *)+0x50>
         5ce8c:	e330003a 	teq	r0, #58	; 0x3a
         5ce90:	1afffff9 	bne	5ce7c <TClassOneModem::C2ParsePTS(unsigned char *, FaxClass2FPTS *)+0x18>
         5ce94:	e5f10001 	ldrb	r0, [r1, #1]!
         5ce98:	e3300000 	teq	r0, #0	; 0x0
         5ce9c:	0a000004 	beq	5ceb4 <TClassOneModem::C2ParsePTS(unsigned char *, FaxClass2FPTS *)+0x50>
         5cea0:	e3500030 	cmp	r0, #48	; 0x30
         5cea4:	bafffffa 	blt	5ce94 <TClassOneModem::C2ParsePTS(unsigned char *, FaxClass2FPTS *)+0x30>
         5cea8:	e5d10000 	ldrb	r0, [r1]
         5ceac:	e3500039 	cmp	r0, #57	; 0x39
         5ceb0:	cafffff7 	bgt	5ce94 <TClassOneModem::C2ParsePTS(unsigned char *, FaxClass2FPTS *)+0x30>
         5ceb4:	e5d10000 	ldrb	r0, [r1]
         5ceb8:	e5820000 	str	r0, [r2]
         5cebc:	e5d10000 	ldrb	r0, [r1]
         5cec0:	e3300000 	teq	r0, #0	; 0x0
         5cec4:	01a0f00e 	moveq	pc, lr
         5cec8:	e5f10001 	ldrb	r0, [r1, #1]!
         5cecc:	e3300000 	teq	r0, #0	; 0x0
         5ced0:	01a0f00e 	moveq	pc, lr
         5ced4:	e3500030 	cmp	r0, #48	; 0x30
         5ced8:	bafffffa 	blt	5cec8 <TClassOneModem::C2ParsePTS(unsigned char *, FaxClass2FPTS *)+0x64>
         5cedc:	e3500039 	cmp	r0, #57	; 0x39
         5cee0:	cafffff8 	bgt	5cec8 <TClassOneModem::C2ParsePTS(unsigned char *, FaxClass2FPTS *)+0x64>
         5cee4:	ea000005 	b	5cf00 <TClassOneModem::C2ParsePTS(unsigned char *, FaxClass2FPTS *)+0x9c>
         5cee8:	e2811001 	add	r1, r1, #1	; 0x1
         5ceec:	e2400030 	sub	r0, r0, #48	; 0x30
         5cef0:	e5923004 	ldr	r3, [r2, #4]	; fField4
         5cef4:	e0833103 	add	r3, r3, r3, lsl #2
         5cef8:	e0800083 	add	r0, r0, r3, lsl #1
         5cefc:	e5820004 	str	r0, [r2, #4]	; fField4
         5cf00:	e5d10000 	ldrb	r0, [r1]
         5cf04:	e3500030 	cmp	r0, #48	; 0x30
         5cf08:	ba000003 	blt	5cf1c <TClassOneModem::C2ParsePTS(unsigned char *, FaxClass2FPTS *)+0xb8>
         5cf0c:	e3500039 	cmp	r0, #57	; 0x39
         5cf10:	dafffff4 	ble	5cee8 <TClassOneModem::C2ParsePTS(unsigned char *, FaxClass2FPTS *)+0x84>
         5cf14:	ea000000 	b	5cf1c <TClassOneModem::C2ParsePTS(unsigned char *, FaxClass2FPTS *)+0xb8>
         5cf18:	e2811001 	add	r1, r1, #1	; 0x1
         5cf1c:	e5d10000 	ldrb	r0, [r1]
         5cf20:	e3300000 	teq	r0, #0	; 0x0
         5cf24:	01a0f00e 	moveq	pc, lr
         5cf28:	e3500030 	cmp	r0, #48	; 0x30
         5cf2c:	bafffff9 	blt	5cf18 <TClassOneModem::C2ParsePTS(unsigned char *, FaxClass2FPTS *)+0xb4>
         5cf30:	e3500039 	cmp	r0, #57	; 0x39
         5cf34:	cafffff7 	bgt	5cf18 <TClassOneModem::C2ParsePTS(unsigned char *, FaxClass2FPTS *)+0xb4>
         5cf38:	ea000005 	b	5cf54 <TClassOneModem::C2ParsePTS(unsigned char *, FaxClass2FPTS *)+0xf0>
         5cf3c:	e2811001 	add	r1, r1, #1	; 0x1
         5cf40:	e2400030 	sub	r0, r0, #48	; 0x30
         5cf44:	e5923008 	ldr	r3, [r2, #8]	; fField8
         5cf48:	e0833103 	add	r3, r3, r3, lsl #2
         5cf4c:	e0800083 	add	r0, r0, r3, lsl #1
         5cf50:	e5820008 	str	r0, [r2, #8]	; fField8
         5cf54:	e5d10000 	ldrb	r0, [r1]
         5cf58:	e3500030 	cmp	r0, #48	; 0x30
         5cf5c:	ba000003 	blt	5cf70 <TClassOneModem::C2ParsePTS(unsigned char *, FaxClass2FPTS *)+0x10c>
         5cf60:	e3500039 	cmp	r0, #57	; 0x39
         5cf64:	dafffff4 	ble	5cf3c <TClassOneModem::C2ParsePTS(unsigned char *, FaxClass2FPTS *)+0xd8>
         5cf68:	ea000000 	b	5cf70 <TClassOneModem::C2ParsePTS(unsigned char *, FaxClass2FPTS *)+0x10c>
         5cf6c:	e2811001 	add	r1, r1, #1	; 0x1
         5cf70:	e5d10000 	ldrb	r0, [r1]
         5cf74:	e3300000 	teq	r0, #0	; 0x0
         5cf78:	01a0f00e 	moveq	pc, lr
         5cf7c:	e3500030 	cmp	r0, #48	; 0x30
         5cf80:	bafffff9 	blt	5cf6c <TClassOneModem::C2ParsePTS(unsigned char *, FaxClass2FPTS *)+0x108>
         5cf84:	e3500039 	cmp	r0, #57	; 0x39
         5cf88:	cafffff7 	bgt	5cf6c <TClassOneModem::C2ParsePTS(unsigned char *, FaxClass2FPTS *)+0x108>
         5cf8c:	ea000005 	b	5cfa8 <TClassOneModem::C2ParsePTS(unsigned char *, FaxClass2FPTS *)+0x144>
         5cf90:	e2811001 	add	r1, r1, #1	; 0x1
         5cf94:	e2403030 	sub	r3, r0, #48	; 0x30
         5cf98:	e592000c 	ldr	r0, [r2, #12]	; fField12
         5cf9c:	e0800100 	add	r0, r0, r0, lsl #2
         5cfa0:	e0830080 	add	r0, r3, r0, lsl #1
         5cfa4:	e582000c 	str	r0, [r2, #12]	; fField12
         5cfa8:	e5d10000 	ldrb	r0, [r1]
         5cfac:	e3500030 	cmp	r0, #48	; 0x30
         5cfb0:	b1a0f00e 	movlt	pc, lr
         5cfb4:	e3500039 	cmp	r0, #57	; 0x39
         5cfb8:	dafffff4 	ble	5cf90 <TClassOneModem::C2ParsePTS(unsigned char *, FaxClass2FPTS *)+0x12c>
         5cfbc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TClassOneModem::ParseModemRsp(unsigned char *)
 * Address: 0005cfc0
 */
TClassOneModem::ParseModemRsp(unsigned char *) {
    /*
         5cfc0:	e1a0c00d 	mov	ip, sp
         5cfc4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         5cfc8:	e24cb004 	sub	fp, ip, #4	; 0x4
         5cfcc:	e1a04000 	mov	r4, r0
         5cfd0:	e1a05001 	mov	r5, r1
         5cfd4:	e3a0603b 	mov	r6, #59	; 0x3b
         5cfd8:	e5907ba0 	ldr	r7, [r0, #2976]
         5cfdc:	e3370000 	teq	r7, #0	; 0x0
         5cfe0:	15970000 	ldrne	r0, [r7]
         5cfe4:	13300000 	teqne	r0, #0	; 0x0
         5cfe8:	0a00000c 	beq	5d020 <TClassOneModem::ParseModemRsp(unsigned char *)+0x60>
         5cfec:	e5972004 	ldr	r2, [r7, #4]	; fField4
         5cff0:	e1a02842 	mov	r2, r2, asr #16
         5cff4:	e1a00005 	mov	r0, r5
         5cff8:	e5971000 	ldr	r1, [r7]
         5cffc:	eb6d5e92 	bl	1bb4a4c <$memcmp>
         5d000:	e3300000 	teq	r0, #0	; 0x0
         5d004:	05b76008 	ldreq	r6, [r7, #8]!	; fField8
         5d008:	0a000002 	beq	5d018 <TClassOneModem::ParseModemRsp(unsigned char *)+0x58>
         5d00c:	e5b7000c 	ldr	r0, [r7, #12]!	; fField12
         5d010:	e3300000 	teq	r0, #0	; 0x0
         5d014:	1afffff4 	bne	5cfec <TClassOneModem::ParseModemRsp(unsigned char *)+0x2c>
         5d018:	e336003b 	teq	r6, #59	; 0x3b
         5d01c:	1a00000e 	bne	5d05c <TClassOneModem::ParseModemRsp(unsigned char *)+0x9c>
         5d020:	e59f7150 	ldr	r7, [pc, #150]	; 5d178 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b8>
         5d024:	e5970000 	ldr	r0, [r7]
         5d028:	e3300000 	teq	r0, #0	; 0x0
         5d02c:	0a00000a 	beq	5d05c <TClassOneModem::ParseModemRsp(unsigned char *)+0x9c>
         5d030:	e5972004 	ldr	r2, [r7, #4]	; fField4
         5d034:	e1a02842 	mov	r2, r2, asr #16
         5d038:	e1a00005 	mov	r0, r5
         5d03c:	e5971000 	ldr	r1, [r7]
         5d040:	eb6d5e81 	bl	1bb4a4c <$memcmp>
         5d044:	e3300000 	teq	r0, #0	; 0x0
         5d048:	05b76008 	ldreq	r6, [r7, #8]!	; fField8
         5d04c:	0a000002 	beq	5d05c <TClassOneModem::ParseModemRsp(unsigned char *)+0x9c>
         5d050:	e5b7000c 	ldr	r0, [r7, #12]!	; fField12
         5d054:	e3300000 	teq	r0, #0	; 0x0
         5d058:	1afffff4 	bne	5d030 <TClassOneModem::ParseModemRsp(unsigned char *)+0x70>
         5d05c:	e2840f7e 	add	r0, r4, #504	; 0x1f8
         5d060:	e2800b01 	add	r0, r0, #1024	; 0x400
         5d064:	e356003b 	cmp	r6, #59	; 0x3b
         5d068:	908ff106 	addls	pc, pc, r6, lsl #2
         5d06c:	ea00003f 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d070:	ea00003e 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d074:	ea00003d 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d078:	ea00003c 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d07c:	ea00003b 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d080:	ea00003a 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d084:	ea000039 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d088:	ea000038 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d08c:	ea000037 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d090:	ea000036 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d094:	ea000035 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d098:	ea000034 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d09c:	ea000033 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d0a0:	ea000032 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d0a4:	ea000031 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d0a8:	ea000030 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d0ac:	ea00002f 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d0b0:	ea00002e 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d0b4:	ea00002d 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d0b8:	ea00002c 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d0bc:	ea00002b 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d0c0:	ea00002a 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d0c4:	ea00005e 	b	5d244 <TClassOneModem::ParseModemRsp(unsigned char *)+0x284>
         5d0c8:	ea00002b 	b	5d17c <TClassOneModem::ParseModemRsp(unsigned char *)+0x1bc>
         5d0cc:	ea000031 	b	5d198 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1d8>
         5d0d0:	ea000030 	b	5d198 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1d8>
         5d0d4:	ea000036 	b	5d1b4 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1f4>
         5d0d8:	ea000045 	b	5d1f4 <TClassOneModem::ParseModemRsp(unsigned char *)+0x234>
         5d0dc:	ea000062 	b	5d26c <TClassOneModem::ParseModemRsp(unsigned char *)+0x2ac>
         5d0e0:	ea000066 	b	5d280 <TClassOneModem::ParseModemRsp(unsigned char *)+0x2c0>
         5d0e4:	ea000021 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d0e8:	ea000020 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d0ec:	ea00001f 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d0f0:	ea00001e 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d0f4:	ea00001d 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d0f8:	ea00001c 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d0fc:	ea00001b 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d100:	ea000054 	b	5d258 <TClassOneModem::ParseModemRsp(unsigned char *)+0x298>
         5d104:	ea000019 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d108:	ea000018 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d10c:	ea00004c 	b	5d244 <TClassOneModem::ParseModemRsp(unsigned char *)+0x284>
         5d110:	ea000016 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d114:	ea000015 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d118:	ea000014 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d11c:	ea000013 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d120:	ea000035 	b	5d1fc <TClassOneModem::ParseModemRsp(unsigned char *)+0x23c>
         5d124:	ea000037 	b	5d208 <TClassOneModem::ParseModemRsp(unsigned char *)+0x248>
         5d128:	ea00003d 	b	5d224 <TClassOneModem::ParseModemRsp(unsigned char *)+0x264>
         5d12c:	ea00000f 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d130:	ea00000e 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d134:	ea000042 	b	5d244 <TClassOneModem::ParseModemRsp(unsigned char *)+0x284>
         5d138:	ea000041 	b	5d244 <TClassOneModem::ParseModemRsp(unsigned char *)+0x284>
         5d13c:	ea00000b 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d140:	ea00000a 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d144:	ea000009 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d148:	ea000008 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d14c:	ea000007 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d150:	ea000040 	b	5d258 <TClassOneModem::ParseModemRsp(unsigned char *)+0x298>
         5d154:	ea000005 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d158:	ea000004 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d15c:	e1a01005 	mov	r1, r5
         5d160:	e3a02027 	mov	r2, #39	; 0x27
         5d164:	eb6d6254 	bl	1bb5abc <$strncpy>
         5d168:	e3a00000 	mov	r0, #0	; 0x0
         5d16c:	e5c4061f 	strb	r0, [r4, #1567]	; fField1567
         5d170:	e5a465f4 	str	r6, [r4, #1524]!	; fField1524
         5d174:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         5d178:	003701a4 	eoreqs	r0, r7, r4, lsr #3
         5d17c:	e1a02000 	mov	r2, r0
         5d180:	e1a01005 	mov	r1, r5
         5d184:	e1a00004 	mov	r0, r4
         5d188:	eb670344 	bl	1a1dea0 <TClassOneModem::$C2ParseDIS(unsigned char *, FaxClass2FDIS *)>
         5d18c:	e3300000 	teq	r0, #0	; 0x0
         5d190:	0afffff6 	beq	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d194:	ea000028 	b	5d23c <TClassOneModem::ParseModemRsp(unsigned char *)+0x27c>
         5d198:	e1a02000 	mov	r2, r0
         5d19c:	e1a01005 	mov	r1, r5
         5d1a0:	e1a00004 	mov	r0, r4
         5d1a4:	eb67033d 	bl	1a1dea0 <TClassOneModem::$C2ParseDIS(unsigned char *, FaxClass2FDIS *)>
         5d1a8:	e3300000 	teq	r0, #0	; 0x0
         5d1ac:	0affffef 	beq	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d1b0:	ea000021 	b	5d23c <TClassOneModem::ParseModemRsp(unsigned char *)+0x27c>
         5d1b4:	e594088c 	ldr	r0, [r4, #2188]	; fField2188
         5d1b8:	e3300004 	teq	r0, #4	; 0x4
         5d1bc:	1a000004 	bne	5d1d4 <TClassOneModem::ParseModemRsp(unsigned char *)+0x214>
         5d1c0:	e5d50005 	ldrb	r0, [r5, #5]
         5d1c4:	e3300020 	teq	r0, #32	; 0x20
         5d1c8:	1a000007 	bne	5d1ec <TClassOneModem::ParseModemRsp(unsigned char *)+0x22c>
         5d1cc:	e5d50006 	ldrb	r0, [r5, #6]
         5d1d0:	ea000005 	b	5d1ec <TClassOneModem::ParseModemRsp(unsigned char *)+0x22c>
         5d1d4:	e3300008 	teq	r0, #8	; 0x8
         5d1d8:	1affffe4 	bne	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d1dc:	e3a06037 	mov	r6, #55	; 0x37
         5d1e0:	e5d50005 	ldrb	r0, [r5, #5]
         5d1e4:	e3300020 	teq	r0, #32	; 0x20
         5d1e8:	0afffff7 	beq	5d1cc <TClassOneModem::ParseModemRsp(unsigned char *)+0x20c>
         5d1ec:	e5c405f8 	strb	r0, [r4, #1528]	; fField1528
         5d1f0:	eaffffde 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d1f4:	e2850006 	add	r0, r5, #6	; 0x6
         5d1f8:	ea000000 	b	5d200 <TClassOneModem::ParseModemRsp(unsigned char *)+0x240>
         5d1fc:	e2850005 	add	r0, r5, #5	; 0x5
         5d200:	eb6d59e8 	bl	1bb39a8 <$atoi>
         5d204:	eafffff8 	b	5d1ec <TClassOneModem::ParseModemRsp(unsigned char *)+0x22c>
         5d208:	e1a02000 	mov	r2, r0
         5d20c:	e1a01005 	mov	r1, r5
         5d210:	e1a00004 	mov	r0, r4
         5d214:	eb670321 	bl	1a1dea0 <TClassOneModem::$C2ParseDIS(unsigned char *, FaxClass2FDIS *)>
         5d218:	e3300000 	teq	r0, #0	; 0x0
         5d21c:	0affffd3 	beq	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d220:	ea000005 	b	5d23c <TClassOneModem::ParseModemRsp(unsigned char *)+0x27c>
         5d224:	e1a02000 	mov	r2, r0
         5d228:	e1a01005 	mov	r1, r5
         5d22c:	e1a00004 	mov	r0, r4
         5d230:	eb67031a 	bl	1a1dea0 <TClassOneModem::$C2ParseDIS(unsigned char *, FaxClass2FDIS *)>
         5d234:	e3300000 	teq	r0, #0	; 0x0
         5d238:	0affffcc 	beq	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d23c:	e1a06000 	mov	r6, r0
         5d240:	eaffffca 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d244:	e1a01000 	mov	r1, r0
         5d248:	e1a02005 	mov	r2, r5
         5d24c:	e1a00004 	mov	r0, r4
         5d250:	eb670314 	bl	1a1dea8 <TClassOneModem::$C2ParsePhoneNum(unsigned char *, unsigned char *)>
         5d254:	eaffffc5 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d258:	e1a02000 	mov	r2, r0
         5d25c:	e1a01005 	mov	r1, r5
         5d260:	e1a00004 	mov	r0, r4
         5d264:	eb67030e 	bl	1a1dea4 <TClassOneModem::$C2ParsePTS(unsigned char *, FaxClass2FPTS *)>
         5d268:	eaffffc0 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d26c:	e594088c 	ldr	r0, [r4, #2188]	; fField2188
         5d270:	e3300008 	teq	r0, #8	; 0x8
         5d274:	1affffbd 	bne	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d278:	e3a0603a 	mov	r6, #58	; 0x3a
         5d27c:	eaffffbb 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d280:	e594088c 	ldr	r0, [r4, #2188]	; fField2188
         5d284:	e3300008 	teq	r0, #8	; 0x8
         5d288:	1affffb8 	bne	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
         5d28c:	e3a06039 	mov	r6, #57	; 0x39
         5d290:	eaffffb6 	b	5d170 <TClassOneModem::ParseModemRsp(unsigned char *)+0x1b0>
    */
}

/**
 * Symbol: TClassOneModem::__ct(unsigned long)
 * Address: 0005d294
 */
TClassOneModem::TClassOneModem(unsigned long) {
    /*
         5d294:	e1a0c00d 	mov	ip, sp
         5d298:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         5d29c:	e24cb004 	sub	fp, ip, #4	; 0x4
         5d2a0:	e1b04000 	movs	r4, r0
         5d2a4:	e1a05001 	mov	r5, r1
         5d2a8:	1a000004 	bne	5d2c0 <TClassOneModem::__ct(unsigned long)+0x2c>
         5d2ac:	e3a00fe9 	mov	r0, #932	; 0x3a4
         5d2b0:	e2800b02 	add	r0, r0, #2048	; 0x800
         5d2b4:	eb6dc51f 	bl	1bce738 <$__nw(unsigned int)>
         5d2b8:	e1b04000 	movs	r4, r0
         5d2bc:	0a000050 	beq	5d404 <TClassOneModem::__ct(unsigned long)+0x170>
         5d2c0:	e1a01005 	mov	r1, r5
         5d2c4:	e1a00004 	mov	r0, r4
         5d2c8:	eb66b088 	bl	1a094f0 <TMNP::$__ct(unsigned long)>
         5d2cc:	e2840f79 	add	r0, r4, #484	; 0x1e4
         5d2d0:	e2800b01 	add	r0, r0, #1024	; 0x400
         5d2d4:	eb674102 	bl	1a2d6e4 <TClassOneModemCmdReply::$__ct(void)>
         5d2d8:	e2840e62 	add	r0, r4, #1568	; 0x620
         5d2dc:	eb6e493b 	bl	1bef7d0 <TCommToolControlRequest::$__ct(void)>
         5d2e0:	e2840f93 	add	r0, r4, #588	; 0x24c
         5d2e4:	e2800b01 	add	r0, r0, #1024	; 0x400
         5d2e8:	eb6d7ed4 	bl	1bbce40 <TCMOOutputFlowControlParms::$__ct(void)>
         5d2ec:	e2840e66 	add	r0, r4, #1632	; 0x660
         5d2f0:	eb6d7ed1 	bl	1bbce3c <TCMOInputFlowControlParms::$__ct(void)>
         5d2f4:	e2840f9d 	add	r0, r4, #628	; 0x274
         5d2f8:	e2800b01 	add	r0, r0, #1024	; 0x400
         5d2fc:	eb6e17af 	bl	1be31c0 <CBufferList::$__ct(void)>
         5d300:	e2840fa5 	add	r0, r4, #660	; 0x294
         5d304:	e2800b01 	add	r0, r0, #1024	; 0x400
         5d308:	eb6e1bbd 	bl	1be4204 <CBufferSegment::$__ct(void)>
         5d30c:	e2840faf 	add	r0, r4, #700	; 0x2bc
         5d310:	e2800b01 	add	r0, r0, #1024	; 0x400
         5d314:	eb6e1bba 	bl	1be4204 <CBufferSegment::$__ct(void)>
         5d318:	e2840fb9 	add	r0, r4, #740	; 0x2e4
         5d31c:	e2800b01 	add	r0, r0, #1024	; 0x400
         5d320:	eb6e1bb7 	bl	1be4204 <CBufferSegment::$__ct(void)>
         5d324:	e2840fc3 	add	r0, r4, #780	; 0x30c
         5d328:	e2800b01 	add	r0, r0, #1024	; 0x400
         5d32c:	eb6e1bb4 	bl	1be4204 <CBufferSegment::$__ct(void)>
         5d330:	e2840fcd 	add	r0, r4, #820	; 0x334
         5d334:	e2800b01 	add	r0, r0, #1024	; 0x400
         5d338:	eb6e1bb1 	bl	1be4204 <CBufferSegment::$__ct(void)>
         5d33c:	e2840fd7 	add	r0, r4, #860	; 0x35c
         5d340:	e2800b01 	add	r0, r0, #1024	; 0x400
         5d344:	eb6e1bae 	bl	1be4204 <CBufferSegment::$__ct(void)>
         5d348:	e2840fee 	add	r0, r4, #952	; 0x3b8
         5d34c:	e2800b01 	add	r0, r0, #1024	; 0x400
         5d350:	eb6d7a9f 	bl	1bbbdd4 <TCMOModemDialing::$__ct(void)>
         5d354:	e2840ff7 	add	r0, r4, #988	; 0x3dc
         5d358:	e2800b01 	add	r0, r0, #1024	; 0x400
         5d35c:	eb6d7a8b 	bl	1bbbd90 <TCMOModemPrefs::$__ct(void)>
         5d360:	e2840004 	add	r0, r4, #4	; 0x4
         5d364:	e2800b02 	add	r0, r0, #2048	; 0x800
         5d368:	eb6d7eab 	bl	1bbce1c <TCMOModemConnectType::$__ct(void)>
         5d36c:	e2840018 	add	r0, r4, #24	; 0x18
         5d370:	e2800b02 	add	r0, r0, #2048	; 0x800
         5d374:	eb6d7eab 	bl	1bbce28 <TCMOModemVoiceSupport::$__ct(void)>
         5d378:	e2840028 	add	r0, r4, #40	; 0x28
         5d37c:	e2800b02 	add	r0, r0, #2048	; 0x800
         5d380:	eb6706e2 	bl	1a1ef10 <TCMOModemFaxEnabledCaps::$__ct(void)>
         5d384:	e2840e85 	add	r0, r4, #2128	; 0x850
         5d388:	eb6e9fc4 	bl	1c052a0 <TCMOModemFaxCapabilities::$__ct(void)>
         5d38c:	e2840078 	add	r0, r4, #120	; 0x78
         5d390:	e2800b02 	add	r0, r0, #2048	; 0x800
         5d394:	eb6706db 	bl	1a1ef08 <TCMOModemFaxClass::$__ct(void)>
         5d398:	e2840e89 	add	r0, r4, #2192	; 0x890
         5d39c:	eb6706d9 	bl	1a1ef08 <TCMOModemFaxClass::$__ct(void)>
         5d3a0:	e28400a8 	add	r0, r4, #168	; 0xa8
         5d3a4:	e2800b02 	add	r0, r0, #2048	; 0x800
         5d3a8:	eb6706d7 	bl	1a1ef0c <TCMOModemFaxClass1Cap::$__ct(void)>
         5d3ac:	e28400cc 	add	r0, r4, #204	; 0xcc
         5d3b0:	e2800b02 	add	r0, r0, #2048	; 0x800
         5d3b4:	eb6e9ba3 	bl	1c04248 <TCMOTAPIService::$__ct(void)>
         5d3b8:	e28400dc 	add	r0, r4, #220	; 0xdc
         5d3bc:	e2800b02 	add	r0, r0, #2048	; 0x800
         5d3c0:	eb6e9ba1 	bl	1c0424c <TCMOTAPISpeaker::$__ct(void)>
         5d3c4:	e2840f46 	add	r0, r4, #280	; 0x118
         5d3c8:	e2800b02 	add	r0, r0, #2048	; 0x800
         5d3cc:	eb6dc0b6 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
         5d3d0:	e2840f96 	add	r0, r4, #600	; 0x258
         5d3d4:	e2800b02 	add	r0, r0, #2048	; 0x800
         5d3d8:	eb6e1778 	bl	1be31c0 <CBufferList::$__ct(void)>
         5d3dc:	e2840f9e 	add	r0, r4, #632	; 0x278
         5d3e0:	e2800b02 	add	r0, r0, #2048	; 0x800
         5d3e4:	eb6e1b86 	bl	1be4204 <CBufferSegment::$__ct(void)>
         5d3e8:	e2840d2b 	add	r0, r4, #2752	; 0xac0
         5d3ec:	eb6e1b84 	bl	1be4204 <CBufferSegment::$__ct(void)>
         5d3f0:	e2840fba 	add	r0, r4, #744	; 0x2e8
         5d3f4:	e2800b02 	add	r0, r0, #2048	; 0x800
         5d3f8:	eb6e1770 	bl	1be31c0 <CBufferList::$__ct(void)>
         5d3fc:	e59f0008 	ldr	r0, [pc, #8]	; 5d40c <TClassOneModem::__ct(unsigned long)+0x178>	; fField8
         5d400:	e5840000 	str	r0, [r4]
         5d404:	e1a00004 	mov	r0, r4
         5d408:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         5d40c:	0001d494 	muleq	r1, r4, r4
    */
}

/**
 * Symbol: TClassOneModem::PutComplete(long, unsigned long)
 * Address: 0005d410
 */
TClassOneModem::PutComplete(long, unsigned long) {
    /*
         5d410:	e1a0c00d 	mov	ip, sp
         5d414:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5d418:	e24cb004 	sub	fp, ip, #4	; 0x4
         5d41c:	e1a04000 	mov	r4, r0
         5d420:	e590c5b0 	ldr	ip, [r0, #1456]	; fField1456
         5d424:	e31c0004 	tst	ip, #4	; 0x4
         5d428:	e3a00000 	mov	r0, #0	; 0x0
         5d42c:	15840270 	strne	r0, [r4, #624]	; fField624
         5d430:	11a00004 	movne	r0, r4
         5d434:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         5d438:	1a66e5cc 	bne	1a16b70 <TClassOneModem::$PutCommandComplete(long)>
         5d43c:	e5943aac 	ldr	r3, [r4, #2732]	; fField2732
         5d440:	e3130001 	tst	r3, #1	; 0x1
         5d444:	0a00001a 	beq	5d4b4 <TClassOneModem::PutComplete(long, unsigned long)+0xa4>
         5d448:	e3130008 	tst	r3, #8	; 0x8
         5d44c:	1a00000b 	bne	5d480 <TClassOneModem::PutComplete(long, unsigned long)+0x70>
         5d450:	e24dd008 	sub	sp, sp, #8	; 0x8
         5d454:	e58d0004 	str	r0, [sp, #4]	; fField4
         5d458:	e284eeab 	add	lr, r4, #2736	; 0xab0
         5d45c:	e58d0000 	str	r0, [sp]
         5d460:	e89d1008 	ldmia	sp, {r3, ip}
         5d464:	e88e1008 	stmia	lr, {r3, ip}
         5d468:	e5840abc 	str	r0, [r4, #2748]	; fField2748
         5d46c:	e5840270 	str	r0, [r4, #624]	; fField624
         5d470:	e1a00004 	mov	r0, r4
         5d474:	eb66c082 	bl	1a0d684 <TClassOneModem::$C1PktContinue(long)>
         5d478:	e28dd008 	add	sp, sp, #8	; 0x8
         5d47c:	ea000002 	b	5d48c <TClassOneModem::PutComplete(long, unsigned long)+0x7c>
         5d480:	e5940abc 	ldr	r0, [r4, #2748]	; fField2748
         5d484:	e0800002 	add	r0, r0, r2
         5d488:	e5840abc 	str	r0, [r4, #2748]	; fField2748
         5d48c:	e5940aac 	ldr	r0, [r4, #2732]	; fField2732
         5d490:	e3c0000c 	bic	r0, r0, #12	; 0xc
         5d494:	e5840aac 	str	r0, [r4, #2732]	; fField2732
         5d498:	e3100002 	tst	r0, #2	; 0x2
         5d49c:	05d40640 	ldreqb	r0, [r4, #1600]	; fField1600
         5d4a0:	03300000 	teqeq	r0, #0	; 0x0
         5d4a4:	01a00004 	moveq	r0, r4
         5d4a8:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         5d4ac:	0a673c70 	beq	1a2c674 <TClassOneModem::$ZeroStuffing(void)>
         5d4b0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         5d4b4:	e31c0701 	tst	ip, #262144	; 0x40000
         5d4b8:	15840270 	strne	r0, [r4, #624]	; fField624
         5d4bc:	e1a00004 	mov	r0, r4
         5d4c0:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         5d4c4:	0a66e5ab 	beq	1a16b78 <TMNP::$PutComplete(long, unsigned long)>
         5d4c8:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         5d4cc:	1a66c06c 	bne	1a0d684 <TClassOneModem::$C1PktContinue(long)>
    */
}

/**
 * Symbol: TClassOneModem::ResetSerialDrvr(unsigned long, long, long, long)
 * Address: 0005d4d0
 */
TClassOneModem::ResetSerialDrvr(unsigned long, long, long, long) {
    /*
         5d4d0:	e1a0c00d 	mov	ip, sp
         5d4d4:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         5d4d8:	e24cb004 	sub	fp, ip, #4	; 0x4
         5d4dc:	e1a04000 	mov	r4, r0
         5d4e0:	e1a05001 	mov	r5, r1
         5d4e4:	e1a07002 	mov	r7, r2
         5d4e8:	e1a06003 	mov	r6, r3
         5d4ec:	e59b8004 	ldr	r8, [fp, #4]	; fField4
         5d4f0:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         5d4f4:	e1a0000d 	mov	r0, sp
         5d4f8:	eb6d7a3c 	bl	1bbbdf0 <TCMOSerialIOParms::$__ct(void)>
         5d4fc:	e58d5018 	str	r5, [sp, #24]	; fField24
         5d500:	e58d6010 	str	r6, [sp, #16]	; fField16
         5d504:	e58d8014 	str	r8, [sp, #20]	; fField20
         5d508:	e58d700c 	str	r7, [sp, #12]	; fField12
         5d50c:	e1a0100d 	mov	r1, sp
         5d510:	e1a00004 	mov	r0, r4
         5d514:	e5942000 	ldr	r2, [r4]
         5d518:	e1a0e00f 	mov	lr, pc
         5d51c:	e282ff56 	add	pc, r2, #344	; 0x158
         5d520:	e3a00000 	mov	r0, #0	; 0x0
         5d524:	e5845784 	str	r5, [r4, #1924]	; fField1924
         5d528:	e5c4066e 	strb	r0, [r4, #1646]	; fField1646
         5d52c:	e5c4066f 	strb	r0, [r4, #1647]	; fField1647
         5d530:	e5c4065a 	strb	r0, [r4, #1626]	; fField1626
         5d534:	e5c4065b 	strb	r0, [r4, #1627]	; fField1627
         5d538:	e2841e66 	add	r1, r4, #1632	; 0x660
         5d53c:	e1a00004 	mov	r0, r4
         5d540:	eb66f1da 	bl	1a19cb0 <TAsyncSerTool::$SetInputFlowControl(TCMOInputFlowControlParms *)>
         5d544:	e2841f93 	add	r1, r4, #588	; 0x24c
         5d548:	e2811b01 	add	r1, r1, #1024	; 0x400
         5d54c:	e1a00004 	mov	r0, r4
         5d550:	eb66f1db 	bl	1a19cc4 <TAsyncSerTool::$SetOutputFlowControl(TCMOOutputFlowControlParms *)>
         5d554:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TClassOneModem::PutEscapeCmd(void)
 * Address: 0005d558
 */
TClassOneModem::PutEscapeCmd(void) {
    /*
         5d558:	e1a0c00d 	mov	ip, sp
         5d55c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         5d560:	e24cb004 	sub	fp, ip, #4	; 0x4
         5d564:	e1a04000 	mov	r4, r0
         5d568:	e2800f9d 	add	r0, r0, #628	; 0x274
         5d56c:	e2800b01 	add	r0, r0, #1024	; 0x400
         5d570:	e1a07000 	mov	r7, r0
         5d574:	eb6e3c2c 	bl	1bec62c <CBufferList::$RemoveAll(void)>
         5d578:	e3e03000 	mvn	r3, #0	; 0x0
         5d57c:	e3a02000 	mov	r2, #0	; 0x0
         5d580:	e92d000c 	stmdb	sp!, {r2, r3}
         5d584:	e59f0048 	ldr	r0, [pc, #48]	; 5d5d4 <TClassOneModem::PutEscapeCmd(void)+0x7c>
         5d588:	e1a05000 	mov	r5, r0
         5d58c:	eb6d6147 	bl	1bb5ab0 <$strlen>
         5d590:	e1a02000 	mov	r2, r0
         5d594:	e2840faf 	add	r0, r4, #700	; 0x2bc
         5d598:	e2800b01 	add	r0, r0, #1024	; 0x400
         5d59c:	e1a06000 	mov	r6, r0
         5d5a0:	e1a01005 	mov	r1, r5
         5d5a4:	e3a03000 	mov	r3, #0	; 0x0
         5d5a8:	eb6e2fbf 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
         5d5ac:	e28dd008 	add	sp, sp, #8	; 0x8
         5d5b0:	e1b05000 	movs	r5, r0
         5d5b4:	1a000004 	bne	5d5cc <TClassOneModem::PutEscapeCmd(void)+0x74>
         5d5b8:	e1a01006 	mov	r1, r6
         5d5bc:	e1a00007 	mov	r0, r7
         5d5c0:	eb6e33cf 	bl	1bea504 <CBufferList::$InsertLast(CBuffer *)>
         5d5c4:	e1a00004 	mov	r0, r4
         5d5c8:	eb66e567 	bl	1a16b6c <TClassOneModem::$PutCommand(void)>
         5d5cc:	e1a00005 	mov	r0, r5
         5d5d0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         5d5d4:	0036f984 	eoreqs	pc, r6, r4, lsl #19
    */
}

/**
 * Symbol: TClassOneModem::UpdateDialOptionsStr(void)
 * Address: 0005d5d8
 */
TClassOneModem::UpdateDialOptionsStr(void) {
    /*
         5d5d8:	e1a0c00d 	mov	ip, sp
         5d5dc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5d5e0:	e24cb004 	sub	fp, ip, #4	; 0x4
         5d5e4:	e1a04000 	mov	r4, r0
         5d5e8:	e5d007c4 	ldrb	r0, [r0, #1988]	; fField1988
         5d5ec:	e3300000 	teq	r0, #0	; 0x0
         5d5f0:	03a01030 	moveq	r1, #48	; 0x30
         5d5f4:	13a01031 	movne	r1, #49	; 0x31
         5d5f8:	e5940aa8 	ldr	r0, [r4, #2728]	; fField2728
         5d5fc:	e5c01003 	strb	r1, [r0, #3]
         5d600:	e5d407c5 	ldrb	r0, [r4, #1989]	; fField1989
         5d604:	e3300000 	teq	r0, #0	; 0x0
         5d608:	e5d407c6 	ldrb	r0, [r4, #1990]	; fField1990
         5d60c:	0a000005 	beq	5d628 <TClassOneModem::UpdateDialOptionsStr(void)+0x50>
         5d610:	e3300000 	teq	r0, #0	; 0x0
         5d614:	03a01032 	moveq	r1, #50	; 0x32
         5d618:	13a01034 	movne	r1, #52	; 0x34
         5d61c:	e5940aa8 	ldr	r0, [r4, #2728]	; fField2728
         5d620:	e5c01007 	strb	r1, [r0, #7]
         5d624:	ea000004 	b	5d63c <TClassOneModem::UpdateDialOptionsStr(void)+0x64>
         5d628:	e3300000 	teq	r0, #0	; 0x0
         5d62c:	03a00031 	moveq	r0, #49	; 0x31
         5d630:	13a00033 	movne	r0, #51	; 0x33
         5d634:	e5941aa8 	ldr	r1, [r4, #2728]	; fField2728
         5d638:	e5c10007 	strb	r0, [r1, #7]
         5d63c:	e5d417c9 	ldrb	r1, [r4, #1993]	; fField1993
         5d640:	e5940aa8 	ldr	r0, [r4, #2728]	; fField2728
         5d644:	e5c01005 	strb	r1, [r0, #5]
         5d648:	e5d407ca 	ldrb	r0, [r4, #1994]	; fField1994
         5d64c:	e5d418f3 	ldrb	r1, [r4, #2291]	; fField2291
         5d650:	e3310000 	teq	r1, #0	; 0x0
         5d654:	0a00000b 	beq	5d688 <TClassOneModem::UpdateDialOptionsStr(void)+0xb0>
         5d658:	e5d418d8 	ldrb	r1, [r4, #2264]	; fField2264
         5d65c:	e3310000 	teq	r1, #0	; 0x0
         5d660:	15d418d9 	ldrneb	r1, [r4, #2265]	; fField2265
         5d664:	13310000 	teqne	r1, #0	; 0x0
         5d668:	1a000006 	bne	5d688 <TClassOneModem::UpdateDialOptionsStr(void)+0xb0>
         5d66c:	e5d41811 	ldrb	r1, [r4, #2065]	; fField2065
         5d670:	e3310000 	teq	r1, #0	; 0x0
         5d674:	1a000003 	bne	5d688 <TClassOneModem::UpdateDialOptionsStr(void)+0xb0>
         5d678:	e5941aa8 	ldr	r1, [r4, #2728]	; fField2728
         5d67c:	e5d11007 	ldrb	r1, [r1, #7]
         5d680:	e3310031 	teq	r1, #49	; 0x31
         5d684:	12400009 	subne	r0, r0, #9	; 0x9
         5d688:	e5941aa8 	ldr	r1, [r4, #2728]	; fField2728
         5d68c:	e281200b 	add	r2, r1, #11	; 0xb
         5d690:	e20010ff 	and	r1, r0, #255	; 0xff
         5d694:	e1a00004 	mov	r0, r4
         5d698:	eb66d8cc 	bl	1a139d0 <TClassOneModem::$IToARegisterValue(unsigned char, unsigned char *)>
         5d69c:	e5940aa8 	ldr	r0, [r4, #2728]	; fField2728
         5d6a0:	e2802017 	add	r2, r0, #23	; 0x17
         5d6a4:	e5d417cb 	ldrb	r1, [r4, #1995]	; fField1995
         5d6a8:	e1a00004 	mov	r0, r4
         5d6ac:	eb66d8c7 	bl	1a139d0 <TClassOneModem::$IToARegisterValue(unsigned char, unsigned char *)>
         5d6b0:	e5940aa8 	ldr	r0, [r4, #2728]	; fField2728
         5d6b4:	e2802011 	add	r2, r0, #17	; 0x11
         5d6b8:	e5d417cc 	ldrb	r1, [r4, #1996]	; fField1996
         5d6bc:	e1a00004 	mov	r0, r4
         5d6c0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5d6c4:	ea66d8c1 	b	1a139d0 <TClassOneModem::$IToARegisterValue(unsigned char, unsigned char *)>
    */
}

/**
 * Symbol: TClassOneModem::IToARegisterValue(unsigned char, unsigned char *)
 * Address: 0005d6c8
 */
TClassOneModem::IToARegisterValue(unsigned char, unsigned char *) {
    /*
         5d6c8:	e1a0c00d 	mov	ip, sp
         5d6cc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         5d6d0:	e24cb004 	sub	fp, ip, #4	; 0x4
         5d6d4:	e1a04002 	mov	r4, r2
         5d6d8:	e20110ff 	and	r1, r1, #255	; 0xff
         5d6dc:	e1a05001 	mov	r5, r1
         5d6e0:	e3a00064 	mov	r0, #100	; 0x64
         5d6e4:	eb6d5497 	bl	1bb2948 <$__rt_udiv>
         5d6e8:	e2800030 	add	r0, r0, #48	; 0x30
         5d6ec:	e5c40000 	strb	r0, [r4]
         5d6f0:	e1a01005 	mov	r1, r5
         5d6f4:	e3a00064 	mov	r0, #100	; 0x64
         5d6f8:	eb6d5490 	bl	1bb2940 <$__rt_sdiv>
         5d6fc:	e20100ff 	and	r0, r1, #255	; 0xff
         5d700:	e1a05000 	mov	r5, r0
         5d704:	eb6d5490 	bl	1bb294c <$__rt_udiv10>
         5d708:	e2800030 	add	r0, r0, #48	; 0x30
         5d70c:	e5c40001 	strb	r0, [r4, #1]
         5d710:	e1a00005 	mov	r0, r5
         5d714:	eb6d548a 	bl	1bb2944 <$__rt_sdiv10>
         5d718:	e2810030 	add	r0, r1, #48	; 0x30
         5d71c:	e5c40002 	strb	r0, [r4, #2]
         5d720:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TClassOneModem::CancelMNPConnect(void)
 * Address: 0005d724
 */
TClassOneModem::CancelMNPConnect(void) {
    /*
         5d724:	e1a0c00d 	mov	ip, sp
         5d728:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5d72c:	e24cb004 	sub	fp, ip, #4	; 0x4
         5d730:	e1a02000 	mov	r2, r0
         5d734:	e5900018 	ldr	r0, [r0, #24]	; fField24
         5d738:	e3c01901 	bic	r1, r0, #16384	; 0x4000
         5d73c:	e5821018 	str	r1, [r2, #24]	; fField24
         5d740:	e59237b0 	ldr	r3, [r2, #1968]	; fField1968
         5d744:	e3130001 	tst	r3, #1	; 0x1
         5d748:	e3a00001 	mov	r0, #1	; 0x1
         5d74c:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         5d750:	e3130010 	tst	r3, #16	; 0x10
         5d754:	05923174 	ldreq	r3, [r2, #372]
         5d758:	02033004 	andeq	r3, r3, #4	; 0x4
         5d75c:	03330000 	teqeq	r3, #0	; 0x0
         5d760:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         5d764:	e5923024 	ldr	r3, [r2, #36]	; fField36
         5d768:	e293cc4e 	adds	ip, r3, #19968	; 0x4e00
         5d76c:	d37c002b 	cmnle	ip, #43	; 0x2b
         5d770:	b91ba810 	ldmltdb	fp, {r4, fp, sp, pc}
         5d774:	e293cc4e 	adds	ip, r3, #19968	; 0x4e00
         5d778:	d37c0020 	cmnle	ip, #32	; 0x20
         5d77c:	c91ba810 	ldmgtdb	fp, {r4, fp, sp, pc}
         5d780:	e3c11084 	bic	r1, r1, #132	; 0x84
         5d784:	e3a04000 	mov	r4, #0	; 0x0
         5d788:	e5821018 	str	r1, [r2, #24]	; fField24
         5d78c:	e5824024 	str	r4, [r2, #36]	; fField36
         5d790:	e582401c 	str	r4, [r2, #28]	; fField28
         5d794:	e5824020 	str	r4, [r2, #32]	; fField32
         5d798:	e5824028 	str	r4, [r2, #40]	; fField40
         5d79c:	e58207b4 	str	r0, [r2, #1972]	; fField1972
         5d7a0:	e3110040 	tst	r1, #64	; 0x40
         5d7a4:	e582402c 	str	r4, [r2, #44]
         5d7a8:	0a000008 	beq	5d7d0 <TClassOneModem::CancelMNPConnect(void)+0xac>
         5d7ac:	e59201d4 	ldr	r0, [r2, #468]
         5d7b0:	e3300004 	teq	r0, #4	; 0x4
         5d7b4:	1a000005 	bne	5d7d0 <TClassOneModem::CancelMNPConnect(void)+0xac>
         5d7b8:	e1a00002 	mov	r0, r2
         5d7bc:	e3a01000 	mov	r1, #0	; 0x0
         5d7c0:	e5922000 	ldr	r2, [r2]
         5d7c4:	e1a0e00f 	mov	lr, pc
         5d7c8:	e282f05c 	add	pc, r2, #92	; 0x5c
         5d7cc:	ea000001 	b	5d7d8 <TClassOneModem::CancelMNPConnect(void)+0xb4>
         5d7d0:	e1a00002 	mov	r0, r2
         5d7d4:	eb66c3d4 	bl	1a0e72c <TClassOneModem::$ConnectModemComplete(void)>
         5d7d8:	e1a00004 	mov	r0, r4
         5d7dc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TClassOneModem::HangUpModemComplete(void)
 * Address: 0005d7e0
 */
TClassOneModem::HangUpModemComplete(void) {
    /*
         5d7e0:	e1a0c00d 	mov	ip, sp
         5d7e4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         5d7e8:	e24cb004 	sub	fp, ip, #4	; 0x4
         5d7ec:	e1a04000 	mov	r4, r0
         5d7f0:	e3a06000 	mov	r6, #0	; 0x0
         5d7f4:	e59005b0 	ldr	r0, [r0, #1456]	; fField1456
         5d7f8:	e3100401 	tst	r0, #16777216	; 0x1000000
         5d7fc:	13c00401 	bicne	r0, r0, #16777216	; 0x1000000
         5d800:	15a405b0 	strne	r0, [r4, #1456]!	; fField1456
         5d804:	1a000050 	bne	5d94c <TClassOneModem::HangUpModemComplete(void)+0x16c>
         5d808:	e3100902 	tst	r0, #32768	; 0x8000
         5d80c:	0a000023 	beq	5d8a0 <TClassOneModem::HangUpModemComplete(void)+0xc0>
         5d810:	e3c00902 	bic	r0, r0, #32768	; 0x8000
         5d814:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         5d818:	e1a00004 	mov	r0, r4
         5d81c:	eb66b761 	bl	1a0b5a8 <TClassOneModem::$AdjustForReset(void)>
         5d820:	e5940784 	ldr	r0, [r4, #1924]	; fField1924
         5d824:	e59417d8 	ldr	r1, [r4, #2008]	; fField2008
         5d828:	e5911014 	ldr	r1, [r1, #20]	; fField20
         5d82c:	e1300001 	teq	r0, r1
         5d830:	0a000006 	beq	5d850 <TClassOneModem::HangUpModemComplete(void)+0x70>
         5d834:	e3a03008 	mov	r3, #8	; 0x8
         5d838:	e92d0008 	stmdb	sp!, {r3}
         5d83c:	e1a00004 	mov	r0, r4
         5d840:	e3a03000 	mov	r3, #0	; 0x0
         5d844:	e3a02000 	mov	r2, #0	; 0x0
         5d848:	eb66ecf7 	bl	1a18c2c <TClassOneModem::$ResetSerialDrvr(unsigned long, long, long, long)>
         5d84c:	e28dd004 	add	sp, sp, #4	; 0x4
         5d850:	e59405c4 	ldr	r0, [r4, #1476]	; fField1476
         5d854:	e3300000 	teq	r0, #0	; 0x0
         5d858:	059405f4 	ldreq	r0, [r4, #1524]	; fField1524
         5d85c:	03300000 	teqeq	r0, #0	; 0x0
         5d860:	1a000039 	bne	5d94c <TClassOneModem::HangUpModemComplete(void)+0x16c>
         5d864:	e5940794 	ldr	r0, [r4, #1940]	; fField1940
         5d868:	e3300000 	teq	r0, #0	; 0x0
         5d86c:	0a000036 	beq	5d94c <TClassOneModem::HangUpModemComplete(void)+0x16c>
         5d870:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         5d874:	e3800401 	orr	r0, r0, #16777216	; 0x1000000
         5d878:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         5d87c:	e3a00000 	mov	r0, #0	; 0x0
         5d880:	e5c408f1 	strb	r0, [r4, #2289]	; fField2289
         5d884:	e5c408f2 	strb	r0, [r4, #2290]	; fField2290
         5d888:	e1a00004 	mov	r0, r4
         5d88c:	e3a01014 	mov	r1, #20	; 0x14
         5d890:	eb66b74d 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         5d894:	e1b05000 	movs	r5, r0
         5d898:	1a000044 	bne	5d9b0 <TClassOneModem::HangUpModemComplete(void)+0x1d0>
         5d89c:	ea000041 	b	5d9a8 <TClassOneModem::HangUpModemComplete(void)+0x1c8>
         5d8a0:	e3100c01 	tst	r0, #256	; 0x100
         5d8a4:	0a000008 	beq	5d8cc <TClassOneModem::HangUpModemComplete(void)+0xec>
         5d8a8:	e3c00c03 	bic	r0, r0, #768	; 0x300
         5d8ac:	e3800902 	orr	r0, r0, #32768	; 0x8000
         5d8b0:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         5d8b4:	e1a00004 	mov	r0, r4
         5d8b8:	e3a01001 	mov	r1, #1	; 0x1
         5d8bc:	eb66b742 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         5d8c0:	e1b05000 	movs	r5, r0
         5d8c4:	1a000039 	bne	5d9b0 <TClassOneModem::HangUpModemComplete(void)+0x1d0>
         5d8c8:	ea000036 	b	5d9a8 <TClassOneModem::HangUpModemComplete(void)+0x1c8>
         5d8cc:	e3100080 	tst	r0, #128	; 0x80
         5d8d0:	e59415c4 	ldr	r1, [r4, #1476]	; fField1476
         5d8d4:	0a00000e 	beq	5d914 <TClassOneModem::HangUpModemComplete(void)+0x134>
         5d8d8:	e3310000 	teq	r1, #0	; 0x0
         5d8dc:	059415f4 	ldreq	r1, [r4, #1524]	; fField1524
         5d8e0:	03310000 	teqeq	r1, #0	; 0x0
         5d8e4:	03800c02 	orreq	r0, r0, #512	; 0x200
         5d8e8:	058405b0 	streq	r0, [r4, #1456]	; fField1456
         5d8ec:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         5d8f0:	e3c00080 	bic	r0, r0, #128	; 0x80
         5d8f4:	e3800c01 	orr	r0, r0, #256	; 0x100
         5d8f8:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         5d8fc:	e1a00004 	mov	r0, r4
         5d900:	e3a01004 	mov	r1, #4	; 0x4
         5d904:	eb66b730 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         5d908:	e1b05000 	movs	r5, r0
         5d90c:	1a000027 	bne	5d9b0 <TClassOneModem::HangUpModemComplete(void)+0x1d0>
         5d910:	ea000024 	b	5d9a8 <TClassOneModem::HangUpModemComplete(void)+0x1c8>
         5d914:	e281cc5d 	add	ip, r1, #23808	; 0x5d00
         5d918:	e37c00c0 	cmn	ip, #192	; 0xc0
         5d91c:	1a000006 	bne	5d93c <TClassOneModem::HangUpModemComplete(void)+0x15c>
         5d920:	e3800080 	orr	r0, r0, #128	; 0x80
         5d924:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         5d928:	e1a00004 	mov	r0, r4
         5d92c:	eb66e893 	bl	1a17b80 <TClassOneModem::$PutEscapeCmd(void)>
         5d930:	e1b05000 	movs	r5, r0
         5d934:	1a00001d 	bne	5d9b0 <TClassOneModem::HangUpModemComplete(void)+0x1d0>
         5d938:	ea00001a 	b	5d9a8 <TClassOneModem::HangUpModemComplete(void)+0x1c8>
         5d93c:	e3310000 	teq	r1, #0	; 0x0
         5d940:	1281cc46 	addne	ip, r1, #17920	; 0x4600
         5d944:	137c0053 	cmnne	ip, #83	; 0x53
         5d948:	0a000001 	beq	5d954 <TClassOneModem::HangUpModemComplete(void)+0x174>
         5d94c:	e3a06001 	mov	r6, #1	; 0x1
         5d950:	ea000014 	b	5d9a8 <TClassOneModem::HangUpModemComplete(void)+0x1c8>
         5d954:	e3100a02 	tst	r0, #8192	; 0x2000
         5d958:	1a000002 	bne	5d968 <TClassOneModem::HangUpModemComplete(void)+0x188>
         5d95c:	e59415f4 	ldr	r1, [r4, #1524]	; fField1524
         5d960:	e3310000 	teq	r1, #0	; 0x0
         5d964:	1a000008 	bne	5d98c <TClassOneModem::HangUpModemComplete(void)+0x1ac>
         5d968:	e3c00a02 	bic	r0, r0, #8192	; 0x2000
         5d96c:	e3800902 	orr	r0, r0, #32768	; 0x8000
         5d970:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         5d974:	e1a00004 	mov	r0, r4
         5d978:	e3a01001 	mov	r1, #1	; 0x1
         5d97c:	eb66b712 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         5d980:	e1b05000 	movs	r5, r0
         5d984:	1a000009 	bne	5d9b0 <TClassOneModem::HangUpModemComplete(void)+0x1d0>
         5d988:	ea000006 	b	5d9a8 <TClassOneModem::HangUpModemComplete(void)+0x1c8>
         5d98c:	e3800a02 	orr	r0, r0, #8192	; 0x2000
         5d990:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         5d994:	e1a00004 	mov	r0, r4
         5d998:	e3a01013 	mov	r1, #19	; 0x13
         5d99c:	eb66b70a 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         5d9a0:	e1b05000 	movs	r5, r0
         5d9a4:	1a000001 	bne	5d9b0 <TClassOneModem::HangUpModemComplete(void)+0x1d0>
         5d9a8:	e1a00006 	mov	r0, r6
         5d9ac:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         5d9b0:	e3a03008 	mov	r3, #8	; 0x8
         5d9b4:	e92d0008 	stmdb	sp!, {r3}
         5d9b8:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         5d9bc:	e5b01014 	ldr	r1, [r0, #20]!	; fField20
         5d9c0:	e1a00004 	mov	r0, r4
         5d9c4:	e3a03000 	mov	r3, #0	; 0x0
         5d9c8:	e3a02000 	mov	r2, #0	; 0x0
         5d9cc:	eb66ec96 	bl	1a18c2c <TClassOneModem::$ResetSerialDrvr(unsigned long, long, long, long)>
         5d9d0:	e3a00001 	mov	r0, #1	; 0x1
         5d9d4:	e5a455c4 	str	r5, [r4, #1476]!	; fField1476
         5d9d8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TClassOneModem::HangUpContinue(long)
 * Address: 0005d9dc
 */
TClassOneModem::HangUpContinue(long) {
    /*
         5d9dc:	e1a0c00d 	mov	ip, sp
         5d9e0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5d9e4:	e24cb004 	sub	fp, ip, #4	; 0x4
         5d9e8:	e1a04000 	mov	r4, r0
         5d9ec:	eb66d3de 	bl	1a1296c <TClassOneModem::$HangUpModemComplete(void)>
         5d9f0:	e3300000 	teq	r0, #0	; 0x0
         5d9f4:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         5d9f8:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         5d9fc:	e3c00a01 	bic	r0, r0, #4096	; 0x1000
         5da00:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         5da04:	e5940018 	ldr	r0, [r4, #24]	; fField24
         5da08:	e3c00a01 	bic	r0, r0, #4096	; 0x1000
         5da0c:	e5840018 	str	r0, [r4, #24]	; fField24
         5da10:	e5d408f0 	ldrb	r0, [r4, #2288]	; fField2288
         5da14:	e3300000 	teq	r0, #0	; 0x0
         5da18:	0a000009 	beq	5da44 <TClassOneModem::HangUpContinue(long)+0x68>
         5da1c:	e1a00004 	mov	r0, r4
         5da20:	e5941000 	ldr	r1, [r4]
         5da24:	e1a0e00f 	mov	lr, pc
         5da28:	e281ff55 	add	pc, r1, #340	; 0x154
         5da2c:	e1a00004 	mov	r0, r4
         5da30:	e3a01000 	mov	r1, #0	; 0x0
         5da34:	e5942000 	ldr	r2, [r4]
         5da38:	e1a0e00f 	mov	lr, pc
         5da3c:	e282fe11 	add	pc, r2, #272	; 0x110
         5da40:	ea000008 	b	5da68 <TClassOneModem::HangUpContinue(long)+0x8c>
         5da44:	e3a03008 	mov	r3, #8	; 0x8
         5da48:	e92d0008 	stmdb	sp!, {r3}
         5da4c:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         5da50:	e5b01014 	ldr	r1, [r0, #20]!	; fField20
         5da54:	e1a00004 	mov	r0, r4
         5da58:	e3a03000 	mov	r3, #0	; 0x0
         5da5c:	e3a02000 	mov	r2, #0	; 0x0
         5da60:	eb66ec71 	bl	1a18c2c <TClassOneModem::$ResetSerialDrvr(unsigned long, long, long, long)>
         5da64:	e28dd004 	add	sp, sp, #4	; 0x4
         5da68:	e5d408f0 	ldrb	r0, [r4, #2288]	; fField2288
         5da6c:	e3300000 	teq	r0, #0	; 0x0
         5da70:	0a000005 	beq	5da8c <TClassOneModem::HangUpContinue(long)+0xb0>
         5da74:	e1a00004 	mov	r0, r4
         5da78:	e3a02000 	mov	r2, #0	; 0x0
         5da7c:	e3a01000 	mov	r1, #0	; 0x0
         5da80:	eb6d8d81 	bl	1bc108c <TCommTool::$ShouldAbort(unsigned long, long)>
         5da84:	e3300000 	teq	r0, #0	; 0x0
         5da88:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         5da8c:	e1a00004 	mov	r0, r4
         5da90:	e5941000 	ldr	r1, [r4]
         5da94:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5da98:	e281ff46 	add	pc, r1, #280	; 0x118
    */
}

/**
 * Symbol: TClassOneModem::HangUp(void)
 * Address: 0005da9c
 */
TClassOneModem::HangUp(void) {
    /*
         5da9c:	e1a0c00d 	mov	ip, sp
         5daa0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         5daa4:	e24cb004 	sub	fp, ip, #4	; 0x4
         5daa8:	e1a04000 	mov	r4, r0
         5daac:	e3a01000 	mov	r1, #0	; 0x0
         5dab0:	eb67431a 	bl	1a2e720 <TClassOneModem::$SetSpeakerVolume(unsigned char)>
         5dab4:	e3a05000 	mov	r5, #0	; 0x0
         5dab8:	e5c4565a 	strb	r5, [r4, #1626]	; fField1626
         5dabc:	e5c4565b 	strb	r5, [r4, #1627]	; fField1627
         5dac0:	e2841f93 	add	r1, r4, #588	; 0x24c
         5dac4:	e2811b01 	add	r1, r1, #1024	; 0x400
         5dac8:	e1a00004 	mov	r0, r4
         5dacc:	eb66f07c 	bl	1a19cc4 <TAsyncSerTool::$SetOutputFlowControl(TCMOOutputFlowControlParms *)>
         5dad0:	e5c4566e 	strb	r5, [r4, #1646]	; fField1646
         5dad4:	e5c4566f 	strb	r5, [r4, #1647]	; fField1647
         5dad8:	e2841e66 	add	r1, r4, #1632	; 0x660
         5dadc:	e1a00004 	mov	r0, r4
         5dae0:	eb66f072 	bl	1a19cb0 <TAsyncSerTool::$SetInputFlowControl(TCMOInputFlowControlParms *)>
         5dae4:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         5dae8:	e3c00002 	bic	r0, r0, #2	; 0x2
         5daec:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         5daf0:	e1a00004 	mov	r0, r4
         5daf4:	eb6715a4 	bl	1a2318c <TClassOneModem::$AbortCommand(void)>
         5daf8:	e5d407ef 	ldrb	r0, [r4, #2031]	; fField2031
         5dafc:	e3300000 	teq	r0, #0	; 0x0
         5db00:	15940018 	ldrne	r0, [r4, #24]	; fField24
         5db04:	12000003 	andne	r0, r0, #3	; 0x3
         5db08:	13300000 	teqne	r0, #0	; 0x0
         5db0c:	0a00000d 	beq	5db48 <TClassOneModem::HangUp(void)+0xac>
         5db10:	e1a00004 	mov	r0, r4
         5db14:	e3a01032 	mov	r1, #50	; 0x32
         5db18:	e2811c2b 	add	r1, r1, #11008	; 0x2b00
         5db1c:	e5942000 	ldr	r2, [r4]
         5db20:	e1a0e00f 	mov	lr, pc
         5db24:	e282ff6b 	add	pc, r2, #428	; 0x1ac
         5db28:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         5db2c:	e3800a01 	orr	r0, r0, #4096	; 0x1000
         5db30:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         5db34:	e1a00004 	mov	r0, r4
         5db38:	e3a01004 	mov	r1, #4	; 0x4
         5db3c:	eb66b6a2 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         5db40:	e3300000 	teq	r0, #0	; 0x0
         5db44:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         5db48:	e3a00001 	mov	r0, #1	; 0x1
         5db4c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TClassOneModem::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *))
 * Address: 0005db50
 */
TClassOneModem::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *)) {
    /*
         5db50:	e3310007 	teq	r1, #7	; 0x7
         5db54:	03a00901 	moveq	r0, #16384	; 0x4000
         5db58:	05820000 	streq	r0, [r2]
         5db5c:	059f001c 	ldreq	r0, [pc, #1c]	; 5db80 <TClassOneModem::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *))+0x30>
         5db60:	0a000004 	beq	5db78 <TClassOneModem::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *))+0x28>
         5db64:	e3310008 	teq	r1, #8	; 0x8
         5db68:	1a66cf53 	bne	1a118bc <TMNP::$GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *))>
         5db6c:	e3a00a01 	mov	r0, #4096	; 0x1000
         5db70:	e5820000 	str	r0, [r2]
         5db74:	e59f0008 	ldr	r0, [pc, #8]	; 5db84 <TClassOneModem::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *))+0x34>	; fField8
         5db78:	e5830000 	str	r0, [r3]
         5db7c:	e1a0f00e 	mov	pc, lr
         5db80:	01a0d6a4 	moveq	sp, r4, lsr #13
         5db84:	01a1295c 	moveq	r2, ip, asr r9
    */
}

/**
 * Symbol: TClassOneModem::TerminateComplete(void)
 * Address: 0005db88
 */
TClassOneModem::TerminateComplete(void) {
    /*
         5db88:	e1a0c00d 	mov	ip, sp
         5db8c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5db90:	e24cb004 	sub	fp, ip, #4	; 0x4
         5db94:	e1a04000 	mov	r4, r0
         5db98:	e59005b0 	ldr	r0, [r0, #1456]	; fField1456
         5db9c:	e3c00101 	bic	r0, r0, #1073741824	; 0x40000000
         5dba0:	e3c00501 	bic	r0, r0, #4194304	; 0x400000
         5dba4:	e3c00b02 	bic	r0, r0, #2048	; 0x800
         5dba8:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         5dbac:	e3a00000 	mov	r0, #0	; 0x0
         5dbb0:	e58407b4 	str	r0, [r4, #1972]	; fField1972
         5dbb4:	e5c408f0 	strb	r0, [r4, #2288]	; fField2288
         5dbb8:	e1a00004 	mov	r0, r4
         5dbbc:	e3a01032 	mov	r1, #50	; 0x32
         5dbc0:	e2811c2b 	add	r1, r1, #11008	; 0x2b00
         5dbc4:	e5942000 	ldr	r2, [r4]
         5dbc8:	e1a0e00f 	mov	lr, pc
         5dbcc:	e282ff6b 	add	pc, r2, #428	; 0x1ac
         5dbd0:	e5940aac 	ldr	r0, [r4, #2732]	; fField2732
         5dbd4:	e3100001 	tst	r0, #1	; 0x1
         5dbd8:	11a00004 	movne	r0, r4
         5dbdc:	1b673aa2 	blne	1a2c66c <TClassOneModem::$ZeroStuffingDeinit(void)>
         5dbe0:	e1a00004 	mov	r0, r4
         5dbe4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5dbe8:	ea6d8d2e 	b	1bc10a8 <TCommTool::$TerminateComplete(void)>
    */
}

/**
 * Symbol: TClassOneModem::KillPut(void)
 * Address: 0005dbec
 */
TClassOneModem::KillPut(void) {
    /*
         5dbec:	e59017b4 	ldr	r1, [r0, #1972]	; fField1972
         5dbf0:	e3310002 	teq	r1, #2	; 0x2
         5dbf4:	1a66db83 	bne	1a14a08 <TFramedAsyncSerTool::$KillPut(void)>
         5dbf8:	0a66db83 	beq	1a14a0c <TMNP::$KillPut(void)>
    */
}

/**
 * Symbol: TClassOneModem::C2ModemRecvPgData(void)
 * Address: 0005dbfc
 */
TClassOneModem::C2ModemRecvPgData(void) {
    /*
         5dbfc:	e1a0c00d 	mov	ip, sp
         5dc00:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5dc04:	e24cb004 	sub	fp, ip, #4	; 0x4
         5dc08:	e1a04000 	mov	r4, r0
         5dc0c:	e3a02000 	mov	r2, #0	; 0x0
         5dc10:	e3a01000 	mov	r1, #0	; 0x0
         5dc14:	eb6d8d1c 	bl	1bc108c <TCommTool::$ShouldAbort(unsigned long, long)>
         5dc18:	e3300000 	teq	r0, #0	; 0x0
         5dc1c:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         5dc20:	e59f105c 	ldr	r1, [pc, #5c]	; 5dc84 <TClassOneModem::C2ModemRecvPgData(void)+0x88>
         5dc24:	e5940018 	ldr	r0, [r4, #24]	; fField24
         5dc28:	e3100002 	tst	r0, #2	; 0x2
         5dc2c:	0a000011 	beq	5dc78 <TClassOneModem::C2ModemRecvPgData(void)+0x7c>
         5dc30:	e1a00004 	mov	r0, r4
         5dc34:	eb66b667 	bl	1a0b5d8 <TClassOneModem::$BlockGetAndPutChannel(void)>
         5dc38:	e1b01000 	movs	r1, r0
         5dc3c:	1a00000d 	bne	5dc78 <TClassOneModem::C2ModemRecvPgData(void)+0x7c>
         5dc40:	e284104c 	add	r1, r4, #76	; 0x4c
         5dc44:	e2840e62 	add	r0, r4, #1568	; 0x620
         5dc48:	e3a0202c 	mov	r2, #44	; 0x2c
         5dc4c:	eb6d5b7f 	bl	1bb4a50 <$memcpy>
         5dc50:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         5dc54:	e3c00601 	bic	r0, r0, #1048576	; 0x100000
         5dc58:	e3800702 	orr	r0, r0, #524288	; 0x80000
         5dc5c:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         5dc60:	e3100102 	tst	r0, #-2147483648	; 0x80000000
         5dc64:	e1a00004 	mov	r0, r4
         5dc68:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         5dc6c:	0a670091 	beq	1a1deb8 <TClassOneModem::$C2PktGetBytesSetup(void)>
         5dc70:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         5dc74:	1a670090 	bne	1a1debc <TClassOneModem::$C2PktGetBytes(void)>
         5dc78:	e1a00004 	mov	r0, r4
         5dc7c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5dc80:	ea66be7e 	b	1a0d680 <TClassOneModem::$C1PktComplete(long)>
         5dc84:	ffffc177 	swinv	0x00ffc177
    */
}

/**
 * Symbol: TClassOneModem::DoRecvPkt(void)
 * Address: 0005dc88
 */
TClassOneModem::DoRecvPkt(void) {
    /*
         5dc88:	e1a0c00d 	mov	ip, sp
         5dc8c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5dc90:	e24cb004 	sub	fp, ip, #4	; 0x4
         5dc94:	e1a04000 	mov	r4, r0
         5dc98:	e3a02000 	mov	r2, #0	; 0x0
         5dc9c:	e3a01000 	mov	r1, #0	; 0x0
         5dca0:	eb6d8cf9 	bl	1bc108c <TCommTool::$ShouldAbort(unsigned long, long)>
         5dca4:	e3300000 	teq	r0, #0	; 0x0
         5dca8:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         5dcac:	e59f1074 	ldr	r1, [pc, #74]	; 5dd28 <TClassOneModem::DoRecvPkt(void)+0xa0>
         5dcb0:	e5940018 	ldr	r0, [r4, #24]	; fField24
         5dcb4:	e3100002 	tst	r0, #2	; 0x2
         5dcb8:	0a000017 	beq	5dd1c <TClassOneModem::DoRecvPkt(void)+0x94>
         5dcbc:	e1a00004 	mov	r0, r4
         5dcc0:	eb66b644 	bl	1a0b5d8 <TClassOneModem::$BlockGetAndPutChannel(void)>
         5dcc4:	e1b01000 	movs	r1, r0
         5dcc8:	1a000013 	bne	5dd1c <TClassOneModem::DoRecvPkt(void)+0x94>
         5dccc:	e284104c 	add	r1, r4, #76	; 0x4c
         5dcd0:	e2840e62 	add	r0, r4, #1568	; 0x620
         5dcd4:	e3a0202c 	mov	r2, #44	; 0x2c
         5dcd8:	eb6d5b5c 	bl	1bb4a50 <$memcpy>
         5dcdc:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         5dce0:	e3c00601 	bic	r0, r0, #1048576	; 0x100000
         5dce4:	e3800702 	orr	r0, r0, #524288	; 0x80000
         5dce8:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         5dcec:	e3100501 	tst	r0, #4194304	; 0x400000
         5dcf0:	13c00501 	bicne	r0, r0, #4194304	; 0x400000
         5dcf4:	158405b0 	strne	r0, [r4, #1456]	; fField1456
         5dcf8:	1a000003 	bne	5dd0c <TClassOneModem::DoRecvPkt(void)+0x84>
         5dcfc:	e3100102 	tst	r0, #-2147483648	; 0x80000000
         5dd00:	01a00004 	moveq	r0, r4
         5dd04:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         5dd08:	0a66be62 	beq	1a0d698 <TClassOneModem::$C1PktRecvCmd(void)>
         5dd0c:	e1a00004 	mov	r0, r4
         5dd10:	e3a01001 	mov	r1, #1	; 0x1
         5dd14:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5dd18:	ea66be5a 	b	1a0d688 <TClassOneModem::$C1PktGetBytes(Class1CmdResults)>
         5dd1c:	e1a00004 	mov	r0, r4
         5dd20:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5dd24:	ea66be55 	b	1a0d680 <TClassOneModem::$C1PktComplete(long)>
         5dd28:	ffffc177 	swinv	0x00ffc177
    */
}

/**
 * Symbol: TClassOneModem::DoTransPkt(void)
 * Address: 0005dd2c
 */
TClassOneModem::DoTransPkt(void) {
    /*
         5dd2c:	e1a0c00d 	mov	ip, sp
         5dd30:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5dd34:	e24cb004 	sub	fp, ip, #4	; 0x4
         5dd38:	e1a04000 	mov	r4, r0
         5dd3c:	e3a02000 	mov	r2, #0	; 0x0
         5dd40:	e3a01000 	mov	r1, #0	; 0x0
         5dd44:	eb6d8cd0 	bl	1bc108c <TCommTool::$ShouldAbort(unsigned long, long)>
         5dd48:	e3300000 	teq	r0, #0	; 0x0
         5dd4c:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         5dd50:	e59f10ac 	ldr	r1, [pc, #ac]	; 5de04 <TClassOneModem::DoTransPkt(void)+0xd8>
         5dd54:	e5940018 	ldr	r0, [r4, #24]	; fField24
         5dd58:	e3100002 	tst	r0, #2	; 0x2
         5dd5c:	0a000025 	beq	5ddf8 <TClassOneModem::DoTransPkt(void)+0xcc>
         5dd60:	e284104c 	add	r1, r4, #76	; 0x4c
         5dd64:	e2840e62 	add	r0, r4, #1568	; 0x620
         5dd68:	e3a0202c 	mov	r2, #44	; 0x2c
         5dd6c:	eb6d5b37 	bl	1bb4a50 <$memcpy>
         5dd70:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         5dd74:	e3c00102 	bic	r0, r0, #-2147483648	; 0x80000000
         5dd78:	e3800701 	orr	r0, r0, #262144	; 0x40000
         5dd7c:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         5dd80:	e3100502 	tst	r0, #8388608	; 0x800000
         5dd84:	1a00000f 	bne	5ddc8 <TClassOneModem::DoTransPkt(void)+0x9c>
         5dd88:	e594088c 	ldr	r0, [r4, #2188]	; fField2188
         5dd8c:	e3300004 	teq	r0, #4	; 0x4
         5dd90:	13300008 	teqne	r0, #8	; 0x8
         5dd94:	0a00000b 	beq	5ddc8 <TClassOneModem::DoTransPkt(void)+0x9c>
         5dd98:	e1a00004 	mov	r0, r4
         5dd9c:	eb66b60d 	bl	1a0b5d8 <TClassOneModem::$BlockGetAndPutChannel(void)>
         5dda0:	e1b01000 	movs	r1, r0
         5dda4:	1a000013 	bne	5ddf8 <TClassOneModem::DoTransPkt(void)+0xcc>
         5dda8:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         5ddac:	e3100101 	tst	r0, #1073741824	; 0x40000000
         5ddb0:	13c00101 	bicne	r0, r0, #1073741824	; 0x40000000
         5ddb4:	13800601 	orrne	r0, r0, #1048576	; 0x100000
         5ddb8:	158405b0 	strne	r0, [r4, #1456]	; fField1456
         5ddbc:	1a000001 	bne	5ddc8 <TClassOneModem::DoTransPkt(void)+0x9c>
         5ddc0:	e3100601 	tst	r0, #1048576	; 0x100000
         5ddc4:	0a000003 	beq	5ddd8 <TClassOneModem::DoTransPkt(void)+0xac>
         5ddc8:	e1a00004 	mov	r0, r4
         5ddcc:	e3a01001 	mov	r1, #1	; 0x1
         5ddd0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5ddd4:	ea66be2e 	b	1a0d694 <TClassOneModem::$C1PktPutBytes(Class1CmdResults)>
         5ddd8:	e594063c 	ldr	r0, [r4, #1596]	; fField1596
         5dddc:	e3300000 	teq	r0, #0	; 0x0
         5dde0:	e1a00004 	mov	r0, r4
         5dde4:	03a01000 	moveq	r1, #0	; 0x0
         5dde8:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         5ddec:	0a66be2a 	beq	1a0d69c <TClassOneModem::$C1PktTransCmd(Class1CmdResults)>
         5ddf0:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         5ddf4:	1a66be29 	bne	1a0d6a0 <TClassOneModem::$C1PktTransSilent(void)>
         5ddf8:	e1a00004 	mov	r0, r4
         5ddfc:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5de00:	ea66be1e 	b	1a0d680 <TClassOneModem::$C1PktComplete(long)>
         5de04:	ffffc177 	swinv	0x00ffc177
    */
}

/**
 * Symbol: TClassOneModem::C1PktComplete(long)
 * Address: 0005de08
 */
TClassOneModem::C1PktComplete(long) {
    /*
         5de08:	e1a0c00d 	mov	ip, sp
         5de0c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         5de10:	e24cb004 	sub	fp, ip, #4	; 0x4
         5de14:	e1a04000 	mov	r4, r0
         5de18:	e1a05001 	mov	r5, r1
         5de1c:	e59005b0 	ldr	r0, [r0, #1456]	; fField1456
         5de20:	e3100502 	tst	r0, #8388608	; 0x800000
         5de24:	01a00004 	moveq	r0, r4
         5de28:	0b670435 	bleq	1a1ef04 <TClassOneModem::$UnblockGetAndPutChannel(void)>
         5de2c:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         5de30:	e3c00703 	bic	r0, r0, #786432	; 0xc0000
         5de34:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         5de38:	e2843f79 	add	r3, r4, #484	; 0x1e4
         5de3c:	e2833b01 	add	r3, r3, #1024	; 0x400
         5de40:	e1a02005 	mov	r2, r5
         5de44:	e1a00004 	mov	r0, r4
         5de48:	e3a01002 	mov	r1, #2	; 0x2
         5de4c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         5de50:	ea6d7c07 	b	1bbce74 <TCommTool::$CompleteRequest(CommToolChannelNumber, long, TCommToolReply &)>
    */
}

/**
 * Symbol: TClassOneModem::C1PktAbort(void)
 * Address: 0005de54
 */
TClassOneModem::C1PktAbort(void) {
    /*
         5de54:	e1a0c00d 	mov	ip, sp
         5de58:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         5de5c:	e24cb004 	sub	fp, ip, #4	; 0x4
         5de60:	e1a04000 	mov	r4, r0
         5de64:	e59005b0 	ldr	r0, [r0, #1456]	; fField1456
         5de68:	e3800602 	orr	r0, r0, #2097152	; 0x200000
         5de6c:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         5de70:	e5940aac 	ldr	r0, [r4, #2732]	; fField2732
         5de74:	e3100001 	tst	r0, #1	; 0x1
         5de78:	11a00004 	movne	r0, r4
         5de7c:	1b6739fa 	blne	1a2c66c <TClassOneModem::$ZeroStuffingDeinit(void)>
         5de80:	e1a00004 	mov	r0, r4
         5de84:	eb6714c0 	bl	1a2318c <TClassOneModem::$AbortCommand(void)>
         5de88:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         5de8c:	e3100701 	tst	r0, #262144	; 0x40000
         5de90:	0a000002 	beq	5dea0 <TClassOneModem::C1PktAbort(void)+0x4c>
         5de94:	e1a00004 	mov	r0, r4
         5de98:	eb66dada 	bl	1a14a08 <TFramedAsyncSerTool::$KillPut(void)>
         5de9c:	ea000009 	b	5dec8 <TClassOneModem::C1PktAbort(void)+0x74>
         5dea0:	e3100702 	tst	r0, #524288	; 0x80000
         5dea4:	0a000007 	beq	5dec8 <TClassOneModem::C1PktAbort(void)+0x74>
         5dea8:	e1a00004 	mov	r0, r4
         5deac:	eb66d6ca 	bl	1a139dc <TFramedAsyncSerTool::$KillGet(void)>
         5deb0:	e1a00004 	mov	r0, r4
         5deb4:	e3a01032 	mov	r1, #50	; 0x32
         5deb8:	e2811c2b 	add	r1, r1, #11008	; 0x2b00
         5debc:	e5942000 	ldr	r2, [r4]
         5dec0:	e1a0e00f 	mov	lr, pc
         5dec4:	e282ff6b 	add	pc, r2, #428	; 0x1ac
         5dec8:	e3a00000 	mov	r0, #0	; 0x0
         5decc:	e5c4065b 	strb	r0, [r4, #1627]	; fField1627
         5ded0:	e5c4065a 	strb	r0, [r4, #1626]	; fField1626
         5ded4:	e5c4066f 	strb	r0, [r4, #1647]	; fField1647
         5ded8:	e5c4066e 	strb	r0, [r4, #1646]	; fField1646
         5dedc:	e2841f93 	add	r1, r4, #588	; 0x24c
         5dee0:	e2811b01 	add	r1, r1, #1024	; 0x400
         5dee4:	e1a00004 	mov	r0, r4
         5dee8:	eb66ef75 	bl	1a19cc4 <TAsyncSerTool::$SetOutputFlowControl(TCMOOutputFlowControlParms *)>
         5deec:	e2841e66 	add	r1, r4, #1632	; 0x660
         5def0:	e1a00004 	mov	r0, r4
         5def4:	eb66ef6d 	bl	1a19cb0 <TAsyncSerTool::$SetInputFlowControl(TCMOInputFlowControlParms *)>
         5def8:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         5defc:	e3c00102 	bic	r0, r0, #-2147483648	; 0x80000000
         5df00:	e3c0060b 	bic	r0, r0, #11534336	; 0xb00000
         5df04:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         5df08:	e3a0000a 	mov	r0, #10	; 0xa
         5df0c:	e58405bc 	str	r0, [r4, #1468]	; fField1468
         5df10:	e1a00004 	mov	r0, r4
         5df14:	e3a01013 	mov	r1, #19	; 0x13
         5df18:	eb66b5ab 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         5df1c:	e1b05000 	movs	r5, r0
         5df20:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         5df24:	e1a00004 	mov	r0, r4
         5df28:	e59f1014 	ldr	r1, [pc, #14]	; 5df44 <TClassOneModem::C1PktAbort(void)+0xf0>
         5df2c:	eb66bdd3 	bl	1a0d680 <TClassOneModem::$C1PktComplete(long)>
         5df30:	e1a02005 	mov	r2, r5
         5df34:	e1a00004 	mov	r0, r4
         5df38:	e3a01004 	mov	r1, #4	; 0x4
         5df3c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         5df40:	ea6d8833 	b	1bc0014 <TCommTool::$KillRequestComplete(CommToolRequestType, long)>
         5df44:	ffffc17b 	swinv	0x00ffc17b
    */
}

/**
 * Symbol: TClassOneModem::C1PktContinue(long)
 * Address: 0005df48
 */
TClassOneModem::C1PktContinue(long) {
    /*
         5df48:	e1a0c00d 	mov	ip, sp
         5df4c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         5df50:	e24cb004 	sub	fp, ip, #4	; 0x4
         5df54:	e1a04000 	mov	r4, r0
         5df58:	e1a05001 	mov	r5, r1
         5df5c:	e59005b0 	ldr	r0, [r0, #1456]	; fField1456
         5df60:	e3100602 	tst	r0, #2097152	; 0x200000
         5df64:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         5df68:	e59415bc 	ldr	r1, [r4, #1468]	; fField1468
         5df6c:	e331000a 	teq	r1, #10	; 0xa
         5df70:	1a000010 	bne	5dfb8 <TClassOneModem::C1PktContinue(long)+0x70>
         5df74:	e3100201 	tst	r0, #268435456	; 0x10000000
         5df78:	e1a00004 	mov	r0, r4
         5df7c:	0a000007 	beq	5dfa0 <TClassOneModem::C1PktContinue(long)+0x58>
         5df80:	e59f1014 	ldr	r1, [pc, #14]	; 5df9c <TClassOneModem::C1PktContinue(long)+0x54>
         5df84:	eb66bdbd 	bl	1a0d680 <TClassOneModem::$C1PktComplete(long)>
         5df88:	e1a02005 	mov	r2, r5
         5df8c:	e1a00004 	mov	r0, r4
         5df90:	e3a01004 	mov	r1, #4	; 0x4
         5df94:	eb6d881e 	bl	1bc0014 <TCommTool::$KillRequestComplete(CommToolRequestType, long)>
         5df98:	ea000003 	b	5dfac <TClassOneModem::C1PktContinue(long)+0x64>
         5df9c:	ffffc17b 	swinv	0x00ffc17b
         5dfa0:	e3e010c1 	mvn	r1, #193	; 0xc1
         5dfa4:	e2411c5d 	sub	r1, r1, #23808	; 0x5d00
         5dfa8:	eb66bdb4 	bl	1a0d680 <TClassOneModem::$C1PktComplete(long)>
         5dfac:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         5dfb0:	e3c00203 	bic	r0, r0, #805306368	; 0x30000000
         5dfb4:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         5dfb8:	e3350000 	teq	r5, #0	; 0x0
         5dfbc:	0a000027 	beq	5e060 <TClassOneModem::C1PktContinue(long)+0x118>
         5dfc0:	e285cc5d 	add	ip, r5, #23808	; 0x5d00
         5dfc4:	e37c00c0 	cmn	ip, #192	; 0xc0
         5dfc8:	1a000009 	bne	5dff4 <TClassOneModem::C1PktContinue(long)+0xac>
         5dfcc:	e59405bc 	ldr	r0, [r4, #1468]	; fField1468
         5dfd0:	e3300008 	teq	r0, #8	; 0x8
         5dfd4:	05940628 	ldreq	r0, [r4, #1576]	; fField1576
         5dfd8:	0240cf45 	subeq	ip, r0, #276	; 0x114
         5dfdc:	033c0002 	teqeq	ip, #2	; 0x2
         5dfe0:	159f5004 	ldrne	r5, [pc, #4]	; 5dfec <TClassOneModem::C1PktContinue(long)+0xa4>	; fField4
         5dfe4:	059f5004 	ldreq	r5, [pc, #4]	; 5dff0 <TClassOneModem::C1PktContinue(long)+0xa8>	; fField4
         5dfe8:	ea000010 	b	5e030 <TClassOneModem::C1PktContinue(long)+0xe8>
         5dfec:	ffffa23b 	swinv	0x00ffa23b
         5dff0:	ffffa237 	swinv	0x00ffa237
         5dff4:	e285cc46 	add	ip, r5, #17920	; 0x4600
         5dff8:	e37c0053 	cmn	ip, #83	; 0x53
         5dffc:	1a000007 	bne	5e020 <TClassOneModem::C1PktContinue(long)+0xd8>
         5e000:	e5940628 	ldr	r0, [r4, #1576]	; fField1576
         5e004:	e240cf45 	sub	ip, r0, #276	; 0x114
         5e008:	e33c0003 	teq	ip, #3	; 0x3
         5e00c:	1240cf45 	subne	ip, r0, #276	; 0x114
         5e010:	133c0001 	teqne	ip, #1	; 0x1
         5e014:	059405b0 	ldreq	r0, [r4, #1456]	; fField1456
         5e018:	03c00502 	biceq	r0, r0, #8388608	; 0x800000
         5e01c:	0a000002 	beq	5e02c <TClassOneModem::C1PktContinue(long)+0xe4>
         5e020:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         5e024:	e3c00102 	bic	r0, r0, #-2147483648	; 0x80000000
         5e028:	e3c00609 	bic	r0, r0, #9437184	; 0x900000
         5e02c:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         5e030:	e1a00004 	mov	r0, r4
         5e034:	e3a01032 	mov	r1, #50	; 0x32
         5e038:	e2811c2b 	add	r1, r1, #11008	; 0x2b00
         5e03c:	e5942000 	ldr	r2, [r4]
         5e040:	e1a0e00f 	mov	lr, pc
         5e044:	e282ff6b 	add	pc, r2, #428	; 0x1ac
         5e048:	e1a00004 	mov	r0, r4
         5e04c:	eb67144f 	bl	1a23190 <TClassOneModem::$AbortTimer(void)>
         5e050:	e1a01005 	mov	r1, r5
         5e054:	e1a00004 	mov	r0, r4
         5e058:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         5e05c:	ea66bd87 	b	1a0d680 <TClassOneModem::$C1PktComplete(long)>
         5e060:	e59405bc 	ldr	r0, [r4, #1468]	; fField1468
         5e064:	e350000d 	cmp	r0, #13	; 0xd
         5e068:	908ff100 	addls	pc, pc, r0, lsl #2
         5e06c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         5e070:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         5e074:	ea00000e 	b	5e0b4 <TClassOneModem::C1PktContinue(long)+0x16c>
         5e078:	ea000010 	b	5e0c0 <TClassOneModem::C1PktContinue(long)+0x178>
         5e07c:	ea000013 	b	5e0d0 <TClassOneModem::C1PktContinue(long)+0x188>
         5e080:	ea000015 	b	5e0dc <TClassOneModem::C1PktContinue(long)+0x194>
         5e084:	ea000018 	b	5e0ec <TClassOneModem::C1PktContinue(long)+0x1a4>
         5e088:	ea00001b 	b	5e0fc <TClassOneModem::C1PktContinue(long)+0x1b4>
         5e08c:	ea00001d 	b	5e108 <TClassOneModem::C1PktContinue(long)+0x1c0>
         5e090:	ea000020 	b	5e118 <TClassOneModem::C1PktContinue(long)+0x1d0>
         5e094:	ea000022 	b	5e124 <TClassOneModem::C1PktContinue(long)+0x1dc>
         5e098:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         5e09c:	ea000024 	b	5e134 <TClassOneModem::C1PktContinue(long)+0x1ec>
         5e0a0:	ea000027 	b	5e144 <TClassOneModem::C1PktContinue(long)+0x1fc>
         5e0a4:	e59415f4 	ldr	r1, [r4, #1524]	; fField1524
         5e0a8:	e1a00004 	mov	r0, r4
         5e0ac:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         5e0b0:	ea66ff7e 	b	1a1deb0 <TClassOneModem::$C2PktCheckResult(Class1CmdResults)>
         5e0b4:	e1a00004 	mov	r0, r4
         5e0b8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         5e0bc:	ea66bd77 	b	1a0d6a0 <TClassOneModem::$C1PktTransSilent(void)>
         5e0c0:	e59415f4 	ldr	r1, [r4, #1524]	; fField1524
         5e0c4:	e1a00004 	mov	r0, r4
         5e0c8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         5e0cc:	ea66bd72 	b	1a0d69c <TClassOneModem::$C1PktTransCmd(Class1CmdResults)>
         5e0d0:	e1a00004 	mov	r0, r4
         5e0d4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         5e0d8:	ea66bd6e 	b	1a0d698 <TClassOneModem::$C1PktRecvCmd(void)>
         5e0dc:	e59415f4 	ldr	r1, [r4, #1524]	; fField1524
         5e0e0:	e1a00004 	mov	r0, r4
         5e0e4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         5e0e8:	ea66bd69 	b	1a0d694 <TClassOneModem::$C1PktPutBytes(Class1CmdResults)>
         5e0ec:	e59415f4 	ldr	r1, [r4, #1524]	; fField1524
         5e0f0:	e1a00004 	mov	r0, r4
         5e0f4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         5e0f8:	ea66bd62 	b	1a0d688 <TClassOneModem::$C1PktGetBytes(Class1CmdResults)>
         5e0fc:	e1a00004 	mov	r0, r4
         5e100:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         5e104:	ea66bd61 	b	1a0d690 <TClassOneModem::$C1PktGetPutResult(void)>
         5e108:	e59415f4 	ldr	r1, [r4, #1524]	; fField1524
         5e10c:	e1a00004 	mov	r0, r4
         5e110:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         5e114:	ea66b958 	b	1a0c67c <TClassOneModem::$C1PktCheckPutResult(Class1CmdResults)>
         5e118:	e1a00004 	mov	r0, r4
         5e11c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         5e120:	ea66bd59 	b	1a0d68c <TClassOneModem::$C1PktGetPktCRC(void)>
         5e124:	e59415f4 	ldr	r1, [r4, #1524]	; fField1524
         5e128:	e1a00004 	mov	r0, r4
         5e12c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         5e130:	ea66b950 	b	1a0c678 <TClassOneModem::$C1PktCheckPktCRC(Class1CmdResults)>
         5e134:	e59415f4 	ldr	r1, [r4, #1524]	; fField1524
         5e138:	e1a00004 	mov	r0, r4
         5e13c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         5e140:	ea67183d 	b	1a2423c <TClassOneModem::$C1PktCheckFRMResult(Class1CmdResults)>
         5e144:	e1a00004 	mov	r0, r4
         5e148:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         5e14c:	ea66ff5a 	b	1a1debc <TClassOneModem::$C2PktGetBytes(void)>
    */
}

/**
 * Symbol: TClassOneModem::C1PktTransSilent(void)
 * Address: 0005e150
 */
TClassOneModem::C1PktTransSilent(void) {
    /*
         5e150:	e1a0c00d 	mov	ip, sp
         5e154:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5e158:	e24cb004 	sub	fp, ip, #4	; 0x4
         5e15c:	e1a04000 	mov	r4, r0
         5e160:	e3a00002 	mov	r0, #2	; 0x2
         5e164:	e58405bc 	str	r0, [r4, #1468]	; fField1468
         5e168:	e594263c 	ldr	r2, [r4, #1596]	; fField1596
         5e16c:	e1a00004 	mov	r0, r4
         5e170:	e3a01008 	mov	r1, #8	; 0x8
         5e174:	eb672cca 	bl	1a294a4 <TClassOneModem::$PostTimer(unsigned long, unsigned long)>
         5e178:	e3300000 	teq	r0, #0	; 0x0
         5e17c:	11a01000 	movne	r1, r0
         5e180:	11a00004 	movne	r0, r4
         5e184:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         5e188:	1a66bd3c 	bne	1a0d680 <TClassOneModem::$C1PktComplete(long)>
         5e18c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TClassOneModem::C1PktTransCmd(Class1CmdResults)
 * Address: 0005e190
 */
TClassOneModem::C1PktTransCmd(Class1CmdResults) {
    /*
         5e190:	e1a0c00d 	mov	ip, sp
         5e194:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5e198:	e24cb004 	sub	fp, ip, #4	; 0x4
         5e19c:	e1a04000 	mov	r4, r0
         5e1a0:	e59f0058 	ldr	r0, [pc, #58]	; 5e200 <TClassOneModem::C1PktTransCmd(Class1CmdResults)+0x70>
         5e1a4:	e331003b 	teq	r1, #59	; 0x3b
         5e1a8:	0a000010 	beq	5e1f0 <TClassOneModem::C1PktTransCmd(Class1CmdResults)+0x60>
         5e1ac:	e3a00004 	mov	r0, #4	; 0x4
         5e1b0:	e58405bc 	str	r0, [r4, #1468]	; fField1468
         5e1b4:	e5940628 	ldr	r0, [r4, #1576]	; fField1576
         5e1b8:	e3300f45 	teq	r0, #276	; 0x114
         5e1bc:	01a00004 	moveq	r0, r4
         5e1c0:	03a01010 	moveq	r1, #16	; 0x10
         5e1c4:	0a000006 	beq	5e1e4 <TClassOneModem::C1PktTransCmd(Class1CmdResults)+0x54>
         5e1c8:	e240cf45 	sub	ip, r0, #276	; 0x114
         5e1cc:	e33c0001 	teq	ip, #1	; 0x1
         5e1d0:	13a0007a 	movne	r0, #122	; 0x7a
         5e1d4:	12400c3f 	subne	r0, r0, #16128	; 0x3f00
         5e1d8:	1a000004 	bne	5e1f0 <TClassOneModem::C1PktTransCmd(Class1CmdResults)+0x60>
         5e1dc:	e1a00004 	mov	r0, r4
         5e1e0:	e3a0100e 	mov	r1, #14	; 0xe
         5e1e4:	eb66b4f8 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         5e1e8:	e3300000 	teq	r0, #0	; 0x0
         5e1ec:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         5e1f0:	e1a01000 	mov	r1, r0
         5e1f4:	e1a00004 	mov	r0, r4
         5e1f8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5e1fc:	ea66bd1f 	b	1a0d680 <TClassOneModem::$C1PktComplete(long)>
         5e200:	ffffa23b 	swinv	0x00ffa23b
    */
}

/**
 * Symbol: TClassOneModem::C1PktRecvCmd(void)
 * Address: 0005e204
 */
TClassOneModem::C1PktRecvCmd(void) {
    /*
         5e204:	e1a0c00d 	mov	ip, sp
         5e208:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5e20c:	e24cb004 	sub	fp, ip, #4	; 0x4
         5e210:	e1a04000 	mov	r4, r0
         5e214:	e3a00005 	mov	r0, #5	; 0x5
         5e218:	e58405bc 	str	r0, [r4, #1468]	; fField1468
         5e21c:	e5940628 	ldr	r0, [r4, #1576]	; fField1576
         5e220:	e240cf45 	sub	ip, r0, #276	; 0x114
         5e224:	e33c0002 	teq	ip, #2	; 0x2
         5e228:	01a00004 	moveq	r0, r4
         5e22c:	03a01011 	moveq	r1, #17	; 0x11
         5e230:	0a000006 	beq	5e250 <TClassOneModem::C1PktRecvCmd(void)+0x4c>
         5e234:	e240cf45 	sub	ip, r0, #276	; 0x114
         5e238:	e33c0003 	teq	ip, #3	; 0x3
         5e23c:	13a0007a 	movne	r0, #122	; 0x7a
         5e240:	12400c3f 	subne	r0, r0, #16128	; 0x3f00
         5e244:	1a000004 	bne	5e25c <TClassOneModem::C1PktRecvCmd(void)+0x58>
         5e248:	e1a00004 	mov	r0, r4
         5e24c:	e3a0100f 	mov	r1, #15	; 0xf
         5e250:	eb66b4dd 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         5e254:	e3300000 	teq	r0, #0	; 0x0
         5e258:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         5e25c:	e1a01000 	mov	r1, r0
         5e260:	e1a00004 	mov	r0, r4
         5e264:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5e268:	ea66bd04 	b	1a0d680 <TClassOneModem::$C1PktComplete(long)>
    */
}

/**
 * Symbol: TClassOneModem::C1PktPutBytes(Class1CmdResults)
 * Address: 0005e26c
 */
TClassOneModem::C1PktPutBytes(Class1CmdResults) {
    /*
         5e26c:	e1a0c00d 	mov	ip, sp
         5e270:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5e274:	e24cb004 	sub	fp, ip, #4	; 0x4
         5e278:	e1a04000 	mov	r4, r0
         5e27c:	e3310001 	teq	r1, #1	; 0x1
         5e280:	0a000005 	beq	5e29c <TClassOneModem::C1PktPutBytes(Class1CmdResults)+0x30>
         5e284:	e1a00004 	mov	r0, r4
         5e288:	eb66bd10 	bl	1a0d6d0 <TClassOneModem::$CheckForErrorResult(unsigned long)>
         5e28c:	e3500000 	cmp	r0, #0	; 0x0
         5e290:	059f00e8 	ldreq	r0, [pc, #e8]	; 5e380 <TClassOneModem::C1PktPutBytes(Class1CmdResults)+0x114>
         5e294:	0a000035 	beq	5e370 <TClassOneModem::C1PktPutBytes(Class1CmdResults)+0x104>
         5e298:	1a000034 	bne	5e370 <TClassOneModem::C1PktPutBytes(Class1CmdResults)+0x104>
         5e29c:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         5e2a0:	e3100502 	tst	r0, #8388608	; 0x800000
         5e2a4:	1a000015 	bne	5e300 <TClassOneModem::C1PktPutBytes(Class1CmdResults)+0x94>
         5e2a8:	e3100002 	tst	r0, #2	; 0x2
         5e2ac:	e3a01000 	mov	r1, #0	; 0x0
         5e2b0:	e3a00001 	mov	r0, #1	; 0x1
         5e2b4:	05c4065a 	streqb	r0, [r4, #1626]	; fField1626
         5e2b8:	05c4166e 	streqb	r1, [r4, #1646]	; fField1646
         5e2bc:	15c4065b 	strneb	r0, [r4, #1627]	; fField1627
         5e2c0:	15c4166f 	strneb	r1, [r4, #1647]	; fField1647
         5e2c4:	e2841f93 	add	r1, r4, #588	; 0x24c
         5e2c8:	e2811b01 	add	r1, r1, #1024	; 0x400
         5e2cc:	e1a00004 	mov	r0, r4
         5e2d0:	eb66ee7b 	bl	1a19cc4 <TAsyncSerTool::$SetOutputFlowControl(TCMOOutputFlowControlParms *)>
         5e2d4:	e2841e66 	add	r1, r4, #1632	; 0x660
         5e2d8:	e1a00004 	mov	r0, r4
         5e2dc:	eb66ee73 	bl	1a19cb0 <TAsyncSerTool::$SetInputFlowControl(TCMOInputFlowControlParms *)>
         5e2e0:	e5940628 	ldr	r0, [r4, #1576]	; fField1576
         5e2e4:	e240cf45 	sub	ip, r0, #276	; 0x114
         5e2e8:	e33c0001 	teq	ip, #1	; 0x1
         5e2ec:	1a000003 	bne	5e300 <TClassOneModem::C1PktPutBytes(Class1CmdResults)+0x94>
         5e2f0:	e1a00004 	mov	r0, r4
         5e2f4:	eb6738dd 	bl	1a2c670 <TClassOneModem::$ZeroStuffingInit(void)>
         5e2f8:	e3300000 	teq	r0, #0	; 0x0
         5e2fc:	1a00001b 	bne	5e370 <TClassOneModem::C1PktPutBytes(Class1CmdResults)+0x104>
         5e300:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         5e304:	e3800609 	orr	r0, r0, #9437184	; 0x900000
         5e308:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         5e30c:	e5940aac 	ldr	r0, [r4, #2732]	; fField2732
         5e310:	e3100001 	tst	r0, #1	; 0x1
         5e314:	0a00000b 	beq	5e348 <TClassOneModem::C1PktPutBytes(Class1CmdResults)+0xdc>
         5e318:	e3100008 	tst	r0, #8	; 0x8
         5e31c:	0a000006 	beq	5e33c <TClassOneModem::C1PktPutBytes(Class1CmdResults)+0xd0>
         5e320:	e3800002 	orr	r0, r0, #2	; 0x2
         5e324:	e5840aac 	str	r0, [r4, #2732]	; fField2732
         5e328:	e1a00004 	mov	r0, r4
         5e32c:	eb66d9b5 	bl	1a14a08 <TFramedAsyncSerTool::$KillPut(void)>
         5e330:	e5940aac 	ldr	r0, [r4, #2732]	; fField2732
         5e334:	e3c00002 	bic	r0, r0, #2	; 0x2
         5e338:	e5840aac 	str	r0, [r4, #2732]	; fField2732
         5e33c:	e5940aac 	ldr	r0, [r4, #2732]	; fField2732
         5e340:	e3800004 	orr	r0, r0, #4	; 0x4
         5e344:	e5840aac 	str	r0, [r4, #2732]	; fField2732
         5e348:	e3a00006 	mov	r0, #6	; 0x6
         5e34c:	e58405bc 	str	r0, [r4, #1468]	; fField1468
         5e350:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         5e354:	e3800609 	orr	r0, r0, #9437184	; 0x900000
         5e358:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         5e35c:	e5d42640 	ldrb	r2, [r4, #1600]	; fField1600
         5e360:	e5941638 	ldr	r1, [r4, #1592]	; fField1592
         5e364:	e1a00004 	mov	r0, r4
         5e368:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5e36c:	ea66e608 	b	1a17b94 <TSerTool::$PutFramedBytes(CBufferList *, unsigned char)>
         5e370:	e1a01000 	mov	r1, r0
         5e374:	e1a00004 	mov	r0, r4
         5e378:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5e37c:	ea66bcbf 	b	1a0d680 <TClassOneModem::$C1PktComplete(long)>
         5e380:	ffffa23b 	swinv	0x00ffa23b
    */
}

/**
 * Symbol: TClassOneModem::GetBytes(CBufferList *)
 * Address: 0005e384
 */
TClassOneModem::GetBytes(CBufferList *) {
    /*
         5e384:	e59027b4 	ldr	r2, [r0, #1972]	; fField1972
         5e388:	e3320002 	teq	r2, #2	; 0x2
         5e38c:	1a66c933 	bne	1a10860 <TSerTool::$GetBytes(CBufferList *)>
         5e390:	0a66c92f 	beq	1a10854 <TMNP::$GetBytes(CBufferList *)>
    */
}

/**
 * Symbol: TClassOneModem::C1PktGetBytes(Class1CmdResults)
 * Address: 0005e394
 */
TClassOneModem::C1PktGetBytes(Class1CmdResults) {
    /*
         5e394:	e1a0c00d 	mov	ip, sp
         5e398:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5e39c:	e24cb004 	sub	fp, ip, #4	; 0x4
         5e3a0:	e1a04000 	mov	r4, r0
         5e3a4:	e3310001 	teq	r1, #1	; 0x1
         5e3a8:	0a000005 	beq	5e3c4 <TClassOneModem::C1PktGetBytes(Class1CmdResults)+0x30>
         5e3ac:	e1a00004 	mov	r0, r4
         5e3b0:	eb66bcc6 	bl	1a0d6d0 <TClassOneModem::$CheckForErrorResult(unsigned long)>
         5e3b4:	e3500000 	cmp	r0, #0	; 0x0
         5e3b8:	059f0078 	ldreq	r0, [pc, #78]	; 5e438 <TClassOneModem::C1PktGetBytes(Class1CmdResults)+0xa4>
         5e3bc:	0a000030 	beq	5e484 <TClassOneModem::C1PktGetBytes(Class1CmdResults)+0xf0>
         5e3c0:	1a00002f 	bne	5e484 <TClassOneModem::C1PktGetBytes(Class1CmdResults)+0xf0>
         5e3c4:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         5e3c8:	e3100102 	tst	r0, #-2147483648	; 0x80000000
         5e3cc:	1a00000d 	bne	5e408 <TClassOneModem::C1PktGetBytes(Class1CmdResults)+0x74>
         5e3d0:	e3100002 	tst	r0, #2	; 0x2
         5e3d4:	e3a01000 	mov	r1, #0	; 0x0
         5e3d8:	e3a00001 	mov	r0, #1	; 0x1
         5e3dc:	05c4165a 	streqb	r1, [r4, #1626]	; fField1626
         5e3e0:	05c4066e 	streqb	r0, [r4, #1646]	; fField1646
         5e3e4:	15c4165b 	strneb	r1, [r4, #1627]	; fField1627
         5e3e8:	15c4066f 	strneb	r0, [r4, #1647]	; fField1647
         5e3ec:	e2841f93 	add	r1, r4, #588	; 0x24c
         5e3f0:	e2811b01 	add	r1, r1, #1024	; 0x400
         5e3f4:	e1a00004 	mov	r0, r4
         5e3f8:	eb66ee31 	bl	1a19cc4 <TAsyncSerTool::$SetOutputFlowControl(TCMOOutputFlowControlParms *)>
         5e3fc:	e2841e66 	add	r1, r4, #1632	; 0x660
         5e400:	e1a00004 	mov	r0, r4
         5e404:	eb66ee29 	bl	1a19cb0 <TAsyncSerTool::$SetInputFlowControl(TCMOInputFlowControlParms *)>
         5e408:	e5940628 	ldr	r0, [r4, #1576]	; fField1576
         5e40c:	e240cf45 	sub	ip, r0, #276	; 0x114
         5e410:	e33c0002 	teq	ip, #2	; 0x2
         5e414:	1a000008 	bne	5e43c <TClassOneModem::C1PktGetBytes(Class1CmdResults)+0xa8>
         5e418:	e1a00004 	mov	r0, r4
         5e41c:	e3a02fee 	mov	r2, #952	; 0x3b8
         5e420:	e2822b02 	add	r2, r2, #2048	; 0x800
         5e424:	e3a01005 	mov	r1, #5	; 0x5
         5e428:	eb672c1d 	bl	1a294a4 <TClassOneModem::$PostTimer(unsigned long, unsigned long)>
         5e42c:	e3300000 	teq	r0, #0	; 0x0
         5e430:	1a000013 	bne	5e484 <TClassOneModem::C1PktGetBytes(Class1CmdResults)+0xf0>
         5e434:	ea00000c 	b	5e46c <TClassOneModem::C1PktGetBytes(Class1CmdResults)+0xd8>
         5e438:	ffffa23b 	swinv	0x00ffa23b
         5e43c:	e594263c 	ldr	r2, [r4, #1596]	; fField1596
         5e440:	e1a00004 	mov	r0, r4
         5e444:	e3a01006 	mov	r1, #6	; 0x6
         5e448:	eb672c15 	bl	1a294a4 <TClassOneModem::$PostTimer(unsigned long, unsigned long)>
         5e44c:	e3300000 	teq	r0, #0	; 0x0
         5e450:	1a00000b 	bne	5e484 <TClassOneModem::C1PktGetBytes(Class1CmdResults)+0xf0>
         5e454:	e1a00004 	mov	r0, r4
         5e458:	e3a01ffb 	mov	r1, #1004	; 0x3ec
         5e45c:	e2811bb3 	add	r1, r1, #183296	; 0x2cc00
         5e460:	e5942000 	ldr	r2, [r4]
         5e464:	e1a0e00f 	mov	lr, pc
         5e468:	e282ff6b 	add	pc, r2, #428	; 0x1ac
         5e46c:	e3a00008 	mov	r0, #8	; 0x8
         5e470:	e58405bc 	str	r0, [r4, #1468]	; fField1468
         5e474:	e5941638 	ldr	r1, [r4, #1592]	; fField1592
         5e478:	e1a00004 	mov	r0, r4
         5e47c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5e480:	ea66cd08 	b	1a118a8 <TSerTool::$GetFramedBytes(CBufferList *)>
         5e484:	e1a01000 	mov	r1, r0
         5e488:	e1a00004 	mov	r0, r4
         5e48c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5e490:	ea66bc7a 	b	1a0d680 <TClassOneModem::$C1PktComplete(long)>
    */
}

/**
 * Symbol: TClassOneModem::C2PktGetBytesSetup(void)
 * Address: 0005e494
 */
TClassOneModem::C2PktGetBytesSetup(void) {
    /*
         5e494:	e1a0c00d 	mov	ip, sp
         5e498:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         5e49c:	e24cb004 	sub	fp, ip, #4	; 0x4
         5e4a0:	e1a04000 	mov	r4, r0
         5e4a4:	e59005b0 	ldr	r0, [r0, #1456]	; fField1456
         5e4a8:	e3100002 	tst	r0, #2	; 0x2
         5e4ac:	e3a01000 	mov	r1, #0	; 0x0
         5e4b0:	e3a00001 	mov	r0, #1	; 0x1
         5e4b4:	05c4165a 	streqb	r1, [r4, #1626]	; fField1626
         5e4b8:	05c4066e 	streqb	r0, [r4, #1646]	; fField1646
         5e4bc:	15c4165b 	strneb	r1, [r4, #1627]	; fField1627
         5e4c0:	15c4066f 	strneb	r0, [r4, #1647]	; fField1647
         5e4c4:	e2841f93 	add	r1, r4, #588	; 0x24c
         5e4c8:	e2811b01 	add	r1, r1, #1024	; 0x400
         5e4cc:	e1a00004 	mov	r0, r4
         5e4d0:	eb66edfb 	bl	1a19cc4 <TAsyncSerTool::$SetOutputFlowControl(TCMOOutputFlowControlParms *)>
         5e4d4:	e2841e66 	add	r1, r4, #1632	; 0x660
         5e4d8:	e1a00004 	mov	r0, r4
         5e4dc:	eb66edf3 	bl	1a19cb0 <TAsyncSerTool::$SetInputFlowControl(TCMOInputFlowControlParms *)>
         5e4e0:	e1a00004 	mov	r0, r4
         5e4e4:	e3a01ffb 	mov	r1, #1004	; 0x3ec
         5e4e8:	e2811bb3 	add	r1, r1, #183296	; 0x2cc00
         5e4ec:	e5942000 	ldr	r2, [r4]
         5e4f0:	e1a0e00f 	mov	lr, pc
         5e4f4:	e282ff6b 	add	pc, r2, #428	; 0x1ac
         5e4f8:	e2840f9d 	add	r0, r4, #628	; 0x274
         5e4fc:	e2800b01 	add	r0, r0, #1024	; 0x400
         5e500:	e1a05000 	mov	r5, r0
         5e504:	eb6e3848 	bl	1bec62c <CBufferList::$RemoveAll(void)>
         5e508:	e3e03000 	mvn	r3, #0	; 0x0
         5e50c:	e3a02000 	mov	r2, #0	; 0x0
         5e510:	e92d000c 	stmdb	sp!, {r2, r3}
         5e514:	e2840faf 	add	r0, r4, #700	; 0x2bc
         5e518:	e2800b01 	add	r0, r0, #1024	; 0x400
         5e51c:	e1a06000 	mov	r6, r0
         5e520:	e59f1054 	ldr	r1, [pc, #54]	; 5e57c <TClassOneModem::C2PktGetBytesSetup(void)+0xe8>
         5e524:	e3a03000 	mov	r3, #0	; 0x0
         5e528:	e3a02001 	mov	r2, #1	; 0x1
         5e52c:	eb6e2bde 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
         5e530:	e28dd008 	add	sp, sp, #8	; 0x8
         5e534:	e3300000 	teq	r0, #0	; 0x0
         5e538:	1a00000b 	bne	5e56c <TClassOneModem::C2PktGetBytesSetup(void)+0xd8>
         5e53c:	e1a01006 	mov	r1, r6
         5e540:	e1a00005 	mov	r0, r5
         5e544:	eb6e2fee 	bl	1bea504 <CBufferList::$InsertLast(CBuffer *)>
         5e548:	e1a01005 	mov	r1, r5
         5e54c:	e1a00004 	mov	r0, r4
         5e550:	eb66e183 	bl	1a16b64 <TSerTool::$PutBytes(CBufferList *)>
         5e554:	e1a00004 	mov	r0, r4
         5e558:	e3a020c8 	mov	r2, #200	; 0xc8
         5e55c:	e3a0100a 	mov	r1, #10	; 0xa
         5e560:	eb672bcf 	bl	1a294a4 <TClassOneModem::$PostTimer(unsigned long, unsigned long)>
         5e564:	e3300000 	teq	r0, #0	; 0x0
         5e568:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         5e56c:	e1a01000 	mov	r1, r0
         5e570:	e1a00004 	mov	r0, r4
         5e574:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         5e578:	ea66bc40 	b	1a0d680 <TClassOneModem::$C1PktComplete(long)>
         5e57c:	0036f978 	eoreqs	pc, r6, r8, ror r9
    */
}

/**
 * Symbol: TClassOneModem::C2PktGetBytesSetupCont(void)
 * Address: 0005e580
 */
TClassOneModem::C2PktGetBytesSetupCont(void) {
    /*
         5e580:	e1a0c00d 	mov	ip, sp
         5e584:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         5e588:	e24cb004 	sub	fp, ip, #4	; 0x4
         5e58c:	e1a04000 	mov	r4, r0
         5e590:	e24dd004 	sub	sp, sp, #4	; 0x4
         5e594:	e1a0100d 	mov	r1, sp
         5e598:	eb66b818 	bl	1a0c600 <TAsyncSerTool::$BytesAvailable(unsigned long &)>
         5e59c:	e59d0000 	ldr	r0, [sp]
         5e5a0:	e3500003 	cmp	r0, #3	; 0x3
         5e5a4:	2a000016 	bcs	5e604 <TClassOneModem::C2PktGetBytesSetupCont(void)+0x84>
         5e5a8:	e2840f9d 	add	r0, r4, #628	; 0x274
         5e5ac:	e2800b01 	add	r0, r0, #1024	; 0x400
         5e5b0:	e1a05000 	mov	r5, r0
         5e5b4:	eb6e381c 	bl	1bec62c <CBufferList::$RemoveAll(void)>
         5e5b8:	e3e03000 	mvn	r3, #0	; 0x0
         5e5bc:	e3a02000 	mov	r2, #0	; 0x0
         5e5c0:	e92d000c 	stmdb	sp!, {r2, r3}
         5e5c4:	e2840faf 	add	r0, r4, #700	; 0x2bc
         5e5c8:	e2800b01 	add	r0, r0, #1024	; 0x400
         5e5cc:	e1a06000 	mov	r6, r0
         5e5d0:	e59f1038 	ldr	r1, [pc, #38]	; 5e610 <TClassOneModem::C2PktGetBytesSetupCont(void)+0x90>
         5e5d4:	e3a03000 	mov	r3, #0	; 0x0
         5e5d8:	e3a02001 	mov	r2, #1	; 0x1
         5e5dc:	eb6e2bb2 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
         5e5e0:	e28dd008 	add	sp, sp, #8	; 0x8
         5e5e4:	e3300000 	teq	r0, #0	; 0x0
         5e5e8:	1a000009 	bne	5e614 <TClassOneModem::C2PktGetBytesSetupCont(void)+0x94>
         5e5ec:	e1a01006 	mov	r1, r6
         5e5f0:	e1a00005 	mov	r0, r5
         5e5f4:	eb6e2fc2 	bl	1bea504 <CBufferList::$InsertLast(CBuffer *)>
         5e5f8:	e1a01005 	mov	r1, r5
         5e5fc:	e1a00004 	mov	r0, r4
         5e600:	eb66e157 	bl	1a16b64 <TSerTool::$PutBytes(CBufferList *)>
         5e604:	e1a00004 	mov	r0, r4
         5e608:	eb66fe2b 	bl	1a1debc <TClassOneModem::$C2PktGetBytes(void)>
         5e60c:	ea000003 	b	5e620 <TClassOneModem::C2PktGetBytesSetupCont(void)+0xa0>
         5e610:	0036f974 	eoreqs	pc, r6, r4, ror r9
         5e614:	e1a01000 	mov	r1, r0
         5e618:	e1a00004 	mov	r0, r4
         5e61c:	eb66bc17 	bl	1a0d680 <TClassOneModem::$C1PktComplete(long)>
         5e620:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TClassOneModem::C2PktGetBytes(void)
 * Address: 0005e624
 */
TClassOneModem::C2PktGetBytes(void) {
    /*
         5e624:	e1a0c00d 	mov	ip, sp
         5e628:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5e62c:	e24cb004 	sub	fp, ip, #4	; 0x4
         5e630:	e1a04000 	mov	r4, r0
         5e634:	e3a01006 	mov	r1, #6	; 0x6
         5e638:	e590263c 	ldr	r2, [r0, #1596]	; fField1596
         5e63c:	eb672b98 	bl	1a294a4 <TClassOneModem::$PostTimer(unsigned long, unsigned long)>
         5e640:	e3300000 	teq	r0, #0	; 0x0
         5e644:	11a01000 	movne	r1, r0
         5e648:	11a00004 	movne	r0, r4
         5e64c:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         5e650:	1a66bc0a 	bne	1a0d680 <TClassOneModem::$C1PktComplete(long)>
         5e654:	e3a00008 	mov	r0, #8	; 0x8
         5e658:	e58405bc 	str	r0, [r4, #1468]	; fField1468
         5e65c:	e5941638 	ldr	r1, [r4, #1592]	; fField1592
         5e660:	e1a00004 	mov	r0, r4
         5e664:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5e668:	ea66cc8e 	b	1a118a8 <TSerTool::$GetFramedBytes(CBufferList *)>
    */
}

/**
 * Symbol: TClassOneModem::C2PktCheckResult(Class1CmdResults)
 * Address: 0005e66c
 */
TClassOneModem::C2PktCheckResult(Class1CmdResults) {
    /*
         5e66c:	e3310024 	teq	r1, #36	; 0x24
         5e670:	159f1004 	ldrne	r1, [pc, #4]	; 5e67c <TClassOneModem::C2PktCheckResult(Class1CmdResults)+0x10>	; fField4
         5e674:	03a01000 	moveq	r1, #0	; 0x0
         5e678:	ea66bc00 	b	1a0d680 <TClassOneModem::$C1PktComplete(long)>
         5e67c:	ffffa23b 	swinv	0x00ffa23b
    */
}

/**
 * Symbol: TClassOneModem::C1PktGetPutResult(void)
 * Address: 0005e680
 */
TClassOneModem::C1PktGetPutResult(void) {
    /*
         5e680:	e1a0c00d 	mov	ip, sp
         5e684:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5e688:	e24cb004 	sub	fp, ip, #4	; 0x4
         5e68c:	e1a04000 	mov	r4, r0
         5e690:	e5d00640 	ldrb	r0, [r0, #1600]	; fField1600
         5e694:	e3300000 	teq	r0, #0	; 0x0
         5e698:	0a000012 	beq	5e6e8 <TClassOneModem::C1PktGetPutResult(void)+0x68>
         5e69c:	e3a00007 	mov	r0, #7	; 0x7
         5e6a0:	e58405bc 	str	r0, [r4, #1468]	; fField1468
         5e6a4:	e5940aac 	ldr	r0, [r4, #2732]	; fField2732
         5e6a8:	e3100001 	tst	r0, #1	; 0x1
         5e6ac:	11a00004 	movne	r0, r4
         5e6b0:	1b6737ed 	blne	1a2c66c <TClassOneModem::$ZeroStuffingDeinit(void)>
         5e6b4:	e594088c 	ldr	r0, [r4, #2188]	; fField2188
         5e6b8:	e3300004 	teq	r0, #4	; 0x4
         5e6bc:	13300008 	teqne	r0, #8	; 0x8
         5e6c0:	0a000008 	beq	5e6e8 <TClassOneModem::C1PktGetPutResult(void)+0x68>
         5e6c4:	e3a00fa6 	mov	r0, #664	; 0x298
         5e6c8:	e2800b0e 	add	r0, r0, #14336	; 0x3800
         5e6cc:	e584078c 	str	r0, [r4, #1932]	; fField1932
         5e6d0:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         5e6d4:	e3c00502 	bic	r0, r0, #8388608	; 0x800000
         5e6d8:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         5e6dc:	e1a00004 	mov	r0, r4
         5e6e0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5e6e4:	ea66c864 	b	1a1087c <TClassOneModem::$GetCommandResult(void)>
         5e6e8:	e1a00004 	mov	r0, r4
         5e6ec:	e3a01000 	mov	r1, #0	; 0x0
         5e6f0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5e6f4:	ea66bbe1 	b	1a0d680 <TClassOneModem::$C1PktComplete(long)>
    */
}

/**
 * Symbol: TClassOneModem::C1PktCheckPutResult(Class1CmdResults)
 * Address: 0005e6f8
 */
TClassOneModem::C1PktCheckPutResult(Class1CmdResults) {
    /*
         5e6f8:	e1a0c00d 	mov	ip, sp
         5e6fc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5e700:	e24cb004 	sub	fp, ip, #4	; 0x4
         5e704:	e1a04000 	mov	r4, r0
         5e708:	e3a00000 	mov	r0, #0	; 0x0
         5e70c:	e3310001 	teq	r1, #1	; 0x1
         5e710:	059415b0 	ldreq	r1, [r4, #1456]	; fField1456
         5e714:	03811601 	orreq	r1, r1, #1048576	; 0x100000
         5e718:	0a000003 	beq	5e72c <TClassOneModem::C1PktCheckPutResult(Class1CmdResults)+0x34>
         5e71c:	e3310000 	teq	r1, #0	; 0x0
         5e720:	1a000003 	bne	5e734 <TClassOneModem::C1PktCheckPutResult(Class1CmdResults)+0x3c>
         5e724:	e59415b0 	ldr	r1, [r4, #1456]	; fField1456
         5e728:	e3c11601 	bic	r1, r1, #1048576	; 0x100000
         5e72c:	e58415b0 	str	r1, [r4, #1456]	; fField1456
         5e730:	ea000003 	b	5e744 <TClassOneModem::C1PktCheckPutResult(Class1CmdResults)+0x4c>
         5e734:	e1a00004 	mov	r0, r4
         5e738:	eb66bbe4 	bl	1a0d6d0 <TClassOneModem::$CheckForErrorResult(unsigned long)>
         5e73c:	e3300000 	teq	r0, #0	; 0x0
         5e740:	059f000c 	ldreq	r0, [pc, #c]	; 5e754 <TClassOneModem::C1PktCheckPutResult(Class1CmdResults)+0x5c>
         5e744:	e1a01000 	mov	r1, r0
         5e748:	e1a00004 	mov	r0, r4
         5e74c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5e750:	ea66bbca 	b	1a0d680 <TClassOneModem::$C1PktComplete(long)>
         5e754:	ffffa23b 	swinv	0x00ffa23b
    */
}

/**
 * Symbol: TClassOneModem::C1PktCheckFRMResult(Class1CmdResults)
 * Address: 0005e758
 */
TClassOneModem::C1PktCheckFRMResult(Class1CmdResults) {
    /*
         5e758:	e1a0c00d 	mov	ip, sp
         5e75c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5e760:	e24cb004 	sub	fp, ip, #4	; 0x4
         5e764:	e1a04000 	mov	r4, r0
         5e768:	e3310000 	teq	r1, #0	; 0x0
         5e76c:	0a000005 	beq	5e788 <TClassOneModem::C1PktCheckFRMResult(Class1CmdResults)+0x30>
         5e770:	e3310004 	teq	r1, #4	; 0x4
         5e774:	03e00053 	mvneq	r0, #83	; 0x53
         5e778:	02400c46 	subeq	r0, r0, #17920	; 0x4600
         5e77c:	0a000007 	beq	5e7a0 <TClassOneModem::C1PktCheckFRMResult(Class1CmdResults)+0x48>
         5e780:	e3310003 	teq	r1, #3	; 0x3
         5e784:	1a000001 	bne	5e790 <TClassOneModem::C1PktCheckFRMResult(Class1CmdResults)+0x38>
         5e788:	e3a00000 	mov	r0, #0	; 0x0
         5e78c:	ea000003 	b	5e7a0 <TClassOneModem::C1PktCheckFRMResult(Class1CmdResults)+0x48>
         5e790:	e1a00004 	mov	r0, r4
         5e794:	eb66bbcd 	bl	1a0d6d0 <TClassOneModem::$CheckForErrorResult(unsigned long)>
         5e798:	e3300000 	teq	r0, #0	; 0x0
         5e79c:	059f000c 	ldreq	r0, [pc, #c]	; 5e7b0 <TClassOneModem::C1PktCheckFRMResult(Class1CmdResults)+0x58>
         5e7a0:	e1a01000 	mov	r1, r0
         5e7a4:	e1a00004 	mov	r0, r4
         5e7a8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5e7ac:	ea66bbb3 	b	1a0d680 <TClassOneModem::$C1PktComplete(long)>
         5e7b0:	ffffa23b 	swinv	0x00ffa23b
    */
}

/**
 * Symbol: TClassOneModem::C1PktGetPktCRC(void)
 * Address: 0005e7b4
 */
TClassOneModem::C1PktGetPktCRC(void) {
    /*
         5e7b4:	e1a0c00d 	mov	ip, sp
         5e7b8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5e7bc:	e24cb004 	sub	fp, ip, #4	; 0x4
         5e7c0:	e1a04000 	mov	r4, r0
         5e7c4:	eb671271 	bl	1a23190 <TClassOneModem::$AbortTimer(void)>
         5e7c8:	e3a01032 	mov	r1, #50	; 0x32
         5e7cc:	e2811c2b 	add	r1, r1, #11008	; 0x2b00
         5e7d0:	e594088c 	ldr	r0, [r4, #2188]	; fField2188
         5e7d4:	e3300004 	teq	r0, #4	; 0x4
         5e7d8:	13300008 	teqne	r0, #8	; 0x8
         5e7dc:	1a00000e 	bne	5e81c <TClassOneModem::C1PktGetPktCRC(void)+0x68>
         5e7e0:	e5d405f8 	ldrb	r0, [r4, #1528]	; fField1528
         5e7e4:	e3300000 	teq	r0, #0	; 0x0
         5e7e8:	1a000003 	bne	5e7fc <TClassOneModem::C1PktGetPktCRC(void)+0x48>
         5e7ec:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         5e7f0:	e3800102 	orr	r0, r0, #-2147483648	; 0x80000000
         5e7f4:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         5e7f8:	ea00001e 	b	5e878 <TClassOneModem::C1PktGetPktCRC(void)+0xc4>
         5e7fc:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         5e800:	e3c00102 	bic	r0, r0, #-2147483648	; 0x80000000
         5e804:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         5e808:	e1a00004 	mov	r0, r4
         5e80c:	e5942000 	ldr	r2, [r4]
         5e810:	e1a0e00f 	mov	lr, pc
         5e814:	e282ff6b 	add	pc, r2, #428	; 0x1ac
         5e818:	ea000016 	b	5e878 <TClassOneModem::C1PktGetPktCRC(void)+0xc4>
         5e81c:	e5940628 	ldr	r0, [r4, #1576]	; fField1576
         5e820:	e240cf45 	sub	ip, r0, #276	; 0x114
         5e824:	e33c0003 	teq	ip, #3	; 0x3
         5e828:	1a00000f 	bne	5e86c <TClassOneModem::C1PktGetPktCRC(void)+0xb8>
         5e82c:	e1a00004 	mov	r0, r4
         5e830:	e5942000 	ldr	r2, [r4]
         5e834:	e1a0e00f 	mov	lr, pc
         5e838:	e282ff6b 	add	pc, r2, #428	; 0x1ac
         5e83c:	e5d405f8 	ldrb	r0, [r4, #1528]	; fField1528
         5e840:	e3300000 	teq	r0, #0	; 0x0
         5e844:	0affffe8 	beq	5e7ec <TClassOneModem::C1PktGetPktCRC(void)+0x38>
         5e848:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         5e84c:	e3c00102 	bic	r0, r0, #-2147483648	; 0x80000000
         5e850:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         5e854:	e3a0000b 	mov	r0, #11	; 0xb
         5e858:	e58405bc 	str	r0, [r4, #1468]	; fField1468
         5e85c:	e3a00fee 	mov	r0, #952	; 0x3b8
         5e860:	e2800b02 	add	r0, r0, #2048	; 0x800
         5e864:	e584078c 	str	r0, [r4, #1932]	; fField1932
         5e868:	ea000008 	b	5e890 <TClassOneModem::C1PktGetPktCRC(void)+0xdc>
         5e86c:	e5d405f8 	ldrb	r0, [r4, #1528]	; fField1528
         5e870:	e3300000 	teq	r0, #0	; 0x0
         5e874:	1a000003 	bne	5e888 <TClassOneModem::C1PktGetPktCRC(void)+0xd4>
         5e878:	e1a00004 	mov	r0, r4
         5e87c:	e3a01000 	mov	r1, #0	; 0x0
         5e880:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5e884:	ea66bb7d 	b	1a0d680 <TClassOneModem::$C1PktComplete(long)>
         5e888:	e3a00009 	mov	r0, #9	; 0x9
         5e88c:	e58405bc 	str	r0, [r4, #1468]	; fField1468
         5e890:	e1a00004 	mov	r0, r4
         5e894:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5e898:	ea66c7f7 	b	1a1087c <TClassOneModem::$GetCommandResult(void)>
    */
}

/**
 * Symbol: TClassOneModem::C1PktCheckPktCRC(Class1CmdResults)
 * Address: 0005e89c
 */
TClassOneModem::C1PktCheckPktCRC(Class1CmdResults) {
    /*
         5e89c:	e1a0c00d 	mov	ip, sp
         5e8a0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5e8a4:	e24cb004 	sub	fp, ip, #4	; 0x4
         5e8a8:	e1a04000 	mov	r4, r0
         5e8ac:	e3310000 	teq	r1, #0	; 0x0
         5e8b0:	03a00000 	moveq	r0, #0	; 0x0
         5e8b4:	0a00000a 	beq	5e8e4 <TClassOneModem::C1PktCheckPktCRC(Class1CmdResults)+0x48>
         5e8b8:	e3310004 	teq	r1, #4	; 0x4
         5e8bc:	03e00053 	mvneq	r0, #83	; 0x53
         5e8c0:	02400c46 	subeq	r0, r0, #17920	; 0x4600
         5e8c4:	0a000006 	beq	5e8e4 <TClassOneModem::C1PktCheckPktCRC(Class1CmdResults)+0x48>
         5e8c8:	e3310003 	teq	r1, #3	; 0x3
         5e8cc:	059f0020 	ldreq	r0, [pc, #20]	; 5e8f4 <TClassOneModem::C1PktCheckPktCRC(Class1CmdResults)+0x58>	; fField20
         5e8d0:	0a000003 	beq	5e8e4 <TClassOneModem::C1PktCheckPktCRC(Class1CmdResults)+0x48>
         5e8d4:	e1a00004 	mov	r0, r4
         5e8d8:	eb66bb7c 	bl	1a0d6d0 <TClassOneModem::$CheckForErrorResult(unsigned long)>
         5e8dc:	e3300000 	teq	r0, #0	; 0x0
         5e8e0:	059f0010 	ldreq	r0, [pc, #10]	; 5e8f8 <TClassOneModem::C1PktCheckPktCRC(Class1CmdResults)+0x5c>
         5e8e4:	e1a01000 	mov	r1, r0
         5e8e8:	e1a00004 	mov	r0, r4
         5e8ec:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5e8f0:	ea66bb62 	b	1a0d680 <TClassOneModem::$C1PktComplete(long)>
         5e8f4:	ffffa237 	swinv	0x00ffa237
         5e8f8:	ffffa23b 	swinv	0x00ffa23b
    */
}

/**
 * Symbol: TClassOneModem::GetFramedBytes(CBufferList *)
 * Address: 0005e8fc
 */
TClassOneModem::GetFramedBytes(CBufferList *) {
    /*
         5e8fc:	e59027b4 	ldr	r2, [r0, #1972]	; fField1972
         5e900:	e3320002 	teq	r2, #2	; 0x2
         5e904:	1a66cbe7 	bne	1a118a8 <TSerTool::$GetFramedBytes(CBufferList *)>
         5e908:	0a66cbe3 	beq	1a1189c <TMNP::$GetFramedBytes(CBufferList *)>
    */
}

/**
 * Symbol: TClassOneModem::BlockGetAndPutChannel(void)
 * Address: 0005e90c
 */
TClassOneModem::BlockGetAndPutChannel(void) {
    /*
         5e90c:	e1a0c00d 	mov	ip, sp
         5e910:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         5e914:	e24cb004 	sub	fp, ip, #4	; 0x4
         5e918:	e1a03000 	mov	r3, r0
         5e91c:	e5d000ac 	ldrb	r0, [r0, #172]	; fField172
         5e920:	e3300000 	teq	r0, #0	; 0x0
         5e924:	05d30094 	ldreqb	r0, [r3, #148]
         5e928:	03300000 	teqeq	r0, #0	; 0x0
         5e92c:	13a0007d 	movne	r0, #125	; 0x7d
         5e930:	12400c3f 	subne	r0, r0, #16128	; 0x3f00
         5e934:	191ba800 	ldmnedb	fp, {fp, sp, pc}
         5e938:	e1a00003 	mov	r0, r3
         5e93c:	e3a02000 	mov	r2, #0	; 0x0
         5e940:	e3a01003 	mov	r1, #3	; 0x3
         5e944:	e5933000 	ldr	r3, [r3]
         5e948:	e1a0e00f 	mov	lr, pc
         5e94c:	e283ff49 	add	pc, r3, #292	; 0x124
         5e950:	e3a00000 	mov	r0, #0	; 0x0
         5e954:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TClassOneModem::UnblockGetAndPutChannel(void)
 * Address: 0005e958
 */
TClassOneModem::UnblockGetAndPutChannel(void) {
    /*
         5e958:	e1a0c00d 	mov	ip, sp
         5e95c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         5e960:	e24cb004 	sub	fp, ip, #4	; 0x4
         5e964:	e3a02001 	mov	r2, #1	; 0x1
         5e968:	e3a01003 	mov	r1, #3	; 0x3
         5e96c:	e5903000 	ldr	r3, [r0]
         5e970:	e1a0e00f 	mov	lr, pc
         5e974:	e283ff49 	add	pc, r3, #292	; 0x124
         5e978:	e3a00000 	mov	r0, #0	; 0x0
         5e97c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TClassOneModem::SetActiveConfigStrs(TCMOModemProfile *)
 * Address: 0005e980
 */
TClassOneModem::SetActiveConfigStrs(TCMOModemProfile *) {
    /*
         5e980:	e1a0c00d 	mov	ip, sp
         5e984:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         5e988:	e24cb004 	sub	fp, ip, #4	; 0x4
         5e98c:	e1a04000 	mov	r4, r0
         5e990:	e1a05001 	mov	r5, r1
         5e994:	e1a00001 	mov	r0, r1
         5e998:	e3a01000 	mov	r1, #0	; 0x0
         5e99c:	eb66cbc4 	bl	1a118b4 <TCMOModemProfile::$GetModemString(long)>
         5e9a0:	e5840798 	str	r0, [r4, #1944]	; fField1944
         5e9a4:	e1a00005 	mov	r0, r5
         5e9a8:	e3a01001 	mov	r1, #1	; 0x1
         5e9ac:	eb66cbc0 	bl	1a118b4 <TCMOModemProfile::$GetModemString(long)>
         5e9b0:	e584079c 	str	r0, [r4, #1948]	; fField1948
         5e9b4:	e1a00005 	mov	r0, r5
         5e9b8:	e3a01002 	mov	r1, #2	; 0x2
         5e9bc:	eb66cbbc 	bl	1a118b4 <TCMOModemProfile::$GetModemString(long)>
         5e9c0:	e58407a0 	str	r0, [r4, #1952]	; fField1952
         5e9c4:	e1a00005 	mov	r0, r5
         5e9c8:	e3a01003 	mov	r1, #3	; 0x3
         5e9cc:	eb66cbb8 	bl	1a118b4 <TCMOModemProfile::$GetModemString(long)>
         5e9d0:	e58407a4 	str	r0, [r4, #1956]	; fField1956
         5e9d4:	e1a00005 	mov	r0, r5
         5e9d8:	e3a01004 	mov	r1, #4	; 0x4
         5e9dc:	eb66cbb4 	bl	1a118b4 <TCMOModemProfile::$GetModemString(long)>
         5e9e0:	e58407a8 	str	r0, [r4, #1960]	; fField1960
         5e9e4:	e1a00005 	mov	r0, r5
         5e9e8:	e3a01005 	mov	r1, #5	; 0x5
         5e9ec:	eb66cbb0 	bl	1a118b4 <TCMOModemProfile::$GetModemString(long)>
         5e9f0:	e5a407ac 	str	r0, [r4, #1964]!	; fField1964
         5e9f4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TClassOneModem::SetModemProfile(void)
 * Address: 0005e9f8
 */
TClassOneModem::SetModemProfile(void) {
    /*
         5e9f8:	e1a0c00d 	mov	ip, sp
         5e9fc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         5ea00:	e24cb004 	sub	fp, ip, #4	; 0x4
         5ea04:	e1a04000 	mov	r4, r0
         5ea08:	e5900798 	ldr	r0, [r0, #1944]	; fField1944
         5ea0c:	eb6d5c27 	bl	1bb5ab0 <$strlen>
         5ea10:	e1a05000 	mov	r5, r0
         5ea14:	e594079c 	ldr	r0, [r4, #1948]	; fField1948
         5ea18:	eb6d5c24 	bl	1bb5ab0 <$strlen>
         5ea1c:	e0855000 	add	r5, r5, r0
         5ea20:	e59407a0 	ldr	r0, [r4, #1952]	; fField1952
         5ea24:	eb6d5c21 	bl	1bb5ab0 <$strlen>
         5ea28:	e0855000 	add	r5, r5, r0
         5ea2c:	e59407a4 	ldr	r0, [r4, #1956]	; fField1956
         5ea30:	eb6d5c1e 	bl	1bb5ab0 <$strlen>
         5ea34:	e0855000 	add	r5, r5, r0
         5ea38:	e59407a8 	ldr	r0, [r4, #1960]	; fField1960
         5ea3c:	eb6d5c1b 	bl	1bb5ab0 <$strlen>
         5ea40:	e0855000 	add	r5, r5, r0
         5ea44:	e59407ac 	ldr	r0, [r4, #1964]	; fField1964
         5ea48:	eb6d5c18 	bl	1bb5ab0 <$strlen>
         5ea4c:	e0850000 	add	r0, r5, r0
         5ea50:	e2806006 	add	r6, r0, #6	; 0x6
         5ea54:	e2860028 	add	r0, r6, #40	; 0x28
         5ea58:	eb6e0db8 	bl	1be2140 <$NewPtr>
         5ea5c:	e1b05000 	movs	r5, r0
         5ea60:	03a000e9 	moveq	r0, #233	; 0xe9
         5ea64:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
         5ea68:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         5ea6c:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         5ea70:	e3300000 	teq	r0, #0	; 0x0
         5ea74:	1b6e098e 	blne	1be10b4 <$DisposPtr>
         5ea78:	e58457d8 	str	r5, [r4, #2008]	; fField2008
         5ea7c:	e1a00005 	mov	r0, r5
         5ea80:	e1a01006 	mov	r1, r6
         5ea84:	eb66ec80 	bl	1a19c8c <TCMOModemProfile::$SetDefault(unsigned long)>
         5ea88:	e2843e7a 	add	r3, r4, #1952	; 0x7a0
         5ea8c:	e993000e 	ldmib	r3, {r1, r2, r3}
         5ea90:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         5ea94:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         5ea98:	e2843e7a 	add	r3, r4, #1952	; 0x7a0
         5ea9c:	e813000e 	ldmda	r3, {r1, r2, r3}
         5eaa0:	eb66ec86 	bl	1a19cc0 <TCMOModemProfile::$SetModemStrings(unsigned char const *, unsigned char const *, unsigned char const *, unsigned char const *, unsigned char const *, unsigned char const *)>
         5eaa4:	e28dd00c 	add	sp, sp, #12	; 0xc
         5eaa8:	e59417d8 	ldr	r1, [r4, #2008]	; fField2008
         5eaac:	e1a00004 	mov	r0, r4
         5eab0:	eb66ec72 	bl	1a19c80 <TClassOneModem::$SetActiveConfigStrs(TCMOModemProfile *)>
         5eab4:	e3a00000 	mov	r0, #0	; 0x0
         5eab8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TClassOneModem::SetCDOption(void)
 * Address: 0005eabc
 */
TClassOneModem::SetCDOption(void) {
    /*
         5eabc:	e1a0c00d 	mov	ip, sp
         5eac0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5eac4:	e24cb004 	sub	fp, ip, #4	; 0x4
         5eac8:	e1a04000 	mov	r4, r0
         5eacc:	e24dd014 	sub	sp, sp, #20	; 0x14
         5ead0:	e1a0000d 	mov	r0, sp
         5ead4:	eb6d78d4 	bl	1bbce2c <TCMOSerialEventEnables::$__ct(void)>
         5ead8:	e5d407f0 	ldrb	r0, [r4, #2032]	; fField2032
         5eadc:	e3300000 	teq	r0, #0	; 0x0
         5eae0:	13a00000 	movne	r0, #0	; 0x0
         5eae4:	158d000c 	strne	r0, [sp, #12]	; fField12
         5eae8:	1a000009 	bne	5eb14 <TClassOneModem::SetCDOption(void)+0x58>
         5eaec:	e3a00004 	mov	r0, #4	; 0x4
         5eaf0:	e58d000c 	str	r0, [sp, #12]	; fField12
         5eaf4:	e5940788 	ldr	r0, [r4, #1928]	; fField1928
         5eaf8:	e3500e96 	cmp	r0, #2400	; 0x960
         5eafc:	959407f8 	ldrls	r0, [r4, #2040]	; fField2040
         5eb00:	859407fc 	ldrhi	r0, [r4, #2044]	; fField2044
         5eb04:	e060c280 	rsb	ip, r0, r0, lsl #5
         5eb08:	e06c0400 	rsb	r0, ip, r0, lsl #8
         5eb0c:	e1a00700 	mov	r0, r0, lsl #14
         5eb10:	e58d0010 	str	r0, [sp, #16]	; fField16
         5eb14:	e59d2000 	ldr	r2, [sp]
         5eb18:	e1a0100d 	mov	r1, sp
         5eb1c:	e1a00004 	mov	r0, r4
         5eb20:	e3a03c02 	mov	r3, #512	; 0x200
         5eb24:	eb67054c 	bl	1a2005c <TFramedAsyncSerTool::$ProcessOptionStart(TOption *, unsigned long, unsigned long)>
         5eb28:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TClassOneModem::InitPhoneNumberInfo(void)
 * Address: 0005eb2c
 */
TClassOneModem::InitPhoneNumberInfo(void) {
    /*
         5eb2c:	e1a0c00d 	mov	ip, sp
         5eb30:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         5eb34:	e24cb004 	sub	fp, ip, #4	; 0x4
         5eb38:	e1a04000 	mov	r4, r0
         5eb3c:	e59f60d4 	ldr	r6, [pc, #d4]	; 5ec18 <TClassOneModem::InitPhoneNumberInfo(void)+0xec>
         5eb40:	e3a00000 	mov	r0, #0	; 0x0
         5eb44:	e5840900 	str	r0, [r4, #2304]	; fField2304
         5eb48:	e58408fc 	str	r0, [r4, #2300]	; fField2300
         5eb4c:	e5840904 	str	r0, [r4, #2308]	; fField2308
         5eb50:	e5d407c8 	ldrb	r0, [r4, #1992]	; fField1992
         5eb54:	e3300000 	teq	r0, #0	; 0x0
         5eb58:	0a000004 	beq	5eb70 <TClassOneModem::InitPhoneNumberInfo(void)+0x44>
         5eb5c:	e5d408d8 	ldrb	r0, [r4, #2264]	; fField2264
         5eb60:	e3300000 	teq	r0, #0	; 0x0
         5eb64:	15d408d9 	ldrneb	r0, [r4, #2265]	; fField2265
         5eb68:	13300000 	teqne	r0, #0	; 0x0
         5eb6c:	0a00002b 	beq	5ec20 <TClassOneModem::InitPhoneNumberInfo(void)+0xf4>
         5eb70:	e5941184 	ldr	r1, [r4, #388]	; fField388
         5eb74:	e3310000 	teq	r1, #0	; 0x0
         5eb78:	0a000029 	beq	5ec24 <TClassOneModem::InitPhoneNumberInfo(void)+0xf8>
         5eb7c:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         5eb80:	e1a0000d 	mov	r0, sp
         5eb84:	eb6d5bdb 	bl	1bb5af8 <TOptionIterator::$__ct(TOptionArray *)>
         5eb88:	e1a0000d 	mov	r0, sp
         5eb8c:	eb6d6822 	bl	1bb8c1c <TOptionIterator::$FirstOption(void)>
         5eb90:	e1a05000 	mov	r5, r0
         5eb94:	e1a0000d 	mov	r0, sp
         5eb98:	eb6d6c48 	bl	1bb9cc0 <TOptionIterator::$More(void)>
         5eb9c:	e3300000 	teq	r0, #0	; 0x0
         5eba0:	0a000017 	beq	5ec04 <TClassOneModem::InitPhoneNumberInfo(void)+0xd8>
         5eba4:	e59f7070 	ldr	r7, [pc, #70]	; 5ec1c <TClassOneModem::InitPhoneNumberInfo(void)+0xf0>
         5eba8:	e5950000 	ldr	r0, [r5]
         5ebac:	e1300007 	teq	r0, r7
         5ebb0:	1a00000c 	bne	5ebe8 <TClassOneModem::InitPhoneNumberInfo(void)+0xbc>
         5ebb4:	e595000c 	ldr	r0, [r5, #12]	; fField12
         5ebb8:	e3300003 	teq	r0, #3	; 0x3
         5ebbc:	1a000005 	bne	5ebd8 <TClassOneModem::InitPhoneNumberInfo(void)+0xac>
         5ebc0:	e2850014 	add	r0, r5, #20	; 0x14
         5ebc4:	e58408fc 	str	r0, [r4, #2300]	; fField2300
         5ebc8:	e5950010 	ldr	r0, [r5, #16]	; fField16
         5ebcc:	e5840900 	str	r0, [r4, #2304]	; fField2304
         5ebd0:	e3300000 	teq	r0, #0	; 0x0
         5ebd4:	13a06000 	movne	r6, #0	; 0x0
         5ebd8:	e5950008 	ldr	r0, [r5, #8]	; fField8
         5ebdc:	e3c000ff 	bic	r0, r0, #255	; 0xff
         5ebe0:	e3800102 	orr	r0, r0, #-2147483648	; 0x80000000
         5ebe4:	e5a50008 	str	r0, [r5, #8]!	; fField8
         5ebe8:	e1a0000d 	mov	r0, sp
         5ebec:	eb6d6c36 	bl	1bb9ccc <TOptionIterator::$NextOption(void)>
         5ebf0:	e1a05000 	mov	r5, r0
         5ebf4:	e1a0000d 	mov	r0, sp
         5ebf8:	eb6d6c30 	bl	1bb9cc0 <TOptionIterator::$More(void)>
         5ebfc:	e3300000 	teq	r0, #0	; 0x0
         5ec00:	1affffe8 	bne	5eba8 <TClassOneModem::InitPhoneNumberInfo(void)+0x7c>
         5ec04:	e1a0000d 	mov	r0, sp
         5ec08:	e3a01000 	mov	r1, #0	; 0x0
         5ec0c:	eb6d5fca 	bl	1bb6b3c <TOptionIterator::$__dt(void)>
         5ec10:	e28dd01c 	add	sp, sp, #28	; 0x1c
         5ec14:	ea000002 	b	5ec24 <TClassOneModem::InitPhoneNumberInfo(void)+0xf8>
         5ec18:	ffffc16b 	swinv	0x00ffc16b
         5ec1c:	726f7574 	rsbvc	r7, pc, #486539264	; 0x1d000000
         5ec20:	e3a06000 	mov	r6, #0	; 0x0
         5ec24:	e1a00006 	mov	r0, r6
         5ec28:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TClassOneModem::AbortTimer(void)
 * Address: 0005ec2c
 */
TClassOneModem::AbortTimer(void) {
    /*
         5ec2c:	e1a0c00d 	mov	ip, sp
         5ec30:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5ec34:	e24cb004 	sub	fp, ip, #4	; 0x4
         5ec38:	e1a04000 	mov	r4, r0
         5ec3c:	e59005b0 	ldr	r0, [r0, #1456]	; fField1456
         5ec40:	e3100010 	tst	r0, #16	; 0x10
         5ec44:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         5ec48:	e2840f46 	add	r0, r4, #280	; 0x118
         5ec4c:	e2800b02 	add	r0, r0, #2048	; 0x800
         5ec50:	eb6dbebd 	bl	1bce74c <TUAsyncMessage::$Abort(void)>
         5ec54:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         5ec58:	e3c00010 	bic	r0, r0, #16	; 0x10
         5ec5c:	e5a405b0 	str	r0, [r4, #1456]!	; fField1456
         5ec60:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TClassOneModem::PostTimer(unsigned long, unsigned long)
 * Address: 0005ec64
 */
TClassOneModem::PostTimer(unsigned long, unsigned long) {
    /*
         5ec64:	e1a0c00d 	mov	ip, sp
         5ec68:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         5ec6c:	e24cb004 	sub	fp, ip, #4	; 0x4
         5ec70:	e1a04000 	mov	r4, r0
         5ec74:	e1a00001 	mov	r0, r1
         5ec78:	e1a01002 	mov	r1, r2
         5ec7c:	e24dd010 	sub	sp, sp, #16	; 0x10
         5ec80:	e5840914 	str	r0, [r4, #2324]	; fField2324
         5ec84:	e2845f4a 	add	r5, r4, #296	; 0x128
         5ec88:	e2855b02 	add	r5, r5, #2048	; 0x800
         5ec8c:	e1a06005 	mov	r6, r5
         5ec90:	e28d0008 	add	r0, sp, #8	; 0x8
         5ec94:	e3a02066 	mov	r2, #102	; 0x66
         5ec98:	e2822c0e 	add	r2, r2, #3584	; 0xe00
         5ec9c:	eb6dba89 	bl	1bcd6c8 <TTime::$__ct(unsigned long, TimeUnits)>
         5eca0:	e1a0000d 	mov	r0, sp
         5eca4:	eb6dd34b 	bl	1bd39d8 <$GetGlobalTime>
         5eca8:	e24dd008 	sub	sp, sp, #8	; 0x8
         5ecac:	e28d1008 	add	r1, sp, #8	; 0x8
         5ecb0:	e8915000 	ldmia	r1, {ip, lr}
         5ecb4:	e88d5000 	stmia	sp, {ip, lr}
         5ecb8:	e1a0100d 	mov	r1, sp
         5ecbc:	e28d0010 	add	r0, sp, #16	; 0x10
         5ecc0:	eb6e08ef 	bl	1be1084 <$CompAdd>
         5ecc4:	e1b00006 	movs	r0, r6
         5ecc8:	1a000003 	bne	5ecdc <TClassOneModem::PostTimer(unsigned long, unsigned long)+0x78>
         5eccc:	e3a00008 	mov	r0, #8	; 0x8
         5ecd0:	eb6dbe98 	bl	1bce738 <$__nw(unsigned int)>
         5ecd4:	e3300000 	teq	r0, #0	; 0x0
         5ecd8:	0a000001 	beq	5ece4 <TClassOneModem::PostTimer(unsigned long, unsigned long)+0x80>
         5ecdc:	e89d1008 	ldmia	sp, {r3, ip}
         5ece0:	e8801008 	stmia	r0, {r3, ip}
         5ece4:	e28dd008 	add	sp, sp, #8	; 0x8
         5ece8:	e284c08c 	add	ip, r4, #140	; 0x8c
         5ecec:	e284ef46 	add	lr, r4, #280	; 0x118
         5ecf0:	e28eeb02 	add	lr, lr, #2048	; 0x800
         5ecf4:	e2846f45 	add	r6, r4, #276	; 0x114
         5ecf8:	e2866b02 	add	r6, r6, #2048	; 0x800
         5ecfc:	e3a02000 	mov	r2, #0	; 0x0
         5ed00:	e1a03005 	mov	r3, r5
         5ed04:	e3a05000 	mov	r5, #0	; 0x0
         5ed08:	e3a01000 	mov	r1, #0	; 0x0
         5ed0c:	e3a00001 	mov	r0, #1	; 0x1
         5ed10:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         5ed14:	e1a03005 	mov	r3, r5
         5ed18:	e3a02004 	mov	r2, #4	; 0x4
         5ed1c:	e92d000c 	stmdb	sp!, {r2, r3}
         5ed20:	e1a03006 	mov	r3, r6
         5ed24:	e1a0000c 	mov	r0, ip
         5ed28:	e3a02000 	mov	r2, #0	; 0x0
         5ed2c:	e59e1000 	ldr	r1, [lr]
         5ed30:	eb6df004 	bl	1bdad48 <TUPort::$SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)>
         5ed34:	e28dd018 	add	sp, sp, #24	; 0x18
         5ed38:	e3300000 	teq	r0, #0	; 0x0
         5ed3c:	059415b0 	ldreq	r1, [r4, #1456]	; fField1456
         5ed40:	03811010 	orreq	r1, r1, #16	; 0x10
         5ed44:	05a415b0 	streq	r1, [r4, #1456]!	; fField1456
         5ed48:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TClassOneModem::GetBytesImmediate(CBufferList *, long)
 * Address: 0005eda4
 */
TClassOneModem::GetBytesImmediate(CBufferList *, long) {
    /*
         5eda4:	e59037b4 	ldr	r3, [r0, #1972]	; fField1972
         5eda8:	e3330002 	teq	r3, #2	; 0x2
         5edac:	1a66c6af 	bne	1a10870 <TSerTool::$GetBytesImmediate(CBufferList *, long)>
         5edb0:	0a66c6ad 	beq	1a1086c <TMNP::$GetBytesImmediate(CBufferList *, long)>
    */
}

/**
 * Symbol: TClassOneModem::HandleTimerTick(void)
 * Address: 0005edfc
 */
TClassOneModem::HandleTimerTick(void) {
    /*
         5edfc:	e1a0c00d 	mov	ip, sp
         5ee00:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5ee04:	e24cb004 	sub	fp, ip, #4	; 0x4
         5ee08:	e1a04000 	mov	r4, r0
         5ee0c:	eb673618 	bl	1a2c674 <TClassOneModem::$ZeroStuffing(void)>
         5ee10:	e1a00004 	mov	r0, r4
         5ee14:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5ee18:	ea672166 	b	1a273b8 <TCommTool::$HandleTimerTick(void)>
    */
}

/**
 * Symbol: TClassOneModem::ZeroStuffing(void)
 * Address: 0005ee1c
 */
TClassOneModem::ZeroStuffing(void) {
    /*
         5ee1c:	e1a0c00d 	mov	ip, sp
         5ee20:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         5ee24:	e24cb004 	sub	fp, ip, #4	; 0x4
         5ee28:	e1a04000 	mov	r4, r0
         5ee2c:	e24dd008 	sub	sp, sp, #8	; 0x8
         5ee30:	e5900aac 	ldr	r0, [r0, #2732]	; fField2732
         5ee34:	e3100001 	tst	r0, #1	; 0x1
         5ee38:	0a000001 	beq	5ee44 <TClassOneModem::ZeroStuffing(void)+0x28>
         5ee3c:	e3100004 	tst	r0, #4	; 0x4
         5ee40:	0a000001 	beq	5ee4c <TClassOneModem::ZeroStuffing(void)+0x30>
         5ee44:	e24dd020 	sub	sp, sp, #32	; 0x20
         5ee48:	ea000048 	b	5ef70 <TClassOneModem::ZeroStuffing(void)+0x154>
         5ee4c:	e24dd020 	sub	sp, sp, #32	; 0x20
         5ee50:	e2840eab 	add	r0, r4, #2736	; 0xab0
         5ee54:	e1a05000 	mov	r5, r0
         5ee58:	e3a06000 	mov	r6, #0	; 0x0
         5ee5c:	e58d6004 	str	r6, [sp, #4]	; fField4
         5ee60:	e58d6000 	str	r6, [sp]
         5ee64:	e1a0100d 	mov	r1, sp
         5ee68:	eb6e0886 	bl	1be1088 <$CompCompare>
         5ee6c:	e3300000 	teq	r0, #0	; 0x0
         5ee70:	01a00005 	moveq	r0, r5
         5ee74:	0b6dd2d7 	bleq	1bd39d8 <$GetGlobalTime>
         5ee78:	e28d0010 	add	r0, sp, #16	; 0x10
         5ee7c:	eb6dd2d5 	bl	1bd39d8 <$GetGlobalTime>
         5ee80:	e1a00005 	mov	r0, r5
         5ee84:	e24dd008 	sub	sp, sp, #8	; 0x8
         5ee88:	e28d1018 	add	r1, sp, #24	; 0x18
         5ee8c:	e8915000 	ldmia	r1, {ip, lr}
         5ee90:	e88d5000 	stmia	sp, {ip, lr}
         5ee94:	e1a0100d 	mov	r1, sp
         5ee98:	eb6e087f 	bl	1be109c <$CompSub>
         5ee9c:	e28d0010 	add	r0, sp, #16	; 0x10
         5eea0:	e8bd5000 	ldmia	sp!, {ip, lr}
         5eea4:	e8805000 	stmia	r0, {ip, lr}
         5eea8:	e59f00c4 	ldr	r0, [pc, #c4]	; 5ef74 <TClassOneModem::ZeroStuffing(void)+0x158>
         5eeac:	e58d001c 	str	r0, [sp, #28]	; fField28
         5eeb0:	e58d6018 	str	r6, [sp, #24]	; fField24
         5eeb4:	e24dd008 	sub	sp, sp, #8	; 0x8
         5eeb8:	e28d0020 	add	r0, sp, #32	; 0x20
         5eebc:	e8905000 	ldmia	r0, {ip, lr}
         5eec0:	e88d5000 	stmia	sp, {ip, lr}
         5eec4:	e1a0100d 	mov	r1, sp
         5eec8:	e28d0010 	add	r0, sp, #16	; 0x10
         5eecc:	eb6e086c 	bl	1be1084 <$CompAdd>
         5eed0:	e28d0028 	add	r0, sp, #40	; 0x28
         5eed4:	e8bd5000 	ldmia	sp!, {ip, lr}
         5eed8:	e8805000 	stmia	r0, {ip, lr}
         5eedc:	e28d0020 	add	r0, sp, #32	; 0x20
         5eee0:	e3a01066 	mov	r1, #102	; 0x66
         5eee4:	e2811c0e 	add	r1, r1, #3584	; 0xe00
         5eee8:	eb6dc651 	bl	1bd0834 <TTime::$ConvertTo(TimeUnits)>
         5eeec:	e5942ab8 	ldr	r2, [r4, #2744]
         5eef0:	e0010092 	mul	r1, r2, r0
         5eef4:	e3a00ffa 	mov	r0, #1000	; 0x3e8
         5eef8:	eb6d4e92 	bl	1bb2948 <$__rt_udiv>
         5eefc:	e5941abc 	ldr	r1, [r4, #2748]	; fField2748
         5ef00:	e1510000 	cmp	r1, r0
         5ef04:	2a000019 	bcs	5ef70 <TClassOneModem::ZeroStuffing(void)+0x154>
         5ef08:	e0400001 	sub	r0, r0, r1
         5ef0c:	e5941b0c 	ldr	r1, [r4, #2828]
         5ef10:	e1500001 	cmp	r0, r1
         5ef14:	a1a00001 	movge	r0, r1
         5ef18:	e1a0c000 	mov	ip, r0
         5ef1c:	e3500019 	cmp	r0, #25	; 0x19
         5ef20:	33a0c019 	movcc	ip, #25	; 0x19
         5ef24:	e3e03000 	mvn	r3, #0	; 0x0
         5ef28:	e3a02000 	mov	r2, #0	; 0x0
         5ef2c:	e92d000c 	stmdb	sp!, {r2, r3}
         5ef30:	e5941b08 	ldr	r1, [r4, #2824]	; fField2824
         5ef34:	e2840d2b 	add	r0, r4, #2752	; 0xac0
         5ef38:	e1a0200c 	mov	r2, ip
         5ef3c:	e3a03000 	mov	r3, #0	; 0x0
         5ef40:	eb6e2959 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
         5ef44:	e28dd008 	add	sp, sp, #8	; 0x8
         5ef48:	e3300000 	teq	r0, #0	; 0x0
         5ef4c:	1a000007 	bne	5ef70 <TClassOneModem::ZeroStuffing(void)+0x154>
         5ef50:	e5940aac 	ldr	r0, [r4, #2732]	; fField2732
         5ef54:	e3800008 	orr	r0, r0, #8	; 0x8
         5ef58:	e5840aac 	str	r0, [r4, #2732]	; fField2732
         5ef5c:	e2841fba 	add	r1, r4, #744	; 0x2e8
         5ef60:	e2811b02 	add	r1, r1, #2048	; 0x800
         5ef64:	e1a00004 	mov	r0, r4
         5ef68:	e3a02000 	mov	r2, #0	; 0x0
         5ef6c:	eb66e308 	bl	1a17b94 <TSerTool::$PutFramedBytes(CBufferList *, unsigned char)>
         5ef70:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         5ef74:	00059fd8 	ldreqd	r9, [r5], -r8
    */
}

/**
 * Symbol: TClassOneModem::ZeroStuffingInit(void)
 * Address: 0005ef78
 */
TClassOneModem::ZeroStuffingInit(void) {
    /*
         5ef78:	e1a0c00d 	mov	ip, sp
         5ef7c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         5ef80:	e24cb004 	sub	fp, ip, #4	; 0x4
         5ef84:	e1a04000 	mov	r4, r0
         5ef88:	e5900b08 	ldr	r0, [r0, #2824]	; fField2824
         5ef8c:	e3300000 	teq	r0, #0	; 0x0
         5ef90:	11a00004 	movne	r0, r4
         5ef94:	1b6735b4 	blne	1a2c66c <TClassOneModem::$ZeroStuffingDeinit(void)>
         5ef98:	e5941634 	ldr	r1, [r4, #1588]	; fField1588
         5ef9c:	e1a00004 	mov	r0, r4
         5efa0:	eb671cf0 	bl	1a26368 <TClassOneModem::$GetModBaudRate(unsigned long)>
         5efa4:	e1a001a0 	mov	r0, r0, lsr #3
         5efa8:	e1a05000 	mov	r5, r0
         5efac:	e1a01100 	mov	r1, r0, lsl #2
         5efb0:	e3a00064 	mov	r0, #100	; 0x64
         5efb4:	eb6d4e63 	bl	1bb2948 <$__rt_udiv>
         5efb8:	e0850000 	add	r0, r5, r0
         5efbc:	e5840ab8 	str	r0, [r4, #2744]
         5efc0:	e0601200 	rsb	r1, r0, r0, lsl #4
         5efc4:	e1a01181 	mov	r1, r1, lsl #3
         5efc8:	e3a00ffa 	mov	r0, #1000	; 0x3e8
         5efcc:	eb6d4e5d 	bl	1bb2948 <$__rt_udiv>
         5efd0:	e5840b0c 	str	r0, [r4, #2828]
         5efd4:	eb6e0c5a 	bl	1be2144 <$NewPtrClear>
         5efd8:	e5840b08 	str	r0, [r4, #2824]	; fField2824
         5efdc:	e1b01000 	movs	r1, r0
         5efe0:	03a050e9 	moveq	r5, #233	; 0xe9
         5efe4:	02455b0a 	subeq	r5, r5, #10240	; 0x2800
         5efe8:	0a00000a 	beq	5f018 <TClassOneModem::ZeroStuffingInit(void)+0xa0>
         5efec:	e3e03000 	mvn	r3, #0	; 0x0
         5eff0:	e3a02000 	mov	r2, #0	; 0x0
         5eff4:	e92d000c 	stmdb	sp!, {r2, r3}
         5eff8:	e5942b0c 	ldr	r2, [r4, #2828]
         5effc:	e2840d2b 	add	r0, r4, #2752	; 0xac0
         5f000:	e1a06000 	mov	r6, r0
         5f004:	e3a03000 	mov	r3, #0	; 0x0
         5f008:	eb6e2927 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
         5f00c:	e28dd008 	add	sp, sp, #8	; 0x8
         5f010:	e1b05000 	movs	r5, r0
         5f014:	0a000001 	beq	5f020 <TClassOneModem::ZeroStuffingInit(void)+0xa8>
         5f018:	e24dd008 	sub	sp, sp, #8	; 0x8
         5f01c:	ea000016 	b	5f07c <TClassOneModem::ZeroStuffingInit(void)+0x104>
         5f020:	e2840fba 	add	r0, r4, #744	; 0x2e8
         5f024:	e2800b02 	add	r0, r0, #2048	; 0x800
         5f028:	e1a07000 	mov	r7, r0
         5f02c:	e3a01000 	mov	r1, #0	; 0x0
         5f030:	eb6e2915 	bl	1be948c <CBufferList::$Init(unsigned char)>
         5f034:	e1b05000 	movs	r5, r0
         5f038:	e24dd008 	sub	sp, sp, #8	; 0x8
         5f03c:	1a00000e 	bne	5f07c <TClassOneModem::ZeroStuffingInit(void)+0x104>
         5f040:	e1a01006 	mov	r1, r6
         5f044:	e1a00007 	mov	r0, r7
         5f048:	eb6e2d2d 	bl	1bea504 <CBufferList::$InsertLast(CBuffer *)>
         5f04c:	e3a00000 	mov	r0, #0	; 0x0
         5f050:	e58d0004 	str	r0, [sp, #4]	; fField4
         5f054:	e2841eab 	add	r1, r4, #2736	; 0xab0
         5f058:	e58d0000 	str	r0, [sp]
         5f05c:	e89d5000 	ldmia	sp, {ip, lr}
         5f060:	e8815000 	stmia	r1, {ip, lr}
         5f064:	e5840abc 	str	r0, [r4, #2748]	; fField2748
         5f068:	e3a00001 	mov	r0, #1	; 0x1
         5f06c:	e5840aac 	str	r0, [r4, #2732]	; fField2732
         5f070:	e59f000c 	ldr	r0, [pc, #c]	; 5f084 <TClassOneModem::ZeroStuffingInit(void)+0x10c>
         5f074:	e5840264 	str	r0, [r4, #612]
         5f078:	e5a40268 	str	r0, [r4, #616]!
         5f07c:	e1a00005 	mov	r0, r5
         5f080:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         5f084:	00059fd8 	ldreqd	r9, [r5], -r8
    */
}

/**
 * Symbol: TClassOneModem::ZeroStuffingDeinit(void)
 * Address: 0005f088
 */
TClassOneModem::ZeroStuffingDeinit(void) {
    /*
         5f088:	e1a0c00d 	mov	ip, sp
         5f08c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         5f090:	e24cb004 	sub	fp, ip, #4	; 0x4
         5f094:	e1a04000 	mov	r4, r0
         5f098:	e3a05000 	mov	r5, #0	; 0x0
         5f09c:	e5805264 	str	r5, [r0, #612]
         5f0a0:	e5805268 	str	r5, [r0, #616]
         5f0a4:	e5805aac 	str	r5, [r0, #2732]	; fField2732
         5f0a8:	e5900b08 	ldr	r0, [r0, #2824]	; fField2824
         5f0ac:	e3300000 	teq	r0, #0	; 0x0
         5f0b0:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         5f0b4:	eb6e07fe 	bl	1be10b4 <$DisposPtr>
         5f0b8:	e5a45b08 	str	r5, [r4, #2824]!	; fField2824
         5f0bc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TClassOneModem::SetSpeakerVolume(unsigned char)
 * Address: 0005f0c0
 */
TClassOneModem::SetSpeakerVolume(unsigned char) {
    /*
         5f0c0:	e1a0c00d 	mov	ip, sp
         5f0c4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         5f0c8:	e24cb004 	sub	fp, ip, #4	; 0x4
         5f0cc:	e1a04000 	mov	r4, r0
         5f0d0:	e20150ff 	and	r5, r1, #255	; 0xff
         5f0d4:	e5900304 	ldr	r0, [r0, #772]	; fField772
         5f0d8:	e3300000 	teq	r0, #0	; 0x0
         5f0dc:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         5f0e0:	e24dd010 	sub	sp, sp, #16	; 0x10
         5f0e4:	e1a0000d 	mov	r0, sp
         5f0e8:	eb673d84 	bl	1a2e700 <TCMOPCMCIAModemSound::$__ct(void)>
         5f0ec:	e3350000 	teq	r5, #0	; 0x0
         5f0f0:	0a000009 	beq	5f11c <TClassOneModem::SetSpeakerVolume(unsigned char)+0x5c>
         5f0f4:	e5d407c9 	ldrb	r0, [r4, #1993]	; fField1993
         5f0f8:	e3300031 	teq	r0, #49	; 0x31
         5f0fc:	03a00001 	moveq	r0, #1	; 0x1
         5f100:	0a000006 	beq	5f120 <TClassOneModem::SetSpeakerVolume(unsigned char)+0x60>
         5f104:	e3300032 	teq	r0, #50	; 0x32
         5f108:	03a00002 	moveq	r0, #2	; 0x2
         5f10c:	0a000003 	beq	5f120 <TClassOneModem::SetSpeakerVolume(unsigned char)+0x60>
         5f110:	e3300033 	teq	r0, #51	; 0x33
         5f114:	03a00003 	moveq	r0, #3	; 0x3
         5f118:	0a000000 	beq	5f120 <TClassOneModem::SetSpeakerVolume(unsigned char)+0x60>
         5f11c:	e3a00000 	mov	r0, #0	; 0x0
         5f120:	e5cd000c 	strb	r0, [sp, #12]	; fField12
         5f124:	e1a0100d 	mov	r1, sp
         5f128:	e5b40304 	ldr	r0, [r4, #772]!	; fField772
         5f12c:	eb0c96d6 	bl	384c8c <TSerialChip::ProcessOption(TOption *)>
         5f130:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TClassOneModem::GetComplete(long, unsigned char, unsigned long)
 * Address: 0005f134
 */
TClassOneModem::GetComplete(long, unsigned char, unsigned long) {
    /*
         5f134:	e1a0c00d 	mov	ip, sp
         5f138:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         5f13c:	e24cb004 	sub	fp, ip, #4	; 0x4
         5f140:	e1a04000 	mov	r4, r0
         5f144:	e1a05001 	mov	r5, r1
         5f148:	e20260ff 	and	r6, r2, #255	; 0xff
         5f14c:	e59005b0 	ldr	r0, [r0, #1456]	; fField1456
         5f150:	e3100008 	tst	r0, #8	; 0x8
         5f154:	e3a07000 	mov	r7, #0	; 0x0
         5f158:	0a00000b 	beq	5f18c <TClassOneModem::GetComplete(long, unsigned char, unsigned long)+0x58>
         5f15c:	e594327c 	ldr	r3, [r4, #636]	; fField636
         5f160:	e1a00003 	mov	r0, r3
         5f164:	e3a02001 	mov	r2, #1	; 0x1
         5f168:	e5941280 	ldr	r1, [r4, #640]	; fField640
         5f16c:	e5933000 	ldr	r3, [r3]
         5f170:	e1a0e00f 	mov	lr, pc
         5f174:	e283f034 	add	pc, r3, #52	; 0x34
         5f178:	e1a01005 	mov	r1, r5
         5f17c:	e584727c 	str	r7, [r4, #636]	; fField636
         5f180:	e1a00004 	mov	r0, r4
         5f184:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         5f188:	ea66c9bc 	b	1a11880 <TClassOneModem::$GetCommandResultComplete(long)>
         5f18c:	e3100702 	tst	r0, #524288	; 0x80000
         5f190:	0a00000c 	beq	5f1c8 <TClassOneModem::GetComplete(long, unsigned char, unsigned long)+0x94>
         5f194:	e594327c 	ldr	r3, [r4, #636]	; fField636
         5f198:	e1a00003 	mov	r0, r3
         5f19c:	e3a02001 	mov	r2, #1	; 0x1
         5f1a0:	e5941280 	ldr	r1, [r4, #640]	; fField640
         5f1a4:	e5933000 	ldr	r3, [r3]
         5f1a8:	e1a0e00f 	mov	lr, pc
         5f1ac:	e283f034 	add	pc, r3, #52	; 0x34
         5f1b0:	e584727c 	str	r7, [r4, #636]	; fField636
         5f1b4:	e5c465f8 	strb	r6, [r4, #1528]	; fField1528
         5f1b8:	e1a01005 	mov	r1, r5
         5f1bc:	e1a00004 	mov	r0, r4
         5f1c0:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         5f1c4:	ea66b92e 	b	1a0d684 <TClassOneModem::$C1PktContinue(long)>
         5f1c8:	e1a02006 	mov	r2, r6
         5f1cc:	e1a01005 	mov	r1, r5
         5f1d0:	e1a00004 	mov	r0, r4
         5f1d4:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         5f1d8:	ea66c9ab 	b	1a1188c <TMNP::$GetComplete(long, unsigned char, unsigned long)>
    */
}

/**
 * Symbol: TClassOneModem::KillGet(void)
 * Address: 0005f1dc
 */
TClassOneModem::KillGet(void) {
    /*
         5f1dc:	e59017b4 	ldr	r1, [r0, #1972]	; fField1972
         5f1e0:	e3310002 	teq	r1, #2	; 0x2
         5f1e4:	1a66d1fc 	bne	1a139dc <TFramedAsyncSerTool::$KillGet(void)>
         5f1e8:	0a66d1fc 	beq	1a139e0 <TMNP::$KillGet(void)>
    */
}

/**
 * Symbol: TClassOneModem::TimeOutCmdResult(void)
 * Address: 0005f1ec
 */
TClassOneModem::TimeOutCmdResult(void) {
    /*
         5f1ec:	e1a0c00d 	mov	ip, sp
         5f1f0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5f1f4:	e24cb004 	sub	fp, ip, #4	; 0x4
         5f1f8:	e1a04000 	mov	r4, r0
         5f1fc:	eb670fe2 	bl	1a2318c <TClassOneModem::$AbortCommand(void)>
         5f200:	e1a00004 	mov	r0, r4
         5f204:	e3a01d89 	mov	r1, #8768	; 0x2240
         5f208:	e2411902 	sub	r1, r1, #32768	; 0x8000
         5f20c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5f210:	ea66d612 	b	1a14a60 <TClassOneModem::$ModemCommandComplete(long)>
    */
}

/**
 * Symbol: TClassOneModem::DoControl(unsigned long, unsigned long)
 * Address: 0005f214
 */
TClassOneModem::DoControl(unsigned long, unsigned long) {
    /*
         5f214:	e1a0c00d 	mov	ip, sp
         5f218:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5f21c:	e24cb004 	sub	fp, ip, #4	; 0x4
         5f220:	e1a04000 	mov	r4, r0
         5f224:	e2410f45 	sub	r0, r1, #276	; 0x114
         5f228:	e350004e 	cmp	r0, #78	; 0x4e
         5f22c:	908ff100 	addls	pc, pc, r0, lsl #2
         5f230:	ea000066 	b	5f3d0 <TClassOneModem::DoControl(unsigned long, unsigned long)+0x1bc>
         5f234:	ea00004f 	b	5f378 <TClassOneModem::DoControl(unsigned long, unsigned long)+0x164>
         5f238:	ea00004e 	b	5f378 <TClassOneModem::DoControl(unsigned long, unsigned long)+0x164>
         5f23c:	ea000050 	b	5f384 <TClassOneModem::DoControl(unsigned long, unsigned long)+0x170>
         5f240:	ea00004f 	b	5f384 <TClassOneModem::DoControl(unsigned long, unsigned long)+0x170>
         5f244:	ea000051 	b	5f390 <TClassOneModem::DoControl(unsigned long, unsigned long)+0x17c>
         5f248:	ea00005d 	b	5f3c4 <TClassOneModem::DoControl(unsigned long, unsigned long)+0x1b0>
         5f24c:	ea000046 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f250:	ea000045 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f254:	ea000044 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f258:	ea000043 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f25c:	ea000042 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f260:	ea000041 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f264:	ea000040 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f268:	ea00003f 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f26c:	ea00003e 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f270:	ea00003d 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f274:	ea00003c 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f278:	ea00003b 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f27c:	ea00003a 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f280:	ea000039 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f284:	ea000038 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f288:	ea000037 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f28c:	ea000036 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f290:	ea000035 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f294:	ea000034 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f298:	ea000033 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f29c:	ea000032 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f2a0:	ea000031 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f2a4:	ea000030 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f2a8:	ea00002f 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f2ac:	ea00002e 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f2b0:	ea00002d 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f2b4:	ea00002c 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f2b8:	ea00002b 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f2bc:	ea00002a 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f2c0:	ea000029 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f2c4:	ea000028 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f2c8:	ea000027 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f2cc:	ea000026 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f2d0:	ea000025 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f2d4:	ea000024 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f2d8:	ea000023 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f2dc:	ea000022 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f2e0:	ea000021 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f2e4:	ea000020 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f2e8:	ea00001f 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f2ec:	ea00001e 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f2f0:	ea00001d 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f2f4:	ea00001c 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f2f8:	ea00001b 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f2fc:	ea00001a 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f300:	ea000019 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f304:	ea000018 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f308:	ea000017 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f30c:	ea000016 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f310:	ea000015 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f314:	ea000014 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f318:	ea000013 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f31c:	ea000012 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f320:	ea000011 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f324:	ea000010 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f328:	ea00000f 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f32c:	ea00000e 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f330:	ea00000d 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f334:	ea00000c 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f338:	ea00000b 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f33c:	ea00000a 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f340:	ea000009 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f344:	ea000008 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f348:	ea000007 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f34c:	ea000006 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f350:	ea000005 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f354:	ea000004 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f358:	ea000003 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f35c:	ea000002 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f360:	ea000001 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f364:	ea000000 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f368:	eaffffff 	b	5f36c <TClassOneModem::DoControl(unsigned long, unsigned long)+0x158>
         5f36c:	e1a00004 	mov	r0, r4
         5f370:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5f374:	ea66fac1 	b	1a1de80 <TClassOneModem::$C2DoCommand(unsigned long)>
         5f378:	e1a00004 	mov	r0, r4
         5f37c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5f380:	ea66c522 	b	1a10810 <TClassOneModem::$DoTransPkt(void)>
         5f384:	e1a00004 	mov	r0, r4
         5f388:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5f38c:	ea66c51d 	b	1a10808 <TClassOneModem::$DoRecvPkt(void)>
         5f390:	e284104c 	add	r1, r4, #76	; 0x4c
         5f394:	e2840e62 	add	r0, r4, #1568	; 0x620
         5f398:	e3a0202c 	mov	r2, #44	; 0x2c
         5f39c:	eb6d55ab 	bl	1bb4a50 <$memcpy>
         5f3a0:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         5f3a4:	e5900018 	ldr	r0, [r0, #24]	; fField24
         5f3a8:	e584078c 	str	r0, [r4, #1932]	; fField1932
         5f3ac:	e5940630 	ldr	r0, [r4, #1584]	; fField1584
         5f3b0:	e3300000 	teq	r0, #0	; 0x0
         5f3b4:	1584078c 	strne	r0, [r4, #1932]	; fField1932
         5f3b8:	e1a00004 	mov	r0, r4
         5f3bc:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5f3c0:	ea66c52d 	b	1a1087c <TClassOneModem::$GetCommandResult(void)>
         5f3c4:	e1a00004 	mov	r0, r4
         5f3c8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5f3cc:	ea66fab0 	b	1a1de94 <TClassOneModem::$C2ModemRecvPgData(void)>
         5f3d0:	e1a00004 	mov	r0, r4
         5f3d4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5f3d8:	ea66c0f6 	b	1a0f7b8 <TMNP::$DoControl(unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TClassOneModem::C2DoCommand(unsigned long)
 * Address: 0005f3dc
 */
TClassOneModem::C2DoCommand(unsigned long) {
    /*
         5f3dc:	e1a0c00d 	mov	ip, sp
         5f3e0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         5f3e4:	e24cb004 	sub	fp, ip, #4	; 0x4
         5f3e8:	e1a04000 	mov	r4, r0
         5f3ec:	e1a05001 	mov	r5, r1
         5f3f0:	e280104c 	add	r1, r0, #76	; 0x4c
         5f3f4:	e2800e62 	add	r0, r0, #1568	; 0x620
         5f3f8:	e3a0202c 	mov	r2, #44	; 0x2c
         5f3fc:	eb6d5593 	bl	1bb4a50 <$memcpy>
         5f400:	e28500e6 	add	r0, r5, #230	; 0xe6
         5f404:	e2400c02 	sub	r0, r0, #512	; 0x200
         5f408:	e3500048 	cmp	r0, #72	; 0x48
         5f40c:	908ff100 	addls	pc, pc, r0, lsl #2
         5f410:	ea0000e7 	b	5f7b4 <TClassOneModem::C2DoCommand(unsigned long)+0x3d8>
         5f414:	ea000068 	b	5f5bc <TClassOneModem::C2DoCommand(unsigned long)+0x1e0>
         5f418:	ea000047 	b	5f53c <TClassOneModem::C2DoCommand(unsigned long)+0x160>
         5f41c:	ea000048 	b	5f544 <TClassOneModem::C2DoCommand(unsigned long)+0x168>
         5f420:	ea000067 	b	5f5c4 <TClassOneModem::C2DoCommand(unsigned long)+0x1e8>
         5f424:	ea00007c 	b	5f61c <TClassOneModem::C2DoCommand(unsigned long)+0x240>
         5f428:	ea000067 	b	5f5cc <TClassOneModem::C2DoCommand(unsigned long)+0x1f0>
         5f42c:	ea000074 	b	5f604 <TClassOneModem::C2DoCommand(unsigned long)+0x228>
         5f430:	ea000045 	b	5f54c <TClassOneModem::C2DoCommand(unsigned long)+0x170>
         5f434:	ea000070 	b	5f5fc <TClassOneModem::C2DoCommand(unsigned long)+0x220>
         5f438:	ea00005d 	b	5f5b4 <TClassOneModem::C2DoCommand(unsigned long)+0x1d8>
         5f43c:	ea00007a 	b	5f62c <TClassOneModem::C2DoCommand(unsigned long)+0x250>
         5f440:	ea000043 	b	5f554 <TClassOneModem::C2DoCommand(unsigned long)+0x178>
         5f444:	ea000062 	b	5f5d4 <TClassOneModem::C2DoCommand(unsigned long)+0x1f8>
         5f448:	ea00007d 	b	5f644 <TClassOneModem::C2DoCommand(unsigned long)+0x268>
         5f44c:	ea000042 	b	5f55c <TClassOneModem::C2DoCommand(unsigned long)+0x180>
         5f450:	ea00006f 	b	5f614 <TClassOneModem::C2DoCommand(unsigned long)+0x238>
         5f454:	ea000060 	b	5f5dc <TClassOneModem::C2DoCommand(unsigned long)+0x200>
         5f458:	ea000041 	b	5f564 <TClassOneModem::C2DoCommand(unsigned long)+0x188>
         5f45c:	ea000042 	b	5f56c <TClassOneModem::C2DoCommand(unsigned long)+0x190>
         5f460:	ea000043 	b	5f574 <TClassOneModem::C2DoCommand(unsigned long)+0x198>
         5f464:	ea000072 	b	5f634 <TClassOneModem::C2DoCommand(unsigned long)+0x258>
         5f468:	ea000043 	b	5f57c <TClassOneModem::C2DoCommand(unsigned long)+0x1a0>
         5f46c:	ea000066 	b	5f60c <TClassOneModem::C2DoCommand(unsigned long)+0x230>
         5f470:	ea00005d 	b	5f5ec <TClassOneModem::C2DoCommand(unsigned long)+0x210>
         5f474:	ea00005a 	b	5f5e4 <TClassOneModem::C2DoCommand(unsigned long)+0x208>
         5f478:	ea000041 	b	5f584 <TClassOneModem::C2DoCommand(unsigned long)+0x1a8>
         5f47c:	ea000042 	b	5f58c <TClassOneModem::C2DoCommand(unsigned long)+0x1b0>
         5f480:	ea000043 	b	5f594 <TClassOneModem::C2DoCommand(unsigned long)+0x1b8>
         5f484:	ea00005a 	b	5f5f4 <TClassOneModem::C2DoCommand(unsigned long)+0x218>
         5f488:	ea000043 	b	5f59c <TClassOneModem::C2DoCommand(unsigned long)+0x1c0>
         5f48c:	ea000044 	b	5f5a4 <TClassOneModem::C2DoCommand(unsigned long)+0x1c8>
         5f490:	ea000063 	b	5f624 <TClassOneModem::C2DoCommand(unsigned long)+0x248>
         5f494:	ea000044 	b	5f5ac <TClassOneModem::C2DoCommand(unsigned long)+0x1d0>
         5f498:	ea000067 	b	5f63c <TClassOneModem::C2DoCommand(unsigned long)+0x260>
         5f49c:	ea00006e 	b	5f65c <TClassOneModem::C2DoCommand(unsigned long)+0x280>
         5f4a0:	ea00006f 	b	5f664 <TClassOneModem::C2DoCommand(unsigned long)+0x288>
         5f4a4:	ea000070 	b	5f66c <TClassOneModem::C2DoCommand(unsigned long)+0x290>
         5f4a8:	ea000071 	b	5f674 <TClassOneModem::C2DoCommand(unsigned long)+0x298>
         5f4ac:	ea000072 	b	5f67c <TClassOneModem::C2DoCommand(unsigned long)+0x2a0>
         5f4b0:	ea000073 	b	5f684 <TClassOneModem::C2DoCommand(unsigned long)+0x2a8>
         5f4b4:	ea000074 	b	5f68c <TClassOneModem::C2DoCommand(unsigned long)+0x2b0>
         5f4b8:	ea000075 	b	5f694 <TClassOneModem::C2DoCommand(unsigned long)+0x2b8>
         5f4bc:	ea000076 	b	5f69c <TClassOneModem::C2DoCommand(unsigned long)+0x2c0>
         5f4c0:	ea000077 	b	5f6a4 <TClassOneModem::C2DoCommand(unsigned long)+0x2c8>
         5f4c4:	ea000078 	b	5f6ac <TClassOneModem::C2DoCommand(unsigned long)+0x2d0>
         5f4c8:	ea000079 	b	5f6b4 <TClassOneModem::C2DoCommand(unsigned long)+0x2d8>
         5f4cc:	ea00007a 	b	5f6bc <TClassOneModem::C2DoCommand(unsigned long)+0x2e0>
         5f4d0:	ea00007b 	b	5f6c4 <TClassOneModem::C2DoCommand(unsigned long)+0x2e8>
         5f4d4:	ea00007c 	b	5f6cc <TClassOneModem::C2DoCommand(unsigned long)+0x2f0>
         5f4d8:	ea00007d 	b	5f6d4 <TClassOneModem::C2DoCommand(unsigned long)+0x2f8>
         5f4dc:	ea00007e 	b	5f6dc <TClassOneModem::C2DoCommand(unsigned long)+0x300>
         5f4e0:	ea00007f 	b	5f6e4 <TClassOneModem::C2DoCommand(unsigned long)+0x308>
         5f4e4:	ea000080 	b	5f6ec <TClassOneModem::C2DoCommand(unsigned long)+0x310>
         5f4e8:	ea000081 	b	5f6f4 <TClassOneModem::C2DoCommand(unsigned long)+0x318>
         5f4ec:	ea000082 	b	5f6fc <TClassOneModem::C2DoCommand(unsigned long)+0x320>
         5f4f0:	ea000083 	b	5f704 <TClassOneModem::C2DoCommand(unsigned long)+0x328>
         5f4f4:	ea000084 	b	5f70c <TClassOneModem::C2DoCommand(unsigned long)+0x330>
         5f4f8:	ea000085 	b	5f714 <TClassOneModem::C2DoCommand(unsigned long)+0x338>
         5f4fc:	ea000086 	b	5f71c <TClassOneModem::C2DoCommand(unsigned long)+0x340>
         5f500:	ea000087 	b	5f724 <TClassOneModem::C2DoCommand(unsigned long)+0x348>
         5f504:	ea000088 	b	5f72c <TClassOneModem::C2DoCommand(unsigned long)+0x350>
         5f508:	ea000089 	b	5f734 <TClassOneModem::C2DoCommand(unsigned long)+0x358>
         5f50c:	ea00008a 	b	5f73c <TClassOneModem::C2DoCommand(unsigned long)+0x360>
         5f510:	ea00008b 	b	5f744 <TClassOneModem::C2DoCommand(unsigned long)+0x368>
         5f514:	ea00008c 	b	5f74c <TClassOneModem::C2DoCommand(unsigned long)+0x370>
         5f518:	ea00008d 	b	5f754 <TClassOneModem::C2DoCommand(unsigned long)+0x378>
         5f51c:	ea00008e 	b	5f75c <TClassOneModem::C2DoCommand(unsigned long)+0x380>
         5f520:	ea00008f 	b	5f764 <TClassOneModem::C2DoCommand(unsigned long)+0x388>
         5f524:	ea000090 	b	5f76c <TClassOneModem::C2DoCommand(unsigned long)+0x390>
         5f528:	ea000091 	b	5f774 <TClassOneModem::C2DoCommand(unsigned long)+0x398>
         5f52c:	ea000092 	b	5f77c <TClassOneModem::C2DoCommand(unsigned long)+0x3a0>
         5f530:	ea000093 	b	5f784 <TClassOneModem::C2DoCommand(unsigned long)+0x3a8>
         5f534:	e3a05068 	mov	r5, #104	; 0x68
         5f538:	ea000092 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f53c:	e3a05021 	mov	r5, #33	; 0x21
         5f540:	ea000090 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f544:	e3a05022 	mov	r5, #34	; 0x22
         5f548:	ea00008e 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f54c:	e3a05027 	mov	r5, #39	; 0x27
         5f550:	ea00008c 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f554:	e3a0502b 	mov	r5, #43	; 0x2b
         5f558:	ea00008a 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f55c:	e3a0502e 	mov	r5, #46	; 0x2e
         5f560:	ea000088 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f564:	e3a05031 	mov	r5, #49	; 0x31
         5f568:	ea000086 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f56c:	e3a05032 	mov	r5, #50	; 0x32
         5f570:	ea000084 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f574:	e3a05033 	mov	r5, #51	; 0x33
         5f578:	ea000082 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f57c:	e3a05035 	mov	r5, #53	; 0x35
         5f580:	ea000080 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f584:	e3a05039 	mov	r5, #57	; 0x39
         5f588:	ea00007e 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f58c:	e3a0503a 	mov	r5, #58	; 0x3a
         5f590:	ea00007c 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f594:	e3a0503b 	mov	r5, #59	; 0x3b
         5f598:	ea00007a 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f59c:	e3a0503d 	mov	r5, #61	; 0x3d
         5f5a0:	ea000078 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f5a4:	e3a0503e 	mov	r5, #62	; 0x3e
         5f5a8:	ea000076 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f5ac:	e3a05040 	mov	r5, #64	; 0x40
         5f5b0:	ea000074 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f5b4:	e3a05029 	mov	r5, #41	; 0x29
         5f5b8:	ea000072 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f5bc:	e3a05020 	mov	r5, #32	; 0x20
         5f5c0:	ea000070 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f5c4:	e3a05023 	mov	r5, #35	; 0x23
         5f5c8:	ea00006e 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f5cc:	e3a05025 	mov	r5, #37	; 0x25
         5f5d0:	ea00006c 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f5d4:	e3a0502c 	mov	r5, #44	; 0x2c
         5f5d8:	ea00006a 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f5dc:	e3a05030 	mov	r5, #48	; 0x30
         5f5e0:	ea000068 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f5e4:	e3a05038 	mov	r5, #56	; 0x38
         5f5e8:	ea000066 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f5ec:	e3a05037 	mov	r5, #55	; 0x37
         5f5f0:	ea000064 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f5f4:	e3a0503c 	mov	r5, #60	; 0x3c
         5f5f8:	ea000062 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f5fc:	e3a05028 	mov	r5, #40	; 0x28
         5f600:	ea000060 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f604:	e3a05026 	mov	r5, #38	; 0x26
         5f608:	ea00005e 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f60c:	e3a05036 	mov	r5, #54	; 0x36
         5f610:	ea00005c 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f614:	e3a0502f 	mov	r5, #47	; 0x2f
         5f618:	ea00005a 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f61c:	e3a05024 	mov	r5, #36	; 0x24
         5f620:	ea000058 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f624:	e3a0503f 	mov	r5, #63	; 0x3f
         5f628:	ea000056 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f62c:	e3a0502a 	mov	r5, #42	; 0x2a
         5f630:	ea000054 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f634:	e3a05034 	mov	r5, #52	; 0x34
         5f638:	ea000052 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f63c:	e3a05041 	mov	r5, #65	; 0x41
         5f640:	ea000050 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f644:	e3a0502d 	mov	r5, #45	; 0x2d
         5f648:	e1a00004 	mov	r0, r4
         5f64c:	eb66afe1 	bl	1a0b5d8 <TClassOneModem::$BlockGetAndPutChannel(void)>
         5f650:	e1b02000 	movs	r2, r0
         5f654:	1a000057 	bne	5f7b8 <TClassOneModem::C2DoCommand(unsigned long)+0x3dc>
         5f658:	ea00004a 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f65c:	e3a05042 	mov	r5, #66	; 0x42
         5f660:	ea000048 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f664:	e3a05043 	mov	r5, #67	; 0x43
         5f668:	ea000046 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f66c:	e3a05044 	mov	r5, #68	; 0x44
         5f670:	ea000044 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f674:	e3a05045 	mov	r5, #69	; 0x45
         5f678:	ea000042 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f67c:	e3a05046 	mov	r5, #70	; 0x46
         5f680:	ea000040 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f684:	e3a05047 	mov	r5, #71	; 0x47
         5f688:	ea00003e 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f68c:	e3a05048 	mov	r5, #72	; 0x48
         5f690:	ea00003c 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f694:	e3a05049 	mov	r5, #73	; 0x49
         5f698:	ea00003a 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f69c:	e3a0504a 	mov	r5, #74	; 0x4a
         5f6a0:	ea000038 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f6a4:	e3a0504b 	mov	r5, #75	; 0x4b
         5f6a8:	ea000036 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f6ac:	e3a0504c 	mov	r5, #76	; 0x4c
         5f6b0:	ea000034 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f6b4:	e3a0504d 	mov	r5, #77	; 0x4d
         5f6b8:	ea000032 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f6bc:	e3a0504e 	mov	r5, #78	; 0x4e
         5f6c0:	ea000030 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f6c4:	e3a0504f 	mov	r5, #79	; 0x4f
         5f6c8:	ea00002e 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f6cc:	e3a05050 	mov	r5, #80	; 0x50
         5f6d0:	ea00002c 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f6d4:	e3a05051 	mov	r5, #81	; 0x51
         5f6d8:	ea00002a 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f6dc:	e3a05052 	mov	r5, #82	; 0x52
         5f6e0:	ea000028 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f6e4:	e3a05053 	mov	r5, #83	; 0x53
         5f6e8:	ea000026 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f6ec:	e3a05054 	mov	r5, #84	; 0x54
         5f6f0:	ea000024 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f6f4:	e3a05055 	mov	r5, #85	; 0x55
         5f6f8:	ea000022 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f6fc:	e3a05056 	mov	r5, #86	; 0x56
         5f700:	ea000020 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f704:	e3a05057 	mov	r5, #87	; 0x57
         5f708:	ea00001e 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f70c:	e3a05058 	mov	r5, #88	; 0x58
         5f710:	ea00001c 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f714:	e3a05059 	mov	r5, #89	; 0x59
         5f718:	ea00001a 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f71c:	e3a0505a 	mov	r5, #90	; 0x5a
         5f720:	ea000018 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f724:	e3a0505b 	mov	r5, #91	; 0x5b
         5f728:	ea000016 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f72c:	e3a0505c 	mov	r5, #92	; 0x5c
         5f730:	ea000014 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f734:	e3a0505d 	mov	r5, #93	; 0x5d
         5f738:	ea000012 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f73c:	e3a0505e 	mov	r5, #94	; 0x5e
         5f740:	ea000010 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f744:	e3a0505f 	mov	r5, #95	; 0x5f
         5f748:	ea00000e 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f74c:	e3a05060 	mov	r5, #96	; 0x60
         5f750:	ea00000c 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f754:	e3a05061 	mov	r5, #97	; 0x61
         5f758:	ea00000a 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f75c:	e3a05062 	mov	r5, #98	; 0x62
         5f760:	ea000008 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f764:	e3a05063 	mov	r5, #99	; 0x63
         5f768:	ea000006 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f76c:	e3a05064 	mov	r5, #100	; 0x64
         5f770:	ea000004 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f774:	e3a05065 	mov	r5, #101	; 0x65
         5f778:	ea000002 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f77c:	e3a05066 	mov	r5, #102	; 0x66
         5f780:	ea000000 	b	5f788 <TClassOneModem::C2DoCommand(unsigned long)+0x3ac>
         5f784:	e3a05067 	mov	r5, #103	; 0x67
         5f788:	e5940630 	ldr	r0, [r4, #1584]	; fField1584
         5f78c:	e3300000 	teq	r0, #0	; 0x0
         5f790:	059407d8 	ldreq	r0, [r4, #2008]	; fField2008
         5f794:	05900018 	ldreq	r0, [r0, #24]	; fField24
         5f798:	e1a01005 	mov	r1, r5
         5f79c:	e584078c 	str	r0, [r4, #1932]	; fField1932
         5f7a0:	e1a00004 	mov	r0, r4
         5f7a4:	eb66af88 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         5f7a8:	e1b02000 	movs	r2, r0
         5f7ac:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         5f7b0:	ea000000 	b	5f7b8 <TClassOneModem::C2DoCommand(unsigned long)+0x3dc>
         5f7b4:	e59f2014 	ldr	r2, [pc, #14]	; 5f7d0 <TClassOneModem::C2DoCommand(unsigned long)+0x3f4>
         5f7b8:	e2843f79 	add	r3, r4, #484	; 0x1e4
         5f7bc:	e2833b01 	add	r3, r3, #1024	; 0x400
         5f7c0:	e1a00004 	mov	r0, r4
         5f7c4:	e3a01002 	mov	r1, #2	; 0x2
         5f7c8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         5f7cc:	ea6d75a8 	b	1bbce74 <TCommTool::$CompleteRequest(CommToolChannelNumber, long, TCommToolReply &)>
         5f7d0:	ffffa23b 	swinv	0x00ffa23b
    */
}

/**
 * Symbol: TClassOneModem::__dt(void)
 * Address: 0005f7d4
 */
TClassOneModem::~TClassOneModem(void) {
    /*
         5f7d4:	e1a0c00d 	mov	ip, sp
         5f7d8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         5f7dc:	e24cb004 	sub	fp, ip, #4	; 0x4
         5f7e0:	e1a04000 	mov	r4, r0
         5f7e4:	e1a05001 	mov	r5, r1
         5f7e8:	e59f00dc 	ldr	r0, [pc, #dc]	; 5f8cc <TClassOneModem::__dt(void)+0xf8>
         5f7ec:	e5840000 	str	r0, [r4]
         5f7f0:	e2840fba 	add	r0, r4, #744	; 0x2e8
         5f7f4:	e2800b02 	add	r0, r0, #2048	; 0x800
         5f7f8:	e3a01000 	mov	r1, #0	; 0x0
         5f7fc:	eb6e1293 	bl	1be4250 <CBufferList::$__dt(void)>
         5f800:	e2840d2b 	add	r0, r4, #2752	; 0xac0
         5f804:	e3a01000 	mov	r1, #0	; 0x0
         5f808:	eb6e1297 	bl	1be426c <CBufferSegment::$__dt(void)>
         5f80c:	e2840f9e 	add	r0, r4, #632	; 0x278
         5f810:	e2800b02 	add	r0, r0, #2048	; 0x800
         5f814:	e3a01000 	mov	r1, #0	; 0x0
         5f818:	eb6e1293 	bl	1be426c <CBufferSegment::$__dt(void)>
         5f81c:	e2840f96 	add	r0, r4, #600	; 0x258
         5f820:	e2800b02 	add	r0, r0, #2048	; 0x800
         5f824:	e3a01000 	mov	r1, #0	; 0x0
         5f828:	eb6e1288 	bl	1be4250 <CBufferList::$__dt(void)>
         5f82c:	e2840f46 	add	r0, r4, #280	; 0x118
         5f830:	e2800b02 	add	r0, r0, #2048	; 0x800
         5f834:	e3a01000 	mov	r1, #0	; 0x0
         5f838:	eb6dbbb4 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
         5f83c:	e2840fd7 	add	r0, r4, #860	; 0x35c
         5f840:	e2800b01 	add	r0, r0, #1024	; 0x400
         5f844:	e3a01000 	mov	r1, #0	; 0x0
         5f848:	eb6e1287 	bl	1be426c <CBufferSegment::$__dt(void)>
         5f84c:	e2840fcd 	add	r0, r4, #820	; 0x334
         5f850:	e2800b01 	add	r0, r0, #1024	; 0x400
         5f854:	e3a01000 	mov	r1, #0	; 0x0
         5f858:	eb6e1283 	bl	1be426c <CBufferSegment::$__dt(void)>
         5f85c:	e2840fc3 	add	r0, r4, #780	; 0x30c
         5f860:	e2800b01 	add	r0, r0, #1024	; 0x400
         5f864:	e3a01000 	mov	r1, #0	; 0x0
         5f868:	eb6e127f 	bl	1be426c <CBufferSegment::$__dt(void)>
         5f86c:	e2840fb9 	add	r0, r4, #740	; 0x2e4
         5f870:	e2800b01 	add	r0, r0, #1024	; 0x400
         5f874:	e3a01000 	mov	r1, #0	; 0x0
         5f878:	eb6e127b 	bl	1be426c <CBufferSegment::$__dt(void)>
         5f87c:	e2840faf 	add	r0, r4, #700	; 0x2bc
         5f880:	e2800b01 	add	r0, r0, #1024	; 0x400
         5f884:	e3a01000 	mov	r1, #0	; 0x0
         5f888:	eb6e1277 	bl	1be426c <CBufferSegment::$__dt(void)>
         5f88c:	e2840fa5 	add	r0, r4, #660	; 0x294
         5f890:	e2800b01 	add	r0, r0, #1024	; 0x400
         5f894:	e3a01000 	mov	r1, #0	; 0x0
         5f898:	eb6e1273 	bl	1be426c <CBufferSegment::$__dt(void)>
         5f89c:	e2840f9d 	add	r0, r4, #628	; 0x274
         5f8a0:	e2800b01 	add	r0, r0, #1024	; 0x400
         5f8a4:	e3a01000 	mov	r1, #0	; 0x0
         5f8a8:	eb6e1268 	bl	1be4250 <CBufferList::$__dt(void)>
         5f8ac:	e1a00004 	mov	r0, r4
         5f8b0:	e3a01000 	mov	r1, #0	; 0x0
         5f8b4:	eb66ab1a 	bl	1a0a524 <TMNP::$__dt(void)>
         5f8b8:	e3150001 	tst	r5, #1	; 0x1
         5f8bc:	11a00004 	movne	r0, r4
         5f8c0:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         5f8c4:	1a6db785 	bne	1bcd6e0 <$__dl(void *)>
         5f8c8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         5f8cc:	0001d494 	muleq	r1, r4, r4
    */
}

/**
 * Symbol: TClassOneModem::GetCommEvent(void)
 * Address: 0005f8d0
 */
TClassOneModem::GetCommEvent(void) {
    /*
         5f8d0:	e1a0c00d 	mov	ip, sp
         5f8d4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5f8d8:	e24cb004 	sub	fp, ip, #4	; 0x4
         5f8dc:	e1a04000 	mov	r4, r0
         5f8e0:	eb6726ee 	bl	1a294a0 <TClassOneModem::$PostTapiEvent(void)>
         5f8e4:	e280cdfa 	add	ip, r0, #16000	; 0x3e80
         5f8e8:	e37c0010 	cmn	ip, #16	; 0x10
         5f8ec:	01a00004 	moveq	r0, r4
         5f8f0:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         5f8f4:	0a66c7e2 	beq	1a11884 <TSerTool::$GetCommEvent(void)>
         5f8f8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TClassOneModem::PostTapiEvent(void)
 * Address: 0005f8fc
 */
TClassOneModem::PostTapiEvent(void) {
    /*
         5f8fc:	e1a0c00d 	mov	ip, sp
         5f900:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         5f904:	e24cb004 	sub	fp, ip, #4	; 0x4
         5f908:	e1a04000 	mov	r4, r0
         5f90c:	e3a00e17 	mov	r0, #368	; 0x170
         5f910:	e2400901 	sub	r0, r0, #16384	; 0x4000
         5f914:	e59418ec 	ldr	r1, [r4, #2284]	; fField2284
         5f918:	e3310000 	teq	r1, #0	; 0x0
         5f91c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         5f920:	e24dd02c 	sub	sp, sp, #44	; 0x2c
         5f924:	e28d0008 	add	r0, sp, #8	; 0x8
         5f928:	eb6e3fa6 	bl	1bef7c8 <TCommToolGetEventReply::$__ct(void)>
         5f92c:	e3a00007 	mov	r0, #7	; 0x7
         5f930:	e3a05000 	mov	r5, #0	; 0x0
         5f934:	e58d0018 	str	r0, [sp, #24]	; fField24
         5f938:	e58d5004 	str	r5, [sp, #4]	; fField4
         5f93c:	e58d5000 	str	r5, [sp]
         5f940:	e28d001c 	add	r0, sp, #28	; 0x1c
         5f944:	e89d5000 	ldmia	sp, {ip, lr}
         5f948:	e8805000 	stmia	r0, {ip, lr}
         5f94c:	e59408ec 	ldr	r0, [r4, #2284]	; fField2284
         5f950:	e58d0024 	str	r0, [sp, #36]	; fField36
         5f954:	e5940204 	ldr	r0, [r4, #516]	; fField516
         5f958:	e58d0028 	str	r0, [sp, #40]	; fField40
         5f95c:	e28d1008 	add	r1, sp, #8	; 0x8
         5f960:	e1a00004 	mov	r0, r4
         5f964:	e3a02000 	mov	r2, #0	; 0x0
         5f968:	eb6d81b3 	bl	1bc003c <TCommTool::$PostCommEvent(TCommToolGetEventReply &, long)>
         5f96c:	e3300000 	teq	r0, #0	; 0x0
         5f970:	05a458ec 	streq	r5, [r4, #2284]!	; fField2284
         5f974:	e3a00000 	mov	r0, #0	; 0x0
         5f978:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TClassOneModem::PostCommEvent(TCommToolGetEventReply &, long)
 * Address: 0005f97c
 */
TClassOneModem::PostCommEvent(TCommToolGetEventReply &, long) {
    /*
         5f97c:	e1a0c00d 	mov	ip, sp
         5f980:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         5f984:	e24cb004 	sub	fp, ip, #4	; 0x4
         5f988:	e5913010 	ldr	r3, [r1, #16]	; fField16
         5f98c:	e3330001 	teq	r3, #1	; 0x1
         5f990:	1a000016 	bne	5f9f0 <TClassOneModem::PostCommEvent(TCommToolGetEventReply &, long)+0x74>
         5f994:	e591301c 	ldr	r3, [r1, #28]	; fField28
         5f998:	e3130004 	tst	r3, #4	; 0x4
         5f99c:	0a000013 	beq	5f9f0 <TClassOneModem::PostCommEvent(TCommToolGetEventReply &, long)+0x74>
         5f9a0:	e5d017eb 	ldrb	r1, [r0, #2027]	; fField2027
         5f9a4:	e3310000 	teq	r1, #0	; 0x0
         5f9a8:	0a00000d 	beq	5f9e4 <TClassOneModem::PostCommEvent(TCommToolGetEventReply &, long)+0x68>
         5f9ac:	e3320000 	teq	r2, #0	; 0x0
         5f9b0:	1a00000b 	bne	5f9e4 <TClassOneModem::PostCommEvent(TCommToolGetEventReply &, long)+0x68>
         5f9b4:	e5d018d8 	ldrb	r1, [r0, #2264]	; fField2264
         5f9b8:	e3310000 	teq	r1, #0	; 0x0
         5f9bc:	15d018d9 	ldrneb	r1, [r0, #2265]	; fField2265
         5f9c0:	13310000 	teqne	r1, #0	; 0x0
         5f9c4:	1a000006 	bne	5f9e4 <TClassOneModem::PostCommEvent(TCommToolGetEventReply &, long)+0x68>
         5f9c8:	e59015b0 	ldr	r1, [r0, #1456]	; fField1456
         5f9cc:	e3110001 	tst	r1, #1	; 0x1
         5f9d0:	15901018 	ldrne	r1, [r0, #24]	; fField24
         5f9d4:	12011002 	andne	r1, r1, #2	; 0x2
         5f9d8:	13310000 	teqne	r1, #0	; 0x0
         5f9dc:	159f1008 	ldrne	r1, [pc, #8]	; 5f9ec <TClassOneModem::PostCommEvent(TCommToolGetEventReply &, long)+0x70>	; fField8
         5f9e0:	1b6d85aa 	blne	1bc1090 <TCommTool::$StartAbort(long)>
         5f9e4:	e3a00000 	mov	r0, #0	; 0x0
         5f9e8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         5f9ec:	ffffc177 	swinv	0x00ffc177
         5f9f0:	e91b6800 	ldmdb	fp, {fp, sp, lr}
         5f9f4:	ea6d8190 	b	1bc003c <TCommTool::$PostCommEvent(TCommToolGetEventReply &, long)>
    */
}

/**
 * Symbol: TClassOneModem::ResArbReleaseStart(unsigned char *, unsigned char *)
 * Address: 0005f9f8
 */
TClassOneModem::ResArbReleaseStart(unsigned char *, unsigned char *) {
    /*
         5f9f8:	e1a0c00d 	mov	ip, sp
         5f9fc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5fa00:	e24cb004 	sub	fp, ip, #4	; 0x4
         5fa04:	e1a04000 	mov	r4, r0
         5fa08:	e3a00001 	mov	r0, #1	; 0x1
         5fa0c:	e5c408f0 	strb	r0, [r4, #2288]	; fField2288
         5fa10:	e59405b4 	ldr	r0, [r4, #1460]	; fField1460
         5fa14:	e330000d 	teq	r0, #13	; 0xd
         5fa18:	0a000003 	beq	5fa2c <TClassOneModem::ResArbReleaseStart(unsigned char *, unsigned char *)+0x34>
         5fa1c:	e1a00004 	mov	r0, r4
         5fa20:	eb66cbcd 	bl	1a1295c <TClassOneModem::$HangUp(void)>
         5fa24:	e3300000 	teq	r0, #0	; 0x0
         5fa28:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         5fa2c:	e1a00004 	mov	r0, r4
         5fa30:	e5941000 	ldr	r1, [r4]
         5fa34:	e1a0e00f 	mov	lr, pc
         5fa38:	e281ff55 	add	pc, r1, #340	; 0x154
         5fa3c:	e1a00004 	mov	r0, r4
         5fa40:	e3a01000 	mov	r1, #0	; 0x0
         5fa44:	e5942000 	ldr	r2, [r4]
         5fa48:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5fa4c:	e282fe11 	add	pc, r2, #272	; 0x110
    */
}

/**
 * Symbol: TClassOneModem::ResArbClaimNotification(unsigned char *, unsigned char *)
 * Address: 0005fa50
 */
TClassOneModem::ResArbClaimNotification(unsigned char *, unsigned char *) {
    /*
         5fa50:	e1a0c00d 	mov	ip, sp
         5fa54:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5fa58:	e24cb004 	sub	fp, ip, #4	; 0x4
         5fa5c:	e1a04000 	mov	r4, r0
         5fa60:	e5d008f0 	ldrb	r0, [r0, #2288]	; fField2288
         5fa64:	e3300000 	teq	r0, #0	; 0x0
         5fa68:	01a00004 	moveq	r0, r4
         5fa6c:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         5fa70:	0a67017f 	beq	1a20074 <TSerTool::$ResArbClaimNotification(unsigned char *, unsigned char *)>
         5fa74:	e3a00000 	mov	r0, #0	; 0x0
         5fa78:	e5c408f0 	strb	r0, [r4, #2288]	; fField2288
         5fa7c:	e1a00004 	mov	r0, r4
         5fa80:	e3a02000 	mov	r2, #0	; 0x0
         5fa84:	e3a01006 	mov	r1, #6	; 0x6
         5fa88:	eb6d74f8 	bl	1bbce70 <TCommTool::$CompleteRequest(CommToolChannelNumber, long)>
         5fa8c:	e5940018 	ldr	r0, [r4, #24]	; fField24
         5fa90:	e3100c01 	tst	r0, #256	; 0x100
         5fa94:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         5fa98:	e1a00004 	mov	r0, r4
         5fa9c:	e5941000 	ldr	r1, [r4]
         5faa0:	e1a0e00f 	mov	lr, pc
         5faa4:	e281fe15 	add	pc, r1, #336	; 0x150
         5faa8:	e3300000 	teq	r0, #0	; 0x0
         5faac:	1a000028 	bne	5fb54 <TClassOneModem::ResArbClaimNotification(unsigned char *, unsigned char *)+0x104>
         5fab0:	e3a03008 	mov	r3, #8	; 0x8
         5fab4:	e92d0008 	stmdb	sp!, {r3}
         5fab8:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         5fabc:	e5b01014 	ldr	r1, [r0, #20]!	; fField20
         5fac0:	e1a00004 	mov	r0, r4
         5fac4:	e3a03000 	mov	r3, #0	; 0x0
         5fac8:	e3a02000 	mov	r2, #0	; 0x0
         5facc:	eb66e456 	bl	1a18c2c <TClassOneModem::$ResetSerialDrvr(unsigned long, long, long, long)>
         5fad0:	e28dd004 	add	sp, sp, #4	; 0x4
         5fad4:	e59405b4 	ldr	r0, [r4, #1460]	; fField1460
         5fad8:	e330000d 	teq	r0, #13	; 0xd
         5fadc:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         5fae0:	e5940018 	ldr	r0, [r4, #24]	; fField24
         5fae4:	e3100001 	tst	r0, #1	; 0x1
         5fae8:	1a000004 	bne	5fb00 <TClassOneModem::ResArbClaimNotification(unsigned char *, unsigned char *)+0xb0>
         5faec:	e5d408d8 	ldrb	r0, [r4, #2264]	; fField2264
         5faf0:	e3300000 	teq	r0, #0	; 0x0
         5faf4:	15d408d9 	ldrneb	r0, [r4, #2265]	; fField2265
         5faf8:	13300000 	teqne	r0, #0	; 0x0
         5fafc:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         5fb00:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         5fb04:	e3800b02 	orr	r0, r0, #2048	; 0x800
         5fb08:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         5fb0c:	e3a0000c 	mov	r0, #12	; 0xc
         5fb10:	e58405b4 	str	r0, [r4, #1460]	; fField1460
         5fb14:	e3a00e7d 	mov	r0, #2000	; 0x7d0
         5fb18:	e3a03000 	mov	r3, #0	; 0x0
         5fb1c:	e3a02000 	mov	r2, #0	; 0x0
         5fb20:	e3a01000 	mov	r1, #0	; 0x0
         5fb24:	e584078c 	str	r0, [r4, #1932]	; fField1932
         5fb28:	e3a00000 	mov	r0, #0	; 0x0
         5fb2c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         5fb30:	e59f202c 	ldr	r2, [pc, #2c]	; 5fb64 <TClassOneModem::ResArbClaimNotification(unsigned char *, unsigned char *)+0x114>
         5fb34:	e59f102c 	ldr	r1, [pc, #2c]	; 5fb68 <TClassOneModem::ResArbClaimNotification(unsigned char *, unsigned char *)+0x118>
         5fb38:	e1a00004 	mov	r0, r4
         5fb3c:	eb66aeac 	bl	1a0b5f4 <TClassOneModem::$BuildCommand(unsigned char const *, unsigned char *, unsigned long, unsigned char *, unsigned long, unsigned char *, unsigned long)>
         5fb40:	e28dd010 	add	sp, sp, #16	; 0x10
         5fb44:	e3300000 	teq	r0, #0	; 0x0
         5fb48:	01a00004 	moveq	r0, r4
         5fb4c:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         5fb50:	0a66dc05 	beq	1a16b6c <TClassOneModem::$PutCommand(void)>
         5fb54:	e1a01000 	mov	r1, r0
         5fb58:	e1a00004 	mov	r0, r4
         5fb5c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5fb60:	ea6d854a 	b	1bc1090 <TCommTool::$StartAbort(long)>
         5fb64:	0036f980 	eoreqs	pc, r6, r0, lsl #19
         5fb68:	0036f97c 	eoreqs	pc, r6, ip, ror r9
    */
}

/**
 * Symbol: TClassOneModem::ReleaseStart(void)
 * Address: 0005fb6c
 */
TClassOneModem::ReleaseStart(void) {
    /*
         5fb6c:	e59017b4 	ldr	r1, [r0, #1972]	; fField1972
         5fb70:	e3310002 	teq	r1, #2	; 0x2
         5fb74:	1a6d813a 	bne	1bc0064 <TCommTool::$ReleaseStart(void)>
         5fb78:	0a66e425 	beq	1a18c14 <TMNP::$ReleaseStart(void)>
    */
}

/**
 * Symbol: TClassOneModem::OpenStart(TOptionArray *)
 * Address: 0005fb7c
 */
TClassOneModem::OpenStart(TOptionArray *) {
    /*
         5fb7c:	e1a0c00d 	mov	ip, sp
         5fb80:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5fb84:	e24cb004 	sub	fp, ip, #4	; 0x4
         5fb88:	e1a04000 	mov	r4, r0
         5fb8c:	eb6d8128 	bl	1bc0034 <TCommTool::$OpenStart(TOptionArray *)>
         5fb90:	e3300000 	teq	r0, #0	; 0x0
         5fb94:	03a01000 	moveq	r1, #0	; 0x0
         5fb98:	05a41788 	streq	r1, [r4, #1928]!	; fField1928
         5fb9c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TClassOneModem::BindStart(void)
 * Address: 0005fba0
 */
TClassOneModem::BindStart(void) {
    /*
         5fba0:	e59015b0 	ldr	r1, [r0, #1456]	; fField1456
         5fba4:	e3811b01 	orr	r1, r1, #1024	; 0x400
         5fba8:	e58015b0 	str	r1, [r0, #1456]	; fField1456
         5fbac:	e3a01001 	mov	r1, #1	; 0x1
         5fbb0:	e58015b8 	str	r1, [r0, #1464]	; fField1464
         5fbb4:	ea056837 	b	1b9c98 <TSerTool::BindStart(void)>
    */
}

/**
 * Symbol: TClassOneModem::BindComplete(long)
 * Address: 0005fbb8
 */
TClassOneModem::BindComplete(long) {
    /*
         5fbb8:	e1a0c00d 	mov	ip, sp
         5fbbc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5fbc0:	e24cb004 	sub	fp, ip, #4	; 0x4
         5fbc4:	e1a04000 	mov	r4, r0
         5fbc8:	e3310000 	teq	r1, #0	; 0x0
         5fbcc:	1a000004 	bne	5fbe4 <TClassOneModem::BindComplete(long)+0x2c>
         5fbd0:	e1a00004 	mov	r0, r4
         5fbd4:	e5941000 	ldr	r1, [r4]
         5fbd8:	e1a0e00f 	mov	lr, pc
         5fbdc:	e281fe15 	add	pc, r1, #336	; 0x150
         5fbe0:	e1a01000 	mov	r1, r0
         5fbe4:	e3310000 	teq	r1, #0	; 0x0
         5fbe8:	11a00004 	movne	r0, r4
         5fbec:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         5fbf0:	1a66b29a 	bne	1a0c660 <TClassOneModem::$C1IdModemComplete(long)>
         5fbf4:	e3a03008 	mov	r3, #8	; 0x8
         5fbf8:	e92d0008 	stmdb	sp!, {r3}
         5fbfc:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         5fc00:	e5b01014 	ldr	r1, [r0, #20]!	; fField20
         5fc04:	e1a00004 	mov	r0, r4
         5fc08:	e3a03000 	mov	r3, #0	; 0x0
         5fc0c:	e3a02000 	mov	r2, #0	; 0x0
         5fc10:	eb66e405 	bl	1a18c2c <TClassOneModem::$ResetSerialDrvr(unsigned long, long, long, long)>
         5fc14:	e28dd004 	add	sp, sp, #4	; 0x4
         5fc18:	e1a00004 	mov	r0, r4
         5fc1c:	e3a01032 	mov	r1, #50	; 0x32
         5fc20:	e2811c2b 	add	r1, r1, #11008	; 0x2b00
         5fc24:	e5942000 	ldr	r2, [r4]
         5fc28:	e1a0e00f 	mov	lr, pc
         5fc2c:	e282ff6b 	add	pc, r2, #428	; 0x1ac
         5fc30:	e3a00002 	mov	r0, #2	; 0x2
         5fc34:	e58405b8 	str	r0, [r4, #1464]	; fField1464
         5fc38:	e1a00004 	mov	r0, r4
         5fc3c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5fc40:	ea66b285 	b	1a0c65c <TClassOneModem::$C1IdModem(void)>
    */
}

/**
 * Symbol: TClassOneModem::UnbindStart(void)
 * Address: 0005fc44
 */
TClassOneModem::UnbindStart(void) {
    /*
         5fc44:	e1a0c00d 	mov	ip, sp
         5fc48:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5fc4c:	e24cb004 	sub	fp, ip, #4	; 0x4
         5fc50:	e1a04000 	mov	r4, r0
         5fc54:	e5901000 	ldr	r1, [r0]
         5fc58:	e1a0e00f 	mov	lr, pc
         5fc5c:	e281ff55 	add	pc, r1, #340	; 0x154
         5fc60:	e3a00000 	mov	r0, #0	; 0x0
         5fc64:	e5c408f3 	strb	r0, [r4, #2291]	; fField2291
         5fc68:	e5c40824 	strb	r0, [r4, #2084]	; fField2084
         5fc6c:	e5c407f0 	strb	r0, [r4, #2032]	; fField2032
         5fc70:	e1a00004 	mov	r0, r4
         5fc74:	eb66e802 	bl	1a19c84 <TClassOneModem::$SetCDOption(void)>
         5fc78:	e1a00004 	mov	r0, r4
         5fc7c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5fc80:	ea056814 	b	1b9cd8 <TSerTool::UnbindStart(void)>
    */
}

/**
 * Symbol: TClassOneModem::TaskConstructor(void)
 * Address: 0005fc84
 */
TClassOneModem::TaskConstructor(void) {
    /*
         5fc84:	e1a0c00d 	mov	ip, sp
         5fc88:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         5fc8c:	e24cb004 	sub	fp, ip, #4	; 0x4
         5fc90:	e1a04000 	mov	r4, r0
         5fc94:	e24dd00c 	sub	sp, sp, #12	; 0xc
         5fc98:	e3a06000 	mov	r6, #0	; 0x0
         5fc9c:	e5cd6008 	strb	r6, [sp, #8]	; fField8
         5fca0:	e1a0000d 	mov	r0, sp
         5fca4:	e3a01b02 	mov	r1, #2048	; 0x800
         5fca8:	eb6ddbaa 	bl	1bd6b58 <$LockStack>
         5fcac:	e1b05000 	movs	r5, r0
         5fcb0:	1a0000a6 	bne	5ff50 <TClassOneModem::TaskConstructor(void)+0x2cc>
         5fcb4:	e5846aa8 	str	r6, [r4, #2728]	; fField2728
         5fcb8:	e1a00004 	mov	r0, r4
         5fcbc:	eb66ec2d 	bl	1a1ad78 <TMNP::$TaskConstructor(void)>
         5fcc0:	e1b05000 	movs	r5, r0
         5fcc4:	1a0000a1 	bne	5ff50 <TClassOneModem::TaskConstructor(void)+0x2cc>
         5fcc8:	e3a00003 	mov	r0, #3	; 0x3
         5fccc:	e5840300 	str	r0, [r4, #768]	; fField768
         5fcd0:	e59f022c 	ldr	r0, [pc, #22c]	; 5ff04 <TClassOneModem::TaskConstructor(void)+0x280>
         5fcd4:	e5840a34 	str	r0, [r4, #2612]	; fField2612
         5fcd8:	e59f0228 	ldr	r0, [pc, #228]	; 5ff08 <TClassOneModem::TaskConstructor(void)+0x284>
         5fcdc:	e5840a38 	str	r0, [r4, #2616]	; fField2616
         5fce0:	e59f0224 	ldr	r0, [pc, #224]	; 5ff0c <TClassOneModem::TaskConstructor(void)+0x288>
         5fce4:	e5840a40 	str	r0, [r4, #2624]	; fField2624
         5fce8:	e59f0220 	ldr	r0, [pc, #220]	; 5ff10 <TClassOneModem::TaskConstructor(void)+0x28c>
         5fcec:	e5840a3c 	str	r0, [r4, #2620]	; fField2620
         5fcf0:	e59f021c 	ldr	r0, [pc, #21c]	; 5ff14 <TClassOneModem::TaskConstructor(void)+0x290>
         5fcf4:	e5840a44 	str	r0, [r4, #2628]	; fField2628
         5fcf8:	e59f0218 	ldr	r0, [pc, #218]	; 5ff18 <TClassOneModem::TaskConstructor(void)+0x294>
         5fcfc:	e5840a48 	str	r0, [r4, #2632]	; fField2632
         5fd00:	e59f0214 	ldr	r0, [pc, #214]	; 5ff1c <TClassOneModem::TaskConstructor(void)+0x298>
         5fd04:	e5840a4c 	str	r0, [r4, #2636]	; fField2636
         5fd08:	e59f0210 	ldr	r0, [pc, #210]	; 5ff20 <TClassOneModem::TaskConstructor(void)+0x29c>
         5fd0c:	e5840a50 	str	r0, [r4, #2640]	; fField2640
         5fd10:	e59f020c 	ldr	r0, [pc, #20c]	; 5ff24 <TClassOneModem::TaskConstructor(void)+0x2a0>	; fField20
         5fd14:	e3a07001 	mov	r7, #1	; 0x1
         5fd18:	e5840a54 	str	r0, [r4, #2644]	; fField2644
         5fd1c:	e58468f8 	str	r6, [r4, #2296]	; fField2296
         5fd20:	e58475b0 	str	r7, [r4, #1456]	; fField1456
         5fd24:	e5c468f3 	strb	r6, [r4, #2291]	; fField2291
         5fd28:	e5c468f5 	strb	r6, [r4, #2293]	; fField2293
         5fd2c:	e58467b4 	str	r6, [r4, #1972]	; fField1972
         5fd30:	e24dd010 	sub	sp, sp, #16	; 0x10
         5fd34:	e1a0000d 	mov	r0, sp
         5fd38:	eb6d701a 	bl	1bbbda8 <TCMOModemECType::$__ct(void)>
         5fd3c:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         5fd40:	e58407b0 	str	r0, [r4, #1968]	; fField1968
         5fd44:	e28dd010 	add	sp, sp, #16	; 0x10
         5fd48:	e58467d8 	str	r6, [r4, #2008]	; fField2008
         5fd4c:	e59f01d4 	ldr	r0, [pc, #1d4]	; 5ff28 <TClassOneModem::TaskConstructor(void)+0x2a4>
         5fd50:	e5840798 	str	r0, [r4, #1944]	; fField1944
         5fd54:	e59f01d0 	ldr	r0, [pc, #1d0]	; 5ff2c <TClassOneModem::TaskConstructor(void)+0x2a8>
         5fd58:	e584079c 	str	r0, [r4, #1948]	; fField1948
         5fd5c:	e28d0008 	add	r0, sp, #8	; 0x8
         5fd60:	e58407a0 	str	r0, [r4, #1952]	; fField1952
         5fd64:	e28d0008 	add	r0, sp, #8	; 0x8
         5fd68:	e58407a4 	str	r0, [r4, #1956]	; fField1956
         5fd6c:	e59f01bc 	ldr	r0, [pc, #1bc]	; 5ff30 <TClassOneModem::TaskConstructor(void)+0x2ac>
         5fd70:	e58407ac 	str	r0, [r4, #1964]	; fField1964
         5fd74:	e28d0008 	add	r0, sp, #8	; 0x8
         5fd78:	e58407a8 	str	r0, [r4, #1960]	; fField1960
         5fd7c:	e1a00004 	mov	r0, r4
         5fd80:	eb66e7cd 	bl	1a19cbc <TClassOneModem::$SetModemProfile(void)>
         5fd84:	e1b05000 	movs	r5, r0
         5fd88:	1a00006c 	bne	5ff40 <TClassOneModem::TaskConstructor(void)+0x2bc>
         5fd8c:	e58475c8 	str	r7, [r4, #1480]	; fField1480
         5fd90:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         5fd94:	e5900014 	ldr	r0, [r0, #20]	; fField20
         5fd98:	e5840784 	str	r0, [r4, #1924]	; fField1924
         5fd9c:	e5846790 	str	r6, [r4, #1936]	; fField1936
         5fda0:	e2840f9d 	add	r0, r4, #628	; 0x274
         5fda4:	e2800b01 	add	r0, r0, #1024	; 0x400
         5fda8:	e3a01000 	mov	r1, #0	; 0x0
         5fdac:	eb6e25b6 	bl	1be948c <CBufferList::$Init(unsigned char)>
         5fdb0:	e1b05000 	movs	r5, r0
         5fdb4:	1a000061 	bne	5ff40 <TClassOneModem::TaskConstructor(void)+0x2bc>
         5fdb8:	e3e03000 	mvn	r3, #0	; 0x0
         5fdbc:	e3a02000 	mov	r2, #0	; 0x0
         5fdc0:	e92d000c 	stmdb	sp!, {r2, r3}
         5fdc4:	e59f0168 	ldr	r0, [pc, #168]	; 5ff34 <TClassOneModem::TaskConstructor(void)+0x2b0>
         5fdc8:	e1a05000 	mov	r5, r0
         5fdcc:	eb6d5737 	bl	1bb5ab0 <$strlen>
         5fdd0:	e1a02000 	mov	r2, r0
         5fdd4:	e2840fa5 	add	r0, r4, #660	; 0x294
         5fdd8:	e2800b01 	add	r0, r0, #1024	; 0x400
         5fddc:	e1a01005 	mov	r1, r5
         5fde0:	e3a03000 	mov	r3, #0	; 0x0
         5fde4:	eb6e25b0 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
         5fde8:	e28dd008 	add	sp, sp, #8	; 0x8
         5fdec:	e1b05000 	movs	r5, r0
         5fdf0:	1a000052 	bne	5ff40 <TClassOneModem::TaskConstructor(void)+0x2bc>
         5fdf4:	e3e03000 	mvn	r3, #0	; 0x0
         5fdf8:	e3a02000 	mov	r2, #0	; 0x0
         5fdfc:	e92d000c 	stmdb	sp!, {r2, r3}
         5fe00:	e59f0130 	ldr	r0, [pc, #130]	; 5ff38 <TClassOneModem::TaskConstructor(void)+0x2b4>
         5fe04:	e1a05000 	mov	r5, r0
         5fe08:	eb6d5728 	bl	1bb5ab0 <$strlen>
         5fe0c:	e1a02000 	mov	r2, r0
         5fe10:	e2840fd7 	add	r0, r4, #860	; 0x35c
         5fe14:	e2800b01 	add	r0, r0, #1024	; 0x400
         5fe18:	e1a01005 	mov	r1, r5
         5fe1c:	e3a03000 	mov	r3, #0	; 0x0
         5fe20:	eb6e25a1 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
         5fe24:	e28dd008 	add	sp, sp, #8	; 0x8
         5fe28:	e1b05000 	movs	r5, r0
         5fe2c:	1a000043 	bne	5ff40 <TClassOneModem::TaskConstructor(void)+0x2bc>
         5fe30:	e2840f96 	add	r0, r4, #600	; 0x258
         5fe34:	e2800b02 	add	r0, r0, #2048	; 0x800
         5fe38:	e1a08000 	mov	r8, r0
         5fe3c:	e3a01000 	mov	r1, #0	; 0x0
         5fe40:	eb6e2591 	bl	1be948c <CBufferList::$Init(unsigned char)>
         5fe44:	e1b05000 	movs	r5, r0
         5fe48:	1a00003c 	bne	5ff40 <TClassOneModem::TaskConstructor(void)+0x2bc>
         5fe4c:	e2840f9e 	add	r0, r4, #632	; 0x278
         5fe50:	e2800b02 	add	r0, r0, #2048	; 0x800
         5fe54:	e1a07000 	mov	r7, r0
         5fe58:	e3a01001 	mov	r1, #1	; 0x1
         5fe5c:	eb6e2591 	bl	1be94a8 <CBufferSegment::$Init(long)>
         5fe60:	e1b05000 	movs	r5, r0
         5fe64:	1a000035 	bne	5ff40 <TClassOneModem::TaskConstructor(void)+0x2bc>
         5fe68:	e1a01007 	mov	r1, r7
         5fe6c:	e1a00008 	mov	r0, r8
         5fe70:	eb6e29a3 	bl	1bea504 <CBufferList::$InsertLast(CBuffer *)>
         5fe74:	e2840f46 	add	r0, r4, #280	; 0x118
         5fe78:	e2800b02 	add	r0, r0, #2048	; 0x800
         5fe7c:	e1a07000 	mov	r7, r0
         5fe80:	e3a01000 	mov	r1, #0	; 0x0
         5fe84:	eb6dd702 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
         5fe88:	e1b05000 	movs	r5, r0
         5fe8c:	1a00002b 	bne	5ff40 <TClassOneModem::TaskConstructor(void)+0x2bc>
         5fe90:	e5970000 	ldr	r0, [r7]
         5fe94:	e5840930 	str	r0, [r4, #2352]	; fField2352
         5fe98:	e2840f73 	add	r0, r4, #460	; 0x1cc
         5fe9c:	e2800b01 	add	r0, r0, #1024	; 0x400
         5fea0:	eb6dcecc 	bl	1bd39d8 <$GetGlobalTime>
         5fea4:	e59f0090 	ldr	r0, [pc, #90]	; 5ff3c <TClassOneModem::TaskConstructor(void)+0x2b8>
         5fea8:	e1a07000 	mov	r7, r0
         5feac:	eb6d56ff 	bl	1bb5ab0 <$strlen>
         5feb0:	e2800001 	add	r0, r0, #1	; 0x1
         5feb4:	eb6e08a1 	bl	1be2140 <$NewPtr>
         5feb8:	e5840aa8 	str	r0, [r4, #2728]	; fField2728
         5febc:	e3300000 	teq	r0, #0	; 0x0
         5fec0:	0a00001e 	beq	5ff40 <TClassOneModem::TaskConstructor(void)+0x2bc>
         5fec4:	e1a00007 	mov	r0, r7
         5fec8:	eb6d56f8 	bl	1bb5ab0 <$strlen>
         5fecc:	e2802001 	add	r2, r0, #1	; 0x1
         5fed0:	e1a00007 	mov	r0, r7
         5fed4:	e5941aa8 	ldr	r1, [r4, #2728]	; fField2728
         5fed8:	eb6dfc1d 	bl	1bdef54 <$BlockMove>
         5fedc:	e1a00006 	mov	r0, r6
         5fee0:	e5c468f0 	strb	r6, [r4, #2288]	; fField2288
         5fee4:	e58468ec 	str	r6, [r4, #2284]	; fField2284
         5fee8:	e5846aac 	str	r6, [r4, #2732]	; fField2732
         5feec:	e5846b08 	str	r6, [r4, #2824]	; fField2824
         5fef0:	e5c46b99 	strb	r6, [r4, #2969]	; fField2969
         5fef4:	e5c46b98 	strb	r6, [r4, #2968]	; fField2968
         5fef8:	e5846b9c 	str	r6, [r4, #2972]	; fField2972
         5fefc:	e5a46ba0 	str	r6, [r4, #2976]!
         5ff00:	ea000013 	b	5ff54 <TClassOneModem::TaskConstructor(void)+0x2d0>
         5ff04:	0036ff1c 	eoreqs	pc, r6, ip, lsl pc
         5ff08:	0036ff2c 	eoreqs	pc, r6, ip, lsr #30
         5ff0c:	0036ff3c 	eoreqs	pc, r6, ip, lsr pc
         5ff10:	0036ff4c 	eoreqs	pc, r6, ip, asr #30
         5ff14:	0036ff5c 	eoreqs	pc, r6, ip, asr pc
         5ff18:	0036ff6c 	eoreqs	pc, r6, ip, ror #30
         5ff1c:	0036ff7c 	eoreqs	pc, r6, ip, ror pc
         5ff20:	0036ff84 	eoreqs	pc, r6, r4, lsl #31
         5ff24:	0036ff94 	mlaeqs	r6, r4, pc, pc
         5ff28:	0036ffa4 	eoreqs	pc, r6, r4, lsr #31
         5ff2c:	0036ffd8 	ldreqsb	pc, [r6], -r8
         5ff30:	0037003c 	eoreqs	r0, r7, ip, lsr r0
         5ff34:	0036f97c 	eoreqs	pc, r6, ip, ror r9
         5ff38:	0036f980 	eoreqs	pc, r6, r0, lsl #19
         5ff3c:	00370180 	eoreqs	r0, r7, r0, lsl #3
         5ff40:	e1a00004 	mov	r0, r4
         5ff44:	e5941000 	ldr	r1, [r4]
         5ff48:	e1a0e00f 	mov	lr, pc
         5ff4c:	e281f00c 	add	pc, r1, #12	; 0xc
         5ff50:	e1a00005 	mov	r0, r5
         5ff54:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TClassOneModem::ConnectStart(void)
 * Address: 0005ff58
 */
TClassOneModem::ConnectStart(void) {
    /*
         5ff58:	e1a0c00d 	mov	ip, sp
         5ff5c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5ff60:	e24cb004 	sub	fp, ip, #4	; 0x4
         5ff64:	e1a04000 	mov	r4, r0
         5ff68:	e3a0106d 	mov	r1, #109	; 0x6d
         5ff6c:	e2411c3f 	sub	r1, r1, #16128	; 0x3f00
         5ff70:	e5900018 	ldr	r0, [r0, #24]	; fField24
         5ff74:	e3100c01 	tst	r0, #256	; 0x100
         5ff78:	01a00004 	moveq	r0, r4
         5ff7c:	0a00001d 	beq	5fff8 <TClassOneModem::ConnectStart(void)+0xa0>
         5ff80:	e5941184 	ldr	r1, [r4, #388]	; fField388
         5ff84:	e3310000 	teq	r1, #0	; 0x0
         5ff88:	0a00000d 	beq	5ffc4 <TClassOneModem::ConnectStart(void)+0x6c>
         5ff8c:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         5ff90:	e1a0000d 	mov	r0, sp
         5ff94:	eb6d56d7 	bl	1bb5af8 <TOptionIterator::$__ct(TOptionArray *)>
         5ff98:	e1a0000d 	mov	r0, sp
         5ff9c:	e59f1078 	ldr	r1, [pc, #78]	; 6001c <TClassOneModem::ConnectStart(void)+0xc4>
         5ffa0:	eb6d631b 	bl	1bb8c14 <TOptionIterator::$FindOption(unsigned long)>
         5ffa4:	e1b01000 	movs	r1, r0
         5ffa8:	128400cc 	addne	r0, r4, #204	; 0xcc
         5ffac:	12800b02 	addne	r0, r0, #2048	; 0x800
         5ffb0:	1b6d5f06 	blne	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         5ffb4:	e1a0000d 	mov	r0, sp
         5ffb8:	e3a01000 	mov	r1, #0	; 0x0
         5ffbc:	eb6d5ade 	bl	1bb6b3c <TOptionIterator::$__dt(void)>
         5ffc0:	e28dd01c 	add	sp, sp, #28	; 0x1c
         5ffc4:	e3a00000 	mov	r0, #0	; 0x0
         5ffc8:	e5c401d1 	strb	r0, [r4, #465]	; fField465
         5ffcc:	e1a00004 	mov	r0, r4
         5ffd0:	e3a01032 	mov	r1, #50	; 0x32
         5ffd4:	e2811c2b 	add	r1, r1, #11008	; 0x2b00
         5ffd8:	e5942000 	ldr	r2, [r4]
         5ffdc:	e1a0e00f 	mov	lr, pc
         5ffe0:	e282ff6b 	add	pc, r2, #428	; 0x1ac
         5ffe4:	e5d407f0 	ldrb	r0, [r4, #2032]	; fField2032
         5ffe8:	e3300000 	teq	r0, #0	; 0x0
         5ffec:	0a000004 	beq	60004 <TClassOneModem::ConnectStart(void)+0xac>
         5fff0:	e1a00004 	mov	r0, r4
         5fff4:	e3a01000 	mov	r1, #0	; 0x0
         5fff8:	e5942000 	ldr	r2, [r4]
         5fffc:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         60000:	e282f054 	add	pc, r2, #84	; 0x54
         60004:	e3a00001 	mov	r0, #1	; 0x1
         60008:	e58405b4 	str	r0, [r4, #1460]	; fField1460
         6000c:	e1a00004 	mov	r0, r4
         60010:	e3a01000 	mov	r1, #0	; 0x0
         60014:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         60018:	ea66b9c4 	b	1a0e730 <TClassOneModem::$ConnectModemContinue(long)>
         6001c:	74617073 	strvcbt	r7, [r1], -#115
    */
}

/**
 * Symbol: TClassOneModem::ConnectComplete(long)
 * Address: 00060020
 */
TClassOneModem::ConnectComplete(long) {
    /*
         60020:	e1a0c00d 	mov	ip, sp
         60024:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         60028:	e24cb004 	sub	fp, ip, #4	; 0x4
         6002c:	e1a04000 	mov	r4, r0
         60030:	e1b05001 	movs	r5, r1
         60034:	01a00004 	moveq	r0, r4
         60038:	0b6718b1 	bleq	1a26304 <TClassOneModem::$EnterConnectedState(void)>
         6003c:	e1a01005 	mov	r1, r5
         60040:	e1a00004 	mov	r0, r4
         60044:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         60048:	ea6d778f 	b	1bbde8c <TCommTool::$ConnectComplete(long)>
    */
}

/**
 * Symbol: TClassOneModem::EnterConnectedState(void)
 * Address: 0006004c
 */
TClassOneModem::EnterConnectedState(void) {
    /*
         6004c:	e1a0c00d 	mov	ip, sp
         60050:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         60054:	e24cb004 	sub	fp, ip, #4	; 0x4
         60058:	e1a04000 	mov	r4, r0
         6005c:	e5d007f0 	ldrb	r0, [r0, #2032]	; fField2032
         60060:	e3300000 	teq	r0, #0	; 0x0
         60064:	1a000007 	bne	60088 <TClassOneModem::EnterConnectedState(void)+0x3c>
         60068:	e5d408d8 	ldrb	r0, [r4, #2264]	; fField2264
         6006c:	e3300000 	teq	r0, #0	; 0x0
         60070:	15d408d9 	ldrneb	r0, [r4, #2265]	; fField2265
         60074:	13300000 	teqne	r0, #0	; 0x0
         60078:	1a000006 	bne	60098 <TClassOneModem::EnterConnectedState(void)+0x4c>
         6007c:	e5d40811 	ldrb	r0, [r4, #2065]	; fField2065
         60080:	e3300000 	teq	r0, #0	; 0x0
         60084:	1a000003 	bne	60098 <TClassOneModem::EnterConnectedState(void)+0x4c>
         60088:	e1a00004 	mov	r0, r4
         6008c:	e5941000 	ldr	r1, [r4]
         60090:	e1a0e00f 	mov	lr, pc
         60094:	e281fe1b 	add	pc, r1, #432	; 0x1b0
         60098:	e5940018 	ldr	r0, [r4, #24]	; fField24
         6009c:	e3c00901 	bic	r0, r0, #16384	; 0x4000
         600a0:	e5a40018 	str	r0, [r4, #24]!	; fField24
         600a4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TClassOneModem::ListenStart(void)
 * Address: 000600a8
 */
TClassOneModem::ListenStart(void) {
    /*
         600a8:	e1a0c00d 	mov	ip, sp
         600ac:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         600b0:	e24cb004 	sub	fp, ip, #4	; 0x4
         600b4:	e1a04000 	mov	r4, r0
         600b8:	e3a0106d 	mov	r1, #109	; 0x6d
         600bc:	e2411c3f 	sub	r1, r1, #16128	; 0x3f00
         600c0:	e5900018 	ldr	r0, [r0, #24]	; fField24
         600c4:	e3100c01 	tst	r0, #256	; 0x100
         600c8:	e1a00004 	mov	r0, r4
         600cc:	05942000 	ldreq	r2, [r4]
         600d0:	02822054 	addeq	r2, r2, #84	; 0x54
         600d4:	0a00000b 	beq	60108 <TClassOneModem::ListenStart(void)+0x60>
         600d8:	e3a01032 	mov	r1, #50	; 0x32
         600dc:	e2811c2b 	add	r1, r1, #11008	; 0x2b00
         600e0:	e5942000 	ldr	r2, [r4]
         600e4:	e1a0e00f 	mov	lr, pc
         600e8:	e282ff6b 	add	pc, r2, #428	; 0x1ac
         600ec:	e5d407f0 	ldrb	r0, [r4, #2032]	; fField2032
         600f0:	e3300000 	teq	r0, #0	; 0x0
         600f4:	0a000005 	beq	60110 <TClassOneModem::ListenStart(void)+0x68>
         600f8:	e1a00004 	mov	r0, r4
         600fc:	e3a01000 	mov	r1, #0	; 0x0
         60100:	e5942000 	ldr	r2, [r4]
         60104:	e282205c 	add	r2, r2, #92	; 0x5c
         60108:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         6010c:	e282f000 	add	pc, r2, #0	; 0x0
         60110:	e3a00001 	mov	r0, #1	; 0x1
         60114:	e58405b4 	str	r0, [r4, #1460]	; fField1460
         60118:	e2840f77 	add	r0, r4, #476	; 0x1dc
         6011c:	e2800b01 	add	r0, r0, #1024	; 0x400
         60120:	eb6dce2c 	bl	1bd39d8 <$GetGlobalTime>
         60124:	e1a00004 	mov	r0, r4
         60128:	e3a01000 	mov	r1, #0	; 0x0
         6012c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         60130:	ea66b97e 	b	1a0e730 <TClassOneModem::$ConnectModemContinue(long)>
    */
}

/**
 * Symbol: TClassOneModem::AcceptStart(void)
 * Address: 00060134
 */
TClassOneModem::AcceptStart(void) {
    /*
         60134:	e1a02000 	mov	r2, r0
         60138:	e59007b4 	ldr	r0, [r0, #1972]	; fField1972
         6013c:	e3300002 	teq	r0, #2	; 0x2
         60140:	01a00002 	moveq	r0, r2
         60144:	0a66a902 	beq	1a0a554 <TMNP::$AcceptStart(void)>
         60148:	e5d207f0 	ldrb	r0, [r2, #2032]	; fField2032
         6014c:	e3300000 	teq	r0, #0	; 0x0
         60150:	e1a00002 	mov	r0, r2
         60154:	0a66b974 	beq	1a0e72c <TClassOneModem::$ConnectModemComplete(void)>
         60158:	e3a01000 	mov	r1, #0	; 0x0
         6015c:	e5922000 	ldr	r2, [r2]
         60160:	e282f064 	add	pc, r2, #100	; 0x64
    */
}

/**
 * Symbol: TClassOneModem::AcceptComplete(long)
 * Address: 00060164
 */
TClassOneModem::AcceptComplete(long) {
    /*
         60164:	e1a0c00d 	mov	ip, sp
         60168:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         6016c:	e24cb004 	sub	fp, ip, #4	; 0x4
         60170:	e1a04000 	mov	r4, r0
         60174:	e1b05001 	movs	r5, r1
         60178:	01a00004 	moveq	r0, r4
         6017c:	0b671860 	bleq	1a26304 <TClassOneModem::$EnterConnectedState(void)>
         60180:	e1a01005 	mov	r1, r5
         60184:	e1a00004 	mov	r0, r4
         60188:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         6018c:	ea6d732f 	b	1bbce50 <TCommTool::$AcceptComplete(long)>
    */
}

/**
 * Symbol: TClassOneModem::ConnectModemComplete(void)
 * Address: 00060190
 */
TClassOneModem::ConnectModemComplete(void) {
    /*
         60190:	e1a02000 	mov	r2, r0
         60194:	e59005b0 	ldr	r0, [r0, #1456]	; fField1456
         60198:	e3c00b02 	bic	r0, r0, #2048	; 0x800
         6019c:	e58205b0 	str	r0, [r2, #1456]	; fField1456
         601a0:	e5920018 	ldr	r0, [r2, #24]	; fField24
         601a4:	e3100040 	tst	r0, #64	; 0x40
         601a8:	e1a00002 	mov	r0, r2
         601ac:	e3a01000 	mov	r1, #0	; 0x0
         601b0:	e5922000 	ldr	r2, [r2]
         601b4:	02822054 	addeq	r2, r2, #84	; 0x54
         601b8:	12822064 	addne	r2, r2, #100	; 0x64
         601bc:	e282f000 	add	pc, r2, #0	; 0x0
    */
}

/**
 * Symbol: TClassOneModem::ConnectModemContinue(long)
 * Address: 000601c0
 */
TClassOneModem::ConnectModemContinue(long) {
    /*
         601c0:	e3310000 	teq	r1, #0	; 0x0
         601c4:	1a6d83b1 	bne	1bc1090 <TCommTool::$StartAbort(long)>
         601c8:	e59015b4 	ldr	r1, [r0, #1460]	; fField1460
         601cc:	e351000b 	cmp	r1, #11	; 0xb
         601d0:	908ff101 	addls	pc, pc, r1, lsl #2
         601d4:	e1a0f00e 	mov	pc, lr
         601d8:	e1a0f00e 	mov	pc, lr
         601dc:	ea000009 	b	60208 <TClassOneModem::ConnectModemContinue(long)+0x48>
         601e0:	ea000009 	b	6020c <TClassOneModem::ConnectModemContinue(long)+0x4c>
         601e4:	ea000009 	b	60210 <TClassOneModem::ConnectModemContinue(long)+0x50>
         601e8:	ea000009 	b	60214 <TClassOneModem::ConnectModemContinue(long)+0x54>
         601ec:	ea000009 	b	60218 <TClassOneModem::ConnectModemContinue(long)+0x58>
         601f0:	ea000009 	b	6021c <TClassOneModem::ConnectModemContinue(long)+0x5c>
         601f4:	ea000009 	b	60220 <TClassOneModem::ConnectModemContinue(long)+0x60>
         601f8:	ea000009 	b	60224 <TClassOneModem::ConnectModemContinue(long)+0x64>
         601fc:	ea000009 	b	60228 <TClassOneModem::ConnectModemContinue(long)+0x68>
         60200:	ea000009 	b	6022c <TClassOneModem::ConnectModemContinue(long)+0x6c>
         60204:	ea66b100 	b	1a0c60c <TClassOneModem::$C1CnctConnectComplete(void)>
         60208:	ea671003 	b	1a2421c <TClassOneModem::$C1CnctCheckCountryConfig(void)>
         6020c:	ea66b0fc 	b	1a0c604 <TClassOneModem::$C1CnctBegin(void)>
         60210:	ea66b0fc 	b	1a0c608 <TClassOneModem::$C1CnctConfigModem(void)>
         60214:	ea66b0fe 	b	1a0c614 <TClassOneModem::$C1CnctDialPrefs(void)>
         60218:	ea66b0fe 	b	1a0c618 <TClassOneModem::$C1CnctSetClass(void)>
         6021c:	ea673940 	b	1a2e724 <TClassOneModem::$C1CnctSetClassBaud(void)>
         60220:	ea66b0fa 	b	1a0c610 <TClassOneModem::$C1CnctDial(void)>
         60224:	ea66b0fc 	b	1a0c61c <TClassOneModem::$C1CnctWaitForConnect(void)>
         60228:	ea670ffc 	b	1a24220 <TClassOneModem::$C1CnctCheckRingCount(void)>
         6022c:	ea670ffc 	b	1a24224 <TClassOneModem::$C1CnctGetCheckRingCountResponse(void)>
    */
}

/**
 * Symbol: TClassOneModem::C1CnctCheckCountryConfig(void)
 * Address: 00060230
 */
TClassOneModem::C1CnctCheckCountryConfig(void) {
    /*
         60230:	e1a0c00d 	mov	ip, sp
         60234:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         60238:	e24cb004 	sub	fp, ip, #4	; 0x4
         6023c:	e1a04000 	mov	r4, r0
         60240:	e59005b0 	ldr	r0, [r0, #1456]	; fField1456
         60244:	e3800b02 	orr	r0, r0, #2048	; 0x800
         60248:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         6024c:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         60250:	e5900018 	ldr	r0, [r0, #24]	; fField24
         60254:	e584078c 	str	r0, [r4, #1932]	; fField1932
         60258:	e5d407e8 	ldrb	r0, [r4, #2024]	; fField2024
         6025c:	e3300000 	teq	r0, #0	; 0x0
         60260:	e3a03008 	mov	r3, #8	; 0x8
         60264:	e92d0008 	stmdb	sp!, {r3}
         60268:	05941784 	ldreq	r1, [r4, #1924]	; fField1924
         6026c:	159417f4 	ldrne	r1, [r4, #2036]	; fField2036
         60270:	e1a00004 	mov	r0, r4
         60274:	e3a03000 	mov	r3, #0	; 0x0
         60278:	e3a02000 	mov	r2, #0	; 0x0
         6027c:	eb66e26a 	bl	1a18c2c <TClassOneModem::$ResetSerialDrvr(unsigned long, long, long, long)>
         60280:	e28dd004 	add	sp, sp, #4	; 0x4
         60284:	e1a00004 	mov	r0, r4
         60288:	eb66eed3 	bl	1a1bddc <TClassOneModem::$UpdateDialOptionsStr(void)>
         6028c:	e3a00002 	mov	r0, #2	; 0x2
         60290:	e59417d0 	ldr	r1, [r4, #2000]	; fField2000
         60294:	e3310051 	teq	r1, #81	; 0x51
         60298:	05941794 	ldreq	r1, [r4, #1940]	; fField1940
         6029c:	03310000 	teqeq	r1, #0	; 0x0
         602a0:	e58405b4 	str	r0, [r4, #1460]	; fField1460
         602a4:	e1a00004 	mov	r0, r4
         602a8:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         602ac:	1a66b0d4 	bne	1a0c604 <TClassOneModem::$C1CnctBegin(void)>
         602b0:	e3a0100b 	mov	r1, #11	; 0xb
         602b4:	eb66acc4 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         602b8:	e3300000 	teq	r0, #0	; 0x0
         602bc:	11a01000 	movne	r1, r0
         602c0:	11a00004 	movne	r0, r4
         602c4:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         602c8:	1a66b0e4 	bne	1a0c660 <TClassOneModem::$C1IdModemComplete(long)>
         602cc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TClassOneModem::C1CnctBegin(void)
 * Address: 000602d0
 */
TClassOneModem::C1CnctBegin(void) {
    /*
         602d0:	e1a0c00d 	mov	ip, sp
         602d4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         602d8:	e24cb004 	sub	fp, ip, #4	; 0x4
         602dc:	e1a04000 	mov	r4, r0
         602e0:	e5d008d8 	ldrb	r0, [r0, #2264]	; fField2264
         602e4:	e3300000 	teq	r0, #0	; 0x0
         602e8:	15d408d9 	ldrneb	r0, [r4, #2265]	; fField2265
         602ec:	13300000 	teqne	r0, #0	; 0x0
         602f0:	0a000004 	beq	60308 <TClassOneModem::C1CnctBegin(void)+0x38>
         602f4:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         602f8:	e5d0000f 	ldrb	r0, [r0, #15]
         602fc:	e3300000 	teq	r0, #0	; 0x0
         60300:	0a00002b 	beq	603b4 <TClassOneModem::C1CnctBegin(void)+0xe4>
         60304:	ea000016 	b	60364 <TClassOneModem::C1CnctBegin(void)+0x94>
         60308:	e5d40811 	ldrb	r0, [r4, #2065]	; fField2065
         6030c:	e3300000 	teq	r0, #0	; 0x0
         60310:	0a000007 	beq	60334 <TClassOneModem::C1CnctBegin(void)+0x64>
         60314:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         60318:	e594579c 	ldr	r5, [r4, #1948]	; fField1948
         6031c:	e5d0000f 	ldrb	r0, [r0, #15]
         60320:	e3300000 	teq	r0, #0	; 0x0
         60324:	059405b0 	ldreq	r0, [r4, #1456]	; fField1456
         60328:	03800002 	orreq	r0, r0, #2	; 0x2
         6032c:	058405b0 	streq	r0, [r4, #1456]	; fField1456
         60330:	ea000020 	b	603b8 <TClassOneModem::C1CnctBegin(void)+0xe8>
         60334:	e5d40812 	ldrb	r0, [r4, #2066]	; fField2066
         60338:	e3300000 	teq	r0, #0	; 0x0
         6033c:	01a00004 	moveq	r0, r4
         60340:	03a0107a 	moveq	r1, #122	; 0x7a
         60344:	02411c3f 	subeq	r1, r1, #16128	; 0x3f00
         60348:	0a000036 	beq	60428 <TClassOneModem::C1CnctBegin(void)+0x158>
         6034c:	e5d407e8 	ldrb	r0, [r4, #2024]	; fField2024
         60350:	e3300000 	teq	r0, #0	; 0x0
         60354:	059417d8 	ldreq	r1, [r4, #2008]	; fField2008
         60358:	05d1000f 	ldreqb	r0, [r1, #15]
         6035c:	03300000 	teqeq	r0, #0	; 0x0
         60360:	0a000001 	beq	6036c <TClassOneModem::C1CnctBegin(void)+0x9c>
         60364:	e59457ac 	ldr	r5, [r4, #1964]	; fField1964
         60368:	ea000012 	b	603b8 <TClassOneModem::C1CnctBegin(void)+0xe8>
         6036c:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         60370:	e3800002 	orr	r0, r0, #2	; 0x2
         60374:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         60378:	e5d407d4 	ldrb	r0, [r4, #2004]	; fField2004
         6037c:	e3300000 	teq	r0, #0	; 0x0
         60380:	159457a8 	ldrne	r5, [r4, #1960]	; fField1960
         60384:	1a00000b 	bne	603b8 <TClassOneModem::C1CnctBegin(void)+0xe8>
         60388:	e59407b0 	ldr	r0, [r4, #1968]	; fField1968
         6038c:	e3100010 	tst	r0, #16	; 0x10
         60390:	1a000007 	bne	603b4 <TClassOneModem::C1CnctBegin(void)+0xe4>
         60394:	e310000e 	tst	r0, #14	; 0xe
         60398:	15d1100d 	ldrneb	r1, [r1, #13]
         6039c:	13310000 	teqne	r1, #0	; 0x0
         603a0:	0a000003 	beq	603b4 <TClassOneModem::C1CnctBegin(void)+0xe4>
         603a4:	e3100001 	tst	r0, #1	; 0x1
         603a8:	059457a0 	ldreq	r5, [r4, #1952]	; fField1952
         603ac:	159457a4 	ldrne	r5, [r4, #1956]	; fField1956
         603b0:	ea000000 	b	603b8 <TClassOneModem::C1CnctBegin(void)+0xe8>
         603b4:	e594579c 	ldr	r5, [r4, #1948]	; fField1948
         603b8:	e3350000 	teq	r5, #0	; 0x0
         603bc:	0a00001c 	beq	60434 <TClassOneModem::C1CnctBegin(void)+0x164>
         603c0:	e1a00005 	mov	r0, r5
         603c4:	eb6d55b9 	bl	1bb5ab0 <$strlen>
         603c8:	e3300000 	teq	r0, #0	; 0x0
         603cc:	15d407ed 	ldrneb	r0, [r4, #2029]	; fField2029
         603d0:	13300000 	teqne	r0, #0	; 0x0
         603d4:	0a000016 	beq	60434 <TClassOneModem::C1CnctBegin(void)+0x164>
         603d8:	e3a00003 	mov	r0, #3	; 0x3
         603dc:	e58405b4 	str	r0, [r4, #1460]	; fField1460
         603e0:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         603e4:	e5900018 	ldr	r0, [r0, #24]	; fField24
         603e8:	e3a03000 	mov	r3, #0	; 0x0
         603ec:	e3a02000 	mov	r2, #0	; 0x0
         603f0:	e3a01000 	mov	r1, #0	; 0x0
         603f4:	e584078c 	str	r0, [r4, #1932]	; fField1932
         603f8:	e3a00000 	mov	r0, #0	; 0x0
         603fc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         60400:	e1a01005 	mov	r1, r5
         60404:	e1a00004 	mov	r0, r4
         60408:	eb66ac79 	bl	1a0b5f4 <TClassOneModem::$BuildCommand(unsigned char const *, unsigned char *, unsigned long, unsigned char *, unsigned long, unsigned char *, unsigned long)>
         6040c:	e28dd010 	add	sp, sp, #16	; 0x10
         60410:	e3300000 	teq	r0, #0	; 0x0
         60414:	01a00004 	moveq	r0, r4
         60418:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
         6041c:	0a66d9d2 	beq	1a16b6c <TClassOneModem::$PutCommand(void)>
         60420:	e1a01000 	mov	r1, r0
         60424:	e1a00004 	mov	r0, r4
         60428:	e5942000 	ldr	r2, [r4]
         6042c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         60430:	e282f054 	add	pc, r2, #84	; 0x54
         60434:	e3a00000 	mov	r0, #0	; 0x0
         60438:	e58405f4 	str	r0, [r4, #1524]	; fField1524
         6043c:	e1a00004 	mov	r0, r4
         60440:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         60444:	ea66b06f 	b	1a0c608 <TClassOneModem::$C1CnctConfigModem(void)>
    */
}

/**
 * Symbol: TClassOneModem::TaskDestructor(void)
 * Address: 00060448
 */
TClassOneModem::TaskDestructor(void) {
    /*
         60448:	e1a0c00d 	mov	ip, sp
         6044c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         60450:	e24cb004 	sub	fp, ip, #4	; 0x4
         60454:	e1a04000 	mov	r4, r0
         60458:	e5900aa8 	ldr	r0, [r0, #2728]	; fField2728
         6045c:	e3300000 	teq	r0, #0	; 0x0
         60460:	1b6e0313 	blne	1be10b4 <$DisposPtr>
         60464:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         60468:	e3300000 	teq	r0, #0	; 0x0
         6046c:	1b6e0310 	blne	1be10b4 <$DisposPtr>
         60470:	e1a00004 	mov	r0, r4
         60474:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         60478:	ea66ee46 	b	1a1bd98 <TMNP::$TaskDestructor(void)>
    */
}

/**
 * Symbol: TClassOneModem::C1CnctConfigModem(void)
 * Address: 0006047c
 */
TClassOneModem::C1CnctConfigModem(void) {
    /*
         6047c:	e1a0c00d 	mov	ip, sp
         60480:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         60484:	e24cb004 	sub	fp, ip, #4	; 0x4
         60488:	e1a04000 	mov	r4, r0
         6048c:	e59f108c 	ldr	r1, [pc, #8c]	; 60520 <TClassOneModem::C1CnctConfigModem(void)+0xa4>	; fField8
         60490:	e59005f4 	ldr	r0, [r0, #1524]	; fField1524
         60494:	e3300000 	teq	r0, #0	; 0x0
         60498:	1a00001c 	bne	60510 <TClassOneModem::C1CnctConfigModem(void)+0x94>
         6049c:	e5940aa8 	ldr	r0, [r4, #2728]	; fField2728
         604a0:	e3300000 	teq	r0, #0	; 0x0
         604a4:	0a000014 	beq	604fc <TClassOneModem::C1CnctConfigModem(void)+0x80>
         604a8:	eb6d5580 	bl	1bb5ab0 <$strlen>
         604ac:	e3300000 	teq	r0, #0	; 0x0
         604b0:	15d407ee 	ldrneb	r0, [r4, #2030]	; fField2030
         604b4:	13300000 	teqne	r0, #0	; 0x0
         604b8:	0a00000f 	beq	604fc <TClassOneModem::C1CnctConfigModem(void)+0x80>
         604bc:	e3a03000 	mov	r3, #0	; 0x0
         604c0:	e3a02000 	mov	r2, #0	; 0x0
         604c4:	e3a01000 	mov	r1, #0	; 0x0
         604c8:	e3a00000 	mov	r0, #0	; 0x0
         604cc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         604d0:	e5941aa8 	ldr	r1, [r4, #2728]	; fField2728
         604d4:	e1a00004 	mov	r0, r4
         604d8:	eb66ac45 	bl	1a0b5f4 <TClassOneModem::$BuildCommand(unsigned char const *, unsigned char *, unsigned long, unsigned char *, unsigned long, unsigned char *, unsigned long)>
         604dc:	e28dd010 	add	sp, sp, #16	; 0x10
         604e0:	e1b01000 	movs	r1, r0
         604e4:	1a000009 	bne	60510 <TClassOneModem::C1CnctConfigModem(void)+0x94>
         604e8:	e3a00004 	mov	r0, #4	; 0x4
         604ec:	e58405b4 	str	r0, [r4, #1460]	; fField1460
         604f0:	e1a00004 	mov	r0, r4
         604f4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         604f8:	ea66d99b 	b	1a16b6c <TClassOneModem::$PutCommand(void)>
         604fc:	e3a00000 	mov	r0, #0	; 0x0
         60500:	e58405f4 	str	r0, [r4, #1524]	; fField1524
         60504:	e1a00004 	mov	r0, r4
         60508:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         6050c:	ea66b040 	b	1a0c614 <TClassOneModem::$C1CnctDialPrefs(void)>
         60510:	e1a00004 	mov	r0, r4
         60514:	e5942000 	ldr	r2, [r4]
         60518:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         6051c:	e282f054 	add	pc, r2, #84	; 0x54
         60520:	ffffa23b 	swinv	0x00ffa23b
    */
}

/**
 * Symbol: TClassOneModem::C1CnctDialPrefs(void)
 * Address: 00060524
 */
TClassOneModem::C1CnctDialPrefs(void) {
    /*
         60524:	e1a0c00d 	mov	ip, sp
         60528:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6052c:	e24cb004 	sub	fp, ip, #4	; 0x4
         60530:	e1a04000 	mov	r4, r0
         60534:	e59f1058 	ldr	r1, [pc, #58]	; 60594 <TClassOneModem::C1CnctDialPrefs(void)+0x70>
         60538:	e59005f4 	ldr	r0, [r0, #1524]	; fField1524
         6053c:	e3300000 	teq	r0, #0	; 0x0
         60540:	1a000010 	bne	60588 <TClassOneModem::C1CnctDialPrefs(void)+0x64>
         60544:	e5d40811 	ldrb	r0, [r4, #2065]	; fField2065
         60548:	e3300000 	teq	r0, #0	; 0x0
         6054c:	01a00004 	moveq	r0, r4
         60550:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         60554:	0a66b02f 	beq	1a0c618 <TClassOneModem::$C1CnctSetClass(void)>
         60558:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         6055c:	e3c00001 	bic	r0, r0, #1	; 0x1
         60560:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         60564:	e3a00005 	mov	r0, #5	; 0x5
         60568:	e58405b4 	str	r0, [r4, #1460]	; fField1460
         6056c:	e3a00002 	mov	r0, #2	; 0x2
         60570:	e58405c0 	str	r0, [r4, #1472]	; fField1472
         60574:	e1a00004 	mov	r0, r4
         60578:	e3a01002 	mov	r1, #2	; 0x2
         6057c:	eb66ac12 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         60580:	e1b01000 	movs	r1, r0
         60584:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         60588:	e1a00004 	mov	r0, r4
         6058c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         60590:	ea6d82be 	b	1bc1090 <TCommTool::$StartAbort(long)>
         60594:	ffffa23b 	swinv	0x00ffa23b
    */
}

/**
 * Symbol: TClassOneModem::C1CnctSetClass(void)
 * Address: 00060598
 */
TClassOneModem::C1CnctSetClass(void) {
    /*
         60598:	e1a0c00d 	mov	ip, sp
         6059c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         605a0:	e24cb004 	sub	fp, ip, #4	; 0x4
         605a4:	e1a04000 	mov	r4, r0
         605a8:	e5900794 	ldr	r0, [r0, #1940]	; fField1940
         605ac:	e3300009 	teq	r0, #9	; 0x9
         605b0:	159f1078 	ldrne	r1, [pc, #78]	; 60630 <TClassOneModem::C1CnctSetClass(void)+0x98>
         605b4:	03a01039 	moveq	r1, #57	; 0x39
         605b8:	02411c5e 	subeq	r1, r1, #24064	; 0x5e00
         605bc:	e59405f4 	ldr	r0, [r4, #1524]	; fField1524
         605c0:	e3300000 	teq	r0, #0	; 0x0
         605c4:	1a000016 	bne	60624 <TClassOneModem::C1CnctSetClass(void)+0x8c>
         605c8:	e5d40811 	ldrb	r0, [r4, #2065]	; fField2065
         605cc:	e3300000 	teq	r0, #0	; 0x0
         605d0:	159407d8 	ldrne	r0, [r4, #2008]	; fField2008
         605d4:	15900014 	ldrne	r0, [r0, #20]	; fField20
         605d8:	13300c4b 	teqne	r0, #19200	; 0x4b00
         605dc:	01a00004 	moveq	r0, r4
         605e0:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         605e4:	0a67384e 	beq	1a2e724 <TClassOneModem::$C1CnctSetClassBaud(void)>
         605e8:	e3a03008 	mov	r3, #8	; 0x8
         605ec:	e92d0008 	stmdb	sp!, {r3}
         605f0:	e1a00004 	mov	r0, r4
         605f4:	e3a03000 	mov	r3, #0	; 0x0
         605f8:	e3a02000 	mov	r2, #0	; 0x0
         605fc:	e3a01c4b 	mov	r1, #19200	; 0x4b00
         60600:	eb66e189 	bl	1a18c2c <TClassOneModem::$ResetSerialDrvr(unsigned long, long, long, long)>
         60604:	e28dd004 	add	sp, sp, #4	; 0x4
         60608:	e3a00006 	mov	r0, #6	; 0x6
         6060c:	e58405b4 	str	r0, [r4, #1460]	; fField1460
         60610:	e1a00004 	mov	r0, r4
         60614:	e3a01013 	mov	r1, #19	; 0x13
         60618:	eb66abeb 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         6061c:	e1b01000 	movs	r1, r0
         60620:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         60624:	e1a00004 	mov	r0, r4
         60628:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         6062c:	ea6d8297 	b	1bc1090 <TCommTool::$StartAbort(long)>
         60630:	ffffa23b 	swinv	0x00ffa23b
    */
}

/**
 * Symbol: TClassOneModem::C1CnctSetClassBaud(void)
 * Address: 00060634
 */
TClassOneModem::C1CnctSetClassBaud(void) {
    /*
         60634:	e1a0c00d 	mov	ip, sp
         60638:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         6063c:	e24cb004 	sub	fp, ip, #4	; 0x4
         60640:	e1a04000 	mov	r4, r0
         60644:	e59005f4 	ldr	r0, [r0, #1524]	; fField1524
         60648:	e3a05000 	mov	r5, #0	; 0x0
         6064c:	e3300000 	teq	r0, #0	; 0x0
         60650:	159407d8 	ldrne	r0, [r4, #2008]	; fField2008
         60654:	15900014 	ldrne	r0, [r0, #20]	; fField20
         60658:	13300c4b 	teqne	r0, #19200	; 0x4b00
         6065c:	0a000008 	beq	60684 <TClassOneModem::C1CnctSetClassBaud(void)+0x50>
         60660:	e3a03008 	mov	r3, #8	; 0x8
         60664:	e58455f4 	str	r5, [r4, #1524]	; fField1524
         60668:	e92d0008 	stmdb	sp!, {r3}
         6066c:	e1a00004 	mov	r0, r4
         60670:	e3a03000 	mov	r3, #0	; 0x0
         60674:	e3a02000 	mov	r2, #0	; 0x0
         60678:	e3a01c4b 	mov	r1, #19200	; 0x4b00
         6067c:	eb66e16a 	bl	1a18c2c <TClassOneModem::$ResetSerialDrvr(unsigned long, long, long, long)>
         60680:	e28dd004 	add	sp, sp, #4	; 0x4
         60684:	e59f0044 	ldr	r0, [pc, #44]	; 606d0 <TClassOneModem::C1CnctSetClassBaud(void)+0x9c>
         60688:	e59415f4 	ldr	r1, [r4, #1524]	; fField1524
         6068c:	e3310000 	teq	r1, #0	; 0x0
         60690:	1a000049 	bne	607bc <TClassOneModem::C1CnctSetClassBaud(void)+0x188>
         60694:	e5940018 	ldr	r0, [r4, #24]	; fField24
         60698:	e3800a01 	orr	r0, r0, #4096	; 0x1000
         6069c:	e5840018 	str	r0, [r4, #24]	; fField24
         606a0:	e5c45b99 	strb	r5, [r4, #2969]	; fField2969
         606a4:	e5c45b98 	strb	r5, [r4, #2968]	; fField2968
         606a8:	e5d418d8 	ldrb	r1, [r4, #2264]	; fField2264
         606ac:	e3310000 	teq	r1, #0	; 0x0
         606b0:	15d418d9 	ldrneb	r1, [r4, #2265]	; fField2265
         606b4:	13310000 	teqne	r1, #0	; 0x0
         606b8:	0a00000c 	beq	606f0 <TClassOneModem::C1CnctSetClassBaud(void)+0xbc>
         606bc:	e3100001 	tst	r0, #1	; 0x1
         606c0:	0a000003 	beq	606d4 <TClassOneModem::C1CnctSetClassBaud(void)+0xa0>
         606c4:	e1a00004 	mov	r0, r4
         606c8:	eb66afcf 	bl	1a0c60c <TClassOneModem::$C1CnctConnectComplete(void)>
         606cc:	ea000003 	b	606e0 <TClassOneModem::C1CnctSetClassBaud(void)+0xac>
         606d0:	ffffa23b 	swinv	0x00ffa23b
         606d4:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         606d8:	e3c00b02 	bic	r0, r0, #2048	; 0x800
         606dc:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         606e0:	e584578c 	str	r5, [r4, #1932]	; fField1932
         606e4:	e1a00004 	mov	r0, r4
         606e8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         606ec:	ea66c062 	b	1a1087c <TClassOneModem::$GetCommandResult(void)>
         606f0:	e3100040 	tst	r0, #64	; 0x40
         606f4:	0a000017 	beq	60758 <TClassOneModem::C1CnctSetClassBaud(void)+0x124>
         606f8:	e5d40814 	ldrb	r0, [r4, #2068]	; fField2068
         606fc:	e3300000 	teq	r0, #0	; 0x0
         60700:	0a00000a 	beq	60730 <TClassOneModem::C1CnctSetClassBaud(void)+0xfc>
         60704:	e5d417c4 	ldrb	r1, [r4, #1988]	; fField1988
         60708:	e1a00004 	mov	r0, r4
         6070c:	eb673803 	bl	1a2e720 <TClassOneModem::$SetSpeakerVolume(unsigned char)>
         60710:	e3a00008 	mov	r0, #8	; 0x8
         60714:	e58405b4 	str	r0, [r4, #1460]	; fField1460
         60718:	e1a00004 	mov	r0, r4
         6071c:	e3a01005 	mov	r1, #5	; 0x5
         60720:	eb66aba9 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         60724:	e3300000 	teq	r0, #0	; 0x0
         60728:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         6072c:	ea000022 	b	607bc <TClassOneModem::C1CnctSetClassBaud(void)+0x188>
         60730:	e3a00001 	mov	r0, #1	; 0x1
         60734:	e5c408f1 	strb	r0, [r4, #2289]	; fField2289
         60738:	e3a00009 	mov	r0, #9	; 0x9
         6073c:	e58405b4 	str	r0, [r4, #1460]	; fField1460
         60740:	e1a00004 	mov	r0, r4
         60744:	e3a01015 	mov	r1, #21	; 0x15
         60748:	eb66ab9f 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         6074c:	e3300000 	teq	r0, #0	; 0x0
         60750:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         60754:	ea000018 	b	607bc <TClassOneModem::C1CnctSetClassBaud(void)+0x188>
         60758:	e5d417c4 	ldrb	r1, [r4, #1988]	; fField1988
         6075c:	e1a00004 	mov	r0, r4
         60760:	eb6737ee 	bl	1a2e720 <TClassOneModem::$SetSpeakerVolume(unsigned char)>
         60764:	e5d40814 	ldrb	r0, [r4, #2068]	; fField2068
         60768:	e3300000 	teq	r0, #0	; 0x0
         6076c:	0a000007 	beq	60790 <TClassOneModem::C1CnctSetClassBaud(void)+0x15c>
         60770:	e3a0000b 	mov	r0, #11	; 0xb
         60774:	e58405b4 	str	r0, [r4, #1460]	; fField1460
         60778:	e1a00004 	mov	r0, r4
         6077c:	e3a01006 	mov	r1, #6	; 0x6
         60780:	eb66ab91 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         60784:	e3300000 	teq	r0, #0	; 0x0
         60788:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         6078c:	ea00000a 	b	607bc <TClassOneModem::C1CnctSetClassBaud(void)+0x188>
         60790:	e1a00004 	mov	r0, r4
         60794:	eb66cc88 	bl	1a139bc <TClassOneModem::$InitPhoneNumberInfo(void)>
         60798:	e3300000 	teq	r0, #0	; 0x0
         6079c:	1a000006 	bne	607bc <TClassOneModem::C1CnctSetClassBaud(void)+0x188>
         607a0:	e3a00007 	mov	r0, #7	; 0x7
         607a4:	e58405b4 	str	r0, [r4, #1460]	; fField1460
         607a8:	e1a00004 	mov	r0, r4
         607ac:	e3a01003 	mov	r1, #3	; 0x3
         607b0:	eb66ab85 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         607b4:	e3300000 	teq	r0, #0	; 0x0
         607b8:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         607bc:	e1a01000 	mov	r1, r0
         607c0:	e1a00004 	mov	r0, r4
         607c4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         607c8:	ea6d8230 	b	1bc1090 <TCommTool::$StartAbort(long)>
    */
}

/**
 * Symbol: TClassOneModem::C1CnctDial(void)
 * Address: 000607cc
 */
TClassOneModem::C1CnctDial(void) {
    /*
         607cc:	e1a0c00d 	mov	ip, sp
         607d0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         607d4:	e24cb004 	sub	fp, ip, #4	; 0x4
         607d8:	e1a04000 	mov	r4, r0
         607dc:	e5900904 	ldr	r0, [r0, #2308]	; fField2308
         607e0:	e5941900 	ldr	r1, [r4, #2304]	; fField2304
         607e4:	e1300001 	teq	r0, r1
         607e8:	01a00004 	moveq	r0, r4
         607ec:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         607f0:	0a66af85 	beq	1a0c60c <TClassOneModem::$C1CnctConnectComplete(void)>
         607f4:	e59415f4 	ldr	r1, [r4, #1524]	; fField1524
         607f8:	e1a00004 	mov	r0, r4
         607fc:	eb66b3b3 	bl	1a0d6d0 <TClassOneModem::$CheckForErrorResult(unsigned long)>
         60800:	e3300000 	teq	r0, #0	; 0x0
         60804:	1a000004 	bne	6081c <TClassOneModem::C1CnctDial(void)+0x50>
         60808:	e1a00004 	mov	r0, r4
         6080c:	e3a01003 	mov	r1, #3	; 0x3
         60810:	eb66ab6d 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         60814:	e3300000 	teq	r0, #0	; 0x0
         60818:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         6081c:	e1a01000 	mov	r1, r0
         60820:	e1a00004 	mov	r0, r4
         60824:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         60828:	ea6d8218 	b	1bc1090 <TCommTool::$StartAbort(long)>
    */
}

/**
 * Symbol: TClassOneModem::C1CnctWaitForConnect(void)
 * Address: 0006082c
 */
TClassOneModem::C1CnctWaitForConnect(void) {
    /*
         6082c:	e1a0c00d 	mov	ip, sp
         60830:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         60834:	e24cb004 	sub	fp, ip, #4	; 0x4
         60838:	e1a04000 	mov	r4, r0
         6083c:	eb670a53 	bl	1a23190 <TClassOneModem::$AbortTimer(void)>
         60840:	e59415f4 	ldr	r1, [r4, #1524]	; fField1524
         60844:	e1a00004 	mov	r0, r4
         60848:	eb66b3a0 	bl	1a0d6d0 <TClassOneModem::$CheckForErrorResult(unsigned long)>
         6084c:	e3300000 	teq	r0, #0	; 0x0
         60850:	1a00000d 	bne	6088c <TClassOneModem::C1CnctWaitForConnect(void)+0x60>
         60854:	e59405f4 	ldr	r0, [r4, #1524]	; fField1524
         60858:	e3300001 	teq	r0, #1	; 0x1
         6085c:	0a000012 	beq	608ac <TClassOneModem::C1CnctWaitForConnect(void)+0x80>
         60860:	e3300002 	teq	r0, #2	; 0x2
         60864:	1a00000c 	bne	6089c <TClassOneModem::C1CnctWaitForConnect(void)+0x70>
         60868:	e3a00001 	mov	r0, #1	; 0x1
         6086c:	e5c408f1 	strb	r0, [r4, #2289]	; fField2289
         60870:	e3a00009 	mov	r0, #9	; 0x9
         60874:	e58405b4 	str	r0, [r4, #1460]	; fField1460
         60878:	e1a00004 	mov	r0, r4
         6087c:	e3a01015 	mov	r1, #21	; 0x15
         60880:	eb66ab51 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         60884:	e3300000 	teq	r0, #0	; 0x0
         60888:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         6088c:	e1a01000 	mov	r1, r0
         60890:	e1a00004 	mov	r0, r4
         60894:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         60898:	ea6d81fc 	b	1bc1090 <TCommTool::$StartAbort(long)>
         6089c:	e594088c 	ldr	r0, [r4, #2188]	; fField2188
         608a0:	e3300004 	teq	r0, #4	; 0x4
         608a4:	13300008 	teqne	r0, #8	; 0x8
         608a8:	1a000002 	bne	608b8 <TClassOneModem::C1CnctWaitForConnect(void)+0x8c>
         608ac:	e1a00004 	mov	r0, r4
         608b0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         608b4:	ea66af54 	b	1a0c60c <TClassOneModem::$C1CnctConnectComplete(void)>
         608b8:	e1a00004 	mov	r0, r4
         608bc:	eb670e55 	bl	1a24218 <TClassOneModem::$C1CnctCheckAndSetListenTimer(void)>
         608c0:	e3300000 	teq	r0, #0	; 0x0
         608c4:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         608c8:	e3a00000 	mov	r0, #0	; 0x0
         608cc:	e584078c 	str	r0, [r4, #1932]	; fField1932
         608d0:	e1a00004 	mov	r0, r4
         608d4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         608d8:	ea66bfe7 	b	1a1087c <TClassOneModem::$GetCommandResult(void)>
    */
}

/**
 * Symbol: TClassOneModem::C1CnctCheckAndSetListenTimer(void)
 * Address: 000608dc
 */
TClassOneModem::C1CnctCheckAndSetListenTimer(void) {
    /*
         608dc:	e1a0c00d 	mov	ip, sp
         608e0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         608e4:	e24cb004 	sub	fp, ip, #4	; 0x4
         608e8:	e1a04000 	mov	r4, r0
         608ec:	e3a05001 	mov	r5, #1	; 0x1
         608f0:	e59008f8 	ldr	r0, [r0, #2296]	; fField2296
         608f4:	e3300000 	teq	r0, #0	; 0x0
         608f8:	0a00002a 	beq	609a8 <TClassOneModem::C1CnctCheckAndSetListenTimer(void)+0xcc>
         608fc:	e24dd028 	sub	sp, sp, #40	; 0x28
         60900:	e28d0008 	add	r0, sp, #8	; 0x8
         60904:	eb6dcc33 	bl	1bd39d8 <$GetGlobalTime>
         60908:	e2840f77 	add	r0, r4, #476	; 0x1dc
         6090c:	e2800b01 	add	r0, r0, #1024	; 0x400
         60910:	e24dd008 	sub	sp, sp, #8	; 0x8
         60914:	e28d1010 	add	r1, sp, #16	; 0x10
         60918:	e8915000 	ldmia	r1, {ip, lr}
         6091c:	e88d5000 	stmia	sp, {ip, lr}
         60920:	e1a0100d 	mov	r1, sp
         60924:	eb6e01dc 	bl	1be109c <$CompSub>
         60928:	e28d0008 	add	r0, sp, #8	; 0x8
         6092c:	e8bd5000 	ldmia	sp!, {ip, lr}
         60930:	e8805000 	stmia	r0, {ip, lr}
         60934:	e28d1020 	add	r1, sp, #32	; 0x20
         60938:	e89d5000 	ldmia	sp, {ip, lr}
         6093c:	e8815000 	stmia	r1, {ip, lr}
         60940:	e28d0010 	add	r0, sp, #16	; 0x10
         60944:	e3a029e1 	mov	r2, #3686400	; 0x384000
         60948:	e59418f8 	ldr	r1, [r4, #2296]	; fField2296
         6094c:	eb6db35d 	bl	1bcd6c8 <TTime::$__ct(unsigned long, TimeUnits)>
         60950:	e28d0018 	add	r0, sp, #24	; 0x18
         60954:	e28d1010 	add	r1, sp, #16	; 0x10
         60958:	e8915000 	ldmia	r1, {ip, lr}
         6095c:	e8805000 	stmia	r0, {ip, lr}
         60960:	e28d1018 	add	r1, sp, #24	; 0x18
         60964:	e28d0020 	add	r0, sp, #32	; 0x20
         60968:	eb6e01c6 	bl	1be1088 <$CompCompare>
         6096c:	e3500000 	cmp	r0, #0	; 0x0
         60970:	a1a00004 	movge	r0, r4
         60974:	a59f1034 	ldrge	r1, [pc, #34]	; 609b0 <TClassOneModem::C1CnctCheckAndSetListenTimer(void)+0xd4>
         60978:	aa000007 	bge	6099c <TClassOneModem::C1CnctCheckAndSetListenTimer(void)+0xc0>
         6097c:	e594278c 	ldr	r2, [r4, #1932]	; fField1932
         60980:	e1a00004 	mov	r0, r4
         60984:	e3a01007 	mov	r1, #7	; 0x7
         60988:	eb6722c5 	bl	1a294a4 <TClassOneModem::$PostTimer(unsigned long, unsigned long)>
         6098c:	e3300000 	teq	r0, #0	; 0x0
         60990:	0a000003 	beq	609a4 <TClassOneModem::C1CnctCheckAndSetListenTimer(void)+0xc8>
         60994:	e1a01000 	mov	r1, r0
         60998:	e1a00004 	mov	r0, r4
         6099c:	eb6d81bb 	bl	1bc1090 <TCommTool::$StartAbort(long)>
         609a0:	e3a05000 	mov	r5, #0	; 0x0
         609a4:	e28dd028 	add	sp, sp, #40	; 0x28
         609a8:	e1a00005 	mov	r0, r5
         609ac:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         609b0:	ffffc16f 	swinv	0x00ffc16f
    */
}

/**
 * Symbol: TClassOneModem::C1CnctCheckRingCount(void)
 * Address: 000609b4
 */
TClassOneModem::C1CnctCheckRingCount(void) {
    /*
         609b4:	e1a0c00d 	mov	ip, sp
         609b8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         609bc:	e24cb004 	sub	fp, ip, #4	; 0x4
         609c0:	e1a04000 	mov	r4, r0
         609c4:	e59005c4 	ldr	r0, [r0, #1476]	; fField1476
         609c8:	e3300000 	teq	r0, #0	; 0x0
         609cc:	1a000004 	bne	609e4 <TClassOneModem::C1CnctCheckRingCount(void)+0x30>
         609d0:	e59415f4 	ldr	r1, [r4, #1524]	; fField1524
         609d4:	e331003b 	teq	r1, #59	; 0x3b
         609d8:	0a000006 	beq	609f8 <TClassOneModem::C1CnctCheckRingCount(void)+0x44>
         609dc:	e1a00004 	mov	r0, r4
         609e0:	eb66b33a 	bl	1a0d6d0 <TClassOneModem::$CheckForErrorResult(unsigned long)>
         609e4:	e3300000 	teq	r0, #0	; 0x0
         609e8:	11a01000 	movne	r1, r0
         609ec:	11a00004 	movne	r0, r4
         609f0:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         609f4:	1a6d81a5 	bne	1bc1090 <TCommTool::$StartAbort(long)>
         609f8:	e2840f4d 	add	r0, r4, #308	; 0x134
         609fc:	e2800b02 	add	r0, r0, #2048	; 0x800
         60a00:	eb6d4be8 	bl	1bb39a8 <$atoi>
         60a04:	e5c408f6 	strb	r0, [r4, #2294]	; fField2294
         60a08:	e3a0000a 	mov	r0, #10	; 0xa
         60a0c:	e58405b4 	str	r0, [r4, #1460]	; fField1460
         60a10:	e1a00004 	mov	r0, r4
         60a14:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         60a18:	ea66bf97 	b	1a1087c <TClassOneModem::$GetCommandResult(void)>
    */
}

/**
 * Symbol: TClassOneModem::C1CnctGetCheckRingCountResponse(void)
 * Address: 00060a1c
 */
TClassOneModem::C1CnctGetCheckRingCountResponse(void) {
    /*
         60a1c:	e1a0c00d 	mov	ip, sp
         60a20:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         60a24:	e24cb004 	sub	fp, ip, #4	; 0x4
         60a28:	e1a04000 	mov	r4, r0
         60a2c:	e59005c4 	ldr	r0, [r0, #1476]	; fField1476
         60a30:	e3300000 	teq	r0, #0	; 0x0
         60a34:	1a00001f 	bne	60ab8 <TClassOneModem::C1CnctGetCheckRingCountResponse(void)+0x9c>
         60a38:	e59405f4 	ldr	r0, [r4, #1524]	; fField1524
         60a3c:	e3300000 	teq	r0, #0	; 0x0
         60a40:	159f0080 	ldrne	r0, [pc, #80]	; 60ac8 <TClassOneModem::C1CnctGetCheckRingCountResponse(void)+0xac>
         60a44:	1a00001b 	bne	60ab8 <TClassOneModem::C1CnctGetCheckRingCountResponse(void)+0x9c>
         60a48:	e5d408f4 	ldrb	r0, [r4, #2292]	; fField2292
         60a4c:	e3a05008 	mov	r5, #8	; 0x8
         60a50:	e3300000 	teq	r0, #0	; 0x0
         60a54:	1a000003 	bne	60a68 <TClassOneModem::C1CnctGetCheckRingCountResponse(void)+0x4c>
         60a58:	e5d408f6 	ldrb	r0, [r4, #2294]	; fField2294
         60a5c:	e5d417cd 	ldrb	r1, [r4, #1997]	; fField1997
         60a60:	e1500001 	cmp	r0, r1
         60a64:	aa00000a 	bge	60a94 <TClassOneModem::C1CnctGetCheckRingCountResponse(void)+0x78>
         60a68:	e3a06000 	mov	r6, #0	; 0x0
         60a6c:	e5c468f4 	strb	r6, [r4, #2292]	; fField2292
         60a70:	e1a00004 	mov	r0, r4
         60a74:	eb670de7 	bl	1a24218 <TClassOneModem::$C1CnctCheckAndSetListenTimer(void)>
         60a78:	e3300000 	teq	r0, #0	; 0x0
         60a7c:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         60a80:	e58455b4 	str	r5, [r4, #1460]	; fField1460
         60a84:	e584678c 	str	r6, [r4, #1932]	; fField1932
         60a88:	e1a00004 	mov	r0, r4
         60a8c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         60a90:	ea66bf79 	b	1a1087c <TClassOneModem::$GetCommandResult(void)>
         60a94:	e5d417c4 	ldrb	r1, [r4, #1988]	; fField1988
         60a98:	e1a00004 	mov	r0, r4
         60a9c:	eb67371f 	bl	1a2e720 <TClassOneModem::$SetSpeakerVolume(unsigned char)>
         60aa0:	e58455b4 	str	r5, [r4, #1460]	; fField1460
         60aa4:	e1a00004 	mov	r0, r4
         60aa8:	e3a01005 	mov	r1, #5	; 0x5
         60aac:	eb66aac6 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         60ab0:	e3300000 	teq	r0, #0	; 0x0
         60ab4:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         60ab8:	e1a01000 	mov	r1, r0
         60abc:	e1a00004 	mov	r0, r4
         60ac0:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         60ac4:	ea6d8171 	b	1bc1090 <TCommTool::$StartAbort(long)>
         60ac8:	ffffa23b 	swinv	0x00ffa23b
    */
}

/**
 * Symbol: TClassOneModem::C1CnctConnectComplete(void)
 * Address: 00060acc
 */
TClassOneModem::C1CnctConnectComplete(void) {
    /*
         60acc:	e1a0c00d 	mov	ip, sp
         60ad0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         60ad4:	e24cb004 	sub	fp, ip, #4	; 0x4
         60ad8:	e1a04000 	mov	r4, r0
         60adc:	e3a01000 	mov	r1, #0	; 0x0
         60ae0:	eb67370e 	bl	1a2e720 <TClassOneModem::$SetSpeakerVolume(unsigned char)>
         60ae4:	e3a05000 	mov	r5, #0	; 0x0
         60ae8:	e594188c 	ldr	r1, [r4, #2188]	; fField2188
         60aec:	e3310004 	teq	r1, #4	; 0x4
         60af0:	13310008 	teqne	r1, #8	; 0x8
         60af4:	1a000033 	bne	60bc8 <TClassOneModem::C1CnctConnectComplete(void)+0xfc>
         60af8:	e59405f4 	ldr	r0, [r4, #1524]	; fField1524
         60afc:	e330001a 	teq	r0, #26	; 0x1a
         60b00:	1330002c 	teqne	r0, #44	; 0x2c
         60b04:	1a000005 	bne	60b20 <TClassOneModem::C1CnctConnectComplete(void)+0x54>
         60b08:	e5d405f8 	ldrb	r0, [r4, #1528]	; fField1528
         60b0c:	e5c40b99 	strb	r0, [r4, #2969]	; fField2969
         60b10:	e1a00420 	mov	r0, r0, lsr #8
         60b14:	e5c40b98 	strb	r0, [r4, #2968]	; fField2968
         60b18:	e584578c 	str	r5, [r4, #1932]	; fField1932
         60b1c:	ea000030 	b	60be4 <TClassOneModem::C1CnctConnectComplete(void)+0x118>
         60b20:	e5940b98 	ldr	r0, [r4, #2968]	; fField2968
         60b24:	e1b00820 	movs	r0, r0, lsr #16
         60b28:	0a000026 	beq	60bc8 <TClassOneModem::C1CnctConnectComplete(void)+0xfc>
         60b2c:	e3310004 	teq	r1, #4	; 0x4
         60b30:	13a0102c 	movne	r1, #44	; 0x2c
         60b34:	03a0101a 	moveq	r1, #26	; 0x1a
         60b38:	e58415f4 	str	r1, [r4, #1524]	; fField1524
         60b3c:	e5c405f8 	strb	r0, [r4, #1528]	; fField1528
         60b40:	e3e010c1 	mvn	r1, #193	; 0xc1
         60b44:	e2411c5d 	sub	r1, r1, #23808	; 0x5d00
         60b48:	e2412005 	sub	r2, r1, #5	; 0x5
         60b4c:	e350000f 	cmp	r0, #15	; 0xf
         60b50:	908ff100 	addls	pc, pc, r0, lsl #2
         60b54:	ea000019 	b	60bc0 <TClassOneModem::C1CnctConnectComplete(void)+0xf4>
         60b58:	ea000018 	b	60bc0 <TClassOneModem::C1CnctConnectComplete(void)+0xf4>
         60b5c:	ea000015 	b	60bb8 <TClassOneModem::C1CnctConnectComplete(void)+0xec>
         60b60:	ea000016 	b	60bc0 <TClassOneModem::C1CnctConnectComplete(void)+0xf4>
         60b64:	ea000013 	b	60bb8 <TClassOneModem::C1CnctConnectComplete(void)+0xec>
         60b68:	ea000012 	b	60bb8 <TClassOneModem::C1CnctConnectComplete(void)+0xec>
         60b6c:	ea000013 	b	60bc0 <TClassOneModem::C1CnctConnectComplete(void)+0xf4>
         60b70:	ea000012 	b	60bc0 <TClassOneModem::C1CnctConnectComplete(void)+0xf4>
         60b74:	ea000011 	b	60bc0 <TClassOneModem::C1CnctConnectComplete(void)+0xf4>
         60b78:	ea000010 	b	60bc0 <TClassOneModem::C1CnctConnectComplete(void)+0xf4>
         60b7c:	ea00000f 	b	60bc0 <TClassOneModem::C1CnctConnectComplete(void)+0xf4>
         60b80:	ea000006 	b	60ba0 <TClassOneModem::C1CnctConnectComplete(void)+0xd4>
         60b84:	ea00000b 	b	60bb8 <TClassOneModem::C1CnctConnectComplete(void)+0xec>
         60b88:	ea00000c 	b	60bc0 <TClassOneModem::C1CnctConnectComplete(void)+0xf4>
         60b8c:	ea000006 	b	60bac <TClassOneModem::C1CnctConnectComplete(void)+0xe0>
         60b90:	ea000008 	b	60bb8 <TClassOneModem::C1CnctConnectComplete(void)+0xec>
         60b94:	e59f0000 	ldr	r0, [pc, #0]	; 60b9c <TClassOneModem::C1CnctConnectComplete(void)+0xd0>
         60b98:	ea00005f 	b	60d1c <TClassOneModem::C1CnctConnectComplete(void)+0x250>
         60b9c:	ffffa23f 	swinv	0x00ffa23f
         60ba0:	e59f0000 	ldr	r0, [pc, #0]	; 60ba8 <TClassOneModem::C1CnctConnectComplete(void)+0xdc>
         60ba4:	ea00005c 	b	60d1c <TClassOneModem::C1CnctConnectComplete(void)+0x250>
         60ba8:	ffffa23b 	swinv	0x00ffa23b
         60bac:	e3e000c2 	mvn	r0, #194	; 0xc2
         60bb0:	e2400c5d 	sub	r0, r0, #23808	; 0x5d00
         60bb4:	ea000058 	b	60d1c <TClassOneModem::C1CnctConnectComplete(void)+0x250>
         60bb8:	e1a00001 	mov	r0, r1
         60bbc:	ea000056 	b	60d1c <TClassOneModem::C1CnctConnectComplete(void)+0x250>
         60bc0:	e1a00002 	mov	r0, r2
         60bc4:	ea000054 	b	60d1c <TClassOneModem::C1CnctConnectComplete(void)+0x250>
         60bc8:	e5c451d1 	strb	r5, [r4, #465]	; fField465
         60bcc:	e59415f4 	ldr	r1, [r4, #1524]	; fField1524
         60bd0:	e331003b 	teq	r1, #59	; 0x3b
         60bd4:	1a000005 	bne	60bf0 <TClassOneModem::C1CnctConnectComplete(void)+0x124>
         60bd8:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         60bdc:	e5900018 	ldr	r0, [r0, #24]	; fField24
         60be0:	e584078c 	str	r0, [r4, #1932]	; fField1932
         60be4:	e1a00004 	mov	r0, r4
         60be8:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         60bec:	ea66bf22 	b	1a1087c <TClassOneModem::$GetCommandResult(void)>
         60bf0:	e1a00004 	mov	r0, r4
         60bf4:	eb66b2b5 	bl	1a0d6d0 <TClassOneModem::$CheckForErrorResult(unsigned long)>
         60bf8:	e3300000 	teq	r0, #0	; 0x0
         60bfc:	1a000046 	bne	60d1c <TClassOneModem::C1CnctConnectComplete(void)+0x250>
         60c00:	e3a06002 	mov	r6, #2	; 0x2
         60c04:	e58465b4 	str	r6, [r4, #1460]	; fField1460
         60c08:	e5c4503c 	strb	r5, [r4, #60]	; fField60
         60c0c:	e5c4503d 	strb	r5, [r4, #61]	; fField61
         60c10:	e5c4503e 	strb	r5, [r4, #62]	; fField62
         60c14:	e5940788 	ldr	r0, [r4, #1928]	; fField1928
         60c18:	e3a07001 	mov	r7, #1	; 0x1
         60c1c:	e5840044 	str	r0, [r4, #68]	; fField68
         60c20:	e58477b4 	str	r7, [r4, #1972]	; fField1972
         60c24:	e5d408d8 	ldrb	r0, [r4, #2264]	; fField2264
         60c28:	e3300000 	teq	r0, #0	; 0x0
         60c2c:	15d408d9 	ldrneb	r0, [r4, #2265]	; fField2265
         60c30:	13300000 	teqne	r0, #0	; 0x0
         60c34:	1a000035 	bne	60d10 <TClassOneModem::C1CnctConnectComplete(void)+0x244>
         60c38:	e1a00004 	mov	r0, r4
         60c3c:	eb66aa58 	bl	1a0b5a4 <TClassOneModem::$AdjustForConnectSpeed(void)>
         60c40:	e5d40811 	ldrb	r0, [r4, #2065]	; fField2065
         60c44:	e3300000 	teq	r0, #0	; 0x0
         60c48:	0a000008 	beq	60c70 <TClassOneModem::C1CnctConnectComplete(void)+0x1a4>
         60c4c:	e5940018 	ldr	r0, [r4, #24]	; fField24
         60c50:	e3100040 	tst	r0, #64	; 0x40
         60c54:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         60c58:	13800101 	orrne	r0, r0, #1073741824	; 0x40000000
         60c5c:	158405b0 	strne	r0, [r4, #1456]	; fField1456
         60c60:	1a000025 	bne	60cfc <TClassOneModem::C1CnctConnectComplete(void)+0x230>
         60c64:	e3800501 	orr	r0, r0, #4194304	; 0x400000
         60c68:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         60c6c:	ea000027 	b	60d10 <TClassOneModem::C1CnctConnectComplete(void)+0x244>
         60c70:	e5d40812 	ldrb	r0, [r4, #2066]	; fField2066
         60c74:	e3300000 	teq	r0, #0	; 0x0
         60c78:	01a00004 	moveq	r0, r4
         60c7c:	03a01076 	moveq	r1, #118	; 0x76
         60c80:	02411c3f 	subeq	r1, r1, #16128	; 0x3f00
         60c84:	0a000026 	beq	60d24 <TClassOneModem::C1CnctConnectComplete(void)+0x258>
         60c88:	e5c4703d 	strb	r7, [r4, #61]	; fField61
         60c8c:	e59407b0 	ldr	r0, [r4, #1968]	; fField1968
         60c90:	e3100010 	tst	r0, #16	; 0x10
         60c94:	1a000005 	bne	60cb0 <TClassOneModem::C1CnctConnectComplete(void)+0x1e4>
         60c98:	e310000e 	tst	r0, #14	; 0xe
         60c9c:	0a000012 	beq	60cec <TClassOneModem::C1CnctConnectComplete(void)+0x220>
         60ca0:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         60ca4:	e5d0000d 	ldrb	r0, [r0, #13]
         60ca8:	e3300000 	teq	r0, #0	; 0x0
         60cac:	1a00000e 	bne	60cec <TClassOneModem::C1CnctConnectComplete(void)+0x220>
         60cb0:	e5940018 	ldr	r0, [r4, #24]	; fField24
         60cb4:	e3800901 	orr	r0, r0, #16384	; 0x4000
         60cb8:	e5840018 	str	r0, [r4, #24]	; fField24
         60cbc:	e58467b4 	str	r6, [r4, #1972]	; fField1972
         60cc0:	e5941788 	ldr	r1, [r4, #1928]	; fField1928
         60cc4:	e3100040 	tst	r0, #64	; 0x40
         60cc8:	e584155c 	str	r1, [r4, #1372]	; fField1372
         60ccc:	01a00004 	moveq	r0, r4
         60cd0:	091b68f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         60cd4:	0a66b698 	beq	1a0e73c <TMNP::$ConnectStart(void)>
         60cd8:	e3a0000c 	mov	r0, #12	; 0xc
         60cdc:	e5840584 	str	r0, [r4, #1412]	; fField1412
         60ce0:	e1a00004 	mov	r0, r4
         60ce4:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         60ce8:	ea66cf52 	b	1a14a38 <TMNP::$ListenStart(void)>
         60cec:	e58457b4 	str	r5, [r4, #1972]	; fField1972
         60cf0:	e5940018 	ldr	r0, [r4, #24]	; fField24
         60cf4:	e3100040 	tst	r0, #64	; 0x40
         60cf8:	0a000004 	beq	60d10 <TClassOneModem::C1CnctConnectComplete(void)+0x244>
         60cfc:	e1a00004 	mov	r0, r4
         60d00:	e3a01000 	mov	r1, #0	; 0x0
         60d04:	e5942000 	ldr	r2, [r4]
         60d08:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         60d0c:	e282f05c 	add	pc, r2, #92	; 0x5c
         60d10:	e1a00004 	mov	r0, r4
         60d14:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         60d18:	ea66b683 	b	1a0e72c <TClassOneModem::$ConnectModemComplete(void)>
         60d1c:	e1a01000 	mov	r1, r0
         60d20:	e1a00004 	mov	r0, r4
         60d24:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         60d28:	ea6d80d8 	b	1bc1090 <TCommTool::$StartAbort(long)>
    */
}

/**
 * Symbol: TClassOneModem::GetSizeOf(void)
 * Address: 00060d2c
 */
TClassOneModem::GetSizeOf(void) {
    /*
         60d2c:	e3a00fe9 	mov	r0, #932	; 0x3a4
         60d30:	e2800b02 	add	r0, r0, #2048	; 0x800
         60d34:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)
 * Address: 00060d38
 */
TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long) {
    /*
         60d38:	e1a0c00d 	mov	ip, sp
         60d3c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         60d40:	e24cb004 	sub	fp, ip, #4	; 0x4
         60d44:	e1a04000 	mov	r4, r0
         60d48:	e1a05001 	mov	r5, r1
         60d4c:	e3a06000 	mov	r6, #0	; 0x0
         60d50:	e3a08000 	mov	r8, #0	; 0x0
         60d54:	e3a0106d 	mov	r1, #109	; 0x6d
         60d58:	e2411c3f 	sub	r1, r1, #16128	; 0x3f00
         60d5c:	e2810010 	add	r0, r1, #16	; 0x10
         60d60:	e59fc078 	ldr	ip, [pc, #78]	; 60de0 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xa8>
         60d64:	e152000c 	cmp	r2, ip
         60d68:	0a00017f 	beq	6136c <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x634>
         60d6c:	e3a07007 	mov	r7, #7	; 0x7
         60d70:	ca000063 	bgt	60f04 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x1cc>
         60d74:	e59fc068 	ldr	ip, [pc, #68]	; 60de4 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xac>	; fField68
         60d78:	e152000c 	cmp	r2, ip
         60d7c:	0a000108 	beq	611a4 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x46c>
         60d80:	ca000033 	bgt	60e54 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x11c>
         60d84:	e59fc05c 	ldr	ip, [pc, #5c]	; 60de8 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xb0>
         60d88:	e152000c 	cmp	r2, ip
         60d8c:	0a0000c8 	beq	610b4 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x37c>
         60d90:	ca000017 	bgt	60df4 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xbc>
         60d94:	e59fc050 	ldr	ip, [pc, #50]	; 60dec <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xb4>
         60d98:	e132000c 	teq	r2, ip
         60d9c:	0a0000b7 	beq	61080 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x348>
         60da0:	e59fc048 	ldr	ip, [pc, #48]	; 60df0 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xb8>
         60da4:	e132000c 	teq	r2, ip
         60da8:	1a0001bd 	bne	614a4 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x76c>
         60dac:	e3330c01 	teq	r3, #256	; 0x100
         60db0:	13330c02 	teqne	r3, #512	; 0x200
         60db4:	05b5000c 	ldreq	r0, [r5, #12]!	; fField12
         60db8:	05a408f8 	streq	r0, [r4, #2296]!	; fField2296
         60dbc:	0a0001bc 	beq	614b4 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x77c>
         60dc0:	e3330c03 	teq	r3, #768	; 0x300
         60dc4:	15b408f8 	ldrne	r0, [r4, #2296]!	; fField2296
         60dc8:	1a00013c 	bne	612c0 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x588>
         60dcc:	e24dd010 	sub	sp, sp, #16	; 0x10
         60dd0:	e1a0000d 	mov	r0, sp
         60dd4:	eb6d6bf0 	bl	1bbbd9c <TCMOListenTimer::$__ct(void)>
         60dd8:	e1a0100d 	mov	r1, sp
         60ddc:	ea000132 	b	612ac <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x574>
         60de0:	6d667371 	stcvsl	3, cr7, [r6, -#452]!
         60de4:	6d646f20 	stcvsl	15, cr6, [r4, -#128]!
         60de8:	64697363 	strvsbt	r7, [r9], -#867
         60dec:	616e7377 	cmnvs	lr, r7, ror r3
         60df0:	636c7472 	cmnvs	ip, #1912602624	; 0x72000000
         60df4:	e59fc050 	ldr	ip, [pc, #50]	; 60e4c <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x114>
         60df8:	e132000c 	teq	r2, ip
         60dfc:	0a0000cd 	beq	61138 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x400>
         60e00:	e59fc048 	ldr	ip, [pc, #48]	; 60e50 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x118>
         60e04:	e132000c 	teq	r2, ip
         60e08:	1a0001a5 	bne	614a4 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x76c>
         60e0c:	e2847004 	add	r7, r4, #4	; 0x4
         60e10:	e2877b02 	add	r7, r7, #2048	; 0x800
         60e14:	e3330c01 	teq	r3, #256	; 0x100
         60e18:	13330c02 	teqne	r3, #512	; 0x200
         60e1c:	1a0000d5 	bne	61178 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x440>
         60e20:	e1a00007 	mov	r0, r7
         60e24:	e1a01005 	mov	r1, r5
         60e28:	eb6d5b68 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         60e2c:	e5b50004 	ldr	r0, [r5, #4]!	; fField4
         60e30:	e5b71004 	ldr	r1, [r7, #4]!	; fField4
         60e34:	e1500001 	cmp	r0, r1
         60e38:	b5c48814 	strltb	r8, [r4, #2068]	; fField2068
         60e3c:	e5d40810 	ldrb	r0, [r4, #2064]	; fField2064
         60e40:	e5c408d8 	strb	r0, [r4, #2264]	; fField2264
         60e44:	e5c408d9 	strb	r0, [r4, #2265]	; fField2265
         60e48:	ea000199 	b	614b4 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x77c>
         60e4c:	68736d6e 	ldmvsda	r3!, {r1, r2, r3, r5, r6, r8, sl, fp, sp, lr}^
         60e50:	6d63746f 	stcvsl	4, cr7, [r3, -#444]!
         60e54:	e284e028 	add	lr, r4, #40	; 0x28
         60e58:	e28eeb02 	add	lr, lr, #2048	; 0x800
         60e5c:	e59fc050 	ldr	ip, [pc, #50]	; 60eb4 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x17c>
         60e60:	e152000c 	cmp	r2, ip
         60e64:	0a000117 	beq	612c8 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x590>
         60e68:	ca000014 	bgt	60ec0 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x188>
         60e6c:	e59fc044 	ldr	ip, [pc, #44]	; 60eb8 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x180>
         60e70:	e132000c 	teq	r2, ip
         60e74:	0a000096 	beq	610d4 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x39c>
         60e78:	e59fc03c 	ldr	ip, [pc, #3c]	; 60ebc <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x184>
         60e7c:	e132000c 	teq	r2, ip
         60e80:	1a000187 	bne	614a4 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x76c>
         60e84:	e3330c01 	teq	r3, #256	; 0x100
         60e88:	13330c02 	teqne	r3, #512	; 0x200
         60e8c:	0a00018a 	beq	614bc <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x784>
         60e90:	e3330c03 	teq	r3, #768	; 0x300
         60e94:	1a000165 	bne	61430 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x6f8>
         60e98:	e24dd024 	sub	sp, sp, #36	; 0x24
         60e9c:	e1a0000d 	mov	r0, sp
         60ea0:	eb66f819 	bl	1a1ef0c <TCMOModemFaxClass1Cap::$__ct(void)>
         60ea4:	e1a0100d 	mov	r1, sp
         60ea8:	e1a00005 	mov	r0, r5
         60eac:	eb6d5b47 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         60eb0:	ea0000e9 	b	6125c <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x524>
         60eb4:	6d666178 	stfvse	f6, [r6, -#480]!
         60eb8:	6d656370 	stcvsl	3, cr6, [r5, -#448]!
         60ebc:	6d663163 	stfvse	f3, [r6, -#396]!
         60ec0:	e59fc034 	ldr	ip, [pc, #34]	; 60efc <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x1c4>
         60ec4:	e132000c 	teq	r2, ip
         60ec8:	0a000116 	beq	61328 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x5f0>
         60ecc:	e59fc02c 	ldr	ip, [pc, #2c]	; 60f00 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x1c8>
         60ed0:	e132000c 	teq	r2, ip
         60ed4:	1a000172 	bne	614a4 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x76c>
         60ed8:	e2842078 	add	r2, r4, #120	; 0x78
         60edc:	e2822b02 	add	r2, r2, #2048	; 0x800
         60ee0:	e3330c01 	teq	r3, #256	; 0x100
         60ee4:	13330c02 	teqne	r3, #512	; 0x200
         60ee8:	1a000142 	bne	613f8 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x6c0>
         60eec:	e5943018 	ldr	r3, [r4, #24]	; fField24
         60ef0:	e3130c01 	tst	r3, #256	; 0x100
         60ef4:	1a000132 	bne	613c4 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x68c>
         60ef8:	ea0000ff 	b	612fc <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x5c4>
         60efc:	6d666563 	stcvsl	5, cr6, [r6, -#396]!
         60f00:	6d667363 	stcvsl	3, cr7, [r6, -#396]!
         60f04:	e59fc060 	ldr	ip, [pc, #60]	; 60f6c <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x234>	; fField60
         60f08:	e152000c 	cmp	r2, ip
         60f0c:	0a000155 	beq	61468 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x730>
         60f10:	ca00002a 	bgt	60fc0 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x288>
         60f14:	e59fc054 	ldr	ip, [pc, #54]	; 60f70 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x238>
         60f18:	e152000c 	cmp	r2, ip
         60f1c:	0a0000d9 	beq	61288 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x550>
         60f20:	ca000015 	bgt	60f7c <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x244>
         60f24:	e59fc048 	ldr	ip, [pc, #48]	; 60f74 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x23c>
         60f28:	e132000c 	teq	r2, ip
         60f2c:	0a0000b9 	beq	61218 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x4e0>
         60f30:	e59fc040 	ldr	ip, [pc, #40]	; 60f78 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x240>	; fField40
         60f34:	e132000c 	teq	r2, ip
         60f38:	1a000159 	bne	614a4 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x76c>
         60f3c:	e3330c01 	teq	r3, #256	; 0x100
         60f40:	13330c02 	teqne	r3, #512	; 0x200
         60f44:	1a0000aa 	bne	611f4 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x4bc>
         60f48:	e1a01005 	mov	r1, r5
         60f4c:	e1a00004 	mov	r0, r4
         60f50:	eb66e34a 	bl	1a19c80 <TClassOneModem::$SetActiveConfigStrs(TCMOModemProfile *)>
         60f54:	e1a00004 	mov	r0, r4
         60f58:	eb66e357 	bl	1a19cbc <TClassOneModem::$SetModemProfile(void)>
         60f5c:	e1b06000 	movs	r6, r0
         60f60:	05b407d8 	ldreq	r0, [r4, #2008]!	; fField2008
         60f64:	0a0000f3 	beq	61338 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x600>
         60f68:	ea000153 	b	614bc <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x784>
         60f6c:	73626176 	cmnvc	r2, #-2147483619	; 0x8000001d
         60f70:	6d737064 	ldcvsl	0, cr7, [r3, -#400]!
         60f74:	6d707265 	lfmvs	f7, 2, [r0, -#404]!
         60f78:	6d70726f 	lfmvs	f7, 2, [r0, -#444]!
         60f7c:	e59fc034 	ldr	ip, [pc, #34]	; 60fb8 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x280>
         60f80:	e132000c 	teq	r2, ip
         60f84:	0a00005f 	beq	61108 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3d0>
         60f88:	e59fc02c 	ldr	ip, [pc, #2c]	; 60fbc <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x284>
         60f8c:	e132000c 	teq	r2, ip
         60f90:	1a000143 	bne	614a4 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x76c>
         60f94:	e3330c01 	teq	r3, #256	; 0x100
         60f98:	13330c02 	teqne	r3, #512	; 0x200
         60f9c:	1a000146 	bne	614bc <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x784>
         60fa0:	e1a00004 	mov	r0, r4
         60fa4:	eb66ca84 	bl	1a139bc <TClassOneModem::$InitPhoneNumberInfo(void)>
         60fa8:	e59408fc 	ldr	r0, [r4, #2300]	; fField2300
         60fac:	e3300000 	teq	r0, #0	; 0x0
         60fb0:	158475b4 	strne	r7, [r4, #1460]	; fField1460
         60fb4:	ea00003b 	b	610a8 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x370>
         60fb8:	6d76736f 	ldcvsl	3, cr7, [r6, -#444]!
         60fbc:	6f757467 	swivs	0x00757467
         60fc0:	e59fc050 	ldr	ip, [pc, #50]	; 61018 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x2e0>
         60fc4:	e132000c 	teq	r2, ip
         60fc8:	0a000031 	beq	61094 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x35c>
         60fcc:	e59fc048 	ldr	ip, [pc, #48]	; 6101c <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x2e4>
         60fd0:	e132000c 	teq	r2, ip
         60fd4:	0a000127 	beq	61478 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x740>
         60fd8:	e59fc040 	ldr	ip, [pc, #40]	; 61020 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x2e8>	; fField40
         60fdc:	e132000c 	teq	r2, ip
         60fe0:	0a000010 	beq	61028 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x2f0>
         60fe4:	e59fc038 	ldr	ip, [pc, #38]	; 61024 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x2ec>
         60fe8:	e132000c 	teq	r2, ip
         60fec:	1a00012c 	bne	614a4 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x76c>
         60ff0:	e3330c01 	teq	r3, #256	; 0x100
         60ff4:	13330c02 	teqne	r3, #512	; 0x200
         60ff8:	1a00012f 	bne	614bc <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x784>
         60ffc:	e28400dc 	add	r0, r4, #220	; 0xdc
         61000:	e2800b02 	add	r0, r0, #2048	; 0x800
         61004:	e1a01005 	mov	r1, r5
         61008:	eb6d5af0 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         6100c:	e1a00004 	mov	r0, r4
         61010:	e3a0101b 	mov	r1, #27	; 0x1b
         61014:	ea00002b 	b	610c8 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x390>
         61018:	73646774 	cmnvc	r4, #30408704	; 0x1d00000
         6101c:	73647363 	cmnvc	r4, #-1946157055	; 0x8c000001
         61020:	74617073 	strvcbt	r7, [r1], -#115
         61024:	74617370 	strvcbt	r7, [r1], -#880
         61028:	e28400cc 	add	r0, r4, #204	; 0xcc
         6102c:	e2800b02 	add	r0, r0, #2048	; 0x800
         61030:	e3330c01 	teq	r3, #256	; 0x100
         61034:	13330c02 	teqne	r3, #512	; 0x200
         61038:	1a000009 	bne	61064 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x32c>
         6103c:	e1a01005 	mov	r1, r5
         61040:	eb6d5ae2 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         61044:	e5d408d8 	ldrb	r0, [r4, #2264]	; fField2264
         61048:	e3300000 	teq	r0, #0	; 0x0
         6104c:	15d408d9 	ldrneb	r0, [r4, #2265]	; fField2265
         61050:	13300000 	teqne	r0, #0	; 0x0
         61054:	03a00000 	moveq	r0, #0	; 0x0
         61058:	13a00001 	movne	r0, #1	; 0x1
         6105c:	e5c40810 	strb	r0, [r4, #2064]	; fField2064
         61060:	ea000113 	b	614b4 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x77c>
         61064:	e3330c03 	teq	r3, #768	; 0x300
         61068:	1a000084 	bne	61280 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x548>
         6106c:	e24dd014 	sub	sp, sp, #20	; 0x14
         61070:	e1a0000d 	mov	r0, sp
         61074:	eb6d6f68 	bl	1bbce1c <TCMOModemConnectType::$__ct(void)>
         61078:	e1a0100d 	mov	r1, sp
         6107c:	ea000044 	b	61194 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x45c>
         61080:	e3330c01 	teq	r3, #256	; 0x100
         61084:	13330c02 	teqne	r3, #512	; 0x200
         61088:	03a0601c 	moveq	r6, #28	; 0x1c
         6108c:	0a000108 	beq	614b4 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x77c>
         61090:	ea000109 	b	614bc <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x784>
         61094:	e3330c01 	teq	r3, #256	; 0x100
         61098:	13330c02 	teqne	r3, #512	; 0x200
         6109c:	1a000106 	bne	614bc <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x784>
         610a0:	e1a00004 	mov	r0, r4
         610a4:	eb66ca44 	bl	1a139bc <TClassOneModem::$InitPhoneNumberInfo(void)>
         610a8:	e1a00004 	mov	r0, r4
         610ac:	e3a01003 	mov	r1, #3	; 0x3
         610b0:	ea000004 	b	610c8 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x390>
         610b4:	e3330c01 	teq	r3, #256	; 0x100
         610b8:	13330c02 	teqne	r3, #512	; 0x200
         610bc:	1a0000fe 	bne	614bc <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x784>
         610c0:	e1a00004 	mov	r0, r4
         610c4:	e3a0101d 	mov	r1, #29	; 0x1d
         610c8:	eb672522 	bl	1a2a558 <TClassOneModem::$ProcessTAPICommand(unsigned long)>
         610cc:	e1a06000 	mov	r6, r0
         610d0:	ea0000f7 	b	614b4 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x77c>
         610d4:	e3330c01 	teq	r3, #256	; 0x100
         610d8:	13330c02 	teqne	r3, #512	; 0x200
         610dc:	05b5000c 	ldreq	r0, [r5, #12]!	; fField12
         610e0:	05a407b0 	streq	r0, [r4, #1968]!	; fField1968
         610e4:	0a0000f2 	beq	614b4 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x77c>
         610e8:	e3330c03 	teq	r3, #768	; 0x300
         610ec:	05a5700c 	streq	r7, [r5, #12]!	; fField12
         610f0:	0a0000ef 	beq	614b4 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x77c>
         610f4:	e5940018 	ldr	r0, [r4, #24]	; fField24
         610f8:	e3100002 	tst	r0, #2	; 0x2
         610fc:	05b407b0 	ldreq	r0, [r4, #1968]!	; fField1968
         61100:	15b407b4 	ldrne	r0, [r4, #1972]!	; fField1972
         61104:	ea00006d 	b	612c0 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x588>
         61108:	e3330c01 	teq	r3, #256	; 0x100
         6110c:	13330c02 	teqne	r3, #512	; 0x200
         61110:	0a0000e9 	beq	614bc <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x784>
         61114:	e3330c03 	teq	r3, #768	; 0x300
         61118:	12841018 	addne	r1, r4, #24	; 0x18
         6111c:	12811b02 	addne	r1, r1, #2048	; 0x800
         61120:	1a0000bf 	bne	61424 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x6ec>
         61124:	e24dd010 	sub	sp, sp, #16	; 0x10
         61128:	e1a0000d 	mov	r0, sp
         6112c:	eb6d6f3d 	bl	1bbce28 <TCMOModemVoiceSupport::$__ct(void)>
         61130:	e1a0100d 	mov	r1, sp
         61134:	ea00005c 	b	612ac <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x574>
         61138:	e3330c01 	teq	r3, #256	; 0x100
         6113c:	13330c02 	teqne	r3, #512	; 0x200
         61140:	0a0000dd 	beq	614bc <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x784>
         61144:	e3330c03 	teq	r3, #768	; 0x300
         61148:	1a000004 	bne	61160 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x428>
         6114c:	e24dd010 	sub	sp, sp, #16	; 0x10
         61150:	e1a0000d 	mov	r0, sp
         61154:	eb6e904c 	bl	1c0528c <TCMOHandsetManagement::$__ct(void)>
         61158:	e1a0100d 	mov	r1, sp
         6115c:	ea000052 	b	612ac <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x574>
         61160:	e5d40824 	ldrb	r0, [r4, #2084]	; fField2084
         61164:	e3300000 	teq	r0, #0	; 0x0
         61168:	13a00000 	movne	r0, #0	; 0x0
         6116c:	03a00001 	moveq	r0, #1	; 0x1
         61170:	e5c5000c 	strb	r0, [r5, #12]	; fField12
         61174:	ea0000ce 	b	614b4 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x77c>
         61178:	e3330c03 	teq	r3, #768	; 0x300
         6117c:	11a01007 	movne	r1, r7
         61180:	1a0000a7 	bne	61424 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x6ec>
         61184:	e24dd014 	sub	sp, sp, #20	; 0x14
         61188:	e1a0000d 	mov	r0, sp
         6118c:	eb6d6f22 	bl	1bbce1c <TCMOModemConnectType::$__ct(void)>
         61190:	e1a0100d 	mov	r1, sp
         61194:	e1a00005 	mov	r0, r5
         61198:	eb6d5a8c 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         6119c:	e28dd014 	add	sp, sp, #20	; 0x14
         611a0:	ea0000c3 	b	614b4 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x77c>
         611a4:	e2840fee 	add	r0, r4, #952	; 0x3b8
         611a8:	e2800b01 	add	r0, r0, #1024	; 0x400
         611ac:	e3330c01 	teq	r3, #256	; 0x100
         611b0:	13330c02 	teqne	r3, #512	; 0x200
         611b4:	1a000004 	bne	611cc <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x494>
         611b8:	e1a01005 	mov	r1, r5
         611bc:	eb6d5a83 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         611c0:	e1a00004 	mov	r0, r4
         611c4:	eb66eb04 	bl	1a1bddc <TClassOneModem::$UpdateDialOptionsStr(void)>
         611c8:	ea0000b9 	b	614b4 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x77c>
         611cc:	e3330c03 	teq	r3, #768	; 0x300
         611d0:	1a00002a 	bne	61280 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x548>
         611d4:	e24dd020 	sub	sp, sp, #32	; 0x20
         611d8:	e1a0000d 	mov	r0, sp
         611dc:	eb6d6afc 	bl	1bbbdd4 <TCMOModemDialing::$__ct(void)>
         611e0:	e1a0100d 	mov	r1, sp
         611e4:	e1a00005 	mov	r0, r5
         611e8:	eb6d5a78 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         611ec:	e28dd020 	add	sp, sp, #32	; 0x20
         611f0:	ea0000af 	b	614b4 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x77c>
         611f4:	e3330c03 	teq	r3, #768	; 0x300
         611f8:	15b417d8 	ldrne	r1, [r4, #2008]!	; fField2008
         611fc:	1a000088 	bne	61424 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x6ec>
         61200:	e24dd028 	sub	sp, sp, #40	; 0x28
         61204:	e1a0000d 	mov	r0, sp
         61208:	e3a01006 	mov	r1, #6	; 0x6
         6120c:	eb6d6af1 	bl	1bbbdd8 <TCMOModemProfile::$__ct(unsigned long)>
         61210:	e1a0100d 	mov	r1, sp
         61214:	ea000050 	b	6135c <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x624>
         61218:	e2840ff7 	add	r0, r4, #988	; 0x3dc
         6121c:	e2800b01 	add	r0, r0, #1024	; 0x400
         61220:	e3330c01 	teq	r3, #256	; 0x100
         61224:	13330c02 	teqne	r3, #512	; 0x200
         61228:	1a00000d 	bne	61264 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x52c>
         6122c:	e1a01005 	mov	r1, r5
         61230:	eb6d5a66 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         61234:	e1a00004 	mov	r0, r4
         61238:	eb66e291 	bl	1a19c84 <TClassOneModem::$SetCDOption(void)>
         6123c:	e24dd024 	sub	sp, sp, #36	; 0x24
         61240:	e1a0000d 	mov	r0, sp
         61244:	eb673537 	bl	1a2e728 <TCMOModemPrefs_Ver_1::$__ct(void)>
         61248:	e5b50004 	ldr	r0, [r5, #4]!	; fField4
         6124c:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         61250:	e1300001 	teq	r0, r1
         61254:	03a00001 	moveq	r0, #1	; 0x1
         61258:	05c40800 	streqb	r0, [r4, #2048]	; fField2048
         6125c:	e28dd024 	add	sp, sp, #36	; 0x24
         61260:	ea000093 	b	614b4 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x77c>
         61264:	e3330c03 	teq	r3, #768	; 0x300
         61268:	1a000004 	bne	61280 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x548>
         6126c:	e24dd028 	sub	sp, sp, #40	; 0x28
         61270:	e1a0000d 	mov	r0, sp
         61274:	eb6d6ac5 	bl	1bbbd90 <TCMOModemPrefs::$__ct(void)>
         61278:	e1a0100d 	mov	r1, sp
         6127c:	ea000036 	b	6135c <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x624>
         61280:	e1a01000 	mov	r1, r0
         61284:	ea000066 	b	61424 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x6ec>
         61288:	e3330c01 	teq	r3, #256	; 0x100
         6128c:	13330c02 	teqne	r3, #512	; 0x200
         61290:	0a000089 	beq	614bc <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x784>
         61294:	e3330c03 	teq	r3, #768	; 0x300
         61298:	1a000007 	bne	612bc <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x584>
         6129c:	e24dd010 	sub	sp, sp, #16	; 0x10
         612a0:	e1a0000d 	mov	r0, sp
         612a4:	eb6e8ff9 	bl	1c05290 <TCMOModemConnectSpeed::$__ct(void)>
         612a8:	e1a0100d 	mov	r1, sp
         612ac:	e1a00005 	mov	r0, r5
         612b0:	eb6d5a46 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         612b4:	e28dd010 	add	sp, sp, #16	; 0x10
         612b8:	ea00007d 	b	614b4 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x77c>
         612bc:	e5b40788 	ldr	r0, [r4, #1928]!	; fField1928
         612c0:	e5a5000c 	str	r0, [r5, #12]!	; fField12
         612c4:	ea00007a 	b	614b4 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x77c>
         612c8:	e3330c01 	teq	r3, #256	; 0x100
         612cc:	13330c02 	teqne	r3, #512	; 0x200
         612d0:	0a000017 	beq	61334 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x5fc>
         612d4:	e3330c03 	teq	r3, #768	; 0x300
         612d8:	1a000004 	bne	612f0 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x5b8>
         612dc:	e24dd028 	sub	sp, sp, #40	; 0x28
         612e0:	e1a0000d 	mov	r0, sp
         612e4:	eb6e8fed 	bl	1c052a0 <TCMOModemFaxCapabilities::$__ct(void)>
         612e8:	e1a0100d 	mov	r1, sp
         612ec:	ea00001a 	b	6135c <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x624>
         612f0:	e5942018 	ldr	r2, [r4, #24]	; fField24
         612f4:	e3120c01 	tst	r2, #256	; 0x100
         612f8:	1a000001 	bne	61304 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x5cc>
         612fc:	e5a51010 	str	r1, [r5, #16]!	; fField16
         61300:	ea00006d 	b	614bc <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x784>
         61304:	e3120002 	tst	r2, #2	; 0x2
         61308:	02021040 	andeq	r1, r2, #64	; 0x40
         6130c:	03310000 	teqeq	r1, #0	; 0x0
         61310:	0a000001 	beq	6131c <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x5e4>
         61314:	e5a50010 	str	r0, [r5, #16]!	; fField16
         61318:	ea000067 	b	614bc <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x784>
         6131c:	e1a00004 	mov	r0, r4
         61320:	eb670bc3 	bl	1a24234 <TClassOneModem::$C1GetCapStart(void)>
         61324:	ea00004d 	b	61460 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x728>
         61328:	e3330c01 	teq	r3, #256	; 0x100
         6132c:	13330c02 	teqne	r3, #512	; 0x200
         61330:	1a000002 	bne	61340 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x608>
         61334:	e1a0000e 	mov	r0, lr
         61338:	e1a01005 	mov	r1, r5
         6133c:	ea000039 	b	61428 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x6f0>
         61340:	e3330c03 	teq	r3, #768	; 0x300
         61344:	11a0100e 	movne	r1, lr
         61348:	1a000035 	bne	61424 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x6ec>
         6134c:	e24dd028 	sub	sp, sp, #40	; 0x28
         61350:	e1a0000d 	mov	r0, sp
         61354:	eb66f6ed 	bl	1a1ef10 <TCMOModemFaxEnabledCaps::$__ct(void)>
         61358:	e1a0100d 	mov	r1, sp
         6135c:	e1a00005 	mov	r0, r5
         61360:	eb6d5a1a 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         61364:	e28dd028 	add	sp, sp, #40	; 0x28
         61368:	ea000051 	b	614b4 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x77c>
         6136c:	e3330c01 	teq	r3, #256	; 0x100
         61370:	13330c02 	teqne	r3, #512	; 0x200
         61374:	0a000050 	beq	614bc <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x784>
         61378:	e3330c03 	teq	r3, #768	; 0x300
         6137c:	1a000004 	bne	61394 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x65c>
         61380:	e24dd018 	sub	sp, sp, #24	; 0x18
         61384:	e1a0000d 	mov	r0, sp
         61388:	eb66f6e1 	bl	1a1ef14 <TCMOModemFaxClassesSupported::$__ct(void)>
         6138c:	e1a0100d 	mov	r1, sp
         61390:	ea00001e 	b	61410 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x6d8>
         61394:	e5942018 	ldr	r2, [r4, #24]	; fField24
         61398:	e3120c01 	tst	r2, #256	; 0x100
         6139c:	0affffd6 	beq	612fc <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x5c4>
         613a0:	e3120002 	tst	r2, #2	; 0x2
         613a4:	02021040 	andeq	r1, r2, #64	; 0x40
         613a8:	03310000 	teqeq	r1, #0	; 0x0
         613ac:	1affffd8 	bne	61314 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x5dc>
         613b0:	e5848b90 	str	r8, [r4, #2960]	; fField2960
         613b4:	e1a00004 	mov	r0, r4
         613b8:	e3a01000 	mov	r1, #0	; 0x0
         613bc:	eb66f2cc 	bl	1a1def4 <TClassOneModem::$GetSrvcClsSupported(long)>
         613c0:	ea000026 	b	61460 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x728>
         613c4:	e3130002 	tst	r3, #2	; 0x2
         613c8:	02031040 	andeq	r1, r3, #64	; 0x40
         613cc:	03310000 	teqeq	r1, #0	; 0x0
         613d0:	1affffcf 	bne	61314 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x5dc>
         613d4:	e1a00002 	mov	r0, r2
         613d8:	e1a01005 	mov	r1, r5
         613dc:	eb6d59fb 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         613e0:	e3a00003 	mov	r0, #3	; 0x3
         613e4:	e5840b90 	str	r0, [r4, #2960]	; fField2960
         613e8:	e1a00004 	mov	r0, r4
         613ec:	e3a01000 	mov	r1, #0	; 0x0
         613f0:	eb66f6c2 	bl	1a1ef00 <TClassOneModem::$SetServiceClass(long)>
         613f4:	ea000019 	b	61460 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x728>
         613f8:	e3330c03 	teq	r3, #768	; 0x300
         613fc:	1a000007 	bne	61420 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x6e8>
         61400:	e24dd018 	sub	sp, sp, #24	; 0x18
         61404:	e1a0000d 	mov	r0, sp
         61408:	eb66f6be 	bl	1a1ef08 <TCMOModemFaxClass::$__ct(void)>
         6140c:	e1a0100d 	mov	r1, sp
         61410:	e1a00005 	mov	r0, r5
         61414:	eb6d59ed 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         61418:	e28dd018 	add	sp, sp, #24	; 0x18
         6141c:	ea000024 	b	614b4 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x77c>
         61420:	e1a01002 	mov	r1, r2
         61424:	e1a00005 	mov	r0, r5
         61428:	eb6d59e8 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         6142c:	ea000020 	b	614b4 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x77c>
         61430:	e5942018 	ldr	r2, [r4, #24]	; fField24
         61434:	e3120c01 	tst	r2, #256	; 0x100
         61438:	0affffaf 	beq	612fc <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x5c4>
         6143c:	e3120002 	tst	r2, #2	; 0x2
         61440:	02021040 	andeq	r1, r2, #64	; 0x40
         61444:	03310000 	teqeq	r1, #0	; 0x0
         61448:	1affffb1 	bne	61314 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x5dc>
         6144c:	e3a00005 	mov	r0, #5	; 0x5
         61450:	e5840b90 	str	r0, [r4, #2960]	; fField2960
         61454:	e1a00004 	mov	r0, r4
         61458:	e3a01000 	mov	r1, #0	; 0x0
         6145c:	eb66ee75 	bl	1a1ce38 <TClassOneModem::$C1GetFaxCapabilities(long)>
         61460:	e3a06001 	mov	r6, #1	; 0x1
         61464:	ea000012 	b	614b4 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x77c>
         61468:	e59407b4 	ldr	r0, [r4, #1972]	; fField1972
         6146c:	e3300002 	teq	r0, #2	; 0x2
         61470:	1a000007 	bne	61494 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x75c>
         61474:	ea000002 	b	61484 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x74c>
         61478:	e59407b4 	ldr	r0, [r4, #1972]	; fField1972
         6147c:	e3300002 	teq	r0, #2	; 0x2
         61480:	1a000003 	bne	61494 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x75c>
         61484:	e1a01005 	mov	r1, r5
         61488:	e1a00004 	mov	r0, r4
         6148c:	eb67241e 	bl	1a2a50c <TMNP::$ProcessOptionStart(TOption *, unsigned long, unsigned long)>
         61490:	ea000007 	b	614b4 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x77c>
         61494:	e1a01005 	mov	r1, r5
         61498:	e1a00004 	mov	r0, r4
         6149c:	eb66faee 	bl	1a2005c <TFramedAsyncSerTool::$ProcessOptionStart(TOption *, unsigned long, unsigned long)>
         614a0:	ea000003 	b	614b4 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x77c>
         614a4:	e1a01005 	mov	r1, r5
         614a8:	e1a00004 	mov	r0, r4
         614ac:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         614b0:	ea672415 	b	1a2a50c <TMNP::$ProcessOptionStart(TOption *, unsigned long, unsigned long)>
         614b4:	e1a00006 	mov	r0, r6
         614b8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         614bc:	e3e06000 	mvn	r6, #0	; 0x0
         614c0:	eafffffb 	b	614b4 <TClassOneModem::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x77c>
    */
}

/**
 * Symbol: TClassOneModem::ProcessTAPICommand(unsigned long)
 * Address: 000614c4
 */
TClassOneModem::ProcessTAPICommand(unsigned long) {
    /*
         614c4:	e1a0c00d 	mov	ip, sp
         614c8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         614cc:	e24cb004 	sub	fp, ip, #4	; 0x4
         614d0:	e1a04000 	mov	r4, r0
         614d4:	e1a05001 	mov	r5, r1
         614d8:	e5d008d8 	ldrb	r0, [r0, #2264]	; fField2264
         614dc:	e3300000 	teq	r0, #0	; 0x0
         614e0:	15d408d9 	ldrneb	r0, [r4, #2265]	; fField2265
         614e4:	13300000 	teqne	r0, #0	; 0x0
         614e8:	15940018 	ldrne	r0, [r4, #24]	; fField24
         614ec:	12000002 	andne	r0, r0, #2	; 0x2
         614f0:	13300000 	teqne	r0, #0	; 0x0
         614f4:	0a000024 	beq	6158c <TClassOneModem::ProcessTAPICommand(unsigned long)+0xc8>
         614f8:	e5d408f0 	ldrb	r0, [r4, #2288]	; fField2288
         614fc:	e3300000 	teq	r0, #0	; 0x0
         61500:	1a000021 	bne	6158c <TClassOneModem::ProcessTAPICommand(unsigned long)+0xc8>
         61504:	e1a00004 	mov	r0, r4
         61508:	eb67071f 	bl	1a2318c <TClassOneModem::$AbortCommand(void)>
         6150c:	e5940304 	ldr	r0, [r4, #772]	; fField772
         61510:	e3300000 	teq	r0, #0	; 0x0
         61514:	0a000012 	beq	61564 <TClassOneModem::ProcessTAPICommand(unsigned long)+0xa0>
         61518:	e24dd010 	sub	sp, sp, #16	; 0x10
         6151c:	e1a0000d 	mov	r0, sp
         61520:	eb673476 	bl	1a2e700 <TCMOPCMCIAModemSound::$__ct(void)>
         61524:	e5d408e8 	ldrb	r0, [r4, #2280]	; fField2280
         61528:	e3300000 	teq	r0, #0	; 0x0
         6152c:	0a000005 	beq	61548 <TClassOneModem::ProcessTAPICommand(unsigned long)+0x84>
         61530:	e335001c 	teq	r5, #28	; 0x1c
         61534:	13350003 	teqne	r5, #3	; 0x3
         61538:	1335001b 	teqne	r5, #27	; 0x1b
         6153c:	01a00004 	moveq	r0, r4
         61540:	03a01001 	moveq	r1, #1	; 0x1
         61544:	0a000001 	beq	61550 <TClassOneModem::ProcessTAPICommand(unsigned long)+0x8c>
         61548:	e1a00004 	mov	r0, r4
         6154c:	e3a01000 	mov	r1, #0	; 0x0
         61550:	eb673472 	bl	1a2e720 <TClassOneModem::$SetSpeakerVolume(unsigned char)>
         61554:	e1a0100d 	mov	r1, sp
         61558:	e5940304 	ldr	r0, [r4, #772]	; fField772
         6155c:	eb0c8dca 	bl	384c8c <TSerialChip::ProcessOption(TOption *)>
         61560:	e28dd010 	add	sp, sp, #16	; 0x10
         61564:	e1a01005 	mov	r1, r5
         61568:	e1a00004 	mov	r0, r4
         6156c:	eb66a816 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         61570:	e3300000 	teq	r0, #0	; 0x0
         61574:	1a000004 	bne	6158c <TClassOneModem::ProcessTAPICommand(unsigned long)+0xc8>
         61578:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         6157c:	e3800301 	orr	r0, r0, #67108864	; 0x4000000
         61580:	e5a405b0 	str	r0, [r4, #1456]!	; fField1456
         61584:	e3a00001 	mov	r0, #1	; 0x1
         61588:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         6158c:	e3e00000 	mvn	r0, #0	; 0x0
         61590:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TClassOneModem::TAPICommandComplete(void)
 * Address: 00061594
 */
TClassOneModem::TAPICommandComplete(void) {
    /*
         61594:	e1a0c00d 	mov	ip, sp
         61598:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6159c:	e24cb004 	sub	fp, ip, #4	; 0x4
         615a0:	e1a04000 	mov	r4, r0
         615a4:	e3a00000 	mov	r0, #0	; 0x0
         615a8:	e59415c4 	ldr	r1, [r4, #1476]	; fField1476
         615ac:	e3310000 	teq	r1, #0	; 0x0
         615b0:	059415f4 	ldreq	r1, [r4, #1524]	; fField1524
         615b4:	01a00004 	moveq	r0, r4
         615b8:	0b66b044 	bleq	1a0d6d0 <TClassOneModem::$CheckForErrorResult(unsigned long)>
         615bc:	e59415b0 	ldr	r1, [r4, #1456]	; fField1456
         615c0:	e3110301 	tst	r1, #67108864	; 0x4000000
         615c4:	0a000034 	beq	6169c <TClassOneModem::TAPICommandComplete(void)+0x108>
         615c8:	e3c11301 	bic	r1, r1, #67108864	; 0x4000000
         615cc:	e58415b0 	str	r1, [r4, #1456]	; fField1456
         615d0:	e59fe04c 	ldr	lr, [pc, #4c]	; 61624 <TClassOneModem::TAPICommandComplete(void)+0x90>	; fField4
         615d4:	e3300000 	teq	r0, #0	; 0x0
         615d8:	1a000013 	bne	6162c <TClassOneModem::TAPICommandComplete(void)+0x98>
         615dc:	e5942188 	ldr	r2, [r4, #392]	; fField392
         615e0:	e5922000 	ldr	r2, [r2]
         615e4:	e132000e 	teq	r2, lr
         615e8:	159fc038 	ldrne	ip, [pc, #38]	; 61628 <TClassOneModem::TAPICommandComplete(void)+0x94>
         615ec:	1132000c 	teqne	r2, ip
         615f0:	1a00000d 	bne	6162c <TClassOneModem::TAPICommandComplete(void)+0x98>
         615f4:	e5942904 	ldr	r2, [r4, #2308]	; fField2308
         615f8:	e5943900 	ldr	r3, [r4, #2304]	; fField2304
         615fc:	e1320003 	teq	r2, r3
         61600:	0a000009 	beq	6162c <TClassOneModem::TAPICommandComplete(void)+0x98>
         61604:	e1a00004 	mov	r0, r4
         61608:	e3a01003 	mov	r1, #3	; 0x3
         6160c:	eb6723d1 	bl	1a2a558 <TClassOneModem::$ProcessTAPICommand(unsigned long)>
         61610:	e3300001 	teq	r0, #1	; 0x1
         61614:	11a00004 	movne	r0, r4
         61618:	13e01000 	mvnne	r1, #0	; 0x0
         6161c:	1a00001a 	bne	6168c <TClassOneModem::TAPICommandComplete(void)+0xf8>
         61620:	ea000029 	b	616cc <TClassOneModem::TAPICommandComplete(void)+0x138>
         61624:	6f757467 	swivs	0x00757467
         61628:	73646774 	cmnvc	r4, #30408704	; 0x1d00000
         6162c:	e5942188 	ldr	r2, [r4, #392]	; fField392
         61630:	e5922000 	ldr	r2, [r2]
         61634:	e132000e 	teq	r2, lr
         61638:	1a00000c 	bne	61670 <TClassOneModem::TAPICommandComplete(void)+0xdc>
         6163c:	e3110402 	tst	r1, #33554432	; 0x2000000
         61640:	13c11402 	bicne	r1, r1, #33554432	; 0x2000000
         61644:	1a000008 	bne	6166c <TClassOneModem::TAPICommandComplete(void)+0xd8>
         61648:	e3300000 	teq	r0, #0	; 0x0
         6164c:	1a000007 	bne	61670 <TClassOneModem::TAPICommandComplete(void)+0xdc>
         61650:	e1a00004 	mov	r0, r4
         61654:	e3a0101e 	mov	r1, #30	; 0x1e
         61658:	eb6723be 	bl	1a2a558 <TClassOneModem::$ProcessTAPICommand(unsigned long)>
         6165c:	e3300001 	teq	r0, #1	; 0x1
         61660:	1a000002 	bne	61670 <TClassOneModem::TAPICommandComplete(void)+0xdc>
         61664:	e59415b0 	ldr	r1, [r4, #1456]	; fField1456
         61668:	e3811402 	orr	r1, r1, #33554432	; 0x2000000
         6166c:	e58415b0 	str	r1, [r4, #1456]	; fField1456
         61670:	e59415b0 	ldr	r1, [r4, #1456]	; fField1456
         61674:	e3110402 	tst	r1, #33554432	; 0x2000000
         61678:	1a000013 	bne	616cc <TClassOneModem::TAPICommandComplete(void)+0x138>
         6167c:	e3300000 	teq	r0, #0	; 0x0
         61680:	13e01000 	mvnne	r1, #0	; 0x0
         61684:	03a01000 	moveq	r1, #0	; 0x0
         61688:	e1a00004 	mov	r0, r4
         6168c:	e5942000 	ldr	r2, [r4]
         61690:	e1a0e00f 	mov	lr, pc
         61694:	e282f0a8 	add	pc, r2, #168	; 0xa8
         61698:	ea00000b 	b	616cc <TClassOneModem::TAPICommandComplete(void)+0x138>
         6169c:	e3300000 	teq	r0, #0	; 0x0
         616a0:	1a000009 	bne	616cc <TClassOneModem::TAPICommandComplete(void)+0x138>
         616a4:	e59405f4 	ldr	r0, [r4, #1524]	; fField1524
         616a8:	e3300002 	teq	r0, #2	; 0x2
         616ac:	03a00001 	moveq	r0, #1	; 0x1
         616b0:	0a000002 	beq	616c0 <TClassOneModem::TAPICommandComplete(void)+0x12c>
         616b4:	e3300007 	teq	r0, #7	; 0x7
         616b8:	1a000001 	bne	616c4 <TClassOneModem::TAPICommandComplete(void)+0x130>
         616bc:	e3a0000b 	mov	r0, #11	; 0xb
         616c0:	e58408ec 	str	r0, [r4, #2284]	; fField2284
         616c4:	e1a00004 	mov	r0, r4
         616c8:	eb671f74 	bl	1a294a0 <TClassOneModem::$PostTapiEvent(void)>
         616cc:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         616d0:	e3100301 	tst	r0, #67108864	; 0x4000000
         616d4:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         616d8:	e1a00004 	mov	r0, r4
         616dc:	e3a02000 	mov	r2, #0	; 0x0
         616e0:	e3a01000 	mov	r1, #0	; 0x0
         616e4:	eb6d7e68 	bl	1bc108c <TCommTool::$ShouldAbort(unsigned long, long)>
         616e8:	e3300000 	teq	r0, #0	; 0x0
         616ec:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         616f0:	e3a00000 	mov	r0, #0	; 0x0
         616f4:	e584078c 	str	r0, [r4, #1932]	; fField1932
         616f8:	e1a00004 	mov	r0, r4
         616fc:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         61700:	ea66bc5d 	b	1a1087c <TClassOneModem::$GetCommandResult(void)>
    */
}

/**
 * Symbol: TClassOneModem::C1IdModemComplete(long)
 * Address: 00061704
 */
TClassOneModem::C1IdModemComplete(long) {
    /*
         61704:	e1a0c00d 	mov	ip, sp
         61708:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         6170c:	e24cb004 	sub	fp, ip, #4	; 0x4
         61710:	e1a04000 	mov	r4, r0
         61714:	e1b05001 	movs	r5, r1
         61718:	e59005b0 	ldr	r0, [r0, #1456]	; fField1456
         6171c:	e3c00b01 	bic	r0, r0, #1024	; 0x400
         61720:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         61724:	1a000025 	bne	617c0 <TClassOneModem::C1IdModemComplete(long)+0xbc>
         61728:	e5d407f0 	ldrb	r0, [r4, #2032]	; fField2032
         6172c:	e3300000 	teq	r0, #0	; 0x0
         61730:	1a000024 	bne	617c8 <TClassOneModem::C1IdModemComplete(long)+0xc4>
         61734:	e24dd014 	sub	sp, sp, #20	; 0x14
         61738:	e1a0000d 	mov	r0, sp
         6173c:	eb6d69a3 	bl	1bbbdd0 <TCMOFramingParms::$__ct(void)>
         61740:	e3a00000 	mov	r0, #0	; 0x0
         61744:	e5cd000e 	strb	r0, [sp, #14]
         61748:	e5cd000f 	strb	r0, [sp, #15]
         6174c:	e5cd0010 	strb	r0, [sp, #16]	; fField16
         61750:	e3a00010 	mov	r0, #16	; 0x10
         61754:	e5cd000c 	strb	r0, [sp, #12]	; fField12
         61758:	e3a00003 	mov	r0, #3	; 0x3
         6175c:	e5cd000d 	strb	r0, [sp, #13]
         61760:	e1a0100d 	mov	r1, sp
         61764:	e1a00004 	mov	r0, r4
         61768:	eb66e14d 	bl	1a19ca4 <TFramedAsyncSerTool::$SetFramingCtl(TCMOFramingParms *)>
         6176c:	e1a00004 	mov	r0, r4
         61770:	eb66e143 	bl	1a19c84 <TClassOneModem::$SetCDOption(void)>
         61774:	e5941184 	ldr	r1, [r4, #388]	; fField388
         61778:	e3310000 	teq	r1, #0	; 0x0
         6177c:	0a00000c 	beq	617b4 <TClassOneModem::C1IdModemComplete(long)+0xb0>
         61780:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         61784:	e1a0000d 	mov	r0, sp
         61788:	eb6d50da 	bl	1bb5af8 <TOptionIterator::$__ct(TOptionArray *)>
         6178c:	e1a0000d 	mov	r0, sp
         61790:	e59f1024 	ldr	r1, [pc, #24]	; 617bc <TClassOneModem::C1IdModemComplete(long)+0xb8>	; fField24
         61794:	eb6d5d1e 	bl	1bb8c14 <TOptionIterator::$FindOption(unsigned long)>
         61798:	e3300000 	teq	r0, #0	; 0x0
         6179c:	12841e85 	addne	r1, r4, #2128	; 0x850
         617a0:	1b6d590a 	blne	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         617a4:	e1a0000d 	mov	r0, sp
         617a8:	e3a01000 	mov	r1, #0	; 0x0
         617ac:	eb6d54e2 	bl	1bb6b3c <TOptionIterator::$__dt(void)>
         617b0:	e28dd01c 	add	sp, sp, #28	; 0x1c
         617b4:	e28dd014 	add	sp, sp, #20	; 0x14
         617b8:	ea000002 	b	617c8 <TClassOneModem::C1IdModemComplete(long)+0xc4>
         617bc:	6d666178 	stfvse	f6, [r6, -#480]!
         617c0:	e1a00004 	mov	r0, r4
         617c4:	eb66f5e5 	bl	1a1ef60 <TSerTool::$CleanUp(void)>
         617c8:	e1a01005 	mov	r1, r5
         617cc:	e1a00004 	mov	r0, r4
         617d0:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         617d4:	ea670683 	b	1a231e8 <TCommTool::$BindComplete(long)>
    */
}

/**
 * Symbol: TClassOneModem::C1IdModem(void)
 * Address: 000617d8
 */
TClassOneModem::C1IdModem(void) {
    /*
         617d8:	e59015b0 	ldr	r1, [r0, #1456]	; fField1456
         617dc:	e3110302 	tst	r1, #134217728	; 0x8000000
         617e0:	11a0f00e 	movne	pc, lr
         617e4:	e59015b8 	ldr	r1, [r0, #1464]	; fField1464
         617e8:	e2411002 	sub	r1, r1, #2	; 0x2
         617ec:	e3510012 	cmp	r1, #18	; 0x12
         617f0:	908ff101 	addls	pc, pc, r1, lsl #2
         617f4:	e1a0f00e 	mov	pc, lr
         617f8:	ea000011 	b	61844 <TClassOneModem::C1IdModem(void)+0x6c>
         617fc:	ea000011 	b	61848 <TClassOneModem::C1IdModem(void)+0x70>
         61800:	ea000012 	b	61850 <TClassOneModem::C1IdModem(void)+0x78>
         61804:	ea000012 	b	61854 <TClassOneModem::C1IdModem(void)+0x7c>
         61808:	ea000012 	b	61858 <TClassOneModem::C1IdModem(void)+0x80>
         6180c:	ea000012 	b	6185c <TClassOneModem::C1IdModem(void)+0x84>
         61810:	ea000012 	b	61860 <TClassOneModem::C1IdModem(void)+0x88>
         61814:	ea000012 	b	61864 <TClassOneModem::C1IdModem(void)+0x8c>
         61818:	ea000012 	b	61868 <TClassOneModem::C1IdModem(void)+0x90>
         6181c:	ea000012 	b	6186c <TClassOneModem::C1IdModem(void)+0x94>
         61820:	ea000012 	b	61870 <TClassOneModem::C1IdModem(void)+0x98>
         61824:	ea000012 	b	61874 <TClassOneModem::C1IdModem(void)+0x9c>
         61828:	ea000012 	b	61878 <TClassOneModem::C1IdModem(void)+0xa0>
         6182c:	ea000012 	b	6187c <TClassOneModem::C1IdModem(void)+0xa4>
         61830:	ea000012 	b	61880 <TClassOneModem::C1IdModem(void)+0xa8>
         61834:	ea000012 	b	61884 <TClassOneModem::C1IdModem(void)+0xac>
         61838:	ea000012 	b	61888 <TClassOneModem::C1IdModem(void)+0xb0>
         6183c:	ea000012 	b	6188c <TClassOneModem::C1IdModem(void)+0xb4>
         61840:	ea66ab81 	b	1a0c64c <TClassOneModem::$C1IdCheckForLCS(void)>
         61844:	ea66ab7d 	b	1a0c640 <TClassOneModem::$C1IdBegin(void)>
         61848:	e3a01000 	mov	r1, #0	; 0x0
         6184c:	ea66ab83 	b	1a0c660 <TClassOneModem::$C1IdModemComplete(long)>
         61850:	ea66ab86 	b	1a0c670 <TClassOneModem::$C1IdWakeUp(void)>
         61854:	ea66ab82 	b	1a0c664 <TClassOneModem::$C1IdReset(void)>
         61858:	ea66ab83 	b	1a0c66c <TClassOneModem::$C1IdWait4Reset(void)>
         6185c:	ea66ab79 	b	1a0c648 <TClassOneModem::$C1IdCheck4Response(void)>
         61860:	ea66ab75 	b	1a0c63c <TClassOneModem::$C1IdAreYouThere(void)>
         61864:	ea66ab7b 	b	1a0c658 <TClassOneModem::$C1IdGetModemId(void)>
         61868:	ea66ab79 	b	1a0c654 <TClassOneModem::$C1IdGetIdCmdResponse(void)>
         6186c:	ea66ab6b 	b	1a0c620 <TClassOneModem::$C1IdACLCheckForMNP10(void)>
         61870:	ea66ab6e 	b	1a0c630 <TClassOneModem::$C1IdACLGetMNP10CmdResponse(void)>
         61874:	ea66ab6f 	b	1a0c638 <TClassOneModem::$C1IdACLSetV32bis(void)>
         61878:	ea66ab69 	b	1a0c624 <TClassOneModem::$C1IdACLCheckForV32bis(void)>
         6187c:	ea66ab6a 	b	1a0c62c <TClassOneModem::$C1IdACLCheckV32bisCmdResponse(void)>
         61880:	ea66ab68 	b	1a0c628 <TClassOneModem::$C1IdACLCheckSetAutoModeResponse(void)>
         61884:	ea66ab6e 	b	1a0c644 <TClassOneModem::$C1IdCheck4HCode(void)>
         61888:	ea66ab70 	b	1a0c650 <TClassOneModem::$C1IdGetCheck4HCodeCmdResponse(void)>
         6188c:	ea66ab75 	b	1a0c668 <TClassOneModem::$C1IdSetS0(void)>
    */
}

/**
 * Symbol: TClassOneModem::C1IdBegin(void)
 * Address: 00061890
 */
TClassOneModem::C1IdBegin(void) {
    /*
         61890:	e1a0c00d 	mov	ip, sp
         61894:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         61898:	e24cb004 	sub	fp, ip, #4	; 0x4
         6189c:	e1a04000 	mov	r4, r0
         618a0:	e5d007f0 	ldrb	r0, [r0, #2032]	; fField2032
         618a4:	e3300000 	teq	r0, #0	; 0x0
         618a8:	0a000004 	beq	618c0 <TClassOneModem::C1IdBegin(void)+0x30>
         618ac:	e3a00009 	mov	r0, #9	; 0x9
         618b0:	e5840794 	str	r0, [r4, #1940]	; fField1940
         618b4:	e1a00004 	mov	r0, r4
         618b8:	e3a01000 	mov	r1, #0	; 0x0
         618bc:	ea00000b 	b	618f0 <TClassOneModem::C1IdBegin(void)+0x60>
         618c0:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         618c4:	e3c00802 	bic	r0, r0, #131072	; 0x20000
         618c8:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         618cc:	e3a00004 	mov	r0, #4	; 0x4
         618d0:	e58405b8 	str	r0, [r4, #1464]	; fField1464
         618d4:	e1a00004 	mov	r0, r4
         618d8:	e3a01013 	mov	r1, #19	; 0x13
         618dc:	eb66a73a 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         618e0:	e3300000 	teq	r0, #0	; 0x0
         618e4:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         618e8:	e1a01000 	mov	r1, r0
         618ec:	e1a00004 	mov	r0, r4
         618f0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         618f4:	ea66ab59 	b	1a0c660 <TClassOneModem::$C1IdModemComplete(long)>
    */
}

/**
 * Symbol: TClassOneModem::C1IdWakeUp(void)
 * Address: 000618f8
 */
TClassOneModem::C1IdWakeUp(void) {
    /*
         618f8:	e1a0c00d 	mov	ip, sp
         618fc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         61900:	e24cb004 	sub	fp, ip, #4	; 0x4
         61904:	e1a04000 	mov	r4, r0
         61908:	e59005f4 	ldr	r0, [r0, #1524]	; fField1524
         6190c:	e330003b 	teq	r0, #59	; 0x3b
         61910:	1a000008 	bne	61938 <TClassOneModem::C1IdWakeUp(void)+0x40>
         61914:	e2840f7e 	add	r0, r4, #504	; 0x1f8
         61918:	e2800b01 	add	r0, r0, #1024	; 0x400
         6191c:	e28f1f10 	add	r1, pc, #64	; 0x40
         61920:	e3a02002 	mov	r2, #2	; 0x2
         61924:	eb6d4c48 	bl	1bb4a4c <$memcmp>
         61928:	e3300000 	teq	r0, #0	; 0x0
         6192c:	01a00004 	moveq	r0, r4
         61930:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         61934:	0a66bbd0 	beq	1a1087c <TClassOneModem::$GetCommandResult(void)>
         61938:	e3a00005 	mov	r0, #5	; 0x5
         6193c:	e58405b8 	str	r0, [r4, #1464]	; fField1464
         61940:	e1a00004 	mov	r0, r4
         61944:	e3a01001 	mov	r1, #1	; 0x1
         61948:	eb66a71f 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         6194c:	e3300000 	teq	r0, #0	; 0x0
         61950:	11a01000 	movne	r1, r0
         61954:	11a00004 	movne	r0, r4
         61958:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         6195c:	1a66ab3f 	bne	1a0c660 <TClassOneModem::$C1IdModemComplete(long)>
         61960:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         61964:	41540000 	cmpmi	r4, r0
    */
}

/**
 * Symbol: TClassOneModem::C1IdReset(void)
 * Address: 00061968
 */
TClassOneModem::C1IdReset(void) {
    /*
         61968:	e1a0c00d 	mov	ip, sp
         6196c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         61970:	e24cb004 	sub	fp, ip, #4	; 0x4
         61974:	e1a04000 	mov	r4, r0
         61978:	e59005f4 	ldr	r0, [r0, #1524]	; fField1524
         6197c:	e330003b 	teq	r0, #59	; 0x3b
         61980:	1a000008 	bne	619a8 <TClassOneModem::C1IdReset(void)+0x40>
         61984:	e2840f7e 	add	r0, r4, #504	; 0x1f8
         61988:	e2800b01 	add	r0, r0, #1024	; 0x400
         6198c:	e28f1f22 	add	r1, pc, #136	; 0x88
         61990:	e3a02002 	mov	r2, #2	; 0x2
         61994:	eb6d4c2c 	bl	1bb4a4c <$memcmp>
         61998:	e3300000 	teq	r0, #0	; 0x0
         6199c:	01a00004 	moveq	r0, r4
         619a0:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         619a4:	0a66bbb4 	beq	1a1087c <TClassOneModem::$GetCommandResult(void)>
         619a8:	e5940784 	ldr	r0, [r4, #1924]	; fField1924
         619ac:	e59417d8 	ldr	r1, [r4, #2008]	; fField2008
         619b0:	e5911014 	ldr	r1, [r1, #20]	; fField20
         619b4:	e1300001 	teq	r0, r1
         619b8:	0a000006 	beq	619d8 <TClassOneModem::C1IdReset(void)+0x70>
         619bc:	e3a03008 	mov	r3, #8	; 0x8
         619c0:	e92d0008 	stmdb	sp!, {r3}
         619c4:	e1a00004 	mov	r0, r4
         619c8:	e3a03000 	mov	r3, #0	; 0x0
         619cc:	e3a02000 	mov	r2, #0	; 0x0
         619d0:	eb66dc95 	bl	1a18c2c <TClassOneModem::$ResetSerialDrvr(unsigned long, long, long, long)>
         619d4:	e28dd004 	add	sp, sp, #4	; 0x4
         619d8:	e59405c4 	ldr	r0, [r4, #1476]	; fField1476
         619dc:	e3300000 	teq	r0, #0	; 0x0
         619e0:	059405f4 	ldreq	r0, [r4, #1524]	; fField1524
         619e4:	03300000 	teqeq	r0, #0	; 0x0
         619e8:	e1a00004 	mov	r0, r4
         619ec:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         619f0:	1a66ab1d 	bne	1a0c66c <TClassOneModem::$C1IdWait4Reset(void)>
         619f4:	e3a02f7d 	mov	r2, #500	; 0x1f4
         619f8:	e3a01002 	mov	r1, #2	; 0x2
         619fc:	eb671ea8 	bl	1a294a4 <TClassOneModem::$PostTimer(unsigned long, unsigned long)>
         61a00:	e1b01000 	movs	r1, r0
         61a04:	e3a00006 	mov	r0, #6	; 0x6
         61a08:	e58405b8 	str	r0, [r4, #1464]	; fField1464
         61a0c:	11a00004 	movne	r0, r4
         61a10:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         61a14:	1a66ab11 	bne	1a0c660 <TClassOneModem::$C1IdModemComplete(long)>
         61a18:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         61a1c:	41540000 	cmpmi	r4, r0
    */
}

/**
 * Symbol: TClassOneModem::C1IdWait4Reset(void)
 * Address: 00061a20
 */
TClassOneModem::C1IdWait4Reset(void) {
    /*
         61a20:	e1a0c00d 	mov	ip, sp
         61a24:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         61a28:	e24cb004 	sub	fp, ip, #4	; 0x4
         61a2c:	e1a04000 	mov	r4, r0
         61a30:	e3a00007 	mov	r0, #7	; 0x7
         61a34:	e58405b8 	str	r0, [r4, #1464]	; fField1464
         61a38:	e1a00004 	mov	r0, r4
         61a3c:	e3a01013 	mov	r1, #19	; 0x13
         61a40:	eb66a6e1 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         61a44:	e3300000 	teq	r0, #0	; 0x0
         61a48:	11a01000 	movne	r1, r0
         61a4c:	11a00004 	movne	r0, r4
         61a50:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         61a54:	1a66ab01 	bne	1a0c660 <TClassOneModem::$C1IdModemComplete(long)>
         61a58:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TClassOneModem::C1IdCheck4Response(void)
 * Address: 00061a5c
 */
TClassOneModem::C1IdCheck4Response(void) {
    /*
         61a5c:	e1a0c00d 	mov	ip, sp
         61a60:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         61a64:	e24cb004 	sub	fp, ip, #4	; 0x4
         61a68:	e1a04000 	mov	r4, r0
         61a6c:	e5d007e9 	ldrb	r0, [r0, #2025]	; fField2025
         61a70:	e3300000 	teq	r0, #0	; 0x0
         61a74:	01a00004 	moveq	r0, r4
         61a78:	03a01000 	moveq	r1, #0	; 0x0
         61a7c:	0a00000a 	beq	61aac <TClassOneModem::C1IdCheck4Response(void)+0x50>
         61a80:	e59415c4 	ldr	r1, [r4, #1476]	; fField1476
         61a84:	e3310000 	teq	r1, #0	; 0x0
         61a88:	0a000001 	beq	61a94 <TClassOneModem::C1IdCheck4Response(void)+0x38>
         61a8c:	e1a00004 	mov	r0, r4
         61a90:	ea000005 	b	61aac <TClassOneModem::C1IdCheck4Response(void)+0x50>
         61a94:	e59405f4 	ldr	r0, [r4, #1524]	; fField1524
         61a98:	e3300000 	teq	r0, #0	; 0x0
         61a9c:	0a000004 	beq	61ab4 <TClassOneModem::C1IdCheck4Response(void)+0x58>
         61aa0:	e1a00004 	mov	r0, r4
         61aa4:	e3a01039 	mov	r1, #57	; 0x39
         61aa8:	e2411c5e 	sub	r1, r1, #24064	; 0x5e00
         61aac:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         61ab0:	ea66aaea 	b	1a0c660 <TClassOneModem::$C1IdModemComplete(long)>
         61ab4:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         61ab8:	e3800802 	orr	r0, r0, #131072	; 0x20000
         61abc:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         61ac0:	e3a00009 	mov	r0, #9	; 0x9
         61ac4:	e58405b8 	str	r0, [r4, #1464]	; fField1464
         61ac8:	e1a00004 	mov	r0, r4
         61acc:	e3a01009 	mov	r1, #9	; 0x9
         61ad0:	eb66a6bd 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         61ad4:	e3300000 	teq	r0, #0	; 0x0
         61ad8:	11a01000 	movne	r1, r0
         61adc:	1affffea 	bne	61a8c <TClassOneModem::C1IdCheck4Response(void)+0x30>
         61ae0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TClassOneModem::HandleRequest(TUMsgToken &, unsigned long)
 * Address: 00061ae4
 */
TClassOneModem::HandleRequest(TUMsgToken &, unsigned long) {
    /*
         61ae4:	e1a0c00d 	mov	ip, sp
         61ae8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         61aec:	e24cb004 	sub	fp, ip, #4	; 0x4
         61af0:	e1a04000 	mov	r4, r0
         61af4:	e5910000 	ldr	r0, [r1]
         61af8:	e3a06001 	mov	r6, #1	; 0x1
         61afc:	e5943930 	ldr	r3, [r4, #2352]	; fField2352
         61b00:	e1330000 	teq	r3, r0
         61b04:	1a000041 	bne	61c10 <TClassOneModem::HandleRequest(TUMsgToken &, unsigned long)+0x12c>
         61b08:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         61b0c:	e3c00010 	bic	r0, r0, #16	; 0x10
         61b10:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         61b14:	e594104c 	ldr	r1, [r4, #76]	; fField76
         61b18:	e351000a 	cmp	r1, #10	; 0xa
         61b1c:	908ff101 	addls	pc, pc, r1, lsl #2
         61b20:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         61b24:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         61b28:	ea00000a 	b	61b58 <TClassOneModem::HandleRequest(TUMsgToken &, unsigned long)+0x74>
         61b2c:	ea00001a 	b	61b9c <TClassOneModem::HandleRequest(TUMsgToken &, unsigned long)+0xb8>
         61b30:	ea00001c 	b	61ba8 <TClassOneModem::HandleRequest(TUMsgToken &, unsigned long)+0xc4>
         61b34:	ea000029 	b	61be0 <TClassOneModem::HandleRequest(TUMsgToken &, unsigned long)+0xfc>
         61b38:	ea00001d 	b	61bb4 <TClassOneModem::HandleRequest(TUMsgToken &, unsigned long)+0xd0>
         61b3c:	ea00001c 	b	61bb4 <TClassOneModem::HandleRequest(TUMsgToken &, unsigned long)+0xd0>
         61b40:	ea000022 	b	61bd0 <TClassOneModem::HandleRequest(TUMsgToken &, unsigned long)+0xec>
         61b44:	ea000025 	b	61be0 <TClassOneModem::HandleRequest(TUMsgToken &, unsigned long)+0xfc>
         61b48:	ea000028 	b	61bf0 <TClassOneModem::HandleRequest(TUMsgToken &, unsigned long)+0x10c>
         61b4c:	e1a00004 	mov	r0, r4
         61b50:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         61b54:	ea66f0d6 	b	1a1deb4 <TClassOneModem::$C2PktGetBytesSetupCont(void)>
         61b58:	e3100701 	tst	r0, #262144	; 0x40000
         61b5c:	0a000001 	beq	61b68 <TClassOneModem::HandleRequest(TUMsgToken &, unsigned long)+0x84>
         61b60:	e3100601 	tst	r0, #1048576	; 0x100000
         61b64:	0a000003 	beq	61b78 <TClassOneModem::HandleRequest(TUMsgToken &, unsigned long)+0x94>
         61b68:	e3100702 	tst	r0, #524288	; 0x80000
         61b6c:	0a000007 	beq	61b90 <TClassOneModem::HandleRequest(TUMsgToken &, unsigned long)+0xac>
         61b70:	e3100102 	tst	r0, #-2147483648	; 0x80000000
         61b74:	1a000005 	bne	61b90 <TClassOneModem::HandleRequest(TUMsgToken &, unsigned long)+0xac>
         61b78:	e59415bc 	ldr	r1, [r4, #1468]	; fField1468
         61b7c:	e331000a 	teq	r1, #10	; 0xa
         61b80:	0a000002 	beq	61b90 <TClassOneModem::HandleRequest(TUMsgToken &, unsigned long)+0xac>
         61b84:	e3100201 	tst	r0, #268435456	; 0x10000000
         61b88:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         61b8c:	ea00000a 	b	61bbc <TClassOneModem::HandleRequest(TUMsgToken &, unsigned long)+0xd8>
         61b90:	e1a00004 	mov	r0, r4
         61b94:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         61b98:	ea66e887 	b	1a1bdbc <TClassOneModem::$TimeOutCmdResult(void)>
         61b9c:	e1a00004 	mov	r0, r4
         61ba0:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         61ba4:	ea66aaac 	b	1a0c65c <TClassOneModem::$C1IdModem(void)>
         61ba8:	e1a00004 	mov	r0, r4
         61bac:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         61bb0:	ea66d3ed 	b	1a16b6c <TClassOneModem::$PutCommand(void)>
         61bb4:	e3100201 	tst	r0, #268435456	; 0x10000000
         61bb8:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         61bbc:	e3800202 	orr	r0, r0, #536870912	; 0x20000000
         61bc0:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         61bc4:	e1a00004 	mov	r0, r4
         61bc8:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         61bcc:	ea66aaa8 	b	1a0c674 <TClassOneModem::$C1PktAbort(void)>
         61bd0:	e1a00004 	mov	r0, r4
         61bd4:	e59f1000 	ldr	r1, [pc, #0]	; 61bdc <TClassOneModem::HandleRequest(TUMsgToken &, unsigned long)+0xf8>
         61bd8:	ea000037 	b	61cbc <TClassOneModem::HandleRequest(TUMsgToken &, unsigned long)+0x1d8>
         61bdc:	ffffc16f 	swinv	0x00ffc16f
         61be0:	e1a00004 	mov	r0, r4
         61be4:	e3a01000 	mov	r1, #0	; 0x0
         61be8:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         61bec:	ea66aea4 	b	1a0d684 <TClassOneModem::$C1PktContinue(long)>
         61bf0:	e58465b4 	str	r6, [r4, #1460]	; fField1460
         61bf4:	e5d408f0 	ldrb	r0, [r4, #2288]	; fField2288
         61bf8:	e3300000 	teq	r0, #0	; 0x0
         61bfc:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         61c00:	e1a00004 	mov	r0, r4
         61c04:	e3a01000 	mov	r1, #0	; 0x0
         61c08:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         61c0c:	ea66b2c7 	b	1a0e730 <TClassOneModem::$ConnectModemContinue(long)>
         61c10:	e3a05000 	mov	r5, #0	; 0x0
         61c14:	e284004c 	add	r0, r4, #76	; 0x4c
         61c18:	e5943048 	ldr	r3, [r4, #72]	; fField72
         61c1c:	e353000c 	cmp	r3, #12	; 0xc
         61c20:	3a000006 	bcc	61c40 <TClassOneModem::HandleRequest(TUMsgToken &, unsigned long)+0x15c>
         61c24:	e5903004 	ldr	r3, [r0, #4]	; fField4
         61c28:	e59fc094 	ldr	ip, [pc, #94]	; 61cc4 <TClassOneModem::HandleRequest(TUMsgToken &, unsigned long)+0x1e0>
         61c2c:	e133000c 	teq	r3, ip
         61c30:	05900008 	ldreq	r0, [r0, #8]	; fField8
         61c34:	059fc08c 	ldreq	ip, [pc, #8c]	; 61cc8 <TClassOneModem::HandleRequest(TUMsgToken &, unsigned long)+0x1e4>	; fField8
         61c38:	0130000c 	teqeq	r0, ip
         61c3c:	03a05001 	moveq	r5, #1	; 0x1
         61c40:	e1a00004 	mov	r0, r4
         61c44:	eb66c33e 	bl	1a12944 <TMNP::$HandleRequest(TUMsgToken &, unsigned long)>
         61c48:	e3350000 	teq	r5, #0	; 0x0
         61c4c:	15940018 	ldrne	r0, [r4, #24]	; fField24
         61c50:	12001040 	andne	r1, r0, #64	; 0x40
         61c54:	13310000 	teqne	r1, #0	; 0x0
         61c58:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         61c5c:	e3100004 	tst	r0, #4	; 0x4
         61c60:	059405b4 	ldreq	r0, [r4, #1460]	; fField1460
         61c64:	03300008 	teqeq	r0, #8	; 0x8
         61c68:	05d408f0 	ldreqb	r0, [r4, #2288]	; fField2288
         61c6c:	03300000 	teqeq	r0, #0	; 0x0
         61c70:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         61c74:	e5c468f4 	strb	r6, [r4, #2292]	; fField2292
         61c78:	e1a00004 	mov	r0, r4
         61c7c:	eb670542 	bl	1a2318c <TClassOneModem::$AbortCommand(void)>
         61c80:	e594031c 	ldr	r0, [r4, #796]	; fField796
         61c84:	e59fc040 	ldr	ip, [pc, #40]	; 61ccc <TClassOneModem::HandleRequest(TUMsgToken &, unsigned long)+0x1e8>	; fField40
         61c88:	e130000c 	teq	r0, ip
         61c8c:	158465b4 	strne	r6, [r4, #1460]	; fField1460
         61c90:	1affffda 	bne	61c00 <TClassOneModem::HandleRequest(TUMsgToken &, unsigned long)+0x11c>
         61c94:	e3a0000d 	mov	r0, #13	; 0xd
         61c98:	e58405b4 	str	r0, [r4, #1460]	; fField1460
         61c9c:	e1a00004 	mov	r0, r4
         61ca0:	e3a02e7d 	mov	r2, #2000	; 0x7d0
         61ca4:	e3a01009 	mov	r1, #9	; 0x9
         61ca8:	eb671dfd 	bl	1a294a4 <TClassOneModem::$PostTimer(unsigned long, unsigned long)>
         61cac:	e3300000 	teq	r0, #0	; 0x0
         61cb0:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         61cb4:	e1a01000 	mov	r1, r0
         61cb8:	e1a00004 	mov	r0, r4
         61cbc:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         61cc0:	ea6d7cf2 	b	1bc1090 <TCommTool::$StartAbort(long)>
         61cc4:	7379736d 	cmnvc	r9, #-1275068415	; 0xb4000001
         61cc8:	70776f6e 	rsbvcs	r6, r7, lr, ror #30
         61ccc:	65787472 	ldrvsb	r7, [r8, -#1138]!
    */
}

/**
 * Symbol: TClassOneModem::C1IdAreYouThere(void)
 * Address: 00061cd0
 */
TClassOneModem::C1IdAreYouThere(void) {
    /*
         61cd0:	e59015c4 	ldr	r1, [r0, #1476]	; fField1476
         61cd4:	e3310000 	teq	r1, #0	; 0x0
         61cd8:	059025f4 	ldreq	r2, [r0, #1524]	; fField1524
         61cdc:	03320000 	teqeq	r2, #0	; 0x0
         61ce0:	0a000002 	beq	61cf0 <TClassOneModem::C1IdAreYouThere(void)+0x20>
         61ce4:	e5d027e9 	ldrb	r2, [r0, #2025]	; fField2025
         61ce8:	e3320000 	teq	r2, #0	; 0x0
         61cec:	1a000000 	bne	61cf4 <TClassOneModem::C1IdAreYouThere(void)+0x24>
         61cf0:	ea66aa54 	b	1a0c648 <TClassOneModem::$C1IdCheck4Response(void)>
         61cf4:	e3310000 	teq	r1, #0	; 0x0
         61cf8:	03a01039 	moveq	r1, #57	; 0x39
         61cfc:	02411c5e 	subeq	r1, r1, #24064	; 0x5e00
         61d00:	ea66aa56 	b	1a0c660 <TClassOneModem::$C1IdModemComplete(long)>
    */
}

/**
 * Symbol: TClassOneModem::C1IdI4CmdFailed(void)
 * Address: 00061d04
 */
TClassOneModem::C1IdI4CmdFailed(void) {
    /*
         61d04:	e1a0c00d 	mov	ip, sp
         61d08:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         61d0c:	e24cb004 	sub	fp, ip, #4	; 0x4
         61d10:	e1a04000 	mov	r4, r0
         61d14:	e59015b0 	ldr	r1, [r0, #1456]	; fField1456
         61d18:	e3110802 	tst	r1, #131072	; 0x20000
         61d1c:	e3a00009 	mov	r0, #9	; 0x9
         61d20:	0a00000b 	beq	61d54 <TClassOneModem::C1IdI4CmdFailed(void)+0x50>
         61d24:	e3c11802 	bic	r1, r1, #131072	; 0x20000
         61d28:	e58405b8 	str	r0, [r4, #1464]	; fField1464
         61d2c:	e58415b0 	str	r1, [r4, #1456]	; fField1456
         61d30:	e1a00004 	mov	r0, r4
         61d34:	e3a01007 	mov	r1, #7	; 0x7
         61d38:	eb66a623 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         61d3c:	e3300000 	teq	r0, #0	; 0x0
         61d40:	11a01000 	movne	r1, r0
         61d44:	11a00004 	movne	r0, r4
         61d48:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         61d4c:	1a66aa43 	bne	1a0c660 <TClassOneModem::$C1IdModemComplete(long)>
         61d50:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         61d54:	e5840794 	str	r0, [r4, #1940]	; fField1940
         61d58:	e3a00000 	mov	r0, #0	; 0x0
         61d5c:	e58405c4 	str	r0, [r4, #1476]	; fField1476
         61d60:	e58405f4 	str	r0, [r4, #1524]	; fField1524
         61d64:	e3a0000a 	mov	r0, #10	; 0xa
         61d68:	e58405b8 	str	r0, [r4, #1464]	; fField1464
         61d6c:	e1a00004 	mov	r0, r4
         61d70:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         61d74:	ea66aa36 	b	1a0c654 <TClassOneModem::$C1IdGetIdCmdResponse(void)>
    */
}

/**
 * Symbol: TClassOneModem::C1IdGetModemId(void)
 * Address: 00061d78
 */
TClassOneModem::C1IdGetModemId(void) {
    /*
         61d78:	e1a0c00d 	mov	ip, sp
         61d7c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         61d80:	e24cb004 	sub	fp, ip, #4	; 0x4
         61d84:	e1a04000 	mov	r4, r0
         61d88:	e59015c4 	ldr	r1, [r0, #1476]	; fField1476
         61d8c:	e281cc5d 	add	ip, r1, #23808	; 0x5d00
         61d90:	e37c00c0 	cmn	ip, #192	; 0xc0
         61d94:	0a00000c 	beq	61dcc <TClassOneModem::C1IdGetModemId(void)+0x54>
         61d98:	e281cc46 	add	ip, r1, #17920	; 0x4600
         61d9c:	e37c0053 	cmn	ip, #83	; 0x53
         61da0:	1a000002 	bne	61db0 <TClassOneModem::C1IdGetModemId(void)+0x38>
         61da4:	e1a00004 	mov	r0, r4
         61da8:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         61dac:	ea66bab2 	b	1a1087c <TClassOneModem::$GetCommandResult(void)>
         61db0:	e3310000 	teq	r1, #0	; 0x0
         61db4:	11a00004 	movne	r0, r4
         61db8:	191b68f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, lr}
         61dbc:	1a66aa27 	bne	1a0c660 <TClassOneModem::$C1IdModemComplete(long)>
         61dc0:	e59405f4 	ldr	r0, [r4, #1524]	; fField1524
         61dc4:	e330003b 	teq	r0, #59	; 0x3b
         61dc8:	0a000002 	beq	61dd8 <TClassOneModem::C1IdGetModemId(void)+0x60>
         61dcc:	e1a00004 	mov	r0, r4
         61dd0:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         61dd4:	ea670917 	b	1a24238 <TClassOneModem::$C1IdI4CmdFailed(void)>
         61dd8:	e3a05000 	mov	r5, #0	; 0x0
         61ddc:	e3a06000 	mov	r6, #0	; 0x0
         61de0:	e2847f4d 	add	r7, r4, #308	; 0x134
         61de4:	e2877b02 	add	r7, r7, #2048	; 0x800
         61de8:	e1a01007 	mov	r1, r7
         61dec:	e0840105 	add	r0, r4, r5, lsl #2
         61df0:	e5900a34 	ldr	r0, [r0, #2612]	; fField2612
         61df4:	eb6d4f2b 	bl	1bb5aa8 <$strcmp>
         61df8:	e3300000 	teq	r0, #0	; 0x0
         61dfc:	03a06001 	moveq	r6, #1	; 0x1
         61e00:	e2855001 	add	r5, r5, #1	; 0x1
         61e04:	e3550009 	cmp	r5, #9	; 0x9
         61e08:	aa000001 	bge	61e14 <TClassOneModem::C1IdGetModemId(void)+0x9c>
         61e0c:	e3360000 	teq	r6, #0	; 0x0
         61e10:	0afffff4 	beq	61de8 <TClassOneModem::C1IdGetModemId(void)+0x70>
         61e14:	e1a00005 	mov	r0, r5
         61e18:	e5845794 	str	r5, [r4, #1940]	; fField1940
         61e1c:	e3a0500a 	mov	r5, #10	; 0xa
         61e20:	e3360000 	teq	r6, #0	; 0x0
         61e24:	12400001 	subne	r0, r0, #1	; 0x1
         61e28:	15840794 	strne	r0, [r4, #1940]	; fField1940
         61e2c:	1a000004 	bne	61e44 <TClassOneModem::C1IdGetModemId(void)+0xcc>
         61e30:	e1a01007 	mov	r1, r7
         61e34:	e5940798 	ldr	r0, [r4, #1944]	; fField1944
         61e38:	eb6d4f1a 	bl	1bb5aa8 <$strcmp>
         61e3c:	e3300000 	teq	r0, #0	; 0x0
         61e40:	05845794 	streq	r5, [r4, #1940]	; fField1940
         61e44:	e58455b8 	str	r5, [r4, #1464]	; fField1464
         61e48:	eaffffd5 	b	61da4 <TClassOneModem::C1IdGetModemId(void)+0x2c>
    */
}

/**
 * Symbol: TClassOneModem::C1IdGetIdCmdResponse(void)
 * Address: 00061e4c
 */
TClassOneModem::C1IdGetIdCmdResponse(void) {
    /*
         61e4c:	e1a0c00d 	mov	ip, sp
         61e50:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         61e54:	e24cb004 	sub	fp, ip, #4	; 0x4
         61e58:	e1a04000 	mov	r4, r0
         61e5c:	e3a05000 	mov	r5, #0	; 0x0
         61e60:	e56d5004 	strb	r5, [sp, -#4]!	; fField4
         61e64:	e59005c4 	ldr	r0, [r0, #1476]	; fField1476
         61e68:	e1b01000 	movs	r1, r0
         61e6c:	1a000003 	bne	61e80 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x34>
         61e70:	e59405f4 	ldr	r0, [r4, #1524]	; fField1524
         61e74:	e330003b 	teq	r0, #59	; 0x3b
         61e78:	1a00000a 	bne	61ea8 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x5c>
         61e7c:	ea000002 	b	61e8c <TClassOneModem::C1IdGetIdCmdResponse(void)+0x40>
         61e80:	e281cc46 	add	ip, r1, #17920	; 0x4600
         61e84:	e37c0053 	cmn	ip, #83	; 0x53
         61e88:	1a000002 	bne	61e98 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x4c>
         61e8c:	e1a00004 	mov	r0, r4
         61e90:	eb66ba79 	bl	1a1087c <TClassOneModem::$GetCommandResult(void)>
         61e94:	ea0000ee 	b	62254 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x408>
         61e98:	e3300000 	teq	r0, #0	; 0x0
         61e9c:	1280cc5d 	addne	ip, r0, #23808	; 0x5d00
         61ea0:	137c00c0 	cmnne	ip, #192	; 0xc0
         61ea4:	1a0000ef 	bne	62268 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x41c>
         61ea8:	e3a0a028 	mov	sl, #40	; 0x28
         61eac:	e5940794 	ldr	r0, [r4, #1940]	; fField1940
         61eb0:	e3300006 	teq	r0, #6	; 0x6
         61eb4:	1a000008 	bne	61edc <TClassOneModem::C1IdGetIdCmdResponse(void)+0x90>
         61eb8:	e5c4a8f1 	strb	sl, [r4, #2289]	; fField2289
         61ebc:	e3a0000b 	mov	r0, #11	; 0xb
         61ec0:	e58405b8 	str	r0, [r4, #1464]	; fField1464
         61ec4:	e1a00004 	mov	r0, r4
         61ec8:	e3a01015 	mov	r1, #21	; 0x15
         61ecc:	eb66a5be 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         61ed0:	e3300000 	teq	r0, #0	; 0x0
         61ed4:	1a0000e3 	bne	62268 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x41c>
         61ed8:	ea0000dd 	b	62254 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x408>
         61edc:	e3a09007 	mov	r9, #7	; 0x7
         61ee0:	e3a08001 	mov	r8, #1	; 0x1
         61ee4:	e3a07f7d 	mov	r7, #500	; 0x1f4
         61ee8:	e3a06019 	mov	r6, #25	; 0x19
         61eec:	e3300000 	teq	r0, #0	; 0x0
         61ef0:	1a000024 	bne	61f88 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x13c>
         61ef4:	e59f0084 	ldr	r0, [pc, #84]	; 61f80 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x134>
         61ef8:	e5840798 	str	r0, [r4, #1944]	; fField1944
         61efc:	e59f0080 	ldr	r0, [pc, #80]	; 61f84 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x138>
         61f00:	e2844e7a 	add	r4, r4, #1952	; 0x7a0
         61f04:	e8042001 	stmda	r4, {r0, sp}
         61f08:	e584d004 	str	sp, [r4, #4]	; fField4
         61f0c:	e584000c 	str	r0, [r4, #12]	; fField12
         61f10:	e584d008 	str	sp, [r4, #8]	; fField8
         61f14:	e2444e7a 	sub	r4, r4, #1952	; 0x7a0
         61f18:	e1a00004 	mov	r0, r4
         61f1c:	eb66df66 	bl	1a19cbc <TClassOneModem::$SetModemProfile(void)>
         61f20:	e3300000 	teq	r0, #0	; 0x0
         61f24:	1a0000cf 	bne	62268 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x41c>
         61f28:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         61f2c:	e5a09010 	str	r9, [r0, #16]!	; fField16
         61f30:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         61f34:	e5c0500c 	strb	r5, [r0, #12]	; fField12
         61f38:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         61f3c:	e5c0500d 	strb	r5, [r0, #13]
         61f40:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         61f44:	e5c0800f 	strb	r8, [r0, #15]
         61f48:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         61f4c:	e5a07018 	str	r7, [r0, #24]!	; fField24
         61f50:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         61f54:	e5a0a01c 	str	sl, [r0, #28]!	; fField28
         61f58:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         61f5c:	e5a06020 	str	r6, [r0, #32]!	; fField32
         61f60:	e3a00011 	mov	r0, #17	; 0x11
         61f64:	e58405b8 	str	r0, [r4, #1464]	; fField1464
         61f68:	e1a00004 	mov	r0, r4
         61f6c:	e3a01008 	mov	r1, #8	; 0x8
         61f70:	eb66a595 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         61f74:	e3300000 	teq	r0, #0	; 0x0
         61f78:	1a0000ba 	bne	62268 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x41c>
         61f7c:	ea0000b4 	b	62254 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x408>
         61f80:	0036ff1c 	eoreqs	pc, r6, ip, lsl pc
         61f84:	0036ffc8 	eoreqs	pc, r6, r8, asr #31
         61f88:	e59f204c 	ldr	r2, [pc, #4c]	; 61fdc <TClassOneModem::C1IdGetIdCmdResponse(void)+0x190>	; fField4
         61f8c:	e59f104c 	ldr	r1, [pc, #4c]	; 61fe0 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x194>	; fField4
         61f90:	e3300009 	teq	r0, #9	; 0x9
         61f94:	1a000013 	bne	61fe8 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x19c>
         61f98:	e3a00039 	mov	r0, #57	; 0x39
         61f9c:	e2400c5e 	sub	r0, r0, #24064	; 0x5e00
         61fa0:	e5d437ea 	ldrb	r3, [r4, #2026]	; fField2026
         61fa4:	e3330000 	teq	r3, #0	; 0x0
         61fa8:	1a0000ae 	bne	62268 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x41c>
         61fac:	e59f0030 	ldr	r0, [pc, #30]	; 61fe4 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x198>
         61fb0:	e2844e7a 	add	r4, r4, #1952	; 0x7a0
         61fb4:	e8042005 	stmda	r4, {r0, r2, sp}
         61fb8:	e584d004 	str	sp, [r4, #4]	; fField4
         61fbc:	e584100c 	str	r1, [r4, #12]	; fField12
         61fc0:	e584d008 	str	sp, [r4, #8]	; fField8
         61fc4:	e2444e7a 	sub	r4, r4, #1952	; 0x7a0
         61fc8:	e1a00004 	mov	r0, r4
         61fcc:	eb66df3a 	bl	1a19cbc <TClassOneModem::$SetModemProfile(void)>
         61fd0:	e3300000 	teq	r0, #0	; 0x0
         61fd4:	1a0000a3 	bne	62268 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x41c>
         61fd8:	ea000094 	b	62230 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x3e4>
         61fdc:	0036ffd8 	ldreqsb	pc, [r6], -r8
         61fe0:	0037003c 	eoreqs	r0, r7, ip, lsr r0
         61fe4:	0036ffa4 	eoreqs	pc, r6, r4, lsr #31
         61fe8:	e3300007 	teq	r0, #7	; 0x7
         61fec:	1a000022 	bne	6207c <TClassOneModem::C1IdGetIdCmdResponse(void)+0x230>
         61ff0:	e59f0070 	ldr	r0, [pc, #70]	; 62068 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x21c>
         61ff4:	e5840798 	str	r0, [r4, #1944]	; fField1944
         61ff8:	e59f006c 	ldr	r0, [pc, #6c]	; 6206c <TClassOneModem::C1IdGetIdCmdResponse(void)+0x220>
         61ffc:	e584079c 	str	r0, [r4, #1948]	; fField1948
         62000:	e59f0068 	ldr	r0, [pc, #68]	; 62070 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x224>	; fField68
         62004:	e58407a0 	str	r0, [r4, #1952]	; fField1952
         62008:	e59f0064 	ldr	r0, [pc, #64]	; 62074 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x228>
         6200c:	e2844e7a 	add	r4, r4, #1952	; 0x7a0
         62010:	e9842001 	stmib	r4, {r0, sp}
         62014:	e2444e7a 	sub	r4, r4, #1952	; 0x7a0
         62018:	e59f0058 	ldr	r0, [pc, #58]	; 62078 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x22c>
         6201c:	e58407ac 	str	r0, [r4, #1964]	; fField1964
         62020:	e1a00004 	mov	r0, r4
         62024:	eb66df24 	bl	1a19cbc <TClassOneModem::$SetModemProfile(void)>
         62028:	e3300000 	teq	r0, #0	; 0x0
         6202c:	1a00008d 	bne	62268 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x41c>
         62030:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         62034:	e5a09010 	str	r9, [r0, #16]!	; fField16
         62038:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         6203c:	e5c0500c 	strb	r5, [r0, #12]	; fField12
         62040:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         62044:	e5c0800d 	strb	r8, [r0, #13]
         62048:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         6204c:	e5c0500f 	strb	r5, [r0, #15]
         62050:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         62054:	e3a010ff 	mov	r1, #255	; 0xff
         62058:	e5a07018 	str	r7, [r0, #24]!	; fField24
         6205c:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         62060:	e5a0101c 	str	r1, [r0, #28]!	; fField28
         62064:	ea00006f 	b	62228 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x3dc>
         62068:	0036ff84 	eoreqs	pc, r6, r4, lsl #31
         6206c:	0037006c 	eoreqs	r0, r7, ip, rrx
         62070:	00370084 	eoreqs	r0, r7, r4, lsl #1
         62074:	0037009c 	mlaeqs	r7, ip, r0, r0
         62078:	003700b4 	ldreqh	r0, [r7], -r4
         6207c:	e3300008 	teq	r0, #8	; 0x8
         62080:	1a00001d 	bne	620fc <TClassOneModem::C1IdGetIdCmdResponse(void)+0x2b0>
         62084:	e59f005c 	ldr	r0, [pc, #5c]	; 620e8 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x29c>
         62088:	e5840798 	str	r0, [r4, #1944]	; fField1944
         6208c:	e59f0058 	ldr	r0, [pc, #58]	; 620ec <TClassOneModem::C1IdGetIdCmdResponse(void)+0x2a0>
         62090:	e584079c 	str	r0, [r4, #1948]	; fField1948
         62094:	e59f0054 	ldr	r0, [pc, #54]	; 620f0 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x2a4>
         62098:	e58407a0 	str	r0, [r4, #1952]	; fField1952
         6209c:	e59f0050 	ldr	r0, [pc, #50]	; 620f4 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x2a8>
         620a0:	e2844e7a 	add	r4, r4, #1952	; 0x7a0
         620a4:	e9842001 	stmib	r4, {r0, sp}
         620a8:	e2444e7a 	sub	r4, r4, #1952	; 0x7a0
         620ac:	e59f0044 	ldr	r0, [pc, #44]	; 620f8 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x2ac>
         620b0:	e58407ac 	str	r0, [r4, #1964]	; fField1964
         620b4:	e1a00004 	mov	r0, r4
         620b8:	eb66deff 	bl	1a19cbc <TClassOneModem::$SetModemProfile(void)>
         620bc:	e3300000 	teq	r0, #0	; 0x0
         620c0:	1a000068 	bne	62268 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x41c>
         620c4:	e3a010fe 	mov	r1, #254	; 0xfe
         620c8:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         620cc:	e5a01010 	str	r1, [r0, #16]!	; fField16
         620d0:	e3a00c96 	mov	r0, #38400	; 0x9600
         620d4:	e59417d8 	ldr	r1, [r4, #2008]	; fField2008
         620d8:	e5a10014 	str	r0, [r1, #20]!	; fField20
         620dc:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         620e0:	e5c0500c 	strb	r5, [r0, #12]	; fField12
         620e4:	ea000047 	b	62208 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x3bc>
         620e8:	0036ff94 	mlaeqs	r6, r4, pc, pc
         620ec:	0037012c 	eoreqs	r0, r7, ip, lsr #2
         620f0:	00370140 	eoreqs	r0, r7, r0, asr #2
         620f4:	00370154 	eoreqs	r0, r7, r4, asr r1
         620f8:	00370168 	eoreqs	r0, r7, r8, ror #2
         620fc:	e3a0a0fc 	mov	sl, #252	; 0xfc
         62100:	e3300005 	teq	r0, #5	; 0x5
         62104:	1a000014 	bne	6215c <TClassOneModem::C1IdGetIdCmdResponse(void)+0x310>
         62108:	e59f0048 	ldr	r0, [pc, #48]	; 62158 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x30c>
         6210c:	e2844e7a 	add	r4, r4, #1952	; 0x7a0
         62110:	e9040005 	stmdb	r4, {r0, r2}
         62114:	e584d008 	str	sp, [r4, #8]	; fField8
         62118:	e404d7a0 	str	sp, [r4], -#1952	; fField1952
         6211c:	e58417ac 	str	r1, [r4, #1964]	; fField1964
         62120:	e584d7a4 	str	sp, [r4, #1956]	; fField1956
         62124:	e1a00004 	mov	r0, r4
         62128:	eb66dee3 	bl	1a19cbc <TClassOneModem::$SetModemProfile(void)>
         6212c:	e3300000 	teq	r0, #0	; 0x0
         62130:	1a00004c 	bne	62268 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x41c>
         62134:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         62138:	e5a09010 	str	r9, [r0, #16]!	; fField16
         6213c:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         62140:	e5c0500c 	strb	r5, [r0, #12]	; fField12
         62144:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         62148:	e5c0500d 	strb	r5, [r0, #13]
         6214c:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         62150:	e5c0800f 	strb	r8, [r0, #15]
         62154:	ea00002f 	b	62218 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x3cc>
         62158:	0036ff6c 	eoreqs	pc, r6, ip, ror #30
         6215c:	e330000a 	teq	r0, #10	; 0xa
         62160:	0a000032 	beq	62230 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x3e4>
         62164:	e59f2034 	ldr	r2, [pc, #34]	; 621a0 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x354>
         62168:	e3300001 	teq	r0, #1	; 0x1
         6216c:	059f0030 	ldreq	r0, [pc, #30]	; 621a4 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x358>
         62170:	0a00000f 	beq	621b4 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x368>
         62174:	e3300002 	teq	r0, #2	; 0x2
         62178:	0a00000c 	beq	621b0 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x364>
         6217c:	e3300003 	teq	r0, #3	; 0x3
         62180:	059f0020 	ldreq	r0, [pc, #20]	; 621a8 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x35c>	; fField20
         62184:	0a000002 	beq	62194 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x348>
         62188:	e3300004 	teq	r0, #4	; 0x4
         6218c:	1a00000a 	bne	621bc <TClassOneModem::C1IdGetIdCmdResponse(void)+0x370>
         62190:	e59f0014 	ldr	r0, [pc, #14]	; 621ac <TClassOneModem::C1IdGetIdCmdResponse(void)+0x360>
         62194:	e5840798 	str	r0, [r4, #1944]	; fField1944
         62198:	e584d7a8 	str	sp, [r4, #1960]	; fField1960
         6219c:	ea000006 	b	621bc <TClassOneModem::C1IdGetIdCmdResponse(void)+0x370>
         621a0:	00370054 	eoreqs	r0, r7, r4, asr r0
         621a4:	0036ff2c 	eoreqs	pc, r6, ip, lsr #30
         621a8:	0036ff3c 	eoreqs	pc, r6, ip, lsr pc
         621ac:	0036ff5c 	eoreqs	pc, r6, ip, asr pc
         621b0:	e59f00a0 	ldr	r0, [pc, #a0]	; 62258 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x40c>
         621b4:	e5840798 	str	r0, [r4, #1944]	; fField1944
         621b8:	e58427a8 	str	r2, [r4, #1960]	; fField1960
         621bc:	e59f0098 	ldr	r0, [pc, #98]	; 6225c <TClassOneModem::C1IdGetIdCmdResponse(void)+0x410>
         621c0:	e584079c 	str	r0, [r4, #1948]	; fField1948
         621c4:	e59f0094 	ldr	r0, [pc, #94]	; 62260 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x414>
         621c8:	e58407a0 	str	r0, [r4, #1952]	; fField1952
         621cc:	e59f0090 	ldr	r0, [pc, #90]	; 62264 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x418>
         621d0:	e58407a4 	str	r0, [r4, #1956]	; fField1956
         621d4:	e58417ac 	str	r1, [r4, #1964]	; fField1964
         621d8:	e1a00004 	mov	r0, r4
         621dc:	eb66deb6 	bl	1a19cbc <TClassOneModem::$SetModemProfile(void)>
         621e0:	e3300000 	teq	r0, #0	; 0x0
         621e4:	1a00001f 	bne	62268 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x41c>
         621e8:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         621ec:	e5a09010 	str	r9, [r0, #16]!	; fField16
         621f0:	e59417a8 	ldr	r1, [r4, #1960]	; fField1960
         621f4:	e131000d 	teq	r1, sp
         621f8:	13a01001 	movne	r1, #1	; 0x1
         621fc:	03a01000 	moveq	r1, #0	; 0x0
         62200:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         62204:	e5c0100c 	strb	r1, [r0, #12]	; fField12
         62208:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         6220c:	e5c0800d 	strb	r8, [r0, #13]
         62210:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         62214:	e5c0500f 	strb	r5, [r0, #15]
         62218:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         6221c:	e5a07018 	str	r7, [r0, #24]!	; fField24
         62220:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         62224:	e5a0a01c 	str	sl, [r0, #28]!	; fField28
         62228:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         6222c:	e5a06020 	str	r6, [r0, #32]!	; fField32
         62230:	e5c458f1 	strb	r5, [r4, #2289]	; fField2289
         62234:	e5c458f2 	strb	r5, [r4, #2290]	; fField2290
         62238:	e3a00013 	mov	r0, #19	; 0x13
         6223c:	e58405b8 	str	r0, [r4, #1464]	; fField1464
         62240:	e1a00004 	mov	r0, r4
         62244:	e3a01014 	mov	r1, #20	; 0x14
         62248:	eb66a4df 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         6224c:	e3300000 	teq	r0, #0	; 0x0
         62250:	1a000004 	bne	62268 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x41c>
         62254:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         62258:	0036ff4c 	eoreqs	pc, r6, ip, asr #30
         6225c:	0036fff0 	ldreqsh	pc, [r6], -r0
         62260:	00370008 	eoreqs	r0, r7, r8
         62264:	00370024 	eoreqs	r0, r7, r4, lsr #32
         62268:	e1a01000 	mov	r1, r0
         6226c:	e1a00004 	mov	r0, r4
         62270:	eb66a8fa 	bl	1a0c660 <TClassOneModem::$C1IdModemComplete(long)>
         62274:	eafffff6 	b	62254 <TClassOneModem::C1IdGetIdCmdResponse(void)+0x408>
    */
}

/**
 * Symbol: TClassOneModem::C1IdACLCheckForMNP10(void)
 * Address: 00062278
 */
TClassOneModem::C1IdACLCheckForMNP10(void) {
    /*
         62278:	e1a0c00d 	mov	ip, sp
         6227c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         62280:	e24cb004 	sub	fp, ip, #4	; 0x4
         62284:	e1a04000 	mov	r4, r0
         62288:	e59005c4 	ldr	r0, [r0, #1476]	; fField1476
         6228c:	e3300000 	teq	r0, #0	; 0x0
         62290:	1a000004 	bne	622a8 <TClassOneModem::C1IdACLCheckForMNP10(void)+0x30>
         62294:	e59415f4 	ldr	r1, [r4, #1524]	; fField1524
         62298:	e331003b 	teq	r1, #59	; 0x3b
         6229c:	0a000006 	beq	622bc <TClassOneModem::C1IdACLCheckForMNP10(void)+0x44>
         622a0:	e1a00004 	mov	r0, r4
         622a4:	eb66ad09 	bl	1a0d6d0 <TClassOneModem::$CheckForErrorResult(unsigned long)>
         622a8:	e3300000 	teq	r0, #0	; 0x0
         622ac:	11a01000 	movne	r1, r0
         622b0:	11a00004 	movne	r0, r4
         622b4:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         622b8:	1a66a8e8 	bne	1a0c660 <TClassOneModem::$C1IdModemComplete(long)>
         622bc:	e2840f4d 	add	r0, r4, #308	; 0x134
         622c0:	e2800b02 	add	r0, r0, #2048	; 0x800
         622c4:	eb6d45b7 	bl	1bb39a8 <$atoi>
         622c8:	e3100001 	tst	r0, #1	; 0x1
         622cc:	03a00000 	moveq	r0, #0	; 0x0
         622d0:	058407a8 	streq	r0, [r4, #1960]	; fField1960
         622d4:	e3a0000c 	mov	r0, #12	; 0xc
         622d8:	e58405b8 	str	r0, [r4, #1464]	; fField1464
         622dc:	e1a00004 	mov	r0, r4
         622e0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         622e4:	ea66b964 	b	1a1087c <TClassOneModem::$GetCommandResult(void)>
    */
}

/**
 * Symbol: TClassOneModem::C1IdACLGetMNP10CmdResponse(void)
 * Address: 000622e8
 */
TClassOneModem::C1IdACLGetMNP10CmdResponse(void) {
    /*
         622e8:	e1a0c00d 	mov	ip, sp
         622ec:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         622f0:	e24cb004 	sub	fp, ip, #4	; 0x4
         622f4:	e1a04000 	mov	r4, r0
         622f8:	e59005c4 	ldr	r0, [r0, #1476]	; fField1476
         622fc:	e3300000 	teq	r0, #0	; 0x0
         62300:	1a000013 	bne	62354 <TClassOneModem::C1IdACLGetMNP10CmdResponse(void)+0x6c>
         62304:	e59405f4 	ldr	r0, [r4, #1524]	; fField1524
         62308:	e3300000 	teq	r0, #0	; 0x0
         6230c:	13a00039 	movne	r0, #57	; 0x39
         62310:	12400c5e 	subne	r0, r0, #24064	; 0x5e00
         62314:	1a00000e 	bne	62354 <TClassOneModem::C1IdACLGetMNP10CmdResponse(void)+0x6c>
         62318:	e3a0000d 	mov	r0, #13	; 0xd
         6231c:	e3a03000 	mov	r3, #0	; 0x0
         62320:	e3a02000 	mov	r2, #0	; 0x0
         62324:	e3a01000 	mov	r1, #0	; 0x0
         62328:	e58405b8 	str	r0, [r4, #1464]	; fField1464
         6232c:	e3a00000 	mov	r0, #0	; 0x0
         62330:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         62334:	e59f1028 	ldr	r1, [pc, #28]	; 62364 <TClassOneModem::C1IdACLGetMNP10CmdResponse(void)+0x7c>	; fField28
         62338:	e1a00004 	mov	r0, r4
         6233c:	eb66a4ac 	bl	1a0b5f4 <TClassOneModem::$BuildCommand(unsigned char const *, unsigned char *, unsigned long, unsigned char *, unsigned long, unsigned char *, unsigned long)>
         62340:	e28dd010 	add	sp, sp, #16	; 0x10
         62344:	e3300000 	teq	r0, #0	; 0x0
         62348:	01a00004 	moveq	r0, r4
         6234c:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         62350:	0a66d205 	beq	1a16b6c <TClassOneModem::$PutCommand(void)>
         62354:	e1a01000 	mov	r1, r0
         62358:	e1a00004 	mov	r0, r4
         6235c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         62360:	ea66a8be 	b	1a0c660 <TClassOneModem::$C1IdModemComplete(long)>
         62364:	0036ffac 	eoreqs	pc, r6, ip, lsr #31
    */
}

/**
 * Symbol: TClassOneModem::C1IdACLSetV32bis(void)
 * Address: 00062368
 */
TClassOneModem::C1IdACLSetV32bis(void) {
    /*
         62368:	e1a0c00d 	mov	ip, sp
         6236c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         62370:	e24cb004 	sub	fp, ip, #4	; 0x4
         62374:	e1a04000 	mov	r4, r0
         62378:	e59005c4 	ldr	r0, [r0, #1476]	; fField1476
         6237c:	e3300000 	teq	r0, #0	; 0x0
         62380:	1a000017 	bne	623e4 <TClassOneModem::C1IdACLSetV32bis(void)+0x7c>
         62384:	e59405f4 	ldr	r0, [r4, #1524]	; fField1524
         62388:	e3300000 	teq	r0, #0	; 0x0
         6238c:	1a000009 	bne	623b8 <TClassOneModem::C1IdACLSetV32bis(void)+0x50>
         62390:	e3a00025 	mov	r0, #37	; 0x25
         62394:	e5c408f1 	strb	r0, [r4, #2289]	; fField2289
         62398:	e3a0000e 	mov	r0, #14	; 0xe
         6239c:	e58405b8 	str	r0, [r4, #1464]	; fField1464
         623a0:	e1a00004 	mov	r0, r4
         623a4:	e3a01015 	mov	r1, #21	; 0x15
         623a8:	eb66a487 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         623ac:	e3300000 	teq	r0, #0	; 0x0
         623b0:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         623b4:	ea00000a 	b	623e4 <TClassOneModem::C1IdACLSetV32bis(void)+0x7c>
         623b8:	e280cc5d 	add	ip, r0, #23808	; 0x5d00
         623bc:	e37c00c5 	cmn	ip, #197	; 0xc5
         623c0:	1a000005 	bne	623dc <TClassOneModem::C1IdACLSetV32bis(void)+0x74>
         623c4:	e3a0002e 	mov	r0, #46	; 0x2e
         623c8:	e59417d8 	ldr	r1, [r4, #2008]	; fField2008
         623cc:	e5a10010 	str	r0, [r1, #16]!	; fField16
         623d0:	e1a00004 	mov	r0, r4
         623d4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         623d8:	ea66a895 	b	1a0c634 <TClassOneModem::$C1IdACLSetProfile(void)>
         623dc:	e3a00039 	mov	r0, #57	; 0x39
         623e0:	e2400c5e 	sub	r0, r0, #24064	; 0x5e00
         623e4:	e1a01000 	mov	r1, r0
         623e8:	e1a00004 	mov	r0, r4
         623ec:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         623f0:	ea66a89a 	b	1a0c660 <TClassOneModem::$C1IdModemComplete(long)>
    */
}

/**
 * Symbol: TClassOneModem::C1IdACLCheckForV32bis(void)
 * Address: 000623f4
 */
TClassOneModem::C1IdACLCheckForV32bis(void) {
    /*
         623f4:	e1a0c00d 	mov	ip, sp
         623f8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         623fc:	e24cb004 	sub	fp, ip, #4	; 0x4
         62400:	e1a04000 	mov	r4, r0
         62404:	e59005c4 	ldr	r0, [r0, #1476]	; fField1476
         62408:	e3300000 	teq	r0, #0	; 0x0
         6240c:	1a000004 	bne	62424 <TClassOneModem::C1IdACLCheckForV32bis(void)+0x30>
         62410:	e59415f4 	ldr	r1, [r4, #1524]	; fField1524
         62414:	e331003b 	teq	r1, #59	; 0x3b
         62418:	0a000006 	beq	62438 <TClassOneModem::C1IdACLCheckForV32bis(void)+0x44>
         6241c:	e1a00004 	mov	r0, r4
         62420:	eb66acaa 	bl	1a0d6d0 <TClassOneModem::$CheckForErrorResult(unsigned long)>
         62424:	e3300000 	teq	r0, #0	; 0x0
         62428:	11a01000 	movne	r1, r0
         6242c:	11a00004 	movne	r0, r4
         62430:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         62434:	1a66a889 	bne	1a0c660 <TClassOneModem::$C1IdModemComplete(long)>
         62438:	e2840f4d 	add	r0, r4, #308	; 0x134
         6243c:	e2800b02 	add	r0, r0, #2048	; 0x800
         62440:	eb6d4558 	bl	1bb39a8 <$atoi>
         62444:	e200000f 	and	r0, r0, #15	; 0xf
         62448:	e330000b 	teq	r0, #11	; 0xb
         6244c:	13a0102e 	movne	r1, #46	; 0x2e
         62450:	03a010fe 	moveq	r1, #254	; 0xfe
         62454:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         62458:	e5a01010 	str	r1, [r0, #16]!	; fField16
         6245c:	e3a0000f 	mov	r0, #15	; 0xf
         62460:	e58405b8 	str	r0, [r4, #1464]	; fField1464
         62464:	e1a00004 	mov	r0, r4
         62468:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         6246c:	ea66b902 	b	1a1087c <TClassOneModem::$GetCommandResult(void)>
    */
}

/**
 * Symbol: TClassOneModem::C1IdACLCheckV32bisCmdResponse(void)
 * Address: 00062470
 */
TClassOneModem::C1IdACLCheckV32bisCmdResponse(void) {
    /*
         62470:	e1a0c00d 	mov	ip, sp
         62474:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         62478:	e24cb004 	sub	fp, ip, #4	; 0x4
         6247c:	e1a04000 	mov	r4, r0
         62480:	e59005c4 	ldr	r0, [r0, #1476]	; fField1476
         62484:	e3300000 	teq	r0, #0	; 0x0
         62488:	1a000013 	bne	624dc <TClassOneModem::C1IdACLCheckV32bisCmdResponse(void)+0x6c>
         6248c:	e59405f4 	ldr	r0, [r4, #1524]	; fField1524
         62490:	e3300000 	teq	r0, #0	; 0x0
         62494:	13a00039 	movne	r0, #57	; 0x39
         62498:	12400c5e 	subne	r0, r0, #24064	; 0x5e00
         6249c:	1a00000e 	bne	624dc <TClassOneModem::C1IdACLCheckV32bisCmdResponse(void)+0x6c>
         624a0:	e3a00010 	mov	r0, #16	; 0x10
         624a4:	e3a03000 	mov	r3, #0	; 0x0
         624a8:	e3a02000 	mov	r2, #0	; 0x0
         624ac:	e3a01000 	mov	r1, #0	; 0x0
         624b0:	e58405b8 	str	r0, [r4, #1464]	; fField1464
         624b4:	e3a00000 	mov	r0, #0	; 0x0
         624b8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         624bc:	e59f1028 	ldr	r1, [pc, #28]	; 624ec <TClassOneModem::C1IdACLCheckV32bisCmdResponse(void)+0x7c>	; fField28
         624c0:	e1a00004 	mov	r0, r4
         624c4:	eb66a44a 	bl	1a0b5f4 <TClassOneModem::$BuildCommand(unsigned char const *, unsigned char *, unsigned long, unsigned char *, unsigned long, unsigned char *, unsigned long)>
         624c8:	e28dd010 	add	sp, sp, #16	; 0x10
         624cc:	e3300000 	teq	r0, #0	; 0x0
         624d0:	01a00004 	moveq	r0, r4
         624d4:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         624d8:	0a66d1a3 	beq	1a16b6c <TClassOneModem::$PutCommand(void)>
         624dc:	e1a01000 	mov	r1, r0
         624e0:	e1a00004 	mov	r0, r4
         624e4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         624e8:	ea66a85c 	b	1a0c660 <TClassOneModem::$C1IdModemComplete(long)>
         624ec:	0036ffb4 	ldreqh	pc, [r6], -r4
    */
}

/**
 * Symbol: TClassOneModem::C1IdACLCheckSetAutoModeResponse(void)
 * Address: 000624f0
 */
TClassOneModem::C1IdACLCheckSetAutoModeResponse(void) {
    /*
         624f0:	e1a0c00d 	mov	ip, sp
         624f4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         624f8:	e24cb004 	sub	fp, ip, #4	; 0x4
         624fc:	e1a04000 	mov	r4, r0
         62500:	e59005c4 	ldr	r0, [r0, #1476]	; fField1476
         62504:	e3300000 	teq	r0, #0	; 0x0
         62508:	059415f4 	ldreq	r1, [r4, #1524]	; fField1524
         6250c:	01a00004 	moveq	r0, r4
         62510:	0b66ac6e 	bleq	1a0d6d0 <TClassOneModem::$CheckForErrorResult(unsigned long)>
         62514:	e3300000 	teq	r0, #0	; 0x0
         62518:	11a01000 	movne	r1, r0
         6251c:	e1a00004 	mov	r0, r4
         62520:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         62524:	0a66a842 	beq	1a0c634 <TClassOneModem::$C1IdACLSetProfile(void)>
         62528:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         6252c:	1a66a84b 	bne	1a0c660 <TClassOneModem::$C1IdModemComplete(long)>
    */
}

/**
 * Symbol: TClassOneModem::HandleReply(unsigned long, unsigned long)
 * Address: 00062530
 */
TClassOneModem::HandleReply(unsigned long, unsigned long) {
    /*
         62530:	ea6d76b0 	b	1bbfff8 <TCommTool::$HandleReply(unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TClassOneModem::C1IdACLSetProfile(void)
 * Address: 00062534
 */
TClassOneModem::C1IdACLSetProfile(void) {
    /*
         62534:	e1a0c00d 	mov	ip, sp
         62538:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         6253c:	e24cb004 	sub	fp, ip, #4	; 0x4
         62540:	e1a04000 	mov	r4, r0
         62544:	e3a05000 	mov	r5, #0	; 0x0
         62548:	e56d5004 	strb	r5, [sp, -#4]!	; fField4
         6254c:	e59f00d8 	ldr	r0, [pc, #d8]	; 6262c <TClassOneModem::C1IdACLSetProfile(void)+0xf8>
         62550:	e5840798 	str	r0, [r4, #1944]	; fField1944
         62554:	e59f00d4 	ldr	r0, [pc, #d4]	; 62630 <TClassOneModem::C1IdACLSetProfile(void)+0xfc>
         62558:	e584079c 	str	r0, [r4, #1948]	; fField1948
         6255c:	e59f00d0 	ldr	r0, [pc, #d0]	; 62634 <TClassOneModem::C1IdACLSetProfile(void)+0x100>
         62560:	e58407a0 	str	r0, [r4, #1952]	; fField1952
         62564:	e59f00cc 	ldr	r0, [pc, #cc]	; 62638 <TClassOneModem::C1IdACLSetProfile(void)+0x104>
         62568:	e58407a4 	str	r0, [r4, #1956]	; fField1956
         6256c:	e59407a8 	ldr	r0, [r4, #1960]	; fField1960
         62570:	e3300000 	teq	r0, #0	; 0x0
         62574:	159f00c0 	ldrne	r0, [pc, #c0]	; 6263c <TClassOneModem::C1IdACLSetProfile(void)+0x108>
         62578:	01a0000d 	moveq	r0, sp
         6257c:	e58407a8 	str	r0, [r4, #1960]	; fField1960
         62580:	e59f00b8 	ldr	r0, [pc, #b8]	; 62640 <TClassOneModem::C1IdACLSetProfile(void)+0x10c>
         62584:	e58407ac 	str	r0, [r4, #1964]	; fField1964
         62588:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         6258c:	e5b06010 	ldr	r6, [r0, #16]!	; fField16
         62590:	e1a00004 	mov	r0, r4
         62594:	eb66ddc8 	bl	1a19cbc <TClassOneModem::$SetModemProfile(void)>
         62598:	e3300000 	teq	r0, #0	; 0x0
         6259c:	1a000028 	bne	62644 <TClassOneModem::C1IdACLSetProfile(void)+0x110>
         625a0:	e59407a8 	ldr	r0, [r4, #1960]	; fField1960
         625a4:	e130000d 	teq	r0, sp
         625a8:	13a00001 	movne	r0, #1	; 0x1
         625ac:	03a00000 	moveq	r0, #0	; 0x0
         625b0:	e59417d8 	ldr	r1, [r4, #2008]	; fField2008
         625b4:	e5c1000c 	strb	r0, [r1, #12]	; fField12
         625b8:	e3a01001 	mov	r1, #1	; 0x1
         625bc:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         625c0:	e5c0100d 	strb	r1, [r0, #13]
         625c4:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         625c8:	e5c0500f 	strb	r5, [r0, #15]
         625cc:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         625d0:	e3a01c96 	mov	r1, #38400	; 0x9600
         625d4:	e5a06010 	str	r6, [r0, #16]!	; fField16
         625d8:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         625dc:	e5a01014 	str	r1, [r0, #20]!	; fField20
         625e0:	e3a01f7d 	mov	r1, #500	; 0x1f4
         625e4:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         625e8:	e5a01018 	str	r1, [r0, #24]!	; fField24
         625ec:	e3a010fc 	mov	r1, #252	; 0xfc
         625f0:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         625f4:	e5a0101c 	str	r1, [r0, #28]!	; fField28
         625f8:	e3a01019 	mov	r1, #25	; 0x19
         625fc:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         62600:	e5a01020 	str	r1, [r0, #32]!	; fField32
         62604:	e5c458f1 	strb	r5, [r4, #2289]	; fField2289
         62608:	e5c458f2 	strb	r5, [r4, #2290]	; fField2290
         6260c:	e3a00013 	mov	r0, #19	; 0x13
         62610:	e58405b8 	str	r0, [r4, #1464]	; fField1464
         62614:	e1a00004 	mov	r0, r4
         62618:	e3a01014 	mov	r1, #20	; 0x14
         6261c:	eb66a3ea 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         62620:	e3300000 	teq	r0, #0	; 0x0
         62624:	1a000006 	bne	62644 <TClassOneModem::C1IdACLSetProfile(void)+0x110>
         62628:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         6262c:	0036ff7c 	eoreqs	pc, r6, ip, ror pc
         62630:	0036fff0 	ldreqsh	pc, [r6], -r0
         62634:	00370008 	eoreqs	r0, r7, r8
         62638:	00370024 	eoreqs	r0, r7, r4, lsr #32
         6263c:	00370054 	eoreqs	r0, r7, r4, asr r0
         62640:	0037003c 	eoreqs	r0, r7, ip, lsr r0
         62644:	e1a01000 	mov	r1, r0
         62648:	e1a00004 	mov	r0, r4
         6264c:	eb66a803 	bl	1a0c660 <TClassOneModem::$C1IdModemComplete(long)>
         62650:	eafffff4 	b	62628 <TClassOneModem::C1IdACLSetProfile(void)+0xf4>
    */
}

/**
 * Symbol: TClassOneModem::C1IdCheck4HCode(void)
 * Address: 00062654
 */
TClassOneModem::C1IdCheck4HCode(void) {
    /*
         62654:	e1a0c00d 	mov	ip, sp
         62658:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6265c:	e24cb004 	sub	fp, ip, #4	; 0x4
         62660:	e1a04000 	mov	r4, r0
         62664:	e59015c4 	ldr	r1, [r0, #1476]	; fField1476
         62668:	e3310000 	teq	r1, #0	; 0x0
         6266c:	11a00004 	movne	r0, r4
         62670:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         62674:	1a66a7f9 	bne	1a0c660 <TClassOneModem::$C1IdModemComplete(long)>
         62678:	e2840f4d 	add	r0, r4, #308	; 0x134
         6267c:	e2800b02 	add	r0, r0, #2048	; 0x800
         62680:	eb6d4d0a 	bl	1bb5ab0 <$strlen>
         62684:	e330000d 	teq	r0, #13	; 0xd
         62688:	1a000006 	bne	626a8 <TClassOneModem::C1IdCheck4HCode(void)+0x54>
         6268c:	e2841039 	add	r1, r4, #57	; 0x39
         62690:	e2811c09 	add	r1, r1, #2304	; 0x900
         62694:	e59f0020 	ldr	r0, [pc, #20]	; 626bc <TClassOneModem::C1IdCheck4HCode(void)+0x68>	; fField20
         62698:	eb6d4d02 	bl	1bb5aa8 <$strcmp>
         6269c:	e3300000 	teq	r0, #0	; 0x0
         626a0:	03a00001 	moveq	r0, #1	; 0x1
         626a4:	05c408f3 	streqb	r0, [r4, #2291]	; fField2291
         626a8:	e3a00012 	mov	r0, #18	; 0x12
         626ac:	e58405b8 	str	r0, [r4, #1464]	; fField1464
         626b0:	e1a00004 	mov	r0, r4
         626b4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         626b8:	ea66b86f 	b	1a1087c <TClassOneModem::$GetCommandResult(void)>
         626bc:	0036ff20 	eoreqs	pc, r6, r0, lsr #30
    */
}

/**
 * Symbol: TClassOneModem::C1IdGetCheck4HCodeCmdResponse(void)
 * Address: 000626c0
 */
TClassOneModem::C1IdGetCheck4HCodeCmdResponse(void) {
    /*
         626c0:	e1a0c00d 	mov	ip, sp
         626c4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         626c8:	e24cb004 	sub	fp, ip, #4	; 0x4
         626cc:	e1a04000 	mov	r4, r0
         626d0:	e3a00000 	mov	r0, #0	; 0x0
         626d4:	e5c408f1 	strb	r0, [r4, #2289]	; fField2289
         626d8:	e5c408f2 	strb	r0, [r4, #2290]	; fField2290
         626dc:	e3a00013 	mov	r0, #19	; 0x13
         626e0:	e58405b8 	str	r0, [r4, #1464]	; fField1464
         626e4:	e1a00004 	mov	r0, r4
         626e8:	e3a01014 	mov	r1, #20	; 0x14
         626ec:	eb66a3b6 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         626f0:	e3300000 	teq	r0, #0	; 0x0
         626f4:	11a01000 	movne	r1, r0
         626f8:	11a00004 	movne	r0, r4
         626fc:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         62700:	1a66a7d6 	bne	1a0c660 <TClassOneModem::$C1IdModemComplete(long)>
         62704:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TClassOneModem::C1IdSetS0(void)
 * Address: 00062708
 */
TClassOneModem::C1IdSetS0(void) {
    /*
         62708:	e1a0c00d 	mov	ip, sp
         6270c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         62710:	e24cb004 	sub	fp, ip, #4	; 0x4
         62714:	e1a04000 	mov	r4, r0
         62718:	e59005c4 	ldr	r0, [r0, #1476]	; fField1476
         6271c:	e3300000 	teq	r0, #0	; 0x0
         62720:	059415f4 	ldreq	r1, [r4, #1524]	; fField1524
         62724:	01a00004 	moveq	r0, r4
         62728:	0b66abe8 	bleq	1a0d6d0 <TClassOneModem::$CheckForErrorResult(unsigned long)>
         6272c:	e3300000 	teq	r0, #0	; 0x0
         62730:	1a000006 	bne	62750 <TClassOneModem::C1IdSetS0(void)+0x48>
         62734:	e3a00014 	mov	r0, #20	; 0x14
         62738:	e58405b8 	str	r0, [r4, #1464]	; fField1464
         6273c:	e1a00004 	mov	r0, r4
         62740:	e3a0100a 	mov	r1, #10	; 0xa
         62744:	eb66a3a0 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         62748:	e3300000 	teq	r0, #0	; 0x0
         6274c:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         62750:	e1a01000 	mov	r1, r0
         62754:	e1a00004 	mov	r0, r4
         62758:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         6275c:	ea66a7bf 	b	1a0c660 <TClassOneModem::$C1IdModemComplete(long)>
    */
}

/**
 * Symbol: TClassOneModem::C1IdCheckForLCS(void)
 * Address: 00062760
 */
TClassOneModem::C1IdCheckForLCS(void) {
    /*
         62760:	e1a0c00d 	mov	ip, sp
         62764:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         62768:	e24cb004 	sub	fp, ip, #4	; 0x4
         6276c:	e1a04000 	mov	r4, r0
         62770:	e59005c4 	ldr	r0, [r0, #1476]	; fField1476
         62774:	e3300000 	teq	r0, #0	; 0x0
         62778:	059415f4 	ldreq	r1, [r4, #1524]	; fField1524
         6277c:	01a00004 	moveq	r0, r4
         62780:	0b66abd2 	bleq	1a0d6d0 <TClassOneModem::$CheckForErrorResult(unsigned long)>
         62784:	e280cc5d 	add	ip, r0, #23808	; 0x5d00
         62788:	e37c00c7 	cmn	ip, #199	; 0xc7
         6278c:	11a00004 	movne	r0, r4
         62790:	13a01000 	movne	r1, #0	; 0x0
         62794:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         62798:	1a66a7b0 	bne	1a0c660 <TClassOneModem::$C1IdModemComplete(long)>
         6279c:	e2841f4d 	add	r1, r4, #308	; 0x134
         627a0:	e2811b02 	add	r1, r1, #2048	; 0x800
         627a4:	e59f0018 	ldr	r0, [pc, #18]	; 627c4 <TClassOneModem::C1IdCheckForLCS(void)+0x64>
         627a8:	eb6d4cbe 	bl	1bb5aa8 <$strcmp>
         627ac:	e3300000 	teq	r0, #0	; 0x0
         627b0:	03a00001 	moveq	r0, #1	; 0x1
         627b4:	05c40824 	streqb	r0, [r4, #2084]	; fField2084
         627b8:	e1a00004 	mov	r0, r4
         627bc:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         627c0:	ea66b82d 	b	1a1087c <TClassOneModem::$GetCommandResult(void)>
         627c4:	0036fde8 	eoreqs	pc, r6, r8, ror #27
    */
}

/**
 * Symbol: TClassOneModem::C1GetCapStart(void)
 * Address: 000627c8
 */
TClassOneModem::C1GetCapStart(void) {
    /*
         627c8:	e3a02000 	mov	r2, #0	; 0x0
         627cc:	e5901188 	ldr	r1, [r0, #392]	; fField392
         627d0:	e5a12014 	str	r2, [r1, #20]!	; fField20
         627d4:	e5901188 	ldr	r1, [r0, #392]	; fField392
         627d8:	e5a12018 	str	r2, [r1, #24]!	; fField24
         627dc:	e3a01001 	mov	r1, #1	; 0x1
         627e0:	e5903188 	ldr	r3, [r0, #392]	; fField392
         627e4:	e5a3101c 	str	r1, [r3, #28]!	; fField28
         627e8:	e5903188 	ldr	r3, [r0, #392]	; fField392
         627ec:	e5a32020 	str	r2, [r3, #32]!	; fField32
         627f0:	e5902188 	ldr	r2, [r0, #392]	; fField392
         627f4:	e5a21024 	str	r1, [r2, #36]!	; fField36
         627f8:	e59025b0 	ldr	r2, [r0, #1456]	; fField1456
         627fc:	e3822801 	orr	r2, r2, #65536	; 0x10000
         62800:	e58025b0 	str	r2, [r0, #1456]	; fField1456
         62804:	e59f200c 	ldr	r2, [pc, #c]	; 62818 <TClassOneModem::C1GetCapStart(void)+0x50>
         62808:	e58015c0 	str	r1, [r0, #1472]	; fField1472
         6280c:	e3a01000 	mov	r1, #0	; 0x0
         62810:	e5802b94 	str	r2, [r0, #2964]	; fField2964
         62814:	ea670684 	b	1a2422c <TClassOneModem::$C1GetCapContinue(long)>
         62818:	6d666178 	stfvse	f6, [r6, -#480]!
    */
}

/**
 * Symbol: TClassOneModem::C1GetCapContinue(long)
 * Address: 0006281c
 */
TClassOneModem::C1GetCapContinue(long) {
    /*
         6281c:	e1a0c00d 	mov	ip, sp
         62820:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         62824:	e24cb004 	sub	fp, ip, #4	; 0x4
         62828:	e1a04000 	mov	r4, r0
         6282c:	e1a05001 	mov	r5, r1
         62830:	e5d008f5 	ldrb	r0, [r0, #2293]	; fField2293
         62834:	e3300000 	teq	r0, #0	; 0x0
         62838:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         6283c:	e3a02d89 	mov	r2, #8768	; 0x2240
         62840:	e2422902 	sub	r2, r2, #32768	; 0x8000
         62844:	e3a06004 	mov	r6, #4	; 0x4
         62848:	e1350002 	teq	r5, r2
         6284c:	058465f4 	streq	r6, [r4, #1524]	; fField1524
         62850:	0a000001 	beq	6285c <TClassOneModem::C1GetCapContinue(long)+0x40>
         62854:	e3350000 	teq	r5, #0	; 0x0
         62858:	1a0000ba 	bne	62b48 <TClassOneModem::C1GetCapContinue(long)+0x32c>
         6285c:	e59435c0 	ldr	r3, [r4, #1472]	; fField1472
         62860:	e2840e89 	add	r0, r4, #2192	; 0x890
         62864:	e2841078 	add	r1, r4, #120	; 0x78
         62868:	e2811b02 	add	r1, r1, #2048	; 0x800
         6286c:	e353000d 	cmp	r3, #13	; 0xd
         62870:	908ff103 	addls	pc, pc, r3, lsl #2
         62874:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         62878:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         6287c:	ea000020 	b	62904 <TClassOneModem::C1GetCapContinue(long)+0xe8>
         62880:	ea000041 	b	6298c <TClassOneModem::C1GetCapContinue(long)+0x170>
         62884:	ea000026 	b	62924 <TClassOneModem::C1GetCapContinue(long)+0x108>
         62888:	ea00002e 	b	62948 <TClassOneModem::C1GetCapContinue(long)+0x12c>
         6288c:	ea000055 	b	629e8 <TClassOneModem::C1GetCapContinue(long)+0x1cc>
         62890:	ea00005d 	b	62a0c <TClassOneModem::C1GetCapContinue(long)+0x1f0>
         62894:	ea000068 	b	62a3c <TClassOneModem::C1GetCapContinue(long)+0x220>
         62898:	ea000070 	b	62a60 <TClassOneModem::C1GetCapContinue(long)+0x244>
         6289c:	ea00007b 	b	62a90 <TClassOneModem::C1GetCapContinue(long)+0x274>
         628a0:	ea000083 	b	62ab4 <TClassOneModem::C1GetCapContinue(long)+0x298>
         628a4:	ea00008e 	b	62ae4 <TClassOneModem::C1GetCapContinue(long)+0x2c8>
         628a8:	ea000097 	b	62b0c <TClassOneModem::C1GetCapContinue(long)+0x2f0>
         628ac:	e1350002 	teq	r5, r2
         628b0:	159405f4 	ldrne	r0, [r4, #1524]	; fField1524
         628b4:	13300000 	teqne	r0, #0	; 0x0
         628b8:	03a05000 	moveq	r5, #0	; 0x0
         628bc:	159f503c 	ldrne	r5, [pc, #3c]	; 62900 <TClassOneModem::C1GetCapContinue(long)+0xe4>
         628c0:	e59408a4 	ldr	r0, [r4, #2212]	; fField2212
         628c4:	e3300001 	teq	r0, #1	; 0x1
         628c8:	1a00009e 	bne	62b48 <TClassOneModem::C1GetCapContinue(long)+0x32c>
         628cc:	e5940784 	ldr	r0, [r4, #1924]	; fField1924
         628d0:	e59417d8 	ldr	r1, [r4, #2008]	; fField2008
         628d4:	e5911014 	ldr	r1, [r1, #20]	; fField20
         628d8:	e1300001 	teq	r0, r1
         628dc:	0a000099 	beq	62b48 <TClassOneModem::C1GetCapContinue(long)+0x32c>
         628e0:	e3a03008 	mov	r3, #8	; 0x8
         628e4:	e92d0008 	stmdb	sp!, {r3}
         628e8:	e1a00004 	mov	r0, r4
         628ec:	e3a03000 	mov	r3, #0	; 0x0
         628f0:	e3a02000 	mov	r2, #0	; 0x0
         628f4:	eb66d8cc 	bl	1a18c2c <TClassOneModem::$ResetSerialDrvr(unsigned long, long, long, long)>
         628f8:	e28dd004 	add	sp, sp, #4	; 0x4
         628fc:	ea000091 	b	62b48 <TClassOneModem::C1GetCapContinue(long)+0x32c>
         62900:	ffffa23b 	swinv	0x00ffa23b
         62904:	e3a00003 	mov	r0, #3	; 0x3
         62908:	e58405c0 	str	r0, [r4, #1472]	; fField1472
         6290c:	e1a00004 	mov	r0, r4
         62910:	e3a01016 	mov	r1, #22	; 0x16
         62914:	eb66a32c 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         62918:	e1b05000 	movs	r5, r0
         6291c:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         62920:	ea000088 	b	62b48 <TClassOneModem::C1GetCapContinue(long)+0x32c>
         62924:	e59405f4 	ldr	r0, [r4, #1524]	; fField1524
         62928:	e330003b 	teq	r0, #59	; 0x3b
         6292c:	1a000085 	bne	62b48 <TClassOneModem::C1GetCapContinue(long)+0x32c>
         62930:	e5940188 	ldr	r0, [r4, #392]	; fField392
         62934:	e2801014 	add	r1, r0, #20	; 0x14
         62938:	e1a00004 	mov	r0, r4
         6293c:	eb67063b 	bl	1a24230 <TClassOneModem::$C1GetCapExtractResult(unsigned long *)>
         62940:	e58465c0 	str	r6, [r4, #1472]	; fField1472
         62944:	ea000083 	b	62b58 <TClassOneModem::C1GetCapContinue(long)+0x33c>
         62948:	e1350002 	teq	r5, r2
         6294c:	159425f4 	ldrne	r2, [r4, #1524]	; fField1524
         62950:	13320000 	teqne	r2, #0	; 0x0
         62954:	1a00007f 	bne	62b58 <TClassOneModem::C1GetCapContinue(long)+0x33c>
         62958:	e8b15008 	ldmia	r1!, {r3, ip, lr}
         6295c:	e8a05008 	stmia	r0!, {r3, ip, lr}
         62960:	e8915008 	ldmia	r1, {r3, ip, lr}
         62964:	e8805008 	stmia	r0, {r3, ip, lr}
         62968:	e3a00002 	mov	r0, #2	; 0x2
         6296c:	e584088c 	str	r0, [r4, #2188]	; fField2188
         62970:	e58405c0 	str	r0, [r4, #1472]	; fField1472
         62974:	e1a00004 	mov	r0, r4
         62978:	e3a01002 	mov	r1, #2	; 0x2
         6297c:	eb66a312 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         62980:	e1b05000 	movs	r5, r0
         62984:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         62988:	ea00006e 	b	62b48 <TClassOneModem::C1GetCapContinue(long)+0x32c>
         6298c:	e59405f4 	ldr	r0, [r4, #1524]	; fField1524
         62990:	e3300000 	teq	r0, #0	; 0x0
         62994:	1a00006b 	bne	62b48 <TClassOneModem::C1GetCapContinue(long)+0x32c>
         62998:	e59407d8 	ldr	r0, [r4, #2008]	; fField2008
         6299c:	e5900014 	ldr	r0, [r0, #20]	; fField20
         629a0:	e3300c4b 	teq	r0, #19200	; 0x4b00
         629a4:	0a000007 	beq	629c8 <TClassOneModem::C1GetCapContinue(long)+0x1ac>
         629a8:	e3a03008 	mov	r3, #8	; 0x8
         629ac:	e92d0008 	stmdb	sp!, {r3}
         629b0:	e1a00004 	mov	r0, r4
         629b4:	e3a03000 	mov	r3, #0	; 0x0
         629b8:	e3a02000 	mov	r2, #0	; 0x0
         629bc:	e3a01c4b 	mov	r1, #19200	; 0x4b00
         629c0:	eb66d899 	bl	1a18c2c <TClassOneModem::$ResetSerialDrvr(unsigned long, long, long, long)>
         629c4:	e28dd004 	add	sp, sp, #4	; 0x4
         629c8:	e3a00005 	mov	r0, #5	; 0x5
         629cc:	e58405c0 	str	r0, [r4, #1472]	; fField1472
         629d0:	e1a00004 	mov	r0, r4
         629d4:	e3a01017 	mov	r1, #23	; 0x17
         629d8:	eb66a2fb 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         629dc:	e1b05000 	movs	r5, r0
         629e0:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         629e4:	ea000057 	b	62b48 <TClassOneModem::C1GetCapContinue(long)+0x32c>
         629e8:	e59405f4 	ldr	r0, [r4, #1524]	; fField1524
         629ec:	e330003b 	teq	r0, #59	; 0x3b
         629f0:	1a000054 	bne	62b48 <TClassOneModem::C1GetCapContinue(long)+0x32c>
         629f4:	e5940188 	ldr	r0, [r4, #392]	; fField392
         629f8:	e2801018 	add	r1, r0, #24	; 0x18
         629fc:	e1a00004 	mov	r0, r4
         62a00:	eb67060a 	bl	1a24230 <TClassOneModem::$C1GetCapExtractResult(unsigned long *)>
         62a04:	e3a00006 	mov	r0, #6	; 0x6
         62a08:	ea00003d 	b	62b04 <TClassOneModem::C1GetCapContinue(long)+0x2e8>
         62a0c:	e1350002 	teq	r5, r2
         62a10:	159405f4 	ldrne	r0, [r4, #1524]	; fField1524
         62a14:	13300000 	teqne	r0, #0	; 0x0
         62a18:	1a00004e 	bne	62b58 <TClassOneModem::C1GetCapContinue(long)+0x33c>
         62a1c:	e3a00007 	mov	r0, #7	; 0x7
         62a20:	e58405c0 	str	r0, [r4, #1472]	; fField1472
         62a24:	e1a00004 	mov	r0, r4
         62a28:	e3a01018 	mov	r1, #24	; 0x18
         62a2c:	eb66a2e6 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         62a30:	e1b05000 	movs	r5, r0
         62a34:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         62a38:	ea000042 	b	62b48 <TClassOneModem::C1GetCapContinue(long)+0x32c>
         62a3c:	e59405f4 	ldr	r0, [r4, #1524]	; fField1524
         62a40:	e330003b 	teq	r0, #59	; 0x3b
         62a44:	1a00003f 	bne	62b48 <TClassOneModem::C1GetCapContinue(long)+0x32c>
         62a48:	e5940188 	ldr	r0, [r4, #392]	; fField392
         62a4c:	e280101c 	add	r1, r0, #28	; 0x1c
         62a50:	e1a00004 	mov	r0, r4
         62a54:	eb6705f5 	bl	1a24230 <TClassOneModem::$C1GetCapExtractResult(unsigned long *)>
         62a58:	e3a00008 	mov	r0, #8	; 0x8
         62a5c:	ea000028 	b	62b04 <TClassOneModem::C1GetCapContinue(long)+0x2e8>
         62a60:	e1350002 	teq	r5, r2
         62a64:	159405f4 	ldrne	r0, [r4, #1524]	; fField1524
         62a68:	13300000 	teqne	r0, #0	; 0x0
         62a6c:	1a000039 	bne	62b58 <TClassOneModem::C1GetCapContinue(long)+0x33c>
         62a70:	e3a00009 	mov	r0, #9	; 0x9
         62a74:	e58405c0 	str	r0, [r4, #1472]	; fField1472
         62a78:	e1a00004 	mov	r0, r4
         62a7c:	e3a01019 	mov	r1, #25	; 0x19
         62a80:	eb66a2d1 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         62a84:	e1b05000 	movs	r5, r0
         62a88:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         62a8c:	ea00002d 	b	62b48 <TClassOneModem::C1GetCapContinue(long)+0x32c>
         62a90:	e59405f4 	ldr	r0, [r4, #1524]	; fField1524
         62a94:	e330003b 	teq	r0, #59	; 0x3b
         62a98:	1a00002a 	bne	62b48 <TClassOneModem::C1GetCapContinue(long)+0x32c>
         62a9c:	e5940188 	ldr	r0, [r4, #392]	; fField392
         62aa0:	e2801020 	add	r1, r0, #32	; 0x20
         62aa4:	e1a00004 	mov	r0, r4
         62aa8:	eb6705e0 	bl	1a24230 <TClassOneModem::$C1GetCapExtractResult(unsigned long *)>
         62aac:	e3a0000a 	mov	r0, #10	; 0xa
         62ab0:	ea000013 	b	62b04 <TClassOneModem::C1GetCapContinue(long)+0x2e8>
         62ab4:	e1350002 	teq	r5, r2
         62ab8:	159405f4 	ldrne	r0, [r4, #1524]	; fField1524
         62abc:	13300000 	teqne	r0, #0	; 0x0
         62ac0:	1a000024 	bne	62b58 <TClassOneModem::C1GetCapContinue(long)+0x33c>
         62ac4:	e3a0000b 	mov	r0, #11	; 0xb
         62ac8:	e58405c0 	str	r0, [r4, #1472]	; fField1472
         62acc:	e1a00004 	mov	r0, r4
         62ad0:	e3a0101a 	mov	r1, #26	; 0x1a
         62ad4:	eb66a2bc 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         62ad8:	e1b05000 	movs	r5, r0
         62adc:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         62ae0:	ea000018 	b	62b48 <TClassOneModem::C1GetCapContinue(long)+0x32c>
         62ae4:	e59405f4 	ldr	r0, [r4, #1524]	; fField1524
         62ae8:	e330003b 	teq	r0, #59	; 0x3b
         62aec:	1a000015 	bne	62b48 <TClassOneModem::C1GetCapContinue(long)+0x32c>
         62af0:	e5940188 	ldr	r0, [r4, #392]	; fField392
         62af4:	e2801024 	add	r1, r0, #36	; 0x24
         62af8:	e1a00004 	mov	r0, r4
         62afc:	eb6705cb 	bl	1a24230 <TClassOneModem::$C1GetCapExtractResult(unsigned long *)>
         62b00:	e3a0000c 	mov	r0, #12	; 0xc
         62b04:	e58405c0 	str	r0, [r4, #1472]	; fField1472
         62b08:	ea000012 	b	62b58 <TClassOneModem::C1GetCapContinue(long)+0x33c>
         62b0c:	e1350002 	teq	r5, r2
         62b10:	159425f4 	ldrne	r2, [r4, #1524]	; fField1524
         62b14:	13320000 	teqne	r2, #0	; 0x0
         62b18:	1a00000e 	bne	62b58 <TClassOneModem::C1GetCapContinue(long)+0x33c>
         62b1c:	e8b05008 	ldmia	r0!, {r3, ip, lr}
         62b20:	e8a15008 	stmia	r1!, {r3, ip, lr}
         62b24:	e8905008 	ldmia	r0, {r3, ip, lr}
         62b28:	e8815008 	stmia	r1, {r3, ip, lr}
         62b2c:	e3a0000d 	mov	r0, #13	; 0xd
         62b30:	e58405c0 	str	r0, [r4, #1472]	; fField1472
         62b34:	e1a00004 	mov	r0, r4
         62b38:	e3a01002 	mov	r1, #2	; 0x2
         62b3c:	eb66a2a2 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         62b40:	e1b05000 	movs	r5, r0
         62b44:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         62b48:	e1a01005 	mov	r1, r5
         62b4c:	e1a00004 	mov	r0, r4
         62b50:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         62b54:	ea6705b3 	b	1a24228 <TClassOneModem::$C1GetCapComplete(long)>
         62b58:	e1a00004 	mov	r0, r4
         62b5c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         62b60:	ea66b745 	b	1a1087c <TClassOneModem::$GetCommandResult(void)>
    */
}

/**
 * Symbol: TClassOneModem::C1GetCapExtractResult(unsigned long *)
 * Address: 00062b64
 */
TClassOneModem::C1GetCapExtractResult(unsigned long *) {
    /*
         62b64:	e1a0c00d 	mov	ip, sp
         62b68:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         62b6c:	e24cb004 	sub	fp, ip, #4	; 0x4
         62b70:	e1a05000 	mov	r5, r0
         62b74:	e1a04001 	mov	r4, r1
         62b78:	e24dd00c 	sub	sp, sp, #12	; 0xc
         62b7c:	e2806f4d 	add	r6, r0, #308	; 0x134
         62b80:	e2866b02 	add	r6, r6, #2048	; 0x800
         62b84:	e3a00000 	mov	r0, #0	; 0x0
         62b88:	e3a07000 	mov	r7, #0	; 0x0
         62b8c:	e3a08000 	mov	r8, #0	; 0x0
         62b90:	e5d62000 	ldrb	r2, [r6]
         62b94:	e3320000 	teq	r2, #0	; 0x0
         62b98:	0a000002 	beq	62ba8 <TClassOneModem::C1GetCapExtractResult(unsigned long *)+0x44>
         62b9c:	e332002c 	teq	r2, #44	; 0x2c
         62ba0:	1a000051 	bne	62cec <TClassOneModem::C1GetCapExtractResult(unsigned long *)+0x188>
         62ba4:	ea000000 	b	62bac <TClassOneModem::C1GetCapExtractResult(unsigned long *)+0x48>
         62ba8:	e3a07001 	mov	r7, #1	; 0x1
         62bac:	e7cd8000 	strb	r8, [sp, r0]
         62bb0:	e1a0000d 	mov	r0, sp
         62bb4:	eb6d437b 	bl	1bb39a8 <$atoi>
         62bb8:	e59515c0 	ldr	r1, [r5, #1472]	; fField1472
         62bbc:	e3310003 	teq	r1, #3	; 0x3
         62bc0:	1a000014 	bne	62c18 <TClassOneModem::C1GetCapExtractResult(unsigned long *)+0xb4>
         62bc4:	e3300000 	teq	r0, #0	; 0x0
         62bc8:	0a000006 	beq	62be8 <TClassOneModem::C1GetCapExtractResult(unsigned long *)+0x84>
         62bcc:	e3300001 	teq	r0, #1	; 0x1
         62bd0:	0a000007 	beq	62bf4 <TClassOneModem::C1GetCapExtractResult(unsigned long *)+0x90>
         62bd4:	e3300002 	teq	r0, #2	; 0x2
         62bd8:	0a000008 	beq	62c00 <TClassOneModem::C1GetCapExtractResult(unsigned long *)+0x9c>
         62bdc:	e3300014 	teq	r0, #20	; 0x14
         62be0:	1a00003f 	bne	62ce4 <TClassOneModem::C1GetCapExtractResult(unsigned long *)+0x180>
         62be4:	ea000008 	b	62c0c <TClassOneModem::C1GetCapExtractResult(unsigned long *)+0xa8>
         62be8:	e5940000 	ldr	r0, [r4]
         62bec:	e3800001 	orr	r0, r0, #1	; 0x1
         62bf0:	ea00003a 	b	62ce0 <TClassOneModem::C1GetCapExtractResult(unsigned long *)+0x17c>
         62bf4:	e5940000 	ldr	r0, [r4]
         62bf8:	e3800002 	orr	r0, r0, #2	; 0x2
         62bfc:	ea000037 	b	62ce0 <TClassOneModem::C1GetCapExtractResult(unsigned long *)+0x17c>
         62c00:	e5940000 	ldr	r0, [r4]
         62c04:	e3800004 	orr	r0, r0, #4	; 0x4
         62c08:	ea000034 	b	62ce0 <TClassOneModem::C1GetCapExtractResult(unsigned long *)+0x17c>
         62c0c:	e5940000 	ldr	r0, [r4]
         62c10:	e3800008 	orr	r0, r0, #8	; 0x8
         62c14:	ea000031 	b	62ce0 <TClassOneModem::C1GetCapExtractResult(unsigned long *)+0x17c>
         62c18:	e3500060 	cmp	r0, #96	; 0x60
         62c1c:	05940000 	ldreq	r0, [r4]
         62c20:	03800040 	orreq	r0, r0, #64	; 0x40
         62c24:	0a00002d 	beq	62ce0 <TClassOneModem::C1GetCapExtractResult(unsigned long *)+0x17c>
         62c28:	ca000012 	bgt	62c78 <TClassOneModem::C1GetCapExtractResult(unsigned long *)+0x114>
         62c2c:	e3500048 	cmp	r0, #72	; 0x48
         62c30:	0afffff5 	beq	62c0c <TClassOneModem::C1GetCapExtractResult(unsigned long *)+0xa8>
         62c34:	ca000006 	bgt	62c54 <TClassOneModem::C1GetCapExtractResult(unsigned long *)+0xf0>
         62c38:	e3300003 	teq	r0, #3	; 0x3
         62c3c:	0affffe9 	beq	62be8 <TClassOneModem::C1GetCapExtractResult(unsigned long *)+0x84>
         62c40:	e3300018 	teq	r0, #24	; 0x18
         62c44:	0affffea 	beq	62bf4 <TClassOneModem::C1GetCapExtractResult(unsigned long *)+0x90>
         62c48:	e3300030 	teq	r0, #48	; 0x30
         62c4c:	0affffeb 	beq	62c00 <TClassOneModem::C1GetCapExtractResult(unsigned long *)+0x9c>
         62c50:	ea000023 	b	62ce4 <TClassOneModem::C1GetCapExtractResult(unsigned long *)+0x180>
         62c54:	e3300049 	teq	r0, #73	; 0x49
         62c58:	05940000 	ldreq	r0, [r4]
         62c5c:	03800010 	orreq	r0, r0, #16	; 0x10
         62c60:	0a00001e 	beq	62ce0 <TClassOneModem::C1GetCapExtractResult(unsigned long *)+0x17c>
         62c64:	e330004a 	teq	r0, #74	; 0x4a
         62c68:	05940000 	ldreq	r0, [r4]
         62c6c:	03800020 	orreq	r0, r0, #32	; 0x20
         62c70:	0a00001a 	beq	62ce0 <TClassOneModem::C1GetCapExtractResult(unsigned long *)+0x17c>
         62c74:	ea00001a 	b	62ce4 <TClassOneModem::C1GetCapExtractResult(unsigned long *)+0x180>
         62c78:	e350007a 	cmp	r0, #122	; 0x7a
         62c7c:	05940000 	ldreq	r0, [r4]
         62c80:	03800b01 	orreq	r0, r0, #1024	; 0x400
         62c84:	0a000015 	beq	62ce0 <TClassOneModem::C1GetCapExtractResult(unsigned long *)+0x17c>
         62c88:	ca00000c 	bgt	62cc0 <TClassOneModem::C1GetCapExtractResult(unsigned long *)+0x15c>
         62c8c:	e3300061 	teq	r0, #97	; 0x61
         62c90:	05940000 	ldreq	r0, [r4]
         62c94:	03800080 	orreq	r0, r0, #128	; 0x80
         62c98:	0a000010 	beq	62ce0 <TClassOneModem::C1GetCapExtractResult(unsigned long *)+0x17c>
         62c9c:	e3300062 	teq	r0, #98	; 0x62
         62ca0:	05940000 	ldreq	r0, [r4]
         62ca4:	03800c01 	orreq	r0, r0, #256	; 0x100
         62ca8:	0a00000c 	beq	62ce0 <TClassOneModem::C1GetCapExtractResult(unsigned long *)+0x17c>
         62cac:	e3300079 	teq	r0, #121	; 0x79
         62cb0:	05940000 	ldreq	r0, [r4]
         62cb4:	03800c02 	orreq	r0, r0, #512	; 0x200
         62cb8:	0a000008 	beq	62ce0 <TClassOneModem::C1GetCapExtractResult(unsigned long *)+0x17c>
         62cbc:	ea000008 	b	62ce4 <TClassOneModem::C1GetCapExtractResult(unsigned long *)+0x180>
         62cc0:	e3300091 	teq	r0, #145	; 0x91
         62cc4:	05940000 	ldreq	r0, [r4]
         62cc8:	03800b02 	orreq	r0, r0, #2048	; 0x800
         62ccc:	0a000003 	beq	62ce0 <TClassOneModem::C1GetCapExtractResult(unsigned long *)+0x17c>
         62cd0:	e3300092 	teq	r0, #146	; 0x92
         62cd4:	1a000002 	bne	62ce4 <TClassOneModem::C1GetCapExtractResult(unsigned long *)+0x180>
         62cd8:	e5940000 	ldr	r0, [r4]
         62cdc:	e3800a01 	orr	r0, r0, #4096	; 0x1000
         62ce0:	e5840000 	str	r0, [r4]
         62ce4:	e3a00000 	mov	r0, #0	; 0x0
         62ce8:	ea000008 	b	62d10 <TClassOneModem::C1GetCapExtractResult(unsigned long *)+0x1ac>
         62cec:	e350000b 	cmp	r0, #11	; 0xb
         62cf0:	aa000006 	bge	62d10 <TClassOneModem::C1GetCapExtractResult(unsigned long *)+0x1ac>
         62cf4:	e3520030 	cmp	r2, #48	; 0x30
         62cf8:	ba000004 	blt	62d10 <TClassOneModem::C1GetCapExtractResult(unsigned long *)+0x1ac>
         62cfc:	e3520039 	cmp	r2, #57	; 0x39
         62d00:	ca000002 	bgt	62d10 <TClassOneModem::C1GetCapExtractResult(unsigned long *)+0x1ac>
         62d04:	e1a01000 	mov	r1, r0
         62d08:	e2800001 	add	r0, r0, #1	; 0x1
         62d0c:	e7cd2001 	strb	r2, [sp, r1]
         62d10:	e2866001 	add	r6, r6, #1	; 0x1
         62d14:	e3370000 	teq	r7, #0	; 0x0
         62d18:	0affff9c 	beq	62b90 <TClassOneModem::C1GetCapExtractResult(unsigned long *)+0x2c>
         62d1c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TClassOneModem::C1GetCapComplete(long)
 * Address: 00062d20
 */
TClassOneModem::C1GetCapComplete(long) {
    /*
         62d20:	e1a02000 	mov	r2, r0
         62d24:	e59005b0 	ldr	r0, [r0, #1456]	; fField1456
         62d28:	e3c00801 	bic	r0, r0, #65536	; 0x10000
         62d2c:	e58205b0 	str	r0, [r2, #1456]	; fField1456
         62d30:	e5920188 	ldr	r0, [r2, #392]	; fField392
         62d34:	e592383c 	ldr	r3, [r2, #2108]	; fField2108
         62d38:	e5b0c014 	ldr	ip, [r0, #20]!	; fField20
         62d3c:	e003300c 	and	r3, r3, ip
         62d40:	e5803000 	str	r3, [r0]
         62d44:	e5920188 	ldr	r0, [r2, #392]	; fField392
         62d48:	e592c840 	ldr	ip, [r2, #2112]	; fField2112
         62d4c:	e5b03018 	ldr	r3, [r0, #24]!	; fField24
         62d50:	e00c3003 	and	r3, ip, r3
         62d54:	e5803000 	str	r3, [r0]
         62d58:	e5920188 	ldr	r0, [r2, #392]	; fField392
         62d5c:	e5923844 	ldr	r3, [r2, #2116]	; fField2116
         62d60:	e5b0c01c 	ldr	ip, [r0, #28]!	; fField28
         62d64:	e003300c 	and	r3, r3, ip
         62d68:	e5803000 	str	r3, [r0]
         62d6c:	e5920188 	ldr	r0, [r2, #392]	; fField392
         62d70:	e5923848 	ldr	r3, [r2, #2120]	; fField2120
         62d74:	e5b0c020 	ldr	ip, [r0, #32]!	; fField32
         62d78:	e003300c 	and	r3, r3, ip
         62d7c:	e5803000 	str	r3, [r0]
         62d80:	e5920188 	ldr	r0, [r2, #392]	; fField392
         62d84:	e592c84c 	ldr	ip, [r2, #2124]	; fField2124
         62d88:	e5b03024 	ldr	r3, [r0, #36]!	; fField36
         62d8c:	e00c3003 	and	r3, ip, r3
         62d90:	e5803000 	str	r3, [r0]
         62d94:	e5920188 	ldr	r0, [r2, #392]	; fField392
         62d98:	e5a01010 	str	r1, [r0, #16]!	; fField16
         62d9c:	e3310000 	teq	r1, #0	; 0x0
         62da0:	13e01000 	mvnne	r1, #0	; 0x0
         62da4:	03a01000 	moveq	r1, #0	; 0x0
         62da8:	e1a00002 	mov	r0, r2
         62dac:	e5922000 	ldr	r2, [r2]
         62db0:	e282f0a8 	add	pc, r2, #168	; 0xa8
    */
}

/**
 * Symbol: TClassOneModem::GetSrvcClsSupported(long)
 * Address: 00062db4
 */
TClassOneModem::GetSrvcClsSupported(long) {
    /*
         62db4:	e1a0c00d 	mov	ip, sp
         62db8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         62dbc:	e24cb004 	sub	fp, ip, #4	; 0x4
         62dc0:	e1a04000 	mov	r4, r0
         62dc4:	e5900b90 	ldr	r0, [r0, #2960]	; fField2960
         62dc8:	e3300000 	teq	r0, #0	; 0x0
         62dcc:	0a000009 	beq	62df8 <TClassOneModem::GetSrvcClsSupported(long)+0x44>
         62dd0:	e3300001 	teq	r0, #1	; 0x1
         62dd4:	0a00001a 	beq	62e44 <TClassOneModem::GetSrvcClsSupported(long)+0x90>
         62dd8:	e3300002 	teq	r0, #2	; 0x2
         62ddc:	1a00002e 	bne	62e9c <TClassOneModem::GetSrvcClsSupported(long)+0xe8>
         62de0:	e281cc5d 	add	ip, r1, #23808	; 0x5d00
         62de4:	e37c00c0 	cmn	ip, #192	; 0xc0
         62de8:	159405f4 	ldrne	r0, [r4, #1524]	; fField1524
         62dec:	13300000 	teqne	r0, #0	; 0x0
         62df0:	0a000022 	beq	62e80 <TClassOneModem::GetSrvcClsSupported(long)+0xcc>
         62df4:	ea00001e 	b	62e74 <TClassOneModem::GetSrvcClsSupported(long)+0xc0>
         62df8:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         62dfc:	e3800801 	orr	r0, r0, #65536	; 0x10000
         62e00:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         62e04:	e3a00003 	mov	r0, #3	; 0x3
         62e08:	e58405c0 	str	r0, [r4, #1472]	; fField1472
         62e0c:	e59f002c 	ldr	r0, [pc, #2c]	; 62e40 <TClassOneModem::GetSrvcClsSupported(long)+0x8c>
         62e10:	e3a01000 	mov	r1, #0	; 0x0
         62e14:	e5840b94 	str	r0, [r4, #2964]	; fField2964
         62e18:	e5940188 	ldr	r0, [r4, #392]	; fField392
         62e1c:	e5a01014 	str	r1, [r0, #20]!	; fField20
         62e20:	e1a00004 	mov	r0, r4
         62e24:	e3a01016 	mov	r1, #22	; 0x16
         62e28:	eb66a1e7 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         62e2c:	e1b01000 	movs	r1, r0
         62e30:	03a00001 	moveq	r0, #1	; 0x1
         62e34:	05a40b90 	streq	r0, [r4, #2960]!	; fField2960
         62e38:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         62e3c:	ea000018 	b	62ea4 <TClassOneModem::GetSrvcClsSupported(long)+0xf0>
         62e40:	6d667371 	stcvsl	3, cr7, [r6, -#452]!
         62e44:	e59405f4 	ldr	r0, [r4, #1524]	; fField1524
         62e48:	e330003b 	teq	r0, #59	; 0x3b
         62e4c:	1a000014 	bne	62ea4 <TClassOneModem::GetSrvcClsSupported(long)+0xf0>
         62e50:	e5940188 	ldr	r0, [r4, #392]	; fField392
         62e54:	e2801014 	add	r1, r0, #20	; 0x14
         62e58:	e1a00004 	mov	r0, r4
         62e5c:	eb6704f3 	bl	1a24230 <TClassOneModem::$C1GetCapExtractResult(unsigned long *)>
         62e60:	e3a00002 	mov	r0, #2	; 0x2
         62e64:	e5840b90 	str	r0, [r4, #2960]	; fField2960
         62e68:	e59405c0 	ldr	r0, [r4, #1472]	; fField1472
         62e6c:	e3c00003 	bic	r0, r0, #3	; 0x3
         62e70:	e58405c0 	str	r0, [r4, #1472]	; fField1472
         62e74:	e1a00004 	mov	r0, r4
         62e78:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         62e7c:	ea66b67e 	b	1a1087c <TClassOneModem::$GetCommandResult(void)>
         62e80:	e5940188 	ldr	r0, [r4, #392]	; fField392
         62e84:	e594183c 	ldr	r1, [r4, #2108]	; fField2108
         62e88:	e5b02014 	ldr	r2, [r0, #20]!	; fField20
         62e8c:	e0011002 	and	r1, r1, r2
         62e90:	e5801000 	str	r1, [r0]
         62e94:	e3a01000 	mov	r1, #0	; 0x0
         62e98:	ea000001 	b	62ea4 <TClassOneModem::GetSrvcClsSupported(long)+0xf0>
         62e9c:	e3a01039 	mov	r1, #57	; 0x39
         62ea0:	e2411c5e 	sub	r1, r1, #24064	; 0x5e00
         62ea4:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         62ea8:	e3c00801 	bic	r0, r0, #65536	; 0x10000
         62eac:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         62eb0:	e5940188 	ldr	r0, [r4, #392]	; fField392
         62eb4:	e5a01010 	str	r1, [r0, #16]!	; fField16
         62eb8:	e3310000 	teq	r1, #0	; 0x0
         62ebc:	13e01000 	mvnne	r1, #0	; 0x0
         62ec0:	03a01000 	moveq	r1, #0	; 0x0
         62ec4:	e1a00004 	mov	r0, r4
         62ec8:	e5942000 	ldr	r2, [r4]
         62ecc:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         62ed0:	e282f0a8 	add	pc, r2, #168	; 0xa8
    */
}

/**
 * Symbol: TClassOneModem::PutBytes(CBufferList *)
 * Address: 00062ed4
 */
TClassOneModem::PutBytes(CBufferList *) {
    /*
         62ed4:	e59027b4 	ldr	r2, [r0, #1972]	; fField1972
         62ed8:	e3320002 	teq	r2, #2	; 0x2
         62edc:	1a66cf20 	bne	1a16b64 <TSerTool::$PutBytes(CBufferList *)>
         62ee0:	0a66cf1c 	beq	1a16b58 <TMNP::$PutBytes(CBufferList *)>
    */
}

/**
 * Symbol: TClassOneModem::SetServiceClass(long)
 * Address: 00062ee4
 */
TClassOneModem::SetServiceClass(long) {
    /*
         62ee4:	e1a0c00d 	mov	ip, sp
         62ee8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         62eec:	e24cb004 	sub	fp, ip, #4	; 0x4
         62ef0:	e1a04000 	mov	r4, r0
         62ef4:	e1a05001 	mov	r5, r1
         62ef8:	e5900b90 	ldr	r0, [r0, #2960]	; fField2960
         62efc:	e3300003 	teq	r0, #3	; 0x3
         62f00:	0a000015 	beq	62f5c <TClassOneModem::SetServiceClass(long)+0x78>
         62f04:	e3300004 	teq	r0, #4	; 0x4
         62f08:	1a00002e 	bne	62fc8 <TClassOneModem::SetServiceClass(long)+0xe4>
         62f0c:	e59405f4 	ldr	r0, [r4, #1524]	; fField1524
         62f10:	e3300000 	teq	r0, #0	; 0x0
         62f14:	1a00002d 	bne	62fd0 <TClassOneModem::SetServiceClass(long)+0xec>
         62f18:	e3a05000 	mov	r5, #0	; 0x0
         62f1c:	e3a00f96 	mov	r0, #600	; 0x258
         62f20:	e5840b9c 	str	r0, [r4, #2972]	; fField2972
         62f24:	e594088c 	ldr	r0, [r4, #2188]	; fField2188
         62f28:	e3500001 	cmp	r0, #1	; 0x1
         62f2c:	1a000018 	bne	62f94 <TClassOneModem::SetServiceClass(long)+0xb0>
         62f30:	e5940784 	ldr	r0, [r4, #1924]	; fField1924
         62f34:	e59417d8 	ldr	r1, [r4, #2008]	; fField2008
         62f38:	e5911014 	ldr	r1, [r1, #20]	; fField20
         62f3c:	e1300001 	teq	r0, r1
         62f40:	0a000022 	beq	62fd0 <TClassOneModem::SetServiceClass(long)+0xec>
         62f44:	e3a03008 	mov	r3, #8	; 0x8
         62f48:	e92d0008 	stmdb	sp!, {r3}
         62f4c:	e1a00004 	mov	r0, r4
         62f50:	e3a03000 	mov	r3, #0	; 0x0
         62f54:	e3a02000 	mov	r2, #0	; 0x0
         62f58:	ea000017 	b	62fbc <TClassOneModem::SetServiceClass(long)+0xd8>
         62f5c:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         62f60:	e3800801 	orr	r0, r0, #65536	; 0x10000
         62f64:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         62f68:	e59f0020 	ldr	r0, [pc, #20]	; 62f90 <TClassOneModem::SetServiceClass(long)+0xac>	; fField20
         62f6c:	e5840b94 	str	r0, [r4, #2964]	; fField2964
         62f70:	e1a00004 	mov	r0, r4
         62f74:	e3a01002 	mov	r1, #2	; 0x2
         62f78:	eb66a193 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         62f7c:	e1b05000 	movs	r5, r0
         62f80:	03a00004 	moveq	r0, #4	; 0x4
         62f84:	05a40b90 	streq	r0, [r4, #2960]!	; fField2960
         62f88:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         62f8c:	ea00000f 	b	62fd0 <TClassOneModem::SetServiceClass(long)+0xec>
         62f90:	6d667363 	stcvsl	3, cr7, [r6, -#396]!
         62f94:	159407d8 	ldrne	r0, [r4, #2008]	; fField2008
         62f98:	15900014 	ldrne	r0, [r0, #20]	; fField20
         62f9c:	13300c4b 	teqne	r0, #19200	; 0x4b00
         62fa0:	0a00000a 	beq	62fd0 <TClassOneModem::SetServiceClass(long)+0xec>
         62fa4:	e3a03008 	mov	r3, #8	; 0x8
         62fa8:	e92d0008 	stmdb	sp!, {r3}
         62fac:	e1a00004 	mov	r0, r4
         62fb0:	e3a03000 	mov	r3, #0	; 0x0
         62fb4:	e3a02000 	mov	r2, #0	; 0x0
         62fb8:	e3a01c4b 	mov	r1, #19200	; 0x4b00
         62fbc:	eb66d71a 	bl	1a18c2c <TClassOneModem::$ResetSerialDrvr(unsigned long, long, long, long)>
         62fc0:	e28dd004 	add	sp, sp, #4	; 0x4
         62fc4:	ea000001 	b	62fd0 <TClassOneModem::SetServiceClass(long)+0xec>
         62fc8:	e3a05039 	mov	r5, #57	; 0x39
         62fcc:	e2455c5e 	sub	r5, r5, #24064	; 0x5e00
         62fd0:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         62fd4:	e3c00801 	bic	r0, r0, #65536	; 0x10000
         62fd8:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         62fdc:	e5940188 	ldr	r0, [r4, #392]	; fField392
         62fe0:	e5a05010 	str	r5, [r0, #16]!	; fField16
         62fe4:	e3350000 	teq	r5, #0	; 0x0
         62fe8:	13e01000 	mvnne	r1, #0	; 0x0
         62fec:	03a01000 	moveq	r1, #0	; 0x0
         62ff0:	e1a00004 	mov	r0, r4
         62ff4:	e5942000 	ldr	r2, [r4]
         62ff8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         62ffc:	e282f0a8 	add	pc, r2, #168	; 0xa8
    */
}

/**
 * Symbol: TClassOneModem::C1GetFaxCapabilities(long)
 * Address: 00063000
 */
TClassOneModem::C1GetFaxCapabilities(long) {
    /*
         63000:	e1a0c00d 	mov	ip, sp
         63004:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         63008:	e24cb004 	sub	fp, ip, #4	; 0x4
         6300c:	e1a04000 	mov	r4, r0
         63010:	e5900b90 	ldr	r0, [r0, #2960]	; fField2960
         63014:	e2403005 	sub	r3, r0, #5	; 0x5
         63018:	e59f209c 	ldr	r2, [pc, #9c]	; 630bc <TClassOneModem::C1GetFaxCapabilities(long)+0xbc>
         6301c:	e2820005 	add	r0, r2, #5	; 0x5
         63020:	e3530008 	cmp	r3, #8	; 0x8
         63024:	908ff103 	addls	pc, pc, r3, lsl #2
         63028:	ea00008b 	b	6325c <TClassOneModem::C1GetFaxCapabilities(long)+0x25c>
         6302c:	ea000023 	b	630c0 <TClassOneModem::C1GetFaxCapabilities(long)+0xc0>
         63030:	ea00003e 	b	63130 <TClassOneModem::C1GetFaxCapabilities(long)+0x130>
         63034:	ea000046 	b	63154 <TClassOneModem::C1GetFaxCapabilities(long)+0x154>
         63038:	ea000051 	b	63184 <TClassOneModem::C1GetFaxCapabilities(long)+0x184>
         6303c:	ea000059 	b	631a8 <TClassOneModem::C1GetFaxCapabilities(long)+0x1a8>
         63040:	ea000064 	b	631d8 <TClassOneModem::C1GetFaxCapabilities(long)+0x1d8>
         63044:	ea00006c 	b	631fc <TClassOneModem::C1GetFaxCapabilities(long)+0x1fc>
         63048:	ea000077 	b	6322c <TClassOneModem::C1GetFaxCapabilities(long)+0x22c>
         6304c:	e3a02d89 	mov	r2, #8768	; 0x2240
         63050:	e2422902 	sub	r2, r2, #32768	; 0x8000
         63054:	e1310002 	teq	r1, r2
         63058:	159405f4 	ldrne	r0, [r4, #1524]	; fField1524
         6305c:	13300000 	teqne	r0, #0	; 0x0
         63060:	1a00007a 	bne	63250 <TClassOneModem::C1GetFaxCapabilities(long)+0x250>
         63064:	e5940188 	ldr	r0, [r4, #392]	; fField392
         63068:	e5941840 	ldr	r1, [r4, #2112]	; fField2112
         6306c:	e5b02014 	ldr	r2, [r0, #20]!	; fField20
         63070:	e0011002 	and	r1, r1, r2
         63074:	e5801000 	str	r1, [r0]
         63078:	e5940188 	ldr	r0, [r4, #392]	; fField392
         6307c:	e5942844 	ldr	r2, [r4, #2116]	; fField2116
         63080:	e5b01018 	ldr	r1, [r0, #24]!	; fField24
         63084:	e0021001 	and	r1, r2, r1
         63088:	e5801000 	str	r1, [r0]
         6308c:	e5940188 	ldr	r0, [r4, #392]	; fField392
         63090:	e5941848 	ldr	r1, [r4, #2120]	; fField2120
         63094:	e5b0201c 	ldr	r2, [r0, #28]!	; fField28
         63098:	e0011002 	and	r1, r1, r2
         6309c:	e5801000 	str	r1, [r0]
         630a0:	e5940188 	ldr	r0, [r4, #392]	; fField392
         630a4:	e594284c 	ldr	r2, [r4, #2124]	; fField2124
         630a8:	e5b01020 	ldr	r1, [r0, #32]!	; fField32
         630ac:	e0021001 	and	r1, r2, r1
         630b0:	e5801000 	str	r1, [r0]
         630b4:	e3a01000 	mov	r1, #0	; 0x0
         630b8:	ea000069 	b	63264 <TClassOneModem::C1GetFaxCapabilities(long)+0x264>
         630bc:	ffffa23b 	swinv	0x00ffa23b
         630c0:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         630c4:	e3800801 	orr	r0, r0, #65536	; 0x10000
         630c8:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         630cc:	e59f0058 	ldr	r0, [pc, #58]	; 6312c <TClassOneModem::C1GetFaxCapabilities(long)+0x12c>
         630d0:	e5840b94 	str	r0, [r4, #2964]	; fField2964
         630d4:	e594088c 	ldr	r0, [r4, #2188]	; fField2188
         630d8:	e3300002 	teq	r0, #2	; 0x2
         630dc:	11a01002 	movne	r1, r2
         630e0:	1a00005f 	bne	63264 <TClassOneModem::C1GetFaxCapabilities(long)+0x264>
         630e4:	e3a01000 	mov	r1, #0	; 0x0
         630e8:	e5940188 	ldr	r0, [r4, #392]	; fField392
         630ec:	e5a01014 	str	r1, [r0, #20]!	; fField20
         630f0:	e3a00001 	mov	r0, #1	; 0x1
         630f4:	e5942188 	ldr	r2, [r4, #392]	; fField392
         630f8:	e5a20018 	str	r0, [r2, #24]!	; fField24
         630fc:	e5942188 	ldr	r2, [r4, #392]	; fField392
         63100:	e5a2101c 	str	r1, [r2, #28]!	; fField28
         63104:	e5941188 	ldr	r1, [r4, #392]	; fField392
         63108:	e5a10020 	str	r0, [r1, #32]!	; fField32
         6310c:	e1a00004 	mov	r0, r4
         63110:	e3a01017 	mov	r1, #23	; 0x17
         63114:	eb66a12c 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         63118:	e1b01000 	movs	r1, r0
         6311c:	03a00006 	moveq	r0, #6	; 0x6
         63120:	05a40b90 	streq	r0, [r4, #2960]!	; fField2960
         63124:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         63128:	ea00004d 	b	63264 <TClassOneModem::C1GetFaxCapabilities(long)+0x264>
         6312c:	6d663163 	stfvse	f3, [r6, -#396]!
         63130:	e59405f4 	ldr	r0, [r4, #1524]	; fField1524
         63134:	e330003b 	teq	r0, #59	; 0x3b
         63138:	1a000049 	bne	63264 <TClassOneModem::C1GetFaxCapabilities(long)+0x264>
         6313c:	e5940188 	ldr	r0, [r4, #392]	; fField392
         63140:	e2801014 	add	r1, r0, #20	; 0x14
         63144:	e1a00004 	mov	r0, r4
         63148:	eb670438 	bl	1a24230 <TClassOneModem::$C1GetCapExtractResult(unsigned long *)>
         6314c:	e3a00007 	mov	r0, #7	; 0x7
         63150:	ea00003d 	b	6324c <TClassOneModem::C1GetFaxCapabilities(long)+0x24c>
         63154:	e1310000 	teq	r1, r0
         63158:	159405f4 	ldrne	r0, [r4, #1524]	; fField1524
         6315c:	13300000 	teqne	r0, #0	; 0x0
         63160:	1a00003a 	bne	63250 <TClassOneModem::C1GetFaxCapabilities(long)+0x250>
         63164:	e3a00008 	mov	r0, #8	; 0x8
         63168:	e5840b90 	str	r0, [r4, #2960]	; fField2960
         6316c:	e1a00004 	mov	r0, r4
         63170:	e3a01018 	mov	r1, #24	; 0x18
         63174:	eb66a114 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         63178:	e1b01000 	movs	r1, r0
         6317c:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         63180:	ea000037 	b	63264 <TClassOneModem::C1GetFaxCapabilities(long)+0x264>
         63184:	e59405f4 	ldr	r0, [r4, #1524]	; fField1524
         63188:	e330003b 	teq	r0, #59	; 0x3b
         6318c:	1a000034 	bne	63264 <TClassOneModem::C1GetFaxCapabilities(long)+0x264>
         63190:	e5940188 	ldr	r0, [r4, #392]	; fField392
         63194:	e2801018 	add	r1, r0, #24	; 0x18
         63198:	e1a00004 	mov	r0, r4
         6319c:	eb670423 	bl	1a24230 <TClassOneModem::$C1GetCapExtractResult(unsigned long *)>
         631a0:	e3a00009 	mov	r0, #9	; 0x9
         631a4:	ea000028 	b	6324c <TClassOneModem::C1GetFaxCapabilities(long)+0x24c>
         631a8:	e1310000 	teq	r1, r0
         631ac:	159405f4 	ldrne	r0, [r4, #1524]	; fField1524
         631b0:	13300000 	teqne	r0, #0	; 0x0
         631b4:	1a000025 	bne	63250 <TClassOneModem::C1GetFaxCapabilities(long)+0x250>
         631b8:	e3a0000a 	mov	r0, #10	; 0xa
         631bc:	e5840b90 	str	r0, [r4, #2960]	; fField2960
         631c0:	e1a00004 	mov	r0, r4
         631c4:	e3a01019 	mov	r1, #25	; 0x19
         631c8:	eb66a0ff 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         631cc:	e1b01000 	movs	r1, r0
         631d0:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         631d4:	ea000022 	b	63264 <TClassOneModem::C1GetFaxCapabilities(long)+0x264>
         631d8:	e59405f4 	ldr	r0, [r4, #1524]	; fField1524
         631dc:	e330003b 	teq	r0, #59	; 0x3b
         631e0:	1a00001f 	bne	63264 <TClassOneModem::C1GetFaxCapabilities(long)+0x264>
         631e4:	e5940188 	ldr	r0, [r4, #392]	; fField392
         631e8:	e280101c 	add	r1, r0, #28	; 0x1c
         631ec:	e1a00004 	mov	r0, r4
         631f0:	eb67040e 	bl	1a24230 <TClassOneModem::$C1GetCapExtractResult(unsigned long *)>
         631f4:	e3a0000b 	mov	r0, #11	; 0xb
         631f8:	ea000013 	b	6324c <TClassOneModem::C1GetFaxCapabilities(long)+0x24c>
         631fc:	e1310000 	teq	r1, r0
         63200:	159405f4 	ldrne	r0, [r4, #1524]	; fField1524
         63204:	13300000 	teqne	r0, #0	; 0x0
         63208:	1a000010 	bne	63250 <TClassOneModem::C1GetFaxCapabilities(long)+0x250>
         6320c:	e3a0000c 	mov	r0, #12	; 0xc
         63210:	e5840b90 	str	r0, [r4, #2960]	; fField2960
         63214:	e1a00004 	mov	r0, r4
         63218:	e3a0101a 	mov	r1, #26	; 0x1a
         6321c:	eb66a0ea 	bl	1a0b5cc <TClassOneModem::$BeginModemCommand(unsigned long)>
         63220:	e1b01000 	movs	r1, r0
         63224:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         63228:	ea00000d 	b	63264 <TClassOneModem::C1GetFaxCapabilities(long)+0x264>
         6322c:	e59405f4 	ldr	r0, [r4, #1524]	; fField1524
         63230:	e330003b 	teq	r0, #59	; 0x3b
         63234:	1a00000a 	bne	63264 <TClassOneModem::C1GetFaxCapabilities(long)+0x264>
         63238:	e5940188 	ldr	r0, [r4, #392]	; fField392
         6323c:	e2801020 	add	r1, r0, #32	; 0x20
         63240:	e1a00004 	mov	r0, r4
         63244:	eb6703f9 	bl	1a24230 <TClassOneModem::$C1GetCapExtractResult(unsigned long *)>
         63248:	e3a0000d 	mov	r0, #13	; 0xd
         6324c:	e5840b90 	str	r0, [r4, #2960]	; fField2960
         63250:	e1a00004 	mov	r0, r4
         63254:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         63258:	ea66b587 	b	1a1087c <TClassOneModem::$GetCommandResult(void)>
         6325c:	e3a01039 	mov	r1, #57	; 0x39
         63260:	e2411c5e 	sub	r1, r1, #24064	; 0x5e00
         63264:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         63268:	e3c00801 	bic	r0, r0, #65536	; 0x10000
         6326c:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         63270:	e5940188 	ldr	r0, [r4, #392]	; fField392
         63274:	e5a01010 	str	r1, [r0, #16]!	; fField16
         63278:	e3310000 	teq	r1, #0	; 0x0
         6327c:	13e01000 	mvnne	r1, #0	; 0x0
         63280:	03a01000 	moveq	r1, #0	; 0x0
         63284:	e1a00004 	mov	r0, r4
         63288:	e5942000 	ldr	r2, [r4]
         6328c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         63290:	e282f0a8 	add	pc, r2, #168	; 0xa8
    */
}

/**
 * Symbol: TClassOneModem::BeginModemCommand(unsigned long)
 * Address: 00063294
 */
TClassOneModem::BeginModemCommand(unsigned long) {
    /*
         63294:	e1a0c00d 	mov	ip, sp
         63298:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         6329c:	e24cb004 	sub	fp, ip, #4	; 0x4
         632a0:	e1a04000 	mov	r4, r0
         632a4:	eb66ce24 	bl	1a16b3c <TClassOneModem::$PrepareCommand(unsigned long)>
         632a8:	e1b05000 	movs	r5, r0
         632ac:	01a00004 	moveq	r0, r4
         632b0:	0b66ce2d 	bleq	1a16b6c <TClassOneModem::$PutCommand(void)>
         632b4:	e1a00005 	mov	r0, r5
         632b8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TClassOneModem::AbortCommand(void)
 * Address: 000632bc
 */
TClassOneModem::AbortCommand(void) {
    /*
         632bc:	e1a0c00d 	mov	ip, sp
         632c0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         632c4:	e24cb004 	sub	fp, ip, #4	; 0x4
         632c8:	e1a04000 	mov	r4, r0
         632cc:	e59005b0 	ldr	r0, [r0, #1456]	; fField1456
         632d0:	e3800020 	orr	r0, r0, #32	; 0x20
         632d4:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         632d8:	e1a00004 	mov	r0, r4
         632dc:	eb66ffab 	bl	1a23190 <TClassOneModem::$AbortTimer(void)>
         632e0:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         632e4:	e3100004 	tst	r0, #4	; 0x4
         632e8:	11a00004 	movne	r0, r4
         632ec:	1b66c5c5 	blne	1a14a08 <TFramedAsyncSerTool::$KillPut(void)>
         632f0:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         632f4:	e3100008 	tst	r0, #8	; 0x8
         632f8:	11a00004 	movne	r0, r4
         632fc:	1b66c1b6 	blne	1a139dc <TFramedAsyncSerTool::$KillGet(void)>
         63300:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         63304:	e3c00020 	bic	r0, r0, #32	; 0x20
         63308:	e5a405b0 	str	r0, [r4, #1456]!	; fField1456
         6330c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TClassOneModem::KillPutComplete(long)
 * Address: 00063310
 */
TClassOneModem::KillPutComplete(long) {
    /*
         63310:	e59025b0 	ldr	r2, [r0, #1456]	; fField1456
         63314:	e3120020 	tst	r2, #32	; 0x20
         63318:	05902aac 	ldreq	r2, [r0, #2732]	; fField2732
         6331c:	02022002 	andeq	r2, r2, #2	; 0x2
         63320:	03320000 	teqeq	r2, #0	; 0x0
         63324:	0a66c5bc 	beq	1a14a1c <TMNP::$KillPutComplete(long)>
         63328:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TClassOneModem::KillGetComplete(long)
 * Address: 0006332c
 */
TClassOneModem::KillGetComplete(long) {
    /*
         6332c:	e59025b0 	ldr	r2, [r0, #1456]	; fField1456
         63330:	e3120020 	tst	r2, #32	; 0x20
         63334:	0a66c1ad 	beq	1a139f0 <TMNP::$KillGetComplete(long)>
         63338:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TClassOneModem::DoKillControl(unsigned long)
 * Address: 0006333c
 */
TClassOneModem::DoKillControl(unsigned long) {
    /*
         6333c:	e1a0c00d 	mov	ip, sp
         63340:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         63344:	e24cb004 	sub	fp, ip, #4	; 0x4
         63348:	e1a04000 	mov	r4, r0
         6334c:	e5900018 	ldr	r0, [r0, #24]	; fField24
         63350:	e3100001 	tst	r0, #1	; 0x1
         63354:	0a000007 	beq	63378 <TClassOneModem::DoKillControl(unsigned long)+0x3c>
         63358:	e5940028 	ldr	r0, [r4, #40]	; fField40
         6335c:	e3300000 	teq	r0, #0	; 0x0
         63360:	03a00002 	moveq	r0, #2	; 0x2
         63364:	05840028 	streq	r0, [r4, #40]	; fField40
         63368:	e1a00004 	mov	r0, r4
         6336c:	e59f1064 	ldr	r1, [pc, #64]	; 633d8 <TClassOneModem::DoKillControl(unsigned long)+0x9c>
         63370:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         63374:	ea6d7745 	b	1bc1090 <TCommTool::$StartAbort(long)>
         63378:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         6337c:	e3100b01 	tst	r0, #1024	; 0x400
         63380:	e59f5054 	ldr	r5, [pc, #54]	; 633dc <TClassOneModem::DoKillControl(unsigned long)+0xa0>
         63384:	0a000015 	beq	633e0 <TClassOneModem::DoKillControl(unsigned long)+0xa4>
         63388:	e59425b8 	ldr	r2, [r4, #1464]	; fField1464
         6338c:	e3320001 	teq	r2, #1	; 0x1
         63390:	01a00004 	moveq	r0, r4
         63394:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
         63398:	0a66f2f9 	beq	1a1ff84 <TSerTool::$DoKillControl(unsigned long)>
         6339c:	e3800302 	orr	r0, r0, #134217728	; 0x8000000
         633a0:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         633a4:	e1a00004 	mov	r0, r4
         633a8:	eb66ff77 	bl	1a2318c <TClassOneModem::$AbortCommand(void)>
         633ac:	e1a00004 	mov	r0, r4
         633b0:	e1a01005 	mov	r1, r5
         633b4:	eb66a4a9 	bl	1a0c660 <TClassOneModem::$C1IdModemComplete(long)>
         633b8:	e1a00004 	mov	r0, r4
         633bc:	e3a02000 	mov	r2, #0	; 0x0
         633c0:	e3a01004 	mov	r1, #4	; 0x4
         633c4:	eb6d7312 	bl	1bc0014 <TCommTool::$KillRequestComplete(CommToolRequestType, long)>
         633c8:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         633cc:	e3c00302 	bic	r0, r0, #134217728	; 0x8000000
         633d0:	e5a405b0 	str	r0, [r4, #1456]!	; fField1456
         633d4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         633d8:	ffffc173 	swinv	0x00ffc173
         633dc:	ffffc17b 	swinv	0x00ffc17b
         633e0:	e3100723 	tst	r0, #9175040	; 0x8c0000
         633e4:	0a000006 	beq	63404 <TClassOneModem::DoKillControl(unsigned long)+0xc8>
         633e8:	e3800201 	orr	r0, r0, #268435456	; 0x10000000
         633ec:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         633f0:	e3100202 	tst	r0, #536870912	; 0x20000000
         633f4:	01a00004 	moveq	r0, r4
         633f8:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
         633fc:	0a66a49c 	beq	1a0c674 <TClassOneModem::$C1PktAbort(void)>
         63400:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         63404:	e3100801 	tst	r0, #65536	; 0x10000
         63408:	0a00000d 	beq	63444 <TClassOneModem::DoKillControl(unsigned long)+0x108>
         6340c:	e3a00001 	mov	r0, #1	; 0x1
         63410:	e5c408f5 	strb	r0, [r4, #2293]	; fField2293
         63414:	e1a00004 	mov	r0, r4
         63418:	eb66ff5b 	bl	1a2318c <TClassOneModem::$AbortCommand(void)>
         6341c:	e1a00004 	mov	r0, r4
         63420:	e1a01005 	mov	r1, r5
         63424:	eb67037f 	bl	1a24228 <TClassOneModem::$C1GetCapComplete(long)>
         63428:	e1a00004 	mov	r0, r4
         6342c:	e3a02000 	mov	r2, #0	; 0x0
         63430:	e3a01004 	mov	r1, #4	; 0x4
         63434:	eb6d72f6 	bl	1bc0014 <TCommTool::$KillRequestComplete(CommToolRequestType, long)>
         63438:	e3a00000 	mov	r0, #0	; 0x0
         6343c:	e5c408f5 	strb	r0, [r4, #2293]	; fField2293
         63440:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         63444:	e1a00004 	mov	r0, r4
         63448:	e3a0207e 	mov	r2, #126	; 0x7e
         6344c:	e2422c3f 	sub	r2, r2, #16128	; 0x3f00
         63450:	e3a01004 	mov	r1, #4	; 0x4
         63454:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         63458:	ea6d72ed 	b	1bc0014 <TCommTool::$KillRequestComplete(CommToolRequestType, long)>
    */
}

/**
 * Symbol: TClassOneModem::PutCommand(void)
 * Address: 0006345c
 */
TClassOneModem::PutCommand(void) {
    /*
         6345c:	e1a0c00d 	mov	ip, sp
         63460:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         63464:	e24cb004 	sub	fp, ip, #4	; 0x4
         63468:	e1a05000 	mov	r5, r0
         6346c:	e24dd008 	sub	sp, sp, #8	; 0x8
         63470:	e3a07000 	mov	r7, #0	; 0x0
         63474:	e59005b0 	ldr	r0, [r0, #1456]	; fField1456
         63478:	e3100703 	tst	r0, #786432	; 0xc0000
         6347c:	1a000047 	bne	635a0 <TClassOneModem::PutCommand(void)+0x144>
         63480:	e24dd010 	sub	sp, sp, #16	; 0x10
         63484:	e3a08000 	mov	r8, #0	; 0x0
         63488:	e3a04066 	mov	r4, #102	; 0x66
         6348c:	e2844c0e 	add	r4, r4, #3584	; 0xe00
         63490:	e5951b9c 	ldr	r1, [r5, #2972]	; fField2972
         63494:	e2856f75 	add	r6, r5, #468	; 0x1d4
         63498:	e2866b01 	add	r6, r6, #1024	; 0x400
         6349c:	e3310000 	teq	r1, #0	; 0x0
         634a0:	1a000007 	bne	634c4 <TClassOneModem::PutCommand(void)+0x68>
         634a4:	e59507d8 	ldr	r0, [r5, #2008]	; fField2008
         634a8:	e5b01020 	ldr	r1, [r0, #32]!	; fField32
         634ac:	e1a0000d 	mov	r0, sp
         634b0:	e1a02004 	mov	r2, r4
         634b4:	eb6da883 	bl	1bcd6c8 <TTime::$__ct(unsigned long, TimeUnits)>
         634b8:	e89d5000 	ldmia	sp, {ip, lr}
         634bc:	e8865000 	stmia	r6, {ip, lr}
         634c0:	ea000007 	b	634e4 <TClassOneModem::PutCommand(void)+0x88>
         634c4:	e24dd008 	sub	sp, sp, #8	; 0x8
         634c8:	e1a0000d 	mov	r0, sp
         634cc:	e1a02004 	mov	r2, r4
         634d0:	eb6da87c 	bl	1bcd6c8 <TTime::$__ct(unsigned long, TimeUnits)>
         634d4:	e89d5000 	ldmia	sp, {ip, lr}
         634d8:	e8865000 	stmia	r6, {ip, lr}
         634dc:	e5858b9c 	str	r8, [r5, #2972]	; fField2972
         634e0:	e28dd008 	add	sp, sp, #8	; 0x8
         634e4:	e28d0008 	add	r0, sp, #8	; 0x8
         634e8:	eb6dc13a 	bl	1bd39d8 <$GetGlobalTime>
         634ec:	e2850f73 	add	r0, r5, #460	; 0x1cc
         634f0:	e2800b01 	add	r0, r0, #1024	; 0x400
         634f4:	e24dd008 	sub	sp, sp, #8	; 0x8
         634f8:	e28d2010 	add	r2, sp, #16	; 0x10
         634fc:	e8925000 	ldmia	r2, {ip, lr}
         63500:	e88d5000 	stmia	sp, {ip, lr}
         63504:	e1a0100d 	mov	r1, sp
         63508:	eb6df6e3 	bl	1be109c <$CompSub>
         6350c:	e28d0018 	add	r0, sp, #24	; 0x18
         63510:	e8bd5000 	ldmia	sp!, {ip, lr}
         63514:	e8805000 	stmia	r0, {ip, lr}
         63518:	e1a01006 	mov	r1, r6
         6351c:	e28d0010 	add	r0, sp, #16	; 0x10
         63520:	eb6df6d8 	bl	1be1088 <$CompCompare>
         63524:	e3500000 	cmp	r0, #0	; 0x0
         63528:	b3a07001 	movlt	r7, #1	; 0x1
         6352c:	e28dd010 	add	sp, sp, #16	; 0x10
         63530:	e3370000 	teq	r7, #0	; 0x0
         63534:	0a000019 	beq	635a0 <TClassOneModem::PutCommand(void)+0x144>
         63538:	e24dd018 	sub	sp, sp, #24	; 0x18
         6353c:	e8965000 	ldmia	r6, {ip, lr}
         63540:	e88d5000 	stmia	sp, {ip, lr}
         63544:	e1a0100d 	mov	r1, sp
         63548:	e28d0018 	add	r0, sp, #24	; 0x18
         6354c:	eb6df6d2 	bl	1be109c <$CompSub>
         63550:	e28d0008 	add	r0, sp, #8	; 0x8
         63554:	e8bd5000 	ldmia	sp!, {ip, lr}
         63558:	e8805000 	stmia	r0, {ip, lr}
         6355c:	e28d0008 	add	r0, sp, #8	; 0x8
         63560:	e89d5000 	ldmia	sp, {ip, lr}
         63564:	e8805000 	stmia	r0, {ip, lr}
         63568:	e28d0008 	add	r0, sp, #8	; 0x8
         6356c:	e1a01004 	mov	r1, r4
         63570:	eb6db4af 	bl	1bd0834 <TTime::$ConvertTo(TimeUnits)>
         63574:	e1a02000 	mov	r2, r0
         63578:	e1a00005 	mov	r0, r5
         6357c:	e3a01003 	mov	r1, #3	; 0x3
         63580:	eb6717c7 	bl	1a294a4 <TClassOneModem::$PostTimer(unsigned long, unsigned long)>
         63584:	e3300000 	teq	r0, #0	; 0x0
         63588:	e28dd010 	add	sp, sp, #16	; 0x10
         6358c:	0a00000c 	beq	635c4 <TClassOneModem::PutCommand(void)+0x168>
         63590:	e1a01000 	mov	r1, r0
         63594:	e1a00005 	mov	r0, r5
         63598:	eb66cd74 	bl	1a16b70 <TClassOneModem::$PutCommandComplete(long)>
         6359c:	ea000008 	b	635c4 <TClassOneModem::PutCommand(void)+0x168>
         635a0:	e1a00005 	mov	r0, r5
         635a4:	eb66b4a5 	bl	1a10840 <TAsyncSerTool::$FlushInputBytes(void)>
         635a8:	e59505b0 	ldr	r0, [r5, #1456]	; fField1456
         635ac:	e3800004 	orr	r0, r0, #4	; 0x4
         635b0:	e58505b0 	str	r0, [r5, #1456]	; fField1456
         635b4:	e2851f9d 	add	r1, r5, #628	; 0x274
         635b8:	e2811b01 	add	r1, r1, #1024	; 0x400
         635bc:	e1a00005 	mov	r0, r5
         635c0:	eb66cd67 	bl	1a16b64 <TSerTool::$PutBytes(CBufferList *)>
         635c4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TClassOneModem::PutCommandComplete(long)
 * Address: 000635c8
 */
TClassOneModem::PutCommandComplete(long) {
    /*
         635c8:	e59025b0 	ldr	r2, [r0, #1456]	; fField1456
         635cc:	e3c22004 	bic	r2, r2, #4	; 0x4
         635d0:	e58025b0 	str	r2, [r0, #1456]	; fField1456
         635d4:	e3120020 	tst	r2, #32	; 0x20
         635d8:	11a0f00e 	movne	pc, lr
         635dc:	e3310000 	teq	r1, #0	; 0x0
         635e0:	0a66b4a5 	beq	1a1087c <TClassOneModem::$GetCommandResult(void)>
         635e4:	1a66c51d 	bne	1a14a60 <TClassOneModem::$ModemCommandComplete(long)>
    */
}

/**
 * Symbol: TClassOneModem::ModemCommandComplete(long)
 * Address: 000635e8
 */
TClassOneModem::ModemCommandComplete(long) {
    /*
         635e8:	e1a0c00d 	mov	ip, sp
         635ec:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         635f0:	e24cb004 	sub	fp, ip, #4	; 0x4
         635f4:	e1a04000 	mov	r4, r0
         635f8:	e1a05001 	mov	r5, r1
         635fc:	eb66fee3 	bl	1a23190 <TClassOneModem::$AbortTimer(void)>
         63600:	e58455c4 	str	r5, [r4, #1476]	; fField1476
         63604:	e2840f73 	add	r0, r4, #460	; 0x1cc
         63608:	e2800b01 	add	r0, r0, #1024	; 0x400
         6360c:	eb6dc0f1 	bl	1bd39d8 <$GetGlobalTime>
         63610:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         63614:	e3100b01 	tst	r0, #1024	; 0x400
         63618:	11a00004 	movne	r0, r4
         6361c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         63620:	1a66a40d 	bne	1a0c65c <TClassOneModem::$C1IdModem(void)>
         63624:	e3100a01 	tst	r0, #4096	; 0x1000
         63628:	11a01005 	movne	r1, r5
         6362c:	11a00004 	movne	r0, r4
         63630:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         63634:	1a66bccb 	bne	1a12968 <TClassOneModem::$HangUpContinue(long)>
         63638:	e3100b02 	tst	r0, #2048	; 0x800
         6363c:	0a000008 	beq	63664 <TClassOneModem::ModemCommandComplete(long)+0x7c>
         63640:	e59405b4 	ldr	r0, [r4, #1460]	; fField1460
         63644:	e330000c 	teq	r0, #12	; 0xc
         63648:	03a05000 	moveq	r5, #0	; 0x0
         6364c:	03a00001 	moveq	r0, #1	; 0x1
         63650:	058405b4 	streq	r0, [r4, #1460]	; fField1460
         63654:	e1a01005 	mov	r1, r5
         63658:	e1a00004 	mov	r0, r4
         6365c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         63660:	ea66ac32 	b	1a0e730 <TClassOneModem::$ConnectModemContinue(long)>
         63664:	e3100703 	tst	r0, #786432	; 0xc0000
         63668:	11a01005 	movne	r1, r5
         6366c:	11a00004 	movne	r0, r4
         63670:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         63674:	1a66a802 	bne	1a0d684 <TClassOneModem::$C1PktContinue(long)>
         63678:	e3100801 	tst	r0, #65536	; 0x10000
         6367c:	0a00001d 	beq	636f8 <TClassOneModem::ModemCommandComplete(long)+0x110>
         63680:	e5940b94 	ldr	r0, [r4, #2964]	; fField2964
         63684:	e59fc05c 	ldr	ip, [pc, #5c]	; 636e8 <TClassOneModem::ModemCommandComplete(long)+0x100>
         63688:	e130000c 	teq	r0, ip
         6368c:	01a01005 	moveq	r1, r5
         63690:	01a00004 	moveq	r0, r4
         63694:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
         63698:	0a66e5e6 	beq	1a1ce38 <TClassOneModem::$C1GetFaxCapabilities(long)>
         6369c:	e59fc048 	ldr	ip, [pc, #48]	; 636ec <TClassOneModem::ModemCommandComplete(long)+0x104>
         636a0:	e130000c 	teq	r0, ip
         636a4:	01a01005 	moveq	r1, r5
         636a8:	01a00004 	moveq	r0, r4
         636ac:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
         636b0:	0a6702dd 	beq	1a2422c <TClassOneModem::$C1GetCapContinue(long)>
         636b4:	e59fc034 	ldr	ip, [pc, #34]	; 636f0 <TClassOneModem::ModemCommandComplete(long)+0x108>
         636b8:	e130000c 	teq	r0, ip
         636bc:	01a01005 	moveq	r1, r5
         636c0:	01a00004 	moveq	r0, r4
         636c4:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
         636c8:	0a66ee0c 	beq	1a1ef00 <TClassOneModem::$SetServiceClass(long)>
         636cc:	e59fc020 	ldr	ip, [pc, #20]	; 636f4 <TClassOneModem::ModemCommandComplete(long)+0x10c>	; fField20
         636d0:	e130000c 	teq	r0, ip
         636d4:	01a01005 	moveq	r1, r5
         636d8:	01a00004 	moveq	r0, r4
         636dc:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
         636e0:	0a66ea03 	beq	1a1def4 <TClassOneModem::$GetSrvcClsSupported(long)>
         636e4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         636e8:	6d663163 	stfvse	f3, [r6, -#396]!
         636ec:	6d666178 	stfvse	f6, [r6, -#480]!
         636f0:	6d667363 	stcvsl	3, cr7, [r6, -#396]!
         636f4:	6d667371 	stcvsl	3, cr7, [r6, -#452]!
         636f8:	e5d408d8 	ldrb	r0, [r4, #2264]	; fField2264
         636fc:	e3300000 	teq	r0, #0	; 0x0
         63700:	15d408d9 	ldrneb	r0, [r4, #2265]	; fField2265
         63704:	13300000 	teqne	r0, #0	; 0x0
         63708:	11a00004 	movne	r0, r4
         6370c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         63710:	1a6723be 	bne	1a2c610 <TClassOneModem::$TAPICommandComplete(void)>
         63714:	e594088c 	ldr	r0, [r4, #2188]	; fField2188
         63718:	e3300004 	teq	r0, #4	; 0x4
         6371c:	13300008 	teqne	r0, #8	; 0x8
         63720:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         63724:	e59405f4 	ldr	r0, [r4, #1524]	; fField1524
         63728:	e3300001 	teq	r0, #1	; 0x1
         6372c:	01a00004 	moveq	r0, r4
         63730:	0b66edf3 	bleq	1a1ef04 <TClassOneModem::$UnblockGetAndPutChannel(void)>
         63734:	e2843f79 	add	r3, r4, #484	; 0x1e4
         63738:	e2833b01 	add	r3, r3, #1024	; 0x400
         6373c:	e1a02005 	mov	r2, r5
         63740:	e1a00004 	mov	r0, r4
         63744:	e3a01002 	mov	r1, #2	; 0x2
         63748:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         6374c:	ea6d65c8 	b	1bbce74 <TCommTool::$CompleteRequest(CommToolChannelNumber, long, TCommToolReply &)>
    */
}

/**
 * Symbol: TClassOneModem::PutFramedBytes(CBufferList *, unsigned char)
 * Address: 00063750
 */
TClassOneModem::PutFramedBytes(CBufferList *, unsigned char) {
    /*
         63750:	e20220ff 	and	r2, r2, #255	; 0xff
         63754:	e59037b4 	ldr	r3, [r0, #1972]	; fField1972
         63758:	e3330002 	teq	r3, #2	; 0x2
         6375c:	1a66d10c 	bne	1a17b94 <TSerTool::$PutFramedBytes(CBufferList *, unsigned char)>
         63760:	0a66d108 	beq	1a17b88 <TMNP::$PutFramedBytes(CBufferList *, unsigned char)>
    */
}

/**
 * Symbol: TClassOneModem::CheckForErrorResult(unsigned long)
 * Address: 00063764
 */
TClassOneModem::CheckForErrorResult(unsigned long) {
    /*
         63764:	e3a00000 	mov	r0, #0	; 0x0
         63768:	e3510007 	cmp	r1, #7	; 0x7
         6376c:	03e000c2 	mvneq	r0, #194	; 0xc2
         63770:	02400c5d 	subeq	r0, r0, #23808	; 0x5d00
         63774:	01a0f00e 	moveq	pc, lr
         63778:	ca00000b 	bgt	637ac <TClassOneModem::CheckForErrorResult(unsigned long)+0x48>
         6377c:	e3310003 	teq	r1, #3	; 0x3
         63780:	03e000c1 	mvneq	r0, #193	; 0xc1
         63784:	02400c5d 	subeq	r0, r0, #23808	; 0x5d00
         63788:	01a0f00e 	moveq	pc, lr
         6378c:	e3310004 	teq	r1, #4	; 0x4
         63790:	059f000c 	ldreq	r0, [pc, #c]	; 637a4 <TClassOneModem::CheckForErrorResult(unsigned long)+0x40>
         63794:	01a0f00e 	moveq	pc, lr
         63798:	e3310006 	teq	r1, #6	; 0x6
         6379c:	059f0004 	ldreq	r0, [pc, #4]	; 637a8 <TClassOneModem::CheckForErrorResult(unsigned long)+0x44>	; fField4
         637a0:	e1a0f00e 	mov	pc, lr
         637a4:	ffffa23b 	swinv	0x00ffa23b
         637a8:	ffffa23f 	swinv	0x00ffa23f
         637ac:	e3310008 	teq	r1, #8	; 0x8
         637b0:	03e000c3 	mvneq	r0, #195	; 0xc3
         637b4:	02400c5d 	subeq	r0, r0, #23808	; 0x5d00
         637b8:	01a0f00e 	moveq	pc, lr
         637bc:	e3310010 	teq	r1, #16	; 0x10
         637c0:	03a0003a 	moveq	r0, #58	; 0x3a
         637c4:	02400c5e 	subeq	r0, r0, #24064	; 0x5e00
         637c8:	01a0f00e 	moveq	pc, lr
         637cc:	e331003b 	teq	r1, #59	; 0x3b
         637d0:	03a00039 	moveq	r0, #57	; 0x39
         637d4:	02400c5e 	subeq	r0, r0, #24064	; 0x5e00
         637d8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TClassOneModem::BuildCommand(unsigned char const *, unsigned char *, unsigned long, unsigned char *, unsigned long, unsigned char *, unsigned long)
 * Address: 000637dc
 */
TClassOneModem::BuildCommand(unsigned char const *, unsigned char *, unsigned long, unsigned char *, unsigned long, unsigned char *, unsigned long) {
    /*
         637dc:	e1a0c00d 	mov	ip, sp
         637e0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         637e4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         637e8:	e24cb014 	sub	fp, ip, #20	; 0x14
         637ec:	e1a04000 	mov	r4, r0
         637f0:	e1a0a001 	mov	sl, r1
         637f4:	e1a05002 	mov	r5, r2
         637f8:	e59b801c 	ldr	r8, [fp, #28]	; fField28
         637fc:	e59b9014 	ldr	r9, [fp, #20]	; fField20
         63800:	e24dd004 	sub	sp, sp, #4	; 0x4
         63804:	e2800f9d 	add	r0, r0, #628	; 0x274
         63808:	e2800b01 	add	r0, r0, #1024	; 0x400
         6380c:	e1a07000 	mov	r7, r0
         63810:	eb6e2385 	bl	1bec62c <CBufferList::$RemoveAll(void)>
         63814:	e1b06000 	movs	r6, r0
         63818:	1a00005d 	bne	63994 <TClassOneModem::BuildCommand(unsigned char const *, unsigned char *, unsigned long, unsigned char *, unsigned long, unsigned char *, unsigned long)+0x1b8>
         6381c:	e3e03000 	mvn	r3, #0	; 0x0
         63820:	e3a02000 	mov	r2, #0	; 0x0
         63824:	e92d000c 	stmdb	sp!, {r2, r3}
         63828:	e1a0000a 	mov	r0, sl
         6382c:	eb6d489f 	bl	1bb5ab0 <$strlen>
         63830:	e1a02000 	mov	r2, r0
         63834:	e2840faf 	add	r0, r4, #700	; 0x2bc
         63838:	e2800b01 	add	r0, r0, #1024	; 0x400
         6383c:	e1a0100a 	mov	r1, sl
         63840:	e3a03000 	mov	r3, #0	; 0x0
         63844:	e58d0008 	str	r0, [sp, #8]	; fField8
         63848:	eb6e1717 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
         6384c:	e28dd008 	add	sp, sp, #8	; 0x8
         63850:	e1b06000 	movs	r6, r0
         63854:	1a00004e 	bne	63994 <TClassOneModem::BuildCommand(unsigned char const *, unsigned char *, unsigned long, unsigned char *, unsigned long, unsigned char *, unsigned long)+0x1b8>
         63858:	e1a00007 	mov	r0, r7
         6385c:	e59d1000 	ldr	r1, [sp]
         63860:	eb6e1b27 	bl	1bea504 <CBufferList::$InsertLast(CBuffer *)>
         63864:	e1b06000 	movs	r6, r0
         63868:	1a000049 	bne	63994 <TClassOneModem::BuildCommand(unsigned char const *, unsigned char *, unsigned long, unsigned char *, unsigned long, unsigned char *, unsigned long)+0x1b8>
         6386c:	e3350000 	teq	r5, #0	; 0x0
         63870:	0a000047 	beq	63994 <TClassOneModem::BuildCommand(unsigned char const *, unsigned char *, unsigned long, unsigned char *, unsigned long, unsigned char *, unsigned long)+0x1b8>
         63874:	e284afb9 	add	sl, r4, #740	; 0x2e4
         63878:	e28aab01 	add	sl, sl, #1024	; 0x400
         6387c:	e59b2010 	ldr	r2, [fp, #16]	; fField16
         63880:	e3320000 	teq	r2, #0	; 0x0
         63884:	e3e03000 	mvn	r3, #0	; 0x0
         63888:	e3a02000 	mov	r2, #0	; 0x0
         6388c:	e92d000c 	stmdb	sp!, {r2, r3}
         63890:	11a0000a 	movne	r0, sl
         63894:	159b2010 	ldrne	r2, [fp, #16]	; fField16
         63898:	1a000003 	bne	638ac <TClassOneModem::BuildCommand(unsigned char const *, unsigned char *, unsigned long, unsigned char *, unsigned long, unsigned char *, unsigned long)+0xd0>
         6389c:	e1a00005 	mov	r0, r5
         638a0:	eb6d4882 	bl	1bb5ab0 <$strlen>
         638a4:	e1a02000 	mov	r2, r0
         638a8:	e1a0000a 	mov	r0, sl
         638ac:	e1a01005 	mov	r1, r5
         638b0:	e3a03000 	mov	r3, #0	; 0x0
         638b4:	eb6e16fc 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
         638b8:	e28dd008 	add	sp, sp, #8	; 0x8
         638bc:	e1b06000 	movs	r6, r0
         638c0:	1a000033 	bne	63994 <TClassOneModem::BuildCommand(unsigned char const *, unsigned char *, unsigned long, unsigned char *, unsigned long, unsigned char *, unsigned long)+0x1b8>
         638c4:	e1a0100a 	mov	r1, sl
         638c8:	e1a00007 	mov	r0, r7
         638cc:	eb6e1b0c 	bl	1bea504 <CBufferList::$InsertLast(CBuffer *)>
         638d0:	e3390000 	teq	r9, #0	; 0x0
         638d4:	0a00002e 	beq	63994 <TClassOneModem::BuildCommand(unsigned char const *, unsigned char *, unsigned long, unsigned char *, unsigned long, unsigned char *, unsigned long)+0x1b8>
         638d8:	e2845fc3 	add	r5, r4, #780	; 0x30c
         638dc:	e2855b01 	add	r5, r5, #1024	; 0x400
         638e0:	e59b2018 	ldr	r2, [fp, #24]	; fField24
         638e4:	e3320000 	teq	r2, #0	; 0x0
         638e8:	e3e03000 	mvn	r3, #0	; 0x0
         638ec:	e3a02000 	mov	r2, #0	; 0x0
         638f0:	e92d000c 	stmdb	sp!, {r2, r3}
         638f4:	11a00005 	movne	r0, r5
         638f8:	159b2018 	ldrne	r2, [fp, #24]	; fField24
         638fc:	1a000003 	bne	63910 <TClassOneModem::BuildCommand(unsigned char const *, unsigned char *, unsigned long, unsigned char *, unsigned long, unsigned char *, unsigned long)+0x134>
         63900:	e1a00009 	mov	r0, r9
         63904:	eb6d4869 	bl	1bb5ab0 <$strlen>
         63908:	e1a02000 	mov	r2, r0
         6390c:	e1a00005 	mov	r0, r5
         63910:	e1a01009 	mov	r1, r9
         63914:	e3a03000 	mov	r3, #0	; 0x0
         63918:	eb6e16e3 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
         6391c:	e28dd008 	add	sp, sp, #8	; 0x8
         63920:	e1b06000 	movs	r6, r0
         63924:	1a00001a 	bne	63994 <TClassOneModem::BuildCommand(unsigned char const *, unsigned char *, unsigned long, unsigned char *, unsigned long, unsigned char *, unsigned long)+0x1b8>
         63928:	e1a01005 	mov	r1, r5
         6392c:	e1a00007 	mov	r0, r7
         63930:	eb6e1af3 	bl	1bea504 <CBufferList::$InsertLast(CBuffer *)>
         63934:	e3380000 	teq	r8, #0	; 0x0
         63938:	0a000015 	beq	63994 <TClassOneModem::BuildCommand(unsigned char const *, unsigned char *, unsigned long, unsigned char *, unsigned long, unsigned char *, unsigned long)+0x1b8>
         6393c:	e2844fcd 	add	r4, r4, #820	; 0x334
         63940:	e2844b01 	add	r4, r4, #1024	; 0x400
         63944:	e59b2020 	ldr	r2, [fp, #32]	; fField32
         63948:	e3320000 	teq	r2, #0	; 0x0
         6394c:	e3e03000 	mvn	r3, #0	; 0x0
         63950:	e3a02000 	mov	r2, #0	; 0x0
         63954:	e92d000c 	stmdb	sp!, {r2, r3}
         63958:	11a00004 	movne	r0, r4
         6395c:	159b2020 	ldrne	r2, [fp, #32]	; fField32
         63960:	1a000003 	bne	63974 <TClassOneModem::BuildCommand(unsigned char const *, unsigned char *, unsigned long, unsigned char *, unsigned long, unsigned char *, unsigned long)+0x198>
         63964:	e1a00008 	mov	r0, r8
         63968:	eb6d4850 	bl	1bb5ab0 <$strlen>
         6396c:	e1a02000 	mov	r2, r0
         63970:	e1a00004 	mov	r0, r4
         63974:	e1a01008 	mov	r1, r8
         63978:	e3a03000 	mov	r3, #0	; 0x0
         6397c:	eb6e16ca 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
         63980:	e28dd008 	add	sp, sp, #8	; 0x8
         63984:	e1b06000 	movs	r6, r0
         63988:	01a01004 	moveq	r1, r4
         6398c:	01a00007 	moveq	r0, r7
         63990:	0b6e1adb 	bleq	1bea504 <CBufferList::$InsertLast(CBuffer *)>
         63994:	e1a00006 	mov	r0, r6
         63998:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TClassOneModem::PrepareCommand(unsigned long)
 * Address: 0006399c
 */
TClassOneModem::PrepareCommand(unsigned long) {
    /*
         6399c:	e1a0c00d 	mov	ip, sp
         639a0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         639a4:	e24cb004 	sub	fp, ip, #4	; 0x4
         639a8:	e1a04000 	mov	r4, r0
         639ac:	e1a00001 	mov	r0, r1
         639b0:	e24dd010 	sub	sp, sp, #16	; 0x10
         639b4:	e2849f9d 	add	r9, r4, #628	; 0x274
         639b8:	e2899b01 	add	r9, r9, #1024	; 0x400
         639bc:	e3310003 	teq	r1, #3	; 0x3
         639c0:	1a00006e 	bne	63b80 <TClassOneModem::PrepareCommand(unsigned long)+0x1e4>
         639c4:	e5940904 	ldr	r0, [r4, #2308]	; fField2308
         639c8:	e5941900 	ldr	r1, [r4, #2304]	; fField2304
         639cc:	e0415000 	sub	r5, r1, r0
         639d0:	e59417d8 	ldr	r1, [r4, #2008]	; fField2008
         639d4:	e591101c 	ldr	r1, [r1, #28]	; fField28
         639d8:	e3a02080 	mov	r2, #128	; 0x80
         639dc:	e3510080 	cmp	r1, #128	; 0x80
         639e0:	a1a01002 	movge	r1, r2
         639e4:	e2411002 	sub	r1, r1, #2	; 0x2
         639e8:	e59f6064 	ldr	r6, [pc, #64]	; 63a54 <TClassOneModem::PrepareCommand(unsigned long)+0xb8>
         639ec:	e1550001 	cmp	r5, r1
         639f0:	82415001 	subhi	r5, r1, #1	; 0x1
         639f4:	8a000004 	bhi	63a0c <TClassOneModem::PrepareCommand(unsigned long)+0x70>
         639f8:	e5d418d8 	ldrb	r1, [r4, #2264]	; fField2264
         639fc:	e3310000 	teq	r1, #0	; 0x0
         63a00:	15d418d9 	ldrneb	r1, [r4, #2265]	; fField2265
         63a04:	13310000 	teqne	r1, #0	; 0x0
         63a08:	03a06000 	moveq	r6, #0	; 0x0
         63a0c:	e59418fc 	ldr	r1, [r4, #2300]	; fField2300
         63a10:	e59fa040 	ldr	sl, [pc, #40]	; 63a58 <TClassOneModem::PrepareCommand(unsigned long)+0xbc>	; fField40
         63a14:	e59f8040 	ldr	r8, [pc, #40]	; 63a5c <TClassOneModem::PrepareCommand(unsigned long)+0xc0>	; fField40
         63a18:	e3310000 	teq	r1, #0	; 0x0
         63a1c:	1a00000f 	bne	63a60 <TClassOneModem::PrepareCommand(unsigned long)+0xc4>
         63a20:	e3a03000 	mov	r3, #0	; 0x0
         63a24:	e3a02000 	mov	r2, #0	; 0x0
         63a28:	e3a01000 	mov	r1, #0	; 0x0
         63a2c:	e3a00000 	mov	r0, #0	; 0x0
         63a30:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         63a34:	e5d407c7 	ldrb	r0, [r4, #1991]	; fField1991
         63a38:	e3300000 	teq	r0, #0	; 0x0
         63a3c:	01a01008 	moveq	r1, r8
         63a40:	11a0100a 	movne	r1, sl
         63a44:	e1a02006 	mov	r2, r6
         63a48:	e1a00004 	mov	r0, r4
         63a4c:	e3a03000 	mov	r3, #0	; 0x0
         63a50:	ea00002b 	b	63b04 <TClassOneModem::PrepareCommand(unsigned long)+0x168>
         63a54:	0036f9fc 	ldreqsh	pc, [r6], -ip
         63a58:	0036f9c8 	eoreqs	pc, r6, r8, asr #19
         63a5c:	0036f9cc 	eoreqs	pc, r6, ip, asr #19
         63a60:	e594283c 	ldr	r2, [r4, #2108]	; fField2108
         63a64:	e3120502 	tst	r2, #8388608	; 0x800000
         63a68:	e2847eb1 	add	r7, r4, #2832	; 0xb10
         63a6c:	1a000002 	bne	63a7c <TClassOneModem::PrepareCommand(unsigned long)+0xe0>
         63a70:	e5d42800 	ldrb	r2, [r4, #2048]	; fField2048
         63a74:	e3320000 	teq	r2, #0	; 0x0
         63a78:	1a000005 	bne	63a94 <TClassOneModem::PrepareCommand(unsigned long)+0xf8>
         63a7c:	e0811000 	add	r1, r1, r0
         63a80:	e1a00007 	mov	r0, r7
         63a84:	e1a02005 	mov	r2, r5
         63a88:	eb6d43f0 	bl	1bb4a50 <$memcpy>
         63a8c:	e1a0c005 	mov	ip, r5
         63a90:	ea00000f 	b	63ad4 <TClassOneModem::PrepareCommand(unsigned long)+0x138>
         63a94:	e3a00000 	mov	r0, #0	; 0x0
         63a98:	e5c40b10 	strb	r0, [r4, #2832]	; fField2832
         63a9c:	e1a0c000 	mov	ip, r0
         63aa0:	e3550000 	cmp	r5, #0	; 0x0
         63aa4:	9a00000a 	bls	63ad4 <TClassOneModem::PrepareCommand(unsigned long)+0x138>
         63aa8:	e5941904 	ldr	r1, [r4, #2308]	; fField2308
         63aac:	e0811000 	add	r1, r1, r0
         63ab0:	e59428fc 	ldr	r2, [r4, #2300]	; fField2300
         63ab4:	e7d21001 	ldrb	r1, [r2, r1]
         63ab8:	e331002d 	teq	r1, #45	; 0x2d
         63abc:	1084200c 	addne	r2, r4, ip
         63ac0:	15c21b10 	strneb	r1, [r2, #2832]	; fField2832
         63ac4:	128cc001 	addne	ip, ip, #1	; 0x1
         63ac8:	e2800001 	add	r0, r0, #1	; 0x1
         63acc:	e1500005 	cmp	r0, r5
         63ad0:	3afffff4 	bcc	63aa8 <TClassOneModem::PrepareCommand(unsigned long)+0x10c>
         63ad4:	e3a03000 	mov	r3, #0	; 0x0
         63ad8:	e3a02000 	mov	r2, #0	; 0x0
         63adc:	e3a01000 	mov	r1, #0	; 0x0
         63ae0:	e1a00006 	mov	r0, r6
         63ae4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         63ae8:	e1a02007 	mov	r2, r7
         63aec:	e5d407c7 	ldrb	r0, [r4, #1991]	; fField1991
         63af0:	e3300000 	teq	r0, #0	; 0x0
         63af4:	01a01008 	moveq	r1, r8
         63af8:	11a0100a 	movne	r1, sl
         63afc:	e1a0300c 	mov	r3, ip
         63b00:	e1a00004 	mov	r0, r4
         63b04:	eb669eba 	bl	1a0b5f4 <TClassOneModem::$BuildCommand(unsigned char const *, unsigned char *, unsigned long, unsigned char *, unsigned long, unsigned char *, unsigned long)>
         63b08:	e28dd010 	add	sp, sp, #16	; 0x10
         63b0c:	e5941904 	ldr	r1, [r4, #2308]	; fField2308
         63b10:	e0811005 	add	r1, r1, r5
         63b14:	e5841904 	str	r1, [r4, #2308]	; fField2308
         63b18:	e5d418d8 	ldrb	r1, [r4, #2264]	; fField2264
         63b1c:	e3310000 	teq	r1, #0	; 0x0
         63b20:	15d418d9 	ldrneb	r1, [r4, #2265]	; fField2265
         63b24:	13310000 	teqne	r1, #0	; 0x0
         63b28:	0a00000d 	beq	63b64 <TClassOneModem::PrepareCommand(unsigned long)+0x1c8>
         63b2c:	e5d417cb 	ldrb	r1, [r4, #1995]	; fField1995
         63b30:	e3510004 	cmp	r1, #4	; 0x4
         63b34:	d3a01004 	movle	r1, #4	; 0x4
         63b38:	e081c081 	add	ip, r1, r1, lsl #1
         63b3c:	e06c1381 	rsb	r1, ip, r1, lsl #7
         63b40:	e1a01181 	mov	r1, r1, lsl #3
         63b44:	e5d427cc 	ldrb	r2, [r4, #1996]	; fField1996
         63b48:	e0020295 	mul	r2, r5, r2
         63b4c:	e082c082 	add	ip, r2, r2, lsl #1
         63b50:	e06c2382 	rsb	r2, ip, r2, lsl #7
         63b54:	e0811182 	add	r1, r1, r2, lsl #3
         63b58:	e2811e77 	add	r1, r1, #1904	; 0x770
         63b5c:	e2811a01 	add	r1, r1, #4096	; 0x1000
         63b60:	ea000151 	b	640ac <TClassOneModem::PrepareCommand(unsigned long)+0x710>
         63b64:	e5d417ca 	ldrb	r1, [r4, #1994]	; fField1994
         63b68:	e081c081 	add	ip, r1, r1, lsl #1
         63b6c:	e06c1381 	rsb	r1, ip, r1, lsl #7
         63b70:	e3a02ea6 	mov	r2, #2656	; 0xa60
         63b74:	e2822a0e 	add	r2, r2, #57344	; 0xe000
         63b78:	e0821181 	add	r1, r2, r1, lsl #3
         63b7c:	ea00014a 	b	640ac <TClassOneModem::PrepareCommand(unsigned long)+0x710>
         63b80:	e350001f 	cmp	r0, #31	; 0x1f
         63b84:	359417d8 	ldrcc	r1, [r4, #2008]	; fField2008
         63b88:	35911018 	ldrcc	r1, [r1, #24]	; fField24
         63b8c:	3584178c 	strcc	r1, [r4, #1932]	; fField1932
         63b90:	e59f1200 	ldr	r1, [pc, #200]	; 63d98 <TClassOneModem::PrepareCommand(unsigned long)+0x3fc>
         63b94:	e59fa200 	ldr	sl, [pc, #200]	; 63d9c <TClassOneModem::PrepareCommand(unsigned long)+0x400>
         63b98:	e59f2200 	ldr	r2, [pc, #200]	; 63da0 <TClassOneModem::PrepareCommand(unsigned long)+0x404>
         63b9c:	e58d200c 	str	r2, [sp, #12]	; fField12
         63ba0:	e59f21fc 	ldr	r2, [pc, #1fc]	; 63da4 <TClassOneModem::PrepareCommand(unsigned long)+0x408>
         63ba4:	e58d2008 	str	r2, [sp, #8]	; fField8
         63ba8:	e59f21f8 	ldr	r2, [pc, #1f8]	; 63da8 <TClassOneModem::PrepareCommand(unsigned long)+0x40c>
         63bac:	e58d2004 	str	r2, [sp, #4]	; fField4
         63bb0:	e59f21f4 	ldr	r2, [pc, #1f4]	; 63dac <TClassOneModem::PrepareCommand(unsigned long)+0x410>
         63bb4:	e58d2000 	str	r2, [sp]
         63bb8:	e59f81f0 	ldr	r8, [pc, #1f0]	; 63db0 <TClassOneModem::PrepareCommand(unsigned long)+0x414>
         63bbc:	e2845f8d 	add	r5, r4, #564	; 0x234
         63bc0:	e2855b01 	add	r5, r5, #1024	; 0x400
         63bc4:	e2846f4d 	add	r6, r4, #308	; 0x134
         63bc8:	e2866b02 	add	r6, r6, #2048	; 0x800
         63bcc:	e2847eaa 	add	r7, r4, #2720	; 0xaa0
         63bd0:	e3500068 	cmp	r0, #104	; 0x68
         63bd4:	908ff100 	addls	pc, pc, r0, lsl #2
         63bd8:	ea00042e 	b	64c98 <TClassOneModem::PrepareCommand(unsigned long)+0x12fc>
         63bdc:	ea00042d 	b	64c98 <TClassOneModem::PrepareCommand(unsigned long)+0x12fc>
         63be0:	ea000074 	b	63db8 <TClassOneModem::PrepareCommand(unsigned long)+0x41c>
         63be4:	ea00007b 	b	63dd8 <TClassOneModem::PrepareCommand(unsigned long)+0x43c>
         63be8:	ea00042a 	b	64c98 <TClassOneModem::PrepareCommand(unsigned long)+0x12fc>
         63bec:	ea00008f 	b	63e30 <TClassOneModem::PrepareCommand(unsigned long)+0x494>
         63bf0:	ea0000ac 	b	63ea8 <TClassOneModem::PrepareCommand(unsigned long)+0x50c>
         63bf4:	ea0000b4 	b	63ecc <TClassOneModem::PrepareCommand(unsigned long)+0x530>
         63bf8:	ea0000bc 	b	63ef0 <TClassOneModem::PrepareCommand(unsigned long)+0x554>
         63bfc:	ea0000c3 	b	63f10 <TClassOneModem::PrepareCommand(unsigned long)+0x574>
         63c00:	ea0000ca 	b	63f30 <TClassOneModem::PrepareCommand(unsigned long)+0x594>
         63c04:	ea0000d1 	b	63f50 <TClassOneModem::PrepareCommand(unsigned long)+0x5b4>
         63c08:	ea0000d8 	b	63f70 <TClassOneModem::PrepareCommand(unsigned long)+0x5d4>
         63c0c:	ea0000df 	b	63f90 <TClassOneModem::PrepareCommand(unsigned long)+0x5f4>
         63c10:	ea000420 	b	64c98 <TClassOneModem::PrepareCommand(unsigned long)+0x12fc>
         63c14:	ea0000ef 	b	63fd8 <TClassOneModem::PrepareCommand(unsigned long)+0x63c>
         63c18:	ea0000f9 	b	64004 <TClassOneModem::PrepareCommand(unsigned long)+0x668>
         63c1c:	ea000103 	b	64030 <TClassOneModem::PrepareCommand(unsigned long)+0x694>
         63c20:	ea000112 	b	64070 <TClassOneModem::PrepareCommand(unsigned long)+0x6d4>
         63c24:	ea00041b 	b	64c98 <TClassOneModem::PrepareCommand(unsigned long)+0x12fc>
         63c28:	ea000121 	b	640b4 <TClassOneModem::PrepareCommand(unsigned long)+0x718>
         63c2c:	ea000123 	b	640c0 <TClassOneModem::PrepareCommand(unsigned long)+0x724>
         63c30:	ea000130 	b	640f8 <TClassOneModem::PrepareCommand(unsigned long)+0x75c>
         63c34:	ea00013a 	b	64124 <TClassOneModem::PrepareCommand(unsigned long)+0x788>
         63c38:	ea00013d 	b	64134 <TClassOneModem::PrepareCommand(unsigned long)+0x798>
         63c3c:	ea000144 	b	64154 <TClassOneModem::PrepareCommand(unsigned long)+0x7b8>
         63c40:	ea00014b 	b	64174 <TClassOneModem::PrepareCommand(unsigned long)+0x7d8>
         63c44:	ea000152 	b	64194 <TClassOneModem::PrepareCommand(unsigned long)+0x7f8>
         63c48:	ea00015b 	b	641bc <TClassOneModem::PrepareCommand(unsigned long)+0x820>
         63c4c:	ea000166 	b	641ec <TClassOneModem::PrepareCommand(unsigned long)+0x850>
         63c50:	ea00016d 	b	6420c <TClassOneModem::PrepareCommand(unsigned long)+0x870>
         63c54:	ea000181 	b	64260 <TClassOneModem::PrepareCommand(unsigned long)+0x8c4>
         63c58:	ea00040e 	b	64c98 <TClassOneModem::PrepareCommand(unsigned long)+0x12fc>
         63c5c:	ea000278 	b	64644 <TClassOneModem::PrepareCommand(unsigned long)+0xca8>
         63c60:	ea0001e6 	b	64400 <TClassOneModem::PrepareCommand(unsigned long)+0xa64>
         63c64:	ea0001ee 	b	64424 <TClassOneModem::PrepareCommand(unsigned long)+0xa88>
         63c68:	ea00027d 	b	64664 <TClassOneModem::PrepareCommand(unsigned long)+0xcc8>
         63c6c:	ea0001bb 	b	64360 <TClassOneModem::PrepareCommand(unsigned long)+0x9c4>
         63c70:	ea000284 	b	64688 <TClassOneModem::PrepareCommand(unsigned long)+0xcec>
         63c74:	ea0001a1 	b	64300 <TClassOneModem::PrepareCommand(unsigned long)+0x964>
         63c78:	ea0001ee 	b	64438 <TClassOneModem::PrepareCommand(unsigned long)+0xa9c>
         63c7c:	ea000197 	b	642e0 <TClassOneModem::PrepareCommand(unsigned long)+0x944>
         63c80:	ea000266 	b	64620 <TClassOneModem::PrepareCommand(unsigned long)+0xc84>
         63c84:	ea0001c5 	b	643a0 <TClassOneModem::PrepareCommand(unsigned long)+0xa04>
         63c88:	ea0001f8 	b	64470 <TClassOneModem::PrepareCommand(unsigned long)+0xad4>
         63c8c:	ea000286 	b	646ac <TClassOneModem::PrepareCommand(unsigned long)+0xd10>
         63c90:	ea00028d 	b	646cc <TClassOneModem::PrepareCommand(unsigned long)+0xd30>
         63c94:	ea000203 	b	644a8 <TClassOneModem::PrepareCommand(unsigned long)+0xb0c>
         63c98:	ea0001a8 	b	64340 <TClassOneModem::PrepareCommand(unsigned long)+0x9a4>
         63c9c:	ea000292 	b	646ec <TClassOneModem::PrepareCommand(unsigned long)+0xd50>
         63ca0:	ea000209 	b	644cc <TClassOneModem::PrepareCommand(unsigned long)+0xb30>
         63ca4:	ea000210 	b	644ec <TClassOneModem::PrepareCommand(unsigned long)+0xb50>
         63ca8:	ea000214 	b	64500 <TClassOneModem::PrepareCommand(unsigned long)+0xb64>
         63cac:	ea0001c3 	b	643c0 <TClassOneModem::PrepareCommand(unsigned long)+0xa24>
         63cb0:	ea00021b 	b	64524 <TClassOneModem::PrepareCommand(unsigned long)+0xb88>
         63cb4:	ea000199 	b	64320 <TClassOneModem::PrepareCommand(unsigned long)+0x984>
         63cb8:	ea000178 	b	642a0 <TClassOneModem::PrepareCommand(unsigned long)+0x904>
         63cbc:	ea00016f 	b	64280 <TClassOneModem::PrepareCommand(unsigned long)+0x8e4>
         63cc0:	ea000220 	b	64548 <TClassOneModem::PrepareCommand(unsigned long)+0xbac>
         63cc4:	ea000228 	b	6456c <TClassOneModem::PrepareCommand(unsigned long)+0xbd0>
         63cc8:	ea000230 	b	64590 <TClassOneModem::PrepareCommand(unsigned long)+0xbf4>
         63ccc:	ea00017b 	b	642c0 <TClassOneModem::PrepareCommand(unsigned long)+0x924>
         63cd0:	ea000237 	b	645b4 <TClassOneModem::PrepareCommand(unsigned long)+0xc18>
         63cd4:	ea00023f 	b	645d8 <TClassOneModem::PrepareCommand(unsigned long)+0xc3c>
         63cd8:	ea0001a8 	b	64380 <TClassOneModem::PrepareCommand(unsigned long)+0x9e4>
         63cdc:	ea000246 	b	645fc <TClassOneModem::PrepareCommand(unsigned long)+0xc60>
         63ce0:	ea0001be 	b	643e0 <TClassOneModem::PrepareCommand(unsigned long)+0xa44>
         63ce4:	ea000289 	b	64710 <TClassOneModem::PrepareCommand(unsigned long)+0xd74>
         63ce8:	ea000290 	b	64730 <TClassOneModem::PrepareCommand(unsigned long)+0xd94>
         63cec:	ea000297 	b	64750 <TClassOneModem::PrepareCommand(unsigned long)+0xdb4>
         63cf0:	ea00029e 	b	64770 <TClassOneModem::PrepareCommand(unsigned long)+0xdd4>
         63cf4:	ea0002a6 	b	64794 <TClassOneModem::PrepareCommand(unsigned long)+0xdf8>
         63cf8:	ea0002ad 	b	647b4 <TClassOneModem::PrepareCommand(unsigned long)+0xe18>
         63cfc:	ea0002b4 	b	647d4 <TClassOneModem::PrepareCommand(unsigned long)+0xe38>
         63d00:	ea0002bb 	b	647f4 <TClassOneModem::PrepareCommand(unsigned long)+0xe58>
         63d04:	ea0002c8 	b	6482c <TClassOneModem::PrepareCommand(unsigned long)+0xe90>
         63d08:	ea0002cf 	b	6484c <TClassOneModem::PrepareCommand(unsigned long)+0xeb0>
         63d0c:	ea0002de 	b	6488c <TClassOneModem::PrepareCommand(unsigned long)+0xef0>
         63d10:	ea0002e5 	b	648ac <TClassOneModem::PrepareCommand(unsigned long)+0xf10>
         63d14:	ea0002e9 	b	648c0 <TClassOneModem::PrepareCommand(unsigned long)+0xf24>
         63d18:	ea0002ed 	b	648d4 <TClassOneModem::PrepareCommand(unsigned long)+0xf38>
         63d1c:	ea0002f5 	b	648f8 <TClassOneModem::PrepareCommand(unsigned long)+0xf5c>
         63d20:	ea0002fc 	b	64918 <TClassOneModem::PrepareCommand(unsigned long)+0xf7c>
         63d24:	ea000304 	b	6493c <TClassOneModem::PrepareCommand(unsigned long)+0xfa0>
         63d28:	ea00030b 	b	6495c <TClassOneModem::PrepareCommand(unsigned long)+0xfc0>
         63d2c:	ea000313 	b	64980 <TClassOneModem::PrepareCommand(unsigned long)+0xfe4>
         63d30:	ea00031b 	b	649a4 <TClassOneModem::PrepareCommand(unsigned long)+0x1008>
         63d34:	ea000323 	b	649c8 <TClassOneModem::PrepareCommand(unsigned long)+0x102c>
         63d38:	ea00032e 	b	649f8 <TClassOneModem::PrepareCommand(unsigned long)+0x105c>
         63d3c:	ea000335 	b	64a18 <TClassOneModem::PrepareCommand(unsigned long)+0x107c>
         63d40:	ea00033d 	b	64a3c <TClassOneModem::PrepareCommand(unsigned long)+0x10a0>
         63d44:	ea000345 	b	64a60 <TClassOneModem::PrepareCommand(unsigned long)+0x10c4>
         63d48:	ea00034d 	b	64a84 <TClassOneModem::PrepareCommand(unsigned long)+0x10e8>
         63d4c:	ea000355 	b	64aa8 <TClassOneModem::PrepareCommand(unsigned long)+0x110c>
         63d50:	ea0003d0 	b	64c98 <TClassOneModem::PrepareCommand(unsigned long)+0x12fc>
         63d54:	ea00035e 	b	64ad4 <TClassOneModem::PrepareCommand(unsigned long)+0x1138>
         63d58:	ea000367 	b	64afc <TClassOneModem::PrepareCommand(unsigned long)+0x1160>
         63d5c:	ea00036e 	b	64b1c <TClassOneModem::PrepareCommand(unsigned long)+0x1180>
         63d60:	ea000376 	b	64b40 <TClassOneModem::PrepareCommand(unsigned long)+0x11a4>
         63d64:	ea00037c 	b	64b5c <TClassOneModem::PrepareCommand(unsigned long)+0x11c0>
         63d68:	ea000384 	b	64b80 <TClassOneModem::PrepareCommand(unsigned long)+0x11e4>
         63d6c:	ea00038c 	b	64ba4 <TClassOneModem::PrepareCommand(unsigned long)+0x1208>
         63d70:	ea000393 	b	64bc4 <TClassOneModem::PrepareCommand(unsigned long)+0x1228>
         63d74:	ea00039b 	b	64be8 <TClassOneModem::PrepareCommand(unsigned long)+0x124c>
         63d78:	ea0003a5 	b	64c14 <TClassOneModem::PrepareCommand(unsigned long)+0x1278>
         63d7c:	e3a03000 	mov	r3, #0	; 0x0
         63d80:	e3a02000 	mov	r2, #0	; 0x0
         63d84:	e3a01000 	mov	r1, #0	; 0x0
         63d88:	e3a00000 	mov	r0, #0	; 0x0
         63d8c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         63d90:	e59f101c 	ldr	r1, [pc, #1c]	; 63db4 <TClassOneModem::PrepareCommand(unsigned long)+0x418>
         63d94:	ea0003ad 	b	64c50 <TClassOneModem::PrepareCommand(unsigned long)+0x12b4>
         63d98:	0036fa08 	eoreqs	pc, r6, r8, lsl #20
         63d9c:	0036fa30 	eoreqs	pc, r6, r0, lsr sl
         63da0:	0036fa38 	eoreqs	pc, r6, r8, lsr sl
         63da4:	0036fa40 	eoreqs	pc, r6, r0, asr #20
         63da8:	0036fa48 	eoreqs	pc, r6, r8, asr #20
         63dac:	0036f988 	eoreqs	pc, r6, r8, lsl #19
         63db0:	0036f98c 	eoreqs	pc, r6, ip, lsl #19
         63db4:	0036fd74 	eoreqs	pc, r6, r4, ror sp
         63db8:	e3a03000 	mov	r3, #0	; 0x0
         63dbc:	e3a02000 	mov	r2, #0	; 0x0
         63dc0:	e3a01000 	mov	r1, #0	; 0x0
         63dc4:	e3a00000 	mov	r0, #0	; 0x0
         63dc8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         63dcc:	e59f1000 	ldr	r1, [pc, #0]	; 63dd4 <TClassOneModem::PrepareCommand(unsigned long)+0x438>
         63dd0:	ea00039e 	b	64c50 <TClassOneModem::PrepareCommand(unsigned long)+0x12b4>
         63dd4:	0036f994 	mlaeqs	r6, r4, r9, pc
         63dd8:	e594088c 	ldr	r0, [r4, #2188]	; fField2188
         63ddc:	e3300001 	teq	r0, #1	; 0x1
         63de0:	0a00000b 	beq	63e14 <TClassOneModem::PrepareCommand(unsigned long)+0x478>
         63de4:	e3300002 	teq	r0, #2	; 0x2
         63de8:	01a00006 	moveq	r0, r6
         63dec:	028f2f0b 	addeq	r2, pc, #44	; 0x2c
         63df0:	0a0002fc 	beq	649e8 <TClassOneModem::PrepareCommand(unsigned long)+0x104c>
         63df4:	e3300004 	teq	r0, #4	; 0x4
         63df8:	01a00006 	moveq	r0, r6
         63dfc:	028f2f08 	addeq	r2, pc, #32	; 0x20
         63e00:	0a0002f8 	beq	649e8 <TClassOneModem::PrepareCommand(unsigned long)+0x104c>
         63e04:	e3300008 	teq	r0, #8	; 0x8
         63e08:	01a00006 	moveq	r0, r6
         63e0c:	028f2f05 	addeq	r2, pc, #20	; 0x14
         63e10:	0a0002f4 	beq	649e8 <TClassOneModem::PrepareCommand(unsigned long)+0x104c>
         63e14:	e1a00006 	mov	r0, r6
         63e18:	e28f2f03 	add	r2, pc, #12	; 0xc
         63e1c:	ea0002f1 	b	649e8 <TClassOneModem::PrepareCommand(unsigned long)+0x104c>
         63e20:	31000000 	tstcc	r0, r0
         63e24:	32000000 	andcc	r0, r0, #0	; 0x0
         63e28:	322e3000 	eorcc	r3, lr, #0	; 0x0
         63e2c:	30000000 	andcc	r0, r0, r0
         63e30:	e5d408d8 	ldrb	r0, [r4, #2264]	; fField2264
         63e34:	e3300000 	teq	r0, #0	; 0x0
         63e38:	15d408d9 	ldrneb	r0, [r4, #2265]	; fField2265
         63e3c:	13300000 	teqne	r0, #0	; 0x0
         63e40:	1a000010 	bne	63e88 <TClassOneModem::PrepareCommand(unsigned long)+0x4ec>
         63e44:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         63e48:	e3100001 	tst	r0, #1	; 0x1
         63e4c:	12000c03 	andne	r0, r0, #768	; 0x300
         63e50:	13300000 	teqne	r0, #0	; 0x0
         63e54:	15940018 	ldrne	r0, [r4, #24]	; fField24
         63e58:	12000002 	andne	r0, r0, #2	; 0x2
         63e5c:	13300000 	teqne	r0, #0	; 0x0
         63e60:	0a000008 	beq	63e88 <TClassOneModem::PrepareCommand(unsigned long)+0x4ec>
         63e64:	e2841d1e 	add	r1, r4, #1920	; 0x780
         63e68:	e9910003 	ldmib	r1, {r0, r1}
         63e6c:	e1300001 	teq	r0, r1
         63e70:	059407b0 	ldreq	r0, [r4, #1968]	; fField1968
         63e74:	02000008 	andeq	r0, r0, #8	; 0x8
         63e78:	03300000 	teqeq	r0, #0	; 0x0
         63e7c:	13a00ee2 	movne	r0, #3616	; 0xe20
         63e80:	12800901 	addne	r0, r0, #16384	; 0x4000
         63e84:	1584078c 	strne	r0, [r4, #1932]	; fField1932
         63e88:	e3a03000 	mov	r3, #0	; 0x0
         63e8c:	e3a02000 	mov	r2, #0	; 0x0
         63e90:	e3a01000 	mov	r1, #0	; 0x0
         63e94:	e3a00000 	mov	r0, #0	; 0x0
         63e98:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         63e9c:	e59f1000 	ldr	r1, [pc, #0]	; 63ea4 <TClassOneModem::PrepareCommand(unsigned long)+0x508>
         63ea0:	ea00036a 	b	64c50 <TClassOneModem::PrepareCommand(unsigned long)+0x12b4>
         63ea4:	0036f9d0 	ldreqsb	pc, [r6], -r0
         63ea8:	e3a00000 	mov	r0, #0	; 0x0
         63eac:	e3a03000 	mov	r3, #0	; 0x0
         63eb0:	e3a02000 	mov	r2, #0	; 0x0
         63eb4:	e3a01000 	mov	r1, #0	; 0x0
         63eb8:	e584078c 	str	r0, [r4, #1932]	; fField1932
         63ebc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         63ec0:	e59f1000 	ldr	r1, [pc, #0]	; 63ec8 <TClassOneModem::PrepareCommand(unsigned long)+0x52c>
         63ec4:	ea000361 	b	64c50 <TClassOneModem::PrepareCommand(unsigned long)+0x12b4>
         63ec8:	0036f9d4 	ldreqsb	pc, [r6], -r4
         63ecc:	e3a00000 	mov	r0, #0	; 0x0
         63ed0:	e3a03000 	mov	r3, #0	; 0x0
         63ed4:	e3a02000 	mov	r2, #0	; 0x0
         63ed8:	e3a01000 	mov	r1, #0	; 0x0
         63edc:	e584078c 	str	r0, [r4, #1932]	; fField1932
         63ee0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         63ee4:	e59f1000 	ldr	r1, [pc, #0]	; 63eec <TClassOneModem::PrepareCommand(unsigned long)+0x550>
         63ee8:	ea000358 	b	64c50 <TClassOneModem::PrepareCommand(unsigned long)+0x12b4>
         63eec:	0036f9d8 	ldreqsb	pc, [r6], -r8
         63ef0:	e3a03000 	mov	r3, #0	; 0x0
         63ef4:	e3a02000 	mov	r2, #0	; 0x0
         63ef8:	e3a01000 	mov	r1, #0	; 0x0
         63efc:	e3a00000 	mov	r0, #0	; 0x0
         63f00:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         63f04:	e59f1000 	ldr	r1, [pc, #0]	; 63f0c <TClassOneModem::PrepareCommand(unsigned long)+0x570>
         63f08:	ea000350 	b	64c50 <TClassOneModem::PrepareCommand(unsigned long)+0x12b4>
         63f0c:	0036f99c 	mlaeqs	r6, ip, r9, pc
         63f10:	e3a03000 	mov	r3, #0	; 0x0
         63f14:	e3a02000 	mov	r2, #0	; 0x0
         63f18:	e3a01000 	mov	r1, #0	; 0x0
         63f1c:	e3a00000 	mov	r0, #0	; 0x0
         63f20:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         63f24:	e59f1000 	ldr	r1, [pc, #0]	; 63f2c <TClassOneModem::PrepareCommand(unsigned long)+0x590>
         63f28:	ea000348 	b	64c50 <TClassOneModem::PrepareCommand(unsigned long)+0x12b4>
         63f2c:	0036f9a0 	eoreqs	pc, r6, r0, lsr #19
         63f30:	e3a03000 	mov	r3, #0	; 0x0
         63f34:	e3a02000 	mov	r2, #0	; 0x0
         63f38:	e3a01000 	mov	r1, #0	; 0x0
         63f3c:	e3a00000 	mov	r0, #0	; 0x0
         63f40:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         63f44:	e59f1000 	ldr	r1, [pc, #0]	; 63f4c <TClassOneModem::PrepareCommand(unsigned long)+0x5b0>
         63f48:	ea000340 	b	64c50 <TClassOneModem::PrepareCommand(unsigned long)+0x12b4>
         63f4c:	0036f9a4 	eoreqs	pc, r6, r4, lsr #19
         63f50:	e3a03000 	mov	r3, #0	; 0x0
         63f54:	e3a02000 	mov	r2, #0	; 0x0
         63f58:	e3a01000 	mov	r1, #0	; 0x0
         63f5c:	e3a00000 	mov	r0, #0	; 0x0
         63f60:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         63f64:	e59f1000 	ldr	r1, [pc, #0]	; 63f6c <TClassOneModem::PrepareCommand(unsigned long)+0x5d0>
         63f68:	ea000338 	b	64c50 <TClassOneModem::PrepareCommand(unsigned long)+0x12b4>
         63f6c:	0036f9a8 	eoreqs	pc, r6, r8, lsr #19
         63f70:	e3a03000 	mov	r3, #0	; 0x0
         63f74:	e3a02000 	mov	r2, #0	; 0x0
         63f78:	e3a01000 	mov	r1, #0	; 0x0
         63f7c:	e3a00000 	mov	r0, #0	; 0x0
         63f80:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         63f84:	e59f1000 	ldr	r1, [pc, #0]	; 63f8c <TClassOneModem::PrepareCommand(unsigned long)+0x5f0>
         63f88:	ea000330 	b	64c50 <TClassOneModem::PrepareCommand(unsigned long)+0x12b4>
         63f8c:	0036f9bc 	ldreqh	pc, [r6], -ip
         63f90:	e1a05007 	mov	r5, r7
         63f94:	e594063c 	ldr	r0, [r4, #1596]	; fField1596
         63f98:	eb6d3a6b 	bl	1bb294c <$__rt_udiv10>
         63f9c:	e1a01005 	mov	r1, r5
         63fa0:	e2800001 	add	r0, r0, #1	; 0x1
         63fa4:	eb66df89 	bl	1a1bdd0 <$UiToA(unsigned long, unsigned char *)>
         63fa8:	e594063c 	ldr	r0, [r4, #1596]	; fField1596
         63fac:	e2800f7d 	add	r0, r0, #500	; 0x1f4
         63fb0:	e3a03000 	mov	r3, #0	; 0x0
         63fb4:	e3a02000 	mov	r2, #0	; 0x0
         63fb8:	e3a01000 	mov	r1, #0	; 0x0
         63fbc:	e584078c 	str	r0, [r4, #1932]	; fField1932
         63fc0:	e3a00000 	mov	r0, #0	; 0x0
         63fc4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         63fc8:	e1a02007 	mov	r2, r7
         63fcc:	e59f1000 	ldr	r1, [pc, #0]	; 63fd4 <TClassOneModem::PrepareCommand(unsigned long)+0x638>
         63fd0:	ea000076 	b	641b0 <TClassOneModem::PrepareCommand(unsigned long)+0x814>
         63fd4:	0036fa20 	eoreqs	pc, r6, r0, lsr #20
         63fd8:	e3a03000 	mov	r3, #0	; 0x0
         63fdc:	e3a02000 	mov	r2, #0	; 0x0
         63fe0:	e3a01000 	mov	r1, #0	; 0x0
         63fe4:	e3a00000 	mov	r0, #0	; 0x0
         63fe8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         63fec:	e5941634 	ldr	r1, [r4, #1588]	; fField1588
         63ff0:	e1a00004 	mov	r0, r4
         63ff4:	eb6708dc 	bl	1a2636c <TClassOneModem::$GetModParamStr(unsigned long)>
         63ff8:	e1a02000 	mov	r2, r0
         63ffc:	e1a0100a 	mov	r1, sl
         64000:	ea000014 	b	64058 <TClassOneModem::PrepareCommand(unsigned long)+0x6bc>
         64004:	e3a03000 	mov	r3, #0	; 0x0
         64008:	e3a02000 	mov	r2, #0	; 0x0
         6400c:	e3a01000 	mov	r1, #0	; 0x0
         64010:	e3a00000 	mov	r0, #0	; 0x0
         64014:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64018:	e5941634 	ldr	r1, [r4, #1588]	; fField1588
         6401c:	e1a00004 	mov	r0, r4
         64020:	eb6708d1 	bl	1a2636c <TClassOneModem::$GetModParamStr(unsigned long)>
         64024:	e1a02000 	mov	r2, r0
         64028:	e59d101c 	ldr	r1, [sp, #28]	; fField28
         6402c:	ea000009 	b	64058 <TClassOneModem::PrepareCommand(unsigned long)+0x6bc>
         64030:	e3a03000 	mov	r3, #0	; 0x0
         64034:	e3a02000 	mov	r2, #0	; 0x0
         64038:	e3a01000 	mov	r1, #0	; 0x0
         6403c:	e3a00000 	mov	r0, #0	; 0x0
         64040:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64044:	e5941634 	ldr	r1, [r4, #1588]	; fField1588
         64048:	e1a00004 	mov	r0, r4
         6404c:	eb6708c6 	bl	1a2636c <TClassOneModem::$GetModParamStr(unsigned long)>
         64050:	e1a02000 	mov	r2, r0
         64054:	e59d1018 	ldr	r1, [sp, #24]	; fField24
         64058:	e1a00004 	mov	r0, r4
         6405c:	e3a03000 	mov	r3, #0	; 0x0
         64060:	eb669d63 	bl	1a0b5f4 <TClassOneModem::$BuildCommand(unsigned char const *, unsigned char *, unsigned long, unsigned char *, unsigned long, unsigned char *, unsigned long)>
         64064:	e28dd010 	add	sp, sp, #16	; 0x10
         64068:	e3a01d32 	mov	r1, #3200	; 0xc80
         6406c:	ea00000e 	b	640ac <TClassOneModem::PrepareCommand(unsigned long)+0x710>
         64070:	e3a03000 	mov	r3, #0	; 0x0
         64074:	e3a02000 	mov	r2, #0	; 0x0
         64078:	e3a01000 	mov	r1, #0	; 0x0
         6407c:	e3a00000 	mov	r0, #0	; 0x0
         64080:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64084:	e5941634 	ldr	r1, [r4, #1588]	; fField1588
         64088:	e1a00004 	mov	r0, r4
         6408c:	eb6708b6 	bl	1a2636c <TClassOneModem::$GetModParamStr(unsigned long)>
         64090:	e1a02000 	mov	r2, r0
         64094:	e1a00004 	mov	r0, r4
         64098:	e3a03000 	mov	r3, #0	; 0x0
         6409c:	e59d1014 	ldr	r1, [sp, #20]	; fField20
         640a0:	eb669d53 	bl	1a0b5f4 <TClassOneModem::$BuildCommand(unsigned char const *, unsigned char *, unsigned long, unsigned char *, unsigned long, unsigned char *, unsigned long)>
         640a4:	e28dd010 	add	sp, sp, #16	; 0x10
         640a8:	e594163c 	ldr	r1, [r4, #1596]	; fField1596
         640ac:	e584178c 	str	r1, [r4, #1932]	; fField1932
         640b0:	ea0002eb 	b	64c64 <TClassOneModem::PrepareCommand(unsigned long)+0x12c8>
         640b4:	e1a00009 	mov	r0, r9
         640b8:	eb6e215b 	bl	1bec62c <CBufferList::$RemoveAll(void)>
         640bc:	ea0002ea 	b	64c6c <TClassOneModem::PrepareCommand(unsigned long)+0x12d0>
         640c0:	e1a01007 	mov	r1, r7
         640c4:	e5d408f1 	ldrb	r0, [r4, #2289]	; fField2289
         640c8:	eb66df40 	bl	1a1bdd0 <$UiToA(unsigned long, unsigned char *)>
         640cc:	e2841fa9 	add	r1, r4, #676	; 0x2a4
         640d0:	e2811b02 	add	r1, r1, #2048	; 0x800
         640d4:	e1a05001 	mov	r5, r1
         640d8:	e5d408f2 	ldrb	r0, [r4, #2290]	; fField2290
         640dc:	eb66df3b 	bl	1a1bdd0 <$UiToA(unsigned long, unsigned char *)>
         640e0:	e3a03000 	mov	r3, #0	; 0x0
         640e4:	e1a02005 	mov	r2, r5
         640e8:	e3a01000 	mov	r1, #0	; 0x0
         640ec:	e59f0000 	ldr	r0, [pc, #0]	; 640f4 <TClassOneModem::PrepareCommand(unsigned long)+0x758>
         640f0:	ea000007 	b	64114 <TClassOneModem::PrepareCommand(unsigned long)+0x778>
         640f4:	0036f990 	mlaeqs	r6, r0, r9, pc
         640f8:	e1a01007 	mov	r1, r7
         640fc:	e5d408f1 	ldrb	r0, [r4, #2289]	; fField2289
         64100:	eb66df32 	bl	1a1bdd0 <$UiToA(unsigned long, unsigned char *)>
         64104:	e3a03000 	mov	r3, #0	; 0x0
         64108:	e3a02000 	mov	r2, #0	; 0x0
         6410c:	e3a01000 	mov	r1, #0	; 0x0
         64110:	e1a00008 	mov	r0, r8
         64114:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64118:	e1a02007 	mov	r2, r7
         6411c:	e59d1010 	ldr	r1, [sp, #16]	; fField16
         64120:	ea000022 	b	641b0 <TClassOneModem::PrepareCommand(unsigned long)+0x814>
         64124:	e1a00006 	mov	r0, r6
         64128:	e28f2f00 	add	r2, pc, #0	; 0x0
         6412c:	ea00022d 	b	649e8 <TClassOneModem::PrepareCommand(unsigned long)+0x104c>
         64130:	3f000000 	swicc	0x00000000
         64134:	e3a03000 	mov	r3, #0	; 0x0
         64138:	e3a02000 	mov	r2, #0	; 0x0
         6413c:	e3a01000 	mov	r1, #0	; 0x0
         64140:	e3a00000 	mov	r0, #0	; 0x0
         64144:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64148:	e1a02008 	mov	r2, r8
         6414c:	e1a0100a 	mov	r1, sl
         64150:	ea000016 	b	641b0 <TClassOneModem::PrepareCommand(unsigned long)+0x814>
         64154:	e3a03000 	mov	r3, #0	; 0x0
         64158:	e3a02000 	mov	r2, #0	; 0x0
         6415c:	e3a01000 	mov	r1, #0	; 0x0
         64160:	e3a00000 	mov	r0, #0	; 0x0
         64164:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64168:	e1a02008 	mov	r2, r8
         6416c:	e59d1018 	ldr	r1, [sp, #24]	; fField24
         64170:	ea00000e 	b	641b0 <TClassOneModem::PrepareCommand(unsigned long)+0x814>
         64174:	e3a03000 	mov	r3, #0	; 0x0
         64178:	e3a02000 	mov	r2, #0	; 0x0
         6417c:	e3a01000 	mov	r1, #0	; 0x0
         64180:	e3a00000 	mov	r0, #0	; 0x0
         64184:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64188:	e1a02008 	mov	r2, r8
         6418c:	e59d101c 	ldr	r1, [sp, #28]	; fField28
         64190:	ea000006 	b	641b0 <TClassOneModem::PrepareCommand(unsigned long)+0x814>
         64194:	e3a03000 	mov	r3, #0	; 0x0
         64198:	e3a02000 	mov	r2, #0	; 0x0
         6419c:	e3a01000 	mov	r1, #0	; 0x0
         641a0:	e3a00000 	mov	r0, #0	; 0x0
         641a4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         641a8:	e1a02008 	mov	r2, r8
         641ac:	e59d1014 	ldr	r1, [sp, #20]	; fField20
         641b0:	e1a00004 	mov	r0, r4
         641b4:	e3a03000 	mov	r3, #0	; 0x0
         641b8:	ea0002a7 	b	64c5c <TClassOneModem::PrepareCommand(unsigned long)+0x12c0>
         641bc:	e5d408e8 	ldrb	r0, [r4, #2280]	; fField2280
         641c0:	e3300000 	teq	r0, #0	; 0x0
         641c4:	e3a03000 	mov	r3, #0	; 0x0
         641c8:	e3a02000 	mov	r2, #0	; 0x0
         641cc:	e3a01000 	mov	r1, #0	; 0x0
         641d0:	e3a00000 	mov	r0, #0	; 0x0
         641d4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         641d8:	059f1004 	ldreq	r1, [pc, #4]	; 641e4 <TClassOneModem::PrepareCommand(unsigned long)+0x848>	; fField4
         641dc:	159f1004 	ldrne	r1, [pc, #4]	; 641e8 <TClassOneModem::PrepareCommand(unsigned long)+0x84c>	; fField4
         641e0:	ea00029a 	b	64c50 <TClassOneModem::PrepareCommand(unsigned long)+0x12b4>
         641e4:	0036f9b0 	ldreqh	pc, [r6], -r0
         641e8:	0036f9ac 	eoreqs	pc, r6, ip, lsr #19
         641ec:	e3a03000 	mov	r3, #0	; 0x0
         641f0:	e3a02000 	mov	r2, #0	; 0x0
         641f4:	e3a01000 	mov	r1, #0	; 0x0
         641f8:	e3a00000 	mov	r0, #0	; 0x0
         641fc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64200:	e59f1000 	ldr	r1, [pc, #0]	; 64208 <TClassOneModem::PrepareCommand(unsigned long)+0x86c>
         64204:	ea000291 	b	64c50 <TClassOneModem::PrepareCommand(unsigned long)+0x12b4>
         64208:	0036f9dc 	ldreqsb	pc, [r6], -ip
         6420c:	e5d407c5 	ldrb	r0, [r4, #1989]	; fField1989
         64210:	e3300000 	teq	r0, #0	; 0x0
         64214:	e5d407c6 	ldrb	r0, [r4, #1990]	; fField1990
         64218:	0a000003 	beq	6422c <TClassOneModem::PrepareCommand(unsigned long)+0x890>
         6421c:	e3300000 	teq	r0, #0	; 0x0
         64220:	03a00032 	moveq	r0, #50	; 0x32
         64224:	13a00034 	movne	r0, #52	; 0x34
         64228:	ea000002 	b	64238 <TClassOneModem::PrepareCommand(unsigned long)+0x89c>
         6422c:	e3300000 	teq	r0, #0	; 0x0
         64230:	03a00031 	moveq	r0, #49	; 0x31
         64234:	13a00033 	movne	r0, #51	; 0x33
         64238:	e5c40aa0 	strb	r0, [r4, #2720]	; fField2720
         6423c:	e3a03000 	mov	r3, #0	; 0x0
         64240:	e3a02000 	mov	r2, #0	; 0x0
         64244:	e3a01000 	mov	r1, #0	; 0x0
         64248:	e3a00000 	mov	r0, #0	; 0x0
         6424c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64250:	e1a02007 	mov	r2, r7
         64254:	e59f1000 	ldr	r1, [pc, #0]	; 6425c <TClassOneModem::PrepareCommand(unsigned long)+0x8c0>
         64258:	ea000269 	b	64c04 <TClassOneModem::PrepareCommand(unsigned long)+0x1268>
         6425c:	0036f9e4 	eoreqs	pc, r6, r4, ror #19
         64260:	e3a03000 	mov	r3, #0	; 0x0
         64264:	e3a02000 	mov	r2, #0	; 0x0
         64268:	e3a01000 	mov	r1, #0	; 0x0
         6426c:	e3a00000 	mov	r0, #0	; 0x0
         64270:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64274:	e59f1000 	ldr	r1, [pc, #0]	; 6427c <TClassOneModem::PrepareCommand(unsigned long)+0x8e0>
         64278:	ea000274 	b	64c50 <TClassOneModem::PrepareCommand(unsigned long)+0x12b4>
         6427c:	0036f9e8 	eoreqs	pc, r6, r8, ror #19
         64280:	e3a03000 	mov	r3, #0	; 0x0
         64284:	e3a02000 	mov	r2, #0	; 0x0
         64288:	e3a01000 	mov	r1, #0	; 0x0
         6428c:	e3a00000 	mov	r0, #0	; 0x0
         64290:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64294:	e59f1000 	ldr	r1, [pc, #0]	; 6429c <TClassOneModem::PrepareCommand(unsigned long)+0x900>
         64298:	ea00026c 	b	64c50 <TClassOneModem::PrepareCommand(unsigned long)+0x12b4>
         6429c:	0036fa84 	eoreqs	pc, r6, r4, lsl #21
         642a0:	e3a03000 	mov	r3, #0	; 0x0
         642a4:	e3a02000 	mov	r2, #0	; 0x0
         642a8:	e3a01000 	mov	r1, #0	; 0x0
         642ac:	e3a00000 	mov	r0, #0	; 0x0
         642b0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         642b4:	e59f1000 	ldr	r1, [pc, #0]	; 642bc <TClassOneModem::PrepareCommand(unsigned long)+0x920>
         642b8:	ea000264 	b	64c50 <TClassOneModem::PrepareCommand(unsigned long)+0x12b4>
         642bc:	0036fa8c 	eoreqs	pc, r6, ip, lsl #21
         642c0:	e3a03000 	mov	r3, #0	; 0x0
         642c4:	e3a02000 	mov	r2, #0	; 0x0
         642c8:	e3a01000 	mov	r1, #0	; 0x0
         642cc:	e3a00000 	mov	r0, #0	; 0x0
         642d0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         642d4:	e59f1000 	ldr	r1, [pc, #0]	; 642dc <TClassOneModem::PrepareCommand(unsigned long)+0x940>
         642d8:	ea00025c 	b	64c50 <TClassOneModem::PrepareCommand(unsigned long)+0x12b4>
         642dc:	0036fa94 	mlaeqs	r6, r4, sl, pc
         642e0:	e3a03000 	mov	r3, #0	; 0x0
         642e4:	e3a02000 	mov	r2, #0	; 0x0
         642e8:	e3a01000 	mov	r1, #0	; 0x0
         642ec:	e3a00000 	mov	r0, #0	; 0x0
         642f0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         642f4:	e59f1000 	ldr	r1, [pc, #0]	; 642fc <TClassOneModem::PrepareCommand(unsigned long)+0x960>
         642f8:	ea000254 	b	64c50 <TClassOneModem::PrepareCommand(unsigned long)+0x12b4>
         642fc:	0036fa9c 	mlaeqs	r6, ip, sl, pc
         64300:	e3a03000 	mov	r3, #0	; 0x0
         64304:	e3a02000 	mov	r2, #0	; 0x0
         64308:	e3a01000 	mov	r1, #0	; 0x0
         6430c:	e3a00000 	mov	r0, #0	; 0x0
         64310:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64314:	e59f1000 	ldr	r1, [pc, #0]	; 6431c <TClassOneModem::PrepareCommand(unsigned long)+0x980>
         64318:	ea00024c 	b	64c50 <TClassOneModem::PrepareCommand(unsigned long)+0x12b4>
         6431c:	0036faa4 	eoreqs	pc, r6, r4, lsr #21
         64320:	e3a03000 	mov	r3, #0	; 0x0
         64324:	e3a02000 	mov	r2, #0	; 0x0
         64328:	e3a01000 	mov	r1, #0	; 0x0
         6432c:	e3a00000 	mov	r0, #0	; 0x0
         64330:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64334:	e59f1000 	ldr	r1, [pc, #0]	; 6433c <TClassOneModem::PrepareCommand(unsigned long)+0x9a0>
         64338:	ea000244 	b	64c50 <TClassOneModem::PrepareCommand(unsigned long)+0x12b4>
         6433c:	0036faac 	eoreqs	pc, r6, ip, lsr #21
         64340:	e3a03000 	mov	r3, #0	; 0x0
         64344:	e3a02000 	mov	r2, #0	; 0x0
         64348:	e3a01000 	mov	r1, #0	; 0x0
         6434c:	e3a00000 	mov	r0, #0	; 0x0
         64350:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64354:	e59f1000 	ldr	r1, [pc, #0]	; 6435c <TClassOneModem::PrepareCommand(unsigned long)+0x9c0>
         64358:	ea00023c 	b	64c50 <TClassOneModem::PrepareCommand(unsigned long)+0x12b4>
         6435c:	0036fab4 	ldreqh	pc, [r6], -r4
         64360:	e3a03000 	mov	r3, #0	; 0x0
         64364:	e3a02000 	mov	r2, #0	; 0x0
         64368:	e3a01000 	mov	r1, #0	; 0x0
         6436c:	e3a00000 	mov	r0, #0	; 0x0
         64370:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64374:	e59f1000 	ldr	r1, [pc, #0]	; 6437c <TClassOneModem::PrepareCommand(unsigned long)+0x9e0>
         64378:	ea000234 	b	64c50 <TClassOneModem::PrepareCommand(unsigned long)+0x12b4>
         6437c:	0036fabc 	ldreqh	pc, [r6], -ip
         64380:	e3a03000 	mov	r3, #0	; 0x0
         64384:	e3a02000 	mov	r2, #0	; 0x0
         64388:	e3a01000 	mov	r1, #0	; 0x0
         6438c:	e3a00000 	mov	r0, #0	; 0x0
         64390:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64394:	e59f1000 	ldr	r1, [pc, #0]	; 6439c <TClassOneModem::PrepareCommand(unsigned long)+0xa00>
         64398:	ea00022c 	b	64c50 <TClassOneModem::PrepareCommand(unsigned long)+0x12b4>
         6439c:	0036fac4 	eoreqs	pc, r6, r4, asr #21
         643a0:	e3a03000 	mov	r3, #0	; 0x0
         643a4:	e3a02000 	mov	r2, #0	; 0x0
         643a8:	e3a01000 	mov	r1, #0	; 0x0
         643ac:	e3a00000 	mov	r0, #0	; 0x0
         643b0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         643b4:	e59f1000 	ldr	r1, [pc, #0]	; 643bc <TClassOneModem::PrepareCommand(unsigned long)+0xa20>
         643b8:	ea000224 	b	64c50 <TClassOneModem::PrepareCommand(unsigned long)+0x12b4>
         643bc:	0036fad0 	ldreqsb	pc, [r6], -r0
         643c0:	e3a03000 	mov	r3, #0	; 0x0
         643c4:	e3a02000 	mov	r2, #0	; 0x0
         643c8:	e3a01000 	mov	r1, #0	; 0x0
         643cc:	e3a00000 	mov	r0, #0	; 0x0
         643d0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         643d4:	e59f1000 	ldr	r1, [pc, #0]	; 643dc <TClassOneModem::PrepareCommand(unsigned long)+0xa40>
         643d8:	ea00021c 	b	64c50 <TClassOneModem::PrepareCommand(unsigned long)+0x12b4>
         643dc:	0036fadc 	ldreqsb	pc, [r6], -ip
         643e0:	e3a03000 	mov	r3, #0	; 0x0
         643e4:	e3a02000 	mov	r2, #0	; 0x0
         643e8:	e3a01000 	mov	r1, #0	; 0x0
         643ec:	e3a00000 	mov	r0, #0	; 0x0
         643f0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         643f4:	e59f1000 	ldr	r1, [pc, #0]	; 643fc <TClassOneModem::PrepareCommand(unsigned long)+0xa60>
         643f8:	ea000214 	b	64c50 <TClassOneModem::PrepareCommand(unsigned long)+0x12b4>
         643fc:	0036fae8 	eoreqs	pc, r6, r8, ror #21
         64400:	e3a03000 	mov	r3, #0	; 0x0
         64404:	e3a02000 	mov	r2, #0	; 0x0
         64408:	e3a01000 	mov	r1, #0	; 0x0
         6440c:	e3a00000 	mov	r0, #0	; 0x0
         64410:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64414:	e1a02005 	mov	r2, r5
         64418:	e59f1000 	ldr	r1, [pc, #0]	; 64420 <TClassOneModem::PrepareCommand(unsigned long)+0xa84>
         6441c:	ea0001f8 	b	64c04 <TClassOneModem::PrepareCommand(unsigned long)+0x1268>
         64420:	0036fafc 	ldreqsh	pc, [r6], -ip
         64424:	e1a02005 	mov	r2, r5
         64428:	e1a00006 	mov	r0, r6
         6442c:	e59f1000 	ldr	r1, [pc, #0]	; 64434 <TClassOneModem::PrepareCommand(unsigned long)+0xa98>
         64430:	ea00016c 	b	649e8 <TClassOneModem::PrepareCommand(unsigned long)+0x104c>
         64434:	0036fb04 	eoreqs	pc, r6, r4, lsl #22
         64438:	e5d4363b 	ldrb	r3, [r4, #1595]	; fField1595
         6443c:	e5d4263a 	ldrb	r2, [r4, #1594]	; fField1594
         64440:	e5d41639 	ldrb	r1, [r4, #1593]	; fField1593
         64444:	e5d40638 	ldrb	r0, [r4, #1592]	; fField1592
         64448:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         6444c:	e5d43637 	ldrb	r3, [r4, #1591]	; fField1591
         64450:	e5d42636 	ldrb	r2, [r4, #1590]	; fField1590
         64454:	e92d000c 	stmdb	sp!, {r2, r3}
         64458:	e5d43635 	ldrb	r3, [r4, #1589]	; fField1589
         6445c:	e5d42634 	ldrb	r2, [r4, #1588]	; fField1588
         64460:	e1a00006 	mov	r0, r6
         64464:	e59f1000 	ldr	r1, [pc, #0]	; 6446c <TClassOneModem::PrepareCommand(unsigned long)+0xad0>
         64468:	ea000103 	b	6487c <TClassOneModem::PrepareCommand(unsigned long)+0xee0>
         6446c:	0036fb10 	eoreqs	pc, r6, r0, lsl fp
         64470:	e5d4363b 	ldrb	r3, [r4, #1595]	; fField1595
         64474:	e5d4263a 	ldrb	r2, [r4, #1594]	; fField1594
         64478:	e5d41639 	ldrb	r1, [r4, #1593]	; fField1593
         6447c:	e5d40638 	ldrb	r0, [r4, #1592]	; fField1592
         64480:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64484:	e5d43637 	ldrb	r3, [r4, #1591]	; fField1591
         64488:	e5d42636 	ldrb	r2, [r4, #1590]	; fField1590
         6448c:	e92d000c 	stmdb	sp!, {r2, r3}
         64490:	e5d43635 	ldrb	r3, [r4, #1589]	; fField1589
         64494:	e5d42634 	ldrb	r2, [r4, #1588]	; fField1588
         64498:	e1a00006 	mov	r0, r6
         6449c:	e59f1000 	ldr	r1, [pc, #0]	; 644a4 <TClassOneModem::PrepareCommand(unsigned long)+0xb08>
         644a0:	ea0000f5 	b	6487c <TClassOneModem::PrepareCommand(unsigned long)+0xee0>
         644a4:	0036fb30 	eoreqs	pc, r6, r0, lsr fp
         644a8:	e3a03000 	mov	r3, #0	; 0x0
         644ac:	e3a02000 	mov	r2, #0	; 0x0
         644b0:	e3a01000 	mov	r1, #0	; 0x0
         644b4:	e3a00000 	mov	r0, #0	; 0x0
         644b8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         644bc:	e1a02005 	mov	r2, r5
         644c0:	e59f1000 	ldr	r1, [pc, #0]	; 644c8 <TClassOneModem::PrepareCommand(unsigned long)+0xb2c>
         644c4:	ea0001ce 	b	64c04 <TClassOneModem::PrepareCommand(unsigned long)+0x1268>
         644c8:	0036fb50 	eoreqs	pc, r6, r0, asr fp
         644cc:	e3a03000 	mov	r3, #0	; 0x0
         644d0:	e3a02000 	mov	r2, #0	; 0x0
         644d4:	e3a01000 	mov	r1, #0	; 0x0
         644d8:	e3a00000 	mov	r0, #0	; 0x0
         644dc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         644e0:	e59f1000 	ldr	r1, [pc, #0]	; 644e8 <TClassOneModem::PrepareCommand(unsigned long)+0xb4c>
         644e4:	ea0001d9 	b	64c50 <TClassOneModem::PrepareCommand(unsigned long)+0x12b4>
         644e8:	0036fb58 	eoreqs	pc, r6, r8, asr fp
         644ec:	e1a02005 	mov	r2, r5
         644f0:	e1a00006 	mov	r0, r6
         644f4:	e59f1000 	ldr	r1, [pc, #0]	; 644fc <TClassOneModem::PrepareCommand(unsigned long)+0xb60>
         644f8:	ea00013a 	b	649e8 <TClassOneModem::PrepareCommand(unsigned long)+0x104c>
         644fc:	0036fb5c 	eoreqs	pc, r6, ip, asr fp
         64500:	e3a03000 	mov	r3, #0	; 0x0
         64504:	e3a02000 	mov	r2, #0	; 0x0
         64508:	e3a01000 	mov	r1, #0	; 0x0
         6450c:	e3a00000 	mov	r0, #0	; 0x0
         64510:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64514:	e1a02005 	mov	r2, r5
         64518:	e59f1000 	ldr	r1, [pc, #0]	; 64520 <TClassOneModem::PrepareCommand(unsigned long)+0xb84>
         6451c:	ea0001b8 	b	64c04 <TClassOneModem::PrepareCommand(unsigned long)+0x1268>
         64520:	0036fb68 	eoreqs	pc, r6, r8, ror #22
         64524:	e3a03000 	mov	r3, #0	; 0x0
         64528:	e3a02000 	mov	r2, #0	; 0x0
         6452c:	e3a01000 	mov	r1, #0	; 0x0
         64530:	e3a00000 	mov	r0, #0	; 0x0
         64534:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64538:	e1a02005 	mov	r2, r5
         6453c:	e59f1000 	ldr	r1, [pc, #0]	; 64544 <TClassOneModem::PrepareCommand(unsigned long)+0xba8>
         64540:	ea0001af 	b	64c04 <TClassOneModem::PrepareCommand(unsigned long)+0x1268>
         64544:	0036fb70 	eoreqs	pc, r6, r0, ror fp
         64548:	e3a03000 	mov	r3, #0	; 0x0
         6454c:	e3a02000 	mov	r2, #0	; 0x0
         64550:	e3a01000 	mov	r1, #0	; 0x0
         64554:	e3a00000 	mov	r0, #0	; 0x0
         64558:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         6455c:	e1a02005 	mov	r2, r5
         64560:	e59f1000 	ldr	r1, [pc, #0]	; 64568 <TClassOneModem::PrepareCommand(unsigned long)+0xbcc>
         64564:	ea0001a6 	b	64c04 <TClassOneModem::PrepareCommand(unsigned long)+0x1268>
         64568:	0036fb78 	eoreqs	pc, r6, r8, ror fp
         6456c:	e3a03000 	mov	r3, #0	; 0x0
         64570:	e3a02000 	mov	r2, #0	; 0x0
         64574:	e3a01000 	mov	r1, #0	; 0x0
         64578:	e3a00000 	mov	r0, #0	; 0x0
         6457c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64580:	e1a02005 	mov	r2, r5
         64584:	e59f1000 	ldr	r1, [pc, #0]	; 6458c <TClassOneModem::PrepareCommand(unsigned long)+0xbf0>
         64588:	ea00019d 	b	64c04 <TClassOneModem::PrepareCommand(unsigned long)+0x1268>
         6458c:	0036fb84 	eoreqs	pc, r6, r4, lsl #23
         64590:	e3a03000 	mov	r3, #0	; 0x0
         64594:	e3a02000 	mov	r2, #0	; 0x0
         64598:	e3a01000 	mov	r1, #0	; 0x0
         6459c:	e3a00000 	mov	r0, #0	; 0x0
         645a0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         645a4:	e1a02005 	mov	r2, r5
         645a8:	e59f1000 	ldr	r1, [pc, #0]	; 645b0 <TClassOneModem::PrepareCommand(unsigned long)+0xc14>
         645ac:	ea000194 	b	64c04 <TClassOneModem::PrepareCommand(unsigned long)+0x1268>
         645b0:	0036fb8c 	eoreqs	pc, r6, ip, lsl #23
         645b4:	e3a03000 	mov	r3, #0	; 0x0
         645b8:	e3a02000 	mov	r2, #0	; 0x0
         645bc:	e3a01000 	mov	r1, #0	; 0x0
         645c0:	e3a00000 	mov	r0, #0	; 0x0
         645c4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         645c8:	e1a02005 	mov	r2, r5
         645cc:	e59f1000 	ldr	r1, [pc, #0]	; 645d4 <TClassOneModem::PrepareCommand(unsigned long)+0xc38>
         645d0:	ea00018b 	b	64c04 <TClassOneModem::PrepareCommand(unsigned long)+0x1268>
         645d4:	0036fb94 	mlaeqs	r6, r4, fp, pc
         645d8:	e3a03000 	mov	r3, #0	; 0x0
         645dc:	e3a02000 	mov	r2, #0	; 0x0
         645e0:	e3a01000 	mov	r1, #0	; 0x0
         645e4:	e3a00000 	mov	r0, #0	; 0x0
         645e8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         645ec:	e1a02005 	mov	r2, r5
         645f0:	e59f1000 	ldr	r1, [pc, #0]	; 645f8 <TClassOneModem::PrepareCommand(unsigned long)+0xc5c>
         645f4:	ea000182 	b	64c04 <TClassOneModem::PrepareCommand(unsigned long)+0x1268>
         645f8:	0036fb9c 	mlaeqs	r6, ip, fp, pc
         645fc:	e3a03000 	mov	r3, #0	; 0x0
         64600:	e3a02000 	mov	r2, #0	; 0x0
         64604:	e3a01000 	mov	r1, #0	; 0x0
         64608:	e3a00000 	mov	r0, #0	; 0x0
         6460c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64610:	e1a02005 	mov	r2, r5
         64614:	e59f1000 	ldr	r1, [pc, #0]	; 6461c <TClassOneModem::PrepareCommand(unsigned long)+0xc80>
         64618:	ea000179 	b	64c04 <TClassOneModem::PrepareCommand(unsigned long)+0x1268>
         6461c:	0036fba4 	eoreqs	pc, r6, r4, lsr #23
         64620:	e3a03000 	mov	r3, #0	; 0x0
         64624:	e3a02000 	mov	r2, #0	; 0x0
         64628:	e3a01000 	mov	r1, #0	; 0x0
         6462c:	e3a00000 	mov	r0, #0	; 0x0
         64630:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64634:	e1a02005 	mov	r2, r5
         64638:	e59f1000 	ldr	r1, [pc, #0]	; 64640 <TClassOneModem::PrepareCommand(unsigned long)+0xca4>
         6463c:	ea000170 	b	64c04 <TClassOneModem::PrepareCommand(unsigned long)+0x1268>
         64640:	0036fbac 	eoreqs	pc, r6, ip, lsr #23
         64644:	e3a03000 	mov	r3, #0	; 0x0
         64648:	e3a02000 	mov	r2, #0	; 0x0
         6464c:	e3a01000 	mov	r1, #0	; 0x0
         64650:	e3a00000 	mov	r0, #0	; 0x0
         64654:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64658:	e59f1000 	ldr	r1, [pc, #0]	; 64660 <TClassOneModem::PrepareCommand(unsigned long)+0xcc4>
         6465c:	ea00017b 	b	64c50 <TClassOneModem::PrepareCommand(unsigned long)+0x12b4>
         64660:	0036fbb4 	ldreqh	pc, [r6], -r4
         64664:	e3a03000 	mov	r3, #0	; 0x0
         64668:	e3a02000 	mov	r2, #0	; 0x0
         6466c:	e3a01000 	mov	r1, #0	; 0x0
         64670:	e3a00000 	mov	r0, #0	; 0x0
         64674:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64678:	e1a02005 	mov	r2, r5
         6467c:	e59f1000 	ldr	r1, [pc, #0]	; 64684 <TClassOneModem::PrepareCommand(unsigned long)+0xce8>
         64680:	ea00015f 	b	64c04 <TClassOneModem::PrepareCommand(unsigned long)+0x1268>
         64684:	0036fbbc 	ldreqh	pc, [r6], -ip
         64688:	e3a03000 	mov	r3, #0	; 0x0
         6468c:	e3a02000 	mov	r2, #0	; 0x0
         64690:	e3a01000 	mov	r1, #0	; 0x0
         64694:	e3a00000 	mov	r0, #0	; 0x0
         64698:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         6469c:	e1a02005 	mov	r2, r5
         646a0:	e59f1000 	ldr	r1, [pc, #0]	; 646a8 <TClassOneModem::PrepareCommand(unsigned long)+0xd0c>
         646a4:	ea000156 	b	64c04 <TClassOneModem::PrepareCommand(unsigned long)+0x1268>
         646a8:	0036fbc4 	eoreqs	pc, r6, r4, asr #23
         646ac:	e3a03000 	mov	r3, #0	; 0x0
         646b0:	e3a02000 	mov	r2, #0	; 0x0
         646b4:	e3a01000 	mov	r1, #0	; 0x0
         646b8:	e3a00000 	mov	r0, #0	; 0x0
         646bc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         646c0:	e59f1000 	ldr	r1, [pc, #0]	; 646c8 <TClassOneModem::PrepareCommand(unsigned long)+0xd2c>
         646c4:	ea000161 	b	64c50 <TClassOneModem::PrepareCommand(unsigned long)+0x12b4>
         646c8:	0036fbcc 	eoreqs	pc, r6, ip, asr #23
         646cc:	e3a03000 	mov	r3, #0	; 0x0
         646d0:	e3a02000 	mov	r2, #0	; 0x0
         646d4:	e3a01000 	mov	r1, #0	; 0x0
         646d8:	e3a00000 	mov	r0, #0	; 0x0
         646dc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         646e0:	e59f1000 	ldr	r1, [pc, #0]	; 646e8 <TClassOneModem::PrepareCommand(unsigned long)+0xd4c>
         646e4:	ea000159 	b	64c50 <TClassOneModem::PrepareCommand(unsigned long)+0x12b4>
         646e8:	0036fbd4 	ldreqsb	pc, [r6], -r4
         646ec:	e3a03000 	mov	r3, #0	; 0x0
         646f0:	e3a02000 	mov	r2, #0	; 0x0
         646f4:	e3a01000 	mov	r1, #0	; 0x0
         646f8:	e3a00000 	mov	r0, #0	; 0x0
         646fc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64700:	e1a02005 	mov	r2, r5
         64704:	e59f1000 	ldr	r1, [pc, #0]	; 6470c <TClassOneModem::PrepareCommand(unsigned long)+0xd70>
         64708:	ea00013d 	b	64c04 <TClassOneModem::PrepareCommand(unsigned long)+0x1268>
         6470c:	0036fbdc 	ldreqsb	pc, [r6], -ip
         64710:	e3a03000 	mov	r3, #0	; 0x0
         64714:	e3a02000 	mov	r2, #0	; 0x0
         64718:	e3a01000 	mov	r1, #0	; 0x0
         6471c:	e3a00000 	mov	r0, #0	; 0x0
         64720:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64724:	e59f1000 	ldr	r1, [pc, #0]	; 6472c <TClassOneModem::PrepareCommand(unsigned long)+0xd90>
         64728:	ea000148 	b	64c50 <TClassOneModem::PrepareCommand(unsigned long)+0x12b4>
         6472c:	0036fbe4 	eoreqs	pc, r6, r4, ror #23
         64730:	e3a03000 	mov	r3, #0	; 0x0
         64734:	e3a02000 	mov	r2, #0	; 0x0
         64738:	e3a01000 	mov	r1, #0	; 0x0
         6473c:	e3a00000 	mov	r0, #0	; 0x0
         64740:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64744:	e59f1000 	ldr	r1, [pc, #0]	; 6474c <TClassOneModem::PrepareCommand(unsigned long)+0xdb0>
         64748:	ea000140 	b	64c50 <TClassOneModem::PrepareCommand(unsigned long)+0x12b4>
         6474c:	0036fbec 	eoreqs	pc, r6, ip, ror #23
         64750:	e3a03000 	mov	r3, #0	; 0x0
         64754:	e3a02000 	mov	r2, #0	; 0x0
         64758:	e3a01000 	mov	r1, #0	; 0x0
         6475c:	e3a00000 	mov	r0, #0	; 0x0
         64760:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64764:	e59f1000 	ldr	r1, [pc, #0]	; 6476c <TClassOneModem::PrepareCommand(unsigned long)+0xdd0>
         64768:	ea000138 	b	64c50 <TClassOneModem::PrepareCommand(unsigned long)+0x12b4>
         6476c:	0036fbf4 	ldreqsh	pc, [r6], -r4
         64770:	e3a03000 	mov	r3, #0	; 0x0
         64774:	e3a02000 	mov	r2, #0	; 0x0
         64778:	e3a01000 	mov	r1, #0	; 0x0
         6477c:	e3a00000 	mov	r0, #0	; 0x0
         64780:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64784:	e1a02005 	mov	r2, r5
         64788:	e59f1000 	ldr	r1, [pc, #0]	; 64790 <TClassOneModem::PrepareCommand(unsigned long)+0xdf4>
         6478c:	ea00011c 	b	64c04 <TClassOneModem::PrepareCommand(unsigned long)+0x1268>
         64790:	0036fbfc 	ldreqsh	pc, [r6], -ip
         64794:	e3a03000 	mov	r3, #0	; 0x0
         64798:	e3a02000 	mov	r2, #0	; 0x0
         6479c:	e3a01000 	mov	r1, #0	; 0x0
         647a0:	e3a00000 	mov	r0, #0	; 0x0
         647a4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         647a8:	e59f1000 	ldr	r1, [pc, #0]	; 647b0 <TClassOneModem::PrepareCommand(unsigned long)+0xe14>
         647ac:	ea000127 	b	64c50 <TClassOneModem::PrepareCommand(unsigned long)+0x12b4>
         647b0:	0036fc04 	eoreqs	pc, r6, r4, lsl #24
         647b4:	e3a03000 	mov	r3, #0	; 0x0
         647b8:	e3a02000 	mov	r2, #0	; 0x0
         647bc:	e3a01000 	mov	r1, #0	; 0x0
         647c0:	e3a00000 	mov	r0, #0	; 0x0
         647c4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         647c8:	e59f1000 	ldr	r1, [pc, #0]	; 647d0 <TClassOneModem::PrepareCommand(unsigned long)+0xe34>
         647cc:	ea00011f 	b	64c50 <TClassOneModem::PrepareCommand(unsigned long)+0x12b4>
         647d0:	0036fc0c 	eoreqs	pc, r6, ip, lsl #24
         647d4:	e3a03000 	mov	r3, #0	; 0x0
         647d8:	e3a02000 	mov	r2, #0	; 0x0
         647dc:	e3a01000 	mov	r1, #0	; 0x0
         647e0:	e3a00000 	mov	r0, #0	; 0x0
         647e4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         647e8:	e59f1000 	ldr	r1, [pc, #0]	; 647f0 <TClassOneModem::PrepareCommand(unsigned long)+0xe54>
         647ec:	ea000117 	b	64c50 <TClassOneModem::PrepareCommand(unsigned long)+0x12b4>
         647f0:	0036fc14 	eoreqs	pc, r6, r4, lsl ip
         647f4:	e5d4363b 	ldrb	r3, [r4, #1595]	; fField1595
         647f8:	e5d4263a 	ldrb	r2, [r4, #1594]	; fField1594
         647fc:	e5d41639 	ldrb	r1, [r4, #1593]	; fField1593
         64800:	e5d40638 	ldrb	r0, [r4, #1592]	; fField1592
         64804:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64808:	e5d43637 	ldrb	r3, [r4, #1591]	; fField1591
         6480c:	e5d42636 	ldrb	r2, [r4, #1590]	; fField1590
         64810:	e92d000c 	stmdb	sp!, {r2, r3}
         64814:	e5d43635 	ldrb	r3, [r4, #1589]	; fField1589
         64818:	e5d42634 	ldrb	r2, [r4, #1588]	; fField1588
         6481c:	e1a00006 	mov	r0, r6
         64820:	e59f1000 	ldr	r1, [pc, #0]	; 64828 <TClassOneModem::PrepareCommand(unsigned long)+0xe8c>
         64824:	ea000014 	b	6487c <TClassOneModem::PrepareCommand(unsigned long)+0xee0>
         64828:	0036fc1c 	eoreqs	pc, r6, ip, lsl ip
         6482c:	e3a03000 	mov	r3, #0	; 0x0
         64830:	e3a02000 	mov	r2, #0	; 0x0
         64834:	e3a01000 	mov	r1, #0	; 0x0
         64838:	e3a00000 	mov	r0, #0	; 0x0
         6483c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64840:	e59f1000 	ldr	r1, [pc, #0]	; 64848 <TClassOneModem::PrepareCommand(unsigned long)+0xeac>
         64844:	ea000101 	b	64c50 <TClassOneModem::PrepareCommand(unsigned long)+0x12b4>
         64848:	0036fc3c 	eoreqs	pc, r6, ip, lsr ip
         6484c:	e5d4363b 	ldrb	r3, [r4, #1595]	; fField1595
         64850:	e5d4263a 	ldrb	r2, [r4, #1594]	; fField1594
         64854:	e5d41639 	ldrb	r1, [r4, #1593]	; fField1593
         64858:	e5d40638 	ldrb	r0, [r4, #1592]	; fField1592
         6485c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64860:	e5d43637 	ldrb	r3, [r4, #1591]	; fField1591
         64864:	e5d42636 	ldrb	r2, [r4, #1590]	; fField1590
         64868:	e92d000c 	stmdb	sp!, {r2, r3}
         6486c:	e5d43635 	ldrb	r3, [r4, #1589]	; fField1589
         64870:	e5d42634 	ldrb	r2, [r4, #1588]	; fField1588
         64874:	e1a00006 	mov	r0, r6
         64878:	e59f1008 	ldr	r1, [pc, #8]	; 64888 <TClassOneModem::PrepareCommand(unsigned long)+0xeec>	; fField8
         6487c:	eb6d4484 	bl	1bb5a94 <$sprintf>
         64880:	e28dd018 	add	sp, sp, #24	; 0x18
         64884:	ea0000eb 	b	64c38 <TClassOneModem::PrepareCommand(unsigned long)+0x129c>
         64888:	0036fc44 	eoreqs	pc, r6, r4, asr #24
         6488c:	e3a03000 	mov	r3, #0	; 0x0
         64890:	e3a02000 	mov	r2, #0	; 0x0
         64894:	e3a01000 	mov	r1, #0	; 0x0
         64898:	e3a00000 	mov	r0, #0	; 0x0
         6489c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         648a0:	e59f1000 	ldr	r1, [pc, #0]	; 648a8 <TClassOneModem::PrepareCommand(unsigned long)+0xf0c>
         648a4:	ea0000e9 	b	64c50 <TClassOneModem::PrepareCommand(unsigned long)+0x12b4>
         648a8:	0036fc64 	eoreqs	pc, r6, r4, ror #24
         648ac:	e1a02005 	mov	r2, r5
         648b0:	e1a00006 	mov	r0, r6
         648b4:	e59f1000 	ldr	r1, [pc, #0]	; 648bc <TClassOneModem::PrepareCommand(unsigned long)+0xf20>
         648b8:	ea00004a 	b	649e8 <TClassOneModem::PrepareCommand(unsigned long)+0x104c>
         648bc:	0036fc6c 	eoreqs	pc, r6, ip, ror #24
         648c0:	e1a02005 	mov	r2, r5
         648c4:	e1a00006 	mov	r0, r6
         648c8:	e59f1000 	ldr	r1, [pc, #0]	; 648d0 <TClassOneModem::PrepareCommand(unsigned long)+0xf34>
         648cc:	ea000045 	b	649e8 <TClassOneModem::PrepareCommand(unsigned long)+0x104c>
         648d0:	0036fc78 	eoreqs	pc, r6, r8, ror ip
         648d4:	e3a03000 	mov	r3, #0	; 0x0
         648d8:	e3a02000 	mov	r2, #0	; 0x0
         648dc:	e3a01000 	mov	r1, #0	; 0x0
         648e0:	e3a00000 	mov	r0, #0	; 0x0
         648e4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         648e8:	e1a02005 	mov	r2, r5
         648ec:	e59f1000 	ldr	r1, [pc, #0]	; 648f4 <TClassOneModem::PrepareCommand(unsigned long)+0xf58>
         648f0:	ea0000c3 	b	64c04 <TClassOneModem::PrepareCommand(unsigned long)+0x1268>
         648f4:	0036fc84 	eoreqs	pc, r6, r4, lsl #25
         648f8:	e3a03000 	mov	r3, #0	; 0x0
         648fc:	e3a02000 	mov	r2, #0	; 0x0
         64900:	e3a01000 	mov	r1, #0	; 0x0
         64904:	e3a00000 	mov	r0, #0	; 0x0
         64908:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         6490c:	e59f1000 	ldr	r1, [pc, #0]	; 64914 <TClassOneModem::PrepareCommand(unsigned long)+0xf78>
         64910:	ea0000ce 	b	64c50 <TClassOneModem::PrepareCommand(unsigned long)+0x12b4>
         64914:	0036fc8c 	eoreqs	pc, r6, ip, lsl #25
         64918:	e3a03000 	mov	r3, #0	; 0x0
         6491c:	e3a02000 	mov	r2, #0	; 0x0
         64920:	e3a01000 	mov	r1, #0	; 0x0
         64924:	e3a00000 	mov	r0, #0	; 0x0
         64928:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         6492c:	e1a02005 	mov	r2, r5
         64930:	e59f1000 	ldr	r1, [pc, #0]	; 64938 <TClassOneModem::PrepareCommand(unsigned long)+0xf9c>
         64934:	ea0000b2 	b	64c04 <TClassOneModem::PrepareCommand(unsigned long)+0x1268>
         64938:	0036fc94 	mlaeqs	r6, r4, ip, pc
         6493c:	e3a03000 	mov	r3, #0	; 0x0
         64940:	e3a02000 	mov	r2, #0	; 0x0
         64944:	e3a01000 	mov	r1, #0	; 0x0
         64948:	e3a00000 	mov	r0, #0	; 0x0
         6494c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64950:	e59f1000 	ldr	r1, [pc, #0]	; 64958 <TClassOneModem::PrepareCommand(unsigned long)+0xfbc>
         64954:	ea0000bd 	b	64c50 <TClassOneModem::PrepareCommand(unsigned long)+0x12b4>
         64958:	0036fc9c 	mlaeqs	r6, ip, ip, pc
         6495c:	e5d43637 	ldrb	r3, [r4, #1591]	; fField1591
         64960:	e5d42636 	ldrb	r2, [r4, #1590]	; fField1590
         64964:	e92d000c 	stmdb	sp!, {r2, r3}
         64968:	e5d43635 	ldrb	r3, [r4, #1589]	; fField1589
         6496c:	e5d42634 	ldrb	r2, [r4, #1588]	; fField1588
         64970:	e1a00006 	mov	r0, r6
         64974:	e59f1000 	ldr	r1, [pc, #0]	; 6497c <TClassOneModem::PrepareCommand(unsigned long)+0xfe0>
         64978:	ea0000ac 	b	64c30 <TClassOneModem::PrepareCommand(unsigned long)+0x1294>
         6497c:	0036fca4 	eoreqs	pc, r6, r4, lsr #25
         64980:	e3a03000 	mov	r3, #0	; 0x0
         64984:	e3a02000 	mov	r2, #0	; 0x0
         64988:	e3a01000 	mov	r1, #0	; 0x0
         6498c:	e3a00000 	mov	r0, #0	; 0x0
         64990:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64994:	e1a02005 	mov	r2, r5
         64998:	e59f1000 	ldr	r1, [pc, #0]	; 649a0 <TClassOneModem::PrepareCommand(unsigned long)+0x1004>
         6499c:	ea000098 	b	64c04 <TClassOneModem::PrepareCommand(unsigned long)+0x1268>
         649a0:	0036fcb8 	ldreqh	pc, [r6], -r8
         649a4:	e3a03000 	mov	r3, #0	; 0x0
         649a8:	e3a02000 	mov	r2, #0	; 0x0
         649ac:	e3a01000 	mov	r1, #0	; 0x0
         649b0:	e3a00000 	mov	r0, #0	; 0x0
         649b4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         649b8:	e1a02005 	mov	r2, r5
         649bc:	e59f1000 	ldr	r1, [pc, #0]	; 649c4 <TClassOneModem::PrepareCommand(unsigned long)+0x1028>
         649c0:	ea00008f 	b	64c04 <TClassOneModem::PrepareCommand(unsigned long)+0x1268>
         649c4:	0036fcc0 	eoreqs	pc, r6, r0, asr #25
         649c8:	e5d42634 	ldrb	r2, [r4, #1588]	; fField1588
         649cc:	e332003f 	teq	r2, #63	; 0x3f
         649d0:	15d43635 	ldrneb	r3, [r4, #1589]	; fField1589
         649d4:	11a00006 	movne	r0, r6
         649d8:	159f1010 	ldrne	r1, [pc, #10]	; 649f0 <TClassOneModem::PrepareCommand(unsigned long)+0x1054>
         649dc:	1a00005b 	bne	64b50 <TClassOneModem::PrepareCommand(unsigned long)+0x11b4>
         649e0:	e1a00006 	mov	r0, r6
         649e4:	e59f1008 	ldr	r1, [pc, #8]	; 649f4 <TClassOneModem::PrepareCommand(unsigned long)+0x1058>	; fField8
         649e8:	eb6d4429 	bl	1bb5a94 <$sprintf>
         649ec:	ea000091 	b	64c38 <TClassOneModem::PrepareCommand(unsigned long)+0x129c>
         649f0:	0036fcd0 	ldreqsb	pc, [r6], -r0
         649f4:	0036fcc8 	eoreqs	pc, r6, r8, asr #25
         649f8:	e3a03000 	mov	r3, #0	; 0x0
         649fc:	e3a02000 	mov	r2, #0	; 0x0
         64a00:	e3a01000 	mov	r1, #0	; 0x0
         64a04:	e3a00000 	mov	r0, #0	; 0x0
         64a08:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64a0c:	e59f1000 	ldr	r1, [pc, #0]	; 64a14 <TClassOneModem::PrepareCommand(unsigned long)+0x1078>
         64a10:	ea00008e 	b	64c50 <TClassOneModem::PrepareCommand(unsigned long)+0x12b4>
         64a14:	0036fcdc 	ldreqsb	pc, [r6], -ip
         64a18:	e3a03000 	mov	r3, #0	; 0x0
         64a1c:	e3a02000 	mov	r2, #0	; 0x0
         64a20:	e3a01000 	mov	r1, #0	; 0x0
         64a24:	e3a00000 	mov	r0, #0	; 0x0
         64a28:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64a2c:	e1a02005 	mov	r2, r5
         64a30:	e59f1000 	ldr	r1, [pc, #0]	; 64a38 <TClassOneModem::PrepareCommand(unsigned long)+0x109c>
         64a34:	ea000072 	b	64c04 <TClassOneModem::PrepareCommand(unsigned long)+0x1268>
         64a38:	0036fce4 	eoreqs	pc, r6, r4, ror #25
         64a3c:	e3a03000 	mov	r3, #0	; 0x0
         64a40:	e3a02000 	mov	r2, #0	; 0x0
         64a44:	e3a01000 	mov	r1, #0	; 0x0
         64a48:	e3a00000 	mov	r0, #0	; 0x0
         64a4c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64a50:	e1a02005 	mov	r2, r5
         64a54:	e59f1000 	ldr	r1, [pc, #0]	; 64a5c <TClassOneModem::PrepareCommand(unsigned long)+0x10c0>
         64a58:	ea000069 	b	64c04 <TClassOneModem::PrepareCommand(unsigned long)+0x1268>
         64a5c:	0036fcec 	eoreqs	pc, r6, ip, ror #25
         64a60:	e3a03000 	mov	r3, #0	; 0x0
         64a64:	e3a02000 	mov	r2, #0	; 0x0
         64a68:	e3a01000 	mov	r1, #0	; 0x0
         64a6c:	e3a00000 	mov	r0, #0	; 0x0
         64a70:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64a74:	e1a02005 	mov	r2, r5
         64a78:	e59f1000 	ldr	r1, [pc, #0]	; 64a80 <TClassOneModem::PrepareCommand(unsigned long)+0x10e4>
         64a7c:	ea000060 	b	64c04 <TClassOneModem::PrepareCommand(unsigned long)+0x1268>
         64a80:	0036fcf4 	ldreqsh	pc, [r6], -r4
         64a84:	e3a03000 	mov	r3, #0	; 0x0
         64a88:	e3a02000 	mov	r2, #0	; 0x0
         64a8c:	e3a01000 	mov	r1, #0	; 0x0
         64a90:	e3a00000 	mov	r0, #0	; 0x0
         64a94:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64a98:	e1a02005 	mov	r2, r5
         64a9c:	e59f1000 	ldr	r1, [pc, #0]	; 64aa4 <TClassOneModem::PrepareCommand(unsigned long)+0x1108>
         64aa0:	ea000057 	b	64c04 <TClassOneModem::PrepareCommand(unsigned long)+0x1268>
         64aa4:	0036fcfc 	ldreqsh	pc, [r6], -ip
         64aa8:	e3a03000 	mov	r3, #0	; 0x0
         64aac:	e3a02000 	mov	r2, #0	; 0x0
         64ab0:	e3a01000 	mov	r1, #0	; 0x0
         64ab4:	e3a00000 	mov	r0, #0	; 0x0
         64ab8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64abc:	e1a02005 	mov	r2, r5
         64ac0:	e59f102c 	ldr	r1, [pc, #2c]	; 64af4 <TClassOneModem::PrepareCommand(unsigned long)+0x1158>
         64ac4:	e1a00004 	mov	r0, r4
         64ac8:	e3a03001 	mov	r3, #1	; 0x1
         64acc:	eb669ac8 	bl	1a0b5f4 <TClassOneModem::$BuildCommand(unsigned char const *, unsigned char *, unsigned long, unsigned char *, unsigned long, unsigned char *, unsigned long)>
         64ad0:	e28dd010 	add	sp, sp, #16	; 0x10
         64ad4:	e3a03000 	mov	r3, #0	; 0x0
         64ad8:	e3a02000 	mov	r2, #0	; 0x0
         64adc:	e3a01000 	mov	r1, #0	; 0x0
         64ae0:	e3a00000 	mov	r0, #0	; 0x0
         64ae4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64ae8:	e1a02005 	mov	r2, r5
         64aec:	e59f1004 	ldr	r1, [pc, #4]	; 64af8 <TClassOneModem::PrepareCommand(unsigned long)+0x115c>	; fField4
         64af0:	ea000043 	b	64c04 <TClassOneModem::PrepareCommand(unsigned long)+0x1268>
         64af4:	0036fd04 	eoreqs	pc, r6, r4, lsl #26
         64af8:	0036fd14 	eoreqs	pc, r6, r4, lsl sp
         64afc:	e3a03000 	mov	r3, #0	; 0x0
         64b00:	e3a02000 	mov	r2, #0	; 0x0
         64b04:	e3a01000 	mov	r1, #0	; 0x0
         64b08:	e3a00000 	mov	r0, #0	; 0x0
         64b0c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64b10:	e59f1000 	ldr	r1, [pc, #0]	; 64b18 <TClassOneModem::PrepareCommand(unsigned long)+0x117c>
         64b14:	ea00004d 	b	64c50 <TClassOneModem::PrepareCommand(unsigned long)+0x12b4>
         64b18:	0036fd1c 	eoreqs	pc, r6, ip, lsl sp
         64b1c:	e3a03000 	mov	r3, #0	; 0x0
         64b20:	e3a02000 	mov	r2, #0	; 0x0
         64b24:	e3a01000 	mov	r1, #0	; 0x0
         64b28:	e3a00000 	mov	r0, #0	; 0x0
         64b2c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64b30:	e1a02005 	mov	r2, r5
         64b34:	e59f1000 	ldr	r1, [pc, #0]	; 64b3c <TClassOneModem::PrepareCommand(unsigned long)+0x11a0>
         64b38:	ea000031 	b	64c04 <TClassOneModem::PrepareCommand(unsigned long)+0x1268>
         64b3c:	0036fd24 	eoreqs	pc, r6, r4, lsr #26
         64b40:	e5d43635 	ldrb	r3, [r4, #1589]	; fField1589
         64b44:	e5d42634 	ldrb	r2, [r4, #1588]	; fField1588
         64b48:	e1a00006 	mov	r0, r6
         64b4c:	e59f1004 	ldr	r1, [pc, #4]	; 64b58 <TClassOneModem::PrepareCommand(unsigned long)+0x11bc>	; fField4
         64b50:	eb6d43cf 	bl	1bb5a94 <$sprintf>
         64b54:	ea000037 	b	64c38 <TClassOneModem::PrepareCommand(unsigned long)+0x129c>
         64b58:	0036fd2c 	eoreqs	pc, r6, ip, lsr #26
         64b5c:	e3a03000 	mov	r3, #0	; 0x0
         64b60:	e3a02000 	mov	r2, #0	; 0x0
         64b64:	e3a01000 	mov	r1, #0	; 0x0
         64b68:	e3a00000 	mov	r0, #0	; 0x0
         64b6c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64b70:	e1a02005 	mov	r2, r5
         64b74:	e59f1000 	ldr	r1, [pc, #0]	; 64b7c <TClassOneModem::PrepareCommand(unsigned long)+0x11e0>
         64b78:	ea000021 	b	64c04 <TClassOneModem::PrepareCommand(unsigned long)+0x1268>
         64b7c:	0036fd38 	eoreqs	pc, r6, r8, lsr sp
         64b80:	e3a03000 	mov	r3, #0	; 0x0
         64b84:	e3a02000 	mov	r2, #0	; 0x0
         64b88:	e3a01000 	mov	r1, #0	; 0x0
         64b8c:	e3a00000 	mov	r0, #0	; 0x0
         64b90:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64b94:	e1a02005 	mov	r2, r5
         64b98:	e59f1000 	ldr	r1, [pc, #0]	; 64ba0 <TClassOneModem::PrepareCommand(unsigned long)+0x1204>
         64b9c:	ea000018 	b	64c04 <TClassOneModem::PrepareCommand(unsigned long)+0x1268>
         64ba0:	0036fd40 	eoreqs	pc, r6, r0, asr #26
         64ba4:	e3a03000 	mov	r3, #0	; 0x0
         64ba8:	e3a02000 	mov	r2, #0	; 0x0
         64bac:	e3a01000 	mov	r1, #0	; 0x0
         64bb0:	e3a00000 	mov	r0, #0	; 0x0
         64bb4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64bb8:	e59f1000 	ldr	r1, [pc, #0]	; 64bc0 <TClassOneModem::PrepareCommand(unsigned long)+0x1224>
         64bbc:	ea000023 	b	64c50 <TClassOneModem::PrepareCommand(unsigned long)+0x12b4>
         64bc0:	0036fd48 	eoreqs	pc, r6, r8, asr #26
         64bc4:	e3a03000 	mov	r3, #0	; 0x0
         64bc8:	e3a02000 	mov	r2, #0	; 0x0
         64bcc:	e3a01000 	mov	r1, #0	; 0x0
         64bd0:	e3a00000 	mov	r0, #0	; 0x0
         64bd4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64bd8:	e1a02005 	mov	r2, r5
         64bdc:	e59f1000 	ldr	r1, [pc, #0]	; 64be4 <TClassOneModem::PrepareCommand(unsigned long)+0x1248>
         64be0:	ea000007 	b	64c04 <TClassOneModem::PrepareCommand(unsigned long)+0x1268>
         64be4:	0036fd50 	eoreqs	pc, r6, r0, asr sp
         64be8:	e3a03000 	mov	r3, #0	; 0x0
         64bec:	e3a02000 	mov	r2, #0	; 0x0
         64bf0:	e3a01000 	mov	r1, #0	; 0x0
         64bf4:	e3a00000 	mov	r0, #0	; 0x0
         64bf8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64bfc:	e1a02005 	mov	r2, r5
         64c00:	e59f1008 	ldr	r1, [pc, #8]	; 64c10 <TClassOneModem::PrepareCommand(unsigned long)+0x1274>	; fField8
         64c04:	e1a00004 	mov	r0, r4
         64c08:	e3a03001 	mov	r3, #1	; 0x1
         64c0c:	ea000012 	b	64c5c <TClassOneModem::PrepareCommand(unsigned long)+0x12c0>
         64c10:	0036fd58 	eoreqs	pc, r6, r8, asr sp
         64c14:	e5d43637 	ldrb	r3, [r4, #1591]	; fField1591
         64c18:	e5d42636 	ldrb	r2, [r4, #1590]	; fField1590
         64c1c:	e92d000c 	stmdb	sp!, {r2, r3}
         64c20:	e5d43635 	ldrb	r3, [r4, #1589]	; fField1589
         64c24:	e5d42634 	ldrb	r2, [r4, #1588]	; fField1588
         64c28:	e1a00006 	mov	r0, r6
         64c2c:	e59f1060 	ldr	r1, [pc, #60]	; 64c94 <TClassOneModem::PrepareCommand(unsigned long)+0x12f8>	; fField60
         64c30:	eb6d4397 	bl	1bb5a94 <$sprintf>
         64c34:	e28dd008 	add	sp, sp, #8	; 0x8
         64c38:	e3a03000 	mov	r3, #0	; 0x0
         64c3c:	e3a02000 	mov	r2, #0	; 0x0
         64c40:	e3a01000 	mov	r1, #0	; 0x0
         64c44:	e3a00000 	mov	r0, #0	; 0x0
         64c48:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         64c4c:	e1a01006 	mov	r1, r6
         64c50:	e1a00004 	mov	r0, r4
         64c54:	e3a03000 	mov	r3, #0	; 0x0
         64c58:	e3a02000 	mov	r2, #0	; 0x0
         64c5c:	eb669a64 	bl	1a0b5f4 <TClassOneModem::$BuildCommand(unsigned char const *, unsigned char *, unsigned long, unsigned char *, unsigned long, unsigned char *, unsigned long)>
         64c60:	e28dd010 	add	sp, sp, #16	; 0x10
         64c64:	e3300000 	teq	r0, #0	; 0x0
         64c68:	1a00000c 	bne	64ca0 <TClassOneModem::PrepareCommand(unsigned long)+0x1304>
         64c6c:	e2841fa5 	add	r1, r4, #660	; 0x294
         64c70:	e2811b01 	add	r1, r1, #1024	; 0x400
         64c74:	e1a00009 	mov	r0, r9
         64c78:	eb6e1620 	bl	1bea500 <CBufferList::$InsertFirst(CBuffer *)>
         64c7c:	e2841fd7 	add	r1, r4, #860	; 0x35c
         64c80:	e2811b01 	add	r1, r1, #1024	; 0x400
         64c84:	e1a00009 	mov	r0, r9
         64c88:	eb6e161d 	bl	1bea504 <CBufferList::$InsertLast(CBuffer *)>
         64c8c:	e3a00000 	mov	r0, #0	; 0x0
         64c90:	ea000002 	b	64ca0 <TClassOneModem::PrepareCommand(unsigned long)+0x1304>
         64c94:	0036fd60 	eoreqs	pc, r6, r0, ror #26
         64c98:	e3a0007e 	mov	r0, #126	; 0x7e
         64c9c:	e2400c3f 	sub	r0, r0, #16128	; 0x3f00
         64ca0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TClassOneModem::GetCommandResult(void)
 * Address: 00064ca4
 */
TClassOneModem::GetCommandResult(void) {
    /*
         64ca4:	e1a0c00d 	mov	ip, sp
         64ca8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         64cac:	e24cb004 	sub	fp, ip, #4	; 0x4
         64cb0:	e1a04000 	mov	r4, r0
         64cb4:	e590278c 	ldr	r2, [r0, #1932]	; fField1932
         64cb8:	e3320000 	teq	r2, #0	; 0x0
         64cbc:	0a000007 	beq	64ce0 <TClassOneModem::GetCommandResult(void)+0x3c>
         64cc0:	e1a00004 	mov	r0, r4
         64cc4:	e3a01001 	mov	r1, #1	; 0x1
         64cc8:	eb6711f5 	bl	1a294a4 <TClassOneModem::$PostTimer(unsigned long, unsigned long)>
         64ccc:	e3300000 	teq	r0, #0	; 0x0
         64cd0:	11a01000 	movne	r1, r0
         64cd4:	11a00004 	movne	r0, r4
         64cd8:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         64cdc:	1a66bf5f 	bne	1a14a60 <TClassOneModem::$ModemCommandComplete(long)>
         64ce0:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         64ce4:	e3800008 	orr	r0, r0, #8	; 0x8
         64ce8:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         64cec:	e3a00001 	mov	r0, #1	; 0x1
         64cf0:	e58405c8 	str	r0, [r4, #1480]	; fField1480
         64cf4:	e3a00000 	mov	r0, #0	; 0x0
         64cf8:	e5840790 	str	r0, [r4, #1936]	; fField1936
         64cfc:	e2840f96 	add	r0, r4, #600	; 0x258
         64d00:	e2800b02 	add	r0, r0, #2048	; 0x800
         64d04:	e1a05000 	mov	r5, r0
         64d08:	e5901000 	ldr	r1, [r0]
         64d0c:	e1a0e00f 	mov	lr, pc
         64d10:	e281f028 	add	pc, r1, #40	; 0x28
         64d14:	e1a01005 	mov	r1, r5
         64d18:	e1a00004 	mov	r0, r4
         64d1c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         64d20:	ea66aece 	b	1a10860 <TSerTool::$GetBytes(CBufferList *)>
    */
}

/**
 * Symbol: TClassOneModem::GetCommandResultComplete(long)
 * Address: 00064d24
 */
TClassOneModem::GetCommandResultComplete(long) {
    /*
         64d24:	e1a0c00d 	mov	ip, sp
         64d28:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         64d2c:	e24cb004 	sub	fp, ip, #4	; 0x4
         64d30:	e1a04000 	mov	r4, r0
         64d34:	e3a06000 	mov	r6, #0	; 0x0
         64d38:	e59005b0 	ldr	r0, [r0, #1456]	; fField1456
         64d3c:	e3c00008 	bic	r0, r0, #8	; 0x8
         64d40:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         64d44:	e3100020 	tst	r0, #32	; 0x20
         64d48:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         64d4c:	e2845f96 	add	r5, r4, #600	; 0x258
         64d50:	e2855b02 	add	r5, r5, #2048	; 0x800
         64d54:	e3310000 	teq	r1, #0	; 0x0
         64d58:	1a000045 	bne	64e74 <TClassOneModem::GetCommandResultComplete(long)+0x150>
         64d5c:	e1a00005 	mov	r0, r5
         64d60:	e3e02000 	mvn	r2, #0	; 0x0
         64d64:	e3a01000 	mov	r1, #0	; 0x0
         64d68:	e5953000 	ldr	r3, [r5]
         64d6c:	e1a0e00f 	mov	lr, pc
         64d70:	e283f038 	add	pc, r3, #56	; 0x38
         64d74:	e1a00005 	mov	r0, r5
         64d78:	e5951000 	ldr	r1, [r5]
         64d7c:	e1a0e00f 	mov	lr, pc
         64d80:	e281f010 	add	pc, r1, #16	; 0x10
         64d84:	e20020ff 	and	r2, r0, #255	; 0xff
         64d88:	e3a00000 	mov	r0, #0	; 0x0
         64d8c:	e332000d 	teq	r2, #13	; 0xd
         64d90:	13320011 	teqne	r2, #17	; 0x11
         64d94:	13320013 	teqne	r2, #19	; 0x13
         64d98:	0a000018 	beq	64e00 <TClassOneModem::GetCommandResultComplete(long)+0xdc>
         64d9c:	e332000a 	teq	r2, #10	; 0xa
         64da0:	e5941790 	ldr	r1, [r4, #1936]	; fField1936
         64da4:	1a00000f 	bne	64de8 <TClassOneModem::GetCommandResultComplete(long)+0xc4>
         64da8:	e3310000 	teq	r1, #0	; 0x0
         64dac:	0a000013 	beq	64e00 <TClassOneModem::GetCommandResultComplete(long)+0xdc>
         64db0:	e3510002 	cmp	r1, #2	; 0x2
         64db4:	3a000008 	bcc	64ddc <TClassOneModem::GetCommandResultComplete(long)+0xb8>
         64db8:	e5d42934 	ldrb	r2, [r4, #2356]	; fField2356
         64dbc:	e59f1020 	ldr	r1, [pc, #20]	; 64de4 <TClassOneModem::GetCommandResultComplete(long)+0xc0>	; fField20
         64dc0:	e5d13000 	ldrb	r3, [r1]
         64dc4:	e1320003 	teq	r2, r3
         64dc8:	05d42935 	ldreqb	r2, [r4, #2357]	; fField2357
         64dcc:	05d11001 	ldreqb	r1, [r1, #1]
         64dd0:	01320001 	teqeq	r2, r1
         64dd4:	05840790 	streq	r0, [r4, #1936]	; fField1936
         64dd8:	0a000008 	beq	64e00 <TClassOneModem::GetCommandResultComplete(long)+0xdc>
         64ddc:	e3a06001 	mov	r6, #1	; 0x1
         64de0:	ea000006 	b	64e00 <TClassOneModem::GetCommandResultComplete(long)+0xdc>
         64de4:	0036f97c 	eoreqs	pc, r6, ip, ror r9
         64de8:	e3510c01 	cmp	r1, #256	; 0x100
         64dec:	2a000003 	bcs	64e00 <TClassOneModem::GetCommandResultComplete(long)+0xdc>
         64df0:	e2813001 	add	r3, r1, #1	; 0x1
         64df4:	e5843790 	str	r3, [r4, #1936]	; fField1936
         64df8:	e0811004 	add	r1, r1, r4
         64dfc:	e5c12934 	strb	r2, [r1, #2356]	; fField2356
         64e00:	e3360000 	teq	r6, #0	; 0x0
         64e04:	0a00001d 	beq	64e80 <TClassOneModem::GetCommandResultComplete(long)+0x15c>
         64e08:	e5941790 	ldr	r1, [r4, #1936]	; fField1936
         64e0c:	e0811004 	add	r1, r1, r4
         64e10:	e5c10934 	strb	r0, [r1, #2356]	; fField2356
         64e14:	e2841f4d 	add	r1, r4, #308	; 0x134
         64e18:	e2811b02 	add	r1, r1, #2048	; 0x800
         64e1c:	e1a00004 	mov	r0, r4
         64e20:	eb66e434 	bl	1a1def8 <TClassOneModem::$ParseModemRsp(unsigned char *)>
         64e24:	e59405f4 	ldr	r0, [r4, #1524]	; fField1524
         64e28:	e3300001 	teq	r0, #1	; 0x1
         64e2c:	03a00f4b 	moveq	r0, #300	; 0x12c
         64e30:	05840788 	streq	r0, [r4, #1928]	; fField1928
         64e34:	0a00000a 	beq	64e64 <TClassOneModem::GetCommandResultComplete(long)+0x140>
         64e38:	e3300011 	teq	r0, #17	; 0x11
         64e3c:	1a000008 	bne	64e64 <TClassOneModem::GetCommandResultComplete(long)+0x140>
         64e40:	e59f0028 	ldr	r0, [pc, #28]	; 64e70 <TClassOneModem::GetCommandResultComplete(long)+0x14c>	; fField28
         64e44:	eb6d4319 	bl	1bb5ab0 <$strlen>
         64e48:	e0800004 	add	r0, r0, r4
         64e4c:	e2800f4d 	add	r0, r0, #308	; 0x134
         64e50:	e2800b02 	add	r0, r0, #2048	; 0x800
         64e54:	eb6d3ad3 	bl	1bb39a8 <$atoi>
         64e58:	e5840788 	str	r0, [r4, #1928]	; fField1928
         64e5c:	e3a00001 	mov	r0, #1	; 0x1
         64e60:	e58405f4 	str	r0, [r4, #1524]	; fField1524
         64e64:	e1a00004 	mov	r0, r4
         64e68:	e3a01000 	mov	r1, #0	; 0x0
         64e6c:	ea00000f 	b	64eb0 <TClassOneModem::GetCommandResultComplete(long)+0x18c>
         64e70:	0036fddc 	ldreqsb	pc, [r6], -ip
         64e74:	e281cc46 	add	ip, r1, #17920	; 0x4600
         64e78:	e37c0053 	cmn	ip, #83	; 0x53
         64e7c:	1a00000a 	bne	64eac <TClassOneModem::GetCommandResultComplete(long)+0x188>
         64e80:	e59405b0 	ldr	r0, [r4, #1456]	; fField1456
         64e84:	e3800008 	orr	r0, r0, #8	; 0x8
         64e88:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         64e8c:	e1a00005 	mov	r0, r5
         64e90:	e5951000 	ldr	r1, [r5]
         64e94:	e1a0e00f 	mov	lr, pc
         64e98:	e281f028 	add	pc, r1, #40	; 0x28
         64e9c:	e1a01005 	mov	r1, r5
         64ea0:	e1a00004 	mov	r0, r4
         64ea4:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         64ea8:	ea66ae6c 	b	1a10860 <TSerTool::$GetBytes(CBufferList *)>
         64eac:	e1a00004 	mov	r0, r4
         64eb0:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         64eb4:	ea66bee9 	b	1a14a60 <TClassOneModem::$ModemCommandComplete(long)>
    */
}

/**
 * Symbol: TClassOneModem::AdjustForReset(void)
 * Address: 00064eb8
 */
TClassOneModem::AdjustForReset(void) {
    /*
         64eb8:	e1a0c00d 	mov	ip, sp
         64ebc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         64ec0:	e24cb004 	sub	fp, ip, #4	; 0x4
         64ec4:	e1a04000 	mov	r4, r0
         64ec8:	e59005c4 	ldr	r0, [r0, #1476]	; fField1476
         64ecc:	e3300000 	teq	r0, #0	; 0x0
         64ed0:	059405f4 	ldreq	r0, [r4, #1524]	; fField1524
         64ed4:	03300000 	teqeq	r0, #0	; 0x0
         64ed8:	059405b0 	ldreq	r0, [r4, #1456]	; fField1456
         64edc:	02001001 	andeq	r1, r0, #1	; 0x1
         64ee0:	03310000 	teqeq	r1, #0	; 0x0
         64ee4:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         64ee8:	e3800001 	orr	r0, r0, #1	; 0x1
         64eec:	e58405b0 	str	r0, [r4, #1456]	; fField1456
         64ef0:	e3a00000 	mov	r0, #0	; 0x0
         64ef4:	e5c4065a 	strb	r0, [r4, #1626]	; fField1626
         64ef8:	e5c4065b 	strb	r0, [r4, #1627]	; fField1627
         64efc:	e5c4066e 	strb	r0, [r4, #1646]	; fField1646
         64f00:	e5c4066f 	strb	r0, [r4, #1647]	; fField1647
         64f04:	e2841f93 	add	r1, r4, #588	; 0x24c
         64f08:	e2811b01 	add	r1, r1, #1024	; 0x400
         64f0c:	e1a00004 	mov	r0, r4
         64f10:	eb66d36b 	bl	1a19cc4 <TAsyncSerTool::$SetOutputFlowControl(TCMOOutputFlowControlParms *)>
         64f14:	e2841e66 	add	r1, r4, #1632	; 0x660
         64f18:	e1a00004 	mov	r0, r4
         64f1c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         64f20:	ea66d362 	b	1a19cb0 <TAsyncSerTool::$SetInputFlowControl(TCMOInputFlowControlParms *)>
    */
}

/**
 * Symbol: TClassOneModem::AdjustForConnectSpeed(void)
 * Address: 00064f24
 */
TClassOneModem::AdjustForConnectSpeed(void) {
    /*
         64f24:	e1a0c00d 	mov	ip, sp
         64f28:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         64f2c:	e24cb004 	sub	fp, ip, #4	; 0x4
         64f30:	e1a04000 	mov	r4, r0
         64f34:	e59005b0 	ldr	r0, [r0, #1456]	; fField1456
         64f38:	e3100001 	tst	r0, #1	; 0x1
         64f3c:	e2845e66 	add	r5, r4, #1632	; 0x660
         64f40:	e3a06001 	mov	r6, #1	; 0x1
         64f44:	0a00002f 	beq	65008 <TClassOneModem::AdjustForConnectSpeed(void)+0xe4>
         64f48:	e3100002 	tst	r0, #2	; 0x2
         64f4c:	0a00000f 	beq	64f90 <TClassOneModem::AdjustForConnectSpeed(void)+0x6c>
         64f50:	e5c4665b 	strb	r6, [r4, #1627]	; fField1627
         64f54:	e2841f93 	add	r1, r4, #588	; 0x24c
         64f58:	e2811b01 	add	r1, r1, #1024	; 0x400
         64f5c:	e1a00004 	mov	r0, r4
         64f60:	eb66d357 	bl	1a19cc4 <TAsyncSerTool::$SetOutputFlowControl(TCMOOutputFlowControlParms *)>
         64f64:	e59407b0 	ldr	r0, [r4, #1968]	; fField1968
         64f68:	e310000e 	tst	r0, #14	; 0xe
         64f6c:	159407d8 	ldrne	r0, [r4, #2008]	; fField2008
         64f70:	15d0000d 	ldrneb	r0, [r0, #13]
         64f74:	13300000 	teqne	r0, #0	; 0x0
         64f78:	0a00000f 	beq	64fbc <TClassOneModem::AdjustForConnectSpeed(void)+0x98>
         64f7c:	e5c4666f 	strb	r6, [r4, #1647]	; fField1647
         64f80:	e1a01005 	mov	r1, r5
         64f84:	e1a00004 	mov	r0, r4
         64f88:	eb66d348 	bl	1a19cb0 <TAsyncSerTool::$SetInputFlowControl(TCMOInputFlowControlParms *)>
         64f8c:	ea00000a 	b	64fbc <TClassOneModem::AdjustForConnectSpeed(void)+0x98>
         64f90:	e2841d1e 	add	r1, r4, #1920	; 0x780
         64f94:	e9910003 	ldmib	r1, {r0, r1}
         64f98:	e1300001 	teq	r0, r1
         64f9c:	0a000006 	beq	64fbc <TClassOneModem::AdjustForConnectSpeed(void)+0x98>
         64fa0:	e3a03008 	mov	r3, #8	; 0x8
         64fa4:	e92d0008 	stmdb	sp!, {r3}
         64fa8:	e1a00004 	mov	r0, r4
         64fac:	e3a03000 	mov	r3, #0	; 0x0
         64fb0:	e3a02000 	mov	r2, #0	; 0x0
         64fb4:	eb66cf1c 	bl	1a18c2c <TClassOneModem::$ResetSerialDrvr(unsigned long, long, long, long)>
         64fb8:	e28dd004 	add	sp, sp, #4	; 0x4
         64fbc:	e1a00004 	mov	r0, r4
         64fc0:	eb66d32f 	bl	1a19c84 <TClassOneModem::$SetCDOption(void)>
         64fc4:	e5941184 	ldr	r1, [r4, #388]	; fField388
         64fc8:	e3310000 	teq	r1, #0	; 0x0
         64fcc:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         64fd0:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         64fd4:	e1a0000d 	mov	r0, sp
         64fd8:	eb6d42c6 	bl	1bb5af8 <TOptionIterator::$__ct(TOptionArray *)>
         64fdc:	e1a0000d 	mov	r0, sp
         64fe0:	e59f101c 	ldr	r1, [pc, #1c]	; 65004 <TClassOneModem::AdjustForConnectSpeed(void)+0xe0>
         64fe4:	eb6d4f0a 	bl	1bb8c14 <TOptionIterator::$FindOption(unsigned long)>
         64fe8:	e3300000 	teq	r0, #0	; 0x0
         64fec:	15b41788 	ldrne	r1, [r4, #1928]!	; fField1928
         64ff0:	15a0100c 	strne	r1, [r0, #12]!	; fField12
         64ff4:	e1a0000d 	mov	r0, sp
         64ff8:	e3a01000 	mov	r1, #0	; 0x0
         64ffc:	eb6d46ce 	bl	1bb6b3c <TOptionIterator::$__dt(void)>
         65000:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         65004:	6d737064 	ldcvsl	0, cr7, [r3, -#400]!
         65008:	e5941018 	ldr	r1, [r4, #24]	; fField24
         6500c:	e3110040 	tst	r1, #64	; 0x40
         65010:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         65014:	e3100002 	tst	r0, #2	; 0x2
         65018:	05c4666e 	streqb	r6, [r4, #1646]	; fField1646
         6501c:	15c4666f 	strneb	r6, [r4, #1647]	; fField1647
         65020:	e1a01005 	mov	r1, r5
         65024:	e1a00004 	mov	r0, r4
         65028:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         6502c:	ea66d31f 	b	1a19cb0 <TAsyncSerTool::$SetInputFlowControl(TCMOInputFlowControlParms *)>
    */
}

/**
 * Symbol: TClassOneModem::GetToolCapabilities(void)
 * Address: 00065030
 */
TClassOneModem::GetToolCapabilities(void) {
    /*
         65030:	e3a00000 	mov	r0, #0	; 0x0
         65034:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TClassOneModem::GetModParamStr(unsigned long)
 * Address: 00065038
 */
TClassOneModem::GetModParamStr(unsigned long) {
    /*
         65038:	e3510040 	cmp	r1, #64	; 0x40
         6503c:	059f003c 	ldreq	r0, [pc, #3c]	; 65080 <TClassOneModem::GetModParamStr(unsigned long)+0x48>
         65040:	01a0f00e 	moveq	pc, lr
         65044:	ca00001b 	bgt	650b8 <TClassOneModem::GetModParamStr(unsigned long)+0x80>
         65048:	e3510008 	cmp	r1, #8	; 0x8
         6504c:	059f0030 	ldreq	r0, [pc, #30]	; 65084 <TClassOneModem::GetModParamStr(unsigned long)+0x4c>
         65050:	01a0f00e 	moveq	pc, lr
         65054:	ca00000e 	bgt	65094 <TClassOneModem::GetModParamStr(unsigned long)+0x5c>
         65058:	e3310001 	teq	r1, #1	; 0x1
         6505c:	059f0024 	ldreq	r0, [pc, #24]	; 65088 <TClassOneModem::GetModParamStr(unsigned long)+0x50>	; fField24
         65060:	01a0f00e 	moveq	pc, lr
         65064:	e3310002 	teq	r1, #2	; 0x2
         65068:	059f001c 	ldreq	r0, [pc, #1c]	; 6508c <TClassOneModem::GetModParamStr(unsigned long)+0x54>
         6506c:	01a0f00e 	moveq	pc, lr
         65070:	e3310004 	teq	r1, #4	; 0x4
         65074:	059f0014 	ldreq	r0, [pc, #14]	; 65090 <TClassOneModem::GetModParamStr(unsigned long)+0x58>
         65078:	01a0f00e 	moveq	pc, lr
         6507c:	ea000025 	b	65118 <TClassOneModem::GetModParamStr(unsigned long)+0xe0>
         65080:	0036fa68 	eoreqs	pc, r6, r8, ror #20
         65084:	0036fa5c 	eoreqs	pc, r6, ip, asr sl
         65088:	0036fa50 	eoreqs	pc, r6, r0, asr sl
         6508c:	0036fa54 	eoreqs	pc, r6, r4, asr sl
         65090:	0036fa58 	eoreqs	pc, r6, r8, asr sl
         65094:	e3310010 	teq	r1, #16	; 0x10
         65098:	059f0010 	ldreq	r0, [pc, #10]	; 650b0 <TClassOneModem::GetModParamStr(unsigned long)+0x78>
         6509c:	01a0f00e 	moveq	pc, lr
         650a0:	e3310020 	teq	r1, #32	; 0x20
         650a4:	059f0008 	ldreq	r0, [pc, #8]	; 650b4 <TClassOneModem::GetModParamStr(unsigned long)+0x7c>	; fField8
         650a8:	01a0f00e 	moveq	pc, lr
         650ac:	ea000019 	b	65118 <TClassOneModem::GetModParamStr(unsigned long)+0xe0>
         650b0:	0036fa60 	eoreqs	pc, r6, r0, ror #20
         650b4:	0036fa64 	eoreqs	pc, r6, r4, ror #20
         650b8:	e3510b01 	cmp	r1, #1024	; 0x400
         650bc:	059f002c 	ldreq	r0, [pc, #2c]	; 650f0 <TClassOneModem::GetModParamStr(unsigned long)+0xb8>
         650c0:	01a0f00e 	moveq	pc, lr
         650c4:	ca00000d 	bgt	65100 <TClassOneModem::GetModParamStr(unsigned long)+0xc8>
         650c8:	e3310080 	teq	r1, #128	; 0x80
         650cc:	059f0020 	ldreq	r0, [pc, #20]	; 650f4 <TClassOneModem::GetModParamStr(unsigned long)+0xbc>	; fField20
         650d0:	01a0f00e 	moveq	pc, lr
         650d4:	e3310c01 	teq	r1, #256	; 0x100
         650d8:	059f0018 	ldreq	r0, [pc, #18]	; 650f8 <TClassOneModem::GetModParamStr(unsigned long)+0xc0>
         650dc:	01a0f00e 	moveq	pc, lr
         650e0:	e3310c02 	teq	r1, #512	; 0x200
         650e4:	059f0010 	ldreq	r0, [pc, #10]	; 650fc <TClassOneModem::GetModParamStr(unsigned long)+0xc4>
         650e8:	01a0f00e 	moveq	pc, lr
         650ec:	ea000009 	b	65118 <TClassOneModem::GetModParamStr(unsigned long)+0xe0>
         650f0:	0036fa78 	eoreqs	pc, r6, r8, ror sl
         650f4:	0036fa6c 	eoreqs	pc, r6, ip, ror #20
         650f8:	0036fa70 	eoreqs	pc, r6, r0, ror sl
         650fc:	0036fa74 	eoreqs	pc, r6, r4, ror sl
         65100:	e3310b02 	teq	r1, #2048	; 0x800
         65104:	059f0014 	ldreq	r0, [pc, #14]	; 65120 <TClassOneModem::GetModParamStr(unsigned long)+0xe8>
         65108:	01a0f00e 	moveq	pc, lr
         6510c:	e3310a01 	teq	r1, #4096	; 0x1000
         65110:	059f000c 	ldreq	r0, [pc, #c]	; 65124 <TClassOneModem::GetModParamStr(unsigned long)+0xec>
         65114:	01a0f00e 	moveq	pc, lr
         65118:	e3a00000 	mov	r0, #0	; 0x0
         6511c:	e1a0f00e 	mov	pc, lr
         65120:	0036fa7c 	eoreqs	pc, r6, ip, ror sl
         65124:	0036fa80 	eoreqs	pc, r6, r0, lsl #21
    */
}

/**
 * Symbol: TClassOneModem::GetModBaudRate(unsigned long)
 * Address: 00065128
 */
TClassOneModem::GetModBaudRate(unsigned long) {
    /*
         65128:	e3510040 	cmp	r1, #64	; 0x40
         6512c:	0a000024 	beq	651c4 <TClassOneModem::GetModBaudRate(unsigned long)+0x9c>
         65130:	ca000012 	bgt	65180 <TClassOneModem::GetModBaudRate(unsigned long)+0x58>
         65134:	e3510008 	cmp	r1, #8	; 0x8
         65138:	0a00000d 	beq	65174 <TClassOneModem::GetModBaudRate(unsigned long)+0x4c>
         6513c:	ca000009 	bgt	65168 <TClassOneModem::GetModBaudRate(unsigned long)+0x40>
         65140:	e3310001 	teq	r1, #1	; 0x1
         65144:	03a00f4b 	moveq	r0, #300	; 0x12c
         65148:	01a0f00e 	moveq	pc, lr
         6514c:	e3310002 	teq	r1, #2	; 0x2
         65150:	03a00e96 	moveq	r0, #2400	; 0x960
         65154:	01a0f00e 	moveq	pc, lr
         65158:	e3310004 	teq	r1, #4	; 0x4
         6515c:	03a00d4b 	moveq	r0, #4800	; 0x12c0
         65160:	01a0f00e 	moveq	pc, lr
         65164:	ea000014 	b	651bc <TClassOneModem::GetModBaudRate(unsigned long)+0x94>
         65168:	e3310010 	teq	r1, #16	; 0x10
         6516c:	13310020 	teqne	r1, #32	; 0x20
         65170:	1a000011 	bne	651bc <TClassOneModem::GetModBaudRate(unsigned long)+0x94>
         65174:	e3a00ec2 	mov	r0, #3104	; 0xc20
         65178:	e2800a01 	add	r0, r0, #4096	; 0x1000
         6517c:	e1a0f00e 	mov	pc, lr
         65180:	e3510b01 	cmp	r1, #1024	; 0x400
         65184:	0a000005 	beq	651a0 <TClassOneModem::GetModBaudRate(unsigned long)+0x78>
         65188:	ca000007 	bgt	651ac <TClassOneModem::GetModBaudRate(unsigned long)+0x84>
         6518c:	e3310080 	teq	r1, #128	; 0x80
         65190:	13310c01 	teqne	r1, #256	; 0x100
         65194:	0a00000a 	beq	651c4 <TClassOneModem::GetModBaudRate(unsigned long)+0x9c>
         65198:	e3310c02 	teq	r1, #512	; 0x200
         6519c:	1a000006 	bne	651bc <TClassOneModem::GetModBaudRate(unsigned long)+0x94>
         651a0:	e3a00eee 	mov	r0, #3808	; 0xee0
         651a4:	e2800a02 	add	r0, r0, #8192	; 0x2000
         651a8:	e1a0f00e 	mov	pc, lr
         651ac:	e3310b02 	teq	r1, #2048	; 0x800
         651b0:	13310a01 	teqne	r1, #4096	; 0x1000
         651b4:	03a00de1 	moveq	r0, #14400	; 0x3840
         651b8:	01a0f00e 	moveq	pc, lr
         651bc:	e3a00000 	mov	r0, #0	; 0x0
         651c0:	e1a0f00e 	mov	pc, lr
         651c4:	e3a00d96 	mov	r0, #9600	; 0x2580
         651c8:	e1a0f00e 	mov	pc, lr
    */
}

