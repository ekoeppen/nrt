#include "include/CRingBuffer.h"

/**
 * Symbol: CRingBuffer::__ct(void)
 * Address: 001acb78
 */
CRingBuffer::CRingBuffer(void) {
    /*
        1acb78:	e1a0c00d 	mov	ip, sp
        1acb7c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1acb80:	e24cb004 	sub	fp, ip, #4	; 0x4
        1acb84:	e1b04000 	movs	r4, r0
        1acb88:	1a000003 	bne	1acb9c <CRingBuffer::__ct(void)+0x24>
        1acb8c:	e3a00024 	mov	r0, #36	; 0x24
        1acb90:	eb6886e8 	bl	1bce738 <$__nw(unsigned int)>
        1acb94:	e1b04000 	movs	r4, r0
        1acb98:	0a00000d 	beq	1acbd4 <CRingBuffer::__ct(void)+0x5c>
        1acb9c:	e1a00004 	mov	r0, r4
        1acba0:	eb68dd9a 	bl	1be4210 <CBaseRingBuffer::$__ct(void)>
        1acba4:	e3a00000 	mov	r0, #0	; 0x0
        1acba8:	e5c4001c 	strb	r0, [r4, #28]
        1acbac:	e5840018 	str	r0, [r4, #24]
        1acbb0:	e59f1024 	ldr	r1, [pc, #24]	; 1acbdc <CRingBuffer::__ct(void)+0x64>
        1acbb4:	e5841000 	str	r1, [r4]
        1acbb8:	e5c40021 	strb	r0, [r4, #33]	; fField33
        1acbbc:	e584000c 	str	r0, [r4, #12]	; fField12
        1acbc0:	e5840004 	str	r0, [r4, #4]	; fField4
        1acbc4:	e5840008 	str	r0, [r4, #8]	; fField8
        1acbc8:	e5840010 	str	r0, [r4, #16]	; fField16
        1acbcc:	e5840014 	str	r0, [r4, #20]	; fField20
        1acbd0:	e5c40020 	strb	r0, [r4, #32]	; fField32
        1acbd4:	e1a00004 	mov	r0, r4
        1acbd8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1acbdc:	0001b0e8 	andeq	fp, r1, r8, ror #1
    */
}

/**
 * Symbol: CRingBuffer::__dt(void)
 * Address: 001acbe0
 */
CRingBuffer::~CRingBuffer(void) {
    /*
        1acbe0:	e1a0c00d 	mov	ip, sp
        1acbe4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1acbe8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1acbec:	e1a04000 	mov	r4, r0
        1acbf0:	e1a05001 	mov	r5, r1
        1acbf4:	e59f0040 	ldr	r0, [pc, #40]	; 1acc3c <CRingBuffer::__dt(void)+0x5c>
        1acbf8:	e5840000 	str	r0, [r4]
        1acbfc:	e5d40021 	ldrb	r0, [r4, #33]	; fField33
        1acc00:	e3300000 	teq	r0, #0	; 0x0
        1acc04:	15940004 	ldrne	r0, [r4, #4]	; fField4
        1acc08:	13300000 	teqne	r0, #0	; 0x0
        1acc0c:	1b6882b3 	blne	1bcd6e0 <$__dl(void *)>
        1acc10:	e2840018 	add	r0, r4, #24	; 0x18
        1acc14:	e3a01000 	mov	r1, #0	; 0x0
        1acc18:	eb6886c1 	bl	1bce724 <TUObject::$__dt(void)>
        1acc1c:	e1a00004 	mov	r0, r4
        1acc20:	e3a01000 	mov	r1, #0	; 0x0
        1acc24:	eb68dd92 	bl	1be4274 <CBaseRingBuffer::$__dt(void)>
        1acc28:	e3150001 	tst	r5, #1	; 0x1
        1acc2c:	11a00004 	movne	r0, r4
        1acc30:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1acc34:	1a6882a9 	bne	1bcd6e0 <$__dl(void *)>
        1acc38:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1acc3c:	0001b0e8 	andeq	fp, r1, r8, ror #1
    */
}

/**
 * Symbol: CRingBuffer::Put(int)
 * Address: 001acc40
 */
