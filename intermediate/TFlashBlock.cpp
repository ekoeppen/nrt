#include "include/TFlashBlock.h"

/**
 * Symbol: TFlashBlock::Init(TFlashStore *)
 * Address: 000bee88
 */
TFlashBlock::Init(TFlashStore *) {
    /*
         bee88:	e5801000 	str	r1, [r0]
         bee8c:	e3a01000 	mov	r1, #0	; 0x0
         bee90:	e3e02000 	mvn	r2, #0	; 0x0
         bee94:	e9800006 	stmib	r0, {r1, r2}
         bee98:	e580100c 	str	r1, [r0, #12]	; fField12
         bee9c:	e5801010 	str	r1, [r0, #16]	; fField16
         beea0:	e5801014 	str	r1, [r0, #20]	; fField20
         beea4:	e5a01018 	str	r1, [r0, #24]!	; fField24
         beea8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashBlock::SetInfo(SFlashBlockLogEntry *, unsigned char *)
 * Address: 000beeac
 */
TFlashBlock::SetInfo(SFlashBlockLogEntry *, unsigned char *) {
    /*
         beeac:	e1a0c00d 	mov	ip, sp
         beeb0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         beeb4:	e24cb004 	sub	fp, ip, #4	; 0x4
         beeb8:	e1a04000 	mov	r4, r0
         beebc:	e1a06001 	mov	r6, r1
         beec0:	e1a05002 	mov	r5, r2
         beec4:	e5910028 	ldr	r0, [r1, #40]
         beec8:	e5840004 	str	r0, [r4, #4]	; fField4
         beecc:	e5911018 	ldr	r1, [r1, #24]	; fField24
         beed0:	e5841008 	str	r1, [r4, #8]	; fField8
         beed4:	e596103c 	ldr	r1, [r6, #60]
         beed8:	e584100c 	str	r1, [r4, #12]	; fField12
         beedc:	e5961028 	ldr	r1, [r6, #40]
         beee0:	e2811004 	add	r1, r1, #4	; 0x4
         beee4:	e5841010 	str	r1, [r4, #16]	; fField16
         beee8:	e3a01000 	mov	r1, #0	; 0x0
         beeec:	e5841014 	str	r1, [r4, #20]	; fField20
         beef0:	e2862034 	add	r2, r6, #52	; 0x34
         beef4:	e8920006 	ldmia	r2, {r1, r2}
         beef8:	e0221001 	eor	r1, r2, r1
         beefc:	e584101c 	str	r1, [r4, #28]	; fField28
         bef00:	e5941018 	ldr	r1, [r4, #24]	; fField24
         bef04:	e3310000 	teq	r1, #0	; 0x0
         bef08:	1a000006 	bne	bef28 <TFlashBlock::SetInfo(SFlashBlockLogEntry *, unsigned char *)+0x7c>
         bef0c:	e5941000 	ldr	r1, [r4]
         bef10:	e5912058 	ldr	r2, [r1, #88]	; fField88
         bef14:	e1a00230 	mov	r0, r0, lsr r2
         bef18:	e5911060 	ldr	r1, [r1, #96]
         bef1c:	e1a00110 	mov	r0, r0, lsl r1
         bef20:	e2800031 	add	r0, r0, #49	; 0x31
         bef24:	e5840018 	str	r0, [r4, #24]	; fField24
         bef28:	e1a00004 	mov	r0, r4
         bef2c:	eb69085d 	bl	1b010a8 <TFlashBlock::$PhysBlock(void)>
         bef30:	e1a01006 	mov	r1, r6
         bef34:	eb691cf4 	bl	1b0630c <TFlashPhysBlock::$SetInfo(SFlashBlockLogEntry *)>
         bef38:	e24dd004 	sub	sp, sp, #4	; 0x4
         bef3c:	e5940004 	ldr	r0, [r4, #4]	; fField4
         bef40:	e3a08003 	mov	r8, #3	; 0x3
         bef44:	e3a07002 	mov	r7, #2	; 0x2
         bef48:	e3a06001 	mov	r6, #1	; 0x1
         bef4c:	e58d0000 	str	r0, [sp]
         bef50:	e24dd008 	sub	sp, sp, #8	; 0x8
         bef54:	e28d2008 	add	r2, sp, #8	; 0x8
         bef58:	e1a00004 	mov	r0, r4
         bef5c:	e3a03001 	mov	r3, #1	; 0x1
         bef60:	e59d1008 	ldr	r1, [sp, #8]	; fField8
         bef64:	eb690430 	bl	1b0002c <TFlashBlock::$NextObject(unsigned long, unsigned long *, unsigned char)>
         bef68:	e3300000 	teq	r0, #0	; 0x0
         bef6c:	0a000003 	beq	bef80 <TFlashBlock::SetInfo(SFlashBlockLogEntry *, unsigned char *)+0xd4>
         bef70:	e280cda5 	add	ip, r0, #10560	; 0x2940
         bef74:	e37c0032 	cmn	ip, #50	; 0x32
         bef78:	03a00000 	moveq	r0, #0	; 0x0
         bef7c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         bef80:	e1a0200d 	mov	r2, sp
         bef84:	e1a00004 	mov	r0, r4
         bef88:	e59d1008 	ldr	r1, [sp, #8]	; fField8
         bef8c:	eb690c70 	bl	1b02154 <TFlashBlock::$ReadObjectAt(unsigned long, SObject *)>
         bef90:	e3300000 	teq	r0, #0	; 0x0
         bef94:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         bef98:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         bef9c:	e0880820 	add	r0, r8, r0, lsr #16
         befa0:	e3c00003 	bic	r0, r0, #3	; 0x3
         befa4:	e2800008 	add	r0, r0, #8	; 0x8
         befa8:	e59d1008 	ldr	r1, [sp, #8]	; fField8
         befac:	e0800001 	add	r0, r0, r1
         befb0:	e5840010 	str	r0, [r4, #16]	; fField16
         befb4:	e5941000 	ldr	r1, [r4]
         befb8:	e59d0000 	ldr	r0, [sp]
         befbc:	e1a00080 	mov	r0, r0, lsl #1
         befc0:	e5911048 	ldr	r1, [r1, #72]
         befc4:	e2011001 	and	r1, r1, #1	; 0x1
         befc8:	e1310fa0 	teq	r1, r0, lsr #31
         befcc:	1a000007 	bne	beff0 <TFlashBlock::SetInfo(SFlashBlockLogEntry *, unsigned char *)+0x144>
         befd0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         befd4:	e0880820 	add	r0, r8, r0, lsr #16
         befd8:	e3c00003 	bic	r0, r0, #3	; 0x3
         befdc:	e2800008 	add	r0, r0, #8	; 0x8
         befe0:	e5941014 	ldr	r1, [r4, #20]	; fField20
         befe4:	e0800001 	add	r0, r0, r1
         befe8:	e5840014 	str	r0, [r4, #20]	; fField20
         befec:	ea000005 	b	bf008 <TFlashBlock::SetInfo(SFlashBlockLogEntry *, unsigned char *)+0x15c>
         beff0:	e3350000 	teq	r5, #0	; 0x0
         beff4:	0a000003 	beq	bf008 <TFlashBlock::SetInfo(SFlashBlockLogEntry *, unsigned char *)+0x15c>
         beff8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         beffc:	e1a00e80 	mov	r0, r0, lsl #29
         bf000:	e1370f20 	teq	r7, r0, lsr #30
         bf004:	05c56000 	streqb	r6, [r5]
         bf008:	e59d0000 	ldr	r0, [sp]
         bf00c:	e3c0020f 	bic	r0, r0, #-268435456	; 0xf0000000
         bf010:	e3500031 	cmp	r0, #49	; 0x31
         bf014:	3a000008 	bcc	bf03c <TFlashBlock::SetInfo(SFlashBlockLogEntry *, unsigned char *)+0x190>
         bf018:	e5941000 	ldr	r1, [r4]
         bf01c:	e591c02c 	ldr	ip, [r1, #44]
         bf020:	e5911060 	ldr	r1, [r1, #96]
         bf024:	e1a01130 	mov	r1, r0, lsr r1
         bf028:	e79c1101 	ldr	r1, [ip, r1, lsl #2]
         bf02c:	e5912018 	ldr	r2, [r1, #24]	; fField24
         bf030:	e1500002 	cmp	r0, r2
         bf034:	22800001 	addcs	r0, r0, #1	; 0x1
         bf038:	25a10018 	strcs	r0, [r1, #24]!	; fField24
         bf03c:	e28dd008 	add	sp, sp, #8	; 0x8
         bf040:	eaffffc2 	b	bef50 <TFlashBlock::SetInfo(SFlashBlockLogEntry *, unsigned char *)+0xa4>
    */
}

/**
 * Symbol: TFlashBlock::Lookup(unsigned long, int, TObjRef &, long *)
 * Address: 000bf044
 */
TFlashBlock::Lookup(unsigned long, int, TObjRef &, long *) {
    /*
         bf044:	e1a0c00d 	mov	ip, sp
         bf048:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         bf04c:	e24cb004 	sub	fp, ip, #4	; 0x4
         bf050:	e1a04000 	mov	r4, r0
         bf054:	e1a05001 	mov	r5, r1
         bf058:	e1a07002 	mov	r7, r2
         bf05c:	e1a06003 	mov	r6, r3
         bf060:	e59b8004 	ldr	r8, [fp, #4]	; fField4
         bf064:	eb6a290b 	bl	1b49498 <TFlashBlock::$IsReserved(void)>
         bf068:	e3300000 	teq	r0, #0	; 0x0
         bf06c:	0a000005 	beq	bf088 <TFlashBlock::Lookup(unsigned long, int, TObjRef &, long *)+0x44>
         bf070:	e3380000 	teq	r8, #0	; 0x0
         bf074:	13e00000 	mvnne	r0, #0	; 0x0
         bf078:	15880000 	strne	r0, [r8]
         bf07c:	e3a00092 	mov	r0, #146	; 0x92
         bf080:	e2400c2a 	sub	r0, r0, #10752	; 0x2a00
         bf084:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         bf088:	e24dd078 	sub	sp, sp, #120	; 0x78
         bf08c:	e3a03002 	mov	r3, #2	; 0x2
         bf090:	e92d0008 	stmdb	sp!, {r3}
         bf094:	e1a01005 	mov	r1, r5
         bf098:	e1a00004 	mov	r0, r4
         bf09c:	eb69146f 	bl	1b04260 <TFlashBlock::$RootDirEnt(unsigned long)>
         bf0a0:	e1a03000 	mov	r3, r0
         bf0a4:	e1a02006 	mov	r2, r6
         bf0a8:	e28d0004 	add	r0, sp, #4	; 0x4
         bf0ac:	e5941000 	ldr	r1, [r4]
         bf0b0:	eb000929 	bl	c155c <TFlashIterator::__ct(TFlashStore *, TObjRef *, unsigned long, IterFilterType)>
         bf0b4:	e28dd004 	add	sp, sp, #4	; 0x4
         bf0b8:	e1a03008 	mov	r3, r8
         bf0bc:	e1a02007 	mov	r2, r7
         bf0c0:	e1a01005 	mov	r1, r5
         bf0c4:	e1a0000d 	mov	r0, sp
         bf0c8:	eb692d20 	bl	1b0a550 <TFlashIterator::$Lookup(unsigned long, int, long *)>
         bf0cc:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashBlock::AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)
 * Address: 000bf0d0
 */
TFlashBlock::AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char) {
    /*
         bf0d0:	e1a0c00d 	mov	ip, sp
         bf0d4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         bf0d8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         bf0dc:	e24cb014 	sub	fp, ip, #20	; 0x14
         bf0e0:	e1a04000 	mov	r4, r0
         bf0e4:	e1a05001 	mov	r5, r1
         bf0e8:	e59b1018 	ldr	r1, [fp, #24]	; fField24
         bf0ec:	e20110ff 	and	r1, r1, #255	; 0xff
         bf0f0:	e59b001c 	ldr	r0, [fp, #28]	; fField28
         bf0f4:	e59b8014 	ldr	r8, [fp, #20]	; fField20
         bf0f8:	e20090ff 	and	r9, r0, #255	; 0xff
         bf0fc:	e1a00004 	mov	r0, r4
         bf100:	e52d1010 	str	r1, [sp, -#16]!	; fField16
         bf104:	eb6a28e3 	bl	1b49498 <TFlashBlock::$IsReserved(void)>
         bf108:	e3300000 	teq	r0, #0	; 0x0
         bf10c:	13a00091 	movne	r0, #145	; 0x91
         bf110:	12400c2a 	subne	r0, r0, #10752	; 0x2a00
         bf114:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         bf118:	e24dd008 	sub	sp, sp, #8	; 0x8
         bf11c:	e3e00000 	mvn	r0, #0	; 0x0
         bf120:	e3550011 	cmp	r5, #17	; 0x11
         bf124:	e58d0004 	str	r0, [sp, #4]	; fField4
         bf128:	3a000009 	bcc	bf154 <TFlashBlock::AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)+0x84>
         bf12c:	e3a03000 	mov	r3, #0	; 0x0
         bf130:	e92d0008 	stmdb	sp!, {r3}
         bf134:	e28d3008 	add	r3, sp, #8	; 0x8
         bf138:	e1a01005 	mov	r1, r5
         bf13c:	e1a00004 	mov	r0, r4
         bf140:	e3e02000 	mvn	r2, #0	; 0x0
         bf144:	eb68c9e9 	bl	1af18f0 <TFlashBlock::$AddDirEnt(unsigned long, unsigned long, unsigned long *, SDirEnt *)>
         bf148:	e28dd004 	add	sp, sp, #4	; 0x4
         bf14c:	e1b0a000 	movs	sl, r0
         bf150:	1a0000b3 	bne	bf424 <TFlashBlock::AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)+0x354>
         bf154:	e59b2010 	ldr	r2, [fp, #16]	; fField16
         bf158:	e2820003 	add	r0, r2, #3	; 0x3
         bf15c:	e3c00003 	bic	r0, r0, #3	; 0x3
         bf160:	e2800008 	add	r0, r0, #8	; 0x8
         bf164:	e3390000 	teq	r9, #0	; 0x0
         bf168:	e58d0000 	str	r0, [sp]
         bf16c:	03a06000 	moveq	r6, #0	; 0x0
         bf170:	0a00000c 	beq	bf1a8 <TFlashBlock::AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)+0xd8>
         bf174:	e59b2010 	ldr	r2, [fp, #16]	; fField16
         bf178:	e1a00a02 	mov	r0, r2, lsl #20
         bf17c:	e1a00a20 	mov	r0, r0, lsr #20
         bf180:	e2800008 	add	r0, r0, #8	; 0x8
         bf184:	e5941010 	ldr	r1, [r4, #16]	; fField16
         bf188:	e0812000 	add	r2, r1, r0
         bf18c:	e2422001 	sub	r2, r2, #1	; 0x1
         bf190:	e2822a01 	add	r2, r2, #4096	; 0x1000
         bf194:	e1a02622 	mov	r2, r2, lsr #12
         bf198:	e0600602 	rsb	r0, r0, r2, lsl #12
         bf19c:	e0400001 	sub	r0, r0, r1
         bf1a0:	e2800003 	add	r0, r0, #3	; 0x3
         bf1a4:	e3c06003 	bic	r6, r0, #3	; 0x3
         bf1a8:	e59d0000 	ldr	r0, [sp]
         bf1ac:	e0801006 	add	r1, r0, r6
         bf1b0:	e58d1014 	str	r1, [sp, #20]	; fField20
         bf1b4:	e59b2010 	ldr	r2, [fp, #16]	; fField16
         bf1b8:	e1a02802 	mov	r2, r2, lsl #16
         bf1bc:	e1a02822 	mov	r2, r2, lsr #16
         bf1c0:	e58d2010 	str	r2, [sp, #16]	; fField16
         bf1c4:	e3c5220f 	bic	r2, r5, #-268435456	; 0xf0000000
         bf1c8:	e2887004 	add	r7, r8, #4	; 0x4
         bf1cc:	e58d200c 	str	r2, [sp, #12]	; fField12
         bf1d0:	e1a00004 	mov	r0, r4
         bf1d4:	eb68d1f2 	bl	1af39a4 <TFlashBlock::$Avail(void)>
         bf1d8:	e59d1014 	ldr	r1, [sp, #20]	; fField20
         bf1dc:	e1500001 	cmp	r0, r1
         bf1e0:	33a00091 	movcc	r0, #145	; 0x91
         bf1e4:	32400c2a 	subcc	r0, r0, #10752	; 0x2a00
         bf1e8:	3a000060 	bcc	bf370 <TFlashBlock::AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)+0x2a0>
         bf1ec:	e3360000 	teq	r6, #0	; 0x0
         bf1f0:	0a00000b 	beq	bf224 <TFlashBlock::AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)+0x154>
         bf1f4:	e5940000 	ldr	r0, [r4]
         bf1f8:	e5941010 	ldr	r1, [r4, #16]	; fField16
         bf1fc:	eb692492 	bl	1b0844c <TFlashStore::$Translate(unsigned long)>
         bf200:	e1a01000 	mov	r1, r0
         bf204:	e1a02006 	mov	r2, r6
         bf208:	e5940000 	ldr	r0, [r4]
         bf20c:	eb692cc5 	bl	1b0a528 <TFlashStore::$Zap(unsigned long, unsigned long)>
         bf210:	e5941010 	ldr	r1, [r4, #16]	; fField16
         bf214:	e0811006 	add	r1, r1, r6
         bf218:	e3300000 	teq	r0, #0	; 0x0
         bf21c:	e5841010 	str	r1, [r4, #16]	; fField16
         bf220:	1a000052 	bne	bf370 <TFlashBlock::AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)+0x2a0>
         bf224:	e5940000 	ldr	r0, [r4]
         bf228:	e590004c 	ldr	r0, [r0, #76]
         bf22c:	e20010ff 	and	r1, r0, #255	; 0xff
         bf230:	e1a00008 	mov	r0, r8
         bf234:	e3a02008 	mov	r2, #8	; 0x8
         bf238:	eb6bd606 	bl	1bb4a58 <$memset>
         bf23c:	e5971000 	ldr	r1, [r7]
         bf240:	e1a01801 	mov	r1, r1, lsl #16
         bf244:	e1a01821 	mov	r1, r1, lsr #16
         bf248:	e59d2010 	ldr	r2, [sp, #16]	; fField16
         bf24c:	e1811802 	orr	r1, r1, r2, lsl #16
         bf250:	e5871000 	str	r1, [r7]
         bf254:	e5941000 	ldr	r1, [r4]
         bf258:	e59b000c 	ldr	r0, [fp, #12]	; fField12
         bf25c:	eb690383 	bl	1b00070 <$ObjectStateToTransBits(int, TFlashStore *)>
         bf260:	e1a01000 	mov	r1, r0
         bf264:	e5972000 	ldr	r2, [r7]
         bf268:	e3c22cff 	bic	r2, r2, #65280	; 0xff00
         bf26c:	e20110ff 	and	r1, r1, #255	; 0xff
         bf270:	e1821401 	orr	r1, r2, r1, lsl #8
         bf274:	e5871000 	str	r1, [r7]
         bf278:	e5981000 	ldr	r1, [r8]
         bf27c:	e201120f 	and	r1, r1, #-268435456	; 0xf0000000
         bf280:	e59d200c 	ldr	r2, [sp, #12]	; fField12
         bf284:	e1811002 	orr	r1, r1, r2
         bf288:	e5881000 	str	r1, [r8]
         bf28c:	e5940000 	ldr	r0, [r4]
         bf290:	e5b01048 	ldr	r1, [r0, #72]!
         bf294:	e5972000 	ldr	r2, [r7]
         bf298:	e3c22001 	bic	r2, r2, #1	; 0x1
         bf29c:	e2011001 	and	r1, r1, #1	; 0x1
         bf2a0:	e1821001 	orr	r1, r2, r1
         bf2a4:	e5871000 	str	r1, [r7]
         bf2a8:	e1a00001 	mov	r0, r1
         bf2ac:	e59d1008 	ldr	r1, [sp, #8]	; fField8
         bf2b0:	e3310000 	teq	r1, #0	; 0x0
         bf2b4:	0a000002 	beq	bf2c4 <TFlashBlock::AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)+0x1f4>
         bf2b8:	e3c00006 	bic	r0, r0, #6	; 0x6
         bf2bc:	e3800004 	orr	r0, r0, #4	; 0x4
         bf2c0:	e5870000 	str	r0, [r7]
         bf2c4:	e3390000 	teq	r9, #0	; 0x0
         bf2c8:	0a000006 	beq	bf2e8 <TFlashBlock::AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)+0x218>
         bf2cc:	e5940000 	ldr	r0, [r4]
         bf2d0:	e5b01048 	ldr	r1, [r0, #72]!
         bf2d4:	e5972000 	ldr	r2, [r7]
         bf2d8:	e3c22080 	bic	r2, r2, #128	; 0x80
         bf2dc:	e2011001 	and	r1, r1, #1	; 0x1
         bf2e0:	e1821381 	orr	r1, r2, r1, lsl #7
         bf2e4:	e5871000 	str	r1, [r7]
         bf2e8:	e3550031 	cmp	r5, #49	; 0x31
         bf2ec:	2a00000c 	bcs	bf324 <TFlashBlock::AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)+0x254>
         bf2f0:	e5940000 	ldr	r0, [r4]
         bf2f4:	e5d0103d 	ldrb	r1, [r0, #61]	; fField61
         bf2f8:	e3310000 	teq	r1, #0	; 0x0
         bf2fc:	0a000008 	beq	bf324 <TFlashBlock::AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)+0x254>
         bf300:	e590a04c 	ldr	sl, [r0, #76]
         bf304:	e5941010 	ldr	r1, [r4, #16]	; fField16
         bf308:	eb69244f 	bl	1b0844c <TFlashStore::$Translate(unsigned long)>
         bf30c:	e2801008 	add	r1, r0, #8	; 0x8
         bf310:	e5940000 	ldr	r0, [r4]
         bf314:	e5900088 	ldr	r0, [r0, #136]
         bf318:	e1a0300a 	mov	r3, sl
         bf31c:	e59b2010 	ldr	r2, [fp, #16]	; fField16
         bf320:	eb6917e9 	bl	1b052cc <TStoreDriver::$Set(unsigned long, unsigned long, unsigned long)>
         bf324:	e1a02008 	mov	r2, r8
         bf328:	e5941010 	ldr	r1, [r4, #16]	; fField16
         bf32c:	e1a00004 	mov	r0, r4
         bf330:	e3a03008 	mov	r3, #8	; 0x8
         bf334:	eb68d1a0 	bl	1af39bc <TFlashBlock::$BasicWrite(unsigned long, void *, unsigned long)>
         bf338:	e1b0a000 	movs	sl, r0
         bf33c:	0a000011 	beq	bf388 <TFlashBlock::AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)+0x2b8>
         bf340:	e5940000 	ldr	r0, [r4]
         bf344:	e5941010 	ldr	r1, [r4, #16]	; fField16
         bf348:	eb69243f 	bl	1b0844c <TFlashStore::$Translate(unsigned long)>
         bf34c:	e1a01000 	mov	r1, r0
         bf350:	e3a02008 	mov	r2, #8	; 0x8
         bf354:	e5940000 	ldr	r0, [r4]
         bf358:	eb692c72 	bl	1b0a528 <TFlashStore::$Zap(unsigned long, unsigned long)>
         bf35c:	e5941010 	ldr	r1, [r4, #16]	; fField16
         bf360:	e2811008 	add	r1, r1, #8	; 0x8
         bf364:	e3300000 	teq	r0, #0	; 0x0
         bf368:	e5841010 	str	r1, [r4, #16]	; fField16
         bf36c:	0a000000 	beq	bf374 <TFlashBlock::AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)+0x2a4>
         bf370:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         bf374:	e3390000 	teq	r9, #0	; 0x0
         bf378:	028acda5 	addeq	ip, sl, #10560	; 0x2940
         bf37c:	037c0031 	cmneq	ip, #49	; 0x31
         bf380:	0affff92 	beq	bf1d0 <TFlashBlock::AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)+0x100>
         bf384:	ea000026 	b	bf424 <TFlashBlock::AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)+0x354>
         bf388:	e5940010 	ldr	r0, [r4, #16]	; fField16
         bf38c:	e1a06000 	mov	r6, r0
         bf390:	e59d1000 	ldr	r1, [sp]
         bf394:	e0800001 	add	r0, r0, r1
         bf398:	e5840010 	str	r0, [r4, #16]	; fField16
         bf39c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         bf3a0:	e3700001 	cmn	r0, #1	; 0x1
         bf3a4:	0a00001a 	beq	bf414 <TFlashBlock::AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)+0x344>
         bf3a8:	e59f7058 	ldr	r7, [pc, #58]	; bf408 <TFlashBlock::AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)+0x338>
         bf3ac:	e2879002 	add	r9, r7, #2	; 0x2
         bf3b0:	e1a02006 	mov	r2, r6
         bf3b4:	e1a00004 	mov	r0, r4
         bf3b8:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         bf3bc:	eb6917ce 	bl	1b052fc <TFlashBlock::$SetDirEntOffset(unsigned long, unsigned long)>
         bf3c0:	e1a0a000 	mov	sl, r0
         bf3c4:	e1300007 	teq	r0, r7
         bf3c8:	1a00000f 	bne	bf40c <TFlashBlock::AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)+0x33c>
         bf3cc:	e3a03000 	mov	r3, #0	; 0x0
         bf3d0:	e92d0008 	stmdb	sp!, {r3}
         bf3d4:	e28d3008 	add	r3, sp, #8	; 0x8
         bf3d8:	e1a01005 	mov	r1, r5
         bf3dc:	e1a00004 	mov	r0, r4
         bf3e0:	e3e02000 	mvn	r2, #0	; 0x0
         bf3e4:	eb68c941 	bl	1af18f0 <TFlashBlock::$AddDirEnt(unsigned long, unsigned long, unsigned long *, SDirEnt *)>
         bf3e8:	e28dd004 	add	sp, sp, #4	; 0x4
         bf3ec:	e1a0a000 	mov	sl, r0
         bf3f0:	e1300009 	teq	r0, r9
         bf3f4:	1affffed 	bne	bf3b0 <TFlashBlock::AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)+0x2e0>
         bf3f8:	e1a01006 	mov	r1, r6
         bf3fc:	e1a00004 	mov	r0, r4
         bf400:	eb692c4b 	bl	1b0a534 <TFlashBlock::$ZapObject(unsigned long)>
         bf404:	ea000006 	b	bf424 <TFlashBlock::AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)+0x354>
         bf408:	ffffd68f 	swinv	0x00ffd68f
         bf40c:	e33a0000 	teq	sl, #0	; 0x0
         bf410:	1a000003 	bne	bf424 <TFlashBlock::AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)+0x354>
         bf414:	e1a01006 	mov	r1, r6
         bf418:	e1a00008 	mov	r0, r8
         bf41c:	e59d2004 	ldr	r2, [sp, #4]	; fField4
         bf420:	eb6917aa 	bl	1b052d0 <TObjRef::$Set(unsigned long, unsigned long)>
         bf424:	e1a0000a 	mov	r0, sl
         bf428:	eaffffd0 	b	bf370 <TFlashBlock::AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)+0x2a0>
    */
}

/**
 * Symbol: TFlashBlock::AddDirEnt(unsigned long, unsigned long, unsigned long *, SDirEnt *)
 * Address: 000bf42c
 */
TFlashBlock::AddDirEnt(unsigned long, unsigned long, unsigned long *, SDirEnt *) {
    /*
         bf42c:	e1a0c00d 	mov	ip, sp
         bf430:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         bf434:	e24cb004 	sub	fp, ip, #4	; 0x4
         bf438:	e1a04000 	mov	r4, r0
         bf43c:	e1a06002 	mov	r6, r2
         bf440:	e1a05003 	mov	r5, r3
         bf444:	e59b8004 	ldr	r8, [fp, #4]	; fField4
         bf448:	e24dd008 	sub	sp, sp, #8	; 0x8
         bf44c:	eb691383 	bl	1b04260 <TFlashBlock::$RootDirEnt(unsigned long)>
         bf450:	e58d0000 	str	r0, [sp]
         bf454:	e1a00126 	mov	r0, r6, lsr #2
         bf458:	e3c094ff 	bic	r9, r0, #-16777216	; 0xff000000
         bf45c:	e59fa104 	ldr	sl, [pc, #104]	; bf568 <TFlashBlock::AddDirEnt(unsigned long, unsigned long, unsigned long *, SDirEnt *)+0x13c>
         bf460:	e59d0000 	ldr	r0, [sp]
         bf464:	e2807004 	add	r7, r0, #4	; 0x4
         bf468:	e1a00004 	mov	r0, r4
         bf46c:	eb68d159 	bl	1af39d8 <TFlashBlock::$BucketSize(void)>
         bf470:	e59d1000 	ldr	r1, [sp]
         bf474:	e0810100 	add	r0, r1, r0, lsl #2
         bf478:	e2400008 	sub	r0, r0, #8	; 0x8
         bf47c:	e1500007 	cmp	r0, r7
         bf480:	9a00005a 	bls	bf5f0 <TFlashBlock::AddDirEnt(unsigned long, unsigned long, unsigned long *, SDirEnt *)+0x1c4>
         bf484:	e28d2004 	add	r2, sp, #4	; 0x4
         bf488:	e1a01007 	mov	r1, r7
         bf48c:	e1a00004 	mov	r0, r4
         bf490:	eb690b2e 	bl	1b02150 <TFlashBlock::$ReadDirEntAt(unsigned long, SDirEnt *)>
         bf494:	e3300000 	teq	r0, #0	; 0x0
         bf498:	1a00008b 	bne	bf6cc <TFlashBlock::AddDirEnt(unsigned long, unsigned long, unsigned long *, SDirEnt *)+0x2a0>
         bf49c:	e5940000 	ldr	r0, [r4]
         bf4a0:	e1a01000 	mov	r1, r0
         bf4a4:	e590004c 	ldr	r0, [r0, #76]
         bf4a8:	e59d2004 	ldr	r2, [sp, #4]	; fField4
         bf4ac:	e1300002 	teq	r0, r2
         bf4b0:	0a000011 	beq	bf4fc <TFlashBlock::AddDirEnt(unsigned long, unsigned long, unsigned long *, SDirEnt *)+0xd0>
         bf4b4:	e5d1003d 	ldrb	r0, [r1, #61]	; fField61
         bf4b8:	e3300000 	teq	r0, #0	; 0x0
         bf4bc:	0a000033 	beq	bf590 <TFlashBlock::AddDirEnt(unsigned long, unsigned long, unsigned long *, SDirEnt *)+0x164>
         bf4c0:	e28d0004 	add	r0, sp, #4	; 0x4
         bf4c4:	eb68fe9c 	bl	1afef3c <SDirEnt::$IsValid(TFlashStore *)>
         bf4c8:	e3300000 	teq	r0, #0	; 0x0
         bf4cc:	0a00000a 	beq	bf4fc <TFlashBlock::AddDirEnt(unsigned long, unsigned long, unsigned long *, SDirEnt *)+0xd0>
         bf4d0:	e5940000 	ldr	r0, [r4]
         bf4d4:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         bf4d8:	e1a01c81 	mov	r1, r1, lsl #25
         bf4dc:	e5900048 	ldr	r0, [r0, #72]
         bf4e0:	e2000001 	and	r0, r0, #1	; 0x1
         bf4e4:	e1300fa1 	teq	r0, r1, lsr #31
         bf4e8:	1a000028 	bne	bf590 <TFlashBlock::AddDirEnt(unsigned long, unsigned long, unsigned long *, SDirEnt *)+0x164>
         bf4ec:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         bf4f0:	e1a01e81 	mov	r1, r1, lsl #29
         bf4f4:	e1300fa1 	teq	r0, r1, lsr #31
         bf4f8:	0a000024 	beq	bf590 <TFlashBlock::AddDirEnt(unsigned long, unsigned long, unsigned long *, SDirEnt *)+0x164>
         bf4fc:	e5940000 	ldr	r0, [r4]
         bf500:	e590004c 	ldr	r0, [r0, #76]
         bf504:	e3760001 	cmn	r6, #1	; 0x1
         bf508:	e58d0004 	str	r0, [sp, #4]	; fField4
         bf50c:	0a000003 	beq	bf520 <TFlashBlock::AddDirEnt(unsigned long, unsigned long, unsigned long *, SDirEnt *)+0xf4>
         bf510:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         bf514:	e20000ff 	and	r0, r0, #255	; 0xff
         bf518:	e1800409 	orr	r0, r0, r9, lsl #8
         bf51c:	e58d0004 	str	r0, [sp, #4]	; fField4
         bf520:	e5940000 	ldr	r0, [r4]
         bf524:	e5900048 	ldr	r0, [r0, #72]
         bf528:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         bf52c:	e3c11008 	bic	r1, r1, #8	; 0x8
         bf530:	e2000001 	and	r0, r0, #1	; 0x1
         bf534:	e1810180 	orr	r0, r1, r0, lsl #3
         bf538:	e58d0004 	str	r0, [sp, #4]	; fField4
         bf53c:	e28d2004 	add	r2, sp, #4	; 0x4
         bf540:	e1a01007 	mov	r1, r7
         bf544:	e1a00004 	mov	r0, r4
         bf548:	e3a03004 	mov	r3, #4	; 0x4
         bf54c:	eb68d11a 	bl	1af39bc <TFlashBlock::$BasicWrite(unsigned long, void *, unsigned long)>
         bf550:	e130000a 	teq	r0, sl
         bf554:	1a000004 	bne	bf56c <TFlashBlock::AddDirEnt(unsigned long, unsigned long, unsigned long *, SDirEnt *)+0x140>
         bf558:	e1a01007 	mov	r1, r7
         bf55c:	e1a00004 	mov	r0, r4
         bf560:	eb692bf1 	bl	1b0a52c <TFlashBlock::$ZapDirEnt(unsigned long)>
         bf564:	ea000019 	b	bf5d0 <TFlashBlock::AddDirEnt(unsigned long, unsigned long, unsigned long *, SDirEnt *)+0x1a4>
         bf568:	ffffd68f 	swinv	0x00ffd68f
         bf56c:	e3300000 	teq	r0, #0	; 0x0
         bf570:	1a000055 	bne	bf6cc <TFlashBlock::AddDirEnt(unsigned long, unsigned long, unsigned long *, SDirEnt *)+0x2a0>
         bf574:	e3350000 	teq	r5, #0	; 0x0
         bf578:	15857000 	strne	r7, [r5]
         bf57c:	e3380000 	teq	r8, #0	; 0x0
         bf580:	159d0004 	ldrne	r0, [sp, #4]	; fField4
         bf584:	15880000 	strne	r0, [r8]
         bf588:	e3a00000 	mov	r0, #0	; 0x0
         bf58c:	ea00004e 	b	bf6cc <TFlashBlock::AddDirEnt(unsigned long, unsigned long, unsigned long *, SDirEnt *)+0x2a0>
         bf590:	e28d0004 	add	r0, sp, #4	; 0x4
         bf594:	e5941000 	ldr	r1, [r4]
         bf598:	eb68fe67 	bl	1afef3c <SDirEnt::$IsValid(TFlashStore *)>
         bf59c:	e3300000 	teq	r0, #0	; 0x0
         bf5a0:	0a00000a 	beq	bf5d0 <TFlashBlock::AddDirEnt(unsigned long, unsigned long, unsigned long *, SDirEnt *)+0x1a4>
         bf5a4:	e5940000 	ldr	r0, [r4]
         bf5a8:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         bf5ac:	e1a01c81 	mov	r1, r1, lsl #25
         bf5b0:	e5900048 	ldr	r0, [r0, #72]
         bf5b4:	e2000001 	and	r0, r0, #1	; 0x1
         bf5b8:	e1300fa1 	teq	r0, r1, lsr #31
         bf5bc:	0a000003 	beq	bf5d0 <TFlashBlock::AddDirEnt(unsigned long, unsigned long, unsigned long *, SDirEnt *)+0x1a4>
         bf5c0:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         bf5c4:	e1a01c01 	mov	r1, r1, lsl #24
         bf5c8:	e1300fa1 	teq	r0, r1, lsr #31
         bf5cc:	0a000028 	beq	bf674 <TFlashBlock::AddDirEnt(unsigned long, unsigned long, unsigned long *, SDirEnt *)+0x248>
         bf5d0:	e2877004 	add	r7, r7, #4	; 0x4
         bf5d4:	e1a00004 	mov	r0, r4
         bf5d8:	eb68d0fe 	bl	1af39d8 <TFlashBlock::$BucketSize(void)>
         bf5dc:	e59d1000 	ldr	r1, [sp]
         bf5e0:	e0810100 	add	r0, r1, r0, lsl #2
         bf5e4:	e2400008 	sub	r0, r0, #8	; 0x8
         bf5e8:	e1500007 	cmp	r0, r7
         bf5ec:	8affffa4 	bhi	bf484 <TFlashBlock::AddDirEnt(unsigned long, unsigned long, unsigned long *, SDirEnt *)+0x58>
         bf5f0:	e1a00004 	mov	r0, r4
         bf5f4:	eb68d0f7 	bl	1af39d8 <TFlashBlock::$BucketSize(void)>
         bf5f8:	e59d1000 	ldr	r1, [sp]
         bf5fc:	e0810100 	add	r0, r1, r0, lsl #2
         bf600:	e2407008 	sub	r7, r0, #8	; 0x8
         bf604:	e1a00004 	mov	r0, r4
         bf608:	eb68d0f2 	bl	1af39d8 <TFlashBlock::$BucketSize(void)>
         bf60c:	e59d1000 	ldr	r1, [sp]
         bf610:	e0810100 	add	r0, r1, r0, lsl #2
         bf614:	e1500007 	cmp	r0, r7
         bf618:	9a000021 	bls	bf6a4 <TFlashBlock::AddDirEnt(unsigned long, unsigned long, unsigned long *, SDirEnt *)+0x278>
         bf61c:	e28d2004 	add	r2, sp, #4	; 0x4
         bf620:	e1a01007 	mov	r1, r7
         bf624:	e1a00004 	mov	r0, r4
         bf628:	eb690ac8 	bl	1b02150 <TFlashBlock::$ReadDirEntAt(unsigned long, SDirEnt *)>
         bf62c:	e3300000 	teq	r0, #0	; 0x0
         bf630:	1a000025 	bne	bf6cc <TFlashBlock::AddDirEnt(unsigned long, unsigned long, unsigned long *, SDirEnt *)+0x2a0>
         bf634:	e28d0004 	add	r0, sp, #4	; 0x4
         bf638:	e5941000 	ldr	r1, [r4]
         bf63c:	eb68fe3e 	bl	1afef3c <SDirEnt::$IsValid(TFlashStore *)>
         bf640:	e3300000 	teq	r0, #0	; 0x0
         bf644:	0a00000f 	beq	bf688 <TFlashBlock::AddDirEnt(unsigned long, unsigned long, unsigned long *, SDirEnt *)+0x25c>
         bf648:	e5940000 	ldr	r0, [r4]
         bf64c:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         bf650:	e1a01c81 	mov	r1, r1, lsl #25
         bf654:	e5900048 	ldr	r0, [r0, #72]
         bf658:	e2000001 	and	r0, r0, #1	; 0x1
         bf65c:	e1300fa1 	teq	r0, r1, lsr #31
         bf660:	0a000008 	beq	bf688 <TFlashBlock::AddDirEnt(unsigned long, unsigned long, unsigned long *, SDirEnt *)+0x25c>
         bf664:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         bf668:	e1a01c01 	mov	r1, r1, lsl #24
         bf66c:	e1300fa1 	teq	r0, r1, lsr #31
         bf670:	1a000004 	bne	bf688 <TFlashBlock::AddDirEnt(unsigned long, unsigned long, unsigned long *, SDirEnt *)+0x25c>
         bf674:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         bf678:	e1a00420 	mov	r0, r0, lsr #8
         bf67c:	e1a00100 	mov	r0, r0, lsl #2
         bf680:	e58d0000 	str	r0, [sp]
         bf684:	eaffff75 	b	bf460 <TFlashBlock::AddDirEnt(unsigned long, unsigned long, unsigned long *, SDirEnt *)+0x34>
         bf688:	e2877004 	add	r7, r7, #4	; 0x4
         bf68c:	e1a00004 	mov	r0, r4
         bf690:	eb68d0d0 	bl	1af39d8 <TFlashBlock::$BucketSize(void)>
         bf694:	e59d1000 	ldr	r1, [sp]
         bf698:	e0810100 	add	r0, r1, r0, lsl #2
         bf69c:	e1500007 	cmp	r0, r7
         bf6a0:	8affffdd 	bhi	bf61c <TFlashBlock::AddDirEnt(unsigned long, unsigned long, unsigned long *, SDirEnt *)+0x1f0>
         bf6a4:	e1a00004 	mov	r0, r4
         bf6a8:	eb68d0ca 	bl	1af39d8 <TFlashBlock::$BucketSize(void)>
         bf6ac:	e59d1000 	ldr	r1, [sp]
         bf6b0:	e0810100 	add	r0, r1, r0, lsl #2
         bf6b4:	e2401008 	sub	r1, r0, #8	; 0x8
         bf6b8:	e1a0200d 	mov	r2, sp
         bf6bc:	e1a00004 	mov	r0, r4
         bf6c0:	eb68e148 	bl	1af7be8 <TFlashBlock::$ExtendDirBucket(unsigned long, unsigned long *)>
         bf6c4:	e3300000 	teq	r0, #0	; 0x0
         bf6c8:	0affff64 	beq	bf460 <TFlashBlock::AddDirEnt(unsigned long, unsigned long, unsigned long *, SDirEnt *)+0x34>
         bf6cc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashBlock::ExtendDirBucket(unsigned long, unsigned long *)
 * Address: 000bf6d0
 */
TFlashBlock::ExtendDirBucket(unsigned long, unsigned long *) {
    /*
         bf6d0:	e1a0c00d 	mov	ip, sp
         bf6d4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         bf6d8:	e24cb004 	sub	fp, ip, #4	; 0x4
         bf6dc:	e1a04000 	mov	r4, r0
         bf6e0:	e1a05001 	mov	r5, r1
         bf6e4:	e1a06002 	mov	r6, r2
         bf6e8:	e53d001c 	ldr	r0, [sp, -#28]!	; fField28
         bf6ec:	e200020f 	and	r0, r0, #-268435456	; 0xf0000000
         bf6f0:	e58d0000 	str	r0, [sp]
         bf6f4:	e5940000 	ldr	r0, [r4]
         bf6f8:	e58d0010 	str	r0, [sp, #16]	; fField16
         bf6fc:	e1a0100d 	mov	r1, sp
         bf700:	eb68c86e 	bl	1af18c0 <TFlashStore::$Add(TObjRef *)>
         bf704:	e3a03000 	mov	r3, #0	; 0x0
         bf708:	e3a02000 	mov	r2, #0	; 0x0
         bf70c:	e1a0100d 	mov	r1, sp
         bf710:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         bf714:	e1a00004 	mov	r0, r4
         bf718:	eb68d0ae 	bl	1af39d8 <TFlashBlock::$BucketSize(void)>
         bf71c:	e1a03100 	mov	r3, r0, lsl #2
         bf720:	e1a00004 	mov	r0, r4
         bf724:	e3a02000 	mov	r2, #0	; 0x0
         bf728:	e3a01003 	mov	r1, #3	; 0x3
         bf72c:	eb692b82 	bl	1b0a53c <TFlashBlock::$AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)>
         bf730:	e28dd00c 	add	sp, sp, #12	; 0xc
         bf734:	e3300000 	teq	r0, #0	; 0x0
         bf738:	0a000005 	beq	bf754 <TFlashBlock::ExtendDirBucket(unsigned long, unsigned long *)+0x84>
         bf73c:	e1a04000 	mov	r4, r0
         bf740:	e59d0010 	ldr	r0, [sp, #16]	; fField16
         bf744:	e1a0100d 	mov	r1, sp
         bf748:	eb690e9f 	bl	1b031cc <TFlashStore::$Remove(TObjRef *)>
         bf74c:	e1a00004 	mov	r0, r4
         bf750:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         bf754:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         bf758:	e2800008 	add	r0, r0, #8	; 0x8
         bf75c:	e3360000 	teq	r6, #0	; 0x0
         bf760:	15860000 	strne	r0, [r6]
         bf764:	e24dd004 	sub	sp, sp, #4	; 0x4
         bf768:	e5941000 	ldr	r1, [r4]
         bf76c:	e591104c 	ldr	r1, [r1, #76]
         bf770:	e58d1000 	str	r1, [sp]
         bf774:	e20110ff 	and	r1, r1, #255	; 0xff
         bf778:	e1a00120 	mov	r0, r0, lsr #2
         bf77c:	e1810400 	orr	r0, r1, r0, lsl #8
         bf780:	e58d0000 	str	r0, [sp]
         bf784:	e5940000 	ldr	r0, [r4]
         bf788:	e5900048 	ldr	r0, [r0, #72]
         bf78c:	e59d1000 	ldr	r1, [sp]
         bf790:	e3c11080 	bic	r1, r1, #128	; 0x80
         bf794:	e2000001 	and	r0, r0, #1	; 0x1
         bf798:	e1810380 	orr	r0, r1, r0, lsl #7
         bf79c:	e58d0000 	str	r0, [sp]
         bf7a0:	e5940000 	ldr	r0, [r4]
         bf7a4:	e5900048 	ldr	r0, [r0, #72]
         bf7a8:	e59d1000 	ldr	r1, [sp]
         bf7ac:	e3c11008 	bic	r1, r1, #8	; 0x8
         bf7b0:	e2000001 	and	r0, r0, #1	; 0x1
         bf7b4:	e1810180 	orr	r0, r1, r0, lsl #3
         bf7b8:	e58d0000 	str	r0, [sp]
         bf7bc:	e1a0200d 	mov	r2, sp
         bf7c0:	e1a01005 	mov	r1, r5
         bf7c4:	e1a00004 	mov	r0, r4
         bf7c8:	e3a03004 	mov	r3, #4	; 0x4
         bf7cc:	eb68d07a 	bl	1af39bc <TFlashBlock::$BasicWrite(unsigned long, void *, unsigned long)>
         bf7d0:	e280cda5 	add	ip, r0, #10560	; 0x2940
         bf7d4:	e37c0031 	cmn	ip, #49	; 0x31
         bf7d8:	1a00000b 	bne	bf80c <TFlashBlock::ExtendDirBucket(unsigned long, unsigned long *)+0x13c>
         bf7dc:	e1a01005 	mov	r1, r5
         bf7e0:	e1a00004 	mov	r0, r4
         bf7e4:	eb692b50 	bl	1b0a52c <TFlashBlock::$ZapDirEnt(unsigned long)>
         bf7e8:	e2855004 	add	r5, r5, #4	; 0x4
         bf7ec:	e1a0200d 	mov	r2, sp
         bf7f0:	e1a01005 	mov	r1, r5
         bf7f4:	e1a00004 	mov	r0, r4
         bf7f8:	e3a03004 	mov	r3, #4	; 0x4
         bf7fc:	eb68d06e 	bl	1af39bc <TFlashBlock::$BasicWrite(unsigned long, void *, unsigned long)>
         bf800:	e3300000 	teq	r0, #0	; 0x0
         bf804:	13a00091 	movne	r0, #145	; 0x91
         bf808:	12400c2a 	subne	r0, r0, #10752	; 0x2a00
         bf80c:	e1a04000 	mov	r4, r0
         bf810:	e59d0014 	ldr	r0, [sp, #20]	; fField20
         bf814:	e28d1004 	add	r1, sp, #4	; 0x4
         bf818:	eb690e6b 	bl	1b031cc <TFlashStore::$Remove(TObjRef *)>
         bf81c:	e1a00004 	mov	r0, r4
         bf820:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashBlock::ZapObject(unsigned long)
 * Address: 000bf824
 */
TFlashBlock::ZapObject(unsigned long) {
    /*
         bf824:	e1a0c00d 	mov	ip, sp
         bf828:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         bf82c:	e24cb004 	sub	fp, ip, #4	; 0x4
         bf830:	e1a04000 	mov	r4, r0
         bf834:	e1a05001 	mov	r5, r1
         bf838:	e24dd008 	sub	sp, sp, #8	; 0x8
         bf83c:	e5900000 	ldr	r0, [r0]
         bf840:	eb692301 	bl	1b0844c <TFlashStore::$Translate(unsigned long)>
         bf844:	e1a06000 	mov	r6, r0
         bf848:	e1a0200d 	mov	r2, sp
         bf84c:	e1a01005 	mov	r1, r5
         bf850:	e1a00004 	mov	r0, r4
         bf854:	eb690a3e 	bl	1b02154 <TFlashBlock::$ReadObjectAt(unsigned long, SObject *)>
         bf858:	e3300000 	teq	r0, #0	; 0x0
         bf85c:	1a00001f 	bne	bf8e0 <TFlashBlock::ZapObject(unsigned long)+0xbc>
         bf860:	e1a0000d 	mov	r0, sp
         bf864:	e5941000 	ldr	r1, [r4]
         bf868:	eb68fdb4 	bl	1afef40 <SObject::$IsValid(TFlashStore *)>
         bf86c:	e1b01000 	movs	r1, r0
         bf870:	e3a00000 	mov	r0, #0	; 0x0
         bf874:	0a000019 	beq	bf8e0 <TFlashBlock::ZapObject(unsigned long)+0xbc>
         bf878:	e5941000 	ldr	r1, [r4]
         bf87c:	e59d2000 	ldr	r2, [sp]
         bf880:	e1a02102 	mov	r2, r2, lsl #2
         bf884:	e591304c 	ldr	r3, [r1, #76]
         bf888:	e2033001 	and	r3, r3, #1	; 0x1
         bf88c:	e1330fa2 	teq	r3, r2, lsr #31
         bf890:	1a000012 	bne	bf8e0 <TFlashBlock::ZapObject(unsigned long)+0xbc>
         bf894:	e3a02003 	mov	r2, #3	; 0x3
         bf898:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         bf89c:	e0820820 	add	r0, r2, r0, lsr #16
         bf8a0:	e3c00003 	bic	r0, r0, #3	; 0x3
         bf8a4:	e2800008 	add	r0, r0, #8	; 0x8
         bf8a8:	e5942014 	ldr	r2, [r4, #20]	; fField20
         bf8ac:	e0800002 	add	r0, r0, r2
         bf8b0:	e5840014 	str	r0, [r4, #20]	; fField20
         bf8b4:	e5b10048 	ldr	r0, [r1, #72]!
         bf8b8:	e2000001 	and	r0, r0, #1	; 0x1
         bf8bc:	e59d1000 	ldr	r1, [sp]
         bf8c0:	e3c11101 	bic	r1, r1, #1073741824	; 0x40000000
         bf8c4:	e1810f00 	orr	r0, r1, r0, lsl #30
         bf8c8:	e58d0000 	str	r0, [sp]
         bf8cc:	e1a0200d 	mov	r2, sp
         bf8d0:	e1a01006 	mov	r1, r6
         bf8d4:	e3a03008 	mov	r3, #8	; 0x8
         bf8d8:	e5940000 	ldr	r0, [r4]
         bf8dc:	eb68d037 	bl	1af39c0 <TFlashStore::$BasicWrite(unsigned long, void *, unsigned long)>
         bf8e0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashBlock::ZapDirEnt(unsigned long)
 * Address: 000bf8e4
 */
TFlashBlock::ZapDirEnt(unsigned long) {
    /*
         bf8e4:	e1a0c00d 	mov	ip, sp
         bf8e8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         bf8ec:	e24cb004 	sub	fp, ip, #4	; 0x4
         bf8f0:	e1a04000 	mov	r4, r0
         bf8f4:	e5900000 	ldr	r0, [r0]
         bf8f8:	eb6922d3 	bl	1b0844c <TFlashStore::$Translate(unsigned long)>
         bf8fc:	e1a01000 	mov	r1, r0
         bf900:	e3a02004 	mov	r2, #4	; 0x4
         bf904:	e5940000 	ldr	r0, [r4]
         bf908:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         bf90c:	ea692b05 	b	1b0a528 <TFlashStore::$Zap(unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TFlashBlock::NextObject(unsigned long, unsigned long *, unsigned char)
 * Address: 000bf910
 */
TFlashBlock::NextObject(unsigned long, unsigned long *, unsigned char) {
    /*
         bf910:	e1a0c00d 	mov	ip, sp
         bf914:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         bf918:	e24cb004 	sub	fp, ip, #4	; 0x4
         bf91c:	e1a04000 	mov	r4, r0
         bf920:	e1a05002 	mov	r5, r2
         bf924:	e20380ff 	and	r8, r3, #255	; 0xff
         bf928:	e3a07000 	mov	r7, #0	; 0x0
         bf92c:	e5900000 	ldr	r0, [r0]
         bf930:	e590005c 	ldr	r0, [r0, #92]
         bf934:	e1100001 	tst	r0, r1
         bf938:	05940004 	ldreq	r0, [r4, #4]	; fField4
         bf93c:	02801004 	addeq	r1, r0, #4	; 0x4
         bf940:	03a07001 	moveq	r7, #1	; 0x1
         bf944:	e1a06001 	mov	r6, r1
         bf948:	e1a00004 	mov	r0, r4
         bf94c:	eb68e097 	bl	1af7bb0 <TFlashBlock::$EndOffset(void)>
         bf950:	e1500006 	cmp	r0, r6
         bf954:	9a000036 	bls	bfa34 <TFlashBlock::NextObject(unsigned long, unsigned long *, unsigned char)+0x124>
         bf958:	e3a0a003 	mov	sl, #3	; 0x3
         bf95c:	e3a09000 	mov	r9, #0	; 0x0
         bf960:	e24dd008 	sub	sp, sp, #8	; 0x8
         bf964:	e1a0200d 	mov	r2, sp
         bf968:	e1a01006 	mov	r1, r6
         bf96c:	e1a00004 	mov	r0, r4
         bf970:	eb6909f7 	bl	1b02154 <TFlashBlock::$ReadObjectAt(unsigned long, SObject *)>
         bf974:	e3300000 	teq	r0, #0	; 0x0
         bf978:	0a000000 	beq	bf980 <TFlashBlock::NextObject(unsigned long, unsigned long *, unsigned char)+0x70>
         bf97c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         bf980:	e1a0000d 	mov	r0, sp
         bf984:	e5941000 	ldr	r1, [r4]
         bf988:	eb68fd6c 	bl	1afef40 <SObject::$IsValid(TFlashStore *)>
         bf98c:	e3300000 	teq	r0, #0	; 0x0
         bf990:	0a00001b 	beq	bfa04 <TFlashBlock::NextObject(unsigned long, unsigned long *, unsigned char)+0xf4>
         bf994:	e3370000 	teq	r7, #0	; 0x0
         bf998:	0a00000b 	beq	bf9cc <TFlashBlock::NextObject(unsigned long, unsigned long *, unsigned char)+0xbc>
         bf99c:	e3380000 	teq	r8, #0	; 0x0
         bf9a0:	1a000006 	bne	bf9c0 <TFlashBlock::NextObject(unsigned long, unsigned long *, unsigned char)+0xb0>
         bf9a4:	e5941000 	ldr	r1, [r4]
         bf9a8:	e59d0000 	ldr	r0, [sp]
         bf9ac:	e1a00080 	mov	r0, r0, lsl #1
         bf9b0:	e5911048 	ldr	r1, [r1, #72]
         bf9b4:	e2011001 	and	r1, r1, #1	; 0x1
         bf9b8:	e1310fa0 	teq	r1, r0, lsr #31
         bf9bc:	0a000002 	beq	bf9cc <TFlashBlock::NextObject(unsigned long, unsigned long *, unsigned char)+0xbc>
         bf9c0:	e1a00009 	mov	r0, r9
         bf9c4:	e5856000 	str	r6, [r5]
         bf9c8:	eaffffeb 	b	bf97c <TFlashBlock::NextObject(unsigned long, unsigned long *, unsigned char)+0x6c>
         bf9cc:	e5941000 	ldr	r1, [r4]
         bf9d0:	e59d0000 	ldr	r0, [sp]
         bf9d4:	e1a00100 	mov	r0, r0, lsl #2
         bf9d8:	e591104c 	ldr	r1, [r1, #76]
         bf9dc:	e2011001 	and	r1, r1, #1	; 0x1
         bf9e0:	e1310fa0 	teq	r1, r0, lsr #31
         bf9e4:	1a00000c 	bne	bfa1c <TFlashBlock::NextObject(unsigned long, unsigned long *, unsigned char)+0x10c>
         bf9e8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         bf9ec:	e08a0820 	add	r0, sl, r0, lsr #16
         bf9f0:	e3c00003 	bic	r0, r0, #3	; 0x3
         bf9f4:	e2800008 	add	r0, r0, #8	; 0x8
         bf9f8:	e0806006 	add	r6, r0, r6
         bf9fc:	e3a07001 	mov	r7, #1	; 0x1
         bfa00:	ea000006 	b	bfa20 <TFlashBlock::NextObject(unsigned long, unsigned long *, unsigned char)+0x110>
         bfa04:	e5940000 	ldr	r0, [r4]
         bfa08:	e590004c 	ldr	r0, [r0, #76]
         bfa0c:	e59d1000 	ldr	r1, [sp]
         bfa10:	e1300001 	teq	r0, r1
         bfa14:	028dd008 	addeq	sp, sp, #8	; 0x8
         bfa18:	0a000005 	beq	bfa34 <TFlashBlock::NextObject(unsigned long, unsigned long *, unsigned char)+0x124>
         bfa1c:	e2866004 	add	r6, r6, #4	; 0x4
         bfa20:	e28dd008 	add	sp, sp, #8	; 0x8
         bfa24:	e1a00004 	mov	r0, r4
         bfa28:	eb68e060 	bl	1af7bb0 <TFlashBlock::$EndOffset(void)>
         bfa2c:	e1500006 	cmp	r0, r6
         bfa30:	8affffca 	bhi	bf960 <TFlashBlock::NextObject(unsigned long, unsigned long *, unsigned char)+0x50>
         bfa34:	e3a0008e 	mov	r0, #142	; 0x8e
         bfa38:	e2400c2a 	sub	r0, r0, #10752	; 0x2a00
         bfa3c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashBlock::CompactInPlace(void)
 * Address: 000bfa40
 */
TFlashBlock::CompactInPlace(void) {
    /*
         bfa40:	e1a0c00d 	mov	ip, sp
         bfa44:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         bfa48:	e24cb004 	sub	fp, ip, #4	; 0x4
         bfa4c:	e1a04000 	mov	r4, r0
         bfa50:	e5900000 	ldr	r0, [r0]
         bfa54:	e5b0108c 	ldr	r1, [r0, #140]!
         bfa58:	e1a00004 	mov	r0, r4
         bfa5c:	eb691e5c 	bl	1b073d4 <TFlashBlock::$StartCompact(SCompactState *)>
         bfa60:	e5940000 	ldr	r0, [r4]
         bfa64:	e5b0108c 	ldr	r1, [r0, #140]!
         bfa68:	e1a00004 	mov	r0, r4
         bfa6c:	eb68d80f 	bl	1af5ab0 <TFlashBlock::$ContinueCompact(SCompactState *)>
         bfa70:	e5940000 	ldr	r0, [r4]
         bfa74:	eb690150 	bl	1afffbc <TFlashStore::$Mount(void)>
         bfa78:	e1a01004 	mov	r1, r4
         bfa7c:	e5940000 	ldr	r0, [r4]
         bfa80:	eb690171 	bl	1b0004c <TFlashStore::$NotifyCompact(TFlashBlock *)>
         bfa84:	e3a00000 	mov	r0, #0	; 0x0
         bfa88:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashBlock::StartCompact(SCompactState *)
 * Address: 000bfa8c
 */
TFlashBlock::StartCompact(SCompactState *) {
    /*
         bfa8c:	e1a0c00d 	mov	ip, sp
         bfa90:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         bfa94:	e24cb004 	sub	fp, ip, #4	; 0x4
         bfa98:	e1a05000 	mov	r5, r0
         bfa9c:	e1a04001 	mov	r4, r1
         bfaa0:	e3a06000 	mov	r6, #0	; 0x0
         bfaa4:	e56d6004 	strb	r6, [sp, -#4]!	; fField4
         bfaa8:	e24da064 	sub	sl, sp, #100	; 0x64
         bfaac:	e3a08001 	mov	r8, #1	; 0x1
         bfab0:	e59f903c 	ldr	r9, [pc, #3c]	; bfaf4 <TFlashBlock::StartCompact(SCompactState *)+0x68>
         bfab4:	e2817034 	add	r7, r1, #52	; 0x34
         bfab8:	e1a0000a 	mov	r0, sl
         bfabc:	e52d606c 	str	r6, [sp, -#108]!	; fField108
         bfac0:	eb6bcbab 	bl	1bb2974 <$setjmp>
         bfac4:	e3300000 	teq	r0, #0	; 0x0
         bfac8:	1a00002f 	bne	bfb8c <TFlashBlock::StartCompact(SCompactState *)+0x100>
         bfacc:	e1a0000d 	mov	r0, sp
         bfad0:	eb6c8169 	bl	1be007c <$AddExceptionHandler>
         bfad4:	e5950000 	ldr	r0, [r5]
         bfad8:	e5d00091 	ldrb	r0, [r0, #145]
         bfadc:	e3300000 	teq	r0, #0	; 0x0
         bfae0:	0a000004 	beq	bfaf8 <TFlashBlock::StartCompact(SCompactState *)+0x6c>
         bfae4:	e3a00002 	mov	r0, #2	; 0x2
         bfae8:	eb6d056b 	bl	1c0109c <$InternalStoreInfo>
         bfaec:	e1a03000 	mov	r3, r0
         bfaf0:	ea000001 	b	bfafc <TFlashBlock::StartCompact(SCompactState *)+0x70>
         bfaf4:	003712b4 	ldreqh	r1, [r7], -r4
         bfaf8:	e3a03000 	mov	r3, #0	; 0x0
         bfafc:	e92d0008 	stmdb	sp!, {r3}
         bfb00:	e5950000 	ldr	r0, [r5]
         bfb04:	e5d00091 	ldrb	r0, [r0, #145]
         bfb08:	e3300000 	teq	r0, #0	; 0x0
         bfb0c:	0a000002 	beq	bfb1c <TFlashBlock::StartCompact(SCompactState *)+0x90>
         bfb10:	e3a00003 	mov	r0, #3	; 0x3
         bfb14:	eb6d0560 	bl	1c0109c <$InternalStoreInfo>
         bfb18:	ea000000 	b	bfb20 <TFlashBlock::StartCompact(SCompactState *)+0x94>
         bfb1c:	e3a00000 	mov	r0, #0	; 0x0
         bfb20:	e1a03000 	mov	r3, r0
         bfb24:	e5950000 	ldr	r0, [r5]
         bfb28:	e5901054 	ldr	r1, [r0, #84]
         bfb2c:	e5902050 	ldr	r2, [r0, #80]	; fField80
         bfb30:	e0020291 	mul	r2, r1, r2
         bfb34:	e5b01018 	ldr	r1, [r0, #24]!	; fField24
         bfb38:	e1a00007 	mov	r0, r7
         bfb3c:	eb68f0a5 	bl	1afbdd8 <TStoreDriver::$Init(char *, unsigned long, char *, unsigned long)>
         bfb40:	e28dd004 	add	sp, sp, #4	; 0x4
         bfb44:	e5950000 	ldr	r0, [r5]
         bfb48:	e5a07088 	str	r7, [r0, #136]!
         bfb4c:	e5846004 	str	r6, [r4, #4]	; fField4
         bfb50:	e5950004 	ldr	r0, [r5, #4]	; fField4
         bfb54:	e5840010 	str	r0, [r4, #16]	; fField16
         bfb58:	e8950003 	ldmia	r5, {r0, r1}
         bfb5c:	eb69223a 	bl	1b0844c <TFlashStore::$Translate(unsigned long)>
         bfb60:	e584000c 	str	r0, [r4, #12]	; fField12
         bfb64:	e1a00005 	mov	r0, r5
         bfb68:	eb6911bd 	bl	1b04264 <TFlashBlock::$RootDirSize(void)>
         bfb6c:	e280000c 	add	r0, r0, #12	; 0xc
         bfb70:	e5840018 	str	r0, [r4, #24]	; fField24
         bfb74:	e5840020 	str	r0, [r4, #32]
         bfb78:	e584601c 	str	r6, [r4, #28]	; fField28
         bfb7c:	e5840024 	str	r0, [r4, #36]	; fField36
         bfb80:	e5848004 	str	r8, [r4, #4]	; fField4
         bfb84:	e5cd806c 	strb	r8, [sp, #108]	; fField108
         bfb88:	ea00000a 	b	bfbb8 <TFlashBlock::StartCompact(SCompactState *)+0x12c>
         bfb8c:	e59d0060 	ldr	r0, [sp, #96]
         bfb90:	e5991000 	ldr	r1, [r9]
         bfb94:	eb6c8d7e 	bl	1be3194 <$Subexception>
         bfb98:	e3300000 	teq	r0, #0	; 0x0
         bfb9c:	0a000003 	beq	bfbb0 <TFlashBlock::StartCompact(SCompactState *)+0x124>
         bfba0:	e3a01000 	mov	r1, #0	; 0x0
         bfba4:	e5950000 	ldr	r0, [r5]
         bfba8:	eb6915c4 	bl	1b052c0 <TFlashStore::$SendAlertMgrWPBitch(int)>
         bfbac:	ea000001 	b	bfbb8 <TFlashBlock::StartCompact(SCompactState *)+0x12c>
         bfbb0:	e1a0000d 	mov	r0, sp
         bfbb4:	eb6c8966 	bl	1be2154 <$NextHandler>
         bfbb8:	e1a0000d 	mov	r0, sp
         bfbbc:	eb6c853d 	bl	1be10b8 <$ExitHandler>
         bfbc0:	e5fd006c 	ldrb	r0, [sp, #108]!	; fField108
         bfbc4:	e3300000 	teq	r0, #0	; 0x0
         bfbc8:	0affffba 	beq	bfab8 <TFlashBlock::StartCompact(SCompactState *)+0x2c>
         bfbcc:	e1a00006 	mov	r0, r6
         bfbd0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashBlock::ContinueCompact(SCompactState *)
 * Address: 000bfbd4
 */
TFlashBlock::ContinueCompact(SCompactState *) {
    /*
         bfbd4:	e1a0c00d 	mov	ip, sp
         bfbd8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         bfbdc:	e24cb004 	sub	fp, ip, #4	; 0x4
         bfbe0:	e1a04000 	mov	r4, r0
         bfbe4:	e1a05001 	mov	r5, r1
         bfbe8:	e3a08000 	mov	r8, #0	; 0x0
         bfbec:	e56d8008 	strb	r8, [sp, -#8]!	; fField8
         bfbf0:	e24d7064 	sub	r7, sp, #100	; 0x64
         bfbf4:	e3a09001 	mov	r9, #1	; 0x1
         bfbf8:	e59f6030 	ldr	r6, [pc, #30]	; bfc30 <TFlashBlock::ContinueCompact(SCompactState *)+0x5c>
         bfbfc:	e1a00007 	mov	r0, r7
         bfc00:	e52d806c 	str	r8, [sp, -#108]!	; fField108
         bfc04:	eb6bcb5a 	bl	1bb2974 <$setjmp>
         bfc08:	e3300000 	teq	r0, #0	; 0x0
         bfc0c:	1a000008 	bne	bfc34 <TFlashBlock::ContinueCompact(SCompactState *)+0x60>
         bfc10:	e1a0000d 	mov	r0, sp
         bfc14:	eb6c8118 	bl	1be007c <$AddExceptionHandler>
         bfc18:	e1a01005 	mov	r1, r5
         bfc1c:	e1a00004 	mov	r0, r4
         bfc20:	eb69094e 	bl	1b02160 <TFlashBlock::$RealContinueCompact(SCompactState *)>
         bfc24:	e58d0070 	str	r0, [sp, #112]	; fField112
         bfc28:	e5cd906c 	strb	r9, [sp, #108]	; fField108
         bfc2c:	ea00000b 	b	bfc60 <TFlashBlock::ContinueCompact(SCompactState *)+0x8c>
         bfc30:	003712b4 	ldreqh	r1, [r7], -r4
         bfc34:	e59d0060 	ldr	r0, [sp, #96]
         bfc38:	e5961000 	ldr	r1, [r6]
         bfc3c:	eb6c8d54 	bl	1be3194 <$Subexception>
         bfc40:	e3300000 	teq	r0, #0	; 0x0
         bfc44:	0a000003 	beq	bfc58 <TFlashBlock::ContinueCompact(SCompactState *)+0x84>
         bfc48:	e3a01000 	mov	r1, #0	; 0x0
         bfc4c:	e5940000 	ldr	r0, [r4]
         bfc50:	eb69159a 	bl	1b052c0 <TFlashStore::$SendAlertMgrWPBitch(int)>
         bfc54:	ea000001 	b	bfc60 <TFlashBlock::ContinueCompact(SCompactState *)+0x8c>
         bfc58:	e1a0000d 	mov	r0, sp
         bfc5c:	eb6c893c 	bl	1be2154 <$NextHandler>
         bfc60:	e1a0000d 	mov	r0, sp
         bfc64:	eb6c8513 	bl	1be10b8 <$ExitHandler>
         bfc68:	e5fd006c 	ldrb	r0, [sp, #108]!	; fField108
         bfc6c:	e3300000 	teq	r0, #0	; 0x0
         bfc70:	0affffe1 	beq	bfbfc <TFlashBlock::ContinueCompact(SCompactState *)+0x28>
         bfc74:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         bfc78:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashBlock::SetInfo(SReservedBlockLogEntry *)
 * Address: 000bfc7c
 */
TFlashBlock::SetInfo(SReservedBlockLogEntry *) {
    /*
         bfc7c:	e1a0c00d 	mov	ip, sp
         bfc80:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         bfc84:	e24cb004 	sub	fp, ip, #4	; 0x4
         bfc88:	e1a04001 	mov	r4, r1
         bfc8c:	e591102c 	ldr	r1, [r1, #44]
         bfc90:	e5801004 	str	r1, [r0, #4]	; fField4
         bfc94:	e5941018 	ldr	r1, [r4, #24]	; fField24
         bfc98:	e5801008 	str	r1, [r0, #8]	; fField8
         bfc9c:	eb690501 	bl	1b010a8 <TFlashBlock::$PhysBlock(void)>
         bfca0:	e1a01004 	mov	r1, r4
         bfca4:	eb6a25f8 	bl	1b4948c <TFlashPhysBlock::$SetInfo(SReservedBlockLogEntry *)>
         bfca8:	e3a00000 	mov	r0, #0	; 0x0
         bfcac:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashBlock::RealContinueCompact(SCompactState *)
 * Address: 000bfcb0
 */
TFlashBlock::RealContinueCompact(SCompactState *) {
    /*
         bfcb0:	e1a0c00d 	mov	ip, sp
         bfcb4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         bfcb8:	e24cb004 	sub	fp, ip, #4	; 0x4
         bfcbc:	e1a05000 	mov	r5, r0
         bfcc0:	e1a04001 	mov	r4, r1
         bfcc4:	e24dd008 	sub	sp, sp, #8	; 0x8
         bfcc8:	e3a08000 	mov	r8, #0	; 0x0
         bfccc:	e3a07001 	mov	r7, #1	; 0x1
         bfcd0:	e3a06000 	mov	r6, #0	; 0x0
         bfcd4:	e5910004 	ldr	r0, [r1, #4]	; fField4
         bfcd8:	e3300008 	teq	r0, #8	; 0x8
         bfcdc:	1330000a 	teqne	r0, #10	; 0xa
         bfce0:	1a00000b 	bne	bfd14 <TFlashBlock::RealContinueCompact(SCompactState *)+0x64>
         bfce4:	e1a00005 	mov	r0, r5
         bfce8:	eb69115d 	bl	1b04264 <TFlashBlock::$RootDirSize(void)>
         bfcec:	e280000c 	add	r0, r0, #12	; 0xc
         bfcf0:	e5840018 	str	r0, [r4, #24]	; fField24
         bfcf4:	e5840020 	str	r0, [r4, #32]
         bfcf8:	e584601c 	str	r6, [r4, #28]	; fField28
         bfcfc:	e5840024 	str	r0, [r4, #36]	; fField36
         bfd00:	e5847004 	str	r7, [r4, #4]	; fField4
         bfd04:	e3a09008 	mov	r9, #8	; 0x8
         bfd08:	e2847034 	add	r7, r4, #52	; 0x34
         bfd0c:	e3a0a003 	mov	sl, #3	; 0x3
         bfd10:	ea000002 	b	bfd20 <TFlashBlock::RealContinueCompact(SCompactState *)+0x70>
         bfd14:	e3300000 	teq	r0, #0	; 0x0
         bfd18:	1afffff9 	bne	bfd04 <TFlashBlock::RealContinueCompact(SCompactState *)+0x54>
         bfd1c:	ea000118 	b	c0184 <TFlashBlock::RealContinueCompact(SCompactState *)+0x4d4>
         bfd20:	e5940004 	ldr	r0, [r4, #4]	; fField4
         bfd24:	e350000a 	cmp	r0, #10	; 0xa
         bfd28:	908ff100 	addls	pc, pc, r0, lsl #2
         bfd2c:	ea000111 	b	c0178 <TFlashBlock::RealContinueCompact(SCompactState *)+0x4c8>
         bfd30:	ea000110 	b	c0178 <TFlashBlock::RealContinueCompact(SCompactState *)+0x4c8>
         bfd34:	ea000008 	b	bfd5c <TFlashBlock::RealContinueCompact(SCompactState *)+0xac>
         bfd38:	ea000012 	b	bfd88 <TFlashBlock::RealContinueCompact(SCompactState *)+0xd8>
         bfd3c:	ea000050 	b	bfe84 <TFlashBlock::RealContinueCompact(SCompactState *)+0x1d4>
         bfd40:	ea00008d 	b	bff7c <TFlashBlock::RealContinueCompact(SCompactState *)+0x2cc>
         bfd44:	ea000094 	b	bff9c <TFlashBlock::RealContinueCompact(SCompactState *)+0x2ec>
         bfd48:	ea00009e 	b	bffc8 <TFlashBlock::RealContinueCompact(SCompactState *)+0x318>
         bfd4c:	ea0000ad 	b	c0008 <TFlashBlock::RealContinueCompact(SCompactState *)+0x358>
         bfd50:	ea0000b1 	b	c001c <TFlashBlock::RealContinueCompact(SCompactState *)+0x36c>
         bfd54:	ea0000c0 	b	c005c <TFlashBlock::RealContinueCompact(SCompactState *)+0x3ac>
         bfd58:	ea0000c8 	b	c0080 <TFlashBlock::RealContinueCompact(SCompactState *)+0x3d0>
         bfd5c:	e5950000 	ldr	r0, [r5]
         bfd60:	e5b0604c 	ldr	r6, [r0, #76]!
         bfd64:	e1a00005 	mov	r0, r5
         bfd68:	eb69113d 	bl	1b04264 <TFlashBlock::$RootDirSize(void)>
         bfd6c:	e1a02000 	mov	r2, r0
         bfd70:	e594000c 	ldr	r0, [r4, #12]	; fField12
         bfd74:	e280100c 	add	r1, r0, #12	; 0xc
         bfd78:	e1a00007 	mov	r0, r7
         bfd7c:	e1a03006 	mov	r3, r6
         bfd80:	eb691551 	bl	1b052cc <TStoreDriver::$Set(unsigned long, unsigned long, unsigned long)>
         bfd84:	ea0000a1 	b	c0010 <TFlashBlock::RealContinueCompact(SCompactState *)+0x360>
         bfd88:	e5951000 	ldr	r1, [r5]
         bfd8c:	e1a06001 	mov	r6, r1
         bfd90:	e5940018 	ldr	r0, [r4, #24]	; fField24
         bfd94:	e594200c 	ldr	r2, [r4, #12]	; fField12
         bfd98:	e0820000 	add	r0, r2, r0
         bfd9c:	e1a02000 	mov	r2, r0
         bfda0:	e5d1303d 	ldrb	r3, [r1, #61]	; fField61
         bfda4:	e3330000 	teq	r3, #0	; 0x0
         bfda8:	03a03b01 	moveq	r3, #1024	; 0x400
         bfdac:	13a03c01 	movne	r3, #256	; 0x100
         bfdb0:	e591c050 	ldr	ip, [r1, #80]	; fField80
         bfdb4:	e04c3003 	sub	r3, ip, r3
         bfdb8:	e591105c 	ldr	r1, [r1, #92]
         bfdbc:	e0011002 	and	r1, r1, r2
         bfdc0:	e1530001 	cmp	r3, r1
         bfdc4:	9a00000e 	bls	bfe04 <TFlashBlock::RealContinueCompact(SCompactState *)+0x154>
         bfdc8:	e1a01000 	mov	r1, r0
         bfdcc:	e1a00006 	mov	r0, r6
         bfdd0:	eb69219d 	bl	1b0844c <TFlashStore::$Translate(unsigned long)>
         bfdd4:	e1a01000 	mov	r1, r0
         bfdd8:	e1a0200d 	mov	r2, sp
         bfddc:	e1a00006 	mov	r0, r6
         bfde0:	e3a03008 	mov	r3, #8	; 0x8
         bfde4:	eb68cef3 	bl	1af39b8 <TFlashStore::$BasicRead(unsigned long, void *, unsigned long)>
         bfde8:	e1b08000 	movs	r8, r0
         bfdec:	1a0000e1 	bne	c0178 <TFlashBlock::RealContinueCompact(SCompactState *)+0x4c8>
         bfdf0:	e5950000 	ldr	r0, [r5]
         bfdf4:	e590104c 	ldr	r1, [r0, #76]
         bfdf8:	e59d2000 	ldr	r2, [sp]
         bfdfc:	e1310002 	teq	r1, r2
         bfe00:	1a000001 	bne	bfe0c <TFlashBlock::RealContinueCompact(SCompactState *)+0x15c>
         bfe04:	e5849004 	str	r9, [r4, #4]	; fField4
         bfe08:	eaffffc4 	b	bfd20 <TFlashBlock::RealContinueCompact(SCompactState *)+0x70>
         bfe0c:	e1a01000 	mov	r1, r0
         bfe10:	e59d0000 	ldr	r0, [sp]
         bfe14:	e1a00080 	mov	r0, r0, lsl #1
         bfe18:	e5911048 	ldr	r1, [r1, #72]
         bfe1c:	e2011001 	and	r1, r1, #1	; 0x1
         bfe20:	e1310fa0 	teq	r1, r0, lsr #31
         bfe24:	159d0000 	ldrne	r0, [sp]
         bfe28:	13c0020f 	bicne	r0, r0, #-268435456	; 0xf0000000
         bfe2c:	13300003 	teqne	r0, #3	; 0x3
         bfe30:	1a000007 	bne	bfe54 <TFlashBlock::RealContinueCompact(SCompactState *)+0x1a4>
         bfe34:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         bfe38:	e08a0820 	add	r0, sl, r0, lsr #16
         bfe3c:	e3c00003 	bic	r0, r0, #3	; 0x3
         bfe40:	e2800008 	add	r0, r0, #8	; 0x8
         bfe44:	e5941018 	ldr	r1, [r4, #24]	; fField24
         bfe48:	e0800001 	add	r0, r0, r1
         bfe4c:	e5840018 	str	r0, [r4, #24]	; fField24
         bfe50:	eaffffcc 	b	bfd88 <TFlashBlock::RealContinueCompact(SCompactState *)+0xd8>
         bfe54:	e584a004 	str	sl, [r4, #4]	; fField4
         bfe58:	e5950000 	ldr	r0, [r5]
         bfe5c:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         bfe60:	e1a01c01 	mov	r1, r1, lsl #24
         bfe64:	e5902048 	ldr	r2, [r0, #72]
         bfe68:	e2022001 	and	r2, r2, #1	; 0x1
         bfe6c:	e1320fa1 	teq	r2, r1, lsr #31
         bfe70:	1affffaa 	bne	bfd20 <TFlashBlock::RealContinueCompact(SCompactState *)+0x70>
         bfe74:	e59d1000 	ldr	r1, [sp]
         bfe78:	e3c1120f 	bic	r1, r1, #-268435456	; 0xf0000000
         bfe7c:	eb6952eb 	bl	1b14a30 <$XIPObjectHasMoved(TStore *, unsigned long)>
         bfe80:	ea0000bc 	b	c0178 <TFlashBlock::RealContinueCompact(SCompactState *)+0x4c8>
         bfe84:	e5951000 	ldr	r1, [r5]
         bfe88:	e1a06001 	mov	r6, r1
         bfe8c:	e5940018 	ldr	r0, [r4, #24]	; fField24
         bfe90:	e594200c 	ldr	r2, [r4, #12]	; fField12
         bfe94:	e0822000 	add	r2, r2, r0
         bfe98:	e594001c 	ldr	r0, [r4, #28]	; fField28
         bfe9c:	e0820000 	add	r0, r2, r0
         bfea0:	e1a02000 	mov	r2, r0
         bfea4:	e5d1303d 	ldrb	r3, [r1, #61]	; fField61
         bfea8:	e3330000 	teq	r3, #0	; 0x0
         bfeac:	03a03b01 	moveq	r3, #1024	; 0x400
         bfeb0:	13a03c01 	movne	r3, #256	; 0x100
         bfeb4:	e591c050 	ldr	ip, [r1, #80]	; fField80
         bfeb8:	e04c3003 	sub	r3, ip, r3
         bfebc:	e591105c 	ldr	r1, [r1, #92]
         bfec0:	e0011002 	and	r1, r1, r2
         bfec4:	e1530001 	cmp	r3, r1
         bfec8:	8a000001 	bhi	bfed4 <TFlashBlock::RealContinueCompact(SCompactState *)+0x224>
         bfecc:	e3a00004 	mov	r0, #4	; 0x4
         bfed0:	ea00004f 	b	c0014 <TFlashBlock::RealContinueCompact(SCompactState *)+0x364>
         bfed4:	e1a01000 	mov	r1, r0
         bfed8:	e1a00006 	mov	r0, r6
         bfedc:	eb69215a 	bl	1b0844c <TFlashStore::$Translate(unsigned long)>
         bfee0:	e1a01000 	mov	r1, r0
         bfee4:	e1a0200d 	mov	r2, sp
         bfee8:	e1a00006 	mov	r0, r6
         bfeec:	e3a03008 	mov	r3, #8	; 0x8
         bfef0:	eb68ceb0 	bl	1af39b8 <TFlashStore::$BasicRead(unsigned long, void *, unsigned long)>
         bfef4:	e1b08000 	movs	r8, r0
         bfef8:	1a00009e 	bne	c0178 <TFlashBlock::RealContinueCompact(SCompactState *)+0x4c8>
         bfefc:	e5950000 	ldr	r0, [r5]
         bff00:	e590104c 	ldr	r1, [r0, #76]
         bff04:	e59d2000 	ldr	r2, [sp]
         bff08:	e1310002 	teq	r1, r2
         bff0c:	0affffee 	beq	bfecc <TFlashBlock::RealContinueCompact(SCompactState *)+0x21c>
         bff10:	e59d1000 	ldr	r1, [sp]
         bff14:	e1a01081 	mov	r1, r1, lsl #1
         bff18:	e5900048 	ldr	r0, [r0, #72]
         bff1c:	e2000001 	and	r0, r0, #1	; 0x1
         bff20:	e1300fa1 	teq	r0, r1, lsr #31
         bff24:	159d0000 	ldrne	r0, [sp]
         bff28:	13c0020f 	bicne	r0, r0, #-268435456	; 0xf0000000
         bff2c:	13300003 	teqne	r0, #3	; 0x3
         bff30:	0affffe5 	beq	bfecc <TFlashBlock::RealContinueCompact(SCompactState *)+0x21c>
         bff34:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         bff38:	e08a0820 	add	r0, sl, r0, lsr #16
         bff3c:	e3c00003 	bic	r0, r0, #3	; 0x3
         bff40:	e2800008 	add	r0, r0, #8	; 0x8
         bff44:	e594101c 	ldr	r1, [r4, #28]	; fField28
         bff48:	e0800001 	add	r0, r0, r1
         bff4c:	e584001c 	str	r0, [r4, #28]	; fField28
         bff50:	e5950000 	ldr	r0, [r5]
         bff54:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         bff58:	e1a01c01 	mov	r1, r1, lsl #24
         bff5c:	e5902048 	ldr	r2, [r0, #72]
         bff60:	e2022001 	and	r2, r2, #1	; 0x1
         bff64:	e1320fa1 	teq	r2, r1, lsr #31
         bff68:	1affffc5 	bne	bfe84 <TFlashBlock::RealContinueCompact(SCompactState *)+0x1d4>
         bff6c:	e59d1000 	ldr	r1, [sp]
         bff70:	e3c1120f 	bic	r1, r1, #-268435456	; 0xf0000000
         bff74:	eb6952ad 	bl	1b14a30 <$XIPObjectHasMoved(TStore *, unsigned long)>
         bff78:	eaffffc1 	b	bfe84 <TFlashBlock::RealContinueCompact(SCompactState *)+0x1d4>
         bff7c:	e5940018 	ldr	r0, [r4, #24]	; fField24
         bff80:	e5840028 	str	r0, [r4, #40]
         bff84:	e5940020 	ldr	r0, [r4, #32]
         bff88:	e5840030 	str	r0, [r4, #48]
         bff8c:	e594001c 	ldr	r0, [r4, #28]	; fField28
         bff90:	e584002c 	str	r0, [r4, #44]
         bff94:	e3a00005 	mov	r0, #5	; 0x5
         bff98:	e5840004 	str	r0, [r4, #4]	; fField4
         bff9c:	e594002c 	ldr	r0, [r4, #44]
         bffa0:	e5941028 	ldr	r1, [r4, #40]
         bffa4:	e0811000 	add	r1, r1, r0
         bffa8:	e5841018 	str	r1, [r4, #24]	; fField24
         bffac:	e5941030 	ldr	r1, [r4, #48]
         bffb0:	e0810000 	add	r0, r1, r0
         bffb4:	e3a06000 	mov	r6, #0	; 0x0
         bffb8:	e5840020 	str	r0, [r4, #32]
         bffbc:	e3a00006 	mov	r0, #6	; 0x6
         bffc0:	e5840004 	str	r0, [r4, #4]	; fField4
         bffc4:	e584601c 	str	r6, [r4, #28]	; fField28
         bffc8:	e5d70024 	ldrb	r0, [r7, #36]	; fField36
         bffcc:	e3300000 	teq	r0, #0	; 0x0
         bffd0:	1a000008 	bne	bfff8 <TFlashBlock::RealContinueCompact(SCompactState *)+0x348>
         bffd4:	e594000c 	ldr	r0, [r4, #12]	; fField12
         bffd8:	e5941030 	ldr	r1, [r4, #48]
         bffdc:	e0802001 	add	r2, r0, r1
         bffe0:	e5941028 	ldr	r1, [r4, #40]
         bffe4:	e0801001 	add	r1, r0, r1
         bffe8:	e1a00007 	mov	r0, r7
         bffec:	e594302c 	ldr	r3, [r4, #44]
         bfff0:	eb69042a 	bl	1b010a0 <TStoreDriver::$PersistentCopy(unsigned long, unsigned long, unsigned long)>
         bfff4:	ea000001 	b	c0000 <TFlashBlock::RealContinueCompact(SCompactState *)+0x350>
         bfff8:	e1a00007 	mov	r0, r7
         bfffc:	eb68d6ac 	bl	1af5ab4 <TStoreDriver::$ContinuePersistentCopy(void)>
         c0000:	e3a00007 	mov	r0, #7	; 0x7
         c0004:	e5840004 	str	r0, [r4, #4]	; fField4
         c0008:	e3a06000 	mov	r6, #0	; 0x0
         c000c:	e5c76024 	strb	r6, [r7, #36]	; fField36
         c0010:	e3a00002 	mov	r0, #2	; 0x2
         c0014:	e5840004 	str	r0, [r4, #4]	; fField4
         c0018:	eaffff40 	b	bfd20 <TFlashBlock::RealContinueCompact(SCompactState *)+0x70>
         c001c:	e5950000 	ldr	r0, [r5]
         c0020:	e5901050 	ldr	r1, [r0, #80]	; fField80
         c0024:	e590304c 	ldr	r3, [r0, #76]
         c0028:	e5d0003d 	ldrb	r0, [r0, #61]	; fField61
         c002c:	e3300000 	teq	r0, #0	; 0x0
         c0030:	03a00b01 	moveq	r0, #1024	; 0x400
         c0034:	13a00c01 	movne	r0, #256	; 0x100
         c0038:	e0411000 	sub	r1, r1, r0
         c003c:	e5940020 	ldr	r0, [r4, #32]
         c0040:	e0412000 	sub	r2, r1, r0
         c0044:	e594100c 	ldr	r1, [r4, #12]	; fField12
         c0048:	e0811000 	add	r1, r1, r0
         c004c:	e1a00007 	mov	r0, r7
         c0050:	eb69149d 	bl	1b052cc <TStoreDriver::$Set(unsigned long, unsigned long, unsigned long)>
         c0054:	e3a00009 	mov	r0, #9	; 0x9
         c0058:	e5840004 	str	r0, [r4, #4]	; fField4
         c005c:	e5940020 	ldr	r0, [r4, #32]
         c0060:	e5941010 	ldr	r1, [r4, #16]	; fField16
         c0064:	e0810000 	add	r0, r1, r0
         c0068:	e3a06000 	mov	r6, #0	; 0x0
         c006c:	e2855010 	add	r5, r5, #16	; 0x10
         c0070:	e8850041 	stmia	r5, {r0, r6}
         c0074:	e2455010 	sub	r5, r5, #16	; 0x10
         c0078:	e3a0000a 	mov	r0, #10	; 0xa
         c007c:	e5840004 	str	r0, [r4, #4]	; fField4
         c0080:	e5951000 	ldr	r1, [r5]
         c0084:	e1a06001 	mov	r6, r1
         c0088:	e594000c 	ldr	r0, [r4, #12]	; fField12
         c008c:	e5942024 	ldr	r2, [r4, #36]	; fField36
         c0090:	e0800002 	add	r0, r0, r2
         c0094:	e1a02000 	mov	r2, r0
         c0098:	e5d1303d 	ldrb	r3, [r1, #61]	; fField61
         c009c:	e3330000 	teq	r3, #0	; 0x0
         c00a0:	03a03b01 	moveq	r3, #1024	; 0x400
         c00a4:	13a03c01 	movne	r3, #256	; 0x100
         c00a8:	e591c050 	ldr	ip, [r1, #80]	; fField80
         c00ac:	e04c3003 	sub	r3, ip, r3
         c00b0:	e591105c 	ldr	r1, [r1, #92]
         c00b4:	e0011002 	and	r1, r1, r2
         c00b8:	e1530001 	cmp	r3, r1
         c00bc:	9a00000e 	bls	c00fc <TFlashBlock::RealContinueCompact(SCompactState *)+0x44c>
         c00c0:	e1a01000 	mov	r1, r0
         c00c4:	e1a00006 	mov	r0, r6
         c00c8:	eb6920df 	bl	1b0844c <TFlashStore::$Translate(unsigned long)>
         c00cc:	e1a01000 	mov	r1, r0
         c00d0:	e1a0200d 	mov	r2, sp
         c00d4:	e1a00006 	mov	r0, r6
         c00d8:	e3a03008 	mov	r3, #8	; 0x8
         c00dc:	eb68ce35 	bl	1af39b8 <TFlashStore::$BasicRead(unsigned long, void *, unsigned long)>
         c00e0:	e1b08000 	movs	r8, r0
         c00e4:	1a000023 	bne	c0178 <TFlashBlock::RealContinueCompact(SCompactState *)+0x4c8>
         c00e8:	e5950000 	ldr	r0, [r5]
         c00ec:	e590104c 	ldr	r1, [r0, #76]
         c00f0:	e59d2000 	ldr	r2, [sp]
         c00f4:	e1310002 	teq	r1, r2
         c00f8:	1a000002 	bne	c0108 <TFlashBlock::RealContinueCompact(SCompactState *)+0x458>
         c00fc:	e3a06000 	mov	r6, #0	; 0x0
         c0100:	e5a46004 	str	r6, [r4, #4]!	; fField4
         c0104:	ea00001e 	b	c0184 <TFlashBlock::RealContinueCompact(SCompactState *)+0x4d4>
         c0108:	e59d1000 	ldr	r1, [sp]
         c010c:	e1a01081 	mov	r1, r1, lsl #1
         c0110:	e5900048 	ldr	r0, [r0, #72]
         c0114:	e2000001 	and	r0, r0, #1	; 0x1
         c0118:	e1300fa1 	teq	r0, r1, lsr #31
         c011c:	159d0000 	ldrne	r0, [sp]
         c0120:	13c0120f 	bicne	r1, r0, #-268435456	; 0xf0000000
         c0124:	13310003 	teqne	r1, #3	; 0x3
         c0128:	0a00000a 	beq	c0158 <TFlashBlock::RealContinueCompact(SCompactState *)+0x4a8>
         c012c:	e3510011 	cmp	r1, #17	; 0x11
         c0130:	3a000008 	bcc	c0158 <TFlashBlock::RealContinueCompact(SCompactState *)+0x4a8>
         c0134:	e3a03000 	mov	r3, #0	; 0x0
         c0138:	e92d0008 	stmdb	sp!, {r3}
         c013c:	e5940010 	ldr	r0, [r4, #16]	; fField16
         c0140:	e5942024 	ldr	r2, [r4, #36]	; fField36
         c0144:	e0802002 	add	r2, r0, r2
         c0148:	e1a00005 	mov	r0, r5
         c014c:	eb68c5e7 	bl	1af18f0 <TFlashBlock::$AddDirEnt(unsigned long, unsigned long, unsigned long *, SDirEnt *)>
         c0150:	e28dd004 	add	sp, sp, #4	; 0x4
         c0154:	e1a08000 	mov	r8, r0
         c0158:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         c015c:	e08a0820 	add	r0, sl, r0, lsr #16
         c0160:	e3c00003 	bic	r0, r0, #3	; 0x3
         c0164:	e2800008 	add	r0, r0, #8	; 0x8
         c0168:	e5941024 	ldr	r1, [r4, #36]	; fField36
         c016c:	e0800001 	add	r0, r0, r1
         c0170:	e5840024 	str	r0, [r4, #36]	; fField36
         c0174:	eaffffc1 	b	c0080 <TFlashBlock::RealContinueCompact(SCompactState *)+0x3d0>
         c0178:	e5940004 	ldr	r0, [r4, #4]	; fField4
         c017c:	e3300000 	teq	r0, #0	; 0x0
         c0180:	1afffee6 	bne	bfd20 <TFlashBlock::RealContinueCompact(SCompactState *)+0x70>
         c0184:	e1a00008 	mov	r0, r8
         c0188:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashBlock::CompactInto(unsigned long)
 * Address: 000c018c
 */
TFlashBlock::CompactInto(unsigned long) {
    /*
         c018c:	e1a0c00d 	mov	ip, sp
         c0190:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         c0194:	e24cb004 	sub	fp, ip, #4	; 0x4
         c0198:	e1a04000 	mov	r4, r0
         c019c:	e1a05001 	mov	r5, r1
         c01a0:	eb6903c0 	bl	1b010a8 <TFlashBlock::$PhysBlock(void)>
         c01a4:	e1a07000 	mov	r7, r0
         c01a8:	e5940000 	ldr	r0, [r4]
         c01ac:	eb68de7d 	bl	1af7ba8 <TFlashStore::$DummyBlock(void)>
         c01b0:	e1a06000 	mov	r6, r0
         c01b4:	e1a0e004 	mov	lr, r4
         c01b8:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
         c01bc:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
         c01c0:	e89e100e 	ldmia	lr, {r1, r2, r3, ip}
         c01c4:	e880100e 	stmia	r0, {r1, r2, r3, ip}
         c01c8:	e3a00000 	mov	r0, #0	; 0x0
         c01cc:	e586000c 	str	r0, [r6, #12]	; fField12
         c01d0:	e5865008 	str	r5, [r6, #8]	; fField8
         c01d4:	e5941004 	ldr	r1, [r4, #4]	; fField4
         c01d8:	e2811004 	add	r1, r1, #4	; 0x4
         c01dc:	e5860014 	str	r0, [r6, #20]	; fField20
         c01e0:	e1a00004 	mov	r0, r4
         c01e4:	e5861010 	str	r1, [r6, #16]	; fField16
         c01e8:	eb6a24aa 	bl	1b49498 <TFlashBlock::$IsReserved(void)>
         c01ec:	e3300000 	teq	r0, #0	; 0x0
         c01f0:	1a000009 	bne	c021c <TFlashBlock::CompactInto(unsigned long)+0x90>
         c01f4:	e1a02006 	mov	r2, r6
         c01f8:	e8940003 	ldmia	r4, {r0, r1}
         c01fc:	eb68de78 	bl	1af7be4 <TFlashStore::$ExchangeBlock(unsigned long, TFlashBlock *)>
         c0200:	e286100c 	add	r1, r6, #12	; 0xc
         c0204:	e1a00006 	mov	r0, r6
         c0208:	eb6928c3 	bl	1b0a51c <TFlashBlock::$WriteRootDirectory(unsigned long *)>
         c020c:	e5941004 	ldr	r1, [r4, #4]	; fField4
         c0210:	e1a02004 	mov	r2, r4
         c0214:	e5940000 	ldr	r0, [r4]
         c0218:	eb68de71 	bl	1af7be4 <TFlashStore::$ExchangeBlock(unsigned long, TFlashBlock *)>
         c021c:	e1a00004 	mov	r0, r4
         c0220:	eb6a249c 	bl	1b49498 <TFlashBlock::$IsReserved(void)>
         c0224:	e3300000 	teq	r0, #0	; 0x0
         c0228:	0a00000c 	beq	c0260 <TFlashBlock::CompactInto(unsigned long)+0xd4>
         c022c:	e5940000 	ldr	r0, [r4]
         c0230:	e5902050 	ldr	r2, [r0, #80]	; fField80
         c0234:	e5d0103d 	ldrb	r1, [r0, #61]	; fField61
         c0238:	e3310000 	teq	r1, #0	; 0x0
         c023c:	03a01b01 	moveq	r1, #1024	; 0x400
         c0240:	13a01c01 	movne	r1, #256	; 0x100
         c0244:	e0423001 	sub	r3, r2, r1
         c0248:	e1a02005 	mov	r2, r5
         c024c:	e5941008 	ldr	r1, [r4, #8]	; fField8
         c0250:	eb68cdd7 	bl	1af39b4 <TFlashStore::$BasicCopy(unsigned long, unsigned long, unsigned long)>
         c0254:	e3300000 	teq	r0, #0	; 0x0
         c0258:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
         c025c:	ea000004 	b	c0274 <TFlashBlock::CompactInto(unsigned long)+0xe8>
         c0260:	e1a01006 	mov	r1, r6
         c0264:	e1a00004 	mov	r0, r4
         c0268:	eb68d608 	bl	1af5a90 <TFlashBlock::$CompactInto(TFlashBlock *)>
         c026c:	e3300000 	teq	r0, #0	; 0x0
         c0270:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
         c0274:	e5940000 	ldr	r0, [r4]
         c0278:	e5901024 	ldr	r1, [r0, #36]	; fField36
         c027c:	e5900058 	ldr	r0, [r0, #88]	; fField88
         c0280:	e1a00035 	mov	r0, r5, lsr r0
         c0284:	e0800080 	add	r0, r0, r0, lsl #1
         c0288:	e0811180 	add	r1, r1, r0, lsl #3
         c028c:	e1a00007 	mov	r0, r7
         c0290:	e5b6200c 	ldr	r2, [r6, #12]!	; fField12
         c0294:	eb691828 	bl	1b0633c <TFlashPhysBlock::$SetSpare(TFlashPhysBlock *, unsigned long)>
         c0298:	e1b05000 	movs	r5, r0
         c029c:	1a000004 	bne	c02b4 <TFlashBlock::CompactInto(unsigned long)+0x128>
         c02a0:	e5940000 	ldr	r0, [r4]
         c02a4:	eb6a2479 	bl	1b49490 <TFlashStore::$BlockCompacted(void)>
         c02a8:	e1a01004 	mov	r1, r4
         c02ac:	e5940000 	ldr	r0, [r4]
         c02b0:	eb68ff65 	bl	1b0004c <TFlashStore::$NotifyCompact(TFlashBlock *)>
         c02b4:	e1a00005 	mov	r0, r5
         c02b8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashBlock::CompactInto(TFlashBlock *)
 * Address: 000c02bc
 */
TFlashBlock::CompactInto(TFlashBlock *) {
    /*
         c02bc:	e1a0c00d 	mov	ip, sp
         c02c0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         c02c4:	e24cb004 	sub	fp, ip, #4	; 0x4
         c02c8:	e1a04000 	mov	r4, r0
         c02cc:	e1a05001 	mov	r5, r1
         c02d0:	e24dd0b0 	sub	sp, sp, #176	; 0xb0
         c02d4:	e59d0094 	ldr	r0, [sp, #148]
         c02d8:	e200020f 	and	r0, r0, #-268435456	; 0xf0000000
         c02dc:	e58d0094 	str	r0, [sp, #148]
         c02e0:	e5940000 	ldr	r0, [r4]
         c02e4:	e58d00a4 	str	r0, [sp, #164]
         c02e8:	e28d1094 	add	r1, sp, #148	; 0x94
         c02ec:	eb68c573 	bl	1af18c0 <TFlashStore::$Add(TObjRef *)>
         c02f0:	e59d0078 	ldr	r0, [sp, #120]
         c02f4:	e200020f 	and	r0, r0, #-268435456	; 0xf0000000
         c02f8:	e58d0078 	str	r0, [sp, #120]
         c02fc:	e5940000 	ldr	r0, [r4]
         c0300:	e58d0088 	str	r0, [sp, #136]
         c0304:	e28d1078 	add	r1, sp, #120	; 0x78
         c0308:	eb68c56c 	bl	1af18c0 <TFlashStore::$Add(TObjRef *)>
         c030c:	e3a03003 	mov	r3, #3	; 0x3
         c0310:	e92d0008 	stmdb	sp!, {r3}
         c0314:	e1a03004 	mov	r3, r4
         c0318:	e28d2098 	add	r2, sp, #152	; 0x98
         c031c:	e28d0004 	add	r0, sp, #4	; 0x4
         c0320:	e5941000 	ldr	r1, [r4]
         c0324:	eb000559 	bl	c1890 <TFlashIterator::__ct(TFlashStore *, TObjRef *, TFlashBlock *, IterFilterType)>
         c0328:	e28dd004 	add	sp, sp, #4	; 0x4
         c032c:	e3a06000 	mov	r6, #0	; 0x0
         c0330:	e1a0000d 	mov	r0, sp
         c0334:	eb68de16 	bl	1af7b94 <TFlashIterator::$Done(void)>
         c0338:	e3300000 	teq	r0, #0	; 0x0
         c033c:	1a00004e 	bne	c047c <TFlashBlock::CompactInto(TFlashBlock *)+0x1c0>
         c0340:	e3a08002 	mov	r8, #2	; 0x2
         c0344:	e59f7224 	ldr	r7, [pc, #224]	; c0570 <TFlashBlock::CompactInto(TFlashBlock *)+0x2b4>
         c0348:	e1a0000d 	mov	r0, sp
         c034c:	eb68ff32 	bl	1b0001c <TFlashIterator::$Next(void)>
         c0350:	e59d0094 	ldr	r0, [sp, #148]
         c0354:	e3c0020f 	bic	r0, r0, #-268435456	; 0xf0000000
         c0358:	e3300003 	teq	r0, #3	; 0x3
         c035c:	0a000040 	beq	c0464 <TFlashBlock::CompactInto(TFlashBlock *)+0x1a8>
         c0360:	e1a02005 	mov	r2, r5
         c0364:	e8940003 	ldmia	r4, {r0, r1}
         c0368:	eb68de1d 	bl	1af7be4 <TFlashStore::$ExchangeBlock(unsigned long, TFlashBlock *)>
         c036c:	e59d0098 	ldr	r0, [sp, #152]
         c0370:	e1a00c00 	mov	r0, r0, lsl #24
         c0374:	e59d10a4 	ldr	r1, [sp, #164]
         c0378:	e5911048 	ldr	r1, [r1, #72]
         c037c:	e2011001 	and	r1, r1, #1	; 0x1
         c0380:	e1310fa0 	teq	r1, r0, lsr #31
         c0384:	13a00000 	movne	r0, #0	; 0x0
         c0388:	03a00001 	moveq	r0, #1	; 0x1
         c038c:	e20030ff 	and	r3, r0, #255	; 0xff
         c0390:	e92d0008 	stmdb	sp!, {r3}
         c0394:	e59d009c 	ldr	r0, [sp, #156]
         c0398:	e1a00e80 	mov	r0, r0, lsl #29
         c039c:	e1380f20 	teq	r8, r0, lsr #30
         c03a0:	13a00000 	movne	r0, #0	; 0x0
         c03a4:	03a00001 	moveq	r0, #1	; 0x1
         c03a8:	e20030ff 	and	r3, r0, #255	; 0xff
         c03ac:	e28d207c 	add	r2, sp, #124	; 0x7c
         c03b0:	e92d000c 	stmdb	sp!, {r2, r3}
         c03b4:	e59d00a4 	ldr	r0, [sp, #164]
         c03b8:	e1a03820 	mov	r3, r0, lsr #16
         c03bc:	e59d10a4 	ldr	r1, [sp, #164]
         c03c0:	e1a01801 	mov	r1, r1, lsl #16
         c03c4:	e59d00b0 	ldr	r0, [sp, #176]
         c03c8:	e590004c 	ldr	r0, [r0, #76]
         c03cc:	e0200c21 	eor	r0, r0, r1, lsr #24
         c03d0:	e20000ff 	and	r0, r0, #255	; 0xff
         c03d4:	e7d72000 	ldrb	r2, [r7, r0]
         c03d8:	e59d00a0 	ldr	r0, [sp, #160]
         c03dc:	e3c0120f 	bic	r1, r0, #-268435456	; 0xf0000000
         c03e0:	e1a00005 	mov	r0, r5
         c03e4:	eb692854 	bl	1b0a53c <TFlashBlock::$AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)>
         c03e8:	e28dd00c 	add	sp, sp, #12	; 0xc
         c03ec:	e59d1080 	ldr	r1, [sp, #128]
         c03f0:	e5940000 	ldr	r0, [r4]
         c03f4:	eb692014 	bl	1b0844c <TFlashStore::$Translate(unsigned long)>
         c03f8:	e1a09000 	mov	r9, r0
         c03fc:	e5941004 	ldr	r1, [r4, #4]	; fField4
         c0400:	e1a02004 	mov	r2, r4
         c0404:	e5940000 	ldr	r0, [r4]
         c0408:	eb68ddf5 	bl	1af7be4 <TFlashStore::$ExchangeBlock(unsigned long, TFlashBlock *)>
         c040c:	e59d1098 	ldr	r1, [sp, #152]
         c0410:	e1a01c01 	mov	r1, r1, lsl #24
         c0414:	e59d00a4 	ldr	r0, [sp, #164]
         c0418:	e5900048 	ldr	r0, [r0, #72]
         c041c:	e2000001 	and	r0, r0, #1	; 0x1
         c0420:	e1300fa1 	teq	r0, r1, lsr #31
         c0424:	1a000003 	bne	c0438 <TFlashBlock::CompactInto(TFlashBlock *)+0x17c>
         c0428:	e59d0094 	ldr	r0, [sp, #148]
         c042c:	e3c0120f 	bic	r1, r0, #-268435456	; 0xf0000000
         c0430:	e5940000 	ldr	r0, [r4]
         c0434:	eb69517d 	bl	1b14a30 <$XIPObjectHasMoved(TStore *, unsigned long)>
         c0438:	e59d0098 	ldr	r0, [sp, #152]
         c043c:	e1a06820 	mov	r6, r0, lsr #16
         c0440:	e59d109c 	ldr	r1, [sp, #156]
         c0444:	e5940000 	ldr	r0, [r4]
         c0448:	eb691fff 	bl	1b0844c <TFlashStore::$Translate(unsigned long)>
         c044c:	e2801008 	add	r1, r0, #8	; 0x8
         c0450:	e2892008 	add	r2, r9, #8	; 0x8
         c0454:	e1a03006 	mov	r3, r6
         c0458:	e5940000 	ldr	r0, [r4]
         c045c:	eb68cd54 	bl	1af39b4 <TFlashStore::$BasicCopy(unsigned long, unsigned long, unsigned long)>
         c0460:	e1a06000 	mov	r6, r0
         c0464:	e1a0000d 	mov	r0, sp
         c0468:	eb68ddc9 	bl	1af7b94 <TFlashIterator::$Done(void)>
         c046c:	e3300000 	teq	r0, #0	; 0x0
         c0470:	0affffb4 	beq	c0348 <TFlashBlock::CompactInto(TFlashBlock *)+0x8c>
         c0474:	e3360000 	teq	r6, #0	; 0x0
         c0478:	1a000034 	bne	c0550 <TFlashBlock::CompactInto(TFlashBlock *)+0x294>
         c047c:	e594000c 	ldr	r0, [r4, #12]	; fField12
         c0480:	e2807008 	add	r7, r0, #8	; 0x8
         c0484:	e1a00004 	mov	r0, r4
         c0488:	eb68cd52 	bl	1af39d8 <TFlashBlock::$BucketSize(void)>
         c048c:	e1a09100 	mov	r9, r0, lsl #2
         c0490:	e1a00004 	mov	r0, r4
         c0494:	eb68cd4e 	bl	1af39d4 <TFlashBlock::$BucketCount(void)>
         c0498:	e2508001 	subs	r8, r0, #1	; 0x1
         c049c:	4a00002b 	bmi	c0550 <TFlashBlock::CompactInto(TFlashBlock *)+0x294>
         c04a0:	e24dd07c 	sub	sp, sp, #124	; 0x7c
         c04a4:	e1a03007 	mov	r3, r7
         c04a8:	e28d2078 	add	r2, sp, #120	; 0x78
         c04ac:	e1a0000d 	mov	r0, sp
         c04b0:	e5941000 	ldr	r1, [r4]
         c04b4:	eb000509 	bl	c18e0 <TFlashIterator::__ct(TFlashStore *, SDirEnt *, unsigned long)>
         c04b8:	e1a0000d 	mov	r0, sp
         c04bc:	eb68ddb4 	bl	1af7b94 <TFlashIterator::$Done(void)>
         c04c0:	e3300000 	teq	r0, #0	; 0x0
         c04c4:	1a00001d 	bne	c0540 <TFlashBlock::CompactInto(TFlashBlock *)+0x284>
         c04c8:	e1a0000d 	mov	r0, sp
         c04cc:	eb68fed2 	bl	1b0001c <TFlashIterator::$Next(void)>
         c04d0:	e5941000 	ldr	r1, [r4]
         c04d4:	e59d0078 	ldr	r0, [sp, #120]
         c04d8:	e1a00e80 	mov	r0, r0, lsl #29
         c04dc:	e5911048 	ldr	r1, [r1, #72]
         c04e0:	e2011001 	and	r1, r1, #1	; 0x1
         c04e4:	e1310fa0 	teq	r1, r0, lsr #31
         c04e8:	1a000010 	bne	c0530 <TFlashBlock::CompactInto(TFlashBlock *)+0x274>
         c04ec:	e24dd008 	sub	sp, sp, #8	; 0x8
         c04f0:	e1a0200d 	mov	r2, sp
         c04f4:	e28d1004 	add	r1, sp, #4	; 0x4
         c04f8:	e28d0080 	add	r0, sp, #128	; 0x80
         c04fc:	eb692817 	bl	1b0a560 <$GetMigratedObjectInfo__7SDirEntCFPlT1>
         c0500:	e1a02005 	mov	r2, r5
         c0504:	e8940003 	ldmia	r4, {r0, r1}
         c0508:	eb68ddb5 	bl	1af7be4 <TFlashStore::$ExchangeBlock(unsigned long, TFlashBlock *)>
         c050c:	e1a00005 	mov	r0, r5
         c0510:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         c0514:	e59d2000 	ldr	r2, [sp]
         c0518:	eb692808 	bl	1b0a540 <TFlashBlock::$AddMigDirEnt(long, long)>
         c051c:	e5941004 	ldr	r1, [r4, #4]	; fField4
         c0520:	e1a02004 	mov	r2, r4
         c0524:	e5940000 	ldr	r0, [r4]
         c0528:	eb68ddad 	bl	1af7be4 <TFlashStore::$ExchangeBlock(unsigned long, TFlashBlock *)>
         c052c:	e28dd008 	add	sp, sp, #8	; 0x8
         c0530:	e1a0000d 	mov	r0, sp
         c0534:	eb68dd96 	bl	1af7b94 <TFlashIterator::$Done(void)>
         c0538:	e3300000 	teq	r0, #0	; 0x0
         c053c:	0affffe1 	beq	c04c8 <TFlashBlock::CompactInto(TFlashBlock *)+0x20c>
         c0540:	e0877009 	add	r7, r7, r9
         c0544:	e28dd07c 	add	sp, sp, #124	; 0x7c
         c0548:	e2588001 	subs	r8, r8, #1	; 0x1
         c054c:	5affffd3 	bpl	c04a0 <TFlashBlock::CompactInto(TFlashBlock *)+0x1e4>
         c0550:	e59d0088 	ldr	r0, [sp, #136]
         c0554:	e28d1078 	add	r1, sp, #120	; 0x78
         c0558:	eb690b1b 	bl	1b031cc <TFlashStore::$Remove(TObjRef *)>
         c055c:	e59d00a4 	ldr	r0, [sp, #164]
         c0560:	e28d1094 	add	r1, sp, #148	; 0x94
         c0564:	eb690b18 	bl	1b031cc <TFlashStore::$Remove(TObjRef *)>
         c0568:	e1a00006 	mov	r0, r6
         c056c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         c0570:	0037143c 	eoreqs	r1, r7, ip, lsr r4
    */
}

/**
 * Symbol: TFlashBlock::ReadObjectAt(unsigned long, SObject *)
 * Address: 000c0574
 */
TFlashBlock::ReadObjectAt(unsigned long, SObject *) {
    /*
         c0574:	e1a0c00d 	mov	ip, sp
         c0578:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         c057c:	e24cb004 	sub	fp, ip, #4	; 0x4
         c0580:	e1a04002 	mov	r4, r2
         c0584:	e5905000 	ldr	r5, [r0]
         c0588:	e1a00005 	mov	r0, r5
         c058c:	eb691fae 	bl	1b0844c <TFlashStore::$Translate(unsigned long)>
         c0590:	e1a01000 	mov	r1, r0
         c0594:	e1a02004 	mov	r2, r4
         c0598:	e1a00005 	mov	r0, r5
         c059c:	e3a03008 	mov	r3, #8	; 0x8
         c05a0:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         c05a4:	ea68cd03 	b	1af39b8 <TFlashStore::$BasicRead(unsigned long, void *, unsigned long)>
    */
}

/**
 * Symbol: TFlashBlock::AddMigDirEnt(long, long)
 * Address: 000c05a8
 */
TFlashBlock::AddMigDirEnt(long, long) {
    /*
         c05a8:	e1a0c00d 	mov	ip, sp
         c05ac:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         c05b0:	e24cb004 	sub	fp, ip, #4	; 0x4
         c05b4:	e1a04000 	mov	r4, r0
         c05b8:	e1a05001 	mov	r5, r1
         c05bc:	e1a06002 	mov	r6, r2
         c05c0:	e24dd008 	sub	sp, sp, #8	; 0x8
         c05c4:	e1a0300d 	mov	r3, sp
         c05c8:	e92d0008 	stmdb	sp!, {r3}
         c05cc:	e8900005 	ldmia	r0, {r0, r2}
         c05d0:	e5901058 	ldr	r1, [r0, #88]	; fField88
         c05d4:	e1a01132 	mov	r1, r2, lsr r1
         c05d8:	e1a02005 	mov	r2, r5
         c05dc:	eb001fac 	bl	c8494 <TFlashStore::PSSIDFor(long, long)>
         c05e0:	e1a01000 	mov	r1, r0
         c05e4:	e28d3008 	add	r3, sp, #8	; 0x8
         c05e8:	e1a00004 	mov	r0, r4
         c05ec:	e3e02000 	mvn	r2, #0	; 0x0
         c05f0:	eb68c4be 	bl	1af18f0 <TFlashBlock::$AddDirEnt(unsigned long, unsigned long, unsigned long *, SDirEnt *)>
         c05f4:	e28dd004 	add	sp, sp, #4	; 0x4
         c05f8:	e1b07000 	movs	r7, r0
         c05fc:	1a000016 	bne	c065c <TFlashBlock::AddMigDirEnt(long, long)+0xb4>
         c0600:	e1a02006 	mov	r2, r6
         c0604:	e1a01005 	mov	r1, r5
         c0608:	e1a0000d 	mov	r0, sp
         c060c:	eb6927d5 	bl	1b0a568 <SDirEnt::$SetMigratedObjectInfo(long, long)>
         c0610:	e5940000 	ldr	r0, [r4]
         c0614:	e5900048 	ldr	r0, [r0, #72]
         c0618:	e59d1000 	ldr	r1, [sp]
         c061c:	e3c11004 	bic	r1, r1, #4	; 0x4
         c0620:	e2000001 	and	r0, r0, #1	; 0x1
         c0624:	e1811100 	orr	r1, r1, r0, lsl #2
         c0628:	e58d1000 	str	r1, [sp]
         c062c:	e3c11040 	bic	r1, r1, #64	; 0x40
         c0630:	e1810300 	orr	r0, r1, r0, lsl #6
         c0634:	e58d0000 	str	r0, [sp]
         c0638:	e1a0200d 	mov	r2, sp
         c063c:	e1a00004 	mov	r0, r4
         c0640:	e3a03004 	mov	r3, #4	; 0x4
         c0644:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         c0648:	eb68ccdb 	bl	1af39bc <TFlashBlock::$BasicWrite(unsigned long, void *, unsigned long)>
         c064c:	e1b07000 	movs	r7, r0
         c0650:	11a00004 	movne	r0, r4
         c0654:	159d1004 	ldrne	r1, [sp, #4]	; fField4
         c0658:	1b6927b3 	blne	1b0a52c <TFlashBlock::$ZapDirEnt(unsigned long)>
         c065c:	e1a00007 	mov	r0, r7
         c0660:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashBlock::ObjectMigrated(unsigned long, long)
 * Address: 000c0664
 */
TFlashBlock::ObjectMigrated(unsigned long, long) {
    /*
         c0664:	e1a0c00d 	mov	ip, sp
         c0668:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         c066c:	e24cb004 	sub	fp, ip, #4	; 0x4
         c0670:	e1a04000 	mov	r4, r0
         c0674:	e1a06001 	mov	r6, r1
         c0678:	e1a05002 	mov	r5, r2
         c067c:	eb68fa31 	bl	1afef48 <TFlashBlock::$IsVirgin(void)>
         c0680:	e3300000 	teq	r0, #0	; 0x0
         c0684:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
         c0688:	e1a01006 	mov	r1, r6
         c068c:	e5940000 	ldr	r0, [r4]
         c0690:	eb001f7b 	bl	c8484 <TFlashStore::ObjectNumberFor(unsigned long)>
         c0694:	e1a07000 	mov	r7, r0
         c0698:	e1a01005 	mov	r1, r5
         c069c:	eb6927b0 	bl	1b0a564 <$IsValidMigratedObjectInfo__7SDirEntSFlT1>
         c06a0:	e3300000 	teq	r0, #0	; 0x0
         c06a4:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         c06a8:	e1a01006 	mov	r1, r6
         c06ac:	e1a00004 	mov	r0, r4
         c06b0:	eb6927a4 	bl	1b0a548 <TFlashBlock::$ZapMigDirEnt(unsigned long)>
         c06b4:	e3300000 	teq	r0, #0	; 0x0
         c06b8:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
         c06bc:	e5940004 	ldr	r0, [r4, #4]	; fField4
         c06c0:	e5941000 	ldr	r1, [r4]
         c06c4:	e5911058 	ldr	r1, [r1, #88]	; fField88
         c06c8:	e1350130 	teq	r5, r0, lsr r1
         c06cc:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         c06d0:	e1a02005 	mov	r2, r5
         c06d4:	e1a01007 	mov	r1, r7
         c06d8:	e1a00004 	mov	r0, r4
         c06dc:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         c06e0:	ea692796 	b	1b0a540 <TFlashBlock::$AddMigDirEnt(long, long)>
    */
}

/**
 * Symbol: TFlashBlock::ZapMigDirEnt(unsigned long)
 * Address: 000c06e4
 */
TFlashBlock::ZapMigDirEnt(unsigned long) {
    /*
         c06e4:	e1a0c00d 	mov	ip, sp
         c06e8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         c06ec:	e24cb004 	sub	fp, ip, #4	; 0x4
         c06f0:	e1a04000 	mov	r4, r0
         c06f4:	e1a05001 	mov	r5, r1
         c06f8:	eb68fa12 	bl	1afef48 <TFlashBlock::$IsVirgin(void)>
         c06fc:	e3a06000 	mov	r6, #0	; 0x0
         c0700:	e3300000 	teq	r0, #0	; 0x0
         c0704:	1a000003 	bne	c0718 <TFlashBlock::ZapMigDirEnt(unsigned long)+0x34>
         c0708:	e1a00004 	mov	r0, r4
         c070c:	eb6a2361 	bl	1b49498 <TFlashBlock::$IsReserved(void)>
         c0710:	e3300000 	teq	r0, #0	; 0x0
         c0714:	0a000001 	beq	c0720 <TFlashBlock::ZapMigDirEnt(unsigned long)+0x3c>
         c0718:	e1a00006 	mov	r0, r6
         c071c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         c0720:	e24dd07c 	sub	sp, sp, #124	; 0x7c
         c0724:	e1a01005 	mov	r1, r5
         c0728:	e5940000 	ldr	r0, [r4]
         c072c:	eb001f54 	bl	c8484 <TFlashStore::ObjectNumberFor(unsigned long)>
         c0730:	e1a07000 	mov	r7, r0
         c0734:	e1a01005 	mov	r1, r5
         c0738:	e1a00004 	mov	r0, r4
         c073c:	eb690ec7 	bl	1b04260 <TFlashBlock::$RootDirEnt(unsigned long)>
         c0740:	e1a03000 	mov	r3, r0
         c0744:	e28d2078 	add	r2, sp, #120	; 0x78
         c0748:	e1a0000d 	mov	r0, sp
         c074c:	e5941000 	ldr	r1, [r4]
         c0750:	eb000462 	bl	c18e0 <TFlashIterator::__ct(TFlashStore *, SDirEnt *, unsigned long)>
         c0754:	e1a0000d 	mov	r0, sp
         c0758:	eb68dd0d 	bl	1af7b94 <TFlashIterator::$Done(void)>
         c075c:	e3300000 	teq	r0, #0	; 0x0
         c0760:	1a000019 	bne	c07cc <TFlashBlock::ZapMigDirEnt(unsigned long)+0xe8>
         c0764:	e1a0000d 	mov	r0, sp
         c0768:	eb68fe2b 	bl	1b0001c <TFlashIterator::$Next(void)>
         c076c:	e5940000 	ldr	r0, [r4]
         c0770:	e59d1078 	ldr	r1, [sp, #120]
         c0774:	e1a01e81 	mov	r1, r1, lsl #29
         c0778:	e5900048 	ldr	r0, [r0, #72]
         c077c:	e2000001 	and	r0, r0, #1	; 0x1
         c0780:	e1300fa1 	teq	r0, r1, lsr #31
         c0784:	1a00000c 	bne	c07bc <TFlashBlock::ZapMigDirEnt(unsigned long)+0xd8>
         c0788:	e24dd008 	sub	sp, sp, #8	; 0x8
         c078c:	e1a0200d 	mov	r2, sp
         c0790:	e28d1004 	add	r1, sp, #4	; 0x4
         c0794:	e28d0080 	add	r0, sp, #128	; 0x80
         c0798:	eb692770 	bl	1b0a560 <$GetMigratedObjectInfo__7SDirEntCFPlT1>
         c079c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         c07a0:	e1300007 	teq	r0, r7
         c07a4:	1a000003 	bne	c07b8 <TFlashBlock::ZapMigDirEnt(unsigned long)+0xd4>
         c07a8:	e1a00004 	mov	r0, r4
         c07ac:	e59d1030 	ldr	r1, [sp, #48]
         c07b0:	eb69275d 	bl	1b0a52c <TFlashBlock::$ZapDirEnt(unsigned long)>
         c07b4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         c07b8:	e28dd008 	add	sp, sp, #8	; 0x8
         c07bc:	e1a0000d 	mov	r0, sp
         c07c0:	eb68dcf3 	bl	1af7b94 <TFlashIterator::$Done(void)>
         c07c4:	e3300000 	teq	r0, #0	; 0x0
         c07c8:	0affffe5 	beq	c0764 <TFlashBlock::ZapMigDirEnt(unsigned long)+0x80>
         c07cc:	e1a00006 	mov	r0, r6
         c07d0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashBlock::ReadDirEntAt(unsigned long, SDirEnt *)
 * Address: 000c07d4
 */
TFlashBlock::ReadDirEntAt(unsigned long, SDirEnt *) {
    /*
         c07d4:	e1a0c00d 	mov	ip, sp
         c07d8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         c07dc:	e24cb004 	sub	fp, ip, #4	; 0x4
         c07e0:	e1a04002 	mov	r4, r2
         c07e4:	e5905000 	ldr	r5, [r0]
         c07e8:	e1a00005 	mov	r0, r5
         c07ec:	eb691f16 	bl	1b0844c <TFlashStore::$Translate(unsigned long)>
         c07f0:	e1a01000 	mov	r1, r0
         c07f4:	e1a02004 	mov	r2, r4
         c07f8:	e1a00005 	mov	r0, r5
         c07fc:	e3a03004 	mov	r3, #4	; 0x4
         c0800:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         c0804:	ea68cc6b 	b	1af39b8 <TFlashStore::$BasicRead(unsigned long, void *, unsigned long)>
    */
}

/**
 * Symbol: TFlashBlock::IsVirgin(void)
 * Address: 000c0808
 */
TFlashBlock::IsVirgin(void) {
    /*
         c0808:	e1a0c00d 	mov	ip, sp
         c080c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         c0810:	e24cb004 	sub	fp, ip, #4	; 0x4
         c0814:	eb68f9d2 	bl	1afef64 <TFlashBlock::$LogEntryOffset(void)>
         c0818:	e3300000 	teq	r0, #0	; 0x0
         c081c:	13a00000 	movne	r0, #0	; 0x0
         c0820:	03a00001 	moveq	r0, #1	; 0x1
         c0824:	e20000ff 	and	r0, r0, #255	; 0xff
         c0828:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TFlashBlock::WriteRootDirectory(unsigned long *)
 * Address: 000c082c
 */
TFlashBlock::WriteRootDirectory(unsigned long *) {
    /*
         c082c:	e1a0c00d 	mov	ip, sp
         c0830:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         c0834:	e24cb004 	sub	fp, ip, #4	; 0x4
         c0838:	e1a04000 	mov	r4, r0
         c083c:	e1a05001 	mov	r5, r1
         c0840:	e53d001c 	ldr	r0, [sp, -#28]!	; fField28
         c0844:	e200020f 	and	r0, r0, #-268435456	; 0xf0000000
         c0848:	e58d0000 	str	r0, [sp]
         c084c:	e5940000 	ldr	r0, [r4]
         c0850:	e58d0010 	str	r0, [sp, #16]	; fField16
         c0854:	e1a0100d 	mov	r1, sp
         c0858:	eb68c418 	bl	1af18c0 <TFlashStore::$Add(TObjRef *)>
         c085c:	e3a03000 	mov	r3, #0	; 0x0
         c0860:	e3a02000 	mov	r2, #0	; 0x0
         c0864:	e1a0100d 	mov	r1, sp
         c0868:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         c086c:	e1a00004 	mov	r0, r4
         c0870:	eb690e7b 	bl	1b04264 <TFlashBlock::$RootDirSize(void)>
         c0874:	e1a03000 	mov	r3, r0
         c0878:	e1a00004 	mov	r0, r4
         c087c:	e3a02000 	mov	r2, #0	; 0x0
         c0880:	e3a01003 	mov	r1, #3	; 0x3
         c0884:	eb69272c 	bl	1b0a53c <TFlashBlock::$AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)>
         c0888:	e28dd00c 	add	sp, sp, #12	; 0xc
         c088c:	e3350000 	teq	r5, #0	; 0x0
         c0890:	159d1008 	ldrne	r1, [sp, #8]	; fField8
         c0894:	15851000 	strne	r1, [r5]
         c0898:	e1a04000 	mov	r4, r0
         c089c:	e59d0010 	ldr	r0, [sp, #16]	; fField16
         c08a0:	e1a0100d 	mov	r1, sp
         c08a4:	eb690a48 	bl	1b031cc <TFlashStore::$Remove(TObjRef *)>
         c08a8:	e1a00004 	mov	r0, r4
         c08ac:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashBlock::IsReserved(void)
 * Address: 000c08b0
 */
TFlashBlock::IsReserved(void) {
    /*
         c08b0:	e1a0c00d 	mov	ip, sp
         c08b4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         c08b8:	e24cb004 	sub	fp, ip, #4	; 0x4
         c08bc:	e5901008 	ldr	r1, [r0, #8]	; fField8
         c08c0:	e3710001 	cmn	r1, #1	; 0x1
         c08c4:	03a00000 	moveq	r0, #0	; 0x0
         c08c8:	0a000001 	beq	c08d4 <TFlashBlock::IsReserved(void)+0x24>
         c08cc:	eb6901f5 	bl	1b010a8 <TFlashBlock::$PhysBlock(void)>
         c08d0:	e5d00015 	ldrb	r0, [r0, #21]	; fField21
         c08d4:	e20000ff 	and	r0, r0, #255	; 0xff
         c08d8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TFlashBlock::EraseCount(void)
 * Address: 000c08dc
 */
TFlashBlock::EraseCount(void) {
    /*
         c08dc:	e5901008 	ldr	r1, [r0, #8]	; fField8
         c08e0:	e3710001 	cmn	r1, #1	; 0x1
         c08e4:	03a00000 	moveq	r0, #0	; 0x0
         c08e8:	01a0f00e 	moveq	pc, lr
         c08ec:	e1a0c00d 	mov	ip, sp
         c08f0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         c08f4:	e24cb004 	sub	fp, ip, #4	; 0x4
         c08f8:	eb6901ea 	bl	1b010a8 <TFlashBlock::$PhysBlock(void)>
         c08fc:	e91b6800 	ldmdb	fp, {fp, sp, lr}
         c0900:	ea68dcae 	b	1af7bc0 <TFlashPhysBlock::$EraseCount(void)>
    */
}

/**
 * Symbol: TFlashBlock::RootDirEnt(unsigned long)
 * Address: 000c0904
 */
TFlashBlock::RootDirEnt(unsigned long) {
    /*
         c0904:	e1a0c00d 	mov	ip, sp
         c0908:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         c090c:	e24cb004 	sub	fp, ip, #4	; 0x4
         c0910:	e1a04000 	mov	r4, r0
         c0914:	e1a00001 	mov	r0, r1
         c0918:	eb68ed1c 	bl	1afbd90 <$HashPSSID(unsigned long)>
         c091c:	e1a05000 	mov	r5, r0
         c0920:	e1a00004 	mov	r0, r4
         c0924:	eb68cc2a 	bl	1af39d4 <TFlashBlock::$BucketCount(void)>
         c0928:	e2400001 	sub	r0, r0, #1	; 0x1
         c092c:	e0055000 	and	r5, r5, r0
         c0930:	e1a00004 	mov	r0, r4
         c0934:	eb68cc27 	bl	1af39d8 <TFlashBlock::$BucketSize(void)>
         c0938:	e0010590 	mul	r1, r0, r5
         c093c:	e5b4000c 	ldr	r0, [r4, #12]!	; fField12
         c0940:	e0800101 	add	r0, r0, r1, lsl #2
         c0944:	e2800008 	add	r0, r0, #8	; 0x8
         c0948:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashBlock::NextPSSID(void)
 * Address: 000c094c
 */
TFlashBlock::NextPSSID(void) {
    /*
         c094c:	e1a0c00d 	mov	ip, sp
         c0950:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         c0954:	e24cb004 	sub	fp, ip, #4	; 0x4
         c0958:	e1a04000 	mov	r4, r0
         c095c:	e5900018 	ldr	r0, [r0, #24]	; fField24
         c0960:	eb68f977 	bl	1afef44 <$IsValidPSSID(unsigned long)>
         c0964:	e3300000 	teq	r0, #0	; 0x0
         c0968:	1a000005 	bne	c0984 <TFlashBlock::NextPSSID(void)+0x38>
         c096c:	e5940018 	ldr	r0, [r4, #24]	; fField24
         c0970:	e2800001 	add	r0, r0, #1	; 0x1
         c0974:	e5840018 	str	r0, [r4, #24]	; fField24
         c0978:	eb68f971 	bl	1afef44 <$IsValidPSSID(unsigned long)>
         c097c:	e3300000 	teq	r0, #0	; 0x0
         c0980:	0afffff9 	beq	c096c <TFlashBlock::NextPSSID(void)+0x20>
         c0984:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
         c0988:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashBlock::UseNextPSSID(void)
 * Address: 000c098c
 */
TFlashBlock::UseNextPSSID(void) {
    /*
         c098c:	e5901018 	ldr	r1, [r0, #24]	; fField24
         c0990:	e2812001 	add	r2, r1, #1	; 0x1
         c0994:	e5a02018 	str	r2, [r0, #24]!	; fField24
         c0998:	e1a00001 	mov	r0, r1
         c099c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashBlock::SetDirEntOffset(unsigned long, unsigned long)
 * Address: 000c09a0
 */
TFlashBlock::SetDirEntOffset(unsigned long, unsigned long) {
    /*
         c09a0:	e1a0c00d 	mov	ip, sp
         c09a4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         c09a8:	e24cb004 	sub	fp, ip, #4	; 0x4
         c09ac:	e1a05000 	mov	r5, r0
         c09b0:	e1a04001 	mov	r4, r1
         c09b4:	e1a06002 	mov	r6, r2
         c09b8:	e24dd004 	sub	sp, sp, #4	; 0x4
         c09bc:	e1a0200d 	mov	r2, sp
         c09c0:	eb6905e2 	bl	1b02150 <TFlashBlock::$ReadDirEntAt(unsigned long, SDirEnt *)>
         c09c4:	e59d0000 	ldr	r0, [sp]
         c09c8:	e20000ff 	and	r0, r0, #255	; 0xff
         c09cc:	e1a01126 	mov	r1, r6, lsr #2
         c09d0:	e1800401 	orr	r0, r0, r1, lsl #8
         c09d4:	e58d0000 	str	r0, [sp]
         c09d8:	e1a0200d 	mov	r2, sp
         c09dc:	e1a01004 	mov	r1, r4
         c09e0:	e1a00005 	mov	r0, r5
         c09e4:	e3a03004 	mov	r3, #4	; 0x4
         c09e8:	eb68cbf3 	bl	1af39bc <TFlashBlock::$BasicWrite(unsigned long, void *, unsigned long)>
         c09ec:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashBlock::BasicWrite(unsigned long, void *, unsigned long)
 * Address: 000c09f0
 */
TFlashBlock::BasicWrite(unsigned long, void *, unsigned long) {
    /*
         c09f0:	e1a0c00d 	mov	ip, sp
         c09f4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         c09f8:	e24cb004 	sub	fp, ip, #4	; 0x4
         c09fc:	e1a04000 	mov	r4, r0
         c0a00:	e1a05002 	mov	r5, r2
         c0a04:	e1a06003 	mov	r6, r3
         c0a08:	e5900000 	ldr	r0, [r0]
         c0a0c:	eb691e8e 	bl	1b0844c <TFlashStore::$Translate(unsigned long)>
         c0a10:	e1a01000 	mov	r1, r0
         c0a14:	e1a03006 	mov	r3, r6
         c0a18:	e1a02005 	mov	r2, r5
         c0a1c:	e5940000 	ldr	r0, [r4]
         c0a20:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         c0a24:	ea68cbe5 	b	1af39c0 <TFlashStore::$BasicWrite(unsigned long, void *, unsigned long)>
    */
}

/**
 * Symbol: TFlashBlock::EraseHeuristic(unsigned long)
 * Address: 000c0a28
 */
TFlashBlock::EraseHeuristic(unsigned long) {
    /*
         c0a28:	e1a0c00d 	mov	ip, sp
         c0a2c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         c0a30:	e24cb004 	sub	fp, ip, #4	; 0x4
         c0a34:	e1a04000 	mov	r4, r0
         c0a38:	e1a05001 	mov	r5, r1
         c0a3c:	e5900000 	ldr	r0, [r0]
         c0a40:	eb68cbd9 	bl	1af39ac <TFlashStore::$AverageEraseCount(void)>
         c0a44:	e1a06000 	mov	r6, r0
         c0a48:	e1a00004 	mov	r0, r4
         c0a4c:	eb690195 	bl	1b010a8 <TFlashBlock::$PhysBlock(void)>
         c0a50:	eb68dc5a 	bl	1af7bc0 <TFlashPhysBlock::$EraseCount(void)>
         c0a54:	e0460000 	sub	r0, r6, r0
         c0a58:	e1a01525 	mov	r1, r5, lsr #10
         c0a5c:	e0020090 	mul	r2, r0, r0
         c0a60:	e0020290 	mul	r2, r0, r2
         c0a64:	e0202191 	mla	r0, r1, r1, r2
         c0a68:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashBlock::BucketSize(void)
 * Address: 000c0a6c
 */
TFlashBlock::BucketSize(void) {
    /*
         c0a6c:	e5900000 	ldr	r0, [r0]
         c0a70:	e590006c 	ldr	r0, [r0, #108]	; fField108
         c0a74:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashBlock::BucketCount(void)
 * Address: 000c0a78
 */
TFlashBlock::BucketCount(void) {
    /*
         c0a78:	e5900000 	ldr	r0, [r0]
         c0a7c:	e5900070 	ldr	r0, [r0, #112]	; fField112
         c0a80:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashBlock::Avail(void)
 * Address: 000c0a84
 */
TFlashBlock::Avail(void) {
    /*
         c0a84:	e1a0c00d 	mov	ip, sp
         c0a88:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         c0a8c:	e24cb004 	sub	fp, ip, #4	; 0x4
         c0a90:	e1a04000 	mov	r4, r0
         c0a94:	eb6a227f 	bl	1b49498 <TFlashBlock::$IsReserved(void)>
         c0a98:	e3300000 	teq	r0, #0	; 0x0
         c0a9c:	13a00000 	movne	r0, #0	; 0x0
         c0aa0:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         c0aa4:	e5940000 	ldr	r0, [r4]
         c0aa8:	e5901050 	ldr	r1, [r0, #80]	; fField80
         c0aac:	e5d0003d 	ldrb	r0, [r0, #61]	; fField61
         c0ab0:	e3300000 	teq	r0, #0	; 0x0
         c0ab4:	03a00b01 	moveq	r0, #1024	; 0x400
         c0ab8:	13a00c01 	movne	r0, #256	; 0x100
         c0abc:	e0415000 	sub	r5, r1, r0
         c0ac0:	e1a00004 	mov	r0, r4
         c0ac4:	eb68f91f 	bl	1afef48 <TFlashBlock::$IsVirgin(void)>
         c0ac8:	e3300000 	teq	r0, #0	; 0x0
         c0acc:	1a000003 	bne	c0ae0 <TFlashBlock::Avail(void)+0x5c>
         c0ad0:	e5b41004 	ldr	r1, [r4, #4]!	; fField4
         c0ad4:	e594000c 	ldr	r0, [r4, #12]	; fField12
         c0ad8:	e0400001 	sub	r0, r0, r1
         c0adc:	e0455000 	sub	r5, r5, r0
         c0ae0:	e1a00005 	mov	r0, r5
         c0ae4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashBlock::RootDirSize(void)
 * Address: 000c0ae8
 */
TFlashBlock::RootDirSize(void) {
    /*
         c0ae8:	e1a0c00d 	mov	ip, sp
         c0aec:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         c0af0:	e24cb004 	sub	fp, ip, #4	; 0x4
         c0af4:	e1a04000 	mov	r4, r0
         c0af8:	eb68cbb6 	bl	1af39d8 <TFlashBlock::$BucketSize(void)>
         c0afc:	e1a05000 	mov	r5, r0
         c0b00:	e1a00004 	mov	r0, r4
         c0b04:	eb68cbb2 	bl	1af39d4 <TFlashBlock::$BucketCount(void)>
         c0b08:	e1a01000 	mov	r1, r0
         c0b0c:	e1a00005 	mov	r0, r5
         c0b10:	e0000091 	mul	r0, r1, r0
         c0b14:	e3a01004 	mov	r1, #4	; 0x4
         c0b18:	e0810100 	add	r0, r1, r0, lsl #2
         c0b1c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashBlock::CalcRecoverableBytes(void)
 * Address: 000c0b20
 */
TFlashBlock::CalcRecoverableBytes(void) {
    /*
         c0b20:	e1a0c00d 	mov	ip, sp
         c0b24:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         c0b28:	e24cb004 	sub	fp, ip, #4	; 0x4
         c0b2c:	e1a04000 	mov	r4, r0
         c0b30:	eb6a2258 	bl	1b49498 <TFlashBlock::$IsReserved(void)>
         c0b34:	e3a01000 	mov	r1, #0	; 0x0
         c0b38:	e3300000 	teq	r0, #0	; 0x0
         c0b3c:	11a00001 	movne	r0, r1
         c0b40:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         c0b44:	e1a00004 	mov	r0, r4
         c0b48:	eb68cba2 	bl	1af39d8 <TFlashBlock::$BucketSize(void)>
         c0b4c:	e1a0a100 	mov	sl, r0, lsl #2
         c0b50:	e594000c 	ldr	r0, [r4, #12]	; fField12
         c0b54:	e080700a 	add	r7, r0, sl
         c0b58:	e1a00004 	mov	r0, r4
         c0b5c:	eb68cb9c 	bl	1af39d4 <TFlashBlock::$BucketCount(void)>
         c0b60:	e3a05000 	mov	r5, #0	; 0x0
         c0b64:	e2509001 	subs	r9, r0, #1	; 0x1
         c0b68:	4a00002c 	bmi	c0c20 <TFlashBlock::CalcRecoverableBytes(void)+0x100>
         c0b6c:	e24dd004 	sub	sp, sp, #4	; 0x4
         c0b70:	e1a06007 	mov	r6, r7
         c0b74:	e3a08001 	mov	r8, #1	; 0x1
         c0b78:	e1a0200d 	mov	r2, sp
         c0b7c:	e1a01006 	mov	r1, r6
         c0b80:	e1a00004 	mov	r0, r4
         c0b84:	eb690571 	bl	1b02150 <TFlashBlock::$ReadDirEntAt(unsigned long, SDirEnt *)>
         c0b88:	e3300000 	teq	r0, #0	; 0x0
         c0b8c:	1a00001d 	bne	c0c08 <TFlashBlock::CalcRecoverableBytes(void)+0xe8>
         c0b90:	e1a0000d 	mov	r0, sp
         c0b94:	e5941000 	ldr	r1, [r4]
         c0b98:	eb68f8e7 	bl	1afef3c <SDirEnt::$IsValid(TFlashStore *)>
         c0b9c:	e3300000 	teq	r0, #0	; 0x0
         c0ba0:	0a000017 	beq	c0c04 <TFlashBlock::CalcRecoverableBytes(void)+0xe4>
         c0ba4:	e5940000 	ldr	r0, [r4]
         c0ba8:	e59d1000 	ldr	r1, [sp]
         c0bac:	e1a01c81 	mov	r1, r1, lsl #25
         c0bb0:	e5900048 	ldr	r0, [r0, #72]
         c0bb4:	e2000001 	and	r0, r0, #1	; 0x1
         c0bb8:	e1300fa1 	teq	r0, r1, lsr #31
         c0bbc:	0a000010 	beq	c0c04 <TFlashBlock::CalcRecoverableBytes(void)+0xe4>
         c0bc0:	e59d1000 	ldr	r1, [sp]
         c0bc4:	e1a01c01 	mov	r1, r1, lsl #24
         c0bc8:	e1300fa1 	teq	r0, r1, lsr #31
         c0bcc:	1a00000c 	bne	c0c04 <TFlashBlock::CalcRecoverableBytes(void)+0xe4>
         c0bd0:	e24dd078 	sub	sp, sp, #120	; 0x78
         c0bd4:	e59d0078 	ldr	r0, [sp, #120]
         c0bd8:	e1a00420 	mov	r0, r0, lsr #8
         c0bdc:	e1a03100 	mov	r3, r0, lsl #2
         c0be0:	e28d2078 	add	r2, sp, #120	; 0x78
         c0be4:	e1a0000d 	mov	r0, sp
         c0be8:	e5941000 	ldr	r1, [r4]
         c0bec:	eb00033b 	bl	c18e0 <TFlashIterator::__ct(TFlashStore *, SDirEnt *, unsigned long)>
         c0bf0:	e1a0000d 	mov	r0, sp
         c0bf4:	eb692656 	bl	1b0a554 <TFlashIterator::$CountUnusedDirEnt(void)>
         c0bf8:	e0805005 	add	r5, r0, r5
         c0bfc:	e28dd078 	add	sp, sp, #120	; 0x78
         c0c00:	ea000002 	b	c0c10 <TFlashBlock::CalcRecoverableBytes(void)+0xf0>
         c0c04:	e2866004 	add	r6, r6, #4	; 0x4
         c0c08:	e2588001 	subs	r8, r8, #1	; 0x1
         c0c0c:	5affffd9 	bpl	c0b78 <TFlashBlock::CalcRecoverableBytes(void)+0x58>
         c0c10:	e087700a 	add	r7, r7, sl
         c0c14:	e28dd004 	add	sp, sp, #4	; 0x4
         c0c18:	e2599001 	subs	r9, r9, #1	; 0x1
         c0c1c:	5affffd2 	bpl	c0b6c <TFlashBlock::CalcRecoverableBytes(void)+0x4c>
         c0c20:	e1a00004 	mov	r0, r4
         c0c24:	eb69263e 	bl	1b0a524 <TFlashBlock::$Yield(void)>
         c0c28:	e0806105 	add	r6, r0, r5, lsl #2
         c0c2c:	e1a00004 	mov	r0, r4
         c0c30:	eb68cb68 	bl	1af39d8 <TFlashBlock::$BucketSize(void)>
         c0c34:	e1a01005 	mov	r1, r5
         c0c38:	eb6bc742 	bl	1bb2948 <$__rt_udiv>
         c0c3c:	e0860180 	add	r0, r6, r0, lsl #3
         c0c40:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashBlock::Yield(void)
 * Address: 000c0c44
 */
TFlashBlock::Yield(void) {
    /*
         c0c44:	e1a0c00d 	mov	ip, sp
         c0c48:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         c0c4c:	e24cb004 	sub	fp, ip, #4	; 0x4
         c0c50:	e1a04000 	mov	r4, r0
         c0c54:	eb6a220f 	bl	1b49498 <TFlashBlock::$IsReserved(void)>
         c0c58:	e3300000 	teq	r0, #0	; 0x0
         c0c5c:	13a00000 	movne	r0, #0	; 0x0
         c0c60:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         c0c64:	e1a00004 	mov	r0, r4
         c0c68:	eb68cb4d 	bl	1af39a4 <TFlashBlock::$Avail(void)>
         c0c6c:	e5b41014 	ldr	r1, [r4, #20]!	; fField20
         c0c70:	e0800001 	add	r0, r0, r1
         c0c74:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashBlock::EndOffset(void)
 * Address: 000c0c78
 */
TFlashBlock::EndOffset(void) {
    /*
         c0c78:	e8900005 	ldmia	r0, {r0, r2}
         c0c7c:	e5901050 	ldr	r1, [r0, #80]	; fField80
         c0c80:	e0821001 	add	r1, r2, r1
         c0c84:	e5d0003d 	ldrb	r0, [r0, #61]	; fField61
         c0c88:	e3300000 	teq	r0, #0	; 0x0
         c0c8c:	03a00b01 	moveq	r0, #1024	; 0x400
         c0c90:	13a00c01 	movne	r0, #256	; 0x100
         c0c94:	e0410000 	sub	r0, r1, r0
         c0c98:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashBlock::LogEntryOffset(void)
 * Address: 000c0c9c
 */
TFlashBlock::LogEntryOffset(void) {
    /*
         c0c9c:	e5901008 	ldr	r1, [r0, #8]	; fField8
         c0ca0:	e3710001 	cmn	r1, #1	; 0x1
         c0ca4:	03a00000 	moveq	r0, #0	; 0x0
         c0ca8:	01a0f00e 	moveq	pc, lr
         c0cac:	e1a0c00d 	mov	ip, sp
         c0cb0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         c0cb4:	e24cb004 	sub	fp, ip, #4	; 0x4
         c0cb8:	eb6900fa 	bl	1b010a8 <TFlashBlock::$PhysBlock(void)>
         c0cbc:	e91b6800 	ldmdb	fp, {fp, sp, lr}
         c0cc0:	ea68f8a8 	b	1afef68 <TFlashPhysBlock::$LogEntryOffset(void)>
    */
}

/**
 * Symbol: TFlashBlock::PhysBlock(void)
 * Address: 000c0cc4
 */
TFlashBlock::PhysBlock(void) {
    /*
         c0cc4:	e5901008 	ldr	r1, [r0, #8]	; fField8
         c0cc8:	e3710001 	cmn	r1, #1	; 0x1
         c0ccc:	03a00000 	moveq	r0, #0	; 0x0
         c0cd0:	01a0f00e 	moveq	pc, lr
         c0cd4:	e5900000 	ldr	r0, [r0]
         c0cd8:	e5902024 	ldr	r2, [r0, #36]	; fField36
         c0cdc:	e5900058 	ldr	r0, [r0, #88]	; fField88
         c0ce0:	e1a00031 	mov	r0, r1, lsr r0
         c0ce4:	e0800080 	add	r0, r0, r0, lsl #1
         c0ce8:	e0820180 	add	r0, r2, r0, lsl #3
         c0cec:	e1a0f00e 	mov	pc, lr
    */
}

