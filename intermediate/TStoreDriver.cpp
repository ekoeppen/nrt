#include "include/TStoreDriver.h"

/**
 * Symbol: TStoreDriver::Init(char *, unsigned long, char *, unsigned long)
 * Address: 001faf08
 */
TStoreDriver::Init(char *, unsigned long, char *, unsigned long) {
    /*
        1faf08:	e59dc000 	ldr	ip, [sp]
        1faf0c:	e880100e 	stmia	r0, {r1, r2, r3, ip}
        1faf10:	e082100c 	add	r1, r2, ip
        1faf14:	e5a01010 	str	r1, [r0, #16]!	; fField16
        1faf18:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TStoreDriver::AddressOf(unsigned long, unsigned char *)
 * Address: 001faf1c
 */
TStoreDriver::AddressOf(unsigned long, unsigned char *) {
    /*
        1faf1c:	e590300c 	ldr	r3, [r0, #12]	; fField12
        1faf20:	e1530001 	cmp	r3, r1
        1faf24:	9a00000a 	bls	1faf54 <TStoreDriver::AddressOf(unsigned long, unsigned char *)+0x38>
        1faf28:	e5b03008 	ldr	r3, [r0, #8]!	; fField8
        1faf2c:	e1a00781 	mov	r0, r1, lsl #15
        1faf30:	e1a007a0 	mov	r0, r0, lsr #15
        1faf34:	e0830100 	add	r0, r3, r0, lsl #2
        1faf38:	e3a03003 	mov	r3, #3	; 0x3
        1faf3c:	e02318a1 	eor	r1, r3, r1, lsr #17
        1faf40:	e0800001 	add	r0, r0, r1
        1faf44:	e3320000 	teq	r2, #0	; 0x0
        1faf48:	13a01000 	movne	r1, #0	; 0x0
        1faf4c:	1a000006 	bne	1faf6c <TStoreDriver::AddressOf(unsigned long, unsigned char *)+0x50>
        1faf50:	e1a0f00e 	mov	pc, lr
        1faf54:	e0411003 	sub	r1, r1, r3
        1faf58:	e5900000 	ldr	r0, [r0]
        1faf5c:	e0810000 	add	r0, r1, r0
        1faf60:	e3320000 	teq	r2, #0	; 0x0
        1faf64:	01a0f00e 	moveq	pc, lr
        1faf68:	e3a01001 	mov	r1, #1	; 0x1
        1faf6c:	e5c21000 	strb	r1, [r2]
        1faf70:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TStoreDriver::AddressOfAligned(unsigned long, unsigned char *)
 * Address: 001faf74
 */
TStoreDriver::AddressOfAligned(unsigned long, unsigned char *) {
    /*
        1faf74:	e590300c 	ldr	r3, [r0, #12]	; fField12
        1faf78:	e1530001 	cmp	r3, r1
        1faf7c:	9a000007 	bls	1fafa0 <TStoreDriver::AddressOfAligned(unsigned long, unsigned char *)+0x2c>
        1faf80:	e5900008 	ldr	r0, [r0, #8]	; fField8
        1faf84:	e1a01781 	mov	r1, r1, lsl #15
        1faf88:	e1a017a1 	mov	r1, r1, lsr #15
        1faf8c:	e0800101 	add	r0, r0, r1, lsl #2
        1faf90:	e3320000 	teq	r2, #0	; 0x0
        1faf94:	13a01000 	movne	r1, #0	; 0x0
        1faf98:	1a000006 	bne	1fafb8 <TStoreDriver::AddressOfAligned(unsigned long, unsigned char *)+0x44>
        1faf9c:	e1a0f00e 	mov	pc, lr
        1fafa0:	e0411003 	sub	r1, r1, r3
        1fafa4:	e5900000 	ldr	r0, [r0]
        1fafa8:	e0810000 	add	r0, r1, r0
        1fafac:	e3320000 	teq	r2, #0	; 0x0
        1fafb0:	01a0f00e 	moveq	pc, lr
        1fafb4:	e3a01001 	mov	r1, #1	; 0x1
        1fafb8:	e5c21000 	strb	r1, [r2]
        1fafbc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TStoreDriver::PersistentCopy(unsigned long, unsigned long, unsigned long)
 * Address: 001fafc0
 */
TStoreDriver::PersistentCopy(unsigned long, unsigned long, unsigned long) {
    /*
        1fafc0:	e1a0c00d 	mov	ip, sp
        1fafc4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1fafc8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1fafcc:	e1a04000 	mov	r4, r0
        1fafd0:	e1a05001 	mov	r5, r1
        1fafd4:	e1a06002 	mov	r6, r2
        1fafd8:	e1a07003 	mov	r7, r3
        1fafdc:	e24dd004 	sub	sp, sp, #4	; 0x4
        1fafe0:	e2800014 	add	r0, r0, #20	; 0x14
        1fafe4:	e8800006 	stmia	r0, {r1, r2}
        1fafe8:	e2400014 	sub	r0, r0, #20	; 0x14
        1fafec:	e1a0200d 	mov	r2, sp
        1faff0:	eb63de50 	bl	1af2938 <TStoreDriver::$AddressOf(unsigned long, unsigned char *)>
        1faff4:	e5dd0000 	ldrb	r0, [sp]
        1faff8:	e3300000 	teq	r0, #0	; 0x0
        1faffc:	11a00127 	movne	r0, r7, lsr #2
        1fb000:	15840020 	strne	r0, [r4, #32]	; fField32
        1fb004:	05847020 	streq	r7, [r4, #32]	; fField32
        1fb008:	e3a00000 	mov	r0, #0	; 0x0
        1fb00c:	e1550006 	cmp	r5, r6
        1fb010:	e584001c 	str	r0, [r4, #28]	; fField28
        1fb014:	90461005 	subls	r1, r6, r5
        1fb018:	80451006 	subhi	r1, r5, r6
        1fb01c:	e3a02001 	mov	r2, #1	; 0x1
        1fb020:	e1510007 	cmp	r1, r7
        1fb024:	2a000007 	bcs	1fb048 <TStoreDriver::PersistentCopy(unsigned long, unsigned long, unsigned long)+0x88>
        1fb028:	e5c42025 	strb	r2, [r4, #37]	; fField37
        1fb02c:	e5940018 	ldr	r0, [r4, #24]	; fField24
        1fb030:	e5941014 	ldr	r1, [r4, #20]	; fField20
        1fb034:	e1510000 	cmp	r1, r0
        1fb038:	35940020 	ldrcc	r0, [r4, #32]	; fField32
        1fb03c:	32400001 	subcc	r0, r0, #1	; 0x1
        1fb040:	3584001c 	strcc	r0, [r4, #28]	; fField28
        1fb044:	ea000000 	b	1fb04c <TStoreDriver::PersistentCopy(unsigned long, unsigned long, unsigned long)+0x8c>
        1fb048:	e5c40025 	strb	r0, [r4, #37]	; fField37
        1fb04c:	e5c42024 	strb	r2, [r4, #36]	; fField36
        1fb050:	e2842014 	add	r2, r4, #20	; 0x14
        1fb054:	e8920006 	ldmia	r2, {r1, r2}
        1fb058:	e1a00004 	mov	r0, r4
        1fb05c:	eb63f2cd 	bl	1af7b98 <TStoreDriver::$DoPersistentCopy(unsigned long, unsigned long)>
        1fb060:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TStoreDriver::ContinuePersistentCopy(void)
 * Address: 001fb064
 */
TStoreDriver::ContinuePersistentCopy(void) {
    /*
        1fb064:	e5d01024 	ldrb	r1, [r0, #36]	; fField36
        1fb068:	e3310000 	teq	r1, #0	; 0x0
        1fb06c:	12802014 	addne	r2, r0, #20	; 0x14
        1fb070:	18920006 	ldmneia	r2, {r1, r2}
        1fb074:	1a63f2c7 	bne	1af7b98 <TStoreDriver::$DoPersistentCopy(unsigned long, unsigned long)>
        1fb078:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TStoreDriver::DoPersistentCopy(unsigned long, unsigned long)
 * Address: 001fb07c
 */
TStoreDriver::DoPersistentCopy(unsigned long, unsigned long) {
    /*
        1fb07c:	e1a0c00d 	mov	ip, sp
        1fb080:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1fb084:	e24cb004 	sub	fp, ip, #4	; 0x4
        1fb088:	e1a04000 	mov	r4, r0
        1fb08c:	e1a05001 	mov	r5, r1
        1fb090:	e1a06002 	mov	r6, r2
        1fb094:	e5d00025 	ldrb	r0, [r0, #37]	; fField37
        1fb098:	e3300000 	teq	r0, #0	; 0x0
        1fb09c:	e594000c 	ldr	r0, [r4, #12]	; fField12
        1fb0a0:	0a000042 	beq	1fb1b0 <TStoreDriver::DoPersistentCopy(unsigned long, unsigned long)+0x134>
        1fb0a4:	e1500005 	cmp	r0, r5
        1fb0a8:	e1a01005 	mov	r1, r5
        1fb0ac:	e1a00004 	mov	r0, r4
        1fb0b0:	e3a02000 	mov	r2, #0	; 0x0
        1fb0b4:	8a00001e 	bhi	1fb134 <TStoreDriver::DoPersistentCopy(unsigned long, unsigned long)+0xb8>
        1fb0b8:	eb63de1f 	bl	1af293c <TStoreDriver::$AddressOfAligned(unsigned long, unsigned char *)>
        1fb0bc:	e1a05000 	mov	r5, r0
        1fb0c0:	e1a01006 	mov	r1, r6
        1fb0c4:	e1a00004 	mov	r0, r4
        1fb0c8:	e3a02000 	mov	r2, #0	; 0x0
        1fb0cc:	eb63de1a 	bl	1af293c <TStoreDriver::$AddressOfAligned(unsigned long, unsigned char *)>
        1fb0d0:	e1a01000 	mov	r1, r0
        1fb0d4:	e5940018 	ldr	r0, [r4, #24]	; fField24
        1fb0d8:	e5942014 	ldr	r2, [r4, #20]	; fField20
        1fb0dc:	e1520000 	cmp	r2, r0
        1fb0e0:	e594001c 	ldr	r0, [r4, #28]	; fField28
        1fb0e4:	2a000007 	bcs	1fb108 <TStoreDriver::DoPersistentCopy(unsigned long, unsigned long)+0x8c>
        1fb0e8:	e3500000 	cmp	r0, #0	; 0x0
        1fb0ec:	b91ba870 	ldmltdb	fp, {r4, r5, r6, fp, sp, pc}
        1fb0f0:	e584001c 	str	r0, [r4, #28]	; fField28
        1fb0f4:	e7952100 	ldr	r2, [r5, r0, lsl #2]	; fField2
        1fb0f8:	e7812100 	str	r2, [r1, r0, lsl #2]	; fField2
        1fb0fc:	e2500001 	subs	r0, r0, #1	; 0x1
        1fb100:	5afffffa 	bpl	1fb0f0 <TStoreDriver::DoPersistentCopy(unsigned long, unsigned long)+0x74>
        1fb104:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1fb108:	e5942020 	ldr	r2, [r4, #32]	; fField32
        1fb10c:	e1520000 	cmp	r2, r0
        1fb110:	d91ba870 	ldmledb	fp, {r4, r5, r6, fp, sp, pc}
        1fb114:	e584001c 	str	r0, [r4, #28]	; fField28
        1fb118:	e7952100 	ldr	r2, [r5, r0, lsl #2]	; fField2
        1fb11c:	e7812100 	str	r2, [r1, r0, lsl #2]	; fField2
        1fb120:	e2800001 	add	r0, r0, #1	; 0x1
        1fb124:	e5942020 	ldr	r2, [r4, #32]	; fField32
        1fb128:	e1520000 	cmp	r2, r0
        1fb12c:	cafffff8 	bgt	1fb114 <TStoreDriver::DoPersistentCopy(unsigned long, unsigned long)+0x98>
        1fb130:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1fb134:	eb63ddff 	bl	1af2938 <TStoreDriver::$AddressOf(unsigned long, unsigned char *)>
        1fb138:	e1a05000 	mov	r5, r0
        1fb13c:	e1a01006 	mov	r1, r6
        1fb140:	e1a00004 	mov	r0, r4
        1fb144:	e3a02000 	mov	r2, #0	; 0x0
        1fb148:	eb63ddfa 	bl	1af2938 <TStoreDriver::$AddressOf(unsigned long, unsigned char *)>
        1fb14c:	e1a01000 	mov	r1, r0
        1fb150:	e2842014 	add	r2, r4, #20	; 0x14
        1fb154:	e8920005 	ldmia	r2, {r0, r2}
        1fb158:	e1500002 	cmp	r0, r2
        1fb15c:	e594001c 	ldr	r0, [r4, #28]	; fField28
        1fb160:	2a000007 	bcs	1fb184 <TStoreDriver::DoPersistentCopy(unsigned long, unsigned long)+0x108>
        1fb164:	e3500000 	cmp	r0, #0	; 0x0
        1fb168:	b91ba870 	ldmltdb	fp, {r4, r5, r6, fp, sp, pc}
        1fb16c:	e584001c 	str	r0, [r4, #28]	; fField28
        1fb170:	e7d52100 	ldrb	r2, [r5, r0, lsl #2]	; fField2
        1fb174:	e7c12100 	strb	r2, [r1, r0, lsl #2]	; fField2
        1fb178:	e2500001 	subs	r0, r0, #1	; 0x1
        1fb17c:	5afffffa 	bpl	1fb16c <TStoreDriver::DoPersistentCopy(unsigned long, unsigned long)+0xf0>
        1fb180:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1fb184:	e5942020 	ldr	r2, [r4, #32]	; fField32
        1fb188:	e1520000 	cmp	r2, r0
        1fb18c:	d91ba870 	ldmledb	fp, {r4, r5, r6, fp, sp, pc}
        1fb190:	e584001c 	str	r0, [r4, #28]	; fField28
        1fb194:	e7d52100 	ldrb	r2, [r5, r0, lsl #2]	; fField2
        1fb198:	e7c12100 	strb	r2, [r1, r0, lsl #2]	; fField2
        1fb19c:	e2800001 	add	r0, r0, #1	; 0x1
        1fb1a0:	e5942020 	ldr	r2, [r4, #32]	; fField32
        1fb1a4:	e1520000 	cmp	r2, r0
        1fb1a8:	cafffff8 	bgt	1fb190 <TStoreDriver::DoPersistentCopy(unsigned long, unsigned long)+0x114>
        1fb1ac:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1fb1b0:	e1500005 	cmp	r0, r5
        1fb1b4:	8a00000d 	bhi	1fb1f0 <TStoreDriver::DoPersistentCopy(unsigned long, unsigned long)+0x174>
        1fb1b8:	e1a01006 	mov	r1, r6
        1fb1bc:	e1a00004 	mov	r0, r4
        1fb1c0:	e3a02000 	mov	r2, #0	; 0x0
        1fb1c4:	eb63dddc 	bl	1af293c <TStoreDriver::$AddressOfAligned(unsigned long, unsigned char *)>
        1fb1c8:	e1a06000 	mov	r6, r0
        1fb1cc:	e1a01005 	mov	r1, r5
        1fb1d0:	e1a00004 	mov	r0, r4
        1fb1d4:	e3a02000 	mov	r2, #0	; 0x0
        1fb1d8:	eb63ddd7 	bl	1af293c <TStoreDriver::$AddressOfAligned(unsigned long, unsigned char *)>
        1fb1dc:	e5b41020 	ldr	r1, [r4, #32]!	; fField32
        1fb1e0:	e1a02101 	mov	r2, r1, lsl #2
        1fb1e4:	e1a01006 	mov	r1, r6
        1fb1e8:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        1fb1ec:	ea678f58 	b	1bdef54 <$BlockMove>
        1fb1f0:	e1a01005 	mov	r1, r5
        1fb1f4:	e1a00004 	mov	r0, r4
        1fb1f8:	e3a02000 	mov	r2, #0	; 0x0
        1fb1fc:	eb63ddcd 	bl	1af2938 <TStoreDriver::$AddressOf(unsigned long, unsigned char *)>
        1fb200:	e1a05000 	mov	r5, r0
        1fb204:	e1a01006 	mov	r1, r6
        1fb208:	e1a00004 	mov	r0, r4
        1fb20c:	e3a02000 	mov	r2, #0	; 0x0
        1fb210:	eb63ddc8 	bl	1af2938 <TStoreDriver::$AddressOf(unsigned long, unsigned char *)>
        1fb214:	e1a01000 	mov	r1, r0
        1fb218:	e3a00000 	mov	r0, #0	; 0x0
        1fb21c:	e5942020 	ldr	r2, [r4, #32]	; fField32
        1fb220:	e3520000 	cmp	r2, #0	; 0x0
        1fb224:	991ba870 	ldmlsdb	fp, {r4, r5, r6, fp, sp, pc}
        1fb228:	e7d52100 	ldrb	r2, [r5, r0, lsl #2]	; fField2
        1fb22c:	e7c12100 	strb	r2, [r1, r0, lsl #2]	; fField2
        1fb230:	e2800001 	add	r0, r0, #1	; 0x1
        1fb234:	e5942020 	ldr	r2, [r4, #32]	; fField32
        1fb238:	e1520000 	cmp	r2, r0
        1fb23c:	8afffff9 	bhi	1fb228 <TStoreDriver::DoPersistentCopy(unsigned long, unsigned long)+0x1ac>
        1fb240:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TStoreDriver::Copy(unsigned long, unsigned long, unsigned long)
 * Address: 001fb244
 */
TStoreDriver::Copy(unsigned long, unsigned long, unsigned long) {
    /*
        1fb244:	e1a0c00d 	mov	ip, sp
        1fb248:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1fb24c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1fb250:	e1a07000 	mov	r7, r0
        1fb254:	e1a06001 	mov	r6, r1
        1fb258:	e1a05002 	mov	r5, r2
        1fb25c:	e1a04003 	mov	r4, r3
        1fb260:	e24dd008 	sub	sp, sp, #8	; 0x8
        1fb264:	e28d2004 	add	r2, sp, #4	; 0x4
        1fb268:	eb63ddb2 	bl	1af2938 <TStoreDriver::$AddressOf(unsigned long, unsigned char *)>
        1fb26c:	e1a08000 	mov	r8, r0
        1fb270:	e1a0200d 	mov	r2, sp
        1fb274:	e1a01005 	mov	r1, r5
        1fb278:	e1a00007 	mov	r0, r7
        1fb27c:	eb63ddad 	bl	1af2938 <TStoreDriver::$AddressOf(unsigned long, unsigned char *)>
        1fb280:	e1560005 	cmp	r6, r5
        1fb284:	90451006 	subls	r1, r5, r6
        1fb288:	80461005 	subhi	r1, r6, r5
        1fb28c:	e1510004 	cmp	r1, r4
        1fb290:	2a000027 	bcs	1fb334 <TStoreDriver::Copy(unsigned long, unsigned long, unsigned long)+0xf0>
        1fb294:	e1560005 	cmp	r6, r5
        1fb298:	e5dd1004 	ldrb	r1, [sp, #4]
        1fb29c:	2a000011 	bcs	1fb2e8 <TStoreDriver::Copy(unsigned long, unsigned long, unsigned long)+0xa4>
        1fb2a0:	e2442001 	sub	r2, r4, #1	; 0x1
        1fb2a4:	e3310000 	teq	r1, #0	; 0x0
        1fb2a8:	e1a01002 	mov	r1, r2
        1fb2ac:	1a000006 	bne	1fb2cc <TStoreDriver::Copy(unsigned long, unsigned long, unsigned long)+0x88>
        1fb2b0:	e3510000 	cmp	r1, #0	; 0x0
        1fb2b4:	ba000045 	blt	1fb3d0 <TStoreDriver::Copy(unsigned long, unsigned long, unsigned long)+0x18c>
        1fb2b8:	e7d82101 	ldrb	r2, [r8, r1, lsl #2]	; fField2
        1fb2bc:	e7c02101 	strb	r2, [r0, r1, lsl #2]	; fField2
        1fb2c0:	e2511001 	subs	r1, r1, #1	; 0x1
        1fb2c4:	5afffffb 	bpl	1fb2b8 <TStoreDriver::Copy(unsigned long, unsigned long, unsigned long)+0x74>
        1fb2c8:	ea000040 	b	1fb3d0 <TStoreDriver::Copy(unsigned long, unsigned long, unsigned long)+0x18c>
        1fb2cc:	e3510000 	cmp	r1, #0	; 0x0
        1fb2d0:	ba00003e 	blt	1fb3d0 <TStoreDriver::Copy(unsigned long, unsigned long, unsigned long)+0x18c>
        1fb2d4:	e7d82001 	ldrb	r2, [r8, r1]
        1fb2d8:	e7c02001 	strb	r2, [r0, r1]
        1fb2dc:	e2511001 	subs	r1, r1, #1	; 0x1
        1fb2e0:	5afffffb 	bpl	1fb2d4 <TStoreDriver::Copy(unsigned long, unsigned long, unsigned long)+0x90>
        1fb2e4:	ea000039 	b	1fb3d0 <TStoreDriver::Copy(unsigned long, unsigned long, unsigned long)+0x18c>
        1fb2e8:	e3310000 	teq	r1, #0	; 0x0
        1fb2ec:	e3a01000 	mov	r1, #0	; 0x0
        1fb2f0:	1a000007 	bne	1fb314 <TStoreDriver::Copy(unsigned long, unsigned long, unsigned long)+0xd0>
        1fb2f4:	e3540000 	cmp	r4, #0	; 0x0
        1fb2f8:	da000034 	ble	1fb3d0 <TStoreDriver::Copy(unsigned long, unsigned long, unsigned long)+0x18c>
        1fb2fc:	e7d82101 	ldrb	r2, [r8, r1, lsl #2]	; fField2
        1fb300:	e7c02101 	strb	r2, [r0, r1, lsl #2]	; fField2
        1fb304:	e2811001 	add	r1, r1, #1	; 0x1
        1fb308:	e1510004 	cmp	r1, r4
        1fb30c:	bafffffa 	blt	1fb2fc <TStoreDriver::Copy(unsigned long, unsigned long, unsigned long)+0xb8>
        1fb310:	ea00002e 	b	1fb3d0 <TStoreDriver::Copy(unsigned long, unsigned long, unsigned long)+0x18c>
        1fb314:	e3540000 	cmp	r4, #0	; 0x0
        1fb318:	da00002c 	ble	1fb3d0 <TStoreDriver::Copy(unsigned long, unsigned long, unsigned long)+0x18c>
        1fb31c:	e7d82001 	ldrb	r2, [r8, r1]
        1fb320:	e7c02001 	strb	r2, [r0, r1]
        1fb324:	e2811001 	add	r1, r1, #1	; 0x1
        1fb328:	e1510004 	cmp	r1, r4
        1fb32c:	bafffffa 	blt	1fb31c <TStoreDriver::Copy(unsigned long, unsigned long, unsigned long)+0xd8>
        1fb330:	ea000026 	b	1fb3d0 <TStoreDriver::Copy(unsigned long, unsigned long, unsigned long)+0x18c>
        1fb334:	e5dd2004 	ldrb	r2, [sp, #4]
        1fb338:	e5dd1000 	ldrb	r1, [sp]
        1fb33c:	e1320001 	teq	r2, r1
        1fb340:	e5dd1004 	ldrb	r1, [sp, #4]
        1fb344:	1a00000f 	bne	1fb388 <TStoreDriver::Copy(unsigned long, unsigned long, unsigned long)+0x144>
        1fb348:	e3310000 	teq	r1, #0	; 0x0
        1fb34c:	1a000008 	bne	1fb374 <TStoreDriver::Copy(unsigned long, unsigned long, unsigned long)+0x130>
        1fb350:	e3a01000 	mov	r1, #0	; 0x0
        1fb354:	e3540000 	cmp	r4, #0	; 0x0
        1fb358:	9a00001c 	bls	1fb3d0 <TStoreDriver::Copy(unsigned long, unsigned long, unsigned long)+0x18c>
        1fb35c:	e7d82101 	ldrb	r2, [r8, r1, lsl #2]	; fField2
        1fb360:	e7c02101 	strb	r2, [r0, r1, lsl #2]	; fField2
        1fb364:	e2811001 	add	r1, r1, #1	; 0x1
        1fb368:	e1510004 	cmp	r1, r4
        1fb36c:	3afffffa 	bcc	1fb35c <TStoreDriver::Copy(unsigned long, unsigned long, unsigned long)+0x118>
        1fb370:	ea000016 	b	1fb3d0 <TStoreDriver::Copy(unsigned long, unsigned long, unsigned long)+0x18c>
        1fb374:	e1a02004 	mov	r2, r4
        1fb378:	e1a01000 	mov	r1, r0
        1fb37c:	e1a00008 	mov	r0, r8
        1fb380:	eb678ef3 	bl	1bdef54 <$BlockMove>
        1fb384:	ea000011 	b	1fb3d0 <TStoreDriver::Copy(unsigned long, unsigned long, unsigned long)+0x18c>
        1fb388:	e3310000 	teq	r1, #0	; 0x0
        1fb38c:	e3a01000 	mov	r1, #0	; 0x0
        1fb390:	1a000007 	bne	1fb3b4 <TStoreDriver::Copy(unsigned long, unsigned long, unsigned long)+0x170>
        1fb394:	e3540000 	cmp	r4, #0	; 0x0
        1fb398:	da00000c 	ble	1fb3d0 <TStoreDriver::Copy(unsigned long, unsigned long, unsigned long)+0x18c>
        1fb39c:	e7d82101 	ldrb	r2, [r8, r1, lsl #2]	; fField2
        1fb3a0:	e7c02001 	strb	r2, [r0, r1]
        1fb3a4:	e2811001 	add	r1, r1, #1	; 0x1
        1fb3a8:	e1510004 	cmp	r1, r4
        1fb3ac:	bafffffa 	blt	1fb39c <TStoreDriver::Copy(unsigned long, unsigned long, unsigned long)+0x158>
        1fb3b0:	ea000006 	b	1fb3d0 <TStoreDriver::Copy(unsigned long, unsigned long, unsigned long)+0x18c>
        1fb3b4:	e3540000 	cmp	r4, #0	; 0x0
        1fb3b8:	da000004 	ble	1fb3d0 <TStoreDriver::Copy(unsigned long, unsigned long, unsigned long)+0x18c>
        1fb3bc:	e7d82001 	ldrb	r2, [r8, r1]
        1fb3c0:	e7c02101 	strb	r2, [r0, r1, lsl #2]	; fField2
        1fb3c4:	e2811001 	add	r1, r1, #1	; 0x1
        1fb3c8:	e1510004 	cmp	r1, r4
        1fb3cc:	bafffffa 	blt	1fb3bc <TStoreDriver::Copy(unsigned long, unsigned long, unsigned long)+0x178>
        1fb3d0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TStoreDriver::Set(unsigned long, unsigned long, unsigned long)
 * Address: 001fb3d4
 */
TStoreDriver::Set(unsigned long, unsigned long, unsigned long) {
    /*
        1fb3d4:	e1a0c00d 	mov	ip, sp
        1fb3d8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1fb3dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1fb3e0:	e1a04002 	mov	r4, r2
        1fb3e4:	e1a05003 	mov	r5, r3
        1fb3e8:	e24dd004 	sub	sp, sp, #4	; 0x4
        1fb3ec:	e1a0200d 	mov	r2, sp
        1fb3f0:	eb63dd50 	bl	1af2938 <TStoreDriver::$AddressOf(unsigned long, unsigned char *)>
        1fb3f4:	e5dd1000 	ldrb	r1, [sp]
        1fb3f8:	e20520ff 	and	r2, r5, #255	; 0xff
        1fb3fc:	e3310000 	teq	r1, #0	; 0x0
        1fb400:	0a000002 	beq	1fb410 <TStoreDriver::Set(unsigned long, unsigned long, unsigned long)+0x3c>
        1fb404:	e1a01004 	mov	r1, r4
        1fb408:	eb678ed7 	bl	1bdef6c <$FillBytes>
        1fb40c:	ea000006 	b	1fb42c <TStoreDriver::Set(unsigned long, unsigned long, unsigned long)+0x58>
        1fb410:	e3a01000 	mov	r1, #0	; 0x0
        1fb414:	e3540000 	cmp	r4, #0	; 0x0
        1fb418:	da000003 	ble	1fb42c <TStoreDriver::Set(unsigned long, unsigned long, unsigned long)+0x58>
        1fb41c:	e7c02101 	strb	r2, [r0, r1, lsl #2]	; fField2
        1fb420:	e2811001 	add	r1, r1, #1	; 0x1
        1fb424:	e1510004 	cmp	r1, r4
        1fb428:	bafffffb 	blt	1fb41c <TStoreDriver::Set(unsigned long, unsigned long, unsigned long)+0x48>
        1fb42c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TStoreDriver::Read(char *, unsigned long, unsigned long)
 * Address: 001fb430
 */
TStoreDriver::Read(char *, unsigned long, unsigned long) {
    /*
        1fb430:	e1a0c00d 	mov	ip, sp
        1fb434:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1fb438:	e24cb004 	sub	fp, ip, #4	; 0x4
        1fb43c:	e1a05001 	mov	r5, r1
        1fb440:	e1a01002 	mov	r1, r2
        1fb444:	e1a04003 	mov	r4, r3
        1fb448:	e24dd004 	sub	sp, sp, #4	; 0x4
        1fb44c:	e1a0200d 	mov	r2, sp
        1fb450:	eb63dd38 	bl	1af2938 <TStoreDriver::$AddressOf(unsigned long, unsigned char *)>
        1fb454:	e1a03000 	mov	r3, r0
        1fb458:	e5dd0000 	ldrb	r0, [sp]
        1fb45c:	e3300000 	teq	r0, #0	; 0x0
        1fb460:	0a000004 	beq	1fb478 <TStoreDriver::Read(char *, unsigned long, unsigned long)+0x48>
        1fb464:	e1a02004 	mov	r2, r4
        1fb468:	e1a01005 	mov	r1, r5
        1fb46c:	e1a00003 	mov	r0, r3
        1fb470:	eb678eb7 	bl	1bdef54 <$BlockMove>
        1fb474:	ea000007 	b	1fb498 <TStoreDriver::Read(char *, unsigned long, unsigned long)+0x68>
        1fb478:	e3a00000 	mov	r0, #0	; 0x0
        1fb47c:	e3540000 	cmp	r4, #0	; 0x0
        1fb480:	da000004 	ble	1fb498 <TStoreDriver::Read(char *, unsigned long, unsigned long)+0x68>
        1fb484:	e7d31100 	ldrb	r1, [r3, r0, lsl #2]	; fField2
        1fb488:	e7c51000 	strb	r1, [r5, r0]
        1fb48c:	e2800001 	add	r0, r0, #1	; 0x1
        1fb490:	e1500004 	cmp	r0, r4
        1fb494:	bafffffa 	blt	1fb484 <TStoreDriver::Read(char *, unsigned long, unsigned long)+0x54>
        1fb498:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TStoreDriver::Write(char *, unsigned long, unsigned long)
 * Address: 001fb49c
 */
TStoreDriver::Write(char *, unsigned long, unsigned long) {
    /*
        1fb49c:	e1a0c00d 	mov	ip, sp
        1fb4a0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1fb4a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1fb4a8:	e1a05001 	mov	r5, r1
        1fb4ac:	e1a01002 	mov	r1, r2
        1fb4b0:	e1a04003 	mov	r4, r3
        1fb4b4:	e24dd004 	sub	sp, sp, #4	; 0x4
        1fb4b8:	e1a0200d 	mov	r2, sp
        1fb4bc:	eb63dd1d 	bl	1af2938 <TStoreDriver::$AddressOf(unsigned long, unsigned char *)>
        1fb4c0:	e1a01000 	mov	r1, r0
        1fb4c4:	e5dd0000 	ldrb	r0, [sp]
        1fb4c8:	e3300000 	teq	r0, #0	; 0x0
        1fb4cc:	0a000003 	beq	1fb4e0 <TStoreDriver::Write(char *, unsigned long, unsigned long)+0x44>
        1fb4d0:	e1a02004 	mov	r2, r4
        1fb4d4:	e1a00005 	mov	r0, r5
        1fb4d8:	eb678e9d 	bl	1bdef54 <$BlockMove>
        1fb4dc:	ea000007 	b	1fb500 <TStoreDriver::Write(char *, unsigned long, unsigned long)+0x64>
        1fb4e0:	e3a00000 	mov	r0, #0	; 0x0
        1fb4e4:	e3540000 	cmp	r4, #0	; 0x0
        1fb4e8:	da000004 	ble	1fb500 <TStoreDriver::Write(char *, unsigned long, unsigned long)+0x64>
        1fb4ec:	e7d52000 	ldrb	r2, [r5, r0]
        1fb4f0:	e7c12100 	strb	r2, [r1, r0, lsl #2]	; fField2
        1fb4f4:	e2800001 	add	r0, r0, #1	; 0x1
        1fb4f8:	e1500004 	cmp	r0, r4
        1fb4fc:	bafffffa 	blt	1fb4ec <TStoreDriver::Write(char *, unsigned long, unsigned long)+0x50>
        1fb500:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

