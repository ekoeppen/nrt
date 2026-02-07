#include "Newton.h"

/**
 * Symbol: LoadFromPhysAddress
 * Address: 00018ca4
 */
void globals::LoadFromPhysAddress() {
    /*
         18ca4:	ee102f10 	mrc	15, 0, r2, cr0, cr0, {0}
         18ca8:	e202300f 	and	r3, r2, #15	; 0xf
         18cac:	e3c2200f 	bic	r2, r2, #15	; 0xf
         18cb0:	e2222441 	eor	r2, r2, #1090519040	; 0x41000000
         18cb4:	e2222701 	eor	r2, r2, #262144	; 0x40000
         18cb8:	e2322c71 	eors	r2, r2, #28928	; 0x7100
         18cbc:	13530002 	cmpne	r3, #2	; 0x2
         18cc0:	e3a02c11 	mov	r2, #4352	; 0x1100
         18cc4:	e38220b0 	orr	r2, r2, #176	; 0xb0
         18cc8:	e3823005 	orr	r3, r2, #5	; 0x5
         18ccc:	a3833008 	orrge	r3, r3, #8	; 0x8
         18cd0:	ee012f11 	mcr	15, 0, r2, cr1, cr1, {0}
         18cd4:	e5900000 	ldr	r0, [r0]
         18cd8:	ee013f11 	mcr	15, 0, r3, cr1, cr1, {0}
         18cdc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: LoadPhysicalByte
 * Address: 00018d1c
 */
void globals::LoadPhysicalByte() {
    /*
         18d1c:	ee102f10 	mrc	15, 0, r2, cr0, cr0, {0}
         18d20:	e202100f 	and	r1, r2, #15	; 0xf
         18d24:	e3c2200f 	bic	r2, r2, #15	; 0xf
         18d28:	e2222441 	eor	r2, r2, #1090519040	; 0x41000000
         18d2c:	e2222701 	eor	r2, r2, #262144	; 0x40000
         18d30:	e2322c71 	eors	r2, r2, #28928	; 0x7100
         18d34:	13510002 	cmpne	r1, #2	; 0x2
         18d38:	e3a01c11 	mov	r1, #4352	; 0x1100
         18d3c:	e38110b0 	orr	r1, r1, #176	; 0xb0
         18d40:	ee011f11 	mcr	15, 0, r1, cr1, cr1, {0}
         18d44:	e5d00000 	ldrb	r0, [r0]
         18d48:	e3811005 	orr	r1, r1, #5	; 0x5
         18d4c:	a3811008 	orrge	r1, r1, #8	; 0x8
         18d50:	ee011f11 	mcr	15, 0, r1, cr1, cr1, {0}
         18d54:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: LowLevelGetCPUType
 * Address: 0001942c
 */
void globals::LowLevelGetCPUType() {
    /*
         1942c:	e3a00001 	mov	r0, #1	; 0x1
         19430:	ee101f10 	mrc	15, 0, r1, cr0, cr0, {0}
         19434:	e3c1100f 	bic	r1, r1, #15	; 0xf
         19438:	e2211311 	eor	r1, r1, #1140850688	; 0x44000000
         1943c:	e2211801 	eor	r1, r1, #65536	; 0x10000
         19440:	e2311ca1 	eors	r1, r1, #41216	; 0xa100
         19444:	03a00003 	moveq	r0, #3	; 0x3
         19448:	ee101f10 	mrc	15, 0, r1, cr0, cr0, {0}
         1944c:	e3c1100f 	bic	r1, r1, #15	; 0xf
         19450:	e2211441 	eor	r1, r1, #1090519040	; 0x41000000
         19454:	e2211701 	eor	r1, r1, #262144	; 0x40000
         19458:	e2311c71 	eors	r1, r1, #28928	; 0x7100
         1945c:	03a00002 	moveq	r0, #2	; 0x2
         19460:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: LowLevelProcSpeed
 * Address: 00019464
 */
void globals::LowLevelProcSpeed() {
    /*
         19464:	e3a01000 	mov	r1, #0	; 0x0
         19468:	e3e020ff 	mvn	r2, #255	; 0xff
         1946c:	e3e0300f 	mvn	r3, #15	; 0xf
         19470:	e0020293 	mul	r2, r3, r2
         19474:	e2811001 	add	r1, r1, #1	; 0x1
         19478:	e1310000 	teq	r1, r0
         1947c:	1afffff9 	bne	19468 <LowLevelProcSpeed+0x4>
         19480:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: LowLevelProcRevLevel
 * Address: 00019484
 */
void globals::LowLevelProcRevLevel() {
    /*
         19484:	ee100f10 	mrc	15, 0, r0, cr0, cr0, {0}
         19488:	e200100f 	and	r1, r0, #15	; 0xf
         1948c:	e3c0000f 	bic	r0, r0, #15	; 0xf
         19490:	e2200441 	eor	r0, r0, #1090519040	; 0x41000000
         19494:	e2200701 	eor	r0, r0, #262144	; 0x40000
         19498:	e2300c71 	eors	r0, r0, #28928	; 0x7100
         1949c:	13510002 	cmpne	r1, #2	; 0x2
         194a0:	a3a00001 	movge	r0, #1	; 0x1
         194a4:	b3a00000 	movlt	r0, #0	; 0x0
         194a8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: LongOperator(unsigned char, long *, long)
 * Address: 0006555c
 */
LongOperator(unsigned char, long *, long) {
    /*
         6555c:	e1a0c00d 	mov	ip, sp
         65560:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         65564:	e24cb004 	sub	fp, ip, #4	; 0x4
         65568:	e1a04001 	mov	r4, r1
         6556c:	e20000ff 	and	r0, r0, #255	; 0xff
         65570:	e3500009 	cmp	r0, #9	; 0x9
         65574:	908ff100 	addls	pc, pc, r0, lsl #2
         65578:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         6557c:	ea00000a 	b	655ac <LongOperator(unsigned char, long *, long)+0x50>
         65580:	ea00000b 	b	655b4 <LongOperator(unsigned char, long *, long)+0x58>
         65584:	ea00000d 	b	655c0 <LongOperator(unsigned char, long *, long)+0x64>
         65588:	ea00000f 	b	655cc <LongOperator(unsigned char, long *, long)+0x70>
         6558c:	ea000011 	b	655d8 <LongOperator(unsigned char, long *, long)+0x7c>
         65590:	ea000013 	b	655e4 <LongOperator(unsigned char, long *, long)+0x88>
         65594:	ea000015 	b	655f0 <LongOperator(unsigned char, long *, long)+0x94>
         65598:	ea000017 	b	655fc <LongOperator(unsigned char, long *, long)+0xa0>
         6559c:	ea000019 	b	65608 <LongOperator(unsigned char, long *, long)+0xac>
         655a0:	e1a01002 	mov	r1, r2
         655a4:	e5940000 	ldr	r0, [r4]
         655a8:	ea000018 	b	65610 <LongOperator(unsigned char, long *, long)+0xb4>
         655ac:	e5842000 	str	r2, [r4]
         655b0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         655b4:	e5940000 	ldr	r0, [r4]
         655b8:	e1800002 	orr	r0, r0, r2
         655bc:	ea000014 	b	65614 <LongOperator(unsigned char, long *, long)+0xb8>
         655c0:	e5940000 	ldr	r0, [r4]
         655c4:	e0000002 	and	r0, r0, r2
         655c8:	ea000011 	b	65614 <LongOperator(unsigned char, long *, long)+0xb8>
         655cc:	e5940000 	ldr	r0, [r4]
         655d0:	e0200002 	eor	r0, r0, r2
         655d4:	ea00000e 	b	65614 <LongOperator(unsigned char, long *, long)+0xb8>
         655d8:	e5940000 	ldr	r0, [r4]
         655dc:	e0800002 	add	r0, r0, r2
         655e0:	ea00000b 	b	65614 <LongOperator(unsigned char, long *, long)+0xb8>
         655e4:	e5940000 	ldr	r0, [r4]
         655e8:	e0400002 	sub	r0, r0, r2
         655ec:	ea000008 	b	65614 <LongOperator(unsigned char, long *, long)+0xb8>
         655f0:	e5940000 	ldr	r0, [r4]
         655f4:	e0420000 	sub	r0, r2, r0
         655f8:	ea000005 	b	65614 <LongOperator(unsigned char, long *, long)+0xb8>
         655fc:	e5940000 	ldr	r0, [r4]
         65600:	e0000092 	mul	r0, r2, r0
         65604:	ea000002 	b	65614 <LongOperator(unsigned char, long *, long)+0xb8>
         65608:	e1a00002 	mov	r0, r2
         6560c:	e5941000 	ldr	r1, [r4]
         65610:	eb6d34ca 	bl	1bb2940 <$__rt_sdiv>
         65614:	e5840000 	str	r0, [r4]
         65618:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: LexDateLookup__FRC6RefVarT1
 * Address: 0007d0d4
 */
void globals::LexDateLookup() {
    /*
         7d0d4:	e1a0c00d 	mov	ip, sp
         7d0d8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         7d0dc:	e24cb004 	sub	fp, ip, #4	; 0x4
         7d0e0:	e1a00001 	mov	r0, r1
         7d0e4:	eb66f708 	bl	1a3ad0c <$NewASCIIString(RefVar const &)>
         7d0e8:	e1a05000 	mov	r5, r0
         7d0ec:	e1a01000 	mov	r1, r0
         7d0f0:	e59f0028 	ldr	r0, [pc, #28]	; 7d120 <LexDateLookup__FRC6RefVarT1+0x4c>
         7d0f4:	e5900000 	ldr	r0, [r0]
         7d0f8:	eb66f2fb 	bl	1a39cec <$LexLookup(AirusAParmBlock **, char *)>
         7d0fc:	eb6d1412 	bl	1bc214c <$AllocateRefHandle(long)>
         7d100:	e1a04000 	mov	r4, r0
         7d104:	e1a00005 	mov	r0, r5
         7d108:	eb6d8fe9 	bl	1be10b4 <$DisposPtr>
         7d10c:	e5945000 	ldr	r5, [r4]
         7d110:	e1a00004 	mov	r0, r4
         7d114:	eb6d1828 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7d118:	e1a00005 	mov	r0, r5
         7d11c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         7d120:	0c100f90 	ldceq	15, cr0, [r0], -#576
    */
}

/**
 * Symbol: LexTimeLookup__FRC6RefVarT1
 * Address: 0007d124
 */
void globals::LexTimeLookup() {
    /*
         7d124:	e1a0c00d 	mov	ip, sp
         7d128:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         7d12c:	e24cb004 	sub	fp, ip, #4	; 0x4
         7d130:	e1a00001 	mov	r0, r1
         7d134:	eb66f6f4 	bl	1a3ad0c <$NewASCIIString(RefVar const &)>
         7d138:	e1a05000 	mov	r5, r0
         7d13c:	e1a01000 	mov	r1, r0
         7d140:	e59f0028 	ldr	r0, [pc, #28]	; 7d170 <LexTimeLookup__FRC6RefVarT1+0x4c>
         7d144:	e5900000 	ldr	r0, [r0]
         7d148:	eb66f2e7 	bl	1a39cec <$LexLookup(AirusAParmBlock **, char *)>
         7d14c:	eb6d13fe 	bl	1bc214c <$AllocateRefHandle(long)>
         7d150:	e1a04000 	mov	r4, r0
         7d154:	e1a00005 	mov	r0, r5
         7d158:	eb6d8fd5 	bl	1be10b4 <$DisposPtr>
         7d15c:	e5945000 	ldr	r5, [r4]
         7d160:	e1a00004 	mov	r0, r4
         7d164:	eb6d1814 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7d168:	e1a00005 	mov	r0, r5
         7d16c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         7d170:	0c100f8c 	ldceq	15, cr0, [r0], -#560
    */
}

/**
 * Symbol: LexPhoneLookup__FRC6RefVarT1
 * Address: 0007d174
 */
void globals::LexPhoneLookup() {
    /*
         7d174:	e1a0c00d 	mov	ip, sp
         7d178:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         7d17c:	e24cb004 	sub	fp, ip, #4	; 0x4
         7d180:	e1a00001 	mov	r0, r1
         7d184:	eb66f6e0 	bl	1a3ad0c <$NewASCIIString(RefVar const &)>
         7d188:	e1a05000 	mov	r5, r0
         7d18c:	e1a01000 	mov	r1, r0
         7d190:	e59f0028 	ldr	r0, [pc, #28]	; 7d1c0 <LexPhoneLookup__FRC6RefVarT1+0x4c>
         7d194:	e5900000 	ldr	r0, [r0]
         7d198:	eb66f2d3 	bl	1a39cec <$LexLookup(AirusAParmBlock **, char *)>
         7d19c:	eb6d13ea 	bl	1bc214c <$AllocateRefHandle(long)>
         7d1a0:	e1a04000 	mov	r4, r0
         7d1a4:	e1a00005 	mov	r0, r5
         7d1a8:	eb6d8fc1 	bl	1be10b4 <$DisposPtr>
         7d1ac:	e5945000 	ldr	r5, [r4]
         7d1b0:	e1a00004 	mov	r0, r4
         7d1b4:	eb6d1800 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7d1b8:	e1a00005 	mov	r0, r5
         7d1bc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         7d1c0:	0c100f94 	ldceq	15, cr0, [r0], -#592
    */
}

/**
 * Symbol: LoadLexiconFrames(RefVar const &)
 * Address: 0007d52c
 */
LoadLexiconFrames(RefVar const &) {
    /*
         7d52c:	e1a0c00d 	mov	ip, sp
         7d530:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         7d534:	e24cb004 	sub	fp, ip, #4	; 0x4
         7d538:	e1a04000 	mov	r4, r0
         7d53c:	e5900000 	ldr	r0, [r0]
         7d540:	e5900000 	ldr	r0, [r0]
         7d544:	eb6d1f58 	bl	1bc52ac <$Length(long)>
         7d548:	e1a07000 	mov	r7, r0
         7d54c:	e3a06000 	mov	r6, #0	; 0x0
         7d550:	e3500000 	cmp	r0, #0	; 0x0
         7d554:	991ba9f0 	ldmlsdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         7d558:	e3a08002 	mov	r8, #2	; 0x2
         7d55c:	e24dd008 	sub	sp, sp, #8	; 0x8
         7d560:	e1a01006 	mov	r1, r6
         7d564:	e5940000 	ldr	r0, [r4]
         7d568:	e5900000 	ldr	r0, [r0]
         7d56c:	eb6d1b38 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         7d570:	eb6d12f5 	bl	1bc214c <$AllocateRefHandle(long)>
         7d574:	e58d0000 	str	r0, [sp]
         7d578:	e1a0500d 	mov	r5, sp
         7d57c:	e1a00008 	mov	r0, r8
         7d580:	eb6d12f1 	bl	1bc214c <$AllocateRefHandle(long)>
         7d584:	e58d0004 	str	r0, [sp, #4]
         7d588:	e28d0004 	add	r0, sp, #4	; 0x4
         7d58c:	e1a01005 	mov	r1, r5
         7d590:	eb66f5da 	bl	1a3ad00 <$MakePhrasalLexEntry__FRC6RefVarT1>
         7d594:	e59d0000 	ldr	r0, [sp]
         7d598:	eb6d1707 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7d59c:	e59d0004 	ldr	r0, [sp, #4]
         7d5a0:	eb6d1705 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7d5a4:	e28dd008 	add	sp, sp, #8	; 0x8
         7d5a8:	e2866001 	add	r6, r6, #1	; 0x1
         7d5ac:	e1560007 	cmp	r6, r7
         7d5b0:	3affffe9 	bcc	7d55c <LoadLexiconFrames(RefVar const &)+0x30>
         7d5b4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: LexLookup(AirusAParmBlock **, char *)
 * Address: 0007eb64
 */
LexLookup(AirusAParmBlock **, char *) {
    /*
         7eb64:	e1a0c00d 	mov	ip, sp
         7eb68:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         7eb6c:	e24cb004 	sub	fp, ip, #4	; 0x4
         7eb70:	e24dd008 	sub	sp, sp, #8	; 0x8
         7eb74:	e28d2004 	add	r2, sp, #4	; 0x4
         7eb78:	e3a03000 	mov	r3, #0	; 0x0
         7eb7c:	e58d2000 	str	r2, [sp]
         7eb80:	e92d0008 	stmdb	sp!, {r3}
         7eb84:	e28d3004 	add	r3, sp, #4	; 0x4
         7eb88:	e3a02000 	mov	r2, #0	; 0x0
         7eb8c:	eb660941 	bl	1a01098 <$VerifyString>
         7eb90:	e28dd004 	add	sp, sp, #4	; 0x4
         7eb94:	e59f0014 	ldr	r0, [pc, #14]	; 7ebb0 <LexLookup(AirusAParmBlock **, char *)+0x4c>
         7eb98:	e5900000 	ldr	r0, [r0]
         7eb9c:	e3300002 	teq	r0, #2	; 0x2
         7eba0:	13300003 	teqne	r0, #3	; 0x3
         7eba4:	03a0001a 	moveq	r0, #26	; 0x1a
         7eba8:	13a00002 	movne	r0, #2	; 0x2
         7ebac:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         7ebb0:	0c100810 	ldceq	8, cr0, [r0], -#64
    */
}

/**
 * Symbol: LeftOf__FP5TRectT1
 * Address: 000a3ebc
 */
void globals::LeftOf() {
    /*
         a3ebc:	e5902002 	ldr	r2, [r0, #2]
         a3ec0:	e1a02842 	mov	r2, r2, asr #16
         a3ec4:	e5900006 	ldr	r0, [r0, #6]
         a3ec8:	e0820840 	add	r0, r2, r0, asr #16
         a3ecc:	e1a020c0 	mov	r2, r0, asr #1
         a3ed0:	e5910002 	ldr	r0, [r1, #2]
         a3ed4:	e1a00840 	mov	r0, r0, asr #16
         a3ed8:	e5911006 	ldr	r1, [r1, #6]
         a3edc:	e0800841 	add	r0, r0, r1, asr #16
         a3ee0:	e15200c0 	cmp	r2, r0, asr #1
         a3ee4:	a3a00000 	movge	r0, #0	; 0x0
         a3ee8:	b3a00001 	movlt	r0, #1	; 0x1
         a3eec:	e20000ff 	and	r0, r0, #255	; 0xff
         a3ef0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: LocateEntry(long, sfnt_blocTable *)
 * Address: 000aebec
 */
LocateEntry(long, sfnt_blocTable *) {
    /*
         aebec:	e92d4010 	stmdb	sp!, {r4, lr}
         aebf0:	e2800902 	add	r0, r0, #32768	; 0x8000
         aebf4:	e1a00840 	mov	r0, r0, asr #16
         aebf8:	e1a00800 	mov	r0, r0, lsl #16
         aebfc:	e1a00840 	mov	r0, r0, asr #16
         aec00:	e2812008 	add	r2, r1, #8	; 0x8
         aec04:	e3a03000 	mov	r3, #0	; 0x0
         aec08:	e3a0e801 	mov	lr, #65536	; 0x10000
         aec0c:	e3a0c000 	mov	ip, #0	; 0x0
         aec10:	e5b14004 	ldr	r4, [r1, #4]!
         aec14:	e3540000 	cmp	r4, #0	; 0x0
         aec18:	9a000010 	bls	aec60 <LocateEntry(long, sfnt_blocTable *)+0x74>
         aec1c:	e5d2102e 	ldrb	r1, [r2, #46]
         aec20:	e3310001 	teq	r1, #1	; 0x1
         aec24:	1a00000a 	bne	aec54 <LocateEntry(long, sfnt_blocTable *)+0x68>
         aec28:	e5d2102c 	ldrb	r1, [r2, #44]
         aec2c:	e0401001 	sub	r1, r0, r1
         aec30:	e3510000 	cmp	r1, #0	; 0x0
         aec34:	01a03002 	moveq	r3, r2
         aec38:	0a000008 	beq	aec60 <LocateEntry(long, sfnt_blocTable *)+0x74>
         aec3c:	b2611000 	rsblt	r1, r1, #0	; 0x0
         aec40:	e151000e 	cmp	r1, lr
         aec44:	aa000005 	bge	aec60 <LocateEntry(long, sfnt_blocTable *)+0x74>
         aec48:	e1a0e001 	mov	lr, r1
         aec4c:	e1a03002 	mov	r3, r2
         aec50:	e2822030 	add	r2, r2, #48	; 0x30
         aec54:	e28cc001 	add	ip, ip, #1	; 0x1
         aec58:	e154000c 	cmp	r4, ip
         aec5c:	8affffee 	bhi	aec1c <LocateEntry(long, sfnt_blocTable *)+0x30>
         aec60:	e1a00003 	mov	r0, r3
         aec64:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: LoadHighROMPackages(unsigned char)
 * Address: 000e6e64
 */
LoadHighROMPackages(unsigned char) {
    /*
         e6e64:	e1a0c00d 	mov	ip, sp
         e6e68:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         e6e6c:	e24cb004 	sub	fp, ip, #4	; 0x4
         e6e70:	e24dd004 	sub	sp, sp, #4	; 0x4
         e6e74:	e20070ff 	and	r7, r0, #255	; 0xff
         e6e78:	e3a05000 	mov	r5, #0	; 0x0
         e6e7c:	e24d006c 	sub	r0, sp, #108	; 0x6c
         e6e80:	e58d0000 	str	r0, [sp]
         e6e84:	e59f819c 	ldr	r8, [pc, #19c]	; e7028 <LoadHighROMPackages(unsigned char)+0x1c4>
         e6e88:	e1a00005 	mov	r0, r5
         e6e8c:	eb6c6881 	bl	1c01098 <$GetPackageList>
         e6e90:	e1b0a000 	movs	sl, r0
         e6e94:	0a00005f 	beq	e7018 <LoadHighROMPackages(unsigned char)+0x1b4>
         e6e98:	e24dd008 	sub	sp, sp, #8	; 0x8
         e6e9c:	e3a06000 	mov	r6, #0	; 0x0
         e6ea0:	e3a00000 	mov	r0, #0	; 0x0
         e6ea4:	e5cd0001 	strb	r0, [sp, #1]
         e6ea8:	e5cd0003 	strb	r0, [sp, #3]
         e6eac:	e5cd0002 	strb	r0, [sp, #2]
         e6eb0:	e3a01001 	mov	r1, #1	; 0x1
         e6eb4:	e5cd1000 	strb	r1, [sp]
         e6eb8:	e3a0e000 	mov	lr, #0	; 0x0
         e6ebc:	e52de06c 	str	lr, [sp, -#108]!
         e6ec0:	e59d0074 	ldr	r0, [sp, #116]
         e6ec4:	eb6b2eaa 	bl	1bb2974 <$setjmp>
         e6ec8:	e3300000 	teq	r0, #0	; 0x0
         e6ecc:	1a000056 	bne	e702c <LoadHighROMPackages(unsigned char)+0x1c8>
         e6ed0:	e1a0000d 	mov	r0, sp
         e6ed4:	eb6be468 	bl	1be007c <$AddExceptionHandler>
         e6ed8:	e24dd008 	sub	sp, sp, #8	; 0x8
         e6edc:	e08a4006 	add	r4, sl, r6
         e6ee0:	e1a09004 	mov	r9, r4
         e6ee4:	e3370000 	teq	r7, #0	; 0x0
         e6ee8:	0a000002 	beq	e6ef8 <LoadHighROMPackages(unsigned char)+0x94>
         e6eec:	eb6bb2b8 	bl	1bd39d4 <$GetGlobals>
         e6ef0:	e3a01000 	mov	r1, #0	; 0x0
         e6ef4:	eb6b19ed 	bl	1bad6b0 <TForkWorld::$Fork(TForkWorld *)>
         e6ef8:	e3a03001 	mov	r3, #1	; 0x1
         e6efc:	e40d4090 	str	r4, [sp], -#144
         e6f00:	e92d0008 	stmdb	sp!, {r3}
         e6f04:	eb6bb2b2 	bl	1bd39d4 <$GetGlobals>
         e6f08:	eb6c054b 	bl	1be843c <TAppWorld::$GetMyPort(void)>
         e6f0c:	e5903000 	ldr	r3, [r0]
         e6f10:	e92d0008 	stmdb	sp!, {r3}
         e6f14:	eb6bb2ae 	bl	1bd39d4 <$GetGlobals>
         e6f18:	eb6c0547 	bl	1be843c <TAppWorld::$GetMyPort(void)>
         e6f1c:	e5903000 	ldr	r3, [r0]
         e6f20:	e92d0008 	stmdb	sp!, {r3}
         e6f24:	e28d309c 	add	r3, sp, #156	; 0x9c
         e6f28:	e28d0014 	add	r0, sp, #20	; 0x14
         e6f2c:	e28d2e11 	add	r2, sp, #272	; 0x110
         e6f30:	e8920006 	ldmia	r2, {r1, r2}
         e6f34:	eb682637 	bl	1af0818 <TPkBeginLoadEvent::$__ct(SourceType, PartSource const &, unsigned long, unsigned long, unsigned char)>
         e6f38:	e28dd00c 	add	sp, sp, #12	; 0xc
         e6f3c:	eb6bc322 	bl	1bd7bcc <$PackageManagerPortId(void)>
         e6f40:	e1a01000 	mov	r1, r0
         e6f44:	e1a0000d 	mov	r0, sp
         e6f48:	eb6b99df 	bl	1bcd6cc <TUPort::$__ct(unsigned long)>
         e6f4c:	e3370000 	teq	r7, #0	; 0x0
         e6f50:	0a000001 	beq	e6f5c <LoadHighROMPackages(unsigned char)+0xf8>
         e6f54:	eb6bb29e 	bl	1bd39d4 <$GetGlobals>
         e6f58:	eb6b1e00 	bl	1bae760 <TForkWorld::$ReleaseMutex(void)>
         e6f5c:	e3a01000 	mov	r1, #0	; 0x0
         e6f60:	e5980000 	ldr	r0, [r8]
         e6f64:	eb6b9dfa 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
         e6f68:	e28d0008 	add	r0, sp, #8	; 0x8
         e6f6c:	e3a02000 	mov	r2, #0	; 0x0
         e6f70:	e3a0c000 	mov	ip, #0	; 0x0
         e6f74:	e3a0e000 	mov	lr, #0	; 0x0
         e6f78:	e3a03000 	mov	r3, #0	; 0x0
         e6f7c:	e3a01084 	mov	r1, #132	; 0x84
         e6f80:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         e6f84:	e1a0300e 	mov	r3, lr
         e6f88:	e1a0100c 	mov	r1, ip
         e6f8c:	e3a00084 	mov	r0, #132	; 0x84
         e6f90:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         e6f94:	e28d3028 	add	r3, sp, #40	; 0x28
         e6f98:	e92d0008 	stmdb	sp!, {r3}
         e6f9c:	e28d30b0 	add	r3, sp, #176	; 0xb0
         e6fa0:	e28d0024 	add	r0, sp, #36	; 0x24
         e6fa4:	e3a02002 	mov	r2, #2	; 0x2
         e6fa8:	e3a01001 	mov	r1, #1	; 0x1
         e6fac:	eb6bcf66 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         e6fb0:	e28dd024 	add	sp, sp, #36	; 0x24
         e6fb4:	e1a04000 	mov	r4, r0
         e6fb8:	e5980000 	ldr	r0, [r8]
         e6fbc:	eb6bcb35 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
         e6fc0:	e3370000 	teq	r7, #0	; 0x0
         e6fc4:	0a000001 	beq	e6fd0 <LoadHighROMPackages(unsigned char)+0x16c>
         e6fc8:	eb6bb281 	bl	1bd39d4 <$GetGlobals>
         e6fcc:	eb6b1188 	bl	1bab5f4 <TForkWorld::$AcquireMutex(void)>
         e6fd0:	e3340000 	teq	r4, #0	; 0x0
         e6fd4:	059d4014 	ldreq	r4, [sp, #20]
         e6fd8:	e1a0000d 	mov	r0, sp
         e6fdc:	e3a01000 	mov	r1, #0	; 0x0
         e6fe0:	eb6b9dcf 	bl	1bce724 <TUObject::$__dt(void)>
         e6fe4:	e28dd098 	add	sp, sp, #152	; 0x98
         e6fe8:	e1a0000d 	mov	r0, sp
         e6fec:	eb6be831 	bl	1be10b8 <$ExitHandler>
         e6ff0:	e28dd06c 	add	sp, sp, #108	; 0x6c
         e6ff4:	e5b9001c 	ldr	r0, [r9, #28]!
         e6ff8:	e0806006 	add	r6, r0, r6
         e6ffc:	e284cda2 	add	ip, r4, #10368	; 0x2880
         e7000:	e37c0027 	cmn	ip, #39	; 0x27
         e7004:	1284cda2 	addne	ip, r4, #10368	; 0x2880
         e7008:	137c0022 	cmnne	ip, #34	; 0x22
         e700c:	13340000 	teqne	r4, #0	; 0x0
         e7010:	0affffa8 	beq	e6eb8 <LoadHighROMPackages(unsigned char)+0x54>
         e7014:	e28dd008 	add	sp, sp, #8	; 0x8
         e7018:	e2855001 	add	r5, r5, #1	; 0x1
         e701c:	e3550004 	cmp	r5, #4	; 0x4
         e7020:	3affff98 	bcc	e6e88 <LoadHighROMPackages(unsigned char)+0x24>
         e7024:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         e7028:	0c1016dc 	ldceq	6, cr1, [r0], -#880
         e702c:	e1a0000d 	mov	r0, sp
         e7030:	eb6bec47 	bl	1be2154 <$NextHandler>
         e7034:	eafffffc 	b	e702c <LoadHighROMPackages(unsigned char)+0x1c8>
    */
}

/**
 * Symbol: LoadHighROMDriverPackages(void)
 * Address: 000e7038
 */
LoadHighROMDriverPackages(void) {
    /*
         e7038:	e3a00000 	mov	r0, #0	; 0x0
         e703c:	ea68a607 	b	1b10860 <$LoadHighROMPackages(unsigned char)>
    */
}

/**
 * Symbol: LoadHighROMFramesPackages(void)
 * Address: 000e7040
 */
LoadHighROMFramesPackages(void) {
    /*
         e7040:	e3a00001 	mov	r0, #1	; 0x1
         e7044:	ea68a605 	b	1b10860 <$LoadHighROMPackages(unsigned char)>
    */
}

/**
 * Symbol: LongDateString__FUlT1PUsT1RC6RefVar
 * Address: 000ec31c
 */
void globals::LongDateString() {
    /*
         ec31c:	e1a0c00d 	mov	ip, sp
         ec320:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         ec324:	e24cb004 	sub	fp, ip, #4	; 0x4
         ec328:	e1a07000 	mov	r7, r0
         ec32c:	e1a06001 	mov	r6, r1
         ec330:	e1a04002 	mov	r4, r2
         ec334:	e1a05003 	mov	r5, r3
         ec338:	e59b8004 	ldr	r8, [fp, #4]
         ec33c:	e24dd028 	sub	sp, sp, #40	; 0x28
         ec340:	e1a0000d 	mov	r0, sp
         ec344:	eb6c4afc 	bl	1bfef3c <TDate::$__ct(void)>
         ec348:	e3a00000 	mov	r0, #0	; 0x0
         ec34c:	e5c40001 	strb	r0, [r4, #1]
         ec350:	e5c40000 	strb	r0, [r4]
         ec354:	e1a01007 	mov	r1, r7
         ec358:	e1a0000d 	mov	r0, sp
         ec35c:	eb6c4afb 	bl	1bfef50 <TDate::$InitWithMinutes(unsigned long)>
         ec360:	e1a01008 	mov	r1, r8
         ec364:	e1a0000d 	mov	r0, sp
         ec368:	eb6c4b00 	bl	1bfef70 <TDate::$SetFormatResource(RefVar const &)>
         ec36c:	e1a03005 	mov	r3, r5
         ec370:	e1a02004 	mov	r2, r4
         ec374:	e1a01006 	mov	r1, r6
         ec378:	e1a0000d 	mov	r0, sp
         ec37c:	eb6c4af4 	bl	1bfef54 <TDate::$LongDateString(unsigned long, unsigned short *, unsigned long)>
         ec380:	e59d0024 	ldr	r0, [sp, #36]
         ec384:	eb6b5b8c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ec388:	e59d0020 	ldr	r0, [sp, #32]
         ec38c:	eb6b5b8a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ec390:	e59d001c 	ldr	r0, [sp, #28]
         ec394:	eb6b5b88 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ec398:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: LEquiesant
 * Address: 000ffd60
 */
void globals::LEquiesant() {
    /*
         ffd60:	e1a0c00d 	mov	ip, sp
         ffd64:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         ffd68:	e24cb004 	sub	fp, ip, #4	; 0x4
         ffd6c:	e59f4020 	ldr	r4, [pc, #20]	; ffd94 <LEquiesant+0x34>
         ffd70:	e5940000 	ldr	r0, [r4]
         ffd74:	e3300000 	teq	r0, #0	; 0x0
         ffd78:	1b6b4af6 	blne	1bd2958 <$free>
         ffd7c:	e3a00000 	mov	r0, #0	; 0x0
         ffd80:	e5840000 	str	r0, [r4]
         ffd84:	e5840004 	str	r0, [r4, #4]
         ffd88:	e5840008 	str	r0, [r4, #8]
         ffd8c:	e5a4000c 	str	r0, [r4, #12]!
         ffd90:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         ffd94:	0c101090 	ldceq	0, cr1, [r0], -#576
    */
}

/**
 * Symbol: LELangNodeNumOut
 * Address: 000ffd98
 */
void globals::LELangNodeNumOut() {
    /*
         ffd98:	e1a0c00d 	mov	ip, sp
         ffd9c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         ffda0:	e24cb004 	sub	fp, ip, #4	; 0x4
         ffda4:	e1a05000 	mov	r5, r0
         ffda8:	e1a04001 	mov	r4, r1
         ffdac:	e2807004 	add	r7, r0, #4	; 0x4
         ffdb0:	e59f60f0 	ldr	r6, [pc, #f0]	; ffea8 <LELangNodeNumOut+0x110>
         ffdb4:	e5960000 	ldr	r0, [r6]
         ffdb8:	e3300000 	teq	r0, #0	; 0x0
         ffdbc:	1a00000e 	bne	ffdfc <LELangNodeNumOut+0x64>
         ffdc0:	e59f10e4 	ldr	r1, [pc, #e4]	; ffeac <LELangNodeNumOut+0x114>
         ffdc4:	e3a00014 	mov	r0, #20	; 0x14
         ffdc8:	e2800b01 	add	r0, r0, #1024	; 0x400
         ffdcc:	eb6b88da 	bl	1be213c <$NewNamedPtr>
         ffdd0:	e59f80d8 	ldr	r8, [pc, #d8]	; ffeb0 <LELangNodeNumOut+0x118>
         ffdd4:	e5880000 	str	r0, [r8]
         ffdd8:	e3300000 	teq	r0, #0	; 0x0
         ffddc:	1a000005 	bne	ffdf8 <LELangNodeNumOut+0x60>
         ffde0:	e59f00cc 	ldr	r0, [pc, #cc]	; ffeb4 <LELangNodeNumOut+0x11c>
         ffde4:	e5900000 	ldr	r0, [r0]
         ffde8:	e28f1f32 	add	r1, pc, #200	; 0xc8
         ffdec:	e3a02000 	mov	r2, #0	; 0x0
         ffdf0:	eb6b8ce9 	bl	1be319c <$Throw>
         ffdf4:	e5980000 	ldr	r0, [r8]
         ffdf8:	e5860000 	str	r0, [r6]
         ffdfc:	e3a00000 	mov	r0, #0	; 0x0
         ffe00:	e3340102 	teq	r4, #-2147483648	; 0x80000000
         ffe04:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         ffe08:	e3c44102 	bic	r4, r4, #-2147483648	; 0x80000000
         ffe0c:	e5d71001 	ldrb	r1, [r7, #1]
         ffe10:	e2011007 	and	r1, r1, #7	; 0x7
         ffe14:	e3310001 	teq	r1, #1	; 0x1
         ffe18:	0a000028 	beq	ffec0 <LELangNodeNumOut+0x128>
         ffe1c:	e3310003 	teq	r1, #3	; 0x3
         ffe20:	13310007 	teqne	r1, #7	; 0x7
         ffe24:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         ffe28:	e2866008 	add	r6, r6, #8	; 0x8
         ffe2c:	e8860030 	stmia	r6, {r4, r5}
         ffe30:	e2466008 	sub	r6, r6, #8	; 0x8
         ffe34:	e5d70001 	ldrb	r0, [r7, #1]
         ffe38:	e1a0e220 	mov	lr, r0, lsr #4
         ffe3c:	e3a00000 	mov	r0, #0	; 0x0
         ffe40:	e59fc074 	ldr	ip, [pc, #74]	; ffebc <LELangNodeNumOut+0x124>
         ffe44:	e1a01000 	mov	r1, r0
         ffe48:	e2800001 	add	r0, r0, #1	; 0x1
         ffe4c:	e5962000 	ldr	r2, [r6]
         ffe50:	e7824101 	str	r4, [r2, r1, lsl #2]
         ffe54:	e0871004 	add	r1, r7, r4
         ffe58:	e2813001 	add	r3, r1, #1	; 0x1
         ffe5c:	e5d32000 	ldrb	r2, [r3]
         ffe60:	e21210c0 	ands	r1, r2, #192	; 0xc0
         ffe64:	0a00003a 	beq	fff54 <LELangNodeNumOut+0x1bc>
         ffe68:	e7dc1341 	ldrb	r1, [ip, r1, asr #6]
         ffe6c:	e0844001 	add	r4, r4, r1
         ffe70:	e2844002 	add	r4, r4, #2	; 0x2
         ffe74:	e3120010 	tst	r2, #16	; 0x10
         ffe78:	1084400e 	addne	r4, r4, lr
         ffe7c:	e202200f 	and	r2, r2, #15	; 0xf
         ffe80:	e3510000 	cmp	r1, #0	; 0x0
         ffe84:	da000005 	ble	ffea0 <LELangNodeNumOut+0x108>
         ffe88:	e5f35001 	ldrb	r5, [r3, #1]!
         ffe8c:	e1852402 	orr	r2, r5, r2, lsl #8
         ffe90:	e2411001 	sub	r1, r1, #1	; 0x1
         ffe94:	e20110ff 	and	r1, r1, #255	; 0xff
         ffe98:	e3510000 	cmp	r1, #0	; 0x0
         ffe9c:	cafffff9 	bgt	ffe88 <LELangNodeNumOut+0xf0>
         ffea0:	e0844002 	add	r4, r4, r2
         ffea4:	eaffffe6 	b	ffe44 <LELangNodeNumOut+0xac>
         ffea8:	0c101090 	ldceq	0, cr1, [r0], -#576
         ffeac:	526f434b 	rsbpl	r4, pc, #738197505	; 0x2c000001
         ffeb0:	0c101950 	ldceq	9, cr1, [r0], -#320
         ffeb4:	003712cc 	eoreqs	r1, r7, ip, asr #5
         ffeb8:	00000000 	andeq	r0, r0, r0
         ffebc:	00371e94 	mlaeqs	r7, r4, lr, r1
         ffec0:	e3a00000 	mov	r0, #0	; 0x0
         ffec4:	e2866008 	add	r6, r6, #8	; 0x8
         ffec8:	e8860030 	stmia	r6, {r4, r5}
         ffecc:	e2466008 	sub	r6, r6, #8	; 0x8
         ffed0:	e3340000 	teq	r4, #0	; 0x0
         ffed4:	0a00001e 	beq	fff54 <LELangNodeNumOut+0x1bc>
         ffed8:	e7d71004 	ldrb	r1, [r7, r4]
         ffedc:	e0872401 	add	r2, r7, r1, lsl #8
         ffee0:	e0873004 	add	r3, r7, r4
         ffee4:	e5d31001 	ldrb	r1, [r3, #1]
         ffee8:	e0822001 	add	r2, r2, r1
         ffeec:	e3a01000 	mov	r1, #0	; 0x0
         ffef0:	e5d2c000 	ldrb	ip, [r2]
         ffef4:	e33c0000 	teq	ip, #0	; 0x0
         ffef8:	0a000009 	beq	fff24 <LELangNodeNumOut+0x18c>
         ffefc:	e7d2c001 	ldrb	ip, [r2, r1]
         fff00:	e184ec0c 	orr	lr, r4, ip, lsl #24
         fff04:	e1a0c000 	mov	ip, r0
         fff08:	e2800001 	add	r0, r0, #1	; 0x1
         fff0c:	e5965000 	ldr	r5, [r6]
         fff10:	e785e10c 	str	lr, [r5, ip, lsl #2]
         fff14:	e2811001 	add	r1, r1, #1	; 0x1
         fff18:	e7d2c001 	ldrb	ip, [r2, r1]
         fff1c:	e33c0000 	teq	ip, #0	; 0x0
         fff20:	1afffff5 	bne	ffefc <LELangNodeNumOut+0x164>
         fff24:	e5d31002 	ldrb	r1, [r3, #2]
         fff28:	e3110004 	tst	r1, #4	; 0x4
         fff2c:	13a04000 	movne	r4, #0	; 0x0
         fff30:	1a000005 	bne	fff4c <LELangNodeNumOut+0x1b4>
         fff34:	e5d72001 	ldrb	r2, [r7, #1]
         fff38:	e0842242 	add	r2, r4, r2, asr #4
         fff3c:	e3110002 	tst	r1, #2	; 0x2
         fff40:	03a01005 	moveq	r1, #5	; 0x5
         fff44:	13a01003 	movne	r1, #3	; 0x3
         fff48:	e0824001 	add	r4, r2, r1
         fff4c:	e3340000 	teq	r4, #0	; 0x0
         fff50:	1affffe0 	bne	ffed8 <LELangNodeNumOut+0x140>
         fff54:	e5a60004 	str	r0, [r6, #4]!
         fff58:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: LBLength(char *)
 * Address: 000fff5c
 */
LBLength(char *) {
    /*
         fff5c:	e5900000 	ldr	r0, [r0]
         fff60:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: LBDataPtr(char *)
 * Address: 000fff64
 */
LBDataPtr(char *) {
    /*
         fff64:	e1a0c00d 	mov	ip, sp
         fff68:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         fff6c:	e24cb004 	sub	fp, ip, #4	; 0x4
         fff70:	e1a04000 	mov	r4, r0
         fff74:	eb6514e0 	bl	1a452fc <LBData::$GetStore( const(void))>
         fff78:	e1b05000 	movs	r5, r0
         fff7c:	1a000004 	bne	fff94 <LBDataPtr(char *)+0x30>
         fff80:	e59f103c 	ldr	r1, [pc, #3c]	; fffc4 <LBDataPtr(char *)+0x60>
         fff84:	e59f003c 	ldr	r0, [pc, #3c]	; fffc8 <LBDataPtr(char *)+0x64>
         fff88:	e5900000 	ldr	r0, [r0]
         fff8c:	e3a02000 	mov	r2, #0	; 0x0
         fff90:	eb6b8c81 	bl	1be319c <$Throw>
         fff94:	e5940010 	ldr	r0, [r4, #16]
         fff98:	e3300000 	teq	r0, #0	; 0x0
         fff9c:	1a000006 	bne	fffbc <LBDataPtr(char *)+0x58>
         fffa0:	e5942004 	ldr	r2, [r4, #4]
         fffa4:	e2840010 	add	r0, r4, #16	; 0x10
         fffa8:	e3a03000 	mov	r3, #0	; 0x0
         fffac:	e5b5107c 	ldr	r1, [r5, #124]!
         fffb0:	eb684e90 	bl	1b139f8 <$MapLargeObject(unsigned long *, TStore *, unsigned long, unsigned char)>
         fffb4:	e3300000 	teq	r0, #0	; 0x0
         fffb8:	1b64f39a 	blne	1a3ce28 <$_OSErr(long)>
         fffbc:	e5b40010 	ldr	r0, [r4, #16]!
         fffc0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         fffc4:	ffff446f 	swinv	0x00ff446f
         fffc8:	003712fc 	ldreqsh	r1, [r7], -ip
    */
}

/**
 * Symbol: LBMark(char *)
 * Address: 000fffcc
 */
LBMark(char *) {
    /*
         fffcc:	e5900008 	ldr	r0, [r0, #8]
         fffd0:	ea6b0c7a 	b	1bc31c0 <$DIYGCMark(long)>
    */
}

/**
 * Symbol: LBUpdate(char *)
 * Address: 000fffd4
 */
LBUpdate(char *) {
    /*
         fffd4:	e1a0c00d 	mov	ip, sp
         fffd8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         fffdc:	e24cb004 	sub	fp, ip, #4	; 0x4
         fffe0:	e1a04000 	mov	r4, r0
         fffe4:	e5900008 	ldr	r0, [r0, #8]
         fffe8:	eb6b0c77 	bl	1bc31cc <$DIYGCUpdate(long)>
         fffec:	e5a40008 	str	r0, [r4, #8]!
         ffff0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: LoadLargeBinary(TStoreWrapper *, unsigned long, long)
 * Address: 0010049c
 */
LoadLargeBinary(TStoreWrapper *, unsigned long, long) {
    /*
        10049c:	e1a0c00d 	mov	ip, sp
        1004a0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1004a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1004a8:	e1a04000 	mov	r4, r0
        1004ac:	e1a05001 	mov	r5, r1
        1004b0:	e1a06002 	mov	r6, r2
        1004b4:	e24dd004 	sub	sp, sp, #4	; 0x4
        1004b8:	eb651380 	bl	1a452c0 <$FindLargeBinaryInCache(TStoreWrapper *, unsigned long)>
        1004bc:	eb6b0722 	bl	1bc214c <$AllocateRefHandle(long)>
        1004c0:	e58d0000 	str	r0, [sp]
        1004c4:	e5900000 	ldr	r0, [r0]
        1004c8:	e3300002 	teq	r0, #2	; 0x2
        1004cc:	1a00002b 	bne	100580 <LoadLargeBinary(TStoreWrapper *, unsigned long, long)+0xe4>
        1004d0:	e24dd004 	sub	sp, sp, #4	; 0x4
        1004d4:	e1a02005 	mov	r2, r5
        1004d8:	e1a0000d 	mov	r0, sp
        1004dc:	e3a03000 	mov	r3, #0	; 0x0
        1004e0:	e594107c 	ldr	r1, [r4, #124]
        1004e4:	eb684d43 	bl	1b139f8 <$MapLargeObject(unsigned long *, TStore *, unsigned long, unsigned char)>
        1004e8:	e3300000 	teq	r0, #0	; 0x0
        1004ec:	1b64f24d 	blne	1a3ce28 <$_OSErr(long)>
        1004f0:	e24dd004 	sub	sp, sp, #4	; 0x4
        1004f4:	e59d0004 	ldr	r0, [sp, #4]
        1004f8:	eb682c38 	bl	1b0b5e0 <$ObjectSize(unsigned long)>
        1004fc:	e1a07000 	mov	r7, r0
        100500:	e1a01006 	mov	r1, r6
        100504:	e1a00004 	mov	r0, r4
        100508:	eb65071a 	bl	1a42178 <TStoreWrapper::$ReferenceToSymbol(long)>
        10050c:	eb6b070e 	bl	1bc214c <$AllocateRefHandle(long)>
        100510:	e58d0000 	str	r0, [sp]
        100514:	e1a0000d 	mov	r0, sp
        100518:	e1a03004 	mov	r3, r4
        10051c:	e1a02007 	mov	r2, r7
        100520:	e1a01006 	mov	r1, r6
        100524:	eb651778 	bl	1a4630c <$AllocateLargeBinary__FRC6RefVarlT2P13TStoreWrapper>
        100528:	e59d1008 	ldr	r1, [sp, #8]
        10052c:	e5810000 	str	r0, [r1]
        100530:	e59d0000 	ldr	r0, [sp]
        100534:	eb6b0b20 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        100538:	e24dd004 	sub	sp, sp, #4	; 0x4
        10053c:	e59d000c 	ldr	r0, [sp, #12]
        100540:	e5900000 	ldr	r0, [r0]
        100544:	eb6b136a 	bl	1bc52f4 <$ObjectPtr(long)>
        100548:	e2800010 	add	r0, r0, #16	; 0x10
        10054c:	e59d1008 	ldr	r1, [sp, #8]
        100550:	e5a05004 	str	r5, [r0, #4]!
        100554:	e580100c 	str	r1, [r0, #12]
        100558:	e59f0034 	ldr	r0, [pc, #34]	; 100594 <LoadLargeBinary(TStoreWrapper *, unsigned long, long)+0xf8>
        10055c:	e5900020 	ldr	r0, [r0, #32]
        100560:	eb6b06f9 	bl	1bc214c <$AllocateRefHandle(long)>
        100564:	e58d0000 	str	r0, [sp]
        100568:	e1a0000d 	mov	r0, sp
        10056c:	e28d100c 	add	r1, sp, #12	; 0xc
        100570:	eb6506f6 	bl	1a42150 <$PutEntryIntoCache__FRC6RefVarT1>
        100574:	e59d0000 	ldr	r0, [sp]
        100578:	eb6b0b0f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10057c:	e28dd00c 	add	sp, sp, #12	; 0xc
        100580:	e59d0000 	ldr	r0, [sp]
        100584:	e5904000 	ldr	r4, [r0]
        100588:	eb6b0b0b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10058c:	e1a00004 	mov	r0, r4
        100590:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        100594:	0c1010a0 	ldceq	0, cr1, [r0], -#640
    */
}

/**
 * Symbol: LBSetLength(char *, long)
 * Address: 0010073c
 */
LBSetLength(char *, long) {
    /*
        10073c:	e1a0c00d 	mov	ip, sp
        100740:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        100744:	e24cb004 	sub	fp, ip, #4	; 0x4
        100748:	e1a04001 	mov	r4, r1
        10074c:	e1a05000 	mov	r5, r0
        100750:	eb6512e9 	bl	1a452fc <LBData::$GetStore( const(void))>
        100754:	e3300000 	teq	r0, #0	; 0x0
        100758:	1a000004 	bne	100770 <LBSetLength(char *, long)+0x34>
        10075c:	e59f1030 	ldr	r1, [pc, #30]	; 100794 <LBSetLength(char *, long)+0x58>
        100760:	e59f0030 	ldr	r0, [pc, #30]	; 100798 <LBSetLength(char *, long)+0x5c>
        100764:	e5900000 	ldr	r0, [r0]
        100768:	e3a02000 	mov	r2, #0	; 0x0
        10076c:	eb6b8a8a 	bl	1be319c <$Throw>
        100770:	e5951010 	ldr	r1, [r5, #16]
        100774:	e2850010 	add	r0, r5, #16	; 0x10
        100778:	e1a02004 	mov	r2, r4
        10077c:	e3e03000 	mvn	r3, #0	; 0x0
        100780:	eb68509f 	bl	1b14a04 <$ResizeLargeObject__FPUlUllT3>
        100784:	e3300000 	teq	r0, #0	; 0x0
        100788:	1b64f1a6 	blne	1a3ce28 <$_OSErr(long)>
        10078c:	e5854000 	str	r4, [r5]
        100790:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        100794:	ffff446f 	swinv	0x00ff446f
        100798:	003712fc 	ldreqsh	r1, [r7], -ip
    */
}

/**
 * Symbol: LargeBinariesStoreRemoved(TStoreWrapper *)
 * Address: 00100a24
 */
LargeBinariesStoreRemoved(TStoreWrapper *) {
    /*
        100a24:	e1a0c00d 	mov	ip, sp
        100a28:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        100a2c:	e24cb004 	sub	fp, ip, #4	; 0x4
        100a30:	e1a04000 	mov	r4, r0
        100a34:	e3a06000 	mov	r6, #0	; 0x0
        100a38:	e59f70e0 	ldr	r7, [pc, #e0]	; 100b20 <LargeBinariesStoreRemoved(TStoreWrapper *)+0xfc>
        100a3c:	e5970020 	ldr	r0, [r7, #32]
        100a40:	eb6b1219 	bl	1bc52ac <$Length(long)>
        100a44:	e1a0a000 	mov	sl, r0
        100a48:	e3a00002 	mov	r0, #2	; 0x2
        100a4c:	eb6b05be 	bl	1bc214c <$AllocateRefHandle(long)>
        100a50:	e1a08000 	mov	r8, r0
        100a54:	e3a05000 	mov	r5, #0	; 0x0
        100a58:	e35a0000 	cmp	sl, #0	; 0x0
        100a5c:	da000017 	ble	100ac0 <LargeBinariesStoreRemoved(TStoreWrapper *)+0x9c>
        100a60:	e1a01005 	mov	r1, r5
        100a64:	e5970020 	ldr	r0, [r7, #32]
        100a68:	eb6b0df9 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        100a6c:	e5880000 	str	r0, [r8]
        100a70:	e3300002 	teq	r0, #2	; 0x2
        100a74:	0a00000e 	beq	100ab4 <LargeBinariesStoreRemoved(TStoreWrapper *)+0x90>
        100a78:	eb6b121d 	bl	1bc52f4 <$ObjectPtr(long)>
        100a7c:	e2800010 	add	r0, r0, #16	; 0x10
        100a80:	e1a09000 	mov	r9, r0
        100a84:	eb65121c 	bl	1a452fc <LBData::$GetStore( const(void))>
        100a88:	e1300004 	teq	r0, r4
        100a8c:	1a000008 	bne	100ab4 <LargeBinariesStoreRemoved(TStoreWrapper *)+0x90>
        100a90:	e1a00009 	mov	r0, r9
        100a94:	eb658181 	bl	1a610a0 <$RegisterLargeBinaryForDeclawing(LBData const *)>
        100a98:	e3300000 	teq	r0, #0	; 0x0
        100a9c:	03360000 	teqeq	r6, #0	; 0x0
        100aa0:	13a00001 	movne	r0, #1	; 0x1
        100aa4:	03a00000 	moveq	r0, #0	; 0x0
        100aa8:	e20060ff 	and	r6, r0, #255	; 0xff
        100aac:	e3a00000 	mov	r0, #0	; 0x0
        100ab0:	e5a90010 	str	r0, [r9, #16]!
        100ab4:	e2855001 	add	r5, r5, #1	; 0x1
        100ab8:	e155000a 	cmp	r5, sl
        100abc:	baffffe7 	blt	100a60 <LargeBinariesStoreRemoved(TStoreWrapper *)+0x3c>
        100ac0:	e5970024 	ldr	r0, [r7, #36]
        100ac4:	e3a05000 	mov	r5, #0	; 0x0
        100ac8:	e5909000 	ldr	r9, [r0]
        100acc:	e3590000 	cmp	r9, #0	; 0x0
        100ad0:	da00000d 	ble	100b0c <LargeBinariesStoreRemoved(TStoreWrapper *)+0xe8>
        100ad4:	e1a01005 	mov	r1, r5
        100ad8:	e5970024 	ldr	r0, [r7, #36]
        100adc:	eb6bb2ec 	bl	1bed694 <CDynamicArray::$SafeElementPtrAt(long)>
        100ae0:	e1a0a000 	mov	sl, r0
        100ae4:	e5900000 	ldr	r0, [r0]
        100ae8:	e1300004 	teq	r0, r4
        100aec:	1a000003 	bne	100b00 <LargeBinariesStoreRemoved(TStoreWrapper *)+0xdc>
        100af0:	e594007c 	ldr	r0, [r4, #124]
        100af4:	eb684bb1 	bl	1b139c0 <$AbortObjects(TStore *)>
        100af8:	e3a00000 	mov	r0, #0	; 0x0
        100afc:	e58a0000 	str	r0, [sl]
        100b00:	e2855001 	add	r5, r5, #1	; 0x1
        100b04:	e1550009 	cmp	r5, r9
        100b08:	bafffff1 	blt	100ad4 <LargeBinariesStoreRemoved(TStoreWrapper *)+0xb0>
        100b0c:	e3360000 	teq	r6, #0	; 0x0
        100b10:	1b65816e 	blne	1a610d0 <$DeclawRefsInRegisteredRanges(void)>
        100b14:	e1a00008 	mov	r0, r8
        100b18:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        100b1c:	ea6b09a6 	b	1bc31bc <$DisposeRefHandle(RefHandle *)>
        100b20:	0c1010a0 	ldceq	0, cr1, [r0], -#640
    */
}

/**
 * Symbol: LBClone(char *, long)
 * Address: 00101220
 */
LBClone(char *, long) {
    /*
        101220:	e1a0c00d 	mov	ip, sp
        101224:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        101228:	e24cb004 	sub	fp, ip, #4	; 0x4
        10122c:	e1a05001 	mov	r5, r1
        101230:	e2801018 	add	r1, r0, #24	; 0x18
        101234:	e9315008 	ldmdb	r1!, {r3, ip, lr}
        101238:	e92d5008 	stmdb	sp!, {r3, ip, lr}
        10123c:	e9315008 	ldmdb	r1!, {r3, ip, lr}
        101240:	e92d5008 	stmdb	sp!, {r3, ip, lr}
        101244:	e1a0000d 	mov	r0, sp
        101248:	eb65102b 	bl	1a452fc <LBData::$GetStore( const(void))>
        10124c:	e1b04000 	movs	r4, r0
        101250:	1a000004 	bne	101268 <LBClone(char *, long)+0x48>
        101254:	e59f10ac 	ldr	r1, [pc, #ac]	; 101308 <LBClone(char *, long)+0xe8>
        101258:	e59f00ac 	ldr	r0, [pc, #ac]	; 10130c <LBClone(char *, long)+0xec>
        10125c:	e5900000 	ldr	r0, [r0]
        101260:	e3a02000 	mov	r2, #0	; 0x0
        101264:	eb6b87cc 	bl	1be319c <$Throw>
        101268:	e594007c 	ldr	r0, [r4, #124]
        10126c:	eb64f304 	bl	1a3de84 <$CheckWriteProtect(TStore *)>
        101270:	e24dd004 	sub	sp, sp, #4	; 0x4
        101274:	e1a00005 	mov	r0, r5
        101278:	eb6b03b3 	bl	1bc214c <$AllocateRefHandle(long)>
        10127c:	e58d0000 	str	r0, [sp]
        101280:	e1a0000d 	mov	r0, sp
        101284:	e1a03004 	mov	r3, r4
        101288:	e59d1010 	ldr	r1, [sp, #16]
        10128c:	e59d2004 	ldr	r2, [sp, #4]
        101290:	eb65141d 	bl	1a4630c <$AllocateLargeBinary__FRC6RefVarlT2P13TStoreWrapper>
        101294:	eb6b03ac 	bl	1bc214c <$AllocateRefHandle(long)>
        101298:	e1a06000 	mov	r6, r0
        10129c:	e59d0000 	ldr	r0, [sp]
        1012a0:	eb6b07c5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1012a4:	e5960000 	ldr	r0, [r6]
        1012a8:	eb6b1011 	bl	1bc52f4 <$ObjectPtr(long)>
        1012ac:	e2805010 	add	r5, r0, #16	; 0x10
        1012b0:	e594307c 	ldr	r3, [r4, #124]
        1012b4:	e1a01003 	mov	r1, r3
        1012b8:	e2850004 	add	r0, r5, #4	; 0x4
        1012bc:	e59d2008 	ldr	r2, [sp, #8]
        1012c0:	eb6828c7 	bl	1b0b5e4 <$DuplicateLargeObject(unsigned long *, TStore *, unsigned long, unsigned long)>
        1012c4:	e3300000 	teq	r0, #0	; 0x0
        1012c8:	1b64eed6 	blne	1a3ce28 <$_OSErr(long)>
        1012cc:	e5952004 	ldr	r2, [r5, #4]
        1012d0:	e2850010 	add	r0, r5, #16	; 0x10
        1012d4:	e3a03000 	mov	r3, #0	; 0x0
        1012d8:	e594107c 	ldr	r1, [r4, #124]
        1012dc:	eb6849c5 	bl	1b139f8 <$MapLargeObject(unsigned long *, TStore *, unsigned long, unsigned char)>
        1012e0:	e3300000 	teq	r0, #0	; 0x0
        1012e4:	1b64eecf 	blne	1a3ce28 <$_OSErr(long)>
        1012e8:	e5b40094 	ldr	r0, [r4, #148]!
        1012ec:	e5b51004 	ldr	r1, [r5, #4]!
        1012f0:	eb65206b 	bl	1a494a4 <TEphemeralTracker::$AddEphemeral(unsigned long)>
        1012f4:	e5964000 	ldr	r4, [r6]
        1012f8:	e1a00006 	mov	r0, r6
        1012fc:	eb6b07ae 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        101300:	e1a00004 	mov	r0, r4
        101304:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        101308:	ffff446f 	swinv	0x00ff446f
        10130c:	003712fc 	ldreqsh	r1, [r7], -ip
    */
}

/**
 * Symbol: LBDestroy(char *)
 * Address: 00101368
 */
LBDestroy(char *) {
    /*
        101368:	e1a0c00d 	mov	ip, sp
        10136c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        101370:	e24cb004 	sub	fp, ip, #4	; 0x4
        101374:	e1a05000 	mov	r5, r0
        101378:	eb650fdf 	bl	1a452fc <LBData::$GetStore( const(void))>
        10137c:	e1a04000 	mov	r4, r0
        101380:	e1a00005 	mov	r0, r5
        101384:	e3a01000 	mov	r1, #0	; 0x0
        101388:	eb6513dc 	bl	1a46300 <LBData::$SetStore(TStoreWrapper *)>
        10138c:	e3340000 	teq	r4, #0	; 0x0
        101390:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        101394:	e5951004 	ldr	r1, [r5, #4]
        101398:	e594007c 	ldr	r0, [r4, #124]
        10139c:	eb68288e 	bl	1b0b5dc <$AbortObject(TStore *, unsigned long)>
        1013a0:	e594007c 	ldr	r0, [r4, #124]
        1013a4:	eb684992 	bl	1b139f4 <$IsValidStore(TStore const *)>
        1013a8:	e3300000 	teq	r0, #0	; 0x0
        1013ac:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        1013b0:	e1a00005 	mov	r0, r5
        1013b4:	eb657f39 	bl	1a610a0 <$RegisterLargeBinaryForDeclawing(LBData const *)>
        1013b8:	e5940094 	ldr	r0, [r4, #148]
        1013bc:	e3300000 	teq	r0, #0	; 0x0
        1013c0:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        1013c4:	e5951004 	ldr	r1, [r5, #4]
        1013c8:	eb652036 	bl	1a494a8 <TEphemeralTracker::$IsEphemeral(unsigned long)>
        1013cc:	e3300000 	teq	r0, #0	; 0x0
        1013d0:	15b40094 	ldrne	r0, [r4, #148]!
        1013d4:	15b51004 	ldrne	r1, [r5, #4]!
        1013d8:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1013dc:	1a651c20 	bne	1a48464 <TEphemeralTracker::$DeleteEphemeral(unsigned long)>
        1013e0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: LBSetClass(char *, RefVar const &)
 * Address: 001013e4
 */
LBSetClass(char *, RefVar const &) {
    /*
        1013e4:	e1a0c00d 	mov	ip, sp
        1013e8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1013ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        1013f0:	e1a04001 	mov	r4, r1
        1013f4:	e1a06000 	mov	r6, r0
        1013f8:	eb650fbf 	bl	1a452fc <LBData::$GetStore( const(void))>
        1013fc:	e1b05000 	movs	r5, r0
        101400:	1a000004 	bne	101418 <LBSetClass(char *, RefVar const &)+0x34>
        101404:	e59f108c 	ldr	r1, [pc, #8c]	; 101498 <LBSetClass(char *, RefVar const &)+0xb4>
        101408:	e59f008c 	ldr	r0, [pc, #8c]	; 10149c <LBSetClass(char *, RefVar const &)+0xb8>
        10140c:	e5900000 	ldr	r0, [r0]
        101410:	e3a02000 	mov	r2, #0	; 0x0
        101414:	eb6b8760 	bl	1be319c <$Throw>
        101418:	e5960010 	ldr	r0, [r6, #16]
        10141c:	e3300000 	teq	r0, #0	; 0x0
        101420:	1a000004 	bne	101438 <LBSetClass(char *, RefVar const &)+0x54>
        101424:	e5962004 	ldr	r2, [r6, #4]
        101428:	e2860010 	add	r0, r6, #16	; 0x10
        10142c:	e3a03000 	mov	r3, #0	; 0x0
        101430:	e595107c 	ldr	r1, [r5, #124]
        101434:	eb68496f 	bl	1b139f8 <$MapLargeObject(unsigned long *, TStore *, unsigned long, unsigned char)>
        101438:	e1a00005 	mov	r0, r5
        10143c:	eb653d01 	bl	1a50848 <TStoreWrapper::$LockStore(void)>
        101440:	e3300000 	teq	r0, #0	; 0x0
        101444:	1b64ee77 	blne	1a3ce28 <$_OSErr(long)>
        101448:	e3a00000 	mov	r0, #0	; 0x0
        10144c:	e52d006c 	str	r0, [sp, -#108]!
        101450:	e28d0008 	add	r0, sp, #8	; 0x8
        101454:	eb6ac546 	bl	1bb2974 <$setjmp>
        101458:	e3300000 	teq	r0, #0	; 0x0
        10145c:	1a00000f 	bne	1014a0 <LBSetClass(char *, RefVar const &)+0xbc>
        101460:	e1a0000d 	mov	r0, sp
        101464:	eb6b7b04 	bl	1be007c <$AddExceptionHandler>
        101468:	e1a01004 	mov	r1, r4
        10146c:	e1a00005 	mov	r0, r5
        101470:	eb650b6c 	bl	1a44228 <TStoreWrapper::$SymbolToReference(RefVar const &)>
        101474:	e5a6000c 	str	r0, [r6, #12]!
        101478:	e1a0000d 	mov	r0, sp
        10147c:	eb6b7f0d 	bl	1be10b8 <$ExitHandler>
        101480:	e28dd06c 	add	sp, sp, #108	; 0x6c
        101484:	e1a00005 	mov	r0, r5
        101488:	eb6540fe 	bl	1a51888 <TStoreWrapper::$UnlockStore(void)>
        10148c:	e3300000 	teq	r0, #0	; 0x0
        101490:	1b64ee64 	blne	1a3ce28 <$_OSErr(long)>
        101494:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        101498:	ffff446f 	swinv	0x00ff446f
        10149c:	003712fc 	ldreqsh	r1, [r7], -ip
        1014a0:	e1a00005 	mov	r0, r5
        1014a4:	eb6538cb 	bl	1a4f7d8 <TStoreWrapper::$Abort(void)>
        1014a8:	e3300000 	teq	r0, #0	; 0x0
        1014ac:	1b64ee5d 	blne	1a3ce28 <$_OSErr(long)>
        1014b0:	e1a0000d 	mov	r0, sp
        1014b4:	eb6b8326 	bl	1be2154 <$NextHandler>
        1014b8:	eafffff8 	b	1014a0 <LBSetClass(char *, RefVar const &)+0xbc>
    */
}

/**
 * Symbol: LOCompanderParameterSize(TStore *, unsigned long, long *)
 * Address: 001014bc
 */
LOCompanderParameterSize(TStore *, unsigned long, long *) {
    /*
        1014bc:	e1a0c00d 	mov	ip, sp
        1014c0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1014c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1014c8:	e1a05000 	mov	r5, r0
        1014cc:	e1a06001 	mov	r6, r1
        1014d0:	e1a04002 	mov	r4, r2
        1014d4:	e24dd014 	sub	sp, sp, #20	; 0x14
        1014d8:	e1a0000d 	mov	r0, sp
        1014dc:	eb67b8b9 	bl	1aef7c8 <PackageRoot::$__ct(void)>
        1014e0:	e3a00000 	mov	r0, #0	; 0x0
        1014e4:	e3a03014 	mov	r3, #20	; 0x14
        1014e8:	e5840000 	str	r0, [r4]
        1014ec:	e92d0008 	stmdb	sp!, {r3}
        1014f0:	e28d3004 	add	r3, sp, #4	; 0x4
        1014f4:	e1a01006 	mov	r1, r6
        1014f8:	e1a00005 	mov	r0, r5
        1014fc:	e3a02000 	mov	r2, #0	; 0x0
        101500:	eb68030e 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        101504:	e28dd004 	add	sp, sp, #4	; 0x4
        101508:	e3300000 	teq	r0, #0	; 0x0
        10150c:	1a000006 	bne	10152c <LOCompanderParameterSize(TStore *, unsigned long, long *)+0x70>
        101510:	e59d1008 	ldr	r1, [sp, #8]
        101514:	e3310000 	teq	r1, #0	; 0x0
        101518:	0a000003 	beq	10152c <LOCompanderParameterSize(TStore *, unsigned long, long *)+0x70>
        10151c:	e1a02004 	mov	r2, r4
        101520:	e1a00005 	mov	r0, r5
        101524:	e59d1008 	ldr	r1, [sp, #8]
        101528:	eb67e5f4 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        10152c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: LOCompanderParameters(TStore *, unsigned long, void *)
 * Address: 00101530
 */
LOCompanderParameters(TStore *, unsigned long, void *) {
    /*
        101530:	e1a0c00d 	mov	ip, sp
        101534:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        101538:	e24cb004 	sub	fp, ip, #4	; 0x4
        10153c:	e1a04000 	mov	r4, r0
        101540:	e1a06001 	mov	r6, r1
        101544:	e1a05002 	mov	r5, r2
        101548:	e24dd018 	sub	sp, sp, #24	; 0x18
        10154c:	e28d0004 	add	r0, sp, #4	; 0x4
        101550:	eb67b89c 	bl	1aef7c8 <PackageRoot::$__ct(void)>
        101554:	e3a03014 	mov	r3, #20	; 0x14
        101558:	e92d0008 	stmdb	sp!, {r3}
        10155c:	e28d3008 	add	r3, sp, #8	; 0x8
        101560:	e1a01006 	mov	r1, r6
        101564:	e1a00004 	mov	r0, r4
        101568:	e3a02000 	mov	r2, #0	; 0x0
        10156c:	eb6802f3 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        101570:	e28dd004 	add	sp, sp, #4	; 0x4
        101574:	e3300000 	teq	r0, #0	; 0x0
        101578:	1a000010 	bne	1015c0 <LOCompanderParameters(TStore *, unsigned long, void *)+0x90>
        10157c:	e59d100c 	ldr	r1, [sp, #12]
        101580:	e3310000 	teq	r1, #0	; 0x0
        101584:	0a00000d 	beq	1015c0 <LOCompanderParameters(TStore *, unsigned long, void *)+0x90>
        101588:	e59d100c 	ldr	r1, [sp, #12]
        10158c:	e1a0200d 	mov	r2, sp
        101590:	e1a00004 	mov	r0, r4
        101594:	eb67e5d9 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        101598:	e3300000 	teq	r0, #0	; 0x0
        10159c:	1a000007 	bne	1015c0 <LOCompanderParameters(TStore *, unsigned long, void *)+0x90>
        1015a0:	e59d3000 	ldr	r3, [sp]
        1015a4:	e92d0008 	stmdb	sp!, {r3}
        1015a8:	e1a03005 	mov	r3, r5
        1015ac:	e1a00004 	mov	r0, r4
        1015b0:	e3a02000 	mov	r2, #0	; 0x0
        1015b4:	e59d1010 	ldr	r1, [sp, #16]
        1015b8:	eb6802e0 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        1015bc:	e28dd004 	add	sp, sp, #4	; 0x4
        1015c0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: LOCompanderNameStrLen(TStore *, unsigned long, long *)
 * Address: 00101894
 */
LOCompanderNameStrLen(TStore *, unsigned long, long *) {
    /*
        101894:	e1a0c00d 	mov	ip, sp
        101898:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        10189c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1018a0:	e1a04000 	mov	r4, r0
        1018a4:	e1a06001 	mov	r6, r1
        1018a8:	e1a05002 	mov	r5, r2
        1018ac:	e24dd014 	sub	sp, sp, #20	; 0x14
        1018b0:	e1a0000d 	mov	r0, sp
        1018b4:	eb67b7c3 	bl	1aef7c8 <PackageRoot::$__ct(void)>
        1018b8:	e3a03014 	mov	r3, #20	; 0x14
        1018bc:	e92d0008 	stmdb	sp!, {r3}
        1018c0:	e28d3004 	add	r3, sp, #4	; 0x4
        1018c4:	e1a01006 	mov	r1, r6
        1018c8:	e1a00004 	mov	r0, r4
        1018cc:	e3a02000 	mov	r2, #0	; 0x0
        1018d0:	eb68021a 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        1018d4:	e28dd004 	add	sp, sp, #4	; 0x4
        1018d8:	e3300000 	teq	r0, #0	; 0x0
        1018dc:	1a000003 	bne	1018f0 <LOCompanderNameStrLen(TStore *, unsigned long, long *)+0x5c>
        1018e0:	e1a02005 	mov	r2, r5
        1018e4:	e1a00004 	mov	r0, r4
        1018e8:	e59d1004 	ldr	r1, [sp, #4]
        1018ec:	eb67e503 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        1018f0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: LODefaultCreate(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, unsigned char, TLOCallback *)
 * Address: 00101bd0
 */
LODefaultCreate(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, unsigned char, TLOCallback *) {
    /*
        101bd0:	e1a0c00d 	mov	ip, sp
        101bd4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        101bd8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        101bdc:	e24cb014 	sub	fp, ip, #20	; 0x14
        101be0:	e1a04001 	mov	r4, r1
        101be4:	e1a06002 	mov	r6, r2
        101be8:	e1a05003 	mov	r5, r3
        101bec:	e28ba014 	add	sl, fp, #20	; 0x14
        101bf0:	e89a0501 	ldmia	sl, {r0, r8, sl}
        101bf4:	e20000ff 	and	r0, r0, #255	; 0xff
        101bf8:	e59b9020 	ldr	r9, [fp, #32]
        101bfc:	e52d0004 	str	r0, [sp, -#4]!
        101c00:	e24dd024 	sub	sp, sp, #36	; 0x24
        101c04:	e28d0004 	add	r0, sp, #4	; 0x4
        101c08:	eb017b38 	bl	1608f0 <LargeObjectRoot::__ct(void)>
        101c0c:	e3a00000 	mov	r0, #0	; 0x0
        101c10:	e58d0000 	str	r0, [sp]
        101c14:	e1a0200d 	mov	r2, sp
        101c18:	e1a00004 	mov	r0, r4
        101c1c:	e3a01020 	mov	r1, #32	; 0x20
        101c20:	eb0a13e1 	bl	386bac <TStore::NewWithinTransaction(long, unsigned long *)>
        101c24:	e1b07000 	movs	r7, r0
        101c28:	1a00005b 	bne	101d9c <LODefaultCreate(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, unsigned char, TLOCallback *)+0x1cc>
        101c2c:	e59d0000 	ldr	r0, [sp]
        101c30:	e59b1004 	ldr	r1, [fp, #4]
        101c34:	e3380000 	teq	r8, #0	; 0x0
        101c38:	e5810000 	str	r0, [r1]
        101c3c:	028f8f6d 	addeq	r8, pc, #436	; 0x1b4
        101c40:	e1a00008 	mov	r0, r8
        101c44:	eb6acf99 	bl	1bb5ab0 <$strlen>
        101c48:	e1a01000 	mov	r1, r0
        101c4c:	e28d2008 	add	r2, sp, #8	; 0x8
        101c50:	e1a00004 	mov	r0, r4
        101c54:	eb0a13d4 	bl	386bac <TStore::NewWithinTransaction(long, unsigned long *)>
        101c58:	e1b07000 	movs	r7, r0
        101c5c:	1a00004e 	bne	101d9c <LODefaultCreate(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, unsigned char, TLOCallback *)+0x1cc>
        101c60:	e1a00008 	mov	r0, r8
        101c64:	eb6acf91 	bl	1bb5ab0 <$strlen>
        101c68:	e1a03000 	mov	r3, r0
        101c6c:	e92d0008 	stmdb	sp!, {r3}
        101c70:	e1a03008 	mov	r3, r8
        101c74:	e1a00004 	mov	r0, r4
        101c78:	e3a02000 	mov	r2, #0	; 0x0
        101c7c:	e59d100c 	ldr	r1, [sp, #12]
        101c80:	eb68221e 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        101c84:	e28dd004 	add	sp, sp, #4	; 0x4
        101c88:	e1b07000 	movs	r7, r0
        101c8c:	1a000042 	bne	101d9c <LODefaultCreate(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, unsigned char, TLOCallback *)+0x1cc>
        101c90:	e28d200c 	add	r2, sp, #12	; 0xc
        101c94:	e1a01009 	mov	r1, r9
        101c98:	e1a00004 	mov	r0, r4
        101c9c:	eb0a13c2 	bl	386bac <TStore::NewWithinTransaction(long, unsigned long *)>
        101ca0:	e1b07000 	movs	r7, r0
        101ca4:	1a00003c 	bne	101d9c <LODefaultCreate(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, unsigned char, TLOCallback *)+0x1cc>
        101ca8:	e3390000 	teq	r9, #0	; 0x0
        101cac:	0a000009 	beq	101cd8 <LODefaultCreate(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, unsigned char, TLOCallback *)+0x108>
        101cb0:	e1a03009 	mov	r3, r9
        101cb4:	e92d0008 	stmdb	sp!, {r3}
        101cb8:	e1a0300a 	mov	r3, sl
        101cbc:	e1a00004 	mov	r0, r4
        101cc0:	e3a02000 	mov	r2, #0	; 0x0
        101cc4:	e59d1010 	ldr	r1, [sp, #16]
        101cc8:	eb68220c 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        101ccc:	e28dd004 	add	sp, sp, #4	; 0x4
        101cd0:	e1b07000 	movs	r7, r0
        101cd4:	1a000030 	bne	101d9c <LODefaultCreate(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, unsigned char, TLOCallback *)+0x1cc>
        101cd8:	e1a02005 	mov	r2, r5
        101cdc:	e28d1004 	add	r1, sp, #4	; 0x4
        101ce0:	e1a00004 	mov	r0, r4
        101ce4:	eb682631 	bl	1b0b5b0 <$InitializeChunkArray(TStore *, unsigned long *, unsigned long)>
        101ce8:	e1b07000 	movs	r7, r0
        101cec:	1a00002a 	bne	101d9c <LODefaultCreate(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, unsigned char, TLOCallback *)+0x1cc>
        101cf0:	e59d0024 	ldr	r0, [sp, #36]
        101cf4:	e3300000 	teq	r0, #0	; 0x0
        101cf8:	03a00801 	moveq	r0, #65536	; 0x10000
        101cfc:	13a00000 	movne	r0, #0	; 0x0
        101d00:	e3800002 	orr	r0, r0, #2	; 0x2
        101d04:	e3a03020 	mov	r3, #32	; 0x20
        101d08:	e58d0010 	str	r0, [sp, #16]
        101d0c:	e58d5018 	str	r5, [sp, #24]
        101d10:	e92d0008 	stmdb	sp!, {r3}
        101d14:	e28d3008 	add	r3, sp, #8	; 0x8
        101d18:	e1a00004 	mov	r0, r4
        101d1c:	e3a02000 	mov	r2, #0	; 0x0
        101d20:	e59d1004 	ldr	r1, [sp, #4]
        101d24:	eb6821f5 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        101d28:	e28dd004 	add	sp, sp, #4	; 0x4
        101d2c:	e1b07000 	movs	r7, r0
        101d30:	1a000019 	bne	101d9c <LODefaultCreate(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, unsigned char, TLOCallback *)+0x1cc>
        101d34:	e3360000 	teq	r6, #0	; 0x0
        101d38:	0a00000c 	beq	101d70 <LODefaultCreate(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, unsigned char, TLOCallback *)+0x1a0>
        101d3c:	e59b3024 	ldr	r3, [fp, #36]
        101d40:	e1a01008 	mov	r1, r8
        101d44:	e1a00005 	mov	r0, r5
        101d48:	e59d200c 	ldr	r2, [sp, #12]
        101d4c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        101d50:	e1a03006 	mov	r3, r6
        101d54:	e1a00004 	mov	r0, r4
        101d58:	e28d2010 	add	r2, sp, #16	; 0x10
        101d5c:	e8920006 	ldmia	r2, {r1, r2}
        101d60:	eb682613 	bl	1b0b5b4 <$FillChunkArray__FP6TStoreUlT2P5CPipeT2PcT2P11TLOCallback>
        101d64:	e28dd010 	add	sp, sp, #16	; 0x10
        101d68:	e1b07000 	movs	r7, r0
        101d6c:	1a00000a 	bne	101d9c <LODefaultCreate(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, unsigned char, TLOCallback *)+0x1cc>
        101d70:	e59f0098 	ldr	r0, [pc, #98]	; 101e10 <LODefaultCreate(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, unsigned char, TLOCallback *)+0x240>
        101d74:	e3a03020 	mov	r3, #32	; 0x20
        101d78:	e58d0014 	str	r0, [sp, #20]
        101d7c:	e92d0008 	stmdb	sp!, {r3}
        101d80:	e28d3008 	add	r3, sp, #8	; 0x8
        101d84:	e1a00004 	mov	r0, r4
        101d88:	e3a02000 	mov	r2, #0	; 0x0
        101d8c:	e59d1004 	ldr	r1, [sp, #4]
        101d90:	eb6821da 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        101d94:	e28dd004 	add	sp, sp, #4	; 0x4
        101d98:	e1a07000 	mov	r7, r0
        101d9c:	e3370000 	teq	r7, #0	; 0x0
        101da0:	0a000012 	beq	101df0 <LODefaultCreate(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, unsigned char, TLOCallback *)+0x220>
        101da4:	e59d000c 	ldr	r0, [sp, #12]
        101da8:	e3300000 	teq	r0, #0	; 0x0
        101dac:	11a00004 	movne	r0, r4
        101db0:	159d100c 	ldrne	r1, [sp, #12]
        101db4:	1b0a1382 	blne	386bc4 <TStore::SeparatelyAbort(unsigned long)>
        101db8:	e59d0008 	ldr	r0, [sp, #8]
        101dbc:	e3300000 	teq	r0, #0	; 0x0
        101dc0:	11a00004 	movne	r0, r4
        101dc4:	159d1008 	ldrne	r1, [sp, #8]
        101dc8:	1b0a137d 	blne	386bc4 <TStore::SeparatelyAbort(unsigned long)>
        101dcc:	e59d0004 	ldr	r0, [sp, #4]
        101dd0:	e3300000 	teq	r0, #0	; 0x0
        101dd4:	11a00004 	movne	r0, r4
        101dd8:	159d1004 	ldrne	r1, [sp, #4]
        101ddc:	1b0a1378 	blne	386bc4 <TStore::SeparatelyAbort(unsigned long)>
        101de0:	e59d1000 	ldr	r1, [sp]
        101de4:	e3310000 	teq	r1, #0	; 0x0
        101de8:	11a00004 	movne	r0, r4
        101dec:	1b0a1374 	blne	386bc4 <TStore::SeparatelyAbort(unsigned long)>
        101df0:	e1a00007 	mov	r0, r7
        101df4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        101df8:	5453696d 	ldrplb	r6, [r3], -#2413
        101dfc:	706c6553 	rsbvc	r6, ip, r3, asr r5
        101e00:	746f7265 	strvcbt	r7, [pc], #265	; 101e08 <LODefaultCreate(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, unsigned char, TLOCallback *)+0x238>
        101e04:	436f6d70 	cmnmi	pc, #7168	; 0x1c00
        101e08:	616e6465 	cmnvs	lr, r5, ror #8
        101e0c:	72000000 	andvc	r0, r0, #0	; 0x0
        101e10:	70616f6b 	rsbvc	r6, r1, fp, ror #30
    */
}

/**
 * Symbol: LODefCreateFromComp(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, unsigned char, TLOCallback *)
 * Address: 00102080
 */
LODefCreateFromComp(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, unsigned char, TLOCallback *) {
    /*
        102080:	e1a0c00d 	mov	ip, sp
        102084:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        102088:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        10208c:	e24cb014 	sub	fp, ip, #20	; 0x14
        102090:	e1a04001 	mov	r4, r1
        102094:	e1a05002 	mov	r5, r2
        102098:	e28ba014 	add	sl, fp, #20	; 0x14
        10209c:	e89a0501 	ldmia	sl, {r0, r8, sl}
        1020a0:	e20000ff 	and	r0, r0, #255	; 0xff
        1020a4:	e28b9020 	add	r9, fp, #32	; 0x20
        1020a8:	e8990280 	ldmia	r9, {r7, r9}
        1020ac:	e52d0004 	str	r0, [sp, -#4]!
        1020b0:	e24dd030 	sub	sp, sp, #48	; 0x30
        1020b4:	e28d0010 	add	r0, sp, #16	; 0x10
        1020b8:	eb017a0c 	bl	1608f0 <LargeObjectRoot::__ct(void)>
        1020bc:	e3a00000 	mov	r0, #0	; 0x0
        1020c0:	e3a06000 	mov	r6, #0	; 0x0
        1020c4:	e58d000c 	str	r0, [sp, #12]
        1020c8:	e52d006c 	str	r0, [sp, -#108]!
        1020cc:	e28d0008 	add	r0, sp, #8	; 0x8
        1020d0:	eb6ac227 	bl	1bb2974 <$setjmp>
        1020d4:	e3300000 	teq	r0, #0	; 0x0
        1020d8:	1a000015 	bne	102134 <LODefCreateFromComp(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, unsigned char, TLOCallback *)+0xb4>
        1020dc:	e1a0000d 	mov	r0, sp
        1020e0:	eb6b77e5 	bl	1be007c <$AddExceptionHandler>
        1020e4:	e3a00004 	mov	r0, #4	; 0x4
        1020e8:	e52d0004 	str	r0, [sp, -#4]!
        1020ec:	e28d3070 	add	r3, sp, #112	; 0x70
        1020f0:	e1a0200d 	mov	r2, sp
        1020f4:	e28d1078 	add	r1, sp, #120	; 0x78
        1020f8:	e1a00005 	mov	r0, r5
        1020fc:	e595c000 	ldr	ip, [r5]
        102100:	e1a0e00f 	mov	lr, pc
        102104:	e28cf014 	add	pc, ip, #20	; 0x14
        102108:	e3a00004 	mov	r0, #4	; 0x4
        10210c:	e58d0000 	str	r0, [sp]
        102110:	e28d3070 	add	r3, sp, #112	; 0x70
        102114:	e1a0200d 	mov	r2, sp
        102118:	e28d1074 	add	r1, sp, #116	; 0x74
        10211c:	e1a00005 	mov	r0, r5
        102120:	e595c000 	ldr	ip, [r5]
        102124:	e1a0e00f 	mov	lr, pc
        102128:	e28cf014 	add	pc, ip, #20	; 0x14
        10212c:	e28dd004 	add	sp, sp, #4	; 0x4
        102130:	ea000008 	b	102158 <LODefCreateFromComp(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, unsigned char, TLOCallback *)+0xd8>
        102134:	e59d0060 	ldr	r0, [sp, #96]
        102138:	e59f11d4 	ldr	r1, [pc, #1d4]	; 102314 <LODefCreateFromComp(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, unsigned char, TLOCallback *)+0x294>
        10213c:	e5911000 	ldr	r1, [r1]
        102140:	eb6b8413 	bl	1be3194 <$Subexception>
        102144:	e3300000 	teq	r0, #0	; 0x0
        102148:	159d6064 	ldrne	r6, [sp, #100]
        10214c:	1a000001 	bne	102158 <LODefCreateFromComp(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, unsigned char, TLOCallback *)+0xd8>
        102150:	e1a0000d 	mov	r0, sp
        102154:	eb6b7ffe 	bl	1be2154 <$NextHandler>
        102158:	e1a0000d 	mov	r0, sp
        10215c:	eb6b7bd5 	bl	1be10b8 <$ExitHandler>
        102160:	e28dd06c 	add	sp, sp, #108	; 0x6c
        102164:	e3360000 	teq	r6, #0	; 0x0
        102168:	1a000052 	bne	1022b8 <LODefCreateFromComp(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, unsigned char, TLOCallback *)+0x238>
        10216c:	e28d200c 	add	r2, sp, #12	; 0xc
        102170:	e1a00004 	mov	r0, r4
        102174:	e3a01020 	mov	r1, #32	; 0x20
        102178:	eb0a128b 	bl	386bac <TStore::NewWithinTransaction(long, unsigned long *)>
        10217c:	e1b06000 	movs	r6, r0
        102180:	1a00004c 	bne	1022b8 <LODefCreateFromComp(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, unsigned char, TLOCallback *)+0x238>
        102184:	e59d000c 	ldr	r0, [sp, #12]
        102188:	e59b1004 	ldr	r1, [fp, #4]
        10218c:	e5810000 	str	r0, [r1]
        102190:	e1a00008 	mov	r0, r8
        102194:	eb6ace45 	bl	1bb5ab0 <$strlen>
        102198:	e1a01000 	mov	r1, r0
        10219c:	e28d2014 	add	r2, sp, #20	; 0x14
        1021a0:	e1a00004 	mov	r0, r4
        1021a4:	eb0a1280 	bl	386bac <TStore::NewWithinTransaction(long, unsigned long *)>
        1021a8:	e1b06000 	movs	r6, r0
        1021ac:	1a000041 	bne	1022b8 <LODefCreateFromComp(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, unsigned char, TLOCallback *)+0x238>
        1021b0:	e1a00008 	mov	r0, r8
        1021b4:	eb6ace3d 	bl	1bb5ab0 <$strlen>
        1021b8:	e1a03000 	mov	r3, r0
        1021bc:	e92d0008 	stmdb	sp!, {r3}
        1021c0:	e1a03008 	mov	r3, r8
        1021c4:	e1a00004 	mov	r0, r4
        1021c8:	e3a02000 	mov	r2, #0	; 0x0
        1021cc:	e59d1018 	ldr	r1, [sp, #24]
        1021d0:	eb6820ca 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        1021d4:	e28dd004 	add	sp, sp, #4	; 0x4
        1021d8:	e1b06000 	movs	r6, r0
        1021dc:	1a000035 	bne	1022b8 <LODefCreateFromComp(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, unsigned char, TLOCallback *)+0x238>
        1021e0:	e28d2018 	add	r2, sp, #24	; 0x18
        1021e4:	e1a01007 	mov	r1, r7
        1021e8:	e1a00004 	mov	r0, r4
        1021ec:	eb0a126e 	bl	386bac <TStore::NewWithinTransaction(long, unsigned long *)>
        1021f0:	e1b06000 	movs	r6, r0
        1021f4:	1a00002f 	bne	1022b8 <LODefCreateFromComp(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, unsigned char, TLOCallback *)+0x238>
        1021f8:	e3370000 	teq	r7, #0	; 0x0
        1021fc:	0a000009 	beq	102228 <LODefCreateFromComp(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, unsigned char, TLOCallback *)+0x1a8>
        102200:	e1a03007 	mov	r3, r7
        102204:	e92d0008 	stmdb	sp!, {r3}
        102208:	e1a0300a 	mov	r3, sl
        10220c:	e1a00004 	mov	r0, r4
        102210:	e3a02000 	mov	r2, #0	; 0x0
        102214:	e59d101c 	ldr	r1, [sp, #28]
        102218:	eb6820b8 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        10221c:	e28dd004 	add	sp, sp, #4	; 0x4
        102220:	e1b06000 	movs	r6, r0
        102224:	1a000023 	bne	1022b8 <LODefCreateFromComp(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, unsigned char, TLOCallback *)+0x238>
        102228:	e59d2004 	ldr	r2, [sp, #4]
        10222c:	e28d1010 	add	r1, sp, #16	; 0x10
        102230:	e1a00004 	mov	r0, r4
        102234:	eb6824dd 	bl	1b0b5b0 <$InitializeChunkArray(TStore *, unsigned long *, unsigned long)>
        102238:	e1b06000 	movs	r6, r0
        10223c:	1a00001d 	bne	1022b8 <LODefCreateFromComp(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, unsigned char, TLOCallback *)+0x238>
        102240:	e1a03009 	mov	r3, r9
        102244:	e92d0008 	stmdb	sp!, {r3}
        102248:	e1a02005 	mov	r2, r5
        10224c:	e59b3010 	ldr	r3, [fp, #16]
        102250:	e1a00004 	mov	r0, r4
        102254:	e59d1014 	ldr	r1, [sp, #20]
        102258:	eb6824d7 	bl	1b0b5bc <$FillChunkArrayCompressed(TStore *, unsigned long, CPipe *, long, TLOCallback *)>
        10225c:	e28dd004 	add	sp, sp, #4	; 0x4
        102260:	e1b06000 	movs	r6, r0
        102264:	1a000013 	bne	1022b8 <LODefCreateFromComp(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, unsigned char, TLOCallback *)+0x238>
        102268:	e59f00a8 	ldr	r0, [pc, #a8]	; 102318 <LODefCreateFromComp(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, unsigned char, TLOCallback *)+0x298>
        10226c:	e58d0020 	str	r0, [sp, #32]
        102270:	e59d0008 	ldr	r0, [sp, #8]
        102274:	e58d001c 	str	r0, [sp, #28]
        102278:	e59d0030 	ldr	r0, [sp, #48]
        10227c:	e3300000 	teq	r0, #0	; 0x0
        102280:	159d001c 	ldrne	r0, [sp, #28]
        102284:	13c00801 	bicne	r0, r0, #65536	; 0x10000
        102288:	158d001c 	strne	r0, [sp, #28]
        10228c:	e59d0004 	ldr	r0, [sp, #4]
        102290:	e3a03020 	mov	r3, #32	; 0x20
        102294:	e58d0024 	str	r0, [sp, #36]
        102298:	e92d0008 	stmdb	sp!, {r3}
        10229c:	e28d3014 	add	r3, sp, #20	; 0x14
        1022a0:	e1a00004 	mov	r0, r4
        1022a4:	e3a02000 	mov	r2, #0	; 0x0
        1022a8:	e59d1010 	ldr	r1, [sp, #16]
        1022ac:	eb682093 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        1022b0:	e28dd004 	add	sp, sp, #4	; 0x4
        1022b4:	e1a06000 	mov	r6, r0
        1022b8:	e3360000 	teq	r6, #0	; 0x0
        1022bc:	0a000012 	beq	10230c <LODefCreateFromComp(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, unsigned char, TLOCallback *)+0x28c>
        1022c0:	e59d0018 	ldr	r0, [sp, #24]
        1022c4:	e3300000 	teq	r0, #0	; 0x0
        1022c8:	11a00004 	movne	r0, r4
        1022cc:	159d1018 	ldrne	r1, [sp, #24]
        1022d0:	1b0a123b 	blne	386bc4 <TStore::SeparatelyAbort(unsigned long)>
        1022d4:	e59d0014 	ldr	r0, [sp, #20]
        1022d8:	e3300000 	teq	r0, #0	; 0x0
        1022dc:	11a00004 	movne	r0, r4
        1022e0:	159d1014 	ldrne	r1, [sp, #20]
        1022e4:	1b0a1236 	blne	386bc4 <TStore::SeparatelyAbort(unsigned long)>
        1022e8:	e59d0010 	ldr	r0, [sp, #16]
        1022ec:	e3300000 	teq	r0, #0	; 0x0
        1022f0:	11a00004 	movne	r0, r4
        1022f4:	159d1010 	ldrne	r1, [sp, #16]
        1022f8:	1b0a1231 	blne	386bc4 <TStore::SeparatelyAbort(unsigned long)>
        1022fc:	e59d100c 	ldr	r1, [sp, #12]
        102300:	e3310000 	teq	r1, #0	; 0x0
        102304:	11a00004 	movne	r0, r4
        102308:	1b0a122d 	blne	386bc4 <TStore::SeparatelyAbort(unsigned long)>
        10230c:	e1a00006 	mov	r0, r6
        102310:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        102314:	00371324 	eoreqs	r1, r7, r4, lsr #6
        102318:	70616f6b 	rsbvc	r6, r1, fp, ror #30
    */
}

/**
 * Symbol: LODefaultDelete(TStore *, unsigned long)
 * Address: 0010231c
 */
LODefaultDelete(TStore *, unsigned long) {
    /*
        10231c:	ea6b3951 	b	1bd0868 <$DeallocatePackage(TStore *, unsigned long)>
    */
}

/**
 * Symbol: LODefaultDuplicate(unsigned long *, TStore *, unsigned long, unsigned long)
 * Address: 00102320
 */
LODefaultDuplicate(unsigned long *, TStore *, unsigned long, unsigned long) {
    /*
        102320:	e1a0c00d 	mov	ip, sp
        102324:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        102328:	e24cb004 	sub	fp, ip, #4	; 0x4
        10232c:	e1a07000 	mov	r7, r0
        102330:	e1a05001 	mov	r5, r1
        102334:	e1a04002 	mov	r4, r2
        102338:	e1a06003 	mov	r6, r3
        10233c:	e1a01002 	mov	r1, r2
        102340:	e1a00005 	mov	r0, r5
        102344:	eb6824ab 	bl	1b0b5f8 <$FlushLargeObject(TStore *, unsigned long)>
        102348:	e3300000 	teq	r0, #0	; 0x0
        10234c:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        102350:	e3a03001 	mov	r3, #1	; 0x1
        102354:	e92d0008 	stmdb	sp!, {r3}
        102358:	e1a03007 	mov	r3, r7
        10235c:	e1a02006 	mov	r2, r6
        102360:	e1a01004 	mov	r1, r4
        102364:	e1a00005 	mov	r0, r5
        102368:	eb6828b0 	bl	1b0c630 <$DuplicatePackageData(TStore *, unsigned long, unsigned long, unsigned long *, unsigned char)>
        10236c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: LODefaultStorageSize(TStore *, unsigned long)
 * Address: 00102420
 */
LODefaultStorageSize(TStore *, unsigned long) {
    /*
        102420:	e1a0c00d 	mov	ip, sp
        102424:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        102428:	e24cb004 	sub	fp, ip, #4	; 0x4
        10242c:	e1a04000 	mov	r4, r0
        102430:	e1a05001 	mov	r5, r1
        102434:	e24dd020 	sub	sp, sp, #32	; 0x20
        102438:	e3a00000 	mov	r0, #0	; 0x0
        10243c:	e58d001c 	str	r0, [sp, #28]
        102440:	e1a0000d 	mov	r0, sp
        102444:	eb67b4df 	bl	1aef7c8 <PackageRoot::$__ct(void)>
        102448:	e3a03014 	mov	r3, #20	; 0x14
        10244c:	e92d0008 	stmdb	sp!, {r3}
        102450:	e28d3004 	add	r3, sp, #4	; 0x4
        102454:	e1a01005 	mov	r1, r5
        102458:	e1a00004 	mov	r0, r4
        10245c:	e3a02000 	mov	r2, #0	; 0x0
        102460:	eb67ff36 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        102464:	e28dd004 	add	sp, sp, #4	; 0x4
        102468:	e3300000 	teq	r0, #0	; 0x0
        10246c:	1a000020 	bne	1024f4 <LODefaultStorageSize(TStore *, unsigned long)+0xd4>
        102470:	e28d201c 	add	r2, sp, #28	; 0x1c
        102474:	e1a01005 	mov	r1, r5
        102478:	e1a00004 	mov	r0, r4
        10247c:	eb67e21f 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        102480:	e3300000 	teq	r0, #0	; 0x0
        102484:	1a00001a 	bne	1024f4 <LODefaultStorageSize(TStore *, unsigned long)+0xd4>
        102488:	e59d0008 	ldr	r0, [sp, #8]
        10248c:	e3300000 	teq	r0, #0	; 0x0
        102490:	0a000009 	beq	1024bc <LODefaultStorageSize(TStore *, unsigned long)+0x9c>
        102494:	e59d1008 	ldr	r1, [sp, #8]
        102498:	e28d2018 	add	r2, sp, #24	; 0x18
        10249c:	e1a00004 	mov	r0, r4
        1024a0:	eb67e216 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        1024a4:	e3300000 	teq	r0, #0	; 0x0
        1024a8:	1a000011 	bne	1024f4 <LODefaultStorageSize(TStore *, unsigned long)+0xd4>
        1024ac:	e28d1018 	add	r1, sp, #24	; 0x18
        1024b0:	e8910003 	ldmia	r1, {r0, r1}
        1024b4:	e0810000 	add	r0, r1, r0
        1024b8:	e58d001c 	str	r0, [sp, #28]
        1024bc:	e28d2014 	add	r2, sp, #20	; 0x14
        1024c0:	e1a00004 	mov	r0, r4
        1024c4:	e59d1000 	ldr	r1, [sp]
        1024c8:	eb67e20c 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        1024cc:	e3300000 	teq	r0, #0	; 0x0
        1024d0:	1a000007 	bne	1024f4 <LODefaultStorageSize(TStore *, unsigned long)+0xd4>
        1024d4:	e1a00004 	mov	r0, r4
        1024d8:	e59d1000 	ldr	r1, [sp]
        1024dc:	eb68453c 	bl	1b139d4 <$GetPagesSize(TStore *, unsigned long)>
        1024e0:	e59d1014 	ldr	r1, [sp, #20]
        1024e4:	e0801001 	add	r1, r0, r1
        1024e8:	e59d001c 	ldr	r0, [sp, #28]
        1024ec:	e0810000 	add	r0, r1, r0
        1024f0:	e58d001c 	str	r0, [sp, #28]
        1024f4:	e59d001c 	ldr	r0, [sp, #28]
        1024f8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: LODefaultStreamSize(TStore *, unsigned long, unsigned char)
 * Address: 001024fc
 */
LODefaultStreamSize(TStore *, unsigned long, unsigned char) {
    /*
        1024fc:	e1a0c00d 	mov	ip, sp
        102500:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        102504:	e24cb004 	sub	fp, ip, #4	; 0x4
        102508:	e1a04000 	mov	r4, r0
        10250c:	e1a05001 	mov	r5, r1
        102510:	e31200ff 	tst	r2, #255	; 0xff
        102514:	e3a06000 	mov	r6, #0	; 0x0
        102518:	0a00001d 	beq	102594 <LODefaultStreamSize(TStore *, unsigned long, unsigned char)+0x98>
        10251c:	e24dd014 	sub	sp, sp, #20	; 0x14
        102520:	e1a0000d 	mov	r0, sp
        102524:	eb67b4a7 	bl	1aef7c8 <PackageRoot::$__ct(void)>
        102528:	e3a03014 	mov	r3, #20	; 0x14
        10252c:	e92d0008 	stmdb	sp!, {r3}
        102530:	e28d3004 	add	r3, sp, #4	; 0x4
        102534:	e1a01005 	mov	r1, r5
        102538:	e1a00004 	mov	r0, r4
        10253c:	e3a02000 	mov	r2, #0	; 0x0
        102540:	eb67fefe 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        102544:	e28dd004 	add	sp, sp, #4	; 0x4
        102548:	e3300000 	teq	r0, #0	; 0x0
        10254c:	128dd014 	addne	sp, sp, #20	; 0x14
        102550:	1a00001f 	bne	1025d4 <LODefaultStreamSize(TStore *, unsigned long, unsigned char)+0xd8>
        102554:	e24dd004 	sub	sp, sp, #4	; 0x4
        102558:	e1a0200d 	mov	r2, sp
        10255c:	e1a00004 	mov	r0, r4
        102560:	e59d1004 	ldr	r1, [sp, #4]
        102564:	eb67e1e5 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        102568:	e3300000 	teq	r0, #0	; 0x0
        10256c:	128dd018 	addne	sp, sp, #24	; 0x18
        102570:	1a000017 	bne	1025d4 <LODefaultStreamSize(TStore *, unsigned long, unsigned char)+0xd8>
        102574:	e1a00004 	mov	r0, r4
        102578:	e59d1004 	ldr	r1, [sp, #4]
        10257c:	eb684514 	bl	1b139d4 <$GetPagesSize(TStore *, unsigned long)>
        102580:	e49d1018 	ldr	r1, [sp], #24
        102584:	e1a01121 	mov	r1, r1, lsr #2
        102588:	e0800101 	add	r0, r0, r1, lsl #2
        10258c:	e2806008 	add	r6, r0, #8	; 0x8
        102590:	ea00001a 	b	102600 <LODefaultStreamSize(TStore *, unsigned long, unsigned char)+0x104>
        102594:	e24dd004 	sub	sp, sp, #4	; 0x4
        102598:	e3a07000 	mov	r7, #0	; 0x0
        10259c:	e1a02005 	mov	r2, r5
        1025a0:	e1a01004 	mov	r1, r4
        1025a4:	e1a0000d 	mov	r0, sp
        1025a8:	eb684919 	bl	1b14a14 <$StoreToVAddr(unsigned long *, TStore *, unsigned long)>
        1025ac:	e3300000 	teq	r0, #0	; 0x0
        1025b0:	0a00000b 	beq	1025e4 <LODefaultStreamSize(TStore *, unsigned long, unsigned char)+0xe8>
        1025b4:	e1a02005 	mov	r2, r5
        1025b8:	e1a01004 	mov	r1, r4
        1025bc:	e1a0000d 	mov	r0, sp
        1025c0:	e3a03001 	mov	r3, #1	; 0x1
        1025c4:	eb68450b 	bl	1b139f8 <$MapLargeObject(unsigned long *, TStore *, unsigned long, unsigned char)>
        1025c8:	e3300000 	teq	r0, #0	; 0x0
        1025cc:	0a000003 	beq	1025e0 <LODefaultStreamSize(TStore *, unsigned long, unsigned char)+0xe4>
        1025d0:	e28dd004 	add	sp, sp, #4	; 0x4
        1025d4:	e3300000 	teq	r0, #0	; 0x0
        1025d8:	13a06000 	movne	r6, #0	; 0x0
        1025dc:	ea000007 	b	102600 <LODefaultStreamSize(TStore *, unsigned long, unsigned char)+0x104>
        1025e0:	e3a07001 	mov	r7, #1	; 0x1
        1025e4:	e59d0000 	ldr	r0, [sp]
        1025e8:	eb6823fc 	bl	1b0b5e0 <$ObjectSize(unsigned long)>
        1025ec:	e1a06000 	mov	r6, r0
        1025f0:	e3370000 	teq	r7, #0	; 0x0
        1025f4:	159d0000 	ldrne	r0, [sp]
        1025f8:	1b0005b3 	blne	103ccc <UnmapLargeObject(unsigned long)>
        1025fc:	e28dd004 	add	sp, sp, #4	; 0x4
        102600:	e1a00006 	mov	r0, r6
        102604:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: LODefaultBackup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)
 * Address: 00102608
 */
LODefaultBackup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *) {
    /*
        102608:	e1a0c00d 	mov	ip, sp
        10260c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        102610:	e24cb004 	sub	fp, ip, #4	; 0x4
        102614:	e1a05000 	mov	r5, r0
        102618:	e1a04001 	mov	r4, r1
        10261c:	e1a09002 	mov	r9, r2
        102620:	e20300ff 	and	r0, r3, #255	; 0xff
        102624:	e59ba004 	ldr	sl, [fp, #4]
        102628:	e52d000c 	str	r0, [sp, -#12]!
        10262c:	e24dd024 	sub	sp, sp, #36	; 0x24
        102630:	e3a00000 	mov	r0, #0	; 0x0
        102634:	e58d0020 	str	r0, [sp, #32]
        102638:	e3a00000 	mov	r0, #0	; 0x0
        10263c:	e58d0014 	str	r0, [sp, #20]
        102640:	e58d0004 	str	r0, [sp, #4]
        102644:	e58d0000 	str	r0, [sp]
        102648:	e58d0008 	str	r0, [sp, #8]
        10264c:	e58d000c 	str	r0, [sp, #12]
        102650:	e3a08000 	mov	r8, #0	; 0x0
        102654:	e3a06000 	mov	r6, #0	; 0x0
        102658:	e58d0010 	str	r0, [sp, #16]
        10265c:	e3a00e52 	mov	r0, #1312	; 0x520
        102660:	eb6b3034 	bl	1bce738 <$__nw(unsigned int)>
        102664:	e1a07000 	mov	r7, r0
        102668:	eb6b7eac 	bl	1be2120 <$MemError>
        10266c:	e58d0020 	str	r0, [sp, #32]
        102670:	e59d0020 	ldr	r0, [sp, #32]
        102674:	e3300000 	teq	r0, #0	; 0x0
        102678:	1a0000e7 	bne	102a1c <LODefaultBackup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0x414>
        10267c:	e1a02009 	mov	r2, r9
        102680:	e1a01004 	mov	r1, r4
        102684:	e28d001c 	add	r0, sp, #28	; 0x1c
        102688:	eb6848e1 	bl	1b14a14 <$StoreToVAddr(unsigned long *, TStore *, unsigned long)>
        10268c:	e58d0020 	str	r0, [sp, #32]
        102690:	e59d0020 	ldr	r0, [sp, #32]
        102694:	e3300000 	teq	r0, #0	; 0x0
        102698:	0a00000a 	beq	1026c8 <LODefaultBackup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0xc0>
        10269c:	e1a02009 	mov	r2, r9
        1026a0:	e1a01004 	mov	r1, r4
        1026a4:	e28d001c 	add	r0, sp, #28	; 0x1c
        1026a8:	e3a03001 	mov	r3, #1	; 0x1
        1026ac:	eb6844d1 	bl	1b139f8 <$MapLargeObject(unsigned long *, TStore *, unsigned long, unsigned char)>
        1026b0:	e58d0020 	str	r0, [sp, #32]
        1026b4:	e59d0020 	ldr	r0, [sp, #32]
        1026b8:	e3300000 	teq	r0, #0	; 0x0
        1026bc:	1a0000d6 	bne	102a1c <LODefaultBackup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0x414>
        1026c0:	e3a00001 	mov	r0, #1	; 0x1
        1026c4:	e58d0014 	str	r0, [sp, #20]
        1026c8:	e59d001c 	ldr	r0, [sp, #28]
        1026cc:	eb6823c3 	bl	1b0b5e0 <$ObjectSize(unsigned long)>
        1026d0:	e58d0018 	str	r0, [sp, #24]
        1026d4:	e58d0000 	str	r0, [sp]
        1026d8:	e59d0024 	ldr	r0, [sp, #36]
        1026dc:	e59f10cc 	ldr	r1, [pc, #cc]	; 1027b0 <LODefaultBackup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0x1a8>
        1026e0:	e3300000 	teq	r0, #0	; 0x0
        1026e4:	e58d102c 	str	r1, [sp, #44]
        1026e8:	0a0000aa 	beq	102998 <LODefaultBackup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0x390>
        1026ec:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        1026f0:	e1a0000d 	mov	r0, sp
        1026f4:	eb67b433 	bl	1aef7c8 <PackageRoot::$__ct(void)>
        1026f8:	e3a03014 	mov	r3, #20	; 0x14
        1026fc:	e92d0008 	stmdb	sp!, {r3}
        102700:	e28d3004 	add	r3, sp, #4	; 0x4
        102704:	e1a01009 	mov	r1, r9
        102708:	e1a00004 	mov	r0, r4
        10270c:	e3a02000 	mov	r2, #0	; 0x0
        102710:	eb67fe8a 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        102714:	e28dd004 	add	sp, sp, #4	; 0x4
        102718:	e58d003c 	str	r0, [sp, #60]
        10271c:	e59d003c 	ldr	r0, [sp, #60]
        102720:	e3300000 	teq	r0, #0	; 0x0
        102724:	1a000032 	bne	1027f4 <LODefaultBackup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0x1ec>
        102728:	e28d2014 	add	r2, sp, #20	; 0x14
        10272c:	e1a00004 	mov	r0, r4
        102730:	e59d1000 	ldr	r1, [sp]
        102734:	eb67e171 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        102738:	e58d003c 	str	r0, [sp, #60]
        10273c:	e59d003c 	ldr	r0, [sp, #60]
        102740:	e3300000 	teq	r0, #0	; 0x0
        102744:	1a00002a 	bne	1027f4 <LODefaultBackup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0x1ec>
        102748:	e59d0014 	ldr	r0, [sp, #20]
        10274c:	e1a00120 	mov	r0, r0, lsr #2
        102750:	e58d0014 	str	r0, [sp, #20]
        102754:	e3a00000 	mov	r0, #0	; 0x0
        102758:	e52d006c 	str	r0, [sp, -#108]!
        10275c:	e28d0008 	add	r0, sp, #8	; 0x8
        102760:	eb6ac083 	bl	1bb2974 <$setjmp>
        102764:	e3300000 	teq	r0, #0	; 0x0
        102768:	1a000011 	bne	1027b4 <LODefaultBackup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0x1ac>
        10276c:	e1a0000d 	mov	r0, sp
        102770:	eb6b7641 	bl	1be007c <$AddExceptionHandler>
        102774:	e28d1078 	add	r1, sp, #120	; 0x78
        102778:	e1a00005 	mov	r0, r5
        10277c:	e3a03000 	mov	r3, #0	; 0x0
        102780:	e3a02004 	mov	r2, #4	; 0x4
        102784:	e595c000 	ldr	ip, [r5]
        102788:	e1a0e00f 	mov	lr, pc
        10278c:	e28cf018 	add	pc, ip, #24	; 0x18
        102790:	e28d10a0 	add	r1, sp, #160	; 0xa0
        102794:	e1a00005 	mov	r0, r5
        102798:	e3a03000 	mov	r3, #0	; 0x0
        10279c:	e3a02004 	mov	r2, #4	; 0x4
        1027a0:	e595c000 	ldr	ip, [r5]
        1027a4:	e1a0e00f 	mov	lr, pc
        1027a8:	e28cf018 	add	pc, ip, #24	; 0x18
        1027ac:	ea00000a 	b	1027dc <LODefaultBackup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0x1d4>
        1027b0:	00371324 	eoreqs	r1, r7, r4, lsr #6
        1027b4:	e59d0060 	ldr	r0, [sp, #96]
        1027b8:	e59d10b4 	ldr	r1, [sp, #180]
        1027bc:	e5911000 	ldr	r1, [r1]
        1027c0:	eb6b8273 	bl	1be3194 <$Subexception>
        1027c4:	e3300000 	teq	r0, #0	; 0x0
        1027c8:	159d0064 	ldrne	r0, [sp, #100]
        1027cc:	158d00a8 	strne	r0, [sp, #168]
        1027d0:	1a000001 	bne	1027dc <LODefaultBackup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0x1d4>
        1027d4:	e1a0000d 	mov	r0, sp
        1027d8:	eb6b7e5d 	bl	1be2154 <$NextHandler>
        1027dc:	e1a0000d 	mov	r0, sp
        1027e0:	eb6b7a34 	bl	1be10b8 <$ExitHandler>
        1027e4:	e28dd06c 	add	sp, sp, #108	; 0x6c
        1027e8:	e59d003c 	ldr	r0, [sp, #60]
        1027ec:	e3300000 	teq	r0, #0	; 0x0
        1027f0:	0a000001 	beq	1027fc <LODefaultBackup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0x1f4>
        1027f4:	e28dd01c 	add	sp, sp, #28	; 0x1c
        1027f8:	ea000087 	b	102a1c <LODefaultBackup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0x414>
        1027fc:	e3a09000 	mov	r9, #0	; 0x0
        102800:	e59d0014 	ldr	r0, [sp, #20]
        102804:	e3500000 	cmp	r0, #0	; 0x0
        102808:	da000060 	ble	102990 <LODefaultBackup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0x388>
        10280c:	e24d0068 	sub	r0, sp, #104	; 0x68
        102810:	e58d0044 	str	r0, [sp, #68]
        102814:	e24dd004 	sub	sp, sp, #4	; 0x4
        102818:	e3a03004 	mov	r3, #4	; 0x4
        10281c:	e92d0008 	stmdb	sp!, {r3}
        102820:	e1a02109 	mov	r2, r9, lsl #2
        102824:	e08d3003 	add	r3, sp, r3
        102828:	e1a00004 	mov	r0, r4
        10282c:	e59d1008 	ldr	r1, [sp, #8]
        102830:	eb67fe42 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        102834:	e28dd004 	add	sp, sp, #4	; 0x4
        102838:	e58d0040 	str	r0, [sp, #64]
        10283c:	e59d0040 	ldr	r0, [sp, #64]
        102840:	e3300000 	teq	r0, #0	; 0x0
        102844:	1a00003a 	bne	102934 <LODefaultBackup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0x32c>
        102848:	e28d201c 	add	r2, sp, #28	; 0x1c
        10284c:	e1a00004 	mov	r0, r4
        102850:	e59d1000 	ldr	r1, [sp]
        102854:	eb67e129 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        102858:	e58d0040 	str	r0, [sp, #64]
        10285c:	e59d0040 	ldr	r0, [sp, #64]
        102860:	e3300000 	teq	r0, #0	; 0x0
        102864:	1a000032 	bne	102934 <LODefaultBackup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0x32c>
        102868:	e59d301c 	ldr	r3, [sp, #28]
        10286c:	e92d0008 	stmdb	sp!, {r3}
        102870:	e1a03007 	mov	r3, r7
        102874:	e1a00004 	mov	r0, r4
        102878:	e3a02000 	mov	r2, #0	; 0x0
        10287c:	e59d1004 	ldr	r1, [sp, #4]
        102880:	eb67fe2e 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        102884:	e28dd004 	add	sp, sp, #4	; 0x4
        102888:	e58d0040 	str	r0, [sp, #64]
        10288c:	e59d0040 	ldr	r0, [sp, #64]
        102890:	e3300000 	teq	r0, #0	; 0x0
        102894:	1a000026 	bne	102934 <LODefaultBackup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0x32c>
        102898:	e3a00000 	mov	r0, #0	; 0x0
        10289c:	e52d006c 	str	r0, [sp, -#108]!
        1028a0:	e59d00b4 	ldr	r0, [sp, #180]
        1028a4:	eb6ac032 	bl	1bb2974 <$setjmp>
        1028a8:	e3300000 	teq	r0, #0	; 0x0
        1028ac:	1a000010 	bne	1028f4 <LODefaultBackup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0x2ec>
        1028b0:	e1a0000d 	mov	r0, sp
        1028b4:	eb6b75f0 	bl	1be007c <$AddExceptionHandler>
        1028b8:	e28d1088 	add	r1, sp, #136	; 0x88
        1028bc:	e1a00005 	mov	r0, r5
        1028c0:	e3a03000 	mov	r3, #0	; 0x0
        1028c4:	e3a02004 	mov	r2, #4	; 0x4
        1028c8:	e595c000 	ldr	ip, [r5]
        1028cc:	e1a0e00f 	mov	lr, pc
        1028d0:	e28cf018 	add	pc, ip, #24	; 0x18
        1028d4:	e1a01007 	mov	r1, r7
        1028d8:	e1a00005 	mov	r0, r5
        1028dc:	e3a03000 	mov	r3, #0	; 0x0
        1028e0:	e59d2088 	ldr	r2, [sp, #136]
        1028e4:	e595c000 	ldr	ip, [r5]
        1028e8:	e1a0e00f 	mov	lr, pc
        1028ec:	e28cf018 	add	pc, ip, #24	; 0x18
        1028f0:	ea000009 	b	10291c <LODefaultBackup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0x314>
        1028f4:	e59d0060 	ldr	r0, [sp, #96]
        1028f8:	e59d10b8 	ldr	r1, [sp, #184]
        1028fc:	e5911000 	ldr	r1, [r1]
        102900:	eb6b8223 	bl	1be3194 <$Subexception>
        102904:	e3300000 	teq	r0, #0	; 0x0
        102908:	159d0064 	ldrne	r0, [sp, #100]
        10290c:	158d00ac 	strne	r0, [sp, #172]
        102910:	1a000001 	bne	10291c <LODefaultBackup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0x314>
        102914:	e1a0000d 	mov	r0, sp
        102918:	eb6b7e0d 	bl	1be2154 <$NextHandler>
        10291c:	e1a0000d 	mov	r0, sp
        102920:	eb6b79e4 	bl	1be10b8 <$ExitHandler>
        102924:	e28dd06c 	add	sp, sp, #108	; 0x6c
        102928:	e59d0040 	ldr	r0, [sp, #64]
        10292c:	e3300000 	teq	r0, #0	; 0x0
        102930:	0a000001 	beq	10293c <LODefaultBackup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0x334>
        102934:	e28dd020 	add	sp, sp, #32	; 0x20
        102938:	ea000037 	b	102a1c <LODefaultBackup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0x414>
        10293c:	e59d001c 	ldr	r0, [sp, #28]
        102940:	e0881000 	add	r1, r8, r0
        102944:	e2818004 	add	r8, r1, #4	; 0x4
        102948:	e0860000 	add	r0, r6, r0
        10294c:	e2806004 	add	r6, r0, #4	; 0x4
        102950:	e33a0000 	teq	sl, #0	; 0x0
        102954:	0a000008 	beq	10297c <LODefaultBackup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0x374>
        102958:	e59a000c 	ldr	r0, [sl, #12]
        10295c:	e1500006 	cmp	r0, r6
        102960:	8a000005 	bhi	10297c <LODefaultBackup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0x374>
        102964:	e58d8024 	str	r8, [sp, #36]
        102968:	e28d1020 	add	r1, sp, #32	; 0x20
        10296c:	e1a0000a 	mov	r0, sl
        102970:	e1a0e00f 	mov	lr, pc
        102974:	e59af000 	ldr	pc, [sl]
        102978:	e3a06000 	mov	r6, #0	; 0x0
        10297c:	e28dd004 	add	sp, sp, #4	; 0x4
        102980:	e2899001 	add	r9, r9, #1	; 0x1
        102984:	e59d0014 	ldr	r0, [sp, #20]
        102988:	e1590000 	cmp	r9, r0
        10298c:	baffffa0 	blt	102814 <LODefaultBackup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0x20c>
        102990:	e28dd01c 	add	sp, sp, #28	; 0x1c
        102994:	ea00001c 	b	102a0c <LODefaultBackup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0x404>
        102998:	e3a00000 	mov	r0, #0	; 0x0
        10299c:	e52d006c 	str	r0, [sp, -#108]!
        1029a0:	e28d0008 	add	r0, sp, #8	; 0x8
        1029a4:	eb6abff2 	bl	1bb2974 <$setjmp>
        1029a8:	e3300000 	teq	r0, #0	; 0x0
        1029ac:	1a000009 	bne	1029d8 <LODefaultBackup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0x3d0>
        1029b0:	e1a0000d 	mov	r0, sp
        1029b4:	eb6b75b0 	bl	1be007c <$AddExceptionHandler>
        1029b8:	e1a00005 	mov	r0, r5
        1029bc:	e3a03000 	mov	r3, #0	; 0x0
        1029c0:	e59d1088 	ldr	r1, [sp, #136]
        1029c4:	e59d2084 	ldr	r2, [sp, #132]
        1029c8:	e595c000 	ldr	ip, [r5]
        1029cc:	e1a0e00f 	mov	lr, pc
        1029d0:	e28cf018 	add	pc, ip, #24	; 0x18
        1029d4:	ea000009 	b	102a00 <LODefaultBackup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0x3f8>
        1029d8:	e59d0060 	ldr	r0, [sp, #96]
        1029dc:	e59d1098 	ldr	r1, [sp, #152]
        1029e0:	e5911000 	ldr	r1, [r1]
        1029e4:	eb6b81ea 	bl	1be3194 <$Subexception>
        1029e8:	e3300000 	teq	r0, #0	; 0x0
        1029ec:	159d0064 	ldrne	r0, [sp, #100]
        1029f0:	158d008c 	strne	r0, [sp, #140]
        1029f4:	1a000001 	bne	102a00 <LODefaultBackup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0x3f8>
        1029f8:	e1a0000d 	mov	r0, sp
        1029fc:	eb6b7dd4 	bl	1be2154 <$NextHandler>
        102a00:	e1a0000d 	mov	r0, sp
        102a04:	eb6b79ab 	bl	1be10b8 <$ExitHandler>
        102a08:	e28dd06c 	add	sp, sp, #108	; 0x6c
        102a0c:	e59d0014 	ldr	r0, [sp, #20]
        102a10:	e3300000 	teq	r0, #0	; 0x0
        102a14:	159d001c 	ldrne	r0, [sp, #28]
        102a18:	1b0004ab 	blne	103ccc <UnmapLargeObject(unsigned long)>
        102a1c:	e1a00007 	mov	r0, r7
        102a20:	eb6b2b2e 	bl	1bcd6e0 <$__dl(void *)>
        102a24:	e59d0020 	ldr	r0, [sp, #32]
        102a28:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: LOCompanderName(TStore *, unsigned long, char *)
 * Address: 00102a2c
 */
LOCompanderName(TStore *, unsigned long, char *) {
    /*
        102a2c:	e1a0c00d 	mov	ip, sp
        102a30:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        102a34:	e24cb004 	sub	fp, ip, #4	; 0x4
        102a38:	e1a04000 	mov	r4, r0
        102a3c:	e1a06001 	mov	r6, r1
        102a40:	e1a05002 	mov	r5, r2
        102a44:	e24dd014 	sub	sp, sp, #20	; 0x14
        102a48:	e1a0000d 	mov	r0, sp
        102a4c:	eb67b35d 	bl	1aef7c8 <PackageRoot::$__ct(void)>
        102a50:	e3a03014 	mov	r3, #20	; 0x14
        102a54:	e92d0008 	stmdb	sp!, {r3}
        102a58:	e28d3004 	add	r3, sp, #4	; 0x4
        102a5c:	e1a01006 	mov	r1, r6
        102a60:	e1a00004 	mov	r0, r4
        102a64:	e3a02000 	mov	r2, #0	; 0x0
        102a68:	eb67fdb4 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        102a6c:	e28dd004 	add	sp, sp, #4	; 0x4
        102a70:	e3300000 	teq	r0, #0	; 0x0
        102a74:	1a000012 	bne	102ac4 <LOCompanderName(TStore *, unsigned long, char *)+0x98>
        102a78:	e24dd004 	sub	sp, sp, #4	; 0x4
        102a7c:	e59d1008 	ldr	r1, [sp, #8]
        102a80:	e1a0200d 	mov	r2, sp
        102a84:	e1a00004 	mov	r0, r4
        102a88:	eb67e09c 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        102a8c:	e3300000 	teq	r0, #0	; 0x0
        102a90:	1a00000a 	bne	102ac0 <LOCompanderName(TStore *, unsigned long, char *)+0x94>
        102a94:	e3a01000 	mov	r1, #0	; 0x0
        102a98:	e59d0000 	ldr	r0, [sp]
        102a9c:	e7c51000 	strb	r1, [r5, r0]
        102aa0:	e59d3000 	ldr	r3, [sp]
        102aa4:	e92d0008 	stmdb	sp!, {r3}
        102aa8:	e1a03005 	mov	r3, r5
        102aac:	e1a00004 	mov	r0, r4
        102ab0:	e3a02000 	mov	r2, #0	; 0x0
        102ab4:	e59d100c 	ldr	r1, [sp, #12]
        102ab8:	eb67fda0 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        102abc:	e28dd004 	add	sp, sp, #4	; 0x4
        102ac0:	e28dd004 	add	sp, sp, #4	; 0x4
        102ac4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: LOCompanderName(char **, TStore *, unsigned long)
 * Address: 00102cb8
 */
LOCompanderName(char **, TStore *, unsigned long) {
    /*
        102cb8:	e1a0c00d 	mov	ip, sp
        102cbc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        102cc0:	e24cb004 	sub	fp, ip, #4	; 0x4
        102cc4:	e1a04000 	mov	r4, r0
        102cc8:	e1a06001 	mov	r6, r1
        102ccc:	e1a05002 	mov	r5, r2
        102cd0:	e24dd004 	sub	sp, sp, #4	; 0x4
        102cd4:	e1a0200d 	mov	r2, sp
        102cd8:	e1a01005 	mov	r1, r5
        102cdc:	e1a00006 	mov	r0, r6
        102ce0:	eb6836d5 	bl	1b1083c <$LOCompanderNameStrLen(TStore *, unsigned long, long *)>
        102ce4:	e1b07000 	movs	r7, r0
        102ce8:	1a000010 	bne	102d30 <LOCompanderName(char **, TStore *, unsigned long)+0x78>
        102cec:	e59d0000 	ldr	r0, [sp]
        102cf0:	e2800001 	add	r0, r0, #1	; 0x1
        102cf4:	eb6b2e8f 	bl	1bce738 <$__nw(unsigned int)>
        102cf8:	e5840000 	str	r0, [r4]
        102cfc:	eb6b7d07 	bl	1be2120 <$MemError>
        102d00:	e1b07000 	movs	r7, r0
        102d04:	1a000009 	bne	102d30 <LOCompanderName(char **, TStore *, unsigned long)+0x78>
        102d08:	e1a01005 	mov	r1, r5
        102d0c:	e1a00006 	mov	r0, r6
        102d10:	e5942000 	ldr	r2, [r4]
        102d14:	eb6836c9 	bl	1b10840 <$LOCompanderName(TStore *, unsigned long, char *)>
        102d18:	e1b07000 	movs	r7, r0
        102d1c:	0a000003 	beq	102d30 <LOCompanderName(char **, TStore *, unsigned long)+0x78>
        102d20:	e5940000 	ldr	r0, [r4]
        102d24:	eb6b2a6d 	bl	1bcd6e0 <$__dl(void *)>
        102d28:	e3a00000 	mov	r0, #0	; 0x0
        102d2c:	e5840000 	str	r0, [r4]
        102d30:	e1a00007 	mov	r0, r7
        102d34:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: LOSizeOfStream(TStore *, unsigned long, unsigned char)
 * Address: 00102d38
 */
LOSizeOfStream(TStore *, unsigned long, unsigned char) {
    /*
        102d38:	e1a0c00d 	mov	ip, sp
        102d3c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        102d40:	e24cb004 	sub	fp, ip, #4	; 0x4
        102d44:	e1a05000 	mov	r5, r0
        102d48:	e1a04001 	mov	r4, r1
        102d4c:	e20280ff 	and	r8, r2, #255	; 0xff
        102d50:	e3a07000 	mov	r7, #0	; 0x0
        102d54:	e3a06000 	mov	r6, #0	; 0x0
        102d58:	e1a02001 	mov	r2, r1
        102d5c:	e1a01000 	mov	r1, r0
        102d60:	e52d7004 	str	r7, [sp, -#4]!
        102d64:	e1a0000d 	mov	r0, sp
        102d68:	eb6836b5 	bl	1b10844 <$LOCompanderName(char **, TStore *, unsigned long)>
        102d6c:	e3300000 	teq	r0, #0	; 0x0
        102d70:	1a00002a 	bne	102e20 <LOSizeOfStream(TStore *, unsigned long, unsigned char)+0xe8>
        102d74:	e59d2000 	ldr	r2, [sp]
        102d78:	e28f0f11 	add	r0, pc, #68	; 0x44
        102d7c:	e3a01000 	mov	r1, #0	; 0x0
        102d80:	eb6b5380 	bl	1bd7b88 <$NewByName__FPCcN21>
        102d84:	e1a06000 	mov	r6, r0
        102d88:	e3500000 	cmp	r0, #0	; 0x0
        102d8c:	1a000014 	bne	102de4 <LOSizeOfStream(TStore *, unsigned long, unsigned char)+0xac>
        102d90:	e59d1000 	ldr	r1, [sp]
        102d94:	e28f0f0e 	add	r0, pc, #56	; 0x38
        102d98:	e3a02000 	mov	r2, #0	; 0x0
        102d9c:	eb6b3296 	bl	1bcf7fc <$ClassInfoByName__FPCcT1Ul>
        102da0:	e3300000 	teq	r0, #0	; 0x0
        102da4:	0a00000f 	beq	102de8 <LOSizeOfStream(TStore *, unsigned long, unsigned char)+0xb0>
        102da8:	e59d0000 	ldr	r0, [sp]
        102dac:	eb6b2a4b 	bl	1bcd6e0 <$__dl(void *)>
        102db0:	e1a02008 	mov	r2, r8
        102db4:	e1a01004 	mov	r1, r4
        102db8:	e1a00005 	mov	r0, r5
        102dbc:	eb682201 	bl	1b0b5c8 <$LODefaultStreamSize(TStore *, unsigned long, unsigned char)>
        102dc0:	ea00001e 	b	102e40 <LOSizeOfStream(TStore *, unsigned long, unsigned char)+0x108>
        102dc4:	544c7267 	strplb	r7, [ip], -#615
        102dc8:	4f626a53 	swimi	0x00626a53
        102dcc:	746f7265 	strvcbt	r7, [pc], #265	; 102dd4 <LOSizeOfStream(TStore *, unsigned long, unsigned char)+0x9c>
        102dd0:	00000000 	andeq	r0, r0, r0
        102dd4:	5453746f 	ldrplb	r7, [r3], -#1135
        102dd8:	7265436f 	rsbvc	r4, r5, #-1140850687	; 0xbc000001
        102ddc:	6d70616e 	ldfvse	f6, [r0, -#440]!
        102de0:	64657200 	strvsbt	r7, [r5], -#512
        102de4:	1a000002 	bne	102df4 <LOSizeOfStream(TStore *, unsigned long, unsigned char)+0xbc>
        102de8:	e3a000ea 	mov	r0, #234	; 0xea
        102dec:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        102df0:	ea000012 	b	102e40 <LOSizeOfStream(TStore *, unsigned long, unsigned char)+0x108>
        102df4:	e1a00006 	mov	r0, r6
        102df8:	eb68327c 	bl	1b0f7f0 <TLrgObjStore::$Init(void)>
        102dfc:	e3300000 	teq	r0, #0	; 0x0
        102e00:	1a000006 	bne	102e20 <LOSizeOfStream(TStore *, unsigned long, unsigned char)+0xe8>
        102e04:	e1a03008 	mov	r3, r8
        102e08:	e1a02004 	mov	r2, r4
        102e0c:	e1a01005 	mov	r1, r5
        102e10:	e1a00006 	mov	r0, r6
        102e14:	eb683ab6 	bl	1b118f4 <TLrgObjStore::$SizeOfStream(TStore *, unsigned long, unsigned char)>
        102e18:	e1a07000 	mov	r7, r0
        102e1c:	ea000001 	b	102e28 <LOSizeOfStream(TStore *, unsigned long, unsigned char)+0xf0>
        102e20:	e3300000 	teq	r0, #0	; 0x0
        102e24:	13a07000 	movne	r7, #0	; 0x0
        102e28:	e3360000 	teq	r6, #0	; 0x0
        102e2c:	11a00006 	movne	r0, r6
        102e30:	1b682e49 	blne	1b0e75c <TLrgObjStore::$Delete(void)>
        102e34:	e59d0000 	ldr	r0, [sp]
        102e38:	eb6b2a28 	bl	1bcd6e0 <$__dl(void *)>
        102e3c:	e1a00007 	mov	r0, r7
        102e40:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: LOWrite(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)
 * Address: 00102e44
 */
LOWrite(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *) {
    /*
        102e44:	e1a0c00d 	mov	ip, sp
        102e48:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        102e4c:	e24cb004 	sub	fp, ip, #4	; 0x4
        102e50:	e1a06000 	mov	r6, r0
        102e54:	e1a05001 	mov	r5, r1
        102e58:	e1a04002 	mov	r4, r2
        102e5c:	e20390ff 	and	r9, r3, #255	; 0xff
        102e60:	e3a00000 	mov	r0, #0	; 0x0
        102e64:	e59ba004 	ldr	sl, [fp, #4]
        102e68:	e52d0004 	str	r0, [sp, -#4]!
        102e6c:	e1a0000d 	mov	r0, sp
        102e70:	eb683673 	bl	1b10844 <$LOCompanderName(char **, TStore *, unsigned long)>
        102e74:	e1b07000 	movs	r7, r0
        102e78:	1a000034 	bne	102f50 <LOWrite(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0x10c>
        102e7c:	e59d2000 	ldr	r2, [sp]
        102e80:	e28f0f15 	add	r0, pc, #84	; 0x54
        102e84:	e3a01000 	mov	r1, #0	; 0x0
        102e88:	eb6b533e 	bl	1bd7b88 <$NewByName__FPCcN21>
        102e8c:	e1a08000 	mov	r8, r0
        102e90:	e3500000 	cmp	r0, #0	; 0x0
        102e94:	1a000018 	bne	102efc <LOWrite(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0xb8>
        102e98:	e59d1000 	ldr	r1, [sp]
        102e9c:	e28f0f12 	add	r0, pc, #72	; 0x48
        102ea0:	e3a02000 	mov	r2, #0	; 0x0
        102ea4:	eb6b3254 	bl	1bcf7fc <$ClassInfoByName__FPCcT1Ul>
        102ea8:	e3300000 	teq	r0, #0	; 0x0
        102eac:	0a000013 	beq	102f00 <LOWrite(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0xbc>
        102eb0:	e59d0000 	ldr	r0, [sp]
        102eb4:	eb6b2a09 	bl	1bcd6e0 <$__dl(void *)>
        102eb8:	e1a0300a 	mov	r3, sl
        102ebc:	e92d0008 	stmdb	sp!, {r3}
        102ec0:	e1a03009 	mov	r3, r9
        102ec4:	e1a02004 	mov	r2, r4
        102ec8:	e1a01005 	mov	r1, r5
        102ecc:	e1a00006 	mov	r0, r6
        102ed0:	eb68365d 	bl	1b1084c <$LODefaultBackup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)>
        102ed4:	e28dd004 	add	sp, sp, #4	; 0x4
        102ed8:	ea00001f 	b	102f5c <LOWrite(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0x118>
        102edc:	544c7267 	strplb	r7, [ip], -#615
        102ee0:	4f626a53 	swimi	0x00626a53
        102ee4:	746f7265 	strvcbt	r7, [pc], #265	; 102eec <LOWrite(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0xa8>
        102ee8:	00000000 	andeq	r0, r0, r0
        102eec:	5453746f 	ldrplb	r7, [r3], -#1135
        102ef0:	7265436f 	rsbvc	r4, r5, #-1140850687	; 0xbc000001
        102ef4:	6d70616e 	ldfvse	f6, [r0, -#440]!
        102ef8:	64657200 	strvsbt	r7, [r5], -#512
        102efc:	1a000002 	bne	102f0c <LOWrite(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0xc8>
        102f00:	e3a000ea 	mov	r0, #234	; 0xea
        102f04:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        102f08:	ea000013 	b	102f5c <LOWrite(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0x118>
        102f0c:	e1a00008 	mov	r0, r8
        102f10:	eb683236 	bl	1b0f7f0 <TLrgObjStore::$Init(void)>
        102f14:	e1b07000 	movs	r7, r0
        102f18:	1a000009 	bne	102f44 <LOWrite(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)+0x100>
        102f1c:	e1a0300a 	mov	r3, sl
        102f20:	e1a02009 	mov	r2, r9
        102f24:	e92d000c 	stmdb	sp!, {r2, r3}
        102f28:	e1a03004 	mov	r3, r4
        102f2c:	e1a02005 	mov	r2, r5
        102f30:	e1a01006 	mov	r1, r6
        102f34:	e1a00008 	mov	r0, r8
        102f38:	eb0a115b 	bl	3874ac <TLrgObjStore::Backup(CPipe *, TStore *, unsigned long, unsigned char, TLOCallback *)>
        102f3c:	e28dd008 	add	sp, sp, #8	; 0x8
        102f40:	e1a07000 	mov	r7, r0
        102f44:	e3380000 	teq	r8, #0	; 0x0
        102f48:	11a00008 	movne	r0, r8
        102f4c:	1b682e02 	blne	1b0e75c <TLrgObjStore::$Delete(void)>
        102f50:	e59d0000 	ldr	r0, [sp]
        102f54:	eb6b29e1 	bl	1bcd6e0 <$__dl(void *)>
        102f58:	e1a00007 	mov	r0, r7
        102f5c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: LargeObjectAddressIsValid(unsigned long)
 * Address: 00103660
 */
LargeObjectAddressIsValid(unsigned long) {
    /*
        103660:	e1a0c00d 	mov	ip, sp
        103664:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        103668:	e24cb004 	sub	fp, ip, #4	; 0x4
        10366c:	e1a04000 	mov	r4, r0
        103670:	e24dd024 	sub	sp, sp, #36	; 0x24
        103674:	e28d0008 	add	r0, sp, #8	; 0x8
        103678:	eb684d2b 	bl	1b16b2c <RDMParams::$__ct(void)>
        10367c:	eb684d2f 	bl	1b16b40 <$GetROMDomainUserMonitor(void)>
        103680:	e3a01000 	mov	r1, #0	; 0x0
        103684:	e5cd1004 	strb	r1, [sp, #4]
        103688:	e5900000 	ldr	r0, [r0]
        10368c:	e58d0000 	str	r0, [sp]
        103690:	e58d4010 	str	r4, [sp, #16]
        103694:	e28d2008 	add	r2, sp, #8	; 0x8
        103698:	e3a0100f 	mov	r1, #15	; 0xf
        10369c:	eb0aab1f 	bl	3ae320 <MonitorDispatchSWI>
        1036a0:	e3300000 	teq	r0, #0	; 0x0
        1036a4:	13a04000 	movne	r4, #0	; 0x0
        1036a8:	1a000002 	bne	1036b8 <LargeObjectAddressIsValid(unsigned long)+0x58>
        1036ac:	e59d0008 	ldr	r0, [sp, #8]
        1036b0:	eb6840cf 	bl	1b139f4 <$IsValidStore(TStore const *)>
        1036b4:	e1a04000 	mov	r4, r0
        1036b8:	e1a0000d 	mov	r0, sp
        1036bc:	e3a01000 	mov	r1, #0	; 0x0
        1036c0:	eb6b2c1a 	bl	1bce730 <TUMonitor::$__dt(void)>
        1036c4:	e1a00004 	mov	r0, r4
        1036c8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: LargeObjectIsDirty(unsigned long)
 * Address: 001036cc
 */
LargeObjectIsDirty(unsigned long) {
    /*
        1036cc:	e1a0c00d 	mov	ip, sp
        1036d0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1036d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1036d8:	e1a04000 	mov	r4, r0
        1036dc:	e24dd024 	sub	sp, sp, #36	; 0x24
        1036e0:	e28d0008 	add	r0, sp, #8	; 0x8
        1036e4:	eb684d10 	bl	1b16b2c <RDMParams::$__ct(void)>
        1036e8:	eb684d14 	bl	1b16b40 <$GetROMDomainUserMonitor(void)>
        1036ec:	e3a01000 	mov	r1, #0	; 0x0
        1036f0:	e5cd1004 	strb	r1, [sp, #4]
        1036f4:	e5900000 	ldr	r0, [r0]
        1036f8:	e58d0000 	str	r0, [sp]
        1036fc:	e58d4010 	str	r4, [sp, #16]
        103700:	e28d2008 	add	r2, sp, #8	; 0x8
        103704:	e3a0100d 	mov	r1, #13	; 0xd
        103708:	eb0aab04 	bl	3ae320 <MonitorDispatchSWI>
        10370c:	e3300000 	teq	r0, #0	; 0x0
        103710:	05dd0021 	ldreqb	r0, [sp, #33]
        103714:	13a00000 	movne	r0, #0	; 0x0
        103718:	e20040ff 	and	r4, r0, #255	; 0xff
        10371c:	e1a0000d 	mov	r0, sp
        103720:	e3a01000 	mov	r1, #0	; 0x0
        103724:	eb6b2c01 	bl	1bce730 <TUMonitor::$__dt(void)>
        103728:	e1a00004 	mov	r0, r4
        10372c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: LargeObjectIsReadOnly(unsigned long)
 * Address: 00103730
 */
LargeObjectIsReadOnly(unsigned long) {
    /*
        103730:	e1a0c00d 	mov	ip, sp
        103734:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        103738:	e24cb004 	sub	fp, ip, #4	; 0x4
        10373c:	e1a04000 	mov	r4, r0
        103740:	e24dd024 	sub	sp, sp, #36	; 0x24
        103744:	e28d0008 	add	r0, sp, #8	; 0x8
        103748:	eb684cf7 	bl	1b16b2c <RDMParams::$__ct(void)>
        10374c:	eb684cfb 	bl	1b16b40 <$GetROMDomainUserMonitor(void)>
        103750:	e3a01000 	mov	r1, #0	; 0x0
        103754:	e5cd1004 	strb	r1, [sp, #4]
        103758:	e5900000 	ldr	r0, [r0]
        10375c:	e58d0000 	str	r0, [sp]
        103760:	e58d4010 	str	r4, [sp, #16]
        103764:	e28d2008 	add	r2, sp, #8	; 0x8
        103768:	e3a0100d 	mov	r1, #13	; 0xd
        10376c:	eb0aaaeb 	bl	3ae320 <MonitorDispatchSWI>
        103770:	e3300000 	teq	r0, #0	; 0x0
        103774:	05dd0020 	ldreqb	r0, [sp, #32]
        103778:	13a00001 	movne	r0, #1	; 0x1
        10377c:	e20040ff 	and	r4, r0, #255	; 0xff
        103780:	e1a0000d 	mov	r0, sp
        103784:	e3a01000 	mov	r1, #0	; 0x0
        103788:	eb6b2be8 	bl	1bce730 <TUMonitor::$__dt(void)>
        10378c:	e1a00004 	mov	r0, r4
        103790:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: LODeleteByProtocol(TStore *, unsigned long)
 * Address: 00103adc
 */
LODeleteByProtocol(TStore *, unsigned long) {
    /*
        103adc:	e1a0c00d 	mov	ip, sp
        103ae0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        103ae4:	e24cb004 	sub	fp, ip, #4	; 0x4
        103ae8:	e1a04000 	mov	r4, r0
        103aec:	e1a05001 	mov	r5, r1
        103af0:	e24dd004 	sub	sp, sp, #4	; 0x4
        103af4:	e1a0200d 	mov	r2, sp
        103af8:	eb6822c1 	bl	1b0c604 <$GetLOAllocator(TStore *, unsigned long, TLrgObjStore **)>
        103afc:	e59d0000 	ldr	r0, [sp]
        103b00:	e3300000 	teq	r0, #0	; 0x0
        103b04:	0a000006 	beq	103b24 <LODeleteByProtocol(TStore *, unsigned long)+0x48>
        103b08:	e1a02005 	mov	r2, r5
        103b0c:	e1a01004 	mov	r1, r4
        103b10:	eb682b0f 	bl	1b0e754 <TLrgObjStore::$DeleteObject(TStore *, unsigned long)>
        103b14:	e1a04000 	mov	r4, r0
        103b18:	e59d0000 	ldr	r0, [sp]
        103b1c:	eb682b0e 	bl	1b0e75c <TLrgObjStore::$Delete(void)>
        103b20:	ea000003 	b	103b34 <LODeleteByProtocol(TStore *, unsigned long)+0x58>
        103b24:	e1a01005 	mov	r1, r5
        103b28:	e1a00004 	mov	r0, r4
        103b2c:	eb683347 	bl	1b10850 <$LODefaultDelete(TStore *, unsigned long)>
        103b30:	e1a04000 	mov	r4, r0
        103b34:	e1a00004 	mov	r0, r4
        103b38:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: LHAddEntry__FPUlUlN22PvT2
 * Address: 001059b4
 */
void globals::LHAddEntry() {
    /*
        1059b4:	e1a0c00d 	mov	ip, sp
        1059b8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1059bc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1059c0:	e24cb014 	sub	fp, ip, #20	; 0x14
        1059c4:	e1a04000 	mov	r4, r0
        1059c8:	e3a07000 	mov	r7, #0	; 0x0
        1059cc:	e3a05000 	mov	r5, #0	; 0x0
        1059d0:	e28b8014 	add	r8, fp, #20	; 0x14
        1059d4:	e8980101 	ldmia	r8, {r0, r8}
        1059d8:	e3300000 	teq	r0, #0	; 0x0
        1059dc:	13380000 	teqne	r8, #0	; 0x0
        1059e0:	03e06001 	mvneq	r6, #1	; 0x1
        1059e4:	0a000071 	beq	105bb0 <LHAddEntry__FPUlUlN22PvT2+0x1fc>
        1059e8:	e5940000 	ldr	r0, [r4]
        1059ec:	e3300000 	teq	r0, #0	; 0x0
        1059f0:	02880018 	addeq	r0, r8, #24	; 0x18
        1059f4:	03a0a018 	moveq	sl, #24	; 0x18
        1059f8:	0a00001b 	beq	105a6c <LHAddEntry__FPUlUlN22PvT2+0xb8>
        1059fc:	eb686db2 	bl	1b210cc <$LHLock(unsigned long)>
        105a00:	e1b05000 	movs	r5, r0
        105a04:	03e06000 	mvneq	r6, #0	; 0x0
        105a08:	0a000068 	beq	105bb0 <LHAddEntry__FPUlUlN22PvT2+0x1fc>
        105a0c:	e3a03000 	mov	r3, #0	; 0x0
        105a10:	e3a02000 	mov	r2, #0	; 0x0
        105a14:	e92d000c 	stmdb	sp!, {r2, r3}
        105a18:	e1a00005 	mov	r0, r5
        105a1c:	e28b3008 	add	r3, fp, #8	; 0x8
        105a20:	e893000e 	ldmia	r3, {r1, r2, r3}
        105a24:	eb686da7 	bl	1b210c8 <$LHFindEntry__FPvUlN22PPvPUl>
        105a28:	e28dd008 	add	sp, sp, #8	; 0x8
        105a2c:	e1a06000 	mov	r6, r0
        105a30:	e3700003 	cmn	r0, #3	; 0x3
        105a34:	0a000002 	beq	105a44 <LHAddEntry__FPUlUlN22PvT2+0x90>
        105a38:	e3360000 	teq	r6, #0	; 0x0
        105a3c:	03e06003 	mvneq	r6, #3	; 0x3
        105a40:	ea000011 	b	105a8c <LHAddEntry__FPUlUlN22PvT2+0xd8>
        105a44:	e5950000 	ldr	r0, [r5]
        105a48:	e0800100 	add	r0, r0, r0, lsl #2
        105a4c:	e0850100 	add	r0, r5, r0, lsl #2
        105a50:	e2409010 	sub	r9, r0, #16	; 0x10
        105a54:	e289100c 	add	r1, r9, #12	; 0xc
        105a58:	e8910003 	ldmia	r1, {r0, r1}
        105a5c:	e0800001 	add	r0, r0, r1
        105a60:	e0800008 	add	r0, r0, r8
        105a64:	e2800014 	add	r0, r0, #20	; 0x14
        105a68:	e040a008 	sub	sl, r0, r8
        105a6c:	eb65a74e 	bl	1a6f7ac <$HWRMemoryAllocHandle(unsigned long)>
        105a70:	e1b07000 	movs	r7, r0
        105a74:	0a000003 	beq	105a88 <LHAddEntry__FPUlUlN22PvT2+0xd4>
        105a78:	e1a00007 	mov	r0, r7
        105a7c:	eb686d92 	bl	1b210cc <$LHLock(unsigned long)>
        105a80:	e1b06000 	movs	r6, r0
        105a84:	1a000008 	bne	105aac <LHAddEntry__FPUlUlN22PvT2+0xf8>
        105a88:	e3e06000 	mvn	r6, #0	; 0x0
        105a8c:	e3350000 	teq	r5, #0	; 0x0
        105a90:	15940000 	ldrne	r0, [r4]
        105a94:	13300000 	teqne	r0, #0	; 0x0
        105a98:	1b686d8c 	blne	1b210d0 <$LHUnLock(unsigned long)>
        105a9c:	e3370000 	teq	r7, #0	; 0x0
        105aa0:	11a00007 	movne	r0, r7
        105aa4:	1b65a743 	blne	1a6f7b8 <$HWRMemoryFreeHandle(unsigned long)>
        105aa8:	ea000040 	b	105bb0 <LHAddEntry__FPUlUlN22PvT2+0x1fc>
        105aac:	e3a00000 	mov	r0, #0	; 0x0
        105ab0:	e3350000 	teq	r5, #0	; 0x0
        105ab4:	e5860000 	str	r0, [r6]
        105ab8:	0a000027 	beq	105b5c <LHAddEntry__FPUlUlN22PvT2+0x1a8>
        105abc:	e2899008 	add	r9, r9, #8	; 0x8
        105ac0:	e9b90003 	ldmib	r9!, {r0, r1}
        105ac4:	e0801001 	add	r1, r0, r1
        105ac8:	e5950000 	ldr	r0, [r5]
        105acc:	e0800100 	add	r0, r0, r0, lsl #2
        105ad0:	e0411100 	sub	r1, r1, r0, lsl #2
        105ad4:	e2412004 	sub	r2, r1, #4	; 0x4
        105ad8:	e0851100 	add	r1, r5, r0, lsl #2
        105adc:	e2811004 	add	r1, r1, #4	; 0x4
        105ae0:	e0860100 	add	r0, r6, r0, lsl #2
        105ae4:	e2800018 	add	r0, r0, #24	; 0x18
        105ae8:	eb6abbd9 	bl	1bb4a54 <$memmove>
        105aec:	e5950000 	ldr	r0, [r5]
        105af0:	e5860000 	str	r0, [r6]
        105af4:	e3a00000 	mov	r0, #0	; 0x0
        105af8:	e5951000 	ldr	r1, [r5]
        105afc:	e3510000 	cmp	r1, #0	; 0x0
        105b00:	9a000011 	bls	105b4c <LHAddEntry__FPUlUlN22PvT2+0x198>
        105b04:	e0802100 	add	r2, r0, r0, lsl #2
        105b08:	e0851102 	add	r1, r5, r2, lsl #2
        105b0c:	e2811004 	add	r1, r1, #4	; 0x4
        105b10:	e0862102 	add	r2, r6, r2, lsl #2
        105b14:	e2822004 	add	r2, r2, #4	; 0x4
        105b18:	e1a09001 	mov	r9, r1
        105b1c:	e1a0e002 	mov	lr, r2
        105b20:	e8b91008 	ldmia	r9!, {r3, ip}
        105b24:	e8ae1008 	stmia	lr!, {r3, ip}
        105b28:	e8991208 	ldmia	r9, {r3, r9, ip}
        105b2c:	e88e1208 	stmia	lr, {r3, r9, ip}
        105b30:	e591100c 	ldr	r1, [r1, #12]
        105b34:	e2811014 	add	r1, r1, #20	; 0x14
        105b38:	e2800001 	add	r0, r0, #1	; 0x1
        105b3c:	e5a2100c 	str	r1, [r2, #12]!
        105b40:	e5951000 	ldr	r1, [r5]
        105b44:	e1500001 	cmp	r0, r1
        105b48:	3affffed 	bcc	105b04 <LHAddEntry__FPUlUlN22PvT2+0x150>
        105b4c:	e5940000 	ldr	r0, [r4]
        105b50:	eb686d5e 	bl	1b210d0 <$LHUnLock(unsigned long)>
        105b54:	e5940000 	ldr	r0, [r4]
        105b58:	eb65a716 	bl	1a6f7b8 <$HWRMemoryFreeHandle(unsigned long)>
        105b5c:	e5960000 	ldr	r0, [r6]
        105b60:	e2800001 	add	r0, r0, #1	; 0x1
        105b64:	e5860000 	str	r0, [r6]
        105b68:	e0800100 	add	r0, r0, r0, lsl #2
        105b6c:	e0860100 	add	r0, r6, r0, lsl #2
        105b70:	e59b1008 	ldr	r1, [fp, #8]
        105b74:	e5201010 	str	r1, [r0, -#16]!
        105b78:	e59b200c 	ldr	r2, [fp, #12]
        105b7c:	e5802004 	str	r2, [r0, #4]
        105b80:	e59b3010 	ldr	r3, [fp, #16]
        105b84:	e2800004 	add	r0, r0, #4	; 0x4
        105b88:	e9a00408 	stmib	r0!, {r3, sl}
        105b8c:	e5808004 	str	r8, [r0, #4]
        105b90:	e086000a 	add	r0, r6, sl
        105b94:	e1a02008 	mov	r2, r8
        105b98:	e59b1014 	ldr	r1, [fp, #20]
        105b9c:	eb6abbac 	bl	1bb4a54 <$memmove>
        105ba0:	e1a00007 	mov	r0, r7
        105ba4:	eb686d49 	bl	1b210d0 <$LHUnLock(unsigned long)>
        105ba8:	e3a06000 	mov	r6, #0	; 0x0
        105bac:	e5847000 	str	r7, [r4]
        105bb0:	e1a00006 	mov	r0, r6
        105bb4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: LHLock(unsigned long)
 * Address: 00105bb8
 */
LHLock(unsigned long) {
    /*
        105bb8:	e3300000 	teq	r0, #0	; 0x0
        105bbc:	1a65a6fb 	bne	1a6f7b0 <$HWRMemoryLockHandle(unsigned long)>
        105bc0:	03a00000 	moveq	r0, #0	; 0x0
        105bc4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: LHUnLock(unsigned long)
 * Address: 00105bc8
 */
LHUnLock(unsigned long) {
    /*
        105bc8:	e3300000 	teq	r0, #0	; 0x0
        105bcc:	03e00001 	mvneq	r0, #1	; 0x1
        105bd0:	01a0f00e 	moveq	pc, lr
        105bd4:	e1a0c00d 	mov	ip, sp
        105bd8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        105bdc:	e24cb004 	sub	fp, ip, #4	; 0x4
        105be0:	eb65a6f3 	bl	1a6f7b4 <$HWRMemoryUnlockHandle(unsigned long)>
        105be4:	e3a00000 	mov	r0, #0	; 0x0
        105be8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: LHFindEntry__FPvUlN22PPvPUl
 * Address: 00105bec
 */
void globals::LHFindEntry() {
    /*
        105bec:	e92d47f0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, lr}
        105bf0:	e3a06000 	mov	r6, #0	; 0x0
        105bf4:	e3a05000 	mov	r5, #0	; 0x0
        105bf8:	e3300000 	teq	r0, #0	; 0x0
        105bfc:	e59d8024 	ldr	r8, [sp, #36]
        105c00:	e59d9020 	ldr	r9, [sp, #32]
        105c04:	03e00001 	mvneq	r0, #1	; 0x1
        105c08:	08bd87f0 	ldmeqia	sp!, {r4, r5, r6, r7, r8, r9, sl, pc}
        105c0c:	e3a04000 	mov	r4, #0	; 0x0
        105c10:	e5907000 	ldr	r7, [r0]
        105c14:	e3570000 	cmp	r7, #0	; 0x0
        105c18:	9a000013 	bls	105c6c <LHFindEntry__FPvUlN22PPvPUl+0x80>
        105c1c:	e084c104 	add	ip, r4, r4, lsl #2
        105c20:	e080c10c 	add	ip, r0, ip, lsl #2
        105c24:	e28ce004 	add	lr, ip, #4	; 0x4
        105c28:	e59fa06c 	ldr	sl, [pc, #6c]	; 105c9c <LHFindEntry__FPvUlN22PPvPUl+0xb0>
        105c2c:	e131000a 	teq	r1, sl
        105c30:	159ec000 	ldrne	ip, [lr]
        105c34:	113c0001 	teqne	ip, r1
        105c38:	1a000008 	bne	105c60 <LHFindEntry__FPvUlN22PPvPUl+0x74>
        105c3c:	e59fa058 	ldr	sl, [pc, #58]	; 105c9c <LHFindEntry__FPvUlN22PPvPUl+0xb0>
        105c40:	e132000a 	teq	r2, sl
        105c44:	159ec004 	ldrne	ip, [lr, #4]
        105c48:	113c0002 	teqne	ip, r2
        105c4c:	1a000003 	bne	105c60 <LHFindEntry__FPvUlN22PPvPUl+0x74>
        105c50:	e133000a 	teq	r3, sl
        105c54:	159ec008 	ldrne	ip, [lr, #8]
        105c58:	113c0003 	teqne	ip, r3
        105c5c:	0a000002 	beq	105c6c <LHFindEntry__FPvUlN22PPvPUl+0x80>
        105c60:	e2844001 	add	r4, r4, #1	; 0x1
        105c64:	e1540007 	cmp	r4, r7
        105c68:	3affffeb 	bcc	105c1c <LHFindEntry__FPvUlN22PPvPUl+0x30>
        105c6c:	e1540007 	cmp	r4, r7
        105c70:	23e00002 	mvncs	r0, #2	; 0x2
        105c74:	2a000003 	bcs	105c88 <LHFindEntry__FPvUlN22PPvPUl+0x9c>
        105c78:	e59e100c 	ldr	r1, [lr, #12]
        105c7c:	e0816000 	add	r6, r1, r0
        105c80:	e3a00000 	mov	r0, #0	; 0x0
        105c84:	e5be5010 	ldr	r5, [lr, #16]!
        105c88:	e3390000 	teq	r9, #0	; 0x0
        105c8c:	15896000 	strne	r6, [r9]
        105c90:	e3380000 	teq	r8, #0	; 0x0
        105c94:	15885000 	strne	r5, [r8]
        105c98:	e8bd87f0 	ldmia	sp!, {r4, r5, r6, r7, r8, r9, sl, pc}
        105c9c:	2a2a2a2a 	bcs	b9054c <ROM$$Size+0x470900>
    */
}

/**
 * Symbol: LIInit(void)
 * Address: 00105de4
 */
LIInit(void) {
    /*
        105de4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: LIGetVariantIndex(void *, unsigned char, short)
 * Address: 00105e3c
 */
LIGetVariantIndex(void *, unsigned char, short) {
    /*
        105e3c:	e1a0c00d 	mov	ip, sp
        105e40:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        105e44:	e24cb004 	sub	fp, ip, #4	; 0x4
        105e48:	e1a04000 	mov	r4, r0
        105e4c:	e20170ff 	and	r7, r1, #255	; 0xff
        105e50:	e1a08802 	mov	r8, r2, lsl #16
        105e54:	e1a08848 	mov	r8, r8, asr #16
        105e58:	e3a05000 	mov	r5, #0	; 0x0
        105e5c:	eb000851 	bl	107fa8 <LILetterCount(void *)>
        105e60:	e1a06000 	mov	r6, r0
        105e64:	e1a00004 	mov	r0, r4
        105e68:	eb000905 	bl	108284 <LIFirstInfo(void *)>
        105e6c:	e3a04000 	mov	r4, #0	; 0x0
        105e70:	e3560000 	cmp	r6, #0	; 0x0
        105e74:	9a000008 	bls	105e9c <LIGetVariantIndex(void *, unsigned char, short)+0x60>
        105e78:	e5d01000 	ldrb	r1, [r0]
        105e7c:	e1310007 	teq	r1, r7
        105e80:	0a000005 	beq	105e9c <LIGetVariantIndex(void *, unsigned char, short)+0x60>
        105e84:	e5d01001 	ldrb	r1, [r0, #1]
        105e88:	e0815005 	add	r5, r1, r5
        105e8c:	eb000915 	bl	1082e8 <GetNextLetter(LILetterInfoType *)>
        105e90:	e2844001 	add	r4, r4, #1	; 0x1
        105e94:	e1540006 	cmp	r4, r6
        105e98:	3afffff6 	bcc	105e78 <LIGetVariantIndex(void *, unsigned char, short)+0x3c>
        105e9c:	e0850008 	add	r0, r5, r8
        105ea0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: LIGetIndexedLetterInfo(void *, unsigned long, LILetterInfoType **, short *)
 * Address: 00105ea4
 */
LIGetIndexedLetterInfo(void *, unsigned long, LILetterInfoType **, short *) {
    /*
        105ea4:	e1a0c00d 	mov	ip, sp
        105ea8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        105eac:	e24cb004 	sub	fp, ip, #4	; 0x4
        105eb0:	e1a07000 	mov	r7, r0
        105eb4:	e1a06001 	mov	r6, r1
        105eb8:	e1a05002 	mov	r5, r2
        105ebc:	e1a04003 	mov	r4, r3
        105ec0:	e3a08000 	mov	r8, #0	; 0x0
        105ec4:	e3a00000 	mov	r0, #0	; 0x0
        105ec8:	e5820000 	str	r0, [r2]
        105ecc:	e5c30001 	strb	r0, [r3, #1]
        105ed0:	e5c30000 	strb	r0, [r3]
        105ed4:	e1a00007 	mov	r0, r7
        105ed8:	eb000832 	bl	107fa8 <LILetterCount(void *)>
        105edc:	e1a09000 	mov	r9, r0
        105ee0:	e1a00007 	mov	r0, r7
        105ee4:	eb0008e6 	bl	108284 <LIFirstInfo(void *)>
        105ee8:	e3a07000 	mov	r7, #0	; 0x0
        105eec:	e3590000 	cmp	r9, #0	; 0x0
        105ef0:	991babf0 	ldmlsdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        105ef4:	e5d01001 	ldrb	r1, [r0, #1]
        105ef8:	e0811008 	add	r1, r1, r8
        105efc:	e1510006 	cmp	r1, r6
        105f00:	9a000005 	bls	105f1c <LIGetIndexedLetterInfo(void *, unsigned long, LILetterInfoType **, short *)+0x78>
        105f04:	e5850000 	str	r0, [r5]
        105f08:	e0460008 	sub	r0, r6, r8
        105f0c:	e5c40001 	strb	r0, [r4, #1]
        105f10:	e1a00440 	mov	r0, r0, asr #8
        105f14:	e5c40000 	strb	r0, [r4]
        105f18:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        105f1c:	e1a08001 	mov	r8, r1
        105f20:	eb0008f0 	bl	1082e8 <GetNextLetter(LILetterInfoType *)>
        105f24:	e2877001 	add	r7, r7, #1	; 0x1
        105f28:	e1570009 	cmp	r7, r9
        105f2c:	3afffff0 	bcc	105ef4 <LIGetIndexedLetterInfo(void *, unsigned long, LILetterInfoType **, short *)+0x50>
        105f30:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: LISetVariantWeight(char **, unsigned char, short, short)
 * Address: 00105f34
 */
LISetVariantWeight(char **, unsigned char, short, short) {
    /*
        105f34:	e1a0c00d 	mov	ip, sp
        105f38:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        105f3c:	e24cb004 	sub	fp, ip, #4	; 0x4
        105f40:	e1a04000 	mov	r4, r0
        105f44:	e20100ff 	and	r0, r1, #255	; 0xff
        105f48:	e1a01802 	mov	r1, r2, lsl #16
        105f4c:	e1a01841 	mov	r1, r1, asr #16
        105f50:	e56d0004 	strb	r0, [sp, -#4]!
        105f54:	e5cd1001 	strb	r1, [sp, #1]
        105f58:	e5cd3002 	strb	r3, [sp, #2]
        105f5c:	e59f0028 	ldr	r0, [pc, #28]	; 105f8c <LISetVariantWeight(char **, unsigned char, short, short)+0x58>
        105f60:	e5900000 	ldr	r0, [r0]
        105f64:	e59f1024 	ldr	r1, [pc, #24]	; 105f90 <LISetVariantWeight(char **, unsigned char, short, short)+0x5c>
        105f68:	eb69680d 	bl	1b5ffa4 <TController::$GetTypedDomain(unsigned long)>
        105f6c:	e1a03004 	mov	r3, r4
        105f70:	e1a0200d 	mov	r2, sp
        105f74:	e3a01016 	mov	r1, #22	; 0x16
        105f78:	e2811802 	add	r1, r1, #131072	; 0x20000
        105f7c:	e590c000 	ldr	ip, [r0]
        105f80:	e1a0e00f 	mov	lr, pc
        105f84:	e28cf02c 	add	pc, ip, #44	; 0x2c
        105f88:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        105f8c:	0c10187c 	ldceq	8, cr1, [r0], -#496
        105f90:	58525752 	ldmplda	r2, {r1, r4, r6, r8, r9, sl, ip, lr}^
    */
}

/**
 * Symbol: LIGetVariantWeight(char **, unsigned char, short)
 * Address: 00105f94
 */
LIGetVariantWeight(char **, unsigned char, short) {
    /*
        105f94:	e1a0c00d 	mov	ip, sp
        105f98:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        105f9c:	e24cb004 	sub	fp, ip, #4	; 0x4
        105fa0:	e1a04000 	mov	r4, r0
        105fa4:	e20100ff 	and	r0, r1, #255	; 0xff
        105fa8:	e1a01802 	mov	r1, r2, lsl #16
        105fac:	e1a01841 	mov	r1, r1, asr #16
        105fb0:	e56d0004 	strb	r0, [sp, -#4]!
        105fb4:	e5cd1001 	strb	r1, [sp, #1]
        105fb8:	e3a00002 	mov	r0, #2	; 0x2
        105fbc:	e5cd0002 	strb	r0, [sp, #2]
        105fc0:	e59f0034 	ldr	r0, [pc, #34]	; 105ffc <LIGetVariantWeight(char **, unsigned char, short)+0x68>
        105fc4:	e5900000 	ldr	r0, [r0]
        105fc8:	e59f1030 	ldr	r1, [pc, #30]	; 106000 <LIGetVariantWeight(char **, unsigned char, short)+0x6c>
        105fcc:	eb6967f4 	bl	1b5ffa4 <TController::$GetTypedDomain(unsigned long)>
        105fd0:	e1a03004 	mov	r3, r4
        105fd4:	e1a0200d 	mov	r2, sp
        105fd8:	e3a01017 	mov	r1, #23	; 0x17
        105fdc:	e2811802 	add	r1, r1, #131072	; 0x20000
        105fe0:	e590c000 	ldr	ip, [r0]
        105fe4:	e1a0e00f 	mov	lr, pc
        105fe8:	e28cf02c 	add	pc, ip, #44	; 0x2c
        105fec:	e3700001 	cmn	r0, #1	; 0x1
        105ff0:	15dd0002 	ldrneb	r0, [sp, #2]
        105ff4:	03a00003 	moveq	r0, #3	; 0x3
        105ff8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        105ffc:	0c10187c 	ldceq	8, cr1, [r0], -#496
        106000:	58525752 	ldmplda	r2, {r1, r4, r6, r8, r9, sl, ip, lr}^
    */
}

/**
 * Symbol: LIGetLetterInfo(void *, unsigned char)
 * Address: 00106004
 */
LIGetLetterInfo(void *, unsigned char) {
    /*
        106004:	e20110ff 	and	r1, r1, #255	; 0xff
        106008:	eaffff76 	b	105de8 <GetLetterHeaderOffset(void *, unsigned char)>
    */
}

/**
 * Symbol: LIGetGroupNumber(void *, LILetterInfoType *, short)
 * Address: 0010600c
 */
LIGetGroupNumber(void *, LILetterInfoType *, short) {
    /*
        10600c:	e1a02802 	mov	r2, r2, lsl #16
        106010:	e1a02842 	mov	r2, r2, asr #16
        106014:	e5d13001 	ldrb	r3, [r1, #1]
        106018:	e1530002 	cmp	r3, r2
        10601c:	d3e00000 	mvnle	r0, #0	; 0x0
        106020:	d1a0f00e 	movle	pc, lr
        106024:	e0811082 	add	r1, r1, r2, lsl #1
        106028:	e5911002 	ldr	r1, [r1, #2]
        10602c:	e0800821 	add	r0, r0, r1, lsr #16
        106030:	e5d00000 	ldrb	r0, [r0]
        106034:	e1a00800 	mov	r0, r0, lsl #16
        106038:	e1a00840 	mov	r0, r0, asr #16
        10603c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: LIGetLengthGroup(void *, LILetterInfoType *, short)
 * Address: 00106040
 */
LIGetLengthGroup(void *, LILetterInfoType *, short) {
    /*
        106040:	e92d4010 	stmdb	sp!, {r4, lr}
        106044:	e1a02802 	mov	r2, r2, lsl #16
        106048:	e1a02842 	mov	r2, r2, asr #16
        10604c:	e5d1c001 	ldrb	ip, [r1, #1]
        106050:	e15c0002 	cmp	ip, r2
        106054:	d3e00000 	mvnle	r0, #0	; 0x0
        106058:	d8bd8010 	ldmleia	sp!, {r4, pc}
        10605c:	e0813082 	add	r3, r1, r2, lsl #1
        106060:	e5933002 	ldr	r3, [r3, #2]
        106064:	e0803823 	add	r3, r0, r3, lsr #16
        106068:	e5d3e000 	ldrb	lr, [r3]
        10606c:	e3a03001 	mov	r3, #1	; 0x1
        106070:	e0822003 	add	r2, r2, r3
        106074:	e15c0002 	cmp	ip, r2
        106078:	da00000a 	ble	1060a8 <LIGetLengthGroup(void *, LILetterInfoType *, short)+0x68>
        10607c:	e0814082 	add	r4, r1, r2, lsl #1
        106080:	e5944002 	ldr	r4, [r4, #2]
        106084:	e0804824 	add	r4, r0, r4, lsr #16
        106088:	e5d44000 	ldrb	r4, [r4]
        10608c:	e134000e 	teq	r4, lr
        106090:	02833001 	addeq	r3, r3, #1	; 0x1
        106094:	01a03803 	moveq	r3, r3, lsl #16
        106098:	01a03843 	moveq	r3, r3, asr #16
        10609c:	e2822001 	add	r2, r2, #1	; 0x1
        1060a0:	e15c0002 	cmp	ip, r2
        1060a4:	cafffff4 	bgt	10607c <LIGetLengthGroup(void *, LILetterInfoType *, short)+0x3c>
        1060a8:	e1a00003 	mov	r0, r3
        1060ac:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: LIGetVariantInfo(void *, LILetterInfoType *, short)
 * Address: 001060b0
 */
LIGetVariantInfo(void *, LILetterInfoType *, short) {
    /*
        1060b0:	e1a02802 	mov	r2, r2, lsl #16
        1060b4:	e1a02842 	mov	r2, r2, asr #16
        1060b8:	e5d13001 	ldrb	r3, [r1, #1]
        1060bc:	e1530002 	cmp	r3, r2
        1060c0:	d3a00000 	movle	r0, #0	; 0x0
        1060c4:	c0811082 	addgt	r1, r1, r2, lsl #1
        1060c8:	c5911002 	ldrgt	r1, [r1, #2]
        1060cc:	c0800821 	addgt	r0, r0, r1, lsr #16
        1060d0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: LIGetStrokeInfo(void *, LILetterVarType *, short)
 * Address: 001060d4
 */
LIGetStrokeInfo(void *, LILetterVarType *, short) {
    /*
        1060d4:	e1a02802 	mov	r2, r2, lsl #16
        1060d8:	e1a02842 	mov	r2, r2, asr #16
        1060dc:	e5d13001 	ldrb	r3, [r1, #1]
        1060e0:	e1530002 	cmp	r3, r2
        1060e4:	d3a00000 	movle	r0, #0	; 0x0
        1060e8:	c0811082 	addgt	r1, r1, r2, lsl #1
        1060ec:	c5911002 	ldrgt	r1, [r1, #2]
        1060f0:	c0800821 	addgt	r0, r0, r1, lsr #16
        1060f4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: LIBeginWeights(void)
 * Address: 001060f8
 */
LIBeginWeights(void) {
    /*
        1060f8:	e1a0c00d 	mov	ip, sp
        1060fc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        106100:	e24cb004 	sub	fp, ip, #4	; 0x4
        106104:	e24dd004 	sub	sp, sp, #4	; 0x4
        106108:	e59f0064 	ldr	r0, [pc, #64]	; 106174 <LIBeginWeights(void)+0x7c>
        10610c:	e5900000 	ldr	r0, [r0]
        106110:	e59f1060 	ldr	r1, [pc, #60]	; 106178 <LIBeginWeights(void)+0x80>
        106114:	eb6967a2 	bl	1b5ffa4 <TController::$GetTypedDomain(unsigned long)>
        106118:	e1a05000 	mov	r5, r0
        10611c:	e1a0200d 	mov	r2, sp
        106120:	e3a03000 	mov	r3, #0	; 0x0
        106124:	e3a01000 	mov	r1, #0	; 0x0
        106128:	e590c000 	ldr	ip, [r0]
        10612c:	e1a0e00f 	mov	lr, pc
        106130:	e28cf02c 	add	pc, ip, #44	; 0x2c
        106134:	e59d0000 	ldr	r0, [sp]
        106138:	eb699947 	bl	1b6c65c <$MakeHandle(long)>
        10613c:	e1a04000 	mov	r4, r0
        106140:	e59f1034 	ldr	r1, [pc, #34]	; 10617c <LIBeginWeights(void)+0x84>
        106144:	eb699d50 	bl	1b6d68c <$NameHandle(char **, unsigned long)>
        106148:	e3340000 	teq	r4, #0	; 0x0
        10614c:	0a000006 	beq	10616c <LIBeginWeights(void)+0x74>
        106150:	e1a03004 	mov	r3, r4
        106154:	e1a00005 	mov	r0, r5
        106158:	e3a02000 	mov	r2, #0	; 0x0
        10615c:	e3a01001 	mov	r1, #1	; 0x1
        106160:	e595c000 	ldr	ip, [r5]
        106164:	e1a0e00f 	mov	lr, pc
        106168:	e28cf02c 	add	pc, ip, #44	; 0x2c
        10616c:	e1a00004 	mov	r0, r4
        106170:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        106174:	0c10187c 	ldceq	8, cr1, [r0], -#496
        106178:	58525752 	ldmplda	r2, {r1, r4, r6, r8, r9, sl, ip, lr}^
        10617c:	696e666f 	stmvsdb	lr!, {r0, r1, r2, r3, r5, r6, r9, sl, sp, lr}^
    */
}

/**
 * Symbol: LIGetPoint(LIStrokeType *, short, Point *)
 * Address: 00106180
 */
LIGetPoint(LIStrokeType *, short, Point *) {
    /*
        106180:	e1a01801 	mov	r1, r1, lsl #16
        106184:	e1a01841 	mov	r1, r1, asr #16
        106188:	e5d03000 	ldrb	r3, [r0]
        10618c:	e1530001 	cmp	r3, r1
        106190:	d3e00000 	mvnle	r0, #0	; 0x0
        106194:	d1a0f00e 	movle	pc, lr
        106198:	e0800081 	add	r0, r0, r1, lsl #1
        10619c:	e5d01001 	ldrb	r1, [r0, #1]
        1061a0:	e5c21003 	strb	r1, [r2, #3]
        1061a4:	e1a01441 	mov	r1, r1, asr #8
        1061a8:	e5c21002 	strb	r1, [r2, #2]
        1061ac:	e5d00002 	ldrb	r0, [r0, #2]
        1061b0:	e5c20001 	strb	r0, [r2, #1]
        1061b4:	e1a00440 	mov	r0, r0, asr #8
        1061b8:	e5c20000 	strb	r0, [r2]
        1061bc:	e3a00000 	mov	r0, #0	; 0x0
        1061c0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: LIGetVariantBBox(void *, LILetterVarType *, Rect *)
 * Address: 001061c4
 */
LIGetVariantBBox(void *, LILetterVarType *, Rect *) {
    /*
        1061c4:	e1a0c00d 	mov	ip, sp
        1061c8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1061cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1061d0:	e1a06000 	mov	r6, r0
        1061d4:	e1b05001 	movs	r5, r1
        1061d8:	e1a04002 	mov	r4, r2
        1061dc:	e24dd004 	sub	sp, sp, #4	; 0x4
        1061e0:	e3e0a000 	mvn	sl, #0	; 0x0
        1061e4:	13360000 	teqne	r6, #0	; 0x0
        1061e8:	1a000001 	bne	1061f4 <LIGetVariantBBox(void *, LILetterVarType *, Rect *)+0x30>
        1061ec:	e1a0000a 	mov	r0, sl
        1061f0:	ea000044 	b	106308 <LIGetVariantBBox(void *, LILetterVarType *, Rect *)+0x144>
        1061f4:	e3a01000 	mov	r1, #0	; 0x0
        1061f8:	e5c41001 	strb	r1, [r4, #1]
        1061fc:	e5c41000 	strb	r1, [r4]
        106200:	e3a000ff 	mov	r0, #255	; 0xff
        106204:	e5c40005 	strb	r0, [r4, #5]
        106208:	e5c41004 	strb	r1, [r4, #4]
        10620c:	e5c40003 	strb	r0, [r4, #3]
        106210:	e3a0007f 	mov	r0, #127	; 0x7f
        106214:	e5c40002 	strb	r0, [r4, #2]
        106218:	e3a00000 	mov	r0, #0	; 0x0
        10621c:	e5c40007 	strb	r0, [r4, #7]
        106220:	e3a00080 	mov	r0, #128	; 0x80
        106224:	e5c40006 	strb	r0, [r4, #6]
        106228:	e3a07000 	mov	r7, #0	; 0x0
        10622c:	e5d50001 	ldrb	r0, [r5, #1]
        106230:	e3500000 	cmp	r0, #0	; 0x0
        106234:	da000029 	ble	1062e0 <LIGetVariantBBox(void *, LILetterVarType *, Rect *)+0x11c>
        106238:	e1a02007 	mov	r2, r7
        10623c:	e1a01005 	mov	r1, r5
        106240:	e1a00006 	mov	r0, r6
        106244:	ebffffa2 	bl	1060d4 <LIGetStrokeInfo(void *, LILetterVarType *, short)>
        106248:	e1b08000 	movs	r8, r0
        10624c:	0affffe6 	beq	1061ec <LIGetVariantBBox(void *, LILetterVarType *, Rect *)+0x28>
        106250:	e3a09000 	mov	r9, #0	; 0x0
        106254:	e5d80000 	ldrb	r0, [r8]
        106258:	e3500000 	cmp	r0, #0	; 0x0
        10625c:	da00001b 	ble	1062d0 <LIGetVariantBBox(void *, LILetterVarType *, Rect *)+0x10c>
        106260:	e1a0200d 	mov	r2, sp
        106264:	e1a01009 	mov	r1, r9
        106268:	e1a00008 	mov	r0, r8
        10626c:	ebffffc3 	bl	106180 <LIGetPoint(LIStrokeType *, short, Point *)>
        106270:	e3700001 	cmn	r0, #1	; 0x1
        106274:	0affffdc 	beq	1061ec <LIGetVariantBBox(void *, LILetterVarType *, Rect *)+0x28>
        106278:	e59d1002 	ldr	r1, [sp, #2]
        10627c:	e1a01841 	mov	r1, r1, asr #16
        106280:	e5940002 	ldr	r0, [r4, #2]
        106284:	e1510840 	cmp	r1, r0, asr #16
        106288:	aa000003 	bge	10629c <LIGetVariantBBox(void *, LILetterVarType *, Rect *)+0xd8>
        10628c:	e59d0000 	ldr	r0, [sp]
        106290:	e5c40003 	strb	r0, [r4, #3]
        106294:	e1a00440 	mov	r0, r0, asr #8
        106298:	e5c40002 	strb	r0, [r4, #2]
        10629c:	e59d1002 	ldr	r1, [sp, #2]
        1062a0:	e1a01841 	mov	r1, r1, asr #16
        1062a4:	e5940006 	ldr	r0, [r4, #6]
        1062a8:	e1510840 	cmp	r1, r0, asr #16
        1062ac:	da000003 	ble	1062c0 <LIGetVariantBBox(void *, LILetterVarType *, Rect *)+0xfc>
        1062b0:	e59d0000 	ldr	r0, [sp]
        1062b4:	e5c40007 	strb	r0, [r4, #7]
        1062b8:	e1a00440 	mov	r0, r0, asr #8
        1062bc:	e5c40006 	strb	r0, [r4, #6]
        1062c0:	e2899001 	add	r9, r9, #1	; 0x1
        1062c4:	e5d80000 	ldrb	r0, [r8]
        1062c8:	e1590000 	cmp	r9, r0
        1062cc:	baffffe3 	blt	106260 <LIGetVariantBBox(void *, LILetterVarType *, Rect *)+0x9c>
        1062d0:	e2877001 	add	r7, r7, #1	; 0x1
        1062d4:	e5d50001 	ldrb	r0, [r5, #1]
        1062d8:	e1500007 	cmp	r0, r7
        1062dc:	caffffd5 	bgt	106238 <LIGetVariantBBox(void *, LILetterVarType *, Rect *)+0x74>
        1062e0:	e5941002 	ldr	r1, [r4, #2]
        1062e4:	e5940006 	ldr	r0, [r4, #6]
        1062e8:	e1a00840 	mov	r0, r0, asr #16
        1062ec:	e1300841 	teq	r0, r1, asr #16
        1062f0:	1a000003 	bne	106304 <LIGetVariantBBox(void *, LILetterVarType *, Rect *)+0x140>
        1062f4:	e2800001 	add	r0, r0, #1	; 0x1
        1062f8:	e5c40007 	strb	r0, [r4, #7]
        1062fc:	e1a00440 	mov	r0, r0, asr #8
        106300:	e5c40006 	strb	r0, [r4, #6]
        106304:	e3a00000 	mov	r0, #0	; 0x0
        106308:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: LIGetVariantBaseLine(void *, LILetterVarType *, Rect *)
 * Address: 0010630c
 */
LIGetVariantBaseLine(void *, LILetterVarType *, Rect *) {
    /*
        10630c:	e1a0c00d 	mov	ip, sp
        106310:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        106314:	e24cb004 	sub	fp, ip, #4	; 0x4
        106318:	e1a04002 	mov	r4, r2
        10631c:	e3e05000 	mvn	r5, #0	; 0x0
        106320:	e3310000 	teq	r1, #0	; 0x0
        106324:	13300000 	teqne	r0, #0	; 0x0
        106328:	0a000003 	beq	10633c <LIGetVariantBaseLine(void *, LILetterVarType *, Rect *)+0x30>
        10632c:	e1a02004 	mov	r2, r4
        106330:	ebffffa3 	bl	1061c4 <LIGetVariantBBox(void *, LILetterVarType *, Rect *)>
        106334:	e3700001 	cmn	r0, #1	; 0x1
        106338:	1a000001 	bne	106344 <LIGetVariantBaseLine(void *, LILetterVarType *, Rect *)+0x38>
        10633c:	e1a00005 	mov	r0, r5
        106340:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        106344:	e3a00055 	mov	r0, #85	; 0x55
        106348:	e5c40001 	strb	r0, [r4, #1]
        10634c:	e3a00000 	mov	r0, #0	; 0x0
        106350:	e5c40000 	strb	r0, [r4]
        106354:	e3a010aa 	mov	r1, #170	; 0xaa
        106358:	e5c41005 	strb	r1, [r4, #5]
        10635c:	e5c40004 	strb	r0, [r4, #4]
        106360:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: LIEndWeights(char **)
 * Address: 00107068
 */
LIEndWeights(char **) {
    /*
        107068:	e1a0c00d 	mov	ip, sp
        10706c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        107070:	e24cb004 	sub	fp, ip, #4	; 0x4
        107074:	e1a04000 	mov	r4, r0
        107078:	e59f002c 	ldr	r0, [pc, #2c]	; 1070ac <LIEndWeights(char **)+0x44>
        10707c:	e5900000 	ldr	r0, [r0]
        107080:	e59f1028 	ldr	r1, [pc, #28]	; 1070b0 <LIEndWeights(char **)+0x48>
        107084:	eb6963c6 	bl	1b5ffa4 <TController::$GetTypedDomain(unsigned long)>
        107088:	e1a03004 	mov	r3, r4
        10708c:	e3a02000 	mov	r2, #0	; 0x0
        107090:	e3a01003 	mov	r1, #3	; 0x3
        107094:	e590c000 	ldr	ip, [r0]
        107098:	e1a0e00f 	mov	lr, pc
        10709c:	e28cf02c 	add	pc, ip, #44	; 0x2c
        1070a0:	e1a00004 	mov	r0, r4
        1070a4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1070a8:	ea69913a 	b	1b6b598 <$DeleteHandle(char **)>
        1070ac:	0c10187c 	ldceq	8, cr1, [r0], -#496
        1070b0:	58525752 	ldmplda	r2, {r1, r4, r6, r8, r9, sl, ip, lr}^
    */
}

/**
 * Symbol: LIGetImageData(void)
 * Address: 00107444
 */
LIGetImageData(void) {
    /*
        107444:	e1a0c00d 	mov	ip, sp
        107448:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        10744c:	e24cb004 	sub	fp, ip, #4	; 0x4
        107450:	e24dd00c 	sub	sp, sp, #12	; 0xc
        107454:	e3a00002 	mov	r0, #2	; 0x2
        107458:	eb6aeb3b 	bl	1bc214c <$AllocateRefHandle(long)>
        10745c:	e58d0000 	str	r0, [sp]
        107460:	e1a0000d 	mov	r0, sp
        107464:	eb675a98 	bl	1addecc <$FGetLetterImages(RefVar const &)>
        107468:	eb6aeb37 	bl	1bc214c <$AllocateRefHandle(long)>
        10746c:	e58d0008 	str	r0, [sp, #8]
        107470:	e59d0000 	ldr	r0, [sp]
        107474:	eb6aef50 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        107478:	e28d1008 	add	r1, sp, #8	; 0x8
        10747c:	e28d0004 	add	r0, sp, #4	; 0x4
        107480:	eb6ae714 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        107484:	e28d0004 	add	r0, sp, #4	; 0x4
        107488:	eb6aeb21 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        10748c:	e1a04000 	mov	r4, r0
        107490:	e28d0004 	add	r0, sp, #4	; 0x4
        107494:	e3a01000 	mov	r1, #0	; 0x0
        107498:	eb6aeb18 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        10749c:	e59d0008 	ldr	r0, [sp, #8]
        1074a0:	eb6aef45 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1074a4:	e1a00004 	mov	r0, r4
        1074a8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: LILetterCount(void *)
 * Address: 00107fa8
 */
LILetterCount(void *) {
    /*
        107fa8:	e5900000 	ldr	r0, [r0]
        107fac:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: LIFirstInfo(void *)
 * Address: 00108284
 */
LIFirstInfo(void *) {
    /*
        108284:	e2800004 	add	r0, r0, #4	; 0x4
        108288:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: LIVariantCount(void *)
 * Address: 0010828c
 */
LIVariantCount(void *) {
    /*
        10828c:	e3300000 	teq	r0, #0	; 0x0
        108290:	03a00000 	moveq	r0, #0	; 0x0
        108294:	01a0f00e 	moveq	pc, lr
        108298:	e1a0c00d 	mov	ip, sp
        10829c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1082a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1082a4:	e1a04000 	mov	r4, r0
        1082a8:	e3a05000 	mov	r5, #0	; 0x0
        1082ac:	ebffff3d 	bl	107fa8 <LILetterCount(void *)>
        1082b0:	e1a06000 	mov	r6, r0
        1082b4:	e1a00004 	mov	r0, r4
        1082b8:	ebfffff1 	bl	108284 <LIFirstInfo(void *)>
        1082bc:	e3a04000 	mov	r4, #0	; 0x0
        1082c0:	e3560000 	cmp	r6, #0	; 0x0
        1082c4:	9a000005 	bls	1082e0 <LIVariantCount(void *)+0x54>
        1082c8:	e5d01001 	ldrb	r1, [r0, #1]
        1082cc:	e0815005 	add	r5, r1, r5
        1082d0:	eb000004 	bl	1082e8 <GetNextLetter(LILetterInfoType *)>
        1082d4:	e2844001 	add	r4, r4, #1	; 0x1
        1082d8:	e1540006 	cmp	r4, r6
        1082dc:	3afffff9 	bcc	1082c8 <LIVariantCount(void *)+0x3c>
        1082e0:	e1a00005 	mov	r0, r5
        1082e4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: Librarian(void)
 * Address: 0010b6d4
 */
Librarian(void) {
    /*
        10b6d4:	e59f0004 	ldr	r0, [pc, #4]	; 10b6e0 <Librarian(void)+0xc>
        10b6d8:	e5900000 	ldr	r0, [r0]
        10b6dc:	e1a0f00e 	mov	pc, lr
        10b6e0:	0c1010d0 	ldceq	0, cr1, [r0], -#832
    */
}

/**
 * Symbol: ListAllocate
 * Address: 00112f74
 */
void globals::ListAllocate() {
    /*
        112f74:	e59f201c 	ldr	r2, [pc, #1c]	; 112f98 <ListAllocate+0x24>
        112f78:	e5921004 	ldr	r1, [r2, #4]
        112f7c:	e3310000 	teq	r1, #0	; 0x0
        112f80:	03a00064 	moveq	r0, #100	; 0x64
        112f84:	0a698ee9 	beq	1b76b30 <$ListBlockAllocate>
        112f88:	11a00001 	movne	r0, r1
        112f8c:	15911000 	ldrne	r1, [r1]
        112f90:	15a21004 	strne	r1, [r2, #4]!
        112f94:	e1a0f00e 	mov	pc, lr
        112f98:	0c1010d4 	ldceq	0, cr1, [r0], -#848
    */
}

/**
 * Symbol: ListAppendEntry
 * Address: 00112fa4
 */
void globals::ListAppendEntry() {
    /*
        112fa4:	e1a0c00d 	mov	ip, sp
        112fa8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        112fac:	e24cb004 	sub	fp, ip, #4	; 0x4
        112fb0:	e24dd004 	sub	sp, sp, #4	; 0x4
        112fb4:	e5902004 	ldr	r2, [r0, #4]
        112fb8:	e58d2000 	str	r2, [sp]
        112fbc:	e1a02001 	mov	r2, r1
        112fc0:	e1a0100d 	mov	r1, sp
        112fc4:	eb69720c 	bl	1b6f7fc <$ListAddEntry>
        112fc8:	e3a00001 	mov	r0, #1	; 0x1
        112fcc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: ListRemoveEntry
 * Address: 001130a8
 */
void globals::ListRemoveEntry() {
    /*
        1130a8:	e1a0c00d 	mov	ip, sp
        1130ac:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1130b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1130b4:	e3a04000 	mov	r4, #0	; 0x0
        1130b8:	e59f305c 	ldr	r3, [pc, #5c]	; 11311c <ListRemoveEntry+0x74>
        1130bc:	e3300000 	teq	r0, #0	; 0x0
        1130c0:	01a00003 	moveq	r0, r3
        1130c4:	028f2f15 	addeq	r2, pc, #84	; 0x54
        1130c8:	028f1f18 	addeq	r1, pc, #96	; 0x60
        1130cc:	0a00000f 	beq	113110 <ListRemoveEntry+0x68>
        1130d0:	e5902008 	ldr	r2, [r0, #8]
        1130d4:	e3520000 	cmp	r2, #0	; 0x0
        1130d8:	b1a00003 	movlt	r0, r3
        1130dc:	b28f2f0f 	addlt	r2, pc, #60	; 0x3c
        1130e0:	b28f1f1a 	addlt	r1, pc, #104	; 0x68
        1130e4:	ba000009 	blt	113110 <ListRemoveEntry+0x68>
        1130e8:	e5912000 	ldr	r2, [r1]
        1130ec:	e3320000 	teq	r2, #0	; 0x0
        1130f0:	0a00002a 	beq	1131a0 <ListRemoveEntry+0xf8>
        1130f4:	e592e000 	ldr	lr, [r2]
        1130f8:	e59f5070 	ldr	r5, [pc, #70]	; 113170 <ListRemoveEntry+0xc8>
        1130fc:	e13e0005 	teq	lr, r5
        113100:	1a000024 	bne	113198 <ListRemoveEntry+0xf0>
        113104:	e1a00003 	mov	r0, r3
        113108:	e28f2f04 	add	r2, pc, #16	; 0x10
        11310c:	e28f1f18 	add	r1, pc, #96	; 0x60
        113110:	eb08afec 	bl	33f0c8 <_fprintf>
        113114:	eb6975bf 	bl	1b70818 <$Listbailout>
        113118:	ea000020 	b	1131a0 <ListRemoveEntry+0xf8>
        11311c:	0c105784 	ldceq	7, cr5, [r0], -#528
        113120:	4c697374 	stcmil	3, cr7, [r9], -#464
        113124:	52656d6f 	rsbpl	r6, r5, #7104	; 0x1bc0
        113128:	7665456e 	strvcbt	r4, [r5], -lr, ror #10
        11312c:	74727900 	ldrvcbt	r7, [r2], -#2304
        113130:	4572726f 	ldrmib	r7, [r2, -#623]!
        113134:	723a204e 	eorvcs	r2, sl, #78	; 0x4e
        113138:	554c4c20 	strplb	r4, [ip, -#3104]
        11313c:	6c697374 	stcvsl	3, cr7, [r9], -#464
        113140:	20706173 	rsbcss	r6, r0, r3, ror r1
        113144:	73656420 	cmnvc	r5, #536870912	; 0x20000000
        113148:	746f2025 	strvcbt	r2, [pc], #25	; 113150 <ListRemoveEntry+0xa8>
        11314c:	730d0000 	tstvc	sp, #0	; 0x0
        113150:	4572726f 	ldrmib	r7, [r2, -#623]!
        113154:	723a2046 	eorvcs	r2, sl, #70	; 0x46
        113158:	52454544 	subpl	r4, r5, #285212672	; 0x11000000
        11315c:	206c6973 	rsbcs	r6, ip, r3, ror r9
        113160:	74207061 	strvct	r7, [r0], -#97
        113164:	73736564 	cmnvc	r3, #419430400	; 0x19000000
        113168:	20746f20 	rsbcss	r6, r4, r0, lsr #30
        11316c:	25730d00 	ldrcsb	r0, [r3, -#3328]!
        113170:	46466c67 	strmib	r6, [r6], -r7, ror #24
        113174:	4572726f 	ldrmib	r7, [r2, -#623]!
        113178:	723a2046 	eorvcs	r2, sl, #70	; 0x46
        11317c:	52454544 	subpl	r4, r5, #285212672	; 0x11000000
        113180:	20697465 	rsbcs	r7, r9, r5, ror #8
        113184:	6d20696e 	stcvs	9, cr6, [r0, -#440]!
        113188:	64657865 	strvsbt	r7, [r5], -#2149
        11318c:	6420696e 	strvst	r6, [r0], -#2414
        113190:	2025730d 	eorcs	r7, r5, sp, lsl #6
        113194:	00000000 	andeq	r0, r0, r0
        113198:	e3320000 	teq	r2, #0	; 0x0
        11319c:	1a000001 	bne	1131a8 <ListRemoveEntry+0x100>
        1131a0:	e1a00004 	mov	r0, r4
        1131a4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1131a8:	e5923008 	ldr	r3, [r2, #8]
        1131ac:	e3330000 	teq	r3, #0	; 0x0
        1131b0:	05923004 	ldreq	r3, [r2, #4]
        1131b4:	05803000 	streq	r3, [r0]
        1131b8:	1592c004 	ldrne	ip, [r2, #4]
        1131bc:	15a3c004 	strne	ip, [r3, #4]!
        1131c0:	e5923004 	ldr	r3, [r2, #4]
        1131c4:	e5813000 	str	r3, [r1]
        1131c8:	e3330000 	teq	r3, #0	; 0x0
        1131cc:	05921008 	ldreq	r1, [r2, #8]
        1131d0:	05801004 	streq	r1, [r0, #4]
        1131d4:	1992000a 	ldmneib	r2, {r1, r3}
        1131d8:	15a13008 	strne	r3, [r1, #8]!
        1131dc:	e59f1020 	ldr	r1, [pc, #20]	; 113204 <ListRemoveEntry+0x15c>
        1131e0:	e5913008 	ldr	r3, [r1, #8]
        1131e4:	e5823004 	str	r3, [r2, #4]
        1131e8:	e5a12008 	str	r2, [r1, #8]!
        1131ec:	e5825000 	str	r5, [r2]
        1131f0:	e5901008 	ldr	r1, [r0, #8]
        1131f4:	e2411001 	sub	r1, r1, #1	; 0x1
        1131f8:	e5a01008 	str	r1, [r0, #8]!
        1131fc:	e1a0000e 	mov	r0, lr
        113200:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        113204:	0c1010d4 	ldceq	0, cr1, [r0], -#848
    */
}

/**
 * Symbol: Listbailout
 * Address: 00113208
 */
void globals::Listbailout() {
    /*
        113208:	e3a00001 	mov	r0, #1	; 0x1
        11320c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ListEntryAllocate
 * Address: 00113210
 */
void globals::ListEntryAllocate() {
    /*
        113210:	e59f201c 	ldr	r2, [pc, #1c]	; 113234 <ListEntryAllocate+0x24>
        113214:	e5921008 	ldr	r1, [r2, #8]
        113218:	e3310000 	teq	r1, #0	; 0x0
        11321c:	03a00064 	moveq	r0, #100	; 0x64
        113220:	0a698e43 	beq	1b76b34 <$ListEntryBlockAllocate>
        113224:	11a00001 	movne	r0, r1
        113228:	15911004 	ldrne	r1, [r1, #4]
        11322c:	15a21008 	strne	r1, [r2, #8]!
        113230:	e1a0f00e 	mov	pc, lr
        113234:	0c1010d4 	ldceq	0, cr1, [r0], -#848
    */
}

/**
 * Symbol: ListBlockAllocate
 * Address: 00113274
 */
void globals::ListBlockAllocate() {
    /*
        113274:	e3300000 	teq	r0, #0	; 0x0
        113278:	03a00000 	moveq	r0, #0	; 0x0
        11327c:	01a0f00e 	moveq	pc, lr
        113280:	e1a0c00d 	mov	ip, sp
        113284:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        113288:	e24cb004 	sub	fp, ip, #4	; 0x4
        11328c:	e1a04000 	mov	r4, r0
        113290:	e0801080 	add	r1, r0, r0, lsl #1
        113294:	e3a00008 	mov	r0, #8	; 0x8
        113298:	e0800101 	add	r0, r0, r1, lsl #2
        11329c:	e59f1074 	ldr	r1, [pc, #74]	; 113318 <ListBlockAllocate+0xa4>
        1132a0:	eb6b3ba5 	bl	1be213c <$NewNamedPtr>
        1132a4:	e59f5070 	ldr	r5, [pc, #70]	; 11331c <ListBlockAllocate+0xa8>
        1132a8:	e5850000 	str	r0, [r5]
        1132ac:	e3300000 	teq	r0, #0	; 0x0
        1132b0:	1a000005 	bne	1132cc <ListBlockAllocate+0x58>
        1132b4:	e59f0064 	ldr	r0, [pc, #64]	; 113320 <ListBlockAllocate+0xac>
        1132b8:	e5900000 	ldr	r0, [r0]
        1132bc:	e28f1f18 	add	r1, pc, #96	; 0x60
        1132c0:	e3a02000 	mov	r2, #0	; 0x0
        1132c4:	eb6b3fb4 	bl	1be319c <$Throw>
        1132c8:	e5950000 	ldr	r0, [r5]
        1132cc:	e59f1054 	ldr	r1, [pc, #54]	; 113328 <ListBlockAllocate+0xb4>
        1132d0:	e591200c 	ldr	r2, [r1, #12]
        1132d4:	e8800014 	stmia	r0, {r2, r4}
        1132d8:	e3a02001 	mov	r2, #1	; 0x1
        1132dc:	e3540001 	cmp	r4, #1	; 0x1
        1132e0:	e581000c 	str	r0, [r1, #12]
        1132e4:	9a000009 	bls	113310 <ListBlockAllocate+0x9c>
        1132e8:	e3e0c000 	mvn	ip, #0	; 0x0
        1132ec:	e0823082 	add	r3, r2, r2, lsl #1
        1132f0:	e0803103 	add	r3, r0, r3, lsl #2
        1132f4:	e591e004 	ldr	lr, [r1, #4]
        1132f8:	e5a3e008 	str	lr, [r3, #8]!
        1132fc:	e5813004 	str	r3, [r1, #4]
        113300:	e2822001 	add	r2, r2, #1	; 0x1
        113304:	e1520004 	cmp	r2, r4
        113308:	e5a3c008 	str	ip, [r3, #8]!
        11330c:	3afffff6 	bcc	1132ec <ListBlockAllocate+0x78>
        113310:	e2800008 	add	r0, r0, #8	; 0x8
        113314:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        113318:	526f434b 	rsbpl	r4, pc, #738197505	; 0x2c000001
        11331c:	0c101950 	ldceq	9, cr1, [r0], -#320
        113320:	003712cc 	eoreqs	r1, r7, ip, asr #5
        113324:	00000000 	andeq	r0, r0, r0
        113328:	0c1010d4 	ldceq	0, cr1, [r0], -#848
    */
}

/**
 * Symbol: ListEntryBlockAllocate
 * Address: 0011335c
 */
void globals::ListEntryBlockAllocate() {
    /*
        11335c:	e3300000 	teq	r0, #0	; 0x0
        113360:	03a00000 	moveq	r0, #0	; 0x0
        113364:	01a0f00e 	moveq	pc, lr
        113368:	e1a0c00d 	mov	ip, sp
        11336c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        113370:	e24cb004 	sub	fp, ip, #4	; 0x4
        113374:	e1a04000 	mov	r4, r0
        113378:	e0801080 	add	r1, r0, r0, lsl #1
        11337c:	e3a00008 	mov	r0, #8	; 0x8
        113380:	e0800101 	add	r0, r0, r1, lsl #2
        113384:	e59f1078 	ldr	r1, [pc, #78]	; 113404 <ListEntryBlockAllocate+0xa8>
        113388:	eb6b3b6b 	bl	1be213c <$NewNamedPtr>
        11338c:	e59f5074 	ldr	r5, [pc, #74]	; 113408 <ListEntryBlockAllocate+0xac>
        113390:	e5850000 	str	r0, [r5]
        113394:	e3300000 	teq	r0, #0	; 0x0
        113398:	1a000005 	bne	1133b4 <ListEntryBlockAllocate+0x58>
        11339c:	e59f0068 	ldr	r0, [pc, #68]	; 11340c <ListEntryBlockAllocate+0xb0>
        1133a0:	e5900000 	ldr	r0, [r0]
        1133a4:	e28f1f19 	add	r1, pc, #100	; 0x64
        1133a8:	e3a02000 	mov	r2, #0	; 0x0
        1133ac:	eb6b3f7a 	bl	1be319c <$Throw>
        1133b0:	e5950000 	ldr	r0, [r5]
        1133b4:	e59f1058 	ldr	r1, [pc, #58]	; 113414 <ListEntryBlockAllocate+0xb8>
        1133b8:	e5912010 	ldr	r2, [r1, #16]
        1133bc:	e8800014 	stmia	r0, {r2, r4}
        1133c0:	e3a02001 	mov	r2, #1	; 0x1
        1133c4:	e3540001 	cmp	r4, #1	; 0x1
        1133c8:	e5810010 	str	r0, [r1, #16]
        1133cc:	9a00000a 	bls	1133fc <ListEntryBlockAllocate+0xa0>
        1133d0:	e59fc040 	ldr	ip, [pc, #40]	; 113418 <ListEntryBlockAllocate+0xbc>
        1133d4:	e0823082 	add	r3, r2, r2, lsl #1
        1133d8:	e0803103 	add	r3, r0, r3, lsl #2
        1133dc:	e591e008 	ldr	lr, [r1, #8]
        1133e0:	e583e00c 	str	lr, [r3, #12]
        1133e4:	e2833008 	add	r3, r3, #8	; 0x8
        1133e8:	e5813008 	str	r3, [r1, #8]
        1133ec:	e2822001 	add	r2, r2, #1	; 0x1
        1133f0:	e1520004 	cmp	r2, r4
        1133f4:	e583c000 	str	ip, [r3]
        1133f8:	3afffff5 	bcc	1133d4 <ListEntryBlockAllocate+0x78>
        1133fc:	e2800008 	add	r0, r0, #8	; 0x8
        113400:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        113404:	526f434b 	rsbpl	r4, pc, #738197505	; 0x2c000001
        113408:	0c101950 	ldceq	9, cr1, [r0], -#320
        11340c:	003712cc 	eoreqs	r1, r7, ip, asr #5
        113410:	00000000 	andeq	r0, r0, r0
        113414:	0c1010d4 	ldceq	0, cr1, [r0], -#848
        113418:	46466c67 	strmib	r6, [r6], -r7, ror #24
    */
}

/**
 * Symbol: ListZap
 * Address: 0011343c
 */
void globals::ListZap() {
    /*
        11343c:	e1a0c00d 	mov	ip, sp
        113440:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        113444:	e24cb004 	sub	fp, ip, #4	; 0x4
        113448:	e59f5054 	ldr	r5, [pc, #54]	; 1134a4 <ListZap+0x68>
        11344c:	e3a06000 	mov	r6, #0	; 0x0
        113450:	e595400c 	ldr	r4, [r5, #12]
        113454:	e3340000 	teq	r4, #0	; 0x0
        113458:	e585600c 	str	r6, [r5, #12]
        11345c:	0a000004 	beq	113474 <ListZap+0x38>
        113460:	e1a00004 	mov	r0, r4
        113464:	e5944000 	ldr	r4, [r4]
        113468:	eb6afd3a 	bl	1bd2958 <$free>
        11346c:	e3340000 	teq	r4, #0	; 0x0
        113470:	1afffffa 	bne	113460 <ListZap+0x24>
        113474:	e5954010 	ldr	r4, [r5, #16]
        113478:	e3340000 	teq	r4, #0	; 0x0
        11347c:	e5856010 	str	r6, [r5, #16]
        113480:	0a000004 	beq	113498 <ListZap+0x5c>
        113484:	e1a00004 	mov	r0, r4
        113488:	e5944000 	ldr	r4, [r4]
        11348c:	eb6afd31 	bl	1bd2958 <$free>
        113490:	e3340000 	teq	r4, #0	; 0x0
        113494:	1afffffa 	bne	113484 <ListZap+0x48>
        113498:	e5856004 	str	r6, [r5, #4]
        11349c:	e5a56008 	str	r6, [r5, #8]!
        1134a0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1134a4:	0c1010d4 	ldceq	0, cr1, [r0], -#848
    */
}

/**
 * Symbol: ListCreate
 * Address: 001134c8
 */
void globals::ListCreate() {
    /*
        1134c8:	e1a0c00d 	mov	ip, sp
        1134cc:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1134d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1134d4:	eb6974c9 	bl	1b70800 <$ListAllocate>
        1134d8:	e3a01000 	mov	r1, #0	; 0x0
        1134dc:	e5801000 	str	r1, [r0]
        1134e0:	e5801004 	str	r1, [r0, #4]
        1134e4:	e5801008 	str	r1, [r0, #8]
        1134e8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: ListDestroy
 * Address: 00113524
 */
void globals::ListDestroy() {
    /*
        113524:	e1a0c00d 	mov	ip, sp
        113528:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        11352c:	e24cb004 	sub	fp, ip, #4	; 0x4
        113530:	e1b04000 	movs	r4, r0
        113534:	e1a05001 	mov	r5, r1
        113538:	e24dd004 	sub	sp, sp, #4	; 0x4
        11353c:	e3a06000 	mov	r6, #0	; 0x0
        113540:	e59f002c 	ldr	r0, [pc, #2c]	; 113574 <ListDestroy+0x50>
        113544:	028f2f0b 	addeq	r2, pc, #44	; 0x2c
        113548:	028f1f0d 	addeq	r1, pc, #52	; 0x34
        11354c:	0a000004 	beq	113564 <ListDestroy+0x40>
        113550:	e5941008 	ldr	r1, [r4, #8]
        113554:	e3510000 	cmp	r1, #0	; 0x0
        113558:	aa000019 	bge	1135c4 <ListDestroy+0xa0>
        11355c:	e28f2f05 	add	r2, pc, #20	; 0x14
        113560:	e28f1f0f 	add	r1, pc, #60	; 0x3c
        113564:	eb08aed7 	bl	33f0c8 <_fprintf>
        113568:	eb6974aa 	bl	1b70818 <$Listbailout>
        11356c:	e1a00006 	mov	r0, r6
        113570:	ea000030 	b	113638 <ListDestroy+0x114>
        113574:	0c105784 	ldceq	7, cr5, [r0], -#528
        113578:	4c697374 	stcmil	3, cr7, [r9], -#464
        11357c:	44657374 	strmibt	r7, [r5], -#884
        113580:	726f7900 	rsbvc	r7, pc, #0	; 0x0
        113584:	4572726f 	ldrmib	r7, [r2, -#623]!
        113588:	723a204e 	eorvcs	r2, sl, #78	; 0x4e
        11358c:	554c4c20 	strplb	r4, [ip, -#3104]
        113590:	6c697374 	stcvsl	3, cr7, [r9], -#464
        113594:	20706173 	rsbcss	r6, r0, r3, ror r1
        113598:	73656420 	cmnvc	r5, #536870912	; 0x20000000
        11359c:	746f2025 	strvcbt	r2, [pc], #25	; 1135a4 <ListDestroy+0x80>
        1135a0:	730d0000 	tstvc	sp, #0	; 0x0
        1135a4:	4572726f 	ldrmib	r7, [r2, -#623]!
        1135a8:	723a2046 	eorvcs	r2, sl, #70	; 0x46
        1135ac:	52454544 	subpl	r4, r5, #285212672	; 0x11000000
        1135b0:	206c6973 	rsbcs	r6, ip, r3, ror r9
        1135b4:	74207061 	strvct	r7, [r0], -#97
        1135b8:	73736564 	cmnvc	r3, #419430400	; 0x19000000
        1135bc:	20746f20 	rsbcss	r6, r4, r0, lsr #30
        1135c0:	25730d00 	ldrcsb	r0, [r3, -#3328]!
        1135c4:	e5940000 	ldr	r0, [r4]
        1135c8:	e3350000 	teq	r5, #0	; 0x0
        1135cc:	e58d0000 	str	r0, [sp]
        1135d0:	0a00000c 	beq	113608 <ListDestroy+0xe4>
        1135d4:	e1a0100d 	mov	r1, sp
        1135d8:	e1a00004 	mov	r0, r4
        1135dc:	eb69748c 	bl	1b70814 <$ListRemoveEntry>
        1135e0:	e3300000 	teq	r0, #0	; 0x0
        1135e4:	0a00000c 	beq	11361c <ListDestroy+0xf8>
        1135e8:	e1a0e00f 	mov	lr, pc
        1135ec:	e1a0f005 	mov	pc, r5
        1135f0:	e1a0100d 	mov	r1, sp
        1135f4:	e1a00004 	mov	r0, r4
        1135f8:	eb697485 	bl	1b70814 <$ListRemoveEntry>
        1135fc:	e3300000 	teq	r0, #0	; 0x0
        113600:	1afffff8 	bne	1135e8 <ListDestroy+0xc4>
        113604:	ea000004 	b	11361c <ListDestroy+0xf8>
        113608:	e1a0100d 	mov	r1, sp
        11360c:	e1a00004 	mov	r0, r4
        113610:	eb69747f 	bl	1b70814 <$ListRemoveEntry>
        113614:	e3300000 	teq	r0, #0	; 0x0
        113618:	1afffffa 	bne	113608 <ListDestroy+0xe4>
        11361c:	e59f0018 	ldr	r0, [pc, #18]	; 11363c <ListDestroy+0x118>
        113620:	e5901004 	ldr	r1, [r0, #4]
        113624:	e5841000 	str	r1, [r4]
        113628:	e5a04004 	str	r4, [r0, #4]!
        11362c:	e3e00000 	mvn	r0, #0	; 0x0
        113630:	e5a40008 	str	r0, [r4, #8]!
        113634:	e3a00001 	mov	r0, #1	; 0x1
        113638:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        11363c:	0c1010d4 	ldceq	0, cr1, [r0], -#848
    */
}

/**
 * Symbol: ListAddEntry
 * Address: 001136c0
 */
void globals::ListAddEntry() {
    /*
        1136c0:	e1a0c00d 	mov	ip, sp
        1136c4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1136c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1136cc:	e1b04000 	movs	r4, r0
        1136d0:	e1a05001 	mov	r5, r1
        1136d4:	e1a06002 	mov	r6, r2
        1136d8:	e3a07000 	mov	r7, #0	; 0x0
        1136dc:	e59f0050 	ldr	r0, [pc, #50]	; 113734 <ListAddEntry+0x74>
        1136e0:	028f2f14 	addeq	r2, pc, #80	; 0x50
        1136e4:	028f1f17 	addeq	r1, pc, #92	; 0x5c
        1136e8:	0a00000d 	beq	113724 <ListAddEntry+0x64>
        1136ec:	e5941008 	ldr	r1, [r4, #8]
        1136f0:	e3510000 	cmp	r1, #0	; 0x0
        1136f4:	b28f2f0f 	addlt	r2, pc, #60	; 0x3c
        1136f8:	b28f1f1a 	addlt	r1, pc, #104	; 0x68
        1136fc:	ba000008 	blt	113724 <ListAddEntry+0x64>
        113700:	e5951000 	ldr	r1, [r5]
        113704:	e3310000 	teq	r1, #0	; 0x0
        113708:	0a000028 	beq	1137b0 <ListAddEntry+0xf0>
        11370c:	e5911000 	ldr	r1, [r1]
        113710:	e59fc070 	ldr	ip, [pc, #70]	; 113788 <ListAddEntry+0xc8>
        113714:	e131000c 	teq	r1, ip
        113718:	1a000024 	bne	1137b0 <ListAddEntry+0xf0>
        11371c:	e28f2f05 	add	r2, pc, #20	; 0x14
        113720:	e28f1f19 	add	r1, pc, #100	; 0x64
        113724:	eb08ae67 	bl	33f0c8 <_fprintf>
        113728:	eb69743a 	bl	1b70818 <$Listbailout>
        11372c:	e1a00007 	mov	r0, r7
        113730:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        113734:	0c105784 	ldceq	7, cr5, [r0], -#528
        113738:	4c697374 	stcmil	3, cr7, [r9], -#464
        11373c:	41646445 	cmnmi	r4, r5, asr #8
        113740:	6e747279 	mrcvs	2, 3, r7, cr4, cr9, {3}
        113744:	00000000 	andeq	r0, r0, r0
        113748:	4572726f 	ldrmib	r7, [r2, -#623]!
        11374c:	723a204e 	eorvcs	r2, sl, #78	; 0x4e
        113750:	554c4c20 	strplb	r4, [ip, -#3104]
        113754:	6c697374 	stcvsl	3, cr7, [r9], -#464
        113758:	20706173 	rsbcss	r6, r0, r3, ror r1
        11375c:	73656420 	cmnvc	r5, #536870912	; 0x20000000
        113760:	746f2025 	strvcbt	r2, [pc], #25	; 113768 <ListAddEntry+0xa8>
        113764:	730d0000 	tstvc	sp, #0	; 0x0
        113768:	4572726f 	ldrmib	r7, [r2, -#623]!
        11376c:	723a2046 	eorvcs	r2, sl, #70	; 0x46
        113770:	52454544 	subpl	r4, r5, #285212672	; 0x11000000
        113774:	206c6973 	rsbcs	r6, ip, r3, ror r9
        113778:	74207061 	strvct	r7, [r0], -#97
        11377c:	73736564 	cmnvc	r3, #419430400	; 0x19000000
        113780:	20746f20 	rsbcss	r6, r4, r0, lsr #30
        113784:	25730d00 	ldrcsb	r0, [r3, -#3328]!
        113788:	46466c67 	strmib	r6, [r6], -r7, ror #24
        11378c:	4572726f 	ldrmib	r7, [r2, -#623]!
        113790:	723a2046 	eorvcs	r2, sl, #70	; 0x46
        113794:	52454544 	subpl	r4, r5, #285212672	; 0x11000000
        113798:	20697465 	rsbcs	r7, r9, r5, ror #8
        11379c:	6d20696e 	stcvs	9, cr6, [r0, -#440]!
        1137a0:	64657865 	strvsbt	r7, [r5], -#2149
        1137a4:	6420696e 	strvst	r6, [r0], -#2414
        1137a8:	2025730d 	eorcs	r7, r5, sp, lsl #6
        1137ac:	00000000 	andeq	r0, r0, r0
        1137b0:	eb697416 	bl	1b70810 <$ListEntryAllocate>
        1137b4:	e5806000 	str	r6, [r0]
        1137b8:	e5951000 	ldr	r1, [r5]
        1137bc:	e3310000 	teq	r1, #0	; 0x0
        1137c0:	1a000003 	bne	1137d4 <ListAddEntry+0x114>
        1137c4:	e5941000 	ldr	r1, [r4]
        1137c8:	e9800082 	stmib	r0, {r1, r7}
        1137cc:	e5840000 	str	r0, [r4]
        1137d0:	ea000005 	b	1137ec <ListAddEntry+0x12c>
        1137d4:	e5911004 	ldr	r1, [r1, #4]
        1137d8:	e5801004 	str	r1, [r0, #4]
        1137dc:	e5951000 	ldr	r1, [r5]
        1137e0:	e5801008 	str	r1, [r0, #8]
        1137e4:	e5951000 	ldr	r1, [r5]
        1137e8:	e5a10004 	str	r0, [r1, #4]!
        1137ec:	e5901004 	ldr	r1, [r0, #4]
        1137f0:	e3310000 	teq	r1, #0	; 0x0
        1137f4:	15a10008 	strne	r0, [r1, #8]!
        1137f8:	e5942004 	ldr	r2, [r4, #4]
        1137fc:	e5951000 	ldr	r1, [r5]
        113800:	e1320001 	teq	r2, r1
        113804:	05840004 	streq	r0, [r4, #4]
        113808:	e5850000 	str	r0, [r5]
        11380c:	e5940008 	ldr	r0, [r4, #8]
        113810:	e2800001 	add	r0, r0, #1	; 0x1
        113814:	e5a40008 	str	r0, [r4, #8]!
        113818:	e3a00001 	mov	r0, #1	; 0x1
        11381c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: LoadStartupDriver(void)
 * Address: 00113fc4
 */
LoadStartupDriver(void) {
    /*
        113fc4:	e1a0c00d 	mov	ip, sp
        113fc8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        113fcc:	e24cb004 	sub	fp, ip, #4	; 0x4
        113fd0:	e28f1f07 	add	r1, pc, #28	; 0x1c
        113fd4:	e28f0f0b 	add	r0, pc, #44	; 0x2c
        113fd8:	eb6b0eeb 	bl	1bd7b8c <$NewByName__FPCcT1>
        113fdc:	e59f1034 	ldr	r1, [pc, #34]	; 114018 <LoadStartupDriver(void)+0x54>
        113fe0:	e5a10068 	str	r0, [r1, #104]!
        113fe4:	e3300000 	teq	r0, #0	; 0x0
        113fe8:	191b6800 	ldmnedb	fp, {fp, sp, lr}
        113fec:	1a68029b 	bne	1b14a60 <TStartupDriver::$Init(void)>
        113ff0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        113ff4:	544d6169 	strplb	r6, [sp], -#361
        113ff8:	6e537461 	cdpvs	4, 5, cr7, cr3, cr1, {3}
        113ffc:	72747570 	rsbvcs	r7, r4, #469762048	; 0x1c000000
        114000:	44726976 	ldrmibt	r6, [r2], -#2422
        114004:	65720000 	ldrvsb	r0, [r2]!
        114008:	54537461 	ldrplb	r7, [r3], -#1121
        11400c:	72747570 	rsbvcs	r7, r4, #469762048	; 0x1c000000
        114010:	44726976 	ldrmibt	r6, [r2], -#2422
        114014:	65720000 	ldrvsb	r0, [r2]!
        114018:	0c1010e8 	ldceq	0, cr1, [r0], -#928
    */
}

/**
 * Symbol: LongToString(long, char *)
 * Address: 0011b898
 */
LongToString(long, char *) {
    /*
        11b898:	eafc7211 	b	380e4 <xNumToString(long, char *)>
    */
}

/**
 * Symbol: LastTabPt(TabPt *)
 * Address: 0011b8ec
 */
LastTabPt(TabPt *) {
    /*
        11b8ec:	eafc7271 	b	382b8 <xLastPoint(TabPt *)>
    */
}

/**
 * Symbol: LockHandle(char **)
 * Address: 0011b928
 */
LockHandle(char **) {
    /*
        11b928:	eafc71e1 	b	380b4 <xHLock(char **)>
    */
}

/**
 * Symbol: LookupWordInChain(unsigned char *, TDictChain *, unsigned long *)
 * Address: 0013f430
 */
LookupWordInChain(unsigned char *, TDictChain *, unsigned long *) {
    /*
        13f430:	e1a0c00d 	mov	ip, sp
        13f434:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        13f438:	e24cb004 	sub	fp, ip, #4	; 0x4
        13f43c:	e1a05000 	mov	r5, r0
        13f440:	e1b04001 	movs	r4, r1
        13f444:	e24dd010 	sub	sp, sp, #16	; 0x10
        13f448:	e3e09000 	mvn	r9, #0	; 0x0
        13f44c:	0a000026 	beq	13f4ec <LookupWordInChain(unsigned char *, TDictChain *, unsigned long *)+0xbc>
        13f450:	e3a06000 	mov	r6, #0	; 0x0
        13f454:	e594800c 	ldr	r8, [r4, #12]
        13f458:	e3580000 	cmp	r8, #0	; 0x0
        13f45c:	9a000022 	bls	13f4ec <LookupWordInChain(unsigned char *, TDictChain *, unsigned long *)+0xbc>
        13f460:	e59fa074 	ldr	sl, [pc, #74]	; 13f4dc <LookupWordInChain(unsigned char *, TDictChain *, unsigned long *)+0xac>
        13f464:	e1a01006 	mov	r1, r6
        13f468:	e1a00004 	mov	r0, r4
        13f46c:	e5942000 	ldr	r2, [r4]
        13f470:	e1a0e00f 	mov	lr, pc
        13f474:	e282f01c 	add	pc, r2, #28	; 0x1c
        13f478:	e5907000 	ldr	r7, [r0]
        13f47c:	e28d000c 	add	r0, sp, #12	; 0xc
        13f480:	e58d0008 	str	r0, [sp, #8]
        13f484:	e28d0004 	add	r0, sp, #4	; 0x4
        13f488:	e3a03000 	mov	r3, #0	; 0x0
        13f48c:	e58d0000 	str	r0, [sp]
        13f490:	e92d0008 	stmdb	sp!, {r3}
        13f494:	e28d3004 	add	r3, sp, #4	; 0x4
        13f498:	e28d200c 	add	r2, sp, #12	; 0xc
        13f49c:	e1a01005 	mov	r1, r5
        13f4a0:	e1a00007 	mov	r0, r7
        13f4a4:	eb6306fb 	bl	1a01098 <$VerifyString>
        13f4a8:	e28dd004 	add	sp, sp, #4	; 0x4
        13f4ac:	e59a0000 	ldr	r0, [sl]
        13f4b0:	e3700006 	cmn	r0, #6	; 0x6
        13f4b4:	13300001 	teqne	r0, #1	; 0x1
        13f4b8:	0a000008 	beq	13f4e0 <LookupWordInChain(unsigned char *, TDictChain *, unsigned long *)+0xb0>
        13f4bc:	e5970000 	ldr	r0, [r7]
        13f4c0:	e5b09004 	ldr	r9, [r0, #4]!
        13f4c4:	e59d0000 	ldr	r0, [sp]
        13f4c8:	e3300000 	teq	r0, #0	; 0x0
        13f4cc:	15900000 	ldrne	r0, [r0]
        13f4d0:	151b202c 	ldrne	r2, [fp, -#44]
        13f4d4:	15820000 	strne	r0, [r2]
        13f4d8:	ea000003 	b	13f4ec <LookupWordInChain(unsigned char *, TDictChain *, unsigned long *)+0xbc>
        13f4dc:	0c100810 	ldceq	8, cr0, [r0], -#64
        13f4e0:	e2866001 	add	r6, r6, #1	; 0x1
        13f4e4:	e1560008 	cmp	r6, r8
        13f4e8:	3affffdd 	bcc	13f464 <LookupWordInChain(unsigned char *, TDictChain *, unsigned long *)+0x34>
        13f4ec:	e1a00009 	mov	r0, r9
        13f4f0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: LookupWord(unsigned short *, unsigned long *)
 * Address: 0013f4f4
 */
LookupWord(unsigned short *, unsigned long *) {
    /*
        13f4f4:	e1a0c00d 	mov	ip, sp
        13f4f8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        13f4fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        13f500:	e1a05000 	mov	r5, r0
        13f504:	e1a04001 	mov	r4, r1
        13f508:	e24dd04c 	sub	sp, sp, #76	; 0x4c
        13f50c:	e3a00000 	mov	r0, #0	; 0x0
        13f510:	e5810000 	str	r0, [r1]
        13f514:	e1a0000d 	mov	r0, sp
        13f518:	eb6682d5 	bl	1ae0074 <$BuildChains(TDictChain **)>
        13f51c:	e28d100c 	add	r1, sp, #12	; 0xc
        13f520:	e1a00005 	mov	r0, r5
        13f524:	e3a0303f 	mov	r3, #63	; 0x3f
        13f528:	e3a02001 	mov	r2, #1	; 0x1
        13f52c:	eb6a9f93 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
        13f530:	e1a02004 	mov	r2, r4
        13f534:	e59d1000 	ldr	r1, [sp]
        13f538:	e28d000c 	add	r0, sp, #12	; 0xc
        13f53c:	eb6623b2 	bl	1ac840c <$LookupWordInChain(unsigned char *, TDictChain *, unsigned long *)>
        13f540:	e1a05000 	mov	r5, r0
        13f544:	e3700001 	cmn	r0, #1	; 0x1
        13f548:	1a000004 	bne	13f560 <LookupWord(unsigned short *, unsigned long *)+0x6c>
        13f54c:	e1a02004 	mov	r2, r4
        13f550:	e59d1008 	ldr	r1, [sp, #8]
        13f554:	e28d000c 	add	r0, sp, #12	; 0xc
        13f558:	eb6623ab 	bl	1ac840c <$LookupWordInChain(unsigned char *, TDictChain *, unsigned long *)>
        13f55c:	e1a05000 	mov	r5, r0
        13f560:	e1a0000d 	mov	r0, sp
        13f564:	eb65b84c 	bl	1aad69c <$DoneChains(TDictChain **)>
        13f568:	e1a00005 	mov	r0, r5
        13f56c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: LookupWordOrVariant(unsigned short *, unsigned long *, unsigned long *)
 * Address: 0013f570
 */
LookupWordOrVariant(unsigned short *, unsigned long *, unsigned long *) {
    /*
        13f570:	e1a0c00d 	mov	ip, sp
        13f574:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        13f578:	e24cb004 	sub	fp, ip, #4	; 0x4
        13f57c:	e1a06000 	mov	r6, r0
        13f580:	e1a04001 	mov	r4, r1
        13f584:	e1a05002 	mov	r5, r2
        13f588:	e24dd04c 	sub	sp, sp, #76	; 0x4c
        13f58c:	e3e07000 	mvn	r7, #0	; 0x0
        13f590:	e3a00000 	mov	r0, #0	; 0x0
        13f594:	e5919000 	ldr	r9, [r1]
        13f598:	e5810000 	str	r0, [r1]
        13f59c:	e1a0000d 	mov	r0, sp
        13f5a0:	eb6682b3 	bl	1ae0074 <$BuildChains(TDictChain **)>
        13f5a4:	e3a08000 	mov	r8, #0	; 0x0
        13f5a8:	ea000013 	b	13f5fc <LookupWordOrVariant(unsigned short *, unsigned long *, unsigned long *)+0x8c>
        13f5ac:	e28d100c 	add	r1, sp, #12	; 0xc
        13f5b0:	e1a00005 	mov	r0, r5
        13f5b4:	e3a0303f 	mov	r3, #63	; 0x3f
        13f5b8:	e3a02001 	mov	r2, #1	; 0x1
        13f5bc:	eb6a9f6f 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
        13f5c0:	e1a02004 	mov	r2, r4
        13f5c4:	e59d1000 	ldr	r1, [sp]
        13f5c8:	e28d000c 	add	r0, sp, #12	; 0xc
        13f5cc:	eb66238e 	bl	1ac840c <$LookupWordInChain(unsigned char *, TDictChain *, unsigned long *)>
        13f5d0:	e1a07000 	mov	r7, r0
        13f5d4:	e3700001 	cmn	r0, #1	; 0x1
        13f5d8:	1a000004 	bne	13f5f0 <LookupWordOrVariant(unsigned short *, unsigned long *, unsigned long *)+0x80>
        13f5dc:	e1a02004 	mov	r2, r4
        13f5e0:	e59d1008 	ldr	r1, [sp, #8]
        13f5e4:	e28d000c 	add	r0, sp, #12	; 0xc
        13f5e8:	eb662387 	bl	1ac840c <$LookupWordInChain(unsigned char *, TDictChain *, unsigned long *)>
        13f5ec:	e1a07000 	mov	r7, r0
        13f5f0:	e2888001 	add	r8, r8, #1	; 0x1
        13f5f4:	e3770001 	cmn	r7, #1	; 0x1
        13f5f8:	1a000006 	bne	13f618 <LookupWordOrVariant(unsigned short *, unsigned long *, unsigned long *)+0xa8>
        13f5fc:	e1a03005 	mov	r3, r5
        13f600:	e1a02008 	mov	r2, r8
        13f604:	e1a01009 	mov	r1, r9
        13f608:	e1a00006 	mov	r0, r6
        13f60c:	eb668299 	bl	1ae0078 <$BuildCaseVariant__FPUsUlT2T1>
        13f610:	e3300000 	teq	r0, #0	; 0x0
        13f614:	1affffe4 	bne	13f5ac <LookupWordOrVariant(unsigned short *, unsigned long *, unsigned long *)+0x3c>
        13f618:	e1a0000d 	mov	r0, sp
        13f61c:	eb65b81e 	bl	1aad69c <$DoneChains(TDictChain **)>
        13f620:	e1a00007 	mov	r0, r7
        13f624:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: LoadInkerCalibration(void)
 * Address: 0013fc2c
 */
LoadInkerCalibration(void) {
    /*
        13fc2c:	e1a0c00d 	mov	ip, sp
        13fc30:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        13fc34:	e24cb004 	sub	fp, ip, #4	; 0x4
        13fc38:	e24dd004 	sub	sp, sp, #4	; 0x4
        13fc3c:	e3a00002 	mov	r0, #2	; 0x2
        13fc40:	eb6a0941 	bl	1bc214c <$AllocateRefHandle(long)>
        13fc44:	e58d0000 	str	r0, [sp]
        13fc48:	e1a0100d 	mov	r1, sp
        13fc4c:	e59f0040 	ldr	r0, [pc, #40]	; 13fc94 <LoadInkerCalibration(void)+0x68>
        13fc50:	eb6a0d5e 	bl	1bc31d0 <$DoBlock__FRC6RefVarT1>
        13fc54:	e2504002 	subs	r4, r0, #2	; 0x2
        13fc58:	13a04001 	movne	r4, #1	; 0x1
        13fc5c:	e59d0000 	ldr	r0, [sp]
        13fc60:	eb6a0d55 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        13fc64:	e1b00004 	movs	r0, r4
        13fc68:	e3a05001 	mov	r5, #1	; 0x1
        13fc6c:	e59f4024 	ldr	r4, [pc, #24]	; 13fc98 <LoadInkerCalibration(void)+0x6c>
        13fc70:	15c45000 	strneb	r5, [r4]
        13fc74:	e28f1f08 	add	r1, pc, #32	; 0x20
        13fc78:	e28f0f08 	add	r0, pc, #32	; 0x20
        13fc7c:	eb6ac2f8 	bl	1bf0864 <$fopen>
        13fc80:	e3300000 	teq	r0, #0	; 0x0
        13fc84:	0a000009 	beq	13fcb0 <LoadInkerCalibration(void)+0x84>
        13fc88:	e5c45000 	strb	r5, [r4]
        13fc8c:	eb6ac2f0 	bl	1bf0854 <$fclose>
        13fc90:	ea000007 	b	13fcb4 <LoadInkerCalibration(void)+0x88>
        13fc94:	00680670 	rsbeq	r0, r8, r0, ror r6
        13fc98:	0c101654 	ldceq	6, cr1, [r0], -#336
        13fc9c:	72000000 	andvc	r0, r0, #0	; 0x0
        13fca0:	626f6f74 	rsbvs	r6, pc, #464	; 0x1d0
        13fca4:	4e6f4361 	cdpmi	3, 6, cr4, cr15, cr1, {3}
        13fca8:	6c696272 	sfmvs	f6, 2, [r9], -#456
        13fcac:	61746500 	cmnvs	r4, r0, lsl #10
        13fcb0:	eb652e45 	bl	1a8b5cc <$CheckTabletCalibration(void)>
        13fcb4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: LockPtr
 * Address: 00143044
 */
void globals::LockPtr() {
    /*
        143044:	e1a0c00d 	mov	ip, sp
        143048:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        14304c:	e24cb004 	sub	fp, ip, #4	; 0x4
        143050:	e1a04000 	mov	r4, r0
        143054:	eb6a7827 	bl	1be10f8 <$GetPtrSize>
        143058:	e0801004 	add	r1, r0, r4
        14305c:	e1a00004 	mov	r0, r4
        143060:	e3a02000 	mov	r2, #0	; 0x0
        143064:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        143068:	ea6a4eb9 	b	1bd6b54 <$LockHeapRange>
    */
}

/**
 * Symbol: LearnPartsCopy__FP13PS_point_typeT1P14Part_of_letters
 * Address: 00147a50
 */
void globals::LearnPartsCopy() {
    /*
        147a50:	e92d47f0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, lr}
        147a54:	e1b0c000 	movs	ip, r0
        147a58:	e1a06803 	mov	r6, r3, lsl #16
        147a5c:	e1a06846 	mov	r6, r6, asr #16
        147a60:	e3a00000 	mov	r0, #0	; 0x0
        147a64:	13310000 	teqne	r1, #0	; 0x0
        147a68:	13320000 	teqne	r2, #0	; 0x0
        147a6c:	08bd87f0 	ldmeqia	sp!, {r4, r5, r6, r7, r8, r9, sl, pc}
        147a70:	e3560000 	cmp	r6, #0	; 0x0
        147a74:	d8bd87f0 	ldmleia	sp!, {r4, r5, r6, r7, r8, r9, sl, pc}
        147a78:	e5c10001 	strb	r0, [r1, #1]
        147a7c:	e5c10000 	strb	r0, [r1]
        147a80:	e3e05000 	mvn	r5, #0	; 0x0
        147a84:	e5c15003 	strb	r5, [r1, #3]
        147a88:	e5c15002 	strb	r5, [r1, #2]
        147a8c:	e3a03001 	mov	r3, #1	; 0x1
        147a90:	e3a04000 	mov	r4, #0	; 0x0
        147a94:	da000032 	ble	147b64 <LearnPartsCopy__FP13PS_point_typeT1P14Part_of_letters+0x114>
        147a98:	e3a07000 	mov	r7, #0	; 0x0
        147a9c:	e792e104 	ldr	lr, [r2, r4, lsl #2]
        147aa0:	e1a0e84e 	mov	lr, lr, asr #16
        147aa4:	e0829104 	add	r9, r2, r4, lsl #2
        147aa8:	e5998002 	ldr	r8, [r9, #2]
        147aac:	e15e0848 	cmp	lr, r8, asr #16
        147ab0:	ca000026 	bgt	147b50 <LearnPartsCopy__FP13PS_point_typeT1P14Part_of_letters+0x100>
        147ab4:	e08c810e 	add	r8, ip, lr, lsl #2
        147ab8:	e598a002 	ldr	sl, [r8, #2]
        147abc:	e1b0a84a 	movs	sl, sl, asr #16
        147ac0:	4a000010 	bmi	147b08 <LearnPartsCopy__FP13PS_point_typeT1P14Part_of_letters+0xb8>
        147ac4:	e79ca10e 	ldr	sl, [ip, lr, lsl #2]
        147ac8:	e1a0a82a 	mov	sl, sl, lsr #16
        147acc:	e0817103 	add	r7, r1, r3, lsl #2
        147ad0:	e5c7a001 	strb	sl, [r7, #1]
        147ad4:	e1a0a44a 	mov	sl, sl, asr #8
        147ad8:	e5c7a000 	strb	sl, [r7]
        147adc:	e5988002 	ldr	r8, [r8, #2]
        147ae0:	e1a08828 	mov	r8, r8, lsr #16
        147ae4:	e5c78003 	strb	r8, [r7, #3]
        147ae8:	e1a08448 	mov	r8, r8, asr #8
        147aec:	e5c78002 	strb	r8, [r7, #2]
        147af0:	e2833001 	add	r3, r3, #1	; 0x1
        147af4:	e1a03803 	mov	r3, r3, lsl #16
        147af8:	e1a03843 	mov	r3, r3, asr #16
        147afc:	e3330c01 	teq	r3, #256	; 0x100
        147b00:	08bd87f0 	ldmeqia	sp!, {r4, r5, r6, r7, r8, r9, sl, pc}
        147b04:	e3a07001 	mov	r7, #1	; 0x1
        147b08:	e28ee001 	add	lr, lr, #1	; 0x1
        147b0c:	e1a0e80e 	mov	lr, lr, lsl #16
        147b10:	e1a0e84e 	mov	lr, lr, asr #16
        147b14:	e5998002 	ldr	r8, [r9, #2]
        147b18:	e15e0848 	cmp	lr, r8, asr #16
        147b1c:	daffffe4 	ble	147ab4 <LearnPartsCopy__FP13PS_point_typeT1P14Part_of_letters+0x64>
        147b20:	e3370000 	teq	r7, #0	; 0x0
        147b24:	0a000009 	beq	147b50 <LearnPartsCopy__FP13PS_point_typeT1P14Part_of_letters+0x100>
        147b28:	e081e103 	add	lr, r1, r3, lsl #2
        147b2c:	e5ce0001 	strb	r0, [lr, #1]
        147b30:	e5ce0000 	strb	r0, [lr]
        147b34:	e5ce5003 	strb	r5, [lr, #3]
        147b38:	e5ce5002 	strb	r5, [lr, #2]
        147b3c:	e2833001 	add	r3, r3, #1	; 0x1
        147b40:	e1a03803 	mov	r3, r3, lsl #16
        147b44:	e1a03843 	mov	r3, r3, asr #16
        147b48:	e3330c01 	teq	r3, #256	; 0x100
        147b4c:	08bd87f0 	ldmeqia	sp!, {r4, r5, r6, r7, r8, r9, sl, pc}
        147b50:	e284e001 	add	lr, r4, #1	; 0x1
        147b54:	e1a0480e 	mov	r4, lr, lsl #16
        147b58:	e1a04844 	mov	r4, r4, asr #16
        147b5c:	e1540006 	cmp	r4, r6
        147b60:	baffffcc 	blt	147a98 <LearnPartsCopy__FP13PS_point_typeT1P14Part_of_letters+0x48>
        147b64:	e0811103 	add	r1, r1, r3, lsl #2
        147b68:	e5c10001 	strb	r0, [r1, #1]
        147b6c:	e5c10000 	strb	r0, [r1]
        147b70:	e5c15003 	strb	r5, [r1, #3]
        147b74:	e5c15002 	strb	r5, [r1, #2]
        147b78:	e2830001 	add	r0, r3, #1	; 0x1
        147b7c:	e1a00800 	mov	r0, r0, lsl #16
        147b80:	e1a00840 	mov	r0, r0, asr #16
        147b84:	e8bd87f0 	ldmia	sp!, {r4, r5, r6, r7, r8, r9, sl, pc}
    */
}

/**
 * Symbol: LoadPackage(CPipe *, unsigned long *, unsigned char)
 * Address: 0015d4e0
 */
LoadPackage(CPipe *, unsigned long *, unsigned char) {
    /*
        15d4e0:	e1a0c00d 	mov	ip, sp
        15d4e4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        15d4e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        15d4ec:	e1a04001 	mov	r4, r1
        15d4f0:	e3a01002 	mov	r1, #2	; 0x2
        15d4f4:	e56d1008 	strb	r1, [sp, -#8]!
        15d4f8:	e3a01000 	mov	r1, #0	; 0x0
        15d4fc:	e5cd1001 	strb	r1, [sp, #1]
        15d500:	e24dd024 	sub	sp, sp, #36	; 0x24
        15d504:	e1a01000 	mov	r1, r0
        15d508:	e1a0000d 	mov	r0, sp
        15d50c:	e28d3024 	add	r3, sp, #36	; 0x24
        15d510:	e893000c 	ldmia	r3, {r2, r3}
        15d514:	eb69c060 	bl	1bcd69c <TPackageLoader::$__ct(CPipe *, SourceType)>
        15d518:	e1a01004 	mov	r1, r4
        15d51c:	e1a0000d 	mov	r0, sp
        15d520:	eb66616d 	bl	1af5adc <$cPackageLoad(TPackageLoader &, unsigned long *)>
        15d524:	e1a04000 	mov	r4, r0
        15d528:	e1a0000d 	mov	r0, sp
        15d52c:	e3a01000 	mov	r1, #0	; 0x0
        15d530:	eb69c475 	bl	1bce70c <TPackageLoader::$__dt(void)>
        15d534:	e1a00004 	mov	r0, r4
        15d538:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: LoadPackage(char *, SourceType, unsigned long *)
 * Address: 0015d53c
 */
LoadPackage(char *, SourceType, unsigned long *) {
    /*
        15d53c:	e1a0c00d 	mov	ip, sp
        15d540:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        15d544:	e24cb004 	sub	fp, ip, #4	; 0x4
        15d548:	e1a0e001 	mov	lr, r1
        15d54c:	e1a0c002 	mov	ip, r2
        15d550:	e1a04000 	mov	r4, r0
        15d554:	e1a05003 	mov	r5, r3
        15d558:	e24dd008 	sub	sp, sp, #8	; 0x8
        15d55c:	e88d0006 	stmia	sp, {r1, r2}
        15d560:	e4dd0008 	ldrb	r0, [sp], #8
        15d564:	e3100001 	tst	r0, #1	; 0x1
        15d568:	03a000ea 	moveq	r0, #234	; 0xea
        15d56c:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        15d570:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        15d574:	e3a03000 	mov	r3, #0	; 0x0
        15d578:	e3a02000 	mov	r2, #0	; 0x0
        15d57c:	e3a01000 	mov	r1, #0	; 0x0
        15d580:	e3a00000 	mov	r0, #0	; 0x0
        15d584:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        15d588:	e1a03005 	mov	r3, r5
        15d58c:	e1a00004 	mov	r0, r4
        15d590:	e1a0100e 	mov	r1, lr
        15d594:	e1a0200c 	mov	r2, ip
        15d598:	eb66cca2 	bl	1b10828 <$InstallPackage__FPc10SourceTypePUlPUcT4P6TStoreUl>
        15d59c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: LoadPackage(TEndpointPipe *, unsigned long *, unsigned char)
 * Address: 0015d5a0
 */
LoadPackage(TEndpointPipe *, unsigned long *, unsigned char) {
    /*
        15d5a0:	e1a0c00d 	mov	ip, sp
        15d5a4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        15d5a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        15d5ac:	e1a04001 	mov	r4, r1
        15d5b0:	e3a01002 	mov	r1, #2	; 0x2
        15d5b4:	e56d1008 	strb	r1, [sp, -#8]!
        15d5b8:	e3a01000 	mov	r1, #0	; 0x0
        15d5bc:	e5cd1001 	strb	r1, [sp, #1]
        15d5c0:	e24dd024 	sub	sp, sp, #36	; 0x24
        15d5c4:	e1a01000 	mov	r1, r0
        15d5c8:	e1a0000d 	mov	r0, sp
        15d5cc:	e28d3024 	add	r3, sp, #36	; 0x24
        15d5d0:	e893000c 	ldmia	r3, {r2, r3}
        15d5d4:	eb69c02f 	bl	1bcd698 <TPackageLoader::$__ct(TEndpointPipe *, SourceType)>
        15d5d8:	e1a01004 	mov	r1, r4
        15d5dc:	e1a0000d 	mov	r0, sp
        15d5e0:	eb66613d 	bl	1af5adc <$cPackageLoad(TPackageLoader &, unsigned long *)>
        15d5e4:	e1a04000 	mov	r4, r0
        15d5e8:	e1a0000d 	mov	r0, sp
        15d5ec:	e3a01000 	mov	r1, #0	; 0x0
        15d5f0:	eb69c445 	bl	1bce70c <TPackageLoader::$__dt(void)>
        15d5f4:	e1a00004 	mov	r0, r4
        15d5f8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: LoadPackage(CPipe *, SourceType, unsigned long *)
 * Address: 0015d5fc
 */
LoadPackage(CPipe *, SourceType, unsigned long *) {
    /*
        15d5fc:	e1a0c00d 	mov	ip, sp
        15d600:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        15d604:	e24cb004 	sub	fp, ip, #4	; 0x4
        15d608:	e1a0e001 	mov	lr, r1
        15d60c:	e1a0c002 	mov	ip, r2
        15d610:	e1a04003 	mov	r4, r3
        15d614:	e24dd008 	sub	sp, sp, #8	; 0x8
        15d618:	e88d0006 	stmia	sp, {r1, r2}
        15d61c:	e4dd1008 	ldrb	r1, [sp], #8
        15d620:	e3110001 	tst	r1, #1	; 0x1
        15d624:	1a00000e 	bne	15d664 <LoadPackage(CPipe *, SourceType, unsigned long *)+0x68>
        15d628:	e24dd024 	sub	sp, sp, #36	; 0x24
        15d62c:	e1a01000 	mov	r1, r0
        15d630:	e1a0000d 	mov	r0, sp
        15d634:	e1a0200e 	mov	r2, lr
        15d638:	e1a0300c 	mov	r3, ip
        15d63c:	eb69c016 	bl	1bcd69c <TPackageLoader::$__ct(CPipe *, SourceType)>
        15d640:	e1a01004 	mov	r1, r4
        15d644:	e1a0000d 	mov	r0, sp
        15d648:	eb666123 	bl	1af5adc <$cPackageLoad(TPackageLoader &, unsigned long *)>
        15d64c:	e1a04000 	mov	r4, r0
        15d650:	e1a0000d 	mov	r0, sp
        15d654:	e3a01000 	mov	r1, #0	; 0x0
        15d658:	eb69c42b 	bl	1bce70c <TPackageLoader::$__dt(void)>
        15d65c:	e1a00004 	mov	r0, r4
        15d660:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        15d664:	e3a000ea 	mov	r0, #234	; 0xea
        15d668:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        15d66c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: LetterWeightDataPtr(void)
 * Address: 001678cc
 */
LetterWeightDataPtr(void) {
    /*
        1678cc:	e1a0c00d 	mov	ip, sp
        1678d0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1678d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1678d8:	e24dd004 	sub	sp, sp, #4	; 0x4
        1678dc:	eb65d984 	bl	1addef4 <$GetLetterSet(void)>
        1678e0:	ebfe7a04 	bl	1060f8 <LIBeginWeights(void)>
        1678e4:	e1a04000 	mov	r4, r0
        1678e8:	e59f0068 	ldr	r0, [pc, #68]	; 167958 <LetterWeightDataPtr(void)+0x8c>
        1678ec:	e5900000 	ldr	r0, [r0]
        1678f0:	e59f1064 	ldr	r1, [pc, #64]	; 16795c <LetterWeightDataPtr(void)+0x90>
        1678f4:	eb67e1aa 	bl	1b5ffa4 <TController::$GetTypedDomain(unsigned long)>
        1678f8:	e1a05000 	mov	r5, r0
        1678fc:	e1a0c000 	mov	ip, r0
        167900:	e1a03004 	mov	r3, r4
        167904:	e59f0054 	ldr	r0, [pc, #54]	; 167960 <LetterWeightDataPtr(void)+0x94>
        167908:	e5902000 	ldr	r2, [r0]
        16790c:	e1a0000c 	mov	r0, ip
        167910:	e3a01041 	mov	r1, #65	; 0x41
        167914:	e2811802 	add	r1, r1, #131072	; 0x20000
        167918:	e59cc000 	ldr	ip, [ip]
        16791c:	e1a0e00f 	mov	lr, pc
        167920:	e28cf02c 	add	pc, ip, #44	; 0x2c
        167924:	e1a03004 	mov	r3, r4
        167928:	e1a0200d 	mov	r2, sp
        16792c:	e1a00005 	mov	r0, r5
        167930:	e3a01022 	mov	r1, #34	; 0x22
        167934:	e2811802 	add	r1, r1, #131072	; 0x20000
        167938:	e595c000 	ldr	ip, [r5]
        16793c:	e1a0e00f 	mov	lr, pc
        167940:	e28cf02c 	add	pc, ip, #44	; 0x2c
        167944:	e1a00004 	mov	r0, r4
        167948:	ebfe7dc6 	bl	107068 <LIEndWeights(char **)>
        16794c:	e59d0000 	ldr	r0, [sp]
        167950:	eb65d968 	bl	1addef8 <$GetParaPtr(char **)>
        167954:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        167958:	0c10187c 	ldceq	8, cr1, [r0], -#496
        16795c:	58525752 	ldmplda	r2, {r1, r4, r6, r8, r9, sl, ip, lr}^
        167960:	0c10184c 	ldceq	8, cr1, [r0], -#304
    */
}

/**
 * Symbol: LearningDataPtr(void)
 * Address: 00167dc8
 */
LearningDataPtr(void) {
    /*
        167dc8:	e1a0c00d 	mov	ip, sp
        167dcc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        167dd0:	e24cb004 	sub	fp, ip, #4	; 0x4
        167dd4:	e24dd004 	sub	sp, sp, #4	; 0x4
        167dd8:	ebfe78c6 	bl	1060f8 <LIBeginWeights(void)>
        167ddc:	e1a04000 	mov	r4, r0
        167de0:	e59f0050 	ldr	r0, [pc, #50]	; 167e38 <LearningDataPtr(void)+0x70>
        167de4:	e5900000 	ldr	r0, [r0]
        167de8:	e59f104c 	ldr	r1, [pc, #4c]	; 167e3c <LearningDataPtr(void)+0x74>
        167dec:	eb67e06c 	bl	1b5ffa4 <TController::$GetTypedDomain(unsigned long)>
        167df0:	e1a05000 	mov	r5, r0
        167df4:	e1a01004 	mov	r1, r4
        167df8:	e3a03000 	mov	r3, #0	; 0x0
        167dfc:	e3a02000 	mov	r2, #0	; 0x0
        167e00:	eb65dc44 	bl	1adef18 <$SetupXRD__FP7TDomainPPcUlT3>
        167e04:	e1a03004 	mov	r3, r4
        167e08:	e1a0200d 	mov	r2, sp
        167e0c:	e1a00005 	mov	r0, r5
        167e10:	e3a01040 	mov	r1, #64	; 0x40
        167e14:	e2811802 	add	r1, r1, #131072	; 0x20000
        167e18:	e595c000 	ldr	ip, [r5]
        167e1c:	e1a0e00f 	mov	lr, pc
        167e20:	e28cf02c 	add	pc, ip, #44	; 0x2c
        167e24:	e1a00004 	mov	r0, r4
        167e28:	ebfe7c8e 	bl	107068 <LIEndWeights(char **)>
        167e2c:	e59d0000 	ldr	r0, [sp]
        167e30:	eb65d830 	bl	1addef8 <$GetParaPtr(char **)>
        167e34:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        167e38:	0c10187c 	ldceq	8, cr1, [r0], -#496
        167e3c:	58525752 	ldmplda	r2, {r1, r4, r6, r8, r9, sl, ip, lr}^
    */
}

/**
 * Symbol: Lex_fcn9CB__FUlN31
 * Address: 00168a54
 */
void globals::Lex_fcn9CB() {
    /*
        168a54:	e1a0c00d 	mov	ip, sp
        168a58:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        168a5c:	e24cb004 	sub	fp, ip, #4	; 0x4
        168a60:	e1a05000 	mov	r5, r0
        168a64:	e1a04002 	mov	r4, r2
        168a68:	e1a06001 	mov	r6, r1
        168a6c:	e5d10000 	ldrb	r0, [r1]
        168a70:	e3300000 	teq	r0, #0	; 0x0
        168a74:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        168a78:	e1a02004 	mov	r2, r4
        168a7c:	e5d61000 	ldrb	r1, [r6]
        168a80:	e1a00005 	mov	r0, r5
        168a84:	e3a03000 	mov	r3, #0	; 0x0
        168a88:	eb66fa45 	bl	1b273a4 <$Enum_fcn9CB__FUlN31>
        168a8c:	e5f60001 	ldrb	r0, [r6, #1]!
        168a90:	e3300000 	teq	r0, #0	; 0x0
        168a94:	1afffff7 	bne	168a78 <Lex_fcn9CB__FUlN31+0x24>
        168a98:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: LockLexicalDB(unsigned long)
 * Address: 00168a9c
 */
LockLexicalDB(unsigned long) {
    /*
        168a9c:	e1b01000 	movs	r1, r0
        168aa0:	03a00000 	moveq	r0, #0	; 0x0
        168aa4:	01a0f00e 	moveq	pc, lr
        168aa8:	e1a0c00d 	mov	ip, sp
        168aac:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        168ab0:	e24cb004 	sub	fp, ip, #4	; 0x4
        168ab4:	e1a00001 	mov	r0, r1
        168ab8:	eb67f206 	bl	1b652d8 <TDictChain::$LockChain(void)>
        168abc:	e3a00001 	mov	r0, #1	; 0x1
        168ac0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: LockVocabularies(void *)
 * Address: 00168fe8
 */
LockVocabularies(void *) {
    /*
        168fe8:	e1a0c00d 	mov	ip, sp
        168fec:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        168ff0:	e24cb004 	sub	fp, ip, #4	; 0x4
        168ff4:	e1b04000 	movs	r4, r0
        168ff8:	03a00001 	moveq	r0, #1	; 0x1
        168ffc:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        169000:	e5940000 	ldr	r0, [r4]
        169004:	e3300000 	teq	r0, #0	; 0x0
        169008:	1b67f0b2 	blne	1b652d8 <TDictChain::$LockChain(void)>
        16900c:	e5b4003c 	ldr	r0, [r4, #60]!
        169010:	e3300000 	teq	r0, #0	; 0x0
        169014:	1b67f0af 	blne	1b652d8 <TDictChain::$LockChain(void)>
        169018:	e3a00000 	mov	r0, #0	; 0x0
        16901c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: LengthSansTabsAndCRs(unsigned short *, unsigned char *)
 * Address: 0017aefc
 */
LengthSansTabsAndCRs(unsigned short *, unsigned char *) {
    /*
        17aefc:	e92d4000 	stmdb	sp!, {lr}
        17af00:	e1a03000 	mov	r3, r0
        17af04:	e3a00000 	mov	r0, #0	; 0x0
        17af08:	e3a02000 	mov	r2, #0	; 0x0
        17af0c:	e5c12000 	strb	r2, [r1]
        17af10:	e593c000 	ldr	ip, [r3]
        17af14:	e1b0c82c 	movs	ip, ip, lsr #16
        17af18:	08bd8000 	ldmeqia	sp!, {pc}
        17af1c:	e3a0e001 	mov	lr, #1	; 0x1
        17af20:	e593c000 	ldr	ip, [r3]
        17af24:	e1a0c82c 	mov	ip, ip, lsr #16
        17af28:	e33c0009 	teq	ip, #9	; 0x9
        17af2c:	133c000d 	teqne	ip, #13	; 0xd
        17af30:	03a02001 	moveq	r2, #1	; 0x1
        17af34:	05c1e000 	streqb	lr, [r1]
        17af38:	0a000003 	beq	17af4c <LengthSansTabsAndCRs(unsigned short *, unsigned char *)+0x50>
        17af3c:	e3320000 	teq	r2, #0	; 0x0
        17af40:	12800001 	addne	r0, r0, #1	; 0x1
        17af44:	13a02000 	movne	r2, #0	; 0x0
        17af48:	e2800001 	add	r0, r0, #1	; 0x1
        17af4c:	e5b3c002 	ldr	ip, [r3, #2]!
        17af50:	e1b0c82c 	movs	ip, ip, lsr #16
        17af54:	1afffff1 	bne	17af20 <LengthSansTabsAndCRs(unsigned short *, unsigned char *)+0x24>
        17af58:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: LeftEdgeOfEmptyLine(TRect const &, long)
 * Address: 0017d390
 */
LeftEdgeOfEmptyLine(TRect const &, long) {
    /*
        17d390:	e2011003 	and	r1, r1, #3	; 0x3
        17d394:	e3310001 	teq	r1, #1	; 0x1
        17d398:	05900006 	ldreq	r0, [r0, #6]
        17d39c:	01a00840 	moveq	r0, r0, asr #16
        17d3a0:	01a0f00e 	moveq	pc, lr
        17d3a4:	e3310002 	teq	r1, #2	; 0x2
        17d3a8:	15900002 	ldrne	r0, [r0, #2]
        17d3ac:	11a00840 	movne	r0, r0, asr #16
        17d3b0:	11a0f00e 	movne	pc, lr
        17d3b4:	e5901006 	ldr	r1, [r0, #6]
        17d3b8:	e1a01821 	mov	r1, r1, lsr #16
        17d3bc:	e5900002 	ldr	r0, [r0, #2]
        17d3c0:	e1a00840 	mov	r0, r0, asr #16
        17d3c4:	e0411000 	sub	r1, r1, r0
        17d3c8:	e1a01801 	mov	r1, r1, lsl #16
        17d3cc:	e08008c1 	add	r0, r0, r1, asr #17
        17d3d0:	e1a00800 	mov	r0, r0, lsl #16
        17d3d4:	e1a00840 	mov	r0, r0, asr #16
        17d3d8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: LoadPlatformDriver(void)
 * Address: 0018b23c
 */
LoadPlatformDriver(void) {
    /*
        18b23c:	e1a0c00d 	mov	ip, sp
        18b240:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        18b244:	e24cb004 	sub	fp, ip, #4	; 0x4
        18b248:	e28f1f0d 	add	r1, pc, #52	; 0x34
        18b24c:	e28f0f11 	add	r0, pc, #68	; 0x44
        18b250:	eb69324d 	bl	1bd7b8c <$NewByName__FPCcT1>
        18b254:	e59f404c 	ldr	r4, [pc, #4c]	; 18b2a8 <LoadPlatformDriver(void)+0x6c>
        18b258:	e5840000 	str	r0, [r4]
        18b25c:	e3300000 	teq	r0, #0	; 0x0
        18b260:	1a000002 	bne	18b270 <LoadPlatformDriver(void)+0x34>
        18b264:	eb6a114f 	bl	1c0f7a8 <$ClassInfo__16TVoyagerPlatformSFv>
        18b268:	eb692e43 	bl	1bd6b7c <TClassInfo::$New( const(void))>
        18b26c:	e5840000 	str	r0, [r4]
        18b270:	e5940000 	ldr	r0, [r4]
        18b274:	e3300000 	teq	r0, #0	; 0x0
        18b278:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        18b27c:	1a07f2ef 	bne	387e40 <TPlatformDriver::Init(void)>
        18b280:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        18b284:	544d6169 	strplb	r6, [sp], -#361
        18b288:	6e506c61 	cdpvs	12, 5, cr6, cr0, cr1, {3}
        18b28c:	74666f72 	strvcbt	r6, [r6], -#3954
        18b290:	6d447269 	sfmvs	f7, 2, [r4, -#420]
        18b294:	76657200 	strvcbt	r7, [r5], -r0, lsl #4
        18b298:	54506c61 	ldrplb	r6, [r0], -#3169
        18b29c:	74666f72 	strvcbt	r6, [r6], -#3954
        18b2a0:	6d447269 	sfmvs	f7, 2, [r4, -#420]
        18b2a4:	76657200 	strvcbt	r7, [r5], -r0, lsl #4
        18b2a8:	0c101764 	ldceq	7, cr1, [r0], -#400
    */
}

/**
 * Symbol: LessOrEq__FlN31
 * Address: 0018ccf0
 */
void globals::LessOrEq() {
    /*
        18ccf0:	e2422001 	sub	r2, r2, #1	; 0x1
        18ccf4:	e1520000 	cmp	r2, r0
        18ccf8:	ca000002 	bgt	18cd08 <LessOrEq__FlN31+0x18>
        18ccfc:	1a000003 	bne	18cd10 <LessOrEq__FlN31+0x20>
        18cd00:	e1510003 	cmp	r1, r3
        18cd04:	ca000001 	bgt	18cd10 <LessOrEq__FlN31+0x20>
        18cd08:	e3a00001 	mov	r0, #1	; 0x1
        18cd0c:	ea000000 	b	18cd14 <LessOrEq__FlN31+0x24>
        18cd10:	e3a00000 	mov	r0, #0	; 0x0
        18cd14:	e20000ff 	and	r0, r0, #255	; 0xff
        18cd18:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: LocalToGlobalId(unsigned long)
 * Address: 00191e80
 */
LocalToGlobalId(unsigned long) {
    /*
        191e80:	e1a0c00d 	mov	ip, sp
        191e84:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        191e88:	e24cb004 	sub	fp, ip, #4	; 0x4
        191e8c:	e1a04000 	mov	r4, r0
        191e90:	e59f0050 	ldr	r0, [pc, #50]	; 191ee8 <LocalToGlobalId(unsigned long)+0x68>
        191e94:	e3340001 	teq	r4, #1	; 0x1
        191e98:	0a000018 	beq	191f00 <LocalToGlobalId(unsigned long)+0x80>
        191e9c:	e3340002 	teq	r4, #2	; 0x2
        191ea0:	0a000012 	beq	191ef0 <LocalToGlobalId(unsigned long)+0x70>
        191ea4:	e3340003 	teq	r4, #3	; 0x3
        191ea8:	1a000017 	bne	191f0c <LocalToGlobalId(unsigned long)+0x8c>
        191eac:	e59f1038 	ldr	r1, [pc, #38]	; 191eec <LocalToGlobalId(unsigned long)+0x6c>
        191eb0:	e5912000 	ldr	r2, [r1]
        191eb4:	e5900000 	ldr	r0, [r0]
        191eb8:	e5b010d8 	ldr	r1, [r0, #216]!
        191ebc:	e201300f 	and	r3, r1, #15	; 0xf
        191ec0:	e3a00000 	mov	r0, #0	; 0x0
        191ec4:	e333000a 	teq	r3, #10	; 0xa
        191ec8:	11a03000 	movne	r3, r0
        191ecc:	03a03001 	moveq	r3, #1	; 0x1
        191ed0:	e3330000 	teq	r3, #0	; 0x0
        191ed4:	11a00002 	movne	r0, r2
        191ed8:	1b06200d 	blne	319f14 <TObjectTable::Get(unsigned long)>
        191edc:	e3300000 	teq	r0, #0	; 0x0
        191ee0:	15b0401c 	ldrne	r4, [r0, #28]!
        191ee4:	ea000008 	b	191f0c <LocalToGlobalId(unsigned long)+0x8c>
        191ee8:	0c100ff8 	ldceq	15, cr0, [r0], -#992
        191eec:	0c100fc8 	ldceq	15, cr0, [r0], -#800
        191ef0:	e5900000 	ldr	r0, [r0]
        191ef4:	e3300000 	teq	r0, #0	; 0x0
        191ef8:	15b040f0 	ldrne	r4, [r0, #240]!
        191efc:	ea000002 	b	191f0c <LocalToGlobalId(unsigned long)+0x8c>
        191f00:	e5900000 	ldr	r0, [r0]
        191f04:	e3300000 	teq	r0, #0	; 0x0
        191f08:	15b040f4 	ldrne	r4, [r0, #244]!
        191f0c:	e1a00004 	mov	r0, r4
        191f10:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: LastWordSame(RefVar const &)
 * Address: 001aae08
 */
LastWordSame(RefVar const &) {
    /*
        1aae08:	e1a0c00d 	mov	ip, sp
        1aae0c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1aae10:	e24cb004 	sub	fp, ip, #4	; 0x4
        1aae14:	e1a04000 	mov	r4, r0
        1aae18:	e24dd008 	sub	sp, sp, #8	; 0x8
        1aae1c:	e3a06000 	mov	r6, #0	; 0x0
        1aae20:	e3a00024 	mov	r0, #36	; 0x24
        1aae24:	eb641a9e 	bl	1ab18a4 <$FindDictionaryFrame(unsigned long)>
        1aae28:	eb685cc7 	bl	1bc214c <$AllocateRefHandle(long)>
        1aae2c:	e58d0004 	str	r0, [sp, #4]
        1aae30:	e59f00a8 	ldr	r0, [pc, #a8]	; 1aaee0 <LastWordSame(RefVar const &)+0xd8>
        1aae34:	e5900000 	ldr	r0, [r0]
        1aae38:	e5901000 	ldr	r1, [r0]
        1aae3c:	e59d0004 	ldr	r0, [sp, #4]
        1aae40:	e5900000 	ldr	r0, [r0]
        1aae44:	eb686505 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        1aae48:	eb685cbf 	bl	1bc214c <$AllocateRefHandle(long)>
        1aae4c:	e3a07002 	mov	r7, #2	; 0x2
        1aae50:	e58d0000 	str	r0, [sp]
        1aae54:	e1a00007 	mov	r0, r7
        1aae58:	eb685cbb 	bl	1bc214c <$AllocateRefHandle(long)>
        1aae5c:	e1a05000 	mov	r5, r0
        1aae60:	e59d0000 	ldr	r0, [sp]
        1aae64:	e5900000 	ldr	r0, [r0]
        1aae68:	e3300002 	teq	r0, #2	; 0x2
        1aae6c:	0a00000b 	beq	1aaea0 <LastWordSame(RefVar const &)+0x98>
        1aae70:	e24dd004 	sub	sp, sp, #4	; 0x4
        1aae74:	e1a00007 	mov	r0, r7
        1aae78:	eb685cb3 	bl	1bc214c <$AllocateRefHandle(long)>
        1aae7c:	e58d0000 	str	r0, [sp]
        1aae80:	e1a0000d 	mov	r0, sp
        1aae84:	e1a02004 	mov	r2, r4
        1aae88:	e28d1004 	add	r1, sp, #4	; 0x4
        1aae8c:	eb691a9a 	bl	1bf18fc <$FStrEqual__FRC6RefVarN21>
        1aae90:	e5850000 	str	r0, [r5]
        1aae94:	e59d0000 	ldr	r0, [sp]
        1aae98:	eb6860c7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1aae9c:	e28dd004 	add	sp, sp, #4	; 0x4
        1aaea0:	e5950000 	ldr	r0, [r5]
        1aaea4:	e3300002 	teq	r0, #2	; 0x2
        1aaea8:	13a06001 	movne	r6, #1	; 0x1
        1aaeac:	1a000003 	bne	1aaec0 <LastWordSame(RefVar const &)+0xb8>
        1aaeb0:	e1a02004 	mov	r2, r4
        1aaeb4:	e59f1024 	ldr	r1, [pc, #24]	; 1aaee0 <LastWordSame(RefVar const &)+0xd8>
        1aaeb8:	e28d0004 	add	r0, sp, #4	; 0x4
        1aaebc:	eb686d29 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1aaec0:	e1a00005 	mov	r0, r5
        1aaec4:	eb6860bc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1aaec8:	e59d0000 	ldr	r0, [sp]
        1aaecc:	eb6860ba 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1aaed0:	e59d0004 	ldr	r0, [sp, #4]
        1aaed4:	eb6860b8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1aaed8:	e1a00006 	mov	r0, r6
        1aaedc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1aaee0:	00683440 	rsbeq	r3, r8, r0, asr #8
    */
}

/**
 * Symbol: lead_punct(low_type *)
 * Address: 001bcc78
 */
lead_punct(low_type *) {
    /*
        1bcc78:	e1a0c00d 	mov	ip, sp
        1bcc7c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1bcc80:	e24cb004 	sub	fp, ip, #4	; 0x4
        1bcc84:	e1a04000 	mov	r4, r0
        1bcc88:	e24dd018 	sub	sp, sp, #24	; 0x18
        1bcc8c:	e590100c 	ldr	r1, [r0, #12]
        1bcc90:	e5906004 	ldr	r6, [r0, #4]
        1bcc94:	e58d1000 	str	r1, [sp]
        1bcc98:	e5900040 	ldr	r0, [r0, #64]
        1bcc9c:	e5b0500c 	ldr	r5, [r0, #12]!
        1bcca0:	e595a004 	ldr	sl, [r5, #4]
        1bcca4:	e1a0a84a 	mov	sl, sl, asr #16
        1bcca8:	e5d50000 	ldrb	r0, [r5]
        1bccac:	e3300020 	teq	r0, #32	; 0x20
        1bccb0:	0a000003 	beq	1bccc4 <lead_punct(low_type *)+0x4c>
        1bccb4:	e595500c 	ldr	r5, [r5, #12]
        1bccb8:	e5d50000 	ldrb	r0, [r5]
        1bccbc:	e3300020 	teq	r0, #32	; 0x20
        1bccc0:	1afffffb 	bne	1bccb4 <lead_punct(low_type *)+0x3c>
        1bccc4:	e58d5014 	str	r5, [sp, #20]
        1bccc8:	e5959006 	ldr	r9, [r5, #6]
        1bcccc:	e1a09849 	mov	r9, r9, asr #16
        1bccd0:	e28d300c 	add	r3, sp, #12	; 0xc
        1bccd4:	e92d0008 	stmdb	sp!, {r3}
        1bccd8:	e1a03009 	mov	r3, r9
        1bccdc:	e1a0280a 	mov	r2, sl, lsl #16
        1bcce0:	e1a02842 	mov	r2, r2, asr #16
        1bcce4:	e1a00006 	mov	r0, r6
        1bcce8:	e59d1004 	ldr	r1, [sp, #4]
        1bccec:	eb658ccc 	bl	1b20024 <$GetTraceBox__FPsT1iT3P5_RECT>
        1bccf0:	e28dd004 	add	sp, sp, #4	; 0x4
        1bccf4:	e595500c 	ldr	r5, [r5, #12]
        1bccf8:	e5958004 	ldr	r8, [r5, #4]
        1bccfc:	e1a08848 	mov	r8, r8, asr #16
        1bcd00:	e5d50000 	ldrb	r0, [r5]
        1bcd04:	e3300020 	teq	r0, #32	; 0x20
        1bcd08:	0a000003 	beq	1bcd1c <lead_punct(low_type *)+0xa4>
        1bcd0c:	e595500c 	ldr	r5, [r5, #12]
        1bcd10:	e5d50000 	ldrb	r0, [r5]
        1bcd14:	e3300020 	teq	r0, #32	; 0x20
        1bcd18:	1afffffb 	bne	1bcd0c <lead_punct(low_type *)+0x94>
        1bcd1c:	e5957006 	ldr	r7, [r5, #6]
        1bcd20:	e1a07847 	mov	r7, r7, asr #16
        1bcd24:	e28d3004 	add	r3, sp, #4	; 0x4
        1bcd28:	e92d0008 	stmdb	sp!, {r3}
        1bcd2c:	e1a03007 	mov	r3, r7
        1bcd30:	e1a02808 	mov	r2, r8, lsl #16
        1bcd34:	e1a02842 	mov	r2, r2, asr #16
        1bcd38:	e1a00006 	mov	r0, r6
        1bcd3c:	e59d1004 	ldr	r1, [sp, #4]
        1bcd40:	eb658cb7 	bl	1b20024 <$GetTraceBox__FPsT1iT3P5_RECT>
        1bcd44:	e28dd004 	add	sp, sp, #4	; 0x4
        1bcd48:	e3a03005 	mov	r3, #5	; 0x5
        1bcd4c:	e92d0008 	stmdb	sp!, {r3}
        1bcd50:	e1a03009 	mov	r3, r9
        1bcd54:	e1a0200a 	mov	r2, sl
        1bcd58:	e1a00004 	mov	r0, r4
        1bcd5c:	e59d1018 	ldr	r1, [sp, #24]
        1bcd60:	eb659d34 	bl	1b24238 <$com__FP8low_typeP9SPEC_TYPEiN23>
        1bcd64:	e28dd004 	add	sp, sp, #4	; 0x4
        1bcd68:	e3300001 	teq	r0, #1	; 0x1
        1bcd6c:	1a00001c 	bne	1bcde4 <lead_punct(low_type *)+0x16c>
        1bcd70:	e5940076 	ldr	r0, [r4, #118]
        1bcd74:	e1a00840 	mov	r0, r0, asr #16
        1bcd78:	e1a000c0 	mov	r0, r0, asr #1
        1bcd7c:	e594107a 	ldr	r1, [r4, #122]
        1bcd80:	e08018c1 	add	r1, r0, r1, asr #17
        1bcd84:	e59d0012 	ldr	r0, [sp, #18]
        1bcd88:	e1510840 	cmp	r1, r0, asr #16
        1bcd8c:	da000014 	ble	1bcde4 <lead_punct(low_type *)+0x16c>
        1bcd90:	e3a03005 	mov	r3, #5	; 0x5
        1bcd94:	e92d0008 	stmdb	sp!, {r3}
        1bcd98:	e1a03007 	mov	r3, r7
        1bcd9c:	e1a02008 	mov	r2, r8
        1bcda0:	e1a01005 	mov	r1, r5
        1bcda4:	e1a00004 	mov	r0, r4
        1bcda8:	eb659d22 	bl	1b24238 <$com__FP8low_typeP9SPEC_TYPEiN23>
        1bcdac:	e28dd004 	add	sp, sp, #4	; 0x4
        1bcdb0:	e3300001 	teq	r0, #1	; 0x1
        1bcdb4:	1a000008 	bne	1bcddc <lead_punct(low_type *)+0x164>
        1bcdb8:	e5940076 	ldr	r0, [r4, #118]
        1bcdbc:	e1a00840 	mov	r0, r0, asr #16
        1bcdc0:	e1a000c0 	mov	r0, r0, asr #1
        1bcdc4:	e594107a 	ldr	r1, [r4, #122]
        1bcdc8:	e08018c1 	add	r1, r0, r1, asr #17
        1bcdcc:	e59d000a 	ldr	r0, [sp, #10]
        1bcdd0:	e1510840 	cmp	r1, r0, asr #16
        1bcdd4:	c3a00002 	movgt	r0, #2	; 0x2
        1bcdd8:	ca000002 	bgt	1bcde8 <lead_punct(low_type *)+0x170>
        1bcddc:	e3a00001 	mov	r0, #1	; 0x1
        1bcde0:	ea000000 	b	1bcde8 <lead_punct(low_type *)+0x170>
        1bcde4:	e3a00000 	mov	r0, #0	; 0x0
        1bcde8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc
 * Address: 001c24bc
 */
void globals::line_pos_mist() {
    /*
        1c24bc:	e1a0c00d 	mov	ip, sp
        1c24c0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1c24c4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1c24c8:	e24cb014 	sub	fp, ip, #20	; 0x14
        1c24cc:	e1a04000 	mov	r4, r0
        1c24d0:	e59b0030 	ldr	r0, [fp, #48]
        1c24d4:	e20000ff 	and	r0, r0, #255	; 0xff
        1c24d8:	e52d001c 	str	r0, [sp, -#28]!
        1c24dc:	e24dd080 	sub	sp, sp, #128	; 0x80
        1c24e0:	e3a00000 	mov	r0, #0	; 0x0
        1c24e4:	e58d0070 	str	r0, [sp, #112]
        1c24e8:	e58d006c 	str	r0, [sp, #108]
        1c24ec:	e58d0068 	str	r0, [sp, #104]
        1c24f0:	e58d0064 	str	r0, [sp, #100]
        1c24f4:	e58d005c 	str	r0, [sp, #92]
        1c24f8:	e58d0058 	str	r0, [sp, #88]
        1c24fc:	e58d0054 	str	r0, [sp, #84]
        1c2500:	e5940004 	ldr	r0, [r4, #4]
        1c2504:	e58d0050 	str	r0, [sp, #80]
        1c2508:	e5942014 	ldr	r2, [r4, #20]
        1c250c:	e594700c 	ldr	r7, [r4, #12]
        1c2510:	e58d204c 	str	r2, [sp, #76]
        1c2514:	e5940000 	ldr	r0, [r4]
        1c2518:	e59020e0 	ldr	r2, [r0, #224]
        1c251c:	e1a02842 	mov	r2, r2, asr #16
        1c2520:	e58d2048 	str	r2, [sp, #72]
        1c2524:	e59010e4 	ldr	r1, [r0, #228]
        1c2528:	e1a01841 	mov	r1, r1, asr #16
        1c252c:	e58d1044 	str	r1, [sp, #68]
        1c2530:	e59010e8 	ldr	r1, [r0, #232]
        1c2534:	e1a01841 	mov	r1, r1, asr #16
        1c2538:	e58d1040 	str	r1, [sp, #64]
        1c253c:	e59010e2 	ldr	r1, [r0, #226]
        1c2540:	e1a01841 	mov	r1, r1, asr #16
        1c2544:	e58d103c 	str	r1, [sp, #60]
        1c2548:	e59000e6 	ldr	r0, [r0, #230]
        1c254c:	e1a00840 	mov	r0, r0, asr #16
        1c2550:	e58d0038 	str	r0, [sp, #56]
        1c2554:	e3a00000 	mov	r0, #0	; 0x0
        1c2558:	e3a06000 	mov	r6, #0	; 0x0
        1c255c:	e58d0030 	str	r0, [sp, #48]
        1c2560:	e3a00004 	mov	r0, #4	; 0x4
        1c2564:	e3a01005 	mov	r1, #5	; 0x5
        1c2568:	e58d1014 	str	r1, [sp, #20]
        1c256c:	e3a01003 	mov	r1, #3	; 0x3
        1c2570:	e58d1010 	str	r1, [sp, #16]
        1c2574:	e3a01004 	mov	r1, #4	; 0x4
        1c2578:	e3a02008 	mov	r2, #8	; 0x8
        1c257c:	e58d100c 	str	r1, [sp, #12]
        1c2580:	e3a01002 	mov	r1, #2	; 0x2
        1c2584:	e98d0006 	stmib	sp, {r1, r2}
        1c2588:	e3a01000 	mov	r1, #0	; 0x0
        1c258c:	e5945040 	ldr	r5, [r4, #64]
        1c2590:	e3a02000 	mov	r2, #0	; 0x0
        1c2594:	e58d1000 	str	r1, [sp]
        1c2598:	e58d2020 	str	r2, [sp, #32]
        1c259c:	e594e03c 	ldr	lr, [r4, #60]
        1c25a0:	e1a0e84e 	mov	lr, lr, asr #16
        1c25a4:	e35e0000 	cmp	lr, #0	; 0x0
        1c25a8:	da000013 	ble	1c25fc <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x140>
        1c25ac:	e594c038 	ldr	ip, [r4, #56]
        1c25b0:	e79c3081 	ldr	r3, [ip, r1, lsl #1]
        1c25b4:	e1a03843 	mov	r3, r3, asr #16
        1c25b8:	e59b202c 	ldr	r2, [fp, #44]
        1c25bc:	e7922081 	ldr	r2, [r2, r1, lsl #1]
        1c25c0:	e1a02842 	mov	r2, r2, asr #16
        1c25c4:	e0422003 	sub	r2, r2, r3
        1c25c8:	e59d8020 	ldr	r8, [sp, #32]
        1c25cc:	e1520008 	cmp	r2, r8
        1c25d0:	c58d2020 	strgt	r2, [sp, #32]
        1c25d4:	e59b2028 	ldr	r2, [fp, #40]
        1c25d8:	e7922081 	ldr	r2, [r2, r1, lsl #1]
        1c25dc:	e1a02842 	mov	r2, r2, asr #16
        1c25e0:	e0432002 	sub	r2, r3, r2
        1c25e4:	e59d8020 	ldr	r8, [sp, #32]
        1c25e8:	e1520008 	cmp	r2, r8
        1c25ec:	c58d2020 	strgt	r2, [sp, #32]
        1c25f0:	e2811001 	add	r1, r1, #1	; 0x1
        1c25f4:	e15e0001 	cmp	lr, r1
        1c25f8:	caffffec 	bgt	1c25b0 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xf4>
        1c25fc:	e59d2008 	ldr	r2, [sp, #8]
        1c2600:	e59b3010 	ldr	r3, [fp, #16]
        1c2604:	e0010293 	mul	r1, r3, r2
        1c2608:	e59d2020 	ldr	r2, [sp, #32]
        1c260c:	e1510002 	cmp	r1, r2
        1c2610:	d2866005 	addle	r6, r6, #5	; 0x5
        1c2614:	e3350000 	teq	r5, #0	; 0x0
        1c2618:	0a000285 	beq	1c3034 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xb78>
        1c261c:	e59b1010 	ldr	r1, [fp, #16]
        1c2620:	e0813101 	add	r3, r1, r1, lsl #2
        1c2624:	e2811002 	add	r1, r1, #2	; 0x2
        1c2628:	e58d1094 	str	r1, [sp, #148]
        1c262c:	e58d3098 	str	r3, [sp, #152]
        1c2630:	e59b100c 	ldr	r1, [fp, #12]
        1c2634:	e0000091 	mul	r0, r1, r0
        1c2638:	e58d0090 	str	r0, [sp, #144]
        1c263c:	e59b0008 	ldr	r0, [fp, #8]
        1c2640:	e0411000 	sub	r1, r1, r0
        1c2644:	e2811002 	add	r1, r1, #2	; 0x2
        1c2648:	e58d108c 	str	r1, [sp, #140]
        1c264c:	e59d1010 	ldr	r1, [sp, #16]
        1c2650:	e0010190 	mul	r1, r0, r1
        1c2654:	e58d1088 	str	r1, [sp, #136]
        1c2658:	e5d50000 	ldrb	r0, [r5]
        1c265c:	e3300010 	teq	r0, #16	; 0x10
        1c2660:	1a000012 	bne	1c26b0 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x1f4>
        1c2664:	e59d0030 	ldr	r0, [sp, #48]
        1c2668:	e2800001 	add	r0, r0, #1	; 0x1
        1c266c:	e58d0030 	str	r0, [sp, #48]
        1c2670:	e5950004 	ldr	r0, [r5, #4]
        1c2674:	e1a00840 	mov	r0, r0, asr #16
        1c2678:	e3a09000 	mov	r9, #0	; 0x0
        1c267c:	e3a0a902 	mov	sl, #32768	; 0x8000
        1c2680:	e24aa001 	sub	sl, sl, #1	; 0x1
        1c2684:	e3a01000 	mov	r1, #0	; 0x0
        1c2688:	e58d0034 	str	r0, [sp, #52]
        1c268c:	e58d1060 	str	r1, [sp, #96]
        1c2690:	e58d9074 	str	r9, [sp, #116]
        1c2694:	e59d005c 	ldr	r0, [sp, #92]
        1c2698:	e2800001 	add	r0, r0, #1	; 0x1
        1c269c:	e58d005c 	str	r0, [sp, #92]
        1c26a0:	e3a00000 	mov	r0, #0	; 0x0
        1c26a4:	e58d007c 	str	r0, [sp, #124]
        1c26a8:	e58d0078 	str	r0, [sp, #120]
        1c26ac:	ea00025d 	b	1c3028 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xb6c>
        1c26b0:	e3300001 	teq	r0, #1	; 0x1
        1c26b4:	1a0000e2 	bne	1c2a44 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x588>
        1c26b8:	e59d0058 	ldr	r0, [sp, #88]
        1c26bc:	e2800001 	add	r0, r0, #1	; 0x1
        1c26c0:	e58d0058 	str	r0, [sp, #88]
        1c26c4:	e5950008 	ldr	r0, [r5, #8]
        1c26c8:	e1a00840 	mov	r0, r0, asr #16
        1c26cc:	e7978080 	ldr	r8, [r7, r0, lsl #1]
        1c26d0:	e1a08848 	mov	r8, r8, asr #16
        1c26d4:	e59d204c 	ldr	r2, [sp, #76]
        1c26d8:	e7920080 	ldr	r0, [r2, r0, lsl #1]
        1c26dc:	e1a00840 	mov	r0, r0, asr #16
        1c26e0:	e58d002c 	str	r0, [sp, #44]
        1c26e4:	e5d51002 	ldrb	r1, [r5, #2]
        1c26e8:	e3310001 	teq	r1, #1	; 0x1
        1c26ec:	13310005 	teqne	r1, #5	; 0x5
        1c26f0:	1a000001 	bne	1c26fc <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x240>
        1c26f4:	e15a0008 	cmp	sl, r8
        1c26f8:	a1a0a008 	movge	sl, r8
        1c26fc:	e5d50001 	ldrb	r0, [r5, #1]
        1c2700:	e330006e 	teq	r0, #110	; 0x6e
        1c2704:	03a00064 	moveq	r0, #100	; 0x64
        1c2708:	05c50001 	streqb	r0, [r5, #1]
        1c270c:	0a000016 	beq	1c276c <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x2b0>
        1c2710:	e350006f 	cmp	r0, #111	; 0x6f
        1c2714:	1a000007 	bne	1c2738 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x27c>
        1c2718:	e59b2028 	ldr	r2, [fp, #40]
        1c271c:	e59d002c 	ldr	r0, [sp, #44]
        1c2720:	e7920080 	ldr	r0, [r2, r0, lsl #1]
        1c2724:	e1a00840 	mov	r0, r0, asr #16
        1c2728:	e1500008 	cmp	r0, r8
        1c272c:	b3a00067 	movlt	r0, #103	; 0x67
        1c2730:	ba000008 	blt	1c2758 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x29c>
        1c2734:	ea000000 	b	1c273c <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x280>
        1c2738:	1a000008 	bne	1c2760 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x2a4>
        1c273c:	e59b2028 	ldr	r2, [fp, #40]
        1c2740:	e59d002c 	ldr	r0, [sp, #44]
        1c2744:	e7920080 	ldr	r0, [r2, r0, lsl #1]
        1c2748:	e1a00840 	mov	r0, r0, asr #16
        1c274c:	e1500008 	cmp	r0, r8
        1c2750:	da000005 	ble	1c276c <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x2b0>
        1c2754:	e3a00066 	mov	r0, #102	; 0x66
        1c2758:	e5c50001 	strb	r0, [r5, #1]
        1c275c:	ea000004 	b	1c2774 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x2b8>
        1c2760:	e3300066 	teq	r0, #102	; 0x66
        1c2764:	13300067 	teqne	r0, #103	; 0x67
        1c2768:	0a000001 	beq	1c2774 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x2b8>
        1c276c:	e3310003 	teq	r1, #3	; 0x3
        1c2770:	1a00000a 	bne	1c27a0 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x2e4>
        1c2774:	e59b2028 	ldr	r2, [fp, #40]
        1c2778:	e59d002c 	ldr	r0, [sp, #44]
        1c277c:	e7920080 	ldr	r0, [r2, r0, lsl #1]
        1c2780:	e1a00840 	mov	r0, r0, asr #16
        1c2784:	e1500008 	cmp	r0, r8
        1c2788:	c59d0064 	ldrgt	r0, [sp, #100]
        1c278c:	c2800001 	addgt	r0, r0, #1	; 0x1
        1c2790:	c58d0064 	strgt	r0, [sp, #100]
        1c2794:	b59d006c 	ldrlt	r0, [sp, #108]
        1c2798:	b2800001 	addlt	r0, r0, #1	; 0x1
        1c279c:	b58d006c 	strlt	r0, [sp, #108]
        1c27a0:	e5d50001 	ldrb	r0, [r5, #1]
        1c27a4:	e3300067 	teq	r0, #103	; 0x67
        1c27a8:	1a00001b 	bne	1c281c <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x360>
        1c27ac:	e59b102c 	ldr	r1, [fp, #44]
        1c27b0:	e59d002c 	ldr	r0, [sp, #44]
        1c27b4:	e7910080 	ldr	r0, [r1, r0, lsl #1]
        1c27b8:	e1a00840 	mov	r0, r0, asr #16
        1c27bc:	e1500008 	cmp	r0, r8
        1c27c0:	da000010 	ble	1c2808 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x34c>
        1c27c4:	e59d007c 	ldr	r0, [sp, #124]
        1c27c8:	e3500000 	cmp	r0, #0	; 0x0
        1c27cc:	da000009 	ble	1c27f8 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x33c>
        1c27d0:	e1a01005 	mov	r1, r5
        1c27d4:	e1a00004 	mov	r0, r4
        1c27d8:	e3a03002 	mov	r3, #2	; 0x2
        1c27dc:	e3a02001 	mov	r2, #1	; 0x1
        1c27e0:	eb6586a4 	bl	1b24278 <$extrs_open(low_type *, SPEC_TYPE *, unsigned char, int)>
        1c27e4:	e3300001 	teq	r0, #1	; 0x1
        1c27e8:	03a0206e 	moveq	r2, #110	; 0x6e
        1c27ec:	05c52001 	streqb	r2, [r5, #1]
        1c27f0:	05950010 	ldreq	r0, [r5, #16]
        1c27f4:	0a000026 	beq	1c2894 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x3d8>
        1c27f8:	e59d007c 	ldr	r0, [sp, #124]
        1c27fc:	e2800001 	add	r0, r0, #1	; 0x1
        1c2800:	e20000ff 	and	r0, r0, #255	; 0xff
        1c2804:	e58d007c 	str	r0, [sp, #124]
        1c2808:	e59d0074 	ldr	r0, [sp, #116]
        1c280c:	e3500000 	cmp	r0, #0	; 0x0
        1c2810:	a59d0074 	ldrge	r0, [sp, #116]
        1c2814:	a2800001 	addge	r0, r0, #1	; 0x1
        1c2818:	a58d0074 	strge	r0, [sp, #116]
        1c281c:	e5d50001 	ldrb	r0, [r5, #1]
        1c2820:	e3300064 	teq	r0, #100	; 0x64
        1c2824:	13300066 	teqne	r0, #102	; 0x66
        1c2828:	1330006e 	teqne	r0, #110	; 0x6e
        1c282c:	0a000004 	beq	1c2844 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x388>
        1c2830:	e3300000 	teq	r0, #0	; 0x0
        1c2834:	1a000006 	bne	1c2854 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x398>
        1c2838:	e59b1008 	ldr	r1, [fp, #8]
        1c283c:	e1580001 	cmp	r8, r1
        1c2840:	ca000003 	bgt	1c2854 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x398>
        1c2844:	e3a01000 	mov	r1, #0	; 0x0
        1c2848:	e58d107c 	str	r1, [sp, #124]
        1c284c:	e3e01000 	mvn	r1, #0	; 0x0
        1c2850:	e58d1074 	str	r1, [sp, #116]
        1c2854:	e5941000 	ldr	r1, [r4]
        1c2858:	e5911090 	ldr	r1, [r1, #144]
        1c285c:	e1a01821 	mov	r1, r1, lsr #16
        1c2860:	e3110b02 	tst	r1, #2048	; 0x800
        1c2864:	0a00002d 	beq	1c2920 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x464>
        1c2868:	e3300066 	teq	r0, #102	; 0x66
        1c286c:	1a00002b 	bne	1c2920 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x464>
        1c2870:	e59d0030 	ldr	r0, [sp, #48]
        1c2874:	e3500002 	cmp	r0, #2	; 0x2
        1c2878:	da000071 	ble	1c2a44 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x588>
        1c287c:	e1a00005 	mov	r0, r5
        1c2880:	e5d51000 	ldrb	r1, [r5]
        1c2884:	e3310020 	teq	r1, #32	; 0x20
        1c2888:	0a00000f 	beq	1c28cc <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x410>
        1c288c:	ea00000a 	b	1c28bc <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x400>
        1c2890:	e5900010 	ldr	r0, [r0, #16]
        1c2894:	e5d01000 	ldrb	r1, [r0]
        1c2898:	e3310010 	teq	r1, #16	; 0x10
        1c289c:	0a000004 	beq	1c28b4 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x3f8>
        1c28a0:	e3310001 	teq	r1, #1	; 0x1
        1c28a4:	1afffff9 	bne	1c2890 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x3d4>
        1c28a8:	e5d01001 	ldrb	r1, [r0, #1]
        1c28ac:	e3310000 	teq	r1, #0	; 0x0
        1c28b0:	0afffff6 	beq	1c2890 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x3d4>
        1c28b4:	e5c02001 	strb	r2, [r0, #1]
        1c28b8:	ea00011b 	b	1c2d2c <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x870>
        1c28bc:	e590000c 	ldr	r0, [r0, #12]
        1c28c0:	e5d01000 	ldrb	r1, [r0]
        1c28c4:	e3310020 	teq	r1, #32	; 0x20
        1c28c8:	1afffffb 	bne	1c28bc <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x400>
        1c28cc:	e5900006 	ldr	r0, [r0, #6]
        1c28d0:	e1a00840 	mov	r0, r0, asr #16
        1c28d4:	e28d3018 	add	r3, sp, #24	; 0x18
        1c28d8:	e92d0008 	stmdb	sp!, {r3}
        1c28dc:	e1a03000 	mov	r3, r0
        1c28e0:	e59d0038 	ldr	r0, [sp, #56]
        1c28e4:	e1a02800 	mov	r2, r0, lsl #16
        1c28e8:	e1a02842 	mov	r2, r2, asr #16
        1c28ec:	e1a01007 	mov	r1, r7
        1c28f0:	e59d0054 	ldr	r0, [sp, #84]
        1c28f4:	eb6575ca 	bl	1b20024 <$GetTraceBox__FPsT1iT3P5_RECT>
        1c28f8:	e28dd004 	add	sp, sp, #4	; 0x4
        1c28fc:	e59d101c 	ldr	r1, [sp, #28]
        1c2900:	e5940078 	ldr	r0, [r4, #120]
        1c2904:	e59d2048 	ldr	r2, [sp, #72]
        1c2908:	e0620840 	rsb	r0, r2, r0, asr #16
        1c290c:	e1500841 	cmp	r0, r1, asr #16
        1c2910:	c2866001 	addgt	r6, r6, #1	; 0x1
        1c2914:	c3a0206e 	movgt	r2, #110	; 0x6e
        1c2918:	c5c52001 	strgtb	r2, [r5, #1]
        1c291c:	ca000003 	bgt	1c2930 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x474>
        1c2920:	e5d50001 	ldrb	r0, [r5, #1]
        1c2924:	e3300064 	teq	r0, #100	; 0x64
        1c2928:	1330006e 	teqne	r0, #110	; 0x6e
        1c292c:	1a000044 	bne	1c2a44 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x588>
        1c2930:	e59b102c 	ldr	r1, [fp, #44]
        1c2934:	e59d002c 	ldr	r0, [sp, #44]
        1c2938:	e7910080 	ldr	r0, [r1, r0, lsl #1]
        1c293c:	e1a00840 	mov	r0, r0, asr #16
        1c2940:	e1500008 	cmp	r0, r8
        1c2944:	aa000003 	bge	1c2958 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x49c>
        1c2948:	e3a0006f 	mov	r0, #111	; 0x6f
        1c294c:	e5c50001 	strb	r0, [r5, #1]
        1c2950:	e2866004 	add	r6, r6, #4	; 0x4
        1c2954:	ea0001b3 	b	1c3028 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xb6c>
        1c2958:	e0400008 	sub	r0, r0, r8
        1c295c:	e59d2008 	ldr	r2, [sp, #8]
        1c2960:	e0010092 	mul	r1, r2, r0
        1c2964:	e59d2020 	ldr	r2, [sp, #32]
        1c2968:	e1510002 	cmp	r1, r2
        1c296c:	ba000007 	blt	1c2990 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x4d4>
        1c2970:	e59d1004 	ldr	r1, [sp, #4]
        1c2974:	e0000091 	mul	r0, r1, r0
        1c2978:	e59b3010 	ldr	r3, [fp, #16]
        1c297c:	e1500003 	cmp	r0, r3
        1c2980:	aa00002f 	bge	1c2a44 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x588>
        1c2984:	e5d50002 	ldrb	r0, [r5, #2]
        1c2988:	e3300005 	teq	r0, #5	; 0x5
        1c298c:	0a00002c 	beq	1c2a44 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x588>
        1c2990:	e3a03000 	mov	r3, #0	; 0x0
        1c2994:	e3a00000 	mov	r0, #0	; 0x0
        1c2998:	e5951010 	ldr	r1, [r5, #16]
        1c299c:	e3310000 	teq	r1, #0	; 0x0
        1c29a0:	0a00000c 	beq	1c29d8 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x51c>
        1c29a4:	e5d12000 	ldrb	r2, [r1]
        1c29a8:	e3320001 	teq	r2, #1	; 0x1
        1c29ac:	05d12001 	ldreqb	r2, [r1, #1]
        1c29b0:	03320064 	teqeq	r2, #100	; 0x64
        1c29b4:	05911008 	ldreq	r1, [r1, #8]
        1c29b8:	01a01841 	moveq	r1, r1, asr #16
        1c29bc:	07971081 	ldreq	r1, [r7, r1, lsl #1]
        1c29c0:	01a01841 	moveq	r1, r1, asr #16
        1c29c4:	00483001 	subeq	r3, r8, r1
        1c29c8:	0a000002 	beq	1c29d8 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x51c>
        1c29cc:	e5911010 	ldr	r1, [r1, #16]
        1c29d0:	e3310000 	teq	r1, #0	; 0x0
        1c29d4:	1afffff2 	bne	1c29a4 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x4e8>
        1c29d8:	e595100c 	ldr	r1, [r5, #12]
        1c29dc:	e1b02001 	movs	r2, r1
        1c29e0:	0a00000c 	beq	1c2a18 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x55c>
        1c29e4:	e5d2c000 	ldrb	ip, [r2]
        1c29e8:	e33c0001 	teq	ip, #1	; 0x1
        1c29ec:	05d2c001 	ldreqb	ip, [r2, #1]
        1c29f0:	033c0064 	teqeq	ip, #100	; 0x64
        1c29f4:	05920008 	ldreq	r0, [r2, #8]
        1c29f8:	01a00840 	moveq	r0, r0, asr #16
        1c29fc:	07970080 	ldreq	r0, [r7, r0, lsl #1]
        1c2a00:	01a00840 	moveq	r0, r0, asr #16
        1c2a04:	00480000 	subeq	r0, r8, r0
        1c2a08:	0a000002 	beq	1c2a18 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x55c>
        1c2a0c:	e592200c 	ldr	r2, [r2, #12]
        1c2a10:	e3320000 	teq	r2, #0	; 0x0
        1c2a14:	1afffff2 	bne	1c29e4 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x528>
        1c2a18:	e0832183 	add	r2, r3, r3, lsl #3
        1c2a1c:	e0822203 	add	r2, r2, r3, lsl #4
        1c2a20:	e1a02102 	mov	r2, r2, lsl #2
        1c2a24:	e59d3098 	ldr	r3, [sp, #152]
        1c2a28:	e1520083 	cmp	r2, r3, lsl #1
        1c2a2c:	b080c180 	addlt	ip, r0, r0, lsl #3
        1c2a30:	b08c0200 	addlt	r0, ip, r0, lsl #4
        1c2a34:	b1a00100 	movlt	r0, r0, lsl #2
        1c2a38:	b59d3098 	ldrlt	r3, [sp, #152]
        1c2a3c:	b1500083 	cmplt	r0, r3, lsl #1
        1c2a40:	aa0000a6 	bge	1c2ce0 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x824>
        1c2a44:	e5d50000 	ldrb	r0, [r5]
        1c2a48:	e3300003 	teq	r0, #3	; 0x3
        1c2a4c:	1a0000b8 	bne	1c2d34 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x878>
        1c2a50:	e59d0054 	ldr	r0, [sp, #84]
        1c2a54:	e2800001 	add	r0, r0, #1	; 0x1
        1c2a58:	e58d0054 	str	r0, [sp, #84]
        1c2a5c:	e5950008 	ldr	r0, [r5, #8]
        1c2a60:	e1a00840 	mov	r0, r0, asr #16
        1c2a64:	e7978080 	ldr	r8, [r7, r0, lsl #1]
        1c2a68:	e1a08848 	mov	r8, r8, asr #16
        1c2a6c:	e59d204c 	ldr	r2, [sp, #76]
        1c2a70:	e7920080 	ldr	r0, [r2, r0, lsl #1]
        1c2a74:	e1a00840 	mov	r0, r0, asr #16
        1c2a78:	e58d002c 	str	r0, [sp, #44]
        1c2a7c:	e5d50002 	ldrb	r0, [r5, #2]
        1c2a80:	e3300001 	teq	r0, #1	; 0x1
        1c2a84:	1a000004 	bne	1c2a9c <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x5e0>
        1c2a88:	e59d1060 	ldr	r1, [sp, #96]
        1c2a8c:	e1510008 	cmp	r1, r8
        1c2a90:	d1a01008 	movle	r1, r8
        1c2a94:	c59d1060 	ldrgt	r1, [sp, #96]
        1c2a98:	e58d1060 	str	r1, [sp, #96]
        1c2a9c:	e5d50001 	ldrb	r0, [r5, #1]
        1c2aa0:	e330006e 	teq	r0, #110	; 0x6e
        1c2aa4:	03a00064 	moveq	r0, #100	; 0x64
        1c2aa8:	05c50001 	streqb	r0, [r5, #1]
        1c2aac:	0a000047 	beq	1c2bd0 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x714>
        1c2ab0:	e350006f 	cmp	r0, #111	; 0x6f
        1c2ab4:	1a000007 	bne	1c2ad8 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x61c>
        1c2ab8:	e59b102c 	ldr	r1, [fp, #44]
        1c2abc:	e59d002c 	ldr	r0, [sp, #44]
        1c2ac0:	e7910080 	ldr	r0, [r1, r0, lsl #1]
        1c2ac4:	e1a00840 	mov	r0, r0, asr #16
        1c2ac8:	e1500008 	cmp	r0, r8
        1c2acc:	c3a00067 	movgt	r0, #103	; 0x67
        1c2ad0:	ca000008 	bgt	1c2af8 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x63c>
        1c2ad4:	ea000000 	b	1c2adc <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x620>
        1c2ad8:	1a000008 	bne	1c2b00 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x644>
        1c2adc:	e59b102c 	ldr	r1, [fp, #44]
        1c2ae0:	e59d002c 	ldr	r0, [sp, #44]
        1c2ae4:	e7910080 	ldr	r0, [r1, r0, lsl #1]
        1c2ae8:	e1a00840 	mov	r0, r0, asr #16
        1c2aec:	e1500008 	cmp	r0, r8
        1c2af0:	aa00014c 	bge	1c3028 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xb6c>
        1c2af4:	e3a00065 	mov	r0, #101	; 0x65
        1c2af8:	e5c50001 	strb	r0, [r5, #1]
        1c2afc:	ea000002 	b	1c2b0c <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x650>
        1c2b00:	e3300065 	teq	r0, #101	; 0x65
        1c2b04:	13300067 	teqne	r0, #103	; 0x67
        1c2b08:	1a00000a 	bne	1c2b38 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x67c>
        1c2b0c:	e59b102c 	ldr	r1, [fp, #44]
        1c2b10:	e59d002c 	ldr	r0, [sp, #44]
        1c2b14:	e7910080 	ldr	r0, [r1, r0, lsl #1]
        1c2b18:	e1a00840 	mov	r0, r0, asr #16
        1c2b1c:	e1500008 	cmp	r0, r8
        1c2b20:	b59d0070 	ldrlt	r0, [sp, #112]
        1c2b24:	b2800001 	addlt	r0, r0, #1	; 0x1
        1c2b28:	b58d0070 	strlt	r0, [sp, #112]
        1c2b2c:	c59d0068 	ldrgt	r0, [sp, #104]
        1c2b30:	c2800001 	addgt	r0, r0, #1	; 0x1
        1c2b34:	c58d0068 	strgt	r0, [sp, #104]
        1c2b38:	e5d50001 	ldrb	r0, [r5, #1]
        1c2b3c:	e3300067 	teq	r0, #103	; 0x67
        1c2b40:	1a000018 	bne	1c2ba8 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x6ec>
        1c2b44:	e59b2028 	ldr	r2, [fp, #40]
        1c2b48:	e59d002c 	ldr	r0, [sp, #44]
        1c2b4c:	e7920080 	ldr	r0, [r2, r0, lsl #1]
        1c2b50:	e1a00840 	mov	r0, r0, asr #16
        1c2b54:	e1500008 	cmp	r0, r8
        1c2b58:	aa000010 	bge	1c2ba0 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x6e4>
        1c2b5c:	e59d0078 	ldr	r0, [sp, #120]
        1c2b60:	e3500001 	cmp	r0, #1	; 0x1
        1c2b64:	da000009 	ble	1c2b90 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x6d4>
        1c2b68:	e1a01005 	mov	r1, r5
        1c2b6c:	e1a00004 	mov	r0, r4
        1c2b70:	e3a03002 	mov	r3, #2	; 0x2
        1c2b74:	e3a02003 	mov	r2, #3	; 0x3
        1c2b78:	eb6585be 	bl	1b24278 <$extrs_open(low_type *, SPEC_TYPE *, unsigned char, int)>
        1c2b7c:	e3300001 	teq	r0, #1	; 0x1
        1c2b80:	03a0206e 	moveq	r2, #110	; 0x6e
        1c2b84:	05c52001 	streqb	r2, [r5, #1]
        1c2b88:	05950010 	ldreq	r0, [r5, #16]
        1c2b8c:	0a000059 	beq	1c2cf8 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x83c>
        1c2b90:	e59d0078 	ldr	r0, [sp, #120]
        1c2b94:	e2800001 	add	r0, r0, #1	; 0x1
        1c2b98:	e20000ff 	and	r0, r0, #255	; 0xff
        1c2b9c:	e58d0078 	str	r0, [sp, #120]
        1c2ba0:	e3590000 	cmp	r9, #0	; 0x0
        1c2ba4:	a2899001 	addge	r9, r9, #1	; 0x1
        1c2ba8:	e5d50001 	ldrb	r0, [r5, #1]
        1c2bac:	e3300064 	teq	r0, #100	; 0x64
        1c2bb0:	13300065 	teqne	r0, #101	; 0x65
        1c2bb4:	1330006e 	teqne	r0, #110	; 0x6e
        1c2bb8:	0a000004 	beq	1c2bd0 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x714>
        1c2bbc:	e3300000 	teq	r0, #0	; 0x0
        1c2bc0:	1a000005 	bne	1c2bdc <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x720>
        1c2bc4:	e59b100c 	ldr	r1, [fp, #12]
        1c2bc8:	e1580001 	cmp	r8, r1
        1c2bcc:	ba000058 	blt	1c2d34 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x878>
        1c2bd0:	e3a00000 	mov	r0, #0	; 0x0
        1c2bd4:	e3e09000 	mvn	r9, #0	; 0x0
        1c2bd8:	e58d0078 	str	r0, [sp, #120]
        1c2bdc:	e5d50001 	ldrb	r0, [r5, #1]
        1c2be0:	e3300064 	teq	r0, #100	; 0x64
        1c2be4:	1330006e 	teqne	r0, #110	; 0x6e
        1c2be8:	1a000051 	bne	1c2d34 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x878>
        1c2bec:	e59b2028 	ldr	r2, [fp, #40]
        1c2bf0:	e59d002c 	ldr	r0, [sp, #44]
        1c2bf4:	e7920080 	ldr	r0, [r2, r0, lsl #1]
        1c2bf8:	e1a00840 	mov	r0, r0, asr #16
        1c2bfc:	e1500008 	cmp	r0, r8
        1c2c00:	caffff50 	bgt	1c2948 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x48c>
        1c2c04:	e0480000 	sub	r0, r8, r0
        1c2c08:	e59d2008 	ldr	r2, [sp, #8]
        1c2c0c:	e0010092 	mul	r1, r2, r0
        1c2c10:	e59d2020 	ldr	r2, [sp, #32]
        1c2c14:	e1510002 	cmp	r1, r2
        1c2c18:	a59d1004 	ldrge	r1, [sp, #4]
        1c2c1c:	a0000091 	mulge	r0, r1, r0
        1c2c20:	a59b3010 	ldrge	r3, [fp, #16]
        1c2c24:	a1500003 	cmpge	r0, r3
        1c2c28:	aa000041 	bge	1c2d34 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x878>
        1c2c2c:	e3a03000 	mov	r3, #0	; 0x0
        1c2c30:	e3a00000 	mov	r0, #0	; 0x0
        1c2c34:	e5951010 	ldr	r1, [r5, #16]
        1c2c38:	e3310000 	teq	r1, #0	; 0x0
        1c2c3c:	0a00000c 	beq	1c2c74 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x7b8>
        1c2c40:	e5d12000 	ldrb	r2, [r1]
        1c2c44:	e3320003 	teq	r2, #3	; 0x3
        1c2c48:	05d12001 	ldreqb	r2, [r1, #1]
        1c2c4c:	03320064 	teqeq	r2, #100	; 0x64
        1c2c50:	05911008 	ldreq	r1, [r1, #8]
        1c2c54:	01a01841 	moveq	r1, r1, asr #16
        1c2c58:	07971081 	ldreq	r1, [r7, r1, lsl #1]
        1c2c5c:	01a01841 	moveq	r1, r1, asr #16
        1c2c60:	00413008 	subeq	r3, r1, r8
        1c2c64:	0a000002 	beq	1c2c74 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x7b8>
        1c2c68:	e5911010 	ldr	r1, [r1, #16]
        1c2c6c:	e3310000 	teq	r1, #0	; 0x0
        1c2c70:	1afffff2 	bne	1c2c40 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x784>
        1c2c74:	e595100c 	ldr	r1, [r5, #12]
        1c2c78:	e1b02001 	movs	r2, r1
        1c2c7c:	0a00000c 	beq	1c2cb4 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x7f8>
        1c2c80:	e5d2c000 	ldrb	ip, [r2]
        1c2c84:	e33c0003 	teq	ip, #3	; 0x3
        1c2c88:	05d2c001 	ldreqb	ip, [r2, #1]
        1c2c8c:	033c0064 	teqeq	ip, #100	; 0x64
        1c2c90:	05920008 	ldreq	r0, [r2, #8]
        1c2c94:	01a00840 	moveq	r0, r0, asr #16
        1c2c98:	07970080 	ldreq	r0, [r7, r0, lsl #1]
        1c2c9c:	01a00840 	moveq	r0, r0, asr #16
        1c2ca0:	00400008 	subeq	r0, r0, r8
        1c2ca4:	0a000002 	beq	1c2cb4 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x7f8>
        1c2ca8:	e592200c 	ldr	r2, [r2, #12]
        1c2cac:	e3320000 	teq	r2, #0	; 0x0
        1c2cb0:	1afffff2 	bne	1c2c80 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x7c4>
        1c2cb4:	e0832183 	add	r2, r3, r3, lsl #3
        1c2cb8:	e0822203 	add	r2, r2, r3, lsl #4
        1c2cbc:	e1a02102 	mov	r2, r2, lsl #2
        1c2cc0:	e59d3098 	ldr	r3, [sp, #152]
        1c2cc4:	e1520083 	cmp	r2, r3, lsl #1
        1c2cc8:	b080c180 	addlt	ip, r0, r0, lsl #3
        1c2ccc:	b08c0200 	addlt	r0, ip, r0, lsl #4
        1c2cd0:	b1a00100 	movlt	r0, r0, lsl #2
        1c2cd4:	b59d3098 	ldrlt	r3, [sp, #152]
        1c2cd8:	b1500083 	cmplt	r0, r3, lsl #1
        1c2cdc:	ba000014 	blt	1c2d34 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x878>
        1c2ce0:	e3a0006f 	mov	r0, #111	; 0x6f
        1c2ce4:	e5c50001 	strb	r0, [r5, #1]
        1c2ce8:	e2866001 	add	r6, r6, #1	; 0x1
        1c2cec:	e1a05001 	mov	r5, r1
        1c2cf0:	ea0000cd 	b	1c302c <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xb70>
        1c2cf4:	e5900010 	ldr	r0, [r0, #16]
        1c2cf8:	e5d01000 	ldrb	r1, [r0]
        1c2cfc:	e3310010 	teq	r1, #16	; 0x10
        1c2d00:	0a000004 	beq	1c2d18 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x85c>
        1c2d04:	e3310003 	teq	r1, #3	; 0x3
        1c2d08:	1afffff9 	bne	1c2cf4 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x838>
        1c2d0c:	e5d01001 	ldrb	r1, [r0, #1]
        1c2d10:	e3310000 	teq	r1, #0	; 0x0
        1c2d14:	0afffff6 	beq	1c2cf4 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x838>
        1c2d18:	e5c02001 	strb	r2, [r0, #1]
        1c2d1c:	e2866001 	add	r6, r6, #1	; 0x1
        1c2d20:	e59d0078 	ldr	r0, [sp, #120]
        1c2d24:	e3300002 	teq	r0, #2	; 0x2
        1c2d28:	1a0000be 	bne	1c3028 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xb6c>
        1c2d2c:	e2866001 	add	r6, r6, #1	; 0x1
        1c2d30:	ea0000bc 	b	1c3028 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xb6c>
        1c2d34:	e5d50000 	ldrb	r0, [r5]
        1c2d38:	e3300020 	teq	r0, #32	; 0x20
        1c2d3c:	1a0000b9 	bne	1c3028 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xb6c>
        1c2d40:	e5950010 	ldr	r0, [r5, #16]
        1c2d44:	e5d00000 	ldrb	r0, [r0]
        1c2d48:	e3300010 	teq	r0, #16	; 0x10
        1c2d4c:	0a0000b5 	beq	1c3028 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xb6c>
        1c2d50:	e59d0074 	ldr	r0, [sp, #116]
        1c2d54:	e3500000 	cmp	r0, #0	; 0x0
        1c2d58:	d3590000 	cmple	r9, #0	; 0x0
        1c2d5c:	da0000b1 	ble	1c3028 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xb6c>
        1c2d60:	e5958006 	ldr	r8, [r5, #6]
        1c2d64:	e1a08848 	mov	r8, r8, asr #16
        1c2d68:	e28d3018 	add	r3, sp, #24	; 0x18
        1c2d6c:	e92d0008 	stmdb	sp!, {r3}
        1c2d70:	e1a03008 	mov	r3, r8
        1c2d74:	e59d0038 	ldr	r0, [sp, #56]
        1c2d78:	e1a02800 	mov	r2, r0, lsl #16
        1c2d7c:	e1a02842 	mov	r2, r2, asr #16
        1c2d80:	e1a01007 	mov	r1, r7
        1c2d84:	e59d0054 	ldr	r0, [sp, #84]
        1c2d88:	eb6574a5 	bl	1b20024 <$GetTraceBox__FPsT1iT3P5_RECT>
        1c2d8c:	e28dd004 	add	sp, sp, #4	; 0x4
        1c2d90:	e59d101c 	ldr	r1, [sp, #28]
        1c2d94:	e5940078 	ldr	r0, [r4, #120]
        1c2d98:	e59d2048 	ldr	r2, [sp, #72]
        1c2d9c:	e0620840 	rsb	r0, r2, r0, asr #16
        1c2da0:	e1500841 	cmp	r0, r1, asr #16
        1c2da4:	aa00000d 	bge	1c2de0 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x924>
        1c2da8:	e59d101e 	ldr	r1, [sp, #30]
        1c2dac:	e1a01841 	mov	r1, r1, asr #16
        1c2db0:	e59d001a 	ldr	r0, [sp, #26]
        1c2db4:	e0410840 	sub	r0, r1, r0, asr #16
        1c2db8:	e59b3010 	ldr	r3, [fp, #16]
        1c2dbc:	e15000c3 	cmp	r0, r3, asr #1
        1c2dc0:	aa000006 	bge	1c2de0 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x924>
        1c2dc4:	e08010c0 	add	r1, r0, r0, asr #1
        1c2dc8:	e59d201c 	ldr	r2, [sp, #28]
        1c2dcc:	e1a02842 	mov	r2, r2, asr #16
        1c2dd0:	e59d0018 	ldr	r0, [sp, #24]
        1c2dd4:	e0420840 	sub	r0, r2, r0, asr #16
        1c2dd8:	e1510000 	cmp	r1, r0
        1c2ddc:	ca000091 	bgt	1c3028 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xb6c>
        1c2de0:	e3a03005 	mov	r3, #5	; 0x5
        1c2de4:	e92d0008 	stmdb	sp!, {r3}
        1c2de8:	e1a03007 	mov	r3, r7
        1c2dec:	e1a01008 	mov	r1, r8
        1c2df0:	e59d0038 	ldr	r0, [sp, #56]
        1c2df4:	e59d2054 	ldr	r2, [sp, #84]
        1c2df8:	eb658d53 	bl	1b2634c <$straight_stroke__FiT1PsT3T1>
        1c2dfc:	e28dd004 	add	sp, sp, #4	; 0x4
        1c2e00:	e3300001 	teq	r0, #1	; 0x1
        1c2e04:	0a00000a 	beq	1c2e34 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x978>
        1c2e08:	e3a03010 	mov	r3, #16	; 0x10
        1c2e0c:	e3a02005 	mov	r2, #5	; 0x5
        1c2e10:	e92d000c 	stmdb	sp!, {r2, r3}
        1c2e14:	e1a03008 	mov	r3, r8
        1c2e18:	e1a01005 	mov	r1, r5
        1c2e1c:	e1a00004 	mov	r0, r4
        1c2e20:	e59d203c 	ldr	r2, [sp, #60]
        1c2e24:	eb65850a 	bl	1b24254 <$curve_com_or_brkt__FP8low_typeP9SPEC_TYPEiN23Us>
        1c2e28:	e28dd008 	add	sp, sp, #8	; 0x8
        1c2e2c:	e3300000 	teq	r0, #0	; 0x0
        1c2e30:	0a00001f 	beq	1c2eb4 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x9f8>
        1c2e34:	e3590000 	cmp	r9, #0	; 0x0
        1c2e38:	da00007a 	ble	1c3028 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xb6c>
        1c2e3c:	e59d001e 	ldr	r0, [sp, #30]
        1c2e40:	e1a00840 	mov	r0, r0, asr #16
        1c2e44:	e59d101a 	ldr	r1, [sp, #26]
        1c2e48:	e0401841 	sub	r1, r0, r1, asr #16
        1c2e4c:	e59d201c 	ldr	r2, [sp, #28]
        1c2e50:	e1a02842 	mov	r2, r2, asr #16
        1c2e54:	e59d0018 	ldr	r0, [sp, #24]
        1c2e58:	e0420840 	sub	r0, r2, r0, asr #16
        1c2e5c:	e1510000 	cmp	r1, r0
        1c2e60:	ba000070 	blt	1c3028 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xb6c>
        1c2e64:	e5950010 	ldr	r0, [r5, #16]
        1c2e68:	e5d01000 	ldrb	r1, [r0]
        1c2e6c:	e3310003 	teq	r1, #3	; 0x3
        1c2e70:	1a00006c 	bne	1c3028 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xb6c>
        1c2e74:	e5901008 	ldr	r1, [r0, #8]
        1c2e78:	e1a01841 	mov	r1, r1, asr #16
        1c2e7c:	e7970081 	ldr	r0, [r7, r1, lsl #1]
        1c2e80:	e1a00840 	mov	r0, r0, asr #16
        1c2e84:	e59d204c 	ldr	r2, [sp, #76]
        1c2e88:	e7921081 	ldr	r1, [r2, r1, lsl #1]
        1c2e8c:	e1a01841 	mov	r1, r1, asr #16
        1c2e90:	e59b202c 	ldr	r2, [fp, #44]
        1c2e94:	e7921081 	ldr	r1, [r2, r1, lsl #1]
        1c2e98:	e1a01841 	mov	r1, r1, asr #16
        1c2e9c:	e0410000 	sub	r0, r1, r0
        1c2ea0:	e59d1094 	ldr	r1, [sp, #148]
        1c2ea4:	e1500141 	cmp	r0, r1, asr #2
        1c2ea8:	c3a00001 	movgt	r0, #1	; 0x1
        1c2eac:	c58d0000 	strgt	r0, [sp]
        1c2eb0:	ea00005c 	b	1c3028 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xb6c>
        1c2eb4:	e3a00000 	mov	r0, #0	; 0x0
        1c2eb8:	e5958010 	ldr	r8, [r5, #16]
        1c2ebc:	e58d0024 	str	r0, [sp, #36]
        1c2ec0:	e58d0028 	str	r0, [sp, #40]
        1c2ec4:	e5d80000 	ldrb	r0, [r8]
        1c2ec8:	e3300010 	teq	r0, #16	; 0x10
        1c2ecc:	0a000051 	beq	1c3018 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xb5c>
        1c2ed0:	e59d1060 	ldr	r1, [sp, #96]
        1c2ed4:	e041000a 	sub	r0, r1, sl
        1c2ed8:	e58d0084 	str	r0, [sp, #132]
        1c2edc:	e59d0074 	ldr	r0, [sp, #116]
        1c2ee0:	e3500000 	cmp	r0, #0	; 0x0
        1c2ee4:	da000020 	ble	1c2f6c <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xab0>
        1c2ee8:	e5d80000 	ldrb	r0, [r8]
        1c2eec:	e3300001 	teq	r0, #1	; 0x1
        1c2ef0:	05980008 	ldreq	r0, [r8, #8]
        1c2ef4:	01a00840 	moveq	r0, r0, asr #16
        1c2ef8:	07970080 	ldreq	r0, [r7, r0, lsl #1]
        1c2efc:	01a00840 	moveq	r0, r0, asr #16
        1c2f00:	0130000a 	teqeq	r0, sl
        1c2f04:	1a000018 	bne	1c2f6c <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xab0>
        1c2f08:	e59d0074 	ldr	r0, [sp, #116]
        1c2f0c:	e3500002 	cmp	r0, #2	; 0x2
        1c2f10:	ca000010 	bgt	1c2f58 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xa9c>
        1c2f14:	e59d0080 	ldr	r0, [sp, #128]
        1c2f18:	e3500000 	cmp	r0, #0	; 0x0
        1c2f1c:	c59d0084 	ldrgt	r0, [sp, #132]
        1c2f20:	c59d108c 	ldrgt	r1, [sp, #140]
        1c2f24:	c1500141 	cmpgt	r0, r1, asr #2
        1c2f28:	ca00000a 	bgt	1c2f58 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xa9c>
        1c2f2c:	e59d0014 	ldr	r0, [sp, #20]
        1c2f30:	e59d1090 	ldr	r1, [sp, #144]
        1c2f34:	eb67be81 	bl	1bb2940 <$__rt_sdiv>
        1c2f38:	e52d0004 	str	r0, [sp, -#4]!
        1c2f3c:	e59b1008 	ldr	r1, [fp, #8]
        1c2f40:	e59d0018 	ldr	r0, [sp, #24]
        1c2f44:	eb67be7d 	bl	1bb2940 <$__rt_sdiv>
        1c2f48:	e49d1004 	ldr	r1, [sp], #4
        1c2f4c:	e0810000 	add	r0, r1, r0
        1c2f50:	e150000a 	cmp	r0, sl
        1c2f54:	da000004 	ble	1c2f6c <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xab0>
        1c2f58:	e3a0006e 	mov	r0, #110	; 0x6e
        1c2f5c:	e5c80001 	strb	r0, [r8, #1]
        1c2f60:	e59d0028 	ldr	r0, [sp, #40]
        1c2f64:	e2800001 	add	r0, r0, #1	; 0x1
        1c2f68:	e58d0028 	str	r0, [sp, #40]
        1c2f6c:	e3590000 	cmp	r9, #0	; 0x0
        1c2f70:	da000024 	ble	1c3008 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xb4c>
        1c2f74:	e5d80000 	ldrb	r0, [r8]
        1c2f78:	e3300003 	teq	r0, #3	; 0x3
        1c2f7c:	05980008 	ldreq	r0, [r8, #8]
        1c2f80:	01a00840 	moveq	r0, r0, asr #16
        1c2f84:	07970080 	ldreq	r0, [r7, r0, lsl #1]
        1c2f88:	01a00840 	moveq	r0, r0, asr #16
        1c2f8c:	059d1060 	ldreq	r1, [sp, #96]
        1c2f90:	01300001 	teqeq	r0, r1
        1c2f94:	1a00001b 	bne	1c3008 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xb4c>
        1c2f98:	e3590002 	cmp	r9, #2	; 0x2
        1c2f9c:	ca000014 	bgt	1c2ff4 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xb38>
        1c2fa0:	e59d0080 	ldr	r0, [sp, #128]
        1c2fa4:	e3500000 	cmp	r0, #0	; 0x0
        1c2fa8:	c59d0084 	ldrgt	r0, [sp, #132]
        1c2fac:	c59d108c 	ldrgt	r1, [sp, #140]
        1c2fb0:	c1500141 	cmpgt	r0, r1, asr #2
        1c2fb4:	ca00000e 	bgt	1c2ff4 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xb38>
        1c2fb8:	e59d000c 	ldr	r0, [sp, #12]
        1c2fbc:	e59d1088 	ldr	r1, [sp, #136]
        1c2fc0:	eb67be5e 	bl	1bb2940 <$__rt_sdiv>
        1c2fc4:	e52d0004 	str	r0, [sp, -#4]!
        1c2fc8:	e59b100c 	ldr	r1, [fp, #12]
        1c2fcc:	e59d0010 	ldr	r0, [sp, #16]
        1c2fd0:	eb67be5a 	bl	1bb2940 <$__rt_sdiv>
        1c2fd4:	e49d1004 	ldr	r1, [sp], #4
        1c2fd8:	e0810000 	add	r0, r1, r0
        1c2fdc:	e59d1060 	ldr	r1, [sp, #96]
        1c2fe0:	e1500001 	cmp	r0, r1
        1c2fe4:	aa000007 	bge	1c3008 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xb4c>
        1c2fe8:	e59b1008 	ldr	r1, [fp, #8]
        1c2fec:	e15a0001 	cmp	sl, r1
        1c2ff0:	da000004 	ble	1c3008 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xb4c>
        1c2ff4:	e3a0006e 	mov	r0, #110	; 0x6e
        1c2ff8:	e5c80001 	strb	r0, [r8, #1]
        1c2ffc:	e59d0024 	ldr	r0, [sp, #36]
        1c3000:	e2800001 	add	r0, r0, #1	; 0x1
        1c3004:	e58d0024 	str	r0, [sp, #36]
        1c3008:	e5988010 	ldr	r8, [r8, #16]
        1c300c:	e5d80000 	ldrb	r0, [r8]
        1c3010:	e3300010 	teq	r0, #16	; 0x10
        1c3014:	1affffb0 	bne	1c2edc <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xa20>
        1c3018:	e59d0028 	ldr	r0, [sp, #40]
        1c301c:	e59d1024 	ldr	r1, [sp, #36]
        1c3020:	e0800001 	add	r0, r0, r1
        1c3024:	e0806006 	add	r6, r0, r6
        1c3028:	e595500c 	ldr	r5, [r5, #12]
        1c302c:	e3350000 	teq	r5, #0	; 0x0
        1c3030:	1afffd88 	bne	1c2658 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0x19c>
        1c3034:	e59d1064 	ldr	r1, [sp, #100]
        1c3038:	e59b2014 	ldr	r2, [fp, #20]
        1c303c:	e2820001 	add	r0, r2, #1	; 0x1
        1c3040:	e3e05000 	mvn	r5, #0	; 0x0
        1c3044:	e3510005 	cmp	r1, #5	; 0x5
        1c3048:	da000009 	ble	1c3074 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xbb8>
        1c304c:	e59d1064 	ldr	r1, [sp, #100]
        1c3050:	e1500001 	cmp	r0, r1
        1c3054:	aa000006 	bge	1c3074 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xbb8>
        1c3058:	e59b1020 	ldr	r1, [fp, #32]
        1c305c:	e5815000 	str	r5, [r1]
        1c3060:	e59d1064 	ldr	r1, [sp, #100]
        1c3064:	e59b2014 	ldr	r2, [fp, #20]
        1c3068:	e0411002 	sub	r1, r1, r2
        1c306c:	e0811006 	add	r1, r1, r6
        1c3070:	e2416001 	sub	r6, r1, #1	; 0x1
        1c3074:	e5941078 	ldr	r1, [r4, #120]
        1c3078:	e1a01841 	mov	r1, r1, asr #16
        1c307c:	e5942074 	ldr	r2, [r4, #116]
        1c3080:	e0411842 	sub	r1, r1, r2, asr #16
        1c3084:	e594207a 	ldr	r2, [r4, #122]
        1c3088:	e1a02842 	mov	r2, r2, asr #16
        1c308c:	e5943076 	ldr	r3, [r4, #118]
        1c3090:	e0422843 	sub	r2, r2, r3, asr #16
        1c3094:	e3a07001 	mov	r7, #1	; 0x1
        1c3098:	e1510002 	cmp	r1, r2
        1c309c:	d59d105c 	ldrle	r1, [sp, #92]
        1c30a0:	d3510001 	cmple	r1, #1	; 0x1
        1c30a4:	da00003b 	ble	1c3198 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xcdc>
        1c30a8:	e59d3068 	ldr	r3, [sp, #104]
        1c30ac:	e59b1018 	ldr	r1, [fp, #24]
        1c30b0:	e2811001 	add	r1, r1, #1	; 0x1
        1c30b4:	e59b2018 	ldr	r2, [fp, #24]
        1c30b8:	e1530002 	cmp	r3, r2
        1c30bc:	da000008 	ble	1c30e4 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xc28>
        1c30c0:	e59d2070 	ldr	r2, [sp, #112]
        1c30c4:	e1510002 	cmp	r1, r2
        1c30c8:	ba000005 	blt	1c30e4 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xc28>
        1c30cc:	e59b2024 	ldr	r2, [fp, #36]
        1c30d0:	e5827000 	str	r7, [r2]
        1c30d4:	e59d3068 	ldr	r3, [sp, #104]
        1c30d8:	e59b2018 	ldr	r2, [fp, #24]
        1c30dc:	e0432002 	sub	r2, r3, r2
        1c30e0:	e0826006 	add	r6, r2, r6
        1c30e4:	e59d306c 	ldr	r3, [sp, #108]
        1c30e8:	e59b2014 	ldr	r2, [fp, #20]
        1c30ec:	e1530002 	cmp	r3, r2
        1c30f0:	da000008 	ble	1c3118 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xc5c>
        1c30f4:	e59d2064 	ldr	r2, [sp, #100]
        1c30f8:	e1500002 	cmp	r0, r2
        1c30fc:	ba000005 	blt	1c3118 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xc5c>
        1c3100:	e59b0020 	ldr	r0, [fp, #32]
        1c3104:	e5807000 	str	r7, [r0]
        1c3108:	e59d006c 	ldr	r0, [sp, #108]
        1c310c:	e59b2014 	ldr	r2, [fp, #20]
        1c3110:	e0400002 	sub	r0, r0, r2
        1c3114:	e0806006 	add	r6, r0, r6
        1c3118:	e59d0070 	ldr	r0, [sp, #112]
        1c311c:	e1510000 	cmp	r1, r0
        1c3120:	aa00000a 	bge	1c3150 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xc94>
        1c3124:	e59d0068 	ldr	r0, [sp, #104]
        1c3128:	e59b1018 	ldr	r1, [fp, #24]
        1c312c:	e1500001 	cmp	r0, r1
        1c3130:	ca000006 	bgt	1c3150 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xc94>
        1c3134:	e59b2024 	ldr	r2, [fp, #36]
        1c3138:	e5825000 	str	r5, [r2]
        1c313c:	e59d0070 	ldr	r0, [sp, #112]
        1c3140:	e59b1018 	ldr	r1, [fp, #24]
        1c3144:	e0400001 	sub	r0, r0, r1
        1c3148:	e0800006 	add	r0, r0, r6
        1c314c:	e2406001 	sub	r6, r0, #1	; 0x1
        1c3150:	e59d0054 	ldr	r0, [sp, #84]
        1c3154:	e3500005 	cmp	r0, #5	; 0x5
        1c3158:	a59d0058 	ldrge	r0, [sp, #88]
        1c315c:	a3500005 	cmpge	r0, #5	; 0x5
        1c3160:	a59d0068 	ldrge	r0, [sp, #104]
        1c3164:	a3500002 	cmpge	r0, #2	; 0x2
        1c3168:	ba00000a 	blt	1c3198 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xcdc>
        1c316c:	e5940078 	ldr	r0, [r4, #120]
        1c3170:	e1a00840 	mov	r0, r0, asr #16
        1c3174:	e59b101c 	ldr	r1, [fp, #28]
        1c3178:	e59b2018 	ldr	r2, [fp, #24]
        1c317c:	e0811202 	add	r1, r1, r2, lsl #4
        1c3180:	e511100e 	ldr	r1, [r1, -#14]
        1c3184:	e0401841 	sub	r1, r0, r1, asr #16
        1c3188:	e5942074 	ldr	r2, [r4, #116]
        1c318c:	e0400842 	sub	r0, r0, r2, asr #16
        1c3190:	e15100c0 	cmp	r1, r0, asr #1
        1c3194:	c2866002 	addgt	r6, r6, #2	; 0x2
        1c3198:	e59d003c 	ldr	r0, [sp, #60]
        1c319c:	e59d1044 	ldr	r1, [sp, #68]
        1c31a0:	e0410000 	sub	r0, r1, r0
        1c31a4:	e59b100c 	ldr	r1, [fp, #12]
        1c31a8:	e1500001 	cmp	r0, r1
        1c31ac:	da00001a 	ble	1c321c <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xd60>
        1c31b0:	e59d1040 	ldr	r1, [sp, #64]
        1c31b4:	e351005a 	cmp	r1, #90	; 0x5a
        1c31b8:	a59d0038 	ldrge	r0, [sp, #56]
        1c31bc:	a350005a 	cmpge	r0, #90	; 0x5a
        1c31c0:	ba000002 	blt	1c31d0 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xd14>
        1c31c4:	e59b1018 	ldr	r1, [fp, #24]
        1c31c8:	e3510003 	cmp	r1, #3	; 0x3
        1c31cc:	da00000f 	ble	1c3210 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xd54>
        1c31d0:	e59d1040 	ldr	r1, [sp, #64]
        1c31d4:	e351004b 	cmp	r1, #75	; 0x4b
        1c31d8:	a59d0038 	ldrge	r0, [sp, #56]
        1c31dc:	a350004b 	cmpge	r0, #75	; 0x4b
        1c31e0:	ba000002 	blt	1c31f0 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xd34>
        1c31e4:	e59b1018 	ldr	r1, [fp, #24]
        1c31e8:	e3510002 	cmp	r1, #2	; 0x2
        1c31ec:	da000007 	ble	1c3210 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xd54>
        1c31f0:	e59d1040 	ldr	r1, [sp, #64]
        1c31f4:	e3510037 	cmp	r1, #55	; 0x37
        1c31f8:	a59d0038 	ldrge	r0, [sp, #56]
        1c31fc:	a3500037 	cmpge	r0, #55	; 0x37
        1c3200:	ba000005 	blt	1c321c <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xd60>
        1c3204:	e59b1018 	ldr	r1, [fp, #24]
        1c3208:	e3510001 	cmp	r1, #1	; 0x1
        1c320c:	ca000002 	bgt	1c321c <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xd60>
        1c3210:	e59b2024 	ldr	r2, [fp, #36]
        1c3214:	e2866003 	add	r6, r6, #3	; 0x3
        1c3218:	e5825000 	str	r5, [r2]
        1c321c:	e3a00002 	mov	r0, #2	; 0x2
        1c3220:	e59d103c 	ldr	r1, [sp, #60]
        1c3224:	e0801081 	add	r1, r0, r1, lsl #1
        1c3228:	e3a00005 	mov	r0, #5	; 0x5
        1c322c:	eb67bdc3 	bl	1bb2940 <$__rt_sdiv>
        1c3230:	e59b1010 	ldr	r1, [fp, #16]
        1c3234:	e1500001 	cmp	r0, r1
        1c3238:	da00001e 	ble	1c32b8 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xdfc>
        1c323c:	e59b2024 	ldr	r2, [fp, #36]
        1c3240:	e5920000 	ldr	r0, [r2]
        1c3244:	e3700001 	cmn	r0, #1	; 0x1
        1c3248:	0a00001a 	beq	1c32b8 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xdfc>
        1c324c:	e59d1040 	ldr	r1, [sp, #64]
        1c3250:	e351005a 	cmp	r1, #90	; 0x5a
        1c3254:	a59d0038 	ldrge	r0, [sp, #56]
        1c3258:	a350005a 	cmpge	r0, #90	; 0x5a
        1c325c:	ba000002 	blt	1c326c <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xdb0>
        1c3260:	e59b2014 	ldr	r2, [fp, #20]
        1c3264:	e3520003 	cmp	r2, #3	; 0x3
        1c3268:	da00000f 	ble	1c32ac <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xdf0>
        1c326c:	e59d1040 	ldr	r1, [sp, #64]
        1c3270:	e351004b 	cmp	r1, #75	; 0x4b
        1c3274:	a59d0038 	ldrge	r0, [sp, #56]
        1c3278:	a350004b 	cmpge	r0, #75	; 0x4b
        1c327c:	ba000002 	blt	1c328c <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xdd0>
        1c3280:	e59b2014 	ldr	r2, [fp, #20]
        1c3284:	e3520002 	cmp	r2, #2	; 0x2
        1c3288:	da000007 	ble	1c32ac <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xdf0>
        1c328c:	e59d1040 	ldr	r1, [sp, #64]
        1c3290:	e3510037 	cmp	r1, #55	; 0x37
        1c3294:	a59d0038 	ldrge	r0, [sp, #56]
        1c3298:	a3500037 	cmpge	r0, #55	; 0x37
        1c329c:	ba000005 	blt	1c32b8 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xdfc>
        1c32a0:	e59b2014 	ldr	r2, [fp, #20]
        1c32a4:	e3520001 	cmp	r2, #1	; 0x1
        1c32a8:	ca000002 	bgt	1c32b8 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xdfc>
        1c32ac:	e59b0020 	ldr	r0, [fp, #32]
        1c32b0:	e2866003 	add	r6, r6, #3	; 0x3
        1c32b4:	e5805000 	str	r5, [r0]
        1c32b8:	e59d003c 	ldr	r0, [sp, #60]
        1c32bc:	e59d1044 	ldr	r1, [sp, #68]
        1c32c0:	e0810000 	add	r0, r1, r0
        1c32c4:	e59b100c 	ldr	r1, [fp, #12]
        1c32c8:	e1500001 	cmp	r0, r1
        1c32cc:	aa00001a 	bge	1c333c <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xe80>
        1c32d0:	e59d1040 	ldr	r1, [sp, #64]
        1c32d4:	e351005a 	cmp	r1, #90	; 0x5a
        1c32d8:	a59d0038 	ldrge	r0, [sp, #56]
        1c32dc:	a350005a 	cmpge	r0, #90	; 0x5a
        1c32e0:	ba000002 	blt	1c32f0 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xe34>
        1c32e4:	e59b1018 	ldr	r1, [fp, #24]
        1c32e8:	e3510003 	cmp	r1, #3	; 0x3
        1c32ec:	da00000f 	ble	1c3330 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xe74>
        1c32f0:	e59d1040 	ldr	r1, [sp, #64]
        1c32f4:	e351004b 	cmp	r1, #75	; 0x4b
        1c32f8:	a59d0038 	ldrge	r0, [sp, #56]
        1c32fc:	a350004b 	cmpge	r0, #75	; 0x4b
        1c3300:	ba000002 	blt	1c3310 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xe54>
        1c3304:	e59b1018 	ldr	r1, [fp, #24]
        1c3308:	e3510002 	cmp	r1, #2	; 0x2
        1c330c:	da000007 	ble	1c3330 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xe74>
        1c3310:	e59d1040 	ldr	r1, [sp, #64]
        1c3314:	e3510037 	cmp	r1, #55	; 0x37
        1c3318:	a59d0038 	ldrge	r0, [sp, #56]
        1c331c:	a3500037 	cmpge	r0, #55	; 0x37
        1c3320:	ba000005 	blt	1c333c <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xe80>
        1c3324:	e59b1018 	ldr	r1, [fp, #24]
        1c3328:	e3510001 	cmp	r1, #1	; 0x1
        1c332c:	ca000002 	bgt	1c333c <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xe80>
        1c3330:	e59b2024 	ldr	r2, [fp, #36]
        1c3334:	e2866003 	add	r6, r6, #3	; 0x3
        1c3338:	e5827000 	str	r7, [r2]
        1c333c:	e59d003c 	ldr	r0, [sp, #60]
        1c3340:	e08000c0 	add	r0, r0, r0, asr #1
        1c3344:	e59d103c 	ldr	r1, [sp, #60]
        1c3348:	e0800001 	add	r0, r0, r1
        1c334c:	e59b1010 	ldr	r1, [fp, #16]
        1c3350:	e1500001 	cmp	r0, r1
        1c3354:	aa00001a 	bge	1c33c4 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xf08>
        1c3358:	e59d1040 	ldr	r1, [sp, #64]
        1c335c:	e351005a 	cmp	r1, #90	; 0x5a
        1c3360:	a59d0038 	ldrge	r0, [sp, #56]
        1c3364:	a350005a 	cmpge	r0, #90	; 0x5a
        1c3368:	ba000002 	blt	1c3378 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xebc>
        1c336c:	e59b1018 	ldr	r1, [fp, #24]
        1c3370:	e3510003 	cmp	r1, #3	; 0x3
        1c3374:	da00000f 	ble	1c33b8 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xefc>
        1c3378:	e59d1040 	ldr	r1, [sp, #64]
        1c337c:	e351004b 	cmp	r1, #75	; 0x4b
        1c3380:	a59d0038 	ldrge	r0, [sp, #56]
        1c3384:	a350004b 	cmpge	r0, #75	; 0x4b
        1c3388:	ba000002 	blt	1c3398 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xedc>
        1c338c:	e59b1018 	ldr	r1, [fp, #24]
        1c3390:	e3510002 	cmp	r1, #2	; 0x2
        1c3394:	da000007 	ble	1c33b8 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xefc>
        1c3398:	e59d1040 	ldr	r1, [sp, #64]
        1c339c:	e3510037 	cmp	r1, #55	; 0x37
        1c33a0:	a59d0038 	ldrge	r0, [sp, #56]
        1c33a4:	a3500037 	cmpge	r0, #55	; 0x37
        1c33a8:	ba000005 	blt	1c33c4 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xf08>
        1c33ac:	e59b1018 	ldr	r1, [fp, #24]
        1c33b0:	e3510001 	cmp	r1, #1	; 0x1
        1c33b4:	ca000002 	bgt	1c33c4 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xf08>
        1c33b8:	e59b0020 	ldr	r0, [fp, #32]
        1c33bc:	e2866003 	add	r6, r6, #3	; 0x3
        1c33c0:	e5807000 	str	r7, [r0]
        1c33c4:	e59b0008 	ldr	r0, [fp, #8]
        1c33c8:	e59d1044 	ldr	r1, [sp, #68]
        1c33cc:	e1500001 	cmp	r0, r1
        1c33d0:	da00001a 	ble	1c3440 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xf84>
        1c33d4:	e59d1040 	ldr	r1, [sp, #64]
        1c33d8:	e351005a 	cmp	r1, #90	; 0x5a
        1c33dc:	ba000004 	blt	1c33f4 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xf38>
        1c33e0:	e59b1018 	ldr	r1, [fp, #24]
        1c33e4:	e3510003 	cmp	r1, #3	; 0x3
        1c33e8:	c59b2014 	ldrgt	r2, [fp, #20]
        1c33ec:	c3520003 	cmpgt	r2, #3	; 0x3
        1c33f0:	da00000f 	ble	1c3434 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xf78>
        1c33f4:	e59d1040 	ldr	r1, [sp, #64]
        1c33f8:	e351004b 	cmp	r1, #75	; 0x4b
        1c33fc:	ba000004 	blt	1c3414 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xf58>
        1c3400:	e59b1018 	ldr	r1, [fp, #24]
        1c3404:	e3510002 	cmp	r1, #2	; 0x2
        1c3408:	c59b2014 	ldrgt	r2, [fp, #20]
        1c340c:	c3520002 	cmpgt	r2, #2	; 0x2
        1c3410:	da000007 	ble	1c3434 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xf78>
        1c3414:	e59d1040 	ldr	r1, [sp, #64]
        1c3418:	e3510037 	cmp	r1, #55	; 0x37
        1c341c:	ba000007 	blt	1c3440 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xf84>
        1c3420:	e59b1018 	ldr	r1, [fp, #24]
        1c3424:	e3510001 	cmp	r1, #1	; 0x1
        1c3428:	c59b2014 	ldrgt	r2, [fp, #20]
        1c342c:	c3520001 	cmpgt	r2, #1	; 0x1
        1c3430:	ca000002 	bgt	1c3440 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xf84>
        1c3434:	e59b0020 	ldr	r0, [fp, #32]
        1c3438:	e2866005 	add	r6, r6, #5	; 0x5
        1c343c:	e5805000 	str	r5, [r0]
        1c3440:	e59d0000 	ldr	r0, [sp]
        1c3444:	e3300001 	teq	r0, #1	; 0x1
        1c3448:	1a000009 	bne	1c3474 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xfb8>
        1c344c:	e59b2014 	ldr	r2, [fp, #20]
        1c3450:	e3520006 	cmp	r2, #6	; 0x6
        1c3454:	b59b1018 	ldrlt	r1, [fp, #24]
        1c3458:	b3510006 	cmplt	r1, #6	; 0x6
        1c345c:	aa000004 	bge	1c3474 <line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc+0xfb8>
        1c3460:	e59d0064 	ldr	r0, [sp, #100]
        1c3464:	e3300000 	teq	r0, #0	; 0x0
        1c3468:	059d0070 	ldreq	r0, [sp, #112]
        1c346c:	03300000 	teqeq	r0, #0	; 0x0
        1c3470:	02866064 	addeq	r6, r6, #100	; 0x64
        1c3474:	e1a00006 	mov	r0, r6
        1c3478:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: LayoutMeeting__FRC6RefVarN41
 * Address: 001ca1a8
 */
void globals::LayoutMeeting() {
    /*
        1ca1a8:	e1a0c00d 	mov	ip, sp
        1ca1ac:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1ca1b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ca1b4:	e1a07001 	mov	r7, r1
        1ca1b8:	e1a04003 	mov	r4, r3
        1ca1bc:	e24dd004 	sub	sp, sp, #4	; 0x4
        1ca1c0:	e5920000 	ldr	r0, [r2]
        1ca1c4:	e5900000 	ldr	r0, [r0]
        1ca1c8:	e3100003 	tst	r0, #3	; 0x3
        1ca1cc:	01a00140 	moveq	r0, r0, asr #2
        1ca1d0:	0a000000 	beq	1ca1d8 <LayoutMeeting__FRC6RefVarN41+0x30>
        1ca1d4:	eb67dfd0 	bl	1bc211c <$_RINTError(long)>
        1ca1d8:	e1a06000 	mov	r6, r0
        1ca1dc:	e5940000 	ldr	r0, [r4]
        1ca1e0:	e5900000 	ldr	r0, [r0]
        1ca1e4:	e3100003 	tst	r0, #3	; 0x3
        1ca1e8:	01a00140 	moveq	r0, r0, asr #2
        1ca1ec:	0a000000 	beq	1ca1f4 <LayoutMeeting__FRC6RefVarN41+0x4c>
        1ca1f0:	eb67dfc9 	bl	1bc211c <$_RINTError(long)>
        1ca1f4:	e1a04000 	mov	r4, r0
        1ca1f8:	e59f1108 	ldr	r1, [pc, #108]	; 1ca308 <LayoutMeeting__FRC6RefVarN41+0x160>
        1ca1fc:	e1a00007 	mov	r0, r7
        1ca200:	eb63a1cc 	bl	1ab2938 <$GetMeetingSlot__FRC6RefVarT1>
        1ca204:	eb67dfd0 	bl	1bc214c <$AllocateRefHandle(long)>
        1ca208:	e58d0000 	str	r0, [sp]
        1ca20c:	e59f10f8 	ldr	r1, [pc, #f8]	; 1ca30c <LayoutMeeting__FRC6RefVarN41+0x164>
        1ca210:	e1a00007 	mov	r0, r7
        1ca214:	eb63a1c7 	bl	1ab2938 <$GetMeetingSlot__FRC6RefVarT1>
        1ca218:	e3100003 	tst	r0, #3	; 0x3
        1ca21c:	01a00140 	moveq	r0, r0, asr #2
        1ca220:	0a000000 	beq	1ca228 <LayoutMeeting__FRC6RefVarN41+0x80>
        1ca224:	eb67dfbc 	bl	1bc211c <$_RINTError(long)>
        1ca228:	e1a05000 	mov	r5, r0
        1ca22c:	e59f10dc 	ldr	r1, [pc, #dc]	; 1ca310 <LayoutMeeting__FRC6RefVarN41+0x168>
        1ca230:	e1a00007 	mov	r0, r7
        1ca234:	eb63a1bf 	bl	1ab2938 <$GetMeetingSlot__FRC6RefVarT1>
        1ca238:	e3100003 	tst	r0, #3	; 0x3
        1ca23c:	01a00140 	moveq	r0, r0, asr #2
        1ca240:	0a000000 	beq	1ca248 <LayoutMeeting__FRC6RefVarN41+0xa0>
        1ca244:	eb67dfb4 	bl	1bc211c <$_RINTError(long)>
        1ca248:	e1a07000 	mov	r7, r0
        1ca24c:	e1a01005 	mov	r1, r5
        1ca250:	e3a00e5a 	mov	r0, #1440	; 0x5a0
        1ca254:	eb67a1b9 	bl	1bb2940 <$__rt_sdiv>
        1ca258:	e1a05001 	mov	r5, r1
        1ca25c:	e24dd008 	sub	sp, sp, #8	; 0x8
        1ca260:	e1a01006 	mov	r1, r6
        1ca264:	e1a00005 	mov	r0, r5
        1ca268:	e3a03e5a 	mov	r3, #1440	; 0x5a0
        1ca26c:	e3a02000 	mov	r2, #0	; 0x0
        1ca270:	eb6367f0 	bl	1aa4238 <$TimeToPosition__FlN31>
        1ca274:	e1a08800 	mov	r8, r0, lsl #16
        1ca278:	e1a08848 	mov	r8, r8, asr #16
        1ca27c:	e0850007 	add	r0, r5, r7
        1ca280:	e1a01006 	mov	r1, r6
        1ca284:	e3a03e5a 	mov	r3, #1440	; 0x5a0
        1ca288:	e3a02000 	mov	r2, #0	; 0x0
        1ca28c:	eb6367e9 	bl	1aa4238 <$TimeToPosition__FlN31>
        1ca290:	e1a00800 	mov	r0, r0, lsl #16
        1ca294:	e1a00840 	mov	r0, r0, asr #16
        1ca298:	e1a07808 	mov	r7, r8, lsl #16
        1ca29c:	e1a07847 	mov	r7, r7, asr #16
        1ca2a0:	e5cd7001 	strb	r7, [sp, #1]
        1ca2a4:	e1a06447 	mov	r6, r7, asr #8
        1ca2a8:	e5cd6000 	strb	r6, [sp]
        1ca2ac:	e1a05800 	mov	r5, r0, lsl #16
        1ca2b0:	e1a05845 	mov	r5, r5, asr #16
        1ca2b4:	e5cd5005 	strb	r5, [sp, #5]
        1ca2b8:	e1a08445 	mov	r8, r5, asr #8
        1ca2bc:	e5cd8004 	strb	r8, [sp, #4]
        1ca2c0:	e59d0008 	ldr	r0, [sp, #8]
        1ca2c4:	e5900000 	ldr	r0, [r0]
        1ca2c8:	e3a0101a 	mov	r1, #26	; 0x1a
        1ca2cc:	eb67e7d7 	bl	1bc4230 <$EQRef__FlT1>
        1ca2d0:	e3a01000 	mov	r1, #0	; 0x0
        1ca2d4:	e3300000 	teq	r0, #0	; 0x0
        1ca2d8:	0a00000d 	beq	1ca314 <LayoutMeeting__FRC6RefVarN41+0x16c>
        1ca2dc:	e1a00804 	mov	r0, r4, lsl #16
        1ca2e0:	e1a00840 	mov	r0, r0, asr #16
        1ca2e4:	e1a01000 	mov	r1, r0
        1ca2e8:	e0800fa0 	add	r0, r0, r0, lsr #31
        1ca2ec:	e1a000c0 	mov	r0, r0, asr #1
        1ca2f0:	e5cd0003 	strb	r0, [sp, #3]
        1ca2f4:	e1a00440 	mov	r0, r0, asr #8
        1ca2f8:	e5cd0002 	strb	r0, [sp, #2]
        1ca2fc:	e5cd1007 	strb	r1, [sp, #7]
        1ca300:	e1a00441 	mov	r0, r1, asr #8
        1ca304:	ea000014 	b	1ca35c <LayoutMeeting__FRC6RefVarN41+0x1b4>
        1ca308:	00684f08 	rsbeq	r4, r8, r8, lsl #30
        1ca30c:	00683978 	rsbeq	r3, r8, r8, ror r9
        1ca310:	00683950 	rsbeq	r3, r8, r0, asr r9
        1ca314:	e59d0008 	ldr	r0, [sp, #8]
        1ca318:	e5900000 	ldr	r0, [r0]
        1ca31c:	e3300002 	teq	r0, #2	; 0x2
        1ca320:	05cd1003 	streqb	r1, [sp, #3]
        1ca324:	05cd1002 	streqb	r1, [sp, #2]
        1ca328:	0a000009 	beq	1ca354 <LayoutMeeting__FRC6RefVarN41+0x1ac>
        1ca32c:	e1a0100d 	mov	r1, sp
        1ca330:	e28d0008 	add	r0, sp, #8	; 0x8
        1ca334:	eb6329cf 	bl	1a94a78 <$FromObject(RefVar const &, TRect &)>
        1ca338:	e5cd7001 	strb	r7, [sp, #1]
        1ca33c:	e5cd6000 	strb	r6, [sp]
        1ca340:	e5cd5005 	strb	r5, [sp, #5]
        1ca344:	e5cd8004 	strb	r8, [sp, #4]
        1ca348:	e59d0006 	ldr	r0, [sp, #6]
        1ca34c:	e1540840 	cmp	r4, r0, asr #16
        1ca350:	ba000003 	blt	1ca364 <LayoutMeeting__FRC6RefVarN41+0x1bc>
        1ca354:	e5cd4007 	strb	r4, [sp, #7]
        1ca358:	e1a00444 	mov	r0, r4, asr #8
        1ca35c:	e5cd0006 	strb	r0, [sp, #6]
        1ca360:	ea000004 	b	1ca378 <LayoutMeeting__FRC6RefVarN41+0x1d0>
        1ca364:	e0844fa4 	add	r4, r4, r4, lsr #31
        1ca368:	e1a040c4 	mov	r4, r4, asr #1
        1ca36c:	e5cd4003 	strb	r4, [sp, #3]
        1ca370:	e1a00444 	mov	r0, r4, asr #8
        1ca374:	e5cd0002 	strb	r0, [sp, #2]
        1ca378:	e1a0000d 	mov	r0, sp
        1ca37c:	eb689506 	bl	1bef79c <$ToObject(TRect const &)>
        1ca380:	e1a04000 	mov	r4, r0
        1ca384:	e59d0008 	ldr	r0, [sp, #8]
        1ca388:	eb67e38b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1ca38c:	e1a00004 	mov	r0, r4
        1ca390:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: LCDPowerInit(unsigned char)
 * Address: 001cc97c
 */
LCDPowerInit(unsigned char) {
    /*
        1cc97c:	e31000ff 	tst	r0, #255	; 0xff
        1cc980:	159f0008 	ldrne	r0, [pc, #8]	; 1cc990 <LCDPowerInit(unsigned char)+0x14>
        1cc984:	15900000 	ldrne	r0, [r0]
        1cc988:	1a6638df 	bne	1b5ad0c <TScreenDriver::$PowerInit(void)>
        1cc98c:	e1a0f00e 	mov	pc, lr
        1cc990:	0c101a4c 	ldceq	10, cr1, [r0], -#304
    */
}

/**
 * Symbol: LCDPowerOn(unsigned char)
 * Address: 001ccf54
 */
LCDPowerOn(unsigned char) {
    /*
        1ccf54:	e1a0c00d 	mov	ip, sp
        1ccf58:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1ccf5c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ccf60:	e20040ff 	and	r4, r0, #255	; 0xff
        1ccf64:	e59f0018 	ldr	r0, [pc, #18]	; 1ccf84 <LCDPowerOn(unsigned char)+0x30>
        1ccf68:	e5900000 	ldr	r0, [r0]
        1ccf6c:	eb663767 	bl	1b5ad10 <TScreenDriver::$PowerOn(void)>
        1ccf70:	e3340000 	teq	r4, #0	; 0x0
        1ccf74:	13a00000 	movne	r0, #0	; 0x0
        1ccf78:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        1ccf7c:	1a65f157 	bne	1b494e0 <$BlockLCDActivity(unsigned char)>
        1ccf80:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1ccf84:	0c101a4c 	ldceq	10, cr1, [r0], -#304
    */
}

/**
 * Symbol: LCDPowerOff(unsigned char)
 * Address: 001cd288
 */
LCDPowerOff(unsigned char) {
    /*
        1cd288:	e1a0c00d 	mov	ip, sp
        1cd28c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1cd290:	e24cb004 	sub	fp, ip, #4	; 0x4
        1cd294:	e31000ff 	tst	r0, #255	; 0xff
        1cd298:	13a00001 	movne	r0, #1	; 0x1
        1cd29c:	1b65f08f 	blne	1b494e0 <$BlockLCDActivity(unsigned char)>
        1cd2a0:	e59f0008 	ldr	r0, [pc, #8]	; 1cd2b0 <LCDPowerOff(unsigned char)+0x28>
        1cd2a4:	e5900000 	ldr	r0, [r0]
        1cd2a8:	e91b6800 	ldmdb	fp, {fp, sp, lr}
        1cd2ac:	ea663698 	b	1b5ad14 <TScreenDriver::$PowerOff(void)>
        1cd2b0:	0c101a4c 	ldceq	10, cr1, [r0], -#304
    */
}

/**
 * Symbol: LowLevelCopyDoneFromKernelGlue
 * Address: 001dfde8
 */
void globals::LowLevelCopyDoneFromKernelGlue() {
    /*
        1dfde8:	e1a0c00d 	mov	ip, sp
        1dfdec:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1dfdf0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dfdf4:	e1a05000 	mov	r5, r0
        1dfdf8:	e1a04001 	mov	r4, r1
        1dfdfc:	e1a06002 	mov	r6, r2
        1dfe00:	e3a07000 	mov	r7, #0	; 0x0
        1dfe04:	e52d7004 	str	r7, [sp, -#4]!
        1dfe08:	e59f0080 	ldr	r0, [pc, #80]	; 1dfe90 <LowLevelCopyDoneFromKernelGlue+0xa8>
        1dfe0c:	e5900000 	ldr	r0, [r0]
        1dfe10:	eb67e7b2 	bl	1bd9ce0 <TDoubleQContainer::$RemoveFromQueue(void *)>
        1dfe14:	e3300000 	teq	r0, #0	; 0x0
        1dfe18:	0a00001f 	beq	1dfe9c <LowLevelCopyDoneFromKernelGlue+0xb4>
        1dfe1c:	e59f0070 	ldr	r0, [pc, #70]	; 1dfe94 <LowLevelCopyDoneFromKernelGlue+0xac>
        1dfe20:	e5900000 	ldr	r0, [r0]
        1dfe24:	e1340000 	teq	r4, r0
        1dfe28:	03a00001 	moveq	r0, #1	; 0x1
        1dfe2c:	059f1064 	ldreq	r1, [pc, #64]	; 1dfe98 <LowLevelCopyDoneFromKernelGlue+0xb0>
        1dfe30:	05c10000 	streqb	r0, [r1]
        1dfe34:	e3350000 	teq	r5, #0	; 0x0
        1dfe38:	059450e0 	ldreq	r5, [r4, #224]
        1dfe3c:	e1a0200d 	mov	r2, sp
        1dfe40:	e3a00009 	mov	r0, #9	; 0x9
        1dfe44:	e59410ec 	ldr	r1, [r4, #236]
        1dfe48:	eb64571a 	bl	1af5ab8 <$ConvertIdToObj(KernelTypes, unsigned long, void *)>
        1dfe4c:	e3a00000 	mov	r0, #0	; 0x0
        1dfe50:	e59d1000 	ldr	r1, [sp]
        1dfe54:	e3310000 	teq	r1, #0	; 0x0
        1dfe58:	15a1007c 	strne	r0, [r1, #124]!
        1dfe5c:	e59410e4 	ldr	r1, [r4, #228]
        1dfe60:	e5841014 	str	r1, [r4, #20]
        1dfe64:	e59410dc 	ldr	r1, [r4, #220]
        1dfe68:	e5840078 	str	r0, [r4, #120]
        1dfe6c:	e584104c 	str	r1, [r4, #76]
        1dfe70:	e5845010 	str	r5, [r4, #16]
        1dfe74:	e58400e8 	str	r0, [r4, #232]
        1dfe78:	e58400ec 	str	r0, [r4, #236]
        1dfe7c:	e59400d0 	ldr	r0, [r4, #208]
        1dfe80:	e3300000 	teq	r0, #0	; 0x0
        1dfe84:	11a01004 	movne	r1, r4
        1dfe88:	1b67c279 	blne	1bd0874 <TDoubleQContainer::$DeleteFromQueue(void *)>
        1dfe8c:	ea000005 	b	1dfea8 <LowLevelCopyDoneFromKernelGlue+0xc0>
        1dfe90:	0c101034 	ldceq	0, cr1, [r0], -#208
        1dfe94:	0c100ff8 	ldceq	15, cr0, [r0], -#992
        1dfe98:	0c101040 	ldceq	0, cr1, [r0], -#256
        1dfe9c:	e3a070ea 	mov	r7, #234	; 0xea
        1dfea0:	e2477b0a 	sub	r7, r7, #10240	; 0x2800
        1dfea4:	e5a4604c 	str	r6, [r4, #76]!
        1dfea8:	e1a00007 	mov	r0, r7
        1dfeac:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: LocalSoundChannel(RefVar const &)
 * Address: 001e676c
 */
LocalSoundChannel(RefVar const &) {
    /*
        1e676c:	e1a0c00d 	mov	ip, sp
        1e6770:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1e6774:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e6778:	e24dd004 	sub	sp, sp, #4	; 0x4
        1e677c:	e3a04000 	mov	r4, #0	; 0x0
        1e6780:	e59f1058 	ldr	r1, [pc, #58]	; 1e67e0 <LocalSoundChannel(RefVar const &)+0x74>
        1e6784:	e5911000 	ldr	r1, [r1]
        1e6788:	e5911000 	ldr	r1, [r1]
        1e678c:	e5900000 	ldr	r0, [r0]
        1e6790:	e5900000 	ldr	r0, [r0]
        1e6794:	eb6776b1 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        1e6798:	eb676e6b 	bl	1bc214c <$AllocateRefHandle(long)>
        1e679c:	e58d0000 	str	r0, [sp]
        1e67a0:	e5900000 	ldr	r0, [r0]
        1e67a4:	e3300002 	teq	r0, #2	; 0x2
        1e67a8:	0a000002 	beq	1e67b8 <LocalSoundChannel(RefVar const &)+0x4c>
        1e67ac:	eb62e60b 	bl	1a9ffe0 <$RefToAddress(long)>
        1e67b0:	e1b04000 	movs	r4, r0
        1e67b4:	1a000005 	bne	1e67d0 <LocalSoundChannel(RefVar const &)+0x64>
        1e67b8:	e59f0024 	ldr	r0, [pc, #24]	; 1e67e4 <LocalSoundChannel(RefVar const &)+0x78>
        1e67bc:	e5900000 	ldr	r0, [r0]
        1e67c0:	e3a02000 	mov	r2, #0	; 0x0
        1e67c4:	e3a010c6 	mov	r1, #198	; 0xc6
        1e67c8:	e2411c76 	sub	r1, r1, #30208	; 0x7600
        1e67cc:	eb67f272 	bl	1be319c <$Throw>
        1e67d0:	e59d0000 	ldr	r0, [sp]
        1e67d4:	eb677278 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1e67d8:	e1a00004 	mov	r0, r4
        1e67dc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1e67e0:	006852d0 	ldreqd	r5, [r8], -#32
        1e67e4:	00371308 	eoreqs	r1, r7, r8, lsl #6
    */
}

/**
 * Symbol: LockChain(TDictChain *)
 * Address: 001f4a14
 */
LockChain(TDictChain *) {
    /*
        1f4a14:	e1a0c00d 	mov	ip, sp
        1f4a18:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1f4a1c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f4a20:	e1a04000 	mov	r4, r0
        1f4a24:	e3a05000 	mov	r5, #0	; 0x0
        1f4a28:	e590600c 	ldr	r6, [r0, #12]
        1f4a2c:	e3560000 	cmp	r6, #0	; 0x0
        1f4a30:	991ba870 	ldmlsdb	fp, {r4, r5, r6, fp, sp, pc}
        1f4a34:	e1a01005 	mov	r1, r5
        1f4a38:	e1a00004 	mov	r0, r4
        1f4a3c:	e5942000 	ldr	r2, [r4]
        1f4a40:	e1a0e00f 	mov	lr, pc
        1f4a44:	e282f01c 	add	pc, r2, #28	; 0x1c
        1f4a48:	e5900000 	ldr	r0, [r0]
        1f4a4c:	eb67b5ae 	bl	1be210c <$HLock>
        1f4a50:	e2855001 	add	r5, r5, #1	; 0x1
        1f4a54:	e1550006 	cmp	r5, r6
        1f4a58:	3afffff5 	bcc	1f4a34 <LockChain(TDictChain *)+0x20>
        1f4a5c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: LockHeapRange
 * Address: 001f8ab4
 */
void globals::LockHeapRange() {
    /*
        1f8ab4:	e1a0c00d 	mov	ip, sp
        1f8ab8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1f8abc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f8ac0:	e52d000c 	str	r0, [sp, -#12]!
        1f8ac4:	e2410001 	sub	r0, r1, #1	; 0x1
        1f8ac8:	e58d0004 	str	r0, [sp, #4]
        1f8acc:	e5cd2008 	strb	r2, [sp, #8]
        1f8ad0:	e59f0014 	ldr	r0, [pc, #14]	; 1f8aec <LockHeapRange+0x38>
        1f8ad4:	e5900004 	ldr	r0, [r0, #4]
        1f8ad8:	e1a0200d 	mov	r2, sp
        1f8adc:	e3a01006 	mov	r1, #6	; 0x6
        1f8ae0:	e59000b8 	ldr	r0, [r0, #184]
        1f8ae4:	eb06d60d 	bl	3ae320 <MonitorDispatchSWI>
        1f8ae8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        1f8aec:	0c104c08 	ldceq	12, cr4, [r0], -#32
    */
}

/**
 * Symbol: LockStack
 * Address: 001f8af0
 */
void globals::LockStack() {
    /*
        1f8af0:	e1a0c00d 	mov	ip, sp
        1f8af4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1f8af8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f8afc:	e24dd004 	sub	sp, sp, #4	; 0x4
        1f8b00:	e59f3030 	ldr	r3, [pc, #30]	; 1f8b38 <LockStack+0x48>
        1f8b04:	e5932000 	ldr	r2, [r3]
        1f8b08:	e5122018 	ldr	r2, [r2, -#24]
        1f8b0c:	e04d1001 	sub	r1, sp, r1
        1f8b10:	e1520001 	cmp	r2, r1
        1f8b14:	31a02001 	movcc	r2, r1
        1f8b18:	e5802000 	str	r2, [r0]
        1f8b1c:	e5931000 	ldr	r1, [r3]
        1f8b20:	e511101c 	ldr	r1, [r1, -#28]
        1f8b24:	e5a01004 	str	r1, [r0, #4]!
        1f8b28:	e1a00002 	mov	r0, r2
        1f8b2c:	e3a02000 	mov	r2, #0	; 0x0
        1f8b30:	eb677807 	bl	1bd6b54 <$LockHeapRange>
        1f8b34:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        1f8b38:	0c10105c 	ldceq	0, cr1, [r0], -#368
    */
}

/**
 * Symbol: LODefaultDoTransaction__FP6TStoreUlT2lUc
 * Address: 001fa8a4
 */
void globals::LODefaultDoTransaction() {
    /*
        1fa8a4:	e3a00000 	mov	r0, #0	; 0x0
        1fa8a8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: LineMinimize__FlPlN32PFlPlT2_lPFlPlN22_v
 * Address: 002193a0
 */
void globals::LineMinimize() {
    /*
        2193a0:	e1a0c00d 	mov	ip, sp
        2193a4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2193a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2193ac:	e1a06000 	mov	r6, r0
        2193b0:	e1a05001 	mov	r5, r1
        2193b4:	e1a04002 	mov	r4, r2
        2193b8:	e1a07003 	mov	r7, r3
        2193bc:	e3a00000 	mov	r0, #0	; 0x0
        2193c0:	e28b9008 	add	r9, fp, #8	; 0x8
        2193c4:	e8990300 	ldmia	r9, {r8, r9}
        2193c8:	e59ba004 	ldr	sl, [fp, #4]
        2193cc:	e52d001c 	str	r0, [sp, -#28]!
        2193d0:	e3a00a02 	mov	r0, #8192	; 0x2000
        2193d4:	e1a03008 	mov	r3, r8
        2193d8:	e1a02004 	mov	r2, r4
        2193dc:	e1a01005 	mov	r1, r5
        2193e0:	e58d0018 	str	r0, [sp, #24]
        2193e4:	e1a00006 	mov	r0, r6
        2193e8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2193ec:	e59f30a4 	ldr	r3, [pc, #a4]	; 219498 <LineMinimize__FlPlN32PFlPlT2_lPFlPlN22_v+0xf8>
        2193f0:	e28d201c 	add	r2, sp, #28	; 0x1c
        2193f4:	e28d1020 	add	r1, sp, #32	; 0x20
        2193f8:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        2193fc:	e28d3024 	add	r3, sp, #36	; 0x24
        219400:	e28d2020 	add	r2, sp, #32	; 0x20
        219404:	e28d1034 	add	r1, sp, #52	; 0x34
        219408:	e28d001c 	add	r0, sp, #28	; 0x1c
        21940c:	eb654454 	bl	1b6a564 <$BracketMin__FPlN51PFlT1PlT3PFlPlT2_lT3_llN21PFlPlT2_l>
        219410:	e28dd01c 	add	sp, sp, #28	; 0x1c
        219414:	e1a0300a 	mov	r3, sl
        219418:	e28d2014 	add	r2, sp, #20	; 0x14
        21941c:	e3a01c02 	mov	r1, #512	; 0x200
        219420:	e1a00009 	mov	r0, r9
        219424:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        219428:	e1a03008 	mov	r3, r8
        21942c:	e1a02004 	mov	r2, r4
        219430:	e1a01005 	mov	r1, r5
        219434:	e1a00006 	mov	r0, r6
        219438:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        21943c:	e59f3058 	ldr	r3, [pc, #58]	; 21949c <LineMinimize__FlPlN32PFlPlT2_lPFlPlN22_v+0xfc>
        219440:	e92d0008 	stmdb	sp!, {r3}
        219444:	e59f304c 	ldr	r3, [pc, #4c]	; 219498 <LineMinimize__FlPlN32PFlPlT2_lPFlPlN22_v+0xf8>
        219448:	e28d2024 	add	r2, sp, #36	; 0x24
        21944c:	e8920005 	ldmia	r2, {r0, r2}
        219450:	e59d103c 	ldr	r1, [sp, #60]
        219454:	eb654443 	bl	1b6a568 <$Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27>
        219458:	e28dd024 	add	sp, sp, #36	; 0x24
        21945c:	e5870000 	str	r0, [r7]
        219460:	e3a07001 	mov	r7, #1	; 0x1
        219464:	e3560001 	cmp	r6, #1	; 0x1
        219468:	ba000009 	blt	219494 <LineMinimize__FlPlN32PFlPlT2_lPFlPlN22_v+0xf4>
        21946c:	e7940107 	ldr	r0, [r4, r7, lsl #2]
        219470:	e59d1014 	ldr	r1, [sp, #20]
        219474:	eb671f12 	bl	1be10c4 <$FixedMultiply>
        219478:	e7840107 	str	r0, [r4, r7, lsl #2]
        21947c:	e7951107 	ldr	r1, [r5, r7, lsl #2]
        219480:	e0810000 	add	r0, r1, r0
        219484:	e7850107 	str	r0, [r5, r7, lsl #2]
        219488:	e2877001 	add	r7, r7, #1	; 0x1
        21948c:	e1570006 	cmp	r7, r6
        219490:	dafffff5 	ble	21946c <LineMinimize__FlPlN32PFlPlT2_lPFlPlN22_v+0xcc>
        219494:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        219498:	01b68428 	moveqs	r8, r8, lsr #8
        21949c:	01b68424 	moveqs	r8, r4, lsr #8
    */
}

/**
 * Symbol: LongitudeToCoordinate
 * Address: 002551c0
 */
void globals::LongitudeToCoordinate() {
    /*
        2551c0:	e1a0c00d 	mov	ip, sp
        2551c4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2551c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2551cc:	e1a04002 	mov	r4, r2
        2551d0:	e5910000 	ldr	r0, [r1]
        2551d4:	e5900000 	ldr	r0, [r0]
        2551d8:	e3100003 	tst	r0, #3	; 0x3
        2551dc:	01a00140 	moveq	r0, r0, asr #2
        2551e0:	0a000000 	beq	2551e8 <LongitudeToCoordinate+0x28>
        2551e4:	eb65b3cc 	bl	1bc211c <$_RINTError(long)>
        2551e8:	e1b00180 	movs	r0, r0, lsl #3
        2551ec:	42800003 	addmi	r0, r0, #3	; 0x3
        2551f0:	e1a00140 	mov	r0, r0, asr #2
        2551f4:	e2805202 	add	r5, r0, #536870912	; 0x20000000
        2551f8:	e5940000 	ldr	r0, [r4]
        2551fc:	e5900000 	ldr	r0, [r0]
        255200:	e3100003 	tst	r0, #3	; 0x3
        255204:	01a00140 	moveq	r0, r0, asr #2
        255208:	0a000000 	beq	255210 <LongitudeToCoordinate+0x50>
        25520c:	eb65b3c2 	bl	1bc211c <$_RINTError(long)>
        255210:	e1a01005 	mov	r1, r5
        255214:	eb662fad 	bl	1be10d0 <$FractMultiply>
        255218:	e1a00100 	mov	r0, r0, lsl #2
        25521c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: LatitudeToCoordinate
 * Address: 00255220
 */
void globals::LatitudeToCoordinate() {
    /*
        255220:	e1a0c00d 	mov	ip, sp
        255224:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        255228:	e24cb004 	sub	fp, ip, #4	; 0x4
        25522c:	e1a04002 	mov	r4, r2
        255230:	e5910000 	ldr	r0, [r1]
        255234:	e5900000 	ldr	r0, [r0]
        255238:	e3100003 	tst	r0, #3	; 0x3
        25523c:	01a00140 	moveq	r0, r0, asr #2
        255240:	0a000000 	beq	255248 <LatitudeToCoordinate+0x28>
        255244:	eb65b3b4 	bl	1bc211c <$_RINTError(long)>
        255248:	e1a01180 	mov	r1, r0, lsl #3
        25524c:	e0811fa1 	add	r1, r1, r1, lsr #31
        255250:	e1a010c1 	mov	r1, r1, asr #1
        255254:	e2615202 	rsb	r5, r1, #536870912	; 0x20000000
        255258:	e5940000 	ldr	r0, [r4]
        25525c:	e5900000 	ldr	r0, [r0]
        255260:	e3100003 	tst	r0, #3	; 0x3
        255264:	01a00140 	moveq	r0, r0, asr #2
        255268:	0a000000 	beq	255270 <LatitudeToCoordinate+0x50>
        25526c:	eb65b3aa 	bl	1bc211c <$_RINTError(long)>
        255270:	e1a01005 	mov	r1, r5
        255274:	eb662f95 	bl	1be10d0 <$FractMultiply>
        255278:	e1a00100 	mov	r0, r0, lsl #2
        25527c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: LowercaseText(unsigned short *, long)
 * Address: 002577c4
 */
LowercaseText(unsigned short *, long) {
    /*
        2577c4:	e59f2004 	ldr	r2, [pc, #4]	; 2577d0 <LowercaseText(unsigned short *, long)+0xc>
        2577c8:	e5922060 	ldr	r2, [r2, #96]
        2577cc:	ea652a4c 	b	1ba2104 <$ConvertTextCase(unsigned short *, long, signed char *)>
        2577d0:	0c107790 	ldceq	7, cr7, [r0], -#576
    */
}

/**
 * Symbol: LockBook(char *, _BOOKENTRY *)
 * Address: 002806cc
 */
LockBook(char *, _BOOKENTRY *) {
    /*
        2806cc:	e1a0c00d 	mov	ip, sp
        2806d0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2806d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2806d8:	e1a05000 	mov	r5, r0
        2806dc:	e1a04001 	mov	r4, r1
        2806e0:	e24dd028 	sub	sp, sp, #40	; 0x28
        2806e4:	e5910008 	ldr	r0, [r1, #8]
        2806e8:	e3500000 	cmp	r0, #0	; 0x0
        2806ec:	0a000006 	beq	28070c <LockBook(char *, _BOOKENTRY *)+0x40>
        2806f0:	e5941000 	ldr	r1, [r4]
        2806f4:	e1a01821 	mov	r1, r1, lsr #16
        2806f8:	e2811001 	add	r1, r1, #1	; 0x1
        2806fc:	e5c41001 	strb	r1, [r4, #1]
        280700:	e1a01441 	mov	r1, r1, asr #8
        280704:	e5c41000 	strb	r1, [r4]
        280708:	ea00005d 	b	280884 <LockBook(char *, _BOOKENTRY *)+0x1b8>
        28070c:	e5d50004 	ldrb	r0, [r5, #4]
        280710:	e59fa070 	ldr	sl, [pc, #70]	; 280788 <LockBook(char *, _BOOKENTRY *)+0xbc>
        280714:	e3500031 	cmp	r0, #49	; 0x31
        280718:	1a000002 	bne	280728 <LockBook(char *, _BOOKENTRY *)+0x5c>
        28071c:	e59a1000 	ldr	r1, [sl]
        280720:	e3510000 	cmp	r1, #0	; 0x0
        280724:	0a000005 	beq	280740 <LockBook(char *, _BOOKENTRY *)+0x74>
        280728:	e3500031 	cmp	r0, #49	; 0x31
        28072c:	0a000049 	beq	280858 <LockBook(char *, _BOOKENTRY *)+0x18c>
        280730:	e59f1054 	ldr	r1, [pc, #54]	; 28078c <LockBook(char *, _BOOKENTRY *)+0xc0>
        280734:	e5911000 	ldr	r1, [r1]
        280738:	e3510000 	cmp	r1, #0	; 0x0
        28073c:	1a000045 	bne	280858 <LockBook(char *, _BOOKENTRY *)+0x18c>
        280740:	e1a0000d 	mov	r0, sp
        280744:	e28f1f11 	add	r1, pc, #68	; 0x44
        280748:	eb5fbc1e 	bl	1a6f7c8 <$HWRStrCpy__FPcT1>
        28074c:	e1a01005 	mov	r1, r5
        280750:	e1a0000d 	mov	r0, sp
        280754:	eb5fbc1c 	bl	1a6f7cc <$HWRStrCat__FPcT1>
        280758:	e1a0000d 	mov	r0, sp
        28075c:	e28f1f0f 	add	r1, pc, #60	; 0x3c
        280760:	eb5fbc19 	bl	1a6f7cc <$HWRStrCat__FPcT1>
        280764:	e1a0000d 	mov	r0, sp
        280768:	e3a02021 	mov	r2, #33	; 0x21
        28076c:	e3a01001 	mov	r1, #1	; 0x1
        280770:	eb5fbc20 	bl	1a6f7f8 <$HWRFileOpen__FPcUiT2>
        280774:	e1b07000 	movs	r7, r0
        280778:	1a000012 	bne	2807c8 <LockBook(char *, _BOOKENTRY *)+0xfc>
        28077c:	e28f0f09 	add	r0, pc, #36	; 0x24
        280780:	eb65c43e 	bl	1bf1880 <$printf>
        280784:	ea00001f 	b	280808 <LockBook(char *, _BOOKENTRY *)+0x13c>
        280788:	0c104fc8 	ldceq	15, cr4, [r0], -#800
        28078c:	0c104fcc 	ldceq	15, cr4, [r0], -#816
        280790:	50617261 	rsbpl	r7, r1, r1, ror #4
        280794:	47726170 	undefined
        280798:	68436f64 	stmvsda	r3, {r2, r5, r6, r8, r9, sl, fp, sp, lr}^
        28079c:	65000000 	strvs	r0, [r0]
        2807a0:	2e62696e 	cdpcs	9, 6, cr6, cr2, cr14, {3}
        2807a4:	00000000 	andeq	r0, r0, r0
        2807a8:	0d43616e 	stfeqe	f6, [r3, -#440]
        2807ac:	6e6f7420 	cdpvs	4, 6, cr7, cr15, cr0, {1}
        2807b0:	6c6f6164 	stfvse	f6, [pc], -#400
        2807b4:	20746865 	rsbcss	r6, r4, r5, ror #16
        2807b8:	20636f64 	rsbcs	r6, r3, r4, ror #30
        2807bc:	6520626f 	strvs	r6, [r0, -#623]!
        2807c0:	6f6b2021 	swivs	0x006b2021
        2807c4:	21210d00 	teqcs	r1, r0, lsl #26
        2807c8:	e1a00007 	mov	r0, r7
        2807cc:	e3a02002 	mov	r2, #2	; 0x2
        2807d0:	e3a01000 	mov	r1, #0	; 0x0
        2807d4:	eb5fbc08 	bl	1a6f7fc <$HWRFileSeek(void *, long, unsigned int)>
        2807d8:	e1a00007 	mov	r0, r7
        2807dc:	eb5fc007 	bl	1a70800 <$HWRFileTell(void *)>
        2807e0:	e1a09800 	mov	r9, r0, lsl #16
        2807e4:	e1a09829 	mov	r9, r9, lsr #16
        2807e8:	e1a00007 	mov	r0, r7
        2807ec:	e3a02000 	mov	r2, #0	; 0x0
        2807f0:	e3a01000 	mov	r1, #0	; 0x0
        2807f4:	eb5fbc00 	bl	1a6f7fc <$HWRFileSeek(void *, long, unsigned int)>
        2807f8:	e1a00009 	mov	r0, r9
        2807fc:	eb5fbbea 	bl	1a6f7ac <$HWRMemoryAllocHandle(unsigned long)>
        280800:	e1b08000 	movs	r8, r0
        280804:	1a000001 	bne	280810 <LockBook(char *, _BOOKENTRY *)+0x144>
        280808:	e3a00000 	mov	r0, #0	; 0x0
        28080c:	ea00001c 	b	280884 <LockBook(char *, _BOOKENTRY *)+0x1b8>
        280810:	e1a00008 	mov	r0, r8
        280814:	eb5fbbe5 	bl	1a6f7b0 <$HWRMemoryLockHandle(unsigned long)>
        280818:	e1b06000 	movs	r6, r0
        28081c:	0a000019 	beq	280888 <LockBook(char *, _BOOKENTRY *)+0x1bc>
        280820:	e1a02009 	mov	r2, r9
        280824:	e1a01006 	mov	r1, r6
        280828:	e1a00007 	mov	r0, r7
        28082c:	eb5fbff4 	bl	1a70804 <$HWRFileRead__FPvT1Ui>
        280830:	e1500009 	cmp	r0, r9
        280834:	1a000013 	bne	280888 <LockBook(char *, _BOOKENTRY *)+0x1bc>
        280838:	e1a00007 	mov	r0, r7
        28083c:	eb5fbff1 	bl	1a70808 <$HWRFileClose(void *)>
        280840:	e5d50004 	ldrb	r0, [r5, #4]
        280844:	e3500031 	cmp	r0, #49	; 0x31
        280848:	151f00c4 	ldrne	r0, [pc, #ffffff3c]	; 28078c <LockBook(char *, _BOOKENTRY *)+0xc0>
        28084c:	15806000 	strne	r6, [r0]
        280850:	058a6000 	streq	r6, [sl]
        280854:	ea000003 	b	280868 <LockBook(char *, _BOOKENTRY *)+0x19c>
        280858:	e3500031 	cmp	r0, #49	; 0x31
        28085c:	151f00d8 	ldrne	r0, [pc, #ffffff28]	; 28078c <LockBook(char *, _BOOKENTRY *)+0xc0>
        280860:	15906000 	ldrne	r6, [r0]
        280864:	059a6000 	ldreq	r6, [sl]
        280868:	e3a00001 	mov	r0, #1	; 0x1
        28086c:	e5c40001 	strb	r0, [r4, #1]
        280870:	e3a00000 	mov	r0, #0	; 0x0
        280874:	e5c40000 	strb	r0, [r4]
        280878:	e5a48004 	str	r8, [r4, #4]!
        28087c:	e5846004 	str	r6, [r4, #4]
        280880:	e1a00006 	mov	r0, r6
        280884:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        280888:	e1a00007 	mov	r0, r7
        28088c:	eb5fbfdd 	bl	1a70808 <$HWRFileClose(void *)>
        280890:	e3560000 	cmp	r6, #0	; 0x0
        280894:	0a000001 	beq	2808a0 <LockBook(char *, _BOOKENTRY *)+0x1d4>
        280898:	e1a00008 	mov	r0, r8
        28089c:	eb5fbbc4 	bl	1a6f7b4 <$HWRMemoryUnlockHandle(unsigned long)>
        2808a0:	e1a00008 	mov	r0, r8
        2808a4:	eb5fbbc3 	bl	1a6f7b8 <$HWRMemoryFreeHandle(unsigned long)>
        2808a8:	eaffffd6 	b	280808 <LockBook(char *, _BOOKENTRY *)+0x13c>
    */
}

/**
 * Symbol: LockCodeBook(unsigned short)
 * Address: 002808d4
 */
LockCodeBook(unsigned short) {
    /*
        2808d4:	e1a02800 	mov	r2, r0, lsl #16
        2808d8:	e1a02822 	mov	r2, r2, lsr #16
        2808dc:	e59f101c 	ldr	r1, [pc, #1c]	; 280900 <LockCodeBook(unsigned short)+0x2c>
        2808e0:	e3520001 	cmp	r2, #1	; 0x1
        2808e4:	028f0f06 	addeq	r0, pc, #24	; 0x18
        2808e8:	0a5fbfd2 	beq	1a70838 <$LockBook(char *, _BOOKENTRY *)>
        2808ec:	e3520002 	cmp	r2, #2	; 0x2
        2808f0:	0281100c 	addeq	r1, r1, #12	; 0xc
        2808f4:	028f0f04 	addeq	r0, pc, #16	; 0x10
        2808f8:	0a5fbfce 	beq	1a70838 <$LockBook(char *, _BOOKENTRY *)>
        2808fc:	e1a0f00e 	mov	pc, lr
        280900:	0c104fd0 	ldceq	15, cr4, [r0], -#832
        280904:	626f6f6b 	rsbvs	r6, pc, #428	; 0x1ac
        280908:	31000000 	tstcc	r0, r0
        28090c:	626f6f6b 	rsbvs	r6, pc, #428	; 0x1ac
        280910:	32000000 	andcc	r0, r0, #0	; 0x0
    */
}

/**
 * Symbol: LO_Create(void)
 * Address: 0029bba8
 */
LO_Create(void) {
    /*
        29bba8:	e1a0c00d 	mov	ip, sp
        29bbac:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        29bbb0:	e24cb004 	sub	fp, ip, #4	; 0x4
        29bbb4:	e3a0002c 	mov	r0, #44	; 0x2c
        29bbb8:	e2800b12 	add	r0, r0, #18432	; 0x4800
        29bbbc:	e1a07000 	mov	r7, r0
        29bbc0:	eb5f4efd 	bl	1a6f7bc <$HWRMemoryAlloc(unsigned long)>
        29bbc4:	e1b04000 	movs	r4, r0
        29bbc8:	e3a06000 	mov	r6, #0	; 0x0
        29bbcc:	1a000001 	bne	29bbd8 <LO_Create(void)+0x30>
        29bbd0:	e1a00006 	mov	r0, r6
        29bbd4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        29bbd8:	e2845f77 	add	r5, r4, #476	; 0x1dc
        29bbdc:	e1a02007 	mov	r2, r7
        29bbe0:	e1a00004 	mov	r0, r4
        29bbe4:	e3a01000 	mov	r1, #0	; 0x0
        29bbe8:	eb64639a 	bl	1bb4a58 <$memset>
        29bbec:	e1a01005 	mov	r1, r5
        29bbf0:	e1a00004 	mov	r0, r4
        29bbf4:	ebffffd2 	bl	29bb44 <ComposeTrace__FP13tag_wapx_typeiT2P14tag_WORD_TRACE+0x84>
        29bbf8:	e3a00e32 	mov	r0, #800	; 0x320
        29bbfc:	eb5f4eee 	bl	1a6f7bc <$HWRMemoryAlloc(unsigned long)>
        29bc00:	e5840028 	str	r0, [r4, #40]
        29bc04:	e3300000 	teq	r0, #0	; 0x0
        29bc08:	1a000002 	bne	29bc18 <LO_Create(void)+0x70>
        29bc0c:	e1a00004 	mov	r0, r4
        29bc10:	eb5f4eea 	bl	1a6f7c0 <$HWRMemoryFree(void *)>
        29bc14:	eaffffed 	b	29bbd0 <LO_Create(void)+0x28>
        29bc18:	e3a02e32 	mov	r2, #800	; 0x320
        29bc1c:	e3a01000 	mov	r1, #0	; 0x0
        29bc20:	eb64638c 	bl	1bb4a58 <$memset>
        29bc24:	e1a00004 	mov	r0, r4
        29bc28:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: LO_HowManyChunks(void *, tag_LOWOBJ *)
 * Address: 0029bc2c
 */
LO_HowManyChunks(void *, tag_LOWOBJ *) {
    /*
        29bc2c:	e2803f77 	add	r3, r0, #476	; 0x1dc
        29bc30:	e5d10006 	ldrb	r0, [r1, #6]
        29bc34:	e5d1c004 	ldrb	ip, [r1, #4]
        29bc38:	e33c0000 	teq	ip, #0	; 0x0
        29bc3c:	01a0f00e 	moveq	pc, lr
        29bc40:	e3a02001 	mov	r2, #1	; 0x1
        29bc44:	e35c0001 	cmp	ip, #1	; 0x1
        29bc48:	b1a0f00e 	movlt	pc, lr
        29bc4c:	e5911030 	ldr	r1, [r1, #48]
        29bc50:	e0611201 	rsb	r1, r1, r1, lsl #4
        29bc54:	e0831101 	add	r1, r3, r1, lsl #2
        29bc58:	e5d1c006 	ldrb	ip, [r1, #6]
        29bc5c:	e08c0000 	add	r0, ip, r0
        29bc60:	e2822001 	add	r2, r2, #1	; 0x1
        29bc64:	e5d1c004 	ldrb	ip, [r1, #4]
        29bc68:	e15c0002 	cmp	ip, r2
        29bc6c:	aafffff6 	bge	29bc4c <LO_HowManyChunks(void *, tag_LOWOBJ *)+0x20>
        29bc70:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: LO_GetRealChunkInd(void *, tag_CHUNK *, tag_wapx_type *, tag_LOWOBJ *, int)
 * Address: 0029bc74
 */
LO_GetRealChunkInd(void *, tag_CHUNK *, tag_wapx_type *, tag_LOWOBJ *, int) {
    /*
        29bc74:	e1a0c00d 	mov	ip, sp
        29bc78:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        29bc7c:	e24cb004 	sub	fp, ip, #4	; 0x4
        29bc80:	e1a06001 	mov	r6, r1
        29bc84:	e1a05002 	mov	r5, r2
        29bc88:	e1a04003 	mov	r4, r3
        29bc8c:	e3a08000 	mov	r8, #0	; 0x0
        29bc90:	e3e01000 	mvn	r1, #0	; 0x0
        29bc94:	e2803f77 	add	r3, r0, #476	; 0x1dc
        29bc98:	e59b9004 	ldr	r9, [fp, #4]
        29bc9c:	e3590000 	cmp	r9, #0	; 0x0
        29bca0:	da000016 	ble	29bd00 <LO_GetRealChunkInd(void *, tag_CHUNK *, tag_wapx_type *, tag_LOWOBJ *, int)+0x8c>
        29bca4:	e5d42004 	ldrb	r2, [r4, #4]
        29bca8:	e3320000 	teq	r2, #0	; 0x0
        29bcac:	1a000003 	bne	29bcc0 <LO_GetRealChunkInd(void *, tag_CHUNK *, tag_wapx_type *, tag_LOWOBJ *, int)+0x4c>
        29bcb0:	e5d40006 	ldrb	r0, [r4, #6]
        29bcb4:	e1500009 	cmp	r0, r9
        29bcb8:	aa000012 	bge	29bd08 <LO_GetRealChunkInd(void *, tag_CHUNK *, tag_wapx_type *, tag_LOWOBJ *, int)+0x94>
        29bcbc:	ea00000f 	b	29bd00 <LO_GetRealChunkInd(void *, tag_CHUNK *, tag_wapx_type *, tag_LOWOBJ *, int)+0x8c>
        29bcc0:	e5d48006 	ldrb	r8, [r4, #6]
        29bcc4:	e1580009 	cmp	r8, r9
        29bcc8:	aa00000e 	bge	29bd08 <LO_GetRealChunkInd(void *, tag_CHUNK *, tag_wapx_type *, tag_LOWOBJ *, int)+0x94>
        29bccc:	e3a00001 	mov	r0, #1	; 0x1
        29bcd0:	e3520001 	cmp	r2, #1	; 0x1
        29bcd4:	ba000009 	blt	29bd00 <LO_GetRealChunkInd(void *, tag_CHUNK *, tag_wapx_type *, tag_LOWOBJ *, int)+0x8c>
        29bcd8:	e5b4c030 	ldr	ip, [r4, #48]!
        29bcdc:	e06cc20c 	rsb	ip, ip, ip, lsl #4
        29bce0:	e083410c 	add	r4, r3, ip, lsl #2
        29bce4:	e5d4c006 	ldrb	ip, [r4, #6]
        29bce8:	e08c8008 	add	r8, ip, r8
        29bcec:	e1580009 	cmp	r8, r9
        29bcf0:	aa000004 	bge	29bd08 <LO_GetRealChunkInd(void *, tag_CHUNK *, tag_wapx_type *, tag_LOWOBJ *, int)+0x94>
        29bcf4:	e2800001 	add	r0, r0, #1	; 0x1
        29bcf8:	e1500002 	cmp	r0, r2
        29bcfc:	dafffff5 	ble	29bcd8 <LO_GetRealChunkInd(void *, tag_CHUNK *, tag_wapx_type *, tag_LOWOBJ *, int)+0x64>
        29bd00:	e1a00001 	mov	r0, r1
        29bd04:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        29bd08:	e3e0a000 	mvn	sl, #0	; 0x0
        29bd0c:	e594000c 	ldr	r0, [r4, #12]
        29bd10:	e5947008 	ldr	r7, [r4, #8]
        29bd14:	e1500007 	cmp	r0, r7
        29bd18:	ba000015 	blt	29bd74 <LO_GetRealChunkInd(void *, tag_CHUNK *, tag_wapx_type *, tag_LOWOBJ *, int)+0x100>
        29bd1c:	e5940008 	ldr	r0, [r4, #8]
        29bd20:	e1300007 	teq	r0, r7
        29bd24:	1a000004 	bne	29bd3c <LO_GetRealChunkInd(void *, tag_CHUNK *, tag_wapx_type *, tag_LOWOBJ *, int)+0xc8>
        29bd28:	e0670187 	rsb	r0, r7, r7, lsl #3
        29bd2c:	e0850100 	add	r0, r5, r0, lsl #2
        29bd30:	e5900018 	ldr	r0, [r0, #24]
        29bd34:	e3500000 	cmp	r0, #0	; 0x0
        29bd38:	ba000009 	blt	29bd64 <LO_GetRealChunkInd(void *, tag_CHUNK *, tag_wapx_type *, tag_LOWOBJ *, int)+0xf0>
        29bd3c:	e0670187 	rsb	r0, r7, r7, lsl #3
        29bd40:	e0850100 	add	r0, r5, r0, lsl #2
        29bd44:	e5900018 	ldr	r0, [r0, #24]
        29bd48:	eb5f4e9d 	bl	1a6f7c4 <$HWRAbs(int)>
        29bd4c:	e130000a 	teq	r0, sl
        29bd50:	0a000003 	beq	29bd64 <LO_GetRealChunkInd(void *, tag_CHUNK *, tag_wapx_type *, tag_LOWOBJ *, int)+0xf0>
        29bd54:	e1a0a000 	mov	sl, r0
        29bd58:	e2888001 	add	r8, r8, #1	; 0x1
        29bd5c:	e1380009 	teq	r8, r9
        29bd60:	0a000003 	beq	29bd74 <LO_GetRealChunkInd(void *, tag_CHUNK *, tag_wapx_type *, tag_LOWOBJ *, int)+0x100>
        29bd64:	e2877001 	add	r7, r7, #1	; 0x1
        29bd68:	e594000c 	ldr	r0, [r4, #12]
        29bd6c:	e1500007 	cmp	r0, r7
        29bd70:	aaffffe9 	bge	29bd1c <LO_GetRealChunkInd(void *, tag_CHUNK *, tag_wapx_type *, tag_LOWOBJ *, int)+0xa8>
        29bd74:	e08a010a 	add	r0, sl, sl, lsl #2
        29bd78:	e080028a 	add	r0, r0, sl, lsl #5
        29bd7c:	e0860100 	add	r0, r6, r0, lsl #2
        29bd80:	e5100014 	ldr	r0, [r0, -#20]
        29bd84:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: LO_Destroy(void *)
 * Address: 0029bd88
 */
LO_Destroy(void *) {
    /*
        29bd88:	e1a0c00d 	mov	ip, sp
        29bd8c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        29bd90:	e24cb004 	sub	fp, ip, #4	; 0x4
        29bd94:	e1a04000 	mov	r4, r0
        29bd98:	e5900028 	ldr	r0, [r0, #40]
        29bd9c:	eb5f4e87 	bl	1a6f7c0 <$HWRMemoryFree(void *)>
        29bda0:	e1a00004 	mov	r0, r4
        29bda4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        29bda8:	ea5f4e84 	b	1a6f7c0 <$HWRMemoryFree(void *)>
    */
}

/**
 * Symbol: LO_Clear(void *)
 * Address: 0029bdac
 */
LO_Clear(void *) {
    /*
        29bdac:	e3300000 	teq	r0, #0	; 0x0
        29bdb0:	03a00000 	moveq	r0, #0	; 0x0
        29bdb4:	01a0f00e 	moveq	pc, lr
        29bdb8:	e1a0c00d 	mov	ip, sp
        29bdbc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        29bdc0:	e24cb004 	sub	fp, ip, #4	; 0x4
        29bdc4:	e1a04000 	mov	r4, r0
        29bdc8:	e2806f77 	add	r6, r0, #476	; 0x1dc
        29bdcc:	e3a0202c 	mov	r2, #44	; 0x2c
        29bdd0:	e2822b12 	add	r2, r2, #18432	; 0x4800
        29bdd4:	e3a01000 	mov	r1, #0	; 0x0
        29bdd8:	e5905028 	ldr	r5, [r0, #40]
        29bddc:	eb64631d 	bl	1bb4a58 <$memset>
        29bde0:	e1a00005 	mov	r0, r5
        29bde4:	e3a02e32 	mov	r2, #800	; 0x320
        29bde8:	e3a01000 	mov	r1, #0	; 0x0
        29bdec:	e5845028 	str	r5, [r4, #40]
        29bdf0:	eb646318 	bl	1bb4a58 <$memset>
        29bdf4:	e1a01006 	mov	r1, r6
        29bdf8:	e1a00004 	mov	r0, r4
        29bdfc:	ebffff50 	bl	29bb44 <ComposeTrace__FP13tag_wapx_typeiT2P14tag_WORD_TRACE+0x84>
        29be00:	e3a00001 	mov	r0, #1	; 0x1
        29be04:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: LO_Add__FPvP13tag_wapx_typeUiiT4T3T4
 * Address: 0029be08
 */
void globals::LO_Add() {
    /*
        29be08:	e1a0c00d 	mov	ip, sp
        29be0c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        29be10:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        29be14:	e24cb014 	sub	fp, ip, #20	; 0x14
        29be18:	e1a04001 	mov	r4, r1
        29be1c:	e1a05003 	mov	r5, r3
        29be20:	e59b9014 	ldr	r9, [fp, #20]
        29be24:	e24dd020 	sub	sp, sp, #32	; 0x20
        29be28:	e1a06000 	mov	r6, r0
        29be2c:	e280cf77 	add	ip, r0, #476	; 0x1dc
        29be30:	e58dc018 	str	ip, [sp, #24]
        29be34:	e5900000 	ldr	r0, [r0]
        29be38:	e3500f4b 	cmp	r0, #300	; 0x12c
        29be3c:	ba000001 	blt	29be48 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x40>
        29be40:	e3e00000 	mvn	r0, #0	; 0x0
        29be44:	ea000149 	b	29c370 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x568>
        29be48:	e5960008 	ldr	r0, [r6, #8]
        29be4c:	e58d0000 	str	r0, [sp]
        29be50:	e59b200c 	ldr	r2, [fp, #12]
        29be54:	e1300002 	teq	r0, r2
        29be58:	0a00005a 	beq	29bfc8 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x1c0>
        29be5c:	e28d2004 	add	r2, sp, #4	; 0x4
        29be60:	e286100c 	add	r1, r6, #12	; 0xc
        29be64:	e1a00001 	mov	r0, r1
        29be68:	e8b11008 	ldmia	r1!, {r3, ip}
        29be6c:	e8a21008 	stmia	r2!, {r3, ip}
        29be70:	e891100a 	ldmia	r1, {r1, r3, ip}
        29be74:	e882100a 	stmia	r2, {r1, r3, ip}
        29be78:	e59b200c 	ldr	r2, [fp, #12]
        29be7c:	e252ce51 	subs	ip, r2, #1296	; 0x510
        29be80:	a35c0004 	cmpge	ip, #4	; 0x4
        29be84:	02861f43 	addeq	r1, r6, #268	; 0x10c
        29be88:	0a000048 	beq	29bfb0 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x1a8>
        29be8c:	ca000023 	bgt	29bf20 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x118>
        29be90:	e3520f96 	cmp	r2, #600	; 0x258
        29be94:	028610a8 	addeq	r1, r6, #168	; 0xa8
        29be98:	0a000044 	beq	29bfb0 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x1a8>
        29be9c:	ca000011 	bgt	29bee8 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0xe0>
        29bea0:	e3520f4b 	cmp	r2, #300	; 0x12c
        29bea4:	0286106c 	addeq	r1, r6, #108	; 0x6c
        29bea8:	0a000040 	beq	29bfb0 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x1a8>
        29beac:	ca000006 	bgt	29becc <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0xc4>
        29beb0:	e3320064 	teq	r2, #100	; 0x64
        29beb4:	02861044 	addeq	r1, r6, #68	; 0x44
        29beb8:	0a00003c 	beq	29bfb0 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x1a8>
        29bebc:	e33200c8 	teq	r2, #200	; 0xc8
        29bec0:	1affffde 	bne	29be40 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x38>
        29bec4:	e2861058 	add	r1, r6, #88	; 0x58
        29bec8:	ea000038 	b	29bfb0 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x1a8>
        29becc:	e3320e19 	teq	r2, #400	; 0x190
        29bed0:	02861080 	addeq	r1, r6, #128	; 0x80
        29bed4:	0a000035 	beq	29bfb0 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x1a8>
        29bed8:	e3320f7d 	teq	r2, #500	; 0x1f4
        29bedc:	1affffd7 	bne	29be40 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x38>
        29bee0:	e2861094 	add	r1, r6, #148	; 0x94
        29bee4:	ea000031 	b	29bfb0 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x1a8>
        29bee8:	e3320faf 	teq	r2, #700	; 0x2bc
        29beec:	028610bc 	addeq	r1, r6, #188	; 0xbc
        29bef0:	0a00002e 	beq	29bfb0 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x1a8>
        29bef4:	e3320e32 	teq	r2, #800	; 0x320
        29bef8:	028610d0 	addeq	r1, r6, #208	; 0xd0
        29befc:	0a00002b 	beq	29bfb0 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x1a8>
        29bf00:	e242cd11 	sub	ip, r2, #1088	; 0x440
        29bf04:	e33c000c 	teq	ip, #12	; 0xc
        29bf08:	028610e4 	addeq	r1, r6, #228	; 0xe4
        29bf0c:	0a000027 	beq	29bfb0 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x1a8>
        29bf10:	e3320e4b 	teq	r2, #1200	; 0x4b0
        29bf14:	1affffc9 	bne	29be40 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x38>
        29bf18:	e28610f8 	add	r1, r6, #248	; 0xf8
        29bf1c:	ea000023 	b	29bfb0 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x1a8>
        29bf20:	e252cc07 	subs	ip, r2, #1792	; 0x700
        29bf24:	a35c0008 	cmpge	ip, #8	; 0x8
        29bf28:	02861e17 	addeq	r1, r6, #368	; 0x170
        29bf2c:	0a00001f 	beq	29bfb0 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x1a8>
        29bf30:	ca00000f 	bgt	29bf74 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x16c>
        29bf34:	e242ce57 	sub	ip, r2, #1392	; 0x570
        29bf38:	e33c0008 	teq	ip, #8	; 0x8
        29bf3c:	02861e12 	addeq	r1, r6, #288	; 0x120
        29bf40:	0a00001a 	beq	29bfb0 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x1a8>
        29bf44:	e242ce5d 	sub	ip, r2, #1488	; 0x5d0
        29bf48:	e33c000c 	teq	ip, #12	; 0xc
        29bf4c:	02861f4d 	addeq	r1, r6, #308	; 0x134
        29bf50:	0a000016 	beq	29bfb0 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x1a8>
        29bf54:	e3320d19 	teq	r2, #1600	; 0x640
        29bf58:	02861f52 	addeq	r1, r6, #328	; 0x148
        29bf5c:	0a000013 	beq	29bfb0 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x1a8>
        29bf60:	e242ce6a 	sub	ip, r2, #1696	; 0x6a0
        29bf64:	e33c0004 	teq	ip, #4	; 0x4
        29bf68:	1affffb4 	bne	29be40 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x38>
        29bf6c:	e2861f57 	add	r1, r6, #348	; 0x15c
        29bf70:	ea00000e 	b	29bfb0 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x1a8>
        29bf74:	e242ce76 	sub	ip, r2, #1888	; 0x760
        29bf78:	e33c000c 	teq	ip, #12	; 0xc
        29bf7c:	02861f61 	addeq	r1, r6, #388	; 0x184
        29bf80:	0a00000a 	beq	29bfb0 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x1a8>
        29bf84:	e3320e7d 	teq	r2, #2000	; 0x7d0
        29bf88:	02861f66 	addeq	r1, r6, #408	; 0x198
        29bf8c:	0a000007 	beq	29bfb0 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x1a8>
        29bf90:	e242ce83 	sub	ip, r2, #2096	; 0x830
        29bf94:	e33c0004 	teq	ip, #4	; 0x4
        29bf98:	02861f6b 	addeq	r1, r6, #428	; 0x1ac
        29bf9c:	0a000003 	beq	29bfb0 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x1a8>
        29bfa0:	e242ce89 	sub	ip, r2, #2192	; 0x890
        29bfa4:	e33c0008 	teq	ip, #8	; 0x8
        29bfa8:	1affffa4 	bne	29be40 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x38>
        29bfac:	e2861d07 	add	r1, r6, #448	; 0x1c0
        29bfb0:	e8b11008 	ldmia	r1!, {r3, ip}
        29bfb4:	e8a01008 	stmia	r0!, {r3, ip}
        29bfb8:	e891100a 	ldmia	r1, {r1, r3, ip}
        29bfbc:	e880100a 	stmia	r0, {r1, r3, ip}
        29bfc0:	e59b200c 	ldr	r2, [fp, #12]
        29bfc4:	e5862008 	str	r2, [r6, #8]
        29bfc8:	e5960030 	ldr	r0, [r6, #48]
        29bfcc:	e3300000 	teq	r0, #0	; 0x0
        29bfd0:	0affff9a 	beq	29be40 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x38>
        29bfd4:	e2400001 	sub	r0, r0, #1	; 0x1
        29bfd8:	e5860030 	str	r0, [r6, #48]
        29bfdc:	e596a034 	ldr	sl, [r6, #52]
        29bfe0:	e06a020a 	rsb	r0, sl, sl, lsl #4
        29bfe4:	e59dc018 	ldr	ip, [sp, #24]
        29bfe8:	e08c7100 	add	r7, ip, r0, lsl #2
        29bfec:	e5971030 	ldr	r1, [r7, #48]
        29bff0:	e3710001 	cmn	r1, #1	; 0x1
        29bff4:	0a000006 	beq	29c014 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x20c>
        29bff8:	e3e03000 	mvn	r3, #0	; 0x0
        29bffc:	e0612201 	rsb	r2, r1, r1, lsl #4
        29c000:	e59dc018 	ldr	ip, [sp, #24]
        29c004:	e08c2102 	add	r2, ip, r2, lsl #2
        29c008:	e5a2302c 	str	r3, [r2, #44]!
        29c00c:	e586103c 	str	r1, [r6, #60]
        29c010:	e5861034 	str	r1, [r6, #52]
        29c014:	e5961000 	ldr	r1, [r6]
        29c018:	e2811001 	add	r1, r1, #1	; 0x1
        29c01c:	e5861000 	str	r1, [r6]
        29c020:	e596100c 	ldr	r1, [r6, #12]
        29c024:	e2811001 	add	r1, r1, #1	; 0x1
        29c028:	e586100c 	str	r1, [r6, #12]
        29c02c:	e3310001 	teq	r1, #1	; 0x1
        29c030:	1a000004 	bne	29c048 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x240>
        29c034:	e586a014 	str	sl, [r6, #20]
        29c038:	e3e01000 	mvn	r1, #0	; 0x0
        29c03c:	e586a010 	str	sl, [r6, #16]
        29c040:	e58d101c 	str	r1, [sp, #28]
        29c044:	ea000002 	b	29c054 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x24c>
        29c048:	e5961014 	ldr	r1, [r6, #20]
        29c04c:	e58d101c 	str	r1, [sp, #28]
        29c050:	e586a014 	str	sl, [r6, #20]
        29c054:	e586a018 	str	sl, [r6, #24]
        29c058:	e596100c 	ldr	r1, [r6, #12]
        29c05c:	e2411001 	sub	r1, r1, #1	; 0x1
        29c060:	e586101c 	str	r1, [r6, #28]
        29c064:	e59b200c 	ldr	r2, [fp, #12]
        29c068:	e59dc018 	ldr	ip, [sp, #24]
        29c06c:	e78c2100 	str	r2, [ip, r0, lsl #2]
        29c070:	e2877008 	add	r7, r7, #8	; 0x8
        29c074:	e8870220 	stmia	r7, {r5, r9}
        29c078:	e2477008 	sub	r7, r7, #8	; 0x8
        29c07c:	e24dd008 	sub	sp, sp, #8	; 0x8
        29c080:	e3a00000 	mov	r0, #0	; 0x0
        29c084:	e58d0004 	str	r0, [sp, #4]
        29c088:	e3e00000 	mvn	r0, #0	; 0x0
        29c08c:	e1a08005 	mov	r8, r5
        29c090:	e1550009 	cmp	r5, r9
        29c094:	e58d0000 	str	r0, [sp]
        29c098:	ca000014 	bgt	29c0f0 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x2e8>
        29c09c:	e1380005 	teq	r8, r5
        29c0a0:	1a000004 	bne	29c0b8 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x2b0>
        29c0a4:	e0680188 	rsb	r0, r8, r8, lsl #3
        29c0a8:	e0840100 	add	r0, r4, r0, lsl #2
        29c0ac:	e5900018 	ldr	r0, [r0, #24]
        29c0b0:	e3500000 	cmp	r0, #0	; 0x0
        29c0b4:	ba00000a 	blt	29c0e4 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x2dc>
        29c0b8:	e0680188 	rsb	r0, r8, r8, lsl #3
        29c0bc:	e0840100 	add	r0, r4, r0, lsl #2
        29c0c0:	e5900018 	ldr	r0, [r0, #24]
        29c0c4:	eb5f4dbe 	bl	1a6f7c4 <$HWRAbs(int)>
        29c0c8:	e59d1000 	ldr	r1, [sp]
        29c0cc:	e1300001 	teq	r0, r1
        29c0d0:	0a000003 	beq	29c0e4 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x2dc>
        29c0d4:	e58d0000 	str	r0, [sp]
        29c0d8:	e59d0004 	ldr	r0, [sp, #4]
        29c0dc:	e2800001 	add	r0, r0, #1	; 0x1
        29c0e0:	e58d0004 	str	r0, [sp, #4]
        29c0e4:	e2888001 	add	r8, r8, #1	; 0x1
        29c0e8:	e1580009 	cmp	r8, r9
        29c0ec:	daffffea 	ble	29c09c <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x294>
        29c0f0:	e59d0004 	ldr	r0, [sp, #4]
        29c0f4:	e5c70006 	strb	r0, [r7, #6]
        29c0f8:	e28dd008 	add	sp, sp, #8	; 0x8
        29c0fc:	e0650185 	rsb	r0, r5, r5, lsl #3
        29c100:	e7941100 	ldr	r1, [r4, r0, lsl #2]
        29c104:	e5871010 	str	r1, [r7, #16]
        29c108:	e0691189 	rsb	r1, r9, r9, lsl #3
        29c10c:	e7941101 	ldr	r1, [r4, r1, lsl #2]
        29c110:	e5871014 	str	r1, [r7, #20]
        29c114:	e59b1018 	ldr	r1, [fp, #24]
        29c118:	e5871028 	str	r1, [r7, #40]
        29c11c:	e5961020 	ldr	r1, [r6, #32]
        29c120:	e3310000 	teq	r1, #0	; 0x0
        29c124:	0a000006 	beq	29c144 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x33c>
        29c128:	e2411001 	sub	r1, r1, #1	; 0x1
        29c12c:	e5c71005 	strb	r1, [r7, #5]
        29c130:	e5961020 	ldr	r1, [r6, #32]
        29c134:	e2811001 	add	r1, r1, #1	; 0x1
        29c138:	e2866020 	add	r6, r6, #32	; 0x20
        29c13c:	e8860082 	stmia	r6, {r1, r7}
        29c140:	e2466020 	sub	r6, r6, #32	; 0x20
        29c144:	e0840100 	add	r0, r4, r0, lsl #2
        29c148:	e5901010 	ldr	r1, [r0, #16]
        29c14c:	e1a03001 	mov	r3, r1
        29c150:	e5900014 	ldr	r0, [r0, #20]
        29c154:	e1a02000 	mov	r2, r0
        29c158:	e285e001 	add	lr, r5, #1	; 0x1
        29c15c:	e15e0009 	cmp	lr, r9
        29c160:	ca000010 	bgt	29c1a8 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x3a0>
        29c164:	e06ec18e 	rsb	ip, lr, lr, lsl #3
        29c168:	e084510c 	add	r5, r4, ip, lsl #2
        29c16c:	e595c010 	ldr	ip, [r5, #16]
        29c170:	e15c0003 	cmp	ip, r3
        29c174:	b1a0300c 	movlt	r3, ip
        29c178:	ba000001 	blt	29c184 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x37c>
        29c17c:	e15c0001 	cmp	ip, r1
        29c180:	c1a0100c 	movgt	r1, ip
        29c184:	e5b5c014 	ldr	ip, [r5, #20]!
        29c188:	e15c0002 	cmp	ip, r2
        29c18c:	b1a0200c 	movlt	r2, ip
        29c190:	ba000001 	blt	29c19c <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x394>
        29c194:	e15c0000 	cmp	ip, r0
        29c198:	c1a0000c 	movgt	r0, ip
        29c19c:	e28ee001 	add	lr, lr, #1	; 0x1
        29c1a0:	e15e0009 	cmp	lr, r9
        29c1a4:	daffffee 	ble	29c164 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x35c>
        29c1a8:	e5870024 	str	r0, [r7, #36]
        29c1ac:	e5871020 	str	r1, [r7, #32]
        29c1b0:	e587201c 	str	r2, [r7, #28]
        29c1b4:	e5873018 	str	r3, [r7, #24]
        29c1b8:	e59d101c 	ldr	r1, [sp, #28]
        29c1bc:	e3e00000 	mvn	r0, #0	; 0x0
        29c1c0:	e5870030 	str	r0, [r7, #48]
        29c1c4:	e587102c 	str	r1, [r7, #44]
        29c1c8:	e59d101c 	ldr	r1, [sp, #28]
        29c1cc:	e3510000 	cmp	r1, #0	; 0x0
        29c1d0:	ba000004 	blt	29c1e8 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x3e0>
        29c1d4:	e59d101c 	ldr	r1, [sp, #28]
        29c1d8:	e0610201 	rsb	r0, r1, r1, lsl #4
        29c1dc:	e59dc018 	ldr	ip, [sp, #24]
        29c1e0:	e08c0100 	add	r0, ip, r0, lsl #2
        29c1e4:	e5a0a030 	str	sl, [r0, #48]!
        29c1e8:	e59b001c 	ldr	r0, [fp, #28]
        29c1ec:	e5a70034 	str	r0, [r7, #52]!
        29c1f0:	e5960008 	ldr	r0, [r6, #8]
        29c1f4:	e250ce51 	subs	ip, r0, #1296	; 0x510
        29c1f8:	a35c0004 	cmpge	ip, #4	; 0x4
        29c1fc:	02860f43 	addeq	r0, r6, #268	; 0x10c
        29c200:	0a000048 	beq	29c328 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x520>
        29c204:	ca000023 	bgt	29c298 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x490>
        29c208:	e3500f96 	cmp	r0, #600	; 0x258
        29c20c:	028600a8 	addeq	r0, r6, #168	; 0xa8
        29c210:	0a000044 	beq	29c328 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x520>
        29c214:	ca000011 	bgt	29c260 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x458>
        29c218:	e3500f4b 	cmp	r0, #300	; 0x12c
        29c21c:	0286006c 	addeq	r0, r6, #108	; 0x6c
        29c220:	0a000040 	beq	29c328 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x520>
        29c224:	ca000006 	bgt	29c244 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x43c>
        29c228:	e3300064 	teq	r0, #100	; 0x64
        29c22c:	02860044 	addeq	r0, r6, #68	; 0x44
        29c230:	0a00003c 	beq	29c328 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x520>
        29c234:	e33000c8 	teq	r0, #200	; 0xc8
        29c238:	02860058 	addeq	r0, r6, #88	; 0x58
        29c23c:	0a000039 	beq	29c328 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x520>
        29c240:	ea00003d 	b	29c33c <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x534>
        29c244:	e3300e19 	teq	r0, #400	; 0x190
        29c248:	02860080 	addeq	r0, r6, #128	; 0x80
        29c24c:	0a000035 	beq	29c328 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x520>
        29c250:	e3300f7d 	teq	r0, #500	; 0x1f4
        29c254:	02860094 	addeq	r0, r6, #148	; 0x94
        29c258:	0a000032 	beq	29c328 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x520>
        29c25c:	ea000036 	b	29c33c <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x534>
        29c260:	e3300faf 	teq	r0, #700	; 0x2bc
        29c264:	028600bc 	addeq	r0, r6, #188	; 0xbc
        29c268:	0a00002e 	beq	29c328 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x520>
        29c26c:	e3300e32 	teq	r0, #800	; 0x320
        29c270:	028600d0 	addeq	r0, r6, #208	; 0xd0
        29c274:	0a00002b 	beq	29c328 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x520>
        29c278:	e240cd11 	sub	ip, r0, #1088	; 0x440
        29c27c:	e33c000c 	teq	ip, #12	; 0xc
        29c280:	028600e4 	addeq	r0, r6, #228	; 0xe4
        29c284:	0a000027 	beq	29c328 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x520>
        29c288:	e3300e4b 	teq	r0, #1200	; 0x4b0
        29c28c:	028600f8 	addeq	r0, r6, #248	; 0xf8
        29c290:	0a000024 	beq	29c328 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x520>
        29c294:	ea000028 	b	29c33c <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x534>
        29c298:	e250cc07 	subs	ip, r0, #1792	; 0x700
        29c29c:	a35c0008 	cmpge	ip, #8	; 0x8
        29c2a0:	02860e17 	addeq	r0, r6, #368	; 0x170
        29c2a4:	0a00001f 	beq	29c328 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x520>
        29c2a8:	ca00000f 	bgt	29c2ec <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x4e4>
        29c2ac:	e240ce57 	sub	ip, r0, #1392	; 0x570
        29c2b0:	e33c0008 	teq	ip, #8	; 0x8
        29c2b4:	02860e12 	addeq	r0, r6, #288	; 0x120
        29c2b8:	0a00001a 	beq	29c328 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x520>
        29c2bc:	e240ce5d 	sub	ip, r0, #1488	; 0x5d0
        29c2c0:	e33c000c 	teq	ip, #12	; 0xc
        29c2c4:	02860f4d 	addeq	r0, r6, #308	; 0x134
        29c2c8:	0a000016 	beq	29c328 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x520>
        29c2cc:	e3300d19 	teq	r0, #1600	; 0x640
        29c2d0:	02860f52 	addeq	r0, r6, #328	; 0x148
        29c2d4:	0a000013 	beq	29c328 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x520>
        29c2d8:	e240ce6a 	sub	ip, r0, #1696	; 0x6a0
        29c2dc:	e33c0004 	teq	ip, #4	; 0x4
        29c2e0:	02860f57 	addeq	r0, r6, #348	; 0x15c
        29c2e4:	0a00000f 	beq	29c328 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x520>
        29c2e8:	ea000013 	b	29c33c <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x534>
        29c2ec:	e240ce76 	sub	ip, r0, #1888	; 0x760
        29c2f0:	e33c000c 	teq	ip, #12	; 0xc
        29c2f4:	02860f61 	addeq	r0, r6, #388	; 0x184
        29c2f8:	0a00000a 	beq	29c328 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x520>
        29c2fc:	e3300e7d 	teq	r0, #2000	; 0x7d0
        29c300:	02860f66 	addeq	r0, r6, #408	; 0x198
        29c304:	0a000007 	beq	29c328 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x520>
        29c308:	e240ce83 	sub	ip, r0, #2096	; 0x830
        29c30c:	e33c0004 	teq	ip, #4	; 0x4
        29c310:	02860f6b 	addeq	r0, r6, #428	; 0x1ac
        29c314:	0a000003 	beq	29c328 <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x520>
        29c318:	e240ce89 	sub	ip, r0, #2192	; 0x890
        29c31c:	e33c0008 	teq	ip, #8	; 0x8
        29c320:	1a000005 	bne	29c33c <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x534>
        29c324:	e2860d07 	add	r0, r6, #448	; 0x1c0
        29c328:	e286100c 	add	r1, r6, #12	; 0xc
        29c32c:	e8b11008 	ldmia	r1!, {r3, ip}
        29c330:	e8a01008 	stmia	r0!, {r3, ip}
        29c334:	e891100a 	ldmia	r1, {r1, r3, ip}
        29c338:	e880100a 	stmia	r0, {r1, r3, ip}
        29c33c:	e59b200c 	ldr	r2, [fp, #12]
        29c340:	e59d0000 	ldr	r0, [sp]
        29c344:	e1320000 	teq	r2, r0
        29c348:	0a000007 	beq	29c36c <LO_Add__FPvP13tag_wapx_typeUiiT4T3T4+0x564>
        29c34c:	e59d0000 	ldr	r0, [sp]
        29c350:	e5860008 	str	r0, [r6, #8]
        29c354:	e286000c 	add	r0, r6, #12	; 0xc
        29c358:	e28d1004 	add	r1, sp, #4	; 0x4
        29c35c:	e8b11008 	ldmia	r1!, {r3, ip}
        29c360:	e8a01008 	stmia	r0!, {r3, ip}
        29c364:	e891100a 	ldmia	r1, {r1, r3, ip}
        29c368:	e880100a 	stmia	r0, {r1, r3, ip}
        29c36c:	e1a0000a 	mov	r0, sl
        29c370:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: LO_SetWorkClass(void *, unsigned int)
 * Address: 0029c374
 */
LO_SetWorkClass(void *, unsigned int) {
    /*
        29c374:	e1a0c00d 	mov	ip, sp
        29c378:	e92ddff3 	stmdb	sp!, {r0, r1, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        29c37c:	e24cb004 	sub	fp, ip, #4	; 0x4
        29c380:	e24dd034 	sub	sp, sp, #52	; 0x34
        29c384:	e1a01000 	mov	r1, r0
        29c388:	e5903008 	ldr	r3, [r0, #8]
        29c38c:	e51b202c 	ldr	r2, [fp, -#44]
        29c390:	e1330002 	teq	r3, r2
        29c394:	0a000114 	beq	29c7ec <LO_SetWorkClass(void *, unsigned int)+0x478>
        29c398:	e1a0c000 	mov	ip, r0
        29c39c:	e2808044 	add	r8, r0, #68	; 0x44
        29c3a0:	e2807058 	add	r7, r0, #88	; 0x58
        29c3a4:	e280606c 	add	r6, r0, #108	; 0x6c
        29c3a8:	e2805080 	add	r5, r0, #128	; 0x80
        29c3ac:	e2804094 	add	r4, r0, #148	; 0x94
        29c3b0:	e280e0a8 	add	lr, r0, #168	; 0xa8
        29c3b4:	e28020bc 	add	r2, r0, #188	; 0xbc
        29c3b8:	e28090d0 	add	r9, r0, #208	; 0xd0
        29c3bc:	e58d9030 	str	r9, [sp, #48]
        29c3c0:	e28090e4 	add	r9, r0, #228	; 0xe4
        29c3c4:	e58d902c 	str	r9, [sp, #44]
        29c3c8:	e28c90f8 	add	r9, ip, #248	; 0xf8
        29c3cc:	e28caf43 	add	sl, ip, #268	; 0x10c
        29c3d0:	e58d9028 	str	r9, [sp, #40]
        29c3d4:	e28c9e12 	add	r9, ip, #288	; 0x120
        29c3d8:	e58d9020 	str	r9, [sp, #32]
        29c3dc:	e58da024 	str	sl, [sp, #36]
        29c3e0:	e28c9f4d 	add	r9, ip, #308	; 0x134
        29c3e4:	e58d901c 	str	r9, [sp, #28]
        29c3e8:	e28c9f52 	add	r9, ip, #328	; 0x148
        29c3ec:	e58d9018 	str	r9, [sp, #24]
        29c3f0:	e28c9f57 	add	r9, ip, #348	; 0x15c
        29c3f4:	e28cae17 	add	sl, ip, #368	; 0x170
        29c3f8:	e58da010 	str	sl, [sp, #16]
        29c3fc:	e28caf61 	add	sl, ip, #388	; 0x184
        29c400:	e58da00c 	str	sl, [sp, #12]
        29c404:	e28caf66 	add	sl, ip, #408	; 0x198
        29c408:	e58da008 	str	sl, [sp, #8]
        29c40c:	e28caf6b 	add	sl, ip, #428	; 0x1ac
        29c410:	e28c000c 	add	r0, ip, #12	; 0xc
        29c414:	e28ccd07 	add	ip, ip, #448	; 0x1c0
        29c418:	e58da004 	str	sl, [sp, #4]
        29c41c:	e3a0a034 	mov	sl, #52	; 0x34
        29c420:	e28aab02 	add	sl, sl, #2048	; 0x800
        29c424:	e58d9014 	str	r9, [sp, #20]
        29c428:	e28a9064 	add	r9, sl, #100	; 0x64
        29c42c:	e58dc000 	str	ip, [sp]
        29c430:	e253ce51 	subs	ip, r3, #1296	; 0x510
        29c434:	a35c0004 	cmpge	ip, #4	; 0x4
        29c438:	059da024 	ldreq	sl, [sp, #36]
        29c43c:	0a000052 	beq	29c58c <LO_SetWorkClass(void *, unsigned int)+0x218>
        29c440:	ca00002a 	bgt	29c4f0 <LO_SetWorkClass(void *, unsigned int)+0x17c>
        29c444:	e3530f96 	cmp	r3, #600	; 0x258
        29c448:	01a09000 	moveq	r9, r0
        29c44c:	01a0a00e 	moveq	sl, lr
        29c450:	0a00004e 	beq	29c590 <LO_SetWorkClass(void *, unsigned int)+0x21c>
        29c454:	ca000016 	bgt	29c4b4 <LO_SetWorkClass(void *, unsigned int)+0x140>
        29c458:	e3530f4b 	cmp	r3, #300	; 0x12c
        29c45c:	01a09000 	moveq	r9, r0
        29c460:	01a0a006 	moveq	sl, r6
        29c464:	0a000049 	beq	29c590 <LO_SetWorkClass(void *, unsigned int)+0x21c>
        29c468:	ca000008 	bgt	29c490 <LO_SetWorkClass(void *, unsigned int)+0x11c>
        29c46c:	e3330064 	teq	r3, #100	; 0x64
        29c470:	01a0a000 	moveq	sl, r0
        29c474:	01a09008 	moveq	r9, r8
        29c478:	0a000031 	beq	29c544 <LO_SetWorkClass(void *, unsigned int)+0x1d0>
        29c47c:	e33300c8 	teq	r3, #200	; 0xc8
        29c480:	01a0a000 	moveq	sl, r0
        29c484:	01a09007 	moveq	r9, r7
        29c488:	0a00002d 	beq	29c544 <LO_SetWorkClass(void *, unsigned int)+0x1d0>
        29c48c:	ea000043 	b	29c5a0 <LO_SetWorkClass(void *, unsigned int)+0x22c>
        29c490:	e3330e19 	teq	r3, #400	; 0x190
        29c494:	01a0a000 	moveq	sl, r0
        29c498:	01a09005 	moveq	r9, r5
        29c49c:	0a000028 	beq	29c544 <LO_SetWorkClass(void *, unsigned int)+0x1d0>
        29c4a0:	e3330f7d 	teq	r3, #500	; 0x1f4
        29c4a4:	01a0a000 	moveq	sl, r0
        29c4a8:	01a09004 	moveq	r9, r4
        29c4ac:	0a000024 	beq	29c544 <LO_SetWorkClass(void *, unsigned int)+0x1d0>
        29c4b0:	ea00003a 	b	29c5a0 <LO_SetWorkClass(void *, unsigned int)+0x22c>
        29c4b4:	e3330faf 	teq	r3, #700	; 0x2bc
        29c4b8:	01a0a000 	moveq	sl, r0
        29c4bc:	01a09002 	moveq	r9, r2
        29c4c0:	0a00001f 	beq	29c544 <LO_SetWorkClass(void *, unsigned int)+0x1d0>
        29c4c4:	e3330e32 	teq	r3, #800	; 0x320
        29c4c8:	059d9030 	ldreq	r9, [sp, #48]
        29c4cc:	0a00001b 	beq	29c540 <LO_SetWorkClass(void *, unsigned int)+0x1cc>
        29c4d0:	e243cd11 	sub	ip, r3, #1088	; 0x440
        29c4d4:	e33c000c 	teq	ip, #12	; 0xc
        29c4d8:	059d902c 	ldreq	r9, [sp, #44]
        29c4dc:	0a000017 	beq	29c540 <LO_SetWorkClass(void *, unsigned int)+0x1cc>
        29c4e0:	e3330e4b 	teq	r3, #1200	; 0x4b0
        29c4e4:	059d9028 	ldreq	r9, [sp, #40]
        29c4e8:	0a000014 	beq	29c540 <LO_SetWorkClass(void *, unsigned int)+0x1cc>
        29c4ec:	ea00002b 	b	29c5a0 <LO_SetWorkClass(void *, unsigned int)+0x22c>
        29c4f0:	e253cc07 	subs	ip, r3, #1792	; 0x700
        29c4f4:	a35c0008 	cmpge	ip, #8	; 0x8
        29c4f8:	059da010 	ldreq	sl, [sp, #16]
        29c4fc:	0a000022 	beq	29c58c <LO_SetWorkClass(void *, unsigned int)+0x218>
        29c500:	ca000014 	bgt	29c558 <LO_SetWorkClass(void *, unsigned int)+0x1e4>
        29c504:	e243ce57 	sub	ip, r3, #1392	; 0x570
        29c508:	e33c0008 	teq	ip, #8	; 0x8
        29c50c:	059d9020 	ldreq	r9, [sp, #32]
        29c510:	0a00000a 	beq	29c540 <LO_SetWorkClass(void *, unsigned int)+0x1cc>
        29c514:	e243ce5d 	sub	ip, r3, #1488	; 0x5d0
        29c518:	e33c000c 	teq	ip, #12	; 0xc
        29c51c:	059d901c 	ldreq	r9, [sp, #28]
        29c520:	0a000006 	beq	29c540 <LO_SetWorkClass(void *, unsigned int)+0x1cc>
        29c524:	e3330d19 	teq	r3, #1600	; 0x640
        29c528:	059d9018 	ldreq	r9, [sp, #24]
        29c52c:	0a000003 	beq	29c540 <LO_SetWorkClass(void *, unsigned int)+0x1cc>
        29c530:	e243ce6a 	sub	ip, r3, #1696	; 0x6a0
        29c534:	e33c0004 	teq	ip, #4	; 0x4
        29c538:	1a000018 	bne	29c5a0 <LO_SetWorkClass(void *, unsigned int)+0x22c>
        29c53c:	e59d9014 	ldr	r9, [sp, #20]
        29c540:	e1a0a000 	mov	sl, r0
        29c544:	e8ba1008 	ldmia	sl!, {r3, ip}
        29c548:	e8a91008 	stmia	r9!, {r3, ip}
        29c54c:	e89a1408 	ldmia	sl, {r3, sl, ip}
        29c550:	e8891408 	stmia	r9, {r3, sl, ip}
        29c554:	ea000011 	b	29c5a0 <LO_SetWorkClass(void *, unsigned int)+0x22c>
        29c558:	e243ce76 	sub	ip, r3, #1888	; 0x760
        29c55c:	e33c000c 	teq	ip, #12	; 0xc
        29c560:	059da00c 	ldreq	sl, [sp, #12]
        29c564:	0a000008 	beq	29c58c <LO_SetWorkClass(void *, unsigned int)+0x218>
        29c568:	e3330e7d 	teq	r3, #2000	; 0x7d0
        29c56c:	059da008 	ldreq	sl, [sp, #8]
        29c570:	0a000005 	beq	29c58c <LO_SetWorkClass(void *, unsigned int)+0x218>
        29c574:	e133000a 	teq	r3, sl
        29c578:	059da004 	ldreq	sl, [sp, #4]
        29c57c:	0a000002 	beq	29c58c <LO_SetWorkClass(void *, unsigned int)+0x218>
        29c580:	e1330009 	teq	r3, r9
        29c584:	1a000005 	bne	29c5a0 <LO_SetWorkClass(void *, unsigned int)+0x22c>
        29c588:	e59da000 	ldr	sl, [sp]
        29c58c:	e1a09000 	mov	r9, r0
        29c590:	e8b91008 	ldmia	r9!, {r3, ip}
        29c594:	e8aa1008 	stmia	sl!, {r3, ip}
        29c598:	e8991208 	ldmia	r9, {r3, r9, ip}
        29c59c:	e88a1208 	stmia	sl, {r3, r9, ip}
        29c5a0:	e3a09f45 	mov	r9, #276	; 0x114
        29c5a4:	e2899b01 	add	r9, r9, #1024	; 0x400
        29c5a8:	e51b302c 	ldr	r3, [fp, -#44]
        29c5ac:	e1530009 	cmp	r3, r9
        29c5b0:	05a19008 	streq	r9, [r1, #8]!
        29c5b4:	059da024 	ldreq	sl, [sp, #36]
        29c5b8:	0a000087 	beq	29c7dc <LO_SetWorkClass(void *, unsigned int)+0x468>
        29c5bc:	ca00004c 	bgt	29c6f4 <LO_SetWorkClass(void *, unsigned int)+0x380>
        29c5c0:	e3530f96 	cmp	r3, #600	; 0x258
        29c5c4:	03a02f96 	moveq	r2, #600	; 0x258
        29c5c8:	05a12008 	streq	r2, [r1, #8]!
        29c5cc:	08be1008 	ldmeqia	lr!, {r3, ip}
        29c5d0:	08a01008 	stmeqia	r0!, {r3, ip}
        29c5d4:	089e5008 	ldmeqia	lr, {r3, ip, lr}
        29c5d8:	08805008 	stmeqia	r0, {r3, ip, lr}
        29c5dc:	0a000082 	beq	29c7ec <LO_SetWorkClass(void *, unsigned int)+0x478>
        29c5e0:	ca00002a 	bgt	29c690 <LO_SetWorkClass(void *, unsigned int)+0x31c>
        29c5e4:	e3530f4b 	cmp	r3, #300	; 0x12c
        29c5e8:	03a02f4b 	moveq	r2, #300	; 0x12c
        29c5ec:	05a12008 	streq	r2, [r1, #8]!
        29c5f0:	08b61008 	ldmeqia	r6!, {r3, ip}
        29c5f4:	08a01008 	stmeqia	r0!, {r3, ip}
        29c5f8:	08961048 	ldmeqia	r6, {r3, r6, ip}
        29c5fc:	08801048 	stmeqia	r0, {r3, r6, ip}
        29c600:	0a000079 	beq	29c7ec <LO_SetWorkClass(void *, unsigned int)+0x478>
        29c604:	ca000010 	bgt	29c64c <LO_SetWorkClass(void *, unsigned int)+0x2d8>
        29c608:	e3330064 	teq	r3, #100	; 0x64
        29c60c:	03a02064 	moveq	r2, #100	; 0x64
        29c610:	05a12008 	streq	r2, [r1, #8]!
        29c614:	08b81008 	ldmeqia	r8!, {r3, ip}
        29c618:	08a01008 	stmeqia	r0!, {r3, ip}
        29c61c:	08981108 	ldmeqia	r8, {r3, r8, ip}
        29c620:	08801108 	stmeqia	r0, {r3, r8, ip}
        29c624:	0a000070 	beq	29c7ec <LO_SetWorkClass(void *, unsigned int)+0x478>
        29c628:	e33300c8 	teq	r3, #200	; 0xc8
        29c62c:	03a020c8 	moveq	r2, #200	; 0xc8
        29c630:	05a12008 	streq	r2, [r1, #8]!
        29c634:	08b71008 	ldmeqia	r7!, {r3, ip}
        29c638:	08a01008 	stmeqia	r0!, {r3, ip}
        29c63c:	08971088 	ldmeqia	r7, {r3, r7, ip}
        29c640:	08801088 	stmeqia	r0, {r3, r7, ip}
        29c644:	0a000068 	beq	29c7ec <LO_SetWorkClass(void *, unsigned int)+0x478>
        29c648:	ea000069 	b	29c7f4 <LO_SetWorkClass(void *, unsigned int)+0x480>
        29c64c:	e3330e19 	teq	r3, #400	; 0x190
        29c650:	03a02e19 	moveq	r2, #400	; 0x190
        29c654:	05a12008 	streq	r2, [r1, #8]!
        29c658:	08b51008 	ldmeqia	r5!, {r3, ip}
        29c65c:	08a01008 	stmeqia	r0!, {r3, ip}
        29c660:	08951028 	ldmeqia	r5, {r3, r5, ip}
        29c664:	08801028 	stmeqia	r0, {r3, r5, ip}
        29c668:	0a00005f 	beq	29c7ec <LO_SetWorkClass(void *, unsigned int)+0x478>
        29c66c:	e3330f7d 	teq	r3, #500	; 0x1f4
        29c670:	03a02f7d 	moveq	r2, #500	; 0x1f4
        29c674:	05a12008 	streq	r2, [r1, #8]!
        29c678:	08b41008 	ldmeqia	r4!, {r3, ip}
        29c67c:	08a01008 	stmeqia	r0!, {r3, ip}
        29c680:	08941018 	ldmeqia	r4, {r3, r4, ip}
        29c684:	08801018 	stmeqia	r0, {r3, r4, ip}
        29c688:	0a000057 	beq	29c7ec <LO_SetWorkClass(void *, unsigned int)+0x478>
        29c68c:	ea000058 	b	29c7f4 <LO_SetWorkClass(void *, unsigned int)+0x480>
        29c690:	e3330faf 	teq	r3, #700	; 0x2bc
        29c694:	03a03faf 	moveq	r3, #700	; 0x2bc
        29c698:	05a13008 	streq	r3, [r1, #8]!
        29c69c:	08b21008 	ldmeqia	r2!, {r3, ip}
        29c6a0:	08a01008 	stmeqia	r0!, {r3, ip}
        29c6a4:	0892100c 	ldmeqia	r2, {r2, r3, ip}
        29c6a8:	0880100c 	stmeqia	r0, {r2, r3, ip}
        29c6ac:	0a00004e 	beq	29c7ec <LO_SetWorkClass(void *, unsigned int)+0x478>
        29c6b0:	e3330e32 	teq	r3, #800	; 0x320
        29c6b4:	03a02e32 	moveq	r2, #800	; 0x320
        29c6b8:	05a12008 	streq	r2, [r1, #8]!
        29c6bc:	059d9030 	ldreq	r9, [sp, #48]
        29c6c0:	0a000029 	beq	29c76c <LO_SetWorkClass(void *, unsigned int)+0x3f8>
        29c6c4:	e3a0204c 	mov	r2, #76	; 0x4c
        29c6c8:	e2822b01 	add	r2, r2, #1024	; 0x400
        29c6cc:	e1330002 	teq	r3, r2
        29c6d0:	05a12008 	streq	r2, [r1, #8]!
        29c6d4:	059d902c 	ldreq	r9, [sp, #44]
        29c6d8:	0a000023 	beq	29c76c <LO_SetWorkClass(void *, unsigned int)+0x3f8>
        29c6dc:	e3330e4b 	teq	r3, #1200	; 0x4b0
        29c6e0:	03a02e4b 	moveq	r2, #1200	; 0x4b0
        29c6e4:	05a12008 	streq	r2, [r1, #8]!
        29c6e8:	059d9028 	ldreq	r9, [sp, #40]
        29c6ec:	0a00001e 	beq	29c76c <LO_SetWorkClass(void *, unsigned int)+0x3f8>
        29c6f0:	ea00003f 	b	29c7f4 <LO_SetWorkClass(void *, unsigned int)+0x480>
        29c6f4:	e3a02fc2 	mov	r2, #776	; 0x308
        29c6f8:	e2822b01 	add	r2, r2, #1024	; 0x400
        29c6fc:	e1530002 	cmp	r3, r2
        29c700:	05a12008 	streq	r2, [r1, #8]!
        29c704:	059da010 	ldreq	sl, [sp, #16]
        29c708:	0a000033 	beq	29c7dc <LO_SetWorkClass(void *, unsigned int)+0x468>
        29c70c:	ca00001b 	bgt	29c780 <LO_SetWorkClass(void *, unsigned int)+0x40c>
        29c710:	e3a02f5e 	mov	r2, #376	; 0x178
        29c714:	e2822b01 	add	r2, r2, #1024	; 0x400
        29c718:	e1330002 	teq	r3, r2
        29c71c:	05a12008 	streq	r2, [r1, #8]!
        29c720:	059d9020 	ldreq	r9, [sp, #32]
        29c724:	0a000010 	beq	29c76c <LO_SetWorkClass(void *, unsigned int)+0x3f8>
        29c728:	e3a02f77 	mov	r2, #476	; 0x1dc
        29c72c:	e2822b01 	add	r2, r2, #1024	; 0x400
        29c730:	e1330002 	teq	r3, r2
        29c734:	05a12008 	streq	r2, [r1, #8]!
        29c738:	059d901c 	ldreq	r9, [sp, #28]
        29c73c:	0a00000a 	beq	29c76c <LO_SetWorkClass(void *, unsigned int)+0x3f8>
        29c740:	e3330d19 	teq	r3, #1600	; 0x640
        29c744:	03a02d19 	moveq	r2, #1600	; 0x640
        29c748:	05a12008 	streq	r2, [r1, #8]!
        29c74c:	059d9018 	ldreq	r9, [sp, #24]
        29c750:	0a000005 	beq	29c76c <LO_SetWorkClass(void *, unsigned int)+0x3f8>
        29c754:	e3a02fa9 	mov	r2, #676	; 0x2a4
        29c758:	e2822b01 	add	r2, r2, #1024	; 0x400
        29c75c:	e1330002 	teq	r3, r2
        29c760:	1a000023 	bne	29c7f4 <LO_SetWorkClass(void *, unsigned int)+0x480>
        29c764:	e5a12008 	str	r2, [r1, #8]!
        29c768:	e59d9014 	ldr	r9, [sp, #20]
        29c76c:	e8b91008 	ldmia	r9!, {r3, ip}
        29c770:	e8a01008 	stmia	r0!, {r3, ip}
        29c774:	e8991208 	ldmia	r9, {r3, r9, ip}
        29c778:	e8801208 	stmia	r0, {r3, r9, ip}
        29c77c:	ea00001a 	b	29c7ec <LO_SetWorkClass(void *, unsigned int)+0x478>
        29c780:	e3a02fdb 	mov	r2, #876	; 0x36c
        29c784:	e2822b01 	add	r2, r2, #1024	; 0x400
        29c788:	e1330002 	teq	r3, r2
        29c78c:	05a12008 	streq	r2, [r1, #8]!
        29c790:	059da00c 	ldreq	sl, [sp, #12]
        29c794:	0a000010 	beq	29c7dc <LO_SetWorkClass(void *, unsigned int)+0x468>
        29c798:	e3330e7d 	teq	r3, #2000	; 0x7d0
        29c79c:	03a02e7d 	moveq	r2, #2000	; 0x7d0
        29c7a0:	05a12008 	streq	r2, [r1, #8]!
        29c7a4:	059da008 	ldreq	sl, [sp, #8]
        29c7a8:	0a00000b 	beq	29c7dc <LO_SetWorkClass(void *, unsigned int)+0x468>
        29c7ac:	e3a02034 	mov	r2, #52	; 0x34
        29c7b0:	e2822b02 	add	r2, r2, #2048	; 0x800
        29c7b4:	e1330002 	teq	r3, r2
        29c7b8:	05a12008 	streq	r2, [r1, #8]!
        29c7bc:	059da004 	ldreq	sl, [sp, #4]
        29c7c0:	0a000005 	beq	29c7dc <LO_SetWorkClass(void *, unsigned int)+0x468>
        29c7c4:	e3a02098 	mov	r2, #152	; 0x98
        29c7c8:	e2822b02 	add	r2, r2, #2048	; 0x800
        29c7cc:	e1330002 	teq	r3, r2
        29c7d0:	1a000007 	bne	29c7f4 <LO_SetWorkClass(void *, unsigned int)+0x480>
        29c7d4:	e5a12008 	str	r2, [r1, #8]!
        29c7d8:	e59da000 	ldr	sl, [sp]
        29c7dc:	e8ba1008 	ldmia	sl!, {r3, ip}
        29c7e0:	e8a01008 	stmia	r0!, {r3, ip}
        29c7e4:	e89a1408 	ldmia	sl, {r3, sl, ip}
        29c7e8:	e8801408 	stmia	r0, {r3, sl, ip}
        29c7ec:	e3a00001 	mov	r0, #1	; 0x1
        29c7f0:	ea000000 	b	29c7f8 <LO_SetWorkClass(void *, unsigned int)+0x484>
        29c7f4:	e3a00000 	mov	r0, #0	; 0x0
        29c7f8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: LO_GetWorkClassID(void *)
 * Address: 0029c7fc
 */
LO_GetWorkClassID(void *) {
    /*
        29c7fc:	e5900008 	ldr	r0, [r0, #8]
        29c800:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: LO_PickFirst(void *, tag_LOWOBJ **)
 * Address: 0029c804
 */
LO_PickFirst(void *, tag_LOWOBJ **) {
    /*
        29c804:	e92d4000 	stmdb	sp!, {lr}
        29c808:	e1a02000 	mov	r2, r0
        29c80c:	e3a00001 	mov	r0, #1	; 0x1
        29c810:	e282cf77 	add	ip, r2, #476	; 0x1dc
        29c814:	e3a03000 	mov	r3, #0	; 0x0
        29c818:	e592e00c 	ldr	lr, [r2, #12]
        29c81c:	e33e0000 	teq	lr, #0	; 0x0
        29c820:	03a00000 	moveq	r0, #0	; 0x0
        29c824:	05813000 	streq	r3, [r1]
        29c828:	08bd8000 	ldmeqia	sp!, {pc}
        29c82c:	e592e010 	ldr	lr, [r2, #16]
        29c830:	e582301c 	str	r3, [r2, #28]
        29c834:	e582e018 	str	lr, [r2, #24]
        29c838:	e5922010 	ldr	r2, [r2, #16]
        29c83c:	e0622202 	rsb	r2, r2, r2, lsl #4
        29c840:	e08c2102 	add	r2, ip, r2, lsl #2
        29c844:	e5812000 	str	r2, [r1]
        29c848:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: LO_PickNext(void *, tag_LOWOBJ **)
 * Address: 0029c84c
 */
LO_PickNext(void *, tag_LOWOBJ **) {
    /*
        29c84c:	e92d40f0 	stmdb	sp!, {r4, r5, r6, r7, lr}
        29c850:	e3a04001 	mov	r4, #1	; 0x1
        29c854:	e1a02000 	mov	r2, r0
        29c858:	e2803f77 	add	r3, r0, #476	; 0x1dc
        29c85c:	e590e018 	ldr	lr, [r0, #24]
        29c860:	e06ec20e 	rsb	ip, lr, lr, lsl #4
        29c864:	e083c10c 	add	ip, r3, ip, lsl #2
        29c868:	e5dc5004 	ldrb	r5, [ip, #4]
        29c86c:	e3a06000 	mov	r6, #0	; 0x0
        29c870:	e3550000 	cmp	r5, #0	; 0x0
        29c874:	1a000004 	bne	29c88c <LO_PickNext(void *, tag_LOWOBJ **)+0x40>
        29c878:	e5923014 	ldr	r3, [r2, #20]
        29c87c:	e13e0003 	teq	lr, r3
        29c880:	15bc3030 	ldrne	r3, [ip, #48]!
        29c884:	1a000014 	bne	29c8dc <LO_PickNext(void *, tag_LOWOBJ **)+0x90>
        29c888:	ea00001c 	b	29c900 <LO_PickNext(void *, tag_LOWOBJ **)+0xb4>
        29c88c:	e3a0c000 	mov	ip, #0	; 0x0
        29c890:	da00000c 	ble	29c8c8 <LO_PickNext(void *, tag_LOWOBJ **)+0x7c>
        29c894:	e06ee20e 	rsb	lr, lr, lr, lsl #4
        29c898:	e083e10e 	add	lr, r3, lr, lsl #2
        29c89c:	e59ee030 	ldr	lr, [lr, #48]
        29c8a0:	e582e018 	str	lr, [r2, #24]
        29c8a4:	e592701c 	ldr	r7, [r2, #28]
        29c8a8:	e2877001 	add	r7, r7, #1	; 0x1
        29c8ac:	e28cc001 	add	ip, ip, #1	; 0x1
        29c8b0:	e06e520e 	rsb	r5, lr, lr, lsl #4
        29c8b4:	e0835105 	add	r5, r3, r5, lsl #2
        29c8b8:	e582701c 	str	r7, [r2, #28]
        29c8bc:	e5d55004 	ldrb	r5, [r5, #4]
        29c8c0:	e155000c 	cmp	r5, ip
        29c8c4:	cafffff2 	bgt	29c894 <LO_PickNext(void *, tag_LOWOBJ **)+0x48>
        29c8c8:	e06ec20e 	rsb	ip, lr, lr, lsl #4
        29c8cc:	e083310c 	add	r3, r3, ip, lsl #2
        29c8d0:	e5933030 	ldr	r3, [r3, #48]
        29c8d4:	e3730001 	cmn	r3, #1	; 0x1
        29c8d8:	0a000008 	beq	29c900 <LO_PickNext(void *, tag_LOWOBJ **)+0xb4>
        29c8dc:	e5823018 	str	r3, [r2, #24]
        29c8e0:	e592c01c 	ldr	ip, [r2, #28]
        29c8e4:	e28cc001 	add	ip, ip, #1	; 0x1
        29c8e8:	e5a2c01c 	str	ip, [r2, #28]!
        29c8ec:	e0632203 	rsb	r2, r3, r3, lsl #4
        29c8f0:	e0800102 	add	r0, r0, r2, lsl #2
        29c8f4:	e2800f77 	add	r0, r0, #476	; 0x1dc
        29c8f8:	e5810000 	str	r0, [r1]
        29c8fc:	ea000001 	b	29c908 <LO_PickNext(void *, tag_LOWOBJ **)+0xbc>
        29c900:	e3a04000 	mov	r4, #0	; 0x0
        29c904:	e5816000 	str	r6, [r1]
        29c908:	e1a00004 	mov	r0, r4
        29c90c:	e8bd80f0 	ldmia	sp!, {r4, r5, r6, r7, pc}
    */
}

/**
 * Symbol: LO_PickDirectInd(void *, int, tag_LOWOBJ **)
 * Address: 0029c910
 */
LO_PickDirectInd(void *, int, tag_LOWOBJ **) {
    /*
        29c910:	e3a03001 	mov	r3, #1	; 0x1
        29c914:	e1a0c000 	mov	ip, r0
        29c918:	e2800f77 	add	r0, r0, #476	; 0x1dc
        29c91c:	e3510000 	cmp	r1, #0	; 0x0
        29c920:	ba000004 	blt	29c938 <LO_PickDirectInd(void *, int, tag_LOWOBJ **)+0x28>
        29c924:	e59cc000 	ldr	ip, [ip]
        29c928:	e151000c 	cmp	r1, ip
        29c92c:	b0611201 	rsblt	r1, r1, r1, lsl #4
        29c930:	b0800101 	addlt	r0, r0, r1, lsl #2
        29c934:	ba000001 	blt	29c940 <LO_PickDirectInd(void *, int, tag_LOWOBJ **)+0x30>
        29c938:	e3a03000 	mov	r3, #0	; 0x0
        29c93c:	e3a00000 	mov	r0, #0	; 0x0
        29c940:	e5820000 	str	r0, [r2]
        29c944:	e1a00003 	mov	r0, r3
        29c948:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: L2Arc__FP13tag_wapx_typeiT2
 * Address: 002a7d9c
 */
void globals::L2Arc() {
    /*
        2a7d9c:	e0622182 	rsb	r2, r2, r2, lsl #3
        2a7da0:	e0802102 	add	r2, r0, r2, lsl #2
        2a7da4:	e0611181 	rsb	r1, r1, r1, lsl #3
        2a7da8:	e0800101 	add	r0, r0, r1, lsl #2
        2a7dac:	e5923010 	ldr	r3, [r2, #16]
        2a7db0:	e5901010 	ldr	r1, [r0, #16]
        2a7db4:	e0433001 	sub	r3, r3, r1
        2a7db8:	e0010393 	mul	r1, r3, r3
        2a7dbc:	e5922014 	ldr	r2, [r2, #20]
        2a7dc0:	e5900014 	ldr	r0, [r0, #20]
        2a7dc4:	e0422000 	sub	r2, r2, r0
        2a7dc8:	e0201292 	mla	r0, r2, r2, r1
        2a7dcc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: LoadVocAndData__FPcN21PPvN24PPPcT7
 * Address: 002ba340
 */
void globals::LoadVocAndData() {
    /*
        2ba340:	e1a0c00d 	mov	ip, sp
        2ba344:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2ba348:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ba34c:	e1a05000 	mov	r5, r0
        2ba350:	e1a04003 	mov	r4, r3
        2ba354:	e3a03000 	mov	r3, #0	; 0x0
        2ba358:	e3a07000 	mov	r7, #0	; 0x0
        2ba35c:	e99b0103 	ldmib	fp, {r0, r1, r8}
        2ba360:	e59b6010 	ldr	r6, [fp, #16]
        2ba364:	e7847103 	str	r7, [r4, r3, lsl #2]
        2ba368:	e2833001 	add	r3, r3, #1	; 0x1
        2ba36c:	e1a03803 	mov	r3, r3, lsl #16
        2ba370:	e1a03843 	mov	r3, r3, asr #16
        2ba374:	e353000f 	cmp	r3, #15	; 0xf
        2ba378:	bafffff9 	blt	2ba364 <LoadVocAndData__FPcN21PPvN24PPPcT7+0x24>
        2ba37c:	e3a03001 	mov	r3, #1	; 0x1
        2ba380:	e92d0008 	stmdb	sp!, {r3}
        2ba384:	e1a03001 	mov	r3, r1
        2ba388:	e1a0c000 	mov	ip, r0
        2ba38c:	e1a00002 	mov	r0, r2
        2ba390:	e3a01001 	mov	r1, #1	; 0x1
        2ba394:	e1a0200c 	mov	r2, ip
        2ba398:	eb619f75 	bl	1b22174 <$ReadDteResource__FPcsPPvT3Ui>
        2ba39c:	e28dd004 	add	sp, sp, #4	; 0x4
        2ba3a0:	e3e09000 	mvn	r9, #0	; 0x0
        2ba3a4:	e3300000 	teq	r0, #0	; 0x0
        2ba3a8:	1a000004 	bne	2ba3c0 <LoadVocAndData__FPcN21PPvN24PPPcT7+0x80>
        2ba3ac:	e1a01004 	mov	r1, r4
        2ba3b0:	e1a00005 	mov	r0, r5
        2ba3b4:	eb618a95 	bl	1b1ce10 <$ReadVocResource(unsigned char *, void **)>
        2ba3b8:	e3300000 	teq	r0, #0	; 0x0
        2ba3bc:	0a000001 	beq	2ba3c8 <LoadVocAndData__FPcN21PPvN24PPPcT7+0x88>
        2ba3c0:	e1a00009 	mov	r0, r9
        2ba3c4:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2ba3c8:	e5887000 	str	r7, [r8]
        2ba3cc:	e5867000 	str	r7, [r6]
        2ba3d0:	e5940000 	ldr	r0, [r4]
        2ba3d4:	e3300000 	teq	r0, #0	; 0x0
        2ba3d8:	0a000008 	beq	2ba400 <LoadVocAndData__FPcN21PPvN24PPPcT7+0xc0>
        2ba3dc:	eb5ed4f3 	bl	1a6f7b0 <$HWRMemoryLockHandle(unsigned long)>
        2ba3e0:	e3300000 	teq	r0, #0	; 0x0
        2ba3e4:	0a000005 	beq	2ba400 <LoadVocAndData__FPcN21PPvN24PPPcT7+0xc0>
        2ba3e8:	e5901000 	ldr	r1, [r0]
        2ba3ec:	e5881000 	str	r1, [r8]
        2ba3f0:	e590003c 	ldr	r0, [r0, #60]
        2ba3f4:	e5860000 	str	r0, [r6]
        2ba3f8:	e5940000 	ldr	r0, [r4]
        2ba3fc:	eb5ed4ec 	bl	1a6f7b4 <$HWRMemoryUnlockHandle(unsigned long)>
        2ba400:	e1a00007 	mov	r0, r7
        2ba404:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: LastElemAnyKindFor(SPEC_TYPE *, unsigned char)
 * Address: 002bc180
 */
LastElemAnyKindFor(SPEC_TYPE *, unsigned char) {
    /*
        2bc180:	e20110ff 	and	r1, r1, #255	; 0xff
        2bc184:	e3300000 	teq	r0, #0	; 0x0
        2bc188:	01a0f00e 	moveq	pc, lr
        2bc18c:	e5d02000 	ldrb	r2, [r0]
        2bc190:	e3320010 	teq	r2, #16	; 0x10
        2bc194:	03a00000 	moveq	r0, #0	; 0x0
        2bc198:	01a0f00e 	moveq	pc, lr
        2bc19c:	e1320001 	teq	r2, r1
        2bc1a0:	15900010 	ldrne	r0, [r0, #16]
        2bc1a4:	13300000 	teqne	r0, #0	; 0x0
        2bc1a8:	1afffff7 	bne	2bc18c <LastElemAnyKindFor(SPEC_TYPE *, unsigned char)+0xc>
        2bc1ac:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: look_like_circle__FP9SPEC_TYPEN21Ps
 * Address: 002bc6a0
 */
void globals::look_like_circle() {
    /*
        2bc6a0:	e92d4010 	stmdb	sp!, {r4, lr}
        2bc6a4:	e5d2c000 	ldrb	ip, [r2]
        2bc6a8:	e3a0e000 	mov	lr, #0	; 0x0
        2bc6ac:	e33c0001 	teq	ip, #1	; 0x1
        2bc6b0:	05d1c000 	ldreqb	ip, [r1]
        2bc6b4:	033c0001 	teqeq	ip, #1	; 0x1
        2bc6b8:	1a00001b 	bne	2bc72c <look_like_circle__FP9SPEC_TYPEN21Ps+0x8c>
        2bc6bc:	e5900004 	ldr	r0, [r0, #4]
        2bc6c0:	e1a00840 	mov	r0, r0, asr #16
        2bc6c4:	e7934080 	ldr	r4, [r3, r0, lsl #1]
        2bc6c8:	e1a04844 	mov	r4, r4, asr #16
        2bc6cc:	e5910004 	ldr	r0, [r1, #4]
        2bc6d0:	e1a00840 	mov	r0, r0, asr #16
        2bc6d4:	e7930080 	ldr	r0, [r3, r0, lsl #1]
        2bc6d8:	e1a00840 	mov	r0, r0, asr #16
        2bc6dc:	e1540000 	cmp	r4, r0
        2bc6e0:	a5920004 	ldrge	r0, [r2, #4]
        2bc6e4:	a1a00840 	movge	r0, r0, asr #16
        2bc6e8:	a7930080 	ldrge	r0, [r3, r0, lsl #1]
        2bc6ec:	a1a00840 	movge	r0, r0, asr #16
        2bc6f0:	a1540000 	cmpge	r4, r0
        2bc6f4:	a3a0c096 	movge	ip, #150	; 0x96
        2bc6f8:	a28ccc27 	addge	ip, ip, #9984	; 0x2700
        2bc6fc:	a154000c 	cmpge	r4, ip
        2bc700:	ba000009 	blt	2bc72c <look_like_circle__FP9SPEC_TYPEN21Ps+0x8c>
        2bc704:	e3a010e6 	mov	r1, #230	; 0xe6
        2bc708:	e2811c27 	add	r1, r1, #9984	; 0x2700
        2bc70c:	e3a00001 	mov	r0, #1	; 0x1
        2bc710:	e1540001 	cmp	r4, r1
        2bc714:	c8bd8010 	ldmgtia	sp!, {r4, pc}
        2bc718:	e284206a 	add	r2, r4, #106	; 0x6a
        2bc71c:	e2422b0a 	sub	r2, r2, #10240	; 0x2800
        2bc720:	e0411004 	sub	r1, r1, r4
        2bc724:	e1520001 	cmp	r2, r1
        2bc728:	a8bd8010 	ldmgeia	sp!, {r4, pc}
        2bc72c:	e1a0000e 	mov	r0, lr
        2bc730:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: lk_cross(low_type *)
 * Address: 002ca074
 */
lk_cross(low_type *) {
    /*
        2ca074:	e1a0c00d 	mov	ip, sp
        2ca078:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2ca07c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ca080:	e1a04000 	mov	r4, r0
        2ca084:	eb613adf 	bl	1b18c08 <$analize_sticks(low_type *)>
        2ca088:	e1a00004 	mov	r0, r4
        2ca08c:	eb613adc 	bl	1b18c04 <$analize_circles(low_type *)>
        2ca090:	e1a00004 	mov	r0, r4
        2ca094:	eb613f01 	bl	1b19ca0 <$del_inside_circles(low_type *)>
        2ca098:	e3a00000 	mov	r0, #0	; 0x0
        2ca09c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: LockRAMPDF(unsigned char *)
 * Address: 002d4ddc
 */
LockRAMPDF(unsigned char *) {
    /*
        2d4ddc:	e1a0c00d 	mov	ip, sp
        2d4de0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2d4de4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d4de8:	e1b04000 	movs	r4, r0
        2d4dec:	e3a07000 	mov	r7, #0	; 0x0
        2d4df0:	0a000003 	beq	2d4e04 <LockRAMPDF(unsigned char *)+0x28>
        2d4df4:	e1a00004 	mov	r0, r4
        2d4df8:	eb614d82 	bl	1b28408 <$LockRamParaData(unsigned long)>
        2d4dfc:	e1b06000 	movs	r6, r0
        2d4e00:	1a000001 	bne	2d4e0c <LockRAMPDF(unsigned char *)+0x30>
        2d4e04:	e1a00007 	mov	r0, r7
        2d4e08:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2d4e0c:	e3a00010 	mov	r0, #16	; 0x10
        2d4e10:	eb5e6a69 	bl	1a6f7bc <$HWRMemoryAlloc(unsigned long)>
        2d4e14:	e1b05000 	movs	r5, r0
        2d4e18:	1a000002 	bne	2d4e28 <LockRAMPDF(unsigned char *)+0x4c>
        2d4e1c:	e1a00004 	mov	r0, r4
        2d4e20:	eb614d85 	bl	1b2843c <$UnlockRamParaData(unsigned long)>
        2d4e24:	eafffff6 	b	2d4e04 <LockRAMPDF(unsigned char *)+0x28>
        2d4e28:	e1a01006 	mov	r1, r6
        2d4e2c:	e1a00005 	mov	r0, r5
        2d4e30:	e3a02010 	mov	r2, #16	; 0x10
        2d4e34:	eb637f06 	bl	1bb4a54 <$memmove>
        2d4e38:	e2860010 	add	r0, r6, #16	; 0x10
        2d4e3c:	e5850000 	str	r0, [r5]
        2d4e40:	e590100c 	ldr	r1, [r0, #12]
        2d4e44:	e0811006 	add	r1, r1, r6
        2d4e48:	e2811010 	add	r1, r1, #16	; 0x10
        2d4e4c:	e5851004 	str	r1, [r5, #4]
        2d4e50:	e590000c 	ldr	r0, [r0, #12]
        2d4e54:	e0801006 	add	r1, r0, r6
        2d4e58:	e595000c 	ldr	r0, [r5, #12]
        2d4e5c:	e1a00840 	mov	r0, r0, asr #16
        2d4e60:	e0810080 	add	r0, r1, r0, lsl #1
        2d4e64:	e2800010 	add	r0, r0, #16	; 0x10
        2d4e68:	e5850008 	str	r0, [r5, #8]
        2d4e6c:	e1a00005 	mov	r0, r5
        2d4e70:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: LoadPermObject(TStoreWrapper *, unsigned long, CDynamicArray **)
 * Address: 002df454
 */
LoadPermObject(TStoreWrapper *, unsigned long, CDynamicArray **) {
    /*
        2df454:	e1a0c00d 	mov	ip, sp
        2df458:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2df45c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2df460:	e1a04002 	mov	r4, r2
        2df464:	e24ddf96 	sub	sp, sp, #600	; 0x258
        2df468:	e1a03002 	mov	r3, r2
        2df46c:	e1a02001 	mov	r2, r1
        2df470:	e1a01000 	mov	r1, r0
        2df474:	e1a0000d 	mov	r0, sp
        2df478:	eb5d7258 	bl	1a3bde0 <TStoreObjectReader::$__ct(TStoreWrapper *, unsigned long, CDynamicArray **)>
        2df47c:	e3a00000 	mov	r0, #0	; 0x0
        2df480:	e52d006c 	str	r0, [sp, -#108]!
        2df484:	e28d0008 	add	r0, sp, #8	; 0x8
        2df488:	eb634d39 	bl	1bb2974 <$setjmp>
        2df48c:	e3300000 	teq	r0, #0	; 0x0
        2df490:	1a00000c 	bne	2df4c8 <LoadPermObject(TStoreWrapper *, unsigned long, CDynamicArray **)+0x74>
        2df494:	e1a0000d 	mov	r0, sp
        2df498:	eb6402f7 	bl	1be007c <$AddExceptionHandler>
        2df49c:	e28d006c 	add	r0, sp, #108	; 0x6c
        2df4a0:	eb5d8b2e 	bl	1a42160 <TStoreObjectReader::$Read(void)>
        2df4a4:	e1a04000 	mov	r4, r0
        2df4a8:	e1a0000d 	mov	r0, sp
        2df4ac:	eb640701 	bl	1be10b8 <$ExitHandler>
        2df4b0:	e28dd06c 	add	sp, sp, #108	; 0x6c
        2df4b4:	e1a0000d 	mov	r0, sp
        2df4b8:	e3a01000 	mov	r1, #0	; 0x0
        2df4bc:	eb5d7652 	bl	1a3ce0c <TStoreObjectReader::$__dt(void)>
        2df4c0:	e1a00004 	mov	r0, r4
        2df4c4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2df4c8:	e3340000 	teq	r4, #0	; 0x0
        2df4cc:	15940000 	ldrne	r0, [r4]
        2df4d0:	13300000 	teqne	r0, #0	; 0x0
        2df4d4:	13a01001 	movne	r1, #1	; 0x1
        2df4d8:	1b641361 	blne	1be4264 <CDynamicArray::$__dt(void)>
        2df4dc:	e28d006c 	add	r0, sp, #108	; 0x6c
        2df4e0:	e3a01000 	mov	r1, #0	; 0x0
        2df4e4:	eb5d7648 	bl	1a3ce0c <TStoreObjectReader::$__dt(void)>
        2df4e8:	e1a0000d 	mov	r0, sp
        2df4ec:	eb640b18 	bl	1be2154 <$NextHandler>
        2df4f0:	eafffff4 	b	2df4c8 <LoadPermObject(TStoreWrapper *, unsigned long, CDynamicArray **)+0x74>
    */
}

/**
 * Symbol: LoadFontTable(void)
 * Address: 002e2070
 */
LoadFontTable(void) {
    /*
        2e2070:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: log2
 * Address: 002e2d34
 */
void globals::log2() {
    /*
        2e2d34:	e1a0c00d 	mov	ip, sp
        2e2d38:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2e2d3c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e2d40:	e92d0003 	stmdb	sp!, {r0, r1}
        2e2d44:	ecbd8102 	ldfd	f0, [sp], #8
        2e2d48:	ed2d8102 	stfd	f0, [sp, -#8]!
        2e2d4c:	e8bd0003 	ldmia	sp!, {r0, r1}
        2e2d50:	eb634737 	bl	1bb4a34 <$log>
        2e2d54:	ed9f9101 	ldfd	f1, [pc, #4]
        2e2d58:	ee400181 	dvfd	f0, f0, f1
        2e2d5c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        2e2d60:	3fe62e42 	swicc	0x00e62e42
        2e2d64:	fefa39ef 	cdp2	9, 15, cr3, cr10, cr15, {7}
    */
}

/**
 * Symbol: ldexp
 * Address: 002e2f34
 */
void globals::ldexp() {
    /*
        2e2f34:	e92d0003 	stmdb	sp!, {r0, r1}
        2e2f38:	ecbd8102 	ldfd	f0, [sp], #8
        2e2f3c:	e3a00902 	mov	r0, #32768	; 0x8000
        2e2f40:	e2400001 	sub	r0, r0, #1	; 0x1
        2e2f44:	e1520000 	cmp	r2, r0
        2e2f48:	ca000003 	bgt	2e2f5c <ldexp+0x28>
        2e2f4c:	e3a00001 	mov	r0, #1	; 0x1
        2e2f50:	e2400902 	sub	r0, r0, #32768	; 0x8000
        2e2f54:	e1520000 	cmp	r2, r0
        2e2f58:	aa000000 	bge	2e2f60 <ldexp+0x2c>
        2e2f5c:	e1a02000 	mov	r2, r0
        2e2f60:	ed2d8102 	stfd	f0, [sp, -#8]!
        2e2f64:	e8bd0003 	ldmia	sp!, {r0, r1}
        2e2f68:	ea634ac6 	b	1bb5a88 <$scalb>
    */
}

/**
 * Symbol: lgamma
 * Address: 002f7314
 */
void globals::lgamma() {
    /*
        2f7314:	e1a0c00d 	mov	ip, sp
        2f7318:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2f731c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f7320:	ed6dc209 	sfm	f4, 3, [sp, -#36]!
        2f7324:	e92d0003 	stmdb	sp!, {r0, r1}
        2f7328:	ecbdc102 	ldfd	f4, [sp], #8
        2f732c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f7330:	e1a0000d 	mov	r0, sp
        2f7334:	eb62f1ae 	bl	1bb39f4 <$feholdexcept>
        2f7338:	ed2dc102 	stfd	f4, [sp, -#8]!
        2f733c:	e8bd0003 	ldmia	sp!, {r0, r1}
        2f7340:	eb642fa6 	bl	1c031e0 <$__fpclassifyd>
        2f7344:	e3300000 	teq	r0, #0	; 0x0
        2f7348:	0a000005 	beq	2f7364 <lgamma+0x50>
        2f734c:	e3300001 	teq	r0, #1	; 0x1
        2f7350:	0a00000c 	beq	2f7388 <lgamma+0x74>
        2f7354:	e3300002 	teq	r0, #2	; 0x2
        2f7358:	0a000003 	beq	2f736c <lgamma+0x58>
        2f735c:	e3300063 	teq	r0, #99	; 0x63
        2f7360:	1a000017 	bne	2f73c4 <lgamma+0xb0>
        2f7364:	ee14418a 	mufd	f4, f4, #2.0
        2f7368:	ea000011 	b	2f73b4 <lgamma+0xa0>
        2f736c:	e3a00001 	mov	r0, #1	; 0x1
        2f7370:	eb62f1a0 	bl	1bb39f8 <$feraiseexcept>
        2f7374:	e1a0000d 	mov	r0, sp
        2f7378:	eb62f5a3 	bl	1bb4a0c <$feupdateenv>
        2f737c:	e3a0002a 	mov	r0, #42	; 0x2a
        2f7380:	eb0086cc 	bl	318eb8 <NANsane>
        2f7384:	ea000024 	b	2f741c <lgamma+0x108>
        2f7388:	eed4f118 	cmfe	f4, #0.0
        2f738c:	da000003 	ble	2f73a0 <lgamma+0x8c>
        2f7390:	eb642f93 	bl	1c031e4 <$__inf>
        2f7394:	ee00c180 	mvfd	f4, f0
        2f7398:	e3a00004 	mov	r0, #4	; 0x4
        2f739c:	ea000003 	b	2f73b0 <lgamma+0x9c>
        2f73a0:	e3a0002a 	mov	r0, #42	; 0x2a
        2f73a4:	eb0086c3 	bl	318eb8 <NANsane>
        2f73a8:	ee00c180 	mvfd	f4, f0
        2f73ac:	e3a00001 	mov	r0, #1	; 0x1
        2f73b0:	eb62f190 	bl	1bb39f8 <$feraiseexcept>
        2f73b4:	e1a0000d 	mov	r0, sp
        2f73b8:	eb62f593 	bl	1bb4a0c <$feupdateenv>
        2f73bc:	ee008184 	mvfd	f0, f4
        2f73c0:	ea000015 	b	2f741c <lgamma+0x108>
        2f73c4:	eed4f118 	cmfe	f4, #0.0
        2f73c8:	baffffe7 	blt	2f736c <lgamma+0x58>
        2f73cc:	e59f4020 	ldr	r4, [pc, #20]	; 2f73f4 <lgamma+0xe0>
        2f73d0:	ed948176 	ldfd	f0, [r4, #472]
        2f73d4:	eed4f110 	cmfe	f4, f0
        2f73d8:	da000006 	ble	2f73f8 <lgamma+0xe4>
        2f73dc:	e3a00004 	mov	r0, #4	; 0x4
        2f73e0:	eb62f184 	bl	1bb39f8 <$feraiseexcept>
        2f73e4:	e1a0000d 	mov	r0, sp
        2f73e8:	eb62f587 	bl	1bb4a0c <$feupdateenv>
        2f73ec:	eb642f7c 	bl	1c031e4 <$__inf>
        2f73f0:	ea000009 	b	2f741c <lgamma+0x108>
        2f73f4:	00380884 	eoreqs	r0, r8, r4, lsl #17
        2f73f8:	ed94817a 	ldfd	f0, [r4, #488]
        2f73fc:	eed4f110 	cmfe	f4, f0
        2f7400:	ca000007 	bgt	2f7424 <lgamma+0x110>
        2f7404:	e1a0000d 	mov	r0, sp
        2f7408:	eb62f57f 	bl	1bb4a0c <$feupdateenv>
        2f740c:	ed2dc102 	stfd	f4, [sp, -#8]!
        2f7410:	e8bd0003 	ldmia	sp!, {r0, r1}
        2f7414:	eb62f586 	bl	1bb4a34 <$log>
        2f7418:	ee108180 	mnfd	f0, f0
        2f741c:	ed5bc20f 	lfm	f4, 3, [fp, -#60]
        2f7420:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2f7424:	ed9f810e 	ldfd	f0, [pc, #56]
        2f7428:	ee00e189 	mvfd	f6, #1.0
        2f742c:	ee00d188 	mvfd	f5, #0.0
        2f7430:	e59f6034 	ldr	r6, [pc, #34]	; 2f746c <lgamma+0x158>
        2f7434:	e59f5034 	ldr	r5, [pc, #34]	; 2f7470 <lgamma+0x15c>
        2f7438:	eed4f110 	cmfe	f4, f0
        2f743c:	ca00003c 	bgt	2f7534 <lgamma+0x220>
        2f7440:	ed94817c 	ldfd	f0, [r4, #496]
        2f7444:	eed4f110 	cmfe	f4, f0
        2f7448:	aa000009 	bge	2f7474 <lgamma+0x160>
        2f744c:	ed2dc102 	stfd	f4, [sp, -#8]!
        2f7450:	e8bd0003 	ldmia	sp!, {r0, r1}
        2f7454:	eb62f576 	bl	1bb4a34 <$log>
        2f7458:	ee109180 	mnfd	f1, f0
        2f745c:	ee008184 	mvfd	f0, f4
        2f7460:	ea000006 	b	2f7480 <lgamma+0x16c>
        2f7464:	3ff80000 	swicc	0x00f80000
        2f7468:	00000000 	andeq	r0, r0, r0
        2f746c:	00380914 	eoreqs	r0, r8, r4, lsl r9
        2f7470:	00380954 	eoreqs	r0, r8, r4, asr r9
        2f7474:	ee009185 	mvfd	f1, f5
        2f7478:	ee24018e 	sufd	f0, f4, #0.5
        2f747c:	ee20018e 	sufd	f0, f0, #0.5
        2f7480:	eed4f11e 	cmfe	f4, #0.5
        2f7484:	da000002 	ble	2f7494 <lgamma+0x180>
        2f7488:	ed94a17c 	ldfd	f2, [r4, #496]
        2f748c:	eed4f112 	cmfe	f4, f2
        2f7490:	ba000013 	blt	2f74e4 <lgamma+0x1d0>
        2f7494:	e3a00000 	mov	r0, #0	; 0x0
        2f7498:	e59f203c 	ldr	r2, [pc, #3c]	; 2f74dc <lgamma+0x1c8>
        2f749c:	e59f103c 	ldr	r1, [pc, #3c]	; 2f74e0 <lgamma+0x1cc>
        2f74a0:	ee153180 	mufd	f3, f5, f0
        2f74a4:	e0823180 	add	r3, r2, r0, lsl #3
        2f74a8:	ed93a100 	ldfd	f2, [r3]
        2f74ac:	ee035182 	adfd	f5, f3, f2
        2f74b0:	ee163180 	mufd	f3, f6, f0
        2f74b4:	e0813180 	add	r3, r1, r0, lsl #3
        2f74b8:	ed93a100 	ldfd	f2, [r3]
        2f74bc:	ee036182 	adfd	f6, f3, f2
        2f74c0:	e2800001 	add	r0, r0, #1	; 0x1
        2f74c4:	e3500008 	cmp	r0, #8	; 0x8
        2f74c8:	bafffff4 	blt	2f74a0 <lgamma+0x18c>
        2f74cc:	ee452186 	dvfd	f2, f5, f6
        2f74d0:	ee122180 	mufd	f2, f2, f0
        2f74d4:	ed94b100 	ldfd	f3, [r4]
        2f74d8:	ea000012 	b	2f7528 <lgamma+0x214>
        2f74dc:	0038088c 	eoreqs	r0, r8, ip, lsl #17
        2f74e0:	003808cc 	eoreqs	r0, r8, ip, asr #17
        2f74e4:	ee24018e 	sufd	f0, f4, #0.5
        2f74e8:	ee20018e 	sufd	f0, f0, #0.5
        2f74ec:	e3a00000 	mov	r0, #0	; 0x0
        2f74f0:	ee152180 	mufd	f2, f5, f0
        2f74f4:	e0861180 	add	r1, r6, r0, lsl #3
        2f74f8:	ed91b100 	ldfd	f3, [r1]
        2f74fc:	ee025183 	adfd	f5, f2, f3
        2f7500:	ee162180 	mufd	f2, f6, f0
        2f7504:	e0851180 	add	r1, r5, r0, lsl #3
        2f7508:	ed91b100 	ldfd	f3, [r1]
        2f750c:	ee026183 	adfd	f6, f2, f3
        2f7510:	e2800001 	add	r0, r0, #1	; 0x1
        2f7514:	e3500008 	cmp	r0, #8	; 0x8
        2f7518:	bafffff4 	blt	2f74f0 <lgamma+0x1dc>
        2f751c:	ee452186 	dvfd	f2, f5, f6
        2f7520:	ee122180 	mufd	f2, f2, f0
        2f7524:	ed94b122 	ldfd	f3, [r4, #136]
        2f7528:	ee022183 	adfd	f2, f2, f3
        2f752c:	ee120180 	mufd	f0, f2, f0
        2f7530:	ea000048 	b	2f7658 <lgamma+0x344>
        2f7534:	eed4f11c 	cmfe	f4, #4.0
        2f7538:	ca000012 	bgt	2f7588 <lgamma+0x274>
        2f753c:	ee24018a 	sufd	f0, f4, #2.0
        2f7540:	e3a00000 	mov	r0, #0	; 0x0
        2f7544:	ee152180 	mufd	f2, f5, f0
        2f7548:	e0861180 	add	r1, r6, r0, lsl #3
        2f754c:	ed919100 	ldfd	f1, [r1]
        2f7550:	ee025181 	adfd	f5, f2, f1
        2f7554:	ee161180 	mufd	f1, f6, f0
        2f7558:	e0851180 	add	r1, r5, r0, lsl #3
        2f755c:	ed91a100 	ldfd	f2, [r1]
        2f7560:	ee016182 	adfd	f6, f1, f2
        2f7564:	e2800001 	add	r0, r0, #1	; 0x1
        2f7568:	e3500008 	cmp	r0, #8	; 0x8
        2f756c:	bafffff4 	blt	2f7544 <lgamma+0x230>
        2f7570:	ee451186 	dvfd	f1, f5, f6
        2f7574:	ee112180 	mufd	f2, f1, f0
        2f7578:	ed949122 	ldfd	f1, [r4, #136]
        2f757c:	ee021181 	adfd	f1, f2, f1
        2f7580:	ee114180 	mufd	f4, f1, f0
        2f7584:	eaffff8a 	b	2f73b4 <lgamma+0xa0>
        2f7588:	ed9f8116 	ldfd	f0, [pc, #88]
        2f758c:	eed4f110 	cmfe	f4, f0
        2f7590:	ca000018 	bgt	2f75f8 <lgamma+0x2e4>
        2f7594:	ee24118c 	sufd	f1, f4, #4.0
        2f7598:	ee108189 	mnfd	f0, #1.0
        2f759c:	e3a00000 	mov	r0, #0	; 0x0
        2f75a0:	e59f2048 	ldr	r2, [pc, #48]	; 2f75f0 <lgamma+0x2dc>
        2f75a4:	e59f1048 	ldr	r1, [pc, #48]	; 2f75f4 <lgamma+0x2e0>
        2f75a8:	ee153181 	mufd	f3, f5, f1
        2f75ac:	e0823180 	add	r3, r2, r0, lsl #3
        2f75b0:	ed93a100 	ldfd	f2, [r3]
        2f75b4:	ee035182 	adfd	f5, f3, f2
        2f75b8:	ee100181 	mufd	f0, f0, f1
        2f75bc:	e0813180 	add	r3, r1, r0, lsl #3
        2f75c0:	ed93a100 	ldfd	f2, [r3]
        2f75c4:	ee000182 	adfd	f0, f0, f2
        2f75c8:	e2800001 	add	r0, r0, #1	; 0x1
        2f75cc:	e3500008 	cmp	r0, #8	; 0x8
        2f75d0:	bafffff4 	blt	2f75a8 <lgamma+0x294>
        2f75d4:	ee450180 	dvfd	f0, f5, f0
        2f75d8:	ee101181 	mufd	f1, f0, f1
        2f75dc:	ed948144 	ldfd	f0, [r4, #272]
        2f75e0:	ee014180 	adfd	f4, f1, f0
        2f75e4:	eaffff72 	b	2f73b4 <lgamma+0xa0>
        2f75e8:	40280000 	eormi	r0, r8, r0
        2f75ec:	00000000 	andeq	r0, r0, r0
        2f75f0:	0038099c 	mlaeqs	r8, ip, r9, r0
        2f75f4:	003809dc 	ldreqsb	r0, [r8], -ip
        2f75f8:	ed948178 	ldfd	f0, [r4, #480]
        2f75fc:	eed4f110 	cmfe	f4, f0
        2f7600:	ca00000a 	bgt	2f7630 <lgamma+0x31c>
        2f7604:	e59f1054 	ldr	r1, [pc, #54]	; 2f7660 <lgamma+0x34c>
        2f7608:	ed91d10c 	ldfd	f5, [r1, #48]
        2f760c:	ee140184 	mufd	f0, f4, f4
        2f7610:	e3a00000 	mov	r0, #0	; 0x0
        2f7614:	ee452180 	dvfd	f2, f5, f0
        2f7618:	e0812180 	add	r2, r1, r0, lsl #3
        2f761c:	ed929100 	ldfd	f1, [r2]
        2f7620:	ee025181 	adfd	f5, f2, f1
        2f7624:	e2800001 	add	r0, r0, #1	; 0x1
        2f7628:	e3500006 	cmp	r0, #6	; 0x6
        2f762c:	bafffff8 	blt	2f7614 <lgamma+0x300>
        2f7630:	ee455184 	dvfd	f5, f5, f4
        2f7634:	ed2dc102 	stfd	f4, [sp, -#8]!
        2f7638:	e8bd0003 	ldmia	sp!, {r0, r1}
        2f763c:	eb62f4fc 	bl	1bb4a34 <$log>
        2f7640:	ee10218e 	mufd	f2, f0, #0.5
        2f7644:	ed949174 	ldfd	f1, [r4, #464]
        2f7648:	ee211182 	sufd	f1, f1, f2
        2f764c:	ee011185 	adfd	f1, f1, f5
        2f7650:	ee200189 	sufd	f0, f0, #1.0
        2f7654:	ee100184 	mufd	f0, f0, f4
        2f7658:	ee004181 	adfd	f4, f0, f1
        2f765c:	eaffff54 	b	2f73b4 <lgamma+0xa0>
        2f7660:	00380a1c 	eoreqs	r0, r8, ip, lsl sl
    */
}

/**
 * Symbol: LineTo__FlT1
 * Address: 002f7664
 */
void globals::LineTo() {
    /*
        2f7664:	e1a0c00d 	mov	ip, sp
        2f7668:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2f766c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f7670:	e1a05000 	mov	r5, r0
        2f7674:	e1a04001 	mov	r4, r1
        2f7678:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f767c:	eb61604e 	bl	1b4f7bc <$GetCurrentPort(void)>
        2f7680:	e5900040 	ldr	r0, [r0, #64]
        2f7684:	e3300000 	teq	r0, #0	; 0x0
        2f7688:	15b01010 	ldrne	r1, [r0, #16]!
        2f768c:	059f0028 	ldreq	r0, [pc, #28]	; 2f76bc <LineTo__FlT1+0x58>
        2f7690:	05b01010 	ldreq	r1, [r0, #16]!
        2f7694:	e5cd5003 	strb	r5, [sp, #3]
        2f7698:	e1a00445 	mov	r0, r5, asr #8
        2f769c:	e5cd0002 	strb	r0, [sp, #2]
        2f76a0:	e5cd4001 	strb	r4, [sp, #1]
        2f76a4:	e1a00444 	mov	r0, r4, asr #8
        2f76a8:	e5cd0000 	strb	r0, [sp]
        2f76ac:	e59d0000 	ldr	r0, [sp]
        2f76b0:	e1a0e00f 	mov	lr, pc
        2f76b4:	e1a0f001 	mov	pc, r1
        2f76b8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2f76bc:	00380bcc 	eoreqs	r0, r8, ip, asr #23
    */
}

/**
 * Symbol: Line__FlT1
 * Address: 002f76c0
 */
void globals::Line() {
    /*
        2f76c0:	e1a0c00d 	mov	ip, sp
        2f76c4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2f76c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f76cc:	e1a04000 	mov	r4, r0
        2f76d0:	e1a05001 	mov	r5, r1
        2f76d4:	eb616038 	bl	1b4f7bc <$GetCurrentPort(void)>
        2f76d8:	e5901034 	ldr	r1, [r0, #52]
        2f76dc:	e0851841 	add	r1, r5, r1, asr #16
        2f76e0:	e5900036 	ldr	r0, [r0, #54]
        2f76e4:	e0840840 	add	r0, r4, r0, asr #16
        2f76e8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        2f76ec:	ea616462 	b	1b5087c <$LineTo__FlT1>
    */
}

/**
 * Symbol: lk_begin(low_type *)
 * Address: 002f8d68
 */
lk_begin(low_type *) {
    /*
        2f8d68:	e1a0c00d 	mov	ip, sp
        2f8d6c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2f8d70:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f8d74:	e1a04000 	mov	r4, r0
        2f8d78:	e5905040 	ldr	r5, [r0, #64]
        2f8d7c:	eb6083c4 	bl	1b19c94 <$DefLineThresholds(low_type *)>
        2f8d80:	e5941046 	ldr	r1, [r4, #70]
        2f8d84:	e1a01841 	mov	r1, r1, asr #16
        2f8d88:	e1a00005 	mov	r0, r5
        2f8d8c:	eb60902b 	bl	1b1ce40 <$Sort_specl(SPEC_TYPE *, short)>
        2f8d90:	e3a05001 	mov	r5, #1	; 0x1
        2f8d94:	e3300000 	teq	r0, #0	; 0x0
        2f8d98:	1a000007 	bne	2f8dbc <lk_begin(low_type *)+0x54>
        2f8d9c:	e1a00004 	mov	r0, r4
        2f8da0:	eb6087e3 	bl	1b1ad34 <$init_proc_XT_ST_CROSS(low_type *)>
        2f8da4:	e3300000 	teq	r0, #0	; 0x0
        2f8da8:	1a000003 	bne	2f8dbc <lk_begin(low_type *)+0x54>
        2f8dac:	e1a00004 	mov	r0, r4
        2f8db0:	eb609014 	bl	1b1ce08 <$process_ZZ(low_type *)>
        2f8db4:	e3300000 	teq	r0, #0	; 0x0
        2f8db8:	0a000001 	beq	2f8dc4 <lk_begin(low_type *)+0x5c>
        2f8dbc:	e1a00005 	mov	r0, r5
        2f8dc0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2f8dc4:	e1a00004 	mov	r0, r4
        2f8dc8:	eb60900c 	bl	1b1ce00 <$process_AN(low_type *)>
        2f8dcc:	e1a00004 	mov	r0, r4
        2f8dd0:	eb60900b 	bl	1b1ce04 <$process_curves(low_type *)>
        2f8dd4:	e2841070 	add	r1, r4, #112	; 0x70
        2f8dd8:	e1a00004 	mov	r0, r4
        2f8ddc:	e3a02001 	mov	r2, #1	; 0x1
        2f8de0:	eb609445 	bl	1b1defc <$DefineWritingStep(low_type *, short *, unsigned int)>
        2f8de4:	e5c40073 	strb	r0, [r4, #115]
        2f8de8:	e1a00440 	mov	r0, r0, asr #8
        2f8dec:	e5c40072 	strb	r0, [r4, #114]
        2f8df0:	e3a00000 	mov	r0, #0	; 0x0
        2f8df4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: lk_duga(low_type *)
 * Address: 002fa2f8
 */
lk_duga(low_type *) {
    /*
        2fa2f8:	e1a0c00d 	mov	ip, sp
        2fa2fc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2fa300:	e24cb004 	sub	fp, ip, #4	; 0x4
        2fa304:	e1a04000 	mov	r4, r0
        2fa308:	e5900000 	ldr	r0, [r0]
        2fa30c:	e5900092 	ldr	r0, [r0, #146]
        2fa310:	e1a00820 	mov	r0, r0, lsr #16
        2fa314:	e3300002 	teq	r0, #2	; 0x2
        2fa318:	01a00004 	moveq	r0, r4
        2fa31c:	0b6086b5 	bleq	1b1bdf8 <$prevent_arcs(low_type *)>
        2fa320:	e1a00004 	mov	r0, r4
        2fa324:	eb607a3a 	bl	1b18c14 <$arcs_processing(low_type *)>
        2fa328:	e1a00004 	mov	r0, r4
        2fa32c:	eb607e54 	bl	1b19c84 <$conv_sticks_to_arcs(low_type *)>
        2fa330:	e1a00004 	mov	r0, r4
        2fa334:	eb607e57 	bl	1b19c98 <$del_before_after_circles(low_type *)>
        2fa338:	e1a00004 	mov	r0, r4
        2fa33c:	eb607e5b 	bl	1b19cb0 <$delete_CROSS_elements(low_type *)>
        2fa340:	e1a00004 	mov	r0, r4
        2fa344:	eb607a3e 	bl	1b18c44 <$check_IUb_IDf_small(low_type *)>
        2fa348:	e1a00004 	mov	r0, r4
        2fa34c:	eb607e58 	bl	1b19cb4 <$delete_UD_before_DDL(low_type *)>
        2fa350:	e3a00000 	mov	r0, #0	; 0x0
        2fa354:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: LockRamParaData(unsigned long)
 * Address: 002fe3b0
 */
LockRamParaData(unsigned long) {
    /*
        2fe3b0:	e1a0c00d 	mov	ip, sp
        2fe3b4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2fe3b8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2fe3bc:	e1a04000 	mov	r4, r0
        2fe3c0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2fe3c4:	e3a00002 	mov	r0, #2	; 0x2
        2fe3c8:	eb630f5f 	bl	1bc214c <$AllocateRefHandle(long)>
        2fe3cc:	e3a05000 	mov	r5, #0	; 0x0
        2fe3d0:	e3340001 	teq	r4, #1	; 0x1
        2fe3d4:	e58d0000 	str	r0, [sp]
        2fe3d8:	0a000014 	beq	2fe430 <LockRamParaData(unsigned long)+0x80>
        2fe3dc:	e3340002 	teq	r4, #2	; 0x2
        2fe3e0:	0a000023 	beq	2fe474 <LockRamParaData(unsigned long)+0xc4>
        2fe3e4:	e3340003 	teq	r4, #3	; 0x3
        2fe3e8:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2fe3ec:	1a00003d 	bne	2fe4e8 <LockRamParaData(unsigned long)+0x138>
        2fe3f0:	e28f0f08 	add	r0, pc, #32	; 0x20
        2fe3f4:	eb631ba1 	bl	1bc5280 <$Intern(char *)>
        2fe3f8:	eb630f53 	bl	1bc214c <$AllocateRefHandle(long)>
        2fe3fc:	e58d0008 	str	r0, [sp, #8]
        2fe400:	e28d0008 	add	r0, sp, #8	; 0x8
        2fe404:	eb60a3ec 	bl	1b273bc <$GetGlobalParaDataRef(RefVar const &)>
        2fe408:	e59d100c 	ldr	r1, [sp, #12]
        2fe40c:	e5810000 	str	r0, [r1]
        2fe410:	e59d0008 	ldr	r0, [sp, #8]
        2fe414:	ea000020 	b	2fe49c <LockRamParaData(unsigned long)+0xec>
        2fe418:	52616d50 	rsbpl	r6, r1, #5120	; 0x1400
        2fe41c:	61726147 	cmnvs	r2, r7, asr #2
        2fe420:	72617068 	rsbvc	r7, r1, #104	; 0x68
        2fe424:	54524941 	ldrplb	r4, [r2], -#2369
        2fe428:	3a504152 	bcc	170e978 <ROM$$Size+0xfeed2c>
        2fe42c:	41000000 	tstmi	r0, r0
        2fe430:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2fe434:	e28f0f08 	add	r0, pc, #32	; 0x20
        2fe438:	eb631b90 	bl	1bc5280 <$Intern(char *)>
        2fe43c:	eb630f42 	bl	1bc214c <$AllocateRefHandle(long)>
        2fe440:	e58d0000 	str	r0, [sp]
        2fe444:	e1a0000d 	mov	r0, sp
        2fe448:	eb60a3db 	bl	1b273bc <$GetGlobalParaDataRef(RefVar const &)>
        2fe44c:	e59d100c 	ldr	r1, [sp, #12]
        2fe450:	e5810000 	str	r0, [r1]
        2fe454:	e59d0000 	ldr	r0, [sp]
        2fe458:	ea00000f 	b	2fe49c <LockRamParaData(unsigned long)+0xec>
        2fe45c:	52616d50 	rsbpl	r6, r1, #5120	; 0x1400
        2fe460:	61726147 	cmnvs	r2, r7, asr #2
        2fe464:	72617068 	rsbvc	r7, r1, #104	; 0x68
        2fe468:	4454454d 	ldrmib	r4, [r4], -#1357
        2fe46c:	3a504152 	bcc	170e9bc <ROM$$Size+0xfeed70>
        2fe470:	41000000 	tstmi	r0, r0
        2fe474:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2fe478:	e28f0f14 	add	r0, pc, #80	; 0x50
        2fe47c:	eb631b7f 	bl	1bc5280 <$Intern(char *)>
        2fe480:	eb630f31 	bl	1bc214c <$AllocateRefHandle(long)>
        2fe484:	e58d0004 	str	r0, [sp, #4]
        2fe488:	e28d0004 	add	r0, sp, #4	; 0x4
        2fe48c:	eb60a3ca 	bl	1b273bc <$GetGlobalParaDataRef(RefVar const &)>
        2fe490:	e59d100c 	ldr	r1, [sp, #12]
        2fe494:	e5810000 	str	r0, [r1]
        2fe498:	e59d0004 	ldr	r0, [sp, #4]
        2fe49c:	eb631346 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2fe4a0:	e5bd000c 	ldr	r0, [sp, #12]!
        2fe4a4:	e5900000 	ldr	r0, [r0]
        2fe4a8:	e3300002 	teq	r0, #2	; 0x2
        2fe4ac:	0a000003 	beq	2fe4c0 <LockRamParaData(unsigned long)+0x110>
        2fe4b0:	e1a0000d 	mov	r0, sp
        2fe4b4:	eb641b81 	bl	1c052c0 <$IsBinary(RefVar const &)>
        2fe4b8:	e3300000 	teq	r0, #0	; 0x0
        2fe4bc:	1a000010 	bne	2fe504 <LockRamParaData(unsigned long)+0x154>
        2fe4c0:	e59d0000 	ldr	r0, [sp]
        2fe4c4:	eb63133c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2fe4c8:	e1a00005 	mov	r0, r5
        2fe4cc:	ea000016 	b	2fe52c <LockRamParaData(unsigned long)+0x17c>
        2fe4d0:	52616d50 	rsbpl	r6, r1, #5120	; 0x1400
        2fe4d4:	61726147 	cmnvs	r2, r7, asr #2
        2fe4d8:	72617068 	rsbvc	r7, r1, #104	; 0x68
        2fe4dc:	50504442 	subpls	r4, r0, r2, asr #8
        2fe4e0:	3a504152 	bcc	170ea30 <ROM$$Size+0xfeede4>
        2fe4e4:	41000000 	tstmi	r0, r0
        2fe4e8:	e1a00004 	mov	r0, r4
        2fe4ec:	eb5dc4af 	bl	1a6f7b0 <$HWRMemoryLockHandle(unsigned long)>
        2fe4f0:	e1a04000 	mov	r4, r0
        2fe4f4:	e59d000c 	ldr	r0, [sp, #12]
        2fe4f8:	eb63132f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2fe4fc:	e1a00004 	mov	r0, r4
        2fe500:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2fe504:	e59d0000 	ldr	r0, [sp]
        2fe508:	e5900000 	ldr	r0, [r0]
        2fe50c:	eb631b68 	bl	1bc52b4 <$LockRef(long)>
        2fe510:	e59d0000 	ldr	r0, [sp]
        2fe514:	e5900000 	ldr	r0, [r0]
        2fe518:	eb630f0f 	bl	1bc215c <$BinaryData(long)>
        2fe51c:	e2804004 	add	r4, r0, #4	; 0x4
        2fe520:	e59d0000 	ldr	r0, [sp]
        2fe524:	eb631324 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2fe528:	e1a00004 	mov	r0, r4
        2fe52c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: log10
 * Address: 002fea8c
 */
void globals::log10() {
    /*
        2fea8c:	e1a0c00d 	mov	ip, sp
        2fea90:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2fea94:	e24cb004 	sub	fp, ip, #4	; 0x4
        2fea98:	ed2dc203 	sfm	f4, 1, [sp, -#12]!
        2fea9c:	e92d0003 	stmdb	sp!, {r0, r1}
        2feaa0:	ecbd8102 	ldfd	f0, [sp], #8
        2feaa4:	ed9fc105 	ldfd	f4, [pc, #20]
        2feaa8:	ed2d8102 	stfd	f0, [sp, -#8]!
        2feaac:	e8bd0003 	ldmia	sp!, {r0, r1}
        2feab0:	eb62d7df 	bl	1bb4a34 <$log>
        2feab4:	ee100184 	mufd	f0, f0, f4
        2feab8:	ed1bc206 	lfm	f4, 1, [fp, -#24]
        2feabc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        2feac0:	3fdbcb7b 	swicc	0x00dbcb7b
        2feac4:	1526e50e 	strne	lr, [r6, -#1294]!
    */
}

/**
 * Symbol: logb
 * Address: 002feac8
 */
void globals::logb() {
    /*
        2feac8:	e1a0c00d 	mov	ip, sp
        2feacc:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2fead0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2fead4:	ed2dc203 	sfm	f4, 1, [sp, -#12]!
        2fead8:	e92d0003 	stmdb	sp!, {r0, r1}
        2feadc:	ecbdc102 	ldfd	f4, [sp], #8
        2feae0:	ed2dc102 	stfd	f4, [sp, -#8]!
        2feae4:	ed2dc102 	stfd	f4, [sp, -#8]!
        2feae8:	e8bd0003 	ldmia	sp!, {r0, r1}
        2feaec:	eb6411bb 	bl	1c031e0 <$__fpclassifyd>
        2feaf0:	e3500002 	cmp	r0, #2	; 0x2
        2feaf4:	059f0020 	ldreq	r0, [pc, #20]	; 2feb1c <logb+0x54>
        2feaf8:	0a000005 	beq	2feb14 <logb+0x4c>
        2feafc:	ca000008 	bgt	2feb24 <logb+0x5c>
        2feb00:	e3300000 	teq	r0, #0	; 0x0
        2feb04:	0a00000a 	beq	2feb34 <logb+0x6c>
        2feb08:	e3300001 	teq	r0, #1	; 0x1
        2feb0c:	1a000031 	bne	2febd8 <logb+0x110>
        2feb10:	e59f0008 	ldr	r0, [pc, #8]	; 2feb20 <logb+0x58>
        2feb14:	ed908100 	ldfd	f0, [r0]
        2feb18:	ea000037 	b	2febfc <logb+0x134>
        2feb1c:	00380a84 	eoreqs	r0, r8, r4, lsl #21
        2feb20:	00380a7c 	eoreqs	r0, r8, ip, ror sl
        2feb24:	e3300004 	teq	r0, #4	; 0x4
        2feb28:	0a000003 	beq	2feb3c <logb+0x74>
        2feb2c:	e3300063 	teq	r0, #99	; 0x63
        2feb30:	1a000028 	bne	2febd8 <logb+0x110>
        2feb34:	ee14018a 	mufd	f0, f4, #2.0
        2feb38:	ea00002f 	b	2febfc <logb+0x134>
        2feb3c:	e59d0000 	ldr	r0, [sp]
        2feb40:	e1b00600 	movs	r0, r0, lsl #12
        2feb44:	ed9f810f 	ldfd	f0, [pc, #60]
        2feb48:	e3a00000 	mov	r0, #0	; 0x0
        2feb4c:	0a00000f 	beq	2feb90 <logb+0xc8>
        2feb50:	e59d1000 	ldr	r1, [sp]
        2feb54:	e2011702 	and	r1, r1, #524288	; 0x80000
        2feb58:	e3310702 	teq	r1, #524288	; 0x80000
        2feb5c:	0a000006 	beq	2feb7c <logb+0xb4>
        2feb60:	e59d1000 	ldr	r1, [sp]
        2feb64:	e1a01081 	mov	r1, r1, lsl #1
        2feb68:	e2800001 	add	r0, r0, #1	; 0x1
        2feb6c:	e58d1000 	str	r1, [sp]
        2feb70:	e2011702 	and	r1, r1, #524288	; 0x80000
        2feb74:	e3310702 	teq	r1, #524288	; 0x80000
        2feb78:	1afffff8 	bne	2feb60 <logb+0x98>
        2feb7c:	ee010190 	fltd	f1, r0
        2feb80:	ee200181 	sufd	f0, f0, f1
        2feb84:	ea00001c 	b	2febfc <logb+0x134>
        2feb88:	c08ff800 	addgt	pc, pc, r0, lsl #16
        2feb8c:	00000000 	andeq	r0, r0, r0
        2feb90:	e59d1004 	ldr	r1, [sp, #4]
        2feb94:	e2011102 	and	r1, r1, #-2147483648	; 0x80000000
        2feb98:	e3310102 	teq	r1, #-2147483648	; 0x80000000
        2feb9c:	0a000006 	beq	2febbc <logb+0xf4>
        2feba0:	e59d1004 	ldr	r1, [sp, #4]
        2feba4:	e1a01081 	mov	r1, r1, lsl #1
        2feba8:	e2800001 	add	r0, r0, #1	; 0x1
        2febac:	e58d1004 	str	r1, [sp, #4]
        2febb0:	e2011102 	and	r1, r1, #-2147483648	; 0x80000000
        2febb4:	e3310102 	teq	r1, #-2147483648	; 0x80000000
        2febb8:	1afffff8 	bne	2feba0 <logb+0xd8>
        2febbc:	ee010190 	fltd	f1, r0
        2febc0:	ee201181 	sufd	f1, f0, f1
        2febc4:	ed9f8101 	ldfd	f0, [pc, #4]
        2febc8:	ee210180 	sufd	f0, f1, f0
        2febcc:	ea00000a 	b	2febfc <logb+0x134>
        2febd0:	40340000 	eormis	r0, r4, r0
        2febd4:	00000000 	andeq	r0, r0, r0
        2febd8:	e59d0000 	ldr	r0, [sp]
        2febdc:	e3c01102 	bic	r1, r0, #-2147483648	; 0x80000000
        2febe0:	e3c1180f 	bic	r1, r1, #983040	; 0xf0000
        2febe4:	e3c11cff 	bic	r1, r1, #65280	; 0xff00
        2febe8:	e3c110ff 	bic	r1, r1, #255	; 0xff
        2febec:	e3a00001 	mov	r0, #1	; 0x1
        2febf0:	e2400b01 	sub	r0, r0, #1024	; 0x400
        2febf4:	e0800a21 	add	r0, r0, r1, lsr #20
        2febf8:	ee000190 	fltd	f0, r0
        2febfc:	ed1bc206 	lfm	f4, 1, [fp, -#24]
        2fec00:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        2fec04:	e1a0c00d 	mov	ip, sp
        2fec08:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2fec0c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2fec10:	e1a08000 	mov	r8, r0
        2fec14:	e1a04001 	mov	r4, r1
        2fec18:	e1a05002 	mov	r5, r2
        2fec1c:	e1a06003 	mov	r6, r3
        2fec20:	e24dd050 	sub	sp, sp, #80	; 0x50
        2fec24:	e3a00000 	mov	r0, #0	; 0x0
        2fec28:	e3a01000 	mov	r1, #0	; 0x0
        2fec2c:	e3a03902 	mov	r3, #32768	; 0x8000
        2fec30:	e2433001 	sub	r3, r3, #1	; 0x1
        2fec34:	e7982081 	ldr	r2, [r8, r1, lsl #1]
        2fec38:	e1a02842 	mov	r2, r2, asr #16
        2fec3c:	e3520000 	cmp	r2, #0	; 0x0
        2fec40:	aa000002 	bge	2fec50 <logb+0x188>
        2fec44:	e3720902 	cmn	r2, #32768	; 0x8000
        2fec48:	12622000 	rsbne	r2, r2, #0	; 0x0
        2fec4c:	01a02003 	moveq	r2, r3
        2fec50:	e1a02802 	mov	r2, r2, lsl #16
        2fec54:	e1a02842 	mov	r2, r2, asr #16
        2fec58:	e1520000 	cmp	r2, r0
        2fec5c:	c1a00002 	movgt	r0, r2
        2fec60:	e2811001 	add	r1, r1, #1	; 0x1
        2fec64:	e3510027 	cmp	r1, #39	; 0x27
        2fec68:	dafffff1 	ble	2fec34 <logb+0x16c>
        2fec6c:	e3a01000 	mov	r1, #0	; 0x0
        2fec70:	e3a07006 	mov	r7, #6	; 0x6
        2fec74:	e3300000 	teq	r0, #0	; 0x0
        2fec78:	0a000005 	beq	2fec94 <logb+0x1cc>
        2fec7c:	e1a00800 	mov	r0, r0, lsl #16
        2fec80:	eb6204d6 	bl	1b7ffe0 <$gsm_norm(long)>
        2fec84:	e1a01000 	mov	r1, r0
        2fec88:	e3500006 	cmp	r0, #6	; 0x6
        2fec8c:	c3a02000 	movgt	r2, #0	; 0x0
        2fec90:	ca000002 	bgt	2feca0 <logb+0x1d8>
        2fec94:	e0470001 	sub	r0, r7, r1
        2fec98:	e1a02800 	mov	r2, r0, lsl #16
        2fec9c:	e1a02842 	mov	r2, r2, asr #16
        2feca0:	e3a00000 	mov	r0, #0	; 0x0
        2feca4:	e7981080 	ldr	r1, [r8, r0, lsl #1]
        2feca8:	e1a01841 	mov	r1, r1, asr #16
        2fecac:	e1a01251 	mov	r1, r1, asr r2
        2fecb0:	e08d3080 	add	r3, sp, r0, lsl #1
        2fecb4:	e5c31001 	strb	r1, [r3, #1]
        2fecb8:	e1a01441 	mov	r1, r1, asr #8
        2fecbc:	e5c31000 	strb	r1, [r3]
        2fecc0:	e2800001 	add	r0, r0, #1	; 0x1
        2fecc4:	e3500027 	cmp	r0, #39	; 0x27
        2fecc8:	dafffff5 	ble	2feca4 <logb+0x1dc>
        2feccc:	e3a01000 	mov	r1, #0	; 0x0
        2fecd0:	e3a03028 	mov	r3, #40	; 0x28
        2fecd4:	e3a00028 	mov	r0, #40	; 0x28
        2fecd8:	e1a0c007 	mov	ip, r7
        2fecdc:	e3a08001 	mov	r8, #1	; 0x1
        2fece0:	e3a07002 	mov	r7, #2	; 0x2
        2fece4:	e714e080 	ldr	lr, [r4, -r0, lsl #1]
        2fece8:	e1a0e84e 	mov	lr, lr, asr #16
        2fecec:	e59d9000 	ldr	r9, [sp]
        2fecf0:	e1a09849 	mov	r9, r9, asr #16
        2fecf4:	e00e0e99 	mul	lr, r9, lr
        2fecf8:	e59da002 	ldr	sl, [sp, #2]
        2fecfc:	e1a0a84a 	mov	sl, sl, asr #16
        2fed00:	e0489000 	sub	r9, r8, r0
        2fed04:	e7949089 	ldr	r9, [r4, r9, lsl #1]
        2fed08:	e1a09849 	mov	r9, r9, asr #16
        2fed0c:	e02eea99 	mla	lr, r9, sl, lr
        2fed10:	e59da004 	ldr	sl, [sp, #4]
        2fed14:	e1a0a84a 	mov	sl, sl, asr #16
        2fed18:	e0479000 	sub	r9, r7, r0
        2fed1c:	e7949089 	ldr	r9, [r4, r9, lsl #1]
        2fed20:	e1a09849 	mov	r9, r9, asr #16
        2fed24:	e02eea99 	mla	lr, r9, sl, lr
        2fed28:	e59d9006 	ldr	r9, [sp, #6]
        2fed2c:	e1a09849 	mov	r9, r9, asr #16
        2fed30:	e260a003 	rsb	sl, r0, #3	; 0x3
        2fed34:	e794a08a 	ldr	sl, [r4, sl, lsl #1]
        2fed38:	e1a0a84a 	mov	sl, sl, asr #16
        2fed3c:	e02ee99a 	mla	lr, sl, r9, lr
        2fed40:	e59da008 	ldr	sl, [sp, #8]
        2fed44:	e1a0a84a 	mov	sl, sl, asr #16
        2fed48:	e2609004 	rsb	r9, r0, #4	; 0x4
        2fed4c:	e7949089 	ldr	r9, [r4, r9, lsl #1]
        2fed50:	e1a09849 	mov	r9, r9, asr #16
        2fed54:	e02eea99 	mla	lr, r9, sl, lr
        2fed58:	e59da00a 	ldr	sl, [sp, #10]
        2fed5c:	e1a0a84a 	mov	sl, sl, asr #16
        2fed60:	e2609005 	rsb	r9, r0, #5	; 0x5
        2fed64:	e7949089 	ldr	r9, [r4, r9, lsl #1]
        2fed68:	e1a09849 	mov	r9, r9, asr #16
        2fed6c:	e02eea99 	mla	lr, r9, sl, lr
        2fed70:	e59da00c 	ldr	sl, [sp, #12]
        2fed74:	e1a0a84a 	mov	sl, sl, asr #16
        2fed78:	e04c9000 	sub	r9, ip, r0
        2fed7c:	e7949089 	ldr	r9, [r4, r9, lsl #1]
        2fed80:	e1a09849 	mov	r9, r9, asr #16
        2fed84:	e02eea99 	mla	lr, r9, sl, lr
        2fed88:	e59d900e 	ldr	r9, [sp, #14]
        2fed8c:	e1a09849 	mov	r9, r9, asr #16
        2fed90:	e260a007 	rsb	sl, r0, #7	; 0x7
        2fed94:	e794a08a 	ldr	sl, [r4, sl, lsl #1]
        2fed98:	e1a0a84a 	mov	sl, sl, asr #16
        2fed9c:	e02ee99a 	mla	lr, sl, r9, lr
        2feda0:	e59da010 	ldr	sl, [sp, #16]
        2feda4:	e1a0a84a 	mov	sl, sl, asr #16
        2feda8:	e2609008 	rsb	r9, r0, #8	; 0x8
        2fedac:	e7949089 	ldr	r9, [r4, r9, lsl #1]
        2fedb0:	e1a09849 	mov	r9, r9, asr #16
        2fedb4:	e02eea99 	mla	lr, r9, sl, lr
        2fedb8:	e59da012 	ldr	sl, [sp, #18]
        2fedbc:	e1a0a84a 	mov	sl, sl, asr #16
        2fedc0:	e2609009 	rsb	r9, r0, #9	; 0x9
        2fedc4:	e7949089 	ldr	r9, [r4, r9, lsl #1]
        2fedc8:	e1a09849 	mov	r9, r9, asr #16
        2fedcc:	e02eea99 	mla	lr, r9, sl, lr
        2fedd0:	e59d9014 	ldr	r9, [sp, #20]
        2fedd4:	e1a09849 	mov	r9, r9, asr #16
        2fedd8:	e260a00a 	rsb	sl, r0, #10	; 0xa
        2feddc:	e794a08a 	ldr	sl, [r4, sl, lsl #1]
        2fede0:	e1a0a84a 	mov	sl, sl, asr #16
        2fede4:	e02ee99a 	mla	lr, sl, r9, lr
        2fede8:	e59da016 	ldr	sl, [sp, #22]
        2fedec:	e1a0a84a 	mov	sl, sl, asr #16
        2fedf0:	e260900b 	rsb	r9, r0, #11	; 0xb
        2fedf4:	e7949089 	ldr	r9, [r4, r9, lsl #1]
        2fedf8:	e1a09849 	mov	r9, r9, asr #16
        2fedfc:	e02eea99 	mla	lr, r9, sl, lr
        2fee00:	e59d9018 	ldr	r9, [sp, #24]
        2fee04:	e1a09849 	mov	r9, r9, asr #16
        2fee08:	e260a00c 	rsb	sl, r0, #12	; 0xc
        2fee0c:	e794a08a 	ldr	sl, [r4, sl, lsl #1]
        2fee10:	e1a0a84a 	mov	sl, sl, asr #16
        2fee14:	e02ee99a 	mla	lr, sl, r9, lr
        2fee18:	e59da01a 	ldr	sl, [sp, #26]
        2fee1c:	e1a0a84a 	mov	sl, sl, asr #16
        2fee20:	e260900d 	rsb	r9, r0, #13	; 0xd
        2fee24:	e7949089 	ldr	r9, [r4, r9, lsl #1]
        2fee28:	e1a09849 	mov	r9, r9, asr #16
        2fee2c:	e02eea99 	mla	lr, r9, sl, lr
        2fee30:	e59da01c 	ldr	sl, [sp, #28]
        2fee34:	e1a0a84a 	mov	sl, sl, asr #16
        2fee38:	e260900e 	rsb	r9, r0, #14	; 0xe
        2fee3c:	e7949089 	ldr	r9, [r4, r9, lsl #1]
        2fee40:	e1a09849 	mov	r9, r9, asr #16
        2fee44:	e02eea99 	mla	lr, r9, sl, lr
        2fee48:	e59da01e 	ldr	sl, [sp, #30]
        2fee4c:	e1a0a84a 	mov	sl, sl, asr #16
        2fee50:	e260900f 	rsb	r9, r0, #15	; 0xf
        2fee54:	e7949089 	ldr	r9, [r4, r9, lsl #1]
        2fee58:	e1a09849 	mov	r9, r9, asr #16
        2fee5c:	e02eea99 	mla	lr, r9, sl, lr
        2fee60:	e59da020 	ldr	sl, [sp, #32]
        2fee64:	e1a0a84a 	mov	sl, sl, asr #16
        2fee68:	e2609010 	rsb	r9, r0, #16	; 0x10
        2fee6c:	e7949089 	ldr	r9, [r4, r9, lsl #1]
        2fee70:	e1a09849 	mov	r9, r9, asr #16
        2fee74:	e02eea99 	mla	lr, r9, sl, lr
        2fee78:	e59da022 	ldr	sl, [sp, #34]
        2fee7c:	e1a0a84a 	mov	sl, sl, asr #16
        2fee80:	e2609011 	rsb	r9, r0, #17	; 0x11
        2fee84:	e7949089 	ldr	r9, [r4, r9, lsl #1]
        2fee88:	e1a09849 	mov	r9, r9, asr #16
        2fee8c:	e02eea99 	mla	lr, r9, sl, lr
        2fee90:	e59da024 	ldr	sl, [sp, #36]
        2fee94:	e1a0a84a 	mov	sl, sl, asr #16
        2fee98:	e2609012 	rsb	r9, r0, #18	; 0x12
        2fee9c:	e7949089 	ldr	r9, [r4, r9, lsl #1]
        2feea0:	e1a09849 	mov	r9, r9, asr #16
        2feea4:	e02eea99 	mla	lr, r9, sl, lr
        2feea8:	e59d9026 	ldr	r9, [sp, #38]
        2feeac:	e1a09849 	mov	r9, r9, asr #16
        2feeb0:	e260a013 	rsb	sl, r0, #19	; 0x13
        2feeb4:	e794a08a 	ldr	sl, [r4, sl, lsl #1]
        2feeb8:	e1a0a84a 	mov	sl, sl, asr #16
        2feebc:	e02ee99a 	mla	lr, sl, r9, lr
        2feec0:	e59da028 	ldr	sl, [sp, #40]
        2feec4:	e1a0a84a 	mov	sl, sl, asr #16
        2feec8:	e2609014 	rsb	r9, r0, #20	; 0x14
        2feecc:	e7949089 	ldr	r9, [r4, r9, lsl #1]
        2feed0:	e1a09849 	mov	r9, r9, asr #16
        2feed4:	e02eea99 	mla	lr, r9, sl, lr
        2feed8:	e59da02a 	ldr	sl, [sp, #42]
        2feedc:	e1a0a84a 	mov	sl, sl, asr #16
        2feee0:	e2609015 	rsb	r9, r0, #21	; 0x15
        2feee4:	e7949089 	ldr	r9, [r4, r9, lsl #1]
        2feee8:	e1a09849 	mov	r9, r9, asr #16
        2feeec:	e02eea99 	mla	lr, r9, sl, lr
        2feef0:	e59da02c 	ldr	sl, [sp, #44]
        2feef4:	e1a0a84a 	mov	sl, sl, asr #16
        2feef8:	e2609016 	rsb	r9, r0, #22	; 0x16
        2feefc:	e7949089 	ldr	r9, [r4, r9, lsl #1]
        2fef00:	e1a09849 	mov	r9, r9, asr #16
        2fef04:	e02eea99 	mla	lr, r9, sl, lr
        2fef08:	e59da02e 	ldr	sl, [sp, #46]
        2fef0c:	e1a0a84a 	mov	sl, sl, asr #16
        2fef10:	e2609017 	rsb	r9, r0, #23	; 0x17
        2fef14:	e7949089 	ldr	r9, [r4, r9, lsl #1]
        2fef18:	e1a09849 	mov	r9, r9, asr #16
        2fef1c:	e02eea99 	mla	lr, r9, sl, lr
        2fef20:	e59da030 	ldr	sl, [sp, #48]
        2fef24:	e1a0a84a 	mov	sl, sl, asr #16
        2fef28:	e2609018 	rsb	r9, r0, #24	; 0x18
        2fef2c:	e7949089 	ldr	r9, [r4, r9, lsl #1]
        2fef30:	e1a09849 	mov	r9, r9, asr #16
        2fef34:	e02eea99 	mla	lr, r9, sl, lr
        2fef38:	e59da032 	ldr	sl, [sp, #50]
        2fef3c:	e1a0a84a 	mov	sl, sl, asr #16
        2fef40:	e2609019 	rsb	r9, r0, #25	; 0x19
        2fef44:	e7949089 	ldr	r9, [r4, r9, lsl #1]
        2fef48:	e1a09849 	mov	r9, r9, asr #16
        2fef4c:	e02eea99 	mla	lr, r9, sl, lr
        2fef50:	e59d9034 	ldr	r9, [sp, #52]
        2fef54:	e1a09849 	mov	r9, r9, asr #16
        2fef58:	e260a01a 	rsb	sl, r0, #26	; 0x1a
        2fef5c:	e794a08a 	ldr	sl, [r4, sl, lsl #1]
        2fef60:	e1a0a84a 	mov	sl, sl, asr #16
        2fef64:	e02ee99a 	mla	lr, sl, r9, lr
        2fef68:	e59d9036 	ldr	r9, [sp, #54]
        2fef6c:	e1a09849 	mov	r9, r9, asr #16
        2fef70:	e260a01b 	rsb	sl, r0, #27	; 0x1b
        2fef74:	e794a08a 	ldr	sl, [r4, sl, lsl #1]
        2fef78:	e1a0a84a 	mov	sl, sl, asr #16
        2fef7c:	e02ee99a 	mla	lr, sl, r9, lr
        2fef80:	e59da038 	ldr	sl, [sp, #56]
        2fef84:	e1a0a84a 	mov	sl, sl, asr #16
        2fef88:	e260901c 	rsb	r9, r0, #28	; 0x1c
        2fef8c:	e7949089 	ldr	r9, [r4, r9, lsl #1]
        2fef90:	e1a09849 	mov	r9, r9, asr #16
        2fef94:	e02eea99 	mla	lr, r9, sl, lr
        2fef98:	e59d903a 	ldr	r9, [sp, #58]
        2fef9c:	e1a09849 	mov	r9, r9, asr #16
        2fefa0:	e260a01d 	rsb	sl, r0, #29	; 0x1d
        2fefa4:	e794a08a 	ldr	sl, [r4, sl, lsl #1]
        2fefa8:	e1a0a84a 	mov	sl, sl, asr #16
        2fefac:	e02ee99a 	mla	lr, sl, r9, lr
        2fefb0:	e59d903c 	ldr	r9, [sp, #60]
        2fefb4:	e1a09849 	mov	r9, r9, asr #16
        2fefb8:	e260a01e 	rsb	sl, r0, #30	; 0x1e
        2fefbc:	e794a08a 	ldr	sl, [r4, sl, lsl #1]
        2fefc0:	e1a0a84a 	mov	sl, sl, asr #16
        2fefc4:	e02ee99a 	mla	lr, sl, r9, lr
        2fefc8:	e59d903e 	ldr	r9, [sp, #62]
        2fefcc:	e1a09849 	mov	r9, r9, asr #16
        2fefd0:	e260a01f 	rsb	sl, r0, #31	; 0x1f
        2fefd4:	e794a08a 	ldr	sl, [r4, sl, lsl #1]
        2fefd8:	e1a0a84a 	mov	sl, sl, asr #16
        2fefdc:	e02ee99a 	mla	lr, sl, r9, lr
        2fefe0:	e59da040 	ldr	sl, [sp, #64]
        2fefe4:	e1a0a84a 	mov	sl, sl, asr #16
        2fefe8:	e2609020 	rsb	r9, r0, #32	; 0x20
        2fefec:	e7949089 	ldr	r9, [r4, r9, lsl #1]
        2feff0:	e1a09849 	mov	r9, r9, asr #16
        2feff4:	e02eea99 	mla	lr, r9, sl, lr
        2feff8:	e59da042 	ldr	sl, [sp, #66]
        2feffc:	e1a0a84a 	mov	sl, sl, asr #16
        2ff000:	e2609021 	rsb	r9, r0, #33	; 0x21
        2ff004:	e7949089 	ldr	r9, [r4, r9, lsl #1]
        2ff008:	e1a09849 	mov	r9, r9, asr #16
        2ff00c:	e02eea99 	mla	lr, r9, sl, lr
        2ff010:	e59da044 	ldr	sl, [sp, #68]
        2ff014:	e1a0a84a 	mov	sl, sl, asr #16
        2ff018:	e2609022 	rsb	r9, r0, #34	; 0x22
        2ff01c:	e7949089 	ldr	r9, [r4, r9, lsl #1]
        2ff020:	e1a09849 	mov	r9, r9, asr #16
        2ff024:	e02eea99 	mla	lr, r9, sl, lr
        2ff028:	e59d9046 	ldr	r9, [sp, #70]
        2ff02c:	e1a09849 	mov	r9, r9, asr #16
        2ff030:	e260a023 	rsb	sl, r0, #35	; 0x23
        2ff034:	e794a08a 	ldr	sl, [r4, sl, lsl #1]
        2ff038:	e1a0a84a 	mov	sl, sl, asr #16
        2ff03c:	e02ee99a 	mla	lr, sl, r9, lr
        2ff040:	e59da048 	ldr	sl, [sp, #72]
        2ff044:	e1a0a84a 	mov	sl, sl, asr #16
        2ff048:	e2609024 	rsb	r9, r0, #36	; 0x24
        2ff04c:	e7949089 	ldr	r9, [r4, r9, lsl #1]
        2ff050:	e1a09849 	mov	r9, r9, asr #16
        2ff054:	e02eea99 	mla	lr, r9, sl, lr
        2ff058:	e59da04a 	ldr	sl, [sp, #74]
        2ff05c:	e1a0a84a 	mov	sl, sl, asr #16
        2ff060:	e2609025 	rsb	r9, r0, #37	; 0x25
        2ff064:	e7949089 	ldr	r9, [r4, r9, lsl #1]
        2ff068:	e1a09849 	mov	r9, r9, asr #16
        2ff06c:	e02eea99 	mla	lr, r9, sl, lr
        2ff070:	e59da04c 	ldr	sl, [sp, #76]
        2ff074:	e1a0a84a 	mov	sl, sl, asr #16
        2ff078:	e2609026 	rsb	r9, r0, #38	; 0x26
        2ff07c:	e7949089 	ldr	r9, [r4, r9, lsl #1]
        2ff080:	e1a09849 	mov	r9, r9, asr #16
        2ff084:	e02eea99 	mla	lr, r9, sl, lr
        2ff088:	e59d904e 	ldr	r9, [sp, #78]
        2ff08c:	e1a09849 	mov	r9, r9, asr #16
        2ff090:	e260a027 	rsb	sl, r0, #39	; 0x27
        2ff094:	e794a08a 	ldr	sl, [r4, sl, lsl #1]
        2ff098:	e1a0a84a 	mov	sl, sl, asr #16
        2ff09c:	e02ee99a 	mla	lr, sl, r9, lr
        2ff0a0:	e15e0001 	cmp	lr, r1
        2ff0a4:	c1a03800 	movgt	r3, r0, lsl #16
        2ff0a8:	c1a03843 	movgt	r3, r3, asr #16
        2ff0ac:	c1a0100e 	movgt	r1, lr
        2ff0b0:	e2800001 	add	r0, r0, #1	; 0x1
        2ff0b4:	e3500078 	cmp	r0, #120	; 0x78
        2ff0b8:	daffff09 	ble	2fece4 <logb+0x21c>
        2ff0bc:	e5c63001 	strb	r3, [r6, #1]
        2ff0c0:	e1a00443 	mov	r0, r3, asr #8
        2ff0c4:	e5c60000 	strb	r0, [r6]
        2ff0c8:	e1a00081 	mov	r0, r1, lsl #1
        2ff0cc:	e04c1002 	sub	r1, ip, r2
        2ff0d0:	e1a06150 	mov	r6, r0, asr r1
        2ff0d4:	e3a00000 	mov	r0, #0	; 0x0
        2ff0d8:	e3a01000 	mov	r1, #0	; 0x0
        2ff0dc:	e0412003 	sub	r2, r1, r3
        2ff0e0:	e7942082 	ldr	r2, [r4, r2, lsl #1]
        2ff0e4:	e1a02842 	mov	r2, r2, asr #16
        2ff0e8:	e1a0c1c2 	mov	ip, r2, asr #3
        2ff0ec:	e0200c9c 	mla	r0, ip, ip, r0
        2ff0f0:	e2811001 	add	r1, r1, #1	; 0x1
        2ff0f4:	e3510027 	cmp	r1, #39	; 0x27
        2ff0f8:	dafffff7 	ble	2ff0dc <logb+0x614>
        2ff0fc:	e1a04080 	mov	r4, r0, lsl #1
        2ff100:	e3a00000 	mov	r0, #0	; 0x0
        2ff104:	e3560000 	cmp	r6, #0	; 0x0
        2ff108:	d5c50001 	strleb	r0, [r5, #1]
        2ff10c:	da00001c 	ble	2ff184 <logb+0x6bc>
        2ff110:	e1560004 	cmp	r6, r4
        2ff114:	a3a0a003 	movge	sl, #3	; 0x3
        2ff118:	a5c5a001 	strgeb	sl, [r5, #1]
        2ff11c:	aa000018 	bge	2ff184 <logb+0x6bc>
        2ff120:	e1a00004 	mov	r0, r4
        2ff124:	eb6203ad 	bl	1b7ffe0 <$gsm_norm(long)>
        2ff128:	e1a01016 	mov	r1, r6, lsl r0
        2ff12c:	e1a01841 	mov	r1, r1, asr #16
        2ff130:	e1a06801 	mov	r6, r1, lsl #16
        2ff134:	e1a06846 	mov	r6, r6, asr #16
        2ff138:	e1a00014 	mov	r0, r4, lsl r0
        2ff13c:	e1a00840 	mov	r0, r0, asr #16
        2ff140:	e1a07800 	mov	r7, r0, lsl #16
        2ff144:	e1a07847 	mov	r7, r7, asr #16
        2ff148:	e3a04000 	mov	r4, #0	; 0x0
        2ff14c:	e59f8038 	ldr	r8, [pc, #38]	; 2ff18c <logb+0x6c4>
        2ff150:	e7981084 	ldr	r1, [r8, r4, lsl #1]
        2ff154:	e1a01841 	mov	r1, r1, asr #16
        2ff158:	e1a00007 	mov	r0, r7
        2ff15c:	eb62039e 	bl	1b7ffdc <$gsm_mult__FsT1>
        2ff160:	e1500006 	cmp	r0, r6
        2ff164:	aa000004 	bge	2ff17c <logb+0x6b4>
        2ff168:	e2840001 	add	r0, r4, #1	; 0x1
        2ff16c:	e1a04800 	mov	r4, r0, lsl #16
        2ff170:	e1a04844 	mov	r4, r4, asr #16
        2ff174:	e3540002 	cmp	r4, #2	; 0x2
        2ff178:	dafffff4 	ble	2ff150 <logb+0x688>
        2ff17c:	e5c54001 	strb	r4, [r5, #1]
        2ff180:	e1a00444 	mov	r0, r4, asr #8
        2ff184:	e5c50000 	strb	r0, [r5]
        2ff188:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2ff18c:	0c105a0c 	ldceq	10, cr5, [r0], -#48
        2ff190:	e92d40f0 	stmdb	sp!, {r4, r5, r6, r7, lr}
        2ff194:	e1a00800 	mov	r0, r0, lsl #16
        2ff198:	e1b00840 	movs	r0, r0, asr #16
        2ff19c:	e1a01801 	mov	r1, r1, lsl #16
        2ff1a0:	e1a01841 	mov	r1, r1, asr #16
        2ff1a4:	e3a069fe 	mov	r6, #4161536	; 0x3f8000
        2ff1a8:	e2466501 	sub	r6, r6, #4194304	; 0x400000
        2ff1ac:	e59d4018 	ldr	r4, [sp, #24]
        2ff1b0:	e59de014 	ldr	lr, [sp, #20]
        2ff1b4:	0a000007 	beq	2ff1d8 <logb+0x710>
        2ff1b8:	e3300001 	teq	r0, #1	; 0x1
        2ff1bc:	0a000027 	beq	2ff260 <logb+0x798>
        2ff1c0:	e3300002 	teq	r0, #2	; 0x2
        2ff1c4:	0a000047 	beq	2ff2e8 <logb+0x820>
        2ff1c8:	e3300003 	teq	r0, #3	; 0x3
        2ff1cc:	18bd80f0 	ldmneia	sp!, {r4, r5, r6, r7, pc}
        2ff1d0:	e3a00000 	mov	r0, #0	; 0x0
        2ff1d4:	ea000064 	b	2ff36c <logb+0x8a4>
        2ff1d8:	e3a00000 	mov	r0, #0	; 0x0
        2ff1dc:	e040c001 	sub	ip, r0, r1
        2ff1e0:	e792508c 	ldr	r5, [r2, ip, lsl #1]
        2ff1e4:	e1a05845 	mov	r5, r5, asr #16
        2ff1e8:	e085c105 	add	ip, r5, r5, lsl #2
        2ff1ec:	e08cc185 	add	ip, ip, r5, lsl #3
        2ff1f0:	e06cc30c 	rsb	ip, ip, ip, lsl #6
        2ff1f4:	e085510c 	add	r5, r5, ip, lsl #2
        2ff1f8:	e285c901 	add	ip, r5, #16384	; 0x4000
        2ff1fc:	e1a0c7cc 	mov	ip, ip, asr #15
        2ff200:	e08e5080 	add	r5, lr, r0, lsl #1
        2ff204:	e5c5c001 	strb	ip, [r5, #1]
        2ff208:	e1a0c44c 	mov	ip, ip, asr #8
        2ff20c:	e5c5c000 	strb	ip, [r5]
        2ff210:	e793c080 	ldr	ip, [r3, r0, lsl #1]
        2ff214:	e1a0c84c 	mov	ip, ip, asr #16
        2ff218:	e79e5080 	ldr	r5, [lr, r0, lsl #1]
        2ff21c:	e1a05845 	mov	r5, r5, asr #16
        2ff220:	e04c5005 	sub	r5, ip, r5
        2ff224:	e3a07902 	mov	r7, #32768	; 0x8000
        2ff228:	e2477001 	sub	r7, r7, #1	; 0x1
        2ff22c:	e1550007 	cmp	r5, r7
        2ff230:	aa000002 	bge	2ff240 <logb+0x778>
        2ff234:	e3750902 	cmn	r5, #32768	; 0x8000
        2ff238:	c1a07005 	movgt	r7, r5
        2ff23c:	d1a07006 	movle	r7, r6
        2ff240:	e084c080 	add	ip, r4, r0, lsl #1
        2ff244:	e5cc7001 	strb	r7, [ip, #1]
        2ff248:	e1a05447 	mov	r5, r7, asr #8
        2ff24c:	e5cc5000 	strb	r5, [ip]
        2ff250:	e2800001 	add	r0, r0, #1	; 0x1
        2ff254:	e3500027 	cmp	r0, #39	; 0x27
        2ff258:	daffffdf 	ble	2ff1dc <logb+0x714>
        2ff25c:	e8bd80f0 	ldmia	sp!, {r4, r5, r6, r7, pc}
        2ff260:	e3a00000 	mov	r0, #0	; 0x0
        2ff264:	e040c001 	sub	ip, r0, r1
        2ff268:	e792508c 	ldr	r5, [r2, ip, lsl #1]
        2ff26c:	e1a05845 	mov	r5, r5, asr #16
        2ff270:	e085c405 	add	ip, r5, r5, lsl #8
        2ff274:	e06cc605 	rsb	ip, ip, r5, lsl #12
        2ff278:	e04c5205 	sub	r5, ip, r5, lsl #4
        2ff27c:	e0855085 	add	r5, r5, r5, lsl #1
        2ff280:	e285c901 	add	ip, r5, #16384	; 0x4000
        2ff284:	e1a0c7cc 	mov	ip, ip, asr #15
        2ff288:	e08e5080 	add	r5, lr, r0, lsl #1
        2ff28c:	e5c5c001 	strb	ip, [r5, #1]
        2ff290:	e1a0c44c 	mov	ip, ip, asr #8
        2ff294:	e5c5c000 	strb	ip, [r5]
        2ff298:	e793c080 	ldr	ip, [r3, r0, lsl #1]
        2ff29c:	e1a0c84c 	mov	ip, ip, asr #16
        2ff2a0:	e79e5080 	ldr	r5, [lr, r0, lsl #1]
        2ff2a4:	e1a05845 	mov	r5, r5, asr #16
        2ff2a8:	e04c5005 	sub	r5, ip, r5
        2ff2ac:	e3a07902 	mov	r7, #32768	; 0x8000
        2ff2b0:	e2477001 	sub	r7, r7, #1	; 0x1
        2ff2b4:	e1550007 	cmp	r5, r7
        2ff2b8:	aa000002 	bge	2ff2c8 <logb+0x800>
        2ff2bc:	e3750902 	cmn	r5, #32768	; 0x8000
        2ff2c0:	c1a07005 	movgt	r7, r5
        2ff2c4:	d1a07006 	movle	r7, r6
        2ff2c8:	e084c080 	add	ip, r4, r0, lsl #1
        2ff2cc:	e5cc7001 	strb	r7, [ip, #1]
        2ff2d0:	e1a05447 	mov	r5, r7, asr #8
        2ff2d4:	e5cc5000 	strb	r5, [ip]
        2ff2d8:	e2800001 	add	r0, r0, #1	; 0x1
        2ff2dc:	e3500027 	cmp	r0, #39	; 0x27
        2ff2e0:	daffffdf 	ble	2ff264 <logb+0x79c>
        2ff2e4:	e8bd80f0 	ldmia	sp!, {r4, r5, r6, r7, pc}
        2ff2e8:	e3a00000 	mov	r0, #0	; 0x0
        2ff2ec:	e040c001 	sub	ip, r0, r1
        2ff2f0:	e792508c 	ldr	r5, [r2, ip, lsl #1]
        2ff2f4:	e1a05845 	mov	r5, r5, asr #16
        2ff2f8:	e3a0c033 	mov	ip, #51	; 0x33
        2ff2fc:	e28ccc53 	add	ip, ip, #21248	; 0x5300
        2ff300:	e005059c 	mul	r5, ip, r5
        2ff304:	e285c901 	add	ip, r5, #16384	; 0x4000
        2ff308:	e1a0c7cc 	mov	ip, ip, asr #15
        2ff30c:	e08e5080 	add	r5, lr, r0, lsl #1
        2ff310:	e5c5c001 	strb	ip, [r5, #1]
        2ff314:	e1a0c44c 	mov	ip, ip, asr #8
        2ff318:	e5c5c000 	strb	ip, [r5]
        2ff31c:	e793c080 	ldr	ip, [r3, r0, lsl #1]
        2ff320:	e1a0c84c 	mov	ip, ip, asr #16
        2ff324:	e79e5080 	ldr	r5, [lr, r0, lsl #1]
        2ff328:	e1a05845 	mov	r5, r5, asr #16
        2ff32c:	e04c5005 	sub	r5, ip, r5
        2ff330:	e3a07902 	mov	r7, #32768	; 0x8000
        2ff334:	e2477001 	sub	r7, r7, #1	; 0x1
        2ff338:	e1550007 	cmp	r5, r7
        2ff33c:	aa000002 	bge	2ff34c <logb+0x884>
        2ff340:	e3750902 	cmn	r5, #32768	; 0x8000
        2ff344:	c1a07005 	movgt	r7, r5
        2ff348:	d1a07006 	movle	r7, r6
        2ff34c:	e084c080 	add	ip, r4, r0, lsl #1
        2ff350:	e5cc7001 	strb	r7, [ip, #1]
        2ff354:	e1a05447 	mov	r5, r7, asr #8
        2ff358:	e5cc5000 	strb	r5, [ip]
        2ff35c:	e2800001 	add	r0, r0, #1	; 0x1
        2ff360:	e3500027 	cmp	r0, #39	; 0x27
        2ff364:	daffffe0 	ble	2ff2ec <logb+0x824>
        2ff368:	e8bd80f0 	ldmia	sp!, {r4, r5, r6, r7, pc}
        2ff36c:	e040c001 	sub	ip, r0, r1
        2ff370:	e792c08c 	ldr	ip, [r2, ip, lsl #1]
        2ff374:	e1a0c84c 	mov	ip, ip, asr #16
        2ff378:	e06cc78c 	rsb	ip, ip, ip, lsl #15
        2ff37c:	e28cc901 	add	ip, ip, #16384	; 0x4000
        2ff380:	e1a0c7cc 	mov	ip, ip, asr #15
        2ff384:	e08e5080 	add	r5, lr, r0, lsl #1
        2ff388:	e5c5c001 	strb	ip, [r5, #1]
        2ff38c:	e1a0c44c 	mov	ip, ip, asr #8
        2ff390:	e5c5c000 	strb	ip, [r5]
        2ff394:	e793c080 	ldr	ip, [r3, r0, lsl #1]
        2ff398:	e1a0c84c 	mov	ip, ip, asr #16
        2ff39c:	e79e5080 	ldr	r5, [lr, r0, lsl #1]
        2ff3a0:	e1a05845 	mov	r5, r5, asr #16
        2ff3a4:	e04c5005 	sub	r5, ip, r5
        2ff3a8:	e3a07902 	mov	r7, #32768	; 0x8000
        2ff3ac:	e2477001 	sub	r7, r7, #1	; 0x1
        2ff3b0:	e1550007 	cmp	r5, r7
        2ff3b4:	aa000002 	bge	2ff3c4 <logb+0x8fc>
        2ff3b8:	e3750902 	cmn	r5, #32768	; 0x8000
        2ff3bc:	c1a07005 	movgt	r7, r5
        2ff3c0:	d1a07006 	movle	r7, r6
        2ff3c4:	e084c080 	add	ip, r4, r0, lsl #1
        2ff3c8:	e5cc7001 	strb	r7, [ip, #1]
        2ff3cc:	e1a05447 	mov	r5, r7, asr #8
        2ff3d0:	e5cc5000 	strb	r5, [ip]
        2ff3d4:	e2800001 	add	r0, r0, #1	; 0x1
        2ff3d8:	e3500027 	cmp	r0, #39	; 0x27
        2ff3dc:	daffffe2 	ble	2ff36c <logb+0x8a4>
        2ff3e0:	e8bd80f0 	ldmia	sp!, {r4, r5, r6, r7, pc}
    */
}

/**
 * Symbol: LooksLikeIAndPoint__FP9SPEC_TYPEisPsT4
 * Address: 00304964
 */
void globals::LooksLikeIAndPoint() {
    /*
        304964:	e1a0c00d 	mov	ip, sp
        304968:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        30496c:	e24cb004 	sub	fp, ip, #4	; 0x4
        304970:	e1a05001 	mov	r5, r1
        304974:	e1a04003 	mov	r4, r3
        304978:	e1a09802 	mov	r9, r2, lsl #16
        30497c:	e1a09849 	mov	r9, r9, asr #16
        304980:	e3a07000 	mov	r7, #0	; 0x0
        304984:	e59b6004 	ldr	r6, [fp, #4]
        304988:	e5b0800c 	ldr	r8, [r0, #12]!
        30498c:	e3380000 	teq	r8, #0	; 0x0
        304990:	0a000025 	beq	304a2c <LooksLikeIAndPoint__FP9SPEC_TYPEisPsT4+0xc8>
        304994:	e1a00008 	mov	r0, r8
        304998:	eb605cf9 	bl	1b1bd84 <$IsUpperElem(SPEC_TYPE *)>
        30499c:	e3300000 	teq	r0, #0	; 0x0
        3049a0:	0a000021 	beq	304a2c <LooksLikeIAndPoint__FP9SPEC_TYPEisPsT4+0xc8>
        3049a4:	e5980004 	ldr	r0, [r8, #4]
        3049a8:	e1a00840 	mov	r0, r0, asr #16
        3049ac:	e1a01000 	mov	r1, r0
        3049b0:	e5983006 	ldr	r3, [r8, #6]
        3049b4:	e1a03843 	mov	r3, r3, asr #16
        3049b8:	e0802003 	add	r2, r0, r3
        3049bc:	e1a020c2 	mov	r2, r2, asr #1
        3049c0:	e7960080 	ldr	r0, [r6, r0, lsl #1]
        3049c4:	e1a00840 	mov	r0, r0, asr #16
        3049c8:	e796c082 	ldr	ip, [r6, r2, lsl #1]
        3049cc:	e1a0c84c 	mov	ip, ip, asr #16
        3049d0:	e150000c 	cmp	r0, ip
        3049d4:	b1a02001 	movlt	r2, r1
        3049d8:	e7960083 	ldr	r0, [r6, r3, lsl #1]
        3049dc:	e1a00840 	mov	r0, r0, asr #16
        3049e0:	e7961082 	ldr	r1, [r6, r2, lsl #1]
        3049e4:	e1a01841 	mov	r1, r1, asr #16
        3049e8:	e1500001 	cmp	r0, r1
        3049ec:	b1a02003 	movlt	r2, r3
        3049f0:	e7940085 	ldr	r0, [r4, r5, lsl #1]
        3049f4:	e1a00840 	mov	r0, r0, asr #16
        3049f8:	e7941082 	ldr	r1, [r4, r2, lsl #1]
        3049fc:	e1a01841 	mov	r1, r1, asr #16
        304a00:	e1500001 	cmp	r0, r1
        304a04:	ba000007 	blt	304a28 <LooksLikeIAndPoint__FP9SPEC_TYPEisPsT4+0xc4>
        304a08:	e7963085 	ldr	r3, [r6, r5, lsl #1]
        304a0c:	e1a03843 	mov	r3, r3, asr #16
        304a10:	e7962082 	ldr	r2, [r6, r2, lsl #1]
        304a14:	e1a02842 	mov	r2, r2, asr #16
        304a18:	e1530002 	cmp	r3, r2
        304a1c:	b0400001 	sublt	r0, r0, r1
        304a20:	b1500009 	cmplt	r0, r9
        304a24:	aa000000 	bge	304a2c <LooksLikeIAndPoint__FP9SPEC_TYPEisPsT4+0xc8>
        304a28:	e3a07001 	mov	r7, #1	; 0x1
        304a2c:	e1a00007 	mov	r0, r7
        304a30:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: LooksLikeSZ__FPsT1iT3
 * Address: 003053f8
 */
void globals::LooksLikeSZ() {
    /*
        3053f8:	e1a0c00d 	mov	ip, sp
        3053fc:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        305400:	e24cb004 	sub	fp, ip, #4	; 0x4
        305404:	e1a06000 	mov	r6, r0
        305408:	e1a05001 	mov	r5, r1
        30540c:	e1a04003 	mov	r4, r3
        305410:	e0820003 	add	r0, r2, r3
        305414:	e1a070c0 	mov	r7, r0, asr #1
        305418:	e0430002 	sub	r0, r3, r2
        30541c:	e3a08000 	mov	r8, #0	; 0x0
        305420:	e3500004 	cmp	r0, #4	; 0x4
        305424:	ba000010 	blt	30546c <LooksLikeSZ__FPsT1iT3+0x74>
        305428:	e1a03007 	mov	r3, r7
        30542c:	e1a01005 	mov	r1, r5
        305430:	e1a00006 	mov	r0, r6
        305434:	eb6062ad 	bl	1b1def0 <$CurvNonQuadr__FPsT1iT3>
        305438:	e1a09000 	mov	r9, r0
        30543c:	e1a03004 	mov	r3, r4
        305440:	e1a02007 	mov	r2, r7
        305444:	e1a01005 	mov	r1, r5
        305448:	e1a00006 	mov	r0, r6
        30544c:	eb6062a7 	bl	1b1def0 <$CurvNonQuadr__FPsT1iT3>
        305450:	e1a01000 	mov	r1, r0
        305454:	e1a00009 	mov	r0, r9
        305458:	e3a02005 	mov	r2, #5	; 0x5
        30545c:	eb6062a1 	bl	1b1dee8 <$CurvLikeSZ__FsN21>
        305460:	e3300000 	teq	r0, #0	; 0x0
        305464:	13a00001 	movne	r0, #1	; 0x1
        305468:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        30546c:	e1a00008 	mov	r0, r8
        305470:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: LowAlloc__FPPssT2P8low_type
 * Address: 00305a28
 */
void globals::LowAlloc() {
    /*
        305a28:	e1a0c00d 	mov	ip, sp
        305a2c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        305a30:	e24cb004 	sub	fp, ip, #4	; 0x4
        305a34:	e1a05000 	mov	r5, r0
        305a38:	e1a04003 	mov	r4, r3
        305a3c:	e1a07801 	mov	r7, r1, lsl #16
        305a40:	e1a07847 	mov	r7, r7, asr #16
        305a44:	e1a06802 	mov	r6, r2, lsl #16
        305a48:	e1a06846 	mov	r6, r6, asr #16
        305a4c:	e0000697 	mul	r0, r7, r6
        305a50:	e5931028 	ldr	r1, [r3, #40]
        305a54:	e1a01841 	mov	r1, r1, asr #16
        305a58:	e0801081 	add	r1, r0, r1, lsl #1
        305a5c:	e5930052 	ldr	r0, [r3, #82]
        305a60:	e0810840 	add	r0, r1, r0, asr #16
        305a64:	e1a00080 	mov	r0, r0, lsl #1
        305a68:	e594105a 	ldr	r1, [r4, #90]
        305a6c:	e1a01841 	mov	r1, r1, asr #16
        305a70:	e0811081 	add	r1, r1, r1, lsl #1
        305a74:	e0800101 	add	r0, r0, r1, lsl #2
        305a78:	eb5da74f 	bl	1a6f7bc <$HWRMemoryAlloc(unsigned long)>
        305a7c:	e5850000 	str	r0, [r5]
        305a80:	e3300000 	teq	r0, #0	; 0x0
        305a84:	03a00001 	moveq	r0, #1	; 0x1
        305a88:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        305a8c:	e584002c 	str	r0, [r4, #44]
        305a90:	e5940028 	ldr	r0, [r4, #40]
        305a94:	e1a00840 	mov	r0, r0, asr #16
        305a98:	e5951000 	ldr	r1, [r5]
        305a9c:	e0811080 	add	r1, r1, r0, lsl #1
        305aa0:	e5841030 	str	r1, [r4, #48]
        305aa4:	e0810080 	add	r0, r1, r0, lsl #1
        305aa8:	e5840054 	str	r0, [r4, #84]
        305aac:	e594105a 	ldr	r1, [r4, #90]
        305ab0:	e1a01841 	mov	r1, r1, asr #16
        305ab4:	e0811081 	add	r1, r1, r1, lsl #1
        305ab8:	e0800101 	add	r0, r0, r1, lsl #2
        305abc:	e584004c 	str	r0, [r4, #76]
        305ac0:	e3a00000 	mov	r0, #0	; 0x0
        305ac4:	e3570000 	cmp	r7, #0	; 0x0
        305ac8:	da00000d 	ble	305b04 <LowAlloc__FPPssT2P8low_type+0xdc>
        305acc:	e1a01446 	mov	r1, r6, asr #8
        305ad0:	e594204c 	ldr	r2, [r4, #76]
        305ad4:	e5943052 	ldr	r3, [r4, #82]
        305ad8:	e1a03843 	mov	r3, r3, asr #16
        305adc:	e0823083 	add	r3, r2, r3, lsl #1
        305ae0:	e0020096 	mul	r2, r6, r0
        305ae4:	e0833082 	add	r3, r3, r2, lsl #1
        305ae8:	e0842180 	add	r2, r4, r0, lsl #3
        305aec:	e5823004 	str	r3, [r2, #4]
        305af0:	e5c26009 	strb	r6, [r2, #9]
        305af4:	e5c21008 	strb	r1, [r2, #8]
        305af8:	e2800001 	add	r0, r0, #1	; 0x1
        305afc:	e1500007 	cmp	r0, r7
        305b00:	bafffff2 	blt	305ad0 <LowAlloc__FPPssT2P8low_type+0xa8>
        305b04:	e3a00000 	mov	r0, #0	; 0x0
        305b08:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: low_dealloc(short **)
 * Address: 00306f74
 */
low_dealloc(short **) {
    /*
        306f74:	e1a0c00d 	mov	ip, sp
        306f78:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        306f7c:	e24cb004 	sub	fp, ip, #4	; 0x4
        306f80:	e1a04000 	mov	r4, r0
        306f84:	e5900000 	ldr	r0, [r0]
        306f88:	e3300000 	teq	r0, #0	; 0x0
        306f8c:	1b5da20b 	blne	1a6f7c0 <$HWRMemoryFree(void *)>
        306f90:	e3a00000 	mov	r0, #0	; 0x0
        306f94:	e5840000 	str	r0, [r4]
        306f98:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: LengthOfTraj__FPsT1iT3PlT1
 * Address: 003079b0
 */
void globals::LengthOfTraj() {
    /*
        3079b0:	e1a0c00d 	mov	ip, sp
        3079b4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        3079b8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        3079bc:	e24cb014 	sub	fp, ip, #20	; 0x14
        3079c0:	e1a07000 	mov	r7, r0
        3079c4:	e1a06001 	mov	r6, r1
        3079c8:	e1a04002 	mov	r4, r2
        3079cc:	e1a05003 	mov	r5, r3
        3079d0:	e3a00000 	mov	r0, #0	; 0x0
        3079d4:	e59b1018 	ldr	r1, [fp, #24]
        3079d8:	e5c10001 	strb	r0, [r1, #1]
        3079dc:	e5c10000 	strb	r0, [r1]
        3079e0:	e3a00001 	mov	r0, #1	; 0x1
        3079e4:	e59b1014 	ldr	r1, [fp, #20]
        3079e8:	e1520003 	cmp	r2, r3
        3079ec:	e5810000 	str	r0, [r1]
        3079f0:	da000004 	ble	307a08 <LengthOfTraj__FPsT1iT3PlT1+0x58>
        3079f4:	e59b1018 	ldr	r1, [fp, #24]
        3079f8:	e5c10001 	strb	r0, [r1, #1]
        3079fc:	e3a00000 	mov	r0, #0	; 0x0
        307a00:	e5c10000 	strb	r0, [r1]
        307a04:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        307a08:	e7960084 	ldr	r0, [r6, r4, lsl #1]
        307a0c:	e1a00840 	mov	r0, r0, asr #16
        307a10:	e3700001 	cmn	r0, #1	; 0x1
        307a14:	0a00000a 	beq	307a44 <LengthOfTraj__FPsT1iT3PlT1+0x94>
        307a18:	e1540005 	cmp	r4, r5
        307a1c:	03a00000 	moveq	r0, #0	; 0x0
        307a20:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        307a24:	e3a0a000 	mov	sl, #0	; 0x0
        307a28:	e1a08004 	mov	r8, r4
        307a2c:	e2849001 	add	r9, r4, #1	; 0x1
        307a30:	aa000016 	bge	307a90 <LengthOfTraj__FPsT1iT3PlT1+0xe0>
        307a34:	e7960089 	ldr	r0, [r6, r9, lsl #1]
        307a38:	e1a00840 	mov	r0, r0, asr #16
        307a3c:	e3700001 	cmn	r0, #1	; 0x1
        307a40:	1a000001 	bne	307a4c <LengthOfTraj__FPsT1iT3PlT1+0x9c>
        307a44:	e3a00002 	mov	r0, #2	; 0x2
        307a48:	eaffffe9 	b	3079f4 <LengthOfTraj__FPsT1iT3PlT1+0x44>
        307a4c:	e7961088 	ldr	r1, [r6, r8, lsl #1]
        307a50:	e1a01841 	mov	r1, r1, asr #16
        307a54:	e0400001 	sub	r0, r0, r1
        307a58:	e7971089 	ldr	r1, [r7, r9, lsl #1]
        307a5c:	e1a01841 	mov	r1, r1, asr #16
        307a60:	e7972088 	ldr	r2, [r7, r8, lsl #1]
        307a64:	e1a02842 	mov	r2, r2, asr #16
        307a68:	e0412002 	sub	r2, r1, r2
        307a6c:	e0010292 	mul	r1, r2, r2
        307a70:	e0020090 	mul	r2, r0, r0
        307a74:	e0810002 	add	r0, r1, r2
        307a78:	eb604cab 	bl	1b1ad2c <$HWRMathILSqrt(long)>
        307a7c:	e080a00a 	add	sl, r0, sl
        307a80:	e2888001 	add	r8, r8, #1	; 0x1
        307a84:	e2899001 	add	r9, r9, #1	; 0x1
        307a88:	e1580005 	cmp	r8, r5
        307a8c:	baffffe8 	blt	307a34 <LengthOfTraj__FPsT1iT3PlT1+0x84>
        307a90:	e7960084 	ldr	r0, [r6, r4, lsl #1]
        307a94:	e1a00840 	mov	r0, r0, asr #16
        307a98:	e7961085 	ldr	r1, [r6, r5, lsl #1]
        307a9c:	e1a01841 	mov	r1, r1, asr #16
        307aa0:	e0400001 	sub	r0, r0, r1
        307aa4:	e7971084 	ldr	r1, [r7, r4, lsl #1]
        307aa8:	e1a01841 	mov	r1, r1, asr #16
        307aac:	e7972085 	ldr	r2, [r7, r5, lsl #1]
        307ab0:	e1a02842 	mov	r2, r2, asr #16
        307ab4:	e0412002 	sub	r2, r1, r2
        307ab8:	e0010292 	mul	r1, r2, r2
        307abc:	e0020090 	mul	r2, r0, r0
        307ac0:	e0810002 	add	r0, r1, r2
        307ac4:	eb604c98 	bl	1b1ad2c <$HWRMathILSqrt(long)>
        307ac8:	e59b1014 	ldr	r1, [fp, #20]
        307acc:	e5810000 	str	r0, [r1]
        307ad0:	e1a0000a 	mov	r0, sl
        307ad4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: LargestFreeInHeap
 * Address: 003112b4
 */
void globals::LargestFreeInHeap() {
    /*
        3112b4:	e1a0c00d 	mov	ip, sp
        3112b8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        3112bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        3112c0:	e3a04000 	mov	r4, #0	; 0x0
        3112c4:	e3300000 	teq	r0, #0	; 0x0
        3112c8:	0b633f84 	bleq	1be10e0 <$GetCurrentHeap>
        3112cc:	e5900020 	ldr	r0, [r0, #32]
        3112d0:	e3300000 	teq	r0, #0	; 0x0
        3112d4:	0a000008 	beq	3112fc <LargestFreeInHeap+0x48>
        3112d8:	e5901000 	ldr	r1, [r0]
        3112dc:	e1540001 	cmp	r4, r1
        3112e0:	b1a04001 	movlt	r4, r1
        3112e4:	e5900004 	ldr	r0, [r0, #4]
        3112e8:	e3300000 	teq	r0, #0	; 0x0
        3112ec:	1afffff9 	bne	3112d8 <LargestFreeInHeap+0x24>
        3112f0:	e3340000 	teq	r4, #0	; 0x0
        3112f4:	12440010 	subne	r0, r4, #16	; 0x10
        3112f8:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        3112fc:	e1a00004 	mov	r0, r4
        311300:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: LockedBlock
 * Address: 00312e68
 */
void globals::LockedBlock() {
    /*
        312e68:	e5902000 	ldr	r2, [r0]
        312e6c:	e3520000 	cmp	r2, #0	; 0x0
        312e70:	a0800002 	addge	r0, r0, r2
        312e74:	b5902004 	ldrlt	r2, [r0, #4]
        312e78:	b0820000 	addlt	r0, r2, r0
        312e7c:	e3a02000 	mov	r2, #0	; 0x0
        312e80:	e1300001 	teq	r0, r1
        312e84:	0a00000c 	beq	312ebc <LockedBlock+0x54>
        312e88:	e5d03000 	ldrb	r3, [r0]
        312e8c:	e3130080 	tst	r3, #128	; 0x80
        312e90:	0a000005 	beq	312eac <LockedBlock+0x44>
        312e94:	e5d03002 	ldrb	r3, [r0, #2]
        312e98:	e3330000 	teq	r3, #0	; 0x0
        312e9c:	05903004 	ldreq	r3, [r0, #4]
        312ea0:	00830000 	addeq	r0, r3, r0
        312ea4:	0a000002 	beq	312eb4 <LockedBlock+0x4c>
        312ea8:	e1a0f00e 	mov	pc, lr
        312eac:	e5903000 	ldr	r3, [r0]
        312eb0:	e0800003 	add	r0, r0, r3
        312eb4:	e1500001 	cmp	r0, r1
        312eb8:	3afffff2 	bcc	312e88 <LockedBlock+0x20>
        312ebc:	e1a00002 	mov	r0, r2
        312ec0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: LSearch__FRC6RefVarN41
 * Address: 00317028
 */
void globals::LSearch() {
    /*
        317028:	e1a0c00d 	mov	ip, sp
        31702c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        317030:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        317034:	e24cb014 	sub	fp, ip, #20	; 0x14
        317038:	e1a04000 	mov	r4, r0
        31703c:	e1a05001 	mov	r5, r1
        317040:	e1a06002 	mov	r6, r2
        317044:	eb637250 	bl	1bf398c <$IsArray(RefVar const &)>
        317048:	e3300000 	teq	r0, #0	; 0x0
        31704c:	01a01004 	moveq	r1, r4
        317050:	059f0100 	ldreq	r0, [pc, #100]	; 317158 <LSearch__FRC6RefVarN41+0x130>
        317054:	0b63c500 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        317058:	e5940000 	ldr	r0, [r4]
        31705c:	e5900000 	ldr	r0, [r0]
        317060:	eb62b891 	bl	1bc52ac <$Length(long)>
        317064:	e1a09000 	mov	r9, r0
        317068:	e5960000 	ldr	r0, [r6]
        31706c:	e5900000 	ldr	r0, [r0]
        317070:	e3100003 	tst	r0, #3	; 0x3
        317074:	01a00140 	moveq	r0, r0, asr #2
        317078:	0a000000 	beq	317080 <LSearch__FRC6RefVarN41+0x58>
        31707c:	eb62ac26 	bl	1bc211c <$_RINTError(long)>
        317080:	e1a07000 	mov	r7, r0
        317084:	e1500009 	cmp	r0, r9
        317088:	a3e00000 	mvnge	r0, #0	; 0x0
        31708c:	a91baff0 	ldmgedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        317090:	e3570000 	cmp	r7, #0	; 0x0
        317094:	b1a01006 	movlt	r1, r6
        317098:	b59f00bc 	ldrlt	r0, [pc, #bc]	; 31715c <LSearch__FRC6RefVarN41+0x134>
        31709c:	bb5cb464 	bllt	1a44234 <$ThrowExFramesWithBadValue(long, RefVar const &)>
        3170a0:	e3e08000 	mvn	r8, #0	; 0x0
        3170a4:	e3a00000 	mov	r0, #0	; 0x0
        3170a8:	e52d0004 	str	r0, [sp, -#4]!
        3170ac:	e59b1010 	ldr	r1, [fp, #16]
        3170b0:	e5910000 	ldr	r0, [r1]
        3170b4:	e5900000 	ldr	r0, [r0]
        3170b8:	eb62b879 	bl	1bc52a4 <$IsSymbol(long)>
        3170bc:	e3300000 	teq	r0, #0	; 0x0
        3170c0:	0a00002d 	beq	31717c <LSearch__FRC6RefVarN41+0x154>
        3170c4:	e59b2014 	ldr	r2, [fp, #20]
        3170c8:	e5920000 	ldr	r0, [r2]
        3170cc:	e5900000 	ldr	r0, [r0]
        3170d0:	e3300002 	teq	r0, #2	; 0x2
        3170d4:	1a000028 	bne	31717c <LSearch__FRC6RefVarN41+0x154>
        3170d8:	e24dd004 	sub	sp, sp, #4	; 0x4
        3170dc:	e5940000 	ldr	r0, [r4]
        3170e0:	e5900000 	ldr	r0, [r0]
        3170e4:	eb62bca3 	bl	1bc6378 <$Slots(long)>
        3170e8:	e58d0000 	str	r0, [sp]
        3170ec:	e080a109 	add	sl, r0, r9, lsl #2
        3170f0:	e59b1010 	ldr	r1, [fp, #16]
        3170f4:	e5910000 	ldr	r0, [r1]
        3170f8:	e5900000 	ldr	r0, [r0]
        3170fc:	e59f105c 	ldr	r1, [pc, #5c]	; 317160 <LSearch__FRC6RefVarN41+0x138>
        317100:	e5911000 	ldr	r1, [r1]
        317104:	e5911000 	ldr	r1, [r1]
        317108:	eb62b448 	bl	1bc4230 <$EQRef__FlT1>
        31710c:	e3300000 	teq	r0, #0	; 0x0
        317110:	0a000016 	beq	317170 <LSearch__FRC6RefVarN41+0x148>
        317114:	e3e00000 	mvn	r0, #0	; 0x0
        317118:	e58d0004 	str	r0, [sp, #4]
        31711c:	e59d0000 	ldr	r0, [sp]
        317120:	e0806107 	add	r6, r0, r7, lsl #2
        317124:	e156000a 	cmp	r6, sl
        317128:	2a000010 	bcs	317170 <LSearch__FRC6RefVarN41+0x148>
        31712c:	e5950000 	ldr	r0, [r5]
        317130:	e5900000 	ldr	r0, [r0]
        317134:	e5961000 	ldr	r1, [r6]
        317138:	eb62b43c 	bl	1bc4230 <$EQRef__FlT1>
        31713c:	e3300000 	teq	r0, #0	; 0x0
        317140:	0a000007 	beq	317164 <LSearch__FRC6RefVarN41+0x13c>
        317144:	e59d0000 	ldr	r0, [sp]
        317148:	e0568000 	subs	r8, r6, r0
        31714c:	42888003 	addmi	r8, r8, #3	; 0x3
        317150:	e1a08148 	mov	r8, r8, asr #2
        317154:	ea000005 	b	317170 <LSearch__FRC6RefVarN41+0x148>
        317158:	ffff42ef 	swinv	0x00ff42ef
        31715c:	ffff43b3 	swinv	0x00ff43b3
        317160:	00681ce8 	rsbeq	r1, r8, r8, ror #25
        317164:	e2866004 	add	r6, r6, #4	; 0x4
        317168:	e156000a 	cmp	r6, sl
        31716c:	3affffee 	bcc	31712c <LSearch__FRC6RefVarN41+0x104>
        317170:	e5bd0004 	ldr	r0, [sp, #4]!
        317174:	e3300000 	teq	r0, #0	; 0x0
        317178:	1a000044 	bne	317290 <LSearch__FRC6RefVarN41+0x268>
        31717c:	e5940000 	ldr	r0, [r4]
        317180:	e5900000 	ldr	r0, [r0]
        317184:	eb62b84a 	bl	1bc52b4 <$LockRef(long)>
        317188:	e3a00000 	mov	r0, #0	; 0x0
        31718c:	e3a0a000 	mov	sl, #0	; 0x0
        317190:	e52d006c 	str	r0, [sp, -#108]!
        317194:	e28d0008 	add	r0, sp, #8	; 0x8
        317198:	eb626df5 	bl	1bb2974 <$setjmp>
        31719c:	e3300000 	teq	r0, #0	; 0x0
        3171a0:	1a000032 	bne	317270 <LSearch__FRC6RefVarN41+0x248>
        3171a4:	e1a0000d 	mov	r0, sp
        3171a8:	eb6323b3 	bl	1be007c <$AddExceptionHandler>
        3171ac:	e24dd024 	sub	sp, sp, #36	; 0x24
        3171b0:	e5940000 	ldr	r0, [r4]
        3171b4:	e5900000 	ldr	r0, [r0]
        3171b8:	eb62bc6e 	bl	1bc6378 <$Slots(long)>
        3171bc:	e1a06000 	mov	r6, r0
        3171c0:	e0809109 	add	r9, r0, r9, lsl #2
        3171c4:	e1a0000d 	mov	r0, sp
        3171c8:	e3a03001 	mov	r3, #1	; 0x1
        3171cc:	e28b2010 	add	r2, fp, #16	; 0x10
        3171d0:	e8920006 	ldmia	r2, {r1, r2}
        3171d4:	eb5d0ab5 	bl	1a59cb0 <TGeneralizedTestFnVar::$__ct(RefVar const &, RefVar const &, int)>
        3171d8:	e0867107 	add	r7, r6, r7, lsl #2
        3171dc:	e1570009 	cmp	r7, r9
        3171e0:	2a000012 	bcs	317230 <LSearch__FRC6RefVarN41+0x208>
        3171e4:	e1a01007 	mov	r1, r7
        3171e8:	e1a0000d 	mov	r0, sp
        3171ec:	eb5ce9b2 	bl	1a518bc <TGeneralizedTestFnVar::$ApplyKey(long *)>
        3171f0:	e59d101c 	ldr	r1, [sp, #28]
        3171f4:	e5810000 	str	r0, [r1]
        3171f8:	e5951000 	ldr	r1, [r5]
        3171fc:	e59d201c 	ldr	r2, [sp, #28]
        317200:	e1a0000d 	mov	r0, sp
        317204:	e1a0e00f 	mov	lr, pc
        317208:	e59df020 	ldr	pc, [sp, #32]
        31720c:	e3300000 	teq	r0, #0	; 0x0
        317210:	1a000003 	bne	317224 <LSearch__FRC6RefVarN41+0x1fc>
        317214:	e0578006 	subs	r8, r7, r6
        317218:	42888003 	addmi	r8, r8, #3	; 0x3
        31721c:	e1a08148 	mov	r8, r8, asr #2
        317220:	ea000002 	b	317230 <LSearch__FRC6RefVarN41+0x208>
        317224:	e2877004 	add	r7, r7, #4	; 0x4
        317228:	e1570009 	cmp	r7, r9
        31722c:	3affffec 	bcc	3171e4 <LSearch__FRC6RefVarN41+0x1bc>
        317230:	e59d001c 	ldr	r0, [sp, #28]
        317234:	eb62afe0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        317238:	e59d0018 	ldr	r0, [sp, #24]
        31723c:	eb62afde 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        317240:	e59d0014 	ldr	r0, [sp, #20]
        317244:	eb62afdc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        317248:	e59d0010 	ldr	r0, [sp, #16]
        31724c:	eb62afda 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        317250:	e59d000c 	ldr	r0, [sp, #12]
        317254:	eb62afd8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        317258:	e59d0008 	ldr	r0, [sp, #8]
        31725c:	eb62afd6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        317260:	e28dd024 	add	sp, sp, #36	; 0x24
        317264:	e1a0000d 	mov	r0, sp
        317268:	eb632792 	bl	1be10b8 <$ExitHandler>
        31726c:	ea000000 	b	317274 <LSearch__FRC6RefVarN41+0x24c>
        317270:	e3a0a001 	mov	sl, #1	; 0x1
        317274:	e5940000 	ldr	r0, [r4]
        317278:	e5900000 	ldr	r0, [r0]
        31727c:	eb62c47b 	bl	1bc8470 <$UnlockRef(long)>
        317280:	e33a0000 	teq	sl, #0	; 0x0
        317284:	11a0000d 	movne	r0, sp
        317288:	1b632bb1 	blne	1be2154 <$NextHandler>
        31728c:	e28dd06c 	add	sp, sp, #108	; 0x6c
        317290:	e1a00008 	mov	r0, r8
        317294:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: ListEQ1__FlT1Pc
 * Address: 003196ec
 */
void globals::ListEQ1() {
    /*
        3196ec:	e1a0c00d 	mov	ip, sp
        3196f0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        3196f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        3196f8:	e1a04000 	mov	r4, r0
        3196fc:	e1a06001 	mov	r6, r1
        319700:	e1a05002 	mov	r5, r2
        319704:	e2000003 	and	r0, r0, #3	; 0x3
        319708:	e3300001 	teq	r0, #1	; 0x1
        31970c:	1a000007 	bne	319730 <ListEQ1__FlT1Pc+0x44>
        319710:	e2440001 	sub	r0, r4, #1	; 0x1
        319714:	e5901000 	ldr	r1, [r0]
        319718:	e3110020 	tst	r1, #32	; 0x20
        31971c:	0a000005 	beq	319738 <ListEQ1__FlT1Pc+0x4c>
        319720:	e1a00004 	mov	r0, r4
        319724:	eb5c9a1a 	bl	1a3ff94 <$ForwardReference(long)>
        319728:	e2400001 	sub	r0, r0, #1	; 0x1
        31972c:	ea000001 	b	319738 <ListEQ1__FlT1Pc+0x4c>
        319730:	e1a00004 	mov	r0, r4
        319734:	eb5ca275 	bl	1a42110 <$NoFaultObjectPtr(long)>
        319738:	e3a07001 	mov	r7, #1	; 0x1
        31973c:	e1300005 	teq	r0, r5
        319740:	0a000012 	beq	319790 <ListEQ1__FlT1Pc+0xa4>
        319744:	e59f104c 	ldr	r1, [pc, #4c]	; 319798 <ListEQ1__FlT1Pc+0xac>
        319748:	e3a08000 	mov	r8, #0	; 0x0
        31974c:	e1540001 	cmp	r4, r1
        319750:	31560001 	cmpcc	r6, r1
        319754:	3a000011 	bcc	3197a0 <ListEQ1__FlT1Pc+0xb4>
        319758:	e5902008 	ldr	r2, [r0, #8]
        31975c:	e59f1038 	ldr	r1, [pc, #38]	; 31979c <ListEQ1__FlT1Pc+0xb0>
        319760:	e1320001 	teq	r2, r1
        319764:	05952008 	ldreq	r2, [r5, #8]
        319768:	01320001 	teqeq	r2, r1
        31976c:	0590100c 	ldreq	r1, [r0, #12]
        319770:	0595200c 	ldreq	r2, [r5, #12]
        319774:	01310002 	teqeq	r1, r2
        319778:	1a000008 	bne	3197a0 <ListEQ1__FlT1Pc+0xb4>
        31977c:	e2851010 	add	r1, r5, #16	; 0x10
        319780:	e2800010 	add	r0, r0, #16	; 0x10
        319784:	eb63bb35 	bl	1c08460 <$symcmp__FPcT1>
        319788:	e3300000 	teq	r0, #0	; 0x0
        31978c:	1a000003 	bne	3197a0 <ListEQ1__FlT1Pc+0xb4>
        319790:	e1a00007 	mov	r0, r7
        319794:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        319798:	0071fc4c 	rsbeqs	pc, r1, ip, asr #24
        31979c:	00055552 	andeq	r5, r5, r2, asr r5
        3197a0:	e1a00008 	mov	r0, r8
        3197a4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: ListEQ__FlT1Pc
 * Address: 003197a8
 */
void globals::ListEQ() {
    /*
        3197a8:	e1300001 	teq	r0, r1
        3197ac:	03a00001 	moveq	r0, #1	; 0x1
        3197b0:	01a0f00e 	moveq	pc, lr
        3197b4:	e0003001 	and	r3, r0, r1
        3197b8:	e3130001 	tst	r3, #1	; 0x1
        3197bc:	1a5cf0c7 	bne	1a55ae0 <$ListEQ1__FlT1Pc>
        3197c0:	03a00000 	moveq	r0, #0	; 0x0
        3197c4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: LockRef(long)
 * Address: 0031b0bc
 */
LockRef(long) {
    /*
        31b0bc:	e1a0c00d 	mov	ip, sp
        31b0c0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        31b0c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        31b0c8:	eb62a889 	bl	1bc52f4 <$ObjectPtr(long)>
        31b0cc:	e5901000 	ldr	r1, [r0]
        31b0d0:	e3110040 	tst	r1, #64	; 0x40
        31b0d4:	191ba800 	ldmnedb	fp, {fp, sp, pc}
        31b0d8:	e5d01004 	ldrb	r1, [r0, #4]
        31b0dc:	e33100ff 	teq	r1, #255	; 0xff
        31b0e0:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        31b0e4:	e2802004 	add	r2, r0, #4	; 0x4
        31b0e8:	e5d21000 	ldrb	r1, [r2]
        31b0ec:	e2813001 	add	r3, r1, #1	; 0x1
        31b0f0:	e5c23000 	strb	r3, [r2]
        31b0f4:	e3310000 	teq	r1, #0	; 0x0
        31b0f8:	05901000 	ldreq	r1, [r0]
        31b0fc:	03811010 	orreq	r1, r1, #16	; 0x10
        31b100:	05801000 	streq	r1, [r0]
        31b104:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: Length(RefVar const &)
 * Address: 0031c8d8
 */
Length(RefVar const &) {
    /*
        31c8d8:	e5900000 	ldr	r0, [r0]
        31c8dc:	e5900000 	ldr	r0, [r0]
        31c8e0:	ea62a271 	b	1bc52ac <$Length(long)>
    */
}

/**
 * Symbol: LockedBinaryPtr(RefVar const &)
 * Address: 0031c9f0
 */
LockedBinaryPtr(RefVar const &) {
    /*
        31c9f0:	e1a0c00d 	mov	ip, sp
        31c9f4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        31c9f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        31c9fc:	e1a04000 	mov	r4, r0
        31ca00:	e5900000 	ldr	r0, [r0]
        31ca04:	e5900000 	ldr	r0, [r0]
        31ca08:	eb62a229 	bl	1bc52b4 <$LockRef(long)>
        31ca0c:	e5940000 	ldr	r0, [r4]
        31ca10:	e5900000 	ldr	r0, [r0]
        31ca14:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        31ca18:	ea6295cf 	b	1bc215c <$BinaryData(long)>
    */
}

/**
 * Symbol: LockRefArg(RefVar const &)
 * Address: 0031ca1c
 */
LockRefArg(RefVar const &) {
    /*
        31ca1c:	e5900000 	ldr	r0, [r0]
        31ca20:	e5900000 	ldr	r0, [r0]
        31ca24:	ea62a222 	b	1bc52b4 <$LockRef(long)>
    */
}

/**
 * Symbol: Length(long)
 * Address: 0031e2ac
 */
Length(long) {
    /*
        31e2ac:	e1a0c00d 	mov	ip, sp
        31e2b0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        31e2b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        31e2b8:	e1a04000 	mov	r4, r0
        31e2bc:	e59f507c 	ldr	r5, [pc, #7c]	; 31e340 <Length(long)+0x94>
        31e2c0:	e595000c 	ldr	r0, [r5, #12]
        31e2c4:	e1340000 	teq	r4, r0
        31e2c8:	05b50010 	ldreq	r0, [r5, #16]!
        31e2cc:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        31e2d0:	e24dd004 	sub	sp, sp, #4	; 0x4
        31e2d4:	e3140001 	tst	r4, #1	; 0x1
        31e2d8:	1a000008 	bne	31e300 <Length(long)+0x54>
        31e2dc:	e1a00004 	mov	r0, r4
        31e2e0:	eb628f99 	bl	1bc214c <$AllocateRefHandle(long)>
        31e2e4:	e58d0000 	str	r0, [sp]
        31e2e8:	e1a0100d 	mov	r1, sp
        31e2ec:	e3a000de 	mov	r0, #222	; 0xde
        31e2f0:	e2400cbe 	sub	r0, r0, #48640	; 0xbe00
        31e2f4:	eb63a858 	bl	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        31e2f8:	e59d0000 	ldr	r0, [sp]
        31e2fc:	eb6293ae 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31e300:	e3a00001 	mov	r0, #1	; 0x1
        31e304:	e585000c 	str	r0, [r5, #12]
        31e308:	e1a00004 	mov	r0, r4
        31e30c:	eb629bf8 	bl	1bc52f4 <$ObjectPtr(long)>
        31e310:	e595100c 	ldr	r1, [r5, #12]
        31e314:	e3310000 	teq	r1, #0	; 0x0
        31e318:	1585400c 	strne	r4, [r5, #12]
        31e31c:	e5901000 	ldr	r1, [r0]
        31e320:	e20130ff 	and	r3, r1, #255	; 0xff
        31e324:	e3130001 	tst	r3, #1	; 0x1
        31e328:	e3e0200b 	mvn	r2, #11	; 0xb
        31e32c:	0a000004 	beq	31e344 <Length(long)+0x98>
        31e330:	e0920421 	adds	r0, r2, r1, lsr #8
        31e334:	42800003 	addmi	r0, r0, #3	; 0x3
        31e338:	e1a00140 	mov	r0, r0, asr #2
        31e33c:	ea00000b 	b	31e370 <Length(long)+0xc4>
        31e340:	0c105548 	ldceq	5, cr5, [r0], -#288
        31e344:	e3130002 	tst	r3, #2	; 0x2
        31e348:	0a000007 	beq	31e36c <Length(long)+0xc0>
        31e34c:	e3a01000 	mov	r1, #0	; 0x0
        31e350:	e5a5100c 	str	r1, [r5, #12]!
        31e354:	e1a01000 	mov	r1, r0
        31e358:	e2800010 	add	r0, r0, #16	; 0x10
        31e35c:	e591100c 	ldr	r1, [r1, #12]
        31e360:	e1a0e00f 	mov	lr, pc
        31e364:	e591f000 	ldr	pc, [r1]
        31e368:	ea000001 	b	31e374 <Length(long)+0xc8>
        31e36c:	e0820421 	add	r0, r2, r1, lsr #8
        31e370:	e5a50010 	str	r0, [r5, #16]!
        31e374:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: LowStFiltr(low_type *, short *, SPEC_TYPE *, PS_point_type *, PS_point_type *)
 * Address: 0032aa38
 */
LowStFiltr(low_type *, short *, SPEC_TYPE *, PS_point_type *, PS_point_type *) {
    /*
        32aa38:	e1a0c00d 	mov	ip, sp
        32aa3c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        32aa40:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        32aa44:	e24cb014 	sub	fp, ip, #20	; 0x14
        32aa48:	e1a04000 	mov	r4, r0
        32aa4c:	e59ba014 	ldr	sl, [fp, #20]
        32aa50:	e24dd028 	sub	sp, sp, #40	; 0x28
        32aa54:	e5d20003 	ldrb	r0, [r2, #3]
        32aa58:	e1a01800 	mov	r1, r0, lsl #16
        32aa5c:	e1a01841 	mov	r1, r1, asr #16
        32aa60:	e0811081 	add	r1, r1, r1, lsl #1
        32aa64:	e5943054 	ldr	r3, [r4, #84]
        32aa68:	e0838101 	add	r8, r3, r1, lsl #2
        32aa6c:	e2845034 	add	r5, r4, #52	; 0x34
        32aa70:	e8950022 	ldmia	r5, {r1, r5}
        32aa74:	e58d1024 	str	r1, [sp, #36]
        32aa78:	e5927004 	ldr	r7, [r2, #4]
        32aa7c:	e1a07847 	mov	r7, r7, asr #16
        32aa80:	e5929006 	ldr	r9, [r2, #6]
        32aa84:	e1a09849 	mov	r9, r9, asr #16
        32aa88:	e59a1008 	ldr	r1, [sl, #8]
        32aa8c:	e1a01841 	mov	r1, r1, asr #16
        32aa90:	e58d001c 	str	r0, [sp, #28]
        32aa94:	e58d1020 	str	r1, [sp, #32]
        32aa98:	e5da0002 	ldrb	r0, [sl, #2]
        32aa9c:	e3a06001 	mov	r6, #1	; 0x1
        32aaa0:	e58d0018 	str	r0, [sp, #24]
        32aaa4:	e28d3014 	add	r3, sp, #20	; 0x14
        32aaa8:	e28d2010 	add	r2, sp, #16	; 0x10
        32aaac:	e92d000c 	stmdb	sp!, {r2, r3}
        32aab0:	e1a02009 	mov	r2, r9
        32aab4:	e1a01007 	mov	r1, r7
        32aab8:	e1a00005 	mov	r0, r5
        32aabc:	e59b3008 	ldr	r3, [fp, #8]
        32aac0:	eb5ff655 	bl	1b2841c <$RelHigh__FPsiT2N31>
        32aac4:	e28dd008 	add	sp, sp, #8	; 0x8
        32aac8:	e59d001c 	ldr	r0, [sp, #28]
        32aacc:	e3300001 	teq	r0, #1	; 0x1
        32aad0:	e59d0010 	ldr	r0, [sp, #16]
        32aad4:	e1a00840 	mov	r0, r0, asr #16
        32aad8:	1a000002 	bne	32aae8 <LowStFiltr(low_type *, short *, SPEC_TYPE *, PS_point_type *, PS_point_type *)+0xb0>
        32aadc:	e3500003 	cmp	r0, #3	; 0x3
        32aae0:	ca00008a 	bgt	32ad10 <LowStFiltr(low_type *, short *, SPEC_TYPE *, PS_point_type *, PS_point_type *)+0x2d8>
        32aae4:	ea000001 	b	32aaf0 <LowStFiltr(low_type *, short *, SPEC_TYPE *, PS_point_type *, PS_point_type *)+0xb8>
        32aae8:	e3500004 	cmp	r0, #4	; 0x4
        32aaec:	ca000087 	bgt	32ad10 <LowStFiltr(low_type *, short *, SPEC_TYPE *, PS_point_type *, PS_point_type *)+0x2d8>
        32aaf0:	e5cd7005 	strb	r7, [sp, #5]
        32aaf4:	e1a00447 	mov	r0, r7, asr #8
        32aaf8:	e5cd0004 	strb	r0, [sp, #4]
        32aafc:	e5980002 	ldr	r0, [r8, #2]
        32ab00:	e1a00820 	mov	r0, r0, lsr #16
        32ab04:	e5cd0007 	strb	r0, [sp, #7]
        32ab08:	e1a00440 	mov	r0, r0, asr #8
        32ab0c:	e5cd0006 	strb	r0, [sp, #6]
        32ab10:	e7951089 	ldr	r1, [r5, r9, lsl #1]
        32ab14:	e1a01841 	mov	r1, r1, asr #16
        32ab18:	e7950087 	ldr	r0, [r5, r7, lsl #1]
        32ab1c:	e1a00840 	mov	r0, r0, asr #16
        32ab20:	e1510000 	cmp	r1, r0
        32ab24:	da000010 	ble	32ab6c <LowStFiltr(low_type *, short *, SPEC_TYPE *, PS_point_type *, PS_point_type *)+0x134>
        32ab28:	e3a00002 	mov	r0, #2	; 0x2
        32ab2c:	e5cd0001 	strb	r0, [sp, #1]
        32ab30:	e3a00000 	mov	r0, #0	; 0x0
        32ab34:	e5cd0000 	strb	r0, [sp]
        32ab38:	e28d2004 	add	r2, sp, #4	; 0x4
        32ab3c:	e1a0100d 	mov	r1, sp
        32ab40:	e1a00004 	mov	r0, r4
        32ab44:	e3a03003 	mov	r3, #3	; 0x3
        32ab48:	eb5fe19a 	bl	1b231b8 <$SpcElemFirstOccArr(low_type *, short *, POINTS_GROUP *, unsigned char)>
        32ab4c:	e3700002 	cmn	r0, #2	; 0x2
        32ab50:	0a00006f 	beq	32ad14 <LowStFiltr(low_type *, short *, SPEC_TYPE *, PS_point_type *, PS_point_type *)+0x2dc>
        32ab54:	e0800100 	add	r0, r0, r0, lsl #2
        32ab58:	e5941040 	ldr	r1, [r4, #64]
        32ab5c:	e0810100 	add	r0, r1, r0, lsl #2
        32ab60:	e5908008 	ldr	r8, [r0, #8]
        32ab64:	e1a08848 	mov	r8, r8, asr #16
        32ab68:	ea00000a 	b	32ab98 <LowStFiltr(low_type *, short *, SPEC_TYPE *, PS_point_type *, PS_point_type *)+0x160>
        32ab6c:	b1a08007 	movlt	r8, r7
        32ab70:	ba000001 	blt	32ab7c <LowStFiltr(low_type *, short *, SPEC_TYPE *, PS_point_type *, PS_point_type *)+0x144>
        32ab74:	ea000065 	b	32ad10 <LowStFiltr(low_type *, short *, SPEC_TYPE *, PS_point_type *, PS_point_type *)+0x2d8>
        32ab78:	e2488001 	sub	r8, r8, #1	; 0x1
        32ab7c:	e0851088 	add	r1, r5, r8, lsl #1
        32ab80:	e5111002 	ldr	r1, [r1, -#2]
        32ab84:	e1a01841 	mov	r1, r1, asr #16
        32ab88:	e3710001 	cmn	r1, #1	; 0x1
        32ab8c:	0a000001 	beq	32ab98 <LowStFiltr(low_type *, short *, SPEC_TYPE *, PS_point_type *, PS_point_type *)+0x160>
        32ab90:	e1510000 	cmp	r1, r0
        32ab94:	aafffff7 	bge	32ab78 <LowStFiltr(low_type *, short *, SPEC_TYPE *, PS_point_type *, PS_point_type *)+0x140>
        32ab98:	e7951089 	ldr	r1, [r5, r9, lsl #1]
        32ab9c:	e1a01841 	mov	r1, r1, asr #16
        32aba0:	e7950087 	ldr	r0, [r5, r7, lsl #1]
        32aba4:	e1a00840 	mov	r0, r0, asr #16
        32aba8:	e1510000 	cmp	r1, r0
        32abac:	aa00000e 	bge	32abec <LowStFiltr(low_type *, short *, SPEC_TYPE *, PS_point_type *, PS_point_type *)+0x1b4>
        32abb0:	e3a00002 	mov	r0, #2	; 0x2
        32abb4:	e5cd0001 	strb	r0, [sp, #1]
        32abb8:	e3a00000 	mov	r0, #0	; 0x0
        32abbc:	e5cd0000 	strb	r0, [sp]
        32abc0:	e28d2004 	add	r2, sp, #4	; 0x4
        32abc4:	e1a0100d 	mov	r1, sp
        32abc8:	e1a00004 	mov	r0, r4
        32abcc:	e3a03001 	mov	r3, #1	; 0x1
        32abd0:	eb5fe178 	bl	1b231b8 <$SpcElemFirstOccArr(low_type *, short *, POINTS_GROUP *, unsigned char)>
        32abd4:	e0800100 	add	r0, r0, r0, lsl #2
        32abd8:	e5b41040 	ldr	r1, [r4, #64]!
        32abdc:	e0810100 	add	r0, r1, r0, lsl #2
        32abe0:	e5907008 	ldr	r7, [r0, #8]
        32abe4:	e1a07847 	mov	r7, r7, asr #16
        32abe8:	ea000009 	b	32ac14 <LowStFiltr(low_type *, short *, SPEC_TYPE *, PS_point_type *, PS_point_type *)+0x1dc>
        32abec:	da000047 	ble	32ad10 <LowStFiltr(low_type *, short *, SPEC_TYPE *, PS_point_type *, PS_point_type *)+0x2d8>
        32abf0:	ea000000 	b	32abf8 <LowStFiltr(low_type *, short *, SPEC_TYPE *, PS_point_type *, PS_point_type *)+0x1c0>
        32abf4:	e2477001 	sub	r7, r7, #1	; 0x1
        32abf8:	e0851087 	add	r1, r5, r7, lsl #1
        32abfc:	e5111002 	ldr	r1, [r1, -#2]
        32ac00:	e1a01841 	mov	r1, r1, asr #16
        32ac04:	e3710001 	cmn	r1, #1	; 0x1
        32ac08:	0a000001 	beq	32ac14 <LowStFiltr(low_type *, short *, SPEC_TYPE *, PS_point_type *, PS_point_type *)+0x1dc>
        32ac0c:	e1510000 	cmp	r1, r0
        32ac10:	dafffff7 	ble	32abf4 <LowStFiltr(low_type *, short *, SPEC_TYPE *, PS_point_type *, PS_point_type *)+0x1bc>
        32ac14:	e28d3014 	add	r3, sp, #20	; 0x14
        32ac18:	e28d2010 	add	r2, sp, #16	; 0x10
        32ac1c:	e92d000c 	stmdb	sp!, {r2, r3}
        32ac20:	e1a02008 	mov	r2, r8
        32ac24:	e1a01007 	mov	r1, r7
        32ac28:	e1a00005 	mov	r0, r5
        32ac2c:	e59b3008 	ldr	r3, [fp, #8]
        32ac30:	eb5ff5f9 	bl	1b2841c <$RelHigh__FPsiT2N31>
        32ac34:	e28dd008 	add	sp, sp, #8	; 0x8
        32ac38:	e59d0014 	ldr	r0, [sp, #20]
        32ac3c:	e1a00840 	mov	r0, r0, asr #16
        32ac40:	e3500008 	cmp	r0, #8	; 0x8
        32ac44:	aa000032 	bge	32ad14 <LowStFiltr(low_type *, short *, SPEC_TYPE *, PS_point_type *, PS_point_type *)+0x2dc>
        32ac48:	e59d001c 	ldr	r0, [sp, #28]
        32ac4c:	e3300001 	teq	r0, #1	; 0x1
        32ac50:	1a000003 	bne	32ac64 <LowStFiltr(low_type *, short *, SPEC_TYPE *, PS_point_type *, PS_point_type *)+0x22c>
        32ac54:	e59d0010 	ldr	r0, [sp, #16]
        32ac58:	e1a00840 	mov	r0, r0, asr #16
        32ac5c:	e3500002 	cmp	r0, #2	; 0x2
        32ac60:	ba00002a 	blt	32ad10 <LowStFiltr(low_type *, short *, SPEC_TYPE *, PS_point_type *, PS_point_type *)+0x2d8>
        32ac64:	e59d1024 	ldr	r1, [sp, #36]
        32ac68:	e7910087 	ldr	r0, [r1, r7, lsl #1]
        32ac6c:	e1a00820 	mov	r0, r0, lsr #16
        32ac70:	e59b3010 	ldr	r3, [fp, #16]
        32ac74:	e5931000 	ldr	r1, [r3]
        32ac78:	e1a01821 	mov	r1, r1, lsr #16
        32ac7c:	e0410000 	sub	r0, r1, r0
        32ac80:	e1a00800 	mov	r0, r0, lsl #16
        32ac84:	e1a00840 	mov	r0, r0, asr #16
        32ac88:	e59b3010 	ldr	r3, [fp, #16]
        32ac8c:	e5931002 	ldr	r1, [r3, #2]
        32ac90:	e1a01821 	mov	r1, r1, lsr #16
        32ac94:	e7952087 	ldr	r2, [r5, r7, lsl #1]
        32ac98:	e1a02822 	mov	r2, r2, lsr #16
        32ac9c:	e0411002 	sub	r1, r1, r2
        32aca0:	e1a01801 	mov	r1, r1, lsl #16
        32aca4:	e1a01841 	mov	r1, r1, asr #16
        32aca8:	e0020090 	mul	r2, r0, r0
        32acac:	e0202191 	mla	r0, r1, r1, r2
        32acb0:	eb5fc01d 	bl	1b1ad2c <$HWRMathILSqrt(long)>
        32acb4:	e59a1006 	ldr	r1, [sl, #6]
        32acb8:	e1a01841 	mov	r1, r1, asr #16
        32acbc:	e0850081 	add	r0, r5, r1, lsl #1
        32acc0:	e5900002 	ldr	r0, [r0, #2]
        32acc4:	e1a00840 	mov	r0, r0, asr #16
        32acc8:	e3700001 	cmn	r0, #1	; 0x1
        32accc:	12811001 	addne	r1, r1, #1	; 0x1
        32acd0:	e59a0004 	ldr	r0, [sl, #4]
        32acd4:	e1a00840 	mov	r0, r0, asr #16
        32acd8:	e1a02005 	mov	r2, r5
        32acdc:	eb5fe985 	bl	1b252f8 <$iyMin__FiT1Ps>
        32ace0:	e7950080 	ldr	r0, [r5, r0, lsl #1]
        32ace4:	e1a00840 	mov	r0, r0, asr #16
        32ace8:	e7951087 	ldr	r1, [r5, r7, lsl #1]
        32acec:	e1a01841 	mov	r1, r1, asr #16
        32acf0:	e2811014 	add	r1, r1, #20	; 0x14
        32acf4:	e1500001 	cmp	r0, r1
        32acf8:	b59d1020 	ldrlt	r1, [sp, #32]
        32acfc:	b351001e 	cmplt	r1, #30	; 0x1e
        32ad00:	aa000003 	bge	32ad14 <LowStFiltr(low_type *, short *, SPEC_TYPE *, PS_point_type *, PS_point_type *)+0x2dc>
        32ad04:	e59d0018 	ldr	r0, [sp, #24]
        32ad08:	e3300000 	teq	r0, #0	; 0x0
        32ad0c:	1a000000 	bne	32ad14 <LowStFiltr(low_type *, short *, SPEC_TYPE *, PS_point_type *, PS_point_type *)+0x2dc>
        32ad10:	e3a06000 	mov	r6, #0	; 0x0
        32ad14:	e1a00006 	mov	r0, r6
        32ad18:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: LeFiltr(low_type *, SPEC_TYPE *, short)
 * Address: 0032b494
 */
LeFiltr(low_type *, SPEC_TYPE *, short) {
    /*
        32b494:	e1a0c00d 	mov	ip, sp
        32b498:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        32b49c:	e24cb004 	sub	fp, ip, #4	; 0x4
        32b4a0:	e1a04802 	mov	r4, r2, lsl #16
        32b4a4:	e1a04844 	mov	r4, r4, asr #16
        32b4a8:	e24dd010 	sub	sp, sp, #16	; 0x10
        32b4ac:	e5902038 	ldr	r2, [r0, #56]
        32b4b0:	e5905040 	ldr	r5, [r0, #64]
        32b4b4:	e591e004 	ldr	lr, [r1, #4]
        32b4b8:	e1a0e84e 	mov	lr, lr, asr #16
        32b4bc:	e5913006 	ldr	r3, [r1, #6]
        32b4c0:	e1a03843 	mov	r3, r3, asr #16
        32b4c4:	e1a0c003 	mov	ip, r3
        32b4c8:	e5d11003 	ldrb	r1, [r1, #3]
        32b4cc:	e1a01801 	mov	r1, r1, lsl #16
        32b4d0:	e1a01841 	mov	r1, r1, asr #16
        32b4d4:	e0811081 	add	r1, r1, r1, lsl #1
        32b4d8:	e5906054 	ldr	r6, [r0, #84]
        32b4dc:	e0861101 	add	r1, r6, r1, lsl #2
        32b4e0:	e3740002 	cmn	r4, #2	; 0x2
        32b4e4:	0a000020 	beq	32b56c <LeFiltr(low_type *, SPEC_TYPE *, short)+0xd8>
        32b4e8:	e792c08c 	ldr	ip, [r2, ip, lsl #1]
        32b4ec:	e1a0c84c 	mov	ip, ip, asr #16
        32b4f0:	e792208e 	ldr	r2, [r2, lr, lsl #1]
        32b4f4:	e1a02842 	mov	r2, r2, asr #16
        32b4f8:	e15c0002 	cmp	ip, r2
        32b4fc:	da00001a 	ble	32b56c <LeFiltr(low_type *, SPEC_TYPE *, short)+0xd8>
        32b500:	e2432001 	sub	r2, r3, #1	; 0x1
        32b504:	e5cd2005 	strb	r2, [sp, #5]
        32b508:	e1a02442 	mov	r2, r2, asr #8
        32b50c:	e5cd2004 	strb	r2, [sp, #4]
        32b510:	e5911002 	ldr	r1, [r1, #2]
        32b514:	e1a01821 	mov	r1, r1, lsr #16
        32b518:	e5cd1007 	strb	r1, [sp, #7]
        32b51c:	e1a01441 	mov	r1, r1, asr #8
        32b520:	e5cd1006 	strb	r1, [sp, #6]
        32b524:	e3a01002 	mov	r1, #2	; 0x2
        32b528:	e5cd1001 	strb	r1, [sp, #1]
        32b52c:	e3a01000 	mov	r1, #0	; 0x0
        32b530:	e5cd1000 	strb	r1, [sp]
        32b534:	e28d2004 	add	r2, sp, #4	; 0x4
        32b538:	e1a0100d 	mov	r1, sp
        32b53c:	e3a03013 	mov	r3, #19	; 0x13
        32b540:	eb5fdf1c 	bl	1b231b8 <$SpcElemFirstOccArr(low_type *, short *, POINTS_GROUP *, unsigned char)>
        32b544:	e3700002 	cmn	r0, #2	; 0x2
        32b548:	0a000007 	beq	32b56c <LeFiltr(low_type *, SPEC_TYPE *, short)+0xd8>
        32b54c:	e0800100 	add	r0, r0, r0, lsl #2
        32b550:	e0850100 	add	r0, r5, r0, lsl #2
        32b554:	e5901006 	ldr	r1, [r0, #6]
        32b558:	e1540841 	cmp	r4, r1, asr #16
        32b55c:	ca000002 	bgt	32b56c <LeFiltr(low_type *, SPEC_TYPE *, short)+0xd8>
        32b560:	e5900004 	ldr	r0, [r0, #4]
        32b564:	e1540840 	cmp	r4, r0, asr #16
        32b568:	aa000001 	bge	32b574 <LeFiltr(low_type *, SPEC_TYPE *, short)+0xe0>
        32b56c:	e3a00000 	mov	r0, #0	; 0x0
        32b570:	ea000000 	b	32b578 <LeFiltr(low_type *, SPEC_TYPE *, short)+0xe4>
        32b574:	e3a00001 	mov	r0, #1	; 0x1
        32b578:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: LinePicCodes(long, PicPlay *, GrafPort *)
 * Address: 00330108
 */
LinePicCodes(long, PicPlay *, GrafPort *) {
    /*
        330108:	e1a0c00d 	mov	ip, sp
        33010c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        330110:	e24cb004 	sub	fp, ip, #4	; 0x4
        330114:	e1a06000 	mov	r6, r0
        330118:	e1a04001 	mov	r4, r1
        33011c:	e1a05002 	mov	r5, r2
        330120:	e1a00002 	mov	r0, r2
        330124:	eb60a6de 	bl	1b59ca4 <$ImpossibleToDraw(GrafPort *)>
        330128:	e3300000 	teq	r0, #0	; 0x0
        33012c:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        330130:	e3560028 	cmp	r6, #40	; 0x28
        330134:	ba00006b 	blt	3302e8 <LinePicCodes(long, PicPlay *, GrafPort *)+0x1e0>
        330138:	e24dd00c 	sub	sp, sp, #12	; 0xc
        33013c:	e5940114 	ldr	r0, [r4, #276]
        330140:	eb625463 	bl	1bc52d4 <$MakeString(unsigned short const *)>
        330144:	eb624800 	bl	1bc214c <$AllocateRefHandle(long)>
        330148:	e58d0008 	str	r0, [sp, #8]
        33014c:	e1a00004 	mov	r0, r4
        330150:	eb60a6d5 	bl	1b59cac <$GetNSFont(PicPlay *)>
        330154:	eb6247fc 	bl	1bc214c <$AllocateRefHandle(long)>
        330158:	e58d0004 	str	r0, [sp, #4]
        33015c:	e59480fa 	ldr	r8, [r4, #250]
        330160:	e1a08848 	mov	r8, r8, asr #16
        330164:	e59470f8 	ldr	r7, [r4, #248]
        330168:	e1a07847 	mov	r7, r7, asr #16
        33016c:	e3a0a002 	mov	sl, #2	; 0x2
        330170:	e1a0000a 	mov	r0, sl
        330174:	eb6247f4 	bl	1bc214c <$AllocateRefHandle(long)>
        330178:	e58d0000 	str	r0, [sp]
        33017c:	e1a0000d 	mov	r0, sp
        330180:	e28d2004 	add	r2, sp, #4	; 0x4
        330184:	e28d1008 	add	r1, sp, #8	; 0x8
        330188:	eb5eaaec 	bl	1adad40 <$FStrFontWidth__FRC6RefVarN21>
        33018c:	e3100003 	tst	r0, #3	; 0x3
        330190:	01a00140 	moveq	r0, r0, asr #2
        330194:	0a000000 	beq	33019c <LinePicCodes(long, PicPlay *, GrafPort *)+0x94>
        330198:	eb6247df 	bl	1bc211c <$_RINTError(long)>
        33019c:	e0809008 	add	r9, r0, r8
        3301a0:	e59d0000 	ldr	r0, [sp]
        3301a4:	eb624c04 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3301a8:	e2899005 	add	r9, r9, #5	; 0x5
        3301ac:	e24dd020 	sub	sp, sp, #32	; 0x20
        3301b0:	e3a00002 	mov	r0, #2	; 0x2
        3301b4:	eb6247e4 	bl	1bc214c <$AllocateRefHandle(long)>
        3301b8:	e58d0000 	str	r0, [sp]
        3301bc:	e1a0000d 	mov	r0, sp
        3301c0:	e28d1024 	add	r1, sp, #36	; 0x24
        3301c4:	eb5e9a59 	bl	1ad6b30 <$FFontAscent__FRC6RefVarT1>
        3301c8:	e3100003 	tst	r0, #3	; 0x3
        3301cc:	01a00140 	moveq	r0, r0, asr #2
        3301d0:	0a000000 	beq	3301d8 <LinePicCodes(long, PicPlay *, GrafPort *)+0xd0>
        3301d4:	eb6247d0 	bl	1bc211c <$_RINTError(long)>
        3301d8:	e047a000 	sub	sl, r7, r0
        3301dc:	e59d0000 	ldr	r0, [sp]
        3301e0:	eb624bf5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3301e4:	e3a00002 	mov	r0, #2	; 0x2
        3301e8:	eb6247d7 	bl	1bc214c <$AllocateRefHandle(long)>
        3301ec:	e58d0004 	str	r0, [sp, #4]
        3301f0:	e28d0004 	add	r0, sp, #4	; 0x4
        3301f4:	e28d1024 	add	r1, sp, #36	; 0x24
        3301f8:	eb5e9a4d 	bl	1ad6b34 <$FFontDescent__FRC6RefVarT1>
        3301fc:	e3100003 	tst	r0, #3	; 0x3
        330200:	01a00140 	moveq	r0, r0, asr #2
        330204:	0a000000 	beq	33020c <LinePicCodes(long, PicPlay *, GrafPort *)+0x104>
        330208:	eb6247c3 	bl	1bc211c <$_RINTError(long)>
        33020c:	e0807007 	add	r7, r0, r7
        330210:	e59d0004 	ldr	r0, [sp, #4]
        330214:	eb624be8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        330218:	e1a00107 	mov	r0, r7, lsl #2
        33021c:	eb6247ca 	bl	1bc214c <$AllocateRefHandle(long)>
        330220:	e58d000c 	str	r0, [sp, #12]
        330224:	e28d300c 	add	r3, sp, #12	; 0xc
        330228:	e92d0008 	stmdb	sp!, {r3}
        33022c:	e1a00109 	mov	r0, r9, lsl #2
        330230:	eb6247c5 	bl	1bc214c <$AllocateRefHandle(long)>
        330234:	e58d0014 	str	r0, [sp, #20]
        330238:	e28d3014 	add	r3, sp, #20	; 0x14
        33023c:	e92d0008 	stmdb	sp!, {r3}
        330240:	e1a0010a 	mov	r0, sl, lsl #2
        330244:	eb6247c0 	bl	1bc214c <$AllocateRefHandle(long)>
        330248:	e58d001c 	str	r0, [sp, #28]
        33024c:	e28d701c 	add	r7, sp, #28	; 0x1c
        330250:	e1a00108 	mov	r0, r8, lsl #2
        330254:	eb6247bc 	bl	1bc214c <$AllocateRefHandle(long)>
        330258:	e58d0020 	str	r0, [sp, #32]
        33025c:	e28d8020 	add	r8, sp, #32	; 0x20
        330260:	e3a00002 	mov	r0, #2	; 0x2
        330264:	eb6247b8 	bl	1bc214c <$AllocateRefHandle(long)>
        330268:	e58d0024 	str	r0, [sp, #36]
        33026c:	e28d0024 	add	r0, sp, #36	; 0x24
        330270:	e28d1030 	add	r1, sp, #48	; 0x30
        330274:	e1a02008 	mov	r2, r8
        330278:	e1a03007 	mov	r3, r7
        33027c:	eb5ecfe0 	bl	1ae4204 <$FMakeTextBox>
        330280:	e28dd008 	add	sp, sp, #8	; 0x8
        330284:	eb6247b0 	bl	1bc214c <$AllocateRefHandle(long)>
        330288:	e58d0008 	str	r0, [sp, #8]
        33028c:	e28d1008 	add	r1, sp, #8	; 0x8
        330290:	e1a03005 	mov	r3, r5
        330294:	e1a02004 	mov	r2, r4
        330298:	e1a00006 	mov	r0, r6
        33029c:	eb60a687 	bl	1b59cc0 <$storeShape(long, RefVar const &, PicPlay *, GrafPort *)>
        3302a0:	e59d0008 	ldr	r0, [sp, #8]
        3302a4:	eb624bc4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3302a8:	e59d000c 	ldr	r0, [sp, #12]
        3302ac:	eb624bc2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3302b0:	e59d0010 	ldr	r0, [sp, #16]
        3302b4:	eb624bc0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3302b8:	e59d0014 	ldr	r0, [sp, #20]
        3302bc:	eb624bbe 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3302c0:	e59d0018 	ldr	r0, [sp, #24]
        3302c4:	eb624bbc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3302c8:	e59d001c 	ldr	r0, [sp, #28]
        3302cc:	eb624bba 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3302d0:	e28dd020 	add	sp, sp, #32	; 0x20
        3302d4:	e59d0004 	ldr	r0, [sp, #4]
        3302d8:	eb624bb7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3302dc:	e59d0008 	ldr	r0, [sp, #8]
        3302e0:	eb624bb5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3302e4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        3302e8:	e5959036 	ldr	r9, [r5, #54]
        3302ec:	e1a09849 	mov	r9, r9, asr #16
        3302f0:	e5958034 	ldr	r8, [r5, #52]
        3302f4:	e1a08848 	mov	r8, r8, asr #16
        3302f8:	e59470fa 	ldr	r7, [r4, #250]
        3302fc:	e1a07847 	mov	r7, r7, asr #16
        330300:	e59460f8 	ldr	r6, [r4, #248]
        330304:	e1a06846 	mov	r6, r6, asr #16
        330308:	e595003a 	ldr	r0, [r5, #58]
        33030c:	e1a00840 	mov	r0, r0, asr #16
        330310:	e5951038 	ldr	r1, [r5, #56]
        330314:	e0901841 	adds	r1, r0, r1, asr #16
        330318:	e595003c 	ldr	r0, [r5, #60]
        33031c:	e1a00840 	mov	r0, r0, asr #16
        330320:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        330324:	e3500017 	cmp	r0, #23	; 0x17
        330328:	a91baff0 	ldmgedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        33032c:	e3590000 	cmp	r9, #0	; 0x0
        330330:	b3570000 	cmplt	r7, #0	; 0x0
        330334:	b3580000 	cmplt	r8, #0	; 0x0
        330338:	b3560000 	cmplt	r6, #0	; 0x0
        33033c:	b91baff0 	ldmltdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        330340:	e1390007 	teq	r9, r7
        330344:	01380006 	teqeq	r8, r6
        330348:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        33034c:	e5940120 	ldr	r0, [r4, #288]
        330350:	e3300000 	teq	r0, #0	; 0x0
        330354:	0a000004 	beq	33036c <LinePicCodes(long, PicPlay *, GrafPort *)+0x264>
        330358:	e5940126 	ldr	r0, [r4, #294]
        33035c:	e1390840 	teq	r9, r0, asr #16
        330360:	05940124 	ldreq	r0, [r4, #292]
        330364:	01380840 	teqeq	r8, r0, asr #16
        330368:	0a000007 	beq	33038c <LinePicCodes(long, PicPlay *, GrafPort *)+0x284>
        33036c:	e1a01005 	mov	r1, r5
        330370:	e1a00004 	mov	r0, r4
        330374:	eb60a64b 	bl	1b59ca8 <$FlushAnyInk(PicPlay *, GrafPort *)>
        330378:	eb60855c 	bl	1b518f0 <$OpenPoly(void)>
        33037c:	e1a01008 	mov	r1, r8
        330380:	e5840120 	str	r0, [r4, #288]
        330384:	e1a00009 	mov	r0, r9
        330388:	eb60854c 	bl	1b518c0 <$MoveTo__FlT1>
        33038c:	e1a01006 	mov	r1, r6
        330390:	e1a00007 	mov	r0, r7
        330394:	eb608138 	bl	1b5087c <$LineTo__FlT1>
        330398:	e5c47127 	strb	r7, [r4, #295]
        33039c:	e1a00447 	mov	r0, r7, asr #8
        3303a0:	e5c40126 	strb	r0, [r4, #294]
        3303a4:	e5c46125 	strb	r6, [r4, #293]
        3303a8:	e1a00446 	mov	r0, r6, asr #8
        3303ac:	e5c40124 	strb	r0, [r4, #292]
        3303b0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: LookupOpcodeEntry(unsigned long, void (*const *)(long, PicPlay *, GrafPort *))
 * Address: 00332470
 */
LookupOpcodeEntry(unsigned long, void (*const *)(long, PicPlay *, GrafPort *)) {
    /*
        332470:	e3a02000 	mov	r2, #0	; 0x0
        332474:	e1a00800 	mov	r0, r0, lsl #16
        332478:	e1a00820 	mov	r0, r0, lsr #16
        33247c:	e3c0000f 	bic	r0, r0, #15	; 0xf
        332480:	e1a00220 	mov	r0, r0, lsr #4
        332484:	e350000f 	cmp	r0, #15	; 0xf
        332488:	c3a00010 	movgt	r0, #16	; 0x10
        33248c:	e3310000 	teq	r1, #0	; 0x0
        332490:	17912100 	ldrne	r2, [r1, r0, lsl #2]
        332494:	e1a00002 	mov	r0, r2
        332498:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: LocalToGlobal(Point *)
 * Address: 003352b4
 */
LocalToGlobal(Point *) {
    /*
        3352b4:	e1a0c00d 	mov	ip, sp
        3352b8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        3352bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        3352c0:	e1a04000 	mov	r4, r0
        3352c4:	e5906000 	ldr	r6, [r0]
        3352c8:	e1a06846 	mov	r6, r6, asr #16
        3352cc:	e5905002 	ldr	r5, [r0, #2]
        3352d0:	e1a05845 	mov	r5, r5, asr #16
        3352d4:	eb606938 	bl	1b4f7bc <$GetCurrentPort(void)>
        3352d8:	e5900008 	ldr	r0, [r0, #8]
        3352dc:	e0466840 	sub	r6, r6, r0, asr #16
        3352e0:	eb606935 	bl	1b4f7bc <$GetCurrentPort(void)>
        3352e4:	e590000a 	ldr	r0, [r0, #10]
        3352e8:	e0450840 	sub	r0, r5, r0, asr #16
        3352ec:	e5c46001 	strb	r6, [r4, #1]
        3352f0:	e1a01446 	mov	r1, r6, asr #8
        3352f4:	e5c41000 	strb	r1, [r4]
        3352f8:	e5c40003 	strb	r0, [r4, #3]
        3352fc:	e1a00440 	mov	r0, r0, asr #8
        335300:	e5c40002 	strb	r0, [r4, #2]
        335304:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: LSeekMask__FlT1PUlT1P8RgnStateN25
 * Address: 00343018
 */
void globals::LSeekMask() {
    /*
        343018:	e1a0c00d 	mov	ip, sp
        34301c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        343020:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        343024:	e24cb014 	sub	fp, ip, #20	; 0x14
        343028:	e1a05000 	mov	r5, r0
        34302c:	e1a04002 	mov	r4, r2
        343030:	e1a06003 	mov	r6, r3
        343034:	e28ba014 	add	sl, fp, #20	; 0x14
        343038:	e89a0401 	ldmia	sl, {r0, sl}
        34303c:	e24dd004 	sub	sp, sp, #4	; 0x4
        343040:	e5909008 	ldr	r9, [r0, #8]
        343044:	e59a8008 	ldr	r8, [sl, #8]
        343048:	e59b201c 	ldr	r2, [fp, #28]
        34304c:	e2411002 	sub	r1, r1, #2	; 0x2
        343050:	e5b27008 	ldr	r7, [r2, #8]!
        343054:	e351000c 	cmp	r1, #12	; 0xc
        343058:	908ff101 	addls	pc, pc, r1, lsl #2
        34305c:	ea000026 	b	3430fc <LSeekMask__FlT1PUlT1P8RgnStateN25+0xe4>
        343060:	ea000026 	b	343100 <LSeekMask__FlT1PUlT1P8RgnStateN25+0xe8>
        343064:	ea000024 	b	3430fc <LSeekMask__FlT1PUlT1P8RgnStateN25+0xe4>
        343068:	ea000027 	b	34310c <LSeekMask__FlT1PUlT1P8RgnStateN25+0xf4>
        34306c:	ea000022 	b	3430fc <LSeekMask__FlT1PUlT1P8RgnStateN25+0xe4>
        343070:	ea00002f 	b	343134 <LSeekMask__FlT1PUlT1P8RgnStateN25+0x11c>
        343074:	ea000020 	b	3430fc <LSeekMask__FlT1PUlT1P8RgnStateN25+0xe4>
        343078:	ea000027 	b	34311c <LSeekMask__FlT1PUlT1P8RgnStateN25+0x104>
        34307c:	ea00001e 	b	3430fc <LSeekMask__FlT1PUlT1P8RgnStateN25+0xe4>
        343080:	ea00003f 	b	343184 <LSeekMask__FlT1PUlT1P8RgnStateN25+0x16c>
        343084:	ea00001c 	b	3430fc <LSeekMask__FlT1PUlT1P8RgnStateN25+0xe4>
        343088:	ea000051 	b	3431d4 <LSeekMask__FlT1PUlT1P8RgnStateN25+0x1bc>
        34308c:	ea00001a 	b	3430fc <LSeekMask__FlT1PUlT1P8RgnStateN25+0xe4>
        343090:	e1a01005 	mov	r1, r5
        343094:	eb60424e 	bl	1b539d4 <$SeekRgn(RgnState *, long)>
        343098:	e1a01005 	mov	r1, r5
        34309c:	e58d0000 	str	r0, [sp]
        3430a0:	e1a0000a 	mov	r0, sl
        3430a4:	eb60424a 	bl	1b539d4 <$SeekRgn(RgnState *, long)>
        3430a8:	e1a0a000 	mov	sl, r0
        3430ac:	e1a01005 	mov	r1, r5
        3430b0:	e59b001c 	ldr	r0, [fp, #28]
        3430b4:	eb604246 	bl	1b539d4 <$SeekRgn(RgnState *, long)>
        3430b8:	e59d1000 	ldr	r1, [sp]
        3430bc:	e3310000 	teq	r1, #0	; 0x0
        3430c0:	033a0000 	teqeq	sl, #0	; 0x0
        3430c4:	03300000 	teqeq	r0, #0	; 0x0
        3430c8:	0a00000b 	beq	3430fc <LSeekMask__FlT1PUlT1P8RgnStateN25+0xe4>
        3430cc:	e3a00000 	mov	r0, #0	; 0x0
        3430d0:	e3560000 	cmp	r6, #0	; 0x0
        3430d4:	da000008 	ble	3430fc <LSeekMask__FlT1PUlT1P8RgnStateN25+0xe4>
        3430d8:	e4991004 	ldr	r1, [r9], #4
        3430dc:	e4982004 	ldr	r2, [r8], #4
        3430e0:	e0011002 	and	r1, r1, r2
        3430e4:	e4972004 	ldr	r2, [r7], #4
        3430e8:	e0011002 	and	r1, r1, r2
        3430ec:	e2800001 	add	r0, r0, #1	; 0x1
        3430f0:	e1500006 	cmp	r0, r6
        3430f4:	e4841004 	str	r1, [r4], #4
        3430f8:	bafffff6 	blt	3430d8 <LSeekMask__FlT1PUlT1P8RgnStateN25+0xc0>
        3430fc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        343100:	e1a01005 	mov	r1, r5
        343104:	e5804008 	str	r4, [r0, #8]
        343108:	ea000007 	b	34312c <LSeekMask__FlT1PUlT1P8RgnStateN25+0x114>
        34310c:	e1a01005 	mov	r1, r5
        343110:	e58a4008 	str	r4, [sl, #8]
        343114:	e1a0000a 	mov	r0, sl
        343118:	ea000003 	b	34312c <LSeekMask__FlT1PUlT1P8RgnStateN25+0x114>
        34311c:	e59b001c 	ldr	r0, [fp, #28]
        343120:	e1a01005 	mov	r1, r5
        343124:	e5a04008 	str	r4, [r0, #8]!
        343128:	e59b001c 	ldr	r0, [fp, #28]
        34312c:	eb604228 	bl	1b539d4 <$SeekRgn(RgnState *, long)>
        343130:	eafffff1 	b	3430fc <LSeekMask__FlT1PUlT1P8RgnStateN25+0xe4>
        343134:	e1a01005 	mov	r1, r5
        343138:	eb604225 	bl	1b539d4 <$SeekRgn(RgnState *, long)>
        34313c:	e1a07000 	mov	r7, r0
        343140:	e1a01005 	mov	r1, r5
        343144:	e1a0000a 	mov	r0, sl
        343148:	eb604221 	bl	1b539d4 <$SeekRgn(RgnState *, long)>
        34314c:	e3370000 	teq	r7, #0	; 0x0
        343150:	03300000 	teqeq	r0, #0	; 0x0
        343154:	0affffe8 	beq	3430fc <LSeekMask__FlT1PUlT1P8RgnStateN25+0xe4>
        343158:	e3a00000 	mov	r0, #0	; 0x0
        34315c:	e3560000 	cmp	r6, #0	; 0x0
        343160:	daffffe5 	ble	3430fc <LSeekMask__FlT1PUlT1P8RgnStateN25+0xe4>
        343164:	e4992004 	ldr	r2, [r9], #4
        343168:	e4981004 	ldr	r1, [r8], #4
        34316c:	e0021001 	and	r1, r2, r1
        343170:	e2800001 	add	r0, r0, #1	; 0x1
        343174:	e1500006 	cmp	r0, r6
        343178:	e4841004 	str	r1, [r4], #4
        34317c:	bafffff8 	blt	343164 <LSeekMask__FlT1PUlT1P8RgnStateN25+0x14c>
        343180:	eaffffdd 	b	3430fc <LSeekMask__FlT1PUlT1P8RgnStateN25+0xe4>
        343184:	e1a01005 	mov	r1, r5
        343188:	eb604211 	bl	1b539d4 <$SeekRgn(RgnState *, long)>
        34318c:	e1a08000 	mov	r8, r0
        343190:	e1a01005 	mov	r1, r5
        343194:	e59b001c 	ldr	r0, [fp, #28]
        343198:	eb60420d 	bl	1b539d4 <$SeekRgn(RgnState *, long)>
        34319c:	e3380000 	teq	r8, #0	; 0x0
        3431a0:	03300000 	teqeq	r0, #0	; 0x0
        3431a4:	0affffd4 	beq	3430fc <LSeekMask__FlT1PUlT1P8RgnStateN25+0xe4>
        3431a8:	e3a00000 	mov	r0, #0	; 0x0
        3431ac:	e3560000 	cmp	r6, #0	; 0x0
        3431b0:	daffffd1 	ble	3430fc <LSeekMask__FlT1PUlT1P8RgnStateN25+0xe4>
        3431b4:	e4991004 	ldr	r1, [r9], #4
        3431b8:	e4972004 	ldr	r2, [r7], #4
        3431bc:	e0011002 	and	r1, r1, r2
        3431c0:	e2800001 	add	r0, r0, #1	; 0x1
        3431c4:	e1500006 	cmp	r0, r6
        3431c8:	e4841004 	str	r1, [r4], #4
        3431cc:	bafffff8 	blt	3431b4 <LSeekMask__FlT1PUlT1P8RgnStateN25+0x19c>
        3431d0:	eaffffc9 	b	3430fc <LSeekMask__FlT1PUlT1P8RgnStateN25+0xe4>
        3431d4:	e1a01005 	mov	r1, r5
        3431d8:	e1a0000a 	mov	r0, sl
        3431dc:	eb6041fc 	bl	1b539d4 <$SeekRgn(RgnState *, long)>
        3431e0:	e1a09000 	mov	r9, r0
        3431e4:	e1a01005 	mov	r1, r5
        3431e8:	e59b001c 	ldr	r0, [fp, #28]
        3431ec:	eb6041f8 	bl	1b539d4 <$SeekRgn(RgnState *, long)>
        3431f0:	e3390000 	teq	r9, #0	; 0x0
        3431f4:	03300000 	teqeq	r0, #0	; 0x0
        3431f8:	0affffbf 	beq	3430fc <LSeekMask__FlT1PUlT1P8RgnStateN25+0xe4>
        3431fc:	e3a00000 	mov	r0, #0	; 0x0
        343200:	e3560000 	cmp	r6, #0	; 0x0
        343204:	daffffbc 	ble	3430fc <LSeekMask__FlT1PUlT1P8RgnStateN25+0xe4>
        343208:	e4981004 	ldr	r1, [r8], #4
        34320c:	e4972004 	ldr	r2, [r7], #4
        343210:	e0011002 	and	r1, r1, r2
        343214:	e2800001 	add	r0, r0, #1	; 0x1
        343218:	e1500006 	cmp	r0, r6
        34321c:	e4841004 	str	r1, [r4], #4
        343220:	bafffff8 	blt	343208 <LSeekMask__FlT1PUlT1P8RgnStateN25+0x1f0>
        343224:	eaffffb4 	b	3430fc <LSeekMask__FlT1PUlT1P8RgnStateN25+0xe4>
    */
}

/**
 * Symbol: low_level(PS_point_type *, xrdata_type *, rc_type *)
 * Address: 0034ea74
 */
low_level(PS_point_type *, xrdata_type *, rc_type *) {
    /*
        34ea74:	e1a0c00d 	mov	ip, sp
        34ea78:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        34ea7c:	e24cb004 	sub	fp, ip, #4	; 0x4
        34ea80:	e1a05000 	mov	r5, r0
        34ea84:	e1a06001 	mov	r6, r1
        34ea88:	e1a04002 	mov	r4, r2
        34ea8c:	e24dd0ac 	sub	sp, sp, #172	; 0xac
        34ea90:	e3a07001 	mov	r7, #1	; 0x1
        34ea94:	e3a00000 	mov	r0, #0	; 0x0
        34ea98:	e58d000c 	str	r0, [sp, #12]
        34ea9c:	e5920096 	ldr	r0, [r2, #150]
        34eaa0:	e1a00840 	mov	r0, r0, asr #16
        34eaa4:	e3500003 	cmp	r0, #3	; 0x3
        34eaa8:	b3a00001 	movlt	r0, #1	; 0x1
        34eaac:	ba00003a 	blt	34eb9c <low_level(PS_point_type *, xrdata_type *, rc_type *)+0x128>
        34eab0:	e3a00000 	mov	r0, #0	; 0x0
        34eab4:	e28d300c 	add	r3, sp, #12	; 0xc
        34eab8:	e1a02004 	mov	r2, r4
        34eabc:	e1a01005 	mov	r1, r5
        34eac0:	e5860000 	str	r0, [r6]
        34eac4:	e28d0010 	add	r0, sp, #16	; 0x10
        34eac8:	eb5f4d9a 	bl	1b22138 <$PrepareLowData(low_type *, PS_point_type *, rc_type *, short **)>
        34eacc:	e3300000 	teq	r0, #0	; 0x0
        34ead0:	0a00002a 	beq	34eb80 <low_level(PS_point_type *, xrdata_type *, rc_type *)+0x10c>
        34ead4:	e28d0010 	add	r0, sp, #16	; 0x10
        34ead8:	eb5f38d5 	bl	1b1ce34 <$SetXYToInitial(low_type *)>
        34eadc:	e1a01005 	mov	r1, r5
        34eae0:	e28d0010 	add	r0, sp, #16	; 0x10
        34eae4:	eb5f4114 	bl	1b1ef3c <$FillLowDataTrace(low_type *, PS_point_type *)>
        34eae8:	e28d0010 	add	r0, sp, #16	; 0x10
        34eaec:	eb5f3084 	bl	1b1ad04 <$GetLowDataRect(low_type *)>
        34eaf0:	e59d0010 	ldr	r0, [sp, #16]
        34eaf4:	e59000ac 	ldr	r0, [r0, #172]
        34eaf8:	e1a00820 	mov	r0, r0, lsr #16
        34eafc:	e5cd007f 	strb	r0, [sp, #127]
        34eb00:	e1a00440 	mov	r0, r0, asr #8
        34eb04:	e5cd007e 	strb	r0, [sp, #126]
        34eb08:	e28d0010 	add	r0, sp, #16	; 0x10
        34eb0c:	eb5f3ce2 	bl	1b1de9c <$BaselineAndScale(low_type *)>
        34eb10:	e3300000 	teq	r0, #0	; 0x0
        34eb14:	1a000019 	bne	34eb80 <low_level(PS_point_type *, xrdata_type *, rc_type *)+0x10c>
        34eb18:	e5940090 	ldr	r0, [r4, #144]
        34eb1c:	e1a00820 	mov	r0, r0, lsr #16
        34eb20:	e3100040 	tst	r0, #64	; 0x40
        34eb24:	1a00000f 	bne	34eb68 <low_level(PS_point_type *, xrdata_type *, rc_type *)+0xf4>
        34eb28:	e58dd070 	str	sp, [sp, #112]
        34eb2c:	e28d0010 	add	r0, sp, #16	; 0x10
        34eb30:	e3a010c8 	mov	r1, #200	; 0xc8
        34eb34:	eb5f3ce8 	bl	1b1dedc <$CreateSDS(low_type *, short)>
        34eb38:	e3300000 	teq	r0, #0	; 0x0
        34eb3c:	0a00000f 	beq	34eb80 <low_level(PS_point_type *, xrdata_type *, rc_type *)+0x10c>
        34eb40:	e1a01005 	mov	r1, r5
        34eb44:	e28d0010 	add	r0, sp, #16	; 0x10
        34eb48:	eb5f3cd0 	bl	1b1de90 <$AnalyzeLowData(low_type *, PS_point_type *)>
        34eb4c:	e3300000 	teq	r0, #0	; 0x0
        34eb50:	1a00000a 	bne	34eb80 <low_level(PS_point_type *, xrdata_type *, rc_type *)+0x10c>
        34eb54:	e1a01006 	mov	r1, r6
        34eb58:	e28d0010 	add	r0, sp, #16	; 0x10
        34eb5c:	eb5f6e75 	bl	1b2a538 <$exchange(low_type *, xrdata_type *)>
        34eb60:	e3300000 	teq	r0, #0	; 0x0
        34eb64:	1a000005 	bne	34eb80 <low_level(PS_point_type *, xrdata_type *, rc_type *)+0x10c>
        34eb68:	e59d107c 	ldr	r1, [sp, #124]
        34eb6c:	e59d0010 	ldr	r0, [sp, #16]
        34eb70:	e5c010ad 	strb	r1, [r0, #173]
        34eb74:	e1a01441 	mov	r1, r1, asr #8
        34eb78:	e5c010ac 	strb	r1, [r0, #172]
        34eb7c:	e3a07000 	mov	r7, #0	; 0x0
        34eb80:	e28d0010 	add	r0, sp, #16	; 0x10
        34eb84:	eb5f40dd 	bl	1b1ef00 <$DestroySDS(low_type *)>
        34eb88:	e28d000c 	add	r0, sp, #12	; 0xc
        34eb8c:	eb5f3485 	bl	1b1bda8 <$low_dealloc(short **)>
        34eb90:	e28d0050 	add	r0, sp, #80	; 0x50
        34eb94:	eb5f2c3d 	bl	1b19c90 <$DeallocSpecl(SPEC_TYPE **)>
        34eb98:	e1a00007 	mov	r0, r7
        34eb9c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: LongToPipe(CPipe &, long)
 * Address: 003563cc
 */
LongToPipe(CPipe &, long) {
    /*
        3563cc:	e3510000 	cmp	r1, #0	; 0x0
        3563d0:	ba000002 	blt	3563e0 <LongToPipe(CPipe &, long)+0x14>
        3563d4:	e35100fe 	cmp	r1, #254	; 0xfe
        3563d8:	d20110ff 	andle	r1, r1, #255	; 0xff
        3563dc:	da623bb2 	ble	1be52ac <CPipe::$__ls(unsigned char)>
        3563e0:	e1a0c00d 	mov	ip, sp
        3563e4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        3563e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        3563ec:	e1a05000 	mov	r5, r0
        3563f0:	e1a04001 	mov	r4, r1
        3563f4:	e3a010ff 	mov	r1, #255	; 0xff
        3563f8:	eb623bab 	bl	1be52ac <CPipe::$__ls(unsigned char)>
        3563fc:	e1a01004 	mov	r1, r4
        356400:	e1a00005 	mov	r0, r5
        356404:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        356408:	ea623ba4 	b	1be52a0 <CPipe::$__ls(long)>
    */
}

/**
 * Symbol: LongFromPipe(CPipe &)
 * Address: 00356458
 */
LongFromPipe(CPipe &) {
    /*
        356458:	e1a0c00d 	mov	ip, sp
        35645c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        356460:	e24cb004 	sub	fp, ip, #4	; 0x4
        356464:	e1a04000 	mov	r4, r0
        356468:	e24dd004 	sub	sp, sp, #4	; 0x4
        35646c:	e1a0100d 	mov	r1, sp
        356470:	eb623b94 	bl	1be52c8 <CPipe::$__rs(unsigned char &)>
        356474:	e5dd0000 	ldrb	r0, [sp]
        356478:	e33000ff 	teq	r0, #255	; 0xff
        35647c:	14dd0004 	ldrneb	r0, [sp], #4
        356480:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        356484:	e24dd004 	sub	sp, sp, #4	; 0x4
        356488:	e1a0100d 	mov	r1, sp
        35648c:	e1a00004 	mov	r0, r4
        356490:	eb623b89 	bl	1be52bc <CPipe::$__rs(long &)>
        356494:	e49d0008 	ldr	r0, [sp], #8
        356498:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: log
 * Address: 003594bc
 */
void globals::log() {
    /*
        3594bc:	e1a0c00d 	mov	ip, sp
        3594c0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        3594c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        3594c8:	ed6dc209 	sfm	f4, 3, [sp, -#36]!
        3594cc:	e92d0003 	stmdb	sp!, {r0, r1}
        3594d0:	ecbdc102 	ldfd	f4, [sp], #8
        3594d4:	e24dd004 	sub	sp, sp, #4	; 0x4
        3594d8:	e1a0000d 	mov	r0, sp
        3594dc:	eb616944 	bl	1bb39f4 <$feholdexcept>
        3594e0:	ed2dc102 	stfd	f4, [sp, -#8]!
        3594e4:	e8bd0003 	ldmia	sp!, {r0, r1}
        3594e8:	eb62a73c 	bl	1c031e0 <$__fpclassifyd>
        3594ec:	e3300000 	teq	r0, #0	; 0x0
        3594f0:	0a000006 	beq	359510 <log+0x54>
        3594f4:	e59f401c 	ldr	r4, [pc, #1c]	; 359518 <log+0x5c>
        3594f8:	e3300001 	teq	r0, #1	; 0x1
        3594fc:	0a00000b 	beq	359530 <log+0x74>
        359500:	e3300002 	teq	r0, #2	; 0x2
        359504:	0a000004 	beq	35951c <log+0x60>
        359508:	e3300063 	teq	r0, #99	; 0x63
        35950c:	1a00000d 	bne	359548 <log+0x8c>
        359510:	ee14418a 	mufd	f4, f4, #2.0
        359514:	ea000075 	b	3596f0 <log+0x234>
        359518:	00382264 	eoreqs	r2, r8, r4, ror #4
        35951c:	eb62a730 	bl	1c031e4 <$__inf>
        359520:	ee10c180 	mnfd	f4, f0
        359524:	e3a00002 	mov	r0, #2	; 0x2
        359528:	eb616932 	bl	1bb39f8 <$feraiseexcept>
        35952c:	ea00006f 	b	3596f0 <log+0x234>
        359530:	eed4f118 	cmfe	f4, #0.0
        359534:	d3a00001 	movle	r0, #1	; 0x1
        359538:	db61692e 	blle	1bb39f8 <$feraiseexcept>
        35953c:	eed4f118 	cmfe	f4, #0.0
        359540:	dd94c100 	ldfled	f4, [r4]
        359544:	ea000069 	b	3596f0 <log+0x234>
        359548:	eed4f118 	cmfe	f4, #0.0
        35954c:	aa000005 	bge	359568 <log+0xac>
        359550:	e3a00001 	mov	r0, #1	; 0x1
        359554:	eb616927 	bl	1bb39f8 <$feraiseexcept>
        359558:	e1a0000d 	mov	r0, sp
        35955c:	eb616d2a 	bl	1bb4a0c <$feupdateenv>
        359560:	ed948100 	ldfd	f0, [r4]
        359564:	ea000064 	b	3596fc <log+0x240>
        359568:	ee94f119 	cmf	f4, #1.0
        35956c:	0e008188 	mvfeqd	f0, #0.0
        359570:	0a000061 	beq	3596fc <log+0x240>
        359574:	e59f00d8 	ldr	r0, [pc, #d8]	; 359654 <log+0x198>
        359578:	ed908100 	ldfd	f0, [r0]
        35957c:	eed4f110 	cmfe	f4, f0
        359580:	c59f00d0 	ldrgt	r0, [pc, #d0]	; 359658 <log+0x19c>
        359584:	cd908100 	ldfgtd	f0, [r0]
        359588:	ced0f114 	cmfegt	f0, f4
        35958c:	ca000037 	bgt	359670 <log+0x1b4>
        359590:	ed2dc102 	stfd	f4, [sp, -#8]!
        359594:	e8bd0003 	ldmia	sp!, {r0, r1}
        359598:	eb616d29 	bl	1bb4a44 <$logb>
        35959c:	ee104170 	fixz	r4, f0
        3595a0:	e2642000 	rsb	r2, r4, #0	; 0x0
        3595a4:	ed2dc102 	stfd	f4, [sp, -#8]!
        3595a8:	e8bd0003 	ldmia	sp!, {r0, r1}
        3595ac:	eb617135 	bl	1bb5a88 <$scalb>
        3595b0:	ee00d180 	mvfd	f5, f0
        3595b4:	ed9fc128 	ldfd	f4, [pc, #160]
        3595b8:	ee100184 	mufd	f0, f0, f4
        3595bc:	ed2d8102 	stfd	f0, [sp, -#8]!
        3595c0:	e8bd0003 	ldmia	sp!, {r0, r1}
        3595c4:	eb616d2c 	bl	1bb4a7c <$rint>
        3595c8:	ee400184 	dvfd	f0, f0, f4
        3595cc:	ee251180 	sufd	f1, f5, f0
        3595d0:	ee202189 	sufd	f2, f0, #1.0
        3595d4:	ee122184 	mufd	f2, f2, f4
        3595d8:	ee100172 	fixz	r0, f2
        3595dc:	e59f1080 	ldr	r1, [pc, #80]	; 359664 <log+0x1a8>
        3595e0:	e2812b01 	add	r2, r1, #1024	; 0x400
        3595e4:	ed92b100 	ldfd	f3, [r2]
        3595e8:	ee024190 	fltd	f2, r4
        3595ec:	ee134182 	mufd	f4, f3, f2
        3595f0:	e0811180 	add	r1, r1, r0, lsl #3
        3595f4:	ed91b100 	ldfd	f3, [r1]
        3595f8:	ee043183 	adfd	f3, f4, f3
        3595fc:	e59f1064 	ldr	r1, [pc, #64]	; 359668 <log+0x1ac>
        359600:	e2812b01 	add	r2, r1, #1024	; 0x400
        359604:	ed92c100 	ldfd	f4, [r2]
        359608:	ee144182 	mufd	f4, f4, f2
        35960c:	e0810180 	add	r0, r1, r0, lsl #3
        359610:	ed90a100 	ldfd	f2, [r0]
        359614:	ee042182 	adfd	f2, f4, f2
        359618:	ee11118a 	mufd	f1, f1, #2.0
        35961c:	ee050180 	adfd	f0, f5, f0
        359620:	ee411180 	dvfd	f1, f1, f0
        359624:	ee110181 	mufd	f0, f1, f1
        359628:	ee115180 	mufd	f5, f1, f0
        35962c:	e59f0038 	ldr	r0, [pc, #38]	; 35966c <log+0x1b0>
        359630:	ed90c102 	ldfd	f4, [r0, #8]
        359634:	ee140180 	mufd	f0, f4, f0
        359638:	ed90c100 	ldfd	f4, [r0]
        35963c:	ee000184 	adfd	f0, f0, f4
        359640:	ee150180 	mufd	f0, f5, f0
        359644:	ee000182 	adfd	f0, f0, f2
        359648:	ee000181 	adfd	f0, f0, f1
        35964c:	ee004183 	adfd	f4, f0, f3
        359650:	ea000026 	b	3596f0 <log+0x234>
        359654:	0038226c 	eoreqs	r2, r8, ip, ror #4
        359658:	00382274 	eoreqs	r2, r8, r4, ror r2
        35965c:	40600000 	rsbmi	r0, r0, r0
        359660:	00000000 	andeq	r0, r0, r0
        359664:	00381a54 	eoreqs	r1, r8, r4, asr sl
        359668:	00381e5c 	eoreqs	r1, r8, ip, asr lr
        35966c:	00381a24 	eoreqs	r1, r8, r4, lsr #20
        359670:	ee240189 	sufd	f0, f4, #1.0
        359674:	ee00218a 	adfd	f2, f0, #2.0
        359678:	ee009189 	mvfd	f1, #1.0
        35967c:	ee413182 	dvfd	f3, f1, f2
        359680:	ee101183 	mufd	f1, f0, f3
        359684:	ee11118a 	mufd	f1, f1, #2.0
        359688:	ee112181 	mufd	f2, f1, f1
        35968c:	e59f0070 	ldr	r0, [pc, #70]	; 359704 <log+0x248>
        359690:	ed90d104 	ldfd	f5, [r0, #16]
        359694:	ed90c106 	ldfd	f4, [r0, #24]
        359698:	ee144182 	mufd	f4, f4, f2
        35969c:	ee054184 	adfd	f4, f5, f4
        3596a0:	ee144182 	mufd	f4, f4, f2
        3596a4:	ed90d102 	ldfd	f5, [r0, #8]
        3596a8:	ee044185 	adfd	f4, f4, f5
        3596ac:	ee144182 	mufd	f4, f4, f2
        3596b0:	ed90d100 	ldfd	f5, [r0]
        3596b4:	ee044185 	adfd	f4, f4, f5
        3596b8:	ee112182 	mufd	f2, f1, f2
        3596bc:	ee144182 	mufd	f4, f4, f2
        3596c0:	ee009101 	mvfs	f1, f1
        3596c4:	ee00a100 	mvfs	f2, f0
        3596c8:	ee205181 	sufd	f5, f0, f1
        3596cc:	ee15518a 	mufd	f5, f5, #2.0
        3596d0:	ee116182 	mufd	f6, f1, f2
        3596d4:	ee255186 	sufd	f5, f5, f6
        3596d8:	ee200182 	sufd	f0, f0, f2
        3596dc:	ee100181 	mufd	f0, f0, f1
        3596e0:	ee250180 	sufd	f0, f5, f0
        3596e4:	ee100183 	mufd	f0, f0, f3
        3596e8:	ee000184 	adfd	f0, f0, f4
        3596ec:	ee004181 	adfd	f4, f0, f1
        3596f0:	e1a0000d 	mov	r0, sp
        3596f4:	eb616cc4 	bl	1bb4a0c <$feupdateenv>
        3596f8:	ee008184 	mvfd	f0, f4
        3596fc:	ed5bc20d 	lfm	f4, 3, [fp, -#52]
        359700:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        359704:	00381a34 	eoreqs	r1, r8, r4, lsr sl
    */
}

/**
 * Symbol: log1p
 * Address: 00359708
 */
void globals::log1p() {
    /*
        359708:	e1a0c00d 	mov	ip, sp
        35970c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        359710:	e24cb004 	sub	fp, ip, #4	; 0x4
        359714:	ed2d420c 	sfm	f4, 4, [sp, -#48]!
        359718:	e92d0003 	stmdb	sp!, {r0, r1}
        35971c:	ecbdc102 	ldfd	f4, [sp], #8
        359720:	e24dd00c 	sub	sp, sp, #12	; 0xc
        359724:	e1a0000d 	mov	r0, sp
        359728:	eb6168b1 	bl	1bb39f4 <$feholdexcept>
        35972c:	ed2dc102 	stfd	f4, [sp, -#8]!
        359730:	e8bd0003 	ldmia	sp!, {r0, r1}
        359734:	eb62a6a9 	bl	1c031e0 <$__fpclassifyd>
        359738:	e3300000 	teq	r0, #0	; 0x0
        35973c:	0a000006 	beq	35975c <log1p+0x54>
        359740:	e59f4028 	ldr	r4, [pc, #28]	; 359770 <log1p+0x68>
        359744:	e3300001 	teq	r0, #1	; 0x1
        359748:	0a000009 	beq	359774 <log1p+0x6c>
        35974c:	e3300002 	teq	r0, #2	; 0x2
        359750:	0a000002 	beq	359760 <log1p+0x58>
        359754:	e3300063 	teq	r0, #99	; 0x63
        359758:	1a00000c 	bne	359790 <log1p+0x88>
        35975c:	ee14418a 	mufd	f4, f4, #2.0
        359760:	e1a0000d 	mov	r0, sp
        359764:	eb616ca8 	bl	1bb4a0c <$feupdateenv>
        359768:	ee008184 	mvfd	f0, f4
        35976c:	ea000073 	b	359940 <log1p+0x238>
        359770:	00382264 	eoreqs	r2, r8, r4, ror #4
        359774:	eed4f118 	cmfe	f4, #0.0
        359778:	d3a00001 	movle	r0, #1	; 0x1
        35977c:	db61689d 	blle	1bb39f8 <$feraiseexcept>
        359780:	eed4f118 	cmfe	f4, #0.0
        359784:	cafffff5 	bgt	359760 <log1p+0x58>
        359788:	ed94c100 	ldfd	f4, [r4]
        35978c:	eafffff3 	b	359760 <log1p+0x58>
        359790:	ee108189 	mnfd	f0, #1.0
        359794:	eed4f110 	cmfe	f4, f0
        359798:	da00008e 	ble	3599d8 <log1p+0x2d0>
        35979c:	e59f00a4 	ldr	r0, [pc, #a4]	; 359848 <log1p+0x140>
        3597a0:	ed908100 	ldfd	f0, [r0]
        3597a4:	ee00e189 	mvfd	f6, #1.0
        3597a8:	eed4f110 	cmfe	f4, f0
        3597ac:	c59f0098 	ldrgt	r0, [pc, #98]	; 35984c <log1p+0x144>
        3597b0:	cd908100 	ldfgtd	f0, [r0]
        3597b4:	ced0f114 	cmfegt	f0, f4
        3597b8:	ca000054 	bgt	359910 <log1p+0x208>
        3597bc:	ee045189 	adfd	f5, f4, #1.0
        3597c0:	ed2dd102 	stfd	f5, [sp, -#8]!
        3597c4:	e8bd0003 	ldmia	sp!, {r0, r1}
        3597c8:	eb616c9d 	bl	1bb4a44 <$logb>
        3597cc:	ee105170 	fixz	r5, f0
        3597d0:	e2652000 	rsb	r2, r5, #0	; 0x0
        3597d4:	e1a04002 	mov	r4, r2
        3597d8:	ed2dd102 	stfd	f5, [sp, -#8]!
        3597dc:	e8bd0003 	ldmia	sp!, {r0, r1}
        3597e0:	eb6170a8 	bl	1bb5a88 <$scalb>
        3597e4:	ee00f180 	mvfd	f7, f0
        3597e8:	ed9f9118 	ldfd	f1, [pc, #96]
        3597ec:	ed8d9101 	stfd	f1, [sp, #4]
        3597f0:	ee100181 	mufd	f0, f0, f1
        3597f4:	ed2d8102 	stfd	f0, [sp, -#8]!
        3597f8:	e8bd0003 	ldmia	sp!, {r0, r1}
        3597fc:	eb616c9e 	bl	1bb4a7c <$rint>
        359800:	ed9d9101 	ldfd	f1, [sp, #4]
        359804:	ee405181 	dvfd	f5, f0, f1
        359808:	e3750002 	cmn	r5, #2	; 0x2
        35980c:	de270185 	sufled	f0, f7, f5
        359810:	da000019 	ble	35987c <log1p+0x174>
        359814:	e3550034 	cmp	r5, #52	; 0x34
        359818:	e1a02004 	mov	r2, r4
        35981c:	ca00000d 	bgt	359858 <log1p+0x150>
        359820:	ed2de102 	stfd	f6, [sp, -#8]!
        359824:	e8bd0003 	ldmia	sp!, {r0, r1}
        359828:	eb617096 	bl	1bb5a88 <$scalb>
        35982c:	ee206185 	sufd	f6, f0, f5
        359830:	e1a02004 	mov	r2, r4
        359834:	ed2dc102 	stfd	f4, [sp, -#8]!
        359838:	e8bd0003 	ldmia	sp!, {r0, r1}
        35983c:	eb617091 	bl	1bb5a88 <$scalb>
        359840:	ee060180 	adfd	f0, f6, f0
        359844:	ea00000c 	b	35987c <log1p+0x174>
        359848:	0038227c 	eoreqs	r2, r8, ip, ror r2
        35984c:	00382284 	eoreqs	r2, r8, r4, lsl #5
        359850:	40600000 	rsbmi	r0, r0, r0
        359854:	00000000 	andeq	r0, r0, r0
        359858:	ed2dc102 	stfd	f4, [sp, -#8]!
        35985c:	e8bd0003 	ldmia	sp!, {r0, r1}
        359860:	eb617088 	bl	1bb5a88 <$scalb>
        359864:	ee204185 	sufd	f4, f0, f5
        359868:	e1a02004 	mov	r2, r4
        35986c:	ed2de102 	stfd	f6, [sp, -#8]!
        359870:	e8bd0003 	ldmia	sp!, {r0, r1}
        359874:	eb617083 	bl	1bb5a88 <$scalb>
        359878:	ee040180 	adfd	f0, f4, f0
        35987c:	ee251189 	sufd	f1, f5, #1.0
        359880:	ed9da101 	ldfd	f2, [sp, #4]
        359884:	ee111182 	mufd	f1, f1, f2
        359888:	ee100171 	fixz	r0, f1
        35988c:	e59f1070 	ldr	r1, [pc, #70]	; 359904 <log1p+0x1fc>
        359890:	e2812b01 	add	r2, r1, #1024	; 0x400
        359894:	ed92a100 	ldfd	f2, [r2]
        359898:	ee015190 	fltd	f1, r5
        35989c:	ee123181 	mufd	f3, f2, f1
        3598a0:	e0811180 	add	r1, r1, r0, lsl #3
        3598a4:	ed91a100 	ldfd	f2, [r1]
        3598a8:	ee032182 	adfd	f2, f3, f2
        3598ac:	e59f1054 	ldr	r1, [pc, #54]	; 359908 <log1p+0x200>
        3598b0:	e2812b01 	add	r2, r1, #1024	; 0x400
        3598b4:	ed92b100 	ldfd	f3, [r2]
        3598b8:	ee133181 	mufd	f3, f3, f1
        3598bc:	e0810180 	add	r0, r1, r0, lsl #3
        3598c0:	ed909100 	ldfd	f1, [r0]
        3598c4:	ee031181 	adfd	f1, f3, f1
        3598c8:	ee10018a 	mufd	f0, f0, #2.0
        3598cc:	ee073185 	adfd	f3, f7, f5
        3598d0:	ee403183 	dvfd	f3, f0, f3
        3598d4:	ee130183 	mufd	f0, f3, f3
        3598d8:	ee135180 	mufd	f5, f3, f0
        3598dc:	e59f0028 	ldr	r0, [pc, #28]	; 35990c <log1p+0x204>
        3598e0:	ed90c102 	ldfd	f4, [r0, #8]
        3598e4:	ee140180 	mufd	f0, f4, f0
        3598e8:	ed90c100 	ldfd	f4, [r0]
        3598ec:	ee000184 	adfd	f0, f0, f4
        3598f0:	ee150180 	mufd	f0, f5, f0
        3598f4:	ee000181 	adfd	f0, f0, f1
        3598f8:	ee000183 	adfd	f0, f0, f3
        3598fc:	ee004182 	adfd	f4, f0, f2
        359900:	eaffff96 	b	359760 <log1p+0x58>
        359904:	00381a54 	eoreqs	r1, r8, r4, asr sl
        359908:	00381e5c 	eoreqs	r1, r8, ip, asr lr
        35990c:	00381a24 	eoreqs	r1, r8, r4, lsr #20
        359910:	e59f0030 	ldr	r0, [pc, #30]	; 359948 <log1p+0x240>
        359914:	ed908100 	ldfd	f0, [r0]
        359918:	ee109180 	mnfd	f1, f0
        35991c:	eed1f114 	cmfe	f1, f4
        359920:	ded4f110 	cmfele	f4, f0
        359924:	ca00000b 	bgt	359958 <log1p+0x250>
        359928:	ed9f8107 	ldfd	f0, [pc, #28]
        35992c:	ee141180 	mufd	f1, f4, f0
        359930:	e59f001c 	ldr	r0, [pc, #1c]	; 359954 <log1p+0x24c>
        359934:	ed90a100 	ldfd	f2, [r0]
        359938:	ee211182 	sufd	f1, f1, f2
        35993c:	ee410180 	dvfd	f0, f1, f0
        359940:	ed1b4211 	lfm	f4, 4, [fp, -#68]
        359944:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        359948:	0038228c 	eoreqs	r2, r8, ip, lsl #5
        35994c:	40200000 	eormi	r0, r0, r0
        359950:	00000000 	andeq	r0, r0, r0
        359954:	00382294 	mlaeqs	r8, r4, r2, r2
        359958:	ee04018a 	adfd	f0, f4, #2.0
        35995c:	ee461180 	dvfd	f1, f6, f0
        359960:	ee140181 	mufd	f0, f4, f1
        359964:	ee10018a 	mufd	f0, f0, #2.0
        359968:	ee102180 	mufd	f2, f0, f0
        35996c:	e59f0060 	ldr	r0, [pc, #60]	; 3599d4 <log1p+0x2cc>
        359970:	ed90d104 	ldfd	f5, [r0, #16]
        359974:	ed90b106 	ldfd	f3, [r0, #24]
        359978:	ee133182 	mufd	f3, f3, f2
        35997c:	ee053183 	adfd	f3, f5, f3
        359980:	ee135182 	mufd	f5, f3, f2
        359984:	ed90b102 	ldfd	f3, [r0, #8]
        359988:	ee053183 	adfd	f3, f5, f3
        35998c:	ee135182 	mufd	f5, f3, f2
        359990:	ed90b100 	ldfd	f3, [r0]
        359994:	ee053183 	adfd	f3, f5, f3
        359998:	ee102182 	mufd	f2, f0, f2
        35999c:	ee133182 	mufd	f3, f3, f2
        3599a0:	ee008100 	mvfs	f0, f0
        3599a4:	ee00a104 	mvfs	f2, f4
        3599a8:	ee245180 	sufd	f5, f4, f0
        3599ac:	ee15518a 	mufd	f5, f5, #2.0
        3599b0:	ee106182 	mufd	f6, f0, f2
        3599b4:	ee255186 	sufd	f5, f5, f6
        3599b8:	ee242182 	sufd	f2, f4, f2
        3599bc:	ee122180 	mufd	f2, f2, f0
        3599c0:	ee252182 	sufd	f2, f5, f2
        3599c4:	ee121181 	mufd	f1, f2, f1
        3599c8:	ee011183 	adfd	f1, f1, f3
        3599cc:	ee014180 	adfd	f4, f1, f0
        3599d0:	eaffff62 	b	359760 <log1p+0x58>
        3599d4:	00381a34 	eoreqs	r1, r8, r4, lsr sl
        3599d8:	1a000004 	bne	3599f0 <log1p+0x2e8>
        3599dc:	eb62a600 	bl	1c031e4 <$__inf>
        3599e0:	ee10c180 	mnfd	f4, f0
        3599e4:	e3a00002 	mov	r0, #2	; 0x2
        3599e8:	eb616802 	bl	1bb39f8 <$feraiseexcept>
        3599ec:	eaffff5b 	b	359760 <log1p+0x58>
        3599f0:	e3a00001 	mov	r0, #1	; 0x1
        3599f4:	eb6167ff 	bl	1bb39f8 <$feraiseexcept>
        3599f8:	eaffff62 	b	359788 <log1p+0x80>
    */
}

/**
 * Symbol: LL
 * Address: 00371c58
 */
void globals::LL() {
    /*
        371c58:	00000003 	andeq	r0, r0, r3
        371c5c:	00000007 	andeq	r0, r0, r7
        371c60:	0000000f 	andeq	r0, r0, pc
        371c64:	0000001f 	andeq	r0, r0, pc, lsl r0
        371c68:	00000040 	andeq	r0, r0, r0, asr #32
    */
}

/**
 * Symbol: LLB
 * Address: 00371c6c
 */
void globals::LLB() {
    /*
        371c6c:	00000003 	andeq	r0, r0, r3
        371c70:	00000005 	andeq	r0, r0, r5
        371c74:	00000007 	andeq	r0, r0, r7
        371c78:	00000009 	andeq	r0, r0, r9
        371c7c:	0000000a 	andeq	r0, r0, sl
    */
}

/**
 * Symbol: LLBase
 * Address: 00371c80
 */
void globals::LLBase() {
    /*
        371c80:	00000002 	andeq	r0, r0, r2
        371c84:	00000014 	andeq	r0, r0, r4, lsl r0
        371c88:	00000068 	andeq	r0, r0, r8, rrx
        371c8c:	000001d0 	ldreqd	r0, [r0], -r0
        371c90:	000003c0 	andeq	r0, r0, r0, asr #7
    */
}

/**
 * Symbol: LZCopyBits
 * Address: 00371d94
 */
void globals::LZCopyBits() {
    /*
        371d94:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        371d98:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        371d9c:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        371da0:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        371da4:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        371da8:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        371dac:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        371db0:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        371db4:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        371db8:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        371dbc:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        371dc0:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        371dc4:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        371dc8:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        371dcc:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        371dd0:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        371dd4:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        371dd8:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        371ddc:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        371de0:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        371de4:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        371de8:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        371dec:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        371df0:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        371df4:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        371df8:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        371dfc:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        371e00:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        371e04:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        371e08:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        371e0c:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        371e10:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        371e14:	03030303 	tsteq	r3, #201326592	; 0xc000000
        371e18:	03030303 	tsteq	r3, #201326592	; 0xc000000
        371e1c:	03030303 	tsteq	r3, #201326592	; 0xc000000
        371e20:	03030303 	tsteq	r3, #201326592	; 0xc000000
        371e24:	03030303 	tsteq	r3, #201326592	; 0xc000000
        371e28:	03030303 	tsteq	r3, #201326592	; 0xc000000
        371e2c:	03030303 	tsteq	r3, #201326592	; 0xc000000
        371e30:	03030303 	tsteq	r3, #201326592	; 0xc000000
        371e34:	04040404 	streq	r0, [r4], -#1028
        371e38:	04040404 	streq	r0, [r4], -#1028
        371e3c:	04040404 	streq	r0, [r4], -#1028
        371e40:	04040404 	streq	r0, [r4], -#1028
        371e44:	04040404 	streq	r0, [r4], -#1028
        371e48:	04040404 	streq	r0, [r4], -#1028
        371e4c:	04040404 	streq	r0, [r4], -#1028
        371e50:	04040404 	streq	r0, [r4], -#1028
        371e54:	04040404 	streq	r0, [r4], -#1028
        371e58:	04040404 	streq	r0, [r4], -#1028
        371e5c:	04040404 	streq	r0, [r4], -#1028
        371e60:	04040404 	streq	r0, [r4], -#1028
        371e64:	05050505 	streq	r0, [r5, -#1285]
        371e68:	05050505 	streq	r0, [r5, -#1285]
        371e6c:	05050505 	streq	r0, [r5, -#1285]
        371e70:	05050505 	streq	r0, [r5, -#1285]
        371e74:	05050505 	streq	r0, [r5, -#1285]
        371e78:	05050505 	streq	r0, [r5, -#1285]
        371e7c:	05050505 	streq	r0, [r5, -#1285]
        371e80:	05050505 	streq	r0, [r5, -#1285]
        371e84:	08080808 	stmeqda	r8, {r3, fp}
        371e88:	08080808 	stmeqda	r8, {r3, fp}
        371e8c:	0a0a0a0a 	beq	5f46bc <SYMdtem+0x2d328>
        371e90:	0b0b0c0c 	bleq	634ec8 <SYMindexnextuid+0x2cc>
    */
}

/**
 * Symbol: lpunct_charset
 * Address: 00375064
 */
void globals::lpunct_charset() {
    /*
        375064:	27222d28 	strcs	r2, [r2, -r8, lsr #26]!
        375068:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: LetterWithoutDescendet
 * Address: 00376848
 */
void globals::LetterWithoutDescendet() {
    /*
        376848:	41614262 	cmnmi	r1, r2, ror #4
        37684c:	43634464 	cmnmi	r3, #1677721600	; 0x64000000
        376850:	46486849 	strmib	r6, [r8], -r9, asr #16
        376854:	4b6b4d6d 	blmi	1e49e10 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x2395b8>
        376858:	4e6e4f6f 	cdpmi	15, 6, cr4, cr14, cr15, {3}
        37685c:	50515253 	subpls	r5, r1, r3, asr r2
        376860:	73547455 	cmpvc	r4, #1426063360	; 0x55000000
        376864:	75567657 	ldrvcb	r7, [r6, -#1623]
        376868:	7758785a 	undefined
        37686c:	80818283 	addhi	r8, r1, r3, lsl #5
        376870:	a0a10000 	adcge	r0, r1, r0
    */
}

/**
 * Symbol: let_stat
 * Address: 00376b54
 */
void globals::let_stat() {
    /*
        376b54:	00010203 	andeq	r0, r1, r3, lsl #4
        376b58:	04050607 	streq	r0, [r5], -#1543
        376b5c:	08090a0b 	stmeqda	r9, {r0, r1, r3, r9, fp}
        376b60:	0c0d0e0f 	stceq	14, cr0, [sp], -#60
        376b64:	10111213 	andnes	r1, r1, r3, lsl r2
        376b68:	14151617 	ldrne	r1, [r5], -#1559
        376b6c:	18191a1b 	ldmneda	r9, {r0, r1, r3, r4, r9, fp, ip}
        376b70:	1c1d1e1f 	ldcne	14, cr1, [sp], -#124
        376b74:	20212223 	eorcs	r2, r1, r3, lsr #4
        376b78:	24252627 	strcst	r2, [r5], -#1575
        376b7c:	28292a2b 	stmcsda	r9!, {r0, r1, r3, r5, r9, fp, sp}
        376b80:	2c2d2e2f 	stccs	14, cr2, [sp], -#188
        376b84:	94959697 	ldrls	r9, [r5], #1687
        376b88:	98999a9b 	ldmlsia	r9, {r0, r1, r3, r4, r7, r9, fp, ip, pc}
        376b8c:	9c9d3a3b 	ldcls	10, cr3, [sp], #236
        376b90:	3c3d3e3f 	ldccc	14, cr3, [sp], -#252
        376b94:	40beb1b8 	ldrmih	fp, [lr], r8
        376b98:	b7c1b0b5 	undefined
        376b9c:	b2bfa8ad 	adclts	sl, pc, #11337728	; 0xad0000
        376ba0:	b9b3bdba 	ldmltib	r3!, {r1, r3, r4, r5, r7, r8, sl, fp, ip, sp, pc}
        376ba4:	b4a9bcc0 	strltt	fp, [r9], #3264
        376ba8:	bbb6aeac 	bllt	ff122660 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd511e08>
        376bac:	aaafab5b 	bge	fef61920 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd3510c8>
        376bb0:	5c5d5e5f 	mrrcpl	14, 5, r5, sp, cr15
        376bb4:	60e6d9e0 	rscvs	sp, r6, r0, ror #19
        376bb8:	dfe9d8dd 	swile	0x00e9d8dd
        376bbc:	dae7d0d5 	ble	ffd6af18 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfe15a6c0>
        376bc0:	e1dbe5e2 	bics	lr, fp, r2, ror #11
        376bc4:	dcd1e4e8 	ldclel	4, cr14, [r1], #928
        376bc8:	e3ded6d4 	bics	sp, lr, #222298112	; 0xd400000
        376bcc:	d2d7d37b 	sbcles	sp, r7, #-335544319	; 0xec000001
        376bd0:	7c7d7e7f 	ldcvcl	14, cr7, [sp], -#508
    */
}

/**
 * Symbol: ltGrayPatternData
 * Address: 00380b2c
 */
void globals::ltGrayPatternData() {
    /*
        380b2c:	88228822 	stmhida	r2!, {r1, r5, fp, pc}
        380b30:	88228822 	stmhida	r2!, {r1, r5, fp, pc}
    */
}

/**
 * Symbol: ltGrayPattern
 * Address: 00380b34
 */
void globals::ltGrayPattern() {
    /*
        380b34:	00380b2c 	eoreqs	r0, r8, ip, lsr #22
        380b38:	00010000 	andeq	r0, r1, r0
        380b3c:	00000000 	andeq	r0, r0, r0
        380b40:	00080008 	andeq	r0, r8, r8
        380b44:	40000001 	andmi	r0, r0, r1
    */
}

/**
 * Symbol: ltGrayPatternPtr
 * Address: 00380b50
 */
void globals::ltGrayPatternPtr() {
    /*
        380b50:	00380b34 	eoreqs	r0, r8, r4, lsr fp
    */
}