CRingBuffer::Put(int) {
    /*
        1acc40:	e1a0c00d 	mov	ip, sp
        1acc44:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1acc48:	e24cb004 	sub	fp, ip, #4	; 0x4
        1acc4c:	e1a04000 	mov	r4, r0
        1acc50:	e1a05001 	mov	r5, r1
        1acc54:	e1a06001 	mov	r6, r1
        1acc58:	e5901000 	ldr	r1, [r0]
        1acc5c:	e1a0e00f 	mov	lr, pc
        1acc60:	e281f034 	add	pc, r1, #52	; 0x34
        1acc64:	e3300000 	teq	r0, #0	; 0x0
        1acc68:	13e06000 	mvnne	r6, #0	; 0x0
        1acc6c:	1a000006 	bne	1acc8c <CRingBuffer::Put(int)+0x4c>
        1acc70:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1acc74:	e4c05001 	strb	r5, [r0], #1
        1acc78:	e5840010 	str	r0, [r4, #16]	; fField16
        1acc7c:	e5941008 	ldr	r1, [r4, #8]	; fField8
        1acc80:	e1300001 	teq	r0, r1
        1acc84:	05940004 	ldreq	r0, [r4, #4]	; fField4
        1acc88:	05a40010 	streq	r0, [r4, #16]!	; fField16
        1acc8c:	e1a00006 	mov	r0, r6
        1acc90:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: CRingBuffer::Putn(unsigned char const *, long)
 * Address: 001acc94
 */
CRingBuffer::Putn(unsigned char const *, long) {
    /*
        1acc94:	e1a0c00d 	mov	ip, sp
        1acc98:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1acc9c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1acca0:	e1a04002 	mov	r4, r2
        1acca4:	e52d2004 	str	r2, [sp, -#4]!	; fField4
        1acca8:	e1a0200d 	mov	r2, sp
        1accac:	e5903000 	ldr	r3, [r0]
        1accb0:	e1a0e00f 	mov	lr, pc
        1accb4:	e283f024 	add	pc, r3, #36	; 0x24
        1accb8:	e49d0004 	ldr	r0, [sp], #4	; fField4
        1accbc:	e0440000 	sub	r0, r4, r0
        1accc0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: CRingBuffer::CopyIn(unsigned char const *, long &)
 * Address: 001accc4
 */
CRingBuffer::CopyIn(unsigned char const *, long &) {
    /*
        1accc4:	e1a0c00d 	mov	ip, sp
        1accc8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1acccc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1accd0:	e1a04000 	mov	r4, r0
        1accd4:	e1a06001 	mov	r6, r1
        1accd8:	e1a05002 	mov	r5, r2
        1accdc:	e24dd010 	sub	sp, sp, #16	; 0x10
        1acce0:	e5920000 	ldr	r0, [r2]
        1acce4:	e3300000 	teq	r0, #0	; 0x0
        1acce8:	1a000001 	bne	1accf4 <CRingBuffer::CopyIn(unsigned char const *, long &)+0x30>
        1accec:	e3a00000 	mov	r0, #0	; 0x0
        1accf0:	ea000041 	b	1acdfc <CRingBuffer::CopyIn(unsigned char const *, long &)+0x138>
        1accf4:	e1a0300d 	mov	r3, sp
        1accf8:	e92d0008 	stmdb	sp!, {r3}
        1accfc:	e28d300c 	add	r3, sp, #12	; 0xc
        1acd00:	e28d2008 	add	r2, sp, #8	; 0x8
        1acd04:	e28d1010 	add	r1, sp, #16	; 0x10
        1acd08:	e1a00004 	mov	r0, r4
        1acd0c:	e594c000 	ldr	ip, [r4]
        1acd10:	e1a0e00f 	mov	lr, pc
        1acd14:	e28cf04c 	add	pc, ip, #76	; 0x4c
        1acd18:	e28dd004 	add	sp, sp, #4	; 0x4
        1acd1c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        1acd20:	e3300000 	teq	r0, #0	; 0x0
        1acd24:	0a000017 	beq	1acd88 <CRingBuffer::CopyIn(unsigned char const *, long &)+0xc4>
        1acd28:	e59d0000 	ldr	r0, [sp]
        1acd2c:	e3500000 	cmp	r0, #0	; 0x0
        1acd30:	da000014 	ble	1acd88 <CRingBuffer::CopyIn(unsigned char const *, long &)+0xc4>
        1acd34:	e5951000 	ldr	r1, [r5]
        1acd38:	e1510000 	cmp	r1, r0
        1acd3c:	a1a02000 	movge	r2, r0
        1acd40:	b1a02001 	movlt	r2, r1
        1acd44:	e58d2000 	str	r2, [sp]
        1acd48:	e1a00006 	mov	r0, r6
        1acd4c:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        1acd50:	eb68c87f 	bl	1bdef54 <$BlockMove>
        1acd54:	e59d0000 	ldr	r0, [sp]
        1acd58:	e0866000 	add	r6, r6, r0
        1acd5c:	e5952000 	ldr	r2, [r5]
        1acd60:	e0420000 	sub	r0, r2, r0
        1acd64:	e5850000 	str	r0, [r5]
        1acd68:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1acd6c:	e59d1000 	ldr	r1, [sp]
        1acd70:	e0800001 	add	r0, r0, r1
        1acd74:	e5840010 	str	r0, [r4, #16]	; fField16
        1acd78:	e5941008 	ldr	r1, [r4, #8]	; fField8
        1acd7c:	e1300001 	teq	r0, r1
        1acd80:	05940004 	ldreq	r0, [r4, #4]	; fField4
        1acd84:	05840010 	streq	r0, [r4, #16]	; fField16
        1acd88:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        1acd8c:	e3300000 	teq	r0, #0	; 0x0
        1acd90:	0a000012 	beq	1acde0 <CRingBuffer::CopyIn(unsigned char const *, long &)+0x11c>
        1acd94:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        1acd98:	e3510000 	cmp	r1, #0	; 0x0
        1acd9c:	da00000f 	ble	1acde0 <CRingBuffer::CopyIn(unsigned char const *, long &)+0x11c>
        1acda0:	e5950000 	ldr	r0, [r5]
        1acda4:	e1500001 	cmp	r0, r1
        1acda8:	a1a02001 	movge	r2, r1
        1acdac:	b1a02000 	movlt	r2, r0
        1acdb0:	e58d2004 	str	r2, [sp, #4]	; fField4
        1acdb4:	e1a00006 	mov	r0, r6
        1acdb8:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        1acdbc:	eb68c864 	bl	1bdef54 <$BlockMove>
        1acdc0:	e5951000 	ldr	r1, [r5]
        1acdc4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1acdc8:	e0410000 	sub	r0, r1, r0
        1acdcc:	e5850000 	str	r0, [r5]
        1acdd0:	e5941010 	ldr	r1, [r4, #16]	; fField16
        1acdd4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1acdd8:	e0810000 	add	r0, r1, r0
        1acddc:	e5840010 	str	r0, [r4, #16]	; fField16
        1acde0:	e1a00004 	mov	r0, r4
        1acde4:	e5941000 	ldr	r1, [r4]
        1acde8:	e1a0e00f 	mov	lr, pc
        1acdec:	e281f034 	add	pc, r1, #52	; 0x34
        1acdf0:	e3300000 	teq	r0, #0	; 0x0
        1acdf4:	0affffbc 	beq	1accec <CRingBuffer::CopyIn(unsigned char const *, long &)+0x28>
        1acdf8:	e3e00000 	mvn	r0, #0	; 0x0
        1acdfc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: CRingBuffer::CopyIn(CPipe *, long &)
 * Address: 001ace00
 */
CRingBuffer::CopyIn(CPipe *, long &) {
    /*
        1ace00:	e1a0c00d 	mov	ip, sp
        1ace04:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1ace08:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ace0c:	e1a04000 	mov	r4, r0
        1ace10:	e1a06001 	mov	r6, r1
        1ace14:	e1a05002 	mov	r5, r2
        1ace18:	e3a00000 	mov	r0, #0	; 0x0
        1ace1c:	e52d0018 	str	r0, [sp, -#24]!
        1ace20:	e5920000 	ldr	r0, [r2]
        1ace24:	e3300000 	teq	r0, #0	; 0x0
        1ace28:	0a000078 	beq	1ad010 <CRingBuffer::CopyIn(CPipe *, long &)+0x210>
        1ace2c:	e28d3008 	add	r3, sp, #8	; 0x8
        1ace30:	e92d0008 	stmdb	sp!, {r3}
        1ace34:	e28d3014 	add	r3, sp, #20	; 0x14
        1ace38:	e28d2010 	add	r2, sp, #16	; 0x10
        1ace3c:	e28d1018 	add	r1, sp, #24	; 0x18
        1ace40:	e1a00004 	mov	r0, r4
        1ace44:	e594c000 	ldr	ip, [r4]
        1ace48:	e1a0e00f 	mov	lr, pc
        1ace4c:	e28cf04c 	add	pc, ip, #76	; 0x4c
        1ace50:	e28dd004 	add	sp, sp, #4	; 0x4
        1ace54:	e3a08000 	mov	r8, #0	; 0x0
        1ace58:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        1ace5c:	e59f705c 	ldr	r7, [pc, #5c]	; 1acec0 <CRingBuffer::CopyIn(CPipe *, long &)+0xc0>
        1ace60:	e3300000 	teq	r0, #0	; 0x0
        1ace64:	0a000030 	beq	1acf2c <CRingBuffer::CopyIn(CPipe *, long &)+0x12c>
        1ace68:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        1ace6c:	e3510000 	cmp	r1, #0	; 0x0
        1ace70:	da00002d 	ble	1acf2c <CRingBuffer::CopyIn(CPipe *, long &)+0x12c>
        1ace74:	e5950000 	ldr	r0, [r5]
        1ace78:	e1500001 	cmp	r0, r1
        1ace7c:	a1a00001 	movge	r0, r1
        1ace80:	e58d0008 	str	r0, [sp, #8]	; fField8
        1ace84:	e52d806c 	str	r8, [sp, -#108]!
        1ace88:	e28d0008 	add	r0, sp, #8	; 0x8
        1ace8c:	eb6816b8 	bl	1bb2974 <$setjmp>
        1ace90:	e3300000 	teq	r0, #0	; 0x0
        1ace94:	1a00000a 	bne	1acec4 <CRingBuffer::CopyIn(CPipe *, long &)+0xc4>
        1ace98:	e1a0000d 	mov	r0, sp
        1ace9c:	eb68cc76 	bl	1be007c <$AddExceptionHandler>
        1acea0:	e28d3070 	add	r3, sp, #112	; 0x70
        1acea4:	e28d2074 	add	r2, sp, #116	; 0x74
        1acea8:	e1a00006 	mov	r0, r6
        1aceac:	e59d107c 	ldr	r1, [sp, #124]
        1aceb0:	e596c000 	ldr	ip, [r6]
        1aceb4:	e1a0e00f 	mov	lr, pc
        1aceb8:	e28cf014 	add	pc, ip, #20	; 0x14
        1acebc:	ea000009 	b	1acee8 <CRingBuffer::CopyIn(CPipe *, long &)+0xe8>
        1acec0:	00371324 	eoreqs	r1, r7, r4, lsr #6
        1acec4:	e59d0060 	ldr	r0, [sp, #96]
        1acec8:	e5971000 	ldr	r1, [r7]
        1acecc:	eb68d8b0 	bl	1be3194 <$Subexception>
        1aced0:	e3300000 	teq	r0, #0	; 0x0
        1aced4:	159d0064 	ldrne	r0, [sp, #100]
        1aced8:	158d006c 	strne	r0, [sp, #108]
        1acedc:	1a000001 	bne	1acee8 <CRingBuffer::CopyIn(CPipe *, long &)+0xe8>
        1acee0:	e1a0000d 	mov	r0, sp
        1acee4:	eb68d49a 	bl	1be2154 <$NextHandler>
        1acee8:	e1a0000d 	mov	r0, sp
        1aceec:	eb68d071 	bl	1be10b8 <$ExitHandler>
        1acef0:	e5bd006c 	ldr	r0, [sp, #108]!
        1acef4:	e3300000 	teq	r0, #0	; 0x0
        1acef8:	1a000044 	bne	1ad010 <CRingBuffer::CopyIn(CPipe *, long &)+0x210>
        1acefc:	e5951000 	ldr	r1, [r5]
        1acf00:	e59d2008 	ldr	r2, [sp, #8]	; fField8
        1acf04:	e0411002 	sub	r1, r1, r2
        1acf08:	e5851000 	str	r1, [r5]
        1acf0c:	e5941010 	ldr	r1, [r4, #16]	; fField16
        1acf10:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        1acf14:	e0810000 	add	r0, r1, r0
        1acf18:	e5840010 	str	r0, [r4, #16]	; fField16
        1acf1c:	e5941008 	ldr	r1, [r4, #8]	; fField8
        1acf20:	e1300001 	teq	r0, r1
        1acf24:	05940004 	ldreq	r0, [r4, #4]	; fField4
        1acf28:	05840010 	streq	r0, [r4, #16]	; fField16
        1acf2c:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        1acf30:	e3300000 	teq	r0, #0	; 0x0
        1acf34:	0a00002e 	beq	1acff4 <CRingBuffer::CopyIn(CPipe *, long &)+0x1f4>
        1acf38:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        1acf3c:	e3510000 	cmp	r1, #0	; 0x0
        1acf40:	da00002b 	ble	1acff4 <CRingBuffer::CopyIn(CPipe *, long &)+0x1f4>
        1acf44:	e5dd0004 	ldrb	r0, [sp, #4]	; fField4
        1acf48:	e3300000 	teq	r0, #0	; 0x0
        1acf4c:	1a000028 	bne	1acff4 <CRingBuffer::CopyIn(CPipe *, long &)+0x1f4>
        1acf50:	e5950000 	ldr	r0, [r5]
        1acf54:	e1500001 	cmp	r0, r1
        1acf58:	a1a00001 	movge	r0, r1
        1acf5c:	e58d000c 	str	r0, [sp, #12]	; fField12
        1acf60:	e52d806c 	str	r8, [sp, -#108]!
        1acf64:	e28d0008 	add	r0, sp, #8	; 0x8
        1acf68:	eb681681 	bl	1bb2974 <$setjmp>
        1acf6c:	e3300000 	teq	r0, #0	; 0x0
        1acf70:	1a000009 	bne	1acf9c <CRingBuffer::CopyIn(CPipe *, long &)+0x19c>
        1acf74:	e1a0000d 	mov	r0, sp
        1acf78:	eb68cc3f 	bl	1be007c <$AddExceptionHandler>
        1acf7c:	e28d3070 	add	r3, sp, #112	; 0x70
        1acf80:	e28d2078 	add	r2, sp, #120	; 0x78
        1acf84:	e1a00006 	mov	r0, r6
        1acf88:	e59d1080 	ldr	r1, [sp, #128]
        1acf8c:	e596c000 	ldr	ip, [r6]
        1acf90:	e1a0e00f 	mov	lr, pc
        1acf94:	e28cf014 	add	pc, ip, #20	; 0x14
        1acf98:	ea000008 	b	1acfc0 <CRingBuffer::CopyIn(CPipe *, long &)+0x1c0>
        1acf9c:	e59d0060 	ldr	r0, [sp, #96]
        1acfa0:	e5971000 	ldr	r1, [r7]
        1acfa4:	eb68d87a 	bl	1be3194 <$Subexception>
        1acfa8:	e3300000 	teq	r0, #0	; 0x0
        1acfac:	159d0064 	ldrne	r0, [sp, #100]
        1acfb0:	158d006c 	strne	r0, [sp, #108]
        1acfb4:	1a000001 	bne	1acfc0 <CRingBuffer::CopyIn(CPipe *, long &)+0x1c0>
        1acfb8:	e1a0000d 	mov	r0, sp
        1acfbc:	eb68d464 	bl	1be2154 <$NextHandler>
        1acfc0:	e1a0000d 	mov	r0, sp
        1acfc4:	eb68d03b 	bl	1be10b8 <$ExitHandler>
        1acfc8:	e5bd006c 	ldr	r0, [sp, #108]!
        1acfcc:	e3300000 	teq	r0, #0	; 0x0
        1acfd0:	1a00000e 	bne	1ad010 <CRingBuffer::CopyIn(CPipe *, long &)+0x210>
        1acfd4:	e5951000 	ldr	r1, [r5]
        1acfd8:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        1acfdc:	e0410000 	sub	r0, r1, r0
        1acfe0:	e5850000 	str	r0, [r5]
        1acfe4:	e5941010 	ldr	r1, [r4, #16]	; fField16
        1acfe8:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        1acfec:	e0810000 	add	r0, r1, r0
        1acff0:	e5840010 	str	r0, [r4, #16]	; fField16
        1acff4:	e1a00004 	mov	r0, r4
        1acff8:	e5941000 	ldr	r1, [r4]
        1acffc:	e1a0e00f 	mov	lr, pc
        1ad000:	e281f034 	add	pc, r1, #52	; 0x34
        1ad004:	e3300000 	teq	r0, #0	; 0x0
        1ad008:	13e00000 	mvnne	r0, #0	; 0x0
        1ad00c:	e58d0000 	str	r0, [sp]
        1ad010:	e49d0018 	ldr	r0, [sp], #24
        1ad014:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: CRingBuffer::Reset(void)
 * Address: 001ad018
 */
CRingBuffer::Reset(void) {
    /*
        1ad018:	e5901004 	ldr	r1, [r0, #4]	; fField4
        1ad01c:	e5801014 	str	r1, [r0, #20]	; fField20
        1ad020:	e5a01010 	str	r1, [r0, #16]!	; fField16
        1ad024:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CRingBuffer::GetSize( const(void))
 * Address: 001ad028
 */
CRingBuffer::GetSize( const(void)) {
    /*
        1ad028:	e590000c 	ldr	r0, [r0, #12]	; fField12
        1ad02c:	e2400001 	sub	r0, r0, #1	; 0x1
        1ad030:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CRingBuffer::IsFull( const(void))
 * Address: 001ad034
 */
CRingBuffer::IsFull( const(void)) {
    /*
        1ad034:	e5901014 	ldr	r1, [r0, #20]	; fField20
        1ad038:	e5902004 	ldr	r2, [r0, #4]	; fField4
        1ad03c:	e1310002 	teq	r1, r2
        1ad040:	05901008 	ldreq	r1, [r0, #8]	; fField8
        1ad044:	e2411001 	sub	r1, r1, #1	; 0x1
        1ad048:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1ad04c:	e1300001 	teq	r0, r1
        1ad050:	13a00000 	movne	r0, #0	; 0x0
        1ad054:	03a00001 	moveq	r0, #1	; 0x1
        1ad058:	e20000ff 	and	r0, r0, #255	; 0xff
        1ad05c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CRingBuffer::IsEmpty( const(void))
 * Address: 001ad060
 */
CRingBuffer::IsEmpty( const(void)) {
    /*
        1ad060:	e2801010 	add	r1, r0, #16	; 0x10
        1ad064:	e8910003 	ldmia	r1, {r0, r1}
        1ad068:	e1310000 	teq	r1, r0
        1ad06c:	13a00000 	movne	r0, #0	; 0x0
        1ad070:	03a00001 	moveq	r0, #1	; 0x1
        1ad074:	e20000ff 	and	r0, r0, #255	; 0xff
        1ad078:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CRingBuffer::AtEOF( const(void))
 * Address: 001ad07c
 */
CRingBuffer::AtEOF( const(void)) {
    /*
        1ad07c:	e1a0c00d 	mov	ip, sp
        1ad080:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1ad084:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ad088:	e1a04000 	mov	r4, r0
        1ad08c:	e5901000 	ldr	r1, [r0]
        1ad090:	e1a0e00f 	mov	lr, pc
        1ad094:	e281f038 	add	pc, r1, #56	; 0x38
        1ad098:	e3300000 	teq	r0, #0	; 0x0
        1ad09c:	1a000005 	bne	1ad0b8 <CRingBuffer::AtEOF( const(void))+0x3c>
        1ad0a0:	e1a00004 	mov	r0, r4
        1ad0a4:	e5941000 	ldr	r1, [r4]
        1ad0a8:	e1a0e00f 	mov	lr, pc
        1ad0ac:	e281f034 	add	pc, r1, #52	; 0x34
        1ad0b0:	e3300000 	teq	r0, #0	; 0x0
        1ad0b4:	0a000001 	beq	1ad0c0 <CRingBuffer::AtEOF( const(void))+0x44>
        1ad0b8:	e3a00001 	mov	r0, #1	; 0x1
        1ad0bc:	ea000000 	b	1ad0c4 <CRingBuffer::AtEOF( const(void))+0x48>
        1ad0c0:	e3a00000 	mov	r0, #0	; 0x0
        1ad0c4:	e20000ff 	and	r0, r0, #255	; 0xff
        1ad0c8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: CRingBuffer::FreeCount( const(void))
 * Address: 001ad0cc
 */
CRingBuffer::FreeCount( const(void)) {
    /*
        1ad0cc:	e2803010 	add	r3, r0, #16	; 0x10
        1ad0d0:	e893000c 	ldmia	r3, {r2, r3}
        1ad0d4:	e0431002 	sub	r1, r3, r2
        1ad0d8:	e2411001 	sub	r1, r1, #1	; 0x1
        1ad0dc:	e1530002 	cmp	r3, r2
        1ad0e0:	9590000c 	ldrls	r0, [r0, #12]	; fField12
        1ad0e4:	90801001 	addls	r1, r0, r1
        1ad0e8:	e1a00001 	mov	r0, r1
        1ad0ec:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CRingBuffer::Init(long)
 * Address: 001ad0f0
 */
CRingBuffer::Init(long) {
    /*
        1ad0f0:	e1a0c00d 	mov	ip, sp
        1ad0f4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1ad0f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ad0fc:	e1a04000 	mov	r4, r0
        1ad100:	e1a05001 	mov	r5, r1
        1ad104:	e5d00021 	ldrb	r0, [r0, #33]	; fField33
        1ad108:	e3300000 	teq	r0, #0	; 0x0
        1ad10c:	15940004 	ldrne	r0, [r4, #4]	; fField4
        1ad110:	13300000 	teqne	r0, #0	; 0x0
        1ad114:	1b688171 	blne	1bcd6e0 <$__dl(void *)>
        1ad118:	e2850001 	add	r0, r5, #1	; 0x1
        1ad11c:	e584000c 	str	r0, [r4, #12]	; fField12
        1ad120:	eb68d406 	bl	1be2140 <$NewPtr>
        1ad124:	e5840004 	str	r0, [r4, #4]	; fField4
        1ad128:	e3300000 	teq	r0, #0	; 0x0
        1ad12c:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
        1ad130:	0a68d3fa 	beq	1be2120 <$MemError>
        1ad134:	e594100c 	ldr	r1, [r4, #12]	; fField12
        1ad138:	e0801001 	add	r1, r0, r1
        1ad13c:	e5840014 	str	r0, [r4, #20]	; fField20
        1ad140:	e5841008 	str	r1, [r4, #8]	; fField8
        1ad144:	e5840010 	str	r0, [r4, #16]	; fField16
        1ad148:	e3a00001 	mov	r0, #1	; 0x1
        1ad14c:	e5c40021 	strb	r0, [r4, #33]	; fField33
        1ad150:	e3a00000 	mov	r0, #0	; 0x0
        1ad154:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CRingBuffer::DataCount( const(void))
 * Address: 001ad158
 */
CRingBuffer::DataCount( const(void)) {
    /*
        1ad158:	e5902014 	ldr	r2, [r0, #20]	; fField20
        1ad15c:	e5903010 	ldr	r3, [r0, #16]	; fField16
        1ad160:	e0431002 	sub	r1, r3, r2
        1ad164:	e1530002 	cmp	r3, r2
        1ad168:	3590000c 	ldrcc	r0, [r0, #12]	; fField12
        1ad16c:	30801001 	addcc	r1, r0, r1
        1ad170:	e1a00001 	mov	r0, r1
        1ad174:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ComputePutVectors__11CRingBufferCFRPUcRlT1T2
 * Address: 001ad178
 */
void CRingBuffer::ComputePutVectors() {
    /*
        1ad178:	e92d40f0 	stmdb	sp!, {r4, r5, r6, r7, lr}
        1ad17c:	e59d4014 	ldr	r4, [sp, #20]	; fField20
        1ad180:	e5907014 	ldr	r7, [r0, #20]	; fField20
        1ad184:	e590e004 	ldr	lr, [r0, #4]	; fField4
        1ad188:	e137000e 	teq	r7, lr
        1ad18c:	1247c001 	subne	ip, r7, #1	; 0x1
        1ad190:	0590c008 	ldreq	ip, [r0, #8]	; fField8
        1ad194:	024cc001 	subeq	ip, ip, #1	; 0x1
        1ad198:	e3a06000 	mov	r6, #0	; 0x0
        1ad19c:	e5905010 	ldr	r5, [r0, #16]	; fField16
        1ad1a0:	e1350007 	teq	r5, r7
        1ad1a4:	1a000015 	bne	1ad200 <ComputePutVectors__11CRingBufferCFRPUcRlT1T2+0x88>
        1ad1a8:	e135000e 	teq	r5, lr
        1ad1ac:	113e000c 	teqne	lr, ip
        1ad1b0:	05816000 	streq	r6, [r1]
        1ad1b4:	05826000 	streq	r6, [r2]
        1ad1b8:	0a000003 	beq	1ad1cc <ComputePutVectors__11CRingBufferCFRPUcRlT1T2+0x54>
        1ad1bc:	e581e000 	str	lr, [r1]
        1ad1c0:	e5901004 	ldr	r1, [r0, #4]	; fField4
        1ad1c4:	e04c1001 	sub	r1, ip, r1
        1ad1c8:	e5821000 	str	r1, [r2]
        1ad1cc:	e5901010 	ldr	r1, [r0, #16]	; fField16
        1ad1d0:	e151000c 	cmp	r1, ip
        1ad1d4:	9a000004 	bls	1ad1ec <ComputePutVectors__11CRingBufferCFRPUcRlT1T2+0x74>
        1ad1d8:	e5831000 	str	r1, [r3]
        1ad1dc:	e5901008 	ldr	r1, [r0, #8]	; fField8
        1ad1e0:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1ad1e4:	e0410000 	sub	r0, r1, r0
        1ad1e8:	ea000002 	b	1ad1f8 <ComputePutVectors__11CRingBufferCFRPUcRlT1T2+0x80>
        1ad1ec:	e5831000 	str	r1, [r3]
        1ad1f0:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1ad1f4:	e04c0000 	sub	r0, ip, r0
        1ad1f8:	e5840000 	str	r0, [r4]
        1ad1fc:	e8bd80f0 	ldmia	sp!, {r4, r5, r6, r7, pc}
        1ad200:	e155000c 	cmp	r5, ip
        1ad204:	1a000004 	bne	1ad21c <ComputePutVectors__11CRingBufferCFRPUcRlT1T2+0xa4>
        1ad208:	e5836000 	str	r6, [r3]
        1ad20c:	e5816000 	str	r6, [r1]
        1ad210:	e5846000 	str	r6, [r4]
        1ad214:	e5826000 	str	r6, [r2]
        1ad218:	e8bd80f0 	ldmia	sp!, {r4, r5, r6, r7, pc}
        1ad21c:	95816000 	strls	r6, [r1]
        1ad220:	95826000 	strls	r6, [r2]
        1ad224:	95901010 	ldrls	r1, [r0, #16]	; fField16
        1ad228:	9affffef 	bls	1ad1ec <ComputePutVectors__11CRingBufferCFRPUcRlT1T2+0x74>
        1ad22c:	e581e000 	str	lr, [r1]
        1ad230:	e5901004 	ldr	r1, [r0, #4]	; fField4
        1ad234:	e04c1001 	sub	r1, ip, r1
        1ad238:	e5821000 	str	r1, [r2]
        1ad23c:	e5901010 	ldr	r1, [r0, #16]	; fField16
        1ad240:	eaffffe4 	b	1ad1d8 <ComputePutVectors__11CRingBufferCFRPUcRlT1T2+0x60>
    */
}

/**
 * Symbol: ComputeGetVectors__11CRingBufferCFRPUcRlT1T2
 * Address: 001ad244
 */
void CRingBuffer::ComputeGetVectors() {
    /*
        1ad244:	e92d40f0 	stmdb	sp!, {r4, r5, r6, r7, lr}
        1ad248:	e59de014 	ldr	lr, [sp, #20]	; fField20
        1ad24c:	e5907004 	ldr	r7, [r0, #4]	; fField4
        1ad250:	e590c014 	ldr	ip, [r0, #20]	; fField20
        1ad254:	e13c0007 	teq	ip, r7
        1ad258:	124c6001 	subne	r6, ip, #1	; 0x1
        1ad25c:	05904008 	ldreq	r4, [r0, #8]	; fField8
        1ad260:	02446001 	subeq	r6, r4, #1	; 0x1
        1ad264:	e3a05000 	mov	r5, #0	; 0x0
        1ad268:	e5904010 	ldr	r4, [r0, #16]	; fField16
        1ad26c:	e134000c 	teq	r4, ip
        1ad270:	1a000004 	bne	1ad288 <ComputeGetVectors__11CRingBufferCFRPUcRlT1T2+0x44>
        1ad274:	e5835000 	str	r5, [r3]
        1ad278:	e5815000 	str	r5, [r1]
        1ad27c:	e58e5000 	str	r5, [lr]
        1ad280:	e5825000 	str	r5, [r2]
        1ad284:	e8bd80f0 	ldmia	sp!, {r4, r5, r6, r7, pc}
        1ad288:	e1340006 	teq	r4, r6
        1ad28c:	1a00000a 	bne	1ad2bc <ComputeGetVectors__11CRingBufferCFRPUcRlT1T2+0x78>
        1ad290:	e154000c 	cmp	r4, ip
        1ad294:	2a00000a 	bcs	1ad2c4 <ComputeGetVectors__11CRingBufferCFRPUcRlT1T2+0x80>
        1ad298:	e5817000 	str	r7, [r1]
        1ad29c:	e5901010 	ldr	r1, [r0, #16]	; fField16
        1ad2a0:	e590c004 	ldr	ip, [r0, #4]	; fField4
        1ad2a4:	e041100c 	sub	r1, r1, ip
        1ad2a8:	e5821000 	str	r1, [r2]
        1ad2ac:	e5901014 	ldr	r1, [r0, #20]	; fField20
        1ad2b0:	e5831000 	str	r1, [r3]
        1ad2b4:	e5901008 	ldr	r1, [r0, #8]	; fField8
        1ad2b8:	ea000006 	b	1ad2d8 <ComputeGetVectors__11CRingBufferCFRPUcRlT1T2+0x94>
        1ad2bc:	e15c0004 	cmp	ip, r4
        1ad2c0:	2a000008 	bcs	1ad2e8 <ComputeGetVectors__11CRingBufferCFRPUcRlT1T2+0xa4>
        1ad2c4:	e5815000 	str	r5, [r1]
        1ad2c8:	e5825000 	str	r5, [r2]
        1ad2cc:	e5901014 	ldr	r1, [r0, #20]	; fField20
        1ad2d0:	e5831000 	str	r1, [r3]
        1ad2d4:	e5901010 	ldr	r1, [r0, #16]	; fField16
        1ad2d8:	e5900014 	ldr	r0, [r0, #20]	; fField20
        1ad2dc:	e0410000 	sub	r0, r1, r0
        1ad2e0:	e58e0000 	str	r0, [lr]
        1ad2e4:	e8bd80f0 	ldmia	sp!, {r4, r5, r6, r7, pc}
        1ad2e8:	e583c000 	str	ip, [r3]
        1ad2ec:	e5903014 	ldr	r3, [r0, #20]	; fField20
        1ad2f0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        1ad2f4:	e04c3003 	sub	r3, ip, r3
        1ad2f8:	e58e3000 	str	r3, [lr]
        1ad2fc:	e5903004 	ldr	r3, [r0, #4]	; fField4
        1ad300:	e5813000 	str	r3, [r1]
        1ad304:	e5901010 	ldr	r1, [r0, #16]	; fField16
        1ad308:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1ad30c:	e0410000 	sub	r0, r1, r0
        1ad310:	e5820000 	str	r0, [r2]
        1ad314:	e8bd80f0 	ldmia	sp!, {r4, r5, r6, r7, pc}
    */
}

/**
 * Symbol: CRingBuffer::UpdateGetVector(long)
 * Address: 001ad318
 */
CRingBuffer::UpdateGetVector(long) {
    /*
        1ad318:	e1a0c00d 	mov	ip, sp
        1ad31c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1ad320:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ad324:	e1a05000 	mov	r5, r0
        1ad328:	e1a04001 	mov	r4, r1
        1ad32c:	e3510000 	cmp	r1, #0	; 0x0
        1ad330:	da000029 	ble	1ad3dc <CRingBuffer::UpdateGetVector(long)+0xc4>
        1ad334:	e24dd010 	sub	sp, sp, #16	; 0x10
        1ad338:	e1a0300d 	mov	r3, sp
        1ad33c:	e92d0008 	stmdb	sp!, {r3}
        1ad340:	e28d300c 	add	r3, sp, #12	; 0xc
        1ad344:	e28d2008 	add	r2, sp, #8	; 0x8
        1ad348:	e28d1010 	add	r1, sp, #16	; 0x10
        1ad34c:	e1a00005 	mov	r0, r5
        1ad350:	e595c000 	ldr	ip, [r5]
        1ad354:	e1a0e00f 	mov	lr, pc
        1ad358:	e28cf050 	add	pc, ip, #80	; 0x50
        1ad35c:	e28dd004 	add	sp, sp, #4	; 0x4
        1ad360:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        1ad364:	e3300000 	teq	r0, #0	; 0x0
        1ad368:	0a00000d 	beq	1ad3a4 <CRingBuffer::UpdateGetVector(long)+0x8c>
        1ad36c:	e59d0000 	ldr	r0, [sp]
        1ad370:	e3500000 	cmp	r0, #0	; 0x0
        1ad374:	da00000a 	ble	1ad3a4 <CRingBuffer::UpdateGetVector(long)+0x8c>
        1ad378:	e1540000 	cmp	r4, r0
        1ad37c:	b1a00004 	movlt	r0, r4
        1ad380:	e58d0000 	str	r0, [sp]
        1ad384:	e0444000 	sub	r4, r4, r0
        1ad388:	e5951014 	ldr	r1, [r5, #20]	; fField20
        1ad38c:	e0810000 	add	r0, r1, r0
        1ad390:	e5850014 	str	r0, [r5, #20]	; fField20
        1ad394:	e5951008 	ldr	r1, [r5, #8]	; fField8
        1ad398:	e1300001 	teq	r0, r1
        1ad39c:	05950004 	ldreq	r0, [r5, #4]	; fField4
        1ad3a0:	05850014 	streq	r0, [r5, #20]	; fField20
        1ad3a4:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        1ad3a8:	e3300000 	teq	r0, #0	; 0x0
        1ad3ac:	0a000009 	beq	1ad3d8 <CRingBuffer::UpdateGetVector(long)+0xc0>
        1ad3b0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1ad3b4:	e3500000 	cmp	r0, #0	; 0x0
        1ad3b8:	da000006 	ble	1ad3d8 <CRingBuffer::UpdateGetVector(long)+0xc0>
        1ad3bc:	e1540000 	cmp	r4, r0
        1ad3c0:	b1a00004 	movlt	r0, r4
        1ad3c4:	e58d0004 	str	r0, [sp, #4]	; fField4
        1ad3c8:	e0444000 	sub	r4, r4, r0
        1ad3cc:	e5951014 	ldr	r1, [r5, #20]	; fField20
        1ad3d0:	e0810000 	add	r0, r1, r0
        1ad3d4:	e5a50014 	str	r0, [r5, #20]!	; fField20
        1ad3d8:	e28dd010 	add	sp, sp, #16	; 0x10
        1ad3dc:	e1a00004 	mov	r0, r4
        1ad3e0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CRingBuffer::UpdatePutVector(long)
 * Address: 001ad3e4
 */
CRingBuffer::UpdatePutVector(long) {
    /*
        1ad3e4:	e1a0c00d 	mov	ip, sp
        1ad3e8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1ad3ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ad3f0:	e1a05000 	mov	r5, r0
        1ad3f4:	e1a04001 	mov	r4, r1
        1ad3f8:	e3510000 	cmp	r1, #0	; 0x0
        1ad3fc:	da000029 	ble	1ad4a8 <CRingBuffer::UpdatePutVector(long)+0xc4>
        1ad400:	e24dd010 	sub	sp, sp, #16	; 0x10
        1ad404:	e1a0300d 	mov	r3, sp
        1ad408:	e92d0008 	stmdb	sp!, {r3}
        1ad40c:	e28d300c 	add	r3, sp, #12	; 0xc
        1ad410:	e28d2008 	add	r2, sp, #8	; 0x8
        1ad414:	e28d1010 	add	r1, sp, #16	; 0x10
        1ad418:	e1a00005 	mov	r0, r5
        1ad41c:	e595c000 	ldr	ip, [r5]
        1ad420:	e1a0e00f 	mov	lr, pc
        1ad424:	e28cf04c 	add	pc, ip, #76	; 0x4c
        1ad428:	e28dd004 	add	sp, sp, #4	; 0x4
        1ad42c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        1ad430:	e3300000 	teq	r0, #0	; 0x0
        1ad434:	0a00000d 	beq	1ad470 <CRingBuffer::UpdatePutVector(long)+0x8c>
        1ad438:	e59d0000 	ldr	r0, [sp]
        1ad43c:	e3500000 	cmp	r0, #0	; 0x0
        1ad440:	da00000a 	ble	1ad470 <CRingBuffer::UpdatePutVector(long)+0x8c>
        1ad444:	e1540000 	cmp	r4, r0
        1ad448:	b1a00004 	movlt	r0, r4
        1ad44c:	e58d0000 	str	r0, [sp]
        1ad450:	e0444000 	sub	r4, r4, r0
        1ad454:	e5951010 	ldr	r1, [r5, #16]	; fField16
        1ad458:	e0810000 	add	r0, r1, r0
        1ad45c:	e5850010 	str	r0, [r5, #16]	; fField16
        1ad460:	e5951008 	ldr	r1, [r5, #8]	; fField8
        1ad464:	e1300001 	teq	r0, r1
        1ad468:	05950004 	ldreq	r0, [r5, #4]	; fField4
        1ad46c:	05850010 	streq	r0, [r5, #16]	; fField16
        1ad470:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        1ad474:	e3300000 	teq	r0, #0	; 0x0
        1ad478:	0a000009 	beq	1ad4a4 <CRingBuffer::UpdatePutVector(long)+0xc0>
        1ad47c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1ad480:	e3500000 	cmp	r0, #0	; 0x0
        1ad484:	da000006 	ble	1ad4a4 <CRingBuffer::UpdatePutVector(long)+0xc0>
        1ad488:	e1540000 	cmp	r4, r0
        1ad48c:	b1a00004 	movlt	r0, r4
        1ad490:	e58d0004 	str	r0, [sp, #4]	; fField4
        1ad494:	e0444000 	sub	r4, r4, r0
        1ad498:	e5951010 	ldr	r1, [r5, #16]	; fField16
        1ad49c:	e0810000 	add	r0, r1, r0
        1ad4a0:	e5a50010 	str	r0, [r5, #16]!	; fField16
        1ad4a4:	e28dd010 	add	sp, sp, #16	; 0x10
        1ad4a8:	e1a00004 	mov	r0, r4
        1ad4ac:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CRingBuffer::MakeShared(unsigned long)
 * Address: 001ad4b0
 */
CRingBuffer::MakeShared(unsigned long) {
    /*
        1ad4b0:	e1a0c00d 	mov	ip, sp
        1ad4b4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1ad4b8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ad4bc:	e1a04000 	mov	r4, r0
        1ad4c0:	e1a05001 	mov	r5, r1
        1ad4c4:	e5d00020 	ldrb	r0, [r0, #32]	; fField32
        1ad4c8:	e2846018 	add	r6, r4, #24	; 0x18
        1ad4cc:	e3300000 	teq	r0, #0	; 0x0
        1ad4d0:	1a000003 	bne	1ad4e4 <CRingBuffer::MakeShared(unsigned long)+0x34>
        1ad4d4:	e1a00006 	mov	r0, r6
        1ad4d8:	eb689d67 	bl	1bd4a7c <TUSharedMem::$Init(void)>
        1ad4dc:	e3300000 	teq	r0, #0	; 0x0
        1ad4e0:	1a000004 	bne	1ad4f8 <CRingBuffer::MakeShared(unsigned long)+0x48>
        1ad4e4:	e2853002 	add	r3, r5, #2	; 0x2
        1ad4e8:	e1a00006 	mov	r0, r6
        1ad4ec:	e5941004 	ldr	r1, [r4, #4]	; fField4
        1ad4f0:	e594200c 	ldr	r2, [r4, #12]	; fField12
        1ad4f4:	eb68b61c 	bl	1bdad6c <TUSharedMem::$SetBuffer(void *, unsigned long, unsigned long)>
        1ad4f8:	e3300000 	teq	r0, #0	; 0x0
        1ad4fc:	03a01001 	moveq	r1, #1	; 0x1
        1ad500:	05c41020 	streqb	r1, [r4, #32]	; fField32
        1ad504:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: CRingBuffer::UnShare(void)
 * Address: 001ad508
 */
CRingBuffer::UnShare(void) {
    /*
        1ad508:	e1a0c00d 	mov	ip, sp
        1ad50c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1ad510:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ad514:	e1a04000 	mov	r4, r0
        1ad518:	e3a05000 	mov	r5, #0	; 0x0
        1ad51c:	e5d00020 	ldrb	r0, [r0, #32]	; fField32
        1ad520:	e3300000 	teq	r0, #0	; 0x0
        1ad524:	0a000003 	beq	1ad538 <CRingBuffer::UnShare(void)+0x30>
        1ad528:	e2840018 	add	r0, r4, #24	; 0x18
        1ad52c:	eb6890db 	bl	1bd18a0 <TUObject::$DestroyObject(void)>
        1ad530:	e3a00000 	mov	r0, #0	; 0x0
        1ad534:	e5c40020 	strb	r0, [r4, #32]	; fField32
        1ad538:	e1a00005 	mov	r0, r5
        1ad53c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CRingBuffer::GetnAt(long, unsigned char *, long)
 * Address: 001ad540
 */
CRingBuffer::GetnAt(long, unsigned char *, long) {
    /*
        1ad540:	e1a0c00d 	mov	ip, sp
        1ad544:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1ad548:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ad54c:	e1a04000 	mov	r4, r0
        1ad550:	e1a05001 	mov	r5, r1
        1ad554:	e1a07002 	mov	r7, r2
        1ad558:	e1a06003 	mov	r6, r3
        1ad55c:	e3a08000 	mov	r8, #0	; 0x0
        1ad560:	e5901000 	ldr	r1, [r0]
        1ad564:	e1a0e00f 	mov	lr, pc
        1ad568:	e281f040 	add	pc, r1, #64	; 0x40
        1ad56c:	e1500005 	cmp	r0, r5
        1ad570:	da000010 	ble	1ad5b8 <CRingBuffer::GetnAt(long, unsigned char *, long)+0x78>
        1ad574:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1ad578:	e1a09000 	mov	r9, r0
        1ad57c:	e0800005 	add	r0, r0, r5
        1ad580:	e5840014 	str	r0, [r4, #20]	; fField20
        1ad584:	e5942008 	ldr	r2, [r4, #8]	; fField8
        1ad588:	e1500002 	cmp	r0, r2
        1ad58c:	2594100c 	ldrcs	r1, [r4, #12]	; fField12
        1ad590:	20400001 	subcs	r0, r0, r1
        1ad594:	25840014 	strcs	r0, [r4, #20]	; fField20
        1ad598:	e1a02006 	mov	r2, r6
        1ad59c:	e1a01007 	mov	r1, r7
        1ad5a0:	e1a00004 	mov	r0, r4
        1ad5a4:	e5943000 	ldr	r3, [r4]
        1ad5a8:	e1a0e00f 	mov	lr, pc
        1ad5ac:	e283f014 	add	pc, r3, #20	; 0x14
        1ad5b0:	e1a08000 	mov	r8, r0
        1ad5b4:	e5a49014 	str	r9, [r4, #20]!	; fField20
        1ad5b8:	e1a00008 	mov	r0, r8
        1ad5bc:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: CRingBuffer::Init(void *, long, unsigned char, long, long)
 * Address: 001ad5c0
 */
CRingBuffer::Init(void *, long, unsigned char, long, long) {
    /*
        1ad5c0:	e1a0c00d 	mov	ip, sp
        1ad5c4:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1ad5c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ad5cc:	e1a04000 	mov	r4, r0
        1ad5d0:	e1a06001 	mov	r6, r1
        1ad5d4:	e1a05002 	mov	r5, r2
        1ad5d8:	e20370ff 	and	r7, r3, #255	; 0xff
        1ad5dc:	e59b8008 	ldr	r8, [fp, #8]	; fField8
        1ad5e0:	e59b9004 	ldr	r9, [fp, #4]	; fField4
        1ad5e4:	e5d00021 	ldrb	r0, [r0, #33]	; fField33
        1ad5e8:	e3300000 	teq	r0, #0	; 0x0
        1ad5ec:	15940004 	ldrne	r0, [r4, #4]	; fField4
        1ad5f0:	13300000 	teqne	r0, #0	; 0x0
        1ad5f4:	1b688039 	blne	1bcd6e0 <$__dl(void *)>
        1ad5f8:	e5846004 	str	r6, [r4, #4]	; fField4
        1ad5fc:	e5c47021 	strb	r7, [r4, #33]	; fField33
        1ad600:	e584500c 	str	r5, [r4, #12]	; fField12
        1ad604:	e0860005 	add	r0, r6, r5
        1ad608:	e5840008 	str	r0, [r4, #8]	; fField8
        1ad60c:	e0860009 	add	r0, r6, r9
        1ad610:	e5840014 	str	r0, [r4, #20]	; fField20
        1ad614:	e0800008 	add	r0, r0, r8
        1ad618:	e5a40010 	str	r0, [r4, #16]!	; fField16
        1ad61c:	e3a00000 	mov	r0, #0	; 0x0
        1ad620:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: CRingBuffer::Peek(void)
 * Address: 001ad624
 */
CRingBuffer::Peek(void) {
    /*
        1ad624:	e2801010 	add	r1, r0, #16	; 0x10
        1ad628:	e8910003 	ldmia	r1, {r0, r1}
        1ad62c:	e1310000 	teq	r1, r0
        1ad630:	15d10000 	ldrneb	r0, [r1]
        1ad634:	03e00000 	mvneq	r0, #0	; 0x0
        1ad638:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CRingBuffer::Next(void)
 * Address: 001ad63c
 */
CRingBuffer::Next(void) {
    /*
        1ad63c:	e5901014 	ldr	r1, [r0, #20]	; fField20
        1ad640:	e5902010 	ldr	r2, [r0, #16]	; fField16
        1ad644:	e1310002 	teq	r1, r2
        1ad648:	0a000009 	beq	1ad674 <CRingBuffer::Next(void)+0x38>
        1ad64c:	e2811001 	add	r1, r1, #1	; 0x1
        1ad650:	e5801014 	str	r1, [r0, #20]	; fField20
        1ad654:	e5903008 	ldr	r3, [r0, #8]	; fField8
        1ad658:	e1310003 	teq	r1, r3
        1ad65c:	05901004 	ldreq	r1, [r0, #4]	; fField4
        1ad660:	05801014 	streq	r1, [r0, #20]	; fField20
        1ad664:	e5900014 	ldr	r0, [r0, #20]	; fField20
        1ad668:	e1300002 	teq	r0, r2
        1ad66c:	15d00000 	ldrneb	r0, [r0]
        1ad670:	11a0f00e 	movne	pc, lr
        1ad674:	e3e00000 	mvn	r0, #0	; 0x0
        1ad678:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CRingBuffer::Skip(void)
 * Address: 001ad67c
 */
CRingBuffer::Skip(void) {
    /*
        1ad67c:	e5901014 	ldr	r1, [r0, #20]	; fField20
        1ad680:	e5902010 	ldr	r2, [r0, #16]	; fField16
        1ad684:	e1310002 	teq	r1, r2
        1ad688:	0a000009 	beq	1ad6b4 <CRingBuffer::Skip(void)+0x38>
        1ad68c:	e2811001 	add	r1, r1, #1	; 0x1
        1ad690:	e5801014 	str	r1, [r0, #20]	; fField20
        1ad694:	e5903008 	ldr	r3, [r0, #8]	; fField8
        1ad698:	e1310003 	teq	r1, r3
        1ad69c:	05901004 	ldreq	r1, [r0, #4]	; fField4
        1ad6a0:	05801014 	streq	r1, [r0, #20]	; fField20
        1ad6a4:	e5900014 	ldr	r0, [r0, #20]	; fField20
        1ad6a8:	e1300002 	teq	r0, r2
        1ad6ac:	13a00000 	movne	r0, #0	; 0x0
        1ad6b0:	11a0f00e 	movne	pc, lr
        1ad6b4:	e3e00000 	mvn	r0, #0	; 0x0
        1ad6b8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CRingBuffer::Get(void)
 * Address: 001ad6bc
 */
CRingBuffer::Get(void) {
    /*
        1ad6bc:	e1a0c00d 	mov	ip, sp
        1ad6c0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1ad6c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ad6c8:	e1a04000 	mov	r4, r0
        1ad6cc:	e5901000 	ldr	r1, [r0]
        1ad6d0:	e1a0e00f 	mov	lr, pc
        1ad6d4:	e281f038 	add	pc, r1, #56	; 0x38
        1ad6d8:	e3300000 	teq	r0, #0	; 0x0
        1ad6dc:	13e00000 	mvnne	r0, #0	; 0x0
        1ad6e0:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        1ad6e4:	e5941014 	ldr	r1, [r4, #20]	; fField20
        1ad6e8:	e4d10001 	ldrb	r0, [r1], #1
        1ad6ec:	e5841014 	str	r1, [r4, #20]	; fField20
        1ad6f0:	e5942008 	ldr	r2, [r4, #8]	; fField8
        1ad6f4:	e1310002 	teq	r1, r2
        1ad6f8:	05941004 	ldreq	r1, [r4, #4]	; fField4
        1ad6fc:	05a41014 	streq	r1, [r4, #20]!	; fField20
        1ad700:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: CRingBuffer::Getn(unsigned char *, long)
 * Address: 001ad704
 */
CRingBuffer::Getn(unsigned char *, long) {
    /*
        1ad704:	e1a0c00d 	mov	ip, sp
        1ad708:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1ad70c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ad710:	e1a04002 	mov	r4, r2
        1ad714:	e52d2004 	str	r2, [sp, -#4]!	; fField4
        1ad718:	e1a0200d 	mov	r2, sp
        1ad71c:	e5903000 	ldr	r3, [r0]
        1ad720:	e1a0e00f 	mov	lr, pc
        1ad724:	e283f018 	add	pc, r3, #24	; 0x18
        1ad728:	e49d0004 	ldr	r0, [sp], #4	; fField4
        1ad72c:	e0440000 	sub	r0, r4, r0
        1ad730:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: CRingBuffer::CopyOut(unsigned char *, long &)
 * Address: 001ad734
 */
CRingBuffer::CopyOut(unsigned char *, long &) {
    /*
        1ad734:	e1a0c00d 	mov	ip, sp
        1ad738:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1ad73c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ad740:	e1a04000 	mov	r4, r0
        1ad744:	e1a06001 	mov	r6, r1
        1ad748:	e1a05002 	mov	r5, r2
        1ad74c:	e24dd010 	sub	sp, sp, #16	; 0x10
        1ad750:	e5920000 	ldr	r0, [r2]
        1ad754:	e3300000 	teq	r0, #0	; 0x0
        1ad758:	1a000001 	bne	1ad764 <CRingBuffer::CopyOut(unsigned char *, long &)+0x30>
        1ad75c:	e3a00000 	mov	r0, #0	; 0x0
        1ad760:	ea000041 	b	1ad86c <CRingBuffer::CopyOut(unsigned char *, long &)+0x138>
        1ad764:	e1a0300d 	mov	r3, sp
        1ad768:	e92d0008 	stmdb	sp!, {r3}
        1ad76c:	e28d300c 	add	r3, sp, #12	; 0xc
        1ad770:	e28d2008 	add	r2, sp, #8	; 0x8
        1ad774:	e28d1010 	add	r1, sp, #16	; 0x10
        1ad778:	e1a00004 	mov	r0, r4
        1ad77c:	e594c000 	ldr	ip, [r4]
        1ad780:	e1a0e00f 	mov	lr, pc
        1ad784:	e28cf050 	add	pc, ip, #80	; 0x50
        1ad788:	e28dd004 	add	sp, sp, #4	; 0x4
        1ad78c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        1ad790:	e3300000 	teq	r0, #0	; 0x0
        1ad794:	0a000017 	beq	1ad7f8 <CRingBuffer::CopyOut(unsigned char *, long &)+0xc4>
        1ad798:	e59d0000 	ldr	r0, [sp]
        1ad79c:	e3500000 	cmp	r0, #0	; 0x0
        1ad7a0:	da000014 	ble	1ad7f8 <CRingBuffer::CopyOut(unsigned char *, long &)+0xc4>
        1ad7a4:	e5951000 	ldr	r1, [r5]
        1ad7a8:	e1510000 	cmp	r1, r0
        1ad7ac:	a1a02000 	movge	r2, r0
        1ad7b0:	b1a02001 	movlt	r2, r1
        1ad7b4:	e1a01006 	mov	r1, r6
        1ad7b8:	e58d2000 	str	r2, [sp]
        1ad7bc:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        1ad7c0:	eb68c5e3 	bl	1bdef54 <$BlockMove>
        1ad7c4:	e59d0000 	ldr	r0, [sp]
        1ad7c8:	e0866000 	add	r6, r6, r0
        1ad7cc:	e5952000 	ldr	r2, [r5]
        1ad7d0:	e0420000 	sub	r0, r2, r0
        1ad7d4:	e5850000 	str	r0, [r5]
        1ad7d8:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1ad7dc:	e59d1000 	ldr	r1, [sp]
        1ad7e0:	e0800001 	add	r0, r0, r1
        1ad7e4:	e5840014 	str	r0, [r4, #20]	; fField20
        1ad7e8:	e5941008 	ldr	r1, [r4, #8]	; fField8
        1ad7ec:	e1300001 	teq	r0, r1
        1ad7f0:	05940004 	ldreq	r0, [r4, #4]	; fField4
        1ad7f4:	05840014 	streq	r0, [r4, #20]	; fField20
        1ad7f8:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        1ad7fc:	e3300000 	teq	r0, #0	; 0x0
        1ad800:	0a000012 	beq	1ad850 <CRingBuffer::CopyOut(unsigned char *, long &)+0x11c>
        1ad804:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        1ad808:	e3510000 	cmp	r1, #0	; 0x0
        1ad80c:	da00000f 	ble	1ad850 <CRingBuffer::CopyOut(unsigned char *, long &)+0x11c>
        1ad810:	e5950000 	ldr	r0, [r5]
        1ad814:	e1500001 	cmp	r0, r1
        1ad818:	a1a02001 	movge	r2, r1
        1ad81c:	b1a02000 	movlt	r2, r0
        1ad820:	e1a01006 	mov	r1, r6
        1ad824:	e58d2004 	str	r2, [sp, #4]	; fField4
        1ad828:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        1ad82c:	eb68c5c8 	bl	1bdef54 <$BlockMove>
        1ad830:	e5951000 	ldr	r1, [r5]
        1ad834:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1ad838:	e0410000 	sub	r0, r1, r0
        1ad83c:	e5850000 	str	r0, [r5]
        1ad840:	e5941014 	ldr	r1, [r4, #20]	; fField20
        1ad844:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1ad848:	e0810000 	add	r0, r1, r0
        1ad84c:	e5840014 	str	r0, [r4, #20]	; fField20
        1ad850:	e1a00004 	mov	r0, r4
        1ad854:	e5941000 	ldr	r1, [r4]
        1ad858:	e1a0e00f 	mov	lr, pc
        1ad85c:	e281f038 	add	pc, r1, #56	; 0x38
        1ad860:	e3300000 	teq	r0, #0	; 0x0
        1ad864:	0affffbc 	beq	1ad75c <CRingBuffer::CopyOut(unsigned char *, long &)+0x28>
        1ad868:	e3e00000 	mvn	r0, #0	; 0x0
        1ad86c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

